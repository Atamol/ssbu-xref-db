// addr:      710023a020
// offset:    0x23a020
// name:      FUN_710023a020
// mangled:   
// signature: undefined4 __cdecl FUN_710023a020(long param_1, long * param_2, long param_3)


/* WARNING: Removing unreachable block (ram,0x00710023a1dc) */
/* WARNING: Removing unreachable block (ram,0x00710023a0b0) */
/* WARNING: Removing unreachable block (ram,0x00710023a0c4) */
/* WARNING: Removing unreachable block (ram,0x00710023a1c8) */
/* WARNING: Type propagation algorithm not settling */

undefined4 FUN_710023a020(long param_1,long *param_2,long param_3)

{
  int iVar1;
  long *plVar2;
  int *piVar3;
  uint uVar4;
  char cVar5;
  int iVar6;
  bool bVar7;
  long *plVar8;
  undefined8 *puVar9;
  uint *puVar10;
  long lVar11;
  int iVar12;
  undefined4 local_4c;
  undefined8 auStack_48 [3];
  
  plVar8 = *(long **)(param_1 + 0x100);
  if (plVar8 != (long *)0x0) {
    if ((int)plVar8[8] != 5) {
      return 0;
    }
    plVar2 = plVar8 + 1;
    iVar12 = (int)*plVar2;
    iVar6 = (int)*plVar2 + -1;
    if (iVar12 != (int)*plVar2) {
      ClearExclusiveLocal();
      goto LAB_710023a08c;
    }
    cVar5 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(plVar2,0x10);
    if (bVar7) {
      *(int *)plVar2 = iVar6;
      cVar5 = ExclusiveMonitorsStatus();
    }
    while (cVar5 != '\0') {
LAB_710023a08c:
      while( true ) {
        iVar1 = (int)*plVar2;
        iVar6 = iVar12 + -1;
        if (iVar1 == iVar12) break;
        ClearExclusiveLocal();
        iVar12 = iVar1;
      }
      cVar5 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      iVar12 = iVar1;
      if (bVar7) {
        *(int *)plVar2 = iVar6;
        cVar5 = ExclusiveMonitorsStatus();
      }
    }
    if ((iVar6 == 0) && (*(char *)((long)plVar8 + 0xc) == '\0')) {
      *(undefined1 *)((long)plVar8 + 0xc) = 1;
      (**(code **)(*plVar8 + 8))();
    }
    *(undefined8 *)(param_1 + 0x100) = 0;
  }
  bVar7 = FUN_71001ccd00(param_2);
  if (!bVar7) {
    return 0;
  }
  if (*(long *)(param_1 + 0xc0) == 0) {
    local_4c = 0x10001;
    FUN_71001b4200((undefined4 *)auStack_48,&local_4c);
    FUN_71001d0f00(param_2,2,auStack_48,1);
    return 1;
  }
  puVar9 = FUN_71001af850(0x158);
  if (puVar9 != (undefined8 *)0x0) {
    FUN_7100240370(puVar9,(int)param_2[3],param_1,param_3);
  }
  *(undefined8 **)(param_1 + 0x100) = puVar9;
  piVar3 = (int *)(puVar9 + 1);
  iVar12 = *piVar3;
  if (iVar12 != *piVar3) {
    ClearExclusiveLocal();
    goto LAB_710023a1a4;
  }
  cVar5 = '\x01';
  bVar7 = (bool)ExclusiveMonitorPass(piVar3,0x10);
  if (bVar7) {
    *piVar3 = *piVar3 + 1;
    cVar5 = ExclusiveMonitorsStatus();
  }
  while (cVar5 != '\0') {
LAB_710023a1a4:
    while (iVar6 = *piVar3, iVar6 != iVar12) {
      ClearExclusiveLocal();
      iVar12 = iVar6;
    }
    iVar1 = iVar12 + 1;
    cVar5 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(piVar3,0x10);
    iVar12 = iVar6;
    if (bVar7) {
      *piVar3 = iVar1;
      cVar5 = ExclusiveMonitorsStatus();
    }
  }
  plVar8 = &DAT_71052af138;
  if (DAT_71052af1d8 == '\0') {
LAB_710023a240:
    if ((*plVar8 != 0) && (lVar11 = *(long *)(*plVar8 + 0x10), lVar11 != 0)) {
      lVar11 = *(long *)(lVar11 + 0x10);
      goto LAB_710023a274;
    }
  }
  else {
    puVar10 = (uint *)FUN_7101717960(DAT_71052af1d0);
    uVar4 = *puVar10;
    if (uVar4 == 0) goto LAB_710023a240;
    if ((ulong)uVar4 < (ulong)(DAT_71052af1b0[1] - *DAT_71052af1b0 >> 3)) {
      plVar8 = (long *)(*(long *)(*DAT_71052af1b0 + (ulong)uVar4 * 8) + 0x20);
      goto LAB_710023a240;
    }
    FUN_71001b1300("..\\..\\..\\..\\.\\OnlineCore/src/Core/InstanceTable.h",0x47,0xe0000003,0);
  }
  lVar11 = 0;
LAB_710023a274:
  FUN_71001ccdf0(lVar11,*(long *)(param_1 + 0x100),0);
  return 1;
}

