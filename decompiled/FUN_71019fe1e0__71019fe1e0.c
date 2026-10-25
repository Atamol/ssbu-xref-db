// addr:      71019fe1e0
// offset:    0x19fe1e0
// name:      FUN_71019fe1e0
// mangled:   
// signature: undefined __cdecl FUN_71019fe1e0(long param_1, undefined8 param_2, long * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_71019fe1e0(long param_1,undefined8 param_2,long ****param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long ****pppplVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  ulong uVar8;
  long ****pppplVar9;
  ulong uVar10;
  long *plVar11;
  long *plVar12;
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
  undefined8 uVar13;
  undefined8 extraout_x1_16;
  undefined8 extraout_x1_17;
  long ****pppplVar14;
  byte ****ppppbVar15;
  long ****pppplVar16;
  long ***ppplVar17;
  code *pcVar18;
  byte *pbVar19;
  long lVar20;
  long lVar21;
  uint uVar22;
  uint uVar23;
  long ***ppplVar24;
  long lVar25;
  long lVar26;
  long lVar27;
  long *plVar28;
  uint uVar29;
  undefined1 auVar30 [16];
  long ***local_220;
  long *local_218;
  undefined8 local_210;
  undefined8 local_208;
  undefined8 local_200;
  undefined1 *local_1f8;
  long *local_1f0;
  long alStack_1e0 [4];
  long *local_1c0;
  long alStack_1b0 [4];
  long *local_190;
  long alStack_180 [4];
  long *local_160;
  long alStack_150 [4];
  long *local_130;
  long alStack_120 [4];
  long *local_100;
  undefined4 local_f0;
  undefined **local_e0;
  ulong local_d8;
  undefined **local_d0;
  ulong local_c8;
  uint local_c0 [2];
  char acStack_b8 [72];
  
  pppplVar14 = param_3;
  ppppbVar15 = param_4;
  pppplVar16 = param_5;
  puVar6 = (undefined8 *)FUN_710392e290(0x10,0x270,param_3,param_4,param_5,param_6,param_7,param_8);
  uVar13 = extraout_x1;
  if (puVar6 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_c0[0] = 0;
      local_210 = (undefined **)0x270;
      pppplVar14 = (long ****)&local_210;
      auVar30 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,local_c0);
      uVar13 = auVar30._8_8_;
      if (((auVar30._0_8_ & 1) != 0) &&
         (puVar6 = (undefined8 *)
                   FUN_710392e290(0x10,0x270,pppplVar14,ppppbVar15,pppplVar16,param_6,param_7,
                                  param_8), uVar13 = extraout_x1_00, puVar6 != (undefined8 *)0x0))
      goto LAB_71019fe274;
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_71019fe274:
  *puVar6 = param_2;
  FUN_7103776290(puVar6 + 1,uVar13,pppplVar14,ppppbVar15,pppplVar16,param_6,param_7,param_8);
  puVar6[3] = &PTR_FUN_710523d9a8;
  puVar7 = (undefined8 *)
           FUN_710392e290(0x10,0x20,pppplVar14,ppppbVar15,pppplVar16,param_6,param_7,param_8);
  if (puVar7 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_c0[0] = 0;
      local_210 = (undefined **)&SUB_00000020;
      pppplVar14 = (long ****)&local_210;
      uVar8 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,local_c0);
      if (((uVar8 & 1) != 0) &&
         (puVar7 = (undefined8 *)
                   FUN_710392e290(0x10,0x20,pppplVar14,ppppbVar15,pppplVar16,param_6,param_7,param_8
                                 ), puVar7 != (undefined8 *)0x0)) goto LAB_71019fe2e0;
    }
    puVar7 = (undefined8 *)0x0;
  }
LAB_71019fe2e0:
  puVar7[2] = 0;
  puVar7[3] = 0;
  *puVar7 = 0;
  puVar7[1] = 0;
  puVar6[4] = puVar7;
  puVar6[5] = &PTR_FUN_710523d9a8;
  puVar7 = (undefined8 *)
           FUN_710392e290(0x10,0x20,pppplVar14,ppppbVar15,pppplVar16,param_6,param_7,param_8);
  uVar13 = extraout_x1_01;
  if (puVar7 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_c0[0] = 0;
      local_210 = (undefined **)&SUB_00000020;
      pppplVar14 = (long ****)&local_210;
      auVar30 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,local_c0);
      uVar13 = auVar30._8_8_;
      if (((auVar30._0_8_ & 1) != 0) &&
         (puVar7 = (undefined8 *)
                   FUN_710392e290(0x10,0x20,pppplVar14,ppppbVar15,pppplVar16,param_6,param_7,param_8
                                 ), uVar13 = extraout_x1_02, puVar7 != (undefined8 *)0x0))
      goto LAB_71019fe340;
    }
    puVar7 = (undefined8 *)0x0;
  }
LAB_71019fe340:
  puVar7[2] = 0;
  puVar7[3] = 0;
  *puVar7 = 0;
  puVar7[1] = 0;
  puVar6[6] = puVar7;
  FUN_7103776290(puVar6 + 7,uVar13,pppplVar14,ppppbVar15,pppplVar16,param_6,param_7,param_8);
  puVar6[9] = &PTR_FUN_710523d9a8;
  puVar7 = (undefined8 *)
           FUN_710392e290(0x10,0x20,pppplVar14,ppppbVar15,pppplVar16,param_6,param_7,param_8);
  uVar13 = extraout_x1_03;
  if (puVar7 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_c0[0] = 0;
      local_210 = (undefined **)&SUB_00000020;
      pppplVar14 = (long ****)&local_210;
      auVar30 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,local_c0);
      uVar13 = auVar30._8_8_;
      if (((auVar30._0_8_ & 1) != 0) &&
         (puVar7 = (undefined8 *)
                   FUN_710392e290(0x10,0x20,pppplVar14,ppppbVar15,pppplVar16,param_6,param_7,param_8
                                 ), uVar13 = extraout_x1_04, puVar7 != (undefined8 *)0x0))
      goto LAB_71019fe3b0;
    }
    puVar7 = (undefined8 *)0x0;
  }
LAB_71019fe3b0:
  puVar7[2] = 0;
  puVar7[3] = 0;
  *puVar7 = 0;
  puVar7[1] = 0;
  puVar6[10] = puVar7;
  FUN_7103776290(puVar6 + 0xb,uVar13,pppplVar14,ppppbVar15,pppplVar16,param_6,param_7,param_8);
  FUN_7103776290(puVar6 + 0xd,extraout_x1_05,pppplVar14,ppppbVar15,pppplVar16,param_6,param_7,
                 param_8);
  puVar6[0xf] = &PTR_FUN_710523d9a8;
  puVar7 = (undefined8 *)
           FUN_710392e290(0x10,0x20,pppplVar14,ppppbVar15,pppplVar16,param_6,param_7,param_8);
  if (puVar7 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_c0[0] = 0;
      local_210 = (undefined **)&SUB_00000020;
      pppplVar14 = (long ****)&local_210;
      uVar8 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,local_c0);
      if (((uVar8 & 1) != 0) &&
         (puVar7 = (undefined8 *)
                   FUN_710392e290(0x10,0x20,pppplVar14,ppppbVar15,pppplVar16,param_6,param_7,param_8
                                 ), puVar7 != (undefined8 *)0x0)) goto LAB_71019fe428;
    }
    puVar7 = (undefined8 *)0x0;
  }
LAB_71019fe428:
  puVar7[2] = 0;
  puVar7[3] = 0;
  *puVar7 = 0;
  puVar7[1] = 0;
  puVar6[0x10] = puVar7;
  puVar6[0x11] = &PTR_FUN_710523d9a8;
  puVar7 = (undefined8 *)
           FUN_710392e290(0x10,0x20,pppplVar14,ppppbVar15,pppplVar16,param_6,param_7,param_8);
  if (puVar7 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_c0[0] = 0;
      local_210 = (undefined **)&SUB_00000020;
      pppplVar14 = (long ****)&local_210;
      uVar8 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,local_c0);
      if (((uVar8 & 1) != 0) &&
         (puVar7 = (undefined8 *)
                   FUN_710392e290(0x10,0x20,pppplVar14,ppppbVar15,pppplVar16,param_6,param_7,param_8
                                 ), puVar7 != (undefined8 *)0x0)) goto LAB_71019fe488;
    }
    puVar7 = (undefined8 *)0x0;
  }
