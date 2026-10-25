// addr:      7101deddf0
// offset:    0x1deddf0
// name:      FUN_7101deddf0
// mangled:   
// signature: undefined __cdecl FUN_7101deddf0(undefined8 * param_1, int * param_2, long * * * * * * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_7101deddf0(undefined8 *param_1,int *param_2,long *********param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  byte ****ppppbVar2;
  long *plVar3;
  undefined8 *puVar4;
  char *pcVar5;
  char cVar6;
  bool bVar7;
  ushort uVar8;
  int iVar9;
  ulong uVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined **ppuVar14;
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
  undefined8 uVar15;
  undefined8 extraout_x1_40;
  undefined8 extraout_x1_41;
  undefined8 extraout_x1_42;
  undefined8 extraout_x1_43;
  char *pcVar16;
  undefined8 extraout_x1_44;
  uint uVar17;
  long ****pppplVar18;
  undefined1 *puVar19;
  undefined **ppuVar20;
  long *********ppppppppplVar21;
  byte ****ppppbVar22;
  long *******ppppppplVar23;
  code *pcVar24;
  long *plVar25;
  long *plVar26;
  long lVar27;
  long *plVar28;
  uint uVar29;
  ulong uVar30;
  long lVar31;
  long lVar32;
  long lVar33;
  long *plVar34;
  long lVar35;
  long *plVar36;
  uint uVar37;
  undefined8 uVar38;
  undefined ***pppuVar39;
  undefined1 auVar40 [16];
  ulong local_1e0;
  undefined8 local_1d8;
  undefined8 local_1d0;
  undefined2 local_1c8;
  undefined1 uStack_1c6;
  undefined5 uStack_1c5;
  undefined1 local_1c0;
  undefined1 uStack_1bf;
  undefined4 local_1be;
  undefined1 local_1ba;
  undefined1 *local_1b8;
  undefined4 local_1b0;
  long alStack_1a0 [4];
  long *local_180;
  long alStack_170 [4];
  long *local_150;
  long alStack_140 [4];
  long *local_120;
  long alStack_110 [4];
  long *local_f0;
  long alStack_e0 [4];
  long *local_c0;
  undefined4 local_b0;
  long ********local_a0;
  ulong local_98;
  undefined1 local_90;
  long *********local_80;
  
  lVar35 = *(long *)*param_1;
  uVar17 = (uint)param_3;
  uVar10 = FUN_710323cb80(lVar35,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  while ((uVar10 & 1) == 0) {
    nn::os::SleepThread(1000000);
    uVar10 = FUN_710323cb80(lVar35,extraout_x1,param_3,param_4,param_5,param_6,param_7,param_8);
  }
  puVar1 = param_1 + 1;
  pppplVar18 = (long ****)&DAT_71045459a0;
  ppppbVar22 = (byte ****)0x2;
  FUN_71032cbf30(puVar1,*(long *)*param_1,(ulong *)&DAT_71045459a0,(byte ****)0x2,param_5,param_6,
                 param_7,param_8);
  lVar35 = *(long *)param_1[1];
  if (param_1 + 2 != (undefined8 *)(lVar35 + 8)) {
    *(undefined8 *)param_1[3] = **(undefined8 **)(lVar35 + 0x10);
    *(undefined8 *)(param_1[3] + 8) = *(undefined8 *)(*(long *)(lVar35 + 0x10) + 8);
    lVar27 = *(long *)(lVar35 + 0x10);
    lVar35 = param_1[3];
    if (lVar35 != lVar27) {
      **(undefined8 **)(lVar35 + 0x18) = **(undefined8 **)(lVar27 + 0x18);
      *(undefined8 *)(*(long *)(lVar35 + 0x18) + 8) = *(undefined8 *)(*(long *)(lVar27 + 0x18) + 8);
      *(undefined8 *)(*(long *)(lVar35 + 0x18) + 0x10) =
           *(undefined8 *)(*(long *)(lVar27 + 0x18) + 0x10);
      *(undefined8 *)(*(long *)(lVar35 + 0x18) + 0x18) =
           *(undefined8 *)(*(long *)(lVar27 + 0x18) + 0x18);
    }
  }
  uVar38 = *param_1;
  puVar11 = (undefined8 *)
            FUN_710392e290(0x10,0x88,pppplVar18,ppppbVar22,param_5,param_6,param_7,param_8);
  if (puVar11 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_a0 = (long ********)((ulong)local_a0 & 0xffffffff00000000);
      local_1d0 = (undefined **)&DAT_00000088;
      pppplVar18 = (long ****)&local_1d0;
      uVar10 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_a0);
      if (((uVar10 & 1) != 0) &&
         (puVar11 = (undefined8 *)
                    FUN_710392e290(0x10,0x88,pppplVar18,ppppbVar22,param_5,param_6,param_7,param_8),
         puVar11 != (undefined8 *)0x0)) goto LAB_7101dedf58;
    }
    puVar11 = (undefined8 *)0x0;
  }
LAB_7101dedf58:
  *puVar11 = &PTR_FUN_71050b1578;
  puVar11[1] = 0;
  puVar11[0xc] = 0;
  puVar11[0xd] = 0x1ffffffff;
  puVar11[2] = 0;
  puVar11[3] = 0;
  *(undefined1 *)(puVar11 + 0xb) = 0;
  puVar11[0xf] = uVar38;
  *(undefined1 *)(puVar11 + 0xe) = 1;
  puVar11[9] = 0;
  puVar11[10] = 0;
  puVar12 = (undefined8 *)
            FUN_710392e290(0x10,0x518,pppplVar18,ppppbVar22,param_5,param_6,param_7,param_8);
  if (puVar12 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_a0 = (long ********)((ulong)local_a0 & 0xffffffff00000000);
      local_1d0 = (undefined **)0x518;
      pppplVar18 = (long ****)&local_1d0;
      uVar10 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_a0);
      if (((uVar10 & 1) != 0) &&
         (puVar12 = (undefined8 *)
                    FUN_710392e290(0x10,0x518,pppplVar18,ppppbVar22,param_5,param_6,param_7,param_8)
         , puVar12 != (undefined8 *)0x0)) goto LAB_7101dedfe0;
    }
    puVar12 = (undefined8 *)0x0;
  }
LAB_7101dedfe0:
  *puVar12 = uVar38;
  puVar12[1] = puVar12;
  *(undefined4 *)(puVar12 + 0x1d) = 0xffffffff;
  puVar12[2] = 0;
  puVar12[3] = 0;
  *(undefined1 *)((long)puVar12 + 0xec) = 0;
  puVar12[6] = 0;
  puVar12[4] = 0;
  puVar12[5] = 0;
  puVar12[0x1b] = 0;
  puVar12[0x1c] = 0xffffffff;
  puVar12[0x19] = 0;
  puVar12[0x1a] = 0;
  puVar12[0x17] = 0;
  puVar12[0x18] = 0;
  puVar12[0x15] = 0;
  puVar12[0x16] = 0;
  puVar12[0x13] = 0;
  puVar12[0x14] = 0;
  puVar12[0x11] = 0;
  puVar12[0x12] = 0;
  puVar12[0xf] = 0;
  puVar12[0x10] = 0;
  puVar12[0xd] = 0;
  puVar12[0xe] = 0;
  puVar12[0xb] = 0;
  puVar12[0xc] = 0;
  puVar12[9] = 0;
  puVar12[10] = 0;
  puVar12[7] = 0;
  puVar12[8] = 0;
  puVar13 = (undefined8 *)
            FUN_710392e290(0x10,8,pppplVar18,ppppbVar22,param_5,param_6,param_7,param_8);
  uVar15 = extraout_x1_00;
  if (puVar13 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_a0 = (long ********)((ulong)local_a0 & 0xffffffff00000000);
      local_1d0 = (undefined **)&DAT_00000008;
      pppplVar18 = (long ****)&local_1d0;
      auVar40 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_a0);
      uVar15 = auVar40._8_8_;
      if (((auVar40._0_8_ & 1) != 0) &&
         (puVar13 = (undefined8 *)
                    FUN_710392e290(0x10,8,pppplVar18,ppppbVar22,param_5,param_6,param_7,param_8),
         uVar15 = extraout_x1_01, puVar13 != (undefined8 *)0x0)) goto LAB_7101dee084;
    }
    puVar13 = (undefined8 *)0x0;
  }
LAB_7101dee084:
  FUN_7103773200(puVar13,uVar15,pppplVar18,ppppbVar22,param_5,param_6,param_7,param_8);
  puVar12[0x1e] = puVar13;
  pppplVar18 = (long ****)0x258;
  memset(puVar12 + 0x1f,0,600);
  FUN_7103776290(puVar12 + 0x1f,extraout_x1_02,pppplVar18,ppppbVar22,param_5,param_6,param_7,param_8
                );
  puVar12[0x21] = &PTR_FUN_710523d9a8;
  puVar13 = (undefined8 *)
            FUN_710392e290(0x10,0x20,pppplVar18,ppppbVar22,param_5,param_6,param_7,param_8);
  uVar15 = extraout_x1_03;
  if (puVar13 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_a0 = (long ********)((ulong)local_a0 & 0xffffffff00000000);
      local_1d0 = (undefined **)&SUB_00000020;
      pppplVar18 = (long ****)&local_1d0;
      auVar40 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_a0);
      uVar15 = auVar40._8_8_;
      if (((auVar40._0_8_ & 1) != 0) &&
         (puVar13 = (undefined8 *)
                    FUN_710392e290(0x10,0x20,pppplVar18,ppppbVar22,param_5,param_6,param_7,param_8),
         uVar15 = extraout_x1_04, puVar13 != (undefined8 *)0x0)) goto LAB_7101dee10c;
    }
    puVar13 = (undefined8 *)0x0;
  }
LAB_7101dee10c:
  puVar13[2] = 0;
  puVar13[3] = 0;
  *puVar13 = 0;
  puVar13[1] = 0;
  puVar12[0x22] = puVar13;
  puVar12[0x23] = 0x52ffff0000000000;
  FUN_7103776290(puVar12 + 0x24,uVar15,pppplVar18,ppppbVar22,param_5,param_6,param_7,param_8);
  puVar12[0x26] = &PTR_FUN_710523d9a8;
  puVar13 = (undefined8 *)
            FUN_710392e290(0x10,0x20,pppplVar18,ppppbVar22,param_5,param_6,param_7,param_8);
  uVar15 = extraout_x1_05;
  if (puVar13 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_a0 = (long ********)((ulong)local_a0 & 0xffffffff00000000);
      local_1d0 = (undefined **)&SUB_00000020;
      pppplVar18 = (long ****)&local_1d0;
      auVar40 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_a0);
      uVar15 = auVar40._8_8_;
      if (((auVar40._0_8_ & 1) != 0) &&
         (puVar13 = (undefined8 *)
                    FUN_710392e290(0x10,0x20,pppplVar18,ppppbVar22,param_5,param_6,param_7,param_8),
         uVar15 = extraout_x1_06, puVar13 != (undefined8 *)0x0)) goto LAB_7101dee184;
    }
    puVar13 = (undefined8 *)0x0;
  }
LAB_7101dee184:
  puVar13[2] = 0;
  puVar13[3] = 0;
  *puVar13 = 0;
  puVar13[1] = 0;
  puVar12[0x27] = puVar13;
  puVar12[0x28] = 0x52ffff0000000000;
  FUN_7103776290(puVar12 + 0x29,uVar15,pppplVar18,ppppbVar22,param_5,param_6,param_7,param_8);
  puVar12[0x2b] = &PTR_FUN_710523d9a8;
  puVar13 = (undefined8 *)
            FUN_710392e290(0x10,0x20,pppplVar18,ppppbVar22,param_5,param_6,param_7,param_8);
  uVar15 = extraout_x1_07;
  if (puVar13 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_a0 = (long ********)((ulong)local_a0 & 0xffffffff00000000);
      local_1d0 = (undefined **)&SUB_00000020;
      pppplVar18 = (long ****)&local_1d0;
      auVar40 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_a0);
      uVar15 = auVar40._8_8_;
      if (((auVar40._0_8_ & 1) != 0) &&
         (puVar13 = (undefined8 *)
                    FUN_710392e290(0x10,0x20,pppplVar18,ppppbVar22,param_5,param_6,param_7,param_8),
         uVar15 = extraout_x1_08, puVar13 != (undefined8 *)0x0)) goto LAB_7101dee1f4;
    }
    puVar13 = (undefined8 *)0x0;
  }
LAB_7101dee1f4:
  puVar13[2] = 0;
  puVar13[3] = 0;
  *puVar13 = 0;
  puVar13[1] = 0;
  puVar12[0x2c] = puVar13;
  puVar12[0x2d] = 0x52ffff0000000000;
  FUN_7103776290(puVar12 + 0x2e,uVar15,pppplVar18,ppppbVar22,param_5,param_6,param_7,param_8);
  puVar12[0x30] = &PTR_FUN_710523d9a8;
  puVar13 = (undefined8 *)
            FUN_710392e290(0x10,0x20,pppplVar18,ppppbVar22,param_5,param_6,param_7,param_8);
  uVar15 = extraout_x1_09;
  if (puVar13 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_a0 = (long ********)((ulong)local_a0 & 0xffffffff00000000);
      local_1d0 = (undefined **)&SUB_00000020;
      pppplVar18 = (long ****)&local_1d0;
      auVar40 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_a0);
      uVar15 = auVar40._8_8_;
      if (((auVar40._0_8_ & 1) != 0) &&
         (puVar13 = (undefined8 *)
                    FUN_710392e290(0x10,0x20,pppplVar18,ppppbVar22,param_5,param_6,param_7,param_8),
         uVar15 = extraout_x1_10, puVar13 != (undefined8 *)0x0)) goto LAB_7101dee264;
    }
    puVar13 = (undefined8 *)0x0;
  }
