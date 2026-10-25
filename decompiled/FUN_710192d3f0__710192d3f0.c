// addr:      710192d3f0
// offset:    0x192d3f0
// name:      FUN_710192d3f0
// mangled:   
// signature: undefined __cdecl FUN_710192d3f0(long param_1, undefined8 param_2, long * * * * * * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_710192d3f0(long param_1,undefined8 param_2,long *********param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long *plVar1;
  long *plVar2;
  long **pplVar3;
  long **pplVar4;
  char cVar5;
  undefined4 uVar6;
  undefined8 *puVar7;
  bool bVar8;
  uint uVar9;
  uint uVar10;
  ulong uVar11;
  undefined8 *puVar12;
  long *plVar13;
  undefined8 *puVar14;
  long *plVar15;
  long ****pppplVar16;
  undefined8 *puVar17;
  ulong uVar18;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 extraout_x1_02;
  byte ****ppppbVar19;
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
  undefined8 uVar20;
  long ****pppplVar21;
  long *********ppppppppplVar22;
  long *******ppppppplVar23;
  code *pcVar24;
  long **pplVar25;
  long lVar26;
  long *plVar27;
  long *plVar28;
  long *plVar29;
  long lVar30;
  long lVar31;
  long *plVar32;
  undefined1 *puVar33;
  long lVar34;
  long *plVar35;
  long *plVar36;
  long *plVar37;
  long *plVar38;
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined4 local_4a0;
  undefined4 local_480;
  undefined **local_460;
  undefined8 *local_458;
  undefined **local_450;
  undefined8 *local_448;
  long ********local_440;
  undefined8 uStack_438;
  long *********local_420;
  long alStack_410 [4];
  long *local_3f0;
  long alStack_3e0 [4];
  long *local_3c0;
  long alStack_3b0 [4];
  long *local_390;
  long alStack_380 [4];
  long *local_360;
  long alStack_350 [4];
  long *local_330;
  byte ***local_310 [6];
  long alStack_2e0 [4];
  long *local_2c0;
  long alStack_2b0 [4];
  long *local_290;
  long alStack_280 [4];
  long *local_260;
  long alStack_250 [4];
  long *local_230;
  long alStack_220 [4];
  long *local_200;
  long ********local_1e0;
  undefined2 local_1d8;
  undefined4 local_1d6;
  undefined2 local_1d2;
  undefined4 local_1d0;
  undefined2 local_1cc;
  undefined1 local_1ca;
  undefined1 *local_1c8;
  undefined4 local_1c0;
  long alStack_1b0 [4];
  long *local_190;
  long alStack_180 [4];
  long *local_160;
  long alStack_150 [4];
  long *local_130;
  long alStack_120 [4];
  long *local_100;
  long alStack_f0 [4];
  long *local_d0;
  undefined4 local_c0;
  long ***local_b0;
  long *local_a8;
  long ****local_90;
  undefined4 local_64;
  
  if (*(long *)(param_1 + 0x1f0) != 0) {
    return;
  }
  lVar34 = *(long *)(param_1 + 0x1c8);
  uVar11 = FUN_710323cb80(lVar34,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  while ((uVar11 & 1) == 0) {
    nn::os::SleepThread(1000000);
    uVar11 = FUN_710323cb80(lVar34,extraout_x1,param_3,param_4,param_5,param_6,param_7,param_8);
  }
  plVar1 = (long *)(param_1 + 0x1c8);
  if (*(uint *)(*DAT_710532a860 + 0x1c) < 3) {
    lVar34 = *(long *)**(undefined8 **)(*DAT_7105314510 + 0x158) +
             (ulong)*(uint *)(*DAT_710532a860 + 0x1c) * 0x3d700;
    puVar33 = *(undefined1 **)(lVar34 + 0x3d6d0);
    uVar10 = *(uint *)(lVar34 + 0x3d6d8);
  }
  else {
    uVar10 = 0;
    puVar33 = &DAT_c1ffff0000000000;
  }
  puVar12 = (undefined8 *)
            FUN_710392e290(0x10,0x88,(long ****)param_3,param_4,param_5,param_6,param_7,param_8);
  if (puVar12 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_310[0]._0_4_ = 0;
      local_1e0 = (long ********)&DAT_00000088;
      param_3 = &local_1e0;
      uVar11 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,local_310);
      if (((uVar11 & 1) != 0) &&
         (puVar12 = (undefined8 *)
                    FUN_710392e290(0x10,0x88,(long ****)param_3,param_4,param_5,param_6,param_7,
                                   param_8), puVar12 != (undefined8 *)0x0)) goto LAB_710192d518;
    }
    puVar12 = (undefined8 *)0x0;
  }
LAB_710192d518:
  *puVar12 = &PTR_FUN_71050b1c30;
  puVar12[1] = 0;
  puVar12[0xc] = 0;
  puVar12[0xd] = 0x1ffffffff;
  puVar12[2] = 0;
  puVar12[3] = 0;
  *(undefined1 *)(puVar12 + 0xb) = 0;
  puVar12[0xf] = plVar1;
  *(undefined1 *)(puVar12 + 0xe) = 1;
  puVar12[9] = 0;
  puVar12[10] = 0;
  plVar13 = (long *)FUN_710392e290(0x10,0x198,(long ****)param_3,param_4,param_5,param_6,param_7,
                                   param_8);
  if (plVar13 == (long *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_310[0]._0_4_ = 0;
      local_1e0 = (long ********)&DAT_00000198;
      param_3 = &local_1e0;
      uVar11 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,local_310);
      if (((uVar11 & 1) != 0) &&
         (plVar13 = (long *)FUN_710392e290(0x10,0x198,(long ****)param_3,param_4,param_5,param_6,
                                           param_7,param_8), plVar13 != (long *)0x0))
      goto LAB_710192d5a0;
    }
    plVar13 = (long *)0x0;
  }
LAB_710192d5a0:
  *plVar13 = (long)plVar1;
  puVar14 = (undefined8 *)
            FUN_710392e290(0x10,0x80,(long ****)param_3,param_4,param_5,param_6,param_7,param_8);
  if (puVar14 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_310[0]._0_4_ = 0;
      local_1e0 = (long ********)&DAT_00000080;
      param_3 = &local_1e0;
      uVar11 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,local_310);
      if (((uVar11 & 1) != 0) &&
         (puVar14 = (undefined8 *)
                    FUN_710392e290(0x10,0x80,(long ****)param_3,param_4,param_5,param_6,param_7,
                                   param_8), puVar14 != (undefined8 *)0x0)) goto LAB_710192d604;
    }
    puVar14 = (undefined8 *)0x0;
  }
LAB_710192d604:
  *puVar14 = &PTR_FUN_7105181b40;
  puVar14[2] = 0;
  puVar14[1] = puVar14 + 2;
  puVar14[5] = 0;
  puVar14[3] = 0;
  puVar14[4] = puVar14 + 5;
  puVar14[8] = 0;
  puVar14[6] = 0;
  puVar14[7] = puVar14 + 8;
  puVar14[0xb] = 0;
  puVar14[0xc] = 0;
  *(undefined4 *)(puVar14 + 0xf) = 0;
  puVar14[0xe] = 0;
  puVar14[9] = 0;
  puVar14[10] = puVar14 + 0xb;
  *(undefined4 *)(puVar14 + 0xd) = 2;
  plVar13[1] = (long)puVar14;
  puVar14 = (undefined8 *)
            FUN_710392e290(0x10,8,(long ****)param_3,param_4,param_5,param_6,param_7,param_8);
  uVar20 = extraout_x1_00;
  if (puVar14 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_310[0]._0_4_ = 0;
      local_1e0 = (long ********)&DAT_00000008;
      param_3 = &local_1e0;
      auVar41 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,local_310);
      uVar20 = auVar41._8_8_;
      if (((auVar41._0_8_ & 1) != 0) &&
         (puVar14 = (undefined8 *)
                    FUN_710392e290(0x10,8,(long ****)param_3,param_4,param_5,param_6,param_7,param_8
                                  ), uVar20 = extraout_x1_01, puVar14 != (undefined8 *)0x0))
      goto LAB_710192d6bc;
    }
    puVar14 = (undefined8 *)0x0;
  }
