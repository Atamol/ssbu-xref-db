// addr:      71018bef50
// offset:    0x18bef50
// name:      FUN_71018bef50
// mangled:   
// signature: undefined __cdecl FUN_71018bef50(long param_1, undefined8 param_2, long * * * * param_3, byte * * * * param_4, byte * * * * param_5, ulong param_6, long * * * param_7, long * * * param_8)


void FUN_71018bef50(long param_1,undefined8 param_2,long ****param_3,byte ****param_4,
                   byte ****param_5,ulong param_6,long ***param_7,long ***param_8)

{
  undefined2 *puVar1;
  char cVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined4 uVar12;
  bool bVar13;
  int iVar14;
  uint uVar15;
  long lVar16;
  ulong uVar17;
  undefined8 *puVar18;
  undefined8 *puVar19;
  long lVar20;
  long *plVar21;
  long lVar22;
  undefined8 *puVar23;
  undefined ***pppuVar24;
  ulong uVar25;
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
  undefined8 extraout_x1_43;
  undefined8 extraout_x1_44;
  undefined8 extraout_x1_45;
  long *********ppppppppplVar26;
  undefined8 uVar27;
  ulong *puVar28;
  long ****pppplVar29;
  undefined **ppuVar30;
  byte ****ppppbVar31;
  char *pcVar32;
  long *************ppppppppppppplVar33;
  uint uVar34;
  code *pcVar35;
  byte *pbVar36;
  ulong uVar37;
  uint uVar38;
  long lVar39;
  long lVar40;
  long lVar41;
  undefined8 uVar42;
  long *plVar43;
  long *plVar44;
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined **local_2c0;
  undefined8 *local_2b8;
  undefined **local_2b0;
  ulong local_2a8 [3];
  undefined ***local_290;
  undefined **local_260;
  undefined8 *local_258;
  long ********local_250;
  undefined2 local_248;
  undefined4 local_246;
  undefined2 local_242;
  undefined8 local_240;
  undefined1 *local_238;
  undefined4 local_230;
  long alStack_220 [4];
  long *local_200;
  long alStack_1f0 [4];
  long *local_1d0;
  long alStack_1c0 [4];
  long *local_1a0;
  long alStack_190 [4];
  long *local_170;
  long alStack_160 [4];
  long *local_140;
  undefined4 local_130;
  
  FUN_71032f4150(*(long *)(DAT_710532f830 + 8),param_2,param_3,param_4,param_5,param_6,
                 (ulong)param_7,(ulong)param_8);
  plVar44 = (long *)(param_1 + 0xe8);
  lVar16 = *plVar44;
  FUN_710323beb0(lVar16,(ulong *)&DAT_71045455a8,(long)*(int *)(lVar16 + 0x70),
                 (ulong)*(uint *)(lVar16 + 0x68),(long ****)0x0,param_6,param_7,param_8);
  lVar16 = *plVar44;
  ppppppppppppplVar33 = (long *************)0x0;
  FUN_710323beb0(lVar16,(ulong *)&DAT_71045455b0,(long)*(int *)(lVar16 + 0x70),
                 (ulong)*(uint *)(lVar16 + 0x68),(long ****)0x0,param_6,param_7,param_8);
  lVar16 = *plVar44;
  ppppppppplVar26 = (long *********)(long)*(int *)(lVar16 + 0x70);
  ppppbVar31 = (byte ****)(ulong)*(uint *)(lVar16 + 0x68);
  FUN_710323c1c0(lVar16,(ulong *)&DAT_71045455b8,ppppppppplVar26,ppppbVar31,
                 (long ****)ppppppppppppplVar33,param_6,param_7,param_8);
  lVar16 = *plVar44;
  uVar27 = extraout_x1;
  while (uVar17 = FUN_710323cb80(lVar16,uVar27,ppppppppplVar26,ppppbVar31,
                                 (long ****)ppppppppppppplVar33,param_6,param_7,param_8),
        (uVar17 & 1) == 0) {
    nn::os::SleepThread(1000000);
    uVar27 = extraout_x1_00;
  }
  lVar16 = *(long *)(*(long *)(*DAT_7105329f98 + 0x20) + 8);
  uVar27 = extraout_x1_01;
  while (uVar17 = FUN_710323cb80(lVar16,uVar27,ppppppppplVar26,ppppbVar31,
                                 (long ****)ppppppppppppplVar33,param_6,param_7,param_8),
        (uVar17 & 1) == 0) {
    nn::os::SleepThread(1000000);
    uVar27 = extraout_x1_02;
  }
  puVar18 = (undefined8 *)
            FUN_710392e290(0x10,0x88,(long ****)ppppppppplVar26,ppppbVar31,
                           (long ****)ppppppppppppplVar33,param_6,param_7,param_8);
  if (puVar18 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_2b0 = (undefined **)((ulong)local_2b0 & 0xffffffff00000000);
      local_250 = (long ********)&DAT_00000088;
      ppppppppplVar26 = &local_250;
      uVar17 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_2b0);
      if (((uVar17 & 1) != 0) &&
         (puVar18 = (undefined8 *)
                    FUN_710392e290(0x10,0x88,(long ****)ppppppppplVar26,ppppbVar31,
                                   (long ****)ppppppppppppplVar33,param_6,param_7,param_8),
         puVar18 != (undefined8 *)0x0)) goto LAB_71018bf084;
    }
    puVar18 = (undefined8 *)0x0;
  }
LAB_71018bf084:
  *puVar18 = &PTR_FUN_71050aebf8;
  puVar18[1] = 0;
  puVar18[0xc] = 0;
  puVar18[0xd] = 0x1ffffffff;
  puVar18[2] = 0;
  puVar18[3] = 0;
  *(undefined1 *)(puVar18 + 0xb) = 0;
  puVar18[0xf] = plVar44;
  *(undefined1 *)(puVar18 + 0xe) = 1;
  puVar18[9] = 0;
  puVar18[10] = 0;
  lVar16 = FUN_710392e290(0x10,0x578,(long ****)ppppppppplVar26,ppppbVar31,
                          (long ****)ppppppppppppplVar33,param_6,param_7,param_8);
  if (lVar16 == 0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_2b0 = (undefined **)((ulong)local_2b0 & 0xffffffff00000000);
      local_250 = (long ********)0x578;
      ppppppppplVar26 = &local_250;
      uVar17 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_2b0);
      if (((uVar17 & 1) != 0) &&
         (lVar16 = FUN_710392e290(0x10,0x578,(long ****)ppppppppplVar26,ppppbVar31,
                                  (long ****)ppppppppppppplVar33,param_6,param_7,param_8),
         lVar16 != 0)) goto LAB_71018bf10c;
    }
    lVar16 = 0;
  }
LAB_71018bf10c:
  *(undefined8 *)(lVar16 + 0x10) = 0;
  *(undefined8 *)(lVar16 + 0x18) = 0;
  *(undefined4 *)(lVar16 + 0x120) = 0xffffffff;
  *(long *)lVar16 = lVar16;
  *(undefined8 *)(lVar16 + 8) = 0;
  *(undefined1 *)(lVar16 + 0x124) = 0;
  *(long **)(lVar16 + 0x128) = plVar44;
  *(undefined8 *)(lVar16 + 0x110) = 0;
  *(undefined8 *)(lVar16 + 0x118) = 0xffffffff;
  *(undefined8 *)(lVar16 + 0x100) = 0;
  *(undefined8 *)(lVar16 + 0x108) = 0;
  *(undefined8 *)(lVar16 + 0xf0) = 0;
  *(undefined8 *)(lVar16 + 0xf8) = 0;
  *(undefined8 *)(lVar16 + 0xe0) = 0;
  *(undefined8 *)(lVar16 + 0xe8) = 0;
  *(undefined8 *)(lVar16 + 0xd0) = 0;
  *(undefined8 *)(lVar16 + 0xd8) = 0;
  *(undefined8 *)(lVar16 + 0xc0) = 0;
  *(undefined8 *)(lVar16 + 200) = 0;
  *(undefined8 *)(lVar16 + 0xb0) = 0;
  *(undefined8 *)(lVar16 + 0xb8) = 0;
  *(undefined8 *)(lVar16 + 0xa0) = 0;
  *(undefined8 *)(lVar16 + 0xa8) = 0;
  *(undefined8 *)(lVar16 + 0x90) = 0;
  *(undefined8 *)(lVar16 + 0x98) = 0;
  *(undefined8 *)(lVar16 + 0x80) = 0;
  *(undefined8 *)(lVar16 + 0x88) = 0;
  *(undefined8 *)(lVar16 + 0x70) = 0;
  *(undefined8 *)(lVar16 + 0x78) = 0;
  *(undefined8 *)(lVar16 + 0x60) = 0;
  *(undefined8 *)(lVar16 + 0x68) = 0;
  *(undefined8 *)(lVar16 + 0x50) = 0;
  *(undefined8 *)(lVar16 + 0x58) = 0;
  *(undefined8 *)(lVar16 + 0x40) = 0;
  *(undefined8 *)(lVar16 + 0x48) = 0;
  *(undefined8 *)(lVar16 + 0x30) = 0;
  *(undefined8 *)(lVar16 + 0x38) = 0;
  *(undefined8 *)(lVar16 + 0x20) = 0;
  *(undefined8 *)(lVar16 + 0x28) = 0;
  puVar19 = (undefined8 *)
            FUN_710392e290(0x10,8,(long ****)ppppppppplVar26,ppppbVar31,
                           (long ****)ppppppppppppplVar33,param_6,param_7,param_8);
  uVar27 = extraout_x1_03;
  if (puVar19 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_2b0 = (undefined **)((ulong)local_2b0 & 0xffffffff00000000);
      local_250 = (long ********)&DAT_00000008;
      ppppppppplVar26 = &local_250;
      auVar45 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_2b0);
      uVar27 = auVar45._8_8_;
      if (((auVar45._0_8_ & 1) != 0) &&
         (puVar19 = (undefined8 *)
                    FUN_710392e290(0x10,8,(long ****)ppppppppplVar26,ppppbVar31,
                                   (long ****)ppppppppppppplVar33,param_6,param_7,param_8),
         uVar27 = extraout_x1_04, puVar19 != (undefined8 *)0x0)) goto LAB_71018bf1c0;
    }
    puVar19 = (undefined8 *)0x0;
  }
LAB_71018bf1c0:
  FUN_7103773200(puVar19,uVar27,(long ****)ppppppppplVar26,ppppbVar31,(long ****)ppppppppppppplVar33
                 ,param_6,param_7,param_8);
  *(undefined2 *)(lVar16 + 0x140) = 0x100;
  uVar42 = *(undefined8 *)(lVar16 + 0x128);
  *(undefined4 *)(lVar16 + 0x144) = 0x4001;
  *(undefined1 *)(lVar16 + 0x148) = 1;
  *(undefined4 *)(lVar16 + 0x14c) = 1;
  *(undefined1 *)(lVar16 + 0x150) = 0;
  *(undefined8 **)(lVar16 + 0x130) = puVar19;
  *(undefined ***)(lVar16 + 0x138) = &PTR_FUN_71050aebb8;
  lVar20 = FUN_710392e290(0x10,0x270,(long ****)ppppppppplVar26,ppppbVar31,
                          (long ****)ppppppppppppplVar33,param_6,param_7,param_8);
  uVar27 = extraout_x1_05;
  if (lVar20 == 0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_2b0 = (undefined **)((ulong)local_2b0 & 0xffffffff00000000);
      local_250 = (long ********)0x270;
      ppppppppplVar26 = &local_250;
      auVar45 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_2b0);
      uVar27 = auVar45._8_8_;
      if (((auVar45._0_8_ & 1) != 0) &&
         (lVar20 = FUN_710392e290(0x10,0x270,(long ****)ppppppppplVar26,ppppbVar31,
                                  (long ****)ppppppppppppplVar33,param_6,param_7,param_8),
         uVar27 = extraout_x1_06, lVar20 != 0)) goto LAB_71018bf258;
    }
    lVar20 = 0;
  }
