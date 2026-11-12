#include "funcs.h"
#pragma GCC diagnostic ignored "-Wunused-label"

// fn_803A67C4
void f_803A67C4(Ctx* __restrict c) {
  trace_call(0x803A67C4u);
  c->r[3]=R32(c->r[3]+0x00000004u); // 803A67C4
  f_803A722C(c); return; // 803A67C8
}

// fn_803A67CC
void f_803A67CC(Ctx* __restrict c) {
  trace_call(0x803A67CCu);
  c->r[3]=R32(c->r[3]+0x00000004u); // 803A67CC
  f_803A7278(c); return; // 803A67D0
}

// fn_803A67D4
void f_803A67D4(Ctx* __restrict c) {
  trace_call(0x803A67D4u);
  c->r[3]=R32(c->r[3]+0x00000004u); // 803A67D4
  f_803A73C0(c); return; // 803A67D8
}

// ReadBankInfo__Q34nw4r3snd12SoundArchiveCFUlPQ44nw4r3snd12SoundArchive8BankInfo
void f_803A67DC(Ctx* __restrict c) {
  trace_call(0x803A67DCu);
  c->r[3]=R32(c->r[3]+0x00000004u); // 803A67DC
  f_803A76C0(c); return; // 803A67E0
}

// fn_803A67E4
void f_803A67E4(Ctx* __restrict c) {
  trace_call(0x803A67E4u);
  c->r[3]=R32(c->r[3]+0x00000004u); // 803A67E4
  f_803A707C(c); return; // 803A67E8
}

// detail_ReadGroupInfo__Q34nw4r3snd12SoundArchiveCFUlPQ44nw4r3snd12SoundArchive9GroupInfo
void f_803A67EC(Ctx* __restrict c) {
  trace_call(0x803A67ECu);
  c->r[3]=R32(c->r[3]+0x00000004u); // 803A67EC
  f_803A7314(c); return; // 803A67F0
}

// fn_803A67F4
void f_803A67F4(Ctx* __restrict c) {
  trace_call(0x803A67F4u);
  c->r[3]=R32(c->r[3]+0x00000004u); // 803A67F4
  f_803A7478(c); return; // 803A67F8
}

// detail_GetFileCount__Q34nw4r3snd12SoundArchiveCFv
void f_803A67FC(Ctx* __restrict c) {
  trace_call(0x803A67FCu);
  c->r[3]=R32(c->r[3]+0x00000004u); // 803A67FC
  f_803A7588(c); return; // 803A6800
}

// detail_ReadFileInfo__Q34nw4r3snd12SoundArchiveCFUlPQ44nw4r3snd12SoundArchive8FileInfo
void f_803A6804(Ctx* __restrict c) {
  trace_call(0x803A6804u);
  c->r[3]=R32(c->r[3]+0x00000004u); // 803A6804
  f_803A7984(c); return; // 803A6808
}

// detail_ReadFilePos__Q34nw4r3snd12SoundArchiveCFUlUlPQ44nw4r3snd12SoundArchive7FilePos
void f_803A680C(Ctx* __restrict c) {
  trace_call(0x803A680Cu);
  c->r[3]=R32(c->r[3]+0x00000004u); // 803A680C
  f_803A7A84(c); return; // 803A6810
}

// fn_803A6814
void f_803A6814(Ctx* __restrict c) {
  trace_call(0x803A6814u);
  {uint32_t ea=c->r[1]+0xFFFFFD90u; W32(ea,c->r[1]); c->r[1]=ea;} // 803A6814
  c->r[0]=c->lr; // 803A6818
  W32(c->r[1]+0x00000274u,c->r[0]); // 803A681C
  c->r[11]=c->r[1]+0x00000270u; // 803A6820
  c->lr=0x803A6828u; { W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 803A6824
  c->r[29]=c->r[3]|c->r[3]; // 803A6828
  c->r[3]=R32(c->r[3]+0x00000004u); // 803A682C
  c->r[30]=c->r[5]|c->r[5]; // 803A6830
  c->r[25]=c->r[4]|c->r[4]; // 803A6834
  c->r[31]=c->r[6]|c->r[6]; // 803A6838
  c->r[5]=c->r[1]+0x00000010u; // 803A683C
  c->lr=0x803A6844u; f_803A7984(c); // 803A6840
  cmps(c,0,(int32_t)c->r[3],0); // 803A6844
  if (!crb(c,2)) { goto L_803A6854; } // 803A6848
  c->r[3]=0u+0x00000000u; // 803A684C
  goto L_803A6A20; // 803A6850
L_803A6854:;
  c->r[27]=R32(c->r[1]+0x00000018u); // 803A6854
  cmps(c,0,(int32_t)c->r[27],0); // 803A6858
  if (crb(c,2)) { goto L_803A68EC; } // 803A685C
  c->r[0]=R8(c->r[27]+0x00000000u); // 803A6860
  cmps(c,0,(int32_t)c->r[0],47); // 803A6864
  if (!crb(c,2)) { goto L_803A6870; } // 803A6868
  goto L_803A68C0; // 803A686C
L_803A6870:;
  c->r[3]=c->r[27]|c->r[27]; // 803A6870
  c->lr=0x803A6878u; f_802894C0(c); // 803A6874
  c->r[28]=c->r[3]|c->r[3]; // 803A6878
  c->r[3]=c->r[29]+0x00000008u; // 803A687C
  c->lr=0x803A6884u; f_802894C0(c); // 803A6880
  c->r[0]=c->r[28]+c->r[3]; // 803A6884
  c->r[5]=c->r[3]|c->r[3]; // 803A6888
  cmpu(c,0,c->r[0],0x00000100u); // 803A688C
  if (crb(c,0)) { goto L_803A689C; } // 803A6890
  c->r[3]=0u+0x00000000u; // 803A6894
  goto L_803A6A20; // 803A6898
L_803A689C:;
  c->r[3]=c->r[1]+0x00000150u; // 803A689C
  c->r[4]=c->r[29]+0x00000008u; // 803A68A0
  c->r[5]=c->r[5]+0x00000001u; // 803A68A4
  c->lr=0x803A68ACu; f_80293498(c); // 803A68A8
  c->r[4]=c->r[27]|c->r[27]; // 803A68AC
  c->r[3]=c->r[1]+0x00000150u; // 803A68B0
  c->r[5]=c->r[28]+0x00000001u; // 803A68B4
  c->lr=0x803A68BCu; f_80293508(c); // 803A68B8
  c->r[27]=c->r[1]+0x00000150u; // 803A68BC
L_803A68C0:;
  c->r[12]=R32(c->r[29]+0x00000000u); // 803A68C0
  c->r[3]=c->r[29]|c->r[29]; // 803A68C4
  c->r[4]=c->r[30]|c->r[30]; // 803A68C8
  c->r[5]=c->r[31]|c->r[31]; // 803A68CC
  c->r[12]=R32(c->r[12]+0x0000001Cu); // 803A68D0
  c->r[6]=c->r[27]|c->r[27]; // 803A68D4
  c->r[7]=0u+0x00000000u; // 803A68D8
  c->r[8]=0u+0x00000000u; // 803A68DC
  c->ctr=c->r[12]; // 803A68E0
  if (true) { c->lr=0x803A68E8u; dispatch(c,c->ctr); } // 803A68E4
  goto L_803A6A20; // 803A68E8
L_803A68EC:;
  c->r[3]=R32(c->r[29]+0x00000004u); // 803A68EC
  c->r[4]=c->r[25]|c->r[25]; // 803A68F0
  c->r[6]=c->r[1]+0x00000008u; // 803A68F4
  c->r[5]=0u+0x00000000u; // 803A68F8
  c->lr=0x803A6900u; f_803A7A84(c); // 803A68FC
  cmps(c,0,(int32_t)c->r[3],0); // 803A6900
  if (!crb(c,2)) { goto L_803A6910; } // 803A6904
  c->r[3]=0u+0x00000000u; // 803A6908
  goto L_803A6A20; // 803A690C
L_803A6910:;
  c->r[3]=R32(c->r[29]+0x00000004u); // 803A6910
  c->r[5]=c->r[1]+0x00000038u; // 803A6914
  c->r[4]=R32(c->r[1]+0x00000008u); // 803A6918
  c->lr=0x803A6920u; f_803A7478(c); // 803A691C
  cmps(c,0,(int32_t)c->r[3],0); // 803A6920
  if (!crb(c,2)) { goto L_803A6930; } // 803A6924
  c->r[3]=0u+0x00000000u; // 803A6928
  goto L_803A6A20; // 803A692C
L_803A6930:;
  c->r[3]=R32(c->r[29]+0x00000004u); // 803A6930
  c->r[6]=c->r[1]+0x00000020u; // 803A6934
  c->r[4]=R32(c->r[1]+0x00000008u); // 803A6938
  c->r[5]=R32(c->r[1]+0x0000000Cu); // 803A693C
  c->lr=0x803A6944u; f_803A7588(c); // 803A6940
  cmps(c,0,(int32_t)c->r[3],0); // 803A6944
  if (!crb(c,2)) { goto L_803A6954; } // 803A6948
  c->r[3]=0u+0x00000000u; // 803A694C
  goto L_803A6A20; // 803A6950
L_803A6954:;
  c->r[27]=R32(c->r[1]+0x0000003Cu); // 803A6954
  c->r[3]=R32(c->r[1]+0x00000040u); // 803A6958
  c->r[0]=R32(c->r[1]+0x00000024u); // 803A695C
  cmps(c,0,(int32_t)c->r[27],0); // 803A6960
  c->r[25]=R32(c->r[1]+0x00000028u); // 803A6964
  c->r[26]=c->r[3]+c->r[0]; // 803A6968
  if (crb(c,2)) { goto L_803A69FC; } // 803A696C
  c->r[0]=R8(c->r[27]+0x00000000u); // 803A6970
  cmps(c,0,(int32_t)c->r[0],47); // 803A6974
  if (!crb(c,2)) { goto L_803A6980; } // 803A6978
  goto L_803A69D0; // 803A697C
L_803A6980:;
  c->r[3]=c->r[27]|c->r[27]; // 803A6980
  c->lr=0x803A6988u; f_802894C0(c); // 803A6984
  c->r[28]=c->r[3]|c->r[3]; // 803A6988
  c->r[3]=c->r[29]+0x00000008u; // 803A698C
  c->lr=0x803A6994u; f_802894C0(c); // 803A6990
  c->r[0]=c->r[28]+c->r[3]; // 803A6994
  c->r[5]=c->r[3]|c->r[3]; // 803A6998
  cmpu(c,0,c->r[0],0x00000100u); // 803A699C
  if (crb(c,0)) { goto L_803A69AC; } // 803A69A0
  c->r[3]=0u+0x00000000u; // 803A69A4
  goto L_803A6A20; // 803A69A8
L_803A69AC:;
  c->r[3]=c->r[1]+0x00000050u; // 803A69AC
  c->r[4]=c->r[29]+0x00000008u; // 803A69B0
  c->r[5]=c->r[5]+0x00000001u; // 803A69B4
  c->lr=0x803A69BCu; f_80293498(c); // 803A69B8
  c->r[4]=c->r[27]|c->r[27]; // 803A69BC
  c->r[3]=c->r[1]+0x00000050u; // 803A69C0
  c->r[5]=c->r[28]+0x00000001u; // 803A69C4
  c->lr=0x803A69CCu; f_80293508(c); // 803A69C8
  c->r[27]=c->r[1]+0x00000050u; // 803A69CC
L_803A69D0:;
  c->r[12]=R32(c->r[29]+0x00000000u); // 803A69D0
  c->r[3]=c->r[29]|c->r[29]; // 803A69D4
  c->r[4]=c->r[30]|c->r[30]; // 803A69D8
  c->r[5]=c->r[31]|c->r[31]; // 803A69DC
  c->r[12]=R32(c->r[12]+0x0000001Cu); // 803A69E0
  c->r[6]=c->r[27]|c->r[27]; // 803A69E4
  c->r[7]=c->r[26]|c->r[26]; // 803A69E8
  c->r[8]=c->r[25]|c->r[25]; // 803A69EC
  c->ctr=c->r[12]; // 803A69F0
  if (true) { c->lr=0x803A69F8u; dispatch(c,c->ctr); } // 803A69F4
  goto L_803A6A20; // 803A69F8
L_803A69FC:;
  c->r[12]=R32(c->r[29]+0x00000000u); // 803A69FC
  c->r[3]=c->r[29]|c->r[29]; // 803A6A00
  c->r[4]=c->r[30]|c->r[30]; // 803A6A04
  c->r[5]=c->r[31]|c->r[31]; // 803A6A08
  c->r[12]=R32(c->r[12]+0x00000018u); // 803A6A0C
  c->r[6]=c->r[26]|c->r[26]; // 803A6A10
  c->r[7]=c->r[25]|c->r[25]; // 803A6A14
  c->ctr=c->r[12]; // 803A6A18
  if (true) { c->lr=0x803A6A20u; dispatch(c,c->ctr); } // 803A6A1C
L_803A6A20:;
  c->r[11]=c->r[1]+0x00000270u; // 803A6A20
  c->lr=0x803A6A28u; { c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 803A6A24
  c->r[0]=R32(c->r[1]+0x00000274u); // 803A6A28
  c->lr=c->r[0]; // 803A6A2C
  c->r[1]=c->r[1]+0x00000270u; // 803A6A30
  return; // 803A6A34
}

// fn_803A6A38
void f_803A6A38(Ctx* __restrict c) {
  trace_call(0x803A6A38u);
  {uint32_t ea=c->r[1]+0xFFFFFEC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803A6A38
  c->r[0]=c->lr; // 803A6A3C
  W32(c->r[1]+0x00000144u,c->r[0]); // 803A6A40
  c->r[11]=c->r[1]+0x00000140u; // 803A6A44
  c->lr=0x803A6A4Cu; { W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 803A6A48
  c->r[25]=c->r[3]|c->r[3]; // 803A6A4C
  c->r[3]=R32(c->r[3]+0x00000004u); // 803A6A50
  c->r[26]=c->r[5]|c->r[5]; // 803A6A54
  c->r[27]=c->r[6]|c->r[6]; // 803A6A58
  c->r[5]=c->r[1]+0x00000008u; // 803A6A5C
  c->lr=0x803A6A64u; f_803A7478(c); // 803A6A60
  cmps(c,0,(int32_t)c->r[3],0); // 803A6A64
  if (!crb(c,2)) { goto L_803A6A74; } // 803A6A68
  c->r[3]=0u+0x00000000u; // 803A6A6C
  goto L_803A6B38; // 803A6A70
L_803A6A74:;
  c->r[28]=R32(c->r[1]+0x0000000Cu); // 803A6A74
  cmps(c,0,(int32_t)c->r[28],0); // 803A6A78
  if (crb(c,2)) { goto L_803A6B14; } // 803A6A7C
  c->r[0]=R8(c->r[28]+0x00000000u); // 803A6A80
  c->r[29]=R32(c->r[1]+0x00000014u); // 803A6A84
  cmps(c,0,(int32_t)c->r[0],47); // 803A6A88
  c->r[30]=R32(c->r[1]+0x00000010u); // 803A6A8C
  if (!crb(c,2)) { goto L_803A6A98; } // 803A6A90
  goto L_803A6AE8; // 803A6A94
L_803A6A98:;
  c->r[3]=c->r[28]|c->r[28]; // 803A6A98
  c->lr=0x803A6AA0u; f_802894C0(c); // 803A6A9C
  c->r[31]=c->r[3]|c->r[3]; // 803A6AA0
  c->r[3]=c->r[25]+0x00000008u; // 803A6AA4
  c->lr=0x803A6AACu; f_802894C0(c); // 803A6AA8
  c->r[0]=c->r[31]+c->r[3]; // 803A6AAC
  c->r[5]=c->r[3]|c->r[3]; // 803A6AB0
  cmpu(c,0,c->r[0],0x00000100u); // 803A6AB4
  if (crb(c,0)) { goto L_803A6AC4; } // 803A6AB8
  c->r[3]=0u+0x00000000u; // 803A6ABC
  goto L_803A6B38; // 803A6AC0
L_803A6AC4:;
  c->r[3]=c->r[1]+0x00000020u; // 803A6AC4
  c->r[4]=c->r[25]+0x00000008u; // 803A6AC8
  c->r[5]=c->r[5]+0x00000001u; // 803A6ACC
  c->lr=0x803A6AD4u; f_80293498(c); // 803A6AD0
  c->r[4]=c->r[28]|c->r[28]; // 803A6AD4
  c->r[3]=c->r[1]+0x00000020u; // 803A6AD8
  c->r[5]=c->r[31]+0x00000001u; // 803A6ADC
  c->lr=0x803A6AE4u; f_80293508(c); // 803A6AE0
  c->r[28]=c->r[1]+0x00000020u; // 803A6AE4
L_803A6AE8:;
  c->r[12]=R32(c->r[25]+0x00000000u); // 803A6AE8
  c->r[3]=c->r[25]|c->r[25]; // 803A6AEC
  c->r[4]=c->r[26]|c->r[26]; // 803A6AF0
  c->r[5]=c->r[27]|c->r[27]; // 803A6AF4
  c->r[12]=R32(c->r[12]+0x0000001Cu); // 803A6AF8
  c->r[6]=c->r[28]|c->r[28]; // 803A6AFC
  c->r[7]=c->r[30]|c->r[30]; // 803A6B00
  c->r[8]=c->r[29]|c->r[29]; // 803A6B04
  c->ctr=c->r[12]; // 803A6B08
  if (true) { c->lr=0x803A6B10u; dispatch(c,c->ctr); } // 803A6B0C
  goto L_803A6B38; // 803A6B10
L_803A6B14:;
  c->r[12]=R32(c->r[25]+0x00000000u); // 803A6B14
  c->r[3]=c->r[25]|c->r[25]; // 803A6B18
  c->r[4]=c->r[26]|c->r[26]; // 803A6B1C
  c->r[5]=c->r[27]|c->r[27]; // 803A6B20
  c->r[12]=R32(c->r[12]+0x00000018u); // 803A6B24
  c->r[6]=R32(c->r[1]+0x00000010u); // 803A6B28
  c->r[7]=R32(c->r[1]+0x00000014u); // 803A6B2C
  c->ctr=c->r[12]; // 803A6B30
  if (true) { c->lr=0x803A6B38u; dispatch(c,c->ctr); } // 803A6B34
L_803A6B38:;
  c->r[11]=c->r[1]+0x00000140u; // 803A6B38
  c->lr=0x803A6B40u; { c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 803A6B3C
  c->r[0]=R32(c->r[1]+0x00000144u); // 803A6B40
  c->lr=c->r[0]; // 803A6B44
  c->r[1]=c->r[1]+0x00000140u; // 803A6B48
  return; // 803A6B4C
}

// fn_803A6B50
void f_803A6B50(Ctx* __restrict c) {
  trace_call(0x803A6B50u);
  {uint32_t ea=c->r[1]+0xFFFFFEC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803A6B50
  c->r[0]=c->lr; // 803A6B54
  W32(c->r[1]+0x00000144u,c->r[0]); // 803A6B58
  c->r[11]=c->r[1]+0x00000140u; // 803A6B5C
  c->lr=0x803A6B64u; { W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 803A6B60
  c->r[25]=c->r[3]|c->r[3]; // 803A6B64
  c->r[3]=R32(c->r[3]+0x00000004u); // 803A6B68
  c->r[26]=c->r[5]|c->r[5]; // 803A6B6C
  c->r[27]=c->r[6]|c->r[6]; // 803A6B70
  c->r[5]=c->r[1]+0x00000008u; // 803A6B74
  c->lr=0x803A6B7Cu; f_803A7478(c); // 803A6B78
  cmps(c,0,(int32_t)c->r[3],0); // 803A6B7C
  if (!crb(c,2)) { goto L_803A6B8C; } // 803A6B80
  c->r[3]=0u+0x00000000u; // 803A6B84
  goto L_803A6C50; // 803A6B88
L_803A6B8C:;
  c->r[28]=R32(c->r[1]+0x0000000Cu); // 803A6B8C
  cmps(c,0,(int32_t)c->r[28],0); // 803A6B90
  if (crb(c,2)) { goto L_803A6C2C; } // 803A6B94
  c->r[0]=R8(c->r[28]+0x00000000u); // 803A6B98
  c->r[29]=R32(c->r[1]+0x0000001Cu); // 803A6B9C
  cmps(c,0,(int32_t)c->r[0],47); // 803A6BA0
  c->r[30]=R32(c->r[1]+0x00000018u); // 803A6BA4
  if (!crb(c,2)) { goto L_803A6BB0; } // 803A6BA8
  goto L_803A6C00; // 803A6BAC
L_803A6BB0:;
  c->r[3]=c->r[28]|c->r[28]; // 803A6BB0
  c->lr=0x803A6BB8u; f_802894C0(c); // 803A6BB4
  c->r[31]=c->r[3]|c->r[3]; // 803A6BB8
  c->r[3]=c->r[25]+0x00000008u; // 803A6BBC
  c->lr=0x803A6BC4u; f_802894C0(c); // 803A6BC0
  c->r[0]=c->r[31]+c->r[3]; // 803A6BC4
  c->r[5]=c->r[3]|c->r[3]; // 803A6BC8
  cmpu(c,0,c->r[0],0x00000100u); // 803A6BCC
  if (crb(c,0)) { goto L_803A6BDC; } // 803A6BD0
  c->r[3]=0u+0x00000000u; // 803A6BD4
  goto L_803A6C50; // 803A6BD8
L_803A6BDC:;
  c->r[3]=c->r[1]+0x00000020u; // 803A6BDC
  c->r[4]=c->r[25]+0x00000008u; // 803A6BE0
  c->r[5]=c->r[5]+0x00000001u; // 803A6BE4
  c->lr=0x803A6BECu; f_80293498(c); // 803A6BE8
  c->r[4]=c->r[28]|c->r[28]; // 803A6BEC
  c->r[3]=c->r[1]+0x00000020u; // 803A6BF0
  c->r[5]=c->r[31]+0x00000001u; // 803A6BF4
  c->lr=0x803A6BFCu; f_80293508(c); // 803A6BF8
  c->r[28]=c->r[1]+0x00000020u; // 803A6BFC
L_803A6C00:;
  c->r[12]=R32(c->r[25]+0x00000000u); // 803A6C00
  c->r[3]=c->r[25]|c->r[25]; // 803A6C04
  c->r[4]=c->r[26]|c->r[26]; // 803A6C08
  c->r[5]=c->r[27]|c->r[27]; // 803A6C0C
  c->r[12]=R32(c->r[12]+0x0000001Cu); // 803A6C10
  c->r[6]=c->r[28]|c->r[28]; // 803A6C14
  c->r[7]=c->r[30]|c->r[30]; // 803A6C18
  c->r[8]=c->r[29]|c->r[29]; // 803A6C1C
  c->ctr=c->r[12]; // 803A6C20
  if (true) { c->lr=0x803A6C28u; dispatch(c,c->ctr); } // 803A6C24
  goto L_803A6C50; // 803A6C28
L_803A6C2C:;
  c->r[12]=R32(c->r[25]+0x00000000u); // 803A6C2C
  c->r[3]=c->r[25]|c->r[25]; // 803A6C30
  c->r[4]=c->r[26]|c->r[26]; // 803A6C34
  c->r[5]=c->r[27]|c->r[27]; // 803A6C38
  c->r[12]=R32(c->r[12]+0x00000018u); // 803A6C3C
  c->r[6]=R32(c->r[1]+0x00000018u); // 803A6C40
  c->r[7]=R32(c->r[1]+0x0000001Cu); // 803A6C44
  c->ctr=c->r[12]; // 803A6C48
  if (true) { c->lr=0x803A6C50u; dispatch(c,c->ctr); } // 803A6C4C
L_803A6C50:;
  c->r[11]=c->r[1]+0x00000140u; // 803A6C50
  c->lr=0x803A6C58u; { c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 803A6C54
  c->r[0]=R32(c->r[1]+0x00000144u); // 803A6C58
  c->lr=c->r[0]; // 803A6C5C
  c->r[1]=c->r[1]+0x00000140u; // 803A6C60
  return; // 803A6C64
}

// fn_803A6C68
void f_803A6C68(Ctx* __restrict c) {
  trace_call(0x803A6C68u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803A6C68
  c->r[0]=c->lr; // 803A6C6C
  W32(c->r[1]+0x00000014u,c->r[0]); // 803A6C70
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 803A6C74
  c->r[31]=c->r[4]|c->r[4]; // 803A6C78
  W32(c->r[1]+0x00000008u,c->r[30]); // 803A6C7C
  c->r[30]=c->r[3]|c->r[3]; // 803A6C80
  c->r[3]=c->r[31]|c->r[31]; // 803A6C84
  c->lr=0x803A6C8Cu; f_802894C0(c); // 803A6C88
  c->r[4]=c->r[31]+c->r[3]; // 803A6C8C
  c->r[0]=R8(c->r[4]+0xFFFFFFFFu); // 803A6C90
  c->r[4]=c->r[3]|c->r[3]; // 803A6C94
  cmps(c,0,(int32_t)c->r[0],47); // 803A6C98
  if (crb(c,2)) { goto L_803A6CB0; } // 803A6C9C
  c->r[4]=c->r[30]+c->r[3]; // 803A6CA0
  c->r[0]=0u+0x0000002Fu; // 803A6CA4
  W8(c->r[4]+0x00000008u,c->r[0]); // 803A6CA8
  c->r[4]=c->r[3]+0x00000001u; // 803A6CAC
L_803A6CB0:;
  c->r[4]=c->r[30]+c->r[4]; // 803A6CB0
  c->r[0]=0u+0x00000000u; // 803A6CB4
  W8(c->r[4]+0x00000008u,c->r[0]); // 803A6CB8
  c->r[5]=c->r[3]|c->r[3]; // 803A6CBC
  c->r[4]=c->r[31]|c->r[31]; // 803A6CC0
  c->r[3]=c->r[30]+0x00000008u; // 803A6CC4
  c->lr=0x803A6CCCu; f_80293498(c); // 803A6CC8
  c->r[0]=R32(c->r[1]+0x00000014u); // 803A6CCC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 803A6CD0
  c->r[30]=R32(c->r[1]+0x00000008u); // 803A6CD4
  c->lr=c->r[0]; // 803A6CD8
  c->r[1]=c->r[1]+0x00000010u; // 803A6CDC
  return; // 803A6CE0
}

// __ct__Q44nw4r3snd6detail22SoundArchiveFileReaderFv
void f_803A6CE4(Ctx* __restrict c) {
  trace_call(0x803A6CE4u);
  c->r[0]=0u+0x00000000u; // 803A6CE4
  W32(c->r[3]+0x00000028u,c->r[0]); // 803A6CE8
  W32(c->r[3]+0x0000002Cu,c->r[0]); // 803A6CEC
  W32(c->r[3]+0x00000030u,c->r[0]); // 803A6CF0
  W32(c->r[3]+0x00000034u,c->r[0]); // 803A6CF4
  W32(c->r[3]+0x00000038u,c->r[0]); // 803A6CF8
  W32(c->r[3]+0x0000003Cu,c->r[0]); // 803A6CFC
  W32(c->r[3]+0x00000040u,c->r[0]); // 803A6D00
  return; // 803A6D04
}

// Init__Q44nw4r3snd6detail22SoundArchiveFileReaderFPCv
void f_803A6D08(Ctx* __restrict c) {
  trace_call(0x803A6D08u);
  c->r[5]=R32(c->r[4]+0x00000000u); // 803A6D08
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803A6D0C
  c->r[0]=c->r[5]+0xADAD0000u; // 803A6D10
  cmpu(c,0,c->r[0],0x00004152u); // 803A6D14
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 803A6D18
  if (crb(c,2)) { goto L_803A6D28; } // 803A6D1C
  c->r[0]=0u+0x00000000u; // 803A6D20
  goto L_803A6D54; // 803A6D24
L_803A6D28:;
  c->r[6]=R16(c->r[4]+0x00000006u); // 803A6D28
  cmpu(c,0,c->r[6],0x00000100u); // 803A6D2C
  if (!crb(c,0)) { goto L_803A6D3C; } // 803A6D30
  c->r[0]=0u+0x00000000u; // 803A6D34
  goto L_803A6D54; // 803A6D38
L_803A6D3C:;
  c->r[0]=addc(c,~c->r[6],0x00000103u,1); // 803A6D3C
  c->r[5]=0u+0x00000103u; // 803A6D40
  c->r[5]=c->r[5]|~c->r[6]; // 803A6D44
  c->r[0]=rotl(c->r[0],31)&0x7FFFFFFFu; // 803A6D48
  c->r[0]=c->r[5]-c->r[0]; // 803A6D4C
  c->r[0]=rotl(c->r[0],1)&0x00000001u; // 803A6D50
L_803A6D54:;
  cmps(c,0,(int32_t)c->r[0],0); // 803A6D54
  if (crb(c,2)) { goto L_803A6DAC; } // 803A6D58
  c->r[31]=R32(c->r[4]+0x00000000u); // 803A6D5C
  c->r[12]=R32(c->r[4]+0x00000004u); // 803A6D60
  c->r[11]=R32(c->r[4]+0x00000008u); // 803A6D64
  c->r[10]=R32(c->r[4]+0x0000000Cu); // 803A6D68
  c->r[9]=R32(c->r[4]+0x00000010u); // 803A6D6C
  c->r[8]=R32(c->r[4]+0x00000014u); // 803A6D70
  c->r[7]=R32(c->r[4]+0x00000018u); // 803A6D74
  c->r[6]=R32(c->r[4]+0x0000001Cu); // 803A6D78
  c->r[5]=R32(c->r[4]+0x00000020u); // 803A6D7C
  c->r[0]=R32(c->r[4]+0x00000024u); // 803A6D80
  W32(c->r[3]+0x00000000u,c->r[31]); // 803A6D84
  W32(c->r[3]+0x00000004u,c->r[12]); // 803A6D88
  W32(c->r[3]+0x00000008u,c->r[11]); // 803A6D8C
  W32(c->r[3]+0x0000000Cu,c->r[10]); // 803A6D90
  W32(c->r[3]+0x00000010u,c->r[9]); // 803A6D94
  W32(c->r[3]+0x00000014u,c->r[8]); // 803A6D98
  W32(c->r[3]+0x00000018u,c->r[7]); // 803A6D9C
  W32(c->r[3]+0x0000001Cu,c->r[6]); // 803A6DA0
  W32(c->r[3]+0x00000020u,c->r[5]); // 803A6DA4
  W32(c->r[3]+0x00000024u,c->r[0]); // 803A6DA8
L_803A6DAC:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 803A6DAC
  c->r[1]=c->r[1]+0x00000010u; // 803A6DB0
  return; // 803A6DB4
}

// SetStringChunk__Q44nw4r3snd6detail22SoundArchiveFileReaderFPCvUl
void f_803A6DB8(Ctx* __restrict c) {
  trace_call(0x803A6DB8u);
  c->r[0]=R32(c->r[4]+0x00000008u); // 803A6DB8
  c->r[5]=c->r[4]+0x00000008u; // 803A6DBC
  W32(c->r[3]+0x0000002Cu,c->r[5]); // 803A6DC0
  cmps(c,0,(int32_t)c->r[0],0); // 803A6DC4
  if (!crb(c,2)) { goto L_803A6DD4; } // 803A6DC8
  c->r[0]=0u+0x00000000u; // 803A6DCC
  goto L_803A6DD8; // 803A6DD0
L_803A6DD4:;
  c->r[0]=c->r[0]+c->r[5]; // 803A6DD4
L_803A6DD8:;
  c->r[4]=R32(c->r[5]+0x00000004u); // 803A6DD8
  W32(c->r[3]+0x00000030u,c->r[0]); // 803A6DDC
  cmps(c,0,(int32_t)c->r[4],0); // 803A6DE0
  c->r[0]=R32(c->r[3]+0x0000002Cu); // 803A6DE4
  if (!crb(c,2)) { goto L_803A6DF4; } // 803A6DE8
  c->r[0]=0u+0x00000000u; // 803A6DEC
  goto L_803A6DF8; // 803A6DF0
L_803A6DF4:;
  c->r[0]=c->r[4]+c->r[0]; // 803A6DF4
L_803A6DF8:;
  c->r[4]=R32(c->r[5]+0x00000008u); // 803A6DF8
  W32(c->r[3]+0x00000034u,c->r[0]); // 803A6DFC
  cmps(c,0,(int32_t)c->r[4],0); // 803A6E00
  c->r[0]=R32(c->r[3]+0x0000002Cu); // 803A6E04
  if (!crb(c,2)) { goto L_803A6E14; } // 803A6E08
  c->r[0]=0u+0x00000000u; // 803A6E0C
  goto L_803A6E18; // 803A6E10
L_803A6E14:;
  c->r[0]=c->r[4]+c->r[0]; // 803A6E14
L_803A6E18:;
  c->r[4]=R32(c->r[5]+0x0000000Cu); // 803A6E18
  W32(c->r[3]+0x00000038u,c->r[0]); // 803A6E1C
  cmps(c,0,(int32_t)c->r[4],0); // 803A6E20
  c->r[0]=R32(c->r[3]+0x0000002Cu); // 803A6E24
  if (!crb(c,2)) { goto L_803A6E34; } // 803A6E28
  c->r[0]=0u+0x00000000u; // 803A6E2C
  goto L_803A6E38; // 803A6E30
L_803A6E34:;
  c->r[0]=c->r[4]+c->r[0]; // 803A6E34
L_803A6E38:;
  c->r[4]=R32(c->r[5]+0x00000010u); // 803A6E38
  W32(c->r[3]+0x0000003Cu,c->r[0]); // 803A6E3C
  cmps(c,0,(int32_t)c->r[4],0); // 803A6E40
  c->r[0]=R32(c->r[3]+0x0000002Cu); // 803A6E44
  if (!crb(c,2)) { goto L_803A6E54; } // 803A6E48
  c->r[0]=0u+0x00000000u; // 803A6E4C
  goto L_803A6E58; // 803A6E50
L_803A6E54:;
  c->r[0]=c->r[4]+c->r[0]; // 803A6E54
L_803A6E58:;
  W32(c->r[3]+0x00000040u,c->r[0]); // 803A6E58
  return; // 803A6E5C
}

// fn_803A6E60
void f_803A6E60(Ctx* __restrict c) {
  trace_call(0x803A6E60u);
  c->r[0]=c->r[4]+0x00000008u; // 803A6E60
  W32(c->r[3]+0x00000028u,c->r[0]); // 803A6E64
  return; // 803A6E68
}

// GetSoundType__Q44nw4r3snd6detail22SoundArchiveFileReaderCFUl
void f_803A6E6C(Ctx* __restrict c) {
  trace_call(0x803A6E6Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803A6E6C
  c->r[0]=c->lr; // 803A6E70
  c->r[5]=R32(c->r[3]+0x00000028u); // 803A6E74
  W32(c->r[1]+0x00000014u,c->r[0]); // 803A6E78
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 803A6E7C
  c->r[31]=c->r[4]|c->r[4]; // 803A6E80
  W32(c->r[1]+0x00000008u,c->r[30]); // 803A6E84
  c->r[30]=c->r[3]|c->r[3]; // 803A6E88
  c->r[3]=R8(c->r[5]+0x00000000u); // 803A6E8C
  c->r[4]=R32(c->r[5]+0x00000004u); // 803A6E90
  c->lr=0x803A6E98u; f_803B3154(c); // 803A6E94
  cmps(c,0,(int32_t)c->r[3],0); // 803A6E98
  if (!crb(c,2)) { goto L_803A6EA8; } // 803A6E9C
  c->r[3]=0u+0x00000000u; // 803A6EA0
  goto L_803A6F44; // 803A6EA4
L_803A6EA8:;
  c->r[0]=R32(c->r[3]+0x00000000u); // 803A6EA8
  cmpu(c,0,c->r[31],c->r[0]); // 803A6EAC
  if (crb(c,0)) { goto L_803A6EBC; } // 803A6EB0
  c->r[3]=0u+0x00000000u; // 803A6EB4
  goto L_803A6F44; // 803A6EB8
L_803A6EBC:;
  c->r[0]=R16(c->r[30]+0x00000006u); // 803A6EBC
  cmpu(c,0,c->r[0],0x00000101u); // 803A6EC0
  if (crb(c,0)) { goto L_803A6EF8; } // 803A6EC4
  c->r[0]=rotl(c->r[31],3)&0xFFFFFFF8u; // 803A6EC8
  c->r[5]=R32(c->r[30]+0x00000028u); // 803A6ECC
  c->r[4]=c->r[3]+c->r[0]; // 803A6ED0
  c->r[3]=R8(c->r[4]+0x00000004u); // 803A6ED4
  c->r[4]=R32(c->r[4]+0x00000008u); // 803A6ED8
  c->lr=0x803A6EE0u; f_803B3154(c); // 803A6EDC
  cmps(c,0,(int32_t)c->r[3],0); // 803A6EE0
  if (!crb(c,2)) { goto L_803A6EF0; } // 803A6EE4
  c->r[3]=0u+0x00000000u; // 803A6EE8
  goto L_803A6F44; // 803A6EEC
L_803A6EF0:;
  c->r[0]=R8(c->r[3]+0x00000016u); // 803A6EF0
  goto L_803A6F04; // 803A6EF4
L_803A6EF8:;
  c->r[0]=rotl(c->r[31],3)&0xFFFFFFF8u; // 803A6EF8
  c->r[3]=c->r[3]+c->r[0]; // 803A6EFC
  c->r[0]=R8(c->r[3]+0x00000005u); // 803A6F00
L_803A6F04:;
  cmps(c,0,(int32_t)c->r[0],2); // 803A6F04
  if (crb(c,2)) { goto L_803A6F30; } // 803A6F08
  if (!crb(c,0)) { goto L_803A6F1C; } // 803A6F0C
  cmps(c,0,(int32_t)c->r[0],1); // 803A6F10
  if (!crb(c,0)) { goto L_803A6F28; } // 803A6F14
  goto L_803A6F40; // 803A6F18
L_803A6F1C:;
  cmps(c,0,(int32_t)c->r[0],4); // 803A6F1C
  if (!crb(c,0)) { goto L_803A6F40; } // 803A6F20
  goto L_803A6F38; // 803A6F24
L_803A6F28:;
  c->r[3]=0u+0x00000001u; // 803A6F28
  goto L_803A6F44; // 803A6F2C
L_803A6F30:;
  c->r[3]=0u+0x00000002u; // 803A6F30
  goto L_803A6F44; // 803A6F34
L_803A6F38:;
  c->r[3]=0u+0x00000003u; // 803A6F38
  goto L_803A6F44; // 803A6F3C
L_803A6F40:;
  c->r[3]=0u+0x00000000u; // 803A6F40
L_803A6F44:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 803A6F44
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 803A6F48
  c->r[30]=R32(c->r[1]+0x00000008u); // 803A6F4C
  c->lr=c->r[0]; // 803A6F50
  c->r[1]=c->r[1]+0x00000010u; // 803A6F54
  return; // 803A6F58
}

// fn_803A6F5C
void f_803A6F5C(Ctx* __restrict c) {
  trace_call(0x803A6F5Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803A6F5C
  c->r[0]=c->lr; // 803A6F60
  c->r[6]=R32(c->r[3]+0x00000028u); // 803A6F64
  W32(c->r[1]+0x00000024u,c->r[0]); // 803A6F68
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 803A6F6C
  c->r[31]=c->r[5]|c->r[5]; // 803A6F70
  c->r[5]=c->r[6]|c->r[6]; // 803A6F74
  W32(c->r[1]+0x00000018u,c->r[30]); // 803A6F78
  c->r[30]=c->r[4]|c->r[4]; // 803A6F7C
  W32(c->r[1]+0x00000014u,c->r[29]); // 803A6F80
  c->r[29]=c->r[3]|c->r[3]; // 803A6F84
  c->r[3]=R8(c->r[6]+0x00000000u); // 803A6F88
  c->r[4]=R32(c->r[6]+0x00000004u); // 803A6F8C
  c->lr=0x803A6F94u; f_803B3154(c); // 803A6F90
  cmps(c,0,(int32_t)c->r[3],0); // 803A6F94
  if (!crb(c,2)) { goto L_803A6FA4; } // 803A6F98
  c->r[3]=0u+0x00000000u; // 803A6F9C
  goto L_803A6FF4; // 803A6FA0
L_803A6FA4:;
  c->r[0]=R32(c->r[3]+0x00000000u); // 803A6FA4
  cmpu(c,0,c->r[30],c->r[0]); // 803A6FA8
  if (crb(c,0)) { goto L_803A6FB8; } // 803A6FAC
  c->r[3]=0u+0x00000000u; // 803A6FB0
  goto L_803A6FF4; // 803A6FB4
L_803A6FB8:;
  c->r[0]=R16(c->r[29]+0x00000006u); // 803A6FB8
  cmpu(c,0,c->r[0],0x00000101u); // 803A6FBC
  if (crb(c,0)) { goto L_803A6FE0; } // 803A6FC0
  c->r[0]=rotl(c->r[30],3)&0xFFFFFFF8u; // 803A6FC4
  c->r[5]=R32(c->r[29]+0x00000028u); // 803A6FC8
  c->r[4]=c->r[3]+c->r[0]; // 803A6FCC
  c->r[3]=R8(c->r[4]+0x00000004u); // 803A6FD0
  c->r[4]=R32(c->r[4]+0x00000008u); // 803A6FD4
  c->lr=0x803A6FDCu; f_803B3154(c); // 803A6FD8
  goto L_803A6FF4; // 803A6FDC
L_803A6FE0:;
  c->r[4]=rotl(c->r[30],3)&0xFFFFFFF8u; // 803A6FE0
  c->r[0]=R32(c->r[29]+0x00000028u); // 803A6FE4
  c->r[3]=c->r[3]+c->r[4]; // 803A6FE8
  c->r[3]=R32(c->r[3]+0x00000008u); // 803A6FEC
  c->r[3]=c->r[3]+c->r[0]; // 803A6FF0
L_803A6FF4:;
  cmps(c,0,(int32_t)c->r[3],0); // 803A6FF4
  if (!crb(c,2)) { goto L_803A7004; } // 803A6FF8
  c->r[3]=0u+0x00000000u; // 803A6FFC
  goto L_803A7060; // 803A7000
L_803A7004:;
  c->r[4]=R32(c->r[3]+0x00000004u); // 803A7004
  c->r[0]=R16(c->r[29]+0x00000006u); // 803A7008
  W32(c->r[31]+0x00000000u,c->r[4]); // 803A700C
  cmpu(c,0,c->r[0],0x00000102u); // 803A7010
  c->r[0]=R32(c->r[3]+0x00000008u); // 803A7014
  W32(c->r[31]+0x00000004u,c->r[0]); // 803A7018
  c->r[0]=R8(c->r[3]+0x00000015u); // 803A701C
  W32(c->r[31]+0x00000008u,c->r[0]); // 803A7020
  c->r[0]=R8(c->r[3]+0x00000014u); // 803A7024
  W32(c->r[31]+0x0000000Cu,c->r[0]); // 803A7028
  c->r[0]=R8(c->r[3]+0x00000017u); // 803A702C
  W32(c->r[31]+0x00000010u,c->r[0]); // 803A7030
  if (crb(c,0)) { goto L_803A704C; } // 803A7034
  c->r[0]=R8(c->r[3]+0x00000028u); // 803A7038
  W32(c->r[31]+0x00000014u,c->r[0]); // 803A703C
  c->r[0]=R8(c->r[3]+0x00000029u); // 803A7040
  W32(c->r[31]+0x00000018u,c->r[0]); // 803A7044
  goto L_803A705C; // 803A7048
L_803A704C:;
  c->r[3]=0u+0x00000001u; // 803A704C
  c->r[0]=0u+0x00000000u; // 803A7050
  W32(c->r[31]+0x00000014u,c->r[3]); // 803A7054
  W32(c->r[31]+0x00000018u,c->r[0]); // 803A7058
L_803A705C:;
  c->r[3]=0u+0x00000001u; // 803A705C
L_803A7060:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 803A7060
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 803A7064
  c->r[30]=R32(c->r[1]+0x00000018u); // 803A7068
  c->r[29]=R32(c->r[1]+0x00000014u); // 803A706C
  c->lr=c->r[0]; // 803A7070
  c->r[1]=c->r[1]+0x00000020u; // 803A7074
  return; // 803A7078
}

// fn_803A707C
void f_803A707C(Ctx* __restrict c) {
  trace_call(0x803A707Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803A707C
  c->r[0]=c->lr; // 803A7080
  c->r[6]=R32(c->r[3]+0x00000028u); // 803A7084
  W32(c->r[1]+0x00000024u,c->r[0]); // 803A7088
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 803A708C
  c->r[31]=c->r[5]|c->r[5]; // 803A7090
  c->r[5]=c->r[6]|c->r[6]; // 803A7094
  W32(c->r[1]+0x00000018u,c->r[30]); // 803A7098
  c->r[30]=c->r[4]|c->r[4]; // 803A709C
  W32(c->r[1]+0x00000014u,c->r[29]); // 803A70A0
  c->r[29]=c->r[3]|c->r[3]; // 803A70A4
  c->r[3]=R8(c->r[6]+0x00000000u); // 803A70A8
  c->r[4]=R32(c->r[6]+0x00000004u); // 803A70AC
  c->lr=0x803A70B4u; f_803B3154(c); // 803A70B0
  cmps(c,0,(int32_t)c->r[3],0); // 803A70B4
  if (!crb(c,2)) { goto L_803A70C4; } // 803A70B8
  c->r[4]=0u+0x00000000u; // 803A70BC
  goto L_803A7118; // 803A70C0
L_803A70C4:;
  c->r[0]=R32(c->r[3]+0x00000000u); // 803A70C4
  cmpu(c,0,c->r[30],c->r[0]); // 803A70C8
  if (crb(c,0)) { goto L_803A70D8; } // 803A70CC
  c->r[4]=0u+0x00000000u; // 803A70D0
  goto L_803A7118; // 803A70D4
L_803A70D8:;
  c->r[0]=R16(c->r[29]+0x00000006u); // 803A70D8
  cmpu(c,0,c->r[0],0x00000101u); // 803A70DC
  if (crb(c,0)) { goto L_803A7104; } // 803A70E0
  c->r[0]=rotl(c->r[30],3)&0xFFFFFFF8u; // 803A70E4
  c->r[5]=R32(c->r[29]+0x00000028u); // 803A70E8
  c->r[4]=c->r[3]+c->r[0]; // 803A70EC
  c->r[3]=R8(c->r[4]+0x00000004u); // 803A70F0
  c->r[4]=R32(c->r[4]+0x00000008u); // 803A70F4
  c->lr=0x803A70FCu; f_803B3154(c); // 803A70F8
  c->r[4]=c->r[3]|c->r[3]; // 803A70FC
  goto L_803A7118; // 803A7100
L_803A7104:;
  c->r[4]=rotl(c->r[30],3)&0xFFFFFFF8u; // 803A7104
  c->r[0]=R32(c->r[29]+0x00000028u); // 803A7108
  c->r[3]=c->r[3]+c->r[4]; // 803A710C
  c->r[3]=R32(c->r[3]+0x00000008u); // 803A7110
  c->r[4]=c->r[3]+c->r[0]; // 803A7114
L_803A7118:;
  cmps(c,0,(int32_t)c->r[4],0); // 803A7118
  if (!crb(c,2)) { goto L_803A7128; } // 803A711C
  c->r[3]=0u+0x00000000u; // 803A7120
  goto L_803A7164; // 803A7124
L_803A7128:;
  c->r[3]=R8(c->r[4]+0x0000000Cu); // 803A7128
  c->r[4]=R32(c->r[4]+0x00000010u); // 803A712C
  c->r[5]=R32(c->r[29]+0x00000028u); // 803A7130
  c->lr=0x803A7138u; f_803B3154(c); // 803A7134
  cmps(c,0,(int32_t)c->r[3],0); // 803A7138
  if (!crb(c,2)) { goto L_803A7148; } // 803A713C
  c->r[3]=0u+0x00000000u; // 803A7140
  goto L_803A7164; // 803A7144
L_803A7148:;
  c->r[0]=R32(c->r[3]+0x00000000u); // 803A7148
  W32(c->r[31]+0x00000000u,c->r[0]); // 803A714C
  c->r[0]=R8(c->r[3]+0x00000004u); // 803A7150
  W8(c->r[31]+0x00000004u,c->r[0]); // 803A7154
  c->r[0]=R8(c->r[3]+0x00000005u); // 803A7158
  c->r[3]=0u+0x00000001u; // 803A715C
  W8(c->r[31]+0x00000005u,c->r[0]); // 803A7160
L_803A7164:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 803A7164
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 803A7168
  c->r[30]=R32(c->r[1]+0x00000018u); // 803A716C
  c->r[29]=R32(c->r[1]+0x00000014u); // 803A7170
  c->lr=c->r[0]; // 803A7174
  c->r[1]=c->r[1]+0x00000020u; // 803A7178
  return; // 803A717C
}

// fn_803A7180
void f_803A7180(Ctx* __restrict c) {
  trace_call(0x803A7180u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803A7180
  c->r[0]=c->lr; // 803A7184
  W32(c->r[1]+0x00000024u,c->r[0]); // 803A7188
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 803A718C
  c->r[31]=c->r[5]|c->r[5]; // 803A7190
  W32(c->r[1]+0x00000018u,c->r[30]); // 803A7194
  c->r[30]=c->r[3]|c->r[3]; // 803A7198
  c->lr=0x803A71A0u; f_803A7CEC(c); // 803A719C
  W32(c->r[1]+0x00000008u,c->r[3]); // 803A71A0
  c->r[5]=R32(c->r[30]+0x00000028u); // 803A71A4
  W32(c->r[1]+0x0000000Cu,c->r[4]); // 803A71A8
  c->r[3]=R8(c->r[1]+0x00000008u); // 803A71AC
  c->lr=0x803A71B4u; f_803B3154(c); // 803A71B0
  cmps(c,0,(int32_t)c->r[3],0); // 803A71B4
  if (!crb(c,2)) { goto L_803A71C4; } // 803A71B8
  c->r[3]=0u+0x00000000u; // 803A71BC
  goto L_803A7214; // 803A71C0
L_803A71C4:;
  c->r[4]=R32(c->r[3]+0x00000000u); // 803A71C4
  c->r[0]=R16(c->r[30]+0x00000006u); // 803A71C8
  W32(c->r[31]+0x00000000u,c->r[4]); // 803A71CC
  cmpu(c,0,c->r[0],0x00000103u); // 803A71D0
  c->r[0]=R32(c->r[3]+0x00000004u); // 803A71D4
  W32(c->r[31]+0x00000004u,c->r[0]); // 803A71D8
  c->r[0]=R8(c->r[3]+0x0000000Cu); // 803A71DC
  W32(c->r[31]+0x0000000Cu,c->r[0]); // 803A71E0
  c->r[0]=R32(c->r[3]+0x00000008u); // 803A71E4
  W32(c->r[31]+0x00000008u,c->r[0]); // 803A71E8
  if (crb(c,0)) { goto L_803A7208; } // 803A71EC
  c->r[3]=R8(c->r[3]+0x0000000Du); // 803A71F0
  c->r[0]=0u-c->r[3]; // 803A71F4
  c->r[0]=c->r[0]|c->r[3]; // 803A71F8
  c->r[0]=rotl(c->r[0],1)&0x00000001u; // 803A71FC
  W8(c->r[31]+0x00000010u,c->r[0]); // 803A7200
  goto L_803A7210; // 803A7204
L_803A7208:;
  c->r[0]=0u+0x00000000u; // 803A7208
  W8(c->r[31]+0x00000010u,c->r[0]); // 803A720C
L_803A7210:;
  c->r[3]=0u+0x00000001u; // 803A7210
L_803A7214:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 803A7214
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 803A7218
  c->r[30]=R32(c->r[1]+0x00000018u); // 803A721C
  c->lr=c->r[0]; // 803A7220
  c->r[1]=c->r[1]+0x00000020u; // 803A7224
  return; // 803A7228
}

// fn_803A722C
void f_803A722C(Ctx* __restrict c) {
  trace_call(0x803A722Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803A722C
  c->r[0]=c->lr; // 803A7230
  W32(c->r[1]+0x00000024u,c->r[0]); // 803A7234
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 803A7238
  c->r[31]=c->r[3]|c->r[3]; // 803A723C
  c->lr=0x803A7244u; f_803A7CEC(c); // 803A7240
  W32(c->r[1]+0x00000008u,c->r[3]); // 803A7244
  c->r[5]=R32(c->r[31]+0x00000028u); // 803A7248
  W32(c->r[1]+0x0000000Cu,c->r[4]); // 803A724C
  c->r[3]=R8(c->r[1]+0x00000008u); // 803A7250
  c->lr=0x803A7258u; f_803B3154(c); // 803A7254
  c->r[0]=0u-c->r[3]; // 803A7258
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 803A725C
  c->r[0]=c->r[0]|c->r[3]; // 803A7260
  c->r[3]=rotl(c->r[0],1)&0x00000001u; // 803A7264
  c->r[0]=R32(c->r[1]+0x00000024u); // 803A7268
  c->lr=c->r[0]; // 803A726C
  c->r[1]=c->r[1]+0x00000020u; // 803A7270
  return; // 803A7274
}

// ReadWaveSoundInfo__Q44nw4r3snd6detail22SoundArchiveFileReaderCFUlPQ44nw4r3snd12SoundArchive13WaveSoundInfo
void f_803A7278(Ctx* __restrict c) {
  trace_call(0x803A7278u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803A7278
  c->r[0]=c->lr; // 803A727C
  W32(c->r[1]+0x00000024u,c->r[0]); // 803A7280
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 803A7284
  c->r[31]=c->r[5]|c->r[5]; // 803A7288
  W32(c->r[1]+0x00000018u,c->r[30]); // 803A728C
  c->r[30]=c->r[3]|c->r[3]; // 803A7290
  c->lr=0x803A7298u; f_803A7CEC(c); // 803A7294
  W32(c->r[1]+0x00000008u,c->r[3]); // 803A7298
  c->r[5]=R32(c->r[30]+0x00000028u); // 803A729C
  W32(c->r[1]+0x0000000Cu,c->r[4]); // 803A72A0
  c->r[3]=R8(c->r[1]+0x00000008u); // 803A72A4
  c->lr=0x803A72ACu; f_803B3154(c); // 803A72A8
  cmps(c,0,(int32_t)c->r[3],0); // 803A72AC
  if (!crb(c,2)) { goto L_803A72BC; } // 803A72B0
  c->r[3]=0u+0x00000000u; // 803A72B4
  goto L_803A72FC; // 803A72B8
L_803A72BC:;
  c->r[4]=R32(c->r[3]+0x00000000u); // 803A72BC
  c->r[0]=R16(c->r[30]+0x00000006u); // 803A72C0
  W32(c->r[31]+0x00000000u,c->r[4]); // 803A72C4
  cmpu(c,0,c->r[0],0x00000103u); // 803A72C8
  c->r[0]=R8(c->r[3]+0x00000008u); // 803A72CC
  W32(c->r[31]+0x00000004u,c->r[0]); // 803A72D0
  if (crb(c,0)) { goto L_803A72F0; } // 803A72D4
  c->r[3]=R8(c->r[3]+0x00000009u); // 803A72D8
  c->r[0]=0u-c->r[3]; // 803A72DC
  c->r[0]=c->r[0]|c->r[3]; // 803A72E0
  c->r[0]=rotl(c->r[0],1)&0x00000001u; // 803A72E4
  W8(c->r[31]+0x00000008u,c->r[0]); // 803A72E8
  goto L_803A72F8; // 803A72EC
L_803A72F0:;
  c->r[0]=0u+0x00000000u; // 803A72F0
  W8(c->r[31]+0x00000008u,c->r[0]); // 803A72F4
L_803A72F8:;
  c->r[3]=0u+0x00000001u; // 803A72F8
L_803A72FC:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 803A72FC
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 803A7300
  c->r[30]=R32(c->r[1]+0x00000018u); // 803A7304
  c->lr=c->r[0]; // 803A7308
  c->r[1]=c->r[1]+0x00000020u; // 803A730C
  return; // 803A7310
}

// ReadBankInfo__Q44nw4r3snd6detail22SoundArchiveFileReaderCFUlPQ44nw4r3snd12SoundArchive8BankInfo
void f_803A7314(Ctx* __restrict c) {
  trace_call(0x803A7314u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803A7314
  c->r[0]=c->lr; // 803A7318
  c->r[6]=R32(c->r[3]+0x00000028u); // 803A731C
  W32(c->r[1]+0x00000024u,c->r[0]); // 803A7320
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 803A7324
  c->r[31]=c->r[5]|c->r[5]; // 803A7328
  c->r[5]=c->r[6]|c->r[6]; // 803A732C
  W32(c->r[1]+0x00000018u,c->r[30]); // 803A7330
  c->r[30]=c->r[4]|c->r[4]; // 803A7334
  W32(c->r[1]+0x00000014u,c->r[29]); // 803A7338
  c->r[29]=c->r[3]|c->r[3]; // 803A733C
  c->r[3]=R8(c->r[6]+0x00000008u); // 803A7340
  c->r[4]=R32(c->r[6]+0x0000000Cu); // 803A7344
  c->lr=0x803A734Cu; f_803B3154(c); // 803A7348
  cmps(c,0,(int32_t)c->r[3],0); // 803A734C
  if (!crb(c,2)) { goto L_803A735C; } // 803A7350
  c->r[3]=0u+0x00000000u; // 803A7354
  goto L_803A7388; // 803A7358
L_803A735C:;
  c->r[0]=R32(c->r[3]+0x00000000u); // 803A735C
  cmpu(c,0,c->r[30],c->r[0]); // 803A7360
  if (crb(c,0)) { goto L_803A7370; } // 803A7364
  c->r[3]=0u+0x00000000u; // 803A7368
  goto L_803A7388; // 803A736C
L_803A7370:;
  c->r[0]=rotl(c->r[30],3)&0xFFFFFFF8u; // 803A7370
  c->r[5]=R32(c->r[29]+0x00000028u); // 803A7374
  c->r[4]=c->r[3]+c->r[0]; // 803A7378
  c->r[3]=R8(c->r[4]+0x00000004u); // 803A737C
  c->r[4]=R32(c->r[4]+0x00000008u); // 803A7380
  c->lr=0x803A7388u; f_803B3154(c); // 803A7384
L_803A7388:;
  cmps(c,0,(int32_t)c->r[3],0); // 803A7388
  if (!crb(c,2)) { goto L_803A7398; } // 803A738C
  c->r[3]=0u+0x00000000u; // 803A7390
  goto L_803A73A4; // 803A7394
L_803A7398:;
  c->r[0]=R32(c->r[3]+0x00000004u); // 803A7398
  c->r[3]=0u+0x00000001u; // 803A739C
  W32(c->r[31]+0x00000000u,c->r[0]); // 803A73A0
L_803A73A4:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 803A73A4
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 803A73A8
  c->r[30]=R32(c->r[1]+0x00000018u); // 803A73AC
  c->r[29]=R32(c->r[1]+0x00000014u); // 803A73B0
  c->lr=c->r[0]; // 803A73B4
  c->r[1]=c->r[1]+0x00000020u; // 803A73B8
  return; // 803A73BC
}

// ReadPlayerInfo__Q44nw4r3snd6detail22SoundArchiveFileReaderCFUlPQ44nw4r3snd12SoundArchive10PlayerInfo
void f_803A73C0(Ctx* __restrict c) {
  trace_call(0x803A73C0u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803A73C0
  c->r[0]=c->lr; // 803A73C4
  c->r[6]=R32(c->r[3]+0x00000028u); // 803A73C8
  W32(c->r[1]+0x00000024u,c->r[0]); // 803A73CC
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 803A73D0
  c->r[31]=c->r[5]|c->r[5]; // 803A73D4
  c->r[5]=c->r[6]|c->r[6]; // 803A73D8
  W32(c->r[1]+0x00000018u,c->r[30]); // 803A73DC
  c->r[30]=c->r[4]|c->r[4]; // 803A73E0
  W32(c->r[1]+0x00000014u,c->r[29]); // 803A73E4
  c->r[29]=c->r[3]|c->r[3]; // 803A73E8
  c->r[3]=R8(c->r[6]+0x00000010u); // 803A73EC
  c->r[4]=R32(c->r[6]+0x00000014u); // 803A73F0
  c->lr=0x803A73F8u; f_803B3154(c); // 803A73F4
  cmps(c,0,(int32_t)c->r[3],0); // 803A73F8
  if (!crb(c,2)) { goto L_803A7408; } // 803A73FC
  c->r[4]=0u+0x00000000u; // 803A7400
  goto L_803A7438; // 803A7404
L_803A7408:;
  c->r[0]=R32(c->r[3]+0x00000000u); // 803A7408
  cmpu(c,0,c->r[30],c->r[0]); // 803A740C
  if (crb(c,0)) { goto L_803A741C; } // 803A7410
  c->r[4]=0u+0x00000000u; // 803A7414
  goto L_803A7438; // 803A7418
L_803A741C:;
  c->r[0]=rotl(c->r[30],3)&0xFFFFFFF8u; // 803A741C
  c->r[5]=R32(c->r[29]+0x00000028u); // 803A7420
  c->r[4]=c->r[3]+c->r[0]; // 803A7424
  c->r[3]=R8(c->r[4]+0x00000004u); // 803A7428
  c->r[4]=R32(c->r[4]+0x00000008u); // 803A742C
  c->lr=0x803A7434u; f_803B3154(c); // 803A7430
  c->r[4]=c->r[3]|c->r[3]; // 803A7434
L_803A7438:;
  cmps(c,0,(int32_t)c->r[4],0); // 803A7438
  if (!crb(c,2)) { goto L_803A7448; } // 803A743C
  c->r[3]=0u+0x00000000u; // 803A7440
  goto L_803A745C; // 803A7444
L_803A7448:;
  c->r[0]=R8(c->r[4]+0x00000004u); // 803A7448
  c->r[3]=0u+0x00000001u; // 803A744C
  W32(c->r[31]+0x00000000u,c->r[0]); // 803A7450
  c->r[0]=R32(c->r[4]+0x00000008u); // 803A7454
  W32(c->r[31]+0x00000004u,c->r[0]); // 803A7458
L_803A745C:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 803A745C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 803A7460
  c->r[30]=R32(c->r[1]+0x00000018u); // 803A7464
  c->r[29]=R32(c->r[1]+0x00000014u); // 803A7468
  c->lr=c->r[0]; // 803A746C
  c->r[1]=c->r[1]+0x00000020u; // 803A7470
  return; // 803A7474
}

// ReadGroupInfo__Q44nw4r3snd6detail22SoundArchiveFileReaderCFUlPQ44nw4r3snd12SoundArchive9GroupInfo
void f_803A7478(Ctx* __restrict c) {
  trace_call(0x803A7478u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803A7478
  c->r[0]=c->lr; // 803A747C
  c->r[6]=R32(c->r[3]+0x00000028u); // 803A7480
  W32(c->r[1]+0x00000024u,c->r[0]); // 803A7484
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 803A7488
  W32(c->r[1]+0x00000018u,c->r[30]); // 803A748C
  c->r[30]=c->r[4]|c->r[4]; // 803A7490
  W32(c->r[1]+0x00000014u,c->r[29]); // 803A7494
  c->r[29]=c->r[5]|c->r[5]; // 803A7498
  c->r[5]=c->r[6]|c->r[6]; // 803A749C
  W32(c->r[1]+0x00000010u,c->r[28]); // 803A74A0
  c->r[28]=c->r[3]|c->r[3]; // 803A74A4
  c->r[3]=R8(c->r[6]+0x00000020u); // 803A74A8
  c->r[4]=R32(c->r[6]+0x00000024u); // 803A74AC
  c->lr=0x803A74B4u; f_803B3154(c); // 803A74B0
  cmps(c,0,(int32_t)c->r[3],0); // 803A74B4
  if (!crb(c,2)) { goto L_803A74C4; } // 803A74B8
  c->r[30]=0u+0x00000000u; // 803A74BC
  goto L_803A74F4; // 803A74C0
L_803A74C4:;
  c->r[0]=R32(c->r[3]+0x00000000u); // 803A74C4
  cmpu(c,0,c->r[30],c->r[0]); // 803A74C8
  if (crb(c,0)) { goto L_803A74D8; } // 803A74CC
  c->r[30]=0u+0x00000000u; // 803A74D0
  goto L_803A74F4; // 803A74D4
L_803A74D8:;
  c->r[0]=rotl(c->r[30],3)&0xFFFFFFF8u; // 803A74D8
  c->r[5]=R32(c->r[28]+0x00000028u); // 803A74DC
  c->r[4]=c->r[3]+c->r[0]; // 803A74E0
  c->r[3]=R8(c->r[4]+0x00000004u); // 803A74E4
  c->r[4]=R32(c->r[4]+0x00000008u); // 803A74E8
  c->lr=0x803A74F0u; f_803B3154(c); // 803A74EC
  c->r[30]=c->r[3]|c->r[3]; // 803A74F0
L_803A74F4:;
  cmps(c,0,(int32_t)c->r[30],0); // 803A74F4
  if (!crb(c,2)) { goto L_803A7504; } // 803A74F8
  c->r[3]=0u+0x00000000u; // 803A74FC
  goto L_803A7568; // 803A7500
L_803A7504:;
  c->r[3]=R8(c->r[30]+0x00000020u); // 803A7504
  c->r[4]=R32(c->r[30]+0x00000024u); // 803A7508
  c->r[5]=R32(c->r[28]+0x00000028u); // 803A750C
  c->lr=0x803A7514u; f_803B3154(c); // 803A7510
  cmps(c,0,(int32_t)c->r[3],0); // 803A7514
  c->r[31]=c->r[3]|c->r[3]; // 803A7518
  if (!crb(c,2)) { goto L_803A7528; } // 803A751C
  c->r[3]=0u+0x00000000u; // 803A7520
  goto L_803A7568; // 803A7524
L_803A7528:;
  c->r[3]=R8(c->r[30]+0x00000008u); // 803A7528
  c->r[4]=R32(c->r[30]+0x0000000Cu); // 803A752C
  c->r[5]=R32(c->r[28]+0x00000028u); // 803A7530
  c->lr=0x803A7538u; f_803B3154(c); // 803A7534
  W32(c->r[29]+0x00000004u,c->r[3]); // 803A7538
  c->r[3]=0u+0x00000001u; // 803A753C
  c->r[0]=R32(c->r[30]+0x00000010u); // 803A7540
  W32(c->r[29]+0x00000008u,c->r[0]); // 803A7544
  c->r[0]=R32(c->r[30]+0x00000014u); // 803A7548
  W32(c->r[29]+0x0000000Cu,c->r[0]); // 803A754C
  c->r[0]=R32(c->r[30]+0x00000018u); // 803A7550
  W32(c->r[29]+0x00000010u,c->r[0]); // 803A7554
  c->r[0]=R32(c->r[30]+0x0000001Cu); // 803A7558
  W32(c->r[29]+0x00000014u,c->r[0]); // 803A755C
  c->r[0]=R32(c->r[31]+0x00000000u); // 803A7560
  W32(c->r[29]+0x00000000u,c->r[0]); // 803A7564
L_803A7568:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 803A7568
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 803A756C
  c->r[30]=R32(c->r[1]+0x00000018u); // 803A7570
  c->r[29]=R32(c->r[1]+0x00000014u); // 803A7574
  c->r[28]=R32(c->r[1]+0x00000010u); // 803A7578
  c->lr=c->r[0]; // 803A757C
  c->r[1]=c->r[1]+0x00000020u; // 803A7580
  return; // 803A7584
}

// ReadGroupItemInfo__Q44nw4r3snd6detail22SoundArchiveFileReaderCFUlUlPQ44nw4r3snd12SoundArchive13GroupItemInfo
void f_803A7588(Ctx* __restrict c) {
  trace_call(0x803A7588u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803A7588
  c->r[0]=c->lr; // 803A758C
  c->r[7]=R32(c->r[3]+0x00000028u); // 803A7590
  W32(c->r[1]+0x00000024u,c->r[0]); // 803A7594
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 803A7598
  c->r[31]=c->r[6]|c->r[6]; // 803A759C
  W32(c->r[1]+0x00000018u,c->r[30]); // 803A75A0
  c->r[30]=c->r[5]|c->r[5]; // 803A75A4
  c->r[5]=c->r[7]|c->r[7]; // 803A75A8
  W32(c->r[1]+0x00000014u,c->r[29]); // 803A75AC
  c->r[29]=c->r[4]|c->r[4]; // 803A75B0
  W32(c->r[1]+0x00000010u,c->r[28]); // 803A75B4
  c->r[28]=c->r[3]|c->r[3]; // 803A75B8
  c->r[3]=R8(c->r[7]+0x00000020u); // 803A75BC
  c->r[4]=R32(c->r[7]+0x00000024u); // 803A75C0
  c->lr=0x803A75C8u; f_803B3154(c); // 803A75C4
  cmps(c,0,(int32_t)c->r[3],0); // 803A75C8
  if (!crb(c,2)) { goto L_803A75D8; } // 803A75CC
  c->r[4]=0u+0x00000000u; // 803A75D0
  goto L_803A7608; // 803A75D4
L_803A75D8:;
  c->r[0]=R32(c->r[3]+0x00000000u); // 803A75D8
  cmpu(c,0,c->r[29],c->r[0]); // 803A75DC
  if (crb(c,0)) { goto L_803A75EC; } // 803A75E0
  c->r[4]=0u+0x00000000u; // 803A75E4
  goto L_803A7608; // 803A75E8
L_803A75EC:;
  c->r[0]=rotl(c->r[29],3)&0xFFFFFFF8u; // 803A75EC
  c->r[5]=R32(c->r[28]+0x00000028u); // 803A75F0
  c->r[4]=c->r[3]+c->r[0]; // 803A75F4
  c->r[3]=R8(c->r[4]+0x00000004u); // 803A75F8
  c->r[4]=R32(c->r[4]+0x00000008u); // 803A75FC
  c->lr=0x803A7604u; f_803B3154(c); // 803A7600
  c->r[4]=c->r[3]|c->r[3]; // 803A7604
L_803A7608:;
  cmps(c,0,(int32_t)c->r[4],0); // 803A7608
  if (!crb(c,2)) { goto L_803A7618; } // 803A760C
  c->r[3]=0u+0x00000000u; // 803A7610
  goto L_803A76A0; // 803A7614
L_803A7618:;
  c->r[3]=R8(c->r[4]+0x00000020u); // 803A7618
  c->r[4]=R32(c->r[4]+0x00000024u); // 803A761C
  c->r[5]=R32(c->r[28]+0x00000028u); // 803A7620
  c->lr=0x803A7628u; f_803B3154(c); // 803A7624
  cmps(c,0,(int32_t)c->r[3],0); // 803A7628
  if (!crb(c,2)) { goto L_803A7638; } // 803A762C
  c->r[3]=0u+0x00000000u; // 803A7630
  goto L_803A76A0; // 803A7634
L_803A7638:;
  c->r[0]=R32(c->r[3]+0x00000000u); // 803A7638
  cmpu(c,0,c->r[30],c->r[0]); // 803A763C
  if (crb(c,0)) { goto L_803A764C; } // 803A7640
  c->r[3]=0u+0x00000000u; // 803A7644
  goto L_803A76A0; // 803A7648
L_803A764C:;
  c->r[0]=rotl(c->r[30],3)&0xFFFFFFF8u; // 803A764C
  c->r[5]=R32(c->r[28]+0x00000028u); // 803A7650
  c->r[4]=c->r[3]+c->r[0]; // 803A7654
  c->r[3]=R8(c->r[4]+0x00000004u); // 803A7658
  c->r[4]=R32(c->r[4]+0x00000008u); // 803A765C
  c->lr=0x803A7664u; f_803B3154(c); // 803A7660
  cmps(c,0,(int32_t)c->r[3],0); // 803A7664
  if (!crb(c,2)) { goto L_803A7674; } // 803A7668
  c->r[3]=0u+0x00000000u; // 803A766C
  goto L_803A76A0; // 803A7670
L_803A7674:;
  c->r[0]=R32(c->r[3]+0x00000000u); // 803A7674
  W32(c->r[31]+0x00000000u,c->r[0]); // 803A7678
  c->r[0]=R32(c->r[3]+0x00000004u); // 803A767C
  W32(c->r[31]+0x00000004u,c->r[0]); // 803A7680
  c->r[0]=R32(c->r[3]+0x00000008u); // 803A7684
  W32(c->r[31]+0x00000008u,c->r[0]); // 803A7688
  c->r[0]=R32(c->r[3]+0x0000000Cu); // 803A768C
  W32(c->r[31]+0x0000000Cu,c->r[0]); // 803A7690
  c->r[0]=R32(c->r[3]+0x00000010u); // 803A7694
  c->r[3]=0u+0x00000001u; // 803A7698
  W32(c->r[31]+0x00000010u,c->r[0]); // 803A769C
L_803A76A0:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 803A76A0
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 803A76A4
  c->r[30]=R32(c->r[1]+0x00000018u); // 803A76A8
  c->r[29]=R32(c->r[1]+0x00000014u); // 803A76AC
  c->r[28]=R32(c->r[1]+0x00000010u); // 803A76B0
  c->lr=c->r[0]; // 803A76B4
  c->r[1]=c->r[1]+0x00000020u; // 803A76B8
  return; // 803A76BC
}

// ReadSoundArchivePlayerInfo__Q44nw4r3snd6detail22SoundArchiveFileReaderCFPQ44nw4r3snd12SoundArchive22SoundArchivePlayerInfo
void f_803A76C0(Ctx* __restrict c) {
  trace_call(0x803A76C0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803A76C0
  c->r[0]=c->lr; // 803A76C4
  c->r[5]=R32(c->r[3]+0x00000028u); // 803A76C8
  W32(c->r[1]+0x00000014u,c->r[0]); // 803A76CC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 803A76D0
  c->r[31]=c->r[4]|c->r[4]; // 803A76D4
  c->r[3]=R8(c->r[5]+0x00000028u); // 803A76D8
  c->r[4]=R32(c->r[5]+0x0000002Cu); // 803A76DC
  c->lr=0x803A76E4u; f_803B3154(c); // 803A76E0
  cmps(c,0,(int32_t)c->r[31],0); // 803A76E4
  if (!crb(c,2)) { goto L_803A76F4; } // 803A76E8
  c->r[3]=0u+0x00000000u; // 803A76EC
  goto L_803A7730; // 803A76F0
L_803A76F4:;
  c->r[0]=R16(c->r[3]+0x00000000u); // 803A76F4
  W32(c->r[31]+0x00000000u,c->r[0]); // 803A76F8
  c->r[0]=R16(c->r[3]+0x00000002u); // 803A76FC
  W32(c->r[31]+0x00000004u,c->r[0]); // 803A7700
  c->r[0]=R16(c->r[3]+0x00000004u); // 803A7704
  W32(c->r[31]+0x00000008u,c->r[0]); // 803A7708
  c->r[0]=R16(c->r[3]+0x00000006u); // 803A770C
  W32(c->r[31]+0x0000000Cu,c->r[0]); // 803A7710
  c->r[0]=R16(c->r[3]+0x00000008u); // 803A7714
  W32(c->r[31]+0x00000010u,c->r[0]); // 803A7718
  c->r[0]=R16(c->r[3]+0x0000000Au); // 803A771C
  W32(c->r[31]+0x00000014u,c->r[0]); // 803A7720
  c->r[0]=R16(c->r[3]+0x0000000Cu); // 803A7724
  c->r[3]=0u+0x00000001u; // 803A7728
  W32(c->r[31]+0x00000018u,c->r[0]); // 803A772C
L_803A7730:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 803A7730
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 803A7734
  c->lr=c->r[0]; // 803A7738
  c->r[1]=c->r[1]+0x00000010u; // 803A773C
  return; // 803A7740
}

// GetPlayerCount__Q44nw4r3snd6detail22SoundArchiveFileReaderCFv
void f_803A7744(Ctx* __restrict c) {
  trace_call(0x803A7744u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803A7744
  c->r[0]=c->lr; // 803A7748
  c->r[5]=R32(c->r[3]+0x00000028u); // 803A774C
  W32(c->r[1]+0x00000014u,c->r[0]); // 803A7750
  c->r[3]=R8(c->r[5]+0x00000010u); // 803A7754
  c->r[4]=R32(c->r[5]+0x00000014u); // 803A7758
  c->lr=0x803A7760u; f_803B3154(c); // 803A775C
  cmps(c,0,(int32_t)c->r[3],0); // 803A7760
  if (!crb(c,2)) { goto L_803A7770; } // 803A7764
  c->r[3]=0u+0x00000000u; // 803A7768
  goto L_803A7774; // 803A776C
L_803A7770:;
  c->r[3]=R32(c->r[3]+0x00000000u); // 803A7770
L_803A7774:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 803A7774
  c->lr=c->r[0]; // 803A7778
  c->r[1]=c->r[1]+0x00000010u; // 803A777C
  return; // 803A7780
}

// GetGroupCount__Q44nw4r3snd6detail22SoundArchiveFileReaderCFv
void f_803A7784(Ctx* __restrict c) {
  trace_call(0x803A7784u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803A7784
  c->r[0]=c->lr; // 803A7788
  c->r[5]=R32(c->r[3]+0x00000028u); // 803A778C
  W32(c->r[1]+0x00000014u,c->r[0]); // 803A7790
  c->r[3]=R8(c->r[5]+0x00000020u); // 803A7794
  c->r[4]=R32(c->r[5]+0x00000024u); // 803A7798
  c->lr=0x803A77A0u; f_803B3154(c); // 803A779C
  cmps(c,0,(int32_t)c->r[3],0); // 803A77A0
  if (!crb(c,2)) { goto L_803A77B0; } // 803A77A4
  c->r[3]=0u+0x00000000u; // 803A77A8
  goto L_803A77B8; // 803A77AC
L_803A77B0:;
  c->r[3]=R32(c->r[3]+0x00000000u); // 803A77B0
  c->r[3]=c->r[3]+0xFFFFFFFFu; // 803A77B4
L_803A77B8:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 803A77B8
  c->lr=c->r[0]; // 803A77BC
  c->r[1]=c->r[1]+0x00000010u; // 803A77C0
  return; // 803A77C4
}

// fn_803A77C8
void f_803A77C8(Ctx* __restrict c) {
  trace_call(0x803A77C8u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803A77C8
  c->r[0]=c->lr; // 803A77CC
  c->r[5]=R32(c->r[3]+0x00000028u); // 803A77D0
  W32(c->r[1]+0x00000014u,c->r[0]); // 803A77D4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 803A77D8
  c->r[31]=c->r[4]|c->r[4]; // 803A77DC
  W32(c->r[1]+0x00000008u,c->r[30]); // 803A77E0
  c->r[30]=c->r[3]|c->r[3]; // 803A77E4
  c->r[3]=R8(c->r[5]+0x00000000u); // 803A77E8
  c->r[4]=R32(c->r[5]+0x00000004u); // 803A77EC
  c->lr=0x803A77F4u; f_803B3154(c); // 803A77F0
  cmps(c,0,(int32_t)c->r[3],0); // 803A77F4
  if (!crb(c,2)) { goto L_803A7804; } // 803A77F8
  c->r[3]=0u+0x00000000u; // 803A77FC
  goto L_803A7854; // 803A7800
L_803A7804:;
  c->r[0]=R32(c->r[3]+0x00000000u); // 803A7804
  cmpu(c,0,c->r[31],c->r[0]); // 803A7808
  if (crb(c,0)) { goto L_803A7818; } // 803A780C
  c->r[3]=0u+0x00000000u; // 803A7810
  goto L_803A7854; // 803A7814
L_803A7818:;
  c->r[0]=R16(c->r[30]+0x00000006u); // 803A7818
  cmpu(c,0,c->r[0],0x00000101u); // 803A781C
  if (crb(c,0)) { goto L_803A7840; } // 803A7820
  c->r[0]=rotl(c->r[31],3)&0xFFFFFFF8u; // 803A7824
  c->r[5]=R32(c->r[30]+0x00000028u); // 803A7828
  c->r[4]=c->r[3]+c->r[0]; // 803A782C
  c->r[3]=R8(c->r[4]+0x00000004u); // 803A7830
  c->r[4]=R32(c->r[4]+0x00000008u); // 803A7834
  c->lr=0x803A783Cu; f_803B3154(c); // 803A7838
  goto L_803A7854; // 803A783C
L_803A7840:;
  c->r[4]=rotl(c->r[31],3)&0xFFFFFFF8u; // 803A7840
  c->r[0]=R32(c->r[30]+0x00000028u); // 803A7844
  c->r[3]=c->r[3]+c->r[4]; // 803A7848
  c->r[3]=R32(c->r[3]+0x00000008u); // 803A784C
  c->r[3]=c->r[3]+c->r[0]; // 803A7850
L_803A7854:;
  cmps(c,0,(int32_t)c->r[3],0); // 803A7854
  if (!crb(c,2)) { goto L_803A7864; } // 803A7858
  c->r[3]=0u+0xFFFFFFFFu; // 803A785C
  goto L_803A7868; // 803A7860
L_803A7864:;
  c->r[3]=R32(c->r[3]+0x00000000u); // 803A7864
L_803A7868:;
  c->r[0]=c->r[3]+0x00010000u; // 803A7868
  cmpu(c,0,c->r[0],0x0000FFFFu); // 803A786C
  if (!crb(c,2)) { goto L_803A787C; } // 803A7870
  c->r[3]=0u+0x00000000u; // 803A7874
  goto L_803A78B4; // 803A7878
L_803A787C:;
  c->r[5]=R32(c->r[30]+0x00000030u); // 803A787C
  cmps(c,0,(int32_t)c->r[5],0); // 803A7880
  if (!crb(c,2)) { goto L_803A7890; } // 803A7884
  c->r[3]=0u+0x00000000u; // 803A7888
  goto L_803A78B4; // 803A788C
L_803A7890:;
  c->r[0]=rotl(c->r[3],2)&0xFFFFFFFCu; // 803A7890
  c->r[4]=R32(c->r[30]+0x0000002Cu); // 803A7894
  c->r[3]=c->r[5]+c->r[0]; // 803A7898
  c->r[0]=R32(c->r[3]+0x00000004u); // 803A789C
  cmps(c,0,(int32_t)c->r[0],0); // 803A78A0
  if (!crb(c,2)) { goto L_803A78B0; } // 803A78A4
  c->r[3]=0u+0x00000000u; // 803A78A8
  goto L_803A78B4; // 803A78AC
L_803A78B0:;
  c->r[3]=c->r[0]+c->r[4]; // 803A78B0
L_803A78B4:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 803A78B4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 803A78B8
  c->r[30]=R32(c->r[1]+0x00000008u); // 803A78BC
  c->lr=c->r[0]; // 803A78C0
  c->r[1]=c->r[1]+0x00000010u; // 803A78C4
  return; // 803A78C8
}

// fn_803A78CC
void f_803A78CC(Ctx* __restrict c) {
  trace_call(0x803A78CCu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803A78CC
  c->r[0]=c->lr; // 803A78D0
  c->r[5]=R32(c->r[3]+0x00000028u); // 803A78D4
  W32(c->r[1]+0x00000014u,c->r[0]); // 803A78D8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 803A78DC
  c->r[31]=c->r[4]|c->r[4]; // 803A78E0
  W32(c->r[1]+0x00000008u,c->r[30]); // 803A78E4
  c->r[30]=c->r[3]|c->r[3]; // 803A78E8
  c->r[3]=R8(c->r[5]+0x00000000u); // 803A78EC
  c->r[4]=R32(c->r[5]+0x00000004u); // 803A78F0
  c->lr=0x803A78F8u; f_803B3154(c); // 803A78F4
  cmps(c,0,(int32_t)c->r[3],0); // 803A78F8
  if (!crb(c,2)) { goto L_803A7908; } // 803A78FC
  c->r[3]=0u+0x00000000u; // 803A7900
  goto L_803A7958; // 803A7904
L_803A7908:;
  c->r[0]=R32(c->r[3]+0x00000000u); // 803A7908
  cmpu(c,0,c->r[31],c->r[0]); // 803A790C
  if (crb(c,0)) { goto L_803A791C; } // 803A7910
  c->r[3]=0u+0x00000000u; // 803A7914
  goto L_803A7958; // 803A7918
L_803A791C:;
  c->r[0]=R16(c->r[30]+0x00000006u); // 803A791C
  cmpu(c,0,c->r[0],0x00000101u); // 803A7920
  if (crb(c,0)) { goto L_803A7944; } // 803A7924
  c->r[0]=rotl(c->r[31],3)&0xFFFFFFF8u; // 803A7928
  c->r[5]=R32(c->r[30]+0x00000028u); // 803A792C
  c->r[4]=c->r[3]+c->r[0]; // 803A7930
  c->r[3]=R8(c->r[4]+0x00000004u); // 803A7934
  c->r[4]=R32(c->r[4]+0x00000008u); // 803A7938
  c->lr=0x803A7940u; f_803B3154(c); // 803A793C
  goto L_803A7958; // 803A7940
L_803A7944:;
  c->r[4]=rotl(c->r[31],3)&0xFFFFFFF8u; // 803A7944
  c->r[0]=R32(c->r[30]+0x00000028u); // 803A7948
  c->r[3]=c->r[3]+c->r[4]; // 803A794C
  c->r[3]=R32(c->r[3]+0x00000008u); // 803A7950
  c->r[3]=c->r[3]+c->r[0]; // 803A7954
L_803A7958:;
  cmps(c,0,(int32_t)c->r[3],0); // 803A7958
  if (!crb(c,2)) { goto L_803A7968; } // 803A795C
  c->r[3]=0u+0x00000000u; // 803A7960
  goto L_803A796C; // 803A7964
L_803A7968:;
  c->r[3]=R32(c->r[3]+0x00000020u); // 803A7968
L_803A796C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 803A796C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 803A7970
  c->r[30]=R32(c->r[1]+0x00000008u); // 803A7974
  c->lr=c->r[0]; // 803A7978
  c->r[1]=c->r[1]+0x00000010u; // 803A797C
  return; // 803A7980
}

// ReadFileInfo__Q44nw4r3snd6detail22SoundArchiveFileReaderCFUlPQ44nw4r3snd12SoundArchive8FileInfo
void f_803A7984(Ctx* __restrict c) {
  trace_call(0x803A7984u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803A7984
  c->r[0]=c->lr; // 803A7988
  c->r[6]=R32(c->r[3]+0x00000028u); // 803A798C
  W32(c->r[1]+0x00000024u,c->r[0]); // 803A7990
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 803A7994
  W32(c->r[1]+0x00000018u,c->r[30]); // 803A7998
  c->r[30]=c->r[4]|c->r[4]; // 803A799C
  W32(c->r[1]+0x00000014u,c->r[29]); // 803A79A0
  c->r[29]=c->r[5]|c->r[5]; // 803A79A4
  c->r[5]=c->r[6]|c->r[6]; // 803A79A8
  W32(c->r[1]+0x00000010u,c->r[28]); // 803A79AC
  c->r[28]=c->r[3]|c->r[3]; // 803A79B0
  c->r[3]=R8(c->r[6]+0x00000018u); // 803A79B4
  c->r[4]=R32(c->r[6]+0x0000001Cu); // 803A79B8
  c->lr=0x803A79C0u; f_803B3154(c); // 803A79BC
  cmps(c,0,(int32_t)c->r[3],0); // 803A79C0
  if (!crb(c,2)) { goto L_803A79D0; } // 803A79C4
  c->r[3]=0u+0x00000000u; // 803A79C8
  goto L_803A7A64; // 803A79CC
L_803A79D0:;
  c->r[0]=R32(c->r[3]+0x00000000u); // 803A79D0
  cmpu(c,0,c->r[30],c->r[0]); // 803A79D4
  if (crb(c,0)) { goto L_803A79E4; } // 803A79D8
  c->r[3]=0u+0x00000000u; // 803A79DC
  goto L_803A7A64; // 803A79E0
L_803A79E4:;
  c->r[0]=rotl(c->r[30],3)&0xFFFFFFF8u; // 803A79E4
  c->r[5]=R32(c->r[28]+0x00000028u); // 803A79E8
  c->r[4]=c->r[3]+c->r[0]; // 803A79EC
  c->r[3]=R8(c->r[4]+0x00000004u); // 803A79F0
  c->r[4]=R32(c->r[4]+0x00000008u); // 803A79F4
  c->lr=0x803A79FCu; f_803B3154(c); // 803A79F8
  cmps(c,0,(int32_t)c->r[3],0); // 803A79FC
  c->r[30]=c->r[3]|c->r[3]; // 803A7A00
  if (!crb(c,2)) { goto L_803A7A10; } // 803A7A04
  c->r[3]=0u+0x00000000u; // 803A7A08
  goto L_803A7A64; // 803A7A0C
L_803A7A10:;
  c->r[3]=R8(c->r[3]+0x00000014u); // 803A7A10
  c->r[4]=R32(c->r[30]+0x00000018u); // 803A7A14
  c->r[5]=R32(c->r[28]+0x00000028u); // 803A7A18
  c->lr=0x803A7A20u; f_803B3154(c); // 803A7A1C
  cmps(c,0,(int32_t)c->r[3],0); // 803A7A20
  c->r[31]=c->r[3]|c->r[3]; // 803A7A24
  if (!crb(c,2)) { goto L_803A7A34; } // 803A7A28
  c->r[3]=0u+0x00000000u; // 803A7A2C
  goto L_803A7A64; // 803A7A30
L_803A7A34:;
  c->r[0]=R32(c->r[30]+0x00000000u); // 803A7A34
  c->r[5]=R32(c->r[28]+0x00000028u); // 803A7A38
  W32(c->r[29]+0x00000000u,c->r[0]); // 803A7A3C
  c->r[0]=R32(c->r[30]+0x00000004u); // 803A7A40
  W32(c->r[29]+0x00000004u,c->r[0]); // 803A7A44
  c->r[3]=R8(c->r[30]+0x0000000Cu); // 803A7A48
  c->r[4]=R32(c->r[30]+0x00000010u); // 803A7A4C
  c->lr=0x803A7A54u; f_803B3154(c); // 803A7A50
  W32(c->r[29]+0x00000008u,c->r[3]); // 803A7A54
  c->r[3]=0u+0x00000001u; // 803A7A58
  c->r[0]=R32(c->r[31]+0x00000000u); // 803A7A5C
  W32(c->r[29]+0x0000000Cu,c->r[0]); // 803A7A60
L_803A7A64:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 803A7A64
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 803A7A68
  c->r[30]=R32(c->r[1]+0x00000018u); // 803A7A6C
  c->r[29]=R32(c->r[1]+0x00000014u); // 803A7A70
  c->r[28]=R32(c->r[1]+0x00000010u); // 803A7A74
  c->lr=c->r[0]; // 803A7A78
  c->r[1]=c->r[1]+0x00000020u; // 803A7A7C
  return; // 803A7A80
}

// ReadFilePos__Q44nw4r3snd6detail22SoundArchiveFileReaderCFUlUlPQ44nw4r3snd12SoundArchive7FilePos
void f_803A7A84(Ctx* __restrict c) {
  trace_call(0x803A7A84u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803A7A84
  c->r[0]=c->lr; // 803A7A88
  c->r[7]=R32(c->r[3]+0x00000028u); // 803A7A8C
  W32(c->r[1]+0x00000024u,c->r[0]); // 803A7A90
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 803A7A94
  c->r[31]=c->r[6]|c->r[6]; // 803A7A98
  W32(c->r[1]+0x00000018u,c->r[30]); // 803A7A9C
  c->r[30]=c->r[5]|c->r[5]; // 803A7AA0
  c->r[5]=c->r[7]|c->r[7]; // 803A7AA4
  W32(c->r[1]+0x00000014u,c->r[29]); // 803A7AA8
  c->r[29]=c->r[4]|c->r[4]; // 803A7AAC
  W32(c->r[1]+0x00000010u,c->r[28]); // 803A7AB0
  c->r[28]=c->r[3]|c->r[3]; // 803A7AB4
  c->r[3]=R8(c->r[7]+0x00000018u); // 803A7AB8
  c->r[4]=R32(c->r[7]+0x0000001Cu); // 803A7ABC
  c->lr=0x803A7AC4u; f_803B3154(c); // 803A7AC0
  cmps(c,0,(int32_t)c->r[3],0); // 803A7AC4
  if (!crb(c,2)) { goto L_803A7AD4; } // 803A7AC8
  c->r[3]=0u+0x00000000u; // 803A7ACC
  goto L_803A7B84; // 803A7AD0
L_803A7AD4:;
  c->r[0]=R32(c->r[3]+0x00000000u); // 803A7AD4
  cmpu(c,0,c->r[29],c->r[0]); // 803A7AD8
  if (crb(c,0)) { goto L_803A7AE8; } // 803A7ADC
  c->r[3]=0u+0x00000000u; // 803A7AE0
  goto L_803A7B84; // 803A7AE4
L_803A7AE8:;
  c->r[0]=rotl(c->r[29],3)&0xFFFFFFF8u; // 803A7AE8
  c->r[5]=R32(c->r[28]+0x00000028u); // 803A7AEC
  c->r[4]=c->r[3]+c->r[0]; // 803A7AF0
  c->r[3]=R8(c->r[4]+0x00000004u); // 803A7AF4
  c->r[4]=R32(c->r[4]+0x00000008u); // 803A7AF8
  c->lr=0x803A7B00u; f_803B3154(c); // 803A7AFC
  cmps(c,0,(int32_t)c->r[3],0); // 803A7B00
  c->r[4]=c->r[3]|c->r[3]; // 803A7B04
  if (!crb(c,2)) { goto L_803A7B14; } // 803A7B08
  c->r[3]=0u+0x00000000u; // 803A7B0C
  goto L_803A7B84; // 803A7B10
L_803A7B14:;
  c->r[3]=R8(c->r[3]+0x00000014u); // 803A7B14
  c->r[4]=R32(c->r[4]+0x00000018u); // 803A7B18
  c->r[5]=R32(c->r[28]+0x00000028u); // 803A7B1C
  c->lr=0x803A7B24u; f_803B3154(c); // 803A7B20
  cmps(c,0,(int32_t)c->r[3],0); // 803A7B24
  if (!crb(c,2)) { goto L_803A7B34; } // 803A7B28
  c->r[3]=0u+0x00000000u; // 803A7B2C
  goto L_803A7B84; // 803A7B30
L_803A7B34:;
  c->r[0]=R32(c->r[3]+0x00000000u); // 803A7B34
  cmpu(c,0,c->r[30],c->r[0]); // 803A7B38
  if (crb(c,0)) { goto L_803A7B48; } // 803A7B3C
  c->r[3]=0u+0x00000000u; // 803A7B40
  goto L_803A7B84; // 803A7B44
L_803A7B48:;
  c->r[0]=rotl(c->r[30],3)&0xFFFFFFF8u; // 803A7B48
  c->r[5]=R32(c->r[28]+0x00000028u); // 803A7B4C
  c->r[4]=c->r[3]+c->r[0]; // 803A7B50
  c->r[3]=R8(c->r[4]+0x00000004u); // 803A7B54
  c->r[4]=R32(c->r[4]+0x00000008u); // 803A7B58
  c->lr=0x803A7B60u; f_803B3154(c); // 803A7B5C
  cmps(c,0,(int32_t)c->r[3],0); // 803A7B60
  if (!crb(c,2)) { goto L_803A7B70; } // 803A7B64
  c->r[3]=0u+0x00000000u; // 803A7B68
  goto L_803A7B84; // 803A7B6C
L_803A7B70:;
  c->r[0]=R32(c->r[3]+0x00000000u); // 803A7B70
  W32(c->r[31]+0x00000000u,c->r[0]); // 803A7B74
  c->r[0]=R32(c->r[3]+0x00000004u); // 803A7B78
  c->r[3]=0u+0x00000001u; // 803A7B7C
  W32(c->r[31]+0x00000004u,c->r[0]); // 803A7B80
L_803A7B84:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 803A7B84
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 803A7B88
  c->r[30]=R32(c->r[1]+0x00000018u); // 803A7B8C
  c->r[29]=R32(c->r[1]+0x00000014u); // 803A7B90
  c->r[28]=R32(c->r[1]+0x00000010u); // 803A7B94
  c->lr=c->r[0]; // 803A7B98
  c->r[1]=c->r[1]+0x00000020u; // 803A7B9C
  return; // 803A7BA0
}

// ConvertLabelStringToId__Q44nw4r3snd6detail22SoundArchiveFileReaderCFPCQ54nw4r3snd6detail16SoundArchiveFile10StringTreePCc
void f_803A7BA4(Ctx* __restrict c) {
  trace_call(0x803A7BA4u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803A7BA4
  c->r[0]=c->lr; // 803A7BA8
  cmps(c,0,(int32_t)c->r[4],0); // 803A7BAC
  W32(c->r[1]+0x00000024u,c->r[0]); // 803A7BB0
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 803A7BB4
  W32(c->r[1]+0x00000018u,c->r[30]); // 803A7BB8
  c->r[30]=c->r[5]|c->r[5]; // 803A7BBC
  W32(c->r[1]+0x00000014u,c->r[29]); // 803A7BC0
  c->r[29]=c->r[4]|c->r[4]; // 803A7BC4
  W32(c->r[1]+0x00000010u,c->r[28]); // 803A7BC8
  c->r[28]=c->r[3]|c->r[3]; // 803A7BCC
  if (!crb(c,2)) { goto L_803A7BDC; } // 803A7BD0
  c->r[3]=0u+0xFFFFFFFFu; // 803A7BD4
  goto L_803A7CCC; // 803A7BD8
L_803A7BDC:;
  c->r[3]=R32(c->r[4]+0x00000000u); // 803A7BDC
  c->r[0]=R32(c->r[4]+0x00000004u); // 803A7BE0
  cmpu(c,0,c->r[3],c->r[0]); // 803A7BE4
  if (crb(c,0)) { goto L_803A7BF4; } // 803A7BE8
  c->r[3]=0u+0xFFFFFFFFu; // 803A7BEC
  goto L_803A7CCC; // 803A7BF0
L_803A7BF4:;
  c->r[0]=(uint32_t)((int32_t)c->r[3]*(int32_t)20); // 803A7BF4
  c->r[3]=c->r[30]|c->r[30]; // 803A7BF8
  c->r[4]=c->r[4]+c->r[0]; // 803A7BFC
  c->r[31]=c->r[4]+0x00000008u; // 803A7C00
  c->lr=0x803A7C08u; f_802894C0(c); // 803A7C04
  c->r[5]=0u+0x00000001u; // 803A7C08
  goto L_803A7C54; // 803A7C0C
L_803A7C10:;
  c->r[0]=R16(c->r[31]+0x00000002u); // 803A7C10
  c->r[4]=sraw(c,c->r[0],3); // 803A7C14
  c->r[6]=rotl(c->r[0],0)&0x00000007u; // 803A7C18
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[3]); // 803A7C1C
  if (!crb(c,0)) { goto L_803A7C44; } // 803A7C20
  c->r[0]=R8(c->r[30]+c->r[4]); // 803A7C24
  c->r[4]=addc(c,~c->r[6],0x00000007u,1); // 803A7C28
  c->r[4]=((c->r[4])&0x20)?0u:(c->r[5]<<((c->r[4])&31)); // 803A7C2C
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 803A7C30
  c->r[0]=c->r[4]&c->r[0]; cr0(c,c->r[0]); // 803A7C34
  if (crb(c,2)) { goto L_803A7C44; } // 803A7C38
  c->r[0]=R32(c->r[31]+0x00000008u); // 803A7C3C
  goto L_803A7C48; // 803A7C40
L_803A7C44:;
  c->r[0]=R32(c->r[31]+0x00000004u); // 803A7C44
L_803A7C48:;
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 803A7C48
  c->r[4]=c->r[29]+c->r[0]; // 803A7C4C
  c->r[31]=c->r[4]+0x00000008u; // 803A7C50
L_803A7C54:;
  c->r[0]=R16(c->r[31]+0x00000000u); // 803A7C54
  c->r[0]=rotl(c->r[0],0)&0x00000001u; cr0(c,c->r[0]); // 803A7C58
  if (crb(c,2)) { IRQCHK(c); goto L_803A7C10; } // 803A7C5C
  c->r[3]=R32(c->r[31]+0x0000000Cu); // 803A7C60
  c->r[0]=c->r[3]+0x00010000u; // 803A7C64
  cmpu(c,0,c->r[0],0x0000FFFFu); // 803A7C68
  if (!crb(c,2)) { goto L_803A7C78; } // 803A7C6C
  c->r[4]=0u+0x00000000u; // 803A7C70
  goto L_803A7CB0; // 803A7C74
L_803A7C78:;
  c->r[5]=R32(c->r[28]+0x00000030u); // 803A7C78
  cmps(c,0,(int32_t)c->r[5],0); // 803A7C7C
  if (!crb(c,2)) { goto L_803A7C8C; } // 803A7C80
  c->r[4]=0u+0x00000000u; // 803A7C84
  goto L_803A7CB0; // 803A7C88
L_803A7C8C:;
  c->r[0]=rotl(c->r[3],2)&0xFFFFFFFCu; // 803A7C8C
  c->r[4]=R32(c->r[28]+0x0000002Cu); // 803A7C90
  c->r[3]=c->r[5]+c->r[0]; // 803A7C94
  c->r[0]=R32(c->r[3]+0x00000004u); // 803A7C98
  cmps(c,0,(int32_t)c->r[0],0); // 803A7C9C
  if (!crb(c,2)) { goto L_803A7CAC; } // 803A7CA0
  c->r[4]=0u+0x00000000u; // 803A7CA4
  goto L_803A7CB0; // 803A7CA8
L_803A7CAC:;
  c->r[4]=c->r[0]+c->r[4]; // 803A7CAC
L_803A7CB0:;
  c->r[3]=c->r[30]|c->r[30]; // 803A7CB0
  c->lr=0x803A7CB8u; f_80293554(c); // 803A7CB4
  cmps(c,0,(int32_t)c->r[3],0); // 803A7CB8
  if (!crb(c,2)) { goto L_803A7CC8; } // 803A7CBC
  c->r[3]=R32(c->r[31]+0x00000010u); // 803A7CC0
  goto L_803A7CCC; // 803A7CC4
L_803A7CC8:;
  c->r[3]=0u+0xFFFFFFFFu; // 803A7CC8
L_803A7CCC:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 803A7CCC
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 803A7CD0
  c->r[30]=R32(c->r[1]+0x00000018u); // 803A7CD4
  c->r[29]=R32(c->r[1]+0x00000014u); // 803A7CD8
  c->r[28]=R32(c->r[1]+0x00000010u); // 803A7CDC
  c->lr=c->r[0]; // 803A7CE0
  c->r[1]=c->r[1]+0x00000020u; // 803A7CE4
  return; // 803A7CE8
}

// impl_GetSoundInfoOffset__Q44nw4r3snd6detail22SoundArchiveFileReaderCFUl
void f_803A7CEC(Ctx* __restrict c) {
  trace_call(0x803A7CECu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803A7CEC
  c->r[0]=c->lr; // 803A7CF0
  c->r[5]=R32(c->r[3]+0x00000028u); // 803A7CF4
  W32(c->r[1]+0x00000024u,c->r[0]); // 803A7CF8
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 803A7CFC
  c->r[31]=c->r[4]|c->r[4]; // 803A7D00
  W32(c->r[1]+0x00000018u,c->r[30]); // 803A7D04
  c->r[30]=c->r[3]|c->r[3]; // 803A7D08
  c->r[3]=R8(c->r[5]+0x00000000u); // 803A7D0C
  c->r[4]=R32(c->r[5]+0x00000004u); // 803A7D10
  c->lr=0x803A7D18u; f_803B3154(c); // 803A7D14
  cmps(c,0,(int32_t)c->r[3],0); // 803A7D18
  if (!crb(c,2)) { goto L_803A7D2C; } // 803A7D1C
  c->r[3]=R32(c->r[13]+0xFFFFA058u); // 803A7D20
  c->r[4]=R32(c->r[13]+0xFFFFA05Cu); // 803A7D24
  goto L_803A7DC8; // 803A7D28
L_803A7D2C:;
  c->r[0]=R32(c->r[3]+0x00000000u); // 803A7D2C
  cmpu(c,0,c->r[31],c->r[0]); // 803A7D30
  if (crb(c,0)) { goto L_803A7D44; } // 803A7D34
  c->r[3]=R32(c->r[13]+0xFFFFA058u); // 803A7D38
  c->r[4]=R32(c->r[13]+0xFFFFA05Cu); // 803A7D3C
  goto L_803A7DC8; // 803A7D40
L_803A7D44:;
  c->r[0]=R16(c->r[30]+0x00000006u); // 803A7D44
  cmpu(c,0,c->r[0],0x00000101u); // 803A7D48
  if (crb(c,0)) { goto L_803A7DA0; } // 803A7D4C
  c->r[0]=rotl(c->r[31],3)&0xFFFFFFF8u; // 803A7D50
  c->r[5]=R32(c->r[30]+0x00000028u); // 803A7D54
  c->r[4]=c->r[3]+c->r[0]; // 803A7D58
  c->r[3]=R8(c->r[4]+0x00000004u); // 803A7D5C
  c->r[4]=R32(c->r[4]+0x00000008u); // 803A7D60
  c->lr=0x803A7D68u; f_803B3154(c); // 803A7D64
  cmps(c,0,(int32_t)c->r[3],0); // 803A7D68
  if (!crb(c,2)) { goto L_803A7D84; } // 803A7D6C
  c->r[3]=R32(c->r[13]+0xFFFFA058u); // 803A7D70
  c->r[0]=R32(c->r[13]+0xFFFFA05Cu); // 803A7D74
  W32(c->r[1]+0x00000010u,c->r[3]); // 803A7D78
  W32(c->r[1]+0x00000014u,c->r[0]); // 803A7D7C
  goto L_803A7D94; // 803A7D80
L_803A7D84:;
  c->r[4]=R32(c->r[3]+0x00000018u); // 803A7D84
  c->r[0]=R32(c->r[3]+0x0000001Cu); // 803A7D88
  W32(c->r[1]+0x00000010u,c->r[4]); // 803A7D8C
  W32(c->r[1]+0x00000014u,c->r[0]); // 803A7D90
L_803A7D94:;
  c->r[3]=R32(c->r[1]+0x00000010u); // 803A7D94
  c->r[4]=R32(c->r[1]+0x00000014u); // 803A7D98
  goto L_803A7DC8; // 803A7D9C
L_803A7DA0:;
  c->r[0]=rotl(c->r[31],3)&0xFFFFFFF8u; // 803A7DA0
  c->r[3]=c->r[3]+c->r[0]; // 803A7DA4
  c->r[4]=R8(c->r[3]+0x00000004u); // 803A7DA8
  c->r[0]=R8(c->r[3]+0x00000005u); // 803A7DAC
  c->r[3]=R32(c->r[3]+0x00000008u); // 803A7DB0
  W8(c->r[1]+0x00000008u,c->r[4]); // 803A7DB4
  c->r[4]=c->r[3]+0x0000001Cu; // 803A7DB8
  W8(c->r[1]+0x00000009u,c->r[0]); // 803A7DBC
  W32(c->r[1]+0x0000000Cu,c->r[4]); // 803A7DC0
  c->r[3]=R32(c->r[1]+0x00000008u); // 803A7DC4
L_803A7DC8:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 803A7DC8
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 803A7DCC
  c->r[30]=R32(c->r[1]+0x00000018u); // 803A7DD0
  c->lr=c->r[0]; // 803A7DD4
  c->r[1]=c->r[1]+0x00000020u; // 803A7DD8
  return; // 803A7DDC
}

// __ct__Q44nw4r3snd6detail18SoundArchiveLoaderFRCQ34nw4r3snd12SoundArchive
void f_803A7DE0(Ctx* __restrict c) {
  trace_call(0x803A7DE0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803A7DE0
  c->r[0]=c->lr; // 803A7DE4
  W32(c->r[1]+0x00000014u,c->r[0]); // 803A7DE8
  c->r[0]=0u+0x00000000u; // 803A7DEC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 803A7DF0
  c->r[31]=c->r[3]|c->r[3]; // 803A7DF4
  W32(c->r[3]+0x00000018u,c->r[4]); // 803A7DF8
  W32(c->r[3]+0x0000021Cu,c->r[0]); // 803A7DFC
  c->lr=0x803A7E04u; f_8025FC94(c); // 803A7E00
  c->r[3]=c->r[31]|c->r[31]; // 803A7E04
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 803A7E08
  c->r[0]=R32(c->r[1]+0x00000014u); // 803A7E0C
  c->lr=c->r[0]; // 803A7E10
  c->r[1]=c->r[1]+0x00000010u; // 803A7E14
  return; // 803A7E18
}

// fn_803A7E1C
void f_803A7E1C(Ctx* __restrict c) {
  trace_call(0x803A7E1Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803A7E1C
  c->r[0]=c->lr; // 803A7E20
  cmps(c,0,(int32_t)c->r[3],0); // 803A7E24
  W32(c->r[1]+0x00000014u,c->r[0]); // 803A7E28
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 803A7E2C
  c->r[31]=c->r[3]|c->r[3]; // 803A7E30
  if (crb(c,2)) { goto L_803A7E44; } // 803A7E34
  cmps(c,0,(int32_t)c->r[4],0); // 803A7E38
  if (!crb(c,1)) { goto L_803A7E44; } // 803A7E3C
  c->lr=0x803A7E44u; f_802896EC(c); // 803A7E40
L_803A7E44:;
  c->r[3]=c->r[31]|c->r[31]; // 803A7E44
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 803A7E48
  c->r[0]=R32(c->r[1]+0x00000014u); // 803A7E4C
  c->lr=c->r[0]; // 803A7E50
  c->r[1]=c->r[1]+0x00000010u; // 803A7E54
  return; // 803A7E58
}

// fn_803A7E5C
void f_803A7E5C(Ctx* __restrict c) {
  trace_call(0x803A7E5Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803A7E5C
  c->r[0]=c->lr; // 803A7E60
  W32(c->r[1]+0x00000054u,c->r[0]); // 803A7E64
  c->r[11]=c->r[1]+0x00000050u; // 803A7E68
  c->lr=0x803A7E70u; { W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 803A7E6C
  c->r[31]=c->r[3]|c->r[3]; // 803A7E70
  c->r[26]=c->r[4]|c->r[4]; // 803A7E74
  c->r[25]=c->r[5]|c->r[5]; // 803A7E78
  c->r[23]=c->r[6]|c->r[6]; // 803A7E7C
  c->r[24]=c->r[7]|c->r[7]; // 803A7E80
  c->lr=0x803A7E88u; f_8025FCCC(c); // 803A7E84
  c->r[3]=R32(c->r[31]+0x00000018u); // 803A7E88
  c->r[4]=c->r[26]|c->r[26]; // 803A7E8C
  c->r[5]=c->r[31]+0x0000001Cu; // 803A7E90
  c->r[6]=0u+0x00000200u; // 803A7E94
  c->lr=0x803A7E9Cu; f_803A6A38(c); // 803A7E98
  cmps(c,0,(int32_t)c->r[3],0); // 803A7E9C
  c->r[29]=c->r[3]|c->r[3]; // 803A7EA0
  if (!crb(c,2)) { goto L_803A7ECC; } // 803A7EA4
  if (crb(c,2)) { goto L_803A7EBC; } // 803A7EA8
  c->r[12]=R32(c->r[3]+0x00000000u); // 803A7EAC
  c->r[12]=R32(c->r[12]+0x00000010u); // 803A7EB0
  c->ctr=c->r[12]; // 803A7EB4
  if (true) { c->lr=0x803A7EBCu; dispatch(c,c->ctr); } // 803A7EB8
L_803A7EBC:;
  c->r[3]=c->r[31]|c->r[31]; // 803A7EBC
  c->lr=0x803A7EC4u; f_8025FDA8(c); // 803A7EC0
  c->r[3]=0u+0x00000000u; // 803A7EC4
  goto L_803A8418; // 803A7EC8
L_803A7ECC:;
  c->r[12]=R32(c->r[3]+0x00000000u); // 803A7ECC
  c->r[12]=R32(c->r[12]+0x00000050u); // 803A7ED0
  c->ctr=c->r[12]; // 803A7ED4
  if (true) { c->lr=0x803A7EDCu; dispatch(c,c->ctr); } // 803A7ED8
  cmps(c,0,(int32_t)c->r[3],0); // 803A7EDC
  if (crb(c,2)) { goto L_803A7F00; } // 803A7EE0
  c->r[12]=R32(c->r[29]+0x00000000u); // 803A7EE4
  c->r[3]=c->r[29]|c->r[29]; // 803A7EE8
  c->r[12]=R32(c->r[12]+0x0000002Cu); // 803A7EEC
  c->ctr=c->r[12]; // 803A7EF0
  if (true) { c->lr=0x803A7EF8u; dispatch(c,c->ctr); } // 803A7EF4
  cmps(c,0,(int32_t)c->r[3],0); // 803A7EF8
  if (!crb(c,2)) { goto L_803A7F2C; } // 803A7EFC
L_803A7F00:;
  cmps(c,0,(int32_t)c->r[29],0); // 803A7F00
  if (crb(c,2)) { goto L_803A7F1C; } // 803A7F04
  c->r[12]=R32(c->r[29]+0x00000000u); // 803A7F08
  c->r[3]=c->r[29]|c->r[29]; // 803A7F0C
  c->r[12]=R32(c->r[12]+0x00000010u); // 803A7F10
  c->ctr=c->r[12]; // 803A7F14
  if (true) { c->lr=0x803A7F1Cu; dispatch(c,c->ctr); } // 803A7F18
L_803A7F1C:;
  c->r[3]=c->r[31]|c->r[31]; // 803A7F1C
  c->lr=0x803A7F24u; f_8025FDA8(c); // 803A7F20
  c->r[3]=0u+0x00000000u; // 803A7F24
  goto L_803A8418; // 803A7F28
L_803A7F2C:;
  c->r[12]=R32(c->r[29]+0x00000000u); // 803A7F2C
  c->r[3]=c->r[29]|c->r[29]; // 803A7F30
  c->r[12]=R32(c->r[12]+0x00000040u); // 803A7F34
  c->ctr=c->r[12]; // 803A7F38
  if (true) { c->lr=0x803A7F40u; dispatch(c,c->ctr); } // 803A7F3C
  c->r[12]=R32(c->r[25]+0x00000000u); // 803A7F40
  c->r[4]=c->r[3]|c->r[3]; // 803A7F44
  c->r[3]=c->r[25]|c->r[25]; // 803A7F48
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 803A7F4C
  c->ctr=c->r[12]; // 803A7F50
  if (true) { c->lr=0x803A7F58u; dispatch(c,c->ctr); } // 803A7F54
  cmps(c,0,(int32_t)c->r[3],0); // 803A7F58
  c->r[27]=c->r[3]|c->r[3]; // 803A7F5C
  if (!crb(c,2)) { goto L_803A7F90; } // 803A7F60
  cmps(c,0,(int32_t)c->r[29],0); // 803A7F64
  if (crb(c,2)) { goto L_803A7F80; } // 803A7F68
  c->r[12]=R32(c->r[29]+0x00000000u); // 803A7F6C
  c->r[3]=c->r[29]|c->r[29]; // 803A7F70
  c->r[12]=R32(c->r[12]+0x00000010u); // 803A7F74
  c->ctr=c->r[12]; // 803A7F78
  if (true) { c->lr=0x803A7F80u; dispatch(c,c->ctr); } // 803A7F7C
L_803A7F80:;
  c->r[3]=c->r[31]|c->r[31]; // 803A7F80
  c->lr=0x803A7F88u; f_8025FDA8(c); // 803A7F84
  c->r[3]=0u+0x00000000u; // 803A7F88
  goto L_803A8418; // 803A7F8C
L_803A7F90:;
  cmps(c,0,(int32_t)c->r[24],0); // 803A7F90
  W32(c->r[31]+0x0000021Cu,c->r[29]); // 803A7F94
  if (!crb(c,2)) { goto L_803A8008; } // 803A7F98
  c->r[12]=R32(c->r[29]+0x00000000u); // 803A7F9C
  c->r[3]=c->r[29]|c->r[29]; // 803A7FA0
  c->r[12]=R32(c->r[12]+0x00000040u); // 803A7FA4
  c->ctr=c->r[12]; // 803A7FA8
  if (true) { c->lr=0x803A7FB0u; dispatch(c,c->ctr); } // 803A7FAC
  c->r[12]=R32(c->r[29]+0x00000000u); // 803A7FB0
  c->r[5]=c->r[3]|c->r[3]; // 803A7FB4
  c->r[3]=c->r[29]|c->r[29]; // 803A7FB8
  c->r[4]=c->r[27]|c->r[27]; // 803A7FBC
  c->r[12]=R32(c->r[12]+0x00000014u); // 803A7FC0
  c->ctr=c->r[12]; // 803A7FC4
  if (true) { c->lr=0x803A7FCCu; dispatch(c,c->ctr); } // 803A7FC8
  cmps(c,0,(int32_t)c->r[3],0); // 803A7FCC
  if (!crb(c,0)) { goto L_803A80AC; } // 803A7FD0
  c->r[0]=0u+0x00000000u; // 803A7FD4
  cmps(c,0,(int32_t)c->r[29],0); // 803A7FD8
  W32(c->r[31]+0x0000021Cu,c->r[0]); // 803A7FDC
  if (crb(c,2)) { goto L_803A7FF8; } // 803A7FE0
  c->r[12]=R32(c->r[29]+0x00000000u); // 803A7FE4
  c->r[3]=c->r[29]|c->r[29]; // 803A7FE8
  c->r[12]=R32(c->r[12]+0x00000010u); // 803A7FEC
  c->ctr=c->r[12]; // 803A7FF0
  if (true) { c->lr=0x803A7FF8u; dispatch(c,c->ctr); } // 803A7FF4
L_803A7FF8:;
  c->r[3]=c->r[31]|c->r[31]; // 803A7FF8
  c->lr=0x803A8000u; f_8025FDA8(c); // 803A7FFC
  c->r[3]=0u+0x00000000u; // 803A8000
  goto L_803A8418; // 803A8004
L_803A8008:;
  c->r[12]=R32(c->r[29]+0x00000000u); // 803A8008
  c->r[3]=c->r[29]|c->r[29]; // 803A800C
  c->r[28]=c->r[27]|c->r[27]; // 803A8010
  c->r[12]=R32(c->r[12]+0x00000040u); // 803A8014
  c->ctr=c->r[12]; // 803A8018
  if (true) { c->lr=0x803A8020u; dispatch(c,c->ctr); } // 803A801C
  c->r[30]=c->r[3]|c->r[3]; // 803A8020
  goto L_803A80A4; // 803A8024
L_803A8028:;
  cmpu(c,0,c->r[24],c->r[30]); // 803A8028
  c->r[3]=c->r[29]|c->r[29]; // 803A802C
  c->r[4]=c->r[28]|c->r[28]; // 803A8030
  c->r[5]=c->r[24]|c->r[24]; // 803A8034
  if (!crb(c,1)) { goto L_803A8040; } // 803A8038
  c->r[5]=c->r[30]|c->r[30]; // 803A803C
L_803A8040:;
  c->r[12]=R32(c->r[3]+0x00000000u); // 803A8040
  c->r[12]=R32(c->r[12]+0x00000014u); // 803A8044
  c->ctr=c->r[12]; // 803A8048
  if (true) { c->lr=0x803A8050u; dispatch(c,c->ctr); } // 803A804C
  cmps(c,0,(int32_t)c->r[3],0); // 803A8050
  if (!crb(c,0)) { goto L_803A808C; } // 803A8054
  c->r[0]=0u+0x00000000u; // 803A8058
  cmps(c,0,(int32_t)c->r[29],0); // 803A805C
  W32(c->r[31]+0x0000021Cu,c->r[0]); // 803A8060
  if (crb(c,2)) { goto L_803A807C; } // 803A8064
  c->r[12]=R32(c->r[29]+0x00000000u); // 803A8068
  c->r[3]=c->r[29]|c->r[29]; // 803A806C
  c->r[12]=R32(c->r[12]+0x00000010u); // 803A8070
  c->ctr=c->r[12]; // 803A8074
  if (true) { c->lr=0x803A807Cu; dispatch(c,c->ctr); } // 803A8078
L_803A807C:;
  c->r[3]=c->r[31]|c->r[31]; // 803A807C
  c->lr=0x803A8084u; f_8025FDA8(c); // 803A8080
  c->r[3]=0u+0x00000000u; // 803A8084
  goto L_803A8418; // 803A8088
L_803A808C:;
  cmpu(c,0,c->r[30],c->r[3]); // 803A808C
  if (!crb(c,1)) { goto L_803A80A0; } // 803A8090
  c->r[30]=c->r[30]-c->r[3]; // 803A8094
  c->r[28]=c->r[28]+c->r[3]; // 803A8098
  goto L_803A80A4; // 803A809C
L_803A80A0:;
  c->r[30]=0u+0x00000000u; // 803A80A0
L_803A80A4:;
  cmps(c,0,(int32_t)c->r[30],0); // 803A80A4
  if (!crb(c,2)) { IRQCHK(c); goto L_803A8028; } // 803A80A8
L_803A80AC:;
  c->r[30]=0u+0x00000000u; // 803A80AC
  c->r[3]=R32(c->r[31]+0x00000018u); // 803A80B0
  W32(c->r[31]+0x0000021Cu,c->r[30]); // 803A80B4
  c->r[4]=c->r[26]|c->r[26]; // 803A80B8
  c->r[5]=c->r[1]+0x00000008u; // 803A80BC
  c->lr=0x803A80C4u; f_803A67F4(c); // 803A80C0
  cmps(c,0,(int32_t)c->r[3],0); // 803A80C4
  if (!crb(c,2)) { goto L_803A80F8; } // 803A80C8
  cmps(c,0,(int32_t)c->r[29],0); // 803A80CC
  if (crb(c,2)) { goto L_803A80E8; } // 803A80D0
  c->r[12]=R32(c->r[29]+0x00000000u); // 803A80D4
  c->r[3]=c->r[29]|c->r[29]; // 803A80D8
  c->r[12]=R32(c->r[12]+0x00000010u); // 803A80DC
  c->ctr=c->r[12]; // 803A80E0
  if (true) { c->lr=0x803A80E8u; dispatch(c,c->ctr); } // 803A80E4
L_803A80E8:;
  c->r[3]=c->r[31]|c->r[31]; // 803A80E8
  c->lr=0x803A80F0u; f_8025FDA8(c); // 803A80EC
  c->r[3]=0u+0x00000000u; // 803A80F0
  goto L_803A8418; // 803A80F4
L_803A80F8:;
  c->r[0]=R32(c->r[1]+0x0000001Cu); // 803A80F8
  cmps(c,0,(int32_t)c->r[0],0); // 803A80FC
  if (crb(c,2)) { goto L_803A83E4; } // 803A8100
  c->r[3]=R32(c->r[31]+0x00000018u); // 803A8104
  c->r[4]=c->r[26]|c->r[26]; // 803A8108
  c->r[5]=c->r[31]+0x0000001Cu; // 803A810C
  c->r[6]=0u+0x00000200u; // 803A8110
  c->lr=0x803A8118u; f_803A6B50(c); // 803A8114
  cmps(c,0,(int32_t)c->r[3],0); // 803A8118
  c->r[28]=c->r[3]|c->r[3]; // 803A811C
  if (!crb(c,2)) { goto L_803A8164; } // 803A8120
  if (crb(c,2)) { goto L_803A8138; } // 803A8124
  c->r[12]=R32(c->r[3]+0x00000000u); // 803A8128
  c->r[12]=R32(c->r[12]+0x00000010u); // 803A812C
  c->ctr=c->r[12]; // 803A8130
  if (true) { c->lr=0x803A8138u; dispatch(c,c->ctr); } // 803A8134
L_803A8138:;
  cmps(c,0,(int32_t)c->r[29],0); // 803A8138
  if (crb(c,2)) { goto L_803A8154; } // 803A813C
  c->r[12]=R32(c->r[29]+0x00000000u); // 803A8140
  c->r[3]=c->r[29]|c->r[29]; // 803A8144
  c->r[12]=R32(c->r[12]+0x00000010u); // 803A8148
  c->ctr=c->r[12]; // 803A814C
  if (true) { c->lr=0x803A8154u; dispatch(c,c->ctr); } // 803A8150
L_803A8154:;
  c->r[3]=c->r[31]|c->r[31]; // 803A8154
  c->lr=0x803A815Cu; f_8025FDA8(c); // 803A8158
  c->r[3]=0u+0x00000000u; // 803A815C
  goto L_803A8418; // 803A8160
L_803A8164:;
  c->r[12]=R32(c->r[3]+0x00000000u); // 803A8164
  c->r[12]=R32(c->r[12]+0x00000050u); // 803A8168
  c->ctr=c->r[12]; // 803A816C
  if (true) { c->lr=0x803A8174u; dispatch(c,c->ctr); } // 803A8170
  cmps(c,0,(int32_t)c->r[3],0); // 803A8174
  if (crb(c,2)) { goto L_803A8198; } // 803A8178
  c->r[12]=R32(c->r[28]+0x00000000u); // 803A817C
  c->r[3]=c->r[28]|c->r[28]; // 803A8180
  c->r[12]=R32(c->r[12]+0x0000002Cu); // 803A8184
  c->ctr=c->r[12]; // 803A8188
  if (true) { c->lr=0x803A8190u; dispatch(c,c->ctr); } // 803A818C
  cmps(c,0,(int32_t)c->r[3],0); // 803A8190
  if (!crb(c,2)) { goto L_803A81E0; } // 803A8194
L_803A8198:;
  cmps(c,0,(int32_t)c->r[28],0); // 803A8198
  if (crb(c,2)) { goto L_803A81B4; } // 803A819C
  c->r[12]=R32(c->r[28]+0x00000000u); // 803A81A0
  c->r[3]=c->r[28]|c->r[28]; // 803A81A4
  c->r[12]=R32(c->r[12]+0x00000010u); // 803A81A8
  c->ctr=c->r[12]; // 803A81AC
  if (true) { c->lr=0x803A81B4u; dispatch(c,c->ctr); } // 803A81B0
L_803A81B4:;
  cmps(c,0,(int32_t)c->r[29],0); // 803A81B4
  if (crb(c,2)) { goto L_803A81D0; } // 803A81B8
  c->r[12]=R32(c->r[29]+0x00000000u); // 803A81BC
  c->r[3]=c->r[29]|c->r[29]; // 803A81C0
  c->r[12]=R32(c->r[12]+0x00000010u); // 803A81C4
  c->ctr=c->r[12]; // 803A81C8
  if (true) { c->lr=0x803A81D0u; dispatch(c,c->ctr); } // 803A81CC
L_803A81D0:;
  c->r[3]=c->r[31]|c->r[31]; // 803A81D0
  c->lr=0x803A81D8u; f_8025FDA8(c); // 803A81D4
  c->r[3]=0u+0x00000000u; // 803A81D8
  goto L_803A8418; // 803A81DC
L_803A81E0:;
  c->r[12]=R32(c->r[28]+0x00000000u); // 803A81E0
  c->r[3]=c->r[28]|c->r[28]; // 803A81E4
  c->r[12]=R32(c->r[12]+0x00000040u); // 803A81E8
  c->ctr=c->r[12]; // 803A81EC
  if (true) { c->lr=0x803A81F4u; dispatch(c,c->ctr); } // 803A81F0
  c->r[12]=R32(c->r[25]+0x00000000u); // 803A81F4
  c->r[4]=c->r[3]|c->r[3]; // 803A81F8
  c->r[3]=c->r[25]|c->r[25]; // 803A81FC
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 803A8200
  c->ctr=c->r[12]; // 803A8204
  if (true) { c->lr=0x803A820Cu; dispatch(c,c->ctr); } // 803A8208
  cmps(c,0,(int32_t)c->r[3],0); // 803A820C
  c->r[26]=c->r[3]|c->r[3]; // 803A8210
  if (!crb(c,2)) { goto L_803A8260; } // 803A8214
  cmps(c,0,(int32_t)c->r[28],0); // 803A8218
  if (crb(c,2)) { goto L_803A8234; } // 803A821C
  c->r[12]=R32(c->r[28]+0x00000000u); // 803A8220
  c->r[3]=c->r[28]|c->r[28]; // 803A8224
  c->r[12]=R32(c->r[12]+0x00000010u); // 803A8228
  c->ctr=c->r[12]; // 803A822C
  if (true) { c->lr=0x803A8234u; dispatch(c,c->ctr); } // 803A8230
L_803A8234:;
  cmps(c,0,(int32_t)c->r[29],0); // 803A8234
  if (crb(c,2)) { goto L_803A8250; } // 803A8238
  c->r[12]=R32(c->r[29]+0x00000000u); // 803A823C
  c->r[3]=c->r[29]|c->r[29]; // 803A8240
  c->r[12]=R32(c->r[12]+0x00000010u); // 803A8244
  c->ctr=c->r[12]; // 803A8248
  if (true) { c->lr=0x803A8250u; dispatch(c,c->ctr); } // 803A824C
L_803A8250:;
  c->r[3]=c->r[31]|c->r[31]; // 803A8250
  c->lr=0x803A8258u; f_8025FDA8(c); // 803A8254
  c->r[3]=0u+0x00000000u; // 803A8258
  goto L_803A8418; // 803A825C
L_803A8260:;
  cmps(c,0,(int32_t)c->r[24],0); // 803A8260
  W32(c->r[31]+0x0000021Cu,c->r[28]); // 803A8264
  if (!crb(c,2)) { goto L_803A82F0; } // 803A8268
  c->r[12]=R32(c->r[28]+0x00000000u); // 803A826C
  c->r[3]=c->r[28]|c->r[28]; // 803A8270
  c->r[12]=R32(c->r[12]+0x00000040u); // 803A8274
  c->ctr=c->r[12]; // 803A8278
  if (true) { c->lr=0x803A8280u; dispatch(c,c->ctr); } // 803A827C
  c->r[12]=R32(c->r[28]+0x00000000u); // 803A8280
  c->r[5]=c->r[3]|c->r[3]; // 803A8284
  c->r[3]=c->r[28]|c->r[28]; // 803A8288
  c->r[4]=c->r[26]|c->r[26]; // 803A828C
  c->r[12]=R32(c->r[12]+0x00000014u); // 803A8290
  c->ctr=c->r[12]; // 803A8294
  if (true) { c->lr=0x803A829Cu; dispatch(c,c->ctr); } // 803A8298
  cmps(c,0,(int32_t)c->r[3],0); // 803A829C
  if (!crb(c,0)) { goto L_803A83B0; } // 803A82A0
  cmps(c,0,(int32_t)c->r[28],0); // 803A82A4
  W32(c->r[31]+0x0000021Cu,c->r[30]); // 803A82A8
  if (crb(c,2)) { goto L_803A82C4; } // 803A82AC
  c->r[12]=R32(c->r[28]+0x00000000u); // 803A82B0
  c->r[3]=c->r[28]|c->r[28]; // 803A82B4
  c->r[12]=R32(c->r[12]+0x00000010u); // 803A82B8
  c->ctr=c->r[12]; // 803A82BC
  if (true) { c->lr=0x803A82C4u; dispatch(c,c->ctr); } // 803A82C0
L_803A82C4:;
  cmps(c,0,(int32_t)c->r[29],0); // 803A82C4
  if (crb(c,2)) { goto L_803A82E0; } // 803A82C8
  c->r[12]=R32(c->r[29]+0x00000000u); // 803A82CC
  c->r[3]=c->r[29]|c->r[29]; // 803A82D0
  c->r[12]=R32(c->r[12]+0x00000010u); // 803A82D4
  c->ctr=c->r[12]; // 803A82D8
  if (true) { c->lr=0x803A82E0u; dispatch(c,c->ctr); } // 803A82DC
L_803A82E0:;
  c->r[3]=c->r[31]|c->r[31]; // 803A82E0
  c->lr=0x803A82E8u; f_8025FDA8(c); // 803A82E4
  c->r[3]=0u+0x00000000u; // 803A82E8
  goto L_803A8418; // 803A82EC
L_803A82F0:;
  c->r[12]=R32(c->r[28]+0x00000000u); // 803A82F0
  c->r[3]=c->r[28]|c->r[28]; // 803A82F4
  c->r[30]=c->r[26]|c->r[26]; // 803A82F8
  c->r[12]=R32(c->r[12]+0x00000040u); // 803A82FC
  c->ctr=c->r[12]; // 803A8300
  if (true) { c->lr=0x803A8308u; dispatch(c,c->ctr); } // 803A8304
  c->r[25]=c->r[3]|c->r[3]; // 803A8308
  goto L_803A83A8; // 803A830C
L_803A8310:;
  cmpu(c,0,c->r[24],c->r[25]); // 803A8310
  c->r[3]=c->r[28]|c->r[28]; // 803A8314
  c->r[4]=c->r[30]|c->r[30]; // 803A8318
  c->r[5]=c->r[24]|c->r[24]; // 803A831C
  if (!crb(c,1)) { goto L_803A8328; } // 803A8320
  c->r[5]=c->r[25]|c->r[25]; // 803A8324
L_803A8328:;
  c->r[12]=R32(c->r[3]+0x00000000u); // 803A8328
  c->r[12]=R32(c->r[12]+0x00000014u); // 803A832C
  c->ctr=c->r[12]; // 803A8330
  if (true) { c->lr=0x803A8338u; dispatch(c,c->ctr); } // 803A8334
  cmps(c,0,(int32_t)c->r[3],0); // 803A8338
  if (!crb(c,0)) { goto L_803A8390; } // 803A833C
  c->r[0]=0u+0x00000000u; // 803A8340
  cmps(c,0,(int32_t)c->r[28],0); // 803A8344
  W32(c->r[31]+0x0000021Cu,c->r[0]); // 803A8348
  if (crb(c,2)) { goto L_803A8364; } // 803A834C
  c->r[12]=R32(c->r[28]+0x00000000u); // 803A8350
  c->r[3]=c->r[28]|c->r[28]; // 803A8354
  c->r[12]=R32(c->r[12]+0x00000010u); // 803A8358
  c->ctr=c->r[12]; // 803A835C
  if (true) { c->lr=0x803A8364u; dispatch(c,c->ctr); } // 803A8360
L_803A8364:;
  cmps(c,0,(int32_t)c->r[29],0); // 803A8364
  if (crb(c,2)) { goto L_803A8380; } // 803A8368
  c->r[12]=R32(c->r[29]+0x00000000u); // 803A836C
  c->r[3]=c->r[29]|c->r[29]; // 803A8370
  c->r[12]=R32(c->r[12]+0x00000010u); // 803A8374
  c->ctr=c->r[12]; // 803A8378
  if (true) { c->lr=0x803A8380u; dispatch(c,c->ctr); } // 803A837C
L_803A8380:;
  c->r[3]=c->r[31]|c->r[31]; // 803A8380
  c->lr=0x803A8388u; f_8025FDA8(c); // 803A8384
  c->r[3]=0u+0x00000000u; // 803A8388
  goto L_803A8418; // 803A838C
L_803A8390:;
  cmpu(c,0,c->r[25],c->r[3]); // 803A8390
  if (!crb(c,1)) { goto L_803A83A4; } // 803A8394
  c->r[25]=c->r[25]-c->r[3]; // 803A8398
  c->r[30]=c->r[30]+c->r[3]; // 803A839C
  goto L_803A83A8; // 803A83A0
L_803A83A4:;
  c->r[25]=0u+0x00000000u; // 803A83A4
L_803A83A8:;
  cmps(c,0,(int32_t)c->r[25],0); // 803A83A8
  if (!crb(c,2)) { IRQCHK(c); goto L_803A8310; } // 803A83AC
L_803A83B0:;
  c->r[0]=0u+0x00000000u; // 803A83B0
  cmps(c,0,(int32_t)c->r[23],0); // 803A83B4
  W32(c->r[31]+0x0000021Cu,c->r[0]); // 803A83B8
  if (crb(c,2)) { goto L_803A83C4; } // 803A83BC
  W32(c->r[23]+0x00000000u,c->r[26]); // 803A83C0
L_803A83C4:;
  cmps(c,0,(int32_t)c->r[28],0); // 803A83C4
  if (crb(c,2)) { goto L_803A83F0; } // 803A83C8
  c->r[12]=R32(c->r[28]+0x00000000u); // 803A83CC
  c->r[3]=c->r[28]|c->r[28]; // 803A83D0
  c->r[12]=R32(c->r[12]+0x00000010u); // 803A83D4
  c->ctr=c->r[12]; // 803A83D8
  if (true) { c->lr=0x803A83E0u; dispatch(c,c->ctr); } // 803A83DC
  goto L_803A83F0; // 803A83E0
L_803A83E4:;
  cmps(c,0,(int32_t)c->r[23],0); // 803A83E4
  if (crb(c,2)) { goto L_803A83F0; } // 803A83E8
  W32(c->r[23]+0x00000000u,c->r[30]); // 803A83EC
L_803A83F0:;
  cmps(c,0,(int32_t)c->r[29],0); // 803A83F0
  if (crb(c,2)) { goto L_803A840C; } // 803A83F4
  c->r[12]=R32(c->r[29]+0x00000000u); // 803A83F8
  c->r[3]=c->r[29]|c->r[29]; // 803A83FC
  c->r[12]=R32(c->r[12]+0x00000010u); // 803A8400
  c->ctr=c->r[12]; // 803A8404
  if (true) { c->lr=0x803A840Cu; dispatch(c,c->ctr); } // 803A8408
L_803A840C:;
  c->r[3]=c->r[31]|c->r[31]; // 803A840C
  c->lr=0x803A8414u; f_8025FDA8(c); // 803A8410
  c->r[3]=c->r[27]|c->r[27]; // 803A8414
L_803A8418:;
  c->r[11]=c->r[1]+0x00000050u; // 803A8418
  c->lr=0x803A8420u; { c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 803A841C
  c->r[0]=R32(c->r[1]+0x00000054u); // 803A8420
  c->lr=c->r[0]; // 803A8424
  c->r[1]=c->r[1]+0x00000050u; // 803A8428
  return; // 803A842C
}

// __ct__Q34nw4r3snd18SoundArchivePlayerFv
void f_803A8430(Ctx* __restrict c) {
  trace_call(0x803A8430u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803A8430
  c->r[0]=c->lr; // 803A8434
  c->r[6]=0u+0x80430000u; // 803A8438
  c->r[5]=0u+0x80430000u; // 803A843C
  W32(c->r[1]+0x00000014u,c->r[0]); // 803A8440
  c->r[6]=c->r[6]+0x000074F0u; // 803A8444
  c->r[4]=0u+0x80430000u; // 803A8448
  c->r[7]=c->r[3]+0x00000040u; // 803A844C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 803A8450
  c->r[31]=0u+0x00000000u; // 803A8454
  c->r[0]=c->r[6]+0x00000014u; // 803A8458
  c->r[5]=c->r[5]+0x00007530u; // 803A845C
  W32(c->r[1]+0x00000008u,c->r[30]); // 803A8460
  c->r[4]=c->r[4]+0x00007520u; // 803A8464
  c->r[30]=c->r[3]|c->r[3]; // 803A8468
  W32(c->r[3]+0x00000040u,c->r[31]); // 803A846C
  W32(c->r[3]+0x00000044u,c->r[31]); // 803A8470
  W32(c->r[3]+0x00000000u,c->r[31]); // 803A8474
  W32(c->r[3]+0x00000004u,c->r[31]); // 803A8478
  W32(c->r[3]+0x00000008u,c->r[6]); // 803A847C
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 803A8480
  W32(c->r[3]+0x00000010u,c->r[31]); // 803A8484
  W32(c->r[3]+0x00000014u,c->r[31]); // 803A8488
  W32(c->r[3]+0x00000018u,c->r[31]); // 803A848C
  W32(c->r[3]+0x00000020u,c->r[5]); // 803A8490
  W32(c->r[3]+0x00000024u,c->r[3]); // 803A8494
  W32(c->r[3]+0x00000028u,c->r[4]); // 803A8498
  W32(c->r[3]+0x0000002Cu,c->r[3]); // 803A849C
  W32(c->r[3]+0x00000030u,c->r[31]); // 803A84A0
  W32(c->r[3]+0x00000034u,c->r[31]); // 803A84A4
  W32(c->r[3]+0x00000038u,c->r[31]); // 803A84A8
  W32(c->r[3]+0x0000003Cu,c->r[31]); // 803A84AC
  W32(c->r[3]+0x00000040u,c->r[7]); // 803A84B0
  W32(c->r[3]+0x00000044u,c->r[7]); // 803A84B4
  c->r[3]=c->r[3]+0x00000048u; // 803A84B8
  c->lr=0x803A84C0u; f_8025FC94(c); // 803A84BC
  W32(c->r[30]+0x00000068u,c->r[31]); // 803A84C0
  c->r[4]=c->r[30]+0x00000068u; // 803A84C4
  c->r[3]=c->r[30]+0x00000070u; // 803A84C8
  W32(c->r[30]+0x0000006Cu,c->r[31]); // 803A84CC
  W32(c->r[30]+0x00000060u,c->r[31]); // 803A84D0
  W32(c->r[30]+0x00000064u,c->r[31]); // 803A84D4
  W32(c->r[30]+0x00000068u,c->r[4]); // 803A84D8
  W32(c->r[30]+0x0000006Cu,c->r[4]); // 803A84DC
  c->lr=0x803A84E4u; f_8025FC94(c); // 803A84E0
  W32(c->r[30]+0x00000090u,c->r[31]); // 803A84E4
  c->r[4]=c->r[30]+0x00000090u; // 803A84E8
  c->r[3]=c->r[30]+0x00000098u; // 803A84EC
  W32(c->r[30]+0x00000094u,c->r[31]); // 803A84F0
  W32(c->r[30]+0x00000088u,c->r[31]); // 803A84F4
  W32(c->r[30]+0x0000008Cu,c->r[31]); // 803A84F8
  W32(c->r[30]+0x00000090u,c->r[4]); // 803A84FC
  W32(c->r[30]+0x00000094u,c->r[4]); // 803A8500
  c->lr=0x803A8508u; f_8025FC94(c); // 803A8504
  c->r[4]=0u+0x80430000u; // 803A8508
  c->r[3]=0u+0x80430000u; // 803A850C
  c->r[4]=c->r[4]+0x00007350u; // 803A8510
  c->r[0]=c->r[30]+0x000000D4u; // 803A8514
  c->r[3]=c->r[3]+0x00007330u; // 803A8518
  W32(c->r[30]+0x000000B0u,c->r[4]); // 803A851C
  W32(c->r[30]+0x000000B4u,c->r[0]); // 803A8520
  W32(c->r[30]+0x000000B8u,c->r[31]); // 803A8524
  W32(c->r[30]+0x000000D4u,c->r[3]); // 803A8528
  W32(c->r[30]+0x000000D8u,c->r[31]); // 803A852C
  W32(c->r[30]+0x000000DCu,c->r[31]); // 803A8530
  c->lr=0x803A8538u; f_8039DC24(c); // 803A8534
  c->r[4]=c->r[30]|c->r[30]; // 803A8538
  c->lr=0x803A8540u; f_8039DD08(c); // 803A853C
  c->r[3]=c->r[30]|c->r[30]; // 803A8540
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 803A8544
  c->r[30]=R32(c->r[1]+0x00000008u); // 803A8548
  c->r[0]=R32(c->r[1]+0x00000014u); // 803A854C
  c->lr=c->r[0]; // 803A8550
  c->r[1]=c->r[1]+0x00000010u; // 803A8554
  return; // 803A8558
}

// fn_803A855C
void f_803A855C(Ctx* __restrict c) {
  trace_call(0x803A855Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803A855C
  c->r[0]=c->lr; // 803A8560
  cmps(c,0,(int32_t)c->r[3],0); // 803A8564
  W32(c->r[1]+0x00000014u,c->r[0]); // 803A8568
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 803A856C
  c->r[31]=c->r[3]|c->r[3]; // 803A8570
  if (crb(c,2)) { goto L_803A8584; } // 803A8574
  cmps(c,0,(int32_t)c->r[4],0); // 803A8578
  if (!crb(c,1)) { goto L_803A8584; } // 803A857C
  c->lr=0x803A8584u; f_802896EC(c); // 803A8580
L_803A8584:;
  c->r[3]=c->r[31]|c->r[31]; // 803A8584
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 803A8588
  c->r[0]=R32(c->r[1]+0x00000014u); // 803A858C
  c->lr=c->r[0]; // 803A8590
  c->r[1]=c->r[1]+0x00000010u; // 803A8594
  return; // 803A8598
}

// fn_803A859C
void f_803A859C(Ctx* __restrict c) {
  trace_call(0x803A859Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803A859C
  c->r[0]=c->lr; // 803A85A0
  cmps(c,0,(int32_t)c->r[3],0); // 803A85A4
  W32(c->r[1]+0x00000014u,c->r[0]); // 803A85A8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 803A85AC
  c->r[31]=c->r[3]|c->r[3]; // 803A85B0
  if (crb(c,2)) { goto L_803A85C4; } // 803A85B4
  cmps(c,0,(int32_t)c->r[4],0); // 803A85B8
  if (!crb(c,1)) { goto L_803A85C4; } // 803A85BC
  c->lr=0x803A85C4u; f_802896EC(c); // 803A85C0
L_803A85C4:;
  c->r[3]=c->r[31]|c->r[31]; // 803A85C4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 803A85C8
  c->r[0]=R32(c->r[1]+0x00000014u); // 803A85CC
  c->lr=c->r[0]; // 803A85D0
  c->r[1]=c->r[1]+0x00000010u; // 803A85D4
  return; // 803A85D8
}

// fn_803A85DC
void f_803A85DC(Ctx* __restrict c) {
  trace_call(0x803A85DCu);
  c->r[0]=0u+0x00000000u; // 803A85DC
  c->r[4]=c->r[3]+0x00000004u; // 803A85E0
  W32(c->r[3]+0x00000004u,c->r[0]); // 803A85E4
  W32(c->r[3]+0x00000008u,c->r[0]); // 803A85E8
  W32(c->r[3]+0x00000000u,c->r[0]); // 803A85EC
  W32(c->r[3]+0x00000004u,c->r[4]); // 803A85F0
  W32(c->r[3]+0x00000008u,c->r[4]); // 803A85F4
  return; // 803A85F8
}

// fn_803A85FC
void f_803A85FC(Ctx* __restrict c) {
  trace_call(0x803A85FCu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803A85FC
  c->r[0]=c->lr; // 803A8600
  cmps(c,0,(int32_t)c->r[3],0); // 803A8604
  W32(c->r[1]+0x00000014u,c->r[0]); // 803A8608
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 803A860C
  c->r[31]=c->r[4]|c->r[4]; // 803A8610
  W32(c->r[1]+0x00000008u,c->r[30]); // 803A8614
  c->r[30]=c->r[3]|c->r[3]; // 803A8618
  if (crb(c,2)) { goto L_803A8638; } // 803A861C
  c->r[4]=0u+0x00000000u; // 803A8620
  c->lr=0x803A8628u; f_803B4FA4(c); // 803A8624
  cmps(c,0,(int32_t)c->r[31],0); // 803A8628
  if (!crb(c,1)) { goto L_803A8638; } // 803A862C
  c->r[3]=c->r[30]|c->r[30]; // 803A8630
  c->lr=0x803A8638u; f_802896EC(c); // 803A8634
L_803A8638:;
  c->r[3]=c->r[30]|c->r[30]; // 803A8638
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 803A863C
  c->r[30]=R32(c->r[1]+0x00000008u); // 803A8640
  c->r[0]=R32(c->r[1]+0x00000014u); // 803A8644
  c->lr=c->r[0]; // 803A8648
  c->r[1]=c->r[1]+0x00000010u; // 803A864C
  return; // 803A8650
}

// fn_803A8654
void f_803A8654(Ctx* __restrict c) {
  trace_call(0x803A8654u);
  c->r[0]=0u+0x00000000u; // 803A8654
  c->r[4]=c->r[3]+0x00000004u; // 803A8658
  W32(c->r[3]+0x00000004u,c->r[0]); // 803A865C
  W32(c->r[3]+0x00000008u,c->r[0]); // 803A8660
  W32(c->r[3]+0x00000000u,c->r[0]); // 803A8664
  W32(c->r[3]+0x00000004u,c->r[4]); // 803A8668
  W32(c->r[3]+0x00000008u,c->r[4]); // 803A866C
  return; // 803A8670
}

// fn_803A8674
void f_803A8674(Ctx* __restrict c) {
  trace_call(0x803A8674u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803A8674
  c->r[0]=c->lr; // 803A8678
  cmps(c,0,(int32_t)c->r[3],0); // 803A867C
  W32(c->r[1]+0x00000014u,c->r[0]); // 803A8680
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 803A8684
  c->r[31]=c->r[4]|c->r[4]; // 803A8688
  W32(c->r[1]+0x00000008u,c->r[30]); // 803A868C
  c->r[30]=c->r[3]|c->r[3]; // 803A8690
  if (crb(c,2)) { goto L_803A86B0; } // 803A8694
  c->r[4]=0u+0x00000000u; // 803A8698
  c->lr=0x803A86A0u; f_803B4FA4(c); // 803A869C
  cmps(c,0,(int32_t)c->r[31],0); // 803A86A0
  if (!crb(c,1)) { goto L_803A86B0; } // 803A86A4
  c->r[3]=c->r[30]|c->r[30]; // 803A86A8
  c->lr=0x803A86B0u; f_802896EC(c); // 803A86AC
L_803A86B0:;
  c->r[3]=c->r[30]|c->r[30]; // 803A86B0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 803A86B4
  c->r[30]=R32(c->r[1]+0x00000008u); // 803A86B8
  c->r[0]=R32(c->r[1]+0x00000014u); // 803A86BC
  c->lr=c->r[0]; // 803A86C0
  c->r[1]=c->r[1]+0x00000010u; // 803A86C4
  return; // 803A86C8
}

// fn_803A86CC
void f_803A86CC(Ctx* __restrict c) {
  trace_call(0x803A86CCu);
  c->r[0]=0u+0x00000000u; // 803A86CC
  c->r[4]=c->r[3]+0x00000004u; // 803A86D0
  W32(c->r[3]+0x00000004u,c->r[0]); // 803A86D4
  W32(c->r[3]+0x00000008u,c->r[0]); // 803A86D8
  W32(c->r[3]+0x00000000u,c->r[0]); // 803A86DC
  W32(c->r[3]+0x00000004u,c->r[4]); // 803A86E0
  W32(c->r[3]+0x00000008u,c->r[4]); // 803A86E4
  return; // 803A86E8
}

// fn_803A86EC
void f_803A86EC(Ctx* __restrict c) {
  trace_call(0x803A86ECu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803A86EC
  c->r[0]=c->lr; // 803A86F0
  cmps(c,0,(int32_t)c->r[3],0); // 803A86F4
  W32(c->r[1]+0x00000014u,c->r[0]); // 803A86F8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 803A86FC
  c->r[31]=c->r[4]|c->r[4]; // 803A8700
  W32(c->r[1]+0x00000008u,c->r[30]); // 803A8704
  c->r[30]=c->r[3]|c->r[3]; // 803A8708
  if (crb(c,2)) { goto L_803A8728; } // 803A870C
  c->r[4]=0u+0x00000000u; // 803A8710
  c->lr=0x803A8718u; f_803B4FA4(c); // 803A8714
  cmps(c,0,(int32_t)c->r[31],0); // 803A8718
  if (!crb(c,1)) { goto L_803A8728; } // 803A871C
  c->r[3]=c->r[30]|c->r[30]; // 803A8720
  c->lr=0x803A8728u; f_802896EC(c); // 803A8724
L_803A8728:;
  c->r[3]=c->r[30]|c->r[30]; // 803A8728
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 803A872C
  c->r[30]=R32(c->r[1]+0x00000008u); // 803A8730
  c->r[0]=R32(c->r[1]+0x00000014u); // 803A8734
  c->lr=c->r[0]; // 803A8738
  c->r[1]=c->r[1]+0x00000010u; // 803A873C
  return; // 803A8740
}

// dtor_803A8744
void f_803A8744(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803A8744
  c->r[0]=c->lr; // 803A8748
  cmps(c,0,(int32_t)c->r[3],0); // 803A874C
  W32(c->r[1]+0x00000014u,c->r[0]); // 803A8750
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 803A8754
  c->r[31]=c->r[4]|c->r[4]; // 803A8758
  W32(c->r[1]+0x00000008u,c->r[30]); // 803A875C
  c->r[30]=c->r[3]|c->r[3]; // 803A8760
  if (crb(c,2)) { goto L_803A87E0; } // 803A8764
  c->r[4]=0u+0x80430000u; // 803A8768
  c->r[4]=c->r[4]+0x000074F0u; // 803A876C
  c->r[0]=c->r[4]+0x00000014u; // 803A8770
  W32(c->r[3]+0x00000008u,c->r[4]); // 803A8774
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 803A8778
  c->lr=0x803A8780u; f_8039DC24(c); // 803A877C
  c->r[4]=c->r[30]|c->r[30]; // 803A8780
  c->lr=0x803A8788u; f_8039DD38(c); // 803A8784
  c->r[0]=addc(c,c->r[30],0x00000088u,0); cr0(c,c->r[0]); // 803A8788
  if (crb(c,2)) { goto L_803A87A0; } // 803A878C
  c->r[3]=addc(c,c->r[30],0x0000008Cu,0); cr0(c,c->r[3]); // 803A8790
  if (crb(c,2)) { goto L_803A87A0; } // 803A8794
  c->r[4]=0u+0x00000000u; // 803A8798
  c->lr=0x803A87A0u; f_803B4FA4(c); // 803A879C
L_803A87A0:;
  c->r[0]=addc(c,c->r[30],0x00000060u,0); cr0(c,c->r[0]); // 803A87A0
  if (crb(c,2)) { goto L_803A87B8; } // 803A87A4
  c->r[3]=addc(c,c->r[30],0x00000064u,0); cr0(c,c->r[3]); // 803A87A8
  if (crb(c,2)) { goto L_803A87B8; } // 803A87AC
  c->r[4]=0u+0x00000000u; // 803A87B0
  c->lr=0x803A87B8u; f_803B4FA4(c); // 803A87B4
L_803A87B8:;
  c->r[0]=addc(c,c->r[30],0x00000038u,0); cr0(c,c->r[0]); // 803A87B8
  if (crb(c,2)) { goto L_803A87D0; } // 803A87BC
  c->r[3]=addc(c,c->r[30],0x0000003Cu,0); cr0(c,c->r[3]); // 803A87C0
  if (crb(c,2)) { goto L_803A87D0; } // 803A87C4
  c->r[4]=0u+0x00000000u; // 803A87C8
  c->lr=0x803A87D0u; f_803B4FA4(c); // 803A87CC
L_803A87D0:;
  cmps(c,0,(int32_t)c->r[31],0); // 803A87D0
  if (!crb(c,1)) { goto L_803A87E0; } // 803A87D4
  c->r[3]=c->r[30]|c->r[30]; // 803A87D8
  c->lr=0x803A87E0u; f_802896EC(c); // 803A87DC
L_803A87E0:;
  c->r[3]=c->r[30]|c->r[30]; // 803A87E0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 803A87E4
  c->r[30]=R32(c->r[1]+0x00000008u); // 803A87E8
  c->r[0]=R32(c->r[1]+0x00000014u); // 803A87EC
  c->lr=c->r[0]; // 803A87F0
  c->r[1]=c->r[1]+0x00000010u; // 803A87F4
  return; // 803A87F8
}

// fn_803A87FC
void f_803A87FC(Ctx* __restrict c) {
  trace_call(0x803A87FCu);
  {uint32_t ea=c->r[1]+0xFFFFFFA0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803A87FC
  c->r[0]=c->lr; // 803A8800
  W32(c->r[1]+0x00000064u,c->r[0]); // 803A8804
  c->r[11]=c->r[1]+0x00000060u; // 803A8808
  c->lr=0x803A8810u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 803A880C
  c->r[27]=c->r[3]|c->r[3]; // 803A8810
  c->r[28]=c->r[4]|c->r[4]; // 803A8814
  c->r[29]=c->r[7]|c->r[7]; // 803A8818
  c->r[30]=c->r[8]|c->r[8]; // 803A881C
  c->lr=0x803A8824u; f_803A8A50(c); // 803A8820
  cmps(c,0,(int32_t)c->r[3],0); // 803A8824
  if (!crb(c,2)) { goto L_803A8834; } // 803A8828
  c->r[3]=0u+0x00000000u; // 803A882C
  goto L_803A88BC; // 803A8830
L_803A8834:;
  c->r[3]=c->r[28]|c->r[28]; // 803A8834
  c->r[4]=c->r[1]+0x00000024u; // 803A8838
  c->r[31]=0u+0x00000000u; // 803A883C
  c->lr=0x803A8844u; f_803A67DC(c); // 803A8840
  cmps(c,0,(int32_t)c->r[3],0); // 803A8844
  if (crb(c,2)) { goto L_803A8850; } // 803A8848
  c->r[31]=R32(c->r[1]+0x00000034u); // 803A884C
L_803A8850:;
  c->r[3]=0u+0x00010000u; // 803A8850
  c->r[0]=c->r[3]+0xFFFFA000u; // 803A8854
  c->r[0]=(uint32_t)((int32_t)c->r[31]*(int32_t)c->r[0]); // 803A8858
  cmpu(c,0,c->r[30],c->r[0]); // 803A885C
  if (!crb(c,0)) { goto L_803A886C; } // 803A8860
  c->r[0]=0u+0x00000000u; // 803A8864
  goto L_803A88A0; // 803A8868
L_803A886C:;
  c->r[3]=c->r[28]|c->r[28]; // 803A886C
  c->r[4]=c->r[1]+0x00000008u; // 803A8870
  c->r[31]=0u+0x00000000u; // 803A8874
  c->lr=0x803A887Cu; f_803A67DC(c); // 803A8878
  cmps(c,0,(int32_t)c->r[3],0); // 803A887C
  if (crb(c,2)) { goto L_803A8888; } // 803A8880
  c->r[31]=R32(c->r[1]+0x00000018u); // 803A8884
L_803A8888:;
  c->r[4]=c->r[29]|c->r[29]; // 803A8888
  c->r[5]=c->r[30]|c->r[30]; // 803A888C
  c->r[6]=c->r[31]|c->r[31]; // 803A8890
  c->r[3]=c->r[27]+0x000000BCu; // 803A8894
  c->lr=0x803A889Cu; f_803AC4AC(c); // 803A8898
  c->r[0]=0u+0x00000001u; // 803A889C
L_803A88A0:;
  cmps(c,0,(int32_t)c->r[0],0); // 803A88A0
  if (!crb(c,2)) { goto L_803A88B0; } // 803A88A4
  c->r[3]=0u+0x00000000u; // 803A88A8
  goto L_803A88BC; // 803A88AC
L_803A88B0:;
  c->r[0]=c->r[27]+0x000000B0u; // 803A88B0
  c->r[3]=0u+0x00000001u; // 803A88B4
  W32(c->r[27]+0x0000001Cu,c->r[0]); // 803A88B8
L_803A88BC:;
  c->r[11]=c->r[1]+0x00000060u; // 803A88BC
  c->lr=0x803A88C4u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 803A88C0
  c->r[0]=R32(c->r[1]+0x00000064u); // 803A88C4
  c->lr=c->r[0]; // 803A88C8
  c->r[1]=c->r[1]+0x00000060u; // 803A88CC
  return; // 803A88D0
}

// fn_803A88D4
void f_803A88D4(Ctx* __restrict c) {
  trace_call(0x803A88D4u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803A88D4
  c->r[0]=c->lr; // 803A88D8
  W32(c->r[1]+0x00000044u,c->r[0]); // 803A88DC
  W32(c->r[1]+0x0000003Cu,c->r[31]); // 803A88E0
  W32(c->r[1]+0x00000038u,c->r[30]); // 803A88E4
  W32(c->r[1]+0x00000034u,c->r[29]); // 803A88E8
  W32(c->r[1]+0x00000030u,c->r[28]); // 803A88EC
  c->r[28]=c->r[4]|c->r[4]; // 803A88F0
  c->r[3]=c->r[28]|c->r[28]; // 803A88F4
  c->lr=0x803A88FCu; f_803A677C(c); // 803A88F8
  c->r[4]=(uint32_t)((int32_t)c->r[3]*(int32_t)96); // 803A88FC
  c->r[30]=c->r[3]|c->r[3]; // 803A8900
  c->r[29]=0u+0x00000000u; // 803A8904
  c->r[0]=c->r[4]+0x00000003u; // 803A8908
  c->r[31]=rotl(c->r[0],0)&0xFFFFFFFCu; // 803A890C
  goto L_803A895C; // 803A8910
L_803A8914:;
  c->r[3]=c->r[28]|c->r[28]; // 803A8914
  c->r[4]=c->r[29]|c->r[29]; // 803A8918
  c->r[5]=c->r[1]+0x00000008u; // 803A891C
  c->lr=0x803A8924u; f_803A67D4(c); // 803A8920
  cmps(c,0,(int32_t)c->r[3],0); // 803A8924
  if (crb(c,2)) { goto L_803A8958; } // 803A8928
  c->r[3]=R32(c->r[1]+0x0000000Cu); // 803A892C
  c->r[4]=R32(c->r[1]+0x00000008u); // 803A8930
  c->r[0]=c->r[3]+0x0000003Fu; // 803A8934
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFFCu; // 803A8938
  c->ctr=c->r[4]; // 803A893C
  cmps(c,0,(int32_t)c->r[4],0); // 803A8940
  if (!crb(c,1)) { goto L_803A8958; } // 803A8944
L_803A8948:;
  cmps(c,0,(int32_t)c->r[3],0); // 803A8948
  if (crb(c,2)) { goto L_803A8954; } // 803A894C
  c->r[31]=c->r[31]+c->r[0]; // 803A8950
L_803A8954:;
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_803A8948; } // 803A8954
L_803A8958:;
  c->r[29]=c->r[29]+0x00000001u; // 803A8958
L_803A895C:;
  cmpu(c,0,c->r[29],c->r[30]); // 803A895C
  if (crb(c,0)) { IRQCHK(c); goto L_803A8914; } // 803A8960
  c->r[3]=c->r[28]|c->r[28]; // 803A8964
  c->lr=0x803A896Cu; f_803A6784(c); // 803A8968
  c->r[4]=rotl(c->r[3],3)&0xFFFFFFF8u; // 803A896C
  c->r[3]=c->r[28]|c->r[28]; // 803A8970
  c->r[0]=c->r[4]+0x00000007u; // 803A8974
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFFCu; // 803A8978
  c->r[4]=c->r[1]+0x00000010u; // 803A897C
  c->r[31]=c->r[31]+c->r[0]; // 803A8980
  c->lr=0x803A8988u; f_803A67DC(c); // 803A8984
  cmps(c,0,(int32_t)c->r[3],0); // 803A8988
  if (crb(c,2)) { goto L_803A89E0; } // 803A898C
  c->r[0]=R32(c->r[1]+0x00000010u); // 803A8990
  c->r[4]=R32(c->r[1]+0x00000018u); // 803A8994
  c->r[6]=(uint32_t)((int32_t)c->r[0]*(int32_t)1100); // 803A8998
  c->r[3]=R32(c->r[1]+0x00000024u); // 803A899C
  c->r[0]=R32(c->r[1]+0x00000014u); // 803A89A0
  c->r[5]=(uint32_t)((int32_t)c->r[4]*(int32_t)2876); // 803A89A4
  c->r[6]=c->r[6]+0x00000003u; // 803A89A8
  c->r[4]=(uint32_t)((int32_t)c->r[3]*(int32_t)444); // 803A89AC
  c->r[3]=rotl(c->r[6],0)&0xFFFFFFFCu; // 803A89B0
  c->r[5]=c->r[5]+0x00000003u; // 803A89B4
  c->r[31]=c->r[31]+c->r[3]; // 803A89B8
  c->r[3]=(uint32_t)((int32_t)c->r[0]*(int32_t)216); // 803A89BC
  c->r[5]=rotl(c->r[5],0)&0xFFFFFFFCu; // 803A89C0
  c->r[0]=c->r[4]+0x00000003u; // 803A89C4
  c->r[31]=c->r[31]+c->r[5]; // 803A89C8
  c->r[4]=rotl(c->r[0],0)&0xFFFFFFFCu; // 803A89CC
  c->r[0]=c->r[3]+0x00000003u; // 803A89D0
  c->r[31]=c->r[31]+c->r[4]; // 803A89D4
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFFCu; // 803A89D8
  c->r[31]=c->r[31]+c->r[0]; // 803A89DC
L_803A89E0:;
  c->r[3]=c->r[31]|c->r[31]; // 803A89E0
  c->r[31]=R32(c->r[1]+0x0000003Cu); // 803A89E4
  c->r[30]=R32(c->r[1]+0x00000038u); // 803A89E8
  c->r[29]=R32(c->r[1]+0x00000034u); // 803A89EC
  c->r[28]=R32(c->r[1]+0x00000030u); // 803A89F0
  c->r[0]=R32(c->r[1]+0x00000044u); // 803A89F4
  c->lr=c->r[0]; // 803A89F8
  c->r[1]=c->r[1]+0x00000040u; // 803A89FC
  return; // 803A8A00
}

// fn_803A8A04
void f_803A8A04(Ctx* __restrict c) {
  trace_call(0x803A8A04u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803A8A04
  c->r[0]=c->lr; // 803A8A08
  c->r[3]=c->r[4]|c->r[4]; // 803A8A0C
  W32(c->r[1]+0x00000034u,c->r[0]); // 803A8A10
  c->r[4]=c->r[1]+0x00000008u; // 803A8A14
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 803A8A18
  c->r[31]=0u+0x00000000u; // 803A8A1C
  c->lr=0x803A8A24u; f_803A67DC(c); // 803A8A20
  cmps(c,0,(int32_t)c->r[3],0); // 803A8A24
  if (crb(c,2)) { goto L_803A8A30; } // 803A8A28
  c->r[31]=R32(c->r[1]+0x00000018u); // 803A8A2C
L_803A8A30:;
  c->r[3]=0u+0x00010000u; // 803A8A30
  c->r[0]=c->r[3]+0xFFFFA000u; // 803A8A34
  c->r[3]=(uint32_t)((int32_t)c->r[31]*(int32_t)c->r[0]); // 803A8A38
  c->r[31]=R32(c->r[1]+0x0000002Cu); // 803A8A3C
  c->r[0]=R32(c->r[1]+0x00000034u); // 803A8A40
  c->lr=c->r[0]; // 803A8A44
  c->r[1]=c->r[1]+0x00000030u; // 803A8A48
  return; // 803A8A4C
}

// fn_803A8A50
void f_803A8A50(Ctx* __restrict c) {
  trace_call(0x803A8A50u);
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803A8A50
  c->r[0]=c->lr; // 803A8A54
  W32(c->r[1]+0x00000054u,c->r[0]); // 803A8A58
  c->r[11]=c->r[1]+0x00000050u; // 803A8A5C
  c->lr=0x803A8A64u; { W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 803A8A60
  W32(c->r[1]+0x00000008u,c->r[5]); // 803A8A64
  c->r[31]=c->r[5]+c->r[6]; // 803A8A68
  c->r[29]=c->r[5]|c->r[5]; // 803A8A6C
  c->r[30]=c->r[6]|c->r[6]; // 803A8A70
  c->r[27]=c->r[3]|c->r[3]; // 803A8A74
  c->r[28]=c->r[4]|c->r[4]; // 803A8A78
  c->r[6]=c->r[31]|c->r[31]; // 803A8A7C
  c->r[5]=c->r[1]+0x00000008u; // 803A8A80
  c->lr=0x803A8A88u; f_803A8CE8(c); // 803A8A84
  cmps(c,0,(int32_t)c->r[3],0); // 803A8A88
  if (!crb(c,2)) { goto L_803A8A98; } // 803A8A8C
  c->r[3]=0u+0x00000000u; // 803A8A90
  goto L_803A8CD0; // 803A8A94
L_803A8A98:;
  c->r[3]=c->r[28]|c->r[28]; // 803A8A98
  c->lr=0x803A8AA0u; f_803A6784(c); // 803A8A9C
  c->r[3]=rotl(c->r[3],3)&0xFFFFFFF8u; // 803A8AA0
  c->r[5]=R32(c->r[1]+0x00000008u); // 803A8AA4
  c->r[0]=c->r[3]+0x00000004u; // 803A8AA8
  c->r[3]=c->r[0]+c->r[5]; // 803A8AAC
  c->r[0]=c->r[3]+0x00000003u; // 803A8AB0
  c->r[4]=rotl(c->r[0],0)&0xFFFFFFFCu; // 803A8AB4
  c->r[0]=c->r[4]-c->r[31]; cr0(c,c->r[0]); // 803A8AB8
  if (!crb(c,1)) { goto L_803A8AC8; } // 803A8ABC
  c->r[0]=0u+0x00000000u; // 803A8AC0
  goto L_803A8B20; // 803A8AC4
L_803A8AC8:;
  W32(c->r[27]+0x00000014u,c->r[5]); // 803A8AC8
  c->r[3]=c->r[28]|c->r[28]; // 803A8ACC
  W32(c->r[1]+0x00000008u,c->r[4]); // 803A8AD0
  c->lr=0x803A8AD8u; f_803A6784(c); // 803A8AD4
  c->r[5]=R32(c->r[27]+0x00000014u); // 803A8AD8
  c->r[6]=0u+0x00000000u; // 803A8ADC
  c->r[7]=0u+0x00000000u; // 803A8AE0
  c->r[4]=0u+0x00000000u; // 803A8AE4
  W32(c->r[5]+0x00000000u,c->r[3]); // 803A8AE8
  goto L_803A8B0C; // 803A8AEC
L_803A8AF0:;
  c->r[3]=c->r[3]+c->r[7]; // 803A8AF0
  c->r[6]=c->r[6]+0x00000001u; // 803A8AF4
  W32(c->r[3]+0x00000004u,c->r[4]); // 803A8AF8
  c->r[0]=R32(c->r[27]+0x00000014u); // 803A8AFC
  c->r[3]=c->r[0]+c->r[7]; // 803A8B00
  c->r[7]=c->r[7]+0x00000008u; // 803A8B04
  W32(c->r[3]+0x00000008u,c->r[4]); // 803A8B08
L_803A8B0C:;
  c->r[3]=R32(c->r[27]+0x00000014u); // 803A8B0C
  c->r[0]=R32(c->r[3]+0x00000000u); // 803A8B10
  cmpu(c,0,c->r[6],c->r[0]); // 803A8B14
  if (crb(c,0)) { IRQCHK(c); goto L_803A8AF0; } // 803A8B18
  c->r[0]=0u+0x00000001u; // 803A8B1C
L_803A8B20:;
  cmps(c,0,(int32_t)c->r[0],0); // 803A8B20
  if (!crb(c,2)) { goto L_803A8B30; } // 803A8B24
  c->r[3]=0u+0x00000000u; // 803A8B28
  goto L_803A8CD0; // 803A8B2C
L_803A8B30:;
  c->r[3]=c->r[28]|c->r[28]; // 803A8B30
  c->r[4]=c->r[1]+0x0000000Cu; // 803A8B34
  c->lr=0x803A8B3Cu; f_803A67DC(c); // 803A8B38
  cmps(c,0,(int32_t)c->r[3],0); // 803A8B3C
  if (crb(c,2)) { goto L_803A8CC0; } // 803A8B40
  c->r[0]=R32(c->r[1]+0x0000000Cu); // 803A8B44
  c->r[23]=R32(c->r[1]+0x00000008u); // 803A8B48
  c->r[25]=(uint32_t)((int32_t)c->r[0]*(int32_t)1100); // 803A8B4C
  c->r[3]=c->r[25]+c->r[23]; // 803A8B50
  c->r[0]=c->r[3]+0x00000003u; // 803A8B54
  c->r[24]=rotl(c->r[0],0)&0xFFFFFFFCu; // 803A8B58
  c->r[0]=c->r[24]-c->r[31]; cr0(c,c->r[0]); // 803A8B5C
  if (!crb(c,1)) { goto L_803A8B6C; } // 803A8B60
  c->r[0]=0u+0x00000000u; // 803A8B64
  goto L_803A8B9C; // 803A8B68
L_803A8B6C:;
  c->r[26]=c->r[27]+0x00000048u; // 803A8B6C
  c->r[3]=c->r[26]|c->r[26]; // 803A8B70
  c->lr=0x803A8B78u; f_8025FCCC(c); // 803A8B74
  c->r[4]=c->r[23]|c->r[23]; // 803A8B78
  c->r[5]=c->r[25]|c->r[25]; // 803A8B7C
  c->r[3]=c->r[27]+0x00000038u; // 803A8B80
  c->r[6]=0u+0x0000044Cu; // 803A8B84
  c->lr=0x803A8B8Cu; f_803A082C(c); // 803A8B88
  c->r[3]=c->r[26]|c->r[26]; // 803A8B8C
  c->lr=0x803A8B94u; f_8025FDA8(c); // 803A8B90
  W32(c->r[1]+0x00000008u,c->r[24]); // 803A8B94
  c->r[0]=0u+0x00000001u; // 803A8B98
L_803A8B9C:;
  cmps(c,0,(int32_t)c->r[0],0); // 803A8B9C
  if (!crb(c,2)) { goto L_803A8BAC; } // 803A8BA0
  c->r[3]=0u+0x00000000u; // 803A8BA4
  goto L_803A8CD0; // 803A8BA8
L_803A8BAC:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 803A8BAC
  c->r[23]=R32(c->r[1]+0x00000008u); // 803A8BB0
  c->r[25]=(uint32_t)((int32_t)c->r[0]*(int32_t)2876); // 803A8BB4
  c->r[3]=c->r[25]+c->r[23]; // 803A8BB8
  c->r[0]=c->r[3]+0x00000003u; // 803A8BBC
  c->r[24]=rotl(c->r[0],0)&0xFFFFFFFCu; // 803A8BC0
  c->r[0]=c->r[24]-c->r[31]; cr0(c,c->r[0]); // 803A8BC4
  if (!crb(c,1)) { goto L_803A8BD4; } // 803A8BC8
  c->r[0]=0u+0x00000000u; // 803A8BCC
  goto L_803A8C04; // 803A8BD0
L_803A8BD4:;
  c->r[26]=c->r[27]+0x00000070u; // 803A8BD4
  c->r[3]=c->r[26]|c->r[26]; // 803A8BD8
  c->lr=0x803A8BE0u; f_8025FCCC(c); // 803A8BDC
  c->r[4]=c->r[23]|c->r[23]; // 803A8BE0
  c->r[5]=c->r[25]|c->r[25]; // 803A8BE4
  c->r[3]=c->r[27]+0x00000060u; // 803A8BE8
  c->r[6]=0u+0x00000B3Cu; // 803A8BEC
  c->lr=0x803A8BF4u; f_803A082C(c); // 803A8BF0
  c->r[3]=c->r[26]|c->r[26]; // 803A8BF4
  c->lr=0x803A8BFCu; f_8025FDA8(c); // 803A8BF8
  W32(c->r[1]+0x00000008u,c->r[24]); // 803A8BFC
  c->r[0]=0u+0x00000001u; // 803A8C00
L_803A8C04:;
  cmps(c,0,(int32_t)c->r[0],0); // 803A8C04
  if (!crb(c,2)) { goto L_803A8C14; } // 803A8C08
  c->r[3]=0u+0x00000000u; // 803A8C0C
  goto L_803A8CD0; // 803A8C10
L_803A8C14:;
  c->r[0]=R32(c->r[1]+0x00000020u); // 803A8C14
  c->r[23]=R32(c->r[1]+0x00000008u); // 803A8C18
  c->r[25]=(uint32_t)((int32_t)c->r[0]*(int32_t)444); // 803A8C1C
  c->r[3]=c->r[25]+c->r[23]; // 803A8C20
  c->r[0]=c->r[3]+0x00000003u; // 803A8C24
  c->r[24]=rotl(c->r[0],0)&0xFFFFFFFCu; // 803A8C28
  c->r[0]=c->r[24]-c->r[31]; cr0(c,c->r[0]); // 803A8C2C
  if (!crb(c,1)) { goto L_803A8C3C; } // 803A8C30
  c->r[0]=0u+0x00000000u; // 803A8C34
  goto L_803A8C6C; // 803A8C38
L_803A8C3C:;
  c->r[26]=c->r[27]+0x00000098u; // 803A8C3C
  c->r[3]=c->r[26]|c->r[26]; // 803A8C40
  c->lr=0x803A8C48u; f_8025FCCC(c); // 803A8C44
  c->r[4]=c->r[23]|c->r[23]; // 803A8C48
  c->r[5]=c->r[25]|c->r[25]; // 803A8C4C
  c->r[3]=c->r[27]+0x00000088u; // 803A8C50
  c->r[6]=0u+0x000001BCu; // 803A8C54
  c->lr=0x803A8C5Cu; f_803A082C(c); // 803A8C58
  c->r[3]=c->r[26]|c->r[26]; // 803A8C5C
  c->lr=0x803A8C64u; f_8025FDA8(c); // 803A8C60
  W32(c->r[1]+0x00000008u,c->r[24]); // 803A8C64
  c->r[0]=0u+0x00000001u; // 803A8C68
L_803A8C6C:;
  cmps(c,0,(int32_t)c->r[0],0); // 803A8C6C
  if (!crb(c,2)) { goto L_803A8C7C; } // 803A8C70
  c->r[3]=0u+0x00000000u; // 803A8C74
  goto L_803A8CD0; // 803A8C78
L_803A8C7C:;
  c->r[0]=R32(c->r[1]+0x00000010u); // 803A8C7C
  c->r[4]=R32(c->r[1]+0x00000008u); // 803A8C80
  c->r[5]=(uint32_t)((int32_t)c->r[0]*(int32_t)216); // 803A8C84
  c->r[3]=c->r[5]+c->r[4]; // 803A8C88
  c->r[0]=c->r[3]+0x00000003u; // 803A8C8C
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFFCu; // 803A8C90
  c->r[0]=c->r[0]-c->r[31]; cr0(c,c->r[0]); // 803A8C94
  if (!crb(c,1)) { goto L_803A8CA4; } // 803A8C98
  c->r[0]=0u+0x00000000u; // 803A8C9C
  goto L_803A8CB0; // 803A8CA0
L_803A8CA4:;
  c->r[3]=c->r[27]+0x000000B0u; // 803A8CA4
  c->lr=0x803A8CACu; f_803A1DA4(c); // 803A8CA8
  c->r[0]=0u+0x00000001u; // 803A8CAC
L_803A8CB0:;
  cmps(c,0,(int32_t)c->r[0],0); // 803A8CB0
  if (!crb(c,2)) { goto L_803A8CC0; } // 803A8CB4
  c->r[3]=0u+0x00000000u; // 803A8CB8
  goto L_803A8CD0; // 803A8CBC
L_803A8CC0:;
  W32(c->r[27]+0x00000010u,c->r[28]); // 803A8CC0
  c->r[3]=0u+0x00000001u; // 803A8CC4
  W32(c->r[27]+0x000000D8u,c->r[29]); // 803A8CC8
  W32(c->r[27]+0x000000DCu,c->r[30]); // 803A8CCC
L_803A8CD0:;
  c->r[11]=c->r[1]+0x00000050u; // 803A8CD0
  c->lr=0x803A8CD8u; { c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 803A8CD4
  c->r[0]=R32(c->r[1]+0x00000054u); // 803A8CD8
  c->lr=c->r[0]; // 803A8CDC
  c->r[1]=c->r[1]+0x00000050u; // 803A8CE0
  return; // 803A8CE4
}

// fn_803A8CE8
void f_803A8CE8(Ctx* __restrict c) {
  trace_call(0x803A8CE8u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803A8CE8
  c->r[0]=c->lr; // 803A8CEC
  W32(c->r[1]+0x00000044u,c->r[0]); // 803A8CF0
  c->r[11]=c->r[1]+0x00000040u; // 803A8CF4
  c->lr=0x803A8CFCu; { W32(c->r[11]+0xFFFFFFD0u,c->r[20]); W32(c->r[11]+0xFFFFFFD4u,c->r[21]); W32(c->r[11]+0xFFFFFFD8u,c->r[22]); W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 803A8CF8
  c->r[24]=c->r[4]|c->r[4]; // 803A8CFC
  c->r[20]=c->r[3]|c->r[3]; // 803A8D00
  c->r[25]=c->r[5]|c->r[5]; // 803A8D04
  c->r[26]=c->r[6]|c->r[6]; // 803A8D08
  c->r[3]=c->r[24]|c->r[24]; // 803A8D0C
  c->lr=0x803A8D14u; f_803A677C(c); // 803A8D10
  c->r[0]=(uint32_t)((int32_t)c->r[3]*(int32_t)96); // 803A8D14
  c->r[30]=R32(c->r[25]+0x00000000u); // 803A8D18
  c->r[31]=c->r[3]|c->r[3]; // 803A8D1C
  c->r[4]=c->r[0]+c->r[30]; // 803A8D20
  c->r[0]=c->r[4]+0x00000003u; // 803A8D24
  c->r[4]=rotl(c->r[0],0)&0xFFFFFFFCu; // 803A8D28
  c->r[0]=c->r[4]-c->r[26]; cr0(c,c->r[0]); // 803A8D2C
  if (!crb(c,1)) { goto L_803A8D3C; } // 803A8D30
  c->r[3]=0u+0x00000000u; // 803A8D34
  goto L_803A8E68; // 803A8D38
L_803A8D3C:;
  W32(c->r[25]+0x00000000u,c->r[4]); // 803A8D3C
  c->r[22]=0u+0x80430000u; // 803A8D40
  c->r[29]=0u+0x00000000u; // 803A8D44
  c->r[23]=0u+0x00000000u; // 803A8D48
  W32(c->r[20]+0x00000034u,c->r[30]); // 803A8D4C
  c->r[22]=c->r[22]+0x00007540u; // 803A8D50
  W32(c->r[20]+0x00000030u,c->r[3]); // 803A8D54
  goto L_803A8E5C; // 803A8D58
L_803A8D5C:;
  cmps(c,0,(int32_t)c->r[30],0); // 803A8D5C
  c->r[28]=c->r[30]|c->r[30]; // 803A8D60
  if (crb(c,2)) { goto L_803A8D74; } // 803A8D64
  c->r[3]=c->r[30]|c->r[30]; // 803A8D68
  c->lr=0x803A8D70u; f_803AA674(c); // 803A8D6C
  c->r[28]=c->r[3]|c->r[3]; // 803A8D70
L_803A8D74:;
  c->r[3]=c->r[24]|c->r[24]; // 803A8D74
  c->r[4]=c->r[29]|c->r[29]; // 803A8D78
  c->r[5]=c->r[1]+0x00000008u; // 803A8D7C
  c->lr=0x803A8D84u; f_803A67D4(c); // 803A8D80
  cmps(c,0,(int32_t)c->r[3],0); // 803A8D84
  if (crb(c,2)) { goto L_803A8E54; } // 803A8D88
  c->r[4]=R32(c->r[1]+0x00000008u); // 803A8D8C
  c->r[3]=c->r[28]|c->r[28]; // 803A8D90
  c->lr=0x803A8D98u; f_803AB700(c); // 803A8D94
  c->r[4]=R32(c->r[1]+0x00000008u); // 803A8D98
  c->r[3]=c->r[28]|c->r[28]; // 803A8D9C
  c->lr=0x803A8DA4u; f_803AB7A0(c); // 803A8DA0
  c->r[0]=R32(c->r[1]+0x0000000Cu); // 803A8DA4
  cmps(c,0,(int32_t)c->r[0],0); // 803A8DA8
  if (crb(c,2)) { goto L_803A8E54; } // 803A8DAC
  c->r[27]=0u+0x00000000u; // 803A8DB0
  goto L_803A8E48; // 803A8DB4
L_803A8DB8:;
  c->r[20]=R32(c->r[25]+0x00000000u); // 803A8DB8
  c->r[0]=R32(c->r[1]+0x0000000Cu); // 803A8DBC
  c->r[3]=c->r[20]+c->r[0]; // 803A8DC0
  c->r[0]=c->r[3]+0x0000003Fu; // 803A8DC4
  c->r[3]=rotl(c->r[0],0)&0xFFFFFFFCu; // 803A8DC8
  c->r[0]=c->r[3]-c->r[26]; cr0(c,c->r[0]); // 803A8DCC
  if (!crb(c,1)) { goto L_803A8DDC; } // 803A8DD0
  c->r[3]=0u+0x00000000u; // 803A8DD4
  goto L_803A8E68; // 803A8DD8
L_803A8DDC:;
  W32(c->r[25]+0x00000000u,c->r[3]); // 803A8DDC
  cmps(c,0,(int32_t)c->r[20],0); // 803A8DE0
  c->r[21]=R32(c->r[1]+0x0000000Cu); // 803A8DE4
  if (crb(c,2)) { goto L_803A8E08; } // 803A8DE8
  c->r[3]=c->r[20]|c->r[20]; // 803A8DEC
  c->lr=0x803A8DF4u; f_803AA3B0(c); // 803A8DF0
  W32(c->r[20]+0x00000000u,c->r[22]); // 803A8DF4
  W32(c->r[20]+0x0000002Cu,c->r[23]); // 803A8DF8
  W32(c->r[20]+0x00000030u,c->r[23]); // 803A8DFC
  W32(c->r[20]+0x00000034u,c->r[23]); // 803A8E00
  W32(c->r[20]+0x00000038u,c->r[23]); // 803A8E04
L_803A8E08:;
  c->r[3]=c->r[20]|c->r[20]; // 803A8E08
  c->r[5]=c->r[21]|c->r[21]; // 803A8E0C
  c->r[4]=c->r[20]+0x0000003Cu; // 803A8E10
  c->lr=0x803A8E18u; f_803AA468(c); // 803A8E14
  cmps(c,0,(int32_t)c->r[3],0); // 803A8E18
  if (crb(c,2)) { goto L_803A8E24; } // 803A8E1C
  goto L_803A8E28; // 803A8E20
L_803A8E24:;
  c->r[20]=0u+0x00000000u; // 803A8E24
L_803A8E28:;
  cmps(c,0,(int32_t)c->r[20],0); // 803A8E28
  if (!crb(c,2)) { goto L_803A8E38; } // 803A8E2C
  c->r[3]=0u+0x00000000u; // 803A8E30
  goto L_803A8E68; // 803A8E34
L_803A8E38:;
  c->r[3]=c->r[28]|c->r[28]; // 803A8E38
  c->r[4]=c->r[20]|c->r[20]; // 803A8E3C
  c->lr=0x803A8E44u; f_803AB944(c); // 803A8E40
  c->r[27]=c->r[27]+0x00000001u; // 803A8E44
L_803A8E48:;
  c->r[0]=R32(c->r[1]+0x00000008u); // 803A8E48
  cmps(c,0,(int32_t)c->r[27],(int32_t)c->r[0]); // 803A8E4C
  if (crb(c,0)) { IRQCHK(c); goto L_803A8DB8; } // 803A8E50
L_803A8E54:;
  c->r[29]=c->r[29]+0x00000001u; // 803A8E54
  c->r[30]=c->r[30]+0x00000060u; // 803A8E58
L_803A8E5C:;
  cmpu(c,0,c->r[29],c->r[31]); // 803A8E5C
  if (crb(c,0)) { IRQCHK(c); goto L_803A8D5C; } // 803A8E60
  c->r[3]=0u+0x00000001u; // 803A8E64
L_803A8E68:;
  c->r[11]=c->r[1]+0x00000040u; // 803A8E68
  c->lr=0x803A8E70u; { c->r[20]=R32(c->r[11]+0xFFFFFFD0u); c->r[21]=R32(c->r[11]+0xFFFFFFD4u); c->r[22]=R32(c->r[11]+0xFFFFFFD8u); c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 803A8E6C
  c->r[0]=R32(c->r[1]+0x00000044u); // 803A8E70
  c->lr=c->r[0]; // 803A8E74
  c->r[1]=c->r[1]+0x00000040u; // 803A8E78
  return; // 803A8E7C
}

// fn_803A8E80
void f_803A8E80(Ctx* __restrict c) {
  trace_call(0x803A8E80u);
  {uint32_t ea=c->r[1]+0xFFFFEDB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803A8E80
  c->r[0]=c->lr; // 803A8E84
  W32(c->r[1]+0x00001254u,c->r[0]); // 803A8E88
  c->r[11]=c->r[1]+0x00001250u; // 803A8E8C
  c->lr=0x803A8E94u; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 803A8E90
  c->r[31]=c->r[3]|c->r[3]; // 803A8E94
  c->r[26]=0u+0x00000000u; // 803A8E98
  c->r[27]=0u+0x00000000u; // 803A8E9C
  goto L_803A8EB8; // 803A8EA0
L_803A8EA4:;
  c->r[0]=R32(c->r[31]+0x00000034u); // 803A8EA4
  c->r[3]=c->r[0]+c->r[27]; // 803A8EA8
  c->lr=0x803A8EB0u; f_803AA7B0(c); // 803A8EAC
  c->r[27]=c->r[27]+0x00000060u; // 803A8EB0
  c->r[26]=c->r[26]+0x00000001u; // 803A8EB4
L_803A8EB8:;
  c->r[0]=R32(c->r[31]+0x00000030u); // 803A8EB8
  cmpu(c,0,c->r[26],c->r[0]); // 803A8EBC
  if (crb(c,0)) { IRQCHK(c); goto L_803A8EA4; } // 803A8EC0
  c->r[4]=0u+0x803B0000u; // 803A8EC4
  c->r[5]=0u+0x803B0000u; // 803A8EC8
  c->r[3]=c->r[1]+0x00000C38u; // 803A8ECC
  c->r[6]=0u+0x0000000Cu; // 803A8ED0
  c->r[4]=c->r[4]+0xFFFF85DCu; // 803A8ED4
  c->r[5]=c->r[5]+0xFFFF85FCu; // 803A8ED8
  c->r[7]=0u+0x00000080u; // 803A8EDC
  c->lr=0x803A8EE4u; f_80289B34(c); // 803A8EE0
  c->r[29]=c->r[31]+0x00000048u; // 803A8EE4
  c->r[3]=c->r[29]|c->r[29]; // 803A8EE8
  c->lr=0x803A8EF0u; f_8025FCCC(c); // 803A8EEC
  goto L_803A8F4C; // 803A8EF0
L_803A8EF4:;
  c->r[27]=R32(c->r[31]+0x00000040u); // 803A8EF4
  c->r[3]=c->r[31]+0x0000003Cu; // 803A8EF8
  c->r[4]=c->r[1]+0x00000028u; // 803A8EFC
  W32(c->r[1]+0x00000028u,c->r[27]); // 803A8F00
  c->lr=0x803A8F08u; f_803B5028(c); // 803A8F04
  c->r[3]=R8(c->r[27]+0xFFFFFFBCu); // 803A8F08
  c->r[0]=R32(c->r[27]+0xFFFFFF88u); // 803A8F0C
  c->r[3]=c->r[3]+c->r[0]; // 803A8F10
  cmps(c,0,(int32_t)c->r[3],127); // 803A8F14
  if (!crb(c,1)) { goto L_803A8F24; } // 803A8F18
  c->r[0]=0u+0x0000007Fu; // 803A8F1C
  goto L_803A8F2C; // 803A8F20
L_803A8F24:;
  c->r[0]=sraw(c,c->r[3],31); // 803A8F24
  c->r[0]=c->r[3]&~c->r[0]; // 803A8F28
L_803A8F2C:;
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)12); // 803A8F2C
  c->r[3]=c->r[1]+0x00000C38u; // 803A8F30
  c->r[5]=c->r[27]|c->r[27]; // 803A8F34
  c->r[4]=c->r[1]+0x0000002Cu; // 803A8F38
  c->r[3]=c->r[3]+c->r[0]; // 803A8F3C
  c->r[0]=c->r[3]+0x00000004u; // 803A8F40
  W32(c->r[1]+0x0000002Cu,c->r[0]); // 803A8F44
  c->lr=0x803A8F4Cu; f_803B50B4(c); // 803A8F48
L_803A8F4C:;
  c->r[0]=R32(c->r[31]+0x0000003Cu); // 803A8F4C
  cmps(c,0,(int32_t)c->r[0],0); // 803A8F50
  if (!crb(c,2)) { IRQCHK(c); goto L_803A8EF4; } // 803A8F54
  c->r[27]=c->r[1]+0x00000C38u; // 803A8F58
  c->r[30]=c->r[31]+0x00000040u; // 803A8F5C
  c->r[28]=0u+0x00000000u; // 803A8F60
L_803A8F64:;
  c->r[0]=R32(c->r[27]+0x00000000u); // 803A8F64
  cmps(c,0,(int32_t)c->r[0],0); // 803A8F68
  if (crb(c,2)) { goto L_803A8FA8; } // 803A8F6C
  goto L_803A8F9C; // 803A8F70
L_803A8F74:;
  c->r[26]=R32(c->r[27]+0x00000004u); // 803A8F74
  c->r[3]=c->r[27]|c->r[27]; // 803A8F78
  c->r[4]=c->r[1]+0x00000030u; // 803A8F7C
  W32(c->r[1]+0x00000030u,c->r[26]); // 803A8F80
  c->lr=0x803A8F88u; f_803B5028(c); // 803A8F84
  W32(c->r[1]+0x00000034u,c->r[30]); // 803A8F88
  c->r[5]=c->r[26]|c->r[26]; // 803A8F8C
  c->r[3]=c->r[31]+0x0000003Cu; // 803A8F90
  c->r[4]=c->r[1]+0x00000034u; // 803A8F94
  c->lr=0x803A8F9Cu; f_803B50B4(c); // 803A8F98
L_803A8F9C:;
  c->r[0]=R32(c->r[27]+0x00000000u); // 803A8F9C
  cmps(c,0,(int32_t)c->r[0],0); // 803A8FA0
  if (!crb(c,2)) { IRQCHK(c); goto L_803A8F74; } // 803A8FA4
L_803A8FA8:;
  c->r[28]=c->r[28]+0x00000001u; // 803A8FA8
  c->r[27]=c->r[27]+0x0000000Cu; // 803A8FAC
  cmps(c,0,(int32_t)c->r[28],128); // 803A8FB0
  if (crb(c,0)) { IRQCHK(c); goto L_803A8F64; } // 803A8FB4
  c->r[3]=c->r[29]|c->r[29]; // 803A8FB8
  c->lr=0x803A8FC0u; f_8025FDA8(c); // 803A8FBC
  c->r[4]=0u+0x803B0000u; // 803A8FC0
  c->r[3]=c->r[1]+0x00000C38u; // 803A8FC4
  c->r[4]=c->r[4]+0xFFFF85FCu; // 803A8FC8
  c->r[5]=0u+0x0000000Cu; // 803A8FCC
  c->r[6]=0u+0x00000080u; // 803A8FD0
  c->lr=0x803A8FD8u; f_80289C2C(c); // 803A8FD4
  c->r[4]=0u+0x803B0000u; // 803A8FD8
  c->r[5]=0u+0x803B0000u; // 803A8FDC
  c->r[3]=c->r[1]+0x00000638u; // 803A8FE0
  c->r[6]=0u+0x0000000Cu; // 803A8FE4
  c->r[4]=c->r[4]+0xFFFF8654u; // 803A8FE8
  c->r[5]=c->r[5]+0xFFFF8674u; // 803A8FEC
  c->r[7]=0u+0x00000080u; // 803A8FF0
  c->lr=0x803A8FF8u; f_80289B34(c); // 803A8FF4
  c->r[29]=c->r[31]+0x00000070u; // 803A8FF8
  c->r[3]=c->r[29]|c->r[29]; // 803A8FFC
  c->lr=0x803A9004u; f_8025FCCC(c); // 803A9000
  goto L_803A9060; // 803A9004
L_803A9008:;
  c->r[26]=R32(c->r[31]+0x00000068u); // 803A9008
  c->r[3]=c->r[31]+0x00000064u; // 803A900C
  c->r[4]=c->r[1]+0x00000018u; // 803A9010
  W32(c->r[1]+0x00000018u,c->r[26]); // 803A9014
  c->lr=0x803A901Cu; f_803B5028(c); // 803A9018
  c->r[3]=R8(c->r[26]+0xFFFFFFBCu); // 803A901C
  c->r[0]=R32(c->r[26]+0xFFFFFF88u); // 803A9020
  c->r[3]=c->r[3]+c->r[0]; // 803A9024
  cmps(c,0,(int32_t)c->r[3],127); // 803A9028
  if (!crb(c,1)) { goto L_803A9038; } // 803A902C
  c->r[0]=0u+0x0000007Fu; // 803A9030
  goto L_803A9040; // 803A9034
L_803A9038:;
  c->r[0]=sraw(c,c->r[3],31); // 803A9038
  c->r[0]=c->r[3]&~c->r[0]; // 803A903C
L_803A9040:;
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)12); // 803A9040
  c->r[3]=c->r[1]+0x00000638u; // 803A9044
  c->r[5]=c->r[26]|c->r[26]; // 803A9048
  c->r[4]=c->r[1]+0x0000001Cu; // 803A904C
  c->r[3]=c->r[3]+c->r[0]; // 803A9050
  c->r[0]=c->r[3]+0x00000004u; // 803A9054
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 803A9058
  c->lr=0x803A9060u; f_803B50B4(c); // 803A905C
L_803A9060:;
  c->r[0]=R32(c->r[31]+0x00000064u); // 803A9060
  cmps(c,0,(int32_t)c->r[0],0); // 803A9064
  if (!crb(c,2)) { IRQCHK(c); goto L_803A9008; } // 803A9068
  c->r[27]=c->r[1]+0x00000638u; // 803A906C
  c->r[30]=c->r[31]+0x00000068u; // 803A9070
  c->r[28]=0u+0x00000000u; // 803A9074
L_803A9078:;
  c->r[0]=R32(c->r[27]+0x00000000u); // 803A9078
  cmps(c,0,(int32_t)c->r[0],0); // 803A907C
  if (crb(c,2)) { goto L_803A90BC; } // 803A9080
  goto L_803A90B0; // 803A9084
L_803A9088:;
  c->r[26]=R32(c->r[27]+0x00000004u); // 803A9088
  c->r[3]=c->r[27]|c->r[27]; // 803A908C
  c->r[4]=c->r[1]+0x00000020u; // 803A9090
  W32(c->r[1]+0x00000020u,c->r[26]); // 803A9094
  c->lr=0x803A909Cu; f_803B5028(c); // 803A9098
  W32(c->r[1]+0x00000024u,c->r[30]); // 803A909C
  c->r[5]=c->r[26]|c->r[26]; // 803A90A0
  c->r[3]=c->r[31]+0x00000064u; // 803A90A4
  c->r[4]=c->r[1]+0x00000024u; // 803A90A8
  c->lr=0x803A90B0u; f_803B50B4(c); // 803A90AC
L_803A90B0:;
  c->r[0]=R32(c->r[27]+0x00000000u); // 803A90B0
  cmps(c,0,(int32_t)c->r[0],0); // 803A90B4
  if (!crb(c,2)) { IRQCHK(c); goto L_803A9088; } // 803A90B8
L_803A90BC:;
  c->r[28]=c->r[28]+0x00000001u; // 803A90BC
  c->r[27]=c->r[27]+0x0000000Cu; // 803A90C0
  cmps(c,0,(int32_t)c->r[28],128); // 803A90C4
  if (crb(c,0)) { IRQCHK(c); goto L_803A9078; } // 803A90C8
  c->r[3]=c->r[29]|c->r[29]; // 803A90CC
  c->lr=0x803A90D4u; f_8025FDA8(c); // 803A90D0
  c->r[4]=0u+0x803B0000u; // 803A90D4
  c->r[3]=c->r[1]+0x00000638u; // 803A90D8
  c->r[4]=c->r[4]+0xFFFF8674u; // 803A90DC
  c->r[5]=0u+0x0000000Cu; // 803A90E0
  c->r[6]=0u+0x00000080u; // 803A90E4
  c->lr=0x803A90ECu; f_80289C2C(c); // 803A90E8
  c->r[4]=0u+0x803B0000u; // 803A90EC
  c->r[5]=0u+0x803B0000u; // 803A90F0
  c->r[3]=c->r[1]+0x00000038u; // 803A90F4
  c->r[6]=0u+0x0000000Cu; // 803A90F8
  c->r[4]=c->r[4]+0xFFFF86CCu; // 803A90FC
  c->r[5]=c->r[5]+0xFFFF86ECu; // 803A9100
  c->r[7]=0u+0x00000080u; // 803A9104
  c->lr=0x803A910Cu; f_80289B34(c); // 803A9108
  c->r[29]=c->r[31]+0x00000098u; // 803A910C
  c->r[3]=c->r[29]|c->r[29]; // 803A9110
  c->lr=0x803A9118u; f_8025FCCC(c); // 803A9114
  goto L_803A9174; // 803A9118
L_803A911C:;
  c->r[26]=R32(c->r[31]+0x00000090u); // 803A911C
  c->r[3]=c->r[31]+0x0000008Cu; // 803A9120
  c->r[4]=c->r[1]+0x00000008u; // 803A9124
  W32(c->r[1]+0x00000008u,c->r[26]); // 803A9128
  c->lr=0x803A9130u; f_803B5028(c); // 803A912C
  c->r[3]=R8(c->r[26]+0xFFFFFFBCu); // 803A9130
  c->r[0]=R32(c->r[26]+0xFFFFFF88u); // 803A9134
  c->r[3]=c->r[3]+c->r[0]; // 803A9138
  cmps(c,0,(int32_t)c->r[3],127); // 803A913C
  if (!crb(c,1)) { goto L_803A914C; } // 803A9140
  c->r[0]=0u+0x0000007Fu; // 803A9144
  goto L_803A9154; // 803A9148
L_803A914C:;
  c->r[0]=sraw(c,c->r[3],31); // 803A914C
  c->r[0]=c->r[3]&~c->r[0]; // 803A9150
L_803A9154:;
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)12); // 803A9154
  c->r[3]=c->r[1]+0x00000038u; // 803A9158
  c->r[5]=c->r[26]|c->r[26]; // 803A915C
  c->r[4]=c->r[1]+0x0000000Cu; // 803A9160
  c->r[3]=c->r[3]+c->r[0]; // 803A9164
  c->r[0]=c->r[3]+0x00000004u; // 803A9168
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 803A916C
  c->lr=0x803A9174u; f_803B50B4(c); // 803A9170
L_803A9174:;
  c->r[0]=R32(c->r[31]+0x0000008Cu); // 803A9174
  cmps(c,0,(int32_t)c->r[0],0); // 803A9178
  if (!crb(c,2)) { IRQCHK(c); goto L_803A911C; } // 803A917C
  c->r[27]=c->r[1]+0x00000038u; // 803A9180
  c->r[30]=c->r[31]+0x00000090u; // 803A9184
  c->r[28]=0u+0x00000000u; // 803A9188
L_803A918C:;
  c->r[0]=R32(c->r[27]+0x00000000u); // 803A918C
  cmps(c,0,(int32_t)c->r[0],0); // 803A9190
  if (crb(c,2)) { goto L_803A91D0; } // 803A9194
  goto L_803A91C4; // 803A9198
L_803A919C:;
  c->r[26]=R32(c->r[27]+0x00000004u); // 803A919C
  c->r[3]=c->r[27]|c->r[27]; // 803A91A0
  c->r[4]=c->r[1]+0x00000010u; // 803A91A4
  W32(c->r[1]+0x00000010u,c->r[26]); // 803A91A8
  c->lr=0x803A91B0u; f_803B5028(c); // 803A91AC
  W32(c->r[1]+0x00000014u,c->r[30]); // 803A91B0
  c->r[5]=c->r[26]|c->r[26]; // 803A91B4
  c->r[3]=c->r[31]+0x0000008Cu; // 803A91B8
  c->r[4]=c->r[1]+0x00000014u; // 803A91BC
  c->lr=0x803A91C4u; f_803B50B4(c); // 803A91C0
L_803A91C4:;
  c->r[0]=R32(c->r[27]+0x00000000u); // 803A91C4
  cmps(c,0,(int32_t)c->r[0],0); // 803A91C8
  if (!crb(c,2)) { IRQCHK(c); goto L_803A919C; } // 803A91CC
L_803A91D0:;
  c->r[28]=c->r[28]+0x00000001u; // 803A91D0
  c->r[27]=c->r[27]+0x0000000Cu; // 803A91D4
  cmps(c,0,(int32_t)c->r[28],128); // 803A91D8
  if (crb(c,0)) { IRQCHK(c); goto L_803A918C; } // 803A91DC
  c->r[3]=c->r[29]|c->r[29]; // 803A91E0
  c->lr=0x803A91E8u; f_8025FDA8(c); // 803A91E4
  c->r[4]=0u+0x803B0000u; // 803A91E8
  c->r[3]=c->r[1]+0x00000038u; // 803A91EC
  c->r[4]=c->r[4]+0xFFFF86ECu; // 803A91F0
  c->r[5]=0u+0x0000000Cu; // 803A91F4
  c->r[6]=0u+0x00000080u; // 803A91F8
  c->lr=0x803A9200u; f_80289C2C(c); // 803A91FC
  c->r[11]=c->r[1]+0x00001250u; // 803A9200
  c->lr=0x803A9208u; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 803A9204
  c->r[0]=R32(c->r[1]+0x00001254u); // 803A9208
  c->lr=c->r[0]; // 803A920C
  c->r[1]=c->r[1]+0x00001250u; // 803A9210
  return; // 803A9214
}

// fn_803A9218
void f_803A9218(Ctx* __restrict c) {
  trace_call(0x803A9218u);
  c->r[3]=R32(c->r[3]+0x00000010u); // 803A9218
  return; // 803A921C
}

// fn_803A9220
void f_803A9220(Ctx* __restrict c) {
  trace_call(0x803A9220u);
  c->r[0]=(uint32_t)((int32_t)c->r[4]*(int32_t)96); // 803A9220
  c->r[3]=R32(c->r[3]+0x00000034u); // 803A9224
  c->r[3]=c->r[3]+c->r[0]; // 803A9228
  return; // 803A922C
}

// fn_803A9230
void f_803A9230(Ctx* __restrict c) {
  trace_call(0x803A9230u);
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803A9230
  c->r[0]=c->lr; // 803A9234
  W32(c->r[1]+0x00000054u,c->r[0]); // 803A9238
  W32(c->r[1]+0x0000004Cu,c->r[31]); // 803A923C
  W32(c->r[1]+0x00000048u,c->r[30]); // 803A9240
  W32(c->r[1]+0x00000044u,c->r[29]); // 803A9244
  c->r[29]=c->r[4]|c->r[4]; // 803A9248
  W32(c->r[1]+0x00000040u,c->r[28]); // 803A924C
  c->r[28]=c->r[3]|c->r[3]; // 803A9250
  c->r[3]=R32(c->r[3]+0x00000010u); // 803A9254
  c->r[12]=R32(c->r[3]+0x00000000u); // 803A9258
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 803A925C
  c->ctr=c->r[12]; // 803A9260
  if (true) { c->lr=0x803A9268u; dispatch(c,c->ctr); } // 803A9264
  cmps(c,0,(int32_t)c->r[3],0); // 803A9268
  if (crb(c,2)) { goto L_803A9274; } // 803A926C
  goto L_803A935C; // 803A9270
L_803A9274:;
  c->r[3]=R32(c->r[28]+0x00000018u); // 803A9274
  cmps(c,0,(int32_t)c->r[3],0); // 803A9278
  if (crb(c,2)) { goto L_803A92A0; } // 803A927C
  c->r[12]=R32(c->r[3]+0x00000000u); // 803A9280
  c->r[4]=c->r[29]|c->r[29]; // 803A9284
  c->r[12]=R32(c->r[12]+0x00000008u); // 803A9288
  c->ctr=c->r[12]; // 803A928C
  if (true) { c->lr=0x803A9294u; dispatch(c,c->ctr); } // 803A9290
  cmps(c,0,(int32_t)c->r[3],0); // 803A9294
  if (crb(c,2)) { goto L_803A92A0; } // 803A9298
  goto L_803A935C; // 803A929C
L_803A92A0:;
  c->r[3]=R32(c->r[28]+0x00000010u); // 803A92A0
  c->r[4]=c->r[29]|c->r[29]; // 803A92A4
  c->r[5]=c->r[1]+0x00000010u; // 803A92A8
  c->lr=0x803A92B0u; f_803A6804(c); // 803A92AC
  cmps(c,0,(int32_t)c->r[3],0); // 803A92B0
  if (!crb(c,2)) { goto L_803A92C0; } // 803A92B4
  c->r[3]=0u+0x00000000u; // 803A92B8
  goto L_803A935C; // 803A92BC
L_803A92C0:;
  c->r[30]=0u+0x00000000u; // 803A92C0
  goto L_803A934C; // 803A92C4
L_803A92C8:;
  c->r[3]=R32(c->r[28]+0x00000010u); // 803A92C8
  c->r[4]=c->r[29]|c->r[29]; // 803A92CC
  c->r[5]=c->r[30]|c->r[30]; // 803A92D0
  c->r[6]=c->r[1]+0x00000008u; // 803A92D4
  c->lr=0x803A92DCu; f_803A680C(c); // 803A92D8
  cmps(c,0,(int32_t)c->r[3],0); // 803A92DC
  if (crb(c,2)) { goto L_803A9348; } // 803A92E0
  c->r[3]=R32(c->r[28]+0x00000014u); // 803A92E4
  c->r[4]=R32(c->r[1]+0x00000008u); // 803A92E8
  cmps(c,0,(int32_t)c->r[3],0); // 803A92EC
  if (!crb(c,2)) { goto L_803A92FC; } // 803A92F0
  c->r[31]=0u+0x00000000u; // 803A92F4
  goto L_803A931C; // 803A92F8
L_803A92FC:;
  c->r[0]=R32(c->r[3]+0x00000000u); // 803A92FC
  cmpu(c,0,c->r[4],c->r[0]); // 803A9300
  if (crb(c,0)) { goto L_803A9310; } // 803A9304
  c->r[31]=0u+0x00000000u; // 803A9308
  goto L_803A931C; // 803A930C
L_803A9310:;
  c->r[0]=rotl(c->r[4],3)&0xFFFFFFF8u; // 803A9310
  c->r[3]=c->r[3]+c->r[0]; // 803A9314
  c->r[31]=R32(c->r[3]+0x00000004u); // 803A9318
L_803A931C:;
  cmps(c,0,(int32_t)c->r[31],0); // 803A931C
  if (crb(c,2)) { goto L_803A9348; } // 803A9320
  c->r[3]=R32(c->r[28]+0x00000010u); // 803A9324
  c->r[6]=c->r[1]+0x00000020u; // 803A9328
  c->r[5]=R32(c->r[1]+0x0000000Cu); // 803A932C
  c->lr=0x803A9334u; f_803A67FC(c); // 803A9330
  cmps(c,0,(int32_t)c->r[3],0); // 803A9334
  if (crb(c,2)) { goto L_803A9348; } // 803A9338
  c->r[0]=R32(c->r[1]+0x00000024u); // 803A933C
  c->r[3]=c->r[31]+c->r[0]; // 803A9340
  goto L_803A935C; // 803A9344
L_803A9348:;
  c->r[30]=c->r[30]+0x00000001u; // 803A9348
L_803A934C:;
  c->r[0]=R32(c->r[1]+0x0000001Cu); // 803A934C
  cmpu(c,0,c->r[30],c->r[0]); // 803A9350
  if (crb(c,0)) { IRQCHK(c); goto L_803A92C8; } // 803A9354
  c->r[3]=0u+0x00000000u; // 803A9358
L_803A935C:;
  c->r[0]=R32(c->r[1]+0x00000054u); // 803A935C
  c->r[31]=R32(c->r[1]+0x0000004Cu); // 803A9360
  c->r[30]=R32(c->r[1]+0x00000048u); // 803A9364
  c->r[29]=R32(c->r[1]+0x00000044u); // 803A9368
  c->r[28]=R32(c->r[1]+0x00000040u); // 803A936C
  c->lr=c->r[0]; // 803A9370
  c->r[1]=c->r[1]+0x00000050u; // 803A9374
  return; // 803A9378
}

// fn_803A937C
void f_803A937C(Ctx* __restrict c) {
  trace_call(0x803A937Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803A937C
  c->r[0]=c->lr; // 803A9380
  W32(c->r[1]+0x00000054u,c->r[0]); // 803A9384
  W32(c->r[1]+0x0000004Cu,c->r[31]); // 803A9388
  W32(c->r[1]+0x00000048u,c->r[30]); // 803A938C
  W32(c->r[1]+0x00000044u,c->r[29]); // 803A9390
  c->r[29]=c->r[4]|c->r[4]; // 803A9394
  W32(c->r[1]+0x00000040u,c->r[28]); // 803A9398
  c->r[28]=c->r[3]|c->r[3]; // 803A939C
  c->r[3]=R32(c->r[3]+0x00000010u); // 803A93A0
  c->r[12]=R32(c->r[3]+0x00000000u); // 803A93A4
  c->r[12]=R32(c->r[12]+0x00000010u); // 803A93A8
  c->ctr=c->r[12]; // 803A93AC
  if (true) { c->lr=0x803A93B4u; dispatch(c,c->ctr); } // 803A93B0
  cmps(c,0,(int32_t)c->r[3],0); // 803A93B4
  if (crb(c,2)) { goto L_803A93C0; } // 803A93B8
  goto L_803A94A8; // 803A93BC
L_803A93C0:;
  c->r[3]=R32(c->r[28]+0x00000018u); // 803A93C0
  cmps(c,0,(int32_t)c->r[3],0); // 803A93C4
  if (crb(c,2)) { goto L_803A93EC; } // 803A93C8
  c->r[12]=R32(c->r[3]+0x00000000u); // 803A93CC
  c->r[4]=c->r[29]|c->r[29]; // 803A93D0
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 803A93D4
  c->ctr=c->r[12]; // 803A93D8
  if (true) { c->lr=0x803A93E0u; dispatch(c,c->ctr); } // 803A93DC
  cmps(c,0,(int32_t)c->r[3],0); // 803A93E0
  if (crb(c,2)) { goto L_803A93EC; } // 803A93E4
  goto L_803A94A8; // 803A93E8
L_803A93EC:;
  c->r[3]=R32(c->r[28]+0x00000010u); // 803A93EC
  c->r[4]=c->r[29]|c->r[29]; // 803A93F0
  c->r[5]=c->r[1]+0x00000010u; // 803A93F4
  c->lr=0x803A93FCu; f_803A6804(c); // 803A93F8
  cmps(c,0,(int32_t)c->r[3],0); // 803A93FC
  if (!crb(c,2)) { goto L_803A940C; } // 803A9400
  c->r[3]=0u+0x00000000u; // 803A9404
  goto L_803A94A8; // 803A9408
L_803A940C:;
  c->r[30]=0u+0x00000000u; // 803A940C
  goto L_803A9498; // 803A9410
L_803A9414:;
  c->r[3]=R32(c->r[28]+0x00000010u); // 803A9414
  c->r[4]=c->r[29]|c->r[29]; // 803A9418
  c->r[5]=c->r[30]|c->r[30]; // 803A941C
  c->r[6]=c->r[1]+0x00000008u; // 803A9420
  c->lr=0x803A9428u; f_803A680C(c); // 803A9424
  cmps(c,0,(int32_t)c->r[3],0); // 803A9428
  if (crb(c,2)) { goto L_803A9494; } // 803A942C
  c->r[3]=R32(c->r[28]+0x00000014u); // 803A9430
  c->r[4]=R32(c->r[1]+0x00000008u); // 803A9434
  cmps(c,0,(int32_t)c->r[3],0); // 803A9438
  if (!crb(c,2)) { goto L_803A9448; } // 803A943C
  c->r[31]=0u+0x00000000u; // 803A9440
  goto L_803A9468; // 803A9444
L_803A9448:;
  c->r[0]=R32(c->r[3]+0x00000000u); // 803A9448
  cmpu(c,0,c->r[4],c->r[0]); // 803A944C
  if (crb(c,0)) { goto L_803A945C; } // 803A9450
  c->r[31]=0u+0x00000000u; // 803A9454
  goto L_803A9468; // 803A9458
L_803A945C:;
  c->r[0]=rotl(c->r[4],3)&0xFFFFFFF8u; // 803A945C
  c->r[3]=c->r[3]+c->r[0]; // 803A9460
  c->r[31]=R32(c->r[3]+0x00000008u); // 803A9464
L_803A9468:;
  cmps(c,0,(int32_t)c->r[31],0); // 803A9468
  if (crb(c,2)) { goto L_803A9494; } // 803A946C
  c->r[3]=R32(c->r[28]+0x00000010u); // 803A9470
  c->r[6]=c->r[1]+0x00000020u; // 803A9474
  c->r[5]=R32(c->r[1]+0x0000000Cu); // 803A9478
  c->lr=0x803A9480u; f_803A67FC(c); // 803A947C
  cmps(c,0,(int32_t)c->r[3],0); // 803A9480
  if (crb(c,2)) { goto L_803A9494; } // 803A9484
  c->r[0]=R32(c->r[1]+0x0000002Cu); // 803A9488
  c->r[3]=c->r[31]+c->r[0]; // 803A948C
  goto L_803A94A8; // 803A9490
L_803A9494:;
  c->r[30]=c->r[30]+0x00000001u; // 803A9494
L_803A9498:;
  c->r[0]=R32(c->r[1]+0x0000001Cu); // 803A9498
  cmpu(c,0,c->r[30],c->r[0]); // 803A949C
  if (crb(c,0)) { IRQCHK(c); goto L_803A9414; } // 803A94A0
  c->r[3]=0u+0x00000000u; // 803A94A4
L_803A94A8:;
  c->r[0]=R32(c->r[1]+0x00000054u); // 803A94A8
  c->r[31]=R32(c->r[1]+0x0000004Cu); // 803A94AC
  c->r[30]=R32(c->r[1]+0x00000048u); // 803A94B0
  c->r[29]=R32(c->r[1]+0x00000044u); // 803A94B4
  c->r[28]=R32(c->r[1]+0x00000040u); // 803A94B8
  c->lr=c->r[0]; // 803A94BC
  c->r[1]=c->r[1]+0x00000050u; // 803A94C0
  return; // 803A94C4
}

// fn_803A94C8
void f_803A94C8(Ctx* __restrict c) {
  trace_call(0x803A94C8u);
  {uint32_t ea=c->r[1]+0xFFFFFF90u; W32(ea,c->r[1]); c->r[1]=ea;} // 803A94C8
  c->r[0]=c->lr; // 803A94CC
  W32(c->r[1]+0x00000074u,c->r[0]); // 803A94D0
  c->r[11]=c->r[1]+0x00000070u; // 803A94D4
  c->lr=0x803A94DCu; { W32(c->r[11]+0xFFFFFFD8u,c->r[22]); W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 803A94D8
  c->r[0]=R32(c->r[3]+0x00000010u); // 803A94DC
  c->r[27]=c->r[3]|c->r[3]; // 803A94E0
  c->r[28]=c->r[4]|c->r[4]; // 803A94E4
  c->r[29]=c->r[5]|c->r[5]; // 803A94E8
  cmps(c,0,(int32_t)c->r[0],0); // 803A94EC
  c->r[30]=c->r[6]|c->r[6]; // 803A94F0
  c->r[31]=c->r[7]|c->r[7]; // 803A94F4
  c->r[26]=c->r[8]|c->r[8]; // 803A94F8
  c->r[25]=c->r[9]|c->r[9]; // 803A94FC
  if (!crb(c,2)) { goto L_803A950C; } // 803A9500
  c->r[3]=0u+0x00000000u; // 803A9504
  goto L_803A9514; // 803A9508
L_803A950C:;
  c->r[3]=c->r[0]|c->r[0]; // 803A950C
  c->lr=0x803A9514u; f_803A6748(c); // 803A9510
L_803A9514:;
  cmps(c,0,(int32_t)c->r[3],0); // 803A9514
  if (!crb(c,2)) { goto L_803A9524; } // 803A9518
  c->r[3]=0u+0x00000007u; // 803A951C
  goto L_803A97F8; // 803A9520
L_803A9524:;
  c->r[0]=R32(c->r[28]+0x00000000u); // 803A9524
  cmps(c,0,(int32_t)c->r[0],0); // 803A9528
  if (crb(c,2)) { goto L_803A9538; } // 803A952C
  c->r[3]=c->r[28]|c->r[28]; // 803A9530
  c->lr=0x803A9538u; f_803AA360(c); // 803A9534
L_803A9538:;
  c->r[3]=R32(c->r[27]+0x00000010u); // 803A9538
  c->r[4]=c->r[29]|c->r[29]; // 803A953C
  c->r[5]=c->r[1]+0x0000002Cu; // 803A9540
  c->lr=0x803A9548u; f_803A67B4(c); // 803A9544
  cmps(c,0,(int32_t)c->r[3],0); // 803A9548
  if (!crb(c,2)) { goto L_803A9558; } // 803A954C
  c->r[3]=0u+0x00000003u; // 803A9550
  goto L_803A97F8; // 803A9554
L_803A9558:;
  cmps(c,0,(int32_t)c->r[25],0); // 803A9558
  c->r[4]=R32(c->r[1]+0x00000030u); // 803A955C
  c->r[24]=R32(c->r[1]+0x00000034u); // 803A9560
  c->r[23]=0u+0x00000000u; // 803A9564
  c->r[22]=0u+0x00000000u; // 803A9568
  if (crb(c,2)) { goto L_803A959C; } // 803A956C
  c->r[3]=R32(c->r[25]+0x00000000u); // 803A9570
  c->r[0]=rotl(c->r[3],0)&0x00000001u; cr0(c,c->r[0]); // 803A9574
  if (crb(c,2)) { goto L_803A9584; } // 803A9578
  c->r[23]=R32(c->r[25]+0x00000004u); // 803A957C
  c->r[22]=R32(c->r[25]+0x00000008u); // 803A9580
L_803A9584:;
  c->r[0]=rotl(c->r[3],0)&0x00000002u; cr0(c,c->r[0]); // 803A9584
  if (crb(c,2)) { goto L_803A9590; } // 803A9588
  c->r[4]=R32(c->r[25]+0x0000000Cu); // 803A958C
L_803A9590:;
  c->r[0]=rotl(c->r[3],0)&0x00000004u; cr0(c,c->r[0]); // 803A9590
  if (crb(c,2)) { goto L_803A959C; } // 803A9594
  c->r[24]=R32(c->r[25]+0x00000010u); // 803A9598
L_803A959C:;
  cmps(c,0,(int32_t)c->r[26],0); // 803A959C
  c->r[26]=c->r[24]|c->r[24]; // 803A95A0
  if (crb(c,2)) { goto L_803A95AC; } // 803A95A4
  c->r[26]=c->r[24]+0xFFFFFFFFu; // 803A95A8
L_803A95AC:;
  c->r[0]=(uint32_t)((int32_t)c->r[4]*(int32_t)96); // 803A95AC
  c->r[5]=R32(c->r[27]+0x00000034u); // 803A95B0
  c->r[3]=R32(c->r[27]+0x00000010u); // 803A95B4
  c->r[4]=c->r[29]|c->r[29]; // 803A95B8
  c->r[25]=c->r[5]+c->r[0]; // 803A95BC
  c->lr=0x803A95C4u; f_803A67AC(c); // 803A95C0
  cmps(c,0,(int32_t)c->r[3],2); // 803A95C4
  if (crb(c,2)) { goto L_803A9690; } // 803A95C8
  if (!crb(c,0)) { goto L_803A95DC; } // 803A95CC
  cmps(c,0,(int32_t)c->r[3],1); // 803A95D0
  if (!crb(c,0)) { goto L_803A95E8; } // 803A95D4
  goto L_803A97E0; // 803A95D8
L_803A95DC:;
  cmps(c,0,(int32_t)c->r[3],4); // 803A95DC
  if (!crb(c,0)) { goto L_803A97E0; } // 803A95E0
  goto L_803A9738; // 803A95E4
L_803A95E8:;
  c->r[3]=R32(c->r[27]+0x00000010u); // 803A95E8
  c->r[4]=c->r[29]|c->r[29]; // 803A95EC
  c->r[5]=c->r[1]+0x00000018u; // 803A95F0
  c->lr=0x803A95F8u; f_803A67BC(c); // 803A95F4
  cmps(c,0,(int32_t)c->r[3],0); // 803A95F8
  if (!crb(c,2)) { goto L_803A9608; } // 803A95FC
  c->r[3]=0u+0x00000003u; // 803A9600
  goto L_803A97F8; // 803A9604
L_803A9608:;
  c->r[3]=c->r[25]|c->r[25]; // 803A9608
  c->r[4]=c->r[24]|c->r[24]; // 803A960C
  c->r[5]=c->r[26]|c->r[26]; // 803A9610
  c->r[6]=c->r[30]|c->r[30]; // 803A9614
  c->r[7]=c->r[31]|c->r[31]; // 803A9618
  c->r[8]=c->r[29]|c->r[29]; // 803A961C
  c->r[9]=c->r[27]+0x00000038u; // 803A9620
  c->lr=0x803A9628u; f_803AABD8(c); // 803A9624
  cmps(c,0,(int32_t)c->r[3],0); // 803A9628
  c->r[24]=c->r[3]|c->r[3]; // 803A962C
  if (!crb(c,2)) { goto L_803A963C; } // 803A9630
  c->r[3]=0u+0x00000001u; // 803A9634
  goto L_803A97F8; // 803A9638
L_803A963C:;
  c->r[4]=c->r[29]|c->r[29]; // 803A963C
  c->lr=0x803A9644u; f_8039CBD0(c); // 803A9640
  c->r[3]=c->r[27]|c->r[27]; // 803A9644
  c->r[4]=c->r[24]|c->r[24]; // 803A9648
  c->r[7]=c->r[23]|c->r[23]; // 803A964C
  c->r[8]=c->r[22]|c->r[22]; // 803A9650
  c->r[5]=c->r[1]+0x0000002Cu; // 803A9654
  c->r[6]=c->r[1]+0x00000018u; // 803A9658
  c->r[9]=0u+0x00000001u; // 803A965C
  c->lr=0x803A9664u; f_803A9810(c); // 803A9660
  cmps(c,0,(int32_t)c->r[3],0); // 803A9664
  c->r[22]=c->r[3]|c->r[3]; // 803A9668
  if (crb(c,2)) { goto L_803A97E8; } // 803A966C
  c->r[12]=R32(c->r[24]+0x00000000u); // 803A9670
  c->r[3]=c->r[24]|c->r[24]; // 803A9674
  c->r[12]=R32(c->r[12]+0x00000028u); // 803A9678
  c->ctr=c->r[12]; // 803A967C
  if (true) { c->lr=0x803A9684u; dispatch(c,c->ctr); } // 803A9680
  c->r[3]=c->r[22]|c->r[22]; // 803A9684
  goto L_803A97F8; // 803A9688
  goto L_803A97E8; // 803A968C
L_803A9690:;
  c->r[3]=R32(c->r[27]+0x00000010u); // 803A9690
  c->r[4]=c->r[29]|c->r[29]; // 803A9694
  c->r[5]=c->r[1]+0x00000008u; // 803A9698
  c->lr=0x803A96A0u; f_803A67C4(c); // 803A969C
  cmps(c,0,(int32_t)c->r[3],0); // 803A96A0
  if (!crb(c,2)) { goto L_803A96B0; } // 803A96A4
  c->r[3]=0u+0x00000003u; // 803A96A8
  goto L_803A97F8; // 803A96AC
L_803A96B0:;
  c->r[3]=c->r[25]|c->r[25]; // 803A96B0
  c->r[4]=c->r[24]|c->r[24]; // 803A96B4
  c->r[5]=c->r[26]|c->r[26]; // 803A96B8
  c->r[6]=c->r[30]|c->r[30]; // 803A96BC
  c->r[7]=c->r[31]|c->r[31]; // 803A96C0
  c->r[8]=c->r[29]|c->r[29]; // 803A96C4
  c->r[9]=c->r[27]+0x00000060u; // 803A96C8
  c->lr=0x803A96D0u; f_803AAF90(c); // 803A96CC
  cmps(c,0,(int32_t)c->r[3],0); // 803A96D0
  c->r[24]=c->r[3]|c->r[3]; // 803A96D4
  if (!crb(c,2)) { goto L_803A96E4; } // 803A96D8
  c->r[3]=0u+0x00000001u; // 803A96DC
  goto L_803A97F8; // 803A96E0
L_803A96E4:;
  c->r[4]=c->r[29]|c->r[29]; // 803A96E4
  c->lr=0x803A96ECu; f_8039CBD0(c); // 803A96E8
  c->r[3]=c->r[27]|c->r[27]; // 803A96EC
  c->r[4]=c->r[24]|c->r[24]; // 803A96F0
  c->r[7]=c->r[23]|c->r[23]; // 803A96F4
  c->r[8]=c->r[22]|c->r[22]; // 803A96F8
  c->r[5]=c->r[1]+0x0000002Cu; // 803A96FC
  c->r[6]=c->r[1]+0x00000008u; // 803A9700
  c->r[9]=0u+0x00000001u; // 803A9704
  c->lr=0x803A970Cu; f_803A9B14(c); // 803A9708
  cmps(c,0,(int32_t)c->r[3],0); // 803A970C
  c->r[22]=c->r[3]|c->r[3]; // 803A9710
  if (crb(c,2)) { goto L_803A97E8; } // 803A9714
  c->r[12]=R32(c->r[24]+0x00000000u); // 803A9718
  c->r[3]=c->r[24]|c->r[24]; // 803A971C
  c->r[12]=R32(c->r[12]+0x00000028u); // 803A9720
  c->ctr=c->r[12]; // 803A9724
  if (true) { c->lr=0x803A972Cu; dispatch(c,c->ctr); } // 803A9728
  c->r[3]=c->r[22]|c->r[22]; // 803A972C
  goto L_803A97F8; // 803A9730
  goto L_803A97E8; // 803A9734
L_803A9738:;
  c->r[3]=R32(c->r[27]+0x00000010u); // 803A9738
  c->r[4]=c->r[29]|c->r[29]; // 803A973C
  c->r[5]=c->r[1]+0x0000000Cu; // 803A9740
  c->lr=0x803A9748u; f_803A67CC(c); // 803A9744
  cmps(c,0,(int32_t)c->r[3],0); // 803A9748
  if (!crb(c,2)) { goto L_803A9758; } // 803A974C
  c->r[3]=0u+0x00000003u; // 803A9750
  goto L_803A97F8; // 803A9754
L_803A9758:;
  c->r[3]=c->r[25]|c->r[25]; // 803A9758
  c->r[4]=c->r[24]|c->r[24]; // 803A975C
  c->r[5]=c->r[26]|c->r[26]; // 803A9760
  c->r[6]=c->r[30]|c->r[30]; // 803A9764
  c->r[7]=c->r[31]|c->r[31]; // 803A9768
  c->r[8]=c->r[29]|c->r[29]; // 803A976C
  c->r[9]=c->r[27]+0x00000088u; // 803A9770
  c->lr=0x803A9778u; f_803AB348(c); // 803A9774
  cmps(c,0,(int32_t)c->r[3],0); // 803A9778
  c->r[24]=c->r[3]|c->r[3]; // 803A977C
  if (!crb(c,2)) { goto L_803A978C; } // 803A9780
  c->r[3]=0u+0x00000001u; // 803A9784
  goto L_803A97F8; // 803A9788
L_803A978C:;
  c->r[4]=c->r[29]|c->r[29]; // 803A978C
  c->lr=0x803A9794u; f_8039CBD0(c); // 803A9790
  c->r[3]=c->r[27]|c->r[27]; // 803A9794
  c->r[4]=c->r[24]|c->r[24]; // 803A9798
  c->r[7]=c->r[23]|c->r[23]; // 803A979C
  c->r[8]=c->r[22]|c->r[22]; // 803A97A0
  c->r[5]=c->r[1]+0x0000002Cu; // 803A97A4
  c->r[6]=c->r[1]+0x0000000Cu; // 803A97A8
  c->r[9]=0u+0x00000001u; // 803A97AC
  c->lr=0x803A97B4u; f_803A9C74(c); // 803A97B0
  cmps(c,0,(int32_t)c->r[3],0); // 803A97B4
  c->r[22]=c->r[3]|c->r[3]; // 803A97B8
  if (crb(c,2)) { goto L_803A97E8; } // 803A97BC
  c->r[12]=R32(c->r[24]+0x00000000u); // 803A97C0
  c->r[3]=c->r[24]|c->r[24]; // 803A97C4
  c->r[12]=R32(c->r[12]+0x00000028u); // 803A97C8
  c->ctr=c->r[12]; // 803A97CC
  if (true) { c->lr=0x803A97D4u; dispatch(c,c->ctr); } // 803A97D0
  c->r[3]=c->r[22]|c->r[22]; // 803A97D4
  goto L_803A97F8; // 803A97D8
  goto L_803A97E8; // 803A97DC
L_803A97E0:;
  c->r[3]=0u+0x00000003u; // 803A97E0
  goto L_803A97F8; // 803A97E4
L_803A97E8:;
  c->r[3]=c->r[28]|c->r[28]; // 803A97E8
  c->r[4]=c->r[24]|c->r[24]; // 803A97EC
  c->lr=0x803A97F4u; f_803AA314(c); // 803A97F0
  c->r[3]=0u+0x00000000u; // 803A97F4
L_803A97F8:;
  c->r[11]=c->r[1]+0x00000070u; // 803A97F8
  c->lr=0x803A9800u; { c->r[22]=R32(c->r[11]+0xFFFFFFD8u); c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 803A97FC
  c->r[0]=R32(c->r[1]+0x00000074u); // 803A9800
  c->lr=c->r[0]; // 803A9804
  c->r[1]=c->r[1]+0x00000070u; // 803A9808
  return; // 803A980C
}

// fn_803A9810
void f_803A9810(Ctx* __restrict c) {
  trace_call(0x803A9810u);
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803A9810
  c->r[0]=c->lr; // 803A9814
  W32(c->r[1]+0x00000054u,c->r[0]); // 803A9818
  c->r[11]=c->r[1]+0x00000050u; // 803A981C
  c->lr=0x803A9824u; { W32(c->r[11]+0xFFFFFFD4u,c->r[21]); W32(c->r[11]+0xFFFFFFD8u,c->r[22]); W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 803A9820
  c->r[22]=c->r[4]|c->r[4]; // 803A9824
  c->r[4]=R32(c->r[5]+0x00000000u); // 803A9828
  c->r[21]=c->r[3]|c->r[3]; // 803A982C
  c->r[23]=c->r[5]|c->r[5]; // 803A9830
  c->r[24]=c->r[6]|c->r[6]; // 803A9834
  c->r[25]=c->r[7]|c->r[7]; // 803A9838
  c->r[26]=c->r[8]|c->r[8]; // 803A983C
  c->r[27]=c->r[9]|c->r[9]; // 803A9840
  c->lr=0x803A9848u; f_803A9230(c); // 803A9844
  cmps(c,0,(int32_t)c->r[3],0); // 803A9848
  c->r[29]=c->r[3]|c->r[3]; // 803A984C
  c->r[28]=0u+0x00000000u; // 803A9850
  if (!crb(c,2)) { goto L_803A98EC; } // 803A9854
  c->r[31]=R32(c->r[22]+0x00000004u); // 803A9858
  cmps(c,0,(int32_t)c->r[31],0); // 803A985C
  if (!crb(c,2)) { goto L_803A986C; } // 803A9860
  c->r[3]=0u+0x00000004u; // 803A9864
  goto L_803A9AFC; // 803A9868
L_803A986C:;
  c->r[3]=R32(c->r[21]+0x00000010u); // 803A986C
  c->r[5]=c->r[22]+0x00000210u; // 803A9870
  c->r[4]=R32(c->r[23]+0x00000000u); // 803A9874
  c->r[6]=0u+0x00000200u; // 803A9878
  c->lr=0x803A9880u; f_803A6814(c); // 803A987C
  cmps(c,0,(int32_t)c->r[3],0); // 803A9880
  c->r[28]=c->r[3]|c->r[3]; // 803A9884
  if (!crb(c,2)) { goto L_803A9894; } // 803A9888
  c->r[3]=0u+0x00000006u; // 803A988C
  goto L_803A9AFC; // 803A9890
L_803A9894:;
  c->r[30]=c->r[31]+0x00000004u; // 803A9894
  c->r[3]=c->r[30]|c->r[30]; // 803A9898
  c->lr=0x803A98A0u; f_8025FCCC(c); // 803A989C
  c->r[3]=c->r[31]+0x0000001Cu; // 803A98A0
  c->lr=0x803A98A8u; f_8039F3FC(c); // 803A98A4
  c->r[31]=c->r[3]|c->r[3]; // 803A98A8
  c->r[3]=c->r[30]|c->r[30]; // 803A98AC
  c->lr=0x803A98B4u; f_8025FDA8(c); // 803A98B0
  c->r[12]=R32(c->r[28]+0x00000000u); // 803A98B4
  c->r[3]=c->r[28]|c->r[28]; // 803A98B8
  c->r[12]=R32(c->r[12]+0x00000040u); // 803A98BC
  c->ctr=c->r[12]; // 803A98C0
  if (true) { c->lr=0x803A98C8u; dispatch(c,c->ctr); } // 803A98C4
  cmpu(c,0,c->r[31],c->r[3]); // 803A98C8
  if (!crb(c,0)) { goto L_803A98EC; } // 803A98CC
  c->r[12]=R32(c->r[28]+0x00000000u); // 803A98D0
  c->r[3]=c->r[28]|c->r[28]; // 803A98D4
  c->r[12]=R32(c->r[12]+0x00000010u); // 803A98D8
  c->ctr=c->r[12]; // 803A98DC
  if (true) { c->lr=0x803A98E4u; dispatch(c,c->ctr); } // 803A98E0
  c->r[3]=0u+0x00000005u; // 803A98E4
  goto L_803A9AFC; // 803A98E8
L_803A98EC:;
  c->r[4]=R32(c->r[21]+0x0000001Cu); // 803A98EC
  c->r[3]=c->r[22]|c->r[22]; // 803A98F0
  c->r[5]=R32(c->r[24]+0x00000008u); // 803A98F4
  c->r[6]=c->r[27]|c->r[27]; // 803A98F8
  c->r[7]=c->r[21]+0x00000020u; // 803A98FC
  c->lr=0x803A9904u; f_803A3F60(c); // 803A9900
  goto L_803A99BC; // 803A9904
L_803A9908:;
  cmps(c,0,(int32_t)c->r[3],1); // 803A9908
  if (!crb(c,2)) { goto L_803A99B4; } // 803A990C
  c->r[0]=R32(c->r[21]+0x0000003Cu); // 803A9910
  cmpu(c,0,c->r[0],0x00000001u); // 803A9914
  if (!crb(c,2)) { goto L_803A9940; } // 803A9918
  cmps(c,0,(int32_t)c->r[28],0); // 803A991C
  if (crb(c,2)) { goto L_803A9938; } // 803A9920
  c->r[12]=R32(c->r[28]+0x00000000u); // 803A9924
  c->r[3]=c->r[28]|c->r[28]; // 803A9928
  c->r[12]=R32(c->r[12]+0x00000010u); // 803A992C
  c->ctr=c->r[12]; // 803A9930
  if (true) { c->lr=0x803A9938u; dispatch(c,c->ctr); } // 803A9934
L_803A9938:;
  c->r[3]=0u+0x00000001u; // 803A9938
  goto L_803A9AFC; // 803A993C
L_803A9940:;
  cmps(c,0,(int32_t)c->r[0],0); // 803A9940
  if (!crb(c,2)) { goto L_803A9950; } // 803A9944
  c->r[3]=0u+0x00000000u; // 803A9948
  goto L_803A9958; // 803A994C
L_803A9950:;
  c->r[3]=R32(c->r[21]+0x00000040u); // 803A9950
  c->r[3]=c->r[3]+0xFFFFFF48u; // 803A9954
L_803A9958:;
  cmpu(c,0,c->r[22],c->r[3]); // 803A9958
  if (!crb(c,2)) { goto L_803A9984; } // 803A995C
  cmps(c,0,(int32_t)c->r[28],0); // 803A9960
  if (crb(c,2)) { goto L_803A997C; } // 803A9964
  c->r[12]=R32(c->r[28]+0x00000000u); // 803A9968
  c->r[3]=c->r[28]|c->r[28]; // 803A996C
  c->r[12]=R32(c->r[12]+0x00000010u); // 803A9970
  c->ctr=c->r[12]; // 803A9974
  if (true) { c->lr=0x803A997Cu; dispatch(c,c->ctr); } // 803A9978
L_803A997C:;
  c->r[3]=0u+0x00000001u; // 803A997C
  goto L_803A9AFC; // 803A9980
L_803A9984:;
  c->r[12]=R32(c->r[3]+0x00000000u); // 803A9984
  c->r[4]=0u+0x00000000u; // 803A9988
  c->r[12]=R32(c->r[12]+0x00000018u); // 803A998C
  c->ctr=c->r[12]; // 803A9990
  if (true) { c->lr=0x803A9998u; dispatch(c,c->ctr); } // 803A9994
  c->r[4]=R32(c->r[21]+0x0000001Cu); // 803A9998
  c->r[3]=c->r[22]|c->r[22]; // 803A999C
  c->r[5]=R32(c->r[24]+0x00000008u); // 803A99A0
  c->r[6]=c->r[27]|c->r[27]; // 803A99A4
  c->r[7]=c->r[21]+0x00000020u; // 803A99A8
  c->lr=0x803A99B0u; f_803A3F60(c); // 803A99AC
  goto L_803A99BC; // 803A99B0
L_803A99B4:;
  c->r[3]=0u+0x000000FFu; // 803A99B4
  goto L_803A9AFC; // 803A99B8
L_803A99BC:;
  cmps(c,0,(int32_t)c->r[3],0); // 803A99BC
  if (!crb(c,2)) { IRQCHK(c); goto L_803A9908; } // 803A99C0
  c->r[4]=R32(c->r[23]+0x0000000Cu); // 803A99C4
  c->r[0]=0u+0x43300000u; // 803A99C8
  W32(c->r[1]+0x00000010u,c->r[0]); // 803A99CC
  c->r[3]=c->r[22]|c->r[22]; // 803A99D0
  c->r[0]=c->r[4]^0x80000000u; // 803A99D4
  c->r[12]=R32(c->r[22]+0x00000000u); // 803A99D8
  W32(c->r[1]+0x00000014u,c->r[0]); // 803A99DC
  {uint32_t ea=c->r[2]+0xFFFFEF58u; c->f[2]=RF64(ea);} // 803A99E0
  {uint32_t ea=c->r[1]+0x00000010u; c->f[1]=RF64(ea);} // 803A99E4
  {uint32_t ea=c->r[2]+0xFFFFEF50u; c->f[0]=c->ps1[0]=RF32(ea);} // 803A99E8
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 803A99EC
  c->r[12]=R32(c->r[12]+0x00000034u); // 803A99F0
  c->f[1]=c->ps1[1]=S(c->f[1]/c->f[0]); // 803A99F4
  c->ctr=c->r[12]; // 803A99F8
  if (true) { c->lr=0x803A9A00u; dispatch(c,c->ctr); } // 803A99FC
  c->r[4]=R32(c->r[24]+0x0000000Cu); // 803A9A00
  c->r[3]=c->r[22]|c->r[22]; // 803A9A04
  c->lr=0x803A9A0Cu; f_803A42EC(c); // 803A9A08
  c->r[4]=R8(c->r[24]+0x00000010u); // 803A9A0C
  c->r[3]=c->r[22]|c->r[22]; // 803A9A10
  c->lr=0x803A9A18u; f_803A42F4(c); // 803A9A14
  c->r[12]=R32(c->r[22]+0x00000000u); // 803A9A18
  c->r[3]=c->r[22]|c->r[22]; // 803A9A1C
  c->r[4]=R32(c->r[23]+0x00000010u); // 803A9A20
  c->r[12]=R32(c->r[12]+0x00000050u); // 803A9A24
  c->ctr=c->r[12]; // 803A9A28
  if (true) { c->lr=0x803A9A30u; dispatch(c,c->ctr); } // 803A9A2C
  c->r[12]=R32(c->r[22]+0x00000000u); // 803A9A30
  c->r[3]=c->r[22]|c->r[22]; // 803A9A34
  c->r[4]=R32(c->r[23]+0x00000014u); // 803A9A38
  c->r[12]=R32(c->r[12]+0x00000054u); // 803A9A3C
  c->ctr=c->r[12]; // 803A9A40
  if (true) { c->lr=0x803A9A48u; dispatch(c,c->ctr); } // 803A9A44
  c->r[12]=R32(c->r[22]+0x00000000u); // 803A9A48
  c->r[3]=c->r[22]|c->r[22]; // 803A9A4C
  c->r[4]=R32(c->r[23]+0x00000018u); // 803A9A50
  c->r[12]=R32(c->r[12]+0x00000058u); // 803A9A54
  c->ctr=c->r[12]; // 803A9A58
  if (true) { c->lr=0x803A9A60u; dispatch(c,c->ctr); } // 803A9A5C
  cmps(c,0,(int32_t)c->r[25],1); // 803A9A60
  if (crb(c,2)) { goto L_803A9A8C; } // 803A9A64
  if (!crb(c,0)) { goto L_803A9A78; } // 803A9A68
  cmps(c,0,(int32_t)c->r[25],0); // 803A9A6C
  if (!crb(c,0)) { goto L_803A9A84; } // 803A9A70
  goto L_803A9AA0; // 803A9A74
L_803A9A78:;
  cmps(c,0,(int32_t)c->r[25],3); // 803A9A78
  if (!crb(c,0)) { goto L_803A9AA0; } // 803A9A7C
  goto L_803A9A94; // 803A9A80
L_803A9A84:;
  c->r[30]=0u+0x00000001u; // 803A9A84
  goto L_803A9AA8; // 803A9A88
L_803A9A8C:;
  c->r[30]=0u+0x00000000u; // 803A9A8C
  goto L_803A9AA8; // 803A9A90
L_803A9A94:;
  c->r[30]=0u+0x00000000u; // 803A9A94
  c->r[26]=0u+0x00000000u; // 803A9A98
  goto L_803A9AA8; // 803A9A9C
L_803A9AA0:;
  c->r[30]=0u+0x00000000u; // 803A9AA0
  c->r[26]=0u+0x00000000u; // 803A9AA4
L_803A9AA8:;
  cmps(c,0,(int32_t)c->r[29],0); // 803A9AA8
  if (crb(c,2)) { goto L_803A9AE0; } // 803A9AAC
  c->r[4]=c->r[29]|c->r[29]; // 803A9AB0
  c->r[3]=c->r[1]+0x00000008u; // 803A9AB4
  c->lr=0x803A9ABCu; f_803A29D4(c); // 803A9AB8
  c->r[3]=c->r[1]+0x00000008u; // 803A9ABC
  c->lr=0x803A9AC4u; f_803A2A40(c); // 803A9AC0
  c->r[5]=R32(c->r[24]+0x00000000u); // 803A9AC4
  c->r[4]=c->r[3]|c->r[3]; // 803A9AC8
  c->r[3]=c->r[22]|c->r[22]; // 803A9ACC
  c->r[6]=c->r[30]|c->r[30]; // 803A9AD0
  c->r[7]=c->r[26]|c->r[26]; // 803A9AD4
  c->lr=0x803A9ADCu; f_803A3FC8(c); // 803A9AD8
  goto L_803A9AF8; // 803A9ADC
L_803A9AE0:;
  c->r[5]=R32(c->r[24]+0x00000000u); // 803A9AE0
  c->r[3]=c->r[22]|c->r[22]; // 803A9AE4
  c->r[4]=c->r[28]|c->r[28]; // 803A9AE8
  c->r[6]=c->r[30]|c->r[30]; // 803A9AEC
  c->r[7]=c->r[26]|c->r[26]; // 803A9AF0
  c->lr=0x803A9AF8u; f_803A4030(c); // 803A9AF4
L_803A9AF8:;
  c->r[3]=0u+0x00000000u; // 803A9AF8
L_803A9AFC:;
  c->r[11]=c->r[1]+0x00000050u; // 803A9AFC
  c->lr=0x803A9B04u; { c->r[21]=R32(c->r[11]+0xFFFFFFD4u); c->r[22]=R32(c->r[11]+0xFFFFFFD8u); c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 803A9B00
  c->r[0]=R32(c->r[1]+0x00000054u); // 803A9B04
  c->lr=c->r[0]; // 803A9B08
  c->r[1]=c->r[1]+0x00000050u; // 803A9B0C
  return; // 803A9B10
}

// fn_803A9B14
void f_803A9B14(Ctx* __restrict c) {
  trace_call(0x803A9B14u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803A9B14
  c->r[0]=c->lr; // 803A9B18
  W32(c->r[1]+0x00000034u,c->r[0]); // 803A9B1C
  c->r[11]=c->r[1]+0x00000030u; // 803A9B20
  c->lr=0x803A9B28u; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 803A9B24
  cmps(c,0,(int32_t)c->r[7],1); // 803A9B28
  c->r[26]=c->r[3]|c->r[3]; // 803A9B2C
  c->r[27]=c->r[4]|c->r[4]; // 803A9B30
  c->r[28]=c->r[5]|c->r[5]; // 803A9B34
  c->r[29]=c->r[8]|c->r[8]; // 803A9B38
  c->r[30]=c->r[9]|c->r[9]; // 803A9B3C
  if (crb(c,2)) { goto L_803A9B68; } // 803A9B40
  if (!crb(c,0)) { goto L_803A9B54; } // 803A9B44
  cmps(c,0,(int32_t)c->r[7],0); // 803A9B48
  if (!crb(c,0)) { goto L_803A9B60; } // 803A9B4C
  goto L_803A9B7C; // 803A9B50
L_803A9B54:;
  cmps(c,0,(int32_t)c->r[7],3); // 803A9B54
  if (!crb(c,0)) { goto L_803A9B7C; } // 803A9B58
  goto L_803A9B74; // 803A9B5C
L_803A9B60:;
  c->r[31]=0u+0x00000001u; // 803A9B60
  goto L_803A9B84; // 803A9B64
L_803A9B68:;
  c->r[31]=0u+0x00000000u; // 803A9B68
  c->r[29]=0u+0x00000000u; // 803A9B6C
  goto L_803A9B84; // 803A9B70
L_803A9B74:;
  c->r[31]=0u+0x00000000u; // 803A9B74
  goto L_803A9B84; // 803A9B78
L_803A9B7C:;
  c->r[31]=0u+0x00000000u; // 803A9B7C
  c->r[29]=0u+0x00000000u; // 803A9B80
L_803A9B84:;
  c->r[4]=R32(c->r[5]+0x00000000u); // 803A9B84
  c->r[5]=c->r[27]+0x0000093Cu; // 803A9B88
  c->r[3]=R32(c->r[3]+0x00000010u); // 803A9B8C
  c->r[6]=0u+0x00000200u; // 803A9B90
  c->lr=0x803A9B98u; f_803A6814(c); // 803A9B94
  cmps(c,0,(int32_t)c->r[3],0); // 803A9B98
  c->r[8]=c->r[3]|c->r[3]; // 803A9B9C
  if (!crb(c,2)) { goto L_803A9BAC; } // 803A9BA0
  c->r[3]=0u+0x00000006u; // 803A9BA4
  goto L_803A9C5C; // 803A9BA8
L_803A9BAC:;
  c->r[3]=c->r[27]|c->r[27]; // 803A9BAC
  c->r[5]=c->r[31]|c->r[31]; // 803A9BB0
  c->r[6]=c->r[29]|c->r[29]; // 803A9BB4
  c->r[7]=c->r[30]|c->r[30]; // 803A9BB8
  c->r[4]=c->r[26]+0x000000BCu; // 803A9BBC
  c->lr=0x803A9BC4u; f_803AF290(c); // 803A9BC0
  cmps(c,0,(int32_t)c->r[3],0); // 803A9BC4
  if (!crb(c,2)) { goto L_803A9BD4; } // 803A9BC8
  c->r[3]=0u+0x000000FFu; // 803A9BCC
  goto L_803A9C5C; // 803A9BD0
L_803A9BD4:;
  c->r[4]=R32(c->r[28]+0x0000000Cu); // 803A9BD4
  c->r[0]=0u+0x43300000u; // 803A9BD8
  W32(c->r[1]+0x00000008u,c->r[0]); // 803A9BDC
  c->r[3]=c->r[27]|c->r[27]; // 803A9BE0
  c->r[0]=c->r[4]^0x80000000u; // 803A9BE4
  c->r[12]=R32(c->r[27]+0x00000000u); // 803A9BE8
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 803A9BEC
  {uint32_t ea=c->r[2]+0xFFFFEF58u; c->f[2]=RF64(ea);} // 803A9BF0
  {uint32_t ea=c->r[1]+0x00000008u; c->f[1]=RF64(ea);} // 803A9BF4
  {uint32_t ea=c->r[2]+0xFFFFEF50u; c->f[0]=c->ps1[0]=RF32(ea);} // 803A9BF8
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 803A9BFC
  c->r[12]=R32(c->r[12]+0x00000034u); // 803A9C00
  c->f[1]=c->ps1[1]=S(c->f[1]/c->f[0]); // 803A9C04
  c->ctr=c->r[12]; // 803A9C08
  if (true) { c->lr=0x803A9C10u; dispatch(c,c->ctr); } // 803A9C0C
  c->r[12]=R32(c->r[27]+0x00000000u); // 803A9C10
  c->r[3]=c->r[27]|c->r[27]; // 803A9C14
  c->r[4]=R32(c->r[28]+0x00000010u); // 803A9C18
  c->r[12]=R32(c->r[12]+0x00000050u); // 803A9C1C
  c->ctr=c->r[12]; // 803A9C20
  if (true) { c->lr=0x803A9C28u; dispatch(c,c->ctr); } // 803A9C24
  c->r[12]=R32(c->r[27]+0x00000000u); // 803A9C28
  c->r[3]=c->r[27]|c->r[27]; // 803A9C2C
  c->r[4]=R32(c->r[28]+0x00000014u); // 803A9C30
  c->r[12]=R32(c->r[12]+0x00000054u); // 803A9C34
  c->ctr=c->r[12]; // 803A9C38
  if (true) { c->lr=0x803A9C40u; dispatch(c,c->ctr); } // 803A9C3C
  c->r[12]=R32(c->r[27]+0x00000000u); // 803A9C40
  c->r[3]=c->r[27]|c->r[27]; // 803A9C44
  c->r[4]=R32(c->r[28]+0x00000018u); // 803A9C48
  c->r[12]=R32(c->r[12]+0x00000058u); // 803A9C4C
  c->ctr=c->r[12]; // 803A9C50
  if (true) { c->lr=0x803A9C58u; dispatch(c,c->ctr); } // 803A9C54
  c->r[3]=0u+0x00000000u; // 803A9C58
L_803A9C5C:;
  c->r[11]=c->r[1]+0x00000030u; // 803A9C5C
  c->lr=0x803A9C64u; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 803A9C60
  c->r[0]=R32(c->r[1]+0x00000034u); // 803A9C64
  c->lr=c->r[0]; // 803A9C68
  c->r[1]=c->r[1]+0x00000030u; // 803A9C6C
  return; // 803A9C70
}

// fn_803A9C74
void f_803A9C74(Ctx* __restrict c) {
  trace_call(0x803A9C74u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803A9C74
  c->r[0]=c->lr; // 803A9C78
  W32(c->r[1]+0x00000034u,c->r[0]); // 803A9C7C
  c->r[11]=c->r[1]+0x00000030u; // 803A9C80
  c->lr=0x803A9C88u; { W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 803A9C84
  c->r[26]=c->r[4]|c->r[4]; // 803A9C88
  c->r[4]=R32(c->r[5]+0x00000000u); // 803A9C8C
  c->r[25]=c->r[3]|c->r[3]; // 803A9C90
  c->r[27]=c->r[5]|c->r[5]; // 803A9C94
  c->r[28]=c->r[6]|c->r[6]; // 803A9C98
  c->r[29]=c->r[7]|c->r[7]; // 803A9C9C
  c->r[30]=c->r[8]|c->r[8]; // 803A9CA0
  c->r[31]=c->r[9]|c->r[9]; // 803A9CA4
  c->lr=0x803A9CACu; f_803A9230(c); // 803A9CA8
  cmps(c,0,(int32_t)c->r[3],0); // 803A9CAC
  c->r[4]=c->r[3]|c->r[3]; // 803A9CB0
  if (!crb(c,2)) { goto L_803A9CC0; } // 803A9CB4
  c->r[3]=0u+0x00000004u; // 803A9CB8
  goto L_803A9DD4; // 803A9CBC
L_803A9CC0:;
  cmps(c,0,(int32_t)c->r[29],1); // 803A9CC0
  if (crb(c,2)) { goto L_803A9CEC; } // 803A9CC4
  if (!crb(c,0)) { goto L_803A9CD8; } // 803A9CC8
  cmps(c,0,(int32_t)c->r[29],0); // 803A9CCC
  if (!crb(c,0)) { goto L_803A9CE4; } // 803A9CD0
  goto L_803A9D00; // 803A9CD4
L_803A9CD8:;
  cmps(c,0,(int32_t)c->r[29],3); // 803A9CD8
  if (!crb(c,0)) { goto L_803A9D00; } // 803A9CDC
  goto L_803A9CF8; // 803A9CE0
L_803A9CE4:;
  c->r[6]=0u+0x00000001u; // 803A9CE4
  goto L_803A9D08; // 803A9CE8
L_803A9CEC:;
  c->r[6]=0u+0x00000000u; // 803A9CEC
  c->r[30]=0u+0x00000000u; // 803A9CF0
  goto L_803A9D08; // 803A9CF4
L_803A9CF8:;
  c->r[6]=0u+0x00000000u; // 803A9CF8
  goto L_803A9D08; // 803A9CFC
L_803A9D00:;
  c->r[6]=0u+0x00000000u; // 803A9D00
  c->r[30]=0u+0x00000000u; // 803A9D04
L_803A9D08:;
  c->r[5]=R32(c->r[28]+0x00000000u); // 803A9D08
  c->r[3]=c->r[26]|c->r[26]; // 803A9D0C
  c->r[10]=R32(c->r[27]+0x00000000u); // 803A9D10
  c->r[7]=c->r[30]|c->r[30]; // 803A9D14
  c->r[8]=c->r[31]|c->r[31]; // 803A9D18
  c->r[9]=c->r[25]+0x00000028u; // 803A9D1C
  c->lr=0x803A9D24u; f_803B3458(c); // 803A9D20
  cmps(c,0,(int32_t)c->r[3],0); // 803A9D24
  if (!crb(c,2)) { goto L_803A9D34; } // 803A9D28
  c->r[3]=0u+0x000000FFu; // 803A9D2C
  goto L_803A9DD4; // 803A9D30
L_803A9D34:;
  c->r[4]=R32(c->r[27]+0x0000000Cu); // 803A9D34
  c->r[0]=0u+0x43300000u; // 803A9D38
  W32(c->r[1]+0x00000008u,c->r[0]); // 803A9D3C
  c->r[3]=c->r[26]|c->r[26]; // 803A9D40
  c->r[0]=c->r[4]^0x80000000u; // 803A9D44
  c->r[12]=R32(c->r[26]+0x00000000u); // 803A9D48
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 803A9D4C
  {uint32_t ea=c->r[2]+0xFFFFEF58u; c->f[2]=RF64(ea);} // 803A9D50
  {uint32_t ea=c->r[1]+0x00000008u; c->f[1]=RF64(ea);} // 803A9D54
  {uint32_t ea=c->r[2]+0xFFFFEF50u; c->f[0]=c->ps1[0]=RF32(ea);} // 803A9D58
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 803A9D5C
  c->r[12]=R32(c->r[12]+0x00000034u); // 803A9D60
  c->f[1]=c->ps1[1]=S(c->f[1]/c->f[0]); // 803A9D64
  c->ctr=c->r[12]; // 803A9D68
  if (true) { c->lr=0x803A9D70u; dispatch(c,c->ctr); } // 803A9D6C
  c->r[4]=R32(c->r[28]+0x00000004u); // 803A9D70
  c->r[3]=c->r[26]|c->r[26]; // 803A9D74
  c->lr=0x803A9D7Cu; f_803B35D0(c); // 803A9D78
  c->r[4]=R8(c->r[28]+0x00000008u); // 803A9D7C
  c->r[3]=c->r[26]|c->r[26]; // 803A9D80
  c->lr=0x803A9D88u; f_803B35D8(c); // 803A9D84
  c->r[12]=R32(c->r[26]+0x00000000u); // 803A9D88
  c->r[3]=c->r[26]|c->r[26]; // 803A9D8C
  c->r[4]=R32(c->r[27]+0x00000010u); // 803A9D90
  c->r[12]=R32(c->r[12]+0x00000050u); // 803A9D94
  c->ctr=c->r[12]; // 803A9D98
  if (true) { c->lr=0x803A9DA0u; dispatch(c,c->ctr); } // 803A9D9C
  c->r[12]=R32(c->r[26]+0x00000000u); // 803A9DA0
  c->r[3]=c->r[26]|c->r[26]; // 803A9DA4
  c->r[4]=R32(c->r[27]+0x00000014u); // 803A9DA8
  c->r[12]=R32(c->r[12]+0x00000054u); // 803A9DAC
  c->ctr=c->r[12]; // 803A9DB0
  if (true) { c->lr=0x803A9DB8u; dispatch(c,c->ctr); } // 803A9DB4
  c->r[12]=R32(c->r[26]+0x00000000u); // 803A9DB8
  c->r[3]=c->r[26]|c->r[26]; // 803A9DBC
  c->r[4]=R32(c->r[27]+0x00000018u); // 803A9DC0
  c->r[12]=R32(c->r[12]+0x00000058u); // 803A9DC4
  c->ctr=c->r[12]; // 803A9DC8
  if (true) { c->lr=0x803A9DD0u; dispatch(c,c->ctr); } // 803A9DCC
  c->r[3]=0u+0x00000000u; // 803A9DD0
L_803A9DD4:;
  c->r[11]=c->r[1]+0x00000030u; // 803A9DD4
  c->lr=0x803A9DDCu; { c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 803A9DD8
  c->r[0]=R32(c->r[1]+0x00000034u); // 803A9DDC
  c->lr=c->r[0]; // 803A9DE0
  c->r[1]=c->r[1]+0x00000030u; // 803A9DE4
  return; // 803A9DE8
}

// fn_803A9DEC
void f_803A9DEC(Ctx* __restrict c) {
  trace_call(0x803A9DECu);
  {uint32_t ea=c->r[1]+0xFFFFFDC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803A9DEC
  c->r[0]=c->lr; // 803A9DF0
  W32(c->r[1]+0x00000244u,c->r[0]); // 803A9DF4
  W32(c->r[1]+0x0000023Cu,c->r[31]); // 803A9DF8
  c->r[31]=c->r[6]|c->r[6]; // 803A9DFC
  W32(c->r[1]+0x00000238u,c->r[30]); // 803A9E00
  c->r[30]=c->r[5]|c->r[5]; // 803A9E04
  W32(c->r[1]+0x00000234u,c->r[29]); // 803A9E08
  c->r[29]=c->r[4]|c->r[4]; // 803A9E0C
  W32(c->r[1]+0x00000230u,c->r[28]); // 803A9E10
  c->r[28]=c->r[3]|c->r[3]; // 803A9E14
  c->r[0]=R32(c->r[3]+0x00000010u); // 803A9E18
  cmps(c,0,(int32_t)c->r[0],0); // 803A9E1C
  if (!crb(c,2)) { goto L_803A9E2C; } // 803A9E20
  c->r[3]=0u+0x00000000u; // 803A9E24
  goto L_803A9E34; // 803A9E28
L_803A9E2C:;
  c->r[3]=c->r[0]|c->r[0]; // 803A9E2C
  c->lr=0x803A9E34u; f_803A6748(c); // 803A9E30
L_803A9E34:;
  cmps(c,0,(int32_t)c->r[3],0); // 803A9E34
  if (!crb(c,2)) { goto L_803A9E44; } // 803A9E38
  c->r[3]=0u+0x00000000u; // 803A9E3C
  goto L_803A9F34; // 803A9E40
L_803A9E44:;
  c->r[3]=R32(c->r[28]+0x00000010u); // 803A9E44
  c->lr=0x803A9E4Cu; f_803A6784(c); // 803A9E48
  cmpu(c,0,c->r[29],c->r[3]); // 803A9E4C
  if (crb(c,0)) { goto L_803A9E5C; } // 803A9E50
  c->r[3]=0u+0x00000000u; // 803A9E54
  goto L_803A9F34; // 803A9E58
L_803A9E5C:;
  c->r[3]=R32(c->r[28]+0x00000014u); // 803A9E5C
  cmps(c,0,(int32_t)c->r[3],0); // 803A9E60
  if (!crb(c,2)) { goto L_803A9E70; } // 803A9E64
  c->r[0]=0u+0x00000000u; // 803A9E68
  goto L_803A9E90; // 803A9E6C
L_803A9E70:;
  c->r[0]=R32(c->r[3]+0x00000000u); // 803A9E70
  cmpu(c,0,c->r[29],c->r[0]); // 803A9E74
  if (crb(c,0)) { goto L_803A9E84; } // 803A9E78
  c->r[0]=0u+0x00000000u; // 803A9E7C
  goto L_803A9E90; // 803A9E80
L_803A9E84:;
  c->r[0]=rotl(c->r[29],3)&0xFFFFFFF8u; // 803A9E84
  c->r[3]=c->r[3]+c->r[0]; // 803A9E88
  c->r[0]=R32(c->r[3]+0x00000004u); // 803A9E8C
L_803A9E90:;
  cmps(c,0,(int32_t)c->r[0],0); // 803A9E90
  if (crb(c,2)) { goto L_803A9EA0; } // 803A9E94
  c->r[3]=0u+0x00000001u; // 803A9E98
  goto L_803A9F34; // 803A9E9C
L_803A9EA0:;
  cmps(c,0,(int32_t)c->r[30],0); // 803A9EA0
  if (!crb(c,2)) { goto L_803A9EB0; } // 803A9EA4
  c->r[3]=0u+0x00000000u; // 803A9EA8
  goto L_803A9F34; // 803A9EAC
L_803A9EB0:;
  c->r[4]=R32(c->r[28]+0x00000010u); // 803A9EB0
  c->r[3]=c->r[1]+0x00000010u; // 803A9EB4
  c->lr=0x803A9EBCu; f_803A7DE0(c); // 803A9EB8
  c->r[4]=c->r[29]|c->r[29]; // 803A9EBC
  c->r[5]=c->r[30]|c->r[30]; // 803A9EC0
  c->r[7]=c->r[31]|c->r[31]; // 803A9EC4
  c->r[3]=c->r[1]+0x00000010u; // 803A9EC8
  c->r[6]=c->r[1]+0x00000008u; // 803A9ECC
  c->lr=0x803A9ED4u; f_803A7E5C(c); // 803A9ED0
  cmps(c,0,(int32_t)c->r[3],0); // 803A9ED4
  if (!crb(c,2)) { goto L_803A9EF0; } // 803A9ED8
  c->r[3]=c->r[1]+0x00000010u; // 803A9EDC
  c->r[4]=0u+0xFFFFFFFFu; // 803A9EE0
  c->lr=0x803A9EE8u; f_803A7E1C(c); // 803A9EE4
  c->r[3]=0u+0x00000000u; // 803A9EE8
  goto L_803A9F34; // 803A9EEC
L_803A9EF0:;
  c->r[4]=R32(c->r[28]+0x00000014u); // 803A9EF0
  cmps(c,0,(int32_t)c->r[4],0); // 803A9EF4
  if (crb(c,2)) { goto L_803A9F08; } // 803A9EF8
  c->r[0]=rotl(c->r[29],3)&0xFFFFFFF8u; // 803A9EFC
  c->r[4]=c->r[4]+c->r[0]; // 803A9F00
  W32(c->r[4]+0x00000004u,c->r[3]); // 803A9F04
L_803A9F08:;
  c->r[3]=R32(c->r[28]+0x00000014u); // 803A9F08
  c->r[4]=R32(c->r[1]+0x00000008u); // 803A9F0C
  cmps(c,0,(int32_t)c->r[3],0); // 803A9F10
  if (crb(c,2)) { goto L_803A9F24; } // 803A9F14
  c->r[0]=rotl(c->r[29],3)&0xFFFFFFF8u; // 803A9F18
  c->r[3]=c->r[3]+c->r[0]; // 803A9F1C
  W32(c->r[3]+0x00000008u,c->r[4]); // 803A9F20
L_803A9F24:;
  c->r[3]=c->r[1]+0x00000010u; // 803A9F24
  c->r[4]=0u+0xFFFFFFFFu; // 803A9F28
  c->lr=0x803A9F30u; f_803A7E1C(c); // 803A9F2C
  c->r[3]=0u+0x00000001u; // 803A9F30
L_803A9F34:;
  c->r[0]=R32(c->r[1]+0x00000244u); // 803A9F34
  c->r[31]=R32(c->r[1]+0x0000023Cu); // 803A9F38
  c->r[30]=R32(c->r[1]+0x00000238u); // 803A9F3C
  c->r[29]=R32(c->r[1]+0x00000234u); // 803A9F40
  c->r[28]=R32(c->r[1]+0x00000230u); // 803A9F44
  c->lr=c->r[0]; // 803A9F48
  c->r[1]=c->r[1]+0x00000240u; // 803A9F4C
  return; // 803A9F50
}

// fn_803A9F54
void f_803A9F54(Ctx* __restrict c) {
  trace_call(0x803A9F54u);
  c->r[0]=R32(c->r[3]+0x00000014u); // 803A9F54
  cmps(c,0,(int32_t)c->r[0],0); // 803A9F58
  if (crb(c,2)) return; // 803A9F5C
  c->r[9]=0u+0x00000000u; // 803A9F60
  c->r[7]=0u+0x00000000u; // 803A9F64
  c->r[6]=0u+0x00000000u; // 803A9F68
  goto L_803A9F94; // 803A9F6C
L_803A9F70:;
  c->r[8]=c->r[8]+c->r[7]; // 803A9F70
  c->r[0]=R32(c->r[8]+0x00000004u); // 803A9F74
  cmpu(c,0,c->r[4],c->r[0]); // 803A9F78
  if (crb(c,1)) { goto L_803A9F8C; } // 803A9F7C
  cmpu(c,0,c->r[0],c->r[5]); // 803A9F80
  if (crb(c,1)) { goto L_803A9F8C; } // 803A9F84
  W32(c->r[8]+0x00000004u,c->r[6]); // 803A9F88
L_803A9F8C:;
  c->r[7]=c->r[7]+0x00000008u; // 803A9F8C
  c->r[9]=c->r[9]+0x00000001u; // 803A9F90
L_803A9F94:;
  c->r[8]=R32(c->r[3]+0x00000014u); // 803A9F94
  c->r[0]=R32(c->r[8]+0x00000000u); // 803A9F98
  cmpu(c,0,c->r[9],c->r[0]); // 803A9F9C
  if (crb(c,0)) { IRQCHK(c); goto L_803A9F70; } // 803A9FA0
  return; // 803A9FA4
}

// fn_803A9FA8
void f_803A9FA8(Ctx* __restrict c) {
  trace_call(0x803A9FA8u);
  c->r[0]=R32(c->r[3]+0x00000014u); // 803A9FA8
  cmps(c,0,(int32_t)c->r[0],0); // 803A9FAC
  if (crb(c,2)) return; // 803A9FB0
  c->r[9]=0u+0x00000000u; // 803A9FB4
  c->r[7]=0u+0x00000000u; // 803A9FB8
  c->r[6]=0u+0x00000000u; // 803A9FBC
  goto L_803A9FE8; // 803A9FC0
L_803A9FC4:;
  c->r[8]=c->r[8]+c->r[7]; // 803A9FC4
  c->r[0]=R32(c->r[8]+0x00000008u); // 803A9FC8
  cmpu(c,0,c->r[4],c->r[0]); // 803A9FCC
  if (crb(c,1)) { goto L_803A9FE0; } // 803A9FD0
  cmpu(c,0,c->r[0],c->r[5]); // 803A9FD4
  if (crb(c,1)) { goto L_803A9FE0; } // 803A9FD8
  W32(c->r[8]+0x00000008u,c->r[6]); // 803A9FDC
L_803A9FE0:;
  c->r[7]=c->r[7]+0x00000008u; // 803A9FE0
  c->r[9]=c->r[9]+0x00000001u; // 803A9FE4
L_803A9FE8:;
  c->r[8]=R32(c->r[3]+0x00000014u); // 803A9FE8
  c->r[0]=R32(c->r[8]+0x00000000u); // 803A9FEC
  cmpu(c,0,c->r[9],c->r[0]); // 803A9FF0
  if (crb(c,0)) { IRQCHK(c); goto L_803A9FC4; } // 803A9FF4
  return; // 803A9FF8
}

// fn_803A9FFC
void f_803A9FFC(Ctx* __restrict c) {
  trace_call(0x803A9FFCu);
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803A9FFC
  c->r[0]=c->lr; // 803AA000
  W32(c->r[1]+0x00000054u,c->r[0]); // 803AA004
  W32(c->r[1]+0x0000004Cu,c->r[31]); // 803AA008
  c->r[31]=c->r[4]|c->r[4]; // 803AA00C
  W32(c->r[1]+0x00000048u,c->r[30]); // 803AA010
  c->r[30]=c->r[6]|c->r[6]; // 803AA014
  W32(c->r[1]+0x00000044u,c->r[29]); // 803AA018
  c->r[29]=c->r[3]|c->r[3]; // 803AA01C
  c->r[5]=R32(c->r[3]+0x00000004u); // 803AA020
  c->r[3]=R32(c->r[5]+0x00000010u); // 803AA024
  cmps(c,0,(int32_t)c->r[3],0); // 803AA028
  if (!crb(c,2)) { goto L_803AA038; } // 803AA02C
  c->r[3]=0u+0x00000000u; // 803AA030
  goto L_803AA03C; // 803AA034
L_803AA038:;
  c->lr=0x803AA03Cu; f_803A6748(c); // 803AA038
L_803AA03C:;
  cmps(c,0,(int32_t)c->r[3],0); // 803AA03C
  if (!crb(c,2)) { goto L_803AA04C; } // 803AA040
  c->r[3]=0u+0x00000000u; // 803AA044
  goto L_803AA108; // 803AA048
L_803AA04C:;
  c->r[3]=R32(c->r[29]+0x00000004u); // 803AA04C
  c->r[5]=c->r[1]+0x00000020u; // 803AA050
  c->r[4]=R32(c->r[31]+0x00000004u); // 803AA054
  c->r[31]=R32(c->r[3]+0x00000010u); // 803AA058
  c->r[3]=c->r[31]|c->r[31]; // 803AA05C
  c->lr=0x803AA064u; f_803A67BC(c); // 803AA060
  cmps(c,0,(int32_t)c->r[3],0); // 803AA064
  if (!crb(c,2)) { goto L_803AA074; } // 803AA068
  c->r[3]=0u+0x00000000u; // 803AA06C
  goto L_803AA108; // 803AA070
L_803AA074:;
  c->r[4]=R32(c->r[1]+0x00000024u); // 803AA074
  c->r[3]=c->r[31]|c->r[31]; // 803AA078
  c->r[5]=c->r[1]+0x00000008u; // 803AA07C
  c->lr=0x803AA084u; f_803A67EC(c); // 803AA080
  cmps(c,0,(int32_t)c->r[3],0); // 803AA084
  if (!crb(c,2)) { goto L_803AA094; } // 803AA088
  c->r[3]=0u+0x00000000u; // 803AA08C
  goto L_803AA108; // 803AA090
L_803AA094:;
  c->r[3]=R32(c->r[29]+0x00000004u); // 803AA094
  c->r[4]=R32(c->r[1]+0x00000008u); // 803AA098
  c->lr=0x803AA0A0u; f_803A9230(c); // 803AA09C
  cmps(c,0,(int32_t)c->r[3],0); // 803AA0A0
  if (!crb(c,2)) { goto L_803AA0B0; } // 803AA0A4
  c->r[3]=0u+0x00000000u; // 803AA0A8
  goto L_803AA108; // 803AA0AC
L_803AA0B0:;
  c->r[4]=c->r[3]|c->r[3]; // 803AA0B0
  c->r[3]=c->r[1]+0x00000010u; // 803AA0B4
  c->lr=0x803AA0BCu; f_8039B304(c); // 803AA0B8
  c->r[3]=R32(c->r[29]+0x00000004u); // 803AA0BC
  c->r[4]=R32(c->r[1]+0x00000008u); // 803AA0C0
  c->lr=0x803AA0C8u; f_803A937C(c); // 803AA0C4
  cmps(c,0,(int32_t)c->r[3],0); // 803AA0C8
  if (!crb(c,2)) { goto L_803AA0E4; } // 803AA0CC
  c->r[3]=c->r[1]+0x00000010u; // 803AA0D0
  c->r[4]=0u+0xFFFFFFFFu; // 803AA0D4
  c->lr=0x803AA0DCu; f_8039B33C(c); // 803AA0D8
  c->r[3]=0u+0x00000000u; // 803AA0DC
  goto L_803AA108; // 803AA0E0
L_803AA0E4:;
  W32(c->r[1]+0x0000001Cu,c->r[3]); // 803AA0E4
  c->r[4]=c->r[30]|c->r[30]; // 803AA0E8
  c->r[3]=c->r[1]+0x00000010u; // 803AA0EC
  c->lr=0x803AA0F4u; f_8039B37C(c); // 803AA0F0
  c->r[31]=c->r[3]|c->r[3]; // 803AA0F4
  c->r[3]=c->r[1]+0x00000010u; // 803AA0F8
  c->r[4]=0u+0xFFFFFFFFu; // 803AA0FC
  c->lr=0x803AA104u; f_8039B33C(c); // 803AA100
  c->r[3]=c->r[31]|c->r[31]; // 803AA104
L_803AA108:;
  c->r[0]=R32(c->r[1]+0x00000054u); // 803AA108
  c->r[31]=R32(c->r[1]+0x0000004Cu); // 803AA10C
  c->r[30]=R32(c->r[1]+0x00000048u); // 803AA110
  c->r[29]=R32(c->r[1]+0x00000044u); // 803AA114
  c->lr=c->r[0]; // 803AA118
  c->r[1]=c->r[1]+0x00000050u; // 803AA11C
  return; // 803AA120
}

// fn_803AA124
void f_803AA124(Ctx* __restrict c) {
  trace_call(0x803AA124u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803AA124
  c->r[0]=c->lr; // 803AA128
  W32(c->r[1]+0x00000044u,c->r[0]); // 803AA12C
  c->r[11]=c->r[1]+0x00000040u; // 803AA130
  c->lr=0x803AA138u; { W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 803AA134
  c->r[11]=R32(c->r[3]+0x00000004u); // 803AA138
  c->r[24]=c->r[3]|c->r[3]; // 803AA13C
  c->r[25]=c->r[4]|c->r[4]; // 803AA140
  c->r[26]=c->r[5]|c->r[5]; // 803AA144
  c->r[3]=R32(c->r[11]+0x00000010u); // 803AA148
  c->r[27]=c->r[6]|c->r[6]; // 803AA14C
  c->r[28]=c->r[7]|c->r[7]; // 803AA150
  c->r[29]=c->r[8]|c->r[8]; // 803AA154
  cmps(c,0,(int32_t)c->r[3],0); // 803AA158
  c->r[30]=c->r[9]|c->r[9]; // 803AA15C
  c->r[31]=c->r[10]|c->r[10]; // 803AA160
  if (!crb(c,2)) { goto L_803AA170; } // 803AA164
  c->r[3]=0u+0x00000000u; // 803AA168
  goto L_803AA174; // 803AA16C
L_803AA170:;
  c->lr=0x803AA174u; f_803A6748(c); // 803AA170
L_803AA174:;
  cmps(c,0,(int32_t)c->r[3],0); // 803AA174
  if (!crb(c,2)) { goto L_803AA184; } // 803AA178
  c->r[3]=0u+0x00000000u; // 803AA17C
  goto L_803AA208; // 803AA180
L_803AA184:;
  c->r[3]=R32(c->r[24]+0x00000004u); // 803AA184
  c->r[4]=c->r[31]|c->r[31]; // 803AA188
  c->lr=0x803AA190u; f_803A937C(c); // 803AA18C
  cmps(c,0,(int32_t)c->r[3],0); // 803AA190
  c->r[31]=c->r[3]|c->r[3]; // 803AA194
  if (!crb(c,2)) { goto L_803AA1A4; } // 803AA198
  c->r[3]=0u+0x00000000u; // 803AA19C
  goto L_803AA208; // 803AA1A0
L_803AA1A4:;
  c->r[4]=c->r[28]|c->r[28]; // 803AA1A4
  c->r[3]=c->r[1]+0x00000008u; // 803AA1A8
  c->lr=0x803AA1B0u; f_803B3850(c); // 803AA1AC
  c->r[4]=c->r[25]|c->r[25]; // 803AA1B0
  c->r[5]=c->r[29]|c->r[29]; // 803AA1B4
  c->r[3]=c->r[1]+0x00000008u; // 803AA1B8
  c->lr=0x803AA1C0u; f_803B38CC(c); // 803AA1BC
  cmps(c,0,(int32_t)c->r[3],0); // 803AA1C0
  if (!crb(c,2)) { goto L_803AA1D0; } // 803AA1C4
  c->r[3]=0u+0x00000000u; // 803AA1C8
  goto L_803AA208; // 803AA1CC
L_803AA1D0:;
  c->r[4]=c->r[26]|c->r[26]; // 803AA1D0
  c->r[5]=c->r[29]|c->r[29]; // 803AA1D4
  c->r[6]=c->r[30]|c->r[30]; // 803AA1D8
  c->r[3]=c->r[1]+0x00000008u; // 803AA1DC
  c->lr=0x803AA1E4u; f_803B39EC(c); // 803AA1E0
  cmps(c,0,(int32_t)c->r[3],0); // 803AA1E4
  if (!crb(c,2)) { goto L_803AA1F4; } // 803AA1E8
  c->r[3]=0u+0x00000000u; // 803AA1EC
  goto L_803AA208; // 803AA1F0
L_803AA1F4:;
  c->r[4]=R32(c->r[26]+0x00000000u); // 803AA1F4
  c->r[5]=c->r[27]|c->r[27]; // 803AA1F8
  c->r[6]=c->r[31]|c->r[31]; // 803AA1FC
  c->r[3]=c->r[1]+0x00000008u; // 803AA200
  c->lr=0x803AA208u; f_803B3AFC(c); // 803AA204
L_803AA208:;
  c->r[11]=c->r[1]+0x00000040u; // 803AA208
  c->lr=0x803AA210u; { c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 803AA20C
  c->r[0]=R32(c->r[1]+0x00000044u); // 803AA210
  c->lr=c->r[0]; // 803AA214
  c->r[1]=c->r[1]+0x00000040u; // 803AA218
  return; // 803AA21C
}

// fn_803AA220
void f_803AA220(Ctx* __restrict c) {
  trace_call(0x803AA220u);
  c->r[3]=R32(c->r[3]+0x00000010u); // 803AA220
  f_803A6794(c); return; // 803AA224
}

// fn_803AA228
void f_803AA228(Ctx* __restrict c) {
  trace_call(0x803AA228u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803AA228
  c->r[0]=c->lr; // 803AA22C
  cmps(c,0,(int32_t)c->r[3],0); // 803AA230
  W32(c->r[1]+0x00000014u,c->r[0]); // 803AA234
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 803AA238
  c->r[31]=c->r[4]|c->r[4]; // 803AA23C
  W32(c->r[1]+0x00000008u,c->r[30]); // 803AA240
  c->r[30]=c->r[3]|c->r[3]; // 803AA244
  if (crb(c,2)) { goto L_803AA264; } // 803AA248
  c->r[4]=0u+0x00000000u; // 803AA24C
  c->lr=0x803AA254u; f_803AA3F8(c); // 803AA250
  cmps(c,0,(int32_t)c->r[31],0); // 803AA254
  if (!crb(c,1)) { goto L_803AA264; } // 803AA258
  c->r[3]=c->r[30]|c->r[30]; // 803AA25C
  c->lr=0x803AA264u; f_802896EC(c); // 803AA260
L_803AA264:;
  c->r[3]=c->r[30]|c->r[30]; // 803AA264
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 803AA268
  c->r[30]=R32(c->r[1]+0x00000008u); // 803AA26C
  c->r[0]=R32(c->r[1]+0x00000014u); // 803AA270
  c->lr=c->r[0]; // 803AA274
  c->r[1]=c->r[1]+0x00000010u; // 803AA278
  return; // 803AA27C
}

// fn_803AA280
void f_803AA280(Ctx* __restrict c) {
  trace_call(0x803AA280u);
  c->r[3]=c->r[3]+0xFFFFFFF4u; // 803AA280
  f_803AA220(c); return; // 803AA284
}

// fn_803AA288
void f_803AA288(Ctx* __restrict c) {
  trace_call(0x803AA288u);
  c->r[3]=c->r[3]+0xFFFFFFF4u; // 803AA288
  f_803A94C8(c); return; // 803AA28C
}

// fn_803AA290
void f_803AA290(Ctx* __restrict c) {
  trace_call(0x803AA290u);
  c->r[3]=c->r[3]+0xFFFFFFF4u; // 803AA290
  f_803A8744(c); return; // 803AA294
}

// fn_803AA298
void f_803AA298(Ctx* __restrict c) {
  trace_call(0x803AA298u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803AA298
  c->r[0]=c->lr; // 803AA29C
  W32(c->r[1]+0x00000014u,c->r[0]); // 803AA2A0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 803AA2A4
  c->r[31]=c->r[3]|c->r[3]; // 803AA2A8
  W32(c->r[3]+0x00000000u,c->r[4]); // 803AA2AC
  c->r[3]=c->r[4]|c->r[4]; // 803AA2B0
  c->lr=0x803AA2B8u; f_8039CBAC(c); // 803AA2B4
  cmps(c,0,(int32_t)c->r[3],0); // 803AA2B8
  if (crb(c,2)) { goto L_803AA2C8; } // 803AA2BC
  c->r[3]=R32(c->r[31]+0x00000000u); // 803AA2C0
  c->lr=0x803AA2C8u; f_8039CBC8(c); // 803AA2C4
L_803AA2C8:;
  c->r[3]=R32(c->r[31]+0x00000000u); // 803AA2C8
  c->r[12]=R32(c->r[3]+0x00000000u); // 803AA2CC
  c->r[12]=R32(c->r[12]+0x0000005Cu); // 803AA2D0
  c->ctr=c->r[12]; // 803AA2D4
  if (true) { c->lr=0x803AA2DCu; dispatch(c,c->ctr); } // 803AA2D8
  cmps(c,0,(int32_t)c->r[3],0); // 803AA2DC
  if (crb(c,2)) { goto L_803AA2F8; } // 803AA2E0
  c->r[3]=R32(c->r[31]+0x00000000u); // 803AA2E4
  c->r[12]=R32(c->r[3]+0x00000000u); // 803AA2E8
  c->r[12]=R32(c->r[12]+0x00000060u); // 803AA2EC
  c->ctr=c->r[12]; // 803AA2F0
  if (true) { c->lr=0x803AA2F8u; dispatch(c,c->ctr); } // 803AA2F4
L_803AA2F8:;
  c->r[3]=R32(c->r[31]+0x00000000u); // 803AA2F8
  W32(c->r[3]+0x0000000Cu,c->r[31]); // 803AA2FC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 803AA300
  c->r[0]=R32(c->r[1]+0x00000014u); // 803AA304
  c->lr=c->r[0]; // 803AA308
  c->r[1]=c->r[1]+0x00000010u; // 803AA30C
  return; // 803AA310
}

// fn_803AA314
void f_803AA314(Ctx* __restrict c) {
  trace_call(0x803AA314u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803AA314
  c->r[0]=c->lr; // 803AA318
  W32(c->r[1]+0x00000014u,c->r[0]); // 803AA31C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 803AA320
  c->r[31]=c->r[3]|c->r[3]; // 803AA324
  W32(c->r[3]+0x00000000u,c->r[4]); // 803AA328
  c->r[3]=c->r[4]|c->r[4]; // 803AA32C
  c->lr=0x803AA334u; f_8039CB98(c); // 803AA330
  cmps(c,0,(int32_t)c->r[3],0); // 803AA334
  if (crb(c,2)) { goto L_803AA344; } // 803AA338
  c->r[3]=R32(c->r[31]+0x00000000u); // 803AA33C
  c->lr=0x803AA344u; f_8039CBC0(c); // 803AA340
L_803AA344:;
  c->r[3]=R32(c->r[31]+0x00000000u); // 803AA344
  W32(c->r[3]+0x00000008u,c->r[31]); // 803AA348
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 803AA34C
  c->r[0]=R32(c->r[1]+0x00000014u); // 803AA350
  c->lr=c->r[0]; // 803AA354
  c->r[1]=c->r[1]+0x00000010u; // 803AA358
  return; // 803AA35C
}

// DetachSound__Q34nw4r3snd11SoundHandleFv
void f_803AA360(Ctx* __restrict c) {
  trace_call(0x803AA360u);
  c->r[4]=R32(c->r[3]+0x00000000u); // 803AA360
  cmps(c,0,(int32_t)c->r[4],0); // 803AA364
  if (crb(c,2)) { goto L_803AA398; } // 803AA368
  c->r[0]=R32(c->r[4]+0x00000008u); // 803AA36C
  cmpu(c,0,c->r[0],c->r[3]); // 803AA370
  if (!crb(c,2)) { goto L_803AA380; } // 803AA374
  c->r[0]=0u+0x00000000u; // 803AA378
  W32(c->r[4]+0x00000008u,c->r[0]); // 803AA37C
L_803AA380:;
  c->r[4]=R32(c->r[3]+0x00000000u); // 803AA380
  c->r[0]=R32(c->r[4]+0x0000000Cu); // 803AA384
  cmpu(c,0,c->r[0],c->r[3]); // 803AA388
  if (!crb(c,2)) { goto L_803AA398; } // 803AA38C
  c->r[0]=0u+0x00000000u; // 803AA390
  W32(c->r[4]+0x0000000Cu,c->r[0]); // 803AA394
L_803AA398:;
  c->r[0]=R32(c->r[3]+0x00000000u); // 803AA398
  cmps(c,0,(int32_t)c->r[0],0); // 803AA39C
  if (crb(c,2)) return; // 803AA3A0
  c->r[0]=0u+0x00000000u; // 803AA3A4
  W32(c->r[3]+0x00000000u,c->r[0]); // 803AA3A8
  return; // 803AA3AC
}

// __ct__Q34nw4r3snd9SoundHeapFv
void f_803AA3B0(Ctx* __restrict c) {
  trace_call(0x803AA3B0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803AA3B0
  c->r[0]=c->lr; // 803AA3B4
  c->r[4]=0u+0x80430000u; // 803AA3B8
  W32(c->r[1]+0x00000014u,c->r[0]); // 803AA3BC
  c->r[4]=c->r[4]+0x00007550u; // 803AA3C0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 803AA3C4
  c->r[31]=c->r[3]|c->r[3]; // 803AA3C8
  W32(c->r[3]+0x00000000u,c->r[4]); // 803AA3CC
  c->r[3]=c->r[3]+0x0000001Cu; // 803AA3D0
  c->lr=0x803AA3D8u; f_8039EB78(c); // 803AA3D4
  c->r[3]=c->r[31]+0x00000004u; // 803AA3D8
  c->lr=0x803AA3E0u; f_8025FC94(c); // 803AA3DC
  c->r[3]=c->r[31]|c->r[31]; // 803AA3E0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 803AA3E4
  c->r[0]=R32(c->r[1]+0x00000014u); // 803AA3E8
  c->lr=c->r[0]; // 803AA3EC
  c->r[1]=c->r[1]+0x00000010u; // 803AA3F0
  return; // 803AA3F4
}

// __dt__Q34nw4r3snd9SoundHeapFv
void f_803AA3F8(Ctx* __restrict c) {
  trace_call(0x803AA3F8u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803AA3F8
  c->r[0]=c->lr; // 803AA3FC
  cmps(c,0,(int32_t)c->r[3],0); // 803AA400
  W32(c->r[1]+0x00000014u,c->r[0]); // 803AA404
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 803AA408
  c->r[31]=c->r[4]|c->r[4]; // 803AA40C
  W32(c->r[1]+0x00000008u,c->r[30]); // 803AA410
  c->r[30]=c->r[3]|c->r[3]; // 803AA414
  if (crb(c,2)) { goto L_803AA44C; } // 803AA418
  c->r[4]=0u+0x80430000u; // 803AA41C
  c->r[4]=c->r[4]+0x00007550u; // 803AA420
  W32(c->r[3]+0x00000000u,c->r[4]); // 803AA424
  c->r[3]=c->r[3]+0x0000001Cu; // 803AA428
  c->lr=0x803AA430u; f_8039EE4C(c); // 803AA42C
  c->r[3]=c->r[30]+0x0000001Cu; // 803AA430
  c->r[4]=0u+0xFFFFFFFFu; // 803AA434
  c->lr=0x803AA43Cu; f_8039EB9C(c); // 803AA438
  cmps(c,0,(int32_t)c->r[31],0); // 803AA43C
  if (!crb(c,1)) { goto L_803AA44C; } // 803AA440
  c->r[3]=c->r[30]|c->r[30]; // 803AA444
  c->lr=0x803AA44Cu; f_802896EC(c); // 803AA448
L_803AA44C:;
  c->r[3]=c->r[30]|c->r[30]; // 803AA44C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 803AA450
  c->r[30]=R32(c->r[1]+0x00000008u); // 803AA454
  c->r[0]=R32(c->r[1]+0x00000014u); // 803AA458
  c->lr=c->r[0]; // 803AA45C
  c->r[1]=c->r[1]+0x00000010u; // 803AA460
  return; // 803AA464
}

// fn_803AA468
void f_803AA468(Ctx* __restrict c) {
  trace_call(0x803AA468u);
  c->r[3]=c->r[3]+0x0000001Cu; // 803AA468
  f_8039ECB0(c); return; // 803AA46C
}

// Alloc__Q34nw4r3snd9SoundHeapFUl
void f_803AA470(Ctx* __restrict c) {
  trace_call(0x803AA470u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803AA470
  c->r[0]=c->lr; // 803AA474
  W32(c->r[1]+0x00000024u,c->r[0]); // 803AA478
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 803AA47C
  c->r[31]=c->r[3]+0x00000004u; // 803AA480
  W32(c->r[1]+0x00000018u,c->r[30]); // 803AA484
  c->r[30]=c->r[4]|c->r[4]; // 803AA488
  W32(c->r[1]+0x00000014u,c->r[29]); // 803AA48C
  c->r[29]=c->r[3]|c->r[3]; // 803AA490
  c->r[3]=c->r[31]|c->r[31]; // 803AA494
  c->lr=0x803AA49Cu; f_8025FCCC(c); // 803AA498
  c->r[5]=0u+0x803B0000u; // 803AA49C
  c->r[4]=c->r[30]|c->r[30]; // 803AA4A0
  c->r[3]=c->r[29]+0x0000001Cu; // 803AA4A4
  c->r[6]=0u+0x00000000u; // 803AA4A8
  c->r[5]=c->r[5]+0xFFFFA60Cu; // 803AA4AC
  c->lr=0x803AA4B4u; f_8039F068(c); // 803AA4B0
  c->r[30]=c->r[3]|c->r[3]; // 803AA4B4
  c->r[3]=c->r[31]|c->r[31]; // 803AA4B8
  c->lr=0x803AA4C0u; f_8025FDA8(c); // 803AA4BC
  c->r[3]=c->r[30]|c->r[30]; // 803AA4C0
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 803AA4C4
  c->r[30]=R32(c->r[1]+0x00000018u); // 803AA4C8
  c->r[29]=R32(c->r[1]+0x00000014u); // 803AA4CC
  c->r[0]=R32(c->r[1]+0x00000024u); // 803AA4D0
  c->lr=c->r[0]; // 803AA4D4
  c->r[1]=c->r[1]+0x00000020u; // 803AA4D8
  return; // 803AA4DC
}

// Clear__Q34nw4r3snd9SoundHeapFv
void f_803AA4E0(Ctx* __restrict c) {
  trace_call(0x803AA4E0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803AA4E0
  c->r[0]=c->lr; // 803AA4E4
  W32(c->r[1]+0x00000014u,c->r[0]); // 803AA4E8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 803AA4EC
  c->r[31]=c->r[3]+0x00000004u; // 803AA4F0
  W32(c->r[1]+0x00000008u,c->r[30]); // 803AA4F4
  c->r[30]=c->r[3]|c->r[3]; // 803AA4F8
  c->r[3]=c->r[31]|c->r[31]; // 803AA4FC
  c->lr=0x803AA504u; f_8025FCCC(c); // 803AA500
  c->lr=0x803AA508u; f_803ABEB8(c); // 803AA504
  c->r[3]=c->r[3]+0x00000354u; // 803AA508
  c->lr=0x803AA510u; f_8025FCCC(c); // 803AA50C
  c->r[3]=c->r[30]+0x0000001Cu; // 803AA510
  c->lr=0x803AA518u; f_8039EF3C(c); // 803AA514
  c->lr=0x803AA51Cu; f_803ABEB8(c); // 803AA518
  c->r[3]=c->r[3]+0x00000354u; // 803AA51C
  c->lr=0x803AA524u; f_8025FDA8(c); // 803AA520
  c->r[3]=c->r[31]|c->r[31]; // 803AA524
  c->lr=0x803AA52Cu; f_8025FDA8(c); // 803AA528
  c->r[0]=R32(c->r[1]+0x00000014u); // 803AA52C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 803AA530
  c->r[30]=R32(c->r[1]+0x00000008u); // 803AA534
  c->lr=c->r[0]; // 803AA538
  c->r[1]=c->r[1]+0x00000010u; // 803AA53C
  return; // 803AA540
}

// fn_803AA544
void f_803AA544(Ctx* __restrict c) {
  trace_call(0x803AA544u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803AA544
  c->r[0]=c->lr; // 803AA548
  W32(c->r[1]+0x00000014u,c->r[0]); // 803AA54C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 803AA550
  c->r[31]=c->r[3]+0x00000004u; // 803AA554
  W32(c->r[1]+0x00000008u,c->r[30]); // 803AA558
  c->r[30]=c->r[3]|c->r[3]; // 803AA55C
  c->r[3]=c->r[31]|c->r[31]; // 803AA560
  c->lr=0x803AA568u; f_8025FCCC(c); // 803AA564
  c->r[3]=c->r[30]+0x0000001Cu; // 803AA568
  c->lr=0x803AA570u; f_8039F10C(c); // 803AA56C
  c->r[30]=c->r[3]|c->r[3]; // 803AA570
  c->r[3]=c->r[31]|c->r[31]; // 803AA574
  c->lr=0x803AA57Cu; f_8025FDA8(c); // 803AA578
  c->r[3]=c->r[30]|c->r[30]; // 803AA57C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 803AA580
  c->r[30]=R32(c->r[1]+0x00000008u); // 803AA584
  c->r[0]=R32(c->r[1]+0x00000014u); // 803AA588
  c->lr=c->r[0]; // 803AA58C
  c->r[1]=c->r[1]+0x00000010u; // 803AA590
  return; // 803AA594
}

// fn_803AA598
void f_803AA598(Ctx* __restrict c) {
  trace_call(0x803AA598u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803AA598
  c->r[0]=c->lr; // 803AA59C
  W32(c->r[1]+0x00000024u,c->r[0]); // 803AA5A0
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 803AA5A4
  c->r[31]=c->r[3]+0x00000004u; // 803AA5A8
  W32(c->r[1]+0x00000018u,c->r[30]); // 803AA5AC
  c->r[30]=c->r[4]|c->r[4]; // 803AA5B0
  W32(c->r[1]+0x00000014u,c->r[29]); // 803AA5B4
  c->r[29]=c->r[3]|c->r[3]; // 803AA5B8
  c->r[3]=c->r[31]|c->r[31]; // 803AA5BC
  c->lr=0x803AA5C4u; f_8025FCCC(c); // 803AA5C0
  c->lr=0x803AA5C8u; f_803ABEB8(c); // 803AA5C4
  c->r[3]=c->r[3]+0x00000354u; // 803AA5C8
  c->lr=0x803AA5D0u; f_8025FCCC(c); // 803AA5CC
  c->r[4]=c->r[30]|c->r[30]; // 803AA5D0
  c->r[3]=c->r[29]+0x0000001Cu; // 803AA5D4
  c->lr=0x803AA5DCu; f_8039F1D8(c); // 803AA5D8
  c->lr=0x803AA5E0u; f_803ABEB8(c); // 803AA5DC
  c->r[3]=c->r[3]+0x00000354u; // 803AA5E0
  c->lr=0x803AA5E8u; f_8025FDA8(c); // 803AA5E4
  c->r[3]=c->r[31]|c->r[31]; // 803AA5E8
  c->lr=0x803AA5F0u; f_8025FDA8(c); // 803AA5EC
  c->r[0]=R32(c->r[1]+0x00000024u); // 803AA5F0
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 803AA5F4
  c->r[30]=R32(c->r[1]+0x00000018u); // 803AA5F8
  c->r[29]=R32(c->r[1]+0x00000014u); // 803AA5FC
  c->lr=c->r[0]; // 803AA600
  c->r[1]=c->r[1]+0x00000020u; // 803AA604
  return; // 803AA608
}

// DisposeCallbackFunc__Q34nw4r3snd9SoundHeapFPvUlPv
void f_803AA60C(Ctx* __restrict c) {
  trace_call(0x803AA60Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803AA60C
  c->r[0]=c->lr; // 803AA610
  W32(c->r[1]+0x00000024u,c->r[0]); // 803AA614
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 803AA618
  c->r[31]=c->r[5]|c->r[5]; // 803AA61C
  W32(c->r[1]+0x00000018u,c->r[30]); // 803AA620
  c->r[30]=c->r[4]|c->r[4]; // 803AA624
  W32(c->r[1]+0x00000014u,c->r[29]); // 803AA628
  c->r[29]=c->r[3]|c->r[3]; // 803AA62C
  c->lr=0x803AA634u; f_8039DC24(c); // 803AA630
  c->r[4]=c->r[29]|c->r[29]; // 803AA634
  c->r[5]=c->r[30]|c->r[30]; // 803AA638
  c->r[6]=c->r[31]|c->r[31]; // 803AA63C
  c->lr=0x803AA644u; f_8039DD3C(c); // 803AA640
  c->lr=0x803AA648u; f_8039DC24(c); // 803AA644
  c->r[4]=c->r[29]|c->r[29]; // 803AA648
  c->r[5]=c->r[30]|c->r[30]; // 803AA64C
  c->r[6]=c->r[31]|c->r[31]; // 803AA650
  c->lr=0x803AA658u; f_8039DE60(c); // 803AA654
  c->r[0]=R32(c->r[1]+0x00000024u); // 803AA658
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 803AA65C
  c->r[30]=R32(c->r[1]+0x00000018u); // 803AA660
  c->r[29]=R32(c->r[1]+0x00000014u); // 803AA664
  c->lr=c->r[0]; // 803AA668
  c->r[1]=c->r[1]+0x00000020u; // 803AA66C
  return; // 803AA670
}

// fn_803AA674
void f_803AA674(Ctx* __restrict c) {
  trace_call(0x803AA674u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803AA674
  c->r[0]=c->lr; // 803AA678
  c->r[4]=c->r[3]+0x00000004u; // 803AA67C
  c->r[5]=c->r[3]+0x00000010u; // 803AA680
  W32(c->r[1]+0x00000024u,c->r[0]); // 803AA684
  c->r[6]=c->r[3]+0x0000001Cu; // 803AA688
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 803AA68C
  c->r[31]=0u+0x00000001u; // 803AA690
  W32(c->r[1]+0x00000018u,c->r[30]); // 803AA694
  c->r[30]=0u+0x00000000u; // 803AA698
  W32(c->r[1]+0x00000014u,c->r[29]); // 803AA69C
  c->r[29]=c->r[3]|c->r[3]; // 803AA6A0
  W32(c->r[3]+0x00000004u,c->r[30]); // 803AA6A4
  W32(c->r[3]+0x00000008u,c->r[30]); // 803AA6A8
  W32(c->r[3]+0x00000010u,c->r[30]); // 803AA6AC
  W32(c->r[3]+0x00000014u,c->r[30]); // 803AA6B0
  W32(c->r[3]+0x0000001Cu,c->r[30]); // 803AA6B4
  W32(c->r[3]+0x00000020u,c->r[30]); // 803AA6B8
  W32(c->r[3]+0x00000000u,c->r[30]); // 803AA6BC
  W32(c->r[3]+0x00000004u,c->r[4]); // 803AA6C0
  W32(c->r[3]+0x00000008u,c->r[4]); // 803AA6C4
  W32(c->r[3]+0x0000000Cu,c->r[30]); // 803AA6C8
  W32(c->r[3]+0x00000010u,c->r[5]); // 803AA6CC
  W32(c->r[3]+0x00000014u,c->r[5]); // 803AA6D0
  W32(c->r[3]+0x00000018u,c->r[30]); // 803AA6D4
  W32(c->r[3]+0x0000001Cu,c->r[6]); // 803AA6D8
  W32(c->r[3]+0x00000020u,c->r[6]); // 803AA6DC
  W16(c->r[3]+0x00000024u,c->r[31]); // 803AA6E0
  W16(c->r[3]+0x00000026u,c->r[31]); // 803AA6E4
  W8(c->r[3]+0x0000002Du,c->r[30]); // 803AA6E8
  c->r[3]=c->r[3]+0x00000048u; // 803AA6EC
  c->lr=0x803AA6F4u; f_8025FC94(c); // 803AA6F0
  {uint32_t ea=c->r[2]+0xFFFFEF60u; c->f[0]=c->ps1[0]=RF32(ea);} // 803AA6F4
  c->r[3]=c->r[29]|c->r[29]; // 803AA6F8
  W32(c->r[29]+0x00000030u,c->r[31]); // 803AA6FC
  {uint32_t ea=c->r[29]+0x00000028u; WF32(ea,c->f[0]);} // 803AA700
  W8(c->r[29]+0x0000002Cu,c->r[30]); // 803AA704
  {uint32_t ea=c->r[29]+0x00000034u; WF32(ea,c->f[0]);} // 803AA708
  {uint32_t ea=c->r[29]+0x00000038u; WF32(ea,c->f[0]);} // 803AA70C
  {uint32_t ea=c->r[29]+0x0000003Cu; WF32(ea,c->f[0]);} // 803AA710
  {uint32_t ea=c->r[29]+0x00000040u; WF32(ea,c->f[0]);} // 803AA714
  {uint32_t ea=c->r[29]+0x00000044u; WF32(ea,c->f[0]);} // 803AA718
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 803AA71C
  c->r[30]=R32(c->r[1]+0x00000018u); // 803AA720
  c->r[29]=R32(c->r[1]+0x00000014u); // 803AA724
  c->r[0]=R32(c->r[1]+0x00000024u); // 803AA728
  c->lr=c->r[0]; // 803AA72C
  c->r[1]=c->r[1]+0x00000020u; // 803AA730
  return; // 803AA734
}

// fn_803AA738
void f_803AA738(Ctx* __restrict c) {
  trace_call(0x803AA738u);
  c->r[0]=0u+0x00000000u; // 803AA738
  c->r[4]=c->r[3]+0x00000004u; // 803AA73C
  W32(c->r[3]+0x00000004u,c->r[0]); // 803AA740
  W32(c->r[3]+0x00000008u,c->r[0]); // 803AA744
  W32(c->r[3]+0x00000000u,c->r[0]); // 803AA748
  W32(c->r[3]+0x00000004u,c->r[4]); // 803AA74C
  W32(c->r[3]+0x00000008u,c->r[4]); // 803AA750
  return; // 803AA754
}

// fn_803AA758
void f_803AA758(Ctx* __restrict c) {
  trace_call(0x803AA758u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803AA758
  c->r[0]=c->lr; // 803AA75C
  cmps(c,0,(int32_t)c->r[3],0); // 803AA760
  W32(c->r[1]+0x00000014u,c->r[0]); // 803AA764
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 803AA768
  c->r[31]=c->r[4]|c->r[4]; // 803AA76C
  W32(c->r[1]+0x00000008u,c->r[30]); // 803AA770
  c->r[30]=c->r[3]|c->r[3]; // 803AA774
  if (crb(c,2)) { goto L_803AA794; } // 803AA778
  c->r[4]=0u+0x00000000u; // 803AA77C
  c->lr=0x803AA784u; f_803B4FA4(c); // 803AA780
  cmps(c,0,(int32_t)c->r[31],0); // 803AA784
  if (!crb(c,1)) { goto L_803AA794; } // 803AA788
  c->r[3]=c->r[30]|c->r[30]; // 803AA78C
  c->lr=0x803AA794u; f_802896EC(c); // 803AA790
L_803AA794:;
  c->r[3]=c->r[30]|c->r[30]; // 803AA794
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 803AA798
  c->r[30]=R32(c->r[1]+0x00000008u); // 803AA79C
  c->r[0]=R32(c->r[1]+0x00000014u); // 803AA7A0
  c->lr=c->r[0]; // 803AA7A4
  c->r[1]=c->r[1]+0x00000010u; // 803AA7A8
  return; // 803AA7AC
}

// fn_803AA7B0
void f_803AA7B0(Ctx* __restrict c) {
  trace_call(0x803AA7B0u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803AA7B0
  c->r[0]=c->lr; // 803AA7B4
  W32(c->r[1]+0x00000024u,c->r[0]); // 803AA7B8
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 803AA7BC
  W32(c->r[1]+0x00000018u,c->r[30]); // 803AA7C0
  W32(c->r[1]+0x00000014u,c->r[29]); // 803AA7C4
  c->r[29]=c->r[3]+0x00000048u; // 803AA7C8
  W32(c->r[1]+0x00000010u,c->r[28]); // 803AA7CC
  c->r[28]=c->r[3]|c->r[3]; // 803AA7D0
  c->r[3]=c->r[29]|c->r[29]; // 803AA7D4
  c->lr=0x803AA7DCu; f_8025FCCC(c); // 803AA7D8
  c->r[31]=R32(c->r[28]+0x00000004u); // 803AA7DC
  c->r[30]=c->r[28]+0x00000004u; // 803AA7E0
  goto L_803AA800; // 803AA7E4
L_803AA7E8:;
  c->r[3]=c->r[31]|c->r[31]; // 803AA7E8
  {uint32_t ea=c->r[3]+0xFFFFFF40u; c->r[12]=R32(ea); c->r[3]=ea;} // 803AA7EC
  c->r[31]=R32(c->r[31]+0x00000000u); // 803AA7F0
  c->r[12]=R32(c->r[12]+0x00000010u); // 803AA7F4
  c->ctr=c->r[12]; // 803AA7F8
  if (true) { c->lr=0x803AA800u; dispatch(c,c->ctr); } // 803AA7FC
L_803AA800:;
  cmpu(c,0,c->r[31],c->r[30]); // 803AA800
  if (!crb(c,2)) { IRQCHK(c); goto L_803AA7E8; } // 803AA804
  c->r[3]=c->r[28]|c->r[28]; // 803AA808
  c->lr=0x803AA810u; f_803AAA94(c); // 803AA80C
  c->r[3]=c->r[29]|c->r[29]; // 803AA810
  c->lr=0x803AA818u; f_8025FDA8(c); // 803AA814
  c->r[0]=R32(c->r[1]+0x00000024u); // 803AA818
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 803AA81C
  c->r[30]=R32(c->r[1]+0x00000018u); // 803AA820
  c->r[29]=R32(c->r[1]+0x00000014u); // 803AA824
  c->r[28]=R32(c->r[1]+0x00000010u); // 803AA828
  c->lr=c->r[0]; // 803AA82C
  c->r[1]=c->r[1]+0x00000020u; // 803AA830
  return; // 803AA834
}

// fn_803AA838
void f_803AA838(Ctx* __restrict c) {
  trace_call(0x803AA838u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803AA838
  c->r[0]=c->lr; // 803AA83C
  W32(c->r[1]+0x00000024u,c->r[0]); // 803AA840
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 803AA844
  c->r[31]=c->r[3]|c->r[3]; // 803AA848
  W32(c->r[1]+0x00000018u,c->r[30]); // 803AA84C
  W32(c->r[1]+0x00000014u,c->r[29]); // 803AA850
  c->r[29]=c->r[3]+0x00000048u; // 803AA854
  c->r[3]=c->r[29]|c->r[29]; // 803AA858
  W32(c->r[1]+0x00000010u,c->r[28]); // 803AA85C
  c->r[28]=c->r[4]|c->r[4]; // 803AA860
  c->lr=0x803AA868u; f_8025FCCC(c); // 803AA864
  {uint32_t ea=c->r[31]+0x00000004u; c->r[30]=R32(ea); c->r[31]=ea;} // 803AA868
  goto L_803AA88C; // 803AA86C
L_803AA870:;
  c->r[3]=c->r[30]+0xFFFFFF40u; // 803AA870
  c->r[4]=c->r[28]|c->r[28]; // 803AA874
  c->r[12]=R32(c->r[3]+0x00000000u); // 803AA878
  c->r[30]=R32(c->r[30]+0x00000000u); // 803AA87C
  c->r[12]=R32(c->r[12]+0x00000018u); // 803AA880
  c->ctr=c->r[12]; // 803AA884
  if (true) { c->lr=0x803AA88Cu; dispatch(c,c->ctr); } // 803AA888
L_803AA88C:;
  cmpu(c,0,c->r[30],c->r[31]); // 803AA88C
  if (!crb(c,2)) { IRQCHK(c); goto L_803AA870; } // 803AA890
  c->r[3]=c->r[29]|c->r[29]; // 803AA894
  c->lr=0x803AA89Cu; f_8025FDA8(c); // 803AA898
  c->r[0]=R32(c->r[1]+0x00000024u); // 803AA89C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 803AA8A0
  c->r[30]=R32(c->r[1]+0x00000018u); // 803AA8A4
  c->r[29]=R32(c->r[1]+0x00000014u); // 803AA8A8
  c->r[28]=R32(c->r[1]+0x00000010u); // 803AA8AC
  c->lr=c->r[0]; // 803AA8B0
  c->r[1]=c->r[1]+0x00000020u; // 803AA8B4
  return; // 803AA8B8
}

// fn_803AA8BC
void f_803AA8BC(Ctx* __restrict c) {
  trace_call(0x803AA8BCu);
  {uint32_t ea=c->r[2]+0xFFFFEF60u; c->f[0]=c->ps1[0]=RF32(ea);} // 803AA8BC
  fcmp(c,0,c->f[1],c->f[0]); // 803AA8C0
  if (!crb(c,1)) { goto L_803AA8CC; } // 803AA8C4
  goto L_803AA8E0; // 803AA8C8
L_803AA8CC:;
  {uint32_t ea=c->r[2]+0xFFFFEF64u; c->f[0]=c->ps1[0]=RF32(ea);} // 803AA8CC
  fcmp(c,0,c->f[1],c->f[0]); // 803AA8D0
  if (!crb(c,0)) { goto L_803AA8DC; } // 803AA8D4
  goto L_803AA8E0; // 803AA8D8
L_803AA8DC:;
  c->f[0]=c->f[1]; // 803AA8DC
L_803AA8E0:;
  {uint32_t ea=c->r[3]+0x00000028u; WF32(ea,c->f[0]);} // 803AA8E0
  return; // 803AA8E4
}

// fn_803AA8E8
void f_803AA8E8(Ctx* __restrict c) {
  trace_call(0x803AA8E8u);
  c->r[3]=R32(c->r[3]+0x00000030u); // 803AA8E8
  return; // 803AA8EC
}

// fn_803AA8F0
void f_803AA8F0(Ctx* __restrict c) {
  trace_call(0x803AA8F0u);
  c->r[3]=R8(c->r[3]+0x0000002Cu); // 803AA8F0
  return; // 803AA8F4
}

// fn_803AA8F8
void f_803AA8F8(Ctx* __restrict c) {
  trace_call(0x803AA8F8u);
  c->r[0]=rotl(c->r[4],2)&0xFFFFFFFCu; // 803AA8F8
  c->r[3]=c->r[3]+c->r[0]; // 803AA8FC
  {uint32_t ea=c->r[3]+0x00000038u; c->f[1]=c->ps1[1]=RF32(ea);} // 803AA900
  return; // 803AA904
}

// fn_803AA908
void f_803AA908(Ctx* __restrict c) {
  trace_call(0x803AA908u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803AA908
  c->r[0]=c->lr; // 803AA90C
  W32(c->r[1]+0x00000024u,c->r[0]); // 803AA910
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 803AA914
  c->r[31]=c->r[3]+0x00000048u; // 803AA918
  W32(c->r[1]+0x00000018u,c->r[30]); // 803AA91C
  c->r[30]=c->r[4]|c->r[4]; // 803AA920
  W32(c->r[1]+0x00000014u,c->r[29]); // 803AA924
  c->r[29]=c->r[3]|c->r[3]; // 803AA928
  c->r[3]=c->r[31]|c->r[31]; // 803AA92C
  c->lr=0x803AA934u; f_8025FCCC(c); // 803AA930
  c->r[3]=c->r[29]|c->r[29]; // 803AA934
  c->r[4]=c->r[30]+0x000000C0u; // 803AA938
  c->lr=0x803AA940u; f_803B50E0(c); // 803AA93C
  c->r[0]=0u+0x00000000u; // 803AA940
  c->r[3]=c->r[31]|c->r[31]; // 803AA944
  W32(c->r[30]+0x00000010u,c->r[0]); // 803AA948
  c->lr=0x803AA950u; f_8025FDA8(c); // 803AA94C
  c->r[0]=R32(c->r[1]+0x00000024u); // 803AA950
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 803AA954
  c->r[30]=R32(c->r[1]+0x00000018u); // 803AA958
  c->r[29]=R32(c->r[1]+0x00000014u); // 803AA95C
  c->lr=c->r[0]; // 803AA960
  c->r[1]=c->r[1]+0x00000020u; // 803AA964
  return; // 803AA968
}

// fn_803AA96C
void f_803AA96C(Ctx* __restrict c) {
  trace_call(0x803AA96Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803AA96C
  c->r[0]=c->lr; // 803AA970
  W32(c->r[1]+0x00000024u,c->r[0]); // 803AA974
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 803AA978
  c->r[31]=c->r[3]+0x00000048u; // 803AA97C
  W32(c->r[1]+0x00000018u,c->r[30]); // 803AA980
  c->r[30]=c->r[4]|c->r[4]; // 803AA984
  W32(c->r[1]+0x00000014u,c->r[29]); // 803AA988
  c->r[29]=c->r[3]|c->r[3]; // 803AA98C
  c->r[3]=c->r[31]|c->r[31]; // 803AA990
  c->lr=0x803AA998u; f_8025FCCC(c); // 803AA994
  c->r[3]=R32(c->r[29]+0x00000010u); // 803AA998
  c->r[0]=c->r[29]+0x00000010u; // 803AA99C
  goto L_803AA9F8; // 803AA9A0
L_803AA9A4:;
  c->r[5]=R8(c->r[3]+0xFFFFFFACu); // 803AA9A4
  c->r[4]=R32(c->r[3]+0xFFFFFF78u); // 803AA9A8
  c->r[5]=c->r[5]+c->r[4]; // 803AA9AC
  cmps(c,0,(int32_t)c->r[5],127); // 803AA9B0
  if (!crb(c,1)) { goto L_803AA9C0; } // 803AA9B4
  c->r[6]=0u+0x0000007Fu; // 803AA9B8
  goto L_803AA9C8; // 803AA9BC
L_803AA9C0:;
  c->r[4]=sraw(c,c->r[5],31); // 803AA9C0
  c->r[6]=c->r[5]&~c->r[4]; // 803AA9C4
L_803AA9C8:;
  c->r[5]=R8(c->r[30]+0x00000074u); // 803AA9C8
  c->r[4]=R32(c->r[30]+0x00000040u); // 803AA9CC
  c->r[5]=c->r[5]+c->r[4]; // 803AA9D0
  cmps(c,0,(int32_t)c->r[5],127); // 803AA9D4
  if (!crb(c,1)) { goto L_803AA9E4; } // 803AA9D8
  c->r[4]=0u+0x0000007Fu; // 803AA9DC
  goto L_803AA9EC; // 803AA9E0
L_803AA9E4:;
  c->r[4]=sraw(c,c->r[5],31); // 803AA9E4
  c->r[4]=c->r[5]&~c->r[4]; // 803AA9E8
L_803AA9EC:;
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[6]); // 803AA9EC
  if (crb(c,0)) { goto L_803AAA00; } // 803AA9F0
  c->r[3]=R32(c->r[3]+0x00000000u); // 803AA9F4
L_803AA9F8:;
  cmpu(c,0,c->r[3],c->r[0]); // 803AA9F8
  if (!crb(c,2)) { IRQCHK(c); goto L_803AA9A4; } // 803AA9FC
L_803AAA00:;
  W32(c->r[1]+0x00000008u,c->r[3]); // 803AAA00
  c->r[3]=c->r[29]+0x0000000Cu; // 803AAA04
  c->r[4]=c->r[1]+0x00000008u; // 803AAA08
  c->r[5]=c->r[30]+0x000000C8u; // 803AAA0C
  c->lr=0x803AAA14u; f_803B50B4(c); // 803AAA10
  c->r[3]=c->r[31]|c->r[31]; // 803AAA14
  c->lr=0x803AAA1Cu; f_8025FDA8(c); // 803AAA18
  c->r[0]=R32(c->r[1]+0x00000024u); // 803AAA1C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 803AAA20
  c->r[30]=R32(c->r[1]+0x00000018u); // 803AAA24
  c->r[29]=R32(c->r[1]+0x00000014u); // 803AAA28
  c->lr=c->r[0]; // 803AAA2C
  c->r[1]=c->r[1]+0x00000020u; // 803AAA30
  return; // 803AAA34
}

// fn_803AAA38
void f_803AAA38(Ctx* __restrict c) {
  trace_call(0x803AAA38u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803AAA38
  c->r[0]=c->lr; // 803AAA3C
  W32(c->r[1]+0x00000024u,c->r[0]); // 803AAA40
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 803AAA44
  c->r[31]=c->r[3]+0x00000048u; // 803AAA48
  W32(c->r[1]+0x00000018u,c->r[30]); // 803AAA4C
  c->r[30]=c->r[4]|c->r[4]; // 803AAA50
  W32(c->r[1]+0x00000014u,c->r[29]); // 803AAA54
  c->r[29]=c->r[3]|c->r[3]; // 803AAA58
  c->r[3]=c->r[31]|c->r[31]; // 803AAA5C
  c->lr=0x803AAA64u; f_8025FCCC(c); // 803AAA60
  c->r[3]=c->r[29]+0x0000000Cu; // 803AAA64
  c->r[4]=c->r[30]+0x000000C8u; // 803AAA68
  c->lr=0x803AAA70u; f_803B50E0(c); // 803AAA6C
  c->r[3]=c->r[31]|c->r[31]; // 803AAA70
  c->lr=0x803AAA78u; f_8025FDA8(c); // 803AAA74
  c->r[0]=R32(c->r[1]+0x00000024u); // 803AAA78
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 803AAA7C
  c->r[30]=R32(c->r[1]+0x00000018u); // 803AAA80
  c->r[29]=R32(c->r[1]+0x00000014u); // 803AAA84
  c->lr=c->r[0]; // 803AAA88
  c->r[1]=c->r[1]+0x00000020u; // 803AAA8C
  return; // 803AAA90
}

// fn_803AAA94
void f_803AAA94(Ctx* __restrict c) {
  trace_call(0x803AAA94u);
  {uint32_t ea=c->r[1]+0xFFFFF9D0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803AAA94
  c->r[0]=c->lr; // 803AAA98
  W32(c->r[1]+0x00000634u,c->r[0]); // 803AAA9C
  c->r[11]=c->r[1]+0x00000630u; // 803AAAA0
  c->lr=0x803AAAA8u; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 803AAAA4
  c->r[30]=c->r[3]+0x00000048u; // 803AAAA8
  c->r[26]=c->r[3]|c->r[3]; // 803AAAAC
  c->r[3]=c->r[30]|c->r[30]; // 803AAAB0
  c->lr=0x803AAAB8u; f_8025FCCC(c); // 803AAAB4
  c->r[4]=0u+0x803B0000u; // 803AAAB8
  c->r[5]=0u+0x803B0000u; // 803AAABC
  c->r[3]=c->r[1]+0x00000018u; // 803AAAC0
  c->r[6]=0u+0x0000000Cu; // 803AAAC4
  c->r[4]=c->r[4]+0xFFFFA738u; // 803AAAC8
  c->r[5]=c->r[5]+0xFFFFA758u; // 803AAACC
  c->r[7]=0u+0x00000080u; // 803AAAD0
  c->lr=0x803AAAD8u; f_80289B34(c); // 803AAAD4
  goto L_803AAB34; // 803AAAD8
L_803AAADC:;
  c->r[29]=R32(c->r[26]+0x00000010u); // 803AAADC
  c->r[3]=c->r[26]+0x0000000Cu; // 803AAAE0
  c->r[4]=c->r[1]+0x00000014u; // 803AAAE4
  W32(c->r[1]+0x00000014u,c->r[29]); // 803AAAE8
  c->lr=0x803AAAF0u; f_803B5028(c); // 803AAAEC
  c->r[3]=R8(c->r[29]+0xFFFFFFACu); // 803AAAF0
  c->r[0]=R32(c->r[29]+0xFFFFFF78u); // 803AAAF4
  c->r[3]=c->r[3]+c->r[0]; // 803AAAF8
  cmps(c,0,(int32_t)c->r[3],127); // 803AAAFC
  if (!crb(c,1)) { goto L_803AAB0C; } // 803AAB00
  c->r[0]=0u+0x0000007Fu; // 803AAB04
  goto L_803AAB14; // 803AAB08
L_803AAB0C:;
  c->r[0]=sraw(c,c->r[3],31); // 803AAB0C
  c->r[0]=c->r[3]&~c->r[0]; // 803AAB10
L_803AAB14:;
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)12); // 803AAB14
  c->r[3]=c->r[1]+0x00000018u; // 803AAB18
  c->r[5]=c->r[29]|c->r[29]; // 803AAB1C
  c->r[4]=c->r[1]+0x00000010u; // 803AAB20
  c->r[3]=c->r[3]+c->r[0]; // 803AAB24
  c->r[0]=c->r[3]+0x00000004u; // 803AAB28
  W32(c->r[1]+0x00000010u,c->r[0]); // 803AAB2C
  c->lr=0x803AAB34u; f_803B50B4(c); // 803AAB30
L_803AAB34:;
  c->r[0]=R32(c->r[26]+0x0000000Cu); // 803AAB34
  cmps(c,0,(int32_t)c->r[0],0); // 803AAB38
  if (!crb(c,2)) { IRQCHK(c); goto L_803AAADC; } // 803AAB3C
  c->r[29]=c->r[1]+0x00000018u; // 803AAB40
  c->r[31]=c->r[26]+0x00000010u; // 803AAB44
  c->r[27]=0u+0x00000000u; // 803AAB48
L_803AAB4C:;
  c->r[0]=R32(c->r[29]+0x00000000u); // 803AAB4C
  cmps(c,0,(int32_t)c->r[0],0); // 803AAB50
  if (crb(c,2)) { goto L_803AAB90; } // 803AAB54
  goto L_803AAB84; // 803AAB58
L_803AAB5C:;
  c->r[28]=R32(c->r[29]+0x00000004u); // 803AAB5C
  c->r[3]=c->r[29]|c->r[29]; // 803AAB60
  c->r[4]=c->r[1]+0x0000000Cu; // 803AAB64
  W32(c->r[1]+0x0000000Cu,c->r[28]); // 803AAB68
  c->lr=0x803AAB70u; f_803B5028(c); // 803AAB6C
  W32(c->r[1]+0x00000008u,c->r[31]); // 803AAB70
  c->r[5]=c->r[28]|c->r[28]; // 803AAB74
  c->r[3]=c->r[26]+0x0000000Cu; // 803AAB78
  c->r[4]=c->r[1]+0x00000008u; // 803AAB7C
  c->lr=0x803AAB84u; f_803B50B4(c); // 803AAB80
L_803AAB84:;
  c->r[0]=R32(c->r[29]+0x00000000u); // 803AAB84
  cmps(c,0,(int32_t)c->r[0],0); // 803AAB88
  if (!crb(c,2)) { IRQCHK(c); goto L_803AAB5C; } // 803AAB8C
L_803AAB90:;
  c->r[27]=c->r[27]+0x00000001u; // 803AAB90
  c->r[29]=c->r[29]+0x0000000Cu; // 803AAB94
  cmps(c,0,(int32_t)c->r[27],128); // 803AAB98
  if (crb(c,0)) { IRQCHK(c); goto L_803AAB4C; } // 803AAB9C
  c->r[4]=0u+0x803B0000u; // 803AABA0
  c->r[3]=c->r[1]+0x00000018u; // 803AABA4
  c->r[4]=c->r[4]+0xFFFFA758u; // 803AABA8
  c->r[5]=0u+0x0000000Cu; // 803AABAC
  c->r[6]=0u+0x00000080u; // 803AABB0
  c->lr=0x803AABB8u; f_80289C2C(c); // 803AABB4
  c->r[3]=c->r[30]|c->r[30]; // 803AABB8
  c->lr=0x803AABC0u; f_8025FDA8(c); // 803AABBC
  c->r[11]=c->r[1]+0x00000630u; // 803AABC0
  c->lr=0x803AABC8u; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 803AABC4
  c->r[0]=R32(c->r[1]+0x00000634u); // 803AABC8
  c->lr=c->r[0]; // 803AABCC
  c->r[1]=c->r[1]+0x00000630u; // 803AABD0
  return; // 803AABD4
}

// fn_803AABD8
void f_803AABD8(Ctx* __restrict c) {
  trace_call(0x803AABD8u);
  {uint32_t ea=c->r[1]+0xFFFFFF90u; W32(ea,c->r[1]); c->r[1]=ea;} // 803AABD8
  c->r[0]=c->lr; // 803AABDC
  W32(c->r[1]+0x00000074u,c->r[0]); // 803AABE0
  c->r[11]=c->r[1]+0x00000070u; // 803AABE4
  c->lr=0x803AABECu; { W32(c->r[11]+0xFFFFFFD4u,c->r[21]); W32(c->r[11]+0xFFFFFFD8u,c->r[22]); W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 803AABE8
  c->r[30]=c->r[3]+0x00000048u; // 803AABEC
  c->r[22]=c->r[3]|c->r[3]; // 803AABF0
  c->r[23]=c->r[4]|c->r[4]; // 803AABF4
  c->r[27]=c->r[5]|c->r[5]; // 803AABF8
  c->r[24]=c->r[6]|c->r[6]; // 803AABFC
  c->r[25]=c->r[7]|c->r[7]; // 803AAC00
  c->r[21]=c->r[8]|c->r[8]; // 803AAC04
  c->r[26]=c->r[9]|c->r[9]; // 803AAC08
  c->r[3]=c->r[30]|c->r[30]; // 803AAC0C
  c->lr=0x803AAC14u; f_8025FCCC(c); // 803AAC10
  cmps(c,0,(int32_t)c->r[26],0); // 803AAC14
  if (!crb(c,2)) { goto L_803AAC2C; } // 803AAC18
  c->r[3]=c->r[30]|c->r[30]; // 803AAC1C
  c->lr=0x803AAC24u; f_8025FDA8(c); // 803AAC20
  c->r[3]=0u+0x00000000u; // 803AAC24
  goto L_803AAF78; // 803AAC28
L_803AAC2C:;
  cmps(c,0,(int32_t)c->r[24],0); // 803AAC2C
  c->r[29]=0u+0x00000000u; // 803AAC30
  if (crb(c,2)) { goto L_803AAC64; } // 803AAC34
  c->r[3]=R32(c->r[24]+0x00000000u); // 803AAC38
  c->r[5]=c->r[21]|c->r[21]; // 803AAC3C
  c->r[4]=c->r[1]+0x00000018u; // 803AAC40
  c->r[7]=R32(c->r[24]+0x0000000Cu); // 803AAC44
  c->r[12]=R32(c->r[3]+0x00000000u); // 803AAC48
  c->r[6]=0u+0x00000000u; // 803AAC4C
  c->r[8]=0u+0x00000008u; // 803AAC50
  c->r[12]=R32(c->r[12]+0x00000008u); // 803AAC54
  c->ctr=c->r[12]; // 803AAC58
  if (true) { c->lr=0x803AAC60u; dispatch(c,c->ctr); } // 803AAC5C
  c->r[29]=R32(c->r[1]+0x00000030u); // 803AAC60
L_803AAC64:;
  c->r[3]=c->r[27]+c->r[29]; // 803AAC64
  cmps(c,0,(int32_t)c->r[3],127); // 803AAC68
  if (!crb(c,1)) { goto L_803AAC78; } // 803AAC6C
  c->r[28]=0u+0x0000007Fu; // 803AAC70
  goto L_803AAC80; // 803AAC74
L_803AAC78:;
  c->r[0]=sraw(c,c->r[3],31); // 803AAC78
  c->r[28]=c->r[3]&~c->r[0]; // 803AAC7C
L_803AAC80:;
  c->r[3]=c->r[22]|c->r[22]; // 803AAC80
  c->r[4]=c->r[28]|c->r[28]; // 803AAC84
  c->r[5]=c->r[25]|c->r[25]; // 803AAC88
  c->lr=0x803AAC90u; f_803AB7A8(c); // 803AAC8C
  cmps(c,0,(int32_t)c->r[3],0); // 803AAC90
  if (!crb(c,2)) { goto L_803AACA8; } // 803AAC94
  c->r[3]=c->r[30]|c->r[30]; // 803AAC98
  c->lr=0x803AACA0u; f_8025FDA8(c); // 803AAC9C
  c->r[3]=0u+0x00000000u; // 803AACA0
  goto L_803AAF78; // 803AACA4
L_803AACA8:;
  c->r[31]=c->r[26]+0x00000010u; // 803AACA8
  c->r[3]=c->r[31]|c->r[31]; // 803AACAC
  c->lr=0x803AACB4u; f_8025FCCC(c); // 803AACB0
  c->r[27]=0u+0x00000000u; // 803AACB4
  goto L_803AAD7C; // 803AACB8
L_803AACBC:;
  c->r[3]=c->r[26]|c->r[26]; // 803AACBC
  c->lr=0x803AACC4u; f_803A0A40(c); // 803AACC0
  cmps(c,0,(int32_t)c->r[3],0); // 803AACC4
  if (crb(c,2)) { goto L_803AACE4; } // 803AACC8
  c->r[27]=c->r[3]|c->r[3]; // 803AACCC
  if (crb(c,2)) { goto L_803AAD7C; } // 803AACD0
  c->r[4]=c->r[26]|c->r[26]; // 803AACD4
  c->lr=0x803AACDCu; f_803A3E38(c); // 803AACD8
  c->r[27]=c->r[3]|c->r[3]; // 803AACDC
  goto L_803AAD7C; // 803AACE0
L_803AACE4:;
  c->r[0]=R32(c->r[26]+0x00000004u); // 803AACE4
  cmps(c,0,(int32_t)c->r[0],0); // 803AACE8
  if (!crb(c,2)) { goto L_803AACF8; } // 803AACEC
  c->r[21]=0u+0x00000000u; // 803AACF0
  goto L_803AAD00; // 803AACF4
L_803AACF8:;
  c->r[3]=R32(c->r[26]+0x00000008u); // 803AACF8
  c->r[21]=c->r[3]+0xFFFFFF48u; // 803AACFC
L_803AAD00:;
  cmps(c,0,(int32_t)c->r[21],0); // 803AAD00
  if (!crb(c,2)) { goto L_803AAD18; } // 803AAD04
  c->r[3]=c->r[31]|c->r[31]; // 803AAD08
  c->lr=0x803AAD10u; f_8025FDA8(c); // 803AAD0C
  c->r[27]=0u+0x00000000u; // 803AAD10
  goto L_803AADE4; // 803AAD14
L_803AAD18:;
  c->r[3]=R8(c->r[21]+0x00000074u); // 803AAD18
  c->r[0]=R32(c->r[21]+0x00000040u); // 803AAD1C
  c->r[3]=c->r[3]+c->r[0]; // 803AAD20
  cmps(c,0,(int32_t)c->r[3],127); // 803AAD24
  if (!crb(c,1)) { goto L_803AAD34; } // 803AAD28
  c->r[0]=0u+0x0000007Fu; // 803AAD2C
  goto L_803AAD3C; // 803AAD30
L_803AAD34:;
  c->r[0]=sraw(c,c->r[3],31); // 803AAD34
  c->r[0]=c->r[3]&~c->r[0]; // 803AAD38
L_803AAD3C:;
  cmps(c,0,(int32_t)c->r[28],(int32_t)c->r[0]); // 803AAD3C
  if (!crb(c,0)) { goto L_803AAD54; } // 803AAD40
  c->r[3]=c->r[31]|c->r[31]; // 803AAD44
  c->lr=0x803AAD4Cu; f_8025FDA8(c); // 803AAD48
  c->r[27]=0u+0x00000000u; // 803AAD4C
  goto L_803AADE4; // 803AAD50
L_803AAD54:;
  c->r[3]=c->r[26]+0x00000010u; // 803AAD54
  c->lr=0x803AAD5Cu; f_8025FDA8(c); // 803AAD58
  c->r[12]=R32(c->r[21]+0x00000000u); // 803AAD5C
  c->r[3]=c->r[21]|c->r[21]; // 803AAD60
  c->r[4]=0u+0x00000000u; // 803AAD64
  c->r[12]=R32(c->r[12]+0x00000018u); // 803AAD68
  c->ctr=c->r[12]; // 803AAD6C
  if (true) { c->lr=0x803AAD74u; dispatch(c,c->ctr); } // 803AAD70
  c->r[3]=c->r[26]+0x00000010u; // 803AAD74
  c->lr=0x803AAD7Cu; f_8025FCCC(c); // 803AAD78
L_803AAD7C:;
  cmps(c,0,(int32_t)c->r[27],0); // 803AAD7C
  if (crb(c,2)) { IRQCHK(c); goto L_803AACBC; } // 803AAD80
  c->r[3]=R32(c->r[26]+0x00000008u); // 803AAD84
  c->r[0]=c->r[26]+0x00000008u; // 803AAD88
  goto L_803AADC0; // 803AAD8C
L_803AAD90:;
  c->r[5]=R8(c->r[3]+0xFFFFFFBCu); // 803AAD90
  c->r[4]=R32(c->r[3]+0xFFFFFF88u); // 803AAD94
  c->r[5]=c->r[5]+c->r[4]; // 803AAD98
  cmps(c,0,(int32_t)c->r[5],127); // 803AAD9C
  if (!crb(c,1)) { goto L_803AADAC; } // 803AADA0
  c->r[4]=0u+0x0000007Fu; // 803AADA4
  goto L_803AADB4; // 803AADA8
L_803AADAC:;
  c->r[4]=sraw(c,c->r[5],31); // 803AADAC
  c->r[4]=c->r[5]&~c->r[4]; // 803AADB0
L_803AADB4:;
  cmps(c,0,(int32_t)c->r[28],(int32_t)c->r[4]); // 803AADB4
  if (crb(c,0)) { goto L_803AADC8; } // 803AADB8
  c->r[3]=R32(c->r[3]+0x00000000u); // 803AADBC
L_803AADC0:;
  cmpu(c,0,c->r[3],c->r[0]); // 803AADC0
  if (!crb(c,2)) { IRQCHK(c); goto L_803AAD90; } // 803AADC4
L_803AADC8:;
  W32(c->r[1]+0x00000014u,c->r[3]); // 803AADC8
  c->r[3]=c->r[26]+0x00000004u; // 803AADCC
  c->r[4]=c->r[1]+0x00000014u; // 803AADD0
  c->r[5]=c->r[27]+0x000000B8u; // 803AADD4
  c->lr=0x803AADDCu; f_803B50B4(c); // 803AADD8
  c->r[3]=c->r[31]|c->r[31]; // 803AADDC
  c->lr=0x803AADE4u; f_8025FDA8(c); // 803AADE0
L_803AADE4:;
  cmps(c,0,(int32_t)c->r[27],0); // 803AADE4
  if (!crb(c,2)) { goto L_803AADFC; } // 803AADE8
  c->r[3]=c->r[30]|c->r[30]; // 803AADEC
  c->lr=0x803AADF4u; f_8025FDA8(c); // 803AADF0
  c->r[3]=0u+0x00000000u; // 803AADF4
  goto L_803AAF78; // 803AADF8
L_803AADFC:;
  c->r[26]=c->r[22]+0x00000048u; // 803AADFC
  c->r[3]=c->r[26]|c->r[26]; // 803AAE00
  c->lr=0x803AAE08u; f_8025FCCC(c); // 803AAE04
  c->r[0]=R32(c->r[22]+0x00000018u); // 803AAE08
  cmps(c,0,(int32_t)c->r[0],0); // 803AAE0C
  if (!crb(c,2)) { goto L_803AAE20; } // 803AAE10
  c->r[3]=c->r[26]|c->r[26]; // 803AAE14
  c->lr=0x803AAE1Cu; f_8025FDA8(c); // 803AAE18
  goto L_803AAE50; // 803AAE1C
L_803AAE20:;
  c->r[5]=R32(c->r[22]+0x0000001Cu); // 803AAE20
  c->r[3]=c->r[22]+0x00000018u; // 803AAE24
  c->r[4]=c->r[1]+0x00000010u; // 803AAE28
  W32(c->r[1]+0x00000010u,c->r[5]); // 803AAE2C
  c->r[21]=c->r[5]+0xFFFFFFD4u; // 803AAE30
  c->lr=0x803AAE38u; f_803B5028(c); // 803AAE34
  W32(c->r[21]+0x00000034u,c->r[27]); // 803AAE38
  c->r[3]=c->r[21]|c->r[21]; // 803AAE3C
  W32(c->r[27]+0x00000004u,c->r[21]); // 803AAE40
  c->lr=0x803AAE48u; f_803AA4E0(c); // 803AAE44
  c->r[3]=c->r[26]|c->r[26]; // 803AAE48
  c->lr=0x803AAE50u; f_8025FDA8(c); // 803AAE4C
L_803AAE50:;
  cmps(c,0,(int32_t)c->r[24],0); // 803AAE50
  if (crb(c,2)) { goto L_803AAEA4; } // 803AAE54
  if (crb(c,2)) { goto L_803AAEA4; } // 803AAE58
  c->r[3]=R32(c->r[24]+0x00000008u); // 803AAE5C
  c->r[4]=R32(c->r[24]+0x00000010u); // 803AAE60
  c->r[12]=R32(c->r[3]+0x00000000u); // 803AAE64
  c->r[12]=R32(c->r[12]+0x00000008u); // 803AAE68
  c->ctr=c->r[12]; // 803AAE6C
  if (true) { c->lr=0x803AAE74u; dispatch(c,c->ctr); } // 803AAE70
  cmps(c,0,(int32_t)c->r[3],0); // 803AAE74
  c->r[21]=c->r[3]|c->r[3]; // 803AAE78
  if (crb(c,2)) { goto L_803AAEA4; } // 803AAE7C
  c->r[4]=R32(c->r[24]+0x0000000Cu); // 803AAE80
  c->r[5]=R32(c->r[24]+0x00000010u); // 803AAE84
  c->lr=0x803AAE8Cu; f_80235294(c); // 803AAE88
  c->r[4]=R32(c->r[24]+0x00000000u); // 803AAE8C
  c->r[3]=c->r[27]|c->r[27]; // 803AAE90
  c->r[5]=R32(c->r[24]+0x00000004u); // 803AAE94
  c->r[7]=c->r[21]|c->r[21]; // 803AAE98
  c->r[6]=R32(c->r[24]+0x00000008u); // 803AAE9C
  c->lr=0x803AAEA4u; f_8039CB84(c); // 803AAEA0
L_803AAEA4:;
  W8(c->r[27]+0x00000074u,c->r[23]); // 803AAEA4
  c->r[0]=c->r[22]+0x00000004u; // 803AAEA8
  c->r[3]=c->r[22]|c->r[22]; // 803AAEAC
  c->r[4]=c->r[1]+0x0000000Cu; // 803AAEB0
  W32(c->r[27]+0x00000040u,c->r[29]); // 803AAEB4
  c->r[5]=c->r[27]+0x000000C0u; // 803AAEB8
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 803AAEBC
  c->lr=0x803AAEC4u; f_803B50B4(c); // 803AAEC0
  cmps(c,0,(int32_t)c->r[25],0); // 803AAEC4
  W32(c->r[27]+0x00000010u,c->r[22]); // 803AAEC8
  if (crb(c,2)) { goto L_803AAEDC; } // 803AAECC
  c->r[3]=c->r[25]|c->r[25]; // 803AAED0
  c->r[4]=c->r[27]|c->r[27]; // 803AAED4
  c->lr=0x803AAEDCu; f_8039EA98(c); // 803AAED8
L_803AAEDC:;
  c->r[23]=c->r[22]+0x00000048u; // 803AAEDC
  c->r[3]=c->r[23]|c->r[23]; // 803AAEE0
  c->lr=0x803AAEE8u; f_8025FCCC(c); // 803AAEE4
  c->r[3]=R32(c->r[22]+0x00000010u); // 803AAEE8
  c->r[0]=c->r[22]+0x00000010u; // 803AAEEC
  goto L_803AAF48; // 803AAEF0
L_803AAEF4:;
  c->r[5]=R8(c->r[3]+0xFFFFFFACu); // 803AAEF4
  c->r[4]=R32(c->r[3]+0xFFFFFF78u); // 803AAEF8
  c->r[5]=c->r[5]+c->r[4]; // 803AAEFC
  cmps(c,0,(int32_t)c->r[5],127); // 803AAF00
  if (!crb(c,1)) { goto L_803AAF10; } // 803AAF04
  c->r[6]=0u+0x0000007Fu; // 803AAF08
  goto L_803AAF18; // 803AAF0C
L_803AAF10:;
  c->r[4]=sraw(c,c->r[5],31); // 803AAF10
  c->r[6]=c->r[5]&~c->r[4]; // 803AAF14
L_803AAF18:;
  c->r[5]=R8(c->r[27]+0x00000074u); // 803AAF18
  c->r[4]=R32(c->r[27]+0x00000040u); // 803AAF1C
  c->r[5]=c->r[5]+c->r[4]; // 803AAF20
  cmps(c,0,(int32_t)c->r[5],127); // 803AAF24
  if (!crb(c,1)) { goto L_803AAF34; } // 803AAF28
  c->r[4]=0u+0x0000007Fu; // 803AAF2C
  goto L_803AAF3C; // 803AAF30
L_803AAF34:;
  c->r[4]=sraw(c,c->r[5],31); // 803AAF34
  c->r[4]=c->r[5]&~c->r[4]; // 803AAF38
L_803AAF3C:;
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[6]); // 803AAF3C
  if (crb(c,0)) { goto L_803AAF50; } // 803AAF40
  c->r[3]=R32(c->r[3]+0x00000000u); // 803AAF44
L_803AAF48:;
  cmpu(c,0,c->r[3],c->r[0]); // 803AAF48
  if (!crb(c,2)) { IRQCHK(c); goto L_803AAEF4; } // 803AAF4C
L_803AAF50:;
  W32(c->r[1]+0x00000008u,c->r[3]); // 803AAF50
  c->r[3]=c->r[22]+0x0000000Cu; // 803AAF54
  c->r[4]=c->r[1]+0x00000008u; // 803AAF58
  c->r[5]=c->r[27]+0x000000C8u; // 803AAF5C
  c->lr=0x803AAF64u; f_803B50B4(c); // 803AAF60
  c->r[3]=c->r[23]|c->r[23]; // 803AAF64
  c->lr=0x803AAF6Cu; f_8025FDA8(c); // 803AAF68
  c->r[3]=c->r[30]|c->r[30]; // 803AAF6C
  c->lr=0x803AAF74u; f_8025FDA8(c); // 803AAF70
  c->r[3]=c->r[27]|c->r[27]; // 803AAF74
L_803AAF78:;
  c->r[11]=c->r[1]+0x00000070u; // 803AAF78
  c->lr=0x803AAF80u; { c->r[21]=R32(c->r[11]+0xFFFFFFD4u); c->r[22]=R32(c->r[11]+0xFFFFFFD8u); c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 803AAF7C
  c->r[0]=R32(c->r[1]+0x00000074u); // 803AAF80
  c->lr=c->r[0]; // 803AAF84
  c->r[1]=c->r[1]+0x00000070u; // 803AAF88
  return; // 803AAF8C
}

// fn_803AAF90
void f_803AAF90(Ctx* __restrict c) {
  trace_call(0x803AAF90u);
  {uint32_t ea=c->r[1]+0xFFFFFF90u; W32(ea,c->r[1]); c->r[1]=ea;} // 803AAF90
  c->r[0]=c->lr; // 803AAF94
  W32(c->r[1]+0x00000074u,c->r[0]); // 803AAF98
  c->r[11]=c->r[1]+0x00000070u; // 803AAF9C
  c->lr=0x803AAFA4u; { W32(c->r[11]+0xFFFFFFD4u,c->r[21]); W32(c->r[11]+0xFFFFFFD8u,c->r[22]); W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 803AAFA0
  c->r[30]=c->r[3]+0x00000048u; // 803AAFA4
  c->r[22]=c->r[3]|c->r[3]; // 803AAFA8
  c->r[23]=c->r[4]|c->r[4]; // 803AAFAC
  c->r[27]=c->r[5]|c->r[5]; // 803AAFB0
  c->r[24]=c->r[6]|c->r[6]; // 803AAFB4
  c->r[25]=c->r[7]|c->r[7]; // 803AAFB8
  c->r[21]=c->r[8]|c->r[8]; // 803AAFBC
  c->r[26]=c->r[9]|c->r[9]; // 803AAFC0
  c->r[3]=c->r[30]|c->r[30]; // 803AAFC4
  c->lr=0x803AAFCCu; f_8025FCCC(c); // 803AAFC8
  cmps(c,0,(int32_t)c->r[26],0); // 803AAFCC
  if (!crb(c,2)) { goto L_803AAFE4; } // 803AAFD0
  c->r[3]=c->r[30]|c->r[30]; // 803AAFD4
  c->lr=0x803AAFDCu; f_8025FDA8(c); // 803AAFD8
  c->r[3]=0u+0x00000000u; // 803AAFDC
  goto L_803AB330; // 803AAFE0
L_803AAFE4:;
  cmps(c,0,(int32_t)c->r[24],0); // 803AAFE4
  c->r[29]=0u+0x00000000u; // 803AAFE8
  if (crb(c,2)) { goto L_803AB01C; } // 803AAFEC
  c->r[3]=R32(c->r[24]+0x00000000u); // 803AAFF0
  c->r[5]=c->r[21]|c->r[21]; // 803AAFF4
  c->r[4]=c->r[1]+0x00000018u; // 803AAFF8
  c->r[7]=R32(c->r[24]+0x0000000Cu); // 803AAFFC
  c->r[12]=R32(c->r[3]+0x00000000u); // 803AB000
  c->r[6]=0u+0x00000000u; // 803AB004
  c->r[8]=0u+0x00000008u; // 803AB008
  c->r[12]=R32(c->r[12]+0x00000008u); // 803AB00C
  c->ctr=c->r[12]; // 803AB010
  if (true) { c->lr=0x803AB018u; dispatch(c,c->ctr); } // 803AB014
  c->r[29]=R32(c->r[1]+0x00000030u); // 803AB018
L_803AB01C:;
  c->r[3]=c->r[27]+c->r[29]; // 803AB01C
  cmps(c,0,(int32_t)c->r[3],127); // 803AB020
  if (!crb(c,1)) { goto L_803AB030; } // 803AB024
  c->r[28]=0u+0x0000007Fu; // 803AB028
  goto L_803AB038; // 803AB02C
L_803AB030:;
  c->r[0]=sraw(c,c->r[3],31); // 803AB030
  c->r[28]=c->r[3]&~c->r[0]; // 803AB034
L_803AB038:;
  c->r[3]=c->r[22]|c->r[22]; // 803AB038
  c->r[4]=c->r[28]|c->r[28]; // 803AB03C
  c->r[5]=c->r[25]|c->r[25]; // 803AB040
  c->lr=0x803AB048u; f_803AB7A8(c); // 803AB044
  cmps(c,0,(int32_t)c->r[3],0); // 803AB048
  if (!crb(c,2)) { goto L_803AB060; } // 803AB04C
  c->r[3]=c->r[30]|c->r[30]; // 803AB050
  c->lr=0x803AB058u; f_8025FDA8(c); // 803AB054
  c->r[3]=0u+0x00000000u; // 803AB058
  goto L_803AB330; // 803AB05C
L_803AB060:;
  c->r[31]=c->r[26]+0x00000010u; // 803AB060
  c->r[3]=c->r[31]|c->r[31]; // 803AB064
  c->lr=0x803AB06Cu; f_8025FCCC(c); // 803AB068
  c->r[27]=0u+0x00000000u; // 803AB06C
  goto L_803AB134; // 803AB070
L_803AB074:;
  c->r[3]=c->r[26]|c->r[26]; // 803AB074
  c->lr=0x803AB07Cu; f_803A0A40(c); // 803AB078
  cmps(c,0,(int32_t)c->r[3],0); // 803AB07C
  if (crb(c,2)) { goto L_803AB09C; } // 803AB080
  c->r[27]=c->r[3]|c->r[3]; // 803AB084
  if (crb(c,2)) { goto L_803AB134; } // 803AB088
  c->r[4]=c->r[26]|c->r[26]; // 803AB08C
  c->lr=0x803AB094u; f_803AF234(c); // 803AB090
  c->r[27]=c->r[3]|c->r[3]; // 803AB094
  goto L_803AB134; // 803AB098
L_803AB09C:;
  c->r[0]=R32(c->r[26]+0x00000004u); // 803AB09C
  cmps(c,0,(int32_t)c->r[0],0); // 803AB0A0
  if (!crb(c,2)) { goto L_803AB0B0; } // 803AB0A4
  c->r[21]=0u+0x00000000u; // 803AB0A8
  goto L_803AB0B8; // 803AB0AC
L_803AB0B0:;
  c->r[3]=R32(c->r[26]+0x00000008u); // 803AB0B0
  c->r[21]=c->r[3]+0xFFFFFF48u; // 803AB0B4
L_803AB0B8:;
  cmps(c,0,(int32_t)c->r[21],0); // 803AB0B8
  if (!crb(c,2)) { goto L_803AB0D0; } // 803AB0BC
  c->r[3]=c->r[31]|c->r[31]; // 803AB0C0
  c->lr=0x803AB0C8u; f_8025FDA8(c); // 803AB0C4
  c->r[27]=0u+0x00000000u; // 803AB0C8
  goto L_803AB19C; // 803AB0CC
L_803AB0D0:;
  c->r[3]=R8(c->r[21]+0x00000074u); // 803AB0D0
  c->r[0]=R32(c->r[21]+0x00000040u); // 803AB0D4
  c->r[3]=c->r[3]+c->r[0]; // 803AB0D8
  cmps(c,0,(int32_t)c->r[3],127); // 803AB0DC
  if (!crb(c,1)) { goto L_803AB0EC; } // 803AB0E0
  c->r[0]=0u+0x0000007Fu; // 803AB0E4
  goto L_803AB0F4; // 803AB0E8
L_803AB0EC:;
  c->r[0]=sraw(c,c->r[3],31); // 803AB0EC
  c->r[0]=c->r[3]&~c->r[0]; // 803AB0F0
L_803AB0F4:;
  cmps(c,0,(int32_t)c->r[28],(int32_t)c->r[0]); // 803AB0F4
  if (!crb(c,0)) { goto L_803AB10C; } // 803AB0F8
  c->r[3]=c->r[31]|c->r[31]; // 803AB0FC
  c->lr=0x803AB104u; f_8025FDA8(c); // 803AB100
  c->r[27]=0u+0x00000000u; // 803AB104
  goto L_803AB19C; // 803AB108
L_803AB10C:;
  c->r[3]=c->r[26]+0x00000010u; // 803AB10C
  c->lr=0x803AB114u; f_8025FDA8(c); // 803AB110
  c->r[12]=R32(c->r[21]+0x00000000u); // 803AB114
  c->r[3]=c->r[21]|c->r[21]; // 803AB118
  c->r[4]=0u+0x00000000u; // 803AB11C
  c->r[12]=R32(c->r[12]+0x00000018u); // 803AB120
  c->ctr=c->r[12]; // 803AB124
  if (true) { c->lr=0x803AB12Cu; dispatch(c,c->ctr); } // 803AB128
  c->r[3]=c->r[26]+0x00000010u; // 803AB12C
  c->lr=0x803AB134u; f_8025FCCC(c); // 803AB130
L_803AB134:;
  cmps(c,0,(int32_t)c->r[27],0); // 803AB134
  if (crb(c,2)) { IRQCHK(c); goto L_803AB074; } // 803AB138
  c->r[3]=R32(c->r[26]+0x00000008u); // 803AB13C
  c->r[0]=c->r[26]+0x00000008u; // 803AB140
  goto L_803AB178; // 803AB144
L_803AB148:;
  c->r[5]=R8(c->r[3]+0xFFFFFFBCu); // 803AB148
  c->r[4]=R32(c->r[3]+0xFFFFFF88u); // 803AB14C
  c->r[5]=c->r[5]+c->r[4]; // 803AB150
  cmps(c,0,(int32_t)c->r[5],127); // 803AB154
  if (!crb(c,1)) { goto L_803AB164; } // 803AB158
  c->r[4]=0u+0x0000007Fu; // 803AB15C
  goto L_803AB16C; // 803AB160
L_803AB164:;
  c->r[4]=sraw(c,c->r[5],31); // 803AB164
  c->r[4]=c->r[5]&~c->r[4]; // 803AB168
L_803AB16C:;
  cmps(c,0,(int32_t)c->r[28],(int32_t)c->r[4]); // 803AB16C
  if (crb(c,0)) { goto L_803AB180; } // 803AB170
  c->r[3]=R32(c->r[3]+0x00000000u); // 803AB174
L_803AB178:;
  cmpu(c,0,c->r[3],c->r[0]); // 803AB178
  if (!crb(c,2)) { IRQCHK(c); goto L_803AB148; } // 803AB17C
L_803AB180:;
  W32(c->r[1]+0x00000014u,c->r[3]); // 803AB180
  c->r[3]=c->r[26]+0x00000004u; // 803AB184
  c->r[4]=c->r[1]+0x00000014u; // 803AB188
  c->r[5]=c->r[27]+0x000000B8u; // 803AB18C
  c->lr=0x803AB194u; f_803B50B4(c); // 803AB190
  c->r[3]=c->r[31]|c->r[31]; // 803AB194
  c->lr=0x803AB19Cu; f_8025FDA8(c); // 803AB198
L_803AB19C:;
  cmps(c,0,(int32_t)c->r[27],0); // 803AB19C
  if (!crb(c,2)) { goto L_803AB1B4; } // 803AB1A0
  c->r[3]=c->r[30]|c->r[30]; // 803AB1A4
  c->lr=0x803AB1ACu; f_8025FDA8(c); // 803AB1A8
  c->r[3]=0u+0x00000000u; // 803AB1AC
  goto L_803AB330; // 803AB1B0
L_803AB1B4:;
  c->r[26]=c->r[22]+0x00000048u; // 803AB1B4
  c->r[3]=c->r[26]|c->r[26]; // 803AB1B8
  c->lr=0x803AB1C0u; f_8025FCCC(c); // 803AB1BC
  c->r[0]=R32(c->r[22]+0x00000018u); // 803AB1C0
  cmps(c,0,(int32_t)c->r[0],0); // 803AB1C4
  if (!crb(c,2)) { goto L_803AB1D8; } // 803AB1C8
  c->r[3]=c->r[26]|c->r[26]; // 803AB1CC
  c->lr=0x803AB1D4u; f_8025FDA8(c); // 803AB1D0
  goto L_803AB208; // 803AB1D4
L_803AB1D8:;
  c->r[5]=R32(c->r[22]+0x0000001Cu); // 803AB1D8
  c->r[3]=c->r[22]+0x00000018u; // 803AB1DC
  c->r[4]=c->r[1]+0x00000010u; // 803AB1E0
  W32(c->r[1]+0x00000010u,c->r[5]); // 803AB1E4
  c->r[21]=c->r[5]+0xFFFFFFD4u; // 803AB1E8
  c->lr=0x803AB1F0u; f_803B5028(c); // 803AB1EC
  W32(c->r[21]+0x00000034u,c->r[27]); // 803AB1F0
  c->r[3]=c->r[21]|c->r[21]; // 803AB1F4
  W32(c->r[27]+0x00000004u,c->r[21]); // 803AB1F8
  c->lr=0x803AB200u; f_803AA4E0(c); // 803AB1FC
  c->r[3]=c->r[26]|c->r[26]; // 803AB200
  c->lr=0x803AB208u; f_8025FDA8(c); // 803AB204
L_803AB208:;
  cmps(c,0,(int32_t)c->r[24],0); // 803AB208
  if (crb(c,2)) { goto L_803AB25C; } // 803AB20C
  if (crb(c,2)) { goto L_803AB25C; } // 803AB210
  c->r[3]=R32(c->r[24]+0x00000008u); // 803AB214
  c->r[4]=R32(c->r[24]+0x00000010u); // 803AB218
  c->r[12]=R32(c->r[3]+0x00000000u); // 803AB21C
  c->r[12]=R32(c->r[12]+0x00000008u); // 803AB220
  c->ctr=c->r[12]; // 803AB224
  if (true) { c->lr=0x803AB22Cu; dispatch(c,c->ctr); } // 803AB228
  cmps(c,0,(int32_t)c->r[3],0); // 803AB22C
  c->r[21]=c->r[3]|c->r[3]; // 803AB230
  if (crb(c,2)) { goto L_803AB25C; } // 803AB234
  c->r[4]=R32(c->r[24]+0x0000000Cu); // 803AB238
  c->r[5]=R32(c->r[24]+0x00000010u); // 803AB23C
  c->lr=0x803AB244u; f_80235294(c); // 803AB240
  c->r[4]=R32(c->r[24]+0x00000000u); // 803AB244
  c->r[3]=c->r[27]|c->r[27]; // 803AB248
  c->r[5]=R32(c->r[24]+0x00000004u); // 803AB24C
  c->r[7]=c->r[21]|c->r[21]; // 803AB250
  c->r[6]=R32(c->r[24]+0x00000008u); // 803AB254
  c->lr=0x803AB25Cu; f_8039CB84(c); // 803AB258
L_803AB25C:;
  W8(c->r[27]+0x00000074u,c->r[23]); // 803AB25C
  c->r[0]=c->r[22]+0x00000004u; // 803AB260
  c->r[3]=c->r[22]|c->r[22]; // 803AB264
  c->r[4]=c->r[1]+0x0000000Cu; // 803AB268
  W32(c->r[27]+0x00000040u,c->r[29]); // 803AB26C
  c->r[5]=c->r[27]+0x000000C0u; // 803AB270
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 803AB274
  c->lr=0x803AB27Cu; f_803B50B4(c); // 803AB278
  cmps(c,0,(int32_t)c->r[25],0); // 803AB27C
  W32(c->r[27]+0x00000010u,c->r[22]); // 803AB280
  if (crb(c,2)) { goto L_803AB294; } // 803AB284
  c->r[3]=c->r[25]|c->r[25]; // 803AB288
  c->r[4]=c->r[27]|c->r[27]; // 803AB28C
  c->lr=0x803AB294u; f_8039EA98(c); // 803AB290
L_803AB294:;
  c->r[23]=c->r[22]+0x00000048u; // 803AB294
  c->r[3]=c->r[23]|c->r[23]; // 803AB298
  c->lr=0x803AB2A0u; f_8025FCCC(c); // 803AB29C
  c->r[3]=R32(c->r[22]+0x00000010u); // 803AB2A0
  c->r[0]=c->r[22]+0x00000010u; // 803AB2A4
  goto L_803AB300; // 803AB2A8
L_803AB2AC:;
  c->r[5]=R8(c->r[3]+0xFFFFFFACu); // 803AB2AC
  c->r[4]=R32(c->r[3]+0xFFFFFF78u); // 803AB2B0
  c->r[5]=c->r[5]+c->r[4]; // 803AB2B4
  cmps(c,0,(int32_t)c->r[5],127); // 803AB2B8
  if (!crb(c,1)) { goto L_803AB2C8; } // 803AB2BC
  c->r[6]=0u+0x0000007Fu; // 803AB2C0
  goto L_803AB2D0; // 803AB2C4
L_803AB2C8:;
  c->r[4]=sraw(c,c->r[5],31); // 803AB2C8
  c->r[6]=c->r[5]&~c->r[4]; // 803AB2CC
L_803AB2D0:;
  c->r[5]=R8(c->r[27]+0x00000074u); // 803AB2D0
  c->r[4]=R32(c->r[27]+0x00000040u); // 803AB2D4
  c->r[5]=c->r[5]+c->r[4]; // 803AB2D8
  cmps(c,0,(int32_t)c->r[5],127); // 803AB2DC
  if (!crb(c,1)) { goto L_803AB2EC; } // 803AB2E0
  c->r[4]=0u+0x0000007Fu; // 803AB2E4
  goto L_803AB2F4; // 803AB2E8
L_803AB2EC:;
  c->r[4]=sraw(c,c->r[5],31); // 803AB2EC
  c->r[4]=c->r[5]&~c->r[4]; // 803AB2F0
L_803AB2F4:;
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[6]); // 803AB2F4
  if (crb(c,0)) { goto L_803AB308; } // 803AB2F8
  c->r[3]=R32(c->r[3]+0x00000000u); // 803AB2FC
L_803AB300:;
  cmpu(c,0,c->r[3],c->r[0]); // 803AB300
  if (!crb(c,2)) { IRQCHK(c); goto L_803AB2AC; } // 803AB304
L_803AB308:;
  W32(c->r[1]+0x00000008u,c->r[3]); // 803AB308
  c->r[3]=c->r[22]+0x0000000Cu; // 803AB30C
  c->r[4]=c->r[1]+0x00000008u; // 803AB310
  c->r[5]=c->r[27]+0x000000C8u; // 803AB314
  c->lr=0x803AB31Cu; f_803B50B4(c); // 803AB318
  c->r[3]=c->r[23]|c->r[23]; // 803AB31C
  c->lr=0x803AB324u; f_8025FDA8(c); // 803AB320
  c->r[3]=c->r[30]|c->r[30]; // 803AB324
  c->lr=0x803AB32Cu; f_8025FDA8(c); // 803AB328
  c->r[3]=c->r[27]|c->r[27]; // 803AB32C
L_803AB330:;
  c->r[11]=c->r[1]+0x00000070u; // 803AB330
  c->lr=0x803AB338u; { c->r[21]=R32(c->r[11]+0xFFFFFFD4u); c->r[22]=R32(c->r[11]+0xFFFFFFD8u); c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 803AB334
  c->r[0]=R32(c->r[1]+0x00000074u); // 803AB338
  c->lr=c->r[0]; // 803AB33C
  c->r[1]=c->r[1]+0x00000070u; // 803AB340
  return; // 803AB344
}

// fn_803AB348
void f_803AB348(Ctx* __restrict c) {
  trace_call(0x803AB348u);
  {uint32_t ea=c->r[1]+0xFFFFFF90u; W32(ea,c->r[1]); c->r[1]=ea;} // 803AB348
  c->r[0]=c->lr; // 803AB34C
  W32(c->r[1]+0x00000074u,c->r[0]); // 803AB350
  c->r[11]=c->r[1]+0x00000070u; // 803AB354
  c->lr=0x803AB35Cu; { W32(c->r[11]+0xFFFFFFD4u,c->r[21]); W32(c->r[11]+0xFFFFFFD8u,c->r[22]); W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 803AB358
  c->r[30]=c->r[3]+0x00000048u; // 803AB35C
  c->r[22]=c->r[3]|c->r[3]; // 803AB360
  c->r[23]=c->r[4]|c->r[4]; // 803AB364
  c->r[27]=c->r[5]|c->r[5]; // 803AB368
  c->r[24]=c->r[6]|c->r[6]; // 803AB36C
  c->r[25]=c->r[7]|c->r[7]; // 803AB370
  c->r[21]=c->r[8]|c->r[8]; // 803AB374
  c->r[26]=c->r[9]|c->r[9]; // 803AB378
  c->r[3]=c->r[30]|c->r[30]; // 803AB37C
  c->lr=0x803AB384u; f_8025FCCC(c); // 803AB380
  cmps(c,0,(int32_t)c->r[26],0); // 803AB384
  if (!crb(c,2)) { goto L_803AB39C; } // 803AB388
  c->r[3]=c->r[30]|c->r[30]; // 803AB38C
  c->lr=0x803AB394u; f_8025FDA8(c); // 803AB390
  c->r[3]=0u+0x00000000u; // 803AB394
  goto L_803AB6E8; // 803AB398
L_803AB39C:;
  cmps(c,0,(int32_t)c->r[24],0); // 803AB39C
  c->r[29]=0u+0x00000000u; // 803AB3A0
  if (crb(c,2)) { goto L_803AB3D4; } // 803AB3A4
  c->r[3]=R32(c->r[24]+0x00000000u); // 803AB3A8
  c->r[5]=c->r[21]|c->r[21]; // 803AB3AC
  c->r[4]=c->r[1]+0x00000018u; // 803AB3B0
  c->r[7]=R32(c->r[24]+0x0000000Cu); // 803AB3B4
  c->r[12]=R32(c->r[3]+0x00000000u); // 803AB3B8
  c->r[6]=0u+0x00000000u; // 803AB3BC
  c->r[8]=0u+0x00000008u; // 803AB3C0
  c->r[12]=R32(c->r[12]+0x00000008u); // 803AB3C4
  c->ctr=c->r[12]; // 803AB3C8
  if (true) { c->lr=0x803AB3D0u; dispatch(c,c->ctr); } // 803AB3CC
  c->r[29]=R32(c->r[1]+0x00000030u); // 803AB3D0
L_803AB3D4:;
  c->r[3]=c->r[27]+c->r[29]; // 803AB3D4
  cmps(c,0,(int32_t)c->r[3],127); // 803AB3D8
  if (!crb(c,1)) { goto L_803AB3E8; } // 803AB3DC
  c->r[28]=0u+0x0000007Fu; // 803AB3E0
  goto L_803AB3F0; // 803AB3E4
L_803AB3E8:;
  c->r[0]=sraw(c,c->r[3],31); // 803AB3E8
  c->r[28]=c->r[3]&~c->r[0]; // 803AB3EC
L_803AB3F0:;
  c->r[3]=c->r[22]|c->r[22]; // 803AB3F0
  c->r[4]=c->r[28]|c->r[28]; // 803AB3F4
  c->r[5]=c->r[25]|c->r[25]; // 803AB3F8
  c->lr=0x803AB400u; f_803AB7A8(c); // 803AB3FC
  cmps(c,0,(int32_t)c->r[3],0); // 803AB400
  if (!crb(c,2)) { goto L_803AB418; } // 803AB404
  c->r[3]=c->r[30]|c->r[30]; // 803AB408
  c->lr=0x803AB410u; f_8025FDA8(c); // 803AB40C
  c->r[3]=0u+0x00000000u; // 803AB410
  goto L_803AB6E8; // 803AB414
L_803AB418:;
  c->r[31]=c->r[26]+0x00000010u; // 803AB418
  c->r[3]=c->r[31]|c->r[31]; // 803AB41C
  c->lr=0x803AB424u; f_8025FCCC(c); // 803AB420
  c->r[27]=0u+0x00000000u; // 803AB424
  goto L_803AB4EC; // 803AB428
L_803AB42C:;
  c->r[3]=c->r[26]|c->r[26]; // 803AB42C
  c->lr=0x803AB434u; f_803A0A40(c); // 803AB430
  cmps(c,0,(int32_t)c->r[3],0); // 803AB434
  if (crb(c,2)) { goto L_803AB454; } // 803AB438
  c->r[27]=c->r[3]|c->r[3]; // 803AB43C
  if (crb(c,2)) { goto L_803AB4EC; } // 803AB440
  c->r[4]=c->r[26]|c->r[26]; // 803AB444
  c->lr=0x803AB44Cu; f_803B33B8(c); // 803AB448
  c->r[27]=c->r[3]|c->r[3]; // 803AB44C
  goto L_803AB4EC; // 803AB450
L_803AB454:;
  c->r[0]=R32(c->r[26]+0x00000004u); // 803AB454
  cmps(c,0,(int32_t)c->r[0],0); // 803AB458
  if (!crb(c,2)) { goto L_803AB468; } // 803AB45C
  c->r[21]=0u+0x00000000u; // 803AB460
  goto L_803AB470; // 803AB464
L_803AB468:;
  c->r[3]=R32(c->r[26]+0x00000008u); // 803AB468
  c->r[21]=c->r[3]+0xFFFFFF48u; // 803AB46C
L_803AB470:;
  cmps(c,0,(int32_t)c->r[21],0); // 803AB470
  if (!crb(c,2)) { goto L_803AB488; } // 803AB474
  c->r[3]=c->r[31]|c->r[31]; // 803AB478
  c->lr=0x803AB480u; f_8025FDA8(c); // 803AB47C
  c->r[27]=0u+0x00000000u; // 803AB480
  goto L_803AB554; // 803AB484
L_803AB488:;
  c->r[3]=R8(c->r[21]+0x00000074u); // 803AB488
  c->r[0]=R32(c->r[21]+0x00000040u); // 803AB48C
  c->r[3]=c->r[3]+c->r[0]; // 803AB490
  cmps(c,0,(int32_t)c->r[3],127); // 803AB494
  if (!crb(c,1)) { goto L_803AB4A4; } // 803AB498
  c->r[0]=0u+0x0000007Fu; // 803AB49C
  goto L_803AB4AC; // 803AB4A0
L_803AB4A4:;
  c->r[0]=sraw(c,c->r[3],31); // 803AB4A4
  c->r[0]=c->r[3]&~c->r[0]; // 803AB4A8
L_803AB4AC:;
  cmps(c,0,(int32_t)c->r[28],(int32_t)c->r[0]); // 803AB4AC
  if (!crb(c,0)) { goto L_803AB4C4; } // 803AB4B0
  c->r[3]=c->r[31]|c->r[31]; // 803AB4B4
  c->lr=0x803AB4BCu; f_8025FDA8(c); // 803AB4B8
  c->r[27]=0u+0x00000000u; // 803AB4BC
  goto L_803AB554; // 803AB4C0
L_803AB4C4:;
  c->r[3]=c->r[26]+0x00000010u; // 803AB4C4
  c->lr=0x803AB4CCu; f_8025FDA8(c); // 803AB4C8
  c->r[12]=R32(c->r[21]+0x00000000u); // 803AB4CC
  c->r[3]=c->r[21]|c->r[21]; // 803AB4D0
  c->r[4]=0u+0x00000000u; // 803AB4D4
  c->r[12]=R32(c->r[12]+0x00000018u); // 803AB4D8
  c->ctr=c->r[12]; // 803AB4DC
  if (true) { c->lr=0x803AB4E4u; dispatch(c,c->ctr); } // 803AB4E0
  c->r[3]=c->r[26]+0x00000010u; // 803AB4E4
  c->lr=0x803AB4ECu; f_8025FCCC(c); // 803AB4E8
L_803AB4EC:;
  cmps(c,0,(int32_t)c->r[27],0); // 803AB4EC
  if (crb(c,2)) { IRQCHK(c); goto L_803AB42C; } // 803AB4F0
  c->r[3]=R32(c->r[26]+0x00000008u); // 803AB4F4
  c->r[0]=c->r[26]+0x00000008u; // 803AB4F8
  goto L_803AB530; // 803AB4FC
L_803AB500:;
  c->r[5]=R8(c->r[3]+0xFFFFFFBCu); // 803AB500
  c->r[4]=R32(c->r[3]+0xFFFFFF88u); // 803AB504
  c->r[5]=c->r[5]+c->r[4]; // 803AB508
  cmps(c,0,(int32_t)c->r[5],127); // 803AB50C
  if (!crb(c,1)) { goto L_803AB51C; } // 803AB510
  c->r[4]=0u+0x0000007Fu; // 803AB514
  goto L_803AB524; // 803AB518
L_803AB51C:;
  c->r[4]=sraw(c,c->r[5],31); // 803AB51C
  c->r[4]=c->r[5]&~c->r[4]; // 803AB520
L_803AB524:;
  cmps(c,0,(int32_t)c->r[28],(int32_t)c->r[4]); // 803AB524
  if (crb(c,0)) { goto L_803AB538; } // 803AB528
  c->r[3]=R32(c->r[3]+0x00000000u); // 803AB52C
L_803AB530:;
  cmpu(c,0,c->r[3],c->r[0]); // 803AB530
  if (!crb(c,2)) { IRQCHK(c); goto L_803AB500; } // 803AB534
L_803AB538:;
  W32(c->r[1]+0x00000014u,c->r[3]); // 803AB538
  c->r[3]=c->r[26]+0x00000004u; // 803AB53C
  c->r[4]=c->r[1]+0x00000014u; // 803AB540
  c->r[5]=c->r[27]+0x000000B8u; // 803AB544
  c->lr=0x803AB54Cu; f_803B50B4(c); // 803AB548
  c->r[3]=c->r[31]|c->r[31]; // 803AB54C
  c->lr=0x803AB554u; f_8025FDA8(c); // 803AB550
L_803AB554:;
  cmps(c,0,(int32_t)c->r[27],0); // 803AB554
  if (!crb(c,2)) { goto L_803AB56C; } // 803AB558
  c->r[3]=c->r[30]|c->r[30]; // 803AB55C
  c->lr=0x803AB564u; f_8025FDA8(c); // 803AB560
  c->r[3]=0u+0x00000000u; // 803AB564
  goto L_803AB6E8; // 803AB568
L_803AB56C:;
  c->r[26]=c->r[22]+0x00000048u; // 803AB56C
  c->r[3]=c->r[26]|c->r[26]; // 803AB570
  c->lr=0x803AB578u; f_8025FCCC(c); // 803AB574
  c->r[0]=R32(c->r[22]+0x00000018u); // 803AB578
  cmps(c,0,(int32_t)c->r[0],0); // 803AB57C
  if (!crb(c,2)) { goto L_803AB590; } // 803AB580
  c->r[3]=c->r[26]|c->r[26]; // 803AB584
  c->lr=0x803AB58Cu; f_8025FDA8(c); // 803AB588
  goto L_803AB5C0; // 803AB58C
L_803AB590:;
  c->r[5]=R32(c->r[22]+0x0000001Cu); // 803AB590
  c->r[3]=c->r[22]+0x00000018u; // 803AB594
  c->r[4]=c->r[1]+0x00000010u; // 803AB598
  W32(c->r[1]+0x00000010u,c->r[5]); // 803AB59C
  c->r[21]=c->r[5]+0xFFFFFFD4u; // 803AB5A0
  c->lr=0x803AB5A8u; f_803B5028(c); // 803AB5A4
  W32(c->r[21]+0x00000034u,c->r[27]); // 803AB5A8
  c->r[3]=c->r[21]|c->r[21]; // 803AB5AC
  W32(c->r[27]+0x00000004u,c->r[21]); // 803AB5B0
  c->lr=0x803AB5B8u; f_803AA4E0(c); // 803AB5B4
  c->r[3]=c->r[26]|c->r[26]; // 803AB5B8
  c->lr=0x803AB5C0u; f_8025FDA8(c); // 803AB5BC
L_803AB5C0:;
  cmps(c,0,(int32_t)c->r[24],0); // 803AB5C0
  if (crb(c,2)) { goto L_803AB614; } // 803AB5C4
  if (crb(c,2)) { goto L_803AB614; } // 803AB5C8
  c->r[3]=R32(c->r[24]+0x00000008u); // 803AB5CC
  c->r[4]=R32(c->r[24]+0x00000010u); // 803AB5D0
  c->r[12]=R32(c->r[3]+0x00000000u); // 803AB5D4
  c->r[12]=R32(c->r[12]+0x00000008u); // 803AB5D8
  c->ctr=c->r[12]; // 803AB5DC
  if (true) { c->lr=0x803AB5E4u; dispatch(c,c->ctr); } // 803AB5E0
  cmps(c,0,(int32_t)c->r[3],0); // 803AB5E4
  c->r[21]=c->r[3]|c->r[3]; // 803AB5E8
  if (crb(c,2)) { goto L_803AB614; } // 803AB5EC
  c->r[4]=R32(c->r[24]+0x0000000Cu); // 803AB5F0
  c->r[5]=R32(c->r[24]+0x00000010u); // 803AB5F4
  c->lr=0x803AB5FCu; f_80235294(c); // 803AB5F8
  c->r[4]=R32(c->r[24]+0x00000000u); // 803AB5FC
  c->r[3]=c->r[27]|c->r[27]; // 803AB600
  c->r[5]=R32(c->r[24]+0x00000004u); // 803AB604
  c->r[7]=c->r[21]|c->r[21]; // 803AB608
  c->r[6]=R32(c->r[24]+0x00000008u); // 803AB60C
  c->lr=0x803AB614u; f_8039CB84(c); // 803AB610
L_803AB614:;
  W8(c->r[27]+0x00000074u,c->r[23]); // 803AB614
  c->r[0]=c->r[22]+0x00000004u; // 803AB618
  c->r[3]=c->r[22]|c->r[22]; // 803AB61C
  c->r[4]=c->r[1]+0x0000000Cu; // 803AB620
  W32(c->r[27]+0x00000040u,c->r[29]); // 803AB624
  c->r[5]=c->r[27]+0x000000C0u; // 803AB628
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 803AB62C
  c->lr=0x803AB634u; f_803B50B4(c); // 803AB630
  cmps(c,0,(int32_t)c->r[25],0); // 803AB634
  W32(c->r[27]+0x00000010u,c->r[22]); // 803AB638
  if (crb(c,2)) { goto L_803AB64C; } // 803AB63C
  c->r[3]=c->r[25]|c->r[25]; // 803AB640
  c->r[4]=c->r[27]|c->r[27]; // 803AB644
  c->lr=0x803AB64Cu; f_8039EA98(c); // 803AB648
L_803AB64C:;
  c->r[23]=c->r[22]+0x00000048u; // 803AB64C
  c->r[3]=c->r[23]|c->r[23]; // 803AB650
  c->lr=0x803AB658u; f_8025FCCC(c); // 803AB654
  c->r[3]=R32(c->r[22]+0x00000010u); // 803AB658
  c->r[0]=c->r[22]+0x00000010u; // 803AB65C
  goto L_803AB6B8; // 803AB660
L_803AB664:;
  c->r[5]=R8(c->r[3]+0xFFFFFFACu); // 803AB664
  c->r[4]=R32(c->r[3]+0xFFFFFF78u); // 803AB668
  c->r[5]=c->r[5]+c->r[4]; // 803AB66C
  cmps(c,0,(int32_t)c->r[5],127); // 803AB670
  if (!crb(c,1)) { goto L_803AB680; } // 803AB674
  c->r[6]=0u+0x0000007Fu; // 803AB678
  goto L_803AB688; // 803AB67C
L_803AB680:;
  c->r[4]=sraw(c,c->r[5],31); // 803AB680
  c->r[6]=c->r[5]&~c->r[4]; // 803AB684
L_803AB688:;
  c->r[5]=R8(c->r[27]+0x00000074u); // 803AB688
  c->r[4]=R32(c->r[27]+0x00000040u); // 803AB68C
  c->r[5]=c->r[5]+c->r[4]; // 803AB690
  cmps(c,0,(int32_t)c->r[5],127); // 803AB694
  if (!crb(c,1)) { goto L_803AB6A4; } // 803AB698
  c->r[4]=0u+0x0000007Fu; // 803AB69C
  goto L_803AB6AC; // 803AB6A0
L_803AB6A4:;
  c->r[4]=sraw(c,c->r[5],31); // 803AB6A4
  c->r[4]=c->r[5]&~c->r[4]; // 803AB6A8
L_803AB6AC:;
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[6]); // 803AB6AC
  if (crb(c,0)) { goto L_803AB6C0; } // 803AB6B0
  c->r[3]=R32(c->r[3]+0x00000000u); // 803AB6B4
L_803AB6B8:;
  cmpu(c,0,c->r[3],c->r[0]); // 803AB6B8
  if (!crb(c,2)) { IRQCHK(c); goto L_803AB664; } // 803AB6BC
L_803AB6C0:;
  W32(c->r[1]+0x00000008u,c->r[3]); // 803AB6C0
  c->r[3]=c->r[22]+0x0000000Cu; // 803AB6C4
  c->r[4]=c->r[1]+0x00000008u; // 803AB6C8
  c->r[5]=c->r[27]+0x000000C8u; // 803AB6CC
  c->lr=0x803AB6D4u; f_803B50B4(c); // 803AB6D0
  c->r[3]=c->r[23]|c->r[23]; // 803AB6D4
  c->lr=0x803AB6DCu; f_8025FDA8(c); // 803AB6D8
  c->r[3]=c->r[30]|c->r[30]; // 803AB6DC
  c->lr=0x803AB6E4u; f_8025FDA8(c); // 803AB6E0
  c->r[3]=c->r[27]|c->r[27]; // 803AB6E4
L_803AB6E8:;
  c->r[11]=c->r[1]+0x00000070u; // 803AB6E8
  c->lr=0x803AB6F0u; { c->r[21]=R32(c->r[11]+0xFFFFFFD4u); c->r[22]=R32(c->r[11]+0xFFFFFFD8u); c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 803AB6EC
  c->r[0]=R32(c->r[1]+0x00000074u); // 803AB6F0
  c->lr=c->r[0]; // 803AB6F4
  c->r[1]=c->r[1]+0x00000070u; // 803AB6F8
  return; // 803AB6FC
}

// fn_803AB700
void f_803AB700(Ctx* __restrict c) {
  trace_call(0x803AB700u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803AB700
  c->r[0]=c->lr; // 803AB704
  W32(c->r[1]+0x00000024u,c->r[0]); // 803AB708
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 803AB70C
  c->r[31]=c->r[3]+0x00000048u; // 803AB710
  W32(c->r[1]+0x00000018u,c->r[30]); // 803AB714
  c->r[30]=c->r[4]|c->r[4]; // 803AB718
  W32(c->r[1]+0x00000014u,c->r[29]); // 803AB71C
  c->r[29]=c->r[3]|c->r[3]; // 803AB720
  c->r[3]=c->r[31]|c->r[31]; // 803AB724
  c->lr=0x803AB72Cu; f_8025FCCC(c); // 803AB728
  c->r[0]=R8(c->r[29]+0x0000002Du); // 803AB72C
  W16(c->r[29]+0x00000024u,c->r[30]); // 803AB730
  cmps(c,0,(int32_t)c->r[0],0); // 803AB734
  if (crb(c,2)) { goto L_803AB76C; } // 803AB738
  c->r[3]=R16(c->r[29]+0x00000026u); // 803AB73C
  c->r[0]=rotl(c->r[30],0)&0x0000FFFFu; // 803AB740
  cmpu(c,0,c->r[0],c->r[3]); // 803AB744
  if (!crb(c,1)) { goto L_803AB750; } // 803AB748
  c->r[0]=c->r[3]|c->r[3]; // 803AB74C
L_803AB750:;
  W16(c->r[29]+0x00000024u,c->r[0]); // 803AB750
  goto L_803AB76C; // 803AB754
L_803AB758:;
  c->r[3]=R32(c->r[29]+0x00000010u); // 803AB758
  {uint32_t ea=c->r[3]+0xFFFFFF38u; c->r[12]=R32(ea); c->r[3]=ea;} // 803AB75C
  c->r[12]=R32(c->r[12]+0x00000028u); // 803AB760
  c->ctr=c->r[12]; // 803AB764
  if (true) { c->lr=0x803AB76Cu; dispatch(c,c->ctr); } // 803AB768
L_803AB76C:;
  c->r[3]=R32(c->r[29]+0x00000000u); // 803AB76C
  c->r[0]=R16(c->r[29]+0x00000024u); // 803AB770
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 803AB774
  if (crb(c,1)) { IRQCHK(c); goto L_803AB758; } // 803AB778
  c->r[3]=c->r[31]|c->r[31]; // 803AB77C
  c->lr=0x803AB784u; f_8025FDA8(c); // 803AB780
  c->r[0]=R32(c->r[1]+0x00000024u); // 803AB784
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 803AB788
  c->r[30]=R32(c->r[1]+0x00000018u); // 803AB78C
  c->r[29]=R32(c->r[1]+0x00000014u); // 803AB790
  c->lr=c->r[0]; // 803AB794
  c->r[1]=c->r[1]+0x00000020u; // 803AB798
  return; // 803AB79C
}

// fn_803AB7A0
void f_803AB7A0(Ctx* __restrict c) {
  trace_call(0x803AB7A0u);
  W16(c->r[3]+0x00000026u,c->r[4]); // 803AB7A0
  return; // 803AB7A4
}

// fn_803AB7A8
void f_803AB7A8(Ctx* __restrict c) {
  trace_call(0x803AB7A8u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803AB7A8
  c->r[0]=c->lr; // 803AB7AC
  W32(c->r[1]+0x00000024u,c->r[0]); // 803AB7B0
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 803AB7B4
  c->r[31]=c->r[3]+0x00000048u; // 803AB7B8
  W32(c->r[1]+0x00000018u,c->r[30]); // 803AB7BC
  c->r[30]=c->r[5]|c->r[5]; // 803AB7C0
  W32(c->r[1]+0x00000014u,c->r[29]); // 803AB7C4
  c->r[29]=c->r[4]|c->r[4]; // 803AB7C8
  W32(c->r[1]+0x00000010u,c->r[28]); // 803AB7CC
  c->r[28]=c->r[3]|c->r[3]; // 803AB7D0
  c->r[3]=c->r[31]|c->r[31]; // 803AB7D4
  c->lr=0x803AB7DCu; f_8025FCCC(c); // 803AB7D8
  c->r[0]=R16(c->r[28]+0x00000024u); // 803AB7DC
  cmps(c,0,(int32_t)c->r[0],0); // 803AB7E0
  if (!crb(c,2)) { goto L_803AB864; } // 803AB7E4
  c->r[3]=c->r[31]|c->r[31]; // 803AB7E8
  c->lr=0x803AB7F0u; f_8025FDA8(c); // 803AB7EC
  c->r[3]=0u+0x00000000u; // 803AB7F0
  goto L_803AB924; // 803AB7F4
  goto L_803AB864; // 803AB7F8
L_803AB7FC:;
  c->r[0]=R32(c->r[28]+0x00000010u); // 803AB7FC
  c->r[3]=addc(c,c->r[0],0xFFFFFF38u,0); cr0(c,c->r[3]); // 803AB800
  if (!crb(c,2)) { goto L_803AB818; } // 803AB804
  c->r[3]=c->r[31]|c->r[31]; // 803AB808
  c->lr=0x803AB810u; f_8025FDA8(c); // 803AB80C
  c->r[3]=0u+0x00000000u; // 803AB810
  goto L_803AB924; // 803AB814
L_803AB818:;
  c->r[4]=R8(c->r[3]+0x00000074u); // 803AB818
  c->r[0]=R32(c->r[3]+0x00000040u); // 803AB81C
  c->r[4]=c->r[4]+c->r[0]; // 803AB820
  cmps(c,0,(int32_t)c->r[4],127); // 803AB824
  if (!crb(c,1)) { goto L_803AB834; } // 803AB828
  c->r[0]=0u+0x0000007Fu; // 803AB82C
  goto L_803AB83C; // 803AB830
L_803AB834:;
  c->r[0]=sraw(c,c->r[4],31); // 803AB834
  c->r[0]=c->r[4]&~c->r[0]; // 803AB838
L_803AB83C:;
  cmps(c,0,(int32_t)c->r[29],(int32_t)c->r[0]); // 803AB83C
  if (!crb(c,0)) { goto L_803AB854; } // 803AB840
  c->r[3]=c->r[31]|c->r[31]; // 803AB844
  c->lr=0x803AB84Cu; f_8025FDA8(c); // 803AB848
  c->r[3]=0u+0x00000000u; // 803AB84C
  goto L_803AB924; // 803AB850
L_803AB854:;
  c->r[12]=R32(c->r[3]+0x00000000u); // 803AB854
  c->r[12]=R32(c->r[12]+0x00000028u); // 803AB858
  c->ctr=c->r[12]; // 803AB85C
  if (true) { c->lr=0x803AB864u; dispatch(c,c->ctr); } // 803AB860
L_803AB864:;
  c->r[3]=R32(c->r[28]+0x00000000u); // 803AB864
  c->r[0]=R16(c->r[28]+0x00000024u); // 803AB868
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 803AB86C
  if (!crb(c,0)) { IRQCHK(c); goto L_803AB7FC; } // 803AB870
  cmps(c,0,(int32_t)c->r[30],0); // 803AB874
  if (crb(c,2)) { goto L_803AB918; } // 803AB878
  c->r[0]=R16(c->r[30]+0x0000000Cu); // 803AB87C
  cmps(c,0,(int32_t)c->r[0],0); // 803AB880
  if (!crb(c,2)) { goto L_803AB908; } // 803AB884
  c->r[3]=c->r[31]|c->r[31]; // 803AB888
  c->lr=0x803AB890u; f_8025FDA8(c); // 803AB88C
  c->r[3]=0u+0x00000000u; // 803AB890
  goto L_803AB924; // 803AB894
  goto L_803AB908; // 803AB898
L_803AB89C:;
  c->r[3]=c->r[30]|c->r[30]; // 803AB89C
  c->lr=0x803AB8A4u; f_8039EB1C(c); // 803AB8A0
  cmps(c,0,(int32_t)c->r[3],0); // 803AB8A4
  if (!crb(c,2)) { goto L_803AB8BC; } // 803AB8A8
  c->r[3]=c->r[31]|c->r[31]; // 803AB8AC
  c->lr=0x803AB8B4u; f_8025FDA8(c); // 803AB8B0
  c->r[3]=0u+0x00000000u; // 803AB8B4
  goto L_803AB924; // 803AB8B8
L_803AB8BC:;
  c->r[4]=R8(c->r[3]+0x00000074u); // 803AB8BC
  c->r[0]=R32(c->r[3]+0x00000040u); // 803AB8C0
  c->r[4]=c->r[4]+c->r[0]; // 803AB8C4
  cmps(c,0,(int32_t)c->r[4],127); // 803AB8C8
  if (!crb(c,1)) { goto L_803AB8D8; } // 803AB8CC
  c->r[0]=0u+0x0000007Fu; // 803AB8D0
  goto L_803AB8E0; // 803AB8D4
L_803AB8D8:;
  c->r[0]=sraw(c,c->r[4],31); // 803AB8D8
  c->r[0]=c->r[4]&~c->r[0]; // 803AB8DC
L_803AB8E0:;
  cmps(c,0,(int32_t)c->r[29],(int32_t)c->r[0]); // 803AB8E0
  if (!crb(c,0)) { goto L_803AB8F8; } // 803AB8E4
  c->r[3]=c->r[31]|c->r[31]; // 803AB8E8
  c->lr=0x803AB8F0u; f_8025FDA8(c); // 803AB8EC
  c->r[3]=0u+0x00000000u; // 803AB8F0
  goto L_803AB924; // 803AB8F4
L_803AB8F8:;
  c->r[12]=R32(c->r[3]+0x00000000u); // 803AB8F8
  c->r[12]=R32(c->r[12]+0x00000028u); // 803AB8FC
  c->ctr=c->r[12]; // 803AB900
  if (true) { c->lr=0x803AB908u; dispatch(c,c->ctr); } // 803AB904
L_803AB908:;
  c->r[3]=R32(c->r[30]+0x00000000u); // 803AB908
  c->r[0]=R16(c->r[30]+0x0000000Cu); // 803AB90C
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 803AB910
  if (!crb(c,0)) { IRQCHK(c); goto L_803AB89C; } // 803AB914
L_803AB918:;
  c->r[3]=c->r[31]|c->r[31]; // 803AB918
  c->lr=0x803AB920u; f_8025FDA8(c); // 803AB91C
  c->r[3]=0u+0x00000001u; // 803AB920
L_803AB924:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 803AB924
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 803AB928
  c->r[30]=R32(c->r[1]+0x00000018u); // 803AB92C
  c->r[29]=R32(c->r[1]+0x00000014u); // 803AB930
  c->r[28]=R32(c->r[1]+0x00000010u); // 803AB934
  c->lr=c->r[0]; // 803AB938
  c->r[1]=c->r[1]+0x00000020u; // 803AB93C
  return; // 803AB940
}

// fn_803AB944
void f_803AB944(Ctx* __restrict c) {
  trace_call(0x803AB944u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803AB944
  c->r[0]=c->lr; // 803AB948
  W32(c->r[1]+0x00000024u,c->r[0]); // 803AB94C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 803AB950
  c->r[31]=c->r[3]+0x00000048u; // 803AB954
  W32(c->r[1]+0x00000018u,c->r[30]); // 803AB958
  c->r[30]=c->r[4]|c->r[4]; // 803AB95C
  W32(c->r[1]+0x00000014u,c->r[29]); // 803AB960
  c->r[29]=c->r[3]|c->r[3]; // 803AB964
  c->r[3]=c->r[31]|c->r[31]; // 803AB968
  c->lr=0x803AB970u; f_8025FCCC(c); // 803AB96C
  W32(c->r[30]+0x00000038u,c->r[29]); // 803AB970
  c->r[0]=c->r[29]+0x0000001Cu; // 803AB974
  c->r[3]=c->r[29]+0x00000018u; // 803AB978
  c->r[4]=c->r[1]+0x00000008u; // 803AB97C
  W32(c->r[1]+0x00000008u,c->r[0]); // 803AB980
  c->r[5]=c->r[30]+0x0000002Cu; // 803AB984
  c->lr=0x803AB98Cu; f_803B50B4(c); // 803AB988
  c->r[0]=0u+0x00000001u; // 803AB98C
  c->r[3]=c->r[31]|c->r[31]; // 803AB990
  W8(c->r[29]+0x0000002Du,c->r[0]); // 803AB994
  c->lr=0x803AB99Cu; f_8025FDA8(c); // 803AB998
  c->r[0]=R32(c->r[1]+0x00000024u); // 803AB99C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 803AB9A0
  c->r[30]=R32(c->r[1]+0x00000018u); // 803AB9A4
  c->r[29]=R32(c->r[1]+0x00000014u); // 803AB9A8
  c->lr=c->r[0]; // 803AB9AC
  c->r[1]=c->r[1]+0x00000020u; // 803AB9B0
  return; // 803AB9B4
}

// fn_803AB9B8
void f_803AB9B8(Ctx* __restrict c) {
  trace_call(0x803AB9B8u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803AB9B8
  c->r[0]=c->lr; // 803AB9BC
  W32(c->r[1]+0x00000024u,c->r[0]); // 803AB9C0
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 803AB9C4
  c->r[31]=c->r[3]+0x00000048u; // 803AB9C8
  W32(c->r[1]+0x00000018u,c->r[30]); // 803AB9CC
  W32(c->r[1]+0x00000014u,c->r[29]); // 803AB9D0
  c->r[29]=c->r[4]|c->r[4]; // 803AB9D4
  W32(c->r[1]+0x00000010u,c->r[28]); // 803AB9D8
  c->r[28]=c->r[3]|c->r[3]; // 803AB9DC
  c->r[3]=c->r[31]|c->r[31]; // 803AB9E0
  c->lr=0x803AB9E8u; f_8025FCCC(c); // 803AB9E4
  c->r[30]=R32(c->r[29]+0x00000004u); // 803AB9E8
  cmps(c,0,(int32_t)c->r[30],0); // 803AB9EC
  if (crb(c,2)) { goto L_803ABA0C; } // 803AB9F0
  c->r[0]=c->r[28]+0x0000001Cu; // 803AB9F4
  c->r[3]=c->r[28]+0x00000018u; // 803AB9F8
  W32(c->r[1]+0x00000008u,c->r[0]); // 803AB9FC
  c->r[4]=c->r[1]+0x00000008u; // 803ABA00
  c->r[5]=c->r[30]+0x0000002Cu; // 803ABA04
  c->lr=0x803ABA0Cu; f_803B50B4(c); // 803ABA08
L_803ABA0C:;
  cmps(c,0,(int32_t)c->r[30],0); // 803ABA0C
  if (crb(c,2)) { goto L_803ABA1C; } // 803ABA10
  c->r[0]=0u+0x00000000u; // 803ABA14
  W32(c->r[30]+0x00000034u,c->r[0]); // 803ABA18
L_803ABA1C:;
  c->r[0]=0u+0x00000000u; // 803ABA1C
  c->r[3]=c->r[31]|c->r[31]; // 803ABA20
  W32(c->r[29]+0x00000004u,c->r[0]); // 803ABA24
  c->lr=0x803ABA2Cu; f_8025FDA8(c); // 803ABA28
  c->r[0]=R32(c->r[1]+0x00000024u); // 803ABA2C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 803ABA30
  c->r[30]=R32(c->r[1]+0x00000018u); // 803ABA34
  c->r[29]=R32(c->r[1]+0x00000014u); // 803ABA38
  c->r[28]=R32(c->r[1]+0x00000010u); // 803ABA3C
  c->lr=c->r[0]; // 803ABA40
  c->r[1]=c->r[1]+0x00000020u; // 803ABA44
  return; // 803ABA48
}

// fn_803ABA4C
void f_803ABA4C(Ctx* __restrict c) {
  trace_call(0x803ABA4Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803ABA4C
  c->r[0]=c->lr; // 803ABA50
  c->r[9]=c->r[8]|c->r[8]; // 803ABA54
  c->r[8]=0u+0x00000000u; // 803ABA58
  W32(c->r[1]+0x00000014u,c->r[0]); // 803ABA5C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 803ABA60
  c->r[31]=c->r[4]|c->r[4]; // 803ABA64
  c->r[12]=R32(c->r[3]+0x00000000u); // 803ABA68
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 803ABA6C
  c->ctr=c->r[12]; // 803ABA70
  if (true) { c->lr=0x803ABA78u; dispatch(c,c->ctr); } // 803ABA74
  cmps(c,0,(int32_t)c->r[3],0); // 803ABA78
  if (crb(c,2)) { goto L_803ABA84; } // 803ABA7C
  goto L_803ABAA4; // 803ABA80
L_803ABA84:;
  c->r[3]=R32(c->r[31]+0x00000000u); // 803ABA84
  cmps(c,0,(int32_t)c->r[3],0); // 803ABA88
  if (crb(c,2)) { goto L_803ABAA0; } // 803ABA8C
  c->r[12]=R32(c->r[3]+0x00000000u); // 803ABA90
  c->r[12]=R32(c->r[12]+0x00000014u); // 803ABA94
  c->ctr=c->r[12]; // 803ABA98
  if (true) { c->lr=0x803ABAA0u; dispatch(c,c->ctr); } // 803ABA9C
L_803ABAA0:;
  c->r[3]=0u+0x00000000u; // 803ABAA0
L_803ABAA4:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 803ABAA4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 803ABAA8
  c->lr=c->r[0]; // 803ABAAC
  c->r[1]=c->r[1]+0x00000010u; // 803ABAB0
  return; // 803ABAB4
}

// fn_803ABAB8
void f_803ABAB8(Ctx* __restrict c) {
  trace_call(0x803ABAB8u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803ABAB8
  c->r[0]=c->lr; // 803ABABC
  W32(c->r[1]+0x00000024u,c->r[0]); // 803ABAC0
  c->r[11]=c->r[1]+0x00000020u; // 803ABAC4
  c->lr=0x803ABACCu; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 803ABAC8
  c->r[12]=R32(c->r[3]+0x00000000u); // 803ABACC
  c->r[28]=c->r[4]|c->r[4]; // 803ABAD0
  c->r[27]=c->r[3]|c->r[3]; // 803ABAD4
  c->r[4]=c->r[5]|c->r[5]; // 803ABAD8
  c->r[12]=R32(c->r[12]+0x00000010u); // 803ABADC
  c->r[29]=c->r[6]|c->r[6]; // 803ABAE0
  c->r[30]=c->r[7]|c->r[7]; // 803ABAE4
  c->r[31]=c->r[8]|c->r[8]; // 803ABAE8
  c->ctr=c->r[12]; // 803ABAEC
  if (true) { c->lr=0x803ABAF4u; dispatch(c,c->ctr); } // 803ABAF0
  c->r[0]=c->r[3]+0x00010000u; // 803ABAF4
  c->r[5]=c->r[3]|c->r[3]; // 803ABAF8
  cmpu(c,0,c->r[0],0x0000FFFFu); // 803ABAFC
  if (!crb(c,2)) { goto L_803ABB0C; } // 803ABB00
  c->r[3]=0u+0x00000002u; // 803ABB04
  goto L_803ABB60; // 803ABB08
L_803ABB0C:;
  c->r[12]=R32(c->r[27]+0x00000000u); // 803ABB0C
  c->r[3]=c->r[27]|c->r[27]; // 803ABB10
  c->r[4]=c->r[28]|c->r[28]; // 803ABB14
  c->r[6]=c->r[29]|c->r[29]; // 803ABB18
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 803ABB1C
  c->r[7]=c->r[30]|c->r[30]; // 803ABB20
  c->r[9]=c->r[31]|c->r[31]; // 803ABB24
  c->r[8]=0u+0x00000000u; // 803ABB28
  c->ctr=c->r[12]; // 803ABB2C
  if (true) { c->lr=0x803ABB34u; dispatch(c,c->ctr); } // 803ABB30
  cmps(c,0,(int32_t)c->r[3],0); // 803ABB34
  if (crb(c,2)) { goto L_803ABB40; } // 803ABB38
  goto L_803ABB60; // 803ABB3C
L_803ABB40:;
  c->r[3]=R32(c->r[28]+0x00000000u); // 803ABB40
  cmps(c,0,(int32_t)c->r[3],0); // 803ABB44
  if (crb(c,2)) { goto L_803ABB5C; } // 803ABB48
  c->r[12]=R32(c->r[3]+0x00000000u); // 803ABB4C
  c->r[12]=R32(c->r[12]+0x00000014u); // 803ABB50
  c->ctr=c->r[12]; // 803ABB54
  if (true) { c->lr=0x803ABB5Cu; dispatch(c,c->ctr); } // 803ABB58
L_803ABB5C:;
  c->r[3]=0u+0x00000000u; // 803ABB5C
L_803ABB60:;
  c->r[11]=c->r[1]+0x00000020u; // 803ABB60
  c->lr=0x803ABB68u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 803ABB64
  c->r[0]=R32(c->r[1]+0x00000024u); // 803ABB68
  c->lr=c->r[0]; // 803ABB6C
  c->r[1]=c->r[1]+0x00000020u; // 803ABB70
  return; // 803ABB74
}

// fn_803ABB78
void f_803ABB78(Ctx* __restrict c) {
  trace_call(0x803ABB78u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803ABB78
  c->r[0]=c->lr; // 803ABB7C
  W32(c->r[1]+0x00000024u,c->r[0]); // 803ABB80
  c->r[11]=c->r[1]+0x00000020u; // 803ABB84
  c->lr=0x803ABB8Cu; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 803ABB88
  c->r[12]=R32(c->r[3]+0x00000000u); // 803ABB8C
  c->r[28]=c->r[4]|c->r[4]; // 803ABB90
  c->r[27]=c->r[3]|c->r[3]; // 803ABB94
  c->r[4]=c->r[5]|c->r[5]; // 803ABB98
  c->r[12]=R32(c->r[12]+0x00000010u); // 803ABB9C
  c->r[29]=c->r[6]|c->r[6]; // 803ABBA0
  c->r[30]=c->r[7]|c->r[7]; // 803ABBA4
  c->r[31]=c->r[8]|c->r[8]; // 803ABBA8
  c->ctr=c->r[12]; // 803ABBAC
  if (true) { c->lr=0x803ABBB4u; dispatch(c,c->ctr); } // 803ABBB0
  c->r[0]=c->r[3]+0x00010000u; // 803ABBB4
  c->r[5]=c->r[3]|c->r[3]; // 803ABBB8
  cmpu(c,0,c->r[0],0x0000FFFFu); // 803ABBBC
  if (!crb(c,2)) { goto L_803ABBCC; } // 803ABBC0
  c->r[3]=0u+0x00000002u; // 803ABBC4
  goto L_803ABBF4; // 803ABBC8
L_803ABBCC:;
  c->r[12]=R32(c->r[27]+0x00000000u); // 803ABBCC
  c->r[3]=c->r[27]|c->r[27]; // 803ABBD0
  c->r[4]=c->r[28]|c->r[28]; // 803ABBD4
  c->r[6]=c->r[29]|c->r[29]; // 803ABBD8
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 803ABBDC
  c->r[7]=c->r[30]|c->r[30]; // 803ABBE0
  c->r[9]=c->r[31]|c->r[31]; // 803ABBE4
  c->r[8]=0u+0x00000000u; // 803ABBE8
  c->ctr=c->r[12]; // 803ABBEC
  if (true) { c->lr=0x803ABBF4u; dispatch(c,c->ctr); } // 803ABBF0
L_803ABBF4:;
  c->r[11]=c->r[1]+0x00000020u; // 803ABBF4
  c->lr=0x803ABBFCu; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 803ABBF8
  c->r[0]=R32(c->r[1]+0x00000024u); // 803ABBFC
  c->lr=c->r[0]; // 803ABC00
  c->r[1]=c->r[1]+0x00000020u; // 803ABC04
  return; // 803ABC08
}

// fn_803ABC0C
void f_803ABC0C(Ctx* __restrict c) {
  trace_call(0x803ABC0Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803ABC0C
  c->r[0]=c->lr; // 803ABC10
  W32(c->r[1]+0x00000014u,c->r[0]); // 803ABC14
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 803ABC18
  W32(c->r[1]+0x00000008u,c->r[30]); // 803ABC1C
  c->r[30]=c->r[3]|c->r[3]; // 803ABC20
  c->lr=0x803ABC28u; f_803B266C(c); // 803ABC24
  c->lr=0x803ABC2Cu; f_803B2768(c); // 803ABC28
  c->r[31]=c->r[3]|c->r[3]; // 803ABC2C
  c->lr=0x803ABC34u; f_8039A9F0(c); // 803ABC30
  c->lr=0x803ABC38u; f_8039AB18(c); // 803ABC34
  c->r[0]=R32(c->r[30]+0x0000000Cu); // 803ABC38
  c->r[4]=R32(c->r[30]+0x00000004u); // 803ABC3C
  c->r[31]=c->r[31]+c->r[0]; // 803ABC40
  c->r[30]=c->r[3]+c->r[4]; // 803ABC44
  c->lr=0x803ABC4Cu; f_8039CC64(c); // 803ABC48
  c->lr=0x803ABC50u; f_8039CD40(c); // 803ABC4C
  c->r[0]=c->r[30]+c->r[31]; // 803ABC50
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 803ABC54
  c->r[3]=c->r[3]+c->r[0]; // 803ABC58
  c->r[30]=R32(c->r[1]+0x00000008u); // 803ABC5C
  c->r[0]=R32(c->r[1]+0x00000014u); // 803ABC60
  c->lr=c->r[0]; // 803ABC64
  c->r[1]=c->r[1]+0x00000010u; // 803ABC68
  return; // 803ABC6C
}

// fn_803ABC70
void f_803ABC70(Ctx* __restrict c) {
  trace_call(0x803ABC70u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803ABC70
  c->r[0]=c->lr; // 803ABC74
  W32(c->r[1]+0x00000024u,c->r[0]); // 803ABC78
  c->r[11]=c->r[1]+0x00000020u; // 803ABC7C
  c->lr=0x803ABC84u; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 803ABC80
  c->r[0]=R8(c->r[13]+0xFFFFA060u); // 803ABC84
  c->r[26]=c->r[3]|c->r[3]; // 803ABC88
  c->r[27]=c->r[4]|c->r[4]; // 803ABC8C
  cmps(c,0,(int32_t)c->r[0],0); // 803ABC90
  if (!crb(c,2)) { goto L_803ABDE4; } // 803ABC94
  c->r[0]=0u+0x00000001u; // 803ABC98
  W8(c->r[13]+0xFFFFA060u,c->r[0]); // 803ABC9C
  c->lr=0x803ABCA4u; f_80396E38(c); // 803ABCA0
  c->lr=0x803ABCA8u; f_80396F14(c); // 803ABCA4
  c->lr=0x803ABCACu; f_802AD4BC(c); // 803ABCA8
L_803ABCAC:;
  c->lr=0x803ABCB0u; f_802AD55C(c); // 803ABCAC
  cmpu(c,0,c->r[3],0x00000001u); // 803ABCB0
  if (crb(c,2)) { IRQCHK(c); goto L_803ABCAC; } // 803ABCB4
  c->lr=0x803ABCBCu; f_802AF05C(c); // 803ABCB8
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; // 803ABCBC
  cmps(c,0,(int32_t)c->r[0],1); // 803ABCC0
  if (crb(c,2)) { goto L_803ABCF4; } // 803ABCC4
  if (!crb(c,0)) { goto L_803ABCD8; } // 803ABCC8
  cmps(c,0,(int32_t)c->r[0],0); // 803ABCCC
  if (!crb(c,0)) { goto L_803ABCE4; } // 803ABCD0
  goto L_803ABD14; // 803ABCD4
L_803ABCD8:;
  cmps(c,0,(int32_t)c->r[0],3); // 803ABCD8
  if (!crb(c,0)) { goto L_803ABD14; } // 803ABCDC
  goto L_803ABD04; // 803ABCE0
L_803ABCE4:;
  c->lr=0x803ABCE8u; f_80396E38(c); // 803ABCE4
  c->r[4]=0u+0x00000003u; // 803ABCE8
  c->lr=0x803ABCF0u; f_80397544(c); // 803ABCEC
  goto L_803ABD20; // 803ABCF0
L_803ABCF4:;
  c->lr=0x803ABCF8u; f_80396E38(c); // 803ABCF4
  c->r[4]=0u+0x00000000u; // 803ABCF8
  c->lr=0x803ABD00u; f_80397544(c); // 803ABCFC
  goto L_803ABD20; // 803ABD00
L_803ABD04:;
  c->lr=0x803ABD08u; f_80396E38(c); // 803ABD04
  c->r[4]=0u+0x00000002u; // 803ABD08
  c->lr=0x803ABD10u; f_80397544(c); // 803ABD0C
  goto L_803ABD20; // 803ABD10
L_803ABD14:;
  c->lr=0x803ABD18u; f_80396E38(c); // 803ABD14
  c->r[4]=0u+0x00000000u; // 803ABD18
  c->lr=0x803ABD20u; f_80397544(c); // 803ABD1C
L_803ABD20:;
  c->lr=0x803ABD24u; f_803A2798(c); // 803ABD20
  c->lr=0x803ABD28u; f_803A2840(c); // 803ABD24
  c->r[3]=R32(c->r[26]+0x0000000Cu); // 803ABD28
  c->r[0]=R32(c->r[26]+0x00000004u); // 803ABD2C
  c->r[30]=c->r[27]+c->r[3]; // 803ABD30
  c->r[29]=c->r[30]|c->r[30]; // 803ABD34
  c->r[30]=c->r[30]+c->r[0]; // 803ABD38
  c->r[28]=c->r[30]|c->r[30]; // 803ABD3C
  c->lr=0x803ABD44u; f_8039A9F0(c); // 803ABD40
  c->lr=0x803ABD48u; f_8039AB18(c); // 803ABD44
  c->r[30]=c->r[30]+c->r[3]; // 803ABD48
  c->lr=0x803ABD50u; f_8039A9F0(c); // 803ABD4C
  c->lr=0x803ABD54u; f_8039AB18(c); // 803ABD50
  c->r[31]=c->r[3]|c->r[3]; // 803ABD54
  c->lr=0x803ABD5Cu; f_8039A9F0(c); // 803ABD58
  c->r[4]=c->r[28]|c->r[28]; // 803ABD5C
  c->r[5]=c->r[31]|c->r[31]; // 803ABD60
  c->lr=0x803ABD68u; f_8039AB40(c); // 803ABD64
  c->r[28]=c->r[30]|c->r[30]; // 803ABD68
  c->lr=0x803ABD70u; f_803B266C(c); // 803ABD6C
  c->lr=0x803ABD74u; f_803B2768(c); // 803ABD70
  c->r[30]=c->r[30]+c->r[3]; // 803ABD74
  c->lr=0x803ABD7Cu; f_803B266C(c); // 803ABD78
  c->lr=0x803ABD80u; f_803B2768(c); // 803ABD7C
  c->r[31]=c->r[3]|c->r[3]; // 803ABD80
  c->lr=0x803ABD88u; f_803B266C(c); // 803ABD84
  c->r[4]=c->r[28]|c->r[28]; // 803ABD88
  c->r[5]=c->r[31]|c->r[31]; // 803ABD8C
  c->lr=0x803ABD94u; f_803B278C(c); // 803ABD90
  c->lr=0x803ABD98u; f_8039CC64(c); // 803ABD94
  c->lr=0x803ABD9Cu; f_8039CD40(c); // 803ABD98
  c->lr=0x803ABDA0u; f_8039CC64(c); // 803ABD9C
  c->lr=0x803ABDA4u; f_8039CD40(c); // 803ABDA0
  c->r[31]=c->r[3]|c->r[3]; // 803ABDA4
  c->lr=0x803ABDACu; f_8039CC64(c); // 803ABDA8
  c->r[4]=c->r[30]|c->r[30]; // 803ABDAC
  c->r[5]=c->r[31]|c->r[31]; // 803ABDB0
  c->lr=0x803ABDB8u; f_8039CD68(c); // 803ABDB4
  c->r[3]=0u+0x806C0000u; // 803ABDB8
  c->r[4]=R32(c->r[26]+0x00000008u); // 803ABDBC
  c->r[6]=R32(c->r[26]+0x0000000Cu); // 803ABDC0
  c->r[5]=c->r[27]|c->r[27]; // 803ABDC4
  c->r[3]=c->r[3]+0xFFFFDBB0u; // 803ABDC8
  c->lr=0x803ABDD0u; f_803AFE0C(c); // 803ABDCC
  c->lr=0x803ABDD4u; f_803ABEB8(c); // 803ABDD0
  c->r[4]=R32(c->r[26]+0x00000000u); // 803ABDD4
  c->r[5]=c->r[29]|c->r[29]; // 803ABDD8
  c->r[6]=R32(c->r[26]+0x00000004u); // 803ABDDC
  c->lr=0x803ABDE4u; f_803ABFEC(c); // 803ABDE0
L_803ABDE4:;
  c->r[11]=c->r[1]+0x00000020u; // 803ABDE4
  c->lr=0x803ABDECu; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 803ABDE8
  c->r[0]=R32(c->r[1]+0x00000024u); // 803ABDEC
  c->lr=c->r[0]; // 803ABDF0
  c->r[1]=c->r[1]+0x00000020u; // 803ABDF4
  return; // 803ABDF8
}

// fn_803ABDFC
void f_803ABDFC(Ctx* __restrict c) {
  trace_call(0x803ABDFCu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803ABDFC
  c->r[0]=c->lr; // 803ABE00
  W32(c->r[1]+0x00000014u,c->r[0]); // 803ABE04
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 803ABE08
  W32(c->r[1]+0x00000008u,c->r[30]); // 803ABE0C
  c->r[0]=R8(c->r[13]+0xFFFFA060u); // 803ABE10
  cmps(c,0,(int32_t)c->r[0],0); // 803ABE14
  if (crb(c,2)) { goto L_803ABE58; } // 803ABE18
  c->lr=0x803ABE20u; f_80262798(c); // 803ABE1C
  c->r[30]=c->r[3]|c->r[3]; // 803ABE20
  c->r[31]=0u+0x80000000u; // 803ABE24
  goto L_803ABE44; // 803ABE28
L_803ABE2C:;
  c->lr=0x803ABE30u; f_80262798(c); // 803ABE2C
  c->r[0]=R32(c->r[31]+0x000000F8u); // 803ABE30
  c->r[3]=c->r[3]-c->r[30]; // 803ABE34
  c->r[0]=rotl(c->r[0],30)&0x3FFFFFFFu; // 803ABE38
  c->r[0]=divwu(c->r[3],c->r[0]); cr0(c,c->r[0]); // 803ABE3C
  if (!crb(c,2)) { goto L_803ABE58; } // 803ABE40
L_803ABE44:;
  c->lr=0x803ABE48u; f_80396E38(c); // 803ABE44
  c->r[0]=R32(c->r[3]+0x00000050u); // 803ABE48
  c->r[0]=cntlz(c->r[0]); // 803ABE4C
  c->r[0]=rotl(c->r[0],27)&0x07FFFFFFu; cr0(c,c->r[0]); // 803ABE50
  if (crb(c,2)) { IRQCHK(c); goto L_803ABE2C; } // 803ABE54
L_803ABE58:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 803ABE58
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 803ABE5C
  c->r[30]=R32(c->r[1]+0x00000008u); // 803ABE60
  c->lr=c->r[0]; // 803ABE64
  c->r[1]=c->r[1]+0x00000010u; // 803ABE68
  return; // 803ABE6C
}

// fn_803ABE70
void f_803ABE70(Ctx* __restrict c) {
  trace_call(0x803ABE70u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803ABE70
  c->r[0]=c->lr; // 803ABE74
  W32(c->r[1]+0x00000014u,c->r[0]); // 803ABE78
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 803ABE7C
  c->r[31]=0u+0x806C0000u; // 803ABE80
  c->r[3]=c->r[31]+0xFFFFDBB0u; // 803ABE84
  c->lr=0x803ABE8Cu; f_803AFD74(c); // 803ABE88
  c->r[4]=0u+0x803B0000u; // 803ABE8C
  c->r[5]=0u+0x806C0000u; // 803ABE90
  c->r[3]=c->r[31]+0xFFFFDBB0u; // 803ABE94
  c->r[4]=c->r[4]+0xFFFFFD88u; // 803ABE98
  c->r[5]=c->r[5]+0xFFFFDBA0u; // 803ABE9C
  c->lr=0x803ABEA4u; f_802895A4(c); // 803ABEA0
  c->r[0]=R32(c->r[1]+0x00000014u); // 803ABEA4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 803ABEA8
  c->lr=c->r[0]; // 803ABEAC
  c->r[1]=c->r[1]+0x00000010u; // 803ABEB0
  return; // 803ABEB4
}

// GetInstance__Q44nw4r3snd6detail11SoundThreadFv
void f_803ABEB8(Ctx* __restrict c) {
  trace_call(0x803ABEB8u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803ABEB8
  c->r[0]=c->lr; // 803ABEBC
  W32(c->r[1]+0x00000014u,c->r[0]); // 803ABEC0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 803ABEC4
  c->r[0]=R8(c->r[13]+0xFFFFA068u); // 803ABEC8
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 803ABECC
  if (!crb(c,2)) { goto L_803ABF60; } // 803ABED0
  c->r[31]=0u+0x806C0000u; // 803ABED4
  c->r[0]=0u+0x00000000u; // 803ABED8
  c->r[31]=c->r[31]+0xFFFFDEE0u; // 803ABEDC
  c->r[5]=0u+0x00000004u; // 803ABEE0
  W32(c->r[31]+0x0000037Cu,c->r[0]); // 803ABEE4
  c->r[7]=c->r[31]+0x0000037Cu; // 803ABEE8
  c->r[6]=c->r[31]+0x00000388u; // 803ABEEC
  c->r[3]=c->r[31]+0x00000320u; // 803ABEF0
  W32(c->r[31]+0x00000380u,c->r[0]); // 803ABEF4
  c->r[4]=c->r[31]+0x00000340u; // 803ABEF8
  W32(c->r[31]+0x00000388u,c->r[0]); // 803ABEFC
  W32(c->r[31]+0x0000038Cu,c->r[0]); // 803ABF00
  W32(c->r[31]+0x00000350u,c->r[0]); // 803ABF04
  W32(c->r[31]+0x0000036Cu,c->r[0]); // 803ABF08
  W32(c->r[31]+0x00000370u,c->r[0]); // 803ABF0C
  W32(c->r[31]+0x00000378u,c->r[0]); // 803ABF10
  W32(c->r[31]+0x0000037Cu,c->r[7]); // 803ABF14
  W32(c->r[31]+0x00000380u,c->r[7]); // 803ABF18
  W32(c->r[31]+0x00000384u,c->r[0]); // 803ABF1C
  W32(c->r[31]+0x00000388u,c->r[6]); // 803ABF20
  W32(c->r[31]+0x0000038Cu,c->r[6]); // 803ABF24
  W8(c->r[31]+0x00000394u,c->r[0]); // 803ABF28
  c->lr=0x803ABF30u; f_8025F1AC(c); // 803ABF2C
  c->r[3]=c->r[31]+0x00000318u; // 803ABF30
  c->lr=0x803ABF38u; f_80261388(c); // 803ABF34
  c->r[3]=c->r[31]+0x00000354u; // 803ABF38
  c->lr=0x803ABF40u; f_8025FC94(c); // 803ABF3C
  c->r[4]=0u+0x803B0000u; // 803ABF40
  c->r[5]=0u+0x806C0000u; // 803ABF44
  c->r[3]=c->r[31]|c->r[31]; // 803ABF48
  c->r[4]=c->r[4]+0xFFFFBF7Cu; // 803ABF4C
  c->r[5]=c->r[5]+0xFFFFDED0u; // 803ABF50
  c->lr=0x803ABF58u; f_802895A4(c); // 803ABF54
  c->r[0]=0u+0x00000001u; // 803ABF58
  W8(c->r[13]+0xFFFFA068u,c->r[0]); // 803ABF5C
L_803ABF60:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 803ABF60
  c->r[3]=0u+0x806C0000u; // 803ABF64
  c->r[0]=R32(c->r[1]+0x00000014u); // 803ABF68
  c->r[3]=c->r[3]+0xFFFFDEE0u; // 803ABF6C
  c->lr=c->r[0]; // 803ABF70
  c->r[1]=c->r[1]+0x00000010u; // 803ABF74
  return; // 803ABF78
}

// fn_803ABF7C
void f_803ABF7C(Ctx* __restrict c) {
  trace_call(0x803ABF7Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803ABF7C
  c->r[0]=c->lr; // 803ABF80
  cmps(c,0,(int32_t)c->r[3],0); // 803ABF84
  W32(c->r[1]+0x00000014u,c->r[0]); // 803ABF88
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 803ABF8C
  c->r[31]=c->r[4]|c->r[4]; // 803ABF90
  W32(c->r[1]+0x00000008u,c->r[30]); // 803ABF94
  c->r[30]=c->r[3]|c->r[3]; // 803ABF98
  if (crb(c,2)) { goto L_803ABFD0; } // 803ABF9C
  c->r[3]=addc(c,c->r[3],0x00000384u,0); cr0(c,c->r[3]); // 803ABFA0
  if (crb(c,2)) { goto L_803ABFB0; } // 803ABFA4
  c->r[4]=0u+0x00000000u; // 803ABFA8
  c->lr=0x803ABFB0u; f_803B4FA4(c); // 803ABFAC
L_803ABFB0:;
  c->r[3]=addc(c,c->r[30],0x00000378u,0); cr0(c,c->r[3]); // 803ABFB0
  if (crb(c,2)) { goto L_803ABFC0; } // 803ABFB4
  c->r[4]=0u+0x00000000u; // 803ABFB8
  c->lr=0x803ABFC0u; f_803B4FA4(c); // 803ABFBC
L_803ABFC0:;
  cmps(c,0,(int32_t)c->r[31],0); // 803ABFC0
  if (!crb(c,1)) { goto L_803ABFD0; } // 803ABFC4
  c->r[3]=c->r[30]|c->r[30]; // 803ABFC8
  c->lr=0x803ABFD0u; f_802896EC(c); // 803ABFCC
L_803ABFD0:;
  c->r[3]=c->r[30]|c->r[30]; // 803ABFD0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 803ABFD4
  c->r[30]=R32(c->r[1]+0x00000008u); // 803ABFD8
  c->r[0]=R32(c->r[1]+0x00000014u); // 803ABFDC
  c->lr=c->r[0]; // 803ABFE0
  c->r[1]=c->r[1]+0x00000010u; // 803ABFE4
  return; // 803ABFE8
}

// Create__Q44nw4r3snd6detail11SoundThreadFlPvUl
void f_803ABFEC(Ctx* __restrict c) {
  trace_call(0x803ABFECu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803ABFEC
  c->r[0]=c->lr; // 803ABFF0
  W32(c->r[1]+0x00000024u,c->r[0]); // 803ABFF4
  c->r[11]=c->r[1]+0x00000020u; // 803ABFF8
  c->lr=0x803AC000u; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 803ABFFC
  c->r[0]=R8(c->r[3]+0x00000394u); // 803AC000
  c->r[26]=c->r[3]|c->r[3]; // 803AC004
  c->r[27]=c->r[4]|c->r[4]; // 803AC008
  c->r[28]=c->r[5]|c->r[5]; // 803AC00C
  cmps(c,0,(int32_t)c->r[0],0); // 803AC010
  c->r[29]=c->r[6]|c->r[6]; // 803AC014
  if (crb(c,2)) { goto L_803AC024; } // 803AC018
  c->r[3]=0u+0x00000001u; // 803AC01C
  goto L_803AC10C; // 803AC020
L_803AC024:;
  c->r[31]=0u+0x00000001u; // 803AC024
  W32(c->r[3]+0x00000350u,c->r[5]); // 803AC028
  W8(c->r[3]+0x00000394u,c->r[31]); // 803AC02C
  c->r[0]=R8(c->r[13]+0xFFFFA068u); // 803AC030
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 803AC034
  if (!crb(c,2)) { goto L_803AC0C4; } // 803AC038
  c->r[30]=0u+0x806C0000u; // 803AC03C
  c->r[0]=0u+0x00000000u; // 803AC040
  c->r[30]=c->r[30]+0xFFFFDEE0u; // 803AC044
  c->r[5]=0u+0x00000004u; // 803AC048
  W32(c->r[30]+0x0000037Cu,c->r[0]); // 803AC04C
  c->r[6]=c->r[30]+0x0000037Cu; // 803AC050
  c->r[7]=c->r[30]+0x00000388u; // 803AC054
  c->r[3]=c->r[30]+0x00000320u; // 803AC058
  W32(c->r[30]+0x00000380u,c->r[0]); // 803AC05C
  c->r[4]=c->r[30]+0x00000340u; // 803AC060
  W32(c->r[30]+0x00000388u,c->r[0]); // 803AC064
  W32(c->r[30]+0x0000038Cu,c->r[0]); // 803AC068
  W32(c->r[30]+0x00000350u,c->r[0]); // 803AC06C
  W32(c->r[30]+0x0000036Cu,c->r[0]); // 803AC070
  W32(c->r[30]+0x00000370u,c->r[0]); // 803AC074
  W32(c->r[30]+0x00000378u,c->r[0]); // 803AC078
  W32(c->r[30]+0x0000037Cu,c->r[6]); // 803AC07C
  W32(c->r[30]+0x00000380u,c->r[6]); // 803AC080
  W32(c->r[30]+0x00000384u,c->r[0]); // 803AC084
  W32(c->r[30]+0x00000388u,c->r[7]); // 803AC088
  W32(c->r[30]+0x0000038Cu,c->r[7]); // 803AC08C
  W8(c->r[30]+0x00000394u,c->r[0]); // 803AC090
  c->lr=0x803AC098u; f_8025F1AC(c); // 803AC094
  c->r[3]=c->r[30]+0x00000318u; // 803AC098
  c->lr=0x803AC0A0u; f_80261388(c); // 803AC09C
  c->r[3]=c->r[30]+0x00000354u; // 803AC0A0
  c->lr=0x803AC0A8u; f_8025FC94(c); // 803AC0A4
  c->r[4]=0u+0x803B0000u; // 803AC0A8
  c->r[5]=0u+0x806C0000u; // 803AC0AC
  c->r[3]=c->r[30]|c->r[30]; // 803AC0B0
  c->r[4]=c->r[4]+0xFFFFBF7Cu; // 803AC0B4
  c->r[5]=c->r[5]+0xFFFFDED0u; // 803AC0B8
  c->lr=0x803AC0C0u; f_802895A4(c); // 803AC0BC
  W8(c->r[13]+0xFFFFA068u,c->r[31]); // 803AC0C0
L_803AC0C4:;
  c->r[4]=0u+0x803B0000u; // 803AC0C4
  c->r[5]=0u+0x806C0000u; // 803AC0C8
  c->r[3]=c->r[26]|c->r[26]; // 803AC0CC
  c->r[7]=c->r[29]|c->r[29]; // 803AC0D0
  c->r[8]=c->r[27]|c->r[27]; // 803AC0D4
  c->r[4]=c->r[4]+0xFFFFC230u; // 803AC0D8
  c->r[5]=c->r[5]+0xFFFFDEE0u; // 803AC0DC
  c->r[6]=c->r[28]+c->r[29]; // 803AC0E0
  c->r[9]=0u+0x00000000u; // 803AC0E4
  c->lr=0x803AC0ECu; f_80261940(c); // 803AC0E8
  cmps(c,0,(int32_t)c->r[3],0); // 803AC0EC
  c->r[31]=c->r[3]|c->r[3]; // 803AC0F0
  if (crb(c,2)) { goto L_803AC100; } // 803AC0F4
  c->r[3]=c->r[26]|c->r[26]; // 803AC0F8
  c->lr=0x803AC100u; f_80261FA8(c); // 803AC0FC
L_803AC100:;
  c->r[0]=0u-c->r[31]; // 803AC100
  c->r[0]=c->r[0]|c->r[31]; // 803AC104
  c->r[3]=rotl(c->r[0],1)&0x00000001u; // 803AC108
L_803AC10C:;
  c->r[11]=c->r[1]+0x00000020u; // 803AC10C
  c->lr=0x803AC114u; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 803AC110
  c->r[0]=R32(c->r[1]+0x00000024u); // 803AC114
  c->lr=c->r[0]; // 803AC118
  c->r[1]=c->r[1]+0x00000020u; // 803AC11C
  return; // 803AC120
}

// AxCallbackFunc__Q44nw4r3snd6detail11SoundThreadFv
void f_803AC124(Ctx* __restrict c) {
  trace_call(0x803AC124u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803AC124
  c->r[0]=c->lr; // 803AC128
  W32(c->r[1]+0x00000014u,c->r[0]); // 803AC12C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 803AC130
  W32(c->r[1]+0x00000008u,c->r[30]); // 803AC134
  c->r[0]=R8(c->r[13]+0xFFFFA068u); // 803AC138
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 803AC13C
  if (!crb(c,2)) { goto L_803AC1D0; } // 803AC140
  c->r[30]=0u+0x806C0000u; // 803AC144
  c->r[0]=0u+0x00000000u; // 803AC148
  c->r[30]=c->r[30]+0xFFFFDEE0u; // 803AC14C
  c->r[5]=0u+0x00000004u; // 803AC150
  W32(c->r[30]+0x0000037Cu,c->r[0]); // 803AC154
  c->r[6]=c->r[30]+0x0000037Cu; // 803AC158
  c->r[7]=c->r[30]+0x00000388u; // 803AC15C
  c->r[3]=c->r[30]+0x00000320u; // 803AC160
  W32(c->r[30]+0x00000380u,c->r[0]); // 803AC164
  c->r[4]=c->r[30]+0x00000340u; // 803AC168
  W32(c->r[30]+0x00000388u,c->r[0]); // 803AC16C
  W32(c->r[30]+0x0000038Cu,c->r[0]); // 803AC170
  W32(c->r[30]+0x00000350u,c->r[0]); // 803AC174
  W32(c->r[30]+0x0000036Cu,c->r[0]); // 803AC178
  W32(c->r[30]+0x00000370u,c->r[0]); // 803AC17C
  W32(c->r[30]+0x00000378u,c->r[0]); // 803AC180
  W32(c->r[30]+0x0000037Cu,c->r[6]); // 803AC184
  W32(c->r[30]+0x00000380u,c->r[6]); // 803AC188
  W32(c->r[30]+0x00000384u,c->r[0]); // 803AC18C
  W32(c->r[30]+0x00000388u,c->r[7]); // 803AC190
  W32(c->r[30]+0x0000038Cu,c->r[7]); // 803AC194
  W8(c->r[30]+0x00000394u,c->r[0]); // 803AC198
  c->lr=0x803AC1A0u; f_8025F1AC(c); // 803AC19C
  c->r[3]=c->r[30]+0x00000318u; // 803AC1A0
  c->lr=0x803AC1A8u; f_80261388(c); // 803AC1A4
  c->r[3]=c->r[30]+0x00000354u; // 803AC1A8
  c->lr=0x803AC1B0u; f_8025FC94(c); // 803AC1AC
  c->r[4]=0u+0x803B0000u; // 803AC1B0
  c->r[5]=0u+0x806C0000u; // 803AC1B4
  c->r[3]=c->r[30]|c->r[30]; // 803AC1B8
  c->r[4]=c->r[4]+0xFFFFBF7Cu; // 803AC1BC
  c->r[5]=c->r[5]+0xFFFFDED0u; // 803AC1C0
  c->lr=0x803AC1C8u; f_802895A4(c); // 803AC1C4
  c->r[0]=0u+0x00000001u; // 803AC1C8
  W8(c->r[13]+0xFFFFA068u,c->r[0]); // 803AC1CC
L_803AC1D0:;
  c->r[30]=0u+0x806C0000u; // 803AC1D0
  c->r[4]=0u+0x00000001u; // 803AC1D4
  c->r[30]=c->r[30]+0xFFFFDEE0u; // 803AC1D8
  c->r[5]=0u+0x00000000u; // 803AC1DC
  c->r[3]=c->r[30]+0x00000320u; // 803AC1E0
  c->lr=0x803AC1E8u; f_8025F20C(c); // 803AC1E4
  {uint32_t ea=c->r[30]+0x00000388u; c->r[31]=R32(ea); c->r[30]=ea;} // 803AC1E8
  goto L_803AC208; // 803AC1EC
L_803AC1F0:;
  c->r[3]=c->r[31]|c->r[31]; // 803AC1F0
  c->r[31]=R32(c->r[31]+0x00000000u); // 803AC1F4
  c->r[12]=R32(c->r[3]+0x00000008u); // 803AC1F8
  c->r[12]=R32(c->r[12]+0x00000010u); // 803AC1FC
  c->ctr=c->r[12]; // 803AC200
  if (true) { c->lr=0x803AC208u; dispatch(c,c->ctr); } // 803AC204
L_803AC208:;
  cmpu(c,0,c->r[31],c->r[30]); // 803AC208
  if (!crb(c,2)) { IRQCHK(c); goto L_803AC1F0; } // 803AC20C
  c->lr=0x803AC214u; f_803B266C(c); // 803AC210
  c->lr=0x803AC218u; f_803B2B34(c); // 803AC214
  c->r[0]=R32(c->r[1]+0x00000014u); // 803AC218
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 803AC21C
  c->r[30]=R32(c->r[1]+0x00000008u); // 803AC220
  c->lr=c->r[0]; // 803AC224
  c->r[1]=c->r[1]+0x00000010u; // 803AC228
  return; // 803AC22C
}

// SoundThreadFunc__Q44nw4r3snd6detail11SoundThreadFPv
void f_803AC230(Ctx* __restrict c) {
  trace_call(0x803AC230u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803AC230
  c->r[0]=c->lr; // 803AC234
  W32(c->r[1]+0x00000014u,c->r[0]); // 803AC238
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 803AC23C
  c->r[31]=c->r[3]|c->r[3]; // 803AC240
  c->lr=0x803AC248u; f_80396E38(c); // 803AC244
  c->r[5]=0u+0x803B0000u; // 803AC248
  c->r[4]=c->r[31]+0x0000036Cu; // 803AC24C
  c->r[5]=c->r[5]+0xFFFFC124u; // 803AC250
  c->lr=0x803AC258u; f_80397480(c); // 803AC254
  c->r[3]=c->r[31]|c->r[31]; // 803AC258
  c->lr=0x803AC260u; f_803AC348(c); // 803AC25C
  c->lr=0x803AC264u; f_80396E38(c); // 803AC260
  c->r[4]=c->r[31]+0x0000036Cu; // 803AC264
  c->lr=0x803AC26Cu; f_803974EC(c); // 803AC268
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 803AC26C
  c->r[3]=0u+0x00000000u; // 803AC270
  c->r[0]=R32(c->r[1]+0x00000014u); // 803AC274
  c->lr=c->r[0]; // 803AC278
  c->r[1]=c->r[1]+0x00000010u; // 803AC27C
  return; // 803AC280
}

// RegisterPlayerCallback__Q44nw4r3snd6detail11SoundThreadFPQ54nw4r3snd6detail11SoundThread14PlayerCallback
void f_803AC284(Ctx* __restrict c) {
  trace_call(0x803AC284u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803AC284
  c->r[0]=c->lr; // 803AC288
  W32(c->r[1]+0x00000024u,c->r[0]); // 803AC28C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 803AC290
  c->r[31]=c->r[3]+0x00000354u; // 803AC294
  W32(c->r[1]+0x00000018u,c->r[30]); // 803AC298
  c->r[30]=c->r[4]|c->r[4]; // 803AC29C
  W32(c->r[1]+0x00000014u,c->r[29]); // 803AC2A0
  c->r[29]=c->r[3]|c->r[3]; // 803AC2A4
  c->r[3]=c->r[31]|c->r[31]; // 803AC2A8
  c->lr=0x803AC2B0u; f_8025FCCC(c); // 803AC2AC
  c->r[0]=c->r[29]+0x00000388u; // 803AC2B0
  c->r[5]=c->r[30]|c->r[30]; // 803AC2B4
  W32(c->r[1]+0x00000008u,c->r[0]); // 803AC2B8
  c->r[3]=c->r[29]+0x00000384u; // 803AC2BC
  c->r[4]=c->r[1]+0x00000008u; // 803AC2C0
  c->lr=0x803AC2C8u; f_803B50B4(c); // 803AC2C4
  c->r[3]=c->r[31]|c->r[31]; // 803AC2C8
  c->lr=0x803AC2D0u; f_8025FDA8(c); // 803AC2CC
  c->r[0]=R32(c->r[1]+0x00000024u); // 803AC2D0
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 803AC2D4
  c->r[30]=R32(c->r[1]+0x00000018u); // 803AC2D8
  c->r[29]=R32(c->r[1]+0x00000014u); // 803AC2DC
  c->lr=c->r[0]; // 803AC2E0
  c->r[1]=c->r[1]+0x00000020u; // 803AC2E4
  return; // 803AC2E8
}

// UnregisterPlayerCallback__Q44nw4r3snd6detail11SoundThreadFPQ54nw4r3snd6detail11SoundThread14PlayerCallback
void f_803AC2EC(Ctx* __restrict c) {
  trace_call(0x803AC2ECu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803AC2EC
  c->r[0]=c->lr; // 803AC2F0
  W32(c->r[1]+0x00000024u,c->r[0]); // 803AC2F4
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 803AC2F8
  c->r[31]=c->r[3]+0x00000354u; // 803AC2FC
  W32(c->r[1]+0x00000018u,c->r[30]); // 803AC300
  c->r[30]=c->r[4]|c->r[4]; // 803AC304
  W32(c->r[1]+0x00000014u,c->r[29]); // 803AC308
  c->r[29]=c->r[3]|c->r[3]; // 803AC30C
  c->r[3]=c->r[31]|c->r[31]; // 803AC310
  c->lr=0x803AC318u; f_8025FCCC(c); // 803AC314
  c->r[4]=c->r[30]|c->r[30]; // 803AC318
  c->r[3]=c->r[29]+0x00000384u; // 803AC31C
  c->lr=0x803AC324u; f_803B50E0(c); // 803AC320
  c->r[3]=c->r[31]|c->r[31]; // 803AC324
  c->lr=0x803AC32Cu; f_8025FDA8(c); // 803AC328
  c->r[0]=R32(c->r[1]+0x00000024u); // 803AC32C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 803AC330
  c->r[30]=R32(c->r[1]+0x00000018u); // 803AC334
  c->r[29]=R32(c->r[1]+0x00000014u); // 803AC338
  c->lr=c->r[0]; // 803AC33C
  c->r[1]=c->r[1]+0x00000020u; // 803AC340
  return; // 803AC344
}

// fn_803AC348
void f_803AC348(Ctx* __restrict c) {
  trace_call(0x803AC348u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803AC348
  c->r[0]=c->lr; // 803AC34C
  W32(c->r[1]+0x00000034u,c->r[0]); // 803AC350
  c->r[11]=c->r[1]+0x00000030u; // 803AC354
  c->lr=0x803AC35Cu; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 803AC358
  c->r[27]=c->r[3]|c->r[3]; // 803AC35C
L_803AC360:;
  c->r[3]=c->r[27]+0x00000320u; // 803AC360
  c->r[4]=c->r[1]+0x00000008u; // 803AC364
  c->r[5]=0u+0x00000001u; // 803AC368
  c->lr=0x803AC370u; f_8025F2D4(c); // 803AC36C
  c->r[0]=R32(c->r[1]+0x00000008u); // 803AC370
  cmpu(c,0,c->r[0],0x00000001u); // 803AC374
  if (!crb(c,2)) { goto L_803AC460; } // 803AC378
  c->r[28]=c->r[27]+0x00000354u; // 803AC37C
  c->r[3]=c->r[28]|c->r[28]; // 803AC380
  c->lr=0x803AC388u; f_8025FCCC(c); // 803AC384
  c->r[31]=R32(c->r[27]+0x0000037Cu); // 803AC388
  c->r[30]=c->r[27]+0x0000037Cu; // 803AC38C
  goto L_803AC3AC; // 803AC390
L_803AC394:;
  c->r[3]=c->r[31]|c->r[31]; // 803AC394
  c->r[31]=R32(c->r[31]+0x00000000u); // 803AC398
  c->r[12]=R32(c->r[3]+0x00000008u); // 803AC39C
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 803AC3A0
  c->ctr=c->r[12]; // 803AC3A4
  if (true) { c->lr=0x803AC3ACu; dispatch(c,c->ctr); } // 803AC3A8
L_803AC3AC:;
  cmpu(c,0,c->r[31],c->r[30]); // 803AC3AC
  if (!crb(c,2)) { IRQCHK(c); goto L_803AC394; } // 803AC3B0
  c->lr=0x803AC3B8u; f_80262798(c); // 803AC3B4
  c->r[29]=c->r[3]|c->r[3]; // 803AC3B8
  c->lr=0x803AC3C0u; f_8039A9F0(c); // 803AC3BC
  c->lr=0x803AC3C4u; f_8039B014(c); // 803AC3C0
  c->lr=0x803AC3C8u; f_80396E38(c); // 803AC3C4
  c->lr=0x803AC3CCu; f_80397054(c); // 803AC3C8
  c->lr=0x803AC3D0u; f_80396E38(c); // 803AC3CC
  c->r[0]=R8(c->r[3]+0x0000001Au); // 803AC3D0
  cmps(c,0,(int32_t)c->r[0],0); // 803AC3D4
  if (!crb(c,2)) { goto L_803AC410; } // 803AC3D8
  c->r[30]=R32(c->r[27]+0x00000388u); // 803AC3DC
  c->r[31]=c->r[27]+0x00000388u; // 803AC3E0
  goto L_803AC400; // 803AC3E4
L_803AC3E8:;
  c->r[3]=c->r[30]|c->r[30]; // 803AC3E8
  c->r[30]=R32(c->r[30]+0x00000000u); // 803AC3EC
  c->r[12]=R32(c->r[3]+0x00000008u); // 803AC3F0
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 803AC3F4
  c->ctr=c->r[12]; // 803AC3F8
  if (true) { c->lr=0x803AC400u; dispatch(c,c->ctr); } // 803AC3FC
L_803AC400:;
  cmpu(c,0,c->r[30],c->r[31]); // 803AC400
  if (!crb(c,2)) { IRQCHK(c); goto L_803AC3E8; } // 803AC404
  c->lr=0x803AC40Cu; f_8039CC64(c); // 803AC408
  c->lr=0x803AC410u; f_8039CDFC(c); // 803AC40C
L_803AC410:;
  c->lr=0x803AC414u; f_803B3130(c); // 803AC410
  c->lr=0x803AC418u; f_803B266C(c); // 803AC414
  c->lr=0x803AC41Cu; f_803B2A84(c); // 803AC418
  c->lr=0x803AC420u; f_80262798(c); // 803AC41C
  c->r[0]=c->r[3]-c->r[29]; // 803AC420
  c->r[30]=R32(c->r[27]+0x0000037Cu); // 803AC424
  W32(c->r[27]+0x00000390u,c->r[0]); // 803AC428
  c->r[31]=c->r[27]+0x0000037Cu; // 803AC42C
  goto L_803AC44C; // 803AC430
L_803AC434:;
  c->r[3]=c->r[30]|c->r[30]; // 803AC434
  c->r[30]=R32(c->r[30]+0x00000000u); // 803AC438
  c->r[12]=R32(c->r[3]+0x00000008u); // 803AC43C
  c->r[12]=R32(c->r[12]+0x00000010u); // 803AC440
  c->ctr=c->r[12]; // 803AC444
  if (true) { c->lr=0x803AC44Cu; dispatch(c,c->ctr); } // 803AC448
L_803AC44C:;
  cmpu(c,0,c->r[30],c->r[31]); // 803AC44C
  if (!crb(c,2)) { IRQCHK(c); goto L_803AC434; } // 803AC450
  c->r[3]=c->r[28]|c->r[28]; // 803AC454
  c->lr=0x803AC45Cu; f_8025FDA8(c); // 803AC458
  IRQCHK(c); goto L_803AC360; // 803AC45C
L_803AC460:;
  cmpu(c,0,c->r[0],0x00000002u); // 803AC460
  if (!crb(c,2)) { IRQCHK(c); goto L_803AC360; } // 803AC464
  c->r[30]=R32(c->r[27]+0x00000388u); // 803AC468
  c->r[31]=c->r[27]+0x00000388u; // 803AC46C
  goto L_803AC48C; // 803AC470
L_803AC474:;
  c->r[3]=c->r[30]|c->r[30]; // 803AC474
  c->r[30]=R32(c->r[30]+0x00000000u); // 803AC478
  c->r[12]=R32(c->r[3]+0x00000008u); // 803AC47C
  c->r[12]=R32(c->r[12]+0x00000014u); // 803AC480
  c->ctr=c->r[12]; // 803AC484
  if (true) { c->lr=0x803AC48Cu; dispatch(c,c->ctr); } // 803AC488
L_803AC48C:;
  cmpu(c,0,c->r[30],c->r[31]); // 803AC48C
  if (!crb(c,2)) { IRQCHK(c); goto L_803AC474; } // 803AC490
  c->r[11]=c->r[1]+0x00000030u; // 803AC494
  c->lr=0x803AC49Cu; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 803AC498
  c->r[0]=R32(c->r[1]+0x00000034u); // 803AC49C
  c->lr=c->r[0]; // 803AC4A0
  c->r[1]=c->r[1]+0x00000030u; // 803AC4A4
  return; // 803AC4A8
}

// Setup__Q44nw4r3snd6detail14StrmBufferPoolFPvUli
void f_803AC4AC(Ctx* __restrict c) {
  trace_call(0x803AC4ACu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803AC4AC
  c->r[0]=c->lr; // 803AC4B0
  W32(c->r[1]+0x00000024u,c->r[0]); // 803AC4B4
  c->r[11]=c->r[1]+0x00000020u; // 803AC4B8
  c->lr=0x803AC4C0u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 803AC4BC
  cmps(c,0,(int32_t)c->r[6],0); // 803AC4C0
  c->r[27]=c->r[3]|c->r[3]; // 803AC4C4
  c->r[28]=c->r[4]|c->r[4]; // 803AC4C8
  c->r[29]=c->r[5]|c->r[5]; // 803AC4CC
  c->r[30]=c->r[6]|c->r[6]; // 803AC4D0
  if (crb(c,2)) { goto L_803AC514; } // 803AC4D4
  c->lr=0x803AC4DCu; f_8025EA10(c); // 803AC4D8
  c->r[4]=divwu(c->r[29],c->r[30]); // 803AC4DC
  c->r[0]=0u+0x00000000u; // 803AC4E0
  c->r[31]=c->r[3]|c->r[3]; // 803AC4E4
  W32(c->r[27]+0x00000000u,c->r[28]); // 803AC4E8
  c->r[3]=c->r[27]+0x00000014u; // 803AC4EC
  W32(c->r[27]+0x00000004u,c->r[29]); // 803AC4F0
  W32(c->r[27]+0x00000008u,c->r[4]); // 803AC4F4
  c->r[4]=0u+0x00000000u; // 803AC4F8
  c->r[5]=0u+0x00000004u; // 803AC4FC
  W32(c->r[27]+0x0000000Cu,c->r[30]); // 803AC500
  W32(c->r[27]+0x00000010u,c->r[0]); // 803AC504
  c->lr=0x803AC50Cu; f_800043EC(c); // 803AC508
  c->r[3]=c->r[31]|c->r[31]; // 803AC50C
  c->lr=0x803AC514u; f_8025EA38(c); // 803AC510
L_803AC514:;
  c->r[11]=c->r[1]+0x00000020u; // 803AC514
  c->lr=0x803AC51Cu; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 803AC518
  c->r[0]=R32(c->r[1]+0x00000024u); // 803AC51C
  c->lr=c->r[0]; // 803AC520
  c->r[1]=c->r[1]+0x00000020u; // 803AC524
  return; // 803AC528
}

// Alloc__Q44nw4r3snd6detail14StrmBufferPoolFv
void f_803AC52C(Ctx* __restrict c) {
  trace_call(0x803AC52Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803AC52C
  c->r[0]=c->lr; // 803AC530
  W32(c->r[1]+0x00000014u,c->r[0]); // 803AC534
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 803AC538
  c->r[31]=c->r[3]|c->r[3]; // 803AC53C
  c->lr=0x803AC544u; f_8025EA10(c); // 803AC540
  c->r[4]=R32(c->r[31]+0x0000000Cu); // 803AC544
  c->r[0]=R32(c->r[31]+0x00000010u); // 803AC548
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[4]); // 803AC54C
  if (crb(c,0)) { goto L_803AC560; } // 803AC550
  c->lr=0x803AC558u; f_8025EA38(c); // 803AC554
  c->r[3]=0u+0x00000000u; // 803AC558
  goto L_803AC5FC; // 803AC55C
L_803AC560:;
  c->r[0]=c->r[4]+0x00000007u; // 803AC560
  c->r[8]=0u+0x00000000u; // 803AC564
  c->r[4]=rotl(c->r[0],0)&0xFFFFFFF8u; // 803AC568
  c->r[4]=sraw(c,c->r[4],3); // 803AC56C
  c->r[0]=0u+0x00000008u; // 803AC570
  c->r[7]=addc(c,c->r[4],0,c->xer_ca); // 803AC574
  goto L_803AC5EC; // 803AC578
L_803AC57C:;
  c->r[6]=c->r[31]+c->r[8]; // 803AC57C
  c->r[5]=R8(c->r[6]+0x00000014u); // 803AC580
  cmpu(c,0,c->r[5],0x000000FFu); // 803AC584
  if (crb(c,2)) { goto L_803AC5E8; } // 803AC588
  c->r[9]=0u+0x00000001u; // 803AC58C
  c->r[10]=0u+0x00000000u; // 803AC590
  c->ctr=c->r[0]; // 803AC594
L_803AC598:;
  c->r[4]=c->r[5]&c->r[9]; cr0(c,c->r[4]); // 803AC598
  if (!crb(c,2)) { goto L_803AC5DC; } // 803AC59C
  c->r[4]=R8(c->r[6]+0x00000014u); // 803AC5A0
  c->r[0]=rotl(c->r[8],3)&0xFFFFFFF8u; // 803AC5A4
  c->r[0]=c->r[10]+c->r[0]; // 803AC5A8
  c->r[4]=c->r[4]|c->r[9]; // 803AC5AC
  W8(c->r[6]+0x00000014u,c->r[4]); // 803AC5B0
  c->r[4]=R32(c->r[31]+0x00000008u); // 803AC5B4
  c->r[5]=R32(c->r[31]+0x00000010u); // 803AC5B8
  c->r[4]=(uint32_t)((int32_t)c->r[4]*(int32_t)c->r[0]); // 803AC5BC
  c->r[0]=R32(c->r[31]+0x00000000u); // 803AC5C0
  c->r[5]=c->r[5]+0x00000001u; // 803AC5C4
  W32(c->r[31]+0x00000010u,c->r[5]); // 803AC5C8
  c->r[31]=c->r[4]+c->r[0]; // 803AC5CC
  c->lr=0x803AC5D4u; f_8025EA38(c); // 803AC5D0
  c->r[3]=c->r[31]|c->r[31]; // 803AC5D4
  goto L_803AC5FC; // 803AC5D8
L_803AC5DC:;
  c->r[9]=rotl(c->r[9],1)&0x000000FEu; // 803AC5DC
  c->r[10]=c->r[10]+0x00000001u; // 803AC5E0
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_803AC598; } // 803AC5E4
L_803AC5E8:;
  c->r[8]=c->r[8]+0x00000001u; // 803AC5E8
L_803AC5EC:;
  cmps(c,0,(int32_t)c->r[8],(int32_t)c->r[7]); // 803AC5EC
  if (crb(c,0)) { IRQCHK(c); goto L_803AC57C; } // 803AC5F0
  c->lr=0x803AC5F8u; f_8025EA38(c); // 803AC5F4
  c->r[3]=0u+0x00000000u; // 803AC5F8
L_803AC5FC:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 803AC5FC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 803AC600
  c->lr=c->r[0]; // 803AC604
  c->r[1]=c->r[1]+0x00000010u; // 803AC608
  return; // 803AC60C
}

// Free__Q44nw4r3snd6detail14StrmBufferPoolFPv
void f_803AC610(Ctx* __restrict c) {
  trace_call(0x803AC610u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803AC610
  c->r[0]=c->lr; // 803AC614
  W32(c->r[1]+0x00000014u,c->r[0]); // 803AC618
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 803AC61C
  c->r[31]=c->r[4]|c->r[4]; // 803AC620
  W32(c->r[1]+0x00000008u,c->r[30]); // 803AC624
  c->r[30]=c->r[3]|c->r[3]; // 803AC628
  c->lr=0x803AC630u; f_8025EA10(c); // 803AC62C
  c->r[5]=R32(c->r[30]+0x00000000u); // 803AC630
  c->r[4]=0u+0x00000001u; // 803AC634
  c->r[0]=R32(c->r[30]+0x00000008u); // 803AC638
  c->r[5]=c->r[31]-c->r[5]; // 803AC63C
  c->r[5]=divwu(c->r[5],c->r[0]); // 803AC640
  c->r[0]=rotl(c->r[5],29)&0x1FFFFFFFu; // 803AC644
  c->r[6]=c->r[30]+c->r[0]; // 803AC648
  c->r[0]=rotl(c->r[5],0)&0x00000007u; // 803AC64C
  c->r[5]=R8(c->r[6]+0x00000014u); // 803AC650
  c->r[0]=((c->r[0])&0x20)?0u:(c->r[4]<<((c->r[0])&31)); // 803AC654
  c->r[0]=c->r[5]&~c->r[0]; // 803AC658
  W8(c->r[6]+0x00000014u,c->r[0]); // 803AC65C
  c->r[4]=R32(c->r[30]+0x00000010u); // 803AC660
  c->r[0]=c->r[4]+0xFFFFFFFFu; // 803AC664
  W32(c->r[30]+0x00000010u,c->r[0]); // 803AC668
  c->lr=0x803AC670u; f_8025EA38(c); // 803AC66C
  c->r[0]=R32(c->r[1]+0x00000014u); // 803AC670
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 803AC674
  c->r[30]=R32(c->r[1]+0x00000008u); // 803AC678
  c->lr=c->r[0]; // 803AC67C
  c->r[1]=c->r[1]+0x00000010u; // 803AC680
  return; // 803AC684
}

// fn_803AC688
void f_803AC688(Ctx* __restrict c) {
  trace_call(0x803AC688u);
  c->r[0]=0u+0x00000000u; // 803AC688
  W32(c->r[3]+0x00000000u,c->r[0]); // 803AC68C
  W32(c->r[3]+0x00000004u,c->r[0]); // 803AC690
  return; // 803AC694
}

// fn_803AC698
void f_803AC698(Ctx* __restrict c) {
  trace_call(0x803AC698u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803AC698
  c->r[0]=c->lr; // 803AC69C
  c->r[3]=R32(c->r[3]+0x00000004u); // 803AC6A0
  W32(c->r[1]+0x00000014u,c->r[0]); // 803AC6A4
  c->r[5]=c->r[3]+0x00000008u; // 803AC6A8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 803AC6AC
  c->r[31]=c->r[4]|c->r[4]; // 803AC6B0
  c->r[3]=R8(c->r[3]+0x00000008u); // 803AC6B4
  c->r[4]=R32(c->r[5]+0x00000004u); // 803AC6B8
  c->lr=0x803AC6C0u; f_803B3154(c); // 803AC6BC
  c->r[0]=R8(c->r[3]+0x00000000u); // 803AC6C0
  W8(c->r[31]+0x00000000u,c->r[0]); // 803AC6C4
  c->r[0]=R8(c->r[3]+0x00000001u); // 803AC6C8
  W8(c->r[31]+0x00000001u,c->r[0]); // 803AC6CC
  c->r[0]=R8(c->r[3]+0x00000002u); // 803AC6D0
  W8(c->r[31]+0x00000002u,c->r[0]); // 803AC6D4
  c->r[4]=R8(c->r[3]+0x00000003u); // 803AC6D8
  c->r[0]=R16(c->r[3]+0x00000004u); // 803AC6DC
  c->r[4]=rotl(c->r[4],16)&0xFFFF0000u; // 803AC6E0
  c->r[0]=c->r[4]+c->r[0]; // 803AC6E4
  W32(c->r[31]+0x00000004u,c->r[0]); // 803AC6E8
  c->r[0]=R16(c->r[3]+0x00000006u); // 803AC6EC
  W16(c->r[31]+0x00000008u,c->r[0]); // 803AC6F0
  c->r[0]=R32(c->r[3]+0x00000008u); // 803AC6F4
  W32(c->r[31]+0x0000000Cu,c->r[0]); // 803AC6F8
  c->r[0]=R32(c->r[3]+0x0000000Cu); // 803AC6FC
  W32(c->r[31]+0x00000010u,c->r[0]); // 803AC700
  c->r[0]=R32(c->r[3]+0x00000010u); // 803AC704
  W32(c->r[31]+0x00000014u,c->r[0]); // 803AC708
  c->r[0]=R32(c->r[3]+0x00000014u); // 803AC70C
  W32(c->r[31]+0x00000018u,c->r[0]); // 803AC710
  c->r[0]=R32(c->r[3]+0x00000018u); // 803AC714
  W32(c->r[31]+0x0000001Cu,c->r[0]); // 803AC718
  c->r[0]=R32(c->r[3]+0x0000001Cu); // 803AC71C
  W32(c->r[31]+0x00000020u,c->r[0]); // 803AC720
  c->r[0]=R32(c->r[3]+0x00000020u); // 803AC724
  W32(c->r[31]+0x00000024u,c->r[0]); // 803AC728
  c->r[0]=R32(c->r[3]+0x00000024u); // 803AC72C
  W32(c->r[31]+0x00000028u,c->r[0]); // 803AC730
  c->r[0]=R32(c->r[3]+0x00000028u); // 803AC734
  W32(c->r[31]+0x0000002Cu,c->r[0]); // 803AC738
  c->r[0]=R32(c->r[3]+0x0000002Cu); // 803AC73C
  W32(c->r[31]+0x00000030u,c->r[0]); // 803AC740
  c->r[0]=R32(c->r[3]+0x00000030u); // 803AC744
  c->r[3]=0u+0x00000001u; // 803AC748
  W32(c->r[31]+0x00000034u,c->r[0]); // 803AC74C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 803AC750
  c->r[0]=R32(c->r[1]+0x00000014u); // 803AC754
  c->lr=c->r[0]; // 803AC758
  c->r[1]=c->r[1]+0x00000010u; // 803AC75C
  return; // 803AC760
}

// fn_803AC764
void f_803AC764(Ctx* __restrict c) {
  trace_call(0x803AC764u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803AC764
  c->r[0]=c->lr; // 803AC768
  c->r[6]=R32(c->r[3]+0x00000004u); // 803AC76C
  W32(c->r[1]+0x00000024u,c->r[0]); // 803AC770
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 803AC774
  c->r[31]=c->r[4]|c->r[4]; // 803AC778
  W32(c->r[1]+0x00000018u,c->r[30]); // 803AC77C
  c->r[30]=c->r[5]|c->r[5]; // 803AC780
  c->r[5]=c->r[6]+0x00000008u; // 803AC784
  W32(c->r[1]+0x00000014u,c->r[29]); // 803AC788
  c->r[29]=c->r[3]|c->r[3]; // 803AC78C
  c->r[3]=R8(c->r[6]+0x00000008u); // 803AC790
  c->r[4]=R32(c->r[6]+0x0000000Cu); // 803AC794
  c->lr=0x803AC79Cu; f_803B3154(c); // 803AC798
  c->r[0]=R8(c->r[3]+0x00000000u); // 803AC79C
  cmpu(c,0,c->r[0],0x00000002u); // 803AC7A0
  if (crb(c,2)) { goto L_803AC7B0; } // 803AC7A4
  c->r[3]=0u+0x00000000u; // 803AC7A8
  goto L_803AC8D0; // 803AC7AC
L_803AC7B0:;
  c->r[4]=R32(c->r[29]+0x00000004u); // 803AC7B0
  c->r[3]=R8(c->r[4]+0x00000018u); // 803AC7B4
  c->r[5]=c->r[4]+0x00000008u; // 803AC7B8
  c->r[4]=R32(c->r[4]+0x0000001Cu); // 803AC7BC
  c->lr=0x803AC7C4u; f_803B3154(c); // 803AC7C0
  c->r[0]=R8(c->r[3]+0x00000000u); // 803AC7C4
  cmps(c,0,(int32_t)c->r[30],(int32_t)c->r[0]); // 803AC7C8
  if (crb(c,0)) { goto L_803AC7D8; } // 803AC7CC
  c->r[3]=0u+0x00000000u; // 803AC7D0
  goto L_803AC8D0; // 803AC7D4
L_803AC7D8:;
  c->r[0]=rotl(c->r[30],3)&0xFFFFFFF8u; // 803AC7D8
  c->r[4]=R32(c->r[29]+0x00000004u); // 803AC7DC
  c->r[6]=c->r[3]+c->r[0]; // 803AC7E0
  c->r[5]=c->r[4]+0x00000008u; // 803AC7E4
  c->r[3]=R8(c->r[6]+0x00000004u); // 803AC7E8
  c->r[4]=R32(c->r[6]+0x00000008u); // 803AC7EC
  c->lr=0x803AC7F4u; f_803B3154(c); // 803AC7F0
  c->r[4]=c->r[3]|c->r[3]; // 803AC7F4
  c->r[5]=R32(c->r[29]+0x00000004u); // 803AC7F8
  c->r[3]=R8(c->r[3]+0x00000000u); // 803AC7FC
  c->r[4]=R32(c->r[4]+0x00000004u); // 803AC800
  c->r[5]=c->r[5]+0x00000008u; // 803AC804
  c->lr=0x803AC80Cu; f_803B3154(c); // 803AC808
  c->r[4]=R16(c->r[3]+0x00000000u); // 803AC80C
  c->r[0]=R16(c->r[3]+0x00000002u); // 803AC810
  W16(c->r[31]+0x00000000u,c->r[4]); // 803AC814
  W16(c->r[31]+0x00000002u,c->r[0]); // 803AC818
  c->r[4]=R16(c->r[3]+0x00000004u); // 803AC81C
  c->r[0]=R16(c->r[3]+0x00000006u); // 803AC820
  W16(c->r[31]+0x00000004u,c->r[4]); // 803AC824
  W16(c->r[31]+0x00000006u,c->r[0]); // 803AC828
  c->r[4]=R16(c->r[3]+0x00000008u); // 803AC82C
  c->r[0]=R16(c->r[3]+0x0000000Au); // 803AC830
  W16(c->r[31]+0x00000008u,c->r[4]); // 803AC834
  W16(c->r[31]+0x0000000Au,c->r[0]); // 803AC838
  c->r[4]=R16(c->r[3]+0x0000000Cu); // 803AC83C
  c->r[0]=R16(c->r[3]+0x0000000Eu); // 803AC840
  W16(c->r[31]+0x0000000Cu,c->r[4]); // 803AC844
  W16(c->r[31]+0x0000000Eu,c->r[0]); // 803AC848
  c->r[4]=R16(c->r[3]+0x00000010u); // 803AC84C
  c->r[0]=R16(c->r[3]+0x00000012u); // 803AC850
  W16(c->r[31]+0x00000010u,c->r[4]); // 803AC854
  W16(c->r[31]+0x00000012u,c->r[0]); // 803AC858
  c->r[4]=R16(c->r[3]+0x00000014u); // 803AC85C
  c->r[0]=R16(c->r[3]+0x00000016u); // 803AC860
  W16(c->r[31]+0x00000014u,c->r[4]); // 803AC864
  W16(c->r[31]+0x00000016u,c->r[0]); // 803AC868
  c->r[4]=R16(c->r[3]+0x00000018u); // 803AC86C
  c->r[0]=R16(c->r[3]+0x0000001Au); // 803AC870
  W16(c->r[31]+0x00000018u,c->r[4]); // 803AC874
  W16(c->r[31]+0x0000001Au,c->r[0]); // 803AC878
  c->r[4]=R16(c->r[3]+0x0000001Cu); // 803AC87C
  c->r[0]=R16(c->r[3]+0x0000001Eu); // 803AC880
  W16(c->r[31]+0x0000001Cu,c->r[4]); // 803AC884
  W16(c->r[31]+0x0000001Eu,c->r[0]); // 803AC888
  c->r[4]=R16(c->r[3]+0x00000020u); // 803AC88C
  c->r[0]=R16(c->r[3]+0x00000022u); // 803AC890
  W16(c->r[31]+0x00000020u,c->r[4]); // 803AC894
  W16(c->r[31]+0x00000022u,c->r[0]); // 803AC898
  c->r[4]=R16(c->r[3]+0x00000024u); // 803AC89C
  c->r[0]=R16(c->r[3]+0x00000026u); // 803AC8A0
  W16(c->r[31]+0x00000024u,c->r[4]); // 803AC8A4
  W16(c->r[31]+0x00000026u,c->r[0]); // 803AC8A8
  c->r[0]=R16(c->r[3]+0x00000028u); // 803AC8AC
  W16(c->r[31]+0x00000028u,c->r[0]); // 803AC8B0
  c->r[0]=R16(c->r[3]+0x0000002Au); // 803AC8B4
  W16(c->r[31]+0x0000002Au,c->r[0]); // 803AC8B8
  c->r[0]=R16(c->r[3]+0x0000002Cu); // 803AC8BC
  W16(c->r[31]+0x0000002Cu,c->r[0]); // 803AC8C0
  c->r[0]=R16(c->r[3]+0x0000002Eu); // 803AC8C4
  c->r[3]=0u+0x00000001u; // 803AC8C8
  W16(c->r[31]+0x0000002Eu,c->r[0]); // 803AC8CC
L_803AC8D0:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 803AC8D0
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 803AC8D4
  c->r[30]=R32(c->r[1]+0x00000018u); // 803AC8D8
  c->r[29]=R32(c->r[1]+0x00000014u); // 803AC8DC
  c->lr=c->r[0]; // 803AC8E0
  c->r[1]=c->r[1]+0x00000020u; // 803AC8E4
  return; // 803AC8E8
}

// LoadFileHeader__Q44nw4r3snd6detail14StrmFileLoaderFPvUl
void f_803AC8EC(Ctx* __restrict c) {
  trace_call(0x803AC8ECu);
  {uint32_t ea=c->r[1]+0xFFFFFF80u; W32(ea,c->r[1]); c->r[1]=ea;} // 803AC8EC
  c->r[0]=c->lr; // 803AC8F0
  W32(c->r[1]+0x00000084u,c->r[0]); // 803AC8F4
  W32(c->r[1]+0x0000007Cu,c->r[31]); // 803AC8F8
  c->r[31]=c->r[4]|c->r[4]; // 803AC8FC
  c->r[4]=0u+0x00000000u; // 803AC900
  W32(c->r[1]+0x00000078u,c->r[30]); // 803AC904
  c->r[30]=c->r[3]|c->r[3]; // 803AC908
  W32(c->r[1]+0x00000074u,c->r[29]); // 803AC90C
  W32(c->r[1]+0x00000070u,c->r[28]); // 803AC910
  c->r[28]=c->r[5]|c->r[5]; // 803AC914
  c->r[5]=0u+0x00000000u; // 803AC918
  c->r[3]=R32(c->r[3]+0x00000000u); // 803AC91C
  c->r[12]=R32(c->r[3]+0x00000000u); // 803AC920
  c->r[12]=R32(c->r[12]+0x00000044u); // 803AC924
  c->ctr=c->r[12]; // 803AC928
  if (true) { c->lr=0x803AC930u; dispatch(c,c->ctr); } // 803AC92C
  c->r[3]=R32(c->r[30]+0x00000000u); // 803AC930
  c->r[0]=c->r[1]+0x00000027u; // 803AC934
  c->r[29]=rotl(c->r[0],0)&0xFFFFFFE0u; // 803AC938
  c->r[5]=0u+0x00000040u; // 803AC93C
  c->r[12]=R32(c->r[3]+0x00000000u); // 803AC940
  c->r[4]=c->r[29]|c->r[29]; // 803AC944
  c->r[12]=R32(c->r[12]+0x00000014u); // 803AC948
  c->ctr=c->r[12]; // 803AC94C
  if (true) { c->lr=0x803AC954u; dispatch(c,c->ctr); } // 803AC950
  cmpu(c,0,c->r[3],0x00000040u); // 803AC954
  if (crb(c,2)) { goto L_803AC964; } // 803AC958
  c->r[3]=0u+0x00000000u; // 803AC95C
  goto L_803ACA90; // 803AC960
L_803AC964:;
  c->r[3]=R32(c->r[29]+0x00000000u); // 803AC964
  c->r[0]=c->r[3]+0xADAD0000u; // 803AC968
  cmpu(c,0,c->r[0],0x0000544Du); // 803AC96C
  if (crb(c,2)) { goto L_803AC97C; } // 803AC970
  c->r[0]=0u+0x00000000u; // 803AC974
  goto L_803AC9A8; // 803AC978
L_803AC97C:;
  c->r[4]=R16(c->r[29]+0x00000006u); // 803AC97C
  cmpu(c,0,c->r[4],0x00000100u); // 803AC980
  if (!crb(c,0)) { goto L_803AC990; } // 803AC984
  c->r[0]=0u+0x00000000u; // 803AC988
  goto L_803AC9A8; // 803AC98C
L_803AC990:;
  c->r[0]=addc(c,~c->r[4],0x00000100u,1); // 803AC990
  c->r[3]=0u+0x00000100u; // 803AC994
  c->r[3]=c->r[3]|~c->r[4]; // 803AC998
  c->r[0]=rotl(c->r[0],31)&0x7FFFFFFFu; // 803AC99C
  c->r[0]=c->r[3]-c->r[0]; // 803AC9A0
  c->r[0]=rotl(c->r[0],1)&0x00000001u; // 803AC9A4
L_803AC9A8:;
  cmps(c,0,(int32_t)c->r[0],0); // 803AC9A8
  if (!crb(c,2)) { goto L_803AC9B8; } // 803AC9AC
  c->r[3]=0u+0x00000000u; // 803AC9B0
  goto L_803ACA90; // 803AC9B4
L_803AC9B8:;
  c->r[0]=R32(c->r[29]+0x00000018u); // 803AC9B8
  cmpu(c,0,c->r[0],c->r[28]); // 803AC9BC
  if (!crb(c,1)) { goto L_803AC9CC; } // 803AC9C0
  c->r[3]=0u+0x00000000u; // 803AC9C4
  goto L_803ACA90; // 803AC9C8
L_803AC9CC:;
  c->r[3]=R32(c->r[30]+0x00000000u); // 803AC9CC
  c->r[4]=0u+0x00000000u; // 803AC9D0
  c->r[6]=R32(c->r[29]+0x00000010u); // 803AC9D4
  c->r[5]=0u+0x00000000u; // 803AC9D8
  c->r[12]=R32(c->r[3]+0x00000000u); // 803AC9DC
  c->r[0]=R32(c->r[29]+0x00000014u); // 803AC9E0
  c->r[12]=R32(c->r[12]+0x00000044u); // 803AC9E4
  c->r[29]=c->r[6]+c->r[0]; // 803AC9E8
  c->ctr=c->r[12]; // 803AC9EC
  if (true) { c->lr=0x803AC9F4u; dispatch(c,c->ctr); } // 803AC9F0
  c->r[3]=R32(c->r[30]+0x00000000u); // 803AC9F4
  c->r[4]=c->r[31]|c->r[31]; // 803AC9F8
  c->r[5]=c->r[29]|c->r[29]; // 803AC9FC
  c->r[12]=R32(c->r[3]+0x00000000u); // 803ACA00
  c->r[12]=R32(c->r[12]+0x00000014u); // 803ACA04
  c->ctr=c->r[12]; // 803ACA08
  if (true) { c->lr=0x803ACA10u; dispatch(c,c->ctr); } // 803ACA0C
  cmpu(c,0,c->r[3],c->r[29]); // 803ACA10
  if (crb(c,2)) { goto L_803ACA20; } // 803ACA14
  c->r[3]=0u+0x00000000u; // 803ACA18
  goto L_803ACA90; // 803ACA1C
L_803ACA20:;
  c->r[3]=R32(c->r[31]+0x00000000u); // 803ACA20
  c->r[0]=c->r[3]+0xADAD0000u; // 803ACA24
  cmpu(c,0,c->r[0],0x0000544Du); // 803ACA28
  if (crb(c,2)) { goto L_803ACA38; } // 803ACA2C
  c->r[0]=0u+0x00000000u; // 803ACA30
  goto L_803ACA64; // 803ACA34
L_803ACA38:;
  c->r[4]=R16(c->r[31]+0x00000006u); // 803ACA38
  cmpu(c,0,c->r[4],0x00000100u); // 803ACA3C
  if (!crb(c,0)) { goto L_803ACA4C; } // 803ACA40
  c->r[0]=0u+0x00000000u; // 803ACA44
  goto L_803ACA64; // 803ACA48
L_803ACA4C:;
  c->r[0]=addc(c,~c->r[4],0x00000100u,1); // 803ACA4C
  c->r[3]=0u+0x00000100u; // 803ACA50
  c->r[3]=c->r[3]|~c->r[4]; // 803ACA54
  c->r[0]=rotl(c->r[0],31)&0x7FFFFFFFu; // 803ACA58
  c->r[0]=c->r[3]-c->r[0]; // 803ACA5C
  c->r[0]=rotl(c->r[0],1)&0x00000001u; // 803ACA60
L_803ACA64:;
  cmps(c,0,(int32_t)c->r[0],0); // 803ACA64
  if (crb(c,2)) { goto L_803ACA8C; } // 803ACA68
  W32(c->r[30]+0x00000004u,c->r[31]); // 803ACA6C
  c->r[0]=R32(c->r[31]+0x00000010u); // 803ACA70
  c->r[3]=c->r[0]+c->r[31]; // 803ACA74
  W32(c->r[30]+0x00000008u,c->r[3]); // 803ACA78
  c->r[5]=c->r[3]+0x00000008u; // 803ACA7C
  c->r[3]=R8(c->r[3]+0x00000008u); // 803ACA80
  c->r[4]=R32(c->r[5]+0x00000004u); // 803ACA84
  c->lr=0x803ACA8Cu; f_803B3154(c); // 803ACA88
L_803ACA8C:;
  c->r[3]=0u+0x00000001u; // 803ACA8C
L_803ACA90:;
  c->r[0]=R32(c->r[1]+0x00000084u); // 803ACA90
  c->r[31]=R32(c->r[1]+0x0000007Cu); // 803ACA94
  c->r[30]=R32(c->r[1]+0x00000078u); // 803ACA98
  c->r[29]=R32(c->r[1]+0x00000074u); // 803ACA9C
  c->r[28]=R32(c->r[1]+0x00000070u); // 803ACAA0
  c->lr=c->r[0]; // 803ACAA4
  c->r[1]=c->r[1]+0x00000080u; // 803ACAA8
  return; // 803ACAAC
}

// fn_803ACAB0
void f_803ACAB0(Ctx* __restrict c) {
  trace_call(0x803ACAB0u);
  c->r[11]=rotl(c->r[1],0)&0x0000001Fu; // 803ACAB0
  c->r[12]=c->r[1]|c->r[1]; // 803ACAB4
  c->r[11]=addc(c,~c->r[11],0xFFFFFFA0u,1); // 803ACAB8
  {uint32_t ea=c->r[1]+c->r[11]; W32(ea,c->r[1]); c->r[1]=ea;} // 803ACABC
  c->r[0]=c->lr; // 803ACAC0
  W32(c->r[12]+0x00000004u,c->r[0]); // 803ACAC4
  W32(c->r[12]+0xFFFFFFFCu,c->r[31]); // 803ACAC8
  c->r[31]=c->r[7]|c->r[7]; // 803ACACC
  W32(c->r[12]+0xFFFFFFF8u,c->r[30]); // 803ACAD0
  c->r[30]=c->r[5]|c->r[5]; // 803ACAD4
  W32(c->r[12]+0xFFFFFFF4u,c->r[29]); // 803ACAD8
  c->r[29]=c->r[4]|c->r[4]; // 803ACADC
  W32(c->r[12]+0xFFFFFFF0u,c->r[28]); // 803ACAE0
  c->r[28]=c->r[3]|c->r[3]; // 803ACAE4
  c->r[8]=R32(c->r[3]+0x00000004u); // 803ACAE8
  c->r[0]=0u-c->r[8]; // 803ACAEC
  c->r[0]=c->r[0]|c->r[8]; // 803ACAF0
  c->r[0]=rotl(c->r[0],1)&0x00000001u; cr0(c,c->r[0]); // 803ACAF4
  if (!crb(c,2)) { goto L_803ACB04; } // 803ACAF8
  c->r[3]=0u+0x00000000u; // 803ACAFC
  goto L_803ACC30; // 803ACB00
L_803ACB04:;
  if (crb(c,2)) { goto L_803ACB10; } // 803ACB04
  c->r[4]=R32(c->r[8]+0x00000018u); // 803ACB08
  goto L_803ACB14; // 803ACB0C
L_803ACB10:;
  c->r[4]=0u+0x00000000u; // 803ACB10
L_803ACB14:;
  c->r[0]=(uint32_t)((int32_t)c->r[6]*(int32_t)c->r[7]); // 803ACB14
  c->r[3]=R32(c->r[3]+0x00000000u); // 803ACB18
  c->r[5]=0u+0x00000000u; // 803ACB1C
  c->r[12]=R32(c->r[3]+0x00000000u); // 803ACB20
  c->r[12]=R32(c->r[12]+0x00000044u); // 803ACB24
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 803ACB28
  c->r[4]=c->r[4]+c->r[0]; // 803ACB2C
  c->r[4]=c->r[4]+0x00000008u; // 803ACB30
  c->ctr=c->r[12]; // 803ACB34
  if (true) { c->lr=0x803ACB3Cu; dispatch(c,c->ctr); } // 803ACB38
  c->r[3]=R32(c->r[28]+0x00000000u); // 803ACB3C
  c->r[4]=c->r[1]+0x00000020u; // 803ACB40
  c->r[5]=0u+0x00000020u; // 803ACB44
  c->r[12]=R32(c->r[3]+0x00000000u); // 803ACB48
  c->r[12]=R32(c->r[12]+0x00000014u); // 803ACB4C
  c->ctr=c->r[12]; // 803ACB50
  if (true) { c->lr=0x803ACB58u; dispatch(c,c->ctr); } // 803ACB54
  cmps(c,0,(int32_t)c->r[31],0); // 803ACB58
  c->r[6]=c->r[1]+0x00000020u; // 803ACB5C
  c->r[3]=0u+0x00000000u; // 803ACB60
  c->r[4]=0u+0x00000000u; // 803ACB64
  if (!crb(c,1)) { goto L_803ACC2C; } // 803ACB68
  c->r[0]=rotl(c->r[31],30)&0x3FFFFFFFu; cr0(c,c->r[0]); // 803ACB6C
  c->ctr=c->r[0]; // 803ACB70
  if (crb(c,2)) { goto L_803ACC04; } // 803ACB74
L_803ACB78:;
  c->r[5]=R16(c->r[6]+c->r[3]); // 803ACB78
  c->r[0]=c->r[4]+0x00000001u; // 803ACB7C
  c->r[0]=rotl(c->r[0],1)&0xFFFFFFFEu; // 803ACB80
  c->r[3]=c->r[3]+0x00000004u; // 803ACB84
  W16(c->r[29]+c->r[4],c->r[5]); // 803ACB88
  c->r[0]=R16(c->r[6]+c->r[0]); // 803ACB8C
  W16(c->r[30]+c->r[4],c->r[0]); // 803ACB90
  c->r[0]=c->r[4]+0x00000003u; // 803ACB94
  c->r[4]=c->r[4]+0x00000002u; // 803ACB98
  c->r[5]=R16(c->r[6]+c->r[3]); // 803ACB9C
  c->r[0]=rotl(c->r[0],1)&0xFFFFFFFEu; // 803ACBA0
  c->r[3]=c->r[3]+0x00000004u; // 803ACBA4
  W16(c->r[29]+c->r[4],c->r[5]); // 803ACBA8
  c->r[0]=R16(c->r[6]+c->r[0]); // 803ACBAC
  W16(c->r[30]+c->r[4],c->r[0]); // 803ACBB0
  c->r[0]=c->r[4]+0x00000003u; // 803ACBB4
  c->r[4]=c->r[4]+0x00000002u; // 803ACBB8
  c->r[5]=R16(c->r[6]+c->r[3]); // 803ACBBC
  c->r[0]=rotl(c->r[0],1)&0xFFFFFFFEu; // 803ACBC0
  c->r[3]=c->r[3]+0x00000004u; // 803ACBC4
  W16(c->r[29]+c->r[4],c->r[5]); // 803ACBC8
  c->r[0]=R16(c->r[6]+c->r[0]); // 803ACBCC
  W16(c->r[30]+c->r[4],c->r[0]); // 803ACBD0
  c->r[0]=c->r[4]+0x00000003u; // 803ACBD4
  c->r[4]=c->r[4]+0x00000002u; // 803ACBD8
  c->r[5]=R16(c->r[6]+c->r[3]); // 803ACBDC
  c->r[0]=rotl(c->r[0],1)&0xFFFFFFFEu; // 803ACBE0
  c->r[3]=c->r[3]+0x00000004u; // 803ACBE4
  W16(c->r[29]+c->r[4],c->r[5]); // 803ACBE8
  c->r[0]=R16(c->r[6]+c->r[0]); // 803ACBEC
  W16(c->r[30]+c->r[4],c->r[0]); // 803ACBF0
  c->r[4]=c->r[4]+0x00000002u; // 803ACBF4
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_803ACB78; } // 803ACBF8
  c->r[31]=c->r[31]&0x00000003u; cr0(c,c->r[31]); // 803ACBFC
  if (crb(c,2)) { goto L_803ACC2C; } // 803ACC00
L_803ACC04:;
  c->ctr=c->r[31]; // 803ACC04
L_803ACC08:;
  c->r[5]=R16(c->r[6]+c->r[3]); // 803ACC08
  c->r[0]=c->r[4]+0x00000001u; // 803ACC0C
  c->r[0]=rotl(c->r[0],1)&0xFFFFFFFEu; // 803ACC10
  c->r[3]=c->r[3]+0x00000004u; // 803ACC14
  W16(c->r[29]+c->r[4],c->r[5]); // 803ACC18
  c->r[0]=R16(c->r[6]+c->r[0]); // 803ACC1C
  W16(c->r[30]+c->r[4],c->r[0]); // 803ACC20
  c->r[4]=c->r[4]+0x00000002u; // 803ACC24
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_803ACC08; } // 803ACC28
L_803ACC2C:;
  c->r[3]=0u+0x00000001u; // 803ACC2C
L_803ACC30:;
  c->r[10]=R32(c->r[1]+0x00000000u); // 803ACC30
  c->r[0]=R32(c->r[10]+0x00000004u); // 803ACC34
  c->r[31]=R32(c->r[10]+0xFFFFFFFCu); // 803ACC38
  c->r[30]=R32(c->r[10]+0xFFFFFFF8u); // 803ACC3C
  c->r[29]=R32(c->r[10]+0xFFFFFFF4u); // 803ACC40
  c->r[28]=R32(c->r[10]+0xFFFFFFF0u); // 803ACC44
  c->lr=c->r[0]; // 803ACC48
  c->r[1]=c->r[10]|c->r[10]; // 803ACC4C
  return; // 803ACC50
}

// fn_803ACC54
void f_803ACC54(Ctx* __restrict c) {
  trace_call(0x803ACC54u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803ACC54
  c->r[0]=c->lr; // 803ACC58
  W32(c->r[1]+0x00000014u,c->r[0]); // 803ACC5C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 803ACC60
  W32(c->r[1]+0x00000008u,c->r[30]); // 803ACC64
  c->r[30]=c->r[3]|c->r[3]; // 803ACC68
  c->lr=0x803ACC70u; f_8039B934(c); // 803ACC6C
  c->r[31]=0u+0x00000000u; // 803ACC70
  c->r[6]=0u+0x80430000u; // 803ACC74
  c->r[6]=c->r[6]+0x00007560u; // 803ACC78
  c->r[8]=0u+0x80430000u; // 803ACC7C
  c->r[0]=c->r[6]+0x00000024u; // 803ACC80
  W32(c->r[30]+0x0000012Cu,c->r[31]); // 803ACC84
  c->r[9]=c->r[30]+0x0000012Cu; // 803ACC88
  c->r[8]=c->r[8]+0x000075C0u; // 803ACC8C
  W32(c->r[30]+0x00000130u,c->r[31]); // 803ACC90
  c->r[4]=0u+0x803B0000u; // 803ACC94
  c->r[5]=0u+0x803B0000u; // 803ACC98
  c->r[3]=c->r[30]+0x00000138u; // 803ACC9C
  W32(c->r[30]+0x00000000u,c->r[6]); // 803ACCA0
  c->r[4]=c->r[4]+0xFFFFEFA8u; // 803ACCA4
  c->r[5]=c->r[5]+0xFFFFCDA8u; // 803ACCA8
  c->r[6]=0u+0x00000034u; // 803ACCAC
  W32(c->r[30]+0x00000074u,c->r[31]); // 803ACCB0
  c->r[7]=0u+0x00000020u; // 803ACCB4
  W32(c->r[30]+0x00000078u,c->r[31]); // 803ACCB8
  W32(c->r[30]+0x0000007Cu,c->r[0]); // 803ACCBC
  W8(c->r[30]+0x000000B8u,c->r[31]); // 803ACCC0
  W8(c->r[30]+0x000000B9u,c->r[31]); // 803ACCC4
  W32(c->r[30]+0x0000010Cu,c->r[31]); // 803ACCC8
  W32(c->r[30]+0x00000110u,c->r[31]); // 803ACCCC
  W8(c->r[30]+0x00000114u,c->r[31]); // 803ACCD0
  W32(c->r[30]+0x00000108u,c->r[8]); // 803ACCD4
  W32(c->r[30]+0x00000118u,c->r[31]); // 803ACCD8
  W32(c->r[30]+0x0000011Cu,c->r[31]); // 803ACCDC
  W32(c->r[30]+0x00000124u,c->r[31]); // 803ACCE0
  W32(c->r[30]+0x00000128u,c->r[31]); // 803ACCE4
  W32(c->r[30]+0x0000012Cu,c->r[9]); // 803ACCE8
  W32(c->r[30]+0x00000130u,c->r[9]); // 803ACCEC
  W32(c->r[30]+0x00000134u,c->r[31]); // 803ACCF0
  c->lr=0x803ACCF8u; f_80289B34(c); // 803ACCF4
  W32(c->r[30]+0x000007BCu,c->r[31]); // 803ACCF8
  W32(c->r[30]+0x000007C0u,c->r[31]); // 803ACCFC
  c->r[0]=R8(c->r[13]+0xFFFFA070u); // 803ACD00
  cmps(c,0,(int32_t)c->r[0],0); // 803ACD04
  if (!crb(c,2)) { goto L_803ACD20; } // 803ACD08
  c->r[3]=0u+0x806C0000u; // 803ACD0C
  c->r[3]=c->r[3]+0x000022A0u; // 803ACD10
  c->lr=0x803ACD18u; f_8025FC94(c); // 803ACD14
  c->r[0]=0u+0x00000001u; // 803ACD18
  W8(c->r[13]+0xFFFFA070u,c->r[0]); // 803ACD1C
L_803ACD20:;
  c->r[3]=c->r[30]+0x00000134u; // 803ACD20
  c->r[4]=c->r[30]+0x00000138u; // 803ACD24
  c->r[5]=0u+0x00000680u; // 803ACD28
  c->r[6]=0u+0x00000034u; // 803ACD2C
  c->lr=0x803ACD34u; f_803A082C(c); // 803ACD30
  c->r[3]=c->r[30]|c->r[30]; // 803ACD34
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 803ACD38
  c->r[30]=R32(c->r[1]+0x00000008u); // 803ACD3C
  c->r[0]=R32(c->r[1]+0x00000014u); // 803ACD40
  c->lr=c->r[0]; // 803ACD44
  c->r[1]=c->r[1]+0x00000010u; // 803ACD48
  return; // 803ACD4C
}

// fn_803ACD50
void f_803ACD50(Ctx* __restrict c) {
  trace_call(0x803ACD50u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803ACD50
  c->r[0]=c->lr; // 803ACD54
  cmps(c,0,(int32_t)c->r[3],0); // 803ACD58
  W32(c->r[1]+0x00000014u,c->r[0]); // 803ACD5C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 803ACD60
  c->r[31]=c->r[4]|c->r[4]; // 803ACD64
  W32(c->r[1]+0x00000008u,c->r[30]); // 803ACD68
  c->r[30]=c->r[3]|c->r[3]; // 803ACD6C
  if (crb(c,2)) { goto L_803ACD8C; } // 803ACD70
  c->r[4]=0u+0x00000000u; // 803ACD74
  c->lr=0x803ACD7Cu; f_803AF6AC(c); // 803ACD78
  cmps(c,0,(int32_t)c->r[31],0); // 803ACD7C
  if (!crb(c,1)) { goto L_803ACD8C; } // 803ACD80
  c->r[3]=c->r[30]|c->r[30]; // 803ACD84
  c->lr=0x803ACD8Cu; f_802896EC(c); // 803ACD88
L_803ACD8C:;
  c->r[3]=c->r[30]|c->r[30]; // 803ACD8C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 803ACD90
  c->r[30]=R32(c->r[1]+0x00000008u); // 803ACD94
  c->r[0]=R32(c->r[1]+0x00000014u); // 803ACD98
  c->lr=c->r[0]; // 803ACD9C
  c->r[1]=c->r[1]+0x00000010u; // 803ACDA0
  return; // 803ACDA4
}

// fn_803ACDA8
void f_803ACDA8(Ctx* __restrict c) {
  trace_call(0x803ACDA8u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803ACDA8
  c->r[0]=c->lr; // 803ACDAC
  cmps(c,0,(int32_t)c->r[3],0); // 803ACDB0
  W32(c->r[1]+0x00000014u,c->r[0]); // 803ACDB4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 803ACDB8
  c->r[31]=c->r[4]|c->r[4]; // 803ACDBC
  W32(c->r[1]+0x00000008u,c->r[30]); // 803ACDC0
  c->r[30]=c->r[3]|c->r[3]; // 803ACDC4
  if (crb(c,2)) { goto L_803ACDE4; } // 803ACDC8
  c->r[4]=0u+0x00000000u; // 803ACDCC
  c->lr=0x803ACDD4u; f_803AF6AC(c); // 803ACDD0
  cmps(c,0,(int32_t)c->r[31],0); // 803ACDD4
  if (!crb(c,1)) { goto L_803ACDE4; } // 803ACDD8
  c->r[3]=c->r[30]|c->r[30]; // 803ACDDC
  c->lr=0x803ACDE4u; f_802896EC(c); // 803ACDE0
L_803ACDE4:;
  c->r[3]=c->r[30]|c->r[30]; // 803ACDE4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 803ACDE8
  c->r[30]=R32(c->r[1]+0x00000008u); // 803ACDEC
  c->r[0]=R32(c->r[1]+0x00000014u); // 803ACDF0
  c->lr=c->r[0]; // 803ACDF4
  c->r[1]=c->r[1]+0x00000010u; // 803ACDF8
  return; // 803ACDFC
}

// fn_803ACE00
void f_803ACE00(Ctx* __restrict c) {
  trace_call(0x803ACE00u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803ACE00
  c->r[0]=c->lr; // 803ACE04
  cmps(c,0,(int32_t)c->r[3],0); // 803ACE08
  W32(c->r[1]+0x00000024u,c->r[0]); // 803ACE0C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 803ACE10
  W32(c->r[1]+0x00000018u,c->r[30]); // 803ACE14
  c->r[30]=c->r[4]|c->r[4]; // 803ACE18
  W32(c->r[1]+0x00000014u,c->r[29]); // 803ACE1C
  c->r[29]=c->r[3]|c->r[3]; // 803ACE20
  if (crb(c,2)) { goto L_803ACEE8; } // 803ACE24
  c->r[4]=0u+0x80430000u; // 803ACE28
  c->r[4]=c->r[4]+0x00007560u; // 803ACE2C
  c->r[0]=c->r[4]+0x00000024u; // 803ACE30
  W32(c->r[3]+0x00000000u,c->r[4]); // 803ACE34
  W32(c->r[3]+0x0000007Cu,c->r[0]); // 803ACE38
  c->lr=0x803ACE40u; f_803ABEB8(c); // 803ACE3C
  c->r[3]=c->r[3]+0x00000354u; // 803ACE40
  c->lr=0x803ACE48u; f_8025FCCC(c); // 803ACE44
  c->r[12]=R32(c->r[29]+0x00000000u); // 803ACE48
  c->r[3]=c->r[29]|c->r[29]; // 803ACE4C
  c->r[12]=R32(c->r[12]+0x00000010u); // 803ACE50
  c->ctr=c->r[12]; // 803ACE54
  if (true) { c->lr=0x803ACE5Cu; dispatch(c,c->ctr); } // 803ACE58
  c->r[0]=R8(c->r[29]+0x000000B8u); // 803ACE5C
  cmps(c,0,(int32_t)c->r[0],0); // 803ACE60
  if (!crb(c,2)) { goto L_803ACE78; } // 803ACE64
  c->lr=0x803ACE6Cu; f_803ABEB8(c); // 803ACE68
  c->r[3]=c->r[3]+0x00000354u; // 803ACE6C
  c->lr=0x803ACE74u; f_8025FDA8(c); // 803ACE70
  goto L_803ACEA0; // 803ACE74
L_803ACE78:;
  c->r[31]=0u+0x00000000u; // 803ACE78
  c->r[3]=c->r[29]+0x00000134u; // 803ACE7C
  W32(c->r[29]+0x000007B8u,c->r[31]); // 803ACE80
  c->r[4]=c->r[29]+0x00000138u; // 803ACE84
  c->r[5]=0u+0x00000680u; // 803ACE88
  c->lr=0x803ACE90u; f_803A0970(c); // 803ACE8C
  W8(c->r[29]+0x000000B8u,c->r[31]); // 803ACE90
  c->lr=0x803ACE98u; f_803ABEB8(c); // 803ACE94
  c->r[3]=c->r[3]+0x00000354u; // 803ACE98
  c->lr=0x803ACEA0u; f_8025FDA8(c); // 803ACE9C
L_803ACEA0:;
  c->r[4]=0u+0x803B0000u; // 803ACEA0
  c->r[3]=c->r[29]+0x00000138u; // 803ACEA4
  c->r[4]=c->r[4]+0xFFFFCDA8u; // 803ACEA8
  c->r[5]=0u+0x00000034u; // 803ACEAC
  c->r[6]=0u+0x00000020u; // 803ACEB0
  c->lr=0x803ACEB8u; f_80289C2C(c); // 803ACEB4
  c->r[3]=addc(c,c->r[29],0x00000128u,0); cr0(c,c->r[3]); // 803ACEB8
  if (crb(c,2)) { goto L_803ACEC8; } // 803ACEBC
  c->r[4]=0u+0x00000000u; // 803ACEC0
  c->lr=0x803ACEC8u; f_803B4FA4(c); // 803ACEC4
L_803ACEC8:;
  c->r[3]=addc(c,c->r[29],0x00000108u,0); cr0(c,c->r[3]); // 803ACEC8
  if (crb(c,2)) { goto L_803ACED8; } // 803ACECC
  c->r[4]=0u+0x00000000u; // 803ACED0
  c->lr=0x803ACED8u; f_803AF6AC(c); // 803ACED4
L_803ACED8:;
  cmps(c,0,(int32_t)c->r[30],0); // 803ACED8
  if (!crb(c,1)) { goto L_803ACEE8; } // 803ACEDC
  c->r[3]=c->r[29]|c->r[29]; // 803ACEE0
  c->lr=0x803ACEE8u; f_802896EC(c); // 803ACEE4
L_803ACEE8:;
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 803ACEE8
  c->r[3]=c->r[29]|c->r[29]; // 803ACEEC
  c->r[30]=R32(c->r[1]+0x00000018u); // 803ACEF0
  c->r[29]=R32(c->r[1]+0x00000014u); // 803ACEF4
  c->r[0]=R32(c->r[1]+0x00000024u); // 803ACEF8
  c->lr=c->r[0]; // 803ACEFC
  c->r[1]=c->r[1]+0x00000020u; // 803ACF00
  return; // 803ACF04
}

// fn_803ACF08
void f_803ACF08(Ctx* __restrict c) {
  trace_call(0x803ACF08u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803ACF08
  c->r[0]=c->lr; // 803ACF0C
  W32(c->r[1]+0x00000024u,c->r[0]); // 803ACF10
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 803ACF14
  W32(c->r[1]+0x00000018u,c->r[30]); // 803ACF18
  c->r[30]=c->r[4]|c->r[4]; // 803ACF1C
  W32(c->r[1]+0x00000014u,c->r[29]); // 803ACF20
  c->r[29]=c->r[3]|c->r[3]; // 803ACF24
  c->lr=0x803ACF2Cu; f_803ABEB8(c); // 803ACF28
  c->r[3]=c->r[3]+0x00000354u; // 803ACF2C
  c->lr=0x803ACF34u; f_8025FCCC(c); // 803ACF30
  c->r[0]=R8(c->r[29]+0x000000B8u); // 803ACF34
  cmps(c,0,(int32_t)c->r[0],0); // 803ACF38
  if (crb(c,2)) { goto L_803ACFA4; } // 803ACF3C
  c->lr=0x803ACF44u; f_803ABEB8(c); // 803ACF40
  c->r[3]=c->r[3]+0x00000354u; // 803ACF44
  c->lr=0x803ACF4Cu; f_8025FCCC(c); // 803ACF48
  c->r[12]=R32(c->r[29]+0x00000000u); // 803ACF4C
  c->r[3]=c->r[29]|c->r[29]; // 803ACF50
  c->r[12]=R32(c->r[12]+0x00000010u); // 803ACF54
  c->ctr=c->r[12]; // 803ACF58
  if (true) { c->lr=0x803ACF60u; dispatch(c,c->ctr); } // 803ACF5C
  c->r[0]=R8(c->r[29]+0x000000B8u); // 803ACF60
  cmps(c,0,(int32_t)c->r[0],0); // 803ACF64
  if (!crb(c,2)) { goto L_803ACF7C; } // 803ACF68
  c->lr=0x803ACF70u; f_803ABEB8(c); // 803ACF6C
  c->r[3]=c->r[3]+0x00000354u; // 803ACF70
  c->lr=0x803ACF78u; f_8025FDA8(c); // 803ACF74
  goto L_803ACFA4; // 803ACF78
L_803ACF7C:;
  c->r[31]=0u+0x00000000u; // 803ACF7C
  c->r[3]=c->r[29]+0x00000134u; // 803ACF80
  W32(c->r[29]+0x000007B8u,c->r[31]); // 803ACF84
  c->r[4]=c->r[29]+0x00000138u; // 803ACF88
  c->r[5]=0u+0x00000680u; // 803ACF8C
  c->lr=0x803ACF94u; f_803A0970(c); // 803ACF90
  W8(c->r[29]+0x000000B8u,c->r[31]); // 803ACF94
  c->lr=0x803ACF9Cu; f_803ABEB8(c); // 803ACF98
  c->r[3]=c->r[3]+0x00000354u; // 803ACF9C
  c->lr=0x803ACFA4u; f_8025FDA8(c); // 803ACFA0
L_803ACFA4:;
  c->r[3]=c->r[29]|c->r[29]; // 803ACFA4
  c->lr=0x803ACFACu; f_803AD77C(c); // 803ACFA8
  c->r[0]=0u+0x00000001u; // 803ACFAC
  W32(c->r[29]+0x000007B8u,c->r[30]); // 803ACFB0
  W8(c->r[29]+0x000000B8u,c->r[0]); // 803ACFB4
  c->lr=0x803ACFBCu; f_803ABEB8(c); // 803ACFB8
  c->r[3]=c->r[3]+0x00000354u; // 803ACFBC
  c->lr=0x803ACFC4u; f_8025FDA8(c); // 803ACFC0
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 803ACFC4
  c->r[3]=0u+0x00000001u; // 803ACFC8
  c->r[30]=R32(c->r[1]+0x00000018u); // 803ACFCC
  c->r[29]=R32(c->r[1]+0x00000014u); // 803ACFD0
  c->r[0]=R32(c->r[1]+0x00000024u); // 803ACFD4
  c->lr=c->r[0]; // 803ACFD8
  c->r[1]=c->r[1]+0x00000020u; // 803ACFDC
  return; // 803ACFE0
}

// fn_803ACFE4
void f_803ACFE4(Ctx* __restrict c) {
  trace_call(0x803ACFE4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803ACFE4
  c->r[0]=c->lr; // 803ACFE8
  W32(c->r[1]+0x00000014u,c->r[0]); // 803ACFEC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 803ACFF0
  W32(c->r[1]+0x00000008u,c->r[30]); // 803ACFF4
  c->r[30]=c->r[3]|c->r[3]; // 803ACFF8
  c->lr=0x803AD000u; f_803ABEB8(c); // 803ACFFC
  c->r[3]=c->r[3]+0x00000354u; // 803AD000
  c->lr=0x803AD008u; f_8025FCCC(c); // 803AD004
  c->r[12]=R32(c->r[30]+0x00000000u); // 803AD008
  c->r[3]=c->r[30]|c->r[30]; // 803AD00C
  c->r[12]=R32(c->r[12]+0x00000010u); // 803AD010
  c->ctr=c->r[12]; // 803AD014
  if (true) { c->lr=0x803AD01Cu; dispatch(c,c->ctr); } // 803AD018
  c->r[0]=R8(c->r[30]+0x000000B8u); // 803AD01C
  cmps(c,0,(int32_t)c->r[0],0); // 803AD020
  if (!crb(c,2)) { goto L_803AD038; } // 803AD024
  c->lr=0x803AD02Cu; f_803ABEB8(c); // 803AD028
  c->r[3]=c->r[3]+0x00000354u; // 803AD02C
  c->lr=0x803AD034u; f_8025FDA8(c); // 803AD030
  goto L_803AD060; // 803AD034
L_803AD038:;
  c->r[31]=0u+0x00000000u; // 803AD038
  c->r[3]=c->r[30]+0x00000134u; // 803AD03C
  W32(c->r[30]+0x000007B8u,c->r[31]); // 803AD040
  c->r[4]=c->r[30]+0x00000138u; // 803AD044
  c->r[5]=0u+0x00000680u; // 803AD048
  c->lr=0x803AD050u; f_803A0970(c); // 803AD04C
  W8(c->r[30]+0x000000B8u,c->r[31]); // 803AD050
  c->lr=0x803AD058u; f_803ABEB8(c); // 803AD054
  c->r[3]=c->r[3]+0x00000354u; // 803AD058
  c->lr=0x803AD060u; f_8025FDA8(c); // 803AD05C
L_803AD060:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 803AD060
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 803AD064
  c->r[30]=R32(c->r[1]+0x00000008u); // 803AD068
  c->lr=c->r[0]; // 803AD06C
  c->r[1]=c->r[1]+0x00000010u; // 803AD070
  return; // 803AD074
}

// fn_803AD078
void f_803AD078(Ctx* __restrict c) {
  trace_call(0x803AD078u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803AD078
  c->r[0]=c->lr; // 803AD07C
  W32(c->r[1]+0x00000024u,c->r[0]); // 803AD080
  c->r[11]=c->r[1]+0x00000020u; // 803AD084
  c->lr=0x803AD08Cu; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 803AD088
  c->r[27]=c->r[3]|c->r[3]; // 803AD08C
  c->r[31]=c->r[4]|c->r[4]; // 803AD090
  c->r[28]=c->r[5]|c->r[5]; // 803AD094
  c->r[29]=c->r[6]|c->r[6]; // 803AD098
  c->r[30]=c->r[7]|c->r[7]; // 803AD09C
  c->lr=0x803AD0A4u; f_803ABEB8(c); // 803AD0A0
  c->r[3]=c->r[3]+0x00000354u; // 803AD0A4
  c->lr=0x803AD0ACu; f_8025FCCC(c); // 803AD0A8
  c->r[3]=0u+0x00000000u; // 803AD0AC
  c->r[0]=0u+0x00000001u; // 803AD0B0
  W32(c->r[27]+0x000007BCu,c->r[31]); // 803AD0B4
  cmps(c,0,(int32_t)c->r[27],0); // 803AD0B8
  c->r[31]=c->r[27]|c->r[27]; // 803AD0BC
  W32(c->r[27]+0x000007C8u,c->r[28]); // 803AD0C0
  W32(c->r[27]+0x00000100u,c->r[29]); // 803AD0C4
  W32(c->r[27]+0x00000104u,c->r[30]); // 803AD0C8
  W8(c->r[27]+0x000000BCu,c->r[3]); // 803AD0CC
  W8(c->r[27]+0x000000BDu,c->r[3]); // 803AD0D0
  W8(c->r[27]+0x000000BEu,c->r[3]); // 803AD0D4
  W8(c->r[27]+0x000000B9u,c->r[0]); // 803AD0D8
  if (crb(c,2)) { goto L_803AD0E4; } // 803AD0DC
  c->r[31]=c->r[27]+0x00000074u; // 803AD0E0
L_803AD0E4:;
  c->lr=0x803AD0E8u; f_803ABEB8(c); // 803AD0E4
  c->r[4]=c->r[31]|c->r[31]; // 803AD0E8
  c->lr=0x803AD0F0u; f_803AC284(c); // 803AD0EC
  c->r[4]=R32(c->r[27]+0x000007BCu); // 803AD0F0
  c->r[31]=c->r[27]+0x00000108u; // 803AD0F4
  c->r[3]=R32(c->r[27]+0x00000100u); // 803AD0F8
  c->r[0]=R32(c->r[27]+0x00000104u); // 803AD0FC
  W32(c->r[27]+0x00000118u,c->r[27]); // 803AD100
  W32(c->r[27]+0x0000011Cu,c->r[4]); // 803AD104
  W32(c->r[27]+0x00000120u,c->r[3]); // 803AD108
  W32(c->r[27]+0x00000124u,c->r[0]); // 803AD10C
  c->lr=0x803AD114u; f_803AF6EC(c); // 803AD110
  c->r[4]=c->r[31]|c->r[31]; // 803AD114
  c->r[5]=0u+0x00000001u; // 803AD118
  c->lr=0x803AD120u; f_803AF864(c); // 803AD11C
  c->lr=0x803AD124u; f_803ABEB8(c); // 803AD120
  c->r[3]=c->r[3]+0x00000354u; // 803AD124
  c->lr=0x803AD12Cu; f_8025FDA8(c); // 803AD128
  c->r[11]=c->r[1]+0x00000020u; // 803AD12C
  c->r[3]=0u+0x00000001u; // 803AD130
  c->lr=0x803AD138u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 803AD134
  c->r[0]=R32(c->r[1]+0x00000024u); // 803AD138
  c->lr=c->r[0]; // 803AD13C
  c->r[1]=c->r[1]+0x00000020u; // 803AD140
  return; // 803AD144
}

// fn_803AD148
void f_803AD148(Ctx* __restrict c) {
  trace_call(0x803AD148u);
  {uint32_t ea=c->r[1]+0xFFFFFF40u; W32(ea,c->r[1]); c->r[1]=ea;} // 803AD148
  c->r[0]=c->lr; // 803AD14C
  W32(c->r[1]+0x000000C4u,c->r[0]); // 803AD150
  W32(c->r[1]+0x000000BCu,c->r[31]); // 803AD154
  c->r[31]=c->r[3]|c->r[3]; // 803AD158
  W32(c->r[1]+0x000000B8u,c->r[30]); // 803AD15C
  W32(c->r[1]+0x000000B4u,c->r[29]); // 803AD160
  W32(c->r[1]+0x000000B0u,c->r[28]); // 803AD164
  c->lr=0x803AD16Cu; f_803ABEB8(c); // 803AD168
  c->r[3]=c->r[3]+0x00000354u; // 803AD16C
  c->lr=0x803AD174u; f_8025FCCC(c); // 803AD170
  c->r[0]=R8(c->r[31]+0x000000BBu); // 803AD174
  cmps(c,0,(int32_t)c->r[0],0); // 803AD178
  if (!crb(c,2)) { goto L_803AD194; } // 803AD17C
  c->lr=0x803AD184u; f_803ABEB8(c); // 803AD180
  c->r[3]=c->r[3]+0x00000354u; // 803AD184
  c->lr=0x803AD18Cu; f_8025FDA8(c); // 803AD188
  c->r[3]=0u+0x00000000u; // 803AD18C
  goto L_803AD434; // 803AD190
L_803AD194:;
  c->r[0]=R8(c->r[31]+0x000000BAu); // 803AD194
  cmps(c,0,(int32_t)c->r[0],0); // 803AD198
  if (!crb(c,2)) { goto L_803AD424; } // 803AD19C
  c->r[29]=0u+0x00000000u; // 803AD1A0
  c->r[3]=c->r[31]|c->r[31]; // 803AD1A4
  W32(c->r[1]+0x00000010u,c->r[29]); // 803AD1A8
  c->r[4]=c->r[1]+0x00000010u; // 803AD1AC
  c->r[5]=c->r[1]+0x0000000Cu; // 803AD1B0
  c->r[6]=c->r[1]+0x00000008u; // 803AD1B4
  W32(c->r[1]+0x0000000Cu,c->r[29]); // 803AD1B8
  W32(c->r[1]+0x00000008u,c->r[29]); // 803AD1BC
  c->lr=0x803AD1C4u; f_803AECF0(c); // 803AD1C0
  cmps(c,0,(int32_t)c->r[3],0); // 803AD1C4
  if (!crb(c,2)) { goto L_803AD1E0; } // 803AD1C8
  c->lr=0x803AD1D0u; f_803ABEB8(c); // 803AD1CC
  c->r[3]=c->r[3]+0x00000354u; // 803AD1D0
  c->lr=0x803AD1D8u; f_8025FDA8(c); // 803AD1D4
  c->r[3]=0u+0x00000000u; // 803AD1D8
  goto L_803AD434; // 803AD1DC
L_803AD1E0:;
  c->r[5]=R32(c->r[31]+0x000000C8u); // 803AD1E0
  c->r[0]=0u+0x00000001u; // 803AD1E4
  c->r[4]=R32(c->r[1]+0x00000008u); // 803AD1E8
  c->r[3]=R8(c->r[31]+0x00000080u); // 803AD1EC
  c->r[4]=c->r[5]+c->r[4]; // 803AD1F0
  W32(c->r[31]+0x000000C8u,c->r[4]); // 803AD1F4
  W8(c->r[1]+0x00000018u,c->r[3]); // 803AD1F8
  W8(c->r[1]+0x00000019u,c->r[0]); // 803AD1FC
  c->r[0]=R32(c->r[31]+0x000007C4u); // 803AD200
  W8(c->r[1]+0x0000001Au,c->r[0]); // 803AD204
  c->r[0]=R32(c->r[31]+0x00000084u); // 803AD208
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 803AD20C
  W32(c->r[1]+0x00000020u,c->r[29]); // 803AD210
  c->r[3]=R8(c->r[31]+0x00000080u); // 803AD214
  c->lr=0x803AD21Cu; f_803B3394(c); // 803AD218
  c->r[5]=R32(c->r[31]+0x000000D4u); // 803AD21C
  c->r[4]=c->r[3]|c->r[3]; // 803AD220
  c->r[0]=R32(c->r[31]+0x000000ECu); // 803AD224
  c->r[3]=(uint32_t)((int32_t)c->r[5]*(int32_t)c->r[0]); // 803AD228
  c->lr=0x803AD230u; f_80398AC8(c); // 803AD22C
  W32(c->r[1]+0x00000024u,c->r[3]); // 803AD230
  c->r[4]=c->r[31]|c->r[31]; // 803AD234
  c->r[5]=c->r[31]|c->r[31]; // 803AD238
  c->r[3]=c->r[1]+0x00000028u; // 803AD23C
  c->r[6]=0u+0x00000000u; // 803AD240
  goto L_803AD33C; // 803AD244
L_803AD248:;
  c->r[0]=R32(c->r[4]+0x000007CCu); // 803AD248
  c->r[6]=c->r[6]+0x00000001u; // 803AD24C
  W32(c->r[3]+0x00000000u,c->r[0]); // 803AD250
  c->r[7]=R16(c->r[4]+0x000007D4u); // 803AD254
  c->r[0]=R16(c->r[4]+0x000007D6u); // 803AD258
  W16(c->r[3]+0x00000014u,c->r[7]); // 803AD25C
  W16(c->r[3]+0x00000016u,c->r[0]); // 803AD260
  c->r[7]=R16(c->r[4]+0x000007D8u); // 803AD264
  c->r[0]=R16(c->r[4]+0x000007DAu); // 803AD268
  W16(c->r[3]+0x00000018u,c->r[7]); // 803AD26C
  W16(c->r[3]+0x0000001Au,c->r[0]); // 803AD270
  c->r[7]=R16(c->r[4]+0x000007DCu); // 803AD274
  c->r[0]=R16(c->r[4]+0x000007DEu); // 803AD278
  W16(c->r[3]+0x0000001Cu,c->r[7]); // 803AD27C
  W16(c->r[3]+0x0000001Eu,c->r[0]); // 803AD280
  c->r[7]=R16(c->r[4]+0x000007E0u); // 803AD284
  c->r[0]=R16(c->r[4]+0x000007E2u); // 803AD288
  W16(c->r[3]+0x00000020u,c->r[7]); // 803AD28C
  W16(c->r[3]+0x00000022u,c->r[0]); // 803AD290
  c->r[7]=R16(c->r[4]+0x000007E4u); // 803AD294
  c->r[0]=R16(c->r[4]+0x000007E6u); // 803AD298
  W16(c->r[3]+0x00000024u,c->r[7]); // 803AD29C
  W16(c->r[3]+0x00000026u,c->r[0]); // 803AD2A0
  c->r[7]=R16(c->r[4]+0x000007E8u); // 803AD2A4
  c->r[0]=R16(c->r[4]+0x000007EAu); // 803AD2A8
  W16(c->r[3]+0x00000028u,c->r[7]); // 803AD2AC
  W16(c->r[3]+0x0000002Au,c->r[0]); // 803AD2B0
  c->r[7]=R16(c->r[4]+0x000007ECu); // 803AD2B4
  c->r[0]=R16(c->r[4]+0x000007EEu); // 803AD2B8
  W16(c->r[3]+0x0000002Cu,c->r[7]); // 803AD2BC
  W16(c->r[3]+0x0000002Eu,c->r[0]); // 803AD2C0
  c->r[7]=R16(c->r[4]+0x000007F0u); // 803AD2C4
  c->r[0]=R16(c->r[4]+0x000007F2u); // 803AD2C8
  W16(c->r[3]+0x00000030u,c->r[7]); // 803AD2CC
  W16(c->r[3]+0x00000032u,c->r[0]); // 803AD2D0
  c->r[7]=R16(c->r[4]+0x000007F4u); // 803AD2D4
  c->r[0]=R16(c->r[4]+0x000007F6u); // 803AD2D8
  W16(c->r[3]+0x00000034u,c->r[7]); // 803AD2DC
  W16(c->r[3]+0x00000036u,c->r[0]); // 803AD2E0
  c->r[7]=R16(c->r[4]+0x000007F8u); // 803AD2E4
  c->r[0]=R16(c->r[4]+0x000007FAu); // 803AD2E8
  W16(c->r[3]+0x00000038u,c->r[7]); // 803AD2EC
  W16(c->r[3]+0x0000003Au,c->r[0]); // 803AD2F0
  c->r[0]=R16(c->r[4]+0x000007FCu); // 803AD2F4
  W16(c->r[3]+0x0000003Cu,c->r[0]); // 803AD2F8
  c->r[0]=R16(c->r[4]+0x000007FEu); // 803AD2FC
  W16(c->r[3]+0x0000003Eu,c->r[0]); // 803AD300
  c->r[0]=R16(c->r[4]+0x00000800u); // 803AD304
  W16(c->r[3]+0x00000040u,c->r[0]); // 803AD308
  c->r[0]=R16(c->r[4]+0x00000802u); // 803AD30C
  W16(c->r[3]+0x00000042u,c->r[0]); // 803AD310
  c->r[7]=R32(c->r[4]+0x000007CCu); // 803AD314
  c->r[4]=c->r[4]+0x00000038u; // 803AD318
  c->r[0]=R8(c->r[7]+0x00000000u); // 803AD31C
  W16(c->r[3]+0x00000036u,c->r[0]); // 803AD320
  c->r[0]=R16(c->r[5]+0x00000840u); // 803AD324
  W16(c->r[3]+0x00000038u,c->r[0]); // 803AD328
  c->r[0]=R16(c->r[5]+0x00000844u); // 803AD32C
  c->r[5]=c->r[5]+0x00000002u; // 803AD330
  W16(c->r[3]+0x0000003Au,c->r[0]); // 803AD334
  c->r[3]=c->r[3]+0x00000044u; // 803AD338
L_803AD33C:;
  c->r[0]=R32(c->r[31]+0x000007C4u); // 803AD33C
  cmps(c,0,(int32_t)c->r[6],(int32_t)c->r[0]); // 803AD340
  if (crb(c,0)) { IRQCHK(c); goto L_803AD248; } // 803AD344
  c->lr=0x803AD34Cu; f_8025EA10(c); // 803AD348
  c->r[0]=R32(c->r[31]+0x000007C0u); // 803AD34C
  c->r[30]=c->r[3]|c->r[3]; // 803AD350
  cmps(c,0,(int32_t)c->r[0],0); // 803AD354
  if (crb(c,2)) { goto L_803AD414; } // 803AD358
  c->r[5]=R32(c->r[1]+0x0000000Cu); // 803AD35C
  c->r[3]=c->r[0]|c->r[0]; // 803AD360
  c->r[4]=c->r[1]+0x00000018u; // 803AD364
  c->lr=0x803AD36Cu; f_803B0A0C(c); // 803AD368
  c->r[3]=R32(c->r[31]+0x000007C0u); // 803AD36C
  c->r[4]=0u+0x00000001u; // 803AD370
  c->lr=0x803AD378u; f_803B1574(c); // 803AD374
  c->r[3]=R32(c->r[31]+0x00000098u); // 803AD378
  c->r[4]=R32(c->r[1]+0x00000010u); // 803AD37C
  c->r[0]=c->r[3]+0xFFFFFFFEu; // 803AD380
  cmpu(c,0,c->r[4],c->r[0]); // 803AD384
  if (!crb(c,2)) { goto L_803AD39C; } // 803AD388
  c->r[3]=c->r[31]|c->r[31]; // 803AD38C
  c->r[4]=0u+0x00000001u; // 803AD390
  c->lr=0x803AD398u; f_803AE920(c); // 803AD394
  goto L_803AD3B4; // 803AD398
L_803AD39C:;
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 803AD39C
  cmpu(c,0,c->r[4],c->r[0]); // 803AD3A0
  if (!crb(c,2)) { goto L_803AD3B4; } // 803AD3A4
  c->r[3]=c->r[31]|c->r[31]; // 803AD3A8
  c->r[4]=0u+0x00000000u; // 803AD3AC
  c->lr=0x803AD3B4u; f_803AE920(c); // 803AD3B0
L_803AD3B4:;
  c->r[3]=R32(c->r[31]+0x000007C0u); // 803AD3B4
  c->lr=0x803AD3BCu; f_803B0CBC(c); // 803AD3B8
  c->lr=0x803AD3C0u; f_8025EA10(c); // 803AD3BC
  c->r[0]=R8(c->r[31]+0x000000BFu); // 803AD3C0
  c->r[29]=c->r[3]|c->r[3]; // 803AD3C4
  c->r[28]=0u+0x00000000u; // 803AD3C8
  cmps(c,0,(int32_t)c->r[0],0); // 803AD3CC
  if (crb(c,2)) { goto L_803AD3D8; } // 803AD3D0
  c->r[28]=0u+0x00000001u; // 803AD3D4
L_803AD3D8:;
  c->r[0]=R8(c->r[31]+0x000000C1u); // 803AD3D8
  cmps(c,0,(int32_t)c->r[0],0); // 803AD3DC
  if (crb(c,2)) { goto L_803AD3E8; } // 803AD3E0
  c->r[28]=0u+0x00000001u; // 803AD3E4
L_803AD3E8:;
  c->r[0]=R8(c->r[31]+0x000000C0u); // 803AD3E8
  cmpu(c,0,c->r[28],c->r[0]); // 803AD3EC
  if (crb(c,2)) { goto L_803AD40C; } // 803AD3F0
  c->r[3]=R32(c->r[31]+0x000007C0u); // 803AD3F4
  cmps(c,0,(int32_t)c->r[3],0); // 803AD3F8
  if (crb(c,2)) { goto L_803AD408; } // 803AD3FC
  c->r[4]=c->r[28]|c->r[28]; // 803AD400
  c->lr=0x803AD408u; f_803B0DAC(c); // 803AD404
L_803AD408:;
  W8(c->r[31]+0x000000C0u,c->r[28]); // 803AD408
L_803AD40C:;
  c->r[3]=c->r[29]|c->r[29]; // 803AD40C
  c->lr=0x803AD414u; f_8025EA38(c); // 803AD410
L_803AD414:;
  c->r[0]=0u+0x00000001u; // 803AD414
  c->r[3]=c->r[30]|c->r[30]; // 803AD418
  W8(c->r[31]+0x000000BAu,c->r[0]); // 803AD41C
  c->lr=0x803AD424u; f_8025EA38(c); // 803AD420
L_803AD424:;
  c->lr=0x803AD428u; f_803ABEB8(c); // 803AD424
  c->r[3]=c->r[3]+0x00000354u; // 803AD428
  c->lr=0x803AD430u; f_8025FDA8(c); // 803AD42C
  c->r[3]=0u+0x00000001u; // 803AD430
L_803AD434:;
  c->r[0]=R32(c->r[1]+0x000000C4u); // 803AD434
  c->r[31]=R32(c->r[1]+0x000000BCu); // 803AD438
  c->r[30]=R32(c->r[1]+0x000000B8u); // 803AD43C
  c->r[29]=R32(c->r[1]+0x000000B4u); // 803AD440
  c->r[28]=R32(c->r[1]+0x000000B0u); // 803AD444
  c->lr=c->r[0]; // 803AD448
  c->r[1]=c->r[1]+0x000000C0u; // 803AD44C
  return; // 803AD450
}

// fn_803AD454
void f_803AD454(Ctx* __restrict c) {
  trace_call(0x803AD454u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803AD454
  c->r[0]=c->lr; // 803AD458
  W32(c->r[1]+0x00000024u,c->r[0]); // 803AD45C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 803AD460
  W32(c->r[1]+0x00000018u,c->r[30]); // 803AD464
  W32(c->r[1]+0x00000014u,c->r[29]); // 803AD468
  W32(c->r[1]+0x00000010u,c->r[28]); // 803AD46C
  c->r[28]=c->r[3]|c->r[3]; // 803AD470
  c->lr=0x803AD478u; f_803ABEB8(c); // 803AD474
  c->r[3]=c->r[3]+0x00000354u; // 803AD478
  c->lr=0x803AD480u; f_8025FCCC(c); // 803AD47C
  c->r[3]=R32(c->r[28]+0x000007C0u); // 803AD480
  cmps(c,0,(int32_t)c->r[3],0); // 803AD484
  if (crb(c,2)) { goto L_803AD490; } // 803AD488
  c->lr=0x803AD490u; f_803B0CDC(c); // 803AD48C
L_803AD490:;
  c->r[3]=c->r[28]|c->r[28]; // 803AD490
  c->lr=0x803AD498u; f_803AE100(c); // 803AD494
  c->r[0]=R8(c->r[28]+0x000000B9u); // 803AD498
  cmps(c,0,(int32_t)c->r[0],0); // 803AD49C
  if (crb(c,2)) { goto L_803AD4C0; } // 803AD4A0
  cmps(c,0,(int32_t)c->r[28],0); // 803AD4A4
  c->r[29]=c->r[28]|c->r[28]; // 803AD4A8
  if (crb(c,2)) { goto L_803AD4B4; } // 803AD4AC
  c->r[29]=c->r[28]+0x00000074u; // 803AD4B0
L_803AD4B4:;
  c->lr=0x803AD4B8u; f_803ABEB8(c); // 803AD4B4
  c->r[4]=c->r[29]|c->r[29]; // 803AD4B8
  c->lr=0x803AD4C0u; f_803AC2EC(c); // 803AD4BC
L_803AD4C0:;
  c->lr=0x803AD4C4u; f_803ABEB8(c); // 803AD4C0
  c->r[3]=c->r[3]+0x00000354u; // 803AD4C4
  c->lr=0x803AD4CCu; f_8025FDA8(c); // 803AD4C8
  c->lr=0x803AD4D0u; f_803AF6EC(c); // 803AD4CC
  c->r[4]=c->r[28]+0x00000108u; // 803AD4D0
  c->lr=0x803AD4D8u; f_803AFBC4(c); // 803AD4D4
  c->lr=0x803AD4DCu; f_8025EA10(c); // 803AD4D8
  c->r[0]=R32(c->r[28]+0x00000128u); // 803AD4DC
  c->r[31]=c->r[3]|c->r[3]; // 803AD4E0
  cmps(c,0,(int32_t)c->r[0],0); // 803AD4E4
  if (crb(c,2)) { goto L_803AD510; } // 803AD4E8
  c->r[30]=c->r[28]+0x0000012Cu; // 803AD4EC
  goto L_803AD504; // 803AD4F0
L_803AD4F4:;
  c->r[29]=R32(c->r[30]+0x00000004u); // 803AD4F4
  c->lr=0x803AD4FCu; f_803AF6EC(c); // 803AD4F8
  c->r[4]=c->r[29]+0xFFFFFFD4u; // 803AD4FC
  c->lr=0x803AD504u; f_803AFBC4(c); // 803AD500
L_803AD504:;
  c->r[0]=R32(c->r[28]+0x00000128u); // 803AD504
  cmps(c,0,(int32_t)c->r[0],0); // 803AD508
  if (!crb(c,2)) { IRQCHK(c); goto L_803AD4F4; } // 803AD50C
L_803AD510:;
  c->r[3]=c->r[31]|c->r[31]; // 803AD510
  c->lr=0x803AD518u; f_8025EA38(c); // 803AD514
  c->r[3]=R32(c->r[28]+0x000007BCu); // 803AD518
  cmps(c,0,(int32_t)c->r[3],0); // 803AD51C
  if (crb(c,2)) { goto L_803AD53C; } // 803AD520
  c->r[12]=R32(c->r[3]+0x00000000u); // 803AD524
  c->r[12]=R32(c->r[12]+0x00000010u); // 803AD528
  c->ctr=c->r[12]; // 803AD52C
  if (true) { c->lr=0x803AD534u; dispatch(c,c->ctr); } // 803AD530
  c->r[0]=0u+0x00000000u; // 803AD534
  W32(c->r[28]+0x000007BCu,c->r[0]); // 803AD538
L_803AD53C:;
  c->r[0]=0u+0x00000000u; // 803AD53C
  W8(c->r[28]+0x000000BAu,c->r[0]); // 803AD540
  W8(c->r[28]+0x000000BBu,c->r[0]); // 803AD544
  W8(c->r[28]+0x000000B9u,c->r[0]); // 803AD548
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 803AD54C
  c->r[30]=R32(c->r[1]+0x00000018u); // 803AD550
  c->r[29]=R32(c->r[1]+0x00000014u); // 803AD554
  c->r[28]=R32(c->r[1]+0x00000010u); // 803AD558
  c->r[0]=R32(c->r[1]+0x00000024u); // 803AD55C
  c->lr=c->r[0]; // 803AD560
  c->r[1]=c->r[1]+0x00000020u; // 803AD564
  return; // 803AD568
}

// fn_803AD56C
void f_803AD56C(Ctx* __restrict c) {
  trace_call(0x803AD56Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803AD56C
  c->r[0]=c->lr; // 803AD570
  W32(c->r[1]+0x00000024u,c->r[0]); // 803AD574
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 803AD578
  W32(c->r[1]+0x00000018u,c->r[30]); // 803AD57C
  c->r[30]=c->r[4]|c->r[4]; // 803AD580
  W32(c->r[1]+0x00000014u,c->r[29]); // 803AD584
  c->r[29]=c->r[3]|c->r[3]; // 803AD588
  c->lr=0x803AD590u; f_803ABEB8(c); // 803AD58C
  c->r[3]=c->r[3]+0x00000354u; // 803AD590
  c->lr=0x803AD598u; f_8025FCCC(c); // 803AD594
  cmps(c,0,(int32_t)c->r[30],0); // 803AD598
  W8(c->r[29]+0x000000BFu,c->r[30]); // 803AD59C
  if (crb(c,2)) { goto L_803AD5AC; } // 803AD5A0
  c->r[0]=0u+0x00000001u; // 803AD5A4
  W8(c->r[29]+0x000000C1u,c->r[0]); // 803AD5A8
L_803AD5AC:;
  c->lr=0x803AD5B0u; f_8025EA10(c); // 803AD5AC
  c->r[0]=R8(c->r[29]+0x000000BFu); // 803AD5B0
  c->r[31]=c->r[3]|c->r[3]; // 803AD5B4
  c->r[30]=0u+0x00000000u; // 803AD5B8
  cmps(c,0,(int32_t)c->r[0],0); // 803AD5BC
  if (crb(c,2)) { goto L_803AD5C8; } // 803AD5C0
  c->r[30]=0u+0x00000001u; // 803AD5C4
L_803AD5C8:;
  c->r[0]=R8(c->r[29]+0x000000C1u); // 803AD5C8
  cmps(c,0,(int32_t)c->r[0],0); // 803AD5CC
  if (crb(c,2)) { goto L_803AD5D8; } // 803AD5D0
  c->r[30]=0u+0x00000001u; // 803AD5D4
L_803AD5D8:;
  c->r[0]=R8(c->r[29]+0x000000C0u); // 803AD5D8
  cmpu(c,0,c->r[30],c->r[0]); // 803AD5DC
  if (crb(c,2)) { goto L_803AD5FC; } // 803AD5E0
  c->r[3]=R32(c->r[29]+0x000007C0u); // 803AD5E4
  cmps(c,0,(int32_t)c->r[3],0); // 803AD5E8
  if (crb(c,2)) { goto L_803AD5F8; } // 803AD5EC
  c->r[4]=c->r[30]|c->r[30]; // 803AD5F0
  c->lr=0x803AD5F8u; f_803B0DAC(c); // 803AD5F4
L_803AD5F8:;
  W8(c->r[29]+0x000000C0u,c->r[30]); // 803AD5F8
L_803AD5FC:;
  c->r[3]=c->r[31]|c->r[31]; // 803AD5FC
  c->lr=0x803AD604u; f_8025EA38(c); // 803AD600
  c->lr=0x803AD608u; f_803ABEB8(c); // 803AD604
  c->r[3]=c->r[3]+0x00000354u; // 803AD608
  c->lr=0x803AD610u; f_8025FDA8(c); // 803AD60C
  c->r[0]=R32(c->r[1]+0x00000024u); // 803AD610
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 803AD614
  c->r[30]=R32(c->r[1]+0x00000018u); // 803AD618
  c->r[29]=R32(c->r[1]+0x00000014u); // 803AD61C
  c->lr=c->r[0]; // 803AD620
  c->r[1]=c->r[1]+0x00000020u; // 803AD624
  return; // 803AD628
}

// fn_803AD62C
void f_803AD62C(Ctx* __restrict c) {
  trace_call(0x803AD62Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803AD62C
  c->r[0]=c->lr; // 803AD630
  W32(c->r[1]+0x00000014u,c->r[0]); // 803AD634
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 803AD638
  c->r[31]=c->r[4]|c->r[4]; // 803AD63C
  W32(c->r[1]+0x00000008u,c->r[30]); // 803AD640
  c->r[30]=c->r[3]|c->r[3]; // 803AD644
  c->lr=0x803AD64Cu; f_803ABEB8(c); // 803AD648
  c->r[3]=c->r[3]+0x00000354u; // 803AD64C
  c->lr=0x803AD654u; f_8025FCCC(c); // 803AD650
  c->r[0]=R8(c->r[30]+0x000000BBu); // 803AD654
  cmps(c,0,(int32_t)c->r[0],0); // 803AD658
  if (!crb(c,2)) { goto L_803AD674; } // 803AD65C
  c->lr=0x803AD664u; f_803ABEB8(c); // 803AD660
  c->r[3]=c->r[3]+0x00000354u; // 803AD664
  c->lr=0x803AD66Cu; f_8025FDA8(c); // 803AD668
  c->r[3]=0u+0x00000000u; // 803AD66C
  goto L_803AD6B0; // 803AD670
L_803AD674:;
  c->r[5]=R8(c->r[30]+0x00000081u); // 803AD674
  c->r[4]=R32(c->r[30]+0x00000084u); // 803AD678
  c->r[0]=0u-c->r[5]; // 803AD67C
  c->r[3]=R32(c->r[30]+0x0000008Cu); // 803AD680
  c->r[5]=c->r[0]|c->r[5]; // 803AD684
  c->r[0]=R32(c->r[30]+0x00000090u); // 803AD688
  c->r[5]=rotl(c->r[5],1)&0x00000001u; // 803AD68C
  W32(c->r[31]+0x00000004u,c->r[4]); // 803AD690
  W8(c->r[31]+0x00000000u,c->r[5]); // 803AD694
  W32(c->r[31]+0x00000008u,c->r[3]); // 803AD698
  W32(c->r[31]+0x0000000Cu,c->r[0]); // 803AD69C
  c->lr=0x803AD6A4u; f_803ABEB8(c); // 803AD6A0
  c->r[3]=c->r[3]+0x00000354u; // 803AD6A4
  c->lr=0x803AD6ACu; f_8025FDA8(c); // 803AD6A8
  c->r[3]=0u+0x00000001u; // 803AD6AC
L_803AD6B0:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 803AD6B0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 803AD6B4
  c->r[30]=R32(c->r[1]+0x00000008u); // 803AD6B8
  c->lr=c->r[0]; // 803AD6BC
  c->r[1]=c->r[1]+0x00000010u; // 803AD6C0
  return; // 803AD6C4
}

// fn_803AD6C8
void f_803AD6C8(Ctx* __restrict c) {
  trace_call(0x803AD6C8u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803AD6C8
  c->r[0]=c->lr; // 803AD6CC
  W32(c->r[1]+0x00000014u,c->r[0]); // 803AD6D0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 803AD6D4
  c->r[31]=c->r[3]|c->r[3]; // 803AD6D8
  c->lr=0x803AD6E0u; f_803ABEB8(c); // 803AD6DC
  c->r[3]=c->r[3]+0x00000354u; // 803AD6E0
  c->lr=0x803AD6E8u; f_8025FCCC(c); // 803AD6E4
  c->r[0]=R8(c->r[31]+0x000000B9u); // 803AD6E8
  cmps(c,0,(int32_t)c->r[0],0); // 803AD6EC
  if (!crb(c,2)) { goto L_803AD708; } // 803AD6F0
  c->lr=0x803AD6F8u; f_803ABEB8(c); // 803AD6F4
  c->r[3]=c->r[3]+0x00000354u; // 803AD6F8
  c->lr=0x803AD700u; f_8025FDA8(c); // 803AD6FC
  c->r[3]=0u+0xFFFFFFFFu; // 803AD700
  goto L_803AD768; // 803AD704
L_803AD708:;
  c->r[0]=R8(c->r[31]+0x000000BBu); // 803AD708
  cmps(c,0,(int32_t)c->r[0],0); // 803AD70C
  if (!crb(c,2)) { goto L_803AD728; } // 803AD710
  c->lr=0x803AD718u; f_803ABEB8(c); // 803AD714
  c->r[3]=c->r[3]+0x00000354u; // 803AD718
  c->lr=0x803AD720u; f_8025FDA8(c); // 803AD71C
  c->r[3]=0u+0x00000000u; // 803AD720
  goto L_803AD768; // 803AD724
L_803AD728:;
  c->r[3]=R32(c->r[31]+0x000007C0u); // 803AD728
  c->r[5]=0u+0x00000000u; // 803AD72C
  cmps(c,0,(int32_t)c->r[3],0); // 803AD730
  if (crb(c,2)) { goto L_803AD740; } // 803AD734
  c->lr=0x803AD73Cu; f_803B1378(c); // 803AD738
  c->r[5]=c->r[3]|c->r[3]; // 803AD73C
L_803AD740:;
  c->r[3]=R32(c->r[31]+0x000000F0u); // 803AD740
  c->r[0]=R32(c->r[31]+0x000000F4u); // 803AD744
  c->r[4]=R32(c->r[31]+0x000000A0u); // 803AD748
  c->r[0]=c->r[0]-c->r[3]; // 803AD74C
  c->r[0]=(uint32_t)((int32_t)c->r[4]*(int32_t)c->r[0]); // 803AD750
  c->r[31]=c->r[0]+c->r[5]; // 803AD754
  c->lr=0x803AD75Cu; f_803ABEB8(c); // 803AD758
  c->r[3]=c->r[3]+0x00000354u; // 803AD75C
  c->lr=0x803AD764u; f_8025FDA8(c); // 803AD760
  c->r[3]=c->r[31]|c->r[31]; // 803AD764
L_803AD768:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 803AD768
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 803AD76C
  c->lr=c->r[0]; // 803AD770
  c->r[1]=c->r[1]+0x00000010u; // 803AD774
  return; // 803AD778
}

// fn_803AD77C
void f_803AD77C(Ctx* __restrict c) {
  trace_call(0x803AD77Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803AD77C
  c->r[0]=c->lr; // 803AD780
  W32(c->r[1]+0x00000014u,c->r[0]); // 803AD784
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 803AD788
  c->r[31]=c->r[3]|c->r[3]; // 803AD78C
  c->lr=0x803AD794u; f_8039B978(c); // 803AD790
  c->r[3]=0u+0x00000000u; // 803AD794
  c->r[0]=0u+0x00000001u; // 803AD798
  W8(c->r[31]+0x000000BAu,c->r[3]); // 803AD79C
  W8(c->r[31]+0x000000BBu,c->r[3]); // 803AD7A0
  W8(c->r[31]+0x000000C6u,c->r[3]); // 803AD7A4
  W8(c->r[31]+0x000000BFu,c->r[3]); // 803AD7A8
  W8(c->r[31]+0x000000C0u,c->r[3]); // 803AD7AC
  W8(c->r[31]+0x000000C1u,c->r[3]); // 803AD7B0
  W8(c->r[31]+0x000000C2u,c->r[3]); // 803AD7B4
  W8(c->r[31]+0x000000C5u,c->r[3]); // 803AD7B8
  W8(c->r[31]+0x000000C3u,c->r[3]); // 803AD7BC
  W8(c->r[31]+0x000000C4u,c->r[3]); // 803AD7C0
  W32(c->r[31]+0x000007C4u,c->r[3]); // 803AD7C4
  W32(c->r[31]+0x000000C8u,c->r[3]); // 803AD7C8
  W32(c->r[31]+0x000007C8u,c->r[0]); // 803AD7CC
  W32(c->r[31]+0x000007CCu,c->r[3]); // 803AD7D0
  W32(c->r[31]+0x000007D0u,c->r[3]); // 803AD7D4
  W32(c->r[31]+0x00000804u,c->r[3]); // 803AD7D8
  W32(c->r[31]+0x00000808u,c->r[3]); // 803AD7DC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 803AD7E0
  c->r[0]=R32(c->r[1]+0x00000014u); // 803AD7E4
  c->lr=c->r[0]; // 803AD7E8
  c->r[1]=c->r[1]+0x00000010u; // 803AD7EC
  return; // 803AD7F0
}

// fn_803AD7F4
void f_803AD7F4(Ctx* __restrict c) {
  trace_call(0x803AD7F4u);
  {uint32_t ea=c->r[1]+0xFFFFFDF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803AD7F4
  c->r[0]=c->lr; // 803AD7F8
  W32(c->r[1]+0x00000214u,c->r[0]); // 803AD7FC
  c->r[11]=c->r[1]+0x00000210u; // 803AD800
  c->lr=0x803AD808u; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 803AD804
  c->r[31]=0u+0x806C0000u; // 803AD808
  c->r[29]=c->r[3]|c->r[3]; // 803AD80C
  c->r[31]=c->r[31]+0x000022A0u; // 803AD810
  c->r[26]=c->r[4]|c->r[4]; // 803AD814
  c->r[27]=c->r[5]|c->r[5]; // 803AD818
  c->r[30]=c->r[6]|c->r[6]; // 803AD81C
  c->r[3]=c->r[31]|c->r[31]; // 803AD820
  c->lr=0x803AD828u; f_8025FCCC(c); // 803AD824
  W32(c->r[1]+0x00000008u,c->r[26]); // 803AD828
  c->r[3]=c->r[1]+0x0000000Cu; // 803AD82C
  c->lr=0x803AD834u; f_803AC688(c); // 803AD830
  c->r[4]=0u+0x806C0000u; // 803AD834
  c->r[3]=c->r[1]+0x00000008u; // 803AD838
  c->r[4]=c->r[4]+0xFFFFE280u; // 803AD83C
  c->r[5]=0u+0x00000200u; // 803AD840
  c->lr=0x803AD848u; f_803AC8EC(c); // 803AD844
  cmps(c,0,(int32_t)c->r[3],0); // 803AD848
  if (!crb(c,2)) { goto L_803AD860; } // 803AD84C
  c->r[3]=c->r[31]|c->r[31]; // 803AD850
  c->lr=0x803AD858u; f_8025FDA8(c); // 803AD854
  c->r[3]=0u+0x00000000u; // 803AD858
  goto L_803ADA68; // 803AD85C
L_803AD860:;
  c->r[3]=R32(c->r[1]+0x0000000Cu); // 803AD860
  c->r[0]=0u-c->r[3]; // 803AD864
  c->r[0]=c->r[0]|c->r[3]; // 803AD868
  c->r[0]=rotl(c->r[0],1)&0x00000001u; cr0(c,c->r[0]); // 803AD86C
  if (!crb(c,2)) { goto L_803AD878; } // 803AD870
  goto L_803AD884; // 803AD874
L_803AD878:;
  c->r[3]=c->r[1]+0x0000000Cu; // 803AD878
  c->r[4]=c->r[1]+0x00000018u; // 803AD87C
  c->lr=0x803AD884u; f_803AC698(c); // 803AD880
L_803AD884:;
  c->r[26]=0u+0x00000000u; // 803AD884
  c->r[28]=0u+0x00000000u; // 803AD888
  goto L_803AD8C4; // 803AD88C
L_803AD890:;
  c->r[3]=R32(c->r[1]+0x0000000Cu); // 803AD890
  c->r[0]=0u-c->r[3]; // 803AD894
  c->r[0]=c->r[0]|c->r[3]; // 803AD898
  c->r[0]=rotl(c->r[0],1)&0x00000001u; cr0(c,c->r[0]); // 803AD89C
  if (!crb(c,2)) { goto L_803AD8A8; } // 803AD8A0
  goto L_803AD8BC; // 803AD8A4
L_803AD8A8:;
  c->r[4]=c->r[1]+0x00000050u; // 803AD8A8
  c->r[5]=c->r[26]|c->r[26]; // 803AD8AC
  c->r[3]=c->r[1]+0x0000000Cu; // 803AD8B0
  c->r[4]=c->r[4]+c->r[28]; // 803AD8B4
  c->lr=0x803AD8BCu; f_803AC764(c); // 803AD8B8
L_803AD8BC:;
  c->r[26]=c->r[26]+0x00000001u; // 803AD8BC
  c->r[28]=c->r[28]+0x00000030u; // 803AD8C0
L_803AD8C4:;
  c->r[0]=R8(c->r[1]+0x0000001Au); // 803AD8C4
  cmps(c,0,(int32_t)c->r[26],(int32_t)c->r[0]); // 803AD8C8
  if (crb(c,0)) { IRQCHK(c); goto L_803AD890; } // 803AD8CC
  c->r[0]=R8(c->r[1]+0x00000018u); // 803AD8D0
  cmpu(c,0,c->r[0],0x00000002u); // 803AD8D4
  if (!crb(c,2)) { goto L_803AD980; } // 803AD8D8
  cmps(c,0,(int32_t)c->r[30],0); // 803AD8DC
  if (!crb(c,2)) { goto L_803AD930; } // 803AD8E0
  c->r[8]=c->r[1]+0x00000074u; // 803AD8E4
  c->r[7]=c->r[1]+0x000001D0u; // 803AD8E8
  c->r[6]=c->r[1]+0x00000076u; // 803AD8EC
  c->r[5]=c->r[1]+0x000001E0u; // 803AD8F0
  c->r[9]=0u+0x00000000u; // 803AD8F4
  c->r[3]=0u+0x00000000u; // 803AD8F8
  c->r[4]=0u+0x00000000u; // 803AD8FC
  goto L_803AD920; // 803AD900
L_803AD904:;
  c->r[0]=R16(c->r[8]+c->r[3]); // 803AD904
  c->r[9]=c->r[9]+0x00000001u; // 803AD908
  W16(c->r[7]+c->r[4],c->r[0]); // 803AD90C
  c->r[0]=R16(c->r[6]+c->r[3]); // 803AD910
  c->r[3]=c->r[3]+0x00000030u; // 803AD914
  W16(c->r[5]+c->r[4],c->r[0]); // 803AD918
  c->r[4]=c->r[4]+0x00000002u; // 803AD91C
L_803AD920:;
  c->r[0]=R8(c->r[1]+0x0000001Au); // 803AD920
  cmps(c,0,(int32_t)c->r[9],(int32_t)c->r[0]); // 803AD924
  if (crb(c,0)) { IRQCHK(c); goto L_803AD904; } // 803AD928
  goto L_803AD980; // 803AD92C
L_803AD930:;
  cmps(c,0,(int32_t)c->r[27],0); // 803AD930
  if (!crb(c,2)) { goto L_803AD93C; } // 803AD934
  goto L_803AD964; // 803AD938
L_803AD93C:;
  cmps(c,0,(int32_t)c->r[27],1); // 803AD93C
  if (!crb(c,2)) { goto L_803AD964; } // 803AD940
  c->r[0]=R32(c->r[1]+0x0000001Cu); // 803AD944
  c->r[3]=0u+0x10620000u; // 803AD948
  c->r[3]=c->r[3]+0x00004DD3u; // 803AD94C
  c->r[0]=(uint32_t)((int32_t)c->r[30]*(int32_t)c->r[0]); // 803AD950
  c->r[0]=(uint32_t)(((int64_t)(int32_t)c->r[3]*(int64_t)(int32_t)c->r[0])>>32); // 803AD954
  c->r[0]=sraw(c,c->r[0],6); // 803AD958
  c->r[3]=rotl(c->r[0],1)&0x00000001u; // 803AD95C
  c->r[30]=c->r[0]+c->r[3]; // 803AD960
L_803AD964:;
  c->r[0]=R32(c->r[1]+0x00000038u); // 803AD964
  c->r[3]=c->r[1]+0x00000008u; // 803AD968
  c->r[7]=R8(c->r[1]+0x0000001Au); // 803AD96C
  c->r[4]=c->r[1]+0x000001D0u; // 803AD970
  c->r[6]=divw((int32_t)c->r[30],(int32_t)c->r[0]); // 803AD974
  c->r[5]=c->r[1]+0x000001E0u; // 803AD978
  c->lr=0x803AD980u; f_803ACAB0(c); // 803AD97C
L_803AD980:;
  c->r[3]=c->r[29]|c->r[29]; // 803AD980
  c->r[4]=c->r[1]+0x00000018u; // 803AD984
  c->lr=0x803AD98Cu; f_803ADCB0(c); // 803AD988
  cmps(c,0,(int32_t)c->r[3],0); // 803AD98C
  if (!crb(c,2)) { goto L_803AD9A4; } // 803AD990
  c->r[3]=c->r[31]|c->r[31]; // 803AD994
  c->lr=0x803AD99Cu; f_8025FDA8(c); // 803AD998
  c->r[3]=0u+0x00000000u; // 803AD99C
  goto L_803ADA68; // 803AD9A0
L_803AD9A4:;
  c->r[0]=0u+0x00000000u; // 803AD9A4
  c->r[26]=0u+0x00000000u; // 803AD9A8
  W32(c->r[29]+0x000000CCu,c->r[0]); // 803AD9AC
  goto L_803AD9D8; // 803AD9B0
L_803AD9B4:;
  c->r[3]=c->r[29]|c->r[29]; // 803AD9B4
  c->lr=0x803AD9BCu; f_803AEAC8(c); // 803AD9B8
  c->r[3]=R32(c->r[29]+0x000000CCu); // 803AD9BC
  c->r[0]=R8(c->r[29]+0x000000C6u); // 803AD9C0
  c->r[3]=c->r[3]+0x00000001u; // 803AD9C4
  cmps(c,0,(int32_t)c->r[0],0); // 803AD9C8
  W32(c->r[29]+0x000000CCu,c->r[3]); // 803AD9CC
  if (!crb(c,2)) { goto L_803AD9E4; } // 803AD9D0
  c->r[26]=c->r[26]+0x00000001u; // 803AD9D4
L_803AD9D8:;
  c->r[0]=R32(c->r[29]+0x000000DCu); // 803AD9D8
  cmps(c,0,(int32_t)c->r[26],(int32_t)c->r[0]); // 803AD9DC
  if (crb(c,0)) { IRQCHK(c); goto L_803AD9B4; } // 803AD9E0
L_803AD9E4:;
  c->r[3]=R32(c->r[29]+0x00000098u); // 803AD9E4
  cmpu(c,0,c->r[3],0x00000002u); // 803AD9E8
  if (crb(c,1)) { goto L_803ADA5C; } // 803AD9EC
  c->r[0]=R8(c->r[29]+0x00000081u); // 803AD9F0
  cmps(c,0,(int32_t)c->r[0],0); // 803AD9F4
  if (!crb(c,2)) { goto L_803ADA5C; } // 803AD9F8
  c->r[27]=c->r[3]+0xFFFFFFFFu; // 803AD9FC
  c->lr=0x803ADA04u; f_8025EA10(c); // 803ADA00
  c->r[28]=c->r[3]|c->r[3]; // 803ADA04
  c->r[26]=0u+0x00000000u; // 803ADA08
  c->r[30]=0u+0x00000000u; // 803ADA0C
  goto L_803ADA40; // 803ADA10
L_803ADA14:;
  c->r[0]=R32(c->r[29]+0x000000A0u); // 803ADA14
  c->r[5]=c->r[29]+c->r[30]; // 803ADA18
  c->r[6]=R32(c->r[29]+0x000000A8u); // 803ADA1C
  c->r[4]=c->r[26]|c->r[26]; // 803ADA20
  c->r[0]=(uint32_t)((int32_t)c->r[27]*(int32_t)c->r[0]); // 803ADA24
  c->r[3]=R32(c->r[29]+0x000007C0u); // 803ADA28
  c->r[5]=R32(c->r[5]+0x000007CCu); // 803ADA2C
  c->r[6]=c->r[6]+c->r[0]; // 803ADA30
  c->lr=0x803ADA38u; f_803B1500(c); // 803ADA34
  c->r[26]=c->r[26]+0x00000001u; // 803ADA38
  c->r[30]=c->r[30]+0x00000038u; // 803ADA3C
L_803ADA40:;
  c->r[0]=R32(c->r[29]+0x000007C4u); // 803ADA40
  cmps(c,0,(int32_t)c->r[26],(int32_t)c->r[0]); // 803ADA44
  if (crb(c,0)) { IRQCHK(c); goto L_803ADA14; } // 803ADA48
  c->r[3]=c->r[28]|c->r[28]; // 803ADA4C
  c->lr=0x803ADA54u; f_8025EA38(c); // 803ADA50
  c->r[0]=0u+0x00000001u; // 803ADA54
  W8(c->r[29]+0x000000C5u,c->r[0]); // 803ADA58
L_803ADA5C:;
  c->r[3]=c->r[31]|c->r[31]; // 803ADA5C
  c->lr=0x803ADA64u; f_8025FDA8(c); // 803ADA60
  c->r[3]=0u+0x00000001u; // 803ADA64
L_803ADA68:;
  c->r[11]=c->r[1]+0x00000210u; // 803ADA68
  c->lr=0x803ADA70u; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 803ADA6C
  c->r[0]=R32(c->r[1]+0x00000214u); // 803ADA70
  c->lr=c->r[0]; // 803ADA74
  c->r[1]=c->r[1]+0x00000210u; // 803ADA78
  return; // 803ADA7C
}

// fn_803ADA80
void f_803ADA80(Ctx* __restrict c) {
  trace_call(0x803ADA80u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803ADA80
  c->r[0]=c->lr; // 803ADA84
  W32(c->r[1]+0x00000044u,c->r[0]); // 803ADA88
  c->r[11]=c->r[1]+0x00000040u; // 803ADA8C
  c->lr=0x803ADA94u; { W32(c->r[11]+0xFFFFFFD0u,c->r[20]); W32(c->r[11]+0xFFFFFFD4u,c->r[21]); W32(c->r[11]+0xFFFFFFD8u,c->r[22]); W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 803ADA90
  c->r[23]=c->r[4]|c->r[4]; // 803ADA94
  c->r[25]=c->r[3]|c->r[3]; // 803ADA98
  c->r[12]=R32(c->r[23]+0x00000000u); // 803ADA9C
  c->r[3]=c->r[23]|c->r[23]; // 803ADAA0
  c->r[22]=c->r[5]|c->r[5]; // 803ADAA4
  c->r[20]=c->r[6]|c->r[6]; // 803ADAA8
  c->r[12]=R32(c->r[12]+0x00000008u); // 803ADAAC
  c->r[26]=c->r[7]|c->r[7]; // 803ADAB0
  c->r[27]=c->r[8]|c->r[8]; // 803ADAB4
  c->r[28]=c->r[9]|c->r[9]; // 803ADAB8
  c->r[21]=c->r[13]+0xFFFFA0A8u; // 803ADABC
  c->ctr=c->r[12]; // 803ADAC0
  if (true) { c->lr=0x803ADAC8u; dispatch(c,c->ctr); } // 803ADAC4
  goto L_803ADAE0; // 803ADAC8
L_803ADACC:;
  cmpu(c,0,c->r[3],c->r[21]); // 803ADACC
  if (!crb(c,2)) { goto L_803ADADC; } // 803ADAD0
  c->r[0]=0u+0x00000001u; // 803ADAD4
  goto L_803ADAEC; // 803ADAD8
L_803ADADC:;
  c->r[3]=R32(c->r[3]+0x00000000u); // 803ADADC
L_803ADAE0:;
  cmps(c,0,(int32_t)c->r[3],0); // 803ADAE0
  if (!crb(c,2)) { IRQCHK(c); goto L_803ADACC; } // 803ADAE4
  c->r[0]=0u+0x00000000u; // 803ADAE8
L_803ADAEC:;
  cmps(c,0,(int32_t)c->r[0],0); // 803ADAEC
  if (crb(c,2)) { goto L_803ADAFC; } // 803ADAF0
  c->r[3]=c->r[23]|c->r[23]; // 803ADAF4
  goto L_803ADB00; // 803ADAF8
L_803ADAFC:;
  c->r[3]=0u+0x00000000u; // 803ADAFC
L_803ADB00:;
  cmps(c,0,(int32_t)c->r[3],0); // 803ADB00
  if (crb(c,2)) { goto L_803ADB10; } // 803ADB04
  c->r[0]=0u+0x00000001u; // 803ADB08
  W32(c->r[3]+0x00000068u,c->r[0]); // 803ADB0C
L_803ADB10:;
  c->r[31]=0u+0x806C0000u; // 803ADB10
  c->r[31]=c->r[31]+0x000022A0u; // 803ADB14
  c->r[3]=c->r[31]|c->r[31]; // 803ADB18
  c->lr=0x803ADB20u; f_8025FCCC(c); // 803ADB1C
  c->r[21]=0u+0x806C0000u; // 803ADB20
  c->r[4]=c->r[20]|c->r[20]; // 803ADB24
  c->r[3]=c->r[21]+0xFFFFE280u; // 803ADB28
  c->lr=0x803ADB30u; f_8025A3D4(c); // 803ADB2C
  c->r[12]=R32(c->r[23]+0x00000000u); // 803ADB30
  c->r[3]=c->r[23]|c->r[23]; // 803ADB34
  c->r[4]=c->r[22]|c->r[22]; // 803ADB38
  c->r[5]=0u+0x00000000u; // 803ADB3C
  c->r[12]=R32(c->r[12]+0x00000044u); // 803ADB40
  c->ctr=c->r[12]; // 803ADB44
  if (true) { c->lr=0x803ADB4Cu; dispatch(c,c->ctr); } // 803ADB48
  c->r[12]=R32(c->r[23]+0x00000000u); // 803ADB4C
  c->r[3]=c->r[23]|c->r[23]; // 803ADB50
  c->r[5]=c->r[20]|c->r[20]; // 803ADB54
  c->r[4]=c->r[21]+0xFFFFE280u; // 803ADB58
  c->r[12]=R32(c->r[12]+0x00000014u); // 803ADB5C
  c->ctr=c->r[12]; // 803ADB60
  if (true) { c->lr=0x803ADB68u; dispatch(c,c->ctr); } // 803ADB64
  cmpu(c,0,c->r[3],c->r[20]); // 803ADB68
  if (crb(c,2)) { goto L_803ADB80; } // 803ADB6C
  c->r[3]=c->r[31]|c->r[31]; // 803ADB70
  c->lr=0x803ADB78u; f_8025FDA8(c); // 803ADB74
  c->r[3]=0u+0x00000000u; // 803ADB78
  goto L_803ADC98; // 803ADB7C
L_803ADB80:;
  c->r[0]=c->r[26]+0x0000001Fu; // 803ADB80
  c->r[21]=c->r[21]+0xFFFFE280u; // 803ADB84
  c->r[29]=rotl(c->r[0],0)&0xFFFFFFE0u; // 803ADB88
  c->r[22]=c->r[1]+0x00000008u; // 803ADB8C
  c->r[30]=0u+0x00000000u; // 803ADB90
  c->r[24]=0u+0x00000000u; // 803ADB94
  c->r[23]=0u+0x00000000u; // 803ADB98
  goto L_803ADC0C; // 803ADB9C
L_803ADBA0:;
  cmps(c,0,(int32_t)c->r[28],0); // 803ADBA0
  if (crb(c,2)) { goto L_803ADBC4; } // 803ADBA4
  c->r[0]=c->r[26]+0x0000001Fu; // 803ADBA8
  c->r[3]=R16(c->r[25]+0x00000088u); // 803ADBAC
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFE0u; // 803ADBB0
  c->r[0]=(uint32_t)((int32_t)c->r[30]*(int32_t)c->r[0]); // 803ADBB4
  c->r[3]=c->r[3]+c->r[0]; // 803ADBB8
  c->r[0]=R8(c->r[3]+c->r[21]); // 803ADBBC
  W16(c->r[22]+c->r[23],c->r[0]); // 803ADBC0
L_803ADBC4:;
  c->r[0]=R32(c->r[25]+0x000000D4u); // 803ADBC4
  c->r[3]=c->r[25]+c->r[24]; // 803ADBC8
  c->r[4]=(uint32_t)((int32_t)c->r[30]*(int32_t)c->r[29]); // 803ADBCC
  c->r[6]=R16(c->r[25]+0x00000088u); // 803ADBD0
  c->r[3]=R32(c->r[3]+0x000007CCu); // 803ADBD4
  c->r[5]=c->r[29]|c->r[29]; // 803ADBD8
  c->r[7]=(uint32_t)((int32_t)c->r[0]*(int32_t)c->r[27]); // 803ADBDC
  c->r[0]=c->r[6]+c->r[4]; // 803ADBE0
  c->r[4]=c->r[0]+c->r[21]; // 803ADBE4
  c->r[20]=c->r[7]+c->r[3]; // 803ADBE8
  c->r[3]=c->r[20]|c->r[20]; // 803ADBEC
  c->lr=0x803ADBF4u; f_80235294(c); // 803ADBF0
  c->r[3]=c->r[20]|c->r[20]; // 803ADBF4
  c->r[4]=c->r[29]|c->r[29]; // 803ADBF8
  c->lr=0x803ADC00u; f_8025A400(c); // 803ADBFC
  c->r[30]=c->r[30]+0x00000001u; // 803ADC00
  c->r[24]=c->r[24]+0x00000038u; // 803ADC04
  c->r[23]=c->r[23]+0x00000002u; // 803ADC08
L_803ADC0C:;
  c->r[6]=R32(c->r[25]+0x000007C4u); // 803ADC0C
  cmps(c,0,(int32_t)c->r[30],(int32_t)c->r[6]); // 803ADC10
  if (crb(c,0)) { IRQCHK(c); goto L_803ADBA0; } // 803ADC14
  cmps(c,0,(int32_t)c->r[28],0); // 803ADC18
  if (crb(c,2)) { goto L_803ADC68; } // 803ADC1C
  c->r[0]=R8(c->r[25]+0x00000080u); // 803ADC20
  cmpu(c,0,c->r[0],0x00000002u); // 803ADC24
  if (!crb(c,2)) { goto L_803ADC68; } // 803ADC28
  c->r[5]=c->r[1]+0x00000008u; // 803ADC2C
  c->r[7]=0u+0x00000000u; // 803ADC30
  c->r[3]=0u+0x00000000u; // 803ADC34
  goto L_803ADC50; // 803ADC38
L_803ADC3C:;
  c->r[0]=R16(c->r[5]+c->r[3]); // 803ADC3C
  c->r[4]=c->r[25]+c->r[3]; // 803ADC40
  c->r[7]=c->r[7]+0x00000001u; // 803ADC44
  c->r[3]=c->r[3]+0x00000002u; // 803ADC48
  W16(c->r[4]+0x0000083Cu,c->r[0]); // 803ADC4C
L_803ADC50:;
  cmps(c,0,(int32_t)c->r[7],(int32_t)c->r[6]); // 803ADC50
  if (!crb(c,0)) { goto L_803ADC60; } // 803ADC54
  cmps(c,0,(int32_t)c->r[7],2); // 803ADC58
  if (crb(c,0)) { IRQCHK(c); goto L_803ADC3C; } // 803ADC5C
L_803ADC60:;
  c->r[0]=0u+0x00000001u; // 803ADC60
  W8(c->r[25]+0x000000C4u,c->r[0]); // 803ADC64
L_803ADC68:;
  c->r[0]=R8(c->r[25]+0x000000BBu); // 803ADC68
  cmps(c,0,(int32_t)c->r[0],0); // 803ADC6C
  if (!crb(c,2)) { goto L_803ADC8C; } // 803ADC70
  c->r[0]=R32(c->r[25]+0x000000CCu); // 803ADC74
  c->r[0]=addc(c,c->r[0],0xFFFFFFFFu,0); cr0(c,c->r[0]); // 803ADC78
  W32(c->r[25]+0x000000CCu,c->r[0]); // 803ADC7C
  if (!crb(c,2)) { goto L_803ADC8C; } // 803ADC80
  c->r[0]=0u+0x00000001u; // 803ADC84
  W8(c->r[25]+0x000000BBu,c->r[0]); // 803ADC88
L_803ADC8C:;
  c->r[3]=c->r[31]|c->r[31]; // 803ADC8C
  c->lr=0x803ADC94u; f_8025FDA8(c); // 803ADC90
  c->r[3]=0u+0x00000001u; // 803ADC94
L_803ADC98:;
  c->r[11]=c->r[1]+0x00000040u; // 803ADC98
  c->lr=0x803ADCA0u; { c->r[20]=R32(c->r[11]+0xFFFFFFD0u); c->r[21]=R32(c->r[11]+0xFFFFFFD4u); c->r[22]=R32(c->r[11]+0xFFFFFFD8u); c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 803ADC9C
  c->r[0]=R32(c->r[1]+0x00000044u); // 803ADCA0
  c->lr=c->r[0]; // 803ADCA4
  c->r[1]=c->r[1]+0x00000040u; // 803ADCA8
  return; // 803ADCAC
}

// fn_803ADCB0
void f_803ADCB0(Ctx* __restrict c) {
  trace_call(0x803ADCB0u);
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803ADCB0
  c->r[0]=c->lr; // 803ADCB4
  W32(c->r[1]+0x00000054u,c->r[0]); // 803ADCB8
  c->r[11]=c->r[1]+0x00000050u; // 803ADCBC
  c->lr=0x803ADCC4u; { W32(c->r[11]+0xFFFFFFCCu,c->r[19]); W32(c->r[11]+0xFFFFFFD0u,c->r[20]); W32(c->r[11]+0xFFFFFFD4u,c->r[21]); W32(c->r[11]+0xFFFFFFD8u,c->r[22]); W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 803ADCC0
  c->r[5]=R32(c->r[3]+0x000007B8u); // 803ADCC4
  c->r[0]=0u+0x00000000u; // 803ADCC8
  c->r[19]=R8(c->r[4]+0x00000000u); // 803ADCCC
  c->r[29]=c->r[3]|c->r[3]; // 803ADCD0
  c->r[31]=R32(c->r[5]+0x00000008u); // 803ADCD4
  c->r[30]=c->r[4]|c->r[4]; // 803ADCD8
  c->r[20]=R8(c->r[4]+0x00000001u); // 803ADCDC
  c->r[5]=c->r[1]+0x0000000Cu; // 803ADCE0
  c->r[21]=R8(c->r[4]+0x00000002u); // 803ADCE4
  c->r[6]=c->r[1]+0x00000008u; // 803ADCE8
  c->r[22]=R32(c->r[4]+0x00000004u); // 803ADCEC
  c->r[23]=R16(c->r[4]+0x00000008u); // 803ADCF0
  c->r[24]=R32(c->r[4]+0x0000000Cu); // 803ADCF4
  c->r[25]=R32(c->r[4]+0x00000010u); // 803ADCF8
  c->r[26]=R32(c->r[4]+0x00000014u); // 803ADCFC
  c->r[27]=R32(c->r[4]+0x00000018u); // 803ADD00
  c->r[28]=R32(c->r[4]+0x0000001Cu); // 803ADD04
  c->r[12]=R32(c->r[4]+0x00000020u); // 803ADD08
  c->r[11]=R32(c->r[4]+0x00000024u); // 803ADD0C
  c->r[10]=R32(c->r[4]+0x00000028u); // 803ADD10
  c->r[9]=R32(c->r[4]+0x0000002Cu); // 803ADD14
  c->r[8]=R32(c->r[4]+0x00000030u); // 803ADD18
  c->r[7]=R32(c->r[4]+0x00000034u); // 803ADD1C
  c->r[4]=c->r[1]+0x00000010u; // 803ADD20
  W8(c->r[3]+0x00000080u,c->r[19]); // 803ADD24
  W8(c->r[3]+0x00000081u,c->r[20]); // 803ADD28
  W8(c->r[3]+0x00000082u,c->r[21]); // 803ADD2C
  W32(c->r[3]+0x00000084u,c->r[22]); // 803ADD30
  W16(c->r[3]+0x00000088u,c->r[23]); // 803ADD34
  W32(c->r[3]+0x0000008Cu,c->r[24]); // 803ADD38
  W32(c->r[3]+0x00000090u,c->r[25]); // 803ADD3C
  W32(c->r[3]+0x00000094u,c->r[26]); // 803ADD40
  W32(c->r[3]+0x00000098u,c->r[27]); // 803ADD44
  W32(c->r[3]+0x0000009Cu,c->r[28]); // 803ADD48
  W32(c->r[3]+0x000000A0u,c->r[12]); // 803ADD4C
  W32(c->r[3]+0x000000A4u,c->r[11]); // 803ADD50
  W32(c->r[3]+0x000000A8u,c->r[10]); // 803ADD54
  W32(c->r[3]+0x000000ACu,c->r[9]); // 803ADD58
  W32(c->r[3]+0x000000B0u,c->r[8]); // 803ADD5C
  W32(c->r[3]+0x000000B4u,c->r[7]); // 803ADD60
  W32(c->r[1]+0x00000010u,c->r[0]); // 803ADD64
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 803ADD68
  W32(c->r[1]+0x00000008u,c->r[0]); // 803ADD6C
  c->lr=0x803ADD74u; f_803AECF0(c); // 803ADD70
  cmps(c,0,(int32_t)c->r[3],0); // 803ADD74
  if (!crb(c,2)) { goto L_803ADD84; } // 803ADD78
  c->r[3]=0u+0x00000000u; // 803ADD7C
  goto L_803ADFC4; // 803ADD80
L_803ADD84:;
  c->r[0]=R8(c->r[29]+0x00000080u); // 803ADD84
  cmpu(c,0,c->r[0],0x00000002u); // 803ADD88
  if (!crb(c,2)) { goto L_803ADE94; } // 803ADD8C
  c->r[3]=c->r[29]|c->r[29]; // 803ADD90
  c->r[4]=c->r[30]|c->r[30]; // 803ADD94
  c->r[5]=c->r[29]|c->r[29]; // 803ADD98
  c->r[6]=0u+0x00000000u; // 803ADD9C
  goto L_803ADE88; // 803ADDA0
L_803ADDA4:;
  c->r[7]=R16(c->r[30]+0x00000038u); // 803ADDA4
  c->r[6]=c->r[6]+0x00000001u; // 803ADDA8
  c->r[0]=R16(c->r[30]+0x0000003Au); // 803ADDAC
  W16(c->r[3]+0x000007D4u,c->r[7]); // 803ADDB0
  c->r[7]=R16(c->r[30]+0x0000003Cu); // 803ADDB4
  W16(c->r[3]+0x000007D6u,c->r[0]); // 803ADDB8
  c->r[0]=R16(c->r[30]+0x0000003Eu); // 803ADDBC
  W16(c->r[3]+0x000007D8u,c->r[7]); // 803ADDC0
  c->r[7]=R16(c->r[30]+0x00000040u); // 803ADDC4
  W16(c->r[3]+0x000007DAu,c->r[0]); // 803ADDC8
  c->r[0]=R16(c->r[30]+0x00000042u); // 803ADDCC
  W16(c->r[3]+0x000007DCu,c->r[7]); // 803ADDD0
  c->r[7]=R16(c->r[30]+0x00000044u); // 803ADDD4
  W16(c->r[3]+0x000007DEu,c->r[0]); // 803ADDD8
  c->r[0]=R16(c->r[30]+0x00000046u); // 803ADDDC
  W16(c->r[3]+0x000007E0u,c->r[7]); // 803ADDE0
  c->r[7]=R16(c->r[30]+0x00000048u); // 803ADDE4
  W16(c->r[3]+0x000007E2u,c->r[0]); // 803ADDE8
  c->r[0]=R16(c->r[30]+0x0000004Au); // 803ADDEC
  W16(c->r[3]+0x000007E4u,c->r[7]); // 803ADDF0
  c->r[7]=R16(c->r[30]+0x0000004Cu); // 803ADDF4
  W16(c->r[3]+0x000007E6u,c->r[0]); // 803ADDF8
  c->r[0]=R16(c->r[30]+0x0000004Eu); // 803ADDFC
  W16(c->r[3]+0x000007E8u,c->r[7]); // 803ADE00
  c->r[7]=R16(c->r[30]+0x00000050u); // 803ADE04
  W16(c->r[3]+0x000007EAu,c->r[0]); // 803ADE08
  c->r[0]=R16(c->r[30]+0x00000052u); // 803ADE0C
  W16(c->r[3]+0x000007ECu,c->r[7]); // 803ADE10
  c->r[7]=R16(c->r[30]+0x00000054u); // 803ADE14
  W16(c->r[3]+0x000007EEu,c->r[0]); // 803ADE18
  c->r[0]=R16(c->r[30]+0x00000056u); // 803ADE1C
  W16(c->r[3]+0x000007F0u,c->r[7]); // 803ADE20
  c->r[7]=R16(c->r[30]+0x00000058u); // 803ADE24
  W16(c->r[3]+0x000007F2u,c->r[0]); // 803ADE28
  c->r[0]=R16(c->r[30]+0x0000005Au); // 803ADE2C
  W16(c->r[3]+0x000007F4u,c->r[7]); // 803ADE30
  c->r[7]=R16(c->r[30]+0x0000005Cu); // 803ADE34
  W16(c->r[3]+0x000007F6u,c->r[0]); // 803ADE38
  c->r[0]=R16(c->r[30]+0x0000005Eu); // 803ADE3C
  W16(c->r[3]+0x000007F8u,c->r[7]); // 803ADE40
  c->r[7]=R16(c->r[30]+0x00000060u); // 803ADE44
  W16(c->r[3]+0x000007FAu,c->r[0]); // 803ADE48
  c->r[0]=R16(c->r[30]+0x00000062u); // 803ADE4C
  W16(c->r[3]+0x000007FCu,c->r[7]); // 803ADE50
  c->r[7]=R16(c->r[30]+0x00000064u); // 803ADE54
  W16(c->r[3]+0x000007FEu,c->r[0]); // 803ADE58
  c->r[0]=R16(c->r[30]+0x00000066u); // 803ADE5C
  c->r[30]=c->r[30]+0x00000030u; // 803ADE60
  W16(c->r[3]+0x00000800u,c->r[7]); // 803ADE64
  c->r[7]=R16(c->r[4]+0x000001B8u); // 803ADE68
  W16(c->r[3]+0x00000802u,c->r[0]); // 803ADE6C
  c->r[3]=c->r[3]+0x00000038u; // 803ADE70
  c->r[0]=R16(c->r[4]+0x000001C8u); // 803ADE74
  c->r[4]=c->r[4]+0x00000002u; // 803ADE78
  W16(c->r[5]+0x00000840u,c->r[7]); // 803ADE7C
  W16(c->r[5]+0x00000844u,c->r[0]); // 803ADE80
  c->r[5]=c->r[5]+0x00000002u; // 803ADE84
L_803ADE88:;
  c->r[0]=R8(c->r[29]+0x00000082u); // 803ADE88
  cmps(c,0,(int32_t)c->r[6],(int32_t)c->r[0]); // 803ADE8C
  if (crb(c,0)) { IRQCHK(c); goto L_803ADDA4; } // 803ADE90
L_803ADE94:;
  c->r[4]=R32(c->r[29]+0x0000008Cu); // 803ADE94
  c->r[3]=R32(c->r[29]+0x000000A0u); // 803ADE98
  c->r[0]=R32(c->r[29]+0x0000009Cu); // 803ADE9C
  c->r[4]=divwu(c->r[4],c->r[3]); // 803ADEA0
  c->r[3]=R32(c->r[29]+0x00000098u); // 803ADEA4
  cmps(c,0,(int32_t)c->r[0],8192); // 803ADEA8
  W32(c->r[29]+0x000000D4u,c->r[0]); // 803ADEAC
  c->r[3]=c->r[3]+0xFFFFFFFFu; // 803ADEB0
  W32(c->r[29]+0x000000FCu,c->r[3]); // 803ADEB4
  W32(c->r[29]+0x000000F8u,c->r[4]); // 803ADEB8
  if (!crb(c,1)) { goto L_803ADEC8; } // 803ADEBC
  c->r[3]=0u+0x00000000u; // 803ADEC0
  goto L_803ADFC4; // 803ADEC4
L_803ADEC8:;
  c->r[0]=divwu(c->r[31],c->r[0]); // 803ADEC8
  cmps(c,0,(int32_t)c->r[0],4); // 803ADECC
  W32(c->r[29]+0x000000D8u,c->r[0]); // 803ADED0
  if (!crb(c,0)) { goto L_803ADEE0; } // 803ADED4
  c->r[3]=0u+0x00000000u; // 803ADED8
  goto L_803ADFC4; // 803ADEDC
L_803ADEE0:;
  cmps(c,0,(int32_t)c->r[0],32); // 803ADEE0
  if (!crb(c,1)) { goto L_803ADEF0; } // 803ADEE4
  c->r[0]=0u+0x00000020u; // 803ADEE8
  W32(c->r[29]+0x000000D8u,c->r[0]); // 803ADEEC
L_803ADEF0:;
  c->r[4]=R32(c->r[29]+0x000000D8u); // 803ADEF0
  c->r[3]=0u+0x00000000u; // 803ADEF4
  c->r[0]=R8(c->r[29]+0x000000C2u); // 803ADEF8
  c->r[5]=c->r[4]+0xFFFFFFFFu; // 803ADEFC
  W32(c->r[29]+0x000000DCu,c->r[5]); // 803ADF00
  cmps(c,0,(int32_t)c->r[0],0); // 803ADF04
  W32(c->r[29]+0x000000D0u,c->r[5]); // 803ADF08
  c->r[0]=R32(c->r[1]+0x00000010u); // 803ADF0C
  W32(c->r[29]+0x000000F4u,c->r[0]); // 803ADF10
  c->r[4]=R32(c->r[1]+0x00000010u); // 803ADF14
  W32(c->r[29]+0x000000E8u,c->r[4]); // 803ADF18
  W32(c->r[29]+0x000000E4u,c->r[3]); // 803ADF1C
  W32(c->r[29]+0x000000F0u,c->r[3]); // 803ADF20
  if (crb(c,2)) { goto L_803ADF34; } // 803ADF24
  c->r[0]=R32(c->r[29]+0x00000098u); // 803ADF28
  W32(c->r[29]+0x000000E0u,c->r[0]); // 803ADF2C
  goto L_803ADF6C; // 803ADF30
L_803ADF34:;
  c->r[6]=R32(c->r[29]+0x000000FCu); // 803ADF34
  c->r[7]=c->r[5]+0x00000001u; // 803ADF38
  c->r[0]=R32(c->r[29]+0x000000F8u); // 803ADF3C
  c->r[3]=c->r[6]-c->r[4]; // 803ADF40
  c->r[4]=c->r[3]+0x00000001u; // 803ADF44
  c->r[3]=c->r[6]-c->r[0]; // 803ADF48
  c->r[4]=c->r[7]-c->r[4]; // 803ADF4C
  c->r[3]=c->r[3]+0x00000001u; // 803ADF50
  c->r[0]=divw((int32_t)c->r[4],(int32_t)c->r[3]); // 803ADF54
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)c->r[3]); // 803ADF58
  c->r[0]=c->r[4]-c->r[0]; cr0(c,c->r[0]); // 803ADF5C
  if (!crb(c,2)) { goto L_803ADF68; } // 803ADF60
  c->r[5]=c->r[7]|c->r[7]; // 803ADF64
L_803ADF68:;
  W32(c->r[29]+0x000000E0u,c->r[5]); // 803ADF68
L_803ADF6C:;
  c->r[0]=R32(c->r[29]+0x000000E0u); // 803ADF6C
  W32(c->r[29]+0x000000ECu,c->r[0]); // 803ADF70
  c->lr=0x803ADF78u; f_8025EA10(c); // 803ADF74
  c->r[0]=R8(c->r[29]+0x00000082u); // 803ADF78
  c->r[30]=c->r[3]|c->r[3]; // 803ADF7C
  c->r[4]=0u+0x00000002u; // 803ADF80
  cmps(c,0,(int32_t)c->r[0],2); // 803ADF84
  if (crb(c,1)) { goto L_803ADF90; } // 803ADF88
  c->r[4]=c->r[0]|c->r[0]; // 803ADF8C
L_803ADF90:;
  W32(c->r[29]+0x000007C4u,c->r[4]); // 803ADF90
  c->r[3]=c->r[29]|c->r[29]; // 803ADF94
  c->r[5]=R32(c->r[29]+0x000007C8u); // 803ADF98
  c->lr=0x803ADFA0u; f_803ADFDC(c); // 803ADF9C
  cmps(c,0,(int32_t)c->r[3],0); // 803ADFA0
  if (!crb(c,2)) { goto L_803ADFB8; } // 803ADFA4
  c->r[3]=c->r[30]|c->r[30]; // 803ADFA8
  c->lr=0x803ADFB0u; f_8025EA38(c); // 803ADFAC
  c->r[3]=0u+0x00000000u; // 803ADFB0
  goto L_803ADFC4; // 803ADFB4
L_803ADFB8:;
  c->r[3]=c->r[30]|c->r[30]; // 803ADFB8
  c->lr=0x803ADFC0u; f_8025EA38(c); // 803ADFBC
  c->r[3]=0u+0x00000001u; // 803ADFC0
L_803ADFC4:;
  c->r[11]=c->r[1]+0x00000050u; // 803ADFC4
  c->lr=0x803ADFCCu; { c->r[19]=R32(c->r[11]+0xFFFFFFCCu); c->r[20]=R32(c->r[11]+0xFFFFFFD0u); c->r[21]=R32(c->r[11]+0xFFFFFFD4u); c->r[22]=R32(c->r[11]+0xFFFFFFD8u); c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 803ADFC8
  c->r[0]=R32(c->r[1]+0x00000054u); // 803ADFCC
  c->lr=c->r[0]; // 803ADFD0
  c->r[1]=c->r[1]+0x00000050u; // 803ADFD4
  return; // 803ADFD8
}

// fn_803ADFDC
void f_803ADFDC(Ctx* __restrict c) {
  trace_call(0x803ADFDCu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803ADFDC
  c->r[0]=c->lr; // 803ADFE0
  W32(c->r[1]+0x00000024u,c->r[0]); // 803ADFE4
  c->r[11]=c->r[1]+0x00000020u; // 803ADFE8
  c->lr=0x803ADFF0u; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 803ADFEC
  c->r[26]=c->r[3]|c->r[3]; // 803ADFF0
  c->r[27]=c->r[4]|c->r[4]; // 803ADFF4
  c->r[28]=c->r[5]|c->r[5]; // 803ADFF8
  c->lr=0x803AE000u; f_8025EA10(c); // 803ADFFC
  c->r[31]=c->r[3]|c->r[3]; // 803AE000
  c->r[30]=c->r[26]|c->r[26]; // 803AE004
  c->r[29]=0u+0x00000000u; // 803AE008
  goto L_803AE070; // 803AE00C
L_803AE010:;
  c->r[3]=R32(c->r[26]+0x000007B8u); // 803AE010
  c->lr=0x803AE018u; f_803AC52C(c); // 803AE014
  cmps(c,0,(int32_t)c->r[3],0); // 803AE018
  if (!crb(c,2)) { goto L_803AE058; } // 803AE01C
  c->r[30]=c->r[26]|c->r[26]; // 803AE020
  c->r[28]=0u+0x00000000u; // 803AE024
  goto L_803AE040; // 803AE028
L_803AE02C:;
  c->r[3]=R32(c->r[26]+0x000007B8u); // 803AE02C
  c->r[4]=R32(c->r[30]+0x000007CCu); // 803AE030
  c->lr=0x803AE038u; f_803AC610(c); // 803AE034
  c->r[30]=c->r[30]+0x00000038u; // 803AE038
  c->r[28]=c->r[28]+0x00000001u; // 803AE03C
L_803AE040:;
  cmps(c,0,(int32_t)c->r[28],(int32_t)c->r[29]); // 803AE040
  if (crb(c,0)) { IRQCHK(c); goto L_803AE02C; } // 803AE044
  c->r[3]=c->r[31]|c->r[31]; // 803AE048
  c->lr=0x803AE050u; f_8025EA38(c); // 803AE04C
  c->r[3]=0u+0x00000000u; // 803AE050
  goto L_803AE0E8; // 803AE054
L_803AE058:;
  W32(c->r[30]+0x000007CCu,c->r[3]); // 803AE058
  c->r[29]=c->r[29]+0x00000001u; // 803AE05C
  c->r[3]=R32(c->r[26]+0x000007B8u); // 803AE060
  c->r[0]=R32(c->r[3]+0x00000008u); // 803AE064
  W32(c->r[30]+0x000007D0u,c->r[0]); // 803AE068
  c->r[30]=c->r[30]+0x00000038u; // 803AE06C
L_803AE070:;
  cmps(c,0,(int32_t)c->r[29],(int32_t)c->r[27]); // 803AE070
  if (crb(c,0)) { IRQCHK(c); goto L_803AE010; } // 803AE074
  c->lr=0x803AE07Cu; f_803B266C(c); // 803AE078
  c->r[7]=0u+0x803B0000u; // 803AE07C
  c->r[4]=c->r[27]|c->r[27]; // 803AE080
  c->r[5]=c->r[28]|c->r[28]; // 803AE084
  c->r[8]=c->r[26]|c->r[26]; // 803AE088
  c->r[7]=c->r[7]+0xFFFFEE08u; // 803AE08C
  c->r[6]=0u+0x000000FFu; // 803AE090
  c->lr=0x803AE098u; f_803B2830(c); // 803AE094
  cmps(c,0,(int32_t)c->r[3],0); // 803AE098
  if (!crb(c,2)) { goto L_803AE0D8; } // 803AE09C
  c->r[30]=c->r[26]|c->r[26]; // 803AE0A0
  c->r[28]=0u+0x00000000u; // 803AE0A4
  goto L_803AE0C0; // 803AE0A8
L_803AE0AC:;
  c->r[3]=R32(c->r[26]+0x000007B8u); // 803AE0AC
  c->r[4]=R32(c->r[30]+0x000007CCu); // 803AE0B0
  c->lr=0x803AE0B8u; f_803AC610(c); // 803AE0B4
  c->r[30]=c->r[30]+0x00000038u; // 803AE0B8
  c->r[28]=c->r[28]+0x00000001u; // 803AE0BC
L_803AE0C0:;
  cmps(c,0,(int32_t)c->r[28],(int32_t)c->r[27]); // 803AE0C0
  if (crb(c,0)) { IRQCHK(c); goto L_803AE0AC; } // 803AE0C4
  c->r[3]=c->r[31]|c->r[31]; // 803AE0C8
  c->lr=0x803AE0D0u; f_8025EA38(c); // 803AE0CC
  c->r[3]=0u+0x00000000u; // 803AE0D0
  goto L_803AE0E8; // 803AE0D4
L_803AE0D8:;
  W32(c->r[26]+0x000007C0u,c->r[3]); // 803AE0D8
  c->r[3]=c->r[31]|c->r[31]; // 803AE0DC
  c->lr=0x803AE0E4u; f_8025EA38(c); // 803AE0E0
  c->r[3]=0u+0x00000001u; // 803AE0E4
L_803AE0E8:;
  c->r[11]=c->r[1]+0x00000020u; // 803AE0E8
  c->lr=0x803AE0F0u; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 803AE0EC
  c->r[0]=R32(c->r[1]+0x00000024u); // 803AE0F0
  c->lr=c->r[0]; // 803AE0F4
  c->r[1]=c->r[1]+0x00000020u; // 803AE0F8
  return; // 803AE0FC
}

// fn_803AE100
void f_803AE100(Ctx* __restrict c) {
  trace_call(0x803AE100u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803AE100
  c->r[0]=c->lr; // 803AE104
  W32(c->r[1]+0x00000024u,c->r[0]); // 803AE108
  c->r[11]=c->r[1]+0x00000020u; // 803AE10C
  c->lr=0x803AE114u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 803AE110
  c->r[27]=c->r[3]|c->r[3]; // 803AE114
  c->lr=0x803AE11Cu; f_8025EA10(c); // 803AE118
  c->r[31]=c->r[3]|c->r[3]; // 803AE11C
  c->r[29]=c->r[27]|c->r[27]; // 803AE120
  c->r[28]=0u+0x00000000u; // 803AE124
  c->r[30]=0u+0x00000000u; // 803AE128
  goto L_803AE154; // 803AE12C
L_803AE130:;
  c->r[4]=R32(c->r[29]+0x000007CCu); // 803AE130
  cmps(c,0,(int32_t)c->r[4],0); // 803AE134
  if (crb(c,2)) { goto L_803AE14C; } // 803AE138
  c->r[3]=R32(c->r[27]+0x000007B8u); // 803AE13C
  c->lr=0x803AE144u; f_803AC610(c); // 803AE140
  W32(c->r[29]+0x000007CCu,c->r[30]); // 803AE144
  W32(c->r[29]+0x000007D0u,c->r[30]); // 803AE148
L_803AE14C:;
  c->r[29]=c->r[29]+0x00000038u; // 803AE14C
  c->r[28]=c->r[28]+0x00000001u; // 803AE150
L_803AE154:;
  c->r[0]=R32(c->r[27]+0x000007C4u); // 803AE154
  cmps(c,0,(int32_t)c->r[28],(int32_t)c->r[0]); // 803AE158
  if (crb(c,0)) { IRQCHK(c); goto L_803AE130; } // 803AE15C
  c->r[3]=R32(c->r[27]+0x000007C0u); // 803AE160
  c->r[30]=0u+0x00000000u; // 803AE164
  W32(c->r[27]+0x000007C4u,c->r[30]); // 803AE168
  cmps(c,0,(int32_t)c->r[3],0); // 803AE16C
  if (crb(c,2)) { goto L_803AE17C; } // 803AE170
  c->lr=0x803AE178u; f_803B0940(c); // 803AE174
  W32(c->r[27]+0x000007C0u,c->r[30]); // 803AE178
L_803AE17C:;
  c->r[3]=c->r[31]|c->r[31]; // 803AE17C
  c->lr=0x803AE184u; f_8025EA38(c); // 803AE180
  c->r[11]=c->r[1]+0x00000020u; // 803AE184
  c->lr=0x803AE18Cu; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 803AE188
  c->r[0]=R32(c->r[1]+0x00000024u); // 803AE18C
  c->lr=c->r[0]; // 803AE190
  c->r[1]=c->r[1]+0x00000020u; // 803AE194
  return; // 803AE198
}

// fn_803AE19C
void f_803AE19C(Ctx* __restrict c) {
  trace_call(0x803AE19Cu);
  {uint32_t ea=c->r[1]+0xFFFFFF30u; W32(ea,c->r[1]); c->r[1]=ea;} // 803AE19C
  c->r[0]=c->lr; // 803AE1A0
  W32(c->r[1]+0x000000D4u,c->r[0]); // 803AE1A4
  {uint32_t ea=c->r[1]+0x000000C0u; WF64(ea,c->f[31]);} // 803AE1A8
  {uint32_t ea=c->r[1]+0x000000C8u; psq_store(c,31,ea,0,0);} // 803AE1AC
  {uint32_t ea=c->r[1]+0x000000B0u; WF64(ea,c->f[30]);} // 803AE1B0
  {uint32_t ea=c->r[1]+0x000000B8u; psq_store(c,30,ea,0,0);} // 803AE1B4
  {uint32_t ea=c->r[1]+0x000000A0u; WF64(ea,c->f[29]);} // 803AE1B8
  {uint32_t ea=c->r[1]+0x000000A8u; psq_store(c,29,ea,0,0);} // 803AE1BC
  {uint32_t ea=c->r[1]+0x00000090u; WF64(ea,c->f[28]);} // 803AE1C0
  {uint32_t ea=c->r[1]+0x00000098u; psq_store(c,28,ea,0,0);} // 803AE1C4
  {uint32_t ea=c->r[1]+0x00000080u; WF64(ea,c->f[27]);} // 803AE1C8
  {uint32_t ea=c->r[1]+0x00000088u; psq_store(c,27,ea,0,0);} // 803AE1CC
  {uint32_t ea=c->r[1]+0x00000070u; WF64(ea,c->f[26]);} // 803AE1D0
  {uint32_t ea=c->r[1]+0x00000078u; psq_store(c,26,ea,0,0);} // 803AE1D4
  {uint32_t ea=c->r[1]+0x00000060u; WF64(ea,c->f[25]);} // 803AE1D8
  {uint32_t ea=c->r[1]+0x00000068u; psq_store(c,25,ea,0,0);} // 803AE1DC
  c->r[11]=c->r[1]+0x00000060u; // 803AE1E0
  c->lr=0x803AE1E8u; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 803AE1E4
  c->r[0]=R8(c->r[3]+0x000000B9u); // 803AE1E8
  c->r[31]=c->r[3]|c->r[3]; // 803AE1EC
  cmps(c,0,(int32_t)c->r[0],0); // 803AE1F0
  if (crb(c,2)) { goto L_803AE4EC; } // 803AE1F4
  c->r[0]=R8(c->r[3]+0x000000BCu); // 803AE1F8
  cmps(c,0,(int32_t)c->r[0],0); // 803AE1FC
  if (crb(c,2)) { goto L_803AE224; } // 803AE200
  c->r[0]=R8(c->r[3]+0x000000BDu); // 803AE204
  cmps(c,0,(int32_t)c->r[0],0); // 803AE208
  if (!crb(c,2)) { goto L_803AE224; } // 803AE20C
  c->r[12]=R32(c->r[3]+0x00000000u); // 803AE210
  c->r[12]=R32(c->r[12]+0x00000010u); // 803AE214
  c->ctr=c->r[12]; // 803AE218
  if (true) { c->lr=0x803AE220u; dispatch(c,c->ctr); } // 803AE21C
  goto L_803AE4EC; // 803AE220
L_803AE224:;
  c->r[0]=R8(c->r[3]+0x000000BAu); // 803AE224
  cmps(c,0,(int32_t)c->r[0],0); // 803AE228
  if (crb(c,2)) { goto L_803AE254; } // 803AE22C
  c->r[0]=R32(c->r[3]+0x000007C0u); // 803AE230
  cmps(c,0,(int32_t)c->r[0],0); // 803AE234
  if (!crb(c,2)) { goto L_803AE254; } // 803AE238
  c->r[12]=R32(c->r[31]+0x00000000u); // 803AE23C
  c->r[3]=c->r[31]|c->r[31]; // 803AE240
  c->r[12]=R32(c->r[12]+0x00000010u); // 803AE244
  c->ctr=c->r[12]; // 803AE248
  if (true) { c->lr=0x803AE250u; dispatch(c,c->ctr); } // 803AE24C
  goto L_803AE4EC; // 803AE250
L_803AE254:;
  c->r[0]=R8(c->r[3]+0x000000C1u); // 803AE254
  cmps(c,0,(int32_t)c->r[0],0); // 803AE258
  if (crb(c,2)) { goto L_803AE2CC; } // 803AE25C
  c->r[0]=R32(c->r[3]+0x00000128u); // 803AE260
  cmps(c,0,(int32_t)c->r[0],0); // 803AE264
  if (!crb(c,2)) { goto L_803AE2CC; } // 803AE268
  c->r[0]=0u+0x00000000u; // 803AE26C
  W8(c->r[3]+0x000000C1u,c->r[0]); // 803AE270
  c->lr=0x803AE278u; f_8025EA10(c); // 803AE274
  c->r[0]=R8(c->r[31]+0x000000BFu); // 803AE278
  c->r[30]=c->r[3]|c->r[3]; // 803AE27C
  c->r[29]=0u+0x00000000u; // 803AE280
  cmps(c,0,(int32_t)c->r[0],0); // 803AE284
  if (crb(c,2)) { goto L_803AE290; } // 803AE288
  c->r[29]=0u+0x00000001u; // 803AE28C
L_803AE290:;
  c->r[0]=R8(c->r[31]+0x000000C1u); // 803AE290
  cmps(c,0,(int32_t)c->r[0],0); // 803AE294
  if (crb(c,2)) { goto L_803AE2A0; } // 803AE298
  c->r[29]=0u+0x00000001u; // 803AE29C
L_803AE2A0:;
  c->r[0]=R8(c->r[31]+0x000000C0u); // 803AE2A0
  cmpu(c,0,c->r[29],c->r[0]); // 803AE2A4
  if (crb(c,2)) { goto L_803AE2C4; } // 803AE2A8
  c->r[3]=R32(c->r[31]+0x000007C0u); // 803AE2AC
  cmps(c,0,(int32_t)c->r[3],0); // 803AE2B0
  if (crb(c,2)) { goto L_803AE2C0; } // 803AE2B4
  c->r[4]=c->r[29]|c->r[29]; // 803AE2B8
  c->lr=0x803AE2C0u; f_803B0DAC(c); // 803AE2BC
L_803AE2C0:;
  W8(c->r[31]+0x000000C0u,c->r[29]); // 803AE2C0
L_803AE2C4:;
  c->r[3]=c->r[30]|c->r[30]; // 803AE2C4
  c->lr=0x803AE2CCu; f_8025EA38(c); // 803AE2C8
L_803AE2CC:;
  c->r[0]=R8(c->r[31]+0x000000BEu); // 803AE2CC
  cmps(c,0,(int32_t)c->r[0],0); // 803AE2D0
  if (crb(c,2)) { goto L_803AE2E0; } // 803AE2D4
  c->r[0]=0u+0x00000000u; // 803AE2D8
  W8(c->r[31]+0x000000BEu,c->r[0]); // 803AE2DC
L_803AE2E0:;
  c->r[0]=R32(c->r[31]+0x000007C0u); // 803AE2E0
  cmps(c,0,(int32_t)c->r[0],0); // 803AE2E4
  if (crb(c,2)) { goto L_803AE4EC; } // 803AE2E8
  {uint32_t ea=c->r[2]+0xFFFFEF68u; c->f[30]=c->ps1[30]=RF32(ea);} // 803AE2EC
  c->r[27]=c->r[1]+0x00000038u; // 803AE2F0
  {uint32_t ea=c->r[31]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 803AE2F4
  c->r[28]=0u+0x00000000u; // 803AE2F8
  c->f[29]=c->f[30]; // 803AE2FC
  {uint32_t ea=c->r[2]+0xFFFFEF6Cu; c->f[28]=c->ps1[28]=RF32(ea);} // 803AE300
  c->f[30]=c->ps1[30]=S(c->f[30]*c->f[0]); // 803AE304
  {uint32_t ea=c->r[31]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 803AE308
  c->f[27]=c->f[28]; // 803AE30C
  {uint32_t ea=c->r[31]+0x00000010u; c->f[1]=c->ps1[1]=RF32(ea);} // 803AE310
  c->f[29]=c->ps1[29]=S(c->f[29]*c->f[0]); // 803AE314
  {uint32_t ea=c->r[31]+0x00000014u; c->f[0]=c->ps1[0]=RF32(ea);} // 803AE318
  c->f[28]=c->ps1[28]=S(c->f[28]+c->f[1]); // 803AE31C
  {uint32_t ea=c->r[2]+0xFFFFEF6Cu; c->f[25]=c->ps1[25]=RF32(ea);} // 803AE320
  c->f[27]=c->ps1[27]=S(c->f[27]+c->f[0]); // 803AE324
  {uint32_t ea=c->r[2]+0xFFFFEF68u; c->f[26]=c->ps1[26]=RF32(ea);} // 803AE328
  {uint32_t ea=c->r[31]+0x00000018u; c->f[1]=c->ps1[1]=RF32(ea);} // 803AE32C
  c->f[31]=c->f[25]; // 803AE330
  {uint32_t ea=c->r[31]+0x00000028u; c->f[0]=c->ps1[0]=RF32(ea);} // 803AE334
  c->f[26]=c->ps1[26]=S(c->f[26]+c->f[1]); // 803AE338
  c->r[26]=R8(c->r[31]+0x00000068u); // 803AE33C
  c->f[25]=c->ps1[25]=S(c->f[25]+c->f[0]); // 803AE340
L_803AE344:;
  {uint32_t ea=c->r[27]+0x00000000u; WF32(ea,c->f[31]);} // 803AE344
  c->r[3]=c->r[31]|c->r[31]; // 803AE348
  c->r[4]=c->r[28]|c->r[28]; // 803AE34C
  c->lr=0x803AE354u; f_8039BA04(c); // 803AE350
  {uint32_t ea=c->r[27]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 803AE354
  c->r[28]=c->r[28]+0x00000001u; // 803AE358
  cmps(c,0,(int32_t)c->r[28],3); // 803AE35C
  c->f[0]=c->ps1[0]=S(c->f[0]+c->f[1]); // 803AE360
  {uint32_t ea=c->r[27]+0x00000000u; WF32(ea,c->f[0]);} // 803AE364
  c->r[27]=c->r[27]+0x00000004u; // 803AE368
  if (crb(c,0)) { IRQCHK(c); goto L_803AE344; } // 803AE36C
  {uint32_t ea=c->r[2]+0xFFFFEF6Cu; c->f[31]=c->ps1[31]=RF32(ea);} // 803AE370
  c->r[27]=c->r[1]+0x00000028u; // 803AE374
  c->r[28]=c->r[1]+0x00000018u; // 803AE378
  c->r[29]=c->r[1]+0x00000008u; // 803AE37C
  c->r[30]=0u+0x00000000u; // 803AE380
L_803AE384:;
  c->r[3]=c->r[31]|c->r[31]; // 803AE384
  c->r[4]=c->r[30]|c->r[30]; // 803AE388
  c->lr=0x803AE390u; f_8039BA24(c); // 803AE38C
  {uint32_t ea=c->r[27]+0x00000000u; WF32(ea,c->f[1]);} // 803AE390
  c->r[3]=c->r[31]|c->r[31]; // 803AE394
  c->r[4]=c->r[30]|c->r[30]; // 803AE398
  {uint32_t ea=c->r[28]+0x00000000u; WF32(ea,c->f[31]);} // 803AE39C
  c->lr=0x803AE3A4u; f_8039BA34(c); // 803AE3A0
  {uint32_t ea=c->r[28]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 803AE3A4
  c->r[3]=c->r[31]|c->r[31]; // 803AE3A8
  {uint32_t ea=c->r[29]+0x00000000u; WF32(ea,c->f[31]);} // 803AE3AC
  c->r[4]=c->r[30]|c->r[30]; // 803AE3B0
  c->f[0]=c->ps1[0]=S(c->f[0]+c->f[1]); // 803AE3B4
  {uint32_t ea=c->r[28]+0x00000000u; WF32(ea,c->f[0]);} // 803AE3B8
  c->lr=0x803AE3C0u; f_8039BA44(c); // 803AE3BC
  {uint32_t ea=c->r[29]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 803AE3C0
  c->r[30]=c->r[30]+0x00000001u; // 803AE3C4
  cmps(c,0,(int32_t)c->r[30],4); // 803AE3C8
  c->r[27]=c->r[27]+0x00000004u; // 803AE3CC
  c->f[0]=c->ps1[0]=S(c->f[0]+c->f[1]); // 803AE3D0
  c->r[28]=c->r[28]+0x00000004u; // 803AE3D4
  {uint32_t ea=c->r[29]+0x00000000u; WF32(ea,c->f[0]);} // 803AE3D8
  c->r[29]=c->r[29]+0x00000004u; // 803AE3DC
  if (crb(c,0)) { IRQCHK(c); goto L_803AE384; } // 803AE3E0
  c->lr=0x803AE3E8u; f_8025EA10(c); // 803AE3E4
  c->r[0]=R32(c->r[31]+0x000007C0u); // 803AE3E8
  c->r[30]=c->r[3]|c->r[3]; // 803AE3EC
  cmps(c,0,(int32_t)c->r[0],0); // 803AE3F0
  if (crb(c,2)) { goto L_803AE4E4; } // 803AE3F4
  c->f[1]=c->f[30]; // 803AE3F8
  c->r[3]=c->r[0]|c->r[0]; // 803AE3FC
  c->lr=0x803AE404u; f_803B0DE8(c); // 803AE400
  c->f[1]=c->f[29]; // 803AE404
  c->r[3]=R32(c->r[31]+0x000007C0u); // 803AE408
  c->lr=0x803AE410u; f_803B0ED0(c); // 803AE40C
  c->f[1]=c->f[28]; // 803AE410
  c->r[3]=R32(c->r[31]+0x000007C0u); // 803AE414
  c->lr=0x803AE41Cu; f_803B0F30(c); // 803AE418
  c->f[1]=c->f[27]; // 803AE41C
  c->r[3]=R32(c->r[31]+0x000007C0u); // 803AE420
  c->lr=0x803AE428u; f_803B0F50(c); // 803AE424
  c->f[1]=c->f[26]; // 803AE428
  c->r[3]=R32(c->r[31]+0x000007C0u); // 803AE42C
  c->lr=0x803AE434u; f_803B0F70(c); // 803AE430
  c->r[3]=R32(c->r[31]+0x000007C0u); // 803AE434
  c->r[4]=c->r[26]|c->r[26]; // 803AE438
  c->lr=0x803AE440u; f_803B0FB4(c); // 803AE43C
  c->r[3]=R32(c->r[31]+0x000007C0u); // 803AE440
  c->r[4]=R32(c->r[31]+0x00000020u); // 803AE444
  c->lr=0x803AE44Cu; f_803B0FEC(c); // 803AE448
  {uint32_t ea=c->r[31]+0x00000024u; c->f[1]=c->ps1[1]=RF32(ea);} // 803AE44C
  c->r[3]=R32(c->r[31]+0x000007C0u); // 803AE450
  c->lr=0x803AE458u; f_803B100C(c); // 803AE454
  c->f[1]=c->f[25]; // 803AE458
  c->r[3]=R32(c->r[31]+0x000007C0u); // 803AE45C
  c->lr=0x803AE464u; f_803B1050(c); // 803AE460
  c->r[27]=c->r[1]+0x00000038u; // 803AE464
  c->r[26]=0u+0x00000000u; // 803AE468
L_803AE46C:;
  c->r[3]=R32(c->r[31]+0x000007C0u); // 803AE46C
  c->r[4]=c->r[26]|c->r[26]; // 803AE470
  {uint32_t ea=c->r[27]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 803AE474
  c->lr=0x803AE47Cu; f_803B1098(c); // 803AE478
  c->r[26]=c->r[26]+0x00000001u; // 803AE47C
  c->r[27]=c->r[27]+0x00000004u; // 803AE480
  cmps(c,0,(int32_t)c->r[26],3); // 803AE484
  if (crb(c,0)) { IRQCHK(c); goto L_803AE46C; } // 803AE488
  c->r[29]=c->r[1]+0x00000028u; // 803AE48C
  c->r[28]=c->r[1]+0x00000018u; // 803AE490
  c->r[27]=c->r[1]+0x00000008u; // 803AE494
  c->r[26]=0u+0x00000000u; // 803AE498
L_803AE49C:;
  c->r[3]=R32(c->r[31]+0x000007C0u); // 803AE49C
  c->r[4]=c->r[26]|c->r[26]; // 803AE4A0
  {uint32_t ea=c->r[29]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 803AE4A4
  c->lr=0x803AE4ACu; f_803B10E4(c); // 803AE4A8
  c->r[3]=R32(c->r[31]+0x000007C0u); // 803AE4AC
  c->r[4]=c->r[26]|c->r[26]; // 803AE4B0
  {uint32_t ea=c->r[28]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 803AE4B4
  c->lr=0x803AE4BCu; f_803B1130(c); // 803AE4B8
  c->r[3]=R32(c->r[31]+0x000007C0u); // 803AE4BC
  c->r[4]=c->r[26]|c->r[26]; // 803AE4C0
  {uint32_t ea=c->r[27]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 803AE4C4
  c->lr=0x803AE4CCu; f_803B1180(c); // 803AE4C8
  c->r[26]=c->r[26]+0x00000001u; // 803AE4CC
  c->r[28]=c->r[28]+0x00000004u; // 803AE4D0
  cmps(c,0,(int32_t)c->r[26],4); // 803AE4D4
  c->r[27]=c->r[27]+0x00000004u; // 803AE4D8
  c->r[29]=c->r[29]+0x00000004u; // 803AE4DC
  if (crb(c,0)) { IRQCHK(c); goto L_803AE49C; } // 803AE4E0
L_803AE4E4:;
  c->r[3]=c->r[30]|c->r[30]; // 803AE4E4
  c->lr=0x803AE4ECu; f_8025EA38(c); // 803AE4E8
L_803AE4EC:;
  {uint32_t ea=c->r[1]+0x000000C8u; psq_load(c,31,ea,0,0);} // 803AE4EC
  {uint32_t ea=c->r[1]+0x000000C0u; c->f[31]=RF64(ea);} // 803AE4F0
  {uint32_t ea=c->r[1]+0x000000B8u; psq_load(c,30,ea,0,0);} // 803AE4F4
  {uint32_t ea=c->r[1]+0x000000B0u; c->f[30]=RF64(ea);} // 803AE4F8
  {uint32_t ea=c->r[1]+0x000000A8u; psq_load(c,29,ea,0,0);} // 803AE4FC
  {uint32_t ea=c->r[1]+0x000000A0u; c->f[29]=RF64(ea);} // 803AE500
  {uint32_t ea=c->r[1]+0x00000098u; psq_load(c,28,ea,0,0);} // 803AE504
  {uint32_t ea=c->r[1]+0x00000090u; c->f[28]=RF64(ea);} // 803AE508
  {uint32_t ea=c->r[1]+0x00000088u; psq_load(c,27,ea,0,0);} // 803AE50C
  {uint32_t ea=c->r[1]+0x00000080u; c->f[27]=RF64(ea);} // 803AE510
  {uint32_t ea=c->r[1]+0x00000078u; psq_load(c,26,ea,0,0);} // 803AE514
  {uint32_t ea=c->r[1]+0x00000070u; c->f[26]=RF64(ea);} // 803AE518
  {uint32_t ea=c->r[1]+0x00000068u; psq_load(c,25,ea,0,0);} // 803AE51C
  c->r[11]=c->r[1]+0x00000060u; // 803AE520
  {uint32_t ea=c->r[1]+0x00000060u; c->f[25]=RF64(ea);} // 803AE524
  c->lr=0x803AE52Cu; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 803AE528
  c->r[0]=R32(c->r[1]+0x000000D4u); // 803AE52C
  c->lr=c->r[0]; // 803AE530
  c->r[1]=c->r[1]+0x000000D0u; // 803AE534
  return; // 803AE538
}

// fn_803AE53C
void f_803AE53C(Ctx* __restrict c) {
  trace_call(0x803AE53Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803AE53C
  c->r[0]=c->lr; // 803AE540
  W32(c->r[1]+0x00000024u,c->r[0]); // 803AE544
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 803AE548
  c->r[31]=c->r[3]|c->r[3]; // 803AE54C
  W32(c->r[1]+0x00000018u,c->r[30]); // 803AE550
  W32(c->r[1]+0x00000014u,c->r[29]); // 803AE554
  c->r[0]=R8(c->r[3]+0x000000BAu); // 803AE558
  cmps(c,0,(int32_t)c->r[0],0); // 803AE55C
  if (crb(c,2)) { goto L_803AE6BC; } // 803AE560
  c->r[0]=R32(c->r[3]+0x000007C0u); // 803AE564
  cmps(c,0,(int32_t)c->r[0],0); // 803AE568
  if (crb(c,2)) { goto L_803AE6BC; } // 803AE56C
  c->lr=0x803AE574u; f_80396E38(c); // 803AE570
  c->r[0]=R8(c->r[3]+0x0000001Au); // 803AE574
  cmps(c,0,(int32_t)c->r[0],0); // 803AE578
  if (crb(c,2)) { goto L_803AE5E0; } // 803AE57C
  c->r[0]=0u+0x00000001u; // 803AE580
  W8(c->r[31]+0x000000C1u,c->r[0]); // 803AE584
  c->lr=0x803AE58Cu; f_8025EA10(c); // 803AE588
  c->r[0]=R8(c->r[31]+0x000000BFu); // 803AE58C
  c->r[30]=c->r[3]|c->r[3]; // 803AE590
  c->r[29]=0u+0x00000000u; // 803AE594
  cmps(c,0,(int32_t)c->r[0],0); // 803AE598
  if (crb(c,2)) { goto L_803AE5A4; } // 803AE59C
  c->r[29]=0u+0x00000001u; // 803AE5A0
L_803AE5A4:;
  c->r[0]=R8(c->r[31]+0x000000C1u); // 803AE5A4
  cmps(c,0,(int32_t)c->r[0],0); // 803AE5A8
  if (crb(c,2)) { goto L_803AE5B4; } // 803AE5AC
  c->r[29]=0u+0x00000001u; // 803AE5B0
L_803AE5B4:;
  c->r[0]=R8(c->r[31]+0x000000C0u); // 803AE5B4
  cmpu(c,0,c->r[29],c->r[0]); // 803AE5B8
  if (crb(c,2)) { goto L_803AE5D8; } // 803AE5BC
  c->r[3]=R32(c->r[31]+0x000007C0u); // 803AE5C0
  cmps(c,0,(int32_t)c->r[3],0); // 803AE5C4
  if (crb(c,2)) { goto L_803AE5D4; } // 803AE5C8
  c->r[4]=c->r[29]|c->r[29]; // 803AE5CC
  c->lr=0x803AE5D4u; f_803B0DAC(c); // 803AE5D0
L_803AE5D4:;
  W8(c->r[31]+0x000000C0u,c->r[29]); // 803AE5D4
L_803AE5D8:;
  c->r[3]=c->r[30]|c->r[30]; // 803AE5D8
  c->lr=0x803AE5E0u; f_8025EA38(c); // 803AE5DC
L_803AE5E0:;
  c->r[0]=R8(c->r[31]+0x000000C5u); // 803AE5E0
  cmps(c,0,(int32_t)c->r[0],0); // 803AE5E4
  if (!crb(c,2)) { goto L_803AE6BC; } // 803AE5E8
  c->r[0]=R8(c->r[31]+0x000000C2u); // 803AE5EC
  cmps(c,0,(int32_t)c->r[0],0); // 803AE5F0
  if (!crb(c,2)) { goto L_803AE6BC; } // 803AE5F4
  c->r[0]=R8(c->r[31]+0x000000C1u); // 803AE5F8
  cmps(c,0,(int32_t)c->r[0],0); // 803AE5FC
  if (!crb(c,2)) { goto L_803AE6BC; } // 803AE600
  c->r[3]=R32(c->r[31]+0x000007C0u); // 803AE604
  c->lr=0x803AE60Cu; f_803B1378(c); // 803AE608
  c->r[0]=R32(c->r[31]+0x000000A0u); // 803AE60C
  c->r[29]=divwu(c->r[3],c->r[0]); // 803AE610
  goto L_803AE6B0; // 803AE614
L_803AE618:;
  c->r[0]=R8(c->r[31]+0x000000C1u); // 803AE618
  cmps(c,0,(int32_t)c->r[0],0); // 803AE61C
  if (!crb(c,2)) { goto L_803AE6A0; } // 803AE620
  c->r[3]=R32(c->r[31]+0x000000DCu); // 803AE624
  c->r[4]=R32(c->r[31]+0x00000128u); // 803AE628
  c->r[0]=c->r[3]+0xFFFFFFFEu; // 803AE62C
  cmpu(c,0,c->r[4],c->r[0]); // 803AE630
  if (crb(c,0)) { goto L_803AE6A0; } // 803AE634
  c->r[0]=0u+0x00000001u; // 803AE638
  W8(c->r[31]+0x000000BEu,c->r[0]); // 803AE63C
  W8(c->r[31]+0x000000C1u,c->r[0]); // 803AE640
  c->lr=0x803AE648u; f_8025EA10(c); // 803AE644
  c->r[0]=R8(c->r[31]+0x000000BFu); // 803AE648
  c->r[30]=c->r[3]|c->r[3]; // 803AE64C
  c->r[29]=0u+0x00000000u; // 803AE650
  cmps(c,0,(int32_t)c->r[0],0); // 803AE654
  if (crb(c,2)) { goto L_803AE660; } // 803AE658
  c->r[29]=0u+0x00000001u; // 803AE65C
L_803AE660:;
  c->r[0]=R8(c->r[31]+0x000000C1u); // 803AE660
  cmps(c,0,(int32_t)c->r[0],0); // 803AE664
  if (crb(c,2)) { goto L_803AE670; } // 803AE668
  c->r[29]=0u+0x00000001u; // 803AE66C
L_803AE670:;
  c->r[0]=R8(c->r[31]+0x000000C0u); // 803AE670
  cmpu(c,0,c->r[29],c->r[0]); // 803AE674
  if (crb(c,2)) { goto L_803AE694; } // 803AE678
  c->r[3]=R32(c->r[31]+0x000007C0u); // 803AE67C
  cmps(c,0,(int32_t)c->r[3],0); // 803AE680
  if (crb(c,2)) { goto L_803AE690; } // 803AE684
  c->r[4]=c->r[29]|c->r[29]; // 803AE688
  c->lr=0x803AE690u; f_803B0DAC(c); // 803AE68C
L_803AE690:;
  W8(c->r[31]+0x000000C0u,c->r[29]); // 803AE690
L_803AE694:;
  c->r[3]=c->r[30]|c->r[30]; // 803AE694
  c->lr=0x803AE69Cu; f_8025EA38(c); // 803AE698
  goto L_803AE6BC; // 803AE69C
L_803AE6A0:;
  c->r[3]=c->r[31]|c->r[31]; // 803AE6A0
  c->lr=0x803AE6A8u; f_803AE6D8(c); // 803AE6A4
  c->r[3]=c->r[31]|c->r[31]; // 803AE6A8
  c->lr=0x803AE6B0u; f_803AEAC8(c); // 803AE6AC
L_803AE6B0:;
  c->r[0]=R32(c->r[31]+0x000000F0u); // 803AE6B0
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[29]); // 803AE6B4
  if (!crb(c,2)) { IRQCHK(c); goto L_803AE618; } // 803AE6B8
L_803AE6BC:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 803AE6BC
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 803AE6C0
  c->r[30]=R32(c->r[1]+0x00000018u); // 803AE6C4
  c->r[29]=R32(c->r[1]+0x00000014u); // 803AE6C8
  c->lr=c->r[0]; // 803AE6CC
  c->r[1]=c->r[1]+0x00000020u; // 803AE6D0
  return; // 803AE6D4
}

// fn_803AE6D8
void f_803AE6D8(Ctx* __restrict c) {
  trace_call(0x803AE6D8u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803AE6D8
  c->r[0]=c->lr; // 803AE6DC
  W32(c->r[1]+0x00000034u,c->r[0]); // 803AE6E0
  c->r[11]=c->r[1]+0x00000030u; // 803AE6E4
  c->lr=0x803AE6ECu; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 803AE6E8
  c->r[4]=R32(c->r[3]+0x000000F4u); // 803AE6EC
  c->r[31]=c->r[3]|c->r[3]; // 803AE6F0
  c->r[0]=R32(c->r[3]+0x000000FCu); // 803AE6F4
  c->r[4]=c->r[4]+0x00000001u; // 803AE6F8
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[0]); // 803AE6FC
  W32(c->r[3]+0x000000F4u,c->r[4]); // 803AE700
  if (!crb(c,1)) { goto L_803AE7A8; } // 803AE704
  c->r[0]=R8(c->r[3]+0x00000081u); // 803AE708
  cmps(c,0,(int32_t)c->r[0],0); // 803AE70C
  if (crb(c,2)) { goto L_803AE7A8; } // 803AE710
  c->r[4]=0u+0x80000000u; // 803AE714
  c->r[5]=R32(c->r[3]+0x000000C8u); // 803AE718
  c->r[0]=c->r[4]+0xFFFFFFFFu; // 803AE71C
  c->r[4]=R32(c->r[3]+0x000000F8u); // 803AE720
  cmps(c,0,(int32_t)c->r[5],(int32_t)c->r[0]); // 803AE724
  W32(c->r[3]+0x000000F4u,c->r[4]); // 803AE728
  if (!crb(c,0)) { goto L_803AE738; } // 803AE72C
  c->r[0]=c->r[5]+0x00000001u; // 803AE730
  W32(c->r[3]+0x000000C8u,c->r[0]); // 803AE734
L_803AE738:;
  c->r[4]=R32(c->r[3]+0x000000ECu); // 803AE738
  c->r[0]=R32(c->r[3]+0x000000A0u); // 803AE73C
  c->r[29]=(uint32_t)((int32_t)c->r[4]*(int32_t)c->r[0]); // 803AE740
  c->lr=0x803AE748u; f_8025EA10(c); // 803AE744
  c->r[30]=c->r[3]|c->r[3]; // 803AE748
  c->r[27]=c->r[31]|c->r[31]; // 803AE74C
  c->r[28]=0u+0x00000000u; // 803AE750
  goto L_803AE788; // 803AE754
L_803AE758:;
  c->r[3]=R32(c->r[31]+0x000007C0u); // 803AE758
  c->r[4]=c->r[28]|c->r[28]; // 803AE75C
  c->r[5]=R32(c->r[27]+0x000007CCu); // 803AE760
  c->r[6]=0u+0x00000000u; // 803AE764
  c->lr=0x803AE76Cu; f_803B1390(c); // 803AE768
  c->r[3]=R32(c->r[31]+0x000007C0u); // 803AE76C
  c->r[4]=c->r[28]|c->r[28]; // 803AE770
  c->r[5]=R32(c->r[27]+0x000007CCu); // 803AE774
  c->r[6]=c->r[29]|c->r[29]; // 803AE778
  c->lr=0x803AE780u; f_803B1404(c); // 803AE77C
  c->r[27]=c->r[27]+0x00000038u; // 803AE780
  c->r[28]=c->r[28]+0x00000001u; // 803AE784
L_803AE788:;
  c->r[0]=R32(c->r[31]+0x000007C4u); // 803AE788
  cmps(c,0,(int32_t)c->r[28],(int32_t)c->r[0]); // 803AE78C
  if (crb(c,0)) { IRQCHK(c); goto L_803AE758; } // 803AE790
  c->r[3]=R32(c->r[31]+0x000007C0u); // 803AE794
  c->r[4]=0u+0x00000001u; // 803AE798
  c->lr=0x803AE7A0u; f_803B1478(c); // 803AE79C
  c->r[3]=c->r[30]|c->r[30]; // 803AE7A0
  c->lr=0x803AE7A8u; f_8025EA38(c); // 803AE7A4
L_803AE7A8:;
  c->r[3]=R32(c->r[31]+0x000000F0u); // 803AE7A8
  c->r[0]=R32(c->r[31]+0x000000ECu); // 803AE7AC
  c->r[3]=c->r[3]+0x00000001u; // 803AE7B0
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 803AE7B4
  W32(c->r[31]+0x000000F0u,c->r[3]); // 803AE7B8
  if (crb(c,0)) { goto L_803AE83C; } // 803AE7BC
  c->r[3]=R32(c->r[31]+0x000000E0u); // 803AE7C0
  c->r[4]=0u+0x00000000u; // 803AE7C4
  c->r[0]=R32(c->r[31]+0x000000A0u); // 803AE7C8
  W32(c->r[31]+0x000000F0u,c->r[4]); // 803AE7CC
  c->r[28]=(uint32_t)((int32_t)c->r[3]*(int32_t)c->r[0]); // 803AE7D0
  W32(c->r[31]+0x000000ECu,c->r[3]); // 803AE7D4
  c->lr=0x803AE7DCu; f_8025EA10(c); // 803AE7D8
  c->r[30]=c->r[3]|c->r[3]; // 803AE7DC
  c->r[27]=c->r[31]|c->r[31]; // 803AE7E0
  c->r[29]=0u+0x00000000u; // 803AE7E4
  goto L_803AE81C; // 803AE7E8
L_803AE7EC:;
  c->r[3]=R32(c->r[31]+0x000007C0u); // 803AE7EC
  c->r[4]=c->r[29]|c->r[29]; // 803AE7F0
  c->r[5]=R32(c->r[27]+0x000007CCu); // 803AE7F4
  c->r[6]=0u+0x00000000u; // 803AE7F8
  c->lr=0x803AE800u; f_803B1390(c); // 803AE7FC
  c->r[3]=R32(c->r[31]+0x000007C0u); // 803AE800
  c->r[4]=c->r[29]|c->r[29]; // 803AE804
  c->r[5]=R32(c->r[27]+0x000007CCu); // 803AE808
  c->r[6]=c->r[28]|c->r[28]; // 803AE80C
  c->lr=0x803AE814u; f_803B1404(c); // 803AE810
  c->r[27]=c->r[27]+0x00000038u; // 803AE814
  c->r[29]=c->r[29]+0x00000001u; // 803AE818
L_803AE81C:;
  c->r[0]=R32(c->r[31]+0x000007C4u); // 803AE81C
  cmps(c,0,(int32_t)c->r[29],(int32_t)c->r[0]); // 803AE820
  if (crb(c,0)) { IRQCHK(c); goto L_803AE7EC; } // 803AE824
  c->r[3]=R32(c->r[31]+0x000007C0u); // 803AE828
  c->r[4]=0u+0x00000001u; // 803AE82C
  c->lr=0x803AE834u; f_803B1478(c); // 803AE830
  c->r[3]=c->r[30]|c->r[30]; // 803AE834
  c->lr=0x803AE83Cu; f_8025EA38(c); // 803AE838
L_803AE83C:;
  c->r[3]=R32(c->r[31]+0x000000ECu); // 803AE83C
  c->r[4]=R32(c->r[31]+0x000000F0u); // 803AE840
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 803AE844
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[0]); // 803AE848
  if (!crb(c,2)) { goto L_803AE8E4; } // 803AE84C
  c->r[3]=R32(c->r[31]+0x000007C0u); // 803AE850
  c->lr=0x803AE858u; f_803B0DCC(c); // 803AE854
  cmps(c,0,(int32_t)c->r[3],0); // 803AE858
  if (!crb(c,2)) { goto L_803AE8E4; } // 803AE85C
  c->r[0]=R8(c->r[31]+0x000000C3u); // 803AE860
  cmps(c,0,(int32_t)c->r[0],0); // 803AE864
  if (!crb(c,2)) { goto L_803AE8D8; } // 803AE868
  c->r[0]=R8(c->r[31]+0x000000C4u); // 803AE86C
  cmps(c,0,(int32_t)c->r[0],0); // 803AE870
  if (crb(c,2)) { goto L_803AE8D8; } // 803AE874
  c->lr=0x803AE87Cu; f_8025EA10(c); // 803AE878
  c->r[30]=c->r[3]|c->r[3]; // 803AE87C
  c->r[28]=c->r[31]|c->r[31]; // 803AE880
  c->r[27]=0u+0x00000000u; // 803AE884
  c->r[29]=0u+0x00000000u; // 803AE888
  goto L_803AE8B8; // 803AE88C
L_803AE890:;
  c->r[0]=R16(c->r[28]+0x0000083Cu); // 803AE890
  c->r[4]=c->r[27]|c->r[27]; // 803AE894
  c->r[5]=c->r[1]+0x00000008u; // 803AE898
  W16(c->r[1]+0x00000008u,c->r[0]); // 803AE89C
  W16(c->r[1]+0x0000000Au,c->r[29]); // 803AE8A0
  W16(c->r[1]+0x0000000Cu,c->r[29]); // 803AE8A4
  c->r[3]=R32(c->r[31]+0x000007C0u); // 803AE8A8
  c->lr=0x803AE8B0u; f_803B12FC(c); // 803AE8AC
  c->r[28]=c->r[28]+0x00000002u; // 803AE8B0
  c->r[27]=c->r[27]+0x00000001u; // 803AE8B4
L_803AE8B8:;
  c->r[0]=R32(c->r[31]+0x000007C4u); // 803AE8B8
  cmps(c,0,(int32_t)c->r[27],(int32_t)c->r[0]); // 803AE8BC
  if (crb(c,0)) { IRQCHK(c); goto L_803AE890; } // 803AE8C0
  c->r[3]=R32(c->r[31]+0x000007C0u); // 803AE8C4
  c->r[4]=0u+0x00000001u; // 803AE8C8
  c->lr=0x803AE8D0u; f_803B1574(c); // 803AE8CC
  c->r[3]=c->r[30]|c->r[30]; // 803AE8D0
  c->lr=0x803AE8D8u; f_8025EA38(c); // 803AE8D4
L_803AE8D8:;
  c->r[0]=0u+0x00000000u; // 803AE8D8
  W8(c->r[31]+0x000000C4u,c->r[0]); // 803AE8DC
  W8(c->r[31]+0x000000C3u,c->r[0]); // 803AE8E0
L_803AE8E4:;
  c->r[3]=R32(c->r[31]+0x000000FCu); // 803AE8E4
  c->r[4]=R32(c->r[31]+0x000000F4u); // 803AE8E8
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 803AE8EC
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[0]); // 803AE8F0
  if (!crb(c,2)) { goto L_803AE908; } // 803AE8F4
  c->r[4]=R32(c->r[31]+0x000000F0u); // 803AE8F8
  c->r[3]=c->r[31]|c->r[31]; // 803AE8FC
  c->r[4]=c->r[4]+0x00000001u; // 803AE900
  c->lr=0x803AE908u; f_803AE920(c); // 803AE904
L_803AE908:;
  c->r[11]=c->r[1]+0x00000030u; // 803AE908
  c->lr=0x803AE910u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 803AE90C
  c->r[0]=R32(c->r[1]+0x00000034u); // 803AE910
  c->lr=c->r[0]; // 803AE914
  c->r[1]=c->r[1]+0x00000030u; // 803AE918
  return; // 803AE91C
}

// fn_803AE920
void f_803AE920(Ctx* __restrict c) {
  trace_call(0x803AE920u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803AE920
  c->r[0]=c->lr; // 803AE924
  W32(c->r[1]+0x00000034u,c->r[0]); // 803AE928
  c->r[11]=c->r[1]+0x00000030u; // 803AE92C
  c->lr=0x803AE934u; { W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 803AE930
  c->r[0]=R8(c->r[3]+0x00000081u); // 803AE934
  c->r[30]=c->r[3]|c->r[3]; // 803AE938
  c->r[31]=c->r[4]|c->r[4]; // 803AE93C
  cmps(c,0,(int32_t)c->r[0],0); // 803AE940
  if (crb(c,2)) { goto L_803AEA58; } // 803AE944
  c->r[0]=R32(c->r[3]+0x000000ECu); // 803AE948
  c->r[24]=c->r[4]+0x00000001u; // 803AE94C
  cmps(c,0,(int32_t)c->r[24],(int32_t)c->r[0]); // 803AE950
  if (crb(c,0)) { goto L_803AE95C; } // 803AE954
  c->r[24]=c->r[24]-c->r[0]; // 803AE958
L_803AE95C:;
  c->lr=0x803AE960u; f_8025EA10(c); // 803AE95C
  c->r[4]=R32(c->r[30]+0x000000A0u); // 803AE960
  c->r[29]=c->r[3]|c->r[3]; // 803AE964
  c->r[3]=R32(c->r[30]+0x000000A8u); // 803AE968
  c->r[0]=(uint32_t)((int32_t)c->r[31]*(int32_t)c->r[4]); // 803AE96C
  c->r[27]=(uint32_t)((int32_t)c->r[24]*(int32_t)c->r[4]); // 803AE970
  c->r[26]=c->r[3]+c->r[0]; // 803AE974
  c->lr=0x803AE97Cu; f_8025EA10(c); // 803AE978
  c->r[28]=c->r[3]|c->r[3]; // 803AE97C
  c->r[24]=c->r[30]|c->r[30]; // 803AE980
  c->r[25]=0u+0x00000000u; // 803AE984
  goto L_803AE9BC; // 803AE988
L_803AE98C:;
  c->r[3]=R32(c->r[30]+0x000007C0u); // 803AE98C
  c->r[4]=c->r[25]|c->r[25]; // 803AE990
  c->r[5]=R32(c->r[24]+0x000007CCu); // 803AE994
  c->r[6]=c->r[27]|c->r[27]; // 803AE998
  c->lr=0x803AE9A0u; f_803B1390(c); // 803AE99C
  c->r[3]=R32(c->r[30]+0x000007C0u); // 803AE9A0
  c->r[4]=c->r[25]|c->r[25]; // 803AE9A4
  c->r[5]=R32(c->r[24]+0x000007CCu); // 803AE9A8
  c->r[6]=c->r[26]|c->r[26]; // 803AE9AC
  c->lr=0x803AE9B4u; f_803B1404(c); // 803AE9B0
  c->r[24]=c->r[24]+0x00000038u; // 803AE9B4
  c->r[25]=c->r[25]+0x00000001u; // 803AE9B8
L_803AE9BC:;
  c->r[0]=R32(c->r[30]+0x000007C4u); // 803AE9BC
  cmps(c,0,(int32_t)c->r[25],(int32_t)c->r[0]); // 803AE9C0
  if (crb(c,0)) { IRQCHK(c); goto L_803AE98C; } // 803AE9C4
  c->r[3]=R32(c->r[30]+0x000007C0u); // 803AE9C8
  c->r[4]=0u+0x00000001u; // 803AE9CC
  c->lr=0x803AE9D4u; f_803B1478(c); // 803AE9D0
  c->r[3]=c->r[28]|c->r[28]; // 803AE9D4
  c->lr=0x803AE9DCu; f_8025EA38(c); // 803AE9D8
  c->r[0]=R8(c->r[30]+0x00000080u); // 803AE9DC
  cmpu(c,0,c->r[0],0x00000002u); // 803AE9E0
  if (!crb(c,2)) { goto L_803AEA4C; } // 803AE9E4
  c->r[3]=R32(c->r[30]+0x000007C0u); // 803AE9E8
  c->lr=0x803AE9F0u; f_803B0DCC(c); // 803AE9EC
  cmps(c,0,(int32_t)c->r[3],0); // 803AE9F0
  if (!crb(c,2)) { goto L_803AEA34; } // 803AE9F4
  c->r[3]=R32(c->r[30]+0x000007C0u); // 803AE9F8
  c->r[4]=0u+0x00000000u; // 803AE9FC
  c->lr=0x803AEA04u; f_803B1574(c); // 803AEA00
  c->r[25]=c->r[30]+0x000007FCu; // 803AEA04
  c->r[24]=0u+0x00000000u; // 803AEA08
  goto L_803AEA28; // 803AEA0C
L_803AEA10:;
  c->r[3]=R32(c->r[30]+0x000007C0u); // 803AEA10
  c->r[4]=c->r[24]|c->r[24]; // 803AEA14
  c->r[5]=c->r[25]|c->r[25]; // 803AEA18
  c->lr=0x803AEA20u; f_803B12FC(c); // 803AEA1C
  c->r[25]=c->r[25]+0x00000038u; // 803AEA20
  c->r[24]=c->r[24]+0x00000001u; // 803AEA24
L_803AEA28:;
  c->r[0]=R32(c->r[30]+0x000007C4u); // 803AEA28
  cmps(c,0,(int32_t)c->r[24],(int32_t)c->r[0]); // 803AEA2C
  if (crb(c,0)) { IRQCHK(c); goto L_803AEA10; } // 803AEA30
L_803AEA34:;
  c->r[3]=R32(c->r[30]+0x000000ECu); // 803AEA34
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 803AEA38
  cmps(c,0,(int32_t)c->r[31],(int32_t)c->r[0]); // 803AEA3C
  if (!crb(c,2)) { goto L_803AEA4C; } // 803AEA40
  c->r[0]=0u+0x00000001u; // 803AEA44
  W8(c->r[30]+0x000000C3u,c->r[0]); // 803AEA48
L_803AEA4C:;
  c->r[3]=c->r[29]|c->r[29]; // 803AEA4C
  c->lr=0x803AEA54u; f_8025EA38(c); // 803AEA50
  goto L_803AEAB0; // 803AEA54
L_803AEA58:;
  c->lr=0x803AEA5Cu; f_8025EA10(c); // 803AEA58
  c->r[28]=c->r[3]|c->r[3]; // 803AEA5C
  c->r[26]=c->r[30]|c->r[30]; // 803AEA60
  c->r[25]=0u+0x00000000u; // 803AEA64
  goto L_803AEA94; // 803AEA68
L_803AEA6C:;
  c->r[0]=R32(c->r[30]+0x000000A0u); // 803AEA6C
  c->r[4]=c->r[25]|c->r[25]; // 803AEA70
  c->r[6]=R32(c->r[30]+0x000000A8u); // 803AEA74
  c->r[0]=(uint32_t)((int32_t)c->r[31]*(int32_t)c->r[0]); // 803AEA78
  c->r[3]=R32(c->r[30]+0x000007C0u); // 803AEA7C
  c->r[5]=R32(c->r[26]+0x000007CCu); // 803AEA80
  c->r[6]=c->r[6]+c->r[0]; // 803AEA84
  c->lr=0x803AEA8Cu; f_803B1500(c); // 803AEA88
  c->r[26]=c->r[26]+0x00000038u; // 803AEA8C
  c->r[25]=c->r[25]+0x00000001u; // 803AEA90
L_803AEA94:;
  c->r[0]=R32(c->r[30]+0x000007C4u); // 803AEA94
  cmps(c,0,(int32_t)c->r[25],(int32_t)c->r[0]); // 803AEA98
  if (crb(c,0)) { IRQCHK(c); goto L_803AEA6C; } // 803AEA9C
  c->r[3]=c->r[28]|c->r[28]; // 803AEAA0
  c->lr=0x803AEAA8u; f_8025EA38(c); // 803AEAA4
  c->r[0]=0u+0x00000001u; // 803AEAA8
  W8(c->r[30]+0x000000C5u,c->r[0]); // 803AEAAC
L_803AEAB0:;
  c->r[11]=c->r[1]+0x00000030u; // 803AEAB0
  c->lr=0x803AEAB8u; { c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 803AEAB4
  c->r[0]=R32(c->r[1]+0x00000034u); // 803AEAB8
  c->lr=c->r[0]; // 803AEABC
  c->r[1]=c->r[1]+0x00000030u; // 803AEAC0
  return; // 803AEAC4
}

// fn_803AEAC8
void f_803AEAC8(Ctx* __restrict c) {
  trace_call(0x803AEAC8u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803AEAC8
  c->r[0]=c->lr; // 803AEACC
  W32(c->r[1]+0x00000034u,c->r[0]); // 803AEAD0
  c->r[11]=c->r[1]+0x00000030u; // 803AEAD4
  c->lr=0x803AEADCu; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 803AEAD8
  c->r[0]=R8(c->r[3]+0x000000C6u); // 803AEADC
  c->r[29]=c->r[3]|c->r[3]; // 803AEAE0
  cmps(c,0,(int32_t)c->r[0],0); // 803AEAE4
  if (!crb(c,2)) { goto L_803AECD8; } // 803AEAE8
  c->r[4]=R32(c->r[3]+0x00000098u); // 803AEAEC
  c->r[9]=R32(c->r[3]+0x000000E8u); // 803AEAF0
  c->r[0]=c->r[4]+0xFFFFFFFFu; // 803AEAF4
  cmps(c,0,(int32_t)c->r[9],(int32_t)c->r[0]); // 803AEAF8
  if (!crb(c,0)) { goto L_803AEB08; } // 803AEAFC
  c->r[31]=R32(c->r[3]+0x0000009Cu); // 803AEB00
  goto L_803AEB0C; // 803AEB04
L_803AEB08:;
  c->r[31]=R32(c->r[3]+0x000000ACu); // 803AEB08
L_803AEB0C:;
  c->r[4]=R32(c->r[3]+0x0000009Cu); // 803AEB0C
  c->r[5]=c->r[31]+0x0000001Fu; // 803AEB10
  c->r[0]=R8(c->r[3]+0x00000082u); // 803AEB14
  c->r[6]=rotl(c->r[5],0)&0xFFFFFFE0u; // 803AEB18
  c->r[8]=R16(c->r[3]+0x00000088u); // 803AEB1C
  c->r[30]=0u+0x00000000u; // 803AEB20
  c->r[4]=(uint32_t)((int32_t)c->r[4]*(int32_t)c->r[0]); // 803AEB24
  c->r[0]=R32(c->r[3]+0x000000E4u); // 803AEB28
  c->r[7]=R32(c->r[3]+0x000007C4u); // 803AEB2C
  cmps(c,0,(int32_t)c->r[0],0); // 803AEB30
  c->r[5]=R32(c->r[3]+0x00000094u); // 803AEB34
  c->r[0]=c->r[8]+c->r[4]; // 803AEB38
  c->r[4]=(uint32_t)((int32_t)c->r[7]*(int32_t)c->r[6]); // 803AEB3C
  c->r[0]=(uint32_t)((int32_t)c->r[9]*(int32_t)c->r[0]); // 803AEB40
  c->r[27]=c->r[8]+c->r[4]; // 803AEB44
  c->r[26]=c->r[5]+c->r[0]; // 803AEB48
  if (!crb(c,2)) { goto L_803AEB60; } // 803AEB4C
  c->r[0]=R8(c->r[3]+0x00000080u); // 803AEB50
  cmpu(c,0,c->r[0],0x00000002u); // 803AEB54
  if (!crb(c,2)) { goto L_803AEB60; } // 803AEB58
  c->r[30]=0u+0x00000001u; // 803AEB5C
L_803AEB60:;
  c->r[3]=c->r[3]+0x00000134u; // 803AEB60
  c->lr=0x803AEB68u; f_803A0A40(c); // 803AEB64
  cmps(c,0,(int32_t)c->r[3],0); // 803AEB68
  if (!crb(c,2)) { goto L_803AEB78; } // 803AEB6C
  c->r[28]=0u+0x00000000u; // 803AEB70
  goto L_803AEBC4; // 803AEB74
L_803AEB78:;
  c->r[28]=c->r[3]|c->r[3]; // 803AEB78
  if (crb(c,2)) { goto L_803AEBC4; } // 803AEB7C
  c->r[5]=0u+0x00000000u; // 803AEB80
  c->r[4]=0u+0x80430000u; // 803AEB84
  W32(c->r[3]+0x00000004u,c->r[5]); // 803AEB88
  c->r[4]=c->r[4]+0x000075A8u; // 803AEB8C
  c->r[0]=0u+0xFFFFFFFFu; // 803AEB90
  W32(c->r[3]+0x00000008u,c->r[5]); // 803AEB94
  W8(c->r[3]+0x0000000Cu,c->r[5]); // 803AEB98
  W32(c->r[3]+0x00000000u,c->r[4]); // 803AEB9C
  W32(c->r[3]+0x00000010u,c->r[5]); // 803AEBA0
  W32(c->r[3]+0x00000014u,c->r[5]); // 803AEBA4
  W32(c->r[3]+0x00000018u,c->r[5]); // 803AEBA8
  W32(c->r[3]+0x0000001Cu,c->r[5]); // 803AEBAC
  W32(c->r[3]+0x00000020u,c->r[5]); // 803AEBB0
  W32(c->r[3]+0x00000024u,c->r[0]); // 803AEBB4
  W8(c->r[3]+0x00000028u,c->r[5]); // 803AEBB8
  W32(c->r[3]+0x0000002Cu,c->r[5]); // 803AEBBC
  W32(c->r[3]+0x00000030u,c->r[5]); // 803AEBC0
L_803AEBC4:;
  W32(c->r[28]+0x00000010u,c->r[29]); // 803AEBC4
  c->r[0]=R32(c->r[29]+0x000007BCu); // 803AEBC8
  W32(c->r[28]+0x00000014u,c->r[0]); // 803AEBCC
  W32(c->r[28]+0x00000018u,c->r[27]); // 803AEBD0
  W32(c->r[28]+0x0000001Cu,c->r[26]); // 803AEBD4
  W32(c->r[28]+0x00000020u,c->r[31]); // 803AEBD8
  c->r[0]=R32(c->r[29]+0x000000E4u); // 803AEBDC
  W32(c->r[28]+0x00000024u,c->r[0]); // 803AEBE0
  W8(c->r[28]+0x00000028u,c->r[30]); // 803AEBE4
  c->lr=0x803AEBECu; f_8025EA10(c); // 803AEBE8
  c->r[0]=c->r[29]+0x0000012Cu; // 803AEBEC
  c->r[30]=c->r[3]|c->r[3]; // 803AEBF0
  W32(c->r[1]+0x00000008u,c->r[0]); // 803AEBF4
  c->r[3]=c->r[29]+0x00000128u; // 803AEBF8
  c->r[4]=c->r[1]+0x00000008u; // 803AEBFC
  c->r[5]=c->r[28]+0x0000002Cu; // 803AEC00
  c->lr=0x803AEC08u; f_803B50B4(c); // 803AEC04
  c->r[0]=R8(c->r[29]+0x000000BAu); // 803AEC08
  c->r[31]=0u+0x00000001u; // 803AEC0C
  cmps(c,0,(int32_t)c->r[0],0); // 803AEC10
  if (crb(c,2)) { goto L_803AEC1C; } // 803AEC14
  c->r[31]=0u+0x00000002u; // 803AEC18
L_803AEC1C:;
  c->lr=0x803AEC20u; f_803AF6EC(c); // 803AEC1C
  c->r[4]=c->r[28]|c->r[28]; // 803AEC20
  c->r[5]=c->r[31]|c->r[31]; // 803AEC24
  c->lr=0x803AEC2Cu; f_803AF864(c); // 803AEC28
  c->r[3]=R32(c->r[29]+0x000000E8u); // 803AEC2C
  c->r[0]=R32(c->r[29]+0x000000FCu); // 803AEC30
  c->r[3]=c->r[3]+0x00000001u; // 803AEC34
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 803AEC38
  W32(c->r[29]+0x000000E8u,c->r[3]); // 803AEC3C
  if (!crb(c,1)) { goto L_803AEC70; } // 803AEC40
  c->r[0]=R8(c->r[29]+0x00000081u); // 803AEC44
  cmps(c,0,(int32_t)c->r[0],0); // 803AEC48
  if (crb(c,2)) { goto L_803AEC5C; } // 803AEC4C
  c->r[0]=R32(c->r[29]+0x000000F8u); // 803AEC50
  W32(c->r[29]+0x000000E8u,c->r[0]); // 803AEC54
  goto L_803AEC70; // 803AEC58
L_803AEC5C:;
  c->r[0]=0u+0x00000001u; // 803AEC5C
  c->r[3]=c->r[30]|c->r[30]; // 803AEC60
  W8(c->r[29]+0x000000C6u,c->r[0]); // 803AEC64
  c->lr=0x803AEC6Cu; f_8025EA38(c); // 803AEC68
  goto L_803AECD8; // 803AEC6C
L_803AEC70:;
  c->r[3]=R32(c->r[29]+0x000000E4u); // 803AEC70
  c->r[0]=R32(c->r[29]+0x000000E0u); // 803AEC74
  c->r[3]=c->r[3]+0x00000001u; // 803AEC78
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 803AEC7C
  W32(c->r[29]+0x000000E4u,c->r[3]); // 803AEC80
  if (crb(c,0)) { goto L_803AECD0; } // 803AEC84
  c->r[5]=R32(c->r[29]+0x000000FCu); // 803AEC88
  c->r[4]=0u+0x00000000u; // 803AEC8C
  c->r[3]=R32(c->r[29]+0x000000E8u); // 803AEC90
  c->r[6]=R32(c->r[29]+0x000000DCu); // 803AEC94
  c->r[0]=R32(c->r[29]+0x000000F8u); // 803AEC98
  c->r[3]=c->r[5]-c->r[3]; // 803AEC9C
  W32(c->r[29]+0x000000E4u,c->r[4]); // 803AECA0
  c->r[4]=c->r[3]+0x00000001u; // 803AECA4
  c->r[7]=c->r[6]+0x00000001u; // 803AECA8
  c->r[3]=c->r[5]-c->r[0]; // 803AECAC
  c->r[4]=c->r[7]-c->r[4]; // 803AECB0
  c->r[3]=c->r[3]+0x00000001u; // 803AECB4
  c->r[0]=divw((int32_t)c->r[4],(int32_t)c->r[3]); // 803AECB8
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)c->r[3]); // 803AECBC
  c->r[0]=c->r[4]-c->r[0]; cr0(c,c->r[0]); // 803AECC0
  if (!crb(c,2)) { goto L_803AECCC; } // 803AECC4
  c->r[6]=c->r[7]|c->r[7]; // 803AECC8
L_803AECCC:;
  W32(c->r[29]+0x000000E0u,c->r[6]); // 803AECCC
L_803AECD0:;
  c->r[3]=c->r[30]|c->r[30]; // 803AECD0
  c->lr=0x803AECD8u; f_8025EA38(c); // 803AECD4
L_803AECD8:;
  c->r[11]=c->r[1]+0x00000030u; // 803AECD8
  c->lr=0x803AECE0u; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 803AECDC
  c->r[0]=R32(c->r[1]+0x00000034u); // 803AECE0
  c->lr=c->r[0]; // 803AECE4
  c->r[1]=c->r[1]+0x00000030u; // 803AECE8
  return; // 803AECEC
}

// fn_803AECF0
void f_803AECF0(Ctx* __restrict c) {
  trace_call(0x803AECF0u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803AECF0
  c->r[0]=c->lr; // 803AECF4
  W32(c->r[1]+0x00000024u,c->r[0]); // 803AECF8
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 803AECFC
  c->r[31]=c->r[5]|c->r[5]; // 803AED00
  W32(c->r[1]+0x00000018u,c->r[30]); // 803AED04
  c->r[30]=c->r[4]|c->r[4]; // 803AED08
  W32(c->r[1]+0x00000014u,c->r[29]); // 803AED0C
  c->r[29]=c->r[3]|c->r[3]; // 803AED10
  W32(c->r[1]+0x00000010u,c->r[28]); // 803AED14
  c->r[28]=c->r[6]|c->r[6]; // 803AED18
  c->r[0]=R32(c->r[3]+0x000000A0u); // 803AED1C
  cmps(c,0,(int32_t)c->r[0],0); // 803AED20
  if (!crb(c,2)) { goto L_803AED30; } // 803AED24
  c->r[3]=0u+0x00000000u; // 803AED28
  goto L_803AEDE8; // 803AED2C
L_803AED30:;
  c->r[0]=R32(c->r[3]+0x00000100u); // 803AED30
  cmps(c,0,(int32_t)c->r[0],0); // 803AED34
  if (!crb(c,2)) { goto L_803AED44; } // 803AED38
  c->r[4]=R32(c->r[3]+0x00000104u); // 803AED3C
  goto L_803AED68; // 803AED40
L_803AED44:;
  cmps(c,0,(int32_t)c->r[0],1); // 803AED44
  if (!crb(c,2)) { goto L_803AED68; } // 803AED48
  c->r[7]=R32(c->r[3]+0x00000104u); // 803AED4C
  c->r[6]=0u+0x000003E8u; // 803AED50
  c->r[0]=R32(c->r[3]+0x00000084u); // 803AED54
  c->r[5]=0u+0x00000000u; // 803AED58
  c->r[4]=(uint32_t)((int32_t)c->r[7]*(int32_t)c->r[0]); // 803AED5C
  c->r[3]=(uint32_t)(((int64_t)(int32_t)c->r[7]*(int64_t)(int32_t)c->r[0])>>32); // 803AED60
  c->lr=0x803AED68u; f_80289F44(c); // 803AED64
L_803AED68:;
  c->r[0]=0u+0x00000000u; // 803AED68
  W32(c->r[28]+0x00000000u,c->r[0]); // 803AED6C
  c->r[3]=R32(c->r[29]+0x00000090u); // 803AED70
  cmpu(c,0,c->r[4],c->r[3]); // 803AED74
  if (crb(c,0)) { goto L_803AEDB8; } // 803AED78
  c->r[0]=R8(c->r[29]+0x00000081u); // 803AED7C
  cmps(c,0,(int32_t)c->r[0],0); // 803AED80
  if (crb(c,2)) { goto L_803AEDB0; } // 803AED84
  c->r[5]=R32(c->r[29]+0x0000008Cu); // 803AED88
  c->r[4]=c->r[4]-c->r[3]; // 803AED8C
  c->r[0]=c->r[3]-c->r[5]; // 803AED90
  c->r[3]=divw((int32_t)c->r[4],(int32_t)c->r[0]); // 803AED94
  c->r[0]=(uint32_t)((int32_t)c->r[3]*(int32_t)c->r[0]); // 803AED98
  c->r[3]=c->r[3]+0x00000001u; // 803AED9C
  W32(c->r[28]+0x00000000u,c->r[3]); // 803AEDA0
  c->r[0]=c->r[4]-c->r[0]; // 803AEDA4
  c->r[4]=c->r[5]+c->r[0]; // 803AEDA8
  goto L_803AEDB8; // 803AEDAC
L_803AEDB0:;
  c->r[3]=0u+0x00000000u; // 803AEDB0
  goto L_803AEDE8; // 803AEDB4
L_803AEDB8:;
  c->r[0]=R32(c->r[29]+0x000000A0u); // 803AEDB8
  c->r[0]=divw((int32_t)c->r[4],(int32_t)c->r[0]); // 803AEDBC
  W32(c->r[30]+0x00000000u,c->r[0]); // 803AEDC0
  c->r[0]=R8(c->r[29]+0x00000080u); // 803AEDC4
  cmpu(c,0,c->r[0],0x00000002u); // 803AEDC8
  if (!crb(c,2)) { goto L_803AEDE4; } // 803AEDCC
  c->r[3]=R32(c->r[29]+0x000000A0u); // 803AEDD0
  c->r[0]=divwu(c->r[4],c->r[3]); // 803AEDD4
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)c->r[3]); // 803AEDD8
  c->r[0]=c->r[4]-c->r[0]; // 803AEDDC
  W32(c->r[31]+0x00000000u,c->r[0]); // 803AEDE0
L_803AEDE4:;
  c->r[3]=0u+0x00000001u; // 803AEDE4
L_803AEDE8:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 803AEDE8
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 803AEDEC
  c->r[30]=R32(c->r[1]+0x00000018u); // 803AEDF0
  c->r[29]=R32(c->r[1]+0x00000014u); // 803AEDF4
  c->r[28]=R32(c->r[1]+0x00000010u); // 803AEDF8
  c->lr=c->r[0]; // 803AEDFC
  c->r[1]=c->r[1]+0x00000020u; // 803AEE00
  return; // 803AEE04
}

// VoiceCallbackFunc__Q44nw4r3snd6detail10StrmPlayerFPQ44nw4r3snd6detail5VoiceQ54nw4r3snd6detail5Voice19VoiceCallbackStatusPv
void f_803AEE08(Ctx* __restrict c) {
  trace_call(0x803AEE08u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803AEE08
  c->r[0]=c->lr; // 803AEE0C
  W32(c->r[1]+0x00000024u,c->r[0]); // 803AEE10
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 803AEE14
  W32(c->r[1]+0x00000018u,c->r[30]); // 803AEE18
  c->r[30]=c->r[5]|c->r[5]; // 803AEE1C
  W32(c->r[1]+0x00000014u,c->r[29]); // 803AEE20
  c->r[29]=c->r[4]|c->r[4]; // 803AEE24
  W32(c->r[1]+0x00000010u,c->r[28]); // 803AEE28
  c->r[28]=c->r[3]|c->r[3]; // 803AEE2C
  c->lr=0x803AEE34u; f_8025EA10(c); // 803AEE30
  cmps(c,0,(int32_t)c->r[29],2); // 803AEE34
  c->r[31]=c->r[3]|c->r[3]; // 803AEE38
  if (!crb(c,0)) { goto L_803AEE4C; } // 803AEE3C
  cmps(c,0,(int32_t)c->r[29],0); // 803AEE40
  if (!crb(c,0)) { goto L_803AEE58; } // 803AEE44
  goto L_803AEE78; // 803AEE48
L_803AEE4C:;
  cmps(c,0,(int32_t)c->r[29],4); // 803AEE4C
  if (!crb(c,0)) { goto L_803AEE78; } // 803AEE50
  goto L_803AEE6C; // 803AEE54
L_803AEE58:;
  c->r[3]=c->r[28]|c->r[28]; // 803AEE58
  c->lr=0x803AEE60u; f_803B0940(c); // 803AEE5C
  c->r[0]=0u+0x00000000u; // 803AEE60
  W32(c->r[30]+0x000007C0u,c->r[0]); // 803AEE64
  goto L_803AEE84; // 803AEE68
L_803AEE6C:;
  c->r[0]=0u+0x00000000u; // 803AEE6C
  W32(c->r[30]+0x000007C0u,c->r[0]); // 803AEE70
  goto L_803AEE84; // 803AEE74
L_803AEE78:;
  c->r[3]=c->r[31]|c->r[31]; // 803AEE78
  c->lr=0x803AEE80u; f_8025EA38(c); // 803AEE7C
  goto L_803AEE8C; // 803AEE80
L_803AEE84:;
  c->r[3]=c->r[31]|c->r[31]; // 803AEE84
  c->lr=0x803AEE8Cu; f_8025EA38(c); // 803AEE88
L_803AEE8C:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 803AEE8C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 803AEE90
  c->r[30]=R32(c->r[1]+0x00000018u); // 803AEE94
  c->r[29]=R32(c->r[1]+0x00000014u); // 803AEE98
  c->r[28]=R32(c->r[1]+0x00000010u); // 803AEE9C
  c->lr=c->r[0]; // 803AEEA0
  c->r[1]=c->r[1]+0x00000020u; // 803AEEA4
  return; // 803AEEA8
}

// Execute__Q54nw4r3snd6detail10StrmPlayer18StrmHeaderLoadTaskFv
void f_803AEEAC(Ctx* __restrict c) {
  trace_call(0x803AEEACu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803AEEAC
  c->r[0]=c->lr; // 803AEEB0
  W32(c->r[1]+0x00000014u,c->r[0]); // 803AEEB4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 803AEEB8
  c->r[31]=c->r[3]|c->r[3]; // 803AEEBC
  c->r[3]=R32(c->r[3]+0x00000010u); // 803AEEC0
  c->r[4]=R32(c->r[31]+0x00000014u); // 803AEEC4
  c->r[5]=R32(c->r[31]+0x00000018u); // 803AEEC8
  c->r[6]=R32(c->r[31]+0x0000001Cu); // 803AEECC
  c->lr=0x803AEED4u; f_803AD7F4(c); // 803AEED0
  cmps(c,0,(int32_t)c->r[3],0); // 803AEED4
  if (!crb(c,2)) { goto L_803AEEE8; } // 803AEED8
  c->r[3]=R32(c->r[31]+0x00000010u); // 803AEEDC
  c->r[0]=0u+0x00000001u; // 803AEEE0
  W8(c->r[3]+0x000000BCu,c->r[0]); // 803AEEE4
L_803AEEE8:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 803AEEE8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 803AEEEC
  c->lr=c->r[0]; // 803AEEF0
  c->r[1]=c->r[1]+0x00000010u; // 803AEEF4
  return; // 803AEEF8
}

// fn_803AEEFC
void f_803AEEFC(Ctx* __restrict c) {
  trace_call(0x803AEEFCu);
  return; // 803AEEFC
}

// fn_803AEF00
void f_803AEF00(Ctx* __restrict c) {
  trace_call(0x803AEF00u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803AEF00
  c->r[0]=c->lr; // 803AEF04
  W32(c->r[1]+0x00000014u,c->r[0]); // 803AEF08
  c->r[0]=0u+0x00000001u; // 803AEF0C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 803AEF10
  c->r[31]=c->r[3]|c->r[3]; // 803AEF14
  c->r[4]=R32(c->r[3]+0x00000010u); // 803AEF18
  W8(c->r[4]+0x000000BDu,c->r[0]); // 803AEF1C
  c->r[3]=R32(c->r[3]+0x00000014u); // 803AEF20
  cmps(c,0,(int32_t)c->r[3],0); // 803AEF24
  if (crb(c,2)) { goto L_803AEF94; } // 803AEF28
  c->r[12]=R32(c->r[3]+0x00000000u); // 803AEF2C
  c->r[12]=R32(c->r[12]+0x00000054u); // 803AEF30
  c->ctr=c->r[12]; // 803AEF34
  if (true) { c->lr=0x803AEF3Cu; dispatch(c,c->ctr); } // 803AEF38
  cmps(c,0,(int32_t)c->r[3],0); // 803AEF3C
  if (crb(c,2)) { goto L_803AEF94; } // 803AEF40
  c->r[3]=R32(c->r[31]+0x00000014u); // 803AEF44
  c->r[12]=R32(c->r[3]+0x00000000u); // 803AEF48
  c->r[12]=R32(c->r[12]+0x00000028u); // 803AEF4C
  c->ctr=c->r[12]; // 803AEF50
  if (true) { c->lr=0x803AEF58u; dispatch(c,c->ctr); } // 803AEF54
  cmps(c,0,(int32_t)c->r[3],0); // 803AEF58
  if (crb(c,2)) { goto L_803AEF80; } // 803AEF5C
  c->r[3]=R32(c->r[31]+0x00000014u); // 803AEF60
  c->r[4]=0u+0x00000000u; // 803AEF64
  c->r[5]=0u+0x00000000u; // 803AEF68
  c->r[12]=R32(c->r[3]+0x00000000u); // 803AEF6C
  c->r[12]=R32(c->r[12]+0x0000004Cu); // 803AEF70
  c->ctr=c->r[12]; // 803AEF74
  if (true) { c->lr=0x803AEF7Cu; dispatch(c,c->ctr); } // 803AEF78
  goto L_803AEF94; // 803AEF7C
L_803AEF80:;
  c->r[3]=R32(c->r[31]+0x00000014u); // 803AEF80
  c->r[12]=R32(c->r[3]+0x00000000u); // 803AEF84
  c->r[12]=R32(c->r[12]+0x00000048u); // 803AEF88
  c->ctr=c->r[12]; // 803AEF8C
  if (true) { c->lr=0x803AEF94u; dispatch(c,c->ctr); } // 803AEF90
L_803AEF94:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 803AEF94
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 803AEF98
  c->lr=c->r[0]; // 803AEF9C
  c->r[1]=c->r[1]+0x00000010u; // 803AEFA0
  return; // 803AEFA4
}

// __ct__Q54nw4r3snd6detail10StrmPlayer16StrmDataLoadTaskFv
void f_803AEFA8(Ctx* __restrict c) {
  trace_call(0x803AEFA8u);
  c->r[4]=0u+0x80430000u; // 803AEFA8
  c->r[5]=0u+0x00000000u; // 803AEFAC
  c->r[4]=c->r[4]+0x000075A8u; // 803AEFB0
  c->r[0]=0u+0xFFFFFFFFu; // 803AEFB4
  W32(c->r[3]+0x00000004u,c->r[5]); // 803AEFB8
  W32(c->r[3]+0x00000008u,c->r[5]); // 803AEFBC
  W8(c->r[3]+0x0000000Cu,c->r[5]); // 803AEFC0
  W32(c->r[3]+0x00000000u,c->r[4]); // 803AEFC4
  W32(c->r[3]+0x00000010u,c->r[5]); // 803AEFC8
  W32(c->r[3]+0x00000014u,c->r[5]); // 803AEFCC
  W32(c->r[3]+0x00000018u,c->r[5]); // 803AEFD0
  W32(c->r[3]+0x0000001Cu,c->r[5]); // 803AEFD4
  W32(c->r[3]+0x00000020u,c->r[5]); // 803AEFD8
  W32(c->r[3]+0x00000024u,c->r[0]); // 803AEFDC
  W8(c->r[3]+0x00000028u,c->r[5]); // 803AEFE0
  W32(c->r[3]+0x0000002Cu,c->r[5]); // 803AEFE4
  W32(c->r[3]+0x00000030u,c->r[5]); // 803AEFE8
  return; // 803AEFEC
}

// fn_803AEFF0
void f_803AEFF0(Ctx* __restrict c) {
  trace_call(0x803AEFF0u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803AEFF0
  c->r[0]=c->lr; // 803AEFF4
  W32(c->r[1]+0x00000024u,c->r[0]); // 803AEFF8
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 803AEFFC
  W32(c->r[1]+0x00000018u,c->r[30]); // 803AF000
  W32(c->r[1]+0x00000014u,c->r[29]); // 803AF004
  c->r[29]=c->r[3]|c->r[3]; // 803AF008
  c->r[3]=R32(c->r[3]+0x00000010u); // 803AF00C
  c->r[4]=R32(c->r[29]+0x00000014u); // 803AF010
  c->r[5]=R32(c->r[29]+0x0000001Cu); // 803AF014
  c->r[6]=R32(c->r[29]+0x00000018u); // 803AF018
  c->r[7]=R32(c->r[29]+0x00000020u); // 803AF01C
  c->r[8]=R32(c->r[29]+0x00000024u); // 803AF020
  c->r[9]=R8(c->r[29]+0x00000028u); // 803AF024
  c->lr=0x803AF02Cu; f_803ADA80(c); // 803AF028
  cmps(c,0,(int32_t)c->r[3],0); // 803AF02C
  if (!crb(c,2)) { goto L_803AF040; } // 803AF030
  c->r[3]=R32(c->r[29]+0x00000010u); // 803AF034
  c->r[0]=0u+0x00000001u; // 803AF038
  W8(c->r[3]+0x000000BCu,c->r[0]); // 803AF03C
L_803AF040:;
  c->lr=0x803AF044u; f_8025EA10(c); // 803AF040
  c->r[5]=R32(c->r[29]+0x00000010u); // 803AF044
  c->r[31]=c->r[3]|c->r[3]; // 803AF048
  c->r[4]=c->r[29]+0x0000002Cu; // 803AF04C
  c->r[3]=c->r[5]+0x00000128u; // 803AF050
  c->lr=0x803AF058u; f_803B50E0(c); // 803AF054
  c->r[3]=R32(c->r[29]+0x00000010u); // 803AF058
  cmps(c,0,(int32_t)c->r[29],0); // 803AF05C
  c->r[30]=c->r[3]+0x00000134u; // 803AF060
  if (crb(c,2)) { goto L_803AF08C; } // 803AF064
  c->r[12]=R32(c->r[29]+0x00000000u); // 803AF068
  c->r[3]=c->r[29]|c->r[29]; // 803AF06C
  c->r[4]=0u+0xFFFFFFFFu; // 803AF070
  c->r[12]=R32(c->r[12]+0x00000008u); // 803AF074
  c->ctr=c->r[12]; // 803AF078
  if (true) { c->lr=0x803AF080u; dispatch(c,c->ctr); } // 803AF07C
  c->r[3]=c->r[30]|c->r[30]; // 803AF080
  c->r[4]=c->r[29]|c->r[29]; // 803AF084
  c->lr=0x803AF08Cu; f_803A0A9C(c); // 803AF088
L_803AF08C:;
  c->r[3]=c->r[31]|c->r[31]; // 803AF08C
  c->lr=0x803AF094u; f_8025EA38(c); // 803AF090
  c->r[0]=R32(c->r[1]+0x00000024u); // 803AF094
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 803AF098
  c->r[30]=R32(c->r[1]+0x00000018u); // 803AF09C
  c->r[29]=R32(c->r[1]+0x00000014u); // 803AF0A0
  c->lr=c->r[0]; // 803AF0A4
  c->r[1]=c->r[1]+0x00000020u; // 803AF0A8
  return; // 803AF0AC
}

// Cancel__Q54nw4r3snd6detail10StrmPlayer16StrmDataLoadTaskFv
void f_803AF0B0(Ctx* __restrict c) {
  trace_call(0x803AF0B0u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803AF0B0
  c->r[0]=c->lr; // 803AF0B4
  W32(c->r[1]+0x00000024u,c->r[0]); // 803AF0B8
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 803AF0BC
  W32(c->r[1]+0x00000018u,c->r[30]); // 803AF0C0
  W32(c->r[1]+0x00000014u,c->r[29]); // 803AF0C4
  c->r[29]=c->r[3]|c->r[3]; // 803AF0C8
  c->lr=0x803AF0D0u; f_8025EA10(c); // 803AF0CC
  c->r[5]=R32(c->r[29]+0x00000010u); // 803AF0D0
  c->r[31]=c->r[3]|c->r[3]; // 803AF0D4
  c->r[4]=c->r[29]+0x0000002Cu; // 803AF0D8
  c->r[3]=c->r[5]+0x00000128u; // 803AF0DC
  c->lr=0x803AF0E4u; f_803B50E0(c); // 803AF0E0
  c->r[3]=R32(c->r[29]+0x00000010u); // 803AF0E4
  cmps(c,0,(int32_t)c->r[29],0); // 803AF0E8
  c->r[30]=c->r[3]+0x00000134u; // 803AF0EC
  if (crb(c,2)) { goto L_803AF118; } // 803AF0F0
  c->r[12]=R32(c->r[29]+0x00000000u); // 803AF0F4
  c->r[3]=c->r[29]|c->r[29]; // 803AF0F8
  c->r[4]=0u+0xFFFFFFFFu; // 803AF0FC
  c->r[12]=R32(c->r[12]+0x00000008u); // 803AF100
  c->ctr=c->r[12]; // 803AF104
  if (true) { c->lr=0x803AF10Cu; dispatch(c,c->ctr); } // 803AF108
  c->r[3]=c->r[30]|c->r[30]; // 803AF10C
  c->r[4]=c->r[29]|c->r[29]; // 803AF110
  c->lr=0x803AF118u; f_803A0A9C(c); // 803AF114
L_803AF118:;
  c->r[3]=c->r[31]|c->r[31]; // 803AF118
  c->lr=0x803AF120u; f_8025EA38(c); // 803AF11C
  c->r[0]=R32(c->r[1]+0x00000024u); // 803AF120
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 803AF124
  c->r[30]=R32(c->r[1]+0x00000018u); // 803AF128
  c->r[29]=R32(c->r[1]+0x00000014u); // 803AF12C
  c->lr=c->r[0]; // 803AF130
  c->r[1]=c->r[1]+0x00000020u; // 803AF134
  return; // 803AF138
}

// fn_803AF13C
void f_803AF13C(Ctx* __restrict c) {
  trace_call(0x803AF13Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803AF13C
  c->r[0]=c->lr; // 803AF140
  W32(c->r[1]+0x00000014u,c->r[0]); // 803AF144
  c->r[0]=0u+0x00000001u; // 803AF148
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 803AF14C
  c->r[31]=c->r[3]|c->r[3]; // 803AF150
  c->r[4]=R32(c->r[3]+0x00000010u); // 803AF154
  W8(c->r[4]+0x000000BDu,c->r[0]); // 803AF158
  c->r[3]=R32(c->r[3]+0x00000014u); // 803AF15C
  cmps(c,0,(int32_t)c->r[3],0); // 803AF160
  if (crb(c,2)) { goto L_803AF1D0; } // 803AF164
  c->r[12]=R32(c->r[3]+0x00000000u); // 803AF168
  c->r[12]=R32(c->r[12]+0x00000054u); // 803AF16C
  c->ctr=c->r[12]; // 803AF170
  if (true) { c->lr=0x803AF178u; dispatch(c,c->ctr); } // 803AF174
  cmps(c,0,(int32_t)c->r[3],0); // 803AF178
  if (crb(c,2)) { goto L_803AF1D0; } // 803AF17C
  c->r[3]=R32(c->r[31]+0x00000014u); // 803AF180
  c->r[12]=R32(c->r[3]+0x00000000u); // 803AF184
  c->r[12]=R32(c->r[12]+0x00000028u); // 803AF188
  c->ctr=c->r[12]; // 803AF18C
  if (true) { c->lr=0x803AF194u; dispatch(c,c->ctr); } // 803AF190
  cmps(c,0,(int32_t)c->r[3],0); // 803AF194
  if (crb(c,2)) { goto L_803AF1BC; } // 803AF198
  c->r[3]=R32(c->r[31]+0x00000014u); // 803AF19C
  c->r[4]=0u+0x00000000u; // 803AF1A0
  c->r[5]=0u+0x00000000u; // 803AF1A4
  c->r[12]=R32(c->r[3]+0x00000000u); // 803AF1A8
  c->r[12]=R32(c->r[12]+0x0000004Cu); // 803AF1AC
  c->ctr=c->r[12]; // 803AF1B0
  if (true) { c->lr=0x803AF1B8u; dispatch(c,c->ctr); } // 803AF1B4
  goto L_803AF1D0; // 803AF1B8
L_803AF1BC:;
  c->r[3]=R32(c->r[31]+0x00000014u); // 803AF1BC
  c->r[12]=R32(c->r[3]+0x00000000u); // 803AF1C0
  c->r[12]=R32(c->r[12]+0x00000048u); // 803AF1C4
  c->ctr=c->r[12]; // 803AF1C8
  if (true) { c->lr=0x803AF1D0u; dispatch(c,c->ctr); } // 803AF1CC
L_803AF1D0:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 803AF1D0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 803AF1D4
  c->lr=c->r[0]; // 803AF1D8
  c->r[1]=c->r[1]+0x00000010u; // 803AF1DC
  return; // 803AF1E0
}

// fn_803AF1E4
void f_803AF1E4(Ctx* __restrict c) {
  trace_call(0x803AF1E4u);
  f_803AE19C(c); return; // 803AF1E4
}

// fn_803AF1E8
void f_803AF1E8(Ctx* __restrict c) {
  trace_call(0x803AF1E8u);
  f_803AE53C(c); return; // 803AF1E8
}

// fn_803AF1EC
void f_803AF1EC(Ctx* __restrict c) {
  trace_call(0x803AF1ECu);
  c->r[12]=R32(c->r[3]+0x00000000u); // 803AF1EC
  c->r[12]=R32(c->r[12]+0x00000010u); // 803AF1F0
  c->ctr=c->r[12]; // 803AF1F4
  if (true) { dispatch(c,c->ctr); return; } // 803AF1F8
}

// fn_803AF1FC
void f_803AF1FC(Ctx* __restrict c) {
  trace_call(0x803AF1FCu);
  c->r[3]=R8(c->r[3]+0x000000BFu); // 803AF1FC
  return; // 803AF200
}

// fn_803AF204
void f_803AF204(Ctx* __restrict c) {
  trace_call(0x803AF204u);
  c->r[3]=R8(c->r[3]+0x000000BAu); // 803AF204
  return; // 803AF208
}

// fn_803AF20C
void f_803AF20C(Ctx* __restrict c) {
  trace_call(0x803AF20Cu);
  c->r[3]=R8(c->r[3]+0x000000B9u); // 803AF20C
  return; // 803AF210
}

// fn_803AF214
void f_803AF214(Ctx* __restrict c) {
  trace_call(0x803AF214u);
  c->r[3]=c->r[3]+0xFFFFFF8Cu; // 803AF214
  f_803AF1EC(c); return; // 803AF218
}

// fn_803AF21C
void f_803AF21C(Ctx* __restrict c) {
  trace_call(0x803AF21Cu);
  c->r[3]=c->r[3]+0xFFFFFF8Cu; // 803AF21C
  f_803AF1E8(c); return; // 803AF220
}

// fn_803AF224
void f_803AF224(Ctx* __restrict c) {
  trace_call(0x803AF224u);
  c->r[3]=c->r[3]+0xFFFFFF8Cu; // 803AF224
  f_803AF1E4(c); return; // 803AF228
}

// fn_803AF22C
void f_803AF22C(Ctx* __restrict c) {
  trace_call(0x803AF22Cu);
  c->r[3]=c->r[3]+0xFFFFFF8Cu; // 803AF22C
  f_803ACE00(c); return; // 803AF230
}

// fn_803AF234
void f_803AF234(Ctx* __restrict c) {
  trace_call(0x803AF234u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803AF234
  c->r[0]=c->lr; // 803AF238
  W32(c->r[1]+0x00000014u,c->r[0]); // 803AF23C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 803AF240
  c->r[31]=c->r[4]|c->r[4]; // 803AF244
  W32(c->r[1]+0x00000008u,c->r[30]); // 803AF248
  c->r[30]=c->r[3]|c->r[3]; // 803AF24C
  c->lr=0x803AF254u; f_8039BA94(c); // 803AF250
  c->r[4]=0u+0x80430000u; // 803AF254
  c->r[3]=c->r[30]+0x000000D8u; // 803AF258
  c->r[4]=c->r[4]+0x000075D8u; // 803AF25C
  W32(c->r[30]+0x00000000u,c->r[4]); // 803AF260
  c->lr=0x803AF268u; f_803ACC54(c); // 803AF264
  c->r[0]=0u+0x00000000u; // 803AF268
  W32(c->r[30]+0x00000924u,c->r[31]); // 803AF26C
  c->r[3]=c->r[30]|c->r[30]; // 803AF270
  W32(c->r[30]+0x00000920u,c->r[0]); // 803AF274
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 803AF278
  c->r[30]=R32(c->r[1]+0x00000008u); // 803AF27C
  c->r[0]=R32(c->r[1]+0x00000014u); // 803AF280
  c->lr=c->r[0]; // 803AF284
  c->r[1]=c->r[1]+0x00000010u; // 803AF288
  return; // 803AF28C
}

// fn_803AF290
void f_803AF290(Ctx* __restrict c) {
  trace_call(0x803AF290u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803AF290
  c->r[0]=c->lr; // 803AF294
  W32(c->r[1]+0x00000024u,c->r[0]); // 803AF298
  c->r[11]=c->r[1]+0x00000020u; // 803AF29C
  c->lr=0x803AF2A4u; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 803AF2A0
  cmps(c,0,(int32_t)c->r[4],0); // 803AF2A4
  c->r[26]=c->r[3]|c->r[3]; // 803AF2A8
  c->r[27]=c->r[4]|c->r[4]; // 803AF2AC
  c->r[28]=c->r[5]|c->r[5]; // 803AF2B0
  c->r[29]=c->r[6]|c->r[6]; // 803AF2B4
  c->r[30]=c->r[7]|c->r[7]; // 803AF2B8
  c->r[31]=c->r[8]|c->r[8]; // 803AF2BC
  if (!crb(c,2)) { goto L_803AF2CC; } // 803AF2C0
  c->r[3]=0u+0x00000000u; // 803AF2C4
  goto L_803AF32C; // 803AF2C8
L_803AF2CC:;
  c->r[12]=R32(c->r[3]+0x00000000u); // 803AF2CC
  c->r[12]=R32(c->r[12]+0x00000064u); // 803AF2D0
  c->ctr=c->r[12]; // 803AF2D4
  if (true) { c->lr=0x803AF2DCu; dispatch(c,c->ctr); } // 803AF2D8
  c->r[4]=c->r[27]|c->r[27]; // 803AF2DC
  c->r[3]=c->r[26]+0x000000D8u; // 803AF2E0
  c->lr=0x803AF2E8u; f_803ACF08(c); // 803AF2E4
  cmps(c,0,(int32_t)c->r[3],0); // 803AF2E8
  if (!crb(c,2)) { goto L_803AF2F8; } // 803AF2EC
  c->r[3]=0u+0x00000000u; // 803AF2F0
  goto L_803AF32C; // 803AF2F4
L_803AF2F8:;
  c->r[4]=c->r[31]|c->r[31]; // 803AF2F8
  c->r[5]=c->r[30]|c->r[30]; // 803AF2FC
  c->r[6]=c->r[28]|c->r[28]; // 803AF300
  c->r[7]=c->r[29]|c->r[29]; // 803AF304
  c->r[3]=c->r[26]+0x000000D8u; // 803AF308
  c->lr=0x803AF310u; f_803AD078(c); // 803AF30C
  cmps(c,0,(int32_t)c->r[3],0); // 803AF310
  if (!crb(c,2)) { goto L_803AF328; } // 803AF314
  c->r[3]=c->r[26]+0x000000D8u; // 803AF318
  c->lr=0x803AF320u; f_803ACFE4(c); // 803AF31C
  c->r[3]=0u+0x00000000u; // 803AF320
  goto L_803AF32C; // 803AF324
L_803AF328:;
  c->r[3]=0u+0x00000001u; // 803AF328
L_803AF32C:;
  c->r[11]=c->r[1]+0x00000020u; // 803AF32C
  c->lr=0x803AF334u; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 803AF330
  c->r[0]=R32(c->r[1]+0x00000024u); // 803AF334
  c->lr=c->r[0]; // 803AF338
  c->r[1]=c->r[1]+0x00000020u; // 803AF33C
  return; // 803AF340
}

// fn_803AF344
void f_803AF344(Ctx* __restrict c) {
  trace_call(0x803AF344u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803AF344
  c->r[0]=c->lr; // 803AF348
  W32(c->r[1]+0x00000024u,c->r[0]); // 803AF34C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 803AF350
  W32(c->r[1]+0x00000018u,c->r[30]); // 803AF354
  W32(c->r[1]+0x00000014u,c->r[29]); // 803AF358
  c->r[29]=c->r[3]|c->r[3]; // 803AF35C
  c->lr=0x803AF364u; f_8039C72C(c); // 803AF360
  c->r[30]=R32(c->r[29]+0x00000924u); // 803AF364
  c->r[31]=c->r[30]+0x00000010u; // 803AF368
  c->r[3]=c->r[31]|c->r[31]; // 803AF36C
  c->lr=0x803AF374u; f_8025FCCC(c); // 803AF370
  c->r[0]=R32(c->r[30]+0x00000004u); // 803AF374
  cmps(c,0,(int32_t)c->r[0],0); // 803AF378
  if (!crb(c,2)) { goto L_803AF38C; } // 803AF37C
  c->r[3]=c->r[31]|c->r[31]; // 803AF380
  c->lr=0x803AF388u; f_8025FDA8(c); // 803AF384
  goto L_803AF3C4; // 803AF388
L_803AF38C:;
  c->r[3]=c->r[30]+0x00000004u; // 803AF38C
  c->r[4]=c->r[29]+0x000000B8u; // 803AF390
  c->lr=0x803AF398u; f_803B50E0(c); // 803AF394
  c->r[12]=R32(c->r[29]+0x00000000u); // 803AF398
  c->r[3]=c->r[29]|c->r[29]; // 803AF39C
  c->r[4]=0u+0xFFFFFFFFu; // 803AF3A0
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 803AF3A4
  c->ctr=c->r[12]; // 803AF3A8
  if (true) { c->lr=0x803AF3B0u; dispatch(c,c->ctr); } // 803AF3AC
  c->r[3]=c->r[30]|c->r[30]; // 803AF3B0
  c->r[4]=c->r[29]|c->r[29]; // 803AF3B4
  c->lr=0x803AF3BCu; f_803A0A9C(c); // 803AF3B8
  c->r[3]=c->r[31]|c->r[31]; // 803AF3BC
  c->lr=0x803AF3C4u; f_8025FDA8(c); // 803AF3C0
L_803AF3C4:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 803AF3C4
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 803AF3C8
  c->r[30]=R32(c->r[1]+0x00000018u); // 803AF3CC
  c->r[29]=R32(c->r[1]+0x00000014u); // 803AF3D0
  c->lr=c->r[0]; // 803AF3D4
  c->r[1]=c->r[1]+0x00000020u; // 803AF3D8
  return; // 803AF3DC
}

// fn_803AF3E0
void f_803AF3E0(Ctx* __restrict c) {
  trace_call(0x803AF3E0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803AF3E0
  c->r[0]=c->lr; // 803AF3E4
  cmps(c,0,(int32_t)c->r[3],0); // 803AF3E8
  W32(c->r[1]+0x00000014u,c->r[0]); // 803AF3EC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 803AF3F0
  c->r[31]=c->r[4]|c->r[4]; // 803AF3F4
  W32(c->r[1]+0x00000008u,c->r[30]); // 803AF3F8
  c->r[30]=c->r[3]|c->r[3]; // 803AF3FC
  if (crb(c,2)) { goto L_803AF420; } // 803AF400
  c->r[4]=0u+0xFFFFFFFFu; // 803AF404
  c->r[3]=c->r[3]+0x000000D8u; // 803AF408
  c->lr=0x803AF410u; f_803ACE00(c); // 803AF40C
  cmps(c,0,(int32_t)c->r[31],0); // 803AF410
  if (!crb(c,1)) { goto L_803AF420; } // 803AF414
  c->r[3]=c->r[30]|c->r[30]; // 803AF418
  c->lr=0x803AF420u; f_802896EC(c); // 803AF41C
L_803AF420:;
  c->r[3]=c->r[30]|c->r[30]; // 803AF420
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 803AF424
  c->r[30]=R32(c->r[1]+0x00000008u); // 803AF428
  c->r[0]=R32(c->r[1]+0x00000014u); // 803AF42C
  c->lr=c->r[0]; // 803AF430
  c->r[1]=c->r[1]+0x00000010u; // 803AF434
  return; // 803AF438
}

// fn_803AF43C
void f_803AF43C(Ctx* __restrict c) {
  trace_call(0x803AF43Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803AF43C
  c->r[0]=c->lr; // 803AF440
  W32(c->r[1]+0x00000024u,c->r[0]); // 803AF444
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 803AF448
  W32(c->r[1]+0x00000018u,c->r[30]); // 803AF44C
  W32(c->r[1]+0x00000014u,c->r[29]); // 803AF450
  W32(c->r[1]+0x00000010u,c->r[28]); // 803AF454
  c->r[28]=c->r[3]|c->r[3]; // 803AF458
  c->lr=0x803AF460u; f_8039C89C(c); // 803AF45C
  c->r[3]=R8(c->r[28]+0x00000074u); // 803AF460
  c->r[0]=R32(c->r[28]+0x00000040u); // 803AF464
  c->r[3]=c->r[3]+c->r[0]; // 803AF468
  cmps(c,0,(int32_t)c->r[3],127); // 803AF46C
  if (!crb(c,1)) { goto L_803AF47C; } // 803AF470
  c->r[29]=0u+0x0000007Fu; // 803AF474
  goto L_803AF484; // 803AF478
L_803AF47C:;
  c->r[0]=sraw(c,c->r[3],31); // 803AF47C
  c->r[29]=c->r[3]&~c->r[0]; // 803AF480
L_803AF484:;
  c->r[30]=R32(c->r[28]+0x00000924u); // 803AF484
  c->r[31]=c->r[30]+0x00000010u; // 803AF488
  c->r[3]=c->r[31]|c->r[31]; // 803AF48C
  c->lr=0x803AF494u; f_8025FCCC(c); // 803AF490
  c->r[28]=c->r[28]+0x000000B8u; // 803AF494
  c->r[3]=c->r[30]+0x00000004u; // 803AF498
  c->r[4]=c->r[28]|c->r[28]; // 803AF49C
  c->lr=0x803AF4A4u; f_803B50E0(c); // 803AF4A0
  c->r[3]=R32(c->r[30]+0x00000008u); // 803AF4A4
  c->r[0]=c->r[30]+0x00000008u; // 803AF4A8
  goto L_803AF4E0; // 803AF4AC
L_803AF4B0:;
  c->r[5]=R8(c->r[3]+0xFFFFFFBCu); // 803AF4B0
  c->r[4]=R32(c->r[3]+0xFFFFFF88u); // 803AF4B4
  c->r[5]=c->r[5]+c->r[4]; // 803AF4B8
  cmps(c,0,(int32_t)c->r[5],127); // 803AF4BC
  if (!crb(c,1)) { goto L_803AF4CC; } // 803AF4C0
  c->r[4]=0u+0x0000007Fu; // 803AF4C4
  goto L_803AF4D4; // 803AF4C8
L_803AF4CC:;
  c->r[4]=sraw(c,c->r[5],31); // 803AF4CC
  c->r[4]=c->r[5]&~c->r[4]; // 803AF4D0
L_803AF4D4:;
  cmps(c,0,(int32_t)c->r[29],(int32_t)c->r[4]); // 803AF4D4
  if (crb(c,0)) { goto L_803AF4E8; } // 803AF4D8
  c->r[3]=R32(c->r[3]+0x00000000u); // 803AF4DC
L_803AF4E0:;
  cmpu(c,0,c->r[3],c->r[0]); // 803AF4E0
  if (!crb(c,2)) { IRQCHK(c); goto L_803AF4B0; } // 803AF4E4
L_803AF4E8:;
  W32(c->r[1]+0x00000008u,c->r[3]); // 803AF4E8
  c->r[5]=c->r[28]|c->r[28]; // 803AF4EC
  c->r[3]=c->r[30]+0x00000004u; // 803AF4F0
  c->r[4]=c->r[1]+0x00000008u; // 803AF4F4
  c->lr=0x803AF4FCu; f_803B50B4(c); // 803AF4F8
  c->r[3]=c->r[31]|c->r[31]; // 803AF4FC
  c->lr=0x803AF504u; f_8025FDA8(c); // 803AF500
  c->r[0]=R32(c->r[1]+0x00000024u); // 803AF504
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 803AF508
  c->r[30]=R32(c->r[1]+0x00000018u); // 803AF50C
  c->r[29]=R32(c->r[1]+0x00000014u); // 803AF510
  c->r[28]=R32(c->r[1]+0x00000010u); // 803AF514
  c->lr=c->r[0]; // 803AF518
  c->r[1]=c->r[1]+0x00000020u; // 803AF51C
  return; // 803AF520
}

// fn_803AF524
void f_803AF524(Ctx* __restrict c) {
  trace_call(0x803AF524u);
  c->r[3]=R32(c->r[3]+0x00000920u); // 803AF524
  c->r[0]=0u-c->r[3]; // 803AF528
  c->r[0]=c->r[0]|c->r[3]; // 803AF52C
  c->r[3]=rotl(c->r[0],1)&0x00000001u; // 803AF530
  return; // 803AF534
}

// fn_803AF538
void f_803AF538(Ctx* __restrict c) {
  trace_call(0x803AF538u);
  c->r[3]=R32(c->r[3]+0x00000920u); // 803AF538
  f_803AF674(c); return; // 803AF53C
}

// fn_803AF540
void f_803AF540(Ctx* __restrict c) {
  trace_call(0x803AF540u);
  c->r[3]=c->r[3]+0x000000D8u; // 803AF540
  return; // 803AF544
}

// fn_803AF548
void f_803AF548(Ctx* __restrict c) {
  trace_call(0x803AF548u);
  c->r[3]=c->r[3]+0x000000D8u; // 803AF548
  return; // 803AF54C
}

// fn_803AF550
void f_803AF550(Ctx* __restrict c) {
  trace_call(0x803AF550u);
  c->r[3]=R8(c->r[3]+0x00000193u); // 803AF550
  return; // 803AF554
}

// fn_803AF558
void f_803AF558(Ctx* __restrict c) {
  trace_call(0x803AF558u);
  c->r[3]=c->r[13]+0xFFFFA078u; // 803AF558
  return; // 803AF55C
}

// fn_803AF560
void f_803AF560(Ctx* __restrict c) {
  trace_call(0x803AF560u);
  c->r[0]=c->r[13]+0xFFFF9FE0u; // 803AF560
  W32(c->r[13]+0xFFFFA078u,c->r[0]); // 803AF564
  return; // 803AF568
}

// fn_803AF56C
void f_803AF56C(Ctx* __restrict c) {
  trace_call(0x803AF56Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803AF56C
  c->r[0]=c->lr; // 803AF570
  cmps(c,0,(int32_t)c->r[4],0); // 803AF574
  W32(c->r[1]+0x00000024u,c->r[0]); // 803AF578
  c->r[0]=0u+0x00000000u; // 803AF57C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 803AF580
  W32(c->r[1]+0x00000018u,c->r[30]); // 803AF584
  W32(c->r[1]+0x00000014u,c->r[29]); // 803AF588
  c->r[29]=c->r[3]|c->r[3]; // 803AF58C
  W32(c->r[3]+0x00000000u,c->r[0]); // 803AF590
  if (!crb(c,2)) { goto L_803AF59C; } // 803AF594
  goto L_803AF658; // 803AF598
L_803AF59C:;
  c->r[30]=R32(c->r[4]+0x00000000u); // 803AF59C
  cmps(c,0,(int32_t)c->r[30],0); // 803AF5A0
  if (!crb(c,2)) { goto L_803AF5AC; } // 803AF5A4
  goto L_803AF658; // 803AF5A8
L_803AF5AC:;
  c->r[12]=R32(c->r[30]+0x00000000u); // 803AF5AC
  c->r[3]=c->r[30]|c->r[30]; // 803AF5B0
  c->r[31]=c->r[13]+0xFFFFA078u; // 803AF5B4
  c->r[12]=R32(c->r[12]+0x00000008u); // 803AF5B8
  c->ctr=c->r[12]; // 803AF5BC
  if (true) { c->lr=0x803AF5C4u; dispatch(c,c->ctr); } // 803AF5C0
  goto L_803AF5DC; // 803AF5C4
L_803AF5C8:;
  cmpu(c,0,c->r[3],c->r[31]); // 803AF5C8
  if (!crb(c,2)) { goto L_803AF5D8; } // 803AF5CC
  c->r[0]=0u+0x00000001u; // 803AF5D0
  goto L_803AF5E8; // 803AF5D4
L_803AF5D8:;
  c->r[3]=R32(c->r[3]+0x00000000u); // 803AF5D8
L_803AF5DC:;
  cmps(c,0,(int32_t)c->r[3],0); // 803AF5DC
  if (!crb(c,2)) { IRQCHK(c); goto L_803AF5C8; } // 803AF5E0
  c->r[0]=0u+0x00000000u; // 803AF5E4
L_803AF5E8:;
  cmps(c,0,(int32_t)c->r[0],0); // 803AF5E8
  if (crb(c,2)) { goto L_803AF5F4; } // 803AF5EC
  goto L_803AF5F8; // 803AF5F0
L_803AF5F4:;
  c->r[30]=0u+0x00000000u; // 803AF5F4
L_803AF5F8:;
  cmps(c,0,(int32_t)c->r[30],0); // 803AF5F8
  if (crb(c,2)) { goto L_803AF654; } // 803AF5FC
  W32(c->r[29]+0x00000000u,c->r[30]); // 803AF600
  c->r[3]=c->r[30]|c->r[30]; // 803AF604
  c->lr=0x803AF60Cu; f_8039CBAC(c); // 803AF608
  cmps(c,0,(int32_t)c->r[3],0); // 803AF60C
  if (crb(c,2)) { goto L_803AF61C; } // 803AF610
  c->r[3]=R32(c->r[29]+0x00000000u); // 803AF614
  c->lr=0x803AF61Cu; f_8039CBC8(c); // 803AF618
L_803AF61C:;
  c->r[3]=R32(c->r[29]+0x00000000u); // 803AF61C
  c->r[12]=R32(c->r[3]+0x00000000u); // 803AF620
  c->r[12]=R32(c->r[12]+0x0000005Cu); // 803AF624
  c->ctr=c->r[12]; // 803AF628
  if (true) { c->lr=0x803AF630u; dispatch(c,c->ctr); } // 803AF62C
  cmps(c,0,(int32_t)c->r[3],0); // 803AF630
  if (crb(c,2)) { goto L_803AF64C; } // 803AF634
  c->r[3]=R32(c->r[29]+0x00000000u); // 803AF638
  c->r[12]=R32(c->r[3]+0x00000000u); // 803AF63C
  c->r[12]=R32(c->r[12]+0x00000060u); // 803AF640
  c->ctr=c->r[12]; // 803AF644
  if (true) { c->lr=0x803AF64Cu; dispatch(c,c->ctr); } // 803AF648
L_803AF64C:;
  c->r[3]=R32(c->r[29]+0x00000000u); // 803AF64C
  W32(c->r[3]+0x00000920u,c->r[29]); // 803AF650
L_803AF654:;
  c->r[3]=c->r[29]|c->r[29]; // 803AF654
L_803AF658:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 803AF658
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 803AF65C
  c->r[30]=R32(c->r[1]+0x00000018u); // 803AF660
  c->r[29]=R32(c->r[1]+0x00000014u); // 803AF664
  c->lr=c->r[0]; // 803AF668
  c->r[1]=c->r[1]+0x00000020u; // 803AF66C
  return; // 803AF670
}

// fn_803AF674
void f_803AF674(Ctx* __restrict c) {
  trace_call(0x803AF674u);
  c->r[4]=R32(c->r[3]+0x00000000u); // 803AF674
  cmps(c,0,(int32_t)c->r[4],0); // 803AF678
  if (crb(c,2)) { goto L_803AF694; } // 803AF67C
  c->r[0]=R32(c->r[4]+0x00000920u); // 803AF680
  cmpu(c,0,c->r[0],c->r[3]); // 803AF684
  if (!crb(c,2)) { goto L_803AF694; } // 803AF688
  c->r[0]=0u+0x00000000u; // 803AF68C
  W32(c->r[4]+0x00000920u,c->r[0]); // 803AF690
L_803AF694:;
  c->r[0]=R32(c->r[3]+0x00000000u); // 803AF694
  cmps(c,0,(int32_t)c->r[0],0); // 803AF698
  if (crb(c,2)) return; // 803AF69C
  c->r[0]=0u+0x00000000u; // 803AF6A0
  W32(c->r[3]+0x00000000u,c->r[0]); // 803AF6A4
  return; // 803AF6A8
}

// __dt__Q44nw4r3snd6detail4TaskFv
void f_803AF6AC(Ctx* __restrict c) {
  trace_call(0x803AF6ACu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803AF6AC
  c->r[0]=c->lr; // 803AF6B0
  cmps(c,0,(int32_t)c->r[3],0); // 803AF6B4
  W32(c->r[1]+0x00000014u,c->r[0]); // 803AF6B8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 803AF6BC
  c->r[31]=c->r[3]|c->r[3]; // 803AF6C0
  if (crb(c,2)) { goto L_803AF6D4; } // 803AF6C4
  cmps(c,0,(int32_t)c->r[4],0); // 803AF6C8
  if (!crb(c,1)) { goto L_803AF6D4; } // 803AF6CC
  c->lr=0x803AF6D4u; f_802896EC(c); // 803AF6D0
L_803AF6D4:;
  c->r[3]=c->r[31]|c->r[31]; // 803AF6D4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 803AF6D8
  c->r[0]=R32(c->r[1]+0x00000014u); // 803AF6DC
  c->lr=c->r[0]; // 803AF6E0
  c->r[1]=c->r[1]+0x00000010u; // 803AF6E4
  return; // 803AF6E8
}

// GetInstance__Q44nw4r3snd6detail11TaskManagerFv
void f_803AF6EC(Ctx* __restrict c) {
  trace_call(0x803AF6ECu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803AF6EC
  c->r[0]=c->lr; // 803AF6F0
  W32(c->r[1]+0x00000014u,c->r[0]); // 803AF6F4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 803AF6F8
  c->r[0]=R8(c->r[13]+0xFFFFA080u); // 803AF6FC
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 803AF700
  if (!crb(c,2)) { goto L_803AF76C; } // 803AF704
  c->r[31]=0u+0x806C0000u; // 803AF708
  c->r[4]=0u+0x803B0000u; // 803AF70C
  c->r[31]=c->r[31]+0x000022C4u; // 803AF710
  c->r[5]=0u+0x803B0000u; // 803AF714
  c->r[3]=c->r[31]|c->r[31]; // 803AF718
  c->r[4]=c->r[4]+0xFFFFF844u; // 803AF71C
  c->r[5]=c->r[5]+0xFFFFF7ECu; // 803AF720
  c->r[6]=0u+0x0000000Cu; // 803AF724
  c->r[7]=0u+0x00000003u; // 803AF728
  c->lr=0x803AF730u; f_80289B34(c); // 803AF72C
  c->r[0]=0u+0x00000000u; // 803AF730
  c->r[3]=c->r[31]+0x0000002Cu; // 803AF734
  W32(c->r[31]+0x00000024u,c->r[0]); // 803AF738
  W8(c->r[31]+0x00000028u,c->r[0]); // 803AF73C
  c->lr=0x803AF744u; f_80261388(c); // 803AF740
  c->r[3]=c->r[31]+0x00000034u; // 803AF744
  c->lr=0x803AF74Cu; f_80261388(c); // 803AF748
  c->r[4]=0u+0x803B0000u; // 803AF74C
  c->r[5]=0u+0x806C0000u; // 803AF750
  c->r[3]=c->r[31]|c->r[31]; // 803AF754
  c->r[4]=c->r[4]+0xFFFFF788u; // 803AF758
  c->r[5]=c->r[5]+0x000022B8u; // 803AF75C
  c->lr=0x803AF764u; f_802895A4(c); // 803AF760
  c->r[0]=0u+0x00000001u; // 803AF764
  W8(c->r[13]+0xFFFFA080u,c->r[0]); // 803AF768
L_803AF76C:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 803AF76C
  c->r[3]=0u+0x806C0000u; // 803AF770
  c->r[0]=R32(c->r[1]+0x00000014u); // 803AF774
  c->r[3]=c->r[3]+0x000022C4u; // 803AF778
  c->lr=c->r[0]; // 803AF77C
  c->r[1]=c->r[1]+0x00000010u; // 803AF780
  return; // 803AF784
}

// fn_803AF788
void f_803AF788(Ctx* __restrict c) {
  trace_call(0x803AF788u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803AF788
  c->r[0]=c->lr; // 803AF78C
  cmps(c,0,(int32_t)c->r[3],0); // 803AF790
  W32(c->r[1]+0x00000014u,c->r[0]); // 803AF794
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 803AF798
  c->r[31]=c->r[4]|c->r[4]; // 803AF79C
  W32(c->r[1]+0x00000008u,c->r[30]); // 803AF7A0
  c->r[30]=c->r[3]|c->r[3]; // 803AF7A4
  if (crb(c,2)) { goto L_803AF7D0; } // 803AF7A8
  c->r[4]=0u+0x803B0000u; // 803AF7AC
  c->r[5]=0u+0x0000000Cu; // 803AF7B0
  c->r[4]=c->r[4]+0xFFFFF7ECu; // 803AF7B4
  c->r[6]=0u+0x00000003u; // 803AF7B8
  c->lr=0x803AF7C0u; f_80289C2C(c); // 803AF7BC
  cmps(c,0,(int32_t)c->r[31],0); // 803AF7C0
  if (!crb(c,1)) { goto L_803AF7D0; } // 803AF7C4
  c->r[3]=c->r[30]|c->r[30]; // 803AF7C8
  c->lr=0x803AF7D0u; f_802896EC(c); // 803AF7CC
L_803AF7D0:;
  c->r[3]=c->r[30]|c->r[30]; // 803AF7D0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 803AF7D4
  c->r[30]=R32(c->r[1]+0x00000008u); // 803AF7D8
  c->r[0]=R32(c->r[1]+0x00000014u); // 803AF7DC
  c->lr=c->r[0]; // 803AF7E0
  c->r[1]=c->r[1]+0x00000010u; // 803AF7E4
  return; // 803AF7E8
}

// fn_803AF7EC
void f_803AF7EC(Ctx* __restrict c) {
  trace_call(0x803AF7ECu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803AF7EC
  c->r[0]=c->lr; // 803AF7F0
  cmps(c,0,(int32_t)c->r[3],0); // 803AF7F4
  W32(c->r[1]+0x00000014u,c->r[0]); // 803AF7F8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 803AF7FC
  c->r[31]=c->r[4]|c->r[4]; // 803AF800
  W32(c->r[1]+0x00000008u,c->r[30]); // 803AF804
  c->r[30]=c->r[3]|c->r[3]; // 803AF808
  if (crb(c,2)) { goto L_803AF828; } // 803AF80C
  c->r[4]=0u+0x00000000u; // 803AF810
  c->lr=0x803AF818u; f_803B4FA4(c); // 803AF814
  cmps(c,0,(int32_t)c->r[31],0); // 803AF818
  if (!crb(c,1)) { goto L_803AF828; } // 803AF81C
  c->r[3]=c->r[30]|c->r[30]; // 803AF820
  c->lr=0x803AF828u; f_802896EC(c); // 803AF824
L_803AF828:;
  c->r[3]=c->r[30]|c->r[30]; // 803AF828
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 803AF82C
  c->r[30]=R32(c->r[1]+0x00000008u); // 803AF830
  c->r[0]=R32(c->r[1]+0x00000014u); // 803AF834
  c->lr=c->r[0]; // 803AF838
  c->r[1]=c->r[1]+0x00000010u; // 803AF83C
  return; // 803AF840
}

// fn_803AF844
void f_803AF844(Ctx* __restrict c) {
  trace_call(0x803AF844u);
  c->r[0]=0u+0x00000000u; // 803AF844
  c->r[4]=c->r[3]+0x00000004u; // 803AF848
  W32(c->r[3]+0x00000004u,c->r[0]); // 803AF84C
  W32(c->r[3]+0x00000008u,c->r[0]); // 803AF850
  W32(c->r[3]+0x00000000u,c->r[0]); // 803AF854
  W32(c->r[3]+0x00000004u,c->r[4]); // 803AF858
  W32(c->r[3]+0x00000008u,c->r[4]); // 803AF85C
  return; // 803AF860
}

// AppendTask__Q44nw4r3snd6detail11TaskManagerFPQ44nw4r3snd6detail4TaskQ54nw4r3snd6detail11TaskManager12TaskPriority
void f_803AF864(Ctx* __restrict c) {
  trace_call(0x803AF864u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803AF864
  c->r[0]=c->lr; // 803AF868
  W32(c->r[1]+0x00000024u,c->r[0]); // 803AF86C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 803AF870
  c->r[31]=c->r[5]|c->r[5]; // 803AF874
  W32(c->r[1]+0x00000018u,c->r[30]); // 803AF878
  c->r[30]=c->r[4]|c->r[4]; // 803AF87C
  W32(c->r[1]+0x00000014u,c->r[29]); // 803AF880
  c->r[29]=c->r[3]|c->r[3]; // 803AF884
  c->lr=0x803AF88Cu; f_8025EA10(c); // 803AF888
  c->r[0]=(uint32_t)((int32_t)c->r[31]*(int32_t)12); // 803AF88C
  c->r[4]=0u+0x00000001u; // 803AF890
  W8(c->r[30]+0x0000000Cu,c->r[4]); // 803AF894
  c->r[31]=c->r[3]|c->r[3]; // 803AF898
  c->r[4]=c->r[1]+0x00000008u; // 803AF89C
  c->r[3]=c->r[29]+c->r[0]; // 803AF8A0
  c->r[0]=c->r[3]+0x00000004u; // 803AF8A4
  c->r[5]=c->r[30]+0x00000004u; // 803AF8A8
  W32(c->r[1]+0x00000008u,c->r[0]); // 803AF8AC
  c->lr=0x803AF8B4u; f_803B50B4(c); // 803AF8B0
  c->r[3]=c->r[29]+0x0000002Cu; // 803AF8B4
  c->lr=0x803AF8BCu; f_802624C0(c); // 803AF8B8
  c->r[3]=c->r[31]|c->r[31]; // 803AF8BC
  c->lr=0x803AF8C4u; f_8025EA38(c); // 803AF8C0
  c->r[0]=R32(c->r[1]+0x00000024u); // 803AF8C4
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 803AF8C8
  c->r[30]=R32(c->r[1]+0x00000018u); // 803AF8CC
  c->r[29]=R32(c->r[1]+0x00000014u); // 803AF8D0
  c->lr=c->r[0]; // 803AF8D4
  c->r[1]=c->r[1]+0x00000020u; // 803AF8D8
  return; // 803AF8DC
}

// PopTask__Q44nw4r3snd6detail11TaskManagerFv
void f_803AF8E0(Ctx* __restrict c) {
  trace_call(0x803AF8E0u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803AF8E0
  c->r[0]=c->lr; // 803AF8E4
  W32(c->r[1]+0x00000034u,c->r[0]); // 803AF8E8
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 803AF8EC
  W32(c->r[1]+0x00000028u,c->r[30]); // 803AF8F0
  W32(c->r[1]+0x00000024u,c->r[29]); // 803AF8F4
  W32(c->r[1]+0x00000020u,c->r[28]); // 803AF8F8
  c->r[28]=c->r[3]|c->r[3]; // 803AF8FC
  c->lr=0x803AF904u; f_8025EA10(c); // 803AF900
  c->r[31]=c->r[3]|c->r[3]; // 803AF904
  c->lr=0x803AF90Cu; f_8025EA10(c); // 803AF908
  c->r[0]=R32(c->r[28]+0x00000018u); // 803AF90C
  c->r[30]=c->r[3]|c->r[3]; // 803AF910
  cmps(c,0,(int32_t)c->r[0],0); // 803AF914
  if (!crb(c,2)) { goto L_803AF928; } // 803AF918
  c->lr=0x803AF920u; f_8025EA38(c); // 803AF91C
  c->r[30]=0u+0x00000000u; // 803AF920
  goto L_803AF948; // 803AF924
L_803AF928:;
  c->r[29]=R32(c->r[28]+0x0000001Cu); // 803AF928
  c->r[3]=c->r[28]+0x00000018u; // 803AF92C
  c->r[4]=c->r[1]+0x00000010u; // 803AF930
  W32(c->r[1]+0x00000010u,c->r[29]); // 803AF934
  c->lr=0x803AF93Cu; f_803B5028(c); // 803AF938
  c->r[3]=c->r[30]|c->r[30]; // 803AF93C
  c->lr=0x803AF944u; f_8025EA38(c); // 803AF940
  c->r[30]=c->r[29]+0xFFFFFFFCu; // 803AF944
L_803AF948:;
  cmps(c,0,(int32_t)c->r[30],0); // 803AF948
  if (crb(c,2)) { goto L_803AF960; } // 803AF94C
  c->r[3]=c->r[31]|c->r[31]; // 803AF950
  c->lr=0x803AF958u; f_8025EA38(c); // 803AF954
  c->r[3]=c->r[30]|c->r[30]; // 803AF958
  goto L_803AFA1C; // 803AF95C
L_803AF960:;
  c->lr=0x803AF964u; f_8025EA10(c); // 803AF960
  c->r[0]=R32(c->r[28]+0x0000000Cu); // 803AF964
  c->r[30]=c->r[3]|c->r[3]; // 803AF968
  cmps(c,0,(int32_t)c->r[0],0); // 803AF96C
  if (!crb(c,2)) { goto L_803AF980; } // 803AF970
  c->lr=0x803AF978u; f_8025EA38(c); // 803AF974
  c->r[30]=0u+0x00000000u; // 803AF978
  goto L_803AF9A0; // 803AF97C
L_803AF980:;
  c->r[29]=R32(c->r[28]+0x00000010u); // 803AF980
  c->r[3]=c->r[28]+0x0000000Cu; // 803AF984
  c->r[4]=c->r[1]+0x0000000Cu; // 803AF988
  W32(c->r[1]+0x0000000Cu,c->r[29]); // 803AF98C
  c->lr=0x803AF994u; f_803B5028(c); // 803AF990
  c->r[3]=c->r[30]|c->r[30]; // 803AF994
  c->lr=0x803AF99Cu; f_8025EA38(c); // 803AF998
  c->r[30]=c->r[29]+0xFFFFFFFCu; // 803AF99C
L_803AF9A0:;
  cmps(c,0,(int32_t)c->r[30],0); // 803AF9A0
  if (crb(c,2)) { goto L_803AF9B8; } // 803AF9A4
  c->r[3]=c->r[31]|c->r[31]; // 803AF9A8
  c->lr=0x803AF9B0u; f_8025EA38(c); // 803AF9AC
  c->r[3]=c->r[30]|c->r[30]; // 803AF9B0
  goto L_803AFA1C; // 803AF9B4
L_803AF9B8:;
  c->lr=0x803AF9BCu; f_8025EA10(c); // 803AF9B8
  c->r[0]=R32(c->r[28]+0x00000000u); // 803AF9BC
  c->r[30]=c->r[3]|c->r[3]; // 803AF9C0
  cmps(c,0,(int32_t)c->r[0],0); // 803AF9C4
  if (!crb(c,2)) { goto L_803AF9D8; } // 803AF9C8
  c->lr=0x803AF9D0u; f_8025EA38(c); // 803AF9CC
  c->r[30]=0u+0x00000000u; // 803AF9D0
  goto L_803AF9F8; // 803AF9D4
L_803AF9D8:;
  c->r[29]=R32(c->r[28]+0x00000004u); // 803AF9D8
  c->r[3]=c->r[28]|c->r[28]; // 803AF9DC
  c->r[4]=c->r[1]+0x00000008u; // 803AF9E0
  W32(c->r[1]+0x00000008u,c->r[29]); // 803AF9E4
  c->lr=0x803AF9ECu; f_803B5028(c); // 803AF9E8
  c->r[3]=c->r[30]|c->r[30]; // 803AF9EC
  c->lr=0x803AF9F4u; f_8025EA38(c); // 803AF9F0
  c->r[30]=c->r[29]+0xFFFFFFFCu; // 803AF9F4
L_803AF9F8:;
  cmps(c,0,(int32_t)c->r[30],0); // 803AF9F8
  if (crb(c,2)) { goto L_803AFA10; } // 803AF9FC
  c->r[3]=c->r[31]|c->r[31]; // 803AFA00
  c->lr=0x803AFA08u; f_8025EA38(c); // 803AFA04
  c->r[3]=c->r[30]|c->r[30]; // 803AFA08
  goto L_803AFA1C; // 803AFA0C
L_803AFA10:;
  c->r[3]=c->r[31]|c->r[31]; // 803AFA10
  c->lr=0x803AFA18u; f_8025EA38(c); // 803AFA14
  c->r[3]=0u+0x00000000u; // 803AFA18
L_803AFA1C:;
  c->r[0]=R32(c->r[1]+0x00000034u); // 803AFA1C
  c->r[31]=R32(c->r[1]+0x0000002Cu); // 803AFA20
  c->r[30]=R32(c->r[1]+0x00000028u); // 803AFA24
  c->r[29]=R32(c->r[1]+0x00000024u); // 803AFA28
  c->r[28]=R32(c->r[1]+0x00000020u); // 803AFA2C
  c->lr=c->r[0]; // 803AFA30
  c->r[1]=c->r[1]+0x00000030u; // 803AFA34
  return; // 803AFA38
}

// GetNextTask__Q44nw4r3snd6detail11TaskManagerFv
void f_803AFA3C(Ctx* __restrict c) {
  trace_call(0x803AFA3Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803AFA3C
  c->r[0]=c->lr; // 803AFA40
  W32(c->r[1]+0x00000024u,c->r[0]); // 803AFA44
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 803AFA48
  W32(c->r[1]+0x00000018u,c->r[30]); // 803AFA4C
  W32(c->r[1]+0x00000014u,c->r[29]); // 803AFA50
  c->r[29]=c->r[3]|c->r[3]; // 803AFA54
  c->lr=0x803AFA5Cu; f_8025EA10(c); // 803AFA58
  c->r[31]=c->r[3]|c->r[3]; // 803AFA5C
  c->lr=0x803AFA64u; f_8025EA10(c); // 803AFA60
  c->r[0]=R32(c->r[29]+0x00000018u); // 803AFA64
  cmps(c,0,(int32_t)c->r[0],0); // 803AFA68
  if (!crb(c,2)) { goto L_803AFA7C; } // 803AFA6C
  c->lr=0x803AFA74u; f_8025EA38(c); // 803AFA70
  c->r[30]=0u+0x00000000u; // 803AFA74
  goto L_803AFA88; // 803AFA78
L_803AFA7C:;
  c->r[30]=R32(c->r[29]+0x0000001Cu); // 803AFA7C
  c->lr=0x803AFA84u; f_8025EA38(c); // 803AFA80
  c->r[30]=c->r[30]+0xFFFFFFFCu; // 803AFA84
L_803AFA88:;
  cmps(c,0,(int32_t)c->r[30],0); // 803AFA88
  if (crb(c,2)) { goto L_803AFAA0; } // 803AFA8C
  c->r[3]=c->r[31]|c->r[31]; // 803AFA90
  c->lr=0x803AFA98u; f_8025EA38(c); // 803AFA94
  c->r[3]=c->r[30]|c->r[30]; // 803AFA98
  goto L_803AFB2C; // 803AFA9C
L_803AFAA0:;
  c->lr=0x803AFAA4u; f_8025EA10(c); // 803AFAA0
  c->r[0]=R32(c->r[29]+0x0000000Cu); // 803AFAA4
  cmps(c,0,(int32_t)c->r[0],0); // 803AFAA8
  if (!crb(c,2)) { goto L_803AFABC; } // 803AFAAC
  c->lr=0x803AFAB4u; f_8025EA38(c); // 803AFAB0
  c->r[30]=0u+0x00000000u; // 803AFAB4
  goto L_803AFAC8; // 803AFAB8
L_803AFABC:;
  c->r[30]=R32(c->r[29]+0x00000010u); // 803AFABC
  c->lr=0x803AFAC4u; f_8025EA38(c); // 803AFAC0
  c->r[30]=c->r[30]+0xFFFFFFFCu; // 803AFAC4
L_803AFAC8:;
  cmps(c,0,(int32_t)c->r[30],0); // 803AFAC8
  if (crb(c,2)) { goto L_803AFAE0; } // 803AFACC
  c->r[3]=c->r[31]|c->r[31]; // 803AFAD0
  c->lr=0x803AFAD8u; f_8025EA38(c); // 803AFAD4
  c->r[3]=c->r[30]|c->r[30]; // 803AFAD8
  goto L_803AFB2C; // 803AFADC
L_803AFAE0:;
  c->lr=0x803AFAE4u; f_8025EA10(c); // 803AFAE0
  c->r[0]=R32(c->r[29]+0x00000000u); // 803AFAE4
  cmps(c,0,(int32_t)c->r[0],0); // 803AFAE8
  if (!crb(c,2)) { goto L_803AFAFC; } // 803AFAEC
  c->lr=0x803AFAF4u; f_8025EA38(c); // 803AFAF0
  c->r[30]=0u+0x00000000u; // 803AFAF4
  goto L_803AFB08; // 803AFAF8
L_803AFAFC:;
  c->r[30]=R32(c->r[29]+0x00000004u); // 803AFAFC
  c->lr=0x803AFB04u; f_8025EA38(c); // 803AFB00
  c->r[30]=c->r[30]+0xFFFFFFFCu; // 803AFB04
L_803AFB08:;
  cmps(c,0,(int32_t)c->r[30],0); // 803AFB08
  if (crb(c,2)) { goto L_803AFB20; } // 803AFB0C
  c->r[3]=c->r[31]|c->r[31]; // 803AFB10
  c->lr=0x803AFB18u; f_8025EA38(c); // 803AFB14
  c->r[3]=c->r[30]|c->r[30]; // 803AFB18
  goto L_803AFB2C; // 803AFB1C
L_803AFB20:;
  c->r[3]=c->r[31]|c->r[31]; // 803AFB20
  c->lr=0x803AFB28u; f_8025EA38(c); // 803AFB24
  c->r[3]=0u+0x00000000u; // 803AFB28
L_803AFB2C:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 803AFB2C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 803AFB30
  c->r[30]=R32(c->r[1]+0x00000018u); // 803AFB34
  c->r[29]=R32(c->r[1]+0x00000014u); // 803AFB38
  c->lr=c->r[0]; // 803AFB3C
  c->r[1]=c->r[1]+0x00000020u; // 803AFB40
  return; // 803AFB44
}

// ExecuteTask__Q44nw4r3snd6detail11TaskManagerFv
void f_803AFB48(Ctx* __restrict c) {
  trace_call(0x803AFB48u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803AFB48
  c->r[0]=c->lr; // 803AFB4C
  W32(c->r[1]+0x00000024u,c->r[0]); // 803AFB50
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 803AFB54
  W32(c->r[1]+0x00000018u,c->r[30]); // 803AFB58
  W32(c->r[1]+0x00000014u,c->r[29]); // 803AFB5C
  c->r[29]=c->r[3]|c->r[3]; // 803AFB60
  c->lr=0x803AFB68u; f_803AF8E0(c); // 803AFB64
  cmps(c,0,(int32_t)c->r[3],0); // 803AFB68
  c->r[30]=c->r[3]|c->r[3]; // 803AFB6C
  if (!crb(c,2)) { goto L_803AFB7C; } // 803AFB70
  c->r[3]=0u+0x00000000u; // 803AFB74
  goto L_803AFBA8; // 803AFB78
L_803AFB7C:;
  W32(c->r[29]+0x00000024u,c->r[3]); // 803AFB7C
  c->r[31]=0u+0x00000000u; // 803AFB80
  W8(c->r[3]+0x0000000Cu,c->r[31]); // 803AFB84
  c->r[12]=R32(c->r[3]+0x00000000u); // 803AFB88
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 803AFB8C
  c->ctr=c->r[12]; // 803AFB90
  if (true) { c->lr=0x803AFB98u; dispatch(c,c->ctr); } // 803AFB94
  W32(c->r[29]+0x00000024u,c->r[31]); // 803AFB98
  c->r[3]=c->r[29]+0x00000034u; // 803AFB9C
  c->lr=0x803AFBA4u; f_802624C0(c); // 803AFBA0
  c->r[3]=c->r[30]|c->r[30]; // 803AFBA4
L_803AFBA8:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 803AFBA8
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 803AFBAC
  c->r[30]=R32(c->r[1]+0x00000018u); // 803AFBB0
  c->r[29]=R32(c->r[1]+0x00000014u); // 803AFBB4
  c->lr=c->r[0]; // 803AFBB8
  c->r[1]=c->r[1]+0x00000020u; // 803AFBBC
  return; // 803AFBC0
}

// CancelTask__Q44nw4r3snd6detail11TaskManagerFPQ44nw4r3snd6detail4Task
void f_803AFBC4(Ctx* __restrict c) {
  trace_call(0x803AFBC4u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803AFBC4
  c->r[0]=c->lr; // 803AFBC8
  W32(c->r[1]+0x00000034u,c->r[0]); // 803AFBCC
  c->r[11]=c->r[1]+0x00000030u; // 803AFBD0
  c->lr=0x803AFBD8u; { W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 803AFBD4
  c->r[25]=c->r[3]|c->r[3]; // 803AFBD8
  c->r[26]=c->r[4]|c->r[4]; // 803AFBDC
  c->lr=0x803AFBE4u; f_8025EA10(c); // 803AFBE0
  c->r[0]=R32(c->r[25]+0x00000024u); // 803AFBE4
  c->r[30]=c->r[3]|c->r[3]; // 803AFBE8
  cmpu(c,0,c->r[26],c->r[0]); // 803AFBEC
  if (!crb(c,2)) { goto L_803AFC24; } // 803AFBF0
  c->r[12]=R32(c->r[26]+0x00000000u); // 803AFBF4
  c->r[3]=c->r[26]|c->r[26]; // 803AFBF8
  c->r[12]=R32(c->r[12]+0x00000014u); // 803AFBFC
  c->ctr=c->r[12]; // 803AFC00
  if (true) { c->lr=0x803AFC08u; dispatch(c,c->ctr); } // 803AFC04
  goto L_803AFC14; // 803AFC08
L_803AFC0C:;
  c->r[3]=c->r[25]+0x00000034u; // 803AFC0C
  c->lr=0x803AFC14u; f_802623D4(c); // 803AFC10
L_803AFC14:;
  c->r[0]=R32(c->r[25]+0x00000024u); // 803AFC14
  cmpu(c,0,c->r[26],c->r[0]); // 803AFC18
  if (crb(c,2)) { IRQCHK(c); goto L_803AFC0C; } // 803AFC1C
  goto L_803AFC94; // 803AFC20
L_803AFC24:;
  c->r[27]=0u+0x00000000u; // 803AFC24
  c->r[31]=0u+0x00000000u; // 803AFC28
  c->r[29]=0u+0x00000000u; // 803AFC2C
L_803AFC30:;
  c->r[3]=c->r[25]+c->r[31]; // 803AFC30
  c->r[4]=R32(c->r[3]+0x00000004u); // 803AFC34
  c->r[0]=c->r[3]+0x00000004u; // 803AFC38
  goto L_803AFC7C; // 803AFC3C
L_803AFC40:;
  c->r[28]=c->r[4]|c->r[4]; // 803AFC40
  c->r[4]=R32(c->r[4]+0x00000000u); // 803AFC44
  c->r[5]=c->r[28]+0xFFFFFFFCu; // 803AFC48
  cmpu(c,0,c->r[5],c->r[26]); // 803AFC4C
  if (!crb(c,2)) { goto L_803AFC7C; } // 803AFC50
  W32(c->r[1]+0x00000008u,c->r[28]); // 803AFC54
  c->r[4]=c->r[1]+0x00000008u; // 803AFC58
  c->lr=0x803AFC60u; f_803B5028(c); // 803AFC5C
  W8(c->r[28]+0x00000008u,c->r[29]); // 803AFC60
  c->r[3]=c->r[28]+0xFFFFFFFCu; // 803AFC64
  c->r[12]=R32(c->r[28]+0xFFFFFFFCu); // 803AFC68
  c->r[12]=R32(c->r[12]+0x00000010u); // 803AFC6C
  c->ctr=c->r[12]; // 803AFC70
  if (true) { c->lr=0x803AFC78u; dispatch(c,c->ctr); } // 803AFC74
  goto L_803AFC84; // 803AFC78
L_803AFC7C:;
  cmpu(c,0,c->r[4],c->r[0]); // 803AFC7C
  if (!crb(c,2)) { IRQCHK(c); goto L_803AFC40; } // 803AFC80
L_803AFC84:;
  c->r[27]=c->r[27]+0x00000001u; // 803AFC84
  c->r[31]=c->r[31]+0x0000000Cu; // 803AFC88
  cmps(c,0,(int32_t)c->r[27],3); // 803AFC8C
  if (crb(c,0)) { IRQCHK(c); goto L_803AFC30; } // 803AFC90
L_803AFC94:;
  c->r[3]=c->r[30]|c->r[30]; // 803AFC94
  c->lr=0x803AFC9Cu; f_8025EA38(c); // 803AFC98
  c->r[11]=c->r[1]+0x00000030u; // 803AFC9C
  c->lr=0x803AFCA4u; { c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 803AFCA0
  c->r[0]=R32(c->r[1]+0x00000034u); // 803AFCA4
  c->lr=c->r[0]; // 803AFCA8
  c->r[1]=c->r[1]+0x00000030u; // 803AFCAC
  return; // 803AFCB0
}

// WaitTask__Q44nw4r3snd6detail11TaskManagerFv
void f_803AFCB4(Ctx* __restrict c) {
  trace_call(0x803AFCB4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803AFCB4
  c->r[0]=c->lr; // 803AFCB8
  W32(c->r[1]+0x00000014u,c->r[0]); // 803AFCBC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 803AFCC0
  W32(c->r[1]+0x00000008u,c->r[30]); // 803AFCC4
  c->r[30]=c->r[3]|c->r[3]; // 803AFCC8
  c->lr=0x803AFCD0u; f_8025EA10(c); // 803AFCCC
  c->r[0]=0u+0x00000000u; // 803AFCD0
  c->r[31]=c->r[3]|c->r[3]; // 803AFCD4
  W8(c->r[30]+0x00000028u,c->r[0]); // 803AFCD8
  goto L_803AFCE8; // 803AFCDC
L_803AFCE0:;
  c->r[3]=c->r[30]+0x0000002Cu; // 803AFCE0
  c->lr=0x803AFCE8u; f_802623D4(c); // 803AFCE4
L_803AFCE8:;
  c->r[3]=c->r[30]|c->r[30]; // 803AFCE8
  c->lr=0x803AFCF0u; f_803AFA3C(c); // 803AFCEC
  cmps(c,0,(int32_t)c->r[3],0); // 803AFCF0
  if (!crb(c,2)) { goto L_803AFD04; } // 803AFCF4
  c->r[0]=R8(c->r[30]+0x00000028u); // 803AFCF8
  cmps(c,0,(int32_t)c->r[0],0); // 803AFCFC
  if (crb(c,2)) { IRQCHK(c); goto L_803AFCE0; } // 803AFD00
L_803AFD04:;
  c->r[3]=c->r[31]|c->r[31]; // 803AFD04
  c->lr=0x803AFD0Cu; f_8025EA38(c); // 803AFD08
  c->r[0]=R32(c->r[1]+0x00000014u); // 803AFD0C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 803AFD10
  c->r[30]=R32(c->r[1]+0x00000008u); // 803AFD14
  c->lr=c->r[0]; // 803AFD18
  c->r[1]=c->r[1]+0x00000010u; // 803AFD1C
  return; // 803AFD20
}

// CancelWaitTask__Q44nw4r3snd6detail11TaskManagerFv
void f_803AFD24(Ctx* __restrict c) {
  trace_call(0x803AFD24u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803AFD24
  c->r[0]=c->lr; // 803AFD28
  W32(c->r[1]+0x00000014u,c->r[0]); // 803AFD2C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 803AFD30
  W32(c->r[1]+0x00000008u,c->r[30]); // 803AFD34
  c->r[30]=c->r[3]|c->r[3]; // 803AFD38
  c->lr=0x803AFD40u; f_8025EA10(c); // 803AFD3C
  c->r[0]=0u+0x00000001u; // 803AFD40
  c->r[31]=c->r[3]|c->r[3]; // 803AFD44
  W8(c->r[30]+0x00000028u,c->r[0]); // 803AFD48
  c->r[3]=c->r[30]+0x0000002Cu; // 803AFD4C
  c->lr=0x803AFD54u; f_802624C0(c); // 803AFD50
  c->r[3]=c->r[31]|c->r[31]; // 803AFD54
  c->lr=0x803AFD5Cu; f_8025EA38(c); // 803AFD58
  c->r[0]=R32(c->r[1]+0x00000014u); // 803AFD5C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 803AFD60
  c->r[30]=R32(c->r[1]+0x00000008u); // 803AFD64
  c->lr=c->r[0]; // 803AFD68
  c->r[1]=c->r[1]+0x00000010u; // 803AFD6C
  return; // 803AFD70
}

// __ct__Q44nw4r3snd6detail10TaskThreadFv
void f_803AFD74(Ctx* __restrict c) {
  trace_call(0x803AFD74u);
  c->r[0]=0u+0x00000000u; // 803AFD74
  W32(c->r[3]+0x00000318u,c->r[0]); // 803AFD78
  W8(c->r[3]+0x0000031Cu,c->r[0]); // 803AFD7C
  W8(c->r[3]+0x0000031Du,c->r[0]); // 803AFD80
  return; // 803AFD84
}

// __dt__Q44nw4r3snd6detail10TaskThreadFv
void f_803AFD88(Ctx* __restrict c) {
  trace_call(0x803AFD88u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803AFD88
  c->r[0]=c->lr; // 803AFD8C
  cmps(c,0,(int32_t)c->r[3],0); // 803AFD90
  W32(c->r[1]+0x00000014u,c->r[0]); // 803AFD94
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 803AFD98
  c->r[31]=c->r[4]|c->r[4]; // 803AFD9C
  W32(c->r[1]+0x00000008u,c->r[30]); // 803AFDA0
  c->r[30]=c->r[3]|c->r[3]; // 803AFDA4
  if (crb(c,2)) { goto L_803AFDF0; } // 803AFDA8
  c->r[0]=R8(c->r[3]+0x0000031Du); // 803AFDAC
  cmps(c,0,(int32_t)c->r[0],0); // 803AFDB0
  if (crb(c,2)) { goto L_803AFDE0; } // 803AFDB4
  if (crb(c,2)) { goto L_803AFDE0; } // 803AFDB8
  c->r[0]=0u+0x00000001u; // 803AFDBC
  W8(c->r[3]+0x0000031Cu,c->r[0]); // 803AFDC0
  c->lr=0x803AFDC8u; f_803AF6EC(c); // 803AFDC4
  c->lr=0x803AFDCCu; f_803AFD24(c); // 803AFDC8
  c->r[3]=c->r[30]|c->r[30]; // 803AFDCC
  c->r[4]=0u+0x00000000u; // 803AFDD0
  c->lr=0x803AFDD8u; f_80261E68(c); // 803AFDD4
  c->r[0]=0u+0x00000000u; // 803AFDD8
  W8(c->r[30]+0x0000031Du,c->r[0]); // 803AFDDC
L_803AFDE0:;
  cmps(c,0,(int32_t)c->r[31],0); // 803AFDE0
  if (!crb(c,1)) { goto L_803AFDF0; } // 803AFDE4
  c->r[3]=c->r[30]|c->r[30]; // 803AFDE8
  c->lr=0x803AFDF0u; f_802896EC(c); // 803AFDEC
L_803AFDF0:;
  c->r[3]=c->r[30]|c->r[30]; // 803AFDF0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 803AFDF4
  c->r[30]=R32(c->r[1]+0x00000008u); // 803AFDF8
  c->r[0]=R32(c->r[1]+0x00000014u); // 803AFDFC
  c->lr=c->r[0]; // 803AFE00
  c->r[1]=c->r[1]+0x00000010u; // 803AFE04
  return; // 803AFE08
}

// Create__Q44nw4r3snd6detail10TaskThreadFlPvUl
void f_803AFE0C(Ctx* __restrict c) {
  trace_call(0x803AFE0Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803AFE0C
  c->r[0]=c->lr; // 803AFE10
  W32(c->r[1]+0x00000024u,c->r[0]); // 803AFE14
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 803AFE18
  c->r[31]=c->r[6]|c->r[6]; // 803AFE1C
  W32(c->r[1]+0x00000018u,c->r[30]); // 803AFE20
  c->r[30]=c->r[5]|c->r[5]; // 803AFE24
  W32(c->r[1]+0x00000014u,c->r[29]); // 803AFE28
  c->r[29]=c->r[4]|c->r[4]; // 803AFE2C
  W32(c->r[1]+0x00000010u,c->r[28]); // 803AFE30
  c->r[28]=c->r[3]|c->r[3]; // 803AFE34
  c->r[0]=R8(c->r[3]+0x0000031Du); // 803AFE38
  cmps(c,0,(int32_t)c->r[0],0); // 803AFE3C
  if (crb(c,2)) { goto L_803AFE6C; } // 803AFE40
  if (crb(c,2)) { goto L_803AFE6C; } // 803AFE44
  c->r[0]=0u+0x00000001u; // 803AFE48
  W8(c->r[3]+0x0000031Cu,c->r[0]); // 803AFE4C
  c->lr=0x803AFE54u; f_803AF6EC(c); // 803AFE50
  c->lr=0x803AFE58u; f_803AFD24(c); // 803AFE54
  c->r[3]=c->r[28]|c->r[28]; // 803AFE58
  c->r[4]=0u+0x00000000u; // 803AFE5C
  c->lr=0x803AFE64u; f_80261E68(c); // 803AFE60
  c->r[0]=0u+0x00000000u; // 803AFE64
  W8(c->r[28]+0x0000031Du,c->r[0]); // 803AFE68
L_803AFE6C:;
  c->r[4]=0u+0x803B0000u; // 803AFE6C
  c->r[3]=c->r[28]|c->r[28]; // 803AFE70
  c->r[5]=c->r[28]|c->r[28]; // 803AFE74
  c->r[7]=c->r[31]|c->r[31]; // 803AFE78
  c->r[8]=c->r[29]|c->r[29]; // 803AFE7C
  c->r[4]=c->r[4]+0xFFFFFEE0u; // 803AFE80
  c->r[6]=c->r[30]+c->r[31]; // 803AFE84
  c->r[9]=0u+0x00000000u; // 803AFE88
  c->lr=0x803AFE90u; f_80261940(c); // 803AFE8C
  cmps(c,0,(int32_t)c->r[3],0); // 803AFE90
  if (!crb(c,2)) { goto L_803AFEA0; } // 803AFE94
  c->r[3]=0u+0x00000000u; // 803AFE98
  goto L_803AFEC0; // 803AFE9C
L_803AFEA0:;
  c->r[4]=0u+0x00000000u; // 803AFEA0
  c->r[0]=0u+0x00000001u; // 803AFEA4
  W32(c->r[28]+0x00000318u,c->r[30]); // 803AFEA8
  c->r[3]=c->r[28]|c->r[28]; // 803AFEAC
  W8(c->r[28]+0x0000031Cu,c->r[4]); // 803AFEB0
  W8(c->r[28]+0x0000031Du,c->r[0]); // 803AFEB4
  c->lr=0x803AFEBCu; f_80261FA8(c); // 803AFEB8
  c->r[3]=0u+0x00000001u; // 803AFEBC
L_803AFEC0:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 803AFEC0
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 803AFEC4
  c->r[30]=R32(c->r[1]+0x00000018u); // 803AFEC8
  c->r[29]=R32(c->r[1]+0x00000014u); // 803AFECC
  c->r[28]=R32(c->r[1]+0x00000010u); // 803AFED0
  c->lr=c->r[0]; // 803AFED4
  c->r[1]=c->r[1]+0x00000020u; // 803AFED8
  return; // 803AFEDC
}

// ThreadFunc__Q44nw4r3snd6detail10TaskThreadFPv
void f_803AFEE0(Ctx* __restrict c) {
  trace_call(0x803AFEE0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803AFEE0
  c->r[0]=c->lr; // 803AFEE4
  W32(c->r[1]+0x00000014u,c->r[0]); // 803AFEE8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 803AFEEC
  c->r[31]=c->r[3]|c->r[3]; // 803AFEF0
  goto L_803AFF14; // 803AFEF4
L_803AFEF8:;
  c->lr=0x803AFEFCu; f_803AF6EC(c); // 803AFEF8
  c->lr=0x803AFF00u; f_803AFCB4(c); // 803AFEFC
  c->r[0]=R8(c->r[31]+0x0000031Cu); // 803AFF00
  cmps(c,0,(int32_t)c->r[0],0); // 803AFF04
  if (!crb(c,2)) { goto L_803AFF20; } // 803AFF08
  c->lr=0x803AFF10u; f_803AF6EC(c); // 803AFF0C
  c->lr=0x803AFF14u; f_803AFB48(c); // 803AFF10
L_803AFF14:;
  c->r[0]=R8(c->r[31]+0x0000031Cu); // 803AFF14
  cmps(c,0,(int32_t)c->r[0],0); // 803AFF18
  if (crb(c,2)) { IRQCHK(c); goto L_803AFEF8; } // 803AFF1C
L_803AFF20:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 803AFF20
  c->r[3]=0u+0x00000000u; // 803AFF24
  c->r[0]=R32(c->r[1]+0x00000014u); // 803AFF28
  c->lr=c->r[0]; // 803AFF2C
  c->r[1]=c->r[1]+0x00000010u; // 803AFF30
  return; // 803AFF34
}

// fn_803AFF38
void f_803AFF38(Ctx* __restrict c) {
  trace_call(0x803AFF38u);
  c->r[4]=0u+0x80430000u; // 803AFF38
  c->r[0]=0u+0x00000000u; // 803AFF3C
  c->r[4]=c->r[4]+0x0000766Cu; // 803AFF40
  W32(c->r[3]+0x00000000u,c->r[0]); // 803AFF44
  W32(c->r[3]+0x00000004u,c->r[0]); // 803AFF48
  W32(c->r[3]+0x00000008u,c->r[4]); // 803AFF4C
  W32(c->r[3]+0x000000A4u,c->r[0]); // 803AFF50
  W8(c->r[3]+0x000000ACu,c->r[0]); // 803AFF54
  W8(c->r[3]+0x000000ADu,c->r[0]); // 803AFF58
  W8(c->r[3]+0x000000AEu,c->r[0]); // 803AFF5C
  W8(c->r[3]+0x000000AFu,c->r[0]); // 803AFF60
  W8(c->r[3]+0x000000B1u,c->r[0]); // 803AFF64
  W32(c->r[3]+0x00000124u,c->r[0]); // 803AFF68
  W32(c->r[3]+0x00000128u,c->r[0]); // 803AFF6C
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 803AFF70
  W32(c->r[3]+0x00000010u,c->r[0]); // 803AFF74
  W32(c->r[3]+0x00000014u,c->r[0]); // 803AFF78
  W32(c->r[3]+0x00000018u,c->r[0]); // 803AFF7C
  W32(c->r[3]+0x0000001Cu,c->r[0]); // 803AFF80
  W32(c->r[3]+0x00000020u,c->r[0]); // 803AFF84
  W32(c->r[3]+0x00000024u,c->r[0]); // 803AFF88
  W32(c->r[3]+0x00000028u,c->r[0]); // 803AFF8C
  return; // 803AFF90
}

// __dt__Q44nw4r3snd6detail5VoiceFv
void f_803AFF94(Ctx* __restrict c) {
  trace_call(0x803AFF94u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803AFF94
  c->r[0]=c->lr; // 803AFF98
  W32(c->r[1]+0x00000034u,c->r[0]); // 803AFF9C
  c->r[11]=c->r[1]+0x00000030u; // 803AFFA0
  c->lr=0x803AFFA8u; { W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 803AFFA4
  cmps(c,0,(int32_t)c->r[3],0); // 803AFFA8
  c->r[25]=c->r[3]|c->r[3]; // 803AFFAC
  c->r[26]=c->r[4]|c->r[4]; // 803AFFB0
  if (crb(c,2)) { goto L_803B001C; } // 803AFFB4
  c->r[4]=0u+0x80430000u; // 803AFFB8
  c->r[31]=c->r[25]|c->r[25]; // 803AFFBC
  c->r[4]=c->r[4]+0x0000766Cu; // 803AFFC0
  c->r[29]=0u+0x00000000u; // 803AFFC4
  W32(c->r[3]+0x00000008u,c->r[4]); // 803AFFC8
L_803AFFCC:;
  c->r[30]=c->r[31]|c->r[31]; // 803AFFCC
  c->r[28]=0u+0x00000000u; // 803AFFD0
L_803AFFD4:;
  c->r[27]=R32(c->r[30]+0x0000000Cu); // 803AFFD4
  cmps(c,0,(int32_t)c->r[27],0); // 803AFFD8
  if (crb(c,2)) { goto L_803AFFEC; } // 803AFFDC
  c->lr=0x803AFFE4u; f_8039A9F0(c); // 803AFFE0
  c->r[4]=c->r[27]|c->r[27]; // 803AFFE4
  c->lr=0x803AFFECu; f_8039AEB4(c); // 803AFFE8
L_803AFFEC:;
  c->r[28]=c->r[28]+0x00000001u; // 803AFFEC
  c->r[30]=c->r[30]+0x00000004u; // 803AFFF0
  cmps(c,0,(int32_t)c->r[28],4); // 803AFFF4
  if (crb(c,0)) { IRQCHK(c); goto L_803AFFD4; } // 803AFFF8
  c->r[29]=c->r[29]+0x00000001u; // 803AFFFC
  c->r[31]=c->r[31]+0x00000010u; // 803B0000
  cmps(c,0,(int32_t)c->r[29],2); // 803B0004
  if (crb(c,0)) { IRQCHK(c); goto L_803AFFCC; } // 803B0008
  cmps(c,0,(int32_t)c->r[26],0); // 803B000C
  if (!crb(c,1)) { goto L_803B001C; } // 803B0010
  c->r[3]=c->r[25]|c->r[25]; // 803B0014
  c->lr=0x803B001Cu; f_802896EC(c); // 803B0018
L_803B001C:;
  c->r[11]=c->r[1]+0x00000030u; // 803B001C
  c->r[3]=c->r[25]|c->r[25]; // 803B0020
  c->lr=0x803B0028u; { c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 803B0024
  c->r[0]=R32(c->r[1]+0x00000034u); // 803B0028
  c->lr=c->r[0]; // 803B002C
  c->r[1]=c->r[1]+0x00000030u; // 803B0030
  return; // 803B0034
}

// fn_803B0038
void f_803B0038(Ctx* __restrict c) {
  trace_call(0x803B0038u);
  {uint32_t ea=c->r[2]+0xFFFFEF70u; c->f[1]=c->ps1[1]=RF32(ea);} // 803B0038
  c->r[8]=0u+0x00000000u; // 803B003C
  {uint32_t ea=c->r[2]+0xFFFFEF74u; c->f[0]=c->ps1[0]=RF32(ea);} // 803B0040
  c->r[0]=0u+0x00000001u; // 803B0044
  W32(c->r[3]+0x0000009Cu,c->r[4]); // 803B0048
  W32(c->r[3]+0x000000A0u,c->r[5]); // 803B004C
  W32(c->r[3]+0x000000A4u,c->r[6]); // 803B0050
  W32(c->r[3]+0x000000A8u,c->r[7]); // 803B0054
  W8(c->r[3]+0x000000B1u,c->r[8]); // 803B0058
  W8(c->r[3]+0x000000AFu,c->r[8]); // 803B005C
  W8(c->r[3]+0x000000B0u,c->r[8]); // 803B0060
  W8(c->r[3]+0x000000AEu,c->r[8]); // 803B0064
  {uint32_t ea=c->r[3]+0x00000110u; WF32(ea,c->f[1]);} // 803B0068
  {uint32_t ea=c->r[3]+0x00000114u; WF32(ea,c->f[0]);} // 803B006C
  {uint32_t ea=c->r[3]+0x00000118u; WF32(ea,c->f[1]);} // 803B0070
  {uint32_t ea=c->r[3]+0x000000C0u; WF32(ea,c->f[1]);} // 803B0074
  {uint32_t ea=c->r[3]+0x000000B8u; WF32(ea,c->f[0]);} // 803B0078
  {uint32_t ea=c->r[3]+0x000000BCu; WF32(ea,c->f[0]);} // 803B007C
  W32(c->r[3]+0x000000C4u,c->r[0]); // 803B0080
  {uint32_t ea=c->r[3]+0x000000C8u; WF32(ea,c->f[1]);} // 803B0084
  {uint32_t ea=c->r[3]+0x000000CCu; WF32(ea,c->f[1]);} // 803B0088
  {uint32_t ea=c->r[3]+0x000000D0u; WF32(ea,c->f[0]);} // 803B008C
  {uint32_t ea=c->r[3]+0x000000D4u; WF32(ea,c->f[0]);} // 803B0090
  {uint32_t ea=c->r[3]+0x000000D8u; WF32(ea,c->f[0]);} // 803B0094
  {uint32_t ea=c->r[3]+0x000000DCu; WF32(ea,c->f[1]);} // 803B0098
  {uint32_t ea=c->r[3]+0x000000ECu; WF32(ea,c->f[1]);} // 803B009C
  {uint32_t ea=c->r[3]+0x000000FCu; WF32(ea,c->f[0]);} // 803B00A0
  {uint32_t ea=c->r[3]+0x000000E0u; WF32(ea,c->f[1]);} // 803B00A4
  {uint32_t ea=c->r[3]+0x000000F0u; WF32(ea,c->f[1]);} // 803B00A8
  {uint32_t ea=c->r[3]+0x00000100u; WF32(ea,c->f[0]);} // 803B00AC
  {uint32_t ea=c->r[3]+0x000000E4u; WF32(ea,c->f[1]);} // 803B00B0
  {uint32_t ea=c->r[3]+0x000000F4u; WF32(ea,c->f[1]);} // 803B00B4
  {uint32_t ea=c->r[3]+0x00000104u; WF32(ea,c->f[0]);} // 803B00B8
  {uint32_t ea=c->r[3]+0x000000E8u; WF32(ea,c->f[1]);} // 803B00BC
  {uint32_t ea=c->r[3]+0x000000F8u; WF32(ea,c->f[1]);} // 803B00C0
  {uint32_t ea=c->r[3]+0x00000108u; WF32(ea,c->f[0]);} // 803B00C4
  {uint32_t ea=c->r[3]+0x0000010Cu; WF32(ea,c->f[1]);} // 803B00C8
  W8(c->r[3]+0x000000B2u,c->r[8]); // 803B00CC
  W32(c->r[3]+0x0000011Cu,c->r[8]); // 803B00D0
  W32(c->r[3]+0x00000120u,c->r[8]); // 803B00D4
  return; // 803B00D8
}

// StopFinished__Q44nw4r3snd6detail5VoiceFv
void f_803B00DC(Ctx* __restrict c) {
  trace_call(0x803B00DCu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803B00DC
  c->r[0]=c->lr; // 803B00E0
  W32(c->r[1]+0x00000014u,c->r[0]); // 803B00E4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 803B00E8
  W32(c->r[1]+0x00000008u,c->r[30]); // 803B00EC
  c->r[30]=c->r[3]|c->r[3]; // 803B00F0
  c->r[0]=R8(c->r[3]+0x000000ACu); // 803B00F4
  cmps(c,0,(int32_t)c->r[0],0); // 803B00F8
  if (crb(c,2)) { goto L_803B0160; } // 803B00FC
  c->r[0]=R8(c->r[3]+0x000000AEu); // 803B0100
  cmps(c,0,(int32_t)c->r[0],0); // 803B0104
  if (crb(c,2)) { goto L_803B0160; } // 803B0108
  c->r[3]=R32(c->r[3]+0x0000000Cu); // 803B010C
  c->r[31]=0u+0x00000000u; // 803B0110
  cmps(c,0,(int32_t)c->r[3],0); // 803B0114
  if (crb(c,2)) { goto L_803B012C; } // 803B0118
  c->lr=0x803B0120u; f_80398184(c); // 803B011C
  cmps(c,0,(int32_t)c->r[3],0); // 803B0120
  if (crb(c,2)) { goto L_803B012C; } // 803B0124
  c->r[31]=0u+0x00000001u; // 803B0128
L_803B012C:;
  cmps(c,0,(int32_t)c->r[31],0); // 803B012C
  if (crb(c,2)) { goto L_803B0160; } // 803B0130
  c->r[12]=R32(c->r[30]+0x000000A4u); // 803B0134
  cmps(c,0,(int32_t)c->r[12],0); // 803B0138
  if (crb(c,2)) { goto L_803B0154; } // 803B013C
  c->r[3]=c->r[30]|c->r[30]; // 803B0140
  c->r[5]=R32(c->r[30]+0x000000A8u); // 803B0144
  c->r[4]=0u+0x00000000u; // 803B0148
  c->ctr=c->r[12]; // 803B014C
  if (true) { c->lr=0x803B0154u; dispatch(c,c->ctr); } // 803B0150
L_803B0154:;
  c->r[0]=0u+0x00000000u; // 803B0154
  W8(c->r[30]+0x000000AEu,c->r[0]); // 803B0158
  W8(c->r[30]+0x000000ADu,c->r[0]); // 803B015C
L_803B0160:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 803B0160
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 803B0164
  c->r[30]=R32(c->r[1]+0x00000008u); // 803B0168
  c->lr=c->r[0]; // 803B016C
  c->r[1]=c->r[1]+0x00000010u; // 803B0170
  return; // 803B0174
}

// fn_803B0178
void f_803B0178(Ctx* __restrict c) {
  trace_call(0x803B0178u);
  {uint32_t ea=c->r[1]+0xFFFFFFA0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803B0178
  c->r[0]=c->lr; // 803B017C
  W32(c->r[1]+0x00000064u,c->r[0]); // 803B0180
  {uint32_t ea=c->r[1]+0x00000050u; WF64(ea,c->f[31]);} // 803B0184
  {uint32_t ea=c->r[1]+0x00000058u; psq_store(c,31,ea,0,0);} // 803B0188
  {uint32_t ea=c->r[1]+0x00000040u; WF64(ea,c->f[30]);} // 803B018C
  {uint32_t ea=c->r[1]+0x00000048u; psq_store(c,30,ea,0,0);} // 803B0190
  {uint32_t ea=c->r[1]+0x00000030u; WF64(ea,c->f[29]);} // 803B0194
  {uint32_t ea=c->r[1]+0x00000038u; psq_store(c,29,ea,0,0);} // 803B0198
  c->r[11]=c->r[1]+0x00000030u; // 803B019C
  c->lr=0x803B01A4u; { W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 803B01A0
  c->r[0]=R8(c->r[3]+0x000000ADu); // 803B01A4
  c->r[31]=c->r[3]|c->r[3]; // 803B01A8
  cmps(c,0,(int32_t)c->r[0],0); // 803B01AC
  if (crb(c,2)) { goto L_803B0398; } // 803B01B0
  c->r[0]=R8(c->r[3]+0x000000B1u); // 803B01B4
  c->r[0]=rotl(c->r[0],0)&0x00000004u; cr0(c,c->r[0]); // 803B01B8
  if (crb(c,2)) { goto L_803B025C; } // 803B01BC
  {uint32_t ea=c->r[2]+0xFFFFEF70u; c->f[30]=c->ps1[30]=RF32(ea);} // 803B01C0
  c->r[25]=c->r[31]|c->r[31]; // 803B01C4
  {uint32_t ea=c->r[2]+0xFFFFEF74u; c->f[31]=c->ps1[31]=RF32(ea);} // 803B01C8
  c->r[29]=0u+0x00000000u; // 803B01CC
  c->r[26]=0u+0x00000000u; // 803B01D0
  goto L_803B0244; // 803B01D4
L_803B01D8:;
  {uint32_t ea=c->r[25]+0x00000030u; c->f[1]=c->ps1[1]=RF32(ea);} // 803B01D8
  fcmp(c,0,c->f[1],c->f[30]); // 803B01DC
  if (!crb(c,1)) { goto L_803B01EC; } // 803B01E0
  c->f[1]=c->f[30]; // 803B01E4
  goto L_803B01F8; // 803B01E8
L_803B01EC:;
  fcmp(c,0,c->f[1],c->f[31]); // 803B01EC
  if (!crb(c,0)) { goto L_803B01F8; } // 803B01F0
  c->f[1]=c->f[31]; // 803B01F4
L_803B01F8:;
  {uint32_t ea=c->r[31]+0x0000010Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 803B01F8
  c->r[27]=c->r[31]+c->r[26]; // 803B01FC
  c->r[30]=0u+0x00000000u; // 803B0200
  c->f[29]=c->ps1[29]=S(c->f[0]*c->f[1]); // 803B0204
  goto L_803B022C; // 803B0208
L_803B020C:;
  c->r[3]=R32(c->r[27]+0x0000000Cu); // 803B020C
  cmps(c,0,(int32_t)c->r[3],0); // 803B0210
  if (crb(c,2)) { goto L_803B0224; } // 803B0214
  c->f[1]=c->f[29]; // 803B0218
  c->r[4]=0u+0x00000000u; // 803B021C
  c->lr=0x803B0224u; f_80399A78(c); // 803B0220
L_803B0224:;
  c->r[27]=c->r[27]+0x00000010u; // 803B0224
  c->r[30]=c->r[30]+0x00000001u; // 803B0228
L_803B022C:;
  c->r[0]=R32(c->r[31]+0x0000009Cu); // 803B022C
  cmps(c,0,(int32_t)c->r[30],(int32_t)c->r[0]); // 803B0230
  if (crb(c,0)) { IRQCHK(c); goto L_803B020C; } // 803B0234
  c->r[25]=c->r[25]+0x0000001Cu; // 803B0238
  c->r[26]=c->r[26]+0x00000004u; // 803B023C
  c->r[29]=c->r[29]+0x00000001u; // 803B0240
L_803B0244:;
  c->r[0]=R32(c->r[31]+0x000000A0u); // 803B0244
  cmps(c,0,(int32_t)c->r[29],(int32_t)c->r[0]); // 803B0248
  if (crb(c,0)) { IRQCHK(c); goto L_803B01D8; } // 803B024C
  c->r[0]=R8(c->r[31]+0x000000B1u); // 803B0250
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFFBu; // 803B0254
  W8(c->r[31]+0x000000B1u,c->r[0]); // 803B0258
L_803B025C:;
  c->r[0]=R8(c->r[31]+0x000000B1u); // 803B025C
  c->r[0]=rotl(c->r[0],0)&0x00000008u; cr0(c,c->r[0]); // 803B0260
  if (crb(c,2)) { goto L_803B027C; } // 803B0264
  c->r[3]=c->r[31]|c->r[31]; // 803B0268
  c->lr=0x803B0270u; f_803B15FC(c); // 803B026C
  c->r[0]=R8(c->r[31]+0x000000B1u); // 803B0270
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFF7u; // 803B0274
  W8(c->r[31]+0x000000B1u,c->r[0]); // 803B0278
L_803B027C:;
  c->r[0]=R8(c->r[31]+0x000000B1u); // 803B027C
  c->r[0]=rotl(c->r[0],0)&0x00000010u; cr0(c,c->r[0]); // 803B0280
  if (crb(c,2)) { goto L_803B02A4; } // 803B0284
  c->r[3]=c->r[31]|c->r[31]; // 803B0288
  c->lr=0x803B0290u; f_803B16EC(c); // 803B028C
  cmps(c,0,(int32_t)c->r[3],0); // 803B0290
  if (!crb(c,2)) { goto L_803B02A4; } // 803B0294
  c->r[0]=R8(c->r[31]+0x000000B1u); // 803B0298
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFEFu; // 803B029C
  W8(c->r[31]+0x000000B1u,c->r[0]); // 803B02A0
L_803B02A4:;
  c->r[0]=R8(c->r[31]+0x000000B1u); // 803B02A4
  c->r[0]=rotl(c->r[0],0)&0x00000020u; cr0(c,c->r[0]); // 803B02A8
  if (crb(c,2)) { goto L_803B032C; } // 803B02AC
  c->r[27]=c->r[31]|c->r[31]; // 803B02B0
  c->r[28]=0u+0x00000000u; // 803B02B4
  c->r[26]=0u+0x00000000u; // 803B02B8
  goto L_803B0314; // 803B02BC
L_803B02C0:;
  {uint32_t ea=c->r[31]+0x000000C0u; c->f[1]=c->ps1[1]=RF32(ea);} // 803B02C0
  {uint32_t ea=c->r[27]+0x00000040u; c->f[0]=c->ps1[0]=RF32(ea);} // 803B02C4
  c->f[1]=c->ps1[1]=S(c->f[1]+c->f[0]); // 803B02C8
  c->lr=0x803B02D0u; f_803B3070(c); // 803B02CC
  c->r[30]=c->r[3]|c->r[3]; // 803B02D0
  c->r[25]=c->r[31]+c->r[26]; // 803B02D4
  c->r[29]=0u+0x00000000u; // 803B02D8
  goto L_803B02FC; // 803B02DC
L_803B02E0:;
  c->r[3]=R32(c->r[25]+0x0000000Cu); // 803B02E0
  cmps(c,0,(int32_t)c->r[3],0); // 803B02E4
  if (crb(c,2)) { goto L_803B02F4; } // 803B02E8
  c->r[4]=rotl(c->r[30],0)&0x0000FFFFu; // 803B02EC
  c->lr=0x803B02F4u; f_80399CFC(c); // 803B02F0
L_803B02F4:;
  c->r[25]=c->r[25]+0x00000010u; // 803B02F4
  c->r[29]=c->r[29]+0x00000001u; // 803B02F8
L_803B02FC:;
  c->r[0]=R32(c->r[31]+0x0000009Cu); // 803B02FC
  cmps(c,0,(int32_t)c->r[29],(int32_t)c->r[0]); // 803B0300
  if (crb(c,0)) { IRQCHK(c); goto L_803B02E0; } // 803B0304
  c->r[27]=c->r[27]+0x0000001Cu; // 803B0308
  c->r[26]=c->r[26]+0x00000004u; // 803B030C
  c->r[28]=c->r[28]+0x00000001u; // 803B0310
L_803B0314:;
  c->r[0]=R32(c->r[31]+0x000000A0u); // 803B0314
  cmps(c,0,(int32_t)c->r[28],(int32_t)c->r[0]); // 803B0318
  if (crb(c,0)) { IRQCHK(c); goto L_803B02C0; } // 803B031C
  c->r[0]=R8(c->r[31]+0x000000B1u); // 803B0320
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFDFu; // 803B0324
  W8(c->r[31]+0x000000B1u,c->r[0]); // 803B0328
L_803B032C:;
  c->r[0]=R8(c->r[31]+0x000000B1u); // 803B032C
  c->r[0]=rotl(c->r[0],0)&0x00000080u; cr0(c,c->r[0]); // 803B0330
  if (crb(c,2)) { goto L_803B0398; } // 803B0334
  c->r[29]=0u+0x00000000u; // 803B0338
  c->r[30]=0u+0x00000000u; // 803B033C
  goto L_803B0380; // 803B0340
L_803B0344:;
  c->r[27]=c->r[31]+c->r[30]; // 803B0344
  c->r[28]=0u+0x00000000u; // 803B0348
  goto L_803B036C; // 803B034C
L_803B0350:;
  c->r[3]=R32(c->r[27]+0x0000000Cu); // 803B0350
  cmps(c,0,(int32_t)c->r[3],0); // 803B0354
  if (crb(c,2)) { goto L_803B0364; } // 803B0358
  c->r[4]=R8(c->r[31]+0x000000B2u); // 803B035C
  c->lr=0x803B0364u; f_80399E8C(c); // 803B0360
L_803B0364:;
  c->r[27]=c->r[27]+0x00000010u; // 803B0364
  c->r[28]=c->r[28]+0x00000001u; // 803B0368
L_803B036C:;
  c->r[0]=R32(c->r[31]+0x0000009Cu); // 803B036C
  cmps(c,0,(int32_t)c->r[28],(int32_t)c->r[0]); // 803B0370
  if (crb(c,0)) { IRQCHK(c); goto L_803B0350; } // 803B0374
  c->r[30]=c->r[30]+0x00000004u; // 803B0378
  c->r[29]=c->r[29]+0x00000001u; // 803B037C
L_803B0380:;
  c->r[0]=R32(c->r[31]+0x000000A0u); // 803B0380
  cmps(c,0,(int32_t)c->r[29],(int32_t)c->r[0]); // 803B0384
  if (crb(c,0)) { IRQCHK(c); goto L_803B0344; } // 803B0388
  c->r[0]=R8(c->r[31]+0x000000B1u); // 803B038C
  c->r[0]=rotl(c->r[0],0)&0x0000007Fu; // 803B0390
  W8(c->r[31]+0x000000B1u,c->r[0]); // 803B0394
L_803B0398:;
  {uint32_t ea=c->r[1]+0x00000058u; psq_load(c,31,ea,0,0);} // 803B0398
  {uint32_t ea=c->r[1]+0x00000050u; c->f[31]=RF64(ea);} // 803B039C
  {uint32_t ea=c->r[1]+0x00000048u; psq_load(c,30,ea,0,0);} // 803B03A0
  {uint32_t ea=c->r[1]+0x00000040u; c->f[30]=RF64(ea);} // 803B03A4
  {uint32_t ea=c->r[1]+0x00000038u; psq_load(c,29,ea,0,0);} // 803B03A8
  c->r[11]=c->r[1]+0x00000030u; // 803B03AC
  {uint32_t ea=c->r[1]+0x00000030u; c->f[29]=RF64(ea);} // 803B03B0
  c->lr=0x803B03B8u; { c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 803B03B4
  c->r[0]=R32(c->r[1]+0x00000064u); // 803B03B8
  c->lr=c->r[0]; // 803B03BC
  c->r[1]=c->r[1]+0x00000060u; // 803B03C0
  return; // 803B03C4
}

// fn_803B03C8
void f_803B03C8(Ctx* __restrict c) {
  trace_call(0x803B03C8u);
  {uint32_t ea=c->r[1]+0xFFFFFFA0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803B03C8
  c->r[0]=c->lr; // 803B03CC
  W32(c->r[1]+0x00000064u,c->r[0]); // 803B03D0
  {uint32_t ea=c->r[1]+0x00000050u; WF64(ea,c->f[31]);} // 803B03D4
  {uint32_t ea=c->r[1]+0x00000058u; psq_store(c,31,ea,0,0);} // 803B03D8
  {uint32_t ea=c->r[1]+0x00000040u; WF64(ea,c->f[30]);} // 803B03DC
  {uint32_t ea=c->r[1]+0x00000048u; psq_store(c,30,ea,0,0);} // 803B03E0
  {uint32_t ea=c->r[1]+0x00000030u; WF64(ea,c->f[29]);} // 803B03E4
  {uint32_t ea=c->r[1]+0x00000038u; psq_store(c,29,ea,0,0);} // 803B03E8
  c->r[11]=c->r[1]+0x00000030u; // 803B03EC
  c->lr=0x803B03F4u; { W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 803B03F0
  c->r[31]=c->r[3]|c->r[3]; // 803B03F4
  c->lr=0x803B03FCu; f_8025EA10(c); // 803B03F8
  c->r[0]=R8(c->r[31]+0x000000ACu); // 803B03FC
  c->r[30]=c->r[3]|c->r[3]; // 803B0400
  cmps(c,0,(int32_t)c->r[0],0); // 803B0404
  if (!crb(c,2)) { goto L_803B0414; } // 803B0408
  c->lr=0x803B0410u; f_8025EA38(c); // 803B040C
  goto L_803B06D4; // 803B0410
L_803B0414:;
  c->r[0]=R8(c->r[31]+0x000000B1u); // 803B0414
  c->r[0]=rotl(c->r[0],0)&0x00000001u; cr0(c,c->r[0]); // 803B0418
  if (crb(c,2)) { goto L_803B0540; } // 803B041C
  c->r[0]=R8(c->r[31]+0x000000ADu); // 803B0420
  cmps(c,0,(int32_t)c->r[0],0); // 803B0424
  if (crb(c,2)) { goto L_803B0540; } // 803B0428
  c->r[0]=R8(c->r[31]+0x000000AEu); // 803B042C
  cmps(c,0,(int32_t)c->r[0],0); // 803B0430
  if (!crb(c,2)) { goto L_803B0540; } // 803B0434
  {uint32_t ea=c->r[2]+0xFFFFEF70u; c->f[30]=c->ps1[30]=RF32(ea);} // 803B0438
  c->r[26]=c->r[31]|c->r[31]; // 803B043C
  {uint32_t ea=c->r[2]+0xFFFFEF74u; c->f[31]=c->ps1[31]=RF32(ea);} // 803B0440
  c->r[28]=0u+0x00000000u; // 803B0444
  c->r[27]=0u+0x00000000u; // 803B0448
  goto L_803B04BC; // 803B044C
L_803B0450:;
  {uint32_t ea=c->r[26]+0x00000030u; c->f[1]=c->ps1[1]=RF32(ea);} // 803B0450
  fcmp(c,0,c->f[1],c->f[30]); // 803B0454
  if (!crb(c,1)) { goto L_803B0464; } // 803B0458
  c->f[1]=c->f[30]; // 803B045C
  goto L_803B0470; // 803B0460
L_803B0464:;
  fcmp(c,0,c->f[1],c->f[31]); // 803B0464
  if (!crb(c,0)) { goto L_803B0470; } // 803B0468
  c->f[1]=c->f[31]; // 803B046C
L_803B0470:;
  {uint32_t ea=c->r[31]+0x0000010Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 803B0470
  c->r[25]=c->r[31]+c->r[27]; // 803B0474
  c->r[29]=0u+0x00000000u; // 803B0478
  c->f[29]=c->ps1[29]=S(c->f[0]*c->f[1]); // 803B047C
  goto L_803B04A4; // 803B0480
L_803B0484:;
  c->r[3]=R32(c->r[25]+0x0000000Cu); // 803B0484
  cmps(c,0,(int32_t)c->r[3],0); // 803B0488
  if (crb(c,2)) { goto L_803B049C; } // 803B048C
  c->f[1]=c->f[29]; // 803B0490
  c->r[4]=0u+0x00000001u; // 803B0494
  c->lr=0x803B049Cu; f_80399A78(c); // 803B0498
L_803B049C:;
  c->r[25]=c->r[25]+0x00000010u; // 803B049C
  c->r[29]=c->r[29]+0x00000001u; // 803B04A0
L_803B04A4:;
  c->r[0]=R32(c->r[31]+0x0000009Cu); // 803B04A4
  cmps(c,0,(int32_t)c->r[29],(int32_t)c->r[0]); // 803B04A8
  if (crb(c,0)) { IRQCHK(c); goto L_803B0484; } // 803B04AC
  c->r[26]=c->r[26]+0x0000001Cu; // 803B04B0
  c->r[27]=c->r[27]+0x00000004u; // 803B04B4
  c->r[28]=c->r[28]+0x00000001u; // 803B04B8
L_803B04BC:;
  c->r[0]=R32(c->r[31]+0x000000A0u); // 803B04BC
  cmps(c,0,(int32_t)c->r[28],(int32_t)c->r[0]); // 803B04C0
  if (crb(c,0)) { IRQCHK(c); goto L_803B0450; } // 803B04C4
  c->r[26]=c->r[31]|c->r[31]; // 803B04C8
  c->r[29]=0u+0x00000000u; // 803B04CC
  goto L_803B051C; // 803B04D0
L_803B04D4:;
  c->r[27]=c->r[26]|c->r[26]; // 803B04D4
  c->r[28]=0u+0x00000000u; // 803B04D8
  goto L_803B0508; // 803B04DC
L_803B04E0:;
  c->r[3]=R32(c->r[27]+0x0000000Cu); // 803B04E0
  cmps(c,0,(int32_t)c->r[3],0); // 803B04E4
  if (crb(c,2)) { goto L_803B0500; } // 803B04E8
  c->r[3]=R32(c->r[3]+0x00000000u); // 803B04EC
  cmps(c,0,(int32_t)c->r[3],0); // 803B04F0
  if (crb(c,2)) { goto L_803B0500; } // 803B04F4
  c->r[4]=0u+0x00000001u; // 803B04F8
  c->lr=0x803B0500u; f_80276604(c); // 803B04FC
L_803B0500:;
  c->r[27]=c->r[27]+0x00000004u; // 803B0500
  c->r[28]=c->r[28]+0x00000001u; // 803B0504
L_803B0508:;
  c->r[0]=R32(c->r[31]+0x000000A0u); // 803B0508
  cmps(c,0,(int32_t)c->r[28],(int32_t)c->r[0]); // 803B050C
  if (crb(c,0)) { IRQCHK(c); goto L_803B04E0; } // 803B0510
  c->r[26]=c->r[26]+0x00000010u; // 803B0514
  c->r[29]=c->r[29]+0x00000001u; // 803B0518
L_803B051C:;
  c->r[0]=R32(c->r[31]+0x0000009Cu); // 803B051C
  cmps(c,0,(int32_t)c->r[29],(int32_t)c->r[0]); // 803B0520
  if (crb(c,0)) { IRQCHK(c); goto L_803B04D4; } // 803B0524
  c->r[0]=R8(c->r[31]+0x000000B1u); // 803B0528
  c->r[3]=0u+0x00000001u; // 803B052C
  W8(c->r[31]+0x000000AEu,c->r[3]); // 803B0530
  c->r[0]=rotl(c->r[0],0)&0x000000FEu; // 803B0534
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFFBu; // 803B0538
  W8(c->r[31]+0x000000B1u,c->r[0]); // 803B053C
L_803B0540:;
  c->r[0]=R8(c->r[31]+0x000000AEu); // 803B0540
  cmps(c,0,(int32_t)c->r[0],0); // 803B0544
  if (crb(c,2)) { goto L_803B06CC; } // 803B0548
  c->r[0]=R8(c->r[31]+0x000000B1u); // 803B054C
  c->r[0]=rotl(c->r[0],0)&0x00000002u; cr0(c,c->r[0]); // 803B0550
  if (crb(c,2)) { goto L_803B067C; } // 803B0554
  c->r[0]=R8(c->r[31]+0x000000ADu); // 803B0558
  cmps(c,0,(int32_t)c->r[0],0); // 803B055C
  if (crb(c,2)) { goto L_803B067C; } // 803B0560
  c->r[0]=R8(c->r[31]+0x000000AFu); // 803B0564
  cmps(c,0,(int32_t)c->r[0],0); // 803B0568
  if (!crb(c,2)) { goto L_803B0580; } // 803B056C
  c->lr=0x803B0574u; f_80396E38(c); // 803B0570
  c->r[0]=R8(c->r[3]+0x0000001Au); // 803B0574
  cmps(c,0,(int32_t)c->r[0],0); // 803B0578
  if (crb(c,2)) { goto L_803B0608; } // 803B057C
L_803B0580:;
  c->r[26]=c->r[31]|c->r[31]; // 803B0580
  c->r[29]=0u+0x00000000u; // 803B0584
  goto L_803B05F0; // 803B0588
L_803B058C:;
  c->r[27]=c->r[26]|c->r[26]; // 803B058C
  c->r[28]=0u+0x00000000u; // 803B0590
  goto L_803B05DC; // 803B0594
L_803B0598:;
  c->r[3]=R32(c->r[27]+0x0000000Cu); // 803B0598
  cmps(c,0,(int32_t)c->r[3],0); // 803B059C
  if (crb(c,2)) { goto L_803B05D4; } // 803B05A0
  c->r[3]=R32(c->r[3]+0x00000000u); // 803B05A4
  c->r[4]=0u+0x00000000u; // 803B05A8
  cmps(c,0,(int32_t)c->r[3],0); // 803B05AC
  if (crb(c,2)) { goto L_803B05C4; } // 803B05B0
  c->r[0]=R16(c->r[3]+0x00000038u); // 803B05B4
  cmpu(c,0,c->r[0],0x00000001u); // 803B05B8
  if (!crb(c,2)) { goto L_803B05C4; } // 803B05BC
  c->r[4]=0u+0x00000001u; // 803B05C0
L_803B05C4:;
  cmps(c,0,(int32_t)c->r[4],0); // 803B05C4
  if (crb(c,2)) { goto L_803B05D4; } // 803B05C8
  c->r[4]=0u+0x00000000u; // 803B05CC
  c->lr=0x803B05D4u; f_80276604(c); // 803B05D0
L_803B05D4:;
  c->r[27]=c->r[27]+0x00000004u; // 803B05D4
  c->r[28]=c->r[28]+0x00000001u; // 803B05D8
L_803B05DC:;
  c->r[0]=R32(c->r[31]+0x000000A0u); // 803B05DC
  cmps(c,0,(int32_t)c->r[28],(int32_t)c->r[0]); // 803B05E0
  if (crb(c,0)) { IRQCHK(c); goto L_803B0598; } // 803B05E4
  c->r[26]=c->r[26]+0x00000010u; // 803B05E8
  c->r[29]=c->r[29]+0x00000001u; // 803B05EC
L_803B05F0:;
  c->r[0]=R32(c->r[31]+0x0000009Cu); // 803B05F0
  cmps(c,0,(int32_t)c->r[29],(int32_t)c->r[0]); // 803B05F4
  if (crb(c,0)) { IRQCHK(c); goto L_803B058C; } // 803B05F8
  c->r[0]=0u+0x00000001u; // 803B05FC
  W8(c->r[31]+0x000000B0u,c->r[0]); // 803B0600
  goto L_803B0670; // 803B0604
L_803B0608:;
  c->r[26]=c->r[31]|c->r[31]; // 803B0608
  c->r[29]=0u+0x00000000u; // 803B060C
  goto L_803B065C; // 803B0610
L_803B0614:;
  c->r[27]=c->r[26]|c->r[26]; // 803B0614
  c->r[28]=0u+0x00000000u; // 803B0618
  goto L_803B0648; // 803B061C
L_803B0620:;
  c->r[3]=R32(c->r[27]+0x0000000Cu); // 803B0620
  cmps(c,0,(int32_t)c->r[3],0); // 803B0624
  if (crb(c,2)) { goto L_803B0640; } // 803B0628
  c->r[3]=R32(c->r[3]+0x00000000u); // 803B062C
  cmps(c,0,(int32_t)c->r[3],0); // 803B0630
  if (crb(c,2)) { goto L_803B0640; } // 803B0634
  c->r[4]=0u+0x00000001u; // 803B0638
  c->lr=0x803B0640u; f_80276604(c); // 803B063C
L_803B0640:;
  c->r[27]=c->r[27]+0x00000004u; // 803B0640
  c->r[28]=c->r[28]+0x00000001u; // 803B0644
L_803B0648:;
  c->r[0]=R32(c->r[31]+0x000000A0u); // 803B0648
  cmps(c,0,(int32_t)c->r[28],(int32_t)c->r[0]); // 803B064C
  if (crb(c,0)) { IRQCHK(c); goto L_803B0620; } // 803B0650
  c->r[26]=c->r[26]+0x00000010u; // 803B0654
  c->r[29]=c->r[29]+0x00000001u; // 803B0658
L_803B065C:;
  c->r[0]=R32(c->r[31]+0x0000009Cu); // 803B065C
  cmps(c,0,(int32_t)c->r[29],(int32_t)c->r[0]); // 803B0660
  if (crb(c,0)) { IRQCHK(c); goto L_803B0614; } // 803B0664
  c->r[0]=0u+0x00000000u; // 803B0668
  W8(c->r[31]+0x000000B0u,c->r[0]); // 803B066C
L_803B0670:;
  c->r[0]=R8(c->r[31]+0x000000B1u); // 803B0670
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFFDu; // 803B0674
  W8(c->r[31]+0x000000B1u,c->r[0]); // 803B0678
L_803B067C:;
  c->r[27]=c->r[31]|c->r[31]; // 803B067C
  c->r[29]=0u+0x00000000u; // 803B0680
  goto L_803B06C0; // 803B0684
L_803B0688:;
  c->r[26]=c->r[27]|c->r[27]; // 803B0688
  c->r[28]=0u+0x00000000u; // 803B068C
  goto L_803B06AC; // 803B0690
L_803B0694:;
  c->r[3]=R32(c->r[26]+0x0000000Cu); // 803B0694
  cmps(c,0,(int32_t)c->r[3],0); // 803B0698
  if (crb(c,2)) { goto L_803B06A4; } // 803B069C
  c->lr=0x803B06A4u; f_8039A158(c); // 803B06A0
L_803B06A4:;
  c->r[26]=c->r[26]+0x00000004u; // 803B06A4
  c->r[28]=c->r[28]+0x00000001u; // 803B06A8
L_803B06AC:;
  c->r[0]=R32(c->r[31]+0x000000A0u); // 803B06AC
  cmps(c,0,(int32_t)c->r[28],(int32_t)c->r[0]); // 803B06B0
  if (crb(c,0)) { IRQCHK(c); goto L_803B0694; } // 803B06B4
  c->r[27]=c->r[27]+0x00000010u; // 803B06B8
  c->r[29]=c->r[29]+0x00000001u; // 803B06BC
L_803B06C0:;
  c->r[0]=R32(c->r[31]+0x0000009Cu); // 803B06C0
  cmps(c,0,(int32_t)c->r[29],(int32_t)c->r[0]); // 803B06C4
  if (crb(c,0)) { IRQCHK(c); goto L_803B0688; } // 803B06C8
L_803B06CC:;
  c->r[3]=c->r[30]|c->r[30]; // 803B06CC
  c->lr=0x803B06D4u; f_8025EA38(c); // 803B06D0
L_803B06D4:;
  {uint32_t ea=c->r[1]+0x00000058u; psq_load(c,31,ea,0,0);} // 803B06D4
  {uint32_t ea=c->r[1]+0x00000050u; c->f[31]=RF64(ea);} // 803B06D8
  {uint32_t ea=c->r[1]+0x00000048u; psq_load(c,30,ea,0,0);} // 803B06DC
  {uint32_t ea=c->r[1]+0x00000040u; c->f[30]=RF64(ea);} // 803B06E0
  {uint32_t ea=c->r[1]+0x00000038u; psq_load(c,29,ea,0,0);} // 803B06E4
  c->r[11]=c->r[1]+0x00000030u; // 803B06E8
  {uint32_t ea=c->r[1]+0x00000030u; c->f[29]=RF64(ea);} // 803B06EC
  c->lr=0x803B06F4u; { c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 803B06F0
  c->r[0]=R32(c->r[1]+0x00000064u); // 803B06F4
  c->lr=c->r[0]; // 803B06F8
  c->r[1]=c->r[1]+0x00000060u; // 803B06FC
  return; // 803B0700
}

// Acquire__Q44nw4r3snd6detail5VoiceFiiiPFPQ44nw4r3snd6detail5VoiceQ54nw4r3snd6detail5Voice19VoiceCallbackStatusPv_vPv
void f_803B0704(Ctx* __restrict c) {
  trace_call(0x803B0704u);
  {uint32_t ea=c->r[1]+0xFFFFFFA0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803B0704
  c->r[0]=c->lr; // 803B0708
  W32(c->r[1]+0x00000064u,c->r[0]); // 803B070C
  c->r[11]=c->r[1]+0x00000060u; // 803B0710
  c->lr=0x803B0718u; { W32(c->r[11]+0xFFFFFFCCu,c->r[19]); W32(c->r[11]+0xFFFFFFD0u,c->r[20]); W32(c->r[11]+0xFFFFFFD4u,c->r[21]); W32(c->r[11]+0xFFFFFFD8u,c->r[22]); W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 803B0714
  cmps(c,0,(int32_t)c->r[4],2); // 803B0718
  c->r[20]=c->r[3]|c->r[3]; // 803B071C
  c->r[21]=c->r[6]|c->r[6]; // 803B0720
  c->r[22]=c->r[7]|c->r[7]; // 803B0724
  c->r[23]=c->r[8]|c->r[8]; // 803B0728
  if (!crb(c,1)) { goto L_803B0738; } // 803B072C
  c->r[30]=0u+0x00000002u; // 803B0730
  goto L_803B0748; // 803B0734
L_803B0738:;
  cmps(c,0,(int32_t)c->r[4],1); // 803B0738
  c->r[30]=0u+0x00000001u; // 803B073C
  if (crb(c,0)) { goto L_803B0748; } // 803B0740
  c->r[30]=c->r[4]|c->r[4]; // 803B0744
L_803B0748:;
  cmps(c,0,(int32_t)c->r[5],4); // 803B0748
  if (!crb(c,1)) { goto L_803B0758; } // 803B074C
  c->r[29]=0u+0x00000004u; // 803B0750
  goto L_803B0768; // 803B0754
L_803B0758:;
  cmps(c,0,(int32_t)c->r[5],1); // 803B0758
  c->r[29]=0u+0x00000001u; // 803B075C
  if (crb(c,0)) { goto L_803B0768; } // 803B0760
  c->r[29]=c->r[5]|c->r[5]; // 803B0764
L_803B0768:;
  c->lr=0x803B076Cu; f_8025EA10(c); // 803B0768
  cmps(c,0,(int32_t)c->r[21],255); // 803B076C
  c->r[19]=c->r[3]|c->r[3]; // 803B0770
  c->r[27]=0u+0x00000010u; // 803B0774
  if (!crb(c,2)) { goto L_803B0780; } // 803B0778
  c->r[27]=0u+0x0000001Fu; // 803B077C
L_803B0780:;
  c->r[26]=(uint32_t)((int32_t)c->r[30]*(int32_t)c->r[29]); // 803B0780
  c->r[28]=c->r[1]+0x00000008u; // 803B0784
  c->r[25]=0u+0x00000000u; // 803B0788
  c->r[31]=0u+0x803B0000u; // 803B078C
  goto L_803B08A0; // 803B0790
L_803B0794:;
  c->lr=0x803B0798u; f_8039A9F0(c); // 803B0794
  c->r[4]=c->r[27]|c->r[27]; // 803B0798
  c->r[6]=c->r[20]|c->r[20]; // 803B079C
  c->r[5]=c->r[31]+0x00001858u; // 803B07A0
  c->lr=0x803B07A8u; f_8039ABE4(c); // 803B07A4
  cmps(c,0,(int32_t)c->r[3],0); // 803B07A8
  if (!crb(c,2)) { goto L_803B0854; } // 803B07AC
  c->r[24]=c->r[26]-c->r[25]; // 803B07B0
  c->lr=0x803B07B8u; f_803B266C(c); // 803B07B4
  c->r[5]=c->r[3]+0x00000008u; // 803B07B8
  c->r[3]=R32(c->r[3]+0x00000008u); // 803B07BC
  goto L_803B07E8; // 803B07C0
L_803B07C4:;
  c->r[0]=R32(c->r[3]+0xFFFFFF90u); // 803B07C4
  cmps(c,0,(int32_t)c->r[21],(int32_t)c->r[0]); // 803B07C8
  if (crb(c,0)) { goto L_803B07F0; } // 803B07CC
  c->r[4]=R32(c->r[3]+0xFFFFFF78u); // 803B07D0
  c->r[0]=R32(c->r[3]+0xFFFFFF7Cu); // 803B07D4
  c->r[0]=(uint32_t)((int32_t)c->r[4]*(int32_t)c->r[0]); // 803B07D8
  c->r[24]=c->r[24]-c->r[0]; cr0(c,c->r[24]); // 803B07DC
  if (!crb(c,1)) { goto L_803B07F0; } // 803B07E0
  c->r[3]=R32(c->r[3]+0x00000000u); // 803B07E4
L_803B07E8:;
  cmpu(c,0,c->r[3],c->r[5]); // 803B07E8
  if (!crb(c,2)) { IRQCHK(c); goto L_803B07C4; } // 803B07EC
L_803B07F0:;
  cmps(c,0,(int32_t)c->r[24],0); // 803B07F0
  if (!crb(c,1)) { goto L_803B0830; } // 803B07F4
  c->r[20]=c->r[1]+0x00000008u; // 803B07F8
  c->r[21]=0u+0x00000000u; // 803B07FC
  goto L_803B0818; // 803B0800
L_803B0804:;
  c->lr=0x803B0808u; f_8039A9F0(c); // 803B0804
  c->r[4]=R32(c->r[20]+0x00000000u); // 803B0808
  c->lr=0x803B0810u; f_8039AEB4(c); // 803B080C
  c->r[20]=c->r[20]+0x00000004u; // 803B0810
  c->r[21]=c->r[21]+0x00000001u; // 803B0814
L_803B0818:;
  cmps(c,0,(int32_t)c->r[21],(int32_t)c->r[25]); // 803B0818
  if (crb(c,0)) { IRQCHK(c); goto L_803B0804; } // 803B081C
  c->r[3]=c->r[19]|c->r[19]; // 803B0820
  c->lr=0x803B0828u; f_8025EA38(c); // 803B0824
  c->r[3]=0u+0x00000000u; // 803B0828
  goto L_803B0928; // 803B082C
L_803B0830:;
  cmpu(c,0,c->r[27],0x0000001Fu); // 803B0830
  c->r[24]=0u+0x00000011u; // 803B0834
  if (!crb(c,2)) { goto L_803B0840; } // 803B0838
  c->r[24]=0u+0x0000001Fu; // 803B083C
L_803B0840:;
  c->lr=0x803B0844u; f_8039A9F0(c); // 803B0840
  c->r[4]=c->r[24]|c->r[24]; // 803B0844
  c->r[6]=c->r[20]|c->r[20]; // 803B0848
  c->r[5]=c->r[31]+0x00001858u; // 803B084C
  c->lr=0x803B0854u; f_8039ABE4(c); // 803B0850
L_803B0854:;
  cmps(c,0,(int32_t)c->r[3],0); // 803B0854
  if (!crb(c,2)) { goto L_803B0894; } // 803B0858
  c->r[20]=c->r[1]+0x00000008u; // 803B085C
  c->r[21]=0u+0x00000000u; // 803B0860
  goto L_803B087C; // 803B0864
L_803B0868:;
  c->lr=0x803B086Cu; f_8039A9F0(c); // 803B0868
  c->r[4]=R32(c->r[20]+0x00000000u); // 803B086C
  c->lr=0x803B0874u; f_8039AEB4(c); // 803B0870
  c->r[20]=c->r[20]+0x00000004u; // 803B0874
  c->r[21]=c->r[21]+0x00000001u; // 803B0878
L_803B087C:;
  cmps(c,0,(int32_t)c->r[21],(int32_t)c->r[25]); // 803B087C
  if (crb(c,0)) { IRQCHK(c); goto L_803B0868; } // 803B0880
  c->r[3]=c->r[19]|c->r[19]; // 803B0884
  c->lr=0x803B088Cu; f_8025EA38(c); // 803B0888
  c->r[3]=0u+0x00000000u; // 803B088C
  goto L_803B0928; // 803B0890
L_803B0894:;
  W32(c->r[28]+0x00000000u,c->r[3]); // 803B0894
  c->r[28]=c->r[28]+0x00000004u; // 803B0898
  c->r[25]=c->r[25]+0x00000001u; // 803B089C
L_803B08A0:;
  cmps(c,0,(int32_t)c->r[25],(int32_t)c->r[26]); // 803B08A0
  if (crb(c,0)) { IRQCHK(c); goto L_803B0794; } // 803B08A4
  c->r[24]=c->r[20]|c->r[20]; // 803B08A8
  c->r[21]=c->r[1]+0x00000008u; // 803B08AC
  c->r[26]=0u+0x00000000u; // 803B08B0
  goto L_803B08F4; // 803B08B4
L_803B08B8:;
  c->r[25]=c->r[24]|c->r[24]; // 803B08B8
  c->r[28]=0u+0x00000000u; // 803B08BC
  goto L_803B08E4; // 803B08C0
L_803B08C4:;
  c->r[3]=R32(c->r[21]+0x00000000u); // 803B08C4
  c->r[4]=c->r[27]|c->r[27]; // 803B08C8
  c->lr=0x803B08D0u; f_80398B24(c); // 803B08CC
  c->r[0]=R32(c->r[21]+0x00000000u); // 803B08D0
  c->r[21]=c->r[21]+0x00000004u; // 803B08D4
  c->r[28]=c->r[28]+0x00000001u; // 803B08D8
  W32(c->r[25]+0x0000000Cu,c->r[0]); // 803B08DC
  c->r[25]=c->r[25]+0x00000004u; // 803B08E0
L_803B08E4:;
  cmps(c,0,(int32_t)c->r[28],(int32_t)c->r[29]); // 803B08E4
  if (crb(c,0)) { IRQCHK(c); goto L_803B08C4; } // 803B08E8
  c->r[24]=c->r[24]+0x00000010u; // 803B08EC
  c->r[26]=c->r[26]+0x00000001u; // 803B08F0
L_803B08F4:;
  cmps(c,0,(int32_t)c->r[26],(int32_t)c->r[30]); // 803B08F4
  if (crb(c,0)) { IRQCHK(c); goto L_803B08B8; } // 803B08F8
  c->r[3]=c->r[20]|c->r[20]; // 803B08FC
  c->r[4]=c->r[30]|c->r[30]; // 803B0900
  c->r[5]=c->r[29]|c->r[29]; // 803B0904
  c->r[6]=c->r[22]|c->r[22]; // 803B0908
  c->r[7]=c->r[23]|c->r[23]; // 803B090C
  c->lr=0x803B0914u; f_803B0038(c); // 803B0910
  c->r[0]=0u+0x00000001u; // 803B0914
  c->r[3]=c->r[19]|c->r[19]; // 803B0918
  W8(c->r[20]+0x000000ACu,c->r[0]); // 803B091C
  c->lr=0x803B0924u; f_8025EA38(c); // 803B0920
  c->r[3]=0u+0x00000001u; // 803B0924
L_803B0928:;
  c->r[11]=c->r[1]+0x00000060u; // 803B0928
  c->lr=0x803B0930u; { c->r[19]=R32(c->r[11]+0xFFFFFFCCu); c->r[20]=R32(c->r[11]+0xFFFFFFD0u); c->r[21]=R32(c->r[11]+0xFFFFFFD4u); c->r[22]=R32(c->r[11]+0xFFFFFFD8u); c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 803B092C
  c->r[0]=R32(c->r[1]+0x00000064u); // 803B0930
  c->lr=c->r[0]; // 803B0934
  c->r[1]=c->r[1]+0x00000060u; // 803B0938
  return; // 803B093C
}

// Free__Q44nw4r3snd6detail5VoiceFv
void f_803B0940(Ctx* __restrict c) {
  trace_call(0x803B0940u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803B0940
  c->r[0]=c->lr; // 803B0944
  W32(c->r[1]+0x00000034u,c->r[0]); // 803B0948
  c->r[11]=c->r[1]+0x00000030u; // 803B094C
  c->lr=0x803B0954u; { W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 803B0950
  c->r[24]=c->r[3]|c->r[3]; // 803B0954
  c->lr=0x803B095Cu; f_8025EA10(c); // 803B0958
  c->r[0]=R8(c->r[24]+0x000000ACu); // 803B095C
  c->r[31]=c->r[3]|c->r[3]; // 803B0960
  cmps(c,0,(int32_t)c->r[0],0); // 803B0964
  if (!crb(c,2)) { goto L_803B0974; } // 803B0968
  c->lr=0x803B0970u; f_8025EA38(c); // 803B096C
  goto L_803B09F4; // 803B0970
L_803B0974:;
  c->r[29]=c->r[24]|c->r[24]; // 803B0974
  c->r[27]=0u+0x00000000u; // 803B0978
  c->r[30]=0u+0x00000000u; // 803B097C
  goto L_803B09C8; // 803B0980
L_803B0984:;
  c->r[28]=c->r[29]|c->r[29]; // 803B0984
  c->r[26]=0u+0x00000000u; // 803B0988
  goto L_803B09B4; // 803B098C
L_803B0990:;
  c->r[25]=R32(c->r[28]+0x0000000Cu); // 803B0990
  cmps(c,0,(int32_t)c->r[25],0); // 803B0994
  if (crb(c,2)) { goto L_803B09AC; } // 803B0998
  c->lr=0x803B09A0u; f_8039A9F0(c); // 803B099C
  c->r[4]=c->r[25]|c->r[25]; // 803B09A0
  c->lr=0x803B09A8u; f_8039AEB4(c); // 803B09A4
  W32(c->r[28]+0x0000000Cu,c->r[30]); // 803B09A8
L_803B09AC:;
  c->r[28]=c->r[28]+0x00000004u; // 803B09AC
  c->r[26]=c->r[26]+0x00000001u; // 803B09B0
L_803B09B4:;
  c->r[0]=R32(c->r[24]+0x000000A0u); // 803B09B4
  cmps(c,0,(int32_t)c->r[26],(int32_t)c->r[0]); // 803B09B8
  if (crb(c,0)) { IRQCHK(c); goto L_803B0990; } // 803B09BC
  c->r[29]=c->r[29]+0x00000010u; // 803B09C0
  c->r[27]=c->r[27]+0x00000001u; // 803B09C4
L_803B09C8:;
  c->r[0]=R32(c->r[24]+0x0000009Cu); // 803B09C8
  cmps(c,0,(int32_t)c->r[27],(int32_t)c->r[0]); // 803B09CC
  if (crb(c,0)) { IRQCHK(c); goto L_803B0984; } // 803B09D0
  c->r[30]=0u+0x00000000u; // 803B09D4
  W32(c->r[24]+0x0000009Cu,c->r[30]); // 803B09D8
  c->lr=0x803B09E0u; f_803B266C(c); // 803B09DC
  c->r[4]=c->r[24]|c->r[24]; // 803B09E0
  c->lr=0x803B09E8u; f_803B29EC(c); // 803B09E4
  W8(c->r[24]+0x000000ACu,c->r[30]); // 803B09E8
  c->r[3]=c->r[31]|c->r[31]; // 803B09EC
  c->lr=0x803B09F4u; f_8025EA38(c); // 803B09F0
L_803B09F4:;
  c->r[11]=c->r[1]+0x00000030u; // 803B09F4
  c->lr=0x803B09FCu; { c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 803B09F8
  c->r[0]=R32(c->r[1]+0x00000034u); // 803B09FC
  c->lr=c->r[0]; // 803B0A00
  c->r[1]=c->r[1]+0x00000030u; // 803B0A04
  return; // 803B0A08
}

// fn_803B0A0C
void f_803B0A0C(Ctx* __restrict c) {
  trace_call(0x803B0A0Cu);
  {uint32_t ea=c->r[1]+0xFFFFFF60u; W32(ea,c->r[1]); c->r[1]=ea;} // 803B0A0C
  c->r[0]=c->lr; // 803B0A10
  W32(c->r[1]+0x000000A4u,c->r[0]); // 803B0A14
  c->r[11]=c->r[1]+0x000000A0u; // 803B0A18
  c->lr=0x803B0A20u; f_80289DC0(c); // 803B0A1C
  c->r[0]=R8(c->r[4]+0x00000000u); // 803B0A20
  c->r[22]=c->r[3]|c->r[3]; // 803B0A24
  c->r[23]=c->r[4]|c->r[4]; // 803B0A28
  c->r[24]=c->r[5]|c->r[5]; // 803B0A2C
  cmpu(c,0,c->r[0],0x00000001u); // 803B0A30
  if (!crb(c,2)) { goto L_803B0A40; } // 803B0A34
  c->r[31]=0u+0x0000000Au; // 803B0A38
  goto L_803B0A50; // 803B0A3C
L_803B0A40:;
  cmps(c,0,(int32_t)c->r[0],0); // 803B0A40
  c->r[31]=0u+0x00000000u; // 803B0A44
  if (!crb(c,2)) { goto L_803B0A50; } // 803B0A48
  c->r[31]=0u+0x00000019u; // 803B0A4C
L_803B0A50:;
  c->r[27]=R32(c->r[4]+0x00000004u); // 803B0A50
  c->r[30]=c->r[22]|c->r[22]; // 803B0A54
  c->r[29]=c->r[23]|c->r[23]; // 803B0A58
  c->r[28]=c->r[4]+0x00000024u; // 803B0A5C
  c->r[26]=0u+0x00000000u; // 803B0A60
  goto L_803B0C30; // 803B0A64
L_803B0A68:;
  c->r[0]=R32(c->r[30]+0x0000000Cu); // 803B0A68
  cmps(c,0,(int32_t)c->r[0],0); // 803B0A6C
  if (crb(c,2)) { goto L_803B0C20; } // 803B0A70
  cmps(c,0,(int32_t)c->r[31],0); // 803B0A74
  c->r[25]=R32(c->r[29]+0x00000010u); // 803B0A78
  if (!crb(c,2)) { goto L_803B0B7C; } // 803B0A7C
  c->r[15]=R16(c->r[28]+0x00000018u); // 803B0A80
  c->r[6]=c->r[24]|c->r[24]; // 803B0A84
  c->r[0]=R16(c->r[28]+0x00000014u); // 803B0A88
  c->r[7]=c->r[25]|c->r[25]; // 803B0A8C
  W32(c->r[1]+0x0000004Cu,c->r[15]); // 803B0A90
  c->r[3]=c->r[1]+0x0000002Au; // 803B0A94
  c->r[15]=R16(c->r[28]+0x0000001Au); // 803B0A98
  c->r[4]=c->r[1]+0x0000002Cu; // 803B0A9C
  W16(c->r[1]+0x0000001Cu,c->r[0]); // 803B0AA0
  c->r[5]=c->r[1]+0x0000002Eu; // 803B0AA4
  c->r[0]=R32(c->r[1]+0x0000004Cu); // 803B0AA8
  c->r[8]=c->r[1]+0x00000008u; // 803B0AAC
  W32(c->r[1]+0x00000030u,c->r[15]); // 803B0AB0
  c->r[15]=R16(c->r[28]+0x0000001Cu); // 803B0AB4
  W16(c->r[1]+0x00000020u,c->r[0]); // 803B0AB8
  c->r[0]=R32(c->r[1]+0x00000030u); // 803B0ABC
  W32(c->r[1]+0x00000034u,c->r[15]); // 803B0AC0
  c->r[15]=R16(c->r[28]+0x0000001Eu); // 803B0AC4
  W16(c->r[1]+0x00000022u,c->r[0]); // 803B0AC8
  c->r[0]=R32(c->r[1]+0x00000034u); // 803B0ACC
  W32(c->r[1]+0x00000038u,c->r[15]); // 803B0AD0
  c->r[15]=R16(c->r[28]+0x00000020u); // 803B0AD4
  W16(c->r[1]+0x00000024u,c->r[0]); // 803B0AD8
  c->r[0]=R32(c->r[1]+0x00000038u); // 803B0ADC
  W32(c->r[1]+0x0000003Cu,c->r[15]); // 803B0AE0
  c->r[15]=R16(c->r[28]+0x00000022u); // 803B0AE4
  W16(c->r[1]+0x00000026u,c->r[0]); // 803B0AE8
  c->r[0]=R32(c->r[1]+0x0000003Cu); // 803B0AEC
  W32(c->r[1]+0x00000040u,c->r[15]); // 803B0AF0
  c->r[15]=R16(c->r[28]+0x00000024u); // 803B0AF4
  W16(c->r[1]+0x00000028u,c->r[0]); // 803B0AF8
  c->r[0]=R32(c->r[1]+0x00000040u); // 803B0AFC
  W32(c->r[1]+0x00000044u,c->r[15]); // 803B0B00
  c->r[15]=R16(c->r[28]+0x00000026u); // 803B0B04
  W16(c->r[1]+0x0000002Au,c->r[0]); // 803B0B08
  c->r[0]=R32(c->r[1]+0x00000044u); // 803B0B0C
  c->r[16]=R16(c->r[28]+0x00000000u); // 803B0B10
  c->r[17]=R16(c->r[28]+0x00000002u); // 803B0B14
  c->r[18]=R16(c->r[28]+0x00000004u); // 803B0B18
  c->r[19]=R16(c->r[28]+0x00000006u); // 803B0B1C
  c->r[20]=R16(c->r[28]+0x00000008u); // 803B0B20
  c->r[21]=R16(c->r[28]+0x0000000Au); // 803B0B24
  c->r[12]=R16(c->r[28]+0x0000000Cu); // 803B0B28
  c->r[11]=R16(c->r[28]+0x0000000Eu); // 803B0B2C
  c->r[10]=R16(c->r[28]+0x00000010u); // 803B0B30
  c->r[9]=R16(c->r[28]+0x00000012u); // 803B0B34
  c->r[14]=R16(c->r[28]+0x00000016u); // 803B0B38
  W16(c->r[1]+0x0000002Cu,c->r[0]); // 803B0B3C
  c->r[0]=c->r[15]|c->r[15]; // 803B0B40
  W32(c->r[1]+0x00000048u,c->r[15]); // 803B0B44
  W16(c->r[1]+0x00000008u,c->r[16]); // 803B0B48
  W16(c->r[1]+0x0000000Au,c->r[17]); // 803B0B4C
  W16(c->r[1]+0x0000000Cu,c->r[18]); // 803B0B50
  W16(c->r[1]+0x0000000Eu,c->r[19]); // 803B0B54
  W16(c->r[1]+0x00000010u,c->r[20]); // 803B0B58
  W16(c->r[1]+0x00000012u,c->r[21]); // 803B0B5C
  W16(c->r[1]+0x00000014u,c->r[12]); // 803B0B60
  W16(c->r[1]+0x00000016u,c->r[11]); // 803B0B64
  W16(c->r[1]+0x00000018u,c->r[10]); // 803B0B68
  W16(c->r[1]+0x0000001Au,c->r[9]); // 803B0B6C
  W16(c->r[1]+0x0000001Eu,c->r[14]); // 803B0B70
  W16(c->r[1]+0x0000002Eu,c->r[0]); // 803B0B74
  c->lr=0x803B0B7Cu; f_8039A01C(c); // 803B0B78
L_803B0B7C:;
  c->r[14]=c->r[30]|c->r[30]; // 803B0B7C
  c->r[15]=0u+0x00000000u; // 803B0B80
  goto L_803B0C14; // 803B0B84
L_803B0B88:;
  c->r[16]=R32(c->r[14]+0x0000000Cu); // 803B0B88
  cmps(c,0,(int32_t)c->r[16],0); // 803B0B8C
  if (crb(c,2)) { goto L_803B0C0C; } // 803B0B90
  c->r[4]=R32(c->r[29]+0x00000010u); // 803B0B94
  c->r[3]=c->r[16]|c->r[16]; // 803B0B98
  c->r[5]=c->r[31]|c->r[31]; // 803B0B9C
  c->r[6]=c->r[27]|c->r[27]; // 803B0BA0
  c->lr=0x803B0BA8u; f_80398104(c); // 803B0BA4
  c->r[4]=R8(c->r[23]+0x00000001u); // 803B0BA8
  c->r[3]=c->r[16]|c->r[16]; // 803B0BAC
  c->r[7]=R32(c->r[23]+0x00000008u); // 803B0BB0
  c->r[5]=c->r[25]|c->r[25]; // 803B0BB4
  c->r[0]=0u-c->r[4]; // 803B0BB8
  c->r[8]=R32(c->r[23]+0x0000000Cu); // 803B0BBC
  c->r[0]=c->r[0]|c->r[4]; // 803B0BC0
  c->r[6]=c->r[24]|c->r[24]; // 803B0BC4
  c->r[4]=rotl(c->r[0],1)&0x00000001u; // 803B0BC8
  c->lr=0x803B0BD0u; f_80398D48(c); // 803B0BCC
  cmps(c,0,(int32_t)c->r[31],0); // 803B0BD0
  if (!crb(c,2)) { goto L_803B0BF0; } // 803B0BD4
  c->r[3]=c->r[16]|c->r[16]; // 803B0BD8
  c->r[4]=c->r[1]+0x00000008u; // 803B0BDC
  c->lr=0x803B0BE4u; f_803991DC(c); // 803B0BE0
  c->r[3]=c->r[16]|c->r[16]; // 803B0BE4
  c->r[4]=c->r[28]+0x00000028u; // 803B0BE8
  c->lr=0x803B0BF0u; f_8039932C(c); // 803B0BEC
L_803B0BF0:;
  {uint32_t ea=c->r[22]+0x0000010Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 803B0BF0
  c->r[3]=c->r[16]|c->r[16]; // 803B0BF4
  c->r[4]=0u+0x00000005u; // 803B0BF8
  c->lr=0x803B0C00u; f_803990FC(c); // 803B0BFC
  c->r[3]=c->r[16]|c->r[16]; // 803B0C00
  c->r[4]=0u+0x00000000u; // 803B0C04
  c->lr=0x803B0C0Cu; f_80398B38(c); // 803B0C08
L_803B0C0C:;
  c->r[14]=c->r[14]+0x00000004u; // 803B0C0C
  c->r[15]=c->r[15]+0x00000001u; // 803B0C10
L_803B0C14:;
  c->r[0]=R32(c->r[22]+0x000000A0u); // 803B0C14
  cmps(c,0,(int32_t)c->r[15],(int32_t)c->r[0]); // 803B0C18
  if (crb(c,0)) { IRQCHK(c); goto L_803B0B88; } // 803B0C1C
L_803B0C20:;
  c->r[30]=c->r[30]+0x00000010u; // 803B0C20
  c->r[29]=c->r[29]+0x00000044u; // 803B0C24
  c->r[28]=c->r[28]+0x00000044u; // 803B0C28
  c->r[26]=c->r[26]+0x00000001u; // 803B0C2C
L_803B0C30:;
  c->r[0]=R32(c->r[22]+0x0000009Cu); // 803B0C30
  cmps(c,0,(int32_t)c->r[26],(int32_t)c->r[0]); // 803B0C34
  if (crb(c,0)) { IRQCHK(c); goto L_803B0A68; } // 803B0C38
  {uint32_t ea=c->r[2]+0xFFFFEF70u; c->f[1]=c->ps1[1]=RF32(ea);} // 803B0C3C
  c->r[4]=c->r[22]|c->r[22]; // 803B0C40
  {uint32_t ea=c->r[2]+0xFFFFEF74u; c->f[0]=c->ps1[0]=RF32(ea);} // 803B0C44
  c->r[5]=0u+0x00000000u; // 803B0C48
  c->r[3]=0u+0x00000000u; // 803B0C4C
  goto L_803B0C78; // 803B0C50
L_803B0C54:;
  {uint32_t ea=c->r[4]+0x0000002Cu; WF32(ea,c->f[1]);} // 803B0C54
  c->r[5]=c->r[5]+0x00000001u; // 803B0C58
  {uint32_t ea=c->r[4]+0x00000030u; WF32(ea,c->f[1]);} // 803B0C5C
  {uint32_t ea=c->r[4]+0x00000034u; WF32(ea,c->f[0]);} // 803B0C60
  {uint32_t ea=c->r[4]+0x00000038u; WF32(ea,c->f[0]);} // 803B0C64
  {uint32_t ea=c->r[4]+0x0000003Cu; WF32(ea,c->f[0]);} // 803B0C68
  {uint32_t ea=c->r[4]+0x00000040u; WF32(ea,c->f[0]);} // 803B0C6C
  W32(c->r[4]+0x00000044u,c->r[3]); // 803B0C70
  c->r[4]=c->r[4]+0x0000001Cu; // 803B0C74
L_803B0C78:;
  c->r[0]=R32(c->r[22]+0x000000A0u); // 803B0C78
  cmps(c,0,(int32_t)c->r[5],(int32_t)c->r[0]); // 803B0C7C
  if (crb(c,0)) { IRQCHK(c); goto L_803B0C54; } // 803B0C80
  c->r[0]=R8(c->r[22]+0x000000B1u); // 803B0C84
  c->r[3]=0u+0x00000000u; // 803B0C88
  W8(c->r[22]+0x000000AFu,c->r[3]); // 803B0C8C
  c->r[11]=c->r[1]+0x000000A0u; // 803B0C90
  c->r[0]=c->r[0]|0x00000038u; // 803B0C94
  W8(c->r[22]+0x000000B0u,c->r[3]); // 803B0C98
  W8(c->r[22]+0x000000ADu,c->r[3]); // 803B0C9C
  W8(c->r[22]+0x000000AEu,c->r[3]); // 803B0CA0
  W8(c->r[22]+0x000000B1u,c->r[0]); // 803B0CA4
  c->lr=0x803B0CACu; f_80289E0C(c); // 803B0CA8
  c->r[0]=R32(c->r[1]+0x000000A4u); // 803B0CAC
  c->lr=c->r[0]; // 803B0CB0
  c->r[1]=c->r[1]+0x000000A0u; // 803B0CB4
  return; // 803B0CB8
}

// Start__Q44nw4r3snd6detail5VoiceFv
void f_803B0CBC(Ctx* __restrict c) {
  trace_call(0x803B0CBCu);
  c->r[0]=R8(c->r[3]+0x000000B1u); // 803B0CBC
  c->r[5]=0u+0x00000001u; // 803B0CC0
  c->r[4]=0u+0x00000000u; // 803B0CC4
  W8(c->r[3]+0x000000ADu,c->r[5]); // 803B0CC8
  c->r[0]=c->r[0]|0x00000001u; // 803B0CCC
  W8(c->r[3]+0x000000AFu,c->r[4]); // 803B0CD0
  W8(c->r[3]+0x000000B1u,c->r[0]); // 803B0CD4
  return; // 803B0CD8
}

// Stop__Q44nw4r3snd6detail5VoiceFv
void f_803B0CDC(Ctx* __restrict c) {
  trace_call(0x803B0CDCu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803B0CDC
  c->r[0]=c->lr; // 803B0CE0
  W32(c->r[1]+0x00000024u,c->r[0]); // 803B0CE4
  c->r[11]=c->r[1]+0x00000020u; // 803B0CE8
  c->lr=0x803B0CF0u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 803B0CEC
  c->r[0]=R8(c->r[3]+0x000000AEu); // 803B0CF0
  c->r[27]=c->r[3]|c->r[3]; // 803B0CF4
  cmps(c,0,(int32_t)c->r[0],0); // 803B0CF8
  if (crb(c,2)) { goto L_803B0D84; } // 803B0CFC
  c->r[29]=c->r[27]|c->r[27]; // 803B0D00
  c->r[30]=0u+0x00000000u; // 803B0D04
  goto L_803B0D70; // 803B0D08
L_803B0D0C:;
  c->r[28]=c->r[29]|c->r[29]; // 803B0D0C
  c->r[31]=0u+0x00000000u; // 803B0D10
  goto L_803B0D5C; // 803B0D14
L_803B0D18:;
  c->r[3]=R32(c->r[28]+0x0000000Cu); // 803B0D18
  cmps(c,0,(int32_t)c->r[3],0); // 803B0D1C
  if (crb(c,2)) { goto L_803B0D54; } // 803B0D20
  c->r[3]=R32(c->r[3]+0x00000000u); // 803B0D24
  c->r[4]=0u+0x00000000u; // 803B0D28
  cmps(c,0,(int32_t)c->r[3],0); // 803B0D2C
  if (crb(c,2)) { goto L_803B0D44; } // 803B0D30
  c->r[0]=R16(c->r[3]+0x00000038u); // 803B0D34
  cmpu(c,0,c->r[0],0x00000001u); // 803B0D38
  if (!crb(c,2)) { goto L_803B0D44; } // 803B0D3C
  c->r[4]=0u+0x00000001u; // 803B0D40
L_803B0D44:;
  cmps(c,0,(int32_t)c->r[4],0); // 803B0D44
  if (crb(c,2)) { goto L_803B0D54; } // 803B0D48
  c->r[4]=0u+0x00000000u; // 803B0D4C
  c->lr=0x803B0D54u; f_80276604(c); // 803B0D50
L_803B0D54:;
  c->r[28]=c->r[28]+0x00000004u; // 803B0D54
  c->r[31]=c->r[31]+0x00000001u; // 803B0D58
L_803B0D5C:;
  c->r[0]=R32(c->r[27]+0x000000A0u); // 803B0D5C
  cmps(c,0,(int32_t)c->r[31],(int32_t)c->r[0]); // 803B0D60
  if (crb(c,0)) { IRQCHK(c); goto L_803B0D18; } // 803B0D64
  c->r[29]=c->r[29]+0x00000010u; // 803B0D68
  c->r[30]=c->r[30]+0x00000001u; // 803B0D6C
L_803B0D70:;
  c->r[0]=R32(c->r[27]+0x0000009Cu); // 803B0D70
  cmps(c,0,(int32_t)c->r[30],(int32_t)c->r[0]); // 803B0D74
  if (crb(c,0)) { IRQCHK(c); goto L_803B0D0C; } // 803B0D78
  c->r[0]=0u+0x00000000u; // 803B0D7C
  W8(c->r[27]+0x000000AEu,c->r[0]); // 803B0D80
L_803B0D84:;
  c->r[0]=0u+0x00000000u; // 803B0D84
  c->r[11]=c->r[1]+0x00000020u; // 803B0D88
  W8(c->r[27]+0x000000B0u,c->r[0]); // 803B0D8C
  W8(c->r[27]+0x000000AFu,c->r[0]); // 803B0D90
  W8(c->r[27]+0x000000ADu,c->r[0]); // 803B0D94
  c->lr=0x803B0D9Cu; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 803B0D98
  c->r[0]=R32(c->r[1]+0x00000024u); // 803B0D9C
  c->lr=c->r[0]; // 803B0DA0
  c->r[1]=c->r[1]+0x00000020u; // 803B0DA4
  return; // 803B0DA8
}

// Pause__Q44nw4r3snd6detail5VoiceFb
void f_803B0DAC(Ctx* __restrict c) {
  trace_call(0x803B0DACu);
  c->r[0]=R8(c->r[3]+0x000000AFu); // 803B0DAC
  cmpu(c,0,c->r[0],c->r[4]); // 803B0DB0
  if (crb(c,2)) return; // 803B0DB4
  c->r[0]=R8(c->r[3]+0x000000B1u); // 803B0DB8
  W8(c->r[3]+0x000000AFu,c->r[4]); // 803B0DBC
  c->r[0]=c->r[0]|0x00000002u; // 803B0DC0
  W8(c->r[3]+0x000000B1u,c->r[0]); // 803B0DC4
  return; // 803B0DC8
}

// fn_803B0DCC
void f_803B0DCC(Ctx* __restrict c) {
  trace_call(0x803B0DCCu);
  c->r[3]=R32(c->r[3]+0x0000000Cu); // 803B0DCC
  cmps(c,0,(int32_t)c->r[3],0); // 803B0DD0
  if (crb(c,2)) { goto L_803B0DE0; } // 803B0DD4
  c->r[3]=R32(c->r[3]+0x00000014u); // 803B0DD8
  return; // 803B0DDC
L_803B0DE0:;
  c->r[3]=0u+0x0000000Au; // 803B0DE0
  return; // 803B0DE4
}

// fn_803B0DE8
void f_803B0DE8(Ctx* __restrict c) {
  trace_call(0x803B0DE8u);
  {uint32_t ea=c->r[2]+0xFFFFEF70u; c->f[2]=c->ps1[2]=RF32(ea);} // 803B0DE8
  fcmp(c,0,c->f[1],c->f[2]); // 803B0DEC
  if (!crb(c,1)) { goto L_803B0DF8; } // 803B0DF0
  goto L_803B0E0C; // 803B0DF4
L_803B0DF8:;
  {uint32_t ea=c->r[2]+0xFFFFEF74u; c->f[2]=c->ps1[2]=RF32(ea);} // 803B0DF8
  fcmp(c,0,c->f[1],c->f[2]); // 803B0DFC
  if (!crb(c,0)) { goto L_803B0E08; } // 803B0E00
  goto L_803B0E0C; // 803B0E04
L_803B0E08:;
  c->f[2]=c->f[1]; // 803B0E08
L_803B0E0C:;
  {uint32_t ea=c->r[3]+0x00000110u; c->f[0]=c->ps1[0]=RF32(ea);} // 803B0E0C
  fcmp(c,0,c->f[2],c->f[0]); // 803B0E10
  if (crb(c,2)) return; // 803B0E14
  c->r[0]=R8(c->r[3]+0x000000B1u); // 803B0E18
  {uint32_t ea=c->r[3]+0x00000110u; WF32(ea,c->f[2]);} // 803B0E1C
  c->r[0]=c->r[0]|0x00000008u; // 803B0E20
  W8(c->r[3]+0x000000B1u,c->r[0]); // 803B0E24
  return; // 803B0E28
}

// SetVeVolume__Q44nw4r3snd6detail5VoiceFff
void f_803B0E2C(Ctx* __restrict c) {
  trace_call(0x803B0E2Cu);
  {uint32_t ea=c->r[2]+0xFFFFEF70u; c->f[3]=c->ps1[3]=RF32(ea);} // 803B0E2C
  fcmp(c,0,c->f[1],c->f[3]); // 803B0E30
  if (!crb(c,1)) { goto L_803B0E3C; } // 803B0E34
  goto L_803B0E50; // 803B0E38
L_803B0E3C:;
  {uint32_t ea=c->r[2]+0xFFFFEF74u; c->f[3]=c->ps1[3]=RF32(ea);} // 803B0E3C
  fcmp(c,0,c->f[1],c->f[3]); // 803B0E40
  if (!crb(c,0)) { goto L_803B0E4C; } // 803B0E44
  goto L_803B0E50; // 803B0E48
L_803B0E4C:;
  c->f[3]=c->f[1]; // 803B0E4C
L_803B0E50:;
  {uint32_t ea=c->r[2]+0xFFFFEF70u; c->f[1]=c->ps1[1]=RF32(ea);} // 803B0E50
  fcmp(c,0,c->f[2],c->f[1]); // 803B0E54
  if (!crb(c,1)) { goto L_803B0E60; } // 803B0E58
  goto L_803B0E74; // 803B0E5C
L_803B0E60:;
  {uint32_t ea=c->r[2]+0xFFFFEF74u; c->f[1]=c->ps1[1]=RF32(ea);} // 803B0E60
  fcmp(c,0,c->f[2],c->f[1]); // 803B0E64
  if (!crb(c,0)) { goto L_803B0E70; } // 803B0E68
  goto L_803B0E74; // 803B0E6C
L_803B0E70:;
  c->f[1]=c->f[2]; // 803B0E70
L_803B0E74:;
  {uint32_t ea=c->r[2]+0xFFFFEF74u; c->f[0]=c->ps1[0]=RF32(ea);} // 803B0E74
  fcmp(c,0,c->f[1],c->f[0]); // 803B0E78
  if (!crb(c,0)) { goto L_803B0EA0; } // 803B0E7C
  {uint32_t ea=c->r[3]+0x00000118u; c->f[0]=c->ps1[0]=RF32(ea);} // 803B0E80
  fcmp(c,0,c->f[3],c->f[0]); // 803B0E84
  if (crb(c,2)) return; // 803B0E88
  c->r[0]=R8(c->r[3]+0x000000B1u); // 803B0E8C
  {uint32_t ea=c->r[3]+0x00000118u; WF32(ea,c->f[3]);} // 803B0E90
  c->r[0]=c->r[0]|0x00000008u; // 803B0E94
  W8(c->r[3]+0x000000B1u,c->r[0]); // 803B0E98
  return; // 803B0E9C
L_803B0EA0:;
  {uint32_t ea=c->r[3]+0x00000114u; c->f[0]=c->ps1[0]=RF32(ea);} // 803B0EA0
  fcmp(c,0,c->f[1],c->f[0]); // 803B0EA4
  if (!crb(c,2)) { goto L_803B0EB8; } // 803B0EA8
  {uint32_t ea=c->r[3]+0x00000118u; c->f[0]=c->ps1[0]=RF32(ea);} // 803B0EAC
  fcmp(c,0,c->f[3],c->f[0]); // 803B0EB0
  if (crb(c,2)) return; // 803B0EB4
L_803B0EB8:;
  c->r[0]=R8(c->r[3]+0x000000B1u); // 803B0EB8
  {uint32_t ea=c->r[3]+0x00000114u; WF32(ea,c->f[1]);} // 803B0EBC
  c->r[0]=c->r[0]|0x00000008u; // 803B0EC0
  {uint32_t ea=c->r[3]+0x00000118u; WF32(ea,c->f[3]);} // 803B0EC4
  W8(c->r[3]+0x000000B1u,c->r[0]); // 803B0EC8
  return; // 803B0ECC
}

// fn_803B0ED0
void f_803B0ED0(Ctx* __restrict c) {
  trace_call(0x803B0ED0u);
  {uint32_t ea=c->r[3]+0x0000010Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 803B0ED0
  fcmp(c,0,c->f[1],c->f[0]); // 803B0ED4
  if (crb(c,2)) return; // 803B0ED8
  c->r[0]=R8(c->r[3]+0x000000B1u); // 803B0EDC
  {uint32_t ea=c->r[3]+0x0000010Cu; WF32(ea,c->f[1]);} // 803B0EE0
  c->r[0]=c->r[0]|0x00000004u; // 803B0EE4
  W8(c->r[3]+0x000000B1u,c->r[0]); // 803B0EE8
  return; // 803B0EEC
}

// fn_803B0EF0
void f_803B0EF0(Ctx* __restrict c) {
  trace_call(0x803B0EF0u);
  c->r[0]=R32(c->r[3]+0x0000011Cu); // 803B0EF0
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[0]); // 803B0EF4
  if (crb(c,2)) return; // 803B0EF8
  c->r[0]=R8(c->r[3]+0x000000B1u); // 803B0EFC
  W32(c->r[3]+0x0000011Cu,c->r[4]); // 803B0F00
  c->r[0]=c->r[0]|0x00000010u; // 803B0F04
  W8(c->r[3]+0x000000B1u,c->r[0]); // 803B0F08
  return; // 803B0F0C
}

// fn_803B0F10
void f_803B0F10(Ctx* __restrict c) {
  trace_call(0x803B0F10u);
  c->r[0]=R32(c->r[3]+0x00000120u); // 803B0F10
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[0]); // 803B0F14
  if (crb(c,2)) return; // 803B0F18
  c->r[0]=R8(c->r[3]+0x000000B1u); // 803B0F1C
  W32(c->r[3]+0x00000120u,c->r[4]); // 803B0F20
  c->r[0]=c->r[0]|0x00000010u; // 803B0F24
  W8(c->r[3]+0x000000B1u,c->r[0]); // 803B0F28
  return; // 803B0F2C
}

// fn_803B0F30
void f_803B0F30(Ctx* __restrict c) {
  trace_call(0x803B0F30u);
  {uint32_t ea=c->r[3]+0x000000B8u; c->f[0]=c->ps1[0]=RF32(ea);} // 803B0F30
  fcmp(c,0,c->f[1],c->f[0]); // 803B0F34
  if (crb(c,2)) return; // 803B0F38
  c->r[0]=R8(c->r[3]+0x000000B1u); // 803B0F3C
  {uint32_t ea=c->r[3]+0x000000B8u; WF32(ea,c->f[1]);} // 803B0F40
  c->r[0]=c->r[0]|0x00000010u; // 803B0F44
  W8(c->r[3]+0x000000B1u,c->r[0]); // 803B0F48
  return; // 803B0F4C
}

// fn_803B0F50
void f_803B0F50(Ctx* __restrict c) {
  trace_call(0x803B0F50u);
  {uint32_t ea=c->r[3]+0x000000BCu; c->f[0]=c->ps1[0]=RF32(ea);} // 803B0F50
  fcmp(c,0,c->f[1],c->f[0]); // 803B0F54
  if (crb(c,2)) return; // 803B0F58
  c->r[0]=R8(c->r[3]+0x000000B1u); // 803B0F5C
  {uint32_t ea=c->r[3]+0x000000BCu; WF32(ea,c->f[1]);} // 803B0F60
  c->r[0]=c->r[0]|0x00000010u; // 803B0F64
  W8(c->r[3]+0x000000B1u,c->r[0]); // 803B0F68
  return; // 803B0F6C
}

// fn_803B0F70
void f_803B0F70(Ctx* __restrict c) {
  trace_call(0x803B0F70u);
  {uint32_t ea=c->r[2]+0xFFFFEF70u; c->f[2]=c->ps1[2]=RF32(ea);} // 803B0F70
  fcmp(c,0,c->f[1],c->f[2]); // 803B0F74
  if (!crb(c,1)) { goto L_803B0F80; } // 803B0F78
  goto L_803B0F94; // 803B0F7C
L_803B0F80:;
  {uint32_t ea=c->r[2]+0xFFFFEF74u; c->f[2]=c->ps1[2]=RF32(ea);} // 803B0F80
  fcmp(c,0,c->f[1],c->f[2]); // 803B0F84
  if (!crb(c,0)) { goto L_803B0F90; } // 803B0F88
  goto L_803B0F94; // 803B0F8C
L_803B0F90:;
  c->f[2]=c->f[1]; // 803B0F90
L_803B0F94:;
  {uint32_t ea=c->r[3]+0x000000C0u; c->f[0]=c->ps1[0]=RF32(ea);} // 803B0F94
  fcmp(c,0,c->f[2],c->f[0]); // 803B0F98
  if (crb(c,2)) return; // 803B0F9C
  c->r[0]=R8(c->r[3]+0x000000B1u); // 803B0FA0
  {uint32_t ea=c->r[3]+0x000000C0u; WF32(ea,c->f[2]);} // 803B0FA4
  c->r[0]=c->r[0]|0x00000020u; // 803B0FA8
  W8(c->r[3]+0x000000B1u,c->r[0]); // 803B0FAC
  return; // 803B0FB0
}

// SetRemoteFilter__Q44nw4r3snd6detail5VoiceFi
void f_803B0FB4(Ctx* __restrict c) {
  trace_call(0x803B0FB4u);
  cmps(c,0,(int32_t)c->r[4],127); // 803B0FB4
  if (!crb(c,1)) { goto L_803B0FC4; } // 803B0FB8
  c->r[4]=0u+0x0000007Fu; // 803B0FBC
  goto L_803B0FCC; // 803B0FC0
L_803B0FC4:;
  c->r[0]=sraw(c,c->r[4],31); // 803B0FC4
  c->r[4]=c->r[4]&~c->r[0]; // 803B0FC8
L_803B0FCC:;
  c->r[0]=R8(c->r[3]+0x000000B2u); // 803B0FCC
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[0]); // 803B0FD0
  if (crb(c,2)) return; // 803B0FD4
  c->r[0]=R8(c->r[3]+0x000000B1u); // 803B0FD8
  W8(c->r[3]+0x000000B2u,c->r[4]); // 803B0FDC
  c->r[0]=c->r[0]|0x00000080u; // 803B0FE0
  W8(c->r[3]+0x000000B1u,c->r[0]); // 803B0FE4
  return; // 803B0FE8
}

// fn_803B0FEC
void f_803B0FEC(Ctx* __restrict c) {
  trace_call(0x803B0FECu);
  c->r[0]=R32(c->r[3]+0x000000C4u); // 803B0FEC
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[0]); // 803B0FF0
  if (crb(c,2)) return; // 803B0FF4
  c->r[0]=R8(c->r[3]+0x000000B1u); // 803B0FF8
  W32(c->r[3]+0x000000C4u,c->r[4]); // 803B0FFC
  c->r[0]=c->r[0]|0x00000010u; // 803B1000
  W8(c->r[3]+0x000000B1u,c->r[0]); // 803B1004
  return; // 803B1008
}

// fn_803B100C
void f_803B100C(Ctx* __restrict c) {
  trace_call(0x803B100Cu);
  {uint32_t ea=c->r[2]+0xFFFFEF70u; c->f[2]=c->ps1[2]=RF32(ea);} // 803B100C
  fcmp(c,0,c->f[1],c->f[2]); // 803B1010
  if (!crb(c,1)) { goto L_803B101C; } // 803B1014
  goto L_803B1030; // 803B1018
L_803B101C:;
  {uint32_t ea=c->r[2]+0xFFFFEF74u; c->f[2]=c->ps1[2]=RF32(ea);} // 803B101C
  fcmp(c,0,c->f[1],c->f[2]); // 803B1020
  if (!crb(c,0)) { goto L_803B102C; } // 803B1024
  goto L_803B1030; // 803B1028
L_803B102C:;
  c->f[2]=c->f[1]; // 803B102C
L_803B1030:;
  {uint32_t ea=c->r[3]+0x000000C8u; c->f[0]=c->ps1[0]=RF32(ea);} // 803B1030
  fcmp(c,0,c->f[2],c->f[0]); // 803B1034
  if (crb(c,2)) return; // 803B1038
  c->r[0]=R8(c->r[3]+0x000000B1u); // 803B103C
  {uint32_t ea=c->r[3]+0x000000C8u; WF32(ea,c->f[2]);} // 803B1040
  c->r[0]=c->r[0]|0x00000010u; // 803B1044
  W8(c->r[3]+0x000000B1u,c->r[0]); // 803B1048
  return; // 803B104C
}

// SetMainSend__Q44nw4r3snd6detail5VoiceFf
void f_803B1050(Ctx* __restrict c) {
  trace_call(0x803B1050u);
  {uint32_t ea=c->r[2]+0xFFFFEF70u; c->f[2]=c->ps1[2]=RF32(ea);} // 803B1050
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[2]); // 803B1054
  fcmp(c,0,c->f[0],c->f[2]); // 803B1058
  if (!crb(c,1)) { goto L_803B1064; } // 803B105C
  goto L_803B1078; // 803B1060
L_803B1064:;
  {uint32_t ea=c->r[2]+0xFFFFEF74u; c->f[2]=c->ps1[2]=RF32(ea);} // 803B1064
  fcmp(c,0,c->f[0],c->f[2]); // 803B1068
  if (!crb(c,0)) { goto L_803B1074; } // 803B106C
  goto L_803B1078; // 803B1070
L_803B1074:;
  c->f[2]=c->f[0]; // 803B1074
L_803B1078:;
  {uint32_t ea=c->r[3]+0x000000CCu; c->f[0]=c->ps1[0]=RF32(ea);} // 803B1078
  fcmp(c,0,c->f[2],c->f[0]); // 803B107C
  if (crb(c,2)) return; // 803B1080
  c->r[0]=R8(c->r[3]+0x000000B1u); // 803B1084
  {uint32_t ea=c->r[3]+0x000000CCu; WF32(ea,c->f[2]);} // 803B1088
  c->r[0]=c->r[0]|0x00000010u; // 803B108C
  W8(c->r[3]+0x000000B1u,c->r[0]); // 803B1090
  return; // 803B1094
}

// fn_803B1098
void f_803B1098(Ctx* __restrict c) {
  trace_call(0x803B1098u);
  {uint32_t ea=c->r[2]+0xFFFFEF70u; c->f[2]=c->ps1[2]=RF32(ea);} // 803B1098
  fcmp(c,0,c->f[1],c->f[2]); // 803B109C
  if (!crb(c,1)) { goto L_803B10A8; } // 803B10A0
  goto L_803B10BC; // 803B10A4
L_803B10A8:;
  {uint32_t ea=c->r[2]+0xFFFFEF74u; c->f[2]=c->ps1[2]=RF32(ea);} // 803B10A8
  fcmp(c,0,c->f[1],c->f[2]); // 803B10AC
  if (!crb(c,0)) { goto L_803B10B8; } // 803B10B0
  goto L_803B10BC; // 803B10B4
L_803B10B8:;
  c->f[2]=c->f[1]; // 803B10B8
L_803B10BC:;
  c->r[0]=rotl(c->r[4],2)&0xFFFFFFFCu; // 803B10BC
  c->r[4]=c->r[3]+c->r[0]; // 803B10C0
  {uint32_t ea=c->r[4]+0x000000D0u; c->f[0]=c->ps1[0]=RF32(ea);} // 803B10C4
  fcmp(c,0,c->f[2],c->f[0]); // 803B10C8
  if (crb(c,2)) return; // 803B10CC
  {uint32_t ea=c->r[4]+0x000000D0u; WF32(ea,c->f[2]);} // 803B10D0
  c->r[0]=R8(c->r[3]+0x000000B1u); // 803B10D4
  c->r[0]=c->r[0]|0x00000010u; // 803B10D8
  W8(c->r[3]+0x000000B1u,c->r[0]); // 803B10DC
  return; // 803B10E0
}

// fn_803B10E4
void f_803B10E4(Ctx* __restrict c) {
  trace_call(0x803B10E4u);
  {uint32_t ea=c->r[2]+0xFFFFEF70u; c->f[2]=c->ps1[2]=RF32(ea);} // 803B10E4
  fcmp(c,0,c->f[1],c->f[2]); // 803B10E8
  if (!crb(c,1)) { goto L_803B10F4; } // 803B10EC
  goto L_803B1108; // 803B10F0
L_803B10F4:;
  {uint32_t ea=c->r[2]+0xFFFFEF74u; c->f[2]=c->ps1[2]=RF32(ea);} // 803B10F4
  fcmp(c,0,c->f[1],c->f[2]); // 803B10F8
  if (!crb(c,0)) { goto L_803B1104; } // 803B10FC
  goto L_803B1108; // 803B1100
L_803B1104:;
  c->f[2]=c->f[1]; // 803B1104
L_803B1108:;
  c->r[0]=rotl(c->r[4],2)&0xFFFFFFFCu; // 803B1108
  c->r[4]=c->r[3]+c->r[0]; // 803B110C
  {uint32_t ea=c->r[4]+0x000000DCu; c->f[0]=c->ps1[0]=RF32(ea);} // 803B1110
  fcmp(c,0,c->f[2],c->f[0]); // 803B1114
  if (crb(c,2)) return; // 803B1118
  {uint32_t ea=c->r[4]+0x000000DCu; WF32(ea,c->f[2]);} // 803B111C
  c->r[0]=R8(c->r[3]+0x000000B1u); // 803B1120
  c->r[0]=c->r[0]|0x00000010u; // 803B1124
  W8(c->r[3]+0x000000B1u,c->r[0]); // 803B1128
  return; // 803B112C
}

// SetRemoteSend__Q44nw4r3snd6detail5VoiceFif
void f_803B1130(Ctx* __restrict c) {
  trace_call(0x803B1130u);
  {uint32_t ea=c->r[2]+0xFFFFEF70u; c->f[2]=c->ps1[2]=RF32(ea);} // 803B1130
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[2]); // 803B1134
  fcmp(c,0,c->f[0],c->f[2]); // 803B1138
  if (!crb(c,1)) { goto L_803B1144; } // 803B113C
  goto L_803B1158; // 803B1140
L_803B1144:;
  {uint32_t ea=c->r[2]+0xFFFFEF74u; c->f[2]=c->ps1[2]=RF32(ea);} // 803B1144
  fcmp(c,0,c->f[0],c->f[2]); // 803B1148
  if (!crb(c,0)) { goto L_803B1154; } // 803B114C
  goto L_803B1158; // 803B1150
L_803B1154:;
  c->f[2]=c->f[0]; // 803B1154
L_803B1158:;
  c->r[0]=rotl(c->r[4],2)&0xFFFFFFFCu; // 803B1158
  c->r[4]=c->r[3]+c->r[0]; // 803B115C
  {uint32_t ea=c->r[4]+0x000000ECu; c->f[0]=c->ps1[0]=RF32(ea);} // 803B1160
  fcmp(c,0,c->f[2],c->f[0]); // 803B1164
  if (crb(c,2)) return; // 803B1168
  {uint32_t ea=c->r[4]+0x000000ECu; WF32(ea,c->f[2]);} // 803B116C
  c->r[0]=R8(c->r[3]+0x000000B1u); // 803B1170
  c->r[0]=c->r[0]|0x00000010u; // 803B1174
  W8(c->r[3]+0x000000B1u,c->r[0]); // 803B1178
  return; // 803B117C
}

// fn_803B1180
void f_803B1180(Ctx* __restrict c) {
  trace_call(0x803B1180u);
  {uint32_t ea=c->r[2]+0xFFFFEF70u; c->f[2]=c->ps1[2]=RF32(ea);} // 803B1180
  fcmp(c,0,c->f[1],c->f[2]); // 803B1184
  if (!crb(c,1)) { goto L_803B1190; } // 803B1188
  goto L_803B11A4; // 803B118C
L_803B1190:;
  {uint32_t ea=c->r[2]+0xFFFFEF74u; c->f[2]=c->ps1[2]=RF32(ea);} // 803B1190
  fcmp(c,0,c->f[1],c->f[2]); // 803B1194
  if (!crb(c,0)) { goto L_803B11A0; } // 803B1198
  goto L_803B11A4; // 803B119C
L_803B11A0:;
  c->f[2]=c->f[1]; // 803B11A0
L_803B11A4:;
  c->r[0]=rotl(c->r[4],2)&0xFFFFFFFCu; // 803B11A4
  c->r[4]=c->r[3]+c->r[0]; // 803B11A8
  {uint32_t ea=c->r[4]+0x000000FCu; c->f[0]=c->ps1[0]=RF32(ea);} // 803B11AC
  fcmp(c,0,c->f[2],c->f[0]); // 803B11B0
  if (crb(c,2)) return; // 803B11B4
  {uint32_t ea=c->r[4]+0x000000FCu; WF32(ea,c->f[2]);} // 803B11B8
  c->r[0]=R8(c->r[3]+0x000000B1u); // 803B11BC
  c->r[0]=c->r[0]|0x00000010u; // 803B11C0
  W8(c->r[3]+0x000000B1u,c->r[0]); // 803B11C4
  return; // 803B11C8
}

// SetPriority__Q44nw4r3snd6detail5VoiceFi
void f_803B11CC(Ctx* __restrict c) {
  trace_call(0x803B11CCu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803B11CC
  c->r[0]=c->lr; // 803B11D0
  W32(c->r[1]+0x00000024u,c->r[0]); // 803B11D4
  c->r[11]=c->r[1]+0x00000020u; // 803B11D8
  c->lr=0x803B11E0u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 803B11DC
  W32(c->r[3]+0x000000B4u,c->r[4]); // 803B11E0
  c->r[27]=c->r[3]|c->r[3]; // 803B11E4
  c->lr=0x803B11ECu; f_803B266C(c); // 803B11E8
  c->r[4]=c->r[27]|c->r[27]; // 803B11EC
  c->lr=0x803B11F4u; f_803B2B9C(c); // 803B11F0
  c->r[0]=R32(c->r[27]+0x000000B4u); // 803B11F4
  cmps(c,0,(int32_t)c->r[0],1); // 803B11F8
  if (!crb(c,2)) { goto L_803B1254; } // 803B11FC
  c->r[31]=c->r[27]|c->r[27]; // 803B1200
  c->r[29]=0u+0x00000000u; // 803B1204
  goto L_803B1248; // 803B1208
L_803B120C:;
  c->r[30]=c->r[31]|c->r[31]; // 803B120C
  c->r[28]=0u+0x00000000u; // 803B1210
  goto L_803B1234; // 803B1214
L_803B1218:;
  c->r[3]=R32(c->r[30]+0x0000000Cu); // 803B1218
  cmps(c,0,(int32_t)c->r[3],0); // 803B121C
  if (crb(c,2)) { goto L_803B122C; } // 803B1220
  c->r[4]=0u+0x0000000Fu; // 803B1224
  c->lr=0x803B122Cu; f_80398B24(c); // 803B1228
L_803B122C:;
  c->r[30]=c->r[30]+0x00000004u; // 803B122C
  c->r[28]=c->r[28]+0x00000001u; // 803B1230
L_803B1234:;
  c->r[0]=R32(c->r[27]+0x000000A0u); // 803B1234
  cmps(c,0,(int32_t)c->r[28],(int32_t)c->r[0]); // 803B1238
  if (crb(c,0)) { IRQCHK(c); goto L_803B1218; } // 803B123C
  c->r[31]=c->r[31]+0x00000010u; // 803B1240
  c->r[29]=c->r[29]+0x00000001u; // 803B1244
L_803B1248:;
  c->r[0]=R32(c->r[27]+0x0000009Cu); // 803B1248
  cmps(c,0,(int32_t)c->r[29],(int32_t)c->r[0]); // 803B124C
  if (crb(c,0)) { IRQCHK(c); goto L_803B120C; } // 803B1250
L_803B1254:;
  c->r[11]=c->r[1]+0x00000020u; // 803B1254
  c->lr=0x803B125Cu; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 803B1258
  c->r[0]=R32(c->r[1]+0x00000024u); // 803B125C
  c->lr=c->r[0]; // 803B1260
  c->r[1]=c->r[1]+0x00000020u; // 803B1264
  return; // 803B1268
}

// UpdateVoicesPriority__Q44nw4r3snd6detail5VoiceFv
void f_803B126C(Ctx* __restrict c) {
  trace_call(0x803B126Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803B126C
  c->r[0]=c->lr; // 803B1270
  W32(c->r[1]+0x00000024u,c->r[0]); // 803B1274
  c->r[11]=c->r[1]+0x00000020u; // 803B1278
  c->lr=0x803B1280u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 803B127C
  c->r[0]=R32(c->r[3]+0x000000B4u); // 803B1280
  c->r[27]=c->r[3]|c->r[3]; // 803B1284
  cmps(c,0,(int32_t)c->r[0],1); // 803B1288
  if (crb(c,2)) { goto L_803B12E4; } // 803B128C
  c->r[31]=c->r[27]|c->r[27]; // 803B1290
  c->r[29]=0u+0x00000000u; // 803B1294
  goto L_803B12D8; // 803B1298
L_803B129C:;
  c->r[30]=c->r[31]|c->r[31]; // 803B129C
  c->r[28]=0u+0x00000000u; // 803B12A0
  goto L_803B12C4; // 803B12A4
L_803B12A8:;
  c->r[3]=R32(c->r[30]+0x0000000Cu); // 803B12A8
  cmps(c,0,(int32_t)c->r[3],0); // 803B12AC
  if (crb(c,2)) { goto L_803B12BC; } // 803B12B0
  c->r[4]=0u+0x00000010u; // 803B12B4
  c->lr=0x803B12BCu; f_80398B24(c); // 803B12B8
L_803B12BC:;
  c->r[30]=c->r[30]+0x00000004u; // 803B12BC
  c->r[28]=c->r[28]+0x00000001u; // 803B12C0
L_803B12C4:;
  c->r[0]=R32(c->r[27]+0x000000A0u); // 803B12C4
  cmps(c,0,(int32_t)c->r[28],(int32_t)c->r[0]); // 803B12C8
  if (crb(c,0)) { IRQCHK(c); goto L_803B12A8; } // 803B12CC
  c->r[31]=c->r[31]+0x00000010u; // 803B12D0
  c->r[29]=c->r[29]+0x00000001u; // 803B12D4
L_803B12D8:;
  c->r[0]=R32(c->r[27]+0x0000009Cu); // 803B12D8
  cmps(c,0,(int32_t)c->r[29],(int32_t)c->r[0]); // 803B12DC
  if (crb(c,0)) { IRQCHK(c); goto L_803B129C; } // 803B12E0
L_803B12E4:;
  c->r[11]=c->r[1]+0x00000020u; // 803B12E4
  c->lr=0x803B12ECu; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 803B12E8
  c->r[0]=R32(c->r[1]+0x00000024u); // 803B12EC
  c->lr=c->r[0]; // 803B12F0
  c->r[1]=c->r[1]+0x00000020u; // 803B12F4
  return; // 803B12F8
}

// SetAdpcmLoop__Q44nw4r3snd6detail5VoiceFiPCQ44nw4r3snd6detail14AdpcmLoopParam
void f_803B12FC(Ctx* __restrict c) {
  trace_call(0x803B12FCu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803B12FC
  c->r[0]=c->lr; // 803B1300
  W32(c->r[1]+0x00000024u,c->r[0]); // 803B1304
  c->r[0]=rotl(c->r[4],4)&0xFFFFFFF0u; // 803B1308
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 803B130C
  c->r[31]=c->r[3]+c->r[0]; // 803B1310
  W32(c->r[1]+0x00000018u,c->r[30]); // 803B1314
  c->r[30]=0u+0x00000000u; // 803B1318
  W32(c->r[1]+0x00000014u,c->r[29]); // 803B131C
  c->r[29]=c->r[5]|c->r[5]; // 803B1320
  W32(c->r[1]+0x00000010u,c->r[28]); // 803B1324
  c->r[28]=c->r[3]|c->r[3]; // 803B1328
  goto L_803B134C; // 803B132C
L_803B1330:;
  c->r[3]=R32(c->r[31]+0x0000000Cu); // 803B1330
  cmps(c,0,(int32_t)c->r[3],0); // 803B1334
  if (crb(c,2)) { goto L_803B1344; } // 803B1338
  c->r[4]=c->r[29]|c->r[29]; // 803B133C
  c->lr=0x803B1344u; f_8039932C(c); // 803B1340
L_803B1344:;
  c->r[31]=c->r[31]+0x00000004u; // 803B1344
  c->r[30]=c->r[30]+0x00000001u; // 803B1348
L_803B134C:;
  c->r[0]=R32(c->r[28]+0x000000A0u); // 803B134C
  cmps(c,0,(int32_t)c->r[30],(int32_t)c->r[0]); // 803B1350
  if (crb(c,0)) { IRQCHK(c); goto L_803B1330; } // 803B1354
  c->r[0]=R32(c->r[1]+0x00000024u); // 803B1358
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 803B135C
  c->r[30]=R32(c->r[1]+0x00000018u); // 803B1360
  c->r[29]=R32(c->r[1]+0x00000014u); // 803B1364
  c->r[28]=R32(c->r[1]+0x00000010u); // 803B1368
  c->lr=c->r[0]; // 803B136C
  c->r[1]=c->r[1]+0x00000020u; // 803B1370
  return; // 803B1374
}

// GetCurrentPlayingSample__Q44nw4r3snd6detail5VoiceCFv
void f_803B1378(Ctx* __restrict c) {
  trace_call(0x803B1378u);
  c->r[3]=R32(c->r[3]+0x0000000Cu); // 803B1378
  cmps(c,0,(int32_t)c->r[3],0); // 803B137C
  if (crb(c,2)) { goto L_803B1388; } // 803B1380
  f_8039884C(c); return; // 803B1384
L_803B1388:;
  c->r[3]=0u+0x00000000u; // 803B1388
  return; // 803B138C
}

// fn_803B1390
void f_803B1390(Ctx* __restrict c) {
  trace_call(0x803B1390u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803B1390
  c->r[0]=c->lr; // 803B1394
  W32(c->r[1]+0x00000024u,c->r[0]); // 803B1398
  c->r[11]=c->r[1]+0x00000020u; // 803B139C
  c->lr=0x803B13A4u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 803B13A0
  c->r[0]=rotl(c->r[4],4)&0xFFFFFFF0u; // 803B13A4
  c->r[27]=c->r[3]|c->r[3]; // 803B13A8
  c->r[28]=c->r[5]|c->r[5]; // 803B13AC
  c->r[29]=c->r[6]|c->r[6]; // 803B13B0
  c->r[31]=c->r[3]+c->r[0]; // 803B13B4
  c->r[30]=0u+0x00000000u; // 803B13B8
  goto L_803B13E0; // 803B13BC
L_803B13C0:;
  c->r[3]=R32(c->r[31]+0x0000000Cu); // 803B13C0
  cmps(c,0,(int32_t)c->r[3],0); // 803B13C4
  if (crb(c,2)) { goto L_803B13D8; } // 803B13C8
  c->r[4]=c->r[28]|c->r[28]; // 803B13CC
  c->r[5]=c->r[29]|c->r[29]; // 803B13D0
  c->lr=0x803B13D8u; f_803982C4(c); // 803B13D4
L_803B13D8:;
  c->r[31]=c->r[31]+0x00000004u; // 803B13D8
  c->r[30]=c->r[30]+0x00000001u; // 803B13DC
L_803B13E0:;
  c->r[0]=R32(c->r[27]+0x000000A0u); // 803B13E0
  cmps(c,0,(int32_t)c->r[30],(int32_t)c->r[0]); // 803B13E4
  if (crb(c,0)) { IRQCHK(c); goto L_803B13C0; } // 803B13E8
  c->r[11]=c->r[1]+0x00000020u; // 803B13EC
  c->lr=0x803B13F4u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 803B13F0
  c->r[0]=R32(c->r[1]+0x00000024u); // 803B13F4
  c->lr=c->r[0]; // 803B13F8
  c->r[1]=c->r[1]+0x00000020u; // 803B13FC
  return; // 803B1400
}

// fn_803B1404
void f_803B1404(Ctx* __restrict c) {
  trace_call(0x803B1404u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803B1404
  c->r[0]=c->lr; // 803B1408
  W32(c->r[1]+0x00000024u,c->r[0]); // 803B140C
  c->r[11]=c->r[1]+0x00000020u; // 803B1410
  c->lr=0x803B1418u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 803B1414
  c->r[0]=rotl(c->r[4],4)&0xFFFFFFF0u; // 803B1418
  c->r[27]=c->r[3]|c->r[3]; // 803B141C
  c->r[28]=c->r[5]|c->r[5]; // 803B1420
  c->r[29]=c->r[6]|c->r[6]; // 803B1424
  c->r[31]=c->r[3]+c->r[0]; // 803B1428
  c->r[30]=0u+0x00000000u; // 803B142C
  goto L_803B1454; // 803B1430
L_803B1434:;
  c->r[3]=R32(c->r[31]+0x0000000Cu); // 803B1434
  cmps(c,0,(int32_t)c->r[3],0); // 803B1438
  if (crb(c,2)) { goto L_803B144C; } // 803B143C
  c->r[4]=c->r[28]|c->r[28]; // 803B1440
  c->r[5]=c->r[29]|c->r[29]; // 803B1444
  c->lr=0x803B144Cu; f_803983E8(c); // 803B1448
L_803B144C:;
  c->r[31]=c->r[31]+0x00000004u; // 803B144C
  c->r[30]=c->r[30]+0x00000001u; // 803B1450
L_803B1454:;
  c->r[0]=R32(c->r[27]+0x000000A0u); // 803B1454
  cmps(c,0,(int32_t)c->r[30],(int32_t)c->r[0]); // 803B1458
  if (crb(c,0)) { IRQCHK(c); goto L_803B1434; } // 803B145C
  c->r[11]=c->r[1]+0x00000020u; // 803B1460
  c->lr=0x803B1468u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 803B1464
  c->r[0]=R32(c->r[1]+0x00000024u); // 803B1468
  c->lr=c->r[0]; // 803B146C
  c->r[1]=c->r[1]+0x00000020u; // 803B1470
  return; // 803B1474
}

// fn_803B1478
void f_803B1478(Ctx* __restrict c) {
  trace_call(0x803B1478u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803B1478
  c->r[0]=c->lr; // 803B147C
  W32(c->r[1]+0x00000024u,c->r[0]); // 803B1480
  c->r[11]=c->r[1]+0x00000020u; // 803B1484
  c->lr=0x803B148Cu; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 803B1488
  c->r[26]=c->r[3]|c->r[3]; // 803B148C
  c->r[27]=c->r[4]|c->r[4]; // 803B1490
  c->r[31]=c->r[26]|c->r[26]; // 803B1494
  c->r[29]=0u+0x00000000u; // 803B1498
  goto L_803B14DC; // 803B149C
L_803B14A0:;
  c->r[30]=c->r[31]|c->r[31]; // 803B14A0
  c->r[28]=0u+0x00000000u; // 803B14A4
  goto L_803B14C8; // 803B14A8
L_803B14AC:;
  c->r[3]=R32(c->r[30]+0x0000000Cu); // 803B14AC
  cmps(c,0,(int32_t)c->r[3],0); // 803B14B0
  if (crb(c,2)) { goto L_803B14C0; } // 803B14B4
  c->r[4]=c->r[27]|c->r[27]; // 803B14B8
  c->lr=0x803B14C0u; f_80398518(c); // 803B14BC
L_803B14C0:;
  c->r[30]=c->r[30]+0x00000004u; // 803B14C0
  c->r[28]=c->r[28]+0x00000001u; // 803B14C4
L_803B14C8:;
  c->r[0]=R32(c->r[26]+0x000000A0u); // 803B14C8
  cmps(c,0,(int32_t)c->r[28],(int32_t)c->r[0]); // 803B14CC
  if (crb(c,0)) { IRQCHK(c); goto L_803B14AC; } // 803B14D0
  c->r[31]=c->r[31]+0x00000010u; // 803B14D4
  c->r[29]=c->r[29]+0x00000001u; // 803B14D8
L_803B14DC:;
  c->r[0]=R32(c->r[26]+0x0000009Cu); // 803B14DC
  cmps(c,0,(int32_t)c->r[29],(int32_t)c->r[0]); // 803B14E0
  if (crb(c,0)) { IRQCHK(c); goto L_803B14A0; } // 803B14E4
  c->r[11]=c->r[1]+0x00000020u; // 803B14E8
  c->lr=0x803B14F0u; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 803B14EC
  c->r[0]=R32(c->r[1]+0x00000024u); // 803B14F0
  c->lr=c->r[0]; // 803B14F4
  c->r[1]=c->r[1]+0x00000020u; // 803B14F8
  return; // 803B14FC
}

// fn_803B1500
void f_803B1500(Ctx* __restrict c) {
  trace_call(0x803B1500u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803B1500
  c->r[0]=c->lr; // 803B1504
  W32(c->r[1]+0x00000024u,c->r[0]); // 803B1508
  c->r[11]=c->r[1]+0x00000020u; // 803B150C
  c->lr=0x803B1514u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 803B1510
  c->r[0]=rotl(c->r[4],4)&0xFFFFFFF0u; // 803B1514
  c->r[27]=c->r[3]|c->r[3]; // 803B1518
  c->r[28]=c->r[5]|c->r[5]; // 803B151C
  c->r[29]=c->r[6]|c->r[6]; // 803B1520
  c->r[31]=c->r[3]+c->r[0]; // 803B1524
  c->r[30]=0u+0x00000000u; // 803B1528
  goto L_803B1550; // 803B152C
L_803B1530:;
  c->r[3]=R32(c->r[31]+0x0000000Cu); // 803B1530
  cmps(c,0,(int32_t)c->r[3],0); // 803B1534
  if (crb(c,2)) { goto L_803B1548; } // 803B1538
  c->r[4]=c->r[28]|c->r[28]; // 803B153C
  c->r[5]=c->r[29]|c->r[29]; // 803B1540
  c->lr=0x803B1548u; f_803985B0(c); // 803B1544
L_803B1548:;
  c->r[31]=c->r[31]+0x00000004u; // 803B1548
  c->r[30]=c->r[30]+0x00000001u; // 803B154C
L_803B1550:;
  c->r[0]=R32(c->r[27]+0x000000A0u); // 803B1550
  cmps(c,0,(int32_t)c->r[30],(int32_t)c->r[0]); // 803B1554
  if (crb(c,0)) { IRQCHK(c); goto L_803B1530; } // 803B1558
  c->r[11]=c->r[1]+0x00000020u; // 803B155C
  c->lr=0x803B1564u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 803B1560
  c->r[0]=R32(c->r[1]+0x00000024u); // 803B1564
  c->lr=c->r[0]; // 803B1568
  c->r[1]=c->r[1]+0x00000020u; // 803B156C
  return; // 803B1570
}

// fn_803B1574
void f_803B1574(Ctx* __restrict c) {
  trace_call(0x803B1574u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803B1574
  c->r[0]=c->lr; // 803B1578
  W32(c->r[1]+0x00000024u,c->r[0]); // 803B157C
  c->r[11]=c->r[1]+0x00000020u; // 803B1580
  c->lr=0x803B1588u; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 803B1584
  c->r[26]=c->r[3]|c->r[3]; // 803B1588
  c->r[27]=c->r[4]|c->r[4]; // 803B158C
  c->r[31]=c->r[26]|c->r[26]; // 803B1590
  c->r[29]=0u+0x00000000u; // 803B1594
  goto L_803B15D8; // 803B1598
L_803B159C:;
  c->r[30]=c->r[31]|c->r[31]; // 803B159C
  c->r[28]=0u+0x00000000u; // 803B15A0
  goto L_803B15C4; // 803B15A4
L_803B15A8:;
  c->r[3]=R32(c->r[30]+0x0000000Cu); // 803B15A8
  cmps(c,0,(int32_t)c->r[3],0); // 803B15AC
  if (crb(c,2)) { goto L_803B15BC; } // 803B15B0
  c->r[4]=c->r[27]|c->r[27]; // 803B15B4
  c->lr=0x803B15BCu; f_80398B38(c); // 803B15B8
L_803B15BC:;
  c->r[30]=c->r[30]+0x00000004u; // 803B15BC
  c->r[28]=c->r[28]+0x00000001u; // 803B15C0
L_803B15C4:;
  c->r[0]=R32(c->r[26]+0x000000A0u); // 803B15C4
  cmps(c,0,(int32_t)c->r[28],(int32_t)c->r[0]); // 803B15C8
  if (crb(c,0)) { IRQCHK(c); goto L_803B15A8; } // 803B15CC
  c->r[31]=c->r[31]+0x00000010u; // 803B15D0
  c->r[29]=c->r[29]+0x00000001u; // 803B15D4
L_803B15D8:;
  c->r[0]=R32(c->r[26]+0x0000009Cu); // 803B15D8
  cmps(c,0,(int32_t)c->r[29],(int32_t)c->r[0]); // 803B15DC
  if (crb(c,0)) { IRQCHK(c); goto L_803B159C; } // 803B15E0
  c->r[11]=c->r[1]+0x00000020u; // 803B15E4
  c->lr=0x803B15ECu; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 803B15E8
  c->r[0]=R32(c->r[1]+0x00000024u); // 803B15EC
  c->lr=c->r[0]; // 803B15F0
  c->r[1]=c->r[1]+0x00000020u; // 803B15F4
  return; // 803B15F8
}

// CalcAxVe__Q44nw4r3snd6detail5VoiceFv
void f_803B15FC(Ctx* __restrict c) {
  trace_call(0x803B15FCu);
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803B15FC
  c->r[0]=c->lr; // 803B1600
  W32(c->r[1]+0x00000054u,c->r[0]); // 803B1604
  {uint32_t ea=c->r[1]+0x00000040u; WF64(ea,c->f[31]);} // 803B1608
  {uint32_t ea=c->r[1]+0x00000048u; psq_store(c,31,ea,0,0);} // 803B160C
  {uint32_t ea=c->r[1]+0x00000030u; WF64(ea,c->f[30]);} // 803B1610
  {uint32_t ea=c->r[1]+0x00000038u; psq_store(c,30,ea,0,0);} // 803B1614
  {uint32_t ea=c->r[1]+0x00000020u; WF64(ea,c->f[29]);} // 803B1618
  {uint32_t ea=c->r[1]+0x00000028u; psq_store(c,29,ea,0,0);} // 803B161C
  c->r[11]=c->r[1]+0x00000020u; // 803B1620
  c->lr=0x803B1628u; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 803B1624
  {uint32_t ea=c->r[2]+0xFFFFEF70u; c->f[31]=c->ps1[31]=RF32(ea);} // 803B1628
  c->r[26]=c->r[3]|c->r[3]; // 803B162C
  {uint32_t ea=c->r[3]+0x00000110u; c->f[0]=c->ps1[0]=RF32(ea);} // 803B1630
  c->f[31]=c->ps1[31]=S(c->f[31]*c->f[0]); // 803B1634
  c->lr=0x803B163Cu; f_80396E38(c); // 803B1638
  c->lr=0x803B1640u; f_80396FE8(c); // 803B163C
  c->f[31]=c->ps1[31]=S(c->f[31]*c->f[1]); // 803B1640
  c->r[31]=c->r[26]|c->r[26]; // 803B1644
  c->r[28]=0u+0x00000000u; // 803B1648
  c->r[30]=0u+0x00000000u; // 803B164C
  goto L_803B16B0; // 803B1650
L_803B1654:;
  {uint32_t ea=c->r[31]+0x0000002Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 803B1654
  c->r[29]=c->r[26]+c->r[30]; // 803B1658
  {uint32_t ea=c->r[26]+0x00000118u; c->f[1]=c->ps1[1]=RF32(ea);} // 803B165C
  c->r[27]=0u+0x00000000u; // 803B1660
  c->f[2]=c->ps1[2]=S(c->f[31]*c->f[0]); // 803B1664
  {uint32_t ea=c->r[26]+0x00000114u; c->f[0]=c->ps1[0]=RF32(ea);} // 803B1668
  c->f[30]=c->ps1[30]=S(c->f[2]*c->f[1]); // 803B166C
  c->f[29]=c->ps1[29]=S(c->f[2]*c->f[0]); // 803B1670
  goto L_803B1698; // 803B1674
L_803B1678:;
  c->r[3]=R32(c->r[29]+0x0000000Cu); // 803B1678
  cmps(c,0,(int32_t)c->r[3],0); // 803B167C
  if (crb(c,2)) { goto L_803B1690; } // 803B1680
  c->f[1]=c->f[30]; // 803B1684
  c->f[2]=c->f[29]; // 803B1688
  c->lr=0x803B1690u; f_80399C20(c); // 803B168C
L_803B1690:;
  c->r[29]=c->r[29]+0x00000010u; // 803B1690
  c->r[27]=c->r[27]+0x00000001u; // 803B1694
L_803B1698:;
  c->r[0]=R32(c->r[26]+0x0000009Cu); // 803B1698
  cmps(c,0,(int32_t)c->r[27],(int32_t)c->r[0]); // 803B169C
  if (crb(c,0)) { IRQCHK(c); goto L_803B1678; } // 803B16A0
  c->r[31]=c->r[31]+0x0000001Cu; // 803B16A4
  c->r[30]=c->r[30]+0x00000004u; // 803B16A8
  c->r[28]=c->r[28]+0x00000001u; // 803B16AC
L_803B16B0:;
  c->r[0]=R32(c->r[26]+0x000000A0u); // 803B16B0
  cmps(c,0,(int32_t)c->r[28],(int32_t)c->r[0]); // 803B16B4
  if (crb(c,0)) { IRQCHK(c); goto L_803B1654; } // 803B16B8
  {uint32_t ea=c->r[1]+0x00000048u; psq_load(c,31,ea,0,0);} // 803B16BC
  {uint32_t ea=c->r[1]+0x00000040u; c->f[31]=RF64(ea);} // 803B16C0
  {uint32_t ea=c->r[1]+0x00000038u; psq_load(c,30,ea,0,0);} // 803B16C4
  {uint32_t ea=c->r[1]+0x00000030u; c->f[30]=RF64(ea);} // 803B16C8
  {uint32_t ea=c->r[1]+0x00000028u; psq_load(c,29,ea,0,0);} // 803B16CC
  c->r[11]=c->r[1]+0x00000020u; // 803B16D0
  {uint32_t ea=c->r[1]+0x00000020u; c->f[29]=RF64(ea);} // 803B16D4
  c->lr=0x803B16DCu; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 803B16D8
  c->r[0]=R32(c->r[1]+0x00000054u); // 803B16DC
  c->lr=c->r[0]; // 803B16E0
  c->r[1]=c->r[1]+0x00000050u; // 803B16E4
  return; // 803B16E8
}

// CalcAxMix__Q44nw4r3snd6detail5VoiceFv
void f_803B16EC(Ctx* __restrict c) {
  trace_call(0x803B16ECu);
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803B16EC
  c->r[0]=c->lr; // 803B16F0
  W32(c->r[1]+0x00000054u,c->r[0]); // 803B16F4
  c->r[11]=c->r[1]+0x00000050u; // 803B16F8
  c->lr=0x803B1700u; { W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 803B16FC
  c->r[25]=c->r[3]|c->r[3]; // 803B1700
  c->r[29]=0u+0x00000000u; // 803B1704
  c->r[31]=c->r[25]|c->r[25]; // 803B1708
  c->r[28]=0u+0x00000000u; // 803B170C
  goto L_803B17B0; // 803B1710
L_803B1714:;
  c->r[30]=c->r[31]|c->r[31]; // 803B1714
  c->r[27]=0u+0x00000000u; // 803B1718
  goto L_803B179C; // 803B171C
L_803B1720:;
  c->r[26]=R32(c->r[30]+0x0000000Cu); // 803B1720
  cmps(c,0,(int32_t)c->r[26],0); // 803B1724
  if (crb(c,2)) { goto L_803B1794; } // 803B1728
  c->r[3]=c->r[25]|c->r[25]; // 803B172C
  c->r[4]=c->r[28]|c->r[28]; // 803B1730
  c->r[5]=c->r[27]|c->r[27]; // 803B1734
  c->r[6]=c->r[1]+0x00000018u; // 803B1738
  c->r[7]=c->r[1]+0x00000008u; // 803B173C
  c->lr=0x803B1744u; f_803B1B48(c); // 803B1740
  c->r[3]=c->r[26]|c->r[26]; // 803B1744
  c->r[4]=c->r[1]+0x00000018u; // 803B1748
  c->lr=0x803B1750u; f_80399404(c); // 803B174C
  c->r[4]=R32(c->r[25]+0x000000C4u); // 803B1750
  c->r[3]=c->r[29]|c->r[3]; // 803B1754
  c->r[0]=0u-c->r[3]; // 803B1758
  cmpu(c,0,c->r[4],0x00000001u); // 803B175C
  c->r[0]=c->r[0]|c->r[3]; // 803B1760
  c->r[29]=rotl(c->r[0],1)&0x00000001u; // 803B1764
  if (crb(c,1)) { goto L_803B177C; } // 803B1768
  c->r[3]=c->r[26]|c->r[26]; // 803B176C
  c->r[4]=0u+0x00000000u; // 803B1770
  c->lr=0x803B1778u; f_80398B98(c); // 803B1774
  goto L_803B1794; // 803B1778
L_803B177C:;
  c->r[3]=c->r[26]|c->r[26]; // 803B177C
  c->r[4]=0u+0x00000001u; // 803B1780
  c->lr=0x803B1788u; f_80398B98(c); // 803B1784
  c->r[3]=c->r[26]|c->r[26]; // 803B1788
  c->r[4]=c->r[1]+0x00000008u; // 803B178C
  c->lr=0x803B1794u; f_803999F0(c); // 803B1790
L_803B1794:;
  c->r[30]=c->r[30]+0x00000004u; // 803B1794
  c->r[27]=c->r[27]+0x00000001u; // 803B1798
L_803B179C:;
  c->r[0]=R32(c->r[25]+0x000000A0u); // 803B179C
  cmps(c,0,(int32_t)c->r[27],(int32_t)c->r[0]); // 803B17A0
  if (crb(c,0)) { IRQCHK(c); goto L_803B1720; } // 803B17A4
  c->r[31]=c->r[31]+0x00000010u; // 803B17A8
  c->r[28]=c->r[28]+0x00000001u; // 803B17AC
L_803B17B0:;
  c->r[0]=R32(c->r[25]+0x0000009Cu); // 803B17B0
  cmps(c,0,(int32_t)c->r[28],(int32_t)c->r[0]); // 803B17B4
  if (crb(c,0)) { IRQCHK(c); goto L_803B1714; } // 803B17B8
  c->r[11]=c->r[1]+0x00000050u; // 803B17BC
  c->r[3]=c->r[29]|c->r[29]; // 803B17C0
  c->lr=0x803B17C8u; { c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 803B17C4
  c->r[0]=R32(c->r[1]+0x00000054u); // 803B17C8
  c->lr=c->r[0]; // 803B17CC
  c->r[1]=c->r[1]+0x00000050u; // 803B17D0
  return; // 803B17D4
}

// ResetDelta__Q44nw4r3snd6detail5VoiceFv
void f_803B17D8(Ctx* __restrict c) {
  trace_call(0x803B17D8u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803B17D8
  c->r[0]=c->lr; // 803B17DC
  W32(c->r[1]+0x00000024u,c->r[0]); // 803B17E0
  c->r[11]=c->r[1]+0x00000020u; // 803B17E4
  c->lr=0x803B17ECu; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 803B17E8
  c->r[27]=c->r[3]|c->r[3]; // 803B17EC
  c->r[29]=0u+0x00000000u; // 803B17F0
  c->r[31]=0u+0x00000000u; // 803B17F4
  goto L_803B1834; // 803B17F8
L_803B17FC:;
  c->r[30]=c->r[27]+c->r[31]; // 803B17FC
  c->r[28]=0u+0x00000000u; // 803B1800
  goto L_803B1820; // 803B1804
L_803B1808:;
  c->r[3]=R32(c->r[30]+0x0000000Cu); // 803B1808
  cmps(c,0,(int32_t)c->r[3],0); // 803B180C
  if (crb(c,2)) { goto L_803B1818; } // 803B1810
  c->lr=0x803B1818u; f_80398BF8(c); // 803B1814
L_803B1818:;
  c->r[30]=c->r[30]+0x00000010u; // 803B1818
  c->r[28]=c->r[28]+0x00000001u; // 803B181C
L_803B1820:;
  c->r[0]=R32(c->r[27]+0x0000009Cu); // 803B1820
  cmps(c,0,(int32_t)c->r[28],(int32_t)c->r[0]); // 803B1824
  if (crb(c,0)) { IRQCHK(c); goto L_803B1808; } // 803B1828
  c->r[31]=c->r[31]+0x00000004u; // 803B182C
  c->r[29]=c->r[29]+0x00000001u; // 803B1830
L_803B1834:;
  c->r[0]=R32(c->r[27]+0x000000A0u); // 803B1834
  cmps(c,0,(int32_t)c->r[29],(int32_t)c->r[0]); // 803B1838
  if (crb(c,0)) { IRQCHK(c); goto L_803B17FC; } // 803B183C
  c->r[11]=c->r[1]+0x00000020u; // 803B1840
  c->lr=0x803B1848u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 803B1844
  c->r[0]=R32(c->r[1]+0x00000024u); // 803B1848
  c->lr=c->r[0]; // 803B184C
  c->r[1]=c->r[1]+0x00000020u; // 803B1850
  return; // 803B1854
}

// AxVoiceCallbackFunc__Q44nw4r3snd6detail5VoiceFPQ44nw4r3snd6detail7AxVoiceQ54nw4r3snd6detail7AxVoice21AxVoiceCallbackStatusPv
void f_803B1858(Ctx* __restrict c) {
  trace_call(0x803B1858u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803B1858
  c->r[0]=c->lr; // 803B185C
  W32(c->r[1]+0x00000034u,c->r[0]); // 803B1860
  c->r[11]=c->r[1]+0x00000030u; // 803B1864
  c->lr=0x803B186Cu; { W32(c->r[11]+0xFFFFFFD8u,c->r[22]); W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 803B1868
  cmps(c,0,(int32_t)c->r[4],1); // 803B186C
  c->r[22]=c->r[3]|c->r[3]; // 803B1870
  c->r[28]=c->r[5]|c->r[5]; // 803B1874
  c->r[26]=0u+0x00000000u; // 803B1878
  if (crb(c,2)) { goto L_803B1898; } // 803B187C
  if (!crb(c,0)) { goto L_803B18A0; } // 803B1880
  cmps(c,0,(int32_t)c->r[4],0); // 803B1884
  if (!crb(c,0)) { goto L_803B1890; } // 803B1888
  goto L_803B18A0; // 803B188C
L_803B1890:;
  c->r[27]=0u+0x00000001u; // 803B1890
  goto L_803B18A0; // 803B1894
L_803B1898:;
  c->r[27]=0u+0x00000003u; // 803B1898
  c->r[26]=0u+0x00000001u; // 803B189C
L_803B18A0:;
  c->r[30]=c->r[28]|c->r[28]; // 803B18A0
  c->r[25]=0u+0x00000000u; // 803B18A4
  c->r[31]=0u+0x00000000u; // 803B18A8
  goto L_803B1944; // 803B18AC
L_803B18B0:;
  c->r[29]=c->r[30]|c->r[30]; // 803B18B0
  c->r[24]=0u+0x00000000u; // 803B18B4
  goto L_803B1930; // 803B18B8
L_803B18BC:;
  c->r[23]=R32(c->r[29]+0x0000000Cu); // 803B18BC
  cmps(c,0,(int32_t)c->r[23],0); // 803B18C0
  if (crb(c,2)) { goto L_803B1928; } // 803B18C4
  cmpu(c,0,c->r[23],c->r[22]); // 803B18C8
  if (!crb(c,2)) { goto L_803B18E8; } // 803B18CC
  cmps(c,0,(int32_t)c->r[26],0); // 803B18D0
  if (!crb(c,2)) { goto L_803B1924; } // 803B18D4
  c->lr=0x803B18DCu; f_8039A9F0(c); // 803B18D8
  c->r[4]=c->r[23]|c->r[23]; // 803B18DC
  c->lr=0x803B18E4u; f_8039AEB4(c); // 803B18E0
  goto L_803B1924; // 803B18E4
L_803B18E8:;
  c->r[3]=R32(c->r[23]+0x00000000u); // 803B18E8
  c->r[4]=0u+0x00000000u; // 803B18EC
  cmps(c,0,(int32_t)c->r[3],0); // 803B18F0
  if (crb(c,2)) { goto L_803B1908; } // 803B18F4
  c->r[0]=R16(c->r[3]+0x00000038u); // 803B18F8
  cmpu(c,0,c->r[0],0x00000001u); // 803B18FC
  if (!crb(c,2)) { goto L_803B1908; } // 803B1900
  c->r[4]=0u+0x00000001u; // 803B1904
L_803B1908:;
  cmps(c,0,(int32_t)c->r[4],0); // 803B1908
  if (crb(c,2)) { goto L_803B1918; } // 803B190C
  c->r[4]=0u+0x00000000u; // 803B1910
  c->lr=0x803B1918u; f_80276604(c); // 803B1914
L_803B1918:;
  c->lr=0x803B191Cu; f_8039A9F0(c); // 803B1918
  c->r[4]=c->r[23]|c->r[23]; // 803B191C
  c->lr=0x803B1924u; f_8039AEB4(c); // 803B1920
L_803B1924:;
  W32(c->r[29]+0x0000000Cu,c->r[31]); // 803B1924
L_803B1928:;
  c->r[29]=c->r[29]+0x00000004u; // 803B1928
  c->r[24]=c->r[24]+0x00000001u; // 803B192C
L_803B1930:;
  c->r[0]=R32(c->r[28]+0x000000A0u); // 803B1930
  cmps(c,0,(int32_t)c->r[24],(int32_t)c->r[0]); // 803B1934
  if (crb(c,0)) { IRQCHK(c); goto L_803B18BC; } // 803B1938
  c->r[30]=c->r[30]+0x00000010u; // 803B193C
  c->r[25]=c->r[25]+0x00000001u; // 803B1940
L_803B1944:;
  c->r[0]=R32(c->r[28]+0x0000009Cu); // 803B1944
  cmps(c,0,(int32_t)c->r[25],(int32_t)c->r[0]); // 803B1948
  if (crb(c,0)) { IRQCHK(c); goto L_803B18B0; } // 803B194C
  c->r[0]=0u+0x00000000u; // 803B1950
  cmps(c,0,(int32_t)c->r[26],0); // 803B1954
  W8(c->r[28]+0x000000AFu,c->r[0]); // 803B1958
  W8(c->r[28]+0x000000ADu,c->r[0]); // 803B195C
  W32(c->r[28]+0x0000009Cu,c->r[0]); // 803B1960
  if (crb(c,2)) { goto L_803B1970; } // 803B1964
  c->r[3]=c->r[28]|c->r[28]; // 803B1968
  c->lr=0x803B1970u; f_803B0940(c); // 803B196C
L_803B1970:;
  c->r[12]=R32(c->r[28]+0x000000A4u); // 803B1970
  cmps(c,0,(int32_t)c->r[12],0); // 803B1974
  if (crb(c,2)) { goto L_803B1990; } // 803B1978
  c->r[3]=c->r[28]|c->r[28]; // 803B197C
  c->r[4]=c->r[27]|c->r[27]; // 803B1980
  c->r[5]=R32(c->r[28]+0x000000A8u); // 803B1984
  c->ctr=c->r[12]; // 803B1988
  if (true) { c->lr=0x803B1990u; dispatch(c,c->ctr); } // 803B198C
L_803B1990:;
  c->r[11]=c->r[1]+0x00000030u; // 803B1990
  c->lr=0x803B1998u; { c->r[22]=R32(c->r[11]+0xFFFFFFD8u); c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 803B1994
  c->r[0]=R32(c->r[1]+0x00000034u); // 803B1998
  c->lr=c->r[0]; // 803B199C
  c->r[1]=c->r[1]+0x00000030u; // 803B19A0
  return; // 803B19A4
}

// TransformDpl2Pan__Q44nw4r3snd6detail5VoiceFPfPfff
void f_803B19A8(Ctx* __restrict c) {
  trace_call(0x803B19A8u);
  {uint32_t ea=c->r[2]+0xFFFFEF70u; c->f[3]=c->ps1[3]=RF32(ea);} // 803B19A8
  c->f[0]=std::fabs(c->f[1]); // 803B19AC
  c->f[4]=c->ps1[4]=S(c->f[2]-c->f[3]); // 803B19B0
  c->f[2]=std::fabs(c->f[4]); // 803B19B4
  fcmp(c,0,c->f[0],c->f[2]); // 803B19B8
  setcrb(c,2,crb(c,0)|crb(c,2)); // 803B19BC
  if (!crb(c,2)) { goto L_803B1A14; } // 803B19C0
  {uint32_t ea=c->r[2]+0xFFFFEF74u; c->f[0]=c->ps1[0]=RF32(ea);} // 803B19C4
  fcmp(c,0,c->f[4],c->f[0]); // 803B19C8
  setcrb(c,2,crb(c,0)|crb(c,2)); // 803B19CC
  if (!crb(c,2)) { goto L_803B19F0; } // 803B19D0
  {uint32_t ea=c->r[2]+0xFFFFEF7Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 803B19D4
  {uint32_t ea=c->r[2]+0xFFFFEF78u; c->f[0]=c->ps1[0]=RF32(ea);} // 803B19D8
  c->f[2]=c->ps1[2]=S(c->f[2]*c->f[4]); // 803B19DC
  {uint32_t ea=c->r[4]+0x00000000u; WF32(ea,c->f[1]);} // 803B19E0
  c->f[0]=c->ps1[0]=S(c->f[0]+c->f[2]); // 803B19E4
  {uint32_t ea=c->r[5]+0x00000000u; WF32(ea,c->f[0]);} // 803B19E8
  goto L_803B1B34; // 803B19EC
L_803B19F0:;
  {uint32_t ea=c->r[2]+0xFFFFEF84u; c->f[0]=c->ps1[0]=RF32(ea);} // 803B19F0
  {uint32_t ea=c->r[2]+0xFFFFEF80u; c->f[3]=c->ps1[3]=RF32(ea);} // 803B19F4
  c->f[2]=c->ps1[2]=S(c->f[0]*c->f[4]); // 803B19F8
  {uint32_t ea=c->r[2]+0xFFFFEF78u; c->f[0]=c->ps1[0]=RF32(ea);} // 803B19FC
  c->f[1]=c->ps1[1]=S(c->f[3]*c->f[1]); // 803B1A00
  c->f[0]=c->ps1[0]=S(c->f[0]+c->f[2]); // 803B1A04
  {uint32_t ea=c->r[4]+0x00000000u; WF32(ea,c->f[1]);} // 803B1A08
  {uint32_t ea=c->r[5]+0x00000000u; WF32(ea,c->f[0]);} // 803B1A0C
  goto L_803B1B34; // 803B1A10
L_803B1A14:;
  {uint32_t ea=c->r[2]+0xFFFFEF74u; c->f[2]=c->ps1[2]=RF32(ea);} // 803B1A14
  fcmp(c,0,c->f[1],c->f[2]); // 803B1A18
  setcrb(c,2,crb(c,1)|crb(c,2)); // 803B1A1C
  if (!crb(c,2)) { goto L_803B1AAC; } // 803B1A20
  fcmp(c,0,c->f[4],c->f[2]); // 803B1A24
  setcrb(c,2,crb(c,0)|crb(c,2)); // 803B1A28
  if (!crb(c,2)) { goto L_803B1A74; } // 803B1A2C
  c->f[5]=-c->f[4]; // 803B1A30
  {uint32_t ea=c->r[2]+0xFFFFEF90u; c->f[2]=c->ps1[2]=RF32(ea);} // 803B1A34
  {uint32_t ea=c->r[2]+0xFFFFEF8Cu; c->f[6]=c->ps1[6]=RF32(ea);} // 803B1A38
  c->f[4]=c->ps1[4]=S(c->f[2]*c->f[4]); // 803B1A3C
  {uint32_t ea=c->r[2]+0xFFFFEF7Cu; c->f[3]=c->ps1[3]=RF32(ea);} // 803B1A40
  c->f[7]=c->ps1[7]=S(c->f[5]/c->f[1]); // 803B1A44
  {uint32_t ea=c->r[2]+0xFFFFEF88u; c->f[5]=c->ps1[5]=RF32(ea);} // 803B1A48
  {uint32_t ea=c->r[2]+0xFFFFEF78u; c->f[2]=c->ps1[2]=RF32(ea);} // 803B1A4C
  c->f[6]=c->ps1[6]=S(c->f[6]*c->f[7]); // 803B1A50
  c->f[1]=c->ps1[1]=S(c->f[3]*c->f[1]); // 803B1A54
  c->f[3]=c->ps1[3]=S(c->f[5]+c->f[6]); // 803B1A58
  c->f[1]=c->ps1[1]=S(c->f[4]+c->f[1]); // 803B1A5C
  c->f[3]=c->ps1[3]=S(c->f[3]*c->f[0]); // 803B1A60
  c->f[0]=c->ps1[0]=S(c->f[2]+c->f[1]); // 803B1A64
  {uint32_t ea=c->r[4]+0x00000000u; WF32(ea,c->f[3]);} // 803B1A68
  {uint32_t ea=c->r[5]+0x00000000u; WF32(ea,c->f[0]);} // 803B1A6C
  goto L_803B1B34; // 803B1A70
L_803B1A74:;
  c->f[5]=-c->f[4]; // 803B1A74
  {uint32_t ea=c->r[2]+0xFFFFEF84u; c->f[2]=c->ps1[2]=RF32(ea);} // 803B1A78
  {uint32_t ea=c->r[2]+0xFFFFEF94u; c->f[4]=c->ps1[4]=RF32(ea);} // 803B1A7C
  c->f[2]=c->ps1[2]=S(c->f[2]*c->f[1]); // 803B1A80
  {uint32_t ea=c->r[2]+0xFFFFEF88u; c->f[3]=c->ps1[3]=RF32(ea);} // 803B1A84
  c->f[5]=c->ps1[5]=S(c->f[5]/c->f[1]); // 803B1A88
  {uint32_t ea=c->r[2]+0xFFFFEF78u; c->f[1]=c->ps1[1]=RF32(ea);} // 803B1A8C
  c->f[4]=c->ps1[4]=S(c->f[4]*c->f[5]); // 803B1A90
  c->f[1]=c->ps1[1]=S(c->f[1]+c->f[2]); // 803B1A94
  c->f[2]=c->ps1[2]=S(c->f[3]+c->f[4]); // 803B1A98
  c->f[0]=c->ps1[0]=S(c->f[2]*c->f[0]); // 803B1A9C
  {uint32_t ea=c->r[4]+0x00000000u; WF32(ea,c->f[0]);} // 803B1AA0
  {uint32_t ea=c->r[5]+0x00000000u; WF32(ea,c->f[1]);} // 803B1AA4
  goto L_803B1B34; // 803B1AA8
L_803B1AAC:;
  fcmp(c,0,c->f[4],c->f[2]); // 803B1AAC
  setcrb(c,2,crb(c,0)|crb(c,2)); // 803B1AB0
  if (!crb(c,2)) { goto L_803B1AFC; } // 803B1AB4
  c->f[5]=-c->f[4]; // 803B1AB8
  {uint32_t ea=c->r[2]+0xFFFFEF90u; c->f[2]=c->ps1[2]=RF32(ea);} // 803B1ABC
  {uint32_t ea=c->r[2]+0xFFFFEF8Cu; c->f[6]=c->ps1[6]=RF32(ea);} // 803B1AC0
  c->f[4]=c->ps1[4]=S(c->f[2]*c->f[4]); // 803B1AC4
  {uint32_t ea=c->r[2]+0xFFFFEF84u; c->f[3]=c->ps1[3]=RF32(ea);} // 803B1AC8
  c->f[7]=c->ps1[7]=S(c->f[5]/c->f[1]); // 803B1ACC
  {uint32_t ea=c->r[2]+0xFFFFEF88u; c->f[5]=c->ps1[5]=RF32(ea);} // 803B1AD0
  {uint32_t ea=c->r[2]+0xFFFFEF78u; c->f[2]=c->ps1[2]=RF32(ea);} // 803B1AD4
  c->f[6]=c->ps1[6]=S(c->f[6]*c->f[7]); // 803B1AD8
  c->f[1]=c->ps1[1]=S(c->f[3]*c->f[1]); // 803B1ADC
  c->f[3]=c->ps1[3]=S(c->f[6]-c->f[5]); // 803B1AE0
  c->f[1]=c->ps1[1]=S(c->f[4]-c->f[1]); // 803B1AE4
  c->f[3]=c->ps1[3]=S(c->f[3]*c->f[0]); // 803B1AE8
  c->f[0]=c->ps1[0]=S(c->f[2]+c->f[1]); // 803B1AEC
  {uint32_t ea=c->r[4]+0x00000000u; WF32(ea,c->f[3]);} // 803B1AF0
  {uint32_t ea=c->r[5]+0x00000000u; WF32(ea,c->f[0]);} // 803B1AF4
  goto L_803B1B34; // 803B1AF8
L_803B1AFC:;
  c->f[6]=-c->f[4]; // 803B1AFC
  {uint32_t ea=c->r[2]+0xFFFFEF94u; c->f[5]=c->ps1[5]=RF32(ea);} // 803B1B00
  c->f[3]=-c->f[1]; // 803B1B04
  {uint32_t ea=c->r[2]+0xFFFFEF84u; c->f[2]=c->ps1[2]=RF32(ea);} // 803B1B08
  {uint32_t ea=c->r[2]+0xFFFFEF88u; c->f[4]=c->ps1[4]=RF32(ea);} // 803B1B0C
  c->f[6]=c->ps1[6]=S(c->f[6]/c->f[1]); // 803B1B10
  {uint32_t ea=c->r[2]+0xFFFFEF78u; c->f[1]=c->ps1[1]=RF32(ea);} // 803B1B14
  c->f[5]=c->ps1[5]=S(c->f[5]*c->f[6]); // 803B1B18
  c->f[2]=c->ps1[2]=S(c->f[2]*c->f[3]); // 803B1B1C
  c->f[3]=c->ps1[3]=S(c->f[5]-c->f[4]); // 803B1B20
  c->f[1]=c->ps1[1]=S(c->f[1]+c->f[2]); // 803B1B24
  c->f[0]=c->ps1[0]=S(c->f[3]*c->f[0]); // 803B1B28
  {uint32_t ea=c->r[4]+0x00000000u; WF32(ea,c->f[0]);} // 803B1B2C
  {uint32_t ea=c->r[5]+0x00000000u; WF32(ea,c->f[1]);} // 803B1B30
L_803B1B34:;
  {uint32_t ea=c->r[5]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 803B1B34
  {uint32_t ea=c->r[2]+0xFFFFEF70u; c->f[0]=c->ps1[0]=RF32(ea);} // 803B1B38
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 803B1B3C
  {uint32_t ea=c->r[5]+0x00000000u; WF32(ea,c->f[0]);} // 803B1B40
  return; // 803B1B44
}

// CalcMixParam__Q44nw4r3snd6detail5VoiceFiiPQ54nw4r3snd6detail7AxVoice8MixParamPQ54nw4r3snd6detail7AxVoice14RemoteMixParam
void f_803B1B48(Ctx* __restrict c) {
  trace_call(0x803B1B48u);
  {uint32_t ea=c->r[1]+0xFFFFFE50u; W32(ea,c->r[1]); c->r[1]=ea;} // 803B1B48
  c->r[0]=c->lr; // 803B1B4C
  W32(c->r[1]+0x000001B4u,c->r[0]); // 803B1B50
  {uint32_t ea=c->r[1]+0x000001A0u; WF64(ea,c->f[31]);} // 803B1B54
  {uint32_t ea=c->r[1]+0x000001A8u; psq_store(c,31,ea,0,0);} // 803B1B58
  {uint32_t ea=c->r[1]+0x00000190u; WF64(ea,c->f[30]);} // 803B1B5C
  {uint32_t ea=c->r[1]+0x00000198u; psq_store(c,30,ea,0,0);} // 803B1B60
  {uint32_t ea=c->r[1]+0x00000180u; WF64(ea,c->f[29]);} // 803B1B64
  {uint32_t ea=c->r[1]+0x00000188u; psq_store(c,29,ea,0,0);} // 803B1B68
  {uint32_t ea=c->r[1]+0x00000170u; WF64(ea,c->f[28]);} // 803B1B6C
  {uint32_t ea=c->r[1]+0x00000178u; psq_store(c,28,ea,0,0);} // 803B1B70
  {uint32_t ea=c->r[1]+0x00000160u; WF64(ea,c->f[27]);} // 803B1B74
  {uint32_t ea=c->r[1]+0x00000168u; psq_store(c,27,ea,0,0);} // 803B1B78
  {uint32_t ea=c->r[1]+0x00000150u; WF64(ea,c->f[26]);} // 803B1B7C
  {uint32_t ea=c->r[1]+0x00000158u; psq_store(c,26,ea,0,0);} // 803B1B80
  {uint32_t ea=c->r[1]+0x00000140u; WF64(ea,c->f[25]);} // 803B1B84
  {uint32_t ea=c->r[1]+0x00000148u; psq_store(c,25,ea,0,0);} // 803B1B88
  {uint32_t ea=c->r[1]+0x00000130u; WF64(ea,c->f[24]);} // 803B1B8C
  {uint32_t ea=c->r[1]+0x00000138u; psq_store(c,24,ea,0,0);} // 803B1B90
  {uint32_t ea=c->r[1]+0x00000120u; WF64(ea,c->f[23]);} // 803B1B94
  {uint32_t ea=c->r[1]+0x00000128u; psq_store(c,23,ea,0,0);} // 803B1B98
  {uint32_t ea=c->r[1]+0x00000110u; WF64(ea,c->f[22]);} // 803B1B9C
  {uint32_t ea=c->r[1]+0x00000118u; psq_store(c,22,ea,0,0);} // 803B1BA0
  {uint32_t ea=c->r[1]+0x00000100u; WF64(ea,c->f[21]);} // 803B1BA4
  {uint32_t ea=c->r[1]+0x00000108u; psq_store(c,21,ea,0,0);} // 803B1BA8
  {uint32_t ea=c->r[1]+0x000000F0u; WF64(ea,c->f[20]);} // 803B1BAC
  {uint32_t ea=c->r[1]+0x000000F8u; psq_store(c,20,ea,0,0);} // 803B1BB0
  {uint32_t ea=c->r[1]+0x000000E0u; WF64(ea,c->f[19]);} // 803B1BB4
  {uint32_t ea=c->r[1]+0x000000E8u; psq_store(c,19,ea,0,0);} // 803B1BB8
  {uint32_t ea=c->r[1]+0x000000D0u; WF64(ea,c->f[18]);} // 803B1BBC
  {uint32_t ea=c->r[1]+0x000000D8u; psq_store(c,18,ea,0,0);} // 803B1BC0
  {uint32_t ea=c->r[1]+0x000000C0u; WF64(ea,c->f[17]);} // 803B1BC4
  {uint32_t ea=c->r[1]+0x000000C8u; psq_store(c,17,ea,0,0);} // 803B1BC8
  {uint32_t ea=c->r[1]+0x000000B0u; WF64(ea,c->f[16]);} // 803B1BCC
  {uint32_t ea=c->r[1]+0x000000B8u; psq_store(c,16,ea,0,0);} // 803B1BD0
  {uint32_t ea=c->r[2]+0xFFFFEF74u; c->f[2]=c->ps1[2]=RF32(ea);} // 803B1BD4
  W32(c->r[1]+0x000000ACu,c->r[31]); // 803B1BD8
  c->r[31]=c->r[7]|c->r[7]; // 803B1BDC
  c->f[3]=c->f[2]; // 803B1BE0
  W32(c->r[1]+0x000000A8u,c->r[30]); // 803B1BE4
  c->f[4]=c->f[2]; // 803B1BE8
  c->f[0]=c->f[2]; // 803B1BEC
  c->r[30]=c->r[6]|c->r[6]; // 803B1BF0
  W32(c->r[1]+0x000000A4u,c->r[29]); // 803B1BF4
  c->f[5]=c->f[2]; // 803B1BF8
  c->r[29]=c->r[5]|c->r[5]; // 803B1BFC
  W32(c->r[1]+0x000000A0u,c->r[28]); // 803B1C00
  c->r[28]=c->r[3]|c->r[3]; // 803B1C04
  c->r[10]=R32(c->r[3]+0x000000C4u); // 803B1C08
  c->r[0]=rotl(c->r[10],0)&0x00000001u; cr0(c,c->r[0]); // 803B1C0C
  if (crb(c,2)) { goto L_803B1C5C; } // 803B1C10
  c->r[0]=(uint32_t)((int32_t)c->r[5]*(int32_t)28); // 803B1C14
  {uint32_t ea=c->r[3]+0x000000D0u; c->f[1]=c->ps1[1]=RF32(ea);} // 803B1C18
  {uint32_t ea=c->r[2]+0xFFFFEF70u; c->f[4]=c->ps1[4]=RF32(ea);} // 803B1C1C
  {uint32_t ea=c->r[3]+0x000000C8u; c->f[2]=c->ps1[2]=RF32(ea);} // 803B1C20
  c->r[6]=c->r[3]+c->r[0]; // 803B1C24
  {uint32_t ea=c->r[3]+0x000000CCu; c->f[3]=c->ps1[3]=RF32(ea);} // 803B1C28
  {uint32_t ea=c->r[6]+0x0000003Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 803B1C2C
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 803B1C30
  fcmp(c,0,c->f[0],c->f[4]); // 803B1C34
  if (!crb(c,1)) { goto L_803B1C40; } // 803B1C38
  goto L_803B1C54; // 803B1C3C
L_803B1C40:;
  fcmp(c,0,c->f[0],c->f[5]); // 803B1C40
  if (!crb(c,0)) { goto L_803B1C4C; } // 803B1C44
  goto L_803B1C50; // 803B1C48
L_803B1C4C:;
  c->f[5]=c->f[0]; // 803B1C4C
L_803B1C50:;
  c->f[4]=c->f[5]; // 803B1C50
L_803B1C54:;
  {uint32_t ea=c->r[3]+0x000000D4u; c->f[0]=c->ps1[0]=RF32(ea);} // 803B1C54
  {uint32_t ea=c->r[3]+0x000000D8u; c->f[5]=c->ps1[5]=RF32(ea);} // 803B1C58
L_803B1C5C:;
  c->r[6]=0u+0x00000002u; // 803B1C5C
  c->f[31]=c->ps1[31]=S(c->f[2]*c->f[3]); // 803B1C60
  c->f[30]=c->ps1[30]=S(c->f[2]*c->f[4]); // 803B1C64
  c->r[7]=c->r[28]|c->r[28]; // 803B1C68
  c->f[29]=c->ps1[29]=S(c->f[2]*c->f[0]); // 803B1C6C
  c->r[8]=c->r[1]+0x00000090u; // 803B1C70
  c->f[28]=c->ps1[28]=S(c->f[2]*c->f[5]); // 803B1C74
  c->r[9]=c->r[1]+0x00000080u; // 803B1C78
  c->r[11]=0u+0x00000000u; // 803B1C7C
  c->ctr=c->r[6]; // 803B1C80
L_803B1C84:;
  {uint32_t ea=c->r[2]+0xFFFFEF74u; c->f[2]=c->ps1[2]=RF32(ea);} // 803B1C84
  c->r[0]=((c->r[11])&0x20)?0u:(c->r[6]<<((c->r[11])&31)); // 803B1C88
  c->r[0]=c->r[10]&c->r[0]; cr0(c,c->r[0]); // 803B1C8C
  c->f[3]=c->f[2]; // 803B1C90
  c->f[4]=c->f[2]; // 803B1C94
  if (crb(c,2)) { goto L_803B1CA8; } // 803B1C98
  {uint32_t ea=c->r[7]+0x000000DCu; c->f[2]=c->ps1[2]=RF32(ea);} // 803B1C9C
  {uint32_t ea=c->r[7]+0x000000ECu; c->f[3]=c->ps1[3]=RF32(ea);} // 803B1CA0
  {uint32_t ea=c->r[7]+0x000000FCu; c->f[4]=c->ps1[4]=RF32(ea);} // 803B1CA4
L_803B1CA8:;
  c->f[1]=c->ps1[1]=S(c->f[2]*c->f[3]); // 803B1CA8
  c->r[11]=c->r[11]+0x00000001u; // 803B1CAC
  c->f[0]=c->ps1[0]=S(c->f[2]*c->f[4]); // 803B1CB0
  {uint32_t ea=c->r[2]+0xFFFFEF74u; c->f[2]=c->ps1[2]=RF32(ea);} // 803B1CB4
  c->r[0]=((c->r[11])&0x20)?0u:(c->r[6]<<((c->r[11])&31)); // 803B1CB8
  c->r[0]=c->r[10]&c->r[0]; cr0(c,c->r[0]); // 803B1CBC
  c->f[3]=c->f[2]; // 803B1CC0
  {uint32_t ea=c->r[8]+0x00000000u; WF32(ea,c->f[1]);} // 803B1CC4
  c->f[4]=c->f[2]; // 803B1CC8
  {uint32_t ea=c->r[9]+0x00000000u; WF32(ea,c->f[0]);} // 803B1CCC
  if (crb(c,2)) { goto L_803B1CE0; } // 803B1CD0
  {uint32_t ea=c->r[7]+0x000000E0u; c->f[2]=c->ps1[2]=RF32(ea);} // 803B1CD4
  {uint32_t ea=c->r[7]+0x000000F0u; c->f[3]=c->ps1[3]=RF32(ea);} // 803B1CD8
  {uint32_t ea=c->r[7]+0x00000100u; c->f[4]=c->ps1[4]=RF32(ea);} // 803B1CDC
L_803B1CE0:;
  c->f[1]=c->ps1[1]=S(c->f[2]*c->f[3]); // 803B1CE0
  c->r[7]=c->r[7]+0x00000008u; // 803B1CE4
  c->f[0]=c->ps1[0]=S(c->f[2]*c->f[4]); // 803B1CE8
  c->r[11]=c->r[11]+0x00000001u; // 803B1CEC
  {uint32_t ea=c->r[8]+0x00000004u; WF32(ea,c->f[1]);} // 803B1CF0
  c->r[8]=c->r[8]+0x00000008u; // 803B1CF4
  {uint32_t ea=c->r[9]+0x00000004u; WF32(ea,c->f[0]);} // 803B1CF8
  c->r[9]=c->r[9]+0x00000008u; // 803B1CFC
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_803B1C84; } // 803B1D00
  c->r[7]=0u+0x00000000u; // 803B1D04
  W32(c->r[1]+0x00000028u,c->r[7]); // 803B1D08
  W8(c->r[1]+0x0000002Cu,c->r[7]); // 803B1D0C
  W8(c->r[1]+0x0000002Du,c->r[7]); // 803B1D10
  c->r[0]=R32(c->r[3]+0x00000120u); // 803B1D14
  cmpu(c,0,c->r[0],0x00000008u); // 803B1D18
  if (crb(c,1)) { goto L_803B1DCC; } // 803B1D1C
  c->r[6]=0u+0x80430000u; // 803B1D20
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 803B1D24
  c->r[6]=c->r[6]+0x00007648u; // 803B1D28
  c->r[6]=R32(c->r[6]+c->r[0]); // 803B1D2C
  c->ctr=c->r[6]; // 803B1D30
  if (true) { switch (c->ctr) { case 0x803B1D38u: goto L_803B1D38; case 0x803B1D40u: goto L_803B1D40; case 0x803B1D50u: goto L_803B1D50; case 0x803B1D64u: goto L_803B1D64; case 0x803B1D70u: goto L_803B1D70; case 0x803B1D80u: goto L_803B1D80; case 0x803B1D94u: goto L_803B1D94; case 0x803B1DA0u: goto L_803B1DA0; case 0x803B1DB4u: goto L_803B1DB4; default: break; } dispatch(c,c->ctr); return; } // 803B1D34
L_803B1D38:;
  W32(c->r[1]+0x00000028u,c->r[7]); // 803B1D38
  goto L_803B1DD4; // 803B1D3C
L_803B1D40:;
  c->r[0]=0u+0x00000001u; // 803B1D40
  W32(c->r[1]+0x00000028u,c->r[7]); // 803B1D44
  W8(c->r[1]+0x0000002Cu,c->r[0]); // 803B1D48
  goto L_803B1DD4; // 803B1D4C
L_803B1D50:;
  c->r[0]=0u+0x00000001u; // 803B1D50
  W32(c->r[1]+0x00000028u,c->r[7]); // 803B1D54
  W8(c->r[1]+0x0000002Cu,c->r[0]); // 803B1D58
  W8(c->r[1]+0x0000002Du,c->r[0]); // 803B1D5C
  goto L_803B1DD4; // 803B1D60
L_803B1D64:;
  c->r[0]=0u+0x00000001u; // 803B1D64
  W32(c->r[1]+0x00000028u,c->r[0]); // 803B1D68
  goto L_803B1DD4; // 803B1D6C
L_803B1D70:;
  c->r[0]=0u+0x00000001u; // 803B1D70
  W32(c->r[1]+0x00000028u,c->r[0]); // 803B1D74
  W8(c->r[1]+0x0000002Cu,c->r[0]); // 803B1D78
  goto L_803B1DD4; // 803B1D7C
L_803B1D80:;
  c->r[0]=0u+0x00000001u; // 803B1D80
  W32(c->r[1]+0x00000028u,c->r[0]); // 803B1D84
  W8(c->r[1]+0x0000002Cu,c->r[0]); // 803B1D88
  W8(c->r[1]+0x0000002Du,c->r[0]); // 803B1D8C
  goto L_803B1DD4; // 803B1D90
L_803B1D94:;
  c->r[0]=0u+0x00000002u; // 803B1D94
  W32(c->r[1]+0x00000028u,c->r[0]); // 803B1D98
  goto L_803B1DD4; // 803B1D9C
L_803B1DA0:;
  c->r[6]=0u+0x00000002u; // 803B1DA0
  c->r[0]=0u+0x00000001u; // 803B1DA4
  W32(c->r[1]+0x00000028u,c->r[6]); // 803B1DA8
  W8(c->r[1]+0x0000002Cu,c->r[0]); // 803B1DAC
  goto L_803B1DD4; // 803B1DB0
L_803B1DB4:;
  c->r[0]=0u+0x00000001u; // 803B1DB4
  c->r[6]=0u+0x00000002u; // 803B1DB8
  W32(c->r[1]+0x00000028u,c->r[6]); // 803B1DBC
  W8(c->r[1]+0x0000002Cu,c->r[0]); // 803B1DC0
  W8(c->r[1]+0x0000002Du,c->r[0]); // 803B1DC4
  goto L_803B1DD4; // 803B1DC8
L_803B1DCC:;
  c->r[0]=0u+0x00000000u; // 803B1DCC
  W32(c->r[1]+0x00000028u,c->r[0]); // 803B1DD0
L_803B1DD4:;
  c->r[6]=R32(c->r[3]+0x0000009Cu); // 803B1DD4
  cmps(c,0,(int32_t)c->r[6],1); // 803B1DD8
  if (!crb(c,1)) { goto L_803B1E6C; } // 803B1DDC
  c->r[0]=R32(c->r[3]+0x0000011Cu); // 803B1DE0
  cmps(c,0,(int32_t)c->r[0],1); // 803B1DE4
  if (!crb(c,2)) { goto L_803B1E6C; } // 803B1DE8
  c->r[0]=(uint32_t)((int32_t)c->r[5]*(int32_t)28); // 803B1DEC
  {uint32_t ea=c->r[3]+0x000000B8u; c->f[3]=c->ps1[3]=RF32(ea);} // 803B1DF0
  {uint32_t ea=c->r[3]+0x000000BCu; c->f[2]=c->ps1[2]=RF32(ea);} // 803B1DF4
  cmps(c,0,(int32_t)c->r[4],0); // 803B1DF8
  c->r[3]=c->r[3]+c->r[0]; // 803B1DFC
  {uint32_t ea=c->r[3]+0x00000034u; c->f[1]=c->ps1[1]=RF32(ea);} // 803B1E00
  {uint32_t ea=c->r[3]+0x00000038u; c->f[0]=c->ps1[0]=RF32(ea);} // 803B1E04
  c->f[1]=c->ps1[1]=S(c->f[3]+c->f[1]); // 803B1E08
  c->f[16]=c->ps1[16]=S(c->f[2]+c->f[0]); // 803B1E0C
  if (!crb(c,2)) { goto L_803B1E28; } // 803B1E10
  c->r[3]=c->r[1]+0x00000028u; // 803B1E14
  c->lr=0x803B1E1Cu; f_803B2EFC(c); // 803B1E18
  c->f[27]=c->f[1]; // 803B1E1C
  {uint32_t ea=c->r[2]+0xFFFFEF74u; c->f[26]=c->ps1[26]=RF32(ea);} // 803B1E20
  goto L_803B1E44; // 803B1E24
L_803B1E28:;
  cmps(c,0,(int32_t)c->r[4],1); // 803B1E28
  if (!crb(c,2)) { goto L_803B1E44; } // 803B1E2C
  c->f[1]=-c->f[1]; // 803B1E30
  {uint32_t ea=c->r[2]+0xFFFFEF74u; c->f[27]=c->ps1[27]=RF32(ea);} // 803B1E34
  c->r[3]=c->r[1]+0x00000028u; // 803B1E38
  c->lr=0x803B1E40u; f_803B2EFC(c); // 803B1E3C
  c->f[26]=c->f[1]; // 803B1E40
L_803B1E44:;
  c->f[1]=c->f[16]; // 803B1E44
  c->r[3]=c->r[1]+0x00000028u; // 803B1E48
  c->lr=0x803B1E50u; f_803B2FDC(c); // 803B1E4C
  {uint32_t ea=c->r[2]+0xFFFFEF90u; c->f[0]=c->ps1[0]=RF32(ea);} // 803B1E50
  c->f[24]=c->f[1]; // 803B1E54
  c->r[3]=c->r[1]+0x00000028u; // 803B1E58
  c->f[1]=c->ps1[1]=S(c->f[0]-c->f[16]); // 803B1E5C
  c->lr=0x803B1E64u; f_803B2FDC(c); // 803B1E60
  c->f[16]=c->f[1]; // 803B1E64
  goto L_803B1F5C; // 803B1E68
L_803B1E6C:;
  cmps(c,0,(int32_t)c->r[6],2); // 803B1E6C
  {uint32_t ea=c->r[2]+0xFFFFEF74u; c->f[16]=c->ps1[16]=RF32(ea);} // 803B1E70
  if (!crb(c,2)) { goto L_803B1E90; } // 803B1E74
  cmps(c,0,(int32_t)c->r[4],0); // 803B1E78
  if (!crb(c,2)) { goto L_803B1E84; } // 803B1E7C
  {uint32_t ea=c->r[2]+0xFFFFEF98u; c->f[16]=c->ps1[16]=RF32(ea);} // 803B1E80
L_803B1E84:;
  cmps(c,0,(int32_t)c->r[4],1); // 803B1E84
  if (!crb(c,2)) { goto L_803B1E90; } // 803B1E88
  {uint32_t ea=c->r[2]+0xFFFFEF70u; c->f[16]=c->ps1[16]=RF32(ea);} // 803B1E8C
L_803B1E90:;
  c->lr=0x803B1E94u; f_80396E38(c); // 803B1E90
  c->lr=0x803B1E98u; f_803975C4(c); // 803B1E94
  cmps(c,0,(int32_t)c->r[3],2); // 803B1E98
  if (crb(c,2)) { goto L_803B1EAC; } // 803B1E9C
  if (!crb(c,0)) { goto L_803B1EE4; } // 803B1EA0
  goto L_803B1EE4; // 803B1EA4
  goto L_803B1EE4; // 803B1EA8
L_803B1EAC:;
  c->r[0]=(uint32_t)((int32_t)c->r[29]*(int32_t)28); // 803B1EAC
  {uint32_t ea=c->r[28]+0x000000B8u; c->f[0]=c->ps1[0]=RF32(ea);} // 803B1EB0
  {uint32_t ea=c->r[28]+0x000000BCu; c->f[2]=c->ps1[2]=RF32(ea);} // 803B1EB4
  c->r[3]=c->r[28]|c->r[28]; // 803B1EB8
  c->f[3]=c->ps1[3]=S(c->f[0]+c->f[16]); // 803B1EBC
  c->r[4]=c->r[1]+0x00000024u; // 803B1EC0
  c->r[6]=c->r[28]+c->r[0]; // 803B1EC4
  c->r[5]=c->r[1]+0x00000020u; // 803B1EC8
  {uint32_t ea=c->r[6]+0x00000034u; c->f[1]=c->ps1[1]=RF32(ea);} // 803B1ECC
  {uint32_t ea=c->r[6]+0x00000038u; c->f[0]=c->ps1[0]=RF32(ea);} // 803B1ED0
  c->f[1]=c->ps1[1]=S(c->f[3]+c->f[1]); // 803B1ED4
  c->f[2]=c->ps1[2]=S(c->f[2]+c->f[0]); // 803B1ED8
  c->lr=0x803B1EE0u; f_803B19A8(c); // 803B1EDC
  goto L_803B1F10; // 803B1EE0
L_803B1EE4:;
  c->r[0]=(uint32_t)((int32_t)c->r[29]*(int32_t)28); // 803B1EE4
  {uint32_t ea=c->r[28]+0x000000B8u; c->f[0]=c->ps1[0]=RF32(ea);} // 803B1EE8
  c->f[1]=c->ps1[1]=S(c->f[0]+c->f[16]); // 803B1EEC
  c->r[3]=c->r[28]+c->r[0]; // 803B1EF0
  {uint32_t ea=c->r[3]+0x00000034u; c->f[0]=c->ps1[0]=RF32(ea);} // 803B1EF4
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 803B1EF8
  {uint32_t ea=c->r[1]+0x00000024u; WF32(ea,c->f[0]);} // 803B1EFC
  {uint32_t ea=c->r[28]+0x000000BCu; c->f[1]=c->ps1[1]=RF32(ea);} // 803B1F00
  {uint32_t ea=c->r[3]+0x00000038u; c->f[0]=c->ps1[0]=RF32(ea);} // 803B1F04
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 803B1F08
  {uint32_t ea=c->r[1]+0x00000020u; WF32(ea,c->f[0]);} // 803B1F0C
L_803B1F10:;
  {uint32_t ea=c->r[1]+0x00000024u; c->f[1]=c->ps1[1]=RF32(ea);} // 803B1F10
  c->r[3]=c->r[1]+0x00000028u; // 803B1F14
  c->lr=0x803B1F1Cu; f_803B2EFC(c); // 803B1F18
  {uint32_t ea=c->r[1]+0x00000024u; c->f[0]=c->ps1[0]=RF32(ea);} // 803B1F1C
  c->f[27]=c->f[1]; // 803B1F20
  c->r[3]=c->r[1]+0x00000028u; // 803B1F24
  c->f[1]=-c->f[0]; // 803B1F28
  c->lr=0x803B1F30u; f_803B2EFC(c); // 803B1F2C
  c->f[26]=c->f[1]; // 803B1F30
  {uint32_t ea=c->r[1]+0x00000020u; c->f[1]=c->ps1[1]=RF32(ea);} // 803B1F34
  c->r[3]=c->r[1]+0x00000028u; // 803B1F38
  c->lr=0x803B1F40u; f_803B2FDC(c); // 803B1F3C
  {uint32_t ea=c->r[2]+0xFFFFEF90u; c->f[2]=c->ps1[2]=RF32(ea);} // 803B1F40
  c->f[24]=c->f[1]; // 803B1F44
  {uint32_t ea=c->r[1]+0x00000020u; c->f[0]=c->ps1[0]=RF32(ea);} // 803B1F48
  c->r[3]=c->r[1]+0x00000028u; // 803B1F4C
  c->f[1]=c->ps1[1]=S(c->f[2]-c->f[0]); // 803B1F50
  c->lr=0x803B1F58u; f_803B2FDC(c); // 803B1F54
  c->f[16]=c->f[1]; // 803B1F58
L_803B1F5C:;
  {uint32_t ea=c->r[2]+0xFFFFEF9Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 803B1F5C
  c->lr=0x803B1F64u; f_803B2EA4(c); // 803B1F60
  c->f[2]=c->ps1[2]=S(c->f[27]+c->f[26]); // 803B1F64
  {uint32_t ea=c->r[2]+0xFFFFEF80u; c->f[0]=c->ps1[0]=RF32(ea);} // 803B1F68
  c->f[17]=c->f[1]; // 803B1F6C
  c->f[25]=c->ps1[25]=S(c->f[0]*c->f[2]); // 803B1F70
  c->lr=0x803B1F78u; f_80396E38(c); // 803B1F74
  c->lr=0x803B1F7Cu; f_803975C4(c); // 803B1F78
  cmps(c,0,(int32_t)c->r[3],2); // 803B1F7C
  if (crb(c,2)) { goto L_803B2078; } // 803B1F80
  if (!crb(c,0)) { goto L_803B1F98; } // 803B1F84
  cmps(c,0,(int32_t)c->r[3],0); // 803B1F88
  if (crb(c,2)) { goto L_803B1FA4; } // 803B1F8C
  if (!crb(c,0)) { goto L_803B2020; } // 803B1F90
  goto L_803B20D0; // 803B1F94
L_803B1F98:;
  cmps(c,0,(int32_t)c->r[3],4); // 803B1F98
  if (!crb(c,0)) { goto L_803B20D0; } // 803B1F9C
  goto L_803B1FE4; // 803B1FA0
L_803B1FA4:;
  c->f[1]=c->ps1[1]=S(c->f[28]*c->f[27]); // 803B1FA4
  {uint32_t ea=c->r[2]+0xFFFFEF74u; c->f[2]=c->ps1[2]=RF32(ea);} // 803B1FA8
  c->f[0]=c->ps1[0]=S(c->f[28]*c->f[26]); // 803B1FAC
  c->f[23]=c->ps1[23]=S(c->f[31]*c->f[27]); // 803B1FB0
  {uint32_t ea=c->r[1]+0x0000001Cu; WF32(ea,c->f[2]);} // 803B1FB4
  c->f[22]=c->ps1[22]=S(c->f[31]*c->f[26]); // 803B1FB8
  c->f[21]=c->ps1[21]=S(c->f[30]*c->f[27]); // 803B1FBC
  {uint32_t ea=c->r[1]+0x00000018u; WF32(ea,c->f[2]);} // 803B1FC0
  c->f[20]=c->ps1[20]=S(c->f[30]*c->f[26]); // 803B1FC4
  c->f[19]=c->ps1[19]=S(c->f[29]*c->f[27]); // 803B1FC8
  {uint32_t ea=c->r[1]+0x00000014u; WF32(ea,c->f[2]);} // 803B1FCC
  c->f[18]=c->ps1[18]=S(c->f[29]*c->f[26]); // 803B1FD0
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[1]);} // 803B1FD4
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[0]);} // 803B1FD8
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[2]);} // 803B1FDC
  goto L_803B20D0; // 803B1FE0
L_803B1FE4:;
  c->f[23]=c->ps1[23]=S(c->f[31]*c->f[25]); // 803B1FE4
  {uint32_t ea=c->r[2]+0xFFFFEF74u; c->f[1]=c->ps1[1]=RF32(ea);} // 803B1FE8
  c->f[0]=c->ps1[0]=S(c->f[28]*c->f[25]); // 803B1FEC
  c->f[21]=c->ps1[21]=S(c->f[30]*c->f[25]); // 803B1FF0
  {uint32_t ea=c->r[1]+0x0000001Cu; WF32(ea,c->f[1]);} // 803B1FF4
  c->f[19]=c->ps1[19]=S(c->f[29]*c->f[25]); // 803B1FF8
  c->f[22]=c->f[23]; // 803B1FFC
  {uint32_t ea=c->r[1]+0x00000018u; WF32(ea,c->f[1]);} // 803B2000
  c->f[20]=c->f[21]; // 803B2004
  c->f[18]=c->f[19]; // 803B2008
  {uint32_t ea=c->r[1]+0x00000014u; WF32(ea,c->f[1]);} // 803B200C
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[0]);} // 803B2010
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[0]);} // 803B2014
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[1]);} // 803B2018
  goto L_803B20D0; // 803B201C
L_803B2020:;
  c->f[5]=c->ps1[5]=S(c->f[27]*c->f[24]); // 803B2020
  c->f[6]=c->ps1[6]=S(c->f[26]*c->f[24]); // 803B2024
  c->f[7]=c->ps1[7]=S(c->f[17]*c->f[16]); // 803B2028
  c->f[0]=c->ps1[0]=S(c->f[28]*c->f[5]); // 803B202C
  c->f[1]=c->ps1[1]=S(c->f[28]*c->f[6]); // 803B2030
  c->f[4]=c->ps1[4]=S(c->f[31]*c->f[7]); // 803B2034
  c->f[3]=c->ps1[3]=S(c->f[30]*c->f[7]); // 803B2038
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[0]);} // 803B203C
  c->f[2]=c->ps1[2]=S(c->f[29]*c->f[7]); // 803B2040
  c->f[0]=c->ps1[0]=S(c->f[28]*c->f[7]); // 803B2044
  {uint32_t ea=c->r[1]+0x0000001Cu; WF32(ea,c->f[4]);} // 803B2048
  c->f[23]=c->ps1[23]=S(c->f[31]*c->f[5]); // 803B204C
  c->f[22]=c->ps1[22]=S(c->f[31]*c->f[6]); // 803B2050
  {uint32_t ea=c->r[1]+0x00000018u; WF32(ea,c->f[3]);} // 803B2054
  c->f[21]=c->ps1[21]=S(c->f[30]*c->f[5]); // 803B2058
  c->f[20]=c->ps1[20]=S(c->f[30]*c->f[6]); // 803B205C
  {uint32_t ea=c->r[1]+0x00000014u; WF32(ea,c->f[2]);} // 803B2060
  c->f[19]=c->ps1[19]=S(c->f[29]*c->f[5]); // 803B2064
  c->f[18]=c->ps1[18]=S(c->f[29]*c->f[6]); // 803B2068
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[1]);} // 803B206C
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[0]);} // 803B2070
  goto L_803B20D0; // 803B2074
L_803B2078:;
  c->f[1]=c->ps1[1]=S(c->f[27]*c->f[16]); // 803B2078
  c->f[5]=c->ps1[5]=S(c->f[27]*c->f[24]); // 803B207C
  c->f[6]=c->ps1[6]=S(c->f[26]*c->f[24]); // 803B2080
  c->f[7]=c->ps1[7]=S(c->f[26]*c->f[16]); // 803B2084
  c->f[0]=c->ps1[0]=S(c->f[31]*c->f[1]); // 803B2088
  c->f[3]=c->ps1[3]=S(c->f[30]*c->f[1]); // 803B208C
  c->f[4]=c->ps1[4]=S(c->f[31]*c->f[7]); // 803B2090
  c->f[2]=c->ps1[2]=S(c->f[30]*c->f[7]); // 803B2094
  {uint32_t ea=c->r[1]+0x0000001Cu; WF32(ea,c->f[0]);} // 803B2098
  c->f[1]=c->ps1[1]=S(c->f[29]*c->f[1]); // 803B209C
  c->f[0]=c->ps1[0]=S(c->f[29]*c->f[7]); // 803B20A0
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[4]);} // 803B20A4
  c->f[23]=c->ps1[23]=S(c->f[31]*c->f[5]); // 803B20A8
  c->f[22]=c->ps1[22]=S(c->f[31]*c->f[6]); // 803B20AC
  {uint32_t ea=c->r[1]+0x00000018u; WF32(ea,c->f[3]);} // 803B20B0
  c->f[21]=c->ps1[21]=S(c->f[30]*c->f[5]); // 803B20B4
  c->f[20]=c->ps1[20]=S(c->f[30]*c->f[6]); // 803B20B8
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[2]);} // 803B20BC
  c->f[19]=c->ps1[19]=S(c->f[29]*c->f[5]); // 803B20C0
  c->f[18]=c->ps1[18]=S(c->f[29]*c->f[6]); // 803B20C4
  {uint32_t ea=c->r[1]+0x00000014u; WF32(ea,c->f[1]);} // 803B20C8
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[0]);} // 803B20CC
L_803B20D0:;
  {uint32_t ea=c->r[1]+0x00000090u; c->f[1]=c->ps1[1]=RF32(ea);} // 803B20D0
  {uint32_t ea=c->r[1]+0x00000080u; c->f[2]=c->ps1[2]=RF32(ea);} // 803B20D4
  c->f[9]=c->ps1[9]=S(c->f[25]*c->f[1]); // 803B20D8
  {uint32_t ea=c->r[1]+0x00000094u; c->f[0]=c->ps1[0]=RF32(ea);} // 803B20DC
  {uint32_t ea=c->r[1]+0x00000084u; c->f[1]=c->ps1[1]=RF32(ea);} // 803B20E0
  c->f[8]=c->ps1[8]=S(c->f[25]*c->f[2]); // 803B20E4
  c->f[7]=c->ps1[7]=S(c->f[25]*c->f[0]); // 803B20E8
  {uint32_t ea=c->r[1]+0x00000098u; c->f[3]=c->ps1[3]=RF32(ea);} // 803B20EC
  c->f[6]=c->ps1[6]=S(c->f[25]*c->f[1]); // 803B20F0
  {uint32_t ea=c->r[1]+0x00000088u; c->f[0]=c->ps1[0]=RF32(ea);} // 803B20F4
  c->f[5]=c->ps1[5]=S(c->f[25]*c->f[3]); // 803B20F8
  {uint32_t ea=c->r[1]+0x0000009Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 803B20FC
  c->f[4]=c->ps1[4]=S(c->f[25]*c->f[0]); // 803B2100
  {uint32_t ea=c->r[1]+0x0000008Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 803B2104
  c->f[3]=c->ps1[3]=S(c->f[25]*c->f[2]); // 803B2108
  {uint32_t ea=c->r[2]+0xFFFFEFA0u; c->f[0]=c->ps1[0]=RF32(ea);} // 803B210C
  c->f[2]=c->ps1[2]=S(c->f[25]*c->f[1]); // 803B2110
  {uint32_t ea=c->r[1]+0x00000070u; WF32(ea,c->f[9]);} // 803B2114
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[23]); // 803B2118
  {uint32_t ea=c->r[1]+0x00000060u; WF32(ea,c->f[8]);} // 803B211C
  {uint32_t ea=c->r[1]+0x00000074u; WF32(ea,c->f[7]);} // 803B2120
  {uint32_t ea=c->r[1]+0x00000034u; WF32(ea,c->f[6]);} // 803B2124
  {uint32_t ea=c->r[1]+0x00000078u; WF32(ea,c->f[5]);} // 803B2128
  {uint32_t ea=c->r[1]+0x00000048u; WF32(ea,c->f[4]);} // 803B212C
  {uint32_t ea=c->r[1]+0x0000007Cu; WF32(ea,c->f[3]);} // 803B2130
  {uint32_t ea=c->r[1]+0x0000005Cu; WF32(ea,c->f[2]);} // 803B2134
  c->lr=0x803B213Cu; f_80289CCC(c); // 803B2138
  cmpu(c,0,c->r[3],0x0000FFFFu); // 803B213C
  if (!crb(c,0)) { goto L_803B2154; } // 803B2140
  {uint32_t ea=c->r[2]+0xFFFFEFA0u; c->f[0]=c->ps1[0]=RF32(ea);} // 803B2144
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[23]); // 803B2148
  c->lr=0x803B2150u; f_80289CCC(c); // 803B214C
  goto L_803B215C; // 803B2150
L_803B2154:;
  c->r[3]=0u+0x00010000u; // 803B2154
  c->r[3]=c->r[3]+0xFFFFFFFFu; // 803B2158
L_803B215C:;
  {uint32_t ea=c->r[2]+0xFFFFEFA0u; c->f[0]=c->ps1[0]=RF32(ea);} // 803B215C
  W16(c->r[30]+0x00000000u,c->r[3]); // 803B2160
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[22]); // 803B2164
  c->lr=0x803B216Cu; f_80289CCC(c); // 803B2168
  cmpu(c,0,c->r[3],0x0000FFFFu); // 803B216C
  if (!crb(c,0)) { goto L_803B2184; } // 803B2170
  {uint32_t ea=c->r[2]+0xFFFFEFA0u; c->f[0]=c->ps1[0]=RF32(ea);} // 803B2174
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[22]); // 803B2178
  c->lr=0x803B2180u; f_80289CCC(c); // 803B217C
  goto L_803B218C; // 803B2180
L_803B2184:;
  c->r[3]=0u+0x00010000u; // 803B2184
  c->r[3]=c->r[3]+0xFFFFFFFFu; // 803B2188
L_803B218C:;
  {uint32_t ea=c->r[1]+0x0000001Cu; c->f[17]=c->ps1[17]=RF32(ea);} // 803B218C
  {uint32_t ea=c->r[2]+0xFFFFEFA0u; c->f[0]=c->ps1[0]=RF32(ea);} // 803B2190
  W16(c->r[30]+0x00000002u,c->r[3]); // 803B2194
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[17]); // 803B2198
  c->lr=0x803B21A0u; f_80289CCC(c); // 803B219C
  cmpu(c,0,c->r[3],0x0000FFFFu); // 803B21A0
  if (!crb(c,0)) { goto L_803B21B8; } // 803B21A4
  {uint32_t ea=c->r[2]+0xFFFFEFA0u; c->f[0]=c->ps1[0]=RF32(ea);} // 803B21A8
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[17]); // 803B21AC
  c->lr=0x803B21B4u; f_80289CCC(c); // 803B21B0
  goto L_803B21C0; // 803B21B4
L_803B21B8:;
  c->r[3]=0u+0x00010000u; // 803B21B8
  c->r[3]=c->r[3]+0xFFFFFFFFu; // 803B21BC
L_803B21C0:;
  {uint32_t ea=c->r[2]+0xFFFFEFA0u; c->f[0]=c->ps1[0]=RF32(ea);} // 803B21C0
  W16(c->r[30]+0x00000004u,c->r[3]); // 803B21C4
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[21]); // 803B21C8
  c->lr=0x803B21D0u; f_80289CCC(c); // 803B21CC
  cmpu(c,0,c->r[3],0x0000FFFFu); // 803B21D0
  if (!crb(c,0)) { goto L_803B21E8; } // 803B21D4
  {uint32_t ea=c->r[2]+0xFFFFEFA0u; c->f[0]=c->ps1[0]=RF32(ea);} // 803B21D8
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[21]); // 803B21DC
  c->lr=0x803B21E4u; f_80289CCC(c); // 803B21E0
  goto L_803B21F0; // 803B21E4
L_803B21E8:;
  c->r[3]=0u+0x00010000u; // 803B21E8
  c->r[3]=c->r[3]+0xFFFFFFFFu; // 803B21EC
L_803B21F0:;
  {uint32_t ea=c->r[2]+0xFFFFEFA0u; c->f[0]=c->ps1[0]=RF32(ea);} // 803B21F0
  W16(c->r[30]+0x00000006u,c->r[3]); // 803B21F4
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[20]); // 803B21F8
  c->lr=0x803B2200u; f_80289CCC(c); // 803B21FC
  cmpu(c,0,c->r[3],0x0000FFFFu); // 803B2200
  if (!crb(c,0)) { goto L_803B2218; } // 803B2204
  {uint32_t ea=c->r[2]+0xFFFFEFA0u; c->f[0]=c->ps1[0]=RF32(ea);} // 803B2208
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[20]); // 803B220C
  c->lr=0x803B2214u; f_80289CCC(c); // 803B2210
  goto L_803B2220; // 803B2214
L_803B2218:;
  c->r[3]=0u+0x00010000u; // 803B2218
  c->r[3]=c->r[3]+0xFFFFFFFFu; // 803B221C
L_803B2220:;
  {uint32_t ea=c->r[1]+0x00000018u; c->f[17]=c->ps1[17]=RF32(ea);} // 803B2220
  {uint32_t ea=c->r[2]+0xFFFFEFA0u; c->f[0]=c->ps1[0]=RF32(ea);} // 803B2224
  W16(c->r[30]+0x00000008u,c->r[3]); // 803B2228
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[17]); // 803B222C
  c->lr=0x803B2234u; f_80289CCC(c); // 803B2230
  cmpu(c,0,c->r[3],0x0000FFFFu); // 803B2234
  if (!crb(c,0)) { goto L_803B224C; } // 803B2238
  {uint32_t ea=c->r[2]+0xFFFFEFA0u; c->f[0]=c->ps1[0]=RF32(ea);} // 803B223C
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[17]); // 803B2240
  c->lr=0x803B2248u; f_80289CCC(c); // 803B2244
  goto L_803B2254; // 803B2248
L_803B224C:;
  c->r[3]=0u+0x00010000u; // 803B224C
  c->r[3]=c->r[3]+0xFFFFFFFFu; // 803B2250
L_803B2254:;
  {uint32_t ea=c->r[2]+0xFFFFEFA0u; c->f[0]=c->ps1[0]=RF32(ea);} // 803B2254
  W16(c->r[30]+0x0000000Au,c->r[3]); // 803B2258
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[19]); // 803B225C
  c->lr=0x803B2264u; f_80289CCC(c); // 803B2260
  cmpu(c,0,c->r[3],0x0000FFFFu); // 803B2264
  if (!crb(c,0)) { goto L_803B227C; } // 803B2268
  {uint32_t ea=c->r[2]+0xFFFFEFA0u; c->f[0]=c->ps1[0]=RF32(ea);} // 803B226C
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[19]); // 803B2270
  c->lr=0x803B2278u; f_80289CCC(c); // 803B2274
  goto L_803B2284; // 803B2278
L_803B227C:;
  c->r[3]=0u+0x00010000u; // 803B227C
  c->r[3]=c->r[3]+0xFFFFFFFFu; // 803B2280
L_803B2284:;
  {uint32_t ea=c->r[2]+0xFFFFEFA0u; c->f[0]=c->ps1[0]=RF32(ea);} // 803B2284
  W16(c->r[30]+0x0000000Cu,c->r[3]); // 803B2288
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[18]); // 803B228C
  c->lr=0x803B2294u; f_80289CCC(c); // 803B2290
  cmpu(c,0,c->r[3],0x0000FFFFu); // 803B2294
  if (!crb(c,0)) { goto L_803B22AC; } // 803B2298
  {uint32_t ea=c->r[2]+0xFFFFEFA0u; c->f[0]=c->ps1[0]=RF32(ea);} // 803B229C
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[18]); // 803B22A0
  c->lr=0x803B22A8u; f_80289CCC(c); // 803B22A4
  goto L_803B22B4; // 803B22A8
L_803B22AC:;
  c->r[3]=0u+0x00010000u; // 803B22AC
  c->r[3]=c->r[3]+0xFFFFFFFFu; // 803B22B0
L_803B22B4:;
  {uint32_t ea=c->r[1]+0x00000014u; c->f[17]=c->ps1[17]=RF32(ea);} // 803B22B4
  {uint32_t ea=c->r[2]+0xFFFFEFA0u; c->f[0]=c->ps1[0]=RF32(ea);} // 803B22B8
  W16(c->r[30]+0x0000000Eu,c->r[3]); // 803B22BC
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[17]); // 803B22C0
  c->lr=0x803B22C8u; f_80289CCC(c); // 803B22C4
  cmpu(c,0,c->r[3],0x0000FFFFu); // 803B22C8
  if (!crb(c,0)) { goto L_803B22E0; } // 803B22CC
  {uint32_t ea=c->r[2]+0xFFFFEFA0u; c->f[0]=c->ps1[0]=RF32(ea);} // 803B22D0
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[17]); // 803B22D4
  c->lr=0x803B22DCu; f_80289CCC(c); // 803B22D8
  goto L_803B22E8; // 803B22DC
L_803B22E0:;
  c->r[3]=0u+0x00010000u; // 803B22E0
  c->r[3]=c->r[3]+0xFFFFFFFFu; // 803B22E4
L_803B22E8:;
  {uint32_t ea=c->r[1]+0x00000010u; c->f[17]=c->ps1[17]=RF32(ea);} // 803B22E8
  {uint32_t ea=c->r[2]+0xFFFFEFA0u; c->f[0]=c->ps1[0]=RF32(ea);} // 803B22EC
  W16(c->r[30]+0x00000010u,c->r[3]); // 803B22F0
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[17]); // 803B22F4
  c->lr=0x803B22FCu; f_80289CCC(c); // 803B22F8
  cmpu(c,0,c->r[3],0x0000FFFFu); // 803B22FC
  if (!crb(c,0)) { goto L_803B2314; } // 803B2300
  {uint32_t ea=c->r[2]+0xFFFFEFA0u; c->f[0]=c->ps1[0]=RF32(ea);} // 803B2304
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[17]); // 803B2308
  c->lr=0x803B2310u; f_80289CCC(c); // 803B230C
  goto L_803B231C; // 803B2310
L_803B2314:;
  c->r[3]=0u+0x00010000u; // 803B2314
  c->r[3]=c->r[3]+0xFFFFFFFFu; // 803B2318
L_803B231C:;
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[17]=c->ps1[17]=RF32(ea);} // 803B231C
  {uint32_t ea=c->r[2]+0xFFFFEFA0u; c->f[0]=c->ps1[0]=RF32(ea);} // 803B2320
  W16(c->r[30]+0x00000012u,c->r[3]); // 803B2324
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[17]); // 803B2328
  c->lr=0x803B2330u; f_80289CCC(c); // 803B232C
  cmpu(c,0,c->r[3],0x0000FFFFu); // 803B2330
  if (!crb(c,0)) { goto L_803B2348; } // 803B2334
  {uint32_t ea=c->r[2]+0xFFFFEFA0u; c->f[0]=c->ps1[0]=RF32(ea);} // 803B2338
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[17]); // 803B233C
  c->lr=0x803B2344u; f_80289CCC(c); // 803B2340
  goto L_803B2350; // 803B2344
L_803B2348:;
  c->r[3]=0u+0x00010000u; // 803B2348
  c->r[3]=c->r[3]+0xFFFFFFFFu; // 803B234C
L_803B2350:;
  {uint32_t ea=c->r[1]+0x00000008u; c->f[17]=c->ps1[17]=RF32(ea);} // 803B2350
  {uint32_t ea=c->r[2]+0xFFFFEFA0u; c->f[0]=c->ps1[0]=RF32(ea);} // 803B2354
  W16(c->r[30]+0x00000014u,c->r[3]); // 803B2358
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[17]); // 803B235C
  c->lr=0x803B2364u; f_80289CCC(c); // 803B2360
  cmpu(c,0,c->r[3],0x0000FFFFu); // 803B2364
  if (!crb(c,0)) { goto L_803B237C; } // 803B2368
  {uint32_t ea=c->r[2]+0xFFFFEFA0u; c->f[0]=c->ps1[0]=RF32(ea);} // 803B236C
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[17]); // 803B2370
  c->lr=0x803B2378u; f_80289CCC(c); // 803B2374
  goto L_803B2384; // 803B2378
L_803B237C:;
  c->r[3]=0u+0x00010000u; // 803B237C
  c->r[3]=c->r[3]+0xFFFFFFFFu; // 803B2380
L_803B2384:;
  {uint32_t ea=c->r[2]+0xFFFFEFA0u; c->f[1]=c->ps1[1]=RF32(ea);} // 803B2384
  {uint32_t ea=c->r[1]+0x00000070u; c->f[0]=c->ps1[0]=RF32(ea);} // 803B2388
  W16(c->r[30]+0x00000016u,c->r[3]); // 803B238C
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[0]); // 803B2390
  c->lr=0x803B2398u; f_80289CCC(c); // 803B2394
  cmpu(c,0,c->r[3],0x0000FFFFu); // 803B2398
  if (!crb(c,0)) { goto L_803B23B4; } // 803B239C
  {uint32_t ea=c->r[2]+0xFFFFEFA0u; c->f[1]=c->ps1[1]=RF32(ea);} // 803B23A0
  {uint32_t ea=c->r[1]+0x00000070u; c->f[0]=c->ps1[0]=RF32(ea);} // 803B23A4
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[0]); // 803B23A8
  c->lr=0x803B23B0u; f_80289CCC(c); // 803B23AC
  goto L_803B23BC; // 803B23B0
L_803B23B4:;
  c->r[3]=0u+0x00010000u; // 803B23B4
  c->r[3]=c->r[3]+0xFFFFFFFFu; // 803B23B8
L_803B23BC:;
  {uint32_t ea=c->r[1]+0x00000074u; c->f[17]=c->ps1[17]=RF32(ea);} // 803B23BC
  c->r[0]=0u+0x00000000u; // 803B23C0
  {uint32_t ea=c->r[2]+0xFFFFEFA0u; c->f[0]=c->ps1[0]=RF32(ea);} // 803B23C4
  W16(c->r[31]+0x00000000u,c->r[3]); // 803B23C8
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[17]); // 803B23CC
  W16(c->r[31]+0x00000002u,c->r[0]); // 803B23D0
  c->lr=0x803B23D8u; f_80289CCC(c); // 803B23D4
  cmpu(c,0,c->r[3],0x0000FFFFu); // 803B23D8
  if (!crb(c,0)) { goto L_803B23F0; } // 803B23DC
  {uint32_t ea=c->r[2]+0xFFFFEFA0u; c->f[0]=c->ps1[0]=RF32(ea);} // 803B23E0
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[17]); // 803B23E4
  c->lr=0x803B23ECu; f_80289CCC(c); // 803B23E8
  goto L_803B23F8; // 803B23EC
L_803B23F0:;
  c->r[3]=0u+0x00010000u; // 803B23F0
  c->r[3]=c->r[3]+0xFFFFFFFFu; // 803B23F4
L_803B23F8:;
  {uint32_t ea=c->r[1]+0x00000078u; c->f[17]=c->ps1[17]=RF32(ea);} // 803B23F8
  c->r[0]=0u+0x00000000u; // 803B23FC
  {uint32_t ea=c->r[2]+0xFFFFEFA0u; c->f[0]=c->ps1[0]=RF32(ea);} // 803B2400
  W16(c->r[31]+0x00000004u,c->r[3]); // 803B2404
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[17]); // 803B2408
  W16(c->r[31]+0x00000006u,c->r[0]); // 803B240C
  c->lr=0x803B2414u; f_80289CCC(c); // 803B2410
  cmpu(c,0,c->r[3],0x0000FFFFu); // 803B2414
  if (!crb(c,0)) { goto L_803B242C; } // 803B2418
  {uint32_t ea=c->r[2]+0xFFFFEFA0u; c->f[0]=c->ps1[0]=RF32(ea);} // 803B241C
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[17]); // 803B2420
  c->lr=0x803B2428u; f_80289CCC(c); // 803B2424
  goto L_803B2434; // 803B2428
L_803B242C:;
  c->r[3]=0u+0x00010000u; // 803B242C
  c->r[3]=c->r[3]+0xFFFFFFFFu; // 803B2430
L_803B2434:;
  {uint32_t ea=c->r[1]+0x0000007Cu; c->f[17]=c->ps1[17]=RF32(ea);} // 803B2434
  c->r[0]=0u+0x00000000u; // 803B2438
  {uint32_t ea=c->r[2]+0xFFFFEFA0u; c->f[0]=c->ps1[0]=RF32(ea);} // 803B243C
  W16(c->r[31]+0x00000008u,c->r[3]); // 803B2440
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[17]); // 803B2444
  W16(c->r[31]+0x0000000Au,c->r[0]); // 803B2448
  c->lr=0x803B2450u; f_80289CCC(c); // 803B244C
  cmpu(c,0,c->r[3],0x0000FFFFu); // 803B2450
  if (!crb(c,0)) { goto L_803B2468; } // 803B2454
  {uint32_t ea=c->r[2]+0xFFFFEFA0u; c->f[0]=c->ps1[0]=RF32(ea);} // 803B2458
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[17]); // 803B245C
  c->lr=0x803B2464u; f_80289CCC(c); // 803B2460
  goto L_803B2470; // 803B2464
L_803B2468:;
  c->r[3]=0u+0x00010000u; // 803B2468
  c->r[3]=c->r[3]+0xFFFFFFFFu; // 803B246C
L_803B2470:;
  c->r[0]=0u+0x00000000u; // 803B2470
  W16(c->r[31]+0x0000000Cu,c->r[3]); // 803B2474
  W16(c->r[31]+0x0000000Eu,c->r[0]); // 803B2478
  {uint32_t ea=c->r[1]+0x000001A8u; psq_load(c,31,ea,0,0);} // 803B247C
  {uint32_t ea=c->r[1]+0x000001A0u; c->f[31]=RF64(ea);} // 803B2480
  {uint32_t ea=c->r[1]+0x00000198u; psq_load(c,30,ea,0,0);} // 803B2484
  {uint32_t ea=c->r[1]+0x00000190u; c->f[30]=RF64(ea);} // 803B2488
  {uint32_t ea=c->r[1]+0x00000188u; psq_load(c,29,ea,0,0);} // 803B248C
  {uint32_t ea=c->r[1]+0x00000180u; c->f[29]=RF64(ea);} // 803B2490
  {uint32_t ea=c->r[1]+0x00000178u; psq_load(c,28,ea,0,0);} // 803B2494
  {uint32_t ea=c->r[1]+0x00000170u; c->f[28]=RF64(ea);} // 803B2498
  {uint32_t ea=c->r[1]+0x00000168u; psq_load(c,27,ea,0,0);} // 803B249C
  {uint32_t ea=c->r[1]+0x00000160u; c->f[27]=RF64(ea);} // 803B24A0
  {uint32_t ea=c->r[1]+0x00000158u; psq_load(c,26,ea,0,0);} // 803B24A4
  {uint32_t ea=c->r[1]+0x00000150u; c->f[26]=RF64(ea);} // 803B24A8
  {uint32_t ea=c->r[1]+0x00000148u; psq_load(c,25,ea,0,0);} // 803B24AC
  {uint32_t ea=c->r[1]+0x00000140u; c->f[25]=RF64(ea);} // 803B24B0
  {uint32_t ea=c->r[1]+0x00000138u; psq_load(c,24,ea,0,0);} // 803B24B4
  {uint32_t ea=c->r[1]+0x00000130u; c->f[24]=RF64(ea);} // 803B24B8
  {uint32_t ea=c->r[1]+0x00000128u; psq_load(c,23,ea,0,0);} // 803B24BC
  {uint32_t ea=c->r[1]+0x00000120u; c->f[23]=RF64(ea);} // 803B24C0
  {uint32_t ea=c->r[1]+0x00000118u; psq_load(c,22,ea,0,0);} // 803B24C4
  {uint32_t ea=c->r[1]+0x00000110u; c->f[22]=RF64(ea);} // 803B24C8
  {uint32_t ea=c->r[1]+0x00000108u; psq_load(c,21,ea,0,0);} // 803B24CC
  {uint32_t ea=c->r[1]+0x00000100u; c->f[21]=RF64(ea);} // 803B24D0
  {uint32_t ea=c->r[1]+0x000000F8u; psq_load(c,20,ea,0,0);} // 803B24D4
  {uint32_t ea=c->r[1]+0x000000F0u; c->f[20]=RF64(ea);} // 803B24D8
  {uint32_t ea=c->r[1]+0x000000E8u; psq_load(c,19,ea,0,0);} // 803B24DC
  {uint32_t ea=c->r[1]+0x000000E0u; c->f[19]=RF64(ea);} // 803B24E0
  {uint32_t ea=c->r[1]+0x000000D8u; psq_load(c,18,ea,0,0);} // 803B24E4
  {uint32_t ea=c->r[1]+0x000000D0u; c->f[18]=RF64(ea);} // 803B24E8
  {uint32_t ea=c->r[1]+0x000000C8u; psq_load(c,17,ea,0,0);} // 803B24EC
  {uint32_t ea=c->r[1]+0x000000C0u; c->f[17]=RF64(ea);} // 803B24F0
  {uint32_t ea=c->r[1]+0x000000B8u; psq_load(c,16,ea,0,0);} // 803B24F4
  {uint32_t ea=c->r[1]+0x000000B0u; c->f[16]=RF64(ea);} // 803B24F8
  c->r[31]=R32(c->r[1]+0x000000ACu); // 803B24FC
  c->r[30]=R32(c->r[1]+0x000000A8u); // 803B2500
  c->r[29]=R32(c->r[1]+0x000000A4u); // 803B2504
  c->r[28]=R32(c->r[1]+0x000000A0u); // 803B2508
  c->r[0]=R32(c->r[1]+0x000001B4u); // 803B250C
  c->lr=c->r[0]; // 803B2510
  c->r[1]=c->r[1]+0x000001B0u; // 803B2514
  return; // 803B2518
}

// InvalidateWaveData__Q44nw4r3snd6detail5VoiceFPCvPCv
void f_803B251C(Ctx* __restrict c) {
  trace_call(0x803B251Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803B251C
  c->r[0]=c->lr; // 803B2520
  W32(c->r[1]+0x00000024u,c->r[0]); // 803B2524
  c->r[11]=c->r[1]+0x00000020u; // 803B2528
  c->lr=0x803B2530u; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 803B252C
  c->r[31]=c->r[3]|c->r[3]; // 803B2530
  c->r[26]=c->r[4]|c->r[4]; // 803B2534
  c->r[30]=c->r[5]|c->r[5]; // 803B2538
  c->r[28]=0u+0x00000000u; // 803B253C
  c->r[27]=c->r[31]|c->r[31]; // 803B2540
  c->r[29]=0u+0x00000000u; // 803B2544
  goto L_803B257C; // 803B2548
L_803B254C:;
  c->r[3]=R32(c->r[27]+0x0000000Cu); // 803B254C
  cmps(c,0,(int32_t)c->r[3],0); // 803B2550
  if (crb(c,2)) { goto L_803B2574; } // 803B2554
  c->r[4]=c->r[26]|c->r[26]; // 803B2558
  c->r[5]=c->r[30]|c->r[30]; // 803B255C
  c->lr=0x803B2564u; f_803987B4(c); // 803B2560
  cmps(c,0,(int32_t)c->r[3],0); // 803B2564
  if (crb(c,2)) { goto L_803B2574; } // 803B2568
  c->r[28]=0u+0x00000001u; // 803B256C
  goto L_803B2588; // 803B2570
L_803B2574:;
  c->r[27]=c->r[27]+0x00000010u; // 803B2574
  c->r[29]=c->r[29]+0x00000001u; // 803B2578
L_803B257C:;
  c->r[0]=R32(c->r[31]+0x0000009Cu); // 803B257C
  cmps(c,0,(int32_t)c->r[29],(int32_t)c->r[0]); // 803B2580
  if (crb(c,0)) { IRQCHK(c); goto L_803B254C; } // 803B2584
L_803B2588:;
  cmps(c,0,(int32_t)c->r[28],0); // 803B2588
  if (crb(c,2)) { goto L_803B2650; } // 803B258C
  c->r[0]=R8(c->r[31]+0x000000AEu); // 803B2590
  cmps(c,0,(int32_t)c->r[0],0); // 803B2594
  if (crb(c,2)) { goto L_803B2620; } // 803B2598
  c->r[28]=c->r[31]|c->r[31]; // 803B259C
  c->r[30]=0u+0x00000000u; // 803B25A0
  goto L_803B260C; // 803B25A4
L_803B25A8:;
  c->r[27]=c->r[28]|c->r[28]; // 803B25A8
  c->r[29]=0u+0x00000000u; // 803B25AC
  goto L_803B25F8; // 803B25B0
L_803B25B4:;
  c->r[3]=R32(c->r[27]+0x0000000Cu); // 803B25B4
  cmps(c,0,(int32_t)c->r[3],0); // 803B25B8
  if (crb(c,2)) { goto L_803B25F0; } // 803B25BC
  c->r[3]=R32(c->r[3]+0x00000000u); // 803B25C0
  c->r[4]=0u+0x00000000u; // 803B25C4
  cmps(c,0,(int32_t)c->r[3],0); // 803B25C8
  if (crb(c,2)) { goto L_803B25E0; } // 803B25CC
  c->r[0]=R16(c->r[3]+0x00000038u); // 803B25D0
  cmpu(c,0,c->r[0],0x00000001u); // 803B25D4
  if (!crb(c,2)) { goto L_803B25E0; } // 803B25D8
  c->r[4]=0u+0x00000001u; // 803B25DC
L_803B25E0:;
  cmps(c,0,(int32_t)c->r[4],0); // 803B25E0
  if (crb(c,2)) { goto L_803B25F0; } // 803B25E4
  c->r[4]=0u+0x00000000u; // 803B25E8
  c->lr=0x803B25F0u; f_80276604(c); // 803B25EC
L_803B25F0:;
  c->r[27]=c->r[27]+0x00000004u; // 803B25F0
  c->r[29]=c->r[29]+0x00000001u; // 803B25F4
L_803B25F8:;
  c->r[0]=R32(c->r[31]+0x000000A0u); // 803B25F8
  cmps(c,0,(int32_t)c->r[29],(int32_t)c->r[0]); // 803B25FC
  if (crb(c,0)) { IRQCHK(c); goto L_803B25B4; } // 803B2600
  c->r[28]=c->r[28]+0x00000010u; // 803B2604
  c->r[30]=c->r[30]+0x00000001u; // 803B2608
L_803B260C:;
  c->r[0]=R32(c->r[31]+0x0000009Cu); // 803B260C
  cmps(c,0,(int32_t)c->r[30],(int32_t)c->r[0]); // 803B2610
  if (crb(c,0)) { IRQCHK(c); goto L_803B25A8; } // 803B2614
  c->r[0]=0u+0x00000000u; // 803B2618
  W8(c->r[31]+0x000000AEu,c->r[0]); // 803B261C
L_803B2620:;
  c->r[12]=R32(c->r[31]+0x000000A4u); // 803B2620
  c->r[0]=0u+0x00000000u; // 803B2624
  W8(c->r[31]+0x000000B0u,c->r[0]); // 803B2628
  cmps(c,0,(int32_t)c->r[12],0); // 803B262C
  W8(c->r[31]+0x000000AFu,c->r[0]); // 803B2630
  W8(c->r[31]+0x000000ADu,c->r[0]); // 803B2634
  if (crb(c,2)) { goto L_803B2650; } // 803B2638
  c->r[3]=c->r[31]|c->r[31]; // 803B263C
  c->r[5]=R32(c->r[31]+0x000000A8u); // 803B2640
  c->r[4]=0u+0x00000001u; // 803B2644
  c->ctr=c->r[12]; // 803B2648
  if (true) { c->lr=0x803B2650u; dispatch(c,c->ctr); } // 803B264C
L_803B2650:;
  c->r[11]=c->r[1]+0x00000020u; // 803B2650
  c->lr=0x803B2658u; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 803B2654
  c->r[0]=R32(c->r[1]+0x00000024u); // 803B2658
  c->lr=c->r[0]; // 803B265C
  c->r[1]=c->r[1]+0x00000020u; // 803B2660
  return; // 803B2664
}

// fn_803B2668
void f_803B2668(Ctx* __restrict c) {
  trace_call(0x803B2668u);
  return; // 803B2668
}

// GetInstance__Q44nw4r3snd6detail12VoiceManagerFv
void f_803B266C(Ctx* __restrict c) {
  trace_call(0x803B266Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803B266C
  c->r[0]=c->lr; // 803B2670
  W32(c->r[1]+0x00000014u,c->r[0]); // 803B2674
  c->r[0]=R8(c->r[13]+0xFFFFA088u); // 803B2678
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 803B267C
  if (!crb(c,2)) { goto L_803B26E0; } // 803B2680
  c->r[6]=0u+0x806C0000u; // 803B2684
  c->r[0]=0u+0x00000000u; // 803B2688
  c->r[3]=c->r[6]+0x0000230Cu; // 803B268C
  c->r[4]=0u+0x803B0000u; // 803B2690
  W32(c->r[3]+0x00000008u,c->r[0]); // 803B2694
  c->r[8]=c->r[3]+0x00000008u; // 803B2698
  c->r[7]=c->r[3]+0x00000014u; // 803B269C
  c->r[5]=0u+0x806C0000u; // 803B26A0
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 803B26A4
  c->r[4]=c->r[4]+0x000026F8u; // 803B26A8
  c->r[5]=c->r[5]+0x00002300u; // 803B26AC
  W32(c->r[3]+0x00000014u,c->r[0]); // 803B26B0
  W32(c->r[3]+0x00000018u,c->r[0]); // 803B26B4
  W8(c->r[6]+0x0000230Cu,c->r[0]); // 803B26B8
  W32(c->r[3]+0x00000004u,c->r[0]); // 803B26BC
  W32(c->r[3]+0x00000008u,c->r[8]); // 803B26C0
  W32(c->r[3]+0x0000000Cu,c->r[8]); // 803B26C4
  W32(c->r[3]+0x00000010u,c->r[0]); // 803B26C8
  W32(c->r[3]+0x00000014u,c->r[7]); // 803B26CC
  W32(c->r[3]+0x00000018u,c->r[7]); // 803B26D0
  c->lr=0x803B26D8u; f_802895A4(c); // 803B26D4
  c->r[0]=0u+0x00000001u; // 803B26D8
  W8(c->r[13]+0xFFFFA088u,c->r[0]); // 803B26DC
L_803B26E0:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 803B26E0
  c->r[3]=0u+0x806C0000u; // 803B26E4
  c->r[3]=c->r[3]+0x0000230Cu; // 803B26E8
  c->lr=c->r[0]; // 803B26EC
  c->r[1]=c->r[1]+0x00000010u; // 803B26F0
  return; // 803B26F4
}

// fn_803B26F8
void f_803B26F8(Ctx* __restrict c) {
  trace_call(0x803B26F8u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803B26F8
  c->r[0]=c->lr; // 803B26FC
  cmps(c,0,(int32_t)c->r[3],0); // 803B2700
  W32(c->r[1]+0x00000014u,c->r[0]); // 803B2704
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 803B2708
  c->r[31]=c->r[4]|c->r[4]; // 803B270C
  W32(c->r[1]+0x00000008u,c->r[30]); // 803B2710
  c->r[30]=c->r[3]|c->r[3]; // 803B2714
  if (crb(c,2)) { goto L_803B274C; } // 803B2718
  c->r[3]=addc(c,c->r[3],0x00000010u,0); cr0(c,c->r[3]); // 803B271C
  if (crb(c,2)) { goto L_803B272C; } // 803B2720
  c->r[4]=0u+0x00000000u; // 803B2724
  c->lr=0x803B272Cu; f_803B4FA4(c); // 803B2728
L_803B272C:;
  c->r[3]=addc(c,c->r[30],0x00000004u,0); cr0(c,c->r[3]); // 803B272C
  if (crb(c,2)) { goto L_803B273C; } // 803B2730
  c->r[4]=0u+0x00000000u; // 803B2734
  c->lr=0x803B273Cu; f_803B4FA4(c); // 803B2738
L_803B273C:;
  cmps(c,0,(int32_t)c->r[31],0); // 803B273C
  if (!crb(c,1)) { goto L_803B274C; } // 803B2740
  c->r[3]=c->r[30]|c->r[30]; // 803B2744
  c->lr=0x803B274Cu; f_802896EC(c); // 803B2748
L_803B274C:;
  c->r[3]=c->r[30]|c->r[30]; // 803B274C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 803B2750
  c->r[30]=R32(c->r[1]+0x00000008u); // 803B2754
  c->r[0]=R32(c->r[1]+0x00000014u); // 803B2758
  c->lr=c->r[0]; // 803B275C
  c->r[1]=c->r[1]+0x00000010u; // 803B2760
  return; // 803B2764
}

// fn_803B2768
void f_803B2768(Ctx* __restrict c) {
  trace_call(0x803B2768u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803B2768
  c->r[0]=c->lr; // 803B276C
  W32(c->r[1]+0x00000014u,c->r[0]); // 803B2770
  c->lr=0x803B2778u; f_802768B4(c); // 803B2774
  c->r[0]=R32(c->r[1]+0x00000014u); // 803B2778
  c->r[3]=(uint32_t)((int32_t)c->r[3]*(int32_t)300); // 803B277C
  c->lr=c->r[0]; // 803B2780
  c->r[1]=c->r[1]+0x00000010u; // 803B2784
  return; // 803B2788
}

// fn_803B278C
void f_803B278C(Ctx* __restrict c) {
  trace_call(0x803B278Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803B278C
  c->r[0]=c->lr; // 803B2790
  W32(c->r[1]+0x00000034u,c->r[0]); // 803B2794
  c->r[11]=c->r[1]+0x00000030u; // 803B2798
  c->lr=0x803B27A0u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 803B279C
  c->r[0]=R8(c->r[3]+0x00000000u); // 803B27A0
  c->r[27]=c->r[3]|c->r[3]; // 803B27A4
  cmps(c,0,(int32_t)c->r[0],0); // 803B27A8
  if (!crb(c,2)) { goto L_803B2818; } // 803B27AC
  c->r[6]=0u+0x1B4F0000u; // 803B27B0
  c->r[29]=c->r[4]|c->r[4]; // 803B27B4
  c->r[0]=c->r[6]+0xFFFF81B5u; // 803B27B8
  c->r[28]=0u+0x00000000u; // 803B27BC
  c->r[0]=(uint32_t)(((uint64_t)c->r[0]*(uint64_t)c->r[5])>>32); // 803B27C0
  c->r[30]=rotl(c->r[0],27)&0x07FFFFFFu; cr0(c,c->r[30]); // 803B27C4
  if (crb(c,2)) { goto L_803B2810; } // 803B27C8
  c->r[31]=c->r[3]+0x00000014u; // 803B27CC
  goto L_803B2808; // 803B27D0
L_803B27D4:;
  cmps(c,0,(int32_t)c->r[29],0); // 803B27D4
  c->r[5]=c->r[29]|c->r[29]; // 803B27D8
  if (crb(c,2)) { goto L_803B27EC; } // 803B27DC
  c->r[3]=c->r[29]|c->r[29]; // 803B27E0
  c->lr=0x803B27E8u; f_803AFF38(c); // 803B27E4
  c->r[5]=c->r[3]|c->r[3]; // 803B27E8
L_803B27EC:;
  W32(c->r[1]+0x00000008u,c->r[31]); // 803B27EC
  c->r[3]=c->r[27]+0x00000010u; // 803B27F0
  c->r[4]=c->r[1]+0x00000008u; // 803B27F4
  c->r[5]=c->r[5]+0x00000124u; // 803B27F8
  c->lr=0x803B2800u; f_803B50B4(c); // 803B27FC
  c->r[29]=c->r[29]+0x0000012Cu; // 803B2800
  c->r[28]=c->r[28]+0x00000001u; // 803B2804
L_803B2808:;
  cmpu(c,0,c->r[28],c->r[30]); // 803B2808
  if (crb(c,0)) { IRQCHK(c); goto L_803B27D4; } // 803B280C
L_803B2810:;
  c->r[0]=0u+0x00000001u; // 803B2810
  W8(c->r[27]+0x00000000u,c->r[0]); // 803B2814
L_803B2818:;
  c->r[11]=c->r[1]+0x00000030u; // 803B2818
  c->lr=0x803B2820u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 803B281C
  c->r[0]=R32(c->r[1]+0x00000034u); // 803B2820
  c->lr=c->r[0]; // 803B2824
  c->r[1]=c->r[1]+0x00000030u; // 803B2828
  return; // 803B282C
}

// AllocVoice__Q44nw4r3snd6detail12VoiceManagerFiiiPFPQ44nw4r3snd6detail5VoiceQ54nw4r3snd6detail5Voice19VoiceCallbackStatusPv_vPv
void f_803B2830(Ctx* __restrict c) {
  trace_call(0x803B2830u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803B2830
  c->r[0]=c->lr; // 803B2834
  W32(c->r[1]+0x00000044u,c->r[0]); // 803B2838
  c->r[11]=c->r[1]+0x00000040u; // 803B283C
  c->lr=0x803B2844u; { W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 803B2840
  c->r[31]=c->r[3]|c->r[3]; // 803B2844
  c->r[23]=c->r[4]|c->r[4]; // 803B2848
  c->r[24]=c->r[5]|c->r[5]; // 803B284C
  c->r[25]=c->r[6]|c->r[6]; // 803B2850
  c->r[26]=c->r[7]|c->r[7]; // 803B2854
  c->r[27]=c->r[8]|c->r[8]; // 803B2858
  c->lr=0x803B2860u; f_8025EA10(c); // 803B285C
  c->r[0]=R32(c->r[31]+0x00000010u); // 803B2860
  c->r[30]=c->r[3]|c->r[3]; // 803B2864
  cmps(c,0,(int32_t)c->r[0],0); // 803B2868
  if (!crb(c,2)) { goto L_803B28E8; } // 803B286C
  c->r[29]=0u+0x00000000u; // 803B2870
  if (!crb(c,2)) { goto L_803B28D0; } // 803B2874
  c->r[3]=R32(c->r[31]+0x00000008u); // 803B2878
  c->r[0]=R32(c->r[3]+0xFFFFFF90u); // 803B287C
  c->r[28]=c->r[3]+0xFFFFFEDCu; // 803B2880
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[25]); // 803B2884
  if (!crb(c,1)) { goto L_803B2894; } // 803B2888
  c->r[29]=0u+0x00000000u; // 803B288C
  goto L_803B28D0; // 803B2890
L_803B2894:;
  c->r[4]=R32(c->r[28]+0x0000009Cu); // 803B2894
  c->r[3]=c->r[28]|c->r[28]; // 803B2898
  c->r[0]=R32(c->r[28]+0x000000A0u); // 803B289C
  c->r[29]=(uint32_t)((int32_t)c->r[4]*(int32_t)c->r[0]); // 803B28A0
  c->lr=0x803B28A8u; f_803B0CDC(c); // 803B28A4
  c->r[3]=c->r[28]|c->r[28]; // 803B28A8
  c->lr=0x803B28B0u; f_803B0940(c); // 803B28AC
  c->r[12]=R32(c->r[28]+0x000000A4u); // 803B28B0
  cmps(c,0,(int32_t)c->r[12],0); // 803B28B4
  if (crb(c,2)) { goto L_803B28D0; } // 803B28B8
  c->r[3]=c->r[28]|c->r[28]; // 803B28BC
  c->r[5]=R32(c->r[28]+0x000000A8u); // 803B28C0
  c->r[4]=0u+0x00000002u; // 803B28C4
  c->ctr=c->r[12]; // 803B28C8
  if (true) { c->lr=0x803B28D0u; dispatch(c,c->ctr); } // 803B28CC
L_803B28D0:;
  cmps(c,0,(int32_t)c->r[29],0); // 803B28D0
  if (!crb(c,2)) { goto L_803B28E8; } // 803B28D4
  c->r[3]=c->r[30]|c->r[30]; // 803B28D8
  c->lr=0x803B28E0u; f_8025EA38(c); // 803B28DC
  c->r[3]=0u+0x00000000u; // 803B28E0
  goto L_803B29D4; // 803B28E4
L_803B28E8:;
  c->r[3]=R32(c->r[31]+0x00000014u); // 803B28E8
  c->r[4]=c->r[23]|c->r[23]; // 803B28EC
  c->r[5]=c->r[24]|c->r[24]; // 803B28F0
  c->r[6]=c->r[25]|c->r[25]; // 803B28F4
  c->r[28]=c->r[3]+0xFFFFFEDCu; // 803B28F8
  c->r[7]=c->r[26]|c->r[26]; // 803B28FC
  c->r[3]=c->r[28]|c->r[28]; // 803B2900
  c->r[8]=c->r[27]|c->r[27]; // 803B2904
  c->lr=0x803B290Cu; f_803B0704(c); // 803B2908
  cmps(c,0,(int32_t)c->r[3],0); // 803B290C
  if (!crb(c,2)) { goto L_803B2924; } // 803B2910
  c->r[3]=c->r[30]|c->r[30]; // 803B2914
  c->lr=0x803B291Cu; f_8025EA38(c); // 803B2918
  c->r[3]=0u+0x00000000u; // 803B291C
  goto L_803B29D4; // 803B2920
L_803B2924:;
  c->r[0]=rotl(c->r[25],0)&0x000000FFu; // 803B2924
  W32(c->r[28]+0x000000B4u,c->r[0]); // 803B2928
  c->lr=0x803B2930u; f_8025EA10(c); // 803B292C
  c->r[27]=c->r[28]+0x00000124u; // 803B2930
  c->r[29]=c->r[3]|c->r[3]; // 803B2934
  c->r[4]=c->r[27]|c->r[27]; // 803B2938
  c->r[3]=c->r[31]+0x00000010u; // 803B293C
  c->lr=0x803B2944u; f_803B50E0(c); // 803B2940
  c->r[5]=R32(c->r[31]+0x00000008u); // 803B2944
  c->r[3]=c->r[31]+0x00000008u; // 803B2948
  goto L_803B2968; // 803B294C
L_803B2950:;
  c->r[6]=R32(c->r[3]+0x00000004u); // 803B2950
  c->r[0]=R32(c->r[28]+0x000000B4u); // 803B2954
  c->r[4]=R32(c->r[6]+0xFFFFFF90u); // 803B2958
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[0]); // 803B295C
  if (!crb(c,1)) { goto L_803B2970; } // 803B2960
  c->r[3]=c->r[6]|c->r[6]; // 803B2964
L_803B2968:;
  cmpu(c,0,c->r[3],c->r[5]); // 803B2968
  if (!crb(c,2)) { IRQCHK(c); goto L_803B2950; } // 803B296C
L_803B2970:;
  W32(c->r[1]+0x00000008u,c->r[3]); // 803B2970
  c->r[5]=c->r[27]|c->r[27]; // 803B2974
  c->r[3]=c->r[31]+0x00000004u; // 803B2978
  c->r[4]=c->r[1]+0x00000008u; // 803B297C
  c->lr=0x803B2984u; f_803B50B4(c); // 803B2980
  c->r[3]=c->r[29]|c->r[29]; // 803B2984
  c->lr=0x803B298Cu; f_8025EA38(c); // 803B2988
  c->r[29]=c->r[31]+0x00000008u; // 803B298C
  goto L_803B29B4; // 803B2990
L_803B2994:;
  c->r[0]=R32(c->r[27]+0xFFFFFF90u); // 803B2994
  c->r[3]=c->r[27]+0xFFFFFEDCu; // 803B2998
  cmps(c,0,(int32_t)c->r[0],1); // 803B299C
  if (!crb(c,1)) { goto L_803B29BC; } // 803B29A0
  cmps(c,0,(int32_t)c->r[0],255); // 803B29A4
  if (crb(c,2)) { goto L_803B29B0; } // 803B29A8
  c->lr=0x803B29B0u; f_803B126C(c); // 803B29AC
L_803B29B0:;
  c->r[27]=R32(c->r[27]+0x00000000u); // 803B29B0
L_803B29B4:;
  cmpu(c,0,c->r[27],c->r[29]); // 803B29B4
  if (!crb(c,2)) { IRQCHK(c); goto L_803B2994; } // 803B29B8
L_803B29BC:;
  c->lr=0x803B29C0u; f_8039DC24(c); // 803B29BC
  c->r[4]=c->r[28]|c->r[28]; // 803B29C0
  c->lr=0x803B29C8u; f_8039DD08(c); // 803B29C4
  c->r[3]=c->r[30]|c->r[30]; // 803B29C8
  c->lr=0x803B29D0u; f_8025EA38(c); // 803B29CC
  c->r[3]=c->r[28]|c->r[28]; // 803B29D0
L_803B29D4:;
  c->r[11]=c->r[1]+0x00000040u; // 803B29D4
  c->lr=0x803B29DCu; { c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 803B29D8
  c->r[0]=R32(c->r[1]+0x00000044u); // 803B29DC
  c->lr=c->r[0]; // 803B29E0
  c->r[1]=c->r[1]+0x00000040u; // 803B29E4
  return; // 803B29E8
}

// FreeVoice__Q44nw4r3snd6detail12VoiceManagerFPQ44nw4r3snd6detail5Voice
void f_803B29EC(Ctx* __restrict c) {
  trace_call(0x803B29ECu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803B29EC
  c->r[0]=c->lr; // 803B29F0
  W32(c->r[1]+0x00000024u,c->r[0]); // 803B29F4
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 803B29F8
  W32(c->r[1]+0x00000018u,c->r[30]); // 803B29FC
  W32(c->r[1]+0x00000014u,c->r[29]); // 803B2A00
  c->r[29]=c->r[4]|c->r[4]; // 803B2A04
  W32(c->r[1]+0x00000010u,c->r[28]); // 803B2A08
  c->r[28]=c->r[3]|c->r[3]; // 803B2A0C
  c->lr=0x803B2A14u; f_8025EA10(c); // 803B2A10
  c->r[31]=c->r[3]|c->r[3]; // 803B2A14
  c->lr=0x803B2A1Cu; f_8039DC24(c); // 803B2A18
  c->r[4]=c->r[29]|c->r[29]; // 803B2A1C
  c->lr=0x803B2A24u; f_8039DD38(c); // 803B2A20
  c->lr=0x803B2A28u; f_8025EA10(c); // 803B2A24
  c->r[29]=c->r[29]+0x00000124u; // 803B2A28
  c->r[30]=c->r[3]|c->r[3]; // 803B2A2C
  c->r[4]=c->r[29]|c->r[29]; // 803B2A30
  c->r[3]=c->r[28]+0x00000004u; // 803B2A34
  c->lr=0x803B2A3Cu; f_803B50E0(c); // 803B2A38
  c->r[0]=c->r[28]+0x00000014u; // 803B2A3C
  c->r[5]=c->r[29]|c->r[29]; // 803B2A40
  W32(c->r[1]+0x00000008u,c->r[0]); // 803B2A44
  c->r[3]=c->r[28]+0x00000010u; // 803B2A48
  c->r[4]=c->r[1]+0x00000008u; // 803B2A4C
  c->lr=0x803B2A54u; f_803B50B4(c); // 803B2A50
  c->r[3]=c->r[30]|c->r[30]; // 803B2A54
  c->lr=0x803B2A5Cu; f_8025EA38(c); // 803B2A58
  c->r[3]=c->r[31]|c->r[31]; // 803B2A5C
  c->lr=0x803B2A64u; f_8025EA38(c); // 803B2A60
  c->r[0]=R32(c->r[1]+0x00000024u); // 803B2A64
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 803B2A68
  c->r[30]=R32(c->r[1]+0x00000018u); // 803B2A6C
  c->r[29]=R32(c->r[1]+0x00000014u); // 803B2A70
  c->r[28]=R32(c->r[1]+0x00000010u); // 803B2A74
  c->lr=c->r[0]; // 803B2A78
  c->r[1]=c->r[1]+0x00000020u; // 803B2A7C
  return; // 803B2A80
}

// UpdateAllVoices__Q44nw4r3snd6detail12VoiceManagerFv
void f_803B2A84(Ctx* __restrict c) {
  trace_call(0x803B2A84u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803B2A84
  c->r[0]=c->lr; // 803B2A88
  W32(c->r[1]+0x00000024u,c->r[0]); // 803B2A8C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 803B2A90
  W32(c->r[1]+0x00000018u,c->r[30]); // 803B2A94
  c->r[30]=c->r[3]+0x00000008u; // 803B2A98
  W32(c->r[1]+0x00000014u,c->r[29]); // 803B2A9C
  c->r[29]=c->r[3]|c->r[3]; // 803B2AA0
  c->r[31]=R32(c->r[3]+0x00000008u); // 803B2AA4
  goto L_803B2ABC; // 803B2AA8
L_803B2AAC:;
  c->r[3]=c->r[31]|c->r[31]; // 803B2AAC
  c->r[31]=R32(c->r[31]+0x00000000u); // 803B2AB0
  c->r[3]=c->r[3]+0xFFFFFEDCu; // 803B2AB4
  c->lr=0x803B2ABCu; f_803B00DC(c); // 803B2AB8
L_803B2ABC:;
  cmpu(c,0,c->r[31],c->r[30]); // 803B2ABC
  if (!crb(c,2)) { IRQCHK(c); goto L_803B2AAC; } // 803B2AC0
  c->r[30]=R32(c->r[29]+0x00000008u); // 803B2AC4
  c->r[31]=c->r[29]+0x00000008u; // 803B2AC8
  goto L_803B2AE0; // 803B2ACC
L_803B2AD0:;
  c->r[3]=c->r[30]|c->r[30]; // 803B2AD0
  c->r[30]=R32(c->r[30]+0x00000000u); // 803B2AD4
  c->r[3]=c->r[3]+0xFFFFFEDCu; // 803B2AD8
  c->lr=0x803B2AE0u; f_803B0178(c); // 803B2ADC
L_803B2AE0:;
  cmpu(c,0,c->r[30],c->r[31]); // 803B2AE0
  if (!crb(c,2)) { IRQCHK(c); goto L_803B2AD0; } // 803B2AE4
  c->lr=0x803B2AECu; f_8025EA10(c); // 803B2AE8
  {uint32_t ea=c->r[29]+0x00000008u; c->r[31]=R32(ea); c->r[29]=ea;} // 803B2AEC
  c->r[30]=c->r[3]|c->r[3]; // 803B2AF0
  goto L_803B2B08; // 803B2AF4
L_803B2AF8:;
  c->r[3]=c->r[31]|c->r[31]; // 803B2AF8
  c->r[31]=R32(c->r[31]+0x00000000u); // 803B2AFC
  c->r[3]=c->r[3]+0xFFFFFEDCu; // 803B2B00
  c->lr=0x803B2B08u; f_803B03C8(c); // 803B2B04
L_803B2B08:;
  cmpu(c,0,c->r[31],c->r[29]); // 803B2B08
  if (!crb(c,2)) { IRQCHK(c); goto L_803B2AF8; } // 803B2B0C
  c->r[3]=c->r[30]|c->r[30]; // 803B2B10
  c->lr=0x803B2B18u; f_8025EA38(c); // 803B2B14
  c->r[0]=R32(c->r[1]+0x00000024u); // 803B2B18
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 803B2B1C
  c->r[30]=R32(c->r[1]+0x00000018u); // 803B2B20
  c->r[29]=R32(c->r[1]+0x00000014u); // 803B2B24
  c->lr=c->r[0]; // 803B2B28
  c->r[1]=c->r[1]+0x00000020u; // 803B2B2C
  return; // 803B2B30
}

// NotifyVoiceUpdate__Q44nw4r3snd6detail12VoiceManagerFv
void f_803B2B34(Ctx* __restrict c) {
  trace_call(0x803B2B34u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803B2B34
  c->r[0]=c->lr; // 803B2B38
  W32(c->r[1]+0x00000024u,c->r[0]); // 803B2B3C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 803B2B40
  W32(c->r[1]+0x00000018u,c->r[30]); // 803B2B44
  W32(c->r[1]+0x00000014u,c->r[29]); // 803B2B48
  c->r[29]=c->r[3]|c->r[3]; // 803B2B4C
  c->lr=0x803B2B54u; f_8025EA10(c); // 803B2B50
  {uint32_t ea=c->r[29]+0x00000008u; c->r[30]=R32(ea); c->r[29]=ea;} // 803B2B54
  c->r[31]=c->r[3]|c->r[3]; // 803B2B58
  goto L_803B2B70; // 803B2B5C
L_803B2B60:;
  c->r[3]=c->r[30]|c->r[30]; // 803B2B60
  c->r[30]=R32(c->r[30]+0x00000000u); // 803B2B64
  c->r[3]=c->r[3]+0xFFFFFEDCu; // 803B2B68
  c->lr=0x803B2B70u; f_803B17D8(c); // 803B2B6C
L_803B2B70:;
  cmpu(c,0,c->r[30],c->r[29]); // 803B2B70
  if (!crb(c,2)) { IRQCHK(c); goto L_803B2B60; } // 803B2B74
  c->r[3]=c->r[31]|c->r[31]; // 803B2B78
  c->lr=0x803B2B80u; f_8025EA38(c); // 803B2B7C
  c->r[0]=R32(c->r[1]+0x00000024u); // 803B2B80
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 803B2B84
  c->r[30]=R32(c->r[1]+0x00000018u); // 803B2B88
  c->r[29]=R32(c->r[1]+0x00000014u); // 803B2B8C
  c->lr=c->r[0]; // 803B2B90
  c->r[1]=c->r[1]+0x00000020u; // 803B2B94
  return; // 803B2B98
}

// ChangeVoicePriority__Q44nw4r3snd6detail12VoiceManagerFPQ44nw4r3snd6detail5Voice
void f_803B2B9C(Ctx* __restrict c) {
  trace_call(0x803B2B9Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803B2B9C
  c->r[0]=c->lr; // 803B2BA0
  W32(c->r[1]+0x00000034u,c->r[0]); // 803B2BA4
  c->r[11]=c->r[1]+0x00000030u; // 803B2BA8
  c->lr=0x803B2BB0u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 803B2BAC
  c->r[27]=c->r[3]|c->r[3]; // 803B2BB0
  c->r[28]=c->r[4]|c->r[4]; // 803B2BB4
  c->lr=0x803B2BBCu; f_8025EA10(c); // 803B2BB8
  c->r[31]=c->r[3]|c->r[3]; // 803B2BBC
  c->lr=0x803B2BC4u; f_8025EA10(c); // 803B2BC0
  c->r[29]=c->r[28]+0x00000124u; // 803B2BC4
  c->r[30]=c->r[3]|c->r[3]; // 803B2BC8
  c->r[4]=c->r[29]|c->r[29]; // 803B2BCC
  c->r[3]=c->r[27]+0x00000004u; // 803B2BD0
  c->lr=0x803B2BD8u; f_803B50E0(c); // 803B2BD4
  c->r[0]=c->r[27]+0x00000014u; // 803B2BD8
  c->r[5]=c->r[29]|c->r[29]; // 803B2BDC
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 803B2BE0
  c->r[3]=c->r[27]+0x00000010u; // 803B2BE4
  c->r[4]=c->r[1]+0x0000000Cu; // 803B2BE8
  c->lr=0x803B2BF0u; f_803B50B4(c); // 803B2BEC
  c->r[3]=c->r[30]|c->r[30]; // 803B2BF0
  c->lr=0x803B2BF8u; f_8025EA38(c); // 803B2BF4
  c->lr=0x803B2BFCu; f_8025EA10(c); // 803B2BF8
  c->r[30]=c->r[3]|c->r[3]; // 803B2BFC
  c->r[4]=c->r[29]|c->r[29]; // 803B2C00
  c->r[3]=c->r[27]+0x00000010u; // 803B2C04
  c->lr=0x803B2C0Cu; f_803B50E0(c); // 803B2C08
  c->r[5]=R32(c->r[27]+0x00000008u); // 803B2C0C
  c->r[3]=c->r[27]+0x00000008u; // 803B2C10
  goto L_803B2C30; // 803B2C14
L_803B2C18:;
  c->r[6]=R32(c->r[3]+0x00000004u); // 803B2C18
  c->r[0]=R32(c->r[28]+0x000000B4u); // 803B2C1C
  c->r[4]=R32(c->r[6]+0xFFFFFF90u); // 803B2C20
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[0]); // 803B2C24
  if (!crb(c,1)) { goto L_803B2C38; } // 803B2C28
  c->r[3]=c->r[6]|c->r[6]; // 803B2C2C
L_803B2C30:;
  cmpu(c,0,c->r[3],c->r[5]); // 803B2C30
  if (!crb(c,2)) { IRQCHK(c); goto L_803B2C18; } // 803B2C34
L_803B2C38:;
  W32(c->r[1]+0x00000008u,c->r[3]); // 803B2C38
  c->r[5]=c->r[29]|c->r[29]; // 803B2C3C
  c->r[3]=c->r[27]+0x00000004u; // 803B2C40
  c->r[4]=c->r[1]+0x00000008u; // 803B2C44
  c->lr=0x803B2C4Cu; f_803B50B4(c); // 803B2C48
  c->r[3]=c->r[30]|c->r[30]; // 803B2C4C
  c->lr=0x803B2C54u; f_8025EA38(c); // 803B2C50
  c->r[30]=c->r[27]+0x00000008u; // 803B2C54
  goto L_803B2C7C; // 803B2C58
L_803B2C5C:;
  c->r[0]=R32(c->r[29]+0xFFFFFF90u); // 803B2C5C
  c->r[3]=c->r[29]+0xFFFFFEDCu; // 803B2C60
  cmps(c,0,(int32_t)c->r[0],1); // 803B2C64
  if (!crb(c,1)) { goto L_803B2C84; } // 803B2C68
  cmps(c,0,(int32_t)c->r[0],255); // 803B2C6C
  if (crb(c,2)) { goto L_803B2C78; } // 803B2C70
  c->lr=0x803B2C78u; f_803B126C(c); // 803B2C74
L_803B2C78:;
  c->r[29]=R32(c->r[29]+0x00000000u); // 803B2C78
L_803B2C7C:;
  cmpu(c,0,c->r[29],c->r[30]); // 803B2C7C
  if (!crb(c,2)) { IRQCHK(c); goto L_803B2C5C; } // 803B2C80
L_803B2C84:;
  c->r[3]=c->r[31]|c->r[31]; // 803B2C84
  c->lr=0x803B2C8Cu; f_8025EA38(c); // 803B2C88
  c->r[11]=c->r[1]+0x00000030u; // 803B2C8C
  c->lr=0x803B2C94u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 803B2C90
  c->r[0]=R32(c->r[1]+0x00000034u); // 803B2C94
  c->lr=c->r[0]; // 803B2C98
  c->r[1]=c->r[1]+0x00000030u; // 803B2C9C
  return; // 803B2CA0
}

// UpdateAllVoicesSync__Q44nw4r3snd6detail12VoiceManagerFUl
void f_803B2CA4(Ctx* __restrict c) {
  trace_call(0x803B2CA4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803B2CA4
  c->r[0]=c->lr; // 803B2CA8
  W32(c->r[1]+0x00000014u,c->r[0]); // 803B2CAC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 803B2CB0
  c->r[31]=c->r[4]|c->r[4]; // 803B2CB4
  W32(c->r[1]+0x00000008u,c->r[30]); // 803B2CB8
  c->r[30]=c->r[3]|c->r[3]; // 803B2CBC
  c->lr=0x803B2CC4u; f_8025EA10(c); // 803B2CC0
  c->r[4]=R32(c->r[30]+0x00000008u); // 803B2CC4
  c->r[0]=c->r[30]+0x00000008u; // 803B2CC8
  goto L_803B2CF0; // 803B2CCC
L_803B2CD0:;
  c->r[6]=c->r[4]|c->r[4]; // 803B2CD0
  c->r[4]=R32(c->r[4]+0x00000000u); // 803B2CD4
  c->r[5]=R8(c->r[6]+0xFFFFFF88u); // 803B2CD8
  cmps(c,0,(int32_t)c->r[5],0); // 803B2CDC
  if (crb(c,2)) { goto L_803B2CF0; } // 803B2CE0
  c->r[5]=R8(c->r[6]+0xFFFFFF8Du); // 803B2CE4
  c->r[5]=c->r[5]|c->r[31]; // 803B2CE8
  W8(c->r[6]+0xFFFFFF8Du,c->r[5]); // 803B2CEC
L_803B2CF0:;
  cmpu(c,0,c->r[4],c->r[0]); // 803B2CF0
  if (!crb(c,2)) { IRQCHK(c); goto L_803B2CD0; } // 803B2CF4
  c->lr=0x803B2CFCu; f_8025EA38(c); // 803B2CF8
  c->r[0]=R32(c->r[1]+0x00000014u); // 803B2CFC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 803B2D00
  c->r[30]=R32(c->r[1]+0x00000008u); // 803B2D04
  c->lr=c->r[0]; // 803B2D08
  c->r[1]=c->r[1]+0x00000010u; // 803B2D0C
  return; // 803B2D10
}

// CalcPitchRatio__Q44nw4r3snd6detail4UtilFi
void f_803B2D14(Ctx* __restrict c) {
  trace_call(0x803B2D14u);
  c->r[5]=addc(c,~c->r[3],0x00000BFFu,1); // 803B2D14
  c->r[0]=0u+0x00000C00u; // 803B2D18
  c->r[5]=divwu(c->r[5],c->r[0]); // 803B2D1C
  cmps(c,0,(int32_t)c->r[3],0); // 803B2D20
  {uint32_t ea=c->r[2]+0xFFFFEFA8u; c->f[1]=c->ps1[1]=RF32(ea);} // 803B2D24
  c->r[6]=0u+0x00000000u; // 803B2D28
  if (!crb(c,0)) { goto L_803B2D60; } // 803B2D2C
  c->r[4]=rotl(c->r[5],29)&0x1FFFFFFFu; cr0(c,c->r[4]); // 803B2D30
  c->r[0]=(uint32_t)((int32_t)c->r[5]*(int32_t)3072); // 803B2D34
  c->ctr=c->r[4]; // 803B2D38
  if (crb(c,2)) { goto L_803B2D50; } // 803B2D3C
L_803B2D40:;
  c->r[6]=c->r[6]+0xFFFFFFF8u; // 803B2D40
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_803B2D40; } // 803B2D44
  c->r[5]=c->r[5]&0x00000007u; cr0(c,c->r[5]); // 803B2D48
  if (crb(c,2)) { goto L_803B2D5C; } // 803B2D4C
L_803B2D50:;
  c->ctr=c->r[5]; // 803B2D50
L_803B2D54:;
  c->r[6]=c->r[6]+0xFFFFFFFFu; // 803B2D54
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_803B2D54; } // 803B2D58
L_803B2D5C:;
  c->r[3]=c->r[3]+c->r[0]; // 803B2D5C
L_803B2D60:;
  c->r[0]=0u+0x00000C00u; // 803B2D60
  cmps(c,0,(int32_t)c->r[3],3072); // 803B2D64
  c->r[5]=divwu(c->r[3],c->r[0]); // 803B2D68
  if (crb(c,0)) { goto L_803B2DA0; } // 803B2D6C
  c->r[4]=rotl(c->r[5],29)&0x1FFFFFFFu; cr0(c,c->r[4]); // 803B2D70
  c->r[0]=(uint32_t)((int32_t)c->r[5]*(int32_t)-3072); // 803B2D74
  c->ctr=c->r[4]; // 803B2D78
  if (crb(c,2)) { goto L_803B2D90; } // 803B2D7C
L_803B2D80:;
  c->r[6]=c->r[6]+0x00000008u; // 803B2D80
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_803B2D80; } // 803B2D84
  c->r[5]=c->r[5]&0x00000007u; cr0(c,c->r[5]); // 803B2D88
  if (crb(c,2)) { goto L_803B2D9C; } // 803B2D8C
L_803B2D90:;
  c->ctr=c->r[5]; // 803B2D90
L_803B2D94:;
  c->r[6]=c->r[6]+0x00000001u; // 803B2D94
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_803B2D94; } // 803B2D98
L_803B2D9C:;
  c->r[3]=c->r[3]+c->r[0]; // 803B2D9C
L_803B2DA0:;
  cmps(c,0,(int32_t)c->r[6],0); // 803B2DA0
  {uint32_t ea=c->r[2]+0xFFFFEFACu; c->f[0]=c->ps1[0]=RF32(ea);} // 803B2DA4
  c->r[5]=c->r[6]|c->r[6]; // 803B2DA8
  if (!crb(c,1)) { goto L_803B2DFC; } // 803B2DAC
  c->r[4]=rotl(c->r[6],29)&0x1FFFFFFFu; cr0(c,c->r[4]); // 803B2DB0
  c->r[0]=0u-c->r[6]; // 803B2DB4
  c->ctr=c->r[4]; // 803B2DB8
  if (crb(c,2)) { goto L_803B2DEC; } // 803B2DBC
L_803B2DC0:;
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[0]); // 803B2DC0
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[0]); // 803B2DC4
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[0]); // 803B2DC8
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[0]); // 803B2DCC
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[0]); // 803B2DD0
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[0]); // 803B2DD4
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[0]); // 803B2DD8
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[0]); // 803B2DDC
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_803B2DC0; } // 803B2DE0
  c->r[5]=c->r[6]&0x00000007u; cr0(c,c->r[5]); // 803B2DE4
  if (crb(c,2)) { goto L_803B2DF8; } // 803B2DE8
L_803B2DEC:;
  c->ctr=c->r[5]; // 803B2DEC
L_803B2DF0:;
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[0]); // 803B2DF0
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_803B2DF0; } // 803B2DF4
L_803B2DF8:;
  c->r[6]=c->r[6]+c->r[0]; // 803B2DF8
L_803B2DFC:;
  cmps(c,0,(int32_t)c->r[6],0); // 803B2DFC
  {uint32_t ea=c->r[2]+0xFFFFEFB0u; c->f[0]=c->ps1[0]=RF32(ea);} // 803B2E00
  c->r[4]=0u-c->r[6]; // 803B2E04
  if (!crb(c,0)) { goto L_803B2E50; } // 803B2E08
  c->r[0]=rotl(c->r[4],29)&0x1FFFFFFFu; cr0(c,c->r[0]); // 803B2E0C
  c->ctr=c->r[0]; // 803B2E10
  if (crb(c,2)) { goto L_803B2E44; } // 803B2E14
L_803B2E18:;
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[0]); // 803B2E18
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[0]); // 803B2E1C
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[0]); // 803B2E20
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[0]); // 803B2E24
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[0]); // 803B2E28
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[0]); // 803B2E2C
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[0]); // 803B2E30
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[0]); // 803B2E34
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_803B2E18; } // 803B2E38
  c->r[4]=c->r[4]&0x00000007u; cr0(c,c->r[4]); // 803B2E3C
  if (crb(c,2)) { goto L_803B2E50; } // 803B2E40
L_803B2E44:;
  c->ctr=c->r[4]; // 803B2E44
L_803B2E48:;
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[0]); // 803B2E48
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_803B2E48; } // 803B2E4C
L_803B2E50:;
  c->r[4]=sraw(c,c->r[3],8); // 803B2E50
  c->r[0]=rotl(c->r[3],24)&0xFF000000u; // 803B2E54
  c->r[3]=rotl(c->r[3],1)&0x00000001u; // 803B2E58
  c->r[0]=c->r[0]-c->r[3]; // 803B2E5C
  c->r[5]=addc(c,c->r[4],0,c->xer_ca); cr0(c,c->r[5]); // 803B2E60
  c->r[0]=rotl(c->r[0],8)&0xFFFFFFFFu; // 803B2E64
  c->r[3]=c->r[0]+c->r[3]; // 803B2E68
  if (crb(c,2)) { goto L_803B2E84; } // 803B2E6C
  c->r[4]=0u+0x803F0000u; // 803B2E70
  c->r[0]=rotl(c->r[5],2)&0xFFFFFFFCu; // 803B2E74
  c->r[4]=c->r[4]+0xFFFFE600u; // 803B2E78
  {uint32_t ea=c->r[4]+c->r[0]; c->f[0]=c->ps1[0]=RF32(ea);} // 803B2E7C
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[0]); // 803B2E80
L_803B2E84:;
  cmps(c,0,(int32_t)c->r[3],0); // 803B2E84
  if (crb(c,2)) return; // 803B2E88
  c->r[4]=0u+0x803F0000u; // 803B2E8C
  c->r[0]=rotl(c->r[3],2)&0xFFFFFFFCu; // 803B2E90
  c->r[4]=c->r[4]+0xFFFFE630u; // 803B2E94
  {uint32_t ea=c->r[4]+c->r[0]; c->f[0]=c->ps1[0]=RF32(ea);} // 803B2E98
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[0]); // 803B2E9C
  return; // 803B2EA0
}

// CalcVolumeRatio__Q44nw4r3snd6detail4UtilFf
void f_803B2EA4(Ctx* __restrict c) {
  trace_call(0x803B2EA4u);
  {uint32_t ea=c->r[2]+0xFFFFEFB4u; c->f[2]=c->ps1[2]=RF32(ea);} // 803B2EA4
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803B2EA8
  fcmp(c,0,c->f[1],c->f[2]); // 803B2EAC
  if (!crb(c,1)) { goto L_803B2EB8; } // 803B2EB0
  goto L_803B2ECC; // 803B2EB4
L_803B2EB8:;
  {uint32_t ea=c->r[2]+0xFFFFEFB8u; c->f[2]=c->ps1[2]=RF32(ea);} // 803B2EB8
  fcmp(c,0,c->f[1],c->f[2]); // 803B2EBC
  if (!crb(c,0)) { goto L_803B2EC8; } // 803B2EC0
  goto L_803B2ECC; // 803B2EC4
L_803B2EC8:;
  c->f[2]=c->f[1]; // 803B2EC8
L_803B2ECC:;
  {uint32_t ea=c->r[2]+0xFFFFEFBCu; c->f[0]=c->ps1[0]=RF32(ea);} // 803B2ECC
  c->r[3]=0u+0x803F0000u; // 803B2ED0
  c->r[3]=c->r[3]+0xFFFFEA30u; // 803B2ED4
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[2]); // 803B2ED8
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 803B2EDC
  {uint32_t ea=c->r[1]+0x00000008u; WF64(ea,c->f[0]);} // 803B2EE0
  c->r[4]=R32(c->r[1]+0x0000000Cu); // 803B2EE4
  c->r[0]=c->r[4]+0x00000388u; // 803B2EE8
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 803B2EEC
  {uint32_t ea=c->r[3]+c->r[0]; c->f[1]=c->ps1[1]=RF32(ea);} // 803B2EF0
  c->r[1]=c->r[1]+0x00000010u; // 803B2EF4
  return; // 803B2EF8
}

// CalcPanRatio__Q44nw4r3snd6detail4UtilFfRCQ54nw4r3snd6detail4Util7PanInfo
void f_803B2EFC(Ctx* __restrict c) {
  trace_call(0x803B2EFCu);
  {uint32_t ea=c->r[2]+0xFFFFEFA8u; c->f[2]=c->ps1[2]=RF32(ea);} // 803B2EFC
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803B2F00
  fcmp(c,0,c->f[1],c->f[2]); // 803B2F04
  if (!crb(c,1)) { goto L_803B2F10; } // 803B2F08
  goto L_803B2F24; // 803B2F0C
L_803B2F10:;
  {uint32_t ea=c->r[2]+0xFFFFEFC0u; c->f[2]=c->ps1[2]=RF32(ea);} // 803B2F10
  fcmp(c,0,c->f[1],c->f[2]); // 803B2F14
  if (!crb(c,0)) { goto L_803B2F20; } // 803B2F18
  goto L_803B2F24; // 803B2F1C
L_803B2F20:;
  c->f[2]=c->f[1]; // 803B2F20
L_803B2F24:;
  {uint32_t ea=c->r[2]+0xFFFFEFA8u; c->f[0]=c->ps1[0]=RF32(ea);} // 803B2F24
  c->r[4]=0u+0x80430000u; // 803B2F28
  c->r[0]=R32(c->r[3]+0x00000000u); // 803B2F2C
  c->r[4]=c->r[4]+0x00007680u; // 803B2F30
  c->f[1]=c->ps1[1]=S(c->f[0]+c->f[2]); // 803B2F34
  {uint32_t ea=c->r[2]+0xFFFFEFB0u; c->f[2]=c->ps1[2]=RF32(ea);} // 803B2F38
  c->r[5]=rotl(c->r[0],2)&0xFFFFFFFCu; // 803B2F3C
  c->r[0]=R8(c->r[3]+0x00000004u); // 803B2F40
  {uint32_t ea=c->r[2]+0xFFFFEFC4u; c->f[0]=c->ps1[0]=RF32(ea);} // 803B2F44
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[2]); // 803B2F48
  cmps(c,0,(int32_t)c->r[0],0); // 803B2F4C
  c->r[4]=R32(c->r[4]+c->r[5]); // 803B2F50
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[1]); // 803B2F54
  c->f[0]=c->ps1[0]=S(c->f[2]+c->f[0]); // 803B2F58
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 803B2F5C
  {uint32_t ea=c->r[1]+0x00000008u; WF64(ea,c->f[0]);} // 803B2F60
  c->r[0]=R32(c->r[1]+0x0000000Cu); // 803B2F64
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 803B2F68
  {uint32_t ea=c->r[4]+c->r[0]; c->f[2]=c->ps1[2]=RF32(ea);} // 803B2F6C
  if (crb(c,2)) { goto L_803B2F7C; } // 803B2F70
  {uint32_t ea=c->r[4]+0x00000200u; c->f[0]=c->ps1[0]=RF32(ea);} // 803B2F74
  c->f[2]=c->ps1[2]=S(c->f[2]/c->f[0]); // 803B2F78
L_803B2F7C:;
  c->r[0]=R8(c->r[3]+0x00000005u); // 803B2F7C
  cmps(c,0,(int32_t)c->r[0],0); // 803B2F80
  if (crb(c,2)) { goto L_803B2FB0; } // 803B2F84
  {uint32_t ea=c->r[2]+0xFFFFEFA8u; c->f[1]=c->ps1[1]=RF32(ea);} // 803B2F88
  fcmp(c,0,c->f[2],c->f[1]); // 803B2F8C
  if (!crb(c,1)) { goto L_803B2F98; } // 803B2F90
  goto L_803B2FD4; // 803B2F94
L_803B2F98:;
  {uint32_t ea=c->r[2]+0xFFFFEFC8u; c->f[1]=c->ps1[1]=RF32(ea);} // 803B2F98
  fcmp(c,0,c->f[2],c->f[1]); // 803B2F9C
  if (!crb(c,0)) { goto L_803B2FA8; } // 803B2FA0
  goto L_803B2FD4; // 803B2FA4
L_803B2FA8:;
  c->f[1]=c->f[2]; // 803B2FA8
  goto L_803B2FD4; // 803B2FAC
L_803B2FB0:;
  {uint32_t ea=c->r[2]+0xFFFFEFACu; c->f[1]=c->ps1[1]=RF32(ea);} // 803B2FB0
  fcmp(c,0,c->f[2],c->f[1]); // 803B2FB4
  if (!crb(c,1)) { goto L_803B2FC0; } // 803B2FB8
  goto L_803B2FD4; // 803B2FBC
L_803B2FC0:;
  {uint32_t ea=c->r[2]+0xFFFFEFC8u; c->f[1]=c->ps1[1]=RF32(ea);} // 803B2FC0
  fcmp(c,0,c->f[2],c->f[1]); // 803B2FC4
  if (!crb(c,0)) { goto L_803B2FD0; } // 803B2FC8
  goto L_803B2FD4; // 803B2FCC
L_803B2FD0:;
  c->f[1]=c->f[2]; // 803B2FD0
L_803B2FD4:;
  c->r[1]=c->r[1]+0x00000010u; // 803B2FD4
  return; // 803B2FD8
}

// CalcSurroundPanRatio__Q44nw4r3snd6detail4UtilFfRCQ54nw4r3snd6detail4Util7PanInfo
void f_803B2FDC(Ctx* __restrict c) {
  trace_call(0x803B2FDCu);
  {uint32_t ea=c->r[2]+0xFFFFEFACu; c->f[0]=c->ps1[0]=RF32(ea);} // 803B2FDC
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803B2FE0
  fcmp(c,0,c->f[1],c->f[0]); // 803B2FE4
  if (!crb(c,1)) { goto L_803B2FF0; } // 803B2FE8
  goto L_803B3004; // 803B2FEC
L_803B2FF0:;
  {uint32_t ea=c->r[2]+0xFFFFEFC8u; c->f[0]=c->ps1[0]=RF32(ea);} // 803B2FF0
  fcmp(c,0,c->f[1],c->f[0]); // 803B2FF4
  if (!crb(c,0)) { goto L_803B3000; } // 803B2FF8
  goto L_803B3004; // 803B2FFC
L_803B3000:;
  c->f[0]=c->f[1]; // 803B3000
L_803B3004:;
  {uint32_t ea=c->r[2]+0xFFFFEFB0u; c->f[2]=c->ps1[2]=RF32(ea);} // 803B3004
  c->r[4]=0u+0x80430000u; // 803B3008
  c->r[0]=R32(c->r[3]+0x00000000u); // 803B300C
  c->r[4]=c->r[4]+0x00007680u; // 803B3010
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[2]); // 803B3014
  {uint32_t ea=c->r[2]+0xFFFFEFC4u; c->f[0]=c->ps1[0]=RF32(ea);} // 803B3018
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 803B301C
  {uint32_t ea=c->r[2]+0xFFFFEFACu; c->f[3]=c->ps1[3]=RF32(ea);} // 803B3020
  c->r[3]=R32(c->r[4]+c->r[0]); // 803B3024
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[1]); // 803B3028
  c->f[0]=c->ps1[0]=S(c->f[2]+c->f[0]); // 803B302C
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 803B3030
  {uint32_t ea=c->r[1]+0x00000008u; WF64(ea,c->f[0]);} // 803B3034
  c->r[0]=R32(c->r[1]+0x0000000Cu); // 803B3038
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 803B303C
  {uint32_t ea=c->r[3]+c->r[0]; c->f[0]=c->ps1[0]=RF32(ea);} // 803B3040
  fcmp(c,0,c->f[0],c->f[3]); // 803B3044
  if (!crb(c,1)) { goto L_803B3050; } // 803B3048
  goto L_803B3064; // 803B304C
L_803B3050:;
  {uint32_t ea=c->r[2]+0xFFFFEFC8u; c->f[3]=c->ps1[3]=RF32(ea);} // 803B3050
  fcmp(c,0,c->f[0],c->f[3]); // 803B3054
  if (!crb(c,0)) { goto L_803B3060; } // 803B3058
  goto L_803B3064; // 803B305C
L_803B3060:;
  c->f[3]=c->f[0]; // 803B3060
L_803B3064:;
  c->f[1]=c->f[3]; // 803B3064
  c->r[1]=c->r[1]+0x00000010u; // 803B3068
  return; // 803B306C
}

// CalcLpfFreq__Q44nw4r3snd6detail4UtilFf
void f_803B3070(Ctx* __restrict c) {
  trace_call(0x803B3070u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803B3070
  c->r[0]=c->lr; // 803B3074
  {uint32_t ea=c->r[2]+0xFFFFEFA8u; c->f[2]=c->ps1[2]=RF32(ea);} // 803B3078
  W32(c->r[1]+0x00000014u,c->r[0]); // 803B307C
  fcmp(c,0,c->f[1],c->f[2]); // 803B3080
  if (!crb(c,1)) { goto L_803B308C; } // 803B3084
  goto L_803B30A0; // 803B3088
L_803B308C:;
  {uint32_t ea=c->r[2]+0xFFFFEFC8u; c->f[2]=c->ps1[2]=RF32(ea);} // 803B308C
  fcmp(c,0,c->f[1],c->f[2]); // 803B3090
  if (!crb(c,0)) { goto L_803B309C; } // 803B3094
  goto L_803B30A0; // 803B3098
L_803B309C:;
  c->f[2]=c->f[1]; // 803B309C
L_803B30A0:;
  {uint32_t ea=c->r[2]+0xFFFFEFE8u; c->f[1]=RF64(ea);} // 803B30A0
  {uint32_t ea=c->r[2]+0xFFFFEFE0u; c->f[0]=RF64(ea);} // 803B30A4
  c->f[2]=c->f[2]-c->f[1]; // 803B30A8
  {uint32_t ea=c->r[2]+0xFFFFEFD8u; c->f[1]=RF64(ea);} // 803B30AC
  c->f[2]=c->f[0]*c->f[2]; // 803B30B0
  c->lr=0x803B30B8u; f_8029C4A8(c); // 803B30B4
  {uint32_t ea=c->r[2]+0xFFFFEFD0u; c->f[0]=RF64(ea);} // 803B30B8
  c->r[0]=R32(c->r[1]+0x00000014u); // 803B30BC
  c->f[0]=c->f[0]*c->f[1]; // 803B30C0
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 803B30C4
  {uint32_t ea=c->r[1]+0x00000008u; WF64(ea,c->f[0]);} // 803B30C8
  c->r[3]=R32(c->r[1]+0x0000000Cu); // 803B30CC
  c->lr=c->r[0]; // 803B30D0
  c->r[1]=c->r[1]+0x00000010u; // 803B30D4
  return; // 803B30D8
}

// GetRemoteFilterCoefs__Q44nw4r3snd6detail4UtilFiPUsPUsPUsPUsPUs
void f_803B30DC(Ctx* __restrict c) {
  trace_call(0x803B30DCu);
  cmps(c,0,(int32_t)c->r[3],127); // 803B30DC
  if (!crb(c,1)) { goto L_803B30EC; } // 803B30E0
  c->r[0]=0u+0x0000007Fu; // 803B30E4
  goto L_803B30F4; // 803B30E8
L_803B30EC:;
  c->r[0]=sraw(c,c->r[3],31); // 803B30EC
  c->r[0]=c->r[3]&~c->r[0]; // 803B30F0
L_803B30F4:;
  c->r[9]=(uint32_t)((int32_t)c->r[0]*(int32_t)10); // 803B30F4
  c->r[3]=0u+0x803F0000u; // 803B30F8
  c->r[3]=c->r[3]+0x00000550u; // 803B30FC
  c->r[0]=R16(c->r[3]+c->r[9]); // 803B3100
  c->r[9]=c->r[3]+c->r[9]; // 803B3104
  c->r[3]=R16(c->r[9]+0x00000002u); // 803B3108
  W16(c->r[4]+0x00000000u,c->r[0]); // 803B310C
  c->r[0]=R16(c->r[9]+0x00000004u); // 803B3110
  W16(c->r[5]+0x00000000u,c->r[3]); // 803B3114
  c->r[3]=R16(c->r[9]+0x00000006u); // 803B3118
  W16(c->r[6]+0x00000000u,c->r[0]); // 803B311C
  c->r[0]=R16(c->r[9]+0x00000008u); // 803B3120
  W16(c->r[7]+0x00000000u,c->r[3]); // 803B3124
  W16(c->r[8]+0x00000000u,c->r[0]); // 803B3128
  return; // 803B312C
}

// CalcRandom__Q44nw4r3snd6detail4UtilFv
void f_803B3130(Ctx* __restrict c) {
  trace_call(0x803B3130u);
  c->r[3]=0u+0x00190000u; // 803B3130
  c->r[4]=R32(c->r[13]+0xFFFF9358u); // 803B3134
  c->r[0]=c->r[3]+0x0000660Du; // 803B3138
  c->r[3]=(uint32_t)((int32_t)c->r[4]*(int32_t)c->r[0]); // 803B313C
  c->r[3]=c->r[3]+0x3C6F0000u; // 803B3140
  c->r[0]=c->r[3]+0xFFFFF35Fu; // 803B3144
  W32(c->r[13]+0xFFFF9358u,c->r[0]); // 803B3148
  c->r[3]=rotl(c->r[0],16)&0x0000FFFFu; // 803B314C
  return; // 803B3150
}

// GetDataRefAddressImpl__Q44nw4r3snd6detail4UtilFQ54nw4r3snd6detail4Util7RefTypeUlPCv
void f_803B3154(Ctx* __restrict c) {
  trace_call(0x803B3154u);
  cmps(c,0,(int32_t)c->r[3],1); // 803B3154
  if (!crb(c,2)) { goto L_803B3164; } // 803B3158
  c->r[3]=c->r[4]+c->r[5]; // 803B315C
  return; // 803B3160
L_803B3164:;
  cmps(c,0,(int32_t)c->r[3],0); // 803B3164
  c->r[3]=0u+0x00000000u; // 803B3168
  if (!crb(c,2)) return; // 803B316C
  c->r[3]=c->r[4]|c->r[4]; // 803B3170
  return; // 803B3174
}

// fn_803B3178
void f_803B3178(Ctx* __restrict c) {
  trace_call(0x803B3178u);
  W32(c->r[3]+0x00000000u,c->r[4]); // 803B3178
  return; // 803B317C
}

// fn_803B3180
void f_803B3180(Ctx* __restrict c) {
  trace_call(0x803B3180u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803B3180
  c->r[0]=c->lr; // 803B3184
  c->r[6]=R32(c->r[3]+0x00000000u); // 803B3188
  W32(c->r[1]+0x00000024u,c->r[0]); // 803B318C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 803B3190
  c->r[31]=c->r[5]|c->r[5]; // 803B3194
  W32(c->r[1]+0x00000018u,c->r[30]); // 803B3198
  c->r[30]=c->r[3]|c->r[3]; // 803B319C
  W32(c->r[1]+0x00000014u,c->r[29]); // 803B31A0
  W32(c->r[1]+0x00000010u,c->r[28]); // 803B31A4
  c->r[28]=c->r[4]|c->r[4]; // 803B31A8
  c->r[0]=R8(c->r[6]+0x00000000u); // 803B31AC
  cmpu(c,0,c->r[0],0x00000001u); // 803B31B0
  if (!crb(c,2)) { goto L_803B31C0; } // 803B31B4
  c->r[29]=0u+0x0000000Au; // 803B31B8
  goto L_803B31D0; // 803B31BC
L_803B31C0:;
  cmps(c,0,(int32_t)c->r[0],0); // 803B31C0
  c->r[29]=0u+0x00000000u; // 803B31C4
  if (!crb(c,2)) { goto L_803B31D0; } // 803B31C8
  c->r[29]=0u+0x00000019u; // 803B31CC
L_803B31D0:;
  c->r[7]=R32(c->r[3]+0x00000000u); // 803B31D0
  c->r[5]=c->r[29]|c->r[29]; // 803B31D4
  W8(c->r[4]+0x00000000u,c->r[0]); // 803B31D8
  c->r[3]=0u+0x00000000u; // 803B31DC
  c->r[0]=R8(c->r[7]+0x00000002u); // 803B31E0
  W8(c->r[4]+0x00000002u,c->r[0]); // 803B31E4
  c->r[6]=R8(c->r[7]+0x00000003u); // 803B31E8
  c->r[0]=R16(c->r[7]+0x00000004u); // 803B31EC
  c->r[6]=rotl(c->r[6],16)&0xFFFF0000u; // 803B31F0
  c->r[0]=c->r[6]+c->r[0]; // 803B31F4
  W32(c->r[4]+0x00000004u,c->r[0]); // 803B31F8
  c->r[0]=R8(c->r[7]+0x00000001u); // 803B31FC
  W8(c->r[4]+0x00000001u,c->r[0]); // 803B3200
  c->r[4]=R32(c->r[7]+0x00000008u); // 803B3204
  c->lr=0x803B320Cu; f_80398A5C(c); // 803B3208
  W32(c->r[28]+0x00000008u,c->r[3]); // 803B320C
  c->r[5]=c->r[29]|c->r[29]; // 803B3210
  c->r[4]=R32(c->r[30]+0x00000000u); // 803B3214
  c->r[3]=0u+0x00000000u; // 803B3218
  c->r[4]=R32(c->r[4]+0x0000000Cu); // 803B321C
  c->lr=0x803B3224u; f_80398A5C(c); // 803B3220
  c->r[0]=c->r[3]+0x00000001u; // 803B3224
  c->r[3]=R32(c->r[30]+0x00000000u); // 803B3228
  W32(c->r[28]+0x0000000Cu,c->r[0]); // 803B322C
  c->r[4]=c->r[28]+0x00000010u; // 803B3230
  c->r[6]=0u+0x00000000u; // 803B3234
  c->r[0]=R32(c->r[3]+0x00000010u); // 803B3238
  c->r[5]=c->r[0]+c->r[3]; // 803B323C
  goto L_803B3360; // 803B3240
L_803B3244:;
  c->r[0]=R32(c->r[5]+0x00000000u); // 803B3244
  c->r[7]=c->r[0]+c->r[3]; // 803B3248
  c->r[0]=R32(c->r[7]+0x00000008u); // 803B324C
  W32(c->r[4]+0x00000004u,c->r[0]); // 803B3250
  c->r[0]=R32(c->r[7]+0x0000000Cu); // 803B3254
  W32(c->r[4]+0x00000008u,c->r[0]); // 803B3258
  c->r[0]=R32(c->r[7]+0x00000010u); // 803B325C
  W32(c->r[4]+0x0000000Cu,c->r[0]); // 803B3260
  c->r[0]=R32(c->r[7]+0x00000014u); // 803B3264
  W32(c->r[4]+0x00000010u,c->r[0]); // 803B3268
  c->r[3]=R32(c->r[7]+0x00000004u); // 803B326C
  cmps(c,0,(int32_t)c->r[3],0); // 803B3270
  if (crb(c,2)) { goto L_803B333C; } // 803B3274
  c->r[0]=R32(c->r[30]+0x00000000u); // 803B3278
  {uint32_t ea=c->r[3]+c->r[0]; c->r[8]=R16(ea); c->r[3]=ea;} // 803B327C
  c->r[0]=R16(c->r[3]+0x00000002u); // 803B3280
  W16(c->r[4]+0x00000014u,c->r[8]); // 803B3284
  W16(c->r[4]+0x00000016u,c->r[0]); // 803B3288
  c->r[8]=R16(c->r[3]+0x00000004u); // 803B328C
  c->r[0]=R16(c->r[3]+0x00000006u); // 803B3290
  W16(c->r[4]+0x00000018u,c->r[8]); // 803B3294
  W16(c->r[4]+0x0000001Au,c->r[0]); // 803B3298
  c->r[8]=R16(c->r[3]+0x00000008u); // 803B329C
  c->r[0]=R16(c->r[3]+0x0000000Au); // 803B32A0
  W16(c->r[4]+0x0000001Cu,c->r[8]); // 803B32A4
  W16(c->r[4]+0x0000001Eu,c->r[0]); // 803B32A8
  c->r[8]=R16(c->r[3]+0x0000000Cu); // 803B32AC
  c->r[0]=R16(c->r[3]+0x0000000Eu); // 803B32B0
  W16(c->r[4]+0x00000020u,c->r[8]); // 803B32B4
  W16(c->r[4]+0x00000022u,c->r[0]); // 803B32B8
  c->r[8]=R16(c->r[3]+0x00000010u); // 803B32BC
  c->r[0]=R16(c->r[3]+0x00000012u); // 803B32C0
  W16(c->r[4]+0x00000024u,c->r[8]); // 803B32C4
  W16(c->r[4]+0x00000026u,c->r[0]); // 803B32C8
  c->r[8]=R16(c->r[3]+0x00000014u); // 803B32CC
  c->r[0]=R16(c->r[3]+0x00000016u); // 803B32D0
  W16(c->r[4]+0x00000028u,c->r[8]); // 803B32D4
  W16(c->r[4]+0x0000002Au,c->r[0]); // 803B32D8
  c->r[8]=R16(c->r[3]+0x00000018u); // 803B32DC
  c->r[0]=R16(c->r[3]+0x0000001Au); // 803B32E0
  W16(c->r[4]+0x0000002Cu,c->r[8]); // 803B32E4
  W16(c->r[4]+0x0000002Eu,c->r[0]); // 803B32E8
  c->r[8]=R16(c->r[3]+0x0000001Cu); // 803B32EC
  c->r[0]=R16(c->r[3]+0x0000001Eu); // 803B32F0
  W16(c->r[4]+0x00000030u,c->r[8]); // 803B32F4
  W16(c->r[4]+0x00000032u,c->r[0]); // 803B32F8
  c->r[8]=R16(c->r[3]+0x00000020u); // 803B32FC
  c->r[0]=R16(c->r[3]+0x00000022u); // 803B3300
  W16(c->r[4]+0x00000034u,c->r[8]); // 803B3304
  W16(c->r[4]+0x00000036u,c->r[0]); // 803B3308
  c->r[8]=R16(c->r[3]+0x00000024u); // 803B330C
  c->r[0]=R16(c->r[3]+0x00000026u); // 803B3310
  W16(c->r[4]+0x00000038u,c->r[8]); // 803B3314
  W16(c->r[4]+0x0000003Au,c->r[0]); // 803B3318
  c->r[0]=R16(c->r[3]+0x00000028u); // 803B331C
  W16(c->r[4]+0x0000003Cu,c->r[0]); // 803B3320
  c->r[0]=R16(c->r[3]+0x0000002Au); // 803B3324
  W16(c->r[4]+0x0000003Eu,c->r[0]); // 803B3328
  c->r[0]=R16(c->r[3]+0x0000002Cu); // 803B332C
  W16(c->r[4]+0x00000040u,c->r[0]); // 803B3330
  c->r[0]=R16(c->r[3]+0x0000002Eu); // 803B3334
  W16(c->r[4]+0x00000042u,c->r[0]); // 803B3338
L_803B333C:;
  c->r[8]=R32(c->r[30]+0x00000000u); // 803B333C
  c->r[5]=c->r[5]+0x00000004u; // 803B3340
  c->r[3]=R32(c->r[7]+0x00000000u); // 803B3344
  c->r[6]=c->r[6]+0x00000001u; // 803B3348
  c->r[0]=R32(c->r[8]+0x00000014u); // 803B334C
  c->r[0]=c->r[0]+c->r[31]; // 803B3350
  c->r[0]=c->r[3]+c->r[0]; // 803B3354
  W32(c->r[4]+0x00000000u,c->r[0]); // 803B3358
  c->r[4]=c->r[4]+0x00000044u; // 803B335C
L_803B3360:;
  c->r[3]=R32(c->r[30]+0x00000000u); // 803B3360
  c->r[0]=R8(c->r[3]+0x00000002u); // 803B3364
  cmps(c,0,(int32_t)c->r[6],(int32_t)c->r[0]); // 803B3368
  if (crb(c,0)) { IRQCHK(c); goto L_803B3244; } // 803B336C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 803B3370
  c->r[3]=0u+0x00000001u; // 803B3374
  c->r[30]=R32(c->r[1]+0x00000018u); // 803B3378
  c->r[29]=R32(c->r[1]+0x00000014u); // 803B337C
  c->r[28]=R32(c->r[1]+0x00000010u); // 803B3380
  c->r[0]=R32(c->r[1]+0x00000024u); // 803B3384
  c->lr=c->r[0]; // 803B3388
  c->r[1]=c->r[1]+0x00000020u; // 803B338C
  return; // 803B3390
}

// fn_803B3394
void f_803B3394(Ctx* __restrict c) {
  trace_call(0x803B3394u);
  cmpu(c,0,c->r[3],0x00000001u); // 803B3394
  if (!crb(c,2)) { goto L_803B33A4; } // 803B3398
  c->r[3]=0u+0x0000000Au; // 803B339C
  return; // 803B33A0
L_803B33A4:;
  cmps(c,0,(int32_t)c->r[3],0); // 803B33A4
  c->r[3]=0u+0x00000000u; // 803B33A8
  if (!crb(c,2)) return; // 803B33AC
  c->r[3]=0u+0x00000019u; // 803B33B0
  return; // 803B33B4
}

// fn_803B33B8
void f_803B33B8(Ctx* __restrict c) {
  trace_call(0x803B33B8u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803B33B8
  c->r[0]=c->lr; // 803B33BC
  W32(c->r[1]+0x00000014u,c->r[0]); // 803B33C0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 803B33C4
  c->r[31]=c->r[4]|c->r[4]; // 803B33C8
  W32(c->r[1]+0x00000008u,c->r[30]); // 803B33CC
  c->r[30]=c->r[3]|c->r[3]; // 803B33D0
  c->lr=0x803B33D8u; f_8039BA94(c); // 803B33D4
  c->r[4]=0u+0x80430000u; // 803B33D8
  c->r[3]=c->r[30]+0x000000D8u; // 803B33DC
  c->r[4]=c->r[4]+0x00007690u; // 803B33E0
  W32(c->r[30]+0x00000000u,c->r[4]); // 803B33E4
  c->lr=0x803B33ECu; f_803B3B98(c); // 803B33E8
  c->r[0]=0u+0x00000000u; // 803B33EC
  W32(c->r[30]+0x000001B4u,c->r[31]); // 803B33F0
  c->r[3]=c->r[30]|c->r[30]; // 803B33F4
  W32(c->r[30]+0x000001B0u,c->r[0]); // 803B33F8
  W8(c->r[30]+0x000001B8u,c->r[0]); // 803B33FC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 803B3400
  c->r[30]=R32(c->r[1]+0x00000008u); // 803B3404
  c->r[0]=R32(c->r[1]+0x00000014u); // 803B3408
  c->lr=c->r[0]; // 803B340C
  c->r[1]=c->r[1]+0x00000010u; // 803B3410
  return; // 803B3414
}

// fn_803B3418
void f_803B3418(Ctx* __restrict c) {
  trace_call(0x803B3418u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803B3418
  c->r[0]=c->lr; // 803B341C
  cmps(c,0,(int32_t)c->r[3],0); // 803B3420
  W32(c->r[1]+0x00000014u,c->r[0]); // 803B3424
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 803B3428
  c->r[31]=c->r[3]|c->r[3]; // 803B342C
  if (crb(c,2)) { goto L_803B3440; } // 803B3430
  cmps(c,0,(int32_t)c->r[4],0); // 803B3434
  if (!crb(c,1)) { goto L_803B3440; } // 803B3438
  c->lr=0x803B3440u; f_802896EC(c); // 803B343C
L_803B3440:;
  c->r[3]=c->r[31]|c->r[31]; // 803B3440
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 803B3444
  c->r[0]=R32(c->r[1]+0x00000014u); // 803B3448
  c->lr=c->r[0]; // 803B344C
  c->r[1]=c->r[1]+0x00000010u; // 803B3450
  return; // 803B3454
}

// fn_803B3458
void f_803B3458(Ctx* __restrict c) {
  trace_call(0x803B3458u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803B3458
  c->r[0]=c->lr; // 803B345C
  W32(c->r[1]+0x00000034u,c->r[0]); // 803B3460
  c->r[11]=c->r[1]+0x00000030u; // 803B3464
  c->lr=0x803B346Cu; { W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 803B3468
  c->r[12]=R32(c->r[3]+0x00000000u); // 803B346C
  c->r[24]=c->r[3]|c->r[3]; // 803B3470
  c->r[25]=c->r[4]|c->r[4]; // 803B3474
  c->r[26]=c->r[5]|c->r[5]; // 803B3478
  c->r[12]=R32(c->r[12]+0x00000064u); // 803B347C
  c->r[27]=c->r[6]|c->r[6]; // 803B3480
  c->r[28]=c->r[7]|c->r[7]; // 803B3484
  c->r[29]=c->r[8]|c->r[8]; // 803B3488
  c->r[30]=c->r[9]|c->r[9]; // 803B348C
  c->r[31]=c->r[10]|c->r[10]; // 803B3490
  c->ctr=c->r[12]; // 803B3494
  if (true) { c->lr=0x803B349Cu; dispatch(c,c->ctr); } // 803B3498
  c->r[4]=c->r[25]|c->r[25]; // 803B349C
  c->r[5]=c->r[26]|c->r[26]; // 803B34A0
  c->r[6]=c->r[27]|c->r[27]; // 803B34A4
  c->r[7]=c->r[28]|c->r[28]; // 803B34A8
  c->r[8]=c->r[29]|c->r[29]; // 803B34AC
  c->r[9]=c->r[30]|c->r[30]; // 803B34B0
  c->r[10]=c->r[31]|c->r[31]; // 803B34B4
  c->r[3]=c->r[24]+0x000000D8u; // 803B34B8
  c->lr=0x803B34C0u; f_803B3CAC(c); // 803B34BC
  cmps(c,0,(int32_t)c->r[3],0); // 803B34C0
  if (!crb(c,2)) { goto L_803B34D0; } // 803B34C4
  c->r[3]=0u+0x00000000u; // 803B34C8
  goto L_803B34DC; // 803B34CC
L_803B34D0:;
  c->r[0]=0u+0x00000001u; // 803B34D0
  c->r[3]=0u+0x00000001u; // 803B34D4
  W8(c->r[24]+0x000001B8u,c->r[0]); // 803B34D8
L_803B34DC:;
  c->r[11]=c->r[1]+0x00000030u; // 803B34DC
  c->lr=0x803B34E4u; { c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 803B34E0
  c->r[0]=R32(c->r[1]+0x00000034u); // 803B34E4
  c->lr=c->r[0]; // 803B34E8
  c->r[1]=c->r[1]+0x00000030u; // 803B34EC
  return; // 803B34F0
}

// fn_803B34F4
void f_803B34F4(Ctx* __restrict c) {
  trace_call(0x803B34F4u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803B34F4
  c->r[0]=c->lr; // 803B34F8
  W32(c->r[1]+0x00000024u,c->r[0]); // 803B34FC
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 803B3500
  W32(c->r[1]+0x00000018u,c->r[30]); // 803B3504
  W32(c->r[1]+0x00000014u,c->r[29]); // 803B3508
  c->r[29]=c->r[3]|c->r[3]; // 803B350C
  c->lr=0x803B3514u; f_8039C72C(c); // 803B3510
  c->r[30]=R32(c->r[29]+0x000001B4u); // 803B3514
  c->r[31]=c->r[30]+0x00000010u; // 803B3518
  c->r[3]=c->r[31]|c->r[31]; // 803B351C
  c->lr=0x803B3524u; f_8025FCCC(c); // 803B3520
  c->r[0]=R32(c->r[30]+0x00000004u); // 803B3524
  cmps(c,0,(int32_t)c->r[0],0); // 803B3528
  if (!crb(c,2)) { goto L_803B353C; } // 803B352C
  c->r[3]=c->r[31]|c->r[31]; // 803B3530
  c->lr=0x803B3538u; f_8025FDA8(c); // 803B3534
  goto L_803B3574; // 803B3538
L_803B353C:;
  c->r[3]=c->r[30]+0x00000004u; // 803B353C
  c->r[4]=c->r[29]+0x000000B8u; // 803B3540
  c->lr=0x803B3548u; f_803B50E0(c); // 803B3544
  c->r[12]=R32(c->r[29]+0x00000000u); // 803B3548
  c->r[3]=c->r[29]|c->r[29]; // 803B354C
  c->r[4]=0u+0xFFFFFFFFu; // 803B3550
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 803B3554
  c->ctr=c->r[12]; // 803B3558
  if (true) { c->lr=0x803B3560u; dispatch(c,c->ctr); } // 803B355C
  c->r[3]=c->r[30]|c->r[30]; // 803B3560
  c->r[4]=c->r[29]|c->r[29]; // 803B3564
  c->lr=0x803B356Cu; f_803A0A9C(c); // 803B3568
  c->r[3]=c->r[31]|c->r[31]; // 803B356C
  c->lr=0x803B3574u; f_8025FDA8(c); // 803B3570
L_803B3574:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 803B3574
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 803B3578
  c->r[30]=R32(c->r[1]+0x00000018u); // 803B357C
  c->r[29]=R32(c->r[1]+0x00000014u); // 803B3580
  c->lr=c->r[0]; // 803B3584
  c->r[1]=c->r[1]+0x00000020u; // 803B3588
  return; // 803B358C
}

// fn_803B3590
void f_803B3590(Ctx* __restrict c) {
  trace_call(0x803B3590u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803B3590
  c->r[0]=c->lr; // 803B3594
  cmps(c,0,(int32_t)c->r[3],0); // 803B3598
  W32(c->r[1]+0x00000014u,c->r[0]); // 803B359C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 803B35A0
  c->r[31]=c->r[3]|c->r[3]; // 803B35A4
  if (crb(c,2)) { goto L_803B35B8; } // 803B35A8
  cmps(c,0,(int32_t)c->r[4],0); // 803B35AC
  if (!crb(c,1)) { goto L_803B35B8; } // 803B35B0
  c->lr=0x803B35B8u; f_802896EC(c); // 803B35B4
L_803B35B8:;
  c->r[3]=c->r[31]|c->r[31]; // 803B35B8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 803B35BC
  c->r[0]=R32(c->r[1]+0x00000014u); // 803B35C0
  c->lr=c->r[0]; // 803B35C4
  c->r[1]=c->r[1]+0x00000010u; // 803B35C8
  return; // 803B35CC
}

// fn_803B35D0
void f_803B35D0(Ctx* __restrict c) {
  trace_call(0x803B35D0u);
  c->r[3]=c->r[3]+0x000000D8u; // 803B35D0
  f_803B4094(c); return; // 803B35D4
}

// fn_803B35D8
void f_803B35D8(Ctx* __restrict c) {
  trace_call(0x803B35D8u);
  c->r[3]=c->r[3]+0x000000D8u; // 803B35D8
  f_803B409C(c); return; // 803B35DC
}

// fn_803B35E0
void f_803B35E0(Ctx* __restrict c) {
  trace_call(0x803B35E0u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803B35E0
  c->r[0]=c->lr; // 803B35E4
  W32(c->r[1]+0x00000024u,c->r[0]); // 803B35E8
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 803B35EC
  W32(c->r[1]+0x00000018u,c->r[30]); // 803B35F0
  W32(c->r[1]+0x00000014u,c->r[29]); // 803B35F4
  W32(c->r[1]+0x00000010u,c->r[28]); // 803B35F8
  c->r[28]=c->r[3]|c->r[3]; // 803B35FC
  c->lr=0x803B3604u; f_8039C89C(c); // 803B3600
  c->r[3]=R8(c->r[28]+0x00000074u); // 803B3604
  c->r[0]=R32(c->r[28]+0x00000040u); // 803B3608
  c->r[3]=c->r[3]+c->r[0]; // 803B360C
  cmps(c,0,(int32_t)c->r[3],127); // 803B3610
  if (!crb(c,1)) { goto L_803B3620; } // 803B3614
  c->r[29]=0u+0x0000007Fu; // 803B3618
  goto L_803B3628; // 803B361C
L_803B3620:;
  c->r[0]=sraw(c,c->r[3],31); // 803B3620
  c->r[29]=c->r[3]&~c->r[0]; // 803B3624
L_803B3628:;
  c->r[30]=R32(c->r[28]+0x000001B4u); // 803B3628
  c->r[31]=c->r[30]+0x00000010u; // 803B362C
  c->r[3]=c->r[31]|c->r[31]; // 803B3630
  c->lr=0x803B3638u; f_8025FCCC(c); // 803B3634
  c->r[28]=c->r[28]+0x000000B8u; // 803B3638
  c->r[3]=c->r[30]+0x00000004u; // 803B363C
  c->r[4]=c->r[28]|c->r[28]; // 803B3640
  c->lr=0x803B3648u; f_803B50E0(c); // 803B3644
  c->r[3]=R32(c->r[30]+0x00000008u); // 803B3648
  c->r[0]=c->r[30]+0x00000008u; // 803B364C
  goto L_803B3684; // 803B3650
L_803B3654:;
  c->r[5]=R8(c->r[3]+0xFFFFFFBCu); // 803B3654
  c->r[4]=R32(c->r[3]+0xFFFFFF88u); // 803B3658
  c->r[5]=c->r[5]+c->r[4]; // 803B365C
  cmps(c,0,(int32_t)c->r[5],127); // 803B3660
  if (!crb(c,1)) { goto L_803B3670; } // 803B3664
  c->r[4]=0u+0x0000007Fu; // 803B3668
  goto L_803B3678; // 803B366C
L_803B3670:;
  c->r[4]=sraw(c,c->r[5],31); // 803B3670
  c->r[4]=c->r[5]&~c->r[4]; // 803B3674
L_803B3678:;
  cmps(c,0,(int32_t)c->r[29],(int32_t)c->r[4]); // 803B3678
  if (crb(c,0)) { goto L_803B368C; } // 803B367C
  c->r[3]=R32(c->r[3]+0x00000000u); // 803B3680
L_803B3684:;
  cmpu(c,0,c->r[3],c->r[0]); // 803B3684
  if (!crb(c,2)) { IRQCHK(c); goto L_803B3654; } // 803B3688
L_803B368C:;
  W32(c->r[1]+0x00000008u,c->r[3]); // 803B368C
  c->r[5]=c->r[28]|c->r[28]; // 803B3690
  c->r[3]=c->r[30]+0x00000004u; // 803B3694
  c->r[4]=c->r[1]+0x00000008u; // 803B3698
  c->lr=0x803B36A0u; f_803B50B4(c); // 803B369C
  c->r[3]=c->r[31]|c->r[31]; // 803B36A0
  c->lr=0x803B36A8u; f_8025FDA8(c); // 803B36A4
  c->r[0]=R32(c->r[1]+0x00000024u); // 803B36A8
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 803B36AC
  c->r[30]=R32(c->r[1]+0x00000018u); // 803B36B0
  c->r[29]=R32(c->r[1]+0x00000014u); // 803B36B4
  c->r[28]=R32(c->r[1]+0x00000010u); // 803B36B8
  c->lr=c->r[0]; // 803B36BC
  c->r[1]=c->r[1]+0x00000020u; // 803B36C0
  return; // 803B36C4
}

// fn_803B36C8
void f_803B36C8(Ctx* __restrict c) {
  trace_call(0x803B36C8u);
  c->r[3]=R32(c->r[3]+0x000001B0u); // 803B36C8
  c->r[0]=0u-c->r[3]; // 803B36CC
  c->r[0]=c->r[0]|c->r[3]; // 803B36D0
  c->r[3]=rotl(c->r[0],1)&0x00000001u; // 803B36D4
  return; // 803B36D8
}

// fn_803B36DC
void f_803B36DC(Ctx* __restrict c) {
  trace_call(0x803B36DCu);
  c->r[3]=R32(c->r[3]+0x000001B0u); // 803B36DC
  f_803B3818(c); return; // 803B36E0
}

// fn_803B36E4
void f_803B36E4(Ctx* __restrict c) {
  trace_call(0x803B36E4u);
  c->r[3]=c->r[3]+0x000000D8u; // 803B36E4
  return; // 803B36E8
}

// fn_803B36EC
void f_803B36EC(Ctx* __restrict c) {
  trace_call(0x803B36ECu);
  c->r[3]=c->r[3]+0x000000D8u; // 803B36EC
  return; // 803B36F0
}

// fn_803B36F4
void f_803B36F4(Ctx* __restrict c) {
  trace_call(0x803B36F4u);
  c->r[3]=R8(c->r[3]+0x000001B8u); // 803B36F4
  return; // 803B36F8
}

// fn_803B36FC
void f_803B36FC(Ctx* __restrict c) {
  trace_call(0x803B36FCu);
  c->r[3]=c->r[13]+0xFFFFA090u; // 803B36FC
  return; // 803B3700
}

// fn_803B3704
void f_803B3704(Ctx* __restrict c) {
  trace_call(0x803B3704u);
  c->r[0]=c->r[13]+0xFFFF9FE0u; // 803B3704
  W32(c->r[13]+0xFFFFA090u,c->r[0]); // 803B3708
  return; // 803B370C
}

// fn_803B3710
void f_803B3710(Ctx* __restrict c) {
  trace_call(0x803B3710u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803B3710
  c->r[0]=c->lr; // 803B3714
  cmps(c,0,(int32_t)c->r[4],0); // 803B3718
  W32(c->r[1]+0x00000024u,c->r[0]); // 803B371C
  c->r[0]=0u+0x00000000u; // 803B3720
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 803B3724
  W32(c->r[1]+0x00000018u,c->r[30]); // 803B3728
  W32(c->r[1]+0x00000014u,c->r[29]); // 803B372C
  c->r[29]=c->r[3]|c->r[3]; // 803B3730
  W32(c->r[3]+0x00000000u,c->r[0]); // 803B3734
  if (!crb(c,2)) { goto L_803B3740; } // 803B3738
  goto L_803B37FC; // 803B373C
L_803B3740:;
  c->r[30]=R32(c->r[4]+0x00000000u); // 803B3740
  cmps(c,0,(int32_t)c->r[30],0); // 803B3744
  if (!crb(c,2)) { goto L_803B3750; } // 803B3748
  goto L_803B37FC; // 803B374C
L_803B3750:;
  c->r[12]=R32(c->r[30]+0x00000000u); // 803B3750
  c->r[3]=c->r[30]|c->r[30]; // 803B3754
  c->r[31]=c->r[13]+0xFFFFA090u; // 803B3758
  c->r[12]=R32(c->r[12]+0x00000008u); // 803B375C
  c->ctr=c->r[12]; // 803B3760
  if (true) { c->lr=0x803B3768u; dispatch(c,c->ctr); } // 803B3764
  goto L_803B3780; // 803B3768
L_803B376C:;
  cmpu(c,0,c->r[3],c->r[31]); // 803B376C
  if (!crb(c,2)) { goto L_803B377C; } // 803B3770
  c->r[0]=0u+0x00000001u; // 803B3774
  goto L_803B378C; // 803B3778
L_803B377C:;
  c->r[3]=R32(c->r[3]+0x00000000u); // 803B377C
L_803B3780:;
  cmps(c,0,(int32_t)c->r[3],0); // 803B3780
  if (!crb(c,2)) { IRQCHK(c); goto L_803B376C; } // 803B3784
  c->r[0]=0u+0x00000000u; // 803B3788
L_803B378C:;
  cmps(c,0,(int32_t)c->r[0],0); // 803B378C
  if (crb(c,2)) { goto L_803B3798; } // 803B3790
  goto L_803B379C; // 803B3794
L_803B3798:;
  c->r[30]=0u+0x00000000u; // 803B3798
L_803B379C:;
  cmps(c,0,(int32_t)c->r[30],0); // 803B379C
  if (crb(c,2)) { goto L_803B37F8; } // 803B37A0
  W32(c->r[29]+0x00000000u,c->r[30]); // 803B37A4
  c->r[3]=c->r[30]|c->r[30]; // 803B37A8
  c->lr=0x803B37B0u; f_8039CBAC(c); // 803B37AC
  cmps(c,0,(int32_t)c->r[3],0); // 803B37B0
  if (crb(c,2)) { goto L_803B37C0; } // 803B37B4
  c->r[3]=R32(c->r[29]+0x00000000u); // 803B37B8
  c->lr=0x803B37C0u; f_8039CBC8(c); // 803B37BC
L_803B37C0:;
  c->r[3]=R32(c->r[29]+0x00000000u); // 803B37C0
  c->r[12]=R32(c->r[3]+0x00000000u); // 803B37C4
  c->r[12]=R32(c->r[12]+0x0000005Cu); // 803B37C8
  c->ctr=c->r[12]; // 803B37CC
  if (true) { c->lr=0x803B37D4u; dispatch(c,c->ctr); } // 803B37D0
  cmps(c,0,(int32_t)c->r[3],0); // 803B37D4
  if (crb(c,2)) { goto L_803B37F0; } // 803B37D8
  c->r[3]=R32(c->r[29]+0x00000000u); // 803B37DC
  c->r[12]=R32(c->r[3]+0x00000000u); // 803B37E0
  c->r[12]=R32(c->r[12]+0x00000060u); // 803B37E4
  c->ctr=c->r[12]; // 803B37E8
  if (true) { c->lr=0x803B37F0u; dispatch(c,c->ctr); } // 803B37EC
L_803B37F0:;
  c->r[3]=R32(c->r[29]+0x00000000u); // 803B37F0
  W32(c->r[3]+0x000001B0u,c->r[29]); // 803B37F4
L_803B37F8:;
  c->r[3]=c->r[29]|c->r[29]; // 803B37F8
L_803B37FC:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 803B37FC
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 803B3800
  c->r[30]=R32(c->r[1]+0x00000018u); // 803B3804
  c->r[29]=R32(c->r[1]+0x00000014u); // 803B3808
  c->lr=c->r[0]; // 803B380C
  c->r[1]=c->r[1]+0x00000020u; // 803B3810
  return; // 803B3814
}

// fn_803B3818
void f_803B3818(Ctx* __restrict c) {
  trace_call(0x803B3818u);
  c->r[4]=R32(c->r[3]+0x00000000u); // 803B3818
  cmps(c,0,(int32_t)c->r[4],0); // 803B381C
  if (crb(c,2)) { goto L_803B3838; } // 803B3820
  c->r[0]=R32(c->r[4]+0x000001B0u); // 803B3824
  cmpu(c,0,c->r[0],c->r[3]); // 803B3828
  if (!crb(c,2)) { goto L_803B3838; } // 803B382C
  c->r[0]=0u+0x00000000u; // 803B3830
  W32(c->r[4]+0x000001B0u,c->r[0]); // 803B3834
L_803B3838:;
  c->r[0]=R32(c->r[3]+0x00000000u); // 803B3838
  cmps(c,0,(int32_t)c->r[0],0); // 803B383C
  if (crb(c,2)) return; // 803B3840
  c->r[0]=0u+0x00000000u; // 803B3844
  W32(c->r[3]+0x00000000u,c->r[0]); // 803B3848
  return; // 803B384C
}

// fn_803B3850
void f_803B3850(Ctx* __restrict c) {
  trace_call(0x803B3850u);
  c->r[5]=R32(c->r[4]+0x00000000u); // 803B3850
  c->r[6]=0u+0x00000000u; // 803B3854
  W32(c->r[3]+0x00000000u,c->r[6]); // 803B3858
  c->r[0]=c->r[5]+0xADA90000u; // 803B385C
  cmpu(c,0,c->r[0],0x00005344u); // 803B3860
  W32(c->r[3]+0x00000004u,c->r[6]); // 803B3864
  W32(c->r[3]+0x00000008u,c->r[6]); // 803B3868
  if (crb(c,2)) { goto L_803B3878; } // 803B386C
  c->r[0]=0u+0x00000000u; // 803B3870
  goto L_803B38A4; // 803B3874
L_803B3878:;
  c->r[6]=R16(c->r[4]+0x00000006u); // 803B3878
  cmpu(c,0,c->r[6],0x00000100u); // 803B387C
  if (!crb(c,0)) { goto L_803B388C; } // 803B3880
  c->r[0]=0u+0x00000000u; // 803B3884
  goto L_803B38A4; // 803B3888
L_803B388C:;
  c->r[0]=addc(c,~c->r[6],0x00000102u,1); // 803B388C
  c->r[5]=0u+0x00000102u; // 803B3890
  c->r[5]=c->r[5]|~c->r[6]; // 803B3894
  c->r[0]=rotl(c->r[0],31)&0x7FFFFFFFu; // 803B3898
  c->r[0]=c->r[5]-c->r[0]; // 803B389C
  c->r[0]=rotl(c->r[0],1)&0x00000001u; // 803B38A0
L_803B38A4:;
  cmps(c,0,(int32_t)c->r[0],0); // 803B38A4
  if (crb(c,2)) return; // 803B38A8
  c->r[5]=R32(c->r[4]+0x00000010u); // 803B38AC
  c->r[0]=R32(c->r[4]+0x00000018u); // 803B38B0
  c->r[5]=c->r[5]+c->r[4]; // 803B38B4
  W32(c->r[3]+0x00000000u,c->r[4]); // 803B38B8
  c->r[0]=c->r[0]+c->r[4]; // 803B38BC
  W32(c->r[3]+0x00000004u,c->r[5]); // 803B38C0
  W32(c->r[3]+0x00000008u,c->r[0]); // 803B38C4
  return; // 803B38C8
}

// fn_803B38CC
void f_803B38CC(Ctx* __restrict c) {
  trace_call(0x803B38CCu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803B38CC
  c->r[0]=c->lr; // 803B38D0
  c->r[6]=R32(c->r[3]+0x00000004u); // 803B38D4
  W32(c->r[1]+0x00000014u,c->r[0]); // 803B38D8
  c->r[0]=rotl(c->r[5],3)&0xFFFFFFF8u; // 803B38DC
  c->r[5]=c->r[6]+0x00000008u; // 803B38E0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 803B38E4
  c->r[31]=c->r[4]|c->r[4]; // 803B38E8
  c->r[4]=c->r[6]+c->r[0]; // 803B38EC
  W32(c->r[1]+0x00000008u,c->r[30]); // 803B38F0
  c->r[30]=c->r[3]|c->r[3]; // 803B38F4
  c->r[3]=R8(c->r[4]+0x0000000Cu); // 803B38F8
  c->r[4]=R32(c->r[4]+0x00000010u); // 803B38FC
  c->lr=0x803B3904u; f_803B3154(c); // 803B3900
  c->r[4]=c->r[3]|c->r[3]; // 803B3904
  c->r[5]=R32(c->r[30]+0x00000004u); // 803B3908
  c->r[3]=R8(c->r[3]+0x00000000u); // 803B390C
  c->r[4]=R32(c->r[4]+0x00000004u); // 803B3910
  c->r[5]=c->r[5]+0x00000008u; // 803B3914
  c->lr=0x803B391Cu; f_803B3154(c); // 803B3918
  c->r[4]=R32(c->r[30]+0x00000000u); // 803B391C
  c->r[0]=R16(c->r[4]+0x00000006u); // 803B3920
  cmpu(c,0,c->r[0],0x00000102u); // 803B3924
  if (!crb(c,2)) { goto L_803B3968; } // 803B3928
  {uint32_t ea=c->r[3]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 803B392C
  {uint32_t ea=c->r[31]+0x00000000u; WF32(ea,c->f[0]);} // 803B3930
  c->r[0]=R8(c->r[3]+0x00000004u); // 803B3934
  W8(c->r[31]+0x00000004u,c->r[0]); // 803B3938
  c->r[0]=R8(c->r[3]+0x00000005u); // 803B393C
  W8(c->r[31]+0x00000005u,c->r[0]); // 803B3940
  c->r[0]=R8(c->r[3]+0x00000006u); // 803B3944
  W8(c->r[31]+0x00000006u,c->r[0]); // 803B3948
  c->r[0]=R8(c->r[3]+0x00000007u); // 803B394C
  W8(c->r[31]+0x00000007u,c->r[0]); // 803B3950
  c->r[0]=R8(c->r[3]+0x00000008u); // 803B3954
  W8(c->r[31]+0x00000008u,c->r[0]); // 803B3958
  c->r[0]=R8(c->r[3]+0x00000009u); // 803B395C
  W8(c->r[31]+0x00000009u,c->r[0]); // 803B3960
  goto L_803B39D0; // 803B3964
L_803B3968:;
  cmpu(c,0,c->r[0],0x00000101u); // 803B3968
  if (!crb(c,2)) { goto L_803B39A4; } // 803B396C
  {uint32_t ea=c->r[3]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 803B3970
  c->r[4]=0u+0x00000000u; // 803B3974
  c->r[0]=0u+0x0000007Fu; // 803B3978
  {uint32_t ea=c->r[31]+0x00000000u; WF32(ea,c->f[0]);} // 803B397C
  c->r[5]=R8(c->r[3]+0x00000004u); // 803B3980
  W8(c->r[31]+0x00000004u,c->r[5]); // 803B3984
  c->r[3]=R8(c->r[3]+0x00000005u); // 803B3988
  W8(c->r[31]+0x00000005u,c->r[3]); // 803B398C
  W8(c->r[31]+0x00000006u,c->r[4]); // 803B3990
  W8(c->r[31]+0x00000007u,c->r[4]); // 803B3994
  W8(c->r[31]+0x00000008u,c->r[4]); // 803B3998
  W8(c->r[31]+0x00000009u,c->r[0]); // 803B399C
  goto L_803B39D0; // 803B39A0
L_803B39A4:;
  {uint32_t ea=c->r[2]+0xFFFFEFF0u; c->f[0]=c->ps1[0]=RF32(ea);} // 803B39A4
  c->r[3]=0u+0x00000000u; // 803B39A8
  c->r[4]=0u+0x00000040u; // 803B39AC
  c->r[0]=0u+0x0000007Fu; // 803B39B0
  {uint32_t ea=c->r[31]+0x00000000u; WF32(ea,c->f[0]);} // 803B39B4
  W8(c->r[31]+0x00000004u,c->r[4]); // 803B39B8
  W8(c->r[31]+0x00000005u,c->r[3]); // 803B39BC
  W8(c->r[31]+0x00000006u,c->r[3]); // 803B39C0
  W8(c->r[31]+0x00000007u,c->r[3]); // 803B39C4
  W8(c->r[31]+0x00000008u,c->r[3]); // 803B39C8
  W8(c->r[31]+0x00000009u,c->r[0]); // 803B39CC
L_803B39D0:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 803B39D0
  c->r[3]=0u+0x00000001u; // 803B39D4
  c->r[30]=R32(c->r[1]+0x00000008u); // 803B39D8
  c->r[0]=R32(c->r[1]+0x00000014u); // 803B39DC
  c->lr=c->r[0]; // 803B39E0
  c->r[1]=c->r[1]+0x00000010u; // 803B39E4
  return; // 803B39E8
}

// fn_803B39EC
void f_803B39EC(Ctx* __restrict c) {
  trace_call(0x803B39ECu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803B39EC
  c->r[0]=c->lr; // 803B39F0
  c->r[7]=R32(c->r[3]+0x00000004u); // 803B39F4
  W32(c->r[1]+0x00000024u,c->r[0]); // 803B39F8
  c->r[0]=rotl(c->r[5],3)&0xFFFFFFF8u; // 803B39FC
  c->r[5]=c->r[7]+0x00000008u; // 803B3A00
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 803B3A04
  c->r[31]=c->r[4]|c->r[4]; // 803B3A08
  c->r[4]=c->r[7]+c->r[0]; // 803B3A0C
  W32(c->r[1]+0x00000018u,c->r[30]); // 803B3A10
  c->r[30]=c->r[6]|c->r[6]; // 803B3A14
  W32(c->r[1]+0x00000014u,c->r[29]); // 803B3A18
  c->r[29]=c->r[3]|c->r[3]; // 803B3A1C
  c->r[3]=R8(c->r[4]+0x0000000Cu); // 803B3A20
  c->r[4]=R32(c->r[4]+0x00000010u); // 803B3A24
  c->lr=0x803B3A2Cu; f_803B3154(c); // 803B3A28
  c->r[4]=c->r[3]|c->r[3]; // 803B3A2C
  c->r[5]=R32(c->r[29]+0x00000004u); // 803B3A30
  c->r[3]=R8(c->r[3]+0x00000010u); // 803B3A34
  c->r[4]=R32(c->r[4]+0x00000014u); // 803B3A38
  c->r[5]=c->r[5]+0x00000008u; // 803B3A3C
  c->lr=0x803B3A44u; f_803B3154(c); // 803B3A40
  c->r[0]=rotl(c->r[30],3)&0xFFFFFFF8u; // 803B3A44
  c->r[4]=R32(c->r[29]+0x00000004u); // 803B3A48
  c->r[6]=c->r[3]+c->r[0]; // 803B3A4C
  c->r[5]=c->r[4]+0x00000008u; // 803B3A50
  c->r[3]=R8(c->r[6]+0x00000004u); // 803B3A54
  c->r[4]=R32(c->r[6]+0x00000008u); // 803B3A58
  c->lr=0x803B3A60u; f_803B3154(c); // 803B3A5C
  c->r[0]=R32(c->r[3]+0x00000000u); // 803B3A60
  c->r[4]=R32(c->r[29]+0x00000000u); // 803B3A64
  W32(c->r[31]+0x00000000u,c->r[0]); // 803B3A68
  c->r[0]=R8(c->r[3]+0x00000004u); // 803B3A6C
  W8(c->r[31]+0x00000004u,c->r[0]); // 803B3A70
  c->r[0]=R8(c->r[3]+0x00000005u); // 803B3A74
  W8(c->r[31]+0x00000005u,c->r[0]); // 803B3A78
  c->r[0]=R8(c->r[3]+0x00000006u); // 803B3A7C
  W8(c->r[31]+0x00000006u,c->r[0]); // 803B3A80
  c->r[0]=R8(c->r[3]+0x00000007u); // 803B3A84
  W8(c->r[31]+0x00000007u,c->r[0]); // 803B3A88
  c->r[0]=R8(c->r[3]+0x0000000Cu); // 803B3A8C
  W8(c->r[31]+0x00000008u,c->r[0]); // 803B3A90
  c->r[0]=R8(c->r[3]+0x0000000Du); // 803B3A94
  W8(c->r[31]+0x0000000Bu,c->r[0]); // 803B3A98
  c->r[0]=R16(c->r[4]+0x00000006u); // 803B3A9C
  cmpu(c,0,c->r[0],0x00000101u); // 803B3AA0
  if (crb(c,0)) { goto L_803B3AC4; } // 803B3AA4
  c->r[0]=R8(c->r[3]+0x0000000Eu); // 803B3AA8
  W8(c->r[31]+0x00000009u,c->r[0]); // 803B3AAC
  c->r[0]=R8(c->r[3]+0x0000000Fu); // 803B3AB0
  W8(c->r[31]+0x0000000Au,c->r[0]); // 803B3AB4
  {uint32_t ea=c->r[3]+0x00000010u; c->f[0]=c->ps1[0]=RF32(ea);} // 803B3AB8
  {uint32_t ea=c->r[31]+0x0000000Cu; WF32(ea,c->f[0]);} // 803B3ABC
  goto L_803B3ADC; // 803B3AC0
L_803B3AC4:;
  {uint32_t ea=c->r[2]+0xFFFFEFF0u; c->f[0]=c->ps1[0]=RF32(ea);} // 803B3AC4
  c->r[3]=0u+0x00000040u; // 803B3AC8
  c->r[0]=0u+0x00000000u; // 803B3ACC
  W8(c->r[31]+0x00000009u,c->r[3]); // 803B3AD0
  W8(c->r[31]+0x0000000Au,c->r[0]); // 803B3AD4
  {uint32_t ea=c->r[31]+0x0000000Cu; WF32(ea,c->f[0]);} // 803B3AD8
L_803B3ADC:;
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 803B3ADC
  c->r[3]=0u+0x00000001u; // 803B3AE0
  c->r[30]=R32(c->r[1]+0x00000018u); // 803B3AE4
  c->r[29]=R32(c->r[1]+0x00000014u); // 803B3AE8
  c->r[0]=R32(c->r[1]+0x00000024u); // 803B3AEC
  c->lr=c->r[0]; // 803B3AF0
  c->r[1]=c->r[1]+0x00000020u; // 803B3AF4
  return; // 803B3AF8
}

// ReadWaveParam__Q44nw4r3snd6detail13WsdFileReaderCFiPQ44nw4r3snd6detail8WaveDataPCv
void f_803B3AFC(Ctx* __restrict c) {
  trace_call(0x803B3AFCu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803B3AFC
  c->r[0]=c->lr; // 803B3B00
  c->r[7]=R32(c->r[3]+0x00000000u); // 803B3B04
  W32(c->r[1]+0x00000024u,c->r[0]); // 803B3B08
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 803B3B0C
  c->r[31]=c->r[6]|c->r[6]; // 803B3B10
  W32(c->r[1]+0x00000018u,c->r[30]); // 803B3B14
  c->r[30]=c->r[5]|c->r[5]; // 803B3B18
  c->r[0]=R16(c->r[7]+0x00000006u); // 803B3B1C
  cmpu(c,0,c->r[0],0x00000100u); // 803B3B20
  if (!crb(c,2)) { goto L_803B3B40; } // 803B3B24
  c->r[5]=R32(c->r[3]+0x00000008u); // 803B3B28
  c->r[0]=rotl(c->r[4],2)&0xFFFFFFFCu; // 803B3B2C
  c->r[3]=c->r[5]+c->r[0]; // 803B3B30
  c->r[0]=R32(c->r[3]+0x00000008u); // 803B3B34
  c->r[4]=c->r[0]+c->r[5]; // 803B3B38
  goto L_803B3B68; // 803B3B3C
L_803B3B40:;
  c->r[5]=R32(c->r[3]+0x00000008u); // 803B3B40
  c->r[0]=R32(c->r[5]+0x00000008u); // 803B3B44
  cmpu(c,0,c->r[4],c->r[0]); // 803B3B48
  if (crb(c,0)) { goto L_803B3B58; } // 803B3B4C
  c->r[3]=0u+0x00000000u; // 803B3B50
  goto L_803B3B80; // 803B3B54
L_803B3B58:;
  c->r[0]=rotl(c->r[4],2)&0xFFFFFFFCu; // 803B3B58
  c->r[3]=c->r[5]+c->r[0]; // 803B3B5C
  c->r[0]=R32(c->r[3]+0x0000000Cu); // 803B3B60
  c->r[4]=c->r[0]+c->r[5]; // 803B3B64
L_803B3B68:;
  c->r[3]=c->r[1]+0x00000008u; // 803B3B68
  c->lr=0x803B3B70u; f_803B3178(c); // 803B3B6C
  c->r[4]=c->r[30]|c->r[30]; // 803B3B70
  c->r[5]=c->r[31]|c->r[31]; // 803B3B74
  c->r[3]=c->r[1]+0x00000008u; // 803B3B78
  c->lr=0x803B3B80u; f_803B3180(c); // 803B3B7C
L_803B3B80:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 803B3B80
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 803B3B84
  c->r[30]=R32(c->r[1]+0x00000018u); // 803B3B88
  c->lr=c->r[0]; // 803B3B8C
  c->r[1]=c->r[1]+0x00000020u; // 803B3B90
  return; // 803B3B94
}

// __ct__Q44nw4r3snd6detail9WsdPlayerFv
void f_803B3B98(Ctx* __restrict c) {
  trace_call(0x803B3B98u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803B3B98
  c->r[0]=c->lr; // 803B3B9C
  W32(c->r[1]+0x00000014u,c->r[0]); // 803B3BA0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 803B3BA4
  c->r[31]=c->r[3]|c->r[3]; // 803B3BA8
  c->lr=0x803B3BB0u; f_8039B934(c); // 803B3BAC
  c->r[5]=0u+0x80430000u; // 803B3BB0
  c->r[6]=0u+0x00000000u; // 803B3BB4
  c->r[5]=c->r[5]+0x00007700u; // 803B3BB8
  W32(c->r[31]+0x00000074u,c->r[6]); // 803B3BBC
  c->r[4]=c->r[5]+0x00000024u; // 803B3BC0
  c->r[3]=c->r[31]+0x000000B8u; // 803B3BC4
  c->r[0]=c->r[5]+0x00000038u; // 803B3BC8
  W32(c->r[31]+0x00000078u,c->r[6]); // 803B3BCC
  W32(c->r[31]+0x00000080u,c->r[6]); // 803B3BD0
  W32(c->r[31]+0x00000084u,c->r[6]); // 803B3BD4
  W32(c->r[31]+0x00000000u,c->r[5]); // 803B3BD8
  W32(c->r[31]+0x0000007Cu,c->r[4]); // 803B3BDC
  W32(c->r[31]+0x00000088u,c->r[0]); // 803B3BE0
  W8(c->r[31]+0x0000008Cu,c->r[6]); // 803B3BE4
  c->lr=0x803B3BECu; f_803A0AE4(c); // 803B3BE8
  c->r[3]=c->r[31]|c->r[31]; // 803B3BEC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 803B3BF0
  c->r[0]=R32(c->r[1]+0x00000014u); // 803B3BF4
  c->lr=c->r[0]; // 803B3BF8
  c->r[1]=c->r[1]+0x00000010u; // 803B3BFC
  return; // 803B3C00
}

// InitParam__Q44nw4r3snd6detail9WsdPlayerFiPCQ54nw4r3snd6detail9WsdPlayer11WsdCallbackUl
void f_803B3C04(Ctx* __restrict c) {
  trace_call(0x803B3C04u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803B3C04
  c->r[0]=c->lr; // 803B3C08
  W32(c->r[1]+0x00000024u,c->r[0]); // 803B3C0C
  c->r[11]=c->r[1]+0x00000020u; // 803B3C10
  c->lr=0x803B3C18u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 803B3C14
  c->r[27]=c->r[3]|c->r[3]; // 803B3C18
  c->r[28]=c->r[4]|c->r[4]; // 803B3C1C
  c->r[29]=c->r[5]|c->r[5]; // 803B3C20
  c->r[30]=c->r[6]|c->r[6]; // 803B3C24
  c->lr=0x803B3C2Cu; f_8039B978(c); // 803B3C28
  {uint32_t ea=c->r[2]+0xFFFFEFF8u; c->f[0]=c->ps1[0]=RF32(ea);} // 803B3C2C
  c->r[31]=0u+0x00000000u; // 803B3C30
  c->r[5]=0u+0x00000040u; // 803B3C34
  c->r[4]=0u+0xFFFFFFFFu; // 803B3C38
  c->r[0]=0u+0x0000007Fu; // 803B3C3C
  W8(c->r[27]+0x0000008Du,c->r[31]); // 803B3C40
  c->r[3]=c->r[27]+0x000000B8u; // 803B3C44
  W8(c->r[27]+0x0000008Eu,c->r[31]); // 803B3C48
  W8(c->r[27]+0x00000090u,c->r[31]); // 803B3C4C
  {uint32_t ea=c->r[27]+0x00000094u; WF32(ea,c->f[0]);} // 803B3C50
  W32(c->r[27]+0x00000098u,c->r[28]); // 803B3C54
  W8(c->r[27]+0x0000009Cu,c->r[5]); // 803B3C58
  W32(c->r[27]+0x000000A0u,c->r[29]); // 803B3C5C
  W32(c->r[27]+0x000000A4u,c->r[30]); // 803B3C60
  W32(c->r[27]+0x000000A8u,c->r[31]); // 803B3C64
  W32(c->r[27]+0x000000ACu,c->r[4]); // 803B3C68
  {uint32_t ea=c->r[27]+0x000000C8u; WF32(ea,c->f[0]);} // 803B3C6C
  W8(c->r[27]+0x000000CCu,c->r[5]); // 803B3C70
  W8(c->r[27]+0x000000CDu,c->r[31]); // 803B3C74
  W8(c->r[27]+0x000000CEu,c->r[31]); // 803B3C78
  W8(c->r[27]+0x000000CFu,c->r[31]); // 803B3C7C
  W8(c->r[27]+0x000000D0u,c->r[31]); // 803B3C80
  W8(c->r[27]+0x000000D1u,c->r[0]); // 803B3C84
  c->lr=0x803B3C8Cu; f_803A0AE4(c); // 803B3C88
  W8(c->r[27]+0x0000008Fu,c->r[31]); // 803B3C8C
  c->r[11]=c->r[1]+0x00000020u; // 803B3C90
  W32(c->r[27]+0x000000D4u,c->r[31]); // 803B3C94
  c->lr=0x803B3C9Cu; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 803B3C98
  c->r[0]=R32(c->r[1]+0x00000024u); // 803B3C9C
  c->lr=c->r[0]; // 803B3CA0
  c->r[1]=c->r[1]+0x00000020u; // 803B3CA4
  return; // 803B3CA8
}

// Prepare__Q44nw4r3snd6detail9WsdPlayerFPCviQ54nw4r3snd6detail9WsdPlayer15StartOffsetTypeiiPCQ54nw4r3snd6detail9WsdPlayer11WsdCallbackUl
void f_803B3CAC(Ctx* __restrict c) {
  trace_call(0x803B3CACu);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803B3CAC
  c->r[0]=c->lr; // 803B3CB0
  W32(c->r[1]+0x00000034u,c->r[0]); // 803B3CB4
  c->r[11]=c->r[1]+0x00000030u; // 803B3CB8
  c->lr=0x803B3CC0u; { W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 803B3CBC
  c->r[24]=c->r[3]|c->r[3]; // 803B3CC0
  c->r[25]=c->r[4]|c->r[4]; // 803B3CC4
  c->r[26]=c->r[5]|c->r[5]; // 803B3CC8
  c->r[27]=c->r[6]|c->r[6]; // 803B3CCC
  c->r[28]=c->r[7]|c->r[7]; // 803B3CD0
  c->r[29]=c->r[8]|c->r[8]; // 803B3CD4
  c->r[30]=c->r[9]|c->r[9]; // 803B3CD8
  c->r[31]=c->r[10]|c->r[10]; // 803B3CDC
  c->lr=0x803B3CE4u; f_803ABEB8(c); // 803B3CE0
  c->r[3]=c->r[3]+0x00000354u; // 803B3CE4
  c->lr=0x803B3CECu; f_8025FCCC(c); // 803B3CE8
  c->r[0]=R8(c->r[24]+0x0000008Cu); // 803B3CEC
  cmps(c,0,(int32_t)c->r[0],0); // 803B3CF0
  if (crb(c,2)) { goto L_803B3DD8; } // 803B3CF4
  c->lr=0x803B3CFCu; f_803ABEB8(c); // 803B3CF8
  c->r[3]=c->r[3]+0x00000354u; // 803B3CFC
  c->lr=0x803B3D04u; f_8025FCCC(c); // 803B3D00
  c->r[0]=R8(c->r[24]+0x0000008Du); // 803B3D04
  cmps(c,0,(int32_t)c->r[0],0); // 803B3D08
  if (crb(c,2)) { goto L_803B3D34; } // 803B3D0C
  cmps(c,0,(int32_t)c->r[24],0); // 803B3D10
  c->r[23]=c->r[24]|c->r[24]; // 803B3D14
  if (crb(c,2)) { goto L_803B3D20; } // 803B3D18
  c->r[23]=c->r[24]+0x00000080u; // 803B3D1C
L_803B3D20:;
  c->lr=0x803B3D24u; f_803ABEB8(c); // 803B3D20
  c->r[4]=c->r[23]|c->r[23]; // 803B3D24
  c->lr=0x803B3D2Cu; f_803AC2EC(c); // 803B3D28
  c->r[0]=0u+0x00000000u; // 803B3D2C
  W8(c->r[24]+0x0000008Du,c->r[0]); // 803B3D30
L_803B3D34:;
  c->r[0]=R8(c->r[24]+0x0000008Cu); // 803B3D34
  cmps(c,0,(int32_t)c->r[0],0); // 803B3D38
  if (crb(c,2)) { goto L_803B3D64; } // 803B3D3C
  cmps(c,0,(int32_t)c->r[24],0); // 803B3D40
  c->r[23]=c->r[24]|c->r[24]; // 803B3D44
  if (crb(c,2)) { goto L_803B3D50; } // 803B3D48
  c->r[23]=c->r[24]+0x00000074u; // 803B3D4C
L_803B3D50:;
  c->lr=0x803B3D54u; f_8039DC24(c); // 803B3D50
  c->r[4]=c->r[23]|c->r[23]; // 803B3D54
  c->lr=0x803B3D5Cu; f_8039DD38(c); // 803B3D58
  c->r[0]=0u+0x00000000u; // 803B3D5C
  W8(c->r[24]+0x0000008Cu,c->r[0]); // 803B3D60
L_803B3D64:;
  c->lr=0x803B3D68u; f_803ABEB8(c); // 803B3D64
  c->r[3]=c->r[3]+0x00000354u; // 803B3D68
  c->lr=0x803B3D70u; f_8025FCCC(c); // 803B3D6C
  c->r[4]=R32(c->r[24]+0x000000D4u); // 803B3D70
  c->r[3]=0u+0x00000000u; // 803B3D74
  cmps(c,0,(int32_t)c->r[4],0); // 803B3D78
  if (crb(c,2)) { goto L_803B3D90; } // 803B3D7C
  c->r[0]=R8(c->r[4]+0x00000032u); // 803B3D80
  cmps(c,0,(int32_t)c->r[0],0); // 803B3D84
  if (crb(c,2)) { goto L_803B3D90; } // 803B3D88
  c->r[3]=0u+0x00000001u; // 803B3D8C
L_803B3D90:;
  cmps(c,0,(int32_t)c->r[3],0); // 803B3D90
  if (crb(c,2)) { goto L_803B3DA8; } // 803B3D94
  c->r[3]=c->r[24]|c->r[24]; // 803B3D98
  c->lr=0x803B3DA0u; f_803B4794(c); // 803B3D9C
  c->r[3]=R32(c->r[24]+0x000000D4u); // 803B3DA0
  c->lr=0x803B3DA8u; f_8039D73C(c); // 803B3DA4
L_803B3DA8:;
  c->r[3]=R32(c->r[24]+0x000000D4u); // 803B3DA8
  cmps(c,0,(int32_t)c->r[3],0); // 803B3DAC
  if (crb(c,2)) { goto L_803B3DB8; } // 803B3DB0
  c->lr=0x803B3DB8u; f_8039DC0C(c); // 803B3DB4
L_803B3DB8:;
  c->r[0]=0u+0x00000000u; // 803B3DB8
  W32(c->r[24]+0x000000D4u,c->r[0]); // 803B3DBC
  c->lr=0x803B3DC4u; f_803ABEB8(c); // 803B3DC0
  c->r[3]=c->r[3]+0x00000354u; // 803B3DC4
  c->lr=0x803B3DCCu; f_8025FDA8(c); // 803B3DC8
  c->lr=0x803B3DD0u; f_803ABEB8(c); // 803B3DCC
  c->r[3]=c->r[3]+0x00000354u; // 803B3DD0
  c->lr=0x803B3DD8u; f_8025FDA8(c); // 803B3DD4
L_803B3DD8:;
  c->r[3]=c->r[24]|c->r[24]; // 803B3DD8
  c->r[4]=c->r[29]|c->r[29]; // 803B3DDC
  c->r[5]=c->r[30]|c->r[30]; // 803B3DE0
  c->r[6]=c->r[31]|c->r[31]; // 803B3DE4
  c->lr=0x803B3DECu; f_803B3C04(c); // 803B3DE8
  cmps(c,0,(int32_t)c->r[24],0); // 803B3DEC
  W32(c->r[24]+0x000000A8u,c->r[25]); // 803B3DF0
  c->r[23]=c->r[24]|c->r[24]; // 803B3DF4
  W32(c->r[24]+0x000000ACu,c->r[26]); // 803B3DF8
  W32(c->r[24]+0x000000B0u,c->r[27]); // 803B3DFC
  W32(c->r[24]+0x000000B4u,c->r[28]); // 803B3E00
  if (crb(c,2)) { goto L_803B3E0C; } // 803B3E04
  c->r[23]=c->r[24]+0x00000074u; // 803B3E08
L_803B3E0C:;
  c->lr=0x803B3E10u; f_8039DC24(c); // 803B3E0C
  c->r[4]=c->r[23]|c->r[23]; // 803B3E10
  c->lr=0x803B3E18u; f_8039DD08(c); // 803B3E14
  c->r[0]=0u+0x00000001u; // 803B3E18
  W8(c->r[24]+0x0000008Cu,c->r[0]); // 803B3E1C
  c->lr=0x803B3E24u; f_803ABEB8(c); // 803B3E20
  c->r[3]=c->r[3]+0x00000354u; // 803B3E24
  c->lr=0x803B3E2Cu; f_8025FDA8(c); // 803B3E28
  c->r[11]=c->r[1]+0x00000030u; // 803B3E2C
  c->r[3]=0u+0x00000001u; // 803B3E30
  c->lr=0x803B3E38u; { c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 803B3E34
  c->r[0]=R32(c->r[1]+0x00000034u); // 803B3E38
  c->lr=c->r[0]; // 803B3E3C
  c->r[1]=c->r[1]+0x00000030u; // 803B3E40
  return; // 803B3E44
}

// fn_803B3E48
void f_803B3E48(Ctx* __restrict c) {
  trace_call(0x803B3E48u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803B3E48
  c->r[0]=c->lr; // 803B3E4C
  W32(c->r[1]+0x00000014u,c->r[0]); // 803B3E50
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 803B3E54
  W32(c->r[1]+0x00000008u,c->r[30]); // 803B3E58
  c->r[30]=c->r[3]|c->r[3]; // 803B3E5C
  c->lr=0x803B3E64u; f_803ABEB8(c); // 803B3E60
  c->r[3]=c->r[3]+0x00000354u; // 803B3E64
  c->lr=0x803B3E6Cu; f_8025FCCC(c); // 803B3E68
  cmps(c,0,(int32_t)c->r[30],0); // 803B3E6C
  c->r[31]=c->r[30]|c->r[30]; // 803B3E70
  if (crb(c,2)) { goto L_803B3E7C; } // 803B3E74
  c->r[31]=c->r[30]+0x00000080u; // 803B3E78
L_803B3E7C:;
  c->lr=0x803B3E80u; f_803ABEB8(c); // 803B3E7C
  c->r[4]=c->r[31]|c->r[31]; // 803B3E80
  c->lr=0x803B3E88u; f_803AC284(c); // 803B3E84
  c->r[0]=0u+0x00000001u; // 803B3E88
  W8(c->r[30]+0x0000008Du,c->r[0]); // 803B3E8C
  c->lr=0x803B3E94u; f_803ABEB8(c); // 803B3E90
  c->r[3]=c->r[3]+0x00000354u; // 803B3E94
  c->lr=0x803B3E9Cu; f_8025FDA8(c); // 803B3E98
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 803B3E9C
  c->r[3]=0u+0x00000001u; // 803B3EA0
  c->r[30]=R32(c->r[1]+0x00000008u); // 803B3EA4
  c->r[0]=R32(c->r[1]+0x00000014u); // 803B3EA8
  c->lr=c->r[0]; // 803B3EAC
  c->r[1]=c->r[1]+0x00000010u; // 803B3EB0
  return; // 803B3EB4
}

// Stop__Q44nw4r3snd6detail9WsdPlayerFv
void f_803B3EB8(Ctx* __restrict c) {
  trace_call(0x803B3EB8u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803B3EB8
  c->r[0]=c->lr; // 803B3EBC
  W32(c->r[1]+0x00000014u,c->r[0]); // 803B3EC0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 803B3EC4
  W32(c->r[1]+0x00000008u,c->r[30]); // 803B3EC8
  c->r[30]=c->r[3]|c->r[3]; // 803B3ECC
  c->lr=0x803B3ED4u; f_803ABEB8(c); // 803B3ED0
  c->r[3]=c->r[3]+0x00000354u; // 803B3ED4
  c->lr=0x803B3EDCu; f_8025FCCC(c); // 803B3ED8
  c->lr=0x803B3EE0u; f_803ABEB8(c); // 803B3EDC
  c->r[3]=c->r[3]+0x00000354u; // 803B3EE0
  c->lr=0x803B3EE8u; f_8025FCCC(c); // 803B3EE4
  c->r[0]=R8(c->r[30]+0x0000008Du); // 803B3EE8
  cmps(c,0,(int32_t)c->r[0],0); // 803B3EEC
  if (crb(c,2)) { goto L_803B3F18; } // 803B3EF0
  cmps(c,0,(int32_t)c->r[30],0); // 803B3EF4
  c->r[31]=c->r[30]|c->r[30]; // 803B3EF8
  if (crb(c,2)) { goto L_803B3F04; } // 803B3EFC
  c->r[31]=c->r[30]+0x00000080u; // 803B3F00
L_803B3F04:;
  c->lr=0x803B3F08u; f_803ABEB8(c); // 803B3F04
  c->r[4]=c->r[31]|c->r[31]; // 803B3F08
  c->lr=0x803B3F10u; f_803AC2EC(c); // 803B3F0C
  c->r[0]=0u+0x00000000u; // 803B3F10
  W8(c->r[30]+0x0000008Du,c->r[0]); // 803B3F14
L_803B3F18:;
  c->r[0]=R8(c->r[30]+0x0000008Cu); // 803B3F18
  cmps(c,0,(int32_t)c->r[0],0); // 803B3F1C
  if (crb(c,2)) { goto L_803B3F48; } // 803B3F20
  cmps(c,0,(int32_t)c->r[30],0); // 803B3F24
  c->r[31]=c->r[30]|c->r[30]; // 803B3F28
  if (crb(c,2)) { goto L_803B3F34; } // 803B3F2C
  c->r[31]=c->r[30]+0x00000074u; // 803B3F30
L_803B3F34:;
  c->lr=0x803B3F38u; f_8039DC24(c); // 803B3F34
  c->r[4]=c->r[31]|c->r[31]; // 803B3F38
  c->lr=0x803B3F40u; f_8039DD38(c); // 803B3F3C
  c->r[0]=0u+0x00000000u; // 803B3F40
  W8(c->r[30]+0x0000008Cu,c->r[0]); // 803B3F44
L_803B3F48:;
  c->lr=0x803B3F4Cu; f_803ABEB8(c); // 803B3F48
  c->r[3]=c->r[3]+0x00000354u; // 803B3F4C
  c->lr=0x803B3F54u; f_8025FCCC(c); // 803B3F50
  c->r[4]=R32(c->r[30]+0x000000D4u); // 803B3F54
  c->r[3]=0u+0x00000000u; // 803B3F58
  cmps(c,0,(int32_t)c->r[4],0); // 803B3F5C
  if (crb(c,2)) { goto L_803B3F74; } // 803B3F60
  c->r[0]=R8(c->r[4]+0x00000032u); // 803B3F64
  cmps(c,0,(int32_t)c->r[0],0); // 803B3F68
  if (crb(c,2)) { goto L_803B3F74; } // 803B3F6C
  c->r[3]=0u+0x00000001u; // 803B3F70
L_803B3F74:;
  cmps(c,0,(int32_t)c->r[3],0); // 803B3F74
  if (crb(c,2)) { goto L_803B3F8C; } // 803B3F78
  c->r[3]=c->r[30]|c->r[30]; // 803B3F7C
  c->lr=0x803B3F84u; f_803B4794(c); // 803B3F80
  c->r[3]=R32(c->r[30]+0x000000D4u); // 803B3F84
  c->lr=0x803B3F8Cu; f_8039D73C(c); // 803B3F88
L_803B3F8C:;
  c->r[3]=R32(c->r[30]+0x000000D4u); // 803B3F8C
  cmps(c,0,(int32_t)c->r[3],0); // 803B3F90
  if (crb(c,2)) { goto L_803B3F9C; } // 803B3F94
  c->lr=0x803B3F9Cu; f_8039DC0C(c); // 803B3F98
L_803B3F9C:;
  c->r[0]=0u+0x00000000u; // 803B3F9C
  W32(c->r[30]+0x000000D4u,c->r[0]); // 803B3FA0
  c->lr=0x803B3FA8u; f_803ABEB8(c); // 803B3FA4
  c->r[3]=c->r[3]+0x00000354u; // 803B3FA8
  c->lr=0x803B3FB0u; f_8025FDA8(c); // 803B3FAC
  c->lr=0x803B3FB4u; f_803ABEB8(c); // 803B3FB0
  c->r[3]=c->r[3]+0x00000354u; // 803B3FB4
  c->lr=0x803B3FBCu; f_8025FDA8(c); // 803B3FB8
  c->lr=0x803B3FC0u; f_803ABEB8(c); // 803B3FBC
  c->r[3]=c->r[3]+0x00000354u; // 803B3FC0
  c->lr=0x803B3FC8u; f_8025FDA8(c); // 803B3FC4
  c->r[0]=R32(c->r[1]+0x00000014u); // 803B3FC8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 803B3FCC
  c->r[30]=R32(c->r[1]+0x00000008u); // 803B3FD0
  c->lr=c->r[0]; // 803B3FD4
  c->r[1]=c->r[1]+0x00000010u; // 803B3FD8
  return; // 803B3FDC
}

// Pause__Q44nw4r3snd6detail9WsdPlayerFb
void f_803B3FE0(Ctx* __restrict c) {
  trace_call(0x803B3FE0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803B3FE0
  c->r[0]=c->lr; // 803B3FE4
  W32(c->r[1]+0x00000014u,c->r[0]); // 803B3FE8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 803B3FEC
  c->r[31]=c->r[4]|c->r[4]; // 803B3FF0
  W32(c->r[1]+0x00000008u,c->r[30]); // 803B3FF4
  c->r[30]=c->r[3]|c->r[3]; // 803B3FF8
  c->lr=0x803B4000u; f_803ABEB8(c); // 803B3FFC
  c->r[3]=c->r[3]+0x00000354u; // 803B4000
  c->lr=0x803B4008u; f_8025FCCC(c); // 803B4004
  c->r[3]=rotl(c->r[31],0)&0x000000FFu; // 803B4008
  c->r[5]=R32(c->r[30]+0x000000D4u); // 803B400C
  c->r[0]=0u-c->r[3]; // 803B4010
  c->r[4]=0u+0x00000000u; // 803B4014
  c->r[0]=c->r[0]|c->r[3]; // 803B4018
  cmps(c,0,(int32_t)c->r[5],0); // 803B401C
  c->r[0]=rotl(c->r[0],1)&0x00000001u; // 803B4020
  W8(c->r[30]+0x0000008Eu,c->r[0]); // 803B4024
  if (crb(c,2)) { goto L_803B403C; } // 803B4028
  c->r[0]=R8(c->r[5]+0x00000032u); // 803B402C
  cmps(c,0,(int32_t)c->r[0],0); // 803B4030
  if (crb(c,2)) { goto L_803B403C; } // 803B4034
  c->r[4]=0u+0x00000001u; // 803B4038
L_803B403C:;
  cmps(c,0,(int32_t)c->r[4],0); // 803B403C
  if (crb(c,2)) { goto L_803B4070; } // 803B4040
  c->r[5]=R32(c->r[30]+0x000000D4u); // 803B4044
  c->r[3]=R8(c->r[5]+0x00000031u); // 803B4048
  c->r[0]=0u-c->r[3]; // 803B404C
  c->r[0]=c->r[0]|c->r[3]; // 803B4050
  c->r[0]=rotl(c->r[0],1)&0x00000001u; // 803B4054
  cmpu(c,0,c->r[31],c->r[0]); // 803B4058
  if (crb(c,2)) { goto L_803B4070; } // 803B405C
  W8(c->r[5]+0x00000031u,c->r[31]); // 803B4060
  c->r[4]=c->r[31]|c->r[31]; // 803B4064
  c->r[3]=R32(c->r[5]+0x000000DCu); // 803B4068
  c->lr=0x803B4070u; f_803B0DAC(c); // 803B406C
L_803B4070:;
  c->lr=0x803B4074u; f_803ABEB8(c); // 803B4070
  c->r[3]=c->r[3]+0x00000354u; // 803B4074
  c->lr=0x803B407Cu; f_8025FDA8(c); // 803B4078
  c->r[0]=R32(c->r[1]+0x00000014u); // 803B407C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 803B4080
  c->r[30]=R32(c->r[1]+0x00000008u); // 803B4084
  c->lr=c->r[0]; // 803B4088
  c->r[1]=c->r[1]+0x00000010u; // 803B408C
  return; // 803B4090
}

// fn_803B4094
void f_803B4094(Ctx* __restrict c) {
  trace_call(0x803B4094u);
  W8(c->r[3]+0x0000009Cu,c->r[4]); // 803B4094
  return; // 803B4098
}

// fn_803B409C
void f_803B409C(Ctx* __restrict c) {
  trace_call(0x803B409Cu);
  W8(c->r[3]+0x00000090u,c->r[4]); // 803B409C
  return; // 803B40A0
}

// InvalidateData__Q44nw4r3snd6detail9WsdPlayerFPCvPCv
void f_803B40A4(Ctx* __restrict c) {
  trace_call(0x803B40A4u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803B40A4
  c->r[0]=c->lr; // 803B40A8
  W32(c->r[1]+0x00000024u,c->r[0]); // 803B40AC
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 803B40B0
  c->r[31]=c->r[5]|c->r[5]; // 803B40B4
  W32(c->r[1]+0x00000018u,c->r[30]); // 803B40B8
  c->r[30]=c->r[4]|c->r[4]; // 803B40BC
  W32(c->r[1]+0x00000014u,c->r[29]); // 803B40C0
  c->r[29]=c->r[3]|c->r[3]; // 803B40C4
  c->lr=0x803B40CCu; f_803ABEB8(c); // 803B40C8
  c->r[3]=c->r[3]+0x00000354u; // 803B40CC
  c->lr=0x803B40D4u; f_8025FCCC(c); // 803B40D0
  c->r[0]=R8(c->r[29]+0x0000008Cu); // 803B40D4
  cmps(c,0,(int32_t)c->r[0],0); // 803B40D8
  if (crb(c,2)) { goto L_803B41D4; } // 803B40DC
  c->r[0]=R32(c->r[29]+0x000000A8u); // 803B40E0
  cmpu(c,0,c->r[30],c->r[0]); // 803B40E4
  if (crb(c,1)) { goto L_803B41D4; } // 803B40E8
  cmpu(c,0,c->r[0],c->r[31]); // 803B40EC
  if (crb(c,1)) { goto L_803B41D4; } // 803B40F0
  c->lr=0x803B40F8u; f_803ABEB8(c); // 803B40F4
  c->r[3]=c->r[3]+0x00000354u; // 803B40F8
  c->lr=0x803B4100u; f_8025FCCC(c); // 803B40FC
  c->r[0]=R8(c->r[29]+0x0000008Du); // 803B4100
  cmps(c,0,(int32_t)c->r[0],0); // 803B4104
  if (crb(c,2)) { goto L_803B4130; } // 803B4108
  cmps(c,0,(int32_t)c->r[29],0); // 803B410C
  c->r[31]=c->r[29]|c->r[29]; // 803B4110
  if (crb(c,2)) { goto L_803B411C; } // 803B4114
  c->r[31]=c->r[29]+0x00000080u; // 803B4118
L_803B411C:;
  c->lr=0x803B4120u; f_803ABEB8(c); // 803B411C
  c->r[4]=c->r[31]|c->r[31]; // 803B4120
  c->lr=0x803B4128u; f_803AC2EC(c); // 803B4124
  c->r[0]=0u+0x00000000u; // 803B4128
  W8(c->r[29]+0x0000008Du,c->r[0]); // 803B412C
L_803B4130:;
  c->r[0]=R8(c->r[29]+0x0000008Cu); // 803B4130
  cmps(c,0,(int32_t)c->r[0],0); // 803B4134
  if (crb(c,2)) { goto L_803B4160; } // 803B4138
  cmps(c,0,(int32_t)c->r[29],0); // 803B413C
  c->r[31]=c->r[29]|c->r[29]; // 803B4140
  if (crb(c,2)) { goto L_803B414C; } // 803B4144
  c->r[31]=c->r[29]+0x00000074u; // 803B4148
L_803B414C:;
  c->lr=0x803B4150u; f_8039DC24(c); // 803B414C
  c->r[4]=c->r[31]|c->r[31]; // 803B4150
  c->lr=0x803B4158u; f_8039DD38(c); // 803B4154
  c->r[0]=0u+0x00000000u; // 803B4158
  W8(c->r[29]+0x0000008Cu,c->r[0]); // 803B415C
L_803B4160:;
  c->lr=0x803B4164u; f_803ABEB8(c); // 803B4160
  c->r[3]=c->r[3]+0x00000354u; // 803B4164
  c->lr=0x803B416Cu; f_8025FCCC(c); // 803B4168
  c->r[4]=R32(c->r[29]+0x000000D4u); // 803B416C
  c->r[3]=0u+0x00000000u; // 803B4170
  cmps(c,0,(int32_t)c->r[4],0); // 803B4174
  if (crb(c,2)) { goto L_803B418C; } // 803B4178
  c->r[0]=R8(c->r[4]+0x00000032u); // 803B417C
  cmps(c,0,(int32_t)c->r[0],0); // 803B4180
  if (crb(c,2)) { goto L_803B418C; } // 803B4184
  c->r[3]=0u+0x00000001u; // 803B4188
L_803B418C:;
  cmps(c,0,(int32_t)c->r[3],0); // 803B418C
  if (crb(c,2)) { goto L_803B41A4; } // 803B4190
  c->r[3]=c->r[29]|c->r[29]; // 803B4194
  c->lr=0x803B419Cu; f_803B4794(c); // 803B4198
  c->r[3]=R32(c->r[29]+0x000000D4u); // 803B419C
  c->lr=0x803B41A4u; f_8039D73C(c); // 803B41A0
L_803B41A4:;
  c->r[3]=R32(c->r[29]+0x000000D4u); // 803B41A4
  cmps(c,0,(int32_t)c->r[3],0); // 803B41A8
  if (crb(c,2)) { goto L_803B41B4; } // 803B41AC
  c->lr=0x803B41B4u; f_8039DC0C(c); // 803B41B0
L_803B41B4:;
  c->r[0]=0u+0x00000000u; // 803B41B4
  W32(c->r[29]+0x000000D4u,c->r[0]); // 803B41B8
  c->lr=0x803B41C0u; f_803ABEB8(c); // 803B41BC
  c->r[3]=c->r[3]+0x00000354u; // 803B41C0
  c->lr=0x803B41C8u; f_8025FDA8(c); // 803B41C4
  c->lr=0x803B41CCu; f_803ABEB8(c); // 803B41C8
  c->r[3]=c->r[3]+0x00000354u; // 803B41CC
  c->lr=0x803B41D4u; f_8025FDA8(c); // 803B41D0
L_803B41D4:;
  c->lr=0x803B41D8u; f_803ABEB8(c); // 803B41D4
  c->r[3]=c->r[3]+0x00000354u; // 803B41D8
  c->lr=0x803B41E0u; f_8025FDA8(c); // 803B41DC
  c->r[0]=R32(c->r[1]+0x00000024u); // 803B41E0
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 803B41E4
  c->r[30]=R32(c->r[1]+0x00000018u); // 803B41E8
  c->r[29]=R32(c->r[1]+0x00000014u); // 803B41EC
  c->lr=c->r[0]; // 803B41F0
  c->r[1]=c->r[1]+0x00000020u; // 803B41F4
  return; // 803B41F8
}

// fn_803B41FC
void f_803B41FC(Ctx* __restrict c) {
  trace_call(0x803B41FCu);
  {uint32_t ea=c->r[1]+0xFFFFFF30u; W32(ea,c->r[1]); c->r[1]=ea;} // 803B41FC
  c->r[0]=c->lr; // 803B4200
  W32(c->r[1]+0x000000D4u,c->r[0]); // 803B4204
  W32(c->r[1]+0x000000CCu,c->r[31]); // 803B4208
  c->r[31]=c->r[3]|c->r[3]; // 803B420C
  W32(c->r[1]+0x000000C8u,c->r[30]); // 803B4210
  c->r[30]=c->r[4]|c->r[4]; // 803B4214
  c->lr=0x803B421Cu; f_803ABEB8(c); // 803B4218
  c->r[3]=c->r[3]+0x00000354u; // 803B421C
  c->lr=0x803B4224u; f_8025FCCC(c); // 803B4220
  c->r[3]=R32(c->r[31]+0x000000A0u); // 803B4224
  c->r[4]=c->r[1]+0x00000018u; // 803B4228
  c->r[5]=c->r[1]+0x00000008u; // 803B422C
  c->r[6]=c->r[1]+0x00000028u; // 803B4230
  c->r[12]=R32(c->r[3]+0x00000000u); // 803B4234
  c->r[9]=0u+0x00000000u; // 803B4238
  c->r[7]=R32(c->r[31]+0x000000A8u); // 803B423C
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 803B4240
  c->r[8]=R32(c->r[31]+0x000000ACu); // 803B4244
  c->r[10]=R32(c->r[31]+0x000000A4u); // 803B4248
  c->ctr=c->r[12]; // 803B424C
  if (true) { c->lr=0x803B4254u; dispatch(c,c->ctr); } // 803B4250
  cmps(c,0,(int32_t)c->r[3],0); // 803B4254
  c->r[31]=c->r[3]|c->r[3]; // 803B4258
  if (crb(c,2)) { goto L_803B428C; } // 803B425C
  c->r[3]=R8(c->r[1]+0x00000029u); // 803B4260
  c->r[0]=0u-c->r[3]; // 803B4264
  c->r[0]=c->r[0]|c->r[3]; // 803B4268
  c->r[0]=rotl(c->r[0],1)&0x00000001u; // 803B426C
  W8(c->r[30]+0x00000000u,c->r[0]); // 803B4270
  c->r[0]=R32(c->r[1]+0x0000002Cu); // 803B4274
  W32(c->r[30]+0x00000004u,c->r[0]); // 803B4278
  c->r[0]=R32(c->r[1]+0x00000030u); // 803B427C
  W32(c->r[30]+0x00000008u,c->r[0]); // 803B4280
  c->r[0]=R32(c->r[1]+0x00000034u); // 803B4284
  W32(c->r[30]+0x0000000Cu,c->r[0]); // 803B4288
L_803B428C:;
  c->lr=0x803B4290u; f_803ABEB8(c); // 803B428C
  c->r[3]=c->r[3]+0x00000354u; // 803B4290
  c->lr=0x803B4298u; f_8025FDA8(c); // 803B4294
  c->r[3]=c->r[31]|c->r[31]; // 803B4298
  c->r[31]=R32(c->r[1]+0x000000CCu); // 803B429C
  c->r[30]=R32(c->r[1]+0x000000C8u); // 803B42A0
  c->r[0]=R32(c->r[1]+0x000000D4u); // 803B42A4
  c->lr=c->r[0]; // 803B42A8
  c->r[1]=c->r[1]+0x000000D0u; // 803B42AC
  return; // 803B42B0
}

// fn_803B42B4
void f_803B42B4(Ctx* __restrict c) {
  trace_call(0x803B42B4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803B42B4
  c->r[0]=c->lr; // 803B42B8
  W32(c->r[1]+0x00000014u,c->r[0]); // 803B42BC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 803B42C0
  c->r[31]=c->r[3]|c->r[3]; // 803B42C4
  c->lr=0x803B42CCu; f_803ABEB8(c); // 803B42C8
  c->r[3]=c->r[3]+0x00000354u; // 803B42CC
  c->lr=0x803B42D4u; f_8025FCCC(c); // 803B42D0
  c->r[3]=R32(c->r[31]+0x000000D4u); // 803B42D4
  cmps(c,0,(int32_t)c->r[3],0); // 803B42D8
  if (!crb(c,2)) { goto L_803B42F4; } // 803B42DC
  c->lr=0x803B42E4u; f_803ABEB8(c); // 803B42E0
  c->r[3]=c->r[3]+0x00000354u; // 803B42E4
  c->lr=0x803B42ECu; f_8025FDA8(c); // 803B42E8
  c->r[3]=0u+0xFFFFFFFFu; // 803B42EC
  goto L_803B4310; // 803B42F0
L_803B42F4:;
  c->r[3]=R32(c->r[3]+0x000000DCu); // 803B42F4
  c->lr=0x803B42FCu; f_803B1378(c); // 803B42F8
  c->r[31]=c->r[3]|c->r[3]; // 803B42FC
  c->lr=0x803B4304u; f_803ABEB8(c); // 803B4300
  c->r[3]=c->r[3]+0x00000354u; // 803B4304
  c->lr=0x803B430Cu; f_8025FDA8(c); // 803B4308
  c->r[3]=c->r[31]|c->r[31]; // 803B430C
L_803B4310:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 803B4310
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 803B4314
  c->lr=c->r[0]; // 803B4318
  c->r[1]=c->r[1]+0x00000010u; // 803B431C
  return; // 803B4320
}