LAB_710192d6bc:
  FUN_7103773200(puVar14,uVar20,(long ****)param_3,param_4,param_5,param_6,param_7,param_8);
  plVar2 = plVar13 + 3;
  plVar13[2] = (long)puVar14;
  FUN_7103776290(plVar2,extraout_x1_02,(long ****)param_3,param_4,param_5,param_6,param_7,param_8);
  plVar35 = plVar13 + 5;
  *plVar35 = 0;
  plVar28 = plVar13 + 6;
  *plVar28 = 0;
  plVar29 = plVar13 + 7;
  *plVar29 = 0;
  plVar15 = plVar13 + 8;
  *plVar15 = 0;
  plVar13[0x2d] = 0;
  plVar13[0x2e] = 0xffffffff;
  *(undefined4 *)(plVar13 + 0x2f) = 0xffffffff;
  *(undefined4 *)(plVar13 + 0x31) = 3;
  *(undefined4 *)(plVar13 + 0x32) = 4;
  plVar13[0xf] = 0;
  plVar13[0x10] = 0;
  *(undefined1 *)((long)plVar13 + 0x17c) = 0;
  plVar13[0xd] = 0;
  plVar13[0xe] = 0;
  *(undefined1 *)(plVar13 + 0x30) = 0;
  *(undefined2 *)((long)plVar13 + 0x18c) = 0;
  plVar13[0xe] = (long)FUN_7101e52f00;
  plVar13[0xf] = 0;
  plVar13[0x11] = 0;
  plVar13[0x12] = 0;
  plVar13[0x10] = (long)FUN_7101e52f10;
  plVar13[0x11] = 0;
  plVar13[0x13] = 0;
  plVar13[0x14] = 0;
  plVar13[0x12] = (long)FUN_7101e53280;
  plVar13[0x13] = 0;
  plVar13[0x15] = 0;
  plVar13[0x16] = 0;
  plVar13[0x14] = (long)FUN_7101e533d0;
  plVar13[0x15] = 0;
  plVar13[0x17] = 0;
  plVar13[0x18] = 0;
  plVar13[0x16] = (long)FUN_7101e53670;
  plVar13[0x17] = 0;
  plVar13[0x19] = 0;
  plVar13[0x1a] = 0;
  plVar13[0x18] = (long)FUN_7101e538a0;
  plVar13[0x19] = 0;
  plVar13[0x1b] = 0;
  plVar13[0x1c] = 0;
  plVar13[0x1a] = (long)FUN_7101e53a90;
  plVar13[0x1b] = 0;
  plVar13[0x1d] = 0;
  plVar13[0x1e] = 0;
  plVar13[0x1c] = (long)FUN_7101e53af0;
  plVar13[0x1d] = 0;
  plVar13[0x1f] = 0;
  plVar13[0x20] = 0;
  plVar13[0x1e] = (long)FUN_7101e53b60;
  plVar13[0x1f] = 0;
  plVar13[0x21] = 0;
  plVar13[0x22] = 0;
  plVar13[0x20] = (long)FUN_7101e53bc0;
  plVar13[0x21] = 0;
  plVar13[0x23] = 0;
  plVar13[0x24] = 0;
  *(undefined4 *)(plVar13 + 0x24) = 0;
  plVar13[0x22] = (long)FUN_7101e53c30;
  plVar13[0x23] = 0;
  plVar13[0xb] = 0;
  plVar13[0xc] = 0;
  plVar13[9] = (long)plVar13;
  plVar13[10] = 0;
  plVar13[0x2b] = 0;
  plVar13[0x2c] = 0;
  plVar13[0x29] = 0;
  plVar13[0x2a] = 0;
  plVar13[0x27] = 0;
  plVar13[0x28] = 0;
  plVar13[0x25] = 0;
  plVar13[0x26] = 0;
  FUN_71032cbf30(plVar13 + 2,*(long *)*plVar13,(ulong *)&DAT_7104545a58,(byte ****)0x1,param_5,
                 param_6,param_7,param_8);
  lVar34 = **(long **)plVar13[2];
  *(undefined4 *)(*(long *)(lVar34 + 0x600) + 0x10) = 0x20;
  *(undefined4 *)(*(long *)(lVar34 + 0x600) + 0x14) = 0x40;
  *(undefined4 *)(*(long *)(lVar34 + 0x600) + 0x18) = 0x40010;
  *(undefined1 *)(*(long *)(lVar34 + 0x600) + 0x4aa) = 0;
  lVar34 = *(long *)plVar13[2];
  if ((long *)(lVar34 + 8) != plVar2) {
    *(undefined8 *)plVar13[4] = **(undefined8 **)(lVar34 + 0x10);
    *(undefined8 *)(plVar13[4] + 8) = *(undefined8 *)(*(long *)(lVar34 + 0x10) + 8);
    lVar26 = *(long *)(lVar34 + 0x10);
    lVar34 = plVar13[4];
    if (lVar34 != lVar26) {
      **(undefined8 **)(lVar34 + 0x18) = **(undefined8 **)(lVar26 + 0x18);
      *(undefined8 *)(*(long *)(lVar34 + 0x18) + 8) = *(undefined8 *)(*(long *)(lVar26 + 0x18) + 8);
      *(undefined8 *)(*(long *)(lVar34 + 0x18) + 0x10) =
           *(undefined8 *)(*(long *)(lVar26 + 0x18) + 0x10);
      *(undefined8 *)(*(long *)(lVar34 + 0x18) + 0x18) =
           *(undefined8 *)(*(long *)(lVar26 + 0x18) + 0x18);
    }
  }
  local_1d6 = 0;
  local_1c8 = &DAT_41f0000000000000;
  local_1d2 = 0;
  local_1d0 = 1;
  local_1cc = 1;
  local_1ca = 1;
  local_1c0 = 0;
  local_190 = (long *)0x0;
  local_160 = (long *)0x0;
  local_130 = (long *)0x0;
  local_100 = (long *)0x0;
  local_d0 = (long *)0x0;
  local_c0 = 0;
  local_1e0 = (long ********)0x0;
  local_1d8 = 0x101;
  FUN_7101989b70(local_310,&local_1e0);
  FUN_710337df20((long)local_310);
  local_440 = (long ********)&PTR_FUN_71050b1ba0;
  local_420 = &local_440;
  FUN_7101989a30((long *)&local_440,alStack_280);
  if (&local_440 == local_420) {
    ppppppplVar23 = (*local_420)[4];
LAB_710192d974:
    (*(code *)ppppppplVar23)();
  }
  else if (local_420 != (long *********)0x0) {
    ppppppplVar23 = (*local_420)[5];
    goto LAB_710192d974;
  }
  FUN_7101989b70(&local_440,local_310);
  local_b0 = (long ***)&PTR_FUN_71050b1be8;
  local_a8 = plVar13;
  local_90 = &local_b0;
  FUN_7101a7ed70((long *)&local_b0,alStack_410);
  if (&local_b0 == local_90) {
    (*(code *)(*local_90)[4])();
  }
  else if (local_90 != (long ****)0x0) {
    (*(code *)(*local_90)[5])();
  }
  ppppppppplVar22 = &local_440;
  FUN_7103770b30(plVar35,plVar2,(long ****)"selector_00",(byte ****)ppppppppplVar22,param_5,param_6,
                 param_7,param_8);
  FUN_71037717d0(plVar35,0,"set_parts_btn_00",ppppppppplVar22,param_5,param_6,param_7,param_8);
  lVar34 = *(long *)(*plVar35 + 0x1b8);
  if (lVar34 != 0) {
    lVar26 = *plVar35 + 0x1b8;
    lVar30 = lVar26;
    lVar31 = lVar34;
    do {
      bVar8 = *(int *)(lVar31 + 0x20) < 0;
      if (!bVar8) {
        lVar30 = lVar31;
      }
      lVar31 = *(long *)(lVar31 + (ulong)bVar8 * 8);
    } while (lVar31 != 0);
    if (((lVar30 != lVar26) && (*(int *)(lVar30 + 0x20) < 1)) &&
       (plVar37 = *(long **)(lVar30 + 0x28), plVar37 != (long *)0x0)) {
      (**(code **)(*plVar37 + 0x1f8))(plVar37,1);
      (**(code **)(*plVar37 + 0x388))(plVar37,0,0);
      lVar26 = *plVar35 + 0x1b8;
      lVar34 = *(long *)(*plVar35 + 0x1b8);
    }
    lVar30 = lVar26;
    if (lVar34 != 0) {
      do {
        bVar8 = *(int *)(lVar34 + 0x20) < 0;
        if (!bVar8) {
          lVar30 = lVar34;
        }
        lVar34 = *(long *)(lVar34 + (ulong)bVar8 * 8);
      } while (lVar34 != 0);
      if (((lVar30 != lVar26) && (*(int *)(lVar30 + 0x20) < 1)) &&
         (plVar37 = *(long **)(lVar30 + 0x28), plVar37 != (long *)0x0)) {
        (**(code **)(*plVar37 + 0x208))(plVar37,1);
        (**(code **)(*plVar37 + 0x388))(plVar37,0,0);
      }
    }
  }
  FUN_71037717d0(plVar35,1,"set_parts_btn_01",ppppppppplVar22,param_5,param_6,param_7,param_8);
  lVar34 = *(long *)(*plVar35 + 0x1b8);
  if (lVar34 != 0) {
    lVar26 = *plVar35 + 0x1b8;
    lVar30 = lVar26;
    lVar31 = lVar34;
    do {
      if (0 < *(int *)(lVar31 + 0x20)) {
        lVar30 = lVar31;
      }
      lVar31 = *(long *)(lVar31 + (ulong)(*(int *)(lVar31 + 0x20) < 1) * 8);
    } while (lVar31 != 0);
    if (((lVar30 != lVar26) && (*(int *)(lVar30 + 0x20) < 2)) &&
       (plVar37 = *(long **)(lVar30 + 0x28), plVar37 != (long *)0x0)) {
      (**(code **)(*plVar37 + 0x1f8))(plVar37,1);
      (**(code **)(*plVar37 + 0x388))(plVar37,0,0);
      lVar26 = *plVar35 + 0x1b8;
      lVar34 = *(long *)(*plVar35 + 0x1b8);
    }
    lVar30 = lVar26;
    if (lVar34 != 0) {
      do {
        if (0 < *(int *)(lVar34 + 0x20)) {
          lVar30 = lVar34;
        }
        lVar34 = *(long *)(lVar34 + (ulong)(*(int *)(lVar34 + 0x20) < 1) * 8);
      } while (lVar34 != 0);
      if (((lVar30 != lVar26) && (*(int *)(lVar30 + 0x20) < 2)) &&
         (plVar37 = *(long **)(lVar30 + 0x28), plVar37 != (long *)0x0)) {
        (**(code **)(*plVar37 + 0x208))(plVar37,1);
        (**(code **)(*plVar37 + 0x388))(plVar37,0,0);
      }
    }
  }
  FUN_71037717d0(plVar35,2,"set_parts_btn_02",ppppppppplVar22,param_5,param_6,param_7,param_8);
  lVar34 = *(long *)(*plVar35 + 0x1b8);
  if (lVar34 != 0) {
    lVar26 = *plVar35 + 0x1b8;
    lVar30 = lVar26;
    lVar31 = lVar34;
    do {
      if (1 < *(int *)(lVar31 + 0x20)) {
        lVar30 = lVar31;
      }
      lVar31 = *(long *)(lVar31 + (ulong)(*(int *)(lVar31 + 0x20) < 2) * 8);
    } while (lVar31 != 0);
    if (((lVar30 != lVar26) && (*(int *)(lVar30 + 0x20) < 3)) &&
       (plVar37 = *(long **)(lVar30 + 0x28), plVar37 != (long *)0x0)) {
      (**(code **)(*plVar37 + 0x1f8))(plVar37,1);
      (**(code **)(*plVar37 + 0x388))(plVar37,0,0);
      lVar26 = *plVar35 + 0x1b8;
      lVar34 = *(long *)(*plVar35 + 0x1b8);
    }
    lVar30 = lVar26;
    if (lVar34 != 0) {
      do {
        if (1 < *(int *)(lVar34 + 0x20)) {
          lVar30 = lVar34;
        }
        lVar34 = *(long *)(lVar34 + (ulong)(*(int *)(lVar34 + 0x20) < 2) * 8);
      } while (lVar34 != 0);
      if (((lVar30 != lVar26) && (*(int *)(lVar30 + 0x20) < 3)) &&
         (plVar37 = *(long **)(lVar30 + 0x28), plVar37 != (long *)0x0)) {
        (**(code **)(*plVar37 + 0x208))(plVar37,1);
        (**(code **)(*plVar37 + 0x388))(plVar37,0,0);
      }
    }
  }
  FUN_71037717d0(plVar35,3,"set_parts_btn_03",ppppppppplVar22,param_5,param_6,param_7,param_8);
  lVar34 = *(long *)(*plVar35 + 0x1b8);
  if (lVar34 != 0) {
    lVar26 = *plVar35 + 0x1b8;
    lVar30 = lVar26;
    lVar31 = lVar34;
    do {
      if (2 < *(int *)(lVar31 + 0x20)) {
        lVar30 = lVar31;
      }
      lVar31 = *(long *)(lVar31 + (ulong)(*(int *)(lVar31 + 0x20) < 3) * 8);
    } while (lVar31 != 0);
    if (((lVar30 != lVar26) && (*(int *)(lVar30 + 0x20) < 4)) &&
       (plVar37 = *(long **)(lVar30 + 0x28), plVar37 != (long *)0x0)) {
      (**(code **)(*plVar37 + 0x1f8))(plVar37,1);
      (**(code **)(*plVar37 + 0x388))(plVar37,0,0);
      lVar26 = *plVar35 + 0x1b8;
      lVar34 = *(long *)(*plVar35 + 0x1b8);
    }
    lVar30 = lVar26;
    if (lVar34 != 0) {
      do {
        if (2 < *(int *)(lVar34 + 0x20)) {
          lVar30 = lVar34;
        }
        lVar34 = *(long *)(lVar34 + (ulong)(*(int *)(lVar34 + 0x20) < 3) * 8);
      } while (lVar34 != 0);
      if (((lVar30 != lVar26) && (*(int *)(lVar30 + 0x20) < 4)) &&
         (plVar37 = *(long **)(lVar30 + 0x28), plVar37 != (long *)0x0)) {
        (**(code **)(*plVar37 + 0x208))(plVar37,1);
        (**(code **)(*plVar37 + 0x388))(plVar37,0,0);
      }
    }
  }
  FUN_71037717d0(plVar35,4,"set_parts_btn_04",ppppppppplVar22,param_5,param_6,param_7,param_8);
  lVar34 = *(long *)(*plVar35 + 0x1b8);
  if (lVar34 != 0) {
    lVar26 = *plVar35 + 0x1b8;
    lVar30 = lVar26;
    lVar31 = lVar34;
    do {
      if (3 < *(int *)(lVar31 + 0x20)) {
        lVar30 = lVar31;
      }
      lVar31 = *(long *)(lVar31 + (ulong)(*(int *)(lVar31 + 0x20) < 4) * 8);
    } while (lVar31 != 0);
    if (((lVar30 != lVar26) && (*(int *)(lVar30 + 0x20) < 5)) &&
       (plVar37 = *(long **)(lVar30 + 0x28), plVar37 != (long *)0x0)) {
      (**(code **)(*plVar37 + 0x1f8))(plVar37,1);
      (**(code **)(*plVar37 + 0x388))(plVar37,0,0);
      lVar26 = *plVar35 + 0x1b8;
      lVar34 = *(long *)(*plVar35 + 0x1b8);
    }
    lVar30 = lVar26;
    if (lVar34 != 0) {
      do {
        if (3 < *(int *)(lVar34 + 0x20)) {
          lVar30 = lVar34;
        }
        lVar34 = *(long *)(lVar34 + (ulong)(*(int *)(lVar34 + 0x20) < 4) * 8);
      } while (lVar34 != 0);
      if (((lVar30 != lVar26) && (*(int *)(lVar30 + 0x20) < 5)) &&
         (plVar37 = *(long **)(lVar30 + 0x28), plVar37 != (long *)0x0)) {
        (**(code **)(*plVar37 + 0x208))(plVar37,1);
        (**(code **)(*plVar37 + 0x388))(plVar37,0,0);
      }
    }
  }
  FUN_71037717d0(plVar35,5,"set_parts_btn_05",ppppppppplVar22,param_5,param_6,param_7,param_8);
  plVar37 = (long *)*plVar35;
  plVar27 = (long *)plVar37[0x37];
  if (plVar27 != (long *)0x0) {
    plVar36 = plVar37 + 0x37;
    plVar38 = plVar36;
    plVar32 = plVar27;
    do {
      if (4 < (int)plVar32[4]) {
        plVar38 = plVar32;
      }
      plVar32 = (long *)plVar32[(int)plVar32[4] < 5];
    } while (plVar32 != (long *)0x0);
    if (((plVar38 != plVar36) && ((int)plVar38[4] < 6)) &&
       (plVar38 = (long *)plVar38[5], plVar38 != (long *)0x0)) {
      (**(code **)(*plVar38 + 0x1f8))(plVar38,1);
      (**(code **)(*plVar38 + 0x388))(plVar38,0,0);
      plVar37 = (long *)*plVar35;
      plVar27 = (long *)plVar37[0x37];
      plVar36 = plVar37 + 0x37;
    }
    plVar38 = plVar36;
    if (plVar27 != (long *)0x0) {
      do {
        if (4 < (int)plVar27[4]) {
          plVar38 = plVar27;
        }
        plVar27 = (long *)plVar27[(int)plVar27[4] < 5];
      } while (plVar27 != (long *)0x0);
      if (((plVar38 != plVar36) && ((int)plVar38[4] < 6)) &&
         (plVar27 = (long *)plVar38[5], plVar27 != (long *)0x0)) {
        (**(code **)(*plVar27 + 0x208))(plVar27,1);
        (**(code **)(*plVar27 + 0x388))(plVar27,0,0);
        plVar37 = (long *)*plVar35;
      }
    }
  }
  (**(code **)(*plVar37 + 0x60))(plVar37,0);
  (**(code **)(*(long *)*plVar35 + 0x70))((long *)*plVar35,1);
  if (alStack_350 == local_330) {
    pcVar24 = *(code **)(*local_330 + 0x20);
LAB_710192e04c:
    (*pcVar24)();
  }
  else if (local_330 != (long *)0x0) {
    pcVar24 = *(code **)(*local_330 + 0x28);
    goto LAB_710192e04c;
  }
  if (alStack_380 == local_360) {
    pcVar24 = *(code **)(*local_360 + 0x20);
LAB_710192e07c:
    (*pcVar24)();
  }
  else if (local_360 != (long *)0x0) {
    pcVar24 = *(code **)(*local_360 + 0x28);
    goto LAB_710192e07c;
  }
  if (alStack_3b0 == local_390) {
    pcVar24 = *(code **)(*local_390 + 0x20);
LAB_710192e0ac:
    (*pcVar24)();
  }
  else if (local_390 != (long *)0x0) {
    pcVar24 = *(code **)(*local_390 + 0x28);
    goto LAB_710192e0ac;
  }
  if (alStack_3e0 == local_3c0) {
    pcVar24 = *(code **)(*local_3c0 + 0x20);
LAB_710192e0dc:
    (*pcVar24)();
  }
  else if (local_3c0 != (long *)0x0) {
    pcVar24 = *(code **)(*local_3c0 + 0x28);
    goto LAB_710192e0dc;
  }
  if (alStack_410 == local_3f0) {
    pcVar24 = *(code **)(*local_3f0 + 0x20);
LAB_710192e10c:
    (*pcVar24)();
  }
  else if (local_3f0 != (long *)0x0) {
    pcVar24 = *(code **)(*local_3f0 + 0x28);
    goto LAB_710192e10c;
  }
  ppppbVar19 = local_310;
  FUN_7103770b30(plVar28,plVar2,(long ****)"selector_01",ppppbVar19,param_5,param_6,param_7,param_8)
  ;
  FUN_71037717d0(plVar28,0,"set_parts_btn_06",ppppbVar19,param_5,param_6,param_7,param_8);
  lVar34 = *(long *)(*plVar28 + 0x1b8);
  if (lVar34 != 0) {
    lVar26 = *plVar28 + 0x1b8;
    lVar30 = lVar26;
    lVar31 = lVar34;
    do {
      bVar8 = *(int *)(lVar31 + 0x20) < 0;
      if (!bVar8) {
        lVar30 = lVar31;
      }
      lVar31 = *(long *)(lVar31 + (ulong)bVar8 * 8);
    } while (lVar31 != 0);
    if (((lVar30 != lVar26) && (*(int *)(lVar30 + 0x20) < 1)) &&
       (plVar35 = *(long **)(lVar30 + 0x28), plVar35 != (long *)0x0)) {
      (**(code **)(*plVar35 + 0x1f8))(plVar35,1);
      (**(code **)(*plVar35 + 0x388))(plVar35,0,0);
      lVar26 = *plVar28 + 0x1b8;
      lVar34 = *(long *)(*plVar28 + 0x1b8);
    }
    lVar30 = lVar26;
    if (lVar34 != 0) {
      do {
        bVar8 = *(int *)(lVar34 + 0x20) < 0;
        if (!bVar8) {
          lVar30 = lVar34;
        }
        lVar34 = *(long *)(lVar34 + (ulong)bVar8 * 8);
      } while (lVar34 != 0);
      if (((lVar30 != lVar26) && (*(int *)(lVar30 + 0x20) < 1)) &&
         (plVar35 = *(long **)(lVar30 + 0x28), plVar35 != (long *)0x0)) {
        (**(code **)(*plVar35 + 0x208))(plVar35,1);
        (**(code **)(*plVar35 + 0x388))(plVar35,0,0);
      }
    }
  }
  FUN_71037717d0(plVar28,1,"set_parts_btn_07",ppppbVar19,param_5,param_6,param_7,param_8);
  plVar35 = (long *)*plVar28;
  plVar37 = (long *)plVar35[0x37];
  if (plVar37 != (long *)0x0) {
    plVar27 = plVar35 + 0x37;
    plVar36 = plVar27;
    plVar38 = plVar37;
    do {
      if (0 < (int)plVar38[4]) {
        plVar36 = plVar38;
      }
      plVar38 = (long *)plVar38[(int)plVar38[4] < 1];
    } while (plVar38 != (long *)0x0);
    if (((plVar36 != plVar27) && ((int)plVar36[4] < 2)) &&
       (plVar36 = (long *)plVar36[5], plVar36 != (long *)0x0)) {
      (**(code **)(*plVar36 + 0x1f8))(plVar36,1);
      (**(code **)(*plVar36 + 0x388))(plVar36,0,0);
      plVar35 = (long *)*plVar28;
      plVar37 = (long *)plVar35[0x37];
      plVar27 = plVar35 + 0x37;
    }
    plVar36 = plVar27;
    if (plVar37 != (long *)0x0) {
      do {
        if (0 < (int)plVar37[4]) {
          plVar36 = plVar37;
        }
        plVar37 = (long *)plVar37[(int)plVar37[4] < 1];
      } while (plVar37 != (long *)0x0);
      if (((plVar36 != plVar27) && ((int)plVar36[4] < 2)) &&
         (plVar37 = (long *)plVar36[5], plVar37 != (long *)0x0)) {
        (**(code **)(*plVar37 + 0x208))(plVar37,1);
        (**(code **)(*plVar37 + 0x388))(plVar37,0,0);
        plVar35 = (long *)*plVar28;
      }
    }
  }
  (**(code **)(*plVar35 + 0x60))(plVar35,0);
  (**(code **)(*(long *)*plVar28 + 0x70))((long *)*plVar28,1);
  ppppbVar19 = local_310;
  FUN_7103770b30(plVar29,plVar2,(long ****)"selector_02",ppppbVar19,param_5,param_6,param_7,param_8)
  ;
  FUN_71037717d0(plVar29,0,"set_parts_btn_08",ppppbVar19,param_5,param_6,param_7,param_8);
  lVar34 = *(long *)(*plVar29 + 0x1b8);
  if (lVar34 != 0) {
    lVar26 = *plVar29 + 0x1b8;
    lVar30 = lVar26;
    lVar31 = lVar34;
    do {
      bVar8 = *(int *)(lVar31 + 0x20) < 0;
      if (!bVar8) {
        lVar30 = lVar31;
      }
      lVar31 = *(long *)(lVar31 + (ulong)bVar8 * 8);
    } while (lVar31 != 0);
    if (((lVar30 != lVar26) && (*(int *)(lVar30 + 0x20) < 1)) &&
       (plVar35 = *(long **)(lVar30 + 0x28), plVar35 != (long *)0x0)) {
      (**(code **)(*plVar35 + 0x1f8))(plVar35,1);
      (**(code **)(*plVar35 + 0x388))(plVar35,0,0);
      lVar26 = *plVar29 + 0x1b8;
      lVar34 = *(long *)(*plVar29 + 0x1b8);
    }
    lVar30 = lVar26;
    if (lVar34 != 0) {
      do {
        bVar8 = *(int *)(lVar34 + 0x20) < 0;
        if (!bVar8) {
          lVar30 = lVar34;
        }
        lVar34 = *(long *)(lVar34 + (ulong)bVar8 * 8);
      } while (lVar34 != 0);
      if (((lVar30 != lVar26) && (*(int *)(lVar30 + 0x20) < 1)) &&
         (plVar35 = *(long **)(lVar30 + 0x28), plVar35 != (long *)0x0)) {
        (**(code **)(*plVar35 + 0x208))(plVar35,1);
        (**(code **)(*plVar35 + 0x388))(plVar35,0,0);
      }
    }
  }
  FUN_71037717d0(plVar29,1,"set_parts_btn_09",ppppbVar19,param_5,param_6,param_7,param_8);
  lVar34 = *(long *)(*plVar29 + 0x1b8);
  if (lVar34 != 0) {
    lVar26 = *plVar29 + 0x1b8;
    lVar30 = lVar26;
    lVar31 = lVar34;
    do {
      if (0 < *(int *)(lVar31 + 0x20)) {
        lVar30 = lVar31;
      }
      lVar31 = *(long *)(lVar31 + (ulong)(*(int *)(lVar31 + 0x20) < 1) * 8);
    } while (lVar31 != 0);
    if (((lVar30 != lVar26) && (*(int *)(lVar30 + 0x20) < 2)) &&
       (plVar35 = *(long **)(lVar30 + 0x28), plVar35 != (long *)0x0)) {
      (**(code **)(*plVar35 + 0x1f8))(plVar35,1);
      (**(code **)(*plVar35 + 0x388))(plVar35,0,0);
      lVar26 = *plVar29 + 0x1b8;
      lVar34 = *(long *)(*plVar29 + 0x1b8);
    }
    lVar30 = lVar26;
    if (lVar34 != 0) {
      do {
        if (0 < *(int *)(lVar34 + 0x20)) {
          lVar30 = lVar34;
        }
        lVar34 = *(long *)(lVar34 + (ulong)(*(int *)(lVar34 + 0x20) < 1) * 8);
      } while (lVar34 != 0);
      if (((lVar30 != lVar26) && (*(int *)(lVar30 + 0x20) < 2)) &&
         (plVar35 = *(long **)(lVar30 + 0x28), plVar35 != (long *)0x0)) {
        (**(code **)(*plVar35 + 0x208))(plVar35,1);
        (**(code **)(*plVar35 + 0x388))(plVar35,0,0);
      }
    }
  }
  FUN_71037717d0(plVar29,2,"set_parts_btn_10",ppppbVar19,param_5,param_6,param_7,param_8);
  plVar35 = (long *)*plVar29;
  plVar28 = (long *)plVar35[0x37];
  if (plVar28 != (long *)0x0) {
    plVar37 = plVar35 + 0x37;
    plVar27 = plVar37;
    plVar36 = plVar28;
    do {
      if (1 < (int)plVar36[4]) {
        plVar27 = plVar36;
      }
      plVar36 = (long *)plVar36[(int)plVar36[4] < 2];
    } while (plVar36 != (long *)0x0);
    if (((plVar27 != plVar37) && ((int)plVar27[4] < 3)) &&
       (plVar27 = (long *)plVar27[5], plVar27 != (long *)0x0)) {
      (**(code **)(*plVar27 + 0x1f8))(plVar27,1);
      (**(code **)(*plVar27 + 0x388))(plVar27,0,0);
      plVar35 = (long *)*plVar29;
      plVar28 = (long *)plVar35[0x37];
      plVar37 = plVar35 + 0x37;
    }
    plVar27 = plVar37;
    if (plVar28 != (long *)0x0) {
      do {
        if (1 < (int)plVar28[4]) {
          plVar27 = plVar28;
        }
        plVar28 = (long *)plVar28[(int)plVar28[4] < 2];
      } while (plVar28 != (long *)0x0);
      if (((plVar27 != plVar37) && ((int)plVar27[4] < 3)) &&
         (plVar28 = (long *)plVar27[5], plVar28 != (long *)0x0)) {
        (**(code **)(*plVar28 + 0x208))(plVar28,1);
        (**(code **)(*plVar28 + 0x388))(plVar28,0,0);
        plVar35 = (long *)*plVar29;
      }
    }
  }
  (**(code **)(*plVar35 + 0x60))(plVar35,0);
  (**(code **)(*(long *)*plVar29 + 0x70))((long *)*plVar29,1);
  FUN_7101989b70(&local_440,&local_1e0);
  local_b0 = (long ***)&DAT_7105186040;
  local_90 = &local_b0;
  FUN_7101989a30((long *)&local_b0,alStack_3e0);
  if (&local_b0 == local_90) {
    pplVar25 = (*local_90)[4];
LAB_710192e6e8:
    (*(code *)pplVar25)();
  }
  else if (local_90 != (long ****)0x0) {
    pplVar25 = (*local_90)[5];
    goto LAB_710192e6e8;
  }
  ppppppppplVar22 = &local_440;
  uStack_438._0_4_ = CONCAT13(1,(undefined3)uStack_438);
  FUN_7103770b30(plVar15,plVar2,(long ****)"selector_03",(byte ****)ppppppppplVar22,param_5,param_6,
                 param_7,param_8);
  FUN_71037717d0(plVar15,0,"set_btn_return",ppppppppplVar22,param_5,param_6,param_7,param_8);
  plVar35 = (long *)*plVar15;
  plVar29 = (long *)plVar35[0x37];
  if (plVar29 != (long *)0x0) {
    plVar28 = plVar35 + 0x37;
    plVar37 = plVar28;
    plVar27 = plVar29;
    do {
      bVar8 = (int)plVar27[4] < 0;
      if (!bVar8) {
        plVar37 = plVar27;
      }
      plVar27 = (long *)plVar27[bVar8];
    } while (plVar27 != (long *)0x0);
    if (((plVar37 != plVar28) && ((int)plVar37[4] < 1)) &&
       (plVar37 = (long *)plVar37[5], plVar37 != (long *)0x0)) {
      (**(code **)(*plVar37 + 0x1f8))(plVar37,1);
      (**(code **)(*plVar37 + 0x388))(plVar37,0,0);
      plVar35 = (long *)*plVar15;
      plVar29 = (long *)plVar35[0x37];
      plVar28 = plVar35 + 0x37;
    }
    plVar37 = plVar28;
    if (plVar29 != (long *)0x0) {
      do {
        bVar8 = (int)plVar29[4] < 0;
        if (!bVar8) {
          plVar37 = plVar29;
        }
        plVar29 = (long *)plVar29[bVar8];
      } while (plVar29 != (long *)0x0);
      if (((plVar37 != plVar28) && ((int)plVar37[4] < 1)) &&
         (plVar29 = (long *)plVar37[5], plVar29 != (long *)0x0)) {
        (**(code **)(*plVar29 + 0x208))(plVar29,1);
        (**(code **)(*plVar29 + 0x388))(plVar29,0,0);
        plVar35 = (long *)*plVar15;
      }
    }
  }
  (**(code **)(*plVar35 + 0x60))(plVar35,0);
  (**(code **)(*(long *)*plVar15 + 0x70))((long *)*plVar15,0);
  lVar34 = *(long *)(*(long *)(DAT_710532f8d0 + 8) + 0x40);
  if ((ulong)(*(long *)(*(long *)(DAT_710532f8d0 + 8) + 0x48) - lVar34 >> 3) < 4) {
    local_b0 = (long ***)0x0;
  }
  else {
    local_b0 = *(long ****)(lVar34 + 0x18);
  }
  FUN_7103772070(*plVar15,0,&local_b0,(byte ****)ppppppppplVar22,param_5,param_6,param_7,param_8);
  uVar20 = 0;
  FUN_7103771d60(&local_b0,*plVar15,(long ****)0x0,(byte ****)ppppppppplVar22,param_5,param_6,
                 param_7,param_8);
  plVar35 = local_a8;
  if (*local_a8 == 0) {
    ppppbVar19 = (byte ****)&DAT_7104867c2e;
  }
  else {
    ppppbVar19 = *(byte *****)(*local_a8 + 0x88);
  }
  FUN_7103776640(&local_450,(long)plVar2,ppppbVar19,uVar20,ppppppppplVar22,param_5,param_6,param_7,
                 param_8);
  puVar14 = local_448;
  FUN_7103778300(0x3f800000,(long)local_448,0x71042d6924);
  local_450 = &PTR_FUN_710523d988;
  local_448 = (undefined8 *)0x0;
  if (puVar14 != (undefined8 *)0x0) {
    uVar11 = *(ulong *)((long)puVar14 + 0x18);
    *(undefined ***)((long)puVar14 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)((long)puVar14 + 0x18) = 0;
    if (uVar11 != 0) {
      FUN_710392eb40(uVar11);
    }
    FUN_710392eb40((ulong)puVar14);
  }
  plVar15 = (long *)*plVar35;
  if (plVar15 != (long *)0x0) {
    (**(code **)(*plVar15 + 0x280))(plVar15,0);
  }
  local_b0 = (long ***)&PTR_FUN_710523d9c8;
  local_a8 = (long *)0x0;
  FUN_710392eb40((ulong)plVar35);
  if (alStack_350 == local_330) {
    pcVar24 = *(code **)(*local_330 + 0x20);
LAB_710192e94c:
    (*pcVar24)();
  }
  else if (local_330 != (long *)0x0) {
    pcVar24 = *(code **)(*local_330 + 0x28);
    goto LAB_710192e94c;
  }
  if (alStack_380 == local_360) {
    pcVar24 = *(code **)(*local_360 + 0x20);
LAB_710192e97c:
    (*pcVar24)();
  }
  else if (local_360 != (long *)0x0) {
    pcVar24 = *(code **)(*local_360 + 0x28);
    goto LAB_710192e97c;
  }
  if (alStack_3b0 == local_390) {
    pcVar24 = *(code **)(*local_390 + 0x20);
LAB_710192e9ac:
    (*pcVar24)();
  }
  else if (local_390 != (long *)0x0) {
    pcVar24 = *(code **)(*local_390 + 0x28);
    goto LAB_710192e9ac;
  }
  if (alStack_3e0 == local_3c0) {
    pcVar24 = *(code **)(*local_3c0 + 0x20);
LAB_710192e9dc:
    (*pcVar24)();
  }
  else if (local_3c0 != (long *)0x0) {
    pcVar24 = *(code **)(*local_3c0 + 0x28);
    goto LAB_710192e9dc;
  }
  if (alStack_410 == local_3f0) {
    pcVar24 = *(code **)(*local_3f0 + 0x20);
LAB_710192ea0c:
    (*pcVar24)();
  }
  else if (local_3f0 != (long *)0x0) {
    pcVar24 = *(code **)(*local_3f0 + 0x28);
    goto LAB_710192ea0c;
  }
  lVar34 = *(long *)(*(long *)(DAT_710532f730 + 8) + 0x168);
  uVar9 = FUN_71032632a0(lVar34,(ulong)puVar33);
  if ((uVar9 & 1) != 0) {
    puVar33 = FUN_71032631a0(lVar34,0x11b1ccb807);
  }
  local_440 = (long ********)FUN_7103238a70((ulong)puVar33,(ulong)uVar10,3);
  if (((ulong)local_440 & 0xffffffffff) != 0) {
    lVar34 = plVar13[1];
    FUN_710323c4e0(lVar34,(ulong *)&local_440,(long *********)(long)*(int *)(lVar34 + 0x70),
                   (byte ****)(ulong)*(uint *)(lVar34 + 0x68),param_5,param_6,param_7,param_8);
  }
  ppppbVar19 = (byte ****)0x3;
  pppplVar21 = (long ****)(ulong)uVar10;
  pppplVar16 = (long ****)
               FUN_710323f330(plVar13 + 1,(ulong)puVar33,(ulong)pppplVar21,3,param_5,param_6,param_7
                              ,param_8);
  local_b0 = (long ***)&PTR_FUN_710523da08;
  puVar14 = (undefined8 *)
            FUN_710392e290(0x10,0x10,pppplVar21,ppppbVar19,param_5,param_6,param_7,param_8);
  if (puVar14 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_450 = (undefined **)((ulong)local_450 & 0xffffffff00000000);
      local_440 = (long ********)&DAT_00000010;
      ppppppppplVar22 = &local_440;
      uVar11 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_450);
      if (((uVar11 & 1) != 0) &&
         (puVar14 = (undefined8 *)
                    FUN_710392e290(0x10,0x10,(long ****)ppppppppplVar22,ppppbVar19,param_5,param_6,
                                   param_7,param_8), puVar14 != (undefined8 *)0x0))
      goto LAB_710192eaf0;
    }
    puVar14 = (undefined8 *)0x0;
  }
