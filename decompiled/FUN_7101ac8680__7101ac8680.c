// addr:      7101ac8680
// offset:    0x1ac8680
// name:      FUN_7101ac8680
// mangled:   
// signature: undefined __cdecl FUN_7101ac8680(long * param_1, undefined8 * param_2, long * param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_7101ac8680(long *param_1,undefined8 *param_2,long *param_3,undefined8 param_4,
                   undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long *plVar1;
  char cVar2;
  undefined4 uVar3;
  bool bVar4;
  long lVar5;
  ulong uVar6;
  undefined8 *puVar7;
  ulong uVar8;
  long *plVar9;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 extraout_x1_02;
  long *********ppppppppplVar10;
  undefined8 uVar11;
  char *pcVar12;
  long ****pppplVar13;
  byte ****ppppbVar14;
  char *pcVar15;
  long ****pppplVar16;
  uint uVar17;
  byte **ppbVar18;
  code *pcVar19;
  long lVar20;
  long lVar21;
  uint uVar22;
  long lVar23;
  undefined8 *puVar24;
  long *plVar25;
  long *plVar26;
  long *plVar27;
  long *plVar28;
  long *plVar29;
  undefined **local_5a0;
  ulong local_598;
  undefined **local_590;
  ulong local_588;
  undefined **local_580;
  ulong local_578;
  byte ***local_570;
  long *local_568;
  undefined4 local_560;
  undefined2 local_55c;
  undefined1 local_55a;
  undefined1 *local_558;
  byte ****local_550;
  long alStack_540 [4];
  long *local_520;
  long alStack_510 [4];
  long *local_4f0;
  long alStack_4e0 [4];
  long *local_4c0;
  long alStack_4b0 [4];
  long *local_490;
  long alStack_480 [4];
  long *local_460;
  undefined4 local_450;
  byte ***local_440;
  long *local_438;
  byte ****local_420;
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
  undefined8 local_310;
  undefined8 local_308;
  undefined8 local_300;
  undefined2 local_2f8;
  undefined8 local_2f6;
  undefined4 local_2ee;
  undefined2 local_2ea;
  undefined8 local_2e8;
  undefined2 local_2e0;
  undefined1 local_2de;
  long *local_2c0;
  long alStack_2b0 [4];
  long *local_290;
  long alStack_280 [4];
  long *local_260;
  long alStack_250 [4];
  long *local_230;
  long alStack_220 [4];
  long *local_200;
  undefined **local_1e0;
  ulong local_1d8;
  byte ***local_1d0;
  ushort local_1c8;
  undefined4 local_1c6;
  undefined2 local_1c2;
  undefined4 local_1c0;
  undefined2 local_1bc;
  undefined1 local_1ba;
  undefined8 local_1b8;
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
  undefined **local_a0;
  ulong local_98;
  undefined ***local_80;
  
  FUN_71037760f0(**(long **)*param_2,0);
  lVar5 = *(long *)param_1[0x5e];
  ppppppppplVar10 = (long *********)(long)*(int *)(lVar5 + 0x70);
  ppppbVar14 = (byte ****)(ulong)*(uint *)(lVar5 + 0x68);
  pppplVar16 = (long ****)0x0;
  FUN_710323beb0(lVar5,(ulong *)&DAT_71045445e8,(long)ppppppppplVar10,(ulong)ppppbVar14,
                 (long ****)0x0,param_6,param_7,param_8);
  lVar5 = *(long *)param_1[0x5e];
  uVar6 = FUN_710323cb80(lVar5,extraout_x1,ppppppppplVar10,ppppbVar14,pppplVar16,param_6,param_7,
                         param_8);
  while ((uVar6 & 1) == 0) {
    nn::os::SleepThread(1000000);
    uVar6 = FUN_710323cb80(lVar5,extraout_x1_00,ppppppppplVar10,ppppbVar14,pppplVar16,param_6,
                           param_7,param_8);
  }
  puVar24 = (undefined8 *)*param_2;
  plVar1 = param_1 + 0x46;
  if (plVar1 != param_3) {
    *(undefined8 *)param_1[0x47] = *(undefined8 *)param_3[1];
    *(undefined8 *)(param_1[0x47] + 8) = *(undefined8 *)(param_3[1] + 8);
    lVar21 = param_3[1];
    lVar5 = param_1[0x47];
    if (lVar5 != lVar21) {
      **(undefined8 **)(lVar5 + 0x18) = **(undefined8 **)(lVar21 + 0x18);
      *(undefined8 *)(*(long *)(lVar5 + 0x18) + 8) = *(undefined8 *)(*(long *)(lVar21 + 0x18) + 8);
      *(undefined8 *)(*(long *)(lVar5 + 0x18) + 0x10) =
           *(undefined8 *)(*(long *)(lVar21 + 0x18) + 0x10);
      *(undefined8 *)(*(long *)(lVar5 + 0x18) + 0x18) =
           *(undefined8 *)(*(long *)(lVar21 + 0x18) + 0x18);
    }
  }
  local_1d0 = (byte ***)0x0;
  local_1c8 = 0x101;
  local_1c6 = 0;
  local_1c2 = 0;
  local_1c0 = 1;
  local_1bc = 1;
  local_1ba = 1;
  local_1b8 = &DAT_41f0000000000000;
  local_1b0 = 0;
  local_180 = (long *)0x0;
  local_150 = (long *)0x0;
  local_120 = (long *)0x0;
  local_f0 = (long *)0x0;
  local_c0 = (long *)0x0;
  local_b0 = 0;
  FUN_710337df20((long)&local_1d0);
  local_1c8 = local_1c8 & 0xff00;
  local_1b8 = (undefined1 *)CONCAT44(0x42700000,(undefined4)local_1b8);
  puVar7 = (undefined8 *)
           FUN_710392e290(0x10,0x301c,(long ****)ppppppppplVar10,ppppbVar14,pppplVar16,param_6,
                          param_7,param_8);
  if (puVar7 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_440 = (byte ***)((ulong)local_440 & 0xffffffff00000000);
      local_310 = (undefined **)0x301c;
      ppppppppplVar10 = (long *********)&local_310;
      uVar6 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_440);
      if (((uVar6 & 1) != 0) &&
         (puVar7 = (undefined8 *)
                   FUN_710392e290(0x10,0x301c,(long ****)ppppppppplVar10,ppppbVar14,pppplVar16,
                                  param_6,param_7,param_8), puVar7 != (undefined8 *)0x0))
      goto LAB_7101ac8850;
    }
    puVar7 = (undefined8 *)0x0;
  }
