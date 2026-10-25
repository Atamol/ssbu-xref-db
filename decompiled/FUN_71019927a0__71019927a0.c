// addr:      71019927a0
// offset:    0x19927a0
// name:      FUN_71019927a0
// mangled:   
// signature: undefined __cdecl FUN_71019927a0(undefined8 * param_1, long * param_2, long * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_71019927a0(undefined8 *param_1,long *param_2,long ****param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long **pplVar1;
  undefined8 *puVar2;
  char cVar3;
  undefined4 uVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  undefined8 *puVar8;
  ulong uVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  ulong uVar12;
  int *piVar13;
  undefined1 *puVar14;
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
  undefined8 extraout_x1_23;
  undefined8 extraout_x1_24;
  undefined8 extraout_x1_25;
  undefined8 extraout_x1_26;
  undefined8 extraout_x1_27;
  undefined8 extraout_x1_28;
  undefined8 extraout_x1_29;
  undefined8 extraout_x1_30;
  undefined8 extraout_x1_31;
  undefined8 extraout_x1_32;
  undefined8 extraout_x1_33;
  undefined8 extraout_x1_34;
  undefined8 extraout_x1_35;
  undefined8 extraout_x1_36;
  undefined8 extraout_x1_37;
  undefined8 extraout_x1_38;
  undefined8 extraout_x1_39;
  undefined8 extraout_x1_40;
  undefined8 extraout_x1_41;
  undefined8 extraout_x1_42;
  undefined8 uVar15;
  long ****pppplVar16;
  char *pcVar17;
  long ****pppplVar18;
  undefined **ppuVar19;
  long *********ppppppppplVar20;
  byte ****ppppbVar21;
  long ****pppplVar22;
  long lVar23;
  long **pplVar24;
  long *plVar25;
  code *pcVar26;
  long *plVar27;
  long lVar28;
  long *plVar29;
  uint uVar30;
  long lVar31;
  long lVar32;
  long lVar33;
  undefined1 *puVar34;
  long *plVar35;
  long *plVar36;
  long *plVar37;
  undefined1 auVar38 [16];
  undefined **local_340;
  ulong local_338;
  undefined **local_330;
  ulong local_328;
  undefined8 local_320;
  undefined8 local_318;
  long alStack_2f0 [4];
  long *local_2d0;
  long alStack_2c0 [4];
  long *local_2a0;
  long alStack_290 [4];
  long *local_270;
  long alStack_260 [4];
  long *local_240;
  long alStack_230 [4];
  long *local_210;
  long ***local_1e8;
  ulong local_1e0;
  undefined1 local_1d8;
  undefined2 local_1d4;
  undefined **local_1d0;
  ulong local_1c8;
  undefined **local_1c0;
  ulong local_1b8;
  undefined8 local_1b0;
  undefined8 local_1a8;
  undefined4 local_1a0;
  ushort local_19c;
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
  
  *param_1 = param_2;
  puVar8 = (undefined8 *)FUN_710392e290(0x10,0x80,param_3,param_4,param_5,param_6,param_7,param_8);
  if (puVar8 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_320 = (undefined **)((ulong)local_320 & 0xffffffff00000000);
      local_1b0 = (byte ***)&DAT_00000080;
      param_3 = (long ****)&local_1b0;
      uVar9 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_320);
      if (((uVar9 & 1) != 0) &&
         (puVar8 = (undefined8 *)
                   FUN_710392e290(0x10,0x80,param_3,param_4,param_5,param_6,param_7,param_8),
         puVar8 != (undefined8 *)0x0)) goto LAB_7101992824;
    }
    puVar8 = (undefined8 *)0x0;
  }
LAB_7101992824:
  puVar8[2] = 0;
  *puVar8 = &PTR_FUN_7105181b40;
  puVar8[1] = puVar8 + 2;
  puVar8[5] = 0;
  puVar8[3] = 0;
  puVar8[4] = puVar8 + 5;
  puVar8[8] = 0;
  puVar8[6] = 0;
  puVar8[7] = puVar8 + 8;
  puVar8[0xc] = 0;
  puVar8[0xb] = 0;
  *(undefined4 *)(puVar8 + 0xf) = 0;
  puVar8[0xe] = 0;
  puVar8[9] = 0;
  puVar8[10] = puVar8 + 0xb;
  *(undefined4 *)(puVar8 + 0xd) = 2;
  param_1[1] = puVar8;
  puVar8 = (undefined8 *)FUN_710392e290(0x10,8,param_3,param_4,param_5,param_6,param_7,param_8);
  uVar15 = extraout_x1;
  if (puVar8 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_320 = (undefined **)((ulong)local_320 & 0xffffffff00000000);
      local_1b0 = (byte ***)&DAT_00000008;
      param_3 = (long ****)&local_1b0;
      auVar38 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_320);
      uVar15 = auVar38._8_8_;
      if (((auVar38._0_8_ & 1) != 0) &&
         (puVar8 = (undefined8 *)
                   FUN_710392e290(0x10,8,param_3,param_4,param_5,param_6,param_7,param_8),
         uVar15 = extraout_x1_00, puVar8 != (undefined8 *)0x0)) goto LAB_71019928d0;
    }
    puVar8 = (undefined8 *)0x0;
  }
LAB_71019928d0:
  FUN_7103773200(puVar8,uVar15,param_3,param_4,param_5,param_6,param_7,param_8);
  pplVar1 = (long **)(param_1 + 3);
  param_1[2] = puVar8;
  FUN_7103776290(pplVar1,extraout_x1_01,param_3,param_4,param_5,param_6,param_7,param_8);
  puVar8 = (undefined8 *)FUN_710392e290(0x10,8,param_3,param_4,param_5,param_6,param_7,param_8);
  uVar15 = extraout_x1_02;
  if (puVar8 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_320 = (undefined **)((ulong)local_320 & 0xffffffff00000000);
      local_1b0 = (byte ***)&DAT_00000008;
      param_3 = (long ****)&local_1b0;
      auVar38 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_320);
      uVar15 = auVar38._8_8_;
      if (((auVar38._0_8_ & 1) != 0) &&
         (puVar8 = (undefined8 *)
                   FUN_710392e290(0x10,8,param_3,param_4,param_5,param_6,param_7,param_8),
         uVar15 = extraout_x1_03, puVar8 != (undefined8 *)0x0)) goto LAB_7101992944;
    }
    puVar8 = (undefined8 *)0x0;
  }
LAB_7101992944:
  pppplVar18 = (long ****)(param_1 + 2);
  FUN_7103773200(puVar8,uVar15,param_3,param_4,param_5,param_6,param_7,param_8);
  param_1[5] = puVar8;
  FUN_7103776290(param_1 + 6,extraout_x1_04,param_3,param_4,param_5,param_6,param_7,param_8);
  puVar8 = (undefined8 *)FUN_710392e290(0x10,8,param_3,param_4,param_5,param_6,param_7,param_8);
  uVar15 = extraout_x1_05;
  if (puVar8 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_320 = (undefined **)((ulong)local_320 & 0xffffffff00000000);
      local_1b0 = (byte ***)&DAT_00000008;
      param_3 = (long ****)&local_1b0;
      auVar38 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_320);
      uVar15 = auVar38._8_8_;
      if (((auVar38._0_8_ & 1) != 0) &&
         (puVar8 = (undefined8 *)
                   FUN_710392e290(0x10,8,param_3,param_4,param_5,param_6,param_7,param_8),
         uVar15 = extraout_x1_06, puVar8 != (undefined8 *)0x0)) goto LAB_71019929c0;
    }
    puVar8 = (undefined8 *)0x0;
  }
