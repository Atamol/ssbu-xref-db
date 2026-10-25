// addr:      71001f5b60
// offset:    0x1f5b60
// name:      FUN_71001f5b60
// mangled:   
// signature: ulong __cdecl FUN_71001f5b60(long param_1, long * param_2)


/* WARNING: Removing unreachable block (ram,0x0071001f5e20) */
/* WARNING: Removing unreachable block (ram,0x0071001f5e34) */
/* WARNING: Removing unreachable block (ram,0x0071001f5f48) */
/* WARNING: Removing unreachable block (ram,0x0071001f5e8c) */
/* WARNING: Removing unreachable block (ram,0x0071001f5e78) */
/* WARNING: Removing unreachable block (ram,0x0071001f5f5c) */

ulong FUN_71001f5b60(long param_1,long *param_2)

{
  int iVar1;
  undefined2 uVar2;
  char cVar3;
  bool bVar4;
  uint uVar5;
  long *plVar6;
  uint *puVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  code *pcVar11;
  int iVar12;
  int iVar13;
  long *plVar14;
  undefined **local_c0;
  long *local_b8;
  undefined4 local_b0;
  undefined8 **local_a8;
  undefined8 *local_a0;
  undefined8 uStack_98;
  undefined8 **local_90;
  undefined8 *local_88;
  undefined8 uStack_80;
  undefined8 **local_78;
  undefined8 *local_70;
  undefined8 uStack_68;
  long local_60;
  ushort local_58;
  undefined1 local_56;
  ushort local_48 [4];
  
  local_48[0] = *(ushort *)((long)param_2 + 0x44);
  uVar2 = *(undefined2 *)((long)param_2 + 0xac);
  plVar6 = (long *)FUN_71001f59a0(param_1,local_48);
  if (plVar6 == (long *)0x0) {
    plVar6 = &DAT_71052af138;
    if (DAT_71052af1d8 == '\0') {
LAB_71001f5c80:
      if ((*plVar6 == 0) || (lVar10 = *(long *)(*plVar6 + 0x10), lVar10 == 0)) goto LAB_71001f5ed8;
      lVar10 = *(long *)(lVar10 + 0x10);
    }
    else {
      puVar7 = (uint *)FUN_7101717960(DAT_71052af1d0);
      uVar5 = *puVar7;
      if (uVar5 == 0) goto LAB_71001f5c80;
      if ((ulong)uVar5 < (ulong)(DAT_71052af1b0[1] - *DAT_71052af1b0 >> 3)) {
        plVar6 = (long *)(*(long *)(*DAT_71052af1b0 + (ulong)uVar5 * 8) + 0x20);
        goto LAB_71001f5c80;
      }
      FUN_71001b1300("..\\..\\..\\..\\.\\OnlineCore/src/Core/InstanceTable.h",0x47,0xe0000003,0);
LAB_71001f5ed8:
      lVar10 = 0;
    }
    plVar14 = (long *)(lVar10 + 0x78);
    (**(code **)(*plVar14 + 0x10))(plVar14);
    plVar6 = param_2 + 1;
    iVar13 = (int)*plVar6;
    iVar12 = (int)*plVar6 + -1;
    if (iVar13 != (int)*plVar6) {
      ClearExclusiveLocal();
      goto LAB_71001f5f24;
    }
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar6,0x10);
    if (bVar4) {
      *(int *)plVar6 = iVar12;
      cVar3 = ExclusiveMonitorsStatus();
    }
    while (cVar3 != '\0') {
LAB_71001f5f24:
      while( true ) {
        iVar1 = (int)*plVar6;
        iVar12 = iVar13 + -1;
        if (iVar1 == iVar13) break;
        ClearExclusiveLocal();
        iVar13 = iVar1;
      }
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      iVar13 = iVar1;
      if (bVar4) {
        *(int *)plVar6 = iVar12;
        cVar3 = ExclusiveMonitorsStatus();
      }
    }
    if ((iVar12 == 0) && (*(char *)((long)param_2 + 0xc) == '\0')) {
      *(undefined1 *)((long)param_2 + 0xc) = 1;
      (**(code **)(*param_2 + 8))(param_2);
    }
    pcVar11 = *(code **)(*plVar14 + 0x20);
    goto LAB_71001f5f9c;
  }
  plVar14 = *(long **)(*(long *)(param_1 + 0x28) + 0x120);
  if (plVar14 == (long *)0x0) {
LAB_71001f5d94:
    uVar8 = (**(code **)(*plVar6 + 0x10))
                      (plVar6,uVar2,*(undefined1 *)((long)param_2 + 0x43),param_2);
    if ((uVar8 & 1) != 0) {
      return uVar8;
    }
    uVar5 = FUN_71001f10d0(*(long *)(param_1 + 0x28),param_2[0x27],(long)(param_2 + 0x28));
    uVar9 = (ulong)uVar5;
    plVar6 = param_2 + 1;
    iVar13 = (int)*plVar6;
    iVar12 = (int)*plVar6 + -1;
    if (iVar13 == (int)*plVar6) {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar4) {
        *(int *)plVar6 = iVar12;
        cVar3 = ExclusiveMonitorsStatus();
      }
      if (cVar3 == '\0') goto LAB_71001f5e9c;
    }
    else {
      ClearExclusiveLocal();
    }
    do {
      while( true ) {
        iVar1 = (int)*plVar6;
        iVar12 = iVar13 + -1;
        if (iVar1 == iVar13) break;
        ClearExclusiveLocal();
        iVar13 = iVar1;
      }
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar4) {
        *(int *)plVar6 = iVar12;
        cVar3 = ExclusiveMonitorsStatus();
      }
      iVar13 = iVar1;
    } while (cVar3 != '\0');
  }
  else {
    local_60 = 0;
    local_a0 = (undefined8 *)0x0;
    uStack_98 = 0;
    local_c0 = &PTR_FUN_7104f57900;
    local_88 = (undefined8 *)0x0;
    uStack_80 = 0;
    local_a8 = &local_a0;
    local_90 = &local_88;
    local_78 = &local_70;
    local_70 = (undefined8 *)0x0;
    uStack_68 = 0;
    local_58 = 1;
    local_56 = 1;
    local_b8 = FUN_71001af850(0x90);
    if (local_b8 != (long *)0x0) {
      FUN_71001beb40(local_b8);
    }
    if ((char)local_58 == '\0') {
      FUN_71001f2180((long)&local_c0);
      cVar3 = (char)local_58;
      local_b0 = 1;
      local_58 = local_58 & 0xff;
      if (cVar3 == '\0') {
        FUN_71001f2180((long)&local_c0);
      }
    }
    else {
      local_b0 = 1;
      local_58 = local_58 & 0xff;
    }
    FUN_71001bec20((long)local_b8,(long)(param_2 + 0x28));
    local_58 = local_58 & 0xff;
    uVar8 = (**(code **)(*plVar14 + 0x18))(plVar14,&local_c0,uVar2);
    if ((char)local_58 == '\0') {
      FUN_71001f2180((long)&local_c0);
    }
    FUN_71001bec20((long)(param_2 + 0x28),(long)local_b8);
    local_c0 = &PTR_FUN_7104f57900;
    if (local_60 != 0) {
      FUN_71001b1870(local_60 + -4);
      local_60 = 0;
      local_58 = local_58 & 0xff;
    }
    if (local_b8 != (long *)0x0) {
      (**(code **)(*local_b8 + 8))();
    }
    FUN_7101711670(&local_78,local_70);
    FUN_7101711670(&local_90,local_88);
    uVar9 = FUN_7100219ca0(&local_a8,local_a0);
    if ((uVar8 & 1) == 0) goto LAB_71001f5d94;
    plVar6 = param_2 + 1;
    iVar13 = (int)*plVar6;
    iVar12 = (int)*plVar6 + -1;
    if (iVar13 != (int)*plVar6) {
      ClearExclusiveLocal();
      goto LAB_71001f5e54;
    }
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar6,0x10);
    if (bVar4) {
      *(int *)plVar6 = iVar12;
      cVar3 = ExclusiveMonitorsStatus();
    }
    while (cVar3 != '\0') {
LAB_71001f5e54:
      while( true ) {
        iVar1 = (int)*plVar6;
        iVar12 = iVar13 + -1;
        if (iVar1 == iVar13) break;
        ClearExclusiveLocal();
        iVar13 = iVar1;
      }
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      iVar13 = iVar1;
      if (bVar4) {
        *(int *)plVar6 = iVar12;
        cVar3 = ExclusiveMonitorsStatus();
      }
    }
  }
LAB_71001f5e9c:
  if (iVar12 != 0) {
    return uVar9;
  }
  if (*(char *)((long)param_2 + 0xc) != '\0') {
    return uVar9;
  }
  *(undefined1 *)((long)param_2 + 0xc) = 1;
  pcVar11 = *(code **)(*param_2 + 8);
  plVar14 = param_2;
LAB_71001f5f9c:
  uVar8 = (*pcVar11)(plVar14);
  return uVar8;
}