LAB_710192eaf0:
  *puVar14 = 0;
  puVar14[1] = 0;
  local_a8 = puVar14;
  if (&local_b0 != pppplVar16) {
    pplVar25 = *pppplVar16[1];
    pplVar4 = pppplVar16[1][1];
    if (pplVar4 == (long **)0x0) {
      *puVar14 = pplVar25;
      puVar14[1] = 0;
    }
    else {
      pplVar3 = pplVar4 + 1;
      do {
        cVar5 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(pplVar3,0x10);
        if (bVar8) {
          *pplVar3 = (long *)((long)*pplVar3 + 1);
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      plVar35 = (long *)puVar14[1];
      *puVar14 = pplVar25;
      puVar14[1] = pplVar4;
      if (plVar35 != (long *)0x0) {
        plVar15 = plVar35 + 1;
        do {
          lVar34 = *plVar15;
          cVar5 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(plVar15,0x10);
          if (bVar8) {
            *plVar15 = lVar34 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (lVar34 == 0) {
          (**(code **)(*plVar35 + 0x10))(plVar35);
          std::__shared_weak_count::__release_weak();
        }
      }
    }
  }
  lVar34 = *(long *)(DAT_710532f730 + 8);
  uVar10 = FUN_7103280ec0(*(long *)(lVar34 + 0x2a8),(ulong)puVar33,(ulong)uVar10,ppppbVar19,param_5,
                          param_6,param_7,param_8);
  uVar11 = 0;
  lVar34 = *(long *)(*(long *)(lVar34 + 0x2a8) + 8);
  auVar39 = FUN_710326ad60(ZEXT816(0),lVar34,uVar10,0x12ebc22197);
  auVar41._8_8_ = 0;
  auVar41._0_8_ = uVar11;
  auVar41 = FUN_710326ad60(auVar41 << 0x40,lVar34,uVar10,0x129cc51101);
  ppppppppplVar22 = (long *********)0xfd887dbf5;
  auVar40 = FUN_710326ad60(ZEXT816(0x3f800000),lVar34,uVar10,0xfd887dbf5);
  FUN_7103776910(&local_450,(long)plVar2,(long ****)"set_rep_fighter",ppppppppplVar22,ppppbVar19,
                 param_5,param_6,param_7,param_8);
  puVar14 = local_448;
  FUN_7103778b80((long)local_448,(long)&local_b0,ppppppppplVar22,ppppbVar19,param_5,param_6,param_7,
                 param_8);
  puVar17 = (undefined8 *)
            FUN_710392e290(0x10,0x20,(long ****)ppppppppplVar22,ppppbVar19,param_5,param_6,param_7,
                           param_8);
  if (puVar17 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_460 = (undefined **)((ulong)local_460 & 0xffffffff00000000);
      local_440 = (long ********)&SUB_00000020;
      ppppppppplVar22 = &local_440;
      uVar11 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_460);
      if (((uVar11 & 1) != 0) &&
         (puVar17 = (undefined8 *)
                    FUN_710392e290(0x10,0x20,(long ****)ppppppppplVar22,ppppbVar19,param_5,param_6,
                                   param_7,param_8), puVar17 != (undefined8 *)0x0))
      goto LAB_710192ec74;
    }
    puVar17 = (undefined8 *)0x0;
  }
LAB_710192ec74:
  puVar17[2] = 0;
  puVar17[3] = 0;
  *puVar17 = 0;
  puVar17[1] = 0;
  local_480 = auVar39._0_4_;
  *puVar17 = *puVar14;
  puVar17[1] = puVar14[1];
  local_4a0 = auVar41._0_4_;
  puVar17[2] = local_448[2];
  puVar17[3] = local_448[3];
  uStack_438 = 0;
  local_440 = (long ********)CONCAT44(local_4a0,local_480);
  FUN_7103779770(auVar40._0_4_,(long)puVar17,&local_440);
  if (puVar17 != (undefined8 *)0x0) {
    FUN_710392eb40((ulong)puVar17);
  }
  FUN_7103776910(&local_460,(long)plVar2,(long ****)"set_rep_fighter_sdw",ppppppppplVar22,ppppbVar19
                 ,param_5,param_6,param_7,param_8);
  puVar14 = local_458;
  FUN_7103778b80((long)local_458,(long)&local_b0,ppppppppplVar22,ppppbVar19,param_5,param_6,param_7,
                 param_8);
  puVar17 = (undefined8 *)
            FUN_710392e290(0x10,0x20,(long ****)ppppppppplVar22,ppppbVar19,param_5,param_6,param_7,
                           param_8);
  if (puVar17 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_64 = 0;
      local_440 = (long ********)&SUB_00000020;
      ppppppppplVar22 = &local_440;
      uVar11 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_64);
      if (((uVar11 & 1) != 0) &&
         (puVar17 = (undefined8 *)
                    FUN_710392e290(0x10,0x20,(long ****)ppppppppplVar22,ppppbVar19,param_5,param_6,
                                   param_7,param_8), puVar17 != (undefined8 *)0x0))
      goto LAB_710192ed5c;
    }
    puVar17 = (undefined8 *)0x0;
  }
