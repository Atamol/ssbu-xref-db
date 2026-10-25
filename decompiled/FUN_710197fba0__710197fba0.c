// addr:      710197fba0
// offset:    0x197fba0
// name:      FUN_710197fba0
// mangled:   
// signature: undefined __cdecl FUN_710197fba0(undefined8 * param_1, long * param_2, long * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_710197fba0(undefined8 *param_1,long *param_2,long ****param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined4 uVar1;
  char cVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  ulong uVar8;
  long lVar9;
  long *plVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  int *piVar13;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 extraout_x1_02;
  undefined8 extraout_x1_03;
  undefined8 extraout_x1_04;
  undefined8 extraout_x1_05;
  undefined8 extraout_x1_06;
  undefined8 extraout_x1_07;
  undefined8 extraout_x1_08;
  undefined8 extraout_x1_09;
  undefined8 extraout_x1_10;
  undefined8 extraout_x1_11;
  undefined8 extraout_x1_12;
  undefined8 extraout_x1_13;
  undefined8 extraout_x1_14;
  undefined8 extraout_x1_15;
  undefined8 extraout_x1_16;
  undefined8 extraout_x1_17;
  undefined8 extraout_x1_18;
  undefined8 extraout_x1_19;
  undefined8 extraout_x1_20;
  undefined8 extraout_x1_21;
  undefined8 extraout_x1_22;
  undefined8 uVar14;
  undefined8 extraout_x1_23;
  undefined8 extraout_x1_24;
  undefined8 extraout_x1_25;
  undefined8 extraout_x1_26;
  undefined8 extraout_x1_27;
  undefined8 extraout_x1_28;
  undefined8 extraout_x1_29;
  undefined8 extraout_x1_30;
  undefined8 extraout_x1_31;
  long ****pppplVar15;
  char *pcVar16;
  CharInfo *pCVar17;
  byte ****ppppbVar18;
  byte ****ppppbVar19;
  code *pcVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  undefined **ppuVar24;
  ulong uVar25;
  long *plVar26;
  byte ***pppbVar27;
  undefined8 *puVar28;
  long lVar29;
  long *plVar30;
  undefined1 auVar31 [16];
  ulong local_350;
  undefined8 local_348;
  undefined8 uStack_340;
  undefined8 local_338;
  undefined8 uStack_330;
  undefined8 local_328;
  undefined8 uStack_320;
  undefined8 local_318;
  undefined8 uStack_310;
  undefined8 local_308;
  undefined8 uStack_300;
  ulong local_2f8;
  undefined **local_2f0;
  ulong local_2e8;
  undefined8 local_2e0;
  undefined8 local_2d8;
  undefined8 local_2d0;
  undefined8 uStack_2c8;
  long *local_2c0;
  undefined8 uStack_2b8;
  long local_2b0;
  undefined8 uStack_2a8;
  undefined8 local_2a0;
  undefined8 uStack_298;
  long *local_290;
  undefined8 uStack_288;
  ulong local_280 [4];
  ulong *local_260;
  long alStack_250 [4];
  long *local_230;
  long alStack_220 [4];
  long *local_200;
  long alStack_1f0 [4];
  long *local_1d0;
  undefined8 local_1b0;
  ushort local_1a8;
  undefined4 local_1a6;
  undefined2 local_1a2;
  undefined4 local_1a0;
  undefined2 local_19c;
  undefined1 local_19a;
  undefined1 *local_198;
  undefined4 local_190;
  long alStack_180 [4];
  long *local_160;
  long alStack_150 [4];
  long *local_130;
  long alStack_120 [4];
  long *local_100;
  long alStack_f0 [4];
  long *local_d0;
  long alStack_c0 [4];
  long *local_a0;
  undefined4 local_90;
  byte ***local_80;
  undefined4 local_74 [5];
  
  puVar11 = param_1 + 1;
  *param_1 = param_2;
  puVar6 = (undefined8 *)FUN_710392e290(0x10,8,param_3,param_4,param_5,param_6,param_7,param_8);
  uVar14 = extraout_x1;
  if (puVar6 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_2e0 = (undefined **)((ulong)local_2e0 & 0xffffffff00000000);
      local_1b0 = (byte ***)&DAT_00000008;
      param_3 = (long ****)&local_1b0;
      auVar31 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_2e0);
      uVar14 = auVar31._8_8_;
      if (((auVar31._0_8_ & 1) != 0) &&
         (puVar6 = (undefined8 *)
                   FUN_710392e290(0x10,8,param_3,param_4,param_5,param_6,param_7,param_8),
         uVar14 = extraout_x1_00, puVar6 != (undefined8 *)0x0)) goto LAB_710197fc2c;
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_710197fc2c:
  FUN_7103773200(puVar6,uVar14,param_3,param_4,param_5,param_6,param_7,param_8);
  param_1[1] = puVar6;
  puVar6 = param_1 + 2;
  FUN_7103776290(puVar6,extraout_x1_01,param_3,param_4,param_5,param_6,param_7,param_8);
  FUN_7103776290(param_1 + 4,extraout_x1_02,param_3,param_4,param_5,param_6,param_7,param_8);
  FUN_7103776290(param_1 + 6,extraout_x1_03,param_3,param_4,param_5,param_6,param_7,param_8);
  FUN_7103776290(param_1 + 8,extraout_x1_04,param_3,param_4,param_5,param_6,param_7,param_8);
  FUN_7103776290(param_1 + 10,extraout_x1_05,param_3,param_4,param_5,param_6,param_7,param_8);
  FUN_7103776290(param_1 + 0xc,extraout_x1_06,param_3,param_4,param_5,param_6,param_7,param_8);
  FUN_7103776290(param_1 + 0xe,extraout_x1_07,param_3,param_4,param_5,param_6,param_7,param_8);
  plVar26 = param_1 + 0x10;
  *plVar26 = 0;
  param_1[0x11] = 0;
  FUN_7103776290(param_1 + 0x12,extraout_x1_08,param_3,param_4,param_5,param_6,param_7,param_8);
  FUN_7103776290(param_1 + 0x14,extraout_x1_09,param_3,param_4,param_5,param_6,param_7,param_8);
  *(undefined1 *)(param_1 + 0x16) = 0;
  FUN_7103776290(param_1 + 0x17,extraout_x1_10,param_3,param_4,param_5,param_6,param_7,param_8);
  FUN_7103776290(param_1 + 0x19,extraout_x1_11,param_3,param_4,param_5,param_6,param_7,param_8);
  *(undefined1 *)(param_1 + 0x1b) = 0;
  FUN_7103776290(param_1 + 0x1c,extraout_x1_12,param_3,param_4,param_5,param_6,param_7,param_8);
  FUN_7103776290(param_1 + 0x1e,extraout_x1_13,param_3,param_4,param_5,param_6,param_7,param_8);
  param_1[0x21] = param_1 + 0x21;
  param_1[0x22] = 0;
  param_1[0x25] = 0;
  param_1[0x26] = FUN_7101983320;
  param_1[0x27] = 0;
  param_1[0x28] = FUN_71019837d0;
  param_1[0x29] = 0;
  param_1[0x2a] = FUN_7101983d80;
  *(undefined1 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x37) = 0xffffffff;
  *(undefined1 *)((long)param_1 + 0x1bc) = 0;
  *(undefined4 *)(param_1 + 0x3a) = 0xffffffff;
  param_1[0x3f] = &PTR_FUN_71052401d0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  param_1[0x35] = 0;
  param_1[0x36] = 0xffffffff;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  param_1[0x2f] = 0;
  param_1[0x30] = 0;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  param_1[0x38] = 0;
  param_1[0x39] = 0;
  param_1[0x3d] = 0;
  param_1[0x3e] = 0;
  param_1[0x3b] = 0;
  param_1[0x3c] = 0;
  puVar7 = (undefined8 *)FUN_710392e290(0x10,0x10,param_3,param_4,param_5,param_6,param_7,param_8);
  if (puVar7 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_2e0 = (undefined **)((ulong)local_2e0 & 0xffffffff00000000);
      local_1b0 = (byte ***)&DAT_00000010;
      pppplVar15 = (long ****)&local_1b0;
      uVar8 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_2e0);
      if (((uVar8 & 1) != 0) &&
         (puVar7 = (undefined8 *)
                   FUN_710392e290(0x10,0x10,pppplVar15,param_4,param_5,param_6,param_7,param_8),
         puVar7 != (undefined8 *)0x0)) goto LAB_710197fda8;
    }
    puVar7 = (undefined8 *)0x0;
  }
LAB_710197fda8:
  *puVar7 = 0;
  puVar7[1] = 0;
  pppplVar15 = (long ****)0x20c;
  param_1[0x40] = puVar7;
  param_1[0x41] = param_1;
  *(undefined4 *)((long)param_1 + 0x43c) = 0;
  param_1[0x45] = 0;
  param_1[0x44] = 0;
  param_1[0x43] = 0;
  param_1[0x42] = 0;
  param_1[0x88] = 0xffffffff;
  *(undefined4 *)(param_1 + 0x89) = 0xffffffff;
  *(undefined1 *)((long)param_1 + 0x44c) = 0;
  memset(param_1 + 0x46,0,0x20c);
  param_1[0x8a] = param_1;
  param_1[0x8e] = 0;
  param_1[0x8d] = 0;
  param_1[0x8c] = 0;
  param_1[0x8b] = 0;
  param_1[0xa1] = 0xffffffff;
  *(undefined4 *)(param_1 + 0xa2) = 0xffffffff;
  *(undefined1 *)((long)param_1 + 0x514) = 0;
  param_1[0xa0] = 0;
  param_1[0x9f] = 0;
  param_1[0x9e] = 0;
  param_1[0x9d] = 0;
  param_1[0x9c] = 0;
  param_1[0x9b] = 0;
  param_1[0x9a] = 0;
  param_1[0x99] = 0;
  param_1[0x98] = 0;
  param_1[0x97] = 0;
  param_1[0x96] = 0;
  param_1[0x95] = 0;
  param_1[0x94] = 0;
  param_1[0x93] = 0;
  param_1[0x92] = 0;
  param_1[0x91] = 0;
  param_1[0x90] = 0;
  param_1[0x8f] = 0;
  param_1[0xa3] = param_1;
  param_1[0xa6] = 0;
  param_1[0xa5] = 0;
  param_1[0xa4] = 0;
  param_1[0xa7] = 0;
  param_1[0xb6] = 0xffffffff;
  *(undefined4 *)(param_1 + 0xb7) = 0xffffffff;
  *(undefined1 *)((long)param_1 + 0x5bc) = 0;
  param_1[0xb5] = 0;
  param_1[0xb4] = 0;
  param_1[0xb3] = 0;
  param_1[0xb2] = 0;
  param_1[0xb1] = 0;
  param_1[0xb0] = 0;
  param_1[0xaf] = 0;
  param_1[0xae] = 0;
  param_1[0xad] = 0;
  param_1[0xac] = 0;
  param_1[0xab] = 0;
  param_1[0xaa] = 0;
  param_1[0xa9] = 0;
  param_1[0xa8] = 0;
  param_1[0xbe] = 0;
  param_1[0xbd] = 0;
  param_1[0xbc] = 0;
  param_1[0xbb] = 0;
  param_1[0xba] = 0;
  param_1[0xb9] = 0;
  param_1[0xb8] = 0;
  *(undefined4 *)(param_1 + 0xc5) = 10;
  lVar9 = FUN_710392e290(0x10,0x50,pppplVar15,param_4,param_5,param_6,param_7,param_8);
  if (lVar9 == 0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_2e0 = (undefined **)((ulong)local_2e0 & 0xffffffff00000000);
      local_1b0 = (byte ***)&DAT_00000050;
      pppplVar15 = (long ****)&local_1b0;
      uVar8 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_2e0);
      if (((uVar8 & 1) != 0) &&
         (lVar9 = FUN_710392e290(0x10,0x50,pppplVar15,param_4,param_5,param_6,param_7,param_8),
         lVar9 != 0)) goto LAB_710197ff1c;
    }
    lVar9 = 0;
  }
LAB_710197ff1c:
  param_1[0xbf] = lVar9;
  param_1[0xc0] = lVar9;
  param_1[0xc1] = lVar9 + 0x50;
  lVar9 = FUN_710392e290(0x10,0x50,pppplVar15,param_4,param_5,param_6,param_7,param_8);
  if (lVar9 == 0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_2e0 = (undefined **)((ulong)local_2e0 & 0xffffffff00000000);
      local_1b0 = (byte ***)&DAT_00000050;
      pppplVar15 = (long ****)&local_1b0;
      uVar8 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_2e0);
      if (((uVar8 & 1) != 0) &&
         (lVar9 = FUN_710392e290(0x10,0x50,pppplVar15,param_4,param_5,param_6,param_7,param_8),
         lVar9 != 0)) goto LAB_710197ff80;
    }
    lVar9 = 0;
  }
LAB_710197ff80:
  param_1[0xc2] = lVar9;
  param_1[0xc3] = lVar9;
  param_1[0xc4] = lVar9 + 0x50;
  puVar7 = (undefined8 *)
           FUN_710392e290(0x10,0xb8,pppplVar15,param_4,param_5,param_6,param_7,param_8);
  if (puVar7 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_2e0 = (undefined **)((ulong)local_2e0 & 0xffffffff00000000);
      local_1b0 = (byte ***)&DAT_000000b8;
      pppplVar15 = (long ****)&local_1b0;
      uVar8 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_2e0);
      if (((uVar8 & 1) != 0) &&
         (puVar7 = (undefined8 *)
                   FUN_710392e290(0x10,0xb8,pppplVar15,param_4,param_5,param_6,param_7,param_8),
         puVar7 != (undefined8 *)0x0)) goto LAB_710197ffe4;
    }
    puVar7 = (undefined8 *)0x0;
  }