LAB_7101dee264:
  puVar13[2] = 0;
  puVar13[3] = 0;
  *puVar13 = 0;
  puVar13[1] = 0;
  puVar12[0x31] = puVar13;
  puVar12[0x32] = 0x52ffff0000000000;
  FUN_7103776290(puVar12 + 0x33,uVar15,pppplVar18,ppppbVar22,param_5,param_6,param_7,param_8);
  puVar12[0x35] = &PTR_FUN_710523d9a8;
  puVar13 = (undefined8 *)
            FUN_710392e290(0x10,0x20,pppplVar18,ppppbVar22,param_5,param_6,param_7,param_8);
  uVar15 = extraout_x1_11;
  if (puVar13 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_a0 = (long ********)((ulong)local_a0 & 0xffffffff00000000);
      local_1d0 = (undefined **)&SUB_00000020;
      pppplVar18 = (long ****)&local_1d0;
      auVar40 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_a0);
      uVar15 = auVar40._8_8_;
      if (((auVar40._0_8_ & 1) != 0) &&
         (puVar13 = (undefined8 *)
                    FUN_710392e290(0x10,0x20,pppplVar18,ppppbVar22,param_5,param_6,param_7,param_8),
         uVar15 = extraout_x1_12, puVar13 != (undefined8 *)0x0)) goto LAB_7101dee2d4;
    }
    puVar13 = (undefined8 *)0x0;
  }
LAB_7101dee2d4:
  puVar13[2] = 0;
  puVar13[3] = 0;
  *puVar13 = 0;
  puVar13[1] = 0;
  puVar12[0x36] = puVar13;
  puVar12[0x37] = 0x52ffff0000000000;
  FUN_7103776290(puVar12 + 0x38,uVar15,pppplVar18,ppppbVar22,param_5,param_6,param_7,param_8);
  puVar12[0x3a] = &PTR_FUN_710523d9a8;
  puVar13 = (undefined8 *)
            FUN_710392e290(0x10,0x20,pppplVar18,ppppbVar22,param_5,param_6,param_7,param_8);
  uVar15 = extraout_x1_13;
  if (puVar13 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_a0 = (long ********)((ulong)local_a0 & 0xffffffff00000000);
      local_1d0 = (undefined **)&SUB_00000020;
      pppplVar18 = (long ****)&local_1d0;
      auVar40 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_a0);
      uVar15 = auVar40._8_8_;
      if (((auVar40._0_8_ & 1) != 0) &&
         (puVar13 = (undefined8 *)
                    FUN_710392e290(0x10,0x20,pppplVar18,ppppbVar22,param_5,param_6,param_7,param_8),
         uVar15 = extraout_x1_14, puVar13 != (undefined8 *)0x0)) goto LAB_7101dee344;
    }
    puVar13 = (undefined8 *)0x0;
  }
LAB_7101dee344:
  puVar13[2] = 0;
  puVar13[3] = 0;
  *puVar13 = 0;
  puVar13[1] = 0;
  puVar12[0x3b] = puVar13;
  puVar12[0x3c] = 0x52ffff0000000000;
  FUN_7103776290(puVar12 + 0x3d,uVar15,pppplVar18,ppppbVar22,param_5,param_6,param_7,param_8);
  puVar12[0x3f] = &PTR_FUN_710523d9a8;
  puVar13 = (undefined8 *)
            FUN_710392e290(0x10,0x20,pppplVar18,ppppbVar22,param_5,param_6,param_7,param_8);
  uVar15 = extraout_x1_15;
  if (puVar13 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_a0 = (long ********)((ulong)local_a0 & 0xffffffff00000000);
      local_1d0 = (undefined **)&SUB_00000020;
      pppplVar18 = (long ****)&local_1d0;
      auVar40 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_a0);
      uVar15 = auVar40._8_8_;
      if (((auVar40._0_8_ & 1) != 0) &&
         (puVar13 = (undefined8 *)
                    FUN_710392e290(0x10,0x20,pppplVar18,ppppbVar22,param_5,param_6,param_7,param_8),
         uVar15 = extraout_x1_16, puVar13 != (undefined8 *)0x0)) goto LAB_7101dee3b4;
    }
    puVar13 = (undefined8 *)0x0;
  }
LAB_7101dee3b4:
  puVar13[2] = 0;
  puVar13[3] = 0;
  *puVar13 = 0;
  puVar13[1] = 0;
  puVar12[0x40] = puVar13;
  puVar12[0x41] = 0x52ffff0000000000;
  FUN_7103776290(puVar12 + 0x42,uVar15,pppplVar18,ppppbVar22,param_5,param_6,param_7,param_8);
  puVar12[0x44] = &PTR_FUN_710523d9a8;
  puVar13 = (undefined8 *)
            FUN_710392e290(0x10,0x20,pppplVar18,ppppbVar22,param_5,param_6,param_7,param_8);
  uVar15 = extraout_x1_17;
  if (puVar13 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_a0 = (long ********)((ulong)local_a0 & 0xffffffff00000000);
      local_1d0 = (undefined **)&SUB_00000020;
      pppplVar18 = (long ****)&local_1d0;
      auVar40 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_a0);
      uVar15 = auVar40._8_8_;
      if (((auVar40._0_8_ & 1) != 0) &&
         (puVar13 = (undefined8 *)
                    FUN_710392e290(0x10,0x20,pppplVar18,ppppbVar22,param_5,param_6,param_7,param_8),
         uVar15 = extraout_x1_18, puVar13 != (undefined8 *)0x0)) goto LAB_7101dee424;
    }
    puVar13 = (undefined8 *)0x0;
  }
LAB_7101dee424:
  puVar13[2] = 0;
  puVar13[3] = 0;
  *puVar13 = 0;
  puVar13[1] = 0;
  puVar12[0x45] = puVar13;
  puVar12[0x46] = 0x52ffff0000000000;
  FUN_7103776290(puVar12 + 0x47,uVar15,pppplVar18,ppppbVar22,param_5,param_6,param_7,param_8);
  puVar12[0x49] = &PTR_FUN_710523d9a8;
  puVar13 = (undefined8 *)
            FUN_710392e290(0x10,0x20,pppplVar18,ppppbVar22,param_5,param_6,param_7,param_8);
  uVar15 = extraout_x1_19;
  if (puVar13 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_a0 = (long ********)((ulong)local_a0 & 0xffffffff00000000);
      local_1d0 = (undefined **)&SUB_00000020;
      pppplVar18 = (long ****)&local_1d0;
      auVar40 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_a0);
      uVar15 = auVar40._8_8_;
      if (((auVar40._0_8_ & 1) != 0) &&
         (puVar13 = (undefined8 *)
                    FUN_710392e290(0x10,0x20,pppplVar18,ppppbVar22,param_5,param_6,param_7,param_8),
         uVar15 = extraout_x1_20, puVar13 != (undefined8 *)0x0)) goto LAB_7101dee494;
    }
    puVar13 = (undefined8 *)0x0;
  }
LAB_7101dee494:
  puVar13[2] = 0;
  puVar13[3] = 0;
  *puVar13 = 0;
  puVar13[1] = 0;
  puVar12[0x4a] = puVar13;
  puVar12[0x4b] = 0x52ffff0000000000;
  FUN_7103776290(puVar12 + 0x4c,uVar15,pppplVar18,ppppbVar22,param_5,param_6,param_7,param_8);
  puVar12[0x4e] = &PTR_FUN_710523d9a8;
  puVar13 = (undefined8 *)
            FUN_710392e290(0x10,0x20,pppplVar18,ppppbVar22,param_5,param_6,param_7,param_8);
  uVar15 = extraout_x1_21;
  if (puVar13 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_a0 = (long ********)((ulong)local_a0 & 0xffffffff00000000);
      local_1d0 = (undefined **)&SUB_00000020;
      pppplVar18 = (long ****)&local_1d0;
      auVar40 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_a0);
      uVar15 = auVar40._8_8_;
      if (((auVar40._0_8_ & 1) != 0) &&
         (puVar13 = (undefined8 *)
                    FUN_710392e290(0x10,0x20,pppplVar18,ppppbVar22,param_5,param_6,param_7,param_8),
         uVar15 = extraout_x1_22, puVar13 != (undefined8 *)0x0)) goto LAB_7101dee504;
    }
    puVar13 = (undefined8 *)0x0;
  }
LAB_7101dee504:
  puVar13[2] = 0;
  puVar13[3] = 0;
  *puVar13 = 0;
  puVar13[1] = 0;
  puVar12[0x4f] = puVar13;
  puVar12[0x50] = 0x52ffff0000000000;
  FUN_7103776290(puVar12 + 0x51,uVar15,pppplVar18,ppppbVar22,param_5,param_6,param_7,param_8);
  puVar12[0x53] = &PTR_FUN_710523d9a8;
  puVar13 = (undefined8 *)
            FUN_710392e290(0x10,0x20,pppplVar18,ppppbVar22,param_5,param_6,param_7,param_8);
  uVar15 = extraout_x1_23;
  if (puVar13 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_a0 = (long ********)((ulong)local_a0 & 0xffffffff00000000);
      local_1d0 = (undefined **)&SUB_00000020;
      pppplVar18 = (long ****)&local_1d0;
      auVar40 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_a0);
      uVar15 = auVar40._8_8_;
      if (((auVar40._0_8_ & 1) != 0) &&
         (puVar13 = (undefined8 *)
                    FUN_710392e290(0x10,0x20,pppplVar18,ppppbVar22,param_5,param_6,param_7,param_8),
         uVar15 = extraout_x1_24, puVar13 != (undefined8 *)0x0)) goto LAB_7101dee574;
    }
    puVar13 = (undefined8 *)0x0;
  }
LAB_7101dee574:
  puVar13[2] = 0;
  puVar13[3] = 0;
  *puVar13 = 0;
  puVar13[1] = 0;
  puVar12[0x54] = puVar13;
  puVar12[0x55] = 0x52ffff0000000000;
  FUN_7103776290(puVar12 + 0x56,uVar15,pppplVar18,ppppbVar22,param_5,param_6,param_7,param_8);
  puVar12[0x58] = &PTR_FUN_710523d9a8;
  puVar13 = (undefined8 *)
            FUN_710392e290(0x10,0x20,pppplVar18,ppppbVar22,param_5,param_6,param_7,param_8);
  uVar15 = extraout_x1_25;
  if (puVar13 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_a0 = (long ********)((ulong)local_a0 & 0xffffffff00000000);
      local_1d0 = (undefined **)&SUB_00000020;
      pppplVar18 = (long ****)&local_1d0;
      auVar40 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_a0);
      uVar15 = auVar40._8_8_;
      if (((auVar40._0_8_ & 1) != 0) &&
         (puVar13 = (undefined8 *)
                    FUN_710392e290(0x10,0x20,pppplVar18,ppppbVar22,param_5,param_6,param_7,param_8),
         uVar15 = extraout_x1_26, puVar13 != (undefined8 *)0x0)) goto LAB_7101dee5e4;
    }
    puVar13 = (undefined8 *)0x0;
  }
LAB_7101dee5e4:
  puVar13[2] = 0;
  puVar13[3] = 0;
  *puVar13 = 0;
  puVar13[1] = 0;
  puVar12[0x59] = puVar13;
  puVar12[0x5a] = 0x52ffff0000000000;
  FUN_7103776290(puVar12 + 0x5b,uVar15,pppplVar18,ppppbVar22,param_5,param_6,param_7,param_8);
  puVar12[0x5d] = &PTR_FUN_710523d9a8;
  puVar13 = (undefined8 *)
            FUN_710392e290(0x10,0x20,pppplVar18,ppppbVar22,param_5,param_6,param_7,param_8);
  uVar15 = extraout_x1_27;
  if (puVar13 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_a0 = (long ********)((ulong)local_a0 & 0xffffffff00000000);
      local_1d0 = (undefined **)&SUB_00000020;
      pppplVar18 = (long ****)&local_1d0;
      auVar40 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_a0);
      uVar15 = auVar40._8_8_;
      if (((auVar40._0_8_ & 1) != 0) &&
         (puVar13 = (undefined8 *)
                    FUN_710392e290(0x10,0x20,pppplVar18,ppppbVar22,param_5,param_6,param_7,param_8),
         uVar15 = extraout_x1_28, puVar13 != (undefined8 *)0x0)) goto LAB_7101dee654;
    }
    puVar13 = (undefined8 *)0x0;
  }