LAB_71019fe488:
  puVar7[2] = 0;
  puVar7[3] = 0;
  *puVar7 = 0;
  puVar7[1] = 0;
  puVar6[0x12] = puVar7;
  puVar6[0x13] = &PTR_FUN_710523d9a8;
  puVar7 = (undefined8 *)
           FUN_710392e290(0x10,0x20,pppplVar14,ppppbVar15,pppplVar16,param_6,param_7,param_8);
  uVar13 = extraout_x1_06;
  if (puVar7 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_c0[0] = 0;
      local_210 = (undefined **)&SUB_00000020;
      pppplVar14 = (long ****)&local_210;
      auVar30 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,local_c0);
      uVar13 = auVar30._8_8_;
      if (((auVar30._0_8_ & 1) != 0) &&
         (puVar7 = (undefined8 *)
                   FUN_710392e290(0x10,0x20,pppplVar14,ppppbVar15,pppplVar16,param_6,param_7,param_8
                                 ), uVar13 = extraout_x1_07, puVar7 != (undefined8 *)0x0))
      goto LAB_71019fe4e8;
    }
    puVar7 = (undefined8 *)0x0;
  }
LAB_71019fe4e8:
  puVar7[2] = 0;
  puVar7[3] = 0;
  *puVar7 = 0;
  puVar7[1] = 0;
  puVar6[0x14] = puVar7;
  FUN_7103776290(puVar6 + 0x15,uVar13,pppplVar14,ppppbVar15,pppplVar16,param_6,param_7,param_8);
  puVar6[0x17] = &PTR_FUN_710523d9a8;
  puVar7 = (undefined8 *)
           FUN_710392e290(0x10,0x20,pppplVar14,ppppbVar15,pppplVar16,param_6,param_7,param_8);
  if (puVar7 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_c0[0] = 0;
      local_210 = (undefined **)&SUB_00000020;
      pppplVar14 = (long ****)&local_210;
      uVar8 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,local_c0);
      if (((uVar8 & 1) != 0) &&
         (puVar7 = (undefined8 *)
                   FUN_710392e290(0x10,0x20,pppplVar14,ppppbVar15,pppplVar16,param_6,param_7,param_8
                                 ), puVar7 != (undefined8 *)0x0)) goto LAB_71019fe558;
    }
    puVar7 = (undefined8 *)0x0;
  }
LAB_71019fe558:
  puVar7[2] = 0;
  puVar7[3] = 0;
  *puVar7 = 0;
  puVar7[1] = 0;
  puVar6[0x18] = puVar7;
  puVar6[0x19] = &PTR_FUN_710523d9a8;
  puVar7 = (undefined8 *)
           FUN_710392e290(0x10,0x20,pppplVar14,ppppbVar15,pppplVar16,param_6,param_7,param_8);
  uVar13 = extraout_x1_08;
  if (puVar7 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_c0[0] = 0;
      local_210 = (undefined **)&SUB_00000020;
      pppplVar14 = (long ****)&local_210;
      auVar30 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,local_c0);
      uVar13 = auVar30._8_8_;
      if (((auVar30._0_8_ & 1) != 0) &&
         (puVar7 = (undefined8 *)
                   FUN_710392e290(0x10,0x20,pppplVar14,ppppbVar15,pppplVar16,param_6,param_7,param_8
                                 ), uVar13 = extraout_x1_09, puVar7 != (undefined8 *)0x0))
      goto LAB_71019fe5b8;
    }
    puVar7 = (undefined8 *)0x0;
  }
LAB_71019fe5b8:
  puVar7[2] = 0;
  puVar7[3] = 0;
  *puVar7 = 0;
  puVar7[1] = 0;
  puVar6[0x1a] = puVar7;
  FUN_7103776290(puVar6 + 0x1b,uVar13,pppplVar14,ppppbVar15,pppplVar16,param_6,param_7,param_8);
  FUN_7103776290(puVar6 + 0x1d,extraout_x1_10,pppplVar14,ppppbVar15,pppplVar16,param_6,param_7,
                 param_8);
  FUN_7103776290(puVar6 + 0x1f,extraout_x1_11,pppplVar14,ppppbVar15,pppplVar16,param_6,param_7,
                 param_8);
  FUN_7103776290(puVar6 + 0x21,extraout_x1_12,pppplVar14,ppppbVar15,pppplVar16,param_6,param_7,
                 param_8);
  FUN_7103776290(puVar6 + 0x23,extraout_x1_13,pppplVar14,ppppbVar15,pppplVar16,param_6,param_7,
                 param_8);
  puVar6[0x25] = &PTR_FUN_710523d9e8;
  puVar7 = (undefined8 *)
           FUN_710392e290(0x10,0x18,pppplVar14,ppppbVar15,pppplVar16,param_6,param_7,param_8);
  uVar13 = extraout_x1_14;
  if (puVar7 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_c0[0] = 0;
      local_210 = (undefined **)&SUB_00000018;
      pppplVar14 = (long ****)&local_210;
      auVar30 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,local_c0);
      uVar13 = auVar30._8_8_;
      if (((auVar30._0_8_ & 1) != 0) &&
         (puVar7 = (undefined8 *)
                   FUN_710392e290(0x10,0x18,pppplVar14,ppppbVar15,pppplVar16,param_6,param_7,param_8
                                 ), uVar13 = extraout_x1_15, puVar7 != (undefined8 *)0x0))
      goto LAB_71019fe650;
    }
    puVar7 = (undefined8 *)0x0;
  }
LAB_71019fe650:
  *puVar7 = 0;
  puVar7[1] = 0;
  *(undefined1 *)(puVar7 + 2) = 1;
  puVar6[0x26] = puVar7;
  *(undefined4 *)(puVar6 + 0x27) = 0;
  FUN_7103776290(puVar6 + 0x28,uVar13,pppplVar14,ppppbVar15,pppplVar16,param_6,param_7,param_8);
  FUN_7103776290(puVar6 + 0x2a,extraout_x1_16,pppplVar14,ppppbVar15,pppplVar16,param_6,param_7,
                 param_8);
  FUN_7103776290(puVar6 + 0x2c,extraout_x1_17,pppplVar14,ppppbVar15,pppplVar16,param_6,param_7,
                 param_8);
  puVar6[0x2e] = &PTR_FUN_710523d9e8;
  puVar7 = (undefined8 *)
           FUN_710392e290(0x10,0x18,pppplVar14,ppppbVar15,pppplVar16,param_6,param_7,param_8);
  if (puVar7 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_c0[0] = 0;
      local_210 = (undefined **)&SUB_00000018;
      pppplVar14 = (long ****)&local_210;
      uVar8 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,local_c0);
      if (((uVar8 & 1) != 0) &&
         (puVar7 = (undefined8 *)
                   FUN_710392e290(0x10,0x18,pppplVar14,ppppbVar15,pppplVar16,param_6,param_7,param_8
                                 ), puVar7 != (undefined8 *)0x0)) goto LAB_71019fe6d4;
    }
    puVar7 = (undefined8 *)0x0;
  }
LAB_71019fe6d4:
  *puVar7 = 0;
  puVar7[1] = 0;
  *(undefined1 *)(puVar7 + 2) = 1;
  puVar6[0x2f] = puVar7;
  puVar6[0x30] = &PTR_FUN_710523d9e8;
  puVar7 = (undefined8 *)
           FUN_710392e290(0x10,0x18,pppplVar14,ppppbVar15,pppplVar16,param_6,param_7,param_8);
  if (puVar7 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_c0[0] = 0;
      local_210 = (undefined **)&SUB_00000018;
      pppplVar14 = (long ****)&local_210;
      uVar8 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,local_c0);
      if (((uVar8 & 1) != 0) &&
         (puVar7 = (undefined8 *)
                   FUN_710392e290(0x10,0x18,pppplVar14,ppppbVar15,pppplVar16,param_6,param_7,param_8
                                 ), puVar7 != (undefined8 *)0x0)) goto LAB_71019fe734;
    }
    puVar7 = (undefined8 *)0x0;
  }
LAB_71019fe734:
  *puVar7 = 0;
  puVar7[1] = 0;
  *(undefined1 *)(puVar7 + 2) = 1;
  puVar6[0x31] = puVar7;
  puVar6[0x32] = &PTR_FUN_710523d9e8;
  puVar7 = (undefined8 *)
           FUN_710392e290(0x10,0x18,pppplVar14,ppppbVar15,pppplVar16,param_6,param_7,param_8);
  if (puVar7 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_c0[0] = 0;
      local_210 = (undefined **)&SUB_00000018;
      pppplVar14 = (long ****)&local_210;
      uVar8 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,local_c0);
      if (((uVar8 & 1) != 0) &&
         (puVar7 = (undefined8 *)
                   FUN_710392e290(0x10,0x18,pppplVar14,ppppbVar15,pppplVar16,param_6,param_7,param_8
                                 ), puVar7 != (undefined8 *)0x0)) goto LAB_71019fe798;
    }
    puVar7 = (undefined8 *)0x0;
  }
