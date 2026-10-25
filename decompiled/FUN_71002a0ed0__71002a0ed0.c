// addr:      71002a0ed0
// offset:    0x2a0ed0
// name:      FUN_71002a0ed0
// mangled:   
// signature: undefined8 __cdecl FUN_71002a0ed0(long param_1, undefined4 param_2, long param_3, long param_4, undefined8 param_5, long param_6, undefined4 param_7)


/* WARNING: Removing unreachable block (ram,0x0071002a134c) */
/* WARNING: Removing unreachable block (ram,0x0071002a11fc) */
/* WARNING: Removing unreachable block (ram,0x0071002a1154) */
/* WARNING: Removing unreachable block (ram,0x0071002a10c0) */
/* WARNING: Removing unreachable block (ram,0x0071002a10ac) */
/* WARNING: Removing unreachable block (ram,0x0071002a102c) */
/* WARNING: Removing unreachable block (ram,0x0071002a1018) */
/* WARNING: Removing unreachable block (ram,0x0071002a1168) */
/* WARNING: Removing unreachable block (ram,0x0071002a1210) */
/* WARNING: Removing unreachable block (ram,0x0071002a1290) */
/* WARNING: Removing unreachable block (ram,0x0071002a12a4) */
/* WARNING: Removing unreachable block (ram,0x0071002a1338) */

