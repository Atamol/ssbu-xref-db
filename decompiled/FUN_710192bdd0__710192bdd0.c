// addr:      710192bdd0
// offset:    0x192bdd0
// name:      FUN_710192bdd0
// mangled:   
// signature: undefined __cdecl FUN_710192bdd0(long param_1, undefined8 param_2, long * * * * * * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_710192bdd0(long param_1,undefined8 param_2,long *********param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long *plVar1;
  char cVar2;
  uint uVar3;
  bool bVar4;
  ulong uVar5;
  undefined8 *puVar6;
  long *plVar7;
  undefined8 *puVar8;
  long *plVar9;
  ulong uVar10;
  long *plVar11;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 extraout_x1_02;
  byte ****ppppbVar12;
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
  long ****pppplVar14;
  long *********ppppppppplVar15;
  byte ****ppppbVar16;
  byte **ppbVar17;
  long **pplVar18;
  code *pcVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  long *plVar23;
  long lVar24;
  long *plVar25;
  long *plVar26;
  long *plVar27;
  long *plVar28;
  undefined1 auVar29 [16];
  undefined **local_440;
  ulong local_438;
  byte ***local_430;
  undefined1 local_425;
  byte ****local_410;
  long alStack_400 [4];
  long *local_3e0;
  long alStack_3d0 [4];
  long *local_3b0;
  long alStack_3a0 [4];
  long *local_380;
  long alStack_370 [4];
  long *local_350;
  long alStack_340 [4];
  long *local_320;
  byte ***local_300 [6];
  long alStack_2d0 [4];
  long *local_2b0;
  long alStack_2a0 [4];
  long *local_280;
  long alStack_270 [4];
  long *local_250;
  long alStack_240 [4];
  long *local_220;
  long alStack_210 [4];
  long *local_1f0;
  long ********local_1d0;
  undefined2 local_1c8;
  undefined4 local_1c6;
  undefined2 local_1c2;
  undefined4 local_1c0;
  undefined2 local_1bc;
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
  long ***local_a0;
  long *local_98;
  long ****local_80;
  
  if (*(long *)(param_1 + 0x1f8) != 0) {
    return;
  }
  lVar24 = *(long *)(param_1 + 0x1d0);
  plVar1 = (long *)(param_1 + 0x1d0);
  uVar5 = FUN_710323cb80(lVar24,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  while ((uVar5 & 1) == 0) {
    nn::os::SleepThread(1000000);
    uVar5 = FUN_710323cb80(lVar24,extraout_x1,param_3,param_4,param_5,param_6,param_7,param_8);
  }
  puVar6 = (undefined8 *)
           FUN_710392e290(0x10,0x88,(long ****)param_3,param_4,param_5,param_6,param_7,param_8);
  if (puVar6 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_300[0]._0_4_ = 0;
      local_1d0 = (long ********)&DAT_00000088;
      param_3 = &local_1d0;
      uVar5 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,local_300);
      if (((uVar5 & 1) != 0) &&
         (puVar6 = (undefined8 *)
                   FUN_710392e290(0x10,0x88,(long ****)param_3,param_4,param_5,param_6,param_7,
                                  param_8), puVar6 != (undefined8 *)0x0)) goto LAB_710192be8c;
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_710192be8c:
  *puVar6 = &PTR_FUN_71050b1cf8;
  puVar6[1] = 0;
  puVar6[0xc] = 0;
  puVar6[0xd] = 0x1ffffffff;
  puVar6[2] = 0;
  puVar6[3] = 0;
  *(undefined1 *)(puVar6 + 0xb) = 0;
  puVar6[0xf] = plVar1;
  *(undefined1 *)(puVar6 + 0xe) = 1;
  puVar6[9] = 0;
  puVar6[10] = 0;
  plVar7 = (long *)FUN_710392e290(0x10,0x1a0,(long ****)param_3,param_4,param_5,param_6,param_7,
                                  param_8);
  if (plVar7 == (long *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_300[0]._0_4_ = 0;
      local_1d0 = (long ********)&DAT_000001a0;
      param_3 = &local_1d0;
      uVar5 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,local_300);
      if (((uVar5 & 1) != 0) &&
         (plVar7 = (long *)FUN_710392e290(0x10,0x1a0,(long ****)param_3,param_4,param_5,param_6,
                                          param_7,param_8), plVar7 != (long *)0x0))
      goto LAB_710192bf14;
    }
    plVar7 = (long *)0x0;
  }
LAB_710192bf14:
  *plVar7 = (long)plVar1;
  puVar8 = (undefined8 *)
           FUN_710392e290(0x10,8,(long ****)param_3,param_4,param_5,param_6,param_7,param_8);
  uVar13 = extraout_x1_00;
  if (puVar8 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_300[0]._0_4_ = 0;
      local_1d0 = (long ********)&DAT_00000008;
      param_3 = &local_1d0;
      auVar29 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,local_300);
      uVar13 = auVar29._8_8_;
      if (((auVar29._0_8_ & 1) != 0) &&
         (puVar8 = (undefined8 *)
                   FUN_710392e290(0x10,8,(long ****)param_3,param_4,param_5,param_6,param_7,param_8)
         , uVar13 = extraout_x1_01, puVar8 != (undefined8 *)0x0)) goto LAB_710192bf78;
    }
    puVar8 = (undefined8 *)0x0;
  }
