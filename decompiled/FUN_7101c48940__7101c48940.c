// addr:      7101c48940
// offset:    0x1c48940
// name:      FUN_7101c48940
// mangled:   
// signature: undefined __cdecl FUN_7101c48940(long param_1, undefined1 param_2, undefined * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_7101c48940(long param_1,undefined1 param_2,undefined **param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  undefined1 *puVar4;
  ulong uVar5;
  long *plVar6;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 extraout_x1_02;
  undefined8 extraout_x1_03;
  byte ****ppppbVar7;
  undefined8 extraout_x1_04;
  undefined8 extraout_x1_05;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long *plVar13;
  long lVar14;
  ulong uVar15;
  long *plVar16;
  char *pcVar17;
  long lVar18;
  undefined **local_c0;
  long *local_b8;
  undefined **local_b0;
  long *local_a8;
  undefined **local_a0;
  ulong local_98;
  undefined **local_90;
  ulong local_88;
  undefined **local_80;
  ulong local_78;
  undefined **local_70;
  ulong local_68;
  
  FUN_71032d6810(param_1,0,param_3,param_4,param_5,param_6,param_7,param_8);
  lVar18 = *(long *)(param_1 + 0x20);
  *(undefined1 *)(lVar18 + 0x101) = param_2;
  *(undefined1 *)(lVar18 + 0x102) = 0;
  uVar3 = FUN_7101797350(0);
  uVar15 = uVar3 & 0xffffffff;
  uVar8 = extraout_x1;
  if (((DAT_71053144d8 & 1) == 0) &&
     (iVar2 = __cxa_guard_acquire(&DAT_71053144d8), uVar8 = extraout_x1_04, iVar2 != 0)) {
    FUN_7101764000();
    param_3 = &PTR_LOOP_7104f17000;
    FUN_71000001c0();
    __cxa_guard_release(&DAT_71053144d8);
    uVar8 = extraout_x1_05;
  }
  puVar4 = DAT_7105306980;
  if ((((ulong)DAT_7105306980 & 0xff00000000000000) == 0xc100000000000000) &&
     (((ulong)DAT_7105306980 & 0xffffffffff) != 0)) {
    lVar14 = *(long *)(*(long *)(DAT_710532f730 + 8) + 0x168);
    uVar1 = FUN_71032632a0(lVar14,(ulong)DAT_7105306980);
    if ((uVar1 & 1) != 0) {
      puVar4 = FUN_71032631a0(lVar14,0x11b1ccb807);
    }
    param_3 = (undefined **)0x0;
    uVar15 = FUN_7101797560(puVar4,3,0);
    uVar15 = (ulong)((uint)uVar3 & (uint)uVar15);
    uVar8 = extraout_x1_00;
  }
  FUN_7103776290(&local_a0,uVar8,(long ****)param_3,param_4,param_5,param_6,param_7,param_8);
  FUN_7103776290(&local_90,extraout_x1_01,(long ****)param_3,param_4,param_5,param_6,param_7,param_8
                );
  FUN_7103776290(&local_80,extraout_x1_02,(long ****)param_3,param_4,param_5,param_6,param_7,param_8
                );
  FUN_7103776290(&local_70,extraout_x1_03,(long ****)param_3,param_4,param_5,param_6,param_7,param_8
                );
  plVar13 = (long *)(lVar18 + 0xe8);
  uVar8 = 1;
  lVar14 = lVar18 + 0xd8;
  FUN_7103771d60(&local_c0,*plVar13,(long ****)0x1,param_4,param_5,param_6,param_7,param_8);
  plVar16 = local_b8;
  if (*local_b8 == 0) {
    ppppbVar7 = (byte ****)&DAT_7104867c2e;
  }
  else {
    ppppbVar7 = *(byte *****)(*local_b8 + 0x88);
  }
  FUN_7103776640(&local_b0,lVar14,ppppbVar7,uVar8,param_4,param_5,param_6,param_7,param_8);
  uVar3 = local_98;
  local_98 = (ulong)local_a8;
  local_a8 = (long *)0x0;
  if (uVar3 != 0) {
    uVar5 = *(ulong *)(uVar3 + 0x18);
    *(undefined ***)(uVar3 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar3 + 0x18) = 0;
    if (uVar5 != 0) {
      FUN_710392eb40(uVar5);
    }
    FUN_710392eb40(uVar3);
  }
  local_b0 = &PTR_FUN_710523d988;
  local_a8 = (long *)0x0;
  local_c0 = &PTR_FUN_710523d9c8;
  local_b8 = (long *)0x0;
  if (plVar16 != (long *)0x0) {
    FUN_710392eb40((ulong)plVar16);
  }
  uVar8 = 2;
  FUN_7103771d60(&local_c0,*plVar13,(long ****)0x2,param_4,param_5,param_6,param_7,param_8);
  plVar16 = local_b8;
  if (*local_b8 == 0) {
    ppppbVar7 = (byte ****)&DAT_7104867c2e;
  }
  else {
    ppppbVar7 = *(byte *****)(*local_b8 + 0x88);
  }
  FUN_7103776640(&local_b0,lVar14,ppppbVar7,uVar8,param_4,param_5,param_6,param_7,param_8);
  uVar3 = local_88;
  local_88 = (ulong)local_a8;
  local_a8 = (long *)0x0;
  if (uVar3 != 0) {
    uVar5 = *(ulong *)(uVar3 + 0x18);
    *(undefined ***)(uVar3 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar3 + 0x18) = 0;
    if (uVar5 != 0) {
      FUN_710392eb40(uVar5);
    }
    FUN_710392eb40(uVar3);
  }
  local_b0 = &PTR_FUN_710523d988;
  local_a8 = (long *)0x0;
  local_c0 = &PTR_FUN_710523d9c8;
  local_b8 = (long *)0x0;
  if (plVar16 != (long *)0x0) {
    FUN_710392eb40((ulong)plVar16);
  }
  uVar8 = 3;
  FUN_7103771d60(&local_c0,*plVar13,(long ****)0x3,param_4,param_5,param_6,param_7,param_8);
  plVar16 = local_b8;
  if (*local_b8 == 0) {
    ppppbVar7 = (byte ****)&DAT_7104867c2e;
  }
  else {
    ppppbVar7 = *(byte *****)(*local_b8 + 0x88);
  }
  FUN_7103776640(&local_b0,lVar14,ppppbVar7,uVar8,param_4,param_5,param_6,param_7,param_8);
  uVar3 = local_78;
  local_78 = (ulong)local_a8;
  local_a8 = (long *)0x0;
  if (uVar3 != 0) {
    uVar5 = *(ulong *)(uVar3 + 0x18);
    *(undefined ***)(uVar3 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar3 + 0x18) = 0;
    if (uVar5 != 0) {
      FUN_710392eb40(uVar5);
    }
    FUN_710392eb40(uVar3);
  }
  local_b0 = &PTR_FUN_710523d988;
  local_a8 = (long *)0x0;
  local_c0 = &PTR_FUN_710523d9c8;
  local_b8 = (long *)0x0;
  if (plVar16 != (long *)0x0) {
    FUN_710392eb40((ulong)plVar16);
  }
  uVar8 = 4;
  FUN_7103771d60(&local_c0,*plVar13,(long ****)&DAT_00000004,param_4,param_5,param_6,param_7,param_8
                );
  plVar16 = local_b8;
  if (*local_b8 == 0) {
    ppppbVar7 = (byte ****)&DAT_7104867c2e;
  }
  else {
    ppppbVar7 = *(byte *****)(*local_b8 + 0x88);
  }
  FUN_7103776640(&local_b0,lVar14,ppppbVar7,uVar8,param_4,param_5,param_6,param_7,param_8);
  uVar3 = local_68;
  local_68 = (ulong)local_a8;
  local_a8 = (long *)0x0;
  if (uVar3 != 0) {
    uVar5 = *(ulong *)(uVar3 + 0x18);
    *(undefined ***)(uVar3 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar3 + 0x18) = 0;
    if (uVar5 != 0) {
      FUN_710392eb40(uVar5);
    }
    FUN_710392eb40(uVar3);
  }
  local_b0 = &PTR_FUN_710523d988;
  local_a8 = (long *)0x0;
  local_c0 = &PTR_FUN_710523d9c8;
  local_b8 = (long *)0x0;
  if (plVar16 != (long *)0x0) {
    FUN_710392eb40((ulong)plVar16);
  }
  if ((uVar15 & 1) == 0) {
    FUN_7103778300(0x3f800000,*(long *)(lVar18 + 0xe0),0x71043e02dd);
    lVar11 = *(long *)(*plVar13 + 0x1b8);
    if (lVar11 != 0) {
      lVar9 = *plVar13 + 0x1b8;
      lVar10 = lVar9;
      lVar12 = lVar11;
      do {
        if (0 < *(int *)(lVar12 + 0x20)) {
          lVar10 = lVar12;
        }
        lVar12 = *(long *)(lVar12 + (ulong)(*(int *)(lVar12 + 0x20) < 1) * 8);
      } while (lVar12 != 0);
      if (((lVar10 != lVar9) && (*(int *)(lVar10 + 0x20) < 2)) &&
         (plVar16 = *(long **)(lVar10 + 0x28), plVar16 != (long *)0x0)) {
        (**(code **)(*plVar16 + 0x1f8))(plVar16,1);
        uVar8 = 0;
        (**(code **)(*plVar16 + 0x388))(plVar16,0);
        lVar9 = *plVar13 + 0x1b8;
        lVar11 = *(long *)(*plVar13 + 0x1b8);
      }
      lVar10 = lVar9;
      lVar12 = lVar11;
      if (lVar11 != 0) {
        do {
          if (1 < *(int *)(lVar12 + 0x20)) {
            lVar10 = lVar12;
          }
          lVar12 = *(long *)(lVar12 + (ulong)(*(int *)(lVar12 + 0x20) < 2) * 8);
        } while (lVar12 != 0);
        if (((lVar10 != lVar9) && (*(int *)(lVar10 + 0x20) < 3)) &&
           (plVar16 = *(long **)(lVar10 + 0x28), plVar16 != (long *)0x0)) {
          (**(code **)(*plVar16 + 0x1f8))(plVar16,1);
          uVar8 = 0;
          (**(code **)(*plVar16 + 0x388))(plVar16,0);
          lVar9 = *plVar13 + 0x1b8;
          lVar11 = *(long *)(*plVar13 + 0x1b8);
        }
        lVar10 = lVar9;
        lVar12 = lVar11;
        if (lVar11 != 0) {
          do {
            if (2 < *(int *)(lVar12 + 0x20)) {
              lVar10 = lVar12;
            }
            lVar12 = *(long *)(lVar12 + (ulong)(*(int *)(lVar12 + 0x20) < 3) * 8);
          } while (lVar12 != 0);
          if (((lVar10 != lVar9) && (*(int *)(lVar10 + 0x20) < 4)) &&
             (plVar16 = *(long **)(lVar10 + 0x28), plVar16 != (long *)0x0)) {
            (**(code **)(*plVar16 + 0x1f8))(plVar16,0);
            uVar8 = 0;
            (**(code **)(*plVar16 + 0x388))(plVar16,1);
            lVar9 = *plVar13 + 0x1b8;
            lVar11 = *(long *)(*plVar13 + 0x1b8);
          }
          lVar10 = lVar9;
          if (lVar11 != 0) {
            do {
              if (3 < *(int *)(lVar11 + 0x20)) {
                lVar10 = lVar11;
              }
              lVar11 = *(long *)(lVar11 + (ulong)(*(int *)(lVar11 + 0x20) < 4) * 8);
            } while (lVar11 != 0);
            if (((lVar10 != lVar9) && (*(int *)(lVar10 + 0x20) < 5)) &&
               (plVar16 = *(long **)(lVar10 + 0x28), plVar16 != (long *)0x0)) {
              (**(code **)(*plVar16 + 0x1f8))(plVar16,0);
              uVar8 = 0;
              (**(code **)(*plVar16 + 0x388))(plVar16,1);
            }
          }
        }
      }
    }
    pcVar17 = "size_type_00";
  }
  else {
    FUN_7103778300(0x3f800000,*(long *)(lVar18 + 0xe0),0x710439d5d0);
    lVar11 = *(long *)(*plVar13 + 0x1b8);
    if (lVar11 != 0) {
      lVar9 = *plVar13 + 0x1b8;
      lVar10 = lVar9;
      lVar12 = lVar11;
      do {
        if (0 < *(int *)(lVar12 + 0x20)) {
          lVar10 = lVar12;
        }
        lVar12 = *(long *)(lVar12 + (ulong)(*(int *)(lVar12 + 0x20) < 1) * 8);
      } while (lVar12 != 0);
      if (((lVar10 != lVar9) && (*(int *)(lVar10 + 0x20) < 2)) &&
         (plVar16 = *(long **)(lVar10 + 0x28), plVar16 != (long *)0x0)) {
        (**(code **)(*plVar16 + 0x1f8))(plVar16,0);
        uVar8 = 0;
        (**(code **)(*plVar16 + 0x388))(plVar16,1);
        lVar9 = *plVar13 + 0x1b8;
        lVar11 = *(long *)(*plVar13 + 0x1b8);
      }
      lVar10 = lVar9;
      lVar12 = lVar11;
      if (lVar11 != 0) {
        do {
          if (1 < *(int *)(lVar12 + 0x20)) {
            lVar10 = lVar12;
          }
          lVar12 = *(long *)(lVar12 + (ulong)(*(int *)(lVar12 + 0x20) < 2) * 8);
        } while (lVar12 != 0);
        if (((lVar10 != lVar9) && (*(int *)(lVar10 + 0x20) < 3)) &&
           (plVar16 = *(long **)(lVar10 + 0x28), plVar16 != (long *)0x0)) {
          (**(code **)(*plVar16 + 0x1f8))(plVar16,1);
          uVar8 = 0;
          (**(code **)(*plVar16 + 0x388))(plVar16,0);
          lVar9 = *plVar13 + 0x1b8;
          lVar11 = *(long *)(*plVar13 + 0x1b8);
        }
        lVar10 = lVar9;
        lVar12 = lVar11;
        if (lVar11 != 0) {
          do {
            if (2 < *(int *)(lVar12 + 0x20)) {
              lVar10 = lVar12;
            }
            lVar12 = *(long *)(lVar12 + (ulong)(*(int *)(lVar12 + 0x20) < 3) * 8);
          } while (lVar12 != 0);
          if (((lVar10 != lVar9) && (*(int *)(lVar10 + 0x20) < 4)) &&
             (plVar16 = *(long **)(lVar10 + 0x28), plVar16 != (long *)0x0)) {
            (**(code **)(*plVar16 + 0x1f8))(plVar16,1);
            uVar8 = 0;
            (**(code **)(*plVar16 + 0x388))(plVar16,0);
            lVar9 = *plVar13 + 0x1b8;
            lVar11 = *(long *)(*plVar13 + 0x1b8);
          }
          lVar10 = lVar9;
          if (lVar11 != 0) {
            do {
              if (3 < *(int *)(lVar11 + 0x20)) {
                lVar10 = lVar11;
              }
              lVar11 = *(long *)(lVar11 + (ulong)(*(int *)(lVar11 + 0x20) < 4) * 8);
            } while (lVar11 != 0);
            if (((lVar10 != lVar9) && (*(int *)(lVar10 + 0x20) < 5)) &&
               (plVar16 = *(long **)(lVar10 + 0x28), plVar16 != (long *)0x0)) {
              (**(code **)(*plVar16 + 0x1f8))(plVar16,0);
              uVar8 = 0;
              (**(code **)(*plVar16 + 0x388))(plVar16,1);
            }
          }
        }
      }
    }
    pcVar17 = "size_type_01";
  }
  FUN_7103778300(0x3f800000,local_98,(long)pcVar17);
  FUN_7103778300(0x3f800000,local_88,(long)pcVar17);
  FUN_7103778300(0x3f800000,local_78,(long)pcVar17);
  FUN_7103778300(0x3f800000,local_68,(long)pcVar17);
  if ((uVar15 & 1) != 0) {
    FUN_7103776640(&local_b0,lVar14,(byte ****)"set_parts_btn_02",uVar8,param_4,param_5,param_6,
                   param_7,param_8);
    plVar16 = local_a8;
    FUN_7103778300(0x3f800000,(long)local_a8,0x71043ad769);
    local_b0 = &PTR_FUN_710523d988;
    local_a8 = (long *)0x0;
    if (plVar16 != (long *)0x0) {
      uVar3 = plVar16[3];
      plVar16[2] = (long)&PTR_FUN_710523d9a8;
      plVar16[3] = 0;
      if (uVar3 != 0) {
        FUN_710392eb40(uVar3);
      }
      FUN_710392eb40((ulong)plVar16);
    }
    FUN_7103776640(&local_b0,lVar14,(byte ****)"set_parts_btn_02",uVar8,param_4,param_5,param_6,
                   param_7,param_8);
    plVar16 = local_a8;
    FUN_7103778300(0x3f800000,(long)local_a8,0x71042a30cd);
    local_b0 = &PTR_FUN_710523d988;
    local_a8 = (long *)0x0;
    if (plVar16 != (long *)0x0) {
      uVar3 = *(ulong *)((long)plVar16 + 0x18);
      *(undefined ***)((long)plVar16 + 0x10) = &PTR_FUN_710523d9a8;
      *(undefined8 *)((long)plVar16 + 0x18) = 0;
      if (uVar3 != 0) {
        FUN_710392eb40(uVar3);
      }
      FUN_710392eb40((ulong)plVar16);
    }
    FUN_7103776640(&local_b0,lVar14,(byte ****)"set_parts_btn_02",uVar8,param_4,param_5,param_6,
                   param_7,param_8);
    plVar16 = local_a8;
    FUN_7103778300(0x3f800000,(long)local_a8,0x7104443771);
    local_b0 = &PTR_FUN_710523d988;
    local_a8 = (long *)0x0;
    if (plVar16 != (long *)0x0) {
      uVar3 = *(ulong *)((long)plVar16 + 0x18);
      *(undefined ***)((long)plVar16 + 0x10) = &PTR_FUN_710523d9a8;
      *(undefined8 *)((long)plVar16 + 0x18) = 0;
      if (uVar3 != 0) {
        FUN_710392eb40(uVar3);
      }
      FUN_710392eb40((ulong)plVar16);
    }
  }
  uVar1 = (uint)*(byte *)(lVar18 + 0x101);
  if (*(byte *)(lVar18 + 0x101) == 0) {
    uVar3 = FUN_7101797350(0);
    if ((uVar3 & 1) == 0) {
      uVar1 = 1;
    }
    else {
      uVar1 = 3;
    }
  }
  uVar8 = 1;
  FUN_7103771a80(plVar13,uVar1,1);
  lVar11 = *(long *)(*plVar13 + 0x1b8);
  if (lVar11 != 0) {
    lVar9 = *plVar13 + 0x1b8;
    lVar10 = lVar9;
    do {
      if (2 < *(int *)(lVar11 + 0x20)) {
        lVar10 = lVar11;
      }
      lVar11 = *(long *)(lVar11 + (ulong)(*(int *)(lVar11 + 0x20) < 3) * 8);
    } while (lVar11 != 0);
    if (((lVar10 != lVar9) && (*(int *)(lVar10 + 0x20) < 4)) &&
       ((*(long **)(lVar10 + 0x28) != (long *)0x0 &&
        (uVar3 = (**(code **)(**(long **)(lVar10 + 0x28) + 0x200))(), (uVar3 & 1) != 0)))) {
      FUN_7103776640(&local_c0,lVar14,(byte ****)"set_parts_btn_02",uVar8,param_4,param_5,param_6,
                     param_7,param_8);
      FUN_7103776910(&local_b0,(long)&local_c0,(long ****)"set_fxui_spark",uVar8,param_4,param_5,
                     param_6,param_7,param_8);
      plVar16 = local_b8;
      local_c0 = &PTR_FUN_710523d988;
      local_b8 = (long *)0x0;
      if (plVar16 != (long *)0x0) {
        uVar3 = *(ulong *)((long)plVar16 + 0x18);
        *(undefined ***)((long)plVar16 + 0x10) = &PTR_FUN_710523d9a8;
        *(undefined8 *)((long)plVar16 + 0x18) = 0;
        if (uVar3 != 0) {
          FUN_710392eb40(uVar3);
        }
        FUN_710392eb40((ulong)plVar16);
      }
      plVar16 = local_a8;
      plVar6 = FUN_710377aae0((long *)*local_a8);
      if (plVar6 != (long *)0x0) {
        *(undefined1 *)((long)plVar6 + 0x13a) = 1;
      }
      lVar14 = *plVar16;
      if (lVar14 != 0) {
        *(byte *)(lVar14 + 0x58) = *(byte *)(lVar14 + 0x58) | 1;
      }
      local_b0 = &PTR_FUN_710523d9a8;
      local_a8 = (long *)0x0;
      FUN_710392eb40((ulong)plVar16);
    }
  }
  (**(code **)(*(long *)*plVar13 + 0x70))((long *)*plVar13,1);
  uVar3 = local_68;
  local_70 = &PTR_FUN_710523d988;
  local_68 = 0;
  if (uVar3 != 0) {
    uVar15 = *(ulong *)(uVar3 + 0x18);
    *(undefined ***)(uVar3 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar3 + 0x18) = 0;
    if (uVar15 != 0) {
      FUN_710392eb40(uVar15);
    }
    FUN_710392eb40(uVar3);
  }
  uVar3 = local_78;
  local_80 = &PTR_FUN_710523d988;
  local_78 = 0;
  if (uVar3 != 0) {
    uVar15 = *(ulong *)(uVar3 + 0x18);
    *(undefined ***)(uVar3 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar3 + 0x18) = 0;
    if (uVar15 != 0) {
      FUN_710392eb40(uVar15);
    }
    FUN_710392eb40(uVar3);
  }
  uVar3 = local_88;
  local_90 = &PTR_FUN_710523d988;
  local_88 = 0;
  if (uVar3 != 0) {
    uVar15 = *(ulong *)(uVar3 + 0x18);
    *(undefined ***)(uVar3 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar3 + 0x18) = 0;
    if (uVar15 != 0) {
      FUN_710392eb40(uVar15);
    }
    FUN_710392eb40(uVar3);
  }
  uVar3 = local_98;
  local_a0 = &PTR_FUN_710523d988;
  local_98 = 0;
  if (uVar3 != 0) {
    uVar15 = *(ulong *)(uVar3 + 0x18);
    *(undefined ***)(uVar3 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar3 + 0x18) = 0;
    if (uVar15 != 0) {
      FUN_710392eb40(uVar15);
    }
    FUN_710392eb40(uVar3);
  }
  if ((*(long *)(lVar18 + 0xe8) != 0) && (1 < *(int *)(lVar18 + 200) - 1U)) {
    if (0x12 < *(uint *)(lVar18 + 0xc4)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(undefined4 *)(lVar18 + (long)(int)*(uint *)(lVar18 + 0xc4) * 4 + 0x78) = 1;
  }
  return;
}

