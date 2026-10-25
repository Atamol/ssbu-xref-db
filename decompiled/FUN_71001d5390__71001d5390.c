// addr:      71001d5390
// offset:    0x1d5390
// name:      FUN_71001d5390
// mangled:   
// signature: undefined __cdecl FUN_71001d5390(long param_1, undefined4 param_2, ulong param_3)


void FUN_71001d5390(long param_1,undefined4 param_2,ulong param_3)

{
  long *plVar1;
  long lVar2;
  byte bVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  ulong uVar8;
  long *plVar9;
  long *plVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  int iVar14;
  long *plVar15;
  long lVar16;
  long *plVar17;
  long *plVar18;
  long *local_b8;
  long *local_b0;
  long *local_a8;
  undefined8 auStack_a0 [7];
  long local_68;
  
  plVar1 = (long *)(param_1 + 0xc0);
  if ((param_3 & 1) != 0) {
    (**(code **)(*(long *)(param_1 + 0xc0) + 0x10))(plVar1);
    plVar15 = (long *)(param_1 + 0x160);
    if (*(long **)(param_1 + 0x158) != plVar15) {
      plVar18 = *(long **)(param_1 + 0x158);
      do {
        while( true ) {
          lVar16 = plVar18[5];
          *(undefined4 *)(lVar16 + 0x40) = 3;
          if (DAT_7104f561d1 == '\0') break;
          (**(code **)(*(long *)(param_1 + 0xc0) + 0x10))(plVar1);
          (**(code **)(*(long *)(param_1 + 0x30) + 0x10))(param_1 + 0x30);
          FUN_71001d8820(param_1,lVar16,0);
          (**(code **)(*(long *)(param_1 + 0x30) + 0x20))(param_1 + 0x30);
          (**(code **)(*(long *)(param_1 + 0xc0) + 0x20))(plVar1);
          plVar9 = (long *)plVar18[1];
          if ((long *)plVar18[1] == (long *)0x0) goto LAB_71001d5488;
LAB_71001d5478:
          do {
            plVar18 = plVar9;
            plVar9 = (long *)*plVar18;
          } while ((long *)*plVar18 != (long *)0x0);
LAB_71001d54b4:
          if (plVar18 == plVar15) goto LAB_71001d54cc;
        }
        FUN_71001d8820(param_1,lVar16,0);
        plVar9 = (long *)plVar18[1];
        if ((long *)plVar18[1] != (long *)0x0) goto LAB_71001d5478;
LAB_71001d5488:
        plVar9 = plVar18 + 2;
        plVar10 = (long *)*plVar9;
        if ((long *)*plVar10 != plVar18) {
          do {
            lVar16 = *plVar9;
            plVar9 = (long *)(lVar16 + 0x10);
            plVar18 = (long *)*plVar9;
          } while (*plVar18 != lVar16);
          goto LAB_71001d54b4;
        }
        plVar18 = plVar10;
      } while (plVar10 != plVar15);
    }
LAB_71001d54cc:
    FUN_71001dd1b0(param_1 + 0x158,*(undefined8 **)(param_1 + 0x160));
    *(undefined8 *)(param_1 + 0x160) = 0;
    *(undefined8 *)(param_1 + 0x168) = 0;
    *(long **)(param_1 + 0x158) = plVar15;
    (**(code **)(*(long *)(param_1 + 0xc0) + 0x20))(plVar1);
  }
  FUN_71001b46a0(auStack_a0,10,param_2);
  FUN_71001b2e80((long)auStack_a0);
  do {
    (**(code **)(*(long *)(param_1 + 0xc0) + 0x10))(plVar1);
    (**(code **)(*(long *)(param_1 + 0xc0) + 0x10))(plVar1);
    lVar16 = *(long *)(param_1 + 0x128);
    lVar11 = *(long *)(param_1 + 0x168);
    lVar12 = *(long *)(param_1 + 0x150);
    (**(code **)(*(long *)(param_1 + 0xc0) + 0x20))(plVar1);
    bVar3 = *(byte *)(param_1 + 0x10);
    (**(code **)(*(long *)(param_1 + 0xc0) + 0x20))(plVar1);
    if (lVar11 + lVar16 + lVar12 + (ulong)bVar3 == 0) break;
    iVar7 = FUN_71001b4760((long)auStack_a0);
    FUN_71001d2110(iVar7);
    uVar8 = FUN_71001b2e90((long)auStack_a0);
  } while ((uVar8 & 1) != 0);
  (**(code **)(*(long *)(param_1 + 0xc0) + 0x10))(plVar1);
  (**(code **)(*(long *)(param_1 + 0xc0) + 0x10))(plVar1);
  lVar16 = *(long *)(param_1 + 0x128);
  lVar11 = *(long *)(param_1 + 0x168);
  lVar12 = *(long *)(param_1 + 0x150);
  (**(code **)(*(long *)(param_1 + 0xc0) + 0x20))(plVar1);
  bVar3 = *(byte *)(param_1 + 0x10);
  (**(code **)(*(long *)(param_1 + 0xc0) + 0x20))(plVar1);
  if (lVar11 + lVar16 + lVar12 + (ulong)bVar3 != 0) {
    plVar9 = (long *)(param_1 + 0x78);
    (**(code **)(*plVar9 + 0x10))(plVar9);
    (**(code **)(*(long *)(param_1 + 0xc0) + 0x10))(plVar1);
    local_b8 = (long *)0x0;
    local_b0 = (long *)0x0;
    plVar15 = (long *)(param_1 + 0x160);
    local_a8 = (long *)0x0;
    plVar18 = *(long **)(param_1 + 0x158);
    if (plVar18 != plVar15) {
      plVar10 = plVar18 + 5;
LAB_71001d5688:
      FUN_71001dd6e0((long *)&local_b8,plVar10);
      plVar10 = (long *)plVar18[1];
      plVar17 = plVar18;
      if ((long *)plVar18[1] == (long *)0x0) goto LAB_71001d56a8;
LAB_71001d5698:
      do {
        plVar18 = plVar10;
        plVar10 = (long *)*plVar18;
      } while ((long *)*plVar18 != (long *)0x0);
      while (plVar18 != plVar15) {
        while( true ) {
          plVar10 = plVar18 + 5;
          if (local_b0 == local_a8) goto LAB_71001d5688;
          *local_b0 = *plVar10;
          local_b0 = local_b0 + 1;
          plVar10 = (long *)plVar18[1];
          plVar17 = plVar18;
          if ((long *)plVar18[1] != (long *)0x0) goto LAB_71001d5698;
LAB_71001d56a8:
          plVar10 = plVar17 + 2;
          plVar18 = (long *)*plVar10;
          if ((long *)*plVar18 != plVar17) break;
          if (plVar18 == plVar15) goto LAB_71001d56ec;
        }
        do {
          lVar16 = *plVar10;
          plVar10 = (long *)(lVar16 + 0x10);
          plVar18 = (long *)*plVar10;
        } while (*plVar18 != lVar16);
      }
    }
LAB_71001d56ec:
    FUN_71001dd1b0(param_1 + 0x158,*(undefined8 **)(param_1 + 0x160));
    local_68 = *(long *)(param_1 + 0x110);
    lVar16 = *(long *)(param_1 + 0x120);
    *(long **)(param_1 + 0x158) = plVar15;
    *(undefined8 *)(param_1 + 0x160) = 0;
    *(undefined8 *)(param_1 + 0x168) = 0;
    if (lVar16 != local_68) {
      do {
        if (local_b0 == local_a8) {
          FUN_71001dd6e0((long *)&local_b8,&local_68);
        }
        else {
          *local_b0 = local_68;
          local_b0 = local_b0 + 1;
        }
        local_68 = *(long *)(local_68 + 0x10);
      } while (lVar16 != local_68);
      lVar16 = *(long *)(param_1 + 0x120);
      if (lVar16 != *(long *)(param_1 + 0x110)) {
        lVar11 = *(long *)(param_1 + 0x128);
        lVar12 = *(long *)(param_1 + 0x110);
        do {
          while( true ) {
            lVar13 = lVar11;
            lVar2 = *(long *)(lVar12 + 0x10);
            lVar11 = *(long *)(lVar12 + 0x18);
            if (lVar11 != 0) {
              *(long *)(lVar11 + 0x10) = lVar2;
            }
            *(undefined8 *)(lVar12 + 0x18) = 0;
            if (lVar2 != 0) {
              *(long *)(lVar2 + 0x18) = lVar11;
            }
            *(undefined8 *)(lVar12 + 0x10) = 0;
            if (*(long *)(param_1 + 0x110) != lVar12) break;
            *(long *)(param_1 + 0x110) = lVar2;
            if (*(long *)(param_1 + 0x118) == lVar12) goto LAB_71001d57c0;
LAB_71001d579c:
            lVar11 = lVar13 + -1;
            lVar12 = lVar2;
            if (lVar16 == lVar2) goto LAB_71001d57d4;
          }
          if (*(long *)(param_1 + 0x118) != lVar12) goto LAB_71001d579c;
LAB_71001d57c0:
          *(long *)(param_1 + 0x118) = lVar11;
          lVar11 = lVar13 + -1;
          lVar12 = lVar2;
        } while (lVar16 != lVar2);
LAB_71001d57d4:
        *(long *)(param_1 + 0x128) = lVar13 + -1;
      }
    }
    local_68 = *(long *)(param_1 + 0x138);
    lVar16 = *(long *)(param_1 + 0x148);
    if (lVar16 != local_68) {
      do {
        if (local_b0 == local_a8) {
          FUN_71001dd6e0((long *)&local_b8,&local_68);
        }
        else {
          *local_b0 = local_68;
          local_b0 = local_b0 + 1;
        }
        local_68 = *(long *)(local_68 + 0x10);
      } while (lVar16 != local_68);
      lVar16 = *(long *)(param_1 + 0x148);
      if (lVar16 != *(long *)(param_1 + 0x138)) {
        lVar11 = *(long *)(param_1 + 0x150);
        lVar12 = *(long *)(param_1 + 0x138);
        do {
          while( true ) {
            lVar13 = lVar11;
            lVar2 = *(long *)(lVar12 + 0x10);
            lVar11 = *(long *)(lVar12 + 0x18);
            if (lVar11 != 0) {
              *(long *)(lVar11 + 0x10) = lVar2;
            }
            *(undefined8 *)(lVar12 + 0x18) = 0;
            if (lVar2 != 0) {
              *(long *)(lVar2 + 0x18) = lVar11;
            }
            *(undefined8 *)(lVar12 + 0x10) = 0;
            if (*(long *)(param_1 + 0x138) != lVar12) break;
            *(long *)(param_1 + 0x138) = lVar2;
            if (*(long *)(param_1 + 0x140) == lVar12) goto LAB_71001d5898;
LAB_71001d5874:
            lVar11 = lVar13 + -1;
            lVar12 = lVar2;
            if (lVar16 == lVar2) goto LAB_71001d58ac;
          }
          if (*(long *)(param_1 + 0x140) != lVar12) goto LAB_71001d5874;
LAB_71001d5898:
          *(long *)(param_1 + 0x140) = lVar11;
          lVar11 = lVar13 + -1;
          lVar12 = lVar2;
        } while (lVar16 != lVar2);
LAB_71001d58ac:
        *(long *)(param_1 + 0x150) = lVar13 + -1;
      }
    }
    plVar15 = local_b8;
    if (local_b8 != local_b0) {
      do {
        plVar10 = (long *)*plVar15;
        plVar18 = plVar10 + 1;
        iVar7 = (int)*plVar18;
        iVar6 = (int)*plVar18 + -1;
        if (iVar7 != (int)*plVar18) {
          ClearExclusiveLocal();
          iVar14 = iVar7;
          goto LAB_71001d58fc;
        }
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar18,0x10);
        if (bVar5) {
          *(int *)plVar18 = iVar6;
          cVar4 = ExclusiveMonitorsStatus();
        }
        while (iVar14 = iVar7, cVar4 != '\0') {
LAB_71001d58fc:
          while( true ) {
            iVar7 = (int)*plVar18;
            iVar6 = iVar14 + -1;
            if (iVar7 == iVar14) break;
            ClearExclusiveLocal();
            iVar14 = iVar7;
          }
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar18,0x10);
          if (bVar5) {
            *(int *)plVar18 = iVar6;
            cVar4 = ExclusiveMonitorsStatus();
          }
        }
        if ((iVar6 == 0) && (*(char *)((long)plVar10 + 0xc) == '\0')) {
          *(undefined1 *)((long)plVar10 + 0xc) = 1;
          (**(code **)(*plVar10 + 8))();
        }
        plVar15 = plVar15 + 1;
      } while (plVar15 != local_b0);
    }
    if (local_b8 != (long *)0x0) {
      local_b0 = local_b8;
      FUN_71001b1870((long)local_b8);
    }
    (**(code **)(*plVar1 + 0x20))(plVar1);
    (**(code **)(*plVar9 + 0x20))(plVar9);
  }
  (**(code **)(*(long *)(param_1 + 0xc0) + 0x10))(plVar1);
  (**(code **)(*(long *)(param_1 + 0xc0) + 0x10))(plVar1);
  lVar16 = *(long *)(param_1 + 0x128);
  lVar11 = *(long *)(param_1 + 0x168);
  lVar12 = *(long *)(param_1 + 0x150);
  (**(code **)(*(long *)(param_1 + 0xc0) + 0x20))(plVar1);
  bVar3 = *(byte *)(param_1 + 0x10);
  (**(code **)(*(long *)(param_1 + 0xc0) + 0x20))(plVar1);
  if (lVar11 + lVar16 + lVar12 + (ulong)bVar3 != 0) {
    (**(code **)(*(long *)(param_1 + 0xc0) + 0x10))(plVar1);
    (**(code **)(*(long *)(param_1 + 0xc0) + 0x10))(plVar1);
    (**(code **)(*(long *)(param_1 + 0xc0) + 0x20))(plVar1);
    (**(code **)(*(long *)(param_1 + 0xc0) + 0x20))(plVar1);
  }
  FUN_71001b4730();
  return;
}

