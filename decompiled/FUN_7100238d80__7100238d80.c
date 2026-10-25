// addr:      7100238d80
// offset:    0x238d80
// name:      FUN_7100238d80
// mangled:   
// signature: undefined __cdecl FUN_7100238d80(void)


/* WARNING: Removing unreachable block (ram,0x007100238e84) */
/* WARNING: Removing unreachable block (ram,0x007100238e98) */

void FUN_7100238d80(void)

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
  
  (**(code **)(DAT_71052af1e0 + 0x10))(&DAT_71052af1e0);
  plVar7 = &DAT_71052af180;
  if (DAT_71052af1d8 == '\0') {
LAB_7100238dfc:
    if (*plVar7 == 0) goto LAB_7100238e24;
    plVar7 = *(long **)(*plVar7 + 0x10);
  }
  else {
    puVar6 = (uint *)FUN_7101717960(DAT_71052af1d0);
    uVar3 = *puVar6;
    if (uVar3 == 0) goto LAB_7100238dfc;
    if ((ulong)uVar3 < (ulong)(DAT_71052af1b0[1] - *DAT_71052af1b0 >> 3)) {
      plVar7 = (long *)(*(long *)(*DAT_71052af1b0 + (ulong)uVar3 * 8) + 0x68);
      goto LAB_7100238dfc;
    }
    FUN_71001b1300("..\\..\\..\\..\\.\\OnlineCore/src/Core/InstanceTable.h",0x47,0xe0000003,0);
LAB_7100238e24:
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
    if (cVar4 == '\0') goto LAB_7100238ea8;
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
LAB_7100238ea8:
  if ((iVar8 == 0) && (*(char *)((long)plVar7 + 0xc) == '\0')) {
    *(undefined1 *)((long)plVar7 + 0xc) = 1;
    (**(code **)(*plVar7 + 8))();
  }
  (**(code **)(DAT_71052af1e0 + 0x20))(&DAT_71052af1e0);
  FUN_71001d5c40();
  return;
}

