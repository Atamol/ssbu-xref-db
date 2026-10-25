// addr:      7101a4b380
// offset:    0x1a4b380
// name:      FUN_7101a4b380
// mangled:   
// signature: undefined __cdecl FUN_7101a4b380(long param_1, long param_2, long * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_7101a4b380(long param_1,long param_2,long ****param_3,byte ****param_4,long ****param_5,
                   undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long *plVar1;
  ulong *puVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined2 uVar5;
  int iVar6;
  bool bVar7;
  long *plVar8;
  ulong uVar9;
  undefined8 *puVar10;
  undefined1 *puVar11;
  long lVar12;
  ulong uVar13;
  long ****pppplVar14;
  long *plVar15;
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
  long *********ppppppppplVar16;
  long ****pppplVar17;
  char *pcVar18;
  long *********ppppppppplVar19;
  byte ****ppppbVar20;
  long ****pppplVar21;
  code *pcVar22;
  long ***ppplVar23;
  long ****pppplVar24;
  long **pplVar25;
  byte **ppbVar26;
  long lVar27;
  long ***ppplVar28;
  long *plVar29;
  undefined8 uVar30;
  long *plVar31;
  undefined8 uVar32;
  long lVar33;
  long lVar34;
  undefined8 *puVar35;
  undefined8 *puVar36;
  undefined4 *puVar37;
  ulong uVar38;
  undefined8 *puVar39;
  undefined8 *puVar40;
  long lVar41;
  undefined1 auVar42 [16];
  uint auStack_6f8 [2];
  long ***appplStack_6f0 [8];
  undefined8 local_6b0;
  undefined8 local_6a8;
  undefined4 local_6a0;
  undefined2 local_69c;
  undefined1 local_69a;
  undefined1 *local_698;
  undefined4 local_690;
  long alStack_680 [4];
  long *local_660;
  long alStack_650 [4];
  long *local_630;
  long alStack_620 [4];
  long *local_600;
  long alStack_5f0 [4];
  long *local_5d0;
  long alStack_5c0 [4];
  long *local_5a0;
  undefined4 local_590;
  undefined8 local_580;
  undefined8 local_578;
  undefined4 local_570;
  undefined2 local_56c;
  undefined1 local_56a;
  undefined1 *local_568;
  long *local_560;
  long alStack_550 [4];
  long *local_530;
  long alStack_520 [4];
  long *local_500;
  long alStack_4f0 [4];
  long *local_4d0;
  long alStack_4c0 [4];
  long *local_4a0;
  long alStack_490 [4];
  long *local_470;
  undefined4 local_460;
  undefined8 local_3d8;
  undefined8 local_3d0;
  undefined8 local_3c8;
  undefined2 local_3c0;
  undefined8 local_3bc;
  undefined2 local_3b4;
  undefined8 local_3b0;
  ushort local_3a8 [24];
  undefined4 local_378;
  uint uStack_374;
  undefined4 local_370;
  undefined1 local_36c;
  undefined1 *local_368;
  undefined1 *local_360;
  undefined2 local_358;
  undefined8 auStack_350 [52];
  undefined1 local_1b0;
  undefined7 uStack_1af;
  undefined8 local_1a8;
  undefined1 local_1a0;
  undefined8 local_198;
  undefined8 local_190;
  byte ***apppbStack_180 [4];
  byte ****local_160;
  long ***local_150;
  undefined2 local_148;
  undefined4 local_140 [2];
  undefined4 local_138;
  undefined1 local_134;
  undefined4 local_130;
  undefined1 local_12c;
  undefined4 local_128;
  undefined1 local_124;
  undefined4 local_120;
  int local_11c;
  undefined4 local_118;
  long *local_100;
  undefined4 local_f0;
  undefined2 local_ec;
  undefined2 uStack_ea;
  undefined4 uStack_e8;
  undefined1 uStack_e4;
  undefined1 uStack_e3;
  long ***local_e0;
  long ***local_d8;
  long ****local_c0;
  long ***local_b0;
  code *local_a8;
  undefined8 local_a0;
  long *local_98;
  long ****local_90;
  undefined4 local_68;
  undefined4 local_64;
  
  ppppbVar20 = param_4;
  pppplVar21 = param_5;
  plVar8 = (long *)FUN_710392e290(0x10,0x430,param_3,param_4,param_5,param_6,param_7,param_8);
  if (plVar8 == (long *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_6b0 = (undefined **)((ulong)local_6b0 & 0xffffffff00000000);
      local_580 = (undefined **)0x430;
      pppplVar14 = (long ****)&local_580;
      uVar9 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_6b0);
      if (((uVar9 & 1) != 0) &&
         (plVar8 = (long *)FUN_710392e290(0x10,0x430,pppplVar14,ppppbVar20,pppplVar21,param_6,
                                          param_7,param_8), plVar8 != (long *)0x0))
      goto LAB_7101a4b414;
    }
    plVar8 = (long *)0x0;
  }
LAB_7101a4b414:
  *plVar8 = (long)plVar8;
  plVar8[1] = 0;
  ppppppppplVar16 = (long *********)0x10c;
  *(undefined4 *)((long)plVar8 + 0x134) = 0;
  plVar8[2] = 0;
  plVar8[3] = 0;
  plVar8[4] = 0;
  plVar8[0x27] = 0xffffffff;
  *(undefined4 *)(plVar8 + 0x28) = 0xffffffff;
  *(undefined1 *)((long)plVar8 + 0x144) = 0;
  memset(plVar8 + 5,0,0x10c);
  plVar8[0x29] = param_2;
  plVar8[0x2a] = 0;
  plVar8[0x30] = 0;
  plVar8[0x36] = 0;
  plVar8[0x3c] = 0;
  plVar8[0x42] = 0;
  *(undefined2 *)(plVar8 + 0x44) = 0;
  *(undefined1 *)((long)plVar8 + 0x224) = 0xff;
  plVar8[0x45] = 0;
  *(undefined2 *)(plVar8 + 0x46) = 0;
  *(undefined4 *)(plVar8 + 0x49) = 1;
  *(undefined4 *)(plVar8 + 0x4e) = 0;
  plVar8[0x4d] = 0;
  plVar8[0x4c] = 0;
  plVar8[0x4b] = 0;
  *(undefined1 *)((long)plVar8 + 0x274) = 0xff;
  plVar8[0x4a] = 0;
  FUN_7103776290(plVar8 + 0x4f,extraout_x1,(long ****)ppppppppplVar16,ppppbVar20,pppplVar21,param_6,
                 param_7,param_8);
  FUN_7103776290(plVar8 + 0x51,extraout_x1_00,(long ****)ppppppppplVar16,ppppbVar20,pppplVar21,
                 param_6,param_7,param_8);
  FUN_7103776290(plVar8 + 0x53,extraout_x1_01,(long ****)ppppppppplVar16,ppppbVar20,pppplVar21,
                 param_6,param_7,param_8);
  FUN_7103776290(plVar8 + 0x55,extraout_x1_02,(long ****)ppppppppplVar16,ppppbVar20,pppplVar21,
                 param_6,param_7,param_8);
  FUN_7103776290(plVar8 + 0x57,extraout_x1_03,(long ****)ppppppppplVar16,ppppbVar20,pppplVar21,
                 param_6,param_7,param_8);
  plVar8[0x59] = (long)&PTR_FUN_710523d9e8;
  puVar10 = (undefined8 *)
            FUN_710392e290(0x10,0x18,(long ****)ppppppppplVar16,ppppbVar20,pppplVar21,param_6,
                           param_7,param_8);
  uVar30 = extraout_x1_04;
  if (puVar10 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_6b0 = (undefined **)((ulong)local_6b0 & 0xffffffff00000000);
      local_580 = (undefined **)&SUB_00000018;
      ppppppppplVar16 = (long *********)&local_580;
      auVar42 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_6b0);
      uVar30 = auVar42._8_8_;
      if (((auVar42._0_8_ & 1) != 0) &&
         (puVar10 = (undefined8 *)
                    FUN_710392e290(0x10,0x18,(long ****)ppppppppplVar16,ppppbVar20,pppplVar21,
                                   param_6,param_7,param_8), uVar30 = extraout_x1_05,
         puVar10 != (undefined8 *)0x0)) goto LAB_7101a4b520;
    }
    puVar10 = (undefined8 *)0x0;
  }
LAB_7101a4b520:
  *puVar10 = 0;
  puVar10[1] = 0;
  *(undefined1 *)(puVar10 + 2) = 1;
  plVar8[0x5a] = (long)puVar10;
  *(undefined4 *)(plVar8 + 0x5b) = 0;
  FUN_7103776290(plVar8 + 0x5c,uVar30,(long ****)ppppppppplVar16,ppppbVar20,pppplVar21,param_6,
                 param_7,param_8);
  FUN_7103776290(plVar8 + 0x5e,extraout_x1_06,(long ****)ppppppppplVar16,ppppbVar20,pppplVar21,
                 param_6,param_7,param_8);
  plVar8[0x60] = 0;
  plVar8[0x61] = (long)&PTR_FUN_710523d9e8;
  puVar10 = (undefined8 *)
            FUN_710392e290(0x10,0x18,(long ****)ppppppppplVar16,ppppbVar20,pppplVar21,param_6,
                           param_7,param_8);
  if (puVar10 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_6b0 = (undefined **)((ulong)local_6b0 & 0xffffffff00000000);
      local_580 = (undefined **)&SUB_00000018;
      ppppppppplVar16 = (long *********)&local_580;
      uVar9 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_6b0);
      if (((uVar9 & 1) != 0) &&
         (puVar10 = (undefined8 *)
                    FUN_710392e290(0x10,0x18,(long ****)ppppppppplVar16,ppppbVar20,pppplVar21,
                                   param_6,param_7,param_8), puVar10 != (undefined8 *)0x0))
      goto LAB_7101a4b59c;
    }
    puVar10 = (undefined8 *)0x0;
  }
LAB_7101a4b59c:
  *puVar10 = 0;
  puVar10[1] = 0;
  *(undefined1 *)(puVar10 + 2) = 1;
  plVar8[0x62] = (long)puVar10;
  plVar8[99] = (long)&PTR_FUN_710523d9e8;
  puVar10 = (undefined8 *)
            FUN_710392e290(0x10,0x18,(long ****)ppppppppplVar16,ppppbVar20,pppplVar21,param_6,
                           param_7,param_8);
  uVar30 = extraout_x1_07;
  if (puVar10 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_6b0 = (undefined **)((ulong)local_6b0 & 0xffffffff00000000);
      local_580 = (undefined **)&SUB_00000018;
      ppppppppplVar16 = (long *********)&local_580;
      auVar42 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_6b0);
      uVar30 = auVar42._8_8_;
      if (((auVar42._0_8_ & 1) != 0) &&
         (puVar10 = (undefined8 *)
                    FUN_710392e290(0x10,0x18,(long ****)ppppppppplVar16,ppppbVar20,pppplVar21,
                                   param_6,param_7,param_8), uVar30 = extraout_x1_08,
         puVar10 != (undefined8 *)0x0)) goto LAB_7101a4b604;
    }
    puVar10 = (undefined8 *)0x0;
  }
