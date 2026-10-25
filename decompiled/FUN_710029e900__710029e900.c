// addr:      710029e900
// offset:    0x29e900
// name:      FUN_710029e900
// mangled:   
// signature: undefined8 __cdecl FUN_710029e900(long param_1, undefined4 param_2, long param_3, long param_4, undefined8 param_5, long param_6, undefined4 param_7)


/* WARNING: Removing unreachable block (ram,0x00710029ed78) */
/* WARNING: Removing unreachable block (ram,0x00710029ec28) */
/* WARNING: Removing unreachable block (ram,0x00710029eb84) */
/* WARNING: Removing unreachable block (ram,0x00710029eaf0) */
/* WARNING: Removing unreachable block (ram,0x00710029eadc) */
/* WARNING: Removing unreachable block (ram,0x00710029ea5c) */
/* WARNING: Removing unreachable block (ram,0x00710029ea48) */
/* WARNING: Removing unreachable block (ram,0x00710029eb98) */
/* WARNING: Removing unreachable block (ram,0x00710029ec3c) */
/* WARNING: Removing unreachable block (ram,0x00710029ecbc) */
/* WARNING: Removing unreachable block (ram,0x00710029ecd0) */
/* WARNING: Removing unreachable block (ram,0x00710029ed64) */

undefined8
FUN_710029e900(long param_1,undefined4 param_2,long param_3,long param_4,undefined8 param_5,
              long param_6,undefined4 param_7)

{
  int iVar1;
  undefined8 uVar2;
  uint uVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  uint *puVar7;
  long lVar8;
  long *plVar9;
  int iVar10;
  long *plVar11;
  long *plVar12;
  int *piVar13;
  undefined **local_80;
  code *pcStack_78;
  undefined8 local_70;
  undefined1 *puStack_68;
  
  plVar9 = &DAT_71052af138;
  if (DAT_71052af1d8 == '\0') {
LAB_710029e990:
    if ((*plVar9 == 0) || (lVar8 = *(long *)(*plVar9 + 0x10), lVar8 == 0)) goto LAB_710029e9c0;
    lVar8 = *(long *)(lVar8 + 0x10);
  }
  else {
    puVar7 = (uint *)FUN_7101717960(DAT_71052af1d0);
    uVar3 = *puVar7;
    if (uVar3 == 0) goto LAB_710029e990;
    if ((ulong)uVar3 < (ulong)(DAT_71052af1b0[1] - *DAT_71052af1b0 >> 3)) {
      plVar9 = (long *)(*(long *)(*DAT_71052af1b0 + (ulong)uVar3 * 8) + 0x20);
      goto LAB_710029e990;
    }
    FUN_71001b1300("..\\..\\..\\..\\.\\OnlineCore/src/Core/InstanceTable.h",0x47,0xe0000003,0);
LAB_710029e9c0:
    lVar8 = 0;
  }
  plVar11 = (long *)(lVar8 + 0x78);
  (**(code **)(*plVar11 + 0x10))(plVar11);
  *(undefined4 *)(param_1 + 0xa0) = param_2;
  plVar12 = *(long **)(param_1 + 0x148);
  plVar9 = *(long **)(param_3 + 8);
  if (plVar12 != plVar9) {
    if (plVar12 != (long *)0x0) {
      plVar9 = plVar12 + 1;
      iVar10 = (int)*plVar9;
      iVar6 = (int)*plVar9 + -1;
      if (iVar10 != (int)*plVar9) {
        ClearExclusiveLocal();
        goto LAB_710029ea24;
      }
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar5) {
        *(int *)plVar9 = iVar6;
        cVar4 = ExclusiveMonitorsStatus();
      }
      while (cVar4 != '\0') {
LAB_710029ea24:
        while( true ) {
          iVar1 = (int)*plVar9;
          iVar6 = iVar10 + -1;
          if (iVar1 == iVar10) break;
          ClearExclusiveLocal();
          iVar10 = iVar1;
        }
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar9,0x10);
        iVar10 = iVar1;
        if (bVar5) {
          *(int *)plVar9 = iVar6;
          cVar4 = ExclusiveMonitorsStatus();
        }
      }
      if (iVar6 == 0) {
        piVar13 = (int *)((long)plVar12 + 0xc);
        (**(code **)(*plVar12 + 0x10))(plVar12);
        iVar10 = *piVar13;
        iVar6 = *piVar13 + -1;
        if (iVar10 != *piVar13) {
          ClearExclusiveLocal();
          goto LAB_710029eab8;
        }
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar13,0x10);
        if (bVar5) {
          *piVar13 = iVar6;
          cVar4 = ExclusiveMonitorsStatus();
        }
        while (cVar4 != '\0') {
LAB_710029eab8:
          while( true ) {
            iVar1 = *piVar13;
            iVar6 = iVar10 + -1;
            if (iVar1 == iVar10) break;
            ClearExclusiveLocal();
            iVar10 = iVar1;
          }
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar13,0x10);
          iVar10 = iVar1;
          if (bVar5) {
            *piVar13 = iVar6;
            cVar4 = ExclusiveMonitorsStatus();
          }
        }
        if (iVar6 == 0) {
          (**(code **)(*plVar12 + 8))(plVar12);
        }
      }
      plVar9 = *(long **)(param_3 + 8);
    }
    *(long **)(param_1 + 0x148) = plVar9;
    if ((plVar9 != (long *)0x0) && (plVar9 = plVar9 + 1, (int)*plVar9 != 0)) {
      iVar10 = (int)*plVar9;
      if (iVar10 == (int)*plVar9) {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar9,0x10);
        if (bVar5) {
          *(int *)plVar9 = (int)*plVar9 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
        if (cVar4 == '\0') goto LAB_710029eba8;
      }
      else {
        ClearExclusiveLocal();
      }
      do {
        while (iVar6 = (int)*plVar9, iVar6 != iVar10) {
          ClearExclusiveLocal();
          iVar10 = iVar6;
        }
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar9,0x10);
        if (bVar5) {
          *(int *)plVar9 = iVar10 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
        iVar10 = iVar6;
      } while (cVar4 != '\0');
    }
  }
