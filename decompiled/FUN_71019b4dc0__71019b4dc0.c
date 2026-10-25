// addr:      71019b4dc0
// offset:    0x19b4dc0
// name:      FUN_71019b4dc0
// mangled:   
// signature: undefined __cdecl FUN_71019b4dc0(undefined8 * param_1, undefined8 param_2, undefined8 param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_71019b4dc0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  int iVar1;
  byte bVar2;
  char cVar3;
  bool bVar4;
  ulong uVar5;
  int iVar6;
  uint uVar7;
  ulong uVar8;
  long *plVar9;
  ulong uVar10;
  int iVar11;
  undefined **ppuVar12;
  int *piVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  undefined4 local_120 [2];
  undefined **local_118;
  long local_110;
  undefined8 local_108;
  undefined1 local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined **local_e0;
  ulong local_d8;
  undefined **local_d0;
  ulong local_c8;
  ulong local_c0;
  byte ***local_b8;
  long local_b0;
  undefined8 local_a8;
  undefined1 local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  
  lVar18 = *(long *)(*(long *)(DAT_710532f840 + 8) + 0xb8);
  if (*(int *)((long)param_1 + 0xfc) != 0) {
    if ((*(char *)(*(long *)(**(long **)*param_1 + 0x600) + 0x4aa) != '\0') &&
       ((*(byte *)(*(long *)(**(long **)*param_1 + 0x600) + 0x1ac) >> 1 & 1) != 0)) {
      lVar18 = *(long *)(lVar18 + 0x80);
      if (*(char *)(lVar18 + 0xc9) == '\0') {
        iVar6 = 4;
      }
      else {
        iVar6 = 0;
      }
      FUN_7103771be0((long *)(lVar18 + 0x2260),iVar6,0);
      *(undefined4 *)(lVar18 + 0x2270) = *(undefined4 *)(*(long *)(lVar18 + 0x2260) + 0x25c);
      if ((*(char *)(*(long *)(DAT_710532f8d0 + 8) + 0x191) == '\0') &&
         (uVar8 = FUN_7103313f20(*(long *)(DAT_710532f8d0 + 8),0xed63546f2,(long ****)&DAT_00000004,
                                 param_4,param_5,param_6,param_7,param_8), (uVar8 & 1) != 0)) {
        FUN_71024076d0(local_120,0xed63546f2);
        if (((local_110 != 0) && (DAT_7106dd53a8 == '\x01')) && ((int)local_108 == DAT_7106dd53ac))
        {
          piVar13 = (int *)(local_110 + 0x38);
          do {
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(piVar13,0x10);
            if (bVar4) {
              *piVar13 = *piVar13 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
        }
      }
      else {
        local_108 = 0x87650000000000;
        local_f8 = 0xffffffffffffffff;
        uStack_f0 = 0;
        local_120[0] = 0;
        local_e8 = 0;
      }
      local_118 = &PTR_FUN_7104f73d50;
      local_110 = 0;
      local_100 = 0;
      lVar18 = *(long *)(*(long *)(DAT_710532f840 + 8) + 0xb8);
    }
    lVar16 = param_1[3];
    uVar7 = *(uint *)(lVar16 + 0x25c);
    if ((-1 < (int)uVar7) || (lVar14 = *(long *)(lVar18 + 0x80), *(int *)(lVar14 + 0x2270) - 1U < 2)
       ) {
      *(uint *)(param_1 + 0x23) = uVar7;
      if (*(int *)(*(long *)(lVar18 + 0x80) + 0x2270) - 1U < 2) {
        if ((*(char *)(*(long *)(DAT_710532f8d0 + 8) + 0x191) == '\0') &&
           (uVar8 = FUN_7103313f20(*(long *)(DAT_710532f8d0 + 8),0xf57a523f5,
                                   (long ****)&DAT_00000004,param_4,param_5,param_6,param_7,param_8)
           , (uVar8 & 1) != 0)) {
          FUN_71024076d0((undefined4 *)&local_c0,0xf57a523f5);
          if (((local_b0 != 0) && (DAT_7106dd53a8 == '\x01')) && ((int)local_a8 == DAT_7106dd53ac))
          {
            piVar13 = (int *)(local_b0 + 0x38);
            do {
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(piVar13,0x10);
              if (bVar4) {
                *piVar13 = *piVar13 + -1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
          }
        }
        else {
          local_a8 = 0x87650000000000;
          local_98 = 0xffffffffffffffff;
          uStack_90 = 0;
          local_c0 = local_c0 & 0xffffffff00000000;
          local_88 = 0;
        }
        local_b8 = (byte ***)&PTR_FUN_7104f73d50;
        local_b0 = 0;
        local_a0 = 0;
        uVar7 = *(uint *)(param_1 + 0x23);
      }
      if (2 < uVar7) {
        uVar7 = 3;
      }
      *(uint *)(param_1 + 0x21) = uVar7;
      if (*(uint *)((long)param_1 + 0xf4) < 0x13) {
        *(undefined4 *)((long)param_1 + (long)(int)*(uint *)((long)param_1 + 0xf4) * 4 + 0xa8) = 5;
        return;
      }
                    /* WARNING: Subroutine does not return */
      abort();
    }
    iVar6 = *(int *)(lVar16 + 0x254);
    if (*(int *)(param_1 + 0x23) != 3) {
      iVar11 = -1;
      if (*(int *)(lVar14 + 0x11b0) - 1U < 5) {
        iVar11 = 1;
      }
      iVar1 = 2;
      if (*(int *)(lVar14 + 0x11b0) < 6) {
        iVar1 = iVar11;
      }
      if ((*(int *)((long)*(long **)(lVar14 + 0x2268) + 0x254) == iVar1) &&
         (uVar8 = (**(code **)(**(long **)(lVar14 + 0x2268) + 0x78))(), (uVar8 & 1) != 0)) {
        iVar6 = 3;
        FUN_7103771a80(param_1 + 3,3,0);
      }
    }
    if (iVar6 != *(int *)(param_1 + 0x23)) {
      lVar18 = *(long *)(lVar18 + 0x80);
      plVar9 = *(long **)(lVar18 + 0x2268);
      if (iVar6 == 3) {
        (**(code **)(*plVar9 + 0x70))(plVar9,1);
        iVar1 = -1;
        if (*(int *)(lVar18 + 0x11b0) - 1U < 5) {
          iVar1 = 1;
        }
        iVar11 = 2;
        if (*(int *)(lVar18 + 0x11b0) < 6) {
          iVar11 = iVar1;
        }
      }
      else {
        (**(code **)(*plVar9 + 0x70))(plVar9,0);
        if (*(char *)(lVar18 + 0x11b4) != '\0') {
          lVar18 = *(long *)(lVar18 + 0x2268);
          if (*(int *)(lVar18 + 0x254) == 3) {
            FUN_710376b960(lVar18);
          }
          goto LAB_71019b538c;
        }
        iVar11 = 3;
      }
      FUN_7103771a80((long *)(lVar18 + 0x2268),iVar11,0);
    }
LAB_71019b538c:
    *(int *)(param_1 + 0x23) = iVar6;
    return;
  }
  lVar18 = *(long *)(lVar18 + 0x80);
  *(undefined1 *)(lVar18 + 0x11ac) = 1;
  if (*(int *)(lVar18 + 0x11b0) < 6) {
    if (4 < *(int *)(lVar18 + 0x11b0) - 1U) goto LAB_71019b500c;
    lVar16 = *(long *)(*(long *)(lVar18 + 0x2268) + 0x1b8);
    if (lVar16 == 0) goto LAB_71019b500c;
    lVar14 = *(long *)(lVar18 + 0x2268) + 0x1b8;
    lVar15 = lVar14;
    lVar17 = lVar16;
    do {
      if (0 < *(int *)(lVar17 + 0x20)) {
        lVar15 = lVar17;
      }
      lVar17 = *(long *)(lVar17 + (ulong)(*(int *)(lVar17 + 0x20) < 1) * 8);
    } while (lVar17 != 0);
    if (((lVar15 != lVar14) && (*(int *)(lVar15 + 0x20) < 2)) &&
       (plVar9 = *(long **)(lVar15 + 0x28), plVar9 != (long *)0x0)) {
      (**(code **)(*plVar9 + 0x1f8))(plVar9,1);
      (**(code **)(*plVar9 + 0x388))(plVar9,0,0);
      lVar14 = *(long *)(lVar18 + 0x2268) + 0x1b8;
      lVar16 = *(long *)(*(long *)(lVar18 + 0x2268) + 0x1b8);
    }
    lVar18 = lVar14;
    if (lVar16 == 0) goto LAB_71019b500c;
    do {
      if (0 < *(int *)(lVar16 + 0x20)) {
        lVar18 = lVar16;
      }
      lVar16 = *(long *)(lVar16 + (ulong)(*(int *)(lVar16 + 0x20) < 1) * 8);
    } while (lVar16 != 0);
    if ((lVar18 == lVar14) || (1 < *(int *)(lVar18 + 0x20))) goto LAB_71019b500c;
  }
  else {
    lVar16 = *(long *)(*(long *)(lVar18 + 0x2268) + 0x1b8);
    if (lVar16 == 0) goto LAB_71019b500c;
    lVar14 = *(long *)(lVar18 + 0x2268) + 0x1b8;
    lVar15 = lVar14;
    lVar17 = lVar16;
    do {
      if (1 < *(int *)(lVar17 + 0x20)) {
        lVar15 = lVar17;
      }
      lVar17 = *(long *)(lVar17 + (ulong)(*(int *)(lVar17 + 0x20) < 2) * 8);
    } while (lVar17 != 0);
    if (((lVar15 != lVar14) && (*(int *)(lVar15 + 0x20) < 3)) &&
       (plVar9 = *(long **)(lVar15 + 0x28), plVar9 != (long *)0x0)) {
      (**(code **)(*plVar9 + 0x1f8))(plVar9,1);
      (**(code **)(*plVar9 + 0x388))(plVar9,0,0);
      lVar14 = *(long *)(lVar18 + 0x2268) + 0x1b8;
      lVar16 = *(long *)(*(long *)(lVar18 + 0x2268) + 0x1b8);
    }
    lVar18 = lVar14;
    if (lVar16 == 0) goto LAB_71019b500c;
    do {
      if (1 < *(int *)(lVar16 + 0x20)) {
        lVar18 = lVar16;
      }
      lVar16 = *(long *)(lVar16 + (ulong)(*(int *)(lVar16 + 0x20) < 2) * 8);
    } while (lVar16 != 0);
    if ((lVar18 == lVar14) || (2 < *(int *)(lVar18 + 0x20))) goto LAB_71019b500c;
  }
  plVar9 = *(long **)(lVar18 + 0x28);
  if (plVar9 != (long *)0x0) {
    (**(code **)(*plVar9 + 0x208))(plVar9,1);
    (**(code **)(*plVar9 + 0x388))(plVar9,0,0);
  }
LAB_71019b500c:
  (**(code **)(*(long *)param_1[3] + 0x70))((long *)param_1[3],1);
  if (*(int *)(*DAT_7105328160 + 0x204388) == 0) {
    return;
  }
  uVar8 = 0;
  plVar9 = DAT_7105328160;
  do {
    if (uVar8 < 3) {
      ppuVar12 = (undefined **)(uVar8 & 0xffffffff);
      local_b8 = (byte ***)((ulong)local_b8 & 0xffffffffffffff00);
      local_c0 = 0;
      FUN_710062dc20((uint *)&local_c0,"set_btn_round_%02d");
      FUN_7103776640(&local_d0,(long)(param_1 + 1),&local_b8,ppuVar12,param_4,param_5,param_6,
                     param_7,param_8);
      if (((DAT_71053144d8 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_71053144d8), iVar6 != 0))
      {
        FUN_7101764000();
        ppuVar12 = &PTR_LOOP_7104f17000;
        FUN_71000001c0();
        __cxa_guard_release(&DAT_71053144d8);
      }
      bVar2 = *(byte *)((long)&DAT_7105307fdc + uVar8 + 4);
      if ((uVar8 == 2) || (uVar8 == *(int *)(*DAT_7105328160 + 0x204388) - 1)) {
        piVar13 = FUN_71032df050(*(long *)(DAT_710532f7b0 + 8),DAT_7105307d50);
        uVar7 = FUN_710324bb60(*(long *)(*(long *)(DAT_710532f730 + 8) + 0x2c8),
                               *(ushort *)((long)piVar13 + 0xa2));
        uVar7 = uVar7 & 0xff;
      }
      else {
        uVar7 = (uint)*(byte *)((long)&DAT_7105307fdc + uVar8 + 5);
      }
      if (bVar2 < uVar7) {
        FUN_7103776640(&local_e0,(long)&local_d0,(byte ****)"set_parts_fp_levelup",ppuVar12,param_4,
                       param_5,param_6,param_7,param_8);
        uVar5 = local_d8;
        FUN_7103778300(0x3f800000,local_d8,0x710432a39d);
        local_e0 = &PTR_FUN_710523d988;
        local_d8 = 0;
        if (uVar5 != 0) {
          uVar10 = *(ulong *)(uVar5 + 0x18);
          *(undefined ***)(uVar5 + 0x10) = &PTR_FUN_710523d9a8;
          *(undefined8 *)(uVar5 + 0x18) = 0;
          if (uVar10 != 0) {
            FUN_710392eb40(uVar10);
          }
          FUN_710392eb40(uVar5);
        }
        FUN_7103776640(&local_e0,(long)&local_d0,(byte ****)"set_parts_fp_levelup",ppuVar12,param_4,
                       param_5,param_6,param_7,param_8);
        uVar5 = local_d8;
        FUN_7103778300(0x3f800000,local_d8,0x7104421055);
        local_e0 = &PTR_FUN_710523d988;
        local_d8 = 0;
        if (uVar5 != 0) {
          uVar10 = *(ulong *)(uVar5 + 0x18);
          *(undefined ***)(uVar5 + 0x10) = &PTR_FUN_710523d9a8;
          *(undefined8 *)(uVar5 + 0x18) = 0;
          if (uVar10 != 0) {
            FUN_710392eb40(uVar10);
          }
          FUN_710392eb40(uVar5);
        }
      }
      uVar5 = local_c8;
      local_d0 = &PTR_FUN_710523d988;
      local_c8 = 0;
      plVar9 = DAT_7105328160;
      if (uVar5 != 0) {
        uVar10 = *(ulong *)(uVar5 + 0x18);
        *(undefined ***)(uVar5 + 0x10) = &PTR_FUN_710523d9a8;
        *(undefined8 *)(uVar5 + 0x18) = 0;
        if (uVar10 != 0) {
          FUN_710392eb40(uVar10);
        }
        FUN_710392eb40(uVar5);
        plVar9 = DAT_7105328160;
      }
    }
    uVar8 = uVar8 + 1;
  } while (uVar8 < *(uint *)(*plVar9 + 0x204388));
  return;
}

