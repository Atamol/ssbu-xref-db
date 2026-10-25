// addr:      71018dace0
// offset:    0x18dace0
// name:      FUN_71018dace0
// mangled:   
// signature: undefined __cdecl FUN_71018dace0(long param_1, undefined8 param_2, long * * * * * * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_71018dace0(long param_1,undefined8 param_2,long *********param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  ulong uVar1;
  undefined4 uVar2;
  char cVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long ***ppplVar7;
  long ***ppplVar8;
  long ***ppplVar9;
  byte ***pppbVar10;
  long ***ppplVar11;
  undefined8 *puVar12;
  bool bVar13;
  uint uVar14;
  long lVar15;
  ulong uVar16;
  undefined8 *puVar17;
  long lVar18;
  long *plVar19;
  undefined8 *puVar20;
  undefined1 *puVar21;
  long lVar22;
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
  long *********ppppppppplVar23;
  undefined *puVar24;
  char *pcVar25;
  ulong uVar26;
  ulong uVar27;
  undefined1 *puVar28;
  long ****pppplVar29;
  byte ****ppppbVar30;
  undefined8 uVar31;
  long ****pppplVar32;
  uint uVar33;
  uint uVar34;
  undefined8 uVar35;
  long *plVar36;
  long *plVar37;
  byte **ppbVar38;
  long **pplVar39;
  code *pcVar40;
  long *plVar41;
  long lVar42;
  long *plVar43;
  long *plVar44;
  long *plVar45;
  long *plVar46;
  float fVar47;
  ulong uVar48;
  undefined1 auVar49 [16];
  undefined **local_5e8;
  undefined8 *local_5e0;
  undefined **local_5d8;
  long ***local_5d0 [8];
  undefined **local_590;
  ulong local_588;
  undefined **local_580;
  ulong local_578;
  undefined **local_570;
  ulong local_568;
  float local_560;
  float local_55c;
  float local_558;
  float local_554;
  undefined8 local_550;
  undefined8 uStack_548;
  undefined **local_538;
  ulong local_530;
  undefined **local_528;
  long ***local_520 [8];
  undefined **local_4e0;
  ulong local_4d8;
  undefined **local_4d0;
  byte ***local_4c8 [8];
  undefined **local_488;
  ulong local_480;
  long ***local_478;
  undefined1 local_470 [64];
  undefined **local_430;
  long ***local_428;
  undefined **local_420;
  long ***local_418;
  undefined **local_410;
  long ***local_408;
  undefined **local_400;
  undefined8 *local_3f8;
  undefined **local_3f0;
  undefined8 *local_3e8;
  undefined **local_3e0;
  undefined8 *local_3d8;
  int local_3d0 [2];
  float local_3c8 [2];
  byte ***local_3c0;
  undefined2 local_3b8;
  undefined4 local_3b6;
  undefined2 local_3b2;
  undefined4 local_3b0;
  undefined2 local_3ac;
  undefined1 local_3aa;
  undefined1 *local_3a8;
  undefined4 local_3a0;
  long alStack_390 [4];
  long *local_370;
  long alStack_360 [4];
  long *local_340;
  long alStack_330 [4];
  long *local_310;
  long alStack_300 [4];
  long *local_2e0;
  long alStack_2d0 [4];
  long *local_2b0;
  undefined4 local_2a0;
  long ********local_290;
  long *local_288;
  undefined4 local_280;
  undefined2 local_27c;
  undefined1 local_27a;
  undefined1 *local_278;
  undefined4 local_270;
  long alStack_260 [4];
  long *local_240;
  long alStack_230 [4];
  long *local_210;
  long alStack_200 [4];
  long *local_1e0;
  long alStack_1d0 [4];
  long *local_1b0;
  long alStack_1a0 [4];
  long *local_180;
  undefined4 local_170;
  byte ***local_160;
  undefined8 local_158;
  undefined1 *local_150;
  undefined8 local_148;
  undefined8 local_140;
  undefined5 uStack_138;
  undefined3 local_133;
  undefined5 uStack_130;
  undefined5 uStack_128;
  undefined3 local_123;
  undefined5 uStack_120;
  undefined8 local_118;
  undefined1 local_110;
  long alStack_100 [4];
  long *local_e0;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  
  lVar15 = FUN_710392e290(0x10,0xf8,(long ****)param_3,param_4,param_5,param_6,param_7,param_8);
  if (lVar15 == 0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_3c0 = (byte ***)((ulong)local_3c0 & 0xffffffff00000000);
      local_290 = (long ********)&DAT_000000f8;
      param_3 = &local_290;
      uVar16 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_3c0);
      if (((uVar16 & 1) != 0) &&
         (lVar15 = FUN_710392e290(0x10,0xf8,(long ****)param_3,param_4,param_5,param_6,param_7,
                                  param_8), lVar15 != 0)) goto LAB_71018dad70;
    }
    lVar15 = 0;
  }
LAB_71018dad70:
  *(undefined8 *)(lVar15 + 0x10) = 0;
  *(undefined8 *)(lVar15 + 0x18) = 0;
  *(undefined4 *)(lVar15 + 0xc0) = 0xffffffff;
  *(long *)lVar15 = lVar15;
  *(undefined8 *)(lVar15 + 8) = 0;
  *(undefined1 *)(lVar15 + 0xc4) = 0;
  *(undefined8 *)(lVar15 + 0xb0) = 0;
  *(undefined8 *)(lVar15 + 0xb8) = 0xffffffff;
  *(undefined8 *)(lVar15 + 0xa0) = 0;
  *(undefined8 *)(lVar15 + 0xa8) = 0;
  *(undefined8 *)(lVar15 + 0x90) = 0;
  *(undefined8 *)(lVar15 + 0x98) = 0;
  *(undefined8 *)(lVar15 + 0x80) = 0;
  *(undefined8 *)(lVar15 + 0x88) = 0;
  *(undefined8 *)(lVar15 + 0x70) = 0;
  *(undefined8 *)(lVar15 + 0x78) = 0;
  *(undefined8 *)(lVar15 + 0x60) = 0;
  *(undefined8 *)(lVar15 + 0x68) = 0;
  *(undefined8 *)(lVar15 + 0x50) = 0;
  *(undefined8 *)(lVar15 + 0x58) = 0;
  *(undefined8 *)(lVar15 + 0x40) = 0;
  *(undefined8 *)(lVar15 + 0x48) = 0;
  *(undefined8 *)(lVar15 + 0x30) = 0;
  *(undefined8 *)(lVar15 + 0x38) = 0;
  *(undefined8 *)(lVar15 + 0x20) = 0;
  *(undefined8 *)(lVar15 + 0x28) = 0;
  puVar17 = (undefined8 *)
            FUN_710392e290(0x10,0x80,(long ****)param_3,param_4,param_5,param_6,param_7,param_8);
  uVar31 = extraout_x1;
  if (puVar17 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_3c0 = (byte ***)((ulong)local_3c0 & 0xffffffff00000000);
      local_290 = (long ********)&DAT_00000080;
      param_3 = &local_290;
      auVar49 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_3c0);
      uVar31 = auVar49._8_8_;
      if (((auVar49._0_8_ & 1) != 0) &&
         (puVar17 = (undefined8 *)
                    FUN_710392e290(0x10,0x80,(long ****)param_3,param_4,param_5,param_6,param_7,
                                   param_8), uVar31 = extraout_x1_00, puVar17 != (undefined8 *)0x0))
      goto LAB_71018dae00;
    }
    puVar17 = (undefined8 *)0x0;
  }