LAB_71018bf258:
  *(undefined4 *)(lVar20 + 0xf0) = 0xffffffff;
  uVar15 = 0x811c9dc5;
  *(undefined8 *)(lVar20 + 0x10) = 0;
  *(undefined8 *)(lVar20 + 0x18) = 0;
  *(undefined1 *)(lVar20 + 0xf4) = 0;
  *(long *)lVar20 = lVar20;
  *(undefined8 *)(lVar20 + 8) = 0;
  *(undefined8 *)(lVar20 + 0xf8) = uVar42;
  *(undefined8 *)(lVar20 + 0xe0) = 0;
  *(undefined8 *)(lVar20 + 0xe8) = 0xffffffff;
  *(undefined8 *)(lVar20 + 0xd0) = 0;
  *(undefined8 *)(lVar20 + 0xd8) = 0;
  *(undefined8 *)(lVar20 + 0xc0) = 0;
  *(undefined8 *)(lVar20 + 200) = 0;
  *(undefined8 *)(lVar20 + 0xb0) = 0;
  *(undefined8 *)(lVar20 + 0xb8) = 0;
  *(undefined8 *)(lVar20 + 0xa0) = 0;
  *(undefined8 *)(lVar20 + 0xa8) = 0;
  *(undefined8 *)(lVar20 + 0x90) = 0;
  *(undefined8 *)(lVar20 + 0x98) = 0;
  *(undefined8 *)(lVar20 + 0x80) = 0;
  *(undefined8 *)(lVar20 + 0x88) = 0;
  *(undefined8 *)(lVar20 + 0x70) = 0;
  *(undefined8 *)(lVar20 + 0x78) = 0;
  *(undefined8 *)(lVar20 + 0x60) = 0;
  *(undefined8 *)(lVar20 + 0x68) = 0;
  *(undefined8 *)(lVar20 + 0x50) = 0;
  *(undefined8 *)(lVar20 + 0x58) = 0;
  *(undefined8 *)(lVar20 + 0x40) = 0;
  *(undefined8 *)(lVar20 + 0x48) = 0;
  *(undefined8 *)(lVar20 + 0x30) = 0;
  *(undefined8 *)(lVar20 + 0x38) = 0;
  *(undefined8 *)(lVar20 + 0x20) = 0;
  *(undefined8 *)(lVar20 + 0x28) = 0;
  FUN_7103776290((undefined8 *)(lVar20 + 0x100),uVar27,(long ****)ppppppppplVar26,ppppbVar31,
                 (long ****)ppppppppppppplVar33,param_6,param_7,param_8);
  *(undefined8 *)(lVar20 + 0x120) = 0;
  *(undefined8 *)(lVar20 + 0x128) = 0;
  *(undefined1 *)(lVar20 + 0x120) = 0xff;
  *(undefined8 *)(lVar20 + 0x130) = 0;
  *(undefined8 *)(lVar20 + 0x138) = 0;
  *(undefined4 *)(lVar20 + 0x1d8) = 0;
  *(undefined8 *)(lVar20 + 0x150) = 0;
  *(undefined8 *)(lVar20 + 0x110) = 0;
  *(undefined1 **)(lVar20 + 0x118) = &DAT_c1ffff0000000000;
  *(undefined8 *)(lVar20 + 0x140) = 0;
  *(undefined8 *)(lVar20 + 0x148) = 0;
  *(undefined1 *)(lVar20 + 0x140) = 0;
  *(undefined4 *)(lVar20 + 0x14c) = 0x811c9dc5;
  *(undefined8 *)(lVar20 + 0x1c8) = 0;
  *(undefined8 *)(lVar20 + 0x1d0) = 0;
  *(undefined8 *)(lVar20 + 0x1b8) = 0;
  *(undefined8 *)(lVar20 + 0x1c0) = 0;
  *(undefined8 *)(lVar20 + 0x1a8) = 0;
  *(undefined8 *)(lVar20 + 0x1b0) = 0;
  *(undefined8 *)(lVar20 + 0x198) = 0;
  *(undefined8 *)(lVar20 + 0x1a0) = 0;
  *(undefined1 *)(lVar20 + 0x19c) = 0;
  *(undefined8 *)(lVar20 + 0x188) = 0;
  *(undefined8 *)(lVar20 + 400) = 0;
  *(undefined8 *)(lVar20 + 0x178) = 0;
  *(undefined8 *)(lVar20 + 0x180) = 0;
  *(undefined8 *)(lVar20 + 0x168) = 0;
  *(undefined8 *)(lVar20 + 0x170) = 0;
  *(undefined8 *)(lVar20 + 0x158) = 0;
  *(undefined8 *)(lVar20 + 0x160) = 0;
  *(undefined8 *)(lVar20 + 0x194) = 0x811c9dc5;
  *(undefined8 *)(lVar20 + 0x1dc) = 0xffffffff00000000;
  plVar21 = (long *)FUN_710392e290(0x10,8,(long ****)ppppppppplVar26,ppppbVar31,
                                   (long ****)ppppppppppppplVar33,param_6,param_7,param_8);
  if (plVar21 == (long *)0x0) {
    local_2b0 = (undefined **)((ulong)local_2b0 & 0xffffffff00000000);
    local_250 = (long ********)&DAT_00000008;
    ppppppppplVar26 = &local_250;
    (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_2b0);
    plVar21 = (long *)FUN_710392e290(0x10,8,(long ****)ppppppppplVar26,ppppbVar31,
                                     (long ****)ppppppppppppplVar33,param_6,param_7,param_8);
  }
  *plVar21 = lVar20 + 0x1f0;
  *(long **)(lVar20 + 0x1e8) = plVar21;
  lVar22 = FUN_710392e290(0x10,1,(long ****)ppppppppplVar26,ppppbVar31,
                          (long ****)ppppppppppppplVar33,param_6,param_7,param_8);
  if (lVar22 == 0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_2b0 = (undefined **)((ulong)local_2b0 & 0xffffffff00000000);
      local_250 = (long ********)0x1;
      ppppppppplVar26 = &local_250;
      uVar17 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_2b0);
      if (((uVar17 & 1) != 0) &&
         (lVar22 = FUN_710392e290(0x10,1,(long ****)ppppppppplVar26,ppppbVar31,
                                  (long ****)ppppppppppppplVar33,param_6,param_7,param_8),
         lVar22 != 0)) goto LAB_71018bf3bc;
    }
    lVar22 = 0;
  }
LAB_71018bf3bc:
  *(long *)(lVar20 + 0x1f0) = lVar22;
  *(undefined8 *)(lVar20 + 0x1f8) = 0;
  *(undefined1 *)(lVar20 + 0x200) = 0;
  puVar19 = (undefined8 *)
            FUN_710392e290(0x10,0xb8,(long ****)ppppppppplVar26,ppppbVar31,
                           (long ****)ppppppppppppplVar33,param_6,param_7,param_8);
  if (puVar19 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_2b0 = (undefined **)((ulong)local_2b0 & 0xffffffff00000000);
      local_250 = (long ********)&DAT_000000b8;
      ppppppppplVar26 = &local_250;
      uVar17 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_2b0);
      if (((uVar17 & 1) != 0) &&
         (puVar19 = (undefined8 *)
                    FUN_710392e290(0x10,0xb8,(long ****)ppppppppplVar26,ppppbVar31,
                                   (long ****)ppppppppppppplVar33,param_6,param_7,param_8),
         puVar19 != (undefined8 *)0x0)) goto LAB_71018bf420;
    }
    puVar19 = (undefined8 *)0x0;
  }
LAB_71018bf420:
  *puVar19 = &PTR_FUN_710523d9a8;
  puVar23 = (undefined8 *)
            FUN_710392e290(0x10,0x20,(long ****)ppppppppplVar26,ppppbVar31,
                           (long ****)ppppppppppppplVar33,param_6,param_7,param_8);
  if (puVar23 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_2b0 = (undefined **)((ulong)local_2b0 & 0xffffffff00000000);
      local_250 = (long ********)&SUB_00000020;
      ppppppppplVar26 = &local_250;
      uVar17 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_2b0);
      if (((uVar17 & 1) != 0) &&
         (puVar23 = (undefined8 *)
                    FUN_710392e290(0x10,0x20,(long ****)ppppppppplVar26,ppppbVar31,
                                   (long ****)ppppppppppppplVar33,param_6,param_7,param_8),
         puVar23 != (undefined8 *)0x0)) goto LAB_71018bf480;
    }
    puVar23 = (undefined8 *)0x0;
  }
LAB_71018bf480:
  puVar23[2] = 0;
  puVar23[3] = 0;
  *puVar23 = 0;
  puVar23[1] = 0;
  *(undefined2 *)(puVar19 + 0x16) = 0x100;
  *(undefined1 *)(puVar19 + 3) = 0;
  *(undefined2 *)(puVar19 + 0x12) = 0;
  puVar19[0xb] = 0;
  *(undefined8 *)((long)puVar19 + 0x9c) = 0;
  *(undefined8 *)((long)puVar19 + 0x94) = 0;
  *(undefined4 *)((long)puVar19 + 0xa4) = 1;
  puVar19[0x15] = 0;
  *(undefined4 *)((long)puVar19 + 0xb4) = 0x3f800000;
  puVar19[1] = puVar23;
  puVar19[2] = 0;
  puVar19[0x10] = 0;
  puVar19[0x11] = 0;
  puVar19[0xe] = 0;
  puVar19[0xf] = 0;
  puVar19[0xc] = 0;
  puVar19[0xd] = 0;
  *(undefined2 *)(lVar20 + 0x24c) = 1;
  *(undefined8 **)(lVar20 + 0x240) = puVar19;
  *(undefined4 *)(lVar20 + 0x248) = 0;
  *(undefined1 *)(lVar20 + 0x24e) = 0;
  *(undefined4 *)(lVar20 + 0x250) = 0;
  *(undefined1 *)(lVar20 + 0x254) = 0;
  *(undefined4 *)(lVar20 + 0x264) = 0;
  *(undefined2 *)(lVar20 + 0x268) = 0;
  *(undefined1 *)(lVar20 + 0x260) = 0;
  *(undefined8 *)(lVar20 + 600) = 0;
  *(code **)(lVar20 + 0x28) = FUN_7101d25fe0;
  *(undefined8 *)(lVar20 + 0x30) = 0;
  *(code **)(lVar20 + 0x38) = FUN_7101d26000;
  *(undefined8 *)(lVar20 + 0x40) = 0;
  *(code **)(lVar20 + 0x58) = FUN_7101d26720;
  *(undefined8 *)(lVar20 + 0x60) = 0;
  *(code **)(lVar20 + 0x68) = FUN_7101d26fe0;
  *(undefined8 *)(lVar20 + 0x70) = 0;
  *(code **)(lVar20 + 0x48) = FUN_7101d260e0;
  *(undefined8 *)(lVar20 + 0x50) = 0;
  *(code **)(lVar20 + 0x78) = FUN_7101d27080;
  *(undefined8 *)(lVar20 + 0x80) = 0;
  *(code **)(lVar20 + 0x88) = FUN_7101d271e0;
  *(undefined8 *)(lVar20 + 0x90) = 0;
  if (0x12 < *(uint *)(lVar20 + 0xe4)) goto LAB_71018c14c8;
  *(undefined4 *)(lVar20 + (long)(int)*(uint *)(lVar20 + 0xe4) * 4 + 0x98) = 0;
  *(long *)(lVar16 + 0x158) = lVar20;
  *(undefined1 *)(lVar16 + 0x160) = 0;
  *(undefined4 *)(lVar16 + 0x164) = 0;
  *(undefined2 *)(lVar16 + 0x168) = 0;
  puVar19 = (undefined8 *)
            FUN_710392e290(0x10,8,(long ****)ppppppppplVar26,ppppbVar31,
                           (long ****)ppppppppppppplVar33,param_6,param_7,param_8);
  uVar27 = extraout_x1_07;
  if (puVar19 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_2b0 = (undefined **)((ulong)local_2b0 & 0xffffffff00000000);
      local_250 = (long ********)&DAT_00000008;
      ppppppppplVar26 = &local_250;
      auVar45 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_2b0);
      uVar27 = auVar45._8_8_;
      if (((auVar45._0_8_ & 1) != 0) &&
         (puVar19 = (undefined8 *)
                    FUN_710392e290(0x10,8,(long ****)ppppppppplVar26,ppppbVar31,
                                   (long ****)ppppppppppppplVar33,param_6,param_7,param_8),
         uVar27 = extraout_x1_08, puVar19 != (undefined8 *)0x0)) goto LAB_71018bf5c4;
    }
    puVar19 = (undefined8 *)0x0;
  }
LAB_71018bf5c4:
  FUN_7103773200(puVar19,uVar27,(long ****)ppppppppplVar26,ppppbVar31,(long ****)ppppppppppppplVar33
                 ,param_6,param_7,param_8);
  *(undefined8 **)(lVar16 + 0x170) = puVar19;
  *(undefined8 *)(lVar16 + 0x178) = 0;
  *(undefined8 *)(lVar16 + 0x180) = 0xffffffff;
  puVar19 = (undefined8 *)
            FUN_710392e290(0x10,0xb8,(long ****)ppppppppplVar26,ppppbVar31,
                           (long ****)ppppppppppppplVar33,param_6,param_7,param_8);
  if (puVar19 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_2b0 = (undefined **)((ulong)local_2b0 & 0xffffffff00000000);
      local_250 = (long ********)&DAT_000000b8;
      ppppppppplVar26 = &local_250;
      uVar17 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_2b0);
      if (((uVar17 & 1) != 0) &&
         (puVar19 = (undefined8 *)
                    FUN_710392e290(0x10,0xb8,(long ****)ppppppppplVar26,ppppbVar31,
                                   (long ****)ppppppppppppplVar33,param_6,param_7,param_8),
         puVar19 != (undefined8 *)0x0)) goto LAB_71018bf634;
    }
    puVar19 = (undefined8 *)0x0;
  }