LAB_710197ffe4:
  *(undefined4 *)(puVar7 + 0x15) = 0xffffffff;
  *puVar7 = &PTR_FUN_71050a7138;
  puVar7[1] = puVar7;
  puVar7[7] = 0;
  puVar7[8] = 0;
  *(undefined1 *)((long)puVar7 + 0xac) = 0;
  *(undefined4 *)(puVar7 + 0x16) = 0xffffffff;
  puVar7[6] = 0;
  puVar7[7] = 0;
  puVar7[6] = FUN_71019904d0;
  puVar7[9] = 0;
  puVar7[10] = 0;
  *(undefined4 *)(puVar7 + 10) = 0;
  puVar7[8] = FUN_71019904e0;
  puVar7[9] = 0;
  puVar7[2] = 0;
  puVar7[3] = 0;
  puVar7[4] = 0;
  puVar7[5] = 0;
  puVar7[0x13] = 0;
  puVar7[0x14] = 0xffffffff;
  puVar7[0x11] = 0;
  puVar7[0x12] = 0;
  puVar7[0xf] = 0;
  puVar7[0x10] = 0;
  puVar7[0xd] = 0;
  puVar7[0xe] = 0;
  puVar7[0xb] = 0;
  puVar7[0xc] = 0;
  param_1[0xc6] = puVar7;
  *(undefined1 *)(param_1 + 200) = 0;
  param_1[199] = 0;
  *(undefined4 *)(param_1 + 0xc9) = 0xffffffff;
  *(undefined8 *)((long)param_1 + 0x64c) = 0xffffffff;
  param_1[0x46] = FUN_7101984560;
  param_1[0x48] = FUN_7101984570;
  param_1[0x4c] = FUN_7101985680;
  param_1[0x4a] = FUN_7101985930;
  param_1[0x4e] = FUN_7101985c00;
  param_1[0x50] = FUN_7101985f80;
  param_1[0x52] = FUN_7101985ff0;
  param_1[0x54] = FUN_71019864f0;
  param_1[0x56] = FUN_7101986550;
  param_1[0x58] = FUN_7101986620;
  param_1[0x5a] = FUN_7101986cb0;
  param_1[0x5c] = FUN_7101986d00;
  param_1[0x5e] = FUN_7101986e20;
  param_1[0x6c] = FUN_7101986f30;
  param_1[0x60] = FUN_7101986fb0;
  param_1[0x62] = FUN_7101987540;
  param_1[100] = FUN_7101987990;
  param_1[0x66] = FUN_7101987cb0;
  param_1[0x68] = FUN_7101988010;
  param_1[0x6a] = FUN_7101988420;
  param_1[0x6e] = FUN_7101988560;
  param_1[0x70] = FUN_7101988640;
  param_1[0x72] = FUN_7101988720;
  param_1[0x74] = FUN_71019889a0;
  param_1[0x76] = FUN_71019889f0;
  param_1[0x78] = FUN_7101988be0;
  param_1[0x7a] = FUN_7101988f90;
  param_1[0x7c] = FUN_7101988fc0;
  *(undefined1 *)((long)param_1 + 0x654) = 0;
  param_1[0x47] = 0;
  param_1[0x49] = 0;
  param_1[0x4d] = 0;
  param_1[0x4b] = 0;
  param_1[0x4f] = 0;
  param_1[0x51] = 0;
  param_1[0x53] = 0;
  param_1[0x55] = 0;
  param_1[0x57] = 0;
  param_1[0x59] = 0;
  param_1[0x5b] = 0;
  param_1[0x5d] = 0;
  param_1[0x5f] = 0;
  param_1[0x6d] = 0;
  param_1[0x61] = 0;
  param_1[99] = 0;
  param_1[0x65] = 0;
  param_1[0x67] = 0;
  param_1[0x69] = 0;
  param_1[0x6b] = 0;
  param_1[0x6f] = 0;
  param_1[0x71] = 0;
  param_1[0x73] = 0;
  param_1[0x75] = 0;
  param_1[0x77] = 0;
  param_1[0x79] = 0;
  param_1[0x7b] = 0;
  param_1[0x7d] = 0;
  if (0x12 < *(uint *)((long)param_1 + 0x43c)) goto LAB_7101983318;
  *(undefined4 *)((long)param_1 + (long)(int)*(uint *)((long)param_1 + 0x43c) * 4 + 0x3f0) = 0;
  param_1[0x8f] = FUN_71019891c0;
  param_1[0x91] = FUN_71019892d0;
  param_1[0x93] = FUN_7101989350;
  param_1[0x95] = FUN_7101989470;
  param_1[0x90] = 0;
  param_1[0x92] = 0;
  param_1[0x94] = 0;
  param_1[0x96] = 0;
  if (0x12 < *(uint *)((long)param_1 + 0x504)) goto LAB_7101983318;
  *(undefined4 *)((long)param_1 + (long)(int)*(uint *)((long)param_1 + 0x504) * 4 + 0x4b8) = 0;
  param_1[0xaa] = FUN_7101989790;
  param_1[0xa8] = FUN_7101989500;
  param_1[0xa9] = 0;
  param_1[0xab] = 0;
  if (0x12 < *(uint *)((long)param_1 + 0x5ac)) goto LAB_7101983318;
  *(undefined4 *)((long)param_1 + (long)(int)*(uint *)((long)param_1 + 0x5ac) * 4 + 0x560) = 0;
  pppplVar15 = (long ****)&DAT_7104543920;
  ppppbVar19 = (byte ****)0x1;
  FUN_71032cbf30(puVar11,*param_2,(ulong *)&DAT_7104543920,(byte ****)0x1,param_5,param_6,param_7,
                 param_8);
  plVar10 = (long *)param_1[0x11];
  if (plVar10 != (long *)0x0) {
    param_1[0x11] = 0;
    (**(code **)(*plVar10 + 8))();
  }
  puVar7 = (undefined8 *)
           FUN_710392e290(0x10,0x28,pppplVar15,ppppbVar19,param_5,param_6,param_7,param_8);
  if (puVar7 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_2e0 = (undefined **)((ulong)local_2e0 & 0xffffffff00000000);
      local_1b0 = (byte ***)&DAT_00000028;
      pppplVar15 = (long ****)&local_1b0;
      uVar8 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_2e0);
      if (((uVar8 & 1) != 0) &&
         (puVar7 = (undefined8 *)
                   FUN_710392e290(0x10,0x28,pppplVar15,ppppbVar19,param_5,param_6,param_7,param_8),
         puVar7 != (undefined8 *)0x0)) goto LAB_710198034c;
    }
    puVar7 = (undefined8 *)0x0;
  }
LAB_710198034c:
  *(undefined2 *)(puVar7 + 1) = 0x100;
  *(undefined4 *)((long)puVar7 + 0xc) = 0x4001;
  *(undefined4 *)((long)puVar7 + 0x14) = 1;
  *(undefined1 *)(puVar7 + 2) = 1;
  *(undefined1 *)(puVar7 + 3) = 0;
  *puVar7 = &PTR_FUN_71050a75e0;
  lVar9 = FUN_710392e290(0x10,0xe8,pppplVar15,ppppbVar19,param_5,param_6,param_7,param_8);
  uVar14 = extraout_x1_14;
  if (lVar9 == 0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_2e0 = (undefined **)((ulong)local_2e0 & 0xffffffff00000000);
      local_1b0 = (byte ***)&DAT_000000e8;
      pppplVar15 = (long ****)&local_1b0;
      auVar31 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_2e0);
      uVar14 = auVar31._8_8_;
      if (((auVar31._0_8_ & 1) != 0) &&
         (lVar9 = FUN_710392e290(0x10,0xe8,pppplVar15,ppppbVar19,param_5,param_6,param_7,param_8),
         uVar14 = extraout_x1_15, lVar9 != 0)) goto LAB_71019803d4;
    }
    lVar9 = 0;
  }
LAB_71019803d4:
  *(undefined8 *)(lVar9 + 0x10) = 0;
  *(undefined8 *)(lVar9 + 0x18) = 0;
  *(long *)lVar9 = lVar9;
  *(undefined8 *)(lVar9 + 8) = 0;
  *(undefined4 *)(lVar9 + 0xc0) = 0xffffffff;
  *(undefined1 *)(lVar9 + 0xc4) = 0;
  *(undefined8 *)(lVar9 + 0xb0) = 0;
  *(undefined8 *)(lVar9 + 0xb8) = 0xffffffff;
  *(undefined8 *)(lVar9 + 0xa0) = 0;
  *(undefined8 *)(lVar9 + 0xa8) = 0;
  *(undefined8 *)(lVar9 + 0x90) = 0;
  *(undefined8 *)(lVar9 + 0x98) = 0;
  *(undefined8 *)(lVar9 + 0x80) = 0;
  *(undefined8 *)(lVar9 + 0x88) = 0;
  *(undefined8 *)(lVar9 + 0x70) = 0;
  *(undefined8 *)(lVar9 + 0x78) = 0;
  *(undefined8 *)(lVar9 + 0x60) = 0;
  *(undefined8 *)(lVar9 + 0x68) = 0;
  *(undefined8 *)(lVar9 + 0x50) = 0;
  *(undefined8 *)(lVar9 + 0x58) = 0;
  *(undefined8 *)(lVar9 + 0x40) = 0;
  *(undefined8 *)(lVar9 + 0x48) = 0;
  *(undefined8 *)(lVar9 + 0x30) = 0;
  *(undefined8 *)(lVar9 + 0x38) = 0;
  *(undefined8 *)(lVar9 + 0x20) = 0;
  *(undefined8 *)(lVar9 + 0x28) = 0;
  FUN_7103776290((undefined8 *)(lVar9 + 200),uVar14,pppplVar15,ppppbVar19,param_5,param_6,param_7,
                 param_8);
  *(code **)(lVar9 + 0x28) = FUN_71019b76a0;
  *(undefined8 *)(lVar9 + 0x30) = 0;
  *(undefined8 *)(lVar9 + 0xdf) = 0;
  *(code **)(lVar9 + 0x38) = FUN_71019b76c0;
  *(undefined8 *)(lVar9 + 0x40) = 0;
  *(code **)(lVar9 + 0x48) = FUN_71019b7750;
  *(undefined8 *)(lVar9 + 0x50) = 0;
  *(undefined8 *)(lVar9 + 0xd8) = 0;
  *(code **)(lVar9 + 0x58) = FUN_71019b77f0;
  *(undefined8 *)(lVar9 + 0x60) = 0;
  if (0x12 < *(uint *)(lVar9 + 0xb4)) {
LAB_7101983318:
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(undefined4 *)(lVar9 + (long)(int)*(uint *)(lVar9 + 0xb4) * 4 + 0x68) = 0;
  puVar7[4] = lVar9;
  *(undefined2 *)(puVar7 + 1) = 0x101;
  *(undefined2 *)((long)puVar7 + 10) = (undefined2)local_2e0;
  *(undefined4 *)((long)puVar7 + 0xc) = 0x4001;
  *(undefined1 *)(puVar7 + 2) = 1;
  *(undefined4 *)((long)puVar7 + 0xc) = 0x11000;
  *(undefined2 *)((long)puVar7 + 0x11) = (undefined2)local_1b0;
  *(undefined1 *)((long)puVar7 + 0x13) = local_1b0._2_1_;
  *(undefined4 *)((long)puVar7 + 0x14) = 1;
  *(undefined1 *)(puVar7 + 3) = 0;
  plVar10 = (long *)param_1[0x11];
  param_1[0x11] = puVar7;
  uVar14 = extraout_x1_16;
  if (plVar10 != (long *)0x0) {
    (**(code **)(*plVar10 + 8))();
    uVar14 = extraout_x1_17;
  }
  puVar7 = (undefined8 *)*plVar26;
  if (puVar7 != (undefined8 *)0x0) {
    *plVar26 = 0;
    puVar28 = (undefined8 *)*puVar7;
    *puVar7 = 0;
    if (puVar28 != (undefined8 *)0x0) {
      FUN_7103773770(puVar28,uVar14,pppplVar15,ppppbVar19,param_5,param_6,param_7,param_8);
      FUN_710392eb40((ulong)puVar28);
    }
    FUN_710392eb40((ulong)puVar7);
  }
  puVar7 = (undefined8 *)
           FUN_710392e290(0x10,8,pppplVar15,ppppbVar19,param_5,param_6,param_7,param_8);
  if (puVar7 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_2e0 = (undefined **)((ulong)local_2e0 & 0xffffffff00000000);
      local_1b0 = (byte ***)&DAT_00000008;
      pppplVar15 = (long ****)&local_1b0;
      uVar8 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_2e0);
      if (((uVar8 & 1) != 0) &&
         (puVar7 = (undefined8 *)
                   FUN_710392e290(0x10,8,pppplVar15,ppppbVar19,param_5,param_6,param_7,param_8),
         puVar7 != (undefined8 *)0x0)) goto LAB_710198054c;
    }
    puVar7 = (undefined8 *)0x0;
  }
LAB_710198054c:
  puVar28 = (undefined8 *)
            FUN_710392e290(0x10,8,pppplVar15,ppppbVar19,param_5,param_6,param_7,param_8);
  uVar14 = extraout_x1_18;
  if (puVar28 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_2e0 = (undefined **)((ulong)local_2e0 & 0xffffffff00000000);
      local_1b0 = (byte ***)&DAT_00000008;
      pppplVar15 = (long ****)&local_1b0;
      auVar31 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_2e0);
      uVar14 = auVar31._8_8_;
      if (((auVar31._0_8_ & 1) != 0) &&
         (puVar28 = (undefined8 *)
                    FUN_710392e290(0x10,8,pppplVar15,ppppbVar19,param_5,param_6,param_7,param_8),
         uVar14 = extraout_x1_19, puVar28 != (undefined8 *)0x0)) goto LAB_71019805a8;
    }
    puVar28 = (undefined8 *)0x0;
  }
