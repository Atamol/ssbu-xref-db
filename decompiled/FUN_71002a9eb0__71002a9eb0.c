// addr:      71002a9eb0
// offset:    0x2a9eb0
// name:      FUN_71002a9eb0
// mangled:   
// signature: undefined8 __cdecl FUN_71002a9eb0(long param_1, long param_2)


/* WARNING: Removing unreachable block (ram,0x0071002aa100) */
/* WARNING: Removing unreachable block (ram,0x0071002aa0ec) */

undefined8 FUN_71002a9eb0(long param_1,long param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  char cVar6;
  bool bVar7;
  uint *puVar8;
  undefined8 *puVar9;
  long lVar10;
  int iVar11;
  undefined8 uVar12;
  long *plVar13;
  long *plVar14;
  undefined **local_60;
  code *pcStack_58;
  undefined8 local_50;
  undefined1 *puStack_48;
  
  plVar13 = &DAT_71052af138;
  if (DAT_71052af1d8 == '\0') {
LAB_71002a9f24:
    if ((*plVar13 == 0) || (lVar10 = *(long *)(*plVar13 + 0x10), lVar10 == 0)) goto LAB_71002a9f54;
    lVar10 = *(long *)(lVar10 + 0x10);
  }
  else {
    puVar8 = (uint *)FUN_7101717960(DAT_71052af1d0);
    uVar4 = *puVar8;
    if (uVar4 == 0) goto LAB_71002a9f24;
    if ((ulong)uVar4 < (ulong)(DAT_71052af1b0[1] - *DAT_71052af1b0 >> 3)) {
      plVar13 = (long *)(*(long *)(*DAT_71052af1b0 + (ulong)uVar4 * 8) + 0x20);
      goto LAB_71002a9f24;
    }
    FUN_71001b1300("..\\..\\..\\..\\.\\OnlineCore/src/Core/InstanceTable.h",0x47,0xe0000003,0);
LAB_71002a9f54:
    lVar10 = 0;
  }
  plVar13 = (long *)(lVar10 + 0x78);
  (**(code **)(*plVar13 + 0x10))(plVar13);
  if (*(long *)(param_1 + 0x38) != 0) {
    FUN_71002aac90(param_1);
  }
  puVar9 = FUN_71001af850(400);
  if (puVar9 != (undefined8 *)0x0) {
    FUN_71001d38d0(puVar9,2);
    *puVar9 = &DAT_7104f60f28;
    puVar9[0x14] = param_1;
    puVar9[0x15] = &PTR_FUN_7104f61618;
    uVar12 = *(undefined8 *)(param_2 + 8);
    uVar5 = *(undefined4 *)(param_2 + 0x10);
    puVar9[0x18] = &PTR_FUN_7104f61578;
    puVar9[0x19] = 0;
    *(undefined4 *)(puVar9 + 0x17) = uVar5;
    puVar9[0x16] = uVar12;
    puVar9[0x1a] = &PTR_FUN_710509cc08;
    *(undefined1 *)(puVar9 + 0x1b) = 0;
    puVar9[0x1d] = puVar9 + 0x1b;
    puVar9[0x1e] = 0x10;
    FUN_71001b3cb0((long)(puVar9 + 0x1a),"");
    *(undefined4 *)(puVar9 + 0x1f) = 0;
    puVar9[0x18] = &PTR_FUN_7104f61658;
    puVar9[0x20] = &PTR_FUN_710523be40;
    *(undefined4 *)(puVar9 + 0x21) = 1;
    *(undefined1 *)((long)puVar9 + 0x10c) = 0;
    puVar9[0x22] = 0;
    *(undefined4 *)(puVar9 + 0x23) = 0;
    puVar9[0x2a] = 0;
    puVar9[0x26] = 0;
    puVar9[0x27] = 0;
    puVar9[0x28] = 0;
    puVar9[0x29] = 0;
    puVar9[0x20] = &PTR_FUN_7104f56058;
    puVar9[0x24] = puVar9 + 0x24;
    puVar9[0x25] = puVar9 + 0x24;
    local_60 = (undefined **)CONCAT44(local_60._4_4_,0x80010001);
    FUN_71001b4200((undefined4 *)(puVar9 + 0x2b),(undefined4 *)&local_60);
    puVar9[0x2e] = 0;
    *(undefined4 *)(puVar9 + 0x2f) = 0;
    puVar9[0x30] = 0;
    puVar9[0x31] = 0;
  }
  *(undefined8 **)(param_1 + 0x38) = puVar9;
  piVar2 = (int *)(puVar9 + 1);
  iVar11 = *piVar2;
  if (iVar11 != *piVar2) {
    ClearExclusiveLocal();
    goto LAB_71002aa0c8;
  }
  cVar6 = '\x01';
  bVar7 = (bool)ExclusiveMonitorPass(piVar2,0x10);
  if (bVar7) {
    *piVar2 = *piVar2 + 1;
    cVar6 = ExclusiveMonitorsStatus();
  }
  while (cVar6 != '\0') {
LAB_71002aa0c8:
    while (iVar3 = *piVar2, iVar3 != iVar11) {
      ClearExclusiveLocal();
      iVar11 = iVar3;
    }
    iVar1 = iVar11 + 1;
    cVar6 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(piVar2,0x10);
    iVar11 = iVar3;
    if (bVar7) {
      *piVar2 = iVar1;
      cVar6 = ExclusiveMonitorsStatus();
    }
  }
  local_60 = &PTR_FUN_7104f56e28;
  pcStack_58 = FUN_71002a9b20;
  local_50 = 0;
  puStack_48 = &DAT_71044114cc;
  FUN_71001d3d60(*(long *)(param_1 + 0x38),(long)&local_60);
  plVar14 = &DAT_71052af138;
  if (DAT_71052af1d8 == '\0') {
LAB_71002aa184:
    if ((*plVar14 != 0) && (lVar10 = *(long *)(*plVar14 + 0x10), lVar10 != 0)) {
      lVar10 = *(long *)(lVar10 + 0x10);
      goto LAB_71002aa1b8;
    }
  }
  else {
    puVar8 = (uint *)FUN_7101717960(DAT_71052af1d0);
    uVar4 = *puVar8;
    if (uVar4 == 0) goto LAB_71002aa184;
    if ((ulong)uVar4 < (ulong)(DAT_71052af1b0[1] - *DAT_71052af1b0 >> 3)) {
      plVar14 = (long *)(*(long *)(*DAT_71052af1b0 + (ulong)uVar4 * 8) + 0x20);
      goto LAB_71002aa184;
    }
    FUN_71001b1300("..\\..\\..\\..\\.\\OnlineCore/src/Core/InstanceTable.h",0x47,0xe0000003,0);
  }
  lVar10 = 0;
LAB_71002aa1b8:
  FUN_71001ccdf0(lVar10,*(long *)(param_1 + 0x38),0);
  (**(code **)(*plVar13 + 0x20))(plVar13);
  return 1;
}

