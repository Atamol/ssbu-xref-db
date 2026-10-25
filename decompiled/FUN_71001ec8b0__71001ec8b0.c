// addr:      71001ec8b0
// offset:    0x1ec8b0
// name:      FUN_71001ec8b0
// mangled:   
// signature: undefined __cdecl FUN_71001ec8b0(long param_1)


/* WARNING: Removing unreachable block (ram,0x0071001eccf8) */
/* WARNING: Removing unreachable block (ram,0x0071001ecd0c) */

void FUN_71001ec8b0(long param_1)

{
  int iVar1;
  uint uVar2;
  char cVar3;
  bool bVar4;
  ushort uVar5;
  char *__s;
  uint *puVar6;
  size_t sVar7;
  undefined8 *puVar8;
  long *plVar9;
  ulong uVar10;
  long lVar11;
  int iVar12;
  int iVar13;
  long *plVar14;
  uint uVar15;
  undefined1 auStack_170 [24];
  undefined **local_158;
  undefined1 local_150 [16];
  undefined1 *local_140;
  undefined8 local_138;
  undefined **local_130;
  char local_128 [16];
  char *local_118;
  undefined8 local_110;
  undefined8 auStack_f8 [2];
  void *local_e8;
  undefined **local_d8;
  long *local_d0;
  undefined4 local_c8;
  undefined8 **local_c0;
  undefined8 *local_b8;
  undefined8 uStack_b0;
  undefined8 **local_a8;
  undefined8 *local_a0;
  undefined8 uStack_98;
  undefined8 **local_90;
  undefined8 *local_88;
  undefined8 uStack_80;
  char *local_78;
  ushort local_70;
  undefined1 local_6e;
  
  plVar9 = &DAT_71052af128;
  if (DAT_71052af1d8 != '\0') {
    puVar6 = (uint *)FUN_7101717960(DAT_71052af1d0);
    uVar15 = *puVar6;
    if (uVar15 != 0) {
      if ((ulong)(DAT_71052af1b0[1] - *DAT_71052af1b0 >> 3) <= (ulong)uVar15) {
        FUN_71001b1300("..\\..\\..\\..\\.\\OnlineCore/src/Core/InstanceTable.h",0x47,0xe0000003,0);
        return;
      }
      plVar9 = (long *)(*(long *)(*DAT_71052af1b0 + (ulong)uVar15 * 8) + 0x10);
    }
  }
  local_130 = &PTR_FUN_710509cc08;
  local_118 = local_128;
  local_128[0] = '\0';
  local_110 = 0x10;
  FUN_71001b47e0((long)&local_130,
                 *(char **)(**(long **)(*(long *)(*(long *)(*plVar9 + 0x10) + 0xe8) + 0x1e0) + 8),-1
                );
  local_78 = (char *)0x0;
  local_b8 = (undefined8 *)0x0;
  uStack_b0 = 0;
  local_d8 = &PTR_FUN_7104f57900;
  local_a0 = (undefined8 *)0x0;
  uStack_98 = 0;
  local_c0 = &local_b8;
  local_a8 = &local_a0;
  local_90 = &local_88;
  local_88 = (undefined8 *)0x0;
  uStack_80 = 0;
  local_6e = 0;
  local_70 = 0x100;
  local_d0 = FUN_71001af850(0x90);
  if (local_d0 != (long *)0x0) {
    FUN_71001beb40(local_d0);
  }
  __s = local_118;
  if (local_78 != (char *)0x0) {
    FUN_71001b1870((long)(local_78 + -4));
    local_78 = (char *)0x0;
    local_70 = local_70 & 0xff;
  }
  if (__s != (char *)0x0) {
    sVar7 = strlen(__s);
    puVar8 = FUN_71001b1820(sVar7 + 5);
    local_78 = (char *)((long)puVar8 + 4);
    *(int *)puVar8 = (int)(sVar7 + 1);
    strncpy(local_78,__s,sVar7 + 1);
    local_78[sVar7] = '\0';
    local_70 = 0x100;
    local_6e = 0;
  }
  local_130 = &PTR_FUN_710509cc08;
  FUN_71001b4910((long)&local_130);
  uVar5 = DAT_7104f575ee;
  if ((char)local_70 == '\0') {
    FUN_71001f2180((long)&local_d8);
  }
  FUN_71001bee30((long)local_d0,uVar5);
  cVar3 = (char)local_70;
  local_70 = local_70 & 0xff;
  if (cVar3 == '\0') {
    FUN_71001f2180((long)&local_d8);
  }
  local_70 = local_70 & 0xff;
  local_c8 = 3;
  plVar9 = FUN_71001af850(0x38);
  if (plVar9 != (long *)0x0) {
    *plVar9 = (long)&PTR_FUN_710523be40;
    *(undefined4 *)(plVar9 + 1) = 1;
    *(undefined1 *)((long)plVar9 + 0xc) = 0;
    *plVar9 = (long)&PTR_FUN_7104f56018;
    uVar10 = FUN_71001cf750();
    FUN_71001cf760((long)plVar9,uVar10,0);
  }
  FUN_71001d0120(auStack_f8);
  local_140 = local_150;
  local_150[0] = 0;
  local_138 = 0x10;
  local_158 = &PTR_FUN_710509cc08;
  FUN_71001b47e0((long)&local_158,"Dummy",-1);
  FUN_71001cfa20(&local_130,(long)&local_158);
  FUN_71001d05f0((long)auStack_f8,(long)&local_130);
  FUN_71001cfad0(&local_130);
  local_158 = &PTR_FUN_710509cc08;
  FUN_71001b4910((long)&local_158);
  FUN_71001cb870((long)plVar9,local_e8,*(size_t *)((long)local_e8 + 0x18),0xffffffffffffffff);
  if (DAT_7104f575fc != 0) {
    uVar15 = 0;
    do {
      plVar14 = &DAT_71052af128;
      if (DAT_71052af1d8 == '\0') {
LAB_71001ecbe0:
        if ((*plVar14 == 0) || (lVar11 = *(long *)(*plVar14 + 0x10), lVar11 == 0))
        goto LAB_71001ecc40;
        plVar14 = *(long **)(lVar11 + 0xe8);
        uVar10 = (ulong)*(uint *)(*(long *)(param_1 + 0x20) + 8);
        if (DAT_71052af1d8 != '\0') goto LAB_71001ecc04;
LAB_71001ecc54:
        lVar11 = uVar10 * 0x2e8 + 0x71052af4f0;
      }
      else {
        puVar6 = (uint *)FUN_7101717960(DAT_71052af1d0);
        uVar2 = *puVar6;
        if (uVar2 == 0) goto LAB_71001ecbe0;
        if ((ulong)uVar2 < (ulong)(DAT_71052af1b0[1] - *DAT_71052af1b0 >> 3)) {
          plVar14 = (long *)(*(long *)(*DAT_71052af1b0 + (ulong)uVar2 * 8) + 0x10);
          goto LAB_71001ecbe0;
        }
        FUN_71001b1300("..\\..\\..\\..\\.\\OnlineCore/src/Core/InstanceTable.h",0x47,0xe0000003,0);
LAB_71001ecc40:
        plVar14 = (long *)0x0;
        uVar10 = (ulong)*(uint *)(*(long *)(param_1 + 0x20) + 8);
        if (DAT_71052af1d8 == '\0') goto LAB_71001ecc54;
LAB_71001ecc04:
        puVar6 = (uint *)FUN_7101717960(DAT_71052af1d0);
        if (*puVar6 == 0) goto LAB_71001ecc54;
        lVar11 = *(long *)(&DAT_71052af4e8 + uVar10 * 0x2e8) + (ulong)*puVar6 * 0x168;
      }
      (**(code **)(*plVar14 + 0x98))
                (auStack_170,plVar14,*(undefined4 *)(lVar11 + 0x140),&local_d8,plVar9);
      uVar15 = uVar15 + 1;
    } while (uVar15 < DAT_7104f575fc);
  }
  plVar14 = plVar9 + 1;
  iVar13 = (int)*plVar14;
  iVar12 = (int)*plVar14 + -1;
  if (iVar13 == (int)*plVar14) {
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar14,0x10);
    if (bVar4) {
      *(int *)plVar14 = iVar12;
      cVar3 = ExclusiveMonitorsStatus();
    }
    if (cVar3 == '\0') goto LAB_71001ecd1c;
  }
  else {
    ClearExclusiveLocal();
  }
  do {
    while( true ) {
      iVar1 = (int)*plVar14;
      iVar12 = iVar13 + -1;
      if (iVar1 == iVar13) break;
      ClearExclusiveLocal();
      iVar13 = iVar1;
    }
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar14,0x10);
    if (bVar4) {
      *(int *)plVar14 = iVar12;
      cVar3 = ExclusiveMonitorsStatus();
    }
    iVar13 = iVar1;
  } while (cVar3 != '\0');
LAB_71001ecd1c:
  if ((iVar12 == 0) && (*(char *)((long)plVar9 + 0xc) == '\0')) {
    *(undefined1 *)((long)plVar9 + 0xc) = 1;
    (**(code **)(*plVar9 + 8))(plVar9);
  }
  FUN_71001d0250(auStack_f8);
  local_d8 = &PTR_FUN_7104f57900;
  if (local_78 != (char *)0x0) {
    FUN_71001b1870((long)(local_78 + -4));
    local_78 = (char *)0x0;
    local_70 = local_70 & 0xff;
  }
  if (local_d0 != (long *)0x0) {
    (**(code **)(*local_d0 + 8))();
  }
  FUN_7101711670(&local_90,local_88);
  FUN_7101711670(&local_a8,local_a0);
  FUN_7100219ca0(&local_c0,local_b8);
  return;
}