LAB_71019805a8:
  FUN_7103773200(puVar28,uVar14,pppplVar15,ppppbVar19,param_5,param_6,param_7,param_8);
  *puVar7 = puVar28;
  puVar28 = (undefined8 *)*plVar26;
  *plVar26 = (long)puVar7;
  if (puVar28 != (undefined8 *)0x0) {
    puVar7 = (undefined8 *)*puVar28;
    *puVar28 = 0;
    if (puVar7 != (undefined8 *)0x0) {
      FUN_7103773770(puVar7,extraout_x1_20,pppplVar15,ppppbVar19,param_5,param_6,param_7,param_8);
      FUN_710392eb40((ulong)puVar7);
    }
    FUN_710392eb40((ulong)puVar28);
    puVar7 = (undefined8 *)*plVar26;
  }
  FUN_71032cbf30(puVar7,*(long *)*param_1,(ulong *)&DAT_7104543928,(byte ****)0x1,param_5,param_6,
                 param_7,param_8);
  puVar7 = (undefined8 *)param_1[0x10];
  lVar29 = param_1[0x11];
  lVar22 = **(long **)*puVar7;
  uVar1 = *(undefined4 *)(lVar29 + 0x14);
  *(undefined4 *)(*(long *)(lVar22 + 0x600) + 0x494) = uVar1;
  lVar9 = *(long *)(lVar22 + 0x608);
  lVar22 = *(long *)(lVar22 + 0x610);
  if (lVar9 != lVar22) {
    uVar8 = (lVar22 + -0x10) - lVar9;
    uVar4 = ((uint)(uVar8 >> 4) & 0xfffffff) + 1;
    if ((uVar4 & 3) != 0) {
      lVar23 = -((ulong)uVar4 & 3);
      do {
        plVar26 = (long *)(lVar9 + 8);
        lVar9 = lVar9 + 0x10;
        lVar23 = lVar23 + 1;
        *(undefined4 *)(*plVar26 + 0x494) = uVar1;
      } while (lVar23 != 0);
    }
    if (0x2f < uVar8) {
      do {
        *(undefined4 *)(*(long *)(lVar9 + 8) + 0x494) = uVar1;
        *(undefined4 *)(*(long *)(lVar9 + 0x18) + 0x494) = uVar1;
        *(undefined4 *)(*(long *)(lVar9 + 0x28) + 0x494) = uVar1;
        plVar26 = (long *)(lVar9 + 0x38);
        lVar9 = lVar9 + 0x40;
        *(undefined4 *)(*plVar26 + 0x494) = uVar1;
      } while (lVar22 != lVar9);
    }
  }
  lVar29 = *(long *)(lVar29 + 0x20);
  lVar9 = *(long *)*puVar7;
  if ((undefined8 *)(lVar29 + 200) != (undefined8 *)(lVar9 + 8)) {
    **(undefined8 **)(lVar29 + 0xd0) = **(undefined8 **)(lVar9 + 0x10);
    *(undefined8 *)(*(long *)(lVar29 + 0xd0) + 8) = *(undefined8 *)(*(long *)(lVar9 + 0x10) + 8);
    lVar22 = *(long *)(lVar9 + 0x10);
    lVar9 = *(long *)(lVar29 + 0xd0);
    if (lVar9 != lVar22) {
      **(undefined8 **)(lVar9 + 0x18) = **(undefined8 **)(lVar22 + 0x18);
      *(undefined8 *)(*(long *)(lVar9 + 0x18) + 8) = *(undefined8 *)(*(long *)(lVar22 + 0x18) + 8);
      *(undefined8 *)(*(long *)(lVar9 + 0x18) + 0x10) =
           *(undefined8 *)(*(long *)(lVar22 + 0x18) + 0x10);
      *(undefined8 *)(*(long *)(lVar9 + 0x18) + 0x18) =
           *(undefined8 *)(*(long *)(lVar22 + 0x18) + 0x18);
    }
  }
  local_1a8 = 0x101;
  local_1b0 = (byte ***)0x0;
  local_1a6 = 0;
  local_1a0 = 1;
  local_19c = 1;
  local_19a = 1;
  local_1a2 = 0;
  local_198 = &DAT_41f0000000000000;
  local_190 = 0;
  local_160 = (long *)0x0;
  local_130 = (long *)0x0;
  local_100 = (long *)0x0;
  local_d0 = (long *)0x0;
  local_a0 = (long *)0x0;
  local_90 = 0;
  FUN_710337df20((long)&local_1b0);
  ppppbVar19 = (byte ****)&local_1b0;
  local_1a8 = local_1a8 & 0xff;
  FUN_7103770b30((long *)(lVar29 + 0xd8),(undefined8 *)(lVar29 + 200),(long ****)"selector_0",
                 ppppbVar19,param_5,param_6,param_7,param_8);
  FUN_71037717d0((long *)(lVar29 + 0xd8),0,"set_parts_btn_00",ppppbVar19,param_5,param_6,param_7,
                 param_8);
  if (alStack_c0 == local_a0) {
    pcVar20 = *(code **)(*local_a0 + 0x20);
LAB_71019807dc:
    (*pcVar20)();
  }
  else if (local_a0 != (long *)0x0) {
    pcVar20 = *(code **)(*local_a0 + 0x28);
    goto LAB_71019807dc;
  }
  if (alStack_f0 == local_d0) {
    pcVar20 = *(code **)(*local_d0 + 0x20);
LAB_710198080c:
    (*pcVar20)();
  }
  else if (local_d0 != (long *)0x0) {
    pcVar20 = *(code **)(*local_d0 + 0x28);
    goto LAB_710198080c;
  }
  if (alStack_120 == local_100) {
    pcVar20 = *(code **)(*local_100 + 0x20);
LAB_710198083c:
    (*pcVar20)();
  }
  else if (local_100 != (long *)0x0) {
    pcVar20 = *(code **)(*local_100 + 0x28);
    goto LAB_710198083c;
  }
  if (alStack_150 == local_130) {
    pcVar20 = *(code **)(*local_130 + 0x20);
LAB_710198086c:
    (*pcVar20)();
  }
  else if (local_130 != (long *)0x0) {
    pcVar20 = *(code **)(*local_130 + 0x28);
    goto LAB_710198086c;
  }
  if (alStack_180 == local_160) {
    pcVar20 = *(code **)(*local_160 + 0x20);
LAB_710198089c:
    (*pcVar20)();
  }
  else if (local_160 != (long *)0x0) {
    pcVar20 = *(code **)(*local_160 + 0x28);
    goto LAB_710198089c;
  }
  lVar9 = *(long *)*puVar11;
  if (puVar6 != (undefined8 *)(lVar9 + 8)) {
    *(undefined8 *)param_1[3] = **(undefined8 **)(lVar9 + 0x10);
    *(undefined8 *)(param_1[3] + 8) = *(undefined8 *)(*(long *)(lVar9 + 0x10) + 8);
    lVar29 = *(long *)(lVar9 + 0x10);
    lVar9 = param_1[3];
    if (lVar9 != lVar29) {
      **(undefined8 **)(lVar9 + 0x18) = **(undefined8 **)(lVar29 + 0x18);
      *(undefined8 *)(*(long *)(lVar9 + 0x18) + 8) = *(undefined8 *)(*(long *)(lVar29 + 0x18) + 8);
      *(undefined8 *)(*(long *)(lVar9 + 0x18) + 0x10) =
           *(undefined8 *)(*(long *)(lVar29 + 0x18) + 0x10);
      *(undefined8 *)(*(long *)(lVar9 + 0x18) + 0x18) =
           *(undefined8 *)(*(long *)(lVar29 + 0x18) + 0x18);
    }
  }
  plVar26 = param_1 + 0x38;
  lVar9 = **(long **)*puVar11;
  *(undefined4 *)(*(long *)(lVar9 + 0x600) + 0x18) = 0x200;
  lVar29 = *(long *)(lVar9 + 0x600);
  *(undefined4 *)(lVar29 + 0x1c) = 0x40000310;
  *(undefined4 *)(lVar29 + 0xe8) = 0xf00ffcef;
  *(undefined4 *)(*(long *)(lVar9 + 0x600) + 0xe0) = 0x300;
  *(undefined4 *)(*(long *)(lVar9 + 0x600) + 0xdc) = 0x300;
  local_1a8 = 0x101;
  local_1b0 = (byte ***)0x0;
  local_1a2 = 0;
  local_1a6 = 0;
  local_1a0 = 1;
  local_19c = 1;
  local_19a = 1;
  local_198 = &DAT_41f0000000000000;
  local_190 = 0;
  local_160 = (long *)0x0;
  local_130 = (long *)0x0;
  local_100 = (long *)0x0;
  local_d0 = (long *)0x0;
  local_a0 = (long *)0x0;
  local_90 = 0;
  FUN_710337df20((long)&local_1b0);
  local_2e0 = &PTR_FUN_71050a6fb8;
  local_2c0 = &local_2e0;
  FUN_7101989a30(&local_2e0,alStack_120);
  if (&local_2e0 == local_2c0) {
    (**(code **)(*local_2c0 + 0x20))();
  }
  else if (local_2c0 != (long *)0x0) {
    (**(code **)(*local_2c0 + 0x28))();
  }
  ppppbVar19 = (byte ****)&local_1b0;
  local_1b0 = (byte ***)0x0;
  local_1a8 = CONCAT11(local_1a8._1_1_,1);
  FUN_7103770b30(plVar26,puVar6,(long ****)"selector_0",ppppbVar19,param_5,param_6,param_7,param_8);
  FUN_71037717d0(plVar26,0,"set_parts_btn0_00",ppppbVar19,param_5,param_6,param_7,param_8);
  lVar9 = *(long *)(*plVar26 + 0x1b8);
  if (lVar9 != 0) {
    lVar29 = *plVar26 + 0x1b8;
    lVar22 = lVar29;
    lVar23 = lVar9;
    do {
      bVar3 = *(int *)(lVar23 + 0x20) < 0;
      if (!bVar3) {
        lVar22 = lVar23;
      }
      lVar23 = *(long *)(lVar23 + (ulong)bVar3 * 8);
    } while (lVar23 != 0);
    if (((lVar22 != lVar29) && (*(int *)(lVar22 + 0x20) < 1)) &&
       (plVar10 = *(long **)(lVar22 + 0x28), plVar10 != (long *)0x0)) {
      (**(code **)(*plVar10 + 0x1f8))(plVar10,1);
      (**(code **)(*plVar10 + 0x388))(plVar10,0,0);
      lVar29 = *plVar26 + 0x1b8;
      lVar9 = *(long *)(*plVar26 + 0x1b8);
    }
    lVar22 = lVar29;
    if (lVar9 != 0) {
      do {
        bVar3 = *(int *)(lVar9 + 0x20) < 0;
        if (!bVar3) {
          lVar22 = lVar9;
        }
        lVar9 = *(long *)(lVar9 + (ulong)bVar3 * 8);
      } while (lVar9 != 0);
      if (((lVar22 != lVar29) && (*(int *)(lVar22 + 0x20) < 1)) &&
         (plVar10 = *(long **)(lVar22 + 0x28), plVar10 != (long *)0x0)) {
        (**(code **)(*plVar10 + 0x208))(plVar10,1);
        (**(code **)(*plVar10 + 0x388))(plVar10,0,0);
      }
    }
  }
  FUN_71037717d0(plVar26,1,"set_parts_btn0_01",ppppbVar19,param_5,param_6,param_7,param_8);
  lVar9 = *(long *)(*plVar26 + 0x1b8);
  if (lVar9 != 0) {
    lVar29 = *plVar26 + 0x1b8;
    lVar22 = lVar29;
    lVar23 = lVar9;
    do {
      if (0 < *(int *)(lVar23 + 0x20)) {
        lVar22 = lVar23;
      }
      lVar23 = *(long *)(lVar23 + (ulong)(*(int *)(lVar23 + 0x20) < 1) * 8);
    } while (lVar23 != 0);
    if (((lVar22 != lVar29) && (*(int *)(lVar22 + 0x20) < 2)) &&
       (plVar10 = *(long **)(lVar22 + 0x28), plVar10 != (long *)0x0)) {
      (**(code **)(*plVar10 + 0x1f8))(plVar10,1);
      (**(code **)(*plVar10 + 0x388))(plVar10,0,0);
      lVar29 = *plVar26 + 0x1b8;
      lVar9 = *(long *)(*plVar26 + 0x1b8);
    }
    lVar22 = lVar29;
    if (lVar9 != 0) {
      do {
        if (0 < *(int *)(lVar9 + 0x20)) {
          lVar22 = lVar9;
        }
        lVar9 = *(long *)(lVar9 + (ulong)(*(int *)(lVar9 + 0x20) < 1) * 8);
      } while (lVar9 != 0);
      if (((lVar22 != lVar29) && (*(int *)(lVar22 + 0x20) < 2)) &&
         (plVar10 = *(long **)(lVar22 + 0x28), plVar10 != (long *)0x0)) {
        (**(code **)(*plVar10 + 0x208))(plVar10,1);
        (**(code **)(*plVar10 + 0x388))(plVar10,0,0);
      }
    }
  }
  plVar10 = param_1 + 0x39;
  FUN_71037717d0(plVar26,2,"set_parts_btn0_02",ppppbVar19,param_5,param_6,param_7,param_8);
  lVar9 = *(long *)(*plVar26 + 0x1b8);
  if (lVar9 != 0) {
    lVar29 = *plVar26 + 0x1b8;
    lVar22 = lVar29;
    lVar23 = lVar9;
    do {
      if (1 < *(int *)(lVar23 + 0x20)) {
        lVar22 = lVar23;
      }
      lVar23 = *(long *)(lVar23 + (ulong)(*(int *)(lVar23 + 0x20) < 2) * 8);
    } while (lVar23 != 0);
    if (((lVar22 != lVar29) && (*(int *)(lVar22 + 0x20) < 3)) &&
       (plVar30 = *(long **)(lVar22 + 0x28), plVar30 != (long *)0x0)) {
      (**(code **)(*plVar30 + 0x1f8))(plVar30,1);
      (**(code **)(*plVar30 + 0x388))(plVar30,0,0);
      lVar29 = *plVar26 + 0x1b8;
      lVar9 = *(long *)(*plVar26 + 0x1b8);
    }
    lVar22 = lVar29;
    if (lVar9 != 0) {
      do {
        if (1 < *(int *)(lVar9 + 0x20)) {
          lVar22 = lVar9;
        }
        lVar9 = *(long *)(lVar9 + (ulong)(*(int *)(lVar9 + 0x20) < 2) * 8);
      } while (lVar9 != 0);
      if (((lVar22 != lVar29) && (*(int *)(lVar22 + 0x20) < 3)) &&
         (plVar30 = *(long **)(lVar22 + 0x28), plVar30 != (long *)0x0)) {
        (**(code **)(*plVar30 + 0x208))(plVar30,1);
        (**(code **)(*plVar30 + 0x388))(plVar30,0,0);
      }
    }
  }
  FUN_7103771a80(plVar26,0,0);
  (**(code **)(*(long *)*plVar26 + 0x70))((long *)*plVar26,0);
  ppppbVar19 = (byte ****)&local_1b0;
  FUN_7103770b30(plVar10,puVar6,(long ****)"selector_1",ppppbVar19,param_5,param_6,param_7,param_8);
  FUN_71037717d0(plVar10,3,"set_parts_btn0_03",ppppbVar19,param_5,param_6,param_7,param_8);
  lVar9 = *(long *)(*plVar10 + 0x1b8);
  if (lVar9 != 0) {
    lVar29 = *plVar10 + 0x1b8;
    lVar22 = lVar29;
    lVar23 = lVar9;
    do {
      if (2 < *(int *)(lVar23 + 0x20)) {
        lVar22 = lVar23;
      }
      lVar23 = *(long *)(lVar23 + (ulong)(*(int *)(lVar23 + 0x20) < 3) * 8);
    } while (lVar23 != 0);
    if (((lVar22 != lVar29) && (*(int *)(lVar22 + 0x20) < 4)) &&
       (plVar26 = *(long **)(lVar22 + 0x28), plVar26 != (long *)0x0)) {
      (**(code **)(*plVar26 + 0x1f8))(plVar26,1);
      (**(code **)(*plVar26 + 0x388))(plVar26,0,0);
      lVar29 = *plVar10 + 0x1b8;
      lVar9 = *(long *)(*plVar10 + 0x1b8);
    }
    lVar22 = lVar29;
    if (lVar9 != 0) {
      do {
        if (2 < *(int *)(lVar9 + 0x20)) {
          lVar22 = lVar9;
        }
        lVar9 = *(long *)(lVar9 + (ulong)(*(int *)(lVar9 + 0x20) < 3) * 8);
      } while (lVar9 != 0);
      if (((lVar22 != lVar29) && (*(int *)(lVar22 + 0x20) < 4)) &&
         (plVar26 = *(long **)(lVar22 + 0x28), plVar26 != (long *)0x0)) {
        (**(code **)(*plVar26 + 0x208))(plVar26,1);
        (**(code **)(*plVar26 + 0x388))(plVar26,0,0);
      }
    }
  }
  FUN_7103771a80(plVar10,3,0);
  (**(code **)(*(long *)*plVar10 + 0x70))((long *)*plVar10,0);
  if (alStack_c0 == local_a0) {
    (**(code **)(*local_a0 + 0x20))();
  }
  else if (local_a0 != (long *)0x0) {
    (**(code **)(*local_a0 + 0x28))();
  }
  if (alStack_f0 == local_d0) {
    pcVar20 = *(code **)(*local_d0 + 0x20);
LAB_7101980f08:
    (*pcVar20)();
  }
  else if (local_d0 != (long *)0x0) {
    pcVar20 = *(code **)(*local_d0 + 0x28);
    goto LAB_7101980f08;
  }
  if (alStack_120 == local_100) {
    pcVar20 = *(code **)(*local_100 + 0x20);
LAB_7101980f38:
    (*pcVar20)();
  }
  else if (local_100 != (long *)0x0) {
    pcVar20 = *(code **)(*local_100 + 0x28);
    goto LAB_7101980f38;
  }
  if (alStack_150 == local_130) {
    pcVar20 = *(code **)(*local_130 + 0x20);
LAB_7101980f68:
    (*pcVar20)();
  }
  else if (local_130 != (long *)0x0) {
    pcVar20 = *(code **)(*local_130 + 0x28);
    goto LAB_7101980f68;
  }
  if (alStack_180 == local_160) {
    pcVar20 = *(code **)(*local_160 + 0x20);
LAB_7101980f98:
    (*pcVar20)();
  }
  else if (local_160 != (long *)0x0) {
    pcVar20 = *(code **)(*local_160 + 0x28);
    goto LAB_7101980f98;
  }
  local_1a8 = 0x101;
  local_1b0 = (byte ***)0x0;
  local_1a6 = 0;
  local_1a0 = 1;
  plVar26 = param_1 + 0x3b;
  local_19c = 1;
  local_19a = 1;
  local_1a2 = 0;
  local_198 = &DAT_41f0000000000000;
  local_190 = 0;
  local_160 = (long *)0x0;
  local_130 = (long *)0x0;
  local_100 = (long *)0x0;
  local_d0 = (long *)0x0;
  local_a0 = (long *)0x0;
  local_90 = 0;
  FUN_710337df20((long)&local_1b0);
  local_2e0 = &PTR_FUN_71050a7000;
  local_2c0 = &local_2e0;
  FUN_7101989a30(&local_2e0,alStack_120);
  if (&local_2e0 == local_2c0) {
    (**(code **)(*local_2c0 + 0x20))();
  }
  else if (local_2c0 != (long *)0x0) {
    (**(code **)(*local_2c0 + 0x28))();
  }
  ppppbVar19 = (byte ****)&local_1b0;
  local_1b0 = (byte ***)0x0;
  local_1a8 = CONCAT11(local_1a8._1_1_,1);
  FUN_7103770b30(plVar26,puVar6,(long ****)"selector_2",ppppbVar19,param_5,param_6,param_7,param_8);
  FUN_71037717d0(plVar26,0,"set_parts_btn1_00",ppppbVar19,param_5,param_6,param_7,param_8);
  lVar9 = *(long *)(*plVar26 + 0x1b8);
  if (lVar9 != 0) {
    lVar29 = *plVar26 + 0x1b8;
    lVar22 = lVar29;
    lVar23 = lVar9;
    do {
      bVar3 = *(int *)(lVar23 + 0x20) < 0;
      if (!bVar3) {
        lVar22 = lVar23;
      }
      lVar23 = *(long *)(lVar23 + (ulong)bVar3 * 8);
    } while (lVar23 != 0);
    if (((lVar22 != lVar29) && (*(int *)(lVar22 + 0x20) < 1)) &&
       (plVar10 = *(long **)(lVar22 + 0x28), plVar10 != (long *)0x0)) {
      (**(code **)(*plVar10 + 0x1f8))(plVar10,1);
      (**(code **)(*plVar10 + 0x388))(plVar10,0,0);
      lVar29 = *plVar26 + 0x1b8;
      lVar9 = *(long *)(*plVar26 + 0x1b8);
    }
    lVar22 = lVar29;
    if (lVar9 != 0) {
      do {
        bVar3 = *(int *)(lVar9 + 0x20) < 0;
        if (!bVar3) {
          lVar22 = lVar9;
        }
        lVar9 = *(long *)(lVar9 + (ulong)bVar3 * 8);
      } while (lVar9 != 0);
      if (((lVar22 != lVar29) && (*(int *)(lVar22 + 0x20) < 1)) &&
         (plVar10 = *(long **)(lVar22 + 0x28), plVar10 != (long *)0x0)) {
        (**(code **)(*plVar10 + 0x208))(plVar10,1);
        (**(code **)(*plVar10 + 0x388))(plVar10,0,0);
      }
    }
  }
  FUN_71037717d0(plVar26,1,"set_parts_btn1_01",ppppbVar19,param_5,param_6,param_7,param_8);
  lVar9 = *(long *)(*plVar26 + 0x1b8);
  if (lVar9 != 0) {
    lVar29 = *plVar26 + 0x1b8;
    lVar22 = lVar29;
    lVar23 = lVar9;
    do {
      if (0 < *(int *)(lVar23 + 0x20)) {
        lVar22 = lVar23;
      }
      lVar23 = *(long *)(lVar23 + (ulong)(*(int *)(lVar23 + 0x20) < 1) * 8);
    } while (lVar23 != 0);
    if (((lVar22 != lVar29) && (*(int *)(lVar22 + 0x20) < 2)) &&
       (plVar10 = *(long **)(lVar22 + 0x28), plVar10 != (long *)0x0)) {
      (**(code **)(*plVar10 + 0x1f8))(plVar10,1);
      (**(code **)(*plVar10 + 0x388))(plVar10,0,0);
      lVar29 = *plVar26 + 0x1b8;
      lVar9 = *(long *)(*plVar26 + 0x1b8);
    }
    lVar22 = lVar29;
    if (lVar9 != 0) {
      do {
        if (0 < *(int *)(lVar9 + 0x20)) {
          lVar22 = lVar9;
        }
        lVar9 = *(long *)(lVar9 + (ulong)(*(int *)(lVar9 + 0x20) < 1) * 8);
      } while (lVar9 != 0);
      if (((lVar22 != lVar29) && (*(int *)(lVar22 + 0x20) < 2)) &&
         (plVar10 = *(long **)(lVar22 + 0x28), plVar10 != (long *)0x0)) {
        (**(code **)(*plVar10 + 0x208))(plVar10,1);
        (**(code **)(*plVar10 + 0x388))(plVar10,0,0);
      }
    }
  }
  FUN_71037717d0(plVar26,2,"set_parts_btn1_02",ppppbVar19,param_5,param_6,param_7,param_8);
  lVar9 = *(long *)(*plVar26 + 0x1b8);
  if (lVar9 != 0) {
    lVar29 = *plVar26 + 0x1b8;
    lVar22 = lVar29;
    lVar23 = lVar9;
    do {
      if (1 < *(int *)(lVar23 + 0x20)) {
        lVar22 = lVar23;
      }
      lVar23 = *(long *)(lVar23 + (ulong)(*(int *)(lVar23 + 0x20) < 2) * 8);
    } while (lVar23 != 0);
    if (((lVar22 != lVar29) && (*(int *)(lVar22 + 0x20) < 3)) &&
       (plVar10 = *(long **)(lVar22 + 0x28), plVar10 != (long *)0x0)) {
      (**(code **)(*plVar10 + 0x1f8))(plVar10,1);
      (**(code **)(*plVar10 + 0x388))(plVar10,0,0);
      lVar29 = *plVar26 + 0x1b8;
      lVar9 = *(long *)(*plVar26 + 0x1b8);
    }
    lVar22 = lVar29;
    if (lVar9 != 0) {
      do {
        if (1 < *(int *)(lVar9 + 0x20)) {
          lVar22 = lVar9;
        }
        lVar9 = *(long *)(lVar9 + (ulong)(*(int *)(lVar9 + 0x20) < 2) * 8);
      } while (lVar9 != 0);
      if (((lVar22 != lVar29) && (*(int *)(lVar22 + 0x20) < 3)) &&
         (plVar10 = *(long **)(lVar22 + 0x28), plVar10 != (long *)0x0)) {
        (**(code **)(*plVar10 + 0x208))(plVar10,1);
        (**(code **)(*plVar10 + 0x388))(plVar10,0,0);
      }
    }
  }
  pcVar16 = "set_parts_btn1_03";
  FUN_71037717d0(plVar26,3,"set_parts_btn1_03",ppppbVar19,param_5,param_6,param_7,param_8);
  lVar9 = *(long *)(*plVar26 + 0x1b8);
  if (lVar9 != 0) {
    lVar29 = *plVar26 + 0x1b8;
    lVar22 = lVar29;
    lVar23 = lVar9;
    do {
      if (2 < *(int *)(lVar23 + 0x20)) {
        lVar22 = lVar23;
      }
      lVar23 = *(long *)(lVar23 + (ulong)(*(int *)(lVar23 + 0x20) < 3) * 8);
    } while (lVar23 != 0);
    if (((lVar22 != lVar29) && (*(int *)(lVar22 + 0x20) < 4)) &&
       (plVar10 = *(long **)(lVar22 + 0x28), plVar10 != (long *)0x0)) {
      (**(code **)(*plVar10 + 0x1f8))(plVar10,1);
      pcVar16 = (char *)0x0;
      (**(code **)(*plVar10 + 0x388))(plVar10,0);
      lVar29 = *plVar26 + 0x1b8;
      lVar9 = *(long *)(*plVar26 + 0x1b8);
    }
    lVar22 = lVar29;
    if (lVar9 != 0) {
      do {
        if (2 < *(int *)(lVar9 + 0x20)) {
          lVar22 = lVar9;
        }
        lVar9 = *(long *)(lVar9 + (ulong)(*(int *)(lVar9 + 0x20) < 3) * 8);
      } while (lVar9 != 0);
      if (((lVar22 != lVar29) && (*(int *)(lVar22 + 0x20) < 4)) &&
         (plVar10 = *(long **)(lVar22 + 0x28), plVar10 != (long *)0x0)) {
        (**(code **)(*plVar10 + 0x208))(plVar10,1);
        pcVar16 = (char *)0x0;
        (**(code **)(*plVar10 + 0x388))(plVar10,0);
      }
    }
  }
  FUN_7103776640(&local_2e0,(long)puVar6,(byte ****)"set_parts_btn1_03",pcVar16,ppppbVar19,param_5,
                 param_6,param_7,param_8);
  uVar8 = local_2d8;
  if (param_1 + 4 != &local_2e0) {
    local_2d8 = 0;
    uVar25 = param_1[5];
    param_1[5] = uVar8;
    if (uVar25 != 0) {
      uVar8 = *(ulong *)(uVar25 + 0x18);
      *(undefined ***)(uVar25 + 0x10) = &PTR_FUN_710523d9a8;
      *(undefined8 *)(uVar25 + 0x18) = 0;
      if (uVar8 != 0) {
        FUN_710392eb40(uVar8);
      }
      FUN_710392eb40(uVar25);
    }
  }
  uVar8 = local_2d8;
  plVar10 = param_1 + 0x3c;
  local_2e0 = &PTR_FUN_710523d988;
  local_2d8 = 0;
  if (uVar8 != 0) {
    uVar25 = *(ulong *)(uVar8 + 0x18);
    *(undefined ***)(uVar8 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar8 + 0x18) = 0;
    if (uVar25 != 0) {
      FUN_710392eb40(uVar25);
    }
    FUN_710392eb40(uVar8);
  }
  local_2e0 = (undefined **)0x106a2070e6;
  FUN_7103772070(*plVar26,3,(long ****)&local_2e0,ppppbVar19,param_5,param_6,param_7,param_8);
  ppppbVar19 = (byte ****)&local_1b0;
  FUN_7103770b30(plVar10,puVar6,(long ****)"selector_3",ppppbVar19,param_5,param_6,param_7,param_8);
  pcVar16 = "set_parts_btn2_00";
  FUN_71037717d0(plVar10,0,"set_parts_btn2_00",ppppbVar19,param_5,param_6,param_7,param_8);
  lVar9 = *(long *)(*plVar10 + 0x1b8);
  if (lVar9 != 0) {
    lVar29 = *plVar10 + 0x1b8;
    lVar22 = lVar29;
    lVar23 = lVar9;
    do {
      bVar3 = *(int *)(lVar23 + 0x20) < 0;
      if (!bVar3) {
        lVar22 = lVar23;
      }
      lVar23 = *(long *)(lVar23 + (ulong)bVar3 * 8);
    } while (lVar23 != 0);
    if (((lVar22 != lVar29) && (*(int *)(lVar22 + 0x20) < 1)) &&
       (plVar26 = *(long **)(lVar22 + 0x28), plVar26 != (long *)0x0)) {
      (**(code **)(*plVar26 + 0x1f8))(plVar26,1);
      pcVar16 = (char *)0x0;
      (**(code **)(*plVar26 + 0x388))(plVar26,0);
      lVar29 = *plVar10 + 0x1b8;
      lVar9 = *(long *)(*plVar10 + 0x1b8);
    }
    lVar22 = lVar29;
    if (lVar9 != 0) {
      do {
        bVar3 = *(int *)(lVar9 + 0x20) < 0;
        if (!bVar3) {
          lVar22 = lVar9;
        }
        lVar9 = *(long *)(lVar9 + (ulong)bVar3 * 8);
      } while (lVar9 != 0);
      if (((lVar22 != lVar29) && (*(int *)(lVar22 + 0x20) < 1)) &&
         (plVar26 = *(long **)(lVar22 + 0x28), plVar26 != (long *)0x0)) {
        (**(code **)(*plVar26 + 0x208))(plVar26,1);
        pcVar16 = (char *)0x0;
        (**(code **)(*plVar26 + 0x388))(plVar26,0);
      }
    }
  }
  FUN_7103776640(&local_2e0,(long)puVar6,(byte ****)"set_parts_btn2_00",pcVar16,ppppbVar19,param_5,
                 param_6,param_7,param_8);
  uVar8 = local_2d8;
  if (param_1 + 6 != &local_2e0) {
    local_2d8 = 0;
    uVar25 = param_1[7];
    param_1[7] = uVar8;
    if (uVar25 != 0) {
      uVar8 = *(ulong *)(uVar25 + 0x18);
      *(undefined ***)(uVar25 + 0x10) = &PTR_FUN_710523d9a8;
      *(undefined8 *)(uVar25 + 0x18) = 0;
      if (uVar8 != 0) {
        FUN_710392eb40(uVar8);
      }
      FUN_710392eb40(uVar25);
    }
  }
  uVar8 = local_2d8;
  local_2e0 = &PTR_FUN_710523d988;
  local_2d8 = 0;
  if (uVar8 != 0) {
    uVar25 = *(ulong *)(uVar8 + 0x18);
    *(undefined ***)(uVar8 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar8 + 0x18) = 0;
    if (uVar25 != 0) {
      FUN_710392eb40(uVar25);
    }
    FUN_710392eb40(uVar8);
  }
  pcVar16 = "set_parts_btn2_01";
  FUN_71037717d0(plVar10,1,"set_parts_btn2_01",ppppbVar19,param_5,param_6,param_7,param_8);
  lVar9 = *(long *)(*plVar10 + 0x1b8);
  if (lVar9 != 0) {
    lVar29 = *plVar10 + 0x1b8;
    lVar22 = lVar29;
    lVar23 = lVar9;
    do {
      if (0 < *(int *)(lVar23 + 0x20)) {
        lVar22 = lVar23;
      }
      lVar23 = *(long *)(lVar23 + (ulong)(*(int *)(lVar23 + 0x20) < 1) * 8);
    } while (lVar23 != 0);
    if (((lVar22 != lVar29) && (*(int *)(lVar22 + 0x20) < 2)) &&
       (plVar26 = *(long **)(lVar22 + 0x28), plVar26 != (long *)0x0)) {
      (**(code **)(*plVar26 + 0x1f8))(plVar26,1);
      pcVar16 = (char *)0x0;
      (**(code **)(*plVar26 + 0x388))(plVar26,0);
      lVar29 = *plVar10 + 0x1b8;
      lVar9 = *(long *)(*plVar10 + 0x1b8);
    }
    lVar22 = lVar29;
    if (lVar9 != 0) {
      do {
        if (0 < *(int *)(lVar9 + 0x20)) {
          lVar22 = lVar9;
        }
        lVar9 = *(long *)(lVar9 + (ulong)(*(int *)(lVar9 + 0x20) < 1) * 8);
      } while (lVar9 != 0);
      if (((lVar22 != lVar29) && (*(int *)(lVar22 + 0x20) < 2)) &&
         (plVar26 = *(long **)(lVar22 + 0x28), plVar26 != (long *)0x0)) {
        (**(code **)(*plVar26 + 0x208))(plVar26,1);
        pcVar16 = (char *)0x0;
        (**(code **)(*plVar26 + 0x388))(plVar26,0);
      }
    }
  }
  FUN_7103776640(&local_2e0,(long)puVar6,(byte ****)"set_parts_btn2_01",pcVar16,ppppbVar19,param_5,
                 param_6,param_7,param_8);
  uVar8 = local_2d8;
  if (param_1 + 8 != &local_2e0) {
    local_2d8 = 0;
    uVar25 = param_1[9];
    param_1[9] = uVar8;
    if (uVar25 != 0) {
      uVar8 = *(ulong *)(uVar25 + 0x18);
      *(undefined ***)(uVar25 + 0x10) = &PTR_FUN_710523d9a8;
      *(undefined8 *)(uVar25 + 0x18) = 0;
      if (uVar8 != 0) {
        FUN_710392eb40(uVar8);
      }
      FUN_710392eb40(uVar25);
    }
  }
  uVar8 = local_2d8;
  local_2e0 = &PTR_FUN_710523d988;
  local_2d8 = 0;
  if (uVar8 != 0) {
    uVar25 = *(ulong *)(uVar8 + 0x18);
    *(undefined ***)(uVar8 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar8 + 0x18) = 0;
    if (uVar25 != 0) {
      FUN_710392eb40(uVar25);
    }
    FUN_710392eb40(uVar8);
  }
  pcVar16 = "set_parts_btn2_02";
  FUN_71037717d0(plVar10,2,"set_parts_btn2_02",ppppbVar19,param_5,param_6,param_7,param_8);
  lVar9 = *(long *)(*plVar10 + 0x1b8);
  if (lVar9 != 0) {
    lVar29 = *plVar10 + 0x1b8;
    lVar22 = lVar29;
    lVar23 = lVar9;
    do {
      if (1 < *(int *)(lVar23 + 0x20)) {
        lVar22 = lVar23;
      }
      lVar23 = *(long *)(lVar23 + (ulong)(*(int *)(lVar23 + 0x20) < 2) * 8);
    } while (lVar23 != 0);
    if (((lVar22 != lVar29) && (*(int *)(lVar22 + 0x20) < 3)) &&
       (plVar26 = *(long **)(lVar22 + 0x28), plVar26 != (long *)0x0)) {
      (**(code **)(*plVar26 + 0x1f8))(plVar26,1);
      pcVar16 = (char *)0x0;
      (**(code **)(*plVar26 + 0x388))(plVar26,0);
      lVar29 = *plVar10 + 0x1b8;
      lVar9 = *(long *)(*plVar10 + 0x1b8);
    }
    lVar22 = lVar29;
    if (lVar9 != 0) {
      do {
        if (1 < *(int *)(lVar9 + 0x20)) {
          lVar22 = lVar9;
        }
        lVar9 = *(long *)(lVar9 + (ulong)(*(int *)(lVar9 + 0x20) < 2) * 8);
      } while (lVar9 != 0);
      if (((lVar22 != lVar29) && (*(int *)(lVar22 + 0x20) < 3)) &&
         (plVar26 = *(long **)(lVar22 + 0x28), plVar26 != (long *)0x0)) {
        (**(code **)(*plVar26 + 0x208))(plVar26,1);
        pcVar16 = (char *)0x0;
        (**(code **)(*plVar26 + 0x388))(plVar26,0);
      }
    }
  }
  FUN_7103776640(&local_2e0,(long)puVar6,(byte ****)"set_parts_btn2_02",pcVar16,ppppbVar19,param_5,
                 param_6,param_7,param_8);
  uVar8 = local_2d8;
  if (param_1 + 10 != &local_2e0) {
    local_2d8 = 0;
    uVar25 = param_1[0xb];
    param_1[0xb] = uVar8;
    if (uVar25 != 0) {
      uVar8 = *(ulong *)(uVar25 + 0x18);
      *(undefined ***)(uVar25 + 0x10) = &PTR_FUN_710523d9a8;
      *(undefined8 *)(uVar25 + 0x18) = 0;
      if (uVar8 != 0) {
        FUN_710392eb40(uVar8);
      }
      FUN_710392eb40(uVar25);
    }
  }
  uVar8 = local_2d8;
  local_2e0 = &PTR_FUN_710523d988;
  local_2d8 = 0;
  if (uVar8 != 0) {
    uVar25 = *(ulong *)(uVar8 + 0x18);
    *(undefined ***)(uVar8 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar8 + 0x18) = 0;
    if (uVar25 != 0) {
      FUN_710392eb40(uVar25);
    }
    FUN_710392eb40(uVar8);
  }
  pcVar16 = "set_parts_btn2_03";
  FUN_71037717d0(plVar10,3,"set_parts_btn2_03",ppppbVar19,param_5,param_6,param_7,param_8);
  lVar9 = *(long *)(*plVar10 + 0x1b8);
  if (lVar9 != 0) {
    lVar29 = *plVar10 + 0x1b8;
    lVar22 = lVar29;
    lVar23 = lVar9;
    do {
      if (2 < *(int *)(lVar23 + 0x20)) {
        lVar22 = lVar23;
      }
      lVar23 = *(long *)(lVar23 + (ulong)(*(int *)(lVar23 + 0x20) < 3) * 8);
    } while (lVar23 != 0);
    if (((lVar22 != lVar29) && (*(int *)(lVar22 + 0x20) < 4)) &&
       (plVar26 = *(long **)(lVar22 + 0x28), plVar26 != (long *)0x0)) {
      (**(code **)(*plVar26 + 0x1f8))(plVar26,1);
      pcVar16 = (char *)0x0;
      (**(code **)(*plVar26 + 0x388))(plVar26,0);
      lVar29 = *plVar10 + 0x1b8;
      lVar9 = *(long *)(*plVar10 + 0x1b8);
    }
    lVar22 = lVar29;
    if (lVar9 != 0) {
      do {
        if (2 < *(int *)(lVar9 + 0x20)) {
          lVar22 = lVar9;
        }
        lVar9 = *(long *)(lVar9 + (ulong)(*(int *)(lVar9 + 0x20) < 3) * 8);
      } while (lVar9 != 0);
      if (((lVar22 != lVar29) && (*(int *)(lVar22 + 0x20) < 4)) &&
         (plVar26 = *(long **)(lVar22 + 0x28), plVar26 != (long *)0x0)) {
        (**(code **)(*plVar26 + 0x208))(plVar26,1);
        pcVar16 = (char *)0x0;
        (**(code **)(*plVar26 + 0x388))(plVar26,0);
      }
    }
  }
  FUN_7103776640(&local_2e0,(long)puVar6,(byte ****)"set_parts_btn2_03",pcVar16,ppppbVar19,param_5,
                 param_6,param_7,param_8);
  uVar8 = local_2d8;
  if (param_1 + 0xc != &local_2e0) {
    local_2d8 = 0;
    uVar25 = param_1[0xd];
    param_1[0xd] = uVar8;
    if (uVar25 != 0) {
      uVar8 = *(ulong *)(uVar25 + 0x18);
      *(undefined ***)(uVar25 + 0x10) = &PTR_FUN_710523d9a8;
      *(undefined8 *)(uVar25 + 0x18) = 0;
      if (uVar8 != 0) {
        FUN_710392eb40(uVar8);
      }
      FUN_710392eb40(uVar25);
    }
  }
  uVar8 = local_2d8;
  local_2e0 = &PTR_FUN_710523d988;
  local_2d8 = 0;
  if (uVar8 != 0) {
    uVar25 = *(ulong *)(uVar8 + 0x18);
    *(undefined ***)(uVar8 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar8 + 0x18) = 0;
    if (uVar25 != 0) {
      FUN_710392eb40(uVar25);
    }
    FUN_710392eb40(uVar8);
  }
  pcVar16 = "set_parts_btn2_04";
  FUN_71037717d0(plVar10,4,"set_parts_btn2_04",ppppbVar19,param_5,param_6,param_7,param_8);
  lVar9 = *(long *)(*plVar10 + 0x1b8);
  if (lVar9 != 0) {
    lVar29 = *plVar10 + 0x1b8;
    lVar22 = lVar29;
    lVar23 = lVar9;
    do {
      if (3 < *(int *)(lVar23 + 0x20)) {
        lVar22 = lVar23;
      }
      lVar23 = *(long *)(lVar23 + (ulong)(*(int *)(lVar23 + 0x20) < 4) * 8);
    } while (lVar23 != 0);
    if (((lVar22 != lVar29) && (*(int *)(lVar22 + 0x20) < 5)) &&
       (plVar26 = *(long **)(lVar22 + 0x28), plVar26 != (long *)0x0)) {
      (**(code **)(*plVar26 + 0x1f8))(plVar26,1);
      pcVar16 = (char *)0x0;
      (**(code **)(*plVar26 + 0x388))(plVar26,0);
      lVar29 = *plVar10 + 0x1b8;
      lVar9 = *(long *)(*plVar10 + 0x1b8);
    }
    lVar22 = lVar29;
    if (lVar9 != 0) {
      do {
        if (3 < *(int *)(lVar9 + 0x20)) {
          lVar22 = lVar9;
        }
        lVar9 = *(long *)(lVar9 + (ulong)(*(int *)(lVar9 + 0x20) < 4) * 8);
      } while (lVar9 != 0);
      if (((lVar22 != lVar29) && (*(int *)(lVar22 + 0x20) < 5)) &&
         (plVar26 = *(long **)(lVar22 + 0x28), plVar26 != (long *)0x0)) {
        (**(code **)(*plVar26 + 0x208))(plVar26,1);
        pcVar16 = (char *)0x0;
        (**(code **)(*plVar26 + 0x388))(plVar26,0);
      }
    }
  }
  FUN_7103776640(&local_2e0,(long)puVar6,(byte ****)"set_parts_btn2_04",pcVar16,ppppbVar19,param_5,
                 param_6,param_7,param_8);
  uVar8 = local_2d8;
  if (param_1 + 0xe != &local_2e0) {
    local_2d8 = 0;
    uVar25 = param_1[0xf];
    param_1[0xf] = uVar8;
    if (uVar25 != 0) {
      uVar8 = *(ulong *)(uVar25 + 0x18);
      *(undefined ***)(uVar25 + 0x10) = &PTR_FUN_710523d9a8;
      *(undefined8 *)(uVar25 + 0x18) = 0;
      if (uVar8 != 0) {
        FUN_710392eb40(uVar8);
      }
      FUN_710392eb40(uVar25);
    }
  }
  uVar8 = local_2d8;
  plVar26 = param_1 + 0x3d;
  local_2e0 = &PTR_FUN_710523d988;
  local_2d8 = 0;
  if (uVar8 != 0) {
    uVar25 = *(ulong *)(uVar8 + 0x18);
    *(undefined ***)(uVar8 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar8 + 0x18) = 0;
    if (uVar25 != 0) {
      FUN_710392eb40(uVar25);
    }
    FUN_710392eb40(uVar8);
  }
  ppppbVar19 = (byte ****)&local_1b0;
  FUN_7103770b30(plVar26,puVar6,(long ****)"selector_4",ppppbVar19,param_5,param_6,param_7,param_8);
  FUN_71037717d0(plVar26,5,"btn_other_random",ppppbVar19,param_5,param_6,param_7,param_8);
  lVar9 = *(long *)(*plVar26 + 0x1b8);
  if (lVar9 != 0) {
    lVar29 = *plVar26 + 0x1b8;
    lVar22 = lVar29;
    lVar23 = lVar9;
    do {
      if (4 < *(int *)(lVar23 + 0x20)) {
        lVar22 = lVar23;
      }
      lVar23 = *(long *)(lVar23 + (ulong)(*(int *)(lVar23 + 0x20) < 5) * 8);
    } while (lVar23 != 0);
    if (((lVar22 != lVar29) && (*(int *)(lVar22 + 0x20) < 6)) &&
       (plVar10 = *(long **)(lVar22 + 0x28), plVar10 != (long *)0x0)) {
      (**(code **)(*plVar10 + 0x1f8))(plVar10,1);
      (**(code **)(*plVar10 + 0x388))(plVar10,0,0);
      lVar29 = *plVar26 + 0x1b8;
      lVar9 = *(long *)(*plVar26 + 0x1b8);
    }
    lVar22 = lVar29;
    if (lVar9 != 0) {
      do {
        if (4 < *(int *)(lVar9 + 0x20)) {
          lVar22 = lVar9;
        }
        lVar9 = *(long *)(lVar9 + (ulong)(*(int *)(lVar9 + 0x20) < 5) * 8);
      } while (lVar9 != 0);
      if (((lVar22 != lVar29) && (*(int *)(lVar22 + 0x20) < 6)) &&
         (plVar10 = *(long **)(lVar22 + 0x28), plVar10 != (long *)0x0)) {
        (**(code **)(*plVar10 + 0x208))(plVar10,1);
        (**(code **)(*plVar10 + 0x388))(plVar10,0,0);
      }
    }
  }
  plVar30 = *(long **)(*(long *)(DAT_710532f8d0 + 8) + 0x40);
  plVar10 = param_1 + 0x3e;
  if (*(long **)(*(long *)(DAT_710532f8d0 + 8) + 0x48) == plVar30) {
    local_2e0 = (undefined **)0x0;
  }
  else {
    local_2e0 = (undefined **)*plVar30;
  }
  FUN_7103772070(*plVar26,5,(long ****)&local_2e0,ppppbVar19,param_5,param_6,param_7,param_8);
  FUN_7103771a80(plVar26,5,0);
  FUN_7101989b70(&local_2e0,&local_1b0);
  ppppbVar19 = (byte ****)&local_2e0;
  local_2d8._0_3_ = CONCAT12(1,(undefined2)local_2d8);
  FUN_7103770b30(plVar10,puVar6,(long ****)"selector_5",ppppbVar19,param_5,param_6,param_7,param_8);
  FUN_71037717d0(plVar10,1,"set_parts_btn_close",ppppbVar19,param_5,param_6,param_7,param_8);
  lVar9 = *(long *)(*plVar10 + 0x1b8);
  if (lVar9 != 0) {
    lVar29 = *plVar10 + 0x1b8;
    lVar22 = lVar29;
    lVar23 = lVar9;
    do {
      if (0 < *(int *)(lVar23 + 0x20)) {
        lVar22 = lVar23;
      }
      lVar23 = *(long *)(lVar23 + (ulong)(*(int *)(lVar23 + 0x20) < 1) * 8);
    } while (lVar23 != 0);
    if (((lVar22 != lVar29) && (*(int *)(lVar22 + 0x20) < 2)) &&
       (plVar26 = *(long **)(lVar22 + 0x28), plVar26 != (long *)0x0)) {
      (**(code **)(*plVar26 + 0x1f8))(plVar26,1);
      (**(code **)(*plVar26 + 0x388))(plVar26,0,0);
      lVar29 = *plVar10 + 0x1b8;
      lVar9 = *(long *)(*plVar10 + 0x1b8);
    }
    lVar22 = lVar29;
    if (lVar9 != 0) {
      do {
        if (0 < *(int *)(lVar9 + 0x20)) {
          lVar22 = lVar9;
        }
        lVar9 = *(long *)(lVar9 + (ulong)(*(int *)(lVar9 + 0x20) < 1) * 8);
      } while (lVar9 != 0);
      if (((lVar22 != lVar29) && (*(int *)(lVar22 + 0x20) < 2)) &&
         (plVar26 = *(long **)(lVar22 + 0x28), plVar26 != (long *)0x0)) {
        (**(code **)(*plVar26 + 0x208))(plVar26,1);
        (**(code **)(*plVar26 + 0x388))(plVar26,0,0);
      }
    }
  }
  FUN_71037717d0(plVar10,0,"set_parts_btn_open",ppppbVar19,param_5,param_6,param_7,param_8);
  lVar9 = *plVar10;
  lVar29 = *(long *)(lVar9 + 0x1b8);
  if (lVar29 != 0) {
    lVar22 = lVar9 + 0x1b8;
    lVar23 = lVar22;
    lVar21 = lVar29;
    do {
      bVar3 = *(int *)(lVar21 + 0x20) < 0;
      if (!bVar3) {
        lVar23 = lVar21;
      }
      lVar21 = *(long *)(lVar21 + (ulong)bVar3 * 8);
    } while (lVar21 != 0);
    if (((lVar23 != lVar22) && (*(int *)(lVar23 + 0x20) < 1)) &&
       (plVar26 = *(long **)(lVar23 + 0x28), plVar26 != (long *)0x0)) {
      (**(code **)(*plVar26 + 0x1f8))(plVar26,1);
      (**(code **)(*plVar26 + 0x388))(plVar26,0,0);
      lVar9 = *plVar10;
      lVar29 = *(long *)(lVar9 + 0x1b8);
      lVar22 = lVar9 + 0x1b8;
    }
    lVar23 = lVar22;
    if (lVar29 != 0) {
      do {
        bVar3 = *(int *)(lVar29 + 0x20) < 0;
        if (!bVar3) {
          lVar23 = lVar29;
        }
        lVar29 = *(long *)(lVar29 + (ulong)bVar3 * 8);
      } while (lVar29 != 0);
      if (((lVar23 != lVar22) && (*(int *)(lVar23 + 0x20) < 1)) &&
         (plVar26 = *(long **)(lVar23 + 0x28), plVar26 != (long *)0x0)) {
        (**(code **)(*plVar26 + 0x208))(plVar26,1);
        (**(code **)(*plVar26 + 0x388))(plVar26,0,0);
        lVar9 = *plVar10;
      }
    }
  }
  FUN_7103771930(lVar9,1,(long ****)0x6,(byte ****)0x0,param_5,param_6,param_7,param_8);
  pppplVar15 = (long ****)0x6;
  ppppbVar19 = (byte ****)0x0;
  FUN_7103771930(*plVar10,0,(long ****)0x6,(byte ****)0x0,param_5,param_6,param_7,param_8);
  if (alStack_1f0 == local_1d0) {
    (**(code **)(*local_1d0 + 0x20))();
  }
  else if (local_1d0 != (long *)0x0) {
    (**(code **)(*local_1d0 + 0x28))();
  }
  if (alStack_220 == local_200) {
    pcVar20 = *(code **)(*local_200 + 0x20);
LAB_71019820ec:
    (*pcVar20)();
  }
  else if (local_200 != (long *)0x0) {
    pcVar20 = *(code **)(*local_200 + 0x28);
    goto LAB_71019820ec;
  }
  if (alStack_250 == local_230) {
    pcVar20 = *(code **)(*local_230 + 0x20);
LAB_710198211c:
    (*pcVar20)();
  }
  else if (local_230 != (long *)0x0) {
    pcVar20 = *(code **)(*local_230 + 0x28);
    goto LAB_710198211c;
  }
  if (local_280 == local_260) {
    pcVar20 = *(code **)(*local_260 + 0x20);
LAB_710198214c:
    (*pcVar20)();
  }
  else if (local_260 != (ulong *)0x0) {
    pcVar20 = *(code **)(*local_260 + 0x28);
    goto LAB_710198214c;
  }
  if (&local_2b0 == local_290) {
    pcVar20 = *(code **)(*local_290 + 0x20);
LAB_710198217c:
    (*pcVar20)();
  }
  else if (local_290 != (long *)0x0) {
    pcVar20 = *(code **)(*local_290 + 0x28);
    goto LAB_710198217c;
  }
  FUN_7103776390(&local_2f0,puVar6,pppplVar15,ppppbVar19,param_5,param_6,param_7,param_8);
  pppplVar15 = (long ****)0x0;
  FUN_7103776640(&local_2e0,(long)&local_2f0,(byte ****)"set_parts_skill_%02d",0,ppppbVar19,param_5,
                 param_6,param_7,param_8);
  FUN_71019b6ba0((long)(param_1 + 0x12),(long)&local_2e0,pppplVar15,ppppbVar19,param_5,param_6,
                 param_7,param_8);
  uVar8 = local_2d8;
  local_2e0 = &PTR_FUN_710523d988;
  local_2d8 = 0;
  if (uVar8 != 0) {
    uVar25 = *(ulong *)(uVar8 + 0x18);
    *(undefined ***)(uVar8 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar8 + 0x18) = 0;
    if (uVar25 != 0) {
      FUN_710392eb40(uVar25);
    }
    FUN_710392eb40(uVar8);
  }
  uVar8 = local_2e8;
  local_2f0 = &PTR_FUN_710523d988;
  local_2e8 = 0;
  if (uVar8 != 0) {
    uVar25 = *(ulong *)(uVar8 + 0x18);
    *(undefined ***)(uVar8 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar8 + 0x18) = 0;
    if (uVar25 != 0) {
      FUN_710392eb40(uVar25);
    }
    FUN_710392eb40(uVar8);
  }
  FUN_7103776390(&local_2f0,puVar6,pppplVar15,ppppbVar19,param_5,param_6,param_7,param_8);
  pppplVar15 = (long ****)0x1;
  FUN_7103776640(&local_2e0,(long)&local_2f0,(byte ****)"set_parts_skill_%02d",1,ppppbVar19,param_5,
                 param_6,param_7,param_8);
  FUN_71019b6ba0((long)(param_1 + 0x17),(long)&local_2e0,pppplVar15,ppppbVar19,param_5,param_6,
                 param_7,param_8);
  uVar8 = local_2d8;
  local_2e0 = &PTR_FUN_710523d988;
  local_2d8 = 0;
  if (uVar8 != 0) {
    uVar25 = *(ulong *)(uVar8 + 0x18);
    *(undefined ***)(uVar8 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar8 + 0x18) = 0;
    if (uVar25 != 0) {
      FUN_710392eb40(uVar25);
    }
    FUN_710392eb40(uVar8);
  }
  uVar8 = local_2e8;
  local_2f0 = &PTR_FUN_710523d988;
  local_2e8 = 0;
  if (uVar8 != 0) {
    uVar25 = *(ulong *)(uVar8 + 0x18);
    *(undefined ***)(uVar8 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar8 + 0x18) = 0;
    if (uVar25 != 0) {
      FUN_710392eb40(uVar25);
    }
    FUN_710392eb40(uVar8);
  }
  FUN_7103776390(&local_2f0,puVar6,pppplVar15,ppppbVar19,param_5,param_6,param_7,param_8);
  pppplVar15 = (long ****)0x2;
  FUN_7103776640(&local_2e0,(long)&local_2f0,(byte ****)"set_parts_skill_%02d",2,ppppbVar19,param_5,
                 param_6,param_7,param_8);
  FUN_71019b6ba0((long)(param_1 + 0x1c),(long)&local_2e0,pppplVar15,ppppbVar19,param_5,param_6,
                 param_7,param_8);
  uVar8 = local_2d8;
  local_2e0 = &PTR_FUN_710523d988;
  local_2d8 = 0;
  if (uVar8 != 0) {
    uVar25 = *(ulong *)(uVar8 + 0x18);
    *(undefined ***)(uVar8 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar8 + 0x18) = 0;
    if (uVar25 != 0) {
      FUN_710392eb40(uVar25);
    }
    FUN_710392eb40(uVar8);
  }
  uVar8 = local_2e8;
  local_2f0 = &PTR_FUN_710523d988;
  local_2e8 = 0;
  if (uVar8 != 0) {
    uVar25 = *(ulong *)(uVar8 + 0x18);
    *(undefined ***)(uVar8 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar8 + 0x18) = 0;
    if (uVar25 != 0) {
      FUN_710392eb40(uVar25);
    }
    FUN_710392eb40(uVar8);
  }
  puVar11 = (undefined8 *)
            FUN_710392e290(0x10,0x88,pppplVar15,ppppbVar19,param_5,param_6,param_7,param_8);
  if (puVar11 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_350 = local_350 & 0xffffffff00000000;
      local_2e0 = (undefined **)&DAT_00000088;
      pppplVar15 = (long ****)&local_2e0;
      uVar8 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_350);
      if (((uVar8 & 1) != 0) &&
         (puVar11 = (undefined8 *)
                    FUN_710392e290(0x10,0x88,pppplVar15,ppppbVar19,param_5,param_6,param_7,param_8),
         puVar11 != (undefined8 *)0x0)) goto LAB_7101982374;
    }
    puVar11 = (undefined8 *)0x0;
  }