LAB_71018dae00:
  *puVar17 = &PTR_FUN_7105181b40;
  puVar17[2] = 0;
  puVar17[1] = puVar17 + 2;
  puVar17[5] = 0;
  puVar17[3] = 0;
  puVar17[4] = puVar17 + 5;
  puVar17[8] = 0;
  puVar17[6] = 0;
  puVar17[7] = puVar17 + 8;
  puVar17[0xb] = 0;
  puVar17[9] = 0;
  puVar17[10] = puVar17 + 0xb;
  puVar17[0xc] = 0;
  *(undefined4 *)(puVar17 + 0xd) = 2;
  *(undefined4 *)(puVar17 + 0xf) = 0;
  puVar17[0xe] = 0;
  *(undefined8 **)(lVar15 + 200) = puVar17;
  lVar18 = DAT_710532f840;
  *(undefined8 *)(lVar15 + 0xd0) = *(undefined8 *)(*(long *)(DAT_710532f840 + 8) + 0xb8);
  uVar35 = *(undefined8 *)(*(long *)(lVar18 + 8) + 0xc0);
  *(undefined4 *)(lVar15 + 0xf0) = 0;
  *(undefined8 *)(lVar15 + 0xd8) = uVar35;
  *(undefined8 *)(lVar15 + 0xe0) = 0;
  *(undefined8 *)(lVar15 + 0xe8) = 0;
  FUN_71018d9d00(lVar15,uVar31,param_3,param_4,param_5,param_6,param_7,param_8);
  *(code **)(lVar15 + 0x28) = FUN_71018da200;
  *(undefined8 *)(lVar15 + 0x30) = 0;
  *(code **)(lVar15 + 0x48) = FUN_71018dab20;
  *(undefined8 *)(lVar15 + 0x50) = 0;
  *(code **)(lVar15 + 0x38) = FUN_71018da350;
  *(undefined8 *)(lVar15 + 0x40) = 0;
  *(code **)(lVar15 + 0x58) = FUN_71018daba0;
  *(undefined8 *)(lVar15 + 0x60) = 0;
  if (0x12 < *(uint *)(lVar15 + 0xb4)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(undefined4 *)(lVar15 + (long)(int)*(uint *)(lVar15 + 0xb4) * 4 + 0x68) = 0;
  uVar16 = *(ulong *)(param_1 + 0x58);
  *(long *)(param_1 + 0x58) = lVar15;
  if (uVar16 != 0) {
    lVar15 = *(long *)(uVar16 + 0xe0);
    if (*(int *)(*(long *)(lVar15 + 0x80) + 0x138) != 2) {
      uVar2 = *(undefined4 *)(uVar16 + 0xec);
      plVar36 = (long *)**(undefined8 **)(*DAT_7105314510 + 0x78);
      *(char *)(*plVar36 + 0x5e062) = (char)*(undefined4 *)(uVar16 + 0xf0);
      *(char *)(*plVar36 + 0x5e063) = (char)uVar2;
      lVar15 = *(long *)(uVar16 + 0xe0);
    }
    *(undefined8 *)(uVar16 + 0xe0) = 0;
    uVar31 = extraout_x1_01;
    if (lVar15 != 0) {
      FUN_71032cad20(lVar15);
      uVar31 = extraout_x1_02;
    }
    FUN_710323b9e0(*(long *)(uVar16 + 200),uVar31,param_3,param_4,param_5,param_6,param_7,param_8);
    plVar36 = *(long **)(uVar16 + 200);
    *(undefined8 *)(uVar16 + 200) = 0;
    if (plVar36 != (long *)0x0) {
      (**(code **)(*plVar36 + 8))();
    }
    FUN_710392eb40(uVar16);
    lVar15 = *(long *)(param_1 + 0x58);
  }
  plVar36 = (long *)(lVar15 + 200);
  lVar18 = *plVar36;
  ppppppppplVar23 = (long *********)(long)*(int *)(lVar18 + 0x70);
  ppppbVar30 = (byte ****)(ulong)*(uint *)(lVar18 + 0x68);
  pppplVar32 = (long ****)0x0;
  FUN_710323beb0(lVar18,(ulong *)&DAT_71045456b0,(long)ppppppppplVar23,(ulong)ppppbVar30,
                 (long ****)0x0,param_6,param_7,param_8);
  local_290 = (long ********)FUN_710323af70(0x71043087c6,0);
  if (((ulong)local_290 & 0xffffffffff) != 0) {
    lVar18 = *plVar36;
    ppppppppplVar23 = (long *********)(long)*(int *)(lVar18 + 0x70);
    ppppbVar30 = (byte ****)(ulong)*(uint *)(lVar18 + 0x68);
    FUN_710323c4e0(lVar18,(ulong *)&local_290,ppppppppplVar23,ppppbVar30,pppplVar32,param_6,param_7,
                   param_8);
  }
  local_290 = (long ********)FUN_710323af70(0x7104433480,0);
  uVar31 = extraout_x1_03;
  if (((ulong)local_290 & 0xffffffffff) != 0) {
    lVar18 = *plVar36;
    ppppppppplVar23 = (long *********)(long)*(int *)(lVar18 + 0x70);
    ppppbVar30 = (byte ****)(ulong)*(uint *)(lVar18 + 0x68);
    FUN_710323c4e0(lVar18,(ulong *)&local_290,ppppppppplVar23,ppppbVar30,pppplVar32,param_6,param_7,
                   param_8);
    uVar31 = extraout_x1_04;
  }
  lVar18 = *plVar36;
  uVar16 = FUN_710323cb80(lVar18,uVar31,ppppppppplVar23,ppppbVar30,pppplVar32,param_6,param_7,
                          param_8);
  while ((uVar16 & 1) == 0) {
    nn::os::SleepThread(1000000);
    uVar16 = FUN_710323cb80(lVar18,extraout_x1_05,ppppppppplVar23,ppppbVar30,pppplVar32,param_6,
                            param_7,param_8);
  }
  puVar17 = (undefined8 *)
            FUN_710392e290(0x10,0x88,(long ****)ppppppppplVar23,ppppbVar30,pppplVar32,param_6,
                           param_7,param_8);
  if (puVar17 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_3c0 = (byte ***)((ulong)local_3c0 & 0xffffffff00000000);
      local_290 = (long ********)&DAT_00000088;
      ppppppppplVar23 = &local_290;
      uVar16 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_3c0);
      if (((uVar16 & 1) != 0) &&
         (puVar17 = (undefined8 *)
                    FUN_710392e290(0x10,0x88,(long ****)ppppppppplVar23,ppppbVar30,pppplVar32,
                                   param_6,param_7,param_8), puVar17 != (undefined8 *)0x0))
      goto LAB_71018db068;
    }
    puVar17 = (undefined8 *)0x0;
  }
LAB_71018db068:
  *puVar17 = &PTR_FUN_71050af8c0;
  puVar17[1] = 0;
  puVar17[0xc] = 0;
  puVar17[0xd] = 0x1ffffffff;
  puVar17[2] = 0;
  puVar17[3] = 0;
  *(undefined1 *)(puVar17 + 0xb) = 0;
  puVar17[0xf] = plVar36;
  *(undefined1 *)(puVar17 + 0xe) = 1;
  puVar17[9] = 0;
  puVar17[10] = 0;
  plVar19 = (long *)FUN_710392e290(0x10,0x188,(long ****)ppppppppplVar23,ppppbVar30,pppplVar32,
                                   param_6,param_7,param_8);
  if (plVar19 == (long *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_3c0 = (byte ***)((ulong)local_3c0 & 0xffffffff00000000);
      local_290 = (long ********)&DAT_00000188;
      ppppppppplVar23 = &local_290;
      uVar16 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_3c0);
      if (((uVar16 & 1) != 0) &&
         (plVar19 = (long *)FUN_710392e290(0x10,0x188,(long ****)ppppppppplVar23,ppppbVar30,
                                           pppplVar32,param_6,param_7,param_8),
         plVar19 != (long *)0x0)) goto LAB_71018db0f0;
    }
    plVar19 = (long *)0x0;
  }