LAB_7101a4b604:
  *(undefined1 *)(puVar10 + 2) = 1;
  *puVar10 = 0;
  puVar10[1] = 0;
  plVar8[100] = (long)puVar10;
  plVar8[0x66] = (long)&PTR_FUN_71050a8090;
  plVar8[0x65] = 0;
  plVar8[0x67] = 0;
  plVar8[0x68] = (long)&PTR_FUN_71050a8750;
  plVar8[0x69] = 0;
  FUN_71019e8a70(plVar8 + 0x6a,uVar30,(long ****)ppppppppplVar16,ppppbVar20,pppplVar21,param_6,
                 param_7,param_8);
  FUN_71019e9c80(plVar8 + 0x6c,extraout_x1_09,(long ****)ppppppppplVar16,ppppbVar20,pppplVar21,
                 param_6,param_7,param_8);
  FUN_71019ea8a0(plVar8 + 0x6e,extraout_x1_10,(long ****)ppppppppplVar16,ppppbVar20,pppplVar21,
                 param_6,param_7,param_8);
  plVar8[0x70] = (long)&PTR_FUN_71050a8870;
  plVar8[0x71] = 0;
  FUN_71019f2350(plVar8 + 0x72,extraout_x1_11,(long ****)ppppppppplVar16,ppppbVar20,pppplVar21,
                 param_6,param_7,param_8);
  FUN_71019e5890(plVar8 + 0x74,extraout_x1_12,(long ****)ppppppppplVar16,ppppbVar20,pppplVar21,
                 param_6,param_7,param_8);
  *(undefined4 *)(plVar8 + 0x79) = 0;
  plVar8[0x78] = 0;
  plVar8[0x77] = 0;
  plVar8[0x76] = 0;
  *(undefined8 *)((long)plVar8 + 0x3dc) = 0xffffffffffffffff;
  *(undefined8 *)((long)plVar8 + 0x3cc) = 0xffffffffffffffff;
  *(undefined8 *)((long)plVar8 + 0x3d4) = 0xffffffffffffffff;
  *(undefined4 *)((long)plVar8 + 0x3e4) = 3;
  plVar8[0x80] = 0;
  plVar8[0x7f] = 0;
  plVar8[0x7e] = 0;
  plVar8[0x7d] = 0;
  puVar11 = FUN_71032631a0(*(long *)(*(long *)(DAT_710532f730 + 8) + 0x168),0xfd5f7fa78);
  plVar8[0x81] = (long)puVar11;
  *(undefined1 *)(plVar8 + 0x83) = 0;
  plVar8[0x82] = 0;
  *(undefined2 *)((long)plVar8 + 0x419) = 0x101;
  *(undefined2 *)((long)plVar8 + 0x41f) = 0;
  *(undefined4 *)((long)plVar8 + 0x41b) = 0;
  uVar9 = plVar8[0x4a];
  if ((ulong)(((long)(plVar8[0x4c] - uVar9) >> 3) * 0x7efdfbf7efdfbf7f) < 5) {
    uVar38 = plVar8[0x4b];
    lVar27 = (long)(uVar38 - uVar9) >> 3;
    lVar12 = FUN_710392e290(0x10,0x13d8,(long ****)ppppppppplVar16,ppppbVar20,pppplVar21,param_6,
                            param_7,param_8);
    if (lVar12 == 0) {
      if (DAT_7105332f00 != (long *)0x0) {
        local_6b0 = (undefined **)((ulong)local_6b0 & 0xffffffff00000000);
        local_580 = (undefined **)0x13d8;
        ppppppppplVar16 = (long *********)&local_580;
        uVar13 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_6b0);
        if (((uVar13 & 1) != 0) &&
           (lVar12 = FUN_710392e290(0x10,0x13d8,(long ****)ppppppppplVar16,ppppbVar20,pppplVar21,
                                    param_6,param_7,param_8), lVar12 != 0)) goto LAB_7101a4b794;
      }
      lVar12 = 0;
    }
LAB_7101a4b794:
    lVar41 = lVar12 + lVar27 * 8;
    lVar34 = lVar41;
    if (uVar38 != uVar9) {
      lVar34 = 0;
      do {
        lVar33 = uVar38 + lVar34;
        lVar3 = lVar12 + lVar27 * 8 + lVar34;
        *(undefined4 *)(lVar3 + -0x3f8) = *(undefined4 *)(lVar33 + -0x3f8);
        FUN_71015547e0((undefined8 *)(lVar3 + -0x3f0),(undefined8 *)(lVar33 + -0x3f0));
        uVar5 = *(undefined2 *)(lVar33 + -0x238);
        uVar30 = *(undefined8 *)(lVar33 + -0x248);
        uVar32 = *(undefined8 *)(lVar33 + -0x240);
        *(undefined8 *)(lVar3 + -0x250) = *(undefined8 *)(lVar33 + -0x250);
        *(undefined2 *)(lVar3 + -0x238) = uVar5;
        *(undefined8 *)(lVar3 + -0x240) = uVar32;
        *(undefined8 *)(lVar3 + -0x248) = uVar30;
        uVar30 = *(undefined8 *)(lVar33 + -0x234);
        *(undefined2 *)(lVar3 + -0x22c) = *(undefined2 *)(lVar33 + -0x22c);
        *(undefined8 *)(lVar3 + -0x234) = uVar30;
        *(uint *)(lVar3 + -0x228) = 0;
        FUN_7101696040((uint *)(lVar3 + -0x228),(ushort *)(lVar33 + -0x220));
        uVar30 = *(undefined8 *)(lVar33 + -0x1f0);
        *(undefined8 *)(lVar3 + -0x1eb) = *(undefined8 *)(lVar33 + -0x1eb);
        *(undefined8 *)(lVar3 + -0x1f0) = uVar30;
        uVar32 = *(undefined8 *)(lVar33 + -0x1d8);
        uVar30 = *(undefined8 *)(lVar33 + -0x1e0);
        *(undefined2 *)(lVar3 + -0x1d0) = *(undefined2 *)(lVar33 + -0x1d0);
        *(undefined8 *)(lVar3 + -0x1d8) = uVar32;
        *(undefined8 *)(lVar3 + -0x1e0) = uVar30;
        FUN_71015547e0((undefined8 *)(lVar3 + -0x1c8),(undefined8 *)(lVar33 + -0x1c8));
        uVar30 = *(undefined8 *)(lVar33 + -0x28);
        uVar32 = *(undefined8 *)(lVar33 + -0x20);
        *(undefined1 *)(lVar3 + -0x18) = *(undefined1 *)(lVar33 + -0x18);
        *(undefined8 *)(lVar3 + -0x28) = uVar30;
        *(undefined8 *)(lVar3 + -0x20) = uVar32;
        uVar30 = *(undefined8 *)(lVar33 + -8);
        lVar34 = lVar34 + -0x3f8;
        *(undefined8 *)(lVar3 + -0x10) = *(undefined8 *)(lVar33 + -0x10);
        *(undefined8 *)(lVar3 + -8) = uVar30;
      } while (uVar9 - uVar38 != lVar34);
      uVar38 = plVar8[0x4a];
      lVar34 = lVar12 + lVar27 * 8 + lVar34;
    }
    plVar8[0x4a] = lVar34;
    plVar8[0x4b] = lVar41;
    plVar8[0x4c] = lVar12 + 0x13d8;
    if (uVar38 != 0) {
      FUN_710392eb40(uVar38);
    }
  }
  puVar10 = (undefined8 *)plVar8[0x76];
  if ((ulong)(plVar8[0x78] - (long)puVar10 >> 4) < 5) {
    puVar39 = (undefined8 *)plVar8[0x77];
    lVar12 = FUN_710392e290(0x10,0x50,(long ****)ppppppppplVar16,ppppbVar20,pppplVar21,param_6,
                            param_7,param_8);
    if (lVar12 == 0) {
      if (DAT_7105332f00 != (long *)0x0) {
        local_6b0 = (undefined **)((ulong)local_6b0 & 0xffffffff00000000);
        local_580 = (undefined **)&DAT_00000050;
        ppppppppplVar16 = (long *********)&local_580;
        uVar9 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_6b0);
        if (((uVar9 & 1) != 0) &&
           (lVar12 = FUN_710392e290(0x10,0x50,(long ****)ppppppppplVar16,ppppbVar20,pppplVar21,
                                    param_6,param_7,param_8), lVar12 != 0)) goto LAB_7101a4b9a4;
      }
      lVar12 = 0;
    }
