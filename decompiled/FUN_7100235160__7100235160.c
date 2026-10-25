// addr:      7100235160
// offset:    0x235160
// name:      FUN_7100235160
// mangled:   
// signature: undefined __cdecl FUN_7100235160(undefined8 * param_1)


/* WARNING: Removing unreachable block (ram,0x007100235308) */
/* WARNING: Removing unreachable block (ram,0x0071002351f8) */
/* WARNING: Removing unreachable block (ram,0x0071002351e4) */
/* WARNING: Removing unreachable block (ram,0x00710023531c) */

void FUN_7100235160(undefined8 *param_1)

{
  long *plVar1;
  int iVar2;
  uint uVar3;
  char cVar4;
  bool bVar5;
  long *plVar6;
  uint *puVar7;
  int iVar8;
  int iVar9;
  
  *param_1 = &PTR_FUN_7104f5be18;
  plVar6 = (long *)param_1[2];
  if (plVar6 != (long *)0x0) {
    plVar1 = plVar6 + 1;
    iVar9 = (int)*plVar1;
    iVar8 = (int)*plVar1 + -1;
    if (iVar9 != (int)*plVar1) {
      ClearExclusiveLocal();
      goto LAB_71002351c0;
    }
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar5) {
      *(int *)plVar1 = iVar8;
      cVar4 = ExclusiveMonitorsStatus();
    }
    while (cVar4 != '\0') {
LAB_71002351c0:
      while( true ) {
        iVar2 = (int)*plVar1;
        iVar8 = iVar9 + -1;
        if (iVar2 == iVar9) break;
        ClearExclusiveLocal();
        iVar9 = iVar2;
      }
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      iVar9 = iVar2;
      if (bVar5) {
        *(int *)plVar1 = iVar8;
        cVar4 = ExclusiveMonitorsStatus();
      }
    }
    if ((iVar8 == 0) && (*(char *)((long)plVar6 + 0xc) == '\0')) {
      *(undefined1 *)((long)plVar6 + 0xc) = 1;
      (**(code **)(*plVar6 + 8))();
    }
    param_1[2] = 0;
  }
  plVar6 = &DAT_71052af180;
  if (DAT_71052af1d8 == '\0') {
LAB_7100235280:
    if (*plVar6 == 0) goto LAB_71002352a8;
    plVar6 = *(long **)(*plVar6 + 0x10);
  }
  else {
    puVar7 = (uint *)FUN_7101717960(DAT_71052af1d0);
    uVar3 = *puVar7;
    if (uVar3 == 0) goto LAB_7100235280;
    if ((ulong)uVar3 < (ulong)(DAT_71052af1b0[1] - *DAT_71052af1b0 >> 3)) {
      plVar6 = (long *)(*(long *)(*DAT_71052af1b0 + (ulong)uVar3 * 8) + 0x68);
      goto LAB_7100235280;
    }
    FUN_71001b1300("..\\..\\..\\..\\.\\OnlineCore/src/Core/InstanceTable.h",0x47,0xe0000003,0);
LAB_71002352a8:
    plVar6 = (long *)0x0;
  }
  plVar1 = plVar6 + 1;
  iVar9 = (int)*plVar1;
  iVar8 = (int)*plVar1 + -1;
  if (iVar9 == (int)*plVar1) {
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar5) {
      *(int *)plVar1 = iVar8;
      cVar4 = ExclusiveMonitorsStatus();
    }
    if (cVar4 == '\0') goto LAB_710023532c;
  }
  else {
    ClearExclusiveLocal();
  }
  do {
    while( true ) {
      iVar2 = (int)*plVar1;
      iVar8 = iVar9 + -1;
      if (iVar2 == iVar9) break;
      ClearExclusiveLocal();
      iVar9 = iVar2;
    }
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar5) {
      *(int *)plVar1 = iVar8;
      cVar4 = ExclusiveMonitorsStatus();
    }
    iVar9 = iVar2;
  } while (cVar4 != '\0');
LAB_710023532c:
  if ((iVar8 == 0) && (*(char *)((long)plVar6 + 0xc) == '\0')) {
    *(undefined1 *)((long)plVar6 + 0xc) = 1;
                    /* WARNING: Could not recover jumptable at 0x00710023535c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar6 + 8))();
    return;
  }
  return;
}