LAB_71018db0f0:
  *plVar19 = (long)plVar19;
  plVar19[4] = 0;
  plVar19[1] = 0;
  plVar19[2] = 0;
  plVar19[3] = 0;
  *(undefined4 *)(plVar19 + 0x24) = 0xffffffff;
  *(undefined1 *)((long)plVar19 + 0x124) = 0;
  plVar19[5] = 0;
  plVar19[0x25] = (long)plVar36;
  plVar19[0x22] = 0;
  plVar19[0x23] = 0xffffffff;
  plVar19[0x20] = 0;
  plVar19[0x21] = 0;
  plVar19[0x1e] = 0;
  plVar19[0x1f] = 0;
  plVar19[0x1c] = 0;
  plVar19[0x1d] = 0;
  plVar19[0x1a] = 0;
  plVar19[0x1b] = 0;
  plVar19[0x18] = 0;
  plVar19[0x19] = 0;
  plVar19[0x16] = 0;
  plVar19[0x17] = 0;
  plVar19[0x14] = 0;
  plVar19[0x15] = 0;
  plVar19[0x12] = 0;
  plVar19[0x13] = 0;
  plVar19[0x10] = 0;
  plVar19[0x11] = 0;
  plVar19[0xe] = 0;
  plVar19[0xf] = 0;
  plVar19[0xc] = 0;
  plVar19[0xd] = 0;
  plVar19[10] = 0;
  plVar19[0xb] = 0;
  plVar19[8] = 0;
  plVar19[9] = 0;
  plVar19[6] = 0;
  plVar19[7] = 0;
  puVar20 = (undefined8 *)
            FUN_710392e290(0x10,8,(long ****)ppppppppplVar23,ppppbVar30,pppplVar32,param_6,param_7,
                           param_8);
  uVar31 = extraout_x1_06;
  if (puVar20 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_3c0 = (byte ***)((ulong)local_3c0 & 0xffffffff00000000);
      local_290 = (long ********)&DAT_00000008;
      ppppppppplVar23 = &local_290;
      auVar49 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_3c0);
      uVar31 = auVar49._8_8_;
      if (((auVar49._0_8_ & 1) != 0) &&
         (puVar20 = (undefined8 *)
                    FUN_710392e290(0x10,8,(long ****)ppppppppplVar23,ppppbVar30,pppplVar32,param_6,
                                   param_7,param_8), uVar31 = extraout_x1_07,
         puVar20 != (undefined8 *)0x0)) goto LAB_71018db1ac;
    }
    puVar20 = (undefined8 *)0x0;
  }