LAB_7101ac8850:
  *(undefined4 *)(puVar7 + 1) = 0;
  *(undefined2 *)((long)puVar7 + 0xc) = 0;
  *(undefined8 *)((long)puVar7 + 0x100c) = 0;
  *(undefined2 *)((long)puVar7 + 0x1014) = 0;
  uVar22 = 0x6d;
  *(undefined8 *)((long)puVar7 + 0x2014) = 0;
  *(undefined2 *)((long)puVar7 + 0x201c) = 0;
  *puVar7 = 4;
  local_308 = (long *)0x6c7065725f756e6d;
  local_300 = 0x69617465645f7961;
  local_2f8 = 0x5f6c;
  local_2f6 = 0x5f64616f6279656b;
  local_2ee = 0x706c6568;
  local_2ea = 0x745f;
  local_2e8 = 0x766f6d5f656c7469;
  uVar17 = 0x811c9dc5;
  local_2e0 = 0x6569;
  lVar5 = 9;
  local_2de = 0;
  do {
    uVar17 = uVar17 * 0x89 ^ uVar22;
    uVar22 = (uint)*(byte *)((long)&local_310 + lVar5);
    lVar5 = lVar5 + 1;
  } while (uVar22 != 0);
  local_310 = (undefined **)CONCAT44(0x2a,uVar17);
  FUN_7103391610((long)puVar7,(long)&local_310);
  FUN_7103391f40((long *)param_1[0x67],(undefined4 *)puVar7);
  FUN_7103776640(&local_1e0,(long)plVar1,(byte ****)"set_parts_btn_decide",ppppppppplVar10,
                 ppppbVar14,pppplVar16,param_6,param_7,param_8);
  FUN_710337d360(&local_1e0,extraout_x1_01,(undefined **)ppppppppplVar10,ppppbVar14,pppplVar16,
                 param_6,param_7,param_8);
  uVar6 = local_1d8;
  local_1e0 = &PTR_FUN_710523d988;
  local_1d8 = 0;
  if (uVar6 != 0) {
    uVar8 = *(ulong *)(uVar6 + 0x18);
    *(undefined ***)(uVar6 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar6 + 0x18) = 0;
    if (uVar8 != 0) {
      FUN_710392eb40(uVar8);
    }
    FUN_710392eb40(uVar6);
  }
  ppppbVar14 = &local_1d0;
  FUN_7103770b30(param_1 + 0x48,plVar1,(long ****)"selector_02",ppppbVar14,pppplVar16,param_6,
                 param_7,param_8);
  FUN_71037717d0(param_1 + 0x48,0,"set_parts_btn_playbtn",ppppbVar14,pppplVar16,param_6,param_7,
                 param_8);
  lVar5 = *(long *)(param_1[0x48] + 0x1b8);
  if (lVar5 != 0) {
    lVar21 = param_1[0x48] + 0x1b8;
    lVar20 = lVar21;
    do {
      bVar4 = *(int *)(lVar5 + 0x20) < 0;
      if (!bVar4) {
        lVar20 = lVar5;
      }
      lVar5 = *(long *)(lVar5 + (ulong)bVar4 * 8);
    } while (lVar5 != 0);
    if (((lVar20 != lVar21) && (*(int *)(lVar20 + 0x20) < 1)) &&
       (plVar25 = *(long **)(lVar20 + 0x28), plVar25 != (long *)0x0)) {
      (**(code **)(*plVar25 + 0x1f8))(plVar25,1);
      (**(code **)(*plVar25 + 0x388))(plVar25,0,0);
    }
  }
  FUN_7101989b70(&local_310,&local_1d0);
  local_2f6._0_6_ = CONCAT42(0x43160000,(undefined2)local_2f6);
  local_440 = (byte ***)&PTR_FUN_71050a9828;
  local_438 = param_1;
  local_420 = &local_440;
  FUN_7101a7ed70((long *)&local_440,(long *)&local_2e0);
  if (&local_440 == local_420) {
    ppbVar18 = (*local_420)[4];
LAB_7101ac8a9c:
    (*(code *)ppbVar18)();
  }
  else if (local_420 != (byte ****)0x0) {
    ppbVar18 = (*local_420)[5];
    goto LAB_7101ac8a9c;
  }
  local_440 = (byte ***)&PTR_FUN_71050a9870;
  local_438 = param_1;
  local_420 = &local_440;
  FUN_7101989a30((long *)&local_440,alStack_2b0);
  if (&local_440 == local_420) {
    ppbVar18 = (*local_420)[4];
LAB_7101ac8aec:
    (*(code *)ppbVar18)();
  }
  else if (local_420 != (byte ****)0x0) {
    ppbVar18 = (*local_420)[5];
    goto LAB_7101ac8aec;
  }
  plVar25 = param_1 + 0x49;
  ppppbVar14 = (byte ****)&local_310;
  FUN_7103770b30(plVar25,plVar1,(long ****)"selector_00",ppppbVar14,pppplVar16,param_6,param_7,
                 param_8);
  FUN_71037717d0(plVar25,1,"set_parts_btn_00",ppppbVar14,pppplVar16,param_6,param_7,param_8);
  FUN_71037717d0(plVar25,2,"set_parts_btn_01",ppppbVar14,pppplVar16,param_6,param_7,param_8);
  FUN_71037717d0(plVar25,3,"set_parts_btn_02",ppppbVar14,pppplVar16,param_6,param_7,param_8);
  FUN_71037717d0(plVar25,4,"set_parts_btn_03",ppppbVar14,pppplVar16,param_6,param_7,param_8);
  lVar5 = *(long *)(param_1[0x49] + 0x1b8);
  if (lVar5 != 0) {
    lVar21 = param_1[0x49] + 0x1b8;
    lVar20 = lVar21;
    lVar23 = lVar5;
    do {
      if (0 < *(int *)(lVar23 + 0x20)) {
        lVar20 = lVar23;
      }
      lVar23 = *(long *)(lVar23 + (ulong)(*(int *)(lVar23 + 0x20) < 1) * 8);
    } while (lVar23 != 0);
    if (((lVar20 != lVar21) && (*(int *)(lVar20 + 0x20) < 2)) &&
       (plVar26 = *(long **)(lVar20 + 0x28), plVar26 != (long *)0x0)) {
      (**(code **)(*plVar26 + 0x1f8))(plVar26,1);
      (**(code **)(*plVar26 + 0x388))(plVar26,0,0);
      lVar21 = *plVar25 + 0x1b8;
      lVar5 = *(long *)(*plVar25 + 0x1b8);
    }
    lVar20 = lVar21;
    lVar23 = lVar5;
    if (lVar5 != 0) {
      do {
        if (1 < *(int *)(lVar23 + 0x20)) {
          lVar20 = lVar23;
        }
        lVar23 = *(long *)(lVar23 + (ulong)(*(int *)(lVar23 + 0x20) < 2) * 8);
      } while (lVar23 != 0);
      if (((lVar20 != lVar21) && (*(int *)(lVar20 + 0x20) < 3)) &&
         (plVar26 = *(long **)(lVar20 + 0x28), plVar26 != (long *)0x0)) {
        (**(code **)(*plVar26 + 0x1f8))(plVar26,1);
        (**(code **)(*plVar26 + 0x388))(plVar26,0,0);
        lVar21 = *plVar25 + 0x1b8;
        lVar5 = *(long *)(*plVar25 + 0x1b8);
      }
      lVar20 = lVar21;
      lVar23 = lVar5;
      if (lVar5 != 0) {
        do {
          if (2 < *(int *)(lVar23 + 0x20)) {
            lVar20 = lVar23;
          }
          lVar23 = *(long *)(lVar23 + (ulong)(*(int *)(lVar23 + 0x20) < 3) * 8);
        } while (lVar23 != 0);
        if (((lVar20 != lVar21) && (*(int *)(lVar20 + 0x20) < 4)) &&
           (plVar26 = *(long **)(lVar20 + 0x28), plVar26 != (long *)0x0)) {
          (**(code **)(*plVar26 + 0x1f8))(plVar26,1);
          (**(code **)(*plVar26 + 0x388))(plVar26,0,0);
          lVar21 = *plVar25 + 0x1b8;
          lVar5 = *(long *)(*plVar25 + 0x1b8);
        }
        lVar20 = lVar21;
        if (lVar5 != 0) {
          do {
            if (3 < *(int *)(lVar5 + 0x20)) {
              lVar20 = lVar5;
            }
            lVar5 = *(long *)(lVar5 + (ulong)(*(int *)(lVar5 + 0x20) < 4) * 8);
          } while (lVar5 != 0);
          if (((lVar20 != lVar21) && (*(int *)(lVar20 + 0x20) < 5)) &&
             (plVar26 = *(long **)(lVar20 + 0x28), plVar26 != (long *)0x0)) {
            (**(code **)(*plVar26 + 0x1f8))(plVar26,1);
            (**(code **)(*plVar26 + 0x388))(plVar26,0,0);
          }
        }
      }
    }
  }
  FUN_7103771a80(plVar25,1,1);
  if (alStack_220 == local_200) {
    pcVar19 = *(code **)(*local_200 + 0x20);
LAB_7101ac8d74:
    (*pcVar19)();
  }
  else if (local_200 != (long *)0x0) {
    pcVar19 = *(code **)(*local_200 + 0x28);
    goto LAB_7101ac8d74;
  }
  if (alStack_250 == local_230) {
    pcVar19 = *(code **)(*local_230 + 0x20);
LAB_7101ac8da4:
    (*pcVar19)();
  }
  else if (local_230 != (long *)0x0) {
    pcVar19 = *(code **)(*local_230 + 0x28);
    goto LAB_7101ac8da4;
  }
  if (alStack_280 == local_260) {
    pcVar19 = *(code **)(*local_260 + 0x20);
LAB_7101ac8dd4:
    (*pcVar19)();
  }
  else if (local_260 != (long *)0x0) {
    pcVar19 = *(code **)(*local_260 + 0x28);
    goto LAB_7101ac8dd4;
  }
  if (alStack_2b0 == local_290) {
    pcVar19 = *(code **)(*local_290 + 0x20);
LAB_7101ac8e04:
    (*pcVar19)();
  }
  else if (local_290 != (long *)0x0) {
    pcVar19 = *(code **)(*local_290 + 0x28);
    goto LAB_7101ac8e04;
  }
  if ((long *)&local_2e0 == local_2c0) {
    pcVar19 = *(code **)(*local_2c0 + 0x20);
LAB_7101ac8e34:
    (*pcVar19)();
  }
  else if (local_2c0 != (long *)0x0) {
    pcVar19 = *(code **)(*local_2c0 + 0x28);
    goto LAB_7101ac8e34;
  }
  FUN_7101989b70(&local_310,&local_1d0);
  plVar25 = local_290;
  bVar4 = alStack_2b0 == local_290;
  local_290 = (long *)0x0;
  if (bVar4) {
    pcVar19 = *(code **)(*plVar25 + 0x20);
LAB_7101ac8e74:
    (*pcVar19)();
  }
  else if (plVar25 != (long *)0x0) {
    pcVar19 = *(code **)(*plVar25 + 0x28);
    goto LAB_7101ac8e74;
  }
  plVar25 = local_260;
  bVar4 = alStack_280 == local_260;
  local_260 = (long *)0x0;
  if (bVar4) {
    pcVar19 = *(code **)(*plVar25 + 0x20);
LAB_7101ac8eb0:
    (*pcVar19)();
  }
  else if (plVar25 != (long *)0x0) {
    pcVar19 = *(code **)(*plVar25 + 0x28);
    goto LAB_7101ac8eb0;
  }
  ppppbVar14 = (byte ****)&local_310;
  FUN_7103770b30(param_1 + 0x4a,plVar1,(long ****)"selector_01",ppppbVar14,pppplVar16,param_6,
                 param_7,param_8);
  FUN_71037717d0(param_1 + 0x4a,5,"set_parts_detail_btn",ppppbVar14,pppplVar16,param_6,param_7,
                 param_8);
  lVar5 = *(long *)(param_1[0x4a] + 0x1b8);
  if (lVar5 != 0) {
    lVar21 = param_1[0x4a] + 0x1b8;
    lVar20 = lVar21;
    do {
      if (4 < *(int *)(lVar5 + 0x20)) {
        lVar20 = lVar5;
      }
      lVar5 = *(long *)(lVar5 + (ulong)(*(int *)(lVar5 + 0x20) < 5) * 8);
    } while (lVar5 != 0);
    if (((lVar20 != lVar21) && (*(int *)(lVar20 + 0x20) < 6)) &&
       (plVar25 = *(long **)(lVar20 + 0x28), plVar25 != (long *)0x0)) {
      (**(code **)(*plVar25 + 0x1f8))(plVar25,1);
      (**(code **)(*plVar25 + 0x388))(plVar25,0,0);
    }
  }
  if (alStack_220 == local_200) {
    pcVar19 = *(code **)(*local_200 + 0x20);
LAB_7101ac8f84:
    (*pcVar19)();
  }
  else if (local_200 != (long *)0x0) {
    pcVar19 = *(code **)(*local_200 + 0x28);
    goto LAB_7101ac8f84;
  }
  if (alStack_250 == local_230) {
    pcVar19 = *(code **)(*local_230 + 0x20);
LAB_7101ac8fb4:
    (*pcVar19)();
  }
  else if (local_230 != (long *)0x0) {
    pcVar19 = *(code **)(*local_230 + 0x28);
    goto LAB_7101ac8fb4;
  }
  if (alStack_280 == local_260) {
    pcVar19 = *(code **)(*local_260 + 0x20);
LAB_7101ac8fdc:
    (*pcVar19)();
  }
  else if (local_260 != (long *)0x0) {
    pcVar19 = *(code **)(*local_260 + 0x28);
    goto LAB_7101ac8fdc;
  }
  if (alStack_2b0 == local_290) {
    pcVar19 = *(code **)(*local_290 + 0x20);
LAB_7101ac9004:
    (*pcVar19)();
  }
  else if (local_290 != (long *)0x0) {
    pcVar19 = *(code **)(*local_290 + 0x28);
    goto LAB_7101ac9004;
  }
  if ((long *)&local_2e0 == local_2c0) {
    pcVar19 = *(code **)(*local_2c0 + 0x20);
LAB_7101ac9034:
    (*pcVar19)();
  }
  else if (local_2c0 != (long *)0x0) {
    pcVar19 = *(code **)(*local_2c0 + 0x28);
    goto LAB_7101ac9034;
  }
  lVar5 = *(long *)*puVar24;
  *(undefined4 *)(*(long *)(lVar5 + 0x600) + 0x18) = 0x10;
  *(undefined4 *)(*(long *)(lVar5 + 0x600) + 0x20) = 0x100;
  *(undefined4 *)(*(long *)(lVar5 + 0x600) + 0x1c) = 0x200;
  *(undefined4 *)(*(long *)(lVar5 + 0x600) + 0x24) = 0x40000;
  *(undefined4 *)(*(long *)(lVar5 + 0x600) + 0x10) = 0x20;
  *(undefined4 *)(*(long *)(lVar5 + 0x600) + 0x14) = 0x40;
  FUN_7101989b70(&local_310,&local_1d0);
  plVar25 = param_1 + 0x4b;
  ppppbVar14 = (byte ****)&local_310;
  local_308._0_3_ = CONCAT12(1,(undefined2)local_308);
  FUN_7103770b30(plVar25,plVar1,(long ****)"selector_03",ppppbVar14,pppplVar16,param_6,param_7,
                 param_8);
  FUN_71037717d0(plVar25,0,"set_parts_arrow_l",ppppbVar14,pppplVar16,param_6,param_7,param_8);
  FUN_71037717d0(plVar25,1,"set_parts_arrow_r",ppppbVar14,pppplVar16,param_6,param_7,param_8);
  FUN_7103771930(param_1[0x4b],1,(long ****)&DAT_00000007,(byte ****)0x1,pppplVar16,param_6,param_7,
                 param_8);
  ppppbVar14 = (byte ****)0x1;
  FUN_7103771930(param_1[0x4b],0,(long ****)&DAT_00000008,(byte ****)0x1,pppplVar16,param_6,param_7,
                 param_8);
  FUN_7103771d60(&local_440,param_1[0x4b],(long ****)0x0,ppppbVar14,pppplVar16,param_6,param_7,
                 param_8);
  plVar26 = local_438;
  plVar9 = (long *)*local_438;
  if (plVar9 != (long *)0x0) {
    (**(code **)(*plVar9 + 0x268))(plVar9,1,1);
  }
  local_440 = (byte ***)&PTR_FUN_710523d9c8;
  local_438 = (long *)0x0;
  if (plVar26 != (long *)0x0) {
    FUN_710392eb40((ulong)plVar26);
  }
  FUN_7103771d60(&local_440,*plVar25,(long ****)0x1,ppppbVar14,pppplVar16,param_6,param_7,param_8);
  plVar25 = local_438;
  plVar26 = (long *)*local_438;
  if (plVar26 != (long *)0x0) {
    (**(code **)(*plVar26 + 0x268))(plVar26,1,1);
  }
  local_440 = (byte ***)&PTR_FUN_710523d9c8;
  local_438 = (long *)0x0;
  if (plVar25 != (long *)0x0) {
    FUN_710392eb40((ulong)plVar25);
  }
  if (alStack_220 == local_200) {
    pcVar19 = *(code **)(*local_200 + 0x20);
LAB_7101ac91bc:
    (*pcVar19)();
  }
  else if (local_200 != (long *)0x0) {
    pcVar19 = *(code **)(*local_200 + 0x28);
    goto LAB_7101ac91bc;
  }
  if (alStack_250 == local_230) {
    pcVar19 = *(code **)(*local_230 + 0x20);
LAB_7101ac91ec:
    (*pcVar19)();
  }
  else if (local_230 != (long *)0x0) {
    pcVar19 = *(code **)(*local_230 + 0x28);
    goto LAB_7101ac91ec;
  }
  if (alStack_280 == local_260) {
    pcVar19 = *(code **)(*local_260 + 0x20);
LAB_7101ac921c:
    (*pcVar19)();
  }
  else if (local_260 != (long *)0x0) {
    pcVar19 = *(code **)(*local_260 + 0x28);
    goto LAB_7101ac921c;
  }
  if (alStack_2b0 == local_290) {
    pcVar19 = *(code **)(*local_290 + 0x20);
LAB_7101ac924c:
    (*pcVar19)();
  }
  else if (local_290 != (long *)0x0) {
    pcVar19 = *(code **)(*local_290 + 0x28);
    goto LAB_7101ac924c;
  }
  if ((long *)&local_2e0 == local_2c0) {
    pcVar19 = *(code **)(*local_2c0 + 0x20);
LAB_7101ac927c:
    (*pcVar19)();
  }
  else if (local_2c0 != (long *)0x0) {
    pcVar19 = *(code **)(*local_2c0 + 0x28);
    goto LAB_7101ac927c;
  }
  FUN_7101989b70(&local_310,&local_1d0);
  local_440 = (byte ***)&PTR_FUN_71050a98b8;
  local_438 = param_1;
  local_420 = &local_440;
  FUN_7101a7ed70((long *)&local_440,(long *)&local_2e0);
  if (&local_440 == local_420) {
    ppbVar18 = (*local_420)[4];
LAB_7101ac92d4:
    (*(code *)ppbVar18)();
  }
  else if (local_420 != (byte ****)0x0) {
    ppbVar18 = (*local_420)[5];
    goto LAB_7101ac92d4;
  }
  FUN_7101989b70(&local_440,&local_1d0);
  local_570 = (byte ***)&PTR_FUN_71050a9900;
  local_568 = param_1;
  local_550 = &local_570;
  FUN_7101a7ed70((long *)&local_570,alStack_410);
  if (&local_570 == local_550) {
    ppbVar18 = (*local_550)[4];
LAB_7101ac932c:
    (*(code *)ppbVar18)();
  }
  else if (local_550 != (byte ****)0x0) {
    ppbVar18 = (*local_550)[5];
    goto LAB_7101ac932c;
  }
  plVar25 = local_290;
  bVar4 = alStack_2b0 == local_290;
  local_308 = (long *)((ulong)local_308 & 0xffffffffffffff00);
  local_290 = (long *)0x0;
  if (bVar4) {
    pcVar19 = *(code **)(*plVar25 + 0x20);
LAB_7101ac9368:
    (*pcVar19)();
  }
  else if (plVar25 != (long *)0x0) {
    pcVar19 = *(code **)(*plVar25 + 0x28);
    goto LAB_7101ac9368;
  }
  plVar25 = param_1 + 0x4c;
  FUN_7103770b30(plVar25,plVar1,(long ****)"selector_04",(byte ****)&local_310,pppplVar16,param_6,
                 param_7,param_8);
  plVar26 = param_1 + 0x4d;
  ppppbVar14 = &local_440;
  FUN_7103770b30(plVar26,plVar1,(long ****)"selector_05",ppppbVar14,pppplVar16,param_6,param_7,
                 param_8);
  FUN_71037717d0(plVar25,0,"set_parts_btn_08",ppppbVar14,pppplVar16,param_6,param_7,param_8);
  FUN_71037717d0(plVar25,1,"set_parts_btn_09",ppppbVar14,pppplVar16,param_6,param_7,param_8);
  FUN_71037717d0(plVar25,2,"set_parts_btn_10",ppppbVar14,pppplVar16,param_6,param_7,param_8);
  FUN_71037717d0(plVar25,3,"set_parts_btn_11",ppppbVar14,pppplVar16,param_6,param_7,param_8);
  FUN_71037717d0(plVar26,4,"set_parts_btn_decide",ppppbVar14,pppplVar16,param_6,param_7,param_8);
  uVar11 = 0;
  FUN_7103771a80(plVar26,4,0);
  (**(code **)(*(long *)param_1[0x4d] + 0x70))((long *)param_1[0x4d],0);
  FUN_7103776640(&local_570,(long)plVar1,(byte ****)"set_parts_sub_btns_00",uVar11,ppppbVar14,
                 pppplVar16,param_6,param_7,param_8);
  plVar9 = local_568;
  if ((byte ****)(param_1 + 0x52) != &local_570) {
    local_568 = (long *)0x0;
    uVar6 = param_1[0x53];
    param_1[0x53] = (long)plVar9;
    if (uVar6 != 0) {
      uVar8 = *(ulong *)(uVar6 + 0x18);
      *(undefined ***)(uVar6 + 0x10) = &PTR_FUN_710523d9a8;
      *(undefined8 *)(uVar6 + 0x18) = 0;
      if (uVar8 != 0) {
        FUN_710392eb40(uVar8);
      }
      FUN_710392eb40(uVar6);
    }
  }
  plVar9 = local_568;
  local_570 = (byte ***)&PTR_FUN_710523d988;
  local_568 = (long *)0x0;
  if (plVar9 != (long *)0x0) {
    uVar6 = plVar9[3];
    plVar9[2] = (long)&PTR_FUN_710523d9a8;
    plVar9[3] = 0;
    if (uVar6 != 0) {
      FUN_710392eb40(uVar6);
    }
    FUN_710392eb40((ulong)plVar9);
  }
  FUN_7103776640(&local_570,(long)plVar1,(byte ****)"set_parts_sub_btns_01",uVar11,ppppbVar14,
                 pppplVar16,param_6,param_7,param_8);
  plVar9 = local_568;
  if ((byte ****)(param_1 + 0x54) != &local_570) {
    local_568 = (long *)0x0;
    uVar6 = param_1[0x55];
    param_1[0x55] = (long)plVar9;
    if (uVar6 != 0) {
      uVar8 = *(ulong *)(uVar6 + 0x18);
      *(undefined ***)(uVar6 + 0x10) = &PTR_FUN_710523d9a8;
      *(undefined8 *)(uVar6 + 0x18) = 0;
      if (uVar8 != 0) {
        FUN_710392eb40(uVar8);
      }
      FUN_710392eb40(uVar6);
    }
  }
  plVar9 = local_568;
  local_570 = (byte ***)&PTR_FUN_710523d988;
  local_568 = (long *)0x0;
  if (plVar9 != (long *)0x0) {
    uVar6 = *(ulong *)((long)plVar9 + 0x18);
    *(undefined ***)((long)plVar9 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)((long)plVar9 + 0x18) = 0;
    if (uVar6 != 0) {
      FUN_710392eb40(uVar6);
    }
    FUN_710392eb40((ulong)plVar9);
  }
  FUN_7103776640(&local_570,(long)plVar1,(byte ****)"set_parts_sub_btns_02",uVar11,ppppbVar14,
                 pppplVar16,param_6,param_7,param_8);
  plVar9 = local_568;
  if ((byte ****)(param_1 + 0x56) != &local_570) {
    local_568 = (long *)0x0;
    uVar6 = param_1[0x57];
    param_1[0x57] = (long)plVar9;
    if (uVar6 != 0) {
      uVar8 = *(ulong *)(uVar6 + 0x18);
      *(undefined ***)(uVar6 + 0x10) = &PTR_FUN_710523d9a8;
      *(undefined8 *)(uVar6 + 0x18) = 0;
      if (uVar8 != 0) {
        FUN_710392eb40(uVar8);
      }
      FUN_710392eb40(uVar6);
    }
  }
  plVar9 = local_568;
  local_570 = (byte ***)&PTR_FUN_710523d988;
  local_568 = (long *)0x0;
  if (plVar9 != (long *)0x0) {
    uVar6 = *(ulong *)((long)plVar9 + 0x18);
    *(undefined ***)((long)plVar9 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)((long)plVar9 + 0x18) = 0;
    if (uVar6 != 0) {
      FUN_710392eb40(uVar6);
    }
    FUN_710392eb40((ulong)plVar9);
  }
  FUN_7103776640(&local_570,(long)plVar1,(byte ****)"set_parts_sub_btns_03",uVar11,ppppbVar14,
                 pppplVar16,param_6,param_7,param_8);
  plVar9 = local_568;
  if ((byte ****)(param_1 + 0x58) != &local_570) {
    local_568 = (long *)0x0;
    uVar6 = param_1[0x59];
    param_1[0x59] = (long)plVar9;
    if (uVar6 != 0) {
      uVar8 = *(ulong *)(uVar6 + 0x18);
      *(undefined ***)(uVar6 + 0x10) = &PTR_FUN_710523d9a8;
      *(undefined8 *)(uVar6 + 0x18) = 0;
      if (uVar8 != 0) {
        FUN_710392eb40(uVar8);
      }
      FUN_710392eb40(uVar6);
    }
  }
  plVar9 = local_568;
  local_570 = (byte ***)&PTR_FUN_710523d988;
  local_568 = (long *)0x0;
  if (plVar9 != (long *)0x0) {
    uVar6 = *(ulong *)((long)plVar9 + 0x18);
    *(undefined ***)((long)plVar9 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)((long)plVar9 + 0x18) = 0;
    if (uVar6 != 0) {
      FUN_710392eb40(uVar6);
    }
    FUN_710392eb40((ulong)plVar9);
  }
  FUN_7103776640(&local_a0,(long)plVar1,(byte ****)"set_parts_btn_08",uVar11,ppppbVar14,pppplVar16,
                 param_6,param_7,param_8);
  FUN_7103776910(&local_570,(long)&local_a0,(long ****)"set_txt_settingtitle",uVar11,ppppbVar14,
                 pppplVar16,param_6,param_7,param_8);
  uVar6 = local_98;
  local_a0 = &PTR_FUN_710523d988;
  local_98 = 0;
  if (uVar6 != 0) {
    uVar8 = *(ulong *)(uVar6 + 0x18);
    *(undefined ***)(uVar6 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar6 + 0x18) = 0;
    if (uVar8 != 0) {
      FUN_710392eb40(uVar8);
    }
    FUN_710392eb40(uVar6);
  }
  FUN_710377a120((long)&local_570,"mnu_replay_detail_rec_info",uVar11,ppppbVar14,pppplVar16,param_6,
                 param_7,param_8);
  plVar9 = local_568;
  local_570 = (byte ***)&PTR_FUN_710523d9a8;
  local_568 = (long *)0x0;
  if (plVar9 != (long *)0x0) {
    FUN_710392eb40((ulong)plVar9);
  }
  pcVar12 = "mnu_replay_detail_rec_info_on";
  pcVar15 = "mnu_replay_detail_rec_info_off";
  FUN_7101aca700((long)param_1,(byte ****)"set_parts_sub_btns_00","mnu_replay_detail_rec_info_on",
                 "mnu_replay_detail_rec_info_off",pppplVar16,param_6,param_7,param_8);
  FUN_7103776640(&local_a0,(long)plVar1,(byte ****)"set_parts_btn_09",pcVar12,pcVar15,pppplVar16,
                 param_6,param_7,param_8);
  FUN_7103776910(&local_570,(long)&local_a0,(long ****)"set_txt_settingtitle",pcVar12,pcVar15,
                 pppplVar16,param_6,param_7,param_8);
  uVar6 = local_98;
  local_a0 = &PTR_FUN_710523d988;
  local_98 = 0;
  if (uVar6 != 0) {
    uVar8 = *(ulong *)(uVar6 + 0x18);
    *(undefined ***)(uVar6 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar6 + 0x18) = 0;
    if (uVar8 != 0) {
      FUN_710392eb40(uVar8);
    }
    FUN_710392eb40(uVar6);
  }
  FUN_710377a120((long)&local_570,"mnu_replay_detail_rec_music",pcVar12,pcVar15,pppplVar16,param_6,
                 param_7,param_8);
  plVar9 = local_568;
  local_570 = (byte ***)&PTR_FUN_710523d9a8;
  local_568 = (long *)0x0;
  if (plVar9 != (long *)0x0) {
    FUN_710392eb40((ulong)plVar9);
  }
  pcVar12 = "mnu_replay_detail_rec_yes";
  pcVar15 = "mnu_replay_detail_rec_no";
  FUN_7101aca700((long)param_1,(byte ****)"set_parts_sub_btns_01","mnu_replay_detail_rec_yes",
                 "mnu_replay_detail_rec_no",pppplVar16,param_6,param_7,param_8);
  FUN_7103776640(&local_a0,(long)plVar1,(byte ****)"set_parts_btn_10",pcVar12,pcVar15,pppplVar16,
                 param_6,param_7,param_8);
  FUN_7103776910(&local_570,(long)&local_a0,(long ****)"set_txt_settingtitle",pcVar12,pcVar15,
                 pppplVar16,param_6,param_7,param_8);
  uVar6 = local_98;
  local_a0 = &PTR_FUN_710523d988;
  local_98 = 0;
  if (uVar6 != 0) {
    uVar8 = *(ulong *)(uVar6 + 0x18);
    *(undefined ***)(uVar6 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar6 + 0x18) = 0;
    if (uVar8 != 0) {
      FUN_710392eb40(uVar8);
    }
    FUN_710392eb40(uVar6);
  }
  FUN_710377a120((long)&local_570,"mnu_replay_detail_rec_se",pcVar12,pcVar15,pppplVar16,param_6,
                 param_7,param_8);
  plVar9 = local_568;
  local_570 = (byte ***)&PTR_FUN_710523d9a8;
  local_568 = (long *)0x0;
  if (plVar9 != (long *)0x0) {
    FUN_710392eb40((ulong)plVar9);
  }
  pcVar12 = "mnu_replay_detail_rec_yes";
  pcVar15 = "mnu_replay_detail_rec_no";
  FUN_7101aca700((long)param_1,(byte ****)"set_parts_sub_btns_02","mnu_replay_detail_rec_yes",
                 "mnu_replay_detail_rec_no",pppplVar16,param_6,param_7,param_8);
  FUN_7103776640(&local_a0,(long)plVar1,(byte ****)"set_parts_btn_11",pcVar12,pcVar15,pppplVar16,
                 param_6,param_7,param_8);
  FUN_7103776910(&local_570,(long)&local_a0,(long ****)"set_txt_settingtitle",pcVar12,pcVar15,
                 pppplVar16,param_6,param_7,param_8);
  uVar6 = local_98;
  local_a0 = &PTR_FUN_710523d988;
  local_98 = 0;
  if (uVar6 != 0) {
    uVar8 = *(ulong *)(uVar6 + 0x18);
    *(undefined ***)(uVar6 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar6 + 0x18) = 0;
    if (uVar8 != 0) {
      FUN_710392eb40(uVar8);
    }
    FUN_710392eb40(uVar6);
  }
  FUN_710377a120((long)&local_570,"mnu_replay_detail_rec_quality",pcVar12,pcVar15,pppplVar16,param_6
                 ,param_7,param_8);
  plVar9 = local_568;
  local_570 = (byte ***)&PTR_FUN_710523d9a8;
  local_568 = (long *)0x0;
  if (plVar9 != (long *)0x0) {
    FUN_710392eb40((ulong)plVar9);
  }
  pcVar12 = "mnu_replay_detail_rec_quality_high";
  pcVar15 = "mnu_replay_detail_rec_quality_normal";
  FUN_7101aca700((long)param_1,(byte ****)"set_parts_sub_btns_03",
                 "mnu_replay_detail_rec_quality_high","mnu_replay_detail_rec_quality_normal",
                 pppplVar16,param_6,param_7,param_8);
  FUN_7103776910(&local_570,(long)plVar1,(long ****)"set_txt_help_movset",pcVar12,pcVar15,pppplVar16
                 ,param_6,param_7,param_8);
  plVar9 = local_568;
  if ((byte ****)(param_1 + 0x5a) != &local_570) {
    local_568 = (long *)0x0;
    uVar6 = param_1[0x5b];
    param_1[0x5b] = (long)plVar9;
    if (uVar6 != 0) {
      FUN_710392eb40(uVar6);
    }
  }
  plVar9 = local_568;
  local_570 = (byte ***)&PTR_FUN_710523d9a8;
  local_568 = (long *)0x0;
  if (plVar9 != (long *)0x0) {
    FUN_710392eb40((ulong)plVar9);
  }
  local_560 = 1;
  local_55c = 1;
  local_55a = 1;
  local_570 = (byte ***)0x0;
  local_568 = (long *)0x101;
  local_558 = &DAT_41f0000000000000;
  local_550 = (byte ****)((ulong)local_550 & 0xffffffff00000000);
  local_520 = (long *)0x0;
  local_4f0 = (long *)0x0;
  local_4c0 = (long *)0x0;
  local_490 = (long *)0x0;
  local_460 = (long *)0x0;
  local_450 = 0;
  local_a0 = &PTR_FUN_71050a9948;
  local_80 = &local_a0;
  FUN_7101989a30((long *)&local_a0,alStack_4b0);
  if (&local_a0 == local_80) {
    pcVar19 = (code *)(*local_80)[4];
LAB_7101ac9950:
    (*pcVar19)();
  }
  else if (local_80 != (undefined ***)0x0) {
    pcVar19 = (code *)(*local_80)[5];
    goto LAB_7101ac9950;
  }
  FUN_7103776640(&local_a0,(long)plVar1,(byte ****)"set_parts_sub_btns_00",pcVar12,pcVar15,
                 pppplVar16,param_6,param_7,param_8);
  plVar9 = param_1 + 0x4e;
  ppppbVar14 = &local_570;
  FUN_7103770b30(plVar9,&local_a0,(long ****)"selector",ppppbVar14,pppplVar16,param_6,param_7,
                 param_8);
  FUN_71037717d0(plVar9,0,"set_parts_radiobtn_00",ppppbVar14,pppplVar16,param_6,param_7,param_8);
  pcVar12 = "set_parts_radiobtn_01";
  FUN_71037717d0(plVar9,1,"set_parts_radiobtn_01",ppppbVar14,pppplVar16,param_6,param_7,param_8);
  lVar5 = *(long *)(param_1[0x4e] + 0x1b8);
  if (lVar5 != 0) {
    lVar21 = param_1[0x4e] + 0x1b8;
    lVar20 = lVar21;
    lVar23 = lVar5;
    do {
      bVar4 = *(int *)(lVar23 + 0x20) < 0;
      if (!bVar4) {
        lVar20 = lVar23;
      }
      lVar23 = *(long *)(lVar23 + (ulong)bVar4 * 8);
    } while (lVar23 != 0);
    if (((lVar20 != lVar21) && (*(int *)(lVar20 + 0x20) < 1)) &&
       (plVar27 = *(long **)(lVar20 + 0x28), plVar27 != (long *)0x0)) {
      (**(code **)(*plVar27 + 0x208))(plVar27,0);
      pcVar12 = (char *)0x0;
      (**(code **)(*plVar27 + 0x388))(plVar27,1);
      lVar21 = *plVar9 + 0x1b8;
      lVar5 = *(long *)(*plVar9 + 0x1b8);
    }
    lVar20 = lVar21;
    if (lVar5 != 0) {
      do {
        if (0 < *(int *)(lVar5 + 0x20)) {
          lVar20 = lVar5;
        }
        lVar5 = *(long *)(lVar5 + (ulong)(*(int *)(lVar5 + 0x20) < 1) * 8);
      } while (lVar5 != 0);
      if (((lVar20 != lVar21) && (*(int *)(lVar20 + 0x20) < 2)) &&
         (plVar27 = *(long **)(lVar20 + 0x28), plVar27 != (long *)0x0)) {
        (**(code **)(*plVar27 + 0x208))(plVar27,0);
        pcVar12 = (char *)0x0;
        (**(code **)(*plVar27 + 0x388))(plVar27,1);
      }
    }
  }
  FUN_7103776640(&local_580,(long)plVar1,(byte ****)"set_parts_sub_btns_01",pcVar12,ppppbVar14,
                 pppplVar16,param_6,param_7,param_8);
  plVar27 = param_1 + 0x4f;
  ppppbVar14 = &local_570;
  FUN_7103770b30(plVar27,&local_580,(long ****)"selector",ppppbVar14,pppplVar16,param_6,param_7,
                 param_8);
  FUN_71037717d0(plVar27,0,"set_parts_radiobtn_00",ppppbVar14,pppplVar16,param_6,param_7,param_8);
  pcVar12 = "set_parts_radiobtn_01";
  FUN_71037717d0(plVar27,1,"set_parts_radiobtn_01",ppppbVar14,pppplVar16,param_6,param_7,param_8);
  lVar5 = *(long *)(param_1[0x4f] + 0x1b8);
  if (lVar5 != 0) {
    lVar21 = param_1[0x4f] + 0x1b8;
    lVar20 = lVar21;
    lVar23 = lVar5;
    do {
      bVar4 = *(int *)(lVar23 + 0x20) < 0;
      if (!bVar4) {
        lVar20 = lVar23;
      }
      lVar23 = *(long *)(lVar23 + (ulong)bVar4 * 8);
    } while (lVar23 != 0);
    if (((lVar20 != lVar21) && (*(int *)(lVar20 + 0x20) < 1)) &&
       (plVar28 = *(long **)(lVar20 + 0x28), plVar28 != (long *)0x0)) {
      (**(code **)(*plVar28 + 0x208))(plVar28,0);
      pcVar12 = (char *)0x0;
      (**(code **)(*plVar28 + 0x388))(plVar28,1);
      lVar21 = *plVar27 + 0x1b8;
      lVar5 = *(long *)(*plVar27 + 0x1b8);
    }
    lVar20 = lVar21;
    if (lVar5 != 0) {
      do {
        if (0 < *(int *)(lVar5 + 0x20)) {
          lVar20 = lVar5;
        }
        lVar5 = *(long *)(lVar5 + (ulong)(*(int *)(lVar5 + 0x20) < 1) * 8);
      } while (lVar5 != 0);
      if (((lVar20 != lVar21) && (*(int *)(lVar20 + 0x20) < 2)) &&
         (plVar28 = *(long **)(lVar20 + 0x28), plVar28 != (long *)0x0)) {
        (**(code **)(*plVar28 + 0x208))(plVar28,0);
        pcVar12 = (char *)0x0;
        (**(code **)(*plVar28 + 0x388))(plVar28,1);
      }
    }
  }
  FUN_7103776640(&local_590,(long)plVar1,(byte ****)"set_parts_sub_btns_02",pcVar12,ppppbVar14,
                 pppplVar16,param_6,param_7,param_8);
  plVar28 = param_1 + 0x50;
  ppppbVar14 = &local_570;
  FUN_7103770b30(plVar28,&local_590,(long ****)"selector",ppppbVar14,pppplVar16,param_6,param_7,
                 param_8);
  FUN_71037717d0(plVar28,0,"set_parts_radiobtn_00",ppppbVar14,pppplVar16,param_6,param_7,param_8);
  pcVar12 = "set_parts_radiobtn_01";
  FUN_71037717d0(plVar28,1,"set_parts_radiobtn_01",ppppbVar14,pppplVar16,param_6,param_7,param_8);
  lVar5 = *(long *)(param_1[0x50] + 0x1b8);
  if (lVar5 != 0) {
    lVar21 = param_1[0x50] + 0x1b8;
    lVar20 = lVar21;
    lVar23 = lVar5;
    do {
      bVar4 = *(int *)(lVar23 + 0x20) < 0;
      if (!bVar4) {
        lVar20 = lVar23;
      }
      lVar23 = *(long *)(lVar23 + (ulong)bVar4 * 8);
    } while (lVar23 != 0);
    if (((lVar20 != lVar21) && (*(int *)(lVar20 + 0x20) < 1)) &&
       (plVar29 = *(long **)(lVar20 + 0x28), plVar29 != (long *)0x0)) {
      (**(code **)(*plVar29 + 0x208))(plVar29,0);
      pcVar12 = (char *)0x0;
      (**(code **)(*plVar29 + 0x388))(plVar29,1);
      lVar21 = *plVar28 + 0x1b8;
      lVar5 = *(long *)(*plVar28 + 0x1b8);
    }
    lVar20 = lVar21;
    if (lVar5 != 0) {
      do {
        if (0 < *(int *)(lVar5 + 0x20)) {
          lVar20 = lVar5;
        }
        lVar5 = *(long *)(lVar5 + (ulong)(*(int *)(lVar5 + 0x20) < 1) * 8);
      } while (lVar5 != 0);
      if (((lVar20 != lVar21) && (*(int *)(lVar20 + 0x20) < 2)) &&
         (plVar29 = *(long **)(lVar20 + 0x28), plVar29 != (long *)0x0)) {
        (**(code **)(*plVar29 + 0x208))(plVar29,0);
        pcVar12 = (char *)0x0;
        (**(code **)(*plVar29 + 0x388))(plVar29,1);
      }
    }
  }
  FUN_7103776640(&local_5a0,(long)plVar1,(byte ****)"set_parts_sub_btns_03",pcVar12,ppppbVar14,
                 pppplVar16,param_6,param_7,param_8);
  plVar1 = param_1 + 0x51;
  ppppbVar14 = &local_570;
  FUN_7103770b30(plVar1,&local_5a0,(long ****)"selector",ppppbVar14,pppplVar16,param_6,param_7,
                 param_8);
  FUN_71037717d0(plVar1,0,"set_parts_radiobtn_00",ppppbVar14,pppplVar16,param_6,param_7,param_8);
  pcVar12 = "set_parts_radiobtn_01";
  FUN_71037717d0(plVar1,1,"set_parts_radiobtn_01",ppppbVar14,pppplVar16,param_6,param_7,param_8);
  lVar5 = *(long *)(param_1[0x51] + 0x1b8);
  if (lVar5 != 0) {
    lVar21 = param_1[0x51] + 0x1b8;
    lVar20 = lVar21;
    lVar23 = lVar5;
    do {
      bVar4 = *(int *)(lVar23 + 0x20) < 0;
      if (!bVar4) {
        lVar20 = lVar23;
      }
      lVar23 = *(long *)(lVar23 + (ulong)bVar4 * 8);
    } while (lVar23 != 0);
    if (((lVar20 != lVar21) && (*(int *)(lVar20 + 0x20) < 1)) &&
       (plVar29 = *(long **)(lVar20 + 0x28), plVar29 != (long *)0x0)) {
      (**(code **)(*plVar29 + 0x208))(plVar29,0);
      pcVar12 = (char *)0x0;
      (**(code **)(*plVar29 + 0x388))(plVar29,1);
      lVar21 = *plVar1 + 0x1b8;
      lVar5 = *(long *)(*plVar1 + 0x1b8);
    }
    lVar20 = lVar21;
    if (lVar5 != 0) {
      do {
        if (0 < *(int *)(lVar5 + 0x20)) {
          lVar20 = lVar5;
        }
        lVar5 = *(long *)(lVar5 + (ulong)(*(int *)(lVar5 + 0x20) < 1) * 8);
      } while (lVar5 != 0);
      if (((lVar20 != lVar21) && (*(int *)(lVar20 + 0x20) < 2)) &&
         (plVar29 = *(long **)(lVar20 + 0x28), plVar29 != (long *)0x0)) {
        (**(code **)(*plVar29 + 0x208))(plVar29,0);
        pcVar12 = (char *)0x0;
        (**(code **)(*plVar29 + 0x388))(plVar29,1);
      }
    }
  }
  (**(code **)(*(long *)*plVar25 + 0x60))((long *)*plVar25,0);
  (**(code **)(*(long *)*plVar26 + 0x60))((long *)*plVar26,0);
  (**(code **)(*(long *)*plVar9 + 0x60))((long *)*plVar9,0);
  (**(code **)(*(long *)*plVar27 + 0x60))((long *)*plVar27,0);
  (**(code **)(*(long *)*plVar28 + 0x60))((long *)*plVar28,0);
  (**(code **)(*(long *)*plVar1 + 0x60))((long *)*plVar1,0);
  uVar6 = local_598;
  local_5a0 = &PTR_FUN_710523d988;
  local_598 = 0;
  if (uVar6 != 0) {
    uVar8 = *(ulong *)(uVar6 + 0x18);
    *(undefined ***)(uVar6 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar6 + 0x18) = 0;
    if (uVar8 != 0) {
      FUN_710392eb40(uVar8);
    }
    FUN_710392eb40(uVar6);
  }
  uVar6 = local_588;
  local_590 = &PTR_FUN_710523d988;
  local_588 = 0;
  if (uVar6 != 0) {
    uVar8 = *(ulong *)(uVar6 + 0x18);
    *(undefined ***)(uVar6 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar6 + 0x18) = 0;
    if (uVar8 != 0) {
      FUN_710392eb40(uVar8);
    }
    FUN_710392eb40(uVar6);
  }
  uVar6 = local_578;
  local_580 = &PTR_FUN_710523d988;
  local_578 = 0;
  if (uVar6 != 0) {
    uVar8 = *(ulong *)(uVar6 + 0x18);
    *(undefined ***)(uVar6 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar6 + 0x18) = 0;
    if (uVar8 != 0) {
      FUN_710392eb40(uVar8);
    }
    FUN_710392eb40(uVar6);
  }
  uVar6 = local_98;
  local_a0 = &PTR_FUN_710523d988;
  local_98 = 0;
  if (uVar6 != 0) {
    uVar8 = *(ulong *)(uVar6 + 0x18);
    *(undefined ***)(uVar6 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar6 + 0x18) = 0;
    if (uVar8 != 0) {
      FUN_710392eb40(uVar8);
    }
    FUN_710392eb40(uVar6);
  }
  if (alStack_480 == local_460) {
    pcVar19 = *(code **)(*local_460 + 0x20);
LAB_7101ac9fa0:
    (*pcVar19)();
  }
  else if (local_460 != (long *)0x0) {
    pcVar19 = *(code **)(*local_460 + 0x28);
    goto LAB_7101ac9fa0;
  }
  if (alStack_4b0 == local_490) {
    pcVar19 = *(code **)(*local_490 + 0x20);
LAB_7101ac9fd0:
    (*pcVar19)();
  }
  else if (local_490 != (long *)0x0) {
    pcVar19 = *(code **)(*local_490 + 0x28);
    goto LAB_7101ac9fd0;
  }
  if (alStack_4e0 == local_4c0) {
    pcVar19 = *(code **)(*local_4c0 + 0x20);
LAB_7101aca000:
    (*pcVar19)();
  }
  else if (local_4c0 != (long *)0x0) {
    pcVar19 = *(code **)(*local_4c0 + 0x28);
    goto LAB_7101aca000;
  }
  if (alStack_510 == local_4f0) {
    pcVar19 = *(code **)(*local_4f0 + 0x20);
LAB_7101aca030:
    (*pcVar19)();
  }
  else if (local_4f0 != (long *)0x0) {
    pcVar19 = *(code **)(*local_4f0 + 0x28);
    goto LAB_7101aca030;
  }
  if (alStack_540 == local_520) {
    pcVar19 = *(code **)(*local_520 + 0x20);
LAB_7101aca060:
    (*pcVar19)();
  }
  else if (local_520 != (long *)0x0) {
    pcVar19 = *(code **)(*local_520 + 0x28);
    goto LAB_7101aca060;
  }
  if (alStack_350 == local_330) {
    pcVar19 = *(code **)(*local_330 + 0x20);
LAB_7101aca090:
    (*pcVar19)();
  }
  else if (local_330 != (long *)0x0) {
    pcVar19 = *(code **)(*local_330 + 0x28);
    goto LAB_7101aca090;
  }
  if (alStack_380 == local_360) {
    pcVar19 = *(code **)(*local_360 + 0x20);
LAB_7101aca0c0:
    (*pcVar19)();
  }
  else if (local_360 != (long *)0x0) {
    pcVar19 = *(code **)(*local_360 + 0x28);
    goto LAB_7101aca0c0;
  }
  if (alStack_3b0 == local_390) {
    pcVar19 = *(code **)(*local_390 + 0x20);
LAB_7101aca0f0:
    (*pcVar19)();
  }
  else if (local_390 != (long *)0x0) {
    pcVar19 = *(code **)(*local_390 + 0x28);
    goto LAB_7101aca0f0;
  }
  if (alStack_3e0 == local_3c0) {
    pcVar19 = *(code **)(*local_3c0 + 0x20);
LAB_7101aca120:
    (*pcVar19)();
  }
  else if (local_3c0 != (long *)0x0) {
    pcVar19 = *(code **)(*local_3c0 + 0x28);
    goto LAB_7101aca120;
  }
  if (alStack_410 == local_3f0) {
    pcVar19 = *(code **)(*local_3f0 + 0x20);
LAB_7101aca150:
    (*pcVar19)();
  }
  else if (local_3f0 != (long *)0x0) {
    pcVar19 = *(code **)(*local_3f0 + 0x28);
    goto LAB_7101aca150;
  }
  if (alStack_220 == local_200) {
    pcVar19 = *(code **)(*local_200 + 0x20);
LAB_7101aca180:
    (*pcVar19)();
  }
  else if (local_200 != (long *)0x0) {
    pcVar19 = *(code **)(*local_200 + 0x28);
    goto LAB_7101aca180;
  }
  if (alStack_250 == local_230) {
    pcVar19 = *(code **)(*local_230 + 0x20);
LAB_7101aca1b0:
    (*pcVar19)();
  }
  else if (local_230 != (long *)0x0) {
    pcVar19 = *(code **)(*local_230 + 0x28);
    goto LAB_7101aca1b0;
  }
  if (alStack_280 == local_260) {
    pcVar19 = *(code **)(*local_260 + 0x20);
LAB_7101aca1e0:
    (*pcVar19)();
  }
  else if (local_260 != (long *)0x0) {
    pcVar19 = *(code **)(*local_260 + 0x28);
    goto LAB_7101aca1e0;
  }
  if (alStack_2b0 == local_290) {
    pcVar19 = *(code **)(*local_290 + 0x20);
LAB_7101aca20c:
    (*pcVar19)();
  }
  else if (local_290 != (long *)0x0) {
    pcVar19 = *(code **)(*local_290 + 0x28);
    goto LAB_7101aca20c;
  }
  if ((long *)&local_2e0 == local_2c0) {
    pcVar19 = *(code **)(*local_2c0 + 0x20);
LAB_7101aca23c:
    (*pcVar19)();
  }
  else if (local_2c0 != (long *)0x0) {
    pcVar19 = *(code **)(*local_2c0 + 0x28);
    goto LAB_7101aca23c;
  }
  FUN_7103776910(&local_310,(long)param_3,(long ****)"submenu_btn_cursor_00",pcVar12,ppppbVar14,
                 pppplVar16,param_6,param_7,param_8);
  plVar1 = local_308;
  lVar5 = *local_308;
  if (lVar5 != 0) {
    *(byte *)(lVar5 + 0x58) = *(byte *)(lVar5 + 0x58) & 0xfe;
  }
  local_310 = &PTR_FUN_710523d9a8;
  local_308 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    FUN_710392eb40((ulong)plVar1);
  }
  FUN_7103776910(&local_310,(long)param_3,(long ****)"detail_btn_cursor_00",pcVar12,ppppbVar14,
                 pppplVar16,param_6,param_7,param_8);
  plVar1 = local_308;
  lVar5 = *local_308;
  if (lVar5 != 0) {
    *(byte *)(lVar5 + 0x58) = *(byte *)(lVar5 + 0x58) & 0xfe;
  }
  local_310 = &PTR_FUN_710523d9a8;
  local_308 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    FUN_710392eb40((ulong)plVar1);
  }
  FUN_7103776910(&local_310,(long)param_3,(long ****)"play_btn_cursor_00",pcVar12,ppppbVar14,
                 pppplVar16,param_6,param_7,param_8);
  plVar1 = local_308;
  lVar5 = *local_308;
  if (lVar5 != 0) {
    *(byte *)(lVar5 + 0x58) = *(byte *)(lVar5 + 0x58) & 0xfe;
  }
  local_310 = &PTR_FUN_710523d9a8;
  local_308 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    FUN_710392eb40((ulong)plVar1);
  }
  FUN_7103776640(&local_310,(long)param_3,(byte ****)"set_parts_btn_02",pcVar12,ppppbVar14,
                 pppplVar16,param_6,param_7,param_8);
  uVar6 = (ulong)local_308;
  FUN_7103778300(0x3f800000,(long)local_308,0x71043f05a6);
  local_310 = &PTR_FUN_710523d988;
  local_308 = (long *)0x0;
  if (uVar6 != 0) {
    uVar8 = *(ulong *)(uVar6 + 0x18);
    *(undefined ***)(uVar6 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar6 + 0x18) = 0;
    if (uVar8 != 0) {
      FUN_710392eb40(uVar8);
    }
    FUN_710392eb40(uVar6);
  }
  FUN_7103776640(&local_310,(long)param_3,(byte ****)"set_parts_btn_06",pcVar12,ppppbVar14,
                 pppplVar16,param_6,param_7,param_8);
  uVar6 = (ulong)local_308;
  FUN_7103778300(0x3f800000,(long)local_308,0x71043f05a6);
  local_310 = &PTR_FUN_710523d988;
  local_308 = (long *)0x0;
  if (uVar6 != 0) {
    uVar8 = *(ulong *)(uVar6 + 0x18);
    *(undefined ***)(uVar6 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar6 + 0x18) = 0;
    if (uVar8 != 0) {
      FUN_710392eb40(uVar8);
    }
    FUN_710392eb40(uVar6);
  }
  FUN_7103776640(&local_310,(long)param_3,(byte ****)"set_parts_btn_03",pcVar12,ppppbVar14,
                 pppplVar16,param_6,param_7,param_8);
  uVar6 = (ulong)local_308;
  FUN_7103778300(0x3f800000,(long)local_308,0x71042e6c31);
  local_310 = &PTR_FUN_710523d988;
  local_308 = (long *)0x0;
  if (uVar6 != 0) {
    uVar8 = *(ulong *)(uVar6 + 0x18);
    *(undefined ***)(uVar6 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar6 + 0x18) = 0;
    if (uVar8 != 0) {
      FUN_710392eb40(uVar8);
    }
    FUN_710392eb40(uVar6);
  }
  FUN_7103776640(&local_310,(long)param_3,(byte ****)"set_parts_btn_07",pcVar12,ppppbVar14,
                 pppplVar16,param_6,param_7,param_8);
  uVar6 = (ulong)local_308;
  FUN_7103778300(0x3f800000,(long)local_308,0x71042e6c31);
  local_310 = &PTR_FUN_710523d988;
  local_308 = (long *)0x0;
  if (uVar6 != 0) {
    uVar8 = *(ulong *)(uVar6 + 0x18);
    *(undefined ***)(uVar6 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar6 + 0x18) = 0;
    if (uVar8 != 0) {
      FUN_710392eb40(uVar8);
    }
    FUN_710392eb40(uVar6);
  }
  FUN_7103776640(&local_310,(long)param_3,(byte ****)"set_parts_detail_pane_00",pcVar12,ppppbVar14,
                 pppplVar16,param_6,param_7,param_8);
  uVar6 = (ulong)local_308;
  FUN_7103778300(0x3f800000,(long)local_308,0x71043ceeea);
  local_310 = &PTR_FUN_710523d988;
  local_308 = (long *)0x0;
  if (uVar6 != 0) {
    uVar8 = *(ulong *)(uVar6 + 0x18);
    *(undefined ***)(uVar6 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar6 + 0x18) = 0;
    if (uVar8 != 0) {
      FUN_710392eb40(uVar8);
    }
    FUN_710392eb40(uVar6);
  }
  FUN_7103776640(&local_310,(long)param_3,(byte ****)"set_parts_detail_panel",pcVar12,ppppbVar14,
                 pppplVar16,param_6,param_7,param_8);
  uVar6 = (ulong)local_308;
  if (param_1 + 0x5c != &local_310) {
    local_308 = (long *)0x0;
    uVar8 = param_1[0x5d];
    param_1[0x5d] = uVar6;
    if (uVar8 != 0) {
      uVar6 = *(ulong *)(uVar8 + 0x18);
      *(undefined ***)(uVar8 + 0x10) = &PTR_FUN_710523d9a8;
      *(undefined8 *)(uVar8 + 0x18) = 0;
      if (uVar6 != 0) {
        FUN_710392eb40(uVar6);
      }
      FUN_710392eb40(uVar8);
    }
  }
  uVar6 = (ulong)local_308;
  local_310 = &PTR_FUN_710523d988;
  local_308 = (long *)0x0;
  if (uVar6 != 0) {
    uVar8 = *(ulong *)(uVar6 + 0x18);
    *(undefined ***)(uVar6 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar6 + 0x18) = 0;
    if (uVar8 != 0) {
      FUN_710392eb40(uVar8);
    }
    FUN_710392eb40(uVar6);
  }
  lVar5 = param_1[0x5e];
  puVar24 = (undefined8 *)
            FUN_710392e290(0x10,0x88,(long ****)pcVar12,ppppbVar14,pppplVar16,param_6,param_7,
                           param_8);
  if (puVar24 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_440 = (byte ***)((ulong)local_440 & 0xffffffff00000000);
      local_310 = (undefined **)&DAT_00000088;
      pppplVar13 = (long ****)&local_310;
      uVar6 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_440);
      if (((uVar6 & 1) != 0) &&
         (puVar24 = (undefined8 *)
                    FUN_710392e290(0x10,0x88,pppplVar13,ppppbVar14,pppplVar16,param_6,param_7,
                                   param_8), puVar24 != (undefined8 *)0x0)) goto LAB_7101aca55c;
    }
    puVar24 = (undefined8 *)0x0;
  }