LAB_7101dee654:
  puVar13[2] = 0;
  puVar13[3] = 0;
  *puVar13 = 0;
  puVar13[1] = 0;
  puVar12[0x5e] = puVar13;
  puVar12[0x5f] = 0x52ffff0000000000;
  FUN_7103776290(puVar12 + 0x60,uVar15,pppplVar18,ppppbVar22,param_5,param_6,param_7,param_8);
  puVar12[0x62] = &PTR_FUN_710523d9a8;
  puVar13 = (undefined8 *)
            FUN_710392e290(0x10,0x20,pppplVar18,ppppbVar22,param_5,param_6,param_7,param_8);
  uVar15 = extraout_x1_29;
  if (puVar13 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_a0 = (long ********)((ulong)local_a0 & 0xffffffff00000000);
      local_1d0 = (undefined **)&SUB_00000020;
      pppplVar18 = (long ****)&local_1d0;
      auVar40 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_a0);
      uVar15 = auVar40._8_8_;
      if (((auVar40._0_8_ & 1) != 0) &&
         (puVar13 = (undefined8 *)
                    FUN_710392e290(0x10,0x20,pppplVar18,ppppbVar22,param_5,param_6,param_7,param_8),
         uVar15 = extraout_x1_30, puVar13 != (undefined8 *)0x0)) goto LAB_7101dee6c4;
    }
    puVar13 = (undefined8 *)0x0;
  }
LAB_7101dee6c4:
  puVar13[2] = 0;
  puVar13[3] = 0;
  *puVar13 = 0;
  puVar13[1] = 0;
  puVar12[99] = puVar13;
  puVar12[100] = 0x52ffff0000000000;
  FUN_7103776290(puVar12 + 0x65,uVar15,pppplVar18,ppppbVar22,param_5,param_6,param_7,param_8);
  puVar12[0x67] = &PTR_FUN_710523d9a8;
  puVar13 = (undefined8 *)
            FUN_710392e290(0x10,0x20,pppplVar18,ppppbVar22,param_5,param_6,param_7,param_8);
  uVar15 = extraout_x1_31;
  if (puVar13 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_a0 = (long ********)((ulong)local_a0 & 0xffffffff00000000);
      local_1d0 = (undefined **)&SUB_00000020;
      pppplVar18 = (long ****)&local_1d0;
      auVar40 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_a0);
      uVar15 = auVar40._8_8_;
      if (((auVar40._0_8_ & 1) != 0) &&
         (puVar13 = (undefined8 *)
                    FUN_710392e290(0x10,0x20,pppplVar18,ppppbVar22,param_5,param_6,param_7,param_8),
         uVar15 = extraout_x1_32, puVar13 != (undefined8 *)0x0)) goto LAB_7101dee734;
    }
    puVar13 = (undefined8 *)0x0;
  }
LAB_7101dee734:
  puVar13[2] = 0;
  puVar13[3] = 0;
  *puVar13 = 0;
  puVar13[1] = 0;
  puVar12[0x68] = puVar13;
  puVar12[0x69] = 0x52ffff0000000000;
  puVar12[0x6a] = 0;
  *(undefined1 *)(puVar12 + 0x6b) = 0;
  *(undefined1 *)((long)puVar12 + 0x35a) = 0;
  FUN_7103776290(puVar12 + 0x6c,uVar15,pppplVar18,ppppbVar22,param_5,param_6,param_7,param_8);
  puVar12[0x6e] = &PTR_FUN_710523d9a8;
  puVar13 = (undefined8 *)
            FUN_710392e290(0x10,0x20,pppplVar18,ppppbVar22,param_5,param_6,param_7,param_8);
  if (puVar13 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_a0 = (long ********)((ulong)local_a0 & 0xffffffff00000000);
      local_1d0 = (undefined **)&SUB_00000020;
      pppplVar18 = (long ****)&local_1d0;
      uVar10 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_a0);
      if (((uVar10 & 1) != 0) &&
         (puVar13 = (undefined8 *)
                    FUN_710392e290(0x10,0x20,pppplVar18,ppppbVar22,param_5,param_6,param_7,param_8),
         puVar13 != (undefined8 *)0x0)) goto LAB_7101dee7b0;
    }
    puVar13 = (undefined8 *)0x0;
  }
LAB_7101dee7b0:
  puVar13[2] = 0;
  puVar13[3] = 0;
  *puVar13 = 0;
  puVar13[1] = 0;
  puVar12[0x6f] = puVar13;
  puVar12[0x70] = &PTR_FUN_710523d9a8;
  puVar13 = (undefined8 *)
            FUN_710392e290(0x10,0x20,pppplVar18,ppppbVar22,param_5,param_6,param_7,param_8);
  if (puVar13 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_a0 = (long ********)((ulong)local_a0 & 0xffffffff00000000);
      local_1d0 = (undefined **)&SUB_00000020;
      pppplVar18 = (long ****)&local_1d0;
      uVar10 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_a0);
      if (((uVar10 & 1) != 0) &&
         (puVar13 = (undefined8 *)
                    FUN_710392e290(0x10,0x20,pppplVar18,ppppbVar22,param_5,param_6,param_7,param_8),
         puVar13 != (undefined8 *)0x0)) goto LAB_7101dee814;
    }
    puVar13 = (undefined8 *)0x0;
  }
LAB_7101dee814:
  puVar13[2] = 0;
  puVar13[3] = 0;
  *puVar13 = 0;
  puVar13[1] = 0;
  puVar12[0x71] = puVar13;
  puVar12[0x72] = &PTR_FUN_710523d9a8;
  puVar13 = (undefined8 *)
            FUN_710392e290(0x10,0x20,pppplVar18,ppppbVar22,param_5,param_6,param_7,param_8);
  if (puVar13 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_a0 = (long ********)((ulong)local_a0 & 0xffffffff00000000);
      local_1d0 = (undefined **)&SUB_00000020;
      pppplVar18 = (long ****)&local_1d0;
      uVar10 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_a0);
      if (((uVar10 & 1) != 0) &&
         (puVar13 = (undefined8 *)
                    FUN_710392e290(0x10,0x20,pppplVar18,ppppbVar22,param_5,param_6,param_7,param_8),
         puVar13 != (undefined8 *)0x0)) goto LAB_7101dee878;
    }
    puVar13 = (undefined8 *)0x0;
  }
LAB_7101dee878:
  puVar13[2] = 0;
  puVar13[3] = 0;
  *puVar13 = 0;
  puVar13[1] = 0;
  puVar12[0x73] = puVar13;
  puVar12[0x79] = 0;
  puVar12[0x78] = 0;
  puVar12[0x77] = 0;
  puVar12[0x76] = 0;
  puVar12[0x75] = 0;
  puVar12[0x74] = &PTR_FUN_710523d9a8;
  puVar13 = (undefined8 *)
            FUN_710392e290(0x10,0x20,pppplVar18,ppppbVar22,param_5,param_6,param_7,param_8);
  if (puVar13 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_a0 = (long ********)((ulong)local_a0 & 0xffffffff00000000);
      local_1d0 = (undefined **)&SUB_00000020;
      pppplVar18 = (long ****)&local_1d0;
      uVar10 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_a0);
      if (((uVar10 & 1) != 0) &&
         (puVar13 = (undefined8 *)
                    FUN_710392e290(0x10,0x20,pppplVar18,ppppbVar22,param_5,param_6,param_7,param_8),
         puVar13 != (undefined8 *)0x0)) goto LAB_7101dee8f0;
    }
    puVar13 = (undefined8 *)0x0;
  }
LAB_7101dee8f0:
  puVar13[2] = 0;
  puVar13[3] = 0;
  *puVar13 = 0;
  puVar13[1] = 0;
  puVar12[0x75] = puVar13;
  puVar12[0x76] = &PTR_FUN_710523d9a8;
  puVar13 = (undefined8 *)
            FUN_710392e290(0x10,0x20,pppplVar18,ppppbVar22,param_5,param_6,param_7,param_8);
  if (puVar13 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_a0 = (long ********)((ulong)local_a0 & 0xffffffff00000000);
      local_1d0 = (undefined **)&SUB_00000020;
      pppplVar18 = (long ****)&local_1d0;
      uVar10 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_a0);
      if (((uVar10 & 1) != 0) &&
         (puVar13 = (undefined8 *)
                    FUN_710392e290(0x10,0x20,pppplVar18,ppppbVar22,param_5,param_6,param_7,param_8),
         puVar13 != (undefined8 *)0x0)) goto LAB_7101dee954;
    }
    puVar13 = (undefined8 *)0x0;
  }
LAB_7101dee954:
  puVar13[2] = 0;
  puVar13[3] = 0;
  *puVar13 = 0;
  puVar13[1] = 0;
  puVar12[0x77] = puVar13;
  puVar12[0x78] = &PTR_FUN_710523d9a8;
  puVar13 = (undefined8 *)
            FUN_710392e290(0x10,0x20,pppplVar18,ppppbVar22,param_5,param_6,param_7,param_8);
  if (puVar13 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_a0 = (long ********)((ulong)local_a0 & 0xffffffff00000000);
      local_1d0 = (undefined **)&SUB_00000020;
      pppplVar18 = (long ****)&local_1d0;
      uVar10 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_a0);
      if (((uVar10 & 1) != 0) &&
         (puVar13 = (undefined8 *)
                    FUN_710392e290(0x10,0x20,pppplVar18,ppppbVar22,param_5,param_6,param_7,param_8),
         puVar13 != (undefined8 *)0x0)) goto LAB_7101dee9b8;
    }
    puVar13 = (undefined8 *)0x0;
  }
LAB_7101dee9b8:
  puVar13[2] = 0;
  puVar13[3] = 0;
  *puVar13 = 0;
  puVar13[1] = 0;
  puVar12[0x79] = puVar13;
  puVar12[0x7f] = 0;
  puVar12[0x7e] = 0;
  puVar12[0x7d] = 0;
  puVar12[0x7c] = 0;
  puVar12[0x7b] = 0;
  puVar12[0x7a] = &PTR_FUN_710523d9a8;
  puVar13 = (undefined8 *)
            FUN_710392e290(0x10,0x20,pppplVar18,ppppbVar22,param_5,param_6,param_7,param_8);
  if (puVar13 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_a0 = (long ********)((ulong)local_a0 & 0xffffffff00000000);
      local_1d0 = (undefined **)&SUB_00000020;
      pppplVar18 = (long ****)&local_1d0;
      uVar10 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_a0);
      if (((uVar10 & 1) != 0) &&
         (puVar13 = (undefined8 *)
                    FUN_710392e290(0x10,0x20,pppplVar18,ppppbVar22,param_5,param_6,param_7,param_8),
         puVar13 != (undefined8 *)0x0)) goto LAB_7101deea30;
    }
    puVar13 = (undefined8 *)0x0;
  }
LAB_7101deea30:
  puVar13[2] = 0;
  puVar13[3] = 0;
  *puVar13 = 0;
  puVar13[1] = 0;
  puVar12[0x7b] = puVar13;
  puVar12[0x7c] = &PTR_FUN_710523d9a8;
  puVar13 = (undefined8 *)
            FUN_710392e290(0x10,0x20,pppplVar18,ppppbVar22,param_5,param_6,param_7,param_8);
  if (puVar13 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_a0 = (long ********)((ulong)local_a0 & 0xffffffff00000000);
      local_1d0 = (undefined **)&SUB_00000020;
      pppplVar18 = (long ****)&local_1d0;
      uVar10 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_a0);
      if (((uVar10 & 1) != 0) &&
         (puVar13 = (undefined8 *)
                    FUN_710392e290(0x10,0x20,pppplVar18,ppppbVar22,param_5,param_6,param_7,param_8),
         puVar13 != (undefined8 *)0x0)) goto LAB_7101deea94;
    }
    puVar13 = (undefined8 *)0x0;
  }
LAB_7101deea94:
  puVar13[2] = 0;
  puVar13[3] = 0;
  *puVar13 = 0;
  puVar13[1] = 0;
  puVar12[0x7d] = puVar13;
  puVar12[0x7e] = &PTR_FUN_710523d9a8;
  puVar13 = (undefined8 *)
            FUN_710392e290(0x10,0x20,pppplVar18,ppppbVar22,param_5,param_6,param_7,param_8);
  uVar15 = extraout_x1_33;
  if (puVar13 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_a0 = (long ********)((ulong)local_a0 & 0xffffffff00000000);
      local_1d0 = (undefined **)&SUB_00000020;
      pppplVar18 = (long ****)&local_1d0;
      auVar40 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_a0);
      uVar15 = auVar40._8_8_;
      if (((auVar40._0_8_ & 1) != 0) &&
         (puVar13 = (undefined8 *)
                    FUN_710392e290(0x10,0x20,pppplVar18,ppppbVar22,param_5,param_6,param_7,param_8),
         uVar15 = extraout_x1_34, puVar13 != (undefined8 *)0x0)) goto LAB_7101deeaf8;
    }
    puVar13 = (undefined8 *)0x0;
  }