LAB_71018db1ac:
  plVar36 = plVar19 + 0x26;
  FUN_7103773200(puVar20,uVar31,(long ****)ppppppppplVar23,ppppbVar30,pppplVar32,param_6,param_7,
                 param_8);
  plVar19[0x26] = (long)puVar20;
  *(undefined4 *)(plVar19 + 0x27) = 0;
  puVar20 = (undefined8 *)
            FUN_710392e290(0x10,8,(long ****)ppppppppplVar23,ppppbVar30,pppplVar32,param_6,param_7,
                           param_8);
  if (puVar20 == (undefined8 *)0x0) {
    local_3c0 = (byte ***)((ulong)local_3c0 & 0xffffffff00000000);
    local_290 = (long ********)&DAT_00000008;
    ppppppppplVar23 = &local_290;
    (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_3c0);
    puVar20 = (undefined8 *)
              FUN_710392e290(0x10,8,(long ****)ppppppppplVar23,ppppbVar30,pppplVar32,param_6,param_7
                             ,param_8);
  }
  *puVar20 = 0;
  plVar19[0x2a] = 0;
  plVar19[0x28] = (long)puVar20;
  plVar19[0x29] = 0;
  *(undefined8 *)((long)plVar19 + 0x165) = 0;
  *(undefined4 *)(plVar19 + 0x2e) = 1;
  plVar19[0x2f] = 0x58ffff0000000000;
  *(undefined1 *)((long)plVar19 + 0x184) = 0;
  *(undefined4 *)(plVar19 + 0x30) = 0;
  plVar19[0x2b] = 0;
  plVar19[0x2c] = 0;
  puVar17[0x10] = plVar19;
  lVar18 = *(long *)plVar19[0x26];
  plVar19[5] = (long)FUN_7101d55770;
  plVar19[6] = 0;
  plVar19[9] = (long)FUN_7101d55830;
  plVar19[10] = 0;
  plVar19[7] = (long)FUN_7101d55780;
  plVar19[8] = 0;
  plVar19[0xb] = (long)FUN_7101d559d0;
  plVar19[0xc] = 0;
  plVar19[0xd] = (long)FUN_7101d559e0;
  plVar19[0xe] = 0;
  plVar19[0x11] = (long)FUN_7101d55b50;
  plVar19[0x12] = 0;
  plVar19[0x13] = (long)FUN_7101d55bd0;
  plVar19[0x14] = 0;
  plVar19[0xf] = (long)FUN_7101d559f0;
  plVar19[0x10] = 0;
  plVar19[0x17] = (long)FUN_7101d55fc0;
  plVar19[0x18] = 0;
  plVar19[0x15] = (long)FUN_7101d55f30;
  plVar19[0x16] = 0;
  plVar19[1] = 0;
  plVar19[2] = 0;
  *(undefined8 *)((long)plVar19 + 0x10c) = 0;
  *(undefined8 *)((long)plVar19 + 0x104) = 0;
  *(undefined8 *)((long)plVar19 + 0x114) = 0xffffffff00000000;
  *(undefined8 *)((long)plVar19 + 0xfc) = 0;
  *(undefined8 *)((long)plVar19 + 0xf4) = 0;
  *(undefined8 *)((long)plVar19 + 0xec) = 0;
  *(undefined8 *)((long)plVar19 + 0xe4) = 0;
  *(undefined8 *)((long)plVar19 + 0xdc) = 0;
  *(undefined8 *)((long)plVar19 + 0xd4) = 0;
  *(undefined8 *)((long)plVar19 + 0xcc) = 0;
  *(undefined8 *)((long)plVar19 + 0x11c) = 0xffffffff00000000;
  *(undefined1 *)((long)plVar19 + 0x124) = 0;
  *(undefined4 *)(plVar19 + 0x19) = 0;
  FUN_7101d55fd0(plVar19);
  puVar24 = &DAT_71045456b0;
  uVar31 = 1;
  FUN_71032cbf30(plVar36,*(long *)plVar19[0x25],(ulong *)&DAT_71045456b0,(byte ****)0x1,pppplVar32,
                 param_6,param_7,param_8);
  FUN_71037780e0(&local_290,*(long *)plVar19[0x26] + 8,(long ****)&DAT_7104421055,puVar24,uVar31,
                 pppplVar32,param_6,param_7,param_8);
  plVar45 = local_288;
  plVar43 = (long *)local_288[1];
  if (plVar43 == (long *)0x0) {
    local_290 = (long ********)&PTR_FUN_710523d9e8;
    local_288 = (long *)0x0;
    if (plVar45 != (long *)0x0) goto LAB_71018db45c;
  }
  else {
    if ((char)local_288[2] != '\0') {
      plVar46 = *(long **)(*local_288 + 0x80);
      plVar44 = (long *)(*local_288 + 0x88);
      if (plVar46 != plVar44) {
        do {
          while( true ) {
            uVar16 = (**(code **)(*(long *)plVar46[0xd] + 0x148))();
            if (((uVar16 & 1) != 0) &&
               (uVar16 = (**(code **)(*plVar43 + 0x120))(plVar43,plVar46[0xd]), (uVar16 & 1) != 0))
            {
              (**(code **)(*(long *)plVar46[0xd] + 0x178))();
              (**(code **)(*(long *)plVar46[0xd] + 0x140))((long *)plVar46[0xd],0);
            }
            plVar37 = (long *)plVar46[1];
            if ((long *)plVar46[1] == (long *)0x0) break;
            do {
              plVar46 = plVar37;
              plVar37 = (long *)*plVar46;
            } while ((long *)*plVar46 != (long *)0x0);
LAB_71018db408:
            if (plVar46 == plVar44) goto LAB_71018db420;
          }
          plVar37 = plVar46 + 2;
          plVar41 = (long *)*plVar37;
          if ((long *)*plVar41 != plVar46) {
            do {
              lVar42 = *plVar37;
              plVar37 = (long *)(lVar42 + 0x10);
              plVar46 = (long *)*plVar37;
            } while (*plVar46 != lVar42);
            goto LAB_71018db408;
          }
          plVar46 = plVar41;
        } while (plVar41 != plVar44);
LAB_71018db420:
        plVar43 = (long *)local_288[1];
      }
    }
    (**(code **)(*plVar43 + 0x188))(plVar43);
LAB_71018db45c:
    local_288 = (long *)0x0;
    local_290 = (long ********)&PTR_FUN_710523d9e8;
    FUN_710392eb40((ulong)plVar45);
  }
  local_158 = 0x3f80000000000000;
  local_148 = 0x3f8000003f000000;
  local_150 = &DAT_3f8000003f800000;
  puVar20 = (undefined8 *)(lVar18 + 8);
  local_160 = (byte ***)0x0;
  local_140 = 0x4270000040400000;
  uStack_130 = 0;
  uStack_138 = 0;
  local_133 = 0;
  uStack_120 = 0;
  uStack_128 = 0;
  local_123 = 0;
  local_110 = 0;
  local_118 = 0;
  local_e0 = (long *)0x0;
  local_c0 = 0;
  local_c8 = 0;
  local_d0 = 0;
  FUN_710337eaf0((long)&local_160);
  local_158 = 0x42c800003f800000;
  local_148 = 0x3e4ccccd3f000000;
  local_140 = 0x4220000040000000;
  local_118 = 0x442480000;
  local_150 = &DAT_3f8000003f800000;
  pcVar25 = "slider_00";
  local_110 = 1;
  ppppbVar30 = &local_160;
  FUN_7103788db0((long *)plVar19[0x28],*(long *)plVar19[0x26] + 8,(long ****)"slider_00",ppppbVar30,
                 pppplVar32,param_6,param_7,param_8);
  (**(code **)(**(long **)plVar19[0x28] + 0x70))(*(long **)plVar19[0x28],1);
  FUN_7103776910(&local_290,*(long *)plVar19[0x26] + 8,(long ****)"set_bar_00",pcVar25,ppppbVar30,
                 pppplVar32,param_6,param_7,param_8);
  plVar45 = local_288;
  if (*local_288 == 0) {
    fVar47 = 0.0;
  }
  else {
    fVar47 = ABS(*(float *)(*local_288 + 0x50));
  }
  plVar43 = plVar19 + 0x2a;
  *(float *)(plVar19 + 0x2d) = fVar47;
  local_290 = (long ********)&PTR_FUN_710523d9a8;
  local_288 = (long *)0x0;
  if (plVar45 != (long *)0x0) {
    FUN_710392eb40((ulong)plVar45);
  }
  lVar18 = **(long **)*plVar36;
  *(undefined4 *)(*(long *)(lVar18 + 0x600) + 0x10) = 0x20;
  *(undefined4 *)(*(long *)(lVar18 + 0x600) + 0x14) = 0x40;
  *(undefined4 *)(*(long *)(lVar18 + 0x600) + 0x20) = 0x10;
  *(undefined4 *)(*(long *)(lVar18 + 0x600) + 0x24) = 0x80;
  ppppppppplVar23 = &local_290;
  local_290 = (long ********)0x0;
  plVar45 = plVar19 + 0x29;
  local_288 = (long *)0x101;
  local_280 = 1;
  local_27c = 1;
  local_27a = 1;
  local_278 = &DAT_41f0000000000000;
  local_270 = 0;
  local_240 = (long *)0x0;
  local_210 = (long *)0x0;
  local_1e0 = (long *)0x0;
  local_1b0 = (long *)0x0;
  local_180 = (long *)0x0;
  local_170 = 0;
  FUN_7103770b30(plVar43,puVar20,(long ****)"selector_00",(byte ****)ppppppppplVar23,pppplVar32,
                 param_6,param_7,param_8);
  FUN_71037717d0(plVar43,0,"slider_btn_00",ppppppppplVar23,pppplVar32,param_6,param_7,param_8);
  lVar18 = *(long *)(*plVar43 + 0x1b8);
  if (lVar18 != 0) {
    lVar42 = *plVar43 + 0x1b8;
    lVar22 = lVar42;
    do {
      bVar13 = *(int *)(lVar18 + 0x20) < 0;
      if (!bVar13) {
        lVar22 = lVar18;
      }
      lVar18 = *(long *)(lVar18 + (ulong)bVar13 * 8);
    } while (lVar18 != 0);
    if (((lVar22 != lVar42) && (*(int *)(lVar22 + 0x20) < 1)) &&
       (plVar44 = *(long **)(lVar22 + 0x28), plVar44 != (long *)0x0)) {
      (**(code **)(*plVar44 + 0x208))(plVar44,0);
      (**(code **)(*plVar44 + 0x388))(plVar44,1,0);
    }
  }
  FUN_7103771a80(plVar43,0,1);
  (**(code **)(*(long *)*plVar43 + 0x70))((long *)*plVar43,1);
  ppppbVar30 = &local_3c0;
  local_3c0 = (byte ***)0x0;
  local_3b8 = 0x101;
  local_3b2 = 0;
  local_3b0 = 1;
  local_3ac = 1;
  local_3aa = 1;
  local_3a8 = &DAT_41f0000000000000;
  local_3a0 = 0;
  local_370 = (long *)0x0;
  local_340 = (long *)0x0;
  local_310 = (long *)0x0;
  local_2e0 = (long *)0x0;
  local_2b0 = (long *)0x0;
  local_2a0 = 0;
  local_3b6 = 1;
  FUN_7103770b30(plVar45,puVar20,(long ****)"selector_01",ppppbVar30,pppplVar32,param_6,param_7,
                 param_8);
  FUN_71037717d0(plVar45,1,"set_parts_btn_tab_0_00",ppppbVar30,pppplVar32,param_6,param_7,param_8);
  pcVar25 = "set_parts_btn_tab_0_01";
  FUN_71037717d0(plVar45,0,"set_parts_btn_tab_0_01",ppppbVar30,pppplVar32,param_6,param_7,param_8);
  (**(code **)(*(long *)*plVar45 + 0x70))((long *)*plVar45,1);
  lVar18 = *(long *)(DAT_710532f730 + 8);
  local_400 = &PTR_FUN_710523d9a8;
  local_3f8 = (undefined8 *)
              FUN_710392e290(0x10,0x20,(long ****)pcVar25,ppppbVar30,pppplVar32,param_6,param_7,
                             param_8);
  if (local_3f8 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_4d0 = (undefined **)((ulong)local_4d0 & 0xffffffff00000000);
      local_478 = (long ***)&SUB_00000020;
      pcVar25 = (char *)&local_478;
      uVar16 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_4d0);
      if (((uVar16 & 1) != 0) &&
         (local_3f8 = (undefined8 *)
                      FUN_710392e290(0x10,0x20,(long ****)pcVar25,ppppbVar30,pppplVar32,param_6,
                                     param_7,param_8), local_3f8 != (undefined8 *)0x0))
      goto LAB_71018db7e8;
    }
    local_3f8 = (undefined8 *)0x0;
  }
LAB_71018db7e8:
  local_3f8[2] = 0;
  local_3f8[3] = 0;
  *local_3f8 = 0;
  local_3f8[1] = 0;
  local_3f0 = &PTR_FUN_710523d9a8;
  local_3e8 = (undefined8 *)
              FUN_710392e290(0x10,0x20,(long ****)pcVar25,ppppbVar30,pppplVar32,param_6,param_7,
                             param_8);
  if (local_3e8 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_4d0 = (undefined **)((ulong)local_4d0 & 0xffffffff00000000);
      local_478 = (long ***)&SUB_00000020;
      pcVar25 = (char *)&local_478;
      uVar16 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_4d0);
      if (((uVar16 & 1) != 0) &&
         (local_3e8 = (undefined8 *)
                      FUN_710392e290(0x10,0x20,(long ****)pcVar25,ppppbVar30,pppplVar32,param_6,
                                     param_7,param_8), local_3e8 != (undefined8 *)0x0))
      goto LAB_71018db84c;
    }
    local_3e8 = (undefined8 *)0x0;
  }