LAB_71019929c0:
  FUN_7103773200(puVar8,uVar15,param_3,param_4,param_5,param_6,param_7,param_8);
  param_1[8] = puVar8;
  FUN_7103776290(param_1 + 9,extraout_x1_07,param_3,param_4,param_5,param_6,param_7,param_8);
  param_1[0xb] = 0;
  *(undefined1 *)(param_1 + 0xc) = 0;
  *(undefined1 *)(param_1 + 0xd) = 0;
  *(undefined1 *)(param_1 + 0xe) = 0;
  FUN_7103776290(param_1 + 0xf,extraout_x1_08,param_3,param_4,param_5,param_6,param_7,param_8);
  FUN_7103776290(param_1 + 0x11,extraout_x1_09,param_3,param_4,param_5,param_6,param_7,param_8);
  *(undefined1 *)(param_1 + 0x13) = 0;
  FUN_7103776290(param_1 + 0x14,extraout_x1_10,param_3,param_4,param_5,param_6,param_7,param_8);
  FUN_7103776290(param_1 + 0x16,extraout_x1_11,param_3,param_4,param_5,param_6,param_7,param_8);
  *(undefined1 *)(param_1 + 0x18) = 0;
  FUN_7103776290(param_1 + 0x19,extraout_x1_12,param_3,param_4,param_5,param_6,param_7,param_8);
  FUN_7103776290(param_1 + 0x1b,extraout_x1_13,param_3,param_4,param_5,param_6,param_7,param_8);
  *(undefined1 *)(param_1 + 0x1d) = 0;
  FUN_7103776290(param_1 + 0x1e,extraout_x1_14,param_3,param_4,param_5,param_6,param_7,param_8);
  FUN_7103776290(param_1 + 0x20,extraout_x1_15,param_3,param_4,param_5,param_6,param_7,param_8);
  *(undefined1 *)(param_1 + 0x22) = 0;
  *(undefined4 *)((long)param_1 + 0x2ac) = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  param_1[0x27] = param_1;
  param_1[0x56] = 0xffffffff;
  *(undefined4 *)(param_1 + 0x57) = 0xffffffff;
  *(undefined1 *)((long)param_1 + 700) = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  memset(param_1 + 0x2c,0,0x14c);
  plVar27 = param_1 + 0x71;
  param_1[0x58] = param_1;
  param_1[0x5c] = 0;
  param_1[0x5b] = 0;
  param_1[0x5a] = 0;
  param_1[0x59] = 0;
  param_1[0x6f] = 0xffffffff;
  *(undefined4 *)(param_1 + 0x70) = 0xffffffff;
  *(undefined1 *)((long)param_1 + 900) = 0;
  param_1[0x6e] = 0;
  param_1[0x6d] = 0;
  param_1[0x6c] = 0;
  param_1[0x6b] = 0;
  param_1[0x6a] = 0;
  param_1[0x69] = 0;
  param_1[0x68] = 0;
  param_1[0x67] = 0;
  param_1[0x66] = 0;
  param_1[0x65] = 0;
  param_1[100] = 0;
  param_1[99] = 0;
  param_1[0x62] = 0;
  param_1[0x61] = 0;
  param_1[0x60] = 0;
  param_1[0x5f] = 0;
  param_1[0x5e] = 0;
  param_1[0x5d] = 0;
  FUN_7101df74b0(plVar27,param_2,pppplVar18,param_4,param_5,param_6,param_7,param_8);
  param_1[0x72] = 0xffffffff00000000;
  *(undefined1 *)(param_1 + 0x73) = 1;
  *(undefined1 *)((long)param_1 + 0x3a4) = 0;
  *(undefined8 *)((long)param_1 + 0x399) = 0;
  *(undefined8 *)((long)param_1 + 0x3f4) = 0;
  *(undefined8 *)((long)param_1 + 0x3ec) = 0;
  *(undefined8 *)((long)param_1 + 0x3e4) = 0;
  *(undefined8 *)((long)param_1 + 0x3dc) = 0;
  *(undefined8 *)((long)param_1 + 0x3d4) = 0;
  *(undefined8 *)((long)param_1 + 0x3cc) = 0;
  *(undefined8 *)((long)param_1 + 0x3c4) = 0;
  *(undefined8 *)((long)param_1 + 0x3bc) = 0;
  *(undefined8 *)((long)param_1 + 0x3b4) = 0;
  *(undefined8 *)((long)param_1 + 0x3ac) = 0;
  *(undefined8 *)((long)param_1 + 0x3fc) = 0x3f80000000000000;
  *(undefined2 *)(param_1 + 0x86) = 0xffff;
  *(undefined2 *)(param_1 + 0x83) = 0xffff;
  *(undefined2 *)(param_1 + 0x89) = 0xffff;
  *(undefined2 *)(param_1 + 0x8c) = 0xffff;
  *(undefined2 *)(param_1 + 0x8f) = 0xffff;
  *(undefined2 *)(param_1 + 0x92) = 0xffff;
  *(undefined2 *)(param_1 + 0x95) = 0xffff;
  *(undefined2 *)(param_1 + 0x98) = 0xffff;
  *(undefined2 *)(param_1 + 0x9b) = 0xffff;
  *(undefined2 *)(param_1 + 0x9e) = 0xffff;
  *(undefined2 *)(param_1 + 0xa1) = 0xffff;
  *(undefined2 *)(param_1 + 0xa4) = 0xffff;
  *(undefined2 *)(param_1 + 0xa7) = 0xffff;
  *(undefined2 *)(param_1 + 0xaa) = 0xffff;
  *(undefined2 *)(param_1 + 0xad) = 0xffff;
  *(undefined2 *)(param_1 + 0xb0) = 0xffff;
  *(undefined2 *)(param_1 + 0xb3) = 0xffff;
  *(undefined2 *)(param_1 + 0xb6) = 0xffff;
  *(undefined2 *)(param_1 + 0xb9) = 0xffff;
  *(undefined2 *)(param_1 + 0xbc) = 0xffff;
  *(undefined2 *)(param_1 + 0xbf) = 0xffff;
  *(undefined2 *)(param_1 + 0xc2) = 0xffff;
  *(undefined2 *)(param_1 + 0xc5) = 0xffff;
  *(undefined2 *)(param_1 + 200) = 0xffff;
  *(undefined2 *)(param_1 + 0xcb) = 0xffff;
  *(undefined2 *)(param_1 + 0xce) = 0xffff;
  *(undefined2 *)(param_1 + 0xd1) = 0xffff;
  *(undefined2 *)(param_1 + 0xd4) = 0xffff;
  *(undefined2 *)(param_1 + 0xd7) = 0xffff;
  *(undefined2 *)(param_1 + 0xda) = 0xffff;
  *(undefined2 *)(param_1 + 0xdd) = 0xffff;
  *(undefined2 *)(param_1 + 0xe0) = 0xffff;
  *(undefined2 *)(param_1 + 0xe3) = 0xffff;
  param_1[0x82] = 0;
  param_1[0x87] = 0;
  param_1[0x87] = param_1 + 0x84;
  param_1[0x82] = param_1 + 0x84;
  param_1[0x85] = 0;
  param_1[0x8a] = 0;
  param_1[0x8a] = param_1 + 0x87;
  param_1[0x85] = param_1 + 0x87;
  param_1[0x88] = 0;
  param_1[0x8d] = 0;
  param_1[0x8d] = param_1 + 0x8a;
  param_1[0x88] = param_1 + 0x8a;
  param_1[0x8b] = 0;
  param_1[0x90] = 0;
  param_1[0x90] = param_1 + 0x8d;
  param_1[0x8b] = param_1 + 0x8d;
  param_1[0x8e] = 0;
  param_1[0x93] = 0;
  param_1[0x93] = param_1 + 0x90;
  param_1[0x8e] = param_1 + 0x90;
  param_1[0x91] = 0;
  param_1[0x96] = 0;
  param_1[0x96] = param_1 + 0x93;
  param_1[0x91] = param_1 + 0x93;
  param_1[0x94] = 0;
  param_1[0x99] = 0;
  param_1[0x99] = param_1 + 0x96;
  param_1[0x94] = param_1 + 0x96;
  param_1[0x97] = 0;
  param_1[0x9c] = 0;
  param_1[0x9c] = param_1 + 0x99;
  param_1[0x97] = param_1 + 0x99;
  param_1[0x9a] = 0;
  param_1[0x9f] = 0;
  param_1[0x9f] = param_1 + 0x9c;
  param_1[0x9a] = param_1 + 0x9c;
  param_1[0x9d] = 0;
  param_1[0xa2] = 0;
  param_1[0xa2] = param_1 + 0x9f;
  param_1[0x9d] = param_1 + 0x9f;
  param_1[0xa0] = 0;
  param_1[0xa5] = 0;
  param_1[0xa5] = param_1 + 0xa2;
  param_1[0xa0] = param_1 + 0xa2;
  param_1[0xa3] = 0;
  param_1[0xa8] = 0;
  param_1[0xa8] = param_1 + 0xa5;
  param_1[0xa3] = param_1 + 0xa5;
  param_1[0xa6] = 0;
  param_1[0xab] = 0;
  param_1[0xab] = param_1 + 0xa8;
  param_1[0xa6] = param_1 + 0xa8;
  param_1[0xa9] = 0;
  param_1[0xae] = 0;
  param_1[0xae] = param_1 + 0xab;
  param_1[0xa9] = param_1 + 0xab;
  param_1[0xac] = 0;
  param_1[0xb1] = 0;
  param_1[0xb1] = param_1 + 0xae;
  param_1[0xac] = param_1 + 0xae;
  param_1[0xaf] = 0;
  param_1[0xb4] = 0;
  param_1[0xb4] = param_1 + 0xb1;
  param_1[0xaf] = param_1 + 0xb1;
  param_1[0xb2] = 0;
  param_1[0xb7] = 0;
  param_1[0xb7] = param_1 + 0xb4;
  param_1[0xb2] = param_1 + 0xb4;
  param_1[0xb5] = 0;
  param_1[0xba] = 0;
  param_1[0xba] = param_1 + 0xb7;
  param_1[0xb5] = param_1 + 0xb7;
  param_1[0xb8] = 0;
  param_1[0xbd] = 0;
  param_1[0xbd] = param_1 + 0xba;
  param_1[0xb8] = param_1 + 0xba;
  param_1[0xbb] = 0;
  param_1[0xc0] = param_1 + 0xbd;
  param_1[0xbb] = param_1 + 0xbd;
  param_1[0xbe] = 0;
  param_1[0xc3] = param_1 + 0xc0;
  param_1[0xbe] = param_1 + 0xc0;
  param_1[0xc1] = 0;
  param_1[0xc6] = param_1 + 0xc3;
  param_1[0xc1] = param_1 + 0xc3;
  param_1[0xc4] = 0;
  param_1[0xc9] = param_1 + 0xc6;
  param_1[0xc4] = param_1 + 0xc6;
  param_1[199] = 0;
  param_1[0xcc] = param_1 + 0xc9;
  param_1[199] = param_1 + 0xc9;
  param_1[0xca] = 0;
  param_1[0xcf] = param_1 + 0xcc;
  param_1[0xca] = param_1 + 0xcc;
  param_1[0xcd] = 0;
  param_1[0xd2] = param_1 + 0xcf;
  param_1[0xcd] = param_1 + 0xcf;
  param_1[0x84] = 0;
  param_1[0xd0] = 0;
  param_1[0xd5] = param_1 + 0xd2;
  param_1[0xd0] = param_1 + 0xd2;
  param_1[0xe2] = 0;
  param_1[0x84] = param_1 + 0x81;
  param_1[0xe2] = param_1 + 0x81;
  param_1[0x81] = 0;
  param_1[0xd3] = 0;
  param_1[0xd8] = param_1 + 0xd5;
  param_1[0xd3] = param_1 + 0xd5;
  param_1[0xdf] = 0;
  param_1[0x81] = param_1 + 0xe1;
  param_1[0xdf] = param_1 + 0xe1;
  param_1[0xd6] = 0;
  param_1[0xdb] = param_1 + 0xd8;
  param_1[0xd6] = param_1 + 0xd8;
  param_1[0xd9] = 0;
  param_1[0xde] = param_1 + 0xdb;
  param_1[0xd9] = param_1 + 0xdb;
  param_1[0xdc] = 0;
  param_1[0xe1] = 0;
  param_1[0xdc] = param_1 + 0xde;
  param_1[0xe1] = param_1 + 0xde;
  *(undefined4 *)(param_1 + 0xe4) = 0;
  if (*(char *)(param_1[1] + 0x78) == '\0') {
    *(undefined4 *)(param_1[1] + 0x68) = 3;
  }
  param_1[0x2c] = FUN_7101995e40;
  param_1[0x2d] = 0;
  param_1[0x41] = 0;
  param_1[0x2e] = FUN_7101995e50;
  param_1[0x2f] = 0;
  param_1[0x32] = FUN_7101998250;
  param_1[0x33] = 0;
  param_1[0x43] = 0;
  param_1[0x45] = 0;
  param_1[0x47] = 0;
  param_1[0x49] = 0;
  param_1[0x4b] = 0;
  param_1[0x34] = FUN_71019984c0;
  param_1[0x35] = 0;
  param_1[0x38] = FUN_7101999390;
  param_1[0x39] = 0;
  param_1[0x3a] = FUN_7101999500;
  param_1[0x3b] = 0;
  param_1[0x3e] = FUN_7101999be0;
  param_1[0x3f] = 0;
  param_1[0x40] = FUN_710199a080;
  param_1[0x42] = FUN_710199a5a0;
  param_1[0x44] = FUN_710199a7a0;
  param_1[0x46] = FUN_710199aba0;
  param_1[0x48] = FUN_710199bc60;
  param_1[0x4a] = FUN_710199bd80;
  param_1[0x30] = FUN_7101997d50;
  param_1[0x31] = 0;
  param_1[0x36] = FUN_7101998ed0;
  param_1[0x37] = 0;
  param_1[0x3c] = FUN_7101999750;
  param_1[0x3d] = 0;
  if (0x12 < *(uint *)((long)param_1 + 0x2ac)) goto LAB_7101995e30;
  *(undefined4 *)((long)param_1 + (long)(int)*(uint *)((long)param_1 + 0x2ac) * 4 + 0x260) = 0;
  param_1[0x5d] = FUN_710199bfd0;
  param_1[0x5f] = FUN_710199bfe0;
  param_1[0x61] = FUN_710199c060;
  param_1[99] = FUN_710199c070;
  param_1[0x5e] = 0;
  param_1[0x60] = 0;
  param_1[0x62] = 0;
  param_1[100] = 0;
  if (0x12 < *(uint *)((long)param_1 + 0x374)) goto LAB_7101995e30;
  *(undefined4 *)((long)param_1 + (long)(int)*(uint *)((long)param_1 + 0x374) * 4 + 0x328) = 2;
  FUN_71032cbf30(param_1 + 5,*param_2,(ulong *)&DAT_7104543980,(byte ****)0x1,param_5,param_6,
                 param_7,param_8);
  lVar23 = *(long *)param_1[5];
  if (param_1 + 6 != (undefined8 *)(lVar23 + 8)) {
    *(undefined8 *)param_1[7] = **(undefined8 **)(lVar23 + 0x10);
    *(undefined8 *)(param_1[7] + 8) = *(undefined8 *)(*(long *)(lVar23 + 0x10) + 8);
    lVar28 = *(long *)(lVar23 + 0x10);
    lVar23 = param_1[7];
    if (lVar23 != lVar28) {
      **(undefined8 **)(lVar23 + 0x18) = **(undefined8 **)(lVar28 + 0x18);
      *(undefined8 *)(*(long *)(lVar23 + 0x18) + 8) = *(undefined8 *)(*(long *)(lVar28 + 0x18) + 8);
      *(undefined8 *)(*(long *)(lVar23 + 0x18) + 0x10) =
           *(undefined8 *)(*(long *)(lVar28 + 0x18) + 0x10);
      *(undefined8 *)(*(long *)(lVar23 + 0x18) + 0x18) =
           *(undefined8 *)(*(long *)(lVar28 + 0x18) + 0x18);
    }
  }
  FUN_71032cbf30(param_1 + 8,*param_2,(ulong *)&DAT_7104543988,(byte ****)0x1,param_5,param_6,
                 param_7,param_8);
  lVar23 = *(long *)param_1[8];
  if (param_1 + 9 != (undefined8 *)(lVar23 + 8)) {
    *(undefined8 *)param_1[10] = **(undefined8 **)(lVar23 + 0x10);
    *(undefined8 *)(param_1[10] + 8) = *(undefined8 *)(*(long *)(lVar23 + 0x10) + 8);
    lVar28 = *(long *)(lVar23 + 0x10);
    lVar23 = param_1[10];
    if (lVar23 != lVar28) {
      **(undefined8 **)(lVar23 + 0x18) = **(undefined8 **)(lVar28 + 0x18);
      *(undefined8 *)(*(long *)(lVar23 + 0x18) + 8) = *(undefined8 *)(*(long *)(lVar28 + 0x18) + 8);
      *(undefined8 *)(*(long *)(lVar23 + 0x18) + 0x10) =
           *(undefined8 *)(*(long *)(lVar28 + 0x18) + 0x10);
      *(undefined8 *)(*(long *)(lVar23 + 0x18) + 0x18) =
           *(undefined8 *)(*(long *)(lVar28 + 0x18) + 0x18);
    }
  }
  pppplVar16 = (long ****)&DAT_7104543990;
  ppppbVar21 = (byte ****)0x1;
  FUN_71032cbf30(pppplVar18,*param_2,(ulong *)&DAT_7104543990,(byte ****)0x1,param_5,param_6,param_7
                 ,param_8);
  pplVar24 = **pppplVar18;
  if (pplVar1 != pplVar24 + 1) {
    *(long *)param_1[4] = *pplVar24[2];
    *(long *)(param_1[4] + 8) = pplVar24[2][1];
    plVar29 = pplVar24[2];
    plVar25 = (long *)param_1[4];
    if (plVar25 != plVar29) {
      *(undefined8 *)plVar25[3] = *(undefined8 *)plVar29[3];
      *(undefined8 *)(plVar25[3] + 8) = *(undefined8 *)(plVar29[3] + 8);
      *(undefined8 *)(plVar25[3] + 0x10) = *(undefined8 *)(plVar29[3] + 0x10);
      *(undefined8 *)(plVar25[3] + 0x18) = *(undefined8 *)(plVar29[3] + 0x18);
    }
  }
  puVar8 = (undefined8 *)
           FUN_710392e290(0x10,0x88,pppplVar16,ppppbVar21,param_5,param_6,param_7,param_8);
  if (puVar8 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_320 = (undefined **)((ulong)local_320 & 0xffffffff00000000);
      local_1b0 = (byte ***)&DAT_00000088;
      pppplVar16 = (long ****)&local_1b0;
      uVar9 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_320);
      if (((uVar9 & 1) != 0) &&
         (puVar8 = (undefined8 *)
                   FUN_710392e290(0x10,0x88,pppplVar16,ppppbVar21,param_5,param_6,param_7,param_8),
         puVar8 != (undefined8 *)0x0)) goto LAB_7101993200;
    }
    puVar8 = (undefined8 *)0x0;
  }
LAB_7101993200:
  *puVar8 = &PTR_FUN_71050a7208;
  puVar8[1] = 0;
  *(undefined1 *)(puVar8 + 0xb) = 0;
  puVar8[2] = 0;
  puVar8[3] = 0;
  puVar8[0xf] = param_2;
  *(undefined1 *)(puVar8 + 0xe) = 1;
  puVar8[9] = 0;
  puVar8[10] = 0;
  puVar8[0xc] = 0;
  puVar8[0xd] = 0x1ffffffff;
  puVar10 = (undefined8 *)
            FUN_710392e290(0x10,0x3d0,pppplVar16,ppppbVar21,param_5,param_6,param_7,param_8);
  if (puVar10 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_320 = (undefined **)((ulong)local_320 & 0xffffffff00000000);
      local_1b0 = (byte ***)0x3d0;
      pppplVar16 = (long ****)&local_1b0;
      uVar9 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_320);
      if (((uVar9 & 1) != 0) &&
         (puVar10 = (undefined8 *)
                    FUN_710392e290(0x10,0x3d0,pppplVar16,ppppbVar21,param_5,param_6,param_7,param_8)
         , puVar10 != (undefined8 *)0x0)) goto LAB_7101993288;
    }
    puVar10 = (undefined8 *)0x0;
  }
LAB_7101993288:
  *(undefined2 *)(puVar10 + 1) = 0x100;
  *(undefined4 *)((long)puVar10 + 0xc) = 0x4001;
  *(undefined1 *)(puVar10 + 2) = 1;
  *(undefined4 *)((long)puVar10 + 0x14) = 1;
  *(undefined1 *)(puVar10 + 3) = 0;
  *puVar10 = &PTR_FUN_71050a71c8;
  puVar11 = (undefined8 *)
            FUN_710392e290(0x10,0x80,pppplVar16,ppppbVar21,param_5,param_6,param_7,param_8);
  if (puVar11 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_320 = (undefined **)((ulong)local_320 & 0xffffffff00000000);
      local_1b0 = (byte ***)&DAT_00000080;
      pppplVar16 = (long ****)&local_1b0;
      uVar9 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_320);
      if (((uVar9 & 1) != 0) &&
         (puVar11 = (undefined8 *)
                    FUN_710392e290(0x10,0x80,pppplVar16,ppppbVar21,param_5,param_6,param_7,param_8),
         puVar11 != (undefined8 *)0x0)) goto LAB_7101993304;
    }
    puVar11 = (undefined8 *)0x0;
  }