LAB_71018bf634:
  *puVar19 = &PTR_FUN_710523d9a8;
  puVar23 = (undefined8 *)
            FUN_710392e290(0x10,0x20,(long ****)ppppppppplVar26,ppppbVar31,
                           (long ****)ppppppppppppplVar33,param_6,param_7,param_8);
  if (puVar23 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_2b0 = (undefined **)((ulong)local_2b0 & 0xffffffff00000000);
      local_250 = (long ********)&SUB_00000020;
      ppppppppplVar26 = &local_250;
      uVar17 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_2b0);
      if (((uVar17 & 1) != 0) &&
         (puVar23 = (undefined8 *)
                    FUN_710392e290(0x10,0x20,(long ****)ppppppppplVar26,ppppbVar31,
                                   (long ****)ppppppppppppplVar33,param_6,param_7,param_8),
         puVar23 != (undefined8 *)0x0)) goto LAB_71018bf694;
    }
    puVar23 = (undefined8 *)0x0;
  }
LAB_71018bf694:
  puVar23[2] = 0;
  puVar23[3] = 0;
  *puVar23 = 0;
  puVar23[1] = 0;
  *(undefined4 *)((long)puVar19 + 0xa4) = 1;
  *(undefined2 *)(puVar19 + 0x16) = 0x100;
  *(undefined1 *)(puVar19 + 3) = 0;
  *(undefined2 *)(puVar19 + 0x12) = 0;
  puVar19[0xb] = 0;
  *(undefined8 *)((long)puVar19 + 0x9c) = 0;
  *(undefined8 *)((long)puVar19 + 0x94) = 0;
  puVar19[0x15] = 0;
  *(undefined4 *)((long)puVar19 + 0xb4) = 0x3f800000;
  puVar19[1] = puVar23;
  puVar19[2] = 0;
  puVar19[0x10] = 0;
  puVar19[0x11] = 0;
  puVar19[0xe] = 0;
  puVar19[0xf] = 0;
  puVar19[0xc] = 0;
  puVar19[0xd] = 0;
  *(undefined8 **)(lVar16 + 0x188) = puVar19;
  memset((undefined8 *)(lVar16 + 400),0,0x1e0);
  FUN_71017abc20((undefined8 *)(lVar16 + 400));
  ppppppppplVar26 = (long *********)&DAT_000001e0;
  memset((undefined8 *)(lVar16 + 0x370),0,0x1e0);
  FUN_71017abc20((undefined8 *)(lVar16 + 0x370));
  *(undefined2 *)(lVar16 + 0x558) = 0;
  *(undefined8 *)(lVar16 + 0x550) = 0;
  *(undefined4 *)(lVar16 + 0x55c) = 0;
  plVar21 = (long *)FUN_710392e290(0x10,8,(long ****)ppppppppplVar26,ppppbVar31,
                                   (long ****)ppppppppppppplVar33,param_6,param_7,param_8);
  if (plVar21 == (long *)0x0) {
    local_2b0 = (undefined **)((ulong)local_2b0 & 0xffffffff00000000);
    local_250 = (long ********)&DAT_00000008;
    ppppppppplVar26 = &local_250;
    (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_2b0);
    plVar21 = (long *)FUN_710392e290(0x10,8,(long ****)ppppppppplVar26,ppppbVar31,
                                     (long ****)ppppppppppppplVar33,param_6,param_7,param_8);
  }
  *plVar21 = lVar16 + 0x568;
  *(long **)(lVar16 + 0x560) = plVar21;
  lVar20 = FUN_710392e290(0x10,1,(long ****)ppppppppplVar26,ppppbVar31,
                          (long ****)ppppppppppppplVar33,param_6,param_7,param_8);
  if (lVar20 == 0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_2b0 = (undefined **)((ulong)local_2b0 & 0xffffffff00000000);
      local_250 = (long ********)0x1;
      ppppppppplVar26 = &local_250;
      uVar17 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_2b0);
      if (((uVar17 & 1) != 0) &&
         (lVar20 = FUN_710392e290(0x10,1,(long ****)ppppppppplVar26,ppppbVar31,
                                  (long ****)ppppppppppppplVar33,param_6,param_7,param_8),
         lVar20 != 0)) goto LAB_71018bf7c8;
    }
    lVar20 = 0;
  }