LAB_7101982374:
  *puVar11 = &PTR_FUN_71050a7460;
  puVar11[1] = 0;
  puVar11[2] = 0;
  puVar11[3] = 0;
  puVar11[9] = 0;
  puVar11[10] = 0;
  *(undefined1 *)(puVar11 + 0xb) = 0;
  *(undefined1 *)(puVar11 + 0xe) = 1;
  puVar11[0xc] = 0;
  puVar11[0xd] = 0x1ffffffff;
  puVar11[0xf] = param_2;
  puVar7 = (undefined8 *)
           FUN_710392e290(0x10,0x3e0,pppplVar15,ppppbVar19,param_5,param_6,param_7,param_8);
  if (puVar7 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_350 = local_350 & 0xffffffff00000000;
      local_2e0 = (undefined **)0x3e0;
      pppplVar15 = (long ****)&local_2e0;
      uVar8 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_350);
      if (((uVar8 & 1) != 0) &&
         (puVar7 = (undefined8 *)
                   FUN_710392e290(0x10,0x3e0,pppplVar15,ppppbVar19,param_5,param_6,param_7,param_8),
         puVar7 != (undefined8 *)0x0)) goto LAB_7101982400;
    }
    puVar7 = (undefined8 *)0x0;
  }
LAB_7101982400:
  *(undefined2 *)(puVar7 + 1) = 0x100;
  *(undefined4 *)((long)puVar7 + 0xc) = 0x4001;
  *(undefined1 *)(puVar7 + 2) = 1;
  *(undefined4 *)((long)puVar7 + 0x14) = 1;
  *(undefined1 *)(puVar7 + 3) = 0;
  *puVar7 = &PTR_FUN_71050a73d8;
  puVar28 = (undefined8 *)
            FUN_710392e290(0x10,8,pppplVar15,ppppbVar19,param_5,param_6,param_7,param_8);
  uVar14 = extraout_x1_21;
  if (puVar28 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_350 = local_350 & 0xffffffff00000000;
      local_2e0 = (undefined **)&DAT_00000008;
      pppplVar15 = (long ****)&local_2e0;
      auVar31 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_350);
      uVar14 = auVar31._8_8_;
      if (((auVar31._0_8_ & 1) != 0) &&
         (puVar28 = (undefined8 *)
                    FUN_710392e290(0x10,8,pppplVar15,ppppbVar19,param_5,param_6,param_7,param_8),
         uVar14 = extraout_x1_22, puVar28 != (undefined8 *)0x0)) goto LAB_7101982488;
    }
    puVar28 = (undefined8 *)0x0;
  }