LAB_7101993304:
  puVar11[2] = 0;
  *puVar11 = &PTR_FUN_7105181b40;
  puVar11[1] = puVar11 + 2;
  puVar11[5] = 0;
  puVar11[3] = 0;
  puVar11[4] = puVar11 + 5;
  puVar11[8] = 0;
  puVar11[0xc] = 0;
  puVar11[6] = 0;
  puVar11[7] = puVar11 + 8;
  puVar11[0xb] = 0;
  *(undefined4 *)(puVar11 + 0xf) = 0;
  puVar11[0xe] = 0;
  puVar11[9] = 0;
  puVar11[10] = puVar11 + 0xb;
  *(undefined4 *)(puVar11 + 0xd) = 2;
  puVar10[4] = puVar11;
  puVar11 = (undefined8 *)
            FUN_710392e290(0x10,8,pppplVar16,ppppbVar21,param_5,param_6,param_7,param_8);
  uVar15 = extraout_x1_16;
  if (puVar11 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_320 = (undefined **)((ulong)local_320 & 0xffffffff00000000);
      local_1b0 = (byte ***)&DAT_00000008;
      pppplVar16 = (long ****)&local_1b0;
      auVar38 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_320);
      uVar15 = auVar38._8_8_;
      if (((auVar38._0_8_ & 1) != 0) &&
         (puVar11 = (undefined8 *)
                    FUN_710392e290(0x10,8,pppplVar16,ppppbVar21,param_5,param_6,param_7,param_8),
         uVar15 = extraout_x1_17, puVar11 != (undefined8 *)0x0)) goto LAB_71019933ac;
    }
    puVar11 = (undefined8 *)0x0;
  }