LAB_710192bf78:
  FUN_7103773200(puVar8,uVar13,(long ****)param_3,param_4,param_5,param_6,param_7,param_8);
  plVar7[1] = (long)puVar8;
  plVar11 = plVar7 + 2;
  FUN_7103776290(plVar11,extraout_x1_02,(long ****)param_3,param_4,param_5,param_6,param_7,param_8);
  plVar27 = plVar7 + 4;
  *plVar27 = 0;
  plVar9 = plVar7 + 5;
  *plVar9 = 0;
  plVar25 = plVar7 + 6;
  *plVar25 = 0;
  *(undefined4 *)((long)plVar7 + 0x16c) = 0;
  plVar7[10] = 0;
  plVar7[0xb] = 0;
  plVar7[8] = 0;
  plVar7[9] = 0;
  plVar7[7] = (long)plVar7;
  plVar7[0x2e] = 0xffffffff;
  *(undefined4 *)(plVar7 + 0x2f) = 0xffffffff;
  *(undefined1 *)((long)plVar7 + 0x17c) = 0;
  memset(plVar7 + 0xc,0,0x10c);
  plVar7[0x32] = 0x3ffffffff;
  plVar7[0xc] = (long)FUN_7101e567d0;
  plVar7[0xd] = 0;
  plVar7[0xe] = (long)FUN_7101e567e0;
  plVar7[0xf] = 0;
  plVar7[0x30] = 0;
  plVar7[0x14] = (long)FUN_7101e56c30;
  plVar7[0x15] = 0;
  plVar7[0x12] = (long)FUN_7101e56e30;
  plVar7[0x13] = 0;
  plVar7[0x1a] = (long)FUN_7101e56f80;
  plVar7[0x1b] = 0;
  *(undefined1 *)(plVar7 + 0x31) = 0;
  *(undefined4 *)(plVar7 + 0x33) = 0;
  *(undefined1 *)((long)plVar7 + 0x19c) = 0;
  *(undefined4 *)(plVar7 + 0x24) = 0;
  plVar7[0x1c] = (long)FUN_7101e56fd0;
  plVar7[0x1d] = 0;
  plVar7[0x1e] = (long)FUN_7101e57500;
  plVar7[0x1f] = 0;
  plVar7[0x10] = (long)FUN_7101e56850;
  plVar7[0x11] = 0;
  plVar7[0x20] = (long)FUN_7101e57680;
  plVar7[0x21] = 0;
  plVar7[0x18] = (long)FUN_7101e56f30;
  plVar7[0x19] = 0;
  plVar7[0x16] = (long)FUN_7101e57070;
  plVar7[0x17] = 0;
  plVar7[0x22] = (long)FUN_7101e576d0;
  plVar7[0x23] = 0;
  FUN_71032cbf30(plVar7 + 1,*(long *)*plVar7,(ulong *)&DAT_7104545b60,(byte ****)0x1,param_5,param_6
                 ,param_7,param_8);
  lVar24 = **(long **)plVar7[1];
  *(undefined4 *)(*(long *)(lVar24 + 0x600) + 0x10) = 0x20;
  *(undefined4 *)(*(long *)(lVar24 + 0x600) + 0x14) = 0x40;
  *(undefined1 *)(*(long *)(lVar24 + 0x600) + 0x4aa) = 0;
  lVar24 = *(long *)plVar7[1];
  if ((long *)(lVar24 + 8) != plVar11) {
    *(undefined8 *)plVar7[3] = **(undefined8 **)(lVar24 + 0x10);
    *(undefined8 *)(plVar7[3] + 8) = *(undefined8 *)(*(long *)(lVar24 + 0x10) + 8);
    lVar20 = *(long *)(lVar24 + 0x10);
    lVar24 = plVar7[3];
    if (lVar24 != lVar20) {
      **(undefined8 **)(lVar24 + 0x18) = **(undefined8 **)(lVar20 + 0x18);
      *(undefined8 *)(*(long *)(lVar24 + 0x18) + 8) = *(undefined8 *)(*(long *)(lVar20 + 0x18) + 8);
      *(undefined8 *)(*(long *)(lVar24 + 0x18) + 0x10) =
           *(undefined8 *)(*(long *)(lVar20 + 0x18) + 0x10);
      *(undefined8 *)(*(long *)(lVar24 + 0x18) + 0x18) =
           *(undefined8 *)(*(long *)(lVar20 + 0x18) + 0x18);
    }
  }
  local_1c6 = 0;
  local_1b8 = &DAT_41f0000000000000;
  local_1c2 = 0;
  local_1c0 = 1;
  local_1bc = 1;
  local_1ba = 1;
  local_1b0 = 0;
  local_180 = (long *)0x0;
  local_150 = (long *)0x0;
  local_120 = (long *)0x0;
  local_f0 = (long *)0x0;
  local_c0 = (long *)0x0;
  local_b0 = 0;
  local_1d0 = (long ********)0x0;
  local_1c8 = 0x101;
  FUN_7101989b70(local_300,&local_1d0);
  FUN_710337df20((long)local_300);
  local_430 = (byte ***)&PTR_FUN_71050b1c68;
  local_410 = &local_430;
  FUN_7101989a30((long *)&local_430,alStack_270);
  if (&local_430 == local_410) {
    ppbVar17 = (*local_410)[4];
LAB_710192c1f8:
    (*(code *)ppbVar17)();
  }
  else if (local_410 != (byte ****)0x0) {
    ppbVar17 = (*local_410)[5];
    goto LAB_710192c1f8;
  }
  FUN_7101989b70(&local_430,local_300);
  local_a0 = (long ***)&PTR_FUN_71050b1cb0;
  local_98 = plVar7;
  local_80 = &local_a0;
  FUN_7101a7ed70((long *)&local_a0,alStack_400);
  if (&local_a0 == local_80) {
    pplVar18 = (*local_80)[4];
LAB_710192c250:
    (*(code *)pplVar18)();
  }
  else if (local_80 != (long ****)0x0) {
    pplVar18 = (*local_80)[5];
    goto LAB_710192c250;
  }
  ppppbVar16 = &local_430;
  FUN_7103770b30(plVar27,plVar11,(long ****)"selector_00",ppppbVar16,param_5,param_6,param_7,param_8
                );
  FUN_71037717d0(plVar27,0,"set_part_00",ppppbVar16,param_5,param_6,param_7,param_8);
  lVar24 = *(long *)(*plVar27 + 0x1b8);
  if (lVar24 != 0) {
    lVar20 = *plVar27 + 0x1b8;
    lVar21 = lVar20;
    lVar22 = lVar24;
    do {
      bVar4 = *(int *)(lVar22 + 0x20) < 0;
      if (!bVar4) {
        lVar21 = lVar22;
      }
      lVar22 = *(long *)(lVar22 + (ulong)bVar4 * 8);
    } while (lVar22 != 0);
    if (((lVar21 != lVar20) && (*(int *)(lVar21 + 0x20) < 1)) &&
       (plVar28 = *(long **)(lVar21 + 0x28), plVar28 != (long *)0x0)) {
      (**(code **)(*plVar28 + 0x1f8))(plVar28,1);
      (**(code **)(*plVar28 + 0x388))(plVar28,0,0);
      lVar20 = *plVar27 + 0x1b8;
      lVar24 = *(long *)(*plVar27 + 0x1b8);
    }
    lVar21 = lVar20;
    if (lVar24 != 0) {
      do {
        bVar4 = *(int *)(lVar24 + 0x20) < 0;
        if (!bVar4) {
          lVar21 = lVar24;
        }
        lVar24 = *(long *)(lVar24 + (ulong)bVar4 * 8);
      } while (lVar24 != 0);
      if (((lVar21 != lVar20) && (*(int *)(lVar21 + 0x20) < 1)) &&
         (plVar28 = *(long **)(lVar21 + 0x28), plVar28 != (long *)0x0)) {
        (**(code **)(*plVar28 + 0x208))(plVar28,1);
        (**(code **)(*plVar28 + 0x388))(plVar28,0,0);
      }
    }
  }
  FUN_71037717d0(plVar27,1,"set_part_01",ppppbVar16,param_5,param_6,param_7,param_8);
  lVar24 = *(long *)(*plVar27 + 0x1b8);
  if (lVar24 != 0) {
    lVar20 = *plVar27 + 0x1b8;
    lVar21 = lVar20;
    lVar22 = lVar24;
    do {
      if (0 < *(int *)(lVar22 + 0x20)) {
        lVar21 = lVar22;
      }
      lVar22 = *(long *)(lVar22 + (ulong)(*(int *)(lVar22 + 0x20) < 1) * 8);
    } while (lVar22 != 0);
    if (((lVar21 != lVar20) && (*(int *)(lVar21 + 0x20) < 2)) &&
       (plVar28 = *(long **)(lVar21 + 0x28), plVar28 != (long *)0x0)) {
      (**(code **)(*plVar28 + 0x1f8))(plVar28,1);
      (**(code **)(*plVar28 + 0x388))(plVar28,0,0);
      lVar20 = *plVar27 + 0x1b8;
      lVar24 = *(long *)(*plVar27 + 0x1b8);
    }
    lVar21 = lVar20;
    if (lVar24 != 0) {
      do {
        if (0 < *(int *)(lVar24 + 0x20)) {
          lVar21 = lVar24;
        }
        lVar24 = *(long *)(lVar24 + (ulong)(*(int *)(lVar24 + 0x20) < 1) * 8);
      } while (lVar24 != 0);
      if (((lVar21 != lVar20) && (*(int *)(lVar21 + 0x20) < 2)) &&
         (plVar28 = *(long **)(lVar21 + 0x28), plVar28 != (long *)0x0)) {
        (**(code **)(*plVar28 + 0x208))(plVar28,1);
        (**(code **)(*plVar28 + 0x388))(plVar28,0,0);
      }
    }
  }
  FUN_71037717d0(plVar27,2,"set_part_02",ppppbVar16,param_5,param_6,param_7,param_8);
  lVar24 = *(long *)(*plVar27 + 0x1b8);
  if (lVar24 != 0) {
    lVar20 = *plVar27 + 0x1b8;
    lVar21 = lVar20;
    lVar22 = lVar24;
    do {
      if (1 < *(int *)(lVar22 + 0x20)) {
        lVar21 = lVar22;
      }
      lVar22 = *(long *)(lVar22 + (ulong)(*(int *)(lVar22 + 0x20) < 2) * 8);
    } while (lVar22 != 0);
    if (((lVar21 != lVar20) && (*(int *)(lVar21 + 0x20) < 3)) &&
       (plVar28 = *(long **)(lVar21 + 0x28), plVar28 != (long *)0x0)) {
      (**(code **)(*plVar28 + 0x1f8))(plVar28,1);
      (**(code **)(*plVar28 + 0x388))(plVar28,0,0);
      lVar20 = *plVar27 + 0x1b8;
      lVar24 = *(long *)(*plVar27 + 0x1b8);
    }
    lVar21 = lVar20;
    if (lVar24 != 0) {
      do {
        if (1 < *(int *)(lVar24 + 0x20)) {
          lVar21 = lVar24;
        }
        lVar24 = *(long *)(lVar24 + (ulong)(*(int *)(lVar24 + 0x20) < 2) * 8);
      } while (lVar24 != 0);
      if (((lVar21 != lVar20) && (*(int *)(lVar21 + 0x20) < 3)) &&
         (plVar28 = *(long **)(lVar21 + 0x28), plVar28 != (long *)0x0)) {
        (**(code **)(*plVar28 + 0x208))(plVar28,1);
        (**(code **)(*plVar28 + 0x388))(plVar28,0,0);
      }
    }
  }
  FUN_71037717d0(plVar27,3,"set_part_03",ppppbVar16,param_5,param_6,param_7,param_8);
  lVar24 = *(long *)(*plVar27 + 0x1b8);
  if (lVar24 != 0) {
    lVar20 = *plVar27 + 0x1b8;
    lVar21 = lVar20;
    lVar22 = lVar24;
    do {
      if (2 < *(int *)(lVar22 + 0x20)) {
        lVar21 = lVar22;
      }
      lVar22 = *(long *)(lVar22 + (ulong)(*(int *)(lVar22 + 0x20) < 3) * 8);
    } while (lVar22 != 0);
    if (((lVar21 != lVar20) && (*(int *)(lVar21 + 0x20) < 4)) &&
       (plVar28 = *(long **)(lVar21 + 0x28), plVar28 != (long *)0x0)) {
      (**(code **)(*plVar28 + 0x1f8))(plVar28,1);
      (**(code **)(*plVar28 + 0x388))(plVar28,0,0);
      lVar20 = *plVar27 + 0x1b8;
      lVar24 = *(long *)(*plVar27 + 0x1b8);
    }
    lVar21 = lVar20;
    if (lVar24 != 0) {
      do {
        if (2 < *(int *)(lVar24 + 0x20)) {
          lVar21 = lVar24;
        }
        lVar24 = *(long *)(lVar24 + (ulong)(*(int *)(lVar24 + 0x20) < 3) * 8);
      } while (lVar24 != 0);
      if (((lVar21 != lVar20) && (*(int *)(lVar21 + 0x20) < 4)) &&
         (plVar28 = *(long **)(lVar21 + 0x28), plVar28 != (long *)0x0)) {
        (**(code **)(*plVar28 + 0x208))(plVar28,1);
        (**(code **)(*plVar28 + 0x388))(plVar28,0,0);
      }
    }
  }
  FUN_71037717d0(plVar27,4,"set_part_04",ppppbVar16,param_5,param_6,param_7,param_8);
  lVar24 = *(long *)(*plVar27 + 0x1b8);
  if (lVar24 != 0) {
    lVar20 = *plVar27 + 0x1b8;
    lVar21 = lVar20;
    lVar22 = lVar24;
    do {
      if (3 < *(int *)(lVar22 + 0x20)) {
        lVar21 = lVar22;
      }
      lVar22 = *(long *)(lVar22 + (ulong)(*(int *)(lVar22 + 0x20) < 4) * 8);
    } while (lVar22 != 0);
    if (((lVar21 != lVar20) && (*(int *)(lVar21 + 0x20) < 5)) &&
       (plVar28 = *(long **)(lVar21 + 0x28), plVar28 != (long *)0x0)) {
      (**(code **)(*plVar28 + 0x1f8))(plVar28,1);
      (**(code **)(*plVar28 + 0x388))(plVar28,0,0);
      lVar20 = *plVar27 + 0x1b8;
      lVar24 = *(long *)(*plVar27 + 0x1b8);
    }
    lVar21 = lVar20;
    if (lVar24 != 0) {
      do {
        if (3 < *(int *)(lVar24 + 0x20)) {
          lVar21 = lVar24;
        }
        lVar24 = *(long *)(lVar24 + (ulong)(*(int *)(lVar24 + 0x20) < 4) * 8);
      } while (lVar24 != 0);
      if (((lVar21 != lVar20) && (*(int *)(lVar21 + 0x20) < 5)) &&
         (plVar28 = *(long **)(lVar21 + 0x28), plVar28 != (long *)0x0)) {
        (**(code **)(*plVar28 + 0x208))(plVar28,1);
        (**(code **)(*plVar28 + 0x388))(plVar28,0,0);
      }
    }
  }
  FUN_7103771a80(plVar27,0,0);
  (**(code **)(*(long *)*plVar27 + 0x60))((long *)*plVar27,0);
  (**(code **)(*(long *)*plVar27 + 0x70))((long *)*plVar27,0);
  puVar8 = *(undefined8 **)(*(long *)(DAT_710532f8d0 + 8) + 0x40);
  if (*(undefined8 **)(*(long *)(DAT_710532f8d0 + 8) + 0x48) == puVar8) {
    local_a0 = (long ***)0x0;
  }
  else {
    local_a0 = (long ***)*puVar8;
  }
  FUN_7103772070(*plVar27,0,&local_a0,ppppbVar16,param_5,param_6,param_7,param_8);
  puVar8 = *(undefined8 **)(*(long *)(DAT_710532f8d0 + 8) + 0x40);
  if (*(undefined8 **)(*(long *)(DAT_710532f8d0 + 8) + 0x48) == puVar8) {
    local_a0 = (long ***)0x0;
  }
  else {
    local_a0 = (long ***)*puVar8;
  }
  FUN_7103772070(*plVar27,4,&local_a0,ppppbVar16,param_5,param_6,param_7,param_8);
  if (alStack_340 == local_320) {
    pcVar19 = *(code **)(*local_320 + 0x20);
LAB_710192c83c:
    (*pcVar19)();
  }
  else if (local_320 != (long *)0x0) {
    pcVar19 = *(code **)(*local_320 + 0x28);
    goto LAB_710192c83c;
  }
  if (alStack_370 == local_350) {
    pcVar19 = *(code **)(*local_350 + 0x20);
LAB_710192c86c:
    (*pcVar19)();
  }
  else if (local_350 != (long *)0x0) {
    pcVar19 = *(code **)(*local_350 + 0x28);
    goto LAB_710192c86c;
  }
  if (alStack_3a0 == local_380) {
    pcVar19 = *(code **)(*local_380 + 0x20);
LAB_710192c89c:
    (*pcVar19)();
  }
  else if (local_380 != (long *)0x0) {
    pcVar19 = *(code **)(*local_380 + 0x28);
    goto LAB_710192c89c;
  }
  if (alStack_3d0 == local_3b0) {
    pcVar19 = *(code **)(*local_3b0 + 0x20);
LAB_710192c8cc:
    (*pcVar19)();
  }
  else if (local_3b0 != (long *)0x0) {
    pcVar19 = *(code **)(*local_3b0 + 0x28);
    goto LAB_710192c8cc;
  }
  if (alStack_400 == local_3e0) {
    pcVar19 = *(code **)(*local_3e0 + 0x20);
LAB_710192c8fc:
    (*pcVar19)();
  }
  else if (local_3e0 != (long *)0x0) {
    pcVar19 = *(code **)(*local_3e0 + 0x28);
    goto LAB_710192c8fc;
  }
  ppppbVar16 = local_300;
  FUN_7103770b30(plVar9,plVar11,(long ****)"selector_02",ppppbVar16,param_5,param_6,param_7,param_8)
  ;
  FUN_71037717d0(plVar9,5,"set_part_05",ppppbVar16,param_5,param_6,param_7,param_8);
  lVar24 = *(long *)(*plVar9 + 0x1b8);
  if (lVar24 != 0) {
    lVar20 = *plVar9 + 0x1b8;
    lVar21 = lVar20;
    lVar22 = lVar24;
    do {
      if (4 < *(int *)(lVar22 + 0x20)) {
        lVar21 = lVar22;
      }
      lVar22 = *(long *)(lVar22 + (ulong)(*(int *)(lVar22 + 0x20) < 5) * 8);
    } while (lVar22 != 0);
    if (((lVar21 != lVar20) && (*(int *)(lVar21 + 0x20) < 6)) &&
       (plVar27 = *(long **)(lVar21 + 0x28), plVar27 != (long *)0x0)) {
      (**(code **)(*plVar27 + 0x1f8))(plVar27,1);
      (**(code **)(*plVar27 + 0x388))(plVar27,0,0);
      lVar20 = *plVar9 + 0x1b8;
      lVar24 = *(long *)(*plVar9 + 0x1b8);
    }
    lVar21 = lVar20;
    if (lVar24 != 0) {
      do {
        if (4 < *(int *)(lVar24 + 0x20)) {
          lVar21 = lVar24;
        }
        lVar24 = *(long *)(lVar24 + (ulong)(*(int *)(lVar24 + 0x20) < 5) * 8);
      } while (lVar24 != 0);
      if (((lVar21 != lVar20) && (*(int *)(lVar21 + 0x20) < 6)) &&
         (plVar27 = *(long **)(lVar21 + 0x28), plVar27 != (long *)0x0)) {
        (**(code **)(*plVar27 + 0x208))(plVar27,1);
        (**(code **)(*plVar27 + 0x388))(plVar27,0,0);
      }
    }
  }
  FUN_71037717d0(plVar9,6,"set_part_06",ppppbVar16,param_5,param_6,param_7,param_8);
  lVar24 = *(long *)(*plVar9 + 0x1b8);
  if (lVar24 != 0) {
    lVar20 = *plVar9 + 0x1b8;
    lVar21 = lVar20;
    lVar22 = lVar24;
    do {
      if (5 < *(int *)(lVar22 + 0x20)) {
        lVar21 = lVar22;
      }
      lVar22 = *(long *)(lVar22 + (ulong)(*(int *)(lVar22 + 0x20) < 6) * 8);
    } while (lVar22 != 0);
    if (((lVar21 != lVar20) && (*(int *)(lVar21 + 0x20) < 7)) &&
       (plVar27 = *(long **)(lVar21 + 0x28), plVar27 != (long *)0x0)) {
      (**(code **)(*plVar27 + 0x1f8))(plVar27,1);
      (**(code **)(*plVar27 + 0x388))(plVar27,0,0);
      lVar20 = *plVar9 + 0x1b8;
      lVar24 = *(long *)(*plVar9 + 0x1b8);
    }
    lVar21 = lVar20;
    if (lVar24 != 0) {
      do {
        if (5 < *(int *)(lVar24 + 0x20)) {
          lVar21 = lVar24;
        }
        lVar24 = *(long *)(lVar24 + (ulong)(*(int *)(lVar24 + 0x20) < 6) * 8);
      } while (lVar24 != 0);
      if (((lVar21 != lVar20) && (*(int *)(lVar21 + 0x20) < 7)) &&
         (plVar27 = *(long **)(lVar21 + 0x28), plVar27 != (long *)0x0)) {
        (**(code **)(*plVar27 + 0x208))(plVar27,1);
        (**(code **)(*plVar27 + 0x388))(plVar27,0,0);
      }
    }
  }
  FUN_7103771a80(plVar9,0,0);
  (**(code **)(*(long *)*plVar9 + 0x60))((long *)*plVar9,0);
  (**(code **)(*(long *)*plVar9 + 0x70))((long *)*plVar9,0);
  puVar8 = *(undefined8 **)(*(long *)(DAT_710532f8d0 + 8) + 0x40);
  if (*(undefined8 **)(*(long *)(DAT_710532f8d0 + 8) + 0x48) == puVar8) {
    local_430 = (byte ***)0x0;
  }
  else {
    local_430 = (byte ***)*puVar8;
  }
  FUN_7103772070(*plVar9,0,(long ****)&local_430,ppppbVar16,param_5,param_6,param_7,param_8);
  puVar8 = *(undefined8 **)(*(long *)(DAT_710532f8d0 + 8) + 0x40);
  if (*(undefined8 **)(*(long *)(DAT_710532f8d0 + 8) + 0x48) == puVar8) {
    local_430 = (byte ***)0x0;
  }
  else {
    local_430 = (byte ***)*puVar8;
  }
  FUN_7103772070(*plVar9,4,(long ****)&local_430,ppppbVar16,param_5,param_6,param_7,param_8);
  FUN_7101989b70(&local_430,&local_1d0);
  local_a0 = (long ***)&DAT_7105186040;
  local_80 = &local_a0;
  FUN_7101989a30((long *)&local_a0,alStack_3d0);
  if (&local_a0 == local_80) {
    pplVar18 = (*local_80)[4];
LAB_710192cc0c:
    (*(code *)pplVar18)();
  }
  else if (local_80 != (long ****)0x0) {
    pplVar18 = (*local_80)[5];
    goto LAB_710192cc0c;
  }
  ppppbVar16 = &local_430;
  local_425 = 1;
  FUN_7103770b30(plVar25,plVar11,(long ****)"selector_01",ppppbVar16,param_5,param_6,param_7,param_8
                );
  FUN_71037717d0(plVar25,0,"set_btn_return",ppppbVar16,param_5,param_6,param_7,param_8);
  plVar9 = (long *)*plVar25;
  plVar27 = (long *)plVar9[0x37];
  if (plVar27 != (long *)0x0) {
    plVar28 = plVar9 + 0x37;
    plVar26 = plVar28;
    plVar23 = plVar27;
    do {
      bVar4 = (int)plVar23[4] < 0;
      if (!bVar4) {
        plVar26 = plVar23;
      }
      plVar23 = (long *)plVar23[bVar4];
    } while (plVar23 != (long *)0x0);
    if (((plVar26 != plVar28) && ((int)plVar26[4] < 1)) &&
       (plVar26 = (long *)plVar26[5], plVar26 != (long *)0x0)) {
      (**(code **)(*plVar26 + 0x1f8))(plVar26,1);
      (**(code **)(*plVar26 + 0x388))(plVar26,0,0);
      plVar9 = (long *)*plVar25;
      plVar27 = (long *)plVar9[0x37];
      plVar28 = plVar9 + 0x37;
    }
    plVar26 = plVar28;
    if (plVar27 != (long *)0x0) {
      do {
        bVar4 = (int)plVar27[4] < 0;
        if (!bVar4) {
          plVar26 = plVar27;
        }
        plVar27 = (long *)plVar27[bVar4];
      } while (plVar27 != (long *)0x0);
      if (((plVar26 != plVar28) && ((int)plVar26[4] < 1)) &&
         (plVar27 = (long *)plVar26[5], plVar27 != (long *)0x0)) {
        (**(code **)(*plVar27 + 0x208))(plVar27,1);
        (**(code **)(*plVar27 + 0x388))(plVar27,0,0);
        plVar9 = (long *)*plVar25;
      }
    }
  }
  (**(code **)(*plVar9 + 0x60))(plVar9,0);
  (**(code **)(*(long *)*plVar25 + 0x70))((long *)*plVar25,1);
  lVar24 = *(long *)(*(long *)(DAT_710532f8d0 + 8) + 0x40);
  if ((ulong)(*(long *)(*(long *)(DAT_710532f8d0 + 8) + 0x48) - lVar24 >> 3) < 4) {
    local_a0 = (long ***)0x0;
  }
  else {
    local_a0 = *(long ****)(lVar24 + 0x18);
  }
  FUN_7103772070(*plVar25,0,&local_a0,ppppbVar16,param_5,param_6,param_7,param_8);
  pppplVar14 = (long ****)0x0;
  FUN_7103771d60(&local_a0,*plVar25,(long ****)0x0,ppppbVar16,param_5,param_6,param_7,param_8);
  plVar25 = local_98;
  if (*local_98 == 0) {
    ppppbVar12 = (byte ****)&DAT_7104867c2e;
  }
  else {
    ppppbVar12 = *(byte *****)(*local_98 + 0x88);
  }
  FUN_7103776640(&local_440,(long)plVar11,ppppbVar12,pppplVar14,ppppbVar16,param_5,param_6,param_7,
                 param_8);
  uVar5 = local_438;
  FUN_7103778300(0x3f800000,local_438,0x71043f0f4e);
  local_440 = &PTR_FUN_710523d988;
  local_438 = 0;
  if (uVar5 != 0) {
    uVar10 = *(ulong *)(uVar5 + 0x18);
    *(undefined ***)(uVar5 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar5 + 0x18) = 0;
    if (uVar10 != 0) {
      FUN_710392eb40(uVar10);
    }
    FUN_710392eb40(uVar5);
  }
  plVar11 = (long *)*plVar25;
  if (plVar11 != (long *)0x0) {
    (**(code **)(*plVar11 + 0x280))(plVar11,0);
  }
  local_a0 = (long ***)&PTR_FUN_710523d9c8;
  local_98 = (long *)0x0;
  FUN_710392eb40((ulong)plVar25);
  if (alStack_340 == local_320) {
    pcVar19 = *(code **)(*local_320 + 0x20);
LAB_710192ce6c:
    (*pcVar19)();
  }
  else if (local_320 != (long *)0x0) {
    pcVar19 = *(code **)(*local_320 + 0x28);
    goto LAB_710192ce6c;
  }
  if (alStack_370 == local_350) {
    pcVar19 = *(code **)(*local_350 + 0x20);
LAB_710192ce9c:
    (*pcVar19)();
  }
  else if (local_350 != (long *)0x0) {
    pcVar19 = *(code **)(*local_350 + 0x28);
    goto LAB_710192ce9c;
  }
  if (alStack_3a0 == local_380) {
    pcVar19 = *(code **)(*local_380 + 0x20);
LAB_710192cecc:
    (*pcVar19)();
  }
  else if (local_380 != (long *)0x0) {
    pcVar19 = *(code **)(*local_380 + 0x28);
    goto LAB_710192cecc;
  }
  if (alStack_3d0 == local_3b0) {
    pcVar19 = *(code **)(*local_3b0 + 0x20);
LAB_710192cefc:
    (*pcVar19)();
  }
  else if (local_3b0 != (long *)0x0) {
    pcVar19 = *(code **)(*local_3b0 + 0x28);
    goto LAB_710192cefc;
  }
  if (alStack_400 == local_3e0) {
    pcVar19 = *(code **)(*local_3e0 + 0x20);
LAB_710192cf2c:
    (*pcVar19)();
  }
  else if (local_3e0 != (long *)0x0) {
    pcVar19 = *(code **)(*local_3e0 + 0x28);
    goto LAB_710192cf2c;
  }
  puVar8 = (undefined8 *)
           FUN_710392e290(0x10,0x88,pppplVar14,ppppbVar16,param_5,param_6,param_7,param_8);
  if (puVar8 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_a0 = (long ***)((ulong)local_a0 & 0xffffffff00000000);
      local_430 = (byte ***)&DAT_00000088;
      ppppbVar12 = &local_430;
      uVar5 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_a0);
      if (((uVar5 & 1) != 0) &&
         (puVar8 = (undefined8 *)
                   FUN_710392e290(0x10,0x88,(long ****)ppppbVar12,ppppbVar16,param_5,param_6,param_7
                                  ,param_8), puVar8 != (undefined8 *)0x0)) goto LAB_710192cf8c;
    }
    puVar8 = (undefined8 *)0x0;
  }
