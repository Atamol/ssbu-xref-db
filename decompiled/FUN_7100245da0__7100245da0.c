// addr:      7100245da0
// offset:    0x245da0
// name:      FUN_7100245da0
// mangled:   
// signature: undefined4 __cdecl FUN_7100245da0(long * param_1, long param_2)


/* WARNING: Removing unreachable block (ram,0x007100245f90) */
/* WARNING: Removing unreachable block (ram,0x007100245ed4) */
/* WARNING: Removing unreachable block (ram,0x007100245ee8) */
/* WARNING: Removing unreachable block (ram,0x007100245f7c) */

undefined4 FUN_7100245da0(long *param_1,long param_2)

{
  int iVar1;
  long *plVar2;
  int *piVar3;
  uint uVar4;
  char cVar5;
  bool bVar6;
  int iVar7;
  uint *puVar8;
  long *plVar9;
  long lVar10;
  int iVar11;
  undefined4 uVar12;
  long *plVar13;
  
  plVar13 = &DAT_71052af138;
  if (DAT_71052af1d8 == '\0') {
LAB_7100245e0c:
    if ((*plVar13 != 0) && (lVar10 = *(long *)(*plVar13 + 0x10), lVar10 != 0)) {
      lVar10 = *(long *)(lVar10 + 0x10);
      goto LAB_7100245e40;
    }
  }
  else {
    puVar8 = (uint *)FUN_7101717960(DAT_71052af1d0);
    uVar4 = *puVar8;
    if (uVar4 == 0) goto LAB_7100245e0c;
    if ((ulong)uVar4 < (ulong)(DAT_71052af1b0[1] - *DAT_71052af1b0 >> 3)) {
      plVar13 = (long *)(*(long *)(*DAT_71052af1b0 + (ulong)uVar4 * 8) + 0x20);
      goto LAB_7100245e0c;
    }
    FUN_71001b1300("..\\..\\..\\..\\.\\OnlineCore/src/Core/InstanceTable.h",0x47,0xe0000003,0);
  }
  lVar10 = 0;
LAB_7100245e40:
  plVar13 = (long *)(lVar10 + 0x78);
  (**(code **)(*plVar13 + 0x10))(plVar13);
  if (param_2 == 0) {
    uVar12 = 0;
  }
  else {
    (**(code **)(*param_1 + 0x40))(param_1,param_2);
    plVar9 = (long *)param_1[2];
    if (plVar9 != (long *)0x0) {
      plVar2 = plVar9 + 1;
      iVar11 = (int)*plVar2;
      iVar7 = (int)*plVar2 + -1;
      if (iVar11 != (int)*plVar2) {
        ClearExclusiveLocal();
        goto LAB_7100245eb0;
      }
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar6) {
        *(int *)plVar2 = iVar7;
        cVar5 = ExclusiveMonitorsStatus();
      }
      while (cVar5 != '\0') {
LAB_7100245eb0:
        while( true ) {
          iVar1 = (int)*plVar2;
          iVar7 = iVar11 + -1;
          if (iVar1 == iVar11) break;
          ClearExclusiveLocal();
          iVar11 = iVar1;
        }
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        iVar11 = iVar1;
        if (bVar6) {
          *(int *)plVar2 = iVar7;
          cVar5 = ExclusiveMonitorsStatus();
        }
      }
      if ((iVar7 == 0) && (*(char *)((long)plVar9 + 0xc) == '\0')) {
        *(undefined1 *)((long)plVar9 + 0xc) = 1;
        (**(code **)(*plVar9 + 8))();
      }
      param_1[2] = 0;
    }
    param_1[2] = param_2;
    piVar3 = (int *)(param_2 + 8);
    iVar11 = *piVar3;
    if (iVar11 != *piVar3) {
      ClearExclusiveLocal();
      goto LAB_7100245f58;
    }
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(piVar3,0x10);
    if (bVar6) {
      *piVar3 = *piVar3 + 1;
      cVar5 = ExclusiveMonitorsStatus();
    }
    while (cVar5 != '\0') {
LAB_7100245f58:
      while (iVar7 = *piVar3, iVar7 != iVar11) {
        ClearExclusiveLocal();
        iVar11 = iVar7;
      }
      iVar1 = iVar11 + 1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar3,0x10);
      iVar11 = iVar7;
      if (bVar6) {
        *piVar3 = iVar1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    }
    (**(code **)(*param_1 + 0x38))(param_1);
    uVar12 = 1;
  }
  (**(code **)(*plVar13 + 0x20))(plVar13);
  return uVar12;
}