LAB_7101a4b9a4:
    puVar4 = (undefined8 *)(lVar12 + ((long)puVar39 - (long)puVar10 >> 4) * 0x10);
    puVar35 = puVar4;
    if (puVar39 == puVar10) {
      plVar8[0x76] = (long)puVar4;
      plVar8[0x77] = (long)puVar4;
      plVar8[0x78] = lVar12 + 0x50;
    }
    else {
      do {
        puVar40 = puVar39 + -2;
        puVar36 = puVar35 + -2;
        *puVar36 = &PTR_FUN_71050a8c98;
        puVar35[-1] = 0;
        if (puVar39 != puVar35) {
          uVar30 = puVar39[-1];
          puVar39[-1] = 0;
          uVar9 = puVar35[-1];
          puVar35[-1] = uVar30;
          if (uVar9 != 0) {
            FUN_7101a41fd0(uVar9);
            FUN_710392eb40(uVar9);
          }
        }
        puVar35 = puVar36;
        puVar39 = puVar40;
      } while (puVar10 != puVar40);
      puVar39 = (undefined8 *)plVar8[0x76];
      puVar10 = (undefined8 *)plVar8[0x77];
      plVar8[0x76] = (long)puVar36;
      plVar8[0x77] = (long)puVar4;
      plVar8[0x78] = lVar12 + 0x50;
      while (puVar10 != puVar39) {
        puVar10 = puVar10 + -2;
        (**(code **)*puVar10)(puVar10);
      }
    }
    if (puVar39 != (undefined8 *)0x0) {
      FUN_710392eb40((ulong)puVar39);
    }
  }
  plVar8[5] = (long)FUN_7101a45710;
  plVar8[6] = 0;
  plVar8[7] = (long)FUN_7101a45720;
  plVar8[8] = 0;
  plVar8[9] = (long)FUN_7101a45750;
  plVar8[10] = 0;
  plVar8[0xd] = (long)FUN_7101a45f70;
  plVar8[0xe] = 0;
  plVar8[0xf] = (long)FUN_7101a461a0;
  plVar8[0x10] = 0;
  plVar8[0x13] = (long)FUN_7101a46e60;
  plVar8[0x14] = 0;
  plVar8[0xb] = (long)FUN_7101a45ac0;
  plVar8[0xc] = 0;
  plVar8[0x15] = (long)FUN_7101a470c0;
  plVar8[0x16] = 0;
  plVar8[0x11] = (long)FUN_7101a46aa0;
  plVar8[0x12] = 0;
  plVar8[0x19] = (long)FUN_7101a476a0;
  plVar8[0x1a] = 0;
  plVar8[0x17] = (long)FUN_7101a47320;
  plVar8[0x18] = 0;
  plVar8[0x1b] = (long)FUN_7101a47b50;
  plVar8[0x1c] = 0;
  plVar8[1] = 0;
  plVar8[2] = 0;
  *(undefined8 *)((long)plVar8 + 300) = 0;
  *(undefined8 *)((long)plVar8 + 0x124) = 0;
  *(undefined8 *)((long)plVar8 + 0x11c) = 0;
  *(undefined8 *)((long)plVar8 + 0x114) = 0;
  *(undefined8 *)((long)plVar8 + 0x10c) = 0;
  *(undefined8 *)((long)plVar8 + 0x104) = 0;
  *(undefined8 *)((long)plVar8 + 0x134) = 0xffffffff00000000;
  *(undefined8 *)((long)plVar8 + 0xfc) = 0;
  *(undefined8 *)((long)plVar8 + 0xf4) = 0;
  *(undefined8 *)((long)plVar8 + 0xec) = 0;
  *(undefined8 *)((long)plVar8 + 0x13c) = 0xffffffff00000000;
  *(undefined1 *)((long)plVar8 + 0x144) = 0;
  *(undefined4 *)(plVar8 + 0x1d) = 1;
  FUN_7101a484a0(plVar8);
  uVar9 = *(ulong *)(param_1 + 8);
  *(long **)(param_1 + 8) = plVar8;
  if (uVar9 != 0) {
    FUN_7101a48ee0(uVar9,extraout_x1_13,ppppppppplVar16,ppppbVar20,pppplVar21,param_6,param_7,
                   param_8);
    FUN_710392eb40(uVar9);
    plVar8 = *(long **)(param_1 + 8);
  }
  *(undefined4 *)(plVar8 + 0x2a) = *(undefined4 *)param_4;
  *(undefined4 *)((long)plVar8 + 0x154) = *(undefined4 *)((long)param_4 + 4);
  pppplVar14 = (long ****)param_5[4];
  if (pppplVar14 == (long ****)0x0) {
    local_560 = (long *)0x0;
  }
  else if (param_5 == pppplVar14) {
    local_560 = &local_580;
    (*(code *)(*pppplVar14)[3])(pppplVar14,&local_580);
  }
  else {
    local_560 = (long *)(*(code *)(*pppplVar14)[2])();
  }
  FUN_7101a3b4a0(&local_580,plVar8 + 0x2c);
  if (&local_580 == local_560) {
    pcVar22 = *(code **)(*local_560 + 0x20);
LAB_7101a4bc30:
    (*pcVar22)();
  }
  else if (local_560 != (long *)0x0) {
    pcVar22 = *(code **)(*local_560 + 0x28);
    goto LAB_7101a4bc30;
  }
  pppplVar14 = (long ****)param_5[10];
  if (pppplVar14 == (long ****)0x0) {
    local_560 = (long *)0x0;
  }
  else if (param_5 + 6 == pppplVar14) {
    local_560 = &local_580;
    (*(code *)(*pppplVar14)[3])(pppplVar14,&local_580);
  }
  else {
    local_560 = (long *)(*(code *)(*pppplVar14)[2])();
  }
  FUN_7101a3b5e0(&local_580,plVar8 + 0x32);
  if (&local_580 == local_560) {
    pcVar22 = *(code **)(*local_560 + 0x20);
LAB_7101a4bcb4:
    (*pcVar22)();
  }
  else if (local_560 != (long *)0x0) {
    pcVar22 = *(code **)(*local_560 + 0x28);
    goto LAB_7101a4bcb4;
  }
  pppplVar14 = (long ****)param_5[0x10];
  if (pppplVar14 == (long ****)0x0) {
    local_560 = (long *)0x0;
  }
  else if (param_5 + 0xc == pppplVar14) {
    local_560 = &local_580;
    (*(code *)(*pppplVar14)[3])(pppplVar14,&local_580);
  }
  else {
    local_560 = (long *)(*(code *)(*pppplVar14)[2])();
  }
  FUN_7101a3b7e0(&local_580,plVar8 + 0x38);
  if (&local_580 == local_560) {
    pcVar22 = *(code **)(*local_560 + 0x20);
LAB_7101a4bd38:
    (*pcVar22)();
  }
  else if (local_560 != (long *)0x0) {
    pcVar22 = *(code **)(*local_560 + 0x28);
    goto LAB_7101a4bd38;
  }
  pppplVar14 = (long ****)param_5[0x16];
  if (pppplVar14 == (long ****)0x0) {
    local_560 = (long *)0x0;
  }
  else if (param_5 + 0x12 == pppplVar14) {
    local_560 = &local_580;
    (*(code *)(*pppplVar14)[3])(pppplVar14,&local_580);
  }
  else {
    local_560 = (long *)(*(code *)(*pppplVar14)[2])();
  }
  FUN_7101a3bc70(&local_580,plVar8 + 0x3e);
  if (&local_580 == local_560) {
    pcVar22 = *(code **)(*local_560 + 0x20);
LAB_7101a4bdbc:
    (*pcVar22)();
  }
  else if (local_560 != (long *)0x0) {
    pcVar22 = *(code **)(*local_560 + 0x28);
    goto LAB_7101a4bdbc;
  }
  pppplVar14 = (long ****)(plVar8 + 0x4f);
  if (pppplVar14 != param_3) {
    *(long ***)plVar8[0x50] = *param_3[1];
    *(long ***)(plVar8[0x50] + 8) = param_3[1][1];
    ppplVar28 = param_3[1];
    ppplVar23 = (long ***)plVar8[0x50];
    if (ppplVar23 != ppplVar28) {
      *ppplVar23[3] = *ppplVar28[3];
      ppplVar23[3][1] = ppplVar28[3][1];
      ppplVar23[3][2] = ppplVar28[3][2];
      ppplVar23[3][3] = ppplVar28[3][3];
    }
  }
  FUN_7103776640(&local_580,(long)pppplVar14,(byte ****)"set_part_%dp_subwindow",
                 (ulong)((int)plVar8[0x2a] + 1),ppppbVar20,pppplVar21,param_6,param_7,param_8);
  uVar9 = local_578;
  ppppppppplVar16 = (long *********)(plVar8 + 0x51);
  if (ppppppppplVar16 != (long *********)&local_580) {
    local_578 = 0;
    uVar38 = plVar8[0x52];
    plVar8[0x52] = uVar9;
    if (uVar38 != 0) {
      uVar9 = *(ulong *)(uVar38 + 0x18);
      *(undefined ***)(uVar38 + 0x10) = &PTR_FUN_710523d9a8;
      *(undefined8 *)(uVar38 + 0x18) = 0;
      if (uVar9 != 0) {
        FUN_710392eb40(uVar9);
      }
      FUN_710392eb40(uVar38);
    }
  }
  uVar9 = local_578;
  local_580 = &PTR_FUN_710523d988;
  local_578 = 0;
  if (uVar9 != 0) {
    uVar38 = *(ulong *)(uVar9 + 0x18);
    *(undefined ***)(uVar9 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar9 + 0x18) = 0;
    if (uVar38 != 0) {
      FUN_710392eb40(uVar38);
    }
    FUN_710392eb40(uVar9);
  }
  uVar9 = (ulong)(*(int *)((long)plVar8 + 0x154) + 1);
  FUN_7103778430((long)ppppppppplVar16,"subwindow_%dp",uVar9,ppppbVar20,pppplVar21,param_6,param_7,
                 param_8);
  FUN_7103778300(0x3f800000,plVar8[0x52],0x7104308c25);
  FUN_7103776910(&local_6b0,(long)ppppppppplVar16,(long ****)"set_txt_player",uVar9,ppppbVar20,
                 pppplVar21,param_6,param_7,param_8);
  FUN_71003a4ca0((uint *)&local_580,"cmn_%dp",(ulong)((int)plVar8[0x2a] + 1),uVar9,ppppbVar20,
                 pppplVar21,param_6,param_7,param_8);
  FUN_710377a120((long)&local_6b0,(char *)&local_578,uVar9,ppppbVar20,pppplVar21,param_6,param_7,
                 param_8);
  uVar9 = local_6a8;
  local_6b0 = &PTR_FUN_710523d9a8;
  local_6a8 = 0;
  if (uVar9 != 0) {
    FUN_710392eb40(uVar9);
  }
  FUN_7103776640(&local_580,(long)pppplVar14,(byte ****)"set_btn_%dp_hd",
                 (ulong)((int)plVar8[0x2a] + 1),ppppbVar20,pppplVar21,param_6,param_7,param_8);
  uVar9 = local_578;
  if (plVar8 + 0x53 != &local_580) {
    local_578 = 0;
    uVar38 = plVar8[0x54];
    plVar8[0x54] = uVar9;
    if (uVar38 != 0) {
      uVar9 = *(ulong *)(uVar38 + 0x18);
      *(undefined ***)(uVar38 + 0x10) = &PTR_FUN_710523d9a8;
      *(undefined8 *)(uVar38 + 0x18) = 0;
      if (uVar9 != 0) {
        FUN_710392eb40(uVar9);
      }
      FUN_710392eb40(uVar38);
    }
  }
  uVar9 = local_578;
  local_580 = &PTR_FUN_710523d988;
  local_578 = 0;
  if (uVar9 != 0) {
    uVar38 = *(ulong *)(uVar9 + 0x18);
    *(undefined ***)(uVar9 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar9 + 0x18) = 0;
    if (uVar38 != 0) {
      FUN_710392eb40(uVar38);
    }
    FUN_710392eb40(uVar9);
  }
  FUN_7103778300(0x3f800000,plVar8[0x54],0x71042a37e8);
  FUN_7103778300(0x3f800000,plVar8[0x54],0x7104329fc1);
  if ((*(long *)(plVar8[0x54] + 8) != 0) &&
     (lVar12 = *(long *)(*(long *)(plVar8[0x54] + 8) + 0x18), lVar12 != 0)) {
    *(byte *)(lVar12 + 0x58) = *(byte *)(lVar12 + 0x58) & 0xfe;
  }
  pppplVar17 = (long ****)(ulong)((int)plVar8[0x2a] + 1);
  FUN_7103776640(&local_580,(long)pppplVar14,(byte ****)"set_btn_%dp_help",pppplVar17,ppppbVar20,
                 pppplVar21,param_6,param_7,param_8);
  uVar9 = local_578;
  if (plVar8 + 0x55 != &local_580) {
    local_578 = 0;
    uVar38 = plVar8[0x56];
    plVar8[0x56] = uVar9;
    if (uVar38 != 0) {
      uVar9 = *(ulong *)(uVar38 + 0x18);
      *(undefined ***)(uVar38 + 0x10) = &PTR_FUN_710523d9a8;
      *(undefined8 *)(uVar38 + 0x18) = 0;
      if (uVar9 != 0) {
        FUN_710392eb40(uVar9);
      }
      FUN_710392eb40(uVar38);
    }
  }
  uVar9 = local_578;
  local_580 = &PTR_FUN_710523d988;
  local_578 = 0;
  if (uVar9 != 0) {
    uVar38 = *(ulong *)(uVar9 + 0x18);
    *(undefined ***)(uVar9 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar9 + 0x18) = 0;
    if (uVar38 != 0) {
      FUN_710392eb40(uVar38);
    }
    FUN_710392eb40(uVar9);
  }
  FUN_7103778300(0x3f800000,plVar8[0x56],0x71042a37e8);
  FUN_7103778300(0x3f800000,plVar8[0x56],0x7104443f4b);
  FUN_7103776640(&local_580,(long)ppppppppplVar16,(byte ****)"set_lct_controller_entry",pppplVar17,
                 ppppbVar20,pppplVar21,param_6,param_7,param_8);
  uVar9 = local_578;
  plVar1 = plVar8 + 0x57;
  if (plVar1 != &local_580) {
    local_578 = 0;
    uVar38 = plVar8[0x58];
    plVar8[0x58] = uVar9;
    if (uVar38 != 0) {
      uVar9 = *(ulong *)(uVar38 + 0x18);
      *(undefined ***)(uVar38 + 0x10) = &PTR_FUN_710523d9a8;
      *(undefined8 *)(uVar38 + 0x18) = 0;
      if (uVar9 != 0) {
        FUN_710392eb40(uVar9);
      }
      FUN_710392eb40(uVar38);
    }
  }
  uVar9 = local_578;
  local_580 = &PTR_FUN_710523d988;
  local_578 = 0;
  if (uVar9 != 0) {
    uVar38 = *(ulong *)(uVar9 + 0x18);
    *(undefined ***)(uVar9 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar9 + 0x18) = 0;
    if (uVar38 != 0) {
      FUN_710392eb40(uVar38);
    }
    FUN_710392eb40(uVar9);
  }
  *(undefined4 *)(plVar8 + 0x5b) = 0;
  FUN_7103778300(0x3f800000,plVar8[0x58],0x71042c56a7);
  FUN_7103776910(&local_580,(long)plVar1,(long ****)"set_txt_btn",pppplVar17,ppppbVar20,pppplVar21,
                 param_6,param_7,param_8);
  FUN_710377a120((long)&local_580,
                 (&PTR_s_mel_chara_select_help_press_any__71050a8890)[(int)plVar8[0x5b]],pppplVar17,
                 ppppbVar20,pppplVar21,param_6,param_7,param_8);
  uVar9 = local_578;
  local_580 = &PTR_FUN_710523d9a8;
  local_578 = 0;
  if (uVar9 != 0) {
    FUN_710392eb40(uVar9);
  }
  FUN_71037780e0(&local_580,(long)plVar1,(long ****)"btn_anim",pppplVar17,ppppbVar20,pppplVar21,
                 param_6,param_7,param_8);
  uVar9 = local_578;
  if (plVar8 + 0x59 != &local_580) {
    local_578 = 0;
    uVar38 = plVar8[0x5a];
    plVar8[0x5a] = uVar9;
    if (uVar38 != 0) {
      FUN_710392eb40(uVar38);
    }
  }
  uVar9 = local_578;
  local_580 = &PTR_FUN_710523d9e8;
  local_578 = 0;
  if (uVar9 != 0) {
    FUN_710392eb40(uVar9);
  }
  FUN_710377aee0(0x3f800000,(long)(plVar8 + 0x59));
  FUN_7103776640(&local_580,(long)ppppppppplVar16,(byte ****)"set_lct_controller",pppplVar17,
                 ppppbVar20,pppplVar21,param_6,param_7,param_8);
  uVar9 = local_578;
  if (plVar8 + 0x5c != &local_580) {
    local_578 = 0;
    uVar38 = plVar8[0x5d];
    plVar8[0x5d] = uVar9;
    if (uVar38 != 0) {
      uVar9 = *(ulong *)(uVar38 + 0x18);
      *(undefined ***)(uVar38 + 0x10) = &PTR_FUN_710523d9a8;
      *(undefined8 *)(uVar38 + 0x18) = 0;
      if (uVar9 != 0) {
        FUN_710392eb40(uVar9);
      }
      FUN_710392eb40(uVar38);
    }
  }
  uVar9 = local_578;
  local_580 = &PTR_FUN_710523d988;
  local_578 = 0;
  if (uVar9 != 0) {
    uVar38 = *(ulong *)(uVar9 + 0x18);
    *(undefined ***)(uVar9 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar9 + 0x18) = 0;
    if (uVar38 != 0) {
      FUN_710392eb40(uVar38);
    }
    FUN_710392eb40(uVar9);
  }
  FUN_7103778300(0x3f800000,plVar8[0x5d],0x710436cb6c);
  FUN_7103778300(0x3f800000,plVar8[0x5d],0x71042d5cab);
  FUN_7103776640(&local_580,(long)(plVar8 + 0x55),(byte ****)"set_part_controller",pppplVar17,
                 ppppbVar20,pppplVar21,param_6,param_7,param_8);
  uVar9 = local_578;
  if (plVar8 + 0x5e != &local_580) {
    local_578 = 0;
    uVar38 = plVar8[0x5f];
    plVar8[0x5f] = uVar9;
    if (uVar38 != 0) {
      uVar9 = *(ulong *)(uVar38 + 0x18);
      *(undefined ***)(uVar38 + 0x10) = &PTR_FUN_710523d9a8;
      *(undefined8 *)(uVar38 + 0x18) = 0;
      if (uVar9 != 0) {
        FUN_710392eb40(uVar9);
      }
      FUN_710392eb40(uVar38);
    }
  }
  uVar9 = local_578;
  local_580 = &PTR_FUN_710523d988;
  local_578 = 0;
  if (uVar9 != 0) {
    uVar38 = *(ulong *)(uVar9 + 0x18);
    *(undefined ***)(uVar9 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar9 + 0x18) = 0;
    if (uVar38 != 0) {
      FUN_710392eb40(uVar38);
    }
    FUN_710392eb40(uVar9);
  }
  FUN_7103778300(0x3f800000,plVar8[0x5f],0x710436cb6c);
  FUN_7103778300(0x3f800000,plVar8[0x5f],0x71042d5cab);
  plVar8[0x79] = 5;
  puVar2 = (ulong *)(plVar8 + 0x4a);
  local_580 = (undefined **)((ulong)local_580 & 0xffffffff00000000);
  FUN_71017abd00(&local_578);
  local_3d8 = 0xffffffff;
  local_3d0 = 0;
  local_3c0 = 0;
  local_3c8 = 0xffffffffffffffff;
  local_3bc = 0xffffffffffffffff;
  local_3b4 = 0xffff;
  local_3b0 = 0;
  local_3a8[0] = 0;
  local_378 = 0xffffffff;
  uStack_374 = uStack_374 & 0xffffff00;
  local_370 = 0;
  local_36c = 0;
  local_368 = &DAT_3f8000003f800000;
  local_360 = &DAT_3f8000003f800000;
  local_358 = 0;
  FUN_71017abd00(auStack_350);
  local_1a0 = 0xff;
  local_1b0 = 0;
  local_1a8 = 0xb95d0753f;
  local_190 = 0;
  local_198 = 0x500000000;
  local_580 = (undefined **)((ulong)local_580 & 0xffffffff00000000);
  puVar37 = (undefined4 *)plVar8[0x4b];
  if (puVar37 == (undefined4 *)plVar8[0x4c]) {
    FUN_7101a492f0(puVar2,(undefined4 *)&local_580,pppplVar17,ppppbVar20,pppplVar21,param_6,param_7,
                   param_8);
  }
  else {
    *puVar37 = 0;
    FUN_71015547e0((undefined8 *)(puVar37 + 2),&local_578);
    *(undefined2 *)(puVar37 + 0x70) = local_3c0;
    *(undefined8 *)(puVar37 + 0x6a) = local_3d8;
    *(undefined8 *)(puVar37 + 0x6c) = local_3d0;
    *(undefined8 *)(puVar37 + 0x6e) = local_3c8;
    *(undefined2 *)(puVar37 + 0x73) = local_3b4;
    *(undefined8 *)(puVar37 + 0x71) = local_3bc;
    puVar37[0x74] = 0;
    FUN_7101696040(puVar37 + 0x74,local_3a8);
    *(ulong *)((long)puVar37 + 0x20d) = CONCAT17(local_36c,CONCAT43(local_370,uStack_374._1_3_));
    *(ulong *)(puVar37 + 0x82) = CONCAT44(uStack_374,local_378);
    *(undefined2 *)(puVar37 + 0x8a) = local_358;
    *(undefined1 **)(puVar37 + 0x88) = local_360;
    *(undefined1 **)(puVar37 + 0x86) = local_368;
    FUN_71015547e0((undefined8 *)(puVar37 + 0x8c),auStack_350);
    *(undefined1 *)(puVar37 + 0xf8) = local_1a0;
    *(undefined8 *)(puVar37 + 0xf6) = local_1a8;
    *(ulong *)(puVar37 + 0xf4) = CONCAT71(uStack_1af,local_1b0);
    *(undefined8 *)(puVar37 + 0xfc) = local_190;
    *(undefined8 *)(puVar37 + 0xfa) = local_198;
    plVar8[0x4b] = plVar8[0x4b] + 0x3f8;
  }
  local_580 = (undefined **)((ulong)local_580 & 0xffffffff00000000);
  FUN_71017abd00(&local_578);
  local_3d8 = 0xffffffff;
  local_3d0 = 0;
  local_3c0 = 0;
  local_3c8 = 0xffffffffffffffff;
  local_3bc = 0xffffffffffffffff;
  local_3b4 = 0xffff;
  local_3b0 = 0;
  local_3a8[0] = 0;
  local_378 = 0xffffffff;
  uStack_374 = uStack_374 & 0xffffff00;
  local_370 = 0;
  local_36c = 0;
  local_368 = &DAT_3f8000003f800000;
  local_360 = &DAT_3f8000003f800000;
  local_358 = 0;
  FUN_71017abd00(auStack_350);
  local_1a0 = 0xff;
  local_198 = 0x500000000;
  local_1b0 = 0;
  local_1a8 = 0xb95d0753f;
  local_190 = 0;
  local_580 = (undefined **)CONCAT44(local_580._4_4_,1);
  puVar37 = (undefined4 *)plVar8[0x4b];
  if (puVar37 == (undefined4 *)plVar8[0x4c]) {
    FUN_7101a492f0(puVar2,(undefined4 *)&local_580,pppplVar17,ppppbVar20,pppplVar21,param_6,param_7,
                   param_8);
  }
  else {
    *puVar37 = 1;
    FUN_71015547e0((undefined8 *)(puVar37 + 2),&local_578);
    *(undefined2 *)(puVar37 + 0x70) = local_3c0;
    *(undefined8 *)(puVar37 + 0x6a) = local_3d8;
    *(undefined8 *)(puVar37 + 0x6c) = local_3d0;
    *(undefined8 *)(puVar37 + 0x6e) = local_3c8;
    *(undefined2 *)(puVar37 + 0x73) = local_3b4;
    *(undefined8 *)(puVar37 + 0x71) = local_3bc;
    puVar37[0x74] = 0;
    FUN_7101696040(puVar37 + 0x74,local_3a8);
    *(ulong *)((long)puVar37 + 0x20d) = CONCAT17(local_36c,CONCAT43(local_370,uStack_374._1_3_));
    *(ulong *)(puVar37 + 0x82) = CONCAT44(uStack_374,local_378);
    *(undefined2 *)(puVar37 + 0x8a) = local_358;
    *(undefined1 **)(puVar37 + 0x88) = local_360;
    *(undefined1 **)(puVar37 + 0x86) = local_368;
    FUN_71015547e0((undefined8 *)(puVar37 + 0x8c),auStack_350);
    *(undefined1 *)(puVar37 + 0xf8) = local_1a0;
    *(undefined8 *)(puVar37 + 0xf6) = local_1a8;
    *(ulong *)(puVar37 + 0xf4) = CONCAT71(uStack_1af,local_1b0);
    *(undefined8 *)(puVar37 + 0xfc) = local_190;
    *(undefined8 *)(puVar37 + 0xfa) = local_198;
    plVar8[0x4b] = plVar8[0x4b] + 0x3f8;
  }
  local_580 = (undefined **)((ulong)local_580 & 0xffffffff00000000);
  FUN_71017abd00(&local_578);
  local_3d8 = 0xffffffff;
  local_3d0 = 0;
  local_3c0 = 0;
  local_3c8 = 0xffffffffffffffff;
  local_3bc = 0xffffffffffffffff;
  local_3b4 = 0xffff;
  local_3b0 = 0;
  local_3a8[0] = 0;
  local_378 = 0xffffffff;
  uStack_374 = uStack_374 & 0xffffff00;
  local_370 = 0;
  local_36c = 0;
  local_368 = &DAT_3f8000003f800000;
  local_360 = &DAT_3f8000003f800000;
  local_358 = 0;
  FUN_71017abd00(auStack_350);
  local_1a8 = 0xb95d0753f;
  local_1a0 = 0xff;
  local_198 = 0x500000000;
  local_1b0 = 0;
  local_190 = 0;
  local_580 = (undefined **)CONCAT44(local_580._4_4_,2);
  puVar37 = (undefined4 *)plVar8[0x4b];
  if (puVar37 == (undefined4 *)plVar8[0x4c]) {
    FUN_7101a492f0(puVar2,(undefined4 *)&local_580,pppplVar17,ppppbVar20,pppplVar21,param_6,param_7,
                   param_8);
  }
  else {
    *puVar37 = 2;
    FUN_71015547e0((undefined8 *)(puVar37 + 2),&local_578);
    *(undefined2 *)(puVar37 + 0x70) = local_3c0;
    *(undefined8 *)(puVar37 + 0x6a) = local_3d8;
    *(undefined8 *)(puVar37 + 0x6c) = local_3d0;
    *(undefined8 *)(puVar37 + 0x6e) = local_3c8;
    *(undefined2 *)(puVar37 + 0x73) = local_3b4;
    *(undefined8 *)(puVar37 + 0x71) = local_3bc;
    puVar37[0x74] = 0;
    FUN_7101696040(puVar37 + 0x74,local_3a8);
    *(ulong *)((long)puVar37 + 0x20d) = CONCAT17(local_36c,CONCAT43(local_370,uStack_374._1_3_));
    *(ulong *)(puVar37 + 0x82) = CONCAT44(uStack_374,local_378);
    *(undefined2 *)(puVar37 + 0x8a) = local_358;
    *(undefined1 **)(puVar37 + 0x88) = local_360;
    *(undefined1 **)(puVar37 + 0x86) = local_368;
    FUN_71015547e0((undefined8 *)(puVar37 + 0x8c),auStack_350);
    *(undefined1 *)(puVar37 + 0xf8) = local_1a0;
    *(undefined8 *)(puVar37 + 0xf6) = local_1a8;
    *(ulong *)(puVar37 + 0xf4) = CONCAT71(uStack_1af,local_1b0);
    *(undefined8 *)(puVar37 + 0xfc) = local_190;
    *(undefined8 *)(puVar37 + 0xfa) = local_198;
    plVar8[0x4b] = plVar8[0x4b] + 0x3f8;
  }
  local_580 = (undefined **)((ulong)local_580 & 0xffffffff00000000);
  FUN_71017abd00(&local_578);
  local_3d8 = 0xffffffff;
  local_3d0 = 0;
  local_3c0 = 0;
  local_3c8 = 0xffffffffffffffff;
  local_3bc = 0xffffffffffffffff;
  local_3b4 = 0xffff;
  local_3b0 = 0;
  local_3a8[0] = 0;
  local_378 = 0xffffffff;
  uStack_374 = uStack_374 & 0xffffff00;
  local_370 = 0;
  local_36c = 0;
  local_368 = &DAT_3f8000003f800000;
  local_360 = &DAT_3f8000003f800000;
  local_358 = 0;
  FUN_71017abd00(auStack_350);
  local_1a8 = 0xb95d0753f;
  local_1a0 = 0xff;
  local_198 = 0x500000000;
  local_1b0 = 0;
  local_190 = 0;
  local_580 = (undefined **)CONCAT44(local_580._4_4_,3);
  puVar37 = (undefined4 *)plVar8[0x4b];
  if (puVar37 == (undefined4 *)plVar8[0x4c]) {
    FUN_7101a492f0(puVar2,(undefined4 *)&local_580,pppplVar17,ppppbVar20,pppplVar21,param_6,param_7,
                   param_8);
  }
  else {
    *puVar37 = 3;
    FUN_71015547e0((undefined8 *)(puVar37 + 2),&local_578);
    *(undefined2 *)(puVar37 + 0x70) = local_3c0;
    *(undefined8 *)(puVar37 + 0x6a) = local_3d8;
    *(undefined8 *)(puVar37 + 0x6c) = local_3d0;
    *(undefined8 *)(puVar37 + 0x6e) = local_3c8;
    *(undefined2 *)(puVar37 + 0x73) = local_3b4;
    *(undefined8 *)(puVar37 + 0x71) = local_3bc;
    puVar37[0x74] = 0;
    FUN_7101696040(puVar37 + 0x74,local_3a8);
    *(ulong *)((long)puVar37 + 0x20d) = CONCAT17(local_36c,CONCAT43(local_370,uStack_374._1_3_));
    *(ulong *)(puVar37 + 0x82) = CONCAT44(uStack_374,local_378);
    *(undefined2 *)(puVar37 + 0x8a) = local_358;
    *(undefined1 **)(puVar37 + 0x88) = local_360;
    *(undefined1 **)(puVar37 + 0x86) = local_368;
    FUN_71015547e0((undefined8 *)(puVar37 + 0x8c),auStack_350);
    *(undefined1 *)(puVar37 + 0xf8) = local_1a0;
    *(undefined8 *)(puVar37 + 0xf6) = local_1a8;
    *(ulong *)(puVar37 + 0xf4) = CONCAT71(uStack_1af,local_1b0);
    *(undefined8 *)(puVar37 + 0xfc) = local_190;
    *(undefined8 *)(puVar37 + 0xfa) = local_198;
    plVar8[0x4b] = plVar8[0x4b] + 0x3f8;
  }
  local_580 = (undefined **)((ulong)local_580 & 0xffffffff00000000);
  FUN_71017abd00(&local_578);
  local_3d8 = 0xffffffff;
  local_3d0 = 0;
  local_3c0 = 0;
  local_3c8 = 0xffffffffffffffff;
  local_3bc = 0xffffffffffffffff;
  local_3b4 = 0xffff;
  local_3b0 = 0;
  local_3a8[0] = 0;
  local_378 = 0xffffffff;
  uStack_374 = uStack_374 & 0xffffff00;
  local_370 = 0;
  local_36c = 0;
  local_368 = &DAT_3f8000003f800000;
  local_360 = &DAT_3f8000003f800000;
  local_358 = 0;
  FUN_71017abd00(auStack_350);
  local_1a8 = 0xb95d0753f;
  local_1a0 = 0xff;
  local_198 = 0x500000000;
  local_1b0 = 0;
  local_190 = 0;
  local_580 = (undefined **)CONCAT44(local_580._4_4_,4);
  puVar37 = (undefined4 *)plVar8[0x4b];
  if (puVar37 == (undefined4 *)plVar8[0x4c]) {
    FUN_7101a492f0(puVar2,(undefined4 *)&local_580,pppplVar17,ppppbVar20,pppplVar21,param_6,param_7,
                   param_8);
  }
  else {
    *puVar37 = 4;
    FUN_71015547e0((undefined8 *)(puVar37 + 2),&local_578);
    *(undefined2 *)(puVar37 + 0x70) = local_3c0;
    *(undefined8 *)(puVar37 + 0x6a) = local_3d8;
    *(undefined8 *)(puVar37 + 0x6c) = local_3d0;
    *(undefined8 *)(puVar37 + 0x6e) = local_3c8;
    *(undefined2 *)(puVar37 + 0x73) = local_3b4;
    *(undefined8 *)(puVar37 + 0x71) = local_3bc;
    puVar37[0x74] = 0;
    FUN_7101696040(puVar37 + 0x74,local_3a8);
    *(ulong *)((long)puVar37 + 0x20d) = CONCAT17(local_36c,CONCAT43(local_370,uStack_374._1_3_));
    *(ulong *)(puVar37 + 0x82) = CONCAT44(uStack_374,local_378);
    *(undefined2 *)(puVar37 + 0x8a) = local_358;
    *(undefined1 **)(puVar37 + 0x88) = local_360;
    *(undefined1 **)(puVar37 + 0x86) = local_368;
    FUN_71015547e0((undefined8 *)(puVar37 + 0x8c),auStack_350);
    *(undefined1 *)(puVar37 + 0xf8) = local_1a0;
    *(undefined8 *)(puVar37 + 0xf6) = local_1a8;
    *(ulong *)(puVar37 + 0xf4) = CONCAT71(uStack_1af,local_1b0);
    *(undefined8 *)(puVar37 + 0xfc) = local_190;
    *(undefined8 *)(puVar37 + 0xfa) = local_198;
    plVar8[0x4b] = plVar8[0x4b] + 0x3f8;
  }
  local_580 = (undefined **)0x0;
  local_578 = 0x101;
  local_570 = 1;
  local_56c = 1;
  local_56a = 1;
  local_568 = &DAT_41f0000000000000;
  local_560 = (long *)((ulong)local_560 & 0xffffffff00000000);
  local_530 = (long *)0x0;
  local_500 = (long *)0x0;
  local_4d0 = (long *)0x0;
  local_4a0 = (long *)0x0;
  local_470 = (long *)0x0;
  local_460 = 0;
  FUN_710337df20((long)&local_580);
  uVar30 = local_578;
  plVar1 = plVar8 + 0x65;
  ppppbVar20 = (byte ****)&local_580;
  local_580 = (undefined **)CONCAT44(3,(uint)local_580);
  local_578._0_2_ = (ushort)(byte)local_578;
  uVar32 = local_578;
  local_578._5_3_ = SUB83(uVar30,5);
  local_578._0_5_ = CONCAT14(1,(int)uVar32);
  local_560 = (long *)CONCAT44(local_560._4_4_,2);
  FUN_7103770b30(plVar1,ppppppppplVar16,(long ****)"selector_2",ppppbVar20,pppplVar21,param_6,
                 param_7,param_8);
  pcVar18 = "set_part_cp";
  FUN_71037717d0(plVar1,0,"set_part_cp",ppppbVar20,pppplVar21,param_6,param_7,param_8);
  plVar15 = (long *)plVar8[0x65];
  plVar31 = (long *)plVar15[0x37];
  if (plVar31 != (long *)0x0) {
    lVar12 = plVar8[0x2a];
    plVar29 = plVar15 + 0x37;
    do {
      bVar7 = (int)plVar31[4] < 0;
      if (!bVar7) {
        plVar29 = plVar31;
      }
      plVar31 = (long *)plVar31[bVar7];
    } while (plVar31 != (long *)0x0);
    if (((plVar29 != plVar15 + 0x37) && ((int)plVar29[4] < 1)) &&
       (plVar31 = (long *)plVar29[5], plVar31 != (long *)0x0)) {
      (**(code **)(*plVar31 + 0x1f8))(plVar31,0 < (int)lVar12);
      pcVar18 = (char *)0x0;
      (**(code **)(*plVar31 + 0x388))(plVar31,(int)lVar12 < 1);
      plVar15 = (long *)*plVar1;
    }
  }
  (**(code **)(*plVar15 + 0x60))(plVar15,1);
  (**(code **)(*(long *)plVar8[0x65] + 0x70))((long *)plVar8[0x65],1);
  local_6b0 = (undefined **)0x0;
  local_6a8 = 0x101;
  local_6a0 = 1;
  local_69c = 1;
  local_69a = 1;
  local_698 = &DAT_41f0000000000000;
  local_690 = 0;
  local_660 = (long *)0x0;
  local_630 = (long *)0x0;
  local_600 = (long *)0x0;
  local_5d0 = (long *)0x0;
  local_5a0 = (long *)0x0;
  local_590 = 0;
  FUN_710337df20((long)&local_6b0);
  uVar30 = local_6a8;
  local_6b0 = (undefined **)CONCAT44(3,(undefined4)local_6b0);
  local_6a8._0_2_ = (ushort)(byte)local_6a8;
  uVar32 = local_6a8;
  local_6a8._5_3_ = SUB83(uVar30,5);
  local_6a8._0_5_ = CONCAT14(1,(int)uVar32);
  local_690 = 2;
  FUN_71003a4ca0(auStack_6f8,"selector_%d",(ulong)((int)plVar8[0x2a] + 1),pcVar18,ppppbVar20,
                 pppplVar21,param_6,param_7,param_8);
  plVar1 = plVar8 + 0x60;
  FUN_7103770b30(plVar1,pppplVar14,appplStack_6f0,(byte ****)&local_6b0,pppplVar21,param_6,param_7,
                 param_8);
  FUN_71037717d0(plVar1,1,"set_btn_%dp_hd",(ulong)((int)plVar8[0x2a] + 1),pppplVar21,param_6,param_7
                 ,param_8);
  ppppbVar20 = (byte ****)(ulong)((int)plVar8[0x2a] + 1);
  FUN_71037717d0(plVar1,2,"set_btn_%dp_help",ppppbVar20,pppplVar21,param_6,param_7,param_8);
  lVar12 = plVar8[0x60];
  lVar27 = *(long *)(lVar12 + 0x1b8);
  if (lVar27 != 0) {
    lVar34 = lVar12 + 0x1b8;
    lVar41 = lVar34;
    lVar33 = lVar27;
    do {
      if (0 < *(int *)(lVar33 + 0x20)) {
        lVar41 = lVar33;
      }
      lVar33 = *(long *)(lVar33 + (ulong)(*(int *)(lVar33 + 0x20) < 1) * 8);
    } while (lVar33 != 0);
    if (((lVar41 != lVar34) && (*(int *)(lVar41 + 0x20) < 2)) &&
       (plVar15 = *(long **)(lVar41 + 0x28), plVar15 != (long *)0x0)) {
      (**(code **)(*plVar15 + 0x1f8))(plVar15,0);
      (**(code **)(*plVar15 + 0x388))(plVar15,1,0);
      lVar12 = *plVar1;
      lVar27 = *(long *)(lVar12 + 0x1b8);
      lVar34 = lVar12 + 0x1b8;
    }
    lVar41 = lVar34;
    if (lVar27 != 0) {
      do {
        if (1 < *(int *)(lVar27 + 0x20)) {
          lVar41 = lVar27;
        }
        lVar27 = *(long *)(lVar27 + (ulong)(*(int *)(lVar27 + 0x20) < 2) * 8);
      } while (lVar27 != 0);
      if (((lVar41 != lVar34) && (*(int *)(lVar41 + 0x20) < 3)) &&
         (plVar15 = *(long **)(lVar41 + 0x28), plVar15 != (long *)0x0)) {
        (**(code **)(*plVar15 + 0x1f8))(plVar15,0);
        (**(code **)(*plVar15 + 0x388))(plVar15,1,0);
        lVar12 = *plVar1;
      }
    }
  }
  local_b0 = (long ***)0x1bb4830208;
  FUN_7103772070(lVar12,2,&local_b0,ppppbVar20,pppplVar21,param_6,param_7,param_8);
  (**(code **)(*(long *)plVar8[0x60] + 0x60))((long *)plVar8[0x60],1);
  (**(code **)(*(long *)plVar8[0x60] + 0x70))((long *)plVar8[0x60],1);
  local_120 = 0;
  local_11c = (int)plVar8[0x2a];
  local_118 = *(undefined4 *)((long)plVar8 + 0x154);
  plVar1 = plVar8 + 0x76;
  FUN_7103776640(&local_b0,(long)pppplVar14,(byte ****)"set_panel_%dp_%02d",(ulong)(local_11c + 1),0
                 ,pppplVar21,param_6,param_7,param_8);
  local_e0 = (long ***)&PTR_FUN_71050a8c98;
  local_d8 = (long ***)0x0;
  pppplVar17 = &local_b0;
  ppppbVar20 = (byte ****)&local_120;
  FUN_7101a43a00((long)&local_e0,plVar8[0x29],pppplVar17,ppppbVar20,pppplVar21,param_6,param_7,
                 param_8);
  ppplVar23 = local_d8;
  FUN_7103778300(0x3f800000,(long)local_d8[4],0x710441236e);
  ppplVar28 = local_d8;
  *(undefined4 *)(ppplVar23 + 0x1a) = 0;
  FUN_7103778300(0x3f800000,(long)local_d8[4],0x710435be3c);
  ppplVar23 = local_d8;
  *(undefined1 *)((long)ppplVar28 + 0x10a) = 0;
  pppplVar24 = (long ****)plVar8[0x77];
  if (pppplVar24 < (long ****)plVar8[0x78]) {
    *pppplVar24 = (long ***)&PTR_FUN_71050a8c98;
    pppplVar24[1] = (long ***)0x0;
    if (pppplVar24 != &local_e0) {
      local_d8 = (long ***)0x0;
      ppplVar28 = pppplVar24[1];
      pppplVar24[1] = ppplVar23;
      if (ppplVar28 != (long ***)0x0) {
        FUN_7101a41fd0((long)ppplVar28);
        FUN_710392eb40((ulong)ppplVar28);
      }
    }
    plVar8[0x77] = plVar8[0x77] + 0x10;
  }
  else {
    FUN_7101a49700(plVar1,&local_e0,pppplVar17,ppppbVar20,pppplVar21,param_6,param_7,param_8);
  }
  ppplVar23 = local_d8;
  local_e0 = (long ***)&PTR_FUN_71050a8c98;
  local_d8 = (long ***)0x0;
  if (ppplVar23 != (long ***)0x0) {
    FUN_7101a41fd0((long)ppplVar23);
    FUN_710392eb40((ulong)ppplVar23);
  }
  pcVar22 = local_a8;
  local_b0 = (long ***)&PTR_FUN_710523d988;
  local_a8 = (code *)0x0;
  if (pcVar22 != (code *)0x0) {
    uVar9 = *(ulong *)((long)pcVar22 + 0x18);
    *(undefined ***)((long)pcVar22 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)((long)pcVar22 + 0x18) = 0;
    if (uVar9 != 0) {
      FUN_710392eb40(uVar9);
    }
    FUN_710392eb40((ulong)pcVar22);
  }
  local_120 = 1;
  local_11c = (int)plVar8[0x2a];
  local_118 = *(undefined4 *)((long)plVar8 + 0x154);
  FUN_7103776640(&local_b0,(long)pppplVar14,(byte ****)"set_panel_%dp_%02d",(ulong)(local_11c + 1),1
                 ,pppplVar21,param_6,param_7,param_8);
  local_e0 = (long ***)&PTR_FUN_71050a8c98;
  local_d8 = (long ***)0x0;
  pppplVar17 = &local_b0;
  ppppbVar20 = (byte ****)&local_120;
  FUN_7101a43a00((long)&local_e0,plVar8[0x29],pppplVar17,ppppbVar20,pppplVar21,param_6,param_7,
                 param_8);
  ppplVar23 = local_d8;
  FUN_7103778300(0x3f800000,(long)local_d8[4],0x710441236e);
  ppplVar28 = local_d8;
  *(undefined4 *)(ppplVar23 + 0x1a) = 0;
  FUN_7103778300(0x3f800000,(long)local_d8[4],0x710435be3c);
  ppplVar23 = local_d8;
  *(undefined1 *)((long)ppplVar28 + 0x10a) = 0;
  pppplVar24 = (long ****)plVar8[0x77];
  if (pppplVar24 < (long ****)plVar8[0x78]) {
    *pppplVar24 = (long ***)&PTR_FUN_71050a8c98;
    pppplVar24[1] = (long ***)0x0;
    if (pppplVar24 != &local_e0) {
      local_d8 = (long ***)0x0;
      ppplVar28 = pppplVar24[1];
      pppplVar24[1] = ppplVar23;
      if (ppplVar28 != (long ***)0x0) {
        FUN_7101a41fd0((long)ppplVar28);
        FUN_710392eb40((ulong)ppplVar28);
      }
    }
    plVar8[0x77] = plVar8[0x77] + 0x10;
  }
  else {
    FUN_7101a49700(plVar1,&local_e0,pppplVar17,ppppbVar20,pppplVar21,param_6,param_7,param_8);
  }
  ppplVar23 = local_d8;
  local_e0 = (long ***)&PTR_FUN_71050a8c98;
  local_d8 = (long ***)0x0;
  if (ppplVar23 != (long ***)0x0) {
    FUN_7101a41fd0((long)ppplVar23);
    FUN_710392eb40((ulong)ppplVar23);
  }
  pcVar22 = local_a8;
  local_b0 = (long ***)&PTR_FUN_710523d988;
  local_a8 = (code *)0x0;
  if (pcVar22 != (code *)0x0) {
    uVar9 = *(ulong *)((long)pcVar22 + 0x18);
    *(undefined ***)((long)pcVar22 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)((long)pcVar22 + 0x18) = 0;
    if (uVar9 != 0) {
      FUN_710392eb40(uVar9);
    }
    FUN_710392eb40((ulong)pcVar22);
  }
  local_120 = 2;
  local_11c = (int)plVar8[0x2a];
  local_118 = *(undefined4 *)((long)plVar8 + 0x154);
  FUN_7103776640(&local_b0,(long)pppplVar14,(byte ****)"set_panel_%dp_%02d",(ulong)(local_11c + 1),2
                 ,pppplVar21,param_6,param_7,param_8);
  local_e0 = (long ***)&PTR_FUN_71050a8c98;
  local_d8 = (long ***)0x0;
  pppplVar17 = &local_b0;
  ppppbVar20 = (byte ****)&local_120;
  FUN_7101a43a00((long)&local_e0,plVar8[0x29],pppplVar17,ppppbVar20,pppplVar21,param_6,param_7,
                 param_8);
  ppplVar23 = local_d8;
  FUN_7103778300(0x3f800000,(long)local_d8[4],0x710441236e);
  ppplVar28 = local_d8;
  *(undefined4 *)(ppplVar23 + 0x1a) = 0;
  FUN_7103778300(0x3f800000,(long)local_d8[4],0x710435be3c);
  ppplVar23 = local_d8;
  *(undefined1 *)((long)ppplVar28 + 0x10a) = 0;
  pppplVar24 = (long ****)plVar8[0x77];
  if (pppplVar24 < (long ****)plVar8[0x78]) {
    *pppplVar24 = (long ***)&PTR_FUN_71050a8c98;
    pppplVar24[1] = (long ***)0x0;
    if (pppplVar24 != &local_e0) {
      local_d8 = (long ***)0x0;
      ppplVar28 = pppplVar24[1];
      pppplVar24[1] = ppplVar23;
      if (ppplVar28 != (long ***)0x0) {
        FUN_7101a41fd0((long)ppplVar28);
        FUN_710392eb40((ulong)ppplVar28);
      }
    }
    plVar8[0x77] = plVar8[0x77] + 0x10;
  }
  else {
    FUN_7101a49700(plVar1,&local_e0,pppplVar17,ppppbVar20,pppplVar21,param_6,param_7,param_8);
  }
  ppplVar23 = local_d8;
  local_e0 = (long ***)&PTR_FUN_71050a8c98;
  local_d8 = (long ***)0x0;
  if (ppplVar23 != (long ***)0x0) {
    FUN_7101a41fd0((long)ppplVar23);
    FUN_710392eb40((ulong)ppplVar23);
  }
  pcVar22 = local_a8;
  local_b0 = (long ***)&PTR_FUN_710523d988;
  local_a8 = (code *)0x0;
  if (pcVar22 != (code *)0x0) {
    uVar9 = *(ulong *)((long)pcVar22 + 0x18);
    *(undefined ***)((long)pcVar22 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)((long)pcVar22 + 0x18) = 0;
    if (uVar9 != 0) {
      FUN_710392eb40(uVar9);
    }
    FUN_710392eb40((ulong)pcVar22);
  }
  local_120 = 3;
  local_11c = (int)plVar8[0x2a];
  local_118 = *(undefined4 *)((long)plVar8 + 0x154);
  FUN_7103776640(&local_b0,(long)pppplVar14,(byte ****)"set_panel_%dp_%02d",(ulong)(local_11c + 1),3
                 ,pppplVar21,param_6,param_7,param_8);
  local_e0 = (long ***)&PTR_FUN_71050a8c98;
  local_d8 = (long ***)0x0;
  pppplVar17 = &local_b0;
  ppppbVar20 = (byte ****)&local_120;
  FUN_7101a43a00((long)&local_e0,plVar8[0x29],pppplVar17,ppppbVar20,pppplVar21,param_6,param_7,
                 param_8);
  ppplVar23 = local_d8;
  FUN_7103778300(0x3f800000,(long)local_d8[4],0x710441236e);
  ppplVar28 = local_d8;
  *(undefined4 *)(ppplVar23 + 0x1a) = 0;
  FUN_7103778300(0x3f800000,(long)local_d8[4],0x710435be3c);
  ppplVar23 = local_d8;
  *(undefined1 *)((long)ppplVar28 + 0x10a) = 0;
  pppplVar24 = (long ****)plVar8[0x77];
  if (pppplVar24 < (long ****)plVar8[0x78]) {
    *pppplVar24 = (long ***)&PTR_FUN_71050a8c98;
    pppplVar24[1] = (long ***)0x0;
    if (pppplVar24 != &local_e0) {
      local_d8 = (long ***)0x0;
      ppplVar28 = pppplVar24[1];
      pppplVar24[1] = ppplVar23;
      if (ppplVar28 != (long ***)0x0) {
        FUN_7101a41fd0((long)ppplVar28);
        FUN_710392eb40((ulong)ppplVar28);
      }
    }
    plVar8[0x77] = plVar8[0x77] + 0x10;
  }
  else {
    FUN_7101a49700(plVar1,&local_e0,pppplVar17,ppppbVar20,pppplVar21,param_6,param_7,param_8);
  }
  ppplVar23 = local_d8;
  local_e0 = (long ***)&PTR_FUN_71050a8c98;
  local_d8 = (long ***)0x0;
  if (ppplVar23 != (long ***)0x0) {
    FUN_7101a41fd0((long)ppplVar23);
    FUN_710392eb40((ulong)ppplVar23);
  }
  pcVar22 = local_a8;
  local_b0 = (long ***)&PTR_FUN_710523d988;
  local_a8 = (code *)0x0;
  if (pcVar22 != (code *)0x0) {
    uVar9 = *(ulong *)((long)pcVar22 + 0x18);
    *(undefined ***)((long)pcVar22 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)((long)pcVar22 + 0x18) = 0;
    if (uVar9 != 0) {
      FUN_710392eb40(uVar9);
    }
    FUN_710392eb40((ulong)pcVar22);
  }
  local_120 = 4;
  local_11c = (int)plVar8[0x2a];
  local_118 = *(undefined4 *)((long)plVar8 + 0x154);
  FUN_7103776640(&local_b0,(long)pppplVar14,(byte ****)"set_panel_%dp_%02d",(ulong)(local_11c + 1),4
                 ,pppplVar21,param_6,param_7,param_8);
  local_e0 = (long ***)&PTR_FUN_71050a8c98;
  local_d8 = (long ***)0x0;
  pppplVar17 = &local_b0;
  ppppbVar20 = (byte ****)&local_120;
  FUN_7101a43a00((long)&local_e0,plVar8[0x29],pppplVar17,ppppbVar20,pppplVar21,param_6,param_7,
                 param_8);
  ppplVar23 = local_d8;
  FUN_7103778300(0x3f800000,(long)local_d8[4],0x710441236e);
  ppplVar28 = local_d8;
  *(undefined4 *)(ppplVar23 + 0x1a) = 0;
  FUN_7103778300(0x3f800000,(long)local_d8[4],0x710435be3c);
  ppplVar23 = local_d8;
  *(undefined1 *)((long)ppplVar28 + 0x10a) = 0;
  pppplVar24 = (long ****)plVar8[0x77];
  if (pppplVar24 < (long ****)plVar8[0x78]) {
    *pppplVar24 = (long ***)&PTR_FUN_71050a8c98;
    pppplVar24[1] = (long ***)0x0;
    if (pppplVar24 != &local_e0) {
      local_d8 = (long ***)0x0;
      ppplVar28 = pppplVar24[1];
      pppplVar24[1] = ppplVar23;
      if (ppplVar28 != (long ***)0x0) {
        FUN_7101a41fd0((long)ppplVar28);
        FUN_710392eb40((ulong)ppplVar28);
      }
    }
    plVar8[0x77] = plVar8[0x77] + 0x10;
  }
  else {
    FUN_7101a49700(plVar1,&local_e0,pppplVar17,ppppbVar20,pppplVar21,param_6,param_7,param_8);
  }
  ppplVar23 = local_d8;
  local_e0 = (long ***)&PTR_FUN_71050a8c98;
  local_d8 = (long ***)0x0;
  if (ppplVar23 != (long ***)0x0) {
    FUN_7101a41fd0((long)ppplVar23);
    FUN_710392eb40((ulong)ppplVar23);
  }
  pcVar22 = local_a8;
  local_b0 = (long ***)&PTR_FUN_710523d988;
  local_a8 = (code *)0x0;
  if (pcVar22 != (code *)0x0) {
    uVar9 = *(ulong *)((long)pcVar22 + 0x18);
    *(undefined ***)((long)pcVar22 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)((long)pcVar22 + 0x18) = 0;
    if (uVar9 != 0) {
      FUN_710392eb40(uVar9);
    }
    FUN_710392eb40((ulong)pcVar22);
  }
  local_68 = (undefined4)plVar8[0x2a];
  local_64 = *(undefined4 *)((long)plVar8 + 0x154);
  local_b0 = (long ***)&PTR_FUN_71050a8d48;
  local_c0 = (long ****)0x0;
  local_a8 = FUN_7101a498e0;
  local_a0 = 0;
  local_98 = plVar8;
  local_90 = &local_b0;
  FUN_71019e6eb0((long *)&local_b0,(long *)&local_e0);
  if (&local_b0 == local_90) {
    pplVar25 = (*local_90)[4];
LAB_7101a4d410:
    (*(code *)pplVar25)();
  }
  else if (local_90 != (long ****)0x0) {
    pplVar25 = (*local_90)[5];
    goto LAB_7101a4d410;
  }
  pppplVar21 = &local_e0;
  FUN_71019e73b0((long)(plVar8 + 0x66),plVar8[0x29],ppppppppplVar16,(byte ****)&local_68,pppplVar21,
                 param_6,param_7,param_8);
  *(undefined4 *)(plVar8[0x67] + 0x40) = 2;
  uStack_e3 = 0;
  local_f0 = (undefined4)plVar8[0x2a];
  uStack_e8 = *(undefined4 *)((long)plVar8 + 0x154);
  local_b0 = (long ***)&PTR_FUN_71050a8cb8;
  local_a8 = FUN_7101a49640;
  local_a0 = 0;
  local_100 = (long *)0x0;
  uStack_e4 = 1;
  local_ec = (undefined2)uStack_e8;
  uStack_ea = (undefined2)((uint)uStack_e8 >> 0x10);
  local_98 = plVar8;
  local_90 = &local_b0;
  FUN_71019f57d0((long *)&local_b0,(long *)&local_120);
  if (&local_b0 == local_90) {
    pplVar25 = (*local_90)[4];
LAB_7101a4d4ac:
    (*(code *)pplVar25)();
  }
  else if (local_90 != (long ****)0x0) {
    pplVar25 = (*local_90)[5];
    goto LAB_7101a4d4ac;
  }
  pppplVar17 = (long ****)&local_f0;
  ppppbVar20 = (byte ****)&local_120;
  FUN_71019f6b40((long)(plVar8 + 0x68),(long ****)ppppppppplVar16,pppplVar17,ppppbVar20,pppplVar21,
                 param_6,param_7,param_8);
  FUN_71019fa350(plVar8[0x69],2,pppplVar17,ppppbVar20,pppplVar21,param_6,param_7,param_8);
  local_128 = *(undefined4 *)((long)plVar8 + 0x154);
  local_124 = 1;
  pppplVar17 = (long ****)&local_128;
  FUN_71019e8c20((long ****)plVar8[0x6b],(long ****)ppppppppplVar16,(int *)pppplVar17,ppppbVar20,
                 pppplVar21,param_6,param_7,param_8);
  FUN_71019e90c0(plVar8[0x6b],2,pppplVar17,ppppbVar20,pppplVar21,param_6,param_7,param_8);
  FUN_71019e9dc0((long ****)plVar8[0x6d],(long ****)ppppppppplVar16,pppplVar17,ppppbVar20,pppplVar21
                 ,param_6,param_7,param_8);
  FUN_71019ea0a0(plVar8[0x6d],2,pppplVar17,ppppbVar20,pppplVar21,param_6,param_7,param_8);
  local_130 = *(undefined4 *)((long)plVar8 + 0x154);
  local_12c = 1;
  pppplVar17 = (long ****)&local_130;
  FUN_71019ea9e0((long ****)plVar8[0x6f],(long ****)ppppppppplVar16,(undefined4 *)pppplVar17,
                 ppppbVar20,pppplVar21,param_6,param_7,param_8);
  FUN_71019eade0(plVar8[0x6f],2,pppplVar17,ppppbVar20,pppplVar21,param_6,param_7,param_8);
  local_138 = *(undefined4 *)((long)plVar8 + 0x154);
  local_134 = 0;
  ppppbVar20 = (byte ****)&local_138;
  ppppppppplVar19 = ppppppppplVar16;
  FUN_7101a0ec00((long)(plVar8 + 0x70),(long ***)plVar8[0x29],(long ****)ppppppppplVar16,ppppbVar20,
                 pppplVar21,param_6,param_7,param_8);
  FUN_7101a0f680(plVar8[0x71],2,(long ****)ppppppppplVar19,ppppbVar20,pppplVar21,param_6,param_7,
                 param_8);
  local_140[0] = *(undefined4 *)((long)plVar8 + 0x154);
  pppplVar17 = (long ****)local_140;
  FUN_71019f2630((long ****)plVar8[0x73],(long ****)ppppppppplVar16,(undefined4 *)pppplVar17,
                 ppppbVar20,pppplVar21,param_6,param_7,param_8);
  FUN_71019f2980(plVar8[0x73],2,pppplVar17,ppppbVar20,pppplVar21,param_6,param_7,param_8);
  local_150 = (long ***)plVar8[0x2a];
  local_148 = 1;
  local_b0 = (long ***)&PTR_FUN_71050a8d00;
  local_a8 = FUN_7101a496a0;
  local_160 = (byte ****)0x0;
  local_a0 = 0;
  local_98 = plVar8;
  local_90 = &local_b0;
  FUN_71019e5610((long *)&local_b0,(long *)apppbStack_180);
  if (&local_b0 == local_90) {
    pplVar25 = (*local_90)[4];
LAB_7101a4d5fc:
    (*(code *)pplVar25)();
  }
  else if (local_90 != (long ****)0x0) {
    pplVar25 = (*local_90)[5];
    goto LAB_7101a4d5fc;
  }
  ppppbVar20 = apppbStack_180;
  FUN_71019e5b80(plVar8[0x75],(long)ppppppppplVar16,&local_150,ppppbVar20,pppplVar21,param_6,param_7
                 ,param_8);
  if (apppbStack_180 == local_160) {
    ppbVar26 = (*local_160)[4];
LAB_7101a4d63c:
    (*(code *)ppbVar26)();
  }
  else if (local_160 != (byte ****)0x0) {
    ppbVar26 = (*local_160)[5];
    goto LAB_7101a4d63c;
  }
  if ((long *)&local_120 == local_100) {
    pcVar22 = *(code **)(*local_100 + 0x20);
LAB_7101a4d668:
    (*pcVar22)();
  }
  else if (local_100 != (long *)0x0) {
    pcVar22 = *(code **)(*local_100 + 0x28);
    goto LAB_7101a4d668;
  }
  if (&local_e0 == local_c0) {
    pplVar25 = (*local_c0)[4];
LAB_7101a4d694:
    (*(code *)pplVar25)();
  }
  else if (local_c0 != (long ****)0x0) {
    pplVar25 = (*local_c0)[5];
    goto LAB_7101a4d694;
  }
  FUN_7103778430((long)pppplVar14,"subwindow_%dp_on",(ulong)((int)plVar8[0x2a] + 1),ppppbVar20,
                 pppplVar21,param_6,param_7,param_8);
  *(undefined1 *)((long)plVar8 + 0x41d) = 1;
  iVar6 = *(int *)((long)plVar8 + 0x3cc);
  if (iVar6 != -1) {
    if ((ulong)(plVar8[0x77] - plVar8[0x76] >> 4) <= (ulong)(long)iVar6) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_out_of_range();
    }
    lVar12 = *(long *)(plVar8[0x76] + (long)iVar6 * 0x10 + 8);
    FUN_7103778300(0x3f800000,*(long *)(lVar12 + 0x20),0x710435be3c);
    *(undefined1 *)(lVar12 + 0x10a) = 0;
  }
  lVar27 = plVar8[0x77];
  for (lVar12 = plVar8[0x76]; lVar12 != lVar27; lVar12 = lVar12 + 0x10) {
    FUN_7103778300(0x3f800000,*(long *)(*(long *)(lVar12 + 8) + 0x20),0x710426fa7c);
  }
  if (alStack_5c0 == local_5a0) {
    pcVar22 = *(code **)(*local_5a0 + 0x20);
LAB_7101a4d764:
    (*pcVar22)();
  }
  else if (local_5a0 != (long *)0x0) {
    pcVar22 = *(code **)(*local_5a0 + 0x28);
    goto LAB_7101a4d764;
  }
  if (alStack_5f0 == local_5d0) {
    pcVar22 = *(code **)(*local_5d0 + 0x20);
LAB_7101a4d794:
    (*pcVar22)();
  }
  else if (local_5d0 != (long *)0x0) {
    pcVar22 = *(code **)(*local_5d0 + 0x28);
    goto LAB_7101a4d794;
  }
  if (alStack_620 == local_600) {
    pcVar22 = *(code **)(*local_600 + 0x20);
LAB_7101a4d7c4:
    (*pcVar22)();
  }
  else if (local_600 != (long *)0x0) {
    pcVar22 = *(code **)(*local_600 + 0x28);
    goto LAB_7101a4d7c4;
  }
  if (alStack_650 == local_630) {
    pcVar22 = *(code **)(*local_630 + 0x20);
LAB_7101a4d7f4:
    (*pcVar22)();
  }
  else if (local_630 != (long *)0x0) {
    pcVar22 = *(code **)(*local_630 + 0x28);
    goto LAB_7101a4d7f4;
  }
  if (alStack_680 == local_660) {
    pcVar22 = *(code **)(*local_660 + 0x20);
LAB_7101a4d824:
    (*pcVar22)();
  }
  else if (local_660 != (long *)0x0) {
    pcVar22 = *(code **)(*local_660 + 0x28);
    goto LAB_7101a4d824;
  }
  if (alStack_490 == local_470) {
    pcVar22 = *(code **)(*local_470 + 0x20);
LAB_7101a4d854:
    (*pcVar22)();
  }
  else if (local_470 != (long *)0x0) {
    pcVar22 = *(code **)(*local_470 + 0x28);
    goto LAB_7101a4d854;
  }
  if (alStack_4c0 == local_4a0) {
    pcVar22 = *(code **)(*local_4a0 + 0x20);
LAB_7101a4d884:
    (*pcVar22)();
  }
  else if (local_4a0 != (long *)0x0) {
    pcVar22 = *(code **)(*local_4a0 + 0x28);
    goto LAB_7101a4d884;
  }
  if (alStack_4f0 == local_4d0) {
    pcVar22 = *(code **)(*local_4d0 + 0x20);
LAB_7101a4d8b4:
    (*pcVar22)();
  }
  else if (local_4d0 != (long *)0x0) {
    pcVar22 = *(code **)(*local_4d0 + 0x28);
    goto LAB_7101a4d8b4;
  }
  if (alStack_520 == local_500) {
    pcVar22 = *(code **)(*local_500 + 0x20);
  }
  else {
    if (local_500 == (long *)0x0) goto LAB_7101a4d8e8;
    pcVar22 = *(code **)(*local_500 + 0x28);
  }
  (*pcVar22)();
LAB_7101a4d8e8:
  if (alStack_550 == local_530) {
    pcVar22 = *(code **)(*local_530 + 0x20);
  }
  else {
    if (local_530 == (long *)0x0) {
      return;
    }
    pcVar22 = *(code **)(*local_530 + 0x28);
  }
  (*pcVar22)();
  return;
}

