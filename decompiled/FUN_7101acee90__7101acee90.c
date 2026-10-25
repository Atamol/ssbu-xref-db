// addr:      7101acee90
// offset:    0x1acee90
// name:      FUN_7101acee90
// mangled:   
// signature: undefined __cdecl FUN_7101acee90(long param_1, undefined8 * param_2, undefined * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_7101acee90(long param_1,undefined8 *param_2,undefined **param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  uint uVar1;
  bool bVar2;
  ulong uVar3;
  undefined8 extraout_x1;
  char *pcVar4;
  undefined8 uVar5;
  byte ****ppppbVar6;
  byte ****ppppbVar7;
  long lVar8;
  code *pcVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long *plVar15;
  long *plVar16;
  undefined8 *puVar17;
  long *plVar18;
  byte ***local_530;
  long *local_528;
  undefined4 local_520;
  undefined2 local_51c;
  undefined1 local_51a;
  undefined1 *local_518;
  undefined4 local_510;
  long alStack_500 [4];
  long *local_4e0;
  long alStack_4d0 [4];
  long *local_4b0;
  long alStack_4a0 [4];
  long *local_480;
  long alStack_470 [4];
  long *local_450;
  long alStack_440 [4];
  long *local_420;
  undefined4 local_410;
  byte ***local_400;
  undefined8 local_3f8;
  undefined4 local_3f0;
  undefined2 local_3ec;
  undefined1 local_3ea;
  undefined1 *local_3e8;
  undefined4 local_3e0;
  long alStack_3d0 [4];
  long *local_3b0;
  long alStack_3a0 [4];
  long *local_380;
  long alStack_370 [4];
  long *local_350;
  long alStack_340 [4];
  long *local_320;
  long alStack_310 [4];
  long *local_2f0;
  undefined4 local_2e0;
  byte ***local_2d0;
  ulong local_2c8;
  undefined4 local_2b4;
  long alStack_2a0 [4];
  long *local_280;
  long alStack_270 [4];
  long *local_250;
  long alStack_240 [4];
  long *local_220;
  long alStack_210 [4];
  long *local_1f0;
  long alStack_1e0 [4];
  long *local_1c0;
  byte ***local_1a0;
  ulong local_198;
  undefined4 local_190;
  undefined2 local_18c;
  undefined1 local_18a;
  undefined1 *local_188;
  undefined4 local_180;
  long alStack_170 [4];
  long *local_150;
  long alStack_140 [4];
  long *local_120;
  long alStack_110 [4];
  long *local_f0;
  long alStack_e0 [4];
  long *local_c0;
  long alStack_b0 [4];
  long *local_90;
  undefined4 local_80;
  undefined **local_70;
  ulong local_68;
  
  ppppbVar7 = &local_530;
  *(undefined2 *)(param_1 + 8) = 0x101;
  *(undefined1 *)(param_1 + 0x10) = 1;
  *(undefined4 *)(param_1 + 0x14) = 1;
  *(undefined1 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0x11000;
  lVar10 = **(long **)*param_2;
  *(undefined4 *)(*(long *)(lVar10 + 0x600) + 0x494) = 1;
  lVar8 = *(long *)(lVar10 + 0x608);
  lVar10 = *(long *)(lVar10 + 0x610);
  if (lVar8 != lVar10) {
    uVar11 = (lVar10 + -0x10) - lVar8;
    uVar1 = ((uint)(uVar11 >> 4) & 0xfffffff) + 1;
    if ((uVar1 & 3) != 0) {
      lVar13 = -((ulong)uVar1 & 3);
      do {
        plVar15 = (long *)(lVar8 + 8);
        lVar8 = lVar8 + 0x10;
        lVar13 = lVar13 + 1;
        *(undefined4 *)(*plVar15 + 0x494) = 1;
      } while (lVar13 != 0);
    }
    if (0x2f < uVar11) {
      do {
        *(undefined4 *)(*(long *)(lVar8 + 8) + 0x494) = 1;
        *(undefined4 *)(*(long *)(lVar8 + 0x18) + 0x494) = 1;
        *(undefined4 *)(*(long *)(lVar8 + 0x28) + 0x494) = 1;
        plVar15 = (long *)(lVar8 + 0x38);
        lVar8 = lVar8 + 0x40;
        *(undefined4 *)(*plVar15 + 0x494) = 1;
      } while (lVar10 != lVar8);
    }
  }
  puVar17 = (undefined8 *)*param_2;
  plVar16 = (long *)*puVar17;
  lVar8 = *(long *)(param_1 + 0x20);
  plVar15 = plVar16 + 1;
  FUN_71037760f0(*plVar16,0);
  if ((long *)(lVar8 + 0x120) != plVar15) {
    **(undefined8 **)(lVar8 + 0x128) = *(undefined8 *)plVar16[2];
    *(undefined8 *)(*(long *)(lVar8 + 0x128) + 8) = *(undefined8 *)(plVar16[2] + 8);
    lVar13 = plVar16[2];
    lVar10 = *(long *)(lVar8 + 0x128);
    if (lVar10 != lVar13) {
      **(undefined8 **)(lVar10 + 0x18) = **(undefined8 **)(lVar13 + 0x18);
      *(undefined8 *)(*(long *)(lVar10 + 0x18) + 8) = *(undefined8 *)(*(long *)(lVar13 + 0x18) + 8);
      *(undefined8 *)(*(long *)(lVar10 + 0x18) + 0x10) =
           *(undefined8 *)(*(long *)(lVar13 + 0x18) + 0x10);
      *(undefined8 *)(*(long *)(lVar10 + 0x18) + 0x18) =
           *(undefined8 *)(*(long *)(lVar13 + 0x18) + 0x18);
    }
  }
  FUN_7103776640(&local_70,lVar8 + 0x120,(byte ****)"set_btn_decide",param_3,param_4,param_5,param_6
                 ,param_7,param_8);
  FUN_710337d360(&local_70,extraout_x1,param_3,param_4,param_5,param_6,param_7,param_8);
  uVar11 = local_68;
  local_70 = &PTR_FUN_710523d988;
  local_68 = 0;
  if (uVar11 != 0) {
    uVar3 = *(ulong *)(uVar11 + 0x18);
    *(undefined ***)(uVar11 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar11 + 0x18) = 0;
    if (uVar3 != 0) {
      FUN_710392eb40(uVar3);
    }
    FUN_710392eb40(uVar11);
  }
  lVar10 = *(long *)*puVar17;
  *(undefined4 *)(*(long *)(lVar10 + 0x600) + 0x10) = 0x20;
  *(undefined4 *)(*(long *)(lVar10 + 0x600) + 0x14) = 0x40;
  *(undefined4 *)(*(long *)(lVar10 + 0x600) + 0x18) = 0x40000;
  *(undefined4 *)(*(long *)(lVar10 + 0x600) + 0x1c) = 0x10;
  *(undefined4 *)(*(long *)(lVar10 + 0x600) + 0x20) = 0x800008;
  *(undefined4 *)(*(long *)(lVar10 + 0x600) + 0x24) = 0x200002;
  local_1a0 = (byte ***)0x0;
  local_198 = 0x101;
  local_190 = 1;
  local_18c = 1;
  local_18a = 1;
  local_188 = &DAT_41f0000000000000;
  local_180 = 0;
  local_150 = (long *)0x0;
  local_120 = (long *)0x0;
  local_f0 = (long *)0x0;
  local_c0 = (long *)0x0;
  local_90 = (long *)0x0;
  local_80 = 0;
  FUN_710337df20((long)&local_1a0);
  FUN_7101989b70(&local_2d0,&local_1a0);
  plVar16 = (long *)(lVar8 + 0x138);
  ppppbVar6 = &local_2d0;
  local_2b4 = 0x43160000;
  FUN_7103770b30(plVar16,plVar15,(long ****)"selector_02",ppppbVar6,param_5,param_6,param_7,param_8)
  ;
  pcVar4 = "set_parts_btn_04";
  FUN_71037717d0(plVar16,0,"set_parts_btn_04",ppppbVar6,param_5,param_6,param_7,param_8);
  FUN_7103776640(&local_400,(long)plVar15,(byte ****)"set_parts_btn_04",pcVar4,ppppbVar6,param_5,
                 param_6,param_7,param_8);
  uVar11 = local_3f8;
  FUN_7103778300(0x3f800000,local_3f8,0x71043f0569);
  local_400 = (byte ***)&PTR_FUN_710523d988;
  local_3f8 = 0;
  if (uVar11 != 0) {
    uVar3 = *(ulong *)(uVar11 + 0x18);
    *(undefined ***)(uVar11 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar11 + 0x18) = 0;
    if (uVar3 != 0) {
      FUN_710392eb40(uVar3);
    }
    FUN_710392eb40(uVar11);
  }
  FUN_71037717d0(plVar16,1,"set_parts_btn_05",ppppbVar6,param_5,param_6,param_7,param_8);
  FUN_71037717d0(plVar16,2,"set_parts_btn_07",ppppbVar6,param_5,param_6,param_7,param_8);
  FUN_71037717d0(plVar16,3,"set_parts_btn_06",ppppbVar6,param_5,param_6,param_7,param_8);
  lVar10 = *(long *)(*plVar16 + 0x1b8);
  if (lVar10 != 0) {
    lVar13 = *plVar16 + 0x1b8;
    lVar12 = lVar13;
    lVar14 = lVar10;
    do {
      bVar2 = *(int *)(lVar14 + 0x20) < 0;
      if (!bVar2) {
        lVar12 = lVar14;
      }
      lVar14 = *(long *)(lVar14 + (ulong)bVar2 * 8);
    } while (lVar14 != 0);
    if (((lVar12 != lVar13) && (*(int *)(lVar12 + 0x20) < 1)) &&
       (plVar18 = *(long **)(lVar12 + 0x28), plVar18 != (long *)0x0)) {
      (**(code **)(*plVar18 + 0x1f8))(plVar18,1);
      (**(code **)(*plVar18 + 0x388))(plVar18,0,0);
      lVar13 = *plVar16 + 0x1b8;
      lVar10 = *(long *)(*plVar16 + 0x1b8);
    }
    lVar12 = lVar13;
    lVar14 = lVar10;
    if (lVar10 != 0) {
      do {
        if (0 < *(int *)(lVar14 + 0x20)) {
          lVar12 = lVar14;
        }
        lVar14 = *(long *)(lVar14 + (ulong)(*(int *)(lVar14 + 0x20) < 1) * 8);
      } while (lVar14 != 0);
      if (((lVar12 != lVar13) && (*(int *)(lVar12 + 0x20) < 2)) &&
         (plVar18 = *(long **)(lVar12 + 0x28), plVar18 != (long *)0x0)) {
        (**(code **)(*plVar18 + 0x1f8))(plVar18,1);
        (**(code **)(*plVar18 + 0x388))(plVar18,0,0);
        lVar13 = *plVar16 + 0x1b8;
        lVar10 = *(long *)(*plVar16 + 0x1b8);
      }
      lVar12 = lVar13;
      lVar14 = lVar10;
      if (lVar10 != 0) {
        do {
          if (1 < *(int *)(lVar14 + 0x20)) {
            lVar12 = lVar14;
          }
          lVar14 = *(long *)(lVar14 + (ulong)(*(int *)(lVar14 + 0x20) < 2) * 8);
        } while (lVar14 != 0);
        if (((lVar12 != lVar13) && (*(int *)(lVar12 + 0x20) < 3)) &&
           (plVar18 = *(long **)(lVar12 + 0x28), plVar18 != (long *)0x0)) {
          (**(code **)(*plVar18 + 0x1f8))(plVar18,1);
          (**(code **)(*plVar18 + 0x388))(plVar18,0,0);
          lVar13 = *plVar16 + 0x1b8;
          lVar10 = *(long *)(*plVar16 + 0x1b8);
        }
        lVar12 = lVar13;
        if (lVar10 != 0) {
          do {
            if (2 < *(int *)(lVar10 + 0x20)) {
              lVar12 = lVar10;
            }
            lVar10 = *(long *)(lVar10 + (ulong)(*(int *)(lVar10 + 0x20) < 3) * 8);
          } while (lVar10 != 0);
          if (((lVar12 != lVar13) && (*(int *)(lVar12 + 0x20) < 4)) &&
             (plVar16 = *(long **)(lVar12 + 0x28), plVar16 != (long *)0x0)) {
            (**(code **)(*plVar16 + 0x1f8))(plVar16,1);
            (**(code **)(*plVar16 + 0x388))(plVar16,0,0);
          }
        }
      }
    }
  }
  plVar16 = (long *)(lVar8 + 0x140);
  ppppbVar6 = &local_1a0;
  FUN_7103770b30(plVar16,plVar15,(long ****)"selector_03",ppppbVar6,param_5,param_6,param_7,param_8)
  ;
  FUN_71037717d0(plVar16,0,"set_parts_btn_09",ppppbVar6,param_5,param_6,param_7,param_8);
  FUN_71037717d0(plVar16,1,"set_parts_btn_10",ppppbVar6,param_5,param_6,param_7,param_8);
  FUN_71037717d0(plVar16,2,"set_parts_btn_11",ppppbVar6,param_5,param_6,param_7,param_8);
  lVar10 = *(long *)(*(long *)(lVar8 + 0x140) + 0x1b8);
  if (lVar10 != 0) {
    lVar13 = *(long *)(lVar8 + 0x140) + 0x1b8;
    lVar12 = lVar13;
    lVar14 = lVar10;
    do {
      bVar2 = *(int *)(lVar14 + 0x20) < 0;
      if (!bVar2) {
        lVar12 = lVar14;
      }
      lVar14 = *(long *)(lVar14 + (ulong)bVar2 * 8);
    } while (lVar14 != 0);
    if (((lVar12 != lVar13) && (*(int *)(lVar12 + 0x20) < 1)) &&
       (plVar18 = *(long **)(lVar12 + 0x28), plVar18 != (long *)0x0)) {
      (**(code **)(*plVar18 + 0x1f8))(plVar18,1);
      (**(code **)(*plVar18 + 0x388))(plVar18,0,0);
      lVar13 = *plVar16 + 0x1b8;
      lVar10 = *(long *)(*plVar16 + 0x1b8);
    }
    lVar12 = lVar13;
    lVar14 = lVar10;
    if (lVar10 != 0) {
      do {
        if (0 < *(int *)(lVar14 + 0x20)) {
          lVar12 = lVar14;
        }
        lVar14 = *(long *)(lVar14 + (ulong)(*(int *)(lVar14 + 0x20) < 1) * 8);
      } while (lVar14 != 0);
      if (((lVar12 != lVar13) && (*(int *)(lVar12 + 0x20) < 2)) &&
         (plVar18 = *(long **)(lVar12 + 0x28), plVar18 != (long *)0x0)) {
        (**(code **)(*plVar18 + 0x1f8))(plVar18,1);
        (**(code **)(*plVar18 + 0x388))(plVar18,0,0);
        lVar13 = *plVar16 + 0x1b8;
        lVar10 = *(long *)(*plVar16 + 0x1b8);
      }
      lVar12 = lVar13;
      if (lVar10 != 0) {
        do {
          if (1 < *(int *)(lVar10 + 0x20)) {
            lVar12 = lVar10;
          }
          lVar10 = *(long *)(lVar10 + (ulong)(*(int *)(lVar10 + 0x20) < 2) * 8);
        } while (lVar10 != 0);
        if (((lVar12 != lVar13) && (*(int *)(lVar12 + 0x20) < 3)) &&
           (plVar16 = *(long **)(lVar12 + 0x28), plVar16 != (long *)0x0)) {
          (**(code **)(*plVar16 + 0x1f8))(plVar16,1);
          (**(code **)(*plVar16 + 0x388))(plVar16,0,0);
        }
      }
    }
  }
  plVar16 = (long *)(lVar8 + 0x130);
  ppppbVar6 = &local_1a0;
  FUN_7103770b30(plVar16,plVar15,(long ****)"selector",ppppbVar6,param_5,param_6,param_7,param_8);
  FUN_71037717d0(plVar16,0,"set_parts_btn_00",ppppbVar6,param_5,param_6,param_7,param_8);
  FUN_71037717d0(plVar16,1,"set_parts_btn_01",ppppbVar6,param_5,param_6,param_7,param_8);
  FUN_71037717d0(plVar16,2,"set_parts_btn_02",ppppbVar6,param_5,param_6,param_7,param_8);
  FUN_71037717d0(plVar16,3,"set_parts_btn_03",ppppbVar6,param_5,param_6,param_7,param_8);
  FUN_71037717d0(plVar16,4,"set_btn_decide",ppppbVar6,param_5,param_6,param_7,param_8);
  lVar10 = *(long *)(*(long *)(lVar8 + 0x130) + 0x1b8);
  if (lVar10 != 0) {
    lVar13 = *(long *)(lVar8 + 0x130) + 0x1b8;
    lVar12 = lVar13;
    lVar14 = lVar10;
    do {
      bVar2 = *(int *)(lVar14 + 0x20) < 0;
      if (!bVar2) {
        lVar12 = lVar14;
      }
      lVar14 = *(long *)(lVar14 + (ulong)bVar2 * 8);
    } while (lVar14 != 0);
    if (((lVar12 != lVar13) && (*(int *)(lVar12 + 0x20) < 1)) &&
       (plVar18 = *(long **)(lVar12 + 0x28), plVar18 != (long *)0x0)) {
      (**(code **)(*plVar18 + 0x1f8))(plVar18,1);
      (**(code **)(*plVar18 + 0x388))(plVar18,0,0);
      lVar13 = *plVar16 + 0x1b8;
      lVar10 = *(long *)(*plVar16 + 0x1b8);
    }
    lVar12 = lVar13;
    lVar14 = lVar10;
    if (lVar10 != 0) {
      do {
        if (2 < *(int *)(lVar14 + 0x20)) {
          lVar12 = lVar14;
        }
        lVar14 = *(long *)(lVar14 + (ulong)(*(int *)(lVar14 + 0x20) < 3) * 8);
      } while (lVar14 != 0);
      if (((lVar12 != lVar13) && (*(int *)(lVar12 + 0x20) < 4)) &&
         (plVar18 = *(long **)(lVar12 + 0x28), plVar18 != (long *)0x0)) {
        (**(code **)(*plVar18 + 0x1f8))(plVar18,1);
        (**(code **)(*plVar18 + 0x388))(plVar18,0,0);
        lVar13 = *plVar16 + 0x1b8;
        lVar10 = *(long *)(*plVar16 + 0x1b8);
      }
      lVar12 = lVar13;
      lVar14 = lVar10;
      if (lVar10 != 0) {
        do {
          if (1 < *(int *)(lVar14 + 0x20)) {
            lVar12 = lVar14;
          }
          lVar14 = *(long *)(lVar14 + (ulong)(*(int *)(lVar14 + 0x20) < 2) * 8);
        } while (lVar14 != 0);
        if (((lVar12 != lVar13) && (*(int *)(lVar12 + 0x20) < 3)) &&
           (plVar18 = *(long **)(lVar12 + 0x28), plVar18 != (long *)0x0)) {
          (**(code **)(*plVar18 + 0x1f8))(plVar18,1);
          (**(code **)(*plVar18 + 0x388))(plVar18,0,0);
          lVar13 = *plVar16 + 0x1b8;
          lVar10 = *(long *)(*plVar16 + 0x1b8);
        }
        lVar12 = lVar13;
        lVar14 = lVar10;
        if (lVar10 != 0) {
          do {
            if (0 < *(int *)(lVar14 + 0x20)) {
              lVar12 = lVar14;
            }
            lVar14 = *(long *)(lVar14 + (ulong)(*(int *)(lVar14 + 0x20) < 1) * 8);
          } while (lVar14 != 0);
          if (((lVar12 != lVar13) && (*(int *)(lVar12 + 0x20) < 2)) &&
             (plVar18 = *(long **)(lVar12 + 0x28), plVar18 != (long *)0x0)) {
            (**(code **)(*plVar18 + 0x1f8))(plVar18,1);
            (**(code **)(*plVar18 + 0x388))(plVar18,0,0);
            lVar13 = *plVar16 + 0x1b8;
            lVar10 = *(long *)(*plVar16 + 0x1b8);
          }
          lVar12 = lVar13;
          if (lVar10 != 0) {
            do {
              if (3 < *(int *)(lVar10 + 0x20)) {
                lVar12 = lVar10;
              }
              lVar10 = *(long *)(lVar10 + (ulong)(*(int *)(lVar10 + 0x20) < 4) * 8);
            } while (lVar10 != 0);
            if (((lVar12 != lVar13) && (*(int *)(lVar12 + 0x20) < 5)) &&
               (plVar16 = *(long **)(lVar12 + 0x28), plVar16 != (long *)0x0)) {
              (**(code **)(*plVar16 + 0x1f8))(plVar16,1);
              (**(code **)(*plVar16 + 0x388))(plVar16,0,0);
            }
          }
        }
      }
    }
  }
  local_400 = (byte ***)0x0;
  local_3f8 = 0x101;
  local_3f0 = 1;
  local_3ec = 1;
  local_3ea = 1;
  local_3e8 = &DAT_41f0000000000000;
  local_3e0 = 0;
  local_3b0 = (long *)0x0;
  local_380 = (long *)0x0;
  local_350 = (long *)0x0;
  local_320 = (long *)0x0;
  local_2f0 = (long *)0x0;
  local_2e0 = 0;
  FUN_710337df20((long)&local_400);
  plVar16 = (long *)(lVar8 + 0x148);
  ppppbVar6 = &local_400;
  local_3f8._0_3_ = CONCAT12(1,(undefined2)local_3f8);
  FUN_7103770b30(plVar16,plVar15,(long ****)"selector_04",ppppbVar6,param_5,param_6,param_7,param_8)
  ;
  FUN_71037717d0(plVar16,0,"set_parts_csr_l",ppppbVar6,param_5,param_6,param_7,param_8);
  uVar5 = 1;
  FUN_7103771930(*(long *)(lVar8 + 0x148),0,(long ****)&DAT_00000008,(byte ****)0x1,param_5,param_6,
                 param_7,param_8);
  FUN_71037717d0(plVar16,1,"set_parts_csr_r",uVar5,param_5,param_6,param_7,param_8);
  ppppbVar6 = (byte ****)0x1;
  FUN_7103771930(*(long *)(lVar8 + 0x148),1,(long ****)&DAT_00000009,(byte ****)0x1,param_5,param_6,
                 param_7,param_8);
  FUN_7103771d60(&local_530,*(long *)(lVar8 + 0x148),(long ****)0x0,ppppbVar6,param_5,param_6,
                 param_7,param_8);
  plVar18 = local_528;
  local_528 = (long *)*local_528;
  if (local_528 != (long *)0x0) {
    (**(code **)(*local_528 + 0x268))(local_528,1,1);
  }
  local_530 = (byte ***)&PTR_FUN_710523d9c8;
  local_528 = (long *)0x0;
  if (plVar18 != (long *)0x0) {
    FUN_710392eb40((ulong)plVar18);
  }
  FUN_7103771d60(&local_530,*plVar16,(long ****)0x1,ppppbVar6,param_5,param_6,param_7,param_8);
  plVar16 = local_528;
  plVar18 = (long *)*local_528;
  if (plVar18 != (long *)0x0) {
    (**(code **)(*plVar18 + 0x268))(plVar18,1,1);
  }
  local_530 = (byte ***)&PTR_FUN_710523d9c8;
  local_528 = (long *)0x0;
  if (plVar16 != (long *)0x0) {
    FUN_710392eb40((ulong)plVar16);
  }
  FUN_7103778300(0x3f800000,*(long *)(lVar8 + 0x128),0x710436cc36);
  (**(code **)(**(long **)(lVar8 + 0x130) + 0x70))(*(long **)(lVar8 + 0x130),0);
  (**(code **)(**(long **)(lVar8 + 0x130) + 0x60))(*(long **)(lVar8 + 0x130),0);
  (**(code **)(**(long **)(lVar8 + 0x138) + 0x70))(*(long **)(lVar8 + 0x138),0);
  (**(code **)(**(long **)(lVar8 + 0x138) + 0x60))(*(long **)(lVar8 + 0x138),0);
  (**(code **)(**(long **)(lVar8 + 0x140) + 0x70))(*(long **)(lVar8 + 0x140),0);
  (**(code **)(**(long **)(lVar8 + 0x140) + 0x60))(*(long **)(lVar8 + 0x140),0);
  (**(code **)(**(long **)(lVar8 + 0x148) + 0x70))(*(long **)(lVar8 + 0x148),0);
  (**(code **)(**(long **)(lVar8 + 0x148) + 0x60))(*(long **)(lVar8 + 0x148),0);
  local_530 = (byte ***)0x0;
  local_520 = 1;
  local_51c = 1;
  local_51a = 1;
  local_518 = &DAT_41f0000000000000;
  local_510 = 0;
  local_4e0 = (long *)0x0;
  local_4b0 = (long *)0x0;
  local_480 = (long *)0x0;
  local_450 = (long *)0x0;
  local_420 = (long *)0x0;
  local_410 = 0;
  local_528 = (long *)&DAT_01000101;
  FUN_7103770b30((long *)(lVar8 + 0x150),plVar15,(long ****)"selector_01",&local_530,param_5,param_6
                 ,param_7,param_8);
  pcVar4 = "set_parts_key";
  FUN_71037717d0((long *)(lVar8 + 0x150),0,"set_parts_key",ppppbVar7,param_5,param_6,param_7,param_8
                );
  (**(code **)(**(long **)(lVar8 + 0x150) + 0x60))(*(long **)(lVar8 + 0x150),1);
  if (alStack_440 == local_420) {
    pcVar9 = *(code **)(*local_420 + 0x20);
LAB_7101acfadc:
    (*pcVar9)();
  }
  else if (local_420 != (long *)0x0) {
    pcVar9 = *(code **)(*local_420 + 0x28);
    goto LAB_7101acfadc;
  }
  if (alStack_470 == local_450) {
    pcVar9 = *(code **)(*local_450 + 0x20);
LAB_7101acfb0c:
    (*pcVar9)();
  }
  else if (local_450 != (long *)0x0) {
    pcVar9 = *(code **)(*local_450 + 0x28);
    goto LAB_7101acfb0c;
  }
  if (alStack_4a0 == local_480) {
    pcVar9 = *(code **)(*local_480 + 0x20);
LAB_7101acfb3c:
    (*pcVar9)();
  }
  else if (local_480 != (long *)0x0) {
    pcVar9 = *(code **)(*local_480 + 0x28);
    goto LAB_7101acfb3c;
  }
  if (alStack_4d0 == local_4b0) {
    pcVar9 = *(code **)(*local_4b0 + 0x20);
LAB_7101acfb6c:
    (*pcVar9)();
  }
  else if (local_4b0 != (long *)0x0) {
    pcVar9 = *(code **)(*local_4b0 + 0x28);
    goto LAB_7101acfb6c;
  }
  if (alStack_500 == local_4e0) {
    pcVar9 = *(code **)(*local_4e0 + 0x20);
LAB_7101acfb9c:
    (*pcVar9)();
  }
  else if (local_4e0 != (long *)0x0) {
    pcVar9 = *(code **)(*local_4e0 + 0x28);
    goto LAB_7101acfb9c;
  }
  if (alStack_310 == local_2f0) {
    pcVar9 = *(code **)(*local_2f0 + 0x20);
LAB_7101acfbcc:
    (*pcVar9)();
  }
  else if (local_2f0 != (long *)0x0) {
    pcVar9 = *(code **)(*local_2f0 + 0x28);
    goto LAB_7101acfbcc;
  }
  if (alStack_340 == local_320) {
    pcVar9 = *(code **)(*local_320 + 0x20);
LAB_7101acfbfc:
    (*pcVar9)();
  }
  else if (local_320 != (long *)0x0) {
    pcVar9 = *(code **)(*local_320 + 0x28);
    goto LAB_7101acfbfc;
  }
  if (alStack_370 == local_350) {
    pcVar9 = *(code **)(*local_350 + 0x20);
LAB_7101acfc2c:
    (*pcVar9)();
  }
  else if (local_350 != (long *)0x0) {
    pcVar9 = *(code **)(*local_350 + 0x28);
    goto LAB_7101acfc2c;
  }
  if (alStack_3a0 == local_380) {
    pcVar9 = *(code **)(*local_380 + 0x20);
LAB_7101acfc5c:
    (*pcVar9)();
  }
  else if (local_380 != (long *)0x0) {
    pcVar9 = *(code **)(*local_380 + 0x28);
    goto LAB_7101acfc5c;
  }
  if (alStack_3d0 == local_3b0) {
    pcVar9 = *(code **)(*local_3b0 + 0x20);
LAB_7101acfc8c:
    (*pcVar9)();
  }
  else if (local_3b0 != (long *)0x0) {
    pcVar9 = *(code **)(*local_3b0 + 0x28);
    goto LAB_7101acfc8c;
  }
  if (alStack_1e0 == local_1c0) {
    pcVar9 = *(code **)(*local_1c0 + 0x20);
LAB_7101acfcbc:
    (*pcVar9)();
  }
  else if (local_1c0 != (long *)0x0) {
    pcVar9 = *(code **)(*local_1c0 + 0x28);
    goto LAB_7101acfcbc;
  }
  if (alStack_210 == local_1f0) {
    pcVar9 = *(code **)(*local_1f0 + 0x20);
LAB_7101acfcec:
    (*pcVar9)();
  }
  else if (local_1f0 != (long *)0x0) {
    pcVar9 = *(code **)(*local_1f0 + 0x28);
    goto LAB_7101acfcec;
  }
  if (alStack_240 == local_220) {
    pcVar9 = *(code **)(*local_220 + 0x20);
LAB_7101acfd1c:
    (*pcVar9)();
  }
  else if (local_220 != (long *)0x0) {
    pcVar9 = *(code **)(*local_220 + 0x28);
    goto LAB_7101acfd1c;
  }
  if (alStack_270 == local_250) {
    pcVar9 = *(code **)(*local_250 + 0x20);
LAB_7101acfd4c:
    (*pcVar9)();
  }
  else if (local_250 != (long *)0x0) {
    pcVar9 = *(code **)(*local_250 + 0x28);
    goto LAB_7101acfd4c;
  }
  if (alStack_2a0 == local_280) {
    pcVar9 = *(code **)(*local_280 + 0x20);
LAB_7101acfd7c:
    (*pcVar9)();
  }
  else if (local_280 != (long *)0x0) {
    pcVar9 = *(code **)(*local_280 + 0x28);
    goto LAB_7101acfd7c;
  }
  if (alStack_b0 == local_90) {
    pcVar9 = *(code **)(*local_90 + 0x20);
LAB_7101acfdac:
    (*pcVar9)();
  }
  else if (local_90 != (long *)0x0) {
    pcVar9 = *(code **)(*local_90 + 0x28);
    goto LAB_7101acfdac;
  }
  if (alStack_e0 == local_c0) {
    pcVar9 = *(code **)(*local_c0 + 0x20);
LAB_7101acfddc:
    (*pcVar9)();
  }
  else if (local_c0 != (long *)0x0) {
    pcVar9 = *(code **)(*local_c0 + 0x28);
    goto LAB_7101acfddc;
  }
  if (alStack_110 == local_f0) {
    pcVar9 = *(code **)(*local_f0 + 0x20);
LAB_7101acfe0c:
    (*pcVar9)();
  }
  else if (local_f0 != (long *)0x0) {
    pcVar9 = *(code **)(*local_f0 + 0x28);
    goto LAB_7101acfe0c;
  }
  if (alStack_140 == local_120) {
    pcVar9 = *(code **)(*local_120 + 0x20);
LAB_7101acfe3c:
    (*pcVar9)();
  }
  else if (local_120 != (long *)0x0) {
    pcVar9 = *(code **)(*local_120 + 0x28);
    goto LAB_7101acfe3c;
  }
  if (alStack_170 == local_150) {
    pcVar9 = *(code **)(*local_150 + 0x20);
  }
  else {
    if (local_150 == (long *)0x0) goto LAB_7101acfe70;
    pcVar9 = *(code **)(*local_150 + 0x28);
  }
  (*pcVar9)();
LAB_7101acfe70:
  FUN_7103776910(&local_1a0,(long)plVar15,(long ****)"set_txt_help_00",pcVar4,ppppbVar7,param_5,
                 param_6,param_7,param_8);
  uVar11 = local_198;
  if ((byte ****)(lVar8 + 0x238) != &local_1a0) {
    local_198 = 0;
    uVar3 = *(ulong *)(lVar8 + 0x240);
    *(ulong *)(lVar8 + 0x240) = uVar11;
    if (uVar3 != 0) {
      FUN_710392eb40(uVar3);
    }
  }
  uVar11 = local_198;
  local_1a0 = (byte ***)&PTR_FUN_710523d9a8;
  local_198 = 0;
  if (uVar11 != 0) {
    FUN_710392eb40(uVar11);
  }
  FUN_7103776910(&local_1a0,(long)plVar15,(long ****)"set_txt_help_01",pcVar4,ppppbVar7,param_5,
                 param_6,param_7,param_8);
  uVar11 = local_198;
  if ((byte ****)(lVar8 + 0x248) != &local_1a0) {
    local_198 = 0;
    uVar3 = *(ulong *)(lVar8 + 0x250);
    *(ulong *)(lVar8 + 0x250) = uVar11;
    if (uVar3 != 0) {
      FUN_710392eb40(uVar3);
    }
  }
  uVar11 = local_198;
  local_1a0 = (byte ***)&PTR_FUN_710523d9a8;
  local_198 = 0;
  if (uVar11 != 0) {
    FUN_710392eb40(uVar11);
  }
  FUN_7103776640(&local_2d0,(long)plVar15,(byte ****)"set_parts_caption_00",pcVar4,ppppbVar7,param_5
                 ,param_6,param_7,param_8);
  FUN_7103776910(&local_1a0,(long)&local_2d0,(long ****)"set_txt_help",pcVar4,ppppbVar7,param_5,
                 param_6,param_7,param_8);
  uVar11 = local_198;
  if ((byte ****)(lVar8 + 600) != &local_1a0) {
    local_198 = 0;
    uVar3 = *(ulong *)(lVar8 + 0x260);
    *(ulong *)(lVar8 + 0x260) = uVar11;
    if (uVar3 != 0) {
      FUN_710392eb40(uVar3);
    }
  }
  uVar11 = local_198;
  local_1a0 = (byte ***)&PTR_FUN_710523d9a8;
  local_198 = 0;
  if (uVar11 != 0) {
    FUN_710392eb40(uVar11);
  }
  uVar11 = local_2c8;
  local_2d0 = (byte ***)&PTR_FUN_710523d988;
  local_2c8 = 0;
  if (uVar11 != 0) {
    uVar3 = *(ulong *)(uVar11 + 0x18);
    *(undefined ***)(uVar11 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar11 + 0x18) = 0;
    if (uVar3 != 0) {
      FUN_710392eb40(uVar3);
    }
    FUN_710392eb40(uVar11);
  }
  FUN_7103776640(&local_2d0,(long)plVar15,(byte ****)"set_parts_caption_00",pcVar4,ppppbVar7,param_5
                 ,param_6,param_7,param_8);
  FUN_7103776910(&local_1a0,(long)&local_2d0,(long ****)"set_pic_icon",pcVar4,ppppbVar7,param_5,
                 param_6,param_7,param_8);
  uVar11 = local_198;
  if ((byte ****)(lVar8 + 0x268) != &local_1a0) {
    local_198 = 0;
    uVar3 = *(ulong *)(lVar8 + 0x270);
    *(ulong *)(lVar8 + 0x270) = uVar11;
    if (uVar3 != 0) {
      FUN_710392eb40(uVar3);
    }
  }
  uVar11 = local_198;
  local_1a0 = (byte ***)&PTR_FUN_710523d9a8;
  local_198 = 0;
  if (uVar11 != 0) {
    FUN_710392eb40(uVar11);
  }
  uVar11 = local_2c8;
  local_2d0 = (byte ***)&PTR_FUN_710523d988;
  local_2c8 = 0;
  if (uVar11 != 0) {
    uVar3 = *(ulong *)(uVar11 + 0x18);
    *(undefined ***)(uVar11 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar11 + 0x18) = 0;
    if (uVar3 != 0) {
      FUN_710392eb40(uVar3);
    }
    FUN_710392eb40(uVar11);
  }
  FUN_7103776640(&local_1a0,(long)plVar15,(byte ****)"btn_00_cursor",pcVar4,ppppbVar7,param_5,
                 param_6,param_7,param_8);
  uVar11 = local_198;
  if ((byte ****)(lVar8 + 0x278) != &local_1a0) {
    local_198 = 0;
    uVar3 = *(ulong *)(lVar8 + 0x280);
    *(ulong *)(lVar8 + 0x280) = uVar11;
    if (uVar3 != 0) {
      uVar11 = *(ulong *)(uVar3 + 0x18);
      *(undefined ***)(uVar3 + 0x10) = &PTR_FUN_710523d9a8;
      *(undefined8 *)(uVar3 + 0x18) = 0;
      if (uVar11 != 0) {
        FUN_710392eb40(uVar11);
      }
      FUN_710392eb40(uVar3);
    }
  }
  uVar11 = local_198;
  local_1a0 = (byte ***)&PTR_FUN_710523d988;
  local_198 = 0;
  if (uVar11 != 0) {
    uVar3 = *(ulong *)(uVar11 + 0x18);
    *(undefined ***)(uVar11 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar11 + 0x18) = 0;
    if (uVar3 != 0) {
      FUN_710392eb40(uVar3);
    }
    FUN_710392eb40(uVar11);
  }
  FUN_7103776640(&local_2d0,(long)plVar15,(byte ****)"set_parts_btn_00",pcVar4,ppppbVar7,param_5,
                 param_6,param_7,param_8);
  FUN_7103776910(&local_1a0,(long)&local_2d0,(long ****)"set_txt_filter_00_old",pcVar4,ppppbVar7,
                 param_5,param_6,param_7,param_8);
  uVar11 = local_198;
  if ((byte ****)(lVar8 + 0x158) != &local_1a0) {
    local_198 = 0;
    uVar3 = *(ulong *)(lVar8 + 0x160);
    *(ulong *)(lVar8 + 0x160) = uVar11;
    if (uVar3 != 0) {
      FUN_710392eb40(uVar3);
    }
  }
  uVar11 = local_198;
  local_1a0 = (byte ***)&PTR_FUN_710523d9a8;
  local_198 = 0;
  if (uVar11 != 0) {
    FUN_710392eb40(uVar11);
  }
  uVar11 = local_2c8;
  local_2d0 = (byte ***)&PTR_FUN_710523d988;
  local_2c8 = 0;
  if (uVar11 != 0) {
    uVar3 = *(ulong *)(uVar11 + 0x18);
    *(undefined ***)(uVar11 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar11 + 0x18) = 0;
    if (uVar3 != 0) {
      FUN_710392eb40(uVar3);
    }
    FUN_710392eb40(uVar11);
  }
  FUN_7103776640(&local_2d0,(long)plVar15,(byte ****)"set_parts_btn_00",pcVar4,ppppbVar7,param_5,
                 param_6,param_7,param_8);
  FUN_7103776910(&local_1a0,(long)&local_2d0,(long ****)"set_txt_filter_00",pcVar4,ppppbVar7,param_5
                 ,param_6,param_7,param_8);
  uVar11 = local_198;
  if ((byte ****)(lVar8 + 0x168) != &local_1a0) {
    local_198 = 0;
    uVar3 = *(ulong *)(lVar8 + 0x170);
    *(ulong *)(lVar8 + 0x170) = uVar11;
    if (uVar3 != 0) {
      FUN_710392eb40(uVar3);
    }
  }
  uVar11 = local_198;
  local_1a0 = (byte ***)&PTR_FUN_710523d9a8;
  local_198 = 0;
  if (uVar11 != 0) {
    FUN_710392eb40(uVar11);
  }
  uVar11 = local_2c8;
  local_2d0 = (byte ***)&PTR_FUN_710523d988;
  local_2c8 = 0;
  if (uVar11 != 0) {
    uVar3 = *(ulong *)(uVar11 + 0x18);
    *(undefined ***)(uVar11 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar11 + 0x18) = 0;
    if (uVar3 != 0) {
      FUN_710392eb40(uVar3);
    }
    FUN_710392eb40(uVar11);
  }
  FUN_7103776640(&local_1a0,(long)plVar15,(byte ****)"set_parts_btn_00",pcVar4,ppppbVar7,param_5,
                 param_6,param_7,param_8);
  uVar11 = local_198;
  if ((byte ****)(lVar8 + 0x178) != &local_1a0) {
    local_198 = 0;
    uVar3 = *(ulong *)(lVar8 + 0x180);
    *(ulong *)(lVar8 + 0x180) = uVar11;
    if (uVar3 != 0) {
      uVar11 = *(ulong *)(uVar3 + 0x18);
      *(undefined ***)(uVar3 + 0x10) = &PTR_FUN_710523d9a8;
      *(undefined8 *)(uVar3 + 0x18) = 0;
      if (uVar11 != 0) {
        FUN_710392eb40(uVar11);
      }
      FUN_710392eb40(uVar3);
    }
  }
  uVar11 = local_198;
  local_1a0 = (byte ***)&PTR_FUN_710523d988;
  local_198 = 0;
  if (uVar11 != 0) {
    uVar3 = *(ulong *)(uVar11 + 0x18);
    *(undefined ***)(uVar11 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar11 + 0x18) = 0;
    if (uVar3 != 0) {
      FUN_710392eb40(uVar3);
    }
    FUN_710392eb40(uVar11);
  }
  *(undefined4 *)(lVar8 + 0x188) = 0;
  FUN_7103776640(&local_2d0,(long)plVar15,(byte ****)"set_parts_btn_01",pcVar4,ppppbVar7,param_5,
                 param_6,param_7,param_8);
  FUN_7103776910(&local_1a0,(long)&local_2d0,(long ****)"set_txt_filter_00_old",pcVar4,ppppbVar7,
                 param_5,param_6,param_7,param_8);
  uVar11 = local_198;
  if ((byte ****)(lVar8 + 400) != &local_1a0) {
    local_198 = 0;
    uVar3 = *(ulong *)(lVar8 + 0x198);
    *(ulong *)(lVar8 + 0x198) = uVar11;
    if (uVar3 != 0) {
      FUN_710392eb40(uVar3);
    }
  }
  uVar11 = local_198;
  local_1a0 = (byte ***)&PTR_FUN_710523d9a8;
  local_198 = 0;
  if (uVar11 != 0) {
    FUN_710392eb40(uVar11);
  }
  uVar11 = local_2c8;
  local_2d0 = (byte ***)&PTR_FUN_710523d988;
  local_2c8 = 0;
  if (uVar11 != 0) {
    uVar3 = *(ulong *)(uVar11 + 0x18);
    *(undefined ***)(uVar11 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar11 + 0x18) = 0;
    if (uVar3 != 0) {
      FUN_710392eb40(uVar3);
    }
    FUN_710392eb40(uVar11);
  }
  FUN_7103776640(&local_2d0,(long)plVar15,(byte ****)"set_parts_btn_01",pcVar4,ppppbVar7,param_5,
                 param_6,param_7,param_8);
  FUN_7103776910(&local_1a0,(long)&local_2d0,(long ****)"set_txt_filter_00",pcVar4,ppppbVar7,param_5
                 ,param_6,param_7,param_8);
  uVar11 = local_198;
  if ((byte ****)(lVar8 + 0x1a0) != &local_1a0) {
    local_198 = 0;
    uVar3 = *(ulong *)(lVar8 + 0x1a8);
    *(ulong *)(lVar8 + 0x1a8) = uVar11;
    if (uVar3 != 0) {
      FUN_710392eb40(uVar3);
    }
  }
  uVar11 = local_198;
  local_1a0 = (byte ***)&PTR_FUN_710523d9a8;
  local_198 = 0;
  if (uVar11 != 0) {
    FUN_710392eb40(uVar11);
  }
  uVar11 = local_2c8;
  local_2d0 = (byte ***)&PTR_FUN_710523d988;
  local_2c8 = 0;
  if (uVar11 != 0) {
    uVar3 = *(ulong *)(uVar11 + 0x18);
    *(undefined ***)(uVar11 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar11 + 0x18) = 0;
    if (uVar3 != 0) {
      FUN_710392eb40(uVar3);
    }
    FUN_710392eb40(uVar11);
  }
  FUN_7103776640(&local_1a0,(long)plVar15,(byte ****)"set_parts_btn_01",pcVar4,ppppbVar7,param_5,
                 param_6,param_7,param_8);
  uVar11 = local_198;
  if ((byte ****)(lVar8 + 0x1b0) != &local_1a0) {
    local_198 = 0;
    uVar3 = *(ulong *)(lVar8 + 0x1b8);
    *(ulong *)(lVar8 + 0x1b8) = uVar11;
    if (uVar3 != 0) {
      uVar11 = *(ulong *)(uVar3 + 0x18);
      *(undefined ***)(uVar3 + 0x10) = &PTR_FUN_710523d9a8;
      *(undefined8 *)(uVar3 + 0x18) = 0;
      if (uVar11 != 0) {
        FUN_710392eb40(uVar11);
      }
      FUN_710392eb40(uVar3);
    }
  }
  uVar11 = local_198;
  local_1a0 = (byte ***)&PTR_FUN_710523d988;
  local_198 = 0;
  if (uVar11 != 0) {
    uVar3 = *(ulong *)(uVar11 + 0x18);
    *(undefined ***)(uVar11 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar11 + 0x18) = 0;
    if (uVar3 != 0) {
      FUN_710392eb40(uVar3);
    }
    FUN_710392eb40(uVar11);
  }
  *(undefined4 *)(lVar8 + 0x1c0) = 1;
  FUN_7103776640(&local_2d0,(long)plVar15,(byte ****)"set_parts_btn_02",pcVar4,ppppbVar7,param_5,
                 param_6,param_7,param_8);
  FUN_7103776910(&local_1a0,(long)&local_2d0,(long ****)"set_txt_filter_00_old",pcVar4,ppppbVar7,
                 param_5,param_6,param_7,param_8);
  uVar11 = local_198;
  if ((byte ****)(lVar8 + 0x1c8) != &local_1a0) {
    local_198 = 0;
    uVar3 = *(ulong *)(lVar8 + 0x1d0);
    *(ulong *)(lVar8 + 0x1d0) = uVar11;
    if (uVar3 != 0) {
      FUN_710392eb40(uVar3);
    }
  }
  uVar11 = local_198;
  local_1a0 = (byte ***)&PTR_FUN_710523d9a8;
  local_198 = 0;
  if (uVar11 != 0) {
    FUN_710392eb40(uVar11);
  }
  uVar11 = local_2c8;
  local_2d0 = (byte ***)&PTR_FUN_710523d988;
  local_2c8 = 0;
  if (uVar11 != 0) {
    uVar3 = *(ulong *)(uVar11 + 0x18);
    *(undefined ***)(uVar11 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar11 + 0x18) = 0;
    if (uVar3 != 0) {
      FUN_710392eb40(uVar3);
    }
    FUN_710392eb40(uVar11);
  }
  FUN_7103776640(&local_2d0,(long)plVar15,(byte ****)"set_parts_btn_02",pcVar4,ppppbVar7,param_5,
                 param_6,param_7,param_8);
  FUN_7103776910(&local_1a0,(long)&local_2d0,(long ****)"set_txt_filter_00",pcVar4,ppppbVar7,param_5
                 ,param_6,param_7,param_8);
  uVar11 = local_198;
  if ((byte ****)(lVar8 + 0x1d8) != &local_1a0) {
    local_198 = 0;
    uVar3 = *(ulong *)(lVar8 + 0x1e0);
    *(ulong *)(lVar8 + 0x1e0) = uVar11;
    if (uVar3 != 0) {
      FUN_710392eb40(uVar3);
    }
  }
  uVar11 = local_198;
  local_1a0 = (byte ***)&PTR_FUN_710523d9a8;
  local_198 = 0;
  if (uVar11 != 0) {
    FUN_710392eb40(uVar11);
  }
  uVar11 = local_2c8;
  local_2d0 = (byte ***)&PTR_FUN_710523d988;
  local_2c8 = 0;
  if (uVar11 != 0) {
    uVar3 = *(ulong *)(uVar11 + 0x18);
    *(undefined ***)(uVar11 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar11 + 0x18) = 0;
    if (uVar3 != 0) {
      FUN_710392eb40(uVar3);
    }
    FUN_710392eb40(uVar11);
  }
  FUN_7103776640(&local_1a0,(long)plVar15,(byte ****)"set_parts_btn_02",pcVar4,ppppbVar7,param_5,
                 param_6,param_7,param_8);
  uVar11 = local_198;
  if ((byte ****)(lVar8 + 0x1e8) != &local_1a0) {
    local_198 = 0;
    uVar3 = *(ulong *)(lVar8 + 0x1f0);
    *(ulong *)(lVar8 + 0x1f0) = uVar11;
    if (uVar3 != 0) {
      uVar11 = *(ulong *)(uVar3 + 0x18);
      *(undefined ***)(uVar3 + 0x10) = &PTR_FUN_710523d9a8;
      *(undefined8 *)(uVar3 + 0x18) = 0;
      if (uVar11 != 0) {
        FUN_710392eb40(uVar11);
      }
      FUN_710392eb40(uVar3);
    }
  }
  uVar11 = local_198;
  local_1a0 = (byte ***)&PTR_FUN_710523d988;
  local_198 = 0;
  if (uVar11 != 0) {
    uVar3 = *(ulong *)(uVar11 + 0x18);
    *(undefined ***)(uVar11 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar11 + 0x18) = 0;
    if (uVar3 != 0) {
      FUN_710392eb40(uVar3);
    }
    FUN_710392eb40(uVar11);
  }
  *(undefined4 *)(lVar8 + 0x1f8) = 2;
  FUN_7103776640(&local_2d0,(long)plVar15,(byte ****)"set_parts_btn_03",pcVar4,ppppbVar7,param_5,
                 param_6,param_7,param_8);
  FUN_7103776910(&local_1a0,(long)&local_2d0,(long ****)"set_txt_filter_00_old",pcVar4,ppppbVar7,
                 param_5,param_6,param_7,param_8);
  uVar11 = local_198;
  if ((byte ****)(lVar8 + 0x200) != &local_1a0) {
    local_198 = 0;
    uVar3 = *(ulong *)(lVar8 + 0x208);
    *(ulong *)(lVar8 + 0x208) = uVar11;
    if (uVar3 != 0) {
      FUN_710392eb40(uVar3);
    }
  }
  uVar11 = local_198;
  local_1a0 = (byte ***)&PTR_FUN_710523d9a8;
  local_198 = 0;
  if (uVar11 != 0) {
    FUN_710392eb40(uVar11);
  }
  uVar11 = local_2c8;
  local_2d0 = (byte ***)&PTR_FUN_710523d988;
  local_2c8 = 0;
  if (uVar11 != 0) {
    uVar3 = *(ulong *)(uVar11 + 0x18);
    *(undefined ***)(uVar11 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar11 + 0x18) = 0;
    if (uVar3 != 0) {
      FUN_710392eb40(uVar3);
    }
    FUN_710392eb40(uVar11);
  }
  FUN_7103776640(&local_2d0,(long)plVar15,(byte ****)"set_parts_btn_03",pcVar4,ppppbVar7,param_5,
                 param_6,param_7,param_8);
  FUN_7103776910(&local_1a0,(long)&local_2d0,(long ****)"set_txt_filter_00",pcVar4,ppppbVar7,param_5
                 ,param_6,param_7,param_8);
  uVar11 = local_198;
  if ((byte ****)(lVar8 + 0x210) != &local_1a0) {
    local_198 = 0;
    uVar3 = *(ulong *)(lVar8 + 0x218);
    *(ulong *)(lVar8 + 0x218) = uVar11;
    if (uVar3 != 0) {
      FUN_710392eb40(uVar3);
    }
  }
  uVar11 = local_198;
  local_1a0 = (byte ***)&PTR_FUN_710523d9a8;
  local_198 = 0;
  if (uVar11 != 0) {
    FUN_710392eb40(uVar11);
  }
  uVar11 = local_2c8;
  local_2d0 = (byte ***)&PTR_FUN_710523d988;
  local_2c8 = 0;
  if (uVar11 != 0) {
    uVar3 = *(ulong *)(uVar11 + 0x18);
    *(undefined ***)(uVar11 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar11 + 0x18) = 0;
    if (uVar3 != 0) {
      FUN_710392eb40(uVar3);
    }
    FUN_710392eb40(uVar11);
  }
  FUN_7103776640(&local_1a0,(long)plVar15,(byte ****)"set_parts_btn_03",pcVar4,ppppbVar7,param_5,
                 param_6,param_7,param_8);
  uVar11 = local_198;
  if ((byte ****)(lVar8 + 0x220) != &local_1a0) {
    local_198 = 0;
    uVar3 = *(ulong *)(lVar8 + 0x228);
    *(ulong *)(lVar8 + 0x228) = uVar11;
    if (uVar3 != 0) {
      uVar11 = *(ulong *)(uVar3 + 0x18);
      *(undefined ***)(uVar3 + 0x10) = &PTR_FUN_710523d9a8;
      *(undefined8 *)(uVar3 + 0x18) = 0;
      if (uVar11 != 0) {
        FUN_710392eb40(uVar11);
      }
      FUN_710392eb40(uVar3);
    }
  }
  uVar11 = local_198;
  local_1a0 = (byte ***)&PTR_FUN_710523d988;
  local_198 = 0;
  if (uVar11 != 0) {
    uVar3 = *(ulong *)(uVar11 + 0x18);
    *(undefined ***)(uVar11 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar11 + 0x18) = 0;
    if (uVar3 != 0) {
      FUN_710392eb40(uVar3);
    }
    FUN_710392eb40(uVar11);
  }
  *(undefined4 *)(lVar8 + 0x230) = 3;
  FUN_7103776640(&local_1a0,(long)plVar15,(byte ****)"set_parts_btn_09",pcVar4,ppppbVar7,param_5,
                 param_6,param_7,param_8);
  uVar11 = local_198;
  FUN_7103778300(0x3f800000,local_198,0x7104329b34);
  local_1a0 = (byte ***)&PTR_FUN_710523d988;
  local_198 = 0;
  if (uVar11 != 0) {
    uVar3 = *(ulong *)(uVar11 + 0x18);
    *(undefined ***)(uVar11 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar11 + 0x18) = 0;
    if (uVar3 != 0) {
      FUN_710392eb40(uVar3);
    }
    FUN_710392eb40(uVar11);
  }
  FUN_7103776640(&local_1a0,(long)plVar15,(byte ****)"set_parts_btn_10",pcVar4,ppppbVar7,param_5,
                 param_6,param_7,param_8);
  uVar11 = local_198;
  FUN_7103778300(0x3f800000,local_198,0x71043dfbde);
  local_1a0 = (byte ***)&PTR_FUN_710523d988;
  local_198 = 0;
  if (uVar11 != 0) {
    uVar3 = *(ulong *)(uVar11 + 0x18);
    *(undefined ***)(uVar11 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar11 + 0x18) = 0;
    if (uVar3 != 0) {
      FUN_710392eb40(uVar3);
    }
    FUN_710392eb40(uVar11);
  }
  FUN_7103776640(&local_1a0,(long)plVar15,(byte ****)"set_parts_btn_11",pcVar4,ppppbVar7,param_5,
                 param_6,param_7,param_8);
  uVar11 = local_198;
  FUN_7103778300(0x3f800000,local_198,0x71042c4937);
  local_1a0 = (byte ***)&PTR_FUN_710523d988;
  local_198 = 0;
  if (uVar11 != 0) {
    uVar3 = *(ulong *)(uVar11 + 0x18);
    *(undefined ***)(uVar11 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar11 + 0x18) = 0;
    if (uVar3 != 0) {
      FUN_710392eb40(uVar3);
    }
    FUN_710392eb40(uVar11);
  }
  FUN_71037780e0(&local_1a0,(long)plVar15,(long ****)"in_l_00",pcVar4,ppppbVar7,param_5,param_6,
                 param_7,param_8);
  FUN_710377b140((long)&local_1a0);
  uVar11 = local_198;
  local_1a0 = (byte ***)&PTR_FUN_710523d9e8;
  local_198 = 0;
  if (uVar11 != 0) {
    FUN_710392eb40(uVar11);
  }
  FUN_71037780e0(&local_1a0,(long)plVar15,(long ****)"out_r_00",pcVar4,ppppbVar7,param_5,param_6,
                 param_7,param_8);
  FUN_710377b140((long)&local_1a0);
  uVar11 = local_198;
  local_1a0 = (byte ***)&PTR_FUN_710523d9e8;
  local_198 = 0;
  if (uVar11 != 0) {
    FUN_710392eb40(uVar11);
  }
  FUN_71037780e0(&local_1a0,(long)plVar15,(long ****)"out_r_01",pcVar4,ppppbVar7,param_5,param_6,
                 param_7,param_8);
  FUN_710377b140((long)&local_1a0);
  uVar11 = local_198;
  local_1a0 = (byte ***)&PTR_FUN_710523d9e8;
  local_198 = 0;
  if (uVar11 != 0) {
    FUN_710392eb40(uVar11);
  }
  return;
}