LAB_7101982488:
  FUN_7103773200(puVar28,uVar14,pppplVar15,ppppbVar19,param_5,param_6,param_7,param_8);
  puVar7[4] = puVar28;
  puVar28 = puVar7 + 5;
  FUN_7103776290(puVar28,extraout_x1_23,pppplVar15,ppppbVar19,param_5,param_6,param_7,param_8);
  FUN_7103776290(puVar7 + 7,extraout_x1_24,pppplVar15,ppppbVar19,param_5,param_6,param_7,param_8);
  puVar12 = (undefined8 *)
            FUN_710392e290(0x10,0xb8,pppplVar15,ppppbVar19,param_5,param_6,param_7,param_8);
  if (puVar12 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_350 = local_350 & 0xffffffff00000000;
      local_2e0 = (undefined **)&DAT_000000b8;
      pppplVar15 = (long ****)&local_2e0;
      uVar8 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_350);
      if (((uVar8 & 1) != 0) &&
         (puVar12 = (undefined8 *)
                    FUN_710392e290(0x10,0xb8,pppplVar15,ppppbVar19,param_5,param_6,param_7,param_8),
         puVar12 != (undefined8 *)0x0)) goto LAB_7101982500;
    }
    puVar12 = (undefined8 *)0x0;
  }
