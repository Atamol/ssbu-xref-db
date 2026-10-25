// addr:      7100243630
// offset:    0x243630
// name:      FUN_7100243630
// mangled:   
// signature: undefined __cdecl FUN_7100243630(undefined8 * param_1)


/* WARNING: Removing unreachable block (ram,0x00710024395c) */
/* WARNING: Removing unreachable block (ram,0x0071002438dc) */
/* WARNING: Removing unreachable block (ram,0x007100243750) */
/* WARNING: Removing unreachable block (ram,0x007100243764) */
/* WARNING: Removing unreachable block (ram,0x0071002438c8) */
/* WARNING: Removing unreachable block (ram,0x007100243970) */

void FUN_7100243630(undefined8 *param_1)

{
  long *plVar1;
  int iVar2;
  uint uVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  uint *puVar7;
  long *plVar8;
  long lVar9;
  int iVar10;
  long lVar11;
  long *plVar12;
  int *piVar13;
  
  *param_1 = &DAT_7104f5bb20;
  plVar8 = &DAT_71052af138;
  if (DAT_71052af1d8 == '\0') {
LAB_71002436a8:
    if ((*plVar8 != 0) && (lVar9 = *(long *)(*plVar8 + 0x10), lVar9 != 0)) {
      lVar9 = *(long *)(lVar9 + 0x10);
      goto LAB_71002436dc;
    }
  }
  else {
    puVar7 = (uint *)FUN_7101717960(DAT_71052af1d0);
    uVar3 = *puVar7;
    if (uVar3 == 0) goto LAB_71002436a8;
    if ((ulong)uVar3 < (ulong)(DAT_71052af1b0[1] - *DAT_71052af1b0 >> 3)) {
      plVar8 = (long *)(*(long *)(*DAT_71052af1b0 + (ulong)uVar3 * 8) + 0x20);
      goto LAB_71002436a8;
    }
    FUN_71001b1300("..\\..\\..\\..\\.\\OnlineCore/src/Core/InstanceTable.h",0x47,0xe0000003,0);
  }
  lVar9 = 0;
LAB_71002436dc:
  plVar12 = (long *)(lVar9 + 0x78);
  (**(code **)(*plVar12 + 0x10))(plVar12);
  plVar8 = (long *)param_1[0x7e];
  if (plVar8 != (long *)0x0) {
    plVar1 = plVar8 + 1;
    iVar10 = (int)*plVar1;
    iVar6 = (int)*plVar1 + -1;
    if (iVar10 != (int)*plVar1) {
      ClearExclusiveLocal();
      goto LAB_710024372c;
    }
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar5) {
      *(int *)plVar1 = iVar6;
      cVar4 = ExclusiveMonitorsStatus();
    }
    while (cVar4 != '\0') {
LAB_710024372c:
      while( true ) {
        iVar2 = (int)*plVar1;
        iVar6 = iVar10 + -1;
        if (iVar2 == iVar10) break;
        ClearExclusiveLocal();
        iVar10 = iVar2;
      }
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      iVar10 = iVar2;
      if (bVar5) {
        *(int *)plVar1 = iVar6;
        cVar4 = ExclusiveMonitorsStatus();
      }
    }
    if ((iVar6 == 0) && (*(char *)((long)plVar8 + 0xc) == '\0')) {
      *(undefined1 *)((long)plVar8 + 0xc) = 1;
      (**(code **)(*plVar8 + 8))();
    }
    param_1[0x7e] = 0;
  }
  if ((long *)param_1[0x27] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x27] + 8))();
    param_1[0x27] = 0;
  }
  if ((long *)param_1[0x28] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x28] + 8))();
    param_1[0x28] = 0;
  }
  (**(code **)(*plVar12 + 0x20))(plVar12);
  FUN_71001f2080(param_1 + 0x6a);
  FUN_71001f2080(param_1 + 0x59);
  if (param_1[0x58] != 0) {
    plVar8 = (long *)param_1[0x57];
    lVar9 = param_1[0x56];
    lVar11 = *plVar8;
    *(undefined8 *)(lVar11 + 8) = *(undefined8 *)(lVar9 + 8);
    **(long **)(lVar9 + 8) = lVar11;
    param_1[0x58] = 0;
    while (plVar8 != param_1 + 0x56) {
      plVar12 = (long *)plVar8[1];
      (**(code **)plVar8[2])();
      FUN_71001b1870((long)plVar8);
      plVar8 = plVar12;
    }
  }
  FUN_71001d0730(param_1 + 0x42);
  FUN_710022e920(param_1 + 0x2a);
  plVar8 = (long *)param_1[0x26];
  param_1[0x25] = &PTR_FUN_7104f5c398;
  if (plVar8 != (long *)0x0) {
    plVar12 = plVar8 + 1;
    iVar10 = (int)*plVar12;
    iVar6 = (int)*plVar12 + -1;
    if (iVar10 != (int)*plVar12) {
      ClearExclusiveLocal();
      goto LAB_71002438a4;
    }
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar12,0x10);
    if (bVar5) {
      *(int *)plVar12 = iVar6;
      cVar4 = ExclusiveMonitorsStatus();
    }
    while (cVar4 != '\0') {
LAB_71002438a4:
      while( true ) {
        iVar2 = (int)*plVar12;
        iVar6 = iVar10 + -1;
        if (iVar2 == iVar10) break;
        ClearExclusiveLocal();
        iVar10 = iVar2;
      }
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar12,0x10);
      iVar10 = iVar2;
      if (bVar5) {
        *(int *)plVar12 = iVar6;
        cVar4 = ExclusiveMonitorsStatus();
      }
    }
    if (iVar6 == 0) {
      piVar13 = (int *)((long)plVar8 + 0xc);
      (**(code **)(*plVar8 + 0x10))(plVar8);
      iVar10 = *piVar13;
      iVar6 = *piVar13 + -1;
      if (iVar10 != *piVar13) {
        ClearExclusiveLocal();
        goto LAB_7100243938;
      }
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar13,0x10);
      if (bVar5) {
        *piVar13 = iVar6;
        cVar4 = ExclusiveMonitorsStatus();
      }
      while (cVar4 != '\0') {
LAB_7100243938:
        while( true ) {
          iVar2 = *piVar13;
          iVar6 = iVar10 + -1;
          if (iVar2 == iVar10) break;
          ClearExclusiveLocal();
          iVar10 = iVar2;
        }
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar13,0x10);
        iVar10 = iVar2;
        if (bVar5) {
          *piVar13 = iVar6;
          cVar4 = ExclusiveMonitorsStatus();
        }
      }
      if (iVar6 == 0) {
        (**(code **)(*plVar8 + 8))(plVar8);
      }
    }
  }
  FUN_710022e920(param_1 + 0xd);
  FUN_71001dca60(param_1);
  return;
}