LAB_71018db84c:
  local_3e8[2] = 0;
  local_3e8[3] = 0;
  *local_3e8 = 0;
  local_3e8[1] = 0;
  local_3e0 = &PTR_FUN_710523d9a8;
  local_3d8 = (undefined8 *)
              FUN_710392e290(0x10,0x20,(long ****)pcVar25,ppppbVar30,pppplVar32,param_6,param_7,
                             param_8);
  if (local_3d8 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_4d0 = (undefined **)((ulong)local_4d0 & 0xffffffff00000000);
      local_478 = (long ***)&SUB_00000020;
      pcVar25 = (char *)&local_478;
      uVar16 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_4d0);
      if (((uVar16 & 1) != 0) &&
         (local_3d8 = (undefined8 *)
                      FUN_710392e290(0x10,0x20,(long ****)pcVar25,ppppbVar30,pppplVar32,param_6,
                                     param_7,param_8), local_3d8 != (undefined8 *)0x0))
      goto LAB_71018db8b0;
    }
    local_3d8 = (undefined8 *)0x0;
  }
LAB_71018db8b0:
  local_3d8[2] = 0;
  local_3d8[3] = 0;
  *local_3d8 = 0;
  local_3d8[1] = 0;
  local_430 = &PTR_FUN_710523d9e8;
  local_428 = (long ***)
              FUN_710392e290(0x10,0x18,(long ****)pcVar25,ppppbVar30,pppplVar32,param_6,param_7,
                             param_8);
  if (local_428 == (long ***)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_4d0 = (undefined **)((ulong)local_4d0 & 0xffffffff00000000);
      local_478 = (long ***)&SUB_00000018;
      pcVar25 = (char *)&local_478;
      uVar16 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_4d0);
      if (((uVar16 & 1) != 0) &&
         (local_428 = (long ***)
                      FUN_710392e290(0x10,0x18,(long ****)pcVar25,ppppbVar30,pppplVar32,param_6,
                                     param_7,param_8), local_428 != (long ***)0x0))
      goto LAB_71018db91c;
    }
    local_428 = (long ***)0x0;
  }
LAB_71018db91c:
  *local_428 = (long **)0x0;
  local_428[1] = (long **)0x0;
  *(undefined1 *)(local_428 + 2) = 1;
  local_420 = &PTR_FUN_710523d9e8;
  local_418 = (long ***)
              FUN_710392e290(0x10,0x18,(long ****)pcVar25,ppppbVar30,pppplVar32,param_6,param_7,
                             param_8);
  if (local_418 == (long ***)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_4d0 = (undefined **)((ulong)local_4d0 & 0xffffffff00000000);
      local_478 = (long ***)&SUB_00000018;
      pcVar25 = (char *)&local_478;
      uVar16 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_4d0);
      if (((uVar16 & 1) != 0) &&
         (local_418 = (long ***)
                      FUN_710392e290(0x10,0x18,(long ****)pcVar25,ppppbVar30,pppplVar32,param_6,
                                     param_7,param_8), local_418 != (long ***)0x0))
      goto LAB_71018db990;
    }
    local_418 = (long ***)0x0;
  }
LAB_71018db990:
  lVar42 = lVar18 + 0x160;
  *local_418 = (long **)0x0;
  local_418[1] = (long **)0x0;
  *(undefined1 *)(local_418 + 2) = 1;
  local_410 = &PTR_FUN_710523d9e8;
  local_408 = (long ***)
              FUN_710392e290(0x10,0x18,(long ****)pcVar25,ppppbVar30,pppplVar32,param_6,param_7,
                             param_8);
  if (local_408 == (long ***)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_4d0 = (undefined **)((ulong)local_4d0 & 0xffffffff00000000);
      local_478 = (long ***)&SUB_00000018;
      pppplVar29 = &local_478;
      uVar16 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_4d0);
      if (((uVar16 & 1) != 0) &&
         (local_408 = (long ***)
                      FUN_710392e290(0x10,0x18,pppplVar29,ppppbVar30,pppplVar32,param_6,param_7,
                                     param_8), local_408 != (long ***)0x0)) goto LAB_71018dba24;
    }
    local_408 = (long ***)0x0;
  }
