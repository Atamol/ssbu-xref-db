// addr:      71001d2570
// offset:    0x1d2570
// name:      FUN_71001d2570
// mangled:   
// signature: undefined __cdecl FUN_71001d2570(long param_1)


/* WARNING: Removing unreachable block (ram,0x0071001d26e4) */
/* WARNING: Removing unreachable block (ram,0x0071001d26d0) */

void FUN_71001d2570(long param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  char cVar5;
  bool bVar6;
  undefined8 *puVar7;
  uint *puVar8;
  long lVar9;
  int iVar10;
  long lVar11;
  long *plVar12;
  long *plVar13;
  undefined **local_58;
  undefined1 local_50 [16];
  undefined1 *local_40;
  undefined8 local_38;
  
  puVar7 = FUN_71001af850(0x88);
  if (puVar7 == (undefined8 *)0x0) {
    *(undefined8 *)(param_1 + 0x80) = 0;
  }
  else {
    local_50[0] = 0;
    local_40 = local_50;
    local_38 = 0x10;
    local_58 = &PTR_FUN_710509cc08;
    FUN_71001b47e0((long)&local_58,"CallContextRegister::CheckExpiredCalls",-1);
    *puVar7 = &PTR_FUN_710523be40;
    *(undefined4 *)(puVar7 + 1) = 1;
    *(undefined1 *)((long)puVar7 + 0xc) = 0;
    puVar7[2] = 0;
    puVar7[3] = 0;
    *(undefined4 *)(puVar7 + 6) = 0;
    *(undefined4 *)(puVar7 + 7) = 0;
    puVar7[10] = 0;
    puVar7[0xb] = 0;
    *(undefined4 *)(puVar7 + 9) = 0;
    puVar7[5] = 0;
    *(undefined4 *)((long)puVar7 + 100) = 0;
    *(undefined2 *)(puVar7 + 0xc) = 0x100;
    *(undefined1 *)(puVar7 + 4) = 0;
    puVar7[8] = 1;
    puVar7[0xf] = param_1;
    *puVar7 = &PTR_FUN_7104f56ef8;
    *(undefined4 *)(puVar7 + 0x10) = 0;
    puVar7[0xd] = thunk_FUN_71001d29d0;
    puVar7[0xe] = 0;
    *(undefined8 **)(param_1 + 0x80) = puVar7;
    local_58 = &PTR_FUN_710509cc08;
    FUN_71001b4910((long)&local_58);
  }
  lVar9 = *(long *)(param_1 + 0x80);
  *(undefined4 *)(lVar9 + 100) = DAT_71052af0d0;
  *(undefined1 *)(lVar9 + 0x61) = 0;
  piVar2 = (int *)(lVar9 + 8);
  iVar10 = *piVar2;
  if (iVar10 != *piVar2) {
    ClearExclusiveLocal();
    goto LAB_71001d26ac;
  }
  cVar5 = '\x01';
  bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
  if (bVar6) {
    *piVar2 = *piVar2 + 1;
    cVar5 = ExclusiveMonitorsStatus();
  }
  while (cVar5 != '\0') {
LAB_71001d26ac:
    while (iVar3 = *piVar2, iVar3 != iVar10) {
      ClearExclusiveLocal();
      iVar10 = iVar3;
    }
    iVar1 = iVar10 + 1;
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
    iVar10 = iVar3;
    if (bVar6) {
      *piVar2 = iVar1;
      cVar5 = ExclusiveMonitorsStatus();
    }
  }
  plVar12 = &DAT_71052af138;
  if (DAT_71052af1d8 == '\0') {
LAB_71001d2748:
    if ((*plVar12 != 0) && (lVar9 = *(long *)(*plVar12 + 0x10), lVar9 != 0)) {
      lVar9 = *(long *)(lVar9 + 0x10);
      goto LAB_71001d277c;
    }
  }
  else {
    puVar8 = (uint *)FUN_7101717960(DAT_71052af1d0);
    uVar4 = *puVar8;
    if (uVar4 == 0) goto LAB_71001d2748;
    if ((ulong)uVar4 < (ulong)(DAT_71052af1b0[1] - *DAT_71052af1b0 >> 3)) {
      plVar12 = (long *)(*(long *)(*DAT_71052af1b0 + (ulong)uVar4 * 8) + 0x20);
      goto LAB_71001d2748;
    }
    FUN_71001b1300("..\\..\\..\\..\\.\\OnlineCore/src/Core/InstanceTable.h",0x47,0xe0000003,0);
  }
  lVar9 = 0;
LAB_71001d277c:
  lVar11 = *(long *)(param_1 + 0x80);
  if (DAT_7104f561d1 == '\0') {
    FUN_71001d8820(lVar9,lVar11,0);
  }
  else {
    plVar12 = (long *)(lVar9 + 0xc0);
    (**(code **)(*plVar12 + 0x10))(plVar12);
    plVar13 = (long *)(lVar9 + 0x30);
    (**(code **)(*plVar13 + 0x10))(plVar13);
    FUN_71001d8820(lVar9,lVar11,0);
    (**(code **)(*plVar13 + 0x20))(plVar13);
    (**(code **)(*plVar12 + 0x20))(plVar12);
  }
  return;
}

