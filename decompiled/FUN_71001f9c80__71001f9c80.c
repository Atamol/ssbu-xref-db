// addr:      71001f9c80
// offset:    0x1f9c80
// name:      FUN_71001f9c80
// mangled:   
// signature: undefined __cdecl FUN_71001f9c80(long param_1)


/* WARNING: Removing unreachable block (ram,0x0071001f9efc) */
/* WARNING: Removing unreachable block (ram,0x0071001f9ee8) */

void FUN_71001f9c80(long param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  char cVar5;
  bool bVar6;
  uint *puVar7;
  undefined8 *puVar8;
  long lVar9;
  int iVar10;
  long *plVar11;
  undefined **local_68;
  undefined1 local_60 [16];
  undefined1 *local_50;
  undefined8 local_48;
  
  if (*(long *)(param_1 + 0x2b8) != 0) goto joined_r0x0071001f9e7c;
  plVar11 = &DAT_71052af138;
  if (DAT_71052af1d8 != '\0') {
    puVar7 = (uint *)FUN_7101717960(DAT_71052af1d0);
    uVar4 = *puVar7;
    if (uVar4 != 0) {
      if ((ulong)(DAT_71052af1b0[1] - *DAT_71052af1b0 >> 3) <= (ulong)uVar4) {
        FUN_71001b1300("..\\..\\..\\..\\.\\OnlineCore/src/Core/InstanceTable.h",0x47,0xe0000003,0);
        goto joined_r0x0071001f9e7c;
      }
      plVar11 = (long *)(*(long *)(*DAT_71052af1b0 + (ulong)uVar4 * 8) + 0x20);
    }
  }
  if (((*plVar11 == 0) || (lVar9 = *(long *)(*plVar11 + 0x10), lVar9 == 0)) ||
     (*(long *)(lVar9 + 0x10) == 0)) goto joined_r0x0071001f9e7c;
  puVar8 = FUN_71001af850(0x70);
  if (puVar8 == (undefined8 *)0x0) {
    lVar9 = 0;
    *(undefined8 *)(param_1 + 0x2b8) = 0;
  }
  else {
    local_60[0] = 0;
    local_50 = local_60;
    local_48 = 0x10;
    local_68 = &PTR_FUN_710509cc08;
    FUN_71001b47e0((long)&local_68,"SocketTransport::TransportJob",-1);
    FUN_71001cd210(puVar8,0);
    puVar8[0xd] = param_1;
    *(undefined1 *)((long)puVar8 + 0x61) = 0;
    *puVar8 = &PTR_FUN_7104f59128;
    *(undefined8 **)(param_1 + 0x2b8) = puVar8;
    local_68 = &PTR_FUN_710509cc08;
    FUN_71001b4910((long)&local_68);
    lVar9 = *(long *)(param_1 + 0x2b8);
  }
  piVar2 = (int *)(lVar9 + 8);
  iVar10 = *piVar2;
  if (iVar10 != *piVar2) {
    ClearExclusiveLocal();
    goto LAB_71001f9ec4;
  }
  cVar5 = '\x01';
  bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
  if (bVar6) {
    *piVar2 = *piVar2 + 1;
    cVar5 = ExclusiveMonitorsStatus();
  }
  while (cVar5 != '\0') {
LAB_71001f9ec4:
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
  plVar11 = &DAT_71052af138;
  if (DAT_71052af1d8 == '\0') {
LAB_71001f9f50:
    if ((*plVar11 == 0) || (lVar9 = *(long *)(*plVar11 + 0x10), lVar9 == 0)) goto LAB_71001f9f80;
    lVar9 = *(long *)(lVar9 + 0x10);
  }
  else {
    puVar7 = (uint *)FUN_7101717960(DAT_71052af1d0);
    uVar4 = *puVar7;
    if (uVar4 == 0) goto LAB_71001f9f50;
    if ((ulong)uVar4 < (ulong)(DAT_71052af1b0[1] - *DAT_71052af1b0 >> 3)) {
      plVar11 = (long *)(*(long *)(*DAT_71052af1b0 + (ulong)uVar4 * 8) + 0x20);
      goto LAB_71001f9f50;
    }
    FUN_71001b1300("..\\..\\..\\..\\.\\OnlineCore/src/Core/InstanceTable.h",0x47,0xe0000003,0);
LAB_71001f9f80:
    lVar9 = 0;
  }
  FUN_71001da260(lVar9,*(long *)(param_1 + 0x2b8),0);
joined_r0x0071001f9e7c:
  if (DAT_71052af0e4 != '\0') {
    if (*(long **)(param_1 + 0x2b0) != (long *)0x0) {
      (**(code **)(**(long **)(param_1 + 0x2b0) + 8))();
      plVar11 = *(long **)(param_1 + 0x510);
      *(undefined8 *)(param_1 + 0x2b0) = 0;
      if (plVar11 != (long *)0x0) {
        FUN_71001feb20(plVar11);
        FUN_71001af8a0((long)plVar11);
        *(undefined8 *)(param_1 + 0x510) = 0;
      }
    }
    if (DAT_7104f577b4 == '\0') {
      plVar11 = (long *)0x0;
    }
    else {
      plVar11 = FUN_71001af850(0x58);
      if (plVar11 != (long *)0x0) {
        FUN_71001fe990(plVar11,DAT_7104f577b8,(ulong)*(uint *)(param_1 + 0x98));
      }
    }
    *(long **)(param_1 + 0x510) = plVar11;
    plVar11 = FUN_71001af850(0x328);
    if (plVar11 != (long *)0x0) {
      FUN_71001f61e0(plVar11);
    }
    *(long **)(param_1 + 0x2b0) = plVar11;
  }
  return;
}

