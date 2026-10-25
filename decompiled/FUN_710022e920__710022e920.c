// addr:      710022e920
// offset:    0x22e920
// name:      FUN_710022e920
// mangled:   
// signature: undefined __cdecl FUN_710022e920(long * param_1)


/* WARNING: Removing unreachable block (ram,0x00710022ea70) */
/* WARNING: Removing unreachable block (ram,0x00710022ea84) */

void FUN_710022e920(long *param_1)

{
  long *plVar1;
  int iVar2;
  uint uVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  uint *puVar7;
  long lVar8;
  int iVar9;
  long *plVar10;
  
  *param_1 = (long)&PTR_FUN_7104f5a710;
  if (*(int *)((long)param_1 + 0x14) != 1) goto LAB_710022ea0c;
  plVar10 = &DAT_71052af138;
  if (DAT_71052af1d8 == '\0') {
LAB_710022e9a4:
    if ((*plVar10 == 0) || (lVar8 = *(long *)(*plVar10 + 0x10), lVar8 == 0)) goto LAB_710022e9d4;
    lVar8 = *(long *)(lVar8 + 0x10);
  }
  else {
    puVar7 = (uint *)FUN_7101717960(DAT_71052af1d0);
    uVar3 = *puVar7;
    if (uVar3 == 0) goto LAB_710022e9a4;
    if ((ulong)uVar3 < (ulong)(DAT_71052af1b0[1] - *DAT_71052af1b0 >> 3)) {
      plVar10 = (long *)(*(long *)(*DAT_71052af1b0 + (ulong)uVar3 * 8) + 0x20);
      goto LAB_710022e9a4;
    }
    FUN_71001b1300("..\\..\\..\\..\\.\\OnlineCore/src/Core/InstanceTable.h",0x47,0xe0000003,0);
LAB_710022e9d4:
    lVar8 = 0;
  }
  plVar10 = (long *)(lVar8 + 0x78);
  (**(code **)(*plVar10 + 0x10))(plVar10);
  if (*(int *)((long)param_1 + 0x14) == 1) {
    FUN_71001d0a10(param_1);
  }
  (**(code **)(*plVar10 + 0x20))(plVar10);
LAB_710022ea0c:
  plVar10 = (long *)param_1[0x17];
  if (plVar10 != (long *)0x0) {
    plVar1 = plVar10 + 1;
    iVar9 = (int)*plVar1;
    iVar6 = (int)*plVar1 + -1;
    if (iVar9 != (int)*plVar1) {
      ClearExclusiveLocal();
      goto LAB_710022ea4c;
    }
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar5) {
      *(int *)plVar1 = iVar6;
      cVar4 = ExclusiveMonitorsStatus();
    }
    while (cVar4 != '\0') {
LAB_710022ea4c:
      while( true ) {
        iVar2 = (int)*plVar1;
        iVar6 = iVar9 + -1;
        if (iVar2 == iVar9) break;
        ClearExclusiveLocal();
        iVar9 = iVar2;
      }
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      iVar9 = iVar2;
      if (bVar5) {
        *(int *)plVar1 = iVar6;
        cVar4 = ExclusiveMonitorsStatus();
      }
    }
    if ((iVar6 == 0) && (*(char *)((long)plVar10 + 0xc) == '\0')) {
      *(undefined1 *)((long)plVar10 + 0xc) = 1;
      (**(code **)(*plVar10 + 8))();
    }
    param_1[0x17] = 0;
  }
  lVar8 = param_1[0x12];
  if (lVar8 != 0) {
    param_1[0x13] = lVar8;
    FUN_71001b1870(lVar8);
  }
  FUN_71001d0730(param_1);
  return;
}