LAB_7101deeaf8:
  puVar13[2] = 0;
  puVar13[3] = 0;
  *puVar13 = 0;
  puVar13[1] = 0;
  *(undefined2 *)(puVar12 + 0x80) = 0xffff;
  puVar12[0x7f] = puVar13;
  puVar12[0x81] = 0x71ffff0000000000;
  *(undefined1 *)(puVar12 + 0x82) = 0;
  puVar12[0x83] = uVar38;
  puVar12[0x86] = 0;
  puVar12[0x85] = 0;
  puVar12[0x84] = 0;
  FUN_7103776290(puVar12 + 0x87,uVar15,pppplVar18,ppppbVar22,param_5,param_6,param_7,param_8);
  puVar12[0x89] = &PTR_FUN_710523d9a8;
  puVar13 = (undefined8 *)
            FUN_710392e290(0x10,0x20,pppplVar18,ppppbVar22,param_5,param_6,param_7,param_8);
  if (puVar13 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_a0 = (long ********)((ulong)local_a0 & 0xffffffff00000000);
      local_1d0 = (undefined **)&SUB_00000020;
      pppplVar18 = (long ****)&local_1d0;
      uVar10 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_a0);
      if (((uVar10 & 1) != 0) &&
         (puVar13 = (undefined8 *)
                    FUN_710392e290(0x10,0x20,pppplVar18,ppppbVar22,param_5,param_6,param_7,param_8),
         puVar13 != (undefined8 *)0x0)) goto LAB_7101deeb8c;
    }
    puVar13 = (undefined8 *)0x0;
  }
LAB_7101deeb8c:
  puVar13[2] = 0;
  puVar13[3] = 0;
  *puVar13 = 0;
  puVar13[1] = 0;
  puVar12[0x8a] = puVar13;
  puVar12[0x94] = 0;
  puVar12[0x93] = 0;
  puVar12[0x92] = 0;
  puVar12[0x91] = 0;
  puVar12[0x90] = 0;
  puVar12[0x8f] = 0;
  puVar12[0x8e] = 0;
  puVar12[0x8d] = 0;
  puVar12[0x8c] = 0;
  puVar12[0x8b] = &PTR_FUN_710523d9a8;
  puVar13 = (undefined8 *)
            FUN_710392e290(0x10,0x20,pppplVar18,ppppbVar22,param_5,param_6,param_7,param_8);
  if (puVar13 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_a0 = (long ********)((ulong)local_a0 & 0xffffffff00000000);
      local_1d0 = (undefined **)&SUB_00000020;
      pppplVar18 = (long ****)&local_1d0;
      uVar10 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_a0);
      if (((uVar10 & 1) != 0) &&
         (puVar13 = (undefined8 *)
                    FUN_710392e290(0x10,0x20,pppplVar18,ppppbVar22,param_5,param_6,param_7,param_8),
         puVar13 != (undefined8 *)0x0)) goto LAB_7101deec14;
    }
    puVar13 = (undefined8 *)0x0;
  }
LAB_7101deec14:
  puVar13[2] = 0;
  puVar13[3] = 0;
  *puVar13 = 0;
  puVar13[1] = 0;
  puVar12[0x8c] = puVar13;
  puVar12[0x8d] = &PTR_FUN_710523d9a8;
  puVar13 = (undefined8 *)
            FUN_710392e290(0x10,0x20,pppplVar18,ppppbVar22,param_5,param_6,param_7,param_8);
  if (puVar13 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_a0 = (long ********)((ulong)local_a0 & 0xffffffff00000000);
      local_1d0 = (undefined **)&SUB_00000020;
      pppplVar18 = (long ****)&local_1d0;
      uVar10 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_a0);
      if (((uVar10 & 1) != 0) &&
         (puVar13 = (undefined8 *)
                    FUN_710392e290(0x10,0x20,pppplVar18,ppppbVar22,param_5,param_6,param_7,param_8),
         puVar13 != (undefined8 *)0x0)) goto LAB_7101deec78;
    }
    puVar13 = (undefined8 *)0x0;
  }
LAB_7101deec78:
  puVar13[2] = 0;
  puVar13[3] = 0;
  *puVar13 = 0;
  puVar13[1] = 0;
  puVar12[0x8e] = puVar13;
  puVar12[0x8f] = &PTR_FUN_710523d9a8;
  puVar13 = (undefined8 *)
            FUN_710392e290(0x10,0x20,pppplVar18,ppppbVar22,param_5,param_6,param_7,param_8);
  if (puVar13 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_a0 = (long ********)((ulong)local_a0 & 0xffffffff00000000);
      local_1d0 = (undefined **)&SUB_00000020;
      pppplVar18 = (long ****)&local_1d0;
      uVar10 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_a0);
      if (((uVar10 & 1) != 0) &&
         (puVar13 = (undefined8 *)
                    FUN_710392e290(0x10,0x20,pppplVar18,ppppbVar22,param_5,param_6,param_7,param_8),
         puVar13 != (undefined8 *)0x0)) goto LAB_7101deecdc;
    }
    puVar13 = (undefined8 *)0x0;
  }
LAB_7101deecdc:
  puVar13[2] = 0;
  puVar13[3] = 0;
  *puVar13 = 0;
  puVar13[1] = 0;
  puVar12[0x90] = puVar13;
  puVar12[0x91] = &PTR_FUN_710523d9a8;
  puVar13 = (undefined8 *)
            FUN_710392e290(0x10,0x20,pppplVar18,ppppbVar22,param_5,param_6,param_7,param_8);
  if (puVar13 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_a0 = (long ********)((ulong)local_a0 & 0xffffffff00000000);
      local_1d0 = (undefined **)&SUB_00000020;
      pppplVar18 = (long ****)&local_1d0;
      uVar10 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_a0);
      if (((uVar10 & 1) != 0) &&
         (puVar13 = (undefined8 *)
                    FUN_710392e290(0x10,0x20,pppplVar18,ppppbVar22,param_5,param_6,param_7,param_8),
         puVar13 != (undefined8 *)0x0)) goto LAB_7101deed40;
    }
    puVar13 = (undefined8 *)0x0;
  }
LAB_7101deed40:
  puVar13[2] = 0;
  puVar13[3] = 0;
  *puVar13 = 0;
  puVar13[1] = 0;
  puVar12[0x92] = puVar13;
  puVar12[0x93] = &PTR_FUN_710523d9a8;
  puVar13 = (undefined8 *)
            FUN_710392e290(0x10,0x20,pppplVar18,ppppbVar22,param_5,param_6,param_7,param_8);
  if (puVar13 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_a0 = (long ********)((ulong)local_a0 & 0xffffffff00000000);
      local_1d0 = (undefined **)&SUB_00000020;
      pppplVar18 = (long ****)&local_1d0;
      uVar10 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_a0);
      if (((uVar10 & 1) != 0) &&
         (puVar13 = (undefined8 *)
                    FUN_710392e290(0x10,0x20,pppplVar18,ppppbVar22,param_5,param_6,param_7,param_8),
         puVar13 != (undefined8 *)0x0)) goto LAB_7101deeda4;
    }
    puVar13 = (undefined8 *)0x0;
  }
LAB_7101deeda4:
  puVar13[2] = 0;
  puVar13[3] = 0;
  *puVar13 = 0;
  puVar13[1] = 0;
  puVar12[0x94] = puVar13;
  puVar12[0x9e] = 0;
  puVar12[0x9d] = 0;
  puVar12[0x9c] = 0;
  puVar12[0x9b] = 0;
  puVar12[0x9a] = 0;
  puVar12[0x99] = 0;
  puVar12[0x98] = 0;
  puVar12[0x97] = 0;
  puVar12[0x96] = 0;
  puVar12[0x95] = &PTR_FUN_710523d9a8;
  puVar13 = (undefined8 *)
            FUN_710392e290(0x10,0x20,pppplVar18,ppppbVar22,param_5,param_6,param_7,param_8);
  if (puVar13 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_a0 = (long ********)((ulong)local_a0 & 0xffffffff00000000);
      local_1d0 = (undefined **)&SUB_00000020;
      pppplVar18 = (long ****)&local_1d0;
      uVar10 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_a0);
      if (((uVar10 & 1) != 0) &&
         (puVar13 = (undefined8 *)
                    FUN_710392e290(0x10,0x20,pppplVar18,ppppbVar22,param_5,param_6,param_7,param_8),
         puVar13 != (undefined8 *)0x0)) goto LAB_7101deee2c;
    }
    puVar13 = (undefined8 *)0x0;
  }
LAB_7101deee2c:
  puVar13[2] = 0;
  puVar13[3] = 0;
  *puVar13 = 0;
  puVar13[1] = 0;
  puVar12[0x96] = puVar13;
  puVar12[0x97] = &PTR_FUN_710523d9a8;
  puVar13 = (undefined8 *)
            FUN_710392e290(0x10,0x20,pppplVar18,ppppbVar22,param_5,param_6,param_7,param_8);
  if (puVar13 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_a0 = (long ********)((ulong)local_a0 & 0xffffffff00000000);
      local_1d0 = (undefined **)&SUB_00000020;
      pppplVar18 = (long ****)&local_1d0;
      uVar10 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_a0);
      if (((uVar10 & 1) != 0) &&
         (puVar13 = (undefined8 *)
                    FUN_710392e290(0x10,0x20,pppplVar18,ppppbVar22,param_5,param_6,param_7,param_8),
         puVar13 != (undefined8 *)0x0)) goto LAB_7101deee90;
    }
    puVar13 = (undefined8 *)0x0;
  }
LAB_7101deee90:
  puVar13[2] = 0;
  puVar13[3] = 0;
  *puVar13 = 0;
  puVar13[1] = 0;
  puVar12[0x98] = puVar13;
  puVar12[0x99] = &PTR_FUN_710523d9a8;
  puVar13 = (undefined8 *)
            FUN_710392e290(0x10,0x20,pppplVar18,ppppbVar22,param_5,param_6,param_7,param_8);
  if (puVar13 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_a0 = (long ********)((ulong)local_a0 & 0xffffffff00000000);
      local_1d0 = (undefined **)&SUB_00000020;
      pppplVar18 = (long ****)&local_1d0;
      uVar10 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_a0);
      if (((uVar10 & 1) != 0) &&
         (puVar13 = (undefined8 *)
                    FUN_710392e290(0x10,0x20,pppplVar18,ppppbVar22,param_5,param_6,param_7,param_8),
         puVar13 != (undefined8 *)0x0)) goto LAB_7101deeef4;
    }
    puVar13 = (undefined8 *)0x0;
  }
LAB_7101deeef4:
  puVar13[2] = 0;
  puVar13[3] = 0;
  *puVar13 = 0;
  puVar13[1] = 0;
  puVar12[0x9a] = puVar13;
  puVar12[0x9b] = &PTR_FUN_710523d9a8;
  puVar13 = (undefined8 *)
            FUN_710392e290(0x10,0x20,pppplVar18,ppppbVar22,param_5,param_6,param_7,param_8);
  if (puVar13 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_a0 = (long ********)((ulong)local_a0 & 0xffffffff00000000);
      local_1d0 = (undefined **)&SUB_00000020;
      pppplVar18 = (long ****)&local_1d0;
      uVar10 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_a0);
      if (((uVar10 & 1) != 0) &&
         (puVar13 = (undefined8 *)
                    FUN_710392e290(0x10,0x20,pppplVar18,ppppbVar22,param_5,param_6,param_7,param_8),
         puVar13 != (undefined8 *)0x0)) goto LAB_7101deef58;
    }
    puVar13 = (undefined8 *)0x0;
  }
LAB_7101deef58:
  puVar13[2] = 0;
  puVar13[3] = 0;
  *puVar13 = 0;
  puVar13[1] = 0;
  puVar12[0x9c] = puVar13;
  puVar12[0x9d] = &PTR_FUN_710523d9a8;
  puVar13 = (undefined8 *)
            FUN_710392e290(0x10,0x20,pppplVar18,ppppbVar22,param_5,param_6,param_7,param_8);
  uVar38 = extraout_x1_35;
  if (puVar13 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_a0 = (long ********)((ulong)local_a0 & 0xffffffff00000000);
      local_1d0 = (undefined **)&SUB_00000020;
      pppplVar18 = (long ****)&local_1d0;
      auVar40 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_a0);
      uVar38 = auVar40._8_8_;
      if (((auVar40._0_8_ & 1) != 0) &&
         (puVar13 = (undefined8 *)
                    FUN_710392e290(0x10,0x20,pppplVar18,ppppbVar22,param_5,param_6,param_7,param_8),
         uVar38 = extraout_x1_36, puVar13 != (undefined8 *)0x0)) goto LAB_7101deefbc;
    }
    puVar13 = (undefined8 *)0x0;
  }
