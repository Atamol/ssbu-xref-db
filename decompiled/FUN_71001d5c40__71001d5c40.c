// addr:      71001d5c40
// offset:    0x1d5c40
// name:      FUN_71001d5c40
// mangled:   
// signature: undefined __cdecl FUN_71001d5c40(void)


/* WARNING: Removing unreachable block (ram,0x0071001d5d3c) */
/* WARNING: Removing unreachable block (ram,0x0071001d5d50) */

void FUN_71001d5c40(void)

{
  long *plVar1;
  int iVar2;
  uint uVar3;
  char cVar4;
  bool bVar5;
  uint *puVar6;
  long *plVar7;
  int iVar8;
  int iVar9;
  
  nn::os::LockMutex((MutexType *)&DAT_71052af1f0);
  plVar7 = &DAT_71052af138;
  if (DAT_71052af1d8 == '\0') {
LAB_71001d5cb4:
    if (*plVar7 == 0) goto LAB_71001d5cdc;
    plVar7 = *(long **)(*plVar7 + 0x10);
  }
  else {
    puVar6 = (uint *)FUN_7101717960(DAT_71052af1d0);
    uVar3 = *puVar6;
    if (uVar3 == 0) goto LAB_71001d5cb4;
    if ((ulong)uVar3 < (ulong)(DAT_71052af1b0[1] - *DAT_71052af1b0 >> 3)) {
      plVar7 = (long *)(*(long *)(*DAT_71052af1b0 + (ulong)uVar3 * 8) + 0x20);
      goto LAB_71001d5cb4;
    }
    FUN_71001b1300("..\\..\\..\\..\\.\\OnlineCore/src/Core/InstanceTable.h",0x47,0xe0000003,0);
LAB_71001d5cdc:
    plVar7 = (long *)0x0;
  }
  plVar1 = plVar7 + 1;
  iVar9 = (int)*plVar1;
  iVar8 = (int)*plVar1 + -1;
  if (iVar9 == (int)*plVar1) {
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar5) {
      *(int *)plVar1 = iVar8;
      cVar4 = ExclusiveMonitorsStatus();
    }
    if (cVar4 == '\0') goto LAB_71001d5d60;
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
LAB_71001d5d60:
  if ((iVar8 == 0) && (*(char *)((long)plVar7 + 0xc) == '\0')) {
    *(undefined1 *)((long)plVar7 + 0xc) = 1;
    (**(code **)(*plVar7 + 8))();
  }
  if (DAT_71052af0dc == 0) {
    DAT_71052ae108 = 0;
  }
  FUN_71001b89e0();
  nn::os::UnlockMutex((MutexType *)&DAT_71052af1f0);
  return;
}