undefined8
FUN_71002a0ed0(long param_1,undefined4 param_2,long param_3,long param_4,undefined8 param_5,
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
  undefined8 uVar9;
  int iVar10;
  long *plVar11;
  long *plVar12;
  int *piVar13;
  undefined **local_80;
  code *pcStack_78;
  undefined8 local_70;
  undefined1 *puStack_68;
  
  plVar8 = &DAT_71052af138;
  if (DAT_71052af1d8 == '\0') {
LAB_71002a0f60:
    if ((*plVar8 == 0) || (lVar7 = *(long *)(*plVar8 + 0x10), lVar7 == 0)) goto LAB_71002a0f90;
    lVar7 = *(long *)(lVar7 + 0x10);
  }
  else {
    puVar6 = (uint *)FUN_7101717960(DAT_71052af1d0);
    uVar2 = *puVar6;
    if (uVar2 == 0) goto LAB_71002a0f60;
    if ((ulong)uVar2 < (ulong)(DAT_71052af1b0[1] - *DAT_71052af1b0 >> 3)) {
      plVar8 = (long *)(*(long *)(*DAT_71052af1b0 + (ulong)uVar2 * 8) + 0x20);
      goto LAB_71002a0f60;
    }
    FUN_71001b1300("..\\..\\..\\..\\.\\OnlineCore/src/Core/InstanceTable.h",0x47,0xe0000003,0);
LAB_71002a0f90:
    lVar7 = 0;
  }
  plVar11 = (long *)(lVar7 + 0x78);
  (**(code **)(*plVar11 + 0x10))(plVar11);
  *(undefined4 *)(param_1 + 0xa0) = param_2;
  plVar12 = *(long **)(param_1 + 0x148);
  plVar8 = *(long **)(param_3 + 8);
  if (plVar12 != plVar8) {
    if (plVar12 != (long *)0x0) {
      plVar8 = plVar12 + 1;
      iVar10 = (int)*plVar8;
      iVar5 = (int)*plVar8 + -1;
      if (iVar10 != (int)*plVar8) {
        ClearExclusiveLocal();
        goto LAB_71002a0ff4;
      }
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar4) {
        *(int *)plVar8 = iVar5;
        cVar3 = ExclusiveMonitorsStatus();
      }
      while (cVar3 != '\0') {
LAB_71002a0ff4:
        while( true ) {
          iVar1 = (int)*plVar8;
          iVar5 = iVar10 + -1;
          if (iVar1 == iVar10) break;
          ClearExclusiveLocal();
          iVar10 = iVar1;
        }
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
        iVar10 = iVar1;
        if (bVar4) {
          *(int *)plVar8 = iVar5;
          cVar3 = ExclusiveMonitorsStatus();
        }
      }
      if (iVar5 == 0) {
        piVar13 = (int *)((long)plVar12 + 0xc);
        (**(code **)(*plVar12 + 0x10))(plVar12);
        iVar10 = *piVar13;
        iVar5 = *piVar13 + -1;
        if (iVar10 != *piVar13) {
          ClearExclusiveLocal();
          goto LAB_71002a1088;
        }
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar13,0x10);
        if (bVar4) {
          *piVar13 = iVar5;
          cVar3 = ExclusiveMonitorsStatus();
        }
        while (cVar3 != '\0') {
LAB_71002a1088:
          while( true ) {
            iVar1 = *piVar13;
            iVar5 = iVar10 + -1;
            if (iVar1 == iVar10) break;
            ClearExclusiveLocal();
            iVar10 = iVar1;
          }
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar13,0x10);
          iVar10 = iVar1;
          if (bVar4) {
            *piVar13 = iVar5;
            cVar3 = ExclusiveMonitorsStatus();
          }
        }
        if (iVar5 == 0) {
          (**(code **)(*plVar12 + 8))(plVar12);
        }
      }
      plVar8 = *(long **)(param_3 + 8);
    }
    *(long **)(param_1 + 0x148) = plVar8;
    if ((plVar8 != (long *)0x0) && (plVar8 = plVar8 + 1, (int)*plVar8 != 0)) {
      iVar10 = (int)*plVar8;
      if (iVar10 == (int)*plVar8) {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
        if (bVar4) {
          *(int *)plVar8 = (int)*plVar8 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
        if (cVar3 == '\0') goto LAB_71002a1178;
      }
      else {
        ClearExclusiveLocal();
      }
      do {
        while (iVar5 = (int)*plVar8, iVar5 != iVar10) {
          ClearExclusiveLocal();
          iVar10 = iVar5;
        }
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
        if (bVar4) {
          *(int *)plVar8 = iVar10 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
        iVar10 = iVar5;
      } while (cVar3 != '\0');
    }
  }
LAB_71002a1178:
  uVar9 = *(undefined8 *)(param_4 + 8);
  *(undefined4 *)(param_1 + 0x238) = *(undefined4 *)(param_4 + 0x10);
  *(undefined8 *)(param_1 + 0x230) = uVar9;
  *(undefined8 *)(param_1 + 0x240) = param_5;
  plVar12 = *(long **)(param_1 + 400);
  plVar8 = *(long **)(param_6 + 8);
  if (plVar12 != plVar8) {
    if (plVar12 != (long *)0x0) {
      plVar8 = plVar12 + 1;
      iVar10 = (int)*plVar8;
      iVar5 = (int)*plVar8 + -1;
      if (iVar10 != (int)*plVar8) {
        ClearExclusiveLocal();
        goto LAB_71002a11d8;
      }
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar4) {
        *(int *)plVar8 = iVar5;
        cVar3 = ExclusiveMonitorsStatus();
      }
      while (cVar3 != '\0') {
LAB_71002a11d8:
        while( true ) {
          iVar1 = (int)*plVar8;
          iVar5 = iVar10 + -1;
          if (iVar1 == iVar10) break;
          ClearExclusiveLocal();
          iVar10 = iVar1;
        }
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
        iVar10 = iVar1;
        if (bVar4) {
          *(int *)plVar8 = iVar5;
          cVar3 = ExclusiveMonitorsStatus();
        }
      }
      if (iVar5 == 0) {
        piVar13 = (int *)((long)plVar12 + 0xc);
        (**(code **)(*plVar12 + 0x10))(plVar12);
        iVar10 = *piVar13;
        iVar5 = *piVar13 + -1;
        if (iVar10 != *piVar13) {
          ClearExclusiveLocal();
          goto LAB_71002a126c;
        }
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar13,0x10);
        if (bVar4) {
          *piVar13 = iVar5;
          cVar3 = ExclusiveMonitorsStatus();
        }
        while (cVar3 != '\0') {
LAB_71002a126c:
          while( true ) {
            iVar1 = *piVar13;
            iVar5 = iVar10 + -1;
            if (iVar1 == iVar10) break;
            ClearExclusiveLocal();
            iVar10 = iVar1;
          }
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar13,0x10);
          iVar10 = iVar1;
          if (bVar4) {
            *piVar13 = iVar5;
            cVar3 = ExclusiveMonitorsStatus();
          }
        }
        if (iVar5 == 0) {
          (**(code **)(*plVar12 + 8))(plVar12);
        }
      }
      plVar8 = *(long **)(param_6 + 8);
    }
    *(long **)(param_1 + 400) = plVar8;
    if ((plVar8 != (long *)0x0) && (plVar8 = plVar8 + 1, (int)*plVar8 != 0)) {
      iVar10 = (int)*plVar8;
      if (iVar10 == (int)*plVar8) {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
        if (bVar4) {
          *(int *)plVar8 = (int)*plVar8 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
        if (cVar3 == '\0') goto LAB_71002a135c;
      }
      else {
        ClearExclusiveLocal();
      }
      do {
        while (iVar5 = (int)*plVar8, iVar5 != iVar10) {
          ClearExclusiveLocal();
          iVar10 = iVar5;
        }
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
        if (bVar4) {
          *(int *)plVar8 = iVar10 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
        iVar10 = iVar5;
      } while (cVar3 != '\0');
    }
  }
LAB_71002a135c:
  *(undefined4 *)(param_1 + 0xa4) = param_7;
  lVar7 = *(long *)(*(long *)(param_1 + 0x148) + 0x10);
  plVar8 = (long *)(lVar7 + 0x30);
  (**(code **)(*plVar8 + 0x10))(plVar8);
  lVar7 = FUN_71001b52a0(lVar7 + 8);
  (**(code **)(*plVar8 + 0x20))(plVar8);
  if (lVar7 == 0) {
    pcStack_78 = FUN_71002a1410;
  }
  else {
    pcStack_78 = FUN_71002a1610;
  }
  local_80 = &PTR_FUN_7104f56e28;
  local_70 = 0;
  puStack_68 = &DAT_71044114cc;
  FUN_71001d3d60(param_1,(long)&local_80);
  (**(code **)(*plVar11 + 0x20))(plVar11);
  return 1;
}