LAB_71018dba24:
  *(undefined1 *)(local_408 + 2) = 1;
  *local_408 = (long **)0x0;
  local_408[1] = (long **)0x0;
  local_3d0[0] = 0;
  local_3d0[1] = 0xf;
  local_3c8[0] = 0.0;
  local_3c8[1] = 0.0;
  uVar16 = 0;
  do {
    uVar26 = uVar16 & 0xffffffff;
    local_470[0] = 0;
    local_478 = (long ***)0x0;
    FUN_710062dc20((uint *)&local_478,"set_cursor_%02d");
    FUN_7103776640(&local_488,(long)puVar20,(byte ****)local_470,uVar26,ppppbVar30,pppplVar32,
                   param_6,param_7,param_8);
    FUN_71037780e0(&local_4d0,(long)&local_488,(long ****)"cursor",uVar26,ppppbVar30,pppplVar32,
                   param_6,param_7,param_8);
    uVar48 = (ulong)(uint)(float)(int)uVar16;
    FUN_710377b010(uVar48,(long)&local_4d0);
    pppbVar10 = local_4c8[0];
    local_4d0 = &PTR_FUN_710523d9e8;
    local_4c8[0] = (byte ***)0x0;
    if (pppbVar10 != (byte ***)0x0) {
      FUN_710392eb40((ulong)pppbVar10);
    }
    uVar1 = uVar16 + 1;
    FUN_7103776910(&local_528,(long)&local_488,(long ****)"set_txt_num",uVar26,ppppbVar30,pppplVar32
                   ,param_6,param_7,param_8);
    if ((int)uVar16 == -2) {
      local_4c8[0] = (byte ***)((ulong)local_4c8[0] & 0xffffffffffffff00);
      local_4d0 = (undefined **)0x0;
    }
    else {
      FUN_71003a4ca0((uint *)&local_4d0,"cmn_%dp",uVar1 & 0xffffffff,uVar26,ppppbVar30,pppplVar32,
                     param_6,param_7,param_8);
    }
    FUN_710377a120((long)&local_528,(char *)local_4c8,uVar26,ppppbVar30,pppplVar32,param_6,param_7,
                   param_8);
    ppplVar7 = local_520[0];
    local_528 = &PTR_FUN_710523d9a8;
    local_520[0] = (long ***)0x0;
    if (ppplVar7 != (long ***)0x0) {
      FUN_710392eb40((ulong)ppplVar7);
    }
    FUN_7103776910(&local_4d0,(long)&local_488,(long ****)"set_txt_name",uVar26,ppppbVar30,
                   pppplVar32,param_6,param_7,param_8);
    pppbVar10 = local_4c8[0];
    ppbVar38 = *local_4c8[0];
    if (ppbVar38 != (byte **)0x0) {
      *(byte *)(ppbVar38 + 0xb) = *(byte *)(ppbVar38 + 0xb) & 0xfe;
    }
    local_4d0 = &PTR_FUN_710523d9a8;
    local_4c8[0] = (byte ***)0x0;
    if (pppbVar10 != (byte ***)0x0) {
      FUN_710392eb40((ulong)pppbVar10);
    }
    uVar27 = uVar16 & 0xffffffff;
    local_4c8[0] = (byte ***)((ulong)local_4c8[0] & 0xffffffffffffff00);
    local_4d0 = (undefined **)0x0;
    FUN_710062dc20((uint *)&local_4d0,"set_info_%02d");
    FUN_7103776640(&local_4e0,(long)puVar20,local_4c8,uVar27,ppppbVar30,pppplVar32,param_6,param_7,
                   param_8);
    puVar21 = FUN_7103263e20(lVar42,local_3d0[uVar16]);
    uVar26 = FUN_7103263f80(*(long *)(lVar18 + 0x168),(ulong)puVar21);
    FUN_7103776910(&local_5d8,(long)&local_4e0,(long ****)"set_txt_00",uVar27,ppppbVar30,pppplVar32,
                   param_6,param_7,param_8);
    ppppbVar30 = (byte ****)0x0;
    pppplVar32 = (long ****)0x0;
    puVar28 = puVar21;
    FUN_7103265040((uint *)&local_528,lVar42,puVar21,0,0,param_6,param_7,param_8);
    FUN_710377a120((long)&local_5d8,(char *)local_520,puVar28,ppppbVar30,pppplVar32,param_6,param_7,
                   param_8);
    ppplVar7 = local_5d0[0];
    local_5d8 = &PTR_FUN_710523d9a8;
    local_5d0[0] = (long ***)0x0;
    if (ppplVar7 != (long ***)0x0) {
      FUN_710392eb40((ulong)ppplVar7);
    }
    plVar45 = (long *)plVar19[0x25];
    ppppppppplVar23 = (long *********)&DAT_00000004;
    local_528 = (undefined **)FUN_7103238a70((ulong)puVar21,0,4);
    if (((ulong)local_528 & 0xffffffffff) != 0) {
      lVar22 = *plVar45;
      ppppppppplVar23 = (long *********)(long)*(int *)(lVar22 + 0x70);
      ppppbVar30 = (byte ****)(ulong)*(uint *)(lVar22 + 0x68);
      FUN_710323c4e0(lVar22,(ulong *)&local_528,ppppppppplVar23,ppppbVar30,pppplVar32,param_6,
                     param_7,param_8);
    }
    plVar45 = (long *)plVar19[0x25];
    local_528 = (undefined **)FUN_7103238d60(uVar26,0x11);
    if (((ulong)local_528 & 0xffffffffff) != 0) {
      lVar22 = *plVar45;
      ppppppppplVar23 = (long *********)(long)*(int *)(lVar22 + 0x70);
      ppppbVar30 = (byte ****)(ulong)*(uint *)(lVar22 + 0x68);
      FUN_710323c4e0(lVar22,(ulong *)&local_528,ppppppppplVar23,ppppbVar30,pppplVar32,param_6,
                     param_7,param_8);
    }
    FUN_7103776910(&local_528,(long)&local_4e0,(long ****)"set_rep_00",ppppppppplVar23,ppppbVar30,
                   pppplVar32,param_6,param_7,param_8);
    ppppbVar30 = (byte ****)&DAT_00000004;
    ppppppppplVar23 = (long *********)0x0;
    plVar45 = FUN_710323f330((long *)plVar19[0x25],(ulong)puVar21,0,4,pppplVar32,param_6,param_7,
                             param_8);
    ppplVar7 = local_520[0];
    FUN_7103778b80((long)local_520[0],(long)plVar45,ppppppppplVar23,ppppbVar30,pppplVar32,param_6,
                   param_7,param_8);
    local_528 = &PTR_FUN_710523d9a8;
    local_520[0] = (long ***)0x0;
    if (ppplVar7 != (long ***)0x0) {
      FUN_710392eb40((ulong)ppplVar7);
    }
    FUN_7103776910(&local_528,(long)&local_4e0,(long ****)"set_rep_01",ppppppppplVar23,ppppbVar30,
                   pppplVar32,param_6,param_7,param_8);
    ppppppppplVar23 = (long *********)&DAT_00000011;
    plVar45 = FUN_710323f600((long *)plVar19[0x25],uVar26,(long ****)&DAT_00000011,ppppbVar30,
                             pppplVar32,param_6,param_7,param_8);
    ppplVar7 = local_520[0];
    FUN_7103778b80((long)local_520[0],(long)plVar45,ppppppppplVar23,ppppbVar30,pppplVar32,param_6,
                   param_7,param_8);
    local_528 = &PTR_FUN_710523d9a8;
    local_520[0] = (long ***)0x0;
    if (ppplVar7 != (long ***)0x0) {
      FUN_710392eb40((ulong)ppplVar7);
    }
    FUN_71037780e0(&local_538,(long)&local_4e0,(long ****)"face_bg",ppppppppplVar23,ppppbVar30,
                   pppplVar32,param_6,param_7,param_8);
    FUN_710377b010(uVar48,(long)&local_538);
    FUN_7103776910(&local_528,(long)&local_4e0,(long ****)"set_txt_score_00",ppppppppplVar23,
                   ppppbVar30,pppplVar32,param_6,param_7,param_8);
    ppplVar7 = local_520[0];
    pplVar39 = *local_520[0];
    if (pplVar39 != (long **)0x0) {
      *(byte *)(pplVar39 + 0xb) = *(byte *)(pplVar39 + 0xb) & 0xfe;
    }
    local_528 = &PTR_FUN_710523d9a8;
    local_520[0] = (long ***)0x0;
    if (ppplVar7 != (long ***)0x0) {
      FUN_710392eb40((ulong)ppplVar7);
    }
    plVar45 = (long *)plVar19[0x25];
    local_528 = (undefined **)FUN_710323af70(0x71043087c6,0);
    if (((ulong)local_528 & 0xffffffffff) != 0) {
      lVar22 = *plVar45;
      ppppppppplVar23 = (long *********)(long)*(int *)(lVar22 + 0x70);
      ppppbVar30 = (byte ****)(ulong)*(uint *)(lVar22 + 0x68);
      FUN_710323c4e0(lVar22,(ulong *)&local_528,ppppppppplVar23,ppppbVar30,pppplVar32,param_6,
                     param_7,param_8);
    }
    FUN_7103776910(&local_528,(long)&local_4e0,(long ****)"set_dmg_num_p",ppppppppplVar23,ppppbVar30
                   ,pppplVar32,param_6,param_7,param_8);
    ppppppppplVar23 = (long *********)0x0;
    plVar45 = FUN_7103240d30((long *)plVar19[0x25],0x71043087c6,(long ****)0x0,ppppbVar30,pppplVar32
                             ,param_6,param_7,param_8);
    ppplVar7 = local_520[0];
    FUN_7103778b80((long)local_520[0],(long)plVar45,ppppppppplVar23,ppppbVar30,pppplVar32,param_6,
                   param_7,param_8);
    local_528 = &PTR_FUN_710523d9a8;
    local_520[0] = (long ***)0x0;
    if (ppplVar7 != (long ***)0x0) {
      FUN_710392eb40((ulong)ppplVar7);
    }
    fVar47 = local_3c8[uVar16];
    local_550 = 0;
    uStack_548 = 0;
    uVar14 = FUN_71033114a0(fVar47,*(float **)(*(long *)(DAT_710532f8c0 + 8) + 200),
                            *(float **)(*(long *)(DAT_710532f8c0 + 8) + 0xd0));
    uVar33 = (uint)fVar47;
    local_560 = (float)(uVar14 & 0xff) / 255.0;
    if (0x3e6 < (int)uVar33) {
      uVar33 = 999;
    }
    uVar33 = uVar33 & ((int)uVar33 >> 0x1f ^ 0xffffffffU);
    local_55c = (float)(uVar14 >> 8 & 0xff) / 255.0;
    local_558 = (float)(uVar14 >> 0x10 & 0xff) / 255.0;
    uVar34 = (uint)((fVar47 - (float)(int)uVar33) * 10.0);
    local_554 = (float)(uVar14 >> 0x18) / 255.0;
    if (8 < (int)uVar34) {
      uVar34 = 9;
    }
    uVar16 = 0;
    if (99 < (int)uVar33) {
      uVar16 = (ulong)(uint)(float)(uVar33 / 100);
      uVar33 = uVar33 % 100;
    }
    uVar26 = 0;
    if (9 < (int)uVar33) {
      uVar14 = uVar33 / 10;
      uVar33 = uVar33 % 10;
      uVar26 = (ulong)(uint)(float)uVar14;
    }
    FUN_71037780e0(&local_528,(long)&local_4e0,(long ****)&DAT_71042e7589,ppppppppplVar23,ppppbVar30
                   ,pppplVar32,param_6,param_7,param_8);
    FUN_710377b010(0x3f800000,(long)&local_528);
    ppplVar7 = local_520[0];
    local_528 = &PTR_FUN_710523d9e8;
    local_520[0] = (long ***)0x0;
    if (ppplVar7 != (long ***)0x0) {
      FUN_710392eb40((ulong)ppplVar7);
    }
    FUN_71037780e0(&local_528,(long)&local_4e0,(long ****)"num_dec_01",ppppppppplVar23,ppppbVar30,
                   pppplVar32,param_6,param_7,param_8);
    FUN_710377b010((ulong)(uint)(float)(int)(uVar34 & ((int)uVar34 >> 0x1f ^ 0xffffffffU)),
                   (long)&local_528);
    ppplVar7 = local_520[0];
    local_528 = &PTR_FUN_710523d9e8;
    local_520[0] = (long ***)0x0;
    if (ppplVar7 != (long ***)0x0) {
      FUN_710392eb40((ulong)ppplVar7);
    }
    FUN_7103776910(&local_570,(long)&local_4e0,(long ****)"set_dmg_num_p",ppppppppplVar23,ppppbVar30
                   ,pppplVar32,param_6,param_7,param_8);
    FUN_7103776910(&local_580,(long)&local_4e0,(long ****)"set_dmg_p",ppppppppplVar23,ppppbVar30,
                   pppplVar32,param_6,param_7,param_8);
    FUN_7103776910(&local_590,(long)&local_4e0,(long ****)"set_dmg_num_dec",ppppppppplVar23,
                   ppppbVar30,pppplVar32,param_6,param_7,param_8);
    ppppppppplVar23 = (long *********)0x0;
    plVar45 = FUN_7103240d30((long *)plVar19[0x25],0x7104433480,(long ****)0x0,ppppbVar30,pppplVar32
                             ,param_6,param_7,param_8);
    uVar48 = local_578;
    FUN_7103778b80(local_578,(long)plVar45,ppppppppplVar23,ppppbVar30,pppplVar32,param_6,param_7,
                   param_8);
    FUN_7103779f50((long)&local_570,2,&local_560);
    FUN_7103779f50((long)&local_570,3,(float *)&local_550);
    FUN_7103779f50((long)&local_580,2,&local_560);
    FUN_7103779f50((long)&local_580,3,(float *)&local_550);
    FUN_7103779f50((long)&local_590,2,&local_560);
    FUN_7103779f50((long)&local_590,3,(float *)&local_550);
    uVar31 = 1;
    local_520[0] = (long ***)((ulong)local_520[0] & 0xffffffffffffff00);
    local_528 = (undefined **)0x0;
    FUN_710062dc20((uint *)&local_528,"num_%d");
    FUN_71037780e0(&local_5d8,(long)&local_4e0,local_520,uVar31,ppppbVar30,pppplVar32,param_6,
                   param_7,param_8);
    ppplVar8 = local_428;
    ppplVar7 = local_5d0[0];
    local_5d0[0] = (long ***)0x0;
    local_428 = ppplVar7;
    if (ppplVar8 != (long ***)0x0) {
      FUN_710392eb40((ulong)ppplVar8);
    }
    uVar31 = 1;
    local_5d0[0] = (long ***)0x0;
    local_5d8 = (undefined **)0x0;
    FUN_710062dc20((uint *)&local_5d8,"set_dmg_num_%d");
    FUN_7103776910(&local_5e8,(long)&local_4e0,local_5d0,uVar31,ppppbVar30,pppplVar32,param_6,
                   param_7,param_8);
    puVar5 = local_3f8;
    puVar4 = local_5e0;
    local_5e0 = (undefined8 *)0x0;
    local_3f8 = puVar4;
    if (puVar5 != (undefined8 *)0x0) {
      FUN_710392eb40((ulong)puVar5);
    }
    local_5e8 = &PTR_FUN_710523d9a8;
    local_5e0 = (undefined8 *)0x0;
    FUN_7103779f50((long)&local_400,2,&local_560);
    FUN_7103779f50((long)&local_400,3,(float *)&local_550);
    uVar31 = 2;
    local_520[0] = (long ***)((ulong)local_520[0] & 0xffffffffffffff00);
    local_528 = (undefined **)0x0;
    FUN_710062dc20((uint *)&local_528,"num_%d");
    FUN_71037780e0(&local_5d8,(long)&local_4e0,local_520,uVar31,ppppbVar30,pppplVar32,param_6,
                   param_7,param_8);
    ppplVar9 = local_418;
    ppplVar8 = local_5d0[0];
    local_5d0[0] = (long ***)0x0;
    local_418 = ppplVar8;
    if (ppplVar9 != (long ***)0x0) {
      FUN_710392eb40((ulong)ppplVar9);
    }
    uVar31 = 2;
    local_5d0[0] = (long ***)0x0;
    local_5d8 = (undefined **)0x0;
    FUN_710062dc20((uint *)&local_5d8,"set_dmg_num_%d");
    FUN_7103776910(&local_5e8,(long)&local_4e0,local_5d0,uVar31,ppppbVar30,pppplVar32,param_6,
                   param_7,param_8);
    puVar6 = local_3e8;
    puVar5 = local_5e0;
    local_5e0 = (undefined8 *)0x0;
    local_3e8 = puVar5;
    if (puVar6 != (undefined8 *)0x0) {
      FUN_710392eb40((ulong)puVar6);
    }
    local_5e8 = &PTR_FUN_710523d9a8;
    local_5e0 = (undefined8 *)0x0;
    FUN_7103779f50((long)&local_3f0,2,&local_560);
    FUN_7103779f50((long)&local_3f0,3,(float *)&local_550);
    uVar31 = 3;
    local_520[0] = (long ***)((ulong)local_520[0] & 0xffffffffffffff00);
    local_528 = (undefined **)0x0;
    FUN_710062dc20((uint *)&local_528,"num_%d");
    FUN_71037780e0(&local_5d8,(long)&local_4e0,local_520,uVar31,ppppbVar30,pppplVar32,param_6,
                   param_7,param_8);
    ppplVar11 = local_408;
    ppplVar9 = local_5d0[0];
    local_5d0[0] = (long ***)0x0;
    local_408 = ppplVar9;
    if (ppplVar11 != (long ***)0x0) {
      FUN_710392eb40((ulong)ppplVar11);
    }
    uVar31 = 3;
    local_5d0[0] = (long ***)0x0;
    local_5d8 = (undefined **)0x0;
    FUN_710062dc20((uint *)&local_5d8,"set_dmg_num_%d");
    FUN_7103776910(&local_5e8,(long)&local_4e0,local_5d0,uVar31,ppppbVar30,pppplVar32,param_6,
                   param_7,param_8);
    puVar12 = local_3d8;
    puVar6 = local_5e0;
    local_5e0 = (undefined8 *)0x0;
    local_3d8 = puVar6;
    if (puVar12 != (undefined8 *)0x0) {
      FUN_710392eb40((ulong)puVar12);
    }
    local_5e8 = &PTR_FUN_710523d9a8;
    local_5e0 = (undefined8 *)0x0;
    FUN_7103779f50((long)&local_3e0,2,&local_560);
    FUN_7103779f50((long)&local_3e0,3,(float *)&local_550);
    FUN_710377b010((ulong)(uint)(float)(int)uVar33,(long)&local_430);
    FUN_710377b010(uVar26,(long)&local_420);
    FUN_710377b010(uVar16,(long)&local_410);
    uVar16 = local_588;
    local_590 = &PTR_FUN_710523d9a8;
    local_588 = 0;
    if (uVar16 != 0) {
      FUN_710392eb40(uVar16);
    }
    local_580 = &PTR_FUN_710523d9a8;
    local_578 = 0;
    if (uVar48 != 0) {
      FUN_710392eb40(uVar48);
    }
    uVar16 = local_568;
    local_570 = &PTR_FUN_710523d9a8;
    local_568 = 0;
    if (uVar16 != 0) {
      FUN_710392eb40(uVar16);
    }
    uVar16 = local_530;
    local_538 = &PTR_FUN_710523d9e8;
    local_530 = 0;
    if (uVar16 != 0) {
      FUN_710392eb40(uVar16);
    }
    uVar16 = local_4d8;
    local_4e0 = &PTR_FUN_710523d988;
    local_4d8 = 0;
    if (uVar16 != 0) {
      uVar26 = *(ulong *)(uVar16 + 0x18);
      *(undefined ***)(uVar16 + 0x10) = &PTR_FUN_710523d9a8;
      *(undefined8 *)(uVar16 + 0x18) = 0;
      if (uVar26 != 0) {
        FUN_710392eb40(uVar26);
      }
      FUN_710392eb40(uVar16);
    }
    uVar16 = local_480;
    local_488 = &PTR_FUN_710523d988;
    local_480 = 0;
    if (uVar16 != 0) {
      uVar26 = *(ulong *)(uVar16 + 0x18);
      *(undefined ***)(uVar16 + 0x10) = &PTR_FUN_710523d9a8;
      *(undefined8 *)(uVar16 + 0x18) = 0;
      if (uVar26 != 0) {
        FUN_710392eb40(uVar26);
      }
      FUN_710392eb40(uVar16);
    }
    uVar16 = uVar1;
  } while (uVar1 != 2);
  local_410 = &PTR_FUN_710523d9e8;
  local_408 = (long ***)0x0;
  if (ppplVar9 != (long ***)0x0) {
    FUN_710392eb40((ulong)ppplVar9);
  }
  local_420 = &PTR_FUN_710523d9e8;
  local_418 = (long ***)0x0;
  if (ppplVar8 != (long ***)0x0) {
    FUN_710392eb40((ulong)ppplVar8);
  }
  local_430 = &PTR_FUN_710523d9e8;
  local_428 = (long ***)0x0;
  if (ppplVar7 != (long ***)0x0) {
    FUN_710392eb40((ulong)ppplVar7);
  }
  local_3e0 = &PTR_FUN_710523d9a8;
  local_3d8 = (undefined8 *)0x0;
  if (puVar6 != (undefined8 *)0x0) {
    FUN_710392eb40((ulong)puVar6);
  }
  local_3f0 = &PTR_FUN_710523d9a8;
  local_3e8 = (undefined8 *)0x0;
  if (puVar5 != (undefined8 *)0x0) {
    FUN_710392eb40((ulong)puVar5);
  }
  local_400 = &PTR_FUN_710523d9a8;
  local_3f8 = (undefined8 *)0x0;
  if (puVar4 != (undefined8 *)0x0) {
    FUN_710392eb40((ulong)puVar4);
  }
  pppplVar29 = (long ****)&DAT_00001000;
  FUN_7103775dc0(*(long **)*plVar36,0,(long ****)&DAT_00001000,ppppbVar30,pppplVar32,param_6,param_7
                 ,param_8);
  if (alStack_2d0 == local_2b0) {
    pcVar40 = *(code **)(*local_2b0 + 0x20);
LAB_71018dc3ec:
    (*pcVar40)();
    uVar31 = extraout_x1_09;
  }
  else {
    uVar31 = extraout_x1_08;
    if (local_2b0 != (long *)0x0) {
      pcVar40 = *(code **)(*local_2b0 + 0x28);
      goto LAB_71018dc3ec;
    }
  }
  if (alStack_300 == local_2e0) {
    pcVar40 = *(code **)(*local_2e0 + 0x20);
LAB_71018dc41c:
    (*pcVar40)();
    uVar31 = extraout_x1_10;
  }
  else if (local_2e0 != (long *)0x0) {
    pcVar40 = *(code **)(*local_2e0 + 0x28);
    goto LAB_71018dc41c;
  }
  if (alStack_330 == local_310) {
    pcVar40 = *(code **)(*local_310 + 0x20);
LAB_71018dc44c:
    (*pcVar40)();
    uVar31 = extraout_x1_11;
  }
  else if (local_310 != (long *)0x0) {
    pcVar40 = *(code **)(*local_310 + 0x28);
    goto LAB_71018dc44c;
  }
  if (alStack_360 == local_340) {
    pcVar40 = *(code **)(*local_340 + 0x20);
LAB_71018dc47c:
    (*pcVar40)();
    uVar31 = extraout_x1_12;
  }
  else if (local_340 != (long *)0x0) {
    pcVar40 = *(code **)(*local_340 + 0x28);
    goto LAB_71018dc47c;
  }
  if (alStack_390 == local_370) {
    pcVar40 = *(code **)(*local_370 + 0x20);
LAB_71018dc4ac:
    (*pcVar40)();
    uVar31 = extraout_x1_13;
  }
  else if (local_370 != (long *)0x0) {
    pcVar40 = *(code **)(*local_370 + 0x28);
    goto LAB_71018dc4ac;
  }
  if (alStack_1a0 == local_180) {
    pcVar40 = *(code **)(*local_180 + 0x20);
LAB_71018dc4dc:
    (*pcVar40)();
    uVar31 = extraout_x1_14;
  }
  else if (local_180 != (long *)0x0) {
    pcVar40 = *(code **)(*local_180 + 0x28);
    goto LAB_71018dc4dc;
  }
  if (alStack_1d0 == local_1b0) {
    pcVar40 = *(code **)(*local_1b0 + 0x20);
LAB_71018dc50c:
    (*pcVar40)();
    uVar31 = extraout_x1_15;
  }
  else if (local_1b0 != (long *)0x0) {
    pcVar40 = *(code **)(*local_1b0 + 0x28);
    goto LAB_71018dc50c;
  }
  if (alStack_200 == local_1e0) {
    pcVar40 = *(code **)(*local_1e0 + 0x20);
LAB_71018dc53c:
    (*pcVar40)();
    uVar31 = extraout_x1_16;
  }
  else if (local_1e0 != (long *)0x0) {
    pcVar40 = *(code **)(*local_1e0 + 0x28);
    goto LAB_71018dc53c;
  }
  if (alStack_230 == local_210) {
    pcVar40 = *(code **)(*local_210 + 0x20);
LAB_71018dc56c:
    (*pcVar40)();
    uVar31 = extraout_x1_17;
  }
  else if (local_210 != (long *)0x0) {
    pcVar40 = *(code **)(*local_210 + 0x28);
    goto LAB_71018dc56c;
  }
  if (alStack_260 == local_240) {
    pcVar40 = *(code **)(*local_240 + 0x20);
LAB_71018dc59c:
    (*pcVar40)();
    uVar31 = extraout_x1_18;
  }
  else if (local_240 != (long *)0x0) {
    pcVar40 = *(code **)(*local_240 + 0x28);
    goto LAB_71018dc59c;
  }
  if (alStack_100 == local_e0) {
    pcVar40 = *(code **)(*local_e0 + 0x20);
  }
  else {
    if (local_e0 == (long *)0x0) goto LAB_71018dc5d0;
    pcVar40 = *(code **)(*local_e0 + 0x28);
  }
  (*pcVar40)();
  uVar31 = extraout_x1_19;
LAB_71018dc5d0:
  puVar17[2] = &DAT_7105333600;
  uVar2 = DAT_7105333664;
  *(undefined4 *)(puVar17 + 0xd) = DAT_7105333660;
  *(undefined4 *)((long)puVar17 + 0x6c) = uVar2;
  do {
    uVar33 = DAT_7105333650;
    cVar3 = '\x01';
    bVar13 = (bool)ExclusiveMonitorPass(0x7105333650,0x10);
    if (bVar13) {
      DAT_7105333650 = 1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0' || (uVar33 & 1) != 0);
  puVar17[9] = DAT_7105333648;
  DAT_7105333650 = 0;
  DAT_7105333648 = puVar17;
  FUN_71032caea0((long)puVar17,uVar31,pppplVar29,ppppbVar30,pppplVar32,param_6,param_7,param_8);
  lVar18 = *(long *)(lVar15 + 0xe0);
  *(undefined8 **)(lVar15 + 0xe0) = puVar17;
  if (lVar18 != 0) {
    FUN_71032cad20(lVar18);
    return;
  }
  return;
}