LAB_710029eba8:
  uVar2 = *(undefined8 *)(param_4 + 8);
  *(undefined8 *)(param_1 + 0x238) = *(undefined8 *)(param_4 + 0x10);
  *(undefined8 *)(param_1 + 0x230) = uVar2;
  *(undefined8 *)(param_1 + 0x240) = param_5;
  plVar12 = *(long **)(param_1 + 400);
  plVar9 = *(long **)(param_6 + 8);
  if (plVar12 != plVar9) {
    if (plVar12 != (long *)0x0) {
      plVar9 = plVar12 + 1;
      iVar10 = (int)*plVar9;
      iVar6 = (int)*plVar9 + -1;
      if (iVar10 != (int)*plVar9) {
        ClearExclusiveLocal();
        goto LAB_710029ec04;
      }
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar5) {
        *(int *)plVar9 = iVar6;
        cVar4 = ExclusiveMonitorsStatus();
      }
      while (cVar4 != '\0') {
LAB_710029ec04:
        while( true ) {
          iVar1 = (int)*plVar9;
          iVar6 = iVar10 + -1;
          if (iVar1 == iVar10) break;
          ClearExclusiveLocal();
          iVar10 = iVar1;
        }
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar9,0x10);
        iVar10 = iVar1;
        if (bVar5) {
          *(int *)plVar9 = iVar6;
          cVar4 = ExclusiveMonitorsStatus();
        }
      }
      if (iVar6 == 0) {
        piVar13 = (int *)((long)plVar12 + 0xc);
        (**(code **)(*plVar12 + 0x10))(plVar12);
        iVar10 = *piVar13;
        iVar6 = *piVar13 + -1;
        if (iVar10 != *piVar13) {
          ClearExclusiveLocal();
          goto LAB_710029ec98;
        }
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar13,0x10);
        if (bVar5) {
          *piVar13 = iVar6;
          cVar4 = ExclusiveMonitorsStatus();
        }
        while (cVar4 != '\0') {
LAB_710029ec98:
          while( true ) {
            iVar1 = *piVar13;
            iVar6 = iVar10 + -1;
            if (iVar1 == iVar10) break;
            ClearExclusiveLocal();
            iVar10 = iVar1;
          }
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar13,0x10);
          iVar10 = iVar1;
          if (bVar5) {
            *piVar13 = iVar6;
            cVar4 = ExclusiveMonitorsStatus();
          }
        }
        if (iVar6 == 0) {
          (**(code **)(*plVar12 + 8))(plVar12);
        }
      }
      plVar9 = *(long **)(param_6 + 8);
    }
    *(long **)(param_1 + 400) = plVar9;
    if ((plVar9 != (long *)0x0) && (plVar9 = plVar9 + 1, (int)*plVar9 != 0)) {
      iVar10 = (int)*plVar9;
      if (iVar10 == (int)*plVar9) {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar9,0x10);
        if (bVar5) {
          *(int *)plVar9 = (int)*plVar9 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
        if (cVar4 == '\0') goto LAB_710029ed88;
      }
      else {
        ClearExclusiveLocal();
      }
      do {
        while (iVar6 = (int)*plVar9, iVar6 != iVar10) {
          ClearExclusiveLocal();
          iVar10 = iVar6;
        }
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar9,0x10);
        if (bVar5) {
          *(int *)plVar9 = iVar10 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
        iVar10 = iVar6;
      } while (cVar4 != '\0');
    }
  }
LAB_710029ed88:
  *(undefined4 *)(param_1 + 0xa4) = param_7;
  lVar8 = *(long *)(*(long *)(param_1 + 0x148) + 0x10);
  plVar9 = (long *)(lVar8 + 0x30);
  (**(code **)(*plVar9 + 0x10))(plVar9);
  lVar8 = FUN_71001b52a0(lVar8 + 8);
  (**(code **)(*plVar9 + 0x20))(plVar9);
  if (lVar8 == 0) {
    pcStack_78 = FUN_710029ee40;
  }
  else {
    pcStack_78 = FUN_710029f040;
  }
  local_80 = &PTR_FUN_7104f56e28;
  local_70 = 0;
  puStack_68 = &DAT_71044114cc;
  FUN_71001d3d60(param_1,(long)&local_80);
  (**(code **)(*plVar11 + 0x20))(plVar11);
  return 1;
}