LAB_71019fe798:
  *puVar7 = 0;
  puVar7[1] = 0;
  *(undefined1 *)(puVar7 + 2) = 1;
  puVar6[0x33] = puVar7;
  puVar6[0x34] = &PTR_FUN_710523d9e8;
  puVar7 = (undefined8 *)
           FUN_710392e290(0x10,0x18,pppplVar14,ppppbVar15,pppplVar16,param_6,param_7,param_8);
  if (puVar7 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_c0[0] = 0;
      local_210 = (undefined **)&SUB_00000018;
      pppplVar14 = (long ****)&local_210;
      uVar8 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,local_c0);
      if (((uVar8 & 1) != 0) &&
         (puVar7 = (undefined8 *)
                   FUN_710392e290(0x10,0x18,pppplVar14,ppppbVar15,pppplVar16,param_6,param_7,param_8
                                 ), puVar7 != (undefined8 *)0x0)) goto LAB_71019fe7f8;
    }
    puVar7 = (undefined8 *)0x0;
  }
LAB_71019fe7f8:
  *puVar7 = 0;
  puVar7[1] = 0;
  *(undefined1 *)(puVar7 + 2) = 1;
  puVar6[0x35] = puVar7;
  puVar6[0x36] = &PTR_FUN_710523d9e8;
  puVar7 = (undefined8 *)
           FUN_710392e290(0x10,0x18,pppplVar14,ppppbVar15,pppplVar16,param_6,param_7,param_8);
  if (puVar7 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_c0[0] = 0;
      local_210 = (undefined **)&SUB_00000018;
      pppplVar14 = (long ****)&local_210;
      uVar8 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,local_c0);
      if (((uVar8 & 1) != 0) &&
         (puVar7 = (undefined8 *)
                   FUN_710392e290(0x10,0x18,pppplVar14,ppppbVar15,pppplVar16,param_6,param_7,param_8
                                 ), puVar7 != (undefined8 *)0x0)) goto LAB_71019fe85c;
    }
    puVar7 = (undefined8 *)0x0;
  }
