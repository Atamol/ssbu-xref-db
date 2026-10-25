// addr:      710023a2d0
// offset:    0x23a2d0
// name:      FUN_710023a2d0
// mangled:   
// signature: undefined4 __cdecl FUN_710023a2d0(long param_1)


/* WARNING: Removing unreachable block (ram,0x00710023a59c) */
/* WARNING: Removing unreachable block (ram,0x00710023a3fc) */
/* WARNING: Removing unreachable block (ram,0x00710023a410) */
/* WARNING: Removing unreachable block (ram,0x00710023a588) */

undefined4 FUN_710023a2d0(long param_1)

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
  undefined8 *puVar10;
  long lVar11;
  int iVar12;
  undefined4 uVar13;
  long *plVar14;
  undefined **local_60;
  code *pcStack_58;
  undefined8 local_50;
  undefined1 *puStack_48;
  
  plVar9 = &DAT_71052af138;
  if (DAT_71052af1d8 == '\0') {
LAB_710023a340:
    if ((*plVar9 == 0) || (lVar11 = *(long *)(*plVar9 + 0x10), lVar11 == 0)) goto LAB_710023a370;
    lVar11 = *(long *)(lVar11 + 0x10);
  }
  else {
    puVar8 = (uint *)FUN_7101717960(DAT_71052af1d0);
    uVar4 = *puVar8;
    if (uVar4 == 0) goto LAB_710023a340;
    if ((ulong)uVar4 < (ulong)(DAT_71052af1b0[1] - *DAT_71052af1b0 >> 3)) {
      plVar9 = (long *)(*(long *)(*DAT_71052af1b0 + (ulong)uVar4 * 8) + 0x20);
      goto LAB_710023a340;
    }
    FUN_71001b1300("..\\..\\..\\..\\.\\OnlineCore/src/Core/InstanceTable.h",0x47,0xe0000003,0);
LAB_710023a370:
    lVar11 = 0;
  }
  plVar14 = (long *)(lVar11 + 0x78);
  (**(code **)(*plVar14 + 0x10))(plVar14);
  plVar9 = *(long **)(param_1 + 0x108);
  if (plVar9 != (long *)0x0) {
    if ((int)plVar9[8] != 5) {
      uVar13 = 0;
      goto LAB_710023a634;
    }
    plVar2 = plVar9 + 1;
    iVar12 = (int)*plVar2;
    iVar7 = (int)*plVar2 + -1;
    if (iVar12 != (int)*plVar2) {
      ClearExclusiveLocal();
      goto LAB_710023a3d8;
    }
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(plVar2,0x10);
    if (bVar6) {
      *(int *)plVar2 = iVar7;
      cVar5 = ExclusiveMonitorsStatus();
    }
    while (cVar5 != '\0') {
LAB_710023a3d8:
      while( true ) {
        iVar1 = (int)*plVar2;
        iVar7 = iVar12 + -1;
        if (iVar1 == iVar12) break;
        ClearExclusiveLocal();
        iVar12 = iVar1;
      }
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      iVar12 = iVar1;
      if (bVar6) {
        *(int *)plVar2 = iVar7;
        cVar5 = ExclusiveMonitorsStatus();
      }
    }
    if ((iVar7 == 0) && (*(char *)((long)plVar9 + 0xc) == '\0')) {
      *(undefined1 *)((long)plVar9 + 0xc) = 1;
      (**(code **)(*plVar9 + 8))();
    }
    *(undefined8 *)(param_1 + 0x108) = 0;
  }
  puVar10 = FUN_71001af850(0x140);
  if (puVar10 != (undefined8 *)0x0) {
    uVar13 = *(undefined4 *)(*(long *)(param_1 + 0xb0) + 0x18);
    FUN_71001d38d0(puVar10,2);
    *puVar10 = &PTR_FUN_7104f5b870;
    puVar10[0x16] = &PTR_FUN_710523be40;
    *(undefined4 *)(puVar10 + 0x17) = 1;
    *(undefined1 *)((long)puVar10 + 0xbc) = 0;
    puVar10[0x18] = 0;
    *(undefined4 *)(puVar10 + 0x19) = 0;
    puVar10[0x20] = 0;
    puVar10[0x1c] = 0;
    puVar10[0x1d] = 0;
    puVar10[0x1e] = 0;
    puVar10[0x1f] = 0;
    puVar10[0x16] = &PTR_FUN_7104f56058;
    puVar10[0x1a] = puVar10 + 0x1a;
    puVar10[0x1b] = puVar10 + 0x1a;
    local_60 = (undefined **)CONCAT44(local_60._4_4_,0x80010001);
    FUN_71001b4200((undefined4 *)(puVar10 + 0x21),(undefined4 *)&local_60);
    puVar10[0x24] = 0;
    *(undefined4 *)(puVar10 + 0x25) = 0;
    puVar10[0x26] = 0;
    puVar10[0x27] = 0;
    *(undefined4 *)(puVar10 + 0x15) = uVar13;
    puVar10[0x13] = 0x1000;
    puVar10[0x14] = param_1;
    local_60 = &PTR_FUN_7104f56e28;
    pcStack_58 = FUN_7100240e40;
    local_50 = 0;
    puStack_48 = &DAT_71044114cc;
    FUN_71001d3d60((long)puVar10,(long)&local_60);
  }
  *(undefined8 **)(param_1 + 0x108) = puVar10;
  piVar3 = (int *)(puVar10 + 1);
  iVar12 = *piVar3;
  if (iVar12 != *piVar3) {
    ClearExclusiveLocal();
    goto LAB_710023a564;
  }
  cVar5 = '\x01';
  bVar6 = (bool)ExclusiveMonitorPass(piVar3,0x10);
  if (bVar6) {
    *piVar3 = *piVar3 + 1;
    cVar5 = ExclusiveMonitorsStatus();
  }
  while (cVar5 != '\0') {
LAB_710023a564:
    while (iVar7 = *piVar3, iVar7 != iVar12) {
      ClearExclusiveLocal();
      iVar12 = iVar7;
    }
    iVar1 = iVar12 + 1;
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(piVar3,0x10);
    iVar12 = iVar7;
    if (bVar6) {
      *piVar3 = iVar1;
      cVar5 = ExclusiveMonitorsStatus();
    }
  }
  plVar9 = &DAT_71052af138;
  if (DAT_71052af1d8 == '\0') {
LAB_710023a5f0:
    if ((*plVar9 == 0) || (lVar11 = *(long *)(*plVar9 + 0x10), lVar11 == 0)) goto LAB_710023a620;
    lVar11 = *(long *)(lVar11 + 0x10);
  }
  else {
    puVar8 = (uint *)FUN_7101717960(DAT_71052af1d0);
    uVar4 = *puVar8;
    if (uVar4 == 0) goto LAB_710023a5f0;
    if ((ulong)uVar4 < (ulong)(DAT_71052af1b0[1] - *DAT_71052af1b0 >> 3)) {
      plVar9 = (long *)(*(long *)(*DAT_71052af1b0 + (ulong)uVar4 * 8) + 0x20);
      goto LAB_710023a5f0;
    }
    FUN_71001b1300("..\\..\\..\\..\\.\\OnlineCore/src/Core/InstanceTable.h",0x47,0xe0000003,0);
LAB_710023a620:
    lVar11 = 0;
  }
  FUN_71001ccdf0(lVar11,*(long *)(param_1 + 0x108),0);
  uVar13 = 1;
LAB_710023a634:
  (**(code **)(*plVar14 + 0x20))(plVar14);
  return uVar13;
}