LAB_71019933ac:
  FUN_7103773200(puVar11,uVar15,pppplVar16,ppppbVar21,param_5,param_6,param_7,param_8);
  puVar2 = puVar10 + 6;
  puVar10[5] = puVar11;
  FUN_7103776290(puVar2,extraout_x1_18,pppplVar16,ppppbVar21,param_5,param_6,param_7,param_8);
  plVar29 = puVar10 + 8;
  *plVar29 = 0;
  plVar25 = puVar10 + 9;
  *plVar25 = 0;
  plVar35 = puVar10 + 10;
  *plVar35 = 0;
  plVar36 = puVar10 + 0xb;
  *plVar36 = 0;
  FUN_7103776290(puVar10 + 0xc,extraout_x1_19,pppplVar16,ppppbVar21,param_5,param_6,param_7,param_8)
  ;
  FUN_7103776290(puVar10 + 0xe,extraout_x1_20,pppplVar16,ppppbVar21,param_5,param_6,param_7,param_8)
  ;
  *(undefined1 *)(puVar10 + 0x10) = 0;
  FUN_7103776290(puVar10 + 0x11,extraout_x1_21,pppplVar16,ppppbVar21,param_5,param_6,param_7,param_8
                );
  FUN_7103776290(puVar10 + 0x13,extraout_x1_22,pppplVar16,ppppbVar21,param_5,param_6,param_7,param_8
                );
  *(undefined1 *)(puVar10 + 0x15) = 0;
  FUN_7103776290(puVar10 + 0x16,extraout_x1_23,pppplVar16,ppppbVar21,param_5,param_6,param_7,param_8
                );
  FUN_7103776290(puVar10 + 0x18,extraout_x1_24,pppplVar16,ppppbVar21,param_5,param_6,param_7,param_8
                );
  *(undefined1 *)(puVar10 + 0x1a) = 0;
  FUN_7103776290(puVar10 + 0x1b,extraout_x1_25,pppplVar16,ppppbVar21,param_5,param_6,param_7,param_8
                );
  FUN_7103776290(puVar10 + 0x1d,extraout_x1_26,pppplVar16,ppppbVar21,param_5,param_6,param_7,param_8
                );
  *(undefined1 *)(puVar10 + 0x1f) = 0;
  FUN_7103776290(puVar10 + 0x20,extraout_x1_27,pppplVar16,ppppbVar21,param_5,param_6,param_7,param_8
                );
  FUN_7103776290(puVar10 + 0x22,extraout_x1_28,pppplVar16,ppppbVar21,param_5,param_6,param_7,param_8
                );
  *(undefined1 *)(puVar10 + 0x24) = 0;
  FUN_7103776290(puVar10 + 0x25,extraout_x1_29,pppplVar16,ppppbVar21,param_5,param_6,param_7,param_8
                );
  FUN_7103776290(puVar10 + 0x27,extraout_x1_30,pppplVar16,ppppbVar21,param_5,param_6,param_7,param_8
                );
  *(undefined1 *)(puVar10 + 0x29) = 0;
  FUN_7103776290(puVar10 + 0x2a,extraout_x1_31,pppplVar16,ppppbVar21,param_5,param_6,param_7,param_8
                );
  FUN_7103776290(puVar10 + 0x2c,extraout_x1_32,pppplVar16,ppppbVar21,param_5,param_6,param_7,param_8
                );
  *(undefined1 *)(puVar10 + 0x2e) = 0;
  FUN_7103776290(puVar10 + 0x2f,extraout_x1_33,pppplVar16,ppppbVar21,param_5,param_6,param_7,param_8
                );
  FUN_7103776290(puVar10 + 0x31,extraout_x1_34,pppplVar16,ppppbVar21,param_5,param_6,param_7,param_8
                );
  *(undefined1 *)(puVar10 + 0x33) = 0;
  *(undefined1 *)(puVar10 + 0x34) = 0;
  *(undefined1 *)(puVar10 + 0x35) = 0;
  uVar6 = 0;
  *(undefined1 *)(puVar10 + 0x36) = 0;
  *(undefined1 *)(puVar10 + 0x37) = 0;
  *(undefined1 *)(puVar10 + 0x39) = 0;
  *(undefined1 *)(puVar10 + 0x3b) = 0;
  *(undefined1 *)(puVar10 + 0x3d) = 0;
  puVar10[0x43] = 0;
  puVar10[0x42] = 0;
  puVar10[0x41] = 0;
  puVar10[0x58] = 0xffffffff;
  *(undefined4 *)(puVar10 + 0x59) = 0xffffffff;
  *(undefined1 *)((long)puVar10 + 0x2cc) = 0;
  puVar10[0x57] = 0;
  puVar10[0x56] = 0;
  puVar10[0x55] = 0;
  puVar10[0x54] = 0;
  puVar10[0x53] = 0;
  puVar10[0x52] = 0;
  puVar10[0x51] = 0;
  puVar10[0x50] = 0;
  puVar10[0x4f] = 0;
  puVar10[0x4e] = 0;
  puVar10[0x4d] = 0;
  puVar10[0x4c] = 0;
  puVar10[0x4b] = 0;
  puVar10[0x4a] = 0;
  puVar10[0x49] = 0;
  puVar10[0x48] = 0;
  puVar10[0x47] = 0;
  puVar10[0x46] = 0;
  puVar10[0x45] = 0;
  puVar10[0x44] = 0;
  puVar10[0x5a] = puVar10;
  puVar10[0x5d] = 0;
  puVar10[0x5c] = 0;
  puVar10[0x5b] = 0;
  puVar10[0x5e] = 0;
  puVar10[0x6f] = 0xffffffff;
  *(undefined4 *)(puVar10 + 0x70) = 0xffffffff;
  *(undefined1 *)((long)puVar10 + 900) = 0;
  puVar10[0x6e] = 0;
  puVar10[0x6d] = 0;
  puVar10[0x6c] = 0;
  puVar10[0x6b] = 0;
  puVar10[0x6a] = 0;
  puVar10[0x69] = 0;
  puVar10[0x68] = 0;
  puVar10[0x67] = 0;
  puVar10[0x66] = 0;
  puVar10[0x65] = 0;
  puVar10[100] = 0;
  puVar10[99] = 0;
  puVar10[0x62] = 0;
  puVar10[0x61] = 0;
  puVar10[0x60] = 0;
  puVar10[0x5f] = 0;
  *(undefined1 *)(puVar10 + 0x74) = 0;
  puVar10[0x78] = 0;
  puVar10[0x77] = 0;
  puVar10[0x76] = 0;
  puVar10[0x75] = 0;
  puVar10[0x71] = 0;
  puVar10[0x3f] = puVar10;
  puVar10[0x40] = 0;
  *(undefined8 *)((long)puVar10 + 0x396) = 0;
  puVar10[0x72] = 0;
  *(undefined4 *)(puVar10 + 0x79) = 0x3f800000;
  if (*(char *)(puVar10[4] + 0x78) == '\0') {
    *(undefined4 *)(puVar10[4] + 0x68) = 3;
    uVar6 = *(uint *)((long)puVar10 + 700);
  }
  puVar10[0x44] = FUN_71019a24c0;
  puVar10[0x46] = FUN_71019a24d0;
  puVar10[0x48] = FUN_71019a26d0;
  puVar10[0x4a] = FUN_71019a3170;
  puVar10[0x45] = 0;
  puVar10[0x47] = 0;
  puVar10[0x49] = 0;
  puVar10[0x4b] = 0;
  puVar10[0x4c] = FUN_71019a37d0;
  puVar10[0x4d] = 0;
  if (0x12 < uVar6) {
LAB_7101995e30:
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(undefined4 *)((long)puVar10 + (long)(int)uVar6 * 4 + 0x270) = 0;
  puVar10[0x5f] = FUN_71019a3910;
  puVar10[0x61] = FUN_71019a3c60;
  puVar10[99] = FUN_71019a3fa0;
  puVar10[0x60] = 0;
  puVar10[0x62] = 0;
  puVar10[100] = 0;
  if (0x12 < *(uint *)((long)puVar10 + 0x374)) goto LAB_7101995e30;
  *(undefined4 *)((long)puVar10 + (long)(int)*(uint *)((long)puVar10 + 0x374) * 4 + 0x328) = 2;
  FUN_71032cbf30(puVar10 + 5,*param_2,(ulong *)&DAT_71045439a0,(byte ****)0x1,param_5,param_6,
                 param_7,param_8);
  lVar23 = *(long *)puVar10[5];
  if ((undefined8 *)(lVar23 + 8) != puVar2) {
    *(undefined8 *)puVar10[7] = **(undefined8 **)(lVar23 + 0x10);
    *(undefined8 *)(puVar10[7] + 8) = *(undefined8 *)(*(long *)(lVar23 + 0x10) + 8);
    lVar28 = *(long *)(lVar23 + 0x10);
    lVar23 = puVar10[7];
    if (lVar23 != lVar28) {
      **(undefined8 **)(lVar23 + 0x18) = **(undefined8 **)(lVar28 + 0x18);
      *(undefined8 *)(*(long *)(lVar23 + 0x18) + 8) = *(undefined8 *)(*(long *)(lVar28 + 0x18) + 8);
      *(undefined8 *)(*(long *)(lVar23 + 0x18) + 0x10) =
           *(undefined8 *)(*(long *)(lVar28 + 0x18) + 0x10);
      *(undefined8 *)(*(long *)(lVar23 + 0x18) + 0x18) =
           *(undefined8 *)(*(long *)(lVar28 + 0x18) + 0x18);
    }
  }
  *(undefined4 *)(*(long *)(**(long **)puVar10[5] + 0x600) + 0x18) = 0x40000;
  local_1b0 = (byte ***)0x0;
  local_1a8 = 0x101;
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
  ppppbVar21 = (byte ****)&local_1b0;
  local_1b0 = (byte ***)0x0;
  local_1a8 = CONCAT71(local_1a8._1_7_,1);
  FUN_7103770b30(plVar25,puVar2,(long ****)"selector_0",ppppbVar21,param_5,param_6,param_7,param_8);
  FUN_71037717d0(plVar25,0,"set_parts_pick_btn_00",ppppbVar21,param_5,param_6,param_7,param_8);
  lVar23 = *(long *)(*plVar25 + 0x1b8);
  if (lVar23 != 0) {
    lVar28 = *plVar25 + 0x1b8;
    lVar33 = lVar28;
    lVar31 = lVar23;
    do {
      bVar5 = *(int *)(lVar31 + 0x20) < 0;
      if (!bVar5) {
        lVar33 = lVar31;
      }
      lVar31 = *(long *)(lVar31 + (ulong)bVar5 * 8);
    } while (lVar31 != 0);
    if (((lVar33 != lVar28) && (*(int *)(lVar33 + 0x20) < 1)) &&
       (plVar37 = *(long **)(lVar33 + 0x28), plVar37 != (long *)0x0)) {
      (**(code **)(*plVar37 + 0x1f8))(plVar37,1);
      (**(code **)(*plVar37 + 0x388))(plVar37,0,0);
      lVar28 = *plVar25 + 0x1b8;
      lVar23 = *(long *)(*plVar25 + 0x1b8);
    }
    lVar33 = lVar28;
    if (lVar23 != 0) {
      do {
        bVar5 = *(int *)(lVar23 + 0x20) < 0;
        if (!bVar5) {
          lVar33 = lVar23;
        }
        lVar23 = *(long *)(lVar23 + (ulong)bVar5 * 8);
      } while (lVar23 != 0);
      if (((lVar33 != lVar28) && (*(int *)(lVar33 + 0x20) < 1)) &&
         (plVar37 = *(long **)(lVar33 + 0x28), plVar37 != (long *)0x0)) {
        (**(code **)(*plVar37 + 0x208))(plVar37,1);
        (**(code **)(*plVar37 + 0x388))(plVar37,0,0);
      }
    }
  }
  FUN_71037717d0(plVar25,1,"set_parts_pick_btn_01",ppppbVar21,param_5,param_6,param_7,param_8);
  lVar23 = *(long *)(*plVar25 + 0x1b8);
  if (lVar23 != 0) {
    lVar28 = *plVar25 + 0x1b8;
    lVar33 = lVar28;
    lVar31 = lVar23;
    do {
      if (0 < *(int *)(lVar31 + 0x20)) {
        lVar33 = lVar31;
      }
      lVar31 = *(long *)(lVar31 + (ulong)(*(int *)(lVar31 + 0x20) < 1) * 8);
    } while (lVar31 != 0);
    if (((lVar33 != lVar28) && (*(int *)(lVar33 + 0x20) < 2)) &&
       (plVar37 = *(long **)(lVar33 + 0x28), plVar37 != (long *)0x0)) {
      (**(code **)(*plVar37 + 0x1f8))(plVar37,1);
      (**(code **)(*plVar37 + 0x388))(plVar37,0,0);
      lVar28 = *plVar25 + 0x1b8;
      lVar23 = *(long *)(*plVar25 + 0x1b8);
    }
    lVar33 = lVar28;
    if (lVar23 != 0) {
      do {
        if (0 < *(int *)(lVar23 + 0x20)) {
          lVar33 = lVar23;
        }
        lVar23 = *(long *)(lVar23 + (ulong)(*(int *)(lVar23 + 0x20) < 1) * 8);
      } while (lVar23 != 0);
      if (((lVar33 != lVar28) && (*(int *)(lVar33 + 0x20) < 2)) &&
         (plVar37 = *(long **)(lVar33 + 0x28), plVar37 != (long *)0x0)) {
        (**(code **)(*plVar37 + 0x208))(plVar37,1);
        (**(code **)(*plVar37 + 0x388))(plVar37,0,0);
      }
    }
  }
  FUN_71037717d0(plVar25,2,"set_parts_pick_btn_02",ppppbVar21,param_5,param_6,param_7,param_8);
  lVar23 = *(long *)(*plVar25 + 0x1b8);
  if (lVar23 != 0) {
    lVar28 = *plVar25 + 0x1b8;
    lVar33 = lVar28;
    lVar31 = lVar23;
    do {
      if (1 < *(int *)(lVar31 + 0x20)) {
        lVar33 = lVar31;
      }
      lVar31 = *(long *)(lVar31 + (ulong)(*(int *)(lVar31 + 0x20) < 2) * 8);
    } while (lVar31 != 0);
    if (((lVar33 != lVar28) && (*(int *)(lVar33 + 0x20) < 3)) &&
       (plVar37 = *(long **)(lVar33 + 0x28), plVar37 != (long *)0x0)) {
      (**(code **)(*plVar37 + 0x1f8))(plVar37,1);
      (**(code **)(*plVar37 + 0x388))(plVar37,0,0);
      lVar28 = *plVar25 + 0x1b8;
      lVar23 = *(long *)(*plVar25 + 0x1b8);
    }
    lVar33 = lVar28;
    if (lVar23 != 0) {
      do {
        if (1 < *(int *)(lVar23 + 0x20)) {
          lVar33 = lVar23;
        }
        lVar23 = *(long *)(lVar23 + (ulong)(*(int *)(lVar23 + 0x20) < 2) * 8);
      } while (lVar23 != 0);
      if (((lVar33 != lVar28) && (*(int *)(lVar33 + 0x20) < 3)) &&
         (plVar37 = *(long **)(lVar33 + 0x28), plVar37 != (long *)0x0)) {
        (**(code **)(*plVar37 + 0x208))(plVar37,1);
        (**(code **)(*plVar37 + 0x388))(plVar37,0,0);
      }
    }
  }
  FUN_71037717d0(plVar25,3,"set_parts_pick_btn_03",ppppbVar21,param_5,param_6,param_7,param_8);
  lVar23 = *(long *)(*plVar25 + 0x1b8);
  if (lVar23 != 0) {
    lVar28 = *plVar25 + 0x1b8;
    lVar33 = lVar28;
    lVar31 = lVar23;
    do {
      if (2 < *(int *)(lVar31 + 0x20)) {
        lVar33 = lVar31;
      }
      lVar31 = *(long *)(lVar31 + (ulong)(*(int *)(lVar31 + 0x20) < 3) * 8);
    } while (lVar31 != 0);
    if (((lVar33 != lVar28) && (*(int *)(lVar33 + 0x20) < 4)) &&
       (plVar37 = *(long **)(lVar33 + 0x28), plVar37 != (long *)0x0)) {
      (**(code **)(*plVar37 + 0x1f8))(plVar37,1);
      (**(code **)(*plVar37 + 0x388))(plVar37,0,0);
      lVar28 = *plVar25 + 0x1b8;
      lVar23 = *(long *)(*plVar25 + 0x1b8);
    }
    lVar33 = lVar28;
    if (lVar23 != 0) {
      do {
        if (2 < *(int *)(lVar23 + 0x20)) {
          lVar33 = lVar23;
        }
        lVar23 = *(long *)(lVar23 + (ulong)(*(int *)(lVar23 + 0x20) < 3) * 8);
      } while (lVar23 != 0);
      if (((lVar33 != lVar28) && (*(int *)(lVar33 + 0x20) < 4)) &&
         (plVar37 = *(long **)(lVar33 + 0x28), plVar37 != (long *)0x0)) {
        (**(code **)(*plVar37 + 0x208))(plVar37,1);
        (**(code **)(*plVar37 + 0x388))(plVar37,0,0);
      }
    }
  }
  puVar11 = *(undefined8 **)(*(long *)(DAT_710532f8d0 + 8) + 0x40);
  if (*(undefined8 **)(*(long *)(DAT_710532f8d0 + 8) + 0x48) == puVar11) {
    local_320 = (undefined **)0x0;
  }
  else {
    local_320 = (undefined **)*puVar11;
  }
  FUN_7103772070(*plVar25,0,(long ****)&local_320,ppppbVar21,param_5,param_6,param_7,param_8);
  puVar11 = *(undefined8 **)(*(long *)(DAT_710532f8d0 + 8) + 0x40);
  if (*(undefined8 **)(*(long *)(DAT_710532f8d0 + 8) + 0x48) == puVar11) {
    local_320 = (undefined **)0x0;
  }
  else {
    local_320 = (undefined **)*puVar11;
  }
  FUN_7103772070(*plVar25,1,(long ****)&local_320,ppppbVar21,param_5,param_6,param_7,param_8);
  puVar11 = *(undefined8 **)(*(long *)(DAT_710532f8d0 + 8) + 0x40);
  if (*(undefined8 **)(*(long *)(DAT_710532f8d0 + 8) + 0x48) == puVar11) {
    local_320 = (undefined **)0x0;
  }
  else {
    local_320 = (undefined **)*puVar11;
  }
  FUN_7103772070(*plVar25,2,(long ****)&local_320,ppppbVar21,param_5,param_6,param_7,param_8);
  puVar11 = *(undefined8 **)(*(long *)(DAT_710532f8d0 + 8) + 0x40);
  if (*(undefined8 **)(*(long *)(DAT_710532f8d0 + 8) + 0x48) == puVar11) {
    local_320 = (undefined **)0x0;
  }
  else {
    local_320 = (undefined **)*puVar11;
  }
  FUN_7103772070(*plVar25,3,(long ****)&local_320,ppppbVar21,param_5,param_6,param_7,param_8);
  FUN_7103771a80(plVar25,0,0);
  (**(code **)(*(long *)*plVar25 + 0x60))((long *)*plVar25,0);
  (**(code **)(*(long *)*plVar25 + 0x70))((long *)*plVar25,0);
  ppppbVar21 = (byte ****)&local_1b0;
  FUN_7103770b30(plVar35,puVar2,(long ****)"selector_1",ppppbVar21,param_5,param_6,param_7,param_8);
  FUN_71037717d0(plVar35,0,"set_parts_learn_btn_00",ppppbVar21,param_5,param_6,param_7,param_8);
  lVar23 = *(long *)(*plVar35 + 0x1b8);
  if (lVar23 != 0) {
    lVar28 = *plVar35 + 0x1b8;
    lVar33 = lVar28;
    lVar31 = lVar23;
    do {
      bVar5 = *(int *)(lVar31 + 0x20) < 0;
      if (!bVar5) {
        lVar33 = lVar31;
      }
      lVar31 = *(long *)(lVar31 + (ulong)bVar5 * 8);
    } while (lVar31 != 0);
    if (((lVar33 != lVar28) && (*(int *)(lVar33 + 0x20) < 1)) &&
       (plVar25 = *(long **)(lVar33 + 0x28), plVar25 != (long *)0x0)) {
      (**(code **)(*plVar25 + 0x1f8))(plVar25,1);
      (**(code **)(*plVar25 + 0x388))(plVar25,0,0);
      lVar28 = *plVar35 + 0x1b8;
      lVar23 = *(long *)(*plVar35 + 0x1b8);
    }
    lVar33 = lVar28;
    if (lVar23 != 0) {
      do {
        bVar5 = *(int *)(lVar23 + 0x20) < 0;
        if (!bVar5) {
          lVar33 = lVar23;
        }
        lVar23 = *(long *)(lVar23 + (ulong)bVar5 * 8);
      } while (lVar23 != 0);
      if (((lVar33 != lVar28) && (*(int *)(lVar33 + 0x20) < 1)) &&
         (plVar25 = *(long **)(lVar33 + 0x28), plVar25 != (long *)0x0)) {
        (**(code **)(*plVar25 + 0x208))(plVar25,1);
        (**(code **)(*plVar25 + 0x388))(plVar25,0,0);
      }
    }
  }
  FUN_71037717d0(plVar35,1,"set_parts_learn_btn_01",ppppbVar21,param_5,param_6,param_7,param_8);
  lVar23 = *(long *)(*plVar35 + 0x1b8);
  if (lVar23 != 0) {
    lVar28 = *plVar35 + 0x1b8;
    lVar33 = lVar28;
    lVar31 = lVar23;
    do {
      if (0 < *(int *)(lVar31 + 0x20)) {
        lVar33 = lVar31;
      }
      lVar31 = *(long *)(lVar31 + (ulong)(*(int *)(lVar31 + 0x20) < 1) * 8);
    } while (lVar31 != 0);
    if (((lVar33 != lVar28) && (*(int *)(lVar33 + 0x20) < 2)) &&
       (plVar25 = *(long **)(lVar33 + 0x28), plVar25 != (long *)0x0)) {
      (**(code **)(*plVar25 + 0x1f8))(plVar25,1);
      (**(code **)(*plVar25 + 0x388))(plVar25,0,0);
      lVar28 = *plVar35 + 0x1b8;
      lVar23 = *(long *)(*plVar35 + 0x1b8);
    }
    lVar33 = lVar28;
    if (lVar23 != 0) {
      do {
        if (0 < *(int *)(lVar23 + 0x20)) {
          lVar33 = lVar23;
        }
        lVar23 = *(long *)(lVar23 + (ulong)(*(int *)(lVar23 + 0x20) < 1) * 8);
      } while (lVar23 != 0);
      if (((lVar33 != lVar28) && (*(int *)(lVar33 + 0x20) < 2)) &&
         (plVar25 = *(long **)(lVar33 + 0x28), plVar25 != (long *)0x0)) {
        (**(code **)(*plVar25 + 0x208))(plVar25,1);
        (**(code **)(*plVar25 + 0x388))(plVar25,0,0);
      }
    }
  }
  FUN_71037717d0(plVar35,2,"set_parts_learn_btn_02",ppppbVar21,param_5,param_6,param_7,param_8);
  lVar23 = *(long *)(*plVar35 + 0x1b8);
  if (lVar23 != 0) {
    lVar28 = *plVar35 + 0x1b8;
    lVar33 = lVar28;
    lVar31 = lVar23;
    do {
      if (1 < *(int *)(lVar31 + 0x20)) {
        lVar33 = lVar31;
      }
      lVar31 = *(long *)(lVar31 + (ulong)(*(int *)(lVar31 + 0x20) < 2) * 8);
    } while (lVar31 != 0);
    if (((lVar33 != lVar28) && (*(int *)(lVar33 + 0x20) < 3)) &&
       (plVar25 = *(long **)(lVar33 + 0x28), plVar25 != (long *)0x0)) {
      (**(code **)(*plVar25 + 0x1f8))(plVar25,1);
      (**(code **)(*plVar25 + 0x388))(plVar25,0,0);
      lVar28 = *plVar35 + 0x1b8;
      lVar23 = *(long *)(*plVar35 + 0x1b8);
    }
    lVar33 = lVar28;
    if (lVar23 != 0) {
      do {
        if (1 < *(int *)(lVar23 + 0x20)) {
          lVar33 = lVar23;
        }
        lVar23 = *(long *)(lVar23 + (ulong)(*(int *)(lVar23 + 0x20) < 2) * 8);
      } while (lVar23 != 0);
      if (((lVar33 != lVar28) && (*(int *)(lVar33 + 0x20) < 3)) &&
         (plVar25 = *(long **)(lVar33 + 0x28), plVar25 != (long *)0x0)) {
        (**(code **)(*plVar25 + 0x208))(plVar25,1);
        (**(code **)(*plVar25 + 0x388))(plVar25,0,0);
      }
    }
  }
  lVar23 = *(long *)(*(long *)(DAT_710532f8d0 + 8) + 0x40);
  if ((ulong)(*(long *)(*(long *)(DAT_710532f8d0 + 8) + 0x48) - lVar23 >> 3) < 4) {
    local_320 = (undefined **)0x0;
  }
  else {
    local_320 = *(undefined ***)(lVar23 + 0x18);
  }
  FUN_7103772070(*plVar35,0,(long ****)&local_320,ppppbVar21,param_5,param_6,param_7,param_8);
  lVar23 = *(long *)(*(long *)(DAT_710532f8d0 + 8) + 0x40);
  if ((ulong)(*(long *)(*(long *)(DAT_710532f8d0 + 8) + 0x48) - lVar23 >> 3) < 4) {
    local_320 = (undefined **)0x0;
  }
  else {
    local_320 = *(undefined ***)(lVar23 + 0x18);
  }
  FUN_7103772070(*plVar35,1,(long ****)&local_320,ppppbVar21,param_5,param_6,param_7,param_8);
  lVar23 = *(long *)(*(long *)(DAT_710532f8d0 + 8) + 0x40);
  if ((ulong)(*(long *)(*(long *)(DAT_710532f8d0 + 8) + 0x48) - lVar23 >> 3) < 4) {
    local_320 = (undefined **)0x0;
  }
  else {
    local_320 = *(undefined ***)(lVar23 + 0x18);
  }
  FUN_7103772070(*plVar35,2,(long ****)&local_320,ppppbVar21,param_5,param_6,param_7,param_8);
  FUN_7103771a80(plVar35,0,0);
  (**(code **)(*(long *)*plVar35 + 0x60))((long *)*plVar35,0);
  (**(code **)(*(long *)*plVar35 + 0x70))((long *)*plVar35,0);
  ppppbVar21 = (byte ****)&local_1b0;
  FUN_7103770b30(plVar36,puVar2,(long ****)"selector_2",ppppbVar21,param_5,param_6,param_7,param_8);
  FUN_71037717d0(plVar36,0,"set_parts_float_btn",ppppbVar21,param_5,param_6,param_7,param_8);
  lVar23 = *(long *)(*plVar36 + 0x1b8);
  if (lVar23 != 0) {
    lVar28 = *plVar36 + 0x1b8;
    lVar33 = lVar28;
    lVar31 = lVar23;
    do {
      bVar5 = *(int *)(lVar31 + 0x20) < 0;
      if (!bVar5) {
        lVar33 = lVar31;
      }
      lVar31 = *(long *)(lVar31 + (ulong)bVar5 * 8);
    } while (lVar31 != 0);
    if (((lVar33 != lVar28) && (*(int *)(lVar33 + 0x20) < 1)) &&
       (plVar25 = *(long **)(lVar33 + 0x28), plVar25 != (long *)0x0)) {
      (**(code **)(*plVar25 + 0x1f8))(plVar25,1);
      (**(code **)(*plVar25 + 0x388))(plVar25,0,0);
      lVar28 = *plVar36 + 0x1b8;
      lVar23 = *(long *)(*plVar36 + 0x1b8);
    }
    lVar33 = lVar28;
    if (lVar23 != 0) {
      do {
        bVar5 = *(int *)(lVar23 + 0x20) < 0;
        if (!bVar5) {
          lVar33 = lVar23;
        }
        lVar23 = *(long *)(lVar23 + (ulong)bVar5 * 8);
      } while (lVar23 != 0);
      if (((lVar33 != lVar28) && (*(int *)(lVar33 + 0x20) < 1)) &&
         (plVar25 = *(long **)(lVar33 + 0x28), plVar25 != (long *)0x0)) {
        (**(code **)(*plVar25 + 0x208))(plVar25,1);
        (**(code **)(*plVar25 + 0x388))(plVar25,0,0);
      }
    }
  }
  FUN_7103771a80(plVar36,0,0);
  (**(code **)(*(long *)*plVar36 + 0x60))((long *)*plVar36,0);
  (**(code **)(*(long *)*plVar36 + 0x70))((long *)*plVar36,0);
  ppppbVar21 = (byte ****)&local_1b0;
  FUN_7103770b30(plVar29,puVar2,(long ****)"selector_3",ppppbVar21,param_5,param_6,param_7,param_8);
  FUN_71037717d0(plVar29,0,"set_parts_decide_btn",ppppbVar21,param_5,param_6,param_7,param_8);
  lVar23 = *plVar29;
  lVar28 = *(long *)(lVar23 + 0x1b8);
  if (lVar28 != 0) {
    lVar33 = lVar23 + 0x1b8;
    lVar31 = lVar33;
    lVar32 = lVar28;
    do {
      bVar5 = *(int *)(lVar32 + 0x20) < 0;
      if (!bVar5) {
        lVar31 = lVar32;
      }
      lVar32 = *(long *)(lVar32 + (ulong)bVar5 * 8);
    } while (lVar32 != 0);
    if (((lVar31 != lVar33) && (*(int *)(lVar31 + 0x20) < 1)) &&
       (plVar25 = *(long **)(lVar31 + 0x28), plVar25 != (long *)0x0)) {
      (**(code **)(*plVar25 + 0x1f8))(plVar25,1);
      (**(code **)(*plVar25 + 0x388))(plVar25,0,0);
      lVar23 = *plVar29;
      lVar28 = *(long *)(lVar23 + 0x1b8);
      lVar33 = lVar23 + 0x1b8;
    }
    lVar31 = lVar33;
    if (lVar28 != 0) {
      do {
        bVar5 = *(int *)(lVar28 + 0x20) < 0;
        if (!bVar5) {
          lVar31 = lVar28;
        }
        lVar28 = *(long *)(lVar28 + (ulong)bVar5 * 8);
      } while (lVar28 != 0);
      if (((lVar31 != lVar33) && (*(int *)(lVar31 + 0x20) < 1)) &&
         (plVar25 = *(long **)(lVar31 + 0x28), plVar25 != (long *)0x0)) {
        (**(code **)(*plVar25 + 0x208))(plVar25,1);
        (**(code **)(*plVar25 + 0x388))(plVar25,0,0);
        lVar23 = *plVar29;
      }
    }
  }
  ppppbVar21 = (byte ****)0x0;
  FUN_7103771930(lVar23,0,(long ****)0x6,(byte ****)0x0,param_5,param_6,param_7,param_8);
  pppplVar16 = (long ****)0x0;
  FUN_7103771a80(plVar29,0,0);
  (**(code **)(*(long *)*plVar29 + 0x60))((long *)*plVar29,0);
  (**(code **)(*(long *)*plVar29 + 0x70))((long *)*plVar29,1);
  FUN_7103776390(&local_1e8,puVar2,pppplVar16,ppppbVar21,param_5,param_6,param_7,param_8);
  pppplVar16 = (long ****)0x0;
  FUN_7103776640(&local_320,(long)&local_1e8,(byte ****)"set_parts_pick_btn_%02d",0,ppppbVar21,
                 param_5,param_6,param_7,param_8);
  FUN_71019b6ba0((long)(puVar10 + 0xc),(long)&local_320,pppplVar16,ppppbVar21,param_5,param_6,
                 param_7,param_8);
  uVar9 = (ulong)local_318;
  local_320 = &PTR_FUN_710523d988;
  local_318 = (undefined8 *)0x0;
  if (uVar9 != 0) {
    uVar12 = *(ulong *)(uVar9 + 0x18);
    *(undefined ***)(uVar9 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar9 + 0x18) = 0;
    if (uVar12 != 0) {
      FUN_710392eb40(uVar12);
    }
    FUN_710392eb40(uVar9);
  }
  uVar9 = local_1e0;
  local_1e8 = (long ***)&PTR_FUN_710523d988;
  local_1e0 = 0;
  if (uVar9 != 0) {
    uVar12 = *(ulong *)(uVar9 + 0x18);
    *(undefined ***)(uVar9 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar9 + 0x18) = 0;
    if (uVar12 != 0) {
      FUN_710392eb40(uVar12);
    }
    FUN_710392eb40(uVar9);
  }
  FUN_7103776390(&local_1e8,puVar2,pppplVar16,ppppbVar21,param_5,param_6,param_7,param_8);
  pppplVar16 = (long ****)0x1;
  FUN_7103776640(&local_320,(long)&local_1e8,(byte ****)"set_parts_pick_btn_%02d",1,ppppbVar21,
                 param_5,param_6,param_7,param_8);
  FUN_71019b6ba0((long)(puVar10 + 0x11),(long)&local_320,pppplVar16,ppppbVar21,param_5,param_6,
                 param_7,param_8);
  uVar9 = (ulong)local_318;
  local_320 = &PTR_FUN_710523d988;
  local_318 = (undefined8 *)0x0;
  if (uVar9 != 0) {
    uVar12 = *(ulong *)(uVar9 + 0x18);
    *(undefined ***)(uVar9 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar9 + 0x18) = 0;
    if (uVar12 != 0) {
      FUN_710392eb40(uVar12);
    }
    FUN_710392eb40(uVar9);
  }
  uVar9 = local_1e0;
  local_1e8 = (long ***)&PTR_FUN_710523d988;
  local_1e0 = 0;
  if (uVar9 != 0) {
    uVar12 = *(ulong *)(uVar9 + 0x18);
    *(undefined ***)(uVar9 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar9 + 0x18) = 0;
    if (uVar12 != 0) {
      FUN_710392eb40(uVar12);
    }
    FUN_710392eb40(uVar9);
  }
  FUN_7103776390(&local_1e8,puVar2,pppplVar16,ppppbVar21,param_5,param_6,param_7,param_8);
  pppplVar16 = (long ****)0x2;
  FUN_7103776640(&local_320,(long)&local_1e8,(byte ****)"set_parts_pick_btn_%02d",2,ppppbVar21,
                 param_5,param_6,param_7,param_8);
  FUN_71019b6ba0((long)(puVar10 + 0x16),(long)&local_320,pppplVar16,ppppbVar21,param_5,param_6,
                 param_7,param_8);
  uVar9 = (ulong)local_318;
  local_320 = &PTR_FUN_710523d988;
  local_318 = (undefined8 *)0x0;
  if (uVar9 != 0) {
    uVar12 = *(ulong *)(uVar9 + 0x18);
    *(undefined ***)(uVar9 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar9 + 0x18) = 0;
    if (uVar12 != 0) {
      FUN_710392eb40(uVar12);
    }
    FUN_710392eb40(uVar9);
  }
  uVar9 = local_1e0;
  local_1e8 = (long ***)&PTR_FUN_710523d988;
  local_1e0 = 0;
  if (uVar9 != 0) {
    uVar12 = *(ulong *)(uVar9 + 0x18);
    *(undefined ***)(uVar9 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar9 + 0x18) = 0;
    if (uVar12 != 0) {
      FUN_710392eb40(uVar12);
    }
    FUN_710392eb40(uVar9);
  }
  FUN_7103776390(&local_1e8,puVar2,pppplVar16,ppppbVar21,param_5,param_6,param_7,param_8);
  pppplVar16 = (long ****)0x3;
  FUN_7103776640(&local_320,(long)&local_1e8,(byte ****)"set_parts_pick_btn_%02d",3,ppppbVar21,
                 param_5,param_6,param_7,param_8);
  FUN_71019b6ba0((long)(puVar10 + 0x1b),(long)&local_320,pppplVar16,ppppbVar21,param_5,param_6,
                 param_7,param_8);
  uVar9 = (ulong)local_318;
  local_320 = &PTR_FUN_710523d988;
  local_318 = (undefined8 *)0x0;
  if (uVar9 != 0) {
    uVar12 = *(ulong *)(uVar9 + 0x18);
    *(undefined ***)(uVar9 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar9 + 0x18) = 0;
    if (uVar12 != 0) {
      FUN_710392eb40(uVar12);
    }
    FUN_710392eb40(uVar9);
  }
  uVar9 = local_1e0;
  local_1e8 = (long ***)&PTR_FUN_710523d988;
  local_1e0 = 0;
  if (uVar9 != 0) {
    uVar12 = *(ulong *)(uVar9 + 0x18);
    *(undefined ***)(uVar9 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar9 + 0x18) = 0;
    if (uVar12 != 0) {
      FUN_710392eb40(uVar12);
    }
    FUN_710392eb40(uVar9);
  }
  FUN_7103776390(&local_1c0,puVar2,pppplVar16,ppppbVar21,param_5,param_6,param_7,param_8);
  pppplVar16 = (long ****)0x0;
  FUN_7103776640(&local_320,(long)&local_1c0,(byte ****)"set_parts_learn_btn_%02d",0,ppppbVar21,
                 param_5,param_6,param_7,param_8);
  FUN_71019b6ba0((long)(puVar10 + 0x20),(long)&local_320,pppplVar16,ppppbVar21,param_5,param_6,
                 param_7,param_8);
  uVar9 = (ulong)local_318;
  local_320 = &PTR_FUN_710523d988;
  local_318 = (undefined8 *)0x0;
  if (uVar9 != 0) {
    uVar12 = *(ulong *)(uVar9 + 0x18);
    *(undefined ***)(uVar9 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar9 + 0x18) = 0;
    if (uVar12 != 0) {
      FUN_710392eb40(uVar12);
    }
    FUN_710392eb40(uVar9);
  }
  uVar9 = local_1b8;
  local_1c0 = &PTR_FUN_710523d988;
  local_1b8 = 0;
  if (uVar9 != 0) {
    uVar12 = *(ulong *)(uVar9 + 0x18);
    *(undefined ***)(uVar9 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar9 + 0x18) = 0;
    if (uVar12 != 0) {
      FUN_710392eb40(uVar12);
    }
    FUN_710392eb40(uVar9);
  }
  FUN_7103776390(&local_1c0,puVar2,pppplVar16,ppppbVar21,param_5,param_6,param_7,param_8);
  pppplVar16 = (long ****)0x1;
  FUN_7103776640(&local_320,(long)&local_1c0,(byte ****)"set_parts_learn_btn_%02d",1,ppppbVar21,
                 param_5,param_6,param_7,param_8);
  FUN_71019b6ba0((long)(puVar10 + 0x25),(long)&local_320,pppplVar16,ppppbVar21,param_5,param_6,
                 param_7,param_8);
  uVar9 = (ulong)local_318;
  local_320 = &PTR_FUN_710523d988;
  local_318 = (undefined8 *)0x0;
  if (uVar9 != 0) {
    uVar12 = *(ulong *)(uVar9 + 0x18);
    *(undefined ***)(uVar9 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar9 + 0x18) = 0;
    if (uVar12 != 0) {
      FUN_710392eb40(uVar12);
    }
    FUN_710392eb40(uVar9);
  }
  uVar9 = local_1b8;
  local_1c0 = &PTR_FUN_710523d988;
  local_1b8 = 0;
  if (uVar9 != 0) {
    uVar12 = *(ulong *)(uVar9 + 0x18);
    *(undefined ***)(uVar9 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar9 + 0x18) = 0;
    if (uVar12 != 0) {
      FUN_710392eb40(uVar12);
    }
    FUN_710392eb40(uVar9);
  }
  FUN_7103776390(&local_1c0,puVar2,pppplVar16,ppppbVar21,param_5,param_6,param_7,param_8);
  pppplVar16 = (long ****)0x2;
  FUN_7103776640(&local_320,(long)&local_1c0,(byte ****)"set_parts_learn_btn_%02d",2,ppppbVar21,
                 param_5,param_6,param_7,param_8);
  FUN_71019b6ba0((long)(puVar10 + 0x2a),(long)&local_320,pppplVar16,ppppbVar21,param_5,param_6,
                 param_7,param_8);
  uVar9 = (ulong)local_318;
  local_320 = &PTR_FUN_710523d988;
  local_318 = (undefined8 *)0x0;
  if (uVar9 != 0) {
    uVar12 = *(ulong *)(uVar9 + 0x18);
    *(undefined ***)(uVar9 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar9 + 0x18) = 0;
    if (uVar12 != 0) {
      FUN_710392eb40(uVar12);
    }
    FUN_710392eb40(uVar9);
  }
  uVar9 = local_1b8;
  local_1c0 = &PTR_FUN_710523d988;
  local_1b8 = 0;
  if (uVar9 != 0) {
    uVar12 = *(ulong *)(uVar9 + 0x18);
    *(undefined ***)(uVar9 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar9 + 0x18) = 0;
    if (uVar12 != 0) {
      FUN_710392eb40(uVar12);
    }
    FUN_710392eb40(uVar9);
  }
  FUN_7103776390(&local_1d0,puVar2,pppplVar16,ppppbVar21,param_5,param_6,param_7,param_8);
  FUN_7103776640(&local_320,(long)&local_1d0,(byte ****)"set_parts_float_btn",pppplVar16,ppppbVar21,
                 param_5,param_6,param_7,param_8);
  FUN_71019b6ba0((long)(puVar10 + 0x2f),(long)&local_320,pppplVar16,ppppbVar21,param_5,param_6,
                 param_7,param_8);
  uVar9 = (ulong)local_318;
  local_320 = &PTR_FUN_710523d988;
  local_318 = (undefined8 *)0x0;
  uVar15 = extraout_x1_35;
  if (uVar9 != 0) {
    uVar12 = *(ulong *)(uVar9 + 0x18);
    *(undefined ***)(uVar9 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar9 + 0x18) = 0;
    if (uVar12 != 0) {
      FUN_710392eb40(uVar12);
    }
    FUN_710392eb40(uVar9);
    uVar15 = extraout_x1_36;
  }
  uVar9 = local_1c8;
  local_1d0 = &PTR_FUN_710523d988;
  local_1c8 = 0;
  if (uVar9 != 0) {
    uVar12 = *(ulong *)(uVar9 + 0x18);
    *(undefined ***)(uVar9 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar9 + 0x18) = 0;
    if (uVar12 != 0) {
      FUN_710392eb40(uVar12);
    }
    FUN_710392eb40(uVar9);
    uVar15 = extraout_x1_37;
  }
  *(undefined2 *)(puVar10 + 1) = 0x101;
  *(undefined2 *)((long)puVar10 + 10) = local_1d4;
  *(undefined1 *)(puVar10 + 2) = 1;
  *(undefined4 *)((long)puVar10 + 0xc) = 0x11000;
  *(undefined4 *)((long)puVar10 + 0xc) = 0x11000;
  *(undefined2 *)((long)puVar10 + 0x11) = (undefined2)local_320;
  *(undefined1 *)((long)puVar10 + 0x13) = local_320._2_1_;
  *(undefined4 *)((long)puVar10 + 0x14) = 1;
  *(undefined1 *)(puVar10 + 3) = 0;
  lVar28 = **(long **)puVar10[5];
  *(undefined4 *)(*(long *)(lVar28 + 0x600) + 0x494) = 1;
  lVar23 = *(long *)(lVar28 + 0x608);
  lVar28 = *(long *)(lVar28 + 0x610);
  if (lVar23 != lVar28) {
    uVar9 = (lVar28 + -0x10) - lVar23;
    uVar6 = ((uint)(uVar9 >> 4) & 0xfffffff) + 1;
    if ((uVar6 & 3) != 0) {
      lVar33 = -((ulong)uVar6 & 3);
      do {
        plVar25 = (long *)(lVar23 + 8);
        lVar23 = lVar23 + 0x10;
        lVar33 = lVar33 + 1;
        *(undefined4 *)(*plVar25 + 0x494) = 1;
      } while (lVar33 != 0);
    }
    if (0x2f < uVar9) {
      do {
        *(undefined4 *)(*(long *)(lVar23 + 8) + 0x494) = 1;
        *(undefined4 *)(*(long *)(lVar23 + 0x18) + 0x494) = 1;
        *(undefined4 *)(*(long *)(lVar23 + 0x28) + 0x494) = 1;
        plVar25 = (long *)(lVar23 + 0x38);
        lVar23 = lVar23 + 0x40;
        *(undefined4 *)(*plVar25 + 0x494) = 1;
      } while (lVar28 != lVar23);
    }
  }
  if (alStack_c0 == local_a0) {
    pcVar26 = *(code **)(*local_a0 + 0x20);
LAB_71019948c8:
    (*pcVar26)();
    uVar15 = extraout_x1_38;
  }
  else if (local_a0 != (long *)0x0) {
    pcVar26 = *(code **)(*local_a0 + 0x28);
    goto LAB_71019948c8;
  }
  if (alStack_f0 == local_d0) {
    pcVar26 = *(code **)(*local_d0 + 0x20);
LAB_71019948f8:
    (*pcVar26)();
    uVar15 = extraout_x1_39;
  }
  else if (local_d0 != (long *)0x0) {
    pcVar26 = *(code **)(*local_d0 + 0x28);
    goto LAB_71019948f8;
  }
  if (alStack_120 == local_100) {
    pcVar26 = *(code **)(*local_100 + 0x20);
LAB_7101994928:
    (*pcVar26)();
    uVar15 = extraout_x1_40;
  }
  else if (local_100 != (long *)0x0) {
    pcVar26 = *(code **)(*local_100 + 0x28);
    goto LAB_7101994928;
  }
  if (alStack_150 == local_130) {
    pcVar26 = *(code **)(*local_130 + 0x20);
LAB_7101994958:
    (*pcVar26)();
    uVar15 = extraout_x1_41;
  }
  else if (local_130 != (long *)0x0) {
    pcVar26 = *(code **)(*local_130 + 0x28);
    goto LAB_7101994958;
  }
  if (alStack_180 == local_160) {
    pcVar26 = *(code **)(*local_160 + 0x20);
LAB_7101994988:
    (*pcVar26)();
    uVar15 = extraout_x1_42;
  }
  else if (local_160 != (long *)0x0) {
    pcVar26 = *(code **)(*local_160 + 0x28);
    goto LAB_7101994988;
  }
  puVar8[0x10] = puVar10;
  puVar8[2] = &DAT_7105333600;
  uVar4 = DAT_7105333664;
  plVar25 = param_1 + 0x23;
  plVar29 = param_1 + 0x24;
  plVar35 = param_1 + 0x25;
  plVar36 = param_1 + 0x26;
  *(undefined4 *)(puVar8 + 0xd) = DAT_7105333660;
  *(undefined4 *)((long)puVar8 + 0x6c) = uVar4;
  do {
    uVar6 = DAT_7105333650;
    cVar3 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(0x7105333650,0x10);
    if (bVar5) {
      DAT_7105333650 = 1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0' || (uVar6 & 1) != 0);
  puVar8[9] = DAT_7105333648;
  DAT_7105333650 = 0;
  DAT_7105333648 = puVar8;
  FUN_71032caea0((long)puVar8,uVar15,pppplVar16,ppppbVar21,param_5,param_6,param_7,param_8);
  lVar23 = param_1[0xb];
  param_1[0xb] = puVar8;
  if (lVar23 != 0) {
    FUN_71032cad20(lVar23);
    puVar8 = (undefined8 *)param_1[0xb];
  }
  *(undefined1 *)(puVar8 + 0xe) = 1;
  local_1c0 = (undefined **)CONCAT17(local_1c0._7_1_,0xff000000000000);
  local_1b8 = 0x52ffff0000000000;
  local_1e8 = (long ***)0x3200000032;
  local_1c0 = (undefined **)CONCAT26(local_1c0._6_2_,0xb);
  local_1d8 = 1;
  local_1e0 = 0x8000000032;
  if (((DAT_71053144d8 & 1) == 0) && (iVar7 = __cxa_guard_acquire(&DAT_71053144d8), iVar7 != 0)) {
    FUN_7101764000();
    FUN_71000001c0();
    __cxa_guard_release(&DAT_71053144d8);
  }
  if (DAT_7105307b68._4_4_ - 3U < 2) {
    local_1d8 = 0;
  }
  local_1e8 = (long ***)0x600000007;
  local_1a8 = 0x5f7263735f746573;
  uVar6 = 0x811c9dc5;
  local_1a0 = 0x74726f73;
  uVar30 = 0x73;
  lVar23 = 9;
  local_19c = local_19c & 0xff00;
  do {
    uVar6 = uVar6 * 0x89 ^ uVar30;
    uVar30 = (uint)*(byte *)((long)&local_1b0 + lVar23);
    lVar23 = lVar23 + 1;
  } while (uVar30 != 0);
  local_1b0 = (byte ***)CONCAT44(0xc,uVar6);
  pppplVar16 = &local_1e8;
  ppppbVar21 = (byte ****)&local_1b0;
  pppplVar22 = (long ****)0x0;
  FUN_7101df9480((undefined8 *)*plVar27,&local_1c0,(uint *)pppplVar16,(long)ppppbVar21,
                 (long ****)0x0,param_6,param_7,param_8);
  FUN_7101df6680(*plVar27,6,pppplVar16,ppppbVar21,pppplVar22,param_6,param_7,param_8);
  local_1b0 = (byte ***)0x0;
  local_1a8 = 0x101;
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
  local_1b0 = (byte ***)0x0;
  local_1a8 = CONCAT71(local_1a8._1_7_,1);
  plVar27 = ***pppplVar18;
  *(undefined4 *)(plVar27[0xc0] + 0x18) = 0x400;
  *(undefined4 *)(plVar27[0xc0] + 0x1c) = 0x80;
  *(undefined4 *)(plVar27[0xc0] + 0x20) = 0x10;
  *(undefined4 *)(plVar27[0xc0] + 0x24) = 0x100;
  *(undefined4 *)(plVar27[0xc0] + 0x28) = 0x200;
  *(undefined4 *)(plVar27[0xc0] + 0xe0) = 0x390;
  *(undefined4 *)(plVar27[0xc0] + 0xdc) = 0x390;
  FUN_7101989b70(&local_320,&local_1b0);
  ppppbVar21 = (byte ****)&local_320;
  local_318._0_3_ = CONCAT12(1,(undefined2)local_318);
  FUN_7103770b30(plVar25,pplVar1,(long ****)"selector_3",ppppbVar21,pppplVar22,param_6,param_7,
                 param_8);
  FUN_71037717d0(plVar25,0,"set_btn_tab_00",ppppbVar21,pppplVar22,param_6,param_7,param_8);
  lVar23 = *(long *)(*plVar25 + 0x1b8);
  if (lVar23 != 0) {
    lVar28 = *plVar25 + 0x1b8;
    lVar33 = lVar28;
    lVar31 = lVar23;
    do {
      bVar5 = *(int *)(lVar31 + 0x20) < 0;
      if (!bVar5) {
        lVar33 = lVar31;
      }
      lVar31 = *(long *)(lVar31 + (ulong)bVar5 * 8);
    } while (lVar31 != 0);
    if (((lVar33 != lVar28) && (*(int *)(lVar33 + 0x20) < 1)) &&
       (plVar27 = *(long **)(lVar33 + 0x28), plVar27 != (long *)0x0)) {
      (**(code **)(*plVar27 + 0x1f8))(plVar27,1);
      (**(code **)(*plVar27 + 0x388))(plVar27,0,0);
      lVar28 = *plVar25 + 0x1b8;
      lVar23 = *(long *)(*plVar25 + 0x1b8);
    }
    lVar33 = lVar28;
    if (lVar23 != 0) {
      do {
        bVar5 = *(int *)(lVar23 + 0x20) < 0;
        if (!bVar5) {
          lVar33 = lVar23;
        }
        lVar23 = *(long *)(lVar23 + (ulong)bVar5 * 8);
      } while (lVar23 != 0);
      if (((lVar33 != lVar28) && (*(int *)(lVar33 + 0x20) < 1)) &&
         (plVar27 = *(long **)(lVar33 + 0x28), plVar27 != (long *)0x0)) {
        (**(code **)(*plVar27 + 0x208))(plVar27,0);
        (**(code **)(*plVar27 + 0x388))(plVar27,1,0);
      }
    }
  }
  FUN_71037717d0(plVar25,1,"set_btn_tab_01",ppppbVar21,pppplVar22,param_6,param_7,param_8);
  lVar23 = *(long *)(*plVar25 + 0x1b8);
  if (lVar23 != 0) {
    lVar28 = *plVar25 + 0x1b8;
    lVar33 = lVar28;
    lVar31 = lVar23;
    do {
      if (0 < *(int *)(lVar31 + 0x20)) {
        lVar33 = lVar31;
      }
      lVar31 = *(long *)(lVar31 + (ulong)(*(int *)(lVar31 + 0x20) < 1) * 8);
    } while (lVar31 != 0);
    if (((lVar33 != lVar28) && (*(int *)(lVar33 + 0x20) < 2)) &&
       (plVar27 = *(long **)(lVar33 + 0x28), plVar27 != (long *)0x0)) {
      (**(code **)(*plVar27 + 0x1f8))(plVar27,1);
      (**(code **)(*plVar27 + 0x388))(plVar27,0,0);
      lVar28 = *plVar25 + 0x1b8;
      lVar23 = *(long *)(*plVar25 + 0x1b8);
    }
    lVar33 = lVar28;
    if (lVar23 != 0) {
      do {
        if (0 < *(int *)(lVar23 + 0x20)) {
          lVar33 = lVar23;
        }
        lVar23 = *(long *)(lVar23 + (ulong)(*(int *)(lVar23 + 0x20) < 1) * 8);
      } while (lVar23 != 0);
      if (((lVar33 != lVar28) && (*(int *)(lVar33 + 0x20) < 2)) &&
         (plVar27 = *(long **)(lVar33 + 0x28), plVar27 != (long *)0x0)) {
        (**(code **)(*plVar27 + 0x208))(plVar27,0);
        (**(code **)(*plVar27 + 0x388))(plVar27,1,0);
      }
    }
  }
  FUN_7103771a80(plVar25,*(int *)(param_1 + 0x72),0);
  (**(code **)(*(long *)param_1[0x23] + 0x60))((long *)param_1[0x23],0);
  (**(code **)(*(long *)param_1[0x23] + 0x70))((long *)param_1[0x23],1);
  if (alStack_230 == local_210) {
    (**(code **)(*local_210 + 0x20))();
  }
  else if (local_210 != (long *)0x0) {
    (**(code **)(*local_210 + 0x28))();
  }
  if (alStack_260 == local_240) {
    pcVar26 = *(code **)(*local_240 + 0x20);
LAB_7101994e90:
    (*pcVar26)();
  }
  else if (local_240 != (long *)0x0) {
    pcVar26 = *(code **)(*local_240 + 0x28);
    goto LAB_7101994e90;
  }
  if (alStack_290 == local_270) {
    pcVar26 = *(code **)(*local_270 + 0x20);
LAB_7101994ec0:
    (*pcVar26)();
  }
  else if (local_270 != (long *)0x0) {
    pcVar26 = *(code **)(*local_270 + 0x28);
    goto LAB_7101994ec0;
  }
  if (alStack_2c0 == local_2a0) {
    pcVar26 = *(code **)(*local_2a0 + 0x20);
LAB_7101994ef0:
    (*pcVar26)();
  }
  else if (local_2a0 != (long *)0x0) {
    pcVar26 = *(code **)(*local_2a0 + 0x28);
    goto LAB_7101994ef0;
  }
  if (alStack_2f0 == local_2d0) {
    pcVar26 = *(code **)(*local_2d0 + 0x20);
LAB_7101994f20:
    (*pcVar26)();
  }
  else if (local_2d0 != (long *)0x0) {
    pcVar26 = *(code **)(*local_2d0 + 0x28);
    goto LAB_7101994f20;
  }
  FUN_7101989b70(&local_320,&local_1b0);
  ppppbVar21 = (byte ****)&local_320;
  local_318._0_3_ = CONCAT12(1,(undefined2)local_318);
  FUN_7103770b30(plVar29,pplVar1,(long ****)"selector_4",ppppbVar21,pppplVar22,param_6,param_7,
                 param_8);
  FUN_71037717d0(plVar29,0,"spirits_tab_l_btn",ppppbVar21,pppplVar22,param_6,param_7,param_8);
  lVar23 = *(long *)(*plVar29 + 0x1b8);
  if (lVar23 != 0) {
    lVar28 = *plVar29 + 0x1b8;
    lVar33 = lVar28;
    lVar31 = lVar23;
    do {
      bVar5 = *(int *)(lVar31 + 0x20) < 0;
      if (!bVar5) {
        lVar33 = lVar31;
      }
      lVar31 = *(long *)(lVar31 + (ulong)bVar5 * 8);
    } while (lVar31 != 0);
    if (((lVar33 != lVar28) && (*(int *)(lVar33 + 0x20) < 1)) &&
       (plVar27 = *(long **)(lVar33 + 0x28), plVar27 != (long *)0x0)) {
      (**(code **)(*plVar27 + 0x1f8))(plVar27,1);
      (**(code **)(*plVar27 + 0x388))(plVar27,0,0);
      lVar28 = *plVar29 + 0x1b8;
      lVar23 = *(long *)(*plVar29 + 0x1b8);
    }
    lVar33 = lVar28;
    if (lVar23 != 0) {
      do {
        bVar5 = *(int *)(lVar23 + 0x20) < 0;
        if (!bVar5) {
          lVar33 = lVar23;
        }
        lVar23 = *(long *)(lVar23 + (ulong)bVar5 * 8);
      } while (lVar23 != 0);
      if (((lVar33 != lVar28) && (*(int *)(lVar33 + 0x20) < 1)) &&
         (plVar27 = *(long **)(lVar33 + 0x28), plVar27 != (long *)0x0)) {
        (**(code **)(*plVar27 + 0x208))(plVar27,1);
        (**(code **)(*plVar27 + 0x388))(plVar27,0,0);
      }
    }
  }
  FUN_71037717d0(plVar29,1,"spirits_tab_r_btn",ppppbVar21,pppplVar22,param_6,param_7,param_8);
  lVar23 = *plVar29;
  lVar28 = *(long *)(lVar23 + 0x1b8);
  if (lVar28 != 0) {
    lVar33 = lVar23 + 0x1b8;
    lVar31 = lVar33;
    lVar32 = lVar28;
    do {
      if (0 < *(int *)(lVar32 + 0x20)) {
        lVar31 = lVar32;
      }
      lVar32 = *(long *)(lVar32 + (ulong)(*(int *)(lVar32 + 0x20) < 1) * 8);
    } while (lVar32 != 0);
    if (((lVar31 != lVar33) && (*(int *)(lVar31 + 0x20) < 2)) &&
       (plVar27 = *(long **)(lVar31 + 0x28), plVar27 != (long *)0x0)) {
      (**(code **)(*plVar27 + 0x1f8))(plVar27,1);
      (**(code **)(*plVar27 + 0x388))(plVar27,0,0);
      lVar23 = *plVar29;
      lVar28 = *(long *)(lVar23 + 0x1b8);
      lVar33 = lVar23 + 0x1b8;
    }
    lVar31 = lVar33;
    if (lVar28 != 0) {
      do {
        if (0 < *(int *)(lVar28 + 0x20)) {
          lVar31 = lVar28;
        }
        lVar28 = *(long *)(lVar28 + (ulong)(*(int *)(lVar28 + 0x20) < 1) * 8);
      } while (lVar28 != 0);
      if (((lVar31 != lVar33) && (*(int *)(lVar31 + 0x20) < 2)) &&
         (plVar27 = *(long **)(lVar31 + 0x28), plVar27 != (long *)0x0)) {
        (**(code **)(*plVar27 + 0x208))(plVar27,1);
        (**(code **)(*plVar27 + 0x388))(plVar27,0,0);
        lVar23 = *plVar29;
      }
    }
  }
  FUN_7103771930(lVar23,0,(long ****)&DAT_00000009,(byte ****)0x0,pppplVar22,param_6,param_7,param_8
                );
  FUN_7103771930(*plVar29,1,(long ****)0xa,(byte ****)0x0,pppplVar22,param_6,param_7,param_8);
  (**(code **)(*(long *)*plVar29 + 0x60))((long *)*plVar29,0);
  (**(code **)(*(long *)*plVar29 + 0x70))((long *)*plVar29,1);
  if (alStack_230 == local_210) {
    pcVar26 = *(code **)(*local_210 + 0x20);
LAB_71019951cc:
    (*pcVar26)();
  }
  else if (local_210 != (long *)0x0) {
    pcVar26 = *(code **)(*local_210 + 0x28);
    goto LAB_71019951cc;
  }
  if (alStack_260 == local_240) {
    pcVar26 = *(code **)(*local_240 + 0x20);
LAB_71019951fc:
    (*pcVar26)();
  }
  else if (local_240 != (long *)0x0) {
    pcVar26 = *(code **)(*local_240 + 0x28);
    goto LAB_71019951fc;
  }
  if (alStack_290 == local_270) {
    pcVar26 = *(code **)(*local_270 + 0x20);
LAB_710199522c:
    (*pcVar26)();
  }
  else if (local_270 != (long *)0x0) {
    pcVar26 = *(code **)(*local_270 + 0x28);
    goto LAB_710199522c;
  }
  if (alStack_2c0 == local_2a0) {
    pcVar26 = *(code **)(*local_2a0 + 0x20);
LAB_710199525c:
    (*pcVar26)();
  }
  else if (local_2a0 != (long *)0x0) {
    pcVar26 = *(code **)(*local_2a0 + 0x28);
    goto LAB_710199525c;
  }
  if (alStack_2f0 == local_2d0) {
    pcVar26 = *(code **)(*local_2d0 + 0x20);
LAB_710199528c:
    (*pcVar26)();
  }
  else if (local_2d0 != (long *)0x0) {
    pcVar26 = *(code **)(*local_2d0 + 0x28);
    goto LAB_710199528c;
  }
  ppppbVar21 = (byte ****)&local_1b0;
  FUN_7103770b30(plVar35,pplVar1,(long ****)"selector_2",ppppbVar21,pppplVar22,param_6,param_7,
                 param_8);
  pcVar17 = "set_parts_btn_00";
  FUN_71037717d0(plVar35,0,"set_parts_btn_00",ppppbVar21,pppplVar22,param_6,param_7,param_8);
  lVar23 = *(long *)(*plVar35 + 0x1b8);
  if (lVar23 != 0) {
    lVar28 = *plVar35 + 0x1b8;
    lVar33 = lVar28;
    lVar31 = lVar23;
    do {
      bVar5 = *(int *)(lVar31 + 0x20) < 0;
      if (!bVar5) {
        lVar33 = lVar31;
      }
      lVar31 = *(long *)(lVar31 + (ulong)bVar5 * 8);
    } while (lVar31 != 0);
    if (((lVar33 != lVar28) && (*(int *)(lVar33 + 0x20) < 1)) &&
       (plVar27 = *(long **)(lVar33 + 0x28), plVar27 != (long *)0x0)) {
      (**(code **)(*plVar27 + 0x1f8))(plVar27,1);
      pcVar17 = (char *)0x0;
      (**(code **)(*plVar27 + 0x388))(plVar27,0);
      lVar28 = *plVar35 + 0x1b8;
      lVar23 = *(long *)(*plVar35 + 0x1b8);
    }
    lVar33 = lVar28;
    if (lVar23 != 0) {
      do {
        bVar5 = *(int *)(lVar23 + 0x20) < 0;
        if (!bVar5) {
          lVar33 = lVar23;
        }
        lVar23 = *(long *)(lVar23 + (ulong)bVar5 * 8);
      } while (lVar23 != 0);
      if (((lVar33 != lVar28) && (*(int *)(lVar33 + 0x20) < 1)) &&
         (plVar27 = *(long **)(lVar33 + 0x28), plVar27 != (long *)0x0)) {
        (**(code **)(*plVar27 + 0x208))(plVar27,1);
        pcVar17 = (char *)0x0;
        (**(code **)(*plVar27 + 0x388))(plVar27,0);
      }
    }
  }
  FUN_7103776640(&local_320,(long)pplVar1,(byte ****)"set_parts_btn_00",pcVar17,ppppbVar21,
                 pppplVar22,param_6,param_7,param_8);
  uVar9 = (ulong)local_318;
  FUN_7103778300(0x3f800000,(long)local_318,0x710425ec8f);
  local_320 = &PTR_FUN_710523d988;
  local_318 = (undefined8 *)0x0;
  if (uVar9 != 0) {
    uVar12 = *(ulong *)(uVar9 + 0x18);
    *(undefined ***)(uVar9 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar9 + 0x18) = 0;
    if (uVar12 != 0) {
      FUN_710392eb40(uVar12);
    }
    FUN_710392eb40(uVar9);
  }
  pcVar17 = "set_parts_btn_01";
  FUN_71037717d0(plVar35,1,"set_parts_btn_01",ppppbVar21,pppplVar22,param_6,param_7,param_8);
  lVar23 = *(long *)(*plVar35 + 0x1b8);
  if (lVar23 != 0) {
    lVar28 = *plVar35 + 0x1b8;
    lVar33 = lVar28;
    lVar31 = lVar23;
    do {
      if (0 < *(int *)(lVar31 + 0x20)) {
        lVar33 = lVar31;
      }
      lVar31 = *(long *)(lVar31 + (ulong)(*(int *)(lVar31 + 0x20) < 1) * 8);
    } while (lVar31 != 0);
    if (((lVar33 != lVar28) && (*(int *)(lVar33 + 0x20) < 2)) &&
       (plVar27 = *(long **)(lVar33 + 0x28), plVar27 != (long *)0x0)) {
      (**(code **)(*plVar27 + 0x1f8))(plVar27,1);
      pcVar17 = (char *)0x0;
      (**(code **)(*plVar27 + 0x388))(plVar27,0);
      lVar28 = *plVar35 + 0x1b8;
      lVar23 = *(long *)(*plVar35 + 0x1b8);
    }
    lVar33 = lVar28;
    if (lVar23 != 0) {
      do {
        if (0 < *(int *)(lVar23 + 0x20)) {
          lVar33 = lVar23;
        }
        lVar23 = *(long *)(lVar23 + (ulong)(*(int *)(lVar23 + 0x20) < 1) * 8);
      } while (lVar23 != 0);
      if (((lVar33 != lVar28) && (*(int *)(lVar33 + 0x20) < 2)) &&
         (plVar27 = *(long **)(lVar33 + 0x28), plVar27 != (long *)0x0)) {
        (**(code **)(*plVar27 + 0x208))(plVar27,1);
        pcVar17 = (char *)0x0;
        (**(code **)(*plVar27 + 0x388))(plVar27,0);
      }
    }
  }
  FUN_7103776640(&local_320,(long)pplVar1,(byte ****)"set_parts_btn_01",pcVar17,ppppbVar21,
                 pppplVar22,param_6,param_7,param_8);
  uVar9 = (ulong)local_318;
  FUN_7103778300(0x3f800000,(long)local_318,0x71043187d0);
  local_320 = &PTR_FUN_710523d988;
  local_318 = (undefined8 *)0x0;
  if (uVar9 != 0) {
    uVar12 = *(ulong *)(uVar9 + 0x18);
    *(undefined ***)(uVar9 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar9 + 0x18) = 0;
    if (uVar12 != 0) {
      FUN_710392eb40(uVar12);
    }
    FUN_710392eb40(uVar9);
  }
  (**(code **)(*(long *)*plVar35 + 0x60))((long *)*plVar35,0);
  puVar8 = *(undefined8 **)(*(long *)(DAT_710532f8d0 + 8) + 0x40);
  if (*(undefined8 **)(*(long *)(DAT_710532f8d0 + 8) + 0x48) == puVar8) {
    local_320 = (undefined **)0x0;
  }
  else {
    local_320 = (undefined **)*puVar8;
  }
  FUN_7103772070(*plVar35,0,(long ****)&local_320,ppppbVar21,pppplVar22,param_6,param_7,param_8);
  FUN_7103772070(*plVar35,1,(long ****)&local_320,ppppbVar21,pppplVar22,param_6,param_7,param_8);
  FUN_7101989b70(&local_320,&local_1b0);
  ppppbVar21 = (byte ****)&local_320;
  local_318._0_3_ = CONCAT12(1,(undefined2)local_318);
  FUN_7103770b30(plVar36,pplVar1,(long ****)"status_grp",ppppbVar21,pppplVar22,param_6,param_7,
                 param_8);
  FUN_71037717d0(plVar36,0,"set_parts_btn_open",ppppbVar21,pppplVar22,param_6,param_7,param_8);
  lVar23 = *(long *)(*plVar36 + 0x1b8);
  if (lVar23 != 0) {
    lVar28 = *plVar36 + 0x1b8;
    lVar33 = lVar28;
    lVar31 = lVar23;
    do {
      bVar5 = *(int *)(lVar31 + 0x20) < 0;
      if (!bVar5) {
        lVar33 = lVar31;
      }
      lVar31 = *(long *)(lVar31 + (ulong)bVar5 * 8);
    } while (lVar31 != 0);
    if (((lVar33 != lVar28) && (*(int *)(lVar33 + 0x20) < 1)) &&
       (plVar27 = *(long **)(lVar33 + 0x28), plVar27 != (long *)0x0)) {
      (**(code **)(*plVar27 + 0x1f8))(plVar27,1);
      (**(code **)(*plVar27 + 0x388))(plVar27,0,0);
      lVar28 = *plVar36 + 0x1b8;
      lVar23 = *(long *)(*plVar36 + 0x1b8);
    }
    lVar33 = lVar28;
    if (lVar23 != 0) {
      do {
        bVar5 = *(int *)(lVar23 + 0x20) < 0;
        if (!bVar5) {
          lVar33 = lVar23;
        }
        lVar23 = *(long *)(lVar23 + (ulong)bVar5 * 8);
      } while (lVar23 != 0);
      if (((lVar33 != lVar28) && (*(int *)(lVar33 + 0x20) < 1)) &&
         (plVar27 = *(long **)(lVar33 + 0x28), plVar27 != (long *)0x0)) {
        (**(code **)(*plVar27 + 0x208))(plVar27,1);
        (**(code **)(*plVar27 + 0x388))(plVar27,0,0);
      }
    }
  }
  FUN_71037717d0(plVar36,1,"set_parts_btn_close",ppppbVar21,pppplVar22,param_6,param_7,param_8);
  lVar23 = *plVar36;
  lVar28 = *(long *)(lVar23 + 0x1b8);
  if (lVar28 != 0) {
    lVar33 = lVar23 + 0x1b8;
    lVar31 = lVar33;
    lVar32 = lVar28;
    do {
      if (0 < *(int *)(lVar32 + 0x20)) {
        lVar31 = lVar32;
      }
      lVar32 = *(long *)(lVar32 + (ulong)(*(int *)(lVar32 + 0x20) < 1) * 8);
    } while (lVar32 != 0);
    if (((lVar31 != lVar33) && (*(int *)(lVar31 + 0x20) < 2)) &&
       (plVar27 = *(long **)(lVar31 + 0x28), plVar27 != (long *)0x0)) {
      (**(code **)(*plVar27 + 0x1f8))(plVar27,1);
      (**(code **)(*plVar27 + 0x388))(plVar27,0,0);
      lVar23 = *plVar36;
      lVar28 = *(long *)(lVar23 + 0x1b8);
      lVar33 = lVar23 + 0x1b8;
    }
    lVar31 = lVar33;
    if (lVar28 != 0) {
      do {
        if (0 < *(int *)(lVar28 + 0x20)) {
          lVar31 = lVar28;
        }
        lVar28 = *(long *)(lVar28 + (ulong)(*(int *)(lVar28 + 0x20) < 1) * 8);
      } while (lVar28 != 0);
      if (((lVar31 != lVar33) && (*(int *)(lVar31 + 0x20) < 2)) &&
         (plVar27 = *(long **)(lVar31 + 0x28), plVar27 != (long *)0x0)) {
        (**(code **)(*plVar27 + 0x208))(plVar27,1);
        (**(code **)(*plVar27 + 0x388))(plVar27,0,0);
        lVar23 = *plVar36;
      }
    }
  }
  FUN_7103771930(lVar23,0,(long ****)&DAT_00000008,(byte ****)0x0,pppplVar22,param_6,param_7,param_8
                );
  pppplVar18 = (long ****)&DAT_00000008;
  ppppbVar21 = (byte ****)0x0;
  FUN_7103771930(*plVar36,1,(long ****)&DAT_00000008,(byte ****)0x0,pppplVar22,param_6,param_7,
                 param_8);
  (**(code **)(*(long *)*plVar36 + 0x60))((long *)*plVar36,0);
  if (alStack_230 == local_210) {
    (**(code **)(*local_210 + 0x20))();
  }
  else if (local_210 != (long *)0x0) {
    (**(code **)(*local_210 + 0x28))();
  }
  if (alStack_260 == local_240) {
    pcVar26 = *(code **)(*local_240 + 0x20);
LAB_710199587c:
    (*pcVar26)();
  }
  else if (local_240 != (long *)0x0) {
    pcVar26 = *(code **)(*local_240 + 0x28);
    goto LAB_710199587c;
  }
  if (alStack_290 == local_270) {
    pcVar26 = *(code **)(*local_270 + 0x20);
LAB_71019958ac:
    (*pcVar26)();
  }
  else if (local_270 != (long *)0x0) {
    pcVar26 = *(code **)(*local_270 + 0x28);
    goto LAB_71019958ac;
  }
  if (alStack_2c0 == local_2a0) {
    pcVar26 = *(code **)(*local_2a0 + 0x20);
LAB_71019958dc:
    (*pcVar26)();
  }
  else if (local_2a0 != (long *)0x0) {
    pcVar26 = *(code **)(*local_2a0 + 0x28);
    goto LAB_71019958dc;
  }
  if (alStack_2f0 == local_2d0) {
    pcVar26 = *(code **)(*local_2d0 + 0x20);
LAB_710199590c:
    (*pcVar26)();
  }
  else if (local_2d0 != (long *)0x0) {
    pcVar26 = *(code **)(*local_2d0 + 0x28);
    goto LAB_710199590c;
  }
  FUN_7103776390(&local_330,pplVar1,pppplVar18,ppppbVar21,pppplVar22,param_6,param_7,param_8);
  pppplVar18 = (long ****)0x0;
  FUN_7103776640(&local_320,(long)&local_330,(byte ****)"set_parts_skill_%02d",0,ppppbVar21,
                 pppplVar22,param_6,param_7,param_8);
  FUN_71019b6ba0((long)(param_1 + 0xf),(long)&local_320,pppplVar18,ppppbVar21,pppplVar22,param_6,
                 param_7,param_8);
  uVar9 = (ulong)local_318;
  local_320 = &PTR_FUN_710523d988;
  local_318 = (undefined8 *)0x0;
  if (uVar9 != 0) {
    uVar12 = *(ulong *)(uVar9 + 0x18);
    *(undefined ***)(uVar9 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar9 + 0x18) = 0;
    if (uVar12 != 0) {
      FUN_710392eb40(uVar12);
    }
    FUN_710392eb40(uVar9);
  }
  uVar9 = local_328;
  local_330 = &PTR_FUN_710523d988;
  local_328 = 0;
  if (uVar9 != 0) {
    uVar12 = *(ulong *)(uVar9 + 0x18);
    *(undefined ***)(uVar9 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar9 + 0x18) = 0;
    if (uVar12 != 0) {
      FUN_710392eb40(uVar12);
    }
    FUN_710392eb40(uVar9);
  }
  FUN_7103776390(&local_330,pplVar1,pppplVar18,ppppbVar21,pppplVar22,param_6,param_7,param_8);
  pppplVar18 = (long ****)0x1;
  FUN_7103776640(&local_320,(long)&local_330,(byte ****)"set_parts_skill_%02d",1,ppppbVar21,
                 pppplVar22,param_6,param_7,param_8);
  FUN_71019b6ba0((long)(param_1 + 0x14),(long)&local_320,pppplVar18,ppppbVar21,pppplVar22,param_6,
                 param_7,param_8);
  uVar9 = (ulong)local_318;
  local_320 = &PTR_FUN_710523d988;
  local_318 = (undefined8 *)0x0;
  if (uVar9 != 0) {
    uVar12 = *(ulong *)(uVar9 + 0x18);
    *(undefined ***)(uVar9 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar9 + 0x18) = 0;
    if (uVar12 != 0) {
      FUN_710392eb40(uVar12);
    }
    FUN_710392eb40(uVar9);
  }
  uVar9 = local_328;
  local_330 = &PTR_FUN_710523d988;
  local_328 = 0;
  if (uVar9 != 0) {
    uVar12 = *(ulong *)(uVar9 + 0x18);
    *(undefined ***)(uVar9 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar9 + 0x18) = 0;
    if (uVar12 != 0) {
      FUN_710392eb40(uVar12);
    }
    FUN_710392eb40(uVar9);
  }
  FUN_7103776390(&local_330,pplVar1,pppplVar18,ppppbVar21,pppplVar22,param_6,param_7,param_8);
  ppuVar19 = (undefined **)0x2;
  FUN_7103776640(&local_320,(long)&local_330,(byte ****)"set_parts_skill_%02d",2,ppppbVar21,
                 pppplVar22,param_6,param_7,param_8);
  FUN_71019b6ba0((long)(param_1 + 0x19),(long)&local_320,ppuVar19,ppppbVar21,pppplVar22,param_6,
                 param_7,param_8);
  uVar9 = (ulong)local_318;
  local_320 = &PTR_FUN_710523d988;
  local_318 = (undefined8 *)0x0;
  if (uVar9 != 0) {
    uVar12 = *(ulong *)(uVar9 + 0x18);
    *(undefined ***)(uVar9 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar9 + 0x18) = 0;
    if (uVar12 != 0) {
      FUN_710392eb40(uVar12);
    }
    FUN_710392eb40(uVar9);
  }
  uVar9 = local_328;
  local_330 = &PTR_FUN_710523d988;
  local_328 = 0;
  if (uVar9 != 0) {
    uVar12 = *(ulong *)(uVar9 + 0x18);
    *(undefined ***)(uVar9 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar9 + 0x18) = 0;
    if (uVar12 != 0) {
      FUN_710392eb40(uVar12);
    }
    FUN_710392eb40(uVar9);
  }
  FUN_7103776390(&local_340,pplVar1,(long ****)ppuVar19,ppppbVar21,pppplVar22,param_6,param_7,
                 param_8);
  FUN_7103776640(&local_320,(long)&local_340,(byte ****)"set_parts_skill_alert",ppuVar19,ppppbVar21,
                 pppplVar22,param_6,param_7,param_8);
  FUN_71019b6ba0((long)(param_1 + 0x1e),(long)&local_320,ppuVar19,ppppbVar21,pppplVar22,param_6,
                 param_7,param_8);
  uVar9 = (ulong)local_318;
  local_320 = &PTR_FUN_710523d988;
  local_318 = (undefined8 *)0x0;
  if (uVar9 != 0) {
    uVar12 = *(ulong *)(uVar9 + 0x18);
    *(undefined ***)(uVar9 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar9 + 0x18) = 0;
    if (uVar12 != 0) {
      FUN_710392eb40(uVar12);
    }
    FUN_710392eb40(uVar9);
  }
  uVar9 = local_338;
  local_340 = &PTR_FUN_710523d988;
  local_338 = 0;
  if (uVar9 != 0) {
    uVar12 = *(ulong *)(uVar9 + 0x18);
    *(undefined ***)(uVar9 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar9 + 0x18) = 0;
    if (uVar12 != 0) {
      FUN_710392eb40(uVar12);
    }
    FUN_710392eb40(uVar9);
  }
  FUN_7103778300(0x3f800000,param_1[0x1f],0x71043ced64);
  FUN_7103776640(&local_320,(long)pplVar1,(byte ****)"set_parts_icon_condition",ppuVar19,ppppbVar21,
                 pppplVar22,param_6,param_7,param_8);
  uVar9 = (ulong)local_318;
  FUN_7103778300(0x3f800000,(long)local_318,0x71043cd335);
  local_320 = &PTR_FUN_710523d988;
  local_318 = (undefined8 *)0x0;
  if (uVar9 != 0) {
    uVar12 = *(ulong *)(uVar9 + 0x18);
    *(undefined ***)(uVar9 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar9 + 0x18) = 0;
    if (uVar12 != 0) {
      FUN_710392eb40(uVar12);
    }
    FUN_710392eb40(uVar9);
  }
  FUN_7103776910(&local_320,(long)pplVar1,(long ****)"set_fxui_raise",ppuVar19,ppppbVar21,pppplVar22
                 ,param_6,param_7,param_8);
  puVar8 = local_318;
  FUN_710377aa20((long *)*local_318,0);
  local_320 = &PTR_FUN_710523d9a8;
  local_318 = (undefined8 *)0x0;
  if (puVar8 != (undefined8 *)0x0) {
    FUN_710392eb40((ulong)puVar8);
  }
  if (((DAT_71053144d8 & 1) == 0) && (iVar7 = __cxa_guard_acquire(&DAT_71053144d8), iVar7 != 0)) {
    FUN_7101764000();
    ppuVar19 = &PTR_LOOP_7104f17000;
    FUN_71000001c0();
    __cxa_guard_release(&DAT_71053144d8);
  }
  piVar13 = FUN_71032df050(*(long *)(DAT_710532f7b0 + 8),DAT_7105307d50);
  if (*(char *)((long)piVar13 + 0x17) == '\0') {
    FUN_7103776910(&local_320,(long)pplVar1,(long ****)"set_rep_amiibo",ppuVar19,ppppbVar21,
                   pppplVar22,param_6,param_7,param_8);
    puVar34 = *(undefined1 **)(piVar13 + 2);
    lVar23 = *(long *)(*(long *)(DAT_710532f730 + 8) + 0x168);
    uVar6 = FUN_71032632a0(lVar23,(ulong)puVar34);
    puVar14 = puVar34;
    if ((uVar6 & 1) != 0) {
      puVar14 = FUN_71032631a0(lVar23,0x11b1ccb807);
    }
    uVar30 = FUN_71032633f0(lVar23,(ulong)puVar34);
    uVar6 = (uint)*(byte *)((long)piVar13 + 0x12);
    if (uVar30 <= *(byte *)((long)piVar13 + 0x12)) {
      uVar6 = 0;
    }
    ppppppppplVar20 = (long *********)(ulong)uVar6;
    ppppbVar21 = (byte ****)0x0;
    plVar27 = FUN_710323f330(param_2,(ulong)puVar14,(ulong)ppppppppplVar20,0,pppplVar22,param_6,
                             param_7,param_8);
    uVar9 = (ulong)local_318;
    FUN_7103778b80((long)local_318,(long)plVar27,ppppppppplVar20,ppppbVar21,pppplVar22,param_6,
                   param_7,param_8);
    local_320 = &PTR_FUN_710523d9a8;
    local_318 = (undefined8 *)0x0;
    if (uVar9 != 0) {
      FUN_710392eb40(uVar9);
    }
  }
  if (alStack_c0 == local_a0) {
    pcVar26 = *(code **)(*local_a0 + 0x20);
LAB_7101995cc8:
    (*pcVar26)();
  }
  else if (local_a0 != (long *)0x0) {
    pcVar26 = *(code **)(*local_a0 + 0x28);
    goto LAB_7101995cc8;
  }
  if (alStack_f0 == local_d0) {
    pcVar26 = *(code **)(*local_d0 + 0x20);
LAB_7101995cf8:
    (*pcVar26)();
  }
  else if (local_d0 != (long *)0x0) {
    pcVar26 = *(code **)(*local_d0 + 0x28);
    goto LAB_7101995cf8;
  }
  if (alStack_120 == local_100) {
    pcVar26 = *(code **)(*local_100 + 0x20);
LAB_7101995d28:
    (*pcVar26)();
  }
  else if (local_100 != (long *)0x0) {
    pcVar26 = *(code **)(*local_100 + 0x28);
    goto LAB_7101995d28;
  }
  if (alStack_150 == local_130) {
    pcVar26 = *(code **)(*local_130 + 0x20);
  }
  else {
    if (local_130 == (long *)0x0) goto LAB_7101995d5c;
    pcVar26 = *(code **)(*local_130 + 0x28);
  }
  (*pcVar26)();
LAB_7101995d5c:
  if (alStack_180 == local_160) {
    pcVar26 = *(code **)(*local_160 + 0x20);
  }
  else {
    if (local_160 == (long *)0x0) {
      return;
    }
    pcVar26 = *(code **)(*local_160 + 0x28);
  }
  (*pcVar26)();
  return;
}