LAB_7101982500:
  *(undefined4 *)(puVar12 + 0x15) = 0xffffffff;
  *puVar12 = &PTR_FUN_71050a7138;
  puVar12[1] = puVar12;
  puVar12[7] = 0;
  puVar12[8] = 0;
  *(undefined1 *)((long)puVar12 + 0xac) = 0;
  *(undefined4 *)(puVar12 + 0x16) = 0xffffffff;
  puVar12[6] = 0;
  puVar12[7] = 0;
  puVar12[6] = FUN_71019904d0;
  puVar12[9] = 0;
  puVar12[10] = 0;
  *(undefined4 *)(puVar12 + 10) = 0;
  puVar12[8] = FUN_71019904e0;
  puVar12[9] = 0;
  puVar12[2] = 0;
  puVar12[3] = 0;
  puVar12[4] = 0;
  puVar12[5] = 0;
  puVar12[0x13] = 0;
  puVar12[0x14] = 0xffffffff;
  puVar12[0x11] = 0;
  puVar12[0x12] = 0;
  puVar12[0xf] = 0;
  puVar12[0x10] = 0;
  puVar12[0xd] = 0;
  puVar12[0xe] = 0;
  puVar12[0xb] = 0;
  puVar12[0xc] = 0;
  *(undefined4 *)(puVar7 + 0x2c) = 0xffffffff;
  *(undefined1 *)((long)puVar7 + 0x164) = 0;
  puVar7[0x44] = 0xffffffff;
  *(undefined4 *)(puVar7 + 0x45) = 0xffffffff;
  *(undefined1 *)((long)puVar7 + 0x22c) = 0;
  puVar7[0x43] = 0;
  puVar7[0x42] = 0;
  puVar7[0x41] = 0;
  *(undefined4 *)(puVar7 + 0x47) = 0;
  puVar7[0x4a] = 0;
  *(undefined1 *)(puVar7 + 0x4c) = 0;
  *(undefined4 *)(puVar7 + 0x48) = 0;
  puVar7[0x4f] = 0;
  puVar7[0x4e] = 0;
  puVar7[0x50] = puVar7;
  *(undefined4 *)((long)puVar7 + 0x3c4) = 0;
  puVar7[0x54] = 0;
  puVar7[0x53] = 0;
  puVar7[0x52] = 0;
  puVar7[0x51] = 0;
  puVar7[0x79] = 0xffffffff;
  *(undefined4 *)(puVar7 + 0x7a) = 0xffffffff;
  *(undefined1 *)((long)puVar7 + 0x3d4) = 0;
  puVar7[9] = puVar12;
  puVar7[10] = puVar7 + 10;
  puVar7[0x10] = 0;
  puVar7[0x11] = 0;
  puVar7[0xf] = 0;
  puVar7[0x10] = 0;
  puVar7[0xf] = FUN_7103345940;
  puVar7[0x12] = 0;
  puVar7[0x13] = 0;
  puVar7[0x11] = FUN_7103345950;
  puVar7[0x12] = 0;
  puVar7[0x16] = 0;
  puVar7[0x17] = 0;
  puVar7[0x14] = 0;
  puVar7[0x15] = 0;
  puVar7[0x15] = FUN_7103345a70;
  puVar7[0x16] = 0;
  puVar7[0x13] = FUN_7103345b50;
  puVar7[0x14] = 0;
  puVar7[0x18] = 0;
  puVar7[0x19] = 0;
  puVar7[0x17] = FUN_7103345d80;
  puVar7[0x18] = 0;
  puVar7[0x1a] = 0;
  puVar7[0x1b] = 0;
  puVar7[0x19] = FUN_7103345eb0;
  puVar7[0x1a] = 0;
  puVar7[0x1c] = 0;
  puVar7[0x1d] = 0;
  puVar7[0x1b] = FUN_7103345f60;
  puVar7[0x1c] = 0;
  puVar7[0x1e] = 0;
  puVar7[0x1f] = 0;
  puVar7[0x1d] = FUN_71033460a0;
  puVar7[0x1e] = 0;
  puVar7[0x20] = 0;
  puVar7[0x21] = 0;
  *(undefined4 *)(puVar7 + 0x21) = 0;
  puVar7[0x1f] = FUN_7103346140;
  puVar7[0x20] = 0;
  puVar7[0x2d] = puVar7 + 0x2d;
  puVar7[0x2e] = 0;
  puVar7[0x46] = &DAT_300000002;
  *(undefined1 *)((long)puVar7 + 0x23c) = 1;
  puVar7[0x33] = 0;
  puVar7[0x34] = 0;
  puVar7[0x31] = 0;
  puVar7[0x32] = 0;
  puVar7[0x32] = FUN_7103345430;
  puVar7[0x33] = 0;
  puVar7[0x35] = 0;
  puVar7[0x36] = 0;
  puVar7[0x34] = FUN_7103345440;
  puVar7[0x35] = 0;
  puVar7[0x37] = 0;
  puVar7[0x38] = 0;
  puVar7[0x36] = FUN_7103345520;
  puVar7[0x37] = 0;
  puVar7[0x39] = 0;
  puVar7[0x3a] = 0;
  *(undefined4 *)(puVar7 + 0x3a) = 0;
  puVar7[0x38] = FUN_71033457a0;
  puVar7[0x39] = 0;
  puVar7[0x4b] = 0x87650000000000;
  puVar7[0x49] = &PTR_FUN_7104f73d30;
  puVar7[0x4d] = 0xffffffffffffffff;
  puVar7[0xb] = 0;
  puVar7[0xc] = 0;
  puVar7[0xd] = 0;
  puVar7[0xe] = 0;
  puVar7[0x2a] = 0;
  puVar7[0x2b] = 0xffffffff;
  puVar7[0x28] = 0;
  puVar7[0x29] = 0;
  puVar7[0x26] = 0;
  puVar7[0x27] = 0;
  puVar7[0x24] = 0;
  puVar7[0x25] = 0;
  puVar7[0x22] = 0;
  puVar7[0x23] = 0;
  puVar7[0x2f] = 0;
  puVar7[0x30] = 0;
  puVar7[0x3f] = 0;
  puVar7[0x40] = 0;
  puVar7[0x3d] = 0;
  puVar7[0x3e] = 0;
  puVar7[0x3b] = 0;
  puVar7[0x3c] = 0;
  memset(puVar7 + 0x55,0,0x11c);
  puVar7[0x55] = FUN_71019aec40;
  puVar7[0x57] = FUN_71019aec50;
  puVar7[0x59] = FUN_71019aee00;
  puVar7[0x5b] = FUN_71019af050;
  puVar7[0x5d] = FUN_71019af1a0;
  puVar7[0x5f] = FUN_71019afb30;
  puVar7[0x61] = FUN_71019afed0;
  puVar7[99] = FUN_71019aff70;
  puVar7[0x65] = FUN_71019b0000;
  puVar7[0x67] = FUN_71019b00f0;
  puVar7[0x69] = FUN_71019b0250;
  puVar7[0x6b] = FUN_71019b0290;
  puVar7[0x6d] = FUN_71019b0380;
  *(undefined4 *)(puVar7 + 0x7b) = 0xffffffff;
  puVar7[0x56] = 0;
  puVar7[0x58] = 0;
  ppuVar24 = (undefined **)&DAT_71045439b8;
  puVar7[0x5a] = 0;
  ppppbVar19 = (byte ****)0x1;
  puVar7[0x5c] = 0;
  puVar7[0x5e] = 0;
  puVar7[0x60] = 0;
  puVar7[0x62] = 0;
  puVar7[100] = 0;
  puVar7[0x66] = 0;
  puVar7[0x68] = 0;
  puVar7[0x6a] = 0;
  puVar7[0x6c] = 0;
  puVar7[0x6e] = 0;
  *(undefined4 *)(puVar7 + 0x6f) = 0;
  FUN_71032cbf30(puVar7 + 4,*param_2,(ulong *)&DAT_71045439b8,(byte ****)0x1,param_5,param_6,param_7
                 ,param_8);
  lVar9 = *(long *)puVar7[4];
  if ((undefined8 *)(lVar9 + 8) != puVar28) {
    *(undefined8 *)puVar7[6] = **(undefined8 **)(lVar9 + 0x10);
    *(undefined8 *)(puVar7[6] + 8) = *(undefined8 *)(*(long *)(lVar9 + 0x10) + 8);
    lVar29 = *(long *)(lVar9 + 0x10);
    lVar9 = puVar7[6];
    if (lVar9 != lVar29) {
      **(undefined8 **)(lVar9 + 0x18) = **(undefined8 **)(lVar29 + 0x18);
      *(undefined8 *)(*(long *)(lVar9 + 0x18) + 8) = *(undefined8 *)(*(long *)(lVar29 + 0x18) + 8);
      *(undefined8 *)(*(long *)(lVar9 + 0x18) + 0x10) =
           *(undefined8 *)(*(long *)(lVar29 + 0x18) + 0x10);
      *(undefined8 *)(*(long *)(lVar9 + 0x18) + 0x18) =
           *(undefined8 *)(*(long *)(lVar29 + 0x18) + 0x18);
    }
  }
  FUN_7103776640(&local_2e0,(long)puVar28,(byte ****)"controller_amiibo",ppuVar24,ppppbVar19,param_5
                 ,param_6,param_7,param_8);
  uVar8 = local_2d8;
  if (&local_2e0 != puVar7 + 7) {
    local_2d8 = 0;
    uVar25 = puVar7[8];
    puVar7[8] = uVar8;
    if (uVar25 != 0) {
      uVar8 = *(ulong *)(uVar25 + 0x18);
      *(undefined ***)(uVar25 + 0x10) = &PTR_FUN_710523d9a8;
      *(undefined8 *)(uVar25 + 0x18) = 0;
      if (uVar8 != 0) {
        FUN_710392eb40(uVar8);
      }
      FUN_710392eb40(uVar25);
    }
  }
  uVar8 = local_2d8;
  local_2e0 = &PTR_FUN_710523d988;
  local_2d8 = 0;
  if (uVar8 != 0) {
    uVar25 = *(ulong *)(uVar8 + 0x18);
    *(undefined ***)(uVar8 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar8 + 0x18) = 0;
    if (uVar25 != 0) {
      FUN_710392eb40(uVar25);
    }
    FUN_710392eb40(uVar8);
  }
  *(undefined1 *)(*(long *)(**(long **)puVar7[4] + 0x600) + 0x4aa) = 0;
  FUN_7103778300(0x3f800000,puVar7[6],0x71042802df);
  *(undefined2 *)(puVar7 + 1) = 0x101;
  *(undefined2 *)((long)puVar7 + 10) = (undefined2)local_350;
  *(undefined4 *)((long)puVar7 + 0xc) = 0x11000;
  *(undefined1 *)(puVar7 + 2) = 1;
  *(undefined2 *)((long)puVar7 + 0x11) = (undefined2)local_2e0;
  *(undefined1 *)((long)puVar7 + 0x13) = local_2e0._2_1_;
  *(undefined4 *)((long)puVar7 + 0x14) = 1;
  *(undefined1 *)(puVar7 + 3) = 0;
  *(undefined4 *)((long)puVar7 + 0xc) = 0x11000;
  lVar29 = **(long **)puVar7[4];
  *(undefined4 *)(*(long *)(lVar29 + 0x600) + 0x494) = 1;
  lVar9 = *(long *)(lVar29 + 0x608);
  lVar29 = *(long *)(lVar29 + 0x610);
  if (lVar9 != lVar29) {
    uVar8 = (lVar29 + -0x10) - lVar9;
    uVar4 = ((uint)(uVar8 >> 4) & 0xfffffff) + 1;
    if ((uVar4 & 3) != 0) {
      lVar22 = -((ulong)uVar4 & 3);
      do {
        plVar26 = (long *)(lVar9 + 8);
        lVar9 = lVar9 + 0x10;
        lVar22 = lVar22 + 1;
        *(undefined4 *)(*plVar26 + 0x494) = 1;
      } while (lVar22 != 0);
    }
    if (0x2f < uVar8) {
      do {
        *(undefined4 *)(*(long *)(lVar9 + 8) + 0x494) = 1;
        *(undefined4 *)(*(long *)(lVar9 + 0x18) + 0x494) = 1;
        *(undefined4 *)(*(long *)(lVar9 + 0x28) + 0x494) = 1;
        plVar26 = (long *)(lVar9 + 0x38);
        lVar9 = lVar9 + 0x40;
        *(undefined4 *)(*plVar26 + 0x494) = 1;
      } while (lVar29 != lVar9);
    }
  }
  puVar11[0x10] = puVar7;
  puVar11[2] = &DAT_7105333600;
  *(undefined4 *)(puVar11 + 0xd) = DAT_7105333660;
  plVar26 = param_1 + 0xb8;
  *(undefined4 *)((long)puVar11 + 0x6c) = DAT_7105333664;
  do {
    uVar4 = DAT_7105333650;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(0x7105333650,0x10);
    if (bVar3) {
      DAT_7105333650 = 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0' || (uVar4 & 1) != 0);
  puVar11[9] = DAT_7105333648;
  DAT_7105333650 = 0;
  DAT_7105333648 = puVar11;
  FUN_71032caea0((long)puVar11,extraout_x1_25,(long ****)ppuVar24,ppppbVar19,param_5,param_6,param_7
                 ,param_8);
  lVar9 = *plVar26;
  *plVar26 = (long)puVar11;
  if (lVar9 != 0) {
    FUN_71032cad20(lVar9);
    puVar11 = (undefined8 *)*plVar26;
  }
  *(undefined1 *)(puVar11 + 0xe) = 1;
  puVar11 = (undefined8 *)
            FUN_710392e290(0x10,0x88,(long ****)ppuVar24,ppppbVar19,param_5,param_6,param_7,param_8)
  ;
  if (puVar11 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_350 = local_350 & 0xffffffff00000000;
      local_2e0 = (undefined **)&DAT_00000088;
      ppuVar24 = (undefined **)&local_2e0;
      uVar8 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_350);
      if (((uVar8 & 1) != 0) &&
         (puVar11 = (undefined8 *)
                    FUN_710392e290(0x10,0x88,(long ****)ppuVar24,ppppbVar19,param_5,param_6,param_7,
                                   param_8), puVar11 != (undefined8 *)0x0)) goto LAB_7101982af8;
    }
    puVar11 = (undefined8 *)0x0;
  }