LAB_71018bf7c8:
  *(code **)(lVar16 + 0x28) = FUN_7101d27ce0;
  *(undefined8 *)(lVar16 + 0x30) = 0;
  *(long *)(lVar16 + 0x568) = lVar20;
  *(code **)(lVar16 + 0x38) = FUN_7101d27cf0;
  *(undefined8 *)(lVar16 + 0x40) = 0;
  *(code **)(lVar16 + 0x58) = FUN_7101d27d10;
  *(undefined8 *)(lVar16 + 0x60) = 0;
  *(undefined1 *)(lVar16 + 0x570) = 0;
  *(code **)(lVar16 + 0x68) = FUN_7101d27f90;
  *(undefined8 *)(lVar16 + 0x70) = 0;
  *(code **)(lVar16 + 0x88) = FUN_7101d28770;
  *(undefined8 *)(lVar16 + 0x90) = 0;
  *(code **)(lVar16 + 0x98) = FUN_7101d28af0;
  *(undefined8 *)(lVar16 + 0xa0) = 0;
  *(code **)(lVar16 + 0x48) = FUN_7101d27d00;
  *(undefined8 *)(lVar16 + 0x50) = 0;
  *(code **)(lVar16 + 0x78) = FUN_7101d28100;
  *(undefined8 *)(lVar16 + 0x80) = 0;
  *(code **)(lVar16 + 0xa8) = FUN_7101d2aa50;
  *(undefined8 *)(lVar16 + 0xb0) = 0;
  *(code **)(lVar16 + 0xb8) = FUN_7101d2aae0;
  *(undefined8 *)(lVar16 + 0xc0) = 0;
  if (0x12 < *(uint *)(lVar16 + 0x114)) goto LAB_71018c14c8;
  *(undefined4 *)(lVar16 + (long)(int)*(uint *)(lVar16 + 0x114) * 4 + 200) = 0;
  *(undefined2 *)(lVar16 + 0x558) = 0x101;
  *(undefined8 *)(lVar16 + 0x550) = 0x101010101010101;
  puVar18[0x10] = lVar16;
  lVar16 = DAT_710532f8b8;
  lVar20 = *plVar44;
  if ((DAT_710532f4d8 & 1) == 0) {
    iVar14 = __cxa_guard_acquire(&DAT_710532f4d8);
    if (iVar14 == 0) goto LAB_71018bf890;
    DAT_710532f4a4 = 0xffffff;
    FUN_71000001c0();
    __cxa_guard_release(&DAT_710532f4d8);
    lVar22 = *(long *)(lVar20 + 0x28);
    if (lVar22 != 0) goto LAB_71018bf898;
LAB_71018bf8dc:
    ppppppppplVar26 = (long *********)&DAT_710532f4a4;
  }
  else {
LAB_71018bf890:
    lVar22 = *(long *)(lVar20 + 0x28);
    if (lVar22 == 0) goto LAB_71018bf8dc;
LAB_71018bf898:
    lVar40 = lVar20 + 0x28;
    do {
      bVar13 = (*(ulong *)(lVar22 + 0x20) & 0xfffffffffc) < 0x10e908f41c;
      if (!bVar13) {
        lVar40 = lVar22;
      }
      lVar22 = *(long *)(lVar22 + (ulong)bVar13 * 8);
    } while (lVar22 != 0);
    if ((lVar40 == lVar20 + 0x28) || (0x10e908f41c < (*(ulong *)(lVar40 + 0x20) & 0xffffffffff)))
    goto LAB_71018bf8dc;
    ppppppppplVar26 = (long *********)(lVar40 + 0x28);
  }
  if ((*(int *)ppppppppplVar26 != 0xffffff) &&
     (iVar14 = FUN_710330a8f0(*(long **)(lVar16 + 8),(ulong *)&DAT_71045455b8,(long ****)0x6,
                              ppppbVar31,(long ****)ppppppppppppplVar33,param_6,param_7,param_8),
     iVar14 != 0)) {
    FUN_7103563a20(*lib::Singleton<lib::EffectManager>::instance_,iVar14,ppppppppplVar26,ppppbVar31,
                   (long ****)ppppppppppppplVar33,param_6,param_7,param_8);
  }
  lVar22 = puVar18[0x10];
  FUN_71032cbf30((undefined8 *)(lVar22 + 0x130),**(long **)(lVar22 + 0x128),(ulong *)&DAT_71045455a8
                 ,(byte ****)0x1,(long ****)ppppppppppppplVar33,param_6,param_7,param_8);
  FUN_71032cbf30((undefined8 *)(lVar22 + 0x170),**(long **)(lVar22 + 0x128),(ulong *)&DAT_71045455b0
                 ,(byte ****)0x1,(long ****)ppppppppppppplVar33,param_6,param_7,param_8);
  lVar16 = *(long *)**(undefined8 **)(lVar22 + 0x130);
  *(undefined4 *)(*(long *)(lVar16 + 0x600) + 0xdc) = 0xf0000f;
  *(undefined4 *)(*(long *)(lVar16 + 0x600) + 0xcc) = 0x20;
  *(undefined4 *)(*(long *)(lVar16 + 0x600) + 0xd0) = 0x20;
  *(undefined4 *)(*(long *)(lVar16 + 0x600) + 0xd4) = 0x20;
  *(undefined4 *)(*(long *)(lVar16 + 0x600) + 0xd8) = 0x20;
  *(undefined4 *)(lVar22 + 0x144) = 0x11000;
  *(undefined2 *)(lVar22 + 0x140) = 0x101;
  *(undefined1 *)(lVar22 + 0x148) = 1;
  *(undefined4 *)(lVar22 + 0x14c) = 1;
  *(undefined1 *)(lVar22 + 0x150) = 0;
  lVar20 = *(long *)**(undefined8 **)(lVar22 + 0x170);
  *(undefined4 *)(*(long *)(lVar20 + 0x600) + 0x494) = 1;
  lVar16 = *(long *)(lVar20 + 0x608);
  lVar20 = *(long *)(lVar20 + 0x610);
  if (lVar16 != lVar20) {
    uVar17 = (lVar20 + -0x10) - lVar16;
    uVar38 = ((uint)(uVar17 >> 4) & 0xfffffff) + 1;
    if ((uVar38 & 3) != 0) {
      lVar40 = -((ulong)uVar38 & 3);
      do {
        plVar21 = (long *)(lVar16 + 8);
        lVar16 = lVar16 + 0x10;
        lVar40 = lVar40 + 1;
        *(undefined4 *)(*plVar21 + 0x494) = 1;
      } while (lVar40 != 0);
    }
    if (0x2f < uVar17) {
      do {
        *(undefined4 *)(*(long *)(lVar16 + 8) + 0x494) = 1;
        *(undefined4 *)(*(long *)(lVar16 + 0x18) + 0x494) = 1;
        *(undefined4 *)(*(long *)(lVar16 + 0x28) + 0x494) = 1;
        plVar21 = (long *)(lVar16 + 0x38);
        lVar16 = lVar16 + 0x40;
        *(undefined4 *)(*plVar21 + 0x494) = 1;
      } while (lVar20 != lVar16);
    }
  }
  plVar21 = *(long **)(lVar22 + 0x170);
  lVar20 = *(long *)(lVar22 + 0x158);
  lVar16 = *plVar21;
  puVar19 = (undefined8 *)(lVar20 + 0x100);
  if (puVar19 != (undefined8 *)(lVar16 + 8)) {
    **(undefined8 **)(lVar20 + 0x108) = **(undefined8 **)(lVar16 + 0x10);
    *(undefined8 *)(*(long *)(lVar20 + 0x108) + 8) = *(undefined8 *)(*(long *)(lVar16 + 0x10) + 8);
    lVar40 = *(long *)(lVar16 + 0x10);
    lVar16 = *(long *)(lVar20 + 0x108);
    if (lVar16 != lVar40) {
      **(undefined8 **)(lVar16 + 0x18) = **(undefined8 **)(lVar40 + 0x18);
      *(undefined8 *)(*(long *)(lVar16 + 0x18) + 8) = *(undefined8 *)(*(long *)(lVar40 + 0x18) + 8);
      *(undefined8 *)(*(long *)(lVar16 + 0x18) + 0x10) =
           *(undefined8 *)(*(long *)(lVar40 + 0x18) + 0x10);
      *(undefined8 *)(*(long *)(lVar16 + 0x18) + 0x18) =
           *(undefined8 *)(*(long *)(lVar40 + 0x18) + 0x18);
    }
  }
  *(undefined4 *)(*(long *)(*(long *)*plVar21 + 0x600) + 0x18) = 0x10;
  *(undefined4 *)(lVar20 + 0x1e0) = 0xffffffff;
  local_250 = (long ********)0x0;
  local_248 = 0x101;
  local_242 = 0;
  local_246 = 0;
  local_240 = CONCAT17(local_240._7_1_,0x1000100000001);
  local_238 = &DAT_41f0000000000000;
  local_230 = 0;
  local_200 = (long *)0x0;
  local_1d0 = (long *)0x0;
  local_1a0 = (long *)0x0;
  local_170 = (long *)0x0;
  local_140 = (long *)0x0;
  local_130 = 0;
  FUN_710337df20((long)&local_250);
  plVar21 = local_1d0;
  local_1d0 = (long *)0x0;
  local_248 = CONCAT11(1,(undefined1)local_248);
  if (alStack_1f0 == plVar21) {
    pcVar35 = *(code **)(*plVar21 + 0x20);
LAB_71018bfb70:
    (*pcVar35)();
  }
  else if (plVar21 != (long *)0x0) {
    pcVar35 = *(code **)(*plVar21 + 0x28);
    goto LAB_71018bfb70;
  }
  plVar21 = local_1a0;
  bVar13 = alStack_1c0 == local_1a0;
  local_1a0 = (long *)0x0;
  if (bVar13) {
    pcVar35 = *(code **)(*plVar21 + 0x20);
LAB_71018bfba4:
    (*pcVar35)();
  }
  else if (plVar21 != (long *)0x0) {
    pcVar35 = *(code **)(*plVar21 + 0x28);
    goto LAB_71018bfba4;
  }
  plVar21 = (long *)(lVar20 + 0x110);
  ppppppppplVar26 = &local_250;
  FUN_7103770b30(plVar21,puVar19,(long ****)"selector_0",(byte ****)ppppppppplVar26,
                 (long ****)ppppppppppppplVar33,param_6,param_7,param_8);
  FUN_71037717d0(plVar21,0,"set_parts_btn_01",ppppppppplVar26,(long ****)ppppppppppppplVar33,param_6
                 ,param_7,param_8);
  FUN_71037717d0(plVar21,1,"set_parts_btn_00",ppppppppplVar26,(long ****)ppppppppppppplVar33,param_6
                 ,param_7,param_8);
  lVar16 = *(long *)(*(long *)(lVar20 + 0x110) + 0x1b8);
  if (lVar16 != 0) {
    lVar40 = *(long *)(lVar20 + 0x110) + 0x1b8;
    lVar39 = lVar40;
    lVar41 = lVar16;
    do {
      if (0 < *(int *)(lVar41 + 0x20)) {
        lVar39 = lVar41;
      }
      lVar41 = *(long *)(lVar41 + (ulong)(*(int *)(lVar41 + 0x20) < 1) * 8);
    } while (lVar41 != 0);
    if (((lVar39 != lVar40) && (*(int *)(lVar39 + 0x20) < 2)) &&
       (plVar43 = *(long **)(lVar39 + 0x28), plVar43 != (long *)0x0)) {
      (**(code **)(*plVar43 + 0x1f8))(plVar43,1);
      (**(code **)(*plVar43 + 0x388))(plVar43,0,0);
      lVar40 = *plVar21 + 0x1b8;
      lVar16 = *(long *)(*plVar21 + 0x1b8);
    }
    lVar39 = lVar40;
    if (lVar16 != 0) {
      do {
        bVar13 = *(int *)(lVar16 + 0x20) < 0;
        if (!bVar13) {
          lVar39 = lVar16;
        }
        lVar16 = *(long *)(lVar16 + (ulong)bVar13 * 8);
      } while (lVar16 != 0);
      if (((lVar39 != lVar40) && (*(int *)(lVar39 + 0x20) < 1)) &&
         (plVar43 = *(long **)(lVar39 + 0x28), plVar43 != (long *)0x0)) {
        (**(code **)(*plVar43 + 0x1f8))(plVar43,1);
        (**(code **)(*plVar43 + 0x388))(plVar43,0,0);
      }
    }
  }
  uVar27 = 0;
  FUN_7103771a80(plVar21,0,0);
  FUN_7103776640(&local_260,(long)puVar19,(byte ****)"set_parts_gold_count",uVar27,ppppppppplVar26,
                 (long ****)ppppppppppppplVar33,param_6,param_7,param_8);
  FUN_7103776640(&local_2b0,(long)&local_260,(byte ****)"set_parts_gold",uVar27,ppppppppplVar26,
                 (long ****)ppppppppppppplVar33,param_6,param_7,param_8);
  puVar19 = local_258;
  local_260 = &PTR_FUN_710523d988;
  local_258 = (undefined8 *)0x0;
  if (puVar19 != (undefined8 *)0x0) {
    uVar17 = *(ulong *)((long)puVar19 + 0x18);
    *(undefined ***)((long)puVar19 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)((long)puVar19 + 0x18) = 0;
    if (uVar17 != 0) {
      FUN_710392eb40(uVar17);
    }
    FUN_710392eb40((ulong)puVar19);
  }
  FUN_7103776910(&local_260,(long)&local_2b0,(long ****)"set_txt_num",uVar27,ppppppppplVar26,
                 (long ****)ppppppppppppplVar33,param_6,param_7,param_8);
  pppuVar24 = *(undefined ****)(lVar20 + 0x240);
  if (pppuVar24 != &local_260) {
    *pppuVar24[1] = (undefined *)*local_258;
    pppuVar24[1][1] = (undefined *)local_258[1];
    pppuVar24[1][2] = (undefined *)local_258[2];
    pppuVar24[1][3] = (undefined *)local_258[3];
  }
  for (uVar17 = 0; "mnu_shop_gold_n"[uVar17] != '\0'; uVar17 = uVar17 + 2) {
    *(char *)((long)pppuVar24 + uVar17 + 0x18) = "mnu_shop_gold_n"[uVar17];
    if ("mnu_shop_gold_n"[uVar17 + 1] == '\0') {
      uVar17 = uVar17 + 1;
      break;
    }
    *(char *)((long)pppuVar24 + uVar17 + 0x19) = "mnu_shop_gold_n"[uVar17 + 1];
  }
  *(byte *)((long)(pppuVar24 + 3) + (uVar17 & 0xffffffff)) = 0;
  *(int *)((long)pppuVar24 + 0x14) = (int)uVar17;
  uVar34 = (uint)*(byte *)(pppuVar24 + 3);
  uVar38 = uVar15;
  if (*(byte *)(pppuVar24 + 3) != 0) {
    pbVar36 = (byte *)((long)pppuVar24 + 0x19);
    do {
      uVar38 = uVar38 * 0x89 ^ uVar34;
      uVar34 = (uint)*pbVar36;
      pbVar36 = pbVar36 + 1;
    } while (uVar34 != 0);
  }
  *(uint *)(pppuVar24 + 2) = uVar38;
  FUN_710377a280((long)pppuVar24,(byte *)(pppuVar24 + 3),1);
  pcVar32 = "anim_stop";
  FUN_7103399a70(*(long *)(lVar20 + 0x240),(long)&local_2b0,(long ****)"anim_count",
                 (byte ****)"anim_stop",(long ****)ppppppppppppplVar33,param_6,param_7,param_8);
  puVar19 = local_258;
  lVar16 = *(long *)(lVar20 + 0x240);
  *(undefined8 *)(lVar16 + 0x68) = 0x1a410fa2b5;
  *(undefined8 *)(lVar16 + 0x70) = 0x1a5906a9ed;
  local_260 = &PTR_FUN_710523d9a8;
  local_258 = (undefined8 *)0x0;
  if (puVar19 != (undefined8 *)0x0) {
    FUN_710392eb40((ulong)puVar19);
  }
  uVar17 = local_2a8[0];
  local_2b0 = &PTR_FUN_710523d988;
  local_2a8[0] = 0;
  if (uVar17 != 0) {
    uVar25 = *(ulong *)(uVar17 + 0x18);
    *(undefined ***)(uVar17 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar17 + 0x18) = 0;
    if (uVar25 != 0) {
      FUN_710392eb40(uVar25);
    }
    FUN_710392eb40(uVar17);
  }
  if (alStack_160 == local_140) {
    pcVar35 = *(code **)(*local_140 + 0x20);
LAB_71018bfed8:
    (*pcVar35)();
  }
  else if (local_140 != (long *)0x0) {
    pcVar35 = *(code **)(*local_140 + 0x28);
    goto LAB_71018bfed8;
  }
  if (alStack_190 == local_170) {
    pcVar35 = *(code **)(*local_170 + 0x20);
LAB_71018bff08:
    (*pcVar35)();
  }
  else if (local_170 != (long *)0x0) {
    pcVar35 = *(code **)(*local_170 + 0x28);
    goto LAB_71018bff08;
  }
  if (alStack_1c0 == local_1a0) {
    pcVar35 = *(code **)(*local_1a0 + 0x20);
LAB_71018bff30:
    (*pcVar35)();
  }
  else if (local_1a0 != (long *)0x0) {
    pcVar35 = *(code **)(*local_1a0 + 0x28);
    goto LAB_71018bff30;
  }
  if (alStack_1f0 == local_1d0) {
    pcVar35 = *(code **)(*local_1d0 + 0x20);
LAB_71018bff58:
    (*pcVar35)();
  }
  else if (local_1d0 != (long *)0x0) {
    pcVar35 = *(code **)(*local_1d0 + 0x28);
    goto LAB_71018bff58;
  }
  if (alStack_220 == local_200) {
    pcVar35 = *(code **)(*local_200 + 0x20);
LAB_71018bff88:
    (*pcVar35)();
  }
  else if (local_200 != (long *)0x0) {
    pcVar35 = *(code **)(*local_200 + 0x28);
    goto LAB_71018bff88;
  }
  FUN_7101d2aaf0(lVar22,0,0,(byte ****)pcVar32,(long ****)ppppppppppppplVar33,param_6,param_7,
                 param_8);
  FUN_7101d2aaf0(lVar22,1,0,(byte ****)pcVar32,(long ****)ppppppppppppplVar33,param_6,param_7,
                 param_8);
  FUN_7101d2aaf0(lVar22,2,0,(byte ****)pcVar32,(long ****)ppppppppppppplVar33,param_6,param_7,
                 param_8);
  FUN_7101d2aaf0(lVar22,3,0,(byte ****)pcVar32,(long ****)ppppppppppppplVar33,param_6,param_7,
                 param_8);
  FUN_7101d2aaf0(lVar22,4,0,(byte ****)pcVar32,(long ****)ppppppppppppplVar33,param_6,param_7,
                 param_8);
  FUN_7101d2aaf0(lVar22,5,0,(byte ****)pcVar32,(long ****)ppppppppppppplVar33,param_6,param_7,
                 param_8);
  FUN_7101d2aaf0(lVar22,6,0,(byte ****)pcVar32,(long ****)ppppppppppppplVar33,param_6,param_7,
                 param_8);
  FUN_7101d2aaf0(lVar22,7,0,(byte ****)pcVar32,(long ****)ppppppppppppplVar33,param_6,param_7,
                 param_8);
  FUN_7101d2aaf0(lVar22,8,0,(byte ****)pcVar32,(long ****)ppppppppppppplVar33,param_6,param_7,
                 param_8);
  FUN_7101d2aaf0(lVar22,9,0,(byte ****)pcVar32,(long ****)ppppppppppppplVar33,param_6,param_7,
                 param_8);
  FUN_7103778300(0x3f800000,*(long *)(**(long **)(lVar22 + 0x130) + 0x10),0x7104270166);
  local_248 = 0x101;
  local_240 = CONCAT17(local_240._7_1_,0x1000100000001);
  local_250 = (long ********)0x0;
  local_242 = 0;
  local_246 = 0;
  local_238 = (undefined1 *)0x0;
  local_230 = 0;
  local_200 = (long *)0x0;
  local_1d0 = (long *)0x0;
  local_1a0 = (long *)0x0;
  local_170 = (long *)0x0;
  local_140 = (long *)0x0;
  local_130 = 0;
  local_2b0 = (undefined **)&DAT_71051860d0;
  local_290 = &local_2b0;
  FUN_7101989a30((long *)&local_2b0,alStack_190);
  if (&local_2b0 == local_290) {
    pcVar35 = (code *)(*local_290)[4];
LAB_71018c00d4:
    (*pcVar35)();
  }
  else if (local_290 != (undefined ***)0x0) {
    pcVar35 = (code *)(*local_290)[5];
    goto LAB_71018c00d4;
  }
  local_2b0 = (undefined **)&DAT_7105186118;
  local_290 = &local_2b0;
  FUN_7101989a30((long *)&local_2b0,alStack_160);
  if (&local_2b0 == local_290) {
    pcVar35 = (code *)(*local_290)[4];
LAB_71018c0120:
    (*pcVar35)();
  }
  else if (local_290 != (undefined ***)0x0) {
    pcVar35 = (code *)(*local_290)[5];
    goto LAB_71018c0120;
  }
  plVar21 = (long *)(lVar22 + 0x178);
  ppppppppplVar26 = &local_250;
  FUN_7103770b30(plVar21,(undefined8 *)(**(long **)(lVar22 + 0x130) + 8),(long ****)"selector_0",
                 (byte ****)ppppppppplVar26,(long ****)ppppppppppppplVar33,param_6,param_7,param_8);
  local_2a8[0] = local_2a8[0] & 0xffffffffffffff00;
  local_2b0 = (undefined **)0x0;
  puVar28 = local_2a8;
  FUN_710062dc20((uint *)&local_2b0,"set_btn_item_%02d");
  FUN_71037717d0(plVar21,0,(char *)puVar28,ppppppppplVar26,(long ****)ppppppppppppplVar33,param_6,
                 param_7,param_8);
  FUN_710062dc20((uint *)&local_2b0,"set_btn_item_%02d");
  FUN_71037717d0(plVar21,1,(char *)puVar28,ppppppppplVar26,(long ****)ppppppppppppplVar33,param_6,
                 param_7,param_8);
  FUN_710062dc20((uint *)&local_2b0,"set_btn_item_%02d");
  FUN_71037717d0(plVar21,2,(char *)puVar28,ppppppppplVar26,(long ****)ppppppppppppplVar33,param_6,
                 param_7,param_8);
  FUN_710062dc20((uint *)&local_2b0,"set_btn_item_%02d");
  FUN_71037717d0(plVar21,3,(char *)puVar28,ppppppppplVar26,(long ****)ppppppppppppplVar33,param_6,
                 param_7,param_8);
  FUN_710062dc20((uint *)&local_2b0,"set_btn_item_%02d");
  FUN_71037717d0(plVar21,4,(char *)puVar28,ppppppppplVar26,(long ****)ppppppppppppplVar33,param_6,
                 param_7,param_8);
  FUN_710062dc20((uint *)&local_2b0,"set_btn_item_%02d");
  FUN_71037717d0(plVar21,5,(char *)puVar28,ppppppppplVar26,(long ****)ppppppppppppplVar33,param_6,
                 param_7,param_8);
  FUN_710062dc20((uint *)&local_2b0,"set_btn_item_%02d");
  FUN_71037717d0(plVar21,6,(char *)puVar28,ppppppppplVar26,(long ****)ppppppppppppplVar33,param_6,
                 param_7,param_8);
  FUN_710062dc20((uint *)&local_2b0,"set_btn_item_%02d");
  FUN_71037717d0(plVar21,7,(char *)puVar28,ppppppppplVar26,(long ****)ppppppppppppplVar33,param_6,
                 param_7,param_8);
  FUN_710062dc20((uint *)&local_2b0,"set_btn_item_%02d");
  FUN_71037717d0(plVar21,8,(char *)puVar28,ppppppppplVar26,(long ****)ppppppppppppplVar33,param_6,
                 param_7,param_8);
  FUN_710062dc20((uint *)&local_2b0,"set_btn_item_%02d");
  FUN_71037717d0(plVar21,9,(char *)puVar28,ppppppppplVar26,(long ****)ppppppppppppplVar33,param_6,
                 param_7,param_8);
  (**(code **)(**(long **)(lVar22 + 0x178) + 0x60))(*(long **)(lVar22 + 0x178),0);
  *(undefined8 *)(lVar22 + 0x180) = 0xffffffff;
  FUN_7103776640(&local_2c0,**(long **)(lVar22 + 0x130) + 8,(byte ****)"set_parts_gold_count",
                 puVar28,ppppppppplVar26,(long ****)ppppppppppppplVar33,param_6,param_7,param_8);
  FUN_7103776640(&local_260,(long)&local_2c0,(byte ****)"set_parts_gold",puVar28,ppppppppplVar26,
                 (long ****)ppppppppppppplVar33,param_6,param_7,param_8);
  puVar19 = local_2b8;
  local_2c0 = &PTR_FUN_710523d988;
  local_2b8 = (undefined8 *)0x0;
  if (puVar19 != (undefined8 *)0x0) {
    uVar17 = *(ulong *)((long)puVar19 + 0x18);
    *(undefined ***)((long)puVar19 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)((long)puVar19 + 0x18) = 0;
    if (uVar17 != 0) {
      FUN_710392eb40(uVar17);
    }
    FUN_710392eb40((ulong)puVar19);
  }
  FUN_7103776910(&local_2c0,(long)&local_260,(long ****)"set_txt_num",puVar28,ppppppppplVar26,
                 (long ****)ppppppppppppplVar33,param_6,param_7,param_8);
  pppuVar24 = *(undefined ****)(lVar22 + 0x188);
  if (pppuVar24 != &local_2c0) {
    *pppuVar24[1] = (undefined *)*local_2b8;
    pppuVar24[1][1] = (undefined *)local_2b8[1];
    pppuVar24[1][2] = (undefined *)local_2b8[2];
    pppuVar24[1][3] = (undefined *)local_2b8[3];
  }
  for (uVar17 = 0; "mnu_shop_gold_n"[uVar17] != '\0'; uVar17 = uVar17 + 2) {
    *(char *)((long)pppuVar24 + uVar17 + 0x18) = "mnu_shop_gold_n"[uVar17];
    if ("mnu_shop_gold_n"[uVar17 + 1] == '\0') {
      uVar17 = uVar17 + 1;
      break;
    }
    *(char *)((long)pppuVar24 + uVar17 + 0x19) = "mnu_shop_gold_n"[uVar17 + 1];
  }
  *(byte *)((long)(pppuVar24 + 3) + (uVar17 & 0xffffffff)) = 0;
  uVar38 = (uint)*(byte *)(pppuVar24 + 3);
  *(int *)((long)pppuVar24 + 0x14) = (int)uVar17;
  if (*(byte *)(pppuVar24 + 3) != 0) {
    pbVar36 = (byte *)((long)pppuVar24 + 0x19);
    uVar15 = 0x811c9dc5;
    do {
      uVar15 = uVar15 * 0x89 ^ uVar38;
      uVar38 = (uint)*pbVar36;
      pbVar36 = pbVar36 + 1;
    } while (uVar38 != 0);
  }
  *(uint *)(pppuVar24 + 2) = uVar15;
  FUN_710377a280((long)pppuVar24,(byte *)(pppuVar24 + 3),1);
  pcVar32 = "anim_stop";
  FUN_7103399a70(*(long *)(lVar22 + 0x188),(long)&local_260,(long ****)"anim_count",
                 (byte ****)"anim_stop",(long ****)ppppppppppppplVar33,param_6,param_7,param_8);
  lVar16 = *(long *)(lVar22 + 0x188);
  *(undefined8 *)(lVar16 + 0x68) = 0x1a410fa2b5;
  *(undefined8 *)(lVar16 + 0x70) = 0x1a5906a9ed;
  pppplVar29 = (long ****)&DAT_00001000;
  FUN_7103775dc0((long *)**(undefined8 **)(lVar22 + 0x130),0,(long ****)&DAT_00001000,
                 (byte ****)pcVar32,(long ****)ppppppppppppplVar33,param_6,param_7,param_8);
  puVar19 = local_2b8;
  local_2c0 = &PTR_FUN_710523d9a8;
  local_2b8 = (undefined8 *)0x0;
  uVar27 = extraout_x1_09;
  if (puVar19 != (undefined8 *)0x0) {
    FUN_710392eb40((ulong)puVar19);
    uVar27 = extraout_x1_10;
  }
  puVar19 = local_258;
  local_260 = &PTR_FUN_710523d988;
  local_258 = (undefined8 *)0x0;
  if (puVar19 != (undefined8 *)0x0) {
    uVar17 = *(ulong *)((long)puVar19 + 0x18);
    *(undefined ***)((long)puVar19 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)((long)puVar19 + 0x18) = 0;
    if (uVar17 != 0) {
      FUN_710392eb40(uVar17);
    }
    FUN_710392eb40((ulong)puVar19);
    uVar27 = extraout_x1_11;
  }
  if (alStack_160 == local_140) {
    pcVar35 = *(code **)(*local_140 + 0x20);
LAB_71018c04c8:
    (*pcVar35)();
    uVar27 = extraout_x1_12;
  }
  else if (local_140 != (long *)0x0) {
    pcVar35 = *(code **)(*local_140 + 0x28);
    goto LAB_71018c04c8;
  }
  if (alStack_190 == local_170) {
    pcVar35 = *(code **)(*local_170 + 0x20);
LAB_71018c04f8:
    (*pcVar35)();
    uVar27 = extraout_x1_13;
  }
  else if (local_170 != (long *)0x0) {
    pcVar35 = *(code **)(*local_170 + 0x28);
    goto LAB_71018c04f8;
  }
  if (alStack_1c0 == local_1a0) {
    pcVar35 = *(code **)(*local_1a0 + 0x20);
LAB_71018c0528:
    (*pcVar35)();
    uVar27 = extraout_x1_14;
  }
  else if (local_1a0 != (long *)0x0) {
    pcVar35 = *(code **)(*local_1a0 + 0x28);
    goto LAB_71018c0528;
  }
  if (alStack_1f0 == local_1d0) {
    pcVar35 = *(code **)(*local_1d0 + 0x20);
LAB_71018c0558:
    (*pcVar35)();
    uVar27 = extraout_x1_15;
  }
  else if (local_1d0 != (long *)0x0) {
    pcVar35 = *(code **)(*local_1d0 + 0x28);
    goto LAB_71018c0558;
  }
  if (alStack_220 == local_200) {
    pcVar35 = *(code **)(*local_200 + 0x20);
LAB_71018c0588:
    (*pcVar35)();
    uVar27 = extraout_x1_16;
  }
  else if (local_200 != (long *)0x0) {
    pcVar35 = *(code **)(*local_200 + 0x28);
    goto LAB_71018c0588;
  }
  puVar18[2] = &DAT_7105333600;
  uVar12 = DAT_7105333664;
  *(undefined4 *)(puVar18 + 0xd) = DAT_7105333660;
  *(undefined4 *)((long)puVar18 + 0x6c) = uVar12;
  do {
    uVar15 = DAT_7105333650;
    cVar2 = '\x01';
    bVar13 = (bool)ExclusiveMonitorPass(0x7105333650,0x10);
    if (bVar13) {
      DAT_7105333650 = 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0' || (uVar15 & 1) != 0);
  puVar18[9] = DAT_7105333648;
  DAT_7105333650 = 0;
  DAT_7105333648 = puVar18;
  FUN_71032caea0((long)puVar18,uVar27,pppplVar29,(byte ****)pcVar32,(long ****)ppppppppppppplVar33,
                 param_6,param_7,param_8);
  lVar16 = *(long *)(param_1 + 0x100);
  *(undefined8 **)(param_1 + 0x100) = puVar18;
  if (lVar16 != 0) {
    FUN_71032cad20(lVar16);
    puVar18 = *(undefined8 **)(param_1 + 0x100);
  }
  lVar16 = puVar18[0x10];
  if (((DAT_71053144d8 & 1) == 0) && (iVar14 = __cxa_guard_acquire(&DAT_71053144d8), iVar14 != 0)) {
    FUN_7101764000();
    FUN_71000001c0();
    __cxa_guard_release(&DAT_71053144d8);
  }
  uVar27 = 0x1e0;
  memcpy(&local_250,&DAT_7105308570,0x1e0);
  if ((((ulong)local_250 & 0xff00000000000000) != 0xc100000000000000) ||
     (((ulong)local_250 & 0xffffffffff) == 0)) {
    FUN_7103384c30(&local_250,1,uVar27,(byte ****)pcVar32,ppppppppppppplVar33,param_6,(ulong)param_7
                   ,(ulong)param_8);
  }
  puVar28 = (ulong *)(lVar16 + 400);
  ppuVar30 = (undefined **)0x1e0;
  memcpy(puVar28,&local_250,0x1e0);
  if (((DAT_71053144d8 & 1) == 0) && (iVar14 = __cxa_guard_acquire(&DAT_71053144d8), iVar14 != 0)) {
    FUN_7101764000();
    ppuVar30 = &PTR_LOOP_7104f17000;
    FUN_71000001c0();
    __cxa_guard_release(&DAT_71053144d8);
  }
  lVar20 = DAT_7105308750;
  if (DAT_7105308750 == 0) {
    auVar45 = nn::time::StandardSteadyClock::now();
    uVar27 = auVar45._0_8_;
    if ((DAT_71053144d8 & 1) == 0) {
      iVar14 = __cxa_guard_acquire(&DAT_71053144d8);
      auVar45._8_8_ = extraout_x1_44;
      auVar45._0_8_ = uVar27;
      if (iVar14 != 0) {
        FUN_7101764000();
        ppuVar30 = &PTR_LOOP_7104f17000;
        FUN_71000001c0();
        __cxa_guard_release(&DAT_71053144d8);
        auVar45._8_8_ = extraout_x1_45;
      }
    }
  }
  else {
    lVar22 = *(long *)(*(long *)(DAT_710532f730 + 8) + 0x368);
    uVar17 = FUN_710329eed0(lVar22,0xe08e998a0);
    uVar25 = FUN_710329c430(lVar22,uVar17);
    auVar46 = nn::time::StandardSteadyClock::now();
    auVar45._8_8_ = auVar46._8_8_;
    auVar45._0_8_ = DAT_7105308750;
    uVar37 = (auVar46._0_8_ - lVar20) * 1000000000;
    uVar17 = ((long)uVar37 >> 0x20) * 0x26d694b3 + ((uVar37 & 0xfffffe00) * 0x26d694b3 >> 0x20);
    if ((long)(uVar25 & 0xffffffff) <=
        ((long)(((long)uVar37 >> 0x20) * 0x112e0be8 + ((long)uVar17 >> 0x20) +
               ((uVar37 & 0xfffffe00) * 0x112e0be8 + (uVar17 & 0xffffffff) >> 0x20)) >> 0x1a) -
        ((long)uVar37 >> 0x3f)) {
      uVar27 = 0x1e0;
      memcpy((void *)(lVar16 + 0x370),puVar28,0x1e0);
      FUN_7103384c30(&local_250,1,uVar27,(byte ****)pcVar32,ppppppppppppplVar33,param_6,
                     (ulong)param_7,(ulong)param_8);
      memcpy(puVar28,&local_250,0x1e0);
      local_250 = (long ********)&DAT_c1ffff0000000000;
      local_248 = CONCAT11(local_248._1_1_,0xff);
      local_240 = 0;
      local_238 = (undefined1 *)0x0;
      FUN_7103385da0(*(undefined8 *)(lVar16 + 0x560),*(long **)(lVar16 + 0x128),(ulong *)&local_250,
                     (byte ****)pcVar32,(long ****)ppppppppppppplVar33,param_6,(ulong)param_7,
                     (ulong)param_8);
      FUN_7103385190();
      FUN_7101d2ad80(lVar16,lVar16 + 0x370,(long)puVar28);
      lVar22 = 0;
      lVar20 = lVar16 + 0x1a0;
      do {
        uVar17 = *(ulong *)(lVar20 + lVar22);
        if (((*(ulong *)(lVar16 + 0x380) ^ uVar17) & 0xffffffffff) == 0) {
          *(undefined1 **)(lVar16 + 0x370) = &DAT_c1ffff0000000000;
          *(undefined1 *)(lVar16 + 0x378) = 0xff;
          *(undefined8 *)(lVar16 + 0x389) = 0;
          *(undefined8 *)(lVar16 + 0x391) = 0;
          *(undefined8 *)(lVar16 + 0x379) = 0;
          *(undefined8 *)(lVar16 + 0x381) = 0;
          uVar17 = *(ulong *)(lVar20 + lVar22);
        }
        if (((*(ulong *)(lVar16 + 0x3b0) ^ uVar17) & 0xffffffffff) == 0) {
          *(undefined1 **)(lVar16 + 0x3a0) = &DAT_c1ffff0000000000;
          *(undefined1 *)(lVar16 + 0x3a8) = 0xff;
          *(undefined8 *)(lVar16 + 0x3b9) = 0;
          *(undefined8 *)(lVar16 + 0x3c1) = 0;
          *(undefined8 *)(lVar16 + 0x3a9) = 0;
          *(undefined8 *)(lVar16 + 0x3b1) = 0;
          uVar17 = *(ulong *)(lVar20 + lVar22);
        }
        if (((*(ulong *)(lVar16 + 0x3e0) ^ uVar17) & 0xffffffffff) == 0) {
          *(undefined1 **)(lVar16 + 0x3d0) = &DAT_c1ffff0000000000;
          *(undefined1 *)(lVar16 + 0x3d8) = 0xff;
          *(undefined8 *)(lVar16 + 0x3e9) = 0;
          *(undefined8 *)(lVar16 + 0x3f1) = 0;
          *(undefined8 *)(lVar16 + 0x3d9) = 0;
          *(undefined8 *)(lVar16 + 0x3e1) = 0;
          uVar17 = *(ulong *)(lVar20 + lVar22);
        }
        if (((*(ulong *)(lVar16 + 0x410) ^ uVar17) & 0xffffffffff) == 0) {
          *(undefined1 **)(lVar16 + 0x400) = &DAT_c1ffff0000000000;
          *(undefined1 *)(lVar16 + 0x408) = 0xff;
          *(undefined8 *)(lVar16 + 0x419) = 0;
          *(undefined8 *)(lVar16 + 0x421) = 0;
          *(undefined8 *)(lVar16 + 0x409) = 0;
          *(undefined8 *)(lVar16 + 0x411) = 0;
          uVar17 = *(ulong *)(lVar20 + lVar22);
        }
        if (((*(ulong *)(lVar16 + 0x440) ^ uVar17) & 0xffffffffff) == 0) {
          *(undefined1 **)(lVar16 + 0x430) = &DAT_c1ffff0000000000;
          *(undefined1 *)(lVar16 + 0x438) = 0xff;
          *(undefined8 *)(lVar16 + 0x449) = 0;
          *(undefined8 *)(lVar16 + 0x451) = 0;
          *(undefined8 *)(lVar16 + 0x439) = 0;
          *(undefined8 *)(lVar16 + 0x441) = 0;
          uVar17 = *(ulong *)(lVar20 + lVar22);
        }
        if (((*(ulong *)(lVar16 + 0x470) ^ uVar17) & 0xffffffffff) == 0) {
          *(undefined1 **)(lVar16 + 0x460) = &DAT_c1ffff0000000000;
          *(undefined1 *)(lVar16 + 0x468) = 0xff;
          *(undefined8 *)(lVar16 + 0x479) = 0;
          *(undefined8 *)(lVar16 + 0x481) = 0;
          *(undefined8 *)(lVar16 + 0x469) = 0;
          *(undefined8 *)(lVar16 + 0x471) = 0;
          uVar17 = *(ulong *)(lVar20 + lVar22);
        }
        if (((*(ulong *)(lVar16 + 0x4a0) ^ uVar17) & 0xffffffffff) == 0) {
          *(undefined1 **)(lVar16 + 0x490) = &DAT_c1ffff0000000000;
          *(undefined1 *)(lVar16 + 0x498) = 0xff;
          *(undefined8 *)(lVar16 + 0x4a9) = 0;
          *(undefined8 *)(lVar16 + 0x4b1) = 0;
          *(undefined8 *)(lVar16 + 0x499) = 0;
          *(undefined8 *)(lVar16 + 0x4a1) = 0;
          uVar17 = *(ulong *)(lVar20 + lVar22);
        }
        if (((*(ulong *)(lVar16 + 0x4d0) ^ uVar17) & 0xffffffffff) == 0) {
          *(undefined1 **)(lVar16 + 0x4c0) = &DAT_c1ffff0000000000;
          *(undefined1 *)(lVar16 + 0x4c8) = 0xff;
          *(undefined8 *)(lVar16 + 0x4d9) = 0;
          *(undefined8 *)(lVar16 + 0x4e1) = 0;
          *(undefined8 *)(lVar16 + 0x4c9) = 0;
          *(undefined8 *)(lVar16 + 0x4d1) = 0;
          uVar17 = *(ulong *)(lVar20 + lVar22);
        }
        if (((*(ulong *)(lVar16 + 0x500) ^ uVar17) & 0xffffffffff) == 0) {
          *(undefined1 **)(lVar16 + 0x4f0) = &DAT_c1ffff0000000000;
          *(undefined1 *)(lVar16 + 0x4f8) = 0xff;
          *(undefined8 *)(lVar16 + 0x509) = 0;
          *(undefined8 *)(lVar16 + 0x511) = 0;
          *(undefined8 *)(lVar16 + 0x4f9) = 0;
          *(undefined8 *)(lVar16 + 0x501) = 0;
          uVar17 = *(ulong *)(lVar20 + lVar22);
        }
        ppuVar30 = *(undefined ***)(lVar16 + 0x530);
        if ((((ulong)ppuVar30 ^ uVar17) & 0xffffffffff) == 0) {
          *(undefined1 **)(lVar16 + 0x520) = &DAT_c1ffff0000000000;
          *(undefined1 *)(lVar16 + 0x528) = 0xff;
          *(undefined8 *)(lVar16 + 0x539) = 0;
          *(undefined8 *)(lVar16 + 0x541) = 0;
          *(undefined8 *)(lVar16 + 0x529) = 0;
          *(undefined8 *)(lVar16 + 0x531) = 0;
        }
        lVar22 = lVar22 + 0x30;
      } while (lVar22 != 0x1e0);
      *(undefined1 *)(lVar16 + 0x570) = 1;
      if (*(int *)(lVar16 + 0x114) < 0x12) {
        uVar15 = *(int *)(lVar16 + 0x114) + 1;
        *(uint *)(lVar16 + 0x114) = uVar15;
        if (0x12 < uVar15) goto LAB_71018c14c8;
        *(undefined4 *)(lVar16 + (long)(int)uVar15 * 4 + 200) = 5;
        if (*(int *)(lVar16 + 0x114) < 0x12) {
          uVar15 = *(int *)(lVar16 + 0x114) + 1;
          *(uint *)(lVar16 + 0x114) = uVar15;
          if (0x12 < uVar15) goto LAB_71018c14c8;
          *(undefined4 *)(lVar16 + (long)(int)uVar15 * 4 + 200) = 3;
        }
      }
      auVar45 = nn::time::StandardSteadyClock::now();
      uVar27 = auVar45._0_8_;
      if ((DAT_71053144d8 & 1) == 0) {
        iVar14 = __cxa_guard_acquire(&DAT_71053144d8);
        auVar45._8_8_ = extraout_x1_17;
        auVar45._0_8_ = uVar27;
        if (iVar14 != 0) {
          FUN_7101764000();
          ppuVar30 = &PTR_LOOP_7104f17000;
          FUN_71000001c0();
          __cxa_guard_release(&DAT_71053144d8);
          auVar45._8_8_ = extraout_x1_18;
        }
      }
    }
  }
  DAT_7105308750 = auVar45._0_8_;
  bVar13 = false;
  if (((*puVar28 & 0xff00000000000000) == 0xc100000000000000) && ((*puVar28 & 0xffffffffff) != 0)) {
    if (*(char *)(lVar16 + 0x198) == '\x04') {
      lVar22 = *(long *)(*(long *)(DAT_710532f730 + 8) + 0x1d8);
      uVar15 = FUN_71032a7800(lVar22,*(ulong *)(lVar16 + 0x1a0));
      auVar46._8_8_ = extraout_x1_19;
      auVar46._0_8_ = DAT_7105308750;
      auVar45._8_8_ = extraout_x1_19;
      auVar45._0_8_ = DAT_7105308750;
      lVar20 = *(long *)(lVar22 + 0x20);
      uVar17 = (*(long *)(lVar22 + 0x28) - lVar20 >> 6) * -0x3333333333333333;
      if (uVar15 < (uint)uVar17) {
        uVar25 = (ulong)*(short *)(lVar20 + (ulong)uVar15 * 0x140);
        if (uVar25 != 0xffffffffffffffff) {
          uVar25 = (ulong)*(ushort *)(lVar22 + uVar25 * 2 + 0x60);
        }
      }
      else {
        uVar25 = 0xffffffff;
      }
      puVar1 = (undefined2 *)(lVar20 + uVar25 * 0x140);
      if (uVar17 < uVar25 || uVar17 - uVar25 == 0) {
        puVar1 = &DAT_7105182b08;
      }
      if ((*(char *)(puVar1 + 0x2f) == '\x03') &&
         (((*(ulong *)(lVar16 + 0x1a0) & 0xffffffffff) != 0 ||
          (auVar45 = auVar46, *(int *)(lVar16 + 0x1a8) < 1)))) {
        uVar15 = FUN_7101782120(puVar28,extraout_x1_19,ppuVar30,(byte ****)pcVar32,
                                (long ****)ppppppppppppplVar33,param_6,param_7,param_8);
        auVar45._8_8_ = extraout_x1_20;
        auVar45._0_8_ = DAT_7105308750;
        if (uVar15 != 0) {
          bVar13 = true;
          *(undefined1 *)(lVar16 + 0x1b8) = 1;
          auVar45._0_8_ = DAT_7105308750;
          goto LAB_71018c0ac0;
        }
      }
    }
    bVar13 = false;
  }
LAB_71018c0ac0:
  DAT_7105308750 = auVar45._0_8_;
  if ((((*(ulong *)(lVar16 + 0x1c0) & 0xff00000000000000) == 0xc100000000000000) &&
      ((*(ulong *)(lVar16 + 0x1c0) & 0xffffffffff) != 0)) && (*(char *)(lVar16 + 0x1c8) == '\x04'))
  {
    lVar22 = *(long *)(*(long *)(DAT_710532f730 + 8) + 0x1d8);
    uVar15 = FUN_71032a7800(lVar22,*(ulong *)(lVar16 + 0x1d0));
    auVar3._8_8_ = extraout_x1_21;
    auVar3._0_8_ = DAT_7105308750;
    auVar45._8_8_ = extraout_x1_21;
    auVar45._0_8_ = DAT_7105308750;
    lVar20 = *(long *)(lVar22 + 0x20);
    uVar17 = (*(long *)(lVar22 + 0x28) - lVar20 >> 6) * -0x3333333333333333;
    if (uVar15 < (uint)uVar17) {
      uVar25 = (ulong)*(short *)(lVar20 + (ulong)uVar15 * 0x140);
      if (uVar25 != 0xffffffffffffffff) {
        uVar25 = (ulong)*(ushort *)(lVar22 + uVar25 * 2 + 0x60);
      }
    }
    else {
      uVar25 = 0xffffffff;
    }
    puVar1 = (undefined2 *)(lVar20 + uVar25 * 0x140);
    if (uVar17 < uVar25 || uVar17 - uVar25 == 0) {
      puVar1 = &DAT_7105182b08;
    }
    if ((*(char *)(puVar1 + 0x2f) == '\x03') &&
       (((*(ulong *)(lVar16 + 0x1d0) & 0xffffffffff) != 0 ||
        (auVar45 = auVar3, *(int *)(lVar16 + 0x1d8) < 1)))) {
      uVar15 = FUN_7101782120((ulong *)(lVar16 + 0x1c0),extraout_x1_21,ppuVar30,(byte ****)pcVar32,
                              (long ****)ppppppppppppplVar33,param_6,param_7,param_8);
      auVar45._8_8_ = extraout_x1_22;
      auVar45._0_8_ = DAT_7105308750;
      if (uVar15 != 0) {
        bVar13 = true;
        *(undefined1 *)(lVar16 + 0x1e8) = 1;
        auVar45._0_8_ = DAT_7105308750;
      }
    }
  }
  DAT_7105308750 = auVar45._0_8_;
  if ((((*(ulong *)(lVar16 + 0x1f0) & 0xff00000000000000) == 0xc100000000000000) &&
      ((*(ulong *)(lVar16 + 0x1f0) & 0xffffffffff) != 0)) && (*(char *)(lVar16 + 0x1f8) == '\x04'))
  {
    lVar22 = *(long *)(*(long *)(DAT_710532f730 + 8) + 0x1d8);
    uVar15 = FUN_71032a7800(lVar22,*(ulong *)(lVar16 + 0x200));
    auVar4._8_8_ = extraout_x1_23;
    auVar4._0_8_ = DAT_7105308750;
    auVar45._8_8_ = extraout_x1_23;
    auVar45._0_8_ = DAT_7105308750;
    lVar20 = *(long *)(lVar22 + 0x20);
    uVar17 = (*(long *)(lVar22 + 0x28) - lVar20 >> 6) * -0x3333333333333333;
    if (uVar15 < (uint)uVar17) {
      uVar25 = (ulong)*(short *)(lVar20 + (ulong)uVar15 * 0x140);
      if (uVar25 != 0xffffffffffffffff) {
        uVar25 = (ulong)*(ushort *)(lVar22 + uVar25 * 2 + 0x60);
      }
    }
    else {
      uVar25 = 0xffffffff;
    }
    puVar1 = (undefined2 *)(lVar20 + uVar25 * 0x140);
    if (uVar17 < uVar25 || uVar17 - uVar25 == 0) {
      puVar1 = &DAT_7105182b08;
    }
    if ((*(char *)(puVar1 + 0x2f) == '\x03') &&
       (((*(ulong *)(lVar16 + 0x200) & 0xffffffffff) != 0 ||
        (auVar45 = auVar4, *(int *)(lVar16 + 0x208) < 1)))) {
      uVar15 = FUN_7101782120((ulong *)(lVar16 + 0x1f0),extraout_x1_23,ppuVar30,(byte ****)pcVar32,
                              (long ****)ppppppppppppplVar33,param_6,param_7,param_8);
      auVar45._8_8_ = extraout_x1_24;
      auVar45._0_8_ = DAT_7105308750;
      if (uVar15 != 0) {
        bVar13 = true;
        *(undefined1 *)(lVar16 + 0x218) = 1;
        auVar45._0_8_ = DAT_7105308750;
      }
    }
  }
  DAT_7105308750 = auVar45._0_8_;
  if ((((*(ulong *)(lVar16 + 0x220) & 0xff00000000000000) == 0xc100000000000000) &&
      ((*(ulong *)(lVar16 + 0x220) & 0xffffffffff) != 0)) && (*(char *)(lVar16 + 0x228) == '\x04'))
  {
    lVar22 = *(long *)(*(long *)(DAT_710532f730 + 8) + 0x1d8);
    uVar15 = FUN_71032a7800(lVar22,*(ulong *)(lVar16 + 0x230));
    auVar5._8_8_ = extraout_x1_25;
    auVar5._0_8_ = DAT_7105308750;
    auVar45._8_8_ = extraout_x1_25;
    auVar45._0_8_ = DAT_7105308750;
    lVar20 = *(long *)(lVar22 + 0x20);
    uVar17 = (*(long *)(lVar22 + 0x28) - lVar20 >> 6) * -0x3333333333333333;
    if (uVar15 < (uint)uVar17) {
      uVar25 = (ulong)*(short *)(lVar20 + (ulong)uVar15 * 0x140);
      if (uVar25 != 0xffffffffffffffff) {
        uVar25 = (ulong)*(ushort *)(lVar22 + uVar25 * 2 + 0x60);
      }
    }
    else {
      uVar25 = 0xffffffff;
    }
    puVar1 = (undefined2 *)(lVar20 + uVar25 * 0x140);
    if (uVar17 < uVar25 || uVar17 - uVar25 == 0) {
      puVar1 = &DAT_7105182b08;
    }
    if ((*(char *)(puVar1 + 0x2f) == '\x03') &&
       (((*(ulong *)(lVar16 + 0x230) & 0xffffffffff) != 0 ||
        (auVar45 = auVar5, *(int *)(lVar16 + 0x238) < 1)))) {
      uVar15 = FUN_7101782120((ulong *)(lVar16 + 0x220),extraout_x1_25,ppuVar30,(byte ****)pcVar32,
                              (long ****)ppppppppppppplVar33,param_6,param_7,param_8);
      auVar45._8_8_ = extraout_x1_26;
      auVar45._0_8_ = DAT_7105308750;
      if (uVar15 != 0) {
        bVar13 = true;
        *(undefined1 *)(lVar16 + 0x248) = 1;
        auVar45._0_8_ = DAT_7105308750;
      }
    }
  }
  DAT_7105308750 = auVar45._0_8_;
  if ((((*(ulong *)(lVar16 + 0x250) & 0xff00000000000000) == 0xc100000000000000) &&
      ((*(ulong *)(lVar16 + 0x250) & 0xffffffffff) != 0)) && (*(char *)(lVar16 + 600) == '\x04')) {
    lVar22 = *(long *)(*(long *)(DAT_710532f730 + 8) + 0x1d8);
    uVar15 = FUN_71032a7800(lVar22,*(ulong *)(lVar16 + 0x260));
    auVar6._8_8_ = extraout_x1_27;
    auVar6._0_8_ = DAT_7105308750;
    auVar45._8_8_ = extraout_x1_27;
    auVar45._0_8_ = DAT_7105308750;
    lVar20 = *(long *)(lVar22 + 0x20);
    uVar17 = (*(long *)(lVar22 + 0x28) - lVar20 >> 6) * -0x3333333333333333;
    if (uVar15 < (uint)uVar17) {
      uVar25 = (ulong)*(short *)(lVar20 + (ulong)uVar15 * 0x140);
      if (uVar25 != 0xffffffffffffffff) {
        uVar25 = (ulong)*(ushort *)(lVar22 + uVar25 * 2 + 0x60);
      }
    }
    else {
      uVar25 = 0xffffffff;
    }
    puVar1 = (undefined2 *)(lVar20 + uVar25 * 0x140);
    if (uVar17 < uVar25 || uVar17 - uVar25 == 0) {
      puVar1 = &DAT_7105182b08;
    }
    if ((*(char *)(puVar1 + 0x2f) == '\x03') &&
       (((*(ulong *)(lVar16 + 0x260) & 0xffffffffff) != 0 ||
        (auVar45 = auVar6, *(int *)(lVar16 + 0x268) < 1)))) {
      uVar15 = FUN_7101782120((ulong *)(lVar16 + 0x250),extraout_x1_27,ppuVar30,(byte ****)pcVar32,
                              (long ****)ppppppppppppplVar33,param_6,param_7,param_8);
      auVar45._8_8_ = extraout_x1_28;
      auVar45._0_8_ = DAT_7105308750;
      if (uVar15 != 0) {
        bVar13 = true;
        *(undefined1 *)(lVar16 + 0x278) = 1;
        auVar45._0_8_ = DAT_7105308750;
      }
    }
  }
  DAT_7105308750 = auVar45._0_8_;
  if ((((*(ulong *)(lVar16 + 0x280) & 0xff00000000000000) == 0xc100000000000000) &&
      ((*(ulong *)(lVar16 + 0x280) & 0xffffffffff) != 0)) && (*(char *)(lVar16 + 0x288) == '\x04'))
  {
    lVar22 = *(long *)(*(long *)(DAT_710532f730 + 8) + 0x1d8);
    uVar15 = FUN_71032a7800(lVar22,*(ulong *)(lVar16 + 0x290));
    auVar7._8_8_ = extraout_x1_29;
    auVar7._0_8_ = DAT_7105308750;
    auVar45._8_8_ = extraout_x1_29;
    auVar45._0_8_ = DAT_7105308750;
    lVar20 = *(long *)(lVar22 + 0x20);
    uVar17 = (*(long *)(lVar22 + 0x28) - lVar20 >> 6) * -0x3333333333333333;
    if (uVar15 < (uint)uVar17) {
      uVar25 = (ulong)*(short *)(lVar20 + (ulong)uVar15 * 0x140);
      if (uVar25 != 0xffffffffffffffff) {
        uVar25 = (ulong)*(ushort *)(lVar22 + uVar25 * 2 + 0x60);
      }
    }
    else {
      uVar25 = 0xffffffff;
    }
    puVar1 = (undefined2 *)(lVar20 + uVar25 * 0x140);
    if (uVar17 < uVar25 || uVar17 - uVar25 == 0) {
      puVar1 = &DAT_7105182b08;
    }
    if ((*(char *)(puVar1 + 0x2f) == '\x03') &&
       (((*(ulong *)(lVar16 + 0x290) & 0xffffffffff) != 0 ||
        (auVar45 = auVar7, *(int *)(lVar16 + 0x298) < 1)))) {
      uVar15 = FUN_7101782120((ulong *)(lVar16 + 0x280),extraout_x1_29,ppuVar30,(byte ****)pcVar32,
                              (long ****)ppppppppppppplVar33,param_6,param_7,param_8);
      auVar45._8_8_ = extraout_x1_30;
      auVar45._0_8_ = DAT_7105308750;
      if (uVar15 != 0) {
        bVar13 = true;
        *(undefined1 *)(lVar16 + 0x2a8) = 1;
        auVar45._0_8_ = DAT_7105308750;
      }
    }
  }
  DAT_7105308750 = auVar45._0_8_;
  if ((((*(ulong *)(lVar16 + 0x2b0) & 0xff00000000000000) == 0xc100000000000000) &&
      ((*(ulong *)(lVar16 + 0x2b0) & 0xffffffffff) != 0)) && (*(char *)(lVar16 + 0x2b8) == '\x04'))
  {
    lVar22 = *(long *)(*(long *)(DAT_710532f730 + 8) + 0x1d8);
    uVar15 = FUN_71032a7800(lVar22,*(ulong *)(lVar16 + 0x2c0));
    auVar8._8_8_ = extraout_x1_31;
    auVar8._0_8_ = DAT_7105308750;
    auVar45._8_8_ = extraout_x1_31;
    auVar45._0_8_ = DAT_7105308750;
    lVar20 = *(long *)(lVar22 + 0x20);
    uVar17 = (*(long *)(lVar22 + 0x28) - lVar20 >> 6) * -0x3333333333333333;
    if (uVar15 < (uint)uVar17) {
      uVar25 = (ulong)*(short *)(lVar20 + (ulong)uVar15 * 0x140);
      if (uVar25 != 0xffffffffffffffff) {
        uVar25 = (ulong)*(ushort *)(lVar22 + uVar25 * 2 + 0x60);
      }
    }
    else {
      uVar25 = 0xffffffff;
    }
    puVar1 = (undefined2 *)(lVar20 + uVar25 * 0x140);
    if (uVar17 < uVar25 || uVar17 - uVar25 == 0) {
      puVar1 = &DAT_7105182b08;
    }
    if ((*(char *)(puVar1 + 0x2f) == '\x03') &&
       (((*(ulong *)(lVar16 + 0x2c0) & 0xffffffffff) != 0 ||
        (auVar45 = auVar8, *(int *)(lVar16 + 0x2c8) < 1)))) {
      uVar15 = FUN_7101782120((ulong *)(lVar16 + 0x2b0),extraout_x1_31,ppuVar30,(byte ****)pcVar32,
                              (long ****)ppppppppppppplVar33,param_6,param_7,param_8);
      auVar45._8_8_ = extraout_x1_32;
      auVar45._0_8_ = DAT_7105308750;
      if (uVar15 != 0) {
        bVar13 = true;
        *(undefined1 *)(lVar16 + 0x2d8) = 1;
        auVar45._0_8_ = DAT_7105308750;
      }
    }
  }
  DAT_7105308750 = auVar45._0_8_;
  if ((((*(ulong *)(lVar16 + 0x2e0) & 0xff00000000000000) == 0xc100000000000000) &&
      ((*(ulong *)(lVar16 + 0x2e0) & 0xffffffffff) != 0)) && (*(char *)(lVar16 + 0x2e8) == '\x04'))
  {
    lVar22 = *(long *)(*(long *)(DAT_710532f730 + 8) + 0x1d8);
    uVar15 = FUN_71032a7800(lVar22,*(ulong *)(lVar16 + 0x2f0));
    auVar9._8_8_ = extraout_x1_33;
    auVar9._0_8_ = DAT_7105308750;
    auVar45._8_8_ = extraout_x1_33;
    auVar45._0_8_ = DAT_7105308750;
    lVar20 = *(long *)(lVar22 + 0x20);
    uVar17 = (*(long *)(lVar22 + 0x28) - lVar20 >> 6) * -0x3333333333333333;
    if (uVar15 < (uint)uVar17) {
      uVar25 = (ulong)*(short *)(lVar20 + (ulong)uVar15 * 0x140);
      if (uVar25 != 0xffffffffffffffff) {
        uVar25 = (ulong)*(ushort *)(lVar22 + uVar25 * 2 + 0x60);
      }
    }
    else {
      uVar25 = 0xffffffff;
    }
    puVar1 = (undefined2 *)(lVar20 + uVar25 * 0x140);
    if (uVar17 < uVar25 || uVar17 - uVar25 == 0) {
      puVar1 = &DAT_7105182b08;
    }
    if ((*(char *)(puVar1 + 0x2f) == '\x03') &&
       (((*(ulong *)(lVar16 + 0x2f0) & 0xffffffffff) != 0 ||
        (auVar45 = auVar9, *(int *)(lVar16 + 0x2f8) < 1)))) {
      uVar15 = FUN_7101782120((ulong *)(lVar16 + 0x2e0),extraout_x1_33,ppuVar30,(byte ****)pcVar32,
                              (long ****)ppppppppppppplVar33,param_6,param_7,param_8);
      auVar45._8_8_ = extraout_x1_34;
      auVar45._0_8_ = DAT_7105308750;
      if (uVar15 != 0) {
        bVar13 = true;
        *(undefined1 *)(lVar16 + 0x308) = 1;
        auVar45._0_8_ = DAT_7105308750;
      }
    }
  }
  DAT_7105308750 = auVar45._0_8_;
  if ((((*(ulong *)(lVar16 + 0x310) & 0xff00000000000000) == 0xc100000000000000) &&
      ((*(ulong *)(lVar16 + 0x310) & 0xffffffffff) != 0)) && (*(char *)(lVar16 + 0x318) == '\x04'))
  {
    lVar22 = *(long *)(*(long *)(DAT_710532f730 + 8) + 0x1d8);
    uVar15 = FUN_71032a7800(lVar22,*(ulong *)(lVar16 + 800));
    auVar10._8_8_ = extraout_x1_35;
    auVar10._0_8_ = DAT_7105308750;
    auVar45._8_8_ = extraout_x1_35;
    auVar45._0_8_ = DAT_7105308750;
    lVar20 = *(long *)(lVar22 + 0x20);
    uVar17 = (*(long *)(lVar22 + 0x28) - lVar20 >> 6) * -0x3333333333333333;
    if (uVar15 < (uint)uVar17) {
      uVar25 = (ulong)*(short *)(lVar20 + (ulong)uVar15 * 0x140);
      if (uVar25 != 0xffffffffffffffff) {
        uVar25 = (ulong)*(ushort *)(lVar22 + uVar25 * 2 + 0x60);
      }
    }
    else {
      uVar25 = 0xffffffff;
    }
    puVar1 = (undefined2 *)(lVar20 + uVar25 * 0x140);
    if (uVar17 < uVar25 || uVar17 - uVar25 == 0) {
      puVar1 = &DAT_7105182b08;
    }
    if ((*(char *)(puVar1 + 0x2f) == '\x03') &&
       (((*(ulong *)(lVar16 + 800) & 0xffffffffff) != 0 ||
        (auVar45 = auVar10, *(int *)(lVar16 + 0x328) < 1)))) {
      uVar15 = FUN_7101782120((ulong *)(lVar16 + 0x310),extraout_x1_35,ppuVar30,(byte ****)pcVar32,
                              (long ****)ppppppppppppplVar33,param_6,param_7,param_8);
      auVar45._8_8_ = extraout_x1_36;
      auVar45._0_8_ = DAT_7105308750;
      if (uVar15 != 0) {
        bVar13 = true;
        *(undefined1 *)(lVar16 + 0x338) = 1;
        auVar45._0_8_ = DAT_7105308750;
      }
    }
  }
  DAT_7105308750 = auVar45._0_8_;
  if ((((*(ulong *)(lVar16 + 0x340) & 0xff00000000000000) == 0xc100000000000000) &&
      ((*(ulong *)(lVar16 + 0x340) & 0xffffffffff) != 0)) && (*(char *)(lVar16 + 0x348) == '\x04'))
  {
    lVar22 = *(long *)(*(long *)(DAT_710532f730 + 8) + 0x1d8);
    uVar15 = FUN_71032a7800(lVar22,*(ulong *)(lVar16 + 0x350));
    auVar11._8_8_ = extraout_x1_37;
    auVar11._0_8_ = DAT_7105308750;
    auVar45._8_8_ = extraout_x1_37;
    auVar45._0_8_ = DAT_7105308750;
    lVar20 = *(long *)(lVar22 + 0x20);
    uVar17 = (*(long *)(lVar22 + 0x28) - lVar20 >> 6) * -0x3333333333333333;
    if (uVar15 < (uint)uVar17) {
      uVar25 = (ulong)*(short *)(lVar20 + (ulong)uVar15 * 0x140);
      if (uVar25 != 0xffffffffffffffff) {
        uVar25 = (ulong)*(ushort *)(lVar22 + uVar25 * 2 + 0x60);
      }
    }
    else {
      uVar25 = 0xffffffff;
    }
    puVar1 = (undefined2 *)(lVar20 + uVar25 * 0x140);
    if (uVar17 < uVar25 || uVar17 - uVar25 == 0) {
      puVar1 = &DAT_7105182b08;
    }
    if ((*(char *)(puVar1 + 0x2f) != '\x03') ||
       (((*(ulong *)(lVar16 + 0x350) & 0xffffffffff) == 0 &&
        (auVar45 = auVar11, 0 < *(int *)(lVar16 + 0x358))))) goto LAB_71018c1264;
    uVar15 = FUN_7101782120((ulong *)(lVar16 + 0x340),extraout_x1_37,ppuVar30,(byte ****)pcVar32,
                            (long ****)ppppppppppppplVar33,param_6,param_7,param_8);
    auVar45._8_8_ = extraout_x1_38;
    auVar45._0_8_ = DAT_7105308750;
    if (uVar15 == 0) goto LAB_71018c1264;
    *(undefined1 *)(lVar16 + 0x368) = 1;
joined_r0x0071018c126c:
    if (((DAT_71053144d8 & 1) == 0) && (iVar14 = __cxa_guard_acquire(&DAT_71053144d8), iVar14 != 0))
    {
      FUN_7101764000();
      FUN_71000001c0();
      __cxa_guard_release(&DAT_71053144d8);
    }
    ppuVar30 = (undefined **)0x1e0;
    memcpy(&DAT_7105308570,puVar28,0x1e0);
    auVar45._8_8_ = extraout_x1_39;
    auVar45._0_8_ = DAT_7105308750;
  }
  else {
LAB_71018c1264:
    DAT_7105308750 = auVar45._0_8_;
    if (bVar13) goto joined_r0x0071018c126c;
  }
  DAT_7105308750 = auVar45._0_8_;
  FUN_7101d2b290(lVar16,auVar45._8_8_,ppuVar30,(byte ****)pcVar32,ppppppppppppplVar33,param_6,
                 (ulong)param_7,(ulong)param_8);
  local_250 = (long ********)&DAT_c1ffff0000000000;
  local_248 = CONCAT11(local_248._1_1_,0xff);
  local_240 = 0;
  local_238 = (undefined1 *)0x0;
  ppppppppplVar26 = &local_250;
  FUN_7103385da0(*(undefined8 *)(lVar16 + 0x560),*(long **)(lVar16 + 0x128),(ulong *)ppppppppplVar26
                 ,(byte ****)pcVar32,(long ****)ppppppppppppplVar33,param_6,(ulong)param_7,
                 (ulong)param_8);
  *(undefined8 *)(lVar16 + 8) = 0;
  *(undefined8 *)(lVar16 + 0x10) = 0;
  *(undefined8 *)(lVar16 + 0x10c) = 0;
  *(undefined8 *)(lVar16 + 0x104) = 0;
  *(undefined4 *)(lVar16 + 0x114) = 0;
  *(undefined8 *)(lVar16 + 0xfc) = 0;
  *(undefined8 *)(lVar16 + 0xf4) = 0;
  *(undefined8 *)(lVar16 + 0xec) = 0;
  *(undefined8 *)(lVar16 + 0xe4) = 0;
  *(undefined8 *)(lVar16 + 0xdc) = 0;
  *(undefined8 *)(lVar16 + 0xd4) = 0;
  *(undefined8 *)(lVar16 + 0xcc) = 0;
  *(undefined8 *)(lVar16 + 0x118) = 0xffffffff;
  *(undefined4 *)(lVar16 + 0x120) = 0xffffffff;
  *(undefined1 *)(lVar16 + 0x124) = 0;
  *(undefined4 *)(lVar16 + 200) = 0;
  lVar16 = *plVar44;
  uVar27 = extraout_x1_40;
  while (uVar17 = FUN_710323cb80(lVar16,uVar27,ppppppppplVar26,(byte ****)pcVar32,
                                 (long ****)ppppppppppppplVar33,param_6,param_7,param_8),
        (uVar17 & 1) == 0) {
    nn::os::SleepThread(1000000);
    uVar27 = extraout_x1_41;
  }
  lVar16 = *(long *)(*(long *)(*DAT_7105329f98 + 0x20) + 8);
  uVar27 = extraout_x1_42;
  while (uVar17 = FUN_710323cb80(lVar16,uVar27,ppppppppplVar26,(byte ****)pcVar32,
                                 (long ****)ppppppppppppplVar33,param_6,param_7,param_8),
        (uVar17 & 1) == 0) {
    nn::os::SleepThread(1000000);
    uVar27 = extraout_x1_43;
  }
  if (*(uint *)(param_1 + 0xd4) < 0x13) {
    *(undefined4 *)(param_1 + (long)(int)*(uint *)(param_1 + 0xd4) * 4 + 0x88) = 1;
    return;
  }
LAB_71018c14c8:
                    /* WARNING: Subroutine does not return */
  abort();
}