LAB_7101deefbc:
  puVar13[2] = 0;
  puVar13[3] = 0;
  *puVar13 = 0;
  puVar13[1] = 0;
  puVar12[0x9e] = puVar13;
  puVar12[0x9f] = 0;
  FUN_7103776290(puVar12 + 0xa0,uVar38,pppplVar18,ppppbVar22,param_5,param_6,param_7,param_8);
  *(undefined2 *)(puVar12 + 0xa2) = 0xffff;
  puVar12[10] = FUN_7101e031b0;
  puVar12[0xb] = 0;
  puVar12[0xc] = FUN_7101e033d0;
  puVar12[0xd] = 0;
  puVar12[0xe] = FUN_7101e03530;
  puVar12[0xf] = 0;
  puVar12[6] = FUN_7101e03110;
  puVar12[7] = 0;
  puVar12[8] = FUN_7101e03120;
  puVar12[9] = 0;
  puVar12[0x10] = FUN_7101e03110;
  puVar12[0x11] = 0;
  if (0x12 < *(uint *)((long)puVar12 + 0xdc)) goto LAB_7101df0830;
  *(undefined4 *)((long)puVar12 + (long)(int)*(uint *)((long)puVar12 + 0xdc) * 4 + 0x90) = 0;
  puVar11[0x10] = puVar12;
  puVar11[2] = &DAT_7105333600;
  *(undefined4 *)(puVar11 + 0xd) = DAT_7105333660;
  *(undefined4 *)((long)puVar11 + 0x6c) = DAT_7105333664;
  do {
    uVar37 = DAT_7105333650;
    cVar6 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(0x7105333650,0x10);
    if (bVar7) {
      DAT_7105333650 = 1;
      cVar6 = ExclusiveMonitorsStatus();
    }
  } while (cVar6 != '\0' || (uVar37 & 1) != 0);
  puVar11[9] = DAT_7105333648;
  DAT_7105333650 = 0;
  DAT_7105333648 = puVar11;
  FUN_71032caea0((long)puVar11,extraout_x1_37,pppplVar18,ppppbVar22,param_5,param_6,param_7,param_8)
  ;
  lVar35 = param_1[5];
  param_1[5] = puVar11;
  if (lVar35 != 0) {
    FUN_71032cad20(lVar35);
  }
  uVar38 = *param_1;
  puVar11 = (undefined8 *)
            FUN_710392e290(0x10,0x88,pppplVar18,ppppbVar22,param_5,param_6,param_7,param_8);
  if (puVar11 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_a0 = (long ********)((ulong)local_a0 & 0xffffffff00000000);
      local_1d0 = (undefined **)&DAT_00000088;
      pppplVar18 = (long ****)&local_1d0;
      uVar10 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_a0);
      if (((uVar10 & 1) != 0) &&
         (puVar11 = (undefined8 *)
                    FUN_710392e290(0x10,0x88,pppplVar18,ppppbVar22,param_5,param_6,param_7,param_8),
         puVar11 != (undefined8 *)0x0)) goto LAB_7101def108;
    }
    puVar11 = (undefined8 *)0x0;
  }
LAB_7101def108:
  *puVar11 = &PTR_FUN_71050b0e88;
  puVar11[1] = 0;
  puVar11[0xc] = 0;
  puVar11[0xd] = 0x1ffffffff;
  puVar11[2] = 0;
  puVar11[3] = 0;
  *(undefined1 *)(puVar11 + 0xb) = 0;
  puVar11[0xf] = uVar38;
  *(undefined1 *)(puVar11 + 0xe) = 1;
  puVar11[9] = 0;
  puVar11[10] = 0;
  puVar12 = (undefined8 *)
            FUN_710392e290(0x10,0x250,pppplVar18,ppppbVar22,param_5,param_6,param_7,param_8);
  if (puVar12 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_a0 = (long ********)((ulong)local_a0 & 0xffffffff00000000);
      local_1d0 = (undefined **)0x250;
      pppplVar18 = (long ****)&local_1d0;
      uVar10 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_a0);
      if (((uVar10 & 1) != 0) &&
         (puVar12 = (undefined8 *)
                    FUN_710392e290(0x10,0x250,pppplVar18,ppppbVar22,param_5,param_6,param_7,param_8)
         , puVar12 != (undefined8 *)0x0)) goto LAB_7101def190;
    }
    puVar12 = (undefined8 *)0x0;
  }
LAB_7101def190:
  *(undefined4 *)(puVar12 + 0x1d) = 0xffffffff;
  *puVar12 = uVar38;
  puVar12[1] = puVar12;
  *(undefined1 *)((long)puVar12 + 0xec) = 0;
  puVar12[6] = 0;
  puVar12[2] = 0;
  puVar12[3] = 0;
  puVar12[4] = 0;
  puVar12[5] = 0;
  puVar12[0x1b] = 0;
  puVar12[0x1c] = 0xffffffff;
  puVar12[0x19] = 0;
  puVar12[0x1a] = 0;
  puVar12[0x17] = 0;
  puVar12[0x18] = 0;
  puVar12[0x15] = 0;
  puVar12[0x16] = 0;
  puVar12[0x13] = 0;
  puVar12[0x14] = 0;
  puVar12[0x11] = 0;
  puVar12[0x12] = 0;
  puVar12[0xf] = 0;
  puVar12[0x10] = 0;
  puVar12[0xd] = 0;
  puVar12[0xe] = 0;
  puVar12[0xb] = 0;
  puVar12[0xc] = 0;
  puVar12[9] = 0;
  puVar12[10] = 0;
  puVar12[7] = 0;
  puVar12[8] = 0;
  puVar13 = (undefined8 *)
            FUN_710392e290(0x10,8,pppplVar18,ppppbVar22,param_5,param_6,param_7,param_8);
  uVar15 = extraout_x1_38;
  if (puVar13 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_a0 = (long ********)((ulong)local_a0 & 0xffffffff00000000);
      local_1d0 = (undefined **)&DAT_00000008;
      pppplVar18 = (long ****)&local_1d0;
      auVar40 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_a0);
      uVar15 = auVar40._8_8_;
      if (((auVar40._0_8_ & 1) != 0) &&
         (puVar13 = (undefined8 *)
                    FUN_710392e290(0x10,8,pppplVar18,ppppbVar22,param_5,param_6,param_7,param_8),
         uVar15 = extraout_x1_39, puVar13 != (undefined8 *)0x0)) goto LAB_7101def230;
    }
    puVar13 = (undefined8 *)0x0;
  }
