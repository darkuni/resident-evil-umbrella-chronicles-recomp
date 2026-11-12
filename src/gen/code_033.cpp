#include "funcs.h"
#pragma GCC diagnostic ignored "-Wunused-label"

// LCEnable
void f_8025A608(Ctx* __restrict c) {
  trace_call(0x8025A608u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8025A608
  c->r[0]=c->lr; // 8025A60C
  W32(c->r[1]+0x00000014u,c->r[0]); // 8025A610
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8025A614
  c->lr=0x8025A61Cu; f_8025EA10(c); // 8025A618
  c->r[31]=c->r[3]|c->r[3]; // 8025A61C
  c->lr=0x8025A624u; f_8025A53C(c); // 8025A620
  c->r[3]=c->r[31]|c->r[31]; // 8025A624
  c->lr=0x8025A62Cu; f_8025EA38(c); // 8025A628
  c->r[0]=R32(c->r[1]+0x00000014u); // 8025A62C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8025A630
  c->lr=c->r[0]; // 8025A634
  c->r[1]=c->r[1]+0x00000010u; // 8025A638
  return; // 8025A63C
}

// LCDisable
void f_8025A640(Ctx* __restrict c) {
  trace_call(0x8025A640u);
  c->r[3]=0u+0xE0000000u; // 8025A640
  c->r[4]=0u+0x00000200u; // 8025A644
  c->ctr=c->r[4]; // 8025A648
L_8025A64C:;
  /* dcbi */ // 8025A64C
  c->r[3]=c->r[3]+0x00000020u; // 8025A650
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_8025A64C; } // 8025A654
  c->r[4]=mfspr(c,920); // 8025A658
  c->r[4]=rotl(c->r[4],0)&0xEFFFFFFFu; // 8025A65C
  mtspr(c,920,c->r[4]); // 8025A660
  return; // 8025A664
}

// LCLoadBlocks
void f_8025A668(Ctx* __restrict c) {
  trace_call(0x8025A668u);
  c->r[6]=rotl(c->r[5],30)&0x0000001Fu; // 8025A668
  c->r[4]=rotl(c->r[4],0)&0x1FFFFFFFu; // 8025A66C
  c->r[6]=c->r[6]|c->r[4]; // 8025A670
  mtspr(c,922,c->r[6]); // 8025A674
  c->r[6]=rotl(c->r[5],2)&0x0000000Cu; // 8025A678
  c->r[6]=c->r[6]|c->r[3]; // 8025A67C
  c->r[6]=c->r[6]|0x00000012u; // 8025A680
  mtspr(c,923,c->r[6]); // 8025A684
  return; // 8025A688
}

// LCStoreBlocks
void f_8025A68C(Ctx* __restrict c) {
  trace_call(0x8025A68Cu);
  c->r[6]=rotl(c->r[5],30)&0x0000001Fu; // 8025A68C
  c->r[3]=rotl(c->r[3],0)&0x1FFFFFFFu; // 8025A690
  c->r[6]=c->r[6]|c->r[3]; // 8025A694
  mtspr(c,922,c->r[6]); // 8025A698
  c->r[6]=rotl(c->r[5],2)&0x0000000Cu; // 8025A69C
  c->r[6]=c->r[6]|c->r[4]; // 8025A6A0
  c->r[6]=c->r[6]|0x00000002u; // 8025A6A4
  mtspr(c,923,c->r[6]); // 8025A6A8
  return; // 8025A6AC
}

// LCStoreData
void f_8025A6B0(Ctx* __restrict c) {
  trace_call(0x8025A6B0u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8025A6B0
  c->r[0]=c->lr; // 8025A6B4
  W32(c->r[1]+0x00000024u,c->r[0]); // 8025A6B8
  c->r[0]=c->r[5]+0x0000001Fu; // 8025A6BC
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8025A6C0
  c->r[31]=rotl(c->r[0],27)&0x07FFFFFFu; // 8025A6C4
  c->r[0]=c->r[31]+0x0000007Fu; // 8025A6C8
  W32(c->r[1]+0x00000018u,c->r[30]); // 8025A6CC
  c->r[30]=rotl(c->r[0],25)&0x01FFFFFFu; // 8025A6D0
  W32(c->r[1]+0x00000014u,c->r[29]); // 8025A6D4
  c->r[29]=c->r[4]|c->r[4]; // 8025A6D8
  W32(c->r[1]+0x00000010u,c->r[28]); // 8025A6DC
  c->r[28]=c->r[3]|c->r[3]; // 8025A6E0
  goto L_8025A724; // 8025A6E4
L_8025A6E8:;
  cmpu(c,0,c->r[31],0x00000080u); // 8025A6E8
  if (!crb(c,0)) { goto L_8025A708; } // 8025A6EC
  c->r[3]=c->r[28]|c->r[28]; // 8025A6F0
  c->r[4]=c->r[29]|c->r[29]; // 8025A6F4
  c->r[5]=c->r[31]|c->r[31]; // 8025A6F8
  c->lr=0x8025A700u; f_8025A68C(c); // 8025A6FC
  c->r[31]=0u+0x00000000u; // 8025A700
  goto L_8025A724; // 8025A704
L_8025A708:;
  c->r[3]=c->r[28]|c->r[28]; // 8025A708
  c->r[4]=c->r[29]|c->r[29]; // 8025A70C
  c->r[5]=0u+0x00000000u; // 8025A710
  c->lr=0x8025A718u; f_8025A68C(c); // 8025A714
  c->r[31]=c->r[31]+0xFFFFFF80u; // 8025A718
  c->r[28]=c->r[28]+0x00001000u; // 8025A71C
  c->r[29]=c->r[29]+0x00001000u; // 8025A720
L_8025A724:;
  cmps(c,0,(int32_t)c->r[31],0); // 8025A724
  if (!crb(c,2)) { IRQCHK(c); goto L_8025A6E8; } // 8025A728
  c->r[3]=c->r[30]|c->r[30]; // 8025A72C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8025A730
  c->r[30]=R32(c->r[1]+0x00000018u); // 8025A734
  c->r[29]=R32(c->r[1]+0x00000014u); // 8025A738
  c->r[28]=R32(c->r[1]+0x00000010u); // 8025A73C
  c->r[0]=R32(c->r[1]+0x00000024u); // 8025A740
  c->lr=c->r[0]; // 8025A744
  c->r[1]=c->r[1]+0x00000020u; // 8025A748
  return; // 8025A74C
}

// LCQueueLength
void f_8025A750(Ctx* __restrict c) {
  trace_call(0x8025A750u);
  c->r[4]=mfspr(c,920); // 8025A750
  c->r[3]=rotl(c->r[4],8)&0x0000000Fu; // 8025A754
  return; // 8025A758
}

// LCQueueWait
void f_8025A75C(Ctx* __restrict c) {
  trace_call(0x8025A75Cu);
L_8025A75C:;
  c->r[4]=mfspr(c,920); // 8025A75C
  c->r[4]=rotl(c->r[4],8)&0x0000000Fu; // 8025A760
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[3]); // 8025A764
  if (crb(c,1)) { IRQCHK(c); goto L_8025A75C; } // 8025A768
  return; // 8025A76C
}

// DMAErrorHandler
void f_8025A770(Ctx* __restrict c) {
  trace_call(0x8025A770u);
  {uint32_t ea=c->r[1]+0xFFFFFF80u; W32(ea,c->r[1]); c->r[1]=ea;} // 8025A770
  c->r[0]=c->lr; // 8025A774
  W32(c->r[1]+0x00000084u,c->r[0]); // 8025A778
  W32(c->r[1]+0x0000007Cu,c->r[31]); // 8025A77C
  W32(c->r[1]+0x00000078u,c->r[30]); // 8025A780
  W32(c->r[1]+0x00000074u,c->r[29]); // 8025A784
  c->r[29]=c->r[4]|c->r[4]; // 8025A788
  if (!crb(c,6)) { goto L_8025A7B0; } // 8025A78C
  {uint32_t ea=c->r[1]+0x00000028u; WF64(ea,c->f[1]);} // 8025A790
  {uint32_t ea=c->r[1]+0x00000030u; WF64(ea,c->f[2]);} // 8025A794
  {uint32_t ea=c->r[1]+0x00000038u; WF64(ea,c->f[3]);} // 8025A798
  {uint32_t ea=c->r[1]+0x00000040u; WF64(ea,c->f[4]);} // 8025A79C
  {uint32_t ea=c->r[1]+0x00000048u; WF64(ea,c->f[5]);} // 8025A7A0
  {uint32_t ea=c->r[1]+0x00000050u; WF64(ea,c->f[6]);} // 8025A7A4
  {uint32_t ea=c->r[1]+0x00000058u; WF64(ea,c->f[7]);} // 8025A7A8
  {uint32_t ea=c->r[1]+0x00000060u; WF64(ea,c->f[8]);} // 8025A7AC
L_8025A7B0:;
  c->r[31]=0u+0x80410000u; // 8025A7B0
  W32(c->r[1]+0x00000008u,c->r[3]); // 8025A7B4
  c->r[31]=c->r[31]+0x00002668u; // 8025A7B8
  W32(c->r[1]+0x0000000Cu,c->r[4]); // 8025A7BC
  W32(c->r[1]+0x00000010u,c->r[5]); // 8025A7C0
  W32(c->r[1]+0x00000014u,c->r[6]); // 8025A7C4
  W32(c->r[1]+0x00000018u,c->r[7]); // 8025A7C8
  W32(c->r[1]+0x0000001Cu,c->r[8]); // 8025A7CC
  W32(c->r[1]+0x00000020u,c->r[9]); // 8025A7D0
  W32(c->r[1]+0x00000024u,c->r[10]); // 8025A7D4
  c->lr=0x8025A7DCu; f_80257ECC(c); // 8025A7D8
  c->r[30]=c->r[3]|c->r[3]; // 8025A7DC
  c->r[3]=c->r[31]+0x00000030u; // 8025A7E0
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8025A7E4
  c->lr=0x8025A7ECu; f_801CCA38(c); // 8025A7E8
  c->r[5]=R32(c->r[29]+0x0000019Cu); // 8025A7EC
  c->r[4]=c->r[30]|c->r[30]; // 8025A7F0
  c->r[3]=c->r[31]+0x00000048u; // 8025A7F4
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8025A7F8
  c->lr=0x8025A800u; f_801CCA38(c); // 8025A7FC
  c->r[0]=rotl(c->r[30],0)&0x00F00000u; cr0(c,c->r[0]); // 8025A800
  if (crb(c,2)) { goto L_8025A814; } // 8025A804
  c->r[0]=R32(c->r[29]+0x0000019Cu); // 8025A808
  c->r[0]=rotl(c->r[0],0)&0x00200000u; cr0(c,c->r[0]); // 8025A80C
  if (!crb(c,2)) { goto L_8025A82C; } // 8025A810
L_8025A814:;
  c->r[3]=c->r[31]+0x00000068u; // 8025A814
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8025A818
  c->lr=0x8025A820u; f_801CCA38(c); // 8025A81C
  c->r[3]=c->r[29]|c->r[29]; // 8025A820
  c->lr=0x8025A828u; f_8025AF4C(c); // 8025A824
  c->lr=0x8025A82Cu; f_80257E40(c); // 8025A828
L_8025A82C:;
  c->r[3]=c->r[31]+0x00000098u; // 8025A82C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8025A830
  c->lr=0x8025A838u; f_801CCA38(c); // 8025A834
  c->r[3]=c->r[31]+0x000000D4u; // 8025A838
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8025A83C
  c->lr=0x8025A844u; f_801CCA38(c); // 8025A840
  c->r[0]=rotl(c->r[30],0)&0x00800000u; cr0(c,c->r[0]); // 8025A844
  if (crb(c,2)) { goto L_8025A858; } // 8025A848
  c->r[3]=c->r[31]+0x0000010Cu; // 8025A84C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8025A850
  c->lr=0x8025A858u; f_801CCA38(c); // 8025A854
L_8025A858:;
  c->r[0]=rotl(c->r[30],0)&0x00400000u; cr0(c,c->r[0]); // 8025A858
  if (crb(c,2)) { goto L_8025A86C; } // 8025A85C
  c->r[3]=c->r[31]+0x0000014Cu; // 8025A860
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8025A864
  c->lr=0x8025A86Cu; f_801CCA38(c); // 8025A868
L_8025A86C:;
  c->r[0]=rotl(c->r[30],0)&0x00200000u; cr0(c,c->r[0]); // 8025A86C
  if (crb(c,2)) { goto L_8025A880; } // 8025A870
  c->r[3]=c->r[31]+0x00000178u; // 8025A874
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8025A878
  c->lr=0x8025A880u; f_801CCA38(c); // 8025A87C
L_8025A880:;
  c->r[0]=rotl(c->r[30],0)&0x00100000u; cr0(c,c->r[0]); // 8025A880
  if (crb(c,2)) { goto L_8025A894; } // 8025A884
  c->r[3]=c->r[31]+0x00000198u; // 8025A888
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8025A88C
  c->lr=0x8025A894u; f_801CCA38(c); // 8025A890
L_8025A894:;
  c->r[3]=c->r[30]|c->r[30]; // 8025A894
  c->lr=0x8025A89Cu; f_80257ED4(c); // 8025A898
  c->r[0]=R32(c->r[1]+0x00000084u); // 8025A89C
  c->r[31]=R32(c->r[1]+0x0000007Cu); // 8025A8A0
  c->r[30]=R32(c->r[1]+0x00000078u); // 8025A8A4
  c->r[29]=R32(c->r[1]+0x00000074u); // 8025A8A8
  c->lr=c->r[0]; // 8025A8AC
  c->r[1]=c->r[1]+0x00000080u; // 8025A8B0
  return; // 8025A8B4
}

// __OSCacheInit
void f_8025A8B8(Ctx* __restrict c) {
  trace_call(0x8025A8B8u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8025A8B8
  c->r[0]=c->lr; // 8025A8BC
  W32(c->r[1]+0x00000014u,c->r[0]); // 8025A8C0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8025A8C4
  c->r[31]=0u+0x80410000u; // 8025A8C8
  c->r[31]=c->r[31]+0x00002668u; // 8025A8CC
  W32(c->r[1]+0x00000008u,c->r[30]); // 8025A8D0
  c->lr=0x8025A8D8u; f_80257E10(c); // 8025A8D4
  c->r[0]=rotl(c->r[3],0)&0x00008000u; cr0(c,c->r[0]); // 8025A8D8
  if (!crb(c,2)) { goto L_8025A8F0; } // 8025A8DC
  c->lr=0x8025A8E4u; f_8025A528(c); // 8025A8E0
  c->r[3]=c->r[31]+0x000001B4u; // 8025A8E4
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8025A8E8
  c->lr=0x8025A8F0u; f_80258008(c); // 8025A8EC
L_8025A8F0:;
  c->lr=0x8025A8F4u; f_80257E10(c); // 8025A8F0
  c->r[0]=rotl(c->r[3],0)&0x00004000u; cr0(c,c->r[0]); // 8025A8F4
  if (!crb(c,2)) { goto L_8025A90C; } // 8025A8F8
  c->lr=0x8025A900u; f_8025A3C0(c); // 8025A8FC
  c->r[3]=c->r[31]+0x000001D0u; // 8025A900
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8025A904
  c->lr=0x8025A90Cu; f_80258008(c); // 8025A908
L_8025A90C:;
  c->lr=0x8025A910u; f_80257E20(c); // 8025A90C
  c->r[0]=rotl(c->r[3],0)&0x80000000u; cr0(c,c->r[0]); // 8025A910
  if (!crb(c,2)) { goto L_8025A9BC; } // 8025A914
  c->lr=0x8025A91Cu; f_80257E00(c); // 8025A918
  c->r[30]=c->r[3]|c->r[3]; // 8025A91C
  /* sync */ // 8025A920
  c->r[3]=0u+0x00000030u; // 8025A924
  c->lr=0x8025A92Cu; f_80257E08(c); // 8025A928
  /* sync */ // 8025A92C
  /* sync */ // 8025A930
  c->lr=0x8025A938u; f_80257E20(c); // 8025A934
  c->r[3]=rotl(c->r[3],0)&0x7FFFFFFFu; // 8025A938
  c->lr=0x8025A940u; f_80257E28(c); // 8025A93C
  /* sync */ // 8025A940
  /* sync */ // 8025A944
  c->lr=0x8025A94Cu; f_80257E20(c); // 8025A948
  c->r[3]=rotl(c->r[3],0)&0x7FFFFFFFu; // 8025A94C
  c->lr=0x8025A954u; f_80257E28(c); // 8025A950
  /* sync */ // 8025A954
  c->lr=0x8025A95Cu; f_80257E20(c); // 8025A958
  c->r[3]=c->r[3]|0x00200000u; // 8025A95C
  c->lr=0x8025A964u; f_80257E28(c); // 8025A960
L_8025A964:;
  c->lr=0x8025A968u; f_80257E20(c); // 8025A964
  c->r[0]=rotl(c->r[3],0)&0x00000001u; cr0(c,c->r[0]); // 8025A968
  if (!crb(c,2)) { IRQCHK(c); goto L_8025A964; } // 8025A96C
  c->lr=0x8025A974u; f_80257E20(c); // 8025A970
  c->r[3]=rotl(c->r[3],0)&0xFFDFFFFFu; // 8025A974
  c->lr=0x8025A97Cu; f_80257E28(c); // 8025A978
  goto L_8025A98C; // 8025A97C
L_8025A980:;
  c->r[3]=c->r[31]+0x00000000u; // 8025A980
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8025A984
  c->lr=0x8025A98Cu; f_80258008(c); // 8025A988
L_8025A98C:;
  c->lr=0x8025A990u; f_80257E20(c); // 8025A98C
  c->r[0]=rotl(c->r[3],0)&0x00000001u; cr0(c,c->r[0]); // 8025A990
  if (!crb(c,2)) { IRQCHK(c); goto L_8025A980; } // 8025A994
  c->r[3]=c->r[30]|c->r[30]; // 8025A998
  c->lr=0x8025A9A0u; f_80257E08(c); // 8025A99C
  c->lr=0x8025A9A4u; f_80257E20(c); // 8025A9A0
  c->r[0]=c->r[3]|0x80000000u; // 8025A9A4
  c->r[3]=rotl(c->r[0],0)&0xFFDFFFFFu; // 8025A9A8
  c->lr=0x8025A9B0u; f_80257E28(c); // 8025A9AC
  c->r[3]=c->r[31]+0x000001ECu; // 8025A9B0
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8025A9B4
  c->lr=0x8025A9BCu; f_80258008(c); // 8025A9B8
L_8025A9BC:;
  c->r[4]=0u+0x80260000u; // 8025A9BC
  c->r[3]=0u+0x00000001u; // 8025A9C0
  c->r[4]=c->r[4]+0xFFFFA770u; // 8025A9C4
  c->lr=0x8025A9CCu; f_8025B27C(c); // 8025A9C8
  c->r[3]=c->r[31]+0x00000204u; // 8025A9CC
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8025A9D0
  c->lr=0x8025A9D8u; f_80258008(c); // 8025A9D4
  c->r[0]=R32(c->r[1]+0x00000014u); // 8025A9D8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8025A9DC
  c->r[30]=R32(c->r[1]+0x00000008u); // 8025A9E0
  c->lr=c->r[0]; // 8025A9E4
  c->r[1]=c->r[1]+0x00000010u; // 8025A9E8
  return; // 8025A9EC
}

// __OSLoadFPUContext
void f_8025A9F0(Ctx* __restrict c) {
  trace_call(0x8025A9F0u);
  c->r[5]=R16(c->r[4]+0x000001A2u); // 8025A9F0
  c->r[5]=rotl(c->r[5],0)&0x00000001u; cr0(c,c->r[5]); // 8025A9F4
  if (crb(c,2)) { goto L_8025AB10; } // 8025A9F8
  {uint32_t ea=c->r[4]+0x00000190u; c->f[0]=RF64(ea);} // 8025A9FC
  c->fpscr=(uint32_t)d2u(c->f[0]); // 8025AA00
  c->r[5]=mfspr(c,920); // 8025AA04
  c->r[5]=rotl(c->r[5],3)&0x00000001u; cr0(c,c->r[5]); // 8025AA08
  if (crb(c,2)) { goto L_8025AA90; } // 8025AA0C
  {uint32_t ea=c->r[4]+0x000001C8u; psq_load(c,0,ea,0,0);} // 8025AA10
  {uint32_t ea=c->r[4]+0x000001D0u; psq_load(c,1,ea,0,0);} // 8025AA14
  {uint32_t ea=c->r[4]+0x000001D8u; psq_load(c,2,ea,0,0);} // 8025AA18
  {uint32_t ea=c->r[4]+0x000001E0u; psq_load(c,3,ea,0,0);} // 8025AA1C
  {uint32_t ea=c->r[4]+0x000001E8u; psq_load(c,4,ea,0,0);} // 8025AA20
  {uint32_t ea=c->r[4]+0x000001F0u; psq_load(c,5,ea,0,0);} // 8025AA24
  {uint32_t ea=c->r[4]+0x000001F8u; psq_load(c,6,ea,0,0);} // 8025AA28
  {uint32_t ea=c->r[4]+0x00000200u; psq_load(c,7,ea,0,0);} // 8025AA2C
  {uint32_t ea=c->r[4]+0x00000208u; psq_load(c,8,ea,0,0);} // 8025AA30
  {uint32_t ea=c->r[4]+0x00000210u; psq_load(c,9,ea,0,0);} // 8025AA34
  {uint32_t ea=c->r[4]+0x00000218u; psq_load(c,10,ea,0,0);} // 8025AA38
  {uint32_t ea=c->r[4]+0x00000220u; psq_load(c,11,ea,0,0);} // 8025AA3C
  {uint32_t ea=c->r[4]+0x00000228u; psq_load(c,12,ea,0,0);} // 8025AA40
  {uint32_t ea=c->r[4]+0x00000230u; psq_load(c,13,ea,0,0);} // 8025AA44
  {uint32_t ea=c->r[4]+0x00000238u; psq_load(c,14,ea,0,0);} // 8025AA48
  {uint32_t ea=c->r[4]+0x00000240u; psq_load(c,15,ea,0,0);} // 8025AA4C
  {uint32_t ea=c->r[4]+0x00000248u; psq_load(c,16,ea,0,0);} // 8025AA50
  {uint32_t ea=c->r[4]+0x00000250u; psq_load(c,17,ea,0,0);} // 8025AA54
  {uint32_t ea=c->r[4]+0x00000258u; psq_load(c,18,ea,0,0);} // 8025AA58
  {uint32_t ea=c->r[4]+0x00000260u; psq_load(c,19,ea,0,0);} // 8025AA5C
  {uint32_t ea=c->r[4]+0x00000268u; psq_load(c,20,ea,0,0);} // 8025AA60
  {uint32_t ea=c->r[4]+0x00000270u; psq_load(c,21,ea,0,0);} // 8025AA64
  {uint32_t ea=c->r[4]+0x00000278u; psq_load(c,22,ea,0,0);} // 8025AA68
  {uint32_t ea=c->r[4]+0x00000280u; psq_load(c,23,ea,0,0);} // 8025AA6C
  {uint32_t ea=c->r[4]+0x00000288u; psq_load(c,24,ea,0,0);} // 8025AA70
  {uint32_t ea=c->r[4]+0x00000290u; psq_load(c,25,ea,0,0);} // 8025AA74
  {uint32_t ea=c->r[4]+0x00000298u; psq_load(c,26,ea,0,0);} // 8025AA78
  {uint32_t ea=c->r[4]+0x000002A0u; psq_load(c,27,ea,0,0);} // 8025AA7C
  {uint32_t ea=c->r[4]+0x000002A8u; psq_load(c,28,ea,0,0);} // 8025AA80
  {uint32_t ea=c->r[4]+0x000002B0u; psq_load(c,29,ea,0,0);} // 8025AA84
  {uint32_t ea=c->r[4]+0x000002B8u; psq_load(c,30,ea,0,0);} // 8025AA88
  {uint32_t ea=c->r[4]+0x000002C0u; psq_load(c,31,ea,0,0);} // 8025AA8C
L_8025AA90:;
  {uint32_t ea=c->r[4]+0x00000090u; c->f[0]=RF64(ea);} // 8025AA90
  {uint32_t ea=c->r[4]+0x00000098u; c->f[1]=RF64(ea);} // 8025AA94
  {uint32_t ea=c->r[4]+0x000000A0u; c->f[2]=RF64(ea);} // 8025AA98
  {uint32_t ea=c->r[4]+0x000000A8u; c->f[3]=RF64(ea);} // 8025AA9C
  {uint32_t ea=c->r[4]+0x000000B0u; c->f[4]=RF64(ea);} // 8025AAA0
  {uint32_t ea=c->r[4]+0x000000B8u; c->f[5]=RF64(ea);} // 8025AAA4
  {uint32_t ea=c->r[4]+0x000000C0u; c->f[6]=RF64(ea);} // 8025AAA8
  {uint32_t ea=c->r[4]+0x000000C8u; c->f[7]=RF64(ea);} // 8025AAAC
  {uint32_t ea=c->r[4]+0x000000D0u; c->f[8]=RF64(ea);} // 8025AAB0
  {uint32_t ea=c->r[4]+0x000000D8u; c->f[9]=RF64(ea);} // 8025AAB4
  {uint32_t ea=c->r[4]+0x000000E0u; c->f[10]=RF64(ea);} // 8025AAB8
  {uint32_t ea=c->r[4]+0x000000E8u; c->f[11]=RF64(ea);} // 8025AABC
  {uint32_t ea=c->r[4]+0x000000F0u; c->f[12]=RF64(ea);} // 8025AAC0
  {uint32_t ea=c->r[4]+0x000000F8u; c->f[13]=RF64(ea);} // 8025AAC4
  {uint32_t ea=c->r[4]+0x00000100u; c->f[14]=RF64(ea);} // 8025AAC8
  {uint32_t ea=c->r[4]+0x00000108u; c->f[15]=RF64(ea);} // 8025AACC
  {uint32_t ea=c->r[4]+0x00000110u; c->f[16]=RF64(ea);} // 8025AAD0
  {uint32_t ea=c->r[4]+0x00000118u; c->f[17]=RF64(ea);} // 8025AAD4
  {uint32_t ea=c->r[4]+0x00000120u; c->f[18]=RF64(ea);} // 8025AAD8
  {uint32_t ea=c->r[4]+0x00000128u; c->f[19]=RF64(ea);} // 8025AADC
  {uint32_t ea=c->r[4]+0x00000130u; c->f[20]=RF64(ea);} // 8025AAE0
  {uint32_t ea=c->r[4]+0x00000138u; c->f[21]=RF64(ea);} // 8025AAE4
  {uint32_t ea=c->r[4]+0x00000140u; c->f[22]=RF64(ea);} // 8025AAE8
  {uint32_t ea=c->r[4]+0x00000148u; c->f[23]=RF64(ea);} // 8025AAEC
  {uint32_t ea=c->r[4]+0x00000150u; c->f[24]=RF64(ea);} // 8025AAF0
  {uint32_t ea=c->r[4]+0x00000158u; c->f[25]=RF64(ea);} // 8025AAF4
  {uint32_t ea=c->r[4]+0x00000160u; c->f[26]=RF64(ea);} // 8025AAF8
  {uint32_t ea=c->r[4]+0x00000168u; c->f[27]=RF64(ea);} // 8025AAFC
  {uint32_t ea=c->r[4]+0x00000170u; c->f[28]=RF64(ea);} // 8025AB00
  {uint32_t ea=c->r[4]+0x00000178u; c->f[29]=RF64(ea);} // 8025AB04
  {uint32_t ea=c->r[4]+0x00000180u; c->f[30]=RF64(ea);} // 8025AB08
  {uint32_t ea=c->r[4]+0x00000188u; c->f[31]=RF64(ea);} // 8025AB0C
L_8025AB10:;
  return; // 8025AB10
}

// __OSSaveFPUContext
void f_8025AB14(Ctx* __restrict c) {
  trace_call(0x8025AB14u);
  c->r[3]=R16(c->r[5]+0x000001A2u); // 8025AB14
  c->r[3]=c->r[3]|0x00000001u; // 8025AB18
  W16(c->r[5]+0x000001A2u,c->r[3]); // 8025AB1C
  {uint32_t ea=c->r[5]+0x00000090u; WF64(ea,c->f[0]);} // 8025AB20
  {uint32_t ea=c->r[5]+0x00000098u; WF64(ea,c->f[1]);} // 8025AB24
  {uint32_t ea=c->r[5]+0x000000A0u; WF64(ea,c->f[2]);} // 8025AB28
  {uint32_t ea=c->r[5]+0x000000A8u; WF64(ea,c->f[3]);} // 8025AB2C
  {uint32_t ea=c->r[5]+0x000000B0u; WF64(ea,c->f[4]);} // 8025AB30
  {uint32_t ea=c->r[5]+0x000000B8u; WF64(ea,c->f[5]);} // 8025AB34
  {uint32_t ea=c->r[5]+0x000000C0u; WF64(ea,c->f[6]);} // 8025AB38
  {uint32_t ea=c->r[5]+0x000000C8u; WF64(ea,c->f[7]);} // 8025AB3C
  {uint32_t ea=c->r[5]+0x000000D0u; WF64(ea,c->f[8]);} // 8025AB40
  {uint32_t ea=c->r[5]+0x000000D8u; WF64(ea,c->f[9]);} // 8025AB44
  {uint32_t ea=c->r[5]+0x000000E0u; WF64(ea,c->f[10]);} // 8025AB48
  {uint32_t ea=c->r[5]+0x000000E8u; WF64(ea,c->f[11]);} // 8025AB4C
  {uint32_t ea=c->r[5]+0x000000F0u; WF64(ea,c->f[12]);} // 8025AB50
  {uint32_t ea=c->r[5]+0x000000F8u; WF64(ea,c->f[13]);} // 8025AB54
  {uint32_t ea=c->r[5]+0x00000100u; WF64(ea,c->f[14]);} // 8025AB58
  {uint32_t ea=c->r[5]+0x00000108u; WF64(ea,c->f[15]);} // 8025AB5C
  {uint32_t ea=c->r[5]+0x00000110u; WF64(ea,c->f[16]);} // 8025AB60
  {uint32_t ea=c->r[5]+0x00000118u; WF64(ea,c->f[17]);} // 8025AB64
  {uint32_t ea=c->r[5]+0x00000120u; WF64(ea,c->f[18]);} // 8025AB68
  {uint32_t ea=c->r[5]+0x00000128u; WF64(ea,c->f[19]);} // 8025AB6C
  {uint32_t ea=c->r[5]+0x00000130u; WF64(ea,c->f[20]);} // 8025AB70
  {uint32_t ea=c->r[5]+0x00000138u; WF64(ea,c->f[21]);} // 8025AB74
  {uint32_t ea=c->r[5]+0x00000140u; WF64(ea,c->f[22]);} // 8025AB78
  {uint32_t ea=c->r[5]+0x00000148u; WF64(ea,c->f[23]);} // 8025AB7C
  {uint32_t ea=c->r[5]+0x00000150u; WF64(ea,c->f[24]);} // 8025AB80
  {uint32_t ea=c->r[5]+0x00000158u; WF64(ea,c->f[25]);} // 8025AB84
  {uint32_t ea=c->r[5]+0x00000160u; WF64(ea,c->f[26]);} // 8025AB88
  {uint32_t ea=c->r[5]+0x00000168u; WF64(ea,c->f[27]);} // 8025AB8C
  {uint32_t ea=c->r[5]+0x00000170u; WF64(ea,c->f[28]);} // 8025AB90
  {uint32_t ea=c->r[5]+0x00000178u; WF64(ea,c->f[29]);} // 8025AB94
  {uint32_t ea=c->r[5]+0x00000180u; WF64(ea,c->f[30]);} // 8025AB98
  {uint32_t ea=c->r[5]+0x00000188u; WF64(ea,c->f[31]);} // 8025AB9C
  c->f[0]=u2d((uint64_t)c->fpscr); // 8025ABA0
  {uint32_t ea=c->r[5]+0x00000190u; WF64(ea,c->f[0]);} // 8025ABA4
  {uint32_t ea=c->r[5]+0x00000090u; c->f[0]=RF64(ea);} // 8025ABA8
  c->r[3]=mfspr(c,920); // 8025ABAC
  c->r[3]=rotl(c->r[3],3)&0x00000001u; cr0(c,c->r[3]); // 8025ABB0
  if (crb(c,2)) { goto L_8025AC38; } // 8025ABB4
  {uint32_t ea=c->r[5]+0x000001C8u; psq_store(c,0,ea,0,0);} // 8025ABB8
  {uint32_t ea=c->r[5]+0x000001D0u; psq_store(c,1,ea,0,0);} // 8025ABBC
  {uint32_t ea=c->r[5]+0x000001D8u; psq_store(c,2,ea,0,0);} // 8025ABC0
  {uint32_t ea=c->r[5]+0x000001E0u; psq_store(c,3,ea,0,0);} // 8025ABC4
  {uint32_t ea=c->r[5]+0x000001E8u; psq_store(c,4,ea,0,0);} // 8025ABC8
  {uint32_t ea=c->r[5]+0x000001F0u; psq_store(c,5,ea,0,0);} // 8025ABCC
  {uint32_t ea=c->r[5]+0x000001F8u; psq_store(c,6,ea,0,0);} // 8025ABD0
  {uint32_t ea=c->r[5]+0x00000200u; psq_store(c,7,ea,0,0);} // 8025ABD4
  {uint32_t ea=c->r[5]+0x00000208u; psq_store(c,8,ea,0,0);} // 8025ABD8
  {uint32_t ea=c->r[5]+0x00000210u; psq_store(c,9,ea,0,0);} // 8025ABDC
  {uint32_t ea=c->r[5]+0x00000218u; psq_store(c,10,ea,0,0);} // 8025ABE0
  {uint32_t ea=c->r[5]+0x00000220u; psq_store(c,11,ea,0,0);} // 8025ABE4
  {uint32_t ea=c->r[5]+0x00000228u; psq_store(c,12,ea,0,0);} // 8025ABE8
  {uint32_t ea=c->r[5]+0x00000230u; psq_store(c,13,ea,0,0);} // 8025ABEC
  {uint32_t ea=c->r[5]+0x00000238u; psq_store(c,14,ea,0,0);} // 8025ABF0
  {uint32_t ea=c->r[5]+0x00000240u; psq_store(c,15,ea,0,0);} // 8025ABF4
  {uint32_t ea=c->r[5]+0x00000248u; psq_store(c,16,ea,0,0);} // 8025ABF8
  {uint32_t ea=c->r[5]+0x00000250u; psq_store(c,17,ea,0,0);} // 8025ABFC
  {uint32_t ea=c->r[5]+0x00000258u; psq_store(c,18,ea,0,0);} // 8025AC00
  {uint32_t ea=c->r[5]+0x00000260u; psq_store(c,19,ea,0,0);} // 8025AC04
  {uint32_t ea=c->r[5]+0x00000268u; psq_store(c,20,ea,0,0);} // 8025AC08
  {uint32_t ea=c->r[5]+0x00000270u; psq_store(c,21,ea,0,0);} // 8025AC0C
  {uint32_t ea=c->r[5]+0x00000278u; psq_store(c,22,ea,0,0);} // 8025AC10
  {uint32_t ea=c->r[5]+0x00000280u; psq_store(c,23,ea,0,0);} // 8025AC14
  {uint32_t ea=c->r[5]+0x00000288u; psq_store(c,24,ea,0,0);} // 8025AC18
  {uint32_t ea=c->r[5]+0x00000290u; psq_store(c,25,ea,0,0);} // 8025AC1C
  {uint32_t ea=c->r[5]+0x00000298u; psq_store(c,26,ea,0,0);} // 8025AC20
  {uint32_t ea=c->r[5]+0x000002A0u; psq_store(c,27,ea,0,0);} // 8025AC24
  {uint32_t ea=c->r[5]+0x000002A8u; psq_store(c,28,ea,0,0);} // 8025AC28
  {uint32_t ea=c->r[5]+0x000002B0u; psq_store(c,29,ea,0,0);} // 8025AC2C
  {uint32_t ea=c->r[5]+0x000002B8u; psq_store(c,30,ea,0,0);} // 8025AC30
  {uint32_t ea=c->r[5]+0x000002C0u; psq_store(c,31,ea,0,0);} // 8025AC34
L_8025AC38:;
  return; // 8025AC38
}

// OSSaveFPUContext
void f_8025AC3C(Ctx* __restrict c) {
  trace_call(0x8025AC3Cu);
  c->r[5]=c->r[3]+0x00000000u; // 8025AC3C
  f_8025AB14(c); return; // 8025AC40
}

// OSSetCurrentContext
void f_8025AC44(Ctx* __restrict c) {
  trace_call(0x8025AC44u);
  c->r[4]=0u+0x80000000u; // 8025AC44
  W32(c->r[4]+0x000000D4u,c->r[3]); // 8025AC48
  c->r[5]=rotl(c->r[3],0)&0x3FFFFFFFu; // 8025AC4C
  W32(c->r[4]+0x000000C0u,c->r[5]); // 8025AC50
  c->r[5]=R32(c->r[4]+0x000000D8u); // 8025AC54
  cmps(c,0,(int32_t)c->r[5],(int32_t)c->r[3]); // 8025AC58
  if (!crb(c,2)) { goto L_8025AC7C; } // 8025AC5C
  c->r[6]=R32(c->r[3]+0x0000019Cu); // 8025AC60
  c->r[6]=c->r[6]|0x00002000u; // 8025AC64
  W32(c->r[3]+0x0000019Cu,c->r[6]); // 8025AC68
  c->r[6]=c->msr; // 8025AC6C
  c->r[6]=c->r[6]|0x00000002u; // 8025AC70
  c->msr=c->r[6]; // 8025AC74
  return; // 8025AC78
L_8025AC7C:;
  c->r[6]=R32(c->r[3]+0x0000019Cu); // 8025AC7C
  c->r[6]=rotl(c->r[6],0)&0xFFFFDFFFu; // 8025AC80
  W32(c->r[3]+0x0000019Cu,c->r[6]); // 8025AC84
  c->r[6]=c->msr; // 8025AC88
  c->r[6]=rotl(c->r[6],0)&0xFFFFDFFFu; // 8025AC8C
  c->r[6]=c->r[6]|0x00000002u; // 8025AC90
  c->msr=c->r[6]; // 8025AC94
  /* isync */ // 8025AC98
  return; // 8025AC9C
}

// OSGetCurrentContext
void f_8025ACA0(Ctx* __restrict c) {
  trace_call(0x8025ACA0u);
  c->r[3]=0u+0x80000000u; // 8025ACA0
  c->r[3]=R32(c->r[3]+0x000000D4u); // 8025ACA4
  return; // 8025ACA8
}

void hle_OSSaveContext(Ctx*);
// OSSaveContext
void f_8025ACAC(Ctx* __restrict c) {
  hle_OSSaveContext(c);
}

void hle_OSLoadContext(Ctx*);
// OSLoadContext
void f_8025AD2C(Ctx* __restrict c) {
  hle_OSLoadContext(c);
}

// OSGetStackPointer
void f_8025AE04(Ctx* __restrict c) {
  trace_call(0x8025AE04u);
  c->r[3]=c->r[1]|c->r[1]; // 8025AE04
  return; // 8025AE08
}

void hle_OSSwitchFiber(Ctx*);
// OSSwitchFiber
void f_8025AE0C(Ctx* __restrict c) {
  hle_OSSwitchFiber(c);
}

void hle_OSSwitchFiberEx(Ctx*);
// OSSwitchFiberEx
void f_8025AE3C(Ctx* __restrict c) {
  hle_OSSwitchFiberEx(c);
}

// OSClearContext
void f_8025AE6C(Ctx* __restrict c) {
  trace_call(0x8025AE6Cu);
  c->r[5]=0u+0x00000000u; // 8025AE6C
  c->r[4]=0u+0x80000000u; // 8025AE70
  W16(c->r[3]+0x000001A0u,c->r[5]); // 8025AE74
  W16(c->r[3]+0x000001A2u,c->r[5]); // 8025AE78
  c->r[0]=R32(c->r[4]+0x000000D8u); // 8025AE7C
  cmpu(c,0,c->r[3],c->r[0]); // 8025AE80
  if (!crb(c,2)) return; // 8025AE84
  W32(c->r[4]+0x000000D8u,c->r[5]); // 8025AE88
  return; // 8025AE8C
}

// OSInitContext
void f_8025AE90(Ctx* __restrict c) {
  trace_call(0x8025AE90u);
  W32(c->r[3]+0x00000198u,c->r[4]); // 8025AE90
  W32(c->r[3]+0x00000004u,c->r[5]); // 8025AE94
  c->r[11]=0u+0x00000000u; // 8025AE98
  c->r[11]=c->r[11]|0x00009032u; // 8025AE9C
  W32(c->r[3]+0x0000019Cu,c->r[11]); // 8025AEA0
  c->r[0]=0u+0x00000000u; // 8025AEA4
  W32(c->r[3]+0x00000080u,c->r[0]); // 8025AEA8
  W32(c->r[3]+0x0000008Cu,c->r[0]); // 8025AEAC
  W32(c->r[3]+0x00000008u,c->r[2]); // 8025AEB0
  W32(c->r[3]+0x00000034u,c->r[13]); // 8025AEB4
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 8025AEB8
  W32(c->r[3]+0x00000010u,c->r[0]); // 8025AEBC
  W32(c->r[3]+0x00000014u,c->r[0]); // 8025AEC0
  W32(c->r[3]+0x00000018u,c->r[0]); // 8025AEC4
  W32(c->r[3]+0x0000001Cu,c->r[0]); // 8025AEC8
  W32(c->r[3]+0x00000020u,c->r[0]); // 8025AECC
  W32(c->r[3]+0x00000024u,c->r[0]); // 8025AED0
  W32(c->r[3]+0x00000028u,c->r[0]); // 8025AED4
  W32(c->r[3]+0x0000002Cu,c->r[0]); // 8025AED8
  W32(c->r[3]+0x00000030u,c->r[0]); // 8025AEDC
  W32(c->r[3]+0x00000038u,c->r[0]); // 8025AEE0
  W32(c->r[3]+0x0000003Cu,c->r[0]); // 8025AEE4
  W32(c->r[3]+0x00000040u,c->r[0]); // 8025AEE8
  W32(c->r[3]+0x00000044u,c->r[0]); // 8025AEEC
  W32(c->r[3]+0x00000048u,c->r[0]); // 8025AEF0
  W32(c->r[3]+0x0000004Cu,c->r[0]); // 8025AEF4
  W32(c->r[3]+0x00000050u,c->r[0]); // 8025AEF8
  W32(c->r[3]+0x00000054u,c->r[0]); // 8025AEFC
  W32(c->r[3]+0x00000058u,c->r[0]); // 8025AF00
  W32(c->r[3]+0x0000005Cu,c->r[0]); // 8025AF04
  W32(c->r[3]+0x00000060u,c->r[0]); // 8025AF08
  W32(c->r[3]+0x00000064u,c->r[0]); // 8025AF0C
  W32(c->r[3]+0x00000068u,c->r[0]); // 8025AF10
  W32(c->r[3]+0x0000006Cu,c->r[0]); // 8025AF14
  W32(c->r[3]+0x00000070u,c->r[0]); // 8025AF18
  W32(c->r[3]+0x00000074u,c->r[0]); // 8025AF1C
  W32(c->r[3]+0x00000078u,c->r[0]); // 8025AF20
  W32(c->r[3]+0x0000007Cu,c->r[0]); // 8025AF24
  W32(c->r[3]+0x000001A4u,c->r[0]); // 8025AF28
  W32(c->r[3]+0x000001A8u,c->r[0]); // 8025AF2C
  W32(c->r[3]+0x000001ACu,c->r[0]); // 8025AF30
  W32(c->r[3]+0x000001B0u,c->r[0]); // 8025AF34
  W32(c->r[3]+0x000001B4u,c->r[0]); // 8025AF38
  W32(c->r[3]+0x000001B8u,c->r[0]); // 8025AF3C
  W32(c->r[3]+0x000001BCu,c->r[0]); // 8025AF40
  W32(c->r[3]+0x000001C0u,c->r[0]); // 8025AF44
  f_8025AE6C(c); return; // 8025AF48
}

// OSDumpContext
void f_8025AF4C(Ctx* __restrict c) {
  trace_call(0x8025AF4Cu);
  {uint32_t ea=c->r[1]+0xFFFFFD10u; W32(ea,c->r[1]); c->r[1]=ea;} // 8025AF4C
  c->r[0]=c->lr; // 8025AF50
  W32(c->r[1]+0x000002F4u,c->r[0]); // 8025AF54
  c->r[11]=c->r[1]+0x000002F0u; // 8025AF58
  c->lr=0x8025AF60u; { W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 8025AF5C
  c->r[28]=0u+0x80410000u; // 8025AF60
  c->r[30]=c->r[3]|c->r[3]; // 8025AF64
  c->r[28]=c->r[28]+0x000028A0u; // 8025AF68
  c->r[4]=c->r[30]|c->r[30]; // 8025AF6C
  c->r[3]=c->r[28]+0x00000000u; // 8025AF70
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8025AF74
  c->lr=0x8025AF7Cu; f_801CCA38(c); // 8025AF78
  c->r[26]=c->r[30]|c->r[30]; // 8025AF7C
  c->r[25]=0u+0x00000000u; // 8025AF80
L_8025AF84:;
  c->r[8]=R32(c->r[26]+0x00000040u); // 8025AF84
  c->r[4]=c->r[25]|c->r[25]; // 8025AF88
  c->r[5]=R32(c->r[26]+0x00000000u); // 8025AF8C
  c->r[3]=c->r[28]+0x00000048u; // 8025AF90
  c->r[9]=c->r[8]|c->r[8]; // 8025AF94
  c->r[7]=c->r[25]+0x00000010u; // 8025AF98
  c->r[6]=c->r[5]|c->r[5]; // 8025AF9C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8025AFA0
  c->lr=0x8025AFA8u; f_801CCA38(c); // 8025AFA4
  c->r[25]=c->r[25]+0x00000001u; // 8025AFA8
  c->r[26]=c->r[26]+0x00000004u; // 8025AFAC
  cmpu(c,0,c->r[25],0x00000010u); // 8025AFB0
  if (crb(c,0)) { IRQCHK(c); goto L_8025AF84; } // 8025AFB4
  c->r[4]=R32(c->r[30]+0x00000084u); // 8025AFB8
  c->r[3]=c->r[28]+0x00000078u; // 8025AFBC
  c->r[5]=R32(c->r[30]+0x00000080u); // 8025AFC0
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8025AFC4
  c->lr=0x8025AFCCu; f_801CCA38(c); // 8025AFC8
  c->r[4]=R32(c->r[30]+0x00000198u); // 8025AFCC
  c->r[3]=c->r[28]+0x000000A8u; // 8025AFD0
  c->r[5]=R32(c->r[30]+0x0000019Cu); // 8025AFD4
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8025AFD8
  c->lr=0x8025AFE0u; f_801CCA38(c); // 8025AFDC
  c->r[3]=c->r[28]+0x000000D8u; // 8025AFE0
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8025AFE4
  c->lr=0x8025AFECu; f_801CCA38(c); // 8025AFE8
  c->r[26]=c->r[30]|c->r[30]; // 8025AFEC
  c->r[25]=0u+0x00000000u; // 8025AFF0
L_8025AFF4:;
  c->r[5]=R32(c->r[26]+0x000001A4u); // 8025AFF4
  c->r[4]=c->r[25]|c->r[25]; // 8025AFF8
  c->r[7]=R32(c->r[26]+0x000001B4u); // 8025AFFC
  c->r[3]=c->r[28]+0x000000ECu; // 8025B000
  c->r[6]=c->r[25]+0x00000004u; // 8025B004
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8025B008
  c->lr=0x8025B010u; f_801CCA38(c); // 8025B00C
  c->r[25]=c->r[25]+0x00000001u; // 8025B010
  c->r[26]=c->r[26]+0x00000004u; // 8025B014
  cmpu(c,0,c->r[25],0x00000004u); // 8025B018
  if (crb(c,0)) { IRQCHK(c); goto L_8025AFF4; } // 8025B01C
  c->r[0]=R16(c->r[30]+0x000001A2u); // 8025B020
  c->r[0]=rotl(c->r[0],0)&0x00000001u; cr0(c,c->r[0]); // 8025B024
  if (crb(c,2)) { goto L_8025B140; } // 8025B028
  c->lr=0x8025B030u; f_8025EA10(c); // 8025B02C
  c->r[6]=0u+0x80000000u; // 8025B030
  c->r[5]=0u+0x00000000u; // 8025B034
  c->r[27]=R32(c->r[6]+0x000000D4u); // 8025B038
  c->r[4]=c->r[1]+0x00000008u; // 8025B03C
  c->r[31]=c->r[3]|c->r[3]; // 8025B040
  W16(c->r[1]+0x000001A8u,c->r[5]); // 8025B044
  W16(c->r[1]+0x000001AAu,c->r[5]); // 8025B048
  c->r[0]=R32(c->r[6]+0x000000D8u); // 8025B04C
  cmpu(c,0,c->r[4],c->r[0]); // 8025B050
  if (!crb(c,2)) { goto L_8025B05C; } // 8025B054
  W32(c->r[6]+0x000000D8u,c->r[5]); // 8025B058
L_8025B05C:;
  c->r[3]=c->r[1]+0x00000008u; // 8025B05C
  c->lr=0x8025B064u; f_8025AC44(c); // 8025B060
  c->r[3]=c->r[28]+0x00000110u; // 8025B064
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8025B068
  c->lr=0x8025B070u; f_801CCA38(c); // 8025B06C
  c->r[26]=c->r[30]|c->r[30]; // 8025B070
  c->r[25]=0u+0x00000000u; // 8025B074
L_8025B078:;
  {uint32_t ea=c->r[26]+0x00000098u; c->f[1]=RF64(ea);} // 8025B078
  c->lr=0x8025B080u; f_80289CCC(c); // 8025B07C
  {uint32_t ea=c->r[26]+0x00000090u; c->f[1]=RF64(ea);} // 8025B080
  c->r[29]=c->r[3]|c->r[3]; // 8025B084
  c->lr=0x8025B08Cu; f_80289CCC(c); // 8025B088
  c->r[5]=c->r[3]|c->r[3]; // 8025B08C
  c->r[4]=c->r[25]|c->r[25]; // 8025B090
  c->r[7]=c->r[29]|c->r[29]; // 8025B094
  c->r[3]=c->r[28]+0x00000124u; // 8025B098
  c->r[6]=c->r[25]+0x00000001u; // 8025B09C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8025B0A0
  c->lr=0x8025B0A8u; f_801CCA38(c); // 8025B0A4
  c->r[25]=c->r[25]+0x00000002u; // 8025B0A8
  c->r[26]=c->r[26]+0x00000010u; // 8025B0AC
  cmpu(c,0,c->r[25],0x00000020u); // 8025B0B0
  if (crb(c,0)) { IRQCHK(c); goto L_8025B078; } // 8025B0B4
  c->r[3]=c->r[28]+0x00000140u; // 8025B0B8
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8025B0BC
  c->lr=0x8025B0C4u; f_801CCA38(c); // 8025B0C0
  c->r[26]=c->r[30]|c->r[30]; // 8025B0C4
  c->r[25]=0u+0x00000000u; // 8025B0C8
L_8025B0CC:;
  {uint32_t ea=c->r[26]+0x000001D0u; c->f[1]=RF64(ea);} // 8025B0CC
  c->lr=0x8025B0D4u; f_80289CCC(c); // 8025B0D0
  {uint32_t ea=c->r[26]+0x000001C8u; c->f[1]=RF64(ea);} // 8025B0D4
  c->r[29]=c->r[3]|c->r[3]; // 8025B0D8
  c->lr=0x8025B0E0u; f_80289CCC(c); // 8025B0DC
  c->r[5]=c->r[3]|c->r[3]; // 8025B0E0
  c->r[4]=c->r[25]|c->r[25]; // 8025B0E4
  c->r[7]=c->r[29]|c->r[29]; // 8025B0E8
  c->r[3]=c->r[28]+0x00000154u; // 8025B0EC
  c->r[6]=c->r[25]+0x00000001u; // 8025B0F0
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8025B0F4
  c->lr=0x8025B0FCu; f_801CCA38(c); // 8025B0F8
  c->r[25]=c->r[25]+0x00000002u; // 8025B0FC
  c->r[26]=c->r[26]+0x00000010u; // 8025B100
  cmpu(c,0,c->r[25],0x00000020u); // 8025B104
  if (crb(c,0)) { IRQCHK(c); goto L_8025B0CC; } // 8025B108
  c->r[5]=0u+0x00000000u; // 8025B10C
  c->r[3]=0u+0x80000000u; // 8025B110
  W16(c->r[1]+0x000001A8u,c->r[5]); // 8025B114
  c->r[4]=c->r[1]+0x00000008u; // 8025B118
  W16(c->r[1]+0x000001AAu,c->r[5]); // 8025B11C
  c->r[0]=R32(c->r[3]+0x000000D8u); // 8025B120
  cmpu(c,0,c->r[4],c->r[0]); // 8025B124
  if (!crb(c,2)) { goto L_8025B130; } // 8025B128
  W32(c->r[3]+0x000000D8u,c->r[5]); // 8025B12C
L_8025B130:;
  c->r[3]=c->r[27]|c->r[27]; // 8025B130
  c->lr=0x8025B138u; f_8025AC44(c); // 8025B134
  c->r[3]=c->r[31]|c->r[31]; // 8025B138
  c->lr=0x8025B140u; f_8025EA38(c); // 8025B13C
L_8025B140:;
  c->r[3]=c->r[28]+0x00000174u; // 8025B140
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8025B144
  c->lr=0x8025B14Cu; f_801CCA38(c); // 8025B148
  c->r[25]=R32(c->r[30]+0x00000004u); // 8025B14C
  c->r[26]=0u+0x00000000u; // 8025B150
  goto L_8025B174; // 8025B154
L_8025B158:;
  c->r[5]=R32(c->r[25]+0x00000000u); // 8025B158
  c->r[4]=c->r[25]|c->r[25]; // 8025B15C
  c->r[6]=R32(c->r[25]+0x00000004u); // 8025B160
  c->r[3]=c->r[28]+0x0000019Cu; // 8025B164
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8025B168
  c->lr=0x8025B170u; f_801CCA38(c); // 8025B16C
  c->r[25]=R32(c->r[25]+0x00000000u); // 8025B170
L_8025B174:;
  cmps(c,0,(int32_t)c->r[25],0); // 8025B174
  if (crb(c,2)) { goto L_8025B194; } // 8025B178
  c->r[0]=c->r[25]+0x00010000u; // 8025B17C
  cmpu(c,0,c->r[0],0x0000FFFFu); // 8025B180
  if (crb(c,2)) { goto L_8025B194; } // 8025B184
  cmpu(c,0,c->r[26],0x00000010u); // 8025B188
  c->r[26]=c->r[26]+0x00000001u; // 8025B18C
  if (crb(c,0)) { IRQCHK(c); goto L_8025B158; } // 8025B190
L_8025B194:;
  c->r[11]=c->r[1]+0x000002F0u; // 8025B194
  c->lr=0x8025B19Cu; { c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 8025B198
  c->r[0]=R32(c->r[1]+0x000002F4u); // 8025B19C
  c->lr=c->r[0]; // 8025B1A0
  c->r[1]=c->r[1]+0x000002F0u; // 8025B1A4
  return; // 8025B1A8
}

// OSSwitchFPUContext
void f_8025B1AC(Ctx* __restrict c) {
  trace_call(0x8025B1ACu);
  c->r[5]=c->msr; // 8025B1AC
  c->r[5]=c->r[5]|0x00002000u; // 8025B1B0
  c->msr=c->r[5]; // 8025B1B4
  /* isync */ // 8025B1B8
  c->r[5]=R32(c->r[4]+0x0000019Cu); // 8025B1BC
  c->r[5]=c->r[5]|0x00002000u; // 8025B1C0
  mtspr(c,27,c->r[5]); // 8025B1C4
  c->r[3]=0u+0x80000000u; // 8025B1C8
  c->r[5]=R32(c->r[3]+0x000000D8u); // 8025B1CC
  W32(c->r[3]+0x000000D8u,c->r[4]); // 8025B1D0
  cmps(c,0,(int32_t)c->r[5],(int32_t)c->r[4]); // 8025B1D4
  if (crb(c,2)) { goto L_8025B1EC; } // 8025B1D8
  cmps(c,0,(int32_t)c->r[5],0); // 8025B1DC
  if (crb(c,2)) { goto L_8025B1E8; } // 8025B1E0
  c->lr=0x8025B1E8u; f_8025AB14(c); // 8025B1E4
L_8025B1E8:;
  c->lr=0x8025B1ECu; f_8025A9F0(c); // 8025B1E8
L_8025B1EC:;
  c->r[3]=R32(c->r[4]+0x00000080u); // 8025B1EC
  c->cr=(c->cr&~0xFFFFFFFFu)|(c->r[3]&0xFFFFFFFFu); // 8025B1F0
  c->r[3]=R32(c->r[4]+0x00000084u); // 8025B1F4
  c->lr=c->r[3]; // 8025B1F8
  c->r[3]=R32(c->r[4]+0x00000198u); // 8025B1FC
  mtspr(c,26,c->r[3]); // 8025B200
  c->r[3]=R32(c->r[4]+0x00000088u); // 8025B204
  c->ctr=c->r[3]; // 8025B208
  c->r[3]=R32(c->r[4]+0x0000008Cu); // 8025B20C
  mtspr(c,1,c->r[3]); // 8025B210
  c->r[3]=R16(c->r[4]+0x000001A2u); // 8025B214
  c->r[3]=rotl(c->r[3],0)&0xFFFFFFFDu; // 8025B218
  W16(c->r[4]+0x000001A2u,c->r[3]); // 8025B21C
  c->r[5]=R32(c->r[4]+0x00000014u); // 8025B220
  c->r[3]=R32(c->r[4]+0x0000000Cu); // 8025B224
  c->r[4]=R32(c->r[4]+0x00000010u); // 8025B228
  return; /* rfi */ // 8025B22C
}

// __OSContextInit
void f_8025B230(Ctx* __restrict c) {
  trace_call(0x8025B230u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8025B230
  c->r[0]=c->lr; // 8025B234
  c->r[4]=0u+0x80260000u; // 8025B238
  c->r[3]=0u+0x00000007u; // 8025B23C
  W32(c->r[1]+0x00000014u,c->r[0]); // 8025B240
  c->r[4]=c->r[4]+0xFFFFB1ACu; // 8025B244
  c->lr=0x8025B24Cu; f_80259194(c); // 8025B248
  c->r[0]=0u+0x00000000u; // 8025B24C
  c->r[4]=0u+0x80000000u; // 8025B250
  c->r[3]=0u+0x80410000u; // 8025B254
  W32(c->r[4]+0x000000D8u,c->r[0]); // 8025B258
  c->r[3]=c->r[3]+0x00002A58u; // 8025B25C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8025B260
  c->lr=0x8025B268u; f_80258008(c); // 8025B264
  c->r[0]=R32(c->r[1]+0x00000014u); // 8025B268
  c->lr=c->r[0]; // 8025B26C
  c->r[1]=c->r[1]+0x00000010u; // 8025B270
  return; // 8025B274
}

void hle_OSReport(Ctx*);
// OSReport
void f_8025B278(Ctx* __restrict c) {
  hle_OSReport(c);
}

// OSSetErrorHandler
void f_8025B27C(Ctx* __restrict c) {
  trace_call(0x8025B27Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8025B27C
  c->r[0]=c->lr; // 8025B280
  W32(c->r[1]+0x00000024u,c->r[0]); // 8025B284
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8025B288
  W32(c->r[1]+0x00000018u,c->r[30]); // 8025B28C
  W32(c->r[1]+0x00000014u,c->r[29]); // 8025B290
  c->r[29]=c->r[3]|c->r[3]; // 8025B294
  W32(c->r[1]+0x00000010u,c->r[28]); // 8025B298
  c->r[28]=c->r[4]|c->r[4]; // 8025B29C
  c->lr=0x8025B2A4u; f_8025EA10(c); // 8025B2A0
  c->r[4]=0u+0x805E0000u; // 8025B2A4
  c->r[0]=rotl(c->r[29],2)&0x0003FFFCu; // 8025B2A8
  c->r[4]=c->r[4]+0x00007DF0u; // 8025B2AC
  cmpu(c,0,c->r[29],0x00000010u); // 8025B2B0
  c->r[30]=R32(c->r[4]+c->r[0]); // 8025B2B4
  c->r[29]=c->r[3]|c->r[3]; // 8025B2B8
  W32(c->r[4]+c->r[0],c->r[28]); // 8025B2BC
  if (!crb(c,2)) { goto L_8025B4D8; } // 8025B2C0
  c->lr=0x8025B2C8u; f_80257E00(c); // 8025B2C4
  c->r[31]=c->r[3]|c->r[3]; // 8025B2C8
  c->r[3]=c->r[3]|0x00002000u; // 8025B2CC
  c->lr=0x8025B2D4u; f_80257E08(c); // 8025B2D0
  c->lr=0x8025B2D8u; f_80257E84(c); // 8025B2D4
  cmps(c,0,(int32_t)c->r[28],0); // 8025B2D8
  if (crb(c,2)) { goto L_8025B474; } // 8025B2DC
  c->r[5]=0u+0x80000000u; // 8025B2E0
  c->r[4]=0u+0x60060000u; // 8025B2E4
  c->r[9]=R32(c->r[5]+0x000000DCu); // 8025B2E8
  c->r[5]=c->r[4]+0xFFFFF8FFu; // 8025B2EC
  c->r[8]=0u+0xFFFFFFFFu; // 8025B2F0
  c->r[7]=0u+0x00000004u; // 8025B2F4
  c->r[0]=0u+0x00000002u; // 8025B2F8
  goto L_8025B458; // 8025B2FC
L_8025B300:;
  c->r[4]=R32(c->r[9]+0x0000019Cu); // 8025B300
  c->r[4]=c->r[4]|0x00000900u; // 8025B304
  W32(c->r[9]+0x0000019Cu,c->r[4]); // 8025B308
  c->r[6]=R16(c->r[9]+0x000001A2u); // 8025B30C
  c->r[4]=rotl(c->r[6],0)&0x00000001u; cr0(c,c->r[4]); // 8025B310
  if (!crb(c,2)) { goto L_8025B43C; } // 8025B314
  c->r[4]=c->r[6]|0x00000001u; // 8025B318
  c->r[6]=c->r[9]+0x00000090u; // 8025B31C
  W16(c->r[9]+0x000001A2u,c->r[4]); // 8025B320
  c->r[4]=c->r[9]+0x000001C8u; // 8025B324
  c->ctr=c->r[0]; // 8025B328
L_8025B32C:;
  W32(c->r[6]+0x00000004u,c->r[8]); // 8025B32C
  W32(c->r[6]+0x00000000u,c->r[8]); // 8025B330
  W32(c->r[4]+0x00000004u,c->r[8]); // 8025B334
  W32(c->r[4]+0x00000000u,c->r[8]); // 8025B338
  W32(c->r[6]+0x0000000Cu,c->r[8]); // 8025B33C
  W32(c->r[6]+0x00000008u,c->r[8]); // 8025B340
  W32(c->r[4]+0x0000000Cu,c->r[8]); // 8025B344
  W32(c->r[4]+0x00000008u,c->r[8]); // 8025B348
  W32(c->r[6]+0x00000014u,c->r[8]); // 8025B34C
  W32(c->r[6]+0x00000010u,c->r[8]); // 8025B350
  W32(c->r[4]+0x00000014u,c->r[8]); // 8025B354
  W32(c->r[4]+0x00000010u,c->r[8]); // 8025B358
  W32(c->r[6]+0x0000001Cu,c->r[8]); // 8025B35C
  W32(c->r[6]+0x00000018u,c->r[8]); // 8025B360
  W32(c->r[4]+0x0000001Cu,c->r[8]); // 8025B364
  W32(c->r[4]+0x00000018u,c->r[8]); // 8025B368
  W32(c->r[6]+0x00000024u,c->r[8]); // 8025B36C
  W32(c->r[6]+0x00000020u,c->r[8]); // 8025B370
  W32(c->r[4]+0x00000024u,c->r[8]); // 8025B374
  W32(c->r[4]+0x00000020u,c->r[8]); // 8025B378
  W32(c->r[6]+0x0000002Cu,c->r[8]); // 8025B37C
  W32(c->r[6]+0x00000028u,c->r[8]); // 8025B380
  W32(c->r[4]+0x0000002Cu,c->r[8]); // 8025B384
  W32(c->r[4]+0x00000028u,c->r[8]); // 8025B388
  W32(c->r[6]+0x00000034u,c->r[8]); // 8025B38C
  W32(c->r[6]+0x00000030u,c->r[8]); // 8025B390
  W32(c->r[4]+0x00000034u,c->r[8]); // 8025B394
  W32(c->r[4]+0x00000030u,c->r[8]); // 8025B398
  W32(c->r[6]+0x0000003Cu,c->r[8]); // 8025B39C
  W32(c->r[6]+0x00000038u,c->r[8]); // 8025B3A0
  W32(c->r[4]+0x0000003Cu,c->r[8]); // 8025B3A4
  W32(c->r[4]+0x00000038u,c->r[8]); // 8025B3A8
  W32(c->r[6]+0x00000044u,c->r[8]); // 8025B3AC
  W32(c->r[6]+0x00000040u,c->r[8]); // 8025B3B0
  W32(c->r[4]+0x00000044u,c->r[8]); // 8025B3B4
  W32(c->r[4]+0x00000040u,c->r[8]); // 8025B3B8
  W32(c->r[6]+0x0000004Cu,c->r[8]); // 8025B3BC
  W32(c->r[6]+0x00000048u,c->r[8]); // 8025B3C0
  W32(c->r[4]+0x0000004Cu,c->r[8]); // 8025B3C4
  W32(c->r[4]+0x00000048u,c->r[8]); // 8025B3C8
  W32(c->r[6]+0x00000054u,c->r[8]); // 8025B3CC
  W32(c->r[6]+0x00000050u,c->r[8]); // 8025B3D0
  W32(c->r[4]+0x00000054u,c->r[8]); // 8025B3D4
  W32(c->r[4]+0x00000050u,c->r[8]); // 8025B3D8
  W32(c->r[6]+0x0000005Cu,c->r[8]); // 8025B3DC
  W32(c->r[6]+0x00000058u,c->r[8]); // 8025B3E0
  W32(c->r[4]+0x0000005Cu,c->r[8]); // 8025B3E4
  W32(c->r[4]+0x00000058u,c->r[8]); // 8025B3E8
  W32(c->r[6]+0x00000064u,c->r[8]); // 8025B3EC
  W32(c->r[6]+0x00000060u,c->r[8]); // 8025B3F0
  W32(c->r[4]+0x00000064u,c->r[8]); // 8025B3F4
  W32(c->r[4]+0x00000060u,c->r[8]); // 8025B3F8
  W32(c->r[6]+0x0000006Cu,c->r[8]); // 8025B3FC
  W32(c->r[6]+0x00000068u,c->r[8]); // 8025B400
  W32(c->r[4]+0x0000006Cu,c->r[8]); // 8025B404
  W32(c->r[4]+0x00000068u,c->r[8]); // 8025B408
  W32(c->r[6]+0x00000074u,c->r[8]); // 8025B40C
  W32(c->r[6]+0x00000070u,c->r[8]); // 8025B410
  W32(c->r[4]+0x00000074u,c->r[8]); // 8025B414
  W32(c->r[4]+0x00000070u,c->r[8]); // 8025B418
  W32(c->r[6]+0x0000007Cu,c->r[8]); // 8025B41C
  W32(c->r[6]+0x00000078u,c->r[8]); // 8025B420
  c->r[6]=c->r[6]+0x00000080u; // 8025B424
  W32(c->r[4]+0x0000007Cu,c->r[8]); // 8025B428
  W32(c->r[4]+0x00000078u,c->r[8]); // 8025B42C
  c->r[4]=c->r[4]+0x00000080u; // 8025B430
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_8025B32C; } // 8025B434
  W32(c->r[9]+0x00000194u,c->r[7]); // 8025B438
L_8025B43C:;
  c->r[4]=R32(c->r[13]+0xFFFF8DD0u); // 8025B43C
  c->r[6]=R32(c->r[9]+0x00000194u); // 8025B440
  c->r[4]=rotl(c->r[4],0)&0x000000F8u; // 8025B444
  c->r[4]=c->r[6]|c->r[4]; // 8025B448
  c->r[4]=c->r[4]&c->r[5]; // 8025B44C
  W32(c->r[9]+0x00000194u,c->r[4]); // 8025B450
  c->r[9]=R32(c->r[9]+0x000002FCu); // 8025B454
L_8025B458:;
  cmps(c,0,(int32_t)c->r[9],0); // 8025B458
  if (!crb(c,2)) { IRQCHK(c); goto L_8025B300; } // 8025B45C
  c->r[0]=R32(c->r[13]+0xFFFF8DD0u); // 8025B460
  c->r[31]=c->r[31]|0x00000900u; // 8025B464
  c->r[0]=rotl(c->r[0],0)&0x000000F8u; // 8025B468
  c->r[4]=c->r[3]|c->r[0]; // 8025B46C
  goto L_8025B4C0; // 8025B470
L_8025B474:;
  c->r[5]=0u+0x80000000u; // 8025B474
  c->r[4]=0u+0x60060000u; // 8025B478
  c->r[6]=R32(c->r[5]+0x000000DCu); // 8025B47C
  c->r[4]=c->r[4]+0xFFFFF8FFu; // 8025B480
  c->r[5]=0u+0xFFFFF6FFu; // 8025B484
  goto L_8025B4AC; // 8025B488
L_8025B48C:;
  c->r[0]=R32(c->r[6]+0x0000019Cu); // 8025B48C
  c->r[0]=c->r[0]&c->r[5]; // 8025B490
  W32(c->r[6]+0x0000019Cu,c->r[0]); // 8025B494
  c->r[0]=R32(c->r[6]+0x00000194u); // 8025B498
  c->r[0]=rotl(c->r[0],0)&0xFFFFFF07u; // 8025B49C
  c->r[0]=c->r[0]&c->r[4]; // 8025B4A0
  W32(c->r[6]+0x00000194u,c->r[0]); // 8025B4A4
  c->r[6]=R32(c->r[6]+0x000002FCu); // 8025B4A8
L_8025B4AC:;
  cmps(c,0,(int32_t)c->r[6],0); // 8025B4AC
  if (!crb(c,2)) { IRQCHK(c); goto L_8025B48C; } // 8025B4B0
  c->r[0]=0u+0xFFFFF6FFu; // 8025B4B4
  c->r[4]=rotl(c->r[3],0)&0xFFFFFF07u; // 8025B4B8
  c->r[31]=c->r[31]&c->r[0]; // 8025B4BC
L_8025B4C0:;
  c->r[3]=0u+0x60060000u; // 8025B4C0
  c->r[0]=c->r[3]+0xFFFFF8FFu; // 8025B4C4
  c->r[3]=c->r[4]&c->r[0]; // 8025B4C8
  c->lr=0x8025B4D0u; f_80257EA4(c); // 8025B4CC
  c->r[3]=c->r[31]|c->r[31]; // 8025B4D0
  c->lr=0x8025B4D8u; f_80257E08(c); // 8025B4D4
L_8025B4D8:;
  c->r[3]=c->r[29]|c->r[29]; // 8025B4D8
  c->lr=0x8025B4E0u; f_8025EA38(c); // 8025B4DC
  c->r[3]=c->r[30]|c->r[30]; // 8025B4E0
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8025B4E4
  c->r[30]=R32(c->r[1]+0x00000018u); // 8025B4E8
  c->r[29]=R32(c->r[1]+0x00000014u); // 8025B4EC
  c->r[28]=R32(c->r[1]+0x00000010u); // 8025B4F0
  c->r[0]=R32(c->r[1]+0x00000024u); // 8025B4F4
  c->lr=c->r[0]; // 8025B4F8
  c->r[1]=c->r[1]+0x00000020u; // 8025B4FC
  return; // 8025B500
}

// __OSUnhandledException
void f_8025B504(Ctx* __restrict c) {
  trace_call(0x8025B504u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8025B504
  c->r[0]=c->lr; // 8025B508
  W32(c->r[1]+0x00000034u,c->r[0]); // 8025B50C
  c->r[11]=c->r[1]+0x00000030u; // 8025B510
  c->lr=0x8025B518u; { W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 8025B514
  c->r[31]=0u+0x80410000u; // 8025B518
  c->r[25]=c->r[3]|c->r[3]; // 8025B51C
  c->r[26]=c->r[4]|c->r[4]; // 8025B520
  c->r[27]=c->r[5]|c->r[5]; // 8025B524
  c->r[28]=c->r[6]|c->r[6]; // 8025B528
  c->r[31]=c->r[31]+0x00002A80u; // 8025B52C
  c->lr=0x8025B534u; f_80262780(c); // 8025B530
  c->r[5]=R32(c->r[26]+0x0000019Cu); // 8025B534
  c->r[29]=c->r[4]|c->r[4]; // 8025B538
  c->r[30]=c->r[3]|c->r[3]; // 8025B53C
  c->r[0]=rotl(c->r[5],0)&0x00000002u; cr0(c,c->r[0]); // 8025B540
  if (!crb(c,2)) { goto L_8025B55C; } // 8025B544
  c->r[4]=c->r[25]|c->r[25]; // 8025B548
  c->r[3]=c->r[31]+0x0000005Cu; // 8025B54C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8025B550
  c->lr=0x8025B558u; f_801CCA38(c); // 8025B554
  goto L_8025B6B8; // 8025B558
L_8025B55C:;
  cmpu(c,0,c->r[25],0x00000006u); // 8025B55C
  if (!crb(c,2)) { goto L_8025B64C; } // 8025B560
  c->r[0]=rotl(c->r[5],0)&0x00100000u; cr0(c,c->r[0]); // 8025B564
  if (crb(c,2)) { goto L_8025B64C; } // 8025B568
  c->r[3]=0u+0x805E0000u; // 8025B56C
  c->r[3]=c->r[3]+0x00007DF0u; // 8025B570
  c->r[0]=R32(c->r[3]+0x00000040u); // 8025B574
  cmps(c,0,(int32_t)c->r[0],0); // 8025B578
  if (crb(c,2)) { goto L_8025B64C; } // 8025B57C
  c->r[25]=0u+0x00000010u; // 8025B580
  c->lr=0x8025B588u; f_80257E00(c); // 8025B584
  c->r[23]=c->r[3]|c->r[3]; // 8025B588
  c->r[3]=c->r[3]|0x00002000u; // 8025B58C
  c->lr=0x8025B594u; f_80257E08(c); // 8025B590
  c->r[3]=0u+0x80000000u; // 8025B594
  c->r[3]=R32(c->r[3]+0x000000D8u); // 8025B598
  cmps(c,0,(int32_t)c->r[3],0); // 8025B59C
  if (crb(c,2)) { goto L_8025B5A8; } // 8025B5A0
  c->lr=0x8025B5A8u; f_8025AC3C(c); // 8025B5A4
L_8025B5A8:;
  c->lr=0x8025B5ACu; f_80257E84(c); // 8025B5A8
  c->r[24]=0u+0x60060000u; // 8025B5AC
  c->r[0]=c->r[24]+0xFFFFF8FFu; // 8025B5B0
  c->r[3]=c->r[3]&c->r[0]; // 8025B5B4
  c->lr=0x8025B5BCu; f_80257EA4(c); // 8025B5B8
  c->r[3]=c->r[23]|c->r[23]; // 8025B5BC
  c->lr=0x8025B5C4u; f_80257E08(c); // 8025B5C0
  c->r[23]=0u+0x80000000u; // 8025B5C4
  c->r[0]=R32(c->r[23]+0x000000D8u); // 8025B5C8
  cmpu(c,0,c->r[0],c->r[26]); // 8025B5CC
  if (!crb(c,2)) { goto L_8025B630; } // 8025B5D0
  c->lr=0x8025B5D8u; f_802613A4(c); // 8025B5D4
  c->r[4]=c->r[26]|c->r[26]; // 8025B5D8
  c->r[5]=c->r[27]|c->r[27]; // 8025B5DC
  c->r[6]=c->r[28]|c->r[28]; // 8025B5E0
  c->r[3]=0u+0x00000010u; // 8025B5E4
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8025B5E8
  c->r[7]=0u+0x805E0000u; // 8025B5EC
  c->r[7]=c->r[7]+0x00007DF0u; // 8025B5F0
  c->r[12]=R32(c->r[7]+0x00000040u); // 8025B5F4
  c->ctr=c->r[12]; // 8025B5F8
  if (true) { c->lr=0x8025B600u; dispatch(c,c->ctr); } // 8025B5FC
  c->r[4]=R32(c->r[26]+0x0000019Cu); // 8025B600
  c->r[3]=0u+0x00000000u; // 8025B604
  c->r[0]=c->r[24]+0xFFFFF8FFu; // 8025B608
  c->r[4]=rotl(c->r[4],0)&0xFFFFDFFFu; // 8025B60C
  W32(c->r[26]+0x0000019Cu,c->r[4]); // 8025B610
  W32(c->r[23]+0x000000D8u,c->r[3]); // 8025B614
  c->r[3]=R32(c->r[26]+0x00000194u); // 8025B618
  c->r[0]=c->r[3]&c->r[0]; // 8025B61C
  W32(c->r[26]+0x00000194u,c->r[0]); // 8025B620
  c->lr=0x8025B628u; f_802613E0(c); // 8025B624
  c->lr=0x8025B62Cu; f_802618EC(c); // 8025B628
  goto L_8025B644; // 8025B62C
L_8025B630:;
  c->r[3]=R32(c->r[26]+0x0000019Cu); // 8025B630
  c->r[0]=0u+0x00000000u; // 8025B634
  c->r[3]=rotl(c->r[3],0)&0xFFFFDFFFu; // 8025B638
  W32(c->r[26]+0x0000019Cu,c->r[3]); // 8025B63C
  W32(c->r[23]+0x000000D8u,c->r[0]); // 8025B640
L_8025B644:;
  c->r[3]=c->r[26]|c->r[26]; // 8025B644
  c->lr=0x8025B64Cu; f_8025AD2C(c); // 8025B648
L_8025B64C:;
  c->r[24]=0u+0x805E0000u; // 8025B64C
  c->r[23]=rotl(c->r[25],2)&0x000003FCu; // 8025B650
  c->r[24]=c->r[24]+0x00007DF0u; // 8025B654
  c->r[0]=R32(c->r[24]+c->r[23]); // 8025B658
  cmps(c,0,(int32_t)c->r[0],0); // 8025B65C
  if (crb(c,2)) { goto L_8025B698; } // 8025B660
  c->lr=0x8025B668u; f_802613A4(c); // 8025B664
  c->r[3]=c->r[25]|c->r[25]; // 8025B668
  c->r[4]=c->r[26]|c->r[26]; // 8025B66C
  c->r[5]=c->r[27]|c->r[27]; // 8025B670
  c->r[6]=c->r[28]|c->r[28]; // 8025B674
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8025B678
  c->r[12]=R32(c->r[24]+c->r[23]); // 8025B67C
  c->ctr=c->r[12]; // 8025B680
  if (true) { c->lr=0x8025B688u; dispatch(c,c->ctr); } // 8025B684
  c->lr=0x8025B68Cu; f_802613E0(c); // 8025B688
  c->lr=0x8025B690u; f_802618EC(c); // 8025B68C
  c->r[3]=c->r[26]|c->r[26]; // 8025B690
  c->lr=0x8025B698u; f_8025AD2C(c); // 8025B694
L_8025B698:;
  cmpu(c,0,c->r[25],0x00000008u); // 8025B698
  if (!crb(c,2)) { goto L_8025B6A8; } // 8025B69C
  c->r[3]=c->r[26]|c->r[26]; // 8025B6A0
  c->lr=0x8025B6A8u; f_8025AD2C(c); // 8025B6A4
L_8025B6A8:;
  c->r[4]=c->r[25]|c->r[25]; // 8025B6A8
  c->r[3]=c->r[31]+0x0000007Cu; // 8025B6AC
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8025B6B0
  c->lr=0x8025B6B8u; f_801CCA38(c); // 8025B6B4
L_8025B6B8:;
  c->r[3]=c->r[13]+0xFFFF8DD4u; // 8025B6B8
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8025B6BC
  c->lr=0x8025B6C4u; f_801CCA38(c); // 8025B6C0
  c->r[3]=c->r[26]|c->r[26]; // 8025B6C4
  c->lr=0x8025B6CCu; f_8025AF4C(c); // 8025B6C8
  c->r[4]=c->r[27]|c->r[27]; // 8025B6CC
  c->r[5]=c->r[28]|c->r[28]; // 8025B6D0
  c->r[3]=c->r[31]+0x00000094u; // 8025B6D4
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8025B6D8
  c->lr=0x8025B6E0u; f_801CCA38(c); // 8025B6DC
  c->r[6]=c->r[29]|c->r[29]; // 8025B6E0
  c->r[5]=c->r[30]|c->r[30]; // 8025B6E4
  c->r[3]=c->r[31]+0x000000C8u; // 8025B6E8
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8025B6EC
  c->lr=0x8025B6F4u; f_801CCA38(c); // 8025B6F0
  cmpu(c,0,c->r[25],0x0000000Fu); // 8025B6F4
  if (crb(c,1)) { goto L_8025B7BC; } // 8025B6F8
  c->r[3]=0u+0x80410000u; // 8025B6FC
  c->r[0]=rotl(c->r[25],2)&0xFFFFFFFCu; // 8025B700
  c->r[3]=c->r[3]+0x00002D5Cu; // 8025B704
  c->r[3]=R32(c->r[3]+c->r[0]); // 8025B708
  c->ctr=c->r[3]; // 8025B70C
  if (true) { switch (c->ctr) { case 0x8025B714u: goto L_8025B714; case 0x8025B72Cu: goto L_8025B72C; case 0x8025B740u: goto L_8025B740; case 0x8025B758u: goto L_8025B758; case 0x8025B770u: goto L_8025B770; case 0x8025B7BCu: goto L_8025B7BC; default: break; } dispatch(c,c->ctr); return; } // 8025B710
L_8025B714:;
  c->r[4]=R32(c->r[26]+0x00000198u); // 8025B714
  c->r[5]=c->r[28]|c->r[28]; // 8025B718
  c->r[3]=c->r[31]+0x000000D8u; // 8025B71C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8025B720
  c->lr=0x8025B728u; f_801CCA38(c); // 8025B724
  goto L_8025B7BC; // 8025B728
L_8025B72C:;
  c->r[4]=R32(c->r[26]+0x00000198u); // 8025B72C
  c->r[3]=c->r[31]+0x00000138u; // 8025B730
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8025B734
  c->lr=0x8025B73Cu; f_801CCA38(c); // 8025B738
  goto L_8025B7BC; // 8025B73C
L_8025B740:;
  c->r[4]=R32(c->r[26]+0x00000198u); // 8025B740
  c->r[5]=c->r[28]|c->r[28]; // 8025B744
  c->r[3]=c->r[31]+0x00000184u; // 8025B748
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8025B74C
  c->lr=0x8025B754u; f_801CCA38(c); // 8025B750
  goto L_8025B7BC; // 8025B754
L_8025B758:;
  c->r[4]=R32(c->r[26]+0x00000198u); // 8025B758
  c->r[5]=c->r[28]|c->r[28]; // 8025B75C
  c->r[3]=c->r[31]+0x000001E8u; // 8025B760
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8025B764
  c->lr=0x8025B76Cu; f_801CCA38(c); // 8025B768
  goto L_8025B7BC; // 8025B76C
L_8025B770:;
  c->r[3]=c->r[13]+0xFFFF8DD4u; // 8025B770
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8025B774
  c->lr=0x8025B77Cu; f_801CCA38(c); // 8025B778
  c->r[25]=0u+0xCC000000u; // 8025B77C
  c->r[3]=c->r[31]+0x00000248u; // 8025B780
  c->r[4]=R16(c->r[25]+0x00005030u); // 8025B784
  c->r[5]=R16(c->r[25]+0x00005032u); // 8025B788
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8025B78C
  c->lr=0x8025B794u; f_801CCA38(c); // 8025B790
  c->r[4]=R16(c->r[25]+0x00005020u); // 8025B794
  c->r[3]=c->r[31]+0x00000268u; // 8025B798
  c->r[5]=R16(c->r[25]+0x00005022u); // 8025B79C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8025B7A0
  c->lr=0x8025B7A8u; f_801CCA38(c); // 8025B7A4
  c->r[4]=0u+0xCD000000u; // 8025B7A8
  c->r[3]=c->r[31]+0x00000288u; // 8025B7AC
  c->r[4]=R32(c->r[4]+0x00006014u); // 8025B7B0
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8025B7B4
  c->lr=0x8025B7BCu; f_801CCA38(c); // 8025B7B8
L_8025B7BC:;
  c->r[4]=(uint32_t)(int32_t)(int16_t)R16(c->r[13]+0xFFFF9874u); // 8025B7BC
  c->r[3]=c->r[31]+0x000002A4u; // 8025B7C0
  c->r[5]=R32(c->r[13]+0xFFFF9870u); // 8025B7C4
  c->r[7]=R32(c->r[13]+0xFFFF9878u); // 8025B7C8
  c->r[8]=R32(c->r[13]+0xFFFF987Cu); // 8025B7CC
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8025B7D0
  c->lr=0x8025B7D8u; f_801CCA38(c); // 8025B7D4
  c->lr=0x8025B7DCu; f_80257E40(c); // 8025B7D8
  c->r[11]=c->r[1]+0x00000030u; // 8025B7DC
  c->lr=0x8025B7E4u; { c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 8025B7E0
  c->r[0]=R32(c->r[1]+0x00000034u); // 8025B7E4
  c->lr=c->r[0]; // 8025B7E8
  c->r[1]=c->r[1]+0x00000030u; // 8025B7EC
  return; // 8025B7F0
}

// fn_8025B7F4
void f_8025B7F4(Ctx* __restrict c) {
  trace_call(0x8025B7F4u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8025B7F4
  c->r[0]=c->lr; // 8025B7F8
  W32(c->r[1]+0x00000034u,c->r[0]); // 8025B7FC
  c->r[11]=c->r[1]+0x00000030u; // 8025B800
  c->lr=0x8025B808u; { W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 8025B804
  c->r[25]=c->r[4]|c->r[4]; // 8025B808
  c->r[29]=c->r[5]|c->r[5]; // 8025B80C
  c->r[30]=c->r[3]|c->r[3]; // 8025B810
  c->r[4]=0u+0x00000000u; // 8025B814
  c->r[5]=0u+0x00002000u; // 8025B818
  c->lr=0x8025B820u; f_800043EC(c); // 8025B81C
  cmps(c,0,(int32_t)c->r[25],0); // 8025B820
  if (!crb(c,2)) { goto L_8025B834; } // 8025B824
  c->r[0]=0u+0x00000000u; // 8025B828
  W32(c->r[30]+0x00000008u,c->r[0]); // 8025B82C
  goto L_8025B958; // 8025B830
L_8025B834:;
  c->r[0]=rotl(c->r[25],2)&0xFFFFFFFCu; // 8025B834
  c->r[31]=c->r[25]|c->r[25]; // 8025B838
  c->r[26]=c->r[30]+0x00002000u; // 8025B83C
  c->r[28]=c->r[29]+c->r[0]; // 8025B840
  goto L_8025B870; // 8025B844
L_8025B848:;
  c->r[27]=R32(c->r[28]+0x00000000u); // 8025B848
  c->r[3]=c->r[27]|c->r[27]; // 8025B84C
  c->lr=0x8025B854u; f_802894C0(c); // 8025B850
  c->r[0]=c->r[3]+0x00000001u; // 8025B854
  c->r[4]=c->r[27]|c->r[27]; // 8025B858
  c->r[26]=c->r[26]-c->r[0]; // 8025B85C
  c->r[3]=c->r[26]|c->r[26]; // 8025B860
  c->lr=0x8025B868u; f_802933D8(c); // 8025B864
  c->r[0]=c->r[26]-c->r[30]; // 8025B868
  W32(c->r[28]+0x00000000u,c->r[0]); // 8025B86C
L_8025B870:;
  c->r[25]=addc(c,c->r[25],0xFFFFFFFFu,0); cr0(c,c->r[25]); // 8025B870
  c->r[28]=c->r[28]+0xFFFFFFFCu; // 8025B874
  if (!crb(c,0)) { IRQCHK(c); goto L_8025B848; } // 8025B878
  c->r[3]=addc(c,c->r[31],0x00000001u,0); cr0(c,c->r[3]); // 8025B87C
  c->r[0]=c->r[26]-c->r[30]; // 8025B880
  c->r[4]=rotl(c->r[0],0)&0xFFFFFFFCu; // 8025B884
  c->r[7]=0u+0x00000000u; // 8025B888
  c->r[6]=c->r[30]+c->r[4]; // 8025B88C
  c->r[0]=rotl(c->r[3],2)&0xFFFFFFFCu; // 8025B890
  c->r[6]=c->r[6]-c->r[0]; // 8025B894
  if (crb(c,2)) { goto L_8025B948; } // 8025B898
  cmpu(c,0,c->r[3],0x00000008u); // 8025B89C
  c->r[3]=c->r[31]+0xFFFFFFF9u; // 8025B8A0
  if (!crb(c,1)) { goto L_8025B914; } // 8025B8A4
  c->r[0]=c->r[3]+0x00000007u; // 8025B8A8
  c->r[4]=c->r[29]|c->r[29]; // 8025B8AC
  c->r[0]=rotl(c->r[0],29)&0x1FFFFFFFu; // 8025B8B0
  c->r[5]=c->r[6]|c->r[6]; // 8025B8B4
  c->ctr=c->r[0]; // 8025B8B8
  cmpu(c,0,c->r[3],0x00000000u); // 8025B8BC
  if (!crb(c,1)) { goto L_8025B914; } // 8025B8C0
L_8025B8C4:;
  c->r[0]=R32(c->r[4]+0x00000000u); // 8025B8C4
  c->r[7]=c->r[7]+0x00000008u; // 8025B8C8
  W32(c->r[5]+0x00000000u,c->r[0]); // 8025B8CC
  c->r[0]=R32(c->r[4]+0x00000004u); // 8025B8D0
  W32(c->r[5]+0x00000004u,c->r[0]); // 8025B8D4
  c->r[0]=R32(c->r[4]+0x00000008u); // 8025B8D8
  W32(c->r[5]+0x00000008u,c->r[0]); // 8025B8DC
  c->r[0]=R32(c->r[4]+0x0000000Cu); // 8025B8E0
  W32(c->r[5]+0x0000000Cu,c->r[0]); // 8025B8E4
  c->r[0]=R32(c->r[4]+0x00000010u); // 8025B8E8
  W32(c->r[5]+0x00000010u,c->r[0]); // 8025B8EC
  c->r[0]=R32(c->r[4]+0x00000014u); // 8025B8F0
  W32(c->r[5]+0x00000014u,c->r[0]); // 8025B8F4
  c->r[0]=R32(c->r[4]+0x00000018u); // 8025B8F8
  W32(c->r[5]+0x00000018u,c->r[0]); // 8025B8FC
  c->r[0]=R32(c->r[4]+0x0000001Cu); // 8025B900
  c->r[4]=c->r[4]+0x00000020u; // 8025B904
  W32(c->r[5]+0x0000001Cu,c->r[0]); // 8025B908
  c->r[5]=c->r[5]+0x00000020u; // 8025B90C
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_8025B8C4; } // 8025B910
L_8025B914:;
  c->r[3]=c->r[31]+0x00000001u; // 8025B914
  c->r[5]=rotl(c->r[7],2)&0xFFFFFFFCu; // 8025B918
  c->r[0]=c->r[3]-c->r[7]; // 8025B91C
  c->r[4]=c->r[29]+c->r[5]; // 8025B920
  c->r[5]=c->r[6]+c->r[5]; // 8025B924
  c->ctr=c->r[0]; // 8025B928
  cmpu(c,0,c->r[7],c->r[3]); // 8025B92C
  if (!crb(c,0)) { goto L_8025B948; } // 8025B930
L_8025B934:;
  c->r[0]=R32(c->r[4]+0x00000000u); // 8025B934
  c->r[4]=c->r[4]+0x00000004u; // 8025B938
  W32(c->r[5]+0x00000000u,c->r[0]); // 8025B93C
  c->r[5]=c->r[5]+0x00000004u; // 8025B940
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_8025B934; } // 8025B944
L_8025B948:;
  c->r[0]=c->r[6]+0xFFFFFFFCu; // 8025B948
  W32(c->r[6]+0xFFFFFFFCu,c->r[31]); // 8025B94C
  c->r[0]=c->r[0]-c->r[30]; // 8025B950
  W32(c->r[30]+0x00000008u,c->r[0]); // 8025B954
L_8025B958:;
  c->r[11]=c->r[1]+0x00000030u; // 8025B958
  c->r[3]=0u+0x00000001u; // 8025B95C
  c->lr=0x8025B964u; { c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 8025B960
  c->r[0]=R32(c->r[1]+0x00000034u); // 8025B964
  c->lr=c->r[0]; // 8025B968
  c->r[1]=c->r[1]+0x00000030u; // 8025B96C
  return; // 8025B970
}

// Run
void f_8025B974(Ctx* __restrict c) {
  trace_call(0x8025B974u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8025B974
  c->r[0]=c->lr; // 8025B978
  W32(c->r[1]+0x00000014u,c->r[0]); // 8025B97C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8025B980
  c->r[31]=c->r[3]|c->r[3]; // 8025B984
  c->lr=0x8025B98Cu; f_8025A518(c); // 8025B988
  /* sync */ // 8025B98C
  /* isync */ // 8025B990
  c->ctr=c->r[31]; // 8025B994
  if (true) { dispatch(c,c->ctr); return; } // 8025B998
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8025B99C
  c->r[0]=R32(c->r[1]+0x00000014u); // 8025B9A0
  c->lr=c->r[0]; // 8025B9A4
  c->r[1]=c->r[1]+0x00000010u; // 8025B9A8
  return; // 8025B9AC
}

// fn_8025B9B0
void f_8025B9B0(Ctx* __restrict c) {
  trace_call(0x8025B9B0u);
  c->r[0]=0u+0x00000001u; // 8025B9B0
  W32(c->r[13]+0xFFFF985Cu,c->r[0]); // 8025B9B4
  return; // 8025B9B8
}

// __OSGetExecParams
void f_8025B9BC(Ctx* __restrict c) {
  trace_call(0x8025B9BCu);
  c->r[5]=0u+0x80000000u; // 8025B9BC
  c->r[4]=R32(c->r[5]+0x000030F0u); // 8025B9C0
  cmpu(c,0,c->r[4],c->r[5]); // 8025B9C4
  if (crb(c,0)) { goto L_8025B9D4; } // 8025B9C8
  c->r[5]=0u+0x0000001Cu; // 8025B9CC
  f_80235294(c); return; // 8025B9D0
L_8025B9D4:;
  c->r[0]=0u+0x00000000u; // 8025B9D4
  W32(c->r[3]+0x00000000u,c->r[0]); // 8025B9D8
  return; // 8025B9DC
}

// fn_8025B9E0
void f_8025B9E0(Ctx* __restrict c) {
  trace_call(0x8025B9E0u);
  W32(c->r[13]+0xFFFF9844u,c->r[3]); // 8025B9E0
  return; // 8025B9E4
}

// fn_8025B9E8
void f_8025B9E8(Ctx* __restrict c) {
  trace_call(0x8025B9E8u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8025B9E8
  c->r[0]=c->lr; // 8025B9EC
  W32(c->r[1]+0x00000034u,c->r[0]); // 8025B9F0
  c->r[11]=c->r[1]+0x00000030u; // 8025B9F4
  c->lr=0x8025B9FCu; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 8025B9F8
  c->r[7]=R8(c->r[2]+0xFFFFDA78u); // 8025B9FC
  c->r[10]=0u+0x805E0000u; // 8025BA00
  c->r[6]=R8(c->r[2]+0xFFFFDA79u); // 8025BA04
  c->r[9]=0u+0x00000001u; // 8025BA08
  c->r[10]=c->r[10]+0x00007E40u; // 8025BA0C
  c->r[5]=R8(c->r[2]+0xFFFFDA7Au); // 8025BA10
  c->r[4]=R8(c->r[2]+0xFFFFDA7Bu); // 8025BA14
  c->r[8]=0u+0xFFFFFFFFu; // 8025BA18
  c->r[0]=0u+0x00000000u; // 8025BA1C
  c->r[3]=0u+0x80260000u; // 8025BA20
  W32(c->r[1]+0x00000010u,c->r[9]); // 8025BA24
  c->r[31]=c->r[10]+0x00010000u; // 8025BA28
  c->r[30]=c->r[10]+0x00000000u; // 8025BA2C
  c->r[3]=c->r[3]+0xFFFFB9E0u; // 8025BA30
  W32(c->r[1]+0x0000000Cu,c->r[8]); // 8025BA34
  W8(c->r[1]+0x00000008u,c->r[7]); // 8025BA38
  W8(c->r[1]+0x00000009u,c->r[6]); // 8025BA3C
  W8(c->r[1]+0x0000000Au,c->r[5]); // 8025BA40
  W8(c->r[1]+0x0000000Bu,c->r[4]); // 8025BA44
  W32(c->r[13]+0xFFFF9844u,c->r[0]); // 8025BA48
  c->lr=0x8025BA50u; f_8026BCE4(c); // 8025BA4C
L_8025BA50:;
  c->r[0]=R32(c->r[13]+0xFFFF9844u); // 8025BA50
  cmps(c,0,(int32_t)c->r[0],0); // 8025BA54
  if (crb(c,2)) { IRQCHK(c); goto L_8025BA50; } // 8025BA58
  c->r[0]=R32(c->r[13]+0xFFFF9844u); // 8025BA5C
  cmpu(c,0,c->r[0],0x00000001u); // 8025BA60
  if (crb(c,2)) { goto L_8025BA80; } // 8025BA64
  c->r[3]=0u+0x80410000u; // 8025BA68
  c->r[4]=R32(c->r[13]+0xFFFF9844u); // 8025BA6C
  c->r[3]=c->r[3]+0x00002DA0u; // 8025BA70
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8025BA74
  c->lr=0x8025BA7Cu; f_801CCA38(c); // 8025BA78
  c->lr=0x8025BA80u; f_8026053C(c); // 8025BA7C
L_8025BA80:;
  c->r[3]=c->r[31]+0xFFFFBD00u; // 8025BA80
  c->r[0]=0u+0x00000000u; // 8025BA84
  c->r[6]=0u+0x80260000u; // 8025BA88
  W32(c->r[13]+0xFFFF9858u,c->r[3]); // 8025BA8C
  c->r[4]=0u+0x00000020u; // 8025BA90
  c->r[5]=0u+0x00010000u; // 8025BA94
  W32(c->r[13]+0xFFFF9844u,c->r[0]); // 8025BA98
  c->r[6]=c->r[6]+0xFFFFB9E0u; // 8025BA9C
  c->lr=0x8025BAA4u; f_8026BE48(c); // 8025BAA0
L_8025BAA4:;
  c->r[0]=R32(c->r[13]+0xFFFF9844u); // 8025BAA4
  cmps(c,0,(int32_t)c->r[0],0); // 8025BAA8
  if (crb(c,2)) { IRQCHK(c); goto L_8025BAA4; } // 8025BAAC
  c->r[0]=R32(c->r[13]+0xFFFF9844u); // 8025BAB0
  cmpu(c,0,c->r[0],0x00000001u); // 8025BAB4
  if (crb(c,2)) { goto L_8025BAD4; } // 8025BAB8
  c->r[3]=0u+0x80410000u; // 8025BABC
  c->r[4]=R32(c->r[13]+0xFFFF9844u); // 8025BAC0
  c->r[3]=c->r[3]+0x00002DA0u; // 8025BAC4
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8025BAC8
  c->lr=0x8025BAD0u; f_801CCA38(c); // 8025BACC
  c->lr=0x8025BAD4u; f_8026053C(c); // 8025BAD0
L_8025BAD4:;
  c->r[3]=c->r[31]+0xFFFFBD20u; // 8025BAD4
  c->r[0]=0u+0x00000000u; // 8025BAD8
  W32(c->r[13]+0xFFFF9854u,c->r[3]); // 8025BADC
  c->r[6]=0u+0x80260000u; // 8025BAE0
  c->r[5]=R32(c->r[13]+0xFFFF9858u); // 8025BAE4
  c->r[6]=c->r[6]+0xFFFFB9E0u; // 8025BAE8
  W32(c->r[13]+0xFFFF9844u,c->r[0]); // 8025BAEC
  c->r[4]=0u+0x00000020u; // 8025BAF0
  c->r[5]=R32(c->r[5]+0x00000004u); // 8025BAF4
  c->lr=0x8025BAFCu; f_8026BE48(c); // 8025BAF8
L_8025BAFC:;
  c->r[0]=R32(c->r[13]+0xFFFF9844u); // 8025BAFC
  cmps(c,0,(int32_t)c->r[0],0); // 8025BB00
  if (crb(c,2)) { IRQCHK(c); goto L_8025BAFC; } // 8025BB04
  c->r[0]=R32(c->r[13]+0xFFFF9844u); // 8025BB08
  cmpu(c,0,c->r[0],0x00000001u); // 8025BB0C
  if (crb(c,2)) { goto L_8025BB2C; } // 8025BB10
  c->r[3]=0u+0x80410000u; // 8025BB14
  c->r[4]=R32(c->r[13]+0xFFFF9844u); // 8025BB18
  c->r[3]=c->r[3]+0x00002DA0u; // 8025BB1C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8025BB20
  c->lr=0x8025BB28u; f_801CCA38(c); // 8025BB24
  c->lr=0x8025BB2Cu; f_8026053C(c); // 8025BB28
L_8025BB2C:;
  c->r[3]=0u+0x00000000u; // 8025BB2C
  c->r[6]=R32(c->r[13]+0xFFFF9854u); // 8025BB30
  W32(c->r[13]+0xFFFF9850u,c->r[3]); // 8025BB34
  c->r[7]=0u+0x00000000u; // 8025BB38
  c->r[4]=R32(c->r[13]+0xFFFF9858u); // 8025BB3C
  goto L_8025BB64; // 8025BB40
L_8025BB44:;
  c->r[0]=R32(c->r[6]+0x00000004u); // 8025BB44
  cmps(c,0,(int32_t)c->r[0],0); // 8025BB48
  if (!crb(c,2)) { goto L_8025BB58; } // 8025BB4C
  c->r[3]=c->r[6]|c->r[6]; // 8025BB50
  W32(c->r[13]+0xFFFF9850u,c->r[6]); // 8025BB54
L_8025BB58:;
  c->r[6]=c->r[6]+0x00000008u; // 8025BB58
  c->r[7]=c->r[7]+0x00000001u; // 8025BB5C
  W32(c->r[13]+0xFFFF9854u,c->r[6]); // 8025BB60
L_8025BB64:;
  c->r[0]=R32(c->r[4]+0x00000000u); // 8025BB64
  c->r[5]=rotl(c->r[7],0)&0x000000FFu; // 8025BB68
  cmpu(c,0,c->r[5],c->r[0]); // 8025BB6C
  if (crb(c,0)) { IRQCHK(c); goto L_8025BB44; } // 8025BB70
  c->r[0]=0u+0x00000000u; // 8025BB74
  c->r[8]=0u+0x80260000u; // 8025BB78
  W32(c->r[13]+0xFFFF9844u,c->r[0]); // 8025BB7C
  c->r[7]=c->r[31]+0xFFFFBD40u; // 8025BB80
  c->r[8]=c->r[8]+0xFFFFB9E0u; // 8025BB84
  c->r[4]=0u+0x00000000u; // 8025BB88
  c->r[3]=R32(c->r[3]+0x00000000u); // 8025BB8C
  c->r[5]=0u+0x00000000u; // 8025BB90
  c->r[6]=0u+0x00000000u; // 8025BB94
  c->lr=0x8025BB9Cu; f_8026BA7C(c); // 8025BB98
L_8025BB9C:;
  c->r[0]=R32(c->r[13]+0xFFFF9844u); // 8025BB9C
  cmps(c,0,(int32_t)c->r[0],0); // 8025BBA0
  if (crb(c,2)) { IRQCHK(c); goto L_8025BB9C; } // 8025BBA4
  c->r[0]=R32(c->r[13]+0xFFFF9844u); // 8025BBA8
  cmpu(c,0,c->r[0],0x00000001u); // 8025BBAC
  if (crb(c,2)) { goto L_8025BBCC; } // 8025BBB0
  c->r[3]=0u+0x80410000u; // 8025BBB4
  c->r[4]=R32(c->r[13]+0xFFFF9844u); // 8025BBB8
  c->r[3]=c->r[3]+0x00002DA0u; // 8025BBBC
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8025BBC0
  c->lr=0x8025BBC8u; f_801CCA38(c); // 8025BBC4
  c->lr=0x8025BBCCu; f_8026053C(c); // 8025BBC8
L_8025BBCC:;
  c->r[0]=0u+0x00000000u; // 8025BBCC
  c->r[3]=0u+0x80260000u; // 8025BBD0
  W32(c->r[13]+0xFFFF9844u,c->r[0]); // 8025BBD4
  c->r[3]=c->r[3]+0xFFFFB9E0u; // 8025BBD8
  c->lr=0x8025BBE0u; f_8026BCE4(c); // 8025BBDC
L_8025BBE0:;
  c->r[0]=R32(c->r[13]+0xFFFF9844u); // 8025BBE0
  cmps(c,0,(int32_t)c->r[0],0); // 8025BBE4
  if (crb(c,2)) { IRQCHK(c); goto L_8025BBE0; } // 8025BBE8
  c->r[0]=R32(c->r[13]+0xFFFF9844u); // 8025BBEC
  cmpu(c,0,c->r[0],0x00000001u); // 8025BBF0
  if (crb(c,2)) { goto L_8025BC10; } // 8025BBF4
  c->r[3]=0u+0x80410000u; // 8025BBF8
  c->r[4]=R32(c->r[13]+0xFFFF9844u); // 8025BBFC
  c->r[3]=c->r[3]+0x00002DA0u; // 8025BC00
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8025BC04
  c->lr=0x8025BC0Cu; f_801CCA38(c); // 8025BC08
  c->lr=0x8025BC10u; f_8026053C(c); // 8025BC0C
L_8025BC10:;
  c->r[5]=c->r[31]+0xFFFFBD40u; // 8025BC10
  c->r[29]=0u+0x00000000u; // 8025BC14
  W32(c->r[13]+0xFFFF984Cu,c->r[5]); // 8025BC18
  c->r[3]=c->r[13]+0xFFFF8DD8u; // 8025BC1C
  c->r[28]=R32(c->r[5]+0x00000184u); // 8025BC20
  c->r[4]=0u+0x00000000u; // 8025BC24
  c->r[27]=R32(c->r[5]+0x00000188u); // 8025BC28
  c->lr=0x8025BC30u; f_802A9360(c); // 8025BC2C
  cmps(c,0,(int32_t)c->r[3],0); // 8025BC30
  W32(c->r[1]+0x0000000Cu,c->r[3]); // 8025BC34
  if (!crb(c,0)) { goto L_8025BC40; } // 8025BC38
  c->r[29]=c->r[3]|c->r[3]; // 8025BC3C
L_8025BC40:;
  cmps(c,0,(int32_t)c->r[29],0); // 8025BC40
  if (crb(c,2)) { goto L_8025BC60; } // 8025BC44
  c->r[3]=0u+0x80410000u; // 8025BC48
  c->r[4]=c->r[29]|c->r[29]; // 8025BC4C
  c->r[3]=c->r[3]+0x00002DA0u; // 8025BC50
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8025BC54
  c->lr=0x8025BC5Cu; f_801CCA38(c); // 8025BC58
  c->lr=0x8025BC60u; f_802630FC(c); // 8025BC5C
L_8025BC60:;
  c->r[6]=c->r[27]|c->r[27]; // 8025BC60
  c->r[5]=c->r[28]|c->r[28]; // 8025BC64
  c->r[3]=c->r[1]+0x0000000Cu; // 8025BC68
  c->r[8]=c->r[1]+0x00000010u; // 8025BC6C
  c->r[7]=0u+0x00000000u; // 8025BC70
  c->lr=0x8025BC78u; f_8025C974(c); // 8025BC74
  c->r[0]=R32(c->r[1]+0x00000010u); // 8025BC78
  c->r[4]=c->r[3]|c->r[3]; // 8025BC7C
  cmpu(c,0,c->r[0],0x00000001u); // 8025BC80
  if (!crb(c,2)) { goto L_8025BC90; } // 8025BC84
  cmps(c,0,(int32_t)c->r[3],0); // 8025BC88
  if (crb(c,2)) { goto L_8025BCA4; } // 8025BC8C
L_8025BC90:;
  c->r[3]=0u+0x80410000u; // 8025BC90
  c->r[3]=c->r[3]+0x00002DA0u; // 8025BC94
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8025BC98
  c->lr=0x8025BCA0u; f_801CCA38(c); // 8025BC9C
  c->lr=0x8025BCA4u; f_802630FC(c); // 8025BCA0
L_8025BCA4:;
  c->r[6]=c->r[27]|c->r[27]; // 8025BCA4
  c->r[5]=c->r[28]|c->r[28]; // 8025BCA8
  c->r[7]=c->r[30]|c->r[30]; // 8025BCAC
  c->r[3]=c->r[1]+0x0000000Cu; // 8025BCB0
  c->r[8]=c->r[1]+0x00000010u; // 8025BCB4
  c->lr=0x8025BCBCu; f_8025C974(c); // 8025BCB8
  cmps(c,0,(int32_t)c->r[3],0); // 8025BCBC
  c->r[4]=c->r[3]|c->r[3]; // 8025BCC0
  if (crb(c,2)) { goto L_8025BCDC; } // 8025BCC4
  c->r[3]=0u+0x80410000u; // 8025BCC8
  c->r[3]=c->r[3]+0x00002DA0u; // 8025BCCC
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8025BCD0
  c->lr=0x8025BCD8u; f_801CCA38(c); // 8025BCD4
  c->lr=0x8025BCDCu; f_802630FC(c); // 8025BCD8
L_8025BCDC:;
  c->r[6]=c->r[27]|c->r[27]; // 8025BCDC
  c->r[5]=c->r[28]|c->r[28]; // 8025BCE0
  c->r[7]=c->r[30]|c->r[30]; // 8025BCE4
  c->r[3]=c->r[1]+0x0000000Cu; // 8025BCE8
  c->lr=0x8025BCF0u; f_8025CA94(c); // 8025BCEC
  cmps(c,0,(int32_t)c->r[3],0); // 8025BCF0
  c->r[4]=c->r[3]|c->r[3]; // 8025BCF4
  if (crb(c,2)) { goto L_8025BD10; } // 8025BCF8
  c->r[3]=0u+0x80410000u; // 8025BCFC
  c->r[3]=c->r[3]+0x00002DA0u; // 8025BD00
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8025BD04
  c->lr=0x8025BD0Cu; f_801CCA38(c); // 8025BD08
  c->lr=0x8025BD10u; f_802630FC(c); // 8025BD0C
L_8025BD10:;
  c->r[3]=R32(c->r[1]+0x0000000Cu); // 8025BD10
  cmps(c,0,(int32_t)c->r[3],0); // 8025BD14
  if (crb(c,0)) { goto L_8025BD30; } // 8025BD18
  c->lr=0x8025BD20u; f_802A9540(c); // 8025BD1C
  cmps(c,0,(int32_t)c->r[3],0); // 8025BD20
  if (!crb(c,2)) { goto L_8025BD30; } // 8025BD24
  c->r[0]=0u+0xFFFFFFFFu; // 8025BD28
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 8025BD2C
L_8025BD30:;
  c->lr=0x8025BD34u; f_8026B690(c); // 8025BD30
  c->r[0]=0u+0x00000000u; // 8025BD34
  c->r[4]=0u+0x80260000u; // 8025BD38
  W32(c->r[13]+0xFFFF9844u,c->r[0]); // 8025BD3C
  c->r[3]=c->r[31]+0x00000740u; // 8025BD40
  c->r[4]=c->r[4]+0xFFFFB9E0u; // 8025BD44
  c->lr=0x8025BD4Cu; f_8026B8F4(c); // 8025BD48
L_8025BD4C:;
  c->r[0]=R32(c->r[13]+0xFFFF9844u); // 8025BD4C
  cmps(c,0,(int32_t)c->r[0],0); // 8025BD50
  if (crb(c,2)) { IRQCHK(c); goto L_8025BD4C; } // 8025BD54
  c->r[0]=R32(c->r[13]+0xFFFF9844u); // 8025BD58
  cmpu(c,0,c->r[0],0x00000001u); // 8025BD5C
  if (crb(c,2)) { goto L_8025BD7C; } // 8025BD60
  c->r[3]=0u+0x80410000u; // 8025BD64
  c->r[4]=R32(c->r[13]+0xFFFF9844u); // 8025BD68
  c->r[3]=c->r[3]+0x00002DA0u; // 8025BD6C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8025BD70
  c->lr=0x8025BD78u; f_801CCA38(c); // 8025BD74
  c->lr=0x8025BD7Cu; f_8026053C(c); // 8025BD78
L_8025BD7C:;
  c->r[3]=c->r[31]+0xFFFFBD00u; // 8025BD7C
  c->r[0]=0u+0x00000000u; // 8025BD80
  c->r[6]=0u+0x80260000u; // 8025BD84
  W32(c->r[13]+0xFFFF9858u,c->r[3]); // 8025BD88
  c->r[4]=0u+0x00000020u; // 8025BD8C
  c->r[5]=0u+0x00010000u; // 8025BD90
  W32(c->r[13]+0xFFFF9844u,c->r[0]); // 8025BD94
  c->r[6]=c->r[6]+0xFFFFB9E0u; // 8025BD98
  c->lr=0x8025BDA0u; f_8026BE48(c); // 8025BD9C
L_8025BDA0:;
  c->r[0]=R32(c->r[13]+0xFFFF9844u); // 8025BDA0
  cmps(c,0,(int32_t)c->r[0],0); // 8025BDA4
  if (crb(c,2)) { IRQCHK(c); goto L_8025BDA0; } // 8025BDA8
  c->r[0]=R32(c->r[13]+0xFFFF9844u); // 8025BDAC
  cmpu(c,0,c->r[0],0x00000001u); // 8025BDB0
  if (crb(c,2)) { goto L_8025BDD0; } // 8025BDB4
  c->r[3]=0u+0x80410000u; // 8025BDB8
  c->r[4]=R32(c->r[13]+0xFFFF9844u); // 8025BDBC
  c->r[3]=c->r[3]+0x00002DA0u; // 8025BDC0
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8025BDC4
  c->lr=0x8025BDCCu; f_801CCA38(c); // 8025BDC8
  c->lr=0x8025BDD0u; f_8026053C(c); // 8025BDCC
L_8025BDD0:;
  c->r[3]=c->r[31]+0xFFFFBD20u; // 8025BDD0
  c->r[0]=0u+0x00000000u; // 8025BDD4
  W32(c->r[13]+0xFFFF9854u,c->r[3]); // 8025BDD8
  c->r[6]=0u+0x80260000u; // 8025BDDC
  c->r[5]=R32(c->r[13]+0xFFFF9858u); // 8025BDE0
  c->r[6]=c->r[6]+0xFFFFB9E0u; // 8025BDE4
  W32(c->r[13]+0xFFFF9844u,c->r[0]); // 8025BDE8
  c->r[4]=0u+0x00000020u; // 8025BDEC
  c->r[5]=R32(c->r[5]+0x00000004u); // 8025BDF0
  c->lr=0x8025BDF8u; f_8026BE48(c); // 8025BDF4
L_8025BDF8:;
  c->r[0]=R32(c->r[13]+0xFFFF9844u); // 8025BDF8
  cmps(c,0,(int32_t)c->r[0],0); // 8025BDFC
  if (crb(c,2)) { IRQCHK(c); goto L_8025BDF8; } // 8025BE00
  c->r[0]=R32(c->r[13]+0xFFFF9844u); // 8025BE04
  cmpu(c,0,c->r[0],0x00000001u); // 8025BE08
  if (crb(c,2)) { goto L_8025BE28; } // 8025BE0C
  c->r[3]=0u+0x80410000u; // 8025BE10
  c->r[4]=R32(c->r[13]+0xFFFF9844u); // 8025BE14
  c->r[3]=c->r[3]+0x00002DA0u; // 8025BE18
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8025BE1C
  c->lr=0x8025BE24u; f_801CCA38(c); // 8025BE20
  c->lr=0x8025BE28u; f_8026053C(c); // 8025BE24
L_8025BE28:;
  c->r[3]=0u+0x00000000u; // 8025BE28
  c->r[6]=R32(c->r[13]+0xFFFF9854u); // 8025BE2C
  W32(c->r[13]+0xFFFF9850u,c->r[3]); // 8025BE30
  c->r[7]=0u+0x00000000u; // 8025BE34
  c->r[4]=R32(c->r[13]+0xFFFF9858u); // 8025BE38
  goto L_8025BE60; // 8025BE3C
L_8025BE40:;
  c->r[0]=R32(c->r[6]+0x00000004u); // 8025BE40
  cmps(c,0,(int32_t)c->r[0],0); // 8025BE44
  if (!crb(c,2)) { goto L_8025BE54; } // 8025BE48
  c->r[3]=c->r[6]|c->r[6]; // 8025BE4C
  W32(c->r[13]+0xFFFF9850u,c->r[6]); // 8025BE50
L_8025BE54:;
  c->r[6]=c->r[6]+0x00000008u; // 8025BE54
  c->r[7]=c->r[7]+0x00000001u; // 8025BE58
  W32(c->r[13]+0xFFFF9854u,c->r[6]); // 8025BE5C
L_8025BE60:;
  c->r[0]=R32(c->r[4]+0x00000000u); // 8025BE60
  c->r[5]=rotl(c->r[7],0)&0x000000FFu; // 8025BE64
  cmpu(c,0,c->r[5],c->r[0]); // 8025BE68
  if (crb(c,0)) { IRQCHK(c); goto L_8025BE40; } // 8025BE6C
  c->r[0]=0u+0x00000000u; // 8025BE70
  c->r[8]=0u+0x80260000u; // 8025BE74
  W32(c->r[13]+0xFFFF9844u,c->r[0]); // 8025BE78
  c->r[7]=c->r[31]+0xFFFFBD40u; // 8025BE7C
  c->r[8]=c->r[8]+0xFFFFB9E0u; // 8025BE80
  c->r[4]=0u+0x00000000u; // 8025BE84
  c->r[3]=R32(c->r[3]+0x00000000u); // 8025BE88
  c->r[5]=0u+0x00000000u; // 8025BE8C
  c->r[6]=0u+0x00000000u; // 8025BE90
  c->lr=0x8025BE98u; f_8026BA7C(c); // 8025BE94
L_8025BE98:;
  c->r[0]=R32(c->r[13]+0xFFFF9844u); // 8025BE98
  cmps(c,0,(int32_t)c->r[0],0); // 8025BE9C
  if (crb(c,2)) { IRQCHK(c); goto L_8025BE98; } // 8025BEA0
  c->r[0]=R32(c->r[13]+0xFFFF9844u); // 8025BEA4
  cmpu(c,0,c->r[0],0x00000001u); // 8025BEA8
  if (crb(c,2)) { goto L_8025BEC8; } // 8025BEAC
  c->r[3]=0u+0x80410000u; // 8025BEB0
  c->r[4]=R32(c->r[13]+0xFFFF9844u); // 8025BEB4
  c->r[3]=c->r[3]+0x00002DA0u; // 8025BEB8
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8025BEBC
  c->lr=0x8025BEC4u; f_801CCA38(c); // 8025BEC0
  c->lr=0x8025BEC8u; f_8026053C(c); // 8025BEC4
L_8025BEC8:;
  c->r[11]=c->r[1]+0x00000030u; // 8025BEC8
  c->lr=0x8025BED0u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 8025BECC
  c->r[0]=R32(c->r[1]+0x00000034u); // 8025BED0
  c->lr=c->r[0]; // 8025BED4
  c->r[1]=c->r[1]+0x00000030u; // 8025BED8
  return; // 8025BEDC
}

// fn_8025BEE0
void f_8025BEE0(Ctx* __restrict c) {
  trace_call(0x8025BEE0u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8025BEE0
  c->r[0]=c->lr; // 8025BEE4
  c->r[3]=0u+0x00000001u; // 8025BEE8
  c->r[8]=0u+0xFFFFFFFFu; // 8025BEEC
  W32(c->r[1]+0x00000024u,c->r[0]); // 8025BEF0
  c->r[4]=0u+0x00000000u; // 8025BEF4
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8025BEF8
  c->r[31]=0u+0x00000000u; // 8025BEFC
  W32(c->r[1]+0x00000018u,c->r[30]); // 8025BF00
  c->r[30]=0u+0x805E0000u; // 8025BF04
  c->r[30]=c->r[30]+0x00007E40u; // 8025BF08
  c->r[7]=R8(c->r[2]+0xFFFFDA7Cu); // 8025BF0C
  c->r[6]=R8(c->r[2]+0xFFFFDA7Du); // 8025BF10
  c->r[5]=R8(c->r[2]+0xFFFFDA7Eu); // 8025BF14
  c->r[0]=R8(c->r[2]+0xFFFFDA7Fu); // 8025BF18
  W32(c->r[1]+0x00000010u,c->r[3]); // 8025BF1C
  c->r[3]=c->r[13]+0xFFFF8DD8u; // 8025BF20
  W32(c->r[1]+0x0000000Cu,c->r[8]); // 8025BF24
  W8(c->r[1]+0x00000008u,c->r[7]); // 8025BF28
  W8(c->r[1]+0x00000009u,c->r[6]); // 8025BF2C
  W8(c->r[1]+0x0000000Au,c->r[5]); // 8025BF30
  W8(c->r[1]+0x0000000Bu,c->r[0]); // 8025BF34
  c->lr=0x8025BF3Cu; f_802A9360(c); // 8025BF38
  cmps(c,0,(int32_t)c->r[3],0); // 8025BF3C
  W32(c->r[1]+0x0000000Cu,c->r[3]); // 8025BF40
  if (!crb(c,0)) { goto L_8025BF4C; } // 8025BF44
  c->r[31]=c->r[3]|c->r[3]; // 8025BF48
L_8025BF4C:;
  cmps(c,0,(int32_t)c->r[31],0); // 8025BF4C
  if (!crb(c,2)) { goto L_8025BFC4; } // 8025BF50
  c->r[3]=c->r[1]+0x0000000Cu; // 8025BF54
  c->r[8]=c->r[1]+0x00000010u; // 8025BF58
  c->r[6]=0u+0x00000002u; // 8025BF5C
  c->r[5]=0u+0x00000001u; // 8025BF60
  c->r[7]=0u+0x00000000u; // 8025BF64
  c->lr=0x8025BF6Cu; f_8025C974(c); // 8025BF68
  c->r[0]=R32(c->r[1]+0x00000010u); // 8025BF6C
  cmpu(c,0,c->r[0],0x00000001u); // 8025BF70
  if (!crb(c,2)) { goto L_8025BFC4; } // 8025BF74
  cmps(c,0,(int32_t)c->r[3],0); // 8025BF78
  if (crb(c,2)) { goto L_8025BF84; } // 8025BF7C
  goto L_8025BFC4; // 8025BF80
L_8025BF84:;
  c->r[7]=c->r[30]|c->r[30]; // 8025BF84
  c->r[3]=c->r[1]+0x0000000Cu; // 8025BF88
  c->r[8]=c->r[1]+0x00000010u; // 8025BF8C
  c->r[6]=0u+0x00000002u; // 8025BF90
  c->r[5]=0u+0x00000001u; // 8025BF94
  c->lr=0x8025BF9Cu; f_8025C974(c); // 8025BF98
  cmps(c,0,(int32_t)c->r[3],0); // 8025BF9C
  if (!crb(c,2)) { goto L_8025BFC4; } // 8025BFA0
  c->r[7]=c->r[30]|c->r[30]; // 8025BFA4
  c->r[3]=c->r[1]+0x0000000Cu; // 8025BFA8
  c->r[6]=0u+0x00000002u; // 8025BFAC
  c->r[5]=0u+0x00000001u; // 8025BFB0
  c->lr=0x8025BFB8u; f_8025CA94(c); // 8025BFB4
  cmps(c,0,(int32_t)c->r[3],0); // 8025BFB8
  if (!crb(c,2)) { goto L_8025BFC4; } // 8025BFBC
L_8025BFC0:;
  IRQCHK(c); goto L_8025BFC0; // 8025BFC0
L_8025BFC4:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 8025BFC4
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8025BFC8
  c->r[30]=R32(c->r[1]+0x00000018u); // 8025BFCC
  c->lr=c->r[0]; // 8025BFD0
  c->r[1]=c->r[1]+0x00000020u; // 8025BFD4
  return; // 8025BFD8
}

// fn_8025BFDC
void f_8025BFDC(Ctx* __restrict c) {
  trace_call(0x8025BFDCu);
  c->r[11]=rotl(c->r[1],0)&0x0000001Fu; // 8025BFDC
  c->r[12]=c->r[1]|c->r[1]; // 8025BFE0
  c->r[11]=addc(c,~c->r[11],0xFFFFFE60u,1); // 8025BFE4
  {uint32_t ea=c->r[1]+c->r[11]; W32(ea,c->r[1]); c->r[1]=ea;} // 8025BFE8
  c->r[0]=c->lr; // 8025BFEC
  c->r[3]=0u+0x00000001u; // 8025BFF0
  c->r[4]=0u+0x00000000u; // 8025BFF4
  W32(c->r[12]+0x00000004u,c->r[0]); // 8025BFF8
  c->r[0]=0u+0xFFFFFFFFu; // 8025BFFC
  W32(c->r[12]+0xFFFFFFFCu,c->r[31]); // 8025C000
  c->r[31]=0u+0x00000000u; // 8025C004
  W32(c->r[1]+0x00000024u,c->r[3]); // 8025C008
  c->r[3]=c->r[13]+0xFFFF8DD8u; // 8025C00C
  W32(c->r[1]+0x00000020u,c->r[0]); // 8025C010
  c->lr=0x8025C018u; f_802A9360(c); // 8025C014
  cmps(c,0,(int32_t)c->r[3],0); // 8025C018
  W32(c->r[1]+0x00000020u,c->r[3]); // 8025C01C
  c->r[0]=c->r[3]|c->r[3]; // 8025C020
  if (!crb(c,0)) { goto L_8025C02C; } // 8025C024
  c->r[31]=c->r[3]|c->r[3]; // 8025C028
L_8025C02C:;
  cmps(c,0,(int32_t)c->r[31],0); // 8025C02C
  if (!crb(c,2)) { goto L_8025C110; } // 8025C030
  cmps(c,0,(int32_t)c->r[3],0); // 8025C034
  c->r[7]=c->r[1]+0x00000060u; // 8025C038
  c->r[5]=c->r[1]+0x00000080u; // 8025C03C
  if (crb(c,0)) { goto L_8025C054; } // 8025C040
  c->r[4]=c->r[1]+0x00000040u; // 8025C044
  c->r[3]=0u+0x00000000u; // 8025C048
  cmpu(c,0,c->r[4],c->r[3]); // 8025C04C
  if (!crb(c,2)) { goto L_8025C05C; } // 8025C050
L_8025C054:;
  c->r[3]=0u+0xFFFFFC07u; // 8025C054
  goto L_8025C094; // 8025C058
L_8025C05C:;
  c->r[4]=0u+0x00000008u; // 8025C05C
  W32(c->r[1]+0x00000060u,c->r[5]); // 8025C060
  c->r[3]=c->r[0]|c->r[0]; // 8025C064
  c->r[5]=0u+0x00000000u; // 8025C068
  W32(c->r[1]+0x00000064u,c->r[4]); // 8025C06C
  c->r[4]=0u+0x00000020u; // 8025C070
  c->r[6]=0u+0x00000001u; // 8025C074
  c->lr=0x8025C07Cu; f_802AA048(c); // 8025C078
  cmps(c,0,(int32_t)c->r[3],0); // 8025C07C
  if (!crb(c,2)) { goto L_8025C094; } // 8025C080
  c->r[0]=R32(c->r[1]+0x00000080u); // 8025C084
  c->r[4]=R32(c->r[1]+0x00000084u); // 8025C088
  W32(c->r[1]+0x00000040u,c->r[0]); // 8025C08C
  W32(c->r[1]+0x00000044u,c->r[4]); // 8025C090
L_8025C094:;
  cmps(c,0,(int32_t)c->r[3],0); // 8025C094
  if (!crb(c,2)) { goto L_8025C110; } // 8025C098
  c->r[5]=R32(c->r[1]+0x00000040u); // 8025C09C
  c->r[3]=c->r[1]+0x00000020u; // 8025C0A0
  c->r[6]=R32(c->r[1]+0x00000044u); // 8025C0A4
  c->r[8]=c->r[1]+0x00000024u; // 8025C0A8
  c->r[7]=0u+0x00000000u; // 8025C0AC
  c->lr=0x8025C0B4u; f_8025C974(c); // 8025C0B0
  cmps(c,0,(int32_t)c->r[3],0); // 8025C0B4
  if (!crb(c,2)) { goto L_8025C110; } // 8025C0B8
  c->r[0]=R32(c->r[1]+0x00000024u); // 8025C0BC
  c->r[4]=0u+0x00000020u; // 8025C0C0
  c->r[3]=(uint32_t)((int32_t)c->r[0]*(int32_t)216); // 8025C0C4
  c->lr=0x8025C0CCu; f_80259ED8(c); // 8025C0C8
  c->r[31]=c->r[3]|c->r[3]; // 8025C0CC
  c->r[5]=R32(c->r[1]+0x00000040u); // 8025C0D0
  c->r[6]=R32(c->r[1]+0x00000044u); // 8025C0D4
  c->r[7]=c->r[31]|c->r[31]; // 8025C0D8
  c->r[3]=c->r[1]+0x00000020u; // 8025C0DC
  c->r[8]=c->r[1]+0x00000024u; // 8025C0E0
  c->lr=0x8025C0E8u; f_8025C974(c); // 8025C0E4
  cmps(c,0,(int32_t)c->r[3],0); // 8025C0E8
  if (!crb(c,2)) { goto L_8025C110; } // 8025C0EC
  c->r[5]=R32(c->r[1]+0x00000040u); // 8025C0F0
  c->r[7]=c->r[31]|c->r[31]; // 8025C0F4
  c->r[6]=R32(c->r[1]+0x00000044u); // 8025C0F8
  c->r[3]=c->r[1]+0x00000020u; // 8025C0FC
  c->lr=0x8025C104u; f_8025CA94(c); // 8025C100
  cmps(c,0,(int32_t)c->r[3],0); // 8025C104
  if (!crb(c,2)) { goto L_8025C110; } // 8025C108
L_8025C10C:;
  IRQCHK(c); goto L_8025C10C; // 8025C10C
L_8025C110:;
  c->r[10]=R32(c->r[1]+0x00000000u); // 8025C110
  c->r[0]=R32(c->r[10]+0x00000004u); // 8025C114
  c->r[31]=R32(c->r[10]+0xFFFFFFFCu); // 8025C118
  c->lr=c->r[0]; // 8025C11C
  c->r[1]=c->r[10]|c->r[10]; // 8025C120
  return; // 8025C124
}

// fn_8025C128
void f_8025C128(Ctx* __restrict c) {
  trace_call(0x8025C128u);
  {uint32_t ea=c->r[1]+0xFFFFFE40u; W32(ea,c->r[1]); c->r[1]=ea;} // 8025C128
  c->r[0]=c->lr; // 8025C12C
  W32(c->r[1]+0x000001C4u,c->r[0]); // 8025C130
  c->r[11]=c->r[1]+0x000001C0u; // 8025C134
  c->lr=0x8025C13Cu; { W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 8025C138
  c->r[27]=c->r[3]|c->r[3]; // 8025C13C
  c->r[24]=c->r[4]|c->r[4]; // 8025C140
  c->r[28]=c->r[5]|c->r[5]; // 8025C144
  c->r[29]=c->r[6]|c->r[6]; // 8025C148
  c->r[25]=c->r[7]|c->r[7]; // 8025C14C
  c->r[31]=c->r[8]|c->r[8]; // 8025C150
  c->r[26]=c->r[9]|c->r[9]; // 8025C154
  c->lr=0x8025C15Cu; f_8025EA10(c); // 8025C158
  c->r[3]=0u+0x0000001Cu; // 8025C15C
  c->r[4]=0u+0x00000001u; // 8025C160
  c->lr=0x8025C168u; f_80259ED8(c); // 8025C164
  c->r[0]=0u+0x00000001u; // 8025C168
  cmps(c,0,(int32_t)c->r[25],0); // 8025C16C
  W32(c->r[3]+0x00000000u,c->r[0]); // 8025C170
  c->r[30]=c->r[3]|c->r[3]; // 8025C174
  W32(c->r[3]+0x00000004u,c->r[24]); // 8025C178
  W32(c->r[3]+0x0000000Cu,c->r[28]); // 8025C17C
  W32(c->r[3]+0x00000010u,c->r[29]); // 8025C180
  W32(c->r[3]+0x00000014u,c->r[25]); // 8025C184
  if (!crb(c,2)) { goto L_8025C1A8; } // 8025C188
  c->r[3]=0u+0x00002000u; // 8025C18C
  c->r[4]=0u+0x00000001u; // 8025C190
  c->lr=0x8025C198u; f_80259ED8(c); // 8025C194
  W32(c->r[30]+0x00000018u,c->r[3]); // 8025C198
  c->r[4]=c->r[31]|c->r[31]; // 8025C19C
  c->r[5]=c->r[26]|c->r[26]; // 8025C1A0
  c->lr=0x8025C1A8u; f_8025B7F4(c); // 8025C1A4
L_8025C1A8:;
  c->lr=0x8025C1ACu; f_80266960(c); // 8025C1A8
  c->r[3]=0u+0x00000001u; // 8025C1AC
  c->lr=0x8025C1B4u; f_8026A5B0(c); // 8025C1B0
  c->lr=0x8025C1B8u; f_8026A5C0(c); // 8025C1B4
  c->r[0]=0u+0x00000000u; // 8025C1B8
  c->r[3]=0u+0x80260000u; // 8025C1BC
  W32(c->r[13]+0xFFFF985Cu,c->r[0]); // 8025C1C0
  c->r[3]=c->r[3]+0xFFFFB9B0u; // 8025C1C4
  c->lr=0x8025C1CCu; f_8026AB08(c); // 8025C1C8
  c->r[3]=0u+0xFFFFFFF0u; // 8025C1CC
  c->lr=0x8025C1D4u; f_8025EDA0(c); // 8025C1D0
  c->r[3]=0u+0x00000010u; // 8025C1D4
  c->lr=0x8025C1DCu; f_8025EE20(c); // 8025C1D8
  c->lr=0x8025C1E0u; f_8025EA24(c); // 8025C1DC
L_8025C1E0:;
  c->r[0]=R32(c->r[13]+0xFFFF985Cu); // 8025C1E0
  cmps(c,0,(int32_t)c->r[0],1); // 8025C1E4
  if (!crb(c,2)) { IRQCHK(c); goto L_8025C1E0; } // 8025C1E8
  c->lr=0x8025C1F0u; f_8025B9E8(c); // 8025C1EC
  c->r[3]=0u+0x00000020u; // 8025C1F0
  c->r[4]=0u+0x00000020u; // 8025C1F4
  c->lr=0x8025C1FCu; f_80259ED8(c); // 8025C1F8
  c->r[6]=R32(c->r[13]+0xFFFF9840u); // 8025C1FC
  c->r[31]=c->r[3]|c->r[3]; // 8025C200
  cmps(c,0,(int32_t)c->r[6],0); // 8025C204
  if (crb(c,2)) { goto L_8025C210; } // 8025C208
  goto L_8025C2AC; // 8025C20C
L_8025C210:;
  c->r[26]=0u+0x80000000u; // 8025C210
  c->r[0]=R32(c->r[26]+0x000030F4u); // 8025C214
  cmps(c,0,(int32_t)c->r[0],0); // 8025C218
  if (crb(c,2)) { goto L_8025C2A4; } // 8025C21C
  c->r[3]=0u+0x00000040u; // 8025C220
  c->r[4]=0u+0x00000020u; // 8025C224
  c->lr=0x8025C22Cu; f_80259ED8(c); // 8025C228
  c->r[0]=R32(c->r[26]+0x000030F4u); // 8025C22C
  c->r[26]=c->r[3]|c->r[3]; // 8025C230
  c->r[3]=c->r[1]+0x000000E0u; // 8025C234
  c->r[5]=0u+0x00000040u; // 8025C238
  c->r[4]=c->r[26]|c->r[26]; // 8025C23C
  c->r[6]=sraw(c,c->r[0],2); // 8025C240
  c->r[7]=0u+0x00000000u; // 8025C244
  c->r[8]=0u+0x00000000u; // 8025C248
  c->lr=0x8025C250u; f_8026A290(c); // 8025C24C
  goto L_8025C278; // 8025C250
L_8025C254:;
  c->r[3]=c->r[1]+0x000000E0u; // 8025C254
  c->lr=0x8025C25Cu; f_8026A44C(c); // 8025C258
  cmps(c,0,(int32_t)c->r[3],2); // 8025C25C
  if (crb(c,1)) { goto L_8025C274; } // 8025C260
  c->r[3]=c->r[1]+0x000000E0u; // 8025C264
  c->lr=0x8025C26Cu; f_8026A44C(c); // 8025C268
  cmps(c,0,(int32_t)c->r[3],0); // 8025C26C
  if (!crb(c,0)) { goto L_8025C278; } // 8025C270
L_8025C274:;
  c->lr=0x8025C278u; f_8026053C(c); // 8025C274
L_8025C278:;
  c->r[3]=c->r[1]+0x000000E0u; // 8025C278
  c->lr=0x8025C280u; f_8026A44C(c); // 8025C27C
  cmps(c,0,(int32_t)c->r[3],0); // 8025C280
  if (!crb(c,2)) { IRQCHK(c); goto L_8025C254; } // 8025C284
  c->r[3]=0u+0x80000000u; // 8025C288
  c->r[0]=R32(c->r[26]+0x00000038u); // 8025C28C
  c->r[3]=R32(c->r[3]+0x000030F4u); // 8025C290
  c->r[0]=c->r[3]+c->r[0]; // 8025C294
  c->r[6]=sraw(c,c->r[0],2); // 8025C298
  W32(c->r[13]+0xFFFF9840u,c->r[6]); // 8025C29C
  goto L_8025C2AC; // 8025C2A0
L_8025C2A4:;
  c->r[6]=0u+0x00000910u; // 8025C2A4
  W32(c->r[13]+0xFFFF9840u,c->r[6]); // 8025C2A8
L_8025C2AC:;
  c->r[4]=c->r[31]|c->r[31]; // 8025C2AC
  c->r[3]=c->r[1]+0x00000110u; // 8025C2B0
  c->r[5]=0u+0x00000020u; // 8025C2B4
  c->r[7]=0u+0x00000000u; // 8025C2B8
  c->r[8]=0u+0x00000000u; // 8025C2BC
  c->lr=0x8025C2C4u; f_8026A290(c); // 8025C2C0
  goto L_8025C2EC; // 8025C2C4
L_8025C2C8:;
  c->r[3]=c->r[1]+0x00000110u; // 8025C2C8
  c->lr=0x8025C2D0u; f_8026A44C(c); // 8025C2CC
  cmps(c,0,(int32_t)c->r[3],2); // 8025C2D0
  if (crb(c,1)) { goto L_8025C2E8; } // 8025C2D4
  c->r[3]=c->r[1]+0x00000110u; // 8025C2D8
  c->lr=0x8025C2E0u; f_8026A44C(c); // 8025C2DC
  cmps(c,0,(int32_t)c->r[3],0); // 8025C2E0
  if (!crb(c,0)) { goto L_8025C2EC; } // 8025C2E4
L_8025C2E8:;
  c->lr=0x8025C2ECu; f_8026053C(c); // 8025C2E8
L_8025C2EC:;
  c->r[3]=c->r[1]+0x00000110u; // 8025C2EC
  c->lr=0x8025C2F4u; f_8026A44C(c); // 8025C2F0
  cmps(c,0,(int32_t)c->r[3],0); // 8025C2F4
  if (!crb(c,2)) { IRQCHK(c); goto L_8025C2C8; } // 8025C2F8
  c->r[6]=R32(c->r[13]+0xFFFF9840u); // 8025C2FC
  cmps(c,0,(int32_t)c->r[6],0); // 8025C300
  if (crb(c,2)) { goto L_8025C30C; } // 8025C304
  goto L_8025C3A8; // 8025C308
L_8025C30C:;
  c->r[26]=0u+0x80000000u; // 8025C30C
  c->r[0]=R32(c->r[26]+0x000030F4u); // 8025C310
  cmps(c,0,(int32_t)c->r[0],0); // 8025C314
  if (crb(c,2)) { goto L_8025C3A0; } // 8025C318
  c->r[3]=0u+0x00000040u; // 8025C31C
  c->r[4]=0u+0x00000020u; // 8025C320
  c->lr=0x8025C328u; f_80259ED8(c); // 8025C324
  c->r[0]=R32(c->r[26]+0x000030F4u); // 8025C328
  c->r[26]=c->r[3]|c->r[3]; // 8025C32C
  c->r[3]=c->r[1]+0x00000140u; // 8025C330
  c->r[5]=0u+0x00000040u; // 8025C334
  c->r[4]=c->r[26]|c->r[26]; // 8025C338
  c->r[6]=sraw(c,c->r[0],2); // 8025C33C
  c->r[7]=0u+0x00000000u; // 8025C340
  c->r[8]=0u+0x00000000u; // 8025C344
  c->lr=0x8025C34Cu; f_8026A290(c); // 8025C348
  goto L_8025C374; // 8025C34C
L_8025C350:;
  c->r[3]=c->r[1]+0x00000140u; // 8025C350
  c->lr=0x8025C358u; f_8026A44C(c); // 8025C354
  cmps(c,0,(int32_t)c->r[3],2); // 8025C358
  if (crb(c,1)) { goto L_8025C370; } // 8025C35C
  c->r[3]=c->r[1]+0x00000140u; // 8025C360
  c->lr=0x8025C368u; f_8026A44C(c); // 8025C364
  cmps(c,0,(int32_t)c->r[3],0); // 8025C368
  if (!crb(c,0)) { goto L_8025C374; } // 8025C36C
L_8025C370:;
  c->lr=0x8025C374u; f_8026053C(c); // 8025C370
L_8025C374:;
  c->r[3]=c->r[1]+0x00000140u; // 8025C374
  c->lr=0x8025C37Cu; f_8026A44C(c); // 8025C378
  cmps(c,0,(int32_t)c->r[3],0); // 8025C37C
  if (!crb(c,2)) { IRQCHK(c); goto L_8025C350; } // 8025C380
  c->r[3]=0u+0x80000000u; // 8025C384
  c->r[0]=R32(c->r[26]+0x00000038u); // 8025C388
  c->r[3]=R32(c->r[3]+0x000030F4u); // 8025C38C
  c->r[0]=c->r[3]+c->r[0]; // 8025C390
  c->r[6]=sraw(c,c->r[0],2); // 8025C394
  W32(c->r[13]+0xFFFF9840u,c->r[6]); // 8025C398
  goto L_8025C3A8; // 8025C39C
L_8025C3A0:;
  c->r[6]=0u+0x00000910u; // 8025C3A0
  W32(c->r[13]+0xFFFF9840u,c->r[6]); // 8025C3A4
L_8025C3A8:;
  c->r[5]=R32(c->r[31]+0x00000014u); // 8025C3A8
  c->r[3]=c->r[1]+0x00000170u; // 8025C3AC
  c->r[6]=c->r[6]+0x00000008u; // 8025C3B0
  c->r[4]=0u+0x81200000u; // 8025C3B4
  c->r[0]=c->r[5]+0x0000001Fu; // 8025C3B8
  c->r[7]=0u+0x00000000u; // 8025C3BC
  c->r[5]=rotl(c->r[0],0)&0xFFFFFFE0u; // 8025C3C0
  c->r[8]=0u+0x00000000u; // 8025C3C4
  c->lr=0x8025C3CCu; f_8026A290(c); // 8025C3C8
  goto L_8025C3F4; // 8025C3CC
L_8025C3D0:;
  c->r[3]=c->r[1]+0x00000170u; // 8025C3D0
  c->lr=0x8025C3D8u; f_8026A44C(c); // 8025C3D4
  cmps(c,0,(int32_t)c->r[3],2); // 8025C3D8
  if (crb(c,1)) { goto L_8025C3F0; } // 8025C3DC
  c->r[3]=c->r[1]+0x00000170u; // 8025C3E0
  c->lr=0x8025C3E8u; f_8026A44C(c); // 8025C3E4
  cmps(c,0,(int32_t)c->r[3],0); // 8025C3E8
  if (!crb(c,0)) { goto L_8025C3F4; } // 8025C3EC
L_8025C3F0:;
  c->lr=0x8025C3F4u; f_8026053C(c); // 8025C3F0
L_8025C3F4:;
  c->r[3]=c->r[1]+0x00000170u; // 8025C3F4
  c->lr=0x8025C3FCu; f_8026A44C(c); // 8025C3F8
  cmps(c,0,(int32_t)c->r[3],0); // 8025C3FC
  if (!crb(c,2)) { IRQCHK(c); goto L_8025C3D0; } // 8025C400
  c->r[4]=R32(c->r[31]+0x00000014u); // 8025C404
  c->r[3]=0u+0x81200000u; // 8025C408
  c->r[0]=c->r[4]+0x0000001Fu; // 8025C40C
  c->r[4]=rotl(c->r[0],0)&0xFFFFFFE0u; // 8025C410
  c->lr=0x8025C418u; f_8025A4E4(c); // 8025C414
  c->r[4]=0u+0x80410000u; // 8025C418
  c->r[3]=c->r[31]|c->r[31]; // 8025C41C
  c->r[4]=c->r[4]+0x00002DC4u; // 8025C420
  c->r[5]=0u+0x0000000Au; // 8025C424
  c->lr=0x8025C42Cu; f_80293670(c); // 8025C428
  c->r[0]=0u-c->r[3]; // 8025C42C
  c->r[0]=c->r[0]&~c->r[3]; // 8025C430
  c->r[0]=rotl(c->r[0],1)&0x00000001u; cr0(c,c->r[0]); // 8025C434
  if (crb(c,2)) { goto L_8025C630; } // 8025C438
  c->r[0]=c->r[27]+0x00010000u; // 8025C43C
  cmpu(c,0,c->r[0],0x0000FFFFu); // 8025C440
  if (!crb(c,2)) { goto L_8025C504; } // 8025C444
  c->r[6]=R32(c->r[13]+0xFFFF9840u); // 8025C448
  cmps(c,0,(int32_t)c->r[6],0); // 8025C44C
  if (crb(c,2)) { goto L_8025C458; } // 8025C450
  goto L_8025C4F4; // 8025C454
L_8025C458:;
  c->r[27]=0u+0x80000000u; // 8025C458
  c->r[0]=R32(c->r[27]+0x000030F4u); // 8025C45C
  cmps(c,0,(int32_t)c->r[0],0); // 8025C460
  if (crb(c,2)) { goto L_8025C4EC; } // 8025C464
  c->r[3]=0u+0x00000040u; // 8025C468
  c->r[4]=0u+0x00000020u; // 8025C46C
  c->lr=0x8025C474u; f_80259ED8(c); // 8025C470
  c->r[0]=R32(c->r[27]+0x000030F4u); // 8025C474
  c->r[26]=c->r[3]|c->r[3]; // 8025C478
  c->r[3]=c->r[1]+0x000000B0u; // 8025C47C
  c->r[5]=0u+0x00000040u; // 8025C480
  c->r[4]=c->r[26]|c->r[26]; // 8025C484
  c->r[6]=sraw(c,c->r[0],2); // 8025C488
  c->r[7]=0u+0x00000000u; // 8025C48C
  c->r[8]=0u+0x00000000u; // 8025C490
  c->lr=0x8025C498u; f_8026A290(c); // 8025C494
  goto L_8025C4C0; // 8025C498
L_8025C49C:;
  c->r[3]=c->r[1]+0x000000B0u; // 8025C49C
  c->lr=0x8025C4A4u; f_8026A44C(c); // 8025C4A0
  cmps(c,0,(int32_t)c->r[3],2); // 8025C4A4
  if (crb(c,1)) { goto L_8025C4BC; } // 8025C4A8
  c->r[3]=c->r[1]+0x000000B0u; // 8025C4AC
  c->lr=0x8025C4B4u; f_8026A44C(c); // 8025C4B0
  cmps(c,0,(int32_t)c->r[3],0); // 8025C4B4
  if (!crb(c,0)) { goto L_8025C4C0; } // 8025C4B8
L_8025C4BC:;
  c->lr=0x8025C4C0u; f_8026053C(c); // 8025C4BC
L_8025C4C0:;
  c->r[3]=c->r[1]+0x000000B0u; // 8025C4C0
  c->lr=0x8025C4C8u; f_8026A44C(c); // 8025C4C4
  cmps(c,0,(int32_t)c->r[3],0); // 8025C4C8
  if (!crb(c,2)) { IRQCHK(c); goto L_8025C49C; } // 8025C4CC
  c->r[3]=0u+0x80000000u; // 8025C4D0
  c->r[0]=R32(c->r[26]+0x00000038u); // 8025C4D4
  c->r[3]=R32(c->r[3]+0x000030F4u); // 8025C4D8
  c->r[0]=c->r[3]+c->r[0]; // 8025C4DC
  c->r[6]=sraw(c,c->r[0],2); // 8025C4E0
  W32(c->r[13]+0xFFFF9840u,c->r[6]); // 8025C4E4
  goto L_8025C4F4; // 8025C4E8
L_8025C4EC:;
  c->r[6]=0u+0x00000910u; // 8025C4EC
  W32(c->r[13]+0xFFFF9840u,c->r[6]); // 8025C4F0
L_8025C4F4:;
  c->r[3]=R32(c->r[31]+0x00000014u); // 8025C4F4
  c->r[0]=c->r[3]+0x00000020u; // 8025C4F8
  c->r[0]=rotl(c->r[0],30)&0x3FFFFFFFu; // 8025C4FC
  c->r[27]=c->r[0]+c->r[6]; // 8025C500
L_8025C504:;
  W32(c->r[30]+0x00000008u,c->r[27]); // 8025C504
  c->r[3]=c->r[1]+0x00000008u; // 8025C508
  c->r[4]=c->r[1]+0x0000000Cu; // 8025C50C
  c->r[5]=c->r[1]+0x00000010u; // 8025C510
  c->r[12]=R32(c->r[31]+0x00000010u); // 8025C514
  c->ctr=c->r[12]; // 8025C518
  if (true) { c->lr=0x8025C520u; dispatch(c,c->ctr); } // 8025C51C
  c->r[3]=0u+0x0000001Cu; // 8025C520
  c->r[4]=0u+0x00000001u; // 8025C524
  c->lr=0x8025C52Cu; f_80259ED8(c); // 8025C528
  c->r[26]=c->r[3]|c->r[3]; // 8025C52C
  c->r[4]=c->r[30]|c->r[30]; // 8025C530
  c->r[5]=0u+0x0000001Cu; // 8025C534
  c->lr=0x8025C53Cu; f_80235294(c); // 8025C538
  c->r[4]=0u+0x80000000u; // 8025C53C
  c->r[3]=0u+0x801D0000u; // 8025C540
  W32(c->r[4]+0x000030F0u,c->r[26]); // 8025C544
  c->r[3]=c->r[3]+0xFFFFCA38u; // 8025C548
  c->r[12]=R32(c->r[1]+0x00000008u); // 8025C54C
  c->ctr=c->r[12]; // 8025C550
  if (true) { c->lr=0x8025C558u; dispatch(c,c->ctr); } // 8025C554
  c->r[3]=c->r[26]|c->r[26]; // 8025C558
  c->lr=0x8025C560u; f_80259ED0(c); // 8025C55C
  goto L_8025C5C0; // 8025C560
L_8025C564:;
  c->r[6]=R32(c->r[1]+0x0000001Cu); // 8025C564
  c->r[3]=c->r[1]+0x00000080u; // 8025C568
  c->r[0]=R32(c->r[13]+0xFFFF9970u); // 8025C56C
  c->r[7]=0u+0x00000000u; // 8025C570
  c->r[5]=R32(c->r[1]+0x00000018u); // 8025C574
  c->r[8]=0u+0x00000000u; // 8025C578
  c->r[4]=R32(c->r[1]+0x00000014u); // 8025C57C
  c->r[6]=((c->r[0])&0x20)?0u:(c->r[6]>>((c->r[0])&31)); // 8025C580
  c->lr=0x8025C588u; f_8026A290(c); // 8025C584
  goto L_8025C5B0; // 8025C588
L_8025C58C:;
  c->r[3]=c->r[1]+0x00000080u; // 8025C58C
  c->lr=0x8025C594u; f_8026A44C(c); // 8025C590
  cmps(c,0,(int32_t)c->r[3],2); // 8025C594
  if (crb(c,1)) { goto L_8025C5AC; } // 8025C598
  c->r[3]=c->r[1]+0x00000080u; // 8025C59C
  c->lr=0x8025C5A4u; f_8026A44C(c); // 8025C5A0
  cmps(c,0,(int32_t)c->r[3],0); // 8025C5A4
  if (!crb(c,0)) { goto L_8025C5B0; } // 8025C5A8
L_8025C5AC:;
  c->lr=0x8025C5B0u; f_8026053C(c); // 8025C5AC
L_8025C5B0:;
  c->r[3]=c->r[1]+0x00000080u; // 8025C5B0
  c->lr=0x8025C5B8u; f_8026A44C(c); // 8025C5B4
  cmps(c,0,(int32_t)c->r[3],0); // 8025C5B8
  if (!crb(c,2)) { IRQCHK(c); goto L_8025C58C; } // 8025C5BC
L_8025C5C0:;
  c->r[12]=R32(c->r[1]+0x0000000Cu); // 8025C5C0
  c->r[3]=c->r[1]+0x00000014u; // 8025C5C4
  c->r[4]=c->r[1]+0x00000018u; // 8025C5C8
  c->r[5]=c->r[1]+0x0000001Cu; // 8025C5CC
  c->ctr=c->r[12]; // 8025C5D0
  if (true) { c->lr=0x8025C5D8u; dispatch(c,c->ctr); } // 8025C5D4
  cmps(c,0,(int32_t)c->r[3],0); // 8025C5D8
  if (!crb(c,2)) { IRQCHK(c); goto L_8025C564; } // 8025C5DC
  c->r[12]=R32(c->r[1]+0x00000010u); // 8025C5E0
  c->ctr=c->r[12]; // 8025C5E4
  if (true) { c->lr=0x8025C5ECu; dispatch(c,c->ctr); } // 8025C5E8
  c->r[26]=c->r[3]|c->r[3]; // 8025C5EC
  c->r[3]=0u+0x0000001Cu; // 8025C5F0
  c->r[4]=0u+0x00000001u; // 8025C5F4
  c->lr=0x8025C5FCu; f_80259ED8(c); // 8025C5F8
  c->r[27]=c->r[3]|c->r[3]; // 8025C5FC
  c->r[4]=c->r[30]|c->r[30]; // 8025C600
  c->r[5]=0u+0x0000001Cu; // 8025C604
  c->lr=0x8025C60Cu; f_80235294(c); // 8025C608
  c->r[3]=0u+0x80000000u; // 8025C60C
  c->r[0]=0u+0x00000007u; // 8025C610
  W32(c->r[3]+0x000030F0u,c->r[27]); // 8025C614
  c->r[3]=0u+0xCC000000u; // 8025C618
  W32(c->r[3]+0x00003024u,c->r[0]); // 8025C61C
  c->lr=0x8025C624u; f_8025EA10(c); // 8025C620
  c->r[3]=c->r[26]|c->r[26]; // 8025C624
  c->lr=0x8025C62Cu; f_8025B974(c); // 8025C628
  goto L_8025C77C; // 8025C62C
L_8025C630:;
  c->r[3]=0u+0x81300000u; // 8025C630
  c->r[6]=R32(c->r[13]+0xFFFF9840u); // 8025C634
  W32(c->r[3]+0xFFFFDFF0u,c->r[28]); // 8025C638
  c->r[0]=0u+0x00000001u; // 8025C63C
  cmps(c,0,(int32_t)c->r[6],0); // 8025C640
  c->r[27]=0u+0x80000000u; // 8025C644
  W32(c->r[3]+0xFFFFDFECu,c->r[29]); // 8025C648
  W8(c->r[27]+0x000030E2u,c->r[0]); // 8025C64C
  if (crb(c,2)) { goto L_8025C658; } // 8025C650
  goto L_8025C6F0; // 8025C654
L_8025C658:;
  c->r[0]=R32(c->r[27]+0x000030F4u); // 8025C658
  cmps(c,0,(int32_t)c->r[0],0); // 8025C65C
  if (crb(c,2)) { goto L_8025C6E8; } // 8025C660
  c->r[3]=0u+0x00000040u; // 8025C664
  c->r[4]=0u+0x00000020u; // 8025C668
  c->lr=0x8025C670u; f_80259ED8(c); // 8025C66C
  c->r[0]=R32(c->r[27]+0x000030F4u); // 8025C670
  c->r[26]=c->r[3]|c->r[3]; // 8025C674
  c->r[3]=c->r[1]+0x00000050u; // 8025C678
  c->r[5]=0u+0x00000040u; // 8025C67C
  c->r[4]=c->r[26]|c->r[26]; // 8025C680
  c->r[6]=sraw(c,c->r[0],2); // 8025C684
  c->r[7]=0u+0x00000000u; // 8025C688
  c->r[8]=0u+0x00000000u; // 8025C68C
  c->lr=0x8025C694u; f_8026A290(c); // 8025C690
  goto L_8025C6BC; // 8025C694
L_8025C698:;
  c->r[3]=c->r[1]+0x00000050u; // 8025C698
  c->lr=0x8025C6A0u; f_8026A44C(c); // 8025C69C
  cmps(c,0,(int32_t)c->r[3],2); // 8025C6A0
  if (crb(c,1)) { goto L_8025C6B8; } // 8025C6A4
  c->r[3]=c->r[1]+0x00000050u; // 8025C6A8
  c->lr=0x8025C6B0u; f_8026A44C(c); // 8025C6AC
  cmps(c,0,(int32_t)c->r[3],0); // 8025C6B0
  if (!crb(c,0)) { goto L_8025C6BC; } // 8025C6B4
L_8025C6B8:;
  c->lr=0x8025C6BCu; f_8026053C(c); // 8025C6B8
L_8025C6BC:;
  c->r[3]=c->r[1]+0x00000050u; // 8025C6BC
  c->lr=0x8025C6C4u; f_8026A44C(c); // 8025C6C0
  cmps(c,0,(int32_t)c->r[3],0); // 8025C6C4
  if (!crb(c,2)) { IRQCHK(c); goto L_8025C698; } // 8025C6C8
  c->r[3]=0u+0x80000000u; // 8025C6CC
  c->r[0]=R32(c->r[26]+0x00000038u); // 8025C6D0
  c->r[3]=R32(c->r[3]+0x000030F4u); // 8025C6D4
  c->r[0]=c->r[3]+c->r[0]; // 8025C6D8
  c->r[6]=sraw(c,c->r[0],2); // 8025C6DC
  W32(c->r[13]+0xFFFF9840u,c->r[6]); // 8025C6E0
  goto L_8025C6F0; // 8025C6E4
L_8025C6E8:;
  c->r[6]=0u+0x00000910u; // 8025C6E8
  W32(c->r[13]+0xFFFF9840u,c->r[6]); // 8025C6EC
L_8025C6F0:;
  c->r[7]=R32(c->r[31]+0x00000014u); // 8025C6F0
  c->r[3]=c->r[1]+0x00000020u; // 8025C6F4
  c->r[5]=R32(c->r[31]+0x00000018u); // 8025C6F8
  c->r[4]=0u+0x81330000u; // 8025C6FC
  c->r[0]=c->r[7]+0x00000020u; // 8025C700
  c->r[7]=0u+0x00000000u; // 8025C704
  c->r[8]=rotl(c->r[0],30)&0x3FFFFFFFu; // 8025C708
  c->r[0]=c->r[5]+0x0000001Fu; // 8025C70C
  c->r[6]=c->r[8]+c->r[6]; // 8025C710
  c->r[8]=0u+0x00000000u; // 8025C714
  c->r[5]=rotl(c->r[0],0)&0xFFFFFFE0u; // 8025C718
  c->lr=0x8025C720u; f_8026A290(c); // 8025C71C
  goto L_8025C748; // 8025C720
L_8025C724:;
  c->r[3]=c->r[1]+0x00000020u; // 8025C724
  c->lr=0x8025C72Cu; f_8026A44C(c); // 8025C728
  cmps(c,0,(int32_t)c->r[3],2); // 8025C72C
  if (crb(c,1)) { goto L_8025C744; } // 8025C730
  c->r[3]=c->r[1]+0x00000020u; // 8025C734
  c->lr=0x8025C73Cu; f_8026A44C(c); // 8025C738
  cmps(c,0,(int32_t)c->r[3],0); // 8025C73C
  if (!crb(c,0)) { goto L_8025C748; } // 8025C740
L_8025C744:;
  c->lr=0x8025C748u; f_8026053C(c); // 8025C744
L_8025C748:;
  c->r[3]=c->r[1]+0x00000020u; // 8025C748
  c->lr=0x8025C750u; f_8026A44C(c); // 8025C74C
  cmps(c,0,(int32_t)c->r[3],0); // 8025C750
  if (!crb(c,2)) { IRQCHK(c); goto L_8025C724; } // 8025C754
  c->r[4]=R32(c->r[31]+0x00000018u); // 8025C758
  c->r[3]=0u+0x81330000u; // 8025C75C
  c->r[0]=c->r[4]+0x0000001Fu; // 8025C760
  c->r[4]=rotl(c->r[0],0)&0xFFFFFFE0u; // 8025C764
  c->lr=0x8025C76Cu; f_8025A4E4(c); // 8025C768
  c->lr=0x8025C770u; f_8025EA10(c); // 8025C76C
  c->lr=0x8025C774u; f_8025A518(c); // 8025C770
  c->r[3]=0u+0x81330000u; // 8025C774
  c->lr=0x8025C77Cu; f_8025B974(c); // 8025C778
L_8025C77C:;
  c->r[11]=c->r[1]+0x000001C0u; // 8025C77C
  c->lr=0x8025C784u; { c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 8025C780
  c->r[0]=R32(c->r[1]+0x000001C4u); // 8025C784
  c->lr=c->r[0]; // 8025C788
  c->r[1]=c->r[1]+0x000001C0u; // 8025C78C
  return; // 8025C790
}

// __OSBootDol
void f_8025C794(Ctx* __restrict c) {
  trace_call(0x8025C794u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8025C794
  c->r[0]=c->lr; // 8025C798
  W32(c->r[1]+0x00000044u,c->r[0]); // 8025C79C
  W32(c->r[1]+0x0000003Cu,c->r[31]); // 8025C7A0
  c->r[31]=c->r[3]|c->r[3]; // 8025C7A4
  c->r[3]=c->r[1]+0x0000000Cu; // 8025C7A8
  W32(c->r[1]+0x00000038u,c->r[30]); // 8025C7AC
  c->r[30]=c->r[5]|c->r[5]; // 8025C7B0
  W32(c->r[1]+0x00000034u,c->r[29]); // 8025C7B4
  c->r[29]=c->r[4]|c->r[4]; // 8025C7B8
  c->r[4]=c->r[1]+0x00000008u; // 8025C7BC
  c->lr=0x8025C7C4u; f_8025FF3C(c); // 8025C7C0
  c->r[5]=c->r[31]|c->r[31]; // 8025C7C4
  c->r[3]=c->r[1]+0x00000010u; // 8025C7C8
  c->r[4]=c->r[13]+0xFFFF8DE0u; // 8025C7CC
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8025C7D0
  c->lr=0x8025C7D8u; f_80291CC4(c); // 8025C7D4
  cmps(c,0,(int32_t)c->r[30],0); // 8025C7D8
  c->r[31]=0u+0x00000000u; // 8025C7DC
  if (crb(c,2)) { goto L_8025C800; } // 8025C7E0
  c->r[3]=c->r[30]|c->r[30]; // 8025C7E4
  goto L_8025C7F4; // 8025C7E8
L_8025C7EC:;
  c->r[3]=c->r[3]+0x00000004u; // 8025C7EC
  c->r[31]=c->r[31]+0x00000001u; // 8025C7F0
L_8025C7F4:;
  c->r[0]=R32(c->r[3]+0x00000000u); // 8025C7F4
  cmps(c,0,(int32_t)c->r[0],0); // 8025C7F8
  if (!crb(c,2)) { IRQCHK(c); goto L_8025C7EC; } // 8025C7FC
L_8025C800:;
  c->r[0]=c->r[31]+0x00000002u; // 8025C800
  c->r[4]=0u+0x00000001u; // 8025C804
  c->r[3]=rotl(c->r[0],2)&0xFFFFFFFCu; // 8025C808
  c->lr=0x8025C810u; f_80259ED8(c); // 8025C80C
  c->r[6]=c->r[31]+0x00000001u; // 8025C810
  c->r[0]=c->r[1]+0x00000010u; // 8025C814
  cmps(c,1,(int32_t)c->r[6],1); // 8025C818
  W32(c->r[3]+0x00000000u,c->r[0]); // 8025C81C
  c->r[4]=0u+0x00000001u; // 8025C820
  if (!crb(c,5)) { goto L_8025C938; } // 8025C824
  cmps(c,0,(int32_t)c->r[31],8); // 8025C828
  c->r[7]=c->r[31]+0xFFFFFFF9u; // 8025C82C
  if (!crb(c,1)) { goto L_8025C904; } // 8025C830
  c->r[8]=0u+0x00000000u; // 8025C834
  c->r[9]=0u+0x00000000u; // 8025C838
  if (crb(c,4)) { goto L_8025C854; } // 8025C83C
  c->r[5]=0u+0x80000000u; // 8025C840
  c->r[0]=c->r[5]+0xFFFFFFFEu; // 8025C844
  cmps(c,0,(int32_t)c->r[6],(int32_t)c->r[0]); // 8025C848
  if (crb(c,1)) { goto L_8025C854; } // 8025C84C
  c->r[9]=0u+0x00000001u; // 8025C850
L_8025C854:;
  cmps(c,0,(int32_t)c->r[9],0); // 8025C854
  if (crb(c,2)) { goto L_8025C890; } // 8025C858
  c->r[0]=c->r[31]+0x00000001u; // 8025C85C
  c->r[5]=0u+0x00000001u; // 8025C860
  c->r[6]=rotl(c->r[0],0)&0x80000000u; // 8025C864
  c->r[0]=c->r[6]+0x80000000u; // 8025C868
  cmpu(c,0,c->r[0],0x00000000u); // 8025C86C
  if (!crb(c,2)) { goto L_8025C884; } // 8025C870
  c->r[0]=rotl(c->r[31],0)&0x80000000u; // 8025C874
  cmps(c,0,(int32_t)c->r[6],(int32_t)c->r[0]); // 8025C878
  if (crb(c,2)) { goto L_8025C884; } // 8025C87C
  c->r[5]=0u+0x00000000u; // 8025C880
L_8025C884:;
  cmps(c,0,(int32_t)c->r[5],0); // 8025C884
  if (crb(c,2)) { goto L_8025C890; } // 8025C888
  c->r[8]=0u+0x00000001u; // 8025C88C
L_8025C890:;
  cmps(c,0,(int32_t)c->r[8],0); // 8025C890
  if (crb(c,2)) { goto L_8025C904; } // 8025C894
  c->r[0]=c->r[7]+0x00000006u; // 8025C898
  c->r[5]=c->r[30]+0x00000004u; // 8025C89C
  c->r[0]=rotl(c->r[0],29)&0x1FFFFFFFu; // 8025C8A0
  c->r[6]=c->r[3]+0x00000004u; // 8025C8A4
  c->ctr=c->r[0]; // 8025C8A8
  cmps(c,0,(int32_t)c->r[7],1); // 8025C8AC
  if (!crb(c,1)) { goto L_8025C904; } // 8025C8B0
L_8025C8B4:;
  c->r[0]=R32(c->r[5]+0xFFFFFFFCu); // 8025C8B4
  c->r[4]=c->r[4]+0x00000008u; // 8025C8B8
  W32(c->r[6]+0x00000000u,c->r[0]); // 8025C8BC
  c->r[0]=R32(c->r[5]+0x00000000u); // 8025C8C0
  W32(c->r[6]+0x00000004u,c->r[0]); // 8025C8C4
  c->r[0]=R32(c->r[5]+0x00000004u); // 8025C8C8
  W32(c->r[6]+0x00000008u,c->r[0]); // 8025C8CC
  c->r[0]=R32(c->r[5]+0x00000008u); // 8025C8D0
  W32(c->r[6]+0x0000000Cu,c->r[0]); // 8025C8D4
  c->r[0]=R32(c->r[5]+0x0000000Cu); // 8025C8D8
  W32(c->r[6]+0x00000010u,c->r[0]); // 8025C8DC
  c->r[0]=R32(c->r[5]+0x00000010u); // 8025C8E0
  W32(c->r[6]+0x00000014u,c->r[0]); // 8025C8E4
  c->r[0]=R32(c->r[5]+0x00000014u); // 8025C8E8
  W32(c->r[6]+0x00000018u,c->r[0]); // 8025C8EC
  c->r[0]=R32(c->r[5]+0x00000018u); // 8025C8F0
  c->r[5]=c->r[5]+0x00000020u; // 8025C8F4
  W32(c->r[6]+0x0000001Cu,c->r[0]); // 8025C8F8
  c->r[6]=c->r[6]+0x00000020u; // 8025C8FC
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_8025C8B4; } // 8025C900
L_8025C904:;
  c->r[5]=c->r[31]+0x00000001u; // 8025C904
  c->r[7]=rotl(c->r[4],2)&0xFFFFFFFCu; // 8025C908
  c->r[0]=c->r[5]-c->r[4]; // 8025C90C
  c->r[6]=c->r[30]+c->r[7]; // 8025C910
  c->r[7]=c->r[3]+c->r[7]; // 8025C914
  c->ctr=c->r[0]; // 8025C918
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[5]); // 8025C91C
  if (!crb(c,0)) { goto L_8025C938; } // 8025C920
L_8025C924:;
  c->r[0]=R32(c->r[6]+0xFFFFFFFCu); // 8025C924
  c->r[6]=c->r[6]+0x00000004u; // 8025C928
  W32(c->r[7]+0x00000000u,c->r[0]); // 8025C92C
  c->r[7]=c->r[7]+0x00000004u; // 8025C930
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_8025C924; } // 8025C934
L_8025C938:;
  c->r[5]=R32(c->r[1]+0x0000000Cu); // 8025C938
  c->r[9]=c->r[3]|c->r[3]; // 8025C93C
  c->r[6]=R32(c->r[1]+0x00000008u); // 8025C940
  c->r[4]=c->r[29]|c->r[29]; // 8025C944
  c->r[8]=c->r[31]+0x00000001u; // 8025C948
  c->r[3]=0u+0xFFFFFFFFu; // 8025C94C
  c->r[7]=0u+0x00000000u; // 8025C950
  c->lr=0x8025C958u; f_8025C128(c); // 8025C954
  c->r[0]=R32(c->r[1]+0x00000044u); // 8025C958
  c->r[31]=R32(c->r[1]+0x0000003Cu); // 8025C95C
  c->r[30]=R32(c->r[1]+0x00000038u); // 8025C960
  c->r[29]=R32(c->r[1]+0x00000034u); // 8025C964
  c->lr=c->r[0]; // 8025C968
  c->r[1]=c->r[1]+0x00000040u; // 8025C96C
  return; // 8025C970
}

// fn_8025C974
void f_8025C974(Ctx* __restrict c) {
  trace_call(0x8025C974u);
  c->r[11]=rotl(c->r[1],0)&0x0000001Fu; // 8025C974
  c->r[12]=c->r[1]|c->r[1]; // 8025C978
  c->r[11]=addc(c,~c->r[11],0xFFFFFEA0u,1); // 8025C97C
  {uint32_t ea=c->r[1]+c->r[11]; W32(ea,c->r[1]); c->r[1]=ea;} // 8025C980
  c->r[0]=c->lr; // 8025C984
  W32(c->r[12]+0x00000004u,c->r[0]); // 8025C988
  c->r[10]=c->r[1]+0x00000020u; // 8025C98C
  c->r[11]=c->r[1]+0x00000040u; // 8025C990
  W32(c->r[12]+0xFFFFFFFCu,c->r[31]); // 8025C994
  c->r[31]=c->r[8]|c->r[8]; // 8025C998
  c->r[12]=c->r[1]+0x00000060u; // 8025C99C
  c->r[0]=R32(c->r[3]+0x00000000u); // 8025C9A0
  cmps(c,0,(int32_t)c->r[0],0); // 8025C9A4
  if (crb(c,0)) { goto L_8025C9B8; } // 8025C9A8
  c->r[4]=0u+0x00000000u; // 8025C9AC
  cmpu(c,0,c->r[8],c->r[4]); // 8025C9B0
  if (!crb(c,2)) { goto L_8025C9C0; } // 8025C9B4
L_8025C9B8:;
  c->r[3]=0u+0xFFFFFC07u; // 8025C9B8
  goto L_8025CA7C; // 8025C9BC
L_8025C9C0:;
  c->r[0]=rotl(c->r[7],0)&0x0000001Fu; cr0(c,c->r[0]); // 8025C9C0
  if (crb(c,2)) { goto L_8025C9D0; } // 8025C9C4
  c->r[3]=0u+0xFFFFFC07u; // 8025C9C8
  goto L_8025CA7C; // 8025C9CC
L_8025C9D0:;
  cmpu(c,0,c->r[7],c->r[4]); // 8025C9D0
  W32(c->r[1]+0x00000044u,c->r[6]); // 8025C9D4
  W32(c->r[1]+0x00000040u,c->r[5]); // 8025C9D8
  if (!crb(c,2)) { goto L_8025CA24; } // 8025C9DC
  c->r[6]=0u+0x00000008u; // 8025C9E0
  c->r[0]=0u+0x00000004u; // 8025C9E4
  W32(c->r[1]+0x00000024u,c->r[6]); // 8025C9E8
  c->r[7]=c->r[10]|c->r[10]; // 8025C9EC
  c->r[4]=0u+0x00000012u; // 8025C9F0
  c->r[5]=0u+0x00000001u; // 8025C9F4
  W32(c->r[1]+0x00000020u,c->r[11]); // 8025C9F8
  c->r[6]=0u+0x00000001u; // 8025C9FC
  W32(c->r[1]+0x00000028u,c->r[12]); // 8025CA00
  W32(c->r[1]+0x0000002Cu,c->r[0]); // 8025CA04
  c->r[3]=R32(c->r[3]+0x00000000u); // 8025CA08
  c->lr=0x8025CA10u; f_802AA048(c); // 8025CA0C
  cmps(c,0,(int32_t)c->r[3],0); // 8025CA10
  if (!crb(c,2)) { goto L_8025CA7C; } // 8025CA14
  c->r[0]=R32(c->r[1]+0x00000060u); // 8025CA18
  W32(c->r[31]+0x00000000u,c->r[0]); // 8025CA1C
  goto L_8025CA7C; // 8025CA20
L_8025CA24:;
  c->r[6]=R32(c->r[8]+0x00000000u); // 8025CA24
  cmps(c,0,(int32_t)c->r[6],0); // 8025CA28
  if (!crb(c,2)) { goto L_8025CA38; } // 8025CA2C
  c->r[3]=0u+0xFFFFFC07u; // 8025CA30
  goto L_8025CA7C; // 8025CA34
L_8025CA38:;
  c->r[9]=0u+0x00000008u; // 8025CA38
  c->r[0]=0u+0x00000004u; // 8025CA3C
  W32(c->r[1]+0x00000030u,c->r[7]); // 8025CA40
  c->r[7]=c->r[10]|c->r[10]; // 8025CA44
  c->r[4]=0u+0x00000013u; // 8025CA48
  c->r[5]=0u+0x00000002u; // 8025CA4C
  W32(c->r[1]+0x00000060u,c->r[6]); // 8025CA50
  c->r[6]=0u+0x00000001u; // 8025CA54
  W32(c->r[1]+0x00000020u,c->r[11]); // 8025CA58
  W32(c->r[1]+0x00000024u,c->r[9]); // 8025CA5C
  W32(c->r[1]+0x00000028u,c->r[12]); // 8025CA60
  W32(c->r[1]+0x0000002Cu,c->r[0]); // 8025CA64
  c->r[0]=R32(c->r[8]+0x00000000u); // 8025CA68
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)216); // 8025CA6C
  W32(c->r[1]+0x00000034u,c->r[0]); // 8025CA70
  c->r[3]=R32(c->r[3]+0x00000000u); // 8025CA74
  c->lr=0x8025CA7Cu; f_802AA048(c); // 8025CA78
L_8025CA7C:;
  c->r[10]=R32(c->r[1]+0x00000000u); // 8025CA7C
  c->r[0]=R32(c->r[10]+0x00000004u); // 8025CA80
  c->r[31]=R32(c->r[10]+0xFFFFFFFCu); // 8025CA84
  c->lr=c->r[0]; // 8025CA88
  c->r[1]=c->r[10]|c->r[10]; // 8025CA8C
  return; // 8025CA90
}

// fn_8025CA94
void f_8025CA94(Ctx* __restrict c) {
  trace_call(0x8025CA94u);
  c->r[11]=rotl(c->r[1],0)&0x0000001Fu; // 8025CA94
  c->r[12]=c->r[1]|c->r[1]; // 8025CA98
  c->r[11]=addc(c,~c->r[11],0xFFFFFEC0u,1); // 8025CA9C
  {uint32_t ea=c->r[1]+c->r[11]; W32(ea,c->r[1]); c->r[1]=ea;} // 8025CAA0
  c->r[0]=c->lr; // 8025CAA4
  W32(c->r[12]+0x00000004u,c->r[0]); // 8025CAA8
  c->r[9]=c->r[1]+0x00000020u; // 8025CAAC
  c->r[10]=c->r[1]+0x00000040u; // 8025CAB0
  c->r[0]=R32(c->r[3]+0x00000000u); // 8025CAB4
  cmps(c,0,(int32_t)c->r[0],0); // 8025CAB8
  if (!crb(c,0)) { goto L_8025CAC8; } // 8025CABC
  c->r[3]=0u+0xFFFFFC07u; // 8025CAC0
  goto L_8025CB10; // 8025CAC4
L_8025CAC8:;
  c->r[0]=rotl(c->r[7],0)&0x0000001Fu; cr0(c,c->r[0]); // 8025CAC8
  if (crb(c,2)) { goto L_8025CAD8; } // 8025CACC
  c->r[3]=0u+0xFFFFFC07u; // 8025CAD0
  goto L_8025CB10; // 8025CAD4
L_8025CAD8:;
  c->r[8]=0u+0x00000008u; // 8025CAD8
  c->r[0]=0u+0x000000D8u; // 8025CADC
  W32(c->r[1]+0x00000044u,c->r[6]); // 8025CAE0
  c->r[4]=0u+0x00000008u; // 8025CAE4
  c->r[6]=0u+0x00000000u; // 8025CAE8
  W32(c->r[1]+0x00000040u,c->r[5]); // 8025CAEC
  c->r[5]=0u+0x00000002u; // 8025CAF0
  W32(c->r[1]+0x00000028u,c->r[7]); // 8025CAF4
  c->r[7]=c->r[9]|c->r[9]; // 8025CAF8
  W32(c->r[1]+0x00000020u,c->r[10]); // 8025CAFC
  W32(c->r[1]+0x00000024u,c->r[8]); // 8025CB00
  W32(c->r[1]+0x0000002Cu,c->r[0]); // 8025CB04
  c->r[3]=R32(c->r[3]+0x00000000u); // 8025CB08
  c->lr=0x8025CB10u; f_802AA124(c); // 8025CB0C
L_8025CB10:;
  c->r[10]=R32(c->r[1]+0x00000000u); // 8025CB10
  c->r[0]=R32(c->r[10]+0x00000004u); // 8025CB14
  c->lr=c->r[0]; // 8025CB18
  c->r[1]=c->r[10]|c->r[10]; // 8025CB1C
  return; // 8025CB20
}

// ScreenReport
void f_8025CB24(Ctx* __restrict c) {
  trace_call(0x8025CB24u);
  {uint32_t ea=c->r[1]+0xFFFFFE90u; W32(ea,c->r[1]); c->r[1]=ea;} // 8025CB24
  c->r[0]=c->lr; // 8025CB28
  W32(c->r[1]+0x00000174u,c->r[0]); // 8025CB2C
  c->r[11]=c->r[1]+0x00000170u; // 8025CB30
  c->lr=0x8025CB38u; { W32(c->r[11]+0xFFFFFFC4u,c->r[17]); W32(c->r[11]+0xFFFFFFC8u,c->r[18]); W32(c->r[11]+0xFFFFFFCCu,c->r[19]); W32(c->r[11]+0xFFFFFFD0u,c->r[20]); W32(c->r[11]+0xFFFFFFD4u,c->r[21]); W32(c->r[11]+0xFFFFFFD8u,c->r[22]); W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 8025CB34
  c->r[22]=c->r[3]|c->r[3]; // 8025CB38
  c->r[23]=c->r[4]|c->r[4]; // 8025CB3C
  c->r[24]=c->r[6]|c->r[6]; // 8025CB40
  c->r[25]=c->r[7]|c->r[7]; // 8025CB44
  c->r[26]=c->r[8]|c->r[8]; // 8025CB48
  c->r[27]=c->r[9]|c->r[9]; // 8025CB4C
  c->r[31]=c->r[5]+0xFFFFFFE8u; // 8025CB50
  c->r[30]=c->r[4]+0xFFFFFFD0u; // 8025CB54
  c->r[18]=0u+0x80810000u; // 8025CB58
  c->r[19]=0u+0x88890000u; // 8025CB5C
  c->r[17]=0u+0x00000000u; // 8025CB60
  c->r[21]=0u+0x00000018u; // 8025CB64
  c->r[20]=0u+0x00000003u; // 8025CB68
L_8025CB6C:;
  cmps(c,0,(int32_t)c->r[31],(int32_t)c->r[26]); // 8025CB6C
  if (crb(c,0)) { goto L_8025CE30; } // 8025CB70
  c->r[0]=(uint32_t)((int32_t)c->r[26]*(int32_t)c->r[23]); // 8025CB74
  c->r[28]=c->r[25]|c->r[25]; // 8025CB78
  c->r[0]=c->r[25]+c->r[0]; // 8025CB7C
  c->r[0]=rotl(c->r[0],1)&0xFFFFFFFEu; // 8025CB80
  c->r[29]=c->r[22]+c->r[0]; // 8025CB84
  goto L_8025CE24; // 8025CB88
L_8025CB8C:;
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[3]; // 8025CB8C
  cmps(c,0,(int32_t)c->r[0],10); // 8025CB90
  if (!crb(c,2)) { goto L_8025CBA4; } // 8025CB94
  c->r[26]=c->r[26]+c->r[27]; // 8025CB98
  c->r[10]=c->r[10]+0x00000001u; // 8025CB9C
  IRQCHK(c); goto L_8025CB6C; // 8025CBA0
L_8025CBA4:;
  cmps(c,0,(int32_t)c->r[30],(int32_t)c->r[28]); // 8025CBA4
  if (!crb(c,0)) { goto L_8025CBB4; } // 8025CBA8
  c->r[26]=c->r[26]+c->r[27]; // 8025CBAC
  IRQCHK(c); goto L_8025CB6C; // 8025CBB0
L_8025CBB4:;
  c->r[6]=0u+0x00000000u; // 8025CBB4
  c->r[7]=0u+0x00000000u; // 8025CBB8
  c->ctr=c->r[20]; // 8025CBBC
L_8025CBC0:;
  c->r[0]=rotl(c->r[6],0)&0x00000007u; // 8025CBC0
  c->r[3]=c->r[6]+0x00000001u; // 8025CBC4
  c->r[0]=c->r[0]+c->r[7]; // 8025CBC8
  c->r[4]=c->r[1]+0x00000010u; // 8025CBCC
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 8025CBD0
  c->r[5]=c->r[6]+0x00000002u; // 8025CBD4
  c->r[4]=c->r[4]+c->r[0]; // 8025CBD8
  c->r[8]=c->r[6]+0x00000003u; // 8025CBDC
  c->r[0]=rotl(c->r[3],29)&0x1FFFFFFFu; // 8025CBE0
  W32(c->r[4]+0x00000000u,c->r[17]); // 8025CBE4
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)24); // 8025CBE8
  c->r[3]=rotl(c->r[3],0)&0x00000007u; // 8025CBEC
  W32(c->r[4]+0x00000020u,c->r[17]); // 8025CBF0
  c->r[9]=c->r[6]+0x00000004u; // 8025CBF4
  c->r[11]=c->r[6]+0x00000006u; // 8025CBF8
  c->r[0]=c->r[3]+c->r[0]; // 8025CBFC
  W32(c->r[4]+0x00000040u,c->r[17]); // 8025CC00
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 8025CC04
  c->r[4]=rotl(c->r[5],29)&0x1FFFFFFFu; // 8025CC08
  c->r[3]=c->r[1]+0x00000010u; // 8025CC0C
  c->r[3]=c->r[3]+c->r[0]; // 8025CC10
  c->r[5]=rotl(c->r[5],0)&0x00000007u; // 8025CC14
  W32(c->r[3]+0x00000000u,c->r[17]); // 8025CC18
  c->r[4]=(uint32_t)((int32_t)c->r[4]*(int32_t)24); // 8025CC1C
  c->r[0]=c->r[6]+0x00000005u; // 8025CC20
  W32(c->r[3]+0x00000020u,c->r[17]); // 8025CC24
  c->r[7]=c->r[7]+0x00000018u; // 8025CC28
  c->r[5]=c->r[5]+c->r[4]; // 8025CC2C
  c->r[12]=rotl(c->r[5],2)&0xFFFFFFFCu; // 8025CC30
  W32(c->r[3]+0x00000040u,c->r[17]); // 8025CC34
  c->r[5]=rotl(c->r[8],29)&0x1FFFFFFFu; // 8025CC38
  c->r[4]=c->r[1]+0x00000010u; // 8025CC3C
  {uint32_t ea=c->r[4]+c->r[12]; W32(ea,c->r[17]); c->r[4]=ea;} // 8025CC40
  c->r[3]=(uint32_t)((int32_t)c->r[5]*(int32_t)24); // 8025CC44
  c->r[12]=rotl(c->r[8],0)&0x00000007u; // 8025CC48
  W32(c->r[4]+0x00000020u,c->r[17]); // 8025CC4C
  c->r[8]=rotl(c->r[9],29)&0x1FFFFFFFu; // 8025CC50
  c->r[12]=c->r[12]+c->r[3]; // 8025CC54
  c->r[5]=c->r[6]+0x00000007u; // 8025CC58
  W32(c->r[4]+0x00000040u,c->r[17]); // 8025CC5C
  c->r[3]=c->r[1]+0x00000010u; // 8025CC60
  c->r[12]=rotl(c->r[12],2)&0xFFFFFFFCu; // 8025CC64
  c->r[9]=rotl(c->r[9],0)&0x00000007u; // 8025CC68
  c->r[3]=c->r[3]+c->r[12]; // 8025CC6C
  c->r[4]=c->r[1]+0x00000010u; // 8025CC70
  W32(c->r[3]+0x00000000u,c->r[17]); // 8025CC74
  c->r[8]=(uint32_t)((int32_t)c->r[8]*(int32_t)24); // 8025CC78
  c->r[12]=rotl(c->r[0],29)&0x1FFFFFFFu; // 8025CC7C
  W32(c->r[3]+0x00000020u,c->r[17]); // 8025CC80
  c->r[0]=rotl(c->r[0],0)&0x00000007u; // 8025CC84
  c->r[8]=c->r[9]+c->r[8]; // 8025CC88
  c->r[9]=rotl(c->r[11],29)&0x1FFFFFFFu; // 8025CC8C
  c->r[8]=rotl(c->r[8],2)&0xFFFFFFFCu; // 8025CC90
  W32(c->r[3]+0x00000040u,c->r[17]); // 8025CC94
  c->r[4]=c->r[4]+c->r[8]; // 8025CC98
  c->r[3]=c->r[1]+0x00000010u; // 8025CC9C
  W32(c->r[4]+0x00000000u,c->r[17]); // 8025CCA0
  c->r[12]=(uint32_t)((int32_t)c->r[12]*(int32_t)24); // 8025CCA4
  c->r[11]=rotl(c->r[11],0)&0x00000007u; // 8025CCA8
  W32(c->r[4]+0x00000020u,c->r[17]); // 8025CCAC
  c->r[8]=rotl(c->r[5],29)&0x1FFFFFFFu; // 8025CCB0
  c->r[0]=c->r[0]+c->r[12]; // 8025CCB4
  c->r[6]=c->r[6]+0x00000008u; // 8025CCB8
  W32(c->r[4]+0x00000040u,c->r[17]); // 8025CCBC
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 8025CCC0
  c->r[4]=c->r[1]+0x00000010u; // 8025CCC4
  {uint32_t ea=c->r[3]+c->r[0]; W32(ea,c->r[17]); c->r[3]=ea;} // 8025CCC8
  c->r[0]=(uint32_t)((int32_t)c->r[9]*(int32_t)24); // 8025CCCC
  c->r[9]=rotl(c->r[5],0)&0x00000007u; // 8025CCD0
  W32(c->r[3]+0x00000020u,c->r[17]); // 8025CCD4
  c->r[5]=c->r[4]|c->r[4]; // 8025CCD8
  c->r[0]=c->r[11]+c->r[0]; // 8025CCDC
  W32(c->r[3]+0x00000040u,c->r[17]); // 8025CCE0
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 8025CCE4
  {uint32_t ea=c->r[4]+c->r[0]; W32(ea,c->r[17]); c->r[4]=ea;} // 8025CCE8
  c->r[0]=(uint32_t)((int32_t)c->r[8]*(int32_t)24); // 8025CCEC
  W32(c->r[4]+0x00000020u,c->r[17]); // 8025CCF0
  c->r[0]=c->r[9]+c->r[0]; // 8025CCF4
  W32(c->r[4]+0x00000040u,c->r[17]); // 8025CCF8
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 8025CCFC
  {uint32_t ea=c->r[5]+c->r[0]; W32(ea,c->r[17]); c->r[5]=ea;} // 8025CD00
  W32(c->r[5]+0x00000020u,c->r[17]); // 8025CD04
  W32(c->r[5]+0x00000040u,c->r[17]); // 8025CD08
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_8025CBC0; } // 8025CD0C
  c->r[3]=c->r[10]|c->r[10]; // 8025CD10
  c->r[4]=c->r[1]+0x00000010u; // 8025CD14
  c->r[7]=c->r[1]+0x00000008u; // 8025CD18
  c->r[5]=0u+0x00000000u; // 8025CD1C
  c->r[6]=0u+0x00000006u; // 8025CD20
  c->lr=0x8025CD28u; f_8025E1D4(c); // 8025CD24
  c->r[10]=c->r[3]|c->r[3]; // 8025CD28
  c->r[7]=0u+0x00000000u; // 8025CD2C
  c->r[3]=0u+0x00000000u; // 8025CD30
L_8025CD34:;
  c->r[0]=rotl(c->r[7],29)&0x1FFFFFFFu; // 8025CD34
  c->r[6]=rotl(c->r[7],0)&0x00000007u; // 8025CD38
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)24); // 8025CD3C
  c->r[5]=c->r[1]+0x00000010u; // 8025CD40
  c->r[4]=c->r[28]|c->r[28]; // 8025CD44
  c->r[8]=0u+0x00000000u; // 8025CD48
  c->r[0]=c->r[6]+c->r[0]; // 8025CD4C
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 8025CD50
  c->r[5]=c->r[5]+c->r[0]; // 8025CD54
  c->ctr=c->r[21]; // 8025CD58
L_8025CD5C:;
  c->r[6]=rotl(c->r[8],2)&0xFFFFFFE0u; // 8025CD5C
  c->r[0]=rotl(c->r[8],0)&0x00000007u; // 8025CD60
  c->r[0]=addc(c,~c->r[0],0x00000007u,1); // 8025CD64
  c->r[6]=R32(c->r[5]+c->r[6]); // 8025CD68
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 8025CD6C
  c->r[0]=((c->r[0])&0x20)?0u:(c->r[6]>>((c->r[0])&31)); // 8025CD70
  c->r[9]=rotl(c->r[0],0)&0x0000000Fu; cr0(c,c->r[9]); // 8025CD74
  if (crb(c,2)) { goto L_8025CDF8; } // 8025CD78
  c->r[6]=R8(c->r[24]+0x00000000u); // 8025CD7C
  c->r[0]=c->r[8]+c->r[3]; // 8025CD80
  c->r[12]=rotl(c->r[0],1)&0xFFFFFFFEu; // 8025CD84
  c->r[11]=c->r[18]+0xFFFF8081u; // 8025CD88
  c->r[9]=(uint32_t)((int32_t)c->r[6]*(int32_t)c->r[9]); // 8025CD8C
  c->r[0]=rotl(c->r[4],0)&0x00000001u; cr0(c,c->r[0]); // 8025CD90
  c->r[6]=c->r[29]+c->r[12]; // 8025CD94
  c->r[0]=c->r[19]+0xFFFF8889u; // 8025CD98
  c->r[9]=(uint32_t)((int32_t)c->r[9]*(int32_t)239); // 8025CD9C
  c->r[11]=(uint32_t)(((int64_t)(int32_t)c->r[11]*(int64_t)(int32_t)c->r[9])>>32); // 8025CDA0
  c->r[9]=c->r[11]+c->r[9]; // 8025CDA4
  c->r[9]=sraw(c,c->r[9],7); // 8025CDA8
  c->r[11]=rotl(c->r[9],1)&0x00000001u; // 8025CDAC
  c->r[9]=c->r[9]+c->r[11]; // 8025CDB0
  c->r[0]=(uint32_t)(((int64_t)(int32_t)c->r[0]*(int64_t)(int32_t)c->r[9])>>32); // 8025CDB4
  c->r[0]=c->r[0]+c->r[9]; // 8025CDB8
  c->r[0]=sraw(c,c->r[0],3); // 8025CDBC
  c->r[9]=rotl(c->r[0],1)&0x00000001u; // 8025CDC0
  c->r[9]=c->r[0]+c->r[9]; // 8025CDC4
  c->r[0]=c->r[9]+0x00000010u; // 8025CDC8
  W8(c->r[29]+c->r[12],c->r[0]); // 8025CDCC
  if (crb(c,2)) { goto L_8025CDE8; } // 8025CDD0
  c->r[9]=R8(c->r[24]+0x00000001u); // 8025CDD4
  c->r[0]=R8(c->r[24]+0x00000002u); // 8025CDD8
  W8(c->r[6]+0xFFFFFFFFu,c->r[9]); // 8025CDDC
  W8(c->r[6]+0x00000001u,c->r[0]); // 8025CDE0
  goto L_8025CDF8; // 8025CDE4
L_8025CDE8:;
  c->r[9]=R8(c->r[24]+0x00000002u); // 8025CDE8
  c->r[0]=R8(c->r[24]+0x00000001u); // 8025CDEC
  W8(c->r[6]+0xFFFFFFFFu,c->r[9]); // 8025CDF0
  W8(c->r[6]+0x00000001u,c->r[0]); // 8025CDF4
L_8025CDF8:;
  c->r[4]=c->r[4]+0x00000001u; // 8025CDF8
  c->r[8]=c->r[8]+0x00000001u; // 8025CDFC
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_8025CD5C; } // 8025CE00
  c->r[7]=c->r[7]+0x00000001u; // 8025CE04
  c->r[3]=c->r[3]+c->r[23]; // 8025CE08
  cmpu(c,0,c->r[7],0x00000018u); // 8025CE0C
  if (crb(c,0)) { IRQCHK(c); goto L_8025CD34; } // 8025CE10
  c->r[3]=R32(c->r[1]+0x00000008u); // 8025CE14
  c->r[0]=rotl(c->r[3],1)&0xFFFFFFFEu; // 8025CE18
  c->r[28]=c->r[28]+c->r[3]; // 8025CE1C
  c->r[29]=c->r[29]+c->r[0]; // 8025CE20
L_8025CE24:;
  c->r[3]=R8(c->r[10]+0x00000000u); // 8025CE24
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[3]; cr0(c,c->r[0]); // 8025CE28
  if (!crb(c,2)) { IRQCHK(c); goto L_8025CB8C; } // 8025CE2C
L_8025CE30:;
  c->r[11]=c->r[1]+0x00000170u; // 8025CE30
  c->lr=0x8025CE38u; { c->r[17]=R32(c->r[11]+0xFFFFFFC4u); c->r[18]=R32(c->r[11]+0xFFFFFFC8u); c->r[19]=R32(c->r[11]+0xFFFFFFCCu); c->r[20]=R32(c->r[11]+0xFFFFFFD0u); c->r[21]=R32(c->r[11]+0xFFFFFFD4u); c->r[22]=R32(c->r[11]+0xFFFFFFD8u); c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 8025CE34
  c->r[0]=R32(c->r[1]+0x00000174u); // 8025CE38
  c->lr=c->r[0]; // 8025CE3C
  c->r[1]=c->r[1]+0x00000170u; // 8025CE40
  return; // 8025CE44
}

// ConfigureVideo
void f_8025CE48(Ctx* __restrict c) {
  trace_call(0x8025CE48u);
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8025CE48
  c->r[0]=c->lr; // 8025CE4C
  c->r[6]=0u+0x000001E0u; // 8025CE50
  c->r[5]=0u+0x00000028u; // 8025CE54
  W32(c->r[1]+0x00000054u,c->r[0]); // 8025CE58
  c->r[0]=0u+0x00000280u; // 8025CE5C
  W16(c->r[1]+0x0000000Cu,c->r[3]); // 8025CE60
  W16(c->r[1]+0x0000000Eu,c->r[6]); // 8025CE64
  W16(c->r[1]+0x00000010u,c->r[4]); // 8025CE68
  W16(c->r[1]+0x00000012u,c->r[5]); // 8025CE6C
  W16(c->r[1]+0x00000016u,c->r[0]); // 8025CE70
  W16(c->r[1]+0x00000018u,c->r[4]); // 8025CE74
  c->lr=0x8025CE7Cu; f_8026F3A8(c); // 8025CE78
  cmps(c,0,(int32_t)c->r[3],2); // 8025CE7C
  if (crb(c,2)) { goto L_8025CEA4; } // 8025CE80
  if (!crb(c,0)) { goto L_8025CE98; } // 8025CE84
  cmps(c,0,(int32_t)c->r[3],0); // 8025CE88
  if (crb(c,2)) { goto L_8025CEA4; } // 8025CE8C
  if (!crb(c,0)) { goto L_8025CF00; } // 8025CE90
  goto L_8025CF18; // 8025CE94
L_8025CE98:;
  cmps(c,0,(int32_t)c->r[3],5); // 8025CE98
  if (crb(c,2)) { goto L_8025CEE4; } // 8025CE9C
  goto L_8025CF18; // 8025CEA0
L_8025CEA4:;
  c->r[3]=0u+0xCC000000u; // 8025CEA4
  c->r[0]=R16(c->r[3]+0x0000206Cu); // 8025CEA8
  c->r[0]=rotl(c->r[0],0)&0x00000001u; cr0(c,c->r[0]); // 8025CEAC
  if (crb(c,2)) { goto L_8025CECC; } // 8025CEB0
  c->r[0]=0u+0x00000000u; // 8025CEB4
  c->r[3]=0u+0x00000002u; // 8025CEB8
  W32(c->r[1]+0x00000008u,c->r[3]); // 8025CEBC
  W16(c->r[1]+0x00000014u,c->r[0]); // 8025CEC0
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 8025CEC4
  goto L_8025CF18; // 8025CEC8
L_8025CECC:;
  c->r[3]=0u+0x00000000u; // 8025CECC
  c->r[0]=0u+0x00000001u; // 8025CED0
  W32(c->r[1]+0x00000008u,c->r[3]); // 8025CED4
  W16(c->r[1]+0x00000014u,c->r[3]); // 8025CED8
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 8025CEDC
  goto L_8025CF18; // 8025CEE0
L_8025CEE4:;
  c->r[4]=0u+0x00000014u; // 8025CEE4
  c->r[3]=0u+0x00000000u; // 8025CEE8
  c->r[0]=0u+0x00000001u; // 8025CEEC
  W32(c->r[1]+0x00000008u,c->r[4]); // 8025CEF0
  W16(c->r[1]+0x00000014u,c->r[3]); // 8025CEF4
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 8025CEF8
  goto L_8025CF18; // 8025CEFC
L_8025CF00:;
  c->r[4]=0u+0x00000004u; // 8025CF00
  c->r[3]=0u+0x0000002Fu; // 8025CF04
  c->r[0]=0u+0x00000001u; // 8025CF08
  W32(c->r[1]+0x00000008u,c->r[4]); // 8025CF0C
  W16(c->r[1]+0x00000014u,c->r[3]); // 8025CF10
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 8025CF14
L_8025CF18:;
  c->r[3]=c->r[1]+0x00000008u; // 8025CF18
  c->lr=0x8025CF20u; f_8026E630(c); // 8025CF1C
  c->r[3]=0u+0x00000000u; // 8025CF20
  c->r[4]=0u+0x00000000u; // 8025CF24
  c->r[5]=0u+0x00000280u; // 8025CF28
  c->r[6]=0u+0x000001E0u; // 8025CF2C
  c->lr=0x8025CF34u; f_8026EDC4(c); // 8025CF30
  c->r[0]=R32(c->r[1]+0x00000054u); // 8025CF34
  c->lr=c->r[0]; // 8025CF38
  c->r[1]=c->r[1]+0x00000050u; // 8025CF3C
  return; // 8025CF40
}

// fn_8025CF44
void f_8025CF44(Ctx* __restrict c) {
  trace_call(0x8025CF44u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8025CF44
  c->r[0]=c->lr; // 8025CF48
  W32(c->r[1]+0x00000034u,c->r[0]); // 8025CF4C
  c->r[11]=c->r[1]+0x00000030u; // 8025CF50
  c->lr=0x8025CF58u; { W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 8025CF54
  c->r[27]=c->r[3]|c->r[3]; // 8025CF58
  c->r[28]=c->r[4]|c->r[4]; // 8025CF5C
  c->r[29]=c->r[5]|c->r[5]; // 8025CF60
  c->lr=0x8025CF68u; f_8025EA10(c); // 8025CF64
  c->lr=0x8025CF6Cu; f_802613A4(c); // 8025CF68
  c->r[24]=0u+0x80600000u; // 8025CF6C
  c->r[3]=c->r[24]+0xFFFF85A0u; // 8025CF70
  c->lr=0x8025CF78u; f_8025AE6C(c); // 8025CF74
  c->r[3]=c->r[24]+0xFFFF85A0u; // 8025CF78
  c->lr=0x8025CF80u; f_8025AC44(c); // 8025CF7C
  c->lr=0x8025CF84u; f_8025A2F4(c); // 8025CF80
  c->lr=0x8025CF88u; f_8026DC4C(c); // 8025CF84
  c->r[3]=0u+0x00000080u; // 8025CF88
  c->lr=0x8025CF90u; f_8025EE20(c); // 8025CF8C
  c->r[3]=0u+0x00000001u; // 8025CF90
  c->lr=0x8025CF98u; f_8026F298(c); // 8025CF94
  c->lr=0x8025CF9Cu; f_8026F118(c); // 8025CF98
  c->r[3]=0u+0x00000000u; // 8025CF9C
  c->lr=0x8025CFA4u; f_8026D8AC(c); // 8025CFA0
  c->r[3]=0u+0x00000000u; // 8025CFA4
  c->lr=0x8025CFACu; f_8026D8F0(c); // 8025CFA8
  c->lr=0x8025CFB0u; f_8025EA24(c); // 8025CFAC
  c->lr=0x8025CFB4u; f_8026F310(c); // 8025CFB0
  c->r[24]=c->r[3]|c->r[3]; // 8025CFB4
L_8025CFB8:;
  c->lr=0x8025CFBCu; f_8026F310(c); // 8025CFB8
  c->r[0]=c->r[3]-c->r[24]; // 8025CFBC
  cmps(c,0,(int32_t)c->r[0],1); // 8025CFC0
  if (crb(c,0)) { IRQCHK(c); goto L_8025CFB8; } // 8025CFC4
  c->lr=0x8025CFCCu; f_80262780(c); // 8025CFC8
  c->r[5]=0u+0x10620000u; // 8025CFCC
  c->r[30]=c->r[4]|c->r[4]; // 8025CFD0
  c->r[31]=c->r[3]|c->r[3]; // 8025CFD4
  c->r[25]=0u+0x80000000u; // 8025CFD8
  c->r[24]=c->r[5]+0x00004DD3u; // 8025CFDC
  c->r[26]=0u+0x00000000u; // 8025CFE0
L_8025CFE4:;
  c->r[3]=0u+0x00000000u; // 8025CFE4
  c->r[4]=0u+0x00000000u; // 8025CFE8
  c->lr=0x8025CFF0u; f_8025FFD8(c); // 8025CFEC
  cmps(c,0,(int32_t)c->r[3],0); // 8025CFF0
  if (!crb(c,2)) { goto L_8025D034; } // 8025CFF4
  c->lr=0x8025CFFCu; f_80262780(c); // 8025CFF8
  c->r[0]=R32(c->r[25]+0x000000F8u); // 8025CFFC
  c->r[6]=addc(c,~c->r[30],c->r[4],1); // 8025D000
  c->r[5]=addc(c,~c->r[31],c->r[3],c->xer_ca); // 8025D004
  c->r[4]=c->r[26]^0x80000000u; // 8025D008
  c->r[0]=rotl(c->r[0],30)&0x3FFFFFFFu; // 8025D00C
  c->r[3]=(uint32_t)(((uint64_t)c->r[24]*(uint64_t)c->r[0])>>32); // 8025D010
  c->r[0]=c->r[5]^0x80000000u; // 8025D014
  c->r[3]=rotl(c->r[3],26)&0x03FFFFFFu; // 8025D018
  c->r[3]=(uint32_t)((int32_t)c->r[3]*(int32_t)1000); // 8025D01C
  c->r[3]=addc(c,~c->r[3],c->r[6],1); // 8025D020
  c->r[4]=addc(c,~c->r[4],c->r[0],c->xer_ca); // 8025D024
  c->r[4]=addc(c,~c->r[0],c->r[0],c->xer_ca); // 8025D028
  c->r[4]=0u-c->r[4]; cr0(c,c->r[4]); // 8025D02C
  if (!crb(c,2)) { IRQCHK(c); goto L_8025CFE4; } // 8025D030
L_8025D034:;
  c->lr=0x8025D038u; f_8025EA10(c); // 8025D034
  c->r[3]=0u+0x00000001u; // 8025D038
  c->r[4]=0u+0x00000000u; // 8025D03C
  c->lr=0x8025D044u; f_8025FFD8(c); // 8025D040
  c->r[3]=0u+0x00000000u; // 8025D044
  c->r[4]=0u+0x00000000u; // 8025D048
  c->lr=0x8025D050u; f_8029CE80(c); // 8025D04C
  c->r[3]=0u+0x00000002u; // 8025D050
  c->r[4]=0u+0x00000000u; // 8025D054
  c->lr=0x8025D05Cu; f_8029CE80(c); // 8025D058
  goto L_8025D078; // 8025D05C
L_8025D060:;
  c->r[3]=0u+0x00000000u; // 8025D060
  c->lr=0x8025D068u; f_8029CC04(c); // 8025D064
  c->r[3]=0u+0x00000000u; // 8025D068
  c->lr=0x8025D070u; f_8029D384(c); // 8025D06C
  c->r[3]=0u+0x00000000u; // 8025D070
  c->lr=0x8025D078u; f_8029DAE4(c); // 8025D074
L_8025D078:;
  c->r[3]=0u+0x00000000u; // 8025D078
  c->r[4]=0u+0x00000001u; // 8025D07C
  c->r[5]=0u+0x00000000u; // 8025D080
  c->lr=0x8025D088u; f_8029D9E8(c); // 8025D084
  cmps(c,0,(int32_t)c->r[3],0); // 8025D088
  if (crb(c,2)) { IRQCHK(c); goto L_8025D060; } // 8025D08C
  c->r[3]=0u+0x00000000u; // 8025D090
  c->lr=0x8025D098u; f_8029DAE4(c); // 8025D094
  c->r[3]=0u+0xCD000000u; // 8025D098
L_8025D09C:;
  c->r[0]=R32(c->r[3]+0x0000680Cu); // 8025D09C
  c->r[0]=rotl(c->r[0],0)&0x00000001u; // 8025D0A0
  cmpu(c,0,c->r[0],0x00000001u); // 8025D0A4
  if (crb(c,2)) { IRQCHK(c); goto L_8025D09C; } // 8025D0A8
  c->r[4]=0u+0x80260000u; // 8025D0AC
  c->r[3]=0u+0x00000008u; // 8025D0B0
  c->r[4]=c->r[4]+0xFFFF9254u; // 8025D0B4
  c->lr=0x8025D0BCu; f_80259194(c); // 8025D0B8
  c->lr=0x8025D0C0u; f_802846F8(c); // 8025D0BC
  c->r[3]=0u+0x81400000u; // 8025D0C0
  c->lr=0x8025D0C8u; f_80259ED0(c); // 8025D0C4
  c->r[3]=0u+0x80000000u; // 8025D0C8
  c->r[3]=R32(c->r[3]+0x00000038u); // 8025D0CC
  c->lr=0x8025D0D4u; f_80259EB8(c); // 8025D0D0
  c->r[9]=R8(c->r[27]+0x00000000u); // 8025D0D4
  c->r[10]=0u+0x80600000u; // 8025D0D8
  c->r[8]=R8(c->r[27]+0x00000001u); // 8025D0DC
  {uint32_t ea=c->r[10]+0xFFFF8868u; W8(ea,c->r[9]); c->r[10]=ea;} // 8025D0E0
  c->r[7]=R8(c->r[27]+0x00000002u); // 8025D0E4
  c->r[6]=R8(c->r[27]+0x00000003u); // 8025D0E8
  c->r[5]=R8(c->r[28]+0x00000000u); // 8025D0EC
  c->r[4]=R8(c->r[28]+0x00000001u); // 8025D0F0
  c->r[3]=R8(c->r[28]+0x00000002u); // 8025D0F4
  c->r[0]=R8(c->r[28]+0x00000003u); // 8025D0F8
  W8(c->r[10]+0x00000001u,c->r[8]); // 8025D0FC
  W8(c->r[10]+0x00000002u,c->r[7]); // 8025D100
  W8(c->r[10]+0x00000003u,c->r[6]); // 8025D104
  W8(c->r[10]+0x00000004u,c->r[5]); // 8025D108
  W8(c->r[10]+0x00000005u,c->r[4]); // 8025D10C
  W8(c->r[10]+0x00000006u,c->r[3]); // 8025D110
  W8(c->r[10]+0x00000007u,c->r[0]); // 8025D114
  W32(c->r[10]+0x00000008u,c->r[29]); // 8025D118
  c->lr=0x8025D120u; f_80259E88(c); // 8025D11C
  c->r[5]=0u+0x80260000u; // 8025D120
  c->r[4]=c->r[3]|c->r[3]; // 8025D124
  c->r[3]=c->r[5]+0xFFFFD148u; // 8025D128
  c->lr=0x8025D130u; f_8025AE0C(c); // 8025D12C
  c->r[11]=c->r[1]+0x00000030u; // 8025D130
  c->lr=0x8025D138u; { c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 8025D134
  c->r[0]=R32(c->r[1]+0x00000034u); // 8025D138
  c->lr=c->r[0]; // 8025D13C
  c->r[1]=c->r[1]+0x00000030u; // 8025D140
  return; // 8025D144
}

// Halt
void f_8025D148(Ctx* __restrict c) {
  trace_call(0x8025D148u);
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8025D148
  c->r[0]=c->lr; // 8025D14C
  W32(c->r[1]+0x00000054u,c->r[0]); // 8025D150
  c->r[0]=0u+0x43300000u; // 8025D154
  W32(c->r[1]+0x0000004Cu,c->r[31]); // 8025D158
  W32(c->r[1]+0x00000048u,c->r[30]); // 8025D15C
  W32(c->r[1]+0x00000044u,c->r[29]); // 8025D160
  W32(c->r[1]+0x00000040u,c->r[28]); // 8025D164
  W32(c->r[1]+0x00000020u,c->r[0]); // 8025D168
  W32(c->r[1]+0x00000028u,c->r[0]); // 8025D16C
  c->lr=0x8025D174u; f_8025EA24(c); // 8025D170
  c->r[29]=0u+0x80600000u; // 8025D174
  c->r[29]=c->r[29]+0xFFFF8868u; // 8025D178
  c->r[28]=R32(c->r[29]+0x00000008u); // 8025D17C
  c->r[3]=c->r[28]|c->r[28]; // 8025D180
  c->lr=0x8025D188u; f_802894C0(c); // 8025D184
  c->r[30]=c->r[3]+0x00000001u; // 8025D188
  c->r[4]=0u+0x00000020u; // 8025D18C
  c->r[3]=c->r[30]|c->r[30]; // 8025D190
  c->lr=0x8025D198u; f_80259ED8(c); // 8025D194
  c->r[4]=c->r[28]|c->r[28]; // 8025D198
  c->r[5]=c->r[30]|c->r[30]; // 8025D19C
  c->lr=0x8025D1A4u; f_8028F2E8(c); // 8025D1A0
  W32(c->r[29]+0x00000008u,c->r[3]); // 8025D1A4
  c->r[3]=0u+0x000A0000u; // 8025D1A8
  c->r[3]=c->r[3]+0x00001004u; // 8025D1AC
  c->r[4]=0u+0x00000020u; // 8025D1B0
  c->lr=0x8025D1B8u; f_80259ED8(c); // 8025D1B4
  c->r[31]=c->r[3]|c->r[3]; // 8025D1B8
  c->lr=0x8025D1C0u; f_80259EA0(c); // 8025D1BC
  c->r[4]=c->r[3]|c->r[3]; // 8025D1C0
  c->r[3]=c->r[31]|c->r[31]; // 8025D1C4
  c->lr=0x8025D1CCu; f_8025DDF4(c); // 8025D1C8
  c->r[3]=0u+0x00090000u; // 8025D1CC
  c->r[4]=0u+0x00000020u; // 8025D1D0
  c->r[3]=c->r[3]+0x00006000u; // 8025D1D4
  c->lr=0x8025D1DCu; f_80259ED8(c); // 8025D1D8
  c->r[4]=R8(c->r[29]+0x00000006u); // 8025D1DC
  c->r[30]=c->r[3]|c->r[3]; // 8025D1E0
  c->r[5]=R8(c->r[29]+0x00000004u); // 8025D1E4
  W32(c->r[1]+0x00000024u,c->r[4]); // 8025D1E8
  c->r[3]=R8(c->r[29]+0x00000005u); // 8025D1EC
  W32(c->r[1]+0x0000002Cu,c->r[5]); // 8025D1F0
  {uint32_t ea=c->r[1]+0x00000020u; c->f[4]=RF64(ea);} // 8025D1F4
  {uint32_t ea=c->r[1]+0x00000028u; c->f[2]=RF64(ea);} // 8025D1F8
  {uint32_t ea=c->r[2]+0xFFFFDAB8u; c->f[0]=RF64(ea);} // 8025D1FC
  W32(c->r[1]+0x00000024u,c->r[3]); // 8025D200
  c->f[3]=c->ps1[3]=S(c->f[2]-c->f[0]); // 8025D204
  {uint32_t ea=c->r[2]+0xFFFFDA8Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 8025D208
  {uint32_t ea=c->r[1]+0x00000020u; c->f[1]=RF64(ea);} // 8025D20C
  c->f[7]=c->ps1[7]=S(c->f[4]-c->f[0]); // 8025D210
  W32(c->r[1]+0x0000002Cu,c->r[4]); // 8025D214
  c->f[5]=c->ps1[5]=S(c->f[1]-c->f[0]); // 8025D218
  {uint32_t ea=c->r[1]+0x00000028u; c->f[1]=RF64(ea);} // 8025D21C
  c->f[6]=c->ps1[6]=S(c->f[2]*c->f[3]); // 8025D220
  W32(c->r[1]+0x00000024u,c->r[5]); // 8025D224
  {uint32_t ea=c->r[2]+0xFFFFDA90u; c->f[4]=c->ps1[4]=RF32(ea);} // 8025D228
  c->f[3]=c->ps1[3]=S(c->f[1]-c->f[0]); // 8025D22C
  {uint32_t ea=c->r[1]+0x00000020u; c->f[2]=RF64(ea);} // 8025D230
  c->f[4]=c->ps1[4]=S(c->f[4]*c->f[5]); // 8025D234
  W32(c->r[1]+0x0000002Cu,c->r[3]); // 8025D238
  {uint32_t ea=c->r[2]+0xFFFFDA88u; c->f[5]=c->ps1[5]=RF32(ea);} // 8025D23C
  c->f[9]=c->ps1[9]=S(c->f[2]-c->f[0]); // 8025D240
  {uint32_t ea=c->r[1]+0x00000028u; c->f[1]=RF64(ea);} // 8025D244
  c->f[13]=c->ps1[13]=S(c->f[5]*c->f[7]); // 8025D248
  {uint32_t ea=c->r[2]+0xFFFFDA98u; c->f[11]=c->ps1[11]=RF32(ea);} // 8025D24C
  c->f[12]=c->ps1[12]=S(c->f[6]+c->f[4]); // 8025D250
  {uint32_t ea=c->r[2]+0xFFFFDA9Cu; c->f[8]=c->ps1[8]=RF32(ea);} // 8025D254
  c->f[7]=c->ps1[7]=S(c->f[1]-c->f[0]); // 8025D258
  W32(c->r[1]+0x00000024u,c->r[5]); // 8025D25C
  c->f[10]=c->ps1[10]=S(c->f[11]*c->f[3]); // 8025D260
  {uint32_t ea=c->r[2]+0xFFFFDAA0u; c->f[6]=c->ps1[6]=RF32(ea);} // 8025D264
  {uint32_t ea=c->r[1]+0x00000020u; c->f[1]=RF64(ea);} // 8025D268
  c->f[8]=c->ps1[8]=S(c->f[8]*c->f[9]); // 8025D26C
  c->f[6]=c->ps1[6]=S(c->f[6]*c->f[7]); // 8025D270
  W32(c->r[1]+0x0000002Cu,c->r[3]); // 8025D274
  c->f[5]=c->ps1[5]=S(c->f[1]-c->f[0]); // 8025D278
  {uint32_t ea=c->r[1]+0x00000028u; c->f[1]=RF64(ea);} // 8025D27C
  W32(c->r[1]+0x00000024u,c->r[4]); // 8025D280
  c->f[4]=c->ps1[4]=S(c->f[1]-c->f[0]); // 8025D284
  {uint32_t ea=c->r[2]+0xFFFFDAA4u; c->f[3]=c->ps1[3]=RF32(ea);} // 8025D288
  {uint32_t ea=c->r[1]+0x00000020u; c->f[2]=RF64(ea);} // 8025D28C
  c->f[5]=c->ps1[5]=S(c->f[11]*c->f[5]); // 8025D290
  {uint32_t ea=c->r[2]+0xFFFFDAA8u; c->f[1]=c->ps1[1]=RF32(ea);} // 8025D294
  c->f[0]=c->ps1[0]=S(c->f[2]-c->f[0]); // 8025D298
  c->f[2]=c->ps1[2]=S(c->f[3]*c->f[4]); // 8025D29C
  c->r[0]=R8(c->r[29]+0x00000007u); // 8025D2A0
  c->f[3]=c->ps1[3]=S(c->f[13]+c->f[12]); // 8025D2A4
  c->f[4]=c->ps1[4]=S(c->f[8]-c->f[6]); // 8025D2A8
  {uint32_t ea=c->r[2]+0xFFFFDA84u; c->f[9]=c->ps1[9]=RF32(ea);} // 8025D2AC
  c->f[2]=c->ps1[2]=S(c->f[5]-c->f[2]); // 8025D2B0
  c->f[0]=c->ps1[0]=S(c->f[1]*c->f[0]); // 8025D2B4
  {uint32_t ea=c->r[2]+0xFFFFDA80u; c->f[5]=c->ps1[5]=RF32(ea);} // 8025D2B8
  c->f[6]=c->ps1[6]=S(c->f[9]+c->f[3]); // 8025D2BC
  c->f[1]=c->ps1[1]=S(c->f[10]+c->f[4]); // 8025D2C0
  {uint32_t ea=c->r[2]+0xFFFFDA94u; c->f[3]=c->ps1[3]=RF32(ea);} // 8025D2C4
  c->f[0]=c->ps1[0]=S(c->f[2]-c->f[0]); // 8025D2C8
  c->f[4]=c->ps1[4]=S(c->f[5]+c->f[6]); // 8025D2CC
  {uint32_t ea=c->r[2]+0xFFFFDAACu; c->f[7]=c->ps1[7]=RF32(ea);} // 8025D2D0
  c->f[1]=c->ps1[1]=S(c->f[3]+c->f[1]); // 8025D2D4
  c->f[0]=c->ps1[0]=S(c->f[3]+c->f[0]); // 8025D2D8
  W8(c->r[1]+0x00000018u,c->r[5]); // 8025D2DC
  fcmp(c,0,c->f[4],c->f[7]); // 8025D2E0
  c->f[2]=c->ps1[2]=S(c->f[5]+c->f[1]); // 8025D2E4
  W8(c->r[1]+0x00000019u,c->r[3]); // 8025D2E8
  c->f[1]=c->ps1[1]=S(c->f[5]+c->f[0]); // 8025D2EC
  W8(c->r[1]+0x0000001Au,c->r[4]); // 8025D2F0
  W8(c->r[1]+0x0000001Bu,c->r[0]); // 8025D2F4
  if (!crb(c,1)) { goto L_8025D300; } // 8025D2F8
  goto L_8025D314; // 8025D2FC
L_8025D300:;
  fcmp(c,0,c->f[4],c->f[9]); // 8025D300
  if (!crb(c,0)) { goto L_8025D30C; } // 8025D304
  goto L_8025D310; // 8025D308
L_8025D30C:;
  c->f[9]=c->f[4]; // 8025D30C
L_8025D310:;
  c->f[7]=c->f[9]; // 8025D310
L_8025D314:;
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[7],true)); // 8025D314
  {uint32_t ea=c->r[2]+0xFFFFDAB0u; c->f[3]=c->ps1[3]=RF32(ea);} // 8025D318
  fcmp(c,0,c->f[2],c->f[3]); // 8025D31C
  {uint32_t ea=c->r[1]+0x00000030u; WF64(ea,c->f[0]);} // 8025D320
  c->r[0]=R32(c->r[1]+0x00000034u); // 8025D324
  W8(c->r[1]+0x0000000Cu,c->r[0]); // 8025D328
  if (!crb(c,1)) { goto L_8025D334; } // 8025D32C
  goto L_8025D348; // 8025D330
L_8025D334:;
  {uint32_t ea=c->r[2]+0xFFFFDA84u; c->f[3]=c->ps1[3]=RF32(ea);} // 8025D334
  fcmp(c,0,c->f[2],c->f[3]); // 8025D338
  if (!crb(c,0)) { goto L_8025D344; } // 8025D33C
  goto L_8025D348; // 8025D340
L_8025D344:;
  c->f[3]=c->f[2]; // 8025D344
L_8025D348:;
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[3],true)); // 8025D348
  {uint32_t ea=c->r[2]+0xFFFFDAB0u; c->f[2]=c->ps1[2]=RF32(ea);} // 8025D34C
  fcmp(c,0,c->f[1],c->f[2]); // 8025D350
  {uint32_t ea=c->r[1]+0x00000030u; WF64(ea,c->f[0]);} // 8025D354
  c->r[0]=R32(c->r[1]+0x00000034u); // 8025D358
  W8(c->r[1]+0x0000000Du,c->r[0]); // 8025D35C
  if (!crb(c,1)) { goto L_8025D368; } // 8025D360
  goto L_8025D37C; // 8025D364
L_8025D368:;
  {uint32_t ea=c->r[2]+0xFFFFDA84u; c->f[2]=c->ps1[2]=RF32(ea);} // 8025D368
  fcmp(c,0,c->f[1],c->f[2]); // 8025D36C
  if (!crb(c,0)) { goto L_8025D378; } // 8025D370
  goto L_8025D37C; // 8025D374
L_8025D378:;
  c->f[2]=c->f[1]; // 8025D378
L_8025D37C:;
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[2],true)); // 8025D37C
  c->r[0]=0u+0x00000000u; // 8025D380
  W8(c->r[1]+0x0000000Fu,c->r[0]); // 8025D384
  c->r[4]=c->r[30]|c->r[30]; // 8025D388
  c->r[5]=0u+0x00000000u; // 8025D38C
  c->r[0]=0u+0x00000014u; // 8025D390
  {uint32_t ea=c->r[1]+0x00000030u; WF64(ea,c->f[0]);} // 8025D394
  c->r[3]=R32(c->r[1]+0x00000034u); // 8025D398
  W8(c->r[1]+0x0000000Eu,c->r[3]); // 8025D39C
  c->r[3]=R32(c->r[1]+0x0000000Cu); // 8025D3A0
  W32(c->r[1]+0x0000001Cu,c->r[3]); // 8025D3A4
  c->r[6]=R8(c->r[1]+0x0000001Du); // 8025D3A8
  c->r[7]=R8(c->r[1]+0x0000001Eu); // 8025D3AC
  c->r[3]=R8(c->r[1]+0x0000001Cu); // 8025D3B0
L_8025D3B4:;
  c->ctr=c->r[0]; // 8025D3B4
L_8025D3B8:;
  W8(c->r[4]+0x00000000u,c->r[3]); // 8025D3B8
  W8(c->r[4]+0x00000001u,c->r[6]); // 8025D3BC
  W8(c->r[4]+0x00000002u,c->r[3]); // 8025D3C0
  W8(c->r[4]+0x00000003u,c->r[7]); // 8025D3C4
  W8(c->r[4]+0x00000004u,c->r[3]); // 8025D3C8
  W8(c->r[4]+0x00000005u,c->r[6]); // 8025D3CC
  W8(c->r[4]+0x00000006u,c->r[3]); // 8025D3D0
  W8(c->r[4]+0x00000007u,c->r[7]); // 8025D3D4
  W8(c->r[4]+0x00000008u,c->r[3]); // 8025D3D8
  W8(c->r[4]+0x00000009u,c->r[6]); // 8025D3DC
  W8(c->r[4]+0x0000000Au,c->r[3]); // 8025D3E0
  W8(c->r[4]+0x0000000Bu,c->r[7]); // 8025D3E4
  W8(c->r[4]+0x0000000Cu,c->r[3]); // 8025D3E8
  W8(c->r[4]+0x0000000Du,c->r[6]); // 8025D3EC
  W8(c->r[4]+0x0000000Eu,c->r[3]); // 8025D3F0
  W8(c->r[4]+0x0000000Fu,c->r[7]); // 8025D3F4
  W8(c->r[4]+0x00000010u,c->r[3]); // 8025D3F8
  W8(c->r[4]+0x00000011u,c->r[6]); // 8025D3FC
  W8(c->r[4]+0x00000012u,c->r[3]); // 8025D400
  W8(c->r[4]+0x00000013u,c->r[7]); // 8025D404
  W8(c->r[4]+0x00000014u,c->r[3]); // 8025D408
  W8(c->r[4]+0x00000015u,c->r[6]); // 8025D40C
  W8(c->r[4]+0x00000016u,c->r[3]); // 8025D410
  W8(c->r[4]+0x00000017u,c->r[7]); // 8025D414
  W8(c->r[4]+0x00000018u,c->r[3]); // 8025D418
  W8(c->r[4]+0x00000019u,c->r[6]); // 8025D41C
  W8(c->r[4]+0x0000001Au,c->r[3]); // 8025D420
  W8(c->r[4]+0x0000001Bu,c->r[7]); // 8025D424
  W8(c->r[4]+0x0000001Cu,c->r[3]); // 8025D428
  W8(c->r[4]+0x0000001Du,c->r[6]); // 8025D42C
  W8(c->r[4]+0x0000001Eu,c->r[3]); // 8025D430
  W8(c->r[4]+0x0000001Fu,c->r[7]); // 8025D434
  W8(c->r[4]+0x00000020u,c->r[3]); // 8025D438
  W8(c->r[4]+0x00000021u,c->r[6]); // 8025D43C
  W8(c->r[4]+0x00000022u,c->r[3]); // 8025D440
  W8(c->r[4]+0x00000023u,c->r[7]); // 8025D444
  W8(c->r[4]+0x00000024u,c->r[3]); // 8025D448
  W8(c->r[4]+0x00000025u,c->r[6]); // 8025D44C
  W8(c->r[4]+0x00000026u,c->r[3]); // 8025D450
  W8(c->r[4]+0x00000027u,c->r[7]); // 8025D454
  W8(c->r[4]+0x00000028u,c->r[3]); // 8025D458
  W8(c->r[4]+0x00000029u,c->r[6]); // 8025D45C
  W8(c->r[4]+0x0000002Au,c->r[3]); // 8025D460
  W8(c->r[4]+0x0000002Bu,c->r[7]); // 8025D464
  W8(c->r[4]+0x0000002Cu,c->r[3]); // 8025D468
  W8(c->r[4]+0x0000002Du,c->r[6]); // 8025D46C
  W8(c->r[4]+0x0000002Eu,c->r[3]); // 8025D470
  W8(c->r[4]+0x0000002Fu,c->r[7]); // 8025D474
  W8(c->r[4]+0x00000030u,c->r[3]); // 8025D478
  W8(c->r[4]+0x00000031u,c->r[6]); // 8025D47C
  W8(c->r[4]+0x00000032u,c->r[3]); // 8025D480
  W8(c->r[4]+0x00000033u,c->r[7]); // 8025D484
  W8(c->r[4]+0x00000034u,c->r[3]); // 8025D488
  W8(c->r[4]+0x00000035u,c->r[6]); // 8025D48C
  W8(c->r[4]+0x00000036u,c->r[3]); // 8025D490
  W8(c->r[4]+0x00000037u,c->r[7]); // 8025D494
  W8(c->r[4]+0x00000038u,c->r[3]); // 8025D498
  W8(c->r[4]+0x00000039u,c->r[6]); // 8025D49C
  W8(c->r[4]+0x0000003Au,c->r[3]); // 8025D4A0
  W8(c->r[4]+0x0000003Bu,c->r[7]); // 8025D4A4
  W8(c->r[4]+0x0000003Cu,c->r[3]); // 8025D4A8
  W8(c->r[4]+0x0000003Du,c->r[6]); // 8025D4AC
  W8(c->r[4]+0x0000003Eu,c->r[3]); // 8025D4B0
  W8(c->r[4]+0x0000003Fu,c->r[7]); // 8025D4B4
  c->r[4]=c->r[4]+0x00000040u; // 8025D4B8
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_8025D3B8; } // 8025D4BC
  c->r[5]=c->r[5]+0x00000001u; // 8025D4C0
  cmps(c,0,(int32_t)c->r[5],480); // 8025D4C4
  if (crb(c,0)) { IRQCHK(c); goto L_8025D3B4; } // 8025D4C8
  c->r[3]=c->r[30]|c->r[30]; // 8025D4CC
  c->lr=0x8025D4D4u; f_8026F22C(c); // 8025D4D0
  c->r[3]=0u+0x00000280u; // 8025D4D4
  c->r[4]=0u+0x000001E0u; // 8025D4D8
  c->lr=0x8025D4E0u; f_8025CE48(c); // 8025D4DC
  c->lr=0x8025D4E4u; f_8026F118(c); // 8025D4E0
  c->lr=0x8025D4E8u; f_8026F310(c); // 8025D4E4
  c->r[28]=c->r[3]|c->r[3]; // 8025D4E8
L_8025D4EC:;
  c->lr=0x8025D4F0u; f_8026F310(c); // 8025D4EC
  c->r[0]=c->r[3]-c->r[28]; // 8025D4F0
  cmps(c,0,(int32_t)c->r[0],2); // 8025D4F4
  if (crb(c,0)) { IRQCHK(c); goto L_8025D4EC; } // 8025D4F8
  c->r[3]=R8(c->r[29]+0x00000002u); // 8025D4FC
  c->r[5]=R8(c->r[29]+0x00000000u); // 8025D500
  W32(c->r[1]+0x0000002Cu,c->r[3]); // 8025D504
  c->r[4]=R8(c->r[29]+0x00000001u); // 8025D508
  W32(c->r[1]+0x00000024u,c->r[5]); // 8025D50C
  {uint32_t ea=c->r[1]+0x00000028u; c->f[4]=RF64(ea);} // 8025D510
  {uint32_t ea=c->r[1]+0x00000020u; c->f[2]=RF64(ea);} // 8025D514
  {uint32_t ea=c->r[2]+0xFFFFDAB8u; c->f[0]=RF64(ea);} // 8025D518
  W32(c->r[1]+0x0000002Cu,c->r[4]); // 8025D51C
  c->f[3]=c->ps1[3]=S(c->f[2]-c->f[0]); // 8025D520
  {uint32_t ea=c->r[2]+0xFFFFDA8Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 8025D524
  {uint32_t ea=c->r[1]+0x00000028u; c->f[1]=RF64(ea);} // 8025D528
  c->f[7]=c->ps1[7]=S(c->f[4]-c->f[0]); // 8025D52C
  W32(c->r[1]+0x00000024u,c->r[3]); // 8025D530
  c->f[5]=c->ps1[5]=S(c->f[1]-c->f[0]); // 8025D534
  {uint32_t ea=c->r[1]+0x00000020u; c->f[1]=RF64(ea);} // 8025D538
  c->f[6]=c->ps1[6]=S(c->f[2]*c->f[3]); // 8025D53C
  W32(c->r[1]+0x0000002Cu,c->r[5]); // 8025D540
  {uint32_t ea=c->r[2]+0xFFFFDA90u; c->f[4]=c->ps1[4]=RF32(ea);} // 8025D544
  c->f[3]=c->ps1[3]=S(c->f[1]-c->f[0]); // 8025D548
  {uint32_t ea=c->r[1]+0x00000028u; c->f[2]=RF64(ea);} // 8025D54C
  c->f[4]=c->ps1[4]=S(c->f[4]*c->f[5]); // 8025D550
  W32(c->r[1]+0x00000024u,c->r[4]); // 8025D554
  {uint32_t ea=c->r[2]+0xFFFFDA88u; c->f[5]=c->ps1[5]=RF32(ea);} // 8025D558
  c->f[9]=c->ps1[9]=S(c->f[2]-c->f[0]); // 8025D55C
  {uint32_t ea=c->r[1]+0x00000020u; c->f[1]=RF64(ea);} // 8025D560
  c->f[13]=c->ps1[13]=S(c->f[5]*c->f[7]); // 8025D564
  {uint32_t ea=c->r[2]+0xFFFFDA98u; c->f[11]=c->ps1[11]=RF32(ea);} // 8025D568
  c->f[12]=c->ps1[12]=S(c->f[6]+c->f[4]); // 8025D56C
  {uint32_t ea=c->r[2]+0xFFFFDA9Cu; c->f[8]=c->ps1[8]=RF32(ea);} // 8025D570
  c->f[7]=c->ps1[7]=S(c->f[1]-c->f[0]); // 8025D574
  W32(c->r[1]+0x0000002Cu,c->r[5]); // 8025D578
  c->f[10]=c->ps1[10]=S(c->f[11]*c->f[3]); // 8025D57C
  {uint32_t ea=c->r[2]+0xFFFFDAA0u; c->f[6]=c->ps1[6]=RF32(ea);} // 8025D580
  {uint32_t ea=c->r[1]+0x00000028u; c->f[1]=RF64(ea);} // 8025D584
  c->f[8]=c->ps1[8]=S(c->f[8]*c->f[9]); // 8025D588
  c->f[6]=c->ps1[6]=S(c->f[6]*c->f[7]); // 8025D58C
  W32(c->r[1]+0x00000024u,c->r[4]); // 8025D590
  c->f[5]=c->ps1[5]=S(c->f[1]-c->f[0]); // 8025D594
  {uint32_t ea=c->r[1]+0x00000020u; c->f[1]=RF64(ea);} // 8025D598
  W32(c->r[1]+0x0000002Cu,c->r[3]); // 8025D59C
  c->f[4]=c->ps1[4]=S(c->f[1]-c->f[0]); // 8025D5A0
  {uint32_t ea=c->r[2]+0xFFFFDAA4u; c->f[3]=c->ps1[3]=RF32(ea);} // 8025D5A4
  {uint32_t ea=c->r[1]+0x00000028u; c->f[2]=RF64(ea);} // 8025D5A8
  c->f[5]=c->ps1[5]=S(c->f[11]*c->f[5]); // 8025D5AC
  {uint32_t ea=c->r[2]+0xFFFFDAA8u; c->f[1]=c->ps1[1]=RF32(ea);} // 8025D5B0
  c->f[0]=c->ps1[0]=S(c->f[2]-c->f[0]); // 8025D5B4
  c->f[2]=c->ps1[2]=S(c->f[3]*c->f[4]); // 8025D5B8
  c->r[0]=R8(c->r[29]+0x00000003u); // 8025D5BC
  c->f[3]=c->ps1[3]=S(c->f[13]+c->f[12]); // 8025D5C0
  c->f[4]=c->ps1[4]=S(c->f[8]-c->f[6]); // 8025D5C4
  {uint32_t ea=c->r[2]+0xFFFFDA84u; c->f[9]=c->ps1[9]=RF32(ea);} // 8025D5C8
  c->f[2]=c->ps1[2]=S(c->f[5]-c->f[2]); // 8025D5CC
  c->f[0]=c->ps1[0]=S(c->f[1]*c->f[0]); // 8025D5D0
  {uint32_t ea=c->r[2]+0xFFFFDA80u; c->f[5]=c->ps1[5]=RF32(ea);} // 8025D5D4
  c->f[6]=c->ps1[6]=S(c->f[9]+c->f[3]); // 8025D5D8
  c->f[1]=c->ps1[1]=S(c->f[10]+c->f[4]); // 8025D5DC
  {uint32_t ea=c->r[2]+0xFFFFDA94u; c->f[3]=c->ps1[3]=RF32(ea);} // 8025D5E0
  c->f[0]=c->ps1[0]=S(c->f[2]-c->f[0]); // 8025D5E4
  c->f[4]=c->ps1[4]=S(c->f[5]+c->f[6]); // 8025D5E8
  {uint32_t ea=c->r[2]+0xFFFFDAACu; c->f[7]=c->ps1[7]=RF32(ea);} // 8025D5EC
  c->f[1]=c->ps1[1]=S(c->f[3]+c->f[1]); // 8025D5F0
  c->f[0]=c->ps1[0]=S(c->f[3]+c->f[0]); // 8025D5F4
  W8(c->r[1]+0x00000010u,c->r[5]); // 8025D5F8
  fcmp(c,0,c->f[4],c->f[7]); // 8025D5FC
  c->f[2]=c->ps1[2]=S(c->f[5]+c->f[1]); // 8025D600
  W8(c->r[1]+0x00000011u,c->r[4]); // 8025D604
  c->f[1]=c->ps1[1]=S(c->f[5]+c->f[0]); // 8025D608
  W8(c->r[1]+0x00000012u,c->r[3]); // 8025D60C
  W8(c->r[1]+0x00000013u,c->r[0]); // 8025D610
  if (!crb(c,1)) { goto L_8025D61C; } // 8025D614
  goto L_8025D630; // 8025D618
L_8025D61C:;
  fcmp(c,0,c->f[4],c->f[9]); // 8025D61C
  if (!crb(c,0)) { goto L_8025D628; } // 8025D620
  goto L_8025D62C; // 8025D624
L_8025D628:;
  c->f[9]=c->f[4]; // 8025D628
L_8025D62C:;
  c->f[7]=c->f[9]; // 8025D62C
L_8025D630:;
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[7],true)); // 8025D630
  {uint32_t ea=c->r[2]+0xFFFFDAB0u; c->f[3]=c->ps1[3]=RF32(ea);} // 8025D634
  fcmp(c,0,c->f[2],c->f[3]); // 8025D638
  {uint32_t ea=c->r[1]+0x00000030u; WF64(ea,c->f[0]);} // 8025D63C
  c->r[0]=R32(c->r[1]+0x00000034u); // 8025D640
  W8(c->r[1]+0x00000008u,c->r[0]); // 8025D644
  if (!crb(c,1)) { goto L_8025D650; } // 8025D648
  goto L_8025D664; // 8025D64C
L_8025D650:;
  {uint32_t ea=c->r[2]+0xFFFFDA84u; c->f[3]=c->ps1[3]=RF32(ea);} // 8025D650
  fcmp(c,0,c->f[2],c->f[3]); // 8025D654
  if (!crb(c,0)) { goto L_8025D660; } // 8025D658
  goto L_8025D664; // 8025D65C
L_8025D660:;
  c->f[3]=c->f[2]; // 8025D660
L_8025D664:;
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[3],true)); // 8025D664
  {uint32_t ea=c->r[2]+0xFFFFDAB0u; c->f[2]=c->ps1[2]=RF32(ea);} // 8025D668
  fcmp(c,0,c->f[1],c->f[2]); // 8025D66C
  {uint32_t ea=c->r[1]+0x00000030u; WF64(ea,c->f[0]);} // 8025D670
  c->r[0]=R32(c->r[1]+0x00000034u); // 8025D674
  W8(c->r[1]+0x00000009u,c->r[0]); // 8025D678
  if (!crb(c,1)) { goto L_8025D684; } // 8025D67C
  goto L_8025D698; // 8025D680
L_8025D684:;
  {uint32_t ea=c->r[2]+0xFFFFDA84u; c->f[2]=c->ps1[2]=RF32(ea);} // 8025D684
  fcmp(c,0,c->f[1],c->f[2]); // 8025D688
  if (!crb(c,0)) { goto L_8025D694; } // 8025D68C
  goto L_8025D698; // 8025D690
L_8025D694:;
  c->f[2]=c->f[1]; // 8025D694
L_8025D698:;
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[2],true)); // 8025D698
  c->r[0]=0u+0x00000000u; // 8025D69C
  W8(c->r[1]+0x0000000Bu,c->r[0]); // 8025D6A0
  c->r[3]=c->r[30]|c->r[30]; // 8025D6A4
  c->r[10]=R32(c->r[29]+0x00000008u); // 8025D6A8
  c->r[6]=c->r[1]+0x00000014u; // 8025D6AC
  {uint32_t ea=c->r[1]+0x00000030u; WF64(ea,c->f[0]);} // 8025D6B0
  c->r[4]=0u+0x00000280u; // 8025D6B4
  c->r[5]=0u+0x000001E0u; // 8025D6B8
  c->r[7]=0u+0x00000030u; // 8025D6BC
  c->r[0]=R32(c->r[1]+0x00000034u); // 8025D6C0
  c->r[8]=0u+0x00000064u; // 8025D6C4
  W8(c->r[1]+0x0000000Au,c->r[0]); // 8025D6C8
  c->r[0]=R32(c->r[1]+0x00000008u); // 8025D6CC
  W32(c->r[1]+0x00000014u,c->r[0]); // 8025D6D0
  c->r[9]=R16(c->r[31]+0x0000000Eu); // 8025D6D4
  c->lr=0x8025D6DCu; f_8025CB24(c); // 8025D6D8
  c->r[4]=0u+0x00090000u; // 8025D6DC
  c->r[3]=c->r[30]|c->r[30]; // 8025D6E0
  c->r[4]=c->r[4]+0x00006000u; // 8025D6E4
  c->lr=0x8025D6ECu; f_8025A400(c); // 8025D6E8
  c->r[3]=0u+0x00000000u; // 8025D6EC
  c->lr=0x8025D6F4u; f_8026F298(c); // 8025D6F0
  c->lr=0x8025D6F8u; f_8026F118(c); // 8025D6F4
  c->lr=0x8025D6FCu; f_8026F310(c); // 8025D6F8
  c->r[30]=c->r[3]|c->r[3]; // 8025D6FC
L_8025D700:;
  c->lr=0x8025D704u; f_8026F310(c); // 8025D700
  c->r[0]=c->r[3]-c->r[30]; // 8025D704
  cmps(c,0,(int32_t)c->r[0],1); // 8025D708
  if (crb(c,0)) { IRQCHK(c); goto L_8025D700; } // 8025D70C
  c->lr=0x8025D714u; f_8025EA10(c); // 8025D710
  c->r[4]=R32(c->r[29]+0x00000008u); // 8025D714
  c->r[3]=c->r[13]+0xFFFF8DE8u; // 8025D718
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8025D71C
  c->lr=0x8025D724u; f_801CCA38(c); // 8025D720
  c->lr=0x8025D728u; f_80257E40(c); // 8025D724
  c->r[0]=R32(c->r[1]+0x00000054u); // 8025D728
  c->r[31]=R32(c->r[1]+0x0000004Cu); // 8025D72C
  c->r[30]=R32(c->r[1]+0x00000048u); // 8025D730
  c->r[29]=R32(c->r[1]+0x00000044u); // 8025D734
  c->r[28]=R32(c->r[1]+0x00000040u); // 8025D738
  c->lr=c->r[0]; // 8025D73C
  c->r[1]=c->r[1]+0x00000050u; // 8025D740
  return; // 8025D744
}

// GetFontCode
void f_8025D748(Ctx* __restrict c) {
  trace_call(0x8025D748u);
  cmpu(c,0,c->r[3],0x00000001u); // 8025D748
  if (!crb(c,2)) { goto L_8025D85C; } // 8025D74C
  cmpu(c,0,c->r[4],0x00000020u); // 8025D750
  if (crb(c,0)) { goto L_8025D778; } // 8025D754
  cmpu(c,0,c->r[4],0x000000DFu); // 8025D758
  if (crb(c,1)) { goto L_8025D778; } // 8025D75C
  c->r[0]=c->r[4]+0xFFFFFFE0u; // 8025D760
  c->r[3]=0u+0x80410000u; // 8025D764
  c->r[0]=rotl(c->r[0],1)&0xFFFFFFFEu; // 8025D768
  c->r[3]=c->r[3]+0x00002DD0u; // 8025D76C
  c->r[3]=R16(c->r[3]+c->r[0]); // 8025D770
  return; // 8025D774
L_8025D778:;
  cmpu(c,0,c->r[4],0x0000889Eu); // 8025D778
  if (!crb(c,1)) { goto L_8025D7E4; } // 8025D77C
  cmpu(c,0,c->r[4],0x00009872u); // 8025D780
  if (crb(c,1)) { goto L_8025D7E4; } // 8025D784
  c->r[3]=rotl(c->r[4],24)&0x000000FFu; // 8025D788
  c->r[4]=rotl(c->r[4],0)&0x000000FFu; // 8025D78C
  c->r[3]=c->r[3]+0xFFFFFF78u; // 8025D790
  c->r[0]=0u+0x00000000u; // 8025D794
  cmpu(c,0,c->r[4],0x00000040u); // 8025D798
  c->r[3]=(uint32_t)((int32_t)c->r[3]*(int32_t)188); // 8025D79C
  if (crb(c,0)) { goto L_8025D7B8; } // 8025D7A0
  cmpu(c,0,c->r[4],0x000000FCu); // 8025D7A4
  if (crb(c,1)) { goto L_8025D7B8; } // 8025D7A8
  cmpu(c,0,c->r[4],0x0000007Fu); // 8025D7AC
  if (crb(c,2)) { goto L_8025D7B8; } // 8025D7B0
  c->r[0]=0u+0x00000001u; // 8025D7B4
L_8025D7B8:;
  cmps(c,0,(int32_t)c->r[0],0); // 8025D7B8
  if (!crb(c,2)) { goto L_8025D7C8; } // 8025D7BC
  c->r[3]=0u+0x00000000u; // 8025D7C0
  return; // 8025D7C4
L_8025D7C8:;
  c->r[4]=c->r[4]+0xFFFFFFC0u; // 8025D7C8
  cmps(c,0,(int32_t)c->r[4],64); // 8025D7CC
  if (crb(c,0)) { goto L_8025D7D8; } // 8025D7D0
  c->r[4]=c->r[4]+0xFFFFFFFFu; // 8025D7D4
L_8025D7D8:;
  c->r[3]=c->r[3]+c->r[4]; // 8025D7D8
  c->r[3]=c->r[3]+0x000002BEu; // 8025D7DC
  return; // 8025D7E0
L_8025D7E4:;
  cmpu(c,0,c->r[4],0x00008140u); // 8025D7E4
  if (crb(c,0)) { goto L_8025D874; } // 8025D7E8
  cmpu(c,0,c->r[4],0x0000879Eu); // 8025D7EC
  if (!crb(c,0)) { goto L_8025D874; } // 8025D7F0
  c->r[3]=rotl(c->r[4],24)&0x000000FFu; // 8025D7F4
  c->r[4]=rotl(c->r[4],0)&0x000000FFu; // 8025D7F8
  c->r[3]=c->r[3]+0xFFFFFF7Fu; // 8025D7FC
  c->r[0]=0u+0x00000000u; // 8025D800
  cmpu(c,0,c->r[4],0x00000040u); // 8025D804
  c->r[3]=(uint32_t)((int32_t)c->r[3]*(int32_t)188); // 8025D808
  if (crb(c,0)) { goto L_8025D824; } // 8025D80C
  cmpu(c,0,c->r[4],0x000000FCu); // 8025D810
  if (crb(c,1)) { goto L_8025D824; } // 8025D814
  cmpu(c,0,c->r[4],0x0000007Fu); // 8025D818
  if (crb(c,2)) { goto L_8025D824; } // 8025D81C
  c->r[0]=0u+0x00000001u; // 8025D820
L_8025D824:;
  cmps(c,0,(int32_t)c->r[0],0); // 8025D824
  if (!crb(c,2)) { goto L_8025D834; } // 8025D828
  c->r[3]=0u+0x00000000u; // 8025D82C
  return; // 8025D830
L_8025D834:;
  c->r[4]=c->r[4]+0xFFFFFFC0u; // 8025D834
  cmps(c,0,(int32_t)c->r[4],64); // 8025D838
  if (crb(c,0)) { goto L_8025D844; } // 8025D83C
  c->r[4]=c->r[4]+0xFFFFFFFFu; // 8025D840
L_8025D844:;
  c->r[0]=c->r[3]+c->r[4]; // 8025D844
  c->r[3]=0u+0x80410000u; // 8025D848
  c->r[0]=rotl(c->r[0],1)&0xFFFFFFFEu; // 8025D84C
  c->r[3]=c->r[3]+0x00002F50u; // 8025D850
  c->r[3]=R16(c->r[3]+c->r[0]); // 8025D854
  return; // 8025D858
L_8025D85C:;
  cmpu(c,0,c->r[4],0x00000020u); // 8025D85C
  if (!crb(c,1)) { goto L_8025D874; } // 8025D860
  cmpu(c,0,c->r[4],0x000000FFu); // 8025D864
  if (crb(c,1)) { goto L_8025D874; } // 8025D868
  c->r[3]=c->r[4]+0xFFFFFFE0u; // 8025D86C
  return; // 8025D870
L_8025D874:;
  c->r[3]=0u+0x00000000u; // 8025D874
  return; // 8025D878
}

// Decode
void f_8025D87C(Ctx* __restrict c) {
  trace_call(0x8025D87Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8025D87C
  c->r[0]=c->lr; // 8025D880
  W32(c->r[1]+0x00000024u,c->r[0]); // 8025D884
  c->r[11]=c->r[1]+0x00000020u; // 8025D888
  c->lr=0x8025D890u; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 8025D88C
  c->r[5]=R32(c->r[3]+0x0000000Cu); // 8025D890
  c->r[30]=c->r[3]+0x00000010u; // 8025D894
  c->r[0]=R32(c->r[3]+0x00000004u); // 8025D898
  c->r[8]=0u+0x00000000u; // 8025D89C
  c->r[29]=c->r[3]+c->r[5]; // 8025D8A0
  c->r[9]=R32(c->r[3]+0x00000008u); // 8025D8A4
  c->r[11]=0u+0x00000000u; // 8025D8A8
  c->r[5]=0u+0x80000000u; // 8025D8AC
L_8025D8B0:;
  cmps(c,0,(int32_t)c->r[11],0); // 8025D8B0
  if (!crb(c,2)) { goto L_8025D8C4; } // 8025D8B4
  c->r[12]=R32(c->r[30]+0x00000000u); // 8025D8B8
  c->r[11]=0u+0x00000020u; // 8025D8BC
  c->r[30]=c->r[30]+0x00000004u; // 8025D8C0
L_8025D8C4:;
  c->r[6]=rotl(c->r[12],0)&0x80000000u; cr0(c,c->r[6]); // 8025D8C4
  if (crb(c,2)) { goto L_8025D8E0; } // 8025D8C8
  c->r[6]=R8(c->r[29]+0x00000000u); // 8025D8CC
  c->r[29]=c->r[29]+0x00000001u; // 8025D8D0
  W8(c->r[4]+c->r[8],c->r[6]); // 8025D8D4
  c->r[8]=c->r[8]+0x00000001u; // 8025D8D8
  goto L_8025D9F8; // 8025D8DC
L_8025D8E0:;
  c->r[7]=c->r[3]+c->r[9]; // 8025D8E0
  c->r[6]=R8(c->r[3]+c->r[9]); // 8025D8E4
  c->r[7]=R8(c->r[7]+0x00000001u); // 8025D8E8
  c->r[9]=c->r[9]+0x00000002u; // 8025D8EC
  c->r[7]=(rotl(c->r[6],8)&0x0000FF00u)|(c->r[7]&~0x0000FF00u); // 8025D8F0
  c->r[10]=sraw(c,c->r[7],12); cr0(c,c->r[10]); // 8025D8F4
  c->r[6]=rotl(c->r[7],0)&0x00000FFFu; // 8025D8F8
  c->r[7]=c->r[8]-c->r[6]; // 8025D8FC
  if (!crb(c,2)) { goto L_8025D914; } // 8025D900
  c->r[6]=R8(c->r[29]+0x00000000u); // 8025D904
  c->r[29]=c->r[29]+0x00000001u; // 8025D908
  c->r[10]=c->r[6]+0x00000012u; // 8025D90C
  goto L_8025D918; // 8025D910
L_8025D914:;
  c->r[10]=c->r[10]+0x00000002u; // 8025D914
L_8025D918:;
  cmps(c,1,(int32_t)c->r[10],0); // 8025D918
  c->r[6]=0u+0x00000000u; // 8025D91C
  if (!crb(c,5)) { goto L_8025D9F8; } // 8025D920
  cmps(c,0,(int32_t)c->r[10],8); // 8025D924
  c->r[27]=c->r[10]+0xFFFFFFF8u; // 8025D928
  if (!crb(c,1)) { goto L_8025D9C4; } // 8025D92C
  c->r[28]=0u+0x00000000u; // 8025D930
  if (crb(c,4)) { goto L_8025D948; } // 8025D934
  c->r[26]=c->r[5]+0xFFFFFFFEu; // 8025D938
  cmps(c,0,(int32_t)c->r[10],(int32_t)c->r[26]); // 8025D93C
  if (crb(c,1)) { goto L_8025D948; } // 8025D940
  c->r[28]=0u+0x00000001u; // 8025D944
L_8025D948:;
  cmps(c,0,(int32_t)c->r[28],0); // 8025D948
  if (crb(c,2)) { goto L_8025D9C4; } // 8025D94C
  c->r[31]=c->r[27]+0x00000007u; // 8025D950
  c->r[28]=c->r[4]+c->r[8]; // 8025D954
  c->r[31]=rotl(c->r[31],29)&0x1FFFFFFFu; // 8025D958
  c->ctr=c->r[31]; // 8025D95C
  cmps(c,0,(int32_t)c->r[27],0); // 8025D960
  if (!crb(c,1)) { goto L_8025D9C4; } // 8025D964
L_8025D968:;
  c->r[26]=c->r[4]+c->r[7]; // 8025D968
  c->r[27]=c->r[8]+c->r[4]; // 8025D96C
  c->r[31]=R8(c->r[26]+0xFFFFFFFFu); // 8025D970
  c->r[8]=c->r[8]+0x00000008u; // 8025D974
  c->r[6]=c->r[6]+0x00000008u; // 8025D978
  W8(c->r[28]+0x00000000u,c->r[31]); // 8025D97C
  c->r[28]=c->r[28]+0x00000008u; // 8025D980
  c->r[31]=R8(c->r[4]+c->r[7]); // 8025D984
  c->r[7]=c->r[7]+0x00000008u; // 8025D988
  W8(c->r[27]+0x00000001u,c->r[31]); // 8025D98C
  c->r[31]=R8(c->r[26]+0x00000001u); // 8025D990
  W8(c->r[27]+0x00000002u,c->r[31]); // 8025D994
  c->r[31]=R8(c->r[26]+0x00000002u); // 8025D998
  W8(c->r[27]+0x00000003u,c->r[31]); // 8025D99C
  c->r[31]=R8(c->r[26]+0x00000003u); // 8025D9A0
  W8(c->r[27]+0x00000004u,c->r[31]); // 8025D9A4
  c->r[31]=R8(c->r[26]+0x00000004u); // 8025D9A8
  W8(c->r[27]+0x00000005u,c->r[31]); // 8025D9AC
  c->r[31]=R8(c->r[26]+0x00000005u); // 8025D9B0
  W8(c->r[27]+0x00000006u,c->r[31]); // 8025D9B4
  c->r[31]=R8(c->r[26]+0x00000006u); // 8025D9B8
  W8(c->r[27]+0x00000007u,c->r[31]); // 8025D9BC
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_8025D968; } // 8025D9C0
L_8025D9C4:;
  c->r[31]=c->r[10]-c->r[6]; // 8025D9C4
  c->r[28]=c->r[4]+c->r[8]; // 8025D9C8
  c->ctr=c->r[31]; // 8025D9CC
  cmps(c,0,(int32_t)c->r[6],(int32_t)c->r[10]); // 8025D9D0
  if (!crb(c,0)) { goto L_8025D9F8; } // 8025D9D4
L_8025D9D8:;
  c->r[10]=c->r[4]+c->r[7]; // 8025D9D8
  c->r[6]=c->r[6]+0x00000001u; // 8025D9DC
  c->r[10]=R8(c->r[10]+0xFFFFFFFFu); // 8025D9E0
  c->r[8]=c->r[8]+0x00000001u; // 8025D9E4
  c->r[7]=c->r[7]+0x00000001u; // 8025D9E8
  W8(c->r[28]+0x00000000u,c->r[10]); // 8025D9EC
  c->r[28]=c->r[28]+0x00000001u; // 8025D9F0
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_8025D9D8; } // 8025D9F4
L_8025D9F8:;
  cmps(c,0,(int32_t)c->r[8],(int32_t)c->r[0]); // 8025D9F8
  c->r[12]=rotl(c->r[12],1)&0xFFFFFFFEu; // 8025D9FC
  c->r[11]=c->r[11]+0xFFFFFFFFu; // 8025DA00
  if (crb(c,0)) { IRQCHK(c); goto L_8025D8B0; } // 8025DA04
  c->r[11]=c->r[1]+0x00000020u; // 8025DA08
  c->lr=0x8025DA10u; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 8025DA0C
  c->r[0]=R32(c->r[1]+0x00000024u); // 8025DA10
  c->lr=c->r[0]; // 8025DA14
  c->r[1]=c->r[1]+0x00000020u; // 8025DA18
  return; // 8025DA1C
}

// OSGetFontEncode
void f_8025DA20(Ctx* __restrict c) {
  trace_call(0x8025DA20u);
  c->r[3]=R16(c->r[13]+0xFFFF8DF0u); // 8025DA20
  cmpu(c,0,c->r[3],0x0000FFFFu); // 8025DA24
  if (!crb(c,2)) return; // 8025DA28
  c->r[3]=0u+0x80000000u; // 8025DA2C
  c->r[0]=R32(c->r[3]+0x000000CCu); // 8025DA30
  cmps(c,0,(int32_t)c->r[0],0); // 8025DA34
  if (crb(c,2)) { goto L_8025DA44; } // 8025DA38
  if (crb(c,0)) { goto L_8025DA58; } // 8025DA3C
  goto L_8025DA58; // 8025DA40
L_8025DA44:;
  c->r[3]=0u+0xCC000000u; // 8025DA44
  c->r[0]=R16(c->r[3]+0x0000206Eu); // 8025DA48
  c->r[0]=rotl(c->r[0],31)&0x00000001u; // 8025DA4C
  W16(c->r[13]+0xFFFF8DF0u,c->r[0]); // 8025DA50
  goto L_8025DA60; // 8025DA54
L_8025DA58:;
  c->r[0]=0u+0x00000000u; // 8025DA58
  W16(c->r[13]+0xFFFF8DF0u,c->r[0]); // 8025DA5C
L_8025DA60:;
  c->r[4]=0u+0x80260000u; // 8025DA60
  c->r[3]=rotl(c->r[0],0)&0x0000FFFFu; // 8025DA64
  c->r[4]=c->r[4]+0xFFFFDF1Cu; // 8025DA68
  W32(c->r[13]+0xFFFF9860u,c->r[4]); // 8025DA6C
  return; // 8025DA70
}

// OSSetFontEncode
void f_8025DA74(Ctx* __restrict c) {
  trace_call(0x8025DA74u);
  c->r[0]=R16(c->r[13]+0xFFFF8DF0u); // 8025DA74
  cmpu(c,0,c->r[0],0x0000FFFFu); // 8025DA78
  if (crb(c,2)) { goto L_8025DA84; } // 8025DA7C
  goto L_8025DAC8; // 8025DA80
L_8025DA84:;
  c->r[4]=0u+0x80000000u; // 8025DA84
  c->r[0]=R32(c->r[4]+0x000000CCu); // 8025DA88
  cmps(c,0,(int32_t)c->r[0],0); // 8025DA8C
  if (crb(c,2)) { goto L_8025DA9C; } // 8025DA90
  if (crb(c,0)) { goto L_8025DAB0; } // 8025DA94
  goto L_8025DAB0; // 8025DA98
L_8025DA9C:;
  c->r[4]=0u+0xCC000000u; // 8025DA9C
  c->r[0]=R16(c->r[4]+0x0000206Eu); // 8025DAA0
  c->r[0]=rotl(c->r[0],31)&0x00000001u; // 8025DAA4
  W16(c->r[13]+0xFFFF8DF0u,c->r[0]); // 8025DAA8
  goto L_8025DAB8; // 8025DAAC
L_8025DAB0:;
  c->r[0]=0u+0x00000000u; // 8025DAB0
  W16(c->r[13]+0xFFFF8DF0u,c->r[0]); // 8025DAB4
L_8025DAB8:;
  c->r[4]=0u+0x80260000u; // 8025DAB8
  c->r[0]=rotl(c->r[0],0)&0x0000FFFFu; // 8025DABC
  c->r[4]=c->r[4]+0xFFFFDF1Cu; // 8025DAC0
  W32(c->r[13]+0xFFFF9860u,c->r[4]); // 8025DAC4
L_8025DAC8:;
  cmpu(c,1,c->r[3],0x00000005u); // 8025DAC8
  if (crb(c,5)) { goto L_8025DAEC; } // 8025DACC
  cmpu(c,0,c->r[3],0x00000003u); // 8025DAD0
  W16(c->r[13]+0xFFFF8DF0u,c->r[3]); // 8025DAD4
  if (crb(c,0)) { goto L_8025DAEC; } // 8025DAD8
  if (crb(c,5)) { goto L_8025DAEC; } // 8025DADC
  c->r[3]=0u+0x80260000u; // 8025DAE0
  c->r[3]=c->r[3]+0xFFFFE018u; // 8025DAE4
  W32(c->r[13]+0xFFFF9860u,c->r[3]); // 8025DAE8
L_8025DAEC:;
  c->r[3]=c->r[0]|c->r[0]; // 8025DAEC
  return; // 8025DAF0
}

// ReadFont
void f_8025DAF4(Ctx* __restrict c) {
  trace_call(0x8025DAF4u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8025DAF4
  c->r[0]=c->lr; // 8025DAF8
  W32(c->r[1]+0x00000034u,c->r[0]); // 8025DAFC
  c->r[11]=c->r[1]+0x00000030u; // 8025DB00
  c->lr=0x8025DB08u; { W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 8025DB04
  cmpu(c,0,c->r[4],0x00000001u); // 8025DB08
  c->r[28]=c->r[3]|c->r[3]; // 8025DB0C
  c->r[29]=c->r[4]|c->r[4]; // 8025DB10
  c->r[26]=c->r[5]|c->r[5]; // 8025DB14
  if (!crb(c,2)) { goto L_8025DB74; } // 8025DB18
  c->r[4]=0u+0x001B0000u; // 8025DB1C
  c->r[3]=0u+0x00050000u; // 8025DB20
  c->r[27]=c->r[28]|c->r[28]; // 8025DB24
  c->r[31]=c->r[4]+0xFFFFFF00u; // 8025DB28
  c->r[30]=c->r[3]+0xFFFFD000u; // 8025DB2C
  goto L_8025DB68; // 8025DB30
L_8025DB34:;
  cmps(c,0,(int32_t)c->r[30],256); // 8025DB34
  c->r[25]=0u+0x00000100u; // 8025DB38
  if (crb(c,1)) { goto L_8025DB44; } // 8025DB3C
  c->r[25]=c->r[30]|c->r[30]; // 8025DB40
L_8025DB44:;
  c->r[30]=c->r[30]-c->r[25]; // 8025DB44
L_8025DB48:;
  c->r[3]=c->r[27]|c->r[27]; // 8025DB48
  c->r[4]=c->r[25]|c->r[25]; // 8025DB4C
  c->r[5]=c->r[31]|c->r[31]; // 8025DB50
  c->lr=0x8025DB58u; f_80260C1C(c); // 8025DB54
  cmps(c,0,(int32_t)c->r[3],0); // 8025DB58
  if (crb(c,2)) { IRQCHK(c); goto L_8025DB48; } // 8025DB5C
  c->r[31]=c->r[31]+c->r[25]; // 8025DB60
  c->r[27]=c->r[27]+c->r[25]; // 8025DB64
L_8025DB68:;
  cmps(c,0,(int32_t)c->r[30],0); // 8025DB68
  if (crb(c,1)) { IRQCHK(c); goto L_8025DB34; } // 8025DB6C
  goto L_8025DBC4; // 8025DB70
L_8025DB74:;
  c->r[3]=0u+0x00200000u; // 8025DB74
  c->r[27]=c->r[28]|c->r[28]; // 8025DB78
  c->r[31]=c->r[3]+0xFFFFCF00u; // 8025DB7C
  c->r[30]=0u+0x00003000u; // 8025DB80
  goto L_8025DBBC; // 8025DB84
L_8025DB88:;
  cmps(c,0,(int32_t)c->r[30],256); // 8025DB88
  c->r[25]=0u+0x00000100u; // 8025DB8C
  if (crb(c,1)) { goto L_8025DB98; } // 8025DB90
  c->r[25]=c->r[30]|c->r[30]; // 8025DB94
L_8025DB98:;
  c->r[30]=c->r[30]-c->r[25]; // 8025DB98
L_8025DB9C:;
  c->r[3]=c->r[27]|c->r[27]; // 8025DB9C
  c->r[4]=c->r[25]|c->r[25]; // 8025DBA0
  c->r[5]=c->r[31]|c->r[31]; // 8025DBA4
  c->lr=0x8025DBACu; f_80260C1C(c); // 8025DBA8
  cmps(c,0,(int32_t)c->r[3],0); // 8025DBAC
  if (crb(c,2)) { IRQCHK(c); goto L_8025DB9C; } // 8025DBB0
  c->r[31]=c->r[31]+c->r[25]; // 8025DBB4
  c->r[27]=c->r[27]+c->r[25]; // 8025DBB8
L_8025DBBC:;
  cmps(c,0,(int32_t)c->r[30],0); // 8025DBBC
  if (crb(c,1)) { IRQCHK(c); goto L_8025DB88; } // 8025DBC0
L_8025DBC4:;
  c->r[0]=R8(c->r[28]+0x00000000u); // 8025DBC4
  cmpu(c,0,c->r[0],0x00000059u); // 8025DBC8
  if (!crb(c,2)) { goto L_8025DBF0; } // 8025DBCC
  c->r[0]=R8(c->r[28]+0x00000001u); // 8025DBD0
  cmpu(c,0,c->r[0],0x00000061u); // 8025DBD4
  if (!crb(c,2)) { goto L_8025DBF0; } // 8025DBD8
  c->r[0]=R8(c->r[28]+0x00000002u); // 8025DBDC
  cmpu(c,0,c->r[0],0x00000079u); // 8025DBE0
  if (!crb(c,2)) { goto L_8025DBF0; } // 8025DBE4
  c->r[27]=R32(c->r[28]+0x00000004u); // 8025DBE8
  goto L_8025DBF4; // 8025DBEC
L_8025DBF0:;
  c->r[27]=0u+0x00000000u; // 8025DBF0
L_8025DBF4:;
  cmps(c,0,(int32_t)c->r[27],0); // 8025DBF4
  if (!crb(c,2)) { goto L_8025DC04; } // 8025DBF8
  c->r[3]=0u+0x00000000u; // 8025DBFC
  goto L_8025DDDC; // 8025DC00
L_8025DC04:;
  c->r[3]=c->r[28]|c->r[28]; // 8025DC04
  c->r[4]=c->r[26]|c->r[26]; // 8025DC08
  c->lr=0x8025DC10u; f_8025D87C(c); // 8025DC0C
  cmpu(c,0,c->r[29],0x00000001u); // 8025DC10
  if (!crb(c,2)) { goto L_8025DDD8; } // 8025DC14
  c->r[3]=c->r[29]|c->r[29]; // 8025DC18
  c->r[28]=R16(c->r[2]+0xFFFFDAC0u); // 8025DC1C
  c->r[29]=R16(c->r[2]+0xFFFFDAC2u); // 8025DC20
  c->r[4]=0u+0x00000054u; // 8025DC24
  c->r[30]=R16(c->r[2]+0xFFFFDAC4u); // 8025DC28
  c->r[31]=R16(c->r[2]+0xFFFFDAC6u); // 8025DC2C
  c->lr=0x8025DC34u; f_8025D748(c); // 8025DC30
  c->r[9]=R16(c->r[26]+0x0000001Au); // 8025DC34
  c->r[4]=R16(c->r[26]+0x0000001Cu); // 8025DC38
  c->r[0]=R16(c->r[26]+0x0000001Eu); // 8025DC3C
  c->r[10]=(uint32_t)((int32_t)c->r[9]*(int32_t)c->r[4]); // 8025DC40
  c->r[5]=R32(c->r[26]+0x00000024u); // 8025DC44
  c->r[4]=rotl(c->r[0],2)&0xFFFFFFE0u; // 8025DC48
  c->r[6]=R16(c->r[26]+0x00000012u); // 8025DC4C
  c->r[0]=rotl(c->r[0],3)&0x00000001u; // 8025DC50
  c->r[7]=R16(c->r[26]+0x00000010u); // 8025DC54
  c->r[12]=divw((int32_t)c->r[3],(int32_t)c->r[10]); // 8025DC58
  c->r[0]=c->r[0]+c->r[4]; // 8025DC5C
  c->r[4]=c->r[26]+c->r[5]; // 8025DC60
  c->r[8]=R32(c->r[26]+0x00000014u); // 8025DC64
  c->r[11]=sraw(c,c->r[0],1); // 8025DC68
  c->r[0]=(uint32_t)((int32_t)c->r[12]*(int32_t)c->r[10]); // 8025DC6C
  c->r[3]=c->r[3]-c->r[0]; // 8025DC70
  c->r[5]=divw((int32_t)c->r[3],(int32_t)c->r[9]); // 8025DC74
  c->r[0]=(uint32_t)((int32_t)c->r[5]*(int32_t)c->r[9]); // 8025DC78
  c->r[5]=(uint32_t)((int32_t)c->r[5]*(int32_t)c->r[6]); // 8025DC7C
  c->r[25]=c->r[3]-c->r[0]; // 8025DC80
  c->r[6]=c->r[5]+0x00000004u; // 8025DC84
  c->r[25]=(uint32_t)((int32_t)c->r[25]*(int32_t)c->r[7]); // 8025DC88
  c->r[10]=c->r[5]+0x00000005u; // 8025DC8C
  c->r[3]=sraw(c,c->r[6],3); // 8025DC90
  c->r[0]=rotl(c->r[6],29)&0xE0000000u; // 8025DC94
  c->r[9]=addc(c,c->r[3],0,c->xer_ca); // 8025DC98
  c->r[7]=rotl(c->r[6],1)&0x00000001u; // 8025DC9C
  c->r[12]=(uint32_t)((int32_t)c->r[12]*(int32_t)c->r[8]); // 8025DCA0
  c->r[3]=sraw(c,c->r[25],3); // 8025DCA4
  c->r[0]=c->r[0]-c->r[7]; // 8025DCA8
  c->r[8]=addc(c,c->r[3],0,c->xer_ca); // 8025DCAC
  c->r[3]=rotl(c->r[0],3)&0xFFFFFFFFu; // 8025DCB0
  c->r[0]=rotl(c->r[25],29)&0xE0000000u; // 8025DCB4
  c->r[6]=rotl(c->r[25],1)&0x00000001u; // 8025DCB8
  c->r[12]=rotl(c->r[12],31)&0x7FFFFFFFu; // 8025DCBC
  c->r[9]=(uint32_t)((int32_t)c->r[11]*(int32_t)c->r[9]); // 8025DCC0
  c->r[7]=c->r[3]+c->r[7]; // 8025DCC4
  c->r[0]=c->r[0]-c->r[6]; // 8025DCC8
  c->r[4]=c->r[4]+c->r[12]; // 8025DCCC
  c->r[3]=rotl(c->r[0],3)&0xFFFFFFFFu; // 8025DCD0
  c->r[0]=rotl(c->r[8],4)&0xFFFFFFF0u; // 8025DCD4
  c->r[3]=c->r[3]+c->r[6]; // 8025DCD8
  c->r[9]=c->r[4]+c->r[9]; // 8025DCDC
  c->r[8]=rotl(c->r[7],1)&0xFFFFFFFEu; // 8025DCE0
  c->r[6]=rotl(c->r[10],29)&0xE0000000u; // 8025DCE4
  c->r[3]=sraw(c,c->r[3],2); // 8025DCE8
  c->r[9]=c->r[9]+c->r[0]; // 8025DCEC
  c->r[9]=c->r[9]+c->r[8]; // 8025DCF0
  c->r[7]=rotl(c->r[10],1)&0x00000001u; // 8025DCF4
  c->r[3]=addc(c,c->r[3],0,c->xer_ca); // 8025DCF8
  c->r[8]=c->r[5]+0x00000006u; // 8025DCFC
  W16(c->r[9]+c->r[3],c->r[28]); // 8025DD00
  c->r[6]=c->r[6]-c->r[7]; // 8025DD04
  c->r[6]=rotl(c->r[6],3)&0xFFFFFFFFu; // 8025DD08
  c->r[6]=c->r[6]+c->r[7]; // 8025DD0C
  c->r[11]=R16(c->r[26]+0x0000001Eu); // 8025DD10
  c->r[9]=rotl(c->r[6],1)&0xFFFFFFFEu; // 8025DD14
  c->r[7]=rotl(c->r[8],1)&0x00000001u; // 8025DD18
  c->r[12]=rotl(c->r[11],2)&0xFFFFFFE0u; // 8025DD1C
  c->r[11]=rotl(c->r[11],3)&0x00000001u; // 8025DD20
  c->r[11]=c->r[11]+c->r[12]; // 8025DD24
  c->r[6]=rotl(c->r[8],29)&0xE0000000u; // 8025DD28
  c->r[11]=sraw(c,c->r[11],1); // 8025DD2C
  c->r[10]=sraw(c,c->r[10],3); // 8025DD30
  c->r[6]=c->r[6]-c->r[7]; // 8025DD34
  c->r[10]=addc(c,c->r[10],0,c->xer_ca); // 8025DD38
  c->r[6]=rotl(c->r[6],3)&0xFFFFFFFFu; // 8025DD3C
  c->r[6]=c->r[6]+c->r[7]; // 8025DD40
  c->r[10]=(uint32_t)((int32_t)c->r[11]*(int32_t)c->r[10]); // 8025DD44
  c->r[6]=rotl(c->r[6],1)&0xFFFFFFFEu; // 8025DD48
  c->r[7]=c->r[4]+c->r[10]; // 8025DD4C
  c->r[7]=c->r[7]+c->r[0]; // 8025DD50
  c->r[7]=c->r[7]+c->r[9]; // 8025DD54
  W16(c->r[7]+c->r[3],c->r[29]); // 8025DD58
  c->r[7]=R16(c->r[26]+0x0000001Eu); // 8025DD5C
  c->r[9]=rotl(c->r[7],2)&0xFFFFFFE0u; // 8025DD60
  c->r[7]=rotl(c->r[7],3)&0x00000001u; // 8025DD64
  c->r[7]=c->r[7]+c->r[9]; // 8025DD68
  c->r[9]=sraw(c,c->r[7],1); // 8025DD6C
  c->r[7]=sraw(c,c->r[8],3); // 8025DD70
  c->r[7]=addc(c,c->r[7],0,c->xer_ca); // 8025DD74
  c->r[7]=(uint32_t)((int32_t)c->r[9]*(int32_t)c->r[7]); // 8025DD78
  c->r[7]=c->r[4]+c->r[7]; // 8025DD7C
  c->r[7]=c->r[7]+c->r[0]; // 8025DD80
  c->r[7]=c->r[7]+c->r[6]; // 8025DD84
  W16(c->r[7]+c->r[3],c->r[30]); // 8025DD88
  c->r[7]=c->r[5]+0x00000007u; // 8025DD8C
  c->r[5]=rotl(c->r[7],29)&0xE0000000u; // 8025DD90
  c->r[8]=R16(c->r[26]+0x0000001Eu); // 8025DD94
  c->r[6]=rotl(c->r[7],1)&0x00000001u; // 8025DD98
  c->r[5]=c->r[5]-c->r[6]; // 8025DD9C
  c->r[9]=rotl(c->r[8],2)&0xFFFFFFE0u; // 8025DDA0
  c->r[8]=rotl(c->r[8],3)&0x00000001u; // 8025DDA4
  c->r[8]=c->r[8]+c->r[9]; // 8025DDA8
  c->r[5]=rotl(c->r[5],3)&0xFFFFFFFFu; // 8025DDAC
  c->r[8]=sraw(c,c->r[8],1); // 8025DDB0
  c->r[7]=sraw(c,c->r[7],3); // 8025DDB4
  c->r[5]=c->r[5]+c->r[6]; // 8025DDB8
  c->r[6]=addc(c,c->r[7],0,c->xer_ca); // 8025DDBC
  c->r[6]=(uint32_t)((int32_t)c->r[8]*(int32_t)c->r[6]); // 8025DDC0
  c->r[5]=rotl(c->r[5],1)&0xFFFFFFFEu; // 8025DDC4
  c->r[4]=c->r[4]+c->r[6]; // 8025DDC8
  c->r[4]=c->r[4]+c->r[0]; // 8025DDCC
  c->r[4]=c->r[4]+c->r[5]; // 8025DDD0
  W16(c->r[4]+c->r[3],c->r[31]); // 8025DDD4
L_8025DDD8:;
  c->r[3]=c->r[27]|c->r[27]; // 8025DDD8
L_8025DDDC:;
  c->r[11]=c->r[1]+0x00000030u; // 8025DDDC
  c->lr=0x8025DDE4u; { c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 8025DDE0
  c->r[0]=R32(c->r[1]+0x00000034u); // 8025DDE4
  c->lr=c->r[0]; // 8025DDE8
  c->r[1]=c->r[1]+0x00000030u; // 8025DDEC
  return; // 8025DDF0
}

// OSLoadFont
void f_8025DDF4(Ctx* __restrict c) {
  trace_call(0x8025DDF4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8025DDF4
  c->r[0]=c->lr; // 8025DDF8
  c->r[5]=c->r[3]|c->r[3]; // 8025DDFC
  W32(c->r[1]+0x00000014u,c->r[0]); // 8025DE00
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8025DE04
  W32(c->r[1]+0x00000008u,c->r[30]); // 8025DE08
  c->r[30]=c->r[4]|c->r[4]; // 8025DE0C
  c->r[0]=R16(c->r[13]+0xFFFF8DF0u); // 8025DE10
  cmpu(c,0,c->r[0],0x0000FFFFu); // 8025DE14
  if (crb(c,2)) { goto L_8025DE20; } // 8025DE18
  goto L_8025DE64; // 8025DE1C
L_8025DE20:;
  c->r[4]=0u+0x80000000u; // 8025DE20
  c->r[0]=R32(c->r[4]+0x000000CCu); // 8025DE24
  cmps(c,0,(int32_t)c->r[0],0); // 8025DE28
  if (crb(c,2)) { goto L_8025DE38; } // 8025DE2C
  if (crb(c,0)) { goto L_8025DE4C; } // 8025DE30
  goto L_8025DE4C; // 8025DE34
L_8025DE38:;
  c->r[4]=0u+0xCC000000u; // 8025DE38
  c->r[0]=R16(c->r[4]+0x0000206Eu); // 8025DE3C
  c->r[0]=rotl(c->r[0],31)&0x00000001u; // 8025DE40
  W16(c->r[13]+0xFFFF8DF0u,c->r[0]); // 8025DE44
  goto L_8025DE54; // 8025DE48
L_8025DE4C:;
  c->r[0]=0u+0x00000000u; // 8025DE4C
  W16(c->r[13]+0xFFFF8DF0u,c->r[0]); // 8025DE50
L_8025DE54:;
  c->r[4]=0u+0x80260000u; // 8025DE54
  c->r[0]=rotl(c->r[0],0)&0x0000FFFFu; // 8025DE58
  c->r[4]=c->r[4]+0xFFFFDF1Cu; // 8025DE5C
  W32(c->r[13]+0xFFFF9860u,c->r[4]); // 8025DE60
L_8025DE64:;
  c->r[0]=rotl(c->r[0],0)&0x0000FFFFu; // 8025DE64
  cmps(c,0,(int32_t)c->r[0],2); // 8025DE68
  if (crb(c,2)) { goto L_8025DEFC; } // 8025DE6C
  if (!crb(c,0)) { goto L_8025DE84; } // 8025DE70
  cmps(c,0,(int32_t)c->r[0],0); // 8025DE74
  if (crb(c,2)) { goto L_8025DE90; } // 8025DE78
  if (!crb(c,0)) { goto L_8025DEA8; } // 8025DE7C
  goto L_8025DEFC; // 8025DE80
L_8025DE84:;
  cmps(c,0,(int32_t)c->r[0],6); // 8025DE84
  if (!crb(c,0)) { goto L_8025DEFC; } // 8025DE88
  goto L_8025DEC0; // 8025DE8C
L_8025DE90:;
  W32(c->r[13]+0xFFFF986Cu,c->r[3]); // 8025DE90
  c->r[3]=c->r[30]|c->r[30]; // 8025DE94
  c->r[4]=0u+0x00000000u; // 8025DE98
  c->lr=0x8025DEA0u; f_8025DAF4(c); // 8025DE9C
  c->r[31]=c->r[3]|c->r[3]; // 8025DEA0
  goto L_8025DF00; // 8025DEA4
L_8025DEA8:;
  W32(c->r[13]+0xFFFF9868u,c->r[3]); // 8025DEA8
  c->r[3]=c->r[30]|c->r[30]; // 8025DEAC
  c->r[4]=0u+0x00000001u; // 8025DEB0
  c->lr=0x8025DEB8u; f_8025DAF4(c); // 8025DEB4
  c->r[31]=c->r[3]|c->r[3]; // 8025DEB8
  goto L_8025DF00; // 8025DEBC
L_8025DEC0:;
  W32(c->r[13]+0xFFFF986Cu,c->r[3]); // 8025DEC0
  c->r[3]=c->r[30]|c->r[30]; // 8025DEC4
  c->r[4]=0u+0x00000000u; // 8025DEC8
  c->lr=0x8025DED0u; f_8025DAF4(c); // 8025DECC
  cmps(c,0,(int32_t)c->r[3],0); // 8025DED0
  c->r[31]=c->r[3]|c->r[3]; // 8025DED4
  if (crb(c,2)) { goto L_8025DF00; } // 8025DED8
  c->r[0]=R32(c->r[13]+0xFFFF986Cu); // 8025DEDC
  c->r[4]=0u+0x00000001u; // 8025DEE0
  c->r[5]=c->r[0]+c->r[3]; // 8025DEE4
  c->r[3]=c->r[30]|c->r[30]; // 8025DEE8
  W32(c->r[13]+0xFFFF9868u,c->r[5]); // 8025DEEC
  c->lr=0x8025DEF4u; f_8025DAF4(c); // 8025DEF0
  c->r[31]=c->r[31]+c->r[3]; // 8025DEF4
  goto L_8025DF00; // 8025DEF8
L_8025DEFC:;
  c->r[31]=0u+0x00000000u; // 8025DEFC
L_8025DF00:;
  c->r[3]=c->r[31]|c->r[31]; // 8025DF00
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8025DF04
  c->r[30]=R32(c->r[1]+0x00000008u); // 8025DF08
  c->r[0]=R32(c->r[1]+0x00000014u); // 8025DF0C
  c->lr=c->r[0]; // 8025DF10
  c->r[1]=c->r[1]+0x00000010u; // 8025DF14
  return; // 8025DF18
}

// ParseStringS
void f_8025DF1C(Ctx* __restrict c) {
  trace_call(0x8025DF1Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8025DF1C
  c->r[0]=c->lr; // 8025DF20
  cmps(c,0,(int32_t)c->r[3],1); // 8025DF24
  c->r[7]=0u+0x00000000u; // 8025DF28
  W32(c->r[1]+0x00000014u,c->r[0]); // 8025DF2C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8025DF30
  c->r[31]=c->r[6]|c->r[6]; // 8025DF34
  W32(c->r[1]+0x00000008u,c->r[30]); // 8025DF38
  c->r[30]=c->r[4]|c->r[4]; // 8025DF3C
  if (crb(c,2)) { goto L_8025DF6C; } // 8025DF40
  if (!crb(c,0)) { goto L_8025DFEC; } // 8025DF44
  cmps(c,0,(int32_t)c->r[3],0); // 8025DF48
  if (!crb(c,0)) { goto L_8025DF54; } // 8025DF4C
  goto L_8025DFEC; // 8025DF50
L_8025DF54:;
  c->r[7]=R8(c->r[4]+0x00000000u); // 8025DF54
  c->r[6]=R32(c->r[13]+0xFFFF986Cu); // 8025DF58
  cmps(c,0,(int32_t)c->r[7],0); // 8025DF5C
  if (crb(c,2)) { goto L_8025DFEC; } // 8025DF60
  c->r[30]=c->r[4]+0x00000001u; // 8025DF64
  goto L_8025DFEC; // 8025DF68
L_8025DF6C:;
  c->r[7]=R8(c->r[4]+0x00000000u); // 8025DF6C
  c->r[6]=R32(c->r[13]+0xFFFF9868u); // 8025DF70
  cmps(c,0,(int32_t)c->r[7],0); // 8025DF74
  if (crb(c,2)) { goto L_8025DFEC; } // 8025DF78
  cmpu(c,0,c->r[7],0x00000081u); // 8025DF7C
  c->r[30]=c->r[4]+0x00000001u; // 8025DF80
  c->r[0]=0u+0x00000000u; // 8025DF84
  if (crb(c,0)) { goto L_8025DF94; } // 8025DF88
  cmpu(c,0,c->r[7],0x0000009Fu); // 8025DF8C
  if (!crb(c,1)) { goto L_8025DFA4; } // 8025DF90
L_8025DF94:;
  cmpu(c,0,c->r[7],0x000000E0u); // 8025DF94
  if (crb(c,0)) { goto L_8025DFA8; } // 8025DF98
  cmpu(c,0,c->r[7],0x000000FCu); // 8025DF9C
  if (crb(c,1)) { goto L_8025DFA8; } // 8025DFA0
L_8025DFA4:;
  c->r[0]=0u+0x00000001u; // 8025DFA4
L_8025DFA8:;
  cmps(c,0,(int32_t)c->r[0],0); // 8025DFA8
  if (crb(c,2)) { goto L_8025DFEC; } // 8025DFAC
  c->r[4]=R8(c->r[30]+0x00000000u); // 8025DFB0
  c->r[0]=0u+0x00000000u; // 8025DFB4
  cmpu(c,0,c->r[4],0x00000040u); // 8025DFB8
  if (crb(c,0)) { goto L_8025DFD4; } // 8025DFBC
  cmpu(c,0,c->r[4],0x000000FCu); // 8025DFC0
  if (crb(c,1)) { goto L_8025DFD4; } // 8025DFC4
  cmpu(c,0,c->r[4],0x0000007Fu); // 8025DFC8
  if (crb(c,2)) { goto L_8025DFD4; } // 8025DFCC
  c->r[0]=0u+0x00000001u; // 8025DFD0
L_8025DFD4:;
  cmps(c,0,(int32_t)c->r[0],0); // 8025DFD4
  if (crb(c,2)) { goto L_8025DFEC; } // 8025DFD8
  c->r[0]=R8(c->r[30]+0x00000000u); // 8025DFDC
  c->r[0]=(rotl(c->r[7],8)&0x00FFFF00u)|(c->r[0]&~0x00FFFF00u); // 8025DFE0
  c->r[30]=c->r[30]+0x00000001u; // 8025DFE4
  c->r[7]=rotl(c->r[0],0)&0x0000FFFFu; // 8025DFE8
L_8025DFEC:;
  W32(c->r[5]+0x00000000u,c->r[6]); // 8025DFEC
  c->r[4]=c->r[7]|c->r[7]; // 8025DFF0
  c->lr=0x8025DFF8u; f_8025D748(c); // 8025DFF4
  W32(c->r[31]+0x00000000u,c->r[3]); // 8025DFF8
  c->r[3]=c->r[30]|c->r[30]; // 8025DFFC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8025E000
  c->r[30]=R32(c->r[1]+0x00000008u); // 8025E004
  c->r[0]=R32(c->r[1]+0x00000014u); // 8025E008
  c->lr=c->r[0]; // 8025E00C
  c->r[1]=c->r[1]+0x00000010u; // 8025E010
  return; // 8025E014
}

// ParseStringW
void f_8025E018(Ctx* __restrict c) {
  trace_call(0x8025E018u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8025E018
  c->r[0]=c->lr; // 8025E01C
  W32(c->r[1]+0x00000034u,c->r[0]); // 8025E020
  c->r[11]=c->r[1]+0x00000030u; // 8025E024
  c->lr=0x8025E02Cu; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 8025E028
  c->r[30]=0u+0x00000000u; // 8025E02C
  cmps(c,0,(int32_t)c->r[3],3); // 8025E030
  W32(c->r[1]+0x00000008u,c->r[30]); // 8025E034
  c->r[26]=c->r[3]|c->r[3]; // 8025E038
  c->r[27]=c->r[4]|c->r[4]; // 8025E03C
  c->r[28]=c->r[5]|c->r[5]; // 8025E040
  c->r[29]=c->r[6]|c->r[6]; // 8025E044
  if (crb(c,2)) { goto L_8025E114; } // 8025E048
  if (!crb(c,0)) { goto L_8025E068; } // 8025E04C
  cmps(c,0,(int32_t)c->r[3],1); // 8025E050
  if (crb(c,2)) { goto L_8025E090; } // 8025E054
  if (!crb(c,0)) { goto L_8025E150; } // 8025E058
  cmps(c,0,(int32_t)c->r[3],0); // 8025E05C
  if (!crb(c,0)) { goto L_8025E078; } // 8025E060
  goto L_8025E150; // 8025E064
L_8025E068:;
  cmps(c,0,(int32_t)c->r[3],5); // 8025E068
  if (crb(c,2)) { goto L_8025E13C; } // 8025E06C
  if (!crb(c,0)) { goto L_8025E150; } // 8025E070
  goto L_8025E128; // 8025E074
L_8025E078:;
  c->r[30]=R8(c->r[4]+0x00000000u); // 8025E078
  c->r[31]=R32(c->r[13]+0xFFFF986Cu); // 8025E07C
  cmps(c,0,(int32_t)c->r[30],0); // 8025E080
  if (crb(c,2)) { goto L_8025E150; } // 8025E084
  c->r[27]=c->r[4]+0x00000001u; // 8025E088
  goto L_8025E150; // 8025E08C
L_8025E090:;
  c->r[30]=R8(c->r[4]+0x00000000u); // 8025E090
  c->r[31]=R32(c->r[13]+0xFFFF9868u); // 8025E094
  cmps(c,0,(int32_t)c->r[30],0); // 8025E098
  if (crb(c,2)) { goto L_8025E150; } // 8025E09C
  cmpu(c,0,c->r[30],0x00000081u); // 8025E0A0
  c->r[27]=c->r[4]+0x00000001u; // 8025E0A4
  c->r[0]=0u+0x00000000u; // 8025E0A8
  if (crb(c,0)) { goto L_8025E0B8; } // 8025E0AC
  cmpu(c,0,c->r[30],0x0000009Fu); // 8025E0B0
  if (!crb(c,1)) { goto L_8025E0C8; } // 8025E0B4
L_8025E0B8:;
  cmpu(c,0,c->r[30],0x000000E0u); // 8025E0B8
  if (crb(c,0)) { goto L_8025E0CC; } // 8025E0BC
  cmpu(c,0,c->r[30],0x000000FCu); // 8025E0C0
  if (crb(c,1)) { goto L_8025E0CC; } // 8025E0C4
L_8025E0C8:;
  c->r[0]=0u+0x00000001u; // 8025E0C8
L_8025E0CC:;
  cmps(c,0,(int32_t)c->r[0],0); // 8025E0CC
  if (crb(c,2)) { goto L_8025E150; } // 8025E0D0
  c->r[3]=R8(c->r[27]+0x00000000u); // 8025E0D4
  c->r[0]=0u+0x00000000u; // 8025E0D8
  cmpu(c,0,c->r[3],0x00000040u); // 8025E0DC
  if (crb(c,0)) { goto L_8025E0F8; } // 8025E0E0
  cmpu(c,0,c->r[3],0x000000FCu); // 8025E0E4
  if (crb(c,1)) { goto L_8025E0F8; } // 8025E0E8
  cmpu(c,0,c->r[3],0x0000007Fu); // 8025E0EC
  if (crb(c,2)) { goto L_8025E0F8; } // 8025E0F0
  c->r[0]=0u+0x00000001u; // 8025E0F4
L_8025E0F8:;
  cmps(c,0,(int32_t)c->r[0],0); // 8025E0F8
  if (crb(c,2)) { goto L_8025E150; } // 8025E0FC
  c->r[0]=R8(c->r[27]+0x00000000u); // 8025E100
  c->r[0]=(rotl(c->r[30],8)&0x00FFFF00u)|(c->r[0]&~0x00FFFF00u); // 8025E104
  c->r[27]=c->r[27]+0x00000001u; // 8025E108
  c->r[30]=rotl(c->r[0],0)&0x0000FFFFu; // 8025E10C
  goto L_8025E150; // 8025E110
L_8025E114:;
  c->r[3]=c->r[27]|c->r[27]; // 8025E114
  c->r[4]=c->r[1]+0x00000008u; // 8025E118
  c->lr=0x8025E120u; f_80262B94(c); // 8025E11C
  c->r[27]=c->r[3]|c->r[3]; // 8025E120
  goto L_8025E150; // 8025E124
L_8025E128:;
  c->r[3]=c->r[27]|c->r[27]; // 8025E128
  c->r[4]=c->r[1]+0x00000008u; // 8025E12C
  c->lr=0x8025E134u; f_80262CA4(c); // 8025E130
  c->r[27]=c->r[3]|c->r[3]; // 8025E134
  goto L_8025E150; // 8025E138
L_8025E13C:;
  c->r[0]=R32(c->r[4]+0x00000000u); // 8025E13C
  cmps(c,0,(int32_t)c->r[0],0); // 8025E140
  W32(c->r[1]+0x00000008u,c->r[0]); // 8025E144
  if (crb(c,2)) { goto L_8025E150; } // 8025E148
  c->r[27]=c->r[4]+0x00000004u; // 8025E14C
L_8025E150:;
  c->r[3]=R32(c->r[1]+0x00000008u); // 8025E150
  cmps(c,0,(int32_t)c->r[3],0); // 8025E154
  if (crb(c,2)) { goto L_8025E1A4; } // 8025E158
  c->r[31]=R32(c->r[13]+0xFFFF986Cu); // 8025E15C
  c->r[26]=0u+0x00000000u; // 8025E160
  c->lr=0x8025E168u; f_80262D14(c); // 8025E164
  c->r[30]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[30]); // 8025E168
  if (crb(c,2)) { goto L_8025E188; } // 8025E16C
  c->r[0]=R32(c->r[13]+0xFFFF9864u); // 8025E170
  cmps(c,0,(int32_t)c->r[0],0); // 8025E174
  if (crb(c,2)) { goto L_8025E1A4; } // 8025E178
  c->r[0]=R32(c->r[1]+0x00000008u); // 8025E17C
  cmpu(c,0,c->r[0],0x0000007Fu); // 8025E180
  if (crb(c,1)) { goto L_8025E1A4; } // 8025E184
L_8025E188:;
  c->r[3]=R32(c->r[1]+0x00000008u); // 8025E188
  c->lr=0x8025E190u; f_80262D8C(c); // 8025E18C
  c->r[0]=rotl(c->r[3],0)&0x0000FFFFu; cr0(c,c->r[0]); // 8025E190
  c->r[30]=c->r[3]|c->r[3]; // 8025E194
  if (crb(c,2)) { goto L_8025E1A4; } // 8025E198
  c->r[26]=0u+0x00000001u; // 8025E19C
  c->r[31]=R32(c->r[13]+0xFFFF9868u); // 8025E1A0
L_8025E1A4:;
  W32(c->r[28]+0x00000000u,c->r[31]); // 8025E1A4
  c->r[3]=c->r[26]|c->r[26]; // 8025E1A8
  c->r[4]=rotl(c->r[30],0)&0x0000FFFFu; // 8025E1AC
  c->lr=0x8025E1B4u; f_8025D748(c); // 8025E1B0
  W32(c->r[29]+0x00000000u,c->r[3]); // 8025E1B4
  c->r[11]=c->r[1]+0x00000030u; // 8025E1B8
  c->r[3]=c->r[27]|c->r[27]; // 8025E1BC
  c->lr=0x8025E1C4u; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 8025E1C0
  c->r[0]=R32(c->r[1]+0x00000034u); // 8025E1C4
  c->lr=c->r[0]; // 8025E1C8
  c->r[1]=c->r[1]+0x00000030u; // 8025E1CC
  return; // 8025E1D0
}

// OSGetFontTexel
void f_8025E1D4(Ctx* __restrict c) {
  trace_call(0x8025E1D4u);
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8025E1D4
  c->r[0]=c->lr; // 8025E1D8
  W32(c->r[1]+0x00000054u,c->r[0]); // 8025E1DC
  c->r[11]=c->r[1]+0x00000050u; // 8025E1E0
  c->lr=0x8025E1E8u; { W32(c->r[11]+0xFFFFFFC4u,c->r[17]); W32(c->r[11]+0xFFFFFFC8u,c->r[18]); W32(c->r[11]+0xFFFFFFCCu,c->r[19]); W32(c->r[11]+0xFFFFFFD0u,c->r[20]); W32(c->r[11]+0xFFFFFFD4u,c->r[21]); W32(c->r[11]+0xFFFFFFD8u,c->r[22]); W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 8025E1E4
  c->r[0]=R16(c->r[13]+0xFFFF8DF0u); // 8025E1E8
  c->r[29]=c->r[4]|c->r[4]; // 8025E1EC
  c->r[30]=c->r[5]|c->r[5]; // 8025E1F0
  c->r[17]=c->r[6]|c->r[6]; // 8025E1F4
  cmpu(c,0,c->r[0],0x0000FFFFu); // 8025E1F8
  c->r[31]=c->r[7]|c->r[7]; // 8025E1FC
  if (crb(c,2)) { goto L_8025E208; } // 8025E200
  goto L_8025E24C; // 8025E204
L_8025E208:;
  c->r[4]=0u+0x80000000u; // 8025E208
  c->r[0]=R32(c->r[4]+0x000000CCu); // 8025E20C
  cmps(c,0,(int32_t)c->r[0],0); // 8025E210
  if (crb(c,2)) { goto L_8025E220; } // 8025E214
  if (crb(c,0)) { goto L_8025E234; } // 8025E218
  goto L_8025E234; // 8025E21C
L_8025E220:;
  c->r[4]=0u+0xCC000000u; // 8025E220
  c->r[0]=R16(c->r[4]+0x0000206Eu); // 8025E224
  c->r[0]=rotl(c->r[0],31)&0x00000001u; // 8025E228
  W16(c->r[13]+0xFFFF8DF0u,c->r[0]); // 8025E22C
  goto L_8025E23C; // 8025E230
L_8025E234:;
  c->r[0]=0u+0x00000000u; // 8025E234
  W16(c->r[13]+0xFFFF8DF0u,c->r[0]); // 8025E238
L_8025E23C:;
  c->r[4]=0u+0x80260000u; // 8025E23C
  c->r[0]=rotl(c->r[0],0)&0x0000FFFFu; // 8025E240
  c->r[4]=c->r[4]+0xFFFFDF1Cu; // 8025E244
  W32(c->r[13]+0xFFFF9860u,c->r[4]); // 8025E248
L_8025E24C:;
  c->r[12]=R32(c->r[13]+0xFFFF9860u); // 8025E24C
  c->r[4]=c->r[3]|c->r[3]; // 8025E250
  c->r[3]=rotl(c->r[0],0)&0x0000FFFFu; // 8025E254
  c->r[5]=c->r[1]+0x0000000Cu; // 8025E258
  c->r[6]=c->r[1]+0x00000008u; // 8025E25C
  c->ctr=c->r[12]; // 8025E260
  if (true) { c->lr=0x8025E268u; dispatch(c,c->ctr); } // 8025E264
  c->r[4]=R32(c->r[1]+0x0000000Cu); // 8025E268
  c->r[0]=rotl(c->r[17],2)&0xFFFFFFFCu; // 8025E26C
  c->r[0]=sraw(c,c->r[0],3); // 8025E270
  c->r[11]=R32(c->r[1]+0x00000008u); // 8025E274
  c->r[9]=R16(c->r[4]+0x0000001Au); // 8025E278
  c->r[0]=addc(c,c->r[0],0,c->xer_ca); // 8025E27C
  c->r[5]=R16(c->r[4]+0x0000001Cu); // 8025E280
  c->r[8]=rotl(c->r[0],5)&0xFFFFFFE0u; // 8025E284
  c->r[6]=R32(c->r[4]+0x00000024u); // 8025E288
  c->r[23]=c->r[4]+0x0000002Cu; // 8025E28C
  c->r[10]=(uint32_t)((int32_t)c->r[9]*(int32_t)c->r[5]); // 8025E290
  c->r[5]=R32(c->r[4]+0x00000014u); // 8025E294
  c->r[22]=c->r[4]+c->r[6]; // 8025E298
  c->r[7]=R16(c->r[4]+0x00000012u); // 8025E29C
  c->r[6]=R16(c->r[4]+0x00000010u); // 8025E2A0
  c->r[24]=0u+0x00000000u; // 8025E2A4
  c->r[12]=divw((int32_t)c->r[11],(int32_t)c->r[10]); // 8025E2A8
  c->r[0]=(uint32_t)((int32_t)c->r[12]*(int32_t)c->r[10]); // 8025E2AC
  c->r[11]=c->r[11]-c->r[0]; // 8025E2B0
  c->r[10]=divw((int32_t)c->r[11],(int32_t)c->r[9]); // 8025E2B4
  c->r[9]=(uint32_t)((int32_t)c->r[10]*(int32_t)c->r[9]); // 8025E2B8
  c->r[0]=(uint32_t)((int32_t)c->r[12]*(int32_t)c->r[5]); // 8025E2BC
  c->r[26]=c->r[11]-c->r[9]; // 8025E2C0
  c->r[0]=rotl(c->r[0],31)&0x7FFFFFFFu; // 8025E2C4
  c->r[27]=(uint32_t)((int32_t)c->r[10]*(int32_t)c->r[7]); // 8025E2C8
  c->r[22]=c->r[22]+c->r[0]; // 8025E2CC
  c->r[26]=(uint32_t)((int32_t)c->r[26]*(int32_t)c->r[6]); // 8025E2D0
  goto L_8025E420; // 8025E2D4
L_8025E2D8:;
  c->r[7]=c->r[27]+c->r[24]; // 8025E2D8
  c->r[0]=rotl(c->r[24],29)&0xE0000000u; // 8025E2DC
  c->r[5]=sraw(c,c->r[7],3); // 8025E2E0
  c->r[4]=rotl(c->r[24],1)&0x00000001u; // 8025E2E4
  c->r[9]=addc(c,c->r[5],0,c->xer_ca); // 8025E2E8
  c->r[6]=rotl(c->r[7],29)&0xE0000000u; // 8025E2EC
  c->r[5]=sraw(c,c->r[24],3); // 8025E2F0
  c->r[7]=rotl(c->r[7],1)&0x00000001u; // 8025E2F4
  c->r[5]=addc(c,c->r[5],0,c->xer_ca); // 8025E2F8
  c->r[0]=c->r[0]-c->r[4]; // 8025E2FC
  c->r[5]=(uint32_t)((int32_t)c->r[5]*(int32_t)c->r[8]); // 8025E300
  c->r[6]=c->r[6]-c->r[7]; // 8025E304
  c->r[0]=rotl(c->r[0],3)&0xFFFFFFFFu; // 8025E308
  c->r[6]=rotl(c->r[6],3)&0xFFFFFFFFu; // 8025E30C
  c->r[0]=c->r[0]+c->r[4]; // 8025E310
  c->r[4]=c->r[6]+c->r[7]; // 8025E314
  c->r[10]=rotl(c->r[4],1)&0xFFFFFFFEu; // 8025E318
  c->r[11]=c->r[29]+c->r[5]; // 8025E31C
  c->r[12]=rotl(c->r[0],2)&0xFFFFFFFCu; // 8025E320
  c->r[25]=0u+0x00000000u; // 8025E324
  goto L_8025E40C; // 8025E328
L_8025E32C:;
  c->r[4]=R16(c->r[4]+0x0000001Eu); // 8025E32C
  c->r[28]=c->r[30]+c->r[25]; // 8025E330
  c->r[5]=c->r[26]+c->r[25]; // 8025E334
  c->r[0]=0u+0x000000F0u; // 8025E338
  c->r[6]=rotl(c->r[4],2)&0xFFFFFFE0u; // 8025E33C
  c->r[4]=rotl(c->r[4],3)&0x00000001u; // 8025E340
  c->r[4]=c->r[4]+c->r[6]; // 8025E344
  c->r[20]=rotl(c->r[28],29)&0xE0000000u; // 8025E348
  c->r[7]=sraw(c,c->r[4],1); // 8025E34C
  c->r[19]=rotl(c->r[28],1)&0x00000001u; // 8025E350
  c->r[7]=(uint32_t)((int32_t)c->r[7]*(int32_t)c->r[9]); // 8025E354
  c->r[6]=rotl(c->r[5],29)&0xE0000000u; // 8025E358
  c->r[4]=rotl(c->r[5],1)&0x00000001u; // 8025E35C
  c->r[18]=sraw(c,c->r[5],3); // 8025E360
  c->r[6]=c->r[6]-c->r[4]; // 8025E364
  c->r[21]=rotl(c->r[28],0)&0x00000001u; // 8025E368
  c->r[17]=rotl(c->r[6],3)&0xFFFFFFFFu; // 8025E36C
  c->r[6]=addc(c,c->r[18],0,c->xer_ca); // 8025E370
  c->r[17]=c->r[17]+c->r[4]; // 8025E374
  c->r[20]=c->r[20]-c->r[19]; // 8025E378
  c->r[21]=c->r[21]^c->r[19]; // 8025E37C
  c->r[5]=rotl(c->r[5],30)&0xC0000000u; // 8025E380
  c->r[18]=sraw(c,c->r[17],2); // 8025E384
  c->r[20]=rotl(c->r[20],3)&0xFFFFFFFFu; // 8025E388
  c->r[17]=c->r[5]-c->r[4]; // 8025E38C
  c->r[21]=c->r[21]-c->r[19]; cr0(c,c->r[21]); // 8025E390
  c->r[5]=addc(c,c->r[18],0,c->xer_ca); // 8025E394
  c->r[20]=c->r[20]+c->r[19]; // 8025E398
  c->r[18]=sraw(c,c->r[28],3); // 8025E39C
  c->r[17]=rotl(c->r[17],2)&0xFFFFFFFFu; // 8025E3A0
  c->r[7]=c->r[22]+c->r[7]; // 8025E3A4
  c->r[6]=rotl(c->r[6],4)&0xFFFFFFF0u; // 8025E3A8
  c->r[7]=c->r[7]+c->r[6]; // 8025E3AC
  c->r[19]=addc(c,c->r[18],0,c->xer_ca); // 8025E3B0
  c->r[7]=c->r[7]+c->r[10]; // 8025E3B4
  c->r[21]=rotl(c->r[20],1)&0x00000001u; // 8025E3B8
  c->r[28]=c->r[17]+c->r[4]; // 8025E3BC
  c->r[6]=rotl(c->r[19],5)&0xFFFFFFE0u; // 8025E3C0
  c->r[4]=c->r[21]+c->r[20]; // 8025E3C4
  c->r[7]=R8(c->r[7]+c->r[5]); // 8025E3C8
  c->r[6]=c->r[11]+c->r[6]; // 8025E3CC
  c->r[21]=rotl(c->r[28],1)&0xFFFFFFFEu; // 8025E3D0
  c->r[4]=sraw(c,c->r[4],1); // 8025E3D4
  c->r[5]=addc(c,~c->r[21],0x00000006u,1); // 8025E3D8
  c->r[6]=c->r[6]+c->r[12]; // 8025E3DC
  c->r[5]=sraw(c,c->r[7],(c->r[5])&63); // 8025E3E0
  c->r[7]=R8(c->r[6]+c->r[4]); // 8025E3E4
  c->r[5]=rotl(c->r[5],0)&0x00000003u; // 8025E3E8
  c->r[5]=R8(c->r[23]+c->r[5]); // 8025E3EC
  if (crb(c,2)) { goto L_8025E3F8; } // 8025E3F0
  c->r[0]=0u+0x0000000Fu; // 8025E3F4
L_8025E3F8:;
  c->r[0]=c->r[5]&c->r[0]; // 8025E3F8
  c->r[25]=c->r[25]+0x00000001u; // 8025E3FC
  c->r[0]=rotl(c->r[0],0)&0x000000FFu; // 8025E400
  c->r[0]=c->r[7]|c->r[0]; // 8025E404
  W8(c->r[6]+c->r[4],c->r[0]); // 8025E408
L_8025E40C:;
  c->r[4]=R32(c->r[1]+0x0000000Cu); // 8025E40C
  c->r[0]=R16(c->r[4]+0x00000010u); // 8025E410
  cmps(c,0,(int32_t)c->r[25],(int32_t)c->r[0]); // 8025E414
  if (crb(c,0)) { IRQCHK(c); goto L_8025E32C; } // 8025E418
  c->r[24]=c->r[24]+0x00000001u; // 8025E41C
L_8025E420:;
  c->r[0]=R16(c->r[4]+0x00000012u); // 8025E420
  cmps(c,0,(int32_t)c->r[24],(int32_t)c->r[0]); // 8025E424
  if (crb(c,0)) { IRQCHK(c); goto L_8025E2D8; } // 8025E428
  cmps(c,0,(int32_t)c->r[31],0); // 8025E42C
  if (crb(c,2)) { goto L_8025E44C; } // 8025E430
  c->r[5]=R32(c->r[1]+0x0000000Cu); // 8025E434
  c->r[4]=R32(c->r[1]+0x00000008u); // 8025E438
  c->r[0]=R16(c->r[5]+0x00000022u); // 8025E43C
  c->r[0]=c->r[5]+c->r[0]; // 8025E440
  c->r[0]=R8(c->r[4]+c->r[0]); // 8025E444
  W32(c->r[31]+0x00000000u,c->r[0]); // 8025E448
L_8025E44C:;
  c->r[11]=c->r[1]+0x00000050u; // 8025E44C
  c->lr=0x8025E454u; { c->r[17]=R32(c->r[11]+0xFFFFFFC4u); c->r[18]=R32(c->r[11]+0xFFFFFFC8u); c->r[19]=R32(c->r[11]+0xFFFFFFCCu); c->r[20]=R32(c->r[11]+0xFFFFFFD0u); c->r[21]=R32(c->r[11]+0xFFFFFFD4u); c->r[22]=R32(c->r[11]+0xFFFFFFD8u); c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 8025E450
  c->r[0]=R32(c->r[1]+0x00000054u); // 8025E454
  c->lr=c->r[0]; // 8025E458
  c->r[1]=c->r[1]+0x00000050u; // 8025E45C
  return; // 8025E460
}

// ExpandFontSheet
void f_8025E464(Ctx* __restrict c) {
  trace_call(0x8025E464u);
  c->r[0]=R16(c->r[3]+0x00000018u); // 8025E464
  c->r[6]=c->r[3]+0x0000002Cu; // 8025E468
  cmps(c,0,(int32_t)c->r[0],0); // 8025E46C
  if (!crb(c,2)) { goto L_8025E59C; } // 8025E470
  c->r[7]=R32(c->r[3]+0x00000028u); // 8025E474
  c->r[0]=rotl(c->r[7],1)&0x00000001u; // 8025E478
  c->r[0]=c->r[0]+c->r[7]; // 8025E47C
  c->r[7]=sraw(c,c->r[0],1); // 8025E480
  c->r[8]=addc(c,c->r[7],0xFFFFFFFFu,0); cr0(c,c->r[8]); // 8025E484
  c->r[7]=c->r[4]+c->r[8]; // 8025E488
  c->r[9]=rotl(c->r[8],1)&0xFFFFFFFEu; // 8025E48C
  c->r[4]=c->r[8]+0x00000001u; // 8025E490
  if (crb(c,0)) { goto L_8025E6C4; } // 8025E494
  c->r[0]=rotl(c->r[4],31)&0x7FFFFFFFu; cr0(c,c->r[0]); // 8025E498
  c->ctr=c->r[0]; // 8025E49C
  if (crb(c,2)) { goto L_8025E544; } // 8025E4A0
L_8025E4A4:;
  c->r[0]=R8(c->r[7]+0x00000000u); // 8025E4A4
  c->r[10]=c->r[5]+c->r[9]; // 8025E4A8
  c->r[8]=rotl(c->r[0],26)&0x00000003u; // 8025E4AC
  c->r[0]=rotl(c->r[0],28)&0x00000003u; // 8025E4B0
  c->r[0]=R8(c->r[6]+c->r[0]); // 8025E4B4
  c->r[8]=R8(c->r[6]+c->r[8]); // 8025E4B8
  c->r[0]=rotl(c->r[0],0)&0x0000000Fu; // 8025E4BC
  c->r[0]=(rotl(c->r[8],0)&0x000000F0u)|(c->r[0]&~0x000000F0u); // 8025E4C0
  W8(c->r[5]+c->r[9],c->r[0]); // 8025E4C4
  c->r[9]=c->r[9]+0xFFFFFFFEu; // 8025E4C8
  c->r[0]=R8(c->r[7]+0x00000000u); // 8025E4CC
  c->r[8]=rotl(c->r[0],30)&0x00000003u; // 8025E4D0
  c->r[0]=rotl(c->r[0],0)&0x00000003u; // 8025E4D4
  c->r[0]=R8(c->r[6]+c->r[0]); // 8025E4D8
  c->r[8]=R8(c->r[6]+c->r[8]); // 8025E4DC
  c->r[0]=rotl(c->r[0],0)&0x0000000Fu; // 8025E4E0
  c->r[0]=(rotl(c->r[8],0)&0x000000F0u)|(c->r[0]&~0x000000F0u); // 8025E4E4
  W8(c->r[10]+0x00000001u,c->r[0]); // 8025E4E8
  c->r[10]=c->r[5]+c->r[9]; // 8025E4EC
  c->r[0]=R8(c->r[7]+0xFFFFFFFFu); // 8025E4F0
  c->r[8]=rotl(c->r[0],26)&0x00000003u; // 8025E4F4
  c->r[0]=rotl(c->r[0],28)&0x00000003u; // 8025E4F8
  c->r[0]=R8(c->r[6]+c->r[0]); // 8025E4FC
  c->r[8]=R8(c->r[6]+c->r[8]); // 8025E500
  c->r[0]=rotl(c->r[0],0)&0x0000000Fu; // 8025E504
  c->r[0]=(rotl(c->r[8],0)&0x000000F0u)|(c->r[0]&~0x000000F0u); // 8025E508
  W8(c->r[5]+c->r[9],c->r[0]); // 8025E50C
  c->r[9]=c->r[9]+0xFFFFFFFEu; // 8025E510
  c->r[0]=R8(c->r[7]+0xFFFFFFFFu); // 8025E514
  c->r[7]=c->r[7]+0xFFFFFFFEu; // 8025E518
  c->r[8]=rotl(c->r[0],30)&0x00000003u; // 8025E51C
  c->r[0]=rotl(c->r[0],0)&0x00000003u; // 8025E520
  c->r[0]=R8(c->r[6]+c->r[0]); // 8025E524
  c->r[8]=R8(c->r[6]+c->r[8]); // 8025E528
  c->r[0]=rotl(c->r[0],0)&0x0000000Fu; // 8025E52C
  c->r[0]=(rotl(c->r[8],0)&0x000000F0u)|(c->r[0]&~0x000000F0u); // 8025E530
  W8(c->r[10]+0x00000001u,c->r[0]); // 8025E534
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_8025E4A4; } // 8025E538
  c->r[4]=c->r[4]&0x00000001u; cr0(c,c->r[4]); // 8025E53C
  if (crb(c,2)) { goto L_8025E6C4; } // 8025E540
L_8025E544:;
  c->ctr=c->r[4]; // 8025E544
L_8025E548:;
  c->r[0]=R8(c->r[7]+0x00000000u); // 8025E548
  c->r[10]=c->r[5]+c->r[9]; // 8025E54C
  c->r[8]=rotl(c->r[0],26)&0x00000003u; // 8025E550
  c->r[0]=rotl(c->r[0],28)&0x00000003u; // 8025E554
  c->r[0]=R8(c->r[6]+c->r[0]); // 8025E558
  c->r[8]=R8(c->r[6]+c->r[8]); // 8025E55C
  c->r[0]=rotl(c->r[0],0)&0x0000000Fu; // 8025E560
  c->r[0]=(rotl(c->r[8],0)&0x000000F0u)|(c->r[0]&~0x000000F0u); // 8025E564
  W8(c->r[5]+c->r[9],c->r[0]); // 8025E568
  c->r[9]=c->r[9]+0xFFFFFFFEu; // 8025E56C
  c->r[0]=R8(c->r[7]+0x00000000u); // 8025E570
  c->r[7]=c->r[7]+0xFFFFFFFFu; // 8025E574
  c->r[8]=rotl(c->r[0],30)&0x00000003u; // 8025E578
  c->r[0]=rotl(c->r[0],0)&0x00000003u; // 8025E57C
  c->r[0]=R8(c->r[6]+c->r[0]); // 8025E580
  c->r[8]=R8(c->r[6]+c->r[8]); // 8025E584
  c->r[0]=rotl(c->r[0],0)&0x0000000Fu; // 8025E588
  c->r[0]=(rotl(c->r[8],0)&0x000000F0u)|(c->r[0]&~0x000000F0u); // 8025E58C
  W8(c->r[10]+0x00000001u,c->r[0]); // 8025E590
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_8025E548; } // 8025E594
  goto L_8025E6C4; // 8025E598
L_8025E59C:;
  cmpu(c,0,c->r[0],0x00000002u); // 8025E59C
  if (!crb(c,2)) { goto L_8025E6C4; } // 8025E5A0
  c->r[0]=R32(c->r[3]+0x00000028u); // 8025E5A4
  c->r[0]=sraw(c,c->r[0],2); // 8025E5A8
  c->r[7]=addc(c,c->r[0],0,c->xer_ca); // 8025E5AC
  c->r[9]=addc(c,c->r[7],0xFFFFFFFFu,0); cr0(c,c->r[9]); // 8025E5B0
  c->r[7]=c->r[4]+c->r[9]; // 8025E5B4
  c->r[8]=rotl(c->r[9],2)&0xFFFFFFFCu; // 8025E5B8
  c->r[4]=c->r[9]+0x00000001u; // 8025E5BC
  if (crb(c,0)) { goto L_8025E6C4; } // 8025E5C0
  c->r[0]=rotl(c->r[4],31)&0x7FFFFFFFu; cr0(c,c->r[0]); // 8025E5C4
  c->ctr=c->r[0]; // 8025E5C8
  if (crb(c,2)) { goto L_8025E670; } // 8025E5CC
L_8025E5D0:;
  c->r[0]=R8(c->r[7]+0x00000000u); // 8025E5D0
  c->r[9]=c->r[5]+c->r[8]; // 8025E5D4
  c->r[0]=rotl(c->r[0],26)&0x00000003u; // 8025E5D8
  c->r[0]=R8(c->r[6]+c->r[0]); // 8025E5DC
  W8(c->r[5]+c->r[8],c->r[0]); // 8025E5E0
  c->r[8]=c->r[8]+0xFFFFFFFCu; // 8025E5E4
  c->r[0]=R8(c->r[7]+0x00000000u); // 8025E5E8
  c->r[0]=rotl(c->r[0],28)&0x00000003u; // 8025E5EC
  c->r[0]=R8(c->r[6]+c->r[0]); // 8025E5F0
  W8(c->r[9]+0x00000001u,c->r[0]); // 8025E5F4
  c->r[0]=R8(c->r[7]+0x00000000u); // 8025E5F8
  c->r[0]=rotl(c->r[0],30)&0x00000003u; // 8025E5FC
  c->r[0]=R8(c->r[6]+c->r[0]); // 8025E600
  W8(c->r[9]+0x00000002u,c->r[0]); // 8025E604
  c->r[0]=R8(c->r[7]+0x00000000u); // 8025E608
  c->r[0]=rotl(c->r[0],0)&0x00000003u; // 8025E60C
  c->r[0]=R8(c->r[6]+c->r[0]); // 8025E610
  W8(c->r[9]+0x00000003u,c->r[0]); // 8025E614
  c->r[9]=c->r[5]+c->r[8]; // 8025E618
  c->r[0]=R8(c->r[7]+0xFFFFFFFFu); // 8025E61C
  c->r[0]=rotl(c->r[0],26)&0x00000003u; // 8025E620
  c->r[0]=R8(c->r[6]+c->r[0]); // 8025E624
  W8(c->r[5]+c->r[8],c->r[0]); // 8025E628
  c->r[8]=c->r[8]+0xFFFFFFFCu; // 8025E62C
  c->r[0]=R8(c->r[7]+0xFFFFFFFFu); // 8025E630
  c->r[0]=rotl(c->r[0],28)&0x00000003u; // 8025E634
  c->r[0]=R8(c->r[6]+c->r[0]); // 8025E638
  W8(c->r[9]+0x00000001u,c->r[0]); // 8025E63C
  c->r[0]=R8(c->r[7]+0xFFFFFFFFu); // 8025E640
  c->r[0]=rotl(c->r[0],30)&0x00000003u; // 8025E644
  c->r[0]=R8(c->r[6]+c->r[0]); // 8025E648
  W8(c->r[9]+0x00000002u,c->r[0]); // 8025E64C
  c->r[0]=R8(c->r[7]+0xFFFFFFFFu); // 8025E650
  c->r[7]=c->r[7]+0xFFFFFFFEu; // 8025E654
  c->r[0]=rotl(c->r[0],0)&0x00000003u; // 8025E658
  c->r[0]=R8(c->r[6]+c->r[0]); // 8025E65C
  W8(c->r[9]+0x00000003u,c->r[0]); // 8025E660
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_8025E5D0; } // 8025E664
  c->r[4]=c->r[4]&0x00000001u; cr0(c,c->r[4]); // 8025E668
  if (crb(c,2)) { goto L_8025E6C4; } // 8025E66C
L_8025E670:;
  c->ctr=c->r[4]; // 8025E670
L_8025E674:;
  c->r[0]=R8(c->r[7]+0x00000000u); // 8025E674
  c->r[9]=c->r[5]+c->r[8]; // 8025E678
  c->r[0]=rotl(c->r[0],26)&0x00000003u; // 8025E67C
  c->r[0]=R8(c->r[6]+c->r[0]); // 8025E680
  W8(c->r[5]+c->r[8],c->r[0]); // 8025E684
  c->r[8]=c->r[8]+0xFFFFFFFCu; // 8025E688
  c->r[0]=R8(c->r[7]+0x00000000u); // 8025E68C
  c->r[0]=rotl(c->r[0],28)&0x00000003u; // 8025E690
  c->r[0]=R8(c->r[6]+c->r[0]); // 8025E694
  W8(c->r[9]+0x00000001u,c->r[0]); // 8025E698
  c->r[0]=R8(c->r[7]+0x00000000u); // 8025E69C
  c->r[0]=rotl(c->r[0],30)&0x00000003u; // 8025E6A0
  c->r[0]=R8(c->r[6]+c->r[0]); // 8025E6A4
  W8(c->r[9]+0x00000002u,c->r[0]); // 8025E6A8
  c->r[0]=R8(c->r[7]+0x00000000u); // 8025E6AC
  c->r[7]=c->r[7]+0xFFFFFFFFu; // 8025E6B0
  c->r[0]=rotl(c->r[0],0)&0x00000003u; // 8025E6B4
  c->r[0]=R8(c->r[6]+c->r[0]); // 8025E6B8
  W8(c->r[9]+0x00000003u,c->r[0]); // 8025E6BC
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_8025E674; } // 8025E6C0
L_8025E6C4:;
  c->r[4]=R32(c->r[3]+0x00000028u); // 8025E6C4
  c->r[3]=c->r[5]|c->r[5]; // 8025E6C8
  f_8025A430(c); return; // 8025E6CC
}

// OSInitFont
void f_8025E6D0(Ctx* __restrict c) {
  trace_call(0x8025E6D0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8025E6D0
  c->r[0]=c->lr; // 8025E6D4
  c->r[5]=c->r[3]|c->r[3]; // 8025E6D8
  W32(c->r[1]+0x00000014u,c->r[0]); // 8025E6DC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8025E6E0
  c->r[0]=R16(c->r[13]+0xFFFF8DF0u); // 8025E6E4
  cmpu(c,0,c->r[0],0x0000FFFFu); // 8025E6E8
  if (crb(c,2)) { goto L_8025E6F4; } // 8025E6EC
  goto L_8025E738; // 8025E6F0
L_8025E6F4:;
  c->r[4]=0u+0x80000000u; // 8025E6F4
  c->r[0]=R32(c->r[4]+0x000000CCu); // 8025E6F8
  cmps(c,0,(int32_t)c->r[0],0); // 8025E6FC
  if (crb(c,2)) { goto L_8025E70C; } // 8025E700
  if (crb(c,0)) { goto L_8025E720; } // 8025E704
  goto L_8025E720; // 8025E708
L_8025E70C:;
  c->r[4]=0u+0xCC000000u; // 8025E70C
  c->r[0]=R16(c->r[4]+0x0000206Eu); // 8025E710
  c->r[0]=rotl(c->r[0],31)&0x00000001u; // 8025E714
  W16(c->r[13]+0xFFFF8DF0u,c->r[0]); // 8025E718
  goto L_8025E728; // 8025E71C
L_8025E720:;
  c->r[0]=0u+0x00000000u; // 8025E720
  W16(c->r[13]+0xFFFF8DF0u,c->r[0]); // 8025E724
L_8025E728:;
  c->r[4]=0u+0x80260000u; // 8025E728
  c->r[0]=rotl(c->r[0],0)&0x0000FFFFu; // 8025E72C
  c->r[4]=c->r[4]+0xFFFFDF1Cu; // 8025E730
  W32(c->r[13]+0xFFFF9860u,c->r[4]); // 8025E734
L_8025E738:;
  c->r[0]=rotl(c->r[0],0)&0x0000FFFFu; // 8025E738
  cmps(c,0,(int32_t)c->r[0],2); // 8025E73C
  if (crb(c,2)) { goto L_8025E8A8; } // 8025E740
  if (!crb(c,0)) { goto L_8025E758; } // 8025E744
  cmps(c,0,(int32_t)c->r[0],0); // 8025E748
  if (crb(c,2)) { goto L_8025E764; } // 8025E74C
  if (!crb(c,0)) { goto L_8025E7B4; } // 8025E750
  goto L_8025E8A8; // 8025E754
L_8025E758:;
  cmps(c,0,(int32_t)c->r[0],6); // 8025E758
  if (!crb(c,0)) { goto L_8025E8A8; } // 8025E75C
  goto L_8025E804; // 8025E760
L_8025E764:;
  W32(c->r[13]+0xFFFF986Cu,c->r[3]); // 8025E764
  c->r[3]=c->r[3]+0x00020000u; // 8025E768
  c->r[4]=0u+0x00000000u; // 8025E76C
  c->r[3]=c->r[3]+0xFFFFD120u; // 8025E770
  c->lr=0x8025E778u; f_8025DAF4(c); // 8025E774
  cmps(c,0,(int32_t)c->r[3],0); // 8025E778
  if (!crb(c,2)) { goto L_8025E788; } // 8025E77C
  c->r[3]=0u+0x00000000u; // 8025E780
  goto L_8025E8AC; // 8025E784
L_8025E788:;
  c->r[5]=R32(c->r[13]+0xFFFF986Cu); // 8025E788
  c->r[3]=R32(c->r[5]+0x00000024u); // 8025E78C
  c->r[0]=c->r[3]+0x0000001Fu; // 8025E790
  c->r[4]=c->r[5]+c->r[3]; // 8025E794
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFE0u; // 8025E798
  W32(c->r[5]+0x00000024u,c->r[0]); // 8025E79C
  c->r[3]=R32(c->r[13]+0xFFFF986Cu); // 8025E7A0
  c->r[0]=R32(c->r[3]+0x00000024u); // 8025E7A4
  c->r[5]=c->r[3]+c->r[0]; // 8025E7A8
  c->lr=0x8025E7B0u; f_8025E464(c); // 8025E7AC
  goto L_8025E8A8; // 8025E7B0
L_8025E7B4:;
  W32(c->r[13]+0xFFFF9868u,c->r[3]); // 8025E7B4
  c->r[3]=c->r[3]+0x000D0000u; // 8025E7B8
  c->r[4]=0u+0x00000001u; // 8025E7BC
  c->r[3]=c->r[3]+0x00003F00u; // 8025E7C0
  c->lr=0x8025E7C8u; f_8025DAF4(c); // 8025E7C4
  cmps(c,0,(int32_t)c->r[3],0); // 8025E7C8
  if (!crb(c,2)) { goto L_8025E7D8; } // 8025E7CC
  c->r[3]=0u+0x00000000u; // 8025E7D0
  goto L_8025E8AC; // 8025E7D4
L_8025E7D8:;
  c->r[5]=R32(c->r[13]+0xFFFF9868u); // 8025E7D8
  c->r[3]=R32(c->r[5]+0x00000024u); // 8025E7DC
  c->r[0]=c->r[3]+0x0000001Fu; // 8025E7E0
  c->r[4]=c->r[5]+c->r[3]; // 8025E7E4
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFE0u; // 8025E7E8
  W32(c->r[5]+0x00000024u,c->r[0]); // 8025E7EC
  c->r[3]=R32(c->r[13]+0xFFFF9868u); // 8025E7F0
  c->r[0]=R32(c->r[3]+0x00000024u); // 8025E7F4
  c->r[5]=c->r[3]+c->r[0]; // 8025E7F8
  c->lr=0x8025E800u; f_8025E464(c); // 8025E7FC
  goto L_8025E8A8; // 8025E800
L_8025E804:;
  c->r[31]=c->r[3]+0x000F0000u; // 8025E804
  W32(c->r[13]+0xFFFF986Cu,c->r[3]); // 8025E808
  c->r[31]=c->r[31]+0x00004020u; // 8025E80C
  c->r[4]=0u+0x00000000u; // 8025E810
  c->r[3]=c->r[31]|c->r[31]; // 8025E814
  c->lr=0x8025E81Cu; f_8025DAF4(c); // 8025E818
  cmps(c,0,(int32_t)c->r[3],0); // 8025E81C
  if (!crb(c,2)) { goto L_8025E82C; } // 8025E820
  c->r[3]=0u+0x00000000u; // 8025E824
  goto L_8025E8AC; // 8025E828
L_8025E82C:;
  c->r[5]=R32(c->r[13]+0xFFFF986Cu); // 8025E82C
  c->r[3]=R32(c->r[5]+0x00000024u); // 8025E830
  c->r[0]=c->r[3]+0x0000001Fu; // 8025E834
  c->r[4]=c->r[5]+c->r[3]; // 8025E838
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFE0u; // 8025E83C
  W32(c->r[5]+0x00000024u,c->r[0]); // 8025E840
  c->r[3]=R32(c->r[13]+0xFFFF986Cu); // 8025E844
  c->r[0]=R32(c->r[3]+0x00000024u); // 8025E848
  c->r[5]=c->r[3]+c->r[0]; // 8025E84C
  c->lr=0x8025E854u; f_8025E464(c); // 8025E850
  c->r[5]=R32(c->r[13]+0xFFFF986Cu); // 8025E854
  c->r[3]=c->r[31]|c->r[31]; // 8025E858
  c->r[4]=0u+0x00000001u; // 8025E85C
  c->r[5]=c->r[5]+0x00020000u; // 8025E860
  c->r[5]=c->r[5]+0x00000120u; // 8025E864
  W32(c->r[13]+0xFFFF9868u,c->r[5]); // 8025E868
  c->lr=0x8025E870u; f_8025DAF4(c); // 8025E86C
  cmps(c,0,(int32_t)c->r[3],0); // 8025E870
  if (!crb(c,2)) { goto L_8025E880; } // 8025E874
  c->r[3]=0u+0x00000000u; // 8025E878
  goto L_8025E8AC; // 8025E87C
L_8025E880:;
  c->r[5]=R32(c->r[13]+0xFFFF9868u); // 8025E880
  c->r[3]=R32(c->r[5]+0x00000024u); // 8025E884
  c->r[0]=c->r[3]+0x0000001Fu; // 8025E888
  c->r[4]=c->r[5]+c->r[3]; // 8025E88C
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFE0u; // 8025E890
  W32(c->r[5]+0x00000024u,c->r[0]); // 8025E894
  c->r[3]=R32(c->r[13]+0xFFFF9868u); // 8025E898
  c->r[0]=R32(c->r[3]+0x00000024u); // 8025E89C
  c->r[5]=c->r[3]+c->r[0]; // 8025E8A0
  c->lr=0x8025E8A8u; f_8025E464(c); // 8025E8A4
L_8025E8A8:;
  c->r[3]=0u+0x00000001u; // 8025E8A8
L_8025E8AC:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8025E8AC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8025E8B0
  c->lr=c->r[0]; // 8025E8B4
  c->r[1]=c->r[1]+0x00000010u; // 8025E8B8
  return; // 8025E8BC
}

// OSGetFontTexture
void f_8025E8C0(Ctx* __restrict c) {
  trace_call(0x8025E8C0u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8025E8C0
  c->r[0]=c->lr; // 8025E8C4
  W32(c->r[1]+0x00000024u,c->r[0]); // 8025E8C8
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8025E8CC
  c->r[31]=c->r[7]|c->r[7]; // 8025E8D0
  W32(c->r[1]+0x00000018u,c->r[30]); // 8025E8D4
  c->r[30]=c->r[6]|c->r[6]; // 8025E8D8
  W32(c->r[1]+0x00000014u,c->r[29]); // 8025E8DC
  c->r[29]=c->r[5]|c->r[5]; // 8025E8E0
  W32(c->r[1]+0x00000010u,c->r[28]); // 8025E8E4
  c->r[28]=c->r[4]|c->r[4]; // 8025E8E8
  c->r[0]=R16(c->r[13]+0xFFFF8DF0u); // 8025E8EC
  cmpu(c,0,c->r[0],0x0000FFFFu); // 8025E8F0
  if (crb(c,2)) { goto L_8025E8FC; } // 8025E8F4
  goto L_8025E940; // 8025E8F8
L_8025E8FC:;
  c->r[4]=0u+0x80000000u; // 8025E8FC
  c->r[0]=R32(c->r[4]+0x000000CCu); // 8025E900
  cmps(c,0,(int32_t)c->r[0],0); // 8025E904
  if (crb(c,2)) { goto L_8025E914; } // 8025E908
  if (crb(c,0)) { goto L_8025E928; } // 8025E90C
  goto L_8025E928; // 8025E910
L_8025E914:;
  c->r[4]=0u+0xCC000000u; // 8025E914
  c->r[0]=R16(c->r[4]+0x0000206Eu); // 8025E918
  c->r[0]=rotl(c->r[0],31)&0x00000001u; // 8025E91C
  W16(c->r[13]+0xFFFF8DF0u,c->r[0]); // 8025E920
  goto L_8025E930; // 8025E924
L_8025E928:;
  c->r[0]=0u+0x00000000u; // 8025E928
  W16(c->r[13]+0xFFFF8DF0u,c->r[0]); // 8025E92C
L_8025E930:;
  c->r[4]=0u+0x80260000u; // 8025E930
  c->r[0]=rotl(c->r[0],0)&0x0000FFFFu; // 8025E934
  c->r[4]=c->r[4]+0xFFFFDF1Cu; // 8025E938
  W32(c->r[13]+0xFFFF9860u,c->r[4]); // 8025E93C
L_8025E940:;
  c->r[12]=R32(c->r[13]+0xFFFF9860u); // 8025E940
  c->r[4]=c->r[3]|c->r[3]; // 8025E944
  c->r[3]=rotl(c->r[0],0)&0x0000FFFFu; // 8025E948
  c->r[5]=c->r[1]+0x0000000Cu; // 8025E94C
  c->r[6]=c->r[1]+0x00000008u; // 8025E950
  c->ctr=c->r[12]; // 8025E954
  if (true) { c->lr=0x8025E95Cu; dispatch(c,c->ctr); } // 8025E958
  c->r[7]=R32(c->r[1]+0x0000000Cu); // 8025E95C
  cmps(c,0,(int32_t)c->r[31],0); // 8025E960
  c->r[6]=R32(c->r[1]+0x00000008u); // 8025E964
  c->r[5]=R16(c->r[7]+0x0000001Au); // 8025E968
  c->r[4]=R16(c->r[7]+0x0000001Cu); // 8025E96C
  c->r[0]=R32(c->r[7]+0x00000024u); // 8025E970
  c->r[5]=(uint32_t)((int32_t)c->r[5]*(int32_t)c->r[4]); // 8025E974
  c->r[4]=R32(c->r[7]+0x00000014u); // 8025E978
  c->r[0]=c->r[7]+c->r[0]; // 8025E97C
  c->r[6]=divw((int32_t)c->r[6],(int32_t)c->r[5]); // 8025E980
  c->r[4]=(uint32_t)((int32_t)c->r[4]*(int32_t)c->r[6]); // 8025E984
  c->r[0]=c->r[4]+c->r[0]; // 8025E988
  W32(c->r[28]+0x00000000u,c->r[0]); // 8025E98C
  c->r[8]=R32(c->r[1]+0x0000000Cu); // 8025E990
  c->r[4]=R32(c->r[1]+0x00000008u); // 8025E994
  c->r[7]=R16(c->r[8]+0x0000001Au); // 8025E998
  c->r[5]=R16(c->r[8]+0x0000001Cu); // 8025E99C
  c->r[6]=(uint32_t)((int32_t)c->r[6]*(int32_t)c->r[7]); // 8025E9A0
  c->r[0]=R16(c->r[8]+0x00000010u); // 8025E9A4
  c->r[5]=(uint32_t)((int32_t)c->r[6]*(int32_t)c->r[5]); // 8025E9A8
  c->r[5]=c->r[4]-c->r[5]; // 8025E9AC
  c->r[6]=divw((int32_t)c->r[5],(int32_t)c->r[7]); // 8025E9B0
  c->r[4]=(uint32_t)((int32_t)c->r[6]*(int32_t)c->r[7]); // 8025E9B4
  c->r[4]=c->r[5]-c->r[4]; // 8025E9B8
  c->r[0]=(uint32_t)((int32_t)c->r[4]*(int32_t)c->r[0]); // 8025E9BC
  W32(c->r[29]+0x00000000u,c->r[0]); // 8025E9C0
  c->r[4]=R32(c->r[1]+0x0000000Cu); // 8025E9C4
  c->r[0]=R16(c->r[4]+0x00000012u); // 8025E9C8
  c->r[0]=(uint32_t)((int32_t)c->r[6]*(int32_t)c->r[0]); // 8025E9CC
  W32(c->r[30]+0x00000000u,c->r[0]); // 8025E9D0
  if (crb(c,2)) { goto L_8025E9F0; } // 8025E9D4
  c->r[5]=R32(c->r[1]+0x0000000Cu); // 8025E9D8
  c->r[4]=R32(c->r[1]+0x00000008u); // 8025E9DC
  c->r[0]=R16(c->r[5]+0x00000022u); // 8025E9E0
  c->r[0]=c->r[5]+c->r[0]; // 8025E9E4
  c->r[0]=R8(c->r[4]+c->r[0]); // 8025E9E8
  W32(c->r[31]+0x00000000u,c->r[0]); // 8025E9EC
L_8025E9F0:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 8025E9F0
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8025E9F4
  c->r[30]=R32(c->r[1]+0x00000018u); // 8025E9F8
  c->r[29]=R32(c->r[1]+0x00000014u); // 8025E9FC
  c->r[28]=R32(c->r[1]+0x00000010u); // 8025EA00
  c->lr=c->r[0]; // 8025EA04
  c->r[1]=c->r[1]+0x00000020u; // 8025EA08
  return; // 8025EA0C
}

void hle_OSDisableInterrupts(Ctx*);
// OSDisableInterrupts
void f_8025EA10(Ctx* __restrict c) {
  hle_OSDisableInterrupts(c);
}

void hle_OSEnableInterrupts(Ctx*);
// OSEnableInterrupts
void f_8025EA24(Ctx* __restrict c) {
  hle_OSEnableInterrupts(c);
}

void hle_OSRestoreInterrupts(Ctx*);
// OSRestoreInterrupts
void f_8025EA38(Ctx* __restrict c) {
  hle_OSRestoreInterrupts(c);
}

// __OSSetInterruptHandler
void f_8025EA5C(Ctx* __restrict c) {
  trace_call(0x8025EA5Cu);
  c->r[5]=R32(c->r[13]+0xFFFF9880u); // 8025EA5C
  c->r[0]=rotl(c->r[3],2)&0xFFFFFFFCu; // 8025EA60
  c->r[3]=R32(c->r[5]+c->r[0]); // 8025EA64
  W32(c->r[5]+c->r[0],c->r[4]); // 8025EA68
  return; // 8025EA6C
}

// __OSGetInterruptHandler
void f_8025EA70(Ctx* __restrict c) {
  trace_call(0x8025EA70u);
  c->r[4]=R32(c->r[13]+0xFFFF9880u); // 8025EA70
  c->r[0]=rotl(c->r[3],2)&0xFFFFFFFCu; // 8025EA74
  c->r[3]=R32(c->r[4]+c->r[0]); // 8025EA78
  return; // 8025EA7C
}

// __OSInterruptInit
void f_8025EA80(Ctx* __restrict c) {
  trace_call(0x8025EA80u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8025EA80
  c->r[0]=c->lr; // 8025EA84
  c->r[4]=0u+0x00000000u; // 8025EA88
  c->r[5]=0u+0x00000080u; // 8025EA8C
  W32(c->r[1]+0x00000024u,c->r[0]); // 8025EA90
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8025EA94
  c->r[31]=0u+0x80000000u; // 8025EA98
  c->r[3]=c->r[31]+0x00003040u; // 8025EA9C
  W32(c->r[1]+0x00000018u,c->r[30]); // 8025EAA0
  W32(c->r[1]+0x00000014u,c->r[29]); // 8025EAA4
  W32(c->r[13]+0xFFFF9880u,c->r[3]); // 8025EAA8
  c->lr=0x8025EAB0u; f_800043EC(c); // 8025EAAC
  c->r[6]=0u+0x00000000u; // 8025EAB0
  c->r[5]=0u+0x000000F0u; // 8025EAB4
  W32(c->r[31]+0x000000C4u,c->r[6]); // 8025EAB8
  c->r[4]=0u+0xCC000000u; // 8025EABC
  c->r[0]=0u+0x40000000u; // 8025EAC0
  c->r[3]=0u+0xCD000000u; // 8025EAC4
  W32(c->r[31]+0x000000C8u,c->r[6]); // 8025EAC8
  c->r[30]=0u+0xFFFFFFF0u; // 8025EACC
  W32(c->r[4]+0x00003004u,c->r[5]); // 8025EAD0
  W32(c->r[3]+0x00000034u,c->r[0]); // 8025EAD4
  c->lr=0x8025EADCu; f_8025EA10(c); // 8025EAD8
  c->r[0]=R32(c->r[31]+0x000000C4u); // 8025EADC
  c->r[29]=c->r[3]|c->r[3]; // 8025EAE0
  c->r[4]=R32(c->r[31]+0x000000C8u); // 8025EAE4
  c->r[30]=c->r[30]|c->r[0]; // 8025EAE8
  c->r[0]=~(c->r[0]|c->r[4]); // 8025EAEC
  W32(c->r[31]+0x000000C4u,c->r[30]); // 8025EAF0
  c->r[3]=rotl(c->r[0],0)&0xFFFFFFF0u; // 8025EAF4
  c->r[30]=c->r[30]|c->r[4]; // 8025EAF8
  goto L_8025EB08; // 8025EAFC
L_8025EB00:;
  c->r[4]=c->r[30]|c->r[30]; // 8025EB00
  c->lr=0x8025EB08u; f_8025EB44(c); // 8025EB04
L_8025EB08:;
  cmps(c,0,(int32_t)c->r[3],0); // 8025EB08
  if (!crb(c,2)) { IRQCHK(c); goto L_8025EB00; } // 8025EB0C
  c->r[3]=c->r[29]|c->r[29]; // 8025EB10
  c->lr=0x8025EB18u; f_8025EA38(c); // 8025EB14
  c->r[4]=0u+0x80260000u; // 8025EB18
  c->r[3]=0u+0x00000004u; // 8025EB1C
  c->r[4]=c->r[4]+0xFFFFF144u; // 8025EB20
  c->lr=0x8025EB28u; f_80259194(c); // 8025EB24
  c->r[0]=R32(c->r[1]+0x00000024u); // 8025EB28
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8025EB2C
  c->r[30]=R32(c->r[1]+0x00000018u); // 8025EB30
  c->r[29]=R32(c->r[1]+0x00000014u); // 8025EB34
  c->lr=c->r[0]; // 8025EB38
  c->r[1]=c->r[1]+0x00000020u; // 8025EB3C
  return; // 8025EB40
}

// SetInterruptMask
void f_8025EB44(Ctx* __restrict c) {
  trace_call(0x8025EB44u);
  c->r[0]=cntlz(c->r[3]); // 8025EB44
  cmps(c,0,(int32_t)c->r[0],12); // 8025EB48
  if (!crb(c,0)) { goto L_8025EB70; } // 8025EB4C
  cmps(c,0,(int32_t)c->r[0],8); // 8025EB50
  if (crb(c,2)) { goto L_8025EC20; } // 8025EB54
  if (!crb(c,0)) { goto L_8025EC4C; } // 8025EB58
  cmps(c,0,(int32_t)c->r[0],5); // 8025EB5C
  if (!crb(c,0)) { goto L_8025EBE0; } // 8025EB60
  cmps(c,0,(int32_t)c->r[0],0); // 8025EB64
  if (!crb(c,0)) { goto L_8025EB90; } // 8025EB68
  return; // 8025EB6C
L_8025EB70:;
  cmps(c,0,(int32_t)c->r[0],17); // 8025EB70
  if (!crb(c,0)) { goto L_8025EB84; } // 8025EB74
  cmps(c,0,(int32_t)c->r[0],15); // 8025EB78
  if (!crb(c,0)) { goto L_8025ECD4; } // 8025EB7C
  goto L_8025EC90; // 8025EB80
L_8025EB84:;
  cmps(c,0,(int32_t)c->r[0],28); // 8025EB84
  if (!crb(c,0)) return; // 8025EB88
  goto L_8025ED08; // 8025EB8C
L_8025EB90:;
  c->r[0]=rotl(c->r[4],0)&0x80000000u; cr0(c,c->r[0]); // 8025EB90
  c->r[5]=0u+0x00000000u; // 8025EB94
  if (!crb(c,2)) { goto L_8025EBA0; } // 8025EB98
  c->r[5]=c->r[5]|0x00000001u; // 8025EB9C
L_8025EBA0:;
  c->r[0]=rotl(c->r[4],0)&0x40000000u; cr0(c,c->r[0]); // 8025EBA0
  if (!crb(c,2)) { goto L_8025EBAC; } // 8025EBA4
  c->r[5]=c->r[5]|0x00000002u; // 8025EBA8
L_8025EBAC:;
  c->r[0]=rotl(c->r[4],0)&0x20000000u; cr0(c,c->r[0]); // 8025EBAC
  if (!crb(c,2)) { goto L_8025EBB8; } // 8025EBB0
  c->r[5]=c->r[5]|0x00000004u; // 8025EBB4
L_8025EBB8:;
  c->r[0]=rotl(c->r[4],0)&0x10000000u; cr0(c,c->r[0]); // 8025EBB8
  if (!crb(c,2)) { goto L_8025EBC4; } // 8025EBBC
  c->r[5]=c->r[5]|0x00000008u; // 8025EBC0
L_8025EBC4:;
  c->r[0]=rotl(c->r[4],0)&0x08000000u; cr0(c,c->r[0]); // 8025EBC4
  if (!crb(c,2)) { goto L_8025EBD0; } // 8025EBC8
  c->r[5]=c->r[5]|0x00000010u; // 8025EBCC
L_8025EBD0:;
  c->r[4]=0u+0xCC000000u; // 8025EBD0
  c->r[3]=rotl(c->r[3],0)&0x07FFFFFFu; // 8025EBD4
  W16(c->r[4]+0x0000401Cu,c->r[5]); // 8025EBD8
  return; // 8025EBDC
L_8025EBE0:;
  c->r[5]=0u+0xCC000000u; // 8025EBE0
  c->r[0]=rotl(c->r[4],0)&0x04000000u; cr0(c,c->r[0]); // 8025EBE4
  c->r[5]=R16(c->r[5]+0x0000500Au); // 8025EBE8
  c->r[5]=rotl(c->r[5],0)&0xFFFFFE07u; // 8025EBEC
  if (!crb(c,2)) { goto L_8025EBF8; } // 8025EBF0
  c->r[5]=c->r[5]|0x00000010u; // 8025EBF4
L_8025EBF8:;
  c->r[0]=rotl(c->r[4],0)&0x02000000u; cr0(c,c->r[0]); // 8025EBF8
  if (!crb(c,2)) { goto L_8025EC04; } // 8025EBFC
  c->r[5]=c->r[5]|0x00000040u; // 8025EC00
L_8025EC04:;
  c->r[0]=rotl(c->r[4],0)&0x01000000u; cr0(c,c->r[0]); // 8025EC04
  if (!crb(c,2)) { goto L_8025EC10; } // 8025EC08
  c->r[5]=c->r[5]|0x00000100u; // 8025EC0C
L_8025EC10:;
  c->r[4]=0u+0xCC000000u; // 8025EC10
  c->r[3]=rotl(c->r[3],0)&0xF8FFFFFFu; // 8025EC14
  W16(c->r[4]+0x0000500Au,c->r[5]); // 8025EC18
  return; // 8025EC1C
L_8025EC20:;
  c->r[0]=rotl(c->r[4],0)&0x00800000u; cr0(c,c->r[0]); // 8025EC20
  c->r[4]=0u+0xCD000000u; // 8025EC24
  c->r[5]=R32(c->r[4]+0x00006C00u); // 8025EC28
  c->r[0]=0u+0xFFFFFFD3u; // 8025EC2C
  c->r[5]=c->r[5]&c->r[0]; // 8025EC30
  if (!crb(c,2)) { goto L_8025EC3C; } // 8025EC34
  c->r[5]=c->r[5]|0x00000004u; // 8025EC38
L_8025EC3C:;
  c->r[4]=0u+0xCD000000u; // 8025EC3C
  c->r[3]=rotl(c->r[3],0)&0xFF7FFFFFu; // 8025EC40
  W32(c->r[4]+0x00006C00u,c->r[5]); // 8025EC44
  return; // 8025EC48
L_8025EC4C:;
  c->r[0]=rotl(c->r[4],0)&0x00400000u; cr0(c,c->r[0]); // 8025EC4C
  c->r[5]=0u+0xCD000000u; // 8025EC50
  c->r[5]=R32(c->r[5]+0x00006800u); // 8025EC54
  c->r[0]=0u+0xFFFFD3F0u; // 8025EC58
  c->r[5]=c->r[5]&c->r[0]; // 8025EC5C
  if (!crb(c,2)) { goto L_8025EC68; } // 8025EC60
  c->r[5]=c->r[5]|0x00000001u; // 8025EC64
L_8025EC68:;
  c->r[0]=rotl(c->r[4],0)&0x00200000u; cr0(c,c->r[0]); // 8025EC68
  if (!crb(c,2)) { goto L_8025EC74; } // 8025EC6C
  c->r[5]=c->r[5]|0x00000004u; // 8025EC70
L_8025EC74:;
  c->r[0]=rotl(c->r[4],0)&0x00100000u; cr0(c,c->r[0]); // 8025EC74
  if (!crb(c,2)) { goto L_8025EC80; } // 8025EC78
  c->r[5]=c->r[5]|0x00000400u; // 8025EC7C
L_8025EC80:;
  c->r[4]=0u+0xCD000000u; // 8025EC80
  c->r[3]=rotl(c->r[3],0)&0xFF8FFFFFu; // 8025EC84
  W32(c->r[4]+0x00006800u,c->r[5]); // 8025EC88
  return; // 8025EC8C
L_8025EC90:;
  c->r[0]=rotl(c->r[4],0)&0x00080000u; cr0(c,c->r[0]); // 8025EC90
  c->r[5]=0u+0xCD000000u; // 8025EC94
  c->r[5]=R32(c->r[5]+0x00006814u); // 8025EC98
  c->r[0]=0u+0xFFFFF3F0u; // 8025EC9C
  c->r[5]=c->r[5]&c->r[0]; // 8025ECA0
  if (!crb(c,2)) { goto L_8025ECAC; } // 8025ECA4
  c->r[5]=c->r[5]|0x00000001u; // 8025ECA8
L_8025ECAC:;
  c->r[0]=rotl(c->r[4],0)&0x00040000u; cr0(c,c->r[0]); // 8025ECAC
  if (!crb(c,2)) { goto L_8025ECB8; } // 8025ECB0
  c->r[5]=c->r[5]|0x00000004u; // 8025ECB4
L_8025ECB8:;
  c->r[0]=rotl(c->r[4],0)&0x00020000u; cr0(c,c->r[0]); // 8025ECB8
  if (!crb(c,2)) { goto L_8025ECC4; } // 8025ECBC
  c->r[5]=c->r[5]|0x00000400u; // 8025ECC0
L_8025ECC4:;
  c->r[4]=0u+0xCD000000u; // 8025ECC4
  c->r[3]=rotl(c->r[3],0)&0xFFF1FFFFu; // 8025ECC8
  W32(c->r[4]+0x00006814u,c->r[5]); // 8025ECCC
  return; // 8025ECD0
L_8025ECD4:;
  c->r[5]=0u+0xCD000000u; // 8025ECD4
  c->r[0]=rotl(c->r[4],0)&0x00010000u; cr0(c,c->r[0]); // 8025ECD8
  c->r[5]=R32(c->r[5]+0x00006828u); // 8025ECDC
  c->r[5]=rotl(c->r[5],0)&0xFFFFFFF0u; // 8025ECE0
  if (!crb(c,2)) { goto L_8025ECEC; } // 8025ECE4
  c->r[5]=c->r[5]|0x00000001u; // 8025ECE8
L_8025ECEC:;
  c->r[0]=rotl(c->r[4],0)&0x00008000u; cr0(c,c->r[0]); // 8025ECEC
  if (!crb(c,2)) { goto L_8025ECF8; } // 8025ECF0
  c->r[5]=c->r[5]|0x00000004u; // 8025ECF4
L_8025ECF8:;
  c->r[4]=0u+0xCD000000u; // 8025ECF8
  c->r[3]=rotl(c->r[3],0)&0xFFFE7FFFu; // 8025ECFC
  W32(c->r[4]+0x00006828u,c->r[5]); // 8025ED00
  return; // 8025ED04
L_8025ED08:;
  c->r[0]=rotl(c->r[4],0)&0x00004000u; cr0(c,c->r[0]); // 8025ED08
  c->r[5]=0u+0x000000F0u; // 8025ED0C
  if (!crb(c,2)) { goto L_8025ED18; } // 8025ED10
  c->r[5]=c->r[5]|0x00000800u; // 8025ED14
L_8025ED18:;
  c->r[0]=rotl(c->r[4],0)&0x00000800u; cr0(c,c->r[0]); // 8025ED18
  if (!crb(c,2)) { goto L_8025ED24; } // 8025ED1C
  c->r[5]=c->r[5]|0x00000008u; // 8025ED20
L_8025ED24:;
  c->r[0]=rotl(c->r[4],0)&0x00000400u; cr0(c,c->r[0]); // 8025ED24
  if (!crb(c,2)) { goto L_8025ED30; } // 8025ED28
  c->r[5]=c->r[5]|0x00000004u; // 8025ED2C
L_8025ED30:;
  c->r[0]=rotl(c->r[4],0)&0x00000200u; cr0(c,c->r[0]); // 8025ED30
  if (!crb(c,2)) { goto L_8025ED3C; } // 8025ED34
  c->r[5]=c->r[5]|0x00000002u; // 8025ED38
L_8025ED3C:;
  c->r[0]=rotl(c->r[4],0)&0x00000100u; cr0(c,c->r[0]); // 8025ED3C
  if (!crb(c,2)) { goto L_8025ED48; } // 8025ED40
  c->r[5]=c->r[5]|0x00000001u; // 8025ED44
L_8025ED48:;
  c->r[0]=rotl(c->r[4],0)&0x00000080u; cr0(c,c->r[0]); // 8025ED48
  if (!crb(c,2)) { goto L_8025ED54; } // 8025ED4C
  c->r[5]=c->r[5]|0x00000100u; // 8025ED50
L_8025ED54:;
  c->r[0]=rotl(c->r[4],0)&0x00000040u; cr0(c,c->r[0]); // 8025ED54
  if (!crb(c,2)) { goto L_8025ED60; } // 8025ED58
  c->r[5]=c->r[5]|0x00001000u; // 8025ED5C
L_8025ED60:;
  c->r[0]=rotl(c->r[4],0)&0x00002000u; cr0(c,c->r[0]); // 8025ED60
  if (!crb(c,2)) { goto L_8025ED6C; } // 8025ED64
  c->r[5]=c->r[5]|0x00000200u; // 8025ED68
L_8025ED6C:;
  c->r[0]=rotl(c->r[4],0)&0x00001000u; cr0(c,c->r[0]); // 8025ED6C
  if (!crb(c,2)) { goto L_8025ED78; } // 8025ED70
  c->r[5]=c->r[5]|0x00000400u; // 8025ED74
L_8025ED78:;
  c->r[0]=rotl(c->r[4],0)&0x00000020u; cr0(c,c->r[0]); // 8025ED78
  if (!crb(c,2)) { goto L_8025ED84; } // 8025ED7C
  c->r[5]=c->r[5]|0x00002000u; // 8025ED80
L_8025ED84:;
  c->r[0]=rotl(c->r[4],0)&0x00000010u; cr0(c,c->r[0]); // 8025ED84
  if (!crb(c,2)) { goto L_8025ED90; } // 8025ED88
  c->r[5]=c->r[5]|0x00004000u; // 8025ED8C
L_8025ED90:;
  c->r[4]=0u+0xCC000000u; // 8025ED90
  c->r[3]=rotl(c->r[3],0)&0xFFFF800Fu; // 8025ED94
  W32(c->r[4]+0x00003004u,c->r[5]); // 8025ED98
  return; // 8025ED9C
}

// __OSMaskInterrupts
void f_8025EDA0(Ctx* __restrict c) {
  trace_call(0x8025EDA0u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8025EDA0
  c->r[0]=c->lr; // 8025EDA4
  W32(c->r[1]+0x00000024u,c->r[0]); // 8025EDA8
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8025EDAC
  c->r[31]=c->r[3]|c->r[3]; // 8025EDB0
  W32(c->r[1]+0x00000018u,c->r[30]); // 8025EDB4
  W32(c->r[1]+0x00000014u,c->r[29]); // 8025EDB8
  c->lr=0x8025EDC0u; f_8025EA10(c); // 8025EDBC
  c->r[4]=0u+0x80000000u; // 8025EDC0
  c->r[30]=c->r[3]|c->r[3]; // 8025EDC4
  c->r[29]=R32(c->r[4]+0x000000C4u); // 8025EDC8
  c->r[5]=R32(c->r[4]+0x000000C8u); // 8025EDCC
  c->r[0]=c->r[29]|c->r[5]; // 8025EDD0
  c->r[3]=c->r[31]&~c->r[0]; // 8025EDD4
  c->r[31]=c->r[31]|c->r[29]; // 8025EDD8
  W32(c->r[4]+0x000000C4u,c->r[31]); // 8025EDDC
  c->r[31]=c->r[31]|c->r[5]; // 8025EDE0
  goto L_8025EDF0; // 8025EDE4
L_8025EDE8:;
  c->r[4]=c->r[31]|c->r[31]; // 8025EDE8
  c->lr=0x8025EDF0u; f_8025EB44(c); // 8025EDEC
L_8025EDF0:;
  cmps(c,0,(int32_t)c->r[3],0); // 8025EDF0
  if (!crb(c,2)) { IRQCHK(c); goto L_8025EDE8; } // 8025EDF4
  c->r[3]=c->r[30]|c->r[30]; // 8025EDF8
  c->lr=0x8025EE00u; f_8025EA38(c); // 8025EDFC
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8025EE00
  c->r[3]=c->r[29]|c->r[29]; // 8025EE04
  c->r[30]=R32(c->r[1]+0x00000018u); // 8025EE08
  c->r[29]=R32(c->r[1]+0x00000014u); // 8025EE0C
  c->r[0]=R32(c->r[1]+0x00000024u); // 8025EE10
  c->lr=c->r[0]; // 8025EE14
  c->r[1]=c->r[1]+0x00000020u; // 8025EE18
  return; // 8025EE1C
}

// __OSUnmaskInterrupts
void f_8025EE20(Ctx* __restrict c) {
  trace_call(0x8025EE20u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8025EE20
  c->r[0]=c->lr; // 8025EE24
  W32(c->r[1]+0x00000024u,c->r[0]); // 8025EE28
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8025EE2C
  c->r[31]=c->r[3]|c->r[3]; // 8025EE30
  W32(c->r[1]+0x00000018u,c->r[30]); // 8025EE34
  W32(c->r[1]+0x00000014u,c->r[29]); // 8025EE38
  c->lr=0x8025EE40u; f_8025EA10(c); // 8025EE3C
  c->r[4]=0u+0x80000000u; // 8025EE40
  c->r[30]=c->r[3]|c->r[3]; // 8025EE44
  c->r[29]=R32(c->r[4]+0x000000C4u); // 8025EE48
  c->r[5]=R32(c->r[4]+0x000000C8u); // 8025EE4C
  c->r[0]=c->r[29]|c->r[5]; // 8025EE50
  c->r[3]=c->r[31]&c->r[0]; // 8025EE54
  c->r[31]=c->r[29]&~c->r[31]; // 8025EE58
  W32(c->r[4]+0x000000C4u,c->r[31]); // 8025EE5C
  c->r[31]=c->r[31]|c->r[5]; // 8025EE60
  goto L_8025EE70; // 8025EE64
L_8025EE68:;
  c->r[4]=c->r[31]|c->r[31]; // 8025EE68
  c->lr=0x8025EE70u; f_8025EB44(c); // 8025EE6C
L_8025EE70:;
  cmps(c,0,(int32_t)c->r[3],0); // 8025EE70
  if (!crb(c,2)) { IRQCHK(c); goto L_8025EE68; } // 8025EE74
  c->r[3]=c->r[30]|c->r[30]; // 8025EE78
  c->lr=0x8025EE80u; f_8025EA38(c); // 8025EE7C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8025EE80
  c->r[3]=c->r[29]|c->r[29]; // 8025EE84
  c->r[30]=R32(c->r[1]+0x00000018u); // 8025EE88
  c->r[29]=R32(c->r[1]+0x00000014u); // 8025EE8C
  c->r[0]=R32(c->r[1]+0x00000024u); // 8025EE90
  c->lr=c->r[0]; // 8025EE94
  c->r[1]=c->r[1]+0x00000020u; // 8025EE98
  return; // 8025EE9C
}

// __OSDispatchInterrupt
void f_8025EEA0(Ctx* __restrict c) {
  trace_call(0x8025EEA0u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8025EEA0
  c->r[0]=c->lr; // 8025EEA4
  c->r[3]=0u+0xCC000000u; // 8025EEA8
  W32(c->r[1]+0x00000024u,c->r[0]); // 8025EEAC
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8025EEB0
  W32(c->r[1]+0x00000018u,c->r[30]); // 8025EEB4
  c->r[30]=c->r[4]|c->r[4]; // 8025EEB8
  W32(c->r[1]+0x00000014u,c->r[29]); // 8025EEBC
  c->r[31]=R32(c->r[3]+0x00003000u); // 8025EEC0
  c->r[0]=R32(c->r[3]+0x00003004u); // 8025EEC4
  c->r[31]=rotl(c->r[31],0)&0xFFFEFFFFu; cr0(c,c->r[31]); // 8025EEC8
  if (crb(c,2)) { goto L_8025EED8; } // 8025EECC
  c->r[0]=c->r[31]&c->r[0]; cr0(c,c->r[0]); // 8025EED0
  if (!crb(c,2)) { goto L_8025EEE0; } // 8025EED4
L_8025EED8:;
  c->r[3]=c->r[30]|c->r[30]; // 8025EED8
  c->lr=0x8025EEE0u; f_8025AD2C(c); // 8025EEDC
L_8025EEE0:;
  c->r[0]=rotl(c->r[31],0)&0x00000080u; cr0(c,c->r[0]); // 8025EEE0
  c->r[0]=0u+0x00000000u; // 8025EEE4
  if (crb(c,2)) { goto L_8025EF30; } // 8025EEE8
  c->r[3]=0u+0xCC000000u; // 8025EEEC
  c->r[4]=R16(c->r[3]+0x0000401Eu); // 8025EEF0
  c->r[3]=rotl(c->r[4],0)&0x00000001u; cr0(c,c->r[3]); // 8025EEF4
  if (crb(c,2)) { goto L_8025EF00; } // 8025EEF8
  c->r[0]=c->r[0]|0x80000000u; // 8025EEFC
L_8025EF00:;
  c->r[3]=rotl(c->r[4],0)&0x00000002u; cr0(c,c->r[3]); // 8025EF00
  if (crb(c,2)) { goto L_8025EF0C; } // 8025EF04
  c->r[0]=c->r[0]|0x40000000u; // 8025EF08
L_8025EF0C:;
  c->r[3]=rotl(c->r[4],0)&0x00000004u; cr0(c,c->r[3]); // 8025EF0C
  if (crb(c,2)) { goto L_8025EF18; } // 8025EF10
  c->r[0]=c->r[0]|0x20000000u; // 8025EF14
L_8025EF18:;
  c->r[3]=rotl(c->r[4],0)&0x00000008u; cr0(c,c->r[3]); // 8025EF18
  if (crb(c,2)) { goto L_8025EF24; } // 8025EF1C
  c->r[0]=c->r[0]|0x10000000u; // 8025EF20
L_8025EF24:;
  c->r[3]=rotl(c->r[4],0)&0x00000010u; cr0(c,c->r[3]); // 8025EF24
  if (crb(c,2)) { goto L_8025EF30; } // 8025EF28
  c->r[0]=c->r[0]|0x08000000u; // 8025EF2C
L_8025EF30:;
  c->r[3]=rotl(c->r[31],0)&0x00000040u; cr0(c,c->r[3]); // 8025EF30
  if (crb(c,2)) { goto L_8025EF64; } // 8025EF34
  c->r[3]=0u+0xCC000000u; // 8025EF38
  c->r[4]=R16(c->r[3]+0x0000500Au); // 8025EF3C
  c->r[3]=rotl(c->r[4],0)&0x00000008u; cr0(c,c->r[3]); // 8025EF40
  if (crb(c,2)) { goto L_8025EF4C; } // 8025EF44
  c->r[0]=c->r[0]|0x04000000u; // 8025EF48
L_8025EF4C:;
  c->r[3]=rotl(c->r[4],0)&0x00000020u; cr0(c,c->r[3]); // 8025EF4C
  if (crb(c,2)) { goto L_8025EF58; } // 8025EF50
  c->r[0]=c->r[0]|0x02000000u; // 8025EF54
L_8025EF58:;
  c->r[3]=rotl(c->r[4],0)&0x00000080u; cr0(c,c->r[3]); // 8025EF58
  if (crb(c,2)) { goto L_8025EF64; } // 8025EF5C
  c->r[0]=c->r[0]|0x01000000u; // 8025EF60
L_8025EF64:;
  c->r[3]=rotl(c->r[31],0)&0x00000020u; cr0(c,c->r[3]); // 8025EF64
  if (crb(c,2)) { goto L_8025EF80; } // 8025EF68
  c->r[3]=0u+0xCD000000u; // 8025EF6C
  c->r[3]=R32(c->r[3]+0x00006C00u); // 8025EF70
  c->r[3]=rotl(c->r[3],0)&0x00000008u; cr0(c,c->r[3]); // 8025EF74
  if (crb(c,2)) { goto L_8025EF80; } // 8025EF78
  c->r[0]=c->r[0]|0x00800000u; // 8025EF7C
L_8025EF80:;
  c->r[3]=rotl(c->r[31],0)&0x00000010u; cr0(c,c->r[3]); // 8025EF80
  if (crb(c,2)) { goto L_8025F000; } // 8025EF84
  c->r[3]=0u+0xCD000000u; // 8025EF88
  c->r[4]=R32(c->r[3]+0x00006800u); // 8025EF8C
  c->r[3]=rotl(c->r[4],0)&0x00000002u; cr0(c,c->r[3]); // 8025EF90
  if (crb(c,2)) { goto L_8025EF9C; } // 8025EF94
  c->r[0]=c->r[0]|0x00400000u; // 8025EF98
L_8025EF9C:;
  c->r[3]=rotl(c->r[4],0)&0x00000008u; cr0(c,c->r[3]); // 8025EF9C
  if (crb(c,2)) { goto L_8025EFA8; } // 8025EFA0
  c->r[0]=c->r[0]|0x00200000u; // 8025EFA4
L_8025EFA8:;
  c->r[3]=rotl(c->r[4],0)&0x00000800u; cr0(c,c->r[3]); // 8025EFA8
  if (crb(c,2)) { goto L_8025EFB4; } // 8025EFAC
  c->r[0]=c->r[0]|0x00100000u; // 8025EFB0
L_8025EFB4:;
  c->r[3]=0u+0xCD000000u; // 8025EFB4
  c->r[4]=R32(c->r[3]+0x00006814u); // 8025EFB8
  c->r[3]=rotl(c->r[4],0)&0x00000002u; cr0(c,c->r[3]); // 8025EFBC
  if (crb(c,2)) { goto L_8025EFC8; } // 8025EFC0
  c->r[0]=c->r[0]|0x00080000u; // 8025EFC4
L_8025EFC8:;
  c->r[3]=rotl(c->r[4],0)&0x00000008u; cr0(c,c->r[3]); // 8025EFC8
  if (crb(c,2)) { goto L_8025EFD4; } // 8025EFCC
  c->r[0]=c->r[0]|0x00040000u; // 8025EFD0
L_8025EFD4:;
  c->r[3]=rotl(c->r[4],0)&0x00000800u; cr0(c,c->r[3]); // 8025EFD4
  if (crb(c,2)) { goto L_8025EFE0; } // 8025EFD8
  c->r[0]=c->r[0]|0x00020000u; // 8025EFDC
L_8025EFE0:;
  c->r[3]=0u+0xCD000000u; // 8025EFE0
  c->r[4]=R32(c->r[3]+0x00006828u); // 8025EFE4
  c->r[3]=rotl(c->r[4],0)&0x00000002u; cr0(c,c->r[3]); // 8025EFE8
  if (crb(c,2)) { goto L_8025EFF4; } // 8025EFEC
  c->r[0]=c->r[0]|0x00010000u; // 8025EFF0
L_8025EFF4:;
  c->r[3]=rotl(c->r[4],0)&0x00000008u; cr0(c,c->r[3]); // 8025EFF4
  if (crb(c,2)) { goto L_8025F000; } // 8025EFF8
  c->r[0]=c->r[0]|0x00008000u; // 8025EFFC
L_8025F000:;
  c->r[3]=rotl(c->r[31],0)&0x00002000u; cr0(c,c->r[3]); // 8025F000
  if (crb(c,2)) { goto L_8025F00C; } // 8025F004
  c->r[0]=c->r[0]|0x00000020u; // 8025F008
L_8025F00C:;
  c->r[3]=rotl(c->r[31],0)&0x00001000u; cr0(c,c->r[3]); // 8025F00C
  if (crb(c,2)) { goto L_8025F018; } // 8025F010
  c->r[0]=c->r[0]|0x00000040u; // 8025F014
L_8025F018:;
  c->r[3]=rotl(c->r[31],0)&0x00000400u; cr0(c,c->r[3]); // 8025F018
  if (crb(c,2)) { goto L_8025F024; } // 8025F01C
  c->r[0]=c->r[0]|0x00001000u; // 8025F020
L_8025F024:;
  c->r[3]=rotl(c->r[31],0)&0x00000200u; cr0(c,c->r[3]); // 8025F024
  if (crb(c,2)) { goto L_8025F030; } // 8025F028
  c->r[0]=c->r[0]|0x00002000u; // 8025F02C
L_8025F030:;
  c->r[3]=rotl(c->r[31],0)&0x00000100u; cr0(c,c->r[3]); // 8025F030
  if (crb(c,2)) { goto L_8025F03C; } // 8025F034
  c->r[0]=c->r[0]|0x00000080u; // 8025F038
L_8025F03C:;
  c->r[3]=rotl(c->r[31],0)&0x00000008u; cr0(c,c->r[3]); // 8025F03C
  if (crb(c,2)) { goto L_8025F048; } // 8025F040
  c->r[0]=c->r[0]|0x00000800u; // 8025F044
L_8025F048:;
  c->r[3]=rotl(c->r[31],0)&0x00000004u; cr0(c,c->r[3]); // 8025F048
  if (crb(c,2)) { goto L_8025F054; } // 8025F04C
  c->r[0]=c->r[0]|0x00000400u; // 8025F050
L_8025F054:;
  c->r[3]=rotl(c->r[31],0)&0x00000002u; cr0(c,c->r[3]); // 8025F054
  if (crb(c,2)) { goto L_8025F060; } // 8025F058
  c->r[0]=c->r[0]|0x00000200u; // 8025F05C
L_8025F060:;
  c->r[3]=rotl(c->r[31],0)&0x00000800u; cr0(c,c->r[3]); // 8025F060
  if (crb(c,2)) { goto L_8025F06C; } // 8025F064
  c->r[0]=c->r[0]|0x00004000u; // 8025F068
L_8025F06C:;
  c->r[3]=rotl(c->r[31],0)&0x00000001u; cr0(c,c->r[3]); // 8025F06C
  if (crb(c,2)) { goto L_8025F078; } // 8025F070
  c->r[0]=c->r[0]|0x00000100u; // 8025F074
L_8025F078:;
  c->r[3]=rotl(c->r[31],0)&0x00004000u; cr0(c,c->r[3]); // 8025F078
  if (crb(c,2)) { goto L_8025F084; } // 8025F07C
  c->r[0]=c->r[0]|0x00000010u; // 8025F080
L_8025F084:;
  c->r[3]=0u+0x80000000u; // 8025F084
  c->r[4]=R32(c->r[3]+0x000000C4u); // 8025F088
  c->r[3]=R32(c->r[3]+0x000000C8u); // 8025F08C
  c->r[3]=c->r[4]|c->r[3]; // 8025F090
  c->r[3]=c->r[0]&~c->r[3]; cr0(c,c->r[3]); // 8025F094
  if (crb(c,2)) { goto L_8025F120; } // 8025F098
  c->r[4]=0u+0x80410000u; // 8025F09C
  c->r[4]=c->r[4]+0x000038E0u; // 8025F0A0
L_8025F0A4:;
  c->r[0]=R32(c->r[4]+0x00000000u); // 8025F0A4
  c->r[0]=c->r[3]&c->r[0]; cr0(c,c->r[0]); // 8025F0A8
  if (crb(c,2)) { goto L_8025F0BC; } // 8025F0AC
  c->r[0]=cntlz(c->r[0]); // 8025F0B0
  c->r[29]=(uint32_t)(int32_t)(int16_t)c->r[0]; // 8025F0B4
  goto L_8025F0C4; // 8025F0B8
L_8025F0BC:;
  c->r[4]=c->r[4]+0x00000004u; // 8025F0BC
  IRQCHK(c); goto L_8025F0A4; // 8025F0C0
L_8025F0C4:;
  c->r[3]=R32(c->r[13]+0xFFFF9880u); // 8025F0C4
  c->r[0]=rotl(c->r[29],2)&0xFFFFFFFCu; // 8025F0C8
  c->r[31]=R32(c->r[3]+c->r[0]); // 8025F0CC
  cmps(c,0,(int32_t)c->r[31],0); // 8025F0D0
  if (crb(c,2)) { goto L_8025F120; } // 8025F0D4
  cmps(c,0,(int32_t)c->r[29],4); // 8025F0D8
  if (!crb(c,1)) { goto L_8025F0F8; } // 8025F0DC
  W16(c->r[13]+0xFFFF9874u,c->r[29]); // 8025F0E0
  c->lr=0x8025F0E8u; f_80262780(c); // 8025F0E4
  W32(c->r[13]+0xFFFF987Cu,c->r[4]); // 8025F0E8
  W32(c->r[13]+0xFFFF9878u,c->r[3]); // 8025F0EC
  c->r[0]=R32(c->r[30]+0x00000198u); // 8025F0F0
  W32(c->r[13]+0xFFFF9870u,c->r[0]); // 8025F0F4
L_8025F0F8:;
  c->lr=0x8025F0FCu; f_802613A4(c); // 8025F0F8
  c->r[12]=c->r[31]|c->r[31]; // 8025F0FC
  c->r[3]=c->r[29]|c->r[29]; // 8025F100
  c->r[4]=c->r[30]|c->r[30]; // 8025F104
  c->ctr=c->r[12]; // 8025F108
  if (true) { c->lr=0x8025F110u; dispatch(c,c->ctr); } // 8025F10C
  c->lr=0x8025F114u; f_802613E0(c); // 8025F110
  c->lr=0x8025F118u; f_802618EC(c); // 8025F114
  c->r[3]=c->r[30]|c->r[30]; // 8025F118
  c->lr=0x8025F120u; f_8025AD2C(c); // 8025F11C
L_8025F120:;
  c->r[3]=c->r[30]|c->r[30]; // 8025F120
  c->lr=0x8025F128u; f_8025AD2C(c); // 8025F124
  c->r[0]=R32(c->r[1]+0x00000024u); // 8025F128
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8025F12C
  c->r[30]=R32(c->r[1]+0x00000018u); // 8025F130
  c->r[29]=R32(c->r[1]+0x00000014u); // 8025F134
  c->lr=c->r[0]; // 8025F138
  c->r[1]=c->r[1]+0x00000020u; // 8025F13C
  return; // 8025F140
}

// ExternalInterruptHandler
void f_8025F144(Ctx* __restrict c) {
  trace_call(0x8025F144u);
  W32(c->r[4]+0x00000000u,c->r[0]); // 8025F144
  W32(c->r[4]+0x00000004u,c->r[1]); // 8025F148
  W32(c->r[4]+0x00000008u,c->r[2]); // 8025F14C
  {uint32_t ea=c->r[4]+0x00000018u; for(int i=6;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 8025F150
  c->r[0]=mfspr(c,913); // 8025F154
  W32(c->r[4]+0x000001A8u,c->r[0]); // 8025F158
  c->r[0]=mfspr(c,914); // 8025F15C
  W32(c->r[4]+0x000001ACu,c->r[0]); // 8025F160
  c->r[0]=mfspr(c,915); // 8025F164
  W32(c->r[4]+0x000001B0u,c->r[0]); // 8025F168
  c->r[0]=mfspr(c,916); // 8025F16C
  W32(c->r[4]+0x000001B4u,c->r[0]); // 8025F170
  c->r[0]=mfspr(c,917); // 8025F174
  W32(c->r[4]+0x000001B8u,c->r[0]); // 8025F178
  c->r[0]=mfspr(c,918); // 8025F17C
  W32(c->r[4]+0x000001BCu,c->r[0]); // 8025F180
  c->r[0]=mfspr(c,919); // 8025F184
  W32(c->r[4]+0x000001C0u,c->r[0]); // 8025F188
  {uint32_t ea=c->r[1]+0xFFFFFFF8u; W32(ea,c->r[1]); c->r[1]=ea;} // 8025F18C
  f_8025EEA0(c); return; // 8025F190
}

// __OSModuleInit
void f_8025F194(Ctx* __restrict c) {
  trace_call(0x8025F194u);
  c->r[0]=0u+0x00000000u; // 8025F194
  c->r[3]=0u+0x80000000u; // 8025F198
  W32(c->r[3]+0x000030CCu,c->r[0]); // 8025F19C
  W32(c->r[3]+0x000030C8u,c->r[0]); // 8025F1A0
  W32(c->r[3]+0x000030D0u,c->r[0]); // 8025F1A4
  return; // 8025F1A8
}

// OSInitMessageQueue
void f_8025F1AC(Ctx* __restrict c) {
  trace_call(0x8025F1ACu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8025F1AC
  c->r[0]=c->lr; // 8025F1B0
  W32(c->r[1]+0x00000024u,c->r[0]); // 8025F1B4
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8025F1B8
  c->r[31]=c->r[5]|c->r[5]; // 8025F1BC
  W32(c->r[1]+0x00000018u,c->r[30]); // 8025F1C0
  c->r[30]=c->r[4]|c->r[4]; // 8025F1C4
  W32(c->r[1]+0x00000014u,c->r[29]); // 8025F1C8
  c->r[29]=c->r[3]|c->r[3]; // 8025F1CC
  c->lr=0x8025F1D4u; f_80261388(c); // 8025F1D0
  c->r[3]=c->r[29]+0x00000008u; // 8025F1D4
  c->lr=0x8025F1DCu; f_80261388(c); // 8025F1D8
  c->r[0]=0u+0x00000000u; // 8025F1DC
  W32(c->r[29]+0x00000010u,c->r[30]); // 8025F1E0
  W32(c->r[29]+0x00000014u,c->r[31]); // 8025F1E4
  W32(c->r[29]+0x00000018u,c->r[0]); // 8025F1E8
  W32(c->r[29]+0x0000001Cu,c->r[0]); // 8025F1EC
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8025F1F0
  c->r[30]=R32(c->r[1]+0x00000018u); // 8025F1F4
  c->r[29]=R32(c->r[1]+0x00000014u); // 8025F1F8
  c->r[0]=R32(c->r[1]+0x00000024u); // 8025F1FC
  c->lr=c->r[0]; // 8025F200
  c->r[1]=c->r[1]+0x00000020u; // 8025F204
  return; // 8025F208
}

// OSSendMessage
void f_8025F20C(Ctx* __restrict c) {
  trace_call(0x8025F20Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8025F20C
  c->r[0]=c->lr; // 8025F210
  W32(c->r[1]+0x00000024u,c->r[0]); // 8025F214
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8025F218
  c->r[31]=c->r[5]|c->r[5]; // 8025F21C
  W32(c->r[1]+0x00000018u,c->r[30]); // 8025F220
  W32(c->r[1]+0x00000014u,c->r[29]); // 8025F224
  c->r[29]=c->r[4]|c->r[4]; // 8025F228
  W32(c->r[1]+0x00000010u,c->r[28]); // 8025F22C
  c->r[28]=c->r[3]|c->r[3]; // 8025F230
  c->lr=0x8025F238u; f_8025EA10(c); // 8025F234
  c->r[30]=c->r[3]|c->r[3]; // 8025F238
  c->r[31]=rotl(c->r[31],0)&0x00000001u; // 8025F23C
  goto L_8025F264; // 8025F240
L_8025F244:;
  cmps(c,0,(int32_t)c->r[31],0); // 8025F244
  if (!crb(c,2)) { goto L_8025F25C; } // 8025F248
  c->r[3]=c->r[30]|c->r[30]; // 8025F24C
  c->lr=0x8025F254u; f_8025EA38(c); // 8025F250
  c->r[3]=0u+0x00000000u; // 8025F254
  goto L_8025F2B4; // 8025F258
L_8025F25C:;
  c->r[3]=c->r[28]|c->r[28]; // 8025F25C
  c->lr=0x8025F264u; f_802623D4(c); // 8025F260
L_8025F264:;
  c->r[4]=R32(c->r[28]+0x0000001Cu); // 8025F264
  c->r[6]=R32(c->r[28]+0x00000014u); // 8025F268
  cmps(c,0,(int32_t)c->r[6],(int32_t)c->r[4]); // 8025F26C
  if (!crb(c,1)) { IRQCHK(c); goto L_8025F244; } // 8025F270
  c->r[0]=R32(c->r[28]+0x00000018u); // 8025F274
  c->r[3]=c->r[28]+0x00000008u; // 8025F278
  c->r[5]=R32(c->r[28]+0x00000010u); // 8025F27C
  c->r[4]=c->r[0]+c->r[4]; // 8025F280
  c->r[0]=divw((int32_t)c->r[4],(int32_t)c->r[6]); // 8025F284
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)c->r[6]); // 8025F288
  c->r[0]=c->r[4]-c->r[0]; // 8025F28C
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 8025F290
  W32(c->r[5]+c->r[0],c->r[29]); // 8025F294
  c->r[4]=R32(c->r[28]+0x0000001Cu); // 8025F298
  c->r[0]=c->r[4]+0x00000001u; // 8025F29C
  W32(c->r[28]+0x0000001Cu,c->r[0]); // 8025F2A0
  c->lr=0x8025F2A8u; f_802624C0(c); // 8025F2A4
  c->r[3]=c->r[30]|c->r[30]; // 8025F2A8
  c->lr=0x8025F2B0u; f_8025EA38(c); // 8025F2AC
  c->r[3]=0u+0x00000001u; // 8025F2B0
L_8025F2B4:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 8025F2B4
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8025F2B8
  c->r[30]=R32(c->r[1]+0x00000018u); // 8025F2BC
  c->r[29]=R32(c->r[1]+0x00000014u); // 8025F2C0
  c->r[28]=R32(c->r[1]+0x00000010u); // 8025F2C4
  c->lr=c->r[0]; // 8025F2C8
  c->r[1]=c->r[1]+0x00000020u; // 8025F2CC
  return; // 8025F2D0
}

// OSReceiveMessage
void f_8025F2D4(Ctx* __restrict c) {
  trace_call(0x8025F2D4u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8025F2D4
  c->r[0]=c->lr; // 8025F2D8
  W32(c->r[1]+0x00000024u,c->r[0]); // 8025F2DC
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8025F2E0
  c->r[31]=c->r[3]|c->r[3]; // 8025F2E4
  W32(c->r[1]+0x00000018u,c->r[30]); // 8025F2E8
  c->r[30]=c->r[5]|c->r[5]; // 8025F2EC
  W32(c->r[1]+0x00000014u,c->r[29]); // 8025F2F0
  W32(c->r[1]+0x00000010u,c->r[28]); // 8025F2F4
  c->r[28]=c->r[4]|c->r[4]; // 8025F2F8
  c->lr=0x8025F300u; f_8025EA10(c); // 8025F2FC
  c->r[29]=c->r[3]|c->r[3]; // 8025F300
  c->r[30]=rotl(c->r[30],0)&0x00000001u; // 8025F304
  goto L_8025F32C; // 8025F308
L_8025F30C:;
  cmps(c,0,(int32_t)c->r[30],0); // 8025F30C
  if (!crb(c,2)) { goto L_8025F324; } // 8025F310
  c->r[3]=c->r[29]|c->r[29]; // 8025F314
  c->lr=0x8025F31Cu; f_8025EA38(c); // 8025F318
  c->r[3]=0u+0x00000000u; // 8025F31C
  goto L_8025F390; // 8025F320
L_8025F324:;
  c->r[3]=c->r[31]+0x00000008u; // 8025F324
  c->lr=0x8025F32Cu; f_802623D4(c); // 8025F328
L_8025F32C:;
  c->r[0]=R32(c->r[31]+0x0000001Cu); // 8025F32C
  cmps(c,0,(int32_t)c->r[0],0); // 8025F330
  if (crb(c,2)) { IRQCHK(c); goto L_8025F30C; } // 8025F334
  cmps(c,0,(int32_t)c->r[28],0); // 8025F338
  if (crb(c,2)) { goto L_8025F354; } // 8025F33C
  c->r[0]=R32(c->r[31]+0x00000018u); // 8025F340
  c->r[3]=R32(c->r[31]+0x00000010u); // 8025F344
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 8025F348
  c->r[0]=R32(c->r[3]+c->r[0]); // 8025F34C
  W32(c->r[28]+0x00000000u,c->r[0]); // 8025F350
L_8025F354:;
  c->r[4]=R32(c->r[31]+0x00000018u); // 8025F354
  c->r[3]=c->r[31]|c->r[31]; // 8025F358
  c->r[6]=R32(c->r[31]+0x00000014u); // 8025F35C
  c->r[7]=c->r[4]+0x00000001u; // 8025F360
  c->r[4]=R32(c->r[31]+0x0000001Cu); // 8025F364
  c->r[5]=divw((int32_t)c->r[7],(int32_t)c->r[6]); // 8025F368
  c->r[0]=c->r[4]+0xFFFFFFFFu; // 8025F36C
  W32(c->r[31]+0x0000001Cu,c->r[0]); // 8025F370
  c->r[0]=(uint32_t)((int32_t)c->r[5]*(int32_t)c->r[6]); // 8025F374
  c->r[0]=c->r[7]-c->r[0]; // 8025F378
  W32(c->r[31]+0x00000018u,c->r[0]); // 8025F37C
  c->lr=0x8025F384u; f_802624C0(c); // 8025F380
  c->r[3]=c->r[29]|c->r[29]; // 8025F384
  c->lr=0x8025F38Cu; f_8025EA38(c); // 8025F388
  c->r[3]=0u+0x00000001u; // 8025F38C
L_8025F390:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 8025F390
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8025F394
  c->r[30]=R32(c->r[1]+0x00000018u); // 8025F398
  c->r[29]=R32(c->r[1]+0x00000014u); // 8025F39C
  c->r[28]=R32(c->r[1]+0x00000010u); // 8025F3A0
  c->lr=c->r[0]; // 8025F3A4
  c->r[1]=c->r[1]+0x00000020u; // 8025F3A8
  return; // 8025F3AC
}

// OSJamMessage
void f_8025F3B0(Ctx* __restrict c) {
  trace_call(0x8025F3B0u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8025F3B0
  c->r[0]=c->lr; // 8025F3B4
  W32(c->r[1]+0x00000024u,c->r[0]); // 8025F3B8
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8025F3BC
  c->r[31]=c->r[5]|c->r[5]; // 8025F3C0
  W32(c->r[1]+0x00000018u,c->r[30]); // 8025F3C4
  W32(c->r[1]+0x00000014u,c->r[29]); // 8025F3C8
  c->r[29]=c->r[4]|c->r[4]; // 8025F3CC
  W32(c->r[1]+0x00000010u,c->r[28]); // 8025F3D0
  c->r[28]=c->r[3]|c->r[3]; // 8025F3D4
  c->lr=0x8025F3DCu; f_8025EA10(c); // 8025F3D8
  c->r[30]=c->r[3]|c->r[3]; // 8025F3DC
  c->r[31]=rotl(c->r[31],0)&0x00000001u; // 8025F3E0
  goto L_8025F408; // 8025F3E4
L_8025F3E8:;
  cmps(c,0,(int32_t)c->r[31],0); // 8025F3E8
  if (!crb(c,2)) { goto L_8025F400; } // 8025F3EC
  c->r[3]=c->r[30]|c->r[30]; // 8025F3F0
  c->lr=0x8025F3F8u; f_8025EA38(c); // 8025F3F4
  c->r[3]=0u+0x00000000u; // 8025F3F8
  goto L_8025F460; // 8025F3FC
L_8025F400:;
  c->r[3]=c->r[28]|c->r[28]; // 8025F400
  c->lr=0x8025F408u; f_802623D4(c); // 8025F404
L_8025F408:;
  c->r[6]=R32(c->r[28]+0x00000014u); // 8025F408
  c->r[0]=R32(c->r[28]+0x0000001Cu); // 8025F40C
  cmps(c,0,(int32_t)c->r[6],(int32_t)c->r[0]); // 8025F410
  if (!crb(c,1)) { IRQCHK(c); goto L_8025F3E8; } // 8025F414
  c->r[0]=R32(c->r[28]+0x00000018u); // 8025F418
  c->r[3]=c->r[28]+0x00000008u; // 8025F41C
  c->r[4]=R32(c->r[28]+0x00000010u); // 8025F420
  c->r[5]=c->r[6]+c->r[0]; // 8025F424
  c->r[5]=c->r[5]+0xFFFFFFFFu; // 8025F428
  c->r[0]=divw((int32_t)c->r[5],(int32_t)c->r[6]); // 8025F42C
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)c->r[6]); // 8025F430
  c->r[0]=c->r[5]-c->r[0]; // 8025F434
  W32(c->r[28]+0x00000018u,c->r[0]); // 8025F438
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 8025F43C
  W32(c->r[4]+c->r[0],c->r[29]); // 8025F440
  c->r[4]=R32(c->r[28]+0x0000001Cu); // 8025F444
  c->r[0]=c->r[4]+0x00000001u; // 8025F448
  W32(c->r[28]+0x0000001Cu,c->r[0]); // 8025F44C
  c->lr=0x8025F454u; f_802624C0(c); // 8025F450
  c->r[3]=c->r[30]|c->r[30]; // 8025F454
  c->lr=0x8025F45Cu; f_8025EA38(c); // 8025F458
  c->r[3]=0u+0x00000001u; // 8025F45C
L_8025F460:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 8025F460
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8025F464
  c->r[30]=R32(c->r[1]+0x00000018u); // 8025F468
  c->r[29]=R32(c->r[1]+0x00000014u); // 8025F46C
  c->r[28]=R32(c->r[1]+0x00000010u); // 8025F470
  c->lr=c->r[0]; // 8025F474
  c->r[1]=c->r[1]+0x00000020u; // 8025F478
  return; // 8025F47C
}

// fn_8025F480
void f_8025F480(Ctx* __restrict c) {
  trace_call(0x8025F480u);
  c->r[3]=0u+0x80000000u; // 8025F480
  c->r[3]=R32(c->r[3]+0x00003100u); // 8025F484
  return; // 8025F488
}

// OSGetPhysicalMem2Size
void f_8025F48C(Ctx* __restrict c) {
  trace_call(0x8025F48Cu);
  c->r[3]=0u+0x80000000u; // 8025F48C
  c->r[3]=R32(c->r[3]+0x00003118u); // 8025F490
  return; // 8025F494
}

// OSGetConsoleSimulatedMem1Size
void f_8025F498(Ctx* __restrict c) {
  trace_call(0x8025F498u);
  c->r[3]=0u+0x80000000u; // 8025F498
  c->r[3]=R32(c->r[3]+0x00003104u); // 8025F49C
  return; // 8025F4A0
}

// OSGetConsoleSimulatedMem2Size
void f_8025F4A4(Ctx* __restrict c) {
  trace_call(0x8025F4A4u);
  c->r[3]=0u+0x80000000u; // 8025F4A4
  c->r[3]=R32(c->r[3]+0x0000311Cu); // 8025F4A8
  return; // 8025F4AC
}

// OnShutdown
void f_8025F4B0(Ctx* __restrict c) {
  trace_call(0x8025F4B0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8025F4B0
  c->r[0]=c->lr; // 8025F4B4
  cmps(c,0,(int32_t)c->r[3],0); // 8025F4B8
  W32(c->r[1]+0x00000014u,c->r[0]); // 8025F4BC
  if (crb(c,2)) { goto L_8025F4D8; } // 8025F4C0
  c->r[0]=0u+0x000000FFu; // 8025F4C4
  c->r[3]=0u+0xCC000000u; // 8025F4C8
  W16(c->r[3]+0x00004010u,c->r[0]); // 8025F4CC
  c->r[3]=0u+0xF0000000u; // 8025F4D0
  c->lr=0x8025F4D8u; f_8025EDA0(c); // 8025F4D4
L_8025F4D8:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8025F4D8
  c->r[3]=0u+0x00000001u; // 8025F4DC
  c->lr=c->r[0]; // 8025F4E0
  c->r[1]=c->r[1]+0x00000010u; // 8025F4E4
  return; // 8025F4E8
}

// MEMIntrruptHandler
void f_8025F4EC(Ctx* __restrict c) {
  trace_call(0x8025F4ECu);
  c->r[8]=0u+0xCC000000u; // 8025F4EC
  c->r[3]=0u+0x805E0000u; // 8025F4F0
  c->r[5]=R16(c->r[8]+0x0000401Eu); // 8025F4F4
  c->r[0]=0u+0x00000000u; // 8025F4F8
  c->r[7]=R16(c->r[8]+0x00004024u); // 8025F4FC
  c->r[3]=c->r[3]+0x00007DF0u; // 8025F500
  c->r[6]=R16(c->r[8]+0x00004022u); // 8025F504
  c->r[6]=(rotl(c->r[7],16)&0x03FF0000u)|(c->r[6]&~0x03FF0000u); // 8025F508
  W16(c->r[8]+0x00004020u,c->r[0]); // 8025F50C
  c->r[12]=R32(c->r[3]+0x0000003Cu); // 8025F510
  cmps(c,0,(int32_t)c->r[12],0); // 8025F514
  if (crb(c,2)) { goto L_8025F52C; } // 8025F518
  c->r[3]=0u+0x0000000Fu; // 8025F51C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8025F520
  c->ctr=c->r[12]; // 8025F524
  if (true) { dispatch(c,c->ctr); return; } // 8025F528
L_8025F52C:;
  c->r[3]=0u+0x0000000Fu; // 8025F52C
  f_8025B504(c); return; // 8025F530
}

// fn_8025F534
void f_8025F534(Ctx* __restrict c) {
  trace_call(0x8025F534u);
  c->r[7]=0u+0x00000000u; // 8025F534
  c->r[4]=0u+0x00000000u; // 8025F538
  c->r[4]=c->r[4]+0x00000002u; // 8025F53C
  c->r[3]=0u+0x80000000u; // 8025F540
  c->r[3]=c->r[3]+0x000001FFu; // 8025F544
  c->r[6]=0u+0x01000000u; // 8025F548
  c->r[6]=c->r[6]+0x00000002u; // 8025F54C
  c->r[5]=0u+0x81000000u; // 8025F550
  c->r[5]=c->r[5]+0x000000FFu; // 8025F554
  /* isync */ // 8025F558
  mtspr(c,536,c->r[7]); // 8025F55C
  mtspr(c,537,c->r[4]); // 8025F560
  mtspr(c,536,c->r[3]); // 8025F564
  /* isync */ // 8025F568
  mtspr(c,528,c->r[7]); // 8025F56C
  mtspr(c,529,c->r[4]); // 8025F570
  mtspr(c,528,c->r[3]); // 8025F574
  /* isync */ // 8025F578
  mtspr(c,540,c->r[7]); // 8025F57C
  mtspr(c,541,c->r[6]); // 8025F580
  mtspr(c,540,c->r[5]); // 8025F584
  /* isync */ // 8025F588
  mtspr(c,532,c->r[7]); // 8025F58C
  mtspr(c,533,c->r[6]); // 8025F590
  mtspr(c,532,c->r[5]); // 8025F594
  /* isync */ // 8025F598
  c->r[3]=c->msr; // 8025F59C
  c->r[3]=c->r[3]|0x00000030u; // 8025F5A0
  mtspr(c,27,c->r[3]); // 8025F5A4
  c->r[3]=c->lr; // 8025F5A8
  mtspr(c,26,c->r[3]); // 8025F5AC
  return; /* rfi */ // 8025F5B0
}

// fn_8025F5B4
void f_8025F5B4(Ctx* __restrict c) {
  trace_call(0x8025F5B4u);
  c->r[7]=0u+0x00000000u; // 8025F5B4
  c->r[4]=0u+0x00000000u; // 8025F5B8
  c->r[4]=c->r[4]+0x00000002u; // 8025F5BC
  c->r[3]=0u+0x80000000u; // 8025F5C0
  c->r[3]=c->r[3]+0x000003FFu; // 8025F5C4
  c->r[6]=0u+0x02000000u; // 8025F5C8
  c->r[6]=c->r[6]+0x00000002u; // 8025F5CC
  c->r[5]=0u+0x82000000u; // 8025F5D0
  c->r[5]=c->r[5]+0x000001FFu; // 8025F5D4
  /* isync */ // 8025F5D8
  mtspr(c,536,c->r[7]); // 8025F5DC
  mtspr(c,537,c->r[4]); // 8025F5E0
  mtspr(c,536,c->r[3]); // 8025F5E4
  /* isync */ // 8025F5E8
  mtspr(c,528,c->r[7]); // 8025F5EC
  mtspr(c,529,c->r[4]); // 8025F5F0
  mtspr(c,528,c->r[3]); // 8025F5F4
  /* isync */ // 8025F5F8
  mtspr(c,540,c->r[7]); // 8025F5FC
  mtspr(c,541,c->r[6]); // 8025F600
  mtspr(c,540,c->r[5]); // 8025F604
  /* isync */ // 8025F608
  mtspr(c,532,c->r[7]); // 8025F60C
  mtspr(c,533,c->r[6]); // 8025F610
  mtspr(c,532,c->r[5]); // 8025F614
  /* isync */ // 8025F618
  c->r[3]=c->msr; // 8025F61C
  c->r[3]=c->r[3]|0x00000030u; // 8025F620
  mtspr(c,27,c->r[3]); // 8025F624
  c->r[3]=c->lr; // 8025F628
  mtspr(c,26,c->r[3]); // 8025F62C
  return; /* rfi */ // 8025F630
}

// fn_8025F634
void f_8025F634(Ctx* __restrict c) {
  trace_call(0x8025F634u);
  c->r[7]=0u+0x00000000u; // 8025F634
  c->r[4]=0u+0x10000000u; // 8025F638
  c->r[4]=c->r[4]+0x00000002u; // 8025F63C
  c->r[3]=0u+0x90000000u; // 8025F640
  c->r[3]=c->r[3]+0x000003FFu; // 8025F644
  c->r[6]=0u+0x10000000u; // 8025F648
  c->r[6]=c->r[6]+0x0000002Au; // 8025F64C
  c->r[5]=0u+0xD0000000u; // 8025F650
  c->r[5]=c->r[5]+0x000007FFu; // 8025F654
  /* isync */ // 8025F658
  mtspr(c,568,c->r[7]); // 8025F65C
  mtspr(c,569,c->r[4]); // 8025F660
  mtspr(c,568,c->r[3]); // 8025F664
  /* isync */ // 8025F668
  mtspr(c,560,c->r[7]); // 8025F66C
  mtspr(c,561,c->r[4]); // 8025F670
  mtspr(c,560,c->r[3]); // 8025F674
  /* isync */ // 8025F678
  mtspr(c,570,c->r[7]); // 8025F67C
  mtspr(c,571,c->r[6]); // 8025F680
  mtspr(c,570,c->r[5]); // 8025F684
  /* isync */ // 8025F688
  mtspr(c,562,c->r[7]); // 8025F68C
  mtspr(c,563,c->r[7]); // 8025F690
  /* isync */ // 8025F694
  c->r[4]=0u+0x12000000u; // 8025F698
  c->r[4]=c->r[4]+0x00000002u; // 8025F69C
  c->r[3]=0u+0x92000000u; // 8025F6A0
  c->r[3]=c->r[3]+0x000001FFu; // 8025F6A4
  c->r[6]=0u+0x13000000u; // 8025F6A8
  c->r[6]=c->r[6]+0x00000002u; // 8025F6AC
  c->r[5]=0u+0x93000000u; // 8025F6B0
  c->r[5]=c->r[5]+0x0000007Fu; // 8025F6B4
  /* isync */ // 8025F6B8
  mtspr(c,572,c->r[7]); // 8025F6BC
  mtspr(c,573,c->r[4]); // 8025F6C0
  mtspr(c,572,c->r[3]); // 8025F6C4
  /* isync */ // 8025F6C8
  mtspr(c,564,c->r[7]); // 8025F6CC
  mtspr(c,565,c->r[4]); // 8025F6D0
  mtspr(c,564,c->r[3]); // 8025F6D4
  /* isync */ // 8025F6D8
  mtspr(c,574,c->r[7]); // 8025F6DC
  mtspr(c,575,c->r[6]); // 8025F6E0
  mtspr(c,574,c->r[5]); // 8025F6E4
  /* isync */ // 8025F6E8
  mtspr(c,566,c->r[7]); // 8025F6EC
  mtspr(c,567,c->r[6]); // 8025F6F0
  mtspr(c,566,c->r[5]); // 8025F6F4
  /* isync */ // 8025F6F8
  c->r[3]=c->msr; // 8025F6FC
  c->r[3]=c->r[3]|0x00000030u; // 8025F700
  mtspr(c,27,c->r[3]); // 8025F704
  c->r[3]=c->lr; // 8025F708
  mtspr(c,26,c->r[3]); // 8025F70C
  return; /* rfi */ // 8025F710
}

// fn_8025F714
void f_8025F714(Ctx* __restrict c) {
  trace_call(0x8025F714u);
  c->r[7]=0u+0x00000000u; // 8025F714
  c->r[4]=0u+0x10000000u; // 8025F718
  c->r[4]=c->r[4]+0x00000002u; // 8025F71C
  c->r[3]=0u+0x90000000u; // 8025F720
  c->r[3]=c->r[3]+0x000003FFu; // 8025F724
  c->r[6]=0u+0x10000000u; // 8025F728
  c->r[6]=c->r[6]+0x0000002Au; // 8025F72C
  c->r[5]=0u+0xD0000000u; // 8025F730
  c->r[5]=c->r[5]+0x000007FFu; // 8025F734
  /* isync */ // 8025F738
  mtspr(c,568,c->r[7]); // 8025F73C
  mtspr(c,569,c->r[4]); // 8025F740
  mtspr(c,568,c->r[3]); // 8025F744
  /* isync */ // 8025F748
  mtspr(c,560,c->r[7]); // 8025F74C
  mtspr(c,561,c->r[4]); // 8025F750
  mtspr(c,560,c->r[3]); // 8025F754
  /* isync */ // 8025F758
  mtspr(c,570,c->r[7]); // 8025F75C
  mtspr(c,571,c->r[6]); // 8025F760
  mtspr(c,570,c->r[5]); // 8025F764
  /* isync */ // 8025F768
  mtspr(c,562,c->r[7]); // 8025F76C
  mtspr(c,563,c->r[7]); // 8025F770
  /* isync */ // 8025F774
  c->r[4]=0u+0x12000000u; // 8025F778
  c->r[4]=c->r[4]+0x00000002u; // 8025F77C
  c->r[3]=0u+0x92000000u; // 8025F780
  c->r[3]=c->r[3]+0x000001FFu; // 8025F784
  c->r[6]=0u+0x13000000u; // 8025F788
  c->r[6]=c->r[6]+0x00000002u; // 8025F78C
  c->r[5]=0u+0x93000000u; // 8025F790
  c->r[5]=c->r[5]+0x000000FFu; // 8025F794
  /* isync */ // 8025F798
  mtspr(c,572,c->r[7]); // 8025F79C
  mtspr(c,573,c->r[4]); // 8025F7A0
  mtspr(c,572,c->r[3]); // 8025F7A4
  /* isync */ // 8025F7A8
  mtspr(c,564,c->r[7]); // 8025F7AC
  mtspr(c,565,c->r[4]); // 8025F7B0
  mtspr(c,564,c->r[3]); // 8025F7B4
  /* isync */ // 8025F7B8
  mtspr(c,574,c->r[7]); // 8025F7BC
  mtspr(c,575,c->r[6]); // 8025F7C0
  mtspr(c,574,c->r[5]); // 8025F7C4
  /* isync */ // 8025F7C8
  mtspr(c,566,c->r[7]); // 8025F7CC
  mtspr(c,567,c->r[6]); // 8025F7D0
  mtspr(c,566,c->r[5]); // 8025F7D4
  /* isync */ // 8025F7D8
  c->r[3]=c->msr; // 8025F7DC
  c->r[3]=c->r[3]|0x00000030u; // 8025F7E0
  mtspr(c,27,c->r[3]); // 8025F7E4
  c->r[3]=c->lr; // 8025F7E8
  mtspr(c,26,c->r[3]); // 8025F7EC
  return; /* rfi */ // 8025F7F0
}

// fn_8025F7F4
void f_8025F7F4(Ctx* __restrict c) {
  trace_call(0x8025F7F4u);
  c->r[7]=0u+0x00000000u; // 8025F7F4
  c->r[4]=0u+0x10000000u; // 8025F7F8
  c->r[4]=c->r[4]+0x00000002u; // 8025F7FC
  c->r[3]=0u+0x90000000u; // 8025F800
  c->r[3]=c->r[3]+0x000007FFu; // 8025F804
  c->r[6]=0u+0x10000000u; // 8025F808
  c->r[6]=c->r[6]+0x0000002Au; // 8025F80C
  c->r[5]=0u+0xD0000000u; // 8025F810
  c->r[5]=c->r[5]+0x000007FFu; // 8025F814
  /* isync */ // 8025F818
  mtspr(c,568,c->r[7]); // 8025F81C
  mtspr(c,569,c->r[4]); // 8025F820
  mtspr(c,568,c->r[3]); // 8025F824
  /* isync */ // 8025F828
  mtspr(c,560,c->r[7]); // 8025F82C
  mtspr(c,561,c->r[4]); // 8025F830
  mtspr(c,560,c->r[3]); // 8025F834
  /* isync */ // 8025F838
  mtspr(c,570,c->r[7]); // 8025F83C
  mtspr(c,571,c->r[6]); // 8025F840
  mtspr(c,570,c->r[5]); // 8025F844
  /* isync */ // 8025F848
  mtspr(c,562,c->r[7]); // 8025F84C
  mtspr(c,563,c->r[7]); // 8025F850
  /* isync */ // 8025F854
  mtspr(c,564,c->r[7]); // 8025F858
  mtspr(c,565,c->r[7]); // 8025F85C
  /* isync */ // 8025F860
  mtspr(c,566,c->r[7]); // 8025F864
  mtspr(c,567,c->r[7]); // 8025F868
  /* isync */ // 8025F86C
  mtspr(c,572,c->r[7]); // 8025F870
  mtspr(c,573,c->r[7]); // 8025F874
  /* isync */ // 8025F878
  mtspr(c,574,c->r[7]); // 8025F87C
  mtspr(c,575,c->r[7]); // 8025F880
  /* isync */ // 8025F884
  c->r[3]=c->msr; // 8025F888
  c->r[3]=c->r[3]|0x00000030u; // 8025F88C
  mtspr(c,27,c->r[3]); // 8025F890
  c->r[3]=c->lr; // 8025F894
  mtspr(c,26,c->r[3]); // 8025F898
  return; /* rfi */ // 8025F89C
}

// fn_8025F8A0
void f_8025F8A0(Ctx* __restrict c) {
  trace_call(0x8025F8A0u);
  c->r[7]=0u+0x00000000u; // 8025F8A0
  c->r[4]=0u+0x10000000u; // 8025F8A4
  c->r[4]=c->r[4]+0x00000002u; // 8025F8A8
  c->r[3]=0u+0x90000000u; // 8025F8AC
  c->r[3]=c->r[3]+0x000007FFu; // 8025F8B0
  c->r[6]=0u+0x10000000u; // 8025F8B4
  c->r[6]=c->r[6]+0x0000002Au; // 8025F8B8
  c->r[5]=0u+0xD0000000u; // 8025F8BC
  c->r[5]=c->r[5]+0x00000FFFu; // 8025F8C0
  /* isync */ // 8025F8C4
  mtspr(c,568,c->r[7]); // 8025F8C8
  mtspr(c,569,c->r[4]); // 8025F8CC
  mtspr(c,568,c->r[3]); // 8025F8D0
  /* isync */ // 8025F8D4
  mtspr(c,560,c->r[7]); // 8025F8D8
  mtspr(c,561,c->r[4]); // 8025F8DC
  mtspr(c,560,c->r[3]); // 8025F8E0
  /* isync */ // 8025F8E4
  mtspr(c,570,c->r[7]); // 8025F8E8
  mtspr(c,571,c->r[6]); // 8025F8EC
  mtspr(c,570,c->r[5]); // 8025F8F0
  /* isync */ // 8025F8F4
  mtspr(c,562,c->r[7]); // 8025F8F8
  mtspr(c,563,c->r[7]); // 8025F8FC
  /* isync */ // 8025F900
  c->r[4]=0u+0x14000000u; // 8025F904
  c->r[4]=c->r[4]+0x00000002u; // 8025F908
  c->r[3]=0u+0x94000000u; // 8025F90C
  c->r[3]=c->r[3]+0x000003FFu; // 8025F910
  c->r[6]=0u+0x16000000u; // 8025F914
  c->r[6]=c->r[6]+0x00000002u; // 8025F918
  c->r[5]=0u+0x96000000u; // 8025F91C
  c->r[5]=c->r[5]+0x000001FFu; // 8025F920
  /* isync */ // 8025F924
  mtspr(c,572,c->r[7]); // 8025F928
  mtspr(c,573,c->r[4]); // 8025F92C
  mtspr(c,572,c->r[3]); // 8025F930
  /* isync */ // 8025F934
  mtspr(c,564,c->r[7]); // 8025F938
  mtspr(c,565,c->r[4]); // 8025F93C
  mtspr(c,564,c->r[3]); // 8025F940
  /* isync */ // 8025F944
  mtspr(c,574,c->r[7]); // 8025F948
  mtspr(c,575,c->r[6]); // 8025F94C
  mtspr(c,574,c->r[5]); // 8025F950
  /* isync */ // 8025F954
  mtspr(c,566,c->r[7]); // 8025F958
  mtspr(c,567,c->r[6]); // 8025F95C
  mtspr(c,566,c->r[5]); // 8025F960
  /* isync */ // 8025F964
  c->r[3]=c->msr; // 8025F968
  c->r[3]=c->r[3]|0x00000030u; // 8025F96C
  mtspr(c,27,c->r[3]); // 8025F970
  c->r[3]=c->lr; // 8025F974
  mtspr(c,26,c->r[3]); // 8025F978
  return; /* rfi */ // 8025F97C
}

// fn_8025F980
void f_8025F980(Ctx* __restrict c) {
  trace_call(0x8025F980u);
  c->r[7]=0u+0x00000000u; // 8025F980
  c->r[4]=0u+0x10000000u; // 8025F984
  c->r[4]=c->r[4]+0x00000002u; // 8025F988
  c->r[3]=0u+0x90000000u; // 8025F98C
  c->r[3]=c->r[3]+0x00000FFFu; // 8025F990
  c->r[6]=0u+0x10000000u; // 8025F994
  c->r[6]=c->r[6]+0x0000002Au; // 8025F998
  c->r[5]=0u+0xD0000000u; // 8025F99C
  c->r[5]=c->r[5]+0x00000FFFu; // 8025F9A0
  /* isync */ // 8025F9A4
  mtspr(c,568,c->r[7]); // 8025F9A8
  mtspr(c,569,c->r[4]); // 8025F9AC
  mtspr(c,568,c->r[3]); // 8025F9B0
  /* isync */ // 8025F9B4
  mtspr(c,560,c->r[7]); // 8025F9B8
  mtspr(c,561,c->r[4]); // 8025F9BC
  mtspr(c,560,c->r[3]); // 8025F9C0
  /* isync */ // 8025F9C4
  mtspr(c,570,c->r[7]); // 8025F9C8
  mtspr(c,571,c->r[6]); // 8025F9CC
  mtspr(c,570,c->r[5]); // 8025F9D0
  /* isync */ // 8025F9D4
  mtspr(c,562,c->r[7]); // 8025F9D8
  mtspr(c,563,c->r[7]); // 8025F9DC
  /* isync */ // 8025F9E0
  mtspr(c,564,c->r[7]); // 8025F9E4
  mtspr(c,565,c->r[7]); // 8025F9E8
  /* isync */ // 8025F9EC
  mtspr(c,566,c->r[7]); // 8025F9F0
  mtspr(c,567,c->r[7]); // 8025F9F4
  /* isync */ // 8025F9F8
  mtspr(c,572,c->r[7]); // 8025F9FC
  mtspr(c,573,c->r[7]); // 8025FA00
  /* isync */ // 8025FA04
  mtspr(c,574,c->r[7]); // 8025FA08
  mtspr(c,575,c->r[7]); // 8025FA0C
  /* isync */ // 8025FA10
  c->r[3]=c->msr; // 8025FA14
  c->r[3]=c->r[3]|0x00000030u; // 8025FA18
  mtspr(c,27,c->r[3]); // 8025FA1C
  c->r[3]=c->lr; // 8025FA20
  mtspr(c,26,c->r[3]); // 8025FA24
  return; /* rfi */ // 8025FA28
}

// ConfigMEM_ES1_0
void f_8025FA2C(Ctx* __restrict c) {
  trace_call(0x8025FA2Cu);
  c->r[7]=0u+0x00000000u; // 8025FA2C
  c->r[4]=0u+0x00000000u; // 8025FA30
  c->r[4]=c->r[4]+0x00000002u; // 8025FA34
  c->r[3]=0u+0x80000000u; // 8025FA38
  c->r[3]=c->r[3]+0x00000FFFu; // 8025FA3C
  /* isync */ // 8025FA40
  mtspr(c,536,c->r[7]); // 8025FA44
  mtspr(c,537,c->r[4]); // 8025FA48
  mtspr(c,536,c->r[3]); // 8025FA4C
  /* isync */ // 8025FA50
  mtspr(c,528,c->r[7]); // 8025FA54
  mtspr(c,529,c->r[4]); // 8025FA58
  mtspr(c,528,c->r[3]); // 8025FA5C
  /* isync */ // 8025FA60
  c->r[3]=c->msr; // 8025FA64
  c->r[3]=c->r[3]|0x00000030u; // 8025FA68
  mtspr(c,27,c->r[3]); // 8025FA6C
  c->r[3]=c->lr; // 8025FA70
  mtspr(c,26,c->r[3]); // 8025FA74
  return; /* rfi */ // 8025FA78
}

// RealMode
void f_8025FA7C(Ctx* __restrict c) {
  trace_call(0x8025FA7Cu);
  c->r[3]=rotl(c->r[3],0)&0x3FFFFFFFu; // 8025FA7C
  mtspr(c,26,c->r[3]); // 8025FA80
  c->r[3]=c->msr; // 8025FA84
  c->r[3]=rotl(c->r[3],0)&0xFFFFFFCFu; // 8025FA88
  mtspr(c,27,c->r[3]); // 8025FA8C
  return; /* rfi */ // 8025FA90
}

// BATConfig
void f_8025FA94(Ctx* __restrict c) {
  trace_call(0x8025FA94u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8025FA94
  c->r[0]=c->lr; // 8025FA98
  c->r[3]=0u+0x80000000u; // 8025FA9C
  W32(c->r[1]+0x00000014u,c->r[0]); // 8025FAA0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8025FAA4
  c->r[0]=R32(c->r[3]+0x00003138u); // 8025FAA8
  cmps(c,0,(int32_t)c->r[0],0); // 8025FAAC
  if (!crb(c,2)) { goto L_8025FAD0; } // 8025FAB0
  c->r[0]=0u+0x80260000u; // 8025FAB4
  c->r[0]=addc(c,c->r[0],0xFFFFF480u,0); cr0(c,c->r[0]); // 8025FAB8
  if (!crb(c,2)) { goto L_8025FAD0; } // 8025FABC
  c->r[3]=0u+0x80260000u; // 8025FAC0
  c->r[3]=c->r[3]+0xFFFFFA2Cu; // 8025FAC4
  c->lr=0x8025FACCu; f_8025FA7C(c); // 8025FAC8
  goto L_8025FBD0; // 8025FACC
L_8025FAD0:;
  c->r[3]=0u+0x80000000u; // 8025FAD0
  c->r[31]=R32(c->r[3]+0x00003104u); // 8025FAD4
  c->r[0]=R32(c->r[3]+0x00003100u); // 8025FAD8
  cmpu(c,0,c->r[31],c->r[0]); // 8025FADC
  if (!crb(c,0)) { goto L_8025FB08; } // 8025FAE0
  c->r[0]=c->r[31]+0xFE800000u; // 8025FAE4
  cmpu(c,0,c->r[0],0x00000000u); // 8025FAE8
  if (!crb(c,2)) { goto L_8025FB08; } // 8025FAEC
  c->r[3]=0u+0x81800000u; // 8025FAF0
  c->r[4]=0u+0x01800000u; // 8025FAF4
  c->lr=0x8025FAFCu; f_8025A3D4(c); // 8025FAF8
  c->r[0]=0u+0x00000002u; // 8025FAFC
  c->r[3]=0u+0xCC000000u; // 8025FB00
  W16(c->r[3]+0x00004028u,c->r[0]); // 8025FB04
L_8025FB08:;
  c->r[0]=0u+0x01800000u; // 8025FB08
  cmpu(c,0,c->r[31],c->r[0]); // 8025FB0C
  if (crb(c,1)) { goto L_8025FB24; } // 8025FB10
  c->r[3]=0u+0x80260000u; // 8025FB14
  c->r[3]=c->r[3]+0xFFFFF534u; // 8025FB18
  c->lr=0x8025FB20u; f_8025FA7C(c); // 8025FB1C
  goto L_8025FB3C; // 8025FB20
L_8025FB24:;
  c->r[0]=0u+0x03000000u; // 8025FB24
  cmpu(c,0,c->r[31],c->r[0]); // 8025FB28
  if (crb(c,1)) { goto L_8025FB3C; } // 8025FB2C
  c->r[3]=0u+0x80260000u; // 8025FB30
  c->r[3]=c->r[3]+0xFFFFF5B4u; // 8025FB34
  c->lr=0x8025FB3Cu; f_8025FA7C(c); // 8025FB38
L_8025FB3C:;
  c->r[3]=0u+0x80000000u; // 8025FB3C
  c->r[0]=0u+0x04000000u; // 8025FB40
  c->r[4]=R32(c->r[3]+0x0000311Cu); // 8025FB44
  c->r[3]=R32(c->r[3]+0x00003120u); // 8025FB48
  cmpu(c,0,c->r[4],c->r[0]); // 8025FB4C
  if (crb(c,1)) { goto L_8025FB9C; } // 8025FB50
  c->r[0]=0u+0x93400000u; // 8025FB54
  cmpu(c,0,c->r[3],c->r[0]); // 8025FB58
  if (crb(c,1)) { goto L_8025FB70; } // 8025FB5C
  c->r[3]=0u+0x80260000u; // 8025FB60
  c->r[3]=c->r[3]+0xFFFFF634u; // 8025FB64
  c->lr=0x8025FB6Cu; f_8025FA7C(c); // 8025FB68
  goto L_8025FBD0; // 8025FB6C
L_8025FB70:;
  c->r[0]=0u+0x93800000u; // 8025FB70
  cmpu(c,0,c->r[3],c->r[0]); // 8025FB74
  if (crb(c,1)) { goto L_8025FB8C; } // 8025FB78
  c->r[3]=0u+0x80260000u; // 8025FB7C
  c->r[3]=c->r[3]+0xFFFFF714u; // 8025FB80
  c->lr=0x8025FB88u; f_8025FA7C(c); // 8025FB84
  goto L_8025FBD0; // 8025FB88
L_8025FB8C:;
  c->r[3]=0u+0x80260000u; // 8025FB8C
  c->r[3]=c->r[3]+0xFFFFF7F4u; // 8025FB90
  c->lr=0x8025FB98u; f_8025FA7C(c); // 8025FB94
  goto L_8025FBD0; // 8025FB98
L_8025FB9C:;
  c->r[0]=0u+0x08000000u; // 8025FB9C
  cmpu(c,0,c->r[4],c->r[0]); // 8025FBA0
  if (crb(c,1)) { goto L_8025FBD0; } // 8025FBA4
  c->r[0]=0u+0x97000000u; // 8025FBA8
  cmpu(c,0,c->r[3],c->r[0]); // 8025FBAC
  if (crb(c,1)) { goto L_8025FBC4; } // 8025FBB0
  c->r[3]=0u+0x80260000u; // 8025FBB4
  c->r[3]=c->r[3]+0xFFFFF8A0u; // 8025FBB8
  c->lr=0x8025FBC0u; f_8025FA7C(c); // 8025FBBC
  goto L_8025FBD0; // 8025FBC0
L_8025FBC4:;
  c->r[3]=0u+0x80260000u; // 8025FBC4
  c->r[3]=c->r[3]+0xFFFFF980u; // 8025FBC8
  c->lr=0x8025FBD0u; f_8025FA7C(c); // 8025FBCC
L_8025FBD0:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8025FBD0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8025FBD4
  c->lr=c->r[0]; // 8025FBD8
  c->r[1]=c->r[1]+0x00000010u; // 8025FBDC
  return; // 8025FBE0
}

// __OSInitMemoryProtection
void f_8025FBE4(Ctx* __restrict c) {
  trace_call(0x8025FBE4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8025FBE4
  c->r[0]=c->lr; // 8025FBE8
  W32(c->r[1]+0x00000014u,c->r[0]); // 8025FBEC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8025FBF0
  W32(c->r[1]+0x00000008u,c->r[30]); // 8025FBF4
  c->lr=0x8025FBFCu; f_8025EA10(c); // 8025FBF8
  c->r[4]=0u+0xCC000000u; // 8025FBFC
  c->r[0]=0u+0x00000000u; // 8025FC00
  W16(c->r[4]+0x00004020u,c->r[0]); // 8025FC04
  c->r[0]=0u+0x000000FFu; // 8025FC08
  c->r[30]=c->r[3]|c->r[3]; // 8025FC0C
  c->r[3]=0u+0xF0000000u; // 8025FC10
  W16(c->r[4]+0x00004010u,c->r[0]); // 8025FC14
  c->lr=0x8025FC1Cu; f_8025EDA0(c); // 8025FC18
  c->r[31]=0u+0x80260000u; // 8025FC1C
  c->r[3]=0u+0x00000000u; // 8025FC20
  c->r[4]=c->r[31]+0xFFFFF4ECu; // 8025FC24
  c->lr=0x8025FC2Cu; f_8025EA5C(c); // 8025FC28
  c->r[4]=c->r[31]+0xFFFFF4ECu; // 8025FC2C
  c->r[3]=0u+0x00000001u; // 8025FC30
  c->lr=0x8025FC38u; f_8025EA5C(c); // 8025FC34
  c->r[4]=c->r[31]+0xFFFFF4ECu; // 8025FC38
  c->r[3]=0u+0x00000002u; // 8025FC3C
  c->lr=0x8025FC44u; f_8025EA5C(c); // 8025FC40
  c->r[4]=c->r[31]+0xFFFFF4ECu; // 8025FC44
  c->r[3]=0u+0x00000003u; // 8025FC48
  c->lr=0x8025FC50u; f_8025EA5C(c); // 8025FC4C
  c->r[4]=c->r[31]+0xFFFFF4ECu; // 8025FC50
  c->r[3]=0u+0x00000004u; // 8025FC54
  c->lr=0x8025FC5Cu; f_8025EA5C(c); // 8025FC58
  c->r[3]=0u+0x80410000u; // 8025FC5C
  c->r[3]=c->r[3]+0x00003910u; // 8025FC60
  c->lr=0x8025FC68u; f_8025FF50(c); // 8025FC64
  c->lr=0x8025FC6Cu; f_8025FA94(c); // 8025FC68
  c->r[3]=0u+0x08000000u; // 8025FC6C
  c->lr=0x8025FC74u; f_8025EE20(c); // 8025FC70
  c->r[3]=c->r[30]|c->r[30]; // 8025FC74
  c->lr=0x8025FC7Cu; f_8025EA38(c); // 8025FC78
  c->r[0]=R32(c->r[1]+0x00000014u); // 8025FC7C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8025FC80
  c->r[30]=R32(c->r[1]+0x00000008u); // 8025FC84
  c->lr=c->r[0]; // 8025FC88
  c->r[1]=c->r[1]+0x00000010u; // 8025FC8C
  return; // 8025FC90
}

// OSInitMutex
void f_8025FC94(Ctx* __restrict c) {
  trace_call(0x8025FC94u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8025FC94
  c->r[0]=c->lr; // 8025FC98
  W32(c->r[1]+0x00000014u,c->r[0]); // 8025FC9C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8025FCA0
  c->r[31]=c->r[3]|c->r[3]; // 8025FCA4
  c->lr=0x8025FCACu; f_80261388(c); // 8025FCA8
  c->r[0]=0u+0x00000000u; // 8025FCAC
  W32(c->r[31]+0x00000008u,c->r[0]); // 8025FCB0
  W32(c->r[31]+0x0000000Cu,c->r[0]); // 8025FCB4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8025FCB8
  c->r[0]=R32(c->r[1]+0x00000014u); // 8025FCBC
  c->lr=c->r[0]; // 8025FCC0
  c->r[1]=c->r[1]+0x00000010u; // 8025FCC4
  return; // 8025FCC8
}

// OSLockMutex
void f_8025FCCC(Ctx* __restrict c) {
  trace_call(0x8025FCCCu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8025FCCC
  c->r[0]=c->lr; // 8025FCD0
  W32(c->r[1]+0x00000024u,c->r[0]); // 8025FCD4
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8025FCD8
  W32(c->r[1]+0x00000018u,c->r[30]); // 8025FCDC
  W32(c->r[1]+0x00000014u,c->r[29]); // 8025FCE0
  W32(c->r[1]+0x00000010u,c->r[28]); // 8025FCE4
  c->r[28]=c->r[3]|c->r[3]; // 8025FCE8
  c->lr=0x8025FCF0u; f_8025EA10(c); // 8025FCEC
  c->r[29]=c->r[3]|c->r[3]; // 8025FCF0
  c->lr=0x8025FCF8u; f_80261398(c); // 8025FCF4
  c->r[30]=c->r[3]|c->r[3]; // 8025FCF8
  c->r[31]=0u+0x00000000u; // 8025FCFC
L_8025FD00:;
  c->r[0]=R32(c->r[28]+0x00000008u); // 8025FD00
  cmps(c,0,(int32_t)c->r[0],0); // 8025FD04
  if (!crb(c,2)) { goto L_8025FD48; } // 8025FD08
  c->r[3]=R32(c->r[28]+0x0000000Cu); // 8025FD0C
  W32(c->r[28]+0x00000008u,c->r[30]); // 8025FD10
  c->r[0]=c->r[3]+0x00000001u; // 8025FD14
  W32(c->r[28]+0x0000000Cu,c->r[0]); // 8025FD18
  c->r[3]=R32(c->r[30]+0x000002F8u); // 8025FD1C
  cmps(c,0,(int32_t)c->r[3],0); // 8025FD20
  if (!crb(c,2)) { goto L_8025FD30; } // 8025FD24
  W32(c->r[30]+0x000002F4u,c->r[28]); // 8025FD28
  goto L_8025FD34; // 8025FD2C
L_8025FD30:;
  W32(c->r[3]+0x00000010u,c->r[28]); // 8025FD30
L_8025FD34:;
  c->r[0]=0u+0x00000000u; // 8025FD34
  W32(c->r[28]+0x00000014u,c->r[3]); // 8025FD38
  W32(c->r[28]+0x00000010u,c->r[0]); // 8025FD3C
  W32(c->r[30]+0x000002F8u,c->r[28]); // 8025FD40
  goto L_8025FD80; // 8025FD44
L_8025FD48:;
  cmpu(c,0,c->r[0],c->r[30]); // 8025FD48
  if (!crb(c,2)) { goto L_8025FD60; } // 8025FD4C
  c->r[3]=R32(c->r[28]+0x0000000Cu); // 8025FD50
  c->r[0]=c->r[3]+0x00000001u; // 8025FD54
  W32(c->r[28]+0x0000000Cu,c->r[0]); // 8025FD58
  goto L_8025FD80; // 8025FD5C
L_8025FD60:;
  W32(c->r[30]+0x000002F0u,c->r[28]); // 8025FD60
  c->r[3]=R32(c->r[28]+0x00000008u); // 8025FD64
  c->r[4]=R32(c->r[30]+0x000002D0u); // 8025FD68
  c->lr=0x8025FD70u; f_80261674(c); // 8025FD6C
  c->r[3]=c->r[28]|c->r[28]; // 8025FD70
  c->lr=0x8025FD78u; f_802623D4(c); // 8025FD74
  W32(c->r[30]+0x000002F0u,c->r[31]); // 8025FD78
  IRQCHK(c); goto L_8025FD00; // 8025FD7C
L_8025FD80:;
  c->r[3]=c->r[29]|c->r[29]; // 8025FD80
  c->lr=0x8025FD88u; f_8025EA38(c); // 8025FD84
  c->r[0]=R32(c->r[1]+0x00000024u); // 8025FD88
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8025FD8C
  c->r[30]=R32(c->r[1]+0x00000018u); // 8025FD90
  c->r[29]=R32(c->r[1]+0x00000014u); // 8025FD94
  c->r[28]=R32(c->r[1]+0x00000010u); // 8025FD98
  c->lr=c->r[0]; // 8025FD9C
  c->r[1]=c->r[1]+0x00000020u; // 8025FDA0
  return; // 8025FDA4
}

// OSUnlockMutex
void f_8025FDA8(Ctx* __restrict c) {
  trace_call(0x8025FDA8u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8025FDA8
  c->r[0]=c->lr; // 8025FDAC
  W32(c->r[1]+0x00000024u,c->r[0]); // 8025FDB0
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8025FDB4
  W32(c->r[1]+0x00000018u,c->r[30]); // 8025FDB8
  W32(c->r[1]+0x00000014u,c->r[29]); // 8025FDBC
  c->r[29]=c->r[3]|c->r[3]; // 8025FDC0
  c->lr=0x8025FDC8u; f_8025EA10(c); // 8025FDC4
  c->r[31]=c->r[3]|c->r[3]; // 8025FDC8
  c->lr=0x8025FDD0u; f_80261398(c); // 8025FDCC
  c->r[0]=R32(c->r[29]+0x00000008u); // 8025FDD0
  c->r[30]=c->r[3]|c->r[3]; // 8025FDD4
  cmpu(c,0,c->r[0],c->r[3]); // 8025FDD8
  if (!crb(c,2)) { goto L_8025FE4C; } // 8025FDDC
  c->r[0]=R32(c->r[29]+0x0000000Cu); // 8025FDE0
  c->r[0]=addc(c,c->r[0],0xFFFFFFFFu,0); cr0(c,c->r[0]); // 8025FDE4
  W32(c->r[29]+0x0000000Cu,c->r[0]); // 8025FDE8
  if (!crb(c,2)) { goto L_8025FE4C; } // 8025FDEC
  c->r[4]=R32(c->r[29]+0x00000010u); // 8025FDF0
  c->r[5]=R32(c->r[29]+0x00000014u); // 8025FDF4
  cmps(c,0,(int32_t)c->r[4],0); // 8025FDF8
  if (!crb(c,2)) { goto L_8025FE08; } // 8025FDFC
  W32(c->r[3]+0x000002F8u,c->r[5]); // 8025FE00
  goto L_8025FE0C; // 8025FE04
L_8025FE08:;
  W32(c->r[4]+0x00000014u,c->r[5]); // 8025FE08
L_8025FE0C:;
  cmps(c,0,(int32_t)c->r[5],0); // 8025FE0C
  if (!crb(c,2)) { goto L_8025FE1C; } // 8025FE10
  W32(c->r[3]+0x000002F4u,c->r[4]); // 8025FE14
  goto L_8025FE20; // 8025FE18
L_8025FE1C:;
  W32(c->r[5]+0x00000010u,c->r[4]); // 8025FE1C
L_8025FE20:;
  c->r[0]=0u+0x00000000u; // 8025FE20
  W32(c->r[29]+0x00000008u,c->r[0]); // 8025FE24
  c->r[4]=R32(c->r[3]+0x000002D0u); // 8025FE28
  c->r[0]=R32(c->r[3]+0x000002D4u); // 8025FE2C
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[0]); // 8025FE30
  if (!crb(c,0)) { goto L_8025FE44; } // 8025FE34
  c->r[3]=c->r[30]|c->r[30]; // 8025FE38
  c->lr=0x8025FE40u; f_80261484(c); // 8025FE3C
  W32(c->r[30]+0x000002D0u,c->r[3]); // 8025FE40
L_8025FE44:;
  c->r[3]=c->r[29]|c->r[29]; // 8025FE44
  c->lr=0x8025FE4Cu; f_802624C0(c); // 8025FE48
L_8025FE4C:;
  c->r[3]=c->r[31]|c->r[31]; // 8025FE4C
  c->lr=0x8025FE54u; f_8025EA38(c); // 8025FE50
  c->r[0]=R32(c->r[1]+0x00000024u); // 8025FE54
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8025FE58
  c->r[30]=R32(c->r[1]+0x00000018u); // 8025FE5C
  c->r[29]=R32(c->r[1]+0x00000014u); // 8025FE60
  c->lr=c->r[0]; // 8025FE64
  c->r[1]=c->r[1]+0x00000020u; // 8025FE68
  return; // 8025FE6C
}

// __OSUnlockAllMutex
void f_8025FE70(Ctx* __restrict c) {
  trace_call(0x8025FE70u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8025FE70
  c->r[0]=c->lr; // 8025FE74
  W32(c->r[1]+0x00000014u,c->r[0]); // 8025FE78
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8025FE7C
  c->r[31]=0u+0x00000000u; // 8025FE80
  W32(c->r[1]+0x00000008u,c->r[30]); // 8025FE84
  c->r[30]=c->r[3]|c->r[3]; // 8025FE88
  goto L_8025FEB8; // 8025FE8C
L_8025FE90:;
  c->r[4]=R32(c->r[3]+0x00000010u); // 8025FE90
  cmps(c,0,(int32_t)c->r[4],0); // 8025FE94
  if (!crb(c,2)) { goto L_8025FEA4; } // 8025FE98
  W32(c->r[30]+0x000002F8u,c->r[31]); // 8025FE9C
  goto L_8025FEA8; // 8025FEA0
L_8025FEA4:;
  W32(c->r[4]+0x00000014u,c->r[31]); // 8025FEA4
L_8025FEA8:;
  W32(c->r[30]+0x000002F4u,c->r[4]); // 8025FEA8
  W32(c->r[3]+0x0000000Cu,c->r[31]); // 8025FEAC
  W32(c->r[3]+0x00000008u,c->r[31]); // 8025FEB0
  c->lr=0x8025FEB8u; f_802624C0(c); // 8025FEB4
L_8025FEB8:;
  c->r[3]=R32(c->r[30]+0x000002F4u); // 8025FEB8
  cmps(c,0,(int32_t)c->r[3],0); // 8025FEBC
  if (!crb(c,2)) { IRQCHK(c); goto L_8025FE90; } // 8025FEC0
  c->r[0]=R32(c->r[1]+0x00000014u); // 8025FEC4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8025FEC8
  c->r[30]=R32(c->r[1]+0x00000008u); // 8025FECC
  c->lr=c->r[0]; // 8025FED0
  c->r[1]=c->r[1]+0x00000010u; // 8025FED4
  return; // 8025FED8
}

// fn_8025FEDC
void f_8025FEDC(Ctx* __restrict c) {
  trace_call(0x8025FEDCu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8025FEDC
  c->r[0]=c->lr; // 8025FEE0
  W32(c->r[1]+0x00000024u,c->r[0]); // 8025FEE4
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8025FEE8
  c->r[31]=c->r[4]|c->r[4]; // 8025FEEC
  W32(c->r[1]+0x00000018u,c->r[30]); // 8025FEF0
  c->r[30]=c->r[3]|c->r[3]; // 8025FEF4
  c->lr=0x8025FEFCu; f_8025EA10(c); // 8025FEF8
  c->r[3]=0u+0x81280000u; // 8025FEFC
  c->lr=0x8025FF04u; f_80259ED0(c); // 8025FF00
  c->r[3]=0u+0x812F0000u; // 8025FF04
  c->lr=0x8025FF0Cu; f_80259EB8(c); // 8025FF08
  c->r[0]=0u+0x00000000u; // 8025FF0C
  c->r[3]=c->r[31]|c->r[31]; // 8025FF10
  W32(c->r[1]+0x00000008u,c->r[0]); // 8025FF14
  c->r[4]=c->r[30]|0x80000000u; // 8025FF18
  c->r[5]=c->r[1]+0x00000008u; // 8025FF1C
  c->lr=0x8025FF24u; f_8025C794(c); // 8025FF20
  c->r[0]=R32(c->r[1]+0x00000024u); // 8025FF24
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8025FF28
  c->r[30]=R32(c->r[1]+0x00000018u); // 8025FF2C
  c->lr=c->r[0]; // 8025FF30
  c->r[1]=c->r[1]+0x00000020u; // 8025FF34
  return; // 8025FF38
}

// OSGetSaveRegion
void f_8025FF3C(Ctx* __restrict c) {
  trace_call(0x8025FF3Cu);
  c->r[0]=R32(c->r[13]+0xFFFF9888u); // 8025FF3C
  W32(c->r[3]+0x00000000u,c->r[0]); // 8025FF40
  c->r[0]=R32(c->r[13]+0xFFFF988Cu); // 8025FF44
  W32(c->r[4]+0x00000000u,c->r[0]); // 8025FF48
  return; // 8025FF4C
}

// OSRegisterShutdownFunction
void f_8025FF50(Ctx* __restrict c) {
  trace_call(0x8025FF50u);
  c->r[5]=R32(c->r[13]+0xFFFF9898u); // 8025FF50
  goto L_8025FF5C; // 8025FF54
L_8025FF58:;
  c->r[5]=R32(c->r[5]+0x00000008u); // 8025FF58
L_8025FF5C:;
  cmps(c,0,(int32_t)c->r[5],0); // 8025FF5C
  if (crb(c,2)) { goto L_8025FF74; } // 8025FF60
  c->r[4]=R32(c->r[5]+0x00000004u); // 8025FF64
  c->r[0]=R32(c->r[3]+0x00000004u); // 8025FF68
  cmpu(c,0,c->r[4],c->r[0]); // 8025FF6C
  if (!crb(c,1)) { IRQCHK(c); goto L_8025FF58; } // 8025FF70
L_8025FF74:;
  cmps(c,0,(int32_t)c->r[5],0); // 8025FF74
  if (!crb(c,2)) { goto L_8025FFB0; } // 8025FF78
  c->r[4]=c->r[13]+0xFFFF9898u; // 8025FF7C
  c->r[4]=R32(c->r[4]+0x00000004u); // 8025FF80
  cmps(c,0,(int32_t)c->r[4],0); // 8025FF84
  if (!crb(c,2)) { goto L_8025FF94; } // 8025FF88
  W32(c->r[13]+0xFFFF9898u,c->r[3]); // 8025FF8C
  goto L_8025FF98; // 8025FF90
L_8025FF94:;
  W32(c->r[4]+0x00000008u,c->r[3]); // 8025FF94
L_8025FF98:;
  c->r[0]=0u+0x00000000u; // 8025FF98
  W32(c->r[3]+0x0000000Cu,c->r[4]); // 8025FF9C
  c->r[4]=c->r[13]+0xFFFF9898u; // 8025FFA0
  W32(c->r[3]+0x00000008u,c->r[0]); // 8025FFA4
  W32(c->r[4]+0x00000004u,c->r[3]); // 8025FFA8
  return; // 8025FFAC
L_8025FFB0:;
  W32(c->r[3]+0x00000008u,c->r[5]); // 8025FFB0
  c->r[4]=R32(c->r[5]+0x0000000Cu); // 8025FFB4
  W32(c->r[5]+0x0000000Cu,c->r[3]); // 8025FFB8
  cmps(c,0,(int32_t)c->r[4],0); // 8025FFBC
  W32(c->r[3]+0x0000000Cu,c->r[4]); // 8025FFC0
  if (!crb(c,2)) { goto L_8025FFD0; } // 8025FFC4
  W32(c->r[13]+0xFFFF9898u,c->r[3]); // 8025FFC8
  return; // 8025FFCC
L_8025FFD0:;
  W32(c->r[4]+0x00000008u,c->r[3]); // 8025FFD0
  return; // 8025FFD4
}

// __OSCallShutdownFunctions
void f_8025FFD8(Ctx* __restrict c) {
  trace_call(0x8025FFD8u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8025FFD8
  c->r[0]=c->lr; // 8025FFDC
  W32(c->r[1]+0x00000024u,c->r[0]); // 8025FFE0
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8025FFE4
  W32(c->r[1]+0x00000018u,c->r[30]); // 8025FFE8
  c->r[30]=0u+0x00000000u; // 8025FFEC
  W32(c->r[1]+0x00000014u,c->r[29]); // 8025FFF0
  c->r[29]=c->r[4]|c->r[4]; // 8025FFF4
  W32(c->r[1]+0x00000010u,c->r[28]); // 8025FFF8
  c->r[28]=c->r[3]|c->r[3]; // 8025FFFC
  c->r[3]=0u+0x00000000u; // 80260000
  c->r[31]=R32(c->r[13]+0xFFFF9898u); // 80260004
  goto L_80260048; // 80260008
L_8026000C:;
  cmps(c,0,(int32_t)c->r[30],0); // 8026000C
  if (crb(c,2)) { goto L_80260020; } // 80260010
  c->r[0]=R32(c->r[31]+0x00000004u); // 80260014
  cmpu(c,0,c->r[3],c->r[0]); // 80260018
  if (!crb(c,2)) { goto L_80260050; } // 8026001C
L_80260020:;
  c->r[12]=R32(c->r[31]+0x00000000u); // 80260020
  c->r[3]=c->r[28]|c->r[28]; // 80260024
  c->r[4]=c->r[29]|c->r[29]; // 80260028
  c->ctr=c->r[12]; // 8026002C
  if (true) { c->lr=0x80260034u; dispatch(c,c->ctr); } // 80260030
  c->r[0]=cntlz(c->r[3]); // 80260034
  c->r[3]=R32(c->r[31]+0x00000004u); // 80260038
  c->r[0]=rotl(c->r[0],27)&0x07FFFFFFu; // 8026003C
  c->r[31]=R32(c->r[31]+0x00000008u); // 80260040
  c->r[30]=c->r[30]|c->r[0]; // 80260044
L_80260048:;
  cmps(c,0,(int32_t)c->r[31],0); // 80260048
  if (!crb(c,2)) { IRQCHK(c); goto L_8026000C; } // 8026004C
L_80260050:;
  c->lr=0x80260054u; f_80260C0C(c); // 80260050
  c->r[0]=cntlz(c->r[3]); // 80260054
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 80260058
  c->r[0]=rotl(c->r[0],27)&0x07FFFFFFu; // 8026005C
  c->r[30]=c->r[30]|c->r[0]; // 80260060
  c->r[0]=cntlz(c->r[30]); // 80260064
  c->r[30]=R32(c->r[1]+0x00000018u); // 80260068
  c->r[29]=R32(c->r[1]+0x00000014u); // 8026006C
  c->r[3]=rotl(c->r[0],27)&0x07FFFFFFu; // 80260070
  c->r[28]=R32(c->r[1]+0x00000010u); // 80260074
  c->r[0]=R32(c->r[1]+0x00000024u); // 80260078
  c->lr=c->r[0]; // 8026007C
  c->r[1]=c->r[1]+0x00000020u; // 80260080
  return; // 80260084
}

// __OSShutdownDevices
void f_80260088(Ctx* __restrict c) {
  trace_call(0x80260088u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80260088
  c->r[0]=c->lr; // 8026008C
  W32(c->r[1]+0x00000024u,c->r[0]); // 80260090
  c->r[11]=c->r[1]+0x00000020u; // 80260094
  c->lr=0x8026009Cu; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 80260098
  cmps(c,0,(int32_t)c->r[3],4); // 8026009C
  c->r[27]=c->r[3]|c->r[3]; // 802600A0
  if (!crb(c,0)) { goto L_802600B4; } // 802600A4
  cmps(c,0,(int32_t)c->r[3],0); // 802600A8
  if (crb(c,2)) { goto L_802600BC; } // 802600AC
  goto L_802600C4; // 802600B0
L_802600B4:;
  cmps(c,0,(int32_t)c->r[3],7); // 802600B4
  if (!crb(c,0)) { goto L_802600C4; } // 802600B8
L_802600BC:;
  c->r[28]=0u+0x00000000u; // 802600BC
  goto L_802600C8; // 802600C0
L_802600C4:;
  c->r[28]=0u+0x00000001u; // 802600C4
L_802600C8:;
  c->lr=0x802600CCu; f_8025A2F4(c); // 802600C8
  cmps(c,0,(int32_t)c->r[28],0); // 802600CC
  if (!crb(c,2)) { goto L_802600E0; } // 802600D0
  c->r[3]=0u+0x00000001u; // 802600D4
  c->lr=0x802600DCu; f_80273080(c); // 802600D8
  c->r[29]=c->r[3]|c->r[3]; // 802600DC
L_802600E0:;
  c->r[30]=R32(c->r[13]+0xFFFF9898u); // 802600E0
  c->r[3]=0u+0x00000000u; // 802600E4
  c->r[31]=0u+0x00000000u; // 802600E8
  goto L_8026012C; // 802600EC
L_802600F0:;
  cmps(c,0,(int32_t)c->r[31],0); // 802600F0
  if (crb(c,2)) { goto L_80260104; } // 802600F4
  c->r[0]=R32(c->r[30]+0x00000004u); // 802600F8
  cmpu(c,0,c->r[3],c->r[0]); // 802600FC
  if (!crb(c,2)) { goto L_80260134; } // 80260100
L_80260104:;
  c->r[12]=R32(c->r[30]+0x00000000u); // 80260104
  c->r[4]=c->r[27]|c->r[27]; // 80260108
  c->r[3]=0u+0x00000000u; // 8026010C
  c->ctr=c->r[12]; // 80260110
  if (true) { c->lr=0x80260118u; dispatch(c,c->ctr); } // 80260114
  c->r[0]=cntlz(c->r[3]); // 80260118
  c->r[3]=R32(c->r[30]+0x00000004u); // 8026011C
  c->r[0]=rotl(c->r[0],27)&0x07FFFFFFu; // 80260120
  c->r[30]=R32(c->r[30]+0x00000008u); // 80260124
  c->r[31]=c->r[31]|c->r[0]; // 80260128
L_8026012C:;
  cmps(c,0,(int32_t)c->r[30],0); // 8026012C
  if (!crb(c,2)) { IRQCHK(c); goto L_802600F0; } // 80260130
L_80260134:;
  c->lr=0x80260138u; f_80260C0C(c); // 80260134
  c->r[0]=cntlz(c->r[3]); // 80260138
  c->r[0]=rotl(c->r[0],27)&0x07FFFFFFu; // 8026013C
  c->r[31]=c->r[31]|c->r[0]; cr0(c,c->r[31]); // 80260140
  if (!crb(c,2)) { IRQCHK(c); goto L_802600E0; } // 80260144
L_80260148:;
  c->lr=0x8026014Cu; f_80260C0C(c); // 80260148
  cmps(c,0,(int32_t)c->r[3],0); // 8026014C
  if (crb(c,2)) { IRQCHK(c); goto L_80260148; } // 80260150
  c->lr=0x80260158u; f_8025EA10(c); // 80260154
  c->r[31]=R32(c->r[13]+0xFFFF9898u); // 80260158
  c->r[3]=0u+0x00000000u; // 8026015C
  c->r[30]=0u+0x00000000u; // 80260160
  goto L_802601A4; // 80260164
L_80260168:;
  cmps(c,0,(int32_t)c->r[30],0); // 80260168
  if (crb(c,2)) { goto L_8026017C; } // 8026016C
  c->r[0]=R32(c->r[31]+0x00000004u); // 80260170
  cmpu(c,0,c->r[3],c->r[0]); // 80260174
  if (!crb(c,2)) { goto L_802601AC; } // 80260178
L_8026017C:;
  c->r[12]=R32(c->r[31]+0x00000000u); // 8026017C
  c->r[4]=c->r[27]|c->r[27]; // 80260180
  c->r[3]=0u+0x00000001u; // 80260184
  c->ctr=c->r[12]; // 80260188
  if (true) { c->lr=0x80260190u; dispatch(c,c->ctr); } // 8026018C
  c->r[0]=cntlz(c->r[3]); // 80260190
  c->r[3]=R32(c->r[31]+0x00000004u); // 80260194
  c->r[0]=rotl(c->r[0],27)&0x07FFFFFFu; // 80260198
  c->r[31]=R32(c->r[31]+0x00000008u); // 8026019C
  c->r[30]=c->r[30]|c->r[0]; // 802601A0
L_802601A4:;
  cmps(c,0,(int32_t)c->r[31],0); // 802601A4
  if (!crb(c,2)) { IRQCHK(c); goto L_80260168; } // 802601A8
L_802601AC:;
  c->lr=0x802601B0u; f_80260C0C(c); // 802601AC
  c->lr=0x802601B4u; f_8025A640(c); // 802601B0
  cmps(c,0,(int32_t)c->r[28],0); // 802601B4
  if (!crb(c,2)) { goto L_802601C4; } // 802601B8
  c->r[3]=c->r[29]|c->r[29]; // 802601BC
  c->lr=0x802601C4u; f_80273080(c); // 802601C0
L_802601C4:;
  c->r[3]=0u+0x80000000u; // 802601C4
  c->r[3]=R32(c->r[3]+0x000000DCu); // 802601C8
  goto L_802601F8; // 802601CC
L_802601D0:;
  c->r[0]=R16(c->r[3]+0x000002C8u); // 802601D0
  c->r[30]=R32(c->r[3]+0x000002FCu); // 802601D4
  cmps(c,0,(int32_t)c->r[0],4); // 802601D8
  if (crb(c,2)) { goto L_802601F0; } // 802601DC
  if (!crb(c,0)) { goto L_802601F4; } // 802601E0
  cmps(c,0,(int32_t)c->r[0],1); // 802601E4
  if (crb(c,2)) { goto L_802601F0; } // 802601E8
  goto L_802601F4; // 802601EC
L_802601F0:;
  c->lr=0x802601F4u; f_80261C90(c); // 802601F0
L_802601F4:;
  c->r[3]=c->r[30]|c->r[30]; // 802601F4
L_802601F8:;
  cmps(c,0,(int32_t)c->r[3],0); // 802601F8
  if (!crb(c,2)) { IRQCHK(c); goto L_802601D0; } // 802601FC
  c->r[11]=c->r[1]+0x00000020u; // 80260200
  c->lr=0x80260208u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 80260204
  c->r[0]=R32(c->r[1]+0x00000024u); // 80260208
  c->lr=c->r[0]; // 8026020C
  c->r[1]=c->r[1]+0x00000020u; // 80260210
  return; // 80260214
}

// fn_80260218
void f_80260218(Ctx* __restrict c) {
  trace_call(0x80260218u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80260218
  c->r[0]=c->lr; // 8026021C
  c->r[4]=0u+0x00000000u; // 80260220
  c->r[5]=0u+0x00000002u; // 80260224
  W32(c->r[1]+0x00000044u,c->r[0]); // 80260228
  c->r[3]=c->r[1]+0x00000008u; // 8026022C
  c->lr=0x80260234u; f_800043EC(c); // 80260230
  c->lr=0x80260238u; f_802AD4BC(c); // 80260234
L_80260238:;
  c->lr=0x8026023Cu; f_802AD55C(c); // 80260238
  cmpu(c,0,c->r[3],0x00000001u); // 8026023C
  if (crb(c,2)) { IRQCHK(c); goto L_80260238; } // 80260240
  c->r[3]=c->r[1]+0x00000008u; // 80260244
  c->lr=0x8026024Cu; f_802AEF3C(c); // 80260248
  c->lr=0x80260250u; f_80263954(c); // 8026024C
  c->lr=0x80260254u; f_80263264(c); // 80260250
  c->lr=0x80260258u; f_8026AC30(c); // 80260254
  c->r[3]=c->r[1]+0x00000018u; // 80260258
  c->lr=0x80260260u; f_80263C20(c); // 8026025C
  c->lr=0x80260264u; f_8026AA40(c); // 80260260
  cmpu(c,0,c->r[3],0x00000002u); // 80260264
  if (crb(c,2)) { goto L_80260278; } // 80260268
  c->r[0]=0u+0x00000003u; // 8026026C
  W8(c->r[1]+0x0000001Eu,c->r[0]); // 80260270
  goto L_802602B4; // 80260274
L_80260278:;
  c->r[0]=R8(c->r[1]+0x0000001Eu); // 80260278
  cmpu(c,0,c->r[0],0x00000001u); // 8026027C
  if (!crb(c,2)) { goto L_802602A0; } // 80260280
  c->r[3]=c->r[1]+0x0000000Cu; // 80260284
  c->lr=0x8026028Cu; f_80260E54(c); // 80260288
  cmps(c,0,(int32_t)c->r[3],0); // 8026028C
  if (crb(c,2)) { goto L_802602AC; } // 80260290
  c->r[0]=R32(c->r[1]+0x0000000Cu); // 80260294
  cmps(c,0,(int32_t)c->r[0],0); // 80260298
  if (crb(c,2)) { goto L_802602AC; } // 8026029C
L_802602A0:;
  c->r[0]=0u+0x00000002u; // 802602A0
  W8(c->r[1]+0x0000001Eu,c->r[0]); // 802602A4
  goto L_802602B4; // 802602A8
L_802602AC:;
  c->r[0]=0u+0x00000001u; // 802602AC
  W8(c->r[1]+0x0000001Eu,c->r[0]); // 802602B0
L_802602B4:;
  c->r[0]=R8(c->r[1]+0x00000008u); // 802602B4
  cmpu(c,0,c->r[0],0x00000001u); // 802602B8
  if (!crb(c,2)) { goto L_802602CC; } // 802602BC
  c->r[0]=0u+0x00000005u; // 802602C0
  W8(c->r[1]+0x0000001Du,c->r[0]); // 802602C4
  goto L_802602D4; // 802602C8
L_802602CC:;
  c->r[0]=0u+0x00000001u; // 802602CC
  W8(c->r[1]+0x0000001Du,c->r[0]); // 802602D0
L_802602D4:;
  c->lr=0x802602D8u; f_80260F70(c); // 802602D4
  c->r[3]=c->r[1]+0x00000018u; // 802602D8
  c->lr=0x802602E0u; f_80263B3C(c); // 802602DC
  c->r[3]=c->r[1]+0x00000010u; // 802602E0
  c->lr=0x802602E8u; f_80258180(c); // 802602E4
  c->r[0]=R8(c->r[1]+0x00000008u); // 802602E8
  cmpu(c,0,c->r[0],0x00000001u); // 802602EC
  if (!crb(c,2)) { goto L_8026030C; } // 802602F0
  c->lr=0x802602F8u; f_802613A4(c); // 802602F4
  c->r[3]=0u+0x00000005u; // 802602F8
  c->lr=0x80260300u; f_80260088(c); // 802602FC
  c->lr=0x80260304u; f_802613E0(c); // 80260300
  c->lr=0x80260308u; f_8025BEE0(c); // 80260304
  goto L_8026031C; // 80260308
L_8026030C:;
  c->lr=0x80260310u; f_802613A4(c); // 8026030C
  c->r[3]=0u+0x00000002u; // 80260310
  c->lr=0x80260318u; f_80260088(c); // 80260314
  c->lr=0x8026031Cu; f_80263084(c); // 80260318
L_8026031C:;
  c->r[0]=R32(c->r[1]+0x00000044u); // 8026031C
  c->lr=c->r[0]; // 80260320
  c->r[1]=c->r[1]+0x00000040u; // 80260324
  return; // 80260328
}

// fn_8026032C
void f_8026032C(Ctx* __restrict c) {
  trace_call(0x8026032Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8026032C
  c->r[0]=c->lr; // 80260330
  W32(c->r[1]+0x00000034u,c->r[0]); // 80260334
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 80260338
  W32(c->r[1]+0x00000028u,c->r[30]); // 8026033C
  c->r[30]=c->r[3]|c->r[3]; // 80260340
  c->r[3]=0u+0x81280000u; // 80260344
  c->lr=0x8026034Cu; f_80259ED0(c); // 80260348
  c->r[3]=0u+0x812F0000u; // 8026034C
  c->lr=0x80260354u; f_80259EB8(c); // 80260350
  c->r[3]=0u+0x00001020u; // 80260354
  c->r[4]=0u+0x00000020u; // 80260358
  c->lr=0x80260360u; f_80259ED8(c); // 8026035C
  c->r[31]=c->r[3]|c->r[3]; // 80260360
  c->r[4]=0u+0x00000000u; // 80260364
  c->r[5]=0u+0x00001020u; // 80260368
  c->lr=0x80260370u; f_800043EC(c); // 8026036C
  c->r[3]=c->r[31]|c->r[31]; // 80260370
  c->lr=0x80260378u; f_80264434(c); // 80260374
  c->r[3]=0u+0x00000001u; // 80260378
  c->r[0]=c->r[30]|0x80000000u; // 8026037C
  W32(c->r[31]+0x00000008u,c->r[3]); // 80260380
  c->r[3]=c->r[31]|c->r[31]; // 80260384
  W32(c->r[31]+0x0000000Cu,c->r[0]); // 80260388
  c->lr=0x80260390u; f_802642DC(c); // 8026038C
  c->r[3]=c->r[1]+0x00000008u; // 80260390
  c->lr=0x80260398u; f_80263C20(c); // 80260394
  cmps(c,0,(int32_t)c->r[3],0); // 80260398
  if (crb(c,2)) { goto L_802603B0; } // 8026039C
  c->r[0]=0u+0x00000003u; // 802603A0
  c->r[3]=c->r[1]+0x00000008u; // 802603A4
  W8(c->r[1]+0x0000000Du,c->r[0]); // 802603A8
  c->lr=0x802603B0u; f_80263B3C(c); // 802603AC
L_802603B0:;
  c->lr=0x802603B4u; f_802613A4(c); // 802603B0
  c->r[3]=0u+0x00000004u; // 802603B4
  c->lr=0x802603BCu; f_80260088(c); // 802603B8
  c->lr=0x802603C0u; f_802613E0(c); // 802603BC
  c->lr=0x802603C4u; f_8025BFDC(c); // 802603C0
  c->r[0]=R32(c->r[1]+0x00000034u); // 802603C4
  c->r[31]=R32(c->r[1]+0x0000002Cu); // 802603C8
  c->r[30]=R32(c->r[1]+0x00000028u); // 802603CC
  c->lr=c->r[0]; // 802603D0
  c->r[1]=c->r[1]+0x00000030u; // 802603D4
  return; // 802603D8
}

// fn_802603DC
void f_802603DC(Ctx* __restrict c) {
  trace_call(0x802603DCu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802603DC
  c->r[0]=c->lr; // 802603E0
  W32(c->r[1]+0x00000014u,c->r[0]); // 802603E4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 802603E8
  W32(c->r[1]+0x00000008u,c->r[30]); // 802603EC
  c->r[30]=c->r[3]|c->r[3]; // 802603F0
  c->lr=0x802603F8u; f_8025936C(c); // 802603F4
  c->r[31]=c->r[3]|c->r[3]; // 802603F8
  c->lr=0x80260400u; f_80263954(c); // 802603FC
  c->lr=0x80260404u; f_80263264(c); // 80260400
  c->r[0]=rotl(c->r[31],0)&0x000000FFu; // 80260404
  cmpu(c,0,c->r[0],0x00000081u); // 80260408
  if (!crb(c,2)) { goto L_8026041C; } // 8026040C
  c->r[3]=c->r[30]|c->r[30]; // 80260410
  c->lr=0x80260418u; f_8026032C(c); // 80260414
  goto L_80260440; // 80260418
L_8026041C:;
  cmpu(c,0,c->r[0],0x00000080u); // 8026041C
  if (!crb(c,2)) { goto L_80260440; } // 80260420
  c->lr=0x80260428u; f_802613A4(c); // 80260424
  c->r[3]=0u+0x00000004u; // 80260428
  c->lr=0x80260430u; f_80260088(c); // 8026042C
  c->lr=0x80260434u; f_802613E0(c); // 80260430
  c->r[4]=R32(c->r[13]+0xFFFF9890u); // 80260434
  c->r[3]=c->r[30]|c->r[30]; // 80260438
  c->lr=0x80260440u; f_8025FEDC(c); // 8026043C
L_80260440:;
  c->lr=0x80260444u; f_802613A4(c); // 80260440
  c->r[3]=0u+0x00000001u; // 80260444
  c->lr=0x8026044Cu; f_80260088(c); // 80260448
  c->lr=0x80260450u; f_802630FC(c); // 8026044C
  c->r[0]=R32(c->r[1]+0x00000014u); // 80260450
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80260454
  c->r[30]=R32(c->r[1]+0x00000008u); // 80260458
  c->lr=c->r[0]; // 8026045C
  c->r[1]=c->r[1]+0x00000010u; // 80260460
  return; // 80260464
}

// fn_80260468
void f_80260468(Ctx* __restrict c) {
  trace_call(0x80260468u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80260468
  c->r[0]=c->lr; // 8026046C
  W32(c->r[1]+0x00000034u,c->r[0]); // 80260470
  c->lr=0x80260478u; f_80263954(c); // 80260474
  c->lr=0x8026047Cu; f_80263264(c); // 80260478
  c->lr=0x80260480u; f_8026AC30(c); // 8026047C
  c->r[3]=c->r[1]+0x00000010u; // 80260480
  c->lr=0x80260488u; f_80263C20(c); // 80260484
  c->lr=0x8026048Cu; f_8026AA40(c); // 80260488
  cmpu(c,0,c->r[3],0x00000002u); // 8026048C
  if (crb(c,2)) { goto L_802604A0; } // 80260490
  c->r[0]=0u+0x00000003u; // 80260494
  W8(c->r[1]+0x00000016u,c->r[0]); // 80260498
  goto L_802604DC; // 8026049C
L_802604A0:;
  c->r[0]=R8(c->r[1]+0x00000016u); // 802604A0
  cmpu(c,0,c->r[0],0x00000001u); // 802604A4
  if (!crb(c,2)) { goto L_802604C8; } // 802604A8
  c->r[3]=c->r[1]+0x00000008u; // 802604AC
  c->lr=0x802604B4u; f_80260E54(c); // 802604B0
  cmps(c,0,(int32_t)c->r[3],0); // 802604B4
  if (crb(c,2)) { goto L_802604D4; } // 802604B8
  c->r[0]=R32(c->r[1]+0x00000008u); // 802604BC
  cmps(c,0,(int32_t)c->r[0],0); // 802604C0
  if (crb(c,2)) { goto L_802604D4; } // 802604C4
L_802604C8:;
  c->r[0]=0u+0x00000002u; // 802604C8
  W8(c->r[1]+0x00000016u,c->r[0]); // 802604CC
  goto L_802604DC; // 802604D0
L_802604D4:;
  c->r[0]=0u+0x00000001u; // 802604D4
  W8(c->r[1]+0x00000016u,c->r[0]); // 802604D8
L_802604DC:;
  c->r[0]=0u+0x00000003u; // 802604DC
  W8(c->r[1]+0x00000015u,c->r[0]); // 802604E0
  c->lr=0x802604E8u; f_80260F70(c); // 802604E4
  c->r[3]=c->r[1]+0x00000010u; // 802604E8
  c->lr=0x802604F0u; f_80263B3C(c); // 802604EC
  c->lr=0x802604F4u; f_802613A4(c); // 802604F0
  c->r[3]=0u+0x00000005u; // 802604F4
  c->lr=0x802604FCu; f_80260088(c); // 802604F8
  c->lr=0x80260500u; f_802613E0(c); // 802604FC
  c->lr=0x80260504u; f_8025BEE0(c); // 80260500
  c->lr=0x80260508u; f_802613A4(c); // 80260504
  c->lr=0x8026050Cu; f_80271488(c); // 80260508
  c->lr=0x80260510u; f_802630FC(c); // 8026050C
  c->r[3]=0u+0x80410000u; // 80260510
  c->r[5]=0u+0x80410000u; // 80260514
  c->r[3]=c->r[3]+0x00003920u; // 80260518
  c->r[4]=0u+0x0000034Bu; // 8026051C
  c->r[5]=c->r[5]+0x0000392Cu; // 80260520
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80260524
  c->lr=0x8026052Cu; f_801D479C(c); // 80260528
  c->r[0]=R32(c->r[1]+0x00000034u); // 8026052C
  c->lr=c->r[0]; // 80260530
  c->r[1]=c->r[1]+0x00000030u; // 80260534
  return; // 80260538
}

// fn_8026053C
void f_8026053C(Ctx* __restrict c) {
  trace_call(0x8026053Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8026053C
  c->r[0]=c->lr; // 80260540
  W32(c->r[1]+0x00000034u,c->r[0]); // 80260544
  c->r[3]=c->r[1]+0x00000008u; // 80260548
  c->lr=0x80260550u; f_80263C20(c); // 8026054C
  c->r[3]=0u+0x00000002u; // 80260550
  c->r[0]=0u+0x00000003u; // 80260554
  W8(c->r[1]+0x0000000Eu,c->r[3]); // 80260558
  W8(c->r[1]+0x0000000Du,c->r[0]); // 8026055C
  c->lr=0x80260564u; f_80260F70(c); // 80260560
  c->r[3]=c->r[1]+0x00000008u; // 80260564
  c->lr=0x8026056Cu; f_80263B3C(c); // 80260568
  c->lr=0x80260570u; f_8025BEE0(c); // 8026056C
  c->lr=0x80260574u; f_802613A4(c); // 80260570
  c->lr=0x80260578u; f_80271488(c); // 80260574
  c->lr=0x8026057Cu; f_802630FC(c); // 80260578
  c->r[3]=0u+0x80410000u; // 8026057C
  c->r[5]=0u+0x80410000u; // 80260580
  c->r[3]=c->r[3]+0x00003920u; // 80260584
  c->r[4]=0u+0x00000365u; // 80260588
  c->r[5]=c->r[5]+0x0000395Cu; // 8026058C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80260590
  c->lr=0x80260598u; f_801D479C(c); // 80260594
  c->r[0]=R32(c->r[1]+0x00000034u); // 80260598
  c->lr=c->r[0]; // 8026059C
  c->r[1]=c->r[1]+0x00000030u; // 802605A0
  return; // 802605A4
}

// OSGetResetCode
void f_802605A8(Ctx* __restrict c) {
  trace_call(0x802605A8u);
  c->r[3]=0u+0x805E0000u; // 802605A8
  c->r[0]=R32(c->r[3]+0x00007D80u); // 802605AC
  cmps(c,0,(int32_t)c->r[0],0); // 802605B0
  if (crb(c,2)) { goto L_802605C8; } // 802605B4
  c->r[3]=c->r[3]+0x00007D80u; // 802605B8
  c->r[0]=R32(c->r[3]+0x00000004u); // 802605BC
  c->r[3]=c->r[0]|0x80000000u; // 802605C0
  return; // 802605C4
L_802605C8:;
  c->r[3]=0u+0xCC000000u; // 802605C8
  c->r[0]=R32(c->r[3]+0x00003024u); // 802605CC
  c->r[3]=rotl(c->r[0],29)&0x1FFFFFFFu; // 802605D0
  return; // 802605D4
}

// OSResetSystem
void f_802605D8(Ctx* __restrict c) {
  trace_call(0x802605D8u);
  c->r[3]=0u+0x80410000u; // 802605D8
  c->r[5]=0u+0x80410000u; // 802605DC
  c->r[3]=c->r[3]+0x00003920u; // 802605E0
  c->r[4]=0u+0x000003FCu; // 802605E4
  c->r[5]=c->r[5]+0x00003990u; // 802605E8
  setcrb(c,6,crb(c,6)^crb(c,6)); // 802605EC
  f_801D479C(c); return; // 802605F0
}

// WriteSramCallback
void f_802605F4(Ctx* __restrict c) {
  trace_call(0x802605F4u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802605F4
  c->r[0]=c->lr; // 802605F8
  c->r[6]=0u+0x80600000u; // 802605FC
  c->r[5]=0u+0x80260000u; // 80260600
  W32(c->r[1]+0x00000024u,c->r[0]); // 80260604
  c->r[6]=c->r[6]+0xFFFF8880u; // 80260608
  c->r[3]=0u+0x00000000u; // 8026060C
  c->r[5]=c->r[5]+0x000005F4u; // 80260610
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 80260614
  c->r[4]=0u+0x00000001u; // 80260618
  W32(c->r[1]+0x00000018u,c->r[30]); // 8026061C
  W32(c->r[1]+0x00000014u,c->r[29]); // 80260620
  c->r[31]=R32(c->r[6]+0x00000040u); // 80260624
  c->r[29]=addc(c,~c->r[31],0x00000040u,1); // 80260628
  c->r[30]=c->r[6]+c->r[31]; // 8026062C
  c->lr=0x80260634u; f_8029D9E8(c); // 80260630
  cmps(c,0,(int32_t)c->r[3],0); // 80260634
  if (!crb(c,2)) { goto L_80260644; } // 80260638
  c->r[0]=0u+0x00000000u; // 8026063C
  goto L_802606F4; // 80260640
L_80260644:;
  c->r[3]=0u+0x00000000u; // 80260644
  c->r[4]=0u+0x00000001u; // 80260648
  c->r[5]=0u+0x00000003u; // 8026064C
  c->lr=0x80260654u; f_8029D254(c); // 80260650
  cmps(c,0,(int32_t)c->r[3],0); // 80260654
  if (!crb(c,2)) { goto L_8026066C; } // 80260658
  c->r[3]=0u+0x00000000u; // 8026065C
  c->lr=0x80260664u; f_8029DAE4(c); // 80260660
  c->r[0]=0u+0x00000000u; // 80260664
  goto L_802606F4; // 80260668
L_8026066C:;
  c->r[3]=rotl(c->r[31],6)&0xFFFFFFC0u; // 8026066C
  c->r[4]=c->r[1]+0x00000008u; // 80260670
  c->r[0]=c->r[3]+0x00000100u; // 80260674
  c->r[5]=0u+0x00000004u; // 80260678
  c->r[0]=c->r[0]|0xA0000000u; // 8026067C
  c->r[3]=0u+0x00000000u; // 80260680
  W32(c->r[1]+0x00000008u,c->r[0]); // 80260684
  c->r[6]=0u+0x00000001u; // 80260688
  c->r[7]=0u+0x00000000u; // 8026068C
  c->lr=0x80260694u; f_8029C7EC(c); // 80260690
  c->r[0]=cntlz(c->r[3]); // 80260694
  c->r[3]=0u+0x00000000u; // 80260698
  c->r[31]=rotl(c->r[0],27)&0x07FFFFFFu; // 8026069C
  c->lr=0x802606A4u; f_8029CC04(c); // 802606A0
  c->r[0]=cntlz(c->r[3]); // 802606A4
  c->r[4]=c->r[30]|c->r[30]; // 802606A8
  c->r[0]=rotl(c->r[0],27)&0x07FFFFFFu; // 802606AC
  c->r[5]=c->r[29]|c->r[29]; // 802606B0
  c->r[29]=c->r[31]|c->r[0]; // 802606B4
  c->r[3]=0u+0x00000000u; // 802606B8
  c->r[6]=0u+0x00000001u; // 802606BC
  c->lr=0x802606C4u; f_8029CA68(c); // 802606C0
  c->r[0]=cntlz(c->r[3]); // 802606C4
  c->r[3]=0u+0x00000000u; // 802606C8
  c->r[0]=rotl(c->r[0],27)&0x07FFFFFFu; // 802606CC
  c->r[29]=c->r[29]|c->r[0]; // 802606D0
  c->lr=0x802606D8u; f_8029D384(c); // 802606D4
  c->r[0]=cntlz(c->r[3]); // 802606D8
  c->r[3]=0u+0x00000000u; // 802606DC
  c->r[0]=rotl(c->r[0],27)&0x07FFFFFFu; // 802606E0
  c->r[29]=c->r[29]|c->r[0]; // 802606E4
  c->lr=0x802606ECu; f_8029DAE4(c); // 802606E8
  c->r[0]=cntlz(c->r[29]); // 802606EC
  c->r[0]=rotl(c->r[0],27)&0x07FFFFFFu; // 802606F0
L_802606F4:;
  c->r[3]=0u+0x80600000u; // 802606F4
  cmps(c,0,(int32_t)c->r[0],0); // 802606F8
  c->r[3]=c->r[3]+0xFFFF8880u; // 802606FC
  W32(c->r[3]+0x0000004Cu,c->r[0]); // 80260700
  if (crb(c,2)) { goto L_80260710; } // 80260704
  c->r[0]=0u+0x00000040u; // 80260708
  W32(c->r[3]+0x00000040u,c->r[0]); // 8026070C
L_80260710:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 80260710
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 80260714
  c->r[30]=R32(c->r[1]+0x00000018u); // 80260718
  c->r[29]=R32(c->r[1]+0x00000014u); // 8026071C
  c->lr=c->r[0]; // 80260720
  c->r[1]=c->r[1]+0x00000020u; // 80260724
  return; // 80260728
}

// __OSInitSram
void f_8026072C(Ctx* __restrict c) {
  trace_call(0x8026072Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8026072C
  c->r[0]=c->lr; // 80260730
  c->r[4]=0u+0x00000040u; // 80260734
  W32(c->r[1]+0x00000024u,c->r[0]); // 80260738
  c->r[0]=0u+0x00000000u; // 8026073C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 80260740
  W32(c->r[1]+0x00000018u,c->r[30]); // 80260744
  c->r[30]=0u+0x80600000u; // 80260748
  c->r[30]=c->r[30]+0xFFFF8880u; // 8026074C
  W32(c->r[30]+0x00000044u,c->r[0]); // 80260750
  c->r[3]=c->r[30]|c->r[30]; // 80260754
  W32(c->r[30]+0x00000048u,c->r[0]); // 80260758
  c->lr=0x80260760u; f_8025A3D4(c); // 8026075C
  c->r[3]=0u+0x00000000u; // 80260760
  c->r[4]=0u+0x00000001u; // 80260764
  c->r[5]=0u+0x00000000u; // 80260768
  c->lr=0x80260770u; f_8029D9E8(c); // 8026076C
  cmps(c,0,(int32_t)c->r[3],0); // 80260770
  if (!crb(c,2)) { goto L_80260780; } // 80260774
  c->r[3]=0u+0x00000000u; // 80260778
  goto L_80260844; // 8026077C
L_80260780:;
  c->r[3]=0u+0x00000000u; // 80260780
  c->r[4]=0u+0x00000001u; // 80260784
  c->r[5]=0u+0x00000003u; // 80260788
  c->lr=0x80260790u; f_8029D254(c); // 8026078C
  cmps(c,0,(int32_t)c->r[3],0); // 80260790
  if (!crb(c,2)) { goto L_802607A8; } // 80260794
  c->r[3]=0u+0x00000000u; // 80260798
  c->lr=0x802607A0u; f_8029DAE4(c); // 8026079C
  c->r[3]=0u+0x00000000u; // 802607A0
  goto L_80260844; // 802607A4
L_802607A8:;
  c->r[3]=0u+0x20000000u; // 802607A8
  c->r[4]=c->r[1]+0x00000008u; // 802607AC
  c->r[0]=c->r[3]+0x00000100u; // 802607B0
  c->r[5]=0u+0x00000004u; // 802607B4
  W32(c->r[1]+0x00000008u,c->r[0]); // 802607B8
  c->r[3]=0u+0x00000000u; // 802607BC
  c->r[6]=0u+0x00000001u; // 802607C0
  c->r[7]=0u+0x00000000u; // 802607C4
  c->lr=0x802607CCu; f_8029C7EC(c); // 802607C8
  c->r[0]=cntlz(c->r[3]); // 802607CC
  c->r[3]=0u+0x00000000u; // 802607D0
  c->r[31]=rotl(c->r[0],27)&0x07FFFFFFu; // 802607D4
  c->lr=0x802607DCu; f_8029CC04(c); // 802607D8
  c->r[0]=cntlz(c->r[3]); // 802607DC
  c->r[4]=c->r[30]|c->r[30]; // 802607E0
  c->r[0]=rotl(c->r[0],27)&0x07FFFFFFu; // 802607E4
  c->r[3]=0u+0x00000000u; // 802607E8
  c->r[30]=c->r[31]|c->r[0]; // 802607EC
  c->r[5]=0u+0x00000040u; // 802607F0
  c->r[6]=0u+0x00000000u; // 802607F4
  c->r[7]=0u+0x00000000u; // 802607F8
  c->lr=0x80260800u; f_8029CB0C(c); // 802607FC
  c->r[0]=cntlz(c->r[3]); // 80260800
  c->r[3]=0u+0x00000000u; // 80260804
  c->r[0]=rotl(c->r[0],27)&0x07FFFFFFu; // 80260808
  c->r[30]=c->r[30]|c->r[0]; // 8026080C
  c->lr=0x80260814u; f_8029CC04(c); // 80260810
  c->r[0]=cntlz(c->r[3]); // 80260814
  c->r[3]=0u+0x00000000u; // 80260818
  c->r[0]=rotl(c->r[0],27)&0x07FFFFFFu; // 8026081C
  c->r[30]=c->r[30]|c->r[0]; // 80260820
  c->lr=0x80260828u; f_8029D384(c); // 80260824
  c->r[0]=cntlz(c->r[3]); // 80260828
  c->r[3]=0u+0x00000000u; // 8026082C
  c->r[0]=rotl(c->r[0],27)&0x07FFFFFFu; // 80260830
  c->r[30]=c->r[30]|c->r[0]; // 80260834
  c->lr=0x8026083Cu; f_8029DAE4(c); // 80260838
  c->r[0]=cntlz(c->r[30]); // 8026083C
  c->r[3]=rotl(c->r[0],27)&0x07FFFFFFu; // 80260840
L_80260844:;
  c->r[31]=0u+0x80600000u; // 80260844
  c->r[0]=0u+0x00000040u; // 80260848
  c->r[31]=c->r[31]+0xFFFF8880u; // 8026084C
  W32(c->r[31]+0x0000004Cu,c->r[3]); // 80260850
  W32(c->r[31]+0x00000040u,c->r[0]); // 80260854
  c->lr=0x8026085Cu; f_8025EA10(c); // 80260858
  c->r[0]=R32(c->r[31]+0x00000048u); // 8026085C
  cmps(c,0,(int32_t)c->r[0],0); // 80260860
  if (crb(c,2)) { goto L_80260874; } // 80260864
  c->lr=0x8026086Cu; f_8025EA38(c); // 80260868
  c->r[3]=0u+0x00000000u; // 8026086C
  goto L_80260884; // 80260870
L_80260874:;
  c->r[0]=0u+0x00000001u; // 80260874
  W32(c->r[31]+0x00000044u,c->r[3]); // 80260878
  c->r[3]=c->r[31]+0x00000014u; // 8026087C
  W32(c->r[31]+0x00000048u,c->r[0]); // 80260880
L_80260884:;
  c->r[30]=R16(c->r[3]+0x00000028u); // 80260884
  c->r[3]=0u+0x00000000u; // 80260888
  c->r[4]=0u+0x00000014u; // 8026088C
  c->lr=0x80260894u; f_8026092C(c); // 80260890
  c->r[0]=rotl(c->r[30],0)&0x00007C00u; // 80260894
  cmpu(c,0,c->r[0],0x00005000u); // 80260898
  if (crb(c,2)) { goto L_802608AC; } // 8026089C
  c->r[0]=rotl(c->r[30],0)&0x000000C0u; // 802608A0
  cmpu(c,0,c->r[0],0x000000C0u); // 802608A4
  if (!crb(c,2)) { goto L_802608B0; } // 802608A8
L_802608AC:;
  c->r[30]=0u+0x00000000u; // 802608AC
L_802608B0:;
  c->lr=0x802608B4u; f_8025EA10(c); // 802608B0
  c->r[4]=0u+0x80600000u; // 802608B4
  c->r[4]=c->r[4]+0xFFFF8880u; // 802608B8
  c->r[0]=R32(c->r[4]+0x00000048u); // 802608BC
  cmps(c,0,(int32_t)c->r[0],0); // 802608C0
  if (crb(c,2)) { goto L_802608D4; } // 802608C4
  c->lr=0x802608CCu; f_8025EA38(c); // 802608C8
  c->r[5]=0u+0x00000000u; // 802608CC
  goto L_802608E4; // 802608D0
L_802608D4:;
  c->r[0]=0u+0x00000001u; // 802608D4
  W32(c->r[4]+0x00000044u,c->r[3]); // 802608D8
  c->r[5]=c->r[4]+0x00000014u; // 802608DC
  W32(c->r[4]+0x00000048u,c->r[0]); // 802608E0
L_802608E4:;
  c->r[0]=R16(c->r[5]+0x00000028u); // 802608E4
  c->r[3]=rotl(c->r[30],0)&0x0000FFFFu; // 802608E8
  cmpu(c,0,c->r[3],c->r[0]); // 802608EC
  if (!crb(c,2)) { goto L_80260904; } // 802608F0
  c->r[3]=0u+0x00000000u; // 802608F4
  c->r[4]=0u+0x00000014u; // 802608F8
  c->lr=0x80260900u; f_8026092C(c); // 802608FC
  goto L_80260914; // 80260900
L_80260904:;
  W16(c->r[5]+0x00000028u,c->r[30]); // 80260904
  c->r[3]=0u+0x00000001u; // 80260908
  c->r[4]=0u+0x00000014u; // 8026090C
  c->lr=0x80260914u; f_8026092C(c); // 80260910
L_80260914:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 80260914
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 80260918
  c->r[30]=R32(c->r[1]+0x00000018u); // 8026091C
  c->lr=c->r[0]; // 80260920
  c->r[1]=c->r[1]+0x00000020u; // 80260924
  return; // 80260928
}

// UnlockSram
void f_8026092C(Ctx* __restrict c) {
  trace_call(0x8026092Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8026092C
  c->r[0]=c->lr; // 80260930
  cmps(c,0,(int32_t)c->r[3],0); // 80260934
  W32(c->r[1]+0x00000024u,c->r[0]); // 80260938
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8026093C
  W32(c->r[1]+0x00000018u,c->r[30]); // 80260940
  W32(c->r[1]+0x00000014u,c->r[29]); // 80260944
  if (crb(c,2)) { goto L_80260BD4; } // 80260948
  cmps(c,0,(int32_t)c->r[4],0); // 8026094C
  if (!crb(c,2)) { goto L_80260A80; } // 80260950
  c->r[8]=0u+0x80600000u; // 80260954
  c->r[8]=c->r[8]+0xFFFF8880u; // 80260958
  c->r[3]=R8(c->r[8]+0x00000013u); // 8026095C
  c->r[0]=rotl(c->r[3],0)&0x00000003u; // 80260960
  cmpu(c,0,c->r[0],0x00000002u); // 80260964
  if (!crb(c,1)) { goto L_80260974; } // 80260968
  c->r[0]=rotl(c->r[3],0)&0x000000FCu; // 8026096C
  W8(c->r[8]+0x00000013u,c->r[0]); // 80260970
L_80260974:;
  c->r[3]=0u+0x80600000u; // 80260974
  c->r[0]=0u+0x00000000u; // 80260978
  c->r[3]=c->r[3]+0xFFFF8880u; // 8026097C
  c->r[7]=c->r[8]+0x0000000Cu; // 80260980
  c->r[5]=c->r[3]+0x00000014u; // 80260984
  W16(c->r[8]+0x00000002u,c->r[0]); // 80260988
  c->r[3]=c->r[5]+0x00000001u; // 8026098C
  c->r[3]=c->r[3]-c->r[7]; // 80260990
  cmpu(c,0,c->r[7],c->r[5]); // 80260994
  W16(c->r[8]+0x00000000u,c->r[0]); // 80260998
  c->r[3]=rotl(c->r[3],31)&0x7FFFFFFFu; // 8026099C
  if (!crb(c,0)) { goto L_80260A80; } // 802609A0
  c->r[0]=rotl(c->r[3],30)&0x3FFFFFFFu; cr0(c,c->r[0]); // 802609A4
  c->ctr=c->r[0]; // 802609A8
  if (crb(c,2)) { goto L_80260A50; } // 802609AC
L_802609B0:;
  c->r[6]=R16(c->r[8]+0x00000000u); // 802609B0
  c->r[0]=R16(c->r[7]+0x00000000u); // 802609B4
  c->r[5]=R16(c->r[8]+0x00000002u); // 802609B8
  c->r[0]=c->r[6]+c->r[0]; // 802609BC
  W16(c->r[8]+0x00000000u,c->r[0]); // 802609C0
  c->r[6]=rotl(c->r[0],0)&0x0000FFFFu; // 802609C4
  c->r[0]=R16(c->r[7]+0x00000000u); // 802609C8
  c->r[0]=~(c->r[0]|c->r[0]); // 802609CC
  c->r[0]=c->r[5]+c->r[0]; // 802609D0
  W16(c->r[8]+0x00000002u,c->r[0]); // 802609D4
  c->r[5]=rotl(c->r[0],0)&0x0000FFFFu; // 802609D8
  c->r[0]=R16(c->r[7]+0x00000002u); // 802609DC
  c->r[0]=c->r[6]+c->r[0]; // 802609E0
  W16(c->r[8]+0x00000000u,c->r[0]); // 802609E4
  c->r[6]=rotl(c->r[0],0)&0x0000FFFFu; // 802609E8
  c->r[0]=R16(c->r[7]+0x00000002u); // 802609EC
  c->r[0]=~(c->r[0]|c->r[0]); // 802609F0
  c->r[0]=c->r[5]+c->r[0]; // 802609F4
  W16(c->r[8]+0x00000002u,c->r[0]); // 802609F8
  c->r[5]=rotl(c->r[0],0)&0x0000FFFFu; // 802609FC
  c->r[0]=R16(c->r[7]+0x00000004u); // 80260A00
  c->r[0]=c->r[6]+c->r[0]; // 80260A04
  W16(c->r[8]+0x00000000u,c->r[0]); // 80260A08
  c->r[6]=rotl(c->r[0],0)&0x0000FFFFu; // 80260A0C
  c->r[0]=R16(c->r[7]+0x00000004u); // 80260A10
  c->r[0]=~(c->r[0]|c->r[0]); // 80260A14
  c->r[0]=c->r[5]+c->r[0]; // 80260A18
  W16(c->r[8]+0x00000002u,c->r[0]); // 80260A1C
  c->r[5]=rotl(c->r[0],0)&0x0000FFFFu; // 80260A20
  c->r[0]=R16(c->r[7]+0x00000006u); // 80260A24
  c->r[0]=c->r[6]+c->r[0]; // 80260A28
  W16(c->r[8]+0x00000000u,c->r[0]); // 80260A2C
  c->r[0]=R16(c->r[7]+0x00000006u); // 80260A30
  c->r[7]=c->r[7]+0x00000008u; // 80260A34
  c->r[0]=~(c->r[0]|c->r[0]); // 80260A38
  c->r[0]=c->r[5]+c->r[0]; // 80260A3C
  W16(c->r[8]+0x00000002u,c->r[0]); // 80260A40
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_802609B0; } // 80260A44
  c->r[3]=c->r[3]&0x00000003u; cr0(c,c->r[3]); // 80260A48
  if (crb(c,2)) { goto L_80260A80; } // 80260A4C
L_80260A50:;
  c->ctr=c->r[3]; // 80260A50
L_80260A54:;
  c->r[6]=R16(c->r[8]+0x00000000u); // 80260A54
  c->r[0]=R16(c->r[7]+0x00000000u); // 80260A58
  c->r[5]=R16(c->r[8]+0x00000002u); // 80260A5C
  c->r[0]=c->r[6]+c->r[0]; // 80260A60
  W16(c->r[8]+0x00000000u,c->r[0]); // 80260A64
  c->r[0]=R16(c->r[7]+0x00000000u); // 80260A68
  c->r[7]=c->r[7]+0x00000002u; // 80260A6C
  c->r[0]=~(c->r[0]|c->r[0]); // 80260A70
  c->r[0]=c->r[5]+c->r[0]; // 80260A74
  W16(c->r[8]+0x00000002u,c->r[0]); // 80260A78
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80260A54; } // 80260A7C
L_80260A80:;
  c->r[3]=0u+0x80600000u; // 80260A80
  c->r[3]=c->r[3]+0xFFFF8880u; // 80260A84
  c->r[0]=R32(c->r[3]+0x00000040u); // 80260A88
  cmpu(c,0,c->r[4],c->r[0]); // 80260A8C
  if (!crb(c,0)) { goto L_80260A98; } // 80260A90
  W32(c->r[3]+0x00000040u,c->r[4]); // 80260A94
L_80260A98:;
  c->r[4]=0u+0x80600000u; // 80260A98
  c->r[4]=c->r[4]+0xFFFF8880u; // 80260A9C
  c->r[0]=R32(c->r[4]+0x00000040u); // 80260AA0
  cmpu(c,0,c->r[0],0x00000014u); // 80260AA4
  if (crb(c,1)) { goto L_80260AD0; } // 80260AA8
  c->r[3]=R16(c->r[4]+0x0000003Cu); // 80260AAC
  c->r[0]=rotl(c->r[3],0)&0x00007C00u; // 80260AB0
  cmpu(c,0,c->r[0],0x00005000u); // 80260AB4
  if (crb(c,2)) { goto L_80260AC8; } // 80260AB8
  c->r[0]=rotl(c->r[3],0)&0x000000C0u; // 80260ABC
  cmpu(c,0,c->r[0],0x000000C0u); // 80260AC0
  if (!crb(c,2)) { goto L_80260AD0; } // 80260AC4
L_80260AC8:;
  c->r[0]=0u+0x00000000u; // 80260AC8
  W16(c->r[4]+0x0000003Cu,c->r[0]); // 80260ACC
L_80260AD0:;
  c->r[6]=0u+0x80600000u; // 80260AD0
  c->r[5]=0u+0x80260000u; // 80260AD4
  c->r[6]=c->r[6]+0xFFFF8880u; // 80260AD8
  c->r[3]=0u+0x00000000u; // 80260ADC
  c->r[31]=R32(c->r[6]+0x00000040u); // 80260AE0
  c->r[5]=c->r[5]+0x000005F4u; // 80260AE4
  c->r[4]=0u+0x00000001u; // 80260AE8
  c->r[29]=addc(c,~c->r[31],0x00000040u,1); // 80260AEC
  c->r[30]=c->r[6]+c->r[31]; // 80260AF0
  c->lr=0x80260AF8u; f_8029D9E8(c); // 80260AF4
  cmps(c,0,(int32_t)c->r[3],0); // 80260AF8
  if (!crb(c,2)) { goto L_80260B08; } // 80260AFC
  c->r[0]=0u+0x00000000u; // 80260B00
  goto L_80260BB8; // 80260B04
L_80260B08:;
  c->r[3]=0u+0x00000000u; // 80260B08
  c->r[4]=0u+0x00000001u; // 80260B0C
  c->r[5]=0u+0x00000003u; // 80260B10
  c->lr=0x80260B18u; f_8029D254(c); // 80260B14
  cmps(c,0,(int32_t)c->r[3],0); // 80260B18
  if (!crb(c,2)) { goto L_80260B30; } // 80260B1C
  c->r[3]=0u+0x00000000u; // 80260B20
  c->lr=0x80260B28u; f_8029DAE4(c); // 80260B24
  c->r[0]=0u+0x00000000u; // 80260B28
  goto L_80260BB8; // 80260B2C
L_80260B30:;
  c->r[3]=rotl(c->r[31],6)&0xFFFFFFC0u; // 80260B30
  c->r[4]=c->r[1]+0x00000008u; // 80260B34
  c->r[0]=c->r[3]+0x00000100u; // 80260B38
  c->r[5]=0u+0x00000004u; // 80260B3C
  c->r[0]=c->r[0]|0xA0000000u; // 80260B40
  c->r[3]=0u+0x00000000u; // 80260B44
  W32(c->r[1]+0x00000008u,c->r[0]); // 80260B48
  c->r[6]=0u+0x00000001u; // 80260B4C
  c->r[7]=0u+0x00000000u; // 80260B50
  c->lr=0x80260B58u; f_8029C7EC(c); // 80260B54
  c->r[0]=cntlz(c->r[3]); // 80260B58
  c->r[3]=0u+0x00000000u; // 80260B5C
  c->r[31]=rotl(c->r[0],27)&0x07FFFFFFu; // 80260B60
  c->lr=0x80260B68u; f_8029CC04(c); // 80260B64
  c->r[0]=cntlz(c->r[3]); // 80260B68
  c->r[4]=c->r[30]|c->r[30]; // 80260B6C
  c->r[0]=rotl(c->r[0],27)&0x07FFFFFFu; // 80260B70
  c->r[5]=c->r[29]|c->r[29]; // 80260B74
  c->r[29]=c->r[31]|c->r[0]; // 80260B78
  c->r[3]=0u+0x00000000u; // 80260B7C
  c->r[6]=0u+0x00000001u; // 80260B80
  c->lr=0x80260B88u; f_8029CA68(c); // 80260B84
  c->r[0]=cntlz(c->r[3]); // 80260B88
  c->r[3]=0u+0x00000000u; // 80260B8C
  c->r[0]=rotl(c->r[0],27)&0x07FFFFFFu; // 80260B90
  c->r[29]=c->r[29]|c->r[0]; // 80260B94
  c->lr=0x80260B9Cu; f_8029D384(c); // 80260B98
  c->r[0]=cntlz(c->r[3]); // 80260B9C
  c->r[3]=0u+0x00000000u; // 80260BA0
  c->r[0]=rotl(c->r[0],27)&0x07FFFFFFu; // 80260BA4
  c->r[29]=c->r[29]|c->r[0]; // 80260BA8
  c->lr=0x80260BB0u; f_8029DAE4(c); // 80260BAC
  c->r[0]=cntlz(c->r[29]); // 80260BB0
  c->r[0]=rotl(c->r[0],27)&0x07FFFFFFu; // 80260BB4
L_80260BB8:;
  c->r[3]=0u+0x80600000u; // 80260BB8
  cmps(c,0,(int32_t)c->r[0],0); // 80260BBC
  c->r[3]=c->r[3]+0xFFFF8880u; // 80260BC0
  W32(c->r[3]+0x0000004Cu,c->r[0]); // 80260BC4
  if (crb(c,2)) { goto L_80260BD4; } // 80260BC8
  c->r[0]=0u+0x00000040u; // 80260BCC
  W32(c->r[3]+0x00000040u,c->r[0]); // 80260BD0
L_80260BD4:;
  c->r[31]=0u+0x80600000u; // 80260BD4
  c->r[0]=0u+0x00000000u; // 80260BD8
  c->r[31]=c->r[31]+0xFFFF8880u; // 80260BDC
  W32(c->r[31]+0x00000048u,c->r[0]); // 80260BE0
  c->r[3]=R32(c->r[31]+0x00000044u); // 80260BE4
  c->lr=0x80260BECu; f_8025EA38(c); // 80260BE8
  c->r[3]=R32(c->r[31]+0x0000004Cu); // 80260BEC
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 80260BF0
  c->r[30]=R32(c->r[1]+0x00000018u); // 80260BF4
  c->r[29]=R32(c->r[1]+0x00000014u); // 80260BF8
  c->r[0]=R32(c->r[1]+0x00000024u); // 80260BFC
  c->lr=c->r[0]; // 80260C00
  c->r[1]=c->r[1]+0x00000020u; // 80260C04
  return; // 80260C08
}

// __OSSyncSram
void f_80260C0C(Ctx* __restrict c) {
  trace_call(0x80260C0Cu);
  c->r[3]=0u+0x80600000u; // 80260C0C
  c->r[3]=c->r[3]+0xFFFF8880u; // 80260C10
  c->r[3]=R32(c->r[3]+0x0000004Cu); // 80260C14
  return; // 80260C18
}

void hle___OSReadROM(Ctx*);
// __OSReadROM
void f_80260C1C(Ctx* __restrict c) {
  hle___OSReadROM(c);
}

// OSGetWirelessID
void f_80260D40(Ctx* __restrict c) {
  trace_call(0x80260D40u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80260D40
  c->r[0]=c->lr; // 80260D44
  W32(c->r[1]+0x00000014u,c->r[0]); // 80260D48
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80260D4C
  c->r[31]=c->r[3]|c->r[3]; // 80260D50
  c->lr=0x80260D58u; f_8025EA10(c); // 80260D54
  c->r[4]=0u+0x80600000u; // 80260D58
  c->r[4]=c->r[4]+0xFFFF8880u; // 80260D5C
  c->r[0]=R32(c->r[4]+0x00000048u); // 80260D60
  cmps(c,0,(int32_t)c->r[0],0); // 80260D64
  if (crb(c,2)) { goto L_80260D78; } // 80260D68
  c->lr=0x80260D70u; f_8025EA38(c); // 80260D6C
  c->r[5]=0u+0x00000000u; // 80260D70
  goto L_80260D88; // 80260D74
L_80260D78:;
  c->r[0]=0u+0x00000001u; // 80260D78
  W32(c->r[4]+0x00000044u,c->r[3]); // 80260D7C
  c->r[5]=c->r[4]+0x00000014u; // 80260D80
  W32(c->r[4]+0x00000048u,c->r[0]); // 80260D84
L_80260D88:;
  c->r[0]=rotl(c->r[31],1)&0xFFFFFFFEu; // 80260D88
  c->r[3]=0u+0x00000000u; // 80260D8C
  c->r[5]=c->r[5]+c->r[0]; // 80260D90
  c->r[4]=0u+0x00000014u; // 80260D94
  c->r[31]=R16(c->r[5]+0x0000001Cu); // 80260D98
  c->lr=0x80260DA0u; f_8026092C(c); // 80260D9C
  c->r[3]=c->r[31]|c->r[31]; // 80260DA0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80260DA4
  c->r[0]=R32(c->r[1]+0x00000014u); // 80260DA8
  c->lr=c->r[0]; // 80260DAC
  c->r[1]=c->r[1]+0x00000010u; // 80260DB0
  return; // 80260DB4
}

// OSSetWirelessID
void f_80260DB8(Ctx* __restrict c) {
  trace_call(0x80260DB8u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80260DB8
  c->r[0]=c->lr; // 80260DBC
  W32(c->r[1]+0x00000014u,c->r[0]); // 80260DC0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80260DC4
  c->r[31]=c->r[4]|c->r[4]; // 80260DC8
  W32(c->r[1]+0x00000008u,c->r[30]); // 80260DCC
  c->r[30]=c->r[3]|c->r[3]; // 80260DD0
  c->lr=0x80260DD8u; f_8025EA10(c); // 80260DD4
  c->r[4]=0u+0x80600000u; // 80260DD8
  c->r[4]=c->r[4]+0xFFFF8880u; // 80260DDC
  c->r[0]=R32(c->r[4]+0x00000048u); // 80260DE0
  cmps(c,0,(int32_t)c->r[0],0); // 80260DE4
  if (crb(c,2)) { goto L_80260DF8; } // 80260DE8
  c->lr=0x80260DF0u; f_8025EA38(c); // 80260DEC
  c->r[3]=0u+0x00000000u; // 80260DF0
  goto L_80260E08; // 80260DF4
L_80260DF8:;
  c->r[0]=0u+0x00000001u; // 80260DF8
  W32(c->r[4]+0x00000044u,c->r[3]); // 80260DFC
  c->r[3]=c->r[4]+0x00000014u; // 80260E00
  W32(c->r[4]+0x00000048u,c->r[0]); // 80260E04
L_80260E08:;
  c->r[0]=rotl(c->r[30],1)&0xFFFFFFFEu; // 80260E08
  c->r[3]=c->r[3]+c->r[0]; // 80260E0C
  c->r[0]=R16(c->r[3]+0x0000001Cu); // 80260E10
  cmpu(c,0,c->r[31],c->r[0]); // 80260E14
  if (crb(c,2)) { goto L_80260E30; } // 80260E18
  W16(c->r[3]+0x0000001Cu,c->r[31]); // 80260E1C
  c->r[3]=0u+0x00000001u; // 80260E20
  c->r[4]=0u+0x00000014u; // 80260E24
  c->lr=0x80260E2Cu; f_8026092C(c); // 80260E28
  goto L_80260E3C; // 80260E2C
L_80260E30:;
  c->r[3]=0u+0x00000000u; // 80260E30
  c->r[4]=0u+0x00000014u; // 80260E34
  c->lr=0x80260E3Cu; f_8026092C(c); // 80260E38
L_80260E3C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 80260E3C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80260E40
  c->r[30]=R32(c->r[1]+0x00000008u); // 80260E44
  c->lr=c->r[0]; // 80260E48
  c->r[1]=c->r[1]+0x00000010u; // 80260E4C
  return; // 80260E50
}

// __OSGetRTCFlags
void f_80260E54(Ctx* __restrict c) {
  trace_call(0x80260E54u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80260E54
  c->r[0]=c->lr; // 80260E58
  c->r[4]=0u+0x00000001u; // 80260E5C
  c->r[5]=0u+0x00000000u; // 80260E60
  W32(c->r[1]+0x00000024u,c->r[0]); // 80260E64
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 80260E68
  W32(c->r[1]+0x00000018u,c->r[30]); // 80260E6C
  c->r[30]=c->r[3]|c->r[3]; // 80260E70
  c->r[3]=0u+0x00000000u; // 80260E74
  c->lr=0x80260E7Cu; f_8029D9E8(c); // 80260E78
  cmps(c,0,(int32_t)c->r[3],0); // 80260E7C
  if (!crb(c,2)) { goto L_80260E8C; } // 80260E80
  c->r[3]=0u+0x00000000u; // 80260E84
  goto L_80260F58; // 80260E88
L_80260E8C:;
  c->r[3]=0u+0x00000000u; // 80260E8C
  c->r[4]=0u+0x00000001u; // 80260E90
  c->r[5]=0u+0x00000003u; // 80260E94
  c->lr=0x80260E9Cu; f_8029D254(c); // 80260E98
  cmps(c,0,(int32_t)c->r[3],0); // 80260E9C
  if (!crb(c,2)) { goto L_80260EB4; } // 80260EA0
  c->r[3]=0u+0x00000000u; // 80260EA4
  c->lr=0x80260EACu; f_8029DAE4(c); // 80260EA8
  c->r[3]=0u+0x00000000u; // 80260EAC
  goto L_80260F58; // 80260EB0
L_80260EB4:;
  c->r[3]=0u+0x21000000u; // 80260EB4
  c->r[4]=c->r[1]+0x00000008u; // 80260EB8
  c->r[0]=c->r[3]+0x00000800u; // 80260EBC
  c->r[5]=0u+0x00000004u; // 80260EC0
  W32(c->r[1]+0x00000008u,c->r[0]); // 80260EC4
  c->r[3]=0u+0x00000000u; // 80260EC8
  c->r[6]=0u+0x00000001u; // 80260ECC
  c->r[7]=0u+0x00000000u; // 80260ED0
  c->lr=0x80260ED8u; f_8029C7EC(c); // 80260ED4
  c->r[0]=cntlz(c->r[3]); // 80260ED8
  c->r[3]=0u+0x00000000u; // 80260EDC
  c->r[31]=rotl(c->r[0],27)&0x07FFFFFFu; // 80260EE0
  c->lr=0x80260EE8u; f_8029CC04(c); // 80260EE4
  c->r[0]=cntlz(c->r[3]); // 80260EE8
  c->r[4]=c->r[1]+0x00000008u; // 80260EEC
  c->r[0]=rotl(c->r[0],27)&0x07FFFFFFu; // 80260EF0
  c->r[3]=0u+0x00000000u; // 80260EF4
  c->r[31]=c->r[31]|c->r[0]; // 80260EF8
  c->r[5]=0u+0x00000004u; // 80260EFC
  c->r[6]=0u+0x00000000u; // 80260F00
  c->r[7]=0u+0x00000000u; // 80260F04
  c->lr=0x80260F0Cu; f_8029C7EC(c); // 80260F08
  c->r[0]=cntlz(c->r[3]); // 80260F0C
  c->r[3]=0u+0x00000000u; // 80260F10
  c->r[0]=rotl(c->r[0],27)&0x07FFFFFFu; // 80260F14
  c->r[31]=c->r[31]|c->r[0]; // 80260F18
  c->lr=0x80260F20u; f_8029CC04(c); // 80260F1C
  c->r[0]=cntlz(c->r[3]); // 80260F20
  c->r[3]=0u+0x00000000u; // 80260F24
  c->r[0]=rotl(c->r[0],27)&0x07FFFFFFu; // 80260F28
  c->r[31]=c->r[31]|c->r[0]; // 80260F2C
  c->lr=0x80260F34u; f_8029D384(c); // 80260F30
  c->r[0]=cntlz(c->r[3]); // 80260F34
  c->r[3]=0u+0x00000000u; // 80260F38
  c->r[0]=rotl(c->r[0],27)&0x07FFFFFFu; // 80260F3C
  c->r[31]=c->r[31]|c->r[0]; // 80260F40
  c->lr=0x80260F48u; f_8029DAE4(c); // 80260F44
  c->r[4]=R32(c->r[1]+0x00000008u); // 80260F48
  c->r[0]=cntlz(c->r[31]); // 80260F4C
  c->r[3]=rotl(c->r[0],27)&0x07FFFFFFu; // 80260F50
  W32(c->r[30]+0x00000000u,c->r[4]); // 80260F54
L_80260F58:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 80260F58
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 80260F5C
  c->r[30]=R32(c->r[1]+0x00000018u); // 80260F60
  c->lr=c->r[0]; // 80260F64
  c->r[1]=c->r[1]+0x00000020u; // 80260F68
  return; // 80260F6C
}

// __OSClearRTCFlags
void f_80260F70(Ctx* __restrict c) {
  trace_call(0x80260F70u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80260F70
  c->r[0]=c->lr; // 80260F74
  c->r[3]=0u+0x00000000u; // 80260F78
  c->r[4]=0u+0x00000001u; // 80260F7C
  W32(c->r[1]+0x00000024u,c->r[0]); // 80260F80
  c->r[0]=0u+0x00000000u; // 80260F84
  c->r[5]=0u+0x00000000u; // 80260F88
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 80260F8C
  W32(c->r[1]+0x00000008u,c->r[0]); // 80260F90
  c->lr=0x80260F98u; f_8029D9E8(c); // 80260F94
  cmps(c,0,(int32_t)c->r[3],0); // 80260F98
  if (!crb(c,2)) { goto L_80260FA8; } // 80260F9C
  c->r[3]=0u+0x00000000u; // 80260FA0
  goto L_8026106C; // 80260FA4
L_80260FA8:;
  c->r[3]=0u+0x00000000u; // 80260FA8
  c->r[4]=0u+0x00000001u; // 80260FAC
  c->r[5]=0u+0x00000003u; // 80260FB0
  c->lr=0x80260FB8u; f_8029D254(c); // 80260FB4
  cmps(c,0,(int32_t)c->r[3],0); // 80260FB8
  if (!crb(c,2)) { goto L_80260FD0; } // 80260FBC
  c->r[3]=0u+0x00000000u; // 80260FC0
  c->lr=0x80260FC8u; f_8029DAE4(c); // 80260FC4
  c->r[3]=0u+0x00000000u; // 80260FC8
  goto L_8026106C; // 80260FCC
L_80260FD0:;
  c->r[3]=0u+0xA1000000u; // 80260FD0
  c->r[4]=c->r[1]+0x0000000Cu; // 80260FD4
  c->r[0]=c->r[3]+0x00000800u; // 80260FD8
  c->r[5]=0u+0x00000004u; // 80260FDC
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 80260FE0
  c->r[3]=0u+0x00000000u; // 80260FE4
  c->r[6]=0u+0x00000001u; // 80260FE8
  c->r[7]=0u+0x00000000u; // 80260FEC
  c->lr=0x80260FF4u; f_8029C7EC(c); // 80260FF0
  c->r[0]=cntlz(c->r[3]); // 80260FF4
  c->r[3]=0u+0x00000000u; // 80260FF8
  c->r[31]=rotl(c->r[0],27)&0x07FFFFFFu; // 80260FFC
  c->lr=0x80261004u; f_8029CC04(c); // 80261000
  c->r[0]=cntlz(c->r[3]); // 80261004
  c->r[4]=c->r[1]+0x00000008u; // 80261008
  c->r[0]=rotl(c->r[0],27)&0x07FFFFFFu; // 8026100C
  c->r[3]=0u+0x00000000u; // 80261010
  c->r[31]=c->r[31]|c->r[0]; // 80261014
  c->r[5]=0u+0x00000004u; // 80261018
  c->r[6]=0u+0x00000001u; // 8026101C
  c->r[7]=0u+0x00000000u; // 80261020
  c->lr=0x80261028u; f_8029C7EC(c); // 80261024
  c->r[0]=cntlz(c->r[3]); // 80261028
  c->r[3]=0u+0x00000000u; // 8026102C
  c->r[0]=rotl(c->r[0],27)&0x07FFFFFFu; // 80261030
  c->r[31]=c->r[31]|c->r[0]; // 80261034
  c->lr=0x8026103Cu; f_8029CC04(c); // 80261038
  c->r[0]=cntlz(c->r[3]); // 8026103C
  c->r[3]=0u+0x00000000u; // 80261040
  c->r[0]=rotl(c->r[0],27)&0x07FFFFFFu; // 80261044
  c->r[31]=c->r[31]|c->r[0]; // 80261048
  c->lr=0x80261050u; f_8029D384(c); // 8026104C
  c->r[0]=cntlz(c->r[3]); // 80261050
  c->r[3]=0u+0x00000000u; // 80261054
  c->r[0]=rotl(c->r[0],27)&0x07FFFFFFu; // 80261058
  c->r[31]=c->r[31]|c->r[0]; // 8026105C
  c->lr=0x80261064u; f_8029DAE4(c); // 80261060
  c->r[0]=cntlz(c->r[31]); // 80261064
  c->r[3]=rotl(c->r[0],27)&0x07FFFFFFu; // 80261068
L_8026106C:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 8026106C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 80261070
  c->lr=c->r[0]; // 80261074
  c->r[1]=c->r[1]+0x00000020u; // 80261078
  return; // 8026107C
}

// SystemCallVector
void f_80261080(Ctx* __restrict c) {
  trace_call(0x80261080u);
  c->r[9]=mfspr(c,1008); // 80261080
  c->r[10]=c->r[9]|0x00000008u; // 80261084
  mtspr(c,1008,c->r[10]); // 80261088
  /* isync */ // 8026108C
  /* sync */ // 80261090
  mtspr(c,1008,c->r[9]); // 80261094
  return; /* rfi */ // 80261098
  c->r[0]=c->r[0]|0x00000000u; // 8026109C
}

// __OSInitSystemCall
void f_802610A0(Ctx* __restrict c) {
  trace_call(0x802610A0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802610A0
  c->r[0]=c->lr; // 802610A4
  c->r[4]=0u+0x80260000u; // 802610A8
  c->r[5]=0u+0x80260000u; // 802610AC
  W32(c->r[1]+0x00000014u,c->r[0]); // 802610B0
  c->r[4]=c->r[4]+0x00001080u; // 802610B4
  c->r[5]=c->r[5]+0x0000109Cu; // 802610B8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 802610BC
  c->r[31]=0u+0x80000000u; // 802610C0
  c->r[3]=c->r[31]+0x00000C00u; // 802610C4
  c->r[5]=c->r[5]-c->r[4]; // 802610C8
  c->lr=0x802610D0u; f_80235294(c); // 802610CC
  c->r[3]=c->r[31]+0x00000C00u; // 802610D0
  c->r[4]=0u+0x00000100u; // 802610D4
  c->lr=0x802610DCu; f_8025A460(c); // 802610D8
  /* sync */ // 802610DC
  c->r[3]=c->r[31]+0x00000C00u; // 802610E0
  c->r[4]=0u+0x00000100u; // 802610E4
  c->lr=0x802610ECu; f_8025A4E4(c); // 802610E8
  c->r[0]=R32(c->r[1]+0x00000014u); // 802610EC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 802610F0
  c->lr=c->r[0]; // 802610F4
  c->r[1]=c->r[1]+0x00000010u; // 802610F8
  return; // 802610FC
}

// fn_80261100
void f_80261100(Ctx* __restrict c) {
  trace_call(0x80261100u);
  return; // 80261100
}

// __OSThreadInit
void f_80261104(Ctx* __restrict c) {
  trace_call(0x80261104u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80261104
  c->r[0]=c->lr; // 80261108
  c->r[3]=0u+0x00000002u; // 8026110C
  c->r[6]=0u+0x00000001u; // 80261110
  W32(c->r[1]+0x00000024u,c->r[0]); // 80261114
  c->r[4]=0u+0x00000000u; // 80261118
  c->r[5]=0u+0x00000010u; // 8026111C
  c->r[0]=0u+0xFFFFFFFFu; // 80261120
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 80261124
  c->r[31]=0u+0x80600000u; // 80261128
  c->r[31]=c->r[31]+0xFFFF88D8u; // 8026112C
  W32(c->r[1]+0x00000018u,c->r[30]); // 80261130
  c->r[30]=c->r[31]+0x00000000u; // 80261134
  W32(c->r[1]+0x00000014u,c->r[29]); // 80261138
  c->r[29]=0u+0x80000000u; // 8026113C
  W16(c->r[30]+0x000002C8u,c->r[3]); // 80261140
  c->r[3]=c->r[30]|c->r[30]; // 80261144
  W16(c->r[30]+0x000002CAu,c->r[6]); // 80261148
  W32(c->r[30]+0x000002D4u,c->r[5]); // 8026114C
  W32(c->r[30]+0x000002D0u,c->r[5]); // 80261150
  W32(c->r[30]+0x000002CCu,c->r[4]); // 80261154
  W32(c->r[30]+0x000002D8u,c->r[0]); // 80261158
  W32(c->r[30]+0x000002F0u,c->r[4]); // 8026115C
  W32(c->r[30]+0x000002ECu,c->r[4]); // 80261160
  W32(c->r[30]+0x000002E8u,c->r[4]); // 80261164
  W32(c->r[30]+0x000002F8u,c->r[4]); // 80261168
  W32(c->r[30]+0x000002F4u,c->r[4]); // 8026116C
  W32(c->r[29]+0x000000D8u,c->r[30]); // 80261170
  c->lr=0x80261178u; f_8025AE6C(c); // 80261174
  c->r[3]=c->r[30]|c->r[30]; // 80261178
  c->lr=0x80261180u; f_8025AC44(c); // 8026117C
  c->r[4]=0u+0x80710000u; // 80261180
  c->r[5]=0u+0x806D0000u; // 80261184
  c->r[4]=c->r[4]+0xFFFFB780u; // 80261188
  c->r[3]=0u+0xDEAE0000u; // 8026118C
  c->r[5]=c->r[5]+0xFFFFB77Cu; // 80261190
  W32(c->r[30]+0x00000304u,c->r[4]); // 80261194
  c->r[0]=c->r[3]+0xFFFFBABEu; // 80261198
  c->r[4]=c->r[30]|c->r[30]; // 8026119C
  W32(c->r[30]+0x00000308u,c->r[5]); // 802611A0
  W32(c->r[5]+0x00000000u,c->r[0]); // 802611A4
  c->r[12]=R32(c->r[13]+0xFFFF8DF8u); // 802611A8
  c->r[3]=R32(c->r[29]+0x000000E4u); // 802611AC
  c->ctr=c->r[12]; // 802611B0
  if (true) { c->lr=0x802611B8u; dispatch(c,c->ctr); } // 802611B4
  W32(c->r[29]+0x000000E4u,c->r[30]); // 802611B8
  c->lr=0x802611C0u; f_8025AE04(c); // 802611BC
  c->r[4]=R32(c->r[29]+0x000000E4u); // 802611C0
  c->r[4]=R32(c->r[4]+0x00000308u); // 802611C4
  c->r[8]=c->r[4]+0x00000004u; // 802611C8
  cmpu(c,1,c->r[8],c->r[3]); // 802611CC
  if (!crb(c,4)) { goto L_80261290; } // 802611D0
  c->r[5]=c->r[3]-c->r[8]; // 802611D4
  c->r[6]=c->r[3]+0xFFFFFFE0u; // 802611D8
  c->r[4]=c->r[5]+0x00000003u; // 802611DC
  c->r[0]=sraw(c,c->r[4],2); // 802611E0
  c->r[0]=addc(c,c->r[0],0,c->xer_ca); // 802611E4
  cmps(c,0,(int32_t)c->r[0],8); // 802611E8
  if (!crb(c,1)) { goto L_80261268; } // 802611EC
  c->r[7]=0u+0x00000000u; // 802611F0
  if (crb(c,5)) { goto L_8026121C; } // 802611F4
  c->r[0]=rotl(c->r[5],0)&0x80000000u; cr0(c,c->r[0]); // 802611F8
  c->r[5]=0u+0x00000001u; // 802611FC
  if (!crb(c,2)) { goto L_80261210; } // 80261200
  c->r[0]=rotl(c->r[4],0)&0x80000000u; cr0(c,c->r[0]); // 80261204
  if (crb(c,2)) { goto L_80261210; } // 80261208
  c->r[5]=0u+0x00000000u; // 8026120C
L_80261210:;
  cmps(c,0,(int32_t)c->r[5],0); // 80261210
  if (crb(c,2)) { goto L_8026121C; } // 80261214
  c->r[7]=0u+0x00000001u; // 80261218
L_8026121C:;
  cmps(c,0,(int32_t)c->r[7],0); // 8026121C
  if (crb(c,2)) { goto L_80261268; } // 80261220
  c->r[0]=c->r[6]+0x0000001Fu; // 80261224
  c->r[4]=0u+0x00000000u; // 80261228
  c->r[0]=c->r[0]-c->r[8]; // 8026122C
  c->r[0]=rotl(c->r[0],27)&0x07FFFFFFu; // 80261230
  c->ctr=c->r[0]; // 80261234
  cmpu(c,0,c->r[8],c->r[6]); // 80261238
  if (!crb(c,0)) { goto L_80261268; } // 8026123C
L_80261240:;
  W32(c->r[8]+0x00000000u,c->r[4]); // 80261240
  W32(c->r[8]+0x00000004u,c->r[4]); // 80261244
  W32(c->r[8]+0x00000008u,c->r[4]); // 80261248
  W32(c->r[8]+0x0000000Cu,c->r[4]); // 8026124C
  W32(c->r[8]+0x00000010u,c->r[4]); // 80261250
  W32(c->r[8]+0x00000014u,c->r[4]); // 80261254
  W32(c->r[8]+0x00000018u,c->r[4]); // 80261258
  W32(c->r[8]+0x0000001Cu,c->r[4]); // 8026125C
  c->r[8]=c->r[8]+0x00000020u; // 80261260
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80261240; } // 80261264
L_80261268:;
  c->r[0]=c->r[3]+0x00000003u; // 80261268
  c->r[4]=0u+0x00000000u; // 8026126C
  c->r[0]=c->r[0]-c->r[8]; // 80261270
  c->r[0]=rotl(c->r[0],30)&0x3FFFFFFFu; // 80261274
  c->ctr=c->r[0]; // 80261278
  cmpu(c,0,c->r[8],c->r[3]); // 8026127C
  if (!crb(c,0)) { goto L_80261290; } // 80261280
L_80261284:;
  W32(c->r[8]+0x00000000u,c->r[4]); // 80261284
  c->r[8]=c->r[8]+0x00000004u; // 80261288
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80261284; } // 8026128C
L_80261290:;
  c->r[3]=0u+0x00000000u; // 80261290
  c->r[0]=0u+0x00000002u; // 80261294
  W32(c->r[13]+0xFFFF98A8u,c->r[3]); // 80261298
  c->r[4]=c->r[31]+0x00000318u; // 8026129C
  W32(c->r[13]+0xFFFF98A4u,c->r[3]); // 802612A0
  c->ctr=c->r[0]; // 802612A4
L_802612A8:;
  W32(c->r[4]+0x00000004u,c->r[3]); // 802612A8
  W32(c->r[4]+0x00000000u,c->r[3]); // 802612AC
  W32(c->r[4]+0x0000000Cu,c->r[3]); // 802612B0
  W32(c->r[4]+0x00000008u,c->r[3]); // 802612B4
  W32(c->r[4]+0x00000014u,c->r[3]); // 802612B8
  W32(c->r[4]+0x00000010u,c->r[3]); // 802612BC
  W32(c->r[4]+0x0000001Cu,c->r[3]); // 802612C0
  W32(c->r[4]+0x00000018u,c->r[3]); // 802612C4
  W32(c->r[4]+0x00000024u,c->r[3]); // 802612C8
  W32(c->r[4]+0x00000020u,c->r[3]); // 802612CC
  W32(c->r[4]+0x0000002Cu,c->r[3]); // 802612D0
  W32(c->r[4]+0x00000028u,c->r[3]); // 802612D4
  W32(c->r[4]+0x00000034u,c->r[3]); // 802612D8
  W32(c->r[4]+0x00000030u,c->r[3]); // 802612DC
  W32(c->r[4]+0x0000003Cu,c->r[3]); // 802612E0
  W32(c->r[4]+0x00000038u,c->r[3]); // 802612E4
  W32(c->r[4]+0x00000044u,c->r[3]); // 802612E8
  W32(c->r[4]+0x00000040u,c->r[3]); // 802612EC
  W32(c->r[4]+0x0000004Cu,c->r[3]); // 802612F0
  W32(c->r[4]+0x00000048u,c->r[3]); // 802612F4
  W32(c->r[4]+0x00000054u,c->r[3]); // 802612F8
  W32(c->r[4]+0x00000050u,c->r[3]); // 802612FC
  W32(c->r[4]+0x0000005Cu,c->r[3]); // 80261300
  W32(c->r[4]+0x00000058u,c->r[3]); // 80261304
  W32(c->r[4]+0x00000064u,c->r[3]); // 80261308
  W32(c->r[4]+0x00000060u,c->r[3]); // 8026130C
  W32(c->r[4]+0x0000006Cu,c->r[3]); // 80261310
  W32(c->r[4]+0x00000068u,c->r[3]); // 80261314
  W32(c->r[4]+0x00000074u,c->r[3]); // 80261318
  W32(c->r[4]+0x00000070u,c->r[3]); // 8026131C
  W32(c->r[4]+0x0000007Cu,c->r[3]); // 80261320
  W32(c->r[4]+0x00000078u,c->r[3]); // 80261324
  c->r[4]=c->r[4]+0x00000080u; // 80261328
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_802612A8; } // 8026132C
  c->r[4]=0u+0x00000000u; // 80261330
  c->r[3]=0u+0x80000000u; // 80261334
  W32(c->r[3]+0x000000E0u,c->r[4]); // 80261338
  W32(c->r[3]+0x000000DCu,c->r[4]); // 8026133C
  W32(c->r[3]+0x000000DCu,c->r[30]); // 80261340
  goto L_8026134C; // 80261344
  W32(c->r[4]+0x000002FCu,c->r[30]); // 80261348
L_8026134C:;
  c->r[29]=0u+0x00000000u; // 8026134C
  W32(c->r[30]+0x00000300u,c->r[4]); // 80261350
  c->r[4]=0u+0x80000000u; // 80261354
  c->r[3]=c->r[31]+0x00000418u; // 80261358
  W32(c->r[30]+0x000002FCu,c->r[29]); // 8026135C
  W32(c->r[4]+0x000000E0u,c->r[30]); // 80261360
  c->lr=0x80261368u; f_8025AE6C(c); // 80261364
  W32(c->r[13]+0xFFFF98A0u,c->r[29]); // 80261368
  c->r[0]=R32(c->r[1]+0x00000024u); // 8026136C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 80261370
  c->r[30]=R32(c->r[1]+0x00000018u); // 80261374
  c->r[29]=R32(c->r[1]+0x00000014u); // 80261378
  c->lr=c->r[0]; // 8026137C
  c->r[1]=c->r[1]+0x00000020u; // 80261380
  return; // 80261384
}

// OSInitThreadQueue
void f_80261388(Ctx* __restrict c) {
  trace_call(0x80261388u);
  c->r[0]=0u+0x00000000u; // 80261388
  W32(c->r[3]+0x00000004u,c->r[0]); // 8026138C
  W32(c->r[3]+0x00000000u,c->r[0]); // 80261390
  return; // 80261394
}

// OSGetCurrentThread
void f_80261398(Ctx* __restrict c) {
  trace_call(0x80261398u);
  c->r[3]=0u+0x80000000u; // 80261398
  c->r[3]=R32(c->r[3]+0x000000E4u); // 8026139C
  return; // 802613A0
}

// OSDisableScheduler
void f_802613A4(Ctx* __restrict c) {
  trace_call(0x802613A4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802613A4
  c->r[0]=c->lr; // 802613A8
  W32(c->r[1]+0x00000014u,c->r[0]); // 802613AC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 802613B0
  c->lr=0x802613B8u; f_8025EA10(c); // 802613B4
  c->r[31]=R32(c->r[13]+0xFFFF98A0u); // 802613B8
  c->r[0]=c->r[31]+0x00000001u; // 802613BC
  W32(c->r[13]+0xFFFF98A0u,c->r[0]); // 802613C0
  c->lr=0x802613C8u; f_8025EA38(c); // 802613C4
  c->r[3]=c->r[31]|c->r[31]; // 802613C8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 802613CC
  c->r[0]=R32(c->r[1]+0x00000014u); // 802613D0
  c->lr=c->r[0]; // 802613D4
  c->r[1]=c->r[1]+0x00000010u; // 802613D8
  return; // 802613DC
}

// OSEnableScheduler
void f_802613E0(Ctx* __restrict c) {
  trace_call(0x802613E0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802613E0
  c->r[0]=c->lr; // 802613E4
  W32(c->r[1]+0x00000014u,c->r[0]); // 802613E8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 802613EC
  c->lr=0x802613F4u; f_8025EA10(c); // 802613F0
  c->r[31]=R32(c->r[13]+0xFFFF98A0u); // 802613F4
  c->r[0]=c->r[31]+0xFFFFFFFFu; // 802613F8
  W32(c->r[13]+0xFFFF98A0u,c->r[0]); // 802613FC
  c->lr=0x80261404u; f_8025EA38(c); // 80261400
  c->r[3]=c->r[31]|c->r[31]; // 80261404
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80261408
  c->r[0]=R32(c->r[1]+0x00000014u); // 8026140C
  c->lr=c->r[0]; // 80261410
  c->r[1]=c->r[1]+0x00000010u; // 80261414
  return; // 80261418
}

// UnsetRun
void f_8026141C(Ctx* __restrict c) {
  trace_call(0x8026141Cu);
  c->r[5]=R32(c->r[3]+0x000002E0u); // 8026141C
  c->r[4]=R32(c->r[3]+0x000002DCu); // 80261420
  cmps(c,0,(int32_t)c->r[5],0); // 80261424
  c->r[6]=R32(c->r[3]+0x000002E4u); // 80261428
  if (!crb(c,2)) { goto L_80261438; } // 8026142C
  W32(c->r[4]+0x00000004u,c->r[6]); // 80261430
  goto L_8026143C; // 80261434
L_80261438:;
  W32(c->r[5]+0x000002E4u,c->r[6]); // 80261438
L_8026143C:;
  cmps(c,0,(int32_t)c->r[6],0); // 8026143C
  if (!crb(c,2)) { goto L_8026144C; } // 80261440
  W32(c->r[4]+0x00000000u,c->r[5]); // 80261444
  goto L_80261450; // 80261448
L_8026144C:;
  W32(c->r[6]+0x000002E0u,c->r[5]); // 8026144C
L_80261450:;
  c->r[0]=R32(c->r[4]+0x00000000u); // 80261450
  cmps(c,0,(int32_t)c->r[0],0); // 80261454
  if (!crb(c,2)) { goto L_80261478; } // 80261458
  c->r[0]=R32(c->r[3]+0x000002D0u); // 8026145C
  c->r[4]=0u+0x00000001u; // 80261460
  c->r[5]=R32(c->r[13]+0xFFFF98A8u); // 80261464
  c->r[0]=addc(c,~c->r[0],0x0000001Fu,1); // 80261468
  c->r[0]=((c->r[0])&0x20)?0u:(c->r[4]<<((c->r[0])&31)); // 8026146C
  c->r[0]=c->r[5]&~c->r[0]; // 80261470
  W32(c->r[13]+0xFFFF98A8u,c->r[0]); // 80261474
L_80261478:;
  c->r[0]=0u+0x00000000u; // 80261478
  W32(c->r[3]+0x000002DCu,c->r[0]); // 8026147C
  return; // 80261480
}

// __OSGetEffectivePriority
void f_80261484(Ctx* __restrict c) {
  trace_call(0x80261484u);
  c->r[4]=R32(c->r[3]+0x000002D4u); // 80261484
  c->r[3]=R32(c->r[3]+0x000002F4u); // 80261488
  goto L_802614B0; // 8026148C
L_80261490:;
  c->r[5]=R32(c->r[3]+0x00000000u); // 80261490
  cmps(c,0,(int32_t)c->r[5],0); // 80261494
  if (crb(c,2)) { goto L_802614AC; } // 80261498
  c->r[0]=R32(c->r[5]+0x000002D0u); // 8026149C
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[4]); // 802614A0
  if (!crb(c,0)) { goto L_802614AC; } // 802614A4
  c->r[4]=c->r[0]|c->r[0]; // 802614A8
L_802614AC:;
  c->r[3]=R32(c->r[3]+0x00000010u); // 802614AC
L_802614B0:;
  cmps(c,0,(int32_t)c->r[3],0); // 802614B0
  if (!crb(c,2)) { IRQCHK(c); goto L_80261490; } // 802614B4
  c->r[3]=c->r[4]|c->r[4]; // 802614B8
  return; // 802614BC
}

// SetEffectivePriority
void f_802614C0(Ctx* __restrict c) {
  trace_call(0x802614C0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802614C0
  c->r[0]=c->lr; // 802614C4
  W32(c->r[1]+0x00000014u,c->r[0]); // 802614C8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 802614CC
  c->r[31]=c->r[4]|c->r[4]; // 802614D0
  W32(c->r[1]+0x00000008u,c->r[30]); // 802614D4
  c->r[30]=c->r[3]|c->r[3]; // 802614D8
  c->r[0]=R16(c->r[3]+0x000002C8u); // 802614DC
  cmps(c,0,(int32_t)c->r[0],3); // 802614E0
  if (crb(c,2)) { goto L_80261658; } // 802614E4
  if (!crb(c,0)) { goto L_802614FC; } // 802614E8
  cmps(c,0,(int32_t)c->r[0],1); // 802614EC
  if (crb(c,2)) { goto L_80261508; } // 802614F0
  if (!crb(c,0)) { goto L_8026164C; } // 802614F4
  goto L_80261658; // 802614F8
L_802614FC:;
  cmps(c,0,(int32_t)c->r[0],5); // 802614FC
  if (!crb(c,0)) { goto L_80261658; } // 80261500
  goto L_80261574; // 80261504
L_80261508:;
  c->lr=0x8026150Cu; f_8026141C(c); // 80261508
  c->r[3]=0u+0x80600000u; // 8026150C
  c->r[0]=rotl(c->r[31],3)&0xFFFFFFF8u; // 80261510
  c->r[3]=c->r[3]+0xFFFF8BF0u; // 80261514
  W32(c->r[30]+0x000002D0u,c->r[31]); // 80261518
  c->r[3]=c->r[3]+c->r[0]; // 8026151C
  W32(c->r[30]+0x000002DCu,c->r[3]); // 80261520
  c->r[4]=R32(c->r[3]+0x00000004u); // 80261524
  cmps(c,0,(int32_t)c->r[4],0); // 80261528
  if (!crb(c,2)) { goto L_80261538; } // 8026152C
  W32(c->r[3]+0x00000000u,c->r[30]); // 80261530
  goto L_8026153C; // 80261534
L_80261538:;
  W32(c->r[4]+0x000002E0u,c->r[30]); // 80261538
L_8026153C:;
  c->r[0]=0u+0x00000000u; // 8026153C
  W32(c->r[30]+0x000002E4u,c->r[4]); // 80261540
  c->r[4]=R32(c->r[30]+0x000002DCu); // 80261544
  c->r[3]=0u+0x00000001u; // 80261548
  W32(c->r[30]+0x000002E0u,c->r[0]); // 8026154C
  W32(c->r[4]+0x00000004u,c->r[30]); // 80261550
  c->r[0]=R32(c->r[30]+0x000002D0u); // 80261554
  c->r[4]=R32(c->r[13]+0xFFFF98A8u); // 80261558
  c->r[0]=addc(c,~c->r[0],0x0000001Fu,1); // 8026155C
  c->r[0]=((c->r[0])&0x20)?0u:(c->r[3]<<((c->r[0])&31)); // 80261560
  c->r[0]=c->r[4]|c->r[0]; // 80261564
  W32(c->r[13]+0xFFFF98A8u,c->r[0]); // 80261568
  W32(c->r[13]+0xFFFF98A4u,c->r[3]); // 8026156C
  goto L_80261658; // 80261570
L_80261574:;
  c->r[6]=R32(c->r[3]+0x000002E0u); // 80261574
  c->r[7]=R32(c->r[3]+0x000002E4u); // 80261578
  cmps(c,0,(int32_t)c->r[6],0); // 8026157C
  if (!crb(c,2)) { goto L_80261590; } // 80261580
  c->r[5]=R32(c->r[3]+0x000002DCu); // 80261584
  W32(c->r[5]+0x00000004u,c->r[7]); // 80261588
  goto L_80261594; // 8026158C
L_80261590:;
  W32(c->r[6]+0x000002E4u,c->r[7]); // 80261590
L_80261594:;
  cmps(c,0,(int32_t)c->r[7],0); // 80261594
  if (!crb(c,2)) { goto L_802615A8; } // 80261598
  c->r[5]=R32(c->r[3]+0x000002DCu); // 8026159C
  W32(c->r[5]+0x00000000u,c->r[6]); // 802615A0
  goto L_802615AC; // 802615A4
L_802615A8:;
  W32(c->r[7]+0x000002E0u,c->r[6]); // 802615A8
L_802615AC:;
  W32(c->r[3]+0x000002D0u,c->r[4]); // 802615AC
  c->r[5]=R32(c->r[3]+0x000002DCu); // 802615B0
  c->r[6]=R32(c->r[5]+0x00000000u); // 802615B4
  goto L_802615C0; // 802615B8
L_802615BC:;
  c->r[6]=R32(c->r[6]+0x000002E0u); // 802615BC
L_802615C0:;
  cmps(c,0,(int32_t)c->r[6],0); // 802615C0
  if (crb(c,2)) { goto L_802615D8; } // 802615C4
  c->r[4]=R32(c->r[6]+0x000002D0u); // 802615C8
  c->r[0]=R32(c->r[3]+0x000002D0u); // 802615CC
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[0]); // 802615D0
  if (!crb(c,1)) { IRQCHK(c); goto L_802615BC; } // 802615D4
L_802615D8:;
  cmps(c,0,(int32_t)c->r[6],0); // 802615D8
  if (!crb(c,2)) { goto L_80261610; } // 802615DC
  c->r[4]=R32(c->r[5]+0x00000004u); // 802615E0
  cmps(c,0,(int32_t)c->r[4],0); // 802615E4
  if (!crb(c,2)) { goto L_802615F4; } // 802615E8
  W32(c->r[5]+0x00000000u,c->r[3]); // 802615EC
  goto L_802615F8; // 802615F0
L_802615F4:;
  W32(c->r[4]+0x000002E0u,c->r[3]); // 802615F4
L_802615F8:;
  c->r[0]=0u+0x00000000u; // 802615F8
  W32(c->r[3]+0x000002E4u,c->r[4]); // 802615FC
  c->r[4]=R32(c->r[3]+0x000002DCu); // 80261600
  W32(c->r[3]+0x000002E0u,c->r[0]); // 80261604
  W32(c->r[4]+0x00000004u,c->r[3]); // 80261608
  goto L_80261638; // 8026160C
L_80261610:;
  W32(c->r[3]+0x000002E0u,c->r[6]); // 80261610
  c->r[4]=R32(c->r[6]+0x000002E4u); // 80261614
  W32(c->r[6]+0x000002E4u,c->r[3]); // 80261618
  cmps(c,0,(int32_t)c->r[4],0); // 8026161C
  W32(c->r[3]+0x000002E4u,c->r[4]); // 80261620
  if (!crb(c,2)) { goto L_80261634; } // 80261624
  c->r[4]=R32(c->r[3]+0x000002DCu); // 80261628
  W32(c->r[4]+0x00000000u,c->r[3]); // 8026162C
  goto L_80261638; // 80261630
L_80261634:;
  W32(c->r[4]+0x000002E0u,c->r[3]); // 80261634
L_80261638:;
  c->r[3]=R32(c->r[3]+0x000002F0u); // 80261638
  cmps(c,0,(int32_t)c->r[3],0); // 8026163C
  if (crb(c,2)) { goto L_80261658; } // 80261640
  c->r[3]=R32(c->r[3]+0x00000008u); // 80261644
  goto L_8026165C; // 80261648
L_8026164C:;
  c->r[0]=0u+0x00000001u; // 8026164C
  W32(c->r[13]+0xFFFF98A4u,c->r[0]); // 80261650
  W32(c->r[3]+0x000002D0u,c->r[4]); // 80261654
L_80261658:;
  c->r[3]=0u+0x00000000u; // 80261658
L_8026165C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8026165C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80261660
  c->r[30]=R32(c->r[1]+0x00000008u); // 80261664
  c->lr=c->r[0]; // 80261668
  c->r[1]=c->r[1]+0x00000010u; // 8026166C
  return; // 80261670
}

// __OSPromoteThread
void f_80261674(Ctx* __restrict c) {
  trace_call(0x80261674u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80261674
  c->r[0]=c->lr; // 80261678
  W32(c->r[1]+0x00000014u,c->r[0]); // 8026167C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80261680
  c->r[31]=c->r[4]|c->r[4]; // 80261684
L_80261688:;
  c->r[0]=R32(c->r[3]+0x000002CCu); // 80261688
  cmps(c,0,(int32_t)c->r[0],0); // 8026168C
  if (crb(c,1)) { goto L_802616B0; } // 80261690
  c->r[0]=R32(c->r[3]+0x000002D0u); // 80261694
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[31]); // 80261698
  if (!crb(c,1)) { goto L_802616B0; } // 8026169C
  c->r[4]=c->r[31]|c->r[31]; // 802616A0
  c->lr=0x802616A8u; f_802614C0(c); // 802616A4
  cmps(c,0,(int32_t)c->r[3],0); // 802616A8
  if (!crb(c,2)) { IRQCHK(c); goto L_80261688; } // 802616AC
L_802616B0:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 802616B0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 802616B4
  c->lr=c->r[0]; // 802616B8
  c->r[1]=c->r[1]+0x00000010u; // 802616BC
  return; // 802616C0
}

// SelectThread
void f_802616C4(Ctx* __restrict c) {
  trace_call(0x802616C4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802616C4
  c->r[0]=c->lr; // 802616C8
  W32(c->r[1]+0x00000014u,c->r[0]); // 802616CC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 802616D0
  W32(c->r[1]+0x00000008u,c->r[30]); // 802616D4
  c->r[30]=c->r[3]|c->r[3]; // 802616D8
  c->r[0]=R32(c->r[13]+0xFFFF98A0u); // 802616DC
  cmps(c,0,(int32_t)c->r[0],0); // 802616E0
  if (!crb(c,1)) { goto L_802616F0; } // 802616E4
  c->r[3]=0u+0x00000000u; // 802616E8
  goto L_802618D4; // 802616EC
L_802616F0:;
  c->lr=0x802616F4u; f_8025ACA0(c); // 802616F0
  c->r[4]=0u+0x80000000u; // 802616F4
  c->r[5]=R32(c->r[4]+0x000000E4u); // 802616F8
  cmpu(c,0,c->r[3],c->r[5]); // 802616FC
  if (crb(c,2)) { goto L_8026170C; } // 80261700
  c->r[3]=0u+0x00000000u; // 80261704
  goto L_802618D4; // 80261708
L_8026170C:;
  cmps(c,0,(int32_t)c->r[5],0); // 8026170C
  if (crb(c,2)) { goto L_802617D4; } // 80261710
  c->r[0]=R16(c->r[5]+0x000002C8u); // 80261714
  cmpu(c,0,c->r[0],0x00000002u); // 80261718
  if (!crb(c,2)) { goto L_802617B0; } // 8026171C
  cmps(c,0,(int32_t)c->r[30],0); // 80261720
  if (!crb(c,2)) { goto L_80261744; } // 80261724
  c->r[3]=R32(c->r[13]+0xFFFF98A8u); // 80261728
  c->r[0]=R32(c->r[5]+0x000002D0u); // 8026172C
  c->r[3]=cntlz(c->r[3]); // 80261730
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[3]); // 80261734
  if (crb(c,1)) { goto L_80261744; } // 80261738
  c->r[3]=0u+0x00000000u; // 8026173C
  goto L_802618D4; // 80261740
L_80261744:;
  c->r[0]=0u+0x00000001u; // 80261744
  c->r[3]=0u+0x80600000u; // 80261748
  W16(c->r[5]+0x000002C8u,c->r[0]); // 8026174C
  c->r[3]=c->r[3]+0xFFFF8BF0u; // 80261750
  c->r[0]=R32(c->r[5]+0x000002D0u); // 80261754
  c->r[0]=rotl(c->r[0],3)&0xFFFFFFF8u; // 80261758
  c->r[3]=c->r[3]+c->r[0]; // 8026175C
  W32(c->r[5]+0x000002DCu,c->r[3]); // 80261760
  c->r[4]=R32(c->r[3]+0x00000004u); // 80261764
  cmps(c,0,(int32_t)c->r[4],0); // 80261768
  if (!crb(c,2)) { goto L_80261778; } // 8026176C
  W32(c->r[3]+0x00000000u,c->r[5]); // 80261770
  goto L_8026177C; // 80261774
L_80261778:;
  W32(c->r[4]+0x000002E0u,c->r[5]); // 80261778
L_8026177C:;
  W32(c->r[5]+0x000002E4u,c->r[4]); // 8026177C
  c->r[0]=0u+0x00000000u; // 80261780
  c->r[3]=0u+0x00000001u; // 80261784
  W32(c->r[5]+0x000002E0u,c->r[0]); // 80261788
  c->r[4]=R32(c->r[5]+0x000002DCu); // 8026178C
  W32(c->r[4]+0x00000004u,c->r[5]); // 80261790
  c->r[0]=R32(c->r[5]+0x000002D0u); // 80261794
  c->r[4]=R32(c->r[13]+0xFFFF98A8u); // 80261798
  c->r[0]=addc(c,~c->r[0],0x0000001Fu,1); // 8026179C
  c->r[0]=((c->r[0])&0x20)?0u:(c->r[3]<<((c->r[0])&31)); // 802617A0
  c->r[0]=c->r[4]|c->r[0]; // 802617A4
  W32(c->r[13]+0xFFFF98A8u,c->r[0]); // 802617A8
  W32(c->r[13]+0xFFFF98A4u,c->r[3]); // 802617AC
L_802617B0:;
  c->r[0]=R16(c->r[5]+0x000001A2u); // 802617B0
  c->r[0]=rotl(c->r[0],0)&0x00000002u; cr0(c,c->r[0]); // 802617B4
  if (!crb(c,2)) { goto L_802617D4; } // 802617B8
  c->r[3]=c->r[5]|c->r[5]; // 802617BC
  c->lr=0x802617C4u; f_8025ACAC(c); // 802617C0
  cmps(c,0,(int32_t)c->r[3],0); // 802617C4
  if (crb(c,2)) { goto L_802617D4; } // 802617C8
  c->r[3]=0u+0x00000000u; // 802617CC
  goto L_802618D4; // 802617D0
L_802617D4:;
  c->r[0]=R32(c->r[13]+0xFFFF98A8u); // 802617D4
  cmps(c,0,(int32_t)c->r[0],0); // 802617D8
  if (!crb(c,2)) { goto L_80261838; } // 802617DC
  c->r[12]=R32(c->r[13]+0xFFFF8DF8u); // 802617E0
  c->r[31]=0u+0x80000000u; // 802617E4
  c->r[3]=R32(c->r[31]+0x000000E4u); // 802617E8
  c->r[4]=0u+0x00000000u; // 802617EC
  c->ctr=c->r[12]; // 802617F0
  if (true) { c->lr=0x802617F8u; dispatch(c,c->ctr); } // 802617F4
  c->r[0]=0u+0x00000000u; // 802617F8
  c->r[3]=0u+0x80600000u; // 802617FC
  W32(c->r[31]+0x000000E4u,c->r[0]); // 80261800
  c->r[3]=c->r[3]+0xFFFF8CF0u; // 80261804
  c->lr=0x8026180Cu; f_8025AC44(c); // 80261808
L_8026180C:;
  c->lr=0x80261810u; f_8025EA24(c); // 8026180C
L_80261810:;
  c->r[0]=R32(c->r[13]+0xFFFF98A8u); // 80261810
  cmps(c,0,(int32_t)c->r[0],0); // 80261814
  if (crb(c,2)) { IDLEWAIT(c); goto L_80261810; } // 80261818
  c->lr=0x80261820u; f_8025EA10(c); // 8026181C
  c->r[0]=R32(c->r[13]+0xFFFF98A8u); // 80261820
  cmps(c,0,(int32_t)c->r[0],0); // 80261824
  if (crb(c,2)) { IRQCHK(c); goto L_8026180C; } // 80261828
  c->r[3]=0u+0x80600000u; // 8026182C
  c->r[3]=c->r[3]+0xFFFF8CF0u; // 80261830
  c->lr=0x80261838u; f_8025AE6C(c); // 80261834
L_80261838:;
  c->r[4]=0u+0x00000000u; // 80261838
  c->r[3]=0u+0x80600000u; // 8026183C
  W32(c->r[13]+0xFFFF98A4u,c->r[4]); // 80261840
  c->r[3]=c->r[3]+0xFFFF8BF0u; // 80261844
  c->r[0]=R32(c->r[13]+0xFFFF98A8u); // 80261848
  c->r[5]=cntlz(c->r[0]); // 8026184C
  c->r[0]=rotl(c->r[5],3)&0xFFFFFFF8u; // 80261850
  {uint32_t ea=c->r[3]+c->r[0]; c->r[30]=R32(ea); c->r[3]=ea;} // 80261854
  c->r[6]=R32(c->r[30]+0x000002E0u); // 80261858
  cmps(c,0,(int32_t)c->r[6],0); // 8026185C
  if (!crb(c,2)) { goto L_8026186C; } // 80261860
  W32(c->r[3]+0x00000004u,c->r[4]); // 80261864
  goto L_80261870; // 80261868
L_8026186C:;
  W32(c->r[6]+0x000002E4u,c->r[4]); // 8026186C
L_80261870:;
  cmps(c,0,(int32_t)c->r[6],0); // 80261870
  W32(c->r[3]+0x00000000u,c->r[6]); // 80261874
  if (!crb(c,2)) { goto L_80261894; } // 80261878
  c->r[0]=addc(c,~c->r[5],0x0000001Fu,1); // 8026187C
  c->r[3]=0u+0x00000001u; // 80261880
  c->r[4]=R32(c->r[13]+0xFFFF98A8u); // 80261884
  c->r[0]=((c->r[0])&0x20)?0u:(c->r[3]<<((c->r[0])&31)); // 80261888
  c->r[0]=c->r[4]&~c->r[0]; // 8026188C
  W32(c->r[13]+0xFFFF98A8u,c->r[0]); // 80261890
L_80261894:;
  c->r[3]=0u+0x00000000u; // 80261894
  c->r[0]=0u+0x00000002u; // 80261898
  W32(c->r[30]+0x000002DCu,c->r[3]); // 8026189C
  c->r[31]=0u+0x80000000u; // 802618A0
  c->r[4]=c->r[30]|c->r[30]; // 802618A4
  W16(c->r[30]+0x000002C8u,c->r[0]); // 802618A8
  c->r[12]=R32(c->r[13]+0xFFFF8DF8u); // 802618AC
  c->r[3]=R32(c->r[31]+0x000000E4u); // 802618B0
  c->ctr=c->r[12]; // 802618B4
  if (true) { c->lr=0x802618BCu; dispatch(c,c->ctr); } // 802618B8
  W32(c->r[31]+0x000000E4u,c->r[30]); // 802618BC
  c->r[3]=c->r[30]|c->r[30]; // 802618C0
  c->lr=0x802618C8u; f_8025AC44(c); // 802618C4
  c->r[3]=c->r[30]|c->r[30]; // 802618C8
  c->lr=0x802618D0u; f_8025AD2C(c); // 802618CC
  c->r[3]=c->r[30]|c->r[30]; // 802618D0
L_802618D4:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 802618D4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 802618D8
  c->r[30]=R32(c->r[1]+0x00000008u); // 802618DC
  c->lr=c->r[0]; // 802618E0
  c->r[1]=c->r[1]+0x00000010u; // 802618E4
  return; // 802618E8
}

// __OSReschedule
void f_802618EC(Ctx* __restrict c) {
  trace_call(0x802618ECu);
  c->r[0]=R32(c->r[13]+0xFFFF98A4u); // 802618EC
  cmps(c,0,(int32_t)c->r[0],0); // 802618F0
  if (crb(c,2)) return; // 802618F4
  c->r[3]=0u+0x00000000u; // 802618F8
  f_802616C4(c); return; // 802618FC
  return; // 80261900
}

// OSYieldThread
void f_80261904(Ctx* __restrict c) {
  trace_call(0x80261904u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80261904
  c->r[0]=c->lr; // 80261908
  W32(c->r[1]+0x00000014u,c->r[0]); // 8026190C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80261910
  c->lr=0x80261918u; f_8025EA10(c); // 80261914
  c->r[31]=c->r[3]|c->r[3]; // 80261918
  c->r[3]=0u+0x00000001u; // 8026191C
  c->lr=0x80261924u; f_802616C4(c); // 80261920
  c->r[3]=c->r[31]|c->r[31]; // 80261924
  c->lr=0x8026192Cu; f_8025EA38(c); // 80261928
  c->r[0]=R32(c->r[1]+0x00000014u); // 8026192C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80261930
  c->lr=c->r[0]; // 80261934
  c->r[1]=c->r[1]+0x00000010u; // 80261938
  return; // 8026193C
}

void f_80261940_orig(Ctx* __restrict c);
// OSCreateThread
void f_80261940_orig(Ctx* __restrict c) {
  trace_call(0x80261940u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80261940
  c->r[0]=c->lr; // 80261944
  W32(c->r[1]+0x00000024u,c->r[0]); // 80261948
  c->r[11]=c->r[1]+0x00000020u; // 8026194C
  c->lr=0x80261954u; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 80261950
  cmps(c,0,(int32_t)c->r[8],0); // 80261954
  c->r[31]=c->r[3]|c->r[3]; // 80261958
  c->r[26]=c->r[5]|c->r[5]; // 8026195C
  c->r[27]=c->r[6]|c->r[6]; // 80261960
  c->r[28]=c->r[7]|c->r[7]; // 80261964
  if (crb(c,0)) { goto L_80261974; } // 80261968
  cmps(c,0,(int32_t)c->r[8],31); // 8026196C
  if (!crb(c,1)) { goto L_8026197C; } // 80261970
L_80261974:;
  c->r[3]=0u+0x00000000u; // 80261974
  goto L_80261B94; // 80261978
L_8026197C:;
  c->r[30]=0u+0x00000000u; // 8026197C
  c->r[7]=0u+0x00000001u; // 80261980
  c->r[0]=rotl(c->r[9],0)&0x00000001u; // 80261984
  c->r[29]=0u+0xFFFFFFFFu; // 80261988
  c->r[6]=rotl(c->r[6],0)&0xFFFFFFF8u; // 8026198C
  W16(c->r[3]+0x000002C8u,c->r[7]); // 80261990
  c->r[5]=c->r[6]+0xFFFFFFF8u; // 80261994
  W16(c->r[3]+0x000002CAu,c->r[0]); // 80261998
  W32(c->r[3]+0x000002D4u,c->r[8]); // 8026199C
  W32(c->r[3]+0x000002D0u,c->r[8]); // 802619A0
  W32(c->r[3]+0x000002CCu,c->r[7]); // 802619A4
  W32(c->r[3]+0x000002D8u,c->r[29]); // 802619A8
  W32(c->r[3]+0x000002F0u,c->r[30]); // 802619AC
  W32(c->r[3]+0x000002ECu,c->r[30]); // 802619B0
  W32(c->r[3]+0x000002E8u,c->r[30]); // 802619B4
  W32(c->r[3]+0x000002F8u,c->r[30]); // 802619B8
  W32(c->r[3]+0x000002F4u,c->r[30]); // 802619BC
  W32(c->r[6]+0xFFFFFFF8u,c->r[30]); // 802619C0
  W32(c->r[6]+0xFFFFFFFCu,c->r[30]); // 802619C4
  c->lr=0x802619CCu; f_8025AE90(c); // 802619C8
  c->r[5]=0u+0x80260000u; // 802619CC
  c->r[4]=c->r[27]-c->r[28]; // 802619D0
  c->r[5]=c->r[5]+0x00001BACu; // 802619D4
  c->r[3]=0u+0xDEAE0000u; // 802619D8
  W32(c->r[31]+0x00000084u,c->r[5]); // 802619DC
  c->r[0]=c->r[3]+0xFFFFBABEu; // 802619E0
  W32(c->r[31]+0x0000000Cu,c->r[26]); // 802619E4
  W32(c->r[31]+0x00000304u,c->r[27]); // 802619E8
  W32(c->r[31]+0x00000308u,c->r[4]); // 802619EC
  W32(c->r[4]+0x00000000u,c->r[0]); // 802619F0
  W32(c->r[31]+0x0000030Cu,c->r[30]); // 802619F4
  W32(c->r[31]+0x00000310u,c->r[30]); // 802619F8
  W32(c->r[31]+0x00000314u,c->r[30]); // 802619FC
  c->lr=0x80261A04u; f_8025EA10(c); // 80261A00
  c->r[4]=0u+0x805E0000u; // 80261A04
  c->r[4]=c->r[4]+0x00007DF0u; // 80261A08
  c->r[0]=R32(c->r[4]+0x00000040u); // 80261A0C
  cmps(c,0,(int32_t)c->r[0],0); // 80261A10
  if (crb(c,2)) { goto L_80261B5C; } // 80261A14
  c->r[5]=R32(c->r[31]+0x0000019Cu); // 80261A18
  c->r[0]=0u+0x00000002u; // 80261A1C
  c->r[4]=R16(c->r[31]+0x000001A2u); // 80261A20
  c->r[6]=c->r[31]+0x00000090u; // 80261A24
  c->r[5]=c->r[5]|0x00000900u; // 80261A28
  c->r[7]=c->r[31]+0x000001C8u; // 80261A2C
  c->r[4]=c->r[4]|0x00000001u; // 80261A30
  W32(c->r[31]+0x0000019Cu,c->r[5]); // 80261A34
  W16(c->r[31]+0x000001A2u,c->r[4]); // 80261A38
  c->r[4]=R32(c->r[13]+0xFFFF8DD0u); // 80261A3C
  c->r[4]=rotl(c->r[4],0)&0x000000F8u; // 80261A40
  c->r[4]=c->r[4]|0x00000004u; // 80261A44
  W32(c->r[31]+0x00000194u,c->r[4]); // 80261A48
  c->ctr=c->r[0]; // 80261A4C
L_80261A50:;
  W32(c->r[6]+0x00000004u,c->r[29]); // 80261A50
  W32(c->r[6]+0x00000000u,c->r[29]); // 80261A54
  W32(c->r[7]+0x00000004u,c->r[29]); // 80261A58
  W32(c->r[7]+0x00000000u,c->r[29]); // 80261A5C
  W32(c->r[6]+0x0000000Cu,c->r[29]); // 80261A60
  W32(c->r[6]+0x00000008u,c->r[29]); // 80261A64
  W32(c->r[7]+0x0000000Cu,c->r[29]); // 80261A68
  W32(c->r[7]+0x00000008u,c->r[29]); // 80261A6C
  W32(c->r[6]+0x00000014u,c->r[29]); // 80261A70
  W32(c->r[6]+0x00000010u,c->r[29]); // 80261A74
  W32(c->r[7]+0x00000014u,c->r[29]); // 80261A78
  W32(c->r[7]+0x00000010u,c->r[29]); // 80261A7C
  W32(c->r[6]+0x0000001Cu,c->r[29]); // 80261A80
  W32(c->r[6]+0x00000018u,c->r[29]); // 80261A84
  W32(c->r[7]+0x0000001Cu,c->r[29]); // 80261A88
  W32(c->r[7]+0x00000018u,c->r[29]); // 80261A8C
  W32(c->r[6]+0x00000024u,c->r[29]); // 80261A90
  W32(c->r[6]+0x00000020u,c->r[29]); // 80261A94
  W32(c->r[7]+0x00000024u,c->r[29]); // 80261A98
  W32(c->r[7]+0x00000020u,c->r[29]); // 80261A9C
  W32(c->r[6]+0x0000002Cu,c->r[29]); // 80261AA0
  W32(c->r[6]+0x00000028u,c->r[29]); // 80261AA4
  W32(c->r[7]+0x0000002Cu,c->r[29]); // 80261AA8
  W32(c->r[7]+0x00000028u,c->r[29]); // 80261AAC
  W32(c->r[6]+0x00000034u,c->r[29]); // 80261AB0
  W32(c->r[6]+0x00000030u,c->r[29]); // 80261AB4
  W32(c->r[7]+0x00000034u,c->r[29]); // 80261AB8
  W32(c->r[7]+0x00000030u,c->r[29]); // 80261ABC
  W32(c->r[6]+0x0000003Cu,c->r[29]); // 80261AC0
  W32(c->r[6]+0x00000038u,c->r[29]); // 80261AC4
  W32(c->r[7]+0x0000003Cu,c->r[29]); // 80261AC8
  W32(c->r[7]+0x00000038u,c->r[29]); // 80261ACC
  W32(c->r[6]+0x00000044u,c->r[29]); // 80261AD0
  W32(c->r[6]+0x00000040u,c->r[29]); // 80261AD4
  W32(c->r[7]+0x00000044u,c->r[29]); // 80261AD8
  W32(c->r[7]+0x00000040u,c->r[29]); // 80261ADC
  W32(c->r[6]+0x0000004Cu,c->r[29]); // 80261AE0
  W32(c->r[6]+0x00000048u,c->r[29]); // 80261AE4
  W32(c->r[7]+0x0000004Cu,c->r[29]); // 80261AE8
  W32(c->r[7]+0x00000048u,c->r[29]); // 80261AEC
  W32(c->r[6]+0x00000054u,c->r[29]); // 80261AF0
  W32(c->r[6]+0x00000050u,c->r[29]); // 80261AF4
  W32(c->r[7]+0x00000054u,c->r[29]); // 80261AF8
  W32(c->r[7]+0x00000050u,c->r[29]); // 80261AFC
  W32(c->r[6]+0x0000005Cu,c->r[29]); // 80261B00
  W32(c->r[6]+0x00000058u,c->r[29]); // 80261B04
  W32(c->r[7]+0x0000005Cu,c->r[29]); // 80261B08
  W32(c->r[7]+0x00000058u,c->r[29]); // 80261B0C
  W32(c->r[6]+0x00000064u,c->r[29]); // 80261B10
  W32(c->r[6]+0x00000060u,c->r[29]); // 80261B14
  W32(c->r[7]+0x00000064u,c->r[29]); // 80261B18
  W32(c->r[7]+0x00000060u,c->r[29]); // 80261B1C
  W32(c->r[6]+0x0000006Cu,c->r[29]); // 80261B20
  W32(c->r[6]+0x00000068u,c->r[29]); // 80261B24
  W32(c->r[7]+0x0000006Cu,c->r[29]); // 80261B28
  W32(c->r[7]+0x00000068u,c->r[29]); // 80261B2C
  W32(c->r[6]+0x00000074u,c->r[29]); // 80261B30
  W32(c->r[6]+0x00000070u,c->r[29]); // 80261B34
  W32(c->r[7]+0x00000074u,c->r[29]); // 80261B38
  W32(c->r[7]+0x00000070u,c->r[29]); // 80261B3C
  W32(c->r[6]+0x0000007Cu,c->r[29]); // 80261B40
  W32(c->r[6]+0x00000078u,c->r[29]); // 80261B44
  c->r[6]=c->r[6]+0x00000080u; // 80261B48
  W32(c->r[7]+0x0000007Cu,c->r[29]); // 80261B4C
  W32(c->r[7]+0x00000078u,c->r[29]); // 80261B50
  c->r[7]=c->r[7]+0x00000080u; // 80261B54
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80261A50; } // 80261B58
L_80261B5C:;
  c->r[4]=0u+0x80000000u; // 80261B5C
  c->r[5]=R32(c->r[4]+0x000000E0u); // 80261B60
  cmps(c,0,(int32_t)c->r[5],0); // 80261B64
  if (!crb(c,2)) { goto L_80261B74; } // 80261B68
  W32(c->r[4]+0x000000DCu,c->r[31]); // 80261B6C
  goto L_80261B78; // 80261B70
L_80261B74:;
  W32(c->r[5]+0x000002FCu,c->r[31]); // 80261B74
L_80261B78:;
  c->r[0]=0u+0x00000000u; // 80261B78
  W32(c->r[31]+0x00000300u,c->r[5]); // 80261B7C
  c->r[4]=0u+0x80000000u; // 80261B80
  W32(c->r[31]+0x000002FCu,c->r[0]); // 80261B84
  W32(c->r[4]+0x000000E0u,c->r[31]); // 80261B88
  c->lr=0x80261B90u; f_8025EA38(c); // 80261B8C
  c->r[3]=0u+0x00000001u; // 80261B90
L_80261B94:;
  c->r[11]=c->r[1]+0x00000020u; // 80261B94
  c->lr=0x80261B9Cu; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 80261B98
  c->r[0]=R32(c->r[1]+0x00000024u); // 80261B9C
  c->lr=c->r[0]; // 80261BA0
  c->r[1]=c->r[1]+0x00000020u; // 80261BA4
  return; // 80261BA8
}
void hle_wrap_OSCreateThread(Ctx*, GuestFn);
void f_80261940(Ctx* __restrict c) { hle_wrap_OSCreateThread(c, f_80261940_orig); }

void f_80261BAC_orig(Ctx* __restrict c);
// OSExitThread
void f_80261BAC_orig(Ctx* __restrict c) {
  trace_call(0x80261BACu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80261BAC
  c->r[0]=c->lr; // 80261BB0
  W32(c->r[1]+0x00000024u,c->r[0]); // 80261BB4
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 80261BB8
  W32(c->r[1]+0x00000018u,c->r[30]); // 80261BBC
  W32(c->r[1]+0x00000014u,c->r[29]); // 80261BC0
  W32(c->r[1]+0x00000010u,c->r[28]); // 80261BC4
  c->r[28]=c->r[3]|c->r[3]; // 80261BC8
  c->lr=0x80261BD0u; f_8025EA10(c); // 80261BCC
  c->r[31]=0u+0x80000000u; // 80261BD0
  c->r[29]=c->r[3]|c->r[3]; // 80261BD4
  c->r[30]=R32(c->r[31]+0x000000E4u); // 80261BD8
  c->r[3]=c->r[30]|c->r[30]; // 80261BDC
  c->lr=0x80261BE4u; f_8025AE6C(c); // 80261BE0
  c->r[0]=R16(c->r[30]+0x000002CAu); // 80261BE4
  c->r[0]=rotl(c->r[0],0)&0x00000001u; cr0(c,c->r[0]); // 80261BE8
  if (crb(c,2)) { goto L_80261C30; } // 80261BEC
  c->r[4]=R32(c->r[30]+0x000002FCu); // 80261BF0
  c->r[3]=R32(c->r[30]+0x00000300u); // 80261BF4
  cmps(c,0,(int32_t)c->r[4],0); // 80261BF8
  if (!crb(c,2)) { goto L_80261C08; } // 80261BFC
  W32(c->r[31]+0x000000E0u,c->r[3]); // 80261C00
  goto L_80261C0C; // 80261C04
L_80261C08:;
  W32(c->r[4]+0x00000300u,c->r[3]); // 80261C08
L_80261C0C:;
  cmps(c,0,(int32_t)c->r[3],0); // 80261C0C
  if (!crb(c,2)) { goto L_80261C20; } // 80261C10
  c->r[3]=0u+0x80000000u; // 80261C14
  W32(c->r[3]+0x000000DCu,c->r[4]); // 80261C18
  goto L_80261C24; // 80261C1C
L_80261C20:;
  W32(c->r[3]+0x000002FCu,c->r[4]); // 80261C20
L_80261C24:;
  c->r[0]=0u+0x00000000u; // 80261C24
  W16(c->r[30]+0x000002C8u,c->r[0]); // 80261C28
  goto L_80261C3C; // 80261C2C
L_80261C30:;
  c->r[0]=0u+0x00000008u; // 80261C30
  W16(c->r[30]+0x000002C8u,c->r[0]); // 80261C34
  W32(c->r[30]+0x000002D8u,c->r[28]); // 80261C38
L_80261C3C:;
  c->r[3]=c->r[30]|c->r[30]; // 80261C3C
  c->lr=0x80261C44u; f_8025FE70(c); // 80261C40
  c->r[3]=c->r[30]+0x000002E8u; // 80261C44
  c->lr=0x80261C4Cu; f_802624C0(c); // 80261C48
  c->r[0]=0u+0x00000001u; // 80261C4C
  W32(c->r[13]+0xFFFF98A4u,c->r[0]); // 80261C50
  c->r[0]=R32(c->r[13]+0xFFFF98A4u); // 80261C54
  cmps(c,0,(int32_t)c->r[0],0); // 80261C58
  if (crb(c,2)) { goto L_80261C68; } // 80261C5C
  c->r[3]=0u+0x00000000u; // 80261C60
  c->lr=0x80261C68u; f_802616C4(c); // 80261C64
L_80261C68:;
  c->r[3]=c->r[29]|c->r[29]; // 80261C68
  c->lr=0x80261C70u; f_8025EA38(c); // 80261C6C
  c->r[0]=R32(c->r[1]+0x00000024u); // 80261C70
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 80261C74
  c->r[30]=R32(c->r[1]+0x00000018u); // 80261C78
  c->r[29]=R32(c->r[1]+0x00000014u); // 80261C7C
  c->r[28]=R32(c->r[1]+0x00000010u); // 80261C80
  c->lr=c->r[0]; // 80261C84
  c->r[1]=c->r[1]+0x00000020u; // 80261C88
  return; // 80261C8C
}
void hle_wrap_OSExitThread(Ctx*, GuestFn);
void f_80261BAC(Ctx* __restrict c) { hle_wrap_OSExitThread(c, f_80261BAC_orig); }

// OSCancelThread
void f_80261C90(Ctx* __restrict c) {
  trace_call(0x80261C90u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80261C90
  c->r[0]=c->lr; // 80261C94
  W32(c->r[1]+0x00000014u,c->r[0]); // 80261C98
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80261C9C
  W32(c->r[1]+0x00000008u,c->r[30]); // 80261CA0
  c->r[30]=c->r[3]|c->r[3]; // 80261CA4
  c->lr=0x80261CACu; f_8025EA10(c); // 80261CA8
  c->r[0]=R16(c->r[30]+0x000002C8u); // 80261CAC
  c->r[31]=c->r[3]|c->r[3]; // 80261CB0
  cmps(c,0,(int32_t)c->r[0],3); // 80261CB4
  if (crb(c,2)) { goto L_80261DB8; } // 80261CB8
  if (!crb(c,0)) { goto L_80261CD0; } // 80261CBC
  cmps(c,0,(int32_t)c->r[0],1); // 80261CC0
  if (crb(c,2)) { goto L_80261CDC; } // 80261CC4
  if (!crb(c,0)) { goto L_80261CF4; } // 80261CC8
  goto L_80261DB8; // 80261CCC
L_80261CD0:;
  cmps(c,0,(int32_t)c->r[0],5); // 80261CD0
  if (!crb(c,0)) { goto L_80261DB8; } // 80261CD4
  goto L_80261D00; // 80261CD8
L_80261CDC:;
  c->r[0]=R32(c->r[30]+0x000002CCu); // 80261CDC
  cmps(c,0,(int32_t)c->r[0],0); // 80261CE0
  if (crb(c,1)) { goto L_80261DC4; } // 80261CE4
  c->r[3]=c->r[30]|c->r[30]; // 80261CE8
  c->lr=0x80261CF0u; f_8026141C(c); // 80261CEC
  goto L_80261DC4; // 80261CF0
L_80261CF4:;
  c->r[0]=0u+0x00000001u; // 80261CF4
  W32(c->r[13]+0xFFFF98A4u,c->r[0]); // 80261CF8
  goto L_80261DC4; // 80261CFC
L_80261D00:;
  c->r[4]=R32(c->r[30]+0x000002E0u); // 80261D00
  c->r[5]=R32(c->r[30]+0x000002E4u); // 80261D04
  cmps(c,0,(int32_t)c->r[4],0); // 80261D08
  if (!crb(c,2)) { goto L_80261D1C; } // 80261D0C
  c->r[3]=R32(c->r[30]+0x000002DCu); // 80261D10
  W32(c->r[3]+0x00000004u,c->r[5]); // 80261D14
  goto L_80261D20; // 80261D18
L_80261D1C:;
  W32(c->r[4]+0x000002E4u,c->r[5]); // 80261D1C
L_80261D20:;
  cmps(c,0,(int32_t)c->r[5],0); // 80261D20
  if (!crb(c,2)) { goto L_80261D34; } // 80261D24
  c->r[3]=R32(c->r[30]+0x000002DCu); // 80261D28
  W32(c->r[3]+0x00000000u,c->r[4]); // 80261D2C
  goto L_80261D38; // 80261D30
L_80261D34:;
  W32(c->r[5]+0x000002E0u,c->r[4]); // 80261D34
L_80261D38:;
  c->r[0]=R32(c->r[30]+0x000002CCu); // 80261D38
  c->r[3]=0u+0x00000000u; // 80261D3C
  W32(c->r[30]+0x000002DCu,c->r[3]); // 80261D40
  cmps(c,0,(int32_t)c->r[0],0); // 80261D44
  if (crb(c,1)) { goto L_80261DC4; } // 80261D48
  c->r[3]=R32(c->r[30]+0x000002F0u); // 80261D4C
  cmps(c,0,(int32_t)c->r[3],0); // 80261D50
  if (crb(c,2)) { goto L_80261DC4; } // 80261D54
  c->r[3]=R32(c->r[3]+0x00000008u); // 80261D58
L_80261D5C:;
  c->r[0]=R32(c->r[3]+0x000002CCu); // 80261D5C
  cmps(c,0,(int32_t)c->r[0],0); // 80261D60
  if (crb(c,1)) { goto L_80261DC4; } // 80261D64
  c->r[4]=R32(c->r[3]+0x000002D4u); // 80261D68
  c->r[5]=R32(c->r[3]+0x000002F4u); // 80261D6C
  goto L_80261D94; // 80261D70
L_80261D74:;
  c->r[6]=R32(c->r[5]+0x00000000u); // 80261D74
  cmps(c,0,(int32_t)c->r[6],0); // 80261D78
  if (crb(c,2)) { goto L_80261D90; } // 80261D7C
  c->r[0]=R32(c->r[6]+0x000002D0u); // 80261D80
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[4]); // 80261D84
  if (!crb(c,0)) { goto L_80261D90; } // 80261D88
  c->r[4]=c->r[0]|c->r[0]; // 80261D8C
L_80261D90:;
  c->r[5]=R32(c->r[5]+0x00000010u); // 80261D90
L_80261D94:;
  cmps(c,0,(int32_t)c->r[5],0); // 80261D94
  if (!crb(c,2)) { IRQCHK(c); goto L_80261D74; } // 80261D98
  c->r[0]=R32(c->r[3]+0x000002D0u); // 80261D9C
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[4]); // 80261DA0
  if (crb(c,2)) { goto L_80261DC4; } // 80261DA4
  c->lr=0x80261DACu; f_802614C0(c); // 80261DA8
  cmps(c,0,(int32_t)c->r[3],0); // 80261DAC
  if (!crb(c,2)) { IRQCHK(c); goto L_80261D5C; } // 80261DB0
  goto L_80261DC4; // 80261DB4
L_80261DB8:;
  c->r[3]=c->r[31]|c->r[31]; // 80261DB8
  c->lr=0x80261DC0u; f_8025EA38(c); // 80261DBC
  goto L_80261E50; // 80261DC0
L_80261DC4:;
  c->r[3]=c->r[30]|c->r[30]; // 80261DC4
  c->lr=0x80261DCCu; f_8025AE6C(c); // 80261DC8
  c->r[0]=R16(c->r[30]+0x000002CAu); // 80261DCC
  c->r[0]=rotl(c->r[0],0)&0x00000001u; cr0(c,c->r[0]); // 80261DD0
  if (crb(c,2)) { goto L_80261E1C; } // 80261DD4
  c->r[4]=R32(c->r[30]+0x000002FCu); // 80261DD8
  c->r[5]=R32(c->r[30]+0x00000300u); // 80261DDC
  cmps(c,0,(int32_t)c->r[4],0); // 80261DE0
  if (!crb(c,2)) { goto L_80261DF4; } // 80261DE4
  c->r[3]=0u+0x80000000u; // 80261DE8
  W32(c->r[3]+0x000000E0u,c->r[5]); // 80261DEC
  goto L_80261DF8; // 80261DF0
L_80261DF4:;
  W32(c->r[4]+0x00000300u,c->r[5]); // 80261DF4
L_80261DF8:;
  cmps(c,0,(int32_t)c->r[5],0); // 80261DF8
  if (!crb(c,2)) { goto L_80261E0C; } // 80261DFC
  c->r[3]=0u+0x80000000u; // 80261E00
  W32(c->r[3]+0x000000DCu,c->r[4]); // 80261E04
  goto L_80261E10; // 80261E08
L_80261E0C:;
  W32(c->r[5]+0x000002FCu,c->r[4]); // 80261E0C
L_80261E10:;
  c->r[0]=0u+0x00000000u; // 80261E10
  W16(c->r[30]+0x000002C8u,c->r[0]); // 80261E14
  goto L_80261E24; // 80261E18
L_80261E1C:;
  c->r[0]=0u+0x00000008u; // 80261E1C
  W16(c->r[30]+0x000002C8u,c->r[0]); // 80261E20
L_80261E24:;
  c->r[3]=c->r[30]|c->r[30]; // 80261E24
  c->lr=0x80261E2Cu; f_8025FE70(c); // 80261E28
  c->r[3]=c->r[30]+0x000002E8u; // 80261E2C
  c->lr=0x80261E34u; f_802624C0(c); // 80261E30
  c->r[0]=R32(c->r[13]+0xFFFF98A4u); // 80261E34
  cmps(c,0,(int32_t)c->r[0],0); // 80261E38
  if (crb(c,2)) { goto L_80261E48; } // 80261E3C
  c->r[3]=0u+0x00000000u; // 80261E40
  c->lr=0x80261E48u; f_802616C4(c); // 80261E44
L_80261E48:;
  c->r[3]=c->r[31]|c->r[31]; // 80261E48
  c->lr=0x80261E50u; f_8025EA38(c); // 80261E4C
L_80261E50:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 80261E50
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80261E54
  c->r[30]=R32(c->r[1]+0x00000008u); // 80261E58
  c->lr=c->r[0]; // 80261E5C
  c->r[1]=c->r[1]+0x00000010u; // 80261E60
  return; // 80261E64
}

// OSJoinThread
void f_80261E68(Ctx* __restrict c) {
  trace_call(0x80261E68u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80261E68
  c->r[0]=c->lr; // 80261E6C
  W32(c->r[1]+0x00000024u,c->r[0]); // 80261E70
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 80261E74
  c->r[31]=c->r[3]|c->r[3]; // 80261E78
  W32(c->r[1]+0x00000018u,c->r[30]); // 80261E7C
  W32(c->r[1]+0x00000014u,c->r[29]); // 80261E80
  c->r[29]=c->r[4]|c->r[4]; // 80261E84
  c->lr=0x80261E8Cu; f_8025EA10(c); // 80261E88
  c->r[0]=R16(c->r[31]+0x000002CAu); // 80261E8C
  c->r[30]=c->r[3]|c->r[3]; // 80261E90
  c->r[0]=rotl(c->r[0],0)&0x00000001u; cr0(c,c->r[0]); // 80261E94
  if (!crb(c,2)) { goto L_80261F14; } // 80261E98
  c->r[0]=R16(c->r[31]+0x000002C8u); // 80261E9C
  cmpu(c,0,c->r[0],0x00000008u); // 80261EA0
  if (crb(c,2)) { goto L_80261F14; } // 80261EA4
  c->r[0]=R32(c->r[31]+0x000002E8u); // 80261EA8
  cmps(c,0,(int32_t)c->r[0],0); // 80261EAC
  if (!crb(c,2)) { goto L_80261F14; } // 80261EB0
  c->r[3]=c->r[31]+0x000002E8u; // 80261EB4
  c->lr=0x80261EBCu; f_802623D4(c); // 80261EB8
  c->r[0]=R16(c->r[31]+0x000002C8u); // 80261EBC
  cmps(c,0,(int32_t)c->r[0],0); // 80261EC0
  if (!crb(c,2)) { goto L_80261ED0; } // 80261EC4
  c->r[0]=0u+0x00000000u; // 80261EC8
  goto L_80261EFC; // 80261ECC
L_80261ED0:;
  c->r[3]=0u+0x80000000u; // 80261ED0
  c->r[3]=R32(c->r[3]+0x000000DCu); // 80261ED4
  goto L_80261EF0; // 80261ED8
L_80261EDC:;
  cmpu(c,0,c->r[31],c->r[3]); // 80261EDC
  if (!crb(c,2)) { goto L_80261EEC; } // 80261EE0
  c->r[0]=0u+0x00000001u; // 80261EE4
  goto L_80261EFC; // 80261EE8
L_80261EEC:;
  c->r[3]=R32(c->r[3]+0x000002FCu); // 80261EEC
L_80261EF0:;
  cmps(c,0,(int32_t)c->r[3],0); // 80261EF0
  if (!crb(c,2)) { IRQCHK(c); goto L_80261EDC; } // 80261EF4
  c->r[0]=0u+0x00000000u; // 80261EF8
L_80261EFC:;
  cmps(c,0,(int32_t)c->r[0],0); // 80261EFC
  if (!crb(c,2)) { goto L_80261F14; } // 80261F00
  c->r[3]=c->r[30]|c->r[30]; // 80261F04
  c->lr=0x80261F0Cu; f_8025EA38(c); // 80261F08
  c->r[3]=0u+0x00000000u; // 80261F0C
  goto L_80261F8C; // 80261F10
L_80261F14:;
  c->r[0]=R16(c->r[31]+0x000002C8u); // 80261F14
  cmpu(c,0,c->r[0],0x00000008u); // 80261F18
  if (!crb(c,2)) { goto L_80261F80; } // 80261F1C
  cmps(c,0,(int32_t)c->r[29],0); // 80261F20
  if (crb(c,2)) { goto L_80261F30; } // 80261F24
  c->r[0]=R32(c->r[31]+0x000002D8u); // 80261F28
  W32(c->r[29]+0x00000000u,c->r[0]); // 80261F2C
L_80261F30:;
  c->r[4]=R32(c->r[31]+0x000002FCu); // 80261F30
  c->r[5]=R32(c->r[31]+0x00000300u); // 80261F34
  cmps(c,0,(int32_t)c->r[4],0); // 80261F38
  if (!crb(c,2)) { goto L_80261F4C; } // 80261F3C
  c->r[3]=0u+0x80000000u; // 80261F40
  W32(c->r[3]+0x000000E0u,c->r[5]); // 80261F44
  goto L_80261F50; // 80261F48
L_80261F4C:;
  W32(c->r[4]+0x00000300u,c->r[5]); // 80261F4C
L_80261F50:;
  cmps(c,0,(int32_t)c->r[5],0); // 80261F50
  if (!crb(c,2)) { goto L_80261F64; } // 80261F54
  c->r[3]=0u+0x80000000u; // 80261F58
  W32(c->r[3]+0x000000DCu,c->r[4]); // 80261F5C
  goto L_80261F68; // 80261F60
L_80261F64:;
  W32(c->r[5]+0x000002FCu,c->r[4]); // 80261F64
L_80261F68:;
  c->r[0]=0u+0x00000000u; // 80261F68
  c->r[3]=c->r[30]|c->r[30]; // 80261F6C
  W16(c->r[31]+0x000002C8u,c->r[0]); // 80261F70
  c->lr=0x80261F78u; f_8025EA38(c); // 80261F74
  c->r[3]=0u+0x00000001u; // 80261F78
  goto L_80261F8C; // 80261F7C
L_80261F80:;
  c->r[3]=c->r[30]|c->r[30]; // 80261F80
  c->lr=0x80261F88u; f_8025EA38(c); // 80261F84
  c->r[3]=0u+0x00000000u; // 80261F88
L_80261F8C:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 80261F8C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 80261F90
  c->r[30]=R32(c->r[1]+0x00000018u); // 80261F94
  c->r[29]=R32(c->r[1]+0x00000014u); // 80261F98
  c->lr=c->r[0]; // 80261F9C
  c->r[1]=c->r[1]+0x00000020u; // 80261FA0
  return; // 80261FA4
}

// OSResumeThread
void f_80261FA8(Ctx* __restrict c) {
  trace_call(0x80261FA8u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80261FA8
  c->r[0]=c->lr; // 80261FAC
  W32(c->r[1]+0x00000024u,c->r[0]); // 80261FB0
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 80261FB4
  W32(c->r[1]+0x00000018u,c->r[30]); // 80261FB8
  W32(c->r[1]+0x00000014u,c->r[29]); // 80261FBC
  c->r[29]=c->r[3]|c->r[3]; // 80261FC0
  c->lr=0x80261FC8u; f_8025EA10(c); // 80261FC4
  c->r[30]=R32(c->r[29]+0x000002CCu); // 80261FC8
  c->r[31]=c->r[3]|c->r[3]; // 80261FCC
  c->r[0]=addc(c,c->r[30],0xFFFFFFFFu,0); cr0(c,c->r[0]); // 80261FD0
  W32(c->r[29]+0x000002CCu,c->r[0]); // 80261FD4
  if (!crb(c,0)) { goto L_80261FE8; } // 80261FD8
  c->r[0]=0u+0x00000000u; // 80261FDC
  W32(c->r[29]+0x000002CCu,c->r[0]); // 80261FE0
  goto L_80262218; // 80261FE4
L_80261FE8:;
  if (!crb(c,2)) { goto L_80262218; } // 80261FE8
  c->r[0]=R16(c->r[29]+0x000002C8u); // 80261FEC
  cmps(c,0,(int32_t)c->r[0],4); // 80261FF0
  if (crb(c,2)) { goto L_802620A4; } // 80261FF4
  if (!crb(c,0)) { goto L_80262204; } // 80261FF8
  cmps(c,0,(int32_t)c->r[0],1); // 80261FFC
  if (crb(c,2)) { goto L_80262008; } // 80262000
  goto L_80262204; // 80262004
L_80262008:;
  c->r[5]=R32(c->r[29]+0x000002D4u); // 80262008
  c->r[4]=R32(c->r[29]+0x000002F4u); // 8026200C
  goto L_80262034; // 80262010
L_80262014:;
  c->r[3]=R32(c->r[4]+0x00000000u); // 80262014
  cmps(c,0,(int32_t)c->r[3],0); // 80262018
  if (crb(c,2)) { goto L_80262030; } // 8026201C
  c->r[0]=R32(c->r[3]+0x000002D0u); // 80262020
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[5]); // 80262024
  if (!crb(c,0)) { goto L_80262030; } // 80262028
  c->r[5]=c->r[0]|c->r[0]; // 8026202C
L_80262030:;
  c->r[4]=R32(c->r[4]+0x00000010u); // 80262030
L_80262034:;
  cmps(c,0,(int32_t)c->r[4],0); // 80262034
  if (!crb(c,2)) { IRQCHK(c); goto L_80262014; } // 80262038
  c->r[3]=0u+0x80600000u; // 8026203C
  c->r[0]=rotl(c->r[5],3)&0xFFFFFFF8u; // 80262040
  c->r[3]=c->r[3]+0xFFFF8BF0u; // 80262044
  W32(c->r[29]+0x000002D0u,c->r[5]); // 80262048
  c->r[3]=c->r[3]+c->r[0]; // 8026204C
  W32(c->r[29]+0x000002DCu,c->r[3]); // 80262050
  c->r[4]=R32(c->r[3]+0x00000004u); // 80262054
  cmps(c,0,(int32_t)c->r[4],0); // 80262058
  if (!crb(c,2)) { goto L_80262068; } // 8026205C
  W32(c->r[3]+0x00000000u,c->r[29]); // 80262060
  goto L_8026206C; // 80262064
L_80262068:;
  W32(c->r[4]+0x000002E0u,c->r[29]); // 80262068
L_8026206C:;
  c->r[0]=0u+0x00000000u; // 8026206C
  W32(c->r[29]+0x000002E4u,c->r[4]); // 80262070
  c->r[4]=R32(c->r[29]+0x000002DCu); // 80262074
  c->r[3]=0u+0x00000001u; // 80262078
  W32(c->r[29]+0x000002E0u,c->r[0]); // 8026207C
  W32(c->r[4]+0x00000004u,c->r[29]); // 80262080
  c->r[0]=R32(c->r[29]+0x000002D0u); // 80262084
  c->r[4]=R32(c->r[13]+0xFFFF98A8u); // 80262088
  c->r[0]=addc(c,~c->r[0],0x0000001Fu,1); // 8026208C
  c->r[0]=((c->r[0])&0x20)?0u:(c->r[3]<<((c->r[0])&31)); // 80262090
  c->r[0]=c->r[4]|c->r[0]; // 80262094
  W32(c->r[13]+0xFFFF98A8u,c->r[0]); // 80262098
  W32(c->r[13]+0xFFFF98A4u,c->r[3]); // 8026209C
  goto L_80262204; // 802620A0
L_802620A4:;
  c->r[4]=R32(c->r[29]+0x000002E0u); // 802620A4
  c->r[5]=R32(c->r[29]+0x000002E4u); // 802620A8
  cmps(c,0,(int32_t)c->r[4],0); // 802620AC
  if (!crb(c,2)) { goto L_802620C0; } // 802620B0
  c->r[3]=R32(c->r[29]+0x000002DCu); // 802620B4
  W32(c->r[3]+0x00000004u,c->r[5]); // 802620B8
  goto L_802620C4; // 802620BC
L_802620C0:;
  W32(c->r[4]+0x000002E4u,c->r[5]); // 802620C0
L_802620C4:;
  cmps(c,0,(int32_t)c->r[5],0); // 802620C4
  if (!crb(c,2)) { goto L_802620D8; } // 802620C8
  c->r[3]=R32(c->r[29]+0x000002DCu); // 802620CC
  W32(c->r[3]+0x00000000u,c->r[4]); // 802620D0
  goto L_802620DC; // 802620D4
L_802620D8:;
  W32(c->r[5]+0x000002E0u,c->r[4]); // 802620D8
L_802620DC:;
  c->r[0]=R32(c->r[29]+0x000002D4u); // 802620DC
  c->r[4]=R32(c->r[29]+0x000002F4u); // 802620E0
  goto L_80262108; // 802620E4
L_802620E8:;
  c->r[3]=R32(c->r[4]+0x00000000u); // 802620E8
  cmps(c,0,(int32_t)c->r[3],0); // 802620EC
  if (crb(c,2)) { goto L_80262104; } // 802620F0
  c->r[3]=R32(c->r[3]+0x000002D0u); // 802620F4
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 802620F8
  if (!crb(c,0)) { goto L_80262104; } // 802620FC
  c->r[0]=c->r[3]|c->r[3]; // 80262100
L_80262104:;
  c->r[4]=R32(c->r[4]+0x00000010u); // 80262104
L_80262108:;
  cmps(c,0,(int32_t)c->r[4],0); // 80262108
  if (!crb(c,2)) { IRQCHK(c); goto L_802620E8; } // 8026210C
  W32(c->r[29]+0x000002D0u,c->r[0]); // 80262110
  c->r[4]=R32(c->r[29]+0x000002DCu); // 80262114
  c->r[5]=R32(c->r[4]+0x00000000u); // 80262118
  goto L_80262124; // 8026211C
L_80262120:;
  c->r[5]=R32(c->r[5]+0x000002E0u); // 80262120
L_80262124:;
  cmps(c,0,(int32_t)c->r[5],0); // 80262124
  if (crb(c,2)) { goto L_8026213C; } // 80262128
  c->r[3]=R32(c->r[5]+0x000002D0u); // 8026212C
  c->r[0]=R32(c->r[29]+0x000002D0u); // 80262130
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 80262134
  if (!crb(c,1)) { IRQCHK(c); goto L_80262120; } // 80262138
L_8026213C:;
  cmps(c,0,(int32_t)c->r[5],0); // 8026213C
  if (!crb(c,2)) { goto L_80262174; } // 80262140
  c->r[3]=R32(c->r[4]+0x00000004u); // 80262144
  cmps(c,0,(int32_t)c->r[3],0); // 80262148
  if (!crb(c,2)) { goto L_80262158; } // 8026214C
  W32(c->r[4]+0x00000000u,c->r[29]); // 80262150
  goto L_8026215C; // 80262154
L_80262158:;
  W32(c->r[3]+0x000002E0u,c->r[29]); // 80262158
L_8026215C:;
  c->r[0]=0u+0x00000000u; // 8026215C
  W32(c->r[29]+0x000002E4u,c->r[3]); // 80262160
  c->r[3]=R32(c->r[29]+0x000002DCu); // 80262164
  W32(c->r[29]+0x000002E0u,c->r[0]); // 80262168
  W32(c->r[3]+0x00000004u,c->r[29]); // 8026216C
  goto L_8026219C; // 80262170
L_80262174:;
  W32(c->r[29]+0x000002E0u,c->r[5]); // 80262174
  c->r[3]=R32(c->r[5]+0x000002E4u); // 80262178
  W32(c->r[5]+0x000002E4u,c->r[29]); // 8026217C
  cmps(c,0,(int32_t)c->r[3],0); // 80262180
  W32(c->r[29]+0x000002E4u,c->r[3]); // 80262184
  if (!crb(c,2)) { goto L_80262198; } // 80262188
  c->r[3]=R32(c->r[29]+0x000002DCu); // 8026218C
  W32(c->r[3]+0x00000000u,c->r[29]); // 80262190
  goto L_8026219C; // 80262194
L_80262198:;
  W32(c->r[3]+0x000002E0u,c->r[29]); // 80262198
L_8026219C:;
  c->r[3]=R32(c->r[29]+0x000002F0u); // 8026219C
  cmps(c,0,(int32_t)c->r[3],0); // 802621A0
  if (crb(c,2)) { goto L_80262204; } // 802621A4
  c->r[3]=R32(c->r[3]+0x00000008u); // 802621A8
L_802621AC:;
  c->r[0]=R32(c->r[3]+0x000002CCu); // 802621AC
  cmps(c,0,(int32_t)c->r[0],0); // 802621B0
  if (crb(c,1)) { goto L_80262204; } // 802621B4
  c->r[4]=R32(c->r[3]+0x000002D4u); // 802621B8
  c->r[5]=R32(c->r[3]+0x000002F4u); // 802621BC
  goto L_802621E4; // 802621C0
L_802621C4:;
  c->r[6]=R32(c->r[5]+0x00000000u); // 802621C4
  cmps(c,0,(int32_t)c->r[6],0); // 802621C8
  if (crb(c,2)) { goto L_802621E0; } // 802621CC
  c->r[0]=R32(c->r[6]+0x000002D0u); // 802621D0
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[4]); // 802621D4
  if (!crb(c,0)) { goto L_802621E0; } // 802621D8
  c->r[4]=c->r[0]|c->r[0]; // 802621DC
L_802621E0:;
  c->r[5]=R32(c->r[5]+0x00000010u); // 802621E0
L_802621E4:;
  cmps(c,0,(int32_t)c->r[5],0); // 802621E4
  if (!crb(c,2)) { IRQCHK(c); goto L_802621C4; } // 802621E8
  c->r[0]=R32(c->r[3]+0x000002D0u); // 802621EC
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[4]); // 802621F0
  if (crb(c,2)) { goto L_80262204; } // 802621F4
  c->lr=0x802621FCu; f_802614C0(c); // 802621F8
  cmps(c,0,(int32_t)c->r[3],0); // 802621FC
  if (!crb(c,2)) { IRQCHK(c); goto L_802621AC; } // 80262200
L_80262204:;
  c->r[0]=R32(c->r[13]+0xFFFF98A4u); // 80262204
  cmps(c,0,(int32_t)c->r[0],0); // 80262208
  if (crb(c,2)) { goto L_80262218; } // 8026220C
  c->r[3]=0u+0x00000000u; // 80262210
  c->lr=0x80262218u; f_802616C4(c); // 80262214
L_80262218:;
  c->r[3]=c->r[31]|c->r[31]; // 80262218
  c->lr=0x80262220u; f_8025EA38(c); // 8026221C
  c->r[3]=c->r[30]|c->r[30]; // 80262220
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 80262224
  c->r[30]=R32(c->r[1]+0x00000018u); // 80262228
  c->r[29]=R32(c->r[1]+0x00000014u); // 8026222C
  c->r[0]=R32(c->r[1]+0x00000024u); // 80262230
  c->lr=c->r[0]; // 80262234
  c->r[1]=c->r[1]+0x00000020u; // 80262238
  return; // 8026223C
}

// OSSuspendThread
void f_80262240(Ctx* __restrict c) {
  trace_call(0x80262240u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80262240
  c->r[0]=c->lr; // 80262244
  W32(c->r[1]+0x00000024u,c->r[0]); // 80262248
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8026224C
  W32(c->r[1]+0x00000018u,c->r[30]); // 80262250
  W32(c->r[1]+0x00000014u,c->r[29]); // 80262254
  c->r[29]=c->r[3]|c->r[3]; // 80262258
  c->lr=0x80262260u; f_8025EA10(c); // 8026225C
  c->r[30]=R32(c->r[29]+0x000002CCu); // 80262260
  c->r[31]=c->r[3]|c->r[3]; // 80262264
  c->r[0]=c->r[30]+0x00000001u; // 80262268
  cmps(c,0,(int32_t)c->r[30],0); // 8026226C
  W32(c->r[29]+0x000002CCu,c->r[0]); // 80262270
  if (!crb(c,2)) { goto L_802623AC; } // 80262274
  c->r[0]=R16(c->r[29]+0x000002C8u); // 80262278
  cmps(c,0,(int32_t)c->r[0],3); // 8026227C
  if (crb(c,2)) { goto L_80262398; } // 80262280
  if (!crb(c,0)) { goto L_80262298; } // 80262284
  cmps(c,0,(int32_t)c->r[0],1); // 80262288
  if (crb(c,2)) { goto L_802622B4; } // 8026228C
  if (!crb(c,0)) { goto L_802622A4; } // 80262290
  goto L_80262398; // 80262294
L_80262298:;
  cmps(c,0,(int32_t)c->r[0],5); // 80262298
  if (!crb(c,0)) { goto L_80262398; } // 8026229C
  goto L_802622C0; // 802622A0
L_802622A4:;
  c->r[0]=0u+0x00000001u; // 802622A4
  W32(c->r[13]+0xFFFF98A4u,c->r[0]); // 802622A8
  W16(c->r[29]+0x000002C8u,c->r[0]); // 802622AC
  goto L_80262398; // 802622B0
L_802622B4:;
  c->r[3]=c->r[29]|c->r[29]; // 802622B4
  c->lr=0x802622BCu; f_8026141C(c); // 802622B8
  goto L_80262398; // 802622BC
L_802622C0:;
  c->r[4]=R32(c->r[29]+0x000002E0u); // 802622C0
  c->r[5]=R32(c->r[29]+0x000002E4u); // 802622C4
  cmps(c,0,(int32_t)c->r[4],0); // 802622C8
  if (!crb(c,2)) { goto L_802622DC; } // 802622CC
  c->r[3]=R32(c->r[29]+0x000002DCu); // 802622D0
  W32(c->r[3]+0x00000004u,c->r[5]); // 802622D4
  goto L_802622E0; // 802622D8
L_802622DC:;
  W32(c->r[4]+0x000002E4u,c->r[5]); // 802622DC
L_802622E0:;
  cmps(c,0,(int32_t)c->r[5],0); // 802622E0
  if (!crb(c,2)) { goto L_802622F4; } // 802622E4
  c->r[3]=R32(c->r[29]+0x000002DCu); // 802622E8
  W32(c->r[3]+0x00000000u,c->r[4]); // 802622EC
  goto L_802622F8; // 802622F0
L_802622F4:;
  W32(c->r[5]+0x000002E0u,c->r[4]); // 802622F4
L_802622F8:;
  c->r[0]=0u+0x00000020u; // 802622F8
  c->r[3]=R32(c->r[29]+0x000002DCu); // 802622FC
  W32(c->r[29]+0x000002D0u,c->r[0]); // 80262300
  c->r[4]=R32(c->r[3]+0x00000004u); // 80262304
  cmps(c,0,(int32_t)c->r[4],0); // 80262308
  if (!crb(c,2)) { goto L_80262318; } // 8026230C
  W32(c->r[3]+0x00000000u,c->r[29]); // 80262310
  goto L_8026231C; // 80262314
L_80262318:;
  W32(c->r[4]+0x000002E0u,c->r[29]); // 80262318
L_8026231C:;
  c->r[0]=0u+0x00000000u; // 8026231C
  W32(c->r[29]+0x000002E4u,c->r[4]); // 80262320
  c->r[3]=R32(c->r[29]+0x000002DCu); // 80262324
  W32(c->r[29]+0x000002E0u,c->r[0]); // 80262328
  W32(c->r[3]+0x00000004u,c->r[29]); // 8026232C
  c->r[3]=R32(c->r[29]+0x000002F0u); // 80262330
  cmps(c,0,(int32_t)c->r[3],0); // 80262334
  if (crb(c,2)) { goto L_80262398; } // 80262338
  c->r[3]=R32(c->r[3]+0x00000008u); // 8026233C
L_80262340:;
  c->r[0]=R32(c->r[3]+0x000002CCu); // 80262340
  cmps(c,0,(int32_t)c->r[0],0); // 80262344
  if (crb(c,1)) { goto L_80262398; } // 80262348
  c->r[4]=R32(c->r[3]+0x000002D4u); // 8026234C
  c->r[5]=R32(c->r[3]+0x000002F4u); // 80262350
  goto L_80262378; // 80262354
L_80262358:;
  c->r[6]=R32(c->r[5]+0x00000000u); // 80262358
  cmps(c,0,(int32_t)c->r[6],0); // 8026235C
  if (crb(c,2)) { goto L_80262374; } // 80262360
  c->r[0]=R32(c->r[6]+0x000002D0u); // 80262364
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[4]); // 80262368
  if (!crb(c,0)) { goto L_80262374; } // 8026236C
  c->r[4]=c->r[0]|c->r[0]; // 80262370
L_80262374:;
  c->r[5]=R32(c->r[5]+0x00000010u); // 80262374
L_80262378:;
  cmps(c,0,(int32_t)c->r[5],0); // 80262378
  if (!crb(c,2)) { IRQCHK(c); goto L_80262358; } // 8026237C
  c->r[0]=R32(c->r[3]+0x000002D0u); // 80262380
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[4]); // 80262384
  if (crb(c,2)) { goto L_80262398; } // 80262388
  c->lr=0x80262390u; f_802614C0(c); // 8026238C
  cmps(c,0,(int32_t)c->r[3],0); // 80262390
  if (!crb(c,2)) { IRQCHK(c); goto L_80262340; } // 80262394
L_80262398:;
  c->r[0]=R32(c->r[13]+0xFFFF98A4u); // 80262398
  cmps(c,0,(int32_t)c->r[0],0); // 8026239C
  if (crb(c,2)) { goto L_802623AC; } // 802623A0
  c->r[3]=0u+0x00000000u; // 802623A4
  c->lr=0x802623ACu; f_802616C4(c); // 802623A8
L_802623AC:;
  c->r[3]=c->r[31]|c->r[31]; // 802623AC
  c->lr=0x802623B4u; f_8025EA38(c); // 802623B0
  c->r[3]=c->r[30]|c->r[30]; // 802623B4
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 802623B8
  c->r[30]=R32(c->r[1]+0x00000018u); // 802623BC
  c->r[29]=R32(c->r[1]+0x00000014u); // 802623C0
  c->r[0]=R32(c->r[1]+0x00000024u); // 802623C4
  c->lr=c->r[0]; // 802623C8
  c->r[1]=c->r[1]+0x00000020u; // 802623CC
  return; // 802623D0
}

// OSSleepThread
void f_802623D4(Ctx* __restrict c) {
  trace_call(0x802623D4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802623D4
  c->r[0]=c->lr; // 802623D8
  W32(c->r[1]+0x00000014u,c->r[0]); // 802623DC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 802623E0
  W32(c->r[1]+0x00000008u,c->r[30]); // 802623E4
  c->r[30]=c->r[3]|c->r[3]; // 802623E8
  c->lr=0x802623F0u; f_8025EA10(c); // 802623EC
  c->r[4]=0u+0x80000000u; // 802623F0
  c->r[0]=0u+0x00000004u; // 802623F4
  c->r[4]=R32(c->r[4]+0x000000E4u); // 802623F8
  c->r[31]=c->r[3]|c->r[3]; // 802623FC
  W16(c->r[4]+0x000002C8u,c->r[0]); // 80262400
  W32(c->r[4]+0x000002DCu,c->r[30]); // 80262404
  c->r[5]=R32(c->r[30]+0x00000000u); // 80262408
  goto L_80262414; // 8026240C
L_80262410:;
  c->r[5]=R32(c->r[5]+0x000002E0u); // 80262410
L_80262414:;
  cmps(c,0,(int32_t)c->r[5],0); // 80262414
  if (crb(c,2)) { goto L_8026242C; } // 80262418
  c->r[3]=R32(c->r[5]+0x000002D0u); // 8026241C
  c->r[0]=R32(c->r[4]+0x000002D0u); // 80262420
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 80262424
  if (!crb(c,1)) { IRQCHK(c); goto L_80262410; } // 80262428
L_8026242C:;
  cmps(c,0,(int32_t)c->r[5],0); // 8026242C
  if (!crb(c,2)) { goto L_80262460; } // 80262430
  c->r[3]=R32(c->r[30]+0x00000004u); // 80262434
  cmps(c,0,(int32_t)c->r[3],0); // 80262438
  if (!crb(c,2)) { goto L_80262448; } // 8026243C
  W32(c->r[30]+0x00000000u,c->r[4]); // 80262440
  goto L_8026244C; // 80262444
L_80262448:;
  W32(c->r[3]+0x000002E0u,c->r[4]); // 80262448
L_8026244C:;
  W32(c->r[4]+0x000002E4u,c->r[3]); // 8026244C
  c->r[0]=0u+0x00000000u; // 80262450
  W32(c->r[4]+0x000002E0u,c->r[0]); // 80262454
  W32(c->r[30]+0x00000004u,c->r[4]); // 80262458
  goto L_80262484; // 8026245C
L_80262460:;
  W32(c->r[4]+0x000002E0u,c->r[5]); // 80262460
  c->r[3]=R32(c->r[5]+0x000002E4u); // 80262464
  W32(c->r[5]+0x000002E4u,c->r[4]); // 80262468
  cmps(c,0,(int32_t)c->r[3],0); // 8026246C
  W32(c->r[4]+0x000002E4u,c->r[3]); // 80262470
  if (!crb(c,2)) { goto L_80262480; } // 80262474
  W32(c->r[30]+0x00000000u,c->r[4]); // 80262478
  goto L_80262484; // 8026247C
L_80262480:;
  W32(c->r[3]+0x000002E0u,c->r[4]); // 80262480
L_80262484:;
  c->r[0]=0u+0x00000001u; // 80262484
  W32(c->r[13]+0xFFFF98A4u,c->r[0]); // 80262488
  c->r[0]=R32(c->r[13]+0xFFFF98A4u); // 8026248C
  cmps(c,0,(int32_t)c->r[0],0); // 80262490
  if (crb(c,2)) { goto L_802624A0; } // 80262494
  c->r[3]=0u+0x00000000u; // 80262498
  c->lr=0x802624A0u; f_802616C4(c); // 8026249C
L_802624A0:;
  c->r[3]=c->r[31]|c->r[31]; // 802624A0
  c->lr=0x802624A8u; f_8025EA38(c); // 802624A4
  c->r[0]=R32(c->r[1]+0x00000014u); // 802624A8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 802624AC
  c->r[30]=R32(c->r[1]+0x00000008u); // 802624B0
  c->lr=c->r[0]; // 802624B4
  c->r[1]=c->r[1]+0x00000010u; // 802624B8
  return; // 802624BC
}

// OSWakeupThread
void f_802624C0(Ctx* __restrict c) {
  trace_call(0x802624C0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802624C0
  c->r[0]=c->lr; // 802624C4
  W32(c->r[1]+0x00000014u,c->r[0]); // 802624C8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 802624CC
  W32(c->r[1]+0x00000008u,c->r[30]); // 802624D0
  c->r[30]=c->r[3]|c->r[3]; // 802624D4
  c->lr=0x802624DCu; f_8025EA10(c); // 802624D8
  c->r[5]=0u+0x80600000u; // 802624DC
  c->r[31]=c->r[3]|c->r[3]; // 802624E0
  c->r[5]=c->r[5]+0xFFFF8BF0u; // 802624E4
  c->r[6]=0u+0x00000000u; // 802624E8
  c->r[3]=0u+0x00000001u; // 802624EC
  goto L_80262574; // 802624F0
L_802624F4:;
  c->r[4]=R32(c->r[8]+0x000002E0u); // 802624F4
  cmps(c,0,(int32_t)c->r[4],0); // 802624F8
  if (!crb(c,2)) { goto L_80262508; } // 802624FC
  W32(c->r[30]+0x00000004u,c->r[6]); // 80262500
  goto L_8026250C; // 80262504
L_80262508:;
  W32(c->r[4]+0x000002E4u,c->r[6]); // 80262508
L_8026250C:;
  W32(c->r[30]+0x00000000u,c->r[4]); // 8026250C
  W16(c->r[8]+0x000002C8u,c->r[3]); // 80262510
  c->r[0]=R32(c->r[8]+0x000002CCu); // 80262514
  cmps(c,0,(int32_t)c->r[0],0); // 80262518
  if (crb(c,1)) { goto L_80262574; } // 8026251C
  c->r[0]=R32(c->r[8]+0x000002D0u); // 80262520
  c->r[0]=rotl(c->r[0],3)&0xFFFFFFF8u; // 80262524
  c->r[4]=c->r[5]+c->r[0]; // 80262528
  W32(c->r[8]+0x000002DCu,c->r[4]); // 8026252C
  c->r[7]=R32(c->r[4]+0x00000004u); // 80262530
  cmps(c,0,(int32_t)c->r[7],0); // 80262534
  if (!crb(c,2)) { goto L_80262544; } // 80262538
  W32(c->r[4]+0x00000000u,c->r[8]); // 8026253C
  goto L_80262548; // 80262540
L_80262544:;
  W32(c->r[7]+0x000002E0u,c->r[8]); // 80262544
L_80262548:;
  W32(c->r[8]+0x000002E4u,c->r[7]); // 80262548
  W32(c->r[8]+0x000002E0u,c->r[6]); // 8026254C
  c->r[4]=R32(c->r[8]+0x000002DCu); // 80262550
  W32(c->r[4]+0x00000004u,c->r[8]); // 80262554
  c->r[0]=R32(c->r[8]+0x000002D0u); // 80262558
  c->r[4]=R32(c->r[13]+0xFFFF98A8u); // 8026255C
  c->r[0]=addc(c,~c->r[0],0x0000001Fu,1); // 80262560
  c->r[0]=((c->r[0])&0x20)?0u:(c->r[3]<<((c->r[0])&31)); // 80262564
  c->r[0]=c->r[4]|c->r[0]; // 80262568
  W32(c->r[13]+0xFFFF98A8u,c->r[0]); // 8026256C
  W32(c->r[13]+0xFFFF98A4u,c->r[3]); // 80262570
L_80262574:;
  c->r[8]=R32(c->r[30]+0x00000000u); // 80262574
  cmps(c,0,(int32_t)c->r[8],0); // 80262578
  if (!crb(c,2)) { IRQCHK(c); goto L_802624F4; } // 8026257C
  c->r[0]=R32(c->r[13]+0xFFFF98A4u); // 80262580
  cmps(c,0,(int32_t)c->r[0],0); // 80262584
  if (crb(c,2)) { goto L_80262594; } // 80262588
  c->r[3]=0u+0x00000000u; // 8026258C
  c->lr=0x80262594u; f_802616C4(c); // 80262590
L_80262594:;
  c->r[3]=c->r[31]|c->r[31]; // 80262594
  c->lr=0x8026259Cu; f_8025EA38(c); // 80262598
  c->r[0]=R32(c->r[1]+0x00000014u); // 8026259C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 802625A0
  c->r[30]=R32(c->r[1]+0x00000008u); // 802625A4
  c->lr=c->r[0]; // 802625A8
  c->r[1]=c->r[1]+0x00000010u; // 802625AC
  return; // 802625B0
}

// fn_802625B4
void f_802625B4(Ctx* __restrict c) {
  trace_call(0x802625B4u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802625B4
  c->r[0]=c->lr; // 802625B8
  cmps(c,0,(int32_t)c->r[4],0); // 802625BC
  W32(c->r[1]+0x00000024u,c->r[0]); // 802625C0
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 802625C4
  W32(c->r[1]+0x00000018u,c->r[30]); // 802625C8
  c->r[30]=c->r[4]|c->r[4]; // 802625CC
  W32(c->r[1]+0x00000014u,c->r[29]); // 802625D0
  c->r[29]=c->r[3]|c->r[3]; // 802625D4
  if (crb(c,0)) { goto L_802625E4; } // 802625D8
  cmps(c,0,(int32_t)c->r[4],31); // 802625DC
  if (!crb(c,1)) { goto L_802625EC; } // 802625E0
L_802625E4:;
  c->r[3]=0u+0x00000000u; // 802625E4
  goto L_80262684; // 802625E8
L_802625EC:;
  c->lr=0x802625F0u; f_8025EA10(c); // 802625EC
  c->r[0]=R32(c->r[29]+0x000002D4u); // 802625F0
  c->r[31]=c->r[3]|c->r[3]; // 802625F4
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[30]); // 802625F8
  if (crb(c,2)) { goto L_80262678; } // 802625FC
  W32(c->r[29]+0x000002D4u,c->r[30]); // 80262600
L_80262604:;
  c->r[0]=R32(c->r[29]+0x000002CCu); // 80262604
  cmps(c,0,(int32_t)c->r[0],0); // 80262608
  if (crb(c,1)) { goto L_80262664; } // 8026260C
  c->r[4]=R32(c->r[29]+0x000002D4u); // 80262610
  c->r[3]=R32(c->r[29]+0x000002F4u); // 80262614
  goto L_8026263C; // 80262618
L_8026261C:;
  c->r[5]=R32(c->r[3]+0x00000000u); // 8026261C
  cmps(c,0,(int32_t)c->r[5],0); // 80262620
  if (crb(c,2)) { goto L_80262638; } // 80262624
  c->r[0]=R32(c->r[5]+0x000002D0u); // 80262628
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[4]); // 8026262C
  if (!crb(c,0)) { goto L_80262638; } // 80262630
  c->r[4]=c->r[0]|c->r[0]; // 80262634
L_80262638:;
  c->r[3]=R32(c->r[3]+0x00000010u); // 80262638
L_8026263C:;
  cmps(c,0,(int32_t)c->r[3],0); // 8026263C
  if (!crb(c,2)) { IRQCHK(c); goto L_8026261C; } // 80262640
  c->r[0]=R32(c->r[29]+0x000002D0u); // 80262644
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[4]); // 80262648
  if (crb(c,2)) { goto L_80262664; } // 8026264C
  c->r[3]=c->r[29]|c->r[29]; // 80262650
  c->lr=0x80262658u; f_802614C0(c); // 80262654
  cmps(c,0,(int32_t)c->r[3],0); // 80262658
  c->r[29]=c->r[3]|c->r[3]; // 8026265C
  if (!crb(c,2)) { IRQCHK(c); goto L_80262604; } // 80262660
L_80262664:;
  c->r[0]=R32(c->r[13]+0xFFFF98A4u); // 80262664
  cmps(c,0,(int32_t)c->r[0],0); // 80262668
  if (crb(c,2)) { goto L_80262678; } // 8026266C
  c->r[3]=0u+0x00000000u; // 80262670
  c->lr=0x80262678u; f_802616C4(c); // 80262674
L_80262678:;
  c->r[3]=c->r[31]|c->r[31]; // 80262678
  c->lr=0x80262680u; f_8025EA38(c); // 8026267C
  c->r[3]=0u+0x00000001u; // 80262680
L_80262684:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 80262684
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 80262688
  c->r[30]=R32(c->r[1]+0x00000018u); // 8026268C
  c->r[29]=R32(c->r[1]+0x00000014u); // 80262690
  c->lr=c->r[0]; // 80262694
  c->r[1]=c->r[1]+0x00000020u; // 80262698
  return; // 8026269C
}

// fn_802626A0
void f_802626A0(Ctx* __restrict c) {
  trace_call(0x802626A0u);
  c->r[3]=R32(c->r[3]+0x000002D4u); // 802626A0
  return; // 802626A4
}

// fn_802626A8
void f_802626A8(Ctx* __restrict c) {
  trace_call(0x802626A8u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802626A8
  c->r[0]=c->lr; // 802626AC
  W32(c->r[1]+0x00000014u,c->r[0]); // 802626B0
  c->lr=0x802626B8u; f_80259B68(c); // 802626B4
  c->lr=0x802626BCu; f_80261FA8(c); // 802626B8
  c->r[0]=R32(c->r[1]+0x00000014u); // 802626BC
  c->lr=c->r[0]; // 802626C0
  c->r[1]=c->r[1]+0x00000010u; // 802626C4
  return; // 802626C8
}

// OSSleepTicks
void f_802626CC(Ctx* __restrict c) {
  trace_call(0x802626CCu);
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802626CC
  c->r[0]=c->lr; // 802626D0
  W32(c->r[1]+0x00000054u,c->r[0]); // 802626D4
  W32(c->r[1]+0x0000004Cu,c->r[31]); // 802626D8
  W32(c->r[1]+0x00000048u,c->r[30]); // 802626DC
  W32(c->r[1]+0x00000044u,c->r[29]); // 802626E0
  c->r[29]=c->r[3]|c->r[3]; // 802626E4
  W32(c->r[1]+0x00000040u,c->r[28]); // 802626E8
  c->r[28]=c->r[4]|c->r[4]; // 802626EC
  c->lr=0x802626F4u; f_8025EA10(c); // 802626F0
  c->r[4]=0u+0x80000000u; // 802626F4
  c->r[30]=c->r[3]|c->r[3]; // 802626F8
  c->r[31]=R32(c->r[4]+0x000000E4u); // 802626FC
  cmps(c,0,(int32_t)c->r[31],0); // 80262700
  if (!crb(c,2)) { goto L_80262710; } // 80262704
  c->lr=0x8026270Cu; f_8025EA38(c); // 80262708
  goto L_80262760; // 8026270C
L_80262710:;
  c->r[3]=c->r[1]+0x00000008u; // 80262710
  c->lr=0x80262718u; f_802593E4(c); // 80262714
  c->r[4]=c->r[31]|c->r[31]; // 80262718
  c->r[3]=c->r[1]+0x00000008u; // 8026271C
  c->lr=0x80262724u; f_80259ACC(c); // 80262720
  c->r[4]=c->r[31]|c->r[31]; // 80262724
  c->r[3]=c->r[1]+0x00000008u; // 80262728
  c->lr=0x80262730u; f_80259B60(c); // 8026272C
  c->r[7]=0u+0x80260000u; // 80262730
  c->r[6]=c->r[28]|c->r[28]; // 80262734
  c->r[5]=c->r[29]|c->r[29]; // 80262738
  c->r[3]=c->r[1]+0x00000008u; // 8026273C
  c->r[7]=c->r[7]+0x000026A8u; // 80262740
  c->lr=0x80262748u; f_80259644(c); // 80262744
  c->r[3]=c->r[31]|c->r[31]; // 80262748
  c->lr=0x80262750u; f_80262240(c); // 8026274C
  c->r[3]=c->r[1]+0x00000008u; // 80262750
  c->lr=0x80262758u; f_80259738(c); // 80262754
  c->r[3]=c->r[30]|c->r[30]; // 80262758
  c->lr=0x80262760u; f_8025EA38(c); // 8026275C
L_80262760:;
  c->r[0]=R32(c->r[1]+0x00000054u); // 80262760
  c->r[31]=R32(c->r[1]+0x0000004Cu); // 80262764
  c->r[30]=R32(c->r[1]+0x00000048u); // 80262768
  c->r[29]=R32(c->r[1]+0x00000044u); // 8026276C
  c->r[28]=R32(c->r[1]+0x00000040u); // 80262770
  c->lr=c->r[0]; // 80262774
  c->r[1]=c->r[1]+0x00000050u; // 80262778
  return; // 8026277C
}

// OSGetTime
void f_80262780(Ctx* __restrict c) {
  trace_call(0x80262780u);
L_80262780:;
  c->r[3]=mftb(c,269); // 80262780
  c->r[4]=mftb(c,268); // 80262784
  c->r[5]=mftb(c,269); // 80262788
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[5]); // 8026278C
  if (!crb(c,2)) { IRQCHK(c); goto L_80262780; } // 80262790
  return; // 80262794
}

// OSGetTick
void f_80262798(Ctx* __restrict c) {
  trace_call(0x80262798u);
  c->r[3]=mftb(c,268); // 80262798
  return; // 8026279C
}

// __OSGetSystemTime
void f_802627A0(Ctx* __restrict c) {
  trace_call(0x802627A0u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802627A0
  c->r[0]=c->lr; // 802627A4
  W32(c->r[1]+0x00000024u,c->r[0]); // 802627A8
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 802627AC
  W32(c->r[1]+0x00000018u,c->r[30]); // 802627B0
  W32(c->r[1]+0x00000014u,c->r[29]); // 802627B4
  c->lr=0x802627BCu; f_8025EA10(c); // 802627B8
  c->r[31]=c->r[3]|c->r[3]; // 802627BC
  c->lr=0x802627C4u; f_80262780(c); // 802627C0
  c->r[6]=0u+0x80000000u; // 802627C4
  c->r[5]=R32(c->r[6]+0x000030DCu); // 802627C8
  c->r[0]=R32(c->r[6]+0x000030D8u); // 802627CC
  c->r[29]=addc(c,c->r[5],c->r[4],0); // 802627D0
  c->r[30]=addc(c,c->r[0],c->r[3],c->xer_ca); // 802627D4
  c->r[3]=c->r[31]|c->r[31]; // 802627D8
  c->lr=0x802627E0u; f_8025EA38(c); // 802627DC
  c->r[4]=c->r[29]|c->r[29]; // 802627E0
  c->r[3]=c->r[30]|c->r[30]; // 802627E4
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 802627E8
  c->r[30]=R32(c->r[1]+0x00000018u); // 802627EC
  c->r[29]=R32(c->r[1]+0x00000014u); // 802627F0
  c->r[0]=R32(c->r[1]+0x00000024u); // 802627F4
  c->lr=c->r[0]; // 802627F8
  c->r[1]=c->r[1]+0x00000020u; // 802627FC
  return; // 80262800
}

// __OSTimeToSystemTime
void f_80262804(Ctx* __restrict c) {
  trace_call(0x80262804u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80262804
  c->r[0]=c->lr; // 80262808
  W32(c->r[1]+0x00000014u,c->r[0]); // 8026280C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80262810
  c->r[31]=c->r[3]|c->r[3]; // 80262814
  W32(c->r[1]+0x00000008u,c->r[30]); // 80262818
  c->r[30]=c->r[4]|c->r[4]; // 8026281C
  c->lr=0x80262824u; f_8025EA10(c); // 80262820
  c->r[5]=0u+0x80000000u; // 80262824
  c->r[4]=R32(c->r[5]+0x000030DCu); // 80262828
  c->r[0]=R32(c->r[5]+0x000030D8u); // 8026282C
  c->r[30]=addc(c,c->r[4],c->r[30],0); // 80262830
  c->r[31]=addc(c,c->r[0],c->r[31],c->xer_ca); // 80262834
  c->lr=0x8026283Cu; f_8025EA38(c); // 80262838
  c->r[3]=c->r[31]|c->r[31]; // 8026283C
  c->r[4]=c->r[30]|c->r[30]; // 80262840
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80262844
  c->r[30]=R32(c->r[1]+0x00000008u); // 80262848
  c->r[0]=R32(c->r[1]+0x00000014u); // 8026284C
  c->lr=c->r[0]; // 80262850
  c->r[1]=c->r[1]+0x00000010u; // 80262854
  return; // 80262858
}

// GetDates
void f_8026285C(Ctx* __restrict c) {
  trace_call(0x8026285Cu);
  c->r[7]=0u+0x92490000u; // 8026285C
  c->r[6]=0u+0xB38D0000u; // 80262860
  c->r[8]=c->r[3]+0x00000006u; // 80262864
  c->r[5]=0u+0x51EC0000u; // 80262868
  c->r[0]=c->r[6]+0xFFFFF9B1u; // 8026286C
  c->r[7]=c->r[7]+0x00002493u; // 80262870
  c->r[6]=(uint32_t)(((int64_t)(int32_t)c->r[7]*(int64_t)(int32_t)c->r[8])>>32); // 80262874
  c->r[10]=c->r[5]+0xFFFF851Fu; // 80262878
  c->r[0]=(uint32_t)(((int64_t)(int32_t)c->r[0]*(int64_t)(int32_t)c->r[3])>>32); // 8026287C
  c->r[5]=c->r[6]+c->r[8]; // 80262880
  c->r[5]=sraw(c,c->r[5],2); // 80262884
  c->r[6]=rotl(c->r[5],1)&0x00000001u; // 80262888
  c->r[5]=c->r[5]+c->r[6]; // 8026288C
  c->r[0]=c->r[0]+c->r[3]; // 80262890
  c->r[6]=(uint32_t)((int32_t)c->r[5]*(int32_t)7); // 80262894
  c->r[0]=sraw(c,c->r[0],8); // 80262898
  c->r[5]=rotl(c->r[0],1)&0x00000001u; // 8026289C
  c->r[5]=c->r[0]+c->r[5]; // 802628A0
  c->r[0]=c->r[8]-c->r[6]; // 802628A4
  c->r[11]=(uint32_t)((int32_t)c->r[5]*(int32_t)365); // 802628A8
  W32(c->r[4]+0x00000018u,c->r[0]); // 802628AC
  goto L_802628BC; // 802628B0
L_802628B4:;
  c->r[11]=c->r[11]+0xFFFFFE93u; // 802628B4
  c->r[5]=c->r[5]+0xFFFFFFFFu; // 802628B8
L_802628BC:;
  cmps(c,0,(int32_t)c->r[5],1); // 802628BC
  if (crb(c,0)) { goto L_802628FC; } // 802628C0
  c->r[6]=c->r[5]+0xFFFFFFFFu; // 802628C4
  c->r[0]=c->r[5]+0x00000003u; // 802628C8
  c->r[6]=(uint32_t)(((int64_t)(int32_t)c->r[10]*(int64_t)(int32_t)c->r[6])>>32); // 802628CC
  c->r[8]=sraw(c,c->r[6],7); // 802628D0
  c->r[6]=sraw(c,c->r[6],5); // 802628D4
  c->r[7]=rotl(c->r[6],1)&0x00000001u; // 802628D8
  c->r[0]=sraw(c,c->r[0],2); // 802628DC
  c->r[9]=rotl(c->r[8],1)&0x00000001u; // 802628E0
  c->r[6]=c->r[6]+c->r[7]; // 802628E4
  c->r[0]=addc(c,c->r[0],0,c->xer_ca); // 802628E8
  c->r[7]=c->r[8]+c->r[9]; // 802628EC
  c->r[0]=c->r[0]-c->r[6]; // 802628F0
  c->r[0]=c->r[7]+c->r[0]; // 802628F4
  goto L_80262900; // 802628F8
L_802628FC:;
  c->r[0]=0u+0x00000000u; // 802628FC
L_80262900:;
  c->r[8]=c->r[11]+c->r[0]; // 80262900
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[8]); // 80262904
  if (crb(c,0)) { IRQCHK(c); goto L_802628B4; } // 80262908
  c->r[0]=rotl(c->r[5],30)&0xC0000000u; // 8026290C
  c->r[7]=rotl(c->r[5],1)&0x00000001u; // 80262910
  c->r[6]=c->r[0]-c->r[7]; // 80262914
  W32(c->r[4]+0x00000014u,c->r[5]); // 80262918
  c->r[0]=c->r[3]-c->r[8]; // 8026291C
  c->r[3]=rotl(c->r[6],2)&0xFFFFFFFFu; // 80262920
  W32(c->r[4]+0x0000001Cu,c->r[0]); // 80262924
  c->r[3]=c->r[3]+c->r[7]; cr0(c,c->r[3]); // 80262928
  c->r[7]=0u+0x00000000u; // 8026292C
  if (!crb(c,2)) { goto L_80262958; } // 80262930
  c->r[3]=0u+0x51EC0000u; // 80262934
  c->r[3]=c->r[3]+0xFFFF851Fu; // 80262938
  c->r[3]=(uint32_t)(((int64_t)(int32_t)c->r[3]*(int64_t)(int32_t)c->r[5])>>32); // 8026293C
  c->r[3]=sraw(c,c->r[3],5); // 80262940
  c->r[6]=rotl(c->r[3],1)&0x00000001u; // 80262944
  c->r[3]=c->r[3]+c->r[6]; // 80262948
  c->r[3]=(uint32_t)((int32_t)c->r[3]*(int32_t)100); // 8026294C
  c->r[3]=c->r[5]-c->r[3]; cr0(c,c->r[3]); // 80262950
  if (!crb(c,2)) { goto L_8026297C; } // 80262954
L_80262958:;
  c->r[3]=0u+0x51EC0000u; // 80262958
  c->r[3]=c->r[3]+0xFFFF851Fu; // 8026295C
  c->r[3]=(uint32_t)(((int64_t)(int32_t)c->r[3]*(int64_t)(int32_t)c->r[5])>>32); // 80262960
  c->r[3]=sraw(c,c->r[3],7); // 80262964
  c->r[6]=rotl(c->r[3],1)&0x00000001u; // 80262968
  c->r[3]=c->r[3]+c->r[6]; // 8026296C
  c->r[3]=(uint32_t)((int32_t)c->r[3]*(int32_t)400); // 80262970
  c->r[3]=c->r[5]-c->r[3]; cr0(c,c->r[3]); // 80262974
  if (!crb(c,2)) { goto L_80262980; } // 80262978
L_8026297C:;
  c->r[7]=0u+0x00000001u; // 8026297C
L_80262980:;
  cmps(c,0,(int32_t)c->r[7],0); // 80262980
  c->r[6]=0u+0x80410000u; // 80262984
  c->r[6]=c->r[6]+0x000039D0u; // 80262988
  if (crb(c,2)) { goto L_80262998; } // 8026298C
  c->r[6]=0u+0x80410000u; // 80262990
  c->r[6]=c->r[6]+0x00003A00u; // 80262994
L_80262998:;
  c->r[7]=0u+0x0000000Cu; // 80262998
  c->r[3]=0u+0x00000030u; // 8026299C
L_802629A0:;
  c->r[3]=c->r[3]+0xFFFFFFFCu; // 802629A0
  c->r[7]=c->r[7]+0xFFFFFFFFu; // 802629A4
  c->r[5]=R32(c->r[6]+c->r[3]); // 802629A8
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[5]); // 802629AC
  if (crb(c,0)) { IRQCHK(c); goto L_802629A0; } // 802629B0
  W32(c->r[4]+0x00000010u,c->r[7]); // 802629B4
  c->r[3]=R32(c->r[6]+c->r[3]); // 802629B8
  c->r[3]=c->r[0]-c->r[3]; // 802629BC
  c->r[0]=c->r[3]+0x00000001u; // 802629C0
  W32(c->r[4]+0x0000000Cu,c->r[0]); // 802629C4
  return; // 802629C8
}

// OSTicksToCalendarTime
void f_802629CC(Ctx* __restrict c) {
  trace_call(0x802629CCu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802629CC
  c->r[0]=c->lr; // 802629D0
  W32(c->r[1]+0x00000024u,c->r[0]); // 802629D4
  c->r[11]=c->r[1]+0x00000020u; // 802629D8
  c->lr=0x802629E0u; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 802629DC
  c->r[6]=0u+0x80000000u; // 802629E0
  c->r[29]=c->r[5]|c->r[5]; // 802629E4
  c->r[0]=R32(c->r[6]+0x000000F8u); // 802629E8
  c->r[28]=c->r[3]|c->r[3]; // 802629EC
  c->r[27]=c->r[4]|c->r[4]; // 802629F0
  c->r[5]=0u+0x00000000u; // 802629F4
  c->r[26]=rotl(c->r[0],30)&0x3FFFFFFFu; // 802629F8
  c->r[6]=c->r[26]|c->r[26]; // 802629FC
  c->lr=0x80262A04u; f_8028A160(c); // 80262A00
  c->r[7]=0u+0x00000000u; // 80262A04
  c->r[0]=c->r[3]^0x80000000u; // 80262A08
  c->r[6]=c->r[7]^0x80000000u; // 80262A0C
  c->r[30]=c->r[4]|c->r[4]; // 80262A10
  c->r[5]=addc(c,~c->r[7],c->r[4],1); // 80262A14
  c->r[31]=c->r[3]|c->r[3]; // 80262A18
  c->r[6]=addc(c,~c->r[6],c->r[0],c->xer_ca); // 80262A1C
  c->r[6]=addc(c,~c->r[0],c->r[0],c->xer_ca); // 80262A20
  c->r[6]=0u-c->r[6]; cr0(c,c->r[6]); // 80262A24
  if (crb(c,2)) { goto L_80262A34; } // 80262A28
  c->r[30]=addc(c,c->r[4],c->r[26],0); // 80262A2C
  c->r[31]=addc(c,c->r[3],c->r[7],c->xer_ca); // 80262A30
L_80262A34:;
  c->r[4]=0u+0x431C0000u; // 80262A34
  c->r[3]=rotl(c->r[31],3)&0xFFFFFFF8u; // 80262A38
  c->r[0]=c->r[4]+0xFFFFDE83u; // 80262A3C
  c->r[5]=0u+0x00000000u; // 80262A40
  c->r[0]=(uint32_t)(((uint64_t)c->r[0]*(uint64_t)c->r[26])>>32); // 80262A44
  c->r[4]=rotl(c->r[30],3)&0xFFFFFFF8u; // 80262A48
  c->r[3]=(rotl(c->r[30],3)&0x00000007u)|(c->r[3]&~0x00000007u); // 80262A4C
  c->r[6]=rotl(c->r[0],17)&0x0001FFFFu; // 80262A50
  c->lr=0x80262A58u; f_80289F44(c); // 80262A54
  c->r[6]=0u+0x000003E8u; // 80262A58
  c->r[5]=0u+0x00000000u; // 80262A5C
  c->lr=0x80262A64u; f_8028A160(c); // 80262A60
  W32(c->r[29]+0x00000024u,c->r[4]); // 80262A64
  c->r[26]=0u+0x80000000u; // 80262A68
  c->r[4]=0u+0x10620000u; // 80262A6C
  c->r[3]=c->r[31]|c->r[31]; // 80262A70
  c->r[0]=R32(c->r[26]+0x000000F8u); // 80262A74
  c->r[6]=c->r[4]+0x00004DD3u; // 80262A78
  c->r[4]=c->r[30]|c->r[30]; // 80262A7C
  c->r[5]=0u+0x00000000u; // 80262A80
  c->r[0]=rotl(c->r[0],30)&0x3FFFFFFFu; // 80262A84
  c->r[0]=(uint32_t)(((uint64_t)c->r[6]*(uint64_t)c->r[0])>>32); // 80262A88
  c->r[6]=rotl(c->r[0],26)&0x03FFFFFFu; // 80262A8C
  c->lr=0x80262A94u; f_80289F44(c); // 80262A90
  c->r[6]=0u+0x000003E8u; // 80262A94
  c->r[5]=0u+0x00000000u; // 80262A98
  c->lr=0x80262AA0u; f_8028A160(c); // 80262A9C
  W32(c->r[29]+0x00000020u,c->r[4]); // 80262AA0
  c->r[4]=addc(c,~c->r[30],c->r[27],1); // 80262AA4
  c->r[3]=addc(c,~c->r[31],c->r[28],c->xer_ca); // 80262AA8
  c->r[5]=0u+0x00000000u; // 80262AAC
  c->r[0]=R32(c->r[26]+0x000000F8u); // 80262AB0
  c->r[6]=rotl(c->r[0],30)&0x3FFFFFFFu; // 80262AB4
  c->lr=0x80262ABCu; f_80289F44(c); // 80262AB8
  c->r[27]=0u+0x00010000u; // 80262ABC
  c->r[28]=c->r[4]|c->r[4]; // 80262AC0
  c->r[26]=c->r[3]|c->r[3]; // 80262AC4
  c->r[5]=0u+0x00000000u; // 80262AC8
  c->r[6]=c->r[27]+0x00005180u; // 80262ACC
  c->lr=0x80262AD4u; f_80289F44(c); // 80262AD0
  c->r[3]=0u+0x000B0000u; // 80262AD4
  c->r[6]=c->r[27]+0x00005180u; // 80262AD8
  c->r[0]=c->r[3]+0x00002575u; // 80262ADC
  c->r[5]=0u+0x00000000u; // 80262AE0
  c->r[3]=c->r[26]|c->r[26]; // 80262AE4
  c->r[26]=addc(c,c->r[4],c->r[0],0); // 80262AE8
  c->r[4]=c->r[28]|c->r[28]; // 80262AEC
  c->lr=0x80262AF4u; f_8028A160(c); // 80262AF0
  cmps(c,0,(int32_t)c->r[4],0); // 80262AF4
  c->r[31]=c->r[4]|c->r[4]; // 80262AF8
  if (!crb(c,0)) { goto L_80262B0C; } // 80262AFC
  c->r[31]=c->r[4]+0x00010000u; // 80262B00
  c->r[26]=c->r[26]+0xFFFFFFFFu; // 80262B04
  c->r[31]=c->r[31]+0x00005180u; // 80262B08
L_80262B0C:;
  c->r[3]=c->r[26]|c->r[26]; // 80262B0C
  c->r[4]=c->r[29]|c->r[29]; // 80262B10
  c->lr=0x80262B18u; f_8026285C(c); // 80262B14
  c->r[3]=0u+0x88890000u; // 80262B18
  c->r[11]=c->r[1]+0x00000020u; // 80262B1C
  c->r[5]=c->r[3]+0xFFFF8889u; // 80262B20
  c->r[0]=(uint32_t)(((int64_t)(int32_t)c->r[5]*(int64_t)(int32_t)c->r[31])>>32); // 80262B24
  c->r[3]=c->r[0]+c->r[31]; // 80262B28
  c->r[0]=sraw(c,c->r[3],5); // 80262B2C
  c->r[4]=rotl(c->r[0],1)&0x00000001u; // 80262B30
  c->r[8]=c->r[0]+c->r[4]; // 80262B34
  c->r[0]=(uint32_t)(((int64_t)(int32_t)c->r[5]*(int64_t)(int32_t)c->r[8])>>32); // 80262B38
  c->r[0]=c->r[0]+c->r[8]; // 80262B3C
  c->r[6]=sraw(c,c->r[0],5); // 80262B40
  c->r[4]=sraw(c,c->r[0],5); // 80262B44
  c->r[0]=sraw(c,c->r[3],5); // 80262B48
  c->r[7]=rotl(c->r[6],1)&0x00000001u; // 80262B4C
  c->r[5]=rotl(c->r[4],1)&0x00000001u; // 80262B50
  c->r[3]=rotl(c->r[0],1)&0x00000001u; // 80262B54
  c->r[6]=c->r[6]+c->r[7]; // 80262B58
  c->r[0]=c->r[0]+c->r[3]; // 80262B5C
  c->r[4]=c->r[4]+c->r[5]; // 80262B60
  c->r[3]=(uint32_t)((int32_t)c->r[4]*(int32_t)60); // 80262B64
  W32(c->r[29]+0x00000008u,c->r[6]); // 80262B68
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)60); // 80262B6C
  c->r[3]=c->r[8]-c->r[3]; // 80262B70
  W32(c->r[29]+0x00000004u,c->r[3]); // 80262B74
  c->r[0]=c->r[31]-c->r[0]; // 80262B78
  W32(c->r[29]+0x00000000u,c->r[0]); // 80262B7C
  c->lr=0x80262B84u; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 80262B80
  c->r[0]=R32(c->r[1]+0x00000024u); // 80262B84
  c->lr=c->r[0]; // 80262B88
  c->r[1]=c->r[1]+0x00000020u; // 80262B8C
  return; // 80262B90
}

// OSUTF8to32
void f_80262B94(Ctx* __restrict c) {
  trace_call(0x80262B94u);
  c->r[6]=R8(c->r[3]+0x00000000u); // 80262B94
  cmps(c,0,(int32_t)c->r[6],0); // 80262B98
  if (crb(c,2)) { goto L_80262BA4; } // 80262B9C
  c->r[3]=c->r[3]+0x00000001u; // 80262BA0
L_80262BA4:;
  c->r[0]=rotl(c->r[6],0)&0x00000080u; cr0(c,c->r[0]); // 80262BA4
  if (!crb(c,2)) { goto L_80262BB4; } // 80262BA8
  c->r[7]=0u+0x00000000u; // 80262BAC
  goto L_80262C04; // 80262BB0
L_80262BB4:;
  c->r[0]=rotl(c->r[6],0)&0x000000E0u; // 80262BB4
  cmpu(c,0,c->r[0],0x000000C0u); // 80262BB8
  if (!crb(c,2)) { goto L_80262BCC; } // 80262BBC
  c->r[6]=rotl(c->r[6],0)&0x0000001Fu; // 80262BC0
  c->r[7]=0u+0x00000001u; // 80262BC4
  goto L_80262C04; // 80262BC8
L_80262BCC:;
  c->r[0]=rotl(c->r[6],0)&0x000000F0u; // 80262BCC
  cmpu(c,0,c->r[0],0x000000E0u); // 80262BD0
  if (!crb(c,2)) { goto L_80262BE4; } // 80262BD4
  c->r[6]=rotl(c->r[6],0)&0x0000000Fu; // 80262BD8
  c->r[7]=0u+0x00000002u; // 80262BDC
  goto L_80262C04; // 80262BE0
L_80262BE4:;
  c->r[0]=rotl(c->r[6],0)&0x000000F8u; // 80262BE4
  cmpu(c,0,c->r[0],0x000000F0u); // 80262BE8
  if (!crb(c,2)) { goto L_80262BFC; } // 80262BEC
  c->r[6]=rotl(c->r[6],0)&0x00000007u; // 80262BF0
  c->r[7]=0u+0x00000003u; // 80262BF4
  goto L_80262C04; // 80262BF8
L_80262BFC:;
  c->r[3]=0u+0x00000000u; // 80262BFC
  return; // 80262C00
L_80262C04:;
  c->ctr=c->r[7]; // 80262C04
  cmpu(c,0,c->r[7],0x00000000u); // 80262C08
  if (!crb(c,1)) { goto L_80262C3C; } // 80262C0C
L_80262C10:;
  c->r[5]=R8(c->r[3]+0x00000000u); // 80262C10
  c->r[6]=rotl(c->r[6],6)&0xFFFFFFC0u; // 80262C14
  c->r[3]=c->r[3]+0x00000001u; // 80262C18
  c->r[0]=rotl(c->r[5],0)&0x000000C0u; // 80262C1C
  cmpu(c,0,c->r[0],0x00000080u); // 80262C20
  if (crb(c,2)) { goto L_80262C30; } // 80262C24
  c->r[3]=0u+0x00000000u; // 80262C28
  return; // 80262C2C
L_80262C30:;
  c->r[0]=rotl(c->r[5],0)&0x0000003Fu; // 80262C30
  c->r[6]=c->r[6]|c->r[0]; // 80262C34
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80262C10; } // 80262C38
L_80262C3C:;
  cmpu(c,0,c->r[6],0x0000007Fu); // 80262C3C
  if (crb(c,1)) { goto L_80262C54; } // 80262C40
  cmps(c,0,(int32_t)c->r[7],0); // 80262C44
  if (crb(c,2)) { goto L_80262C84; } // 80262C48
  c->r[3]=0u+0x00000000u; // 80262C4C
  return; // 80262C50
L_80262C54:;
  cmpu(c,0,c->r[6],0x000007FFu); // 80262C54
  if (crb(c,1)) { goto L_80262C6C; } // 80262C58
  cmpu(c,0,c->r[7],0x00000001u); // 80262C5C
  if (crb(c,2)) { goto L_80262C84; } // 80262C60
  c->r[3]=0u+0x00000000u; // 80262C64
  return; // 80262C68
L_80262C6C:;
  cmpu(c,0,c->r[6],0x0000FFFFu); // 80262C6C
  if (crb(c,1)) { goto L_80262C84; } // 80262C70
  cmpu(c,0,c->r[7],0x00000002u); // 80262C74
  if (crb(c,2)) { goto L_80262C84; } // 80262C78
  c->r[3]=0u+0x00000000u; // 80262C7C
  return; // 80262C80
L_80262C84:;
  cmpu(c,0,c->r[6],0x0000D800u); // 80262C84
  if (crb(c,0)) { goto L_80262C9C; } // 80262C88
  cmpu(c,0,c->r[6],0x0000DFFFu); // 80262C8C
  if (crb(c,1)) { goto L_80262C9C; } // 80262C90
  c->r[3]=0u+0x00000000u; // 80262C94
  return; // 80262C98
L_80262C9C:;
  W32(c->r[4]+0x00000000u,c->r[6]); // 80262C9C
  return; // 80262CA0
}

// OSUTF16to32
void f_80262CA4(Ctx* __restrict c) {
  trace_call(0x80262CA4u);
  c->r[5]=R16(c->r[3]+0x00000000u); // 80262CA4
  cmps(c,0,(int32_t)c->r[5],0); // 80262CA8
  if (crb(c,2)) { goto L_80262CB4; } // 80262CAC
  c->r[3]=c->r[3]+0x00000002u; // 80262CB0
L_80262CB4:;
  cmpu(c,0,c->r[5],0x0000D800u); // 80262CB4
  if (crb(c,0)) { goto L_80262CC4; } // 80262CB8
  cmpu(c,0,c->r[5],0x0000DFFFu); // 80262CBC
  if (!crb(c,1)) { goto L_80262CCC; } // 80262CC0
L_80262CC4:;
  c->r[6]=c->r[5]|c->r[5]; // 80262CC4
  goto L_80262D0C; // 80262CC8
L_80262CCC:;
  cmpu(c,0,c->r[5],0x0000DBFFu); // 80262CCC
  if (crb(c,1)) { goto L_80262D04; } // 80262CD0
  c->r[0]=R16(c->r[3]+0x00000000u); // 80262CD4
  c->r[3]=c->r[3]+0x00000002u; // 80262CD8
  cmpu(c,0,c->r[0],0x0000DC00u); // 80262CDC
  if (crb(c,0)) { goto L_80262CFC; } // 80262CE0
  cmpu(c,0,c->r[0],0x0000DFFFu); // 80262CE4
  if (crb(c,1)) { goto L_80262CFC; } // 80262CE8
  c->r[6]=rotl(c->r[0],0)&0x000003FFu; // 80262CEC
  c->r[6]=(rotl(c->r[5],10)&0x000FFC00u)|(c->r[6]&~0x000FFC00u); // 80262CF0
  c->r[6]=c->r[6]+0x00010000u; // 80262CF4
  goto L_80262D0C; // 80262CF8
L_80262CFC:;
  c->r[3]=0u+0x00000000u; // 80262CFC
  return; // 80262D00
L_80262D04:;
  c->r[3]=0u+0x00000000u; // 80262D04
  return; // 80262D08
L_80262D0C:;
  W32(c->r[4]+0x00000000u,c->r[6]); // 80262D0C
  return; // 80262D10
}

// OSUTF32toANSI
void f_80262D14(Ctx* __restrict c) {
  trace_call(0x80262D14u);
  cmpu(c,0,c->r[3],0x000000FFu); // 80262D14
  if (!crb(c,1)) { goto L_80262D24; } // 80262D18
  c->r[3]=0u+0x00000000u; // 80262D1C
  return; // 80262D20
L_80262D24:;
  cmpu(c,0,c->r[3],0x00000080u); // 80262D24
  if (crb(c,0)) { goto L_80262D34; } // 80262D28
  cmpu(c,0,c->r[3],0x0000009Fu); // 80262D2C
  if (!crb(c,1)) { goto L_80262D3C; } // 80262D30
L_80262D34:;
  c->r[3]=rotl(c->r[3],0)&0x000000FFu; // 80262D34
  return; // 80262D38
L_80262D3C:;
  cmpu(c,0,c->r[3],0x00000152u); // 80262D3C
  if (crb(c,0)) { goto L_80262D84; } // 80262D40
  cmpu(c,0,c->r[3],0x00002122u); // 80262D44
  if (crb(c,1)) { goto L_80262D84; } // 80262D48
  c->r[4]=0u+0x80410000u; // 80262D4C
  c->r[0]=0u+0x00000020u; // 80262D50
  c->r[4]=c->r[4]+0x00003A30u; // 80262D54
  c->r[5]=0u+0x00000000u; // 80262D58
  c->ctr=c->r[0]; // 80262D5C
L_80262D60:;
  c->r[0]=R16(c->r[4]+0x00000000u); // 80262D60
  cmpu(c,0,c->r[3],c->r[0]); // 80262D64
  if (!crb(c,2)) { goto L_80262D78; } // 80262D68
  c->r[0]=c->r[5]+0x00000080u; // 80262D6C
  c->r[3]=rotl(c->r[0],0)&0x000000FFu; // 80262D70
  return; // 80262D74
L_80262D78:;
  c->r[4]=c->r[4]+0x00000002u; // 80262D78
  c->r[5]=c->r[5]+0x00000001u; // 80262D7C
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80262D60; } // 80262D80
L_80262D84:;
  c->r[3]=0u+0x00000000u; // 80262D84
  return; // 80262D88
}

// OSUTF32toSJIS
void f_80262D8C(Ctx* __restrict c) {
  trace_call(0x80262D8Cu);
  c->r[0]=0u+0x00010000u; // 80262D8C
  cmpu(c,0,c->r[3],c->r[0]); // 80262D90
  if (crb(c,0)) { goto L_80262DA0; } // 80262D94
  c->r[3]=0u+0x00000000u; // 80262D98
  return; // 80262D9C
L_80262DA0:;
  c->r[4]=0u+0x80420000u; // 80262DA0
  c->r[0]=rotl(c->r[3],26)&0x000003FCu; // 80262DA4
  c->r[4]=c->r[4]+0xFFFFF470u; // 80262DA8
  c->r[4]=R32(c->r[4]+c->r[0]); // 80262DAC
  cmps(c,0,(int32_t)c->r[4],0); // 80262DB0
  if (crb(c,2)) { goto L_80262DC4; } // 80262DB4
  c->r[0]=rotl(c->r[3],1)&0x000001FEu; // 80262DB8
  c->r[3]=R16(c->r[4]+c->r[0]); // 80262DBC
  return; // 80262DC0
L_80262DC4:;
  c->r[3]=0u+0x00000000u; // 80262DC4
  return; // 80262DC8
}

// __OSGetIPCBufferHi
void f_80262DCC(Ctx* __restrict c) {
  trace_call(0x80262DCCu);
  c->r[3]=R32(c->r[13]+0xFFFF98B0u); // 80262DCC
  return; // 80262DD0
}

// __OSGetIPCBufferLo
void f_80262DD4(Ctx* __restrict c) {
  trace_call(0x80262DD4u);
  c->r[3]=R32(c->r[13]+0xFFFF8E00u); // 80262DD4
  return; // 80262DD8
}

// __OSInitIPCBuffer
void f_80262DDC(Ctx* __restrict c) {
  trace_call(0x80262DDCu);
  c->r[3]=0u+0x80000000u; // 80262DDC
  c->r[0]=R32(c->r[3]+0x00003130u); // 80262DE0
  W32(c->r[13]+0xFFFF8E00u,c->r[0]); // 80262DE4
  c->r[0]=R32(c->r[3]+0x00003134u); // 80262DE8
  W32(c->r[13]+0xFFFF98B0u,c->r[0]); // 80262DEC
  return; // 80262DF0
}

// fn_80262DF4
void f_80262DF4(Ctx* __restrict c) {
  trace_call(0x80262DF4u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80262DF4
  c->r[0]=c->lr; // 80262DF8
  W32(c->r[1]+0x00000024u,c->r[0]); // 80262DFC
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 80262E00
  c->r[31]=c->r[3]|c->r[3]; // 80262E04
  W32(c->r[1]+0x00000018u,c->r[30]); // 80262E08
  W32(c->r[1]+0x00000014u,c->r[29]); // 80262E0C
  c->lr=0x80262E14u; f_8025EA10(c); // 80262E10
  c->r[0]=R32(c->r[13]+0xFFFF98C8u); // 80262E14
  c->r[30]=c->r[3]|c->r[3]; // 80262E18
  c->r[29]=R32(c->r[13]+0xFFFF98D4u); // 80262E1C
  cmps(c,0,(int32_t)c->r[0],0); // 80262E20
  W32(c->r[13]+0xFFFF98D4u,c->r[31]); // 80262E24
  if (!crb(c,2)) { goto L_80262E88; } // 80262E28
  c->lr=0x80262E30u; f_8025EA10(c); // 80262E2C
  c->r[31]=c->r[3]|c->r[3]; // 80262E30
  c->r[5]=0u+0x80600000u; // 80262E34
  c->r[7]=0u+0x80600000u; // 80262E38
  c->r[9]=0u+0x80260000u; // 80262E3C
  c->r[3]=R32(c->r[13]+0xFFFF98C4u); // 80262E40
  c->r[5]=c->r[5]+0xFFFF92E0u; // 80262E44
  c->r[7]=c->r[7]+0xFFFF9300u; // 80262E48
  c->r[9]=c->r[9]+0x000032F4u; // 80262E4C
  c->r[4]=0u+0x00001000u; // 80262E50
  c->r[6]=0u+0x00000020u; // 80262E54
  c->r[8]=0u+0x00000020u; // 80262E58
  c->r[10]=0u+0x00000000u; // 80262E5C
  c->lr=0x80262E64u; f_802A9BC0(c); // 80262E60
  cmps(c,0,(int32_t)c->r[3],0); // 80262E64
  if (!crb(c,2)) { goto L_80262E78; } // 80262E68
  c->r[0]=0u+0x00000001u; // 80262E6C
  W32(c->r[13]+0xFFFF98C8u,c->r[0]); // 80262E70
  goto L_80262E80; // 80262E74
L_80262E78:;
  c->r[0]=0u+0x00000000u; // 80262E78
  W32(c->r[13]+0xFFFF98C8u,c->r[0]); // 80262E7C
L_80262E80:;
  c->r[3]=c->r[31]|c->r[31]; // 80262E80
  c->lr=0x80262E88u; f_8025EA38(c); // 80262E84
L_80262E88:;
  c->r[3]=c->r[30]|c->r[30]; // 80262E88
  c->lr=0x80262E90u; f_8025EA38(c); // 80262E8C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 80262E90
  c->r[3]=c->r[29]|c->r[29]; // 80262E94
  c->r[30]=R32(c->r[1]+0x00000018u); // 80262E98
  c->r[29]=R32(c->r[1]+0x00000014u); // 80262E9C
  c->r[0]=R32(c->r[1]+0x00000024u); // 80262EA0
  c->lr=c->r[0]; // 80262EA4
  c->r[1]=c->r[1]+0x00000020u; // 80262EA8
  return; // 80262EAC
}

// fn_80262EB0
void f_80262EB0(Ctx* __restrict c) {
  trace_call(0x80262EB0u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80262EB0
  c->r[0]=c->lr; // 80262EB4
  W32(c->r[1]+0x00000024u,c->r[0]); // 80262EB8
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 80262EBC
  c->r[31]=c->r[3]|c->r[3]; // 80262EC0
  W32(c->r[1]+0x00000018u,c->r[30]); // 80262EC4
  W32(c->r[1]+0x00000014u,c->r[29]); // 80262EC8
  c->lr=0x80262ED0u; f_8025EA10(c); // 80262ECC
  c->r[0]=R32(c->r[13]+0xFFFF98C8u); // 80262ED0
  c->r[30]=c->r[3]|c->r[3]; // 80262ED4
  c->r[29]=R32(c->r[13]+0xFFFF98D0u); // 80262ED8
  cmps(c,0,(int32_t)c->r[0],0); // 80262EDC
  W32(c->r[13]+0xFFFF98D0u,c->r[31]); // 80262EE0
  if (!crb(c,2)) { goto L_80262F44; } // 80262EE4
  c->lr=0x80262EECu; f_8025EA10(c); // 80262EE8
  c->r[31]=c->r[3]|c->r[3]; // 80262EEC
  c->r[5]=0u+0x80600000u; // 80262EF0
  c->r[7]=0u+0x80600000u; // 80262EF4
  c->r[9]=0u+0x80260000u; // 80262EF8
  c->r[3]=R32(c->r[13]+0xFFFF98C4u); // 80262EFC
  c->r[5]=c->r[5]+0xFFFF92E0u; // 80262F00
  c->r[7]=c->r[7]+0xFFFF9300u; // 80262F04
  c->r[9]=c->r[9]+0x000032F4u; // 80262F08
  c->r[4]=0u+0x00001000u; // 80262F0C
  c->r[6]=0u+0x00000020u; // 80262F10
  c->r[8]=0u+0x00000020u; // 80262F14
  c->r[10]=0u+0x00000000u; // 80262F18
  c->lr=0x80262F20u; f_802A9BC0(c); // 80262F1C
  cmps(c,0,(int32_t)c->r[3],0); // 80262F20
  if (!crb(c,2)) { goto L_80262F34; } // 80262F24
  c->r[0]=0u+0x00000001u; // 80262F28
  W32(c->r[13]+0xFFFF98C8u,c->r[0]); // 80262F2C
  goto L_80262F3C; // 80262F30
L_80262F34:;
  c->r[0]=0u+0x00000000u; // 80262F34
  W32(c->r[13]+0xFFFF98C8u,c->r[0]); // 80262F38
L_80262F3C:;
  c->r[3]=c->r[31]|c->r[31]; // 80262F3C
  c->lr=0x80262F44u; f_8025EA38(c); // 80262F40
L_80262F44:;
  c->r[3]=c->r[30]|c->r[30]; // 80262F44
  c->lr=0x80262F4Cu; f_8025EA38(c); // 80262F48
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 80262F4C
  c->r[3]=c->r[29]|c->r[29]; // 80262F50
  c->r[30]=R32(c->r[1]+0x00000018u); // 80262F54
  c->r[29]=R32(c->r[1]+0x00000014u); // 80262F58
  c->r[0]=R32(c->r[1]+0x00000024u); // 80262F5C
  c->lr=c->r[0]; // 80262F60
  c->r[1]=c->r[1]+0x00000020u; // 80262F64
  return; // 80262F68
}

// __OSInitSTM
void f_80262F6C(Ctx* __restrict c) {
  trace_call(0x80262F6Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80262F6C
  c->r[0]=c->lr; // 80262F70
  c->r[4]=0u+0x80260000u; // 80262F74
  c->r[3]=0u+0x80260000u; // 80262F78
  W32(c->r[1]+0x00000014u,c->r[0]); // 80262F7C
  c->r[4]=c->r[4]+0x000032F0u; // 80262F80
  c->r[3]=c->r[3]+0x000032ECu; // 80262F84
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80262F88
  c->r[31]=0u+0x00000000u; // 80262F8C
  W32(c->r[1]+0x00000008u,c->r[30]); // 80262F90
  c->r[0]=R32(c->r[13]+0xFFFF98BCu); // 80262F94
  W32(c->r[13]+0xFFFF98D0u,c->r[4]); // 80262F98
  cmps(c,0,(int32_t)c->r[0],0); // 80262F9C
  W32(c->r[13]+0xFFFF98D4u,c->r[3]); // 80262FA0
  W32(c->r[13]+0xFFFF98B8u,c->r[31]); // 80262FA4
  if (crb(c,2)) { goto L_80262FB4; } // 80262FA8
  c->r[3]=0u+0x00000001u; // 80262FAC
  goto L_8026306C; // 80262FB0
L_80262FB4:;
  c->r[3]=0u+0x80420000u; // 80262FB4
  W32(c->r[13]+0xFFFF98CCu,c->r[31]); // 80262FB8
  c->r[4]=0u+0x00000000u; // 80262FBC
  c->r[3]=c->r[3]+0xFFFFF870u; // 80262FC0
  c->lr=0x80262FC8u; f_802A9360(c); // 80262FC4
  cmps(c,0,(int32_t)c->r[3],0); // 80262FC8
  W32(c->r[13]+0xFFFF98C0u,c->r[3]); // 80262FCC
  if (!crb(c,0)) { goto L_80262FE0; } // 80262FD0
  W32(c->r[13]+0xFFFF98BCu,c->r[31]); // 80262FD4
  c->r[3]=0u+0x00000000u; // 80262FD8
  goto L_8026306C; // 80262FDC
L_80262FE0:;
  c->r[3]=0u+0x80420000u; // 80262FE0
  c->r[4]=0u+0x00000000u; // 80262FE4
  c->r[3]=c->r[3]+0xFFFFF884u; // 80262FE8
  c->lr=0x80262FF0u; f_802A9360(c); // 80262FEC
  cmps(c,0,(int32_t)c->r[3],0); // 80262FF0
  W32(c->r[13]+0xFFFF98C4u,c->r[3]); // 80262FF4
  if (!crb(c,0)) { goto L_80263008; } // 80262FF8
  W32(c->r[13]+0xFFFF98BCu,c->r[31]); // 80262FFC
  c->r[3]=0u+0x00000000u; // 80263000
  goto L_8026306C; // 80263004
L_80263008:;
  c->lr=0x8026300Cu; f_8025EA10(c); // 80263008
  c->r[30]=c->r[3]|c->r[3]; // 8026300C
  c->r[5]=0u+0x80600000u; // 80263010
  c->r[7]=0u+0x80600000u; // 80263014
  c->r[9]=0u+0x80260000u; // 80263018
  c->r[3]=R32(c->r[13]+0xFFFF98C4u); // 8026301C
  c->r[5]=c->r[5]+0xFFFF92E0u; // 80263020
  c->r[7]=c->r[7]+0xFFFF9300u; // 80263024
  c->r[9]=c->r[9]+0x000032F4u; // 80263028
  c->r[4]=0u+0x00001000u; // 8026302C
  c->r[6]=0u+0x00000020u; // 80263030
  c->r[8]=0u+0x00000020u; // 80263034
  c->r[10]=0u+0x00000000u; // 80263038
  c->lr=0x80263040u; f_802A9BC0(c); // 8026303C
  cmps(c,0,(int32_t)c->r[3],0); // 80263040
  if (!crb(c,2)) { goto L_80263054; } // 80263044
  c->r[0]=0u+0x00000001u; // 80263048
  W32(c->r[13]+0xFFFF98C8u,c->r[0]); // 8026304C
  goto L_80263058; // 80263050
L_80263054:;
  W32(c->r[13]+0xFFFF98C8u,c->r[31]); // 80263054
L_80263058:;
  c->r[3]=c->r[30]|c->r[30]; // 80263058
  c->lr=0x80263060u; f_8025EA38(c); // 8026305C
  c->r[0]=0u+0x00000001u; // 80263060
  c->r[3]=0u+0x00000001u; // 80263064
  W32(c->r[13]+0xFFFF98BCu,c->r[0]); // 80263068
L_8026306C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8026306C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80263070
  c->r[30]=R32(c->r[1]+0x00000008u); // 80263074
  c->lr=c->r[0]; // 80263078
  c->r[1]=c->r[1]+0x00000010u; // 8026307C
  return; // 80263080
}

// __OSShutdownToSBY
void f_80263084(Ctx* __restrict c) {
  trace_call(0x80263084u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80263084
  c->r[0]=c->lr; // 80263088
  c->r[3]=0u+0xCC000000u; // 8026308C
  W32(c->r[1]+0x00000014u,c->r[0]); // 80263090
  c->r[0]=0u+0x00000000u; // 80263094
  W16(c->r[3]+0x00002002u,c->r[0]); // 80263098
  c->r[0]=R32(c->r[13]+0xFFFF98BCu); // 8026309C
  cmps(c,0,(int32_t)c->r[0],0); // 802630A0
  if (!crb(c,2)) { goto L_802630C4; } // 802630A4
  c->r[3]=0u+0x80420000u; // 802630A8
  c->r[5]=0u+0x80420000u; // 802630AC
  c->r[3]=c->r[3]+0xFFFFF898u; // 802630B0
  c->r[4]=0u+0x00000114u; // 802630B4
  c->r[5]=c->r[5]+0xFFFFF8A4u; // 802630B8
  setcrb(c,6,crb(c,6)^crb(c,6)); // 802630BC
  c->lr=0x802630C4u; f_801D479C(c); // 802630C0
L_802630C4:;
  c->r[4]=0u+0x80600000u; // 802630C4
  c->r[0]=0u+0x00000000u; // 802630C8
  c->r[7]=0u+0x80600000u; // 802630CC
  W32(c->r[4]+0xFFFF9320u,c->r[0]); // 802630D0
  c->r[5]=c->r[4]+0xFFFF9320u; // 802630D4
  c->r[3]=R32(c->r[13]+0xFFFF98C0u); // 802630D8
  c->r[7]=c->r[7]+0xFFFF9340u; // 802630DC
  c->r[4]=0u+0x00002003u; // 802630E0
  c->r[6]=0u+0x00000020u; // 802630E4
  c->r[8]=0u+0x00000020u; // 802630E8
  c->lr=0x802630F0u; f_802A9CF8(c); // 802630EC
  c->lr=0x802630F4u; f_8025EA10(c); // 802630F0
  c->lr=0x802630F8u; f_8025A518(c); // 802630F4
L_802630F8:;
  IRQCHK(c); goto L_802630F8; // 802630F8
}

// __OSHotReset
void f_802630FC(Ctx* __restrict c) {
  trace_call(0x802630FCu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802630FC
  c->r[0]=c->lr; // 80263100
  c->r[3]=0u+0xCC000000u; // 80263104
  W32(c->r[1]+0x00000014u,c->r[0]); // 80263108
  c->r[0]=0u+0x00000000u; // 8026310C
  W16(c->r[3]+0x00002002u,c->r[0]); // 80263110
  c->r[0]=R32(c->r[13]+0xFFFF98BCu); // 80263114
  cmps(c,0,(int32_t)c->r[0],0); // 80263118
  if (!crb(c,2)) { goto L_8026313C; } // 8026311C
  c->r[3]=0u+0x80420000u; // 80263120
  c->r[5]=0u+0x80420000u; // 80263124
  c->r[3]=c->r[3]+0xFFFFF898u; // 80263128
  c->r[4]=0u+0x00000154u; // 8026312C
  c->r[5]=c->r[5]+0xFFFFF8DCu; // 80263130
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80263134
  c->lr=0x8026313Cu; f_801D479C(c); // 80263138
L_8026313C:;
  c->r[5]=0u+0x80600000u; // 8026313C
  c->r[7]=0u+0x80600000u; // 80263140
  c->r[3]=R32(c->r[13]+0xFFFF98C0u); // 80263144
  c->r[5]=c->r[5]+0xFFFF9320u; // 80263148
  c->r[7]=c->r[7]+0xFFFF9340u; // 8026314C
  c->r[4]=0u+0x00002001u; // 80263150
  c->r[6]=0u+0x00000020u; // 80263154
  c->r[8]=0u+0x00000020u; // 80263158
  c->lr=0x80263160u; f_802A9CF8(c); // 8026315C
  c->lr=0x80263164u; f_8025EA10(c); // 80263160
  c->lr=0x80263168u; f_8025A518(c); // 80263164
L_80263168:;
  IRQCHK(c); goto L_80263168; // 80263168
}

// __OSSetVIForceDimming
void f_8026316C(Ctx* __restrict c) {
  trace_call(0x8026316Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8026316C
  c->r[0]=c->lr; // 80263170
  W32(c->r[1]+0x00000024u,c->r[0]); // 80263174
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 80263178
  c->r[31]=c->r[5]|c->r[5]; // 8026317C
  W32(c->r[1]+0x00000018u,c->r[30]); // 80263180
  c->r[30]=c->r[4]|c->r[4]; // 80263184
  W32(c->r[1]+0x00000014u,c->r[29]); // 80263188
  c->r[29]=c->r[3]|c->r[3]; // 8026318C
  c->r[0]=R32(c->r[13]+0xFFFF98BCu); // 80263190
  cmps(c,0,(int32_t)c->r[0],0); // 80263194
  if (!crb(c,2)) { goto L_802631A4; } // 80263198
  c->r[3]=0u+0xFFFFFFF6u; // 8026319C
  goto L_80263248; // 802631A0
L_802631A4:;
  c->lr=0x802631A8u; f_8025EA10(c); // 802631A4
  c->r[0]=R32(c->r[13]+0xFFFF98CCu); // 802631A8
  cmps(c,0,(int32_t)c->r[0],0); // 802631AC
  if (crb(c,2)) { goto L_802631C0; } // 802631B0
  c->lr=0x802631B8u; f_8025EA38(c); // 802631B4
  c->r[3]=0u+0x00000000u; // 802631B8
  goto L_80263248; // 802631BC
L_802631C0:;
  c->r[0]=0u+0x00000001u; // 802631C0
  W32(c->r[13]+0xFFFF98CCu,c->r[0]); // 802631C4
  c->lr=0x802631CCu; f_8025EA38(c); // 802631C8
  c->r[0]=rotl(c->r[29],7)&0xFFFFFF80u; // 802631CC
  c->r[3]=0u+0x80600000u; // 802631D0
  c->r[4]=c->r[0]|c->r[31]; // 802631D4
  c->r[7]=0u+0x80600000u; // 802631D8
  c->r[0]=rotl(c->r[30],3)&0xFFFFFFF8u; // 802631DC
  c->r[5]=c->r[3]+0xFFFF9360u; // 802631E0
  c->r[12]=0u+0x00000000u; // 802631E4
  c->r[11]=0u+0xFFFFFFFFu; // 802631E8
  c->r[4]=c->r[4]|c->r[0]; // 802631EC
  c->r[0]=0u+0xFFFF0000u; // 802631F0
  W32(c->r[3]+0xFFFF9360u,c->r[4]); // 802631F4
  c->r[9]=0u+0x80260000u; // 802631F8
  c->r[3]=R32(c->r[13]+0xFFFF98C0u); // 802631FC
  c->r[7]=c->r[7]+0xFFFF9380u; // 80263200
  W32(c->r[5]+0x00000004u,c->r[12]); // 80263204
  c->r[9]=c->r[9]+0x000032DCu; // 80263208
  c->r[4]=0u+0x00005001u; // 8026320C
  c->r[6]=0u+0x00000020u; // 80263210
  W32(c->r[5]+0x00000008u,c->r[12]); // 80263214
  c->r[8]=0u+0x00000020u; // 80263218
  c->r[10]=0u+0x00000000u; // 8026321C
  W32(c->r[5]+0x0000000Cu,c->r[12]); // 80263220
  W32(c->r[5]+0x00000010u,c->r[12]); // 80263224
  W32(c->r[5]+0x00000014u,c->r[11]); // 80263228
  W32(c->r[5]+0x00000018u,c->r[0]); // 8026322C
  W32(c->r[5]+0x0000001Cu,c->r[12]); // 80263230
  c->lr=0x80263238u; f_802A9BC0(c); // 80263234
  cmps(c,0,(int32_t)c->r[3],0); // 80263238
  if (crb(c,2)) { goto L_80263244; } // 8026323C
  goto L_80263248; // 80263240
L_80263244:;
  c->r[3]=0u+0x00000001u; // 80263244
L_80263248:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 80263248
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8026324C
  c->r[30]=R32(c->r[1]+0x00000018u); // 80263250
  c->r[29]=R32(c->r[1]+0x00000014u); // 80263254
  c->lr=c->r[0]; // 80263258
  c->r[1]=c->r[1]+0x00000020u; // 8026325C
  return; // 80263260
}

// __OSUnRegisterStateEvent
void f_80263264(Ctx* __restrict c) {
  trace_call(0x80263264u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80263264
  c->r[0]=c->lr; // 80263268
  W32(c->r[1]+0x00000014u,c->r[0]); // 8026326C
  c->r[0]=R32(c->r[13]+0xFFFF98C8u); // 80263270
  cmps(c,0,(int32_t)c->r[0],0); // 80263274
  if (!crb(c,2)) { goto L_80263284; } // 80263278
  c->r[3]=0u+0x00000000u; // 8026327C
  goto L_802632CC; // 80263280
L_80263284:;
  c->r[0]=R32(c->r[13]+0xFFFF98BCu); // 80263284
  cmps(c,0,(int32_t)c->r[0],0); // 80263288
  if (!crb(c,2)) { goto L_80263298; } // 8026328C
  c->r[3]=0u+0xFFFFFFFAu; // 80263290
  goto L_802632CC; // 80263294
L_80263298:;
  c->r[5]=0u+0x80600000u; // 80263298
  c->r[7]=0u+0x80600000u; // 8026329C
  c->r[3]=R32(c->r[13]+0xFFFF98C0u); // 802632A0
  c->r[5]=c->r[5]+0xFFFF9320u; // 802632A4
  c->r[7]=c->r[7]+0xFFFF9340u; // 802632A8
  c->r[4]=0u+0x00003002u; // 802632AC
  c->r[6]=0u+0x00000020u; // 802632B0
  c->r[8]=0u+0x00000020u; // 802632B4
  c->lr=0x802632BCu; f_802A9CF8(c); // 802632B8
  cmps(c,0,(int32_t)c->r[3],0); // 802632BC
  if (!crb(c,2)) { goto L_802632CC; } // 802632C0
  c->r[0]=0u+0x00000000u; // 802632C4
  W32(c->r[13]+0xFFFF98C8u,c->r[0]); // 802632C8
L_802632CC:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 802632CC
  c->lr=c->r[0]; // 802632D0
  c->r[1]=c->r[1]+0x00000010u; // 802632D4
  return; // 802632D8
}

// fn_802632DC
void f_802632DC(Ctx* __restrict c) {
  trace_call(0x802632DCu);
  c->r[0]=0u+0x00000000u; // 802632DC
  c->r[3]=0u+0x00000000u; // 802632E0
  W32(c->r[13]+0xFFFF98CCu,c->r[0]); // 802632E4
  return; // 802632E8
}

// __OSDefaultResetCallback
void f_802632EC(Ctx* __restrict c) {
  trace_call(0x802632ECu);
  return; // 802632EC
}

// __OSDefaultPowerCallback
void f_802632F0(Ctx* __restrict c) {
  trace_call(0x802632F0u);
  return; // 802632F0
}

// __OSStateEventHandler
void f_802632F4(Ctx* __restrict c) {
  trace_call(0x802632F4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802632F4
  c->r[0]=c->lr; // 802632F8
  cmps(c,0,(int32_t)c->r[3],0); // 802632FC
  W32(c->r[1]+0x00000014u,c->r[0]); // 80263300
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80263304
  if (crb(c,2)) { goto L_80263328; } // 80263308
  c->r[3]=0u+0x80420000u; // 8026330C
  c->r[5]=0u+0x80420000u; // 80263310
  c->r[3]=c->r[3]+0xFFFFF898u; // 80263314
  c->r[4]=0u+0x000002ECu; // 80263318
  c->r[5]=c->r[5]+0xFFFFF914u; // 8026331C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80263320
  c->lr=0x80263328u; f_801D479C(c); // 80263324
L_80263328:;
  c->r[3]=0u+0x80600000u; // 80263328
  c->r[0]=0u+0x00000000u; // 8026332C
  c->r[3]=R32(c->r[3]+0xFFFF9300u); // 80263330
  W32(c->r[13]+0xFFFF98C8u,c->r[0]); // 80263334
  c->r[0]=c->r[3]+0xFFFE0000u; // 80263338
  cmpu(c,0,c->r[0],0x00000000u); // 8026333C
  if (!crb(c,2)) { goto L_802633F4; } // 80263340
  c->r[3]=0u+0xCC000000u; // 80263344
  c->r[0]=R32(c->r[3]+0x00003000u); // 80263348
  c->r[0]=rotl(c->r[0],0)&0x00010000u; cr0(c,c->r[0]); // 8026334C
  if (!crb(c,2)) { goto L_8026335C; } // 80263350
  c->r[0]=0u+0x00000001u; // 80263354
  goto L_80263360; // 80263358
L_8026335C:;
  c->r[0]=0u+0x00000000u; // 8026335C
L_80263360:;
  cmps(c,0,(int32_t)c->r[0],0); // 80263360
  if (crb(c,2)) { goto L_80263398; } // 80263364
  c->lr=0x8026336Cu; f_8025EA10(c); // 80263368
  c->r[4]=0u+0x80260000u; // 8026336C
  c->r[12]=R32(c->r[13]+0xFFFF98D4u); // 80263370
  c->r[4]=c->r[4]+0x000032ECu; // 80263374
  c->r[0]=0u+0x00000001u; // 80263378
  c->r[31]=c->r[3]|c->r[3]; // 8026337C
  W32(c->r[13]+0xFFFF98B8u,c->r[0]); // 80263380
  W32(c->r[13]+0xFFFF98D4u,c->r[4]); // 80263384
  c->ctr=c->r[12]; // 80263388
  if (true) { c->lr=0x80263390u; dispatch(c,c->ctr); } // 8026338C
  c->r[3]=c->r[31]|c->r[31]; // 80263390
  c->lr=0x80263398u; f_8025EA38(c); // 80263394
L_80263398:;
  c->lr=0x8026339Cu; f_8025EA10(c); // 80263398
  c->r[31]=c->r[3]|c->r[3]; // 8026339C
  c->r[5]=0u+0x80600000u; // 802633A0
  c->r[7]=0u+0x80600000u; // 802633A4
  c->r[9]=0u+0x80260000u; // 802633A8
  c->r[3]=R32(c->r[13]+0xFFFF98C4u); // 802633AC
  c->r[5]=c->r[5]+0xFFFF92E0u; // 802633B0
  c->r[7]=c->r[7]+0xFFFF9300u; // 802633B4
  c->r[9]=c->r[9]+0x000032F4u; // 802633B8
  c->r[4]=0u+0x00001000u; // 802633BC
  c->r[6]=0u+0x00000020u; // 802633C0
  c->r[8]=0u+0x00000020u; // 802633C4
  c->r[10]=0u+0x00000000u; // 802633C8
  c->lr=0x802633D0u; f_802A9BC0(c); // 802633CC
  cmps(c,0,(int32_t)c->r[3],0); // 802633D0
  if (!crb(c,2)) { goto L_802633E4; } // 802633D4
  c->r[0]=0u+0x00000001u; // 802633D8
  W32(c->r[13]+0xFFFF98C8u,c->r[0]); // 802633DC
  goto L_802633EC; // 802633E0
L_802633E4:;
  c->r[0]=0u+0x00000000u; // 802633E4
  W32(c->r[13]+0xFFFF98C8u,c->r[0]); // 802633E8
L_802633EC:;
  c->r[3]=c->r[31]|c->r[31]; // 802633EC
  c->lr=0x802633F4u; f_8025EA38(c); // 802633F0
L_802633F4:;
  c->r[3]=0u+0x80600000u; // 802633F4
  c->r[0]=R32(c->r[3]+0xFFFF9300u); // 802633F8
  cmpu(c,0,c->r[0],0x00000800u); // 802633FC
  if (!crb(c,2)) { goto L_8026342C; } // 80263400
  c->lr=0x80263408u; f_8025EA10(c); // 80263404
  c->r[4]=0u+0x80260000u; // 80263408
  c->r[12]=R32(c->r[13]+0xFFFF98D0u); // 8026340C
  c->r[4]=c->r[4]+0x000032F0u; // 80263410
  c->r[31]=c->r[3]|c->r[3]; // 80263414
  W32(c->r[13]+0xFFFF98D0u,c->r[4]); // 80263418
  c->ctr=c->r[12]; // 8026341C
  if (true) { c->lr=0x80263424u; dispatch(c,c->ctr); } // 80263420
  c->r[3]=c->r[31]|c->r[31]; // 80263424
  c->lr=0x8026342Cu; f_8025EA38(c); // 80263428
L_8026342C:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8026342C
  c->r[3]=0u+0x00000000u; // 80263430
  c->r[0]=R32(c->r[1]+0x00000014u); // 80263434
  c->lr=c->r[0]; // 80263438
  c->r[1]=c->r[1]+0x00000010u; // 8026343C
  return; // 80263440
}

// PlayRecordAlarmCallback
void f_80263444(Ctx* __restrict c) {
  trace_call(0x80263444u);
  c->r[3]=0u+0x00000000u; // 80263444
  c->r[4]=0u+0x00000000u; // 80263448
  f_80263450(c); return; // 8026344C
}

// PlayRecordCallback
void f_80263450(Ctx* __restrict c) {
  trace_call(0x80263450u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80263450
  c->r[0]=c->lr; // 80263454
  W32(c->r[1]+0x00000024u,c->r[0]); // 80263458
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8026345C
  c->r[31]=0u+0x80600000u; // 80263460
  c->r[31]=c->r[31]+0xFFFF93A0u; // 80263464
  W32(c->r[1]+0x00000018u,c->r[30]); // 80263468
  c->r[30]=0u+0x00000000u; // 8026346C
  W32(c->r[1]+0x00000014u,c->r[29]); // 80263470
  c->r[0]=R32(c->r[13]+0xFFFF98E8u); // 80263474
  W32(c->r[13]+0xFFFF98F4u,c->r[3]); // 80263478
  cmps(c,0,(int32_t)c->r[0],0); // 8026347C
  if (crb(c,2)) { goto L_80263490; } // 80263480
  c->r[0]=0u+0x00000001u; // 80263484
  W32(c->r[13]+0xFFFF98ECu,c->r[0]); // 80263488
  goto L_802638E4; // 8026348C
L_80263490:;
  c->r[0]=R32(c->r[13]+0xFFFF98F0u); // 80263490
  cmps(c,0,(int32_t)c->r[0],0); // 80263494
  if (!crb(c,2)) { goto L_802636B0; } // 80263498
  c->r[0]=R32(c->r[13]+0xFFFF8E08u); // 8026349C
  cmpu(c,0,c->r[0],0x00000006u); // 802634A0
  if (crb(c,1)) { goto L_8026369C; } // 802634A4
  c->r[4]=0u+0x80420000u; // 802634A8
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 802634AC
  c->r[4]=c->r[4]+0xFFFFF964u; // 802634B0
  c->r[4]=R32(c->r[4]+c->r[0]); // 802634B4
  c->ctr=c->r[4]; // 802634B8
  if (true) { switch (c->ctr) { case 0x802634C0u: goto L_802634C0; case 0x802634CCu: goto L_802634CC; case 0x80263548u: goto L_80263548; case 0x8026358Cu: goto L_8026358C; case 0x802635B4u: goto L_802635B4; case 0x802635C0u: goto L_802635C0; case 0x80263648u: goto L_80263648; default: break; } dispatch(c,c->ctr); return; } // 802634BC
L_802634C0:;
  c->r[0]=0u+0x00000001u; // 802634C0
  W32(c->r[13]+0xFFFF8E08u,c->r[0]); // 802634C4
  goto L_802636B0; // 802634C8
L_802634CC:;
  cmps(c,0,(int32_t)c->r[3],-10); // 802634CC
  if (!crb(c,2)) { goto L_80263508; } // 802634D0
  c->r[0]=0u+0x00000001u; // 802634D4
  c->r[3]=c->r[31]+0x00000080u; // 802634D8
  W32(c->r[13]+0xFFFF98F0u,c->r[0]); // 802634DC
  c->lr=0x802634E4u; f_802593E4(c); // 802634E0
  c->r[3]=0u+0x80000000u; // 802634E4
  c->r[7]=0u+0x80260000u; // 802634E8
  c->r[0]=R32(c->r[3]+0x000000F8u); // 802634EC
  c->r[3]=c->r[31]+0x00000080u; // 802634F0
  c->r[7]=c->r[7]+0x00003444u; // 802634F4
  c->r[5]=0u+0x00000000u; // 802634F8
  c->r[6]=rotl(c->r[0],30)&0x3FFFFFFFu; // 802634FC
  c->lr=0x80263504u; f_80259644(c); // 80263500
  goto L_802638E4; // 80263504
L_80263508:;
  cmps(c,0,(int32_t)c->r[3],0); // 80263508
  if (!crb(c,2)) { goto L_80263534; } // 8026350C
  c->r[0]=R32(c->r[13]+0xFFFF98E0u); // 80263510
  cmps(c,0,(int32_t)c->r[0],0); // 80263514
  if (!crb(c,2)) { goto L_80263528; } // 80263518
  c->r[0]=0u+0x00000002u; // 8026351C
  W32(c->r[13]+0xFFFF8E08u,c->r[0]); // 80263520
  goto L_802636B0; // 80263524
L_80263528:;
  c->r[0]=0u+0x00000004u; // 80263528
  W32(c->r[13]+0xFFFF8E08u,c->r[0]); // 8026352C
  goto L_802636B0; // 80263530
L_80263534:;
  c->r[3]=0u+0x00000001u; // 80263534
  c->r[0]=0u+0x00000007u; // 80263538
  W32(c->r[13]+0xFFFF98E4u,c->r[3]); // 8026353C
  W32(c->r[13]+0xFFFF8E08u,c->r[0]); // 80263540
  goto L_802638E4; // 80263544
L_80263548:;
  cmpu(c,0,c->r[3],0x00000080u); // 80263548
  if (!crb(c,2)) { goto L_80263578; } // 8026354C
  c->r[4]=c->r[31]+0x00000000u; // 80263550
  c->r[5]=0u+0x00000001u; // 80263554
  c->r[3]=R32(c->r[4]+0x00000060u); // 80263558
  c->r[0]=0u+0x00000003u; // 8026355C
  c->r[4]=R32(c->r[4]+0x00000064u); // 80263560
  W32(c->r[13]+0xFFFF98E0u,c->r[5]); // 80263564
  W32(c->r[13]+0xFFFF98FCu,c->r[4]); // 80263568
  W32(c->r[13]+0xFFFF98F8u,c->r[3]); // 8026356C
  W32(c->r[13]+0xFFFF8E08u,c->r[0]); // 80263570
  goto L_802636B0; // 80263574
L_80263578:;
  c->r[3]=0u+0x00000001u; // 80263578
  c->r[0]=0u+0x00000006u; // 8026357C
  W32(c->r[13]+0xFFFF98E4u,c->r[3]); // 80263580
  W32(c->r[13]+0xFFFF8E08u,c->r[0]); // 80263584
  goto L_802636B0; // 80263588
L_8026358C:;
  cmps(c,0,(int32_t)c->r[3],0); // 8026358C
  if (!crb(c,2)) { goto L_802635A0; } // 80263590
  c->r[0]=0u+0x00000004u; // 80263594
  W32(c->r[13]+0xFFFF8E08u,c->r[0]); // 80263598
  goto L_802636B0; // 8026359C
L_802635A0:;
  c->r[3]=0u+0x00000001u; // 802635A0
  c->r[0]=0u+0x00000006u; // 802635A4
  W32(c->r[13]+0xFFFF98E4u,c->r[3]); // 802635A8
  W32(c->r[13]+0xFFFF8E08u,c->r[0]); // 802635AC
  goto L_802636B0; // 802635B0
L_802635B4:;
  c->r[0]=0u+0x00000005u; // 802635B4
  W32(c->r[13]+0xFFFF8E08u,c->r[0]); // 802635B8
  goto L_802636B0; // 802635BC
L_802635C0:;
  cmpu(c,0,c->r[3],0x00000080u); // 802635C0
  if (!crb(c,2)) { goto L_80263634; } // 802635C4
  c->lr=0x802635CCu; f_80262780(c); // 802635C8
  c->r[5]=0u+0x80000000u; // 802635CC
  c->r[8]=R32(c->r[13]+0xFFFF98FCu); // 802635D0
  c->r[0]=R32(c->r[5]+0x000000F8u); // 802635D4
  c->r[5]=0u+0x0000012Cu; // 802635D8
  c->r[9]=R32(c->r[13]+0xFFFF98F8u); // 802635DC
  c->r[8]=addc(c,~c->r[8],c->r[4],1); // 802635E0
  c->r[7]=rotl(c->r[0],30)&0x3FFFFFFFu; // 802635E4
  c->r[6]=0u+0x00000000u; // 802635E8
  c->r[3]=addc(c,~c->r[9],c->r[3],c->xer_ca); // 802635EC
  c->r[4]=c->r[3]^0x80000000u; // 802635F0
  c->r[0]=(uint32_t)(((uint64_t)c->r[7]*(uint64_t)c->r[5])>>32); // 802635F4
  c->r[3]=(uint32_t)((int32_t)c->r[6]*(int32_t)c->r[5]); // 802635F8
  c->r[0]=c->r[0]+c->r[3]; // 802635FC
  c->r[5]=(uint32_t)((int32_t)c->r[7]*(int32_t)300); // 80263600
  c->r[0]=c->r[0]^0x80000000u; // 80263604
  c->r[3]=addc(c,~c->r[8],c->r[5],1); // 80263608
  c->r[4]=addc(c,~c->r[4],c->r[0],c->xer_ca); // 8026360C
  c->r[4]=addc(c,~c->r[0],c->r[0],c->xer_ca); // 80263610
  c->r[4]=0u-c->r[4]; cr0(c,c->r[4]); // 80263614
  if (crb(c,2)) { goto L_80263628; } // 80263618
  c->r[0]=0u+0x00000006u; // 8026361C
  W32(c->r[13]+0xFFFF8E08u,c->r[0]); // 80263620
  goto L_802636B0; // 80263624
L_80263628:;
  c->r[0]=0u+0x00000003u; // 80263628
  W32(c->r[13]+0xFFFF8E08u,c->r[0]); // 8026362C
  goto L_802636B0; // 80263630
L_80263634:;
  c->r[3]=0u+0x00000001u; // 80263634
  c->r[0]=0u+0x00000006u; // 80263638
  W32(c->r[13]+0xFFFF98E4u,c->r[3]); // 8026363C
  W32(c->r[13]+0xFFFF8E08u,c->r[0]); // 80263640
  goto L_802636B0; // 80263644
L_80263648:;
  c->r[0]=R32(c->r[13]+0xFFFF98E4u); // 80263648
  cmps(c,0,(int32_t)c->r[0],0); // 8026364C
  if (crb(c,2)) { goto L_80263660; } // 80263650
  c->r[0]=0u+0x00000007u; // 80263654
  W32(c->r[13]+0xFFFF8E08u,c->r[0]); // 80263658
  goto L_802638E4; // 8026365C
L_80263660:;
  cmps(c,0,(int32_t)c->r[3],0); // 80263660
  if (!crb(c,2)) { goto L_80263688; } // 80263664
  c->r[4]=c->r[31]+0x00000000u; // 80263668
  c->r[0]=0u+0x00000001u; // 8026366C
  c->r[3]=R32(c->r[4]+0x00000060u); // 80263670
  c->r[4]=R32(c->r[4]+0x00000064u); // 80263674
  W32(c->r[13]+0xFFFF98F8u,c->r[3]); // 80263678
  W32(c->r[13]+0xFFFF98FCu,c->r[4]); // 8026367C
  W32(c->r[13]+0xFFFF8E08u,c->r[0]); // 80263680
  goto L_802636B0; // 80263684
L_80263688:;
  c->r[3]=0u+0x00000007u; // 80263688
  c->r[0]=0u+0x00000001u; // 8026368C
  W32(c->r[13]+0xFFFF8E08u,c->r[3]); // 80263690
  W32(c->r[13]+0xFFFF98E4u,c->r[0]); // 80263694
  goto L_802638E4; // 80263698
L_8026369C:;
  c->r[3]=0u+0x00000007u; // 8026369C
  c->r[0]=0u+0x00000001u; // 802636A0
  W32(c->r[13]+0xFFFF8E08u,c->r[3]); // 802636A4
  W32(c->r[13]+0xFFFF98E4u,c->r[0]); // 802636A8
  goto L_802638E4; // 802636AC
L_802636B0:;
  c->r[0]=R32(c->r[13]+0xFFFF8E08u); // 802636B0
  c->r[29]=0u+0x00000000u; // 802636B4
  W32(c->r[13]+0xFFFF98F0u,c->r[29]); // 802636B8
  cmps(c,0,(int32_t)c->r[0],4); // 802636BC
  if (crb(c,2)) { goto L_80263760; } // 802636C0
  if (!crb(c,0)) { goto L_802636E0; } // 802636C4
  cmps(c,0,(int32_t)c->r[0],2); // 802636C8
  if (crb(c,2)) { goto L_80263718; } // 802636CC
  if (!crb(c,0)) { goto L_8026373C; } // 802636D0
  cmps(c,0,(int32_t)c->r[0],1); // 802636D4
  if (!crb(c,0)) { goto L_802636F0; } // 802636D8
  goto L_8026380C; // 802636DC
L_802636E0:;
  cmps(c,0,(int32_t)c->r[0],6); // 802636E0
  if (crb(c,2)) { goto L_802637F4; } // 802636E4
  if (!crb(c,0)) { goto L_8026380C; } // 802636E8
  goto L_8026379C; // 802636EC
L_802636F0:;
  c->r[3]=0u+0x80420000u; // 802636F0
  c->r[6]=0u+0x80260000u; // 802636F4
  c->r[3]=c->r[3]+0xFFFFF938u; // 802636F8
  c->r[4]=c->r[31]+0x000000B0u; // 802636FC
  c->r[6]=c->r[6]+0x00003450u; // 80263700
  c->r[7]=c->r[31]+0x00000140u; // 80263704
  c->r[5]=0u+0x00000003u; // 80263708
  c->lr=0x80263710u; f_802AB9AC(c); // 8026370C
  c->r[30]=c->r[3]|c->r[3]; // 80263710
  goto L_8026380C; // 80263714
L_80263718:;
  c->r[6]=0u+0x80260000u; // 80263718
  c->r[3]=c->r[31]+0x000000B0u; // 8026371C
  c->r[4]=c->r[31]+0x00000000u; // 80263720
  c->r[7]=c->r[31]+0x00000140u; // 80263724
  c->r[6]=c->r[6]+0x00003450u; // 80263728
  c->r[5]=0u+0x00000080u; // 8026372C
  c->lr=0x80263734u; f_802AACE0(c); // 80263730
  c->r[30]=c->r[3]|c->r[3]; // 80263734
  goto L_8026380C; // 80263738
L_8026373C:;
  c->r[6]=0u+0x80260000u; // 8026373C
  c->r[3]=c->r[31]+0x000000B0u; // 80263740
  c->r[6]=c->r[6]+0x00003450u; // 80263744
  c->r[7]=c->r[31]+0x00000140u; // 80263748
  c->r[4]=0u+0x00000000u; // 8026374C
  c->r[5]=0u+0x00000000u; // 80263750
  c->lr=0x80263758u; f_802AAE38(c); // 80263754
  c->r[30]=c->r[3]|c->r[3]; // 80263758
  goto L_8026380C; // 8026375C
L_80263760:;
  c->r[3]=c->r[31]+0x00000080u; // 80263760
  c->lr=0x80263768u; f_802593E4(c); // 80263764
  c->r[3]=0u+0x80000000u; // 80263768
  c->r[0]=0u+0x0000003Cu; // 8026376C
  c->r[3]=R32(c->r[3]+0x000000F8u); // 80263770
  c->r[7]=0u+0x80260000u; // 80263774
  c->r[4]=(uint32_t)((int32_t)c->r[29]*(int32_t)c->r[0]); // 80263778
  c->r[5]=rotl(c->r[3],30)&0x3FFFFFFFu; // 8026377C
  c->r[3]=c->r[31]+0x00000080u; // 80263780
  c->r[7]=c->r[7]+0x00003444u; // 80263784
  c->r[0]=(uint32_t)(((uint64_t)c->r[5]*(uint64_t)c->r[0])>>32); // 80263788
  c->r[6]=(uint32_t)((int32_t)c->r[5]*(int32_t)60); // 8026378C
  c->r[5]=c->r[0]+c->r[4]; // 80263790
  c->lr=0x80263798u; f_80259644(c); // 80263794
  goto L_8026380C; // 80263798
L_8026379C:;
  c->lr=0x802637A0u; f_80262780(c); // 8026379C
  c->r[5]=c->r[31]+0x00000000u; // 802637A0
  c->r[0]=0u+0x0000001Fu; // 802637A4
  W32(c->r[5]+0x00000064u,c->r[4]); // 802637A8
  c->r[6]=c->r[5]+0x00000004u; // 802637AC
  c->r[4]=0u+0x00000000u; // 802637B0
  W32(c->r[5]+0x00000060u,c->r[3]); // 802637B4
  c->ctr=c->r[0]; // 802637B8
L_802637BC:;
  c->r[0]=R32(c->r[6]+0x00000000u); // 802637BC
  c->r[6]=c->r[6]+0x00000004u; // 802637C0
  c->r[4]=c->r[4]+c->r[0]; // 802637C4
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_802637BC; } // 802637C8
  c->r[6]=0u+0x80260000u; // 802637CC
  W32(c->r[31]+0x00000000u,c->r[4]); // 802637D0
  c->r[3]=c->r[31]+0x000000B0u; // 802637D4
  c->r[4]=c->r[31]+0x00000000u; // 802637D8
  c->r[6]=c->r[6]+0x00003450u; // 802637DC
  c->r[7]=c->r[31]+0x00000140u; // 802637E0
  c->r[5]=0u+0x00000080u; // 802637E4
  c->lr=0x802637ECu; f_802AADC0(c); // 802637E8
  c->r[30]=c->r[3]|c->r[3]; // 802637EC
  goto L_8026380C; // 802637F0
L_802637F4:;
  c->r[4]=0u+0x80260000u; // 802637F4
  c->r[3]=c->r[31]+0x000000B0u; // 802637F8
  c->r[4]=c->r[4]+0x00003450u; // 802637FC
  c->r[5]=c->r[31]+0x00000140u; // 80263800
  c->lr=0x80263808u; f_802ABB80(c); // 80263804
  c->r[30]=c->r[3]|c->r[3]; // 80263808
L_8026380C:;
  cmps(c,0,(int32_t)c->r[30],0); // 8026380C
  if (crb(c,2)) { goto L_802638E0; } // 80263810
  cmps(c,0,(int32_t)c->r[30],-3); // 80263814
  if (!crb(c,2)) { goto L_80263850; } // 80263818
  c->r[3]=c->r[31]+0x00000080u; // 8026381C
  c->lr=0x80263824u; f_802593E4(c); // 80263820
  c->r[3]=0u+0x80000000u; // 80263824
  c->r[7]=0u+0x80260000u; // 80263828
  c->r[0]=R32(c->r[3]+0x000000F8u); // 8026382C
  c->r[3]=c->r[31]+0x00000080u; // 80263830
  c->r[7]=c->r[7]+0x00003444u; // 80263834
  c->r[5]=0u+0x00000000u; // 80263838
  c->r[6]=rotl(c->r[0],30)&0x3FFFFFFFu; // 8026383C
  c->lr=0x80263844u; f_80259644(c); // 80263840
  c->r[0]=0u+0x00000001u; // 80263844
  W32(c->r[13]+0xFFFF98F0u,c->r[0]); // 80263848
  goto L_802638E0; // 8026384C
L_80263850:;
  c->r[0]=R32(c->r[13]+0xFFFF8E08u); // 80263850
  c->r[3]=0u+0x00000001u; // 80263854
  W32(c->r[13]+0xFFFF98E4u,c->r[3]); // 80263858
  cmps(c,0,(int32_t)c->r[0],4); // 8026385C
  if (crb(c,2)) { goto L_802638D8; } // 80263860
  if (!crb(c,0)) { goto L_80263874; } // 80263864
  cmps(c,0,(int32_t)c->r[0],2); // 80263868
  if (!crb(c,0)) { goto L_8026387C; } // 8026386C
  goto L_802638D8; // 80263870
L_80263874:;
  cmps(c,0,(int32_t)c->r[0],6); // 80263874
  if (!crb(c,0)) { goto L_802638D8; } // 80263878
L_8026387C:;
  c->r[0]=0u+0x00000006u; // 8026387C
  c->r[4]=0u+0x80260000u; // 80263880
  W32(c->r[13]+0xFFFF8E08u,c->r[0]); // 80263884
  c->r[3]=c->r[31]+0x000000B0u; // 80263888
  c->r[4]=c->r[4]+0x00003450u; // 8026388C
  c->r[5]=c->r[31]+0x00000140u; // 80263890
  c->lr=0x80263898u; f_802ABB80(c); // 80263894
  cmps(c,0,(int32_t)c->r[3],-3); // 80263898
  c->r[30]=c->r[3]|c->r[3]; // 8026389C
  if (!crb(c,2)) { goto L_802638E0; } // 802638A0
  c->r[0]=0u+0x00000001u; // 802638A4
  c->r[3]=c->r[31]+0x00000080u; // 802638A8
  W32(c->r[13]+0xFFFF98F0u,c->r[0]); // 802638AC
  c->lr=0x802638B4u; f_802593E4(c); // 802638B0
  c->r[3]=0u+0x80000000u; // 802638B4
  c->r[7]=0u+0x80260000u; // 802638B8
  c->r[0]=R32(c->r[3]+0x000000F8u); // 802638BC
  c->r[3]=c->r[31]+0x00000080u; // 802638C0
  c->r[7]=c->r[7]+0x00003444u; // 802638C4
  c->r[5]=0u+0x00000000u; // 802638C8
  c->r[6]=rotl(c->r[0],30)&0x3FFFFFFFu; // 802638CC
  c->lr=0x802638D4u; f_80259644(c); // 802638D0
  goto L_802638E0; // 802638D4
L_802638D8:;
  c->r[0]=0u+0x00000007u; // 802638D8
  W32(c->r[13]+0xFFFF8E08u,c->r[0]); // 802638DC
L_802638E0:;
  W32(c->r[13]+0xFFFF98F4u,c->r[30]); // 802638E0
L_802638E4:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 802638E4
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 802638E8
  c->r[30]=R32(c->r[1]+0x00000018u); // 802638EC
  c->r[29]=R32(c->r[1]+0x00000014u); // 802638F0
  c->lr=c->r[0]; // 802638F4
  c->r[1]=c->r[1]+0x00000020u; // 802638F8
  return; // 802638FC
}

// __OSStartPlayRecord
void f_80263900(Ctx* __restrict c) {
  trace_call(0x80263900u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80263900
  c->r[0]=c->lr; // 80263904
  W32(c->r[1]+0x00000014u,c->r[0]); // 80263908
  c->lr=0x80263910u; f_802AC778(c); // 8026390C
  cmps(c,0,(int32_t)c->r[3],0); // 80263910
  if (!crb(c,2)) { goto L_80263944; } // 80263914
  c->r[0]=0u+0x00000000u; // 80263918
  c->r[3]=0u+0x00000000u; // 8026391C
  W32(c->r[13]+0xFFFF98E8u,c->r[0]); // 80263920
  c->r[4]=0u+0x00000000u; // 80263924
  W32(c->r[13]+0xFFFF98E0u,c->r[0]); // 80263928
  W32(c->r[13]+0xFFFF8E08u,c->r[0]); // 8026392C
  W32(c->r[13]+0xFFFF98E4u,c->r[0]); // 80263930
  W32(c->r[13]+0xFFFF98F0u,c->r[0]); // 80263934
  W32(c->r[13]+0xFFFF98ECu,c->r[0]); // 80263938
  W32(c->r[13]+0xFFFF98F4u,c->r[0]); // 8026393C
  c->lr=0x80263944u; f_80263450(c); // 80263940
L_80263944:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 80263944
  c->lr=c->r[0]; // 80263948
  c->r[1]=c->r[1]+0x00000010u; // 8026394C
  return; // 80263950
}

// __OSStopPlayRecord
void f_80263954(Ctx* __restrict c) {
  trace_call(0x80263954u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80263954
  c->r[0]=c->lr; // 80263958
  W32(c->r[1]+0x00000024u,c->r[0]); // 8026395C
  c->r[11]=c->r[1]+0x00000020u; // 80263960
  c->lr=0x80263968u; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 80263964
  c->r[29]=0u+0x80600000u; // 80263968
  c->r[29]=c->r[29]+0xFFFF93A0u; // 8026396C
  c->lr=0x80263974u; f_8025EA10(c); // 80263970
  c->r[0]=R32(c->r[13]+0xFFFF8E08u); // 80263974
  c->r[4]=0u+0x00000001u; // 80263978
  W32(c->r[13]+0xFFFF98E8u,c->r[4]); // 8026397C
  c->r[26]=c->r[3]|c->r[3]; // 80263980
  cmps(c,0,(int32_t)c->r[0],7); // 80263984
  if (crb(c,2)) { goto L_802639A4; } // 80263988
  cmps(c,0,(int32_t)c->r[0],0); // 8026398C
  if (crb(c,2)) { goto L_802639A4; } // 80263990
  cmps(c,0,(int32_t)c->r[0],9); // 80263994
  if (crb(c,2)) { goto L_802639A4; } // 80263998
  cmps(c,0,(int32_t)c->r[0],8); // 8026399C
  if (!crb(c,2)) { goto L_802639B0; } // 802639A0
L_802639A4:;
  c->r[3]=c->r[26]|c->r[26]; // 802639A4
  c->lr=0x802639ACu; f_8025EA38(c); // 802639A8
  goto L_80263B1C; // 802639AC
L_802639B0:;
  cmps(c,0,(int32_t)c->r[0],4); // 802639B0
  if (!crb(c,2)) { goto L_80263A18; } // 802639B4
  c->r[3]=c->r[29]+0x00000080u; // 802639B8
  c->lr=0x802639C0u; f_80259738(c); // 802639BC
  c->r[3]=c->r[26]|c->r[26]; // 802639C0
  c->lr=0x802639C8u; f_8025EA38(c); // 802639C4
  c->lr=0x802639CCu; f_80262780(c); // 802639C8
  c->r[5]=c->r[29]+0x00000000u; // 802639CC
  c->r[0]=0u+0x0000001Fu; // 802639D0
  W32(c->r[5]+0x00000064u,c->r[4]); // 802639D4
  c->r[6]=c->r[5]+0x00000004u; // 802639D8
  c->r[4]=0u+0x00000000u; // 802639DC
  W32(c->r[5]+0x00000060u,c->r[3]); // 802639E0
  c->ctr=c->r[0]; // 802639E4
L_802639E8:;
  c->r[0]=R32(c->r[6]+0x00000000u); // 802639E8
  c->r[6]=c->r[6]+0x00000004u; // 802639EC
  c->r[4]=c->r[4]+c->r[0]; // 802639F0
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_802639E8; } // 802639F4
  W32(c->r[29]+0x00000000u,c->r[4]); // 802639F8
  c->r[3]=c->r[29]+0x000000B0u; // 802639FC
  c->r[4]=c->r[29]+0x00000000u; // 80263A00
  c->r[5]=0u+0x00000080u; // 80263A04
  c->lr=0x80263A0Cu; f_802AAD58(c); // 80263A08
  c->r[3]=c->r[29]+0x000000B0u; // 80263A0C
  c->lr=0x80263A14u; f_802ABB14(c); // 80263A10
  goto L_80263B1C; // 80263A14
L_80263A18:;
  c->r[0]=R32(c->r[13]+0xFFFF98F0u); // 80263A18
  cmps(c,0,(int32_t)c->r[0],0); // 80263A1C
  if (crb(c,2)) { goto L_80263A38; } // 80263A20
  c->r[3]=c->r[29]+0x00000080u; // 80263A24
  c->lr=0x80263A2Cu; f_80259738(c); // 80263A28
  c->r[3]=c->r[26]|c->r[26]; // 80263A2C
  c->lr=0x80263A34u; f_8025EA38(c); // 80263A30
  goto L_80263AAC; // 80263A34
L_80263A38:;
  c->lr=0x80263A3Cu; f_8025EA38(c); // 80263A38
  c->lr=0x80263A40u; f_80262780(c); // 80263A3C
  c->r[5]=0u+0x10620000u; // 80263A40
  c->r[0]=0u+0x00000000u; // 80263A44
  c->r[30]=c->r[4]|c->r[4]; // 80263A48
  c->r[31]=c->r[3]|c->r[3]; // 80263A4C
  c->r[26]=c->r[5]+0x00004DD3u; // 80263A50
  c->r[28]=c->r[0]^0x80000000u; // 80263A54
  c->r[27]=0u+0x80000000u; // 80263A58
L_80263A5C:;
  c->r[0]=R32(c->r[13]+0xFFFF98ECu); // 80263A5C
  cmps(c,0,(int32_t)c->r[0],0); // 80263A60
  if (!crb(c,2)) { goto L_80263AAC; } // 80263A64
  c->lr=0x80263A6Cu; f_80262780(c); // 80263A68
  c->r[0]=R32(c->r[27]+0x000000F8u); // 80263A6C
  c->r[4]=addc(c,~c->r[30],c->r[4],1); // 80263A70
  c->r[3]=addc(c,~c->r[31],c->r[3],c->xer_ca); // 80263A74
  c->r[0]=rotl(c->r[0],30)&0x3FFFFFFFu; // 80263A78
  c->r[0]=(uint32_t)(((uint64_t)c->r[26]*(uint64_t)c->r[0])>>32); // 80263A7C
  c->r[3]=c->r[3]^0x80000000u; // 80263A80
  c->r[0]=rotl(c->r[0],26)&0x03FFFFFFu; // 80263A84
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)500); // 80263A88
  c->r[0]=addc(c,~c->r[4],c->r[0],1); // 80263A8C
  c->r[3]=addc(c,~c->r[3],c->r[28],c->xer_ca); // 80263A90
  c->r[3]=addc(c,~c->r[28],c->r[28],c->xer_ca); // 80263A94
  c->r[3]=0u-c->r[3]; cr0(c,c->r[3]); // 80263A98
  if (crb(c,2)) { IRQCHK(c); goto L_80263A5C; } // 80263A9C
  c->r[0]=0u+0x00000008u; // 80263AA0
  W32(c->r[13]+0xFFFF8E08u,c->r[0]); // 80263AA4
  goto L_80263B24; // 80263AA8
L_80263AAC:;
  c->r[0]=R32(c->r[13]+0xFFFF8E08u); // 80263AAC
  cmps(c,0,(int32_t)c->r[0],4); // 80263AB0
  if (crb(c,2)) { goto L_80263B1C; } // 80263AB4
  if (!crb(c,0)) { goto L_80263ACC; } // 80263AB8
  cmps(c,0,(int32_t)c->r[0],1); // 80263ABC
  if (crb(c,2)) { goto L_80263AE4; } // 80263AC0
  if (!crb(c,0)) { goto L_80263AD8; } // 80263AC4
  goto L_80263B1C; // 80263AC8
L_80263ACC:;
  cmps(c,0,(int32_t)c->r[0],6); // 80263ACC
  if (crb(c,2)) { goto L_80263B08; } // 80263AD0
  if (!crb(c,0)) { goto L_80263B1C; } // 80263AD4
L_80263AD8:;
  c->r[3]=c->r[29]+0x000000B0u; // 80263AD8
  c->lr=0x80263AE0u; f_802ABB14(c); // 80263ADC
  goto L_80263B1C; // 80263AE0
L_80263AE4:;
  c->r[0]=R32(c->r[13]+0xFFFF98F4u); // 80263AE4
  cmps(c,0,(int32_t)c->r[0],0); // 80263AE8
  if (!crb(c,2)) { goto L_80263B1C; } // 80263AEC
  c->r[0]=R32(c->r[13]+0xFFFF98F0u); // 80263AF0
  cmps(c,0,(int32_t)c->r[0],0); // 80263AF4
  if (!crb(c,2)) { goto L_80263B1C; } // 80263AF8
  c->r[3]=c->r[29]+0x000000B0u; // 80263AFC
  c->lr=0x80263B04u; f_802ABB14(c); // 80263B00
  goto L_80263B1C; // 80263B04
L_80263B08:;
  c->r[0]=R32(c->r[13]+0xFFFF98F0u); // 80263B08
  cmps(c,0,(int32_t)c->r[0],0); // 80263B0C
  if (crb(c,2)) { goto L_80263B1C; } // 80263B10
  c->r[3]=c->r[29]+0x000000B0u; // 80263B14
  c->lr=0x80263B1Cu; f_802ABB14(c); // 80263B18
L_80263B1C:;
  c->r[0]=0u+0x00000009u; // 80263B1C
  W32(c->r[13]+0xFFFF8E08u,c->r[0]); // 80263B20
L_80263B24:;
  c->r[11]=c->r[1]+0x00000020u; // 80263B24
  c->lr=0x80263B2Cu; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 80263B28
  c->r[0]=R32(c->r[1]+0x00000024u); // 80263B2C
  c->lr=c->r[0]; // 80263B30
  c->r[1]=c->r[1]+0x00000020u; // 80263B34
  return; // 80263B38
}

// __OSWriteStateFlags
void f_80263B3C(Ctx* __restrict c) {
  trace_call(0x80263B3Cu);
  {uint32_t ea=c->r[1]+0xFFFFFF60u; W32(ea,c->r[1]); c->r[1]=ea;} // 80263B3C
  c->r[0]=c->lr; // 80263B40
  c->r[4]=c->r[3]|c->r[3]; // 80263B44
  c->r[5]=0u+0x00000020u; // 80263B48
  W32(c->r[1]+0x000000A4u,c->r[0]); // 80263B4C
  W32(c->r[1]+0x0000009Cu,c->r[31]); // 80263B50
  W32(c->r[1]+0x00000098u,c->r[30]); // 80263B54
  c->r[30]=0u+0x80600000u; // 80263B58
  c->r[3]=c->r[30]+0xFFFF95A0u; // 80263B5C
  c->lr=0x80263B64u; f_80235294(c); // 80263B60
  c->r[31]=c->r[30]+0xFFFF95A0u; // 80263B64
  c->r[3]=0u+0x80420000u; // 80263B68
  c->r[6]=R32(c->r[31]+0x00000004u); // 80263B6C
  c->r[3]=c->r[3]+0xFFFFF980u; // 80263B70
  c->r[0]=R32(c->r[31]+0x00000008u); // 80263B74
  c->r[4]=c->r[1]+0x00000008u; // 80263B78
  c->r[5]=0u+0x00000002u; // 80263B7C
  c->r[6]=c->r[6]+c->r[0]; // 80263B80
  c->r[0]=R32(c->r[31]+0x0000000Cu); // 80263B84
  c->r[6]=c->r[6]+c->r[0]; // 80263B88
  c->r[0]=R32(c->r[31]+0x00000010u); // 80263B8C
  c->r[6]=c->r[6]+c->r[0]; // 80263B90
  c->r[0]=R32(c->r[31]+0x00000014u); // 80263B94
  c->r[6]=c->r[6]+c->r[0]; // 80263B98
  c->r[0]=R32(c->r[31]+0x00000018u); // 80263B9C
  c->r[6]=c->r[6]+c->r[0]; // 80263BA0
  c->r[0]=R32(c->r[31]+0x0000001Cu); // 80263BA4
  c->r[6]=c->r[6]+c->r[0]; // 80263BA8
  W32(c->r[30]+0xFFFF95A0u,c->r[6]); // 80263BAC
  c->lr=0x80263BB4u; f_802AB894(c); // 80263BB0
  cmps(c,0,(int32_t)c->r[3],0); // 80263BB4
  if (!crb(c,2)) { goto L_80263BFC; } // 80263BB8
  c->r[4]=c->r[31]|c->r[31]; // 80263BBC
  c->r[3]=c->r[1]+0x00000008u; // 80263BC0
  c->r[5]=0u+0x00000020u; // 80263BC4
  c->lr=0x80263BCCu; f_802AAD58(c); // 80263BC8
  cmpu(c,0,c->r[3],0x00000020u); // 80263BCC
  if (crb(c,2)) { goto L_80263BE4; } // 80263BD0
  c->r[3]=c->r[1]+0x00000008u; // 80263BD4
  c->lr=0x80263BDCu; f_802ABB14(c); // 80263BD8
  c->r[3]=0u+0x00000000u; // 80263BDC
  goto L_80263C08; // 80263BE0
L_80263BE4:;
  c->r[3]=c->r[1]+0x00000008u; // 80263BE4
  c->lr=0x80263BECu; f_802ABB14(c); // 80263BE8
  cmps(c,0,(int32_t)c->r[3],0); // 80263BEC
  if (crb(c,2)) { goto L_80263C04; } // 80263BF0
  c->r[3]=0u+0x00000000u; // 80263BF4
  goto L_80263C08; // 80263BF8
L_80263BFC:;
  c->r[3]=0u+0x00000000u; // 80263BFC
  goto L_80263C08; // 80263C00
L_80263C04:;
  c->r[3]=0u+0x00000001u; // 80263C04
L_80263C08:;
  c->r[0]=R32(c->r[1]+0x000000A4u); // 80263C08
  c->r[31]=R32(c->r[1]+0x0000009Cu); // 80263C0C
  c->r[30]=R32(c->r[1]+0x00000098u); // 80263C10
  c->lr=c->r[0]; // 80263C14
  c->r[1]=c->r[1]+0x000000A0u; // 80263C18
  return; // 80263C1C
}

// __OSReadStateFlags
void f_80263C20(Ctx* __restrict c) {
  trace_call(0x80263C20u);
  {uint32_t ea=c->r[1]+0xFFFFFF50u; W32(ea,c->r[1]); c->r[1]=ea;} // 80263C20
  c->r[0]=c->lr; // 80263C24
  c->r[5]=0u+0x00000001u; // 80263C28
  W32(c->r[1]+0x000000B4u,c->r[0]); // 80263C2C
  c->r[4]=c->r[1]+0x00000008u; // 80263C30
  W32(c->r[1]+0x000000ACu,c->r[31]); // 80263C34
  W32(c->r[1]+0x000000A8u,c->r[30]); // 80263C38
  W32(c->r[1]+0x000000A4u,c->r[29]); // 80263C3C
  c->r[29]=0u+0x80420000u; // 80263C40
  W32(c->r[1]+0x000000A0u,c->r[28]); // 80263C44
  c->r[28]=c->r[3]|c->r[3]; // 80263C48
  c->r[3]=c->r[29]+0xFFFFF980u; // 80263C4C
  c->lr=0x80263C54u; f_802AB894(c); // 80263C50
  cmps(c,0,(int32_t)c->r[3],0); // 80263C54
  if (!crb(c,2)) { goto L_80263CA4; } // 80263C58
  c->r[30]=0u+0x80600000u; // 80263C5C
  c->r[3]=c->r[1]+0x00000008u; // 80263C60
  c->r[4]=c->r[30]+0xFFFF95A0u; // 80263C64
  c->r[5]=0u+0x00000020u; // 80263C68
  c->lr=0x80263C70u; f_802AAC78(c); // 80263C6C
  c->r[31]=c->r[3]|c->r[3]; // 80263C70
  c->r[3]=c->r[1]+0x00000008u; // 80263C74
  c->lr=0x80263C7Cu; f_802ABB14(c); // 80263C78
  cmpu(c,0,c->r[31],0x00000020u); // 80263C7C
  if (crb(c,2)) { goto L_80263CBC; } // 80263C80
  c->r[3]=c->r[29]+0xFFFFF980u; // 80263C84
  c->lr=0x80263C8Cu; f_802AAB08(c); // 80263C88
  c->r[3]=c->r[28]|c->r[28]; // 80263C8C
  c->r[4]=0u+0x00000000u; // 80263C90
  c->r[5]=0u+0x00000020u; // 80263C94
  c->lr=0x80263C9Cu; f_800043EC(c); // 80263C98
  c->r[3]=0u+0x00000000u; // 80263C9C
  goto L_80263D28; // 80263CA0
L_80263CA4:;
  c->r[3]=c->r[28]|c->r[28]; // 80263CA4
  c->r[4]=0u+0x00000000u; // 80263CA8
  c->r[5]=0u+0x00000020u; // 80263CAC
  c->lr=0x80263CB4u; f_800043EC(c); // 80263CB0
  c->r[3]=0u+0x00000000u; // 80263CB4
  goto L_80263D28; // 80263CB8
L_80263CBC:;
  c->r[4]=c->r[30]+0xFFFF95A0u; // 80263CBC
  c->r[0]=R32(c->r[30]+0xFFFF95A0u); // 80263CC0
  c->r[5]=R32(c->r[4]+0x00000004u); // 80263CC4
  c->r[3]=R32(c->r[4]+0x00000008u); // 80263CC8
  c->r[5]=c->r[5]+c->r[3]; // 80263CCC
  c->r[3]=R32(c->r[4]+0x0000000Cu); // 80263CD0
  c->r[5]=c->r[5]+c->r[3]; // 80263CD4
  c->r[3]=R32(c->r[4]+0x00000010u); // 80263CD8
  c->r[5]=c->r[5]+c->r[3]; // 80263CDC
  c->r[3]=R32(c->r[4]+0x00000014u); // 80263CE0
  c->r[5]=c->r[5]+c->r[3]; // 80263CE4
  c->r[3]=R32(c->r[4]+0x00000018u); // 80263CE8
  c->r[5]=c->r[5]+c->r[3]; // 80263CEC
  c->r[3]=R32(c->r[4]+0x0000001Cu); // 80263CF0
  c->r[5]=c->r[5]+c->r[3]; // 80263CF4
  cmpu(c,0,c->r[0],c->r[5]); // 80263CF8
  if (crb(c,2)) { goto L_80263D18; } // 80263CFC
  c->r[3]=c->r[28]|c->r[28]; // 80263D00
  c->r[4]=0u+0x00000000u; // 80263D04
  c->r[5]=0u+0x00000020u; // 80263D08
  c->lr=0x80263D10u; f_800043EC(c); // 80263D0C
  c->r[3]=0u+0x00000000u; // 80263D10
  goto L_80263D28; // 80263D14
L_80263D18:;
  c->r[3]=c->r[28]|c->r[28]; // 80263D18
  c->r[5]=0u+0x00000020u; // 80263D1C
  c->lr=0x80263D24u; f_80235294(c); // 80263D20
  c->r[3]=0u+0x00000001u; // 80263D24
L_80263D28:;
  c->r[0]=R32(c->r[1]+0x000000B4u); // 80263D28
  c->r[31]=R32(c->r[1]+0x000000ACu); // 80263D2C
  c->r[30]=R32(c->r[1]+0x000000A8u); // 80263D30
  c->r[29]=R32(c->r[1]+0x000000A4u); // 80263D34
  c->r[28]=R32(c->r[1]+0x000000A0u); // 80263D38
  c->lr=c->r[0]; // 80263D3C
  c->r[1]=c->r[1]+0x000000B0u; // 80263D40
  return; // 80263D44
}

// __OSInitNet
void f_80263D48(Ctx* __restrict c) {
  trace_call(0x80263D48u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80263D48
  c->r[0]=c->lr; // 80263D4C
  W32(c->r[1]+0x00000024u,c->r[0]); // 80263D50
  c->r[3]=c->r[1]+0x00000008u; // 80263D54
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 80263D58
  c->r[31]=0u+0x80420000u; // 80263D5C
  c->r[31]=c->r[31]+0xFFFFF9A8u; // 80263D60
  c->lr=0x80263D68u; f_80258180(c); // 80263D64
  c->r[0]=R8(c->r[1]+0x00000009u); // 80263D68
  cmpu(c,0,c->r[0],0x00000004u); // 80263D6C
  if (!crb(c,1)) { goto L_80263DD8; } // 80263D70
  cmpu(c,0,c->r[0],0x00000009u); // 80263D74
  if (!crb(c,2)) { goto L_80263D80; } // 80263D78
  goto L_80263DD8; // 80263D7C
L_80263D80:;
  c->lr=0x80263D84u; f_80263DEC(c); // 80263D80
  cmps(c,0,(int32_t)c->r[3],0); // 80263D84
  if (crb(c,2)) { goto L_80263DBC; } // 80263D88
  if (!crb(c,0)) { goto L_80263DA0; } // 80263D8C
  c->r[4]=c->r[3]|c->r[3]; // 80263D90
  c->r[3]=c->r[31]+0x00000000u; // 80263D94
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80263D98
  c->lr=0x80263DA0u; f_801CCA38(c); // 80263D9C
L_80263DA0:;
  c->lr=0x80263DA4u; f_80263F88(c); // 80263DA0
  cmps(c,0,(int32_t)c->r[3],0); // 80263DA4
  if (!crb(c,0)) { goto L_80263DBC; } // 80263DA8
  c->r[4]=c->r[3]|c->r[3]; // 80263DAC
  c->r[3]=c->r[31]+0x00000034u; // 80263DB0
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80263DB4
  c->lr=0x80263DBCu; f_801CCA38(c); // 80263DB8
L_80263DBC:;
  c->lr=0x80263DC0u; f_80263EA4(c); // 80263DBC
  cmps(c,0,(int32_t)c->r[3],0); // 80263DC0
  if (crb(c,2)) { goto L_80263DD8; } // 80263DC4
  c->r[4]=c->r[3]|c->r[3]; // 80263DC8
  c->r[3]=c->r[31]+0x00000068u; // 80263DCC
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80263DD0
  c->lr=0x80263DD8u; f_801CCA38(c); // 80263DD4
L_80263DD8:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 80263DD8
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 80263DDC
  c->lr=c->r[0]; // 80263DE0
  c->r[1]=c->r[1]+0x00000020u; // 80263DE4
  return; // 80263DE8
}

// NWC24iPrepareShutdown
void f_80263DEC(Ctx* __restrict c) {
  trace_call(0x80263DECu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80263DEC
  c->r[0]=c->lr; // 80263DF0
  c->r[5]=0u+0x80260000u; // 80263DF4
  c->r[4]=0u+0x80600000u; // 80263DF8
  W32(c->r[1]+0x00000014u,c->r[0]); // 80263DFC
  c->r[5]=c->r[5]+0x000040F4u; // 80263E00
  c->r[0]=0u+0x0000006Eu; // 80263E04
  c->r[3]=c->r[4]+0xFFFF95C0u; // 80263E08
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80263E0C
  c->r[31]=0u+0x00000000u; // 80263E10
  W32(c->r[4]+0xFFFF95C0u,c->r[5]); // 80263E14
  W32(c->r[3]+0x00000004u,c->r[0]); // 80263E18
  c->lr=0x80263E20u; f_8025FF50(c); // 80263E1C
  c->r[0]=R32(c->r[13]+0xFFFF8E10u); // 80263E20
  cmps(c,0,(int32_t)c->r[0],0); // 80263E24
  if (!crb(c,0)) { goto L_80263E78; } // 80263E28
  c->r[0]=c->r[13]+0xFFFF8E10u; // 80263E2C
  c->r[3]=0u+0x80420000u; // 80263E30
  cmps(c,0,(int32_t)c->r[0],0); // 80263E34
  c->r[3]=c->r[3]+0xFFFFFA68u; // 80263E38
  if (!crb(c,2)) { goto L_80263E48; } // 80263E3C
  c->r[31]=0u+0xFFFFFFFDu; // 80263E40
  goto L_80263E78; // 80263E44
L_80263E48:;
  c->r[4]=0u+0x00000001u; // 80263E48
  c->lr=0x80263E50u; f_802A9360(c); // 80263E4C
  cmps(c,0,(int32_t)c->r[3],0); // 80263E50
  W32(c->r[13]+0xFFFF8E10u,c->r[3]); // 80263E54
  if (!crb(c,0)) { goto L_80263E74; } // 80263E58
  cmps(c,0,(int32_t)c->r[3],-6); // 80263E5C
  if (!crb(c,2)) { goto L_80263E6C; } // 80263E60
  c->r[31]=0u+0xFFFFFFE3u; // 80263E64
  goto L_80263E78; // 80263E68
L_80263E6C:;
  c->r[31]=0u+0xFFFFFFD6u; // 80263E6C
  goto L_80263E78; // 80263E70
L_80263E74:;
  c->r[31]=0u+0x00000000u; // 80263E74
L_80263E78:;
  c->r[0]=0u+0x00000005u; // 80263E78
  cmps(c,0,(int32_t)c->r[31],0); // 80263E7C
  W32(c->r[13]+0xFFFF9900u,c->r[0]); // 80263E80
  if (!crb(c,2)) { goto L_80263E8C; } // 80263E84
  c->r[31]=0u+0x00000001u; // 80263E88
L_80263E8C:;
  c->r[3]=c->r[31]|c->r[31]; // 80263E8C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80263E90
  c->r[0]=R32(c->r[1]+0x00000014u); // 80263E94
  c->lr=c->r[0]; // 80263E98
  c->r[1]=c->r[1]+0x00000010u; // 80263E9C
  return; // 80263EA0
}

// NWC24iSynchronizeRtcCounter
void f_80263EA4(Ctx* __restrict c) {
  trace_call(0x80263EA4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80263EA4
  c->r[0]=c->lr; // 80263EA8
  c->r[3]=R32(c->r[13]+0xFFFF990Cu); // 80263EAC
  W32(c->r[1]+0x00000014u,c->r[0]); // 80263EB0
  c->r[0]=R32(c->r[13]+0xFFFF9908u); // 80263EB4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80263EB8
  c->r[0]=c->r[3]|c->r[0]; cr0(c,c->r[0]); // 80263EBC
  if (crb(c,2)) { goto L_80263F08; } // 80263EC0
  c->lr=0x80263EC8u; f_802627A0(c); // 80263EC4
  c->r[5]=0u+0x80000000u; // 80263EC8
  c->r[8]=R32(c->r[13]+0xFFFF990Cu); // 80263ECC
  c->r[6]=R32(c->r[5]+0x000000F8u); // 80263ED0
  c->r[5]=c->r[3]^0x80000000u; // 80263ED4
  c->r[7]=R32(c->r[13]+0xFFFF9908u); // 80263ED8
  c->r[0]=0u+0x00000000u; // 80263EDC
  c->r[3]=rotl(c->r[6],30)&0x3FFFFFFFu; // 80263EE0
  c->r[3]=(uint32_t)((int32_t)c->r[3]*(int32_t)60); // 80263EE4
  c->r[3]=addc(c,c->r[8],c->r[3],0); // 80263EE8
  c->r[0]=addc(c,c->r[7],c->r[0],c->xer_ca); // 80263EEC
  c->r[0]=c->r[0]^0x80000000u; // 80263EF0
  c->r[3]=addc(c,~c->r[4],c->r[3],1); // 80263EF4
  c->r[5]=addc(c,~c->r[5],c->r[0],c->xer_ca); // 80263EF8
  c->r[5]=addc(c,~c->r[0],c->r[0],c->xer_ca); // 80263EFC
  c->r[5]=0u-c->r[5]; cr0(c,c->r[5]); // 80263F00
  if (crb(c,2)) { goto L_80263F70; } // 80263F04
L_80263F08:;
  c->lr=0x80263F0Cu; f_802AD55C(c); // 80263F08
  cmpu(c,0,c->r[3],0x00000002u); // 80263F0C
  if (!crb(c,2)) { goto L_80263F1C; } // 80263F10
  c->r[3]=0u+0xFFFFFFFFu; // 80263F14
  goto L_80263F4C; // 80263F18
L_80263F1C:;
  cmps(c,0,(int32_t)c->r[3],0); // 80263F1C
  if (!crb(c,2)) { IRQCHK(c); goto L_80263F08; } // 80263F20
  c->lr=0x80263F28u; f_802AF0C0(c); // 80263F24
  c->r[31]=c->r[3]|c->r[3]; // 80263F28
  c->lr=0x80263F30u; f_80262780(c); // 80263F2C
  c->r[6]=0u+0x80000000u; // 80263F30
  c->r[5]=0u+0x00000000u; // 80263F34
  c->r[0]=R32(c->r[6]+0x000000F8u); // 80263F38
  c->r[6]=rotl(c->r[0],30)&0x3FFFFFFFu; // 80263F3C
  c->lr=0x80263F44u; f_80289F44(c); // 80263F40
  c->r[31]=addc(c,~c->r[31],c->r[4],1); // 80263F44
  c->r[3]=0u+0x00000000u; // 80263F48
L_80263F4C:;
  cmps(c,0,(int32_t)c->r[3],0); // 80263F4C
  if (crb(c,2)) { goto L_80263F58; } // 80263F50
  goto L_80263F74; // 80263F54
L_80263F58:;
  c->lr=0x80263F5Cu; f_802627A0(c); // 80263F58
  W32(c->r[13]+0xFFFF9908u,c->r[3]); // 80263F5C
  c->r[3]=c->r[31]|c->r[31]; // 80263F60
  W32(c->r[13]+0xFFFF990Cu,c->r[4]); // 80263F64
  c->lr=0x80263F6Cu; f_802641AC(c); // 80263F68
  goto L_80263F74; // 80263F6C
L_80263F70:;
  c->r[3]=0u+0x00000000u; // 80263F70
L_80263F74:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 80263F74
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80263F78
  c->lr=c->r[0]; // 80263F7C
  c->r[1]=c->r[1]+0x00000010u; // 80263F80
  return; // 80263F84
}

// NWC24SuspendScheduler
void f_80263F88(Ctx* __restrict c) {
  trace_call(0x80263F88u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80263F88
  c->r[0]=c->lr; // 80263F8C
  W32(c->r[1]+0x00000014u,c->r[0]); // 80263F90
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80263F94
  W32(c->r[1]+0x00000008u,c->r[30]); // 80263F98
  c->lr=0x80263FA0u; f_80261398(c); // 80263F9C
  cmps(c,0,(int32_t)c->r[3],0); // 80263FA0
  if (!crb(c,2)) { goto L_80263FB0; } // 80263FA4
  c->r[3]=0u+0xFFFFFFFFu; // 80263FA8
  goto L_80263FB4; // 80263FAC
L_80263FB0:;
  c->r[3]=0u+0x00000000u; // 80263FB0
L_80263FB4:;
  cmps(c,0,(int32_t)c->r[3],0); // 80263FB4
  if (!crb(c,0)) { goto L_80263FC0; } // 80263FB8
  goto L_80264070; // 80263FBC
L_80263FC0:;
  c->r[3]=0u+0x80420000u; // 80263FC0
  c->r[4]=0u+0x00000000u; // 80263FC4
  c->r[3]=c->r[3]+0xFFFFFA68u; // 80263FC8
  c->lr=0x80263FD0u; f_802A9360(c); // 80263FCC
  cmps(c,0,(int32_t)c->r[3],0); // 80263FD0
  c->r[30]=c->r[3]|c->r[3]; // 80263FD4
  if (!crb(c,0)) { goto L_80263FF4; } // 80263FD8
  cmps(c,0,(int32_t)c->r[3],-6); // 80263FDC
  if (!crb(c,2)) { goto L_80263FEC; } // 80263FE0
  c->r[31]=0u+0xFFFFFFE3u; // 80263FE4
  goto L_80263FF8; // 80263FE8
L_80263FEC:;
  c->r[31]=0u+0xFFFFFFD6u; // 80263FEC
  goto L_80263FF8; // 80263FF0
L_80263FF4:;
  c->r[31]=0u+0x00000000u; // 80263FF4
L_80263FF8:;
  cmps(c,0,(int32_t)c->r[31],0); // 80263FF8
  if (crb(c,0)) { goto L_8026406C; } // 80263FFC
  c->r[7]=0u+0x80600000u; // 80264000
  c->r[3]=c->r[30]|c->r[30]; // 80264004
  c->r[7]=c->r[7]+0xFFFF95E0u; // 80264008
  c->r[4]=0u+0x00000001u; // 8026400C
  c->r[5]=0u+0x00000000u; // 80264010
  c->r[6]=0u+0x00000000u; // 80264014
  c->r[8]=0u+0x00000020u; // 80264018
  c->lr=0x80264020u; f_802A9CF8(c); // 8026401C
  cmps(c,0,(int32_t)c->r[3],0); // 80264020
  if (!crb(c,0)) { goto L_80264030; } // 80264024
  c->r[31]=0u+0xFFFFFFD6u; // 80264028
  goto L_80264034; // 8026402C
L_80264030:;
  c->r[31]=0u+0x00000000u; // 80264030
L_80264034:;
  cmps(c,0,(int32_t)c->r[31],0); // 80264034
  if (crb(c,0)) { goto L_80264044; } // 80264038
  c->r[3]=0u+0x80600000u; // 8026403C
  c->r[31]=R32(c->r[3]+0xFFFF95E0u); // 80264040
L_80264044:;
  c->r[3]=c->r[30]|c->r[30]; // 80264044
  c->lr=0x8026404Cu; f_802A9540(c); // 80264048
  cmps(c,0,(int32_t)c->r[3],0); // 8026404C
  if (!crb(c,0)) { goto L_8026405C; } // 80264050
  c->r[0]=0u+0xFFFFFFD6u; // 80264054
  goto L_80264060; // 80264058
L_8026405C:;
  c->r[0]=0u+0x00000000u; // 8026405C
L_80264060:;
  cmps(c,0,(int32_t)c->r[0],0); // 80264060
  if (!crb(c,0)) { goto L_8026406C; } // 80264064
  c->r[31]=c->r[0]|c->r[0]; // 80264068
L_8026406C:;
  c->r[3]=c->r[31]|c->r[31]; // 8026406C
L_80264070:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 80264070
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80264074
  c->r[30]=R32(c->r[1]+0x00000008u); // 80264078
  c->lr=c->r[0]; // 8026407C
  c->r[1]=c->r[1]+0x00000010u; // 80264080
  return; // 80264084
}

// NWC24iRequestShutdown
void f_80264088(Ctx* __restrict c) {
  trace_call(0x80264088u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80264088
  c->r[0]=c->lr; // 8026408C
  c->r[7]=0u+0x80600000u; // 80264090
  c->r[9]=0u+0x80260000u; // 80264094
  W32(c->r[1]+0x00000014u,c->r[0]); // 80264098
  c->r[5]=0u+0x80600000u; // 8026409C
  c->r[10]=c->r[4]|c->r[4]; // 802640A0
  c->r[7]=c->r[7]+0xFFFF9620u; // 802640A4
  W32(c->r[5]+0xFFFF9600u,c->r[3]); // 802640A8
  c->r[5]=c->r[5]+0xFFFF9600u; // 802640AC
  c->r[3]=R32(c->r[13]+0xFFFF8E10u); // 802640B0
  c->r[9]=c->r[9]+0x000042C0u; // 802640B4
  c->r[4]=0u+0x00000028u; // 802640B8
  c->r[6]=0u+0x00000020u; // 802640BC
  c->r[8]=0u+0x00000020u; // 802640C0
  c->lr=0x802640C8u; f_802A9BC0(c); // 802640C4
  cmps(c,0,(int32_t)c->r[3],0); // 802640C8
  if (!crb(c,0)) { goto L_802640D8; } // 802640CC
  c->r[3]=0u+0xFFFFFFD6u; // 802640D0
  goto L_802640E4; // 802640D4
L_802640D8:;
  c->r[0]=0u+0x00000001u; // 802640D8
  c->r[3]=0u+0x00000000u; // 802640DC
  W32(c->r[13]+0xFFFF9904u,c->r[0]); // 802640E0
L_802640E4:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 802640E4
  c->lr=c->r[0]; // 802640E8
  c->r[1]=c->r[1]+0x00000010u; // 802640EC
  return; // 802640F0
}

// NWC24Shutdown_
void f_802640F4(Ctx* __restrict c) {
  trace_call(0x802640F4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802640F4
  c->r[0]=c->lr; // 802640F8
  cmps(c,0,(int32_t)c->r[3],0); // 802640FC
  W32(c->r[1]+0x00000014u,c->r[0]); // 80264100
  if (crb(c,2)) { goto L_80264110; } // 80264104
  c->r[3]=0u+0x00000001u; // 80264108
  goto L_8026419C; // 8026410C
L_80264110:;
  c->r[0]=R32(c->r[13]+0xFFFF9910u); // 80264110
  cmps(c,0,(int32_t)c->r[0],0); // 80264114
  if (crb(c,2)) { goto L_8026417C; } // 80264118
  c->r[0]=R32(c->r[13]+0xFFFF9904u); // 8026411C
  cmps(c,0,(int32_t)c->r[0],0); // 80264120
  if (crb(c,2)) { goto L_80264130; } // 80264124
  c->r[3]=0u+0x00000000u; // 80264128
  goto L_8026419C; // 8026412C
L_80264130:;
  c->r[0]=R32(c->r[13]+0xFFFF9914u); // 80264130
  cmps(c,0,(int32_t)c->r[0],0); // 80264134
  if (crb(c,0)) { goto L_80264144; } // 80264138
  c->r[3]=0u+0x00000001u; // 8026413C
  goto L_8026419C; // 80264140
L_80264144:;
  c->r[3]=R32(c->r[13]+0xFFFF9900u); // 80264144
  cmps(c,0,(int32_t)c->r[3],0); // 80264148
  if (!crb(c,1)) { goto L_80264164; } // 8026414C
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 80264150
  c->r[3]=0u+0x00000000u; // 80264154
  W32(c->r[13]+0xFFFF9910u,c->r[3]); // 80264158
  W32(c->r[13]+0xFFFF9900u,c->r[0]); // 8026415C
  goto L_80264198; // 80264160
L_80264164:;
  c->r[3]=0u+0x80420000u; // 80264164
  c->r[3]=c->r[3]+0xFFFFFAC4u; // 80264168
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8026416C
  c->lr=0x80264174u; f_801CCA38(c); // 80264170
  c->r[3]=0u+0x00000001u; // 80264174
  goto L_8026419C; // 80264178
L_8026417C:;
  c->r[3]=c->r[4]|c->r[4]; // 8026417C
  c->r[4]=c->r[13]+0xFFFF9914u; // 80264180
  c->lr=0x80264188u; f_80264088(c); // 80264184
  cmps(c,0,(int32_t)c->r[3],0); // 80264188
  if (crb(c,0)) { goto L_80264198; } // 8026418C
  c->r[0]=0u+0x00000001u; // 80264190
  W32(c->r[13]+0xFFFF9910u,c->r[0]); // 80264194
L_80264198:;
  c->r[3]=0u+0x00000000u; // 80264198
L_8026419C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8026419C
  c->lr=c->r[0]; // 802641A0
  c->r[1]=c->r[1]+0x00000010u; // 802641A4
  return; // 802641A8
}

// fn_802641AC
void f_802641AC(Ctx* __restrict c) {
  trace_call(0x802641ACu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802641AC
  c->r[0]=c->lr; // 802641B0
  W32(c->r[1]+0x00000024u,c->r[0]); // 802641B4
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 802641B8
  W32(c->r[1]+0x00000018u,c->r[30]); // 802641BC
  W32(c->r[1]+0x00000014u,c->r[29]); // 802641C0
  c->r[29]=c->r[3]|c->r[3]; // 802641C4
  c->lr=0x802641CCu; f_80261398(c); // 802641C8
  cmps(c,0,(int32_t)c->r[3],0); // 802641CC
  if (!crb(c,2)) { goto L_802641DC; } // 802641D0
  c->r[3]=0u+0xFFFFFFFFu; // 802641D4
  goto L_802641E0; // 802641D8
L_802641DC:;
  c->r[3]=0u+0x00000000u; // 802641DC
L_802641E0:;
  cmps(c,0,(int32_t)c->r[3],0); // 802641E0
  if (!crb(c,0)) { goto L_802641EC; } // 802641E4
  goto L_802642A4; // 802641E8
L_802641EC:;
  c->r[3]=0u+0x80420000u; // 802641EC
  c->r[4]=0u+0x00000000u; // 802641F0
  c->r[3]=c->r[3]+0xFFFFFAF8u; // 802641F4
  c->lr=0x802641FCu; f_802A9360(c); // 802641F8
  cmps(c,0,(int32_t)c->r[3],0); // 802641FC
  c->r[30]=c->r[3]|c->r[3]; // 80264200
  if (!crb(c,0)) { goto L_80264220; } // 80264204
  cmps(c,0,(int32_t)c->r[3],-6); // 80264208
  if (!crb(c,2)) { goto L_80264218; } // 8026420C
  c->r[31]=0u+0xFFFFFFE3u; // 80264210
  goto L_80264224; // 80264214
L_80264218:;
  c->r[31]=0u+0xFFFFFFD6u; // 80264218
  goto L_80264224; // 8026421C
L_80264220:;
  c->r[31]=0u+0x00000000u; // 80264220
L_80264224:;
  cmps(c,0,(int32_t)c->r[31],0); // 80264224
  if (crb(c,0)) { goto L_802642A0; } // 80264228
  c->r[4]=0u+0x80600000u; // 8026422C
  c->r[7]=0u+0x80600000u; // 80264230
  W32(c->r[4]+0xFFFF9640u,c->r[29]); // 80264234
  c->r[5]=c->r[4]+0xFFFF9640u; // 80264238
  c->r[3]=c->r[30]|c->r[30]; // 8026423C
  c->r[7]=c->r[7]+0xFFFF9660u; // 80264240
  c->r[4]=0u+0x00000017u; // 80264244
  c->r[6]=0u+0x00000020u; // 80264248
  c->r[8]=0u+0x00000020u; // 8026424C
  c->lr=0x80264254u; f_802A9CF8(c); // 80264250
  cmps(c,0,(int32_t)c->r[3],0); // 80264254
  if (!crb(c,0)) { goto L_80264264; } // 80264258
  c->r[31]=0u+0xFFFFFFD6u; // 8026425C
  goto L_80264268; // 80264260
L_80264264:;
  c->r[31]=0u+0x00000000u; // 80264264
L_80264268:;
  cmps(c,0,(int32_t)c->r[31],0); // 80264268
  if (crb(c,0)) { goto L_80264278; } // 8026426C
  c->r[3]=0u+0x80600000u; // 80264270
  c->r[31]=R32(c->r[3]+0xFFFF9660u); // 80264274
L_80264278:;
  c->r[3]=c->r[30]|c->r[30]; // 80264278
  c->lr=0x80264280u; f_802A9540(c); // 8026427C
  cmps(c,0,(int32_t)c->r[3],0); // 80264280
  if (!crb(c,0)) { goto L_80264290; } // 80264284
  c->r[0]=0u+0xFFFFFFD6u; // 80264288
  goto L_80264294; // 8026428C
L_80264290:;
  c->r[0]=0u+0x00000000u; // 80264290
L_80264294:;
  cmps(c,0,(int32_t)c->r[31],0); // 80264294
  if (crb(c,0)) { goto L_802642A0; } // 80264298
  c->r[31]=c->r[0]|c->r[0]; // 8026429C
L_802642A0:;
  c->r[3]=c->r[31]|c->r[31]; // 802642A0
L_802642A4:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 802642A4
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 802642A8
  c->r[30]=R32(c->r[1]+0x00000018u); // 802642AC
  c->r[29]=R32(c->r[1]+0x00000014u); // 802642B0
  c->lr=c->r[0]; // 802642B4
  c->r[1]=c->r[1]+0x00000020u; // 802642B8
  return; // 802642BC
}

// CallbackAsyncIpc
void f_802642C0(Ctx* __restrict c) {
  trace_call(0x802642C0u);
  cmps(c,0,(int32_t)c->r[4],0); // 802642C0
  if (crb(c,2)) { goto L_802642CC; } // 802642C4
  W32(c->r[4]+0x00000000u,c->r[3]); // 802642C8
L_802642CC:;
  c->r[0]=0u+0x00000000u; // 802642CC
  c->r[3]=0u+0x00000000u; // 802642D0
  W32(c->r[13]+0xFFFF9904u,c->r[0]); // 802642D4
  return; // 802642D8
}

// __OSWriteNandbootInfo
void f_802642DC(Ctx* __restrict c) {
  trace_call(0x802642DCu);
  {uint32_t ea=c->r[1]+0xFFFFFF60u; W32(ea,c->r[1]); c->r[1]=ea;} // 802642DC
  c->r[0]=c->lr; // 802642E0
  c->r[8]=c->r[3]+0x00000004u; // 802642E4
  c->r[7]=0u+0x00000000u; // 802642E8
  W32(c->r[1]+0x000000A4u,c->r[0]); // 802642EC
  c->r[0]=0u+0x00000040u; // 802642F0
  W32(c->r[1]+0x0000009Cu,c->r[31]); // 802642F4
  c->r[31]=c->r[3]|c->r[3]; // 802642F8
  c->ctr=c->r[0]; // 802642FC
L_80264300:;
  c->r[4]=R32(c->r[8]+0x00000000u); // 80264300
  c->r[0]=R32(c->r[8]+0x00000004u); // 80264304
  c->r[7]=c->r[7]+c->r[4]; // 80264308
  c->r[4]=R32(c->r[8]+0x00000008u); // 8026430C
  c->r[7]=c->r[7]+c->r[0]; // 80264310
  c->r[0]=R32(c->r[8]+0x0000000Cu); // 80264314
  c->r[7]=c->r[7]+c->r[4]; // 80264318
  c->r[4]=R32(c->r[8]+0x00000010u); // 8026431C
  c->r[7]=c->r[7]+c->r[0]; // 80264320
  c->r[0]=R32(c->r[8]+0x00000014u); // 80264324
  c->r[7]=c->r[7]+c->r[4]; // 80264328
  c->r[4]=R32(c->r[8]+0x00000018u); // 8026432C
  c->r[7]=c->r[7]+c->r[0]; // 80264330
  c->r[0]=R32(c->r[8]+0x0000001Cu); // 80264334
  c->r[7]=c->r[7]+c->r[4]; // 80264338
  c->r[4]=R32(c->r[8]+0x00000020u); // 8026433C
  c->r[7]=c->r[7]+c->r[0]; // 80264340
  c->r[0]=R32(c->r[8]+0x00000024u); // 80264344
  c->r[7]=c->r[7]+c->r[4]; // 80264348
  c->r[4]=R32(c->r[8]+0x00000028u); // 8026434C
  c->r[7]=c->r[7]+c->r[0]; // 80264350
  c->r[0]=R32(c->r[8]+0x0000002Cu); // 80264354
  c->r[7]=c->r[7]+c->r[4]; // 80264358
  c->r[4]=R32(c->r[8]+0x00000030u); // 8026435C
  c->r[7]=c->r[7]+c->r[0]; // 80264360
  c->r[0]=R32(c->r[8]+0x00000034u); // 80264364
  c->r[7]=c->r[7]+c->r[4]; // 80264368
  c->r[4]=R32(c->r[8]+0x00000038u); // 8026436C
  c->r[7]=c->r[7]+c->r[0]; // 80264370
  c->r[0]=R32(c->r[8]+0x0000003Cu); // 80264374
  c->r[7]=c->r[7]+c->r[4]; // 80264378
  c->r[8]=c->r[8]+0x00000040u; // 8026437C
  c->r[7]=c->r[7]+c->r[0]; // 80264380
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80264300; } // 80264384
  c->r[0]=R32(c->r[8]+0x00000000u); // 80264388
  c->r[6]=0u+0x80420000u; // 8026438C
  c->r[5]=R32(c->r[8]+0x00000004u); // 80264390
  c->r[4]=c->r[1]+0x00000008u; // 80264394
  c->r[7]=c->r[7]+c->r[0]; // 80264398
  c->r[0]=R32(c->r[8]+0x00000008u); // 8026439C
  c->r[7]=c->r[7]+c->r[5]; // 802643A0
  c->r[5]=R32(c->r[8]+0x0000000Cu); // 802643A4
  c->r[7]=c->r[7]+c->r[0]; // 802643A8
  c->r[0]=R32(c->r[8]+0x00000010u); // 802643AC
  c->r[7]=c->r[7]+c->r[5]; // 802643B0
  c->r[5]=R32(c->r[8]+0x00000014u); // 802643B4
  c->r[7]=c->r[7]+c->r[0]; // 802643B8
  c->r[0]=R32(c->r[8]+0x00000018u); // 802643BC
  c->r[7]=c->r[7]+c->r[5]; // 802643C0
  c->r[5]=0u+0x00000002u; // 802643C4
  c->r[7]=c->r[7]+c->r[0]; // 802643C8
  W32(c->r[3]+0x00000000u,c->r[7]); // 802643CC
  c->r[3]=c->r[6]+0xFFFFFB10u; // 802643D0
  c->lr=0x802643D8u; f_802AB920(c); // 802643D4
  cmps(c,0,(int32_t)c->r[3],0); // 802643D8
  if (!crb(c,2)) { goto L_8026441C; } // 802643DC
  c->r[4]=c->r[31]|c->r[31]; // 802643E0
  c->r[3]=c->r[1]+0x00000008u; // 802643E4
  c->r[5]=0u+0x00001020u; // 802643E8
  c->lr=0x802643F0u; f_802AAD58(c); // 802643EC
  cmpu(c,0,c->r[3],0x00001020u); // 802643F0
  if (crb(c,2)) { goto L_80264408; } // 802643F4
  c->r[3]=c->r[1]+0x00000008u; // 802643F8
  c->lr=0x80264400u; f_802ABB14(c); // 802643FC
  c->r[3]=0u+0x00000000u; // 80264400
  goto L_80264420; // 80264404
L_80264408:;
  c->r[3]=c->r[1]+0x00000008u; // 80264408
  c->lr=0x80264410u; f_802ABB14(c); // 8026440C
  c->r[0]=cntlz(c->r[3]); // 80264410
  c->r[3]=rotl(c->r[0],27)&0x07FFFFFFu; // 80264414
  goto L_80264420; // 80264418
L_8026441C:;
  c->r[3]=0u+0x00000000u; // 8026441C
L_80264420:;
  c->r[0]=R32(c->r[1]+0x000000A4u); // 80264420
  c->r[31]=R32(c->r[1]+0x0000009Cu); // 80264424
  c->lr=c->r[0]; // 80264428
  c->r[1]=c->r[1]+0x000000A0u; // 8026442C
  return; // 80264430
}

// fn_80264434
void f_80264434(Ctx* __restrict c) {
  trace_call(0x80264434u);
  {uint32_t ea=c->r[1]+0xFFFFFF60u; W32(ea,c->r[1]); c->r[1]=ea;} // 80264434
  c->r[0]=c->lr; // 80264438
  c->r[4]=0u+0x80420000u; // 8026443C
  c->r[5]=0u+0x00000001u; // 80264440
  W32(c->r[1]+0x000000A4u,c->r[0]); // 80264444
  W32(c->r[1]+0x0000009Cu,c->r[31]); // 80264448
  c->r[31]=c->r[3]|c->r[3]; // 8026444C
  c->r[3]=c->r[4]+0xFFFFFB10u; // 80264450
  c->r[4]=c->r[1]+0x00000008u; // 80264454
  W32(c->r[1]+0x00000098u,c->r[30]); // 80264458
  c->lr=0x80264460u; f_802AB920(c); // 8026445C
  cmps(c,0,(int32_t)c->r[3],0); // 80264460
  if (!crb(c,2)) { goto L_802644A4; } // 80264464
  c->r[4]=c->r[31]|c->r[31]; // 80264468
  c->r[3]=c->r[1]+0x00000008u; // 8026446C
  c->r[5]=0u+0x00001020u; // 80264470
  c->lr=0x80264478u; f_802AAC78(c); // 80264474
  c->r[30]=c->r[3]|c->r[3]; // 80264478
  c->r[3]=c->r[1]+0x00000008u; // 8026447C
  c->lr=0x80264484u; f_802ABB14(c); // 80264480
  cmpu(c,0,c->r[30],0x00001020u); // 80264484
  if (crb(c,2)) { goto L_802644BC; } // 80264488
  c->r[3]=c->r[31]|c->r[31]; // 8026448C
  c->r[4]=0u+0x00000000u; // 80264490
  c->r[5]=0u+0x00001020u; // 80264494
  c->lr=0x8026449Cu; f_800043EC(c); // 80264498
  c->r[3]=0u+0x00000000u; // 8026449C
  goto L_802645B4; // 802644A0
L_802644A4:;
  c->r[3]=c->r[31]|c->r[31]; // 802644A4
  c->r[4]=0u+0x00000000u; // 802644A8
  c->r[5]=0u+0x00001020u; // 802644AC
  c->lr=0x802644B4u; f_800043EC(c); // 802644B0
  c->r[3]=0u+0x00000000u; // 802644B4
  goto L_802645B4; // 802644B8
L_802644BC:;
  c->r[0]=0u+0x00000040u; // 802644BC
  c->r[5]=c->r[31]+0x00000004u; // 802644C0
  c->r[4]=0u+0x00000000u; // 802644C4
  c->ctr=c->r[0]; // 802644C8
L_802644CC:;
  c->r[3]=R32(c->r[5]+0x00000000u); // 802644CC
  c->r[0]=R32(c->r[5]+0x00000004u); // 802644D0
  c->r[4]=c->r[4]+c->r[3]; // 802644D4
  c->r[3]=R32(c->r[5]+0x00000008u); // 802644D8
  c->r[4]=c->r[4]+c->r[0]; // 802644DC
  c->r[0]=R32(c->r[5]+0x0000000Cu); // 802644E0
  c->r[4]=c->r[4]+c->r[3]; // 802644E4
  c->r[3]=R32(c->r[5]+0x00000010u); // 802644E8
  c->r[4]=c->r[4]+c->r[0]; // 802644EC
  c->r[0]=R32(c->r[5]+0x00000014u); // 802644F0
  c->r[4]=c->r[4]+c->r[3]; // 802644F4
  c->r[3]=R32(c->r[5]+0x00000018u); // 802644F8
  c->r[4]=c->r[4]+c->r[0]; // 802644FC
  c->r[0]=R32(c->r[5]+0x0000001Cu); // 80264500
  c->r[4]=c->r[4]+c->r[3]; // 80264504
  c->r[3]=R32(c->r[5]+0x00000020u); // 80264508
  c->r[4]=c->r[4]+c->r[0]; // 8026450C
  c->r[0]=R32(c->r[5]+0x00000024u); // 80264510
  c->r[4]=c->r[4]+c->r[3]; // 80264514
  c->r[3]=R32(c->r[5]+0x00000028u); // 80264518
  c->r[4]=c->r[4]+c->r[0]; // 8026451C
  c->r[0]=R32(c->r[5]+0x0000002Cu); // 80264520
  c->r[4]=c->r[4]+c->r[3]; // 80264524
  c->r[3]=R32(c->r[5]+0x00000030u); // 80264528
  c->r[4]=c->r[4]+c->r[0]; // 8026452C
  c->r[0]=R32(c->r[5]+0x00000034u); // 80264530
  c->r[4]=c->r[4]+c->r[3]; // 80264534
  c->r[3]=R32(c->r[5]+0x00000038u); // 80264538
  c->r[4]=c->r[4]+c->r[0]; // 8026453C
  c->r[0]=R32(c->r[5]+0x0000003Cu); // 80264540
  c->r[4]=c->r[4]+c->r[3]; // 80264544
  c->r[5]=c->r[5]+0x00000040u; // 80264548
  c->r[4]=c->r[4]+c->r[0]; // 8026454C
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_802644CC; } // 80264550
  c->r[3]=R32(c->r[5]+0x00000000u); // 80264554
  c->r[0]=R32(c->r[5]+0x00000004u); // 80264558
  c->r[4]=c->r[4]+c->r[3]; // 8026455C
  c->r[3]=R32(c->r[5]+0x00000008u); // 80264560
  c->r[4]=c->r[4]+c->r[0]; // 80264564
  c->r[0]=R32(c->r[5]+0x0000000Cu); // 80264568
  c->r[4]=c->r[4]+c->r[3]; // 8026456C
  c->r[3]=R32(c->r[5]+0x00000010u); // 80264570
  c->r[4]=c->r[4]+c->r[0]; // 80264574
  c->r[0]=R32(c->r[5]+0x00000014u); // 80264578
  c->r[4]=c->r[4]+c->r[3]; // 8026457C
  c->r[3]=R32(c->r[5]+0x00000018u); // 80264580
  c->r[4]=c->r[4]+c->r[0]; // 80264584
  c->r[0]=R32(c->r[31]+0x00000000u); // 80264588
  c->r[4]=c->r[4]+c->r[3]; // 8026458C
  cmpu(c,0,c->r[0],c->r[4]); // 80264590
  if (crb(c,2)) { goto L_802645B0; } // 80264594
  c->r[3]=c->r[31]|c->r[31]; // 80264598
  c->r[4]=0u+0x00000000u; // 8026459C
  c->r[5]=0u+0x00001020u; // 802645A0
  c->lr=0x802645A8u; f_800043EC(c); // 802645A4
  c->r[3]=0u+0x00000000u; // 802645A8
  goto L_802645B4; // 802645AC
L_802645B0:;
  c->r[3]=0u+0x00000001u; // 802645B0
L_802645B4:;
  c->r[0]=R32(c->r[1]+0x000000A4u); // 802645B4
  c->r[31]=R32(c->r[1]+0x0000009Cu); // 802645B8
  c->r[30]=R32(c->r[1]+0x00000098u); // 802645BC
  c->lr=c->r[0]; // 802645C0
  c->r[1]=c->r[1]+0x000000A0u; // 802645C4
  return; // 802645C8
}

// __init_user
void f_802645CC(Ctx* __restrict c) {
  trace_call(0x802645CCu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802645CC
  c->r[0]=c->lr; // 802645D0
  W32(c->r[1]+0x00000014u,c->r[0]); // 802645D4
  c->lr=0x802645DCu; f_802645EC(c); // 802645D8
  c->r[0]=R32(c->r[1]+0x00000014u); // 802645DC
  c->lr=c->r[0]; // 802645E0
  c->r[1]=c->r[1]+0x00000010u; // 802645E4
  return; // 802645E8
}

// __init_cpp
void f_802645EC(Ctx* __restrict c) {
  trace_call(0x802645ECu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802645EC
  c->r[0]=c->lr; // 802645F0
  W32(c->r[1]+0x00000014u,c->r[0]); // 802645F4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 802645F8
  c->r[31]=0u+0x803E0000u; // 802645FC
  c->r[31]=c->r[31]+0xFFFF8460u; // 80264600
  goto L_80264614; // 80264604
L_80264608:;
  c->ctr=c->r[12]; // 80264608
  if (true) { c->lr=0x80264610u; dispatch(c,c->ctr); } // 8026460C
  c->r[31]=c->r[31]+0x00000004u; // 80264610
L_80264614:;
  c->r[12]=R32(c->r[31]+0x00000000u); // 80264614
  cmps(c,0,(int32_t)c->r[12],0); // 80264618
  if (!crb(c,2)) { IRQCHK(c); goto L_80264608; } // 8026461C
  c->r[0]=R32(c->r[1]+0x00000014u); // 80264620
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80264624
  c->lr=c->r[0]; // 80264628
  c->r[1]=c->r[1]+0x00000010u; // 8026462C
  return; // 80264630
}

// exit
void f_80264634(Ctx* __restrict c) {
  trace_call(0x80264634u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80264634
  c->r[0]=c->lr; // 80264638
  W32(c->r[1]+0x00000014u,c->r[0]); // 8026463C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80264640
  c->r[31]=0u+0x803E0000u; // 80264644
  c->r[31]=c->r[31]+0xFFFF8880u; // 80264648
  goto L_8026465C; // 8026464C
L_80264650:;
  c->ctr=c->r[12]; // 80264650
  if (true) { c->lr=0x80264658u; dispatch(c,c->ctr); } // 80264654
  c->r[31]=c->r[31]+0x00000004u; // 80264658
L_8026465C:;
  c->r[12]=R32(c->r[31]+0x00000000u); // 8026465C
  cmps(c,0,(int32_t)c->r[12],0); // 80264660
  if (!crb(c,2)) { IRQCHK(c); goto L_80264650; } // 80264664
  c->lr=0x8026466Cu; f_80257E40(c); // 80264668
  c->r[0]=R32(c->r[1]+0x00000014u); // 8026466C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80264670
  c->lr=c->r[0]; // 80264674
  c->r[1]=c->r[1]+0x00000010u; // 80264678
  return; // 8026467C
}

// PSMTXIdentity
void f_80264680(Ctx* __restrict c) {
  trace_call(0x80264680u);
  {uint32_t ea=c->r[2]+0xFFFFDACCu; c->f[0]=c->ps1[0]=RF32(ea);} // 80264680
  {uint32_t ea=c->r[2]+0xFFFFDAC8u; c->f[1]=c->ps1[1]=RF32(ea);} // 80264684
  {uint32_t ea=c->r[3]+0x00000008u; psq_store(c,0,ea,0,0);} // 80264688
  {double t0=S(c->ps1[1]), t1=S(c->f[0]); c->f[2]=t0; c->ps1[2]=t1;} // 8026468C
  {double t0=S(c->f[0]), t1=S(c->ps1[1]); c->f[1]=t0; c->ps1[1]=t1;} // 80264690
  {uint32_t ea=c->r[3]+0x00000018u; psq_store(c,0,ea,0,0);} // 80264694
  {uint32_t ea=c->r[3]+0x00000020u; psq_store(c,0,ea,0,0);} // 80264698
  {uint32_t ea=c->r[3]+0x00000010u; psq_store(c,1,ea,0,0);} // 8026469C
  {uint32_t ea=c->r[3]+0x00000000u; psq_store(c,2,ea,0,0);} // 802646A0
  {uint32_t ea=c->r[3]+0x00000028u; psq_store(c,2,ea,0,0);} // 802646A4
  return; // 802646A8
}

// PSMTXCopy
void f_802646AC(Ctx* __restrict c) {
  trace_call(0x802646ACu);
  {uint32_t ea=c->r[3]+0x00000000u; psq_load(c,0,ea,0,0);} // 802646AC
  {uint32_t ea=c->r[4]+0x00000000u; psq_store(c,0,ea,0,0);} // 802646B0
  {uint32_t ea=c->r[3]+0x00000008u; psq_load(c,1,ea,0,0);} // 802646B4
  {uint32_t ea=c->r[4]+0x00000008u; psq_store(c,1,ea,0,0);} // 802646B8
  {uint32_t ea=c->r[3]+0x00000010u; psq_load(c,2,ea,0,0);} // 802646BC
  {uint32_t ea=c->r[4]+0x00000010u; psq_store(c,2,ea,0,0);} // 802646C0
  {uint32_t ea=c->r[3]+0x00000018u; psq_load(c,3,ea,0,0);} // 802646C4
  {uint32_t ea=c->r[4]+0x00000018u; psq_store(c,3,ea,0,0);} // 802646C8
  {uint32_t ea=c->r[3]+0x00000020u; psq_load(c,4,ea,0,0);} // 802646CC
  {uint32_t ea=c->r[4]+0x00000020u; psq_store(c,4,ea,0,0);} // 802646D0
  {uint32_t ea=c->r[3]+0x00000028u; psq_load(c,5,ea,0,0);} // 802646D4
  {uint32_t ea=c->r[4]+0x00000028u; psq_store(c,5,ea,0,0);} // 802646D8
  return; // 802646DC
}

// PSMTXConcat
void f_802646E0(Ctx* __restrict c) {
  trace_call(0x802646E0u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802646E0
  {uint32_t ea=c->r[3]+0x00000000u; psq_load(c,0,ea,0,0);} // 802646E4
  {uint32_t ea=c->r[1]+0x00000008u; WF64(ea,c->f[14]);} // 802646E8
  {uint32_t ea=c->r[4]+0x00000000u; psq_load(c,6,ea,0,0);} // 802646EC
  c->r[6]=0u+0x806C0000u; // 802646F0
  {uint32_t ea=c->r[4]+0x00000008u; psq_load(c,7,ea,0,0);} // 802646F4
  {uint32_t ea=c->r[1]+0x00000010u; WF64(ea,c->f[15]);} // 802646F8
  c->r[6]=c->r[6]+0x00003438u; // 802646FC
  {uint32_t ea=c->r[1]+0x00000028u; WF64(ea,c->f[31]);} // 80264700
  {uint32_t ea=c->r[4]+0x00000010u; psq_load(c,8,ea,0,0);} // 80264704
  {double t0=S(c->f[6]*c->f[0]), t1=S(c->ps1[6]*c->f[0]); c->f[12]=t0; c->ps1[12]=t1;} // 80264708
  {uint32_t ea=c->r[3]+0x00000010u; psq_load(c,2,ea,0,0);} // 8026470C
  {double t0=S(c->f[7]*c->f[0]), t1=S(c->ps1[7]*c->f[0]); c->f[13]=t0; c->ps1[13]=t1;} // 80264710
  {uint32_t ea=c->r[6]+0x00000000u; psq_load(c,31,ea,0,0);} // 80264714
  {double t0=S(c->f[6]*c->f[2]), t1=S(c->ps1[6]*c->f[2]); c->f[14]=t0; c->ps1[14]=t1;} // 80264718
  {uint32_t ea=c->r[4]+0x00000018u; psq_load(c,9,ea,0,0);} // 8026471C
  {double t0=S(c->f[7]*c->f[2]), t1=S(c->ps1[7]*c->f[2]); c->f[15]=t0; c->ps1[15]=t1;} // 80264720
  {uint32_t ea=c->r[3]+0x00000008u; psq_load(c,1,ea,0,0);} // 80264724
  {double t0=S(std::fma(c->f[8],c->ps1[0],c->f[12])), t1=S(std::fma(c->ps1[8],c->ps1[0],c->ps1[12])); c->f[12]=t0; c->ps1[12]=t1;} // 80264728
  {uint32_t ea=c->r[3]+0x00000018u; psq_load(c,3,ea,0,0);} // 8026472C
  {double t0=S(std::fma(c->f[8],c->ps1[2],c->f[14])), t1=S(std::fma(c->ps1[8],c->ps1[2],c->ps1[14])); c->f[14]=t0; c->ps1[14]=t1;} // 80264730
  {uint32_t ea=c->r[4]+0x00000020u; psq_load(c,10,ea,0,0);} // 80264734
  {double t0=S(std::fma(c->f[9],c->ps1[0],c->f[13])), t1=S(std::fma(c->ps1[9],c->ps1[0],c->ps1[13])); c->f[13]=t0; c->ps1[13]=t1;} // 80264738
  {uint32_t ea=c->r[4]+0x00000028u; psq_load(c,11,ea,0,0);} // 8026473C
  {double t0=S(std::fma(c->f[9],c->ps1[2],c->f[15])), t1=S(std::fma(c->ps1[9],c->ps1[2],c->ps1[15])); c->f[15]=t0; c->ps1[15]=t1;} // 80264740
  {uint32_t ea=c->r[3]+0x00000020u; psq_load(c,4,ea,0,0);} // 80264744
  {uint32_t ea=c->r[3]+0x00000028u; psq_load(c,5,ea,0,0);} // 80264748
  {double t0=S(std::fma(c->f[10],c->f[1],c->f[12])), t1=S(std::fma(c->ps1[10],c->f[1],c->ps1[12])); c->f[12]=t0; c->ps1[12]=t1;} // 8026474C
  {double t0=S(std::fma(c->f[11],c->f[1],c->f[13])), t1=S(std::fma(c->ps1[11],c->f[1],c->ps1[13])); c->f[13]=t0; c->ps1[13]=t1;} // 80264750
  {double t0=S(std::fma(c->f[10],c->f[3],c->f[14])), t1=S(std::fma(c->ps1[10],c->f[3],c->ps1[14])); c->f[14]=t0; c->ps1[14]=t1;} // 80264754
  {double t0=S(std::fma(c->f[11],c->f[3],c->f[15])), t1=S(std::fma(c->ps1[11],c->f[3],c->ps1[15])); c->f[15]=t0; c->ps1[15]=t1;} // 80264758
  {uint32_t ea=c->r[5]+0x00000000u; psq_store(c,12,ea,0,0);} // 8026475C
  {double t0=S(c->f[6]*c->f[4]), t1=S(c->ps1[6]*c->f[4]); c->f[2]=t0; c->ps1[2]=t1;} // 80264760
  {double t0=S(std::fma(c->f[31],c->ps1[1],c->f[13])), t1=S(std::fma(c->ps1[31],c->ps1[1],c->ps1[13])); c->f[13]=t0; c->ps1[13]=t1;} // 80264764
  {double t0=S(c->f[7]*c->f[4]), t1=S(c->ps1[7]*c->f[4]); c->f[0]=t0; c->ps1[0]=t1;} // 80264768
  {uint32_t ea=c->r[5]+0x00000010u; psq_store(c,14,ea,0,0);} // 8026476C
  {double t0=S(std::fma(c->f[31],c->ps1[3],c->f[15])), t1=S(std::fma(c->ps1[31],c->ps1[3],c->ps1[15])); c->f[15]=t0; c->ps1[15]=t1;} // 80264770
  {uint32_t ea=c->r[5]+0x00000008u; psq_store(c,13,ea,0,0);} // 80264774
  {double t0=S(std::fma(c->f[8],c->ps1[4],c->f[2])), t1=S(std::fma(c->ps1[8],c->ps1[4],c->ps1[2])); c->f[2]=t0; c->ps1[2]=t1;} // 80264778
  {double t0=S(std::fma(c->f[9],c->ps1[4],c->f[0])), t1=S(std::fma(c->ps1[9],c->ps1[4],c->ps1[0])); c->f[0]=t0; c->ps1[0]=t1;} // 8026477C
  {double t0=S(std::fma(c->f[10],c->f[5],c->f[2])), t1=S(std::fma(c->ps1[10],c->f[5],c->ps1[2])); c->f[2]=t0; c->ps1[2]=t1;} // 80264780
  {uint32_t ea=c->r[1]+0x00000008u; c->f[14]=RF64(ea);} // 80264784
  {uint32_t ea=c->r[5]+0x00000018u; psq_store(c,15,ea,0,0);} // 80264788
  {double t0=S(std::fma(c->f[11],c->f[5],c->f[0])), t1=S(std::fma(c->ps1[11],c->f[5],c->ps1[0])); c->f[0]=t0; c->ps1[0]=t1;} // 8026478C
  {uint32_t ea=c->r[5]+0x00000020u; psq_store(c,2,ea,0,0);} // 80264790
  {double t0=S(std::fma(c->f[31],c->ps1[5],c->f[0])), t1=S(std::fma(c->ps1[31],c->ps1[5],c->ps1[0])); c->f[0]=t0; c->ps1[0]=t1;} // 80264794
  {uint32_t ea=c->r[1]+0x00000010u; c->f[15]=RF64(ea);} // 80264798
  {uint32_t ea=c->r[5]+0x00000028u; psq_store(c,0,ea,0,0);} // 8026479C
  {uint32_t ea=c->r[1]+0x00000028u; c->f[31]=RF64(ea);} // 802647A0
  c->r[1]=c->r[1]+0x00000040u; // 802647A4
  return; // 802647A8
}

// PSMTXConcatArray
void f_802647AC(Ctx* __restrict c) {
  trace_call(0x802647ACu);
  {uint32_t ea=c->r[1]+0xFFFFFFA0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802647AC
  {uint32_t ea=c->r[1]+0x00000050u; WF64(ea,c->f[31]);} // 802647B0
  {uint32_t ea=c->r[1]+0x00000058u; psq_store(c,31,ea,0,0);} // 802647B4
  {uint32_t ea=c->r[1]+0x00000040u; WF64(ea,c->f[30]);} // 802647B8
  {uint32_t ea=c->r[1]+0x00000048u; psq_store(c,30,ea,0,0);} // 802647BC
  {uint32_t ea=c->r[1]+0x00000030u; WF64(ea,c->f[29]);} // 802647C0
  {uint32_t ea=c->r[1]+0x00000038u; psq_store(c,29,ea,0,0);} // 802647C4
  {uint32_t ea=c->r[1]+0x00000020u; WF64(ea,c->f[28]);} // 802647C8
  {uint32_t ea=c->r[1]+0x00000028u; psq_store(c,28,ea,0,0);} // 802647CC
  {uint32_t ea=c->r[1]+0x00000010u; WF64(ea,c->f[27]);} // 802647D0
  {uint32_t ea=c->r[1]+0x00000018u; psq_store(c,27,ea,0,0);} // 802647D4
  c->r[0]=c->r[6]+0xFFFFFFFFu; // 802647D8
  {uint32_t ea=c->r[3]+0x00000000u; psq_load(c,0,ea,0,0);} // 802647DC
  {uint32_t ea=c->r[3]+0x00000008u; psq_load(c,1,ea,0,0);} // 802647E0
  c->r[6]=c->r[13]+0xFFFF8E18u; // 802647E4
  {uint32_t ea=c->r[3]+0x00000010u; psq_load(c,2,ea,0,0);} // 802647E8
  {uint32_t ea=c->r[3]+0x00000018u; psq_load(c,3,ea,0,0);} // 802647EC
  {uint32_t ea=c->r[3]+0x00000020u; psq_load(c,4,ea,0,0);} // 802647F0
  {uint32_t ea=c->r[3]+0x00000028u; psq_load(c,5,ea,0,0);} // 802647F4
  c->ctr=c->r[0]; // 802647F8
  {uint32_t ea=c->r[4]+0x00000000u; psq_load(c,6,ea,0,0);} // 802647FC
  {uint32_t ea=c->r[4]+0x00000008u; psq_load(c,7,ea,0,0);} // 80264800
  {double t0=S(c->f[6]*c->f[0]), t1=S(c->ps1[6]*c->f[0]); c->f[12]=t0; c->ps1[12]=t1;} // 80264804
  {uint32_t ea=c->r[4]+0x00000010u; psq_load(c,8,ea,0,0);} // 80264808
  {double t0=S(c->f[6]*c->f[2]), t1=S(c->ps1[6]*c->f[2]); c->f[31]=t0; c->ps1[31]=t1;} // 8026480C
  {uint32_t ea=c->r[4]+0x00000020u; psq_load(c,10,ea,0,0);} // 80264810
  {double t0=S(c->f[6]*c->f[4]), t1=S(c->ps1[6]*c->f[4]); c->f[29]=t0; c->ps1[29]=t1;} // 80264814
  {uint32_t ea=c->r[4]+0x00000018u; psq_load(c,9,ea,0,0);} // 80264818
  {double t0=S(std::fma(c->f[8],c->ps1[0],c->f[12])), t1=S(std::fma(c->ps1[8],c->ps1[0],c->ps1[12])); c->f[12]=t0; c->ps1[12]=t1;} // 8026481C
  {uint32_t ea=c->r[6]+0x00000000u; psq_load(c,27,ea,0,0);} // 80264820
  {double t0=S(std::fma(c->f[8],c->ps1[2],c->f[31])), t1=S(std::fma(c->ps1[8],c->ps1[2],c->ps1[31])); c->f[31]=t0; c->ps1[31]=t1;} // 80264824
  {uint32_t ea=c->r[4]+0x00000028u; psq_load(c,11,ea,0,0);} // 80264828
  {double t0=S(std::fma(c->f[8],c->ps1[4],c->f[29])), t1=S(std::fma(c->ps1[8],c->ps1[4],c->ps1[29])); c->f[29]=t0; c->ps1[29]=t1;} // 8026482C
  {double t0=S(c->f[7]*c->f[0]), t1=S(c->ps1[7]*c->f[0]); c->f[13]=t0; c->ps1[13]=t1;} // 80264830
  {double t0=S(c->f[7]*c->f[2]), t1=S(c->ps1[7]*c->f[2]); c->f[30]=t0; c->ps1[30]=t1;} // 80264834
  {double t0=S(c->f[7]*c->f[4]), t1=S(c->ps1[7]*c->f[4]); c->f[28]=t0; c->ps1[28]=t1;} // 80264838
  {double t0=S(std::fma(c->f[10],c->f[1],c->f[12])), t1=S(std::fma(c->ps1[10],c->f[1],c->ps1[12])); c->f[12]=t0; c->ps1[12]=t1;} // 8026483C
  {double t0=S(std::fma(c->f[10],c->f[3],c->f[31])), t1=S(std::fma(c->ps1[10],c->f[3],c->ps1[31])); c->f[31]=t0; c->ps1[31]=t1;} // 80264840
  {double t0=S(std::fma(c->f[10],c->f[5],c->f[29])), t1=S(std::fma(c->ps1[10],c->f[5],c->ps1[29])); c->f[29]=t0; c->ps1[29]=t1;} // 80264844
  {double t0=S(std::fma(c->f[9],c->ps1[0],c->f[13])), t1=S(std::fma(c->ps1[9],c->ps1[0],c->ps1[13])); c->f[13]=t0; c->ps1[13]=t1;} // 80264848
  {uint32_t ea=c->r[5]+0x00000000u; psq_store(c,12,ea,0,0);} // 8026484C
  {double t0=S(std::fma(c->f[9],c->ps1[2],c->f[30])), t1=S(std::fma(c->ps1[9],c->ps1[2],c->ps1[30])); c->f[30]=t0; c->ps1[30]=t1;} // 80264850
  {double t0=S(std::fma(c->f[9],c->ps1[4],c->f[28])), t1=S(std::fma(c->ps1[9],c->ps1[4],c->ps1[28])); c->f[28]=t0; c->ps1[28]=t1;} // 80264854
  {uint32_t ea=c->r[5]+0x00000010u; psq_store(c,31,ea,0,0);} // 80264858
L_8026485C:;
  {double t0=S(std::fma(c->f[11],c->f[1],c->f[13])), t1=S(std::fma(c->ps1[11],c->f[1],c->ps1[13])); c->f[13]=t0; c->ps1[13]=t1;} // 8026485C
  {uint32_t ea=c->r[4]+0x00000030u; psq_load(c,6,ea,0,0);} // 80264860
  {double t0=S(std::fma(c->f[11],c->f[3],c->f[30])), t1=S(std::fma(c->ps1[11],c->f[3],c->ps1[30])); c->f[30]=t0; c->ps1[30]=t1;} // 80264864
  {uint32_t ea=c->r[5]+0x00000020u; psq_store(c,29,ea,0,0);} // 80264868
  {double t0=S(std::fma(c->f[11],c->f[5],c->f[28])), t1=S(std::fma(c->ps1[11],c->f[5],c->ps1[28])); c->f[28]=t0; c->ps1[28]=t1;} // 8026486C
  {uint32_t ea=c->r[4]+0x00000040u; psq_load(c,8,ea,0,0);} // 80264870
  {double t0=S(std::fma(c->f[27],c->f[1],c->f[13])), t1=S(std::fma(c->ps1[27],c->ps1[1],c->ps1[13])); c->f[13]=t0; c->ps1[13]=t1;} // 80264874
  {uint32_t ea=c->r[4]+0x00000050u; psq_load(c,10,ea,0,0);} // 80264878
  {double t0=S(c->f[6]*c->f[0]), t1=S(c->ps1[6]*c->f[0]); c->f[12]=t0; c->ps1[12]=t1;} // 8026487C
  {uint32_t ea=c->r[4]+0x00000038u; psq_load(c,7,ea,0,0);} // 80264880
  {double t0=S(c->f[6]*c->f[2]), t1=S(c->ps1[6]*c->f[2]); c->f[31]=t0; c->ps1[31]=t1;} // 80264884
  {uint32_t ea=c->r[4]+0x00000048u; psq_load(c,9,ea,0,0);} // 80264888
  {uint32_t ea=c->r[5]+0x00000008u; psq_store(c,13,ea,0,0);} // 8026488C
  {double t0=S(std::fma(c->f[27],c->f[3],c->f[30])), t1=S(std::fma(c->ps1[27],c->ps1[3],c->ps1[30])); c->f[30]=t0; c->ps1[30]=t1;} // 80264890
  {double t0=S(std::fma(c->f[8],c->ps1[0],c->f[12])), t1=S(std::fma(c->ps1[8],c->ps1[0],c->ps1[12])); c->f[12]=t0; c->ps1[12]=t1;} // 80264894
  {uint32_t ea=c->r[4]+0x00000058u; psq_load(c,11,ea,0,0);} // 80264898
  {double t0=S(c->f[6]*c->f[4]), t1=S(c->ps1[6]*c->f[4]); c->f[29]=t0; c->ps1[29]=t1;} // 8026489C
  c->r[4]=c->r[4]+0x00000030u; // 802648A0
  {uint32_t ea=c->r[5]+0x00000018u; psq_store(c,30,ea,0,0);} // 802648A4
  {double t0=S(std::fma(c->f[27],c->f[5],c->f[28])), t1=S(std::fma(c->ps1[27],c->ps1[5],c->ps1[28])); c->f[28]=t0; c->ps1[28]=t1;} // 802648A8
  {double t0=S(std::fma(c->f[8],c->ps1[2],c->f[31])), t1=S(std::fma(c->ps1[8],c->ps1[2],c->ps1[31])); c->f[31]=t0; c->ps1[31]=t1;} // 802648AC
  {double t0=S(std::fma(c->f[8],c->ps1[4],c->f[29])), t1=S(std::fma(c->ps1[8],c->ps1[4],c->ps1[29])); c->f[29]=t0; c->ps1[29]=t1;} // 802648B0
  {uint32_t ea=c->r[5]+0x00000028u; psq_store(c,28,ea,0,0);} // 802648B4
  {double t0=S(std::fma(c->f[10],c->f[1],c->f[12])), t1=S(std::fma(c->ps1[10],c->f[1],c->ps1[12])); c->f[12]=t0; c->ps1[12]=t1;} // 802648B8
  {double t0=S(c->f[7]*c->f[0]), t1=S(c->ps1[7]*c->f[0]); c->f[13]=t0; c->ps1[13]=t1;} // 802648BC
  {double t0=S(c->f[7]*c->f[2]), t1=S(c->ps1[7]*c->f[2]); c->f[30]=t0; c->ps1[30]=t1;} // 802648C0
  {double t0=S(c->f[7]*c->f[4]), t1=S(c->ps1[7]*c->f[4]); c->f[28]=t0; c->ps1[28]=t1;} // 802648C4
  {uint32_t ea=c->r[5]+0x00000030u; psq_store(c,12,ea,0,0);} // 802648C8
  {double t0=S(std::fma(c->f[10],c->f[3],c->f[31])), t1=S(std::fma(c->ps1[10],c->f[3],c->ps1[31])); c->f[31]=t0; c->ps1[31]=t1;} // 802648CC
  {double t0=S(std::fma(c->f[10],c->f[5],c->f[29])), t1=S(std::fma(c->ps1[10],c->f[5],c->ps1[29])); c->f[29]=t0; c->ps1[29]=t1;} // 802648D0
  {double t0=S(std::fma(c->f[9],c->ps1[0],c->f[13])), t1=S(std::fma(c->ps1[9],c->ps1[0],c->ps1[13])); c->f[13]=t0; c->ps1[13]=t1;} // 802648D4
  {uint32_t ea=c->r[5]+0x00000040u; psq_store(c,31,ea,0,0);} // 802648D8
  {double t0=S(std::fma(c->f[9],c->ps1[2],c->f[30])), t1=S(std::fma(c->ps1[9],c->ps1[2],c->ps1[30])); c->f[30]=t0; c->ps1[30]=t1;} // 802648DC
  {double t0=S(std::fma(c->f[9],c->ps1[4],c->f[28])), t1=S(std::fma(c->ps1[9],c->ps1[4],c->ps1[28])); c->f[28]=t0; c->ps1[28]=t1;} // 802648E0
  c->r[5]=c->r[5]+0x00000030u; // 802648E4
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_8026485C; } // 802648E8
  {double t0=S(std::fma(c->f[11],c->f[1],c->f[13])), t1=S(std::fma(c->ps1[11],c->f[1],c->ps1[13])); c->f[13]=t0; c->ps1[13]=t1;} // 802648EC
  {uint32_t ea=c->r[5]+0x00000020u; psq_store(c,29,ea,0,0);} // 802648F0
  {double t0=S(std::fma(c->f[11],c->f[3],c->f[30])), t1=S(std::fma(c->ps1[11],c->f[3],c->ps1[30])); c->f[30]=t0; c->ps1[30]=t1;} // 802648F4
  {double t0=S(std::fma(c->f[11],c->f[5],c->f[28])), t1=S(std::fma(c->ps1[11],c->f[5],c->ps1[28])); c->f[28]=t0; c->ps1[28]=t1;} // 802648F8
  {double t0=S(std::fma(c->f[27],c->f[1],c->f[13])), t1=S(std::fma(c->ps1[27],c->ps1[1],c->ps1[13])); c->f[13]=t0; c->ps1[13]=t1;} // 802648FC
  {double t0=S(std::fma(c->f[27],c->f[3],c->f[30])), t1=S(std::fma(c->ps1[27],c->ps1[3],c->ps1[30])); c->f[30]=t0; c->ps1[30]=t1;} // 80264900
  {double t0=S(std::fma(c->f[27],c->f[5],c->f[28])), t1=S(std::fma(c->ps1[27],c->ps1[5],c->ps1[28])); c->f[28]=t0; c->ps1[28]=t1;} // 80264904
  {uint32_t ea=c->r[5]+0x00000008u; psq_store(c,13,ea,0,0);} // 80264908
  {uint32_t ea=c->r[5]+0x00000018u; psq_store(c,30,ea,0,0);} // 8026490C
  {uint32_t ea=c->r[5]+0x00000028u; psq_store(c,28,ea,0,0);} // 80264910
  {uint32_t ea=c->r[1]+0x00000058u; psq_load(c,31,ea,0,0);} // 80264914
  {uint32_t ea=c->r[1]+0x00000050u; c->f[31]=RF64(ea);} // 80264918
  {uint32_t ea=c->r[1]+0x00000048u; psq_load(c,30,ea,0,0);} // 8026491C
  {uint32_t ea=c->r[1]+0x00000040u; c->f[30]=RF64(ea);} // 80264920
  {uint32_t ea=c->r[1]+0x00000038u; psq_load(c,29,ea,0,0);} // 80264924
  {uint32_t ea=c->r[1]+0x00000030u; c->f[29]=RF64(ea);} // 80264928
  {uint32_t ea=c->r[1]+0x00000028u; psq_load(c,28,ea,0,0);} // 8026492C
  {uint32_t ea=c->r[1]+0x00000020u; c->f[28]=RF64(ea);} // 80264930
  {uint32_t ea=c->r[1]+0x00000018u; psq_load(c,27,ea,0,0);} // 80264934
  {uint32_t ea=c->r[1]+0x00000010u; c->f[27]=RF64(ea);} // 80264938
  c->r[1]=c->r[1]+0x00000060u; // 8026493C
  return; // 80264940
}

// PSMTXTranspose
void f_80264944(Ctx* __restrict c) {
  trace_call(0x80264944u);
  {uint32_t ea=c->r[3]+0x00000000u; psq_load(c,1,ea,0,0);} // 80264944
  {uint32_t ea=c->r[3]+0x00000010u; psq_load(c,2,ea,0,0);} // 80264948
  {uint32_t ea=c->r[2]+0xFFFFDACCu; c->f[0]=c->ps1[0]=RF32(ea);} // 8026494C
  {double t0=S(c->f[1]), t1=S(c->f[2]); c->f[4]=t0; c->ps1[4]=t1;} // 80264950
  {uint32_t ea=c->r[3]+0x00000008u; psq_load(c,3,ea,1,0);} // 80264954
  {double t0=S(c->ps1[1]), t1=S(c->ps1[2]); c->f[5]=t0; c->ps1[5]=t1;} // 80264958
  {uint32_t ea=c->r[3]+0x00000018u; psq_load(c,2,ea,1,0);} // 8026495C
  {uint32_t ea=c->r[3]+0x00000020u; psq_load(c,1,ea,0,0);} // 80264960
  {double t0=S(c->f[3]), t1=S(c->f[2]); c->f[2]=t0; c->ps1[2]=t1;} // 80264964
  {uint32_t ea=c->r[4]+0x00000000u; psq_store(c,4,ea,0,0);} // 80264968
  {double t0=S(c->f[1]), t1=S(c->f[0]); c->f[4]=t0; c->ps1[4]=t1;} // 8026496C
  {uint32_t ea=c->r[3]+0x00000028u; c->f[3]=c->ps1[3]=RF32(ea);} // 80264970
  {uint32_t ea=c->r[4]+0x00000010u; psq_store(c,5,ea,0,0);} // 80264974
  {double t0=S(c->ps1[1]), t1=S(c->f[0]); c->f[5]=t0; c->ps1[5]=t1;} // 80264978
  {uint32_t ea=c->r[4]+0x0000002Cu; WF32(ea,c->f[0]);} // 8026497C
  {uint32_t ea=c->r[4]+0x00000020u; psq_store(c,2,ea,0,0);} // 80264980
  {uint32_t ea=c->r[4]+0x00000008u; psq_store(c,4,ea,0,0);} // 80264984
  {uint32_t ea=c->r[4]+0x00000018u; psq_store(c,5,ea,0,0);} // 80264988
  {uint32_t ea=c->r[4]+0x00000028u; WF32(ea,c->f[3]);} // 8026498C
  return; // 80264990
}

// PSMTXInverse
void f_80264994(Ctx* __restrict c) {
  trace_call(0x80264994u);
  {uint32_t ea=c->r[3]+0x00000000u; psq_load(c,0,ea,1,0);} // 80264994
  {uint32_t ea=c->r[3]+0x00000004u; psq_load(c,1,ea,0,0);} // 80264998
  {uint32_t ea=c->r[3]+0x00000010u; psq_load(c,2,ea,1,0);} // 8026499C
  {double t0=S(c->ps1[1]), t1=S(c->f[0]); c->f[6]=t0; c->ps1[6]=t1;} // 802649A0
  {uint32_t ea=c->r[3]+0x00000014u; psq_load(c,3,ea,0,0);} // 802649A4
  {uint32_t ea=c->r[3]+0x00000020u; psq_load(c,4,ea,1,0);} // 802649A8
  {double t0=S(c->ps1[3]), t1=S(c->f[2]); c->f[7]=t0; c->ps1[7]=t1;} // 802649AC
  {uint32_t ea=c->r[3]+0x00000024u; psq_load(c,5,ea,0,0);} // 802649B0
  {double t0=S(c->f[3]*c->f[6]), t1=S(c->ps1[3]*c->ps1[6]); c->f[11]=t0; c->ps1[11]=t1;} // 802649B4
  {double t0=S(c->f[5]*c->f[7]), t1=S(c->ps1[5]*c->ps1[7]); c->f[13]=t0; c->ps1[13]=t1;} // 802649B8
  {double t0=S(c->ps1[5]), t1=S(c->f[4]); c->f[8]=t0; c->ps1[8]=t1;} // 802649BC
  {double t0=S(std::fma(c->f[1],c->f[7],-c->f[11])), t1=S(std::fma(c->ps1[1],c->ps1[7],-c->ps1[11])); c->f[11]=t0; c->ps1[11]=t1;} // 802649C0
  {double t0=S(c->f[1]*c->f[8]), t1=S(c->ps1[1]*c->ps1[8]); c->f[12]=t0; c->ps1[12]=t1;} // 802649C4
  {double t0=S(std::fma(c->f[3],c->f[8],-c->f[13])), t1=S(std::fma(c->ps1[3],c->ps1[8],-c->ps1[13])); c->f[13]=t0; c->ps1[13]=t1;} // 802649C8
  {double t0=S(c->f[3]*c->f[4]), t1=S(c->ps1[3]*c->ps1[4]); c->f[10]=t0; c->ps1[10]=t1;} // 802649CC
  {double t0=S(std::fma(c->f[5],c->f[6],-c->f[12])), t1=S(std::fma(c->ps1[5],c->ps1[6],-c->ps1[12])); c->f[12]=t0; c->ps1[12]=t1;} // 802649D0
  {double t0=S(c->f[0]*c->f[5]), t1=S(c->ps1[0]*c->ps1[5]); c->f[9]=t0; c->ps1[9]=t1;} // 802649D4
  {double t0=S(c->f[1]*c->f[2]), t1=S(c->ps1[1]*c->ps1[2]); c->f[8]=t0; c->ps1[8]=t1;} // 802649D8
  {double t0=S(c->f[6]-c->f[6]), t1=S(c->ps1[6]-c->ps1[6]); c->f[6]=t0; c->ps1[6]=t1;} // 802649DC
  {double t0=S(std::fma(c->f[2],c->f[5],-c->f[10])), t1=S(std::fma(c->ps1[2],c->ps1[5],-c->ps1[10])); c->f[10]=t0; c->ps1[10]=t1;} // 802649E0
  {double t0=S(c->f[0]*c->f[13]), t1=S(c->ps1[0]*c->ps1[13]); c->f[7]=t0; c->ps1[7]=t1;} // 802649E4
  {double t0=S(std::fma(c->f[1],c->f[4],-c->f[9])), t1=S(std::fma(c->ps1[1],c->ps1[4],-c->ps1[9])); c->f[9]=t0; c->ps1[9]=t1;} // 802649E8
  {double t0=S(std::fma(c->f[2],c->f[12],c->f[7])), t1=S(std::fma(c->ps1[2],c->ps1[12],c->ps1[7])); c->f[7]=t0; c->ps1[7]=t1;} // 802649EC
  {double t0=S(std::fma(c->f[0],c->f[3],-c->f[8])), t1=S(std::fma(c->ps1[0],c->ps1[3],-c->ps1[8])); c->f[8]=t0; c->ps1[8]=t1;} // 802649F0
  {double t0=S(std::fma(c->f[4],c->f[11],c->f[7])), t1=S(std::fma(c->ps1[4],c->ps1[11],c->ps1[7])); c->f[7]=t0; c->ps1[7]=t1;} // 802649F4
  fcmp(c,0,c->f[7],c->f[6]); // 802649F8
  if (!crb(c,2)) { goto L_80264A08; } // 802649FC
  c->r[3]=0u+0x00000000u; // 80264A00
  return; // 80264A04
L_80264A08:;
  c->f[0]=c->ps1[0]=fres(c->f[7]); // 80264A08
  {double t0=S(c->f[0]+c->f[0]), t1=S(c->ps1[0]+c->ps1[0]); c->f[6]=t0; c->ps1[6]=t1;} // 80264A0C
  {double t0=S(c->f[0]*c->f[0]), t1=S(c->ps1[0]*c->ps1[0]); c->f[5]=t0; c->ps1[5]=t1;} // 80264A10
  {double t0=S(-std::fma(c->f[7],c->f[5],-c->f[6])), t1=S(-std::fma(c->ps1[7],c->ps1[5],-c->ps1[6])); c->f[0]=t0; c->ps1[0]=t1;} // 80264A14
  {uint32_t ea=c->r[3]+0x0000000Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 80264A18
  {double t0=S(c->f[13]*c->f[0]), t1=S(c->ps1[13]*c->f[0]); c->f[13]=t0; c->ps1[13]=t1;} // 80264A1C
  {uint32_t ea=c->r[3]+0x0000001Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 80264A20
  {double t0=S(c->f[12]*c->f[0]), t1=S(c->ps1[12]*c->f[0]); c->f[12]=t0; c->ps1[12]=t1;} // 80264A24
  {uint32_t ea=c->r[3]+0x0000002Cu; c->f[3]=c->ps1[3]=RF32(ea);} // 80264A28
  {double t0=S(c->f[11]*c->f[0]), t1=S(c->ps1[11]*c->f[0]); c->f[11]=t0; c->ps1[11]=t1;} // 80264A2C
  {double t0=S(c->f[13]), t1=S(c->f[12]); c->f[5]=t0; c->ps1[5]=t1;} // 80264A30
  {double t0=S(c->f[10]*c->f[0]), t1=S(c->ps1[10]*c->f[0]); c->f[10]=t0; c->ps1[10]=t1;} // 80264A34
  {double t0=S(c->ps1[13]), t1=S(c->ps1[12]); c->f[4]=t0; c->ps1[4]=t1;} // 80264A38
  {double t0=S(c->f[9]*c->f[0]), t1=S(c->ps1[9]*c->f[0]); c->f[9]=t0; c->ps1[9]=t1;} // 80264A3C
  {uint32_t ea=c->r[4]+0x00000000u; psq_store(c,5,ea,0,0);} // 80264A40
  {double t0=S(c->f[13]*c->f[1]), t1=S(c->ps1[13]*c->ps1[1]); c->f[6]=t0; c->ps1[6]=t1;} // 80264A44
  {uint32_t ea=c->r[4]+0x00000010u; psq_store(c,4,ea,0,0);} // 80264A48
  {double t0=S(c->f[8]*c->f[0]), t1=S(c->ps1[8]*c->f[0]); c->f[8]=t0; c->ps1[8]=t1;} // 80264A4C
  {double t0=S(std::fma(c->f[12],c->f[2],c->f[6])), t1=S(std::fma(c->ps1[12],c->ps1[2],c->ps1[6])); c->f[6]=t0; c->ps1[6]=t1;} // 80264A50
  {uint32_t ea=c->r[4]+0x00000020u; psq_store(c,10,ea,1,0);} // 80264A54
  {double t0=S(-std::fma(c->f[11],c->f[3],c->f[6])), t1=S(-std::fma(c->ps1[11],c->ps1[3],c->ps1[6])); c->f[6]=t0; c->ps1[6]=t1;} // 80264A58
  {uint32_t ea=c->r[4]+0x00000024u; psq_store(c,9,ea,1,0);} // 80264A5C
  {double t0=S(c->f[10]*c->f[1]), t1=S(c->ps1[10]*c->ps1[1]); c->f[7]=t0; c->ps1[7]=t1;} // 80264A60
  {double t0=S(c->f[11]), t1=S(c->f[6]); c->f[5]=t0; c->ps1[5]=t1;} // 80264A64
  {uint32_t ea=c->r[4]+0x00000028u; psq_store(c,8,ea,1,0);} // 80264A68
  {double t0=S(c->ps1[11]), t1=S(c->ps1[6]); c->f[4]=t0; c->ps1[4]=t1;} // 80264A6C
  {uint32_t ea=c->r[4]+0x00000008u; psq_store(c,5,ea,0,0);} // 80264A70
  {double t0=S(std::fma(c->f[9],c->f[2],c->f[7])), t1=S(std::fma(c->ps1[9],c->ps1[2],c->ps1[7])); c->f[7]=t0; c->ps1[7]=t1;} // 80264A74
  {uint32_t ea=c->r[4]+0x00000018u; psq_store(c,4,ea,0,0);} // 80264A78
  {double t0=S(-std::fma(c->f[8],c->f[3],c->f[7])), t1=S(-std::fma(c->ps1[8],c->ps1[3],c->ps1[7])); c->f[7]=t0; c->ps1[7]=t1;} // 80264A7C
  c->r[3]=0u+0x00000001u; // 80264A80
  {uint32_t ea=c->r[4]+0x0000002Cu; psq_store(c,7,ea,1,0);} // 80264A84
  return; // 80264A88
}

// PSMTXInvXpose
void f_80264A8C(Ctx* __restrict c) {
  trace_call(0x80264A8Cu);
  {uint32_t ea=c->r[3]+0x00000000u; psq_load(c,0,ea,1,0);} // 80264A8C
  {uint32_t ea=c->r[3]+0x00000004u; psq_load(c,1,ea,0,0);} // 80264A90
  {uint32_t ea=c->r[3]+0x00000010u; psq_load(c,2,ea,1,0);} // 80264A94
  {double t0=S(c->ps1[1]), t1=S(c->f[0]); c->f[6]=t0; c->ps1[6]=t1;} // 80264A98
  {uint32_t ea=c->r[3]+0x00000014u; psq_load(c,3,ea,0,0);} // 80264A9C
  {uint32_t ea=c->r[3]+0x00000020u; psq_load(c,4,ea,1,0);} // 80264AA0
  {double t0=S(c->ps1[3]), t1=S(c->f[2]); c->f[7]=t0; c->ps1[7]=t1;} // 80264AA4
  {uint32_t ea=c->r[3]+0x00000024u; psq_load(c,5,ea,0,0);} // 80264AA8
  {double t0=S(c->f[3]*c->f[6]), t1=S(c->ps1[3]*c->ps1[6]); c->f[11]=t0; c->ps1[11]=t1;} // 80264AAC
  {double t0=S(c->ps1[5]), t1=S(c->f[4]); c->f[8]=t0; c->ps1[8]=t1;} // 80264AB0
  {double t0=S(c->f[5]*c->f[7]), t1=S(c->ps1[5]*c->ps1[7]); c->f[13]=t0; c->ps1[13]=t1;} // 80264AB4
  {double t0=S(std::fma(c->f[1],c->f[7],-c->f[11])), t1=S(std::fma(c->ps1[1],c->ps1[7],-c->ps1[11])); c->f[11]=t0; c->ps1[11]=t1;} // 80264AB8
  {double t0=S(c->f[1]*c->f[8]), t1=S(c->ps1[1]*c->ps1[8]); c->f[12]=t0; c->ps1[12]=t1;} // 80264ABC
  {double t0=S(std::fma(c->f[3],c->f[8],-c->f[13])), t1=S(std::fma(c->ps1[3],c->ps1[8],-c->ps1[13])); c->f[13]=t0; c->ps1[13]=t1;} // 80264AC0
  {double t0=S(std::fma(c->f[5],c->f[6],-c->f[12])), t1=S(std::fma(c->ps1[5],c->ps1[6],-c->ps1[12])); c->f[12]=t0; c->ps1[12]=t1;} // 80264AC4
  {double t0=S(c->f[3]*c->f[4]), t1=S(c->ps1[3]*c->ps1[4]); c->f[10]=t0; c->ps1[10]=t1;} // 80264AC8
  {double t0=S(c->f[0]*c->f[5]), t1=S(c->ps1[0]*c->ps1[5]); c->f[9]=t0; c->ps1[9]=t1;} // 80264ACC
  {double t0=S(c->f[1]*c->f[2]), t1=S(c->ps1[1]*c->ps1[2]); c->f[8]=t0; c->ps1[8]=t1;} // 80264AD0
  {double t0=S(std::fma(c->f[2],c->f[5],-c->f[10])), t1=S(std::fma(c->ps1[2],c->ps1[5],-c->ps1[10])); c->f[10]=t0; c->ps1[10]=t1;} // 80264AD4
  {double t0=S(std::fma(c->f[1],c->f[4],-c->f[9])), t1=S(std::fma(c->ps1[1],c->ps1[4],-c->ps1[9])); c->f[9]=t0; c->ps1[9]=t1;} // 80264AD8
  {double t0=S(std::fma(c->f[0],c->f[3],-c->f[8])), t1=S(std::fma(c->ps1[0],c->ps1[3],-c->ps1[8])); c->f[8]=t0; c->ps1[8]=t1;} // 80264ADC
  {double t0=S(c->f[0]*c->f[13]), t1=S(c->ps1[0]*c->ps1[13]); c->f[7]=t0; c->ps1[7]=t1;} // 80264AE0
  {double t0=S(c->f[1]-c->f[1]), t1=S(c->ps1[1]-c->ps1[1]); c->f[1]=t0; c->ps1[1]=t1;} // 80264AE4
  {double t0=S(std::fma(c->f[2],c->f[12],c->f[7])), t1=S(std::fma(c->ps1[2],c->ps1[12],c->ps1[7])); c->f[7]=t0; c->ps1[7]=t1;} // 80264AE8
  {double t0=S(std::fma(c->f[4],c->f[11],c->f[7])), t1=S(std::fma(c->ps1[4],c->ps1[11],c->ps1[7])); c->f[7]=t0; c->ps1[7]=t1;} // 80264AEC
  fcmp(c,0,c->f[7],c->f[1]); // 80264AF0
  if (!crb(c,2)) { goto L_80264B00; } // 80264AF4
  c->r[3]=0u+0x00000000u; // 80264AF8
  return; // 80264AFC
L_80264B00:;
  c->f[0]=c->ps1[0]=fres(c->f[7]); // 80264B00
  {uint32_t ea=c->r[4]+0x0000000Cu; psq_store(c,1,ea,1,0);} // 80264B04
  {double t0=S(c->f[0]+c->f[0]), t1=S(c->ps1[0]+c->ps1[0]); c->f[6]=t0; c->ps1[6]=t1;} // 80264B08
  {double t0=S(c->f[0]*c->f[0]), t1=S(c->ps1[0]*c->ps1[0]); c->f[5]=t0; c->ps1[5]=t1;} // 80264B0C
  {uint32_t ea=c->r[4]+0x0000001Cu; psq_store(c,1,ea,1,0);} // 80264B10
  {double t0=S(-std::fma(c->f[7],c->f[5],-c->f[6])), t1=S(-std::fma(c->ps1[7],c->ps1[5],-c->ps1[6])); c->f[0]=t0; c->ps1[0]=t1;} // 80264B14
  {uint32_t ea=c->r[4]+0x0000002Cu; psq_store(c,1,ea,1,0);} // 80264B18
  {double t0=S(c->f[13]*c->f[0]), t1=S(c->ps1[13]*c->f[0]); c->f[13]=t0; c->ps1[13]=t1;} // 80264B1C
  {double t0=S(c->f[12]*c->f[0]), t1=S(c->ps1[12]*c->f[0]); c->f[12]=t0; c->ps1[12]=t1;} // 80264B20
  {double t0=S(c->f[11]*c->f[0]), t1=S(c->ps1[11]*c->f[0]); c->f[11]=t0; c->ps1[11]=t1;} // 80264B24
  {uint32_t ea=c->r[4]+0x00000000u; psq_store(c,13,ea,0,0);} // 80264B28
  {uint32_t ea=c->r[4]+0x00000010u; psq_store(c,12,ea,0,0);} // 80264B2C
  {double t0=S(c->f[10]*c->f[0]), t1=S(c->ps1[10]*c->f[0]); c->f[10]=t0; c->ps1[10]=t1;} // 80264B30
  {double t0=S(c->f[9]*c->f[0]), t1=S(c->ps1[9]*c->f[0]); c->f[9]=t0; c->ps1[9]=t1;} // 80264B34
  {uint32_t ea=c->r[4]+0x00000020u; psq_store(c,11,ea,0,0);} // 80264B38
  {uint32_t ea=c->r[4]+0x00000008u; psq_store(c,10,ea,1,0);} // 80264B3C
  {double t0=S(c->f[8]*c->f[0]), t1=S(c->ps1[8]*c->f[0]); c->f[8]=t0; c->ps1[8]=t1;} // 80264B40
  c->r[3]=0u+0x00000001u; // 80264B44
  {uint32_t ea=c->r[4]+0x00000018u; psq_store(c,9,ea,1,0);} // 80264B48
  {uint32_t ea=c->r[4]+0x00000028u; psq_store(c,8,ea,1,0);} // 80264B4C
  return; // 80264B50
}

// PSMTXRotRad
void f_80264B54(Ctx* __restrict c) {
  trace_call(0x80264B54u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80264B54
  c->r[0]=c->lr; // 80264B58
  W32(c->r[1]+0x00000034u,c->r[0]); // 80264B5C
  {uint32_t ea=c->r[1]+0x00000020u; WF64(ea,c->f[31]);} // 80264B60
  {uint32_t ea=c->r[1]+0x00000028u; psq_store(c,31,ea,0,0);} // 80264B64
  {uint32_t ea=c->r[1]+0x00000010u; WF64(ea,c->f[30]);} // 80264B68
  {uint32_t ea=c->r[1]+0x00000018u; psq_store(c,30,ea,0,0);} // 80264B6C
  c->f[30]=c->f[1]; // 80264B70
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80264B74
  c->r[31]=c->r[4]|c->r[4]; // 80264B78
  W32(c->r[1]+0x00000008u,c->r[30]); // 80264B7C
  c->r[30]=c->r[3]|c->r[3]; // 80264B80
  c->lr=0x80264B88u; f_8029C340(c); // 80264B84
  c->f[31]=c->ps1[31]=S(c->f[1]); // 80264B88
  c->f[1]=c->f[30]; // 80264B8C
  c->lr=0x80264B94u; f_8029BE38(c); // 80264B90
  c->f[2]=c->ps1[2]=S(c->f[1]); // 80264B94
  c->r[3]=c->r[30]|c->r[30]; // 80264B98
  c->f[1]=c->f[31]; // 80264B9C
  c->r[4]=(uint32_t)(int32_t)(int8_t)c->r[31]; // 80264BA0
  c->lr=0x80264BA8u; f_80264BD0(c); // 80264BA4
  {uint32_t ea=c->r[1]+0x00000028u; psq_load(c,31,ea,0,0);} // 80264BA8
  {uint32_t ea=c->r[1]+0x00000020u; c->f[31]=RF64(ea);} // 80264BAC
  {uint32_t ea=c->r[1]+0x00000018u; psq_load(c,30,ea,0,0);} // 80264BB0
  {uint32_t ea=c->r[1]+0x00000010u; c->f[30]=RF64(ea);} // 80264BB4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80264BB8
  c->r[0]=R32(c->r[1]+0x00000034u); // 80264BBC
  c->r[30]=R32(c->r[1]+0x00000008u); // 80264BC0
  c->lr=c->r[0]; // 80264BC4
  c->r[1]=c->r[1]+0x00000030u; // 80264BC8
  return; // 80264BCC
}

// PSMTXRotTrig
void f_80264BD0(Ctx* __restrict c) {
  trace_call(0x80264BD0u);
  c->f[5]=c->ps1[5]=S(c->f[1]); // 80264BD0
  c->r[0]=c->r[4]|0x00000020u; // 80264BD4
  c->f[4]=c->ps1[4]=S(c->f[2]); // 80264BD8
  cmpu(c,0,c->r[0],0x00000078u); // 80264BDC
  {uint32_t ea=c->r[2]+0xFFFFDACCu; c->f[0]=c->ps1[0]=RF32(ea);} // 80264BE0
  {double t0=-c->f[5], t1=-c->ps1[5]; c->f[2]=t0; c->ps1[2]=t1;} // 80264BE4
  {uint32_t ea=c->r[2]+0xFFFFDAC8u; c->f[1]=c->ps1[1]=RF32(ea);} // 80264BE8
  if (crb(c,2)) { goto L_80264C04; } // 80264BEC
  cmpu(c,0,c->r[0],0x00000079u); // 80264BF0
  if (crb(c,2)) { goto L_80264C2C; } // 80264BF4
  cmpu(c,0,c->r[0],0x0000007Au); // 80264BF8
  if (crb(c,2)) { goto L_80264C58; } // 80264BFC
  return; // 80264C00
L_80264C04:;
  {double t0=S(c->f[5]), t1=S(c->f[4]); c->f[3]=t0; c->ps1[3]=t1;} // 80264C04
  {uint32_t ea=c->r[3]+0x00000000u; psq_store(c,1,ea,1,0);} // 80264C08
  {double t0=S(c->f[4]), t1=S(c->f[2]); c->f[1]=t0; c->ps1[1]=t1;} // 80264C0C
  {uint32_t ea=c->r[3]+0x00000004u; psq_store(c,0,ea,0,0);} // 80264C10
  {uint32_t ea=c->r[3]+0x0000000Cu; psq_store(c,0,ea,0,0);} // 80264C14
  {uint32_t ea=c->r[3]+0x0000001Cu; psq_store(c,0,ea,0,0);} // 80264C18
  {uint32_t ea=c->r[3]+0x0000002Cu; psq_store(c,0,ea,1,0);} // 80264C1C
  {uint32_t ea=c->r[3]+0x00000024u; psq_store(c,3,ea,0,0);} // 80264C20
  {uint32_t ea=c->r[3]+0x00000014u; psq_store(c,1,ea,0,0);} // 80264C24
  return; // 80264C28
L_80264C2C:;
  {double t0=S(c->f[4]), t1=S(c->f[0]); c->f[3]=t0; c->ps1[3]=t1;} // 80264C2C
  {uint32_t ea=c->r[3]+0x00000018u; psq_store(c,0,ea,0,0);} // 80264C30
  {double t0=S(c->f[0]), t1=S(c->f[1]); c->f[1]=t0; c->ps1[1]=t1;} // 80264C34
  {double t0=S(c->f[2]), t1=S(c->f[0]); c->f[2]=t0; c->ps1[2]=t1;} // 80264C38
  {double t0=S(c->f[5]), t1=S(c->f[0]); c->f[0]=t0; c->ps1[0]=t1;} // 80264C3C
  {uint32_t ea=c->r[3]+0x00000000u; psq_store(c,3,ea,0,0);} // 80264C40
  {uint32_t ea=c->r[3]+0x00000028u; psq_store(c,3,ea,0,0);} // 80264C44
  {uint32_t ea=c->r[3]+0x00000010u; psq_store(c,1,ea,0,0);} // 80264C48
  {uint32_t ea=c->r[3]+0x00000008u; psq_store(c,0,ea,0,0);} // 80264C4C
  {uint32_t ea=c->r[3]+0x00000020u; psq_store(c,2,ea,0,0);} // 80264C50
  return; // 80264C54
L_80264C58:;
  {double t0=S(c->f[5]), t1=S(c->f[4]); c->f[3]=t0; c->ps1[3]=t1;} // 80264C58
  {uint32_t ea=c->r[3]+0x00000008u; psq_store(c,0,ea,0,0);} // 80264C5C
  {double t0=S(c->f[4]), t1=S(c->f[2]); c->f[2]=t0; c->ps1[2]=t1;} // 80264C60
  {double t0=S(c->f[1]), t1=S(c->f[0]); c->f[1]=t0; c->ps1[1]=t1;} // 80264C64
  {uint32_t ea=c->r[3]+0x00000018u; psq_store(c,0,ea,0,0);} // 80264C68
  {uint32_t ea=c->r[3]+0x00000020u; psq_store(c,0,ea,0,0);} // 80264C6C
  {uint32_t ea=c->r[3]+0x00000010u; psq_store(c,3,ea,0,0);} // 80264C70
  {uint32_t ea=c->r[3]+0x00000000u; psq_store(c,2,ea,0,0);} // 80264C74
  {uint32_t ea=c->r[3]+0x00000028u; psq_store(c,1,ea,0,0);} // 80264C78
  return; // 80264C7C
}

// __PSMTXRotAxisRadInternal
void f_80264C80(Ctx* __restrict c) {
  trace_call(0x80264C80u);
  {uint32_t ea=c->r[4]+0x00000000u; psq_load(c,3,ea,0,0);} // 80264C80
  c->f[11]=c->ps1[11]=S(c->f[2]); // 80264C84
  {uint32_t ea=c->r[2]+0xFFFFDAD0u; c->f[10]=c->ps1[10]=RF32(ea);} // 80264C88
  c->f[12]=c->ps1[12]=S(c->f[1]); // 80264C8C
  {double t0=S(c->f[3]*c->f[3]), t1=S(c->ps1[3]*c->ps1[3]); c->f[4]=t0; c->ps1[4]=t1;} // 80264C90
  {uint32_t ea=c->r[4]+0x00000008u; c->f[2]=c->ps1[2]=RF32(ea);} // 80264C94
  c->f[8]=c->ps1[8]=S(c->f[10]+c->f[10]); // 80264C98
  {uint32_t ea=c->r[2]+0xFFFFDAD4u; c->f[9]=c->ps1[9]=RF32(ea);} // 80264C9C
  c->f[1]=c->ps1[1]=S(c->f[10]-c->f[10]); // 80264CA0
  {double t0=S(std::fma(c->f[2],c->f[2],c->f[4])), t1=S(std::fma(c->ps1[2],c->ps1[2],c->ps1[4])); c->f[5]=t0; c->ps1[5]=t1;} // 80264CA4
  c->f[0]=c->ps1[0]=S(c->f[8]-c->f[11]); // 80264CA8
  {double t0=S(c->f[11]), t1=S(c->f[11]); c->f[11]=t0; c->ps1[11]=t1;} // 80264CAC
  {double t0=S(c->f[5]+c->ps1[4]), t1=S(c->ps1[2]); c->f[6]=t0; c->ps1[6]=t1;} // 80264CB0
  c->f[7]=frsqrte(c->f[6]); // 80264CB4
  c->f[4]=c->ps1[4]=S(c->f[7]*c->f[7]); // 80264CB8
  c->f[5]=c->ps1[5]=S(c->f[7]*c->f[10]); // 80264CBC
  c->f[4]=c->ps1[4]=S(-std::fma(c->f[4],c->f[6],-c->f[9])); // 80264CC0
  c->f[7]=c->ps1[7]=S(c->f[4]*c->f[5]); // 80264CC4
  {double t0=S(c->f[3]*c->f[7]), t1=S(c->ps1[3]*c->f[7]); c->f[3]=t0; c->ps1[3]=t1;} // 80264CC8
  {double t0=S(c->f[2]*c->f[7]), t1=S(c->ps1[2]*c->f[7]); c->f[2]=t0; c->ps1[2]=t1;} // 80264CCC
  {double t0=S(c->f[3]*c->f[0]), t1=S(c->ps1[3]*c->f[0]); c->f[6]=t0; c->ps1[6]=t1;} // 80264CD0
  {double t0=S(c->f[2]*c->f[0]), t1=S(c->ps1[2]*c->f[0]); c->f[7]=t0; c->ps1[7]=t1;} // 80264CD4
  {double t0=S(c->f[3]*c->f[12]), t1=S(c->ps1[3]*c->f[12]); c->f[10]=t0; c->ps1[10]=t1;} // 80264CD8
  {double t0=S(c->f[6]*c->ps1[3]), t1=S(c->ps1[6]*c->ps1[3]); c->f[5]=t0; c->ps1[5]=t1;} // 80264CDC
  {double t0=S(c->f[6]*c->f[3]), t1=S(c->ps1[6]*c->f[3]); c->f[4]=t0; c->ps1[4]=t1;} // 80264CE0
  {double t0=S(c->f[6]*c->f[2]), t1=S(c->ps1[6]*c->f[2]); c->f[6]=t0; c->ps1[6]=t1;} // 80264CE4
  c->f[0]=c->ps1[0]=S(-std::fma(c->f[2],c->f[12],-c->f[5])); // 80264CE8
  {double t0=-c->f[10], t1=-c->ps1[10]; c->f[3]=t0; c->ps1[3]=t1;} // 80264CEC
  c->f[8]=c->ps1[8]=S(std::fma(c->f[2],c->f[12],c->f[5])); // 80264CF0
  {double t0=S(c->f[4]+c->ps1[11]), t1=S(c->ps1[0]); c->f[4]=t0; c->ps1[4]=t1;} // 80264CF4
  {double t0=S(c->f[3]+c->ps1[6]), t1=S(c->ps1[1]); c->f[0]=t0; c->ps1[0]=t1;} // 80264CF8
  {double t0=S(c->f[7]*c->f[2]), t1=S(c->ps1[7]*c->f[2]); c->f[7]=t0; c->ps1[7]=t1;} // 80264CFC
  {double t0=S(c->f[6]+c->ps1[10]), t1=S(c->ps1[1]); c->f[9]=t0; c->ps1[9]=t1;} // 80264D00
  {uint32_t ea=c->r[3]+0x00000000u; psq_store(c,4,ea,0,0);} // 80264D04
  {double t0=S(c->f[6]+c->ps1[3]), t1=S(c->ps1[6]); c->f[3]=t0; c->ps1[3]=t1;} // 80264D08
  {double t0=S(c->f[8]), t1=S(c->f[11]+c->ps1[5]); c->f[5]=t0; c->ps1[5]=t1;} // 80264D0C
  {uint32_t ea=c->r[3]+0x00000018u; psq_store(c,0,ea,0,0);} // 80264D10
  {double t0=S(c->f[7]+c->ps1[11]), t1=S(c->ps1[1]); c->f[7]=t0; c->ps1[7]=t1;} // 80264D14
  {double t0=S(c->f[3]), t1=S(c->f[10]+c->ps1[6]); c->f[6]=t0; c->ps1[6]=t1;} // 80264D18
  {uint32_t ea=c->r[3]+0x00000008u; psq_store(c,9,ea,0,0);} // 80264D1C
  {uint32_t ea=c->r[3]+0x00000010u; psq_store(c,5,ea,0,0);} // 80264D20
  {uint32_t ea=c->r[3]+0x00000020u; psq_store(c,6,ea,0,0);} // 80264D24
  {uint32_t ea=c->r[3]+0x00000028u; psq_store(c,7,ea,0,0);} // 80264D28
  return; // 80264D2C
}

// PSMTXRotAxisRad
void f_80264D30(Ctx* __restrict c) {
  trace_call(0x80264D30u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80264D30
  c->r[0]=c->lr; // 80264D34
  W32(c->r[1]+0x00000034u,c->r[0]); // 80264D38
  {uint32_t ea=c->r[1]+0x00000020u; WF64(ea,c->f[31]);} // 80264D3C
  {uint32_t ea=c->r[1]+0x00000028u; psq_store(c,31,ea,0,0);} // 80264D40
  {uint32_t ea=c->r[1]+0x00000010u; WF64(ea,c->f[30]);} // 80264D44
  {uint32_t ea=c->r[1]+0x00000018u; psq_store(c,30,ea,0,0);} // 80264D48
  c->f[30]=c->f[1]; // 80264D4C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80264D50
  c->r[31]=c->r[4]|c->r[4]; // 80264D54
  W32(c->r[1]+0x00000008u,c->r[30]); // 80264D58
  c->r[30]=c->r[3]|c->r[3]; // 80264D5C
  c->lr=0x80264D64u; f_8029C340(c); // 80264D60
  c->f[31]=c->ps1[31]=S(c->f[1]); // 80264D64
  c->f[1]=c->f[30]; // 80264D68
  c->lr=0x80264D70u; f_8029BE38(c); // 80264D6C
  c->f[2]=c->ps1[2]=S(c->f[1]); // 80264D70
  c->r[3]=c->r[30]|c->r[30]; // 80264D74
  c->f[1]=c->f[31]; // 80264D78
  c->r[4]=c->r[31]|c->r[31]; // 80264D7C
  c->lr=0x80264D84u; f_80264C80(c); // 80264D80
  {uint32_t ea=c->r[1]+0x00000028u; psq_load(c,31,ea,0,0);} // 80264D84
  {uint32_t ea=c->r[1]+0x00000020u; c->f[31]=RF64(ea);} // 80264D88
  {uint32_t ea=c->r[1]+0x00000018u; psq_load(c,30,ea,0,0);} // 80264D8C
  {uint32_t ea=c->r[1]+0x00000010u; c->f[30]=RF64(ea);} // 80264D90
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80264D94
  c->r[0]=R32(c->r[1]+0x00000034u); // 80264D98
  c->r[30]=R32(c->r[1]+0x00000008u); // 80264D9C
  c->lr=c->r[0]; // 80264DA0
  c->r[1]=c->r[1]+0x00000030u; // 80264DA4
  return; // 80264DA8
}

// PSMTXTrans
void f_80264DAC(Ctx* __restrict c) {
  trace_call(0x80264DACu);
  {uint32_t ea=c->r[2]+0xFFFFDACCu; c->f[0]=c->ps1[0]=RF32(ea);} // 80264DAC
  {uint32_t ea=c->r[2]+0xFFFFDAC8u; c->f[4]=c->ps1[4]=RF32(ea);} // 80264DB0
  {uint32_t ea=c->r[3]+0x0000000Cu; WF32(ea,c->f[1]);} // 80264DB4
  {uint32_t ea=c->r[3]+0x0000001Cu; WF32(ea,c->f[2]);} // 80264DB8
  {uint32_t ea=c->r[3]+0x00000004u; psq_store(c,0,ea,0,0);} // 80264DBC
  {uint32_t ea=c->r[3]+0x00000020u; psq_store(c,0,ea,0,0);} // 80264DC0
  {uint32_t ea=c->r[3]+0x00000010u; WF32(ea,c->f[0]);} // 80264DC4
  {uint32_t ea=c->r[3]+0x00000014u; WF32(ea,c->f[4]);} // 80264DC8
  {uint32_t ea=c->r[3]+0x00000018u; WF32(ea,c->f[0]);} // 80264DCC
  {uint32_t ea=c->r[3]+0x00000028u; WF32(ea,c->f[4]);} // 80264DD0
  {uint32_t ea=c->r[3]+0x0000002Cu; WF32(ea,c->f[3]);} // 80264DD4
  {uint32_t ea=c->r[3]+0x00000000u; WF32(ea,c->f[4]);} // 80264DD8
  return; // 80264DDC
}

// PSMTXTransApply
void f_80264DE0(Ctx* __restrict c) {
  trace_call(0x80264DE0u);
  {uint32_t ea=c->r[3]+0x00000000u; psq_load(c,4,ea,0,0);} // 80264DE0
  c->f[1]=c->ps1[1]=S(c->f[1]); // 80264DE4
  {uint32_t ea=c->r[3]+0x00000008u; psq_load(c,5,ea,0,0);} // 80264DE8
  c->f[2]=c->ps1[2]=S(c->f[2]); // 80264DEC
  {uint32_t ea=c->r[3]+0x00000018u; psq_load(c,7,ea,0,0);} // 80264DF0
  c->f[3]=c->ps1[3]=S(c->f[3]); // 80264DF4
  {uint32_t ea=c->r[3]+0x00000028u; psq_load(c,8,ea,0,0);} // 80264DF8
  {uint32_t ea=c->r[4]+0x00000000u; psq_store(c,4,ea,0,0);} // 80264DFC
  {double t0=S(c->f[5]), t1=S(c->f[1]+c->ps1[5]); c->f[5]=t0; c->ps1[5]=t1;} // 80264E00
  {uint32_t ea=c->r[3]+0x00000010u; psq_load(c,6,ea,0,0);} // 80264E04
  {uint32_t ea=c->r[4]+0x00000008u; psq_store(c,5,ea,0,0);} // 80264E08
  {double t0=S(c->f[7]), t1=S(c->f[2]+c->ps1[7]); c->f[7]=t0; c->ps1[7]=t1;} // 80264E0C
  {uint32_t ea=c->r[3]+0x00000020u; psq_load(c,9,ea,0,0);} // 80264E10
  {uint32_t ea=c->r[4]+0x00000010u; psq_store(c,6,ea,0,0);} // 80264E14
  {double t0=S(c->f[8]), t1=S(c->f[3]+c->ps1[8]); c->f[8]=t0; c->ps1[8]=t1;} // 80264E18
  {uint32_t ea=c->r[4]+0x00000018u; psq_store(c,7,ea,0,0);} // 80264E1C
  {uint32_t ea=c->r[4]+0x00000020u; psq_store(c,9,ea,0,0);} // 80264E20
  {uint32_t ea=c->r[4]+0x00000028u; psq_store(c,8,ea,0,0);} // 80264E24
  return; // 80264E28
}

// PSMTXScale
void f_80264E2C(Ctx* __restrict c) {
  trace_call(0x80264E2Cu);
  {uint32_t ea=c->r[2]+0xFFFFDACCu; c->f[0]=c->ps1[0]=RF32(ea);} // 80264E2C
  {uint32_t ea=c->r[3]+0x00000000u; WF32(ea,c->f[1]);} // 80264E30
  {uint32_t ea=c->r[3]+0x00000004u; psq_store(c,0,ea,0,0);} // 80264E34
  {uint32_t ea=c->r[3]+0x0000000Cu; psq_store(c,0,ea,0,0);} // 80264E38
  {uint32_t ea=c->r[3]+0x00000014u; WF32(ea,c->f[2]);} // 80264E3C
  {uint32_t ea=c->r[3]+0x00000018u; psq_store(c,0,ea,0,0);} // 80264E40
  {uint32_t ea=c->r[3]+0x00000020u; psq_store(c,0,ea,0,0);} // 80264E44
  {uint32_t ea=c->r[3]+0x00000028u; WF32(ea,c->f[3]);} // 80264E48
  {uint32_t ea=c->r[3]+0x0000002Cu; WF32(ea,c->f[0]);} // 80264E4C
  return; // 80264E50
}

// PSMTXScaleApply
void f_80264E54(Ctx* __restrict c) {
  trace_call(0x80264E54u);
  c->f[1]=c->ps1[1]=S(c->f[1]); // 80264E54
  {uint32_t ea=c->r[3]+0x00000000u; psq_load(c,4,ea,0,0);} // 80264E58
  c->f[2]=c->ps1[2]=S(c->f[2]); // 80264E5C
  {uint32_t ea=c->r[3]+0x00000008u; psq_load(c,5,ea,0,0);} // 80264E60
  c->f[3]=c->ps1[3]=S(c->f[3]); // 80264E64
  {double t0=S(c->f[4]*c->f[1]), t1=S(c->ps1[4]*c->f[1]); c->f[4]=t0; c->ps1[4]=t1;} // 80264E68
  {uint32_t ea=c->r[3]+0x00000010u; psq_load(c,6,ea,0,0);} // 80264E6C
  {double t0=S(c->f[5]*c->f[1]), t1=S(c->ps1[5]*c->f[1]); c->f[5]=t0; c->ps1[5]=t1;} // 80264E70
  {uint32_t ea=c->r[3]+0x00000018u; psq_load(c,7,ea,0,0);} // 80264E74
  {double t0=S(c->f[6]*c->f[2]), t1=S(c->ps1[6]*c->f[2]); c->f[6]=t0; c->ps1[6]=t1;} // 80264E78
  {uint32_t ea=c->r[3]+0x00000020u; psq_load(c,8,ea,0,0);} // 80264E7C
  {uint32_t ea=c->r[4]+0x00000000u; psq_store(c,4,ea,0,0);} // 80264E80
  {double t0=S(c->f[7]*c->f[2]), t1=S(c->ps1[7]*c->f[2]); c->f[7]=t0; c->ps1[7]=t1;} // 80264E84
  {uint32_t ea=c->r[3]+0x00000028u; psq_load(c,2,ea,0,0);} // 80264E88
  {uint32_t ea=c->r[4]+0x00000008u; psq_store(c,5,ea,0,0);} // 80264E8C
  {double t0=S(c->f[8]*c->f[3]), t1=S(c->ps1[8]*c->f[3]); c->f[8]=t0; c->ps1[8]=t1;} // 80264E90
  {uint32_t ea=c->r[4]+0x00000010u; psq_store(c,6,ea,0,0);} // 80264E94
  {double t0=S(c->f[2]*c->f[3]), t1=S(c->ps1[2]*c->f[3]); c->f[2]=t0; c->ps1[2]=t1;} // 80264E98
  {uint32_t ea=c->r[4]+0x00000018u; psq_store(c,7,ea,0,0);} // 80264E9C
  {uint32_t ea=c->r[4]+0x00000020u; psq_store(c,8,ea,0,0);} // 80264EA0
  {uint32_t ea=c->r[4]+0x00000028u; psq_store(c,2,ea,0,0);} // 80264EA4
  return; // 80264EA8
}

// PSMTXQuat
void f_80264EAC(Ctx* __restrict c) {
  trace_call(0x80264EACu);
  {uint32_t ea=c->r[4]+0x00000000u; psq_load(c,4,ea,0,0);} // 80264EAC
  {uint32_t ea=c->r[4]+0x00000008u; psq_load(c,5,ea,0,0);} // 80264EB0
  {double t0=S(c->f[4]*c->f[4]), t1=S(c->ps1[4]*c->ps1[4]); c->f[6]=t0; c->ps1[6]=t1;} // 80264EB4
  {uint32_t ea=c->r[2]+0xFFFFDAC8u; c->f[1]=c->ps1[1]=RF32(ea);} // 80264EB8
  {double t0=S(c->ps1[4]), t1=S(c->f[4]); c->f[9]=t0; c->ps1[9]=t1;} // 80264EBC
  c->f[0]=c->ps1[0]=S(c->f[1]-c->f[1]); // 80264EC0
  {double t0=S(std::fma(c->f[5],c->f[5],c->f[6])), t1=S(std::fma(c->ps1[5],c->ps1[5],c->ps1[6])); c->f[8]=t0; c->ps1[8]=t1;} // 80264EC4
  {double t0=S(c->f[5]*c->ps1[5]), t1=S(c->ps1[5]*c->ps1[5]); c->f[10]=t0; c->ps1[10]=t1;} // 80264EC8
  c->f[2]=c->ps1[2]=S(c->f[1]+c->f[1]); // 80264ECC
  {uint32_t ea=c->r[3]+0x0000000Cu; psq_store(c,0,ea,1,0);} // 80264ED0
  {double t0=S(c->f[8]+c->ps1[8]), t1=S(c->ps1[8]); c->f[3]=t0; c->ps1[3]=t1;} // 80264ED4
  {double t0=S(c->f[5]*c->f[5]), t1=S(c->ps1[5]*c->ps1[5]); c->f[7]=t0; c->ps1[7]=t1;} // 80264ED8
  {uint32_t ea=c->r[3]+0x0000002Cu; psq_store(c,0,ea,1,0);} // 80264EDC
  {double t0=S(std::fma(c->f[4],c->f[9],c->f[10])), t1=S(std::fma(c->ps1[4],c->ps1[9],c->ps1[10])); c->f[12]=t0; c->ps1[12]=t1;} // 80264EE0
  c->f[13]=c->ps1[13]=fres(c->f[3]); // 80264EE4
  {double t0=S(-std::fma(c->f[3],c->f[13],-c->f[2])), t1=S(-std::fma(c->ps1[3],c->ps1[13],-c->ps1[2])); c->f[3]=t0; c->ps1[3]=t1;} // 80264EE8
  {double t0=S(c->f[9]*c->ps1[5]), t1=S(c->ps1[9]*c->ps1[5]); c->f[11]=t0; c->ps1[11]=t1;} // 80264EEC
  {double t0=S(std::fma(c->f[4],c->f[9],-c->f[10])), t1=S(std::fma(c->ps1[4],c->ps1[9],-c->ps1[10])); c->f[10]=t0; c->ps1[10]=t1;} // 80264EF0
  {double t0=S(c->f[13]*c->f[3]), t1=S(c->ps1[13]*c->ps1[3]); c->f[3]=t0; c->ps1[3]=t1;} // 80264EF4
  {double t0=S(std::fma(c->f[4],c->f[5],c->f[11])), t1=S(std::fma(c->ps1[4],c->f[5],c->ps1[11])); c->f[9]=t0; c->ps1[9]=t1;} // 80264EF8
  {double t0=S(c->f[8]), t1=S(c->f[7]+c->ps1[6]); c->f[8]=t0; c->ps1[8]=t1;} // 80264EFC
  c->f[3]=c->ps1[3]=S(c->f[3]*c->f[2]); // 80264F00
  {double t0=S(-std::fma(c->f[11],c->f[2],-c->f[9])), t1=S(-std::fma(c->ps1[11],c->ps1[2],-c->ps1[9])); c->f[11]=t0; c->ps1[11]=t1;} // 80264F04
  {double t0=S(c->f[6]+c->ps1[6]), t1=S(c->ps1[6]); c->f[6]=t0; c->ps1[6]=t1;} // 80264F08
  {double t0=S(c->f[9]*c->f[3]), t1=S(c->ps1[9]*c->ps1[3]); c->f[9]=t0; c->ps1[9]=t1;} // 80264F0C
  {double t0=S(c->f[11]*c->f[3]), t1=S(c->ps1[11]*c->ps1[3]); c->f[11]=t0; c->ps1[11]=t1;} // 80264F10
  {double t0=S(-std::fma(c->f[8],c->f[3],-c->f[1])), t1=S(-std::fma(c->ps1[8],c->ps1[3],-c->ps1[1])); c->f[8]=t0; c->ps1[8]=t1;} // 80264F14
  {double t0=S(c->f[12]*c->f[3]), t1=S(c->ps1[12]*c->ps1[3]); c->f[12]=t0; c->ps1[12]=t1;} // 80264F18
  {uint32_t ea=c->r[3]+0x00000008u; psq_store(c,9,ea,1,0);} // 80264F1C
  {double t0=S(c->f[10]*c->f[3]), t1=S(c->ps1[10]*c->ps1[3]); c->f[10]=t0; c->ps1[10]=t1;} // 80264F20
  {double t0=S(c->ps1[11]), t1=S(c->f[0]); c->f[7]=t0; c->ps1[7]=t1;} // 80264F24
  {double t0=S(c->f[12]), t1=S(c->f[8]); c->f[5]=t0; c->ps1[5]=t1;} // 80264F28
  {double t0=S(c->ps1[8]), t1=S(c->f[10]); c->f[4]=t0; c->ps1[4]=t1;} // 80264F2C
  {double t0=S(c->f[11]), t1=S(c->ps1[9]); c->f[13]=t0; c->ps1[13]=t1;} // 80264F30
  {uint32_t ea=c->r[3]+0x00000018u; psq_store(c,7,ea,0,0);} // 80264F34
  {double t0=S(-std::fma(c->f[6],c->f[3],-c->f[1])), t1=S(-std::fma(c->ps1[6],c->ps1[3],-c->ps1[1])); c->f[6]=t0; c->ps1[6]=t1;} // 80264F38
  {uint32_t ea=c->r[3]+0x00000010u; psq_store(c,5,ea,0,0);} // 80264F3C
  {uint32_t ea=c->r[3]+0x00000028u; psq_store(c,6,ea,1,0);} // 80264F40
  {uint32_t ea=c->r[3]+0x00000000u; psq_store(c,4,ea,0,0);} // 80264F44
  {uint32_t ea=c->r[3]+0x00000020u; psq_store(c,13,ea,0,0);} // 80264F48
  return; // 80264F4C
}

// C_MTXLookAt
void f_80264F50(Ctx* __restrict c) {
  trace_call(0x80264F50u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80264F50
  c->r[0]=c->lr; // 80264F54
  {uint32_t ea=c->r[4]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 80264F58
  W32(c->r[1]+0x00000044u,c->r[0]); // 80264F5C
  {uint32_t ea=c->r[6]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 80264F60
  W32(c->r[1]+0x0000003Cu,c->r[31]); // 80264F64
  c->r[31]=c->r[5]|c->r[5]; // 80264F68
  c->f[4]=c->ps1[4]=S(c->f[1]-c->f[0]); // 80264F6C
  {uint32_t ea=c->r[4]+0x00000004u; c->f[3]=c->ps1[3]=RF32(ea);} // 80264F70
  W32(c->r[1]+0x00000038u,c->r[30]); // 80264F74
  c->r[30]=c->r[4]|c->r[4]; // 80264F78
  {uint32_t ea=c->r[6]+0x00000004u; c->f[2]=c->ps1[2]=RF32(ea);} // 80264F7C
  W32(c->r[1]+0x00000034u,c->r[29]); // 80264F80
  c->f[2]=c->ps1[2]=S(c->f[3]-c->f[2]); // 80264F84
  {uint32_t ea=c->r[4]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 80264F88
  {uint32_t ea=c->r[6]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 80264F8C
  c->r[29]=c->r[3]|c->r[3]; // 80264F90
  c->r[3]=c->r[1]+0x00000020u; // 80264F94
  {uint32_t ea=c->r[1]+0x00000020u; WF32(ea,c->f[4]);} // 80264F98
  c->f[0]=c->ps1[0]=S(c->f[1]-c->f[0]); // 80264F9C
  {uint32_t ea=c->r[1]+0x00000024u; WF32(ea,c->f[2]);} // 80264FA0
  c->r[4]=c->r[3]|c->r[3]; // 80264FA4
  {uint32_t ea=c->r[1]+0x00000028u; WF32(ea,c->f[0]);} // 80264FA8
  c->lr=0x80264FB0u; f_80265750(c); // 80264FAC
  c->r[3]=c->r[31]|c->r[31]; // 80264FB0
  c->r[4]=c->r[1]+0x00000020u; // 80264FB4
  c->r[5]=c->r[1]+0x00000014u; // 80264FB8
  c->lr=0x80264FC0u; f_80265810(c); // 80264FBC
  c->r[3]=c->r[1]+0x00000014u; // 80264FC0
  c->r[4]=c->r[3]|c->r[3]; // 80264FC4
  c->lr=0x80264FCCu; f_80265750(c); // 80264FC8
  c->r[3]=c->r[1]+0x00000020u; // 80264FCC
  c->r[4]=c->r[1]+0x00000014u; // 80264FD0
  c->r[5]=c->r[1]+0x00000008u; // 80264FD4
  c->lr=0x80264FDCu; f_80265810(c); // 80264FD8
  {uint32_t ea=c->r[1]+0x00000014u; c->f[0]=c->ps1[0]=RF32(ea);} // 80264FDC
  {uint32_t ea=c->r[30]+0x00000000u; c->f[4]=c->ps1[4]=RF32(ea);} // 80264FE0
  {uint32_t ea=c->r[29]+0x00000000u; WF32(ea,c->f[0]);} // 80264FE4
  {uint32_t ea=c->r[30]+0x00000004u; c->f[3]=c->ps1[3]=RF32(ea);} // 80264FE8
  {uint32_t ea=c->r[1]+0x00000018u; c->f[0]=c->ps1[0]=RF32(ea);} // 80264FEC
  {uint32_t ea=c->r[30]+0x00000008u; c->f[5]=c->ps1[5]=RF32(ea);} // 80264FF0
  {uint32_t ea=c->r[29]+0x00000004u; WF32(ea,c->f[0]);} // 80264FF4
  {uint32_t ea=c->r[1]+0x0000001Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80264FF8
  {uint32_t ea=c->r[29]+0x00000008u; WF32(ea,c->f[0]);} // 80264FFC
  {uint32_t ea=c->r[1]+0x00000014u; c->f[1]=c->ps1[1]=RF32(ea);} // 80265000
  {uint32_t ea=c->r[1]+0x00000018u; c->f[0]=c->ps1[0]=RF32(ea);} // 80265004
  c->f[1]=c->ps1[1]=S(c->f[4]*c->f[1]); // 80265008
  {uint32_t ea=c->r[1]+0x0000001Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 8026500C
  c->f[0]=c->ps1[0]=S(c->f[3]*c->f[0]); // 80265010
  c->f[2]=c->ps1[2]=S(c->f[5]*c->f[2]); // 80265014
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 80265018
  c->f[0]=c->ps1[0]=S(c->f[2]+c->f[0]); // 8026501C
  c->f[0]=-c->f[0]; // 80265020
  {uint32_t ea=c->r[29]+0x0000000Cu; WF32(ea,c->f[0]);} // 80265024
  {uint32_t ea=c->r[1]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 80265028
  {uint32_t ea=c->r[29]+0x00000010u; WF32(ea,c->f[0]);} // 8026502C
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80265030
  {uint32_t ea=c->r[29]+0x00000014u; WF32(ea,c->f[0]);} // 80265034
  {uint32_t ea=c->r[1]+0x00000010u; c->f[0]=c->ps1[0]=RF32(ea);} // 80265038
  {uint32_t ea=c->r[29]+0x00000018u; WF32(ea,c->f[0]);} // 8026503C
  {uint32_t ea=c->r[1]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 80265040
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80265044
  {uint32_t ea=c->r[1]+0x00000010u; c->f[2]=c->ps1[2]=RF32(ea);} // 80265048
  c->f[1]=c->ps1[1]=S(c->f[4]*c->f[1]); // 8026504C
  c->f[0]=c->ps1[0]=S(c->f[3]*c->f[0]); // 80265050
  c->f[2]=c->ps1[2]=S(c->f[5]*c->f[2]); // 80265054
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 80265058
  c->f[0]=c->ps1[0]=S(c->f[2]+c->f[0]); // 8026505C
  c->f[0]=-c->f[0]; // 80265060
  {uint32_t ea=c->r[29]+0x0000001Cu; WF32(ea,c->f[0]);} // 80265064
  {uint32_t ea=c->r[1]+0x00000020u; c->f[0]=c->ps1[0]=RF32(ea);} // 80265068
  {uint32_t ea=c->r[29]+0x00000020u; WF32(ea,c->f[0]);} // 8026506C
  {uint32_t ea=c->r[1]+0x00000024u; c->f[0]=c->ps1[0]=RF32(ea);} // 80265070
  {uint32_t ea=c->r[29]+0x00000024u; WF32(ea,c->f[0]);} // 80265074
  {uint32_t ea=c->r[1]+0x00000028u; c->f[0]=c->ps1[0]=RF32(ea);} // 80265078
  {uint32_t ea=c->r[29]+0x00000028u; WF32(ea,c->f[0]);} // 8026507C
  {uint32_t ea=c->r[1]+0x00000020u; c->f[1]=c->ps1[1]=RF32(ea);} // 80265080
  {uint32_t ea=c->r[1]+0x00000024u; c->f[0]=c->ps1[0]=RF32(ea);} // 80265084
  {uint32_t ea=c->r[1]+0x00000028u; c->f[2]=c->ps1[2]=RF32(ea);} // 80265088
  c->f[1]=c->ps1[1]=S(c->f[4]*c->f[1]); // 8026508C
  c->f[0]=c->ps1[0]=S(c->f[3]*c->f[0]); // 80265090
  c->f[2]=c->ps1[2]=S(c->f[5]*c->f[2]); // 80265094
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 80265098
  c->f[0]=c->ps1[0]=S(c->f[2]+c->f[0]); // 8026509C
  c->f[0]=-c->f[0]; // 802650A0
  {uint32_t ea=c->r[29]+0x0000002Cu; WF32(ea,c->f[0]);} // 802650A4
  c->r[31]=R32(c->r[1]+0x0000003Cu); // 802650A8
  c->r[30]=R32(c->r[1]+0x00000038u); // 802650AC
  c->r[29]=R32(c->r[1]+0x00000034u); // 802650B0
  c->r[0]=R32(c->r[1]+0x00000044u); // 802650B4
  c->lr=c->r[0]; // 802650B8
  c->r[1]=c->r[1]+0x00000040u; // 802650BC
  return; // 802650C0
}

// C_MTXLightFrustum
void f_802650C4(Ctx* __restrict c) {
  trace_call(0x802650C4u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802650C4
  {uint32_t ea=c->r[1]+0x00000010u; WF64(ea,c->f[31]);} // 802650C8
  {uint32_t ea=c->r[1]+0x00000018u; psq_store(c,31,ea,0,0);} // 802650CC
  c->f[0]=c->ps1[0]=S(c->f[4]-c->f[3]); // 802650D0
  {uint32_t ea=c->r[2]+0xFFFFDACCu; c->f[10]=c->ps1[10]=RF32(ea);} // 802650D4
  {uint32_t ea=c->r[2]+0xFFFFDAC8u; c->f[12]=c->ps1[12]=RF32(ea);} // 802650D8
  c->f[9]=c->ps1[9]=S(c->f[1]-c->f[2]); // 802650DC
  {uint32_t ea=c->r[2]+0xFFFFDAD8u; c->f[11]=c->ps1[11]=RF32(ea);} // 802650E0
  c->f[3]=c->ps1[3]=S(c->f[4]+c->f[3]); // 802650E4
  c->f[13]=c->ps1[13]=S(c->f[12]/c->f[0]); // 802650E8
  {uint32_t ea=c->r[2]+0xFFFFDADCu; c->f[0]=c->ps1[0]=RF32(ea);} // 802650EC
  {uint32_t ea=c->r[1]+0x00000028u; c->f[31]=c->ps1[31]=RF32(ea);} // 802650F0
  {uint32_t ea=c->r[3]+0x00000028u; WF32(ea,c->f[0]);} // 802650F4
  {uint32_t ea=c->r[3]+0x00000004u; WF32(ea,c->f[10]);} // 802650F8
  {uint32_t ea=c->r[3]+0x0000000Cu; WF32(ea,c->f[10]);} // 802650FC
  c->f[4]=c->ps1[4]=S(c->f[11]*c->f[5]); // 80265100
  {uint32_t ea=c->r[3]+0x00000010u; WF32(ea,c->f[10]);} // 80265104
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[2]); // 80265108
  c->f[1]=c->ps1[1]=S(c->f[13]*c->f[3]); // 8026510C
  {uint32_t ea=c->r[3]+0x0000001Cu; WF32(ea,c->f[10]);} // 80265110
  c->f[5]=c->ps1[5]=S(c->f[12]/c->f[9]); // 80265114
  {uint32_t ea=c->r[3]+0x00000020u; WF32(ea,c->f[10]);} // 80265118
  {uint32_t ea=c->r[3]+0x00000024u; WF32(ea,c->f[10]);} // 8026511C
  {uint32_t ea=c->r[3]+0x0000002Cu; WF32(ea,c->f[10]);} // 80265120
  c->f[2]=c->ps1[2]=S(c->f[6]*c->f[1]); // 80265124
  c->f[0]=c->ps1[0]=S(c->f[5]*c->f[0]); // 80265128
  c->f[3]=c->ps1[3]=S(c->f[4]*c->f[13]); // 8026512C
  c->f[1]=c->ps1[1]=S(c->f[4]*c->f[5]); // 80265130
  c->f[0]=c->ps1[0]=S(c->f[7]*c->f[0]); // 80265134
  c->f[3]=c->ps1[3]=S(c->f[6]*c->f[3]); // 80265138
  c->f[2]=c->ps1[2]=S(c->f[2]-c->f[8]); // 8026513C
  c->f[1]=c->ps1[1]=S(c->f[7]*c->f[1]); // 80265140
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[31]); // 80265144
  {uint32_t ea=c->r[3]+0x00000000u; WF32(ea,c->f[3]);} // 80265148
  {uint32_t ea=c->r[3]+0x00000008u; WF32(ea,c->f[2]);} // 8026514C
  {uint32_t ea=c->r[3]+0x00000014u; WF32(ea,c->f[1]);} // 80265150
  {uint32_t ea=c->r[3]+0x00000018u; WF32(ea,c->f[0]);} // 80265154
  {uint32_t ea=c->r[1]+0x00000018u; psq_load(c,31,ea,0,0);} // 80265158
  {uint32_t ea=c->r[1]+0x00000010u; c->f[31]=RF64(ea);} // 8026515C
  c->r[1]=c->r[1]+0x00000020u; // 80265160
  return; // 80265164
}

// C_MTXLightPerspective
void f_80265168(Ctx* __restrict c) {
  trace_call(0x80265168u);
  {uint32_t ea=c->r[1]+0xFFFFFFA0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80265168
  c->r[0]=c->lr; // 8026516C
  W32(c->r[1]+0x00000064u,c->r[0]); // 80265170
  {uint32_t ea=c->r[1]+0x00000050u; WF64(ea,c->f[31]);} // 80265174
  {uint32_t ea=c->r[1]+0x00000058u; psq_store(c,31,ea,0,0);} // 80265178
  {uint32_t ea=c->r[1]+0x00000040u; WF64(ea,c->f[30]);} // 8026517C
  {uint32_t ea=c->r[1]+0x00000048u; psq_store(c,30,ea,0,0);} // 80265180
  {uint32_t ea=c->r[1]+0x00000030u; WF64(ea,c->f[29]);} // 80265184
  {uint32_t ea=c->r[1]+0x00000038u; psq_store(c,29,ea,0,0);} // 80265188
  {uint32_t ea=c->r[1]+0x00000020u; WF64(ea,c->f[28]);} // 8026518C
  {uint32_t ea=c->r[1]+0x00000028u; psq_store(c,28,ea,0,0);} // 80265190
  {uint32_t ea=c->r[1]+0x00000010u; WF64(ea,c->f[27]);} // 80265194
  {uint32_t ea=c->r[1]+0x00000018u; psq_store(c,27,ea,0,0);} // 80265198
  c->f[27]=c->f[2]; // 8026519C
  {uint32_t ea=c->r[2]+0xFFFFDAD0u; c->f[7]=c->ps1[7]=RF32(ea);} // 802651A0
  c->f[28]=c->f[3]; // 802651A4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 802651A8
  c->f[29]=c->f[4]; // 802651AC
  c->f[1]=c->ps1[1]=S(c->f[7]*c->f[1]); // 802651B0
  {uint32_t ea=c->r[2]+0xFFFFDAE0u; c->f[0]=c->ps1[0]=RF32(ea);} // 802651B4
  c->f[30]=c->f[5]; // 802651B8
  c->f[31]=c->f[6]; // 802651BC
  c->r[31]=c->r[3]|c->r[3]; // 802651C0
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[1]); // 802651C4
  c->lr=0x802651CCu; f_8029C418(c); // 802651C8
  c->f[5]=c->ps1[5]=S(c->f[1]); // 802651CC
  {uint32_t ea=c->r[2]+0xFFFFDACCu; c->f[3]=c->ps1[3]=RF32(ea);} // 802651D0
  {uint32_t ea=c->r[2]+0xFFFFDAC8u; c->f[4]=c->ps1[4]=RF32(ea);} // 802651D4
  c->f[1]=-c->f[31]; // 802651D8
  {uint32_t ea=c->r[2]+0xFFFFDADCu; c->f[0]=c->ps1[0]=RF32(ea);} // 802651DC
  c->f[2]=-c->f[30]; // 802651E0
  c->f[4]=c->ps1[4]=S(c->f[4]/c->f[5]); // 802651E4
  {uint32_t ea=c->r[31]+0x00000018u; WF32(ea,c->f[1]);} // 802651E8
  {uint32_t ea=c->r[31]+0x00000028u; WF32(ea,c->f[0]);} // 802651EC
  {uint32_t ea=c->r[31]+0x00000004u; WF32(ea,c->f[3]);} // 802651F0
  {uint32_t ea=c->r[31]+0x00000008u; WF32(ea,c->f[2]);} // 802651F4
  {uint32_t ea=c->r[31]+0x0000000Cu; WF32(ea,c->f[3]);} // 802651F8
  c->f[1]=c->ps1[1]=S(c->f[4]/c->f[27]); // 802651FC
  {uint32_t ea=c->r[31]+0x00000010u; WF32(ea,c->f[3]);} // 80265200
  {uint32_t ea=c->r[31]+0x0000001Cu; WF32(ea,c->f[3]);} // 80265204
  {uint32_t ea=c->r[31]+0x00000020u; WF32(ea,c->f[3]);} // 80265208
  {uint32_t ea=c->r[31]+0x00000024u; WF32(ea,c->f[3]);} // 8026520C
  {uint32_t ea=c->r[31]+0x0000002Cu; WF32(ea,c->f[3]);} // 80265210
  c->f[1]=c->ps1[1]=S(c->f[28]*c->f[1]); // 80265214
  c->f[0]=c->ps1[0]=S(c->f[4]*c->f[29]); // 80265218
  {uint32_t ea=c->r[31]+0x00000000u; WF32(ea,c->f[1]);} // 8026521C
  {uint32_t ea=c->r[31]+0x00000014u; WF32(ea,c->f[0]);} // 80265220
  {uint32_t ea=c->r[1]+0x00000058u; psq_load(c,31,ea,0,0);} // 80265224
  {uint32_t ea=c->r[1]+0x00000050u; c->f[31]=RF64(ea);} // 80265228
  {uint32_t ea=c->r[1]+0x00000048u; psq_load(c,30,ea,0,0);} // 8026522C
  {uint32_t ea=c->r[1]+0x00000040u; c->f[30]=RF64(ea);} // 80265230
  {uint32_t ea=c->r[1]+0x00000038u; psq_load(c,29,ea,0,0);} // 80265234
  {uint32_t ea=c->r[1]+0x00000030u; c->f[29]=RF64(ea);} // 80265238
  {uint32_t ea=c->r[1]+0x00000028u; psq_load(c,28,ea,0,0);} // 8026523C
  {uint32_t ea=c->r[1]+0x00000020u; c->f[28]=RF64(ea);} // 80265240
  {uint32_t ea=c->r[1]+0x00000018u; psq_load(c,27,ea,0,0);} // 80265244
  {uint32_t ea=c->r[1]+0x00000010u; c->f[27]=RF64(ea);} // 80265248
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8026524C
  c->r[0]=R32(c->r[1]+0x00000064u); // 80265250
  c->lr=c->r[0]; // 80265254
  c->r[1]=c->r[1]+0x00000060u; // 80265258
  return; // 8026525C
}

// C_MTXLightOrtho
void f_80265260(Ctx* __restrict c) {
  trace_call(0x80265260u);
  c->f[11]=c->ps1[11]=S(c->f[4]-c->f[3]); // 80265260
  {uint32_t ea=c->r[2]+0xFFFFDACCu; c->f[9]=c->ps1[9]=RF32(ea);} // 80265264
  {uint32_t ea=c->r[2]+0xFFFFDAC8u; c->f[10]=c->ps1[10]=RF32(ea);} // 80265268
  c->f[0]=c->ps1[0]=S(c->f[1]-c->f[2]); // 8026526C
  c->f[3]=c->ps1[3]=S(c->f[4]+c->f[3]); // 80265270
  {uint32_t ea=c->r[2]+0xFFFFDAD8u; c->f[4]=c->ps1[4]=RF32(ea);} // 80265274
  c->f[12]=c->ps1[12]=S(c->f[10]/c->f[11]); // 80265278
  {uint32_t ea=c->r[3]+0x00000004u; WF32(ea,c->f[9]);} // 8026527C
  {uint32_t ea=c->r[3]+0x00000008u; WF32(ea,c->f[9]);} // 80265280
  {uint32_t ea=c->r[3]+0x00000010u; WF32(ea,c->f[9]);} // 80265284
  {uint32_t ea=c->r[3]+0x00000018u; WF32(ea,c->f[9]);} // 80265288
  {uint32_t ea=c->r[3]+0x00000020u; WF32(ea,c->f[9]);} // 8026528C
  c->f[11]=c->ps1[11]=S(c->f[10]/c->f[0]); // 80265290
  {uint32_t ea=c->r[3]+0x00000024u; WF32(ea,c->f[9]);} // 80265294
  {uint32_t ea=c->r[3]+0x00000028u; WF32(ea,c->f[9]);} // 80265298
  {uint32_t ea=c->r[3]+0x0000002Cu; WF32(ea,c->f[10]);} // 8026529C
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[2]); // 802652A0
  c->f[1]=-c->f[3]; // 802652A4
  c->f[3]=c->ps1[3]=S(c->f[4]*c->f[12]); // 802652A8
  c->f[0]=-c->f[0]; // 802652AC
  c->f[2]=c->ps1[2]=S(c->f[12]*c->f[1]); // 802652B0
  c->f[1]=c->ps1[1]=S(c->f[4]*c->f[11]); // 802652B4
  c->f[0]=c->ps1[0]=S(c->f[11]*c->f[0]); // 802652B8
  c->f[2]=c->ps1[2]=S(c->f[5]*c->f[2]); // 802652BC
  c->f[3]=c->ps1[3]=S(c->f[3]*c->f[5]); // 802652C0
  c->f[0]=c->ps1[0]=S(c->f[6]*c->f[0]); // 802652C4
  c->f[2]=c->ps1[2]=S(c->f[7]+c->f[2]); // 802652C8
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[6]); // 802652CC
  {uint32_t ea=c->r[3]+0x00000000u; WF32(ea,c->f[3]);} // 802652D0
  c->f[0]=c->ps1[0]=S(c->f[8]+c->f[0]); // 802652D4
  {uint32_t ea=c->r[3]+0x0000000Cu; WF32(ea,c->f[2]);} // 802652D8
  {uint32_t ea=c->r[3]+0x00000014u; WF32(ea,c->f[1]);} // 802652DC
  {uint32_t ea=c->r[3]+0x0000001Cu; WF32(ea,c->f[0]);} // 802652E0
  return; // 802652E4
}

// PSMTXMultVec
void f_802652E8(Ctx* __restrict c) {
  trace_call(0x802652E8u);
  {uint32_t ea=c->r[4]+0x00000000u; psq_load(c,0,ea,0,0);} // 802652E8
  {uint32_t ea=c->r[3]+0x00000000u; psq_load(c,2,ea,0,0);} // 802652EC
  {uint32_t ea=c->r[4]+0x00000008u; psq_load(c,1,ea,1,0);} // 802652F0
  {double t0=S(c->f[2]*c->f[0]), t1=S(c->ps1[2]*c->ps1[0]); c->f[4]=t0; c->ps1[4]=t1;} // 802652F4
  {uint32_t ea=c->r[3]+0x00000008u; psq_load(c,3,ea,0,0);} // 802652F8
  {double t0=S(std::fma(c->f[3],c->f[1],c->f[4])), t1=S(std::fma(c->ps1[3],c->ps1[1],c->ps1[4])); c->f[5]=t0; c->ps1[5]=t1;} // 802652FC
  {uint32_t ea=c->r[3]+0x00000010u; psq_load(c,8,ea,0,0);} // 80265300
  {double t0=S(c->f[5]+c->ps1[5]), t1=S(c->ps1[6]); c->f[6]=t0; c->ps1[6]=t1;} // 80265304
  {uint32_t ea=c->r[3]+0x00000018u; psq_load(c,9,ea,0,0);} // 80265308
  {double t0=S(c->f[8]*c->f[0]), t1=S(c->ps1[8]*c->ps1[0]); c->f[10]=t0; c->ps1[10]=t1;} // 8026530C
  {uint32_t ea=c->r[5]+0x00000000u; psq_store(c,6,ea,1,0);} // 80265310
  {double t0=S(std::fma(c->f[9],c->f[1],c->f[10])), t1=S(std::fma(c->ps1[9],c->ps1[1],c->ps1[10])); c->f[11]=t0; c->ps1[11]=t1;} // 80265314
  {uint32_t ea=c->r[3]+0x00000020u; psq_load(c,2,ea,0,0);} // 80265318
  {double t0=S(c->f[11]+c->ps1[11]), t1=S(c->ps1[12]); c->f[12]=t0; c->ps1[12]=t1;} // 8026531C
  {uint32_t ea=c->r[3]+0x00000028u; psq_load(c,3,ea,0,0);} // 80265320
  {double t0=S(c->f[2]*c->f[0]), t1=S(c->ps1[2]*c->ps1[0]); c->f[4]=t0; c->ps1[4]=t1;} // 80265324
  {uint32_t ea=c->r[5]+0x00000004u; psq_store(c,12,ea,1,0);} // 80265328
  {double t0=S(std::fma(c->f[3],c->f[1],c->f[4])), t1=S(std::fma(c->ps1[3],c->ps1[1],c->ps1[4])); c->f[5]=t0; c->ps1[5]=t1;} // 8026532C
  {double t0=S(c->f[5]+c->ps1[5]), t1=S(c->ps1[6]); c->f[6]=t0; c->ps1[6]=t1;} // 80265330
  {uint32_t ea=c->r[5]+0x00000008u; psq_store(c,6,ea,1,0);} // 80265334
  return; // 80265338
}

// PSMTXMultVecArray
void f_8026533C(Ctx* __restrict c) {
  trace_call(0x8026533Cu);
  {uint32_t ea=c->r[3]+0x00000000u; psq_load(c,13,ea,0,0);} // 8026533C
  {uint32_t ea=c->r[3]+0x00000010u; psq_load(c,12,ea,0,0);} // 80265340
  c->r[6]=c->r[6]+0xFFFFFFFFu; // 80265344
  {uint32_t ea=c->r[3]+0x00000008u; psq_load(c,11,ea,0,0);} // 80265348
  {double t0=S(c->f[13]), t1=S(c->f[12]); c->f[0]=t0; c->ps1[0]=t1;} // 8026534C
  c->r[5]=c->r[5]+0xFFFFFFFCu; // 80265350
  {uint32_t ea=c->r[3]+0x00000018u; psq_load(c,10,ea,0,0);} // 80265354
  {double t0=S(c->ps1[13]), t1=S(c->ps1[12]); c->f[1]=t0; c->ps1[1]=t1;} // 80265358
  c->ctr=c->r[6]; // 8026535C
  {uint32_t ea=c->r[3]+0x00000020u; psq_load(c,4,ea,0,0);} // 80265360
  {double t0=S(c->f[11]), t1=S(c->f[10]); c->f[2]=t0; c->ps1[2]=t1;} // 80265364
  {uint32_t ea=c->r[3]+0x00000028u; psq_load(c,5,ea,0,0);} // 80265368
  {double t0=S(c->ps1[11]), t1=S(c->ps1[10]); c->f[3]=t0; c->ps1[3]=t1;} // 8026536C
  {uint32_t ea=c->r[4]+0x00000000u; psq_load(c,6,ea,0,0);} // 80265370
  {uint32_t ea=c->r[4]+0x00000008u; psq_load(c,7,ea,1,0); c->r[4]=ea;} // 80265374
  {double t0=S(std::fma(c->f[0],c->f[6],c->f[3])), t1=S(std::fma(c->ps1[0],c->f[6],c->ps1[3])); c->f[8]=t0; c->ps1[8]=t1;} // 80265378
  {double t0=S(c->f[4]*c->f[6]), t1=S(c->ps1[4]*c->ps1[6]); c->f[9]=t0; c->ps1[9]=t1;} // 8026537C
  {double t0=S(std::fma(c->f[1],c->ps1[6],c->f[8])), t1=S(std::fma(c->ps1[1],c->ps1[6],c->ps1[8])); c->f[8]=t0; c->ps1[8]=t1;} // 80265380
  {double t0=S(std::fma(c->f[5],c->f[7],c->f[9])), t1=S(std::fma(c->ps1[5],c->ps1[7],c->ps1[9])); c->f[10]=t0; c->ps1[10]=t1;} // 80265384
L_80265388:;
  {uint32_t ea=c->r[4]+0x00000004u; psq_load(c,6,ea,0,0); c->r[4]=ea;} // 80265388
  {double t0=S(std::fma(c->f[2],c->f[7],c->f[8])), t1=S(std::fma(c->ps1[2],c->f[7],c->ps1[8])); c->f[12]=t0; c->ps1[12]=t1;} // 8026538C
  {uint32_t ea=c->r[4]+0x00000008u; psq_load(c,7,ea,1,0); c->r[4]=ea;} // 80265390
  {double t0=S(c->f[10]+c->ps1[10]), t1=S(c->ps1[9]); c->f[13]=t0; c->ps1[13]=t1;} // 80265394
  {double t0=S(std::fma(c->f[0],c->f[6],c->f[3])), t1=S(std::fma(c->ps1[0],c->f[6],c->ps1[3])); c->f[8]=t0; c->ps1[8]=t1;} // 80265398
  {double t0=S(c->f[4]*c->f[6]), t1=S(c->ps1[4]*c->ps1[6]); c->f[9]=t0; c->ps1[9]=t1;} // 8026539C
  {uint32_t ea=c->r[5]+0x00000004u; psq_store(c,12,ea,0,0); c->r[5]=ea;} // 802653A0
  {double t0=S(std::fma(c->f[1],c->ps1[6],c->f[8])), t1=S(std::fma(c->ps1[1],c->ps1[6],c->ps1[8])); c->f[8]=t0; c->ps1[8]=t1;} // 802653A4
  {uint32_t ea=c->r[5]+0x00000008u; psq_store(c,13,ea,1,0); c->r[5]=ea;} // 802653A8
  {double t0=S(std::fma(c->f[5],c->f[7],c->f[9])), t1=S(std::fma(c->ps1[5],c->ps1[7],c->ps1[9])); c->f[10]=t0; c->ps1[10]=t1;} // 802653AC
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80265388; } // 802653B0
  {double t0=S(std::fma(c->f[2],c->f[7],c->f[8])), t1=S(std::fma(c->ps1[2],c->f[7],c->ps1[8])); c->f[12]=t0; c->ps1[12]=t1;} // 802653B4
  {double t0=S(c->f[10]+c->ps1[10]), t1=S(c->ps1[9]); c->f[13]=t0; c->ps1[13]=t1;} // 802653B8
  {uint32_t ea=c->r[5]+0x00000004u; psq_store(c,12,ea,0,0); c->r[5]=ea;} // 802653BC
  {uint32_t ea=c->r[5]+0x00000008u; psq_store(c,13,ea,1,0); c->r[5]=ea;} // 802653C0
  return; // 802653C4
}

// C_MTXFrustum
void f_802653C8(Ctx* __restrict c) {
  trace_call(0x802653C8u);
  c->f[0]=c->ps1[0]=S(c->f[4]-c->f[3]); // 802653C8
  {uint32_t ea=c->r[2]+0xFFFFDAF0u; c->f[9]=c->ps1[9]=RF32(ea);} // 802653CC
  {uint32_t ea=c->r[2]+0xFFFFDAE8u; c->f[11]=c->ps1[11]=RF32(ea);} // 802653D0
  c->f[8]=c->ps1[8]=S(c->f[1]-c->f[2]); // 802653D4
  c->f[7]=c->ps1[7]=S(c->f[6]-c->f[5]); // 802653D8
  {uint32_t ea=c->r[2]+0xFFFFDAECu; c->f[10]=c->ps1[10]=RF32(ea);} // 802653DC
  c->f[12]=c->ps1[12]=S(c->f[11]/c->f[0]); // 802653E0
  {uint32_t ea=c->r[2]+0xFFFFDAF4u; c->f[0]=c->ps1[0]=RF32(ea);} // 802653E4
  {uint32_t ea=c->r[3]+0x00000004u; WF32(ea,c->f[9]);} // 802653E8
  {uint32_t ea=c->r[3]+0x00000038u; WF32(ea,c->f[0]);} // 802653EC
  {uint32_t ea=c->r[3]+0x0000000Cu; WF32(ea,c->f[9]);} // 802653F0
  {uint32_t ea=c->r[3]+0x00000010u; WF32(ea,c->f[9]);} // 802653F4
  c->f[8]=c->ps1[8]=S(c->f[11]/c->f[8]); // 802653F8
  {uint32_t ea=c->r[3]+0x0000001Cu; WF32(ea,c->f[9]);} // 802653FC
  {uint32_t ea=c->r[3]+0x00000020u; WF32(ea,c->f[9]);} // 80265400
  {uint32_t ea=c->r[3]+0x00000024u; WF32(ea,c->f[9]);} // 80265404
  {uint32_t ea=c->r[3]+0x00000030u; WF32(ea,c->f[9]);} // 80265408
  {uint32_t ea=c->r[3]+0x00000034u; WF32(ea,c->f[9]);} // 8026540C
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[2]); // 80265410
  {uint32_t ea=c->r[3]+0x0000003Cu; WF32(ea,c->f[9]);} // 80265414
  c->f[3]=c->ps1[3]=S(c->f[4]+c->f[3]); // 80265418
  c->f[10]=c->ps1[10]=S(c->f[10]*c->f[5]); // 8026541C
  c->f[0]=c->ps1[0]=S(c->f[8]*c->f[0]); // 80265420
  c->f[2]=c->ps1[2]=S(c->f[12]*c->f[3]); // 80265424
  c->f[1]=c->ps1[1]=S(c->f[10]*c->f[8]); // 80265428
  c->f[4]=c->ps1[4]=S(c->f[10]*c->f[12]); // 8026542C
  {uint32_t ea=c->r[3]+0x00000018u; WF32(ea,c->f[0]);} // 80265430
  c->f[6]=c->ps1[6]=S(c->f[6]*c->f[5]); // 80265434
  {uint32_t ea=c->r[3]+0x00000014u; WF32(ea,c->f[1]);} // 80265438
  c->f[3]=c->ps1[3]=S(c->f[11]/c->f[7]); // 8026543C
  {uint32_t ea=c->r[3]+0x00000000u; WF32(ea,c->f[4]);} // 80265440
  {uint32_t ea=c->r[3]+0x00000008u; WF32(ea,c->f[2]);} // 80265444
  c->f[1]=-c->f[5]; // 80265448
  c->f[0]=-c->f[6]; // 8026544C
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[3]); // 80265450
  c->f[0]=c->ps1[0]=S(c->f[3]*c->f[0]); // 80265454
  {uint32_t ea=c->r[3]+0x00000028u; WF32(ea,c->f[1]);} // 80265458
  {uint32_t ea=c->r[3]+0x0000002Cu; WF32(ea,c->f[0]);} // 8026545C
  return; // 80265460
}

// C_MTXPerspective
void f_80265464(Ctx* __restrict c) {
  trace_call(0x80265464u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80265464
  c->r[0]=c->lr; // 80265468
  W32(c->r[1]+0x00000044u,c->r[0]); // 8026546C
  {uint32_t ea=c->r[1]+0x00000030u; WF64(ea,c->f[31]);} // 80265470
  {uint32_t ea=c->r[1]+0x00000038u; psq_store(c,31,ea,0,0);} // 80265474
  {uint32_t ea=c->r[1]+0x00000020u; WF64(ea,c->f[30]);} // 80265478
  {uint32_t ea=c->r[1]+0x00000028u; psq_store(c,30,ea,0,0);} // 8026547C
  {uint32_t ea=c->r[1]+0x00000010u; WF64(ea,c->f[29]);} // 80265480
  {uint32_t ea=c->r[1]+0x00000018u; psq_store(c,29,ea,0,0);} // 80265484
  c->f[29]=c->f[2]; // 80265488
  {uint32_t ea=c->r[2]+0xFFFFDAF8u; c->f[5]=c->ps1[5]=RF32(ea);} // 8026548C
  c->f[30]=c->f[3]; // 80265490
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80265494
  c->f[31]=c->f[4]; // 80265498
  c->f[1]=c->ps1[1]=S(c->f[5]*c->f[1]); // 8026549C
  {uint32_t ea=c->r[2]+0xFFFFDAFCu; c->f[0]=c->ps1[0]=RF32(ea);} // 802654A0
  c->r[31]=c->r[3]|c->r[3]; // 802654A4
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[1]); // 802654A8
  c->lr=0x802654B0u; f_8029C418(c); // 802654AC
  c->f[4]=c->ps1[4]=S(c->f[1]); // 802654B0
  {uint32_t ea=c->r[2]+0xFFFFDAF0u; c->f[3]=c->ps1[3]=RF32(ea);} // 802654B4
  {uint32_t ea=c->r[2]+0xFFFFDAE8u; c->f[5]=c->ps1[5]=RF32(ea);} // 802654B8
  c->f[2]=c->ps1[2]=S(c->f[31]-c->f[30]); // 802654BC
  {uint32_t ea=c->r[2]+0xFFFFDAF4u; c->f[0]=c->ps1[0]=RF32(ea);} // 802654C0
  c->f[1]=c->ps1[1]=S(c->f[31]*c->f[30]); // 802654C4
  c->f[6]=c->ps1[6]=S(c->f[5]/c->f[4]); // 802654C8
  {uint32_t ea=c->r[31]+0x00000038u; WF32(ea,c->f[0]);} // 802654CC
  {uint32_t ea=c->r[31]+0x00000004u; WF32(ea,c->f[3]);} // 802654D0
  {uint32_t ea=c->r[31]+0x00000008u; WF32(ea,c->f[3]);} // 802654D4
  {uint32_t ea=c->r[31]+0x0000000Cu; WF32(ea,c->f[3]);} // 802654D8
  {uint32_t ea=c->r[31]+0x00000010u; WF32(ea,c->f[3]);} // 802654DC
  c->f[5]=c->ps1[5]=S(c->f[5]/c->f[2]); // 802654E0
  {uint32_t ea=c->r[31]+0x00000018u; WF32(ea,c->f[3]);} // 802654E4
  {uint32_t ea=c->r[31]+0x00000014u; WF32(ea,c->f[6]);} // 802654E8
  {uint32_t ea=c->r[31]+0x0000001Cu; WF32(ea,c->f[3]);} // 802654EC
  {uint32_t ea=c->r[31]+0x00000020u; WF32(ea,c->f[3]);} // 802654F0
  {uint32_t ea=c->r[31]+0x00000024u; WF32(ea,c->f[3]);} // 802654F4
  c->f[4]=c->ps1[4]=S(c->f[6]/c->f[29]); // 802654F8
  {uint32_t ea=c->r[31]+0x00000030u; WF32(ea,c->f[3]);} // 802654FC
  {uint32_t ea=c->r[31]+0x00000034u; WF32(ea,c->f[3]);} // 80265500
  {uint32_t ea=c->r[31]+0x0000003Cu; WF32(ea,c->f[3]);} // 80265504
  c->f[0]=-c->f[1]; // 80265508
  {uint32_t ea=c->r[31]+0x00000000u; WF32(ea,c->f[4]);} // 8026550C
  c->f[2]=-c->f[30]; // 80265510
  c->f[0]=c->ps1[0]=S(c->f[5]*c->f[0]); // 80265514
  c->f[1]=c->ps1[1]=S(c->f[2]*c->f[5]); // 80265518
  {uint32_t ea=c->r[31]+0x0000002Cu; WF32(ea,c->f[0]);} // 8026551C
  {uint32_t ea=c->r[31]+0x00000028u; WF32(ea,c->f[1]);} // 80265520
  {uint32_t ea=c->r[1]+0x00000038u; psq_load(c,31,ea,0,0);} // 80265524
  {uint32_t ea=c->r[1]+0x00000030u; c->f[31]=RF64(ea);} // 80265528
  {uint32_t ea=c->r[1]+0x00000028u; psq_load(c,30,ea,0,0);} // 8026552C
  {uint32_t ea=c->r[1]+0x00000020u; c->f[30]=RF64(ea);} // 80265530
  {uint32_t ea=c->r[1]+0x00000018u; psq_load(c,29,ea,0,0);} // 80265534
  {uint32_t ea=c->r[1]+0x00000010u; c->f[29]=RF64(ea);} // 80265538
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8026553C
  c->r[0]=R32(c->r[1]+0x00000044u); // 80265540
  c->lr=c->r[0]; // 80265544
  c->r[1]=c->r[1]+0x00000040u; // 80265548
  return; // 8026554C
}

// C_MTXOrtho
void f_80265550(Ctx* __restrict c) {
  trace_call(0x80265550u);
  c->f[11]=c->ps1[11]=S(c->f[4]-c->f[3]); // 80265550
  {uint32_t ea=c->r[2]+0xFFFFDAF0u; c->f[8]=c->ps1[8]=RF32(ea);} // 80265554
  {uint32_t ea=c->r[2]+0xFFFFDAE8u; c->f[10]=c->ps1[10]=RF32(ea);} // 80265558
  c->f[7]=c->ps1[7]=S(c->f[1]-c->f[2]); // 8026555C
  c->f[0]=c->ps1[0]=S(c->f[6]-c->f[5]); // 80265560
  {uint32_t ea=c->r[2]+0xFFFFDAECu; c->f[9]=c->ps1[9]=RF32(ea);} // 80265564
  c->f[12]=c->ps1[12]=S(c->f[10]/c->f[11]); // 80265568
  {uint32_t ea=c->r[2]+0xFFFFDAF4u; c->f[5]=c->ps1[5]=RF32(ea);} // 8026556C
  {uint32_t ea=c->r[3]+0x00000004u; WF32(ea,c->f[8]);} // 80265570
  {uint32_t ea=c->r[3]+0x00000008u; WF32(ea,c->f[8]);} // 80265574
  {uint32_t ea=c->r[3]+0x00000010u; WF32(ea,c->f[8]);} // 80265578
  {uint32_t ea=c->r[3]+0x00000018u; WF32(ea,c->f[8]);} // 8026557C
  c->f[11]=c->ps1[11]=S(c->f[10]/c->f[7]); // 80265580
  {uint32_t ea=c->r[3]+0x00000020u; WF32(ea,c->f[8]);} // 80265584
  {uint32_t ea=c->r[3]+0x00000024u; WF32(ea,c->f[8]);} // 80265588
  {uint32_t ea=c->r[3]+0x00000030u; WF32(ea,c->f[8]);} // 8026558C
  {uint32_t ea=c->r[3]+0x00000034u; WF32(ea,c->f[8]);} // 80265590
  {uint32_t ea=c->r[3]+0x00000038u; WF32(ea,c->f[8]);} // 80265594
  c->f[7]=c->ps1[7]=S(c->f[10]/c->f[0]); // 80265598
  {uint32_t ea=c->r[3]+0x0000003Cu; WF32(ea,c->f[10]);} // 8026559C
  c->f[0]=-c->f[6]; // 802655A0
  c->f[1]=c->ps1[1]=S(c->f[1]+c->f[2]); // 802655A4
  c->f[3]=c->ps1[3]=S(c->f[4]+c->f[3]); // 802655A8
  c->f[6]=c->ps1[6]=S(c->f[9]*c->f[12]); // 802655AC
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[7]); // 802655B0
  c->f[2]=-c->f[3]; // 802655B4
  c->f[3]=c->ps1[3]=S(c->f[9]*c->f[11]); // 802655B8
  {uint32_t ea=c->r[3]+0x00000000u; WF32(ea,c->f[6]);} // 802655BC
  c->f[1]=-c->f[1]; // 802655C0
  c->f[4]=c->ps1[4]=S(c->f[12]*c->f[2]); // 802655C4
  {uint32_t ea=c->r[3]+0x0000002Cu; WF32(ea,c->f[0]);} // 802655C8
  c->f[2]=c->ps1[2]=S(c->f[11]*c->f[1]); // 802655CC
  {uint32_t ea=c->r[3]+0x00000014u; WF32(ea,c->f[3]);} // 802655D0
  c->f[1]=c->ps1[1]=S(c->f[5]*c->f[7]); // 802655D4
  {uint32_t ea=c->r[3]+0x0000000Cu; WF32(ea,c->f[4]);} // 802655D8
  {uint32_t ea=c->r[3]+0x0000001Cu; WF32(ea,c->f[2]);} // 802655DC
  {uint32_t ea=c->r[3]+0x00000028u; WF32(ea,c->f[1]);} // 802655E0
  return; // 802655E4
}

// fn_802655E8
void f_802655E8(Ctx* __restrict c) {
  trace_call(0x802655E8u);
  {uint32_t ea=c->r[3]+0x00000000u; psq_load(c,0,ea,0,0);} // 802655E8
  {uint32_t ea=c->r[4]+0x00000000u; psq_load(c,2,ea,0,0);} // 802655EC
  {double t0=S(c->f[2]*c->f[0]), t1=S(c->ps1[2]*c->f[0]); c->f[6]=t0; c->ps1[6]=t1;} // 802655F0
  {uint32_t ea=c->r[4]+0x00000010u; psq_load(c,3,ea,0,0);} // 802655F4
  {uint32_t ea=c->r[4]+0x00000020u; psq_load(c,4,ea,0,0);} // 802655F8
  {double t0=S(std::fma(c->f[3],c->ps1[0],c->f[6])), t1=S(std::fma(c->ps1[3],c->ps1[0],c->ps1[6])); c->f[6]=t0; c->ps1[6]=t1;} // 802655FC
  {uint32_t ea=c->r[3]+0x00000008u; psq_load(c,1,ea,0,0);} // 80265600
  {uint32_t ea=c->r[4]+0x00000030u; psq_load(c,5,ea,0,0);} // 80265604
  {double t0=S(std::fma(c->f[4],c->f[1],c->f[6])), t1=S(std::fma(c->ps1[4],c->f[1],c->ps1[6])); c->f[6]=t0; c->ps1[6]=t1;} // 80265608
  {uint32_t ea=c->r[3]+0x00000010u; psq_load(c,0,ea,0,0);} // 8026560C
  {double t0=S(std::fma(c->f[5],c->ps1[1],c->f[6])), t1=S(std::fma(c->ps1[5],c->ps1[1],c->ps1[6])); c->f[6]=t0; c->ps1[6]=t1;} // 80265610
  {uint32_t ea=c->r[3]+0x00000018u; psq_load(c,1,ea,0,0);} // 80265614
  {double t0=S(c->f[2]*c->f[0]), t1=S(c->ps1[2]*c->f[0]); c->f[8]=t0; c->ps1[8]=t1;} // 80265618
  {double t0=S(std::fma(c->f[3],c->ps1[0],c->f[8])), t1=S(std::fma(c->ps1[3],c->ps1[0],c->ps1[8])); c->f[8]=t0; c->ps1[8]=t1;} // 8026561C
  {uint32_t ea=c->r[3]+0x00000020u; psq_load(c,0,ea,0,0);} // 80265620
  {double t0=S(std::fma(c->f[4],c->f[1],c->f[8])), t1=S(std::fma(c->ps1[4],c->f[1],c->ps1[8])); c->f[8]=t0; c->ps1[8]=t1;} // 80265624
  {double t0=S(std::fma(c->f[5],c->ps1[1],c->f[8])), t1=S(std::fma(c->ps1[5],c->ps1[1],c->ps1[8])); c->f[8]=t0; c->ps1[8]=t1;} // 80265628
  {uint32_t ea=c->r[3]+0x00000028u; psq_load(c,1,ea,0,0);} // 8026562C
  {double t0=S(c->f[2]*c->f[0]), t1=S(c->ps1[2]*c->f[0]); c->f[10]=t0; c->ps1[10]=t1;} // 80265630
  {double t0=S(std::fma(c->f[3],c->ps1[0],c->f[10])), t1=S(std::fma(c->ps1[3],c->ps1[0],c->ps1[10])); c->f[10]=t0; c->ps1[10]=t1;} // 80265634
  {uint32_t ea=c->r[3]+0x00000030u; psq_load(c,0,ea,0,0);} // 80265638
  {double t0=S(std::fma(c->f[4],c->f[1],c->f[10])), t1=S(std::fma(c->ps1[4],c->f[1],c->ps1[10])); c->f[10]=t0; c->ps1[10]=t1;} // 8026563C
  {double t0=S(std::fma(c->f[5],c->ps1[1],c->f[10])), t1=S(std::fma(c->ps1[5],c->ps1[1],c->ps1[10])); c->f[10]=t0; c->ps1[10]=t1;} // 80265640
  {uint32_t ea=c->r[3]+0x00000038u; psq_load(c,1,ea,0,0);} // 80265644
  {double t0=S(c->f[2]*c->f[0]), t1=S(c->ps1[2]*c->f[0]); c->f[12]=t0; c->ps1[12]=t1;} // 80265648
  {uint32_t ea=c->r[4]+0x00000008u; psq_load(c,2,ea,0,0);} // 8026564C
  {double t0=S(std::fma(c->f[3],c->ps1[0],c->f[12])), t1=S(std::fma(c->ps1[3],c->ps1[0],c->ps1[12])); c->f[12]=t0; c->ps1[12]=t1;} // 80265650
  {uint32_t ea=c->r[3]+0x00000000u; psq_load(c,0,ea,0,0);} // 80265654
  {double t0=S(std::fma(c->f[4],c->f[1],c->f[12])), t1=S(std::fma(c->ps1[4],c->f[1],c->ps1[12])); c->f[12]=t0; c->ps1[12]=t1;} // 80265658
  {uint32_t ea=c->r[4]+0x00000018u; psq_load(c,3,ea,0,0);} // 8026565C
  {double t0=S(std::fma(c->f[5],c->ps1[1],c->f[12])), t1=S(std::fma(c->ps1[5],c->ps1[1],c->ps1[12])); c->f[12]=t0; c->ps1[12]=t1;} // 80265660
  {uint32_t ea=c->r[3]+0x00000008u; psq_load(c,1,ea,0,0);} // 80265664
  {double t0=S(c->f[2]*c->f[0]), t1=S(c->ps1[2]*c->f[0]); c->f[7]=t0; c->ps1[7]=t1;} // 80265668
  {uint32_t ea=c->r[4]+0x00000028u; psq_load(c,4,ea,0,0);} // 8026566C
  {double t0=S(std::fma(c->f[3],c->ps1[0],c->f[7])), t1=S(std::fma(c->ps1[3],c->ps1[0],c->ps1[7])); c->f[7]=t0; c->ps1[7]=t1;} // 80265670
  {uint32_t ea=c->r[4]+0x00000038u; psq_load(c,5,ea,0,0);} // 80265674
  {double t0=S(std::fma(c->f[4],c->f[1],c->f[7])), t1=S(std::fma(c->ps1[4],c->f[1],c->ps1[7])); c->f[7]=t0; c->ps1[7]=t1;} // 80265678
  {uint32_t ea=c->r[3]+0x00000010u; psq_load(c,0,ea,0,0);} // 8026567C
  {double t0=S(std::fma(c->f[5],c->ps1[1],c->f[7])), t1=S(std::fma(c->ps1[5],c->ps1[1],c->ps1[7])); c->f[7]=t0; c->ps1[7]=t1;} // 80265680
  {uint32_t ea=c->r[3]+0x00000018u; psq_load(c,1,ea,0,0);} // 80265684
  {double t0=S(c->f[2]*c->f[0]), t1=S(c->ps1[2]*c->f[0]); c->f[9]=t0; c->ps1[9]=t1;} // 80265688
  {uint32_t ea=c->r[5]+0x00000000u; psq_store(c,6,ea,0,0);} // 8026568C
  {double t0=S(std::fma(c->f[3],c->ps1[0],c->f[9])), t1=S(std::fma(c->ps1[3],c->ps1[0],c->ps1[9])); c->f[9]=t0; c->ps1[9]=t1;} // 80265690
  {uint32_t ea=c->r[3]+0x00000020u; psq_load(c,0,ea,0,0);} // 80265694
  {double t0=S(std::fma(c->f[4],c->f[1],c->f[9])), t1=S(std::fma(c->ps1[4],c->f[1],c->ps1[9])); c->f[9]=t0; c->ps1[9]=t1;} // 80265698
  {uint32_t ea=c->r[5]+0x00000010u; psq_store(c,8,ea,0,0);} // 8026569C
  {double t0=S(std::fma(c->f[5],c->ps1[1],c->f[9])), t1=S(std::fma(c->ps1[5],c->ps1[1],c->ps1[9])); c->f[9]=t0; c->ps1[9]=t1;} // 802656A0
  {uint32_t ea=c->r[3]+0x00000028u; psq_load(c,1,ea,0,0);} // 802656A4
  {double t0=S(c->f[2]*c->f[0]), t1=S(c->ps1[2]*c->f[0]); c->f[11]=t0; c->ps1[11]=t1;} // 802656A8
  {uint32_t ea=c->r[5]+0x00000020u; psq_store(c,10,ea,0,0);} // 802656AC
  {double t0=S(std::fma(c->f[3],c->ps1[0],c->f[11])), t1=S(std::fma(c->ps1[3],c->ps1[0],c->ps1[11])); c->f[11]=t0; c->ps1[11]=t1;} // 802656B0
  {uint32_t ea=c->r[3]+0x00000030u; psq_load(c,0,ea,0,0);} // 802656B4
  {double t0=S(std::fma(c->f[4],c->f[1],c->f[11])), t1=S(std::fma(c->ps1[4],c->f[1],c->ps1[11])); c->f[11]=t0; c->ps1[11]=t1;} // 802656B8
  {uint32_t ea=c->r[5]+0x00000030u; psq_store(c,12,ea,0,0);} // 802656BC
  {double t0=S(std::fma(c->f[5],c->ps1[1],c->f[11])), t1=S(std::fma(c->ps1[5],c->ps1[1],c->ps1[11])); c->f[11]=t0; c->ps1[11]=t1;} // 802656C0
  {uint32_t ea=c->r[3]+0x00000038u; psq_load(c,1,ea,0,0);} // 802656C4
  {double t0=S(c->f[2]*c->f[0]), t1=S(c->ps1[2]*c->f[0]); c->f[13]=t0; c->ps1[13]=t1;} // 802656C8
  {uint32_t ea=c->r[5]+0x00000008u; psq_store(c,7,ea,0,0);} // 802656CC
  {double t0=S(std::fma(c->f[3],c->ps1[0],c->f[13])), t1=S(std::fma(c->ps1[3],c->ps1[0],c->ps1[13])); c->f[13]=t0; c->ps1[13]=t1;} // 802656D0
  {uint32_t ea=c->r[5]+0x00000018u; psq_store(c,9,ea,0,0);} // 802656D4
  {double t0=S(std::fma(c->f[4],c->f[1],c->f[13])), t1=S(std::fma(c->ps1[4],c->f[1],c->ps1[13])); c->f[13]=t0; c->ps1[13]=t1;} // 802656D8
  {uint32_t ea=c->r[5]+0x00000028u; psq_store(c,11,ea,0,0);} // 802656DC
  {double t0=S(std::fma(c->f[5],c->ps1[1],c->f[13])), t1=S(std::fma(c->ps1[5],c->ps1[1],c->ps1[13])); c->f[13]=t0; c->ps1[13]=t1;} // 802656E0
  {uint32_t ea=c->r[5]+0x00000038u; psq_store(c,13,ea,0,0);} // 802656E4
  return; // 802656E8
}

// PSVECAdd
void f_802656EC(Ctx* __restrict c) {
  trace_call(0x802656ECu);
  {uint32_t ea=c->r[3]+0x00000000u; psq_load(c,2,ea,0,0);} // 802656EC
  {uint32_t ea=c->r[4]+0x00000000u; psq_load(c,4,ea,0,0);} // 802656F0
  {double t0=S(c->f[2]+c->f[4]), t1=S(c->ps1[2]+c->ps1[4]); c->f[6]=t0; c->ps1[6]=t1;} // 802656F4
  {uint32_t ea=c->r[5]+0x00000000u; psq_store(c,6,ea,0,0);} // 802656F8
  {uint32_t ea=c->r[3]+0x00000008u; psq_load(c,3,ea,1,0);} // 802656FC
  {uint32_t ea=c->r[4]+0x00000008u; psq_load(c,5,ea,1,0);} // 80265700
  {double t0=S(c->f[3]+c->f[5]), t1=S(c->ps1[3]+c->ps1[5]); c->f[7]=t0; c->ps1[7]=t1;} // 80265704
  {uint32_t ea=c->r[5]+0x00000008u; psq_store(c,7,ea,1,0);} // 80265708
  return; // 8026570C
}

// fn_80265710
void f_80265710(Ctx* __restrict c) {
  trace_call(0x80265710u);
  {uint32_t ea=c->r[3]+0x00000000u; psq_load(c,2,ea,0,0);} // 80265710
  {uint32_t ea=c->r[4]+0x00000000u; psq_load(c,4,ea,0,0);} // 80265714
  {double t0=S(c->f[2]-c->f[4]), t1=S(c->ps1[2]-c->ps1[4]); c->f[6]=t0; c->ps1[6]=t1;} // 80265718
  {uint32_t ea=c->r[5]+0x00000000u; psq_store(c,6,ea,0,0);} // 8026571C
  {uint32_t ea=c->r[3]+0x00000008u; psq_load(c,3,ea,1,0);} // 80265720
  {uint32_t ea=c->r[4]+0x00000008u; psq_load(c,5,ea,1,0);} // 80265724
  {double t0=S(c->f[3]-c->f[5]), t1=S(c->ps1[3]-c->ps1[5]); c->f[7]=t0; c->ps1[7]=t1;} // 80265728
  {uint32_t ea=c->r[5]+0x00000008u; psq_store(c,7,ea,1,0);} // 8026572C
  return; // 80265730
}

// fn_80265734
void f_80265734(Ctx* __restrict c) {
  trace_call(0x80265734u);
  {uint32_t ea=c->r[3]+0x00000000u; psq_load(c,0,ea,0,0);} // 80265734
  {uint32_t ea=c->r[3]+0x00000008u; psq_load(c,2,ea,1,0);} // 80265738
  {double t0=S(c->f[0]*c->f[1]), t1=S(c->ps1[0]*c->f[1]); c->f[0]=t0; c->ps1[0]=t1;} // 8026573C
  {double t0=S(c->f[2]*c->f[1]), t1=S(c->ps1[2]*c->f[1]); c->f[1]=t0; c->ps1[1]=t1;} // 80265740
  {uint32_t ea=c->r[4]+0x00000000u; psq_store(c,0,ea,0,0);} // 80265744
  {uint32_t ea=c->r[4]+0x00000008u; psq_store(c,1,ea,1,0);} // 80265748
  return; // 8026574C
}

// PSVECNormalize
void f_80265750(Ctx* __restrict c) {
  trace_call(0x80265750u);
  {uint32_t ea=c->r[3]+0x00000000u; psq_load(c,2,ea,0,0);} // 80265750
  {uint32_t ea=c->r[3]+0x00000008u; psq_load(c,3,ea,1,0);} // 80265754
  {double t0=S(c->f[2]*c->f[2]), t1=S(c->ps1[2]*c->ps1[2]); c->f[5]=t0; c->ps1[5]=t1;} // 80265758
  {uint32_t ea=c->r[2]+0xFFFFDB00u; c->f[0]=c->ps1[0]=RF32(ea);} // 8026575C
  {uint32_t ea=c->r[2]+0xFFFFDB04u; c->f[1]=c->ps1[1]=RF32(ea);} // 80265760
  {double t0=S(std::fma(c->f[3],c->f[3],c->f[5])), t1=S(std::fma(c->ps1[3],c->ps1[3],c->ps1[5])); c->f[4]=t0; c->ps1[4]=t1;} // 80265764
  {double t0=S(c->f[4]+c->ps1[5]), t1=S(c->ps1[3]); c->f[4]=t0; c->ps1[4]=t1;} // 80265768
  c->f[5]=frsqrte(c->f[4]); // 8026576C
  c->f[6]=c->ps1[6]=S(c->f[5]*c->f[5]); // 80265770
  c->f[0]=c->ps1[0]=S(c->f[5]*c->f[0]); // 80265774
  c->f[6]=c->ps1[6]=S(-std::fma(c->f[6],c->f[4],-c->f[1])); // 80265778
  c->f[5]=c->ps1[5]=S(c->f[6]*c->f[0]); // 8026577C
  {double t0=S(c->f[2]*c->f[5]), t1=S(c->ps1[2]*c->f[5]); c->f[2]=t0; c->ps1[2]=t1;} // 80265780
  {double t0=S(c->f[3]*c->f[5]), t1=S(c->ps1[3]*c->f[5]); c->f[3]=t0; c->ps1[3]=t1;} // 80265784
  {uint32_t ea=c->r[4]+0x00000000u; psq_store(c,2,ea,0,0);} // 80265788
  {uint32_t ea=c->r[4]+0x00000008u; psq_store(c,3,ea,1,0);} // 8026578C
  return; // 80265790
}

// fn_80265794
void f_80265794(Ctx* __restrict c) {
  trace_call(0x80265794u);
  {uint32_t ea=c->r[3]+0x00000000u; psq_load(c,0,ea,0,0);} // 80265794
  {uint32_t ea=c->r[3]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 80265798
  {double t0=S(c->f[0]*c->f[0]), t1=S(c->ps1[0]*c->ps1[0]); c->f[0]=t0; c->ps1[0]=t1;} // 8026579C
  {double t0=S(std::fma(c->f[1],c->f[1],c->f[0])), t1=S(std::fma(c->ps1[1],c->ps1[1],c->ps1[0])); c->f[1]=t0; c->ps1[1]=t1;} // 802657A0
  {double t0=S(c->f[1]+c->ps1[0]), t1=S(c->ps1[0]); c->f[1]=t0; c->ps1[1]=t1;} // 802657A4
  return; // 802657A8
}

// PSVECMag
void f_802657AC(Ctx* __restrict c) {
  trace_call(0x802657ACu);
  {uint32_t ea=c->r[3]+0x00000000u; psq_load(c,0,ea,0,0);} // 802657AC
  {uint32_t ea=c->r[2]+0xFFFFDB00u; c->f[4]=c->ps1[4]=RF32(ea);} // 802657B0
  {double t0=S(c->f[0]*c->f[0]), t1=S(c->ps1[0]*c->ps1[0]); c->f[0]=t0; c->ps1[0]=t1;} // 802657B4
  {uint32_t ea=c->r[3]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 802657B8
  c->f[2]=c->ps1[2]=S(c->f[4]-c->f[4]); // 802657BC
  {double t0=S(std::fma(c->f[1],c->f[1],c->f[0])), t1=S(std::fma(c->ps1[1],c->ps1[1],c->ps1[0])); c->f[1]=t0; c->ps1[1]=t1;} // 802657C0
  {double t0=S(c->f[1]+c->ps1[0]), t1=S(c->ps1[0]); c->f[1]=t0; c->ps1[1]=t1;} // 802657C4
  fcmp(c,0,c->f[1],c->f[2]); // 802657C8
  if (crb(c,2)) return; // 802657CC
  c->f[0]=frsqrte(c->f[1]); // 802657D0
  {uint32_t ea=c->r[2]+0xFFFFDB04u; c->f[3]=c->ps1[3]=RF32(ea);} // 802657D4
  c->f[2]=c->ps1[2]=S(c->f[0]*c->f[0]); // 802657D8
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[4]); // 802657DC
  c->f[2]=c->ps1[2]=S(-std::fma(c->f[2],c->f[1],-c->f[3])); // 802657E0
  c->f[0]=c->ps1[0]=S(c->f[2]*c->f[0]); // 802657E4
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[0]); // 802657E8
  return; // 802657EC
}

// PSVECDotProduct
void f_802657F0(Ctx* __restrict c) {
  trace_call(0x802657F0u);
  {uint32_t ea=c->r[3]+0x00000004u; psq_load(c,2,ea,0,0);} // 802657F0
  {uint32_t ea=c->r[4]+0x00000004u; psq_load(c,3,ea,0,0);} // 802657F4
  {double t0=S(c->f[2]*c->f[3]), t1=S(c->ps1[2]*c->ps1[3]); c->f[2]=t0; c->ps1[2]=t1;} // 802657F8
  {uint32_t ea=c->r[3]+0x00000000u; psq_load(c,5,ea,0,0);} // 802657FC
  {uint32_t ea=c->r[4]+0x00000000u; psq_load(c,4,ea,0,0);} // 80265800
  {double t0=S(std::fma(c->f[5],c->f[4],c->f[2])), t1=S(std::fma(c->ps1[5],c->ps1[4],c->ps1[2])); c->f[3]=t0; c->ps1[3]=t1;} // 80265804
  {double t0=S(c->f[3]+c->ps1[2]), t1=S(c->ps1[2]); c->f[1]=t0; c->ps1[1]=t1;} // 80265808
  return; // 8026580C
}

// PSVECCrossProduct
void f_80265810(Ctx* __restrict c) {
  trace_call(0x80265810u);
  {uint32_t ea=c->r[4]+0x00000000u; psq_load(c,1,ea,0,0);} // 80265810
  {uint32_t ea=c->r[3]+0x00000008u; c->f[2]=c->ps1[2]=RF32(ea);} // 80265814
  {uint32_t ea=c->r[3]+0x00000000u; psq_load(c,0,ea,0,0);} // 80265818
  {double t0=S(c->ps1[1]), t1=S(c->f[1]); c->f[6]=t0; c->ps1[6]=t1;} // 8026581C
  {uint32_t ea=c->r[4]+0x00000008u; c->f[3]=c->ps1[3]=RF32(ea);} // 80265820
  {double t0=S(c->f[1]*c->f[2]), t1=S(c->ps1[1]*c->ps1[2]); c->f[4]=t0; c->ps1[4]=t1;} // 80265824
  {double t0=S(c->f[1]*c->f[0]), t1=S(c->ps1[1]*c->f[0]); c->f[7]=t0; c->ps1[7]=t1;} // 80265828
  {double t0=S(std::fma(c->f[0],c->f[3],-c->f[4])), t1=S(std::fma(c->ps1[0],c->ps1[3],-c->ps1[4])); c->f[5]=t0; c->ps1[5]=t1;} // 8026582C
  {double t0=S(std::fma(c->f[0],c->f[6],-c->f[7])), t1=S(std::fma(c->ps1[0],c->ps1[6],-c->ps1[7])); c->f[8]=t0; c->ps1[8]=t1;} // 80265830
  {double t0=S(c->ps1[5]), t1=S(c->ps1[5]); c->f[9]=t0; c->ps1[9]=t1;} // 80265834
  {double t0=S(c->f[5]), t1=S(c->ps1[8]); c->f[10]=t0; c->ps1[10]=t1;} // 80265838
  {uint32_t ea=c->r[5]+0x00000000u; psq_store(c,9,ea,1,0);} // 8026583C
  {double t0=-c->f[10], t1=-c->ps1[10]; c->f[10]=t0; c->ps1[10]=t1;} // 80265840
  {uint32_t ea=c->r[5]+0x00000004u; psq_store(c,10,ea,0,0);} // 80265844
  return; // 80265848
}

// C_VECHalfAngle
void f_8026584C(Ctx* __restrict c) {
  trace_call(0x8026584Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8026584C
  c->r[0]=c->lr; // 80265850
  {uint32_t ea=c->r[3]+0x00000000u; c->f[2]=c->ps1[2]=RF32(ea);} // 80265854
  {uint32_t ea=c->r[3]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 80265858
  {uint32_t ea=c->r[3]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 8026585C
  c->f[5]=-c->f[2]; // 80265860
  {uint32_t ea=c->r[4]+0x00000000u; c->f[2]=c->ps1[2]=RF32(ea);} // 80265864
  c->f[4]=-c->f[1]; // 80265868
  {uint32_t ea=c->r[4]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 8026586C
  c->f[3]=-c->f[0]; // 80265870
  {uint32_t ea=c->r[4]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 80265874
  W32(c->r[1]+0x00000044u,c->r[0]); // 80265878
  c->r[3]=c->r[1]+0x00000020u; // 8026587C
  c->f[2]=-c->f[2]; // 80265880
  c->r[4]=c->r[3]|c->r[3]; // 80265884
  W32(c->r[1]+0x0000003Cu,c->r[31]); // 80265888
  c->f[1]=-c->f[1]; // 8026588C
  c->f[0]=-c->f[0]; // 80265890
  c->r[31]=c->r[5]|c->r[5]; // 80265894
  {uint32_t ea=c->r[1]+0x00000020u; WF32(ea,c->f[5]);} // 80265898
  {uint32_t ea=c->r[1]+0x00000024u; WF32(ea,c->f[4]);} // 8026589C
  {uint32_t ea=c->r[1]+0x00000028u; WF32(ea,c->f[3]);} // 802658A0
  {uint32_t ea=c->r[1]+0x00000014u; WF32(ea,c->f[2]);} // 802658A4
  {uint32_t ea=c->r[1]+0x00000018u; WF32(ea,c->f[1]);} // 802658A8
  {uint32_t ea=c->r[1]+0x0000001Cu; WF32(ea,c->f[0]);} // 802658AC
  c->lr=0x802658B4u; f_80265750(c); // 802658B0
  c->r[3]=c->r[1]+0x00000014u; // 802658B4
  c->r[4]=c->r[3]|c->r[3]; // 802658B8
  c->lr=0x802658C0u; f_80265750(c); // 802658BC
  c->r[3]=c->r[1]+0x00000020u; // 802658C0
  c->r[4]=c->r[1]+0x00000014u; // 802658C4
  c->r[5]=c->r[1]+0x00000008u; // 802658C8
  c->lr=0x802658D0u; f_802656EC(c); // 802658CC
  c->r[3]=c->r[1]+0x00000008u; // 802658D0
  c->r[4]=c->r[3]|c->r[3]; // 802658D4
  c->lr=0x802658DCu; f_802657F0(c); // 802658D8
  {uint32_t ea=c->r[2]+0xFFFFDB08u; c->f[0]=c->ps1[0]=RF32(ea);} // 802658DC
  fcmp(c,0,c->f[1],c->f[0]); // 802658E0
  if (!crb(c,1)) { goto L_802658F8; } // 802658E4
  c->r[4]=c->r[31]|c->r[31]; // 802658E8
  c->r[3]=c->r[1]+0x00000008u; // 802658EC
  c->lr=0x802658F4u; f_80265750(c); // 802658F0
  goto L_80265910; // 802658F4
L_802658F8:;
  c->r[3]=R32(c->r[1]+0x00000008u); // 802658F8
  c->r[0]=R32(c->r[1]+0x0000000Cu); // 802658FC
  W32(c->r[31]+0x00000000u,c->r[3]); // 80265900
  W32(c->r[31]+0x00000004u,c->r[0]); // 80265904
  c->r[0]=R32(c->r[1]+0x00000010u); // 80265908
  W32(c->r[31]+0x00000008u,c->r[0]); // 8026590C
L_80265910:;
  c->r[0]=R32(c->r[1]+0x00000044u); // 80265910
  c->r[31]=R32(c->r[1]+0x0000003Cu); // 80265914
  c->lr=c->r[0]; // 80265918
  c->r[1]=c->r[1]+0x00000040u; // 8026591C
  return; // 80265920
}

// PSVECSquareDistance
void f_80265924(Ctx* __restrict c) {
  trace_call(0x80265924u);
  {uint32_t ea=c->r[3]+0x00000004u; psq_load(c,0,ea,0,0);} // 80265924
  {uint32_t ea=c->r[4]+0x00000004u; psq_load(c,1,ea,0,0);} // 80265928
  {uint32_t ea=c->r[3]+0x00000000u; psq_load(c,2,ea,0,0);} // 8026592C
  {double t0=S(c->f[0]-c->f[1]), t1=S(c->ps1[0]-c->ps1[1]); c->f[3]=t0; c->ps1[3]=t1;} // 80265930
  {uint32_t ea=c->r[4]+0x00000000u; psq_load(c,0,ea,0,0);} // 80265934
  {double t0=S(c->f[2]-c->f[0]), t1=S(c->ps1[2]-c->ps1[0]); c->f[0]=t0; c->ps1[0]=t1;} // 80265938
  {double t0=S(c->f[3]*c->f[3]), t1=S(c->ps1[3]*c->ps1[3]); c->f[3]=t0; c->ps1[3]=t1;} // 8026593C
  {double t0=S(std::fma(c->f[0],c->f[0],c->f[3])), t1=S(std::fma(c->ps1[0],c->ps1[0],c->ps1[3])); c->f[1]=t0; c->ps1[1]=t1;} // 80265940
  {double t0=S(c->f[1]+c->ps1[3]), t1=S(c->ps1[3]); c->f[1]=t0; c->ps1[1]=t1;} // 80265944
  return; // 80265948
}

// fn_8026594C
void f_8026594C(Ctx* __restrict c) {
  trace_call(0x8026594Cu);
  {uint32_t ea=c->r[3]+0x00000004u; psq_load(c,0,ea,0,0);} // 8026594C
  {uint32_t ea=c->r[4]+0x00000004u; psq_load(c,1,ea,0,0);} // 80265950
  {uint32_t ea=c->r[2]+0xFFFFDB00u; c->f[3]=c->ps1[3]=RF32(ea);} // 80265954
  {double t0=S(c->f[0]-c->f[1]), t1=S(c->ps1[0]-c->ps1[1]); c->f[2]=t0; c->ps1[2]=t1;} // 80265958
  {uint32_t ea=c->r[3]+0x00000000u; psq_load(c,0,ea,0,0);} // 8026595C
  {uint32_t ea=c->r[4]+0x00000000u; psq_load(c,1,ea,0,0);} // 80265960
  c->f[4]=c->ps1[4]=S(c->f[3]-c->f[3]); // 80265964
  {double t0=S(c->f[2]*c->f[2]), t1=S(c->ps1[2]*c->ps1[2]); c->f[2]=t0; c->ps1[2]=t1;} // 80265968
  {double t0=S(c->f[0]-c->f[1]), t1=S(c->ps1[0]-c->ps1[1]); c->f[0]=t0; c->ps1[0]=t1;} // 8026596C
  {double t0=S(std::fma(c->f[0],c->f[0],c->f[2])), t1=S(std::fma(c->ps1[0],c->ps1[0],c->ps1[2])); c->f[1]=t0; c->ps1[1]=t1;} // 80265970
  {double t0=S(c->f[1]+c->ps1[2]), t1=S(c->ps1[2]); c->f[1]=t0; c->ps1[1]=t1;} // 80265974
  fcmp(c,0,c->f[4],c->f[1]); // 80265978
  if (crb(c,2)) return; // 8026597C
  c->f[0]=frsqrte(c->f[1]); // 80265980
  {uint32_t ea=c->r[2]+0xFFFFDB04u; c->f[4]=c->ps1[4]=RF32(ea);} // 80265984
  c->f[2]=c->ps1[2]=S(c->f[0]*c->f[0]); // 80265988
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[3]); // 8026598C
  c->f[2]=c->ps1[2]=S(-std::fma(c->f[2],c->f[1],-c->f[4])); // 80265990
  c->f[0]=c->ps1[0]=S(c->f[2]*c->f[0]); // 80265994
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[0]); // 80265998
  return; // 8026599C
}

// fn_802659A0
void f_802659A0(Ctx* __restrict c) {
  trace_call(0x802659A0u);
  {uint32_t ea=c->r[3]+0x00000000u; psq_load(c,0,ea,0,0);} // 802659A0
  {uint32_t ea=c->r[4]+0x00000000u; psq_load(c,1,ea,0,0);} // 802659A4
  {uint32_t ea=c->r[3]+0x00000008u; psq_load(c,2,ea,0,0);} // 802659A8
  {double t0=S(c->f[0]+c->f[1]), t1=S(c->ps1[0]+c->ps1[1]); c->f[0]=t0; c->ps1[0]=t1;} // 802659AC
  {uint32_t ea=c->r[4]+0x00000008u; psq_load(c,3,ea,0,0);} // 802659B0
  {double t0=S(c->f[2]+c->f[3]), t1=S(c->ps1[2]+c->ps1[3]); c->f[1]=t0; c->ps1[1]=t1;} // 802659B4
  {uint32_t ea=c->r[5]+0x00000000u; psq_store(c,0,ea,0,0);} // 802659B8
  {uint32_t ea=c->r[5]+0x00000008u; psq_store(c,1,ea,0,0);} // 802659BC
  return; // 802659C0
}

// fn_802659C4
void f_802659C4(Ctx* __restrict c) {
  trace_call(0x802659C4u);
  {uint32_t ea=c->r[3]+0x00000000u; psq_load(c,0,ea,0,0);} // 802659C4
  {uint32_t ea=c->r[4]+0x00000000u; psq_load(c,1,ea,0,0);} // 802659C8
  {uint32_t ea=c->r[3]+0x00000008u; psq_load(c,2,ea,0,0);} // 802659CC
  {double t0=S(c->f[0]-c->f[1]), t1=S(c->ps1[0]-c->ps1[1]); c->f[0]=t0; c->ps1[0]=t1;} // 802659D0
  {uint32_t ea=c->r[4]+0x00000008u; psq_load(c,3,ea,0,0);} // 802659D4
  {double t0=S(c->f[2]-c->f[3]), t1=S(c->ps1[2]-c->ps1[3]); c->f[1]=t0; c->ps1[1]=t1;} // 802659D8
  {uint32_t ea=c->r[5]+0x00000000u; psq_store(c,0,ea,0,0);} // 802659DC
  {uint32_t ea=c->r[5]+0x00000008u; psq_store(c,1,ea,0,0);} // 802659E0
  return; // 802659E4
}

// fn_802659E8
void f_802659E8(Ctx* __restrict c) {
  trace_call(0x802659E8u);
  {uint32_t ea=c->r[3]+0x00000000u; psq_load(c,0,ea,0,0);} // 802659E8
  {uint32_t ea=c->r[2]+0xFFFFDB10u; c->f[4]=c->ps1[4]=RF32(ea);} // 802659EC
  {double t0=S(c->f[0]*c->f[0]), t1=S(c->ps1[0]*c->ps1[0]); c->f[2]=t0; c->ps1[2]=t1;} // 802659F0
  {uint32_t ea=c->r[3]+0x00000008u; psq_load(c,1,ea,0,0);} // 802659F4
  {uint32_t ea=c->r[2]+0xFFFFDB1Cu; c->f[7]=c->ps1[7]=RF32(ea);} // 802659F8
  {double t0=S(c->f[4]-c->f[4]), t1=S(c->ps1[4]-c->ps1[4]); c->f[5]=t0; c->ps1[5]=t1;} // 802659FC
  {uint32_t ea=c->r[2]+0xFFFFDB20u; c->f[8]=c->ps1[8]=RF32(ea);} // 80265A00
  {double t0=S(std::fma(c->f[1],c->f[1],c->f[2])), t1=S(std::fma(c->ps1[1],c->ps1[1],c->ps1[2])); c->f[2]=t0; c->ps1[2]=t1;} // 80265A04
  {double t0=S(c->f[2]+c->ps1[2]), t1=S(c->ps1[2]); c->f[2]=t0; c->ps1[2]=t1;} // 80265A08
  c->f[3]=frsqrte(c->f[2]); // 80265A0C
  {double t0=S(c->f[2]-c->f[4]), t1=S(c->ps1[2]-c->ps1[4]); c->f[4]=t0; c->ps1[4]=t1;} // 80265A10
  c->f[6]=c->f[3]*c->f[3]; // 80265A14
  c->f[3]=c->f[3]*c->f[7]; // 80265A18
  c->f[6]=-std::fma(c->f[6],c->f[2],-c->f[8]); // 80265A1C
  c->f[3]=c->f[6]*c->f[3]; // 80265A20
  {double t0=S((c->f[4]>=0.0)?c->f[3]:c->f[5]), t1=S((c->ps1[4]>=0.0)?c->ps1[3]:c->ps1[5]); c->f[3]=t0; c->ps1[3]=t1;} // 80265A24
  {double t0=S(c->f[0]*c->f[3]), t1=S(c->ps1[0]*c->f[3]); c->f[0]=t0; c->ps1[0]=t1;} // 80265A28
  {double t0=S(c->f[1]*c->f[3]), t1=S(c->ps1[1]*c->f[3]); c->f[1]=t0; c->ps1[1]=t1;} // 80265A2C
  {uint32_t ea=c->r[4]+0x00000000u; psq_store(c,0,ea,0,0);} // 80265A30
  {uint32_t ea=c->r[4]+0x00000008u; psq_store(c,1,ea,0,0);} // 80265A34
  return; // 80265A38
}

// C_QUATMtx
void f_80265A3C(Ctx* __restrict c) {
  trace_call(0x80265A3Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80265A3C
  c->r[0]=c->lr; // 80265A40
  W32(c->r[1]+0x00000044u,c->r[0]); // 80265A44
  c->r[11]=c->r[1]+0x00000040u; // 80265A48
  c->lr=0x80265A50u; { W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 80265A4C
  {uint32_t ea=c->r[4]+0x00000000u; c->f[3]=c->ps1[3]=RF32(ea);} // 80265A50
  c->r[6]=0u+0x803E0000u; // 80265A54
  {uint32_t ea=c->r[4]+0x00000014u; c->f[2]=c->ps1[2]=RF32(ea);} // 80265A58
  c->r[31]=c->r[3]|c->r[3]; // 80265A5C
  {uint32_t ea=c->r[6]+0x00005988u; c->r[5]=R32(ea); c->r[6]=ea;} // 80265A60
  c->r[25]=c->r[4]|c->r[4]; // 80265A64
  c->f[1]=c->ps1[1]=S(c->f[3]+c->f[2]); // 80265A68
  {uint32_t ea=c->r[4]+0x00000028u; c->f[0]=c->ps1[0]=RF32(ea);} // 80265A6C
  c->r[3]=R32(c->r[6]+0x00000004u); // 80265A70
  c->r[0]=R32(c->r[6]+0x00000008u); // 80265A74
  c->f[1]=c->ps1[1]=S(c->f[0]+c->f[1]); // 80265A78
  {uint32_t ea=c->r[2]+0xFFFFDB18u; c->f[0]=c->ps1[0]=RF32(ea);} // 80265A7C
  W32(c->r[1]+0x00000014u,c->r[5]); // 80265A80
  fcmp(c,0,c->f[1],c->f[0]); // 80265A84
  W32(c->r[1]+0x00000018u,c->r[3]); // 80265A88
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 80265A8C
  if (!crb(c,1)) { goto L_80265AF4; } // 80265A90
  {uint32_t ea=c->r[2]+0xFFFFDB14u; c->f[0]=c->ps1[0]=RF32(ea);} // 80265A94
  c->f[1]=c->ps1[1]=S(c->f[0]+c->f[1]); // 80265A98
  c->lr=0x80265AA0u; f_8029C6F8(c); // 80265A9C
  c->f[7]=c->ps1[7]=S(c->f[1]); // 80265AA0
  {uint32_t ea=c->r[2]+0xFFFFDB1Cu; c->f[6]=c->ps1[6]=RF32(ea);} // 80265AA4
  {uint32_t ea=c->r[25]+0x00000024u; c->f[5]=c->ps1[5]=RF32(ea);} // 80265AA8
  {uint32_t ea=c->r[25]+0x00000018u; c->f[4]=c->ps1[4]=RF32(ea);} // 80265AAC
  c->f[8]=c->ps1[8]=S(c->f[6]/c->f[7]); // 80265AB0
  {uint32_t ea=c->r[25]+0x00000008u; c->f[3]=c->ps1[3]=RF32(ea);} // 80265AB4
  {uint32_t ea=c->r[25]+0x00000020u; c->f[2]=c->ps1[2]=RF32(ea);} // 80265AB8
  {uint32_t ea=c->r[25]+0x00000010u; c->f[1]=c->ps1[1]=RF32(ea);} // 80265ABC
  {uint32_t ea=c->r[25]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 80265AC0
  c->f[4]=c->ps1[4]=S(c->f[5]-c->f[4]); // 80265AC4
  c->f[2]=c->ps1[2]=S(c->f[3]-c->f[2]); // 80265AC8
  c->f[0]=c->ps1[0]=S(c->f[1]-c->f[0]); // 80265ACC
  c->f[5]=c->ps1[5]=S(c->f[6]*c->f[7]); // 80265AD0
  c->f[3]=c->ps1[3]=S(c->f[8]*c->f[4]); // 80265AD4
  c->f[1]=c->ps1[1]=S(c->f[8]*c->f[2]); // 80265AD8
  c->f[0]=c->ps1[0]=S(c->f[8]*c->f[0]); // 80265ADC
  {uint32_t ea=c->r[31]+0x0000000Cu; WF32(ea,c->f[5]);} // 80265AE0
  {uint32_t ea=c->r[31]+0x00000000u; WF32(ea,c->f[3]);} // 80265AE4
  {uint32_t ea=c->r[31]+0x00000004u; WF32(ea,c->f[1]);} // 80265AE8
  {uint32_t ea=c->r[31]+0x00000008u; WF32(ea,c->f[0]);} // 80265AEC
  goto L_80265BF0; // 80265AF0
L_80265AF4:;
  fcmp(c,0,c->f[2],c->f[3]); // 80265AF4
  c->r[5]=0u+0x00000000u; // 80265AF8
  if (!crb(c,1)) { goto L_80265B04; } // 80265AFC
  c->r[5]=0u+0x00000001u; // 80265B00
L_80265B04:;
  c->r[0]=rotl(c->r[5],4)&0xFFFFFFF0u; // 80265B04
  c->r[3]=rotl(c->r[5],2)&0xFFFFFFFCu; // 80265B08
  c->r[0]=c->r[4]+c->r[0]; // 80265B0C
  {uint32_t ea=c->r[4]+0x00000028u; c->f[1]=c->ps1[1]=RF32(ea);} // 80265B10
  {uint32_t ea=c->r[3]+c->r[0]; c->f[0]=c->ps1[0]=RF32(ea);} // 80265B14
  fcmp(c,0,c->f[1],c->f[0]); // 80265B18
  if (!crb(c,1)) { goto L_80265B24; } // 80265B1C
  c->r[5]=0u+0x00000002u; // 80265B20
L_80265B24:;
  c->r[26]=rotl(c->r[5],2)&0xFFFFFFFCu; // 80265B24
  c->r[3]=c->r[1]+0x00000014u; // 80265B28
  c->r[6]=R32(c->r[3]+c->r[26]); // 80265B2C
  c->r[0]=rotl(c->r[5],4)&0xFFFFFFF0u; // 80265B30
  c->r[25]=c->r[4]+c->r[0]; // 80265B34
  {uint32_t ea=c->r[2]+0xFFFFDB14u; c->f[0]=c->ps1[0]=RF32(ea);} // 80265B38
  c->r[28]=rotl(c->r[6],2)&0xFFFFFFFCu; // 80265B3C
  c->r[0]=rotl(c->r[6],4)&0xFFFFFFF0u; // 80265B40
  c->r[3]=R32(c->r[3]+c->r[28]); // 80265B44
  c->r[29]=c->r[4]+c->r[0]; // 80265B48
  {uint32_t ea=c->r[29]+c->r[28]; c->f[3]=c->ps1[3]=RF32(ea);} // 80265B4C
  c->r[0]=rotl(c->r[3],4)&0xFFFFFFF0u; // 80265B50
  c->r[30]=rotl(c->r[3],2)&0xFFFFFFFCu; // 80265B54
  c->r[27]=c->r[4]+c->r[0]; // 80265B58
  {uint32_t ea=c->r[25]+c->r[26]; c->f[1]=c->ps1[1]=RF32(ea);} // 80265B5C
  {uint32_t ea=c->r[27]+c->r[30]; c->f[2]=c->ps1[2]=RF32(ea);} // 80265B60
  c->f[2]=c->ps1[2]=S(c->f[3]+c->f[2]); // 80265B64
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 80265B68
  c->f[1]=c->ps1[1]=S(c->f[0]+c->f[1]); // 80265B6C
  c->lr=0x80265B74u; f_8029C6F8(c); // 80265B70
  c->f[5]=c->ps1[5]=S(c->f[1]); // 80265B74
  {uint32_t ea=c->r[2]+0xFFFFDB1Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 80265B78
  {uint32_t ea=c->r[2]+0xFFFFDB18u; c->f[0]=c->ps1[0]=RF32(ea);} // 80265B7C
  c->r[3]=c->r[1]+0x00000008u; // 80265B80
  c->f[1]=c->ps1[1]=S(c->f[2]*c->f[5]); // 80265B84
  fcmp(c,0,c->f[0],c->f[5]); // 80265B88
  {uint32_t ea=c->r[3]+c->r[26]; WF32(ea,c->f[1]);} // 80265B8C
  if (crb(c,2)) { goto L_80265B98; } // 80265B90
  c->f[5]=c->ps1[5]=S(c->f[2]/c->f[5]); // 80265B94
L_80265B98:;
  {uint32_t ea=c->r[25]+c->r[28]; c->f[2]=c->ps1[2]=RF32(ea);} // 80265B98
  c->r[3]=c->r[1]+0x00000008u; // 80265B9C
  {uint32_t ea=c->r[29]+c->r[26]; c->f[0]=c->ps1[0]=RF32(ea);} // 80265BA0
  {uint32_t ea=c->r[25]+c->r[30]; c->f[1]=c->ps1[1]=RF32(ea);} // 80265BA4
  c->f[2]=c->ps1[2]=S(c->f[2]+c->f[0]); // 80265BA8
  {uint32_t ea=c->r[27]+c->r[26]; c->f[0]=c->ps1[0]=RF32(ea);} // 80265BAC
  {uint32_t ea=c->r[27]+c->r[28]; c->f[4]=c->ps1[4]=RF32(ea);} // 80265BB0
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 80265BB4
  {uint32_t ea=c->r[29]+c->r[30]; c->f[3]=c->ps1[3]=RF32(ea);} // 80265BB8
  c->f[1]=c->ps1[1]=S(c->f[5]*c->f[2]); // 80265BBC
  c->f[2]=c->ps1[2]=S(c->f[4]-c->f[3]); // 80265BC0
  c->f[0]=c->ps1[0]=S(c->f[5]*c->f[0]); // 80265BC4
  {uint32_t ea=c->r[3]+c->r[28]; WF32(ea,c->f[1]);} // 80265BC8
  c->f[3]=c->ps1[3]=S(c->f[5]*c->f[2]); // 80265BCC
  {uint32_t ea=c->r[3]+c->r[30]; WF32(ea,c->f[0]);} // 80265BD0
  {uint32_t ea=c->r[1]+0x00000008u; c->f[2]=c->ps1[2]=RF32(ea);} // 80265BD4
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 80265BD8
  {uint32_t ea=c->r[1]+0x00000010u; c->f[0]=c->ps1[0]=RF32(ea);} // 80265BDC
  {uint32_t ea=c->r[31]+0x0000000Cu; WF32(ea,c->f[3]);} // 80265BE0
  {uint32_t ea=c->r[31]+0x00000000u; WF32(ea,c->f[2]);} // 80265BE4
  {uint32_t ea=c->r[31]+0x00000004u; WF32(ea,c->f[1]);} // 80265BE8
  {uint32_t ea=c->r[31]+0x00000008u; WF32(ea,c->f[0]);} // 80265BEC
L_80265BF0:;
  c->r[11]=c->r[1]+0x00000040u; // 80265BF0
  c->lr=0x80265BF8u; { c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 80265BF4
  c->r[0]=R32(c->r[1]+0x00000044u); // 80265BF8
  c->lr=c->r[0]; // 80265BFC
  c->r[1]=c->r[1]+0x00000040u; // 80265C00
  return; // 80265C04
}

// fn_80265C08
void f_80265C08(Ctx* __restrict c) {
  trace_call(0x80265C08u);
  {uint32_t ea=c->r[4]+0x00000000u; c->f[2]=c->ps1[2]=RF32(ea);} // 80265C08
  {uint32_t ea=c->r[3]+0x00000000u; c->f[8]=c->ps1[8]=RF32(ea);} // 80265C0C
  {uint32_t ea=c->r[4]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 80265C10
  c->f[2]=c->ps1[2]=S(c->f[2]-c->f[8]); // 80265C14
  {uint32_t ea=c->r[3]+0x00000004u; c->f[6]=c->ps1[6]=RF32(ea);} // 80265C18
  {uint32_t ea=c->r[4]+0x00000008u; c->f[3]=c->ps1[3]=RF32(ea);} // 80265C1C
  c->f[5]=c->ps1[5]=S(c->f[0]-c->f[6]); // 80265C20
  {uint32_t ea=c->r[3]+0x00000008u; c->f[4]=c->ps1[4]=RF32(ea);} // 80265C24
  c->f[7]=c->ps1[7]=S(c->f[1]*c->f[2]); // 80265C28
  c->f[3]=c->ps1[3]=S(c->f[3]-c->f[4]); // 80265C2C
  {uint32_t ea=c->r[4]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80265C30
  {uint32_t ea=c->r[3]+0x0000000Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 80265C34
  c->f[5]=c->ps1[5]=S(c->f[1]*c->f[5]); // 80265C38
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[2]); // 80265C3C
  c->f[3]=c->ps1[3]=S(c->f[1]*c->f[3]); // 80265C40
  c->f[7]=c->ps1[7]=S(c->f[8]+c->f[7]); // 80265C44
  c->f[0]=c->ps1[0]=S(c->f[1]*c->f[0]); // 80265C48
  c->f[5]=c->ps1[5]=S(c->f[6]+c->f[5]); // 80265C4C
  c->f[1]=c->ps1[1]=S(c->f[4]+c->f[3]); // 80265C50
  {uint32_t ea=c->r[5]+0x00000000u; WF32(ea,c->f[7]);} // 80265C54
  c->f[0]=c->ps1[0]=S(c->f[2]+c->f[0]); // 80265C58
  {uint32_t ea=c->r[5]+0x00000004u; WF32(ea,c->f[5]);} // 80265C5C
  {uint32_t ea=c->r[5]+0x00000008u; WF32(ea,c->f[1]);} // 80265C60
  {uint32_t ea=c->r[5]+0x0000000Cu; WF32(ea,c->f[0]);} // 80265C64
  return; // 80265C68
}

// C_QUATSlerp
void f_80265C6C(Ctx* __restrict c) {
  trace_call(0x80265C6Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFA0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80265C6C
  c->r[0]=c->lr; // 80265C70
  W32(c->r[1]+0x00000064u,c->r[0]); // 80265C74
  {uint32_t ea=c->r[1]+0x00000050u; WF64(ea,c->f[31]);} // 80265C78
  {uint32_t ea=c->r[1]+0x00000058u; psq_store(c,31,ea,0,0);} // 80265C7C
  {uint32_t ea=c->r[1]+0x00000040u; WF64(ea,c->f[30]);} // 80265C80
  {uint32_t ea=c->r[1]+0x00000048u; psq_store(c,30,ea,0,0);} // 80265C84
  {uint32_t ea=c->r[1]+0x00000030u; WF64(ea,c->f[29]);} // 80265C88
  {uint32_t ea=c->r[1]+0x00000038u; psq_store(c,29,ea,0,0);} // 80265C8C
  {uint32_t ea=c->r[1]+0x00000020u; WF64(ea,c->f[28]);} // 80265C90
  {uint32_t ea=c->r[1]+0x00000028u; psq_store(c,28,ea,0,0);} // 80265C94
  c->f[31]=c->f[1]; // 80265C98
  {uint32_t ea=c->r[3]+0x00000000u; c->f[4]=c->ps1[4]=RF32(ea);} // 80265C9C
  {uint32_t ea=c->r[4]+0x00000000u; c->f[3]=c->ps1[3]=RF32(ea);} // 80265CA0
  {uint32_t ea=c->r[3]+0x00000004u; c->f[2]=c->ps1[2]=RF32(ea);} // 80265CA4
  {uint32_t ea=c->r[4]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 80265CA8
  c->f[3]=c->ps1[3]=S(c->f[4]*c->f[3]); // 80265CAC
  {uint32_t ea=c->r[3]+0x00000008u; c->f[4]=c->ps1[4]=RF32(ea);} // 80265CB0
  c->f[0]=c->ps1[0]=S(c->f[2]*c->f[0]); // 80265CB4
  {uint32_t ea=c->r[4]+0x00000008u; c->f[2]=c->ps1[2]=RF32(ea);} // 80265CB8
  {uint32_t ea=c->r[3]+0x0000000Cu; c->f[6]=c->ps1[6]=RF32(ea);} // 80265CBC
  c->f[4]=c->ps1[4]=S(c->f[4]*c->f[2]); // 80265CC0
  {uint32_t ea=c->r[4]+0x0000000Cu; c->f[5]=c->ps1[5]=RF32(ea);} // 80265CC4
  c->f[2]=c->ps1[2]=S(c->f[3]+c->f[0]); // 80265CC8
  c->f[3]=c->ps1[3]=S(c->f[6]*c->f[5]); // 80265CCC
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 80265CD0
  {uint32_t ea=c->r[2]+0xFFFFDB18u; c->f[0]=c->ps1[0]=RF32(ea);} // 80265CD4
  c->f[2]=c->ps1[2]=S(c->f[4]+c->f[2]); // 80265CD8
  W32(c->r[1]+0x00000018u,c->r[30]); // 80265CDC
  {uint32_t ea=c->r[2]+0xFFFFDB14u; c->f[30]=c->ps1[30]=RF32(ea);} // 80265CE0
  W32(c->r[1]+0x00000014u,c->r[29]); // 80265CE4
  c->r[29]=c->r[3]|c->r[3]; // 80265CE8
  c->f[2]=c->ps1[2]=S(c->f[3]+c->f[2]); // 80265CEC
  c->r[30]=c->r[4]|c->r[4]; // 80265CF0
  c->r[31]=c->r[5]|c->r[5]; // 80265CF4
  fcmp(c,0,c->f[2],c->f[0]); // 80265CF8
  if (!crb(c,0)) { goto L_80265D08; } // 80265CFC
  c->f[2]=-c->f[2]; // 80265D00
  c->f[30]=-c->f[30]; // 80265D04
L_80265D08:;
  {uint32_t ea=c->r[2]+0xFFFFDB24u; c->f[0]=c->ps1[0]=RF32(ea);} // 80265D08
  fcmp(c,0,c->f[2],c->f[0]); // 80265D0C
  setcrb(c,2,crb(c,0)|crb(c,2)); // 80265D10
  if (!crb(c,2)) { goto L_80265D60; } // 80265D14
  c->f[1]=c->f[2]; // 80265D18
  c->lr=0x80265D20u; f_8029C490(c); // 80265D1C
  c->f[29]=c->ps1[29]=S(c->f[1]); // 80265D20
  c->f[1]=c->f[29]; // 80265D24
  c->lr=0x80265D2Cu; f_8029C340(c); // 80265D28
  {uint32_t ea=c->r[2]+0xFFFFDB14u; c->f[0]=c->ps1[0]=RF32(ea);} // 80265D2C
  c->f[28]=c->ps1[28]=S(c->f[1]); // 80265D30
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[31]); // 80265D34
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[29]); // 80265D38
  c->lr=0x80265D40u; f_8029C340(c); // 80265D3C
  c->f[0]=c->ps1[0]=S(c->f[1]); // 80265D40
  c->f[1]=c->ps1[1]=S(c->f[31]*c->f[29]); // 80265D44
  c->f[31]=c->ps1[31]=S(c->f[0]/c->f[28]); // 80265D48
  c->lr=0x80265D50u; f_8029C340(c); // 80265D4C
  c->f[0]=c->ps1[0]=S(c->f[1]); // 80265D50
  c->f[0]=c->ps1[0]=S(c->f[0]/c->f[28]); // 80265D54
  c->f[30]=c->ps1[30]=S(c->f[30]*c->f[0]); // 80265D58
  goto L_80265D6C; // 80265D5C
L_80265D60:;
  {uint32_t ea=c->r[2]+0xFFFFDB14u; c->f[0]=c->ps1[0]=RF32(ea);} // 80265D60
  c->f[30]=c->ps1[30]=S(c->f[30]*c->f[1]); // 80265D64
  c->f[31]=c->ps1[31]=S(c->f[0]-c->f[1]); // 80265D68
L_80265D6C:;
  {uint32_t ea=c->r[29]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 80265D6C
  {uint32_t ea=c->r[30]+0x00000000u; c->f[2]=c->ps1[2]=RF32(ea);} // 80265D70
  {uint32_t ea=c->r[29]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 80265D74
  c->f[7]=c->ps1[7]=S(c->f[31]*c->f[0]); // 80265D78
  {uint32_t ea=c->r[30]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 80265D7C
  c->f[6]=c->ps1[6]=S(c->f[30]*c->f[2]); // 80265D80
  {uint32_t ea=c->r[29]+0x00000008u; c->f[3]=c->ps1[3]=RF32(ea);} // 80265D84
  c->f[5]=c->ps1[5]=S(c->f[31]*c->f[1]); // 80265D88
  c->f[4]=c->ps1[4]=S(c->f[30]*c->f[0]); // 80265D8C
  {uint32_t ea=c->r[30]+0x00000008u; c->f[2]=c->ps1[2]=RF32(ea);} // 80265D90
  c->f[3]=c->ps1[3]=S(c->f[31]*c->f[3]); // 80265D94
  {uint32_t ea=c->r[29]+0x0000000Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 80265D98
  c->f[6]=c->ps1[6]=S(c->f[7]+c->f[6]); // 80265D9C
  {uint32_t ea=c->r[30]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80265DA0
  c->f[2]=c->ps1[2]=S(c->f[30]*c->f[2]); // 80265DA4
  c->f[4]=c->ps1[4]=S(c->f[5]+c->f[4]); // 80265DA8
  {uint32_t ea=c->r[31]+0x00000000u; WF32(ea,c->f[6]);} // 80265DAC
  c->f[1]=c->ps1[1]=S(c->f[31]*c->f[1]); // 80265DB0
  c->f[0]=c->ps1[0]=S(c->f[30]*c->f[0]); // 80265DB4
  c->f[2]=c->ps1[2]=S(c->f[3]+c->f[2]); // 80265DB8
  {uint32_t ea=c->r[31]+0x00000004u; WF32(ea,c->f[4]);} // 80265DBC
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 80265DC0
  {uint32_t ea=c->r[31]+0x00000008u; WF32(ea,c->f[2]);} // 80265DC4
  {uint32_t ea=c->r[31]+0x0000000Cu; WF32(ea,c->f[0]);} // 80265DC8
  {uint32_t ea=c->r[1]+0x00000058u; psq_load(c,31,ea,0,0);} // 80265DCC
  {uint32_t ea=c->r[1]+0x00000050u; c->f[31]=RF64(ea);} // 80265DD0
  {uint32_t ea=c->r[1]+0x00000048u; psq_load(c,30,ea,0,0);} // 80265DD4
  {uint32_t ea=c->r[1]+0x00000040u; c->f[30]=RF64(ea);} // 80265DD8
  {uint32_t ea=c->r[1]+0x00000038u; psq_load(c,29,ea,0,0);} // 80265DDC
  {uint32_t ea=c->r[1]+0x00000030u; c->f[29]=RF64(ea);} // 80265DE0
  {uint32_t ea=c->r[1]+0x00000028u; psq_load(c,28,ea,0,0);} // 80265DE4
  {uint32_t ea=c->r[1]+0x00000020u; c->f[28]=RF64(ea);} // 80265DE8
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 80265DEC
  c->r[30]=R32(c->r[1]+0x00000018u); // 80265DF0
  c->r[29]=R32(c->r[1]+0x00000014u); // 80265DF4
  c->r[0]=R32(c->r[1]+0x00000064u); // 80265DF8
  c->lr=c->r[0]; // 80265DFC
  c->r[1]=c->r[1]+0x00000060u; // 80265E00
  return; // 80265E04
}

// __DVDFSInit
void f_80265E08(Ctx* __restrict c) {
  trace_call(0x80265E08u);
  c->r[3]=0u+0x80000000u; // 80265E08
  W32(c->r[13]+0xFFFF9934u,c->r[3]); // 80265E0C
  c->r[4]=R32(c->r[3]+0x00000038u); // 80265E10
  cmps(c,0,(int32_t)c->r[4],0); // 80265E14
  W32(c->r[13]+0xFFFF9930u,c->r[4]); // 80265E18
  if (crb(c,2)) return; // 80265E1C
  c->r[3]=R32(c->r[4]+0x00000008u); // 80265E20
  c->r[0]=(uint32_t)((int32_t)c->r[3]*(int32_t)12); // 80265E24
  W32(c->r[13]+0xFFFF9928u,c->r[3]); // 80265E28
  c->r[0]=c->r[4]+c->r[0]; // 80265E2C
  W32(c->r[13]+0xFFFF992Cu,c->r[0]); // 80265E30
  return; // 80265E34
}

// DVDConvertPathToEntrynum
void f_80265E38(Ctx* __restrict c) {
  trace_call(0x80265E38u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80265E38
  c->r[0]=c->lr; // 80265E3C
  W32(c->r[1]+0x00000034u,c->r[0]); // 80265E40
  c->r[11]=c->r[1]+0x00000030u; // 80265E44
  c->lr=0x80265E4Cu; { W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 80265E48
  c->r[26]=c->r[3]|c->r[3]; // 80265E4C
  c->r[31]=0u+0x80430000u; // 80265E50
  c->r[29]=R32(c->r[13]+0xFFFF9918u); // 80265E54
  c->r[28]=c->r[26]|c->r[26]; // 80265E58
  c->r[31]=c->r[31]+0xFFFF8788u; // 80265E5C
  c->r[30]=0u+0x80420000u; // 80265E60
L_80265E64:;
  c->r[0]=R8(c->r[26]+0x00000000u); // 80265E64
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 80265E68
  if (!crb(c,2)) { goto L_80265E78; } // 80265E6C
  c->r[3]=c->r[29]|c->r[29]; // 80265E70
  goto L_80266128; // 80265E74
L_80265E78:;
  cmps(c,0,(int32_t)c->r[0],47); // 80265E78
  if (!crb(c,2)) { goto L_80265E8C; } // 80265E7C
  c->r[29]=0u+0x00000000u; // 80265E80
  c->r[26]=c->r[26]+0x00000001u; // 80265E84
  IRQCHK(c); goto L_80265E64; // 80265E88
L_80265E8C:;
  cmps(c,0,(int32_t)c->r[0],46); // 80265E8C
  if (!crb(c,2)) { goto L_80265F08; } // 80265E90
  c->r[0]=R8(c->r[26]+0x00000001u); // 80265E94
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 80265E98
  cmps(c,0,(int32_t)c->r[0],46); // 80265E9C
  if (!crb(c,2)) { goto L_80265EE8; } // 80265EA0
  c->r[0]=R8(c->r[26]+0x00000002u); // 80265EA4
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 80265EA8
  cmps(c,0,(int32_t)c->r[0],47); // 80265EAC
  if (!crb(c,2)) { goto L_80265ECC; } // 80265EB0
  c->r[0]=(uint32_t)((int32_t)c->r[29]*(int32_t)12); // 80265EB4
  c->r[3]=R32(c->r[13]+0xFFFF9930u); // 80265EB8
  c->r[26]=c->r[26]+0x00000003u; // 80265EBC
  c->r[3]=c->r[3]+c->r[0]; // 80265EC0
  c->r[29]=R32(c->r[3]+0x00000004u); // 80265EC4
  IRQCHK(c); goto L_80265E64; // 80265EC8
L_80265ECC:;
  cmps(c,0,(int32_t)c->r[0],0); // 80265ECC
  if (!crb(c,2)) { goto L_80265F08; } // 80265ED0
  c->r[0]=(uint32_t)((int32_t)c->r[29]*(int32_t)12); // 80265ED4
  c->r[3]=R32(c->r[13]+0xFFFF9930u); // 80265ED8
  c->r[3]=c->r[3]+c->r[0]; // 80265EDC
  c->r[3]=R32(c->r[3]+0x00000004u); // 80265EE0
  goto L_80266128; // 80265EE4
L_80265EE8:;
  cmps(c,0,(int32_t)c->r[0],47); // 80265EE8
  if (!crb(c,2)) { goto L_80265EF8; } // 80265EEC
  c->r[26]=c->r[26]+0x00000002u; // 80265EF0
  IRQCHK(c); goto L_80265E64; // 80265EF4
L_80265EF8:;
  cmps(c,0,(int32_t)c->r[0],0); // 80265EF8
  if (!crb(c,2)) { goto L_80265F08; } // 80265EFC
  c->r[3]=c->r[29]|c->r[29]; // 80265F00
  goto L_80266128; // 80265F04
L_80265F08:;
  c->r[0]=R32(c->r[13]+0xFFFF8E20u); // 80265F08
  cmps(c,0,(int32_t)c->r[0],0); // 80265F0C
  if (!crb(c,2)) { goto L_80265FB8; } // 80265F10
  c->r[24]=c->r[26]|c->r[26]; // 80265F14
  c->r[5]=0u+0x00000000u; // 80265F18
  c->r[4]=0u+0x00000000u; // 80265F1C
  goto L_80265F68; // 80265F20
L_80265F24:;
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[3]; // 80265F24
  cmps(c,0,(int32_t)c->r[0],46); // 80265F28
  if (!crb(c,2)) { goto L_80265F58; } // 80265F2C
  c->r[0]=c->r[24]-c->r[26]; // 80265F30
  cmps(c,0,(int32_t)c->r[0],8); // 80265F34
  if (crb(c,1)) { goto L_80265F44; } // 80265F38
  cmps(c,0,(int32_t)c->r[5],1); // 80265F3C
  if (!crb(c,2)) { goto L_80265F4C; } // 80265F40
L_80265F44:;
  c->r[4]=0u+0x00000001u; // 80265F44
  goto L_80265F7C; // 80265F48
L_80265F4C:;
  c->r[27]=c->r[24]+0x00000001u; // 80265F4C
  c->r[5]=0u+0x00000001u; // 80265F50
  goto L_80265F64; // 80265F54
L_80265F58:;
  cmps(c,0,(int32_t)c->r[0],32); // 80265F58
  if (!crb(c,2)) { goto L_80265F64; } // 80265F5C
  c->r[4]=0u+0x00000001u; // 80265F60
L_80265F64:;
  c->r[24]=c->r[24]+0x00000001u; // 80265F64
L_80265F68:;
  c->r[3]=R8(c->r[24]+0x00000000u); // 80265F68
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[3]; cr0(c,c->r[0]); // 80265F6C
  if (crb(c,2)) { goto L_80265F7C; } // 80265F70
  cmps(c,0,(int32_t)c->r[0],47); // 80265F74
  if (!crb(c,2)) { IRQCHK(c); goto L_80265F24; } // 80265F78
L_80265F7C:;
  cmps(c,0,(int32_t)c->r[5],1); // 80265F7C
  if (!crb(c,2)) { goto L_80265F94; } // 80265F80
  c->r[0]=c->r[24]-c->r[27]; // 80265F84
  cmps(c,0,(int32_t)c->r[0],3); // 80265F88
  if (!crb(c,1)) { goto L_80265F94; } // 80265F8C
  c->r[4]=0u+0x00000001u; // 80265F90
L_80265F94:;
  cmps(c,0,(int32_t)c->r[4],0); // 80265F94
  if (crb(c,2)) { goto L_80265FD8; } // 80265F98
  c->r[6]=c->r[28]|c->r[28]; // 80265F9C
  c->r[5]=c->r[30]+0xFFFFFB30u; // 80265FA0
  c->r[3]=c->r[13]+0xFFFF8E28u; // 80265FA4
  c->r[4]=0u+0x000001BBu; // 80265FA8
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80265FAC
  c->lr=0x80265FB4u; f_801D479C(c); // 80265FB0
  goto L_80265FD8; // 80265FB4
L_80265FB8:;
  c->r[24]=c->r[26]|c->r[26]; // 80265FB8
  goto L_80265FC4; // 80265FBC
L_80265FC0:;
  c->r[24]=c->r[24]+0x00000001u; // 80265FC0
L_80265FC4:;
  c->r[0]=R8(c->r[24]+0x00000000u); // 80265FC4
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 80265FC8
  if (crb(c,2)) { goto L_80265FD8; } // 80265FCC
  cmps(c,0,(int32_t)c->r[0],47); // 80265FD0
  if (!crb(c,2)) { IRQCHK(c); goto L_80265FC0; } // 80265FD4
L_80265FD8:;
  c->r[3]=R8(c->r[24]+0x00000000u); // 80265FD8
  c->r[0]=(uint32_t)((int32_t)c->r[29]*(int32_t)12); // 80265FDC
  c->r[8]=R32(c->r[13]+0xFFFF9930u); // 80265FE0
  c->r[9]=c->r[24]-c->r[26]; // 80265FE4
  c->r[6]=(uint32_t)(int32_t)(int8_t)c->r[3]; // 80265FE8
  c->r[4]=R32(c->r[13]+0xFFFF992Cu); // 80265FEC
  c->r[5]=0u-c->r[6]; // 80265FF0
  c->r[3]=c->r[8]+c->r[0]; // 80265FF4
  c->r[12]=R32(c->r[31]+0x00000038u); // 80265FF8
  c->r[0]=c->r[5]|c->r[6]; // 80265FFC
  c->r[5]=R32(c->r[3]+0x00000008u); // 80266000
  c->r[0]=rotl(c->r[0],1)&0x00000001u; // 80266004
  c->r[3]=c->r[29]+0x00000001u; // 80266008
  goto L_802660FC; // 8026600C
L_80266010:;
  c->r[6]=(uint32_t)((int32_t)c->r[3]*(int32_t)12); // 80266010
  {uint32_t ea=c->r[6]+c->r[8]; c->r[10]=R32(ea); c->r[6]=ea;} // 80266014
  c->r[7]=rotl(c->r[10],0)&0xFF000000u; cr0(c,c->r[7]); // 80266018
  if (!crb(c,2)) { goto L_80266028; } // 8026601C
  cmps(c,0,(int32_t)c->r[0],1); // 80266020
  if (crb(c,2)) { goto L_802660E8; } // 80266024
L_80266028:;
  c->r[10]=rotl(c->r[10],0)&0x00FFFFFFu; // 80266028
  c->r[29]=c->r[26]|c->r[26]; // 8026602C
  c->r[25]=c->r[4]+c->r[10]; // 80266030
  goto L_802660B0; // 80266034
L_80266038:;
  c->r[11]=R8(c->r[25]+0x00000000u); // 80266038
  c->r[10]=0u+0x00000000u; // 8026603C
  c->r[25]=c->r[25]+0x00000001u; // 80266040
  c->r[24]=(uint32_t)(int32_t)(int8_t)c->r[11]; cr0(c,c->r[24]); // 80266044
  if (crb(c,0)) { goto L_80266054; } // 80266048
  cmps(c,0,(int32_t)c->r[24],256); // 8026604C
  if (crb(c,0)) { goto L_80266058; } // 80266050
L_80266054:;
  c->r[10]=0u+0x00000001u; // 80266054
L_80266058:;
  cmps(c,0,(int32_t)c->r[10],0); // 80266058
  if (crb(c,2)) { goto L_80266064; } // 8026605C
  goto L_8026606C; // 80266060
L_80266064:;
  c->r[10]=R32(c->r[12]+0x00000010u); // 80266064
  c->r[24]=R8(c->r[10]+c->r[24]); // 80266068
L_8026606C:;
  c->r[11]=R8(c->r[29]+0x00000000u); // 8026606C
  c->r[10]=0u+0x00000000u; // 80266070
  c->r[29]=c->r[29]+0x00000001u; // 80266074
  c->r[11]=(uint32_t)(int32_t)(int8_t)c->r[11]; cr0(c,c->r[11]); // 80266078
  if (crb(c,0)) { goto L_80266088; } // 8026607C
  cmps(c,0,(int32_t)c->r[11],256); // 80266080
  if (crb(c,0)) { goto L_8026608C; } // 80266084
L_80266088:;
  c->r[10]=0u+0x00000001u; // 80266088
L_8026608C:;
  cmps(c,0,(int32_t)c->r[10],0); // 8026608C
  if (crb(c,2)) { goto L_80266098; } // 80266090
  goto L_802660A0; // 80266094
L_80266098:;
  c->r[10]=R32(c->r[12]+0x00000010u); // 80266098
  c->r[11]=R8(c->r[10]+c->r[11]); // 8026609C
L_802660A0:;
  cmps(c,0,(int32_t)c->r[11],(int32_t)c->r[24]); // 802660A0
  if (crb(c,2)) { goto L_802660B0; } // 802660A4
  c->r[10]=0u+0x00000000u; // 802660A8
  goto L_802660E0; // 802660AC
L_802660B0:;
  c->r[10]=R8(c->r[25]+0x00000000u); // 802660B0
  c->r[10]=(uint32_t)(int32_t)(int8_t)c->r[10]; cr0(c,c->r[10]); // 802660B4
  if (!crb(c,2)) { IRQCHK(c); goto L_80266038; } // 802660B8
  c->r[10]=R8(c->r[29]+0x00000000u); // 802660BC
  c->r[10]=(uint32_t)(int32_t)(int8_t)c->r[10]; // 802660C0
  cmps(c,0,(int32_t)c->r[10],47); // 802660C4
  if (crb(c,2)) { goto L_802660D4; } // 802660C8
  cmps(c,0,(int32_t)c->r[10],0); // 802660CC
  if (!crb(c,2)) { goto L_802660DC; } // 802660D0
L_802660D4:;
  c->r[10]=0u+0x00000001u; // 802660D4
  goto L_802660E0; // 802660D8
L_802660DC:;
  c->r[10]=0u+0x00000000u; // 802660DC
L_802660E0:;
  cmps(c,0,(int32_t)c->r[10],1); // 802660E0
  if (crb(c,2)) { goto L_8026610C; } // 802660E4
L_802660E8:;
  cmps(c,0,(int32_t)c->r[7],0); // 802660E8
  if (crb(c,2)) { goto L_802660F8; } // 802660EC
  c->r[3]=R32(c->r[6]+0x00000008u); // 802660F0
  goto L_802660FC; // 802660F4
L_802660F8:;
  c->r[3]=c->r[3]+0x00000001u; // 802660F8
L_802660FC:;
  cmpu(c,0,c->r[3],c->r[5]); // 802660FC
  if (crb(c,0)) { IRQCHK(c); goto L_80266010; } // 80266100
  c->r[3]=0u+0xFFFFFFFFu; // 80266104
  goto L_80266128; // 80266108
L_8026610C:;
  cmps(c,0,(int32_t)c->r[0],0); // 8026610C
  if (!crb(c,2)) { goto L_80266118; } // 80266110
  goto L_80266128; // 80266114
L_80266118:;
  c->r[4]=c->r[9]+c->r[26]; // 80266118
  c->r[29]=c->r[3]|c->r[3]; // 8026611C
  c->r[26]=c->r[4]+0x00000001u; // 80266120
  IRQCHK(c); goto L_80265E64; // 80266124
L_80266128:;
  c->r[11]=c->r[1]+0x00000030u; // 80266128
  c->lr=0x80266130u; { c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 8026612C
  c->r[0]=R32(c->r[1]+0x00000034u); // 80266130
  c->lr=c->r[0]; // 80266134
  c->r[1]=c->r[1]+0x00000030u; // 80266138
  return; // 8026613C
}

// DVDFastOpen
void f_80266140(Ctx* __restrict c) {
  trace_call(0x80266140u);
  cmps(c,0,(int32_t)c->r[3],0); // 80266140
  if (crb(c,0)) { goto L_80266168; } // 80266144
  c->r[0]=R32(c->r[13]+0xFFFF9928u); // 80266148
  cmpu(c,0,c->r[3],c->r[0]); // 8026614C
  if (!crb(c,0)) { goto L_80266168; } // 80266150
  c->r[7]=(uint32_t)((int32_t)c->r[3]*(int32_t)12); // 80266154
  c->r[3]=R32(c->r[13]+0xFFFF9930u); // 80266158
  c->r[0]=R32(c->r[3]+c->r[7]); // 8026615C
  c->r[0]=rotl(c->r[0],0)&0xFF000000u; cr0(c,c->r[0]); // 80266160
  if (crb(c,2)) { goto L_80266170; } // 80266164
L_80266168:;
  c->r[3]=0u+0x00000000u; // 80266168
  return; // 8026616C
L_80266170:;
  c->r[3]=c->r[3]+c->r[7]; // 80266170
  c->r[5]=R32(c->r[13]+0xFFFF9970u); // 80266174
  c->r[6]=R32(c->r[3]+0x00000004u); // 80266178
  c->r[0]=0u+0x00000000u; // 8026617C
  c->r[3]=0u+0x00000001u; // 80266180
  c->r[5]=((c->r[5])&0x20)?0u:(c->r[6]>>((c->r[5])&31)); // 80266184
  W32(c->r[4]+0x00000030u,c->r[5]); // 80266188
  c->r[5]=R32(c->r[13]+0xFFFF9930u); // 8026618C
  c->r[5]=c->r[5]+c->r[7]; // 80266190
  c->r[5]=R32(c->r[5]+0x00000008u); // 80266194
  W32(c->r[4]+0x00000034u,c->r[5]); // 80266198
  W32(c->r[4]+0x00000038u,c->r[0]); // 8026619C
  W32(c->r[4]+0x0000000Cu,c->r[0]); // 802661A0
  return; // 802661A4
}

// DVDOpen
void f_802661A8(Ctx* __restrict c) {
  trace_call(0x802661A8u);
  {uint32_t ea=c->r[1]+0xFFFFFF60u; W32(ea,c->r[1]); c->r[1]=ea;} // 802661A8
  c->r[0]=c->lr; // 802661AC
  W32(c->r[1]+0x000000A4u,c->r[0]); // 802661B0
  c->r[11]=c->r[1]+0x000000A0u; // 802661B4
  c->lr=0x802661BCu; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 802661B8
  c->r[28]=c->r[3]|c->r[3]; // 802661BC
  c->r[27]=c->r[4]|c->r[4]; // 802661C0
  c->lr=0x802661C8u; f_80265E38(c); // 802661C4
  cmps(c,0,(int32_t)c->r[3],0); // 802661C8
  if (!crb(c,0)) { goto L_802663EC; } // 802661CC
  c->r[29]=R32(c->r[13]+0xFFFF9918u); // 802661D0
  cmps(c,0,(int32_t)c->r[29],0); // 802661D4
  if (!crb(c,2)) { goto L_802661E4; } // 802661D8
  c->r[4]=0u+0x00000000u; // 802661DC
  goto L_80266370; // 802661E0
L_802661E4:;
  c->r[8]=R32(c->r[13]+0xFFFF9930u); // 802661E4
  c->r[0]=(uint32_t)((int32_t)c->r[29]*(int32_t)12); // 802661E8
  c->r[7]=R32(c->r[13]+0xFFFF992Cu); // 802661EC
  c->r[6]=c->r[8]+0x00000004u; // 802661F0
  c->r[3]=R32(c->r[6]+c->r[0]); // 802661F4
  c->r[0]=R32(c->r[8]+c->r[0]); // 802661F8
  cmps(c,0,(int32_t)c->r[3],0); // 802661FC
  c->r[0]=rotl(c->r[0],0)&0x00FFFFFFu; // 80266200
  c->r[30]=c->r[7]+c->r[0]; // 80266204
  if (!crb(c,2)) { goto L_80266214; } // 80266208
  c->r[4]=0u+0x00000000u; // 8026620C
  goto L_80266314; // 80266210
L_80266214:;
  c->r[0]=(uint32_t)((int32_t)c->r[3]*(int32_t)12); // 80266214
  c->r[3]=R32(c->r[6]+c->r[0]); // 80266218
  c->r[0]=R32(c->r[8]+c->r[0]); // 8026621C
  cmps(c,0,(int32_t)c->r[3],0); // 80266220
  c->r[0]=rotl(c->r[0],0)&0x00FFFFFFu; // 80266224
  c->r[31]=c->r[7]+c->r[0]; // 80266228
  if (!crb(c,2)) { goto L_80266238; } // 8026622C
  c->r[4]=0u+0x00000000u; // 80266230
  goto L_802662B8; // 80266234
L_80266238:;
  c->r[3]=(uint32_t)((int32_t)c->r[3]*(int32_t)12); // 80266238
  c->r[4]=c->r[1]+0x00000008u; // 8026623C
  c->r[5]=0u+0x00000080u; // 80266240
  c->r[0]=R32(c->r[8]+c->r[3]); // 80266244
  c->r[3]=R32(c->r[6]+c->r[3]); // 80266248
  c->r[0]=rotl(c->r[0],0)&0x00FFFFFFu; // 8026624C
  c->r[27]=c->r[7]+c->r[0]; // 80266250
  c->lr=0x80266258u; f_80266478(c); // 80266254
  cmpu(c,0,c->r[3],0x00000080u); // 80266258
  c->r[4]=c->r[3]|c->r[3]; // 8026625C
  if (!crb(c,2)) { goto L_80266268; } // 80266260
  goto L_802662B8; // 80266264
L_80266268:;
  c->r[4]=c->r[3]+0x00000001u; // 80266268
  c->r[5]=c->r[1]+0x00000008u; // 8026626C
  c->r[0]=0u+0x0000002Fu; // 80266270
  W8(c->r[5]+c->r[3],c->r[0]); // 80266274
  c->r[6]=addc(c,~c->r[4],0x00000080u,1); // 80266278
  c->r[3]=c->r[6]|c->r[6]; // 8026627C
  c->r[5]=c->r[5]+c->r[4]; // 80266280
  goto L_8026629C; // 80266284
L_80266288:;
  c->r[0]=R8(c->r[27]+0x00000000u); // 80266288
  c->r[3]=c->r[3]+0xFFFFFFFFu; // 8026628C
  c->r[27]=c->r[27]+0x00000001u; // 80266290
  W8(c->r[5]+0x00000000u,c->r[0]); // 80266294
  c->r[5]=c->r[5]+0x00000001u; // 80266298
L_8026629C:;
  cmps(c,0,(int32_t)c->r[3],0); // 8026629C
  if (crb(c,2)) { goto L_802662B0; } // 802662A0
  c->r[0]=R8(c->r[27]+0x00000000u); // 802662A4
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 802662A8
  if (!crb(c,2)) { IRQCHK(c); goto L_80266288; } // 802662AC
L_802662B0:;
  c->r[0]=c->r[6]-c->r[3]; // 802662B0
  c->r[4]=c->r[4]+c->r[0]; // 802662B4
L_802662B8:;
  cmpu(c,0,c->r[4],0x00000080u); // 802662B8
  if (!crb(c,2)) { goto L_802662C4; } // 802662BC
  goto L_80266314; // 802662C0
L_802662C4:;
  c->r[5]=c->r[4]+0x00000001u; // 802662C4
  c->r[3]=c->r[1]+0x00000008u; // 802662C8
  c->r[0]=0u+0x0000002Fu; // 802662CC
  W8(c->r[3]+c->r[4],c->r[0]); // 802662D0
  c->r[6]=addc(c,~c->r[5],0x00000080u,1); // 802662D4
  c->r[4]=c->r[6]|c->r[6]; // 802662D8
  c->r[3]=c->r[3]+c->r[5]; // 802662DC
  goto L_802662F8; // 802662E0
L_802662E4:;
  c->r[0]=R8(c->r[31]+0x00000000u); // 802662E4
  c->r[4]=c->r[4]+0xFFFFFFFFu; // 802662E8
  c->r[31]=c->r[31]+0x00000001u; // 802662EC
  W8(c->r[3]+0x00000000u,c->r[0]); // 802662F0
  c->r[3]=c->r[3]+0x00000001u; // 802662F4
L_802662F8:;
  cmps(c,0,(int32_t)c->r[4],0); // 802662F8
  if (crb(c,2)) { goto L_8026630C; } // 802662FC
  c->r[0]=R8(c->r[31]+0x00000000u); // 80266300
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 80266304
  if (!crb(c,2)) { IRQCHK(c); goto L_802662E4; } // 80266308
L_8026630C:;
  c->r[0]=c->r[6]-c->r[4]; // 8026630C
  c->r[4]=c->r[5]+c->r[0]; // 80266310
L_80266314:;
  cmpu(c,0,c->r[4],0x00000080u); // 80266314
  if (!crb(c,2)) { goto L_80266320; } // 80266318
  goto L_80266370; // 8026631C
L_80266320:;
  c->r[5]=c->r[4]+0x00000001u; // 80266320
  c->r[3]=c->r[1]+0x00000008u; // 80266324
  c->r[0]=0u+0x0000002Fu; // 80266328
  W8(c->r[3]+c->r[4],c->r[0]); // 8026632C
  c->r[6]=addc(c,~c->r[5],0x00000080u,1); // 80266330
  c->r[4]=c->r[6]|c->r[6]; // 80266334
  c->r[3]=c->r[3]+c->r[5]; // 80266338
  goto L_80266354; // 8026633C
L_80266340:;
  c->r[0]=R8(c->r[30]+0x00000000u); // 80266340
  c->r[4]=c->r[4]+0xFFFFFFFFu; // 80266344
  c->r[30]=c->r[30]+0x00000001u; // 80266348
  W8(c->r[3]+0x00000000u,c->r[0]); // 8026634C
  c->r[3]=c->r[3]+0x00000001u; // 80266350
L_80266354:;
  cmps(c,0,(int32_t)c->r[4],0); // 80266354
  if (crb(c,2)) { goto L_80266368; } // 80266358
  c->r[0]=R8(c->r[30]+0x00000000u); // 8026635C
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 80266360
  if (!crb(c,2)) { IRQCHK(c); goto L_80266340; } // 80266364
L_80266368:;
  c->r[0]=c->r[6]-c->r[4]; // 80266368
  c->r[4]=c->r[5]+c->r[0]; // 8026636C
L_80266370:;
  cmpu(c,0,c->r[4],0x00000080u); // 80266370
  if (!crb(c,2)) { goto L_80266384; } // 80266374
  c->r[0]=0u+0x00000000u; // 80266378
  W8(c->r[1]+0x00000087u,c->r[0]); // 8026637C
  goto L_802663CC; // 80266380
L_80266384:;
  c->r[0]=(uint32_t)((int32_t)c->r[29]*(int32_t)12); // 80266384
  c->r[3]=R32(c->r[13]+0xFFFF9930u); // 80266388
  c->r[0]=R32(c->r[3]+c->r[0]); // 8026638C
  c->r[0]=rotl(c->r[0],0)&0xFF000000u; cr0(c,c->r[0]); // 80266390
  if (crb(c,2)) { goto L_802663C0; } // 80266394
  cmpu(c,0,c->r[4],0x0000007Fu); // 80266398
  if (!crb(c,2)) { goto L_802663B0; } // 8026639C
  c->r[3]=c->r[1]+0x00000008u; // 802663A0
  c->r[0]=0u+0x00000000u; // 802663A4
  W8(c->r[3]+c->r[4],c->r[0]); // 802663A8
  goto L_802663CC; // 802663AC
L_802663B0:;
  c->r[3]=c->r[1]+0x00000008u; // 802663B0
  c->r[0]=0u+0x0000002Fu; // 802663B4
  W8(c->r[3]+c->r[4],c->r[0]); // 802663B8
  c->r[4]=c->r[4]+0x00000001u; // 802663BC
L_802663C0:;
  c->r[3]=c->r[1]+0x00000008u; // 802663C0
  c->r[0]=0u+0x00000000u; // 802663C4
  W8(c->r[3]+c->r[4],c->r[0]); // 802663C8
L_802663CC:;
  c->r[3]=0u+0x80420000u; // 802663CC
  c->r[4]=c->r[28]|c->r[28]; // 802663D0
  c->r[3]=c->r[3]+0xFFFFFBF8u; // 802663D4
  c->r[5]=c->r[1]+0x00000008u; // 802663D8
  setcrb(c,6,crb(c,6)^crb(c,6)); // 802663DC
  c->lr=0x802663E4u; f_801CCA38(c); // 802663E0
  c->r[3]=0u+0x00000000u; // 802663E4
  goto L_8026643C; // 802663E8
L_802663EC:;
  c->r[6]=(uint32_t)((int32_t)c->r[3]*(int32_t)12); // 802663EC
  c->r[3]=R32(c->r[13]+0xFFFF9930u); // 802663F0
  c->r[0]=R32(c->r[3]+c->r[6]); // 802663F4
  c->r[0]=rotl(c->r[0],0)&0xFF000000u; cr0(c,c->r[0]); // 802663F8
  if (crb(c,2)) { goto L_80266408; } // 802663FC
  c->r[3]=0u+0x00000000u; // 80266400
  goto L_8026643C; // 80266404
L_80266408:;
  c->r[3]=c->r[3]+c->r[6]; // 80266408
  c->r[4]=R32(c->r[13]+0xFFFF9970u); // 8026640C
  c->r[5]=R32(c->r[3]+0x00000004u); // 80266410
  c->r[0]=0u+0x00000000u; // 80266414
  c->r[3]=0u+0x00000001u; // 80266418
  c->r[4]=((c->r[4])&0x20)?0u:(c->r[5]>>((c->r[4])&31)); // 8026641C
  W32(c->r[27]+0x00000030u,c->r[4]); // 80266420
  c->r[4]=R32(c->r[13]+0xFFFF9930u); // 80266424
  c->r[4]=c->r[4]+c->r[6]; // 80266428
  c->r[4]=R32(c->r[4]+0x00000008u); // 8026642C
  W32(c->r[27]+0x00000034u,c->r[4]); // 80266430
  W32(c->r[27]+0x00000038u,c->r[0]); // 80266434
  W32(c->r[27]+0x0000000Cu,c->r[0]); // 80266438
L_8026643C:;
  c->r[11]=c->r[1]+0x000000A0u; // 8026643C
  c->lr=0x80266444u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 80266440
  c->r[0]=R32(c->r[1]+0x000000A4u); // 80266444
  c->lr=c->r[0]; // 80266448
  c->r[1]=c->r[1]+0x000000A0u; // 8026644C
  return; // 80266450
}

// fn_80266454
void f_80266454(Ctx* __restrict c) {
  trace_call(0x80266454u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80266454
  c->r[0]=c->lr; // 80266458
  W32(c->r[1]+0x00000014u,c->r[0]); // 8026645C
  c->lr=0x80266464u; f_8026A964(c); // 80266460
  c->r[0]=R32(c->r[1]+0x00000014u); // 80266464
  c->r[3]=0u+0x00000001u; // 80266468
  c->lr=c->r[0]; // 8026646C
  c->r[1]=c->r[1]+0x00000010u; // 80266470
  return; // 80266474
}

// entryToPath
void f_80266478(Ctx* __restrict c) {
  trace_call(0x80266478u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80266478
  c->r[0]=c->lr; // 8026647C
  W32(c->r[1]+0x00000024u,c->r[0]); // 80266480
  c->r[11]=c->r[1]+0x00000020u; // 80266484
  c->lr=0x8026648Cu; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 80266488
  cmps(c,0,(int32_t)c->r[3],0); // 8026648C
  c->r[28]=c->r[4]|c->r[4]; // 80266490
  c->r[29]=c->r[5]|c->r[5]; // 80266494
  if (!crb(c,2)) { goto L_802664A4; } // 80266498
  c->r[3]=0u+0x00000000u; // 8026649C
  goto L_80266620; // 802664A0
L_802664A4:;
  c->r[8]=R32(c->r[13]+0xFFFF9930u); // 802664A4
  c->r[0]=(uint32_t)((int32_t)c->r[3]*(int32_t)12); // 802664A8
  c->r[7]=R32(c->r[13]+0xFFFF992Cu); // 802664AC
  c->r[6]=c->r[8]+0x00000004u; // 802664B0
  c->r[3]=R32(c->r[6]+c->r[0]); // 802664B4
  c->r[0]=R32(c->r[8]+c->r[0]); // 802664B8
  cmps(c,0,(int32_t)c->r[3],0); // 802664BC
  c->r[0]=rotl(c->r[0],0)&0x00FFFFFFu; // 802664C0
  c->r[30]=c->r[7]+c->r[0]; // 802664C4
  if (!crb(c,2)) { goto L_802664D4; } // 802664C8
  c->r[4]=0u+0x00000000u; // 802664CC
  goto L_802665C4; // 802664D0
L_802664D4:;
  c->r[0]=(uint32_t)((int32_t)c->r[3]*(int32_t)12); // 802664D4
  c->r[3]=R32(c->r[6]+c->r[0]); // 802664D8
  c->r[0]=R32(c->r[8]+c->r[0]); // 802664DC
  cmps(c,0,(int32_t)c->r[3],0); // 802664E0
  c->r[0]=rotl(c->r[0],0)&0x00FFFFFFu; // 802664E4
  c->r[31]=c->r[7]+c->r[0]; // 802664E8
  if (!crb(c,2)) { goto L_802664F8; } // 802664EC
  c->r[4]=0u+0x00000000u; // 802664F0
  goto L_8026656C; // 802664F4
L_802664F8:;
  c->r[3]=(uint32_t)((int32_t)c->r[3]*(int32_t)12); // 802664F8
  c->r[0]=R32(c->r[8]+c->r[3]); // 802664FC
  c->r[3]=R32(c->r[6]+c->r[3]); // 80266500
  c->r[0]=rotl(c->r[0],0)&0x00FFFFFFu; // 80266504
  c->r[27]=c->r[7]+c->r[0]; // 80266508
  c->lr=0x80266510u; f_80266478(c); // 8026650C
  cmpu(c,0,c->r[3],c->r[29]); // 80266510
  c->r[4]=c->r[3]|c->r[3]; // 80266514
  if (!crb(c,2)) { goto L_80266520; } // 80266518
  goto L_8026656C; // 8026651C
L_80266520:;
  c->r[4]=c->r[3]+0x00000001u; // 80266520
  c->r[0]=0u+0x0000002Fu; // 80266524
  c->r[6]=c->r[29]-c->r[4]; // 80266528
  W8(c->r[28]+c->r[3],c->r[0]); // 8026652C
  c->r[3]=c->r[28]+c->r[4]; // 80266530
  c->r[5]=c->r[6]|c->r[6]; // 80266534
  goto L_80266550; // 80266538
L_8026653C:;
  c->r[0]=R8(c->r[27]+0x00000000u); // 8026653C
  c->r[5]=c->r[5]+0xFFFFFFFFu; // 80266540
  c->r[27]=c->r[27]+0x00000001u; // 80266544
  W8(c->r[3]+0x00000000u,c->r[0]); // 80266548
  c->r[3]=c->r[3]+0x00000001u; // 8026654C
L_80266550:;
  cmps(c,0,(int32_t)c->r[5],0); // 80266550
  if (crb(c,2)) { goto L_80266564; } // 80266554
  c->r[0]=R8(c->r[27]+0x00000000u); // 80266558
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 8026655C
  if (!crb(c,2)) { IRQCHK(c); goto L_8026653C; } // 80266560
L_80266564:;
  c->r[0]=c->r[6]-c->r[5]; // 80266564
  c->r[4]=c->r[4]+c->r[0]; // 80266568
L_8026656C:;
  cmpu(c,0,c->r[4],c->r[29]); // 8026656C
  if (!crb(c,2)) { goto L_80266578; } // 80266570
  goto L_802665C4; // 80266574
L_80266578:;
  c->r[3]=c->r[4]+0x00000001u; // 80266578
  c->r[0]=0u+0x0000002Fu; // 8026657C
  c->r[6]=c->r[29]-c->r[3]; // 80266580
  W8(c->r[28]+c->r[4],c->r[0]); // 80266584
  c->r[4]=c->r[28]+c->r[3]; // 80266588
  c->r[5]=c->r[6]|c->r[6]; // 8026658C
  goto L_802665A8; // 80266590
L_80266594:;
  c->r[0]=R8(c->r[31]+0x00000000u); // 80266594
  c->r[5]=c->r[5]+0xFFFFFFFFu; // 80266598
  c->r[31]=c->r[31]+0x00000001u; // 8026659C
  W8(c->r[4]+0x00000000u,c->r[0]); // 802665A0
  c->r[4]=c->r[4]+0x00000001u; // 802665A4
L_802665A8:;
  cmps(c,0,(int32_t)c->r[5],0); // 802665A8
  if (crb(c,2)) { goto L_802665BC; } // 802665AC
  c->r[0]=R8(c->r[31]+0x00000000u); // 802665B0
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 802665B4
  if (!crb(c,2)) { IRQCHK(c); goto L_80266594; } // 802665B8
L_802665BC:;
  c->r[0]=c->r[6]-c->r[5]; // 802665BC
  c->r[4]=c->r[3]+c->r[0]; // 802665C0
L_802665C4:;
  cmpu(c,0,c->r[4],c->r[29]); // 802665C4
  if (!crb(c,2)) { goto L_802665D4; } // 802665C8
  c->r[3]=c->r[4]|c->r[4]; // 802665CC
  goto L_80266620; // 802665D0
L_802665D4:;
  c->r[6]=c->r[4]+0x00000001u; // 802665D4
  c->r[0]=0u+0x0000002Fu; // 802665D8
  c->r[5]=c->r[29]-c->r[6]; // 802665DC
  W8(c->r[28]+c->r[4],c->r[0]); // 802665E0
  c->r[3]=c->r[28]+c->r[6]; // 802665E4
  c->r[4]=c->r[5]|c->r[5]; // 802665E8
  goto L_80266604; // 802665EC
L_802665F0:;
  c->r[0]=R8(c->r[30]+0x00000000u); // 802665F0
  c->r[4]=c->r[4]+0xFFFFFFFFu; // 802665F4
  c->r[30]=c->r[30]+0x00000001u; // 802665F8
  W8(c->r[3]+0x00000000u,c->r[0]); // 802665FC
  c->r[3]=c->r[3]+0x00000001u; // 80266600
L_80266604:;
  cmps(c,0,(int32_t)c->r[4],0); // 80266604
  if (crb(c,2)) { goto L_80266618; } // 80266608
  c->r[0]=R8(c->r[30]+0x00000000u); // 8026660C
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 80266610
  if (!crb(c,2)) { IRQCHK(c); goto L_802665F0; } // 80266614
L_80266618:;
  c->r[0]=c->r[5]-c->r[4]; // 80266618
  c->r[3]=c->r[6]+c->r[0]; // 8026661C
L_80266620:;
  c->r[11]=c->r[1]+0x00000020u; // 80266620
  c->lr=0x80266628u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 80266624
  c->r[0]=R32(c->r[1]+0x00000024u); // 80266628
  c->lr=c->r[0]; // 8026662C
  c->r[1]=c->r[1]+0x00000020u; // 80266630
  return; // 80266634
}

// DVDReadAsyncPrio
void f_80266638(Ctx* __restrict c) {
  trace_call(0x80266638u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80266638
  c->r[0]=c->lr; // 8026663C
  W32(c->r[1]+0x00000024u,c->r[0]); // 80266640
  c->r[11]=c->r[1]+0x00000020u; // 80266644
  c->lr=0x8026664Cu; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 80266648
  cmps(c,0,(int32_t)c->r[6],0); // 8026664C
  c->r[26]=c->r[3]|c->r[3]; // 80266650
  c->r[27]=c->r[4]|c->r[4]; // 80266654
  c->r[28]=c->r[5]|c->r[5]; // 80266658
  c->r[29]=c->r[6]|c->r[6]; // 8026665C
  c->r[30]=c->r[7]|c->r[7]; // 80266660
  c->r[31]=c->r[8]|c->r[8]; // 80266664
  if (crb(c,0)) { goto L_80266678; } // 80266668
  c->r[0]=R32(c->r[3]+0x00000034u); // 8026666C
  cmpu(c,0,c->r[6],c->r[0]); // 80266670
  if (!crb(c,1)) { goto L_80266690; } // 80266674
L_80266678:;
  c->r[5]=0u+0x80420000u; // 80266678
  c->r[3]=c->r[13]+0xFFFF8E28u; // 8026667C
  c->r[5]=c->r[5]+0xFFFFFC30u; // 80266680
  c->r[4]=0u+0x00000337u; // 80266684
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80266688
  c->lr=0x80266690u; f_801D479C(c); // 8026668C
L_80266690:;
  c->r[4]=c->r[29]+c->r[28]; cr0(c,c->r[4]); // 80266690
  if (crb(c,0)) { goto L_802666A8; } // 80266694
  c->r[3]=R32(c->r[26]+0x00000034u); // 80266698
  c->r[0]=c->r[3]+0x00000020u; // 8026669C
  cmpu(c,0,c->r[4],c->r[0]); // 802666A0
  if (crb(c,0)) { goto L_802666C0; } // 802666A4
L_802666A8:;
  c->r[5]=0u+0x80420000u; // 802666A8
  c->r[3]=c->r[13]+0xFFFF8E28u; // 802666AC
  c->r[5]=c->r[5]+0xFFFFFC30u; // 802666B0
  c->r[4]=0u+0x0000033Du; // 802666B4
  setcrb(c,6,crb(c,6)^crb(c,6)); // 802666B8
  c->lr=0x802666C0u; f_801D479C(c); // 802666BC
L_802666C0:;
  c->r[6]=R32(c->r[26]+0x00000030u); // 802666C0
  c->r[0]=sraw(c,c->r[29],2); // 802666C4
  c->r[7]=0u+0x80260000u; // 802666C8
  W32(c->r[26]+0x00000038u,c->r[30]); // 802666CC
  c->r[3]=c->r[26]|c->r[26]; // 802666D0
  c->r[4]=c->r[27]|c->r[27]; // 802666D4
  c->r[5]=c->r[28]|c->r[28]; // 802666D8
  c->r[8]=c->r[31]|c->r[31]; // 802666DC
  c->r[6]=c->r[6]+c->r[0]; // 802666E0
  c->r[7]=c->r[7]+0x00006708u; // 802666E4
  c->lr=0x802666ECu; f_8026A290(c); // 802666E8
  c->r[11]=c->r[1]+0x00000020u; // 802666EC
  c->r[3]=0u+0x00000001u; // 802666F0
  c->lr=0x802666F8u; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 802666F4
  c->r[0]=R32(c->r[1]+0x00000024u); // 802666F8
  c->lr=c->r[0]; // 802666FC
  c->r[1]=c->r[1]+0x00000020u; // 80266700
  return; // 80266704
}

// cbForReadAsync
void f_80266708(Ctx* __restrict c) {
  trace_call(0x80266708u);
  c->r[12]=R32(c->r[4]+0x00000038u); // 80266708
  cmps(c,0,(int32_t)c->r[12],0); // 8026670C
  if (crb(c,2)) return; // 80266710
  c->ctr=c->r[12]; // 80266714
  if (true) { dispatch(c,c->ctr); return; } // 80266718
  return; // 8026671C
}

// DVDReadPrio
void f_80266720(Ctx* __restrict c) {
  trace_call(0x80266720u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80266720
  c->r[0]=c->lr; // 80266724
  W32(c->r[1]+0x00000024u,c->r[0]); // 80266728
  c->r[11]=c->r[1]+0x00000020u; // 8026672C
  c->lr=0x80266734u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 80266730
  cmps(c,0,(int32_t)c->r[6],0); // 80266734
  c->r[27]=c->r[3]|c->r[3]; // 80266738
  c->r[28]=c->r[4]|c->r[4]; // 8026673C
  c->r[29]=c->r[5]|c->r[5]; // 80266740
  c->r[31]=c->r[6]|c->r[6]; // 80266744
  c->r[30]=c->r[7]|c->r[7]; // 80266748
  if (crb(c,0)) { goto L_8026675C; } // 8026674C
  c->r[0]=R32(c->r[3]+0x00000034u); // 80266750
  cmpu(c,0,c->r[6],c->r[0]); // 80266754
  if (!crb(c,1)) { goto L_80266774; } // 80266758
L_8026675C:;
  c->r[5]=0u+0x80420000u; // 8026675C
  c->r[3]=c->r[13]+0xFFFF8E28u; // 80266760
  c->r[5]=c->r[5]+0xFFFFFC64u; // 80266764
  c->r[4]=0u+0x0000037Du; // 80266768
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8026676C
  c->lr=0x80266774u; f_801D479C(c); // 80266770
L_80266774:;
  c->r[4]=c->r[31]+c->r[29]; cr0(c,c->r[4]); // 80266774
  if (crb(c,0)) { goto L_8026678C; } // 80266778
  c->r[3]=R32(c->r[27]+0x00000034u); // 8026677C
  c->r[0]=c->r[3]+0x00000020u; // 80266780
  cmpu(c,0,c->r[4],c->r[0]); // 80266784
  if (crb(c,0)) { goto L_802667A4; } // 80266788
L_8026678C:;
  c->r[5]=0u+0x80420000u; // 8026678C
  c->r[3]=c->r[13]+0xFFFF8E28u; // 80266790
  c->r[5]=c->r[5]+0xFFFFFC64u; // 80266794
  c->r[4]=0u+0x00000383u; // 80266798
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8026679C
  c->lr=0x802667A4u; f_801D479C(c); // 802667A0
L_802667A4:;
  c->r[6]=R32(c->r[27]+0x00000030u); // 802667A4
  c->r[0]=sraw(c,c->r[31],2); // 802667A8
  c->r[7]=0u+0x80260000u; // 802667AC
  c->r[3]=c->r[27]|c->r[27]; // 802667B0
  c->r[4]=c->r[28]|c->r[28]; // 802667B4
  c->r[5]=c->r[29]|c->r[29]; // 802667B8
  c->r[8]=c->r[30]|c->r[30]; // 802667BC
  c->r[6]=c->r[6]+c->r[0]; // 802667C0
  c->r[7]=c->r[7]+0x00006848u; // 802667C4
  c->lr=0x802667CCu; f_8026A290(c); // 802667C8
  cmps(c,0,(int32_t)c->r[3],0); // 802667CC
  if (!crb(c,2)) { goto L_802667DC; } // 802667D0
  c->r[3]=0u+0xFFFFFFFFu; // 802667D4
  goto L_80266830; // 802667D8
L_802667DC:;
  c->lr=0x802667E0u; f_8025EA10(c); // 802667DC
  c->r[31]=c->r[3]|c->r[3]; // 802667E0
L_802667E4:;
  c->r[0]=R32(c->r[27]+0x0000000Cu); // 802667E4
  cmps(c,0,(int32_t)c->r[0],0); // 802667E8
  if (!crb(c,2)) { goto L_802667F8; } // 802667EC
  c->r[30]=R32(c->r[27]+0x00000020u); // 802667F0
  goto L_80266824; // 802667F4
L_802667F8:;
  cmps(c,0,(int32_t)c->r[0],-1); // 802667F8
  if (!crb(c,2)) { goto L_80266808; } // 802667FC
  c->r[30]=0u+0xFFFFFFFFu; // 80266800
  goto L_80266824; // 80266804
L_80266808:;
  cmps(c,0,(int32_t)c->r[0],10); // 80266808
  if (!crb(c,2)) { goto L_80266818; } // 8026680C
  c->r[30]=0u+0xFFFFFFFDu; // 80266810
  goto L_80266824; // 80266814
L_80266818:;
  c->r[3]=c->r[13]+0xFFFF9920u; // 80266818
  c->lr=0x80266820u; f_802623D4(c); // 8026681C
  IRQCHK(c); goto L_802667E4; // 80266820
L_80266824:;
  c->r[3]=c->r[31]|c->r[31]; // 80266824
  c->lr=0x8026682Cu; f_8025EA38(c); // 80266828
  c->r[3]=c->r[30]|c->r[30]; // 8026682C
L_80266830:;
  c->r[11]=c->r[1]+0x00000020u; // 80266830
  c->lr=0x80266838u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 80266834
  c->r[0]=R32(c->r[1]+0x00000024u); // 80266838
  c->lr=c->r[0]; // 8026683C
  c->r[1]=c->r[1]+0x00000020u; // 80266840
  return; // 80266844
}

// fn_80266848
void f_80266848(Ctx* __restrict c) {
  trace_call(0x80266848u);
  c->r[3]=c->r[13]+0xFFFF9920u; // 80266848
  f_802624C0(c); return; // 8026684C
}

// fn_80266850
void f_80266850(Ctx* __restrict c) {
  trace_call(0x80266850u);
  c->r[0]=R32(c->r[3]+0x0000000Cu); // 80266850
  cmps(c,0,(int32_t)c->r[0],2); // 80266854
  if (crb(c,2)) { goto L_80266898; } // 80266858
  if (!crb(c,0)) { goto L_80266874; } // 8026685C
  cmps(c,0,(int32_t)c->r[0],1); // 80266860
  if (!crb(c,0)) { goto L_802668A0; } // 80266864
  cmps(c,0,(int32_t)c->r[0],-1); // 80266868
  if (!crb(c,0)) { goto L_80266890; } // 8026686C
  return; // 80266870
L_80266874:;
  cmps(c,0,(int32_t)c->r[0],10); // 80266874
  if (!crb(c,0)) { goto L_80266888; } // 80266878
  cmps(c,0,(int32_t)c->r[0],8); // 8026687C
  if (!crb(c,0)) return; // 80266880
  goto L_80266890; // 80266884
L_80266888:;
  cmps(c,0,(int32_t)c->r[0],13); // 80266888
  if (!crb(c,0)) return; // 8026688C
L_80266890:;
  c->r[3]=R32(c->r[3]+0x00000020u); // 80266890
  return; // 80266894
L_80266898:;
  c->r[3]=0u+0x00000000u; // 80266898
  return; // 8026689C
L_802668A0:;
  c->r[3]=R32(c->r[3]+0x00000020u); // 802668A0
  return; // 802668A4
}

// StampCommand
void f_802668A8(Ctx* __restrict c) {
  trace_call(0x802668A8u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802668A8
  c->r[0]=c->lr; // 802668AC
  W32(c->r[1]+0x00000024u,c->r[0]); // 802668B0
  c->r[11]=c->r[1]+0x00000020u; // 802668B4
  c->lr=0x802668BCu; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 802668B8
  c->r[27]=c->r[3]|c->r[3]; // 802668BC
  c->r[28]=c->r[4]|c->r[4]; // 802668C0
  c->r[29]=c->r[5]|c->r[5]; // 802668C4
  c->lr=0x802668CCu; f_8025EA10(c); // 802668C8
  c->r[0]=R32(c->r[13]+0xFFFF9938u); // 802668CC
  c->r[31]=c->r[3]|c->r[3]; // 802668D0
  cmpu(c,0,c->r[0],0x00000005u); // 802668D4
  if (crb(c,0)) { goto L_802668E4; } // 802668D8
  c->r[0]=0u+0x00000000u; // 802668DC
  W32(c->r[13]+0xFFFF9938u,c->r[0]); // 802668E0
L_802668E4:;
  c->r[0]=R32(c->r[13]+0xFFFF9938u); // 802668E4
  c->r[30]=0u+0x80600000u; // 802668E8
  c->r[3]=R32(c->r[13]+0xFFFF9938u); // 802668EC
  c->r[30]=c->r[30]+0xFFFFE3E0u; // 802668F0
  c->r[4]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 802668F4
  c->r[0]=R32(c->r[13]+0xFFFF9938u); // 802668F8
  c->r[3]=(uint32_t)((int32_t)c->r[3]*(int32_t)20); // 802668FC
  c->r[4]=c->r[30]+c->r[4]; // 80266900
  W32(c->r[4]+0x0000001Cu,c->r[27]); // 80266904
  c->r[3]=c->r[30]+c->r[3]; // 80266908
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 8026690C
  W32(c->r[3]+0x00000020u,c->r[28]); // 80266910
  c->r[3]=c->r[30]+c->r[0]; // 80266914
  W32(c->r[3]+0x00000024u,c->r[29]); // 80266918
  c->lr=0x80266920u; f_80262798(c); // 8026691C
  c->r[0]=R32(c->r[13]+0xFFFF9938u); // 80266920
  c->r[4]=R32(c->r[13]+0xFFFF9938u); // 80266924
  c->r[5]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 80266928
  c->r[0]=c->r[4]+0x00000001u; // 8026692C
  W32(c->r[13]+0xFFFF9938u,c->r[0]); // 80266930
  c->r[4]=c->r[30]+c->r[5]; // 80266934
  W32(c->r[4]+0x0000002Cu,c->r[3]); // 80266938
  c->r[3]=c->r[31]|c->r[31]; // 8026693C
  c->lr=0x80266944u; f_8025EA38(c); // 80266940
  c->r[11]=c->r[1]+0x00000020u; // 80266944
  c->lr=0x8026694Cu; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 80266948
  c->r[0]=R32(c->r[1]+0x00000024u); // 8026694C
  c->lr=c->r[0]; // 80266950
  c->r[1]=c->r[1]+0x00000020u; // 80266954
  return; // 80266958
}

// fn_8026695C
void f_8026695C(Ctx* __restrict c) {
  trace_call(0x8026695Cu);
  return; // 8026695C
}

// DVDInit
void f_80266960(Ctx* __restrict c) {
  trace_call(0x80266960u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80266960
  c->r[0]=c->lr; // 80266964
  W32(c->r[1]+0x00000014u,c->r[0]); // 80266968
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8026696C
  c->r[0]=R32(c->r[13]+0xFFFF9974u); // 80266970
  cmps(c,0,(int32_t)c->r[0],0); // 80266974
  if (!crb(c,2)) { goto L_80266A2C; } // 80266978
  c->r[3]=R32(c->r[13]+0xFFFF8E30u); // 8026697C
  c->lr=0x80266984u; f_80259310(c); // 80266980
  c->r[31]=0u+0x00000001u; // 80266984
  W32(c->r[13]+0xFFFF9974u,c->r[31]); // 80266988
  c->lr=0x80266990u; f_8026B690(c); // 8026698C
  c->lr=0x80266994u; f_80265E08(c); // 80266990
  c->lr=0x80266998u; f_8026AD90(c); // 80266994
  c->r[0]=0u+0x80000000u; // 80266998
  c->r[3]=0u+0x00000000u; // 8026699C
  W32(c->r[13]+0xFFFF9998u,c->r[3]); // 802669A0
  c->r[3]=c->r[13]+0xFFFF9920u; // 802669A4
  W32(c->r[13]+0xFFFF99B0u,c->r[0]); // 802669A8
  W32(c->r[13]+0xFFFF99B4u,c->r[0]); // 802669AC
  c->lr=0x802669B4u; f_80261388(c); // 802669B0
  c->lr=0x802669B8u; f_8026CD8C(c); // 802669B4
  c->lr=0x802669BCu; f_8026CD94(c); // 802669B8
  c->r[3]=R32(c->r[13]+0xFFFF99B0u); // 802669BC
  c->r[3]=R32(c->r[3]+0x00000020u); // 802669C0
  c->r[0]=c->r[3]+0x1AE00000u; // 802669C4
  cmpu(c,0,c->r[0],0x00007C22u); // 802669C8
  if (crb(c,2)) { goto L_802669E0; } // 802669CC
  c->r[0]=c->r[3]+0xF2EB0000u; // 802669D0
  cmpu(c,0,c->r[0],0x0000EA5Eu); // 802669D4
  if (crb(c,2)) { goto L_802669E0; } // 802669D8
  W32(c->r[13]+0xFFFF9954u,c->r[31]); // 802669DC
L_802669E0:;
  c->r[31]=0u+0x80600000u; // 802669E0
  c->r[4]=0u+0x00000000u; // 802669E4
  c->r[3]=c->r[31]+0xFFFFE3E0u; // 802669E8
  c->r[5]=0u+0x00000080u; // 802669EC
  c->lr=0x802669F4u; f_800043EC(c); // 802669F0
  c->r[3]=c->r[31]+0xFFFFE3E0u; // 802669F4
  c->r[4]=0u+0x80000000u; // 802669F8
  c->r[5]=0u+0x00000004u; // 802669FC
  c->lr=0x80266A04u; f_80235294(c); // 80266A00
  c->r[6]=0u+0x80000000u; // 80266A04
  c->r[5]=c->r[31]+0xFFFFE3E0u; // 80266A08
  c->r[4]=R8(c->r[6]+0x00000006u); // 80266A0C
  c->r[0]=0u+0x00000000u; // 80266A10
  c->r[3]=0u+0x00000001u; // 80266A14
  W8(c->r[5]+0x00000004u,c->r[4]); // 80266A18
  c->r[4]=R8(c->r[6]+0x00000007u); // 80266A1C
  W8(c->r[5]+0x00000005u,c->r[4]); // 80266A20
  W32(c->r[13]+0xFFFF9970u,c->r[0]); // 80266A24
  c->lr=0x80266A2Cu; f_8026B494(c); // 80266A28
L_80266A2C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 80266A2C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80266A30
  c->lr=c->r[0]; // 80266A34
  c->r[1]=c->r[1]+0x00000010u; // 80266A38
  return; // 80266A3C
}

// stateReadingFST
void f_80266A40(Ctx* __restrict c) {
  trace_call(0x80266A40u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80266A40
  c->r[0]=c->lr; // 80266A44
  c->r[5]=0u+0x80260000u; // 80266A48
  c->r[3]=0u+0x80600000u; // 80266A4C
  W32(c->r[1]+0x00000024u,c->r[0]); // 80266A50
  c->r[5]=c->r[5]+0x00006A40u; // 80266A54
  c->r[3]=c->r[3]+0xFFFF9680u; // 80266A58
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 80266A5C
  W32(c->r[1]+0x00000018u,c->r[30]); // 80266A60
  W32(c->r[1]+0x00000014u,c->r[29]); // 80266A64
  W32(c->r[1]+0x00000010u,c->r[28]); // 80266A68
  c->r[4]=R32(c->r[13]+0xFFFF99B0u); // 80266A6C
  W32(c->r[13]+0xFFFF99BCu,c->r[5]); // 80266A70
  c->r[0]=R32(c->r[3]+0x00000008u); // 80266A74
  c->r[3]=R32(c->r[4]+0x0000003Cu); // 80266A78
  cmpu(c,0,c->r[3],c->r[0]); // 80266A7C
  if (!crb(c,0)) { goto L_80266A9C; } // 80266A80
  c->r[5]=0u+0x80420000u; // 80266A84
  c->r[3]=c->r[13]+0xFFFF8E3Cu; // 80266A88
  c->r[5]=c->r[5]+0xFFFFFCE0u; // 80266A8C
  c->r[4]=0u+0x0000040Bu; // 80266A90
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80266A94
  c->lr=0x80266A9Cu; f_801D479C(c); // 80266A98
L_80266A9C:;
  c->r[3]=0u+0x00000000u; // 80266A9C
  c->lr=0x80266AA4u; f_8026CD9C(c); // 80266AA0
  c->r[3]=R32(c->r[13]+0xFFFF9970u); // 80266AA4
  c->r[6]=0u+0x80600000u; // 80266AA8
  c->r[6]=c->r[6]+0xFFFF9680u; // 80266AAC
  c->r[0]=R32(c->r[13]+0xFFFF9970u); // 80266AB0
  c->r[3]=~(c->r[3]|c->r[3]); // 80266AB4
  c->r[5]=R32(c->r[6]+0x00000008u); // 80266AB8
  c->r[4]=rotl(c->r[3],0)&0x00000002u; // 80266ABC
  c->r[3]=R32(c->r[6]+0x00000004u); // 80266AC0
  c->r[4]=((c->r[4])&0x20)?0u:(c->r[5]<<((c->r[4])&31)); // 80266AC4
  c->r[4]=c->r[4]+0x0000001Fu; // 80266AC8
  c->r[29]=((c->r[0])&0x20)?0u:(c->r[3]>>((c->r[0])&31)); // 80266ACC
  c->r[28]=rotl(c->r[4],0)&0xFFFFFFE0u; // 80266AD0
  c->lr=0x80266AD8u; f_8025EA10(c); // 80266AD4
  c->r[0]=R32(c->r[13]+0xFFFF9938u); // 80266AD8
  c->r[31]=c->r[3]|c->r[3]; // 80266ADC
  cmpu(c,0,c->r[0],0x00000005u); // 80266AE0
  if (crb(c,0)) { goto L_80266AF0; } // 80266AE4
  c->r[0]=0u+0x00000000u; // 80266AE8
  W32(c->r[13]+0xFFFF9938u,c->r[0]); // 80266AEC
L_80266AF0:;
  c->r[0]=R32(c->r[13]+0xFFFF9938u); // 80266AF0
  c->r[30]=0u+0x80600000u; // 80266AF4
  c->r[3]=R32(c->r[13]+0xFFFF9938u); // 80266AF8
  c->r[30]=c->r[30]+0xFFFFE3E0u; // 80266AFC
  c->r[4]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 80266B00
  c->r[0]=R32(c->r[13]+0xFFFF9938u); // 80266B04
  c->r[5]=0u+0x00000001u; // 80266B08
  c->r[3]=(uint32_t)((int32_t)c->r[3]*(int32_t)20); // 80266B0C
  c->r[4]=c->r[30]+c->r[4]; // 80266B10
  W32(c->r[4]+0x0000001Cu,c->r[5]); // 80266B14
  c->r[3]=c->r[30]+c->r[3]; // 80266B18
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 80266B1C
  W32(c->r[3]+0x00000020u,c->r[29]); // 80266B20
  c->r[3]=c->r[30]+c->r[0]; // 80266B24
  W32(c->r[3]+0x00000024u,c->r[28]); // 80266B28
  c->lr=0x80266B30u; f_80262798(c); // 80266B2C
  c->r[0]=R32(c->r[13]+0xFFFF9938u); // 80266B30
  c->r[4]=R32(c->r[13]+0xFFFF9938u); // 80266B34
  c->r[5]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 80266B38
  c->r[0]=c->r[4]+0x00000001u; // 80266B3C
  W32(c->r[13]+0xFFFF9938u,c->r[0]); // 80266B40
  c->r[4]=c->r[30]+c->r[5]; // 80266B44
  W32(c->r[4]+0x0000002Cu,c->r[3]); // 80266B48
  c->r[3]=c->r[31]|c->r[31]; // 80266B4C
  c->lr=0x80266B54u; f_8025EA38(c); // 80266B50
  c->r[0]=R32(c->r[13]+0xFFFF9970u); // 80266B54
  c->r[4]=0u+0x80600000u; // 80266B58
  c->r[4]=c->r[4]+0xFFFF9680u; // 80266B5C
  c->r[6]=0u+0x80260000u; // 80266B60
  c->r[0]=~(c->r[0]|c->r[0]); // 80266B64
  c->r[3]=R32(c->r[4]+0x00000008u); // 80266B68
  c->r[0]=rotl(c->r[0],0)&0x00000002u; // 80266B6C
  c->r[7]=R32(c->r[13]+0xFFFF99B0u); // 80266B70
  c->r[3]=((c->r[0])&0x20)?0u:(c->r[3]<<((c->r[0])&31)); // 80266B74
  c->r[5]=R32(c->r[4]+0x00000004u); // 80266B78
  c->r[4]=c->r[3]+0x0000001Fu; // 80266B7C
  c->r[0]=R32(c->r[13]+0xFFFF9970u); // 80266B80
  c->r[3]=R32(c->r[7]+0x00000038u); // 80266B84
  c->r[4]=rotl(c->r[4],0)&0xFFFFFFE0u; // 80266B88
  c->r[5]=((c->r[0])&0x20)?0u:(c->r[5]>>((c->r[0])&31)); // 80266B8C
  c->r[6]=c->r[6]+0x00006BB8u; // 80266B90
  c->lr=0x80266B98u; f_8026C8DC(c); // 80266B94
  c->r[0]=R32(c->r[1]+0x00000024u); // 80266B98
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 80266B9C
  c->r[30]=R32(c->r[1]+0x00000018u); // 80266BA0
  c->r[29]=R32(c->r[1]+0x00000014u); // 80266BA4
  c->r[28]=R32(c->r[1]+0x00000010u); // 80266BA8
  c->lr=c->r[0]; // 80266BAC
  c->r[1]=c->r[1]+0x00000020u; // 80266BB0
  return; // 80266BB4
}

// cbForStateReadingFST
void f_80266BB8(Ctx* __restrict c) {
  trace_call(0x80266BB8u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80266BB8
  c->r[0]=c->lr; // 80266BBC
  W32(c->r[1]+0x00000014u,c->r[0]); // 80266BC0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80266BC4
  W32(c->r[1]+0x00000008u,c->r[30]); // 80266BC8
  c->r[30]=c->r[3]|c->r[3]; // 80266BCC
  c->lr=0x80266BD4u; f_8025EA10(c); // 80266BD0
  c->r[0]=R32(c->r[13]+0xFFFF9938u); // 80266BD4
  cmps(c,0,(int32_t)c->r[0],0); // 80266BD8
  if (!crb(c,2)) { goto L_80266BF0; } // 80266BDC
  c->r[4]=0u+0x80600000u; // 80266BE0
  c->r[4]=c->r[4]+0xFFFFE3E0u; // 80266BE4
  W32(c->r[4]+0x00000078u,c->r[30]); // 80266BE8
  goto L_80266C08; // 80266BEC
L_80266BF0:;
  c->r[0]=R32(c->r[13]+0xFFFF9938u); // 80266BF0
  c->r[4]=0u+0x80600000u; // 80266BF4
  c->r[4]=c->r[4]+0xFFFFE3E0u; // 80266BF8
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 80266BFC
  c->r[4]=c->r[4]+c->r[0]; // 80266C00
  W32(c->r[4]+0x00000014u,c->r[30]); // 80266C04
L_80266C08:;
  c->lr=0x80266C0Cu; f_8025EA38(c); // 80266C08
  cmpu(c,0,c->r[30],0x00000010u); // 80266C0C
  if (!crb(c,2)) { goto L_80266C2C; } // 80266C10
  c->r[3]=0u+0x01230000u; // 80266C14
  c->r[4]=0u+0x80260000u; // 80266C18
  c->r[3]=c->r[3]+0x00004568u; // 80266C1C
  c->r[4]=c->r[4]+0x00006E64u; // 80266C20
  c->lr=0x80266C28u; f_8026B24C(c); // 80266C24
  goto L_80266D24; // 80266C28
L_80266C2C:;
  cmpu(c,0,c->r[30],0x00000020u); // 80266C2C
  if (!crb(c,2)) { goto L_80266C4C; } // 80266C30
  c->r[3]=0u+0x01230000u; // 80266C34
  c->r[4]=0u+0x80260000u; // 80266C38
  c->r[3]=c->r[3]+0x00004569u; // 80266C3C
  c->r[4]=c->r[4]+0x00006E64u; // 80266C40
  c->lr=0x80266C48u; f_8026B24C(c); // 80266C44
  goto L_80266D24; // 80266C48
L_80266C4C:;
  c->r[0]=rotl(c->r[30],0)&0x00000001u; cr0(c,c->r[0]); // 80266C4C
  if (crb(c,2)) { goto L_80266C94; } // 80266C50
  c->r[30]=0u+0x00000000u; // 80266C54
  W32(c->r[13]+0xFFFF9950u,c->r[30]); // 80266C58
  c->lr=0x80266C60u; f_80265E08(c); // 80266C5C
  c->r[3]=0u+0x80600000u; // 80266C60
  c->r[4]=R32(c->r[13]+0xFFFF99B8u); // 80266C64
  c->r[3]=c->r[3]+0xFFFF96A0u; // 80266C68
  W32(c->r[13]+0xFFFF99B8u,c->r[3]); // 80266C6C
  W32(c->r[4]+0x0000000Cu,c->r[30]); // 80266C70
  c->r[12]=R32(c->r[4]+0x00000028u); // 80266C74
  cmps(c,0,(int32_t)c->r[12],0); // 80266C78
  if (crb(c,2)) { goto L_80266C8C; } // 80266C7C
  c->r[3]=0u+0x00000000u; // 80266C80
  c->ctr=c->r[12]; // 80266C84
  if (true) { c->lr=0x80266C8Cu; dispatch(c,c->ctr); } // 80266C88
L_80266C8C:;
  c->lr=0x80266C90u; f_8026922C(c); // 80266C8C
  goto L_80266D24; // 80266C90
L_80266C94:;
  c->lr=0x80266C98u; f_8025EA10(c); // 80266C94
  c->r[0]=R32(c->r[13]+0xFFFF9938u); // 80266C98
  c->r[31]=c->r[3]|c->r[3]; // 80266C9C
  cmpu(c,0,c->r[0],0x00000005u); // 80266CA0
  if (crb(c,0)) { goto L_80266CB0; } // 80266CA4
  c->r[0]=0u+0x00000000u; // 80266CA8
  W32(c->r[13]+0xFFFF9938u,c->r[0]); // 80266CAC
L_80266CB0:;
  c->r[0]=R32(c->r[13]+0xFFFF9938u); // 80266CB0
  c->r[30]=0u+0x80600000u; // 80266CB4
  c->r[3]=R32(c->r[13]+0xFFFF9938u); // 80266CB8
  c->r[30]=c->r[30]+0xFFFFE3E0u; // 80266CBC
  c->r[5]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 80266CC0
  c->r[0]=R32(c->r[13]+0xFFFF9938u); // 80266CC4
  c->r[6]=0u+0x00000027u; // 80266CC8
  c->r[4]=0u+0x00000000u; // 80266CCC
  c->r[3]=(uint32_t)((int32_t)c->r[3]*(int32_t)20); // 80266CD0
  c->r[5]=c->r[30]+c->r[5]; // 80266CD4
  W32(c->r[5]+0x0000001Cu,c->r[6]); // 80266CD8
  c->r[3]=c->r[30]+c->r[3]; // 80266CDC
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 80266CE0
  W32(c->r[3]+0x00000020u,c->r[4]); // 80266CE4
  c->r[3]=c->r[30]+c->r[0]; // 80266CE8
  W32(c->r[3]+0x00000024u,c->r[4]); // 80266CEC
  c->lr=0x80266CF4u; f_80262798(c); // 80266CF0
  c->r[0]=R32(c->r[13]+0xFFFF9938u); // 80266CF4
  c->r[4]=R32(c->r[13]+0xFFFF9938u); // 80266CF8
  c->r[5]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 80266CFC
  c->r[0]=c->r[4]+0x00000001u; // 80266D00
  W32(c->r[13]+0xFFFF9938u,c->r[0]); // 80266D04
  c->r[4]=c->r[30]+c->r[5]; // 80266D08
  W32(c->r[4]+0x0000002Cu,c->r[3]); // 80266D0C
  c->r[3]=c->r[31]|c->r[31]; // 80266D10
  c->lr=0x80266D18u; f_8025EA38(c); // 80266D14
  c->r[3]=0u+0x80260000u; // 80266D18
  c->r[3]=c->r[3]+0x00007058u; // 80266D1C
  c->lr=0x80266D24u; f_8026C2D8(c); // 80266D20
L_80266D24:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 80266D24
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80266D28
  c->r[30]=R32(c->r[1]+0x00000008u); // 80266D2C
  c->lr=c->r[0]; // 80266D30
  c->r[1]=c->r[1]+0x00000010u; // 80266D34
  return; // 80266D38
}

// fn_80266D3C
void f_80266D3C(Ctx* __restrict c) {
  trace_call(0x80266D3Cu);
  f_8026B504(c); return; // 80266D3C
}

// cbForStateError
void f_80266D40(Ctx* __restrict c) {
  trace_call(0x80266D40u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80266D40
  c->r[0]=c->lr; // 80266D44
  W32(c->r[1]+0x00000014u,c->r[0]); // 80266D48
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80266D4C
  c->r[31]=c->r[3]|c->r[3]; // 80266D50
  c->lr=0x80266D58u; f_8026B4F0(c); // 80266D54
  cmps(c,0,(int32_t)c->r[3],0); // 80266D58
  if (crb(c,2)) { goto L_80266D88; } // 80266D5C
  c->r[31]=0u+0x80600000u; // 80266D60
  c->r[3]=c->r[31]+0xFFFF96D0u; // 80266D64
  c->lr=0x80266D6Cu; f_802593E4(c); // 80266D68
  c->r[7]=0u+0x80260000u; // 80266D6C
  c->r[3]=c->r[31]+0xFFFF96D0u; // 80266D70
  c->r[7]=c->r[7]+0x00006D3Cu; // 80266D74
  c->r[6]=0u+0x00000001u; // 80266D78
  c->r[5]=0u+0x00000000u; // 80266D7C
  c->lr=0x80266D84u; f_80259644(c); // 80266D80
  goto L_80266E3C; // 80266D84
L_80266D88:;
  c->r[3]=R32(c->r[13]+0xFFFF99B8u); // 80266D88
  c->r[0]=0u+0xFFFFFFFFu; // 80266D8C
  cmpu(c,0,c->r[31],0x00000010u); // 80266D90
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 80266D94
  if (!crb(c,2)) { goto L_80266DB4; } // 80266D98
  c->r[3]=0u+0x01230000u; // 80266D9C
  c->r[4]=0u+0x80260000u; // 80266DA0
  c->r[3]=c->r[3]+0x00004568u; // 80266DA4
  c->r[4]=c->r[4]+0x00006E64u; // 80266DA8
  c->lr=0x80266DB0u; f_8026B24C(c); // 80266DAC
  goto L_80266E3C; // 80266DB0
L_80266DB4:;
  cmpu(c,0,c->r[31],0x00000020u); // 80266DB4
  if (!crb(c,2)) { goto L_80266DD4; } // 80266DB8
  c->r[3]=0u+0x01230000u; // 80266DBC
  c->r[4]=0u+0x80260000u; // 80266DC0
  c->r[3]=c->r[3]+0x00004569u; // 80266DC4
  c->r[4]=c->r[4]+0x00006E64u; // 80266DC8
  c->lr=0x80266DD0u; f_8026B24C(c); // 80266DCC
  goto L_80266E3C; // 80266DD0
L_80266DD4:;
  c->r[3]=0u+0x80600000u; // 80266DD4
  c->r[31]=R32(c->r[13]+0xFFFF99B8u); // 80266DD8
  c->r[3]=c->r[3]+0xFFFF96A0u; // 80266DDC
  c->r[0]=0u+0x00000001u; // 80266DE0
  W32(c->r[13]+0xFFFF9944u,c->r[0]); // 80266DE4
  W32(c->r[13]+0xFFFF99B8u,c->r[3]); // 80266DE8
  c->r[12]=R32(c->r[31]+0x00000028u); // 80266DEC
  cmps(c,0,(int32_t)c->r[12],0); // 80266DF0
  if (crb(c,2)) { goto L_80266E08; } // 80266DF4
  c->r[4]=c->r[31]|c->r[31]; // 80266DF8
  c->r[3]=0u+0xFFFFFFFFu; // 80266DFC
  c->ctr=c->r[12]; // 80266E00
  if (true) { c->lr=0x80266E08u; dispatch(c,c->ctr); } // 80266E04
L_80266E08:;
  c->r[0]=R32(c->r[13]+0xFFFF9948u); // 80266E08
  cmps(c,0,(int32_t)c->r[0],0); // 80266E0C
  if (crb(c,2)) { goto L_80266E38; } // 80266E10
  c->r[12]=R32(c->r[13]+0xFFFF99A8u); // 80266E14
  c->r[0]=0u+0x00000000u; // 80266E18
  W32(c->r[13]+0xFFFF9948u,c->r[0]); // 80266E1C
  cmps(c,0,(int32_t)c->r[12],0); // 80266E20
  if (crb(c,2)) { goto L_80266E38; } // 80266E24
  c->r[4]=c->r[31]|c->r[31]; // 80266E28
  c->r[3]=0u+0x00000000u; // 80266E2C
  c->ctr=c->r[12]; // 80266E30
  if (true) { c->lr=0x80266E38u; dispatch(c,c->ctr); } // 80266E34
L_80266E38:;
  c->lr=0x80266E3Cu; f_8026922C(c); // 80266E38
L_80266E3C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 80266E3C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80266E40
  c->lr=c->r[0]; // 80266E44
  c->r[1]=c->r[1]+0x00000010u; // 80266E48
  return; // 80266E4C
}

// cbForStoreErrorCode1
void f_80266E50(Ctx* __restrict c) {
  trace_call(0x80266E50u);
  c->r[5]=0u+0x80260000u; // 80266E50
  c->r[3]=0u+0x00000000u; // 80266E54
  c->r[5]=c->r[5]+0x00006D40u; // 80266E58
  c->r[4]=0u+0x00000000u; // 80266E5C
  f_8026BFDC(c); return; // 80266E60
}

// cbForStoreErrorCode2
void f_80266E64(Ctx* __restrict c) {
  trace_call(0x80266E64u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80266E64
  c->r[0]=c->lr; // 80266E68
  c->r[3]=0u+0x00000000u; // 80266E6C
  W32(c->r[1]+0x00000014u,c->r[0]); // 80266E70
  c->lr=0x80266E78u; f_8026C440(c); // 80266E74
  c->r[3]=0u+0x80260000u; // 80266E78
  c->r[3]=c->r[3]+0x00006D40u; // 80266E7C
  c->lr=0x80266E84u; f_8026C44C(c); // 80266E80
  c->r[0]=0u+0x00000000u; // 80266E84
  W32(c->r[13]+0xFFFF999Cu,c->r[0]); // 80266E88
  W32(c->r[13]+0xFFFF994Cu,c->r[0]); // 80266E8C
  c->r[0]=R32(c->r[1]+0x00000014u); // 80266E90
  c->lr=c->r[0]; // 80266E94
  c->r[1]=c->r[1]+0x00000010u; // 80266E98
  return; // 80266E9C
}

// CategorizeError
void f_80266EA0(Ctx* __restrict c) {
  trace_call(0x80266EA0u);
  c->r[0]=c->r[3]+0xFFFE0000u; // 80266EA0
  cmpu(c,0,c->r[0],0x00000400u); // 80266EA4
  if (!crb(c,2)) { goto L_80266EB8; } // 80266EA8
  W32(c->r[13]+0xFFFF99A0u,c->r[3]); // 80266EAC
  c->r[3]=0u+0x00000001u; // 80266EB0
  return; // 80266EB4
L_80266EB8:;
  c->r[4]=rotl(c->r[3],0)&0x00FFFFFFu; // 80266EB8
  c->r[0]=c->r[4]+0xFFFA0000u; // 80266EBC
  cmpu(c,0,c->r[0],0x00002800u); // 80266EC0
  if (crb(c,2)) { goto L_80266EEC; } // 80266EC4
  c->r[0]=c->r[4]+0xFFFE0000u; // 80266EC8
  cmpu(c,0,c->r[0],0x00003A00u); // 80266ECC
  if (crb(c,2)) { goto L_80266EEC; } // 80266ED0
  c->r[3]=c->r[4]+0xFFFB0000u; // 80266ED4
  cmpu(c,0,c->r[3],0x00003000u); // 80266ED8
  if (crb(c,2)) { goto L_80266EEC; } // 80266EDC
  c->r[0]=c->r[4]+0xFFF50000u; // 80266EE0
  cmpu(c,0,c->r[0],0x00005A01u); // 80266EE4
  if (!crb(c,2)) { goto L_80266EF4; } // 80266EE8
L_80266EEC:;
  c->r[3]=0u+0x00000000u; // 80266EEC
  return; // 80266EF0
L_80266EF4:;
  cmpu(c,0,c->r[3],0x00002000u); // 80266EF4
  if (!crb(c,2)) { goto L_80266F28; } // 80266EF8
  c->r[3]=R32(c->r[13]+0xFFFF99B8u); // 80266EFC
  c->r[0]=R32(c->r[3]+0x00000008u); // 80266F00
  cmpu(c,0,c->r[0],0x00000025u); // 80266F04
  if (crb(c,2)) { goto L_80266F20; } // 80266F08
  c->r[3]=0u+0x80270000u; // 80266F0C
  c->r[0]=R32(c->r[13]+0xFFFF99BCu); // 80266F10
  c->r[3]=c->r[3]+0xFFFF8C78u; // 80266F14
  cmpu(c,0,c->r[0],c->r[3]); // 80266F18
  if (!crb(c,2)) { goto L_80266F28; } // 80266F1C
L_80266F20:;
  c->r[3]=0u+0x00000000u; // 80266F20
  return; // 80266F24
L_80266F28:;
  c->r[3]=R32(c->r[13]+0xFFFF9950u); // 80266F28
  c->r[0]=c->r[3]+0x00000001u; // 80266F2C
  W32(c->r[13]+0xFFFF9950u,c->r[0]); // 80266F30
  c->r[0]=R32(c->r[13]+0xFFFF9950u); // 80266F34
  cmps(c,0,(int32_t)c->r[0],2); // 80266F38
  if (!crb(c,2)) { goto L_80266F64; } // 80266F3C
  c->r[0]=R32(c->r[13]+0xFFFF99A0u); // 80266F40
  cmpu(c,0,c->r[4],c->r[0]); // 80266F44
  if (!crb(c,2)) { goto L_80266F58; } // 80266F48
  W32(c->r[13]+0xFFFF99A0u,c->r[4]); // 80266F4C
  c->r[3]=0u+0x00000001u; // 80266F50
  return; // 80266F54
L_80266F58:;
  W32(c->r[13]+0xFFFF99A0u,c->r[4]); // 80266F58
  c->r[3]=0u+0x00000002u; // 80266F5C
  return; // 80266F60
L_80266F64:;
  c->r[0]=c->r[4]+0xFFFD0000u; // 80266F64
  W32(c->r[13]+0xFFFF99A0u,c->r[4]); // 80266F68
  cmpu(c,0,c->r[0],0x00001100u); // 80266F6C
  if (crb(c,2)) { goto L_80266F84; } // 80266F70
  c->r[3]=R32(c->r[13]+0xFFFF99B8u); // 80266F74
  c->r[0]=R32(c->r[3]+0x00000008u); // 80266F78
  cmpu(c,0,c->r[0],0x00000005u); // 80266F7C
  if (!crb(c,2)) { goto L_80266F8C; } // 80266F80
L_80266F84:;
  c->r[3]=0u+0x00000002u; // 80266F84
  return; // 80266F88
L_80266F8C:;
  c->r[3]=0u+0x00000003u; // 80266F8C
  return; // 80266F90
}

// cbForStoreErrorCode3
void f_80266F94(Ctx* __restrict c) {
  trace_call(0x80266F94u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80266F94
  c->r[0]=c->lr; // 80266F98
  W32(c->r[1]+0x00000014u,c->r[0]); // 80266F9C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80266FA0
  W32(c->r[1]+0x00000008u,c->r[30]); // 80266FA4
  c->lr=0x80266FACu; f_8025EA10(c); // 80266FA8
  c->r[0]=R32(c->r[13]+0xFFFF9938u); // 80266FAC
  c->r[31]=c->r[3]|c->r[3]; // 80266FB0
  cmpu(c,0,c->r[0],0x00000005u); // 80266FB4
  if (crb(c,0)) { goto L_80266FC4; } // 80266FB8
  c->r[0]=0u+0x00000000u; // 80266FBC
  W32(c->r[13]+0xFFFF9938u,c->r[0]); // 80266FC0
L_80266FC4:;
  c->r[0]=R32(c->r[13]+0xFFFF9938u); // 80266FC4
  c->r[30]=0u+0x80600000u; // 80266FC8
  c->r[3]=R32(c->r[13]+0xFFFF9938u); // 80266FCC
  c->r[30]=c->r[30]+0xFFFFE3E0u; // 80266FD0
  c->r[5]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 80266FD4
  c->r[0]=R32(c->r[13]+0xFFFF9938u); // 80266FD8
  c->r[6]=0u+0x00000010u; // 80266FDC
  c->r[4]=0u+0x00000000u; // 80266FE0
  c->r[3]=(uint32_t)((int32_t)c->r[3]*(int32_t)20); // 80266FE4
  c->r[5]=c->r[30]+c->r[5]; // 80266FE8
  W32(c->r[5]+0x0000001Cu,c->r[6]); // 80266FEC
  c->r[3]=c->r[30]+c->r[3]; // 80266FF0
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 80266FF4
  W32(c->r[3]+0x00000020u,c->r[4]); // 80266FF8
  c->r[3]=c->r[30]+c->r[0]; // 80266FFC
  W32(c->r[3]+0x00000024u,c->r[4]); // 80267000
  c->lr=0x80267008u; f_80262798(c); // 80267004
  c->r[0]=R32(c->r[13]+0xFFFF9938u); // 80267008
  c->r[4]=R32(c->r[13]+0xFFFF9938u); // 8026700C
  c->r[5]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 80267010
  c->r[0]=c->r[4]+0x00000001u; // 80267014
  W32(c->r[13]+0xFFFF9938u,c->r[0]); // 80267018
  c->r[4]=c->r[30]+c->r[5]; // 8026701C
  W32(c->r[4]+0x0000002Cu,c->r[3]); // 80267020
  c->r[3]=c->r[31]|c->r[31]; // 80267024
  c->lr=0x8026702Cu; f_8025EA38(c); // 80267028
  c->r[5]=0u+0x80260000u; // 8026702C
  c->r[3]=0u+0x00000000u; // 80267030
  c->r[5]=c->r[5]+0x00007810u; // 80267034
  c->r[4]=0u+0x00000000u; // 80267038
  c->lr=0x80267040u; f_8026BFDC(c); // 8026703C
  c->r[0]=R32(c->r[1]+0x00000014u); // 80267040
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80267044
  c->r[30]=R32(c->r[1]+0x00000008u); // 80267048
  c->lr=c->r[0]; // 8026704C
  c->r[1]=c->r[1]+0x00000010u; // 80267050
  return; // 80267054
}

// cbForStateGettingError
void f_80267058(Ctx* __restrict c) {
  trace_call(0x80267058u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80267058
  c->r[0]=c->lr; // 8026705C
  W32(c->r[1]+0x00000024u,c->r[0]); // 80267060
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 80267064
  W32(c->r[1]+0x00000018u,c->r[30]); // 80267068
  W32(c->r[1]+0x00000014u,c->r[29]); // 8026706C
  W32(c->r[1]+0x00000010u,c->r[28]); // 80267070
  c->r[28]=c->r[3]|c->r[3]; // 80267074
  c->lr=0x8026707Cu; f_8025EA10(c); // 80267078
  c->r[0]=R32(c->r[13]+0xFFFF9938u); // 8026707C
  cmps(c,0,(int32_t)c->r[0],0); // 80267080
  if (!crb(c,2)) { goto L_80267098; } // 80267084
  c->r[4]=0u+0x80600000u; // 80267088
  c->r[4]=c->r[4]+0xFFFFE3E0u; // 8026708C
  W32(c->r[4]+0x00000078u,c->r[28]); // 80267090
  goto L_802670B0; // 80267094
L_80267098:;
  c->r[0]=R32(c->r[13]+0xFFFF9938u); // 80267098
  c->r[4]=0u+0x80600000u; // 8026709C
  c->r[4]=c->r[4]+0xFFFFE3E0u; // 802670A0
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 802670A4
  c->r[4]=c->r[4]+c->r[0]; // 802670A8
  W32(c->r[4]+0x00000014u,c->r[28]); // 802670AC
L_802670B0:;
  c->lr=0x802670B4u; f_8025EA38(c); // 802670B0
  cmpu(c,0,c->r[28],0x00000010u); // 802670B4
  if (!crb(c,2)) { goto L_802670D4; } // 802670B8
  c->r[3]=0u+0x01230000u; // 802670BC
  c->r[4]=0u+0x80260000u; // 802670C0
  c->r[3]=c->r[3]+0x00004568u; // 802670C4
  c->r[4]=c->r[4]+0x00006E64u; // 802670C8
  c->lr=0x802670D0u; f_8026B24C(c); // 802670CC
  goto L_8026753C; // 802670D0
L_802670D4:;
  cmpu(c,0,c->r[28],0x00000020u); // 802670D4
  if (!crb(c,2)) { goto L_802670F4; } // 802670D8
  c->r[3]=0u+0x01230000u; // 802670DC
  c->r[4]=0u+0x80260000u; // 802670E0
  c->r[3]=c->r[3]+0x00004569u; // 802670E4
  c->r[4]=c->r[4]+0x00006E64u; // 802670E8
  c->lr=0x802670F0u; f_8026B24C(c); // 802670EC
  goto L_8026753C; // 802670F0
L_802670F4:;
  c->r[0]=rotl(c->r[28],0)&0x00000002u; cr0(c,c->r[0]); // 802670F4
  if (crb(c,2)) { goto L_80267114; } // 802670F8
  c->r[3]=0u+0x01230000u; // 802670FC
  c->r[4]=0u+0x80260000u; // 80267100
  c->r[3]=c->r[3]+0x00004567u; // 80267104
  c->r[4]=c->r[4]+0x00006E50u; // 80267108
  c->lr=0x80267110u; f_8026B24C(c); // 8026710C
  goto L_8026753C; // 80267110
L_80267114:;
  c->lr=0x80267118u; f_8026CD80(c); // 80267114
  c->r[29]=c->r[3]|c->r[3]; // 80267118
  c->r[28]=rotl(c->r[3],0)&0xFF000000u; // 8026711C
  c->lr=0x80267124u; f_80266EA0(c); // 80267120
  cmpu(c,0,c->r[3],0x00000001u); // 80267124
  c->r[30]=c->r[3]|c->r[3]; // 80267128
  if (!crb(c,2)) { goto L_80267144; } // 8026712C
  c->r[4]=0u+0x80260000u; // 80267130
  c->r[3]=c->r[29]|c->r[29]; // 80267134
  c->r[4]=c->r[4]+0x00006E50u; // 80267138
  c->lr=0x80267140u; f_8026B24C(c); // 8026713C
  goto L_8026753C; // 80267140
L_80267144:;
  c->r[0]=c->r[3]+0xFFFFFFFEu; // 80267144
  cmpu(c,0,c->r[0],0x00000001u); // 80267148
  if (crb(c,1)) { goto L_80267158; } // 8026714C
  c->r[5]=0u+0x00000000u; // 80267150
  goto L_802671BC; // 80267154
L_80267158:;
  c->r[0]=c->r[28]+0xFF000000u; // 80267158
  cmpu(c,0,c->r[0],0x00000000u); // 8026715C
  if (!crb(c,2)) { goto L_8026716C; } // 80267160
  c->r[5]=0u+0x00000004u; // 80267164
  goto L_802671BC; // 80267168
L_8026716C:;
  c->r[0]=c->r[28]+0xFE000000u; // 8026716C
  cmpu(c,0,c->r[0],0x00000000u); // 80267170
  if (!crb(c,2)) { goto L_80267180; } // 80267174
  c->r[5]=0u+0x00000006u; // 80267178
  goto L_802671BC; // 8026717C
L_80267180:;
  c->r[0]=c->r[28]+0xFD000000u; // 80267180
  cmpu(c,0,c->r[0],0x00000000u); // 80267184
  if (!crb(c,2)) { goto L_80267194; } // 80267188
  c->r[5]=0u+0x00000003u; // 8026718C
  goto L_802671BC; // 80267190
L_80267194:;
  cmps(c,0,(int32_t)c->r[28],0); // 80267194
  if (!crb(c,2)) { goto L_802671B8; } // 80267198
  c->r[0]=c->r[29]+0xFFFB0000u; // 8026719C
  cmpu(c,0,c->r[0],0x00003000u); // 802671A0
  if (!crb(c,2)) { goto L_802671B0; } // 802671A4
  c->r[5]=0u+0x00000001u; // 802671A8
  goto L_802671BC; // 802671AC
L_802671B0:;
  c->r[5]=0u+0x00000005u; // 802671B0
  goto L_802671BC; // 802671B4
L_802671B8:;
  c->r[5]=0u+0x00000005u; // 802671B8
L_802671BC:;
  c->r[0]=R32(c->r[13]+0xFFFF9948u); // 802671BC
  cmps(c,0,(int32_t)c->r[0],0); // 802671C0
  if (crb(c,2)) { goto L_80267230; } // 802671C4
  c->r[3]=0u+0x80600000u; // 802671C8
  c->r[31]=R32(c->r[13]+0xFFFF99B8u); // 802671CC
  c->r[3]=c->r[3]+0xFFFF96A0u; // 802671D0
  c->r[4]=0u+0x00000000u; // 802671D4
  W32(c->r[13]+0xFFFF994Cu,c->r[5]); // 802671D8
  c->r[0]=0u+0x0000000Au; // 802671DC
  W32(c->r[13]+0xFFFF9948u,c->r[4]); // 802671E0
  W32(c->r[13]+0xFFFF99B8u,c->r[3]); // 802671E4
  W32(c->r[31]+0x0000000Cu,c->r[0]); // 802671E8
  c->r[12]=R32(c->r[31]+0x00000028u); // 802671EC
  cmps(c,0,(int32_t)c->r[12],0); // 802671F0
  if (crb(c,2)) { goto L_80267208; } // 802671F4
  c->r[4]=c->r[31]|c->r[31]; // 802671F8
  c->r[3]=0u+0xFFFFFFFDu; // 802671FC
  c->ctr=c->r[12]; // 80267200
  if (true) { c->lr=0x80267208u; dispatch(c,c->ctr); } // 80267204
L_80267208:;
  c->r[12]=R32(c->r[13]+0xFFFF99A8u); // 80267208
  cmps(c,0,(int32_t)c->r[12],0); // 8026720C
  if (crb(c,2)) { goto L_80267224; } // 80267210
  c->r[4]=c->r[31]|c->r[31]; // 80267214
  c->r[3]=0u+0x00000000u; // 80267218
  c->ctr=c->r[12]; // 8026721C
  if (true) { c->lr=0x80267224u; dispatch(c,c->ctr); } // 80267220
L_80267224:;
  c->lr=0x80267228u; f_8026922C(c); // 80267224
  c->r[0]=0u+0x00000001u; // 80267228
  goto L_80267234; // 8026722C
L_80267230:;
  c->r[0]=0u+0x00000000u; // 80267230
L_80267234:;
  cmps(c,0,(int32_t)c->r[0],0); // 80267234
  if (!crb(c,2)) { goto L_8026753C; } // 80267238
  cmpu(c,0,c->r[30],0x00000002u); // 8026723C
  if (!crb(c,2)) { goto L_80267258; } // 80267240
  c->r[4]=0u+0x80260000u; // 80267244
  c->r[3]=c->r[29]|c->r[29]; // 80267248
  c->r[4]=c->r[4]+0x00006F94u; // 8026724C
  c->lr=0x80267254u; f_8026B24C(c); // 80267250
  goto L_8026753C; // 80267254
L_80267258:;
  cmpu(c,0,c->r[30],0x00000003u); // 80267258
  if (!crb(c,2)) { goto L_80267328; } // 8026725C
  c->r[3]=rotl(c->r[29],0)&0x00FFFFFFu; // 80267260
  c->r[0]=c->r[3]+0xFFFD0000u; // 80267264
  cmpu(c,0,c->r[0],0x00001100u); // 80267268
  if (!crb(c,2)) { goto L_80267314; } // 8026726C
  c->r[3]=R32(c->r[13]+0xFFFF99B8u); // 80267270
  c->r[29]=R32(c->r[3]+0x00000010u); // 80267274
  c->lr=0x8026727Cu; f_8025EA10(c); // 80267278
  c->r[0]=R32(c->r[13]+0xFFFF9938u); // 8026727C
  c->r[31]=c->r[3]|c->r[3]; // 80267280
  cmpu(c,0,c->r[0],0x00000005u); // 80267284
  if (crb(c,0)) { goto L_80267294; } // 80267288
  c->r[0]=0u+0x00000000u; // 8026728C
  W32(c->r[13]+0xFFFF9938u,c->r[0]); // 80267290
L_80267294:;
  c->r[0]=R32(c->r[13]+0xFFFF9938u); // 80267294
  c->r[30]=0u+0x80600000u; // 80267298
  c->r[3]=R32(c->r[13]+0xFFFF9938u); // 8026729C
  c->r[30]=c->r[30]+0xFFFFE3E0u; // 802672A0
  c->r[5]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 802672A4
  c->r[0]=R32(c->r[13]+0xFFFF9938u); // 802672A8
  c->r[6]=0u+0x00000002u; // 802672AC
  c->r[4]=0u+0x00000000u; // 802672B0
  c->r[3]=(uint32_t)((int32_t)c->r[3]*(int32_t)20); // 802672B4
  c->r[5]=c->r[30]+c->r[5]; // 802672B8
  W32(c->r[5]+0x0000001Cu,c->r[6]); // 802672BC
  c->r[3]=c->r[30]+c->r[3]; // 802672C0
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 802672C4
  W32(c->r[3]+0x00000020u,c->r[29]); // 802672C8
  c->r[3]=c->r[30]+c->r[0]; // 802672CC
  W32(c->r[3]+0x00000024u,c->r[4]); // 802672D0
  c->lr=0x802672D8u; f_80262798(c); // 802672D4
  c->r[0]=R32(c->r[13]+0xFFFF9938u); // 802672D8
  c->r[4]=R32(c->r[13]+0xFFFF9938u); // 802672DC
  c->r[5]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 802672E0
  c->r[0]=c->r[4]+0x00000001u; // 802672E4
  W32(c->r[13]+0xFFFF9938u,c->r[0]); // 802672E8
  c->r[4]=c->r[30]+c->r[5]; // 802672EC
  W32(c->r[4]+0x0000002Cu,c->r[3]); // 802672F0
  c->r[3]=c->r[31]|c->r[31]; // 802672F4
  c->lr=0x802672FCu; f_8025EA38(c); // 802672F8
  c->r[3]=R32(c->r[13]+0xFFFF99B8u); // 802672FC
  c->r[4]=0u+0x80260000u; // 80267300
  c->r[4]=c->r[4]+0x0000755Cu; // 80267304
  c->r[3]=R32(c->r[3]+0x00000010u); // 80267308
  c->lr=0x80267310u; f_8026CA8C(c); // 8026730C
  goto L_8026753C; // 80267310
L_80267314:;
  c->r[12]=R32(c->r[13]+0xFFFF99BCu); // 80267314
  c->r[3]=R32(c->r[13]+0xFFFF99B8u); // 80267318
  c->ctr=c->r[12]; // 8026731C
  if (true) { c->lr=0x80267324u; dispatch(c,c->ctr); } // 80267320
  goto L_8026753C; // 80267324
L_80267328:;
  c->r[0]=c->r[28]+0xFF000000u; // 80267328
  cmpu(c,0,c->r[0],0x00000000u); // 8026732C
  if (!crb(c,2)) { goto L_802673B4; } // 80267330
  c->r[4]=R32(c->r[13]+0xFFFF99B8u); // 80267334
  c->r[0]=0u+0x00000005u; // 80267338
  c->r[3]=0u+0x00000001u; // 8026733C
  W32(c->r[4]+0x0000000Cu,c->r[0]); // 80267340
  c->r[0]=R32(c->r[13]+0xFFFF995Cu); // 80267344
  W32(c->r[13]+0xFFFF9998u,c->r[3]); // 80267348
  cmps(c,0,(int32_t)c->r[0],0); // 8026734C
  if (!crb(c,2)) { goto L_8026753C; } // 80267350
  c->r[0]=R32(c->r[13]+0xFFFF9960u); // 80267354
  cmps(c,0,(int32_t)c->r[0],0); // 80267358
  if (!crb(c,2)) { goto L_8026753C; } // 8026735C
  c->r[30]=0u+0x80600000u; // 80267360
  W32(c->r[13]+0xFFFF995Cu,c->r[3]); // 80267364
  c->r[3]=c->r[30]+0xFFFF9700u; // 80267368
  c->lr=0x80267370u; f_802593E4(c); // 8026736C
  c->lr=0x80267374u; f_80262798(c); // 80267370
  c->r[5]=0u+0x80000000u; // 80267374
  c->r[4]=0u+0x10620000u; // 80267378
  c->r[0]=R32(c->r[5]+0x000000F8u); // 8026737C
  c->r[9]=0u+0x80270000u; // 80267380
  c->r[6]=c->r[3]|c->r[3]; // 80267384
  c->r[4]=c->r[4]+0x00004DD3u; // 80267388
  c->r[0]=rotl(c->r[0],30)&0x3FFFFFFFu; // 8026738C
  c->r[3]=c->r[30]+0xFFFF9700u; // 80267390
  c->r[0]=(uint32_t)(((uint64_t)c->r[4]*(uint64_t)c->r[0])>>32); // 80267394
  c->r[9]=c->r[9]+0xFFFF9208u; // 80267398
  c->r[5]=0u+0x00000000u; // 8026739C
  c->r[7]=0u+0x00000000u; // 802673A0
  c->r[0]=rotl(c->r[0],26)&0x03FFFFFFu; // 802673A4
  c->r[8]=(uint32_t)((int32_t)c->r[0]*(int32_t)100); // 802673A8
  c->lr=0x802673B0u; f_802596B4(c); // 802673AC
  goto L_8026753C; // 802673B0
L_802673B4:;
  c->r[0]=c->r[28]+0xFE000000u; // 802673B4
  cmpu(c,0,c->r[0],0x00000000u); // 802673B8
  if (!crb(c,2)) { goto L_802673D4; } // 802673BC
  c->r[3]=R32(c->r[13]+0xFFFF99B8u); // 802673C0
  c->r[0]=0u+0x00000003u; // 802673C4
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 802673C8
  c->lr=0x802673D0u; f_80268928(c); // 802673CC
  goto L_8026753C; // 802673D0
L_802673D4:;
  c->r[0]=c->r[28]+0xFD000000u; // 802673D4
  cmpu(c,0,c->r[0],0x00000000u); // 802673D8
  if (!crb(c,2)) { goto L_80267460; } // 802673DC
  c->r[4]=R32(c->r[13]+0xFFFF99B8u); // 802673E0
  c->r[0]=0u+0x00000004u; // 802673E4
  c->r[3]=0u+0x00000001u; // 802673E8
  W32(c->r[4]+0x0000000Cu,c->r[0]); // 802673EC
  c->r[0]=R32(c->r[13]+0xFFFF995Cu); // 802673F0
  W32(c->r[13]+0xFFFF9998u,c->r[3]); // 802673F4
  cmps(c,0,(int32_t)c->r[0],0); // 802673F8
  if (!crb(c,2)) { goto L_8026753C; } // 802673FC
  c->r[0]=R32(c->r[13]+0xFFFF9960u); // 80267400
  cmps(c,0,(int32_t)c->r[0],0); // 80267404
  if (!crb(c,2)) { goto L_8026753C; } // 80267408
  c->r[30]=0u+0x80600000u; // 8026740C
  W32(c->r[13]+0xFFFF995Cu,c->r[3]); // 80267410
  c->r[3]=c->r[30]+0xFFFF9700u; // 80267414
  c->lr=0x8026741Cu; f_802593E4(c); // 80267418
  c->lr=0x80267420u; f_80262798(c); // 8026741C
  c->r[5]=0u+0x80000000u; // 80267420
  c->r[4]=0u+0x10620000u; // 80267424
  c->r[0]=R32(c->r[5]+0x000000F8u); // 80267428
  c->r[9]=0u+0x80270000u; // 8026742C
  c->r[6]=c->r[3]|c->r[3]; // 80267430
  c->r[4]=c->r[4]+0x00004DD3u; // 80267434
  c->r[0]=rotl(c->r[0],30)&0x3FFFFFFFu; // 80267438
  c->r[3]=c->r[30]+0xFFFF9700u; // 8026743C
  c->r[0]=(uint32_t)(((uint64_t)c->r[4]*(uint64_t)c->r[0])>>32); // 80267440
  c->r[9]=c->r[9]+0xFFFF9208u; // 80267444
  c->r[5]=0u+0x00000000u; // 80267448
  c->r[7]=0u+0x00000000u; // 8026744C
  c->r[0]=rotl(c->r[0],26)&0x03FFFFFFu; // 80267450
  c->r[8]=(uint32_t)((int32_t)c->r[0]*(int32_t)100); // 80267454
  c->lr=0x8026745Cu; f_802596B4(c); // 80267458
  goto L_8026753C; // 8026745C
L_80267460:;
  cmps(c,0,(int32_t)c->r[28],0); // 80267460
  if (!crb(c,2)) { goto L_80267528; } // 80267464
  c->r[0]=c->r[29]+0xFFFB0000u; // 80267468
  cmpu(c,0,c->r[0],0x00003000u); // 8026746C
  if (!crb(c,2)) { goto L_80267510; } // 80267470
  c->lr=0x80267478u; f_8025EA10(c); // 80267474
  c->r[0]=R32(c->r[13]+0xFFFF9938u); // 80267478
  c->r[31]=c->r[3]|c->r[3]; // 8026747C
  cmpu(c,0,c->r[0],0x00000005u); // 80267480
  if (crb(c,0)) { goto L_80267490; } // 80267484
  c->r[0]=0u+0x00000000u; // 80267488
  W32(c->r[13]+0xFFFF9938u,c->r[0]); // 8026748C
L_80267490:;
  c->r[0]=R32(c->r[13]+0xFFFF9938u); // 80267490
  c->r[30]=0u+0x80600000u; // 80267494
  c->r[3]=R32(c->r[13]+0xFFFF9938u); // 80267498
  c->r[30]=c->r[30]+0xFFFFE3E0u; // 8026749C
  c->r[5]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 802674A0
  c->r[0]=R32(c->r[13]+0xFFFF9938u); // 802674A4
  c->r[6]=0u+0x00000010u; // 802674A8
  c->r[4]=0u+0x00000000u; // 802674AC
  c->r[3]=(uint32_t)((int32_t)c->r[3]*(int32_t)20); // 802674B0
  c->r[5]=c->r[30]+c->r[5]; // 802674B4
  W32(c->r[5]+0x0000001Cu,c->r[6]); // 802674B8
  c->r[3]=c->r[30]+c->r[3]; // 802674BC
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 802674C0
  W32(c->r[3]+0x00000020u,c->r[4]); // 802674C4
  c->r[3]=c->r[30]+c->r[0]; // 802674C8
  W32(c->r[3]+0x00000024u,c->r[4]); // 802674CC
  c->lr=0x802674D4u; f_80262798(c); // 802674D0
  c->r[0]=R32(c->r[13]+0xFFFF9938u); // 802674D4
  c->r[4]=R32(c->r[13]+0xFFFF9938u); // 802674D8
  c->r[5]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 802674DC
  c->r[0]=c->r[4]+0x00000001u; // 802674E0
  W32(c->r[13]+0xFFFF9938u,c->r[0]); // 802674E4
  c->r[4]=c->r[30]+c->r[5]; // 802674E8
  W32(c->r[4]+0x0000002Cu,c->r[3]); // 802674EC
  c->r[3]=c->r[31]|c->r[31]; // 802674F0
  c->lr=0x802674F8u; f_8025EA38(c); // 802674F4
  c->r[5]=0u+0x80270000u; // 802674F8
  c->r[3]=0u+0x00000000u; // 802674FC
  c->r[5]=c->r[5]+0xFFFF85CCu; // 80267500
  c->r[4]=0u+0x00000000u; // 80267504
  c->lr=0x8026750Cu; f_8026BFDC(c); // 80267508
  goto L_8026753C; // 8026750C
L_80267510:;
  c->r[3]=0u+0x01230000u; // 80267510
  c->r[4]=0u+0x80260000u; // 80267514
  c->r[3]=c->r[3]+0x00004567u; // 80267518
  c->r[4]=c->r[4]+0x00006E50u; // 8026751C
  c->lr=0x80267524u; f_8026B24C(c); // 80267520
  goto L_8026753C; // 80267524
L_80267528:;
  c->r[3]=0u+0x01230000u; // 80267528
  c->r[4]=0u+0x80260000u; // 8026752C
  c->r[3]=c->r[3]+0x00004567u; // 80267530
  c->r[4]=c->r[4]+0x00006E50u; // 80267534
  c->lr=0x8026753Cu; f_8026B24C(c); // 80267538
L_8026753C:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 8026753C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 80267540
  c->r[30]=R32(c->r[1]+0x00000018u); // 80267544
  c->r[29]=R32(c->r[1]+0x00000014u); // 80267548
  c->r[28]=R32(c->r[1]+0x00000010u); // 8026754C
  c->lr=c->r[0]; // 80267550
  c->r[1]=c->r[1]+0x00000020u; // 80267554
  return; // 80267558
}

// cbForUnrecoveredError
void f_8026755C(Ctx* __restrict c) {
  trace_call(0x8026755Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8026755C
  c->r[0]=c->lr; // 80267560
  W32(c->r[1]+0x00000014u,c->r[0]); // 80267564
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80267568
  W32(c->r[1]+0x00000008u,c->r[30]); // 8026756C
  c->r[30]=c->r[3]|c->r[3]; // 80267570
  c->lr=0x80267578u; f_8025EA10(c); // 80267574
  c->r[0]=R32(c->r[13]+0xFFFF9938u); // 80267578
  cmps(c,0,(int32_t)c->r[0],0); // 8026757C
  if (!crb(c,2)) { goto L_80267594; } // 80267580
  c->r[4]=0u+0x80600000u; // 80267584
  c->r[4]=c->r[4]+0xFFFFE3E0u; // 80267588
  W32(c->r[4]+0x00000078u,c->r[30]); // 8026758C
  goto L_802675AC; // 80267590
L_80267594:;
  c->r[0]=R32(c->r[13]+0xFFFF9938u); // 80267594
  c->r[4]=0u+0x80600000u; // 80267598
  c->r[4]=c->r[4]+0xFFFFE3E0u; // 8026759C
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 802675A0
  c->r[4]=c->r[4]+c->r[0]; // 802675A4
  W32(c->r[4]+0x00000014u,c->r[30]); // 802675A8
L_802675AC:;
  c->lr=0x802675B0u; f_8025EA38(c); // 802675AC
  cmpu(c,0,c->r[30],0x00000010u); // 802675B0
  if (!crb(c,2)) { goto L_802675D0; } // 802675B4
  c->r[3]=0u+0x01230000u; // 802675B8
  c->r[4]=0u+0x80260000u; // 802675BC
  c->r[3]=c->r[3]+0x00004568u; // 802675C0
  c->r[4]=c->r[4]+0x00006E64u; // 802675C4
  c->lr=0x802675CCu; f_8026B24C(c); // 802675C8
  goto L_80267724; // 802675CC
L_802675D0:;
  cmpu(c,0,c->r[30],0x00000020u); // 802675D0
  if (!crb(c,2)) { goto L_802675F0; } // 802675D4
  c->r[3]=0u+0x01230000u; // 802675D8
  c->r[4]=0u+0x80260000u; // 802675DC
  c->r[3]=c->r[3]+0x00004569u; // 802675E0
  c->r[4]=c->r[4]+0x00006E64u; // 802675E4
  c->lr=0x802675ECu; f_8026B24C(c); // 802675E8
  goto L_80267724; // 802675EC
L_802675F0:;
  c->r[0]=rotl(c->r[30],0)&0x00000001u; cr0(c,c->r[0]); // 802675F0
  if (crb(c,2)) { goto L_80267694; } // 802675F4
  c->lr=0x802675FCu; f_8025EA10(c); // 802675F8
  c->r[0]=R32(c->r[13]+0xFFFF9938u); // 802675FC
  c->r[31]=c->r[3]|c->r[3]; // 80267600
  cmpu(c,0,c->r[0],0x00000005u); // 80267604
  if (crb(c,0)) { goto L_80267614; } // 80267608
  c->r[0]=0u+0x00000000u; // 8026760C
  W32(c->r[13]+0xFFFF9938u,c->r[0]); // 80267610
L_80267614:;
  c->r[0]=R32(c->r[13]+0xFFFF9938u); // 80267614
  c->r[30]=0u+0x80600000u; // 80267618
  c->r[3]=R32(c->r[13]+0xFFFF9938u); // 8026761C
  c->r[30]=c->r[30]+0xFFFFE3E0u; // 80267620
  c->r[5]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 80267624
  c->r[0]=R32(c->r[13]+0xFFFF9938u); // 80267628
  c->r[6]=0u+0x00000010u; // 8026762C
  c->r[4]=0u+0x00000000u; // 80267630
  c->r[3]=(uint32_t)((int32_t)c->r[3]*(int32_t)20); // 80267634
  c->r[5]=c->r[30]+c->r[5]; // 80267638
  W32(c->r[5]+0x0000001Cu,c->r[6]); // 8026763C
  c->r[3]=c->r[30]+c->r[3]; // 80267640
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 80267644
  W32(c->r[3]+0x00000020u,c->r[4]); // 80267648
  c->r[3]=c->r[30]+c->r[0]; // 8026764C
  W32(c->r[3]+0x00000024u,c->r[4]); // 80267650
  c->lr=0x80267658u; f_80262798(c); // 80267654
  c->r[0]=R32(c->r[13]+0xFFFF9938u); // 80267658
  c->r[4]=R32(c->r[13]+0xFFFF9938u); // 8026765C
  c->r[5]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 80267660
  c->r[0]=c->r[4]+0x00000001u; // 80267664
  W32(c->r[13]+0xFFFF9938u,c->r[0]); // 80267668
  c->r[4]=c->r[30]+c->r[5]; // 8026766C
  W32(c->r[4]+0x0000002Cu,c->r[3]); // 80267670
  c->r[3]=c->r[31]|c->r[31]; // 80267674
  c->lr=0x8026767Cu; f_8025EA38(c); // 80267678
  c->r[5]=0u+0x80260000u; // 8026767C
  c->r[3]=0u+0x00000000u; // 80267680
  c->r[5]=c->r[5]+0x00007810u; // 80267684
  c->r[4]=0u+0x00000000u; // 80267688
  c->lr=0x80267690u; f_8026BFDC(c); // 8026768C
  goto L_80267724; // 80267690
L_80267694:;
  c->lr=0x80267698u; f_8025EA10(c); // 80267694
  c->r[0]=R32(c->r[13]+0xFFFF9938u); // 80267698
  c->r[31]=c->r[3]|c->r[3]; // 8026769C
  cmpu(c,0,c->r[0],0x00000005u); // 802676A0
  if (crb(c,0)) { goto L_802676B0; } // 802676A4
  c->r[0]=0u+0x00000000u; // 802676A8
  W32(c->r[13]+0xFFFF9938u,c->r[0]); // 802676AC
L_802676B0:;
  c->r[0]=R32(c->r[13]+0xFFFF9938u); // 802676B0
  c->r[30]=0u+0x80600000u; // 802676B4
  c->r[3]=R32(c->r[13]+0xFFFF9938u); // 802676B8
  c->r[30]=c->r[30]+0xFFFFE3E0u; // 802676BC
  c->r[5]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 802676C0
  c->r[0]=R32(c->r[13]+0xFFFF9938u); // 802676C4
  c->r[6]=0u+0x00000027u; // 802676C8
  c->r[4]=0u+0x00000000u; // 802676CC
  c->r[3]=(uint32_t)((int32_t)c->r[3]*(int32_t)20); // 802676D0
  c->r[5]=c->r[30]+c->r[5]; // 802676D4
  W32(c->r[5]+0x0000001Cu,c->r[6]); // 802676D8
  c->r[3]=c->r[30]+c->r[3]; // 802676DC
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 802676E0
  W32(c->r[3]+0x00000020u,c->r[4]); // 802676E4
  c->r[3]=c->r[30]+c->r[0]; // 802676E8
  W32(c->r[3]+0x00000024u,c->r[4]); // 802676EC
  c->lr=0x802676F4u; f_80262798(c); // 802676F0
  c->r[0]=R32(c->r[13]+0xFFFF9938u); // 802676F4
  c->r[4]=R32(c->r[13]+0xFFFF9938u); // 802676F8
  c->r[5]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 802676FC
  c->r[0]=c->r[4]+0x00000001u; // 80267700
  W32(c->r[13]+0xFFFF9938u,c->r[0]); // 80267704
  c->r[4]=c->r[30]+c->r[5]; // 80267708
  W32(c->r[4]+0x0000002Cu,c->r[3]); // 8026770C
  c->r[3]=c->r[31]|c->r[31]; // 80267710
  c->lr=0x80267718u; f_8025EA38(c); // 80267714
  c->r[3]=0u+0x80260000u; // 80267718
  c->r[3]=c->r[3]+0x0000773Cu; // 8026771C
  c->lr=0x80267724u; f_8026C2D8(c); // 80267720
L_80267724:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 80267724
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80267728
  c->r[30]=R32(c->r[1]+0x00000008u); // 8026772C
  c->lr=c->r[0]; // 80267730
  c->r[1]=c->r[1]+0x00000010u; // 80267734
  return; // 80267738
}

// cbForUnrecoveredErrorRetry
void f_8026773C(Ctx* __restrict c) {
  trace_call(0x8026773Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8026773C
  c->r[0]=c->lr; // 80267740
  W32(c->r[1]+0x00000014u,c->r[0]); // 80267744
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80267748
  c->r[31]=c->r[3]|c->r[3]; // 8026774C
  c->lr=0x80267754u; f_8025EA10(c); // 80267750
  c->r[0]=R32(c->r[13]+0xFFFF9938u); // 80267754
  cmps(c,0,(int32_t)c->r[0],0); // 80267758
  if (!crb(c,2)) { goto L_80267770; } // 8026775C
  c->r[4]=0u+0x80600000u; // 80267760
  c->r[4]=c->r[4]+0xFFFFE3E0u; // 80267764
  W32(c->r[4]+0x00000078u,c->r[31]); // 80267768
  goto L_80267788; // 8026776C
L_80267770:;
  c->r[0]=R32(c->r[13]+0xFFFF9938u); // 80267770
  c->r[4]=0u+0x80600000u; // 80267774
  c->r[4]=c->r[4]+0xFFFFE3E0u; // 80267778
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 8026777C
  c->r[4]=c->r[4]+c->r[0]; // 80267780
  W32(c->r[4]+0x00000014u,c->r[31]); // 80267784
L_80267788:;
  c->lr=0x8026778Cu; f_8025EA38(c); // 80267788
  cmpu(c,0,c->r[31],0x00000010u); // 8026778C
  if (!crb(c,2)) { goto L_802677AC; } // 80267790
  c->r[3]=0u+0x01230000u; // 80267794
  c->r[4]=0u+0x80260000u; // 80267798
  c->r[3]=c->r[3]+0x00004568u; // 8026779C
  c->r[4]=c->r[4]+0x00006E64u; // 802677A0
  c->lr=0x802677A8u; f_8026B24C(c); // 802677A4
  goto L_802677FC; // 802677A8
L_802677AC:;
  cmpu(c,0,c->r[31],0x00000020u); // 802677AC
  if (!crb(c,2)) { goto L_802677CC; } // 802677B0
  c->r[3]=0u+0x01230000u; // 802677B4
  c->r[4]=0u+0x80260000u; // 802677B8
  c->r[3]=c->r[3]+0x00004569u; // 802677BC
  c->r[4]=c->r[4]+0x00006E64u; // 802677C0
  c->lr=0x802677C8u; f_8026B24C(c); // 802677C4
  goto L_802677FC; // 802677C8
L_802677CC:;
  c->r[0]=rotl(c->r[31],0)&0x00000002u; cr0(c,c->r[0]); // 802677CC
  if (crb(c,2)) { goto L_802677EC; } // 802677D0
  c->r[3]=0u+0x01230000u; // 802677D4
  c->r[4]=0u+0x80260000u; // 802677D8
  c->r[3]=c->r[3]+0x00004567u; // 802677DC
  c->r[4]=c->r[4]+0x00006E50u; // 802677E0
  c->lr=0x802677E8u; f_8026B24C(c); // 802677E4
  goto L_802677FC; // 802677E8
L_802677EC:;
  c->lr=0x802677F0u; f_8026CD80(c); // 802677EC
  c->r[4]=0u+0x80260000u; // 802677F0
  c->r[4]=c->r[4]+0x00006E50u; // 802677F4
  c->lr=0x802677FCu; f_8026B24C(c); // 802677F8
L_802677FC:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 802677FC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80267800
  c->lr=c->r[0]; // 80267804
  c->r[1]=c->r[1]+0x00000010u; // 80267808
  return; // 8026780C
}

// fn_80267810
void f_80267810(Ctx* __restrict c) {
  trace_call(0x80267810u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80267810
  c->r[0]=c->lr; // 80267814
  W32(c->r[1]+0x00000014u,c->r[0]); // 80267818
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8026781C
  c->r[31]=c->r[3]|c->r[3]; // 80267820
  c->lr=0x80267828u; f_8025EA10(c); // 80267824
  c->r[0]=R32(c->r[13]+0xFFFF9938u); // 80267828
  cmps(c,0,(int32_t)c->r[0],0); // 8026782C
  if (!crb(c,2)) { goto L_80267844; } // 80267830
  c->r[4]=0u+0x80600000u; // 80267834
  c->r[4]=c->r[4]+0xFFFFE3E0u; // 80267838
  W32(c->r[4]+0x00000078u,c->r[31]); // 8026783C
  goto L_8026785C; // 80267840
L_80267844:;
  c->r[0]=R32(c->r[13]+0xFFFF9938u); // 80267844
  c->r[4]=0u+0x80600000u; // 80267848
  c->r[4]=c->r[4]+0xFFFFE3E0u; // 8026784C
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 80267850
  c->r[4]=c->r[4]+c->r[0]; // 80267854
  W32(c->r[4]+0x00000014u,c->r[31]); // 80267858
L_8026785C:;
  c->lr=0x80267860u; f_8025EA38(c); // 8026785C
  cmpu(c,0,c->r[31],0x00000010u); // 80267860
  if (!crb(c,2)) { goto L_80267880; } // 80267864
  c->r[3]=0u+0x01230000u; // 80267868
  c->r[4]=0u+0x80260000u; // 8026786C
  c->r[3]=c->r[3]+0x00004568u; // 80267870
  c->r[4]=c->r[4]+0x00006E64u; // 80267874
  c->lr=0x8026787Cu; f_8026B24C(c); // 80267878
  goto L_80267A24; // 8026787C
L_80267880:;
  cmpu(c,0,c->r[31],0x00000020u); // 80267880
  if (!crb(c,2)) { goto L_802678A0; } // 80267884
  c->r[3]=0u+0x01230000u; // 80267888
  c->r[4]=0u+0x80260000u; // 8026788C
  c->r[3]=c->r[3]+0x00004569u; // 80267890
  c->r[4]=c->r[4]+0x00006E64u; // 80267894
  c->lr=0x8026789Cu; f_8026B24C(c); // 80267898
  goto L_80267A24; // 8026789C
L_802678A0:;
  c->r[0]=rotl(c->r[31],0)&0x00000002u; cr0(c,c->r[0]); // 802678A0
  if (crb(c,2)) { goto L_802678C0; } // 802678A4
  c->r[3]=0u+0x01230000u; // 802678A8
  c->r[4]=0u+0x80260000u; // 802678AC
  c->r[3]=c->r[3]+0x00004567u; // 802678B0
  c->r[4]=c->r[4]+0x00006E50u; // 802678B4
  c->lr=0x802678BCu; f_8026B24C(c); // 802678B8
  goto L_80267A24; // 802678BC
L_802678C0:;
  c->r[0]=0u+0x00000000u; // 802678C0
  W32(c->r[13]+0xFFFF9950u,c->r[0]); // 802678C4
  c->r[0]=R32(c->r[13]+0xFFFF99ACu); // 802678C8
  cmpu(c,0,c->r[0],0x00000004u); // 802678CC
  if (crb(c,2)) { goto L_8026791C; } // 802678D0
  c->r[0]=R32(c->r[13]+0xFFFF99ACu); // 802678D4
  cmpu(c,0,c->r[0],0x00000005u); // 802678D8
  if (crb(c,2)) { goto L_8026791C; } // 802678DC
  c->r[0]=R32(c->r[13]+0xFFFF99ACu); // 802678E0
  cmpu(c,0,c->r[0],0x0000000Du); // 802678E4
  if (crb(c,2)) { goto L_8026791C; } // 802678E8
  c->r[0]=R32(c->r[13]+0xFFFF99ACu); // 802678EC
  cmpu(c,0,c->r[0],0x00000021u); // 802678F0
  if (crb(c,2)) { goto L_8026791C; } // 802678F4
  c->r[0]=R32(c->r[13]+0xFFFF99ACu); // 802678F8
  cmpu(c,0,c->r[0],0x00000022u); // 802678FC
  if (crb(c,2)) { goto L_8026791C; } // 80267900
  c->r[0]=R32(c->r[13]+0xFFFF99ACu); // 80267904
  cmpu(c,0,c->r[0],0x0000000Fu); // 80267908
  if (crb(c,2)) { goto L_8026791C; } // 8026790C
  c->r[0]=R32(c->r[13]+0xFFFF99ACu); // 80267910
  cmpu(c,0,c->r[0],0x00000025u); // 80267914
  if (!crb(c,2)) { goto L_80267924; } // 80267918
L_8026791C:;
  c->r[0]=0u+0x00000001u; // 8026791C
  W32(c->r[13]+0xFFFF999Cu,c->r[0]); // 80267920
L_80267924:;
  c->r[0]=R32(c->r[13]+0xFFFF9948u); // 80267924
  cmps(c,0,(int32_t)c->r[0],0); // 80267928
  if (crb(c,2)) { goto L_8026799C; } // 8026792C
  c->r[3]=0u+0x80600000u; // 80267930
  c->r[31]=R32(c->r[13]+0xFFFF99B8u); // 80267934
  c->r[3]=c->r[3]+0xFFFF96A0u; // 80267938
  c->r[0]=0u+0x00000002u; // 8026793C
  W32(c->r[13]+0xFFFF994Cu,c->r[0]); // 80267940
  c->r[4]=0u+0x00000000u; // 80267944
  c->r[0]=0u+0x0000000Au; // 80267948
  W32(c->r[13]+0xFFFF9948u,c->r[4]); // 8026794C
  W32(c->r[13]+0xFFFF99B8u,c->r[3]); // 80267950
  W32(c->r[31]+0x0000000Cu,c->r[0]); // 80267954
  c->r[12]=R32(c->r[31]+0x00000028u); // 80267958
  cmps(c,0,(int32_t)c->r[12],0); // 8026795C
  if (crb(c,2)) { goto L_80267974; } // 80267960
  c->r[4]=c->r[31]|c->r[31]; // 80267964
  c->r[3]=0u+0xFFFFFFFDu; // 80267968
  c->ctr=c->r[12]; // 8026796C
  if (true) { c->lr=0x80267974u; dispatch(c,c->ctr); } // 80267970
L_80267974:;
  c->r[12]=R32(c->r[13]+0xFFFF99A8u); // 80267974
  cmps(c,0,(int32_t)c->r[12],0); // 80267978
  if (crb(c,2)) { goto L_80267990; } // 8026797C
  c->r[4]=c->r[31]|c->r[31]; // 80267980
  c->r[3]=0u+0x00000000u; // 80267984
  c->ctr=c->r[12]; // 80267988
  if (true) { c->lr=0x80267990u; dispatch(c,c->ctr); } // 8026798C
L_80267990:;
  c->lr=0x80267994u; f_8026922C(c); // 80267990
  c->r[0]=0u+0x00000001u; // 80267994
  goto L_802679A0; // 80267998
L_8026799C:;
  c->r[0]=0u+0x00000000u; // 8026799C
L_802679A0:;
  cmps(c,0,(int32_t)c->r[0],0); // 802679A0
  if (!crb(c,2)) { goto L_80267A24; } // 802679A4
  c->r[4]=R32(c->r[13]+0xFFFF99B8u); // 802679A8
  c->r[0]=0u+0x0000000Bu; // 802679AC
  c->r[3]=0u+0x00000001u; // 802679B0
  W32(c->r[4]+0x0000000Cu,c->r[0]); // 802679B4
  c->r[0]=R32(c->r[13]+0xFFFF995Cu); // 802679B8
  W32(c->r[13]+0xFFFF9998u,c->r[3]); // 802679BC
  cmps(c,0,(int32_t)c->r[0],0); // 802679C0
  if (!crb(c,2)) { goto L_80267A24; } // 802679C4
  c->r[0]=R32(c->r[13]+0xFFFF9960u); // 802679C8
  cmps(c,0,(int32_t)c->r[0],0); // 802679CC
  if (!crb(c,2)) { goto L_80267A24; } // 802679D0
  c->r[31]=0u+0x80600000u; // 802679D4
  W32(c->r[13]+0xFFFF995Cu,c->r[3]); // 802679D8
  c->r[3]=c->r[31]+0xFFFF9700u; // 802679DC
  c->lr=0x802679E4u; f_802593E4(c); // 802679E0
  c->lr=0x802679E8u; f_80262798(c); // 802679E4
  c->r[5]=0u+0x80000000u; // 802679E8
  c->r[4]=0u+0x10620000u; // 802679EC
  c->r[0]=R32(c->r[5]+0x000000F8u); // 802679F0
  c->r[9]=0u+0x80270000u; // 802679F4
  c->r[6]=c->r[3]|c->r[3]; // 802679F8
  c->r[4]=c->r[4]+0x00004DD3u; // 802679FC
  c->r[0]=rotl(c->r[0],30)&0x3FFFFFFFu; // 80267A00
  c->r[3]=c->r[31]+0xFFFF9700u; // 80267A04
  c->r[0]=(uint32_t)(((uint64_t)c->r[4]*(uint64_t)c->r[0])>>32); // 80267A08
  c->r[9]=c->r[9]+0xFFFF9208u; // 80267A0C
  c->r[5]=0u+0x00000000u; // 80267A10
  c->r[7]=0u+0x00000000u; // 80267A14
  c->r[0]=rotl(c->r[0],26)&0x03FFFFFFu; // 80267A18
  c->r[8]=(uint32_t)((int32_t)c->r[0]*(int32_t)100); // 80267A1C
  c->lr=0x80267A24u; f_802596B4(c); // 80267A20
L_80267A24:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 80267A24
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80267A28
  c->lr=c->r[0]; // 80267A2C
  c->r[1]=c->r[1]+0x00000010u; // 80267A30
  return; // 80267A34
}

// stateCheckID
void f_80267A38(Ctx* __restrict c) {
  trace_call(0x80267A38u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80267A38
  c->r[0]=c->lr; // 80267A3C
  W32(c->r[1]+0x00000024u,c->r[0]); // 80267A40
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 80267A44
  W32(c->r[1]+0x00000018u,c->r[30]); // 80267A48
  c->r[30]=0u+0x80600000u; // 80267A4C
  c->r[30]=c->r[30]+0xFFFF9680u; // 80267A50
  W32(c->r[1]+0x00000014u,c->r[29]); // 80267A54
  c->r[0]=R32(c->r[13]+0xFFFF99ACu); // 80267A58
  cmps(c,0,(int32_t)c->r[0],3); // 80267A5C
  if (crb(c,2)) { goto L_80267A68; } // 80267A60
  goto L_80267BF4; // 80267A64
L_80267A68:;
  c->r[31]=0u+0x00000000u; // 80267A68
  c->r[4]=R32(c->r[13]+0xFFFF99B8u); // 80267A6C
  W32(c->r[13]+0xFFFF9968u,c->r[31]); // 80267A70
  c->r[3]=c->r[30]+0x000000C0u; // 80267A74
  c->r[4]=R32(c->r[4]+0x00000024u); // 80267A78
  c->lr=0x80267A80u; f_8026B2F0(c); // 80267A7C
  cmps(c,0,(int32_t)c->r[3],0); // 80267A80
  if (crb(c,2)) { goto L_80267B5C; } // 80267A84
  c->r[3]=R32(c->r[13]+0xFFFF99B4u); // 80267A88
  c->r[4]=c->r[30]+0x000000C0u; // 80267A8C
  c->r[5]=0u+0x00000020u; // 80267A90
  c->lr=0x80267A98u; f_80235294(c); // 80267A94
  c->r[5]=R32(c->r[13]+0xFFFF99B8u); // 80267A98
  c->r[0]=0u+0x00000001u; // 80267A9C
  c->r[3]=c->r[30]+0x00000000u; // 80267AA0
  c->r[4]=0u+0x00000020u; // 80267AA4
  W32(c->r[5]+0x0000000Cu,c->r[0]); // 80267AA8
  c->lr=0x80267AB0u; f_8025A3D4(c); // 80267AAC
  W32(c->r[13]+0xFFFF9950u,c->r[31]); // 80267AB0
  c->r[3]=0u+0x00000000u; // 80267AB4
  c->lr=0x80267ABCu; f_8026CD9C(c); // 80267AB8
  c->lr=0x80267AC0u; f_8025EA10(c); // 80267ABC
  c->r[0]=R32(c->r[13]+0xFFFF9938u); // 80267AC0
  c->r[29]=c->r[3]|c->r[3]; // 80267AC4
  cmpu(c,0,c->r[0],0x00000005u); // 80267AC8
  if (crb(c,0)) { goto L_80267AD4; } // 80267ACC
  W32(c->r[13]+0xFFFF9938u,c->r[31]); // 80267AD0
L_80267AD4:;
  c->r[0]=R32(c->r[13]+0xFFFF9938u); // 80267AD4
  c->r[31]=0u+0x80600000u; // 80267AD8
  c->r[3]=R32(c->r[13]+0xFFFF9938u); // 80267ADC
  c->r[31]=c->r[31]+0xFFFFE3E0u; // 80267AE0
  c->r[6]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 80267AE4
  c->r[0]=R32(c->r[13]+0xFFFF9938u); // 80267AE8
  c->r[7]=0u+0x00000021u; // 80267AEC
  c->r[5]=0u+0x00010000u; // 80267AF0
  c->r[3]=(uint32_t)((int32_t)c->r[3]*(int32_t)20); // 80267AF4
  c->r[4]=0u+0x00000020u; // 80267AF8
  c->r[6]=c->r[31]+c->r[6]; // 80267AFC
  W32(c->r[6]+0x0000001Cu,c->r[7]); // 80267B00
  c->r[3]=c->r[31]+c->r[3]; // 80267B04
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 80267B08
  W32(c->r[3]+0x00000020u,c->r[5]); // 80267B0C
  c->r[3]=c->r[31]+c->r[0]; // 80267B10
  W32(c->r[3]+0x00000024u,c->r[4]); // 80267B14
  c->lr=0x80267B1Cu; f_80262798(c); // 80267B18
  c->r[0]=R32(c->r[13]+0xFFFF9938u); // 80267B1C
  c->r[4]=R32(c->r[13]+0xFFFF9938u); // 80267B20
  c->r[5]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 80267B24
  c->r[0]=c->r[4]+0x00000001u; // 80267B28
  W32(c->r[13]+0xFFFF9938u,c->r[0]); // 80267B2C
  c->r[4]=c->r[31]+c->r[5]; // 80267B30
  W32(c->r[4]+0x0000002Cu,c->r[3]); // 80267B34
  c->r[3]=c->r[29]|c->r[29]; // 80267B38
  c->lr=0x80267B40u; f_8025EA38(c); // 80267B3C
  c->r[6]=0u+0x80260000u; // 80267B40
  c->r[3]=c->r[30]+0x000000E0u; // 80267B44
  c->r[6]=c->r[6]+0x00007D70u; // 80267B48
  c->r[4]=0u+0x00000020u; // 80267B4C
  c->r[5]=0u+0x00010000u; // 80267B50
  c->lr=0x80267B58u; f_8026BE48(c); // 80267B54
  goto L_80267D54; // 80267B58
L_80267B5C:;
  c->lr=0x80267B60u; f_8025EA10(c); // 80267B5C
  c->r[0]=R32(c->r[13]+0xFFFF9938u); // 80267B60
  c->r[29]=c->r[3]|c->r[3]; // 80267B64
  cmpu(c,0,c->r[0],0x00000005u); // 80267B68
  if (crb(c,0)) { goto L_80267B74; } // 80267B6C
  W32(c->r[13]+0xFFFF9938u,c->r[31]); // 80267B70
L_80267B74:;
  c->r[0]=R32(c->r[13]+0xFFFF9938u); // 80267B74
  c->r[30]=0u+0x80600000u; // 80267B78
  c->r[3]=R32(c->r[13]+0xFFFF9938u); // 80267B7C
  c->r[30]=c->r[30]+0xFFFFE3E0u; // 80267B80
  c->r[5]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 80267B84
  c->r[0]=R32(c->r[13]+0xFFFF9938u); // 80267B88
  c->r[6]=0u+0x00000010u; // 80267B8C
  c->r[4]=0u+0x00000000u; // 80267B90
  c->r[3]=(uint32_t)((int32_t)c->r[3]*(int32_t)20); // 80267B94
  c->r[5]=c->r[30]+c->r[5]; // 80267B98
  W32(c->r[5]+0x0000001Cu,c->r[6]); // 80267B9C
  c->r[3]=c->r[30]+c->r[3]; // 80267BA0
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 80267BA4
  W32(c->r[3]+0x00000020u,c->r[4]); // 80267BA8
  c->r[3]=c->r[30]+c->r[0]; // 80267BAC
  W32(c->r[3]+0x00000024u,c->r[4]); // 80267BB0
  c->lr=0x80267BB8u; f_80262798(c); // 80267BB4
  c->r[0]=R32(c->r[13]+0xFFFF9938u); // 80267BB8
  c->r[4]=R32(c->r[13]+0xFFFF9938u); // 80267BBC
  c->r[5]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 80267BC0
  c->r[0]=c->r[4]+0x00000001u; // 80267BC4
  W32(c->r[13]+0xFFFF9938u,c->r[0]); // 80267BC8
  c->r[4]=c->r[30]+c->r[5]; // 80267BCC
  W32(c->r[4]+0x0000002Cu,c->r[3]); // 80267BD0
  c->r[3]=c->r[29]|c->r[29]; // 80267BD4
  c->lr=0x80267BDCu; f_8025EA38(c); // 80267BD8
  c->r[5]=0u+0x80270000u; // 80267BDC
  c->r[3]=0u+0x00000000u; // 80267BE0
  c->r[5]=c->r[5]+0xFFFF85CCu; // 80267BE4
  c->r[4]=0u+0x00000000u; // 80267BE8
  c->lr=0x80267BF0u; f_8026BFDC(c); // 80267BEC
  goto L_80267D54; // 80267BF0
L_80267BF4:;
  c->r[4]=R32(c->r[13]+0xFFFF99B4u); // 80267BF4
  c->r[3]=c->r[30]+0x000000C0u; // 80267BF8
  c->r[5]=0u+0x00000020u; // 80267BFC
  c->lr=0x80267C04u; f_8028F40C(c); // 80267C00
  cmps(c,0,(int32_t)c->r[3],0); // 80267C04
  if (crb(c,2)) { goto L_80267CA8; } // 80267C08
  c->lr=0x80267C10u; f_8025EA10(c); // 80267C0C
  c->r[0]=R32(c->r[13]+0xFFFF9938u); // 80267C10
  c->r[29]=c->r[3]|c->r[3]; // 80267C14
  cmpu(c,0,c->r[0],0x00000005u); // 80267C18
  if (crb(c,0)) { goto L_80267C28; } // 80267C1C
  c->r[0]=0u+0x00000000u; // 80267C20
  W32(c->r[13]+0xFFFF9938u,c->r[0]); // 80267C24
L_80267C28:;
  c->r[0]=R32(c->r[13]+0xFFFF9938u); // 80267C28
  c->r[30]=0u+0x80600000u; // 80267C2C
  c->r[3]=R32(c->r[13]+0xFFFF9938u); // 80267C30
  c->r[30]=c->r[30]+0xFFFFE3E0u; // 80267C34
  c->r[5]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 80267C38
  c->r[0]=R32(c->r[13]+0xFFFF9938u); // 80267C3C
  c->r[6]=0u+0x00000010u; // 80267C40
  c->r[4]=0u+0x00000000u; // 80267C44
  c->r[3]=(uint32_t)((int32_t)c->r[3]*(int32_t)20); // 80267C48
  c->r[5]=c->r[30]+c->r[5]; // 80267C4C
  W32(c->r[5]+0x0000001Cu,c->r[6]); // 80267C50
  c->r[3]=c->r[30]+c->r[3]; // 80267C54
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 80267C58
  W32(c->r[3]+0x00000020u,c->r[4]); // 80267C5C
  c->r[3]=c->r[30]+c->r[0]; // 80267C60
  W32(c->r[3]+0x00000024u,c->r[4]); // 80267C64
  c->lr=0x80267C6Cu; f_80262798(c); // 80267C68
  c->r[0]=R32(c->r[13]+0xFFFF9938u); // 80267C6C
  c->r[4]=R32(c->r[13]+0xFFFF9938u); // 80267C70
  c->r[5]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 80267C74
  c->r[0]=c->r[4]+0x00000001u; // 80267C78
  W32(c->r[13]+0xFFFF9938u,c->r[0]); // 80267C7C
  c->r[4]=c->r[30]+c->r[5]; // 80267C80
  W32(c->r[4]+0x0000002Cu,c->r[3]); // 80267C84
  c->r[3]=c->r[29]|c->r[29]; // 80267C88
  c->lr=0x80267C90u; f_8025EA38(c); // 80267C8C
  c->r[5]=0u+0x80270000u; // 80267C90
  c->r[3]=0u+0x00000000u; // 80267C94
  c->r[5]=c->r[5]+0xFFFF85CCu; // 80267C98
  c->r[4]=0u+0x00000000u; // 80267C9C
  c->lr=0x80267CA4u; f_8026BFDC(c); // 80267CA0
  goto L_80267D54; // 80267CA4
L_80267CA8:;
  c->r[31]=0u+0x00000000u; // 80267CA8
  c->r[3]=0u+0x00000000u; // 80267CAC
  W32(c->r[13]+0xFFFF9950u,c->r[31]); // 80267CB0
  c->lr=0x80267CB8u; f_8026CD9C(c); // 80267CB4
  c->lr=0x80267CBCu; f_8025EA10(c); // 80267CB8
  c->r[0]=R32(c->r[13]+0xFFFF9938u); // 80267CBC
  c->r[29]=c->r[3]|c->r[3]; // 80267CC0
  cmpu(c,0,c->r[0],0x00000005u); // 80267CC4
  if (crb(c,0)) { goto L_80267CD0; } // 80267CC8
  W32(c->r[13]+0xFFFF9938u,c->r[31]); // 80267CCC
L_80267CD0:;
  c->r[0]=R32(c->r[13]+0xFFFF9938u); // 80267CD0
  c->r[31]=0u+0x80600000u; // 80267CD4
  c->r[3]=R32(c->r[13]+0xFFFF9938u); // 80267CD8
  c->r[31]=c->r[31]+0xFFFFE3E0u; // 80267CDC
  c->r[6]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 80267CE0
  c->r[0]=R32(c->r[13]+0xFFFF9938u); // 80267CE4
  c->r[7]=0u+0x00000021u; // 80267CE8
  c->r[5]=0u+0x00010000u; // 80267CEC
  c->r[3]=(uint32_t)((int32_t)c->r[3]*(int32_t)20); // 80267CF0
  c->r[4]=0u+0x00000020u; // 80267CF4
  c->r[6]=c->r[31]+c->r[6]; // 80267CF8
  W32(c->r[6]+0x0000001Cu,c->r[7]); // 80267CFC
  c->r[3]=c->r[31]+c->r[3]; // 80267D00
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 80267D04
  W32(c->r[3]+0x00000020u,c->r[5]); // 80267D08
  c->r[3]=c->r[31]+c->r[0]; // 80267D0C
  W32(c->r[3]+0x00000024u,c->r[4]); // 80267D10
  c->lr=0x80267D18u; f_80262798(c); // 80267D14
  c->r[0]=R32(c->r[13]+0xFFFF9938u); // 80267D18
  c->r[4]=R32(c->r[13]+0xFFFF9938u); // 80267D1C
  c->r[5]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 80267D20
  c->r[0]=c->r[4]+0x00000001u; // 80267D24
  W32(c->r[13]+0xFFFF9938u,c->r[0]); // 80267D28
  c->r[4]=c->r[31]+c->r[5]; // 80267D2C
  W32(c->r[4]+0x0000002Cu,c->r[3]); // 80267D30
  c->r[3]=c->r[29]|c->r[29]; // 80267D34
  c->lr=0x80267D3Cu; f_8025EA38(c); // 80267D38
  c->r[6]=0u+0x80260000u; // 80267D3C
  c->r[3]=c->r[30]+0x000000E0u; // 80267D40
  c->r[6]=c->r[6]+0x00007D70u; // 80267D44
  c->r[4]=0u+0x00000020u; // 80267D48
  c->r[5]=0u+0x00010000u; // 80267D4C
  c->lr=0x80267D54u; f_8026BE48(c); // 80267D50
L_80267D54:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 80267D54
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 80267D58
  c->r[30]=R32(c->r[1]+0x00000018u); // 80267D5C
  c->r[29]=R32(c->r[1]+0x00000014u); // 80267D60
  c->lr=c->r[0]; // 80267D64
  c->r[1]=c->r[1]+0x00000020u; // 80267D68
  return; // 80267D6C
}

// cbForStateReadingTOC
void f_80267D70(Ctx* __restrict c) {
  trace_call(0x80267D70u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80267D70
  c->r[0]=c->lr; // 80267D74
  W32(c->r[1]+0x00000024u,c->r[0]); // 80267D78
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 80267D7C
  W32(c->r[1]+0x00000018u,c->r[30]); // 80267D80
  W32(c->r[1]+0x00000014u,c->r[29]); // 80267D84
  c->r[29]=c->r[3]|c->r[3]; // 80267D88
  c->lr=0x80267D90u; f_8025EA10(c); // 80267D8C
  c->r[0]=R32(c->r[13]+0xFFFF9938u); // 80267D90
  cmps(c,0,(int32_t)c->r[0],0); // 80267D94
  if (!crb(c,2)) { goto L_80267DAC; } // 80267D98
  c->r[4]=0u+0x80600000u; // 80267D9C
  c->r[4]=c->r[4]+0xFFFFE3E0u; // 80267DA0
  W32(c->r[4]+0x00000078u,c->r[29]); // 80267DA4
  goto L_80267DC8; // 80267DA8
L_80267DAC:;
  c->r[4]=R32(c->r[13]+0xFFFF9938u); // 80267DAC
  c->r[5]=0u+0x80600000u; // 80267DB0
  c->r[5]=c->r[5]+0xFFFFE3E0u; // 80267DB4
  c->r[0]=c->r[4]+0xFFFFFFFFu; // 80267DB8
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 80267DBC
  c->r[4]=c->r[5]+c->r[0]; // 80267DC0
  W32(c->r[4]+0x00000028u,c->r[29]); // 80267DC4
L_80267DC8:;
  c->lr=0x80267DCCu; f_8025EA38(c); // 80267DC8
  cmpu(c,0,c->r[29],0x00000010u); // 80267DCC
  if (!crb(c,2)) { goto L_80267DEC; } // 80267DD0
  c->r[3]=0u+0x01230000u; // 80267DD4
  c->r[4]=0u+0x80260000u; // 80267DD8
  c->r[3]=c->r[3]+0x00004568u; // 80267DDC
  c->r[4]=c->r[4]+0x00006E64u; // 80267DE0
  c->lr=0x80267DE8u; f_8026B24C(c); // 80267DE4
  goto L_80267EF4; // 80267DE8
L_80267DEC:;
  cmpu(c,0,c->r[29],0x00000020u); // 80267DEC
  if (!crb(c,2)) { goto L_80267E0C; } // 80267DF0
  c->r[3]=0u+0x01230000u; // 80267DF4
  c->r[4]=0u+0x80260000u; // 80267DF8
  c->r[3]=c->r[3]+0x00004569u; // 80267DFC
  c->r[4]=c->r[4]+0x00006E64u; // 80267E00
  c->lr=0x80267E08u; f_8026B24C(c); // 80267E04
  goto L_80267EF4; // 80267E08
L_80267E0C:;
  c->r[0]=rotl(c->r[29],0)&0x00000001u; cr0(c,c->r[0]); // 80267E0C
  if (crb(c,2)) { goto L_80267ED8; } // 80267E10
  c->r[4]=0u+0x80600000u; // 80267E14
  c->r[29]=0u+0x00000000u; // 80267E18
  c->r[4]=c->r[4]+0xFFFF9760u; // 80267E1C
  W32(c->r[13]+0xFFFF9950u,c->r[29]); // 80267E20
  c->r[3]=0u+0x00000000u; // 80267E24
  W32(c->r[13]+0xFFFF9988u,c->r[4]); // 80267E28
  c->lr=0x80267E30u; f_8026CD9C(c); // 80267E2C
  c->lr=0x80267E34u; f_8025EA10(c); // 80267E30
  c->r[0]=R32(c->r[13]+0xFFFF9938u); // 80267E34
  c->r[30]=c->r[3]|c->r[3]; // 80267E38
  cmpu(c,0,c->r[0],0x00000005u); // 80267E3C
  if (crb(c,0)) { goto L_80267E48; } // 80267E40
  W32(c->r[13]+0xFFFF9938u,c->r[29]); // 80267E44
L_80267E48:;
  c->r[0]=R32(c->r[13]+0xFFFF9938u); // 80267E48
  c->r[31]=0u+0x80600000u; // 80267E4C
  c->r[3]=R32(c->r[13]+0xFFFF9938u); // 80267E50
  c->r[29]=0u+0x00010000u; // 80267E54
  c->r[4]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 80267E58
  c->r[31]=c->r[31]+0xFFFFE3E0u; // 80267E5C
  c->r[0]=R32(c->r[13]+0xFFFF9938u); // 80267E60
  c->r[6]=0u+0x00000021u; // 80267E64
  c->r[5]=c->r[29]+0x00000008u; // 80267E68
  c->r[3]=(uint32_t)((int32_t)c->r[3]*(int32_t)20); // 80267E6C
  c->r[4]=c->r[31]+c->r[4]; // 80267E70
  W32(c->r[4]+0x0000001Cu,c->r[6]); // 80267E74
  c->r[3]=c->r[31]+c->r[3]; // 80267E78
  c->r[4]=0u+0x00000020u; // 80267E7C
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 80267E80
  W32(c->r[3]+0x00000020u,c->r[5]); // 80267E84
  c->r[3]=c->r[31]+c->r[0]; // 80267E88
  W32(c->r[3]+0x00000024u,c->r[4]); // 80267E8C
  c->lr=0x80267E94u; f_80262798(c); // 80267E90
  c->r[0]=R32(c->r[13]+0xFFFF9938u); // 80267E94
  c->r[4]=R32(c->r[13]+0xFFFF9938u); // 80267E98
  c->r[5]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 80267E9C
  c->r[0]=c->r[4]+0x00000001u; // 80267EA0
  W32(c->r[13]+0xFFFF9938u,c->r[0]); // 80267EA4
  c->r[4]=c->r[31]+c->r[5]; // 80267EA8
  W32(c->r[4]+0x0000002Cu,c->r[3]); // 80267EAC
  c->r[3]=c->r[30]|c->r[30]; // 80267EB0
  c->lr=0x80267EB8u; f_8025EA38(c); // 80267EB4
  c->r[3]=0u+0x80600000u; // 80267EB8
  c->r[6]=0u+0x80260000u; // 80267EBC
  c->r[5]=c->r[29]+0x00000008u; // 80267EC0
  c->r[4]=0u+0x00000020u; // 80267EC4
  c->r[3]=c->r[3]+0xFFFF9780u; // 80267EC8
  c->r[6]=c->r[6]+0x00007F10u; // 80267ECC
  c->lr=0x80267ED4u; f_8026BE48(c); // 80267ED0
  goto L_80267EF4; // 80267ED4
L_80267ED8:;
  c->r[3]=0u+0x00000027u; // 80267ED8
  c->r[4]=0u+0x00000000u; // 80267EDC
  c->r[5]=0u+0x00000000u; // 80267EE0
  c->lr=0x80267EE8u; f_802668A8(c); // 80267EE4
  c->r[3]=0u+0x80260000u; // 80267EE8
  c->r[3]=c->r[3]+0x00007058u; // 80267EEC
  c->lr=0x80267EF4u; f_8026C2D8(c); // 80267EF0
L_80267EF4:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 80267EF4
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 80267EF8
  c->r[30]=R32(c->r[1]+0x00000018u); // 80267EFC
  c->r[29]=R32(c->r[1]+0x00000014u); // 80267F00
  c->lr=c->r[0]; // 80267F04
  c->r[1]=c->r[1]+0x00000020u; // 80267F08
  return; // 80267F0C
}

// fn_80267F10
void f_80267F10(Ctx* __restrict c) {
  trace_call(0x80267F10u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80267F10
  c->r[0]=c->lr; // 80267F14
  W32(c->r[1]+0x00000024u,c->r[0]); // 80267F18
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 80267F1C
  c->r[31]=0u+0x80600000u; // 80267F20
  c->r[31]=c->r[31]+0xFFFF9680u; // 80267F24
  W32(c->r[1]+0x00000018u,c->r[30]); // 80267F28
  W32(c->r[1]+0x00000014u,c->r[29]); // 80267F2C
  W32(c->r[1]+0x00000010u,c->r[28]); // 80267F30
  c->r[28]=c->r[3]|c->r[3]; // 80267F34
  c->lr=0x80267F3Cu; f_8025EA10(c); // 80267F38
  c->r[0]=R32(c->r[13]+0xFFFF9938u); // 80267F3C
  cmps(c,0,(int32_t)c->r[0],0); // 80267F40
  if (!crb(c,2)) { goto L_80267F58; } // 80267F44
  c->r[4]=0u+0x80600000u; // 80267F48
  c->r[4]=c->r[4]+0xFFFFE3E0u; // 80267F4C
  W32(c->r[4]+0x00000078u,c->r[28]); // 80267F50
  goto L_80267F74; // 80267F54
L_80267F58:;
  c->r[4]=R32(c->r[13]+0xFFFF9938u); // 80267F58
  c->r[5]=0u+0x80600000u; // 80267F5C
  c->r[5]=c->r[5]+0xFFFFE3E0u; // 80267F60
  c->r[0]=c->r[4]+0xFFFFFFFFu; // 80267F64
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 80267F68
  c->r[4]=c->r[5]+c->r[0]; // 80267F6C
  W32(c->r[4]+0x00000028u,c->r[28]); // 80267F70
L_80267F74:;
  c->lr=0x80267F78u; f_8025EA38(c); // 80267F74
  cmpu(c,0,c->r[28],0x00000010u); // 80267F78
  if (!crb(c,2)) { goto L_80267F98; } // 80267F7C
  c->r[3]=0u+0x01230000u; // 80267F80
  c->r[4]=0u+0x80260000u; // 80267F84
  c->r[3]=c->r[3]+0x00004568u; // 80267F88
  c->r[4]=c->r[4]+0x00006E64u; // 80267F8C
  c->lr=0x80267F94u; f_8026B24C(c); // 80267F90
  goto L_802682C0; // 80267F94
L_80267F98:;
  cmpu(c,0,c->r[28],0x00000020u); // 80267F98
  if (!crb(c,2)) { goto L_80267FB8; } // 80267F9C
  c->r[3]=0u+0x01230000u; // 80267FA0
  c->r[4]=0u+0x80260000u; // 80267FA4
  c->r[3]=c->r[3]+0x00004569u; // 80267FA8
  c->r[4]=c->r[4]+0x00006E64u; // 80267FAC
  c->lr=0x80267FB4u; f_8026B24C(c); // 80267FB0
  goto L_802682C0; // 80267FB4
L_80267FB8:;
  c->r[0]=rotl(c->r[28],0)&0x00000001u; cr0(c,c->r[0]); // 80267FB8
  if (crb(c,2)) { goto L_802682A4; } // 80267FBC
  c->r[6]=0u+0x00000000u; // 80267FC0
  c->r[3]=c->r[31]+0x00000100u; // 80267FC4
  W32(c->r[13]+0xFFFF9950u,c->r[6]); // 80267FC8
  c->r[7]=0u+0x00000000u; // 80267FCC
  c->r[4]=R32(c->r[13]+0xFFFF9988u); // 80267FD0
  W32(c->r[13]+0xFFFF9984u,c->r[3]); // 80267FD4
  W32(c->r[13]+0xFFFF9980u,c->r[6]); // 80267FD8
  goto L_80268000; // 80267FDC
L_80267FE0:;
  c->r[0]=R32(c->r[3]+0x00000004u); // 80267FE0
  cmps(c,0,(int32_t)c->r[0],0); // 80267FE4
  if (!crb(c,2)) { goto L_80267FF4; } // 80267FE8
  c->r[6]=c->r[3]|c->r[3]; // 80267FEC
  W32(c->r[13]+0xFFFF9980u,c->r[3]); // 80267FF0
L_80267FF4:;
  c->r[3]=c->r[3]+0x00000008u; // 80267FF4
  c->r[7]=c->r[7]+0x00000001u; // 80267FF8
  W32(c->r[13]+0xFFFF9984u,c->r[3]); // 80267FFC
L_80268000:;
  c->r[0]=R32(c->r[4]+0x00000000u); // 80268000
  c->r[5]=(uint32_t)(int32_t)(int16_t)c->r[7]; // 80268004
  cmpu(c,0,c->r[5],c->r[0]); // 80268008
  if (crb(c,0)) { IRQCHK(c); goto L_80267FE0; } // 8026800C
  cmps(c,0,(int32_t)c->r[6],0); // 80268010
  if (crb(c,2)) { goto L_802681A8; } // 80268014
  c->r[0]=R32(c->r[13]+0xFFFF99ACu); // 80268018
  cmps(c,0,(int32_t)c->r[0],3); // 8026801C
  if (crb(c,2)) { goto L_80268028; } // 80268020
  goto L_802680E8; // 80268024
L_80268028:;
  c->r[29]=0u+0x00000000u; // 80268028
  c->r[3]=0u+0x00000000u; // 8026802C
  W32(c->r[13]+0xFFFF9950u,c->r[29]); // 80268030
  c->lr=0x80268038u; f_8026CD9C(c); // 80268034
  c->r[3]=R32(c->r[13]+0xFFFF9980u); // 80268038
  c->r[28]=R32(c->r[3]+0x00000000u); // 8026803C
  c->lr=0x80268044u; f_8025EA10(c); // 80268040
  c->r[0]=R32(c->r[13]+0xFFFF9938u); // 80268044
  c->r[30]=c->r[3]|c->r[3]; // 80268048
  cmpu(c,0,c->r[0],0x00000005u); // 8026804C
  if (crb(c,0)) { goto L_80268058; } // 80268050
  W32(c->r[13]+0xFFFF9938u,c->r[29]); // 80268054
L_80268058:;
  c->r[0]=R32(c->r[13]+0xFFFF9938u); // 80268058
  c->r[29]=0u+0x80600000u; // 8026805C
  c->r[3]=R32(c->r[13]+0xFFFF9938u); // 80268060
  c->r[29]=c->r[29]+0xFFFFE3E0u; // 80268064
  c->r[5]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 80268068
  c->r[0]=R32(c->r[13]+0xFFFF9938u); // 8026806C
  c->r[6]=0u+0x00000022u; // 80268070
  c->r[4]=0u+0x00000000u; // 80268074
  c->r[3]=(uint32_t)((int32_t)c->r[3]*(int32_t)20); // 80268078
  c->r[5]=c->r[29]+c->r[5]; // 8026807C
  W32(c->r[5]+0x0000001Cu,c->r[6]); // 80268080
  c->r[3]=c->r[29]+c->r[3]; // 80268084
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 80268088
  W32(c->r[3]+0x00000020u,c->r[28]); // 8026808C
  c->r[3]=c->r[29]+c->r[0]; // 80268090
  W32(c->r[3]+0x00000024u,c->r[4]); // 80268094
  c->lr=0x8026809Cu; f_80262798(c); // 80268098
  c->r[0]=R32(c->r[13]+0xFFFF9938u); // 8026809C
  c->r[4]=R32(c->r[13]+0xFFFF9938u); // 802680A0
  c->r[5]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 802680A4
  c->r[0]=c->r[4]+0x00000001u; // 802680A8
  W32(c->r[13]+0xFFFF9938u,c->r[0]); // 802680AC
  c->r[4]=c->r[29]+c->r[5]; // 802680B0
  W32(c->r[4]+0x0000002Cu,c->r[3]); // 802680B4
  c->r[3]=c->r[30]|c->r[30]; // 802680B8
  c->lr=0x802680C0u; f_8025EA38(c); // 802680BC
  c->r[3]=R32(c->r[13]+0xFFFF9980u); // 802680C0
  c->r[8]=0u+0x80270000u; // 802680C4
  c->r[7]=c->r[31]+0x00000140u; // 802680C8
  c->r[4]=0u+0x00000000u; // 802680CC
  c->r[3]=R32(c->r[3]+0x00000000u); // 802680D0
  c->r[8]=c->r[8]+0xFFFF82E0u; // 802680D4
  c->r[5]=0u+0x00000000u; // 802680D8
  c->r[6]=0u+0x00000000u; // 802680DC
  c->lr=0x802680E4u; f_8026BA7C(c); // 802680E0
  goto L_802682C0; // 802680E4
L_802680E8:;
  c->r[29]=0u+0x00000000u; // 802680E8
  c->r[3]=0u+0x00000000u; // 802680EC
  W32(c->r[13]+0xFFFF9950u,c->r[29]); // 802680F0
  c->lr=0x802680F8u; f_8026CD9C(c); // 802680F4
  c->r[3]=R32(c->r[13]+0xFFFF9980u); // 802680F8
  c->r[28]=R32(c->r[3]+0x00000000u); // 802680FC
  c->lr=0x80268104u; f_8025EA10(c); // 80268100
  c->r[0]=R32(c->r[13]+0xFFFF9938u); // 80268104
  c->r[30]=c->r[3]|c->r[3]; // 80268108
  cmpu(c,0,c->r[0],0x00000005u); // 8026810C
  if (crb(c,0)) { goto L_80268118; } // 80268110
  W32(c->r[13]+0xFFFF9938u,c->r[29]); // 80268114
L_80268118:;
  c->r[0]=R32(c->r[13]+0xFFFF9938u); // 80268118
  c->r[29]=0u+0x80600000u; // 8026811C
  c->r[3]=R32(c->r[13]+0xFFFF9938u); // 80268120
  c->r[29]=c->r[29]+0xFFFFE3E0u; // 80268124
  c->r[5]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 80268128
  c->r[0]=R32(c->r[13]+0xFFFF9938u); // 8026812C
  c->r[6]=0u+0x00000022u; // 80268130
  c->r[4]=0u+0x00000000u; // 80268134
  c->r[3]=(uint32_t)((int32_t)c->r[3]*(int32_t)20); // 80268138
  c->r[5]=c->r[29]+c->r[5]; // 8026813C
  W32(c->r[5]+0x0000001Cu,c->r[6]); // 80268140
  c->r[3]=c->r[29]+c->r[3]; // 80268144
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 80268148
  W32(c->r[3]+0x00000020u,c->r[28]); // 8026814C
  c->r[3]=c->r[29]+c->r[0]; // 80268150
  W32(c->r[3]+0x00000024u,c->r[4]); // 80268154
  c->lr=0x8026815Cu; f_80262798(c); // 80268158
  c->r[0]=R32(c->r[13]+0xFFFF9938u); // 8026815C
  c->r[4]=R32(c->r[13]+0xFFFF9938u); // 80268160
  c->r[5]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 80268164
  c->r[0]=c->r[4]+0x00000001u; // 80268168
  W32(c->r[13]+0xFFFF9938u,c->r[0]); // 8026816C
  c->r[4]=c->r[29]+c->r[5]; // 80268170
  W32(c->r[4]+0x0000002Cu,c->r[3]); // 80268174
  c->r[3]=c->r[30]|c->r[30]; // 80268178
  c->lr=0x80268180u; f_8025EA38(c); // 8026817C
  c->r[3]=R32(c->r[13]+0xFFFF9980u); // 80268180
  c->r[8]=0u+0x80270000u; // 80268184
  c->r[7]=c->r[31]+0x00000140u; // 80268188
  c->r[4]=0u+0x00000000u; // 8026818C
  c->r[3]=R32(c->r[3]+0x00000000u); // 80268190
  c->r[8]=c->r[8]+0xFFFF8468u; // 80268194
  c->r[5]=0u+0x00000000u; // 80268198
  c->r[6]=0u+0x00000000u; // 8026819C
  c->lr=0x802681A4u; f_8026BA7C(c); // 802681A0
  goto L_802682C0; // 802681A4
L_802681A8:;
  c->r[0]=R32(c->r[13]+0xFFFF9948u); // 802681A8
  cmps(c,0,(int32_t)c->r[0],0); // 802681AC
  if (crb(c,2)) { goto L_8026821C; } // 802681B0
  c->r[28]=R32(c->r[13]+0xFFFF99B8u); // 802681B4
  c->r[3]=c->r[31]+0x00000020u; // 802681B8
  c->r[0]=0u+0x00000001u; // 802681BC
  c->r[4]=0u+0x00000000u; // 802681C0
  W32(c->r[13]+0xFFFF994Cu,c->r[0]); // 802681C4
  c->r[0]=0u+0x0000000Au; // 802681C8
  W32(c->r[13]+0xFFFF9948u,c->r[4]); // 802681CC
  W32(c->r[13]+0xFFFF99B8u,c->r[3]); // 802681D0
  W32(c->r[28]+0x0000000Cu,c->r[0]); // 802681D4
  c->r[12]=R32(c->r[28]+0x00000028u); // 802681D8
  cmps(c,0,(int32_t)c->r[12],0); // 802681DC
  if (crb(c,2)) { goto L_802681F4; } // 802681E0
  c->r[4]=c->r[28]|c->r[28]; // 802681E4
  c->r[3]=0u+0xFFFFFFFDu; // 802681E8
  c->ctr=c->r[12]; // 802681EC
  if (true) { c->lr=0x802681F4u; dispatch(c,c->ctr); } // 802681F0
L_802681F4:;
  c->r[12]=R32(c->r[13]+0xFFFF99A8u); // 802681F4
  cmps(c,0,(int32_t)c->r[12],0); // 802681F8
  if (crb(c,2)) { goto L_80268210; } // 802681FC
  c->r[4]=c->r[28]|c->r[28]; // 80268200
  c->r[3]=0u+0x00000000u; // 80268204
  c->ctr=c->r[12]; // 80268208
  if (true) { c->lr=0x80268210u; dispatch(c,c->ctr); } // 8026820C
L_80268210:;
  c->lr=0x80268214u; f_8026922C(c); // 80268210
  c->r[0]=0u+0x00000001u; // 80268214
  goto L_80268220; // 80268218
L_8026821C:;
  c->r[0]=0u+0x00000000u; // 8026821C
L_80268220:;
  cmps(c,0,(int32_t)c->r[0],0); // 80268220
  if (!crb(c,2)) { goto L_802682C0; } // 80268224
  c->r[4]=R32(c->r[13]+0xFFFF99B8u); // 80268228
  c->r[0]=0u+0x00000006u; // 8026822C
  c->r[3]=0u+0x00000001u; // 80268230
  W32(c->r[4]+0x0000000Cu,c->r[0]); // 80268234
  c->r[0]=R32(c->r[13]+0xFFFF995Cu); // 80268238
  W32(c->r[13]+0xFFFF9998u,c->r[3]); // 8026823C
  cmps(c,0,(int32_t)c->r[0],0); // 80268240
  if (!crb(c,2)) { goto L_802682C0; } // 80268244
  c->r[0]=R32(c->r[13]+0xFFFF9960u); // 80268248
  cmps(c,0,(int32_t)c->r[0],0); // 8026824C
  if (!crb(c,2)) { goto L_802682C0; } // 80268250
  W32(c->r[13]+0xFFFF995Cu,c->r[3]); // 80268254
  c->r[3]=c->r[31]+0x00000080u; // 80268258
  c->lr=0x80268260u; f_802593E4(c); // 8026825C
  c->lr=0x80268264u; f_80262798(c); // 80268260
  c->r[5]=0u+0x80000000u; // 80268264
  c->r[4]=0u+0x10620000u; // 80268268
  c->r[0]=R32(c->r[5]+0x000000F8u); // 8026826C
  c->r[9]=0u+0x80270000u; // 80268270
  c->r[6]=c->r[3]|c->r[3]; // 80268274
  c->r[4]=c->r[4]+0x00004DD3u; // 80268278
  c->r[0]=rotl(c->r[0],30)&0x3FFFFFFFu; // 8026827C
  c->r[3]=c->r[31]+0x00000080u; // 80268280
  c->r[0]=(uint32_t)(((uint64_t)c->r[4]*(uint64_t)c->r[0])>>32); // 80268284
  c->r[9]=c->r[9]+0xFFFF9208u; // 80268288
  c->r[5]=0u+0x00000000u; // 8026828C
  c->r[7]=0u+0x00000000u; // 80268290
  c->r[0]=rotl(c->r[0],26)&0x03FFFFFFu; // 80268294
  c->r[8]=(uint32_t)((int32_t)c->r[0]*(int32_t)100); // 80268298
  c->lr=0x802682A0u; f_802596B4(c); // 8026829C
  goto L_802682C0; // 802682A0
L_802682A4:;
  c->r[3]=0u+0x00000027u; // 802682A4
  c->r[4]=0u+0x00000000u; // 802682A8
  c->r[5]=0u+0x00000000u; // 802682AC
  c->lr=0x802682B4u; f_802668A8(c); // 802682B0
  c->r[3]=0u+0x80260000u; // 802682B4
  c->r[3]=c->r[3]+0x00007058u; // 802682B8
  c->lr=0x802682C0u; f_8026C2D8(c); // 802682BC
L_802682C0:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 802682C0
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 802682C4
  c->r[30]=R32(c->r[1]+0x00000018u); // 802682C8
  c->r[29]=R32(c->r[1]+0x00000014u); // 802682CC
  c->r[28]=R32(c->r[1]+0x00000010u); // 802682D0
  c->lr=c->r[0]; // 802682D4
  c->r[1]=c->r[1]+0x00000020u; // 802682D8
  return; // 802682DC
}

// cbForStateOpenPartition
void f_802682E0(Ctx* __restrict c) {
  trace_call(0x802682E0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802682E0
  c->r[0]=c->lr; // 802682E4
  W32(c->r[1]+0x00000014u,c->r[0]); // 802682E8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 802682EC
  W32(c->r[1]+0x00000008u,c->r[30]); // 802682F0
  c->r[30]=c->r[3]|c->r[3]; // 802682F4
  c->lr=0x802682FCu; f_8025EA10(c); // 802682F8
  c->r[0]=R32(c->r[13]+0xFFFF9938u); // 802682FC
  cmps(c,0,(int32_t)c->r[0],0); // 80268300
  if (!crb(c,2)) { goto L_80268318; } // 80268304
  c->r[4]=0u+0x80600000u; // 80268308
  c->r[4]=c->r[4]+0xFFFFE3E0u; // 8026830C
  W32(c->r[4]+0x00000078u,c->r[30]); // 80268310
  goto L_80268334; // 80268314
L_80268318:;
  c->r[4]=R32(c->r[13]+0xFFFF9938u); // 80268318
  c->r[5]=0u+0x80600000u; // 8026831C
  c->r[5]=c->r[5]+0xFFFFE3E0u; // 80268320
  c->r[0]=c->r[4]+0xFFFFFFFFu; // 80268324
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 80268328
  c->r[4]=c->r[5]+c->r[0]; // 8026832C
  W32(c->r[4]+0x00000028u,c->r[30]); // 80268330
L_80268334:;
  c->lr=0x80268338u; f_8025EA38(c); // 80268334
  cmpu(c,0,c->r[30],0x00000010u); // 80268338
  if (!crb(c,2)) { goto L_80268358; } // 8026833C
  c->r[3]=0u+0x01230000u; // 80268340
  c->r[4]=0u+0x80260000u; // 80268344
  c->r[3]=c->r[3]+0x00004568u; // 80268348
  c->r[4]=c->r[4]+0x00006E64u; // 8026834C
  c->lr=0x80268354u; f_8026B24C(c); // 80268350
  goto L_80268450; // 80268354
L_80268358:;
  cmpu(c,0,c->r[30],0x00000020u); // 80268358
  if (!crb(c,2)) { goto L_80268378; } // 8026835C
  c->r[3]=0u+0x01230000u; // 80268360
  c->r[4]=0u+0x80260000u; // 80268364
  c->r[3]=c->r[3]+0x00004569u; // 80268368
  c->r[4]=c->r[4]+0x00006E64u; // 8026836C
  c->lr=0x80268374u; f_8026B24C(c); // 80268370
  goto L_80268450; // 80268374
L_80268378:;
  c->r[0]=rotl(c->r[30],0)&0x00000001u; cr0(c,c->r[0]); // 80268378
  if (crb(c,2)) { goto L_80268434; } // 8026837C
  c->r[30]=0u+0x00000000u; // 80268380
  c->r[3]=0u+0x00000000u; // 80268384
  W32(c->r[13]+0xFFFF9950u,c->r[30]); // 80268388
  c->lr=0x80268390u; f_8026CD9C(c); // 8026838C
  c->lr=0x80268394u; f_8025EA10(c); // 80268390
  c->r[0]=R32(c->r[13]+0xFFFF9938u); // 80268394
  c->r[31]=c->r[3]|c->r[3]; // 80268398
  cmpu(c,0,c->r[0],0x00000005u); // 8026839C
  if (crb(c,0)) { goto L_802683A8; } // 802683A0
  W32(c->r[13]+0xFFFF9938u,c->r[30]); // 802683A4
L_802683A8:;
  c->r[0]=R32(c->r[13]+0xFFFF9938u); // 802683A8
  c->r[30]=0u+0x80600000u; // 802683AC
  c->r[3]=R32(c->r[13]+0xFFFF9938u); // 802683B0
  c->r[30]=c->r[30]+0xFFFFE3E0u; // 802683B4
  c->r[6]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 802683B8
  c->r[0]=R32(c->r[13]+0xFFFF9938u); // 802683BC
  c->r[7]=0u+0x00000001u; // 802683C0
  c->r[5]=0u+0x00000108u; // 802683C4
  c->r[3]=(uint32_t)((int32_t)c->r[3]*(int32_t)20); // 802683C8
  c->r[4]=0u+0x00000020u; // 802683CC
  c->r[6]=c->r[30]+c->r[6]; // 802683D0
  W32(c->r[6]+0x0000001Cu,c->r[7]); // 802683D4
  c->r[3]=c->r[30]+c->r[3]; // 802683D8
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 802683DC
  W32(c->r[3]+0x00000020u,c->r[5]); // 802683E0
  c->r[3]=c->r[30]+c->r[0]; // 802683E4
  W32(c->r[3]+0x00000024u,c->r[4]); // 802683E8
  c->lr=0x802683F0u; f_80262798(c); // 802683EC
  c->r[0]=R32(c->r[13]+0xFFFF9938u); // 802683F0
  c->r[4]=R32(c->r[13]+0xFFFF9938u); // 802683F4
  c->r[5]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 802683F8
  c->r[0]=c->r[4]+0x00000001u; // 802683FC
  W32(c->r[13]+0xFFFF9938u,c->r[0]); // 80268400
  c->r[4]=c->r[30]+c->r[5]; // 80268404
  W32(c->r[4]+0x0000002Cu,c->r[3]); // 80268408
  c->r[3]=c->r[31]|c->r[31]; // 8026840C
  c->lr=0x80268414u; f_8025EA38(c); // 80268410
  c->r[3]=0u+0x80600000u; // 80268414
  c->r[6]=0u+0x80270000u; // 80268418
  c->r[3]=c->r[3]+0xFFFF9680u; // 8026841C
  c->r[4]=0u+0x00000020u; // 80268420
  c->r[6]=c->r[6]+0xFFFF8794u; // 80268424
  c->r[5]=0u+0x00000108u; // 80268428
  c->lr=0x80268430u; f_8026C8DC(c); // 8026842C
  goto L_80268450; // 80268430
L_80268434:;
  c->r[3]=0u+0x00000027u; // 80268434
  c->r[4]=0u+0x00000000u; // 80268438
  c->r[5]=0u+0x00000000u; // 8026843C
  c->lr=0x80268444u; f_802668A8(c); // 80268440
  c->r[3]=0u+0x80260000u; // 80268444
  c->r[3]=c->r[3]+0x00007058u; // 80268448
  c->lr=0x80268450u; f_8026C2D8(c); // 8026844C
L_80268450:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 80268450
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80268454
  c->r[30]=R32(c->r[1]+0x00000008u); // 80268458
  c->lr=c->r[0]; // 8026845C
  c->r[1]=c->r[1]+0x00000010u; // 80268460
  return; // 80268464
}

// cbForStateOpenPartition2
void f_80268468(Ctx* __restrict c) {
  trace_call(0x80268468u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80268468
  c->r[0]=c->lr; // 8026846C
  W32(c->r[1]+0x00000014u,c->r[0]); // 80268470
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80268474
  c->r[31]=c->r[3]|c->r[3]; // 80268478
  c->lr=0x80268480u; f_8025EA10(c); // 8026847C
  c->r[0]=R32(c->r[13]+0xFFFF9938u); // 80268480
  cmps(c,0,(int32_t)c->r[0],0); // 80268484
  if (!crb(c,2)) { goto L_8026849C; } // 80268488
  c->r[4]=0u+0x80600000u; // 8026848C
  c->r[4]=c->r[4]+0xFFFFE3E0u; // 80268490
  W32(c->r[4]+0x00000078u,c->r[31]); // 80268494
  goto L_802684B4; // 80268498
L_8026849C:;
  c->r[0]=R32(c->r[13]+0xFFFF9938u); // 8026849C
  c->r[4]=0u+0x80600000u; // 802684A0
  c->r[4]=c->r[4]+0xFFFFE3E0u; // 802684A4
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 802684A8
  c->r[4]=c->r[4]+c->r[0]; // 802684AC
  W32(c->r[4]+0x00000014u,c->r[31]); // 802684B0
L_802684B4:;
  c->lr=0x802684B8u; f_8025EA38(c); // 802684B4
  cmpu(c,0,c->r[31],0x00000010u); // 802684B8
  if (!crb(c,2)) { goto L_802684D8; } // 802684BC
  c->r[3]=0u+0x01230000u; // 802684C0
  c->r[4]=0u+0x80260000u; // 802684C4
  c->r[3]=c->r[3]+0x00004568u; // 802684C8
  c->r[4]=c->r[4]+0x00006E64u; // 802684CC
  c->lr=0x802684D4u; f_8026B24C(c); // 802684D0
  goto L_802685B8; // 802684D4
L_802684D8:;
  cmpu(c,0,c->r[31],0x00000020u); // 802684D8
  if (!crb(c,2)) { goto L_802684F8; } // 802684DC
  c->r[3]=0u+0x01230000u; // 802684E0
  c->r[4]=0u+0x80260000u; // 802684E4
  c->r[3]=c->r[3]+0x00004569u; // 802684E8
  c->r[4]=c->r[4]+0x00006E64u; // 802684EC
  c->lr=0x802684F4u; f_8026B24C(c); // 802684F0
  goto L_802685B8; // 802684F4
L_802684F8:;
  c->r[0]=rotl(c->r[31],0)&0x00000001u; cr0(c,c->r[0]); // 802684F8
  if (crb(c,2)) { goto L_8026859C; } // 802684FC
  c->r[4]=0u+0x00000000u; // 80268500
  W32(c->r[13]+0xFFFF9950u,c->r[4]); // 80268504
  c->r[0]=R32(c->r[13]+0xFFFF9948u); // 80268508
  cmps(c,0,(int32_t)c->r[0],0); // 8026850C
  if (crb(c,2)) { goto L_80268578; } // 80268510
  c->r[3]=0u+0x80600000u; // 80268514
  c->r[31]=R32(c->r[13]+0xFFFF99B8u); // 80268518
  c->r[3]=c->r[3]+0xFFFF96A0u; // 8026851C
  W32(c->r[13]+0xFFFF994Cu,c->r[4]); // 80268520
  c->r[0]=0u+0x0000000Au; // 80268524
  W32(c->r[13]+0xFFFF9948u,c->r[4]); // 80268528
  W32(c->r[13]+0xFFFF99B8u,c->r[3]); // 8026852C
  W32(c->r[31]+0x0000000Cu,c->r[0]); // 80268530
  c->r[12]=R32(c->r[31]+0x00000028u); // 80268534
  cmps(c,0,(int32_t)c->r[12],0); // 80268538
  if (crb(c,2)) { goto L_80268550; } // 8026853C
  c->r[4]=c->r[31]|c->r[31]; // 80268540
  c->r[3]=0u+0xFFFFFFFDu; // 80268544
  c->ctr=c->r[12]; // 80268548
  if (true) { c->lr=0x80268550u; dispatch(c,c->ctr); } // 8026854C
L_80268550:;
  c->r[12]=R32(c->r[13]+0xFFFF99A8u); // 80268550
  cmps(c,0,(int32_t)c->r[12],0); // 80268554
  if (crb(c,2)) { goto L_8026856C; } // 80268558
  c->r[4]=c->r[31]|c->r[31]; // 8026855C
  c->r[3]=0u+0x00000000u; // 80268560
  c->ctr=c->r[12]; // 80268564
  if (true) { c->lr=0x8026856Cu; dispatch(c,c->ctr); } // 80268568
L_8026856C:;
  c->lr=0x80268570u; f_8026922C(c); // 8026856C
  c->r[0]=0u+0x00000001u; // 80268570
  goto L_8026857C; // 80268574
L_80268578:;
  c->r[0]=0u+0x00000000u; // 80268578
L_8026857C:;
  cmps(c,0,(int32_t)c->r[0],0); // 8026857C
  if (!crb(c,2)) { goto L_802685B8; } // 80268580
  c->r[3]=R32(c->r[13]+0xFFFF99B8u); // 80268584
  c->r[0]=0u+0x00000001u; // 80268588
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 8026858C
  c->r[3]=R32(c->r[13]+0xFFFF99B8u); // 80268590
  c->lr=0x80268598u; f_80269554(c); // 80268594
  goto L_802685B8; // 80268598
L_8026859C:;
  c->r[3]=0u+0x00000027u; // 8026859C
  c->r[4]=0u+0x00000000u; // 802685A0
  c->r[5]=0u+0x00000000u; // 802685A4
  c->lr=0x802685ACu; f_802668A8(c); // 802685A8
  c->r[3]=0u+0x80260000u; // 802685AC
  c->r[3]=c->r[3]+0x00007058u; // 802685B0
  c->lr=0x802685B8u; f_8026C2D8(c); // 802685B4
L_802685B8:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 802685B8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 802685BC
  c->lr=c->r[0]; // 802685C0
  c->r[1]=c->r[1]+0x00000010u; // 802685C4
  return; // 802685C8
}

// cbForStateCheckID1
void f_802685CC(Ctx* __restrict c) {
  trace_call(0x802685CCu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802685CC
  c->r[0]=c->lr; // 802685D0
  W32(c->r[1]+0x00000014u,c->r[0]); // 802685D4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 802685D8
  c->r[31]=c->r[3]|c->r[3]; // 802685DC
  c->lr=0x802685E4u; f_8025EA10(c); // 802685E0
  c->r[0]=R32(c->r[13]+0xFFFF9938u); // 802685E4
  cmps(c,0,(int32_t)c->r[0],0); // 802685E8
  if (!crb(c,2)) { goto L_80268600; } // 802685EC
  c->r[4]=0u+0x80600000u; // 802685F0
  c->r[4]=c->r[4]+0xFFFFE3E0u; // 802685F4
  W32(c->r[4]+0x00000078u,c->r[31]); // 802685F8
  goto L_80268618; // 802685FC
L_80268600:;
  c->r[0]=R32(c->r[13]+0xFFFF9938u); // 80268600
  c->r[4]=0u+0x80600000u; // 80268604
  c->r[4]=c->r[4]+0xFFFFE3E0u; // 80268608
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 8026860C
  c->r[4]=c->r[4]+c->r[0]; // 80268610
  W32(c->r[4]+0x00000014u,c->r[31]); // 80268614
L_80268618:;
  c->lr=0x8026861Cu; f_8025EA38(c); // 80268618
  cmpu(c,0,c->r[31],0x00000010u); // 8026861C
  if (!crb(c,2)) { goto L_8026863C; } // 80268620
  c->r[3]=0u+0x01230000u; // 80268624
  c->r[4]=0u+0x80260000u; // 80268628
  c->r[3]=c->r[3]+0x00004568u; // 8026862C
  c->r[4]=c->r[4]+0x00006E64u; // 80268630
  c->lr=0x80268638u; f_8026B24C(c); // 80268634
  goto L_80268780; // 80268638
L_8026863C:;
  cmpu(c,0,c->r[31],0x00000020u); // 8026863C
  if (!crb(c,2)) { goto L_8026865C; } // 80268640
  c->r[3]=0u+0x01230000u; // 80268644
  c->r[4]=0u+0x80260000u; // 80268648
  c->r[3]=c->r[3]+0x00004569u; // 8026864C
  c->r[4]=c->r[4]+0x00006E64u; // 80268650
  c->lr=0x80268658u; f_8026B24C(c); // 80268654
  goto L_80268780; // 80268658
L_8026865C:;
  c->r[0]=rotl(c->r[31],0)&0x00000002u; cr0(c,c->r[0]); // 8026865C
  if (crb(c,2)) { goto L_8026867C; } // 80268660
  c->r[3]=0u+0x01230000u; // 80268664
  c->r[4]=0u+0x80260000u; // 80268668
  c->r[3]=c->r[3]+0x00004567u; // 8026866C
  c->r[4]=c->r[4]+0x00006E50u; // 80268670
  c->lr=0x80268678u; f_8026B24C(c); // 80268674
  goto L_80268780; // 80268678
L_8026867C:;
  c->r[4]=0u+0x00000000u; // 8026867C
  W32(c->r[13]+0xFFFF9950u,c->r[4]); // 80268680
  c->r[0]=R32(c->r[13]+0xFFFF9948u); // 80268684
  cmps(c,0,(int32_t)c->r[0],0); // 80268688
  if (crb(c,2)) { goto L_802686F8; } // 8026868C
  c->r[3]=0u+0x80600000u; // 80268690
  c->r[31]=R32(c->r[13]+0xFFFF99B8u); // 80268694
  c->r[3]=c->r[3]+0xFFFF96A0u; // 80268698
  c->r[0]=0u+0x00000001u; // 8026869C
  W32(c->r[13]+0xFFFF994Cu,c->r[0]); // 802686A0
  c->r[0]=0u+0x0000000Au; // 802686A4
  W32(c->r[13]+0xFFFF9948u,c->r[4]); // 802686A8
  W32(c->r[13]+0xFFFF99B8u,c->r[3]); // 802686AC
  W32(c->r[31]+0x0000000Cu,c->r[0]); // 802686B0
  c->r[12]=R32(c->r[31]+0x00000028u); // 802686B4
  cmps(c,0,(int32_t)c->r[12],0); // 802686B8
  if (crb(c,2)) { goto L_802686D0; } // 802686BC
  c->r[4]=c->r[31]|c->r[31]; // 802686C0
  c->r[3]=0u+0xFFFFFFFDu; // 802686C4
  c->ctr=c->r[12]; // 802686C8
  if (true) { c->lr=0x802686D0u; dispatch(c,c->ctr); } // 802686CC
L_802686D0:;
  c->r[12]=R32(c->r[13]+0xFFFF99A8u); // 802686D0
  cmps(c,0,(int32_t)c->r[12],0); // 802686D4
  if (crb(c,2)) { goto L_802686EC; } // 802686D8
  c->r[4]=c->r[31]|c->r[31]; // 802686DC
  c->r[3]=0u+0x00000000u; // 802686E0
  c->ctr=c->r[12]; // 802686E4
  if (true) { c->lr=0x802686ECu; dispatch(c,c->ctr); } // 802686E8
L_802686EC:;
  c->lr=0x802686F0u; f_8026922C(c); // 802686EC
  c->r[0]=0u+0x00000001u; // 802686F0
  goto L_802686FC; // 802686F4
L_802686F8:;
  c->r[0]=0u+0x00000000u; // 802686F8
L_802686FC:;
  cmps(c,0,(int32_t)c->r[0],0); // 802686FC
  if (!crb(c,2)) { goto L_80268780; } // 80268700
  c->r[4]=R32(c->r[13]+0xFFFF99B8u); // 80268704
  c->r[0]=0u+0x00000006u; // 80268708
  c->r[3]=0u+0x00000001u; // 8026870C
  W32(c->r[4]+0x0000000Cu,c->r[0]); // 80268710
  c->r[0]=R32(c->r[13]+0xFFFF995Cu); // 80268714
  W32(c->r[13]+0xFFFF9998u,c->r[3]); // 80268718
  cmps(c,0,(int32_t)c->r[0],0); // 8026871C
  if (!crb(c,2)) { goto L_80268780; } // 80268720
  c->r[0]=R32(c->r[13]+0xFFFF9960u); // 80268724
  cmps(c,0,(int32_t)c->r[0],0); // 80268728
  if (!crb(c,2)) { goto L_80268780; } // 8026872C
  c->r[31]=0u+0x80600000u; // 80268730
  W32(c->r[13]+0xFFFF995Cu,c->r[3]); // 80268734
  c->r[3]=c->r[31]+0xFFFF9700u; // 80268738
  c->lr=0x80268740u; f_802593E4(c); // 8026873C
  c->lr=0x80268744u; f_80262798(c); // 80268740
  c->r[5]=0u+0x80000000u; // 80268744
  c->r[4]=0u+0x10620000u; // 80268748
  c->r[0]=R32(c->r[5]+0x000000F8u); // 8026874C
  c->r[9]=0u+0x80270000u; // 80268750
  c->r[6]=c->r[3]|c->r[3]; // 80268754
  c->r[4]=c->r[4]+0x00004DD3u; // 80268758
  c->r[0]=rotl(c->r[0],30)&0x3FFFFFFFu; // 8026875C
  c->r[3]=c->r[31]+0xFFFF9700u; // 80268760
  c->r[0]=(uint32_t)(((uint64_t)c->r[4]*(uint64_t)c->r[0])>>32); // 80268764
  c->r[9]=c->r[9]+0xFFFF9208u; // 80268768
  c->r[5]=0u+0x00000000u; // 8026876C
  c->r[7]=0u+0x00000000u; // 80268770
  c->r[0]=rotl(c->r[0],26)&0x03FFFFFFu; // 80268774
  c->r[8]=(uint32_t)((int32_t)c->r[0]*(int32_t)100); // 80268778
  c->lr=0x80268780u; f_802596B4(c); // 8026877C
L_80268780:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 80268780
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80268784
  c->lr=c->r[0]; // 80268788
  c->r[1]=c->r[1]+0x00000010u; // 8026878C
  return; // 80268790
}

// cbForStateCheckID2
void f_80268794(Ctx* __restrict c) {
  trace_call(0x80268794u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80268794
  c->r[0]=c->lr; // 80268798
  W32(c->r[1]+0x00000014u,c->r[0]); // 8026879C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 802687A0
  c->r[31]=c->r[3]|c->r[3]; // 802687A4
  c->lr=0x802687ACu; f_8025EA10(c); // 802687A8
  c->r[0]=R32(c->r[13]+0xFFFF9938u); // 802687AC
  cmps(c,0,(int32_t)c->r[0],0); // 802687B0
  if (!crb(c,2)) { goto L_802687C8; } // 802687B4
  c->r[4]=0u+0x80600000u; // 802687B8
  c->r[4]=c->r[4]+0xFFFFE3E0u; // 802687BC
  W32(c->r[4]+0x00000078u,c->r[31]); // 802687C0
  goto L_802687E4; // 802687C4
L_802687C8:;
  c->r[4]=R32(c->r[13]+0xFFFF9938u); // 802687C8
  c->r[5]=0u+0x80600000u; // 802687CC
  c->r[5]=c->r[5]+0xFFFFE3E0u; // 802687D0
  c->r[0]=c->r[4]+0xFFFFFFFFu; // 802687D4
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 802687D8
  c->r[4]=c->r[5]+c->r[0]; // 802687DC
  W32(c->r[4]+0x00000028u,c->r[31]); // 802687E0
L_802687E4:;
  c->lr=0x802687E8u; f_8025EA38(c); // 802687E4
  cmpu(c,0,c->r[31],0x00000010u); // 802687E8
  if (!crb(c,2)) { goto L_80268808; } // 802687EC
  c->r[3]=0u+0x01230000u; // 802687F0
  c->r[4]=0u+0x80260000u; // 802687F4
  c->r[3]=c->r[3]+0x00004568u; // 802687F8
  c->r[4]=c->r[4]+0x00006E64u; // 802687FC
  c->lr=0x80268804u; f_8026B24C(c); // 80268800
  goto L_80268914; // 80268804
L_80268808:;
  cmpu(c,0,c->r[31],0x00000020u); // 80268808
  if (!crb(c,2)) { goto L_80268828; } // 8026880C
  c->r[3]=0u+0x01230000u; // 80268810
  c->r[4]=0u+0x80260000u; // 80268814
  c->r[3]=c->r[3]+0x00004569u; // 80268818
  c->r[4]=c->r[4]+0x00006E64u; // 8026881C
  c->lr=0x80268824u; f_8026B24C(c); // 80268820
  goto L_80268914; // 80268824
L_80268828:;
  c->r[0]=rotl(c->r[31],0)&0x00000001u; cr0(c,c->r[0]); // 80268828
  if (crb(c,2)) { goto L_802688F8; } // 8026882C
  c->r[5]=0u+0x80260000u; // 80268830
  c->r[0]=0u+0x00000000u; // 80268834
  c->r[5]=c->r[5]+0x00006A40u; // 80268838
  c->r[3]=0u+0x80600000u; // 8026883C
  W32(c->r[13]+0xFFFF9950u,c->r[0]); // 80268840
  c->r[3]=c->r[3]+0xFFFF9680u; // 80268844
  c->r[4]=R32(c->r[13]+0xFFFF99B0u); // 80268848
  W32(c->r[13]+0xFFFF99BCu,c->r[5]); // 8026884C
  c->r[0]=R32(c->r[3]+0x00000008u); // 80268850
  c->r[3]=R32(c->r[4]+0x0000003Cu); // 80268854
  cmpu(c,0,c->r[3],c->r[0]); // 80268858
  if (!crb(c,0)) { goto L_80268878; } // 8026885C
  c->r[5]=0u+0x80420000u; // 80268860
  c->r[3]=c->r[13]+0xFFFF8E3Cu; // 80268864
  c->r[5]=c->r[5]+0xFFFFFCE0u; // 80268868
  c->r[4]=0u+0x0000040Bu; // 8026886C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80268870
  c->lr=0x80268878u; f_801D479C(c); // 80268874
L_80268878:;
  c->r[3]=0u+0x00000000u; // 80268878
  c->lr=0x80268880u; f_8026CD9C(c); // 8026887C
  c->r[6]=R32(c->r[13]+0xFFFF9970u); // 80268880
  c->r[31]=0u+0x80600000u; // 80268884
  c->r[31]=c->r[31]+0xFFFF9680u; // 80268888
  c->r[0]=R32(c->r[13]+0xFFFF9970u); // 8026888C
  c->r[4]=R32(c->r[31]+0x00000008u); // 80268890
  c->r[3]=0u+0x00000001u; // 80268894
  c->r[0]=~(c->r[0]|c->r[0]); // 80268898
  c->r[7]=R32(c->r[31]+0x00000004u); // 8026889C
  c->r[0]=rotl(c->r[0],0)&0x00000002u; // 802688A0
  c->r[5]=((c->r[0])&0x20)?0u:(c->r[4]<<((c->r[0])&31)); // 802688A4
  c->r[4]=((c->r[6])&0x20)?0u:(c->r[7]>>((c->r[6])&31)); // 802688A8
  c->r[0]=c->r[5]+0x0000001Fu; // 802688AC
  c->r[5]=rotl(c->r[0],0)&0xFFFFFFE0u; // 802688B0
  c->lr=0x802688B8u; f_802668A8(c); // 802688B4
  c->r[0]=R32(c->r[13]+0xFFFF9970u); // 802688B8
  c->r[6]=0u+0x80260000u; // 802688BC
  c->r[3]=R32(c->r[31]+0x00000008u); // 802688C0
  c->r[6]=c->r[6]+0x00006BB8u; // 802688C4
  c->r[0]=~(c->r[0]|c->r[0]); // 802688C8
  c->r[7]=R32(c->r[13]+0xFFFF99B0u); // 802688CC
  c->r[0]=rotl(c->r[0],0)&0x00000002u; // 802688D0
  c->r[5]=R32(c->r[31]+0x00000004u); // 802688D4
  c->r[3]=((c->r[0])&0x20)?0u:(c->r[3]<<((c->r[0])&31)); // 802688D8
  c->r[0]=R32(c->r[13]+0xFFFF9970u); // 802688DC
  c->r[4]=c->r[3]+0x0000001Fu; // 802688E0
  c->r[3]=R32(c->r[7]+0x00000038u); // 802688E4
  c->r[4]=rotl(c->r[4],0)&0xFFFFFFE0u; // 802688E8
  c->r[5]=((c->r[0])&0x20)?0u:(c->r[5]>>((c->r[0])&31)); // 802688EC
  c->lr=0x802688F4u; f_8026C8DC(c); // 802688F0
  goto L_80268914; // 802688F4
L_802688F8:;
  c->r[3]=0u+0x00000027u; // 802688F8
  c->r[4]=0u+0x00000000u; // 802688FC
  c->r[5]=0u+0x00000000u; // 80268900
  c->lr=0x80268908u; f_802668A8(c); // 80268904
  c->r[3]=0u+0x80260000u; // 80268908
  c->r[3]=c->r[3]+0x00007058u; // 8026890C
  c->lr=0x80268914u; f_8026C2D8(c); // 80268910
L_80268914:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 80268914
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80268918
  c->lr=c->r[0]; // 8026891C
  c->r[1]=c->r[1]+0x00000010u; // 80268920
  return; // 80268924
}

// stateCoverClosed
void f_80268928(Ctx* __restrict c) {
  trace_call(0x80268928u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80268928
  c->r[0]=c->lr; // 8026892C
  c->r[3]=0u+0x00000001u; // 80268930
  W32(c->r[1]+0x00000014u,c->r[0]); // 80268934
  c->r[0]=R32(c->r[13]+0xFFFF99ACu); // 80268938
  W32(c->r[13]+0xFFFF9998u,c->r[3]); // 8026893C
  cmpu(c,0,c->r[0],0x00000026u); // 80268940
  if (crb(c,1)) { goto L_802689C0; } // 80268944
  c->r[3]=0u+0x80420000u; // 80268948
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 8026894C
  c->r[3]=c->r[3]+0xFFFFFD14u; // 80268950
  c->r[3]=R32(c->r[3]+c->r[0]); // 80268954
  c->ctr=c->r[3]; // 80268958
  if (true) { switch (c->ctr) { case 0x80268960u: goto L_80268960; case 0x80268994u: goto L_80268994; case 0x8026899Cu: goto L_8026899C; case 0x802689B4u: goto L_802689B4; case 0x802689C0u: goto L_802689C0; default: break; } dispatch(c,c->ctr); return; } // 8026895C
L_80268960:;
  c->lr=0x80268964u; f_8026AD90(c); // 80268960
  c->r[3]=0u+0x80600000u; // 80268964
  c->r[4]=R32(c->r[13]+0xFFFF99B8u); // 80268968
  c->r[3]=c->r[3]+0xFFFF96A0u; // 8026896C
  W32(c->r[13]+0xFFFF99B8u,c->r[3]); // 80268970
  c->r[12]=R32(c->r[4]+0x00000028u); // 80268974
  cmps(c,0,(int32_t)c->r[12],0); // 80268978
  if (crb(c,2)) { goto L_8026898C; } // 8026897C
  c->r[3]=0u+0xFFFFFFFCu; // 80268980
  c->ctr=c->r[12]; // 80268984
  if (true) { c->lr=0x8026898Cu; dispatch(c,c->ctr); } // 80268988
L_8026898C:;
  c->lr=0x80268990u; f_8026922C(c); // 8026898C
  goto L_802689DC; // 80268990
L_80268994:;
  c->r[0]=0u+0x00000000u; // 80268994
  W32(c->r[13]+0xFFFF9998u,c->r[0]); // 80268998
L_8026899C:;
  c->r[3]=R32(c->r[13]+0xFFFF99B8u); // 8026899C
  c->r[0]=0u+0x00000001u; // 802689A0
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 802689A4
  c->r[3]=R32(c->r[13]+0xFFFF99B8u); // 802689A8
  c->lr=0x802689B0u; f_80269554(c); // 802689AC
  goto L_802689DC; // 802689B0
L_802689B4:;
  c->r[0]=R32(c->r[13]+0xFFFF97D8u); // 802689B4
  cmps(c,0,(int32_t)c->r[0],0); // 802689B8
  if (!crb(c,2)) { goto L_802689DC; } // 802689BC
L_802689C0:;
  c->r[0]=0u+0x00000000u; // 802689C0
  c->r[3]=0u+0x00000001u; // 802689C4
  W32(c->r[13]+0xFFFF9998u,c->r[0]); // 802689C8
  c->lr=0x802689D0u; f_8026C440(c); // 802689CC
  c->r[3]=0u+0x80270000u; // 802689D0
  c->r[3]=c->r[3]+0xFFFF8B94u; // 802689D4
  c->lr=0x802689DCu; f_8026C44C(c); // 802689D8
L_802689DC:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 802689DC
  c->lr=c->r[0]; // 802689E0
  c->r[1]=c->r[1]+0x00000010u; // 802689E4
  return; // 802689E8
}

// fn_802689EC
void f_802689EC(Ctx* __restrict c) {
  trace_call(0x802689ECu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802689EC
  c->r[0]=c->lr; // 802689F0
  c->r[3]=0u+0x80000000u; // 802689F4
  W32(c->r[1]+0x00000014u,c->r[0]); // 802689F8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 802689FC
  W32(c->r[1]+0x00000008u,c->r[30]); // 80268A00
  c->r[0]=R16(c->r[3]+0x000030E6u); // 80268A04
  cmpu(c,0,c->r[0],0x00008003u); // 80268A08
  if (!crb(c,2)) { goto L_80268ABC; } // 80268A0C
  c->r[4]=0u+0x80270000u; // 80268A10
  c->r[3]=0u+0x00000000u; // 80268A14
  c->r[4]=c->r[4]+0xFFFF8C78u; // 80268A18
  W32(c->r[13]+0xFFFF99BCu,c->r[4]); // 80268A1C
  c->lr=0x80268A24u; f_8026CD9C(c); // 80268A20
  c->lr=0x80268A28u; f_8025EA10(c); // 80268A24
  c->r[0]=R32(c->r[13]+0xFFFF9938u); // 80268A28
  c->r[31]=c->r[3]|c->r[3]; // 80268A2C
  cmpu(c,0,c->r[0],0x00000005u); // 80268A30
  if (crb(c,0)) { goto L_80268A40; } // 80268A34
  c->r[0]=0u+0x00000000u; // 80268A38
  W32(c->r[13]+0xFFFF9938u,c->r[0]); // 80268A3C
L_80268A40:;
  c->r[0]=R32(c->r[13]+0xFFFF9938u); // 80268A40
  c->r[30]=0u+0x80600000u; // 80268A44
  c->r[3]=R32(c->r[13]+0xFFFF9938u); // 80268A48
  c->r[30]=c->r[30]+0xFFFFE3E0u; // 80268A4C
  c->r[5]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 80268A50
  c->r[0]=R32(c->r[13]+0xFFFF9938u); // 80268A54
  c->r[6]=0u+0x00000025u; // 80268A58
  c->r[4]=0u+0x00000000u; // 80268A5C
  c->r[3]=(uint32_t)((int32_t)c->r[3]*(int32_t)20); // 80268A60
  c->r[5]=c->r[30]+c->r[5]; // 80268A64
  W32(c->r[5]+0x0000001Cu,c->r[6]); // 80268A68
  c->r[3]=c->r[30]+c->r[3]; // 80268A6C
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 80268A70
  W32(c->r[3]+0x00000020u,c->r[4]); // 80268A74
  c->r[3]=c->r[30]+c->r[0]; // 80268A78
  W32(c->r[3]+0x00000024u,c->r[4]); // 80268A7C
  c->lr=0x80268A84u; f_80262798(c); // 80268A80
  c->r[0]=R32(c->r[13]+0xFFFF9938u); // 80268A84
  c->r[4]=R32(c->r[13]+0xFFFF9938u); // 80268A88
  c->r[5]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 80268A8C
  c->r[0]=c->r[4]+0x00000001u; // 80268A90
  W32(c->r[13]+0xFFFF9938u,c->r[0]); // 80268A94
  c->r[4]=c->r[30]+c->r[5]; // 80268A98
  W32(c->r[4]+0x0000002Cu,c->r[3]); // 80268A9C
  c->r[3]=c->r[31]|c->r[31]; // 80268AA0
  c->lr=0x80268AA8u; f_8025EA38(c); // 80268AA4
  c->r[4]=0u+0x80270000u; // 80268AA8
  c->r[3]=0u+0x00020000u; // 80268AAC
  c->r[4]=c->r[4]+0xFFFF8D40u; // 80268AB0
  c->lr=0x80268AB8u; f_8026C75C(c); // 80268AB4
  goto L_80268B7C; // 80268AB8
L_80268ABC:;
  c->r[3]=0u+0x80600000u; // 80268ABC
  c->r[4]=0u+0x00000020u; // 80268AC0
  c->r[3]=c->r[3]+0xFFFF9740u; // 80268AC4
  c->lr=0x80268ACCu; f_8025A3D4(c); // 80268AC8
  c->r[4]=0u+0x80270000u; // 80268ACC
  c->r[3]=0u+0x00000000u; // 80268AD0
  c->r[4]=c->r[4]+0xFFFF8ED8u; // 80268AD4
  W32(c->r[13]+0xFFFF99BCu,c->r[4]); // 80268AD8
  c->lr=0x80268AE0u; f_8026CD9C(c); // 80268ADC
  c->lr=0x80268AE4u; f_8025EA10(c); // 80268AE0
  c->r[0]=R32(c->r[13]+0xFFFF9938u); // 80268AE4
  c->r[31]=c->r[3]|c->r[3]; // 80268AE8
  cmpu(c,0,c->r[0],0x00000005u); // 80268AEC
  if (crb(c,0)) { goto L_80268AFC; } // 80268AF0
  c->r[0]=0u+0x00000000u; // 80268AF4
  W32(c->r[13]+0xFFFF9938u,c->r[0]); // 80268AF8
L_80268AFC:;
  c->r[0]=R32(c->r[13]+0xFFFF9938u); // 80268AFC
  c->r[30]=0u+0x80600000u; // 80268B00
  c->r[3]=R32(c->r[13]+0xFFFF9938u); // 80268B04
  c->r[30]=c->r[30]+0xFFFFE3E0u; // 80268B08
  c->r[6]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 80268B0C
  c->r[0]=R32(c->r[13]+0xFFFF9938u); // 80268B10
  c->r[7]=0u+0x00000005u; // 80268B14
  c->r[5]=0u+0x00000000u; // 80268B18
  c->r[3]=(uint32_t)((int32_t)c->r[3]*(int32_t)20); // 80268B1C
  c->r[4]=0u+0x00000020u; // 80268B20
  c->r[6]=c->r[30]+c->r[6]; // 80268B24
  W32(c->r[6]+0x0000001Cu,c->r[7]); // 80268B28
  c->r[3]=c->r[30]+c->r[3]; // 80268B2C
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 80268B30
  W32(c->r[3]+0x00000020u,c->r[5]); // 80268B34
  c->r[3]=c->r[30]+c->r[0]; // 80268B38
  W32(c->r[3]+0x00000024u,c->r[4]); // 80268B3C
  c->lr=0x80268B44u; f_80262798(c); // 80268B40
  c->r[0]=R32(c->r[13]+0xFFFF9938u); // 80268B44
  c->r[4]=R32(c->r[13]+0xFFFF9938u); // 80268B48
  c->r[5]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 80268B4C
  c->r[0]=c->r[4]+0x00000001u; // 80268B50
  W32(c->r[13]+0xFFFF9938u,c->r[0]); // 80268B54
  c->r[4]=c->r[30]+c->r[5]; // 80268B58
  W32(c->r[4]+0x0000002Cu,c->r[3]); // 80268B5C
  c->r[3]=c->r[31]|c->r[31]; // 80268B60
  c->lr=0x80268B68u; f_8025EA38(c); // 80268B64
  c->r[3]=0u+0x80600000u; // 80268B68
  c->r[4]=0u+0x80270000u; // 80268B6C
  c->r[3]=c->r[3]+0xFFFF9740u; // 80268B70
  c->r[4]=c->r[4]+0xFFFF8FA8u; // 80268B74
  c->lr=0x80268B7Cu; f_8026B8F4(c); // 80268B78
L_80268B7C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 80268B7C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80268B80
  c->r[30]=R32(c->r[1]+0x00000008u); // 80268B84
  c->lr=c->r[0]; // 80268B88
  c->r[1]=c->r[1]+0x00000010u; // 80268B8C
  return; // 80268B90
}

// cbForStateReset
void f_80268B94(Ctx* __restrict c) {
  trace_call(0x80268B94u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80268B94
  c->r[0]=c->lr; // 80268B98
  cmpu(c,0,c->r[3],0x00000010u); // 80268B9C
  W32(c->r[1]+0x00000014u,c->r[0]); // 80268BA0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80268BA4
  if (!crb(c,2)) { goto L_80268BC4; } // 80268BA8
  c->r[3]=0u+0x01230000u; // 80268BAC
  c->r[4]=0u+0x80260000u; // 80268BB0
  c->r[3]=c->r[3]+0x00004568u; // 80268BB4
  c->r[4]=c->r[4]+0x00006E64u; // 80268BB8
  c->lr=0x80268BC0u; f_8026B24C(c); // 80268BBC
  goto L_80268C64; // 80268BC0
L_80268BC4:;
  cmpu(c,0,c->r[3],0x00000020u); // 80268BC4
  if (!crb(c,2)) { goto L_80268BE4; } // 80268BC8
  c->r[3]=0u+0x01230000u; // 80268BCC
  c->r[4]=0u+0x80260000u; // 80268BD0
  c->r[3]=c->r[3]+0x00004569u; // 80268BD4
  c->r[4]=c->r[4]+0x00006E64u; // 80268BD8
  c->lr=0x80268BE0u; f_8026B24C(c); // 80268BDC
  goto L_80268C64; // 80268BE0
L_80268BE4:;
  c->r[0]=rotl(c->r[3],0)&0x00000001u; cr0(c,c->r[0]); // 80268BE4
  if (crb(c,2)) { goto L_80268C48; } // 80268BE8
  c->lr=0x80268BF0u; f_802627A0(c); // 80268BEC
  c->r[0]=0u+0x00000000u; // 80268BF0
  W32(c->r[13]+0xFFFF9994u,c->r[4]); // 80268BF4
  c->r[31]=0u+0x80600000u; // 80268BF8
  W32(c->r[13]+0xFFFF9990u,c->r[3]); // 80268BFC
  c->r[3]=c->r[31]+0xFFFFE1C0u; // 80268C00
  W32(c->r[13]+0xFFFF999Cu,c->r[0]); // 80268C04
  W32(c->r[13]+0xFFFF994Cu,c->r[0]); // 80268C08
  c->lr=0x80268C10u; f_802593E4(c); // 80268C0C
  c->r[4]=0u+0x80000000u; // 80268C10
  c->r[7]=0u+0x80270000u; // 80268C14
  c->r[0]=R32(c->r[4]+0x000000F8u); // 80268C18
  c->r[3]=0u+0x10620000u; // 80268C1C
  c->r[4]=c->r[3]+0x00004DD3u; // 80268C20
  c->r[7]=c->r[7]+0xFFFF89ECu; // 80268C24
  c->r[0]=rotl(c->r[0],30)&0x3FFFFFFFu; // 80268C28
  c->r[3]=c->r[31]+0xFFFFE1C0u; // 80268C2C
  c->r[0]=(uint32_t)(((uint64_t)c->r[4]*(uint64_t)c->r[0])>>32); // 80268C30
  c->r[5]=0u+0x00000000u; // 80268C34
  c->r[0]=rotl(c->r[0],26)&0x03FFFFFFu; // 80268C38
  c->r[6]=(uint32_t)((int32_t)c->r[0]*(int32_t)100); // 80268C3C
  c->lr=0x80268C44u; f_80259644(c); // 80268C40
  goto L_80268C64; // 80268C44
L_80268C48:;
  c->r[3]=0u+0x00000027u; // 80268C48
  c->r[4]=0u+0x00000000u; // 80268C4C
  c->r[5]=0u+0x00000000u; // 80268C50
  c->lr=0x80268C58u; f_802668A8(c); // 80268C54
  c->r[3]=0u+0x80260000u; // 80268C58
  c->r[3]=c->r[3]+0x00007058u; // 80268C5C
  c->lr=0x80268C64u; f_8026C2D8(c); // 80268C60
L_80268C64:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 80268C64
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80268C68
  c->lr=c->r[0]; // 80268C6C
  c->r[1]=c->r[1]+0x00000010u; // 80268C70
  return; // 80268C74
}

// stateDownRotation
void f_80268C78(Ctx* __restrict c) {
  trace_call(0x80268C78u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80268C78
  c->r[0]=c->lr; // 80268C7C
  c->r[3]=0u+0x00000000u; // 80268C80
  W32(c->r[1]+0x00000014u,c->r[0]); // 80268C84
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80268C88
  W32(c->r[1]+0x00000008u,c->r[30]); // 80268C8C
  c->lr=0x80268C94u; f_8026CD9C(c); // 80268C90
  c->lr=0x80268C98u; f_8025EA10(c); // 80268C94
  c->r[0]=R32(c->r[13]+0xFFFF9938u); // 80268C98
  c->r[31]=c->r[3]|c->r[3]; // 80268C9C
  cmpu(c,0,c->r[0],0x00000005u); // 80268CA0
  if (crb(c,0)) { goto L_80268CB0; } // 80268CA4
  c->r[0]=0u+0x00000000u; // 80268CA8
  W32(c->r[13]+0xFFFF9938u,c->r[0]); // 80268CAC
L_80268CB0:;
  c->r[0]=R32(c->r[13]+0xFFFF9938u); // 80268CB0
  c->r[30]=0u+0x80600000u; // 80268CB4
  c->r[3]=R32(c->r[13]+0xFFFF9938u); // 80268CB8
  c->r[30]=c->r[30]+0xFFFFE3E0u; // 80268CBC
  c->r[5]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 80268CC0
  c->r[0]=R32(c->r[13]+0xFFFF9938u); // 80268CC4
  c->r[6]=0u+0x00000025u; // 80268CC8
  c->r[4]=0u+0x00000000u; // 80268CCC
  c->r[3]=(uint32_t)((int32_t)c->r[3]*(int32_t)20); // 80268CD0
  c->r[5]=c->r[30]+c->r[5]; // 80268CD4
  W32(c->r[5]+0x0000001Cu,c->r[6]); // 80268CD8
  c->r[3]=c->r[30]+c->r[3]; // 80268CDC
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 80268CE0
  W32(c->r[3]+0x00000020u,c->r[4]); // 80268CE4
  c->r[3]=c->r[30]+c->r[0]; // 80268CE8
  W32(c->r[3]+0x00000024u,c->r[4]); // 80268CEC
  c->lr=0x80268CF4u; f_80262798(c); // 80268CF0
  c->r[0]=R32(c->r[13]+0xFFFF9938u); // 80268CF4
  c->r[4]=R32(c->r[13]+0xFFFF9938u); // 80268CF8
  c->r[5]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 80268CFC
  c->r[0]=c->r[4]+0x00000001u; // 80268D00
  W32(c->r[13]+0xFFFF9938u,c->r[0]); // 80268D04
  c->r[4]=c->r[30]+c->r[5]; // 80268D08
  W32(c->r[4]+0x0000002Cu,c->r[3]); // 80268D0C
  c->r[3]=c->r[31]|c->r[31]; // 80268D10
  c->lr=0x80268D18u; f_8025EA38(c); // 80268D14
  c->r[4]=0u+0x80270000u; // 80268D18
  c->r[3]=0u+0x00020000u; // 80268D1C
  c->r[4]=c->r[4]+0xFFFF8D40u; // 80268D20
  c->lr=0x80268D28u; f_8026C75C(c); // 80268D24
  c->r[0]=R32(c->r[1]+0x00000014u); // 80268D28
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80268D2C
  c->r[30]=R32(c->r[1]+0x00000008u); // 80268D30
  c->lr=c->r[0]; // 80268D34
  c->r[1]=c->r[1]+0x00000010u; // 80268D38
  return; // 80268D3C
}

// fn_80268D40
void f_80268D40(Ctx* __restrict c) {
  trace_call(0x80268D40u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80268D40
  c->r[0]=c->lr; // 80268D44
  W32(c->r[1]+0x00000014u,c->r[0]); // 80268D48
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80268D4C
  W32(c->r[1]+0x00000008u,c->r[30]); // 80268D50
  c->r[30]=c->r[3]|c->r[3]; // 80268D54
  c->lr=0x80268D5Cu; f_8025EA10(c); // 80268D58
  c->r[0]=R32(c->r[13]+0xFFFF9938u); // 80268D5C
  cmps(c,0,(int32_t)c->r[0],0); // 80268D60
  if (!crb(c,2)) { goto L_80268D78; } // 80268D64
  c->r[4]=0u+0x80600000u; // 80268D68
  c->r[4]=c->r[4]+0xFFFFE3E0u; // 80268D6C
  W32(c->r[4]+0x00000078u,c->r[30]); // 80268D70
  goto L_80268D94; // 80268D74
L_80268D78:;
  c->r[4]=R32(c->r[13]+0xFFFF9938u); // 80268D78
  c->r[5]=0u+0x80600000u; // 80268D7C
  c->r[5]=c->r[5]+0xFFFFE3E0u; // 80268D80
  c->r[0]=c->r[4]+0xFFFFFFFFu; // 80268D84
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 80268D88
  c->r[4]=c->r[5]+c->r[0]; // 80268D8C
  W32(c->r[4]+0x00000028u,c->r[30]); // 80268D90
L_80268D94:;
  c->lr=0x80268D98u; f_8025EA38(c); // 80268D94
  cmpu(c,0,c->r[30],0x00000010u); // 80268D98
  if (!crb(c,2)) { goto L_80268DB8; } // 80268D9C
  c->r[3]=0u+0x01230000u; // 80268DA0
  c->r[4]=0u+0x80260000u; // 80268DA4
  c->r[3]=c->r[3]+0x00004568u; // 80268DA8
  c->r[4]=c->r[4]+0x00006E64u; // 80268DAC
  c->lr=0x80268DB4u; f_8026B24C(c); // 80268DB0
  goto L_80268EC0; // 80268DB4
L_80268DB8:;
  cmpu(c,0,c->r[30],0x00000020u); // 80268DB8
  if (!crb(c,2)) { goto L_80268DD8; } // 80268DBC
  c->r[3]=0u+0x01230000u; // 80268DC0
  c->r[4]=0u+0x80260000u; // 80268DC4
  c->r[3]=c->r[3]+0x00004569u; // 80268DC8
  c->r[4]=c->r[4]+0x00006E64u; // 80268DCC
  c->lr=0x80268DD4u; f_8026B24C(c); // 80268DD0
  goto L_80268EC0; // 80268DD4
L_80268DD8:;
  c->r[0]=rotl(c->r[30],0)&0x00000001u; cr0(c,c->r[0]); // 80268DD8
  if (crb(c,2)) { goto L_80268EA4; } // 80268DDC
  c->r[3]=0u+0x80600000u; // 80268DE0
  c->r[4]=0u+0x00000020u; // 80268DE4
  c->r[3]=c->r[3]+0xFFFF9740u; // 80268DE8
  c->lr=0x80268DF0u; f_8025A3D4(c); // 80268DEC
  c->r[4]=0u+0x80270000u; // 80268DF0
  c->r[3]=0u+0x00000000u; // 80268DF4
  c->r[4]=c->r[4]+0xFFFF8ED8u; // 80268DF8
  W32(c->r[13]+0xFFFF99BCu,c->r[4]); // 80268DFC
  c->lr=0x80268E04u; f_8026CD9C(c); // 80268E00
  c->lr=0x80268E08u; f_8025EA10(c); // 80268E04
  c->r[0]=R32(c->r[13]+0xFFFF9938u); // 80268E08
  c->r[31]=c->r[3]|c->r[3]; // 80268E0C
  cmpu(c,0,c->r[0],0x00000005u); // 80268E10
  if (crb(c,0)) { goto L_80268E20; } // 80268E14
  c->r[0]=0u+0x00000000u; // 80268E18
  W32(c->r[13]+0xFFFF9938u,c->r[0]); // 80268E1C
L_80268E20:;
  c->r[0]=R32(c->r[13]+0xFFFF9938u); // 80268E20
  c->r[30]=0u+0x80600000u; // 80268E24
  c->r[3]=R32(c->r[13]+0xFFFF9938u); // 80268E28
  c->r[30]=c->r[30]+0xFFFFE3E0u; // 80268E2C
  c->r[6]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 80268E30
  c->r[0]=R32(c->r[13]+0xFFFF9938u); // 80268E34
  c->r[7]=0u+0x00000005u; // 80268E38
  c->r[5]=0u+0x00000000u; // 80268E3C
  c->r[3]=(uint32_t)((int32_t)c->r[3]*(int32_t)20); // 80268E40
  c->r[4]=0u+0x00000020u; // 80268E44
  c->r[6]=c->r[30]+c->r[6]; // 80268E48
  W32(c->r[6]+0x0000001Cu,c->r[7]); // 80268E4C
  c->r[3]=c->r[30]+c->r[3]; // 80268E50
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 80268E54
  W32(c->r[3]+0x00000020u,c->r[5]); // 80268E58
  c->r[3]=c->r[30]+c->r[0]; // 80268E5C
  W32(c->r[3]+0x00000024u,c->r[4]); // 80268E60
  c->lr=0x80268E68u; f_80262798(c); // 80268E64
  c->r[0]=R32(c->r[13]+0xFFFF9938u); // 80268E68
  c->r[4]=R32(c->r[13]+0xFFFF9938u); // 80268E6C
  c->r[5]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 80268E70
  c->r[0]=c->r[4]+0x00000001u; // 80268E74
  W32(c->r[13]+0xFFFF9938u,c->r[0]); // 80268E78
  c->r[4]=c->r[30]+c->r[5]; // 80268E7C
  W32(c->r[4]+0x0000002Cu,c->r[3]); // 80268E80
  c->r[3]=c->r[31]|c->r[31]; // 80268E84
  c->lr=0x80268E8Cu; f_8025EA38(c); // 80268E88
  c->r[3]=0u+0x80600000u; // 80268E8C
  c->r[4]=0u+0x80270000u; // 80268E90
  c->r[3]=c->r[3]+0xFFFF9740u; // 80268E94
  c->r[4]=c->r[4]+0xFFFF8FA8u; // 80268E98
  c->lr=0x80268EA0u; f_8026B8F4(c); // 80268E9C
  goto L_80268EC0; // 80268EA0
L_80268EA4:;
  c->r[3]=0u+0x00000027u; // 80268EA4
  c->r[4]=0u+0x00000000u; // 80268EA8
  c->r[5]=0u+0x00000000u; // 80268EAC
  c->lr=0x80268EB4u; f_802668A8(c); // 80268EB0
  c->r[3]=0u+0x80260000u; // 80268EB4
  c->r[3]=c->r[3]+0x00007058u; // 80268EB8
  c->lr=0x80268EC0u; f_8026C2D8(c); // 80268EBC
L_80268EC0:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 80268EC0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80268EC4
  c->r[30]=R32(c->r[1]+0x00000008u); // 80268EC8
  c->lr=c->r[0]; // 80268ECC
  c->r[1]=c->r[1]+0x00000010u; // 80268ED0
  return; // 80268ED4
}

// fn_80268ED8
void f_80268ED8(Ctx* __restrict c) {
  trace_call(0x80268ED8u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80268ED8
  c->r[0]=c->lr; // 80268EDC
  c->r[3]=0u+0x00000000u; // 80268EE0
  W32(c->r[1]+0x00000014u,c->r[0]); // 80268EE4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80268EE8
  W32(c->r[1]+0x00000008u,c->r[30]); // 80268EEC
  c->lr=0x80268EF4u; f_8026CD9C(c); // 80268EF0
  c->lr=0x80268EF8u; f_8025EA10(c); // 80268EF4
  c->r[0]=R32(c->r[13]+0xFFFF9938u); // 80268EF8
  c->r[31]=c->r[3]|c->r[3]; // 80268EFC
  cmpu(c,0,c->r[0],0x00000005u); // 80268F00
  if (crb(c,0)) { goto L_80268F10; } // 80268F04
  c->r[0]=0u+0x00000000u; // 80268F08
  W32(c->r[13]+0xFFFF9938u,c->r[0]); // 80268F0C
L_80268F10:;
  c->r[0]=R32(c->r[13]+0xFFFF9938u); // 80268F10
  c->r[30]=0u+0x80600000u; // 80268F14
  c->r[3]=R32(c->r[13]+0xFFFF9938u); // 80268F18
  c->r[30]=c->r[30]+0xFFFFE3E0u; // 80268F1C
  c->r[6]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 80268F20
  c->r[0]=R32(c->r[13]+0xFFFF9938u); // 80268F24
  c->r[7]=0u+0x00000005u; // 80268F28
  c->r[5]=0u+0x00000000u; // 80268F2C
  c->r[3]=(uint32_t)((int32_t)c->r[3]*(int32_t)20); // 80268F30
  c->r[4]=0u+0x00000020u; // 80268F34
  c->r[6]=c->r[30]+c->r[6]; // 80268F38
  W32(c->r[6]+0x0000001Cu,c->r[7]); // 80268F3C
  c->r[3]=c->r[30]+c->r[3]; // 80268F40
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 80268F44
  W32(c->r[3]+0x00000020u,c->r[5]); // 80268F48
  c->r[3]=c->r[30]+c->r[0]; // 80268F4C
  W32(c->r[3]+0x00000024u,c->r[4]); // 80268F50
  c->lr=0x80268F58u; f_80262798(c); // 80268F54
  c->r[0]=R32(c->r[13]+0xFFFF9938u); // 80268F58
  c->r[4]=R32(c->r[13]+0xFFFF9938u); // 80268F5C
  c->r[5]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 80268F60
  c->r[0]=c->r[4]+0x00000001u; // 80268F64
  W32(c->r[13]+0xFFFF9938u,c->r[0]); // 80268F68
  c->r[4]=c->r[30]+c->r[5]; // 80268F6C
  W32(c->r[4]+0x0000002Cu,c->r[3]); // 80268F70
  c->r[3]=c->r[31]|c->r[31]; // 80268F74
  c->lr=0x80268F7Cu; f_8025EA38(c); // 80268F78
  c->r[3]=0u+0x80600000u; // 80268F7C
  c->r[4]=0u+0x80270000u; // 80268F80
  c->r[3]=c->r[3]+0xFFFF9740u; // 80268F84
  c->r[4]=c->r[4]+0xFFFF8FA8u; // 80268F88
  c->lr=0x80268F90u; f_8026B8F4(c); // 80268F8C
  c->r[0]=R32(c->r[1]+0x00000014u); // 80268F90
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80268F94
  c->r[30]=R32(c->r[1]+0x00000008u); // 80268F98
  c->lr=c->r[0]; // 80268F9C
  c->r[1]=c->r[1]+0x00000010u; // 80268FA0
  return; // 80268FA4
}

// cbForStateCoverClosed
void f_80268FA8(Ctx* __restrict c) {
  trace_call(0x80268FA8u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80268FA8
  c->r[0]=c->lr; // 80268FAC
  W32(c->r[1]+0x00000014u,c->r[0]); // 80268FB0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80268FB4
  c->r[31]=c->r[3]|c->r[3]; // 80268FB8
  c->lr=0x80268FC0u; f_8025EA10(c); // 80268FBC
  c->r[0]=R32(c->r[13]+0xFFFF9938u); // 80268FC0
  cmps(c,0,(int32_t)c->r[0],0); // 80268FC4
  if (!crb(c,2)) { goto L_80268FDC; } // 80268FC8
  c->r[4]=0u+0x80600000u; // 80268FCC
  c->r[4]=c->r[4]+0xFFFFE3E0u; // 80268FD0
  W32(c->r[4]+0x00000078u,c->r[31]); // 80268FD4
  goto L_80268FF4; // 80268FD8
L_80268FDC:;
  c->r[0]=R32(c->r[13]+0xFFFF9938u); // 80268FDC
  c->r[4]=0u+0x80600000u; // 80268FE0
  c->r[4]=c->r[4]+0xFFFFE3E0u; // 80268FE4
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 80268FE8
  c->r[4]=c->r[4]+c->r[0]; // 80268FEC
  W32(c->r[4]+0x00000014u,c->r[31]); // 80268FF0
L_80268FF4:;
  c->lr=0x80268FF8u; f_8025EA38(c); // 80268FF4
  cmpu(c,0,c->r[31],0x00000010u); // 80268FF8
  if (!crb(c,2)) { goto L_80269018; } // 80268FFC
  c->r[3]=0u+0x01230000u; // 80269000
  c->r[4]=0u+0x80260000u; // 80269004
  c->r[3]=c->r[3]+0x00004568u; // 80269008
  c->r[4]=c->r[4]+0x00006E64u; // 8026900C
  c->lr=0x80269014u; f_8026B24C(c); // 80269010
  goto L_8026906C; // 80269014
L_80269018:;
  cmpu(c,0,c->r[31],0x00000020u); // 80269018
  if (!crb(c,2)) { goto L_80269038; } // 8026901C
  c->r[3]=0u+0x01230000u; // 80269020
  c->r[4]=0u+0x80260000u; // 80269024
  c->r[3]=c->r[3]+0x00004569u; // 80269028
  c->r[4]=c->r[4]+0x00006E64u; // 8026902C
  c->lr=0x80269034u; f_8026B24C(c); // 80269030
  goto L_8026906C; // 80269034
L_80269038:;
  c->r[0]=rotl(c->r[31],0)&0x00000001u; cr0(c,c->r[0]); // 80269038
  if (crb(c,2)) { goto L_80269050; } // 8026903C
  c->r[0]=0u+0x00000000u; // 80269040
  W32(c->r[13]+0xFFFF9950u,c->r[0]); // 80269044
  c->lr=0x8026904Cu; f_80267A38(c); // 80269048
  goto L_8026906C; // 8026904C
L_80269050:;
  c->r[3]=0u+0x00000027u; // 80269050
  c->r[4]=0u+0x00000000u; // 80269054
  c->r[5]=0u+0x00000000u; // 80269058
  c->lr=0x80269060u; f_802668A8(c); // 8026905C
  c->r[3]=0u+0x80260000u; // 80269060
  c->r[3]=c->r[3]+0x00007058u; // 80269064
  c->lr=0x8026906Cu; f_8026C2D8(c); // 80269068
L_8026906C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8026906C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80269070
  c->lr=c->r[0]; // 80269074
  c->r[1]=c->r[1]+0x00000010u; // 80269078
  return; // 8026907C
}

// cbForPrepareCoverRegister
void f_80269080(Ctx* __restrict c) {
  trace_call(0x80269080u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80269080
  c->r[0]=c->lr; // 80269084
  W32(c->r[1]+0x00000014u,c->r[0]); // 80269088
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8026908C
  c->r[31]=0u+0x00000000u; // 80269090
  W32(c->r[13]+0xFFFF996Cu,c->r[31]); // 80269094
  c->r[0]=R32(c->r[13]+0xFFFF9960u); // 80269098
  cmps(c,0,(int32_t)c->r[0],0); // 8026909C
  if (crb(c,2)) { goto L_80269128; } // 802690A0
  c->lr=0x802690A8u; f_8026CC08(c); // 802690A4
  c->r[0]=rotl(c->r[3],0)&0x00000001u; cr0(c,c->r[0]); // 802690A8
  if (!crb(c,2)) { goto L_802691F4; } // 802690AC
  c->r[3]=0u+0x80600000u; // 802690B0
  c->r[3]=c->r[3]+0xFFFF9700u; // 802690B4
  c->lr=0x802690BCu; f_80259738(c); // 802690B8
  W32(c->r[13]+0xFFFF9960u,c->r[31]); // 802690BC
  W32(c->r[13]+0xFFFF9960u,c->r[31]); // 802690C0
  c->r[0]=R32(c->r[13]+0xFFFF99ACu); // 802690C4
  cmpu(c,0,c->r[0],0x00000003u); // 802690C8
  if (!crb(c,2)) { goto L_802690D8; } // 802690CC
  c->r[0]=0u+0x00000001u; // 802690D0
  W32(c->r[13]+0xFFFF9968u,c->r[0]); // 802690D4
L_802690D8:;
  c->r[0]=R32(c->r[13]+0xFFFF9998u); // 802690D8
  cmpu(c,0,c->r[0],0x00000002u); // 802690DC
  if (!crb(c,2)) { goto L_802690FC; } // 802690E0
  c->r[3]=R32(c->r[13]+0xFFFF99B8u); // 802690E4
  cmps(c,0,(int32_t)c->r[3],0); // 802690E8
  if (crb(c,2)) { goto L_802691F4; } // 802690EC
  c->r[0]=0u+0x0000000Cu; // 802690F0
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 802690F4
  goto L_802691F4; // 802690F8
L_802690FC:;
  c->lr=0x80269100u; f_8026CD94(c); // 802690FC
  c->r[3]=R32(c->r[13]+0xFFFF99B8u); // 80269100
  cmps(c,0,(int32_t)c->r[3],0); // 80269104
  if (crb(c,2)) { goto L_8026911C; } // 80269108
  c->r[0]=0u+0x00000003u; // 8026910C
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 80269110
  c->lr=0x80269118u; f_80268928(c); // 80269114
  goto L_802691F4; // 80269118
L_8026911C:;
  c->r[0]=0u+0x00000007u; // 8026911C
  W32(c->r[13]+0xFFFF994Cu,c->r[0]); // 80269120
  goto L_802691F4; // 80269124
L_80269128:;
  c->lr=0x8026912Cu; f_8026CC08(c); // 80269128
  c->r[0]=rotl(c->r[3],0)&0x00000001u; cr0(c,c->r[0]); // 8026912C
  if (crb(c,2)) { goto L_8026916C; } // 80269130
  c->r[0]=R32(c->r[13]+0xFFFF9998u); // 80269134
  c->r[3]=0u+0x00000001u; // 80269138
  W32(c->r[13]+0xFFFF995Cu,c->r[31]); // 8026913C
  cmpu(c,0,c->r[0],0x00000002u); // 80269140
  W32(c->r[13]+0xFFFF9960u,c->r[3]); // 80269144
  if (!crb(c,2)) { goto L_8026915C; } // 80269148
  c->r[3]=R32(c->r[13]+0xFFFF99B8u); // 8026914C
  c->r[0]=0u+0x0000000Cu; // 80269150
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 80269154
  goto L_802691F4; // 80269158
L_8026915C:;
  c->r[3]=R32(c->r[13]+0xFFFF99B8u); // 8026915C
  c->r[0]=0u+0x00000005u; // 80269160
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 80269164
  goto L_802691F4; // 80269168
L_8026916C:;
  c->lr=0x80269170u; f_8026CC08(c); // 8026916C
  c->r[0]=rotl(c->r[3],0)&0x00000004u; cr0(c,c->r[0]); // 80269170
  if (crb(c,2)) { goto L_802691F4; } // 80269174
  c->r[3]=0u+0x80600000u; // 80269178
  c->r[3]=c->r[3]+0xFFFF9700u; // 8026917C
  c->lr=0x80269184u; f_80259738(c); // 80269180
  W32(c->r[13]+0xFFFF995Cu,c->r[31]); // 80269184
  c->r[3]=0u+0x00000000u; // 80269188
  c->lr=0x80269190u; f_8026CD9C(c); // 8026918C
  W32(c->r[13]+0xFFFF9960u,c->r[31]); // 80269190
  c->r[0]=R32(c->r[13]+0xFFFF99ACu); // 80269194
  cmpu(c,0,c->r[0],0x00000003u); // 80269198
  if (!crb(c,2)) { goto L_802691A8; } // 8026919C
  c->r[0]=0u+0x00000001u; // 802691A0
  W32(c->r[13]+0xFFFF9968u,c->r[0]); // 802691A4
L_802691A8:;
  c->r[0]=R32(c->r[13]+0xFFFF9998u); // 802691A8
  cmpu(c,0,c->r[0],0x00000002u); // 802691AC
  if (!crb(c,2)) { goto L_802691CC; } // 802691B0
  c->r[3]=R32(c->r[13]+0xFFFF99B8u); // 802691B4
  cmps(c,0,(int32_t)c->r[3],0); // 802691B8
  if (crb(c,2)) { goto L_802691F4; } // 802691BC
  c->r[0]=0u+0x0000000Cu; // 802691C0
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 802691C4
  goto L_802691F4; // 802691C8
L_802691CC:;
  c->lr=0x802691D0u; f_8026CD94(c); // 802691CC
  c->r[3]=R32(c->r[13]+0xFFFF99B8u); // 802691D0
  cmps(c,0,(int32_t)c->r[3],0); // 802691D4
  if (crb(c,2)) { goto L_802691EC; } // 802691D8
  c->r[0]=0u+0x00000003u; // 802691DC
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 802691E0
  c->lr=0x802691E8u; f_80268928(c); // 802691E4
  goto L_802691F4; // 802691E8
L_802691EC:;
  c->r[0]=0u+0x00000007u; // 802691EC
  W32(c->r[13]+0xFFFF994Cu,c->r[0]); // 802691F0
L_802691F4:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 802691F4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 802691F8
  c->lr=c->r[0]; // 802691FC
  c->r[1]=c->r[1]+0x00000010u; // 80269200
  return; // 80269204
}

// CoverAlarmHandler
void f_80269208(Ctx* __restrict c) {
  trace_call(0x80269208u);
  c->r[0]=R32(c->r[13]+0xFFFF996Cu); // 80269208
  cmps(c,0,(int32_t)c->r[0],0); // 8026920C
  if (!crb(c,2)) return; // 80269210
  c->r[0]=0u+0x00000001u; // 80269214
  c->r[3]=0u+0x80270000u; // 80269218
  W32(c->r[13]+0xFFFF996Cu,c->r[0]); // 8026921C
  c->r[3]=c->r[3]+0xFFFF9080u; // 80269220
  f_8026CC18(c); return; // 80269224
  return; // 80269228
}

// stateReady
void f_8026922C(Ctx* __restrict c) {
  trace_call(0x8026922Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8026922C
  c->r[0]=c->lr; // 80269230
  W32(c->r[1]+0x00000014u,c->r[0]); // 80269234
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80269238
  c->lr=0x80269240u; f_8026AED0(c); // 8026923C
  cmps(c,0,(int32_t)c->r[3],0); // 80269240
  if (!crb(c,2)) { goto L_80269254; } // 80269244
  c->r[0]=0u+0x00000000u; // 80269248
  W32(c->r[13]+0xFFFF99B8u,c->r[0]); // 8026924C
  goto L_80269540; // 80269250
L_80269254:;
  c->r[0]=R32(c->r[13]+0xFFFF993Cu); // 80269254
  cmps(c,0,(int32_t)c->r[0],0); // 80269258
  if (crb(c,2)) { goto L_80269274; } // 8026925C
  c->r[3]=0u+0x00000001u; // 80269260
  c->r[0]=0u+0x00000000u; // 80269264
  W32(c->r[13]+0xFFFF9940u,c->r[3]); // 80269268
  W32(c->r[13]+0xFFFF99B8u,c->r[0]); // 8026926C
  goto L_80269540; // 80269270
L_80269274:;
  c->lr=0x80269278u; f_8026AE30(c); // 80269274
  c->r[0]=R32(c->r[13]+0xFFFF9944u); // 80269278
  W32(c->r[13]+0xFFFF99B8u,c->r[3]); // 8026927C
  cmps(c,0,(int32_t)c->r[0],0); // 80269280
  if (crb(c,2)) { goto L_802692C0; } // 80269284
  c->r[0]=0u+0xFFFFFFFFu; // 80269288
  c->r[5]=0u+0x80600000u; // 8026928C
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 80269290
  c->r[5]=c->r[5]+0xFFFF96A0u; // 80269294
  c->r[4]=R32(c->r[13]+0xFFFF99B8u); // 80269298
  W32(c->r[13]+0xFFFF99B8u,c->r[5]); // 8026929C
  c->r[12]=R32(c->r[4]+0x00000028u); // 802692A0
  cmps(c,0,(int32_t)c->r[12],0); // 802692A4
  if (crb(c,2)) { goto L_802692B8; } // 802692A8
  c->r[3]=0u+0xFFFFFFFFu; // 802692AC
  c->ctr=c->r[12]; // 802692B0
  if (true) { c->lr=0x802692B8u; dispatch(c,c->ctr); } // 802692B4
L_802692B8:;
  c->lr=0x802692BCu; f_8026922C(c); // 802692B8
  goto L_80269540; // 802692BC
L_802692C0:;
  c->r[0]=R32(c->r[3]+0x00000008u); // 802692C0
  W32(c->r[13]+0xFFFF99ACu,c->r[0]); // 802692C4
  c->r[0]=R32(c->r[13]+0xFFFF99ACu); // 802692C8
  cmpu(c,0,c->r[0],0x00000020u); // 802692CC
  if (crb(c,2)) { goto L_802692EC; } // 802692D0
  c->r[0]=R32(c->r[13]+0xFFFF99ACu); // 802692D4
  cmpu(c,0,c->r[0],0x0000000Eu); // 802692D8
  if (crb(c,2)) { goto L_802692EC; } // 802692DC
  c->r[0]=R32(c->r[13]+0xFFFF99ACu); // 802692E0
  cmpu(c,0,c->r[0],0x00000023u); // 802692E4
  if (!crb(c,2)) { goto L_802692F4; } // 802692E8
L_802692EC:;
  c->r[0]=0u+0x00000000u; // 802692EC
  W32(c->r[13]+0xFFFF994Cu,c->r[0]); // 802692F0
L_802692F4:;
  c->r[0]=R32(c->r[13]+0xFFFF994Cu); // 802692F4
  cmps(c,0,(int32_t)c->r[0],0); // 802692F8
  if (crb(c,2)) { goto L_802694DC; } // 802692FC
  c->r[0]=R32(c->r[13]+0xFFFF994Cu); // 80269300
  cmps(c,0,(int32_t)c->r[0],4); // 80269304
  if (crb(c,2)) { goto L_80269434; } // 80269308
  if (!crb(c,0)) { goto L_80269328; } // 8026930C
  cmps(c,0,(int32_t)c->r[0],2); // 80269310
  if (crb(c,2)) { goto L_8026933C; } // 80269314
  if (!crb(c,0)) { goto L_802693B8; } // 80269318
  cmps(c,0,(int32_t)c->r[0],1); // 8026931C
  if (!crb(c,0)) { goto L_802694B0; } // 80269320
  goto L_802694D0; // 80269324
L_80269328:;
  cmps(c,0,(int32_t)c->r[0],8); // 80269328
  if (!crb(c,0)) { goto L_802694D0; } // 8026932C
  cmps(c,0,(int32_t)c->r[0],6); // 80269330
  if (!crb(c,0)) { goto L_802694B0; } // 80269334
  goto L_802694C0; // 80269338
L_8026933C:;
  c->r[0]=0u+0x0000000Bu; // 8026933C
  c->r[4]=0u+0x00000001u; // 80269340
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 80269344
  c->r[0]=R32(c->r[13]+0xFFFF995Cu); // 80269348
  W32(c->r[13]+0xFFFF9998u,c->r[4]); // 8026934C
  cmps(c,0,(int32_t)c->r[0],0); // 80269350
  if (!crb(c,2)) { goto L_802694D0; } // 80269354
  c->r[0]=R32(c->r[13]+0xFFFF9960u); // 80269358
  cmps(c,0,(int32_t)c->r[0],0); // 8026935C
  if (!crb(c,2)) { goto L_802694D0; } // 80269360
  c->r[31]=0u+0x80600000u; // 80269364
  W32(c->r[13]+0xFFFF995Cu,c->r[4]); // 80269368
  c->r[3]=c->r[31]+0xFFFF9700u; // 8026936C
  c->lr=0x80269374u; f_802593E4(c); // 80269370
  c->lr=0x80269378u; f_80262798(c); // 80269374
  c->r[5]=0u+0x80000000u; // 80269378
  c->r[4]=0u+0x10620000u; // 8026937C
  c->r[0]=R32(c->r[5]+0x000000F8u); // 80269380
  c->r[9]=0u+0x80270000u; // 80269384
  c->r[6]=c->r[3]|c->r[3]; // 80269388
  c->r[4]=c->r[4]+0x00004DD3u; // 8026938C
  c->r[0]=rotl(c->r[0],30)&0x3FFFFFFFu; // 80269390
  c->r[3]=c->r[31]+0xFFFF9700u; // 80269394
  c->r[0]=(uint32_t)(((uint64_t)c->r[4]*(uint64_t)c->r[0])>>32); // 80269398
  c->r[9]=c->r[9]+0xFFFF9208u; // 8026939C
  c->r[5]=0u+0x00000000u; // 802693A0
  c->r[7]=0u+0x00000000u; // 802693A4
  c->r[0]=rotl(c->r[0],26)&0x03FFFFFFu; // 802693A8
  c->r[8]=(uint32_t)((int32_t)c->r[0]*(int32_t)100); // 802693AC
  c->lr=0x802693B4u; f_802596B4(c); // 802693B0
  goto L_802694D0; // 802693B4
L_802693B8:;
  c->r[0]=0u+0x00000004u; // 802693B8
  c->r[4]=0u+0x00000001u; // 802693BC
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 802693C0
  c->r[0]=R32(c->r[13]+0xFFFF995Cu); // 802693C4
  W32(c->r[13]+0xFFFF9998u,c->r[4]); // 802693C8
  cmps(c,0,(int32_t)c->r[0],0); // 802693CC
  if (!crb(c,2)) { goto L_802694D0; } // 802693D0
  c->r[0]=R32(c->r[13]+0xFFFF9960u); // 802693D4
  cmps(c,0,(int32_t)c->r[0],0); // 802693D8
  if (!crb(c,2)) { goto L_802694D0; } // 802693DC
  c->r[31]=0u+0x80600000u; // 802693E0
  W32(c->r[13]+0xFFFF995Cu,c->r[4]); // 802693E4
  c->r[3]=c->r[31]+0xFFFF9700u; // 802693E8
  c->lr=0x802693F0u; f_802593E4(c); // 802693EC
  c->lr=0x802693F4u; f_80262798(c); // 802693F0
  c->r[5]=0u+0x80000000u; // 802693F4
  c->r[4]=0u+0x10620000u; // 802693F8
  c->r[0]=R32(c->r[5]+0x000000F8u); // 802693FC
  c->r[9]=0u+0x80270000u; // 80269400
  c->r[6]=c->r[3]|c->r[3]; // 80269404
  c->r[4]=c->r[4]+0x00004DD3u; // 80269408
  c->r[0]=rotl(c->r[0],30)&0x3FFFFFFFu; // 8026940C
  c->r[3]=c->r[31]+0xFFFF9700u; // 80269410
  c->r[0]=(uint32_t)(((uint64_t)c->r[4]*(uint64_t)c->r[0])>>32); // 80269414
  c->r[9]=c->r[9]+0xFFFF9208u; // 80269418
  c->r[5]=0u+0x00000000u; // 8026941C
  c->r[7]=0u+0x00000000u; // 80269420
  c->r[0]=rotl(c->r[0],26)&0x03FFFFFFu; // 80269424
  c->r[8]=(uint32_t)((int32_t)c->r[0]*(int32_t)100); // 80269428
  c->lr=0x80269430u; f_802596B4(c); // 8026942C
  goto L_802694D0; // 80269430
L_80269434:;
  c->r[0]=0u+0x00000005u; // 80269434
  c->r[4]=0u+0x00000001u; // 80269438
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 8026943C
  c->r[0]=R32(c->r[13]+0xFFFF995Cu); // 80269440
  W32(c->r[13]+0xFFFF9998u,c->r[4]); // 80269444
  cmps(c,0,(int32_t)c->r[0],0); // 80269448
  if (!crb(c,2)) { goto L_802694D0; } // 8026944C
  c->r[0]=R32(c->r[13]+0xFFFF9960u); // 80269450
  cmps(c,0,(int32_t)c->r[0],0); // 80269454
  if (!crb(c,2)) { goto L_802694D0; } // 80269458
  c->r[31]=0u+0x80600000u; // 8026945C
  W32(c->r[13]+0xFFFF995Cu,c->r[4]); // 80269460
  c->r[3]=c->r[31]+0xFFFF9700u; // 80269464
  c->lr=0x8026946Cu; f_802593E4(c); // 80269468
  c->lr=0x80269470u; f_80262798(c); // 8026946C
  c->r[5]=0u+0x80000000u; // 80269470
  c->r[4]=0u+0x10620000u; // 80269474
  c->r[0]=R32(c->r[5]+0x000000F8u); // 80269478
  c->r[9]=0u+0x80270000u; // 8026947C
  c->r[6]=c->r[3]|c->r[3]; // 80269480
  c->r[4]=c->r[4]+0x00004DD3u; // 80269484
  c->r[0]=rotl(c->r[0],30)&0x3FFFFFFFu; // 80269488
  c->r[3]=c->r[31]+0xFFFF9700u; // 8026948C
  c->r[0]=(uint32_t)(((uint64_t)c->r[4]*(uint64_t)c->r[0])>>32); // 80269490
  c->r[9]=c->r[9]+0xFFFF9208u; // 80269494
  c->r[5]=0u+0x00000000u; // 80269498
  c->r[7]=0u+0x00000000u; // 8026949C
  c->r[0]=rotl(c->r[0],26)&0x03FFFFFFu; // 802694A0
  c->r[8]=(uint32_t)((int32_t)c->r[0]*(int32_t)100); // 802694A4
  c->lr=0x802694ACu; f_802596B4(c); // 802694A8
  goto L_802694D0; // 802694AC
L_802694B0:;
  c->r[0]=0u+0x00000003u; // 802694B0
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 802694B4
  c->lr=0x802694BCu; f_80268928(c); // 802694B8
  goto L_802694D0; // 802694BC
L_802694C0:;
  c->r[4]=0u+0x80260000u; // 802694C0
  c->r[3]=R32(c->r[13]+0xFFFF99A4u); // 802694C4
  c->r[4]=c->r[4]+0x00006E50u; // 802694C8
  c->lr=0x802694D0u; f_8026B24C(c); // 802694CC
L_802694D0:;
  c->r[0]=0u+0x00000000u; // 802694D0
  W32(c->r[13]+0xFFFF994Cu,c->r[0]); // 802694D4
  goto L_80269540; // 802694D8
L_802694DC:;
  c->r[0]=R32(c->r[13]+0xFFFF9998u); // 802694DC
  cmps(c,0,(int32_t)c->r[0],1); // 802694E0
  if (crb(c,2)) { goto L_8026953C; } // 802694E4
  if (!crb(c,0)) { goto L_802694F8; } // 802694E8
  cmps(c,0,(int32_t)c->r[0],0); // 802694EC
  if (!crb(c,0)) { goto L_80269528; } // 802694F0
  goto L_8026953C; // 802694F4
L_802694F8:;
  cmps(c,0,(int32_t)c->r[0],3); // 802694F8
  if (!crb(c,0)) { goto L_8026953C; } // 802694FC
  c->r[0]=R32(c->r[13]+0xFFFF9964u); // 80269500
  cmps(c,0,(int32_t)c->r[0],0); // 80269504
  if (crb(c,2)) { goto L_80269518; } // 80269508
  c->r[0]=0u+0x0000000Cu; // 8026950C
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 80269510
  goto L_80269540; // 80269514
L_80269518:;
  c->r[0]=0u+0x00000003u; // 80269518
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 8026951C
  c->lr=0x80269524u; f_80268928(c); // 80269520
  goto L_80269540; // 80269524
L_80269528:;
  c->r[0]=0u+0x00000001u; // 80269528
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 8026952C
  c->r[3]=R32(c->r[13]+0xFFFF99B8u); // 80269530
  c->lr=0x80269538u; f_80269554(c); // 80269534
  goto L_80269540; // 80269538
L_8026953C:;
  c->lr=0x80269540u; f_80268928(c); // 8026953C
L_80269540:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 80269540
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80269544
  c->lr=c->r[0]; // 80269548
  c->r[1]=c->r[1]+0x00000010u; // 8026954C
  return; // 80269550
}

// fn_80269554
void f_80269554(Ctx* __restrict c) {
  trace_call(0x80269554u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80269554
  c->r[0]=c->lr; // 80269558
  W32(c->r[1]+0x00000024u,c->r[0]); // 8026955C
  c->r[11]=c->r[1]+0x00000020u; // 80269560
  c->lr=0x80269568u; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 80269564
  c->r[4]=0u+0x80270000u; // 80269568
  c->r[29]=c->r[3]|c->r[3]; // 8026956C
  c->r[4]=c->r[4]+0xFFFF9554u; // 80269570
  W32(c->r[13]+0xFFFF99BCu,c->r[4]); // 80269574
  c->r[26]=R32(c->r[3]+0x00000008u); // 80269578
  cmps(c,0,(int32_t)c->r[26],17); // 8026957C
  if (!crb(c,0)) { goto L_802695B0; } // 80269580
  cmps(c,0,(int32_t)c->r[26],5); // 80269584
  if (crb(c,2)) { goto L_802695C8; } // 80269588
  if (!crb(c,0)) { goto L_802695A4; } // 8026958C
  cmps(c,0,(int32_t)c->r[26],4); // 80269590
  if (!crb(c,0)) { goto L_8026964C; } // 80269594
  cmps(c,0,(int32_t)c->r[26],2); // 80269598
  if (!crb(c,0)) { goto L_802695C8; } // 8026959C
  goto L_8026964C; // 802695A0
L_802695A4:;
  cmps(c,0,(int32_t)c->r[26],13); // 802695A4
  if (!crb(c,0)) { goto L_802695C8; } // 802695A8
  goto L_8026964C; // 802695AC
L_802695B0:;
  cmps(c,0,(int32_t)c->r[26],37); // 802695B0
  if (crb(c,2)) { goto L_802695C8; } // 802695B4
  if (!crb(c,0)) { goto L_8026964C; } // 802695B8
  cmps(c,0,(int32_t)c->r[26],34); // 802695BC
  if (crb(c,2)) { goto L_802695C8; } // 802695C0
  goto L_8026964C; // 802695C4
L_802695C8:;
  c->r[27]=R32(c->r[3]+0x00000014u); // 802695C8
  c->r[30]=R32(c->r[3]+0x00000010u); // 802695CC
  c->lr=0x802695D4u; f_8025EA10(c); // 802695D0
  c->r[0]=R32(c->r[13]+0xFFFF9938u); // 802695D4
  c->r[31]=c->r[3]|c->r[3]; // 802695D8
  cmpu(c,0,c->r[0],0x00000005u); // 802695DC
  if (crb(c,0)) { goto L_802695EC; } // 802695E0
  c->r[0]=0u+0x00000000u; // 802695E4
  W32(c->r[13]+0xFFFF9938u,c->r[0]); // 802695E8
L_802695EC:;
  c->r[0]=R32(c->r[13]+0xFFFF9938u); // 802695EC
  c->r[28]=0u+0x80600000u; // 802695F0
  c->r[3]=R32(c->r[13]+0xFFFF9938u); // 802695F4
  c->r[28]=c->r[28]+0xFFFFE3E0u; // 802695F8
  c->r[4]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 802695FC
  c->r[0]=R32(c->r[13]+0xFFFF9938u); // 80269600
  c->r[3]=(uint32_t)((int32_t)c->r[3]*(int32_t)20); // 80269604
  c->r[4]=c->r[28]+c->r[4]; // 80269608
  W32(c->r[4]+0x0000001Cu,c->r[26]); // 8026960C
  c->r[3]=c->r[28]+c->r[3]; // 80269610
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 80269614
  W32(c->r[3]+0x00000020u,c->r[30]); // 80269618
  c->r[3]=c->r[28]+c->r[0]; // 8026961C
  W32(c->r[3]+0x00000024u,c->r[27]); // 80269620
  c->lr=0x80269628u; f_80262798(c); // 80269624
  c->r[0]=R32(c->r[13]+0xFFFF9938u); // 80269628
  c->r[4]=R32(c->r[13]+0xFFFF9938u); // 8026962C
  c->r[5]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 80269630
  c->r[0]=c->r[4]+0x00000001u; // 80269634
  W32(c->r[13]+0xFFFF9938u,c->r[0]); // 80269638
  c->r[4]=c->r[28]+c->r[5]; // 8026963C
  W32(c->r[4]+0x0000002Cu,c->r[3]); // 80269640
  c->r[3]=c->r[31]|c->r[31]; // 80269644
  c->lr=0x8026964Cu; f_8025EA38(c); // 80269648
L_8026964C:;
  c->r[0]=R32(c->r[29]+0x00000008u); // 8026964C
  cmpu(c,0,c->r[0],0x00000026u); // 80269650
  if (crb(c,1)) { goto L_80269A2C; } // 80269654
  c->r[3]=0u+0x80420000u; // 80269658
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 8026965C
  c->r[3]=c->r[3]+0xFFFFFDB0u; // 80269660
  c->r[3]=R32(c->r[3]+c->r[0]); // 80269664
  c->ctr=c->r[3]; // 80269668
  if (true) { switch (c->ctr) { case 0x80269670u: goto L_80269670; case 0x80269694u: goto L_80269694; case 0x802697BCu: goto L_802697BC; case 0x802697D8u: goto L_802697D8; case 0x802697F0u: goto L_802697F0; case 0x80269808u: goto L_80269808; case 0x80269828u: goto L_80269828; case 0x8026984Cu: goto L_8026984C; case 0x8026986Cu: goto L_8026986C; case 0x80269884u: goto L_80269884; case 0x802699ACu: goto L_802699AC; case 0x802699D8u: goto L_802699D8; case 0x802699F0u: goto L_802699F0; case 0x80269A00u: goto L_80269A00; case 0x80269A10u: goto L_80269A10; case 0x80269A2Cu: goto L_80269A2C; default: break; } dispatch(c,c->ctr); return; } // 8026966C
L_80269670:;
  c->r[3]=0u+0x00000000u; // 80269670
  c->lr=0x80269678u; f_8026CD9C(c); // 80269674
  c->r[0]=0u+0x00000020u; // 80269678
  c->r[4]=0u+0x80270000u; // 8026967C
  W32(c->r[29]+0x0000001Cu,c->r[0]); // 80269680
  c->r[4]=c->r[4]+0xFFFF9A5Cu; // 80269684
  c->r[3]=R32(c->r[29]+0x00000018u); // 80269688
  c->lr=0x80269690u; f_8026B8F4(c); // 8026968C
  goto L_80269A44; // 80269690
L_80269694:;
  c->r[0]=R32(c->r[29]+0x00000014u); // 80269694
  cmps(c,0,(int32_t)c->r[0],0); // 80269698
  if (!crb(c,2)) { goto L_802696D8; } // 8026969C
  c->r[3]=0u+0x80600000u; // 802696A0
  c->r[4]=R32(c->r[13]+0xFFFF99B8u); // 802696A4
  c->r[3]=c->r[3]+0xFFFF96A0u; // 802696A8
  c->r[0]=0u+0x00000000u; // 802696AC
  W32(c->r[13]+0xFFFF99B8u,c->r[3]); // 802696B0
  W32(c->r[4]+0x0000000Cu,c->r[0]); // 802696B4
  c->r[12]=R32(c->r[4]+0x00000028u); // 802696B8
  cmps(c,0,(int32_t)c->r[12],0); // 802696BC
  if (crb(c,2)) { goto L_802696D0; } // 802696C0
  c->r[3]=0u+0x00000000u; // 802696C4
  c->ctr=c->r[12]; // 802696C8
  if (true) { c->lr=0x802696D0u; dispatch(c,c->ctr); } // 802696CC
L_802696D0:;
  c->lr=0x802696D4u; f_8026922C(c); // 802696D0
  goto L_80269A44; // 802696D4
L_802696D8:;
  c->r[3]=0u+0x00000000u; // 802696D8
  c->lr=0x802696E0u; f_8026CD9C(c); // 802696DC
  c->r[3]=R32(c->r[29]+0x00000020u); // 802696E0
  c->r[31]=0u+0x00080000u; // 802696E4
  c->r[0]=R32(c->r[29]+0x00000014u); // 802696E8
  c->r[0]=c->r[0]-c->r[3]; // 802696EC
  cmpu(c,0,c->r[0],c->r[31]); // 802696F0
  if (crb(c,1)) { goto L_802696FC; } // 802696F4
  c->r[31]=c->r[0]|c->r[0]; // 802696F8
L_802696FC:;
  c->r[0]=R32(c->r[29]+0x00000020u); // 802696FC
  c->r[3]=R32(c->r[29]+0x00000010u); // 80269700
  c->r[0]=rotl(c->r[0],30)&0x3FFFFFFFu; // 80269704
  W32(c->r[29]+0x0000001Cu,c->r[31]); // 80269708
  c->r[27]=R32(c->r[29]+0x00000008u); // 8026970C
  c->r[26]=c->r[3]+c->r[0]; // 80269710
  c->lr=0x80269718u; f_8025EA10(c); // 80269714
  c->r[0]=R32(c->r[13]+0xFFFF9938u); // 80269718
  c->r[30]=c->r[3]|c->r[3]; // 8026971C
  cmpu(c,0,c->r[0],0x00000005u); // 80269720
  if (crb(c,0)) { goto L_80269730; } // 80269724
  c->r[0]=0u+0x00000000u; // 80269728
  W32(c->r[13]+0xFFFF9938u,c->r[0]); // 8026972C
L_80269730:;
  c->r[0]=R32(c->r[13]+0xFFFF9938u); // 80269730
  c->r[28]=0u+0x80600000u; // 80269734
  c->r[3]=R32(c->r[13]+0xFFFF9938u); // 80269738
  c->r[28]=c->r[28]+0xFFFFE3E0u; // 8026973C
  c->r[4]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 80269740
  c->r[0]=R32(c->r[13]+0xFFFF9938u); // 80269744
  c->r[3]=(uint32_t)((int32_t)c->r[3]*(int32_t)20); // 80269748
  c->r[4]=c->r[28]+c->r[4]; // 8026974C
  W32(c->r[4]+0x0000001Cu,c->r[27]); // 80269750
  c->r[3]=c->r[28]+c->r[3]; // 80269754
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 80269758
  W32(c->r[3]+0x00000020u,c->r[26]); // 8026975C
  c->r[3]=c->r[28]+c->r[0]; // 80269760
  W32(c->r[3]+0x00000024u,c->r[31]); // 80269764
  c->lr=0x8026976Cu; f_80262798(c); // 80269768
  c->r[0]=R32(c->r[13]+0xFFFF9938u); // 8026976C
  c->r[4]=R32(c->r[13]+0xFFFF9938u); // 80269770
  c->r[5]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 80269774
  c->r[0]=c->r[4]+0x00000001u; // 80269778
  W32(c->r[13]+0xFFFF9938u,c->r[0]); // 8026977C
  c->r[4]=c->r[28]+c->r[5]; // 80269780
  W32(c->r[4]+0x0000002Cu,c->r[3]); // 80269784
  c->r[3]=c->r[30]|c->r[30]; // 80269788
  c->lr=0x80269790u; f_8025EA38(c); // 8026978C
  c->r[7]=R32(c->r[29]+0x00000020u); // 80269790
  c->r[6]=0u+0x80270000u; // 80269794
  c->r[3]=R32(c->r[29]+0x00000018u); // 80269798
  c->r[6]=c->r[6]+0xFFFF9A5Cu; // 8026979C
  c->r[5]=R32(c->r[29]+0x00000010u); // 802697A0
  c->r[0]=rotl(c->r[7],30)&0x3FFFFFFFu; // 802697A4
  c->r[4]=R32(c->r[29]+0x0000001Cu); // 802697A8
  c->r[3]=c->r[3]+c->r[7]; // 802697AC
  c->r[5]=c->r[5]+c->r[0]; // 802697B0
  c->lr=0x802697B8u; f_8026C8DC(c); // 802697B4
  goto L_80269A44; // 802697B8
L_802697BC:;
  c->r[3]=0u+0x00000000u; // 802697BC
  c->lr=0x802697C4u; f_8026CD9C(c); // 802697C0
  c->r[4]=0u+0x80270000u; // 802697C4
  c->r[3]=R32(c->r[29]+0x00000010u); // 802697C8
  c->r[4]=c->r[4]+0xFFFF9A5Cu; // 802697CC
  c->lr=0x802697D4u; f_8026CA8C(c); // 802697D0
  goto L_80269A44; // 802697D4
L_802697D8:;
  c->r[5]=0u+0x80270000u; // 802697D8
  c->r[3]=0u+0x00000000u; // 802697DC
  c->r[5]=c->r[5]+0xFFFF9A5Cu; // 802697E0
  c->r[4]=0u+0x00000000u; // 802697E4
  c->lr=0x802697ECu; f_8026BFDC(c); // 802697E8
  goto L_80269A44; // 802697EC
L_802697F0:;
  c->r[5]=0u+0x80270000u; // 802697F0
  c->r[3]=0u+0x00000000u; // 802697F4
  c->r[5]=c->r[5]+0xFFFF9A5Cu; // 802697F8
  c->r[4]=0u+0x00000000u; // 802697FC
  c->lr=0x80269804u; f_8026BFDC(c); // 80269800
  goto L_80269A44; // 80269804
L_80269808:;
  c->r[3]=0u+0x00000000u; // 80269808
  c->lr=0x80269810u; f_8026CD9C(c); // 8026980C
  c->r[5]=0u+0x80270000u; // 80269810
  c->r[3]=R32(c->r[29]+0x00000010u); // 80269814
  c->r[4]=R32(c->r[29]+0x00000014u); // 80269818
  c->r[5]=c->r[5]+0xFFFF9A5Cu; // 8026981C
  c->lr=0x80269824u; f_8026C5C8(c); // 80269820
  goto L_80269A44; // 80269824
L_80269828:;
  c->r[3]=0u+0x00000000u; // 80269828
  c->lr=0x80269830u; f_8026CD9C(c); // 8026982C
  c->r[0]=0u+0x00000020u; // 80269830
  c->r[4]=0u+0x80270000u; // 80269834
  W32(c->r[29]+0x0000001Cu,c->r[0]); // 80269838
  c->r[4]=c->r[4]+0xFFFF9A5Cu; // 8026983C
  c->r[3]=R32(c->r[29]+0x00000018u); // 80269840
  c->lr=0x80269848u; f_8026C170(c); // 80269844
  goto L_80269A44; // 80269848
L_8026984C:;
  c->r[3]=0u+0x00000000u; // 8026984C
  c->lr=0x80269854u; f_8026CD9C(c); // 80269850
  c->r[5]=0u+0x80270000u; // 80269854
  c->r[3]=0u+0x00000000u; // 80269858
  c->r[5]=c->r[5]+0xFFFF9A5Cu; // 8026985C
  c->r[4]=0u+0x00000000u; // 80269860
  c->lr=0x80269868u; f_8026BFDC(c); // 80269864
  goto L_80269A44; // 80269868
L_8026986C:;
  c->r[3]=0u+0x00000001u; // 8026986C
  c->lr=0x80269874u; f_8026C440(c); // 80269870
  c->r[3]=0u+0x80270000u; // 80269874
  c->r[3]=c->r[3]+0xFFFF9A5Cu; // 80269878
  c->lr=0x80269880u; f_8026C44C(c); // 8026987C
  goto L_80269A44; // 80269880
L_80269884:;
  c->r[0]=R32(c->r[29]+0x00000014u); // 80269884
  cmps(c,0,(int32_t)c->r[0],0); // 80269888
  if (!crb(c,2)) { goto L_802698C8; } // 8026988C
  c->r[3]=0u+0x80600000u; // 80269890
  c->r[4]=R32(c->r[13]+0xFFFF99B8u); // 80269894
  c->r[3]=c->r[3]+0xFFFF96A0u; // 80269898
  c->r[0]=0u+0x00000000u; // 8026989C
  W32(c->r[13]+0xFFFF99B8u,c->r[3]); // 802698A0
  W32(c->r[4]+0x0000000Cu,c->r[0]); // 802698A4
  c->r[12]=R32(c->r[4]+0x00000028u); // 802698A8
  cmps(c,0,(int32_t)c->r[12],0); // 802698AC
  if (crb(c,2)) { goto L_802698C0; } // 802698B0
  c->r[3]=0u+0x00000000u; // 802698B4
  c->ctr=c->r[12]; // 802698B8
  if (true) { c->lr=0x802698C0u; dispatch(c,c->ctr); } // 802698BC
L_802698C0:;
  c->lr=0x802698C4u; f_8026922C(c); // 802698C0
  goto L_80269A44; // 802698C4
L_802698C8:;
  c->r[3]=0u+0x00000000u; // 802698C8
  c->lr=0x802698D0u; f_8026CD9C(c); // 802698CC
  c->r[3]=R32(c->r[29]+0x00000020u); // 802698D0
  c->r[31]=0u+0x00080000u; // 802698D4
  c->r[0]=R32(c->r[29]+0x00000014u); // 802698D8
  c->r[0]=c->r[0]-c->r[3]; // 802698DC
  cmpu(c,0,c->r[0],c->r[31]); // 802698E0
  if (crb(c,1)) { goto L_802698EC; } // 802698E4
  c->r[31]=c->r[0]|c->r[0]; // 802698E8
L_802698EC:;
  c->r[0]=R32(c->r[29]+0x00000020u); // 802698EC
  c->r[3]=R32(c->r[29]+0x00000010u); // 802698F0
  c->r[0]=rotl(c->r[0],30)&0x3FFFFFFFu; // 802698F4
  W32(c->r[29]+0x0000001Cu,c->r[31]); // 802698F8
  c->r[26]=R32(c->r[29]+0x00000008u); // 802698FC
  c->r[27]=c->r[3]+c->r[0]; // 80269900
  c->lr=0x80269908u; f_8025EA10(c); // 80269904
  c->r[0]=R32(c->r[13]+0xFFFF9938u); // 80269908
  c->r[30]=c->r[3]|c->r[3]; // 8026990C
  cmpu(c,0,c->r[0],0x00000005u); // 80269910
  if (crb(c,0)) { goto L_80269920; } // 80269914
  c->r[0]=0u+0x00000000u; // 80269918
  W32(c->r[13]+0xFFFF9938u,c->r[0]); // 8026991C
L_80269920:;
  c->r[0]=R32(c->r[13]+0xFFFF9938u); // 80269920
  c->r[28]=0u+0x80600000u; // 80269924
  c->r[3]=R32(c->r[13]+0xFFFF9938u); // 80269928
  c->r[28]=c->r[28]+0xFFFFE3E0u; // 8026992C
  c->r[4]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 80269930
  c->r[0]=R32(c->r[13]+0xFFFF9938u); // 80269934
  c->r[3]=(uint32_t)((int32_t)c->r[3]*(int32_t)20); // 80269938
  c->r[4]=c->r[28]+c->r[4]; // 8026993C
  W32(c->r[4]+0x0000001Cu,c->r[26]); // 80269940
  c->r[3]=c->r[28]+c->r[3]; // 80269944
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 80269948
  W32(c->r[3]+0x00000020u,c->r[27]); // 8026994C
  c->r[3]=c->r[28]+c->r[0]; // 80269950
  W32(c->r[3]+0x00000024u,c->r[31]); // 80269954
  c->lr=0x8026995Cu; f_80262798(c); // 80269958
  c->r[0]=R32(c->r[13]+0xFFFF9938u); // 8026995C
  c->r[4]=R32(c->r[13]+0xFFFF9938u); // 80269960
  c->r[5]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 80269964
  c->r[0]=c->r[4]+0x00000001u; // 80269968
  W32(c->r[13]+0xFFFF9938u,c->r[0]); // 8026996C
  c->r[4]=c->r[28]+c->r[5]; // 80269970
  W32(c->r[4]+0x0000002Cu,c->r[3]); // 80269974
  c->r[3]=c->r[30]|c->r[30]; // 80269978
  c->lr=0x80269980u; f_8025EA38(c); // 8026997C
  c->r[7]=R32(c->r[29]+0x00000020u); // 80269980
  c->r[6]=0u+0x80270000u; // 80269984
  c->r[3]=R32(c->r[29]+0x00000018u); // 80269988
  c->r[6]=c->r[6]+0xFFFF9A5Cu; // 8026998C
  c->r[5]=R32(c->r[29]+0x00000010u); // 80269990
  c->r[0]=rotl(c->r[7],30)&0x3FFFFFFFu; // 80269994
  c->r[4]=R32(c->r[29]+0x0000001Cu); // 80269998
  c->r[3]=c->r[3]+c->r[7]; // 8026999C
  c->r[5]=c->r[5]+c->r[0]; // 802699A0
  c->lr=0x802699A8u; f_8026BE48(c); // 802699A4
  goto L_80269A44; // 802699A8
L_802699AC:;
  c->r[3]=0u+0x00000000u; // 802699AC
  c->lr=0x802699B4u; f_8026CD9C(c); // 802699B0
  c->r[8]=0u+0x80270000u; // 802699B4
  c->r[3]=R32(c->r[29]+0x00000010u); // 802699B8
  c->r[7]=R32(c->r[29]+0x00000018u); // 802699BC
  c->r[8]=c->r[8]+0xFFFF9A5Cu; // 802699C0
  c->r[4]=0u+0x00000000u; // 802699C4
  c->r[5]=0u+0x00000000u; // 802699C8
  c->r[6]=0u+0x00000000u; // 802699CC
  c->lr=0x802699D4u; f_8026BA7C(c); // 802699D0
  goto L_80269A44; // 802699D4
L_802699D8:;
  c->r[3]=0u+0x00000000u; // 802699D8
  c->lr=0x802699E0u; f_8026CD9C(c); // 802699DC
  c->r[3]=0u+0x80270000u; // 802699E0
  c->r[3]=c->r[3]+0xFFFF9A5Cu; // 802699E4
  c->lr=0x802699ECu; f_8026BCE4(c); // 802699E8
  goto L_80269A44; // 802699EC
L_802699F0:;
  c->r[3]=0u+0x80270000u; // 802699F0
  c->r[3]=c->r[3]+0xFFFF9A5Cu; // 802699F4
  c->lr=0x802699FCu; f_8026CC18(c); // 802699F8
  goto L_80269A44; // 802699FC
L_80269A00:;
  c->r[3]=0u+0x80270000u; // 80269A00
  c->r[3]=c->r[3]+0xFFFF9A5Cu; // 80269A04
  c->lr=0x80269A0Cu; f_8026CC18(c); // 80269A08
  goto L_80269A44; // 80269A0C
L_80269A10:;
  c->r[3]=0u+0x00000000u; // 80269A10
  c->lr=0x80269A18u; f_8026CD9C(c); // 80269A14
  c->r[4]=0u+0x80270000u; // 80269A18
  c->r[3]=0u+0x00020000u; // 80269A1C
  c->r[4]=c->r[4]+0xFFFF9A5Cu; // 80269A20
  c->lr=0x80269A28u; f_8026C75C(c); // 80269A24
  goto L_80269A44; // 80269A28
L_80269A2C:;
  c->r[12]=R32(c->r[13]+0xFFFF8E38u); // 80269A2C
  c->r[4]=0u+0x80270000u; // 80269A30
  c->r[3]=c->r[29]|c->r[29]; // 80269A34
  c->r[4]=c->r[4]+0xFFFF9A5Cu; // 80269A38
  c->ctr=c->r[12]; // 80269A3C
  if (true) { c->lr=0x80269A44u; dispatch(c,c->ctr); } // 80269A40
L_80269A44:;
  c->r[11]=c->r[1]+0x00000020u; // 80269A44
  c->lr=0x80269A4Cu; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 80269A48
  c->r[0]=R32(c->r[1]+0x00000024u); // 80269A4C
  c->lr=c->r[0]; // 80269A50
  c->r[1]=c->r[1]+0x00000020u; // 80269A54
  return; // 80269A58
}

// fn_80269A5C
void f_80269A5C(Ctx* __restrict c) {
  trace_call(0x80269A5Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80269A5C
  c->r[0]=c->lr; // 80269A60
  W32(c->r[1]+0x00000014u,c->r[0]); // 80269A64
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80269A68
  c->r[31]=c->r[3]|c->r[3]; // 80269A6C
  W32(c->r[1]+0x00000008u,c->r[30]); // 80269A70
  c->lr=0x80269A78u; f_8025EA10(c); // 80269A74
  c->r[0]=R32(c->r[13]+0xFFFF9938u); // 80269A78
  cmps(c,0,(int32_t)c->r[0],0); // 80269A7C
  if (!crb(c,2)) { goto L_80269A94; } // 80269A80
  c->r[4]=0u+0x80600000u; // 80269A84
  c->r[4]=c->r[4]+0xFFFFE3E0u; // 80269A88
  W32(c->r[4]+0x00000078u,c->r[31]); // 80269A8C
  goto L_80269AAC; // 80269A90
L_80269A94:;
  c->r[0]=R32(c->r[13]+0xFFFF9938u); // 80269A94
  c->r[4]=0u+0x80600000u; // 80269A98
  c->r[4]=c->r[4]+0xFFFFE3E0u; // 80269A9C
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 80269AA0
  c->r[4]=c->r[4]+c->r[0]; // 80269AA4
  W32(c->r[4]+0x00000014u,c->r[31]); // 80269AA8
L_80269AAC:;
  c->lr=0x80269AB0u; f_8025EA38(c); // 80269AAC
  cmpu(c,0,c->r[31],0x00000010u); // 80269AB0
  if (!crb(c,2)) { goto L_80269AD0; } // 80269AB4
  c->r[3]=0u+0x01230000u; // 80269AB8
  c->r[4]=0u+0x80260000u; // 80269ABC
  c->r[3]=c->r[3]+0x00004568u; // 80269AC0
  c->r[4]=c->r[4]+0x00006E64u; // 80269AC4
  c->lr=0x80269ACCu; f_8026B24C(c); // 80269AC8
  goto L_8026A278; // 80269ACC
L_80269AD0:;
  cmpu(c,0,c->r[31],0x00000020u); // 80269AD0
  if (!crb(c,2)) { goto L_80269AF0; } // 80269AD4
  c->r[3]=0u+0x01230000u; // 80269AD8
  c->r[4]=0u+0x80260000u; // 80269ADC
  c->r[3]=c->r[3]+0x00004569u; // 80269AE0
  c->r[4]=c->r[4]+0x00006E64u; // 80269AE4
  c->lr=0x80269AECu; f_8026B24C(c); // 80269AE8
  goto L_8026A278; // 80269AEC
L_80269AF0:;
  c->r[0]=R32(c->r[13]+0xFFFF99ACu); // 80269AF0
  cmpu(c,0,c->r[0],0x00000003u); // 80269AF4
  if (crb(c,2)) { goto L_80269B08; } // 80269AF8
  c->r[0]=R32(c->r[13]+0xFFFF99ACu); // 80269AFC
  cmpu(c,0,c->r[0],0x0000000Fu); // 80269B00
  if (!crb(c,2)) { goto L_80269C54; } // 80269B04
L_80269B08:;
  c->r[0]=rotl(c->r[31],0)&0x00000002u; cr0(c,c->r[0]); // 80269B08
  if (crb(c,2)) { goto L_80269B28; } // 80269B0C
  c->r[3]=0u+0x01230000u; // 80269B10
  c->r[4]=0u+0x80260000u; // 80269B14
  c->r[3]=c->r[3]+0x00004567u; // 80269B18
  c->r[4]=c->r[4]+0x00006E50u; // 80269B1C
  c->lr=0x80269B24u; f_8026B24C(c); // 80269B20
  goto L_8026A278; // 80269B24
L_80269B28:;
  c->r[0]=0u+0x00000000u; // 80269B28
  W32(c->r[13]+0xFFFF9950u,c->r[0]); // 80269B2C
  c->r[0]=R32(c->r[13]+0xFFFF99ACu); // 80269B30
  cmpu(c,0,c->r[0],0x0000000Fu); // 80269B34
  if (!crb(c,2)) { goto L_80269B44; } // 80269B38
  c->r[0]=0u+0x00000001u; // 80269B3C
  W32(c->r[13]+0xFFFF999Cu,c->r[0]); // 80269B40
L_80269B44:;
  c->r[0]=R32(c->r[13]+0xFFFF9948u); // 80269B44
  cmps(c,0,(int32_t)c->r[0],0); // 80269B48
  if (crb(c,2)) { goto L_80269BBC; } // 80269B4C
  c->r[3]=0u+0x80600000u; // 80269B50
  c->r[31]=R32(c->r[13]+0xFFFF99B8u); // 80269B54
  c->r[3]=c->r[3]+0xFFFF96A0u; // 80269B58
  c->r[0]=0u+0x00000007u; // 80269B5C
  W32(c->r[13]+0xFFFF994Cu,c->r[0]); // 80269B60
  c->r[4]=0u+0x00000000u; // 80269B64
  c->r[0]=0u+0x0000000Au; // 80269B68
  W32(c->r[13]+0xFFFF9948u,c->r[4]); // 80269B6C
  W32(c->r[13]+0xFFFF99B8u,c->r[3]); // 80269B70
  W32(c->r[31]+0x0000000Cu,c->r[0]); // 80269B74
  c->r[12]=R32(c->r[31]+0x00000028u); // 80269B78
  cmps(c,0,(int32_t)c->r[12],0); // 80269B7C
  if (crb(c,2)) { goto L_80269B94; } // 80269B80
  c->r[4]=c->r[31]|c->r[31]; // 80269B84
  c->r[3]=0u+0xFFFFFFFDu; // 80269B88
  c->ctr=c->r[12]; // 80269B8C
  if (true) { c->lr=0x80269B94u; dispatch(c,c->ctr); } // 80269B90
L_80269B94:;
  c->r[12]=R32(c->r[13]+0xFFFF99A8u); // 80269B94
  cmps(c,0,(int32_t)c->r[12],0); // 80269B98
  if (crb(c,2)) { goto L_80269BB0; } // 80269B9C
  c->r[4]=c->r[31]|c->r[31]; // 80269BA0
  c->r[3]=0u+0x00000000u; // 80269BA4
  c->ctr=c->r[12]; // 80269BA8
  if (true) { c->lr=0x80269BB0u; dispatch(c,c->ctr); } // 80269BAC
L_80269BB0:;
  c->lr=0x80269BB4u; f_8026922C(c); // 80269BB0
  c->r[0]=0u+0x00000001u; // 80269BB4
  goto L_80269BC0; // 80269BB8
L_80269BBC:;
  c->r[0]=0u+0x00000000u; // 80269BBC
L_80269BC0:;
  cmps(c,0,(int32_t)c->r[0],0); // 80269BC0
  if (!crb(c,2)) { goto L_8026A278; } // 80269BC4
  c->r[0]=R32(c->r[13]+0xFFFF9998u); // 80269BC8
  cmpu(c,0,c->r[0],0x00000002u); // 80269BCC
  if (crb(c,2)) { goto L_8026A278; } // 80269BD0
  c->r[4]=R32(c->r[13]+0xFFFF99B8u); // 80269BD4
  c->r[0]=0u+0x00000007u; // 80269BD8
  c->r[3]=0u+0x00000001u; // 80269BDC
  W32(c->r[4]+0x0000000Cu,c->r[0]); // 80269BE0
  c->r[0]=R32(c->r[13]+0xFFFF995Cu); // 80269BE4
  W32(c->r[13]+0xFFFF9998u,c->r[3]); // 80269BE8
  cmps(c,0,(int32_t)c->r[0],0); // 80269BEC
  if (!crb(c,2)) { goto L_8026A278; } // 80269BF0
  c->r[0]=R32(c->r[13]+0xFFFF9960u); // 80269BF4
  cmps(c,0,(int32_t)c->r[0],0); // 80269BF8
  if (!crb(c,2)) { goto L_8026A278; } // 80269BFC
  c->r[31]=0u+0x80600000u; // 80269C00
  W32(c->r[13]+0xFFFF995Cu,c->r[3]); // 80269C04
  c->r[3]=c->r[31]+0xFFFF9700u; // 80269C08
  c->lr=0x80269C10u; f_802593E4(c); // 80269C0C
  c->lr=0x80269C14u; f_80262798(c); // 80269C10
  c->r[5]=0u+0x80000000u; // 80269C14
  c->r[4]=0u+0x10620000u; // 80269C18
  c->r[0]=R32(c->r[5]+0x000000F8u); // 80269C1C
  c->r[9]=0u+0x80270000u; // 80269C20
  c->r[6]=c->r[3]|c->r[3]; // 80269C24
  c->r[4]=c->r[4]+0x00004DD3u; // 80269C28
  c->r[0]=rotl(c->r[0],30)&0x3FFFFFFFu; // 80269C2C
  c->r[3]=c->r[31]+0xFFFF9700u; // 80269C30
  c->r[0]=(uint32_t)(((uint64_t)c->r[4]*(uint64_t)c->r[0])>>32); // 80269C34
  c->r[9]=c->r[9]+0xFFFF9208u; // 80269C38
  c->r[5]=0u+0x00000000u; // 80269C3C
  c->r[7]=0u+0x00000000u; // 80269C40
  c->r[0]=rotl(c->r[0],26)&0x03FFFFFFu; // 80269C44
  c->r[8]=(uint32_t)((int32_t)c->r[0]*(int32_t)100); // 80269C48
  c->lr=0x80269C50u; f_802596B4(c); // 80269C4C
  goto L_8026A278; // 80269C50
L_80269C54:;
  c->r[3]=R32(c->r[13]+0xFFFF99ACu); // 80269C54
  cmpu(c,0,c->r[3],0x00000001u); // 80269C58
  if (crb(c,2)) { goto L_80269C80; } // 80269C5C
  cmpu(c,0,c->r[3],0x00000004u); // 80269C60
  if (crb(c,2)) { goto L_80269C80; } // 80269C64
  cmpu(c,0,c->r[3],0x00000005u); // 80269C68
  if (crb(c,2)) { goto L_80269C80; } // 80269C6C
  cmpu(c,0,c->r[3],0x00000021u); // 80269C70
  if (crb(c,2)) { goto L_80269C80; } // 80269C74
  cmpu(c,0,c->r[3],0x0000000Eu); // 80269C78
  if (!crb(c,2)) { goto L_80269C88; } // 80269C7C
L_80269C80:;
  c->r[0]=0u+0x00000001u; // 80269C80
  goto L_80269CA0; // 80269C84
L_80269C88:;
  c->r[0]=R32(c->r[13]+0xFFFF8E44u); // 80269C88
  cmpu(c,0,c->r[3],c->r[0]); // 80269C8C
  if (!crb(c,2)) { goto L_80269C9C; } // 80269C90
  c->r[0]=0u+0x00000001u; // 80269C94
  goto L_80269CA0; // 80269C98
L_80269C9C:;
  c->r[0]=0u+0x00000000u; // 80269C9C
L_80269CA0:;
  cmps(c,0,(int32_t)c->r[0],0); // 80269CA0
  if (crb(c,2)) { goto L_80269CD0; } // 80269CA4
  c->r[0]=c->r[31]&0x00000009u; cr0(c,c->r[0]); // 80269CA8
  if (crb(c,2)) { goto L_80269CBC; } // 80269CAC
  c->r[3]=R32(c->r[13]+0xFFFF99B8u); // 80269CB0
  c->r[4]=R32(c->r[3]+0x0000001Cu); // 80269CB4
  goto L_80269CC0; // 80269CB8
L_80269CBC:;
  c->r[4]=0u+0x00000000u; // 80269CBC
L_80269CC0:;
  c->r[3]=R32(c->r[13]+0xFFFF99B8u); // 80269CC0
  c->r[0]=R32(c->r[3]+0x00000020u); // 80269CC4
  c->r[0]=c->r[0]+c->r[4]; // 80269CC8
  W32(c->r[3]+0x00000020u,c->r[0]); // 80269CCC
L_80269CD0:;
  c->r[0]=R32(c->r[13]+0xFFFF9958u); // 80269CD0
  cmps(c,0,(int32_t)c->r[0],0); // 80269CD4
  if (crb(c,2)) { goto L_80269D40; } // 80269CD8
  c->r[3]=0u+0x80600000u; // 80269CDC
  c->r[30]=R32(c->r[13]+0xFFFF99B8u); // 80269CE0
  c->r[4]=0u+0x00000000u; // 80269CE4
  c->r[0]=0u+0x0000000Au; // 80269CE8
  c->r[3]=c->r[3]+0xFFFF96A0u; // 80269CEC
  W32(c->r[13]+0xFFFF9958u,c->r[4]); // 80269CF0
  W32(c->r[13]+0xFFFF9948u,c->r[4]); // 80269CF4
  W32(c->r[13]+0xFFFF99B8u,c->r[3]); // 80269CF8
  W32(c->r[30]+0x0000000Cu,c->r[0]); // 80269CFC
  c->r[12]=R32(c->r[30]+0x00000028u); // 80269D00
  cmps(c,0,(int32_t)c->r[12],0); // 80269D04
  if (crb(c,2)) { goto L_80269D1C; } // 80269D08
  c->r[4]=c->r[30]|c->r[30]; // 80269D0C
  c->r[3]=0u+0xFFFFFFFDu; // 80269D10
  c->ctr=c->r[12]; // 80269D14
  if (true) { c->lr=0x80269D1Cu; dispatch(c,c->ctr); } // 80269D18
L_80269D1C:;
  c->r[12]=R32(c->r[13]+0xFFFF99A8u); // 80269D1C
  cmps(c,0,(int32_t)c->r[12],0); // 80269D20
  if (crb(c,2)) { goto L_80269D38; } // 80269D24
  c->r[4]=c->r[30]|c->r[30]; // 80269D28
  c->r[3]=0u+0x00000000u; // 80269D2C
  c->ctr=c->r[12]; // 80269D30
  if (true) { c->lr=0x80269D38u; dispatch(c,c->ctr); } // 80269D34
L_80269D38:;
  c->lr=0x80269D3Cu; f_8026922C(c); // 80269D38
  goto L_8026A278; // 80269D3C
L_80269D40:;
  c->r[0]=rotl(c->r[31],0)&0x00000001u; cr0(c,c->r[0]); // 80269D40
  if (crb(c,2)) { goto L_8026A134; } // 80269D44
  c->r[31]=0u+0x00000000u; // 80269D48
  W32(c->r[13]+0xFFFF9950u,c->r[31]); // 80269D4C
  c->r[0]=R32(c->r[13]+0xFFFF99ACu); // 80269D50
  cmpu(c,0,c->r[0],0x00000010u); // 80269D54
  if (!crb(c,2)) { goto L_80269DA8; } // 80269D58
  c->r[4]=R32(c->r[13]+0xFFFF99B8u); // 80269D5C
  c->r[3]=0u+0x80600000u; // 80269D60
  c->r[3]=c->r[3]+0xFFFF96A0u; // 80269D64
  c->r[5]=R32(c->r[4]+0x00000010u); // 80269D68
  c->r[0]=0u-c->r[5]; // 80269D6C
  W32(c->r[13]+0xFFFF99B8u,c->r[3]); // 80269D70
  c->r[0]=c->r[0]|c->r[5]; // 80269D74
  c->r[3]=rotl(c->r[0],1)&0x00000001u; // 80269D78
  c->r[0]=c->r[3]+0x00000001u; // 80269D7C
  W32(c->r[13]+0xFFFF9998u,c->r[0]); // 80269D80
  W32(c->r[4]+0x0000000Cu,c->r[31]); // 80269D84
  c->r[12]=R32(c->r[4]+0x00000028u); // 80269D88
  cmps(c,0,(int32_t)c->r[12],0); // 80269D8C
  if (crb(c,2)) { goto L_80269DA0; } // 80269D90
  c->r[3]=0u+0x00000000u; // 80269D94
  c->ctr=c->r[12]; // 80269D98
  if (true) { c->lr=0x80269DA0u; dispatch(c,c->ctr); } // 80269D9C
L_80269DA0:;
  c->lr=0x80269DA4u; f_8026922C(c); // 80269DA0
  goto L_8026A278; // 80269DA4
L_80269DA8:;
  c->r[0]=R32(c->r[13]+0xFFFF99ACu); // 80269DA8
  cmpu(c,0,c->r[0],0x00000020u); // 80269DAC
  if (!crb(c,2)) { goto L_80269E00; } // 80269DB0
  c->lr=0x80269DB8u; f_802627A0(c); // 80269DB4
  c->r[5]=0u+0x80600000u; // 80269DB8
  c->r[6]=R32(c->r[13]+0xFFFF99B8u); // 80269DBC
  c->r[5]=c->r[5]+0xFFFF96A0u; // 80269DC0
  W32(c->r[13]+0xFFFF9994u,c->r[4]); // 80269DC4
  W32(c->r[13]+0xFFFF9990u,c->r[3]); // 80269DC8
  W32(c->r[13]+0xFFFF999Cu,c->r[31]); // 80269DCC
  W32(c->r[13]+0xFFFF994Cu,c->r[31]); // 80269DD0
  W32(c->r[13]+0xFFFF99B8u,c->r[5]); // 80269DD4
  W32(c->r[6]+0x0000000Cu,c->r[31]); // 80269DD8
  c->r[12]=R32(c->r[6]+0x00000028u); // 80269DDC
  cmps(c,0,(int32_t)c->r[12],0); // 80269DE0
  if (crb(c,2)) { goto L_80269DF8; } // 80269DE4
  c->r[4]=c->r[6]|c->r[6]; // 80269DE8
  c->r[3]=0u+0x00000000u; // 80269DEC
  c->ctr=c->r[12]; // 80269DF0
  if (true) { c->lr=0x80269DF8u; dispatch(c,c->ctr); } // 80269DF4
L_80269DF8:;
  c->lr=0x80269DFCu; f_8026922C(c); // 80269DF8
  goto L_8026A278; // 80269DFC
L_80269E00:;
  c->r[0]=R32(c->r[13]+0xFFFF9948u); // 80269E00
  cmps(c,0,(int32_t)c->r[0],0); // 80269E04
  if (crb(c,2)) { goto L_80269E70; } // 80269E08
  c->r[3]=0u+0x80600000u; // 80269E0C
  c->r[30]=R32(c->r[13]+0xFFFF99B8u); // 80269E10
  c->r[3]=c->r[3]+0xFFFF96A0u; // 80269E14
  W32(c->r[13]+0xFFFF994Cu,c->r[31]); // 80269E18
  c->r[0]=0u+0x0000000Au; // 80269E1C
  W32(c->r[13]+0xFFFF9948u,c->r[31]); // 80269E20
  W32(c->r[13]+0xFFFF99B8u,c->r[3]); // 80269E24
  W32(c->r[30]+0x0000000Cu,c->r[0]); // 80269E28
  c->r[12]=R32(c->r[30]+0x00000028u); // 80269E2C
  cmps(c,0,(int32_t)c->r[12],0); // 80269E30
  if (crb(c,2)) { goto L_80269E48; } // 80269E34
  c->r[4]=c->r[30]|c->r[30]; // 80269E38
  c->r[3]=0u+0xFFFFFFFDu; // 80269E3C
  c->ctr=c->r[12]; // 80269E40
  if (true) { c->lr=0x80269E48u; dispatch(c,c->ctr); } // 80269E44
L_80269E48:;
  c->r[12]=R32(c->r[13]+0xFFFF99A8u); // 80269E48
  cmps(c,0,(int32_t)c->r[12],0); // 80269E4C
  if (crb(c,2)) { goto L_80269E64; } // 80269E50
  c->r[4]=c->r[30]|c->r[30]; // 80269E54
  c->r[3]=0u+0x00000000u; // 80269E58
  c->ctr=c->r[12]; // 80269E5C
  if (true) { c->lr=0x80269E64u; dispatch(c,c->ctr); } // 80269E60
L_80269E64:;
  c->lr=0x80269E68u; f_8026922C(c); // 80269E64
  c->r[0]=0u+0x00000001u; // 80269E68
  goto L_80269E74; // 80269E6C
L_80269E70:;
  c->r[0]=0u+0x00000000u; // 80269E70
L_80269E74:;
  cmps(c,0,(int32_t)c->r[0],0); // 80269E74
  if (!crb(c,2)) { goto L_8026A278; } // 80269E78
  c->r[0]=R32(c->r[13]+0xFFFF99ACu); // 80269E7C
  cmpu(c,0,c->r[0],0x00000026u); // 80269E80
  if (!crb(c,2)) { goto L_80269F30; } // 80269E84
  c->lr=0x80269E8Cu; f_8026CC08(c); // 80269E88
  c->r[31]=c->r[3]|c->r[3]; // 80269E8C
  c->lr=0x80269E94u; f_802627A0(c); // 80269E90
  c->r[6]=0u+0x80000000u; // 80269E94
  c->r[5]=0u+0x10620000u; // 80269E98
  c->r[6]=R32(c->r[6]+0x000000F8u); // 80269E9C
  c->r[7]=c->r[5]+0x00004DD3u; // 80269EA0
  c->r[8]=R32(c->r[13]+0xFFFF9990u); // 80269EA4
  c->r[0]=0u+0x00000000u; // 80269EA8
  c->r[5]=rotl(c->r[6],30)&0x3FFFFFFFu; // 80269EAC
  c->r[9]=R32(c->r[13]+0xFFFF9994u); // 80269EB0
  c->r[6]=(uint32_t)(((uint64_t)c->r[7]*(uint64_t)c->r[5])>>32); // 80269EB4
  c->r[4]=addc(c,~c->r[9],c->r[4],1); // 80269EB8
  c->r[5]=c->r[0]^0x80000000u; // 80269EBC
  c->r[0]=addc(c,~c->r[8],c->r[3],c->xer_ca); // 80269EC0
  c->r[0]=c->r[0]^0x80000000u; // 80269EC4
  c->r[3]=rotl(c->r[6],26)&0x03FFFFFFu; // 80269EC8
  c->r[3]=(uint32_t)((int32_t)c->r[3]*(int32_t)100); // 80269ECC
  c->r[3]=addc(c,~c->r[3],c->r[4],1); // 80269ED0
  c->r[5]=addc(c,~c->r[5],c->r[0],c->xer_ca); // 80269ED4
  c->r[5]=addc(c,~c->r[0],c->r[0],c->xer_ca); // 80269ED8
  c->r[5]=0u-c->r[5]; cr0(c,c->r[5]); // 80269EDC
  if (crb(c,2)) { goto L_80269EEC; } // 80269EE0
  c->r[3]=0u+0x00000000u; // 80269EE4
  goto L_80269EF8; // 80269EE8
L_80269EEC:;
  c->r[0]=rotl(c->r[31],0)&0x00000001u; // 80269EEC
  c->r[3]=0u-c->r[0]; // 80269EF0
  c->r[3]=c->r[3]+0x00000002u; // 80269EF4
L_80269EF8:;
  c->r[5]=0u+0x80600000u; // 80269EF8
  c->r[4]=R32(c->r[13]+0xFFFF99B8u); // 80269EFC
  c->r[5]=c->r[5]+0xFFFF96A0u; // 80269F00
  c->r[0]=0u+0x00000000u; // 80269F04
  W32(c->r[13]+0xFFFF99B8u,c->r[5]); // 80269F08
  W32(c->r[4]+0x0000000Cu,c->r[0]); // 80269F0C
  W32(c->r[4]+0x00000010u,c->r[3]); // 80269F10
  c->r[12]=R32(c->r[4]+0x00000028u); // 80269F14
  cmps(c,0,(int32_t)c->r[12],0); // 80269F18
  if (crb(c,2)) { goto L_80269F28; } // 80269F1C
  c->ctr=c->r[12]; // 80269F20
  if (true) { c->lr=0x80269F28u; dispatch(c,c->ctr); } // 80269F24
L_80269F28:;
  c->lr=0x80269F2Cu; f_8026922C(c); // 80269F28
  goto L_8026A278; // 80269F2C
L_80269F30:;
  c->r[0]=R32(c->r[13]+0xFFFF99ACu); // 80269F30
  cmpu(c,0,c->r[0],0x00000024u); // 80269F34
  if (!crb(c,2)) { goto L_80269F9C; } // 80269F38
  c->lr=0x80269F40u; f_8026CC08(c); // 80269F3C
  c->r[0]=rotl(c->r[3],30)&0x00000001u; cr0(c,c->r[0]); // 80269F40
  if (!crb(c,2)) { goto L_80269F50; } // 80269F44
  c->r[0]=rotl(c->r[3],0)&0x00000001u; cr0(c,c->r[0]); // 80269F48
  if (crb(c,2)) { goto L_80269F58; } // 80269F4C
L_80269F50:;
  c->r[3]=0u+0x00000000u; // 80269F50
  goto L_80269F64; // 80269F54
L_80269F58:;
  c->r[0]=R32(c->r[13]+0xFFFF994Cu); // 80269F58
  c->r[0]=cntlz(c->r[0]); // 80269F5C
  c->r[3]=rotl(c->r[0],27)&0x07FFFFFFu; // 80269F60
L_80269F64:;
  c->r[5]=0u+0x80600000u; // 80269F64
  c->r[4]=R32(c->r[13]+0xFFFF99B8u); // 80269F68
  c->r[5]=c->r[5]+0xFFFF96A0u; // 80269F6C
  c->r[0]=0u+0x00000000u; // 80269F70
  W32(c->r[13]+0xFFFF99B8u,c->r[5]); // 80269F74
  W32(c->r[4]+0x0000000Cu,c->r[0]); // 80269F78
  W32(c->r[4]+0x00000010u,c->r[3]); // 80269F7C
  c->r[12]=R32(c->r[4]+0x00000028u); // 80269F80
  cmps(c,0,(int32_t)c->r[12],0); // 80269F84
  if (crb(c,2)) { goto L_80269F94; } // 80269F88
  c->ctr=c->r[12]; // 80269F8C
  if (true) { c->lr=0x80269F94u; dispatch(c,c->ctr); } // 80269F90
L_80269F94:;
  c->lr=0x80269F98u; f_8026922C(c); // 80269F94
  goto L_8026A278; // 80269F98
L_80269F9C:;
  c->r[3]=R32(c->r[13]+0xFFFF99ACu); // 80269F9C
  cmpu(c,0,c->r[3],0x00000001u); // 80269FA0
  if (crb(c,2)) { goto L_80269FC8; } // 80269FA4
  cmpu(c,0,c->r[3],0x00000004u); // 80269FA8
  if (crb(c,2)) { goto L_80269FC8; } // 80269FAC
  cmpu(c,0,c->r[3],0x00000005u); // 80269FB0
  if (crb(c,2)) { goto L_80269FC8; } // 80269FB4
  cmpu(c,0,c->r[3],0x00000021u); // 80269FB8
  if (crb(c,2)) { goto L_80269FC8; } // 80269FBC
  cmpu(c,0,c->r[3],0x0000000Eu); // 80269FC0
  if (!crb(c,2)) { goto L_80269FD0; } // 80269FC4
L_80269FC8:;
  c->r[0]=0u+0x00000001u; // 80269FC8
  goto L_80269FE8; // 80269FCC
L_80269FD0:;
  c->r[0]=R32(c->r[13]+0xFFFF8E44u); // 80269FD0
  cmpu(c,0,c->r[3],c->r[0]); // 80269FD4
  if (!crb(c,2)) { goto L_80269FE4; } // 80269FD8
  c->r[0]=0u+0x00000001u; // 80269FDC
  goto L_80269FE8; // 80269FE0
L_80269FE4:;
  c->r[0]=0u+0x00000000u; // 80269FE4
L_80269FE8:;
  cmps(c,0,(int32_t)c->r[0],0); // 80269FE8
  if (crb(c,2)) { goto L_8026A044; } // 80269FEC
  c->r[3]=R32(c->r[13]+0xFFFF99B8u); // 80269FF0
  c->r[4]=R32(c->r[3]+0x00000020u); // 80269FF4
  c->r[0]=R32(c->r[3]+0x00000014u); // 80269FF8
  cmpu(c,0,c->r[4],c->r[0]); // 80269FFC
  if (crb(c,2)) { goto L_8026A00C; } // 8026A000
  c->lr=0x8026A008u; f_80269554(c); // 8026A004
  goto L_8026A278; // 8026A008
L_8026A00C:;
  c->r[4]=0u+0x80600000u; // 8026A00C
  c->r[0]=0u+0x00000000u; // 8026A010
  c->r[4]=c->r[4]+0xFFFF96A0u; // 8026A014
  W32(c->r[13]+0xFFFF99B8u,c->r[4]); // 8026A018
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 8026A01C
  c->r[12]=R32(c->r[3]+0x00000028u); // 8026A020
  cmps(c,0,(int32_t)c->r[12],0); // 8026A024
  if (crb(c,2)) { goto L_8026A03C; } // 8026A028
  c->r[4]=c->r[3]|c->r[3]; // 8026A02C
  c->r[3]=R32(c->r[3]+0x00000020u); // 8026A030
  c->ctr=c->r[12]; // 8026A034
  if (true) { c->lr=0x8026A03Cu; dispatch(c,c->ctr); } // 8026A038
L_8026A03C:;
  c->lr=0x8026A040u; f_8026922C(c); // 8026A03C
  goto L_8026A278; // 8026A040
L_8026A044:;
  c->r[3]=R32(c->r[13]+0xFFFF99ACu); // 8026A044
  c->r[0]=c->r[3]+0xFFFFFFF7u; // 8026A048
  cmpu(c,0,c->r[0],0x00000003u); // 8026A04C
  if (crb(c,1)) { goto L_8026A05C; } // 8026A050
  c->r[0]=0u+0x00000001u; // 8026A054
  goto L_8026A0A0; // 8026A058
L_8026A05C:;
  c->r[4]=0u+0x80420000u; // 8026A05C
  {uint32_t ea=c->r[4]+0xFFFFFE4Cu; c->r[0]=R32(ea); c->r[4]=ea;} // 8026A060
  cmpu(c,0,c->r[3],c->r[0]); // 8026A064
  if (!crb(c,2)) { goto L_8026A074; } // 8026A068
  c->r[0]=0u+0x00000001u; // 8026A06C
  goto L_8026A0A0; // 8026A070
L_8026A074:;
  c->r[0]=R32(c->r[4]+0x00000004u); // 8026A074
  cmpu(c,0,c->r[3],c->r[0]); // 8026A078
  if (!crb(c,2)) { goto L_8026A088; } // 8026A07C
  c->r[0]=0u+0x00000001u; // 8026A080
  goto L_8026A0A0; // 8026A084
L_8026A088:;
  c->r[0]=R32(c->r[4]+0x00000008u); // 8026A088
  cmpu(c,0,c->r[3],c->r[0]); // 8026A08C
  if (!crb(c,2)) { goto L_8026A09C; } // 8026A090
  c->r[0]=0u+0x00000001u; // 8026A094
  goto L_8026A0A0; // 8026A098
L_8026A09C:;
  c->r[0]=0u+0x00000000u; // 8026A09C
L_8026A0A0:;
  cmps(c,0,(int32_t)c->r[0],0); // 8026A0A0
  if (crb(c,2)) { goto L_8026A0FC; } // 8026A0A4
  c->r[3]=R32(c->r[13]+0xFFFF99ACu); // 8026A0A8
  c->r[0]=c->r[3]+0xFFFFFFF6u; // 8026A0AC
  cmpu(c,0,c->r[0],0x00000001u); // 8026A0B0
  if (crb(c,1)) { goto L_8026A0C4; } // 8026A0B4
  c->lr=0x8026A0BCu; f_8026CD80(c); // 8026A0B8
  c->r[3]=rotl(c->r[3],2)&0xFFFFFFFCu; // 8026A0BC
  goto L_8026A0C8; // 8026A0C0
L_8026A0C4:;
  c->lr=0x8026A0C8u; f_8026CD80(c); // 8026A0C4
L_8026A0C8:;
  c->r[5]=0u+0x80600000u; // 8026A0C8
  c->r[4]=R32(c->r[13]+0xFFFF99B8u); // 8026A0CC
  c->r[5]=c->r[5]+0xFFFF96A0u; // 8026A0D0
  c->r[0]=0u+0x00000000u; // 8026A0D4
  W32(c->r[13]+0xFFFF99B8u,c->r[5]); // 8026A0D8
  W32(c->r[4]+0x0000000Cu,c->r[0]); // 8026A0DC
  c->r[12]=R32(c->r[4]+0x00000028u); // 8026A0E0
  cmps(c,0,(int32_t)c->r[12],0); // 8026A0E4
  if (crb(c,2)) { goto L_8026A0F4; } // 8026A0E8
  c->ctr=c->r[12]; // 8026A0EC
  if (true) { c->lr=0x8026A0F4u; dispatch(c,c->ctr); } // 8026A0F0
L_8026A0F4:;
  c->lr=0x8026A0F8u; f_8026922C(c); // 8026A0F4
  goto L_8026A278; // 8026A0F8
L_8026A0FC:;
  c->r[3]=0u+0x80600000u; // 8026A0FC
  c->r[4]=R32(c->r[13]+0xFFFF99B8u); // 8026A100
  c->r[3]=c->r[3]+0xFFFF96A0u; // 8026A104
  c->r[0]=0u+0x00000000u; // 8026A108
  W32(c->r[13]+0xFFFF99B8u,c->r[3]); // 8026A10C
  W32(c->r[4]+0x0000000Cu,c->r[0]); // 8026A110
  c->r[12]=R32(c->r[4]+0x00000028u); // 8026A114
  cmps(c,0,(int32_t)c->r[12],0); // 8026A118
  if (crb(c,2)) { goto L_8026A12C; } // 8026A11C
  c->r[3]=0u+0x00000000u; // 8026A120
  c->ctr=c->r[12]; // 8026A124
  if (true) { c->lr=0x8026A12Cu; dispatch(c,c->ctr); } // 8026A128
L_8026A12C:;
  c->lr=0x8026A130u; f_8026922C(c); // 8026A12C
  goto L_8026A278; // 8026A130
L_8026A134:;
  c->r[0]=R32(c->r[13]+0xFFFF99ACu); // 8026A134
  cmpu(c,0,c->r[0],0x0000000Eu); // 8026A138
  if (!crb(c,2)) { goto L_8026A158; } // 8026A13C
  c->r[3]=0u+0x01230000u; // 8026A140
  c->r[4]=0u+0x80260000u; // 8026A144
  c->r[3]=c->r[3]+0x00004567u; // 8026A148
  c->r[4]=c->r[4]+0x00006E50u; // 8026A14C
  c->lr=0x8026A154u; f_8026B24C(c); // 8026A150
  goto L_8026A278; // 8026A154
L_8026A158:;
  c->r[0]=R32(c->r[13]+0xFFFF99ACu); // 8026A158
  cmpu(c,0,c->r[0],0x00000001u); // 8026A15C
  if (crb(c,2)) { goto L_8026A194; } // 8026A160
  c->r[0]=R32(c->r[13]+0xFFFF99ACu); // 8026A164
  cmpu(c,0,c->r[0],0x00000004u); // 8026A168
  if (crb(c,2)) { goto L_8026A194; } // 8026A16C
  c->r[0]=R32(c->r[13]+0xFFFF99ACu); // 8026A170
  cmpu(c,0,c->r[0],0x00000005u); // 8026A174
  if (crb(c,2)) { goto L_8026A194; } // 8026A178
  c->r[0]=R32(c->r[13]+0xFFFF99ACu); // 8026A17C
  cmpu(c,0,c->r[0],0x00000021u); // 8026A180
  if (crb(c,2)) { goto L_8026A194; } // 8026A184
  c->r[0]=R32(c->r[13]+0xFFFF99ACu); // 8026A188
  cmpu(c,0,c->r[0],0x0000000Eu); // 8026A18C
  if (!crb(c,2)) { goto L_8026A25C; } // 8026A190
L_8026A194:;
  c->r[30]=R32(c->r[13]+0xFFFF99B8u); // 8026A194
  c->r[3]=R32(c->r[30]+0x00000020u); // 8026A198
  c->r[0]=R32(c->r[30]+0x00000014u); // 8026A19C
  cmpu(c,0,c->r[3],c->r[0]); // 8026A1A0
  if (!crb(c,2)) { goto L_8026A25C; } // 8026A1A4
  c->r[0]=R32(c->r[13]+0xFFFF9948u); // 8026A1A8
  cmps(c,0,(int32_t)c->r[0],0); // 8026A1AC
  if (crb(c,2)) { goto L_8026A218; } // 8026A1B0
  c->r[3]=0u+0x80600000u; // 8026A1B4
  c->r[4]=0u+0x00000000u; // 8026A1B8
  c->r[3]=c->r[3]+0xFFFF96A0u; // 8026A1BC
  W32(c->r[13]+0xFFFF994Cu,c->r[4]); // 8026A1C0
  c->r[0]=0u+0x0000000Au; // 8026A1C4
  W32(c->r[13]+0xFFFF9948u,c->r[4]); // 8026A1C8
  W32(c->r[13]+0xFFFF99B8u,c->r[3]); // 8026A1CC
  W32(c->r[30]+0x0000000Cu,c->r[0]); // 8026A1D0
  c->r[12]=R32(c->r[30]+0x00000028u); // 8026A1D4
  cmps(c,0,(int32_t)c->r[12],0); // 8026A1D8
  if (crb(c,2)) { goto L_8026A1F0; } // 8026A1DC
  c->r[4]=c->r[30]|c->r[30]; // 8026A1E0
  c->r[3]=0u+0xFFFFFFFDu; // 8026A1E4
  c->ctr=c->r[12]; // 8026A1E8
  if (true) { c->lr=0x8026A1F0u; dispatch(c,c->ctr); } // 8026A1EC
L_8026A1F0:;
  c->r[12]=R32(c->r[13]+0xFFFF99A8u); // 8026A1F0
  cmps(c,0,(int32_t)c->r[12],0); // 8026A1F4
  if (crb(c,2)) { goto L_8026A20C; } // 8026A1F8
  c->r[4]=c->r[30]|c->r[30]; // 8026A1FC
  c->r[3]=0u+0x00000000u; // 8026A200
  c->ctr=c->r[12]; // 8026A204
  if (true) { c->lr=0x8026A20Cu; dispatch(c,c->ctr); } // 8026A208
L_8026A20C:;
  c->lr=0x8026A210u; f_8026922C(c); // 8026A20C
  c->r[0]=0u+0x00000001u; // 8026A210
  goto L_8026A21C; // 8026A214
L_8026A218:;
  c->r[0]=0u+0x00000000u; // 8026A218
L_8026A21C:;
  cmps(c,0,(int32_t)c->r[0],0); // 8026A21C
  if (!crb(c,2)) { goto L_8026A278; } // 8026A220
  c->r[3]=0u+0x80600000u; // 8026A224
  c->r[4]=R32(c->r[13]+0xFFFF99B8u); // 8026A228
  c->r[3]=c->r[3]+0xFFFF96A0u; // 8026A22C
  c->r[0]=0u+0x00000000u; // 8026A230
  W32(c->r[13]+0xFFFF99B8u,c->r[3]); // 8026A234
  W32(c->r[4]+0x0000000Cu,c->r[0]); // 8026A238
  c->r[12]=R32(c->r[4]+0x00000028u); // 8026A23C
  cmps(c,0,(int32_t)c->r[12],0); // 8026A240
  if (crb(c,2)) { goto L_8026A254; } // 8026A244
  c->r[3]=R32(c->r[4]+0x00000020u); // 8026A248
  c->ctr=c->r[12]; // 8026A24C
  if (true) { c->lr=0x8026A254u; dispatch(c,c->ctr); } // 8026A250
L_8026A254:;
  c->lr=0x8026A258u; f_8026922C(c); // 8026A254
  goto L_8026A278; // 8026A258
L_8026A25C:;
  c->r[3]=0u+0x00000027u; // 8026A25C
  c->r[4]=0u+0x00000000u; // 8026A260
  c->r[5]=0u+0x00000000u; // 8026A264
  c->lr=0x8026A26Cu; f_802668A8(c); // 8026A268
  c->r[3]=0u+0x80260000u; // 8026A26C
  c->r[3]=c->r[3]+0x00007058u; // 8026A270
  c->lr=0x8026A278u; f_8026C2D8(c); // 8026A274
L_8026A278:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8026A278
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8026A27C
  c->r[30]=R32(c->r[1]+0x00000008u); // 8026A280
  c->lr=c->r[0]; // 8026A284
  c->r[1]=c->r[1]+0x00000010u; // 8026A288
  return; // 8026A28C
}

// DVDReadAbsAsyncPrio
void f_8026A290(Ctx* __restrict c) {
  trace_call(0x8026A290u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8026A290
  c->r[0]=c->lr; // 8026A294
  c->r[9]=0u+0x00000001u; // 8026A298
  W32(c->r[1]+0x00000024u,c->r[0]); // 8026A29C
  c->r[0]=0u+0x00000000u; // 8026A2A0
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8026A2A4
  c->r[31]=c->r[8]|c->r[8]; // 8026A2A8
  W32(c->r[1]+0x00000018u,c->r[30]); // 8026A2AC
  W32(c->r[1]+0x00000014u,c->r[29]); // 8026A2B0
  c->r[29]=c->r[3]|c->r[3]; // 8026A2B4
  W32(c->r[3]+0x00000008u,c->r[9]); // 8026A2B8
  W32(c->r[3]+0x00000018u,c->r[4]); // 8026A2BC
  W32(c->r[3]+0x00000014u,c->r[5]); // 8026A2C0
  W32(c->r[3]+0x00000010u,c->r[6]); // 8026A2C4
  W32(c->r[3]+0x00000020u,c->r[0]); // 8026A2C8
  W32(c->r[3]+0x00000028u,c->r[7]); // 8026A2CC
  c->r[0]=R32(c->r[13]+0xFFFF8E34u); // 8026A2D0
  cmps(c,0,(int32_t)c->r[0],0); // 8026A2D4
  if (crb(c,2)) { goto L_8026A310; } // 8026A2D8
  cmpu(c,0,c->r[9],0x00000001u); // 8026A2DC
  if (crb(c,2)) { goto L_8026A304; } // 8026A2E0
  cmpu(c,0,c->r[9],0x00000004u); // 8026A2E4
  if (crb(c,2)) { goto L_8026A304; } // 8026A2E8
  cmpu(c,0,c->r[9],0x00000005u); // 8026A2EC
  if (crb(c,2)) { goto L_8026A304; } // 8026A2F0
  cmpu(c,0,c->r[9],0x00000021u); // 8026A2F4
  if (crb(c,2)) { goto L_8026A304; } // 8026A2F8
  cmpu(c,0,c->r[9],0x0000000Eu); // 8026A2FC
  if (!crb(c,2)) { goto L_8026A310; } // 8026A300
L_8026A304:;
  c->r[3]=R32(c->r[3]+0x00000018u); // 8026A304
  c->r[4]=R32(c->r[29]+0x00000014u); // 8026A308
  c->lr=0x8026A310u; f_8025A3D4(c); // 8026A30C
L_8026A310:;
  c->lr=0x8026A314u; f_8025EA10(c); // 8026A310
  c->r[0]=0u+0x00000002u; // 8026A314
  c->r[30]=c->r[3]|c->r[3]; // 8026A318
  W32(c->r[29]+0x0000000Cu,c->r[0]); // 8026A31C
  c->r[3]=c->r[31]|c->r[31]; // 8026A320
  c->r[4]=c->r[29]|c->r[29]; // 8026A324
  c->lr=0x8026A32Cu; f_8026ADC8(c); // 8026A328
  c->r[0]=R32(c->r[13]+0xFFFF99B8u); // 8026A32C
  c->r[31]=c->r[3]|c->r[3]; // 8026A330
  cmps(c,0,(int32_t)c->r[0],0); // 8026A334
  if (!crb(c,2)) { goto L_8026A34C; } // 8026A338
  c->r[0]=R32(c->r[13]+0xFFFF993Cu); // 8026A33C
  cmps(c,0,(int32_t)c->r[0],0); // 8026A340
  if (!crb(c,2)) { goto L_8026A34C; } // 8026A344
  c->lr=0x8026A34Cu; f_8026922C(c); // 8026A348
L_8026A34C:;
  c->r[3]=c->r[30]|c->r[30]; // 8026A34C
  c->lr=0x8026A354u; f_8025EA38(c); // 8026A350
  c->r[3]=c->r[31]|c->r[31]; // 8026A354
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8026A358
  c->r[30]=R32(c->r[1]+0x00000018u); // 8026A35C
  c->r[29]=R32(c->r[1]+0x00000014u); // 8026A360
  c->r[0]=R32(c->r[1]+0x00000024u); // 8026A364
  c->lr=c->r[0]; // 8026A368
  c->r[1]=c->r[1]+0x00000020u; // 8026A36C
  return; // 8026A370
}

// DVDInquiryAsync
void f_8026A374(Ctx* __restrict c) {
  trace_call(0x8026A374u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8026A374
  c->r[0]=c->lr; // 8026A378
  c->r[7]=0u+0x0000000Eu; // 8026A37C
  c->r[6]=0u+0x00000020u; // 8026A380
  W32(c->r[1]+0x00000014u,c->r[0]); // 8026A384
  c->r[0]=0u+0x00000000u; // 8026A388
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8026A38C
  c->r[31]=c->r[3]|c->r[3]; // 8026A390
  W32(c->r[1]+0x00000008u,c->r[30]); // 8026A394
  W32(c->r[3]+0x00000008u,c->r[7]); // 8026A398
  W32(c->r[3]+0x00000018u,c->r[4]); // 8026A39C
  W32(c->r[3]+0x00000014u,c->r[6]); // 8026A3A0
  W32(c->r[3]+0x00000020u,c->r[0]); // 8026A3A4
  W32(c->r[3]+0x00000028u,c->r[5]); // 8026A3A8
  c->r[0]=R32(c->r[13]+0xFFFF8E34u); // 8026A3AC
  cmps(c,0,(int32_t)c->r[0],0); // 8026A3B0
  if (crb(c,2)) { goto L_8026A3EC; } // 8026A3B4
  cmpu(c,0,c->r[7],0x00000001u); // 8026A3B8
  if (crb(c,2)) { goto L_8026A3E0; } // 8026A3BC
  cmpu(c,0,c->r[7],0x00000004u); // 8026A3C0
  if (crb(c,2)) { goto L_8026A3E0; } // 8026A3C4
  cmpu(c,0,c->r[7],0x00000005u); // 8026A3C8
  if (crb(c,2)) { goto L_8026A3E0; } // 8026A3CC
  cmpu(c,0,c->r[7],0x00000021u); // 8026A3D0
  if (crb(c,2)) { goto L_8026A3E0; } // 8026A3D4
  cmpu(c,0,c->r[7],0x0000000Eu); // 8026A3D8
  if (!crb(c,2)) { goto L_8026A3EC; } // 8026A3DC
L_8026A3E0:;
  c->r[3]=R32(c->r[3]+0x00000018u); // 8026A3E0
  c->r[4]=R32(c->r[31]+0x00000014u); // 8026A3E4
  c->lr=0x8026A3ECu; f_8025A3D4(c); // 8026A3E8
L_8026A3EC:;
  c->lr=0x8026A3F0u; f_8025EA10(c); // 8026A3EC
  c->r[0]=0u+0x00000002u; // 8026A3F0
  c->r[30]=c->r[3]|c->r[3]; // 8026A3F4
  W32(c->r[31]+0x0000000Cu,c->r[0]); // 8026A3F8
  c->r[4]=c->r[31]|c->r[31]; // 8026A3FC
  c->r[3]=0u+0x00000002u; // 8026A400
  c->lr=0x8026A408u; f_8026ADC8(c); // 8026A404
  c->r[0]=R32(c->r[13]+0xFFFF99B8u); // 8026A408
  c->r[31]=c->r[3]|c->r[3]; // 8026A40C
  cmps(c,0,(int32_t)c->r[0],0); // 8026A410
  if (!crb(c,2)) { goto L_8026A428; } // 8026A414
  c->r[0]=R32(c->r[13]+0xFFFF993Cu); // 8026A418
  cmps(c,0,(int32_t)c->r[0],0); // 8026A41C
  if (!crb(c,2)) { goto L_8026A428; } // 8026A420
  c->lr=0x8026A428u; f_8026922C(c); // 8026A424
L_8026A428:;
  c->r[3]=c->r[30]|c->r[30]; // 8026A428
  c->lr=0x8026A430u; f_8025EA38(c); // 8026A42C
  c->r[3]=c->r[31]|c->r[31]; // 8026A430
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8026A434
  c->r[30]=R32(c->r[1]+0x00000008u); // 8026A438
  c->r[0]=R32(c->r[1]+0x00000014u); // 8026A43C
  c->lr=c->r[0]; // 8026A440
  c->r[1]=c->r[1]+0x00000010u; // 8026A444
  return; // 8026A448
}

// DVDGetCommandBlockStatus
void f_8026A44C(Ctx* __restrict c) {
  trace_call(0x8026A44Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8026A44C
  c->r[0]=c->lr; // 8026A450
  W32(c->r[1]+0x00000024u,c->r[0]); // 8026A454
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8026A458
  W32(c->r[1]+0x00000018u,c->r[30]); // 8026A45C
  W32(c->r[1]+0x00000014u,c->r[29]); // 8026A460
  c->r[29]=c->r[3]|c->r[3]; // 8026A464
  c->lr=0x8026A46Cu; f_8025EA10(c); // 8026A468
  c->r[0]=R32(c->r[29]+0x0000000Cu); // 8026A46C
  c->r[30]=c->r[3]|c->r[3]; // 8026A470
  cmps(c,0,(int32_t)c->r[0],3); // 8026A474
  if (!crb(c,2)) { goto L_8026A484; } // 8026A478
  c->r[31]=0u+0x00000001u; // 8026A47C
  goto L_8026A4EC; // 8026A480
L_8026A484:;
  c->r[0]=R32(c->r[29]+0x0000000Cu); // 8026A484
  cmps(c,0,(int32_t)c->r[0],5); // 8026A488
  if (!crb(c,2)) { goto L_8026A498; } // 8026A48C
  c->r[31]=0u+0x00000004u; // 8026A490
  goto L_8026A4EC; // 8026A494
L_8026A498:;
  c->r[31]=0u+0x80600000u; // 8026A498
  c->r[0]=R32(c->r[13]+0xFFFF99B8u); // 8026A49C
  c->r[31]=c->r[31]+0xFFFFE1F0u; // 8026A4A0
  cmpu(c,0,c->r[0],c->r[31]); // 8026A4A4
  if (!crb(c,2)) { goto L_8026A4E8; } // 8026A4A8
  c->lr=0x8026A4B0u; f_8026AF28(c); // 8026A4AC
  cmps(c,0,(int32_t)c->r[3],0); // 8026A4B0
  if (crb(c,2)) { goto L_8026A4D0; } // 8026A4B4
  cmpu(c,0,c->r[29],c->r[3]); // 8026A4B8
  if (!crb(c,2)) { goto L_8026A4C8; } // 8026A4BC
  c->r[31]=0u+0x00000001u; // 8026A4C0
  goto L_8026A4EC; // 8026A4C4
L_8026A4C8:;
  c->r[31]=R32(c->r[29]+0x0000000Cu); // 8026A4C8
  goto L_8026A4EC; // 8026A4CC
L_8026A4D0:;
  cmpu(c,0,c->r[29],c->r[31]); // 8026A4D0
  if (!crb(c,2)) { goto L_8026A4E0; } // 8026A4D4
  c->r[31]=0u+0x00000000u; // 8026A4D8
  goto L_8026A4EC; // 8026A4DC
L_8026A4E0:;
  c->r[31]=R32(c->r[29]+0x0000000Cu); // 8026A4E0
  goto L_8026A4EC; // 8026A4E4
L_8026A4E8:;
  c->r[31]=R32(c->r[29]+0x0000000Cu); // 8026A4E8
L_8026A4EC:;
  c->r[3]=c->r[30]|c->r[30]; // 8026A4EC
  c->lr=0x8026A4F4u; f_8025EA38(c); // 8026A4F0
  c->r[3]=c->r[31]|c->r[31]; // 8026A4F4
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8026A4F8
  c->r[30]=R32(c->r[1]+0x00000018u); // 8026A4FC
  c->r[29]=R32(c->r[1]+0x00000014u); // 8026A500
  c->r[0]=R32(c->r[1]+0x00000024u); // 8026A504
  c->lr=c->r[0]; // 8026A508
  c->r[1]=c->r[1]+0x00000020u; // 8026A50C
  return; // 8026A510
}

// DVDGetDriveStatus
void f_8026A514(Ctx* __restrict c) {
  trace_call(0x8026A514u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8026A514
  c->r[0]=c->lr; // 8026A518
  W32(c->r[1]+0x00000014u,c->r[0]); // 8026A51C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8026A520
  W32(c->r[1]+0x00000008u,c->r[30]); // 8026A524
  c->lr=0x8026A52Cu; f_8025EA10(c); // 8026A528
  c->r[0]=R32(c->r[13]+0xFFFF9944u); // 8026A52C
  c->r[31]=c->r[3]|c->r[3]; // 8026A530
  cmps(c,0,(int32_t)c->r[0],0); // 8026A534
  if (crb(c,2)) { goto L_8026A544; } // 8026A538
  c->r[30]=0u+0xFFFFFFFFu; // 8026A53C
  goto L_8026A58C; // 8026A540
L_8026A544:;
  c->r[0]=R32(c->r[13]+0xFFFF9940u); // 8026A544
  cmps(c,0,(int32_t)c->r[0],0); // 8026A548
  if (crb(c,2)) { goto L_8026A558; } // 8026A54C
  c->r[30]=0u+0x00000008u; // 8026A550
  goto L_8026A58C; // 8026A554
L_8026A558:;
  c->r[3]=R32(c->r[13]+0xFFFF99B8u); // 8026A558
  cmps(c,0,(int32_t)c->r[3],0); // 8026A55C
  if (!crb(c,2)) { goto L_8026A56C; } // 8026A560
  c->r[30]=0u+0x00000000u; // 8026A564
  goto L_8026A58C; // 8026A568
L_8026A56C:;
  c->r[4]=0u+0x80600000u; // 8026A56C
  c->r[4]=c->r[4]+0xFFFF96A0u; // 8026A570
  cmpu(c,0,c->r[3],c->r[4]); // 8026A574
  if (!crb(c,2)) { goto L_8026A584; } // 8026A578
  c->r[3]=0u+0x00000000u; // 8026A57C
  goto L_8026A588; // 8026A580
L_8026A584:;
  c->lr=0x8026A588u; f_8026A44C(c); // 8026A584
L_8026A588:;
  c->r[30]=c->r[3]|c->r[3]; // 8026A588
L_8026A58C:;
  c->r[3]=c->r[31]|c->r[31]; // 8026A58C
  c->lr=0x8026A594u; f_8025EA38(c); // 8026A590
  c->r[3]=c->r[30]|c->r[30]; // 8026A594
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8026A598
  c->r[30]=R32(c->r[1]+0x00000008u); // 8026A59C
  c->r[0]=R32(c->r[1]+0x00000014u); // 8026A5A0
  c->lr=c->r[0]; // 8026A5A4
  c->r[1]=c->r[1]+0x00000010u; // 8026A5A8
  return; // 8026A5AC
}

// DVDSetAutoInvalidation
void f_8026A5B0(Ctx* __restrict c) {
  trace_call(0x8026A5B0u);
  c->r[0]=c->r[3]|c->r[3]; // 8026A5B0
  c->r[3]=R32(c->r[13]+0xFFFF8E34u); // 8026A5B4
  W32(c->r[13]+0xFFFF8E34u,c->r[0]); // 8026A5B8
  return; // 8026A5BC
}

// DVDResume
void f_8026A5C0(Ctx* __restrict c) {
  trace_call(0x8026A5C0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8026A5C0
  c->r[0]=c->lr; // 8026A5C4
  W32(c->r[1]+0x00000014u,c->r[0]); // 8026A5C8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8026A5CC
  c->lr=0x8026A5D4u; f_8025EA10(c); // 8026A5D0
  c->r[4]=0u+0x00000000u; // 8026A5D4
  c->r[31]=c->r[3]|c->r[3]; // 8026A5D8
  W32(c->r[13]+0xFFFF993Cu,c->r[4]); // 8026A5DC
  c->r[0]=R32(c->r[13]+0xFFFF9940u); // 8026A5E0
  cmps(c,0,(int32_t)c->r[0],0); // 8026A5E4
  if (crb(c,2)) { goto L_8026A5F4; } // 8026A5E8
  W32(c->r[13]+0xFFFF9940u,c->r[4]); // 8026A5EC
  c->lr=0x8026A5F4u; f_8026922C(c); // 8026A5F0
L_8026A5F4:;
  c->r[3]=c->r[31]|c->r[31]; // 8026A5F4
  c->lr=0x8026A5FCu; f_8025EA38(c); // 8026A5F8
  c->r[0]=R32(c->r[1]+0x00000014u); // 8026A5FC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8026A600
  c->lr=c->r[0]; // 8026A604
  c->r[1]=c->r[1]+0x00000010u; // 8026A608
  return; // 8026A60C
}

// fn_8026A610
void f_8026A610(Ctx* __restrict c) {
  trace_call(0x8026A610u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8026A610
  c->r[0]=c->lr; // 8026A614
  W32(c->r[1]+0x00000024u,c->r[0]); // 8026A618
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8026A61C
  W32(c->r[1]+0x00000018u,c->r[30]); // 8026A620
  c->r[30]=c->r[4]|c->r[4]; // 8026A624
  W32(c->r[1]+0x00000014u,c->r[29]); // 8026A628
  c->r[29]=c->r[3]|c->r[3]; // 8026A62C
  c->lr=0x8026A634u; f_8025EA10(c); // 8026A630
  c->r[4]=R32(c->r[29]+0x0000000Cu); // 8026A634
  c->r[31]=c->r[3]|c->r[3]; // 8026A638
  c->r[0]=c->r[4]+0x00000001u; // 8026A63C
  cmpu(c,0,c->r[0],0x0000000Du); // 8026A640
  if (crb(c,1)) { goto L_8026A93C; } // 8026A644
  c->r[4]=0u+0x80420000u; // 8026A648
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 8026A64C
  c->r[4]=c->r[4]+0xFFFFFEF0u; // 8026A650
  c->r[4]=R32(c->r[4]+c->r[0]); // 8026A654
  c->ctr=c->r[4]; // 8026A658
  if (true) { switch (c->ctr) { case 0x8026A660u: goto L_8026A660; case 0x8026A680u: goto L_8026A680; case 0x8026A6D4u: goto L_8026A6D4; case 0x8026A720u: goto L_8026A720; case 0x8026A744u: goto L_8026A744; case 0x8026A764u: goto L_8026A764; case 0x8026A7C4u: goto L_8026A7C4; case 0x8026A7F0u: goto L_8026A7F0; case 0x8026A8ECu: goto L_8026A8EC; case 0x8026A93Cu: goto L_8026A93C; default: break; } dispatch(c,c->ctr); return; } // 8026A65C
L_8026A660:;
  cmps(c,0,(int32_t)c->r[30],0); // 8026A660
  if (crb(c,2)) { goto L_8026A93C; } // 8026A664
  c->r[12]=c->r[30]|c->r[30]; // 8026A668
  c->r[4]=c->r[29]|c->r[29]; // 8026A66C
  c->r[3]=0u+0x00000000u; // 8026A670
  c->ctr=c->r[12]; // 8026A674
  if (true) { c->lr=0x8026A67Cu; dispatch(c,c->ctr); } // 8026A678
  goto L_8026A93C; // 8026A67C
L_8026A680:;
  c->r[0]=R32(c->r[13]+0xFFFF9948u); // 8026A680
  cmps(c,0,(int32_t)c->r[0],0); // 8026A684
  if (crb(c,2)) { goto L_8026A698; } // 8026A688
  c->lr=0x8026A690u; f_8025EA38(c); // 8026A68C
  c->r[3]=0u+0x00000000u; // 8026A690
  goto L_8026A948; // 8026A694
L_8026A698:;
  c->r[0]=0u+0x00000001u; // 8026A698
  W32(c->r[13]+0xFFFF99A8u,c->r[30]); // 8026A69C
  W32(c->r[13]+0xFFFF9948u,c->r[0]); // 8026A6A0
  c->r[0]=R32(c->r[29]+0x00000008u); // 8026A6A4
  cmpu(c,0,c->r[0],0x00000004u); // 8026A6A8
  if (crb(c,2)) { goto L_8026A6C8; } // 8026A6AC
  cmpu(c,0,c->r[0],0x00000021u); // 8026A6B0
  if (crb(c,2)) { goto L_8026A6C8; } // 8026A6B4
  cmpu(c,0,c->r[0],0x00000022u); // 8026A6B8
  if (crb(c,2)) { goto L_8026A6C8; } // 8026A6BC
  cmpu(c,0,c->r[0],0x00000001u); // 8026A6C0
  if (!crb(c,2)) { goto L_8026A93C; } // 8026A6C4
L_8026A6C8:;
  c->r[0]=0u+0x00000001u; // 8026A6C8
  W32(c->r[13]+0xFFFF9958u,c->r[0]); // 8026A6CC
  goto L_8026A93C; // 8026A6D0
L_8026A6D4:;
  c->r[3]=c->r[29]|c->r[29]; // 8026A6D4
  c->lr=0x8026A6DCu; f_8026AF88(c); // 8026A6D8
  c->r[12]=R32(c->r[29]+0x00000028u); // 8026A6DC
  c->r[0]=0u+0x0000000Au; // 8026A6E0
  W32(c->r[29]+0x0000000Cu,c->r[0]); // 8026A6E4
  cmps(c,0,(int32_t)c->r[12],0); // 8026A6E8
  if (crb(c,2)) { goto L_8026A700; } // 8026A6EC
  c->r[4]=c->r[29]|c->r[29]; // 8026A6F0
  c->r[3]=0u+0xFFFFFFFDu; // 8026A6F4
  c->ctr=c->r[12]; // 8026A6F8
  if (true) { c->lr=0x8026A700u; dispatch(c,c->ctr); } // 8026A6FC
L_8026A700:;
  cmps(c,0,(int32_t)c->r[30],0); // 8026A700
  if (crb(c,2)) { goto L_8026A93C; } // 8026A704
  c->r[12]=c->r[30]|c->r[30]; // 8026A708
  c->r[4]=c->r[29]|c->r[29]; // 8026A70C
  c->r[3]=0u+0x00000000u; // 8026A710
  c->ctr=c->r[12]; // 8026A714
  if (true) { c->lr=0x8026A71Cu; dispatch(c,c->ctr); } // 8026A718
  goto L_8026A93C; // 8026A71C
L_8026A720:;
  c->r[0]=R32(c->r[29]+0x00000008u); // 8026A720
  cmpu(c,0,c->r[0],0x00000025u); // 8026A724
  if (crb(c,1)) { goto L_8026A7C4; } // 8026A728
  c->r[3]=0u+0x80420000u; // 8026A72C
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 8026A730
  c->r[3]=c->r[3]+0xFFFFFE58u; // 8026A734
  c->r[3]=R32(c->r[3]+c->r[0]); // 8026A738
  c->ctr=c->r[3]; // 8026A73C
  if (true) { switch (c->ctr) { case 0x8026A660u: goto L_8026A660; case 0x8026A680u: goto L_8026A680; case 0x8026A6D4u: goto L_8026A6D4; case 0x8026A720u: goto L_8026A720; case 0x8026A744u: goto L_8026A744; case 0x8026A764u: goto L_8026A764; case 0x8026A7C4u: goto L_8026A7C4; case 0x8026A7F0u: goto L_8026A7F0; case 0x8026A8ECu: goto L_8026A8EC; case 0x8026A93Cu: goto L_8026A93C; default: break; } dispatch(c,c->ctr); return; } // 8026A740
L_8026A744:;
  cmps(c,0,(int32_t)c->r[30],0); // 8026A744
  if (crb(c,2)) { goto L_8026A93C; } // 8026A748
  c->r[12]=c->r[30]|c->r[30]; // 8026A74C
  c->r[4]=c->r[29]|c->r[29]; // 8026A750
  c->r[3]=0u+0x00000000u; // 8026A754
  c->ctr=c->r[12]; // 8026A758
  if (true) { c->lr=0x8026A760u; dispatch(c,c->ctr); } // 8026A75C
  goto L_8026A93C; // 8026A760
L_8026A764:;
  c->r[0]=R32(c->r[13]+0xFFFF97D8u); // 8026A764
  cmps(c,0,(int32_t)c->r[0],0); // 8026A768
  if (crb(c,2)) { goto L_8026A7C4; } // 8026A76C
  c->r[3]=0u+0x80600000u; // 8026A770
  c->r[0]=0u+0x0000000Au; // 8026A774
  c->r[3]=c->r[3]+0xFFFF96A0u; // 8026A778
  W32(c->r[13]+0xFFFF99B8u,c->r[3]); // 8026A77C
  c->r[12]=R32(c->r[29]+0x00000028u); // 8026A780
  W32(c->r[29]+0x0000000Cu,c->r[0]); // 8026A784
  cmps(c,0,(int32_t)c->r[12],0); // 8026A788
  if (crb(c,2)) { goto L_8026A7A0; } // 8026A78C
  c->r[4]=c->r[29]|c->r[29]; // 8026A790
  c->r[3]=0u+0xFFFFFFFDu; // 8026A794
  c->ctr=c->r[12]; // 8026A798
  if (true) { c->lr=0x8026A7A0u; dispatch(c,c->ctr); } // 8026A79C
L_8026A7A0:;
  cmps(c,0,(int32_t)c->r[30],0); // 8026A7A0
  if (crb(c,2)) { goto L_8026A7BC; } // 8026A7A4
  c->r[12]=c->r[30]|c->r[30]; // 8026A7A8
  c->r[4]=c->r[29]|c->r[29]; // 8026A7AC
  c->r[3]=0u+0x00000000u; // 8026A7B0
  c->ctr=c->r[12]; // 8026A7B4
  if (true) { c->lr=0x8026A7BCu; dispatch(c,c->ctr); } // 8026A7B8
L_8026A7BC:;
  c->lr=0x8026A7C0u; f_8026922C(c); // 8026A7BC
  goto L_8026A93C; // 8026A7C0
L_8026A7C4:;
  c->r[0]=R32(c->r[13]+0xFFFF9948u); // 8026A7C4
  cmps(c,0,(int32_t)c->r[0],0); // 8026A7C8
  if (crb(c,2)) { goto L_8026A7E0; } // 8026A7CC
  c->r[3]=c->r[31]|c->r[31]; // 8026A7D0
  c->lr=0x8026A7D8u; f_8025EA38(c); // 8026A7D4
  c->r[3]=0u+0x00000000u; // 8026A7D8
  goto L_8026A948; // 8026A7DC
L_8026A7E0:;
  c->r[0]=0u+0x00000001u; // 8026A7E0
  W32(c->r[13]+0xFFFF99A8u,c->r[30]); // 8026A7E4
  W32(c->r[13]+0xFFFF9948u,c->r[0]); // 8026A7E8
  goto L_8026A93C; // 8026A7EC
L_8026A7F0:;
  c->r[0]=R32(c->r[13]+0xFFFF9960u); // 8026A7F0
  cmps(c,0,(int32_t)c->r[0],0); // 8026A7F4
  if (!crb(c,2)) { goto L_8026A814; } // 8026A7F8
  c->r[0]=R32(c->r[13]+0xFFFF995Cu); // 8026A7FC
  cmps(c,0,(int32_t)c->r[0],0); // 8026A800
  if (!crb(c,2)) { goto L_8026A814; } // 8026A804
  c->lr=0x8026A80Cu; f_8025EA38(c); // 8026A808
  c->r[3]=0u+0x00000000u; // 8026A80C
  goto L_8026A948; // 8026A810
L_8026A814:;
  c->r[0]=R32(c->r[13]+0xFFFF995Cu); // 8026A814
  cmps(c,0,(int32_t)c->r[0],0); // 8026A818
  if (crb(c,2)) { goto L_8026A834; } // 8026A81C
  c->r[3]=0u+0x80600000u; // 8026A820
  c->r[3]=c->r[3]+0xFFFF9700u; // 8026A824
  c->lr=0x8026A82Cu; f_80259738(c); // 8026A828
  c->r[0]=0u+0x00000000u; // 8026A82C
  W32(c->r[13]+0xFFFF995Cu,c->r[0]); // 8026A830
L_8026A834:;
  c->r[0]=R32(c->r[29]+0x0000000Cu); // 8026A834
  cmps(c,0,(int32_t)c->r[0],4); // 8026A838
  if (!crb(c,2)) { goto L_8026A848; } // 8026A83C
  c->r[0]=0u+0x00000003u; // 8026A840
  W32(c->r[13]+0xFFFF994Cu,c->r[0]); // 8026A844
L_8026A848:;
  c->r[0]=R32(c->r[29]+0x0000000Cu); // 8026A848
  cmps(c,0,(int32_t)c->r[0],5); // 8026A84C
  if (!crb(c,2)) { goto L_8026A85C; } // 8026A850
  c->r[0]=0u+0x00000004u; // 8026A854
  W32(c->r[13]+0xFFFF994Cu,c->r[0]); // 8026A858
L_8026A85C:;
  c->r[0]=R32(c->r[29]+0x0000000Cu); // 8026A85C
  cmps(c,0,(int32_t)c->r[0],6); // 8026A860
  if (!crb(c,2)) { goto L_8026A870; } // 8026A864
  c->r[0]=0u+0x00000001u; // 8026A868
  W32(c->r[13]+0xFFFF994Cu,c->r[0]); // 8026A86C
L_8026A870:;
  c->r[0]=R32(c->r[29]+0x0000000Cu); // 8026A870
  cmps(c,0,(int32_t)c->r[0],11); // 8026A874
  if (!crb(c,2)) { goto L_8026A884; } // 8026A878
  c->r[0]=0u+0x00000002u; // 8026A87C
  W32(c->r[13]+0xFFFF994Cu,c->r[0]); // 8026A880
L_8026A884:;
  c->r[0]=R32(c->r[29]+0x0000000Cu); // 8026A884
  cmps(c,0,(int32_t)c->r[0],7); // 8026A888
  if (!crb(c,2)) { goto L_8026A898; } // 8026A88C
  c->r[0]=0u+0x00000007u; // 8026A890
  W32(c->r[13]+0xFFFF994Cu,c->r[0]); // 8026A894
L_8026A898:;
  c->r[3]=0u+0x80600000u; // 8026A898
  c->r[0]=0u+0x0000000Au; // 8026A89C
  c->r[3]=c->r[3]+0xFFFF96A0u; // 8026A8A0
  W32(c->r[13]+0xFFFF99B8u,c->r[3]); // 8026A8A4
  c->r[12]=R32(c->r[29]+0x00000028u); // 8026A8A8
  W32(c->r[29]+0x0000000Cu,c->r[0]); // 8026A8AC
  cmps(c,0,(int32_t)c->r[12],0); // 8026A8B0
  if (crb(c,2)) { goto L_8026A8C8; } // 8026A8B4
  c->r[4]=c->r[29]|c->r[29]; // 8026A8B8
  c->r[3]=0u+0xFFFFFFFDu; // 8026A8BC
  c->ctr=c->r[12]; // 8026A8C0
  if (true) { c->lr=0x8026A8C8u; dispatch(c,c->ctr); } // 8026A8C4
L_8026A8C8:;
  cmps(c,0,(int32_t)c->r[30],0); // 8026A8C8
  if (crb(c,2)) { goto L_8026A8E4; } // 8026A8CC
  c->r[12]=c->r[30]|c->r[30]; // 8026A8D0
  c->r[4]=c->r[29]|c->r[29]; // 8026A8D4
  c->r[3]=0u+0x00000000u; // 8026A8D8
  c->ctr=c->r[12]; // 8026A8DC
  if (true) { c->lr=0x8026A8E4u; dispatch(c,c->ctr); } // 8026A8E0
L_8026A8E4:;
  c->lr=0x8026A8E8u; f_8026922C(c); // 8026A8E4
  goto L_8026A93C; // 8026A8E8
L_8026A8EC:;
  c->r[3]=0u+0x80600000u; // 8026A8EC
  c->r[0]=0u+0x0000000Au; // 8026A8F0
  c->r[3]=c->r[3]+0xFFFF96A0u; // 8026A8F4
  W32(c->r[13]+0xFFFF99B8u,c->r[3]); // 8026A8F8
  c->r[12]=R32(c->r[29]+0x00000028u); // 8026A8FC
  W32(c->r[29]+0x0000000Cu,c->r[0]); // 8026A900
  cmps(c,0,(int32_t)c->r[12],0); // 8026A904
  if (crb(c,2)) { goto L_8026A91C; } // 8026A908
  c->r[4]=c->r[29]|c->r[29]; // 8026A90C
  c->r[3]=0u+0xFFFFFFFDu; // 8026A910
  c->ctr=c->r[12]; // 8026A914
  if (true) { c->lr=0x8026A91Cu; dispatch(c,c->ctr); } // 8026A918
L_8026A91C:;
  cmps(c,0,(int32_t)c->r[30],0); // 8026A91C
  if (crb(c,2)) { goto L_8026A938; } // 8026A920
  c->r[12]=c->r[30]|c->r[30]; // 8026A924
  c->r[4]=c->r[29]|c->r[29]; // 8026A928
  c->r[3]=0u+0x00000000u; // 8026A92C
  c->ctr=c->r[12]; // 8026A930
  if (true) { c->lr=0x8026A938u; dispatch(c,c->ctr); } // 8026A934
L_8026A938:;
  c->lr=0x8026A93Cu; f_8026922C(c); // 8026A938
L_8026A93C:;
  c->r[3]=c->r[31]|c->r[31]; // 8026A93C
  c->lr=0x8026A944u; f_8025EA38(c); // 8026A940
  c->r[3]=0u+0x00000001u; // 8026A944
L_8026A948:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 8026A948
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8026A94C
  c->r[30]=R32(c->r[1]+0x00000018u); // 8026A950
  c->r[29]=R32(c->r[1]+0x00000014u); // 8026A954
  c->lr=c->r[0]; // 8026A958
  c->r[1]=c->r[1]+0x00000020u; // 8026A95C
  return; // 8026A960
}

// fn_8026A964
void f_8026A964(Ctx* __restrict c) {
  trace_call(0x8026A964u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8026A964
  c->r[0]=c->lr; // 8026A968
  c->r[4]=0u+0x80270000u; // 8026A96C
  W32(c->r[1]+0x00000014u,c->r[0]); // 8026A970
  c->r[4]=c->r[4]+0xFFFFAA30u; // 8026A974
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8026A978
  W32(c->r[1]+0x00000008u,c->r[30]); // 8026A97C
  c->r[30]=c->r[3]|c->r[3]; // 8026A980
  c->lr=0x8026A988u; f_8026A610(c); // 8026A984
  cmps(c,0,(int32_t)c->r[3],0); // 8026A988
  if (!crb(c,2)) { goto L_8026A998; } // 8026A98C
  c->r[3]=0u+0xFFFFFFFFu; // 8026A990
  goto L_8026AA18; // 8026A994
L_8026A998:;
  c->lr=0x8026A99Cu; f_8025EA10(c); // 8026A998
  c->r[31]=c->r[3]|c->r[3]; // 8026A99C
L_8026A9A0:;
  c->r[0]=R32(c->r[30]+0x0000000Cu); // 8026A9A0
  cmps(c,0,(int32_t)c->r[0],0); // 8026A9A4
  if (crb(c,2)) { goto L_8026AA0C; } // 8026A9A8
  cmps(c,0,(int32_t)c->r[0],-1); // 8026A9AC
  if (crb(c,2)) { goto L_8026AA0C; } // 8026A9B0
  cmps(c,0,(int32_t)c->r[0],10); // 8026A9B4
  if (crb(c,2)) { goto L_8026AA0C; } // 8026A9B8
  cmps(c,0,(int32_t)c->r[0],3); // 8026A9BC
  if (!crb(c,2)) { goto L_8026AA00; } // 8026A9C0
  c->r[0]=R32(c->r[30]+0x00000008u); // 8026A9C4
  cmpu(c,0,c->r[0],0x00000004u); // 8026A9C8
  if (crb(c,2)) { goto L_8026AA0C; } // 8026A9CC
  cmpu(c,0,c->r[0],0x00000005u); // 8026A9D0
  if (crb(c,2)) { goto L_8026AA0C; } // 8026A9D4
  cmpu(c,0,c->r[0],0x0000000Du); // 8026A9D8
  if (crb(c,2)) { goto L_8026AA0C; } // 8026A9DC
  cmpu(c,0,c->r[0],0x00000021u); // 8026A9E0
  if (crb(c,2)) { goto L_8026AA0C; } // 8026A9E4
  cmpu(c,0,c->r[0],0x00000022u); // 8026A9E8
  if (crb(c,2)) { goto L_8026AA0C; } // 8026A9EC
  cmpu(c,0,c->r[0],0x0000000Fu); // 8026A9F0
  if (crb(c,2)) { goto L_8026AA0C; } // 8026A9F4
  cmpu(c,0,c->r[0],0x00000025u); // 8026A9F8
  if (crb(c,2)) { goto L_8026AA0C; } // 8026A9FC
L_8026AA00:;
  c->r[3]=c->r[13]+0xFFFF9920u; // 8026AA00
  c->lr=0x8026AA08u; f_802623D4(c); // 8026AA04
  IRQCHK(c); goto L_8026A9A0; // 8026AA08
L_8026AA0C:;
  c->r[3]=c->r[31]|c->r[31]; // 8026AA0C
  c->lr=0x8026AA14u; f_8025EA38(c); // 8026AA10
  c->r[3]=0u+0x00000000u; // 8026AA14
L_8026AA18:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8026AA18
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8026AA1C
  c->r[30]=R32(c->r[1]+0x00000008u); // 8026AA20
  c->lr=c->r[0]; // 8026AA24
  c->r[1]=c->r[1]+0x00000010u; // 8026AA28
  return; // 8026AA2C
}

// fn_8026AA30
void f_8026AA30(Ctx* __restrict c) {
  trace_call(0x8026AA30u);
  c->r[3]=c->r[13]+0xFFFF9920u; // 8026AA30
  f_802624C0(c); return; // 8026AA34
}

// fn_8026AA38
void f_8026AA38(Ctx* __restrict c) {
  trace_call(0x8026AA38u);
  W32(c->r[13]+0xFFFF9978u,c->r[3]); // 8026AA38
  return; // 8026AA3C
}

// __DVDGetCoverStatus
void f_8026AA40(Ctx* __restrict c) {
  trace_call(0x8026AA40u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8026AA40
  c->r[0]=c->lr; // 8026AA44
  c->r[3]=0u+0x80270000u; // 8026AA48
  W32(c->r[1]+0x00000014u,c->r[0]); // 8026AA4C
  c->r[0]=0u+0x00000000u; // 8026AA50
  c->r[3]=c->r[3]+0xFFFFAA38u; // 8026AA54
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8026AA58
  W32(c->r[13]+0xFFFF9978u,c->r[0]); // 8026AA5C
  c->lr=0x8026AA64u; f_8026CC18(c); // 8026AA60
L_8026AA64:;
  c->r[0]=R32(c->r[13]+0xFFFF9978u); // 8026AA64
  cmps(c,0,(int32_t)c->r[0],0); // 8026AA68
  if (crb(c,2)) { IRQCHK(c); goto L_8026AA64; } // 8026AA6C
  c->r[0]=R32(c->r[13]+0xFFFF9978u); // 8026AA70
  c->r[0]=rotl(c->r[0],0)&0x00000001u; cr0(c,c->r[0]); // 8026AA74
  if (!crb(c,2)) { goto L_8026AA84; } // 8026AA78
  c->r[3]=0u+0x00000000u; // 8026AA7C
  goto L_8026AAF4; // 8026AA80
L_8026AA84:;
  c->lr=0x8026AA88u; f_8026CC08(c); // 8026AA84
  c->r[31]=c->r[3]|c->r[3]; // 8026AA88
  c->lr=0x8026AA90u; f_802627A0(c); // 8026AA8C
  c->r[6]=0u+0x80000000u; // 8026AA90
  c->r[5]=0u+0x10620000u; // 8026AA94
  c->r[6]=R32(c->r[6]+0x000000F8u); // 8026AA98
  c->r[7]=c->r[5]+0x00004DD3u; // 8026AA9C
  c->r[8]=R32(c->r[13]+0xFFFF9990u); // 8026AAA0
  c->r[0]=0u+0x00000000u; // 8026AAA4
  c->r[5]=rotl(c->r[6],30)&0x3FFFFFFFu; // 8026AAA8
  c->r[9]=R32(c->r[13]+0xFFFF9994u); // 8026AAAC
  c->r[6]=(uint32_t)(((uint64_t)c->r[7]*(uint64_t)c->r[5])>>32); // 8026AAB0
  c->r[4]=addc(c,~c->r[9],c->r[4],1); // 8026AAB4
  c->r[5]=c->r[0]^0x80000000u; // 8026AAB8
  c->r[0]=addc(c,~c->r[8],c->r[3],c->xer_ca); // 8026AABC
  c->r[0]=c->r[0]^0x80000000u; // 8026AAC0
  c->r[3]=rotl(c->r[6],26)&0x03FFFFFFu; // 8026AAC4
  c->r[3]=(uint32_t)((int32_t)c->r[3]*(int32_t)100); // 8026AAC8
  c->r[3]=addc(c,~c->r[3],c->r[4],1); // 8026AACC
  c->r[5]=addc(c,~c->r[5],c->r[0],c->xer_ca); // 8026AAD0
  c->r[5]=addc(c,~c->r[0],c->r[0],c->xer_ca); // 8026AAD4
  c->r[5]=0u-c->r[5]; cr0(c,c->r[5]); // 8026AAD8
  if (crb(c,2)) { goto L_8026AAE8; } // 8026AADC
  c->r[3]=0u+0x00000000u; // 8026AAE0
  goto L_8026AAF4; // 8026AAE4
L_8026AAE8:;
  c->r[0]=rotl(c->r[31],0)&0x00000001u; // 8026AAE8
  c->r[3]=0u-c->r[0]; // 8026AAEC
  c->r[3]=c->r[3]+0x00000002u; // 8026AAF0
L_8026AAF4:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8026AAF4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8026AAF8
  c->lr=c->r[0]; // 8026AAFC
  c->r[1]=c->r[1]+0x00000010u; // 8026AB00
  return; // 8026AB04
}

// __DVDPrepareResetAsync
void f_8026AB08(Ctx* __restrict c) {
  trace_call(0x8026AB08u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8026AB08
  c->r[0]=c->lr; // 8026AB0C
  W32(c->r[1]+0x00000024u,c->r[0]); // 8026AB10
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8026AB14
  c->r[31]=c->r[3]|c->r[3]; // 8026AB18
  W32(c->r[1]+0x00000018u,c->r[30]); // 8026AB1C
  W32(c->r[1]+0x00000014u,c->r[29]); // 8026AB20
  c->lr=0x8026AB28u; f_8025EA10(c); // 8026AB24
  c->r[29]=c->r[3]|c->r[3]; // 8026AB28
  c->lr=0x8026AB30u; f_8026AD90(c); // 8026AB2C
  c->r[0]=R32(c->r[13]+0xFFFF9948u); // 8026AB30
  cmps(c,0,(int32_t)c->r[0],0); // 8026AB34
  if (crb(c,2)) { goto L_8026AB44; } // 8026AB38
  W32(c->r[13]+0xFFFF99A8u,c->r[31]); // 8026AB3C
  goto L_8026AC00; // 8026AB40
L_8026AB44:;
  c->r[3]=R32(c->r[13]+0xFFFF99B8u); // 8026AB44
  cmps(c,0,(int32_t)c->r[3],0); // 8026AB48
  if (crb(c,2)) { goto L_8026AB58; } // 8026AB4C
  c->r[0]=0u+0x00000000u; // 8026AB50
  W32(c->r[3]+0x00000028u,c->r[0]); // 8026AB54
L_8026AB58:;
  c->lr=0x8026AB5Cu; f_8025EA10(c); // 8026AB58
  c->r[30]=c->r[3]|c->r[3]; // 8026AB5C
  c->lr=0x8026AB64u; f_8025EA10(c); // 8026AB60
  c->r[0]=R32(c->r[13]+0xFFFF99B8u); // 8026AB64
  c->r[4]=0u+0x00000001u; // 8026AB68
  W32(c->r[13]+0xFFFF993Cu,c->r[4]); // 8026AB6C
  cmps(c,0,(int32_t)c->r[0],0); // 8026AB70
  if (!crb(c,2)) { goto L_8026AB7C; } // 8026AB74
  W32(c->r[13]+0xFFFF9940u,c->r[4]); // 8026AB78
L_8026AB7C:;
  c->lr=0x8026AB80u; f_8025EA38(c); // 8026AB7C
  goto L_8026AB8C; // 8026AB80
L_8026AB84:;
  c->r[4]=0u+0x00000000u; // 8026AB84
  c->lr=0x8026AB8Cu; f_8026A610(c); // 8026AB88
L_8026AB8C:;
  c->lr=0x8026AB90u; f_8026AE30(c); // 8026AB8C
  cmps(c,0,(int32_t)c->r[3],0); // 8026AB90
  if (!crb(c,2)) { IRQCHK(c); goto L_8026AB84; } // 8026AB94
  c->r[3]=R32(c->r[13]+0xFFFF99B8u); // 8026AB98
  cmps(c,0,(int32_t)c->r[3],0); // 8026AB9C
  if (crb(c,2)) { goto L_8026ABB0; } // 8026ABA0
  c->r[4]=c->r[31]|c->r[31]; // 8026ABA4
  c->lr=0x8026ABACu; f_8026A610(c); // 8026ABA8
  goto L_8026ABCC; // 8026ABAC
L_8026ABB0:;
  cmps(c,0,(int32_t)c->r[31],0); // 8026ABB0
  if (crb(c,2)) { goto L_8026ABCC; } // 8026ABB4
  c->r[12]=c->r[31]|c->r[31]; // 8026ABB8
  c->r[3]=0u+0x00000000u; // 8026ABBC
  c->r[4]=0u+0x00000000u; // 8026ABC0
  c->ctr=c->r[12]; // 8026ABC4
  if (true) { c->lr=0x8026ABCCu; dispatch(c,c->ctr); } // 8026ABC8
L_8026ABCC:;
  c->lr=0x8026ABD0u; f_8025EA10(c); // 8026ABCC
  c->r[4]=0u+0x00000000u; // 8026ABD0
  c->r[31]=c->r[3]|c->r[3]; // 8026ABD4
  W32(c->r[13]+0xFFFF993Cu,c->r[4]); // 8026ABD8
  c->r[0]=R32(c->r[13]+0xFFFF9940u); // 8026ABDC
  cmps(c,0,(int32_t)c->r[0],0); // 8026ABE0
  if (crb(c,2)) { goto L_8026ABF0; } // 8026ABE4
  W32(c->r[13]+0xFFFF9940u,c->r[4]); // 8026ABE8
  c->lr=0x8026ABF0u; f_8026922C(c); // 8026ABEC
L_8026ABF0:;
  c->r[3]=c->r[31]|c->r[31]; // 8026ABF0
  c->lr=0x8026ABF8u; f_8025EA38(c); // 8026ABF4
  c->r[3]=c->r[30]|c->r[30]; // 8026ABF8
  c->lr=0x8026AC00u; f_8025EA38(c); // 8026ABFC
L_8026AC00:;
  c->r[3]=c->r[29]|c->r[29]; // 8026AC00
  c->lr=0x8026AC08u; f_8025EA38(c); // 8026AC04
  c->r[0]=R32(c->r[1]+0x00000024u); // 8026AC08
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8026AC0C
  c->r[30]=R32(c->r[1]+0x00000018u); // 8026AC10
  c->r[29]=R32(c->r[1]+0x00000014u); // 8026AC14
  c->lr=c->r[0]; // 8026AC18
  c->r[1]=c->r[1]+0x00000020u; // 8026AC1C
  return; // 8026AC20
}

// fn_8026AC24
void f_8026AC24(Ctx* __restrict c) {
  trace_call(0x8026AC24u);
  c->r[0]=0u+0x00000001u; // 8026AC24
  W32(c->r[13]+0xFFFF997Cu,c->r[0]); // 8026AC28
  return; // 8026AC2C
}

// __DVDPrepareReset
void f_8026AC30(Ctx* __restrict c) {
  trace_call(0x8026AC30u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8026AC30
  c->r[0]=c->lr; // 8026AC34
  W32(c->r[1]+0x00000024u,c->r[0]); // 8026AC38
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8026AC3C
  W32(c->r[1]+0x00000018u,c->r[30]); // 8026AC40
  W32(c->r[1]+0x00000014u,c->r[29]); // 8026AC44
  c->lr=0x8026AC4Cu; f_8025EA10(c); // 8026AC48
  c->r[31]=0u+0x00000000u; // 8026AC4C
  W32(c->r[13]+0xFFFF997Cu,c->r[31]); // 8026AC50
  c->lr=0x8026AC58u; f_8025EA10(c); // 8026AC54
  c->r[29]=c->r[3]|c->r[3]; // 8026AC58
  c->lr=0x8026AC60u; f_8026AD90(c); // 8026AC5C
  c->r[0]=R32(c->r[13]+0xFFFF9948u); // 8026AC60
  cmps(c,0,(int32_t)c->r[0],0); // 8026AC64
  if (crb(c,2)) { goto L_8026AC7C; } // 8026AC68
  c->r[3]=0u+0x80270000u; // 8026AC6C
  c->r[3]=c->r[3]+0xFFFFAC24u; // 8026AC70
  W32(c->r[13]+0xFFFF99A8u,c->r[3]); // 8026AC74
  goto L_8026AD30; // 8026AC78
L_8026AC7C:;
  c->r[3]=R32(c->r[13]+0xFFFF99B8u); // 8026AC7C
  cmps(c,0,(int32_t)c->r[3],0); // 8026AC80
  if (crb(c,2)) { goto L_8026AC8C; } // 8026AC84
  W32(c->r[3]+0x00000028u,c->r[31]); // 8026AC88
L_8026AC8C:;
  c->lr=0x8026AC90u; f_8025EA10(c); // 8026AC8C
  c->r[31]=c->r[3]|c->r[3]; // 8026AC90
  c->lr=0x8026AC98u; f_8025EA10(c); // 8026AC94
  c->r[0]=R32(c->r[13]+0xFFFF99B8u); // 8026AC98
  c->r[4]=0u+0x00000001u; // 8026AC9C
  W32(c->r[13]+0xFFFF993Cu,c->r[4]); // 8026ACA0
  cmps(c,0,(int32_t)c->r[0],0); // 8026ACA4
  if (!crb(c,2)) { goto L_8026ACB0; } // 8026ACA8
  W32(c->r[13]+0xFFFF9940u,c->r[4]); // 8026ACAC
L_8026ACB0:;
  c->lr=0x8026ACB4u; f_8025EA38(c); // 8026ACB0
  goto L_8026ACC0; // 8026ACB4
L_8026ACB8:;
  c->r[4]=0u+0x00000000u; // 8026ACB8
  c->lr=0x8026ACC0u; f_8026A610(c); // 8026ACBC
L_8026ACC0:;
  c->lr=0x8026ACC4u; f_8026AE30(c); // 8026ACC0
  cmps(c,0,(int32_t)c->r[3],0); // 8026ACC4
  if (!crb(c,2)) { IRQCHK(c); goto L_8026ACB8; } // 8026ACC8
  c->r[3]=R32(c->r[13]+0xFFFF99B8u); // 8026ACCC
  cmps(c,0,(int32_t)c->r[3],0); // 8026ACD0
  if (crb(c,2)) { goto L_8026ACE8; } // 8026ACD4
  c->r[4]=0u+0x80270000u; // 8026ACD8
  c->r[4]=c->r[4]+0xFFFFAC24u; // 8026ACDC
  c->lr=0x8026ACE4u; f_8026A610(c); // 8026ACE0
  goto L_8026ACFC; // 8026ACE4
L_8026ACE8:;
  c->r[0]=0u+0x80270000u; // 8026ACE8
  c->r[0]=addc(c,c->r[0],0xFFFFAC24u,0); cr0(c,c->r[0]); // 8026ACEC
  if (crb(c,2)) { goto L_8026ACFC; } // 8026ACF0
  c->r[0]=0u+0x00000001u; // 8026ACF4
  W32(c->r[13]+0xFFFF997Cu,c->r[0]); // 8026ACF8
L_8026ACFC:;
  c->lr=0x8026AD00u; f_8025EA10(c); // 8026ACFC
  c->r[4]=0u+0x00000000u; // 8026AD00
  c->r[30]=c->r[3]|c->r[3]; // 8026AD04
  W32(c->r[13]+0xFFFF993Cu,c->r[4]); // 8026AD08
  c->r[0]=R32(c->r[13]+0xFFFF9940u); // 8026AD0C
  cmps(c,0,(int32_t)c->r[0],0); // 8026AD10
  if (crb(c,2)) { goto L_8026AD20; } // 8026AD14
  W32(c->r[13]+0xFFFF9940u,c->r[4]); // 8026AD18
  c->lr=0x8026AD20u; f_8026922C(c); // 8026AD1C
L_8026AD20:;
  c->r[3]=c->r[30]|c->r[30]; // 8026AD20
  c->lr=0x8026AD28u; f_8025EA38(c); // 8026AD24
  c->r[3]=c->r[31]|c->r[31]; // 8026AD28
  c->lr=0x8026AD30u; f_8025EA38(c); // 8026AD2C
L_8026AD30:;
  c->r[3]=c->r[29]|c->r[29]; // 8026AD30
  c->lr=0x8026AD38u; f_8025EA38(c); // 8026AD34
  c->lr=0x8026AD3Cu; f_8025EA24(c); // 8026AD38
L_8026AD3C:;
  c->r[0]=R32(c->r[13]+0xFFFF997Cu); // 8026AD3C
  cmps(c,0,(int32_t)c->r[0],1); // 8026AD40
  if (!crb(c,2)) { IRQCHK(c); goto L_8026AD3C; } // 8026AD44
  c->r[0]=R32(c->r[1]+0x00000024u); // 8026AD48
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8026AD4C
  c->r[30]=R32(c->r[1]+0x00000018u); // 8026AD50
  c->r[29]=R32(c->r[1]+0x00000014u); // 8026AD54
  c->lr=c->r[0]; // 8026AD58
  c->r[1]=c->r[1]+0x00000020u; // 8026AD5C
  return; // 8026AD60
}

// __DVDTestAlarm
void f_8026AD64(Ctx* __restrict c) {
  trace_call(0x8026AD64u);
  c->r[4]=0u+0x80600000u; // 8026AD64
  c->r[4]=c->r[4]+0xFFFFE1C0u; // 8026AD68
  cmpu(c,0,c->r[3],c->r[4]); // 8026AD6C
  if (!crb(c,2)) { goto L_8026AD7C; } // 8026AD70
  c->r[3]=0u+0x00000001u; // 8026AD74
  return; // 8026AD78
L_8026AD7C:;
  f_8026CF00(c); return; // 8026AD7C
  return; // 8026AD80
}

// __DVDStopMotorAsync
void f_8026AD84(Ctx* __restrict c) {
  trace_call(0x8026AD84u);
  c->r[3]=0u+0x00000001u; // 8026AD84
  return; // 8026AD88
}

// fn_8026AD8C
void f_8026AD8C(Ctx* __restrict c) {
  trace_call(0x8026AD8Cu);
  return; // 8026AD8C
}

// __DVDClearWaitingQueue
void f_8026AD90(Ctx* __restrict c) {
  trace_call(0x8026AD90u);
  c->r[6]=0u+0x80600000u; // 8026AD90
  c->r[6]=c->r[6]+0xFFFFE250u; // 8026AD94
  c->r[5]=c->r[6]+0x00000008u; // 8026AD98
  W32(c->r[6]+0x00000000u,c->r[6]); // 8026AD9C
  c->r[4]=c->r[6]+0x00000010u; // 8026ADA0
  c->r[3]=c->r[6]+0x00000018u; // 8026ADA4
  W32(c->r[6]+0x00000004u,c->r[6]); // 8026ADA8
  W32(c->r[6]+0x00000008u,c->r[5]); // 8026ADAC
  W32(c->r[6]+0x0000000Cu,c->r[5]); // 8026ADB0
  W32(c->r[6]+0x00000010u,c->r[4]); // 8026ADB4
  W32(c->r[6]+0x00000014u,c->r[4]); // 8026ADB8
  W32(c->r[6]+0x00000018u,c->r[3]); // 8026ADBC
  W32(c->r[6]+0x0000001Cu,c->r[3]); // 8026ADC0
  return; // 8026ADC4
}

// __DVDPushWaitingQueue
void f_8026ADC8(Ctx* __restrict c) {
  trace_call(0x8026ADC8u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8026ADC8
  c->r[0]=c->lr; // 8026ADCC
  W32(c->r[1]+0x00000014u,c->r[0]); // 8026ADD0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8026ADD4
  c->r[31]=c->r[4]|c->r[4]; // 8026ADD8
  W32(c->r[1]+0x00000008u,c->r[30]); // 8026ADDC
  c->r[30]=c->r[3]|c->r[3]; // 8026ADE0
  c->lr=0x8026ADE8u; f_8025EA10(c); // 8026ADE4
  c->r[4]=0u+0x80600000u; // 8026ADE8
  c->r[0]=rotl(c->r[30],3)&0xFFFFFFF8u; // 8026ADEC
  c->r[4]=c->r[4]+0xFFFFE250u; // 8026ADF0
  c->r[5]=c->r[4]+c->r[0]; // 8026ADF4
  c->r[4]=R32(c->r[5]+0x00000004u); // 8026ADF8
  W32(c->r[4]+0x00000000u,c->r[31]); // 8026ADFC
  c->r[0]=R32(c->r[5]+0x00000004u); // 8026AE00
  W32(c->r[31]+0x00000004u,c->r[0]); // 8026AE04
  W32(c->r[31]+0x00000000u,c->r[5]); // 8026AE08
  W32(c->r[5]+0x00000004u,c->r[31]); // 8026AE0C
  c->lr=0x8026AE14u; f_8025EA38(c); // 8026AE10
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8026AE14
  c->r[3]=0u+0x00000001u; // 8026AE18
  c->r[30]=R32(c->r[1]+0x00000008u); // 8026AE1C
  c->r[0]=R32(c->r[1]+0x00000014u); // 8026AE20
  c->lr=c->r[0]; // 8026AE24
  c->r[1]=c->r[1]+0x00000010u; // 8026AE28
  return; // 8026AE2C
}

// __DVDPopWaitingQueue
void f_8026AE30(Ctx* __restrict c) {
  trace_call(0x8026AE30u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8026AE30
  c->r[0]=c->lr; // 8026AE34
  W32(c->r[1]+0x00000014u,c->r[0]); // 8026AE38
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8026AE3C
  c->lr=0x8026AE44u; f_8025EA10(c); // 8026AE40
  c->r[4]=0u+0x80600000u; // 8026AE44
  c->r[0]=0u+0x00000004u; // 8026AE48
  c->r[31]=0u+0x00000000u; // 8026AE4C
  c->r[4]=c->r[4]+0xFFFFE250u; // 8026AE50
  c->ctr=c->r[0]; // 8026AE54
L_8026AE58:;
  c->r[0]=R32(c->r[4]+0x00000000u); // 8026AE58
  cmpu(c,0,c->r[0],c->r[4]); // 8026AE5C
  if (crb(c,2)) { goto L_8026AEA8; } // 8026AE60
  c->lr=0x8026AE68u; f_8025EA38(c); // 8026AE64
  c->lr=0x8026AE6Cu; f_8025EA10(c); // 8026AE68
  c->r[4]=0u+0x80600000u; // 8026AE6C
  c->r[0]=rotl(c->r[31],3)&0xFFFFFFF8u; // 8026AE70
  c->r[4]=c->r[4]+0xFFFFE250u; // 8026AE74
  c->r[31]=R32(c->r[4]+c->r[0]); // 8026AE78
  c->r[5]=c->r[4]+c->r[0]; // 8026AE7C
  c->r[0]=R32(c->r[31]+0x00000000u); // 8026AE80
  W32(c->r[5]+0x00000000u,c->r[0]); // 8026AE84
  c->r[4]=R32(c->r[31]+0x00000000u); // 8026AE88
  W32(c->r[4]+0x00000004u,c->r[5]); // 8026AE8C
  c->lr=0x8026AE94u; f_8025EA38(c); // 8026AE90
  c->r[0]=0u+0x00000000u; // 8026AE94
  c->r[3]=c->r[31]|c->r[31]; // 8026AE98
  W32(c->r[31]+0x00000000u,c->r[0]); // 8026AE9C
  W32(c->r[31]+0x00000004u,c->r[0]); // 8026AEA0
  goto L_8026AEBC; // 8026AEA4
L_8026AEA8:;
  c->r[4]=c->r[4]+0x00000008u; // 8026AEA8
  c->r[31]=c->r[31]+0x00000001u; // 8026AEAC
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_8026AE58; } // 8026AEB0
  c->lr=0x8026AEB8u; f_8025EA38(c); // 8026AEB4
  c->r[3]=0u+0x00000000u; // 8026AEB8
L_8026AEBC:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8026AEBC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8026AEC0
  c->lr=c->r[0]; // 8026AEC4
  c->r[1]=c->r[1]+0x00000010u; // 8026AEC8
  return; // 8026AECC
}

// __DVDCheckWaitingQueue
void f_8026AED0(Ctx* __restrict c) {
  trace_call(0x8026AED0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8026AED0
  c->r[0]=c->lr; // 8026AED4
  W32(c->r[1]+0x00000014u,c->r[0]); // 8026AED8
  c->lr=0x8026AEE0u; f_8025EA10(c); // 8026AEDC
  c->r[4]=0u+0x80600000u; // 8026AEE0
  c->r[0]=0u+0x00000004u; // 8026AEE4
  c->r[4]=c->r[4]+0xFFFFE250u; // 8026AEE8
  c->ctr=c->r[0]; // 8026AEEC
L_8026AEF0:;
  c->r[0]=R32(c->r[4]+0x00000000u); // 8026AEF0
  cmpu(c,0,c->r[0],c->r[4]); // 8026AEF4
  if (crb(c,2)) { goto L_8026AF08; } // 8026AEF8
  c->lr=0x8026AF00u; f_8025EA38(c); // 8026AEFC
  c->r[3]=0u+0x00000001u; // 8026AF00
  goto L_8026AF18; // 8026AF04
L_8026AF08:;
  c->r[4]=c->r[4]+0x00000008u; // 8026AF08
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_8026AEF0; } // 8026AF0C
  c->lr=0x8026AF14u; f_8025EA38(c); // 8026AF10
  c->r[3]=0u+0x00000000u; // 8026AF14
L_8026AF18:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8026AF18
  c->lr=c->r[0]; // 8026AF1C
  c->r[1]=c->r[1]+0x00000010u; // 8026AF20
  return; // 8026AF24
}

// __DVDGetNextWaitingQueue
void f_8026AF28(Ctx* __restrict c) {
  trace_call(0x8026AF28u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8026AF28
  c->r[0]=c->lr; // 8026AF2C
  W32(c->r[1]+0x00000014u,c->r[0]); // 8026AF30
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8026AF34
  c->lr=0x8026AF3Cu; f_8025EA10(c); // 8026AF38
  c->r[4]=0u+0x80600000u; // 8026AF3C
  c->r[0]=0u+0x00000004u; // 8026AF40
  c->r[4]=c->r[4]+0xFFFFE250u; // 8026AF44
  c->ctr=c->r[0]; // 8026AF48
L_8026AF4C:;
  c->r[31]=R32(c->r[4]+0x00000000u); // 8026AF4C
  cmpu(c,0,c->r[31],c->r[4]); // 8026AF50
  if (crb(c,2)) { goto L_8026AF64; } // 8026AF54
  c->lr=0x8026AF5Cu; f_8025EA38(c); // 8026AF58
  c->r[3]=c->r[31]|c->r[31]; // 8026AF5C
  goto L_8026AF74; // 8026AF60
L_8026AF64:;
  c->r[4]=c->r[4]+0x00000008u; // 8026AF64
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_8026AF4C; } // 8026AF68
  c->lr=0x8026AF70u; f_8025EA38(c); // 8026AF6C
  c->r[3]=0u+0x00000000u; // 8026AF70
L_8026AF74:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8026AF74
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8026AF78
  c->lr=c->r[0]; // 8026AF7C
  c->r[1]=c->r[1]+0x00000010u; // 8026AF80
  return; // 8026AF84
}

// __DVDDequeueWaitingQueue
void f_8026AF88(Ctx* __restrict c) {
  trace_call(0x8026AF88u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8026AF88
  c->r[0]=c->lr; // 8026AF8C
  W32(c->r[1]+0x00000014u,c->r[0]); // 8026AF90
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8026AF94
  c->r[31]=c->r[3]|c->r[3]; // 8026AF98
  c->lr=0x8026AFA0u; f_8025EA10(c); // 8026AF9C
  c->r[4]=R32(c->r[31]+0x00000004u); // 8026AFA0
  c->r[5]=R32(c->r[31]+0x00000000u); // 8026AFA4
  cmps(c,0,(int32_t)c->r[4],0); // 8026AFA8
  if (crb(c,2)) { goto L_8026AFB8; } // 8026AFAC
  cmps(c,0,(int32_t)c->r[5],0); // 8026AFB0
  if (!crb(c,2)) { goto L_8026AFC4; } // 8026AFB4
L_8026AFB8:;
  c->lr=0x8026AFBCu; f_8025EA38(c); // 8026AFB8
  c->r[3]=0u+0x00000000u; // 8026AFBC
  goto L_8026AFD4; // 8026AFC0
L_8026AFC4:;
  W32(c->r[4]+0x00000000u,c->r[5]); // 8026AFC4
  W32(c->r[5]+0x00000004u,c->r[4]); // 8026AFC8
  c->lr=0x8026AFD0u; f_8025EA38(c); // 8026AFCC
  c->r[3]=0u+0x00000001u; // 8026AFD0
L_8026AFD4:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8026AFD4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8026AFD8
  c->lr=c->r[0]; // 8026AFDC
  c->r[1]=c->r[1]+0x00000010u; // 8026AFE0
  return; // 8026AFE4
}

// cbForNandClose
void f_8026AFE8(Ctx* __restrict c) {
  trace_call(0x8026AFE8u);
  c->r[12]=R32(c->r[13]+0xFFFF99C0u); // 8026AFE8
  cmps(c,0,(int32_t)c->r[12],0); // 8026AFEC
  if (crb(c,2)) return; // 8026AFF0
  c->r[0]=cntlz(c->r[3]); // 8026AFF4
  c->r[4]=0u+0x00000000u; // 8026AFF8
  c->r[0]=rotl(c->r[0],27)&0x00000001u; // 8026AFFC
  c->r[3]=0u-c->r[0]; // 8026B000
  c->r[3]=c->r[3]+0x00000002u; // 8026B004
  c->ctr=c->r[12]; // 8026B008
  if (true) { dispatch(c,c->ctr); return; } // 8026B00C
  return; // 8026B010
}

// cbForNandWrite
void f_8026B014(Ctx* __restrict c) {
  trace_call(0x8026B014u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8026B014
  c->r[0]=c->lr; // 8026B018
  c->r[3]=0u+0x80600000u; // 8026B01C
  c->r[4]=0u+0x80270000u; // 8026B020
  c->r[5]=0u+0x80600000u; // 8026B024
  W32(c->r[1]+0x00000014u,c->r[0]); // 8026B028
  c->r[3]=c->r[3]+0xFFFFE280u; // 8026B02C
  c->r[4]=c->r[4]+0xFFFFAFE8u; // 8026B030
  c->r[5]=c->r[5]+0xFFFFE310u; // 8026B034
  c->lr=0x8026B03Cu; f_802ABB80(c); // 8026B038
  cmps(c,0,(int32_t)c->r[3],0); // 8026B03C
  if (crb(c,2)) { goto L_8026B060; } // 8026B040
  c->r[12]=R32(c->r[13]+0xFFFF99C0u); // 8026B044
  cmps(c,0,(int32_t)c->r[12],0); // 8026B048
  if (crb(c,2)) { goto L_8026B060; } // 8026B04C
  c->r[3]=0u+0x00000002u; // 8026B050
  c->r[4]=0u+0x00000000u; // 8026B054
  c->ctr=c->r[12]; // 8026B058
  if (true) { c->lr=0x8026B060u; dispatch(c,c->ctr); } // 8026B05C
L_8026B060:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8026B060
  c->lr=c->r[0]; // 8026B064
  c->r[1]=c->r[1]+0x00000010u; // 8026B068
  return; // 8026B06C
}

// fn_8026B070
void f_8026B070(Ctx* __restrict c) {
  trace_call(0x8026B070u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8026B070
  c->r[0]=c->lr; // 8026B074
  cmps(c,0,(int32_t)c->r[3],0); // 8026B078
  W32(c->r[1]+0x00000014u,c->r[0]); // 8026B07C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8026B080
  c->r[31]=0u+0x80600000u; // 8026B084
  c->r[31]=c->r[31]+0xFFFFE280u; // 8026B088
  if (!crb(c,2)) { goto L_8026B0F0; } // 8026B08C
  c->r[6]=0u+0x80270000u; // 8026B090
  c->r[3]=c->r[31]+0x00000000u; // 8026B094
  c->r[4]=c->r[31]+0x00000160u; // 8026B098
  c->r[7]=c->r[31]+0x00000090u; // 8026B09C
  c->r[6]=c->r[6]+0xFFFFB014u; // 8026B0A0
  c->r[5]=0u+0x00000080u; // 8026B0A4
  c->lr=0x8026B0ACu; f_802AADC0(c); // 8026B0A8
  cmps(c,0,(int32_t)c->r[3],0); // 8026B0AC
  if (crb(c,2)) { goto L_8026B10C; } // 8026B0B0
  c->r[4]=0u+0x80270000u; // 8026B0B4
  c->r[3]=c->r[31]+0x00000000u; // 8026B0B8
  c->r[4]=c->r[4]+0xFFFFAFE8u; // 8026B0BC
  c->r[5]=c->r[31]+0x00000090u; // 8026B0C0
  c->lr=0x8026B0C8u; f_802ABB80(c); // 8026B0C4
  cmps(c,0,(int32_t)c->r[3],0); // 8026B0C8
  if (crb(c,2)) { goto L_8026B10C; } // 8026B0CC
  c->r[12]=R32(c->r[13]+0xFFFF99C0u); // 8026B0D0
  cmps(c,0,(int32_t)c->r[12],0); // 8026B0D4
  if (crb(c,2)) { goto L_8026B10C; } // 8026B0D8
  c->r[3]=0u+0x00000002u; // 8026B0DC
  c->r[4]=0u+0x00000000u; // 8026B0E0
  c->ctr=c->r[12]; // 8026B0E4
  if (true) { c->lr=0x8026B0ECu; dispatch(c,c->ctr); } // 8026B0E8
  goto L_8026B10C; // 8026B0EC
L_8026B0F0:;
  c->r[12]=R32(c->r[13]+0xFFFF99C0u); // 8026B0F0
  cmps(c,0,(int32_t)c->r[12],0); // 8026B0F4
  if (crb(c,2)) { goto L_8026B10C; } // 8026B0F8
  c->r[3]=0u+0x00000002u; // 8026B0FC
  c->r[4]=0u+0x00000000u; // 8026B100
  c->ctr=c->r[12]; // 8026B104
  if (true) { c->lr=0x8026B10Cu; dispatch(c,c->ctr); } // 8026B108
L_8026B10C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8026B10C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8026B110
  c->lr=c->r[0]; // 8026B114
  c->r[1]=c->r[1]+0x00000010u; // 8026B118
  return; // 8026B11C
}

// fn_8026B120
void f_8026B120(Ctx* __restrict c) {
  trace_call(0x8026B120u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8026B120
  c->r[0]=c->lr; // 8026B124
  cmps(c,0,(int32_t)c->r[3],0); // 8026B128
  W32(c->r[1]+0x00000014u,c->r[0]); // 8026B12C
  if (crb(c,2)) { goto L_8026B13C; } // 8026B130
  cmps(c,0,(int32_t)c->r[3],-6); // 8026B134
  if (!crb(c,2)) { goto L_8026B18C; } // 8026B138
L_8026B13C:;
  c->r[3]=0u+0x80420000u; // 8026B13C
  c->r[4]=0u+0x80600000u; // 8026B140
  c->r[6]=0u+0x80270000u; // 8026B144
  c->r[7]=0u+0x80600000u; // 8026B148
  c->r[3]=c->r[3]+0xFFFFFF28u; // 8026B14C
  c->r[4]=c->r[4]+0xFFFFE280u; // 8026B150
  c->r[6]=c->r[6]+0xFFFFB070u; // 8026B154
  c->r[7]=c->r[7]+0xFFFFE310u; // 8026B158
  c->r[5]=0u+0x00000002u; // 8026B15C
  c->lr=0x8026B164u; f_802ABA24(c); // 8026B160
  cmps(c,0,(int32_t)c->r[3],0); // 8026B164
  if (crb(c,2)) { goto L_8026B1A8; } // 8026B168
  c->r[12]=R32(c->r[13]+0xFFFF99C0u); // 8026B16C
  cmps(c,0,(int32_t)c->r[12],0); // 8026B170
  if (crb(c,2)) { goto L_8026B1A8; } // 8026B174
  c->r[3]=0u+0x00000002u; // 8026B178
  c->r[4]=0u+0x00000000u; // 8026B17C
  c->ctr=c->r[12]; // 8026B180
  if (true) { c->lr=0x8026B188u; dispatch(c,c->ctr); } // 8026B184
  goto L_8026B1A8; // 8026B188
L_8026B18C:;
  c->r[12]=R32(c->r[13]+0xFFFF99C0u); // 8026B18C
  cmps(c,0,(int32_t)c->r[12],0); // 8026B190
  if (crb(c,2)) { goto L_8026B1A8; } // 8026B194
  c->r[3]=0u+0x00000002u; // 8026B198
  c->r[4]=0u+0x00000000u; // 8026B19C
  c->ctr=c->r[12]; // 8026B1A0
  if (true) { c->lr=0x8026B1A8u; dispatch(c,c->ctr); } // 8026B1A4
L_8026B1A8:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8026B1A8
  c->lr=c->r[0]; // 8026B1AC
  c->r[1]=c->r[1]+0x00000010u; // 8026B1B0
  return; // 8026B1B4
}

// cbForNandCreateDir
void f_8026B1B8(Ctx* __restrict c) {
  trace_call(0x8026B1B8u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8026B1B8
  c->r[0]=c->lr; // 8026B1BC
  cmps(c,0,(int32_t)c->r[3],0); // 8026B1C0
  W32(c->r[1]+0x00000014u,c->r[0]); // 8026B1C4
  if (crb(c,2)) { goto L_8026B1D4; } // 8026B1C8
  cmps(c,0,(int32_t)c->r[3],-6); // 8026B1CC
  if (!crb(c,2)) { goto L_8026B220; } // 8026B1D0
L_8026B1D4:;
  c->r[3]=0u+0x80420000u; // 8026B1D4
  c->r[6]=0u+0x80270000u; // 8026B1D8
  c->r[7]=0u+0x80600000u; // 8026B1DC
  c->r[4]=0u+0x0000003Fu; // 8026B1E0
  c->r[3]=c->r[3]+0xFFFFFF28u; // 8026B1E4
  c->r[6]=c->r[6]+0xFFFFB120u; // 8026B1E8
  c->r[7]=c->r[7]+0xFFFFE310u; // 8026B1EC
  c->r[5]=0u+0x00000000u; // 8026B1F0
  c->lr=0x8026B1F8u; f_802AAA90(c); // 8026B1F4
  cmps(c,0,(int32_t)c->r[3],0); // 8026B1F8
  if (crb(c,2)) { goto L_8026B23C; } // 8026B1FC
  c->r[12]=R32(c->r[13]+0xFFFF99C0u); // 8026B200
  cmps(c,0,(int32_t)c->r[12],0); // 8026B204
  if (crb(c,2)) { goto L_8026B23C; } // 8026B208
  c->r[3]=0u+0x00000002u; // 8026B20C
  c->r[4]=0u+0x00000000u; // 8026B210
  c->ctr=c->r[12]; // 8026B214
  if (true) { c->lr=0x8026B21Cu; dispatch(c,c->ctr); } // 8026B218
  goto L_8026B23C; // 8026B21C
L_8026B220:;
  c->r[12]=R32(c->r[13]+0xFFFF99C0u); // 8026B220
  cmps(c,0,(int32_t)c->r[12],0); // 8026B224
  if (crb(c,2)) { goto L_8026B23C; } // 8026B228
  c->r[3]=0u+0x00000002u; // 8026B22C
  c->r[4]=0u+0x00000000u; // 8026B230
  c->ctr=c->r[12]; // 8026B234
  if (true) { c->lr=0x8026B23Cu; dispatch(c,c->ctr); } // 8026B238
L_8026B23C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8026B23C
  c->lr=c->r[0]; // 8026B240
  c->r[1]=c->r[1]+0x00000010u; // 8026B244
  return; // 8026B248
}

// fn_8026B24C
void f_8026B24C(Ctx* __restrict c) {
  trace_call(0x8026B24Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8026B24C
  c->r[0]=c->lr; // 8026B250
  W32(c->r[1]+0x00000014u,c->r[0]); // 8026B254
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8026B258
  c->r[31]=0u+0x80600000u; // 8026B25C
  c->r[31]=c->r[31]+0xFFFFE3E0u; // 8026B260
  W32(c->r[1]+0x00000008u,c->r[30]); // 8026B264
  c->r[30]=c->r[4]|c->r[4]; // 8026B268
  W32(c->r[31]+0x00000008u,c->r[3]); // 8026B26C
  c->lr=0x8026B274u; f_80262780(c); // 8026B270
  c->r[6]=0u+0x80000000u; // 8026B274
  c->r[5]=0u+0x00000000u; // 8026B278
  c->r[0]=R32(c->r[6]+0x000000F8u); // 8026B27C
  c->r[6]=rotl(c->r[0],30)&0x3FFFFFFFu; // 8026B280
  c->lr=0x8026B288u; f_80289F44(c); // 8026B284
  W32(c->r[31]+0x0000000Cu,c->r[4]); // 8026B288
  c->r[3]=0u+0x80420000u; // 8026B28C
  c->r[6]=0u+0x80270000u; // 8026B290
  c->r[7]=0u+0x80600000u; // 8026B294
  W32(c->r[13]+0xFFFF99C0u,c->r[30]); // 8026B298
  c->r[3]=c->r[3]+0xFFFFFF44u; // 8026B29C
  c->r[6]=c->r[6]+0xFFFFB1B8u; // 8026B2A0
  c->r[7]=c->r[7]+0xFFFFE310u; // 8026B2A4
  c->r[4]=0u+0x0000003Fu; // 8026B2A8
  c->r[5]=0u+0x00000000u; // 8026B2AC
  c->lr=0x8026B2B4u; f_802AB0E4(c); // 8026B2B0
  cmps(c,0,(int32_t)c->r[3],0); // 8026B2B4
  if (crb(c,2)) { goto L_8026B2D8; } // 8026B2B8
  c->r[12]=R32(c->r[13]+0xFFFF99C0u); // 8026B2BC
  cmps(c,0,(int32_t)c->r[12],0); // 8026B2C0
  if (crb(c,2)) { goto L_8026B2D8; } // 8026B2C4
  c->r[3]=0u+0x00000002u; // 8026B2C8
  c->r[4]=0u+0x00000000u; // 8026B2CC
  c->ctr=c->r[12]; // 8026B2D0
  if (true) { c->lr=0x8026B2D8u; dispatch(c,c->ctr); } // 8026B2D4
L_8026B2D8:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8026B2D8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8026B2DC
  c->r[30]=R32(c->r[1]+0x00000008u); // 8026B2E0
  c->lr=c->r[0]; // 8026B2E4
  c->r[1]=c->r[1]+0x00000010u; // 8026B2E8
  return; // 8026B2EC
}