LAB_710192ed5c:
  puVar7 = local_458;
  puVar17[2] = 0;
  puVar17[3] = 0;
  *puVar17 = 0;
  puVar17[1] = 0;
  *puVar17 = *puVar14;
  puVar17[1] = puVar14[1];
  puVar17[2] = local_458[2];
  puVar17[3] = local_458[3];
  uStack_438 = 0;
  local_440 = (long ********)CONCAT44(local_4a0,local_480);
  FUN_7103779770(auVar40._0_4_,(long)puVar17,&local_440);
  if (puVar17 != (undefined8 *)0x0) {
    FUN_710392eb40((ulong)puVar17);
  }
  FUN_7103776640(&local_440,(long)plVar2,(byte ****)"set_parts_border",ppppppppplVar22,ppppbVar19,
                 param_5,param_6,param_7,param_8);
  uVar11 = uStack_438;
  FUN_7103778300(0x3f800000,uStack_438,0x71043f0fa9);
  local_440 = (long ********)&PTR_FUN_710523d988;
  uStack_438 = 0;
  if (uVar11 != 0) {
    uVar18 = *(ulong *)(uVar11 + 0x18);
    *(undefined ***)(uVar11 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar11 + 0x18) = 0;
    if (uVar18 != 0) {
      FUN_710392eb40(uVar18);
    }
    FUN_710392eb40(uVar11);
  }
  FUN_7103776640(&local_440,(long)plVar2,(byte ****)"set_parts_border2",ppppppppplVar22,ppppbVar19,
                 param_5,param_6,param_7,param_8);
  uVar11 = uStack_438;
  FUN_7103778300(0x3f800000,uStack_438,0x71043f0fa9);
  local_440 = (long ********)&PTR_FUN_710523d988;
  uStack_438 = 0;
  uVar20 = extraout_x1_03;
  if (uVar11 != 0) {
    uVar18 = *(ulong *)(uVar11 + 0x18);
    *(undefined ***)(uVar11 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar11 + 0x18) = 0;
    if (uVar18 != 0) {
      FUN_710392eb40(uVar18);
    }
    FUN_710392eb40(uVar11);
    uVar20 = extraout_x1_04;
  }
  local_460 = &PTR_FUN_710523d9a8;
  local_458 = (undefined8 *)0x0;
  if (puVar7 != (undefined8 *)0x0) {
    FUN_710392eb40((ulong)puVar7);
    uVar20 = extraout_x1_05;
  }
  puVar14 = local_448;
  local_450 = &PTR_FUN_710523d9a8;
  local_448 = (undefined8 *)0x0;
  if (puVar14 != (undefined8 *)0x0) {
    FUN_710392eb40((ulong)puVar14);
    uVar20 = extraout_x1_06;
  }
  plVar2 = local_a8;
  local_b0 = (long ***)&PTR_FUN_710523da08;
  local_a8 = (long *)0x0;
  if (plVar2 != (undefined8 *)0x0) {
    plVar35 = (long *)plVar2[1];
    *plVar2 = 0;
    plVar2[1] = 0;
    if (plVar35 != (long *)0x0) {
      plVar15 = plVar35 + 1;
      do {
        lVar34 = *plVar15;
        cVar5 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(plVar15,0x10);
        if (bVar8) {
          *plVar15 = lVar34 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (lVar34 == 0) {
        (**(code **)(*plVar35 + 0x10))(plVar35);
        std::__shared_weak_count::__release_weak();
      }
      plVar35 = (long *)plVar2[1];
      if (plVar35 != (long *)0x0) {
        plVar15 = plVar35 + 1;
        do {
          lVar34 = *plVar15;
          cVar5 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(plVar15,0x10);
          if (bVar8) {
            *plVar15 = lVar34 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (lVar34 == 0) {
          (**(code **)(*plVar35 + 0x10))(plVar35);
          std::__shared_weak_count::__release_weak();
        }
      }
    }
    FUN_710392eb40((ulong)plVar2);
    uVar20 = extraout_x1_07;
  }
  if (alStack_220 == local_200) {
    (**(code **)(*local_200 + 0x20))();
    uVar20 = extraout_x1_09;
  }
  else if (local_200 != (long *)0x0) {
    (**(code **)(*local_200 + 0x28))();
    uVar20 = extraout_x1_08;
  }
  if (alStack_250 == local_230) {
    pcVar24 = *(code **)(*local_230 + 0x20);
LAB_710192ef6c:
    (*pcVar24)();
    uVar20 = extraout_x1_10;
  }
  else if (local_230 != (long *)0x0) {
    pcVar24 = *(code **)(*local_230 + 0x28);
    goto LAB_710192ef6c;
  }
  if (alStack_280 == local_260) {
    pcVar24 = *(code **)(*local_260 + 0x20);
LAB_710192ef9c:
    (*pcVar24)();
    uVar20 = extraout_x1_11;
  }
  else if (local_260 != (long *)0x0) {
    pcVar24 = *(code **)(*local_260 + 0x28);
    goto LAB_710192ef9c;
  }
  if (alStack_2b0 == local_290) {
    pcVar24 = *(code **)(*local_290 + 0x20);
LAB_710192efcc:
    (*pcVar24)();
    uVar20 = extraout_x1_12;
  }
  else if (local_290 != (long *)0x0) {
    pcVar24 = *(code **)(*local_290 + 0x28);
    goto LAB_710192efcc;
  }
  if (alStack_2e0 == local_2c0) {
    pcVar24 = *(code **)(*local_2c0 + 0x20);
LAB_710192effc:
    (*pcVar24)();
    uVar20 = extraout_x1_13;
  }
  else if (local_2c0 != (long *)0x0) {
    pcVar24 = *(code **)(*local_2c0 + 0x28);
    goto LAB_710192effc;
  }
  if (alStack_f0 == local_d0) {
    pcVar24 = *(code **)(*local_d0 + 0x20);
LAB_710192f02c:
    (*pcVar24)();
    uVar20 = extraout_x1_14;
  }
  else if (local_d0 != (long *)0x0) {
    pcVar24 = *(code **)(*local_d0 + 0x28);
    goto LAB_710192f02c;
  }
  if (alStack_120 == local_100) {
    pcVar24 = *(code **)(*local_100 + 0x20);
LAB_710192f05c:
    (*pcVar24)();
    uVar20 = extraout_x1_15;
  }
  else if (local_100 != (long *)0x0) {
    pcVar24 = *(code **)(*local_100 + 0x28);
    goto LAB_710192f05c;
  }
  if (alStack_150 == local_130) {
    pcVar24 = *(code **)(*local_130 + 0x20);
LAB_710192f08c:
    (*pcVar24)();
    uVar20 = extraout_x1_16;
  }
  else if (local_130 != (long *)0x0) {
    pcVar24 = *(code **)(*local_130 + 0x28);
    goto LAB_710192f08c;
  }
  if (alStack_180 == local_160) {
    pcVar24 = *(code **)(*local_160 + 0x20);
LAB_710192f0bc:
    (*pcVar24)();
    uVar20 = extraout_x1_17;
  }
  else if (local_160 != (long *)0x0) {
    pcVar24 = *(code **)(*local_160 + 0x28);
    goto LAB_710192f0bc;
  }
  if (alStack_1b0 == local_190) {
    pcVar24 = *(code **)(*local_190 + 0x20);
  }
  else {
    if (local_190 == (long *)0x0) goto LAB_710192f0f0;
    pcVar24 = *(code **)(*local_190 + 0x28);
  }
  (*pcVar24)();
  uVar20 = extraout_x1_18;
LAB_710192f0f0:
  puVar12[0x10] = plVar13;
  puVar12[2] = &DAT_7105333600;
  uVar6 = DAT_7105333664;
  *(undefined4 *)(puVar12 + 0xd) = DAT_7105333660;
  *(undefined4 *)((long)puVar12 + 0x6c) = uVar6;
  do {
    uVar10 = DAT_7105333650;
    cVar5 = '\x01';
    bVar8 = (bool)ExclusiveMonitorPass(0x7105333650,0x10);
    if (bVar8) {
      DAT_7105333650 = 1;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0' || (uVar10 & 1) != 0);
  puVar12[9] = DAT_7105333648;
  DAT_7105333650 = 0;
  DAT_7105333648 = puVar12;
  FUN_71032caea0((long)puVar12,uVar20,(long ****)ppppppppplVar22,ppppbVar19,param_5,param_6,param_7,
                 param_8);
  lVar34 = *(long *)(param_1 + 0x1f0);
  *(undefined8 **)(param_1 + 0x1f0) = puVar12;
  if (lVar34 != 0) {
    FUN_71032cad20(lVar34);
  }
  FUN_710323eba0((undefined8 *)(*plVar1 + 8),(ulong *)&DAT_7104545a58,ppppppppplVar22,ppppbVar19,
                 param_5,param_6,param_7,param_8);
  return;
}