LAB_710192cf8c:
  ppppppppplVar15 = (long *********)0x0;
  FUN_7101e8ebe0(puVar8,plVar1,(byte ****)0x0,ppppbVar16,param_5,param_6,param_7,param_8);
  puVar8[2] = &DAT_7105333600;
  *(undefined4 *)(puVar8 + 0xd) = DAT_7105333660;
  *(undefined4 *)((long)puVar8 + 0x6c) = DAT_7105333664;
  do {
    uVar3 = DAT_7105333650;
    cVar2 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(0x7105333650,0x10);
    if (bVar4) {
      DAT_7105333650 = 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0' || (uVar3 & 1) != 0);
  puVar8[9] = DAT_7105333648;
  DAT_7105333650 = 0;
  DAT_7105333648 = puVar8;
  FUN_71032caea0((long)puVar8,extraout_x1_03,(long ****)ppppppppplVar15,ppppbVar16,param_5,param_6,
                 param_7,param_8);
  lVar24 = plVar7[0x30];
  plVar7[0x30] = (long)puVar8;
  uVar13 = extraout_x1_04;
  if (lVar24 != 0) {
    FUN_71032cad20(lVar24);
    puVar8 = (undefined8 *)plVar7[0x30];
    uVar13 = extraout_x1_05;
  }
  *(undefined1 *)(puVar8 + 0xe) = 1;
  if (alStack_210 == local_1f0) {
    pcVar19 = *(code **)(*local_1f0 + 0x20);
LAB_710192d048:
    (*pcVar19)();
    uVar13 = extraout_x1_06;
  }
  else if (local_1f0 != (long *)0x0) {
    pcVar19 = *(code **)(*local_1f0 + 0x28);
    goto LAB_710192d048;
  }
  if (alStack_240 == local_220) {
    pcVar19 = *(code **)(*local_220 + 0x20);
LAB_710192d078:
    (*pcVar19)();
    uVar13 = extraout_x1_07;
  }
  else if (local_220 != (long *)0x0) {
    pcVar19 = *(code **)(*local_220 + 0x28);
    goto LAB_710192d078;
  }
  if (alStack_270 == local_250) {
    pcVar19 = *(code **)(*local_250 + 0x20);
LAB_710192d0a8:
    (*pcVar19)();
    uVar13 = extraout_x1_08;
  }
  else if (local_250 != (long *)0x0) {
    pcVar19 = *(code **)(*local_250 + 0x28);
    goto LAB_710192d0a8;
  }
  if (alStack_2a0 == local_280) {
    pcVar19 = *(code **)(*local_280 + 0x20);
LAB_710192d0d8:
    (*pcVar19)();
    uVar13 = extraout_x1_09;
  }
  else if (local_280 != (long *)0x0) {
    pcVar19 = *(code **)(*local_280 + 0x28);
    goto LAB_710192d0d8;
  }
  if (alStack_2d0 == local_2b0) {
    pcVar19 = *(code **)(*local_2b0 + 0x20);
LAB_710192d108:
    (*pcVar19)();
    uVar13 = extraout_x1_10;
  }
  else if (local_2b0 != (long *)0x0) {
    pcVar19 = *(code **)(*local_2b0 + 0x28);
    goto LAB_710192d108;
  }
  if (alStack_e0 == local_c0) {
    pcVar19 = *(code **)(*local_c0 + 0x20);
LAB_710192d138:
    (*pcVar19)();
    uVar13 = extraout_x1_11;
  }
  else if (local_c0 != (long *)0x0) {
    pcVar19 = *(code **)(*local_c0 + 0x28);
    goto LAB_710192d138;
  }
  if (alStack_110 == local_f0) {
    pcVar19 = *(code **)(*local_f0 + 0x20);
LAB_710192d168:
    (*pcVar19)();
    uVar13 = extraout_x1_12;
  }
  else if (local_f0 != (long *)0x0) {
    pcVar19 = *(code **)(*local_f0 + 0x28);
    goto LAB_710192d168;
  }
  if (alStack_140 == local_120) {
    pcVar19 = *(code **)(*local_120 + 0x20);
LAB_710192d198:
    (*pcVar19)();
    uVar13 = extraout_x1_13;
  }
  else if (local_120 != (long *)0x0) {
    pcVar19 = *(code **)(*local_120 + 0x28);
    goto LAB_710192d198;
  }
  if (alStack_170 == local_150) {
    pcVar19 = *(code **)(*local_150 + 0x20);
LAB_710192d1c8:
    (*pcVar19)();
    uVar13 = extraout_x1_14;
  }
  else if (local_150 != (long *)0x0) {
    pcVar19 = *(code **)(*local_150 + 0x28);
    goto LAB_710192d1c8;
  }
  if (alStack_1a0 == local_180) {
    pcVar19 = *(code **)(*local_180 + 0x20);
  }
  else {
    if (local_180 == (long *)0x0) goto LAB_710192d1fc;
    pcVar19 = *(code **)(*local_180 + 0x28);
  }
  (*pcVar19)();
  uVar13 = extraout_x1_15;
LAB_710192d1fc:
  puVar6[0x10] = plVar7;
  puVar6[2] = &DAT_7105333600;
  *(undefined4 *)(puVar6 + 0xd) = DAT_7105333660;
  *(undefined4 *)((long)puVar6 + 0x6c) = DAT_7105333664;
  do {
    uVar3 = DAT_7105333650;
    cVar2 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(0x7105333650,0x10);
    if (bVar4) {
      DAT_7105333650 = 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0' || (uVar3 & 1) != 0);
  puVar6[9] = DAT_7105333648;
  DAT_7105333650 = 0;
  DAT_7105333648 = puVar6;
  FUN_71032caea0((long)puVar6,uVar13,(long ****)ppppppppplVar15,ppppbVar16,param_5,param_6,param_7,
                 param_8);
  lVar24 = *(long *)(param_1 + 0x1f8);
  *(undefined8 **)(param_1 + 0x1f8) = puVar6;
  if (lVar24 != 0) {
    FUN_71032cad20(lVar24);
  }
  FUN_710323eba0((undefined8 *)(*plVar1 + 8),(ulong *)&DAT_7104545b60,ppppppppplVar15,ppppbVar16,
                 param_5,param_6,param_7,param_8);
  FUN_710323eba0((undefined8 *)(*plVar1 + 8),(ulong *)&DAT_7104545c40,ppppppppplVar15,ppppbVar16,
                 param_5,param_6,param_7,param_8);
  return;
}

