// addr:      71002a2120
// offset:    0x2a2120
// name:      FUN_71002a2120
// mangled:   
// signature: undefined8 __cdecl FUN_71002a2120(long param_1, undefined4 param_2, long param_3, long param_4, undefined8 param_5, long param_6, undefined4 param_7)


/* WARNING: Removing unreachable block (ram,0x0071002a2594) */
/* WARNING: Removing unreachable block (ram,0x0071002a2444) */
/* WARNING: Removing unreachable block (ram,0x0071002a23a4) */
/* WARNING: Removing unreachable block (ram,0x0071002a2310) */
/* WARNING: Removing unreachable block (ram,0x0071002a22fc) */
/* WARNING: Removing unreachable block (ram,0x0071002a227c) */
/* WARNING: Removing unreachable block (ram,0x0071002a2268) */
/* WARNING: Removing unreachable block (ram,0x0071002a23b8) */
/* WARNING: Removing unreachable block (ram,0x0071002a2458) */
/* WARNING: Removing unreachable block (ram,0x0071002a24d8) */
/* WARNING: Removing unreachable block (ram,0x0071002a24ec) */
/* WARNING: Removing unreachable block (ram,0x0071002a2580) */

undefined8
FUN_71002a2120(long param_1,undefined4 param_2,long param_3,long param_4,undefined8 param_5,
              long param_6,undefined4 param_7)