LAB_7101aca55c:
  pppplVar13 = (long ****)0x0;
  FUN_7101ad0e40(puVar24,lVar5,(long ****)0x0,ppppbVar14,pppplVar16,param_6,param_7,param_8);
  puVar24[2] = &DAT_7105333600;
  uVar3 = DAT_7105333664;
  *(undefined4 *)(puVar24 + 0xd) = DAT_7105333660;
  *(undefined4 *)((long)puVar24 + 0x6c) = uVar3;
  do {
    uVar17 = DAT_7105333650;
    cVar2 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(0x7105333650,0x10);
    if (bVar4) {
      DAT_7105333650 = 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0' || (uVar17 & 1) != 0);
  puVar24[9] = DAT_7105333648;
  DAT_7105333650 = 0;
  DAT_7105333648 = puVar24;
  FUN_71032caea0((long)puVar24,extraout_x1_02,pppplVar13,ppppbVar14,pppplVar16,param_6,param_7,
                 param_8);
  lVar5 = param_1[0x43];
  param_1[0x43] = (long)puVar24;
  if (lVar5 != 0) {
    FUN_71032cad20(lVar5);
  }
  FUN_7101ccce30(DAT_7105325ca8);
  if (puVar7 != (undefined8 *)0x0) {
    FUN_710392eb40((ulong)puVar7);
  }
  if (alStack_e0 == local_c0) {
    pcVar19 = *(code **)(*local_c0 + 0x20);
LAB_7101aca618:
    (*pcVar19)();
  }
  else if (local_c0 != (long *)0x0) {
    pcVar19 = *(code **)(*local_c0 + 0x28);
    goto LAB_7101aca618;
  }
  if (alStack_110 == local_f0) {
    pcVar19 = *(code **)(*local_f0 + 0x20);
LAB_7101aca648:
    (*pcVar19)();
  }
  else if (local_f0 != (long *)0x0) {
    pcVar19 = *(code **)(*local_f0 + 0x28);
    goto LAB_7101aca648;
  }
  if (alStack_140 == local_120) {
    pcVar19 = *(code **)(*local_120 + 0x20);
LAB_7101aca678:
    (*pcVar19)();
  }
  else if (local_120 != (long *)0x0) {
    pcVar19 = *(code **)(*local_120 + 0x28);
    goto LAB_7101aca678;
  }
  if (alStack_170 == local_150) {
    pcVar19 = *(code **)(*local_150 + 0x20);
  }
  else {
    if (local_150 == (long *)0x0) goto LAB_7101aca6ac;
    pcVar19 = *(code **)(*local_150 + 0x28);
  }
  (*pcVar19)();
LAB_7101aca6ac:
  if (alStack_1a0 == local_180) {
    pcVar19 = *(code **)(*local_180 + 0x20);
  }
  else {
    if (local_180 == (long *)0x0) {
      return;
    }
    pcVar19 = *(code **)(*local_180 + 0x28);
  }
  (*pcVar19)();
  return;
}

