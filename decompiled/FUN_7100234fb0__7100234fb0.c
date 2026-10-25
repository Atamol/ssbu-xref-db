// addr:      7100234fb0
// offset:    0x234fb0
// name:      FUN_7100234fb0
// mangled:   
// signature: undefined __cdecl FUN_7100234fb0(undefined8 * param_1, undefined4 param_2)


void FUN_7100234fb0(undefined8 *param_1,undefined4 param_2)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  char cVar4;
  bool bVar5;
  uint *puVar6;
  long lVar7;
  int iVar8;
  long *plVar9;
  
  *(undefined4 *)(param_1 + 1) = param_2;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  *param_1 = &PTR_FUN_7104f5be18;
  plVar9 = &DAT_71052af180;
  if (DAT_71052af1d8 != '\0') {
    puVar6 = (uint *)FUN_7101717960(DAT_71052af1d0);
    uVar3 = *puVar6;
    if (uVar3 != 0) {
      if ((ulong)(DAT_71052af1b0[1] - *DAT_71052af1b0 >> 3) <= (ulong)uVar3) {
        FUN_71001b1300("..\\..\\..\\..\\.\\OnlineCore/src/Core/InstanceTable.h",0x47,0xe0000003,0);
        goto LAB_71002350ac;
      }
      plVar9 = (long *)(*(long *)(*DAT_71052af1b0 + (ulong)uVar3 * 8) + 0x68);
    }
  }
  if ((*plVar9 == 0) || (*(long *)(*plVar9 + 0x10) == 0)) {
LAB_71002350ac:
    FUN_71002383f0();
    return;
  }
  plVar9 = &DAT_71052af180;
  if (DAT_71052af1d8 != '\0') {
    puVar6 = (uint *)FUN_7101717960(DAT_71052af1d0);
    uVar3 = *puVar6;
    if (uVar3 != 0) {
      if ((ulong)(DAT_71052af1b0[1] - *DAT_71052af1b0 >> 3) <= (ulong)uVar3) {
        FUN_71001b1300("..\\..\\..\\..\\.\\OnlineCore/src/Core/InstanceTable.h",0x47,0xe0000003,0);
        lVar7 = 0;
        goto LAB_71002350d8;
      }
      plVar9 = (long *)(*(long *)(*DAT_71052af1b0 + (ulong)uVar3 * 8) + 0x68);
    }
  }
  lVar7 = 0;
  if (*plVar9 != 0) {
    lVar7 = *(long *)(*plVar9 + 0x10);
  }
LAB_71002350d8:
  piVar1 = (int *)(lVar7 + 8);
  iVar8 = *piVar1;
  if (iVar8 == *piVar1) {
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
    while (iVar2 = *piVar1, iVar2 != iVar8) {
      ClearExclusiveLocal();
      iVar8 = iVar2;
    }
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar5) {
      *piVar1 = iVar8 + 1;
      cVar4 = ExclusiveMonitorsStatus();
    }
    iVar8 = iVar2;
  } while (cVar4 != '\0');
  return;
}