{
  int iVar1;
  uint uVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  uint *puVar6;
  long lVar7;
  long *plVar8;
  int iVar9;
  long *plVar10;
  long *plVar11;
  int *piVar12;
  undefined **local_80;
  code *pcStack_78;
  undefined8 local_70;
  undefined1 *puStack_68;
  
  plVar8 = &DAT_71052af138;
  if (DAT_71052af1d8 == '\0') {
LAB_71002a21b0:
    if ((*plVar8 == 0) || (lVar7 = *(long *)(*plVar8 + 0x10), lVar7 == 0)) goto LAB_71002a21e0;
    lVar7 = *(long *)(lVar7 + 0x10);
  }
  else {
    puVar6 = (uint *)FUN_7101717960(DAT_71052af1d0);
    uVar2 = *puVar6;
    if (uVar2 == 0) goto LAB_71002a21b0;
    if ((ulong)uVar2 < (ulong)(DAT_71052af1b0[1] - *DAT_71052af1b0 >> 3)) {
      plVar8 = (long *)(*(long *)(*DAT_71052af1b0 + (ulong)uVar2 * 8) + 0x20);
      goto LAB_71002a21b0;
    }
    FUN_71001b1300("..\\..\\..\\..\\.\\OnlineCore/src/Core/InstanceTable.h",0x47,0xe0000003,0);
LAB_71002a21e0:
    lVar7 = 0;
  }
  plVar10 = (long *)(lVar7 + 0x78);
  (**(code **)(*plVar10 + 0x10))(plVar10);
  *(undefined4 *)(param_1 + 0xa0) = param_2;
  plVar11 = *(long **)(param_1 + 0x148);
  plVar8 = *(long **)(param_3 + 8);
  if (plVar11 != plVar8) {
    if (plVar11 != (long *)0x0) {
      plVar8 = plVar11 + 1;
      iVar9 = (int)*plVar8;
      iVar5 = (int)*plVar8 + -1;
      if (iVar9 != (int)*plVar8) {
        ClearExclusiveLocal();
        goto LAB_71002a2244;
      }
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar4) {
        *(int *)plVar8 = iVar5;
        cVar3 = ExclusiveMonitorsStatus();
      }
      while (cVar3 != '\0') {
LAB_71002a2244:
        while( true ) {
          iVar1 = (int)*plVar8;
          iVar5 = iVar9 + -1;
          if (iVar1 == iVar9) break;
          ClearExclusiveLocal();
          iVar9 = iVar1;
        }
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
        iVar9 = iVar1;
        if (bVar4) {
          *(int *)plVar8 = iVar5;
          cVar3 = ExclusiveMonitorsStatus();
        }
      }
      if (iVar5 == 0) {
        piVar12 = (int *)((long)plVar11 + 0xc);
        (**(code **)(*plVar11 + 0x10))(plVar11);
        iVar9 = *piVar12;
        iVar5 = *piVar12 + -1;
        if (iVar9 != *piVar12) {
          ClearExclusiveLocal();
          goto LAB_71002a22d8;
        }
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar12,0x10);
        if (bVar4) {
          *piVar12 = iVar5;
          cVar3 = ExclusiveMonitorsStatus();
        }
        while (cVar3 != '\0') {
LAB_71002a22d8:
          while( true ) {
            iVar1 = *piVar12;
            iVar5 = iVar9 + -1;
            if (iVar1 == iVar9) break;
            ClearExclusiveLocal();
            iVar9 = iVar1;
          }
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar12,0x10);
          iVar9 = iVar1;
          if (bVar4) {
            *piVar12 = iVar5;
            cVar3 = ExclusiveMonitorsStatus();
          }
        }
        if (iVar5 == 0) {
          (**(code **)(*plVar11 + 8))(plVar11);
        }
      }
      plVar8 = *(long **)(param_3 + 8);
    }
    *(long **)(param_1 + 0x148) = plVar8;
    if ((plVar8 != (long *)0x0) && (plVar8 = plVar8 + 1, (int)*plVar8 != 0)) {
      iVar9 = (int)*plVar8;
      if (iVar9 == (int)*plVar8) {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
        if (bVar4) {
          *(int *)plVar8 = (int)*plVar8 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
        if (cVar3 == '\0') goto LAB_71002a23c8;
      }
      else {
        ClearExclusiveLocal();
      }
      do {
        while (iVar5 = (int)*plVar8, iVar5 != iVar9) {
          ClearExclusiveLocal();
          iVar9 = iVar5;
        }
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
        if (bVar4) {
          *(int *)plVar8 = iVar9 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
        iVar9 = iVar5;
      } while (cVar3 != '\0');
    }
  }
LAB_71002a23c8:
  *(undefined8 *)(param_1 + 0x230) = *(undefined8 *)(param_4 + 8);
  *(undefined8 *)(param_1 + 0x238) = param_5;
  plVar11 = *(long **)(param_1 + 400);
  plVar8 = *(long **)(param_6 + 8);
  if (plVar11 != plVar8) {
    if (plVar11 != (long *)0x0) {
      plVar8 = plVar11 + 1;
      iVar9 = (int)*plVar8;
      iVar5 = (int)*plVar8 + -1;
      if (iVar9 != (int)*plVar8) {
        ClearExclusiveLocal();
        goto LAB_71002a2420;
      }
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar4) {
        *(int *)plVar8 = iVar5;
        cVar3 = ExclusiveMonitorsStatus();
      }
      while (cVar3 != '\0') {
LAB_71002a2420:
        while( true ) {
          iVar1 = (int)*plVar8;
          iVar5 = iVar9 + -1;
          if (iVar1 == iVar9) break;
          ClearExclusiveLocal();
          iVar9 = iVar1;
        }
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
        iVar9 = iVar1;
        if (bVar4) {
          *(int *)plVar8 = iVar5;
          cVar3 = ExclusiveMonitorsStatus();
        }
      }
      if (iVar5 == 0) {
        piVar12 = (int *)((long)plVar11 + 0xc);
        (**(code **)(*plVar11 + 0x10))(plVar11);
        iVar9 = *piVar12;
        iVar5 = *piVar12 + -1;
        if (iVar9 != *piVar12) {
          ClearExclusiveLocal();
          goto LAB_71002a24b4;
        }
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar12,0x10);
        if (bVar4) {
          *piVar12 = iVar5;
          cVar3 = ExclusiveMonitorsStatus();
        }
        while (cVar3 != '\0') {
LAB_71002a24b4:
          while( true ) {
            iVar1 = *piVar12;
            iVar5 = iVar9 + -1;
            if (iVar1 == iVar9) break;
            ClearExclusiveLocal();
            iVar9 = iVar1;
          }
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar12,0x10);
          iVar9 = iVar1;
          if (bVar4) {
            *piVar12 = iVar5;
            cVar3 = ExclusiveMonitorsStatus();
          }
        }
        if (iVar5 == 0) {
          (**(code **)(*plVar11 + 8))(plVar11);
        }
      }
      plVar8 = *(long **)(param_6 + 8);
    }
    *(long **)(param_1 + 400) = plVar8;
    if ((plVar8 != (long *)0x0) && (plVar8 = plVar8 + 1, (int)*plVar8 != 0)) {
      iVar9 = (int)*plVar8;
      if (iVar9 == (int)*plVar8) {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
        if (bVar4) {
          *(int *)plVar8 = (int)*plVar8 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
        if (cVar3 == '\0') goto LAB_71002a25a4;
      }
      else {
        ClearExclusiveLocal();
      }
      do {
        while (iVar5 = (int)*plVar8, iVar5 != iVar9) {
          ClearExclusiveLocal();
          iVar9 = iVar5;
        }
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
        if (bVar4) {
          *(int *)plVar8 = iVar9 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
        iVar9 = iVar5;
      } while (cVar3 != '\0');
    }
  }
LAB_71002a25a4:
  *(undefined4 *)(param_1 + 0xa4) = param_7;
  lVar7 = *(long *)(*(long *)(param_1 + 0x148) + 0x10);
  plVar8 = (long *)(lVar7 + 0x30);
  (**(code **)(*plVar8 + 0x10))(plVar8);
  lVar7 = FUN_71001b52a0(lVar7 + 8);
  (**(code **)(*plVar8 + 0x20))(plVar8);
  if (lVar7 == 0) {
    pcStack_78 = FUN_71002a2650;
  }
  else {
    pcStack_78 = FUN_71002a2850;
  }
  local_80 = &PTR_FUN_7104f56e28;
  local_70 = 0;
  puStack_68 = &DAT_71044114cc;
  FUN_71001d3d60(param_1,(long)&local_80);
  (**(code **)(*plVar10 + 0x20))(plVar10);
  return 1;
}

