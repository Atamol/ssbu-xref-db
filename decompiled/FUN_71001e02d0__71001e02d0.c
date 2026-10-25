// addr:      71001e02d0
// offset:    0x1e02d0
// name:      FUN_71001e02d0
// mangled:   
// signature: undefined __cdecl FUN_71001e02d0(void)


void FUN_71001e02d0(void)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  char cVar4;
  bool bVar5;
  uint *puVar6;
  undefined8 *puVar7;
  long lVar8;
  int iVar9;
  long *plVar10;
  
  plVar10 = &DAT_71052af128;
  if (DAT_71052af1d8 != '\0') {
    puVar6 = (uint *)FUN_7101717960(DAT_71052af1d0);
    uVar3 = *puVar6;
    if (uVar3 != 0) {
      if ((ulong)(DAT_71052af1b0[1] - *DAT_71052af1b0 >> 3) <= (ulong)uVar3) {
        FUN_71001b1300("..\\..\\..\\..\\.\\OnlineCore/src/Core/InstanceTable.h",0x47,0xe0000003,0);
        goto LAB_71001e03b0;
      }
      plVar10 = (long *)(*(long *)(*DAT_71052af1b0 + (ulong)uVar3 * 8) + 0x10);
    }
  }
  if ((*plVar10 == 0) || (*(long *)(*plVar10 + 0x10) == 0)) {
LAB_71001e03b0:
    puVar7 = FUN_71001af850(0x4a8);
    if (puVar7 == (undefined8 *)0x0) {
      return;
    }
    FUN_71001eea30(puVar7);
    return;
  }
  plVar10 = &DAT_71052af128;
  if (DAT_71052af1d8 != '\0') {
    puVar6 = (uint *)FUN_7101717960(DAT_71052af1d0);
    uVar3 = *puVar6;
    if (uVar3 != 0) {
      if ((ulong)(DAT_71052af1b0[1] - *DAT_71052af1b0 >> 3) <= (ulong)uVar3) {
        FUN_71001b1300("..\\..\\..\\..\\.\\OnlineCore/src/Core/InstanceTable.h",0x47,0xe0000003,0);
        lVar8 = 0;
        goto LAB_71001e03e8;
      }
      plVar10 = (long *)(*(long *)(*DAT_71052af1b0 + (ulong)uVar3 * 8) + 0x10);
    }
  }
  lVar8 = 0;
  if (*plVar10 != 0) {
    lVar8 = *(long *)(*plVar10 + 0x10);
  }
LAB_71001e03e8:
  piVar1 = (int *)(lVar8 + 8);
  iVar9 = *piVar1;
  if (iVar9 == *piVar1) {
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar5) {
      *piVar1 = *piVar1 + 1;
      cVar4 = ExclusiveMonitorsStatus();
    }
    if (cVar4 == '\0') {
      return;
    }
  }
  else {
    ClearExclusiveLocal();
  }
  do {
    while (iVar2 = *piVar1, iVar2 != iVar9) {
      ClearExclusiveLocal();
      iVar9 = iVar2;
    }
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar5) {
      *piVar1 = iVar9 + 1;
      cVar4 = ExclusiveMonitorsStatus();
    }
    iVar9 = iVar2;
  } while (cVar4 != '\0');
  return;
}