LAB_71019fe85c:
  *(undefined1 *)(puVar7 + 2) = 1;
  *puVar7 = 0;
  puVar7[1] = 0;
  puVar6[0x43] = 0x300000000;
  *(undefined4 *)(puVar6 + 0x44) = 0xffffffff;
  puVar6[0x47] = 0xffffffff;
  puVar6[0x40] = 0;
  puVar6[0x42] = 0;
  puVar6[0x45] = &DAT_c1ffff0000000000;
  puVar6[0x46] = &DAT_c1ffff0000000000;
  puVar6[0x48] = 0;
  *(undefined2 *)(puVar6 + 0x4b) = 0;
  puVar6[0x4a] = 0;
  *(undefined1 *)((long)puVar6 + 0x25a) = 1;
  *(undefined1 *)((long)puVar6 + 0x25f) = 0;
  puVar6[0x39] = 0;
  puVar6[0x3a] = 0xffffffff;
  puVar6[0x49] = 0xffff0000ffffffff;
  puVar6[0x37] = puVar7;
  puVar6[0x38] = 0;
  *(undefined4 *)((long)puVar6 + 0x25b) = 0;
  *(undefined1 *)(puVar6 + 0x4c) = 1;
  *(undefined1 *)((long)puVar6 + 0x269) = 0;
  *(undefined8 *)((long)puVar6 + 0x261) = 0;
  *(undefined1 *)((long)puVar6 + 0x26a) = 1;
  uVar8 = *(ulong *)(param_1 + 8);
  *(undefined8 **)(param_1 + 8) = puVar6;
  if (uVar8 != 0) {
    FUN_71019fbbd0(uVar8);
    FUN_710392eb40(uVar8);
    puVar6 = *(undefined8 **)(param_1 + 8);
  }
  pppplVar1 = (long ****)(puVar6 + 1);
  if (pppplVar1 != param_3) {
    *(long ***)puVar6[2] = *param_3[1];
    *(long ***)(puVar6[2] + 8) = param_3[1][1];
    ppplVar24 = param_3[1];
    ppplVar17 = (long ***)puVar6[2];
    if (ppplVar17 != ppplVar24) {
      *ppplVar17[3] = *ppplVar24[3];
      ppplVar17[3][1] = ppplVar24[3][1];
      ppplVar17[3][2] = ppplVar24[3][2];
      ppplVar17[3][3] = ppplVar24[3][3];
    }
  }
  *(undefined4 *)(puVar6 + 0x39) = *(undefined4 *)param_4;
  *(undefined4 *)((long)puVar6 + 0x1cc) = *(undefined4 *)((long)param_4 + 4);
  *(undefined4 *)((long)puVar6 + 0x1d4) = *(undefined4 *)(param_4 + 1);
  pppplVar9 = (long ****)param_5[4];
  if (pppplVar9 == (long ****)0x0) {
    local_1f0 = (long *)0x0;
  }
  else if (param_5 == pppplVar9) {
    local_1f0 = &local_210;
    (*(code *)(*pppplVar9)[3])(pppplVar9,&local_210);
  }
  else {
    local_1f0 = (long *)(*(code *)(*pppplVar9)[2])();
  }
  FUN_71019fbf50(&local_210,puVar6 + 0x3c);
  if (&local_210 == local_1f0) {
    pcVar18 = *(code **)(*local_1f0 + 0x20);
LAB_71019fea00:
    (*pcVar18)();
  }
  else if (local_1f0 != (long *)0x0) {
    pcVar18 = *(code **)(*local_1f0 + 0x28);
    goto LAB_71019fea00;
  }
  *(undefined1 *)(puVar6 + 0x4b) = *(undefined1 *)((long)param_4 + 0xc);
  *(undefined1 *)((long)puVar6 + 0x259) = *(undefined1 *)((long)param_4 + 0xd);
  *(undefined1 *)((long)puVar6 + 0x25a) = *(undefined1 *)((long)param_4 + 0xe);
  *(undefined1 *)((long)puVar6 + 0x25b) = *(undefined1 *)((long)param_4 + 0xf);
  *(undefined1 *)((long)puVar6 + 0x25c) = *(undefined1 *)(param_4 + 2);
  *(undefined1 *)((long)puVar6 + 0x25d) = *(undefined1 *)((long)param_4 + 0x11);
  *(undefined1 *)((long)puVar6 + 0x25e) = *(undefined1 *)((long)param_4 + 0x12);
  *(undefined1 *)((long)puVar6 + 0x25f) = *(undefined1 *)((long)param_4 + 0x13);
  *(undefined1 *)((long)puVar6 + 0x264) = *(undefined1 *)((long)param_4 + 0x14);
  *(undefined1 *)((long)puVar6 + 0x269) = *(undefined1 *)((long)param_4 + 0x16);
  uVar29 = 0x811c9dc5;
  *(undefined1 *)((long)puVar6 + 0x26a) = *(undefined1 *)((long)param_4 + 0x17);
  local_210 = (undefined **)0x1000000000;
  local_208 = 0x635f726579616c70;
  uVar22 = 0x70;
  local_200 = 0x66666f5f726f6c6f;
  local_1f8 = (undefined1 *)((ulong)local_1f8 & 0xffffffffffffff00);
  pbVar19 = (byte *)((long)&local_208 + 1);
  uVar23 = uVar29;
  do {
    uVar23 = uVar23 * 0x89 ^ uVar22;
    uVar22 = (uint)*pbVar19;
    pbVar19 = pbVar19 + 1;
  } while (uVar22 != 0);
  local_210 = (undefined **)CONCAT44(0x10,uVar23);
  FUN_7103778300(0x3f800000,puVar6[2],(long)&local_208);
  FUN_7103778300(0x3f800000,puVar6[2],0x710439cdb9);
  FUN_7103778300(0x3f800000,puVar6[2],0x71043be0ff);
  FUN_7103778300(0x3f800000,puVar6[2],0x71043f0423);
  FUN_7103778300(0x3f800000,puVar6[2],0x71042f7c22);
  FUN_7103778300(0x3f800000,puVar6[2],0x7104421cea);
  FUN_7103778300(0x3f800000,puVar6[2],0x71043ad13e);
  FUN_7103776910(&local_210,(long)pppplVar1,(long ****)"set_window",pppplVar14,ppppbVar15,pppplVar16
                 ,param_6,param_7,param_8);
  uVar8 = local_208;
  if (puVar6 + 3 != &local_210) {
    local_208 = 0;
    uVar10 = puVar6[4];
    puVar6[4] = uVar8;
    if (uVar10 != 0) {
      FUN_710392eb40(uVar10);
    }
  }
  uVar8 = local_208;
  local_210 = &PTR_FUN_710523d9a8;
  local_208 = 0;
  if (uVar8 != 0) {
    FUN_710392eb40(uVar8);
  }
  FUN_7103776910(&local_210,(long)pppplVar1,(long ****)"set_cursor",pppplVar14,ppppbVar15,pppplVar16
                 ,param_6,param_7,param_8);
  uVar8 = local_208;
  if (puVar6 + 5 != &local_210) {
    local_208 = 0;
    uVar10 = puVar6[6];
    puVar6[6] = uVar8;
    if (uVar10 != 0) {
      FUN_710392eb40(uVar10);
    }
  }
  uVar8 = local_208;
  local_210 = &PTR_FUN_710523d9a8;
  local_208 = 0;
  if (uVar8 != 0) {
    FUN_710392eb40(uVar8);
  }
  FUN_7103776640(&local_210,(long)pppplVar1,(byte ****)"set_btn_panel",pppplVar14,ppppbVar15,
                 pppplVar16,param_6,param_7,param_8);
  uVar8 = local_208;
  puVar7 = puVar6 + 7;
  if (puVar7 != &local_210) {
    local_208 = 0;
    uVar10 = puVar6[8];
    puVar6[8] = uVar8;
    if (uVar10 != 0) {
      uVar8 = *(ulong *)(uVar10 + 0x18);
      *(undefined ***)(uVar10 + 0x10) = &PTR_FUN_710523d9a8;
      *(undefined8 *)(uVar10 + 0x18) = 0;
      if (uVar8 != 0) {
        FUN_710392eb40(uVar8);
      }
      FUN_710392eb40(uVar10);
    }
  }
  uVar8 = local_208;
  local_210 = &PTR_FUN_710523d988;
  local_208 = 0;
  if (uVar8 != 0) {
    uVar10 = *(ulong *)(uVar8 + 0x18);
    *(undefined ***)(uVar8 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar8 + 0x18) = 0;
    if (uVar10 != 0) {
      FUN_710392eb40(uVar10);
    }
    FUN_710392eb40(uVar8);
  }
  FUN_7103776640(&local_210,(long)pppplVar1,(byte ****)"set_btn_flag_team",pppplVar14,ppppbVar15,
                 pppplVar16,param_6,param_7,param_8);
  uVar8 = local_208;
  if (puVar6 + 0xb != &local_210) {
    local_208 = 0;
    uVar10 = puVar6[0xc];
    puVar6[0xc] = uVar8;
    if (uVar10 != 0) {
      uVar8 = *(ulong *)(uVar10 + 0x18);
      *(undefined ***)(uVar10 + 0x10) = &PTR_FUN_710523d9a8;
      *(undefined8 *)(uVar10 + 0x18) = 0;
      if (uVar8 != 0) {
        FUN_710392eb40(uVar8);
      }
      FUN_710392eb40(uVar10);
    }
  }
  uVar8 = local_208;
  local_210 = &PTR_FUN_710523d988;
  local_208 = 0;
  if (uVar8 != 0) {
    uVar10 = *(ulong *)(uVar8 + 0x18);
    *(undefined ***)(uVar8 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar8 + 0x18) = 0;
    if (uVar10 != 0) {
      FUN_710392eb40(uVar10);
    }
    FUN_710392eb40(uVar8);
  }
  FUN_7103776640(&local_210,(long)pppplVar1,(byte ****)"set_btn_name",pppplVar14,ppppbVar15,
                 pppplVar16,param_6,param_7,param_8);
  uVar8 = local_208;
  puVar2 = puVar6 + 0xd;
  if (puVar2 != &local_210) {
    local_208 = 0;
    uVar10 = puVar6[0xe];
    puVar6[0xe] = uVar8;
    if (uVar10 != 0) {
      uVar8 = *(ulong *)(uVar10 + 0x18);
      *(undefined ***)(uVar10 + 0x10) = &PTR_FUN_710523d9a8;
      *(undefined8 *)(uVar10 + 0x18) = 0;
      if (uVar8 != 0) {
        FUN_710392eb40(uVar8);
      }
      FUN_710392eb40(uVar10);
    }
  }
  uVar8 = local_208;
  local_210 = &PTR_FUN_710523d988;
  local_208 = 0;
  if (uVar8 != 0) {
    uVar10 = *(ulong *)(uVar8 + 0x18);
    *(undefined ***)(uVar8 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar8 + 0x18) = 0;
    if (uVar10 != 0) {
      FUN_710392eb40(uVar10);
    }
    FUN_710392eb40(uVar8);
  }
  FUN_7103776640(&local_210,(long)pppplVar1,(byte ****)"set_btn_hd",pppplVar14,ppppbVar15,pppplVar16
                 ,param_6,param_7,param_8);
  uVar8 = local_208;
  puVar3 = puVar6 + 0x15;
  if (puVar3 != &local_210) {
    local_208 = 0;
    uVar10 = puVar6[0x16];
    puVar6[0x16] = uVar8;
    if (uVar10 != 0) {
      uVar8 = *(ulong *)(uVar10 + 0x18);
      *(undefined ***)(uVar10 + 0x10) = &PTR_FUN_710523d9a8;
      *(undefined8 *)(uVar10 + 0x18) = 0;
      if (uVar8 != 0) {
        FUN_710392eb40(uVar8);
      }
      FUN_710392eb40(uVar10);
    }
  }
  uVar8 = local_208;
  local_210 = &PTR_FUN_710523d988;
  local_208 = 0;
  if (uVar8 != 0) {
    uVar10 = *(ulong *)(uVar8 + 0x18);
    *(undefined ***)(uVar8 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar8 + 0x18) = 0;
    if (uVar10 != 0) {
      FUN_710392eb40(uVar10);
    }
    FUN_710392eb40(uVar8);
  }
  FUN_7103776640(&local_210,(long)pppplVar1,(byte ****)"set_btn_sp",pppplVar14,ppppbVar15,pppplVar16
                 ,param_6,param_7,param_8);
  uVar8 = local_208;
  if (puVar6 + 0x1b != &local_210) {
    local_208 = 0;
    uVar10 = puVar6[0x1c];
    puVar6[0x1c] = uVar8;
    if (uVar10 != 0) {
      uVar8 = *(ulong *)(uVar10 + 0x18);
      *(undefined ***)(uVar10 + 0x10) = &PTR_FUN_710523d9a8;
      *(undefined8 *)(uVar10 + 0x18) = 0;
      if (uVar8 != 0) {
        FUN_710392eb40(uVar8);
      }
      FUN_710392eb40(uVar10);
    }
  }
  uVar8 = local_208;
  local_210 = &PTR_FUN_710523d988;
  local_208 = 0;
  if (uVar8 != 0) {
    uVar10 = *(ulong *)(uVar8 + 0x18);
    *(undefined ***)(uVar8 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar8 + 0x18) = 0;
    if (uVar10 != 0) {
      FUN_710392eb40(uVar10);
    }
    FUN_710392eb40(uVar8);
  }
  FUN_7103776640(&local_210,(long)pppplVar1,(byte ****)"set_part_chara_pk",pppplVar14,ppppbVar15,
                 pppplVar16,param_6,param_7,param_8);
  uVar8 = local_208;
  if (puVar6 + 0x1d != &local_210) {
    local_208 = 0;
    uVar10 = puVar6[0x1e];
    puVar6[0x1e] = uVar8;
    if (uVar10 != 0) {
      uVar8 = *(ulong *)(uVar10 + 0x18);
      *(undefined ***)(uVar10 + 0x10) = &PTR_FUN_710523d9a8;
      *(undefined8 *)(uVar10 + 0x18) = 0;
      if (uVar8 != 0) {
        FUN_710392eb40(uVar8);
      }
      FUN_710392eb40(uVar10);
    }
  }
  uVar8 = local_208;
  local_210 = &PTR_FUN_710523d988;
  local_208 = 0;
  if (uVar8 != 0) {
    uVar10 = *(ulong *)(uVar8 + 0x18);
    *(undefined ***)(uVar8 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar8 + 0x18) = 0;
    if (uVar10 != 0) {
      FUN_710392eb40(uVar10);
    }
    FUN_710392eb40(uVar8);
  }
  FUN_7103776640(&local_210,(long)pppplVar1,(byte ****)"set_part_chara_element",pppplVar14,
                 ppppbVar15,pppplVar16,param_6,param_7,param_8);
  uVar8 = local_208;
  if (puVar6 + 0x1f != &local_210) {
    local_208 = 0;
    uVar10 = puVar6[0x20];
    puVar6[0x20] = uVar8;
    if (uVar10 != 0) {
      uVar8 = *(ulong *)(uVar10 + 0x18);
      *(undefined ***)(uVar10 + 0x10) = &PTR_FUN_710523d9a8;
      *(undefined8 *)(uVar10 + 0x18) = 0;
      if (uVar8 != 0) {
        FUN_710392eb40(uVar8);
      }
      FUN_710392eb40(uVar10);
    }
  }
  uVar8 = local_208;
  local_210 = &PTR_FUN_710523d988;
  local_208 = 0;
  if (uVar8 != 0) {
    uVar10 = *(ulong *)(uVar8 + 0x18);
    *(undefined ***)(uVar8 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar8 + 0x18) = 0;
    if (uVar10 != 0) {
      FUN_710392eb40(uVar10);
    }
    FUN_710392eb40(uVar8);
  }
  FUN_7103776640(&local_210,(long)pppplVar1,(byte ****)"set_parts_controller_res",pppplVar14,
                 ppppbVar15,pppplVar16,param_6,param_7,param_8);
  uVar8 = local_208;
  if (puVar6 + 0x21 != &local_210) {
    local_208 = 0;
    uVar10 = puVar6[0x22];
    puVar6[0x22] = uVar8;
    if (uVar10 != 0) {
      uVar8 = *(ulong *)(uVar10 + 0x18);
      *(undefined ***)(uVar10 + 0x10) = &PTR_FUN_710523d9a8;
      *(undefined8 *)(uVar10 + 0x18) = 0;
      if (uVar8 != 0) {
        FUN_710392eb40(uVar8);
      }
      FUN_710392eb40(uVar10);
    }
  }
  uVar8 = local_208;
  local_210 = &PTR_FUN_710523d988;
  local_208 = 0;
  if (uVar8 != 0) {
    uVar10 = *(ulong *)(uVar8 + 0x18);
    *(undefined ***)(uVar8 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar8 + 0x18) = 0;
    if (uVar10 != 0) {
      FUN_710392eb40(uVar10);
    }
    FUN_710392eb40(uVar8);
  }
  FUN_7103776640(&local_210,(long)pppplVar1,(byte ****)"set_lct_controller_entry",pppplVar14,
                 ppppbVar15,pppplVar16,param_6,param_7,param_8);
  uVar8 = local_208;
  puVar4 = puVar6 + 0x23;
  if (puVar4 != &local_210) {
    local_208 = 0;
    uVar10 = puVar6[0x24];
    puVar6[0x24] = uVar8;
    if (uVar10 != 0) {
      uVar8 = *(ulong *)(uVar10 + 0x18);
      *(undefined ***)(uVar10 + 0x10) = &PTR_FUN_710523d9a8;
      *(undefined8 *)(uVar10 + 0x18) = 0;
      if (uVar8 != 0) {
        FUN_710392eb40(uVar8);
      }
      FUN_710392eb40(uVar10);
    }
  }
  uVar8 = local_208;
  local_210 = &PTR_FUN_710523d988;
  local_208 = 0;
  if (uVar8 != 0) {
    uVar10 = *(ulong *)(uVar8 + 0x18);
    *(undefined ***)(uVar8 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar8 + 0x18) = 0;
    if (uVar10 != 0) {
      FUN_710392eb40(uVar10);
    }
    FUN_710392eb40(uVar8);
  }
  local_210 = (undefined **)0x1000000000;
  local_208 = 0x635f726579616c70;
  local_200 = 0x66666f5f726f6c6f;
  uVar23 = 0x70;
  local_1f8 = (undefined1 *)((ulong)local_1f8 & 0xffffffffffffff00);
  pbVar19 = (byte *)((long)&local_208 + 1);
  do {
    uVar29 = uVar29 * 0x89 ^ uVar23;
    uVar23 = (uint)*pbVar19;
    pbVar19 = pbVar19 + 1;
  } while (uVar23 != 0);
  local_210 = (undefined **)CONCAT44(0x10,uVar29);
  FUN_7103778300(0x3f800000,puVar6[8],(long)&local_208);
  FUN_7103778300(0x3f800000,puVar6[8],0x7104349d11);
  lVar20 = **(long **)(puVar6[0xc] + 0x18);
  if (lVar20 != 0) {
    *(byte *)(lVar20 + 0x58) = *(byte *)(lVar20 + 0x58) & 0xfe;
  }
  FUN_7103776910(&local_210,(long)puVar7,(long ****)"set_txt_00",pppplVar14,ppppbVar15,pppplVar16,
                 param_6,param_7,param_8);
  uVar8 = local_208;
  if (puVar6 + 9 != &local_210) {
    local_208 = 0;
    uVar10 = puVar6[10];
    puVar6[10] = uVar8;
    if (uVar10 != 0) {
      FUN_710392eb40(uVar10);
    }
  }
  uVar8 = local_208;
  local_210 = &PTR_FUN_710523d9a8;
  local_208 = 0;
  if (uVar8 != 0) {
    FUN_710392eb40(uVar8);
  }
  FUN_7103776910(&local_210,(long)puVar7,(long ****)"set_txt_fp_level",pppplVar14,ppppbVar15,
                 pppplVar16,param_6,param_7,param_8);
  uVar8 = local_208;
  if (puVar6 + 0x13 != &local_210) {
    local_208 = 0;
    uVar10 = puVar6[0x14];
    puVar6[0x14] = uVar8;
    if (uVar10 != 0) {
      FUN_710392eb40(uVar10);
    }
  }
  uVar8 = local_208;
  local_210 = &PTR_FUN_710523d9a8;
  local_208 = 0;
  if (uVar8 != 0) {
    FUN_710392eb40(uVar8);
  }
  FUN_7103776910(&local_210,(long)puVar2,(long ****)"set_txt_00",pppplVar14,ppppbVar15,pppplVar16,
                 param_6,param_7,param_8);
  uVar8 = local_208;
  if (puVar6 + 0xf != &local_210) {
    local_208 = 0;
    uVar10 = puVar6[0x10];
    puVar6[0x10] = uVar8;
    if (uVar10 != 0) {
      FUN_710392eb40(uVar10);
    }
  }
  uVar8 = local_208;
  local_210 = &PTR_FUN_710523d9a8;
  local_208 = 0;
  if (uVar8 != 0) {
    FUN_710392eb40(uVar8);
  }
  FUN_7103776910(&local_210,(long)puVar2,(long ****)"set_txt_level",pppplVar14,ppppbVar15,pppplVar16
                 ,param_6,param_7,param_8);
  uVar8 = local_208;
  if (puVar6 + 0x11 != &local_210) {
    local_208 = 0;
    uVar10 = puVar6[0x12];
    puVar6[0x12] = uVar8;
    if (uVar10 != 0) {
      FUN_710392eb40(uVar10);
    }
  }
  uVar8 = local_208;
  local_210 = &PTR_FUN_710523d9a8;
  local_208 = 0;
  if (uVar8 != 0) {
    FUN_710392eb40(uVar8);
  }
  FUN_7103776910(&local_210,(long)puVar3,(long ****)"set_txt_dmg",pppplVar14,ppppbVar15,pppplVar16,
                 param_6,param_7,param_8);
  uVar8 = local_208;
  if (puVar6 + 0x17 != &local_210) {
    local_208 = 0;
    uVar10 = puVar6[0x18];
    puVar6[0x18] = uVar8;
    if (uVar10 != 0) {
      FUN_710392eb40(uVar10);
    }
  }
  uVar8 = local_208;
  local_210 = &PTR_FUN_710523d9a8;
  local_208 = 0;
  if (uVar8 != 0) {
    FUN_710392eb40(uVar8);
  }
  FUN_7103776910(&local_210,(long)puVar3,(long ****)"set_txt_hp",pppplVar14,ppppbVar15,pppplVar16,
                 param_6,param_7,param_8);
  uVar8 = local_208;
  if (puVar6 + 0x19 != &local_210) {
    local_208 = 0;
    uVar10 = puVar6[0x1a];
    puVar6[0x1a] = uVar8;
    if (uVar10 != 0) {
      FUN_710392eb40(uVar10);
    }
  }
  uVar8 = local_208;
  local_210 = &PTR_FUN_710523d9a8;
  local_208 = 0;
  if (uVar8 != 0) {
    FUN_710392eb40(uVar8);
  }
  FUN_7103776640(&local_210,(long)pppplVar1,(byte ****)"set_lct_hd",pppplVar14,ppppbVar15,pppplVar16
                 ,param_6,param_7,param_8);
  uVar8 = local_208;
  FUN_7103778300(0x3f800000,local_208,0x71042e6b68);
  local_210 = &PTR_FUN_710523d988;
  local_208 = 0;
  if (uVar8 != 0) {
    uVar10 = *(ulong *)(uVar8 + 0x18);
    *(undefined ***)(uVar8 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar8 + 0x18) = 0;
    if (uVar10 != 0) {
      FUN_710392eb40(uVar10);
    }
    FUN_710392eb40(uVar8);
  }
  if ((*(long *)(puVar6[0x1e] + 8) != 0) &&
     (lVar20 = *(long *)(*(long *)(puVar6[0x1e] + 8) + 0x18), lVar20 != 0)) {
    *(byte *)(lVar20 + 0x58) =
         (*(byte *)((long)puVar6 + 0x25f) | *(byte *)(lVar20 + 0x58) & 0xfe) ^ 1;
  }
  pppplVar14 = (long ****)&DAT_00000004;
  local_210 = (undefined **)CONCAT62(local_210._2_6_,0xffff);
  FUN_71019fc090(puVar6,(ushort *)&local_210,(long *********)&DAT_00000004,ppppbVar15,pppplVar16,
                 param_6,param_7,param_8);
  FUN_71003a4ca0(local_c0,"cmn_%dp",(ulong)(*(int *)((long)puVar6 + 0x1cc) + 1),pppplVar14,
                 ppppbVar15,pppplVar16,param_6,param_7,param_8);
  FUN_7103776910(&local_210,(long)puVar7,(long ****)"set_txt_player_off",pppplVar14,ppppbVar15,
                 pppplVar16,param_6,param_7,param_8);
  FUN_710377a120((long)&local_210,acStack_b8,pppplVar14,ppppbVar15,pppplVar16,param_6,param_7,
                 param_8);
  uVar8 = local_208;
  local_210 = &PTR_FUN_710523d9a8;
  local_208 = 0;
  if (uVar8 != 0) {
    FUN_710392eb40(uVar8);
  }
  *(undefined4 *)(puVar6 + 0x27) = 0;
  if (*(char *)((long)puVar6 + 0x26a) == '\0') {
    FUN_7103778300(0x3f800000,puVar6[0x24],0x710436cb6c);
    FUN_7103776910(&local_210,(long)puVar4,(long ****)"set_txt_btn",pppplVar14,ppppbVar15,pppplVar16
                   ,param_6,param_7,param_8);
    uVar8 = local_208;
    if (*(long **)(local_208 + 0x10) != (long *)0x0) {
      pppplVar14 = (long ****)0x0;
      ppppbVar15 = (byte ****)0x0;
      local_d0 = (undefined **)((ulong)local_d0 & 0xffffffff00000000);
      FUN_71037a2270(*(long **)(local_208 + 0x10),(ushort *)&local_d0,0,0);
    }
  }
  else {
    FUN_7103778300(0x3f800000,puVar6[0x24],0x71042c56a7);
    FUN_7103776910(&local_210,(long)puVar4,(long ****)"set_txt_btn",pppplVar14,ppppbVar15,pppplVar16
                   ,param_6,param_7,param_8);
    FUN_710377a120((long)&local_210,
                   (&PTR_s_mel_chara_select_help_press_any__71050a8890)[*(int *)(puVar6 + 0x27)],
                   pppplVar14,ppppbVar15,pppplVar16,param_6,param_7,param_8);
    uVar8 = local_208;
  }
  local_208 = 0;
  local_210 = &PTR_FUN_710523d9a8;
  if (uVar8 != 0) {
    local_208 = 0;
    local_210 = &PTR_FUN_710523d9a8;
    FUN_710392eb40(uVar8);
  }
  FUN_71037780e0(&local_210,(long)puVar4,(long ****)"btn_anim",pppplVar14,ppppbVar15,pppplVar16,
                 param_6,param_7,param_8);
  uVar8 = local_208;
  if (puVar6 + 0x25 != &local_210) {
    local_208 = 0;
    uVar10 = puVar6[0x26];
    puVar6[0x26] = uVar8;
    if (uVar10 != 0) {
      FUN_710392eb40(uVar10);
    }
  }
  uVar8 = local_208;
  local_210 = &PTR_FUN_710523d9e8;
  local_208 = 0;
  if (uVar8 != 0) {
    FUN_710392eb40(uVar8);
  }
  FUN_710377aee0(0x3f800000,(long)(puVar6 + 0x25));
  FUN_7103776640(&local_210,(long)pppplVar1,(byte ****)"set_lct_controller",pppplVar14,ppppbVar15,
                 pppplVar16,param_6,param_7,param_8);
  uVar8 = local_208;
  if (puVar6 + 0x28 != &local_210) {
    local_208 = 0;
    uVar10 = puVar6[0x29];
    puVar6[0x29] = uVar8;
    if (uVar10 != 0) {
      uVar8 = *(ulong *)(uVar10 + 0x18);
      *(undefined ***)(uVar10 + 0x10) = &PTR_FUN_710523d9a8;
      *(undefined8 *)(uVar10 + 0x18) = 0;
      if (uVar8 != 0) {
        FUN_710392eb40(uVar8);
      }
      FUN_710392eb40(uVar10);
    }
  }
  uVar8 = local_208;
  local_210 = &PTR_FUN_710523d988;
  local_208 = 0;
  if (uVar8 != 0) {
    uVar10 = *(ulong *)(uVar8 + 0x18);
    *(undefined ***)(uVar8 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar8 + 0x18) = 0;
    if (uVar10 != 0) {
      FUN_710392eb40(uVar10);
    }
    FUN_710392eb40(uVar8);
  }
  FUN_7103778300(0x3f800000,puVar6[0x29],0x710436cb6c);
  FUN_7103778300(0x3f800000,puVar6[0x29],0x71042d5cab);
  FUN_7103776640(&local_210,(long)puVar7,(byte ****)"set_lct_controller",pppplVar14,ppppbVar15,
                 pppplVar16,param_6,param_7,param_8);
  uVar8 = local_208;
  if (puVar6 + 0x2a != &local_210) {
    local_208 = 0;
    uVar10 = puVar6[0x2b];
    puVar6[0x2b] = uVar8;
    if (uVar10 != 0) {
      uVar8 = *(ulong *)(uVar10 + 0x18);
      *(undefined ***)(uVar10 + 0x10) = &PTR_FUN_710523d9a8;
      *(undefined8 *)(uVar10 + 0x18) = 0;
      if (uVar8 != 0) {
        FUN_710392eb40(uVar8);
      }
      FUN_710392eb40(uVar10);
    }
  }
  uVar8 = local_208;
  local_210 = &PTR_FUN_710523d988;
  local_208 = 0;
  if (uVar8 != 0) {
    uVar10 = *(ulong *)(uVar8 + 0x18);
    *(undefined ***)(uVar8 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar8 + 0x18) = 0;
    if (uVar10 != 0) {
      FUN_710392eb40(uVar10);
    }
    FUN_710392eb40(uVar8);
  }
  FUN_7103778300(0x3f800000,puVar6[0x2b],0x710436cb6c);
  FUN_7103778300(0x3f800000,puVar6[0x2b],0x71042d5cab);
  FUN_7103776910(&local_d0,(long)pppplVar1,(long ****)"set_txt_local_entry",pppplVar14,ppppbVar15,
                 pppplVar16,param_6,param_7,param_8);
  if (*(long **)(local_c8 + 0x10) != (long *)0x0) {
    pppplVar14 = (long ****)0x0;
    ppppbVar15 = (byte ****)0x0;
    local_210 = (undefined **)((ulong)local_210 & 0xffffffff00000000);
    FUN_71037a2270(*(long **)(local_c8 + 0x10),(ushort *)&local_210,0,0);
  }
  if (*(char *)((long)param_4 + 0x15) != '\0') {
    FUN_7103776640(&local_210,(long)pppplVar1,(byte ****)"set_parts_load",pppplVar14,ppppbVar15,
                   pppplVar16,param_6,param_7,param_8);
    uVar8 = local_208;
    if (puVar6 + 0x2c != &local_210) {
      local_208 = 0;
      uVar10 = puVar6[0x2d];
      puVar6[0x2d] = uVar8;
      if (uVar10 != 0) {
        uVar8 = *(ulong *)(uVar10 + 0x18);
        *(undefined ***)(uVar10 + 0x10) = &PTR_FUN_710523d9a8;
        *(undefined8 *)(uVar10 + 0x18) = 0;
        if (uVar8 != 0) {
          FUN_710392eb40(uVar8);
        }
        FUN_710392eb40(uVar10);
      }
    }
    uVar8 = local_208;
    local_210 = &PTR_FUN_710523d988;
    local_208 = 0;
    if (uVar8 != 0) {
      uVar10 = *(ulong *)(uVar8 + 0x18);
      *(undefined ***)(uVar8 + 0x10) = &PTR_FUN_710523d9a8;
      *(undefined8 *)(uVar8 + 0x18) = 0;
      if (uVar10 != 0) {
        FUN_710392eb40(uVar10);
      }
      FUN_710392eb40(uVar8);
    }
    FUN_7103778300(0x3f800000,puVar6[0x2d],0x710441139d);
    FUN_7103778300(0x3f800000,puVar6[0x2d],0x71043cd335);
  }
  FUN_7103776640(&local_e0,(long)pppplVar1,(byte ****)"set_part_all_win",pppplVar14,ppppbVar15,
                 pppplVar16,param_6,param_7,param_8);
  FUN_7103778300(0x3f800000,local_d8,0x7104400de2);
  FUN_71037780e0(&local_210,(long)&local_e0,(long ****)"win_anim",pppplVar14,ppppbVar15,pppplVar16,
                 param_6,param_7,param_8);
  uVar8 = local_208;
  if (puVar6 + 0x32 != &local_210) {
    local_208 = 0;
    uVar10 = puVar6[0x33];
    puVar6[0x33] = uVar8;
    if (uVar10 != 0) {
      FUN_710392eb40(uVar10);
    }
  }
  uVar8 = local_208;
  local_210 = &PTR_FUN_710523d9e8;
  local_208 = 0;
  if (uVar8 != 0) {
    FUN_710392eb40(uVar8);
  }
  plVar11 = *(long **)(puVar6[0x33] + 8);
  if (plVar11 != (long *)0x0) {
    (**(code **)(*plVar11 + 0x140))(plVar11,0);
  }
  puVar7 = (undefined8 *)
           FUN_710392e290(0x10,0x18,pppplVar14,ppppbVar15,pppplVar16,param_6,param_7,param_8);
  if (puVar7 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_220 = (long ***)((ulong)local_220 & 0xffffffff00000000);
      local_210 = (undefined **)&SUB_00000018;
      pppplVar14 = (long ****)&local_210;
      uVar8 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_220);
      if (((uVar8 & 1) != 0) &&
         (puVar7 = (undefined8 *)
                   FUN_710392e290(0x10,0x18,pppplVar14,ppppbVar15,pppplVar16,param_6,param_7,param_8
                                 ), puVar7 != (undefined8 *)0x0)) goto LAB_71019ff780;
    }
    puVar7 = (undefined8 *)0x0;
  }