LAB_7101def230:
  FUN_7103773200(puVar13,uVar15,pppplVar18,ppppbVar22,param_5,param_6,param_7,param_8);
  *(undefined2 *)(puVar12 + 0x21) = 0x900;
  puVar12[0x1e] = puVar13;
  puVar12[0x20] = uVar38;
  puVar12[0x27] = 0;
  puVar12[0x28] = 0;
  puVar12[0x22] = 0;
  *(undefined2 *)(puVar12 + 0x29) = 1;
  *(undefined1 *)((long)puVar12 + 0x14a) = 0;
  *(undefined1 *)(puVar12 + 0x2e) = 0;
  puVar12[0x25] = 0;
  puVar12[0x26] = 0;
  puVar12[0x23] = 0;
  puVar12[0x24] = 0;
  puVar12[0x2c] = 0;
  puVar12[0x2d] = 0;
  puVar12[0x2a] = 0;
  puVar12[0x2b] = 0;
  FUN_7101df1a60(puVar12 + 0x23,9,pppplVar18,ppppbVar22,param_5,param_6,param_7,param_8);
  puVar13 = (undefined8 *)puVar12[0x27];
  uVar10 = (ulong)*(byte *)((long)puVar12 + 0x109);
  uVar30 = (long)puVar13 - puVar12[0x26] >> 4;
  if (uVar30 < uVar10) {
    FUN_7101bb9cd0(puVar12 + 0x26,uVar10 - uVar30,pppplVar18,ppppbVar22,param_5,param_6,param_7,
                   param_8);
  }
  else if (uVar30 != uVar10) {
    puVar4 = (undefined8 *)(puVar12[0x26] + uVar10 * 0x10);
    while (puVar4 != puVar13) {
      puVar13 = puVar13 + -2;
      (**(code **)*puVar13)(puVar13);
    }
    puVar12[0x27] = puVar4;
  }
  *(undefined2 *)(puVar12 + 0x33) = 0x1009;
  puVar12[0x32] = uVar38;
  puVar12[0x39] = 0;
  puVar12[0x3a] = 0;
  puVar12[0x34] = 0;
  *(undefined2 *)(puVar12 + 0x3b) = 1;
  *(undefined1 *)((long)puVar12 + 0x1da) = 0;
  *(undefined1 *)(puVar12 + 0x40) = 0;
  puVar12[0x37] = 0;
  puVar12[0x38] = 0;
  puVar12[0x35] = 0;
  puVar12[0x36] = 0;
  puVar12[0x3e] = 0;
  puVar12[0x3f] = 0;
  puVar12[0x3c] = 0;
  puVar12[0x3d] = 0;
  FUN_7101df1a60(puVar12 + 0x35,0x10,pppplVar18,ppppbVar22,param_5,param_6,param_7,param_8);
  puVar13 = (undefined8 *)puVar12[0x39];
  uVar10 = (ulong)*(byte *)((long)puVar12 + 0x199);
  uVar30 = (long)puVar13 - puVar12[0x38] >> 4;
  if (uVar30 < uVar10) {
    FUN_7101bb9cd0(puVar12 + 0x38,uVar10 - uVar30,pppplVar18,ppppbVar22,param_5,param_6,param_7,
                   param_8);
    uVar38 = extraout_x1_41;
  }
  else {
    uVar38 = extraout_x1_40;
    if (uVar30 != uVar10) {
      puVar4 = (undefined8 *)(puVar12[0x38] + uVar10 * 0x10);
      while (puVar4 != puVar13) {
        puVar13 = puVar13 + -2;
        (**(code **)*puVar13)(puVar13);
        uVar38 = extraout_x1_42;
      }
      puVar12[0x39] = puVar4;
    }
  }
  puVar12[0x46] = 0;
  puVar12[0x45] = 0;
  puVar12[0x44] = 0;
  FUN_7103776290(puVar12 + 0x47,uVar38,pppplVar18,ppppbVar22,param_5,param_6,param_7,param_8);
  *(undefined1 *)((long)puVar12 + 0x24a) = 1;
  puVar12[8] = FUN_7101df1c60;
  puVar12[9] = 0;
  puVar12[0xc] = FUN_7101df1ee0;
  puVar12[0xd] = 0;
  puVar12[0xe] = FUN_7101df22f0;
  puVar12[0xf] = 0;
  *(undefined2 *)(puVar12 + 0x49) = 0;
  puVar12[6] = FUN_7101df1c50;
  puVar12[7] = 0;
  puVar12[10] = FUN_7101df1cc0;
  puVar12[0xb] = 0;
  puVar12[0x10] = FUN_7101df1c50;
  puVar12[0x11] = 0;
  if (0x12 < *(uint *)((long)puVar12 + 0xdc)) {
LAB_7101df0830:
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(undefined4 *)((long)puVar12 + (long)(int)*(uint *)((long)puVar12 + 0xdc) * 4 + 0x90) = 0;
  puVar11[0x10] = puVar12;
  puVar11[2] = &DAT_7105333600;
  *(undefined4 *)(puVar11 + 0xd) = DAT_7105333660;
  *(undefined4 *)((long)puVar11 + 0x6c) = DAT_7105333664;
  do {
    uVar37 = DAT_7105333650;
    cVar6 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(0x7105333650,0x10);
    if (bVar7) {
      DAT_7105333650 = 1;
      cVar6 = ExclusiveMonitorsStatus();
    }
  } while (cVar6 != '\0' || (uVar37 & 1) != 0);
  puVar11[9] = DAT_7105333648;
  DAT_7105333650 = 0;
  DAT_7105333648 = puVar11;
  FUN_71032caea0((long)puVar11,extraout_x1_43,pppplVar18,ppppbVar22,param_5,param_6,param_7,param_8)
  ;
  lVar35 = param_1[6];
  param_1[6] = puVar11;
  if (lVar35 != 0) {
    FUN_71032cad20(lVar35);
  }
  lVar35 = **(long **)*puVar1;
  switch(*param_2) {
  case 0:
  case 2:
  case 3:
  case 4:
  case 5:
  case 8:
  case 9:
  case 10:
  case 0xd:
    *(undefined4 *)(*(long *)(lVar35 + 0x600) + 0xdc) = 0x80;
    *(undefined4 *)(*(long *)(lVar35 + 0x600) + 0xe0) = 0x10;
    break;
  default:
  }
  plVar26 = (long *)(lVar35 + 0x600);
  *(undefined4 *)(*plVar26 + 0x20) = 0x10;
  *(undefined4 *)(*plVar26 + 0x1c) = 0x80;
  *(undefined4 *)(*plVar26 + 0x18) = 0x500;
  *(undefined4 *)(*plVar26 + 0x24) = 0x200;
  puVar11 = *(undefined8 **)(param_1[5] + 0x80);
  cVar6 = *(char *)((long)param_2 + 0x12);
  puVar12 = puVar11 + 0x1e;
  puVar19 = &DAT_71045459c0;
  ppppbVar22 = (byte ****)0x1;
  FUN_71032cbf30(puVar12,*(long *)*puVar11,(ulong *)&DAT_71045459c0,(byte ****)0x1,param_5,param_6,
                 param_7,param_8);
  FUN_71037760f0(**(long **)*puVar12,0);
  lVar27 = **(long **)*puVar12;
  *(undefined4 *)(*(long *)(lVar27 + 0x600) + 0x494) = 2;
  lVar35 = *(long *)(lVar27 + 0x608);
  lVar27 = *(long *)(lVar27 + 0x610);
  if (lVar35 != lVar27) {
    uVar10 = (lVar27 + -0x10) - lVar35;
    uVar37 = ((uint)(uVar10 >> 4) & 0xfffffff) + 1;
    if ((uVar37 & 3) != 0) {
      lVar32 = -((ulong)uVar37 & 3);
      do {
        plVar26 = (long *)(lVar35 + 8);
        lVar35 = lVar35 + 0x10;
        lVar32 = lVar32 + 1;
        *(undefined4 *)(*plVar26 + 0x494) = 2;
      } while (lVar32 != 0);
    }
    if (0x2f < uVar10) {
      do {
        *(undefined4 *)(*(long *)(lVar35 + 8) + 0x494) = 2;
        *(undefined4 *)(*(long *)(lVar35 + 0x18) + 0x494) = 2;
        *(undefined4 *)(*(long *)(lVar35 + 0x28) + 0x494) = 2;
        plVar26 = (long *)(lVar35 + 0x38);
        lVar35 = lVar35 + 0x40;
        *(undefined4 *)(*plVar26 + 0x494) = 2;
      } while (lVar27 != lVar35);
    }
  }
  lVar35 = *(long *)puVar11[0x1e];
  ppppbVar2 = (byte ****)(puVar11 + 0xa0);
  if (ppppbVar2 != (byte ****)(lVar35 + 8)) {
    *(undefined8 *)puVar11[0xa1] = **(undefined8 **)(lVar35 + 0x10);
    *(undefined8 *)(puVar11[0xa1] + 8) = *(undefined8 *)(*(long *)(lVar35 + 0x10) + 8);
    lVar27 = *(long *)(lVar35 + 0x10);
    lVar35 = puVar11[0xa1];
    if (lVar35 != lVar27) {
      **(undefined8 **)(lVar35 + 0x18) = **(undefined8 **)(lVar27 + 0x18);
      *(undefined8 *)(*(long *)(lVar35 + 0x18) + 8) = *(undefined8 *)(*(long *)(lVar27 + 0x18) + 8);
      *(undefined8 *)(*(long *)(lVar35 + 0x18) + 0x10) =
           *(undefined8 *)(*(long *)(lVar27 + 0x18) + 0x10);
      *(undefined8 *)(*(long *)(lVar35 + 0x18) + 0x18) =
           *(undefined8 *)(*(long *)(lVar27 + 0x18) + 0x18);
    }
  }
  lVar35 = **(long **)puVar11[0x1e];
  *(undefined4 *)(*(long *)(lVar35 + 0x600) + 0x10) = 0x220;
  *(undefined4 *)(*(long *)(lVar35 + 0x600) + 0x14) = 0x140;
  plVar26 = puVar11 + 0xa1;
  *(undefined8 *)puVar11[0x6d] = *(undefined8 *)*plVar26;
  *(undefined8 *)(puVar11[0x6d] + 8) = *(undefined8 *)(puVar11[0xa1] + 8);
  lVar27 = puVar11[0xa1];
  lVar35 = puVar11[0x6d];
  puVar12 = puVar11 + 0x6c;
  if (lVar35 != lVar27) {
    **(undefined8 **)(lVar35 + 0x18) = **(undefined8 **)(lVar27 + 0x18);
    *(undefined8 *)(*(long *)(lVar35 + 0x18) + 8) = *(undefined8 *)(*(long *)(lVar27 + 0x18) + 8);
    *(undefined8 *)(*(long *)(lVar35 + 0x18) + 0x10) =
         *(undefined8 *)(*(long *)(lVar27 + 0x18) + 0x10);
    *(undefined8 *)(*(long *)(lVar35 + 0x18) + 0x18) =
         *(undefined8 *)(*(long *)(lVar27 + 0x18) + 0x18);
  }
  FUN_7103776910(&local_1d0,(long)puVar12,(long ****)"set_txt_name_spirit",puVar19,ppppbVar22,
                 param_5,param_6,param_7,param_8);
  if (puVar11 + 0x6e != &local_1d0) {
    uVar38 = CONCAT53(uStack_1c5,CONCAT12(uStack_1c6,local_1c8));
    local_1c8 = 0;
    uStack_1c6 = 0;
    uStack_1c5 = 0;
    uVar10 = puVar11[0x6f];
    puVar11[0x6f] = uVar38;
    if (uVar10 != 0) {
      FUN_710392eb40(uVar10);
    }
  }
  uVar10 = CONCAT53(uStack_1c5,CONCAT12(uStack_1c6,local_1c8));
  local_1d0 = &PTR_FUN_710523d9a8;
  local_1c8 = 0;
  uStack_1c6 = 0;
  uStack_1c5 = 0;
  if (uVar10 != 0) {
    FUN_710392eb40(uVar10);
  }
  FUN_7103776910(&local_1d0,(long)puVar12,(long ****)"set_rep_spirit",puVar19,ppppbVar22,param_5,
                 param_6,param_7,param_8);
  if (puVar11 + 0x70 != &local_1d0) {
    uVar38 = CONCAT53(uStack_1c5,CONCAT12(uStack_1c6,local_1c8));
    local_1c8 = 0;
    uStack_1c6 = 0;
    uStack_1c5 = 0;
    uVar10 = puVar11[0x71];
    puVar11[0x71] = uVar38;
    if (uVar10 != 0) {
      FUN_710392eb40(uVar10);
    }
  }
  uVar10 = CONCAT53(uStack_1c5,CONCAT12(uStack_1c6,local_1c8));
  local_1d0 = &PTR_FUN_710523d9a8;
  local_1c8 = 0;
  uStack_1c6 = 0;
  uStack_1c5 = 0;
  if (uVar10 != 0) {
    FUN_710392eb40(uVar10);
  }
  FUN_7103776910(&local_1d0,(long)puVar12,(long ****)"set_rep_spirit_shadow",puVar19,ppppbVar22,
                 param_5,param_6,param_7,param_8);
  if (puVar11 + 0x72 != &local_1d0) {
    uVar38 = CONCAT53(uStack_1c5,CONCAT12(uStack_1c6,local_1c8));
    local_1c8 = 0;
    uStack_1c6 = 0;
    uStack_1c5 = 0;
    uVar10 = puVar11[0x73];
    puVar11[0x73] = uVar38;
    if (uVar10 != 0) {
      FUN_710392eb40(uVar10);
    }
  }
  uVar10 = CONCAT53(uStack_1c5,CONCAT12(uStack_1c6,local_1c8));
  local_1d0 = &PTR_FUN_710523d9a8;
  local_1c8 = 0;
  uStack_1c6 = 0;
  uStack_1c5 = 0;
  if (uVar10 != 0) {
    FUN_710392eb40(uVar10);
  }
  FUN_7103776640(&local_1d0,(long)puVar12,(byte ****)"set_parts_it_indiv",puVar19,ppppbVar22,param_5
                 ,param_6,param_7,param_8);
  FUN_7103776910(&local_a0,(long)&local_1d0,(long ****)"set_txt_help",puVar19,ppppbVar22,param_5,
                 param_6,param_7,param_8);
  uVar10 = local_98;
  if ((long *********)(puVar11 + 0x74) != &local_a0) {
    local_98 = 0;
    uVar30 = puVar11[0x75];
    puVar11[0x75] = uVar10;
    if (uVar30 != 0) {
      FUN_710392eb40(uVar30);
    }
  }
  uVar10 = local_98;
  local_a0 = (long ********)&PTR_FUN_710523d9a8;
  local_98 = 0;
  if (uVar10 != 0) {
    FUN_710392eb40(uVar10);
  }
  FUN_7103776910(&local_a0,(long)&local_1d0,(long ****)"set_pic_icon",puVar19,ppppbVar22,param_5,
                 param_6,param_7,param_8);
  uVar10 = local_98;
  if ((long *********)(puVar11 + 0x76) != &local_a0) {
    local_98 = 0;
    uVar30 = puVar11[0x77];
    puVar11[0x77] = uVar10;
    if (uVar30 != 0) {
      FUN_710392eb40(uVar30);
    }
  }
  uVar10 = local_98;
  local_a0 = (long ********)&PTR_FUN_710523d9a8;
  local_98 = 0;
  if (uVar10 != 0) {
    FUN_710392eb40(uVar10);
  }
  FUN_7103776910(&local_a0,(long)puVar12,(long ****)"set_txt_help_individual",puVar19,ppppbVar22,
                 param_5,param_6,param_7,param_8);
  uVar10 = local_98;
  if ((long *********)(puVar11 + 0x78) != &local_a0) {
    local_98 = 0;
    uVar30 = puVar11[0x79];
    puVar11[0x79] = uVar10;
    if (uVar30 != 0) {
      FUN_710392eb40(uVar30);
    }
  }
  uVar10 = local_98;
  local_a0 = (long ********)&PTR_FUN_710523d9a8;
  local_98 = 0;
  if (uVar10 != 0) {
    FUN_710392eb40(uVar10);
  }
  uVar10 = CONCAT53(uStack_1c5,CONCAT12(uStack_1c6,local_1c8));
  local_1d0 = &PTR_FUN_710523d988;
  local_1c8 = 0;
  uStack_1c6 = 0;
  uStack_1c5 = 0;
  if (uVar10 != 0) {
    uVar30 = *(ulong *)(uVar10 + 0x18);
    *(undefined ***)(uVar10 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar10 + 0x18) = 0;
    if (uVar30 != 0) {
      FUN_710392eb40(uVar30);
    }
    FUN_710392eb40(uVar10);
  }
  FUN_7103776640(&local_1d0,(long)puVar12,(byte ****)"set_parts_it_super",puVar19,ppppbVar22,param_5
                 ,param_6,param_7,param_8);
  FUN_7103776910(&local_a0,(long)&local_1d0,(long ****)"set_txt_help",puVar19,ppppbVar22,param_5,
                 param_6,param_7,param_8);
  uVar10 = local_98;
  if ((long *********)(puVar11 + 0x7a) != &local_a0) {
    local_98 = 0;
    uVar30 = puVar11[0x7b];
    puVar11[0x7b] = uVar10;
    if (uVar30 != 0) {
      FUN_710392eb40(uVar30);
    }
  }
  uVar10 = local_98;
  local_a0 = (long ********)&PTR_FUN_710523d9a8;
  local_98 = 0;
  if (uVar10 != 0) {
    FUN_710392eb40(uVar10);
  }
  FUN_7103776910(&local_a0,(long)&local_1d0,(long ****)"set_pic_icon",puVar19,ppppbVar22,param_5,
                 param_6,param_7,param_8);
  uVar10 = local_98;
  if ((long *********)(puVar11 + 0x7c) != &local_a0) {
    local_98 = 0;
    uVar30 = puVar11[0x7d];
    puVar11[0x7d] = uVar10;
    if (uVar30 != 0) {
      FUN_710392eb40(uVar30);
    }
  }
  uVar10 = local_98;
  local_a0 = (long ********)&PTR_FUN_710523d9a8;
  local_98 = 0;
  if (uVar10 != 0) {
    FUN_710392eb40(uVar10);
  }
  FUN_7103776910(&local_a0,(long)puVar12,(long ****)"set_txt_help_super",puVar19,ppppbVar22,param_5,
                 param_6,param_7,param_8);
  uVar10 = local_98;
  if ((long *********)(puVar11 + 0x7e) != &local_a0) {
    local_98 = 0;
    uVar30 = puVar11[0x7f];
    puVar11[0x7f] = uVar10;
    if (uVar30 != 0) {
      FUN_710392eb40(uVar30);
    }
  }
  uVar10 = local_98;
  local_a0 = (long ********)&PTR_FUN_710523d9a8;
  local_98 = 0;
  if (uVar10 != 0) {
    FUN_710392eb40(uVar10);
  }
  uVar10 = CONCAT53(uStack_1c5,CONCAT12(uStack_1c6,local_1c8));
  local_1d0 = &PTR_FUN_710523d988;
  local_1c8 = 0;
  uStack_1c6 = 0;
  uStack_1c5 = 0;
  if (uVar10 != 0) {
    uVar30 = *(ulong *)(uVar10 + 0x18);
    *(undefined ***)(uVar10 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar10 + 0x18) = 0;
    if (uVar30 != 0) {
      FUN_710392eb40(uVar30);
    }
    FUN_710392eb40(uVar10);
  }
  *(undefined8 *)puVar11[0x88] = *(undefined8 *)puVar11[0xa1];
  *(undefined8 *)(puVar11[0x88] + 8) = *(undefined8 *)(puVar11[0xa1] + 8);
  lVar27 = puVar11[0xa1];
  lVar35 = puVar11[0x88];
  puVar12 = puVar11 + 0x87;
  if (lVar35 != lVar27) {
    **(undefined8 **)(lVar35 + 0x18) = **(undefined8 **)(lVar27 + 0x18);
    *(undefined8 *)(*(long *)(lVar35 + 0x18) + 8) = *(undefined8 *)(*(long *)(lVar27 + 0x18) + 8);
    *(undefined8 *)(*(long *)(lVar35 + 0x18) + 0x10) =
         *(undefined8 *)(*(long *)(lVar27 + 0x18) + 0x10);
    *(undefined8 *)(*(long *)(lVar35 + 0x18) + 0x18) =
         *(undefined8 *)(*(long *)(lVar27 + 0x18) + 0x18);
  }
  FUN_7103776910(&local_1d0,(long)puVar12,(long ****)"set_txt_nowstyle",puVar19,ppppbVar22,param_5,
                 param_6,param_7,param_8);
  if (puVar11 + 0x89 != &local_1d0) {
    uVar38 = CONCAT53(uStack_1c5,CONCAT12(uStack_1c6,local_1c8));
    local_1c8 = 0;
    uStack_1c6 = 0;
    uStack_1c5 = 0;
    uVar10 = puVar11[0x8a];
    puVar11[0x8a] = uVar38;
    if (uVar10 != 0) {
      FUN_710392eb40(uVar10);
    }
  }
  uVar10 = CONCAT53(uStack_1c5,CONCAT12(uStack_1c6,local_1c8));
  local_1d0 = &PTR_FUN_710523d9a8;
  local_1c8 = 0;
  uStack_1c6 = 0;
  uStack_1c5 = 0;
  if (uVar10 != 0) {
    FUN_710392eb40(uVar10);
  }
  FUN_7101e03c80((long)puVar12,(long ****)"set_txt_up_%02d",(undefined1 *)(puVar11 + 0x8b),
                 ppppbVar22,param_5,param_6,param_7,param_8);
  ppuVar20 = (undefined **)(puVar11 + 0x95);
  FUN_7101e03c80((long)puVar12,(long ****)"set_txt_down_%02d",(undefined1 *)ppuVar20,ppppbVar22,
                 param_5,param_6,param_7,param_8);
  lVar35 = *(long *)(DAT_710532f730 + 8);
  uVar37 = 0;
  uVar10 = 0;
  do {
    ppuVar14 = (undefined **)FUN_71032a3bd0(*(long *)(lVar35 + 0x208),uVar37);
    uVar8 = FUN_71032a5750(*(long *)(lVar35 + 0x208),(ulong)ppuVar14);
    if ((((uVar8 != 0xffff) && ((short)uVar8 < 2000)) &&
        (lVar27 = *(long *)(*(long *)(DAT_710532f730 + 8) + 0x1d8),
        (uint)*(ushort *)(lVar27 + ((long)((ulong)uVar8 << 0x30) >> 0x2f) + 0x60) <
        (uint)((int)((ulong)(*(long *)(lVar27 + 0x28) - *(long *)(lVar27 + 0x20)) >> 6) *
              -0x33333333))) &&
       (*(short *)(*(long *)(*DAT_7105329f98 + 0x30) + (long)(short)uVar8 * 0x24 + 0x20) != 0)) {
      uVar29 = (uint)uVar10;
      if (0xe < (uVar29 & 0xff)) goto LAB_7101df0830;
      param_5 = (long ****)*puVar11;
      ppppbVar22 = ppppbVar2;
      FUN_7101e03e40((undefined ***)(puVar11 + (uVar10 & 0xff) * 5 + 0x1f),uVar29,ppuVar14,ppppbVar2
                     ,param_5,param_6,param_7,param_8);
      uVar10 = (ulong)(uVar29 + 1);
      ppuVar20 = ppuVar14;
    }
    uVar37 = uVar37 + 1;
  } while (uVar37 < 0xf);
  if (((uint)uVar10 & 0xff) < 0xf) {
    uVar30 = uVar10 & 0xff;
    pppuVar39 = (undefined ***)(puVar11 + uVar30 * 5 + 0x1f);
    do {
      param_5 = (long ****)*puVar11;
      ppuVar20 = (undefined **)0x52ffff0000000000;
      ppppbVar22 = ppppbVar2;
      FUN_7101e03e40(pppuVar39,(uint)uVar30,(undefined **)0x52ffff0000000000,ppppbVar2,param_5,
                     param_6,param_7,param_8);
      uVar30 = uVar30 + 1;
      pppuVar39 = pppuVar39 + 5;
    } while (uVar30 != 0xf);
    if ((uVar10 & 0xff) == 0) {
      lVar35 = *plVar26;
      pcVar16 = "view_school_off";
    }
    else {
      if (9 < ((uint)uVar10 & 0xff)) goto LAB_7101defc14;
      lVar35 = *plVar26;
      pcVar16 = "view_school_on_00";
    }
  }
  else {
LAB_7101defc14:
    lVar35 = *plVar26;
    pcVar16 = "view_school_on_01";
  }
  FUN_7103778300(0x3f800000,lVar35,(long)pcVar16);
  pcVar16 = "on_plt_menu_lyt_00";
  pcVar5 = "off_plt_menu_lyt_00";
  if (cVar6 != '\0') {
    pcVar5 = pcVar16;
  }
  FUN_7103778300(0x3f800000,*plVar26,(long)pcVar5);
  FUN_71037780e0(&local_1d0,(long)ppppbVar2,(long ****)&DAT_7104421055,ppuVar20,ppppbVar22,param_5,
                 param_6,param_7,param_8);
  plVar26 = (long *)CONCAT53(uStack_1c5,CONCAT12(uStack_1c6,local_1c8));
  plVar36 = (long *)plVar26[1];
  if (plVar36 == (long *)0x0) {
    local_1d0 = &PTR_FUN_710523d9e8;
    local_1c8 = 0;
    uStack_1c6 = 0;
    uStack_1c5 = 0;
    if (plVar26 != (long *)0x0) goto LAB_7101defd98;
  }
  else {
    if ((char)plVar26[2] != '\0') {
      plVar34 = *(long **)(*plVar26 + 0x80);
      plVar3 = (long *)(*plVar26 + 0x88);
      if (plVar34 != plVar3) {
        do {
          while( true ) {
            uVar10 = (**(code **)(*(long *)plVar34[0xd] + 0x148))();
            if (((uVar10 & 1) != 0) &&
               (uVar10 = (**(code **)(*plVar36 + 0x120))(plVar36,plVar34[0xd]), (uVar10 & 1) != 0))
            {
              (**(code **)(*(long *)plVar34[0xd] + 0x178))();
              (**(code **)(*(long *)plVar34[0xd] + 0x140))((long *)plVar34[0xd],0);
            }
            plVar25 = (long *)plVar34[1];
            if ((long *)plVar34[1] == (long *)0x0) break;
            do {
              plVar34 = plVar25;
              plVar25 = (long *)*plVar34;
            } while ((long *)*plVar34 != (long *)0x0);
LAB_7101defd4c:
            if (plVar34 == plVar3) goto LAB_7101defd64;
          }
          plVar25 = plVar34 + 2;
          plVar28 = (long *)*plVar25;
          if ((long *)*plVar28 != plVar34) {
            do {
              lVar35 = *plVar25;
              plVar25 = (long *)(lVar35 + 0x10);
              plVar34 = (long *)*plVar25;
            } while (*plVar34 != lVar35);
            goto LAB_7101defd4c;
          }
          plVar34 = plVar28;
        } while (plVar28 != plVar3);
LAB_7101defd64:
        plVar36 = (long *)plVar26[1];
      }
    }
    (**(code **)(*plVar36 + 0x188))(plVar36);
LAB_7101defd98:
    uStack_1c5 = 0;
    uStack_1c6 = 0;
    local_1c8 = 0;
    local_1d0 = &PTR_FUN_710523d9e8;
    FUN_710392eb40((ulong)plVar26);
  }
  puVar12 = *(undefined8 **)(param_1[6] + 0x80);
  cVar6 = *(char *)((long)param_2 + 0x12);
  uVar38 = 1;
  puVar13 = puVar12 + 0x1e;
  FUN_71032cbf30(puVar13,*(long *)*puVar12,(ulong *)&DAT_71045459a8,(byte ****)0x1,param_5,param_6,
                 param_7,param_8);
  FUN_71037760f0(**(long **)*puVar13,0);
  puVar11 = puVar12 + 0x47;
  lVar35 = *(long *)*puVar13;
  if (puVar11 != (undefined8 *)(lVar35 + 8)) {
    *(undefined8 *)puVar12[0x48] = **(undefined8 **)(lVar35 + 0x10);
    *(undefined8 *)(puVar12[0x48] + 8) = *(undefined8 *)(*(long *)(lVar35 + 0x10) + 8);
    lVar27 = *(long *)(lVar35 + 0x10);
    lVar35 = puVar12[0x48];
    if (lVar35 != lVar27) {
      **(undefined8 **)(lVar35 + 0x18) = **(undefined8 **)(lVar27 + 0x18);
      *(undefined8 *)(*(long *)(lVar35 + 0x18) + 8) = *(undefined8 *)(*(long *)(lVar27 + 0x18) + 8);
      *(undefined8 *)(*(long *)(lVar35 + 0x18) + 0x10) =
           *(undefined8 *)(*(long *)(lVar27 + 0x18) + 0x10);
      *(undefined8 *)(*(long *)(lVar35 + 0x18) + 0x18) =
           *(undefined8 *)(*(long *)(lVar27 + 0x18) + 0x18);
    }
  }
  lVar35 = **(long **)puVar12[0x1e];
  *(undefined4 *)(*(long *)(lVar35 + 0x600) + 0x10) = 0x20;
  *(undefined4 *)(*(long *)(lVar35 + 0x600) + 0x14) = 0x40;
  *(undefined4 *)(*(long *)(lVar35 + 0x600) + 0x18) = 0x40000;
  *(undefined4 *)(*(long *)(lVar35 + 0x600) + 0x1c) = 0x10;
  FUN_7101df2720((long)(puVar12 + 0x20),puVar11,(long ****)"selector_01",uVar38,param_5,param_6,
                 param_7,param_8);
  FUN_7101df2720((long)(puVar12 + 0x32),puVar11,(long ****)"selector_02",uVar38,param_5,param_6,
                 param_7,param_8);
  uStack_1c5 = 0;
  local_1c0 = 1;
  uStack_1bf = 0;
  local_1be = 0x10000;
  local_1ba = 1;
  local_1d0 = (undefined **)0x0;
  local_1c8 = 0x101;
  local_1b8 = &DAT_41f0000000000000;
  local_1b0 = 0;
  local_180 = (long *)0x0;
  local_150 = (long *)0x0;
  local_120 = (long *)0x0;
  local_f0 = (long *)0x0;
  local_c0 = (long *)0x0;
  local_b0 = 0;
  uStack_1c6 = 0;
  local_a0 = (long ********)&DAT_7105186040;
  local_80 = &local_a0;
  FUN_7101989a30((long *)&local_a0,alStack_170);
  if (&local_a0 == local_80) {
    ppppppplVar23 = (*local_80)[4];
LAB_7101deff64:
    (*(code *)ppppppplVar23)();
  }
  else if (local_80 != (long *********)0x0) {
    ppppppplVar23 = (*local_80)[5];
    goto LAB_7101deff64;
  }
  local_a0 = (long ********)&DAT_71051860d0;
  local_80 = &local_a0;
  FUN_7101989a30((long *)&local_a0,alStack_110);
  if (&local_a0 == local_80) {
    ppppppplVar23 = (*local_80)[4];
LAB_7101deffb0:
    (*(code *)ppppppplVar23)();
  }
  else if (local_80 != (long *********)0x0) {
    ppppppplVar23 = (*local_80)[5];
    goto LAB_7101deffb0;
  }
  plVar26 = puVar12 + 0x44;
  ppppbVar22 = (byte ****)&local_1d0;
  FUN_7103770b30(plVar26,puVar11,(long ****)"selector_00",ppppbVar22,param_5,param_6,param_7,param_8
                );
  FUN_71037717d0(plVar26,0x19,"set_btn_decide",ppppbVar22,param_5,param_6,param_7,param_8);
  lVar35 = puVar12[0x44];
  lVar27 = *(long *)(lVar35 + 0x1b8);
  if (lVar27 != 0) {
    lVar32 = lVar35 + 0x1b8;
    lVar31 = lVar32;
    lVar33 = lVar27;
    do {
      if (0x18 < *(int *)(lVar33 + 0x20)) {
        lVar31 = lVar33;
      }
      lVar33 = *(long *)(lVar33 + (ulong)(*(int *)(lVar33 + 0x20) < 0x19) * 8);
    } while (lVar33 != 0);
    if (((lVar31 != lVar32) && (*(int *)(lVar31 + 0x20) < 0x1a)) &&
       (plVar36 = *(long **)(lVar31 + 0x28), plVar36 != (long *)0x0)) {
      (**(code **)(*plVar36 + 0x208))(plVar36,1);
      (**(code **)(*plVar36 + 0x388))(plVar36,0,0);
      lVar35 = *plVar26;
      lVar27 = *(long *)(lVar35 + 0x1b8);
      lVar32 = lVar35 + 0x1b8;
    }
    lVar31 = lVar32;
    if (lVar27 != 0) {
      do {
        if (0x18 < *(int *)(lVar27 + 0x20)) {
          lVar31 = lVar27;
        }
        lVar27 = *(long *)(lVar27 + (ulong)(*(int *)(lVar27 + 0x20) < 0x19) * 8);
      } while (lVar27 != 0);
      if (((lVar31 != lVar32) && (*(int *)(lVar31 + 0x20) < 0x1a)) &&
         (plVar36 = *(long **)(lVar31 + 0x28), plVar36 != (long *)0x0)) {
        (**(code **)(*plVar36 + 0x1f8))(plVar36,1);
        (**(code **)(*plVar36 + 0x388))(plVar36,0,0);
        lVar35 = *plVar26;
      }
    }
  }
  ppuVar20 = (undefined **)0x6;
  ppppbVar22 = (byte ****)0x0;
  FUN_7103771930(lVar35,0x19,(long ****)0x6,(byte ****)0x0,param_5,param_6,param_7,param_8);
  if (alStack_e0 == local_c0) {
    (**(code **)(*local_c0 + 0x20))();
  }
  else if (local_c0 != (long *)0x0) {
    (**(code **)(*local_c0 + 0x28))();
  }
  if (alStack_110 == local_f0) {
    pcVar24 = *(code **)(*local_f0 + 0x20);
LAB_7101df0160:
    (*pcVar24)();
  }
  else if (local_f0 != (long *)0x0) {
    pcVar24 = *(code **)(*local_f0 + 0x28);
    goto LAB_7101df0160;
  }
  if (alStack_140 == local_120) {
    pcVar24 = *(code **)(*local_120 + 0x20);
LAB_7101df0190:
    (*pcVar24)();
  }
  else if (local_120 != (long *)0x0) {
    pcVar24 = *(code **)(*local_120 + 0x28);
    goto LAB_7101df0190;
  }
  if (alStack_170 == local_150) {
    pcVar24 = *(code **)(*local_150 + 0x20);
LAB_7101df01c0:
    (*pcVar24)();
  }
  else if (local_150 != (long *)0x0) {
    pcVar24 = *(code **)(*local_150 + 0x28);
    goto LAB_7101df01c0;
  }
  if (alStack_1a0 == local_180) {
    pcVar24 = *(code **)(*local_180 + 0x20);
LAB_7101df01f0:
    (*pcVar24)();
  }
  else if (local_180 != (long *)0x0) {
    pcVar24 = *(code **)(*local_180 + 0x28);
    goto LAB_7101df01f0;
  }
  FUN_7103776640(&local_a0,(long)puVar11,(byte ****)"set_btn_decide",ppuVar20,ppppbVar22,param_5,
                 param_6,param_7,param_8);
  FUN_710337d360(&local_a0,extraout_x1_44,ppuVar20,ppppbVar22,param_5,param_6,param_7,param_8);
  uVar10 = local_98;
  local_a0 = (long ********)&PTR_FUN_710523d988;
  local_98 = 0;
  if (uVar10 != 0) {
    uVar30 = *(ulong *)(uVar10 + 0x18);
    *(undefined ***)(uVar10 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar10 + 0x18) = 0;
    if (uVar30 != 0) {
      FUN_710392eb40(uVar30);
    }
    FUN_710392eb40(uVar10);
  }
  uStack_1c5 = 0;
  local_1c0 = 1;
  uStack_1bf = 0;
  plVar26 = puVar12 + 0x45;
  local_1be = 0x10100;
  ppppbVar22 = (byte ****)&local_1d0;
  local_1d0 = (undefined **)0x0;
  local_1c8 = 0x101;
  local_1ba = 1;
  local_1b8 = &DAT_41f0000000000000;
  local_1b0 = 0;
  local_180 = (long *)0x0;
  local_150 = (long *)0x0;
  local_120 = (long *)0x0;
  local_f0 = (long *)0x0;
  local_c0 = (long *)0x0;
  local_b0 = 0;
  uStack_1c6 = 1;
  FUN_7103770b30(plVar26,puVar11,(long ****)"selector_03",ppppbVar22,param_5,param_6,param_7,param_8
                );
  FUN_71037717d0(plVar26,0x1a,"set_part_help",ppppbVar22,param_5,param_6,param_7,param_8);
  lVar35 = puVar12[0x45];
  lVar27 = *(long *)(lVar35 + 0x1b8);
  if (lVar27 != 0) {
    lVar32 = lVar35 + 0x1b8;
    lVar31 = lVar32;
    lVar33 = lVar27;
    do {
      if (0x19 < *(int *)(lVar33 + 0x20)) {
        lVar31 = lVar33;
      }
      lVar33 = *(long *)(lVar33 + (ulong)(*(int *)(lVar33 + 0x20) < 0x1a) * 8);
    } while (lVar33 != 0);
    if (((lVar31 != lVar32) && (*(int *)(lVar31 + 0x20) < 0x1b)) &&
       (plVar36 = *(long **)(lVar31 + 0x28), plVar36 != (long *)0x0)) {
      (**(code **)(*plVar36 + 0x208))(plVar36,1);
      (**(code **)(*plVar36 + 0x388))(plVar36,0,0);
      lVar35 = *plVar26;
      lVar27 = *(long *)(lVar35 + 0x1b8);
      lVar32 = lVar35 + 0x1b8;
    }
    lVar31 = lVar32;
    if (lVar27 != 0) {
      do {
        if (0x19 < *(int *)(lVar27 + 0x20)) {
          lVar31 = lVar27;
        }
        lVar27 = *(long *)(lVar27 + (ulong)(*(int *)(lVar27 + 0x20) < 0x1a) * 8);
      } while (lVar27 != 0);
      if (((lVar31 != lVar32) && (*(int *)(lVar31 + 0x20) < 0x1b)) &&
         (plVar36 = *(long **)(lVar31 + 0x28), plVar36 != (long *)0x0)) {
        (**(code **)(*plVar36 + 0x1f8))(plVar36,1);
        (**(code **)(*plVar36 + 0x388))(plVar36,0,0);
        lVar35 = *plVar26;
      }
    }
  }
  ppppppppplVar21 = (long *********)&DAT_00000007;
  ppppbVar22 = (byte ****)0x0;
  FUN_7103771930(lVar35,0x1a,(long ****)&DAT_00000007,(byte ****)0x0,param_5,param_6,param_7,param_8
                );
  if (alStack_e0 == local_c0) {
    (**(code **)(*local_c0 + 0x20))();
  }
  else if (local_c0 != (long *)0x0) {
    (**(code **)(*local_c0 + 0x28))();
  }
  if (alStack_110 == local_f0) {
    pcVar24 = *(code **)(*local_f0 + 0x20);
LAB_7101df0430:
    (*pcVar24)();
  }
  else if (local_f0 != (long *)0x0) {
    pcVar24 = *(code **)(*local_f0 + 0x28);
    goto LAB_7101df0430;
  }
  if (alStack_140 == local_120) {
    pcVar24 = *(code **)(*local_120 + 0x20);
LAB_7101df0460:
    (*pcVar24)();
  }
  else if (local_120 != (long *)0x0) {
    pcVar24 = *(code **)(*local_120 + 0x28);
    goto LAB_7101df0460;
  }
  if (alStack_170 == local_150) {
    pcVar24 = *(code **)(*local_150 + 0x20);
LAB_7101df0490:
    (*pcVar24)();
  }
  else if (local_150 != (long *)0x0) {
    pcVar24 = *(code **)(*local_150 + 0x28);
    goto LAB_7101df0490;
  }
  if (alStack_1a0 == local_180) {
    pcVar24 = *(code **)(*local_180 + 0x20);
LAB_7101df04c0:
    (*pcVar24)();
  }
  else if (local_180 != (long *)0x0) {
    pcVar24 = *(code **)(*local_180 + 0x28);
    goto LAB_7101df04c0;
  }
  FUN_71037780e0(&local_1d0,(long)puVar11,(long ****)&DAT_7104421055,ppppppppplVar21,ppppbVar22,
                 param_5,param_6,param_7,param_8);
  plVar26 = (long *)CONCAT53(uStack_1c5,CONCAT12(uStack_1c6,local_1c8));
  plVar36 = (long *)plVar26[1];
  if (plVar36 == (long *)0x0) {
    local_1d0 = &PTR_FUN_710523d9e8;
    local_1c8 = 0;
    uStack_1c6 = 0;
    uStack_1c5 = 0;
    if (plVar26 == (long *)0x0) goto LAB_7101df05e8;
  }
  else {
    if ((char)plVar26[2] != '\0') {
      plVar34 = *(long **)(*plVar26 + 0x80);
      plVar3 = (long *)(*plVar26 + 0x88);
      if (plVar34 != plVar3) {
        do {
          while( true ) {
            uVar10 = (**(code **)(*(long *)plVar34[0xd] + 0x148))();
            if (((uVar10 & 1) != 0) &&
               (uVar10 = (**(code **)(*plVar36 + 0x120))(plVar36,plVar34[0xd]), (uVar10 & 1) != 0))
            {
              (**(code **)(*(long *)plVar34[0xd] + 0x178))();
              (**(code **)(*(long *)plVar34[0xd] + 0x140))((long *)plVar34[0xd],0);
            }
            plVar25 = (long *)plVar34[1];
            if ((long *)plVar34[1] == (long *)0x0) break;
            do {
              plVar34 = plVar25;
              plVar25 = (long *)*plVar34;
            } while ((long *)*plVar34 != (long *)0x0);
LAB_7101df0594:
            if (plVar34 == plVar3) goto LAB_7101df05ac;
          }
          plVar25 = plVar34 + 2;
          plVar28 = (long *)*plVar25;
          if ((long *)*plVar28 != plVar34) {
            do {
              lVar35 = *plVar25;
              plVar25 = (long *)(lVar35 + 0x10);
              plVar34 = (long *)*plVar25;
            } while (*plVar34 != lVar35);
            goto LAB_7101df0594;
          }
          plVar34 = plVar28;
        } while (plVar28 != plVar3);
LAB_7101df05ac:
        plVar36 = (long *)plVar26[1];
      }
    }
    (**(code **)(*plVar36 + 0x188))(plVar36);
  }
  uStack_1c5 = 0;
  uStack_1c6 = 0;
  local_1c8 = 0;
  local_1d0 = &PTR_FUN_710523d9e8;
  FUN_710392eb40((ulong)plVar26);
LAB_7101df05e8:
  pcVar5 = "off_plt_menu_lyt_00";
  if (cVar6 != '\0') {
    pcVar5 = pcVar16;
  }
  FUN_7103778300(0x3f800000,puVar12[0x48],(long)pcVar5);
  FUN_7101df2d40((long)puVar12,*(char *)(puVar12 + 0x49),ppppppppplVar21,ppppbVar22,param_5,param_6,
                 param_7,param_8);
  (**(code **)(*(long *)puVar12[0x44] + 0x60))((long *)puVar12[0x44],1);
  (**(code **)(*(long *)puVar12[0x45] + 0x60))((long *)puVar12[0x45],1);
  lVar35 = *(long *)(**(long **)*puVar1 + 0x608);
  if (*(long *)(**(long **)*puVar1 + 0x610) == lVar35) {
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_out_of_range();
  }
  *(undefined4 *)(*(long *)(lVar35 + 8) + 0x40) = 0x60;
  *(undefined1 *)(*(long *)(lVar35 + 8) + 0x4aa) = 0;
  local_a0 = (long ********)0x600000007;
  local_90 = 1;
  local_98 = 0x8000000009;
  if (((DAT_71053144d8 & 1) == 0) && (iVar9 = __cxa_guard_acquire(&DAT_71053144d8), iVar9 != 0)) {
    FUN_7101764000();
    FUN_71000001c0();
    __cxa_guard_release(&DAT_71053144d8);
  }
  local_90 = (undefined1)(0x10000 >> (ulong)((DAT_7105307b68._4_4_ - 3U) * 8 & 0x1f));
  if (3 < DAT_7105307b68._4_4_ - 3U) {
    local_90 = 1;
  }
  local_1d8 = *(undefined8 *)(param_2 + 2);
  local_1c0 = 0;
  uVar37 = 0x811c9dc5;
  local_1e0 = (ulong)CONCAT16(*(undefined1 *)((long)param_2 + 0x13),
                              CONCAT15(*(undefined1 *)((long)param_2 + 0x11),
                                       CONCAT14((char)param_2[4],*param_2)));
  local_1c8 = 0x6373;
  uStack_1c6 = 0x72;
  uStack_1c5 = 0x74726f735f;
  uVar29 = 0x73;
  lVar35 = 9;
  do {
    uVar37 = uVar37 * 0x89 ^ uVar29;
    uVar29 = (uint)*(byte *)((long)&local_1d0 + lVar35);
    lVar35 = lVar35 + 1;
  } while (uVar29 != 0);
  local_1d0 = (undefined **)CONCAT44(8,uVar37);
  pppplVar18 = (long ****)(ulong)(uVar17 & 1);
  ppppppppplVar21 = &local_a0;
  ppppbVar22 = (byte ****)&local_1d0;
  FUN_7101df9480((undefined8 *)param_1[4],&local_1e0,(uint *)ppppppppplVar21,(long)ppppbVar22,
                 pppplVar18,param_6,param_7,param_8);
  FUN_7101df0840((long)param_1,*param_2,ppppppppplVar21,ppppbVar22,pppplVar18,param_6,param_7,
                 param_8);
  if (*(long *)(param_2 + 6) == 0) {
    FUN_7103778300(0x3f800000,param_1[3],0x710433a647);
  }
  else {
    FUN_7103778300(0x3f800000,param_1[3],0x710434a889);
    FUN_7101df0960(param_1,*(long *)(param_2 + 6),ppppppppplVar21,ppppbVar22,pppplVar18,param_6,
                   param_7,param_8);
  }
  FUN_7103778760(param_1[3],0x710428ff7d);
  pcVar5 = "off_plt_menu_lyt_00";
  if (*(char *)((long)param_2 + 0x12) != '\0') {
    pcVar5 = pcVar16;
  }
  FUN_7103778300(0x3f800000,param_1[3],(long)pcVar5);
  *(int *)((long)param_1 + 0x144) = *param_2;
  return;
}