LAB_7101982af8:
  FUN_71019bc840(puVar11,param_2,(long ****)ppuVar24,ppppbVar19,param_5,param_6,param_7,param_8);
  puVar11[2] = &DAT_7105333600;
  *(undefined4 *)(puVar11 + 0xd) = DAT_7105333660;
  *(undefined4 *)((long)puVar11 + 0x6c) = DAT_7105333664;
  do {
    uVar4 = DAT_7105333650;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(0x7105333650,0x10);
    if (bVar3) {
      DAT_7105333650 = 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0' || (uVar4 & 1) != 0);
  puVar11[9] = DAT_7105333648;
  DAT_7105333650 = 0;
  DAT_7105333648 = puVar11;
  FUN_71032caea0((long)puVar11,extraout_x1_26,(long ****)ppuVar24,ppppbVar19,param_5,param_6,param_7
                 ,param_8);
  lVar9 = param_1[0xb9];
  param_1[0xb9] = puVar11;
  if (lVar9 != 0) {
    FUN_71032cad20(lVar9);
    puVar11 = (undefined8 *)param_1[0xb9];
  }
  *(undefined1 *)(puVar11 + 0xe) = 1;
  if (((DAT_71053144d8 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_71053144d8), iVar5 != 0)) {
    FUN_7101764000();
    ppuVar24 = &PTR_LOOP_7104f17000;
    FUN_71000001c0();
    __cxa_guard_release(&DAT_71053144d8);
  }
  piVar13 = FUN_71032df050(*(long *)(DAT_710532f7b0 + 8),DAT_7105307d50);
  if (*(char *)((long)piVar13 + 0x17) != '\0') {
    local_2f8 = 0x5affff0000000000;
    local_350 = *(ulong *)(piVar13 + 0x11);
    local_348 = *(undefined8 *)(piVar13 + 0x13);
    uStack_340 = *(undefined8 *)(piVar13 + 0x15);
    local_338 = *(undefined8 *)(piVar13 + 0x17);
    uStack_330 = *(undefined8 *)(piVar13 + 0x19);
    local_328 = *(undefined8 *)(piVar13 + 0x1b);
    uStack_320 = *(undefined8 *)(piVar13 + 0x1d);
    local_318 = *(undefined8 *)(piVar13 + 0x1f);
    uStack_310 = *(undefined8 *)(piVar13 + 0x21);
    local_308 = *(undefined8 *)(piVar13 + 0x23);
    uStack_300 = *(undefined8 *)(piVar13 + 0x25);
    local_2f8 = FUN_7103289860(*(long *)(*(long *)(DAT_710532f730 + 8) + 0x238),(short)piVar13[0x27]
                              );
    plVar26 = (long *)*param_1;
    puVar11 = (undefined8 *)
              FUN_710392e290(0x10,0x88,(long ****)ppuVar24,ppppbVar19,param_5,param_6,param_7,
                             param_8);
    if (puVar11 == (undefined8 *)0x0) {
      if (DAT_7105332f00 != (long *)0x0) {
        local_80 = (byte ***)((ulong)local_80 & 0xffffffff00000000);
        local_2e0 = (undefined **)&DAT_00000088;
        pppplVar15 = (long ****)&local_2e0;
        uVar8 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_80);
        if (((uVar8 & 1) != 0) &&
           (puVar11 = (undefined8 *)
                      FUN_710392e290(0x10,0x88,pppplVar15,ppppbVar19,param_5,param_6,param_7,param_8
                                    ), puVar11 != (undefined8 *)0x0)) goto LAB_7101982c5c;
      }
      puVar11 = (undefined8 *)0x0;
    }
LAB_7101982c5c:
    pCVar17 = (CharInfo *)&local_350;
    FUN_71019ceb30(puVar11,plVar26,pCVar17,ppppbVar19,param_5,param_6,param_7,param_8);
    puVar11[2] = &DAT_7105333600;
    *(undefined4 *)(puVar11 + 0xd) = DAT_7105333660;
    *(undefined4 *)((long)puVar11 + 0x6c) = DAT_7105333664;
    do {
      uVar4 = DAT_7105333650;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(0x7105333650,0x10);
      if (bVar3) {
        DAT_7105333650 = 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0' || (uVar4 & 1) != 0);
    puVar11[9] = DAT_7105333648;
    DAT_7105333650 = 0;
    DAT_7105333648 = puVar11;
    FUN_71032caea0((long)puVar11,extraout_x1_27,(long ****)pCVar17,ppppbVar19,param_5,param_6,
                   param_7,param_8);
    lVar9 = param_1[0xba];
    param_1[0xba] = puVar11;
    if (lVar9 != 0) {
      FUN_71032cad20(lVar9);
      puVar11 = (undefined8 *)param_1[0xba];
    }
    *(undefined1 *)(puVar11 + 0xe) = 1;
    local_2e0 = (undefined **)&DAT_c1ffff0000000000;
    local_280[0] = 0x13ffff0000000000;
    uStack_2c8 = *(undefined8 *)(piVar13 + 0x15);
    local_2d8 = *(ulong *)(piVar13 + 0x11);
    local_2d0 = *(undefined8 *)(piVar13 + 0x13);
    local_2c0 = *(long **)(piVar13 + 0x17);
    uStack_2b8 = *(undefined8 *)(piVar13 + 0x19);
    local_2b0 = *(long *)(piVar13 + 0x1b);
    uStack_2a8 = *(undefined8 *)(piVar13 + 0x1d);
    local_2a0 = *(undefined8 *)(piVar13 + 0x1f);
    uStack_298 = *(undefined8 *)(piVar13 + 0x21);
    local_290 = *(long **)(piVar13 + 0x23);
    uStack_288 = *(undefined8 *)(piVar13 + 0x25);
    pppbVar27 = *(byte ****)(piVar13 + 2);
    lVar9 = *(long *)(DAT_710532f730 + 8);
    lVar29 = *(long *)(lVar9 + 0x168);
    uVar4 = FUN_71032632a0(lVar29,(ulong)pppbVar27);
    if ((uVar4 & 1) != 0) {
      pppbVar27 = (byte ***)FUN_71032631a0(lVar29,0x11b1ccb807);
    }
    local_2e0 = (undefined **)pppbVar27;
    local_280[0] = FUN_7103285e70(*(long *)(lVar9 + 0x248),*(short *)((long)piVar13 + 0x9e));
    plVar26 = (long *)*param_1;
    puVar11 = (undefined8 *)
              FUN_710392e290(0x10,0x88,(long ****)pCVar17,ppppbVar19,param_5,param_6,param_7,param_8
                            );
    if (puVar11 == (undefined8 *)0x0) {
      if (DAT_7105332f00 != (long *)0x0) {
        local_74[0] = 0;
        local_80 = (byte ***)&DAT_00000088;
        ppppbVar18 = &local_80;
        uVar8 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,local_74);
        if (((uVar8 & 1) != 0) &&
           (puVar11 = (undefined8 *)
                      FUN_710392e290(0x10,0x88,(long ****)ppppbVar18,ppppbVar19,param_5,param_6,
                                     param_7,param_8), puVar11 != (undefined8 *)0x0))
        goto LAB_7101982dc8;
      }
      puVar11 = (undefined8 *)0x0;
    }
LAB_7101982dc8:
    ppppbVar18 = (byte ****)&local_2e0;
    FUN_71019c7830(puVar11,plVar26,(long ****)ppppbVar18,ppppbVar19,param_5,param_6,param_7,param_8)
    ;
    puVar11[2] = &DAT_7105333600;
    *(undefined4 *)(puVar11 + 0xd) = DAT_7105333660;
    *(undefined4 *)((long)puVar11 + 0x6c) = DAT_7105333664;
    do {
      uVar4 = DAT_7105333650;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(0x7105333650,0x10);
      if (bVar3) {
        DAT_7105333650 = 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0' || (uVar4 & 1) != 0);
    puVar11[9] = DAT_7105333648;
    DAT_7105333650 = 0;
    DAT_7105333648 = puVar11;
    FUN_71032caea0((long)puVar11,extraout_x1_28,(long ****)ppppbVar18,ppppbVar19,param_5,param_6,
                   param_7,param_8);
    lVar9 = param_1[0xbb];
    param_1[0xbb] = puVar11;
    if (lVar9 != 0) {
      FUN_71032cad20(lVar9);
      puVar11 = (undefined8 *)param_1[0xbb];
    }
    *(undefined1 *)(puVar11 + 0xe) = 1;
    puVar11 = (undefined8 *)
              FUN_710392e290(0x10,0x88,(long ****)ppppbVar18,ppppbVar19,param_5,param_6,param_7,
                             param_8);
    if (puVar11 == (undefined8 *)0x0) {
      if (DAT_7105332f00 != (long *)0x0) {
        local_74[0] = 0;
        local_80 = (byte ***)&DAT_00000088;
        ppppbVar18 = &local_80;
        uVar8 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,local_74);
        if (((uVar8 & 1) != 0) &&
           (puVar11 = (undefined8 *)
                      FUN_710392e290(0x10,0x88,(long ****)ppppbVar18,ppppbVar19,param_5,param_6,
                                     param_7,param_8), puVar11 != (undefined8 *)0x0))
        goto LAB_7101982e9c;
      }
      puVar11 = (undefined8 *)0x0;
    }
LAB_7101982e9c:
    FUN_71019c9340(puVar11,param_2,ppppbVar18,ppppbVar19,param_5,param_6,param_7,param_8);
    puVar11[2] = &DAT_7105333600;
    *(undefined4 *)(puVar11 + 0xd) = DAT_7105333660;
    *(undefined4 *)((long)puVar11 + 0x6c) = DAT_7105333664;
    do {
      uVar4 = DAT_7105333650;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(0x7105333650,0x10);
      if (bVar3) {
        DAT_7105333650 = 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0' || (uVar4 & 1) != 0);
    puVar11[9] = DAT_7105333648;
    DAT_7105333650 = 0;
    DAT_7105333648 = puVar11;
    FUN_71032caea0((long)puVar11,extraout_x1_29,(long ****)ppppbVar18,ppppbVar19,param_5,param_6,
                   param_7,param_8);
    lVar9 = param_1[0xbc];
    param_1[0xbc] = puVar11;
    if (lVar9 != 0) {
      FUN_71032cad20(lVar9);
      puVar11 = (undefined8 *)param_1[0xbc];
    }
    *(undefined1 *)(puVar11 + 0xe) = 1;
    ppuVar24 = *(undefined ***)(piVar13 + 2);
    lVar9 = *(long *)(*(long *)(DAT_710532f730 + 8) + 0x168);
    uVar4 = FUN_71032632a0(lVar9,(ulong)ppuVar24);
    if ((uVar4 & 1) != 0) {
      ppuVar24 = (undefined **)FUN_71032631a0(lVar9,0x11b1ccb807);
    }
    puVar11 = (undefined8 *)
              FUN_710392e290(0x10,0x88,(long ****)ppppbVar18,ppppbVar19,param_5,param_6,param_7,
                             param_8);
    if (puVar11 == (undefined8 *)0x0) {
      if (DAT_7105332f00 != (long *)0x0) {
        local_74[0] = 0;
        local_80 = (byte ***)&DAT_00000088;
        ppppbVar18 = &local_80;
        uVar8 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,local_74);
        if (((uVar8 & 1) != 0) &&
           (puVar11 = (undefined8 *)
                      FUN_710392e290(0x10,0x88,(long ****)ppppbVar18,ppppbVar19,param_5,param_6,
                                     param_7,param_8), puVar11 != (undefined8 *)0x0))
        goto LAB_7101982fb4;
      }
      puVar11 = (undefined8 *)0x0;
    }
LAB_7101982fb4:
    FUN_71019ddb30(puVar11,param_2,(long ****)ppuVar24,ppppbVar19,param_5,param_6,param_7,param_8);
    puVar11[2] = &DAT_7105333600;
    *(undefined4 *)(puVar11 + 0xd) = DAT_7105333660;
    *(undefined4 *)((long)puVar11 + 0x6c) = DAT_7105333664;
    do {
      uVar4 = DAT_7105333650;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(0x7105333650,0x10);
      if (bVar3) {
        DAT_7105333650 = 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0' || (uVar4 & 1) != 0);
    puVar11[9] = DAT_7105333648;
    DAT_7105333650 = 0;
    DAT_7105333648 = puVar11;
    FUN_71032caea0((long)puVar11,extraout_x1_30,(long ****)ppuVar24,ppppbVar19,param_5,param_6,
                   param_7,param_8);
    lVar9 = param_1[0xbd];
    param_1[0xbd] = puVar11;
    if (lVar9 != 0) {
      FUN_71032cad20(lVar9);
      puVar11 = (undefined8 *)param_1[0xbd];
    }
    *(undefined1 *)(puVar11 + 0xe) = 1;
    puVar11 = (undefined8 *)
              FUN_710392e290(0x10,0x88,(long ****)ppuVar24,ppppbVar19,param_5,param_6,param_7,
                             param_8);
    if (puVar11 == (undefined8 *)0x0) {
      if (DAT_7105332f00 != (long *)0x0) {
        local_74[0] = 0;
        local_80 = (byte ***)&DAT_00000088;
        ppuVar24 = (undefined **)&local_80;
        uVar8 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,local_74);
        if (((uVar8 & 1) != 0) &&
           (puVar11 = (undefined8 *)
                      FUN_710392e290(0x10,0x88,(long ****)ppuVar24,ppppbVar19,param_5,param_6,
                                     param_7,param_8), puVar11 != (undefined8 *)0x0))
        goto LAB_7101983088;
      }
      puVar11 = (undefined8 *)0x0;
    }
LAB_7101983088:
    FUN_71019e33e0(puVar11,param_2,(long ****)ppuVar24,ppppbVar19,param_5,param_6,param_7,param_8);
    puVar11[2] = &DAT_7105333600;
    *(undefined4 *)(puVar11 + 0xd) = DAT_7105333660;
    *(undefined4 *)((long)puVar11 + 0x6c) = DAT_7105333664;
    do {
      uVar4 = DAT_7105333650;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(0x7105333650,0x10);
      if (bVar3) {
        DAT_7105333650 = 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0' || (uVar4 & 1) != 0);
    puVar11[9] = DAT_7105333648;
    DAT_7105333650 = 0;
    DAT_7105333648 = puVar11;
    FUN_71032caea0((long)puVar11,extraout_x1_31,(long ****)ppuVar24,ppppbVar19,param_5,param_6,
                   param_7,param_8);
    lVar9 = param_1[0xbe];
    param_1[0xbe] = puVar11;
    if (lVar9 != 0) {
      FUN_71032cad20(lVar9);
      puVar11 = (undefined8 *)param_1[0xbe];
    }
    *(undefined1 *)(puVar11 + 0xe) = 1;
  }
  FUN_7103776640(&local_2e0,(long)puVar6,(byte ****)"set_parts_stick",ppuVar24,ppppbVar19,param_5,
                 param_6,param_7,param_8);
  if (((DAT_71053144d8 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_71053144d8), iVar5 != 0)) {
    FUN_7101764000();
    FUN_71000001c0();
    __cxa_guard_release(&DAT_71053144d8);
  }
  if (DAT_7105307b68._4_4_ - 3U < 2) {
    uVar8 = local_2d8;
    if ((*(long *)(local_2d8 + 8) != 0) &&
       (lVar9 = *(long *)(*(long *)(local_2d8 + 8) + 0x18), lVar9 != 0)) {
      *(byte *)(lVar9 + 0x58) = *(byte *)(lVar9 + 0x58) & 0xfe;
    }
  }
  else {
    FUN_71019e0b00((long)&local_2e0);
    uVar8 = local_2d8;
  }
  local_2d8 = 0;
  local_2e0 = &PTR_FUN_710523d988;
  if (uVar8 != 0) {
    local_2d8 = 0;
    local_2e0 = &PTR_FUN_710523d988;
    uVar25 = *(ulong *)(uVar8 + 0x18);
    *(undefined ***)(uVar8 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar8 + 0x18) = 0;
    if (uVar25 != 0) {
      FUN_710392eb40(uVar25);
    }
    FUN_710392eb40(uVar8);
  }
  if (alStack_c0 == local_a0) {
    pcVar20 = *(code **)(*local_a0 + 0x20);
LAB_71019831b4:
    (*pcVar20)();
  }
  else if (local_a0 != (long *)0x0) {
    pcVar20 = *(code **)(*local_a0 + 0x28);
    goto LAB_71019831b4;
  }
  if (alStack_f0 == local_d0) {
    pcVar20 = *(code **)(*local_d0 + 0x20);
LAB_71019831e4:
    (*pcVar20)();
  }
  else if (local_d0 != (long *)0x0) {
    pcVar20 = *(code **)(*local_d0 + 0x28);
    goto LAB_71019831e4;
  }
  if (alStack_120 == local_100) {
    pcVar20 = *(code **)(*local_100 + 0x20);
LAB_7101983214:
    (*pcVar20)();
  }
  else if (local_100 != (long *)0x0) {
    pcVar20 = *(code **)(*local_100 + 0x28);
    goto LAB_7101983214;
  }
  if (alStack_150 == local_130) {
    pcVar20 = *(code **)(*local_130 + 0x20);
  }
  else {
    if (local_130 == (long *)0x0) goto LAB_7101983248;
    pcVar20 = *(code **)(*local_130 + 0x28);
  }
  (*pcVar20)();
LAB_7101983248:
  if (alStack_180 == local_160) {
    pcVar20 = *(code **)(*local_160 + 0x20);
  }
  else {
    if (local_160 == (long *)0x0) {
      return;
    }
    pcVar20 = *(code **)(*local_160 + 0x28);
  }
  (*pcVar20)();
  return;
}