LAB_71019ff780:
  *puVar7 = 0;
  puVar7[1] = 0;
  *(undefined1 *)(puVar7 + 2) = 1;
  uVar8 = puVar6[0x35];
  puVar6[0x35] = puVar7;
  if (uVar8 != 0) {
    FUN_710392eb40(uVar8);
  }
  puVar7 = (undefined8 *)
           FUN_710392e290(0x10,0x18,pppplVar14,ppppbVar15,pppplVar16,param_6,param_7,param_8);
  if (puVar7 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_220 = (long ***)((ulong)local_220 & 0xffffffff00000000);
      local_210 = (undefined **)&SUB_00000018;
      pppplVar14 = (long ****)&local_210;
      uVar8 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_220);
      if (((uVar8 & 1) != 0) &&
         (puVar7 = (undefined8 *)
                   FUN_710392e290(0x10,0x18,pppplVar14,ppppbVar15,pppplVar16,param_6,param_7,param_8
                                 ), puVar7 != (undefined8 *)0x0)) goto LAB_71019ff7f4;
    }
    puVar7 = (undefined8 *)0x0;
  }
LAB_71019ff7f4:
  *puVar7 = 0;
  puVar7[1] = 0;
  *(undefined1 *)(puVar7 + 2) = 1;
  uVar8 = puVar6[0x37];
  puVar6[0x37] = puVar7;
  if (uVar8 != 0) {
    FUN_710392eb40(uVar8);
  }
  FUN_7103778300(0x3f800000,puVar6[2],0x7104349d1e);
  FUN_7103778300(0x3f800000,puVar6[2],0x71042d5c0d);
  local_210 = (undefined **)0x0;
  local_208 = 0x101;
  local_200 = CONCAT17(local_200._7_1_,0x1000100000001);
  local_1f8 = &DAT_41f0000000000000;
  local_1f0 = (long *)((ulong)local_1f0 & 0xffffffff00000000);
  local_1c0 = (long *)0x0;
  local_190 = (long *)0x0;
  local_160 = (long *)0x0;
  local_130 = (long *)0x0;
  local_100 = (long *)0x0;
  local_f0 = 0;
  FUN_710337df20((long)&local_210);
  uVar13 = local_208;
  plVar11 = puVar6 + 0x38;
  ppppbVar15 = (byte ****)&local_210;
  local_210 = (undefined **)CONCAT44(3,(undefined4)local_210);
  local_208._0_2_ = (ushort)(byte)local_208;
  uVar5 = local_208;
  local_208._5_3_ = SUB83(uVar13,5);
  local_208._0_5_ = CONCAT14(1,(int)uVar5);
  FUN_7103770b30(plVar11,pppplVar1,(long ****)"selector_0",ppppbVar15,pppplVar16,param_6,param_7,
                 param_8);
  FUN_71037717d0(plVar11,0,"set_btn_panel",ppppbVar15,pppplVar16,param_6,param_7,param_8);
  FUN_71037717d0(plVar11,1,"set_btn_flag_team",ppppbVar15,pppplVar16,param_6,param_7,param_8);
  FUN_71037717d0(plVar11,2,"set_parts_controller_res",ppppbVar15,pppplVar16,param_6,param_7,param_8)
  ;
  FUN_71037717d0(plVar11,3,"set_btn_name",ppppbVar15,pppplVar16,param_6,param_7,param_8);
  FUN_71037717d0(plVar11,4,"set_btn_sp",ppppbVar15,pppplVar16,param_6,param_7,param_8);
  FUN_71037717d0(plVar11,5,"set_btn_hd",ppppbVar15,pppplVar16,param_6,param_7,param_8);
  FUN_71037717d0(plVar11,6,"set_btn_dash_chara_hit",ppppbVar15,pppplVar16,param_6,param_7,param_8);
  FUN_71037717d0(plVar11,7,"set_part_chara_pk",ppppbVar15,pppplVar16,param_6,param_7,param_8);
  FUN_71037717d0(plVar11,8,"set_part_chara_element",ppppbVar15,pppplVar16,param_6,param_7,param_8);
  FUN_71037717d0(plVar11,9,"set_btn_chara_hit",ppppbVar15,pppplVar16,param_6,param_7,param_8);
  FUN_7103771d60(&local_220,puVar6[0x38],(long ****)0x0,ppppbVar15,pppplVar16,param_6,param_7,
                 param_8);
  plVar28 = local_218;
  local_218 = (long *)*local_218;
  if (local_218 != (long *)0x0) {
    (**(code **)(*local_218 + 0x268))(local_218,1,0);
  }
  local_220 = (long ***)&PTR_FUN_710523d9c8;
  local_218 = (long *)0x0;
  if (plVar28 != (long *)0x0) {
    FUN_710392eb40((ulong)plVar28);
  }
  FUN_7103771d60(&local_220,*plVar11,(long ****)0x1,ppppbVar15,pppplVar16,param_6,param_7,param_8);
  plVar28 = local_218;
  plVar12 = (long *)*local_218;
  if (plVar12 != (long *)0x0) {
    (**(code **)(*plVar12 + 0x268))(plVar12,1,0);
  }
  local_220 = (long ***)&PTR_FUN_710523d9c8;
  local_218 = (long *)0x0;
  if (plVar28 != (long *)0x0) {
    FUN_710392eb40((ulong)plVar28);
  }
  lVar20 = *plVar11;
  lVar25 = *(long *)(lVar20 + 0x1b8);
  if (lVar25 != 0) {
    lVar21 = lVar20 + 0x1b8;
    lVar26 = lVar21;
    lVar27 = lVar25;
    do {
      if (5 < *(int *)(lVar27 + 0x20)) {
        lVar26 = lVar27;
      }
      lVar27 = *(long *)(lVar27 + (ulong)(*(int *)(lVar27 + 0x20) < 6) * 8);
    } while (lVar27 != 0);
    if (((lVar26 != lVar21) && (*(int *)(lVar26 + 0x20) < 7)) &&
       (plVar28 = *(long **)(lVar26 + 0x28), plVar28 != (long *)0x0)) {
      (**(code **)(*plVar28 + 0x1f8))(plVar28,0);
      (**(code **)(*plVar28 + 0x388))(plVar28,1,0);
      lVar20 = *plVar11;
      lVar25 = *(long *)(lVar20 + 0x1b8);
      lVar21 = lVar20 + 0x1b8;
    }
    lVar26 = lVar21;
    lVar27 = lVar25;
    if (lVar25 != 0) {
      do {
        if (6 < *(int *)(lVar27 + 0x20)) {
          lVar26 = lVar27;
        }
        lVar27 = *(long *)(lVar27 + (ulong)(*(int *)(lVar27 + 0x20) < 7) * 8);
      } while (lVar27 != 0);
      if (((lVar26 != lVar21) && (*(int *)(lVar26 + 0x20) < 8)) &&
         (plVar28 = *(long **)(lVar26 + 0x28), plVar28 != (long *)0x0)) {
        (**(code **)(*plVar28 + 0x1f8))(plVar28,0);
        (**(code **)(*plVar28 + 0x388))(plVar28,1,0);
        lVar20 = *plVar11;
        lVar25 = *(long *)(lVar20 + 0x1b8);
        lVar21 = lVar20 + 0x1b8;
      }
      lVar26 = lVar21;
      lVar27 = lVar25;
      if (lVar25 != 0) {
        do {
          if (7 < *(int *)(lVar27 + 0x20)) {
            lVar26 = lVar27;
          }
          lVar27 = *(long *)(lVar27 + (ulong)(*(int *)(lVar27 + 0x20) < 8) * 8);
        } while (lVar27 != 0);
        if (((lVar26 != lVar21) && (*(int *)(lVar26 + 0x20) < 9)) &&
           (plVar28 = *(long **)(lVar26 + 0x28), plVar28 != (long *)0x0)) {
          (**(code **)(*plVar28 + 0x1f8))(plVar28,0);
          (**(code **)(*plVar28 + 0x388))(plVar28,1,0);
          lVar20 = *plVar11;
          lVar25 = *(long *)(lVar20 + 0x1b8);
          lVar21 = lVar20 + 0x1b8;
        }
        lVar26 = lVar21;
        if (lVar25 != 0) {
          do {
            if (0 < *(int *)(lVar25 + 0x20)) {
              lVar26 = lVar25;
            }
            lVar25 = *(long *)(lVar25 + (ulong)(*(int *)(lVar25 + 0x20) < 1) * 8);
          } while (lVar25 != 0);
          if (((lVar26 != lVar21) && (*(int *)(lVar26 + 0x20) < 2)) &&
             (plVar28 = *(long **)(lVar26 + 0x28), plVar28 != (long *)0x0)) {
            (**(code **)(*plVar28 + 0x290))(plVar28,1);
            lVar20 = *plVar11;
          }
        }
      }
    }
  }
  local_220 = (long ***)0x151ca6c028;
  FUN_7103772070(lVar20,0,&local_220,ppppbVar15,pppplVar16,param_6,param_7,param_8);
  local_220 = (long ***)0x151ca6c028;
  FUN_7103772070(*plVar11,1,&local_220,ppppbVar15,pppplVar16,param_6,param_7,param_8);
  local_220 = (long ***)0x1bb4830208;
  FUN_7103772070(*plVar11,2,&local_220,ppppbVar15,pppplVar16,param_6,param_7,param_8);
  lVar20 = *(long *)(*(long *)(DAT_710532f8d0 + 8) + 0x40);
  if ((ulong)(*(long *)(*(long *)(DAT_710532f8d0 + 8) + 0x48) - lVar20 >> 3) < 2) {
    local_220 = (long ***)0x0;
  }
  else {
    local_220 = *(long ****)(lVar20 + 8);
  }
  FUN_7103772070(*plVar11,6,&local_220,ppppbVar15,pppplVar16,param_6,param_7,param_8);
  lVar20 = *(long *)(*(long *)(DAT_710532f8d0 + 8) + 0x40);
  if ((ulong)(*(long *)(*(long *)(DAT_710532f8d0 + 8) + 0x48) - lVar20 >> 3) < 2) {
    local_220 = (long ***)0x0;
  }
  else {
    local_220 = *(long ****)(lVar20 + 8);
  }
  FUN_7103772070(*plVar11,7,&local_220,ppppbVar15,pppplVar16,param_6,param_7,param_8);
  lVar20 = *(long *)(*(long *)(DAT_710532f8d0 + 8) + 0x40);
  if ((ulong)(*(long *)(*(long *)(DAT_710532f8d0 + 8) + 0x48) - lVar20 >> 3) < 2) {
    local_220 = (long ***)0x0;
  }
  else {
    local_220 = *(long ****)(lVar20 + 8);
  }
  FUN_7103772070(*plVar11,9,&local_220,ppppbVar15,pppplVar16,param_6,param_7,param_8);
  lVar20 = *(long *)(*(long *)(DAT_710532f8d0 + 8) + 0x40);
  if ((ulong)(*(long *)(*(long *)(DAT_710532f8d0 + 8) + 0x48) - lVar20 >> 3) < 2) {
    local_220 = (long ***)0x0;
  }
  else {
    local_220 = *(long ****)(lVar20 + 8);
  }
  FUN_7103772070(puVar6[0x38],8,&local_220,ppppbVar15,pppplVar16,param_6,param_7,param_8);
  FUN_7103778630(0,puVar6[2],0x710425ed91);
  FUN_7103778630(0,puVar6[2],0x710433a9c5);
  FUN_7103778630(0,puVar6[0x1e],0x710433a9c5);
  FUN_7103778630(0,puVar6[0x20],0x710433a9c5);
  FUN_7103778630(0,puVar6[2],0x710433a0fe);
  FUN_7103778630(0,puVar6[0x1e],0x710433a0fe);
  FUN_7103778630(0,puVar6[0x20],0x710433a0fe);
  FUN_71019fc7a0((long)puVar6);
  if (alStack_120 == local_100) {
    pcVar18 = *(code **)(*local_100 + 0x20);
LAB_71019ffdd8:
    (*pcVar18)();
  }
  else if (local_100 != (long *)0x0) {
    pcVar18 = *(code **)(*local_100 + 0x28);
    goto LAB_71019ffdd8;
  }
  if (alStack_150 == local_130) {
    pcVar18 = *(code **)(*local_130 + 0x20);
LAB_71019ffe08:
    (*pcVar18)();
  }
  else if (local_130 != (long *)0x0) {
    pcVar18 = *(code **)(*local_130 + 0x28);
    goto LAB_71019ffe08;
  }
  if (alStack_180 == local_160) {
    pcVar18 = *(code **)(*local_160 + 0x20);
LAB_71019ffe38:
    (*pcVar18)();
  }
  else if (local_160 != (long *)0x0) {
    pcVar18 = *(code **)(*local_160 + 0x28);
    goto LAB_71019ffe38;
  }
  if (alStack_1b0 == local_190) {
    pcVar18 = *(code **)(*local_190 + 0x20);
LAB_71019ffe68:
    (*pcVar18)();
  }
  else if (local_190 != (long *)0x0) {
    pcVar18 = *(code **)(*local_190 + 0x28);
    goto LAB_71019ffe68;
  }
  if (alStack_1e0 == local_1c0) {
    pcVar18 = *(code **)(*local_1c0 + 0x20);
  }
  else {
    if (local_1c0 == (long *)0x0) goto LAB_71019ffe9c;
    pcVar18 = *(code **)(*local_1c0 + 0x28);
  }
  (*pcVar18)();
LAB_71019ffe9c:
  uVar8 = local_d8;
  local_e0 = &PTR_FUN_710523d988;
  local_d8 = 0;
  if (uVar8 != 0) {
    uVar10 = *(ulong *)(uVar8 + 0x18);
    *(undefined ***)(uVar8 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar8 + 0x18) = 0;
    if (uVar10 != 0) {
      FUN_710392eb40(uVar10);
    }
    FUN_710392eb40(uVar8);
  }
  uVar8 = local_c8;
  local_d0 = &PTR_FUN_710523d9a8;
  local_c8 = 0;
  if (uVar8 != 0) {
    FUN_710392eb40(uVar8);
  }
  return;
}

