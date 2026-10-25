// addr:      71001e2270
// offset:    0x1e2270
// name:      FUN_71001e2270
// mangled:   
// signature: undefined __cdecl FUN_71001e2270(undefined8 * param_1, undefined8 param_2, ushort param_3, uint param_4, long param_5, undefined4 param_6)


void FUN_71001e2270(undefined8 *param_1,undefined8 param_2,ushort param_3,uint param_4,long param_5,
                   undefined4 param_6)

{
  int *piVar1;
  long *plVar2;
  int iVar3;
  uint uVar4;
  char cVar5;
  bool bVar6;
  uint *puVar7;
  long *plVar8;
  undefined8 uVar9;
  int iVar10;
  int iVar11;
  undefined8 *puVar12;
  
  *param_1 = &PTR_FUN_710523be40;
  *(undefined4 *)(param_1 + 1) = 1;
  *(undefined1 *)((long)param_1 + 0xc) = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  *(undefined1 *)(param_1 + 8) = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  *param_1 = &PTR_FUN_7104f58250;
  *(undefined4 *)((long)param_1 + 0x42) = 0;
  param_1[0xb] = 0;
  *(undefined2 *)(param_1 + 0xc) = 0;
  *(undefined2 *)(param_1 + 0xe) = 0;
  *(undefined2 *)(param_1 + 0x10) = 0;
  param_1[0xd] = &PTR_FUN_7104f59348;
  param_1[0xf] = &PTR_FUN_7104f59348;
  param_1[0x13] = 0;
  *(undefined1 *)(param_1 + 0x14) = 0;
  *(undefined4 *)((long)param_1 + 0xa1) = 0;
  *(undefined4 *)(param_1 + 0x15) = 0;
  *(undefined2 *)((long)param_1 + 0xac) = 0;
  *(undefined2 *)((long)param_1 + 0xcc) = 0;
  *(undefined4 *)(param_1 + 0x1a) = 0;
  *(undefined1 *)(param_1 + 0x26) = 0;
  param_1[0x1d] = &PTR_FUN_7104f59978;
  param_1[0x1e] = 0;
  param_1[0x1b] = &PTR_FUN_7104f59938;
  param_1[0x1c] = 0;
  param_1[0x27] = 0;
  FUN_71001beb40(param_1 + 0x28);
  param_1[0x3a] = 0;
  param_1[0x3b] = 0;
  param_1[0x3c] = 0;
  puVar12 = (undefined8 *)0x0;
  *(undefined4 *)(param_1 + 0x3d) = 0xffffffff;
  param_1[0x41] = 0;
  param_1[0x45] = 0;
  *param_1 = &PTR_FUN_7104f58fc8;
  if (((param_4 >> 6 & 1) == 0) || (puVar12 = FUN_71001b4580(0x30,0), puVar12 == (undefined8 *)0x0))
  goto LAB_71001e243c;
  *(undefined4 *)(puVar12 + 1) = 0;
  puVar12[2] = 0;
  puVar12[3] = 0;
  *puVar12 = &PTR_FUN_7104f583c8;
  puVar12[4] = 0;
  plVar8 = &DAT_71052af138;
  if (DAT_71052af1d8 == '\0') {
LAB_71001e240c:
    uVar9 = 0;
    if (*plVar8 != 0) {
      uVar9 = *(undefined8 *)(*plVar8 + 0x10);
    }
  }
  else {
    puVar7 = (uint *)FUN_7101717960(DAT_71052af1d0);
    uVar4 = *puVar7;
    if (uVar4 == 0) goto LAB_71001e240c;
    if ((ulong)uVar4 < (ulong)(DAT_71052af1b0[1] - *DAT_71052af1b0 >> 3)) {
      plVar8 = (long *)(*(long *)(*DAT_71052af1b0 + (ulong)uVar4 * 8) + 0x20);
      goto LAB_71001e240c;
    }
    FUN_71001b1300("..\\..\\..\\..\\.\\OnlineCore/src/Core/InstanceTable.h",0x47,0xe0000003,0);
    uVar9 = 0;
  }
  puVar12[5] = uVar9;
LAB_71001e243c:
  *(undefined4 *)(param_1 + 0x40) = 0;
  param_1[0x45] = 0;
  param_1[0x41] = 0;
  param_1[0x3f] = param_2;
  *(ushort *)(param_1 + 0xc) = (ushort)param_4 & 0xfff0 | param_3 & 0xf | *(ushort *)(param_1 + 0xc)
  ;
  *(undefined4 *)(param_1 + 0x46) = param_6;
  if (param_5 != 0) {
    piVar1 = (int *)(param_5 + 8);
    iVar3 = *piVar1;
    if (iVar3 != *piVar1) {
      ClearExclusiveLocal();
      iVar10 = iVar3;
      goto LAB_71001e24a0;
    }
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar6) {
      *piVar1 = *piVar1 + 1;
      cVar5 = ExclusiveMonitorsStatus();
    }
    while (iVar10 = iVar3, cVar5 != '\0') {
LAB_71001e24a0:
      while (iVar3 = *piVar1, iVar3 != iVar10) {
        ClearExclusiveLocal();
        iVar10 = iVar3;
      }
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar6) {
        *piVar1 = iVar10 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    }
    plVar8 = (long *)param_1[0x27];
    if (plVar8 != (long *)0x0) {
      plVar2 = plVar8 + 1;
      iVar3 = (int)*plVar2;
      iVar10 = (int)*plVar2 + -1;
      if (iVar3 != (int)*plVar2) {
        ClearExclusiveLocal();
        iVar11 = iVar3;
        goto LAB_71001e2518;
      }
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar6) {
        *(int *)plVar2 = iVar10;
        cVar5 = ExclusiveMonitorsStatus();
      }
      while (iVar11 = iVar3, cVar5 != '\0') {
LAB_71001e2518:
        while( true ) {
          iVar3 = (int)*plVar2;
          iVar10 = iVar11 + -1;
          if (iVar3 == iVar11) break;
          ClearExclusiveLocal();
          iVar11 = iVar3;
        }
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar6) {
          *(int *)plVar2 = iVar10;
          cVar5 = ExclusiveMonitorsStatus();
        }
      }
      if ((iVar10 == 0) && (*(char *)((long)plVar8 + 0xc) == '\0')) {
        *(undefined1 *)((long)plVar8 + 0xc) = 1;
        (**(code **)(*plVar8 + 8))();
      }
    }
    param_1[0x27] = param_5;
  }
  param_1[0x3e] = puVar12;
  *(undefined2 *)(param_1 + 0x42) = 0;
  param_1[0x43] = 0;
  *(undefined4 *)(param_1 + 0x44) = 0;
  return;
}

