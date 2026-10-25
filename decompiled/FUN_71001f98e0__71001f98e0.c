// addr:      71001f98e0
// offset:    0x1f98e0
// name:      FUN_71001f98e0
// mangled:   
// signature: undefined8 __cdecl FUN_71001f98e0(long param_1)


/* WARNING: Removing unreachable block (ram,0x0071001f9a94) */
/* WARNING: Removing unreachable block (ram,0x0071001f9aa8) */

undefined8 FUN_71001f98e0(long param_1)

{
  int iVar1;
  uint uVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  uint *puVar6;
  long *plVar7;
  long lVar8;
  int iVar9;
  long *plVar10;
  
  *(undefined1 *)(param_1 + 0x2e0) = 1;
  if ((DAT_71052af0e4 != '\0') && (*(long **)(param_1 + 0x2b0) != (long *)0x0)) {
    (**(code **)(**(long **)(param_1 + 0x2b0) + 8))();
    *(undefined8 *)(param_1 + 0x2b0) = 0;
  }
  if (*(long *)(param_1 + 0x2b8) == 0) {
    return 1;
  }
  plVar10 = &DAT_71052af138;
  if (DAT_71052af1d8 != '\0') {
    puVar6 = (uint *)FUN_7101717960(DAT_71052af1d0);
    uVar2 = *puVar6;
    if (uVar2 != 0) {
      if ((ulong)(DAT_71052af1b0[1] - *DAT_71052af1b0 >> 3) <= (ulong)uVar2) {
        FUN_71001b1300("..\\..\\..\\..\\.\\OnlineCore/src/Core/InstanceTable.h",0x47,0xe0000003,0);
        return 1;
      }
      plVar10 = (long *)(*(long *)(*DAT_71052af1b0 + (ulong)uVar2 * 8) + 0x20);
    }
  }
  if (*plVar10 == 0) {
    return 1;
  }
  lVar8 = *(long *)(*plVar10 + 0x10);
  if (lVar8 == 0) {
    return 1;
  }
  if (*(long *)(lVar8 + 0x10) == 0) {
    return 1;
  }
  plVar10 = &DAT_71052af138;
  if (DAT_71052af1d8 == '\0') {
LAB_71001f99dc:
    if ((*plVar10 != 0) && (lVar8 = *(long *)(*plVar10 + 0x10), lVar8 != 0)) {
      lVar8 = *(long *)(lVar8 + 0x10);
      goto LAB_71001f9a2c;
    }
  }
  else {
    puVar6 = (uint *)FUN_7101717960(DAT_71052af1d0);
    uVar2 = *puVar6;
    if (uVar2 == 0) goto LAB_71001f99dc;
    if ((ulong)uVar2 < (ulong)(DAT_71052af1b0[1] - *DAT_71052af1b0 >> 3)) {
      plVar10 = (long *)(*(long *)(*DAT_71052af1b0 + (ulong)uVar2 * 8) + 0x20);
      goto LAB_71001f99dc;
    }
    FUN_71001b1300("..\\..\\..\\..\\.\\OnlineCore/src/Core/InstanceTable.h",0x47,0xe0000003,0);
  }
  lVar8 = 0;
LAB_71001f9a2c:
  FUN_71001d8440(lVar8,*(long **)(param_1 + 0x2b8));
  plVar7 = *(long **)(param_1 + 0x2b8);
  plVar10 = plVar7 + 1;
  iVar9 = (int)*plVar10;
  iVar5 = (int)*plVar10 + -1;
  if (iVar9 == (int)*plVar10) {
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar10,0x10);
    if (bVar4) {
      *(int *)plVar10 = iVar5;
      cVar3 = ExclusiveMonitorsStatus();
    }
    while (cVar3 != '\0') {
LAB_71001f9a70:
      while( true ) {
        iVar1 = (int)*plVar10;
        iVar5 = iVar9 + -1;
        if (iVar1 == iVar9) break;
        ClearExclusiveLocal();
        iVar9 = iVar1;
      }
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      iVar9 = iVar1;
      if (bVar4) {
        *(int *)plVar10 = iVar5;
        cVar3 = ExclusiveMonitorsStatus();
      }
    }
    if ((iVar5 == 0) && (*(char *)((long)plVar7 + 0xc) == '\0')) {
      *(undefined1 *)((long)plVar7 + 0xc) = 1;
      (**(code **)(*plVar7 + 8))();
    }
    *(undefined8 *)(param_1 + 0x2b8) = 0;
    return 1;
  }
  ClearExclusiveLocal();
  goto LAB_71001f9a70;
}

