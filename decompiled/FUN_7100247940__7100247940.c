// addr:      7100247940
// offset:    0x247940
// name:      FUN_7100247940
// mangled:   
// signature: undefined __cdecl FUN_7100247940(undefined4 * param_1, long param_2, long * param_3, undefined4 param_4, char * param_5, long param_6, long param_7, long param_8, char * param_9, undefined4 param_10, undefined8 param_11, long param_12)


/* WARNING: Removing unreachable block (ram,0x007100247a44) */
/* WARNING: Removing unreachable block (ram,0x007100247a58) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7100247940(undefined4 *param_1,long param_2,long *param_3,undefined4 param_4,char *param_5,
                   long param_6,long param_7,long param_8,char *param_9,undefined4 param_10,
                   undefined8 param_11,long param_12)

{
  long *plVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  char cVar5;
  bool bVar6;
  long *plVar7;
  uint *puVar8;
  undefined8 *puVar9;
  long lVar10;
  int iVar11;
  int iVar12;
  undefined8 local_100 [15];
  undefined **local_88;
  code *pcStack_80;
  undefined8 local_78;
  undefined1 *puStack_70;
  
  *(undefined8 *)(param_2 + 0x210) = 0xc800000000;
  *(undefined4 *)(param_2 + 0x230) = 0;
  local_88 = (undefined **)CONCAT44(local_88._4_4_,0x10001);
  FUN_71001b4200((undefined4 *)local_100,(undefined4 *)&local_88);
  FUN_71001b4300((undefined4 *)(param_2 + 0x218),(undefined4 *)local_100);
  *(undefined4 *)(param_2 + 0x238) = 0;
  if (((param_3 == (long *)0x0) || (param_5 == (char *)0x0)) || ((param_6 != 0 && (param_7 == 0))))
  {
    local_100[0]._0_4_ = 0x8001000a;
    goto LAB_7100247aa8;
  }
  plVar7 = *(long **)(param_2 + 0x1f8);
  if (plVar7 == (long *)0x0) {
LAB_7100247a8c:
    bVar6 = FUN_710023a680(param_2);
    if ((((!bVar6) && (*(long *)(param_2 + 0xc0) == 0)) &&
        ((*(long *)(param_2 + 0x200) == 0 || (*(int *)(*(long *)(param_2 + 0x200) + 0x40) == 5))))
       && (bVar6 = FUN_710023a660(param_2), !bVar6)) {
      FUN_7100247ff0(param_2,param_5,0xffffffff);
      FUN_71001e6a50(local_100);
      plVar7 = &DAT_71052af128;
      if (DAT_71052af1d8 == '\0') {
LAB_7100247b64:
        if ((*plVar7 == 0) || (lVar10 = *(long *)(*plVar7 + 0x10), lVar10 == 0))
        goto LAB_7100247b94;
        lVar10 = *(long *)(lVar10 + 0xe8);
      }
      else {
        puVar8 = (uint *)FUN_7101717960(DAT_71052af1d0);
        uVar4 = *puVar8;
        if (uVar4 == 0) goto LAB_7100247b64;
        if ((ulong)uVar4 < (ulong)(DAT_71052af1b0[1] - *DAT_71052af1b0 >> 3)) {
          plVar7 = (long *)(*(long *)(*DAT_71052af1b0 + (ulong)uVar4 * 8) + 0x10);
          goto LAB_7100247b64;
        }
        FUN_71001b1300("..\\..\\..\\..\\.\\OnlineCore/src/Core/InstanceTable.h",0x47,0xe0000003,0);
LAB_7100247b94:
        lVar10 = 0;
      }
      FUN_71001e8580(lVar10,(long)local_100);
      bVar6 = FUN_71001ccd00(param_3);
      if (!bVar6) {
        local_88 = (undefined **)CONCAT44(local_88._4_4_,0x8001000d);
        goto LAB_7100247f90;
      }
      if (param_8 == 0) {
        puVar9 = FUN_71001af850(0x238);
        if (puVar9 != (undefined8 *)0x0) {
          FUN_71001d38d0(puVar9,2);
          *puVar9 = &DAT_7104f5c568;
          FUN_710022e6b0(puVar9 + 0x14,0);
          puVar9[0x2c] = 0;
          puVar9[0x2d] = 0;
          puVar9[0x2e] = 0;
          *(undefined4 *)(puVar9 + 0x2f) = 0;
          *(undefined1 *)(puVar9 + 0x34) = 0;
          puVar9[0x30] = 0;
          puVar9[0x31] = &PTR_FUN_7104f5c998;
          puVar9[0x32] = 0;
          puVar9[0x33] = &PTR_FUN_710509cc08;
          puVar9[0x36] = puVar9 + 0x34;
          puVar9[0x37] = 0x10;
          *puVar9 = &DAT_7104f5c6d0;
          FUN_71001d44e0(puVar9 + 0x38);
          puVar9[0x41] = puVar9 + 0x3f;
          puVar9[0x3e] = &PTR_FUN_710509cc08;
          *(undefined1 *)(puVar9 + 0x3f) = 0;
          puVar9[0x42] = 0x10;
          puVar9[0x46] = 0;
          puVar9[0x44] = &PTR_FUN_7104f5c748;
        }
        *(int *)(puVar9 + 0x2c) = (int)param_3[3];
        *(undefined4 *)((long)puVar9 + 0x164) = param_4;
        puVar9[0x2d] = param_2;
        *(undefined4 *)(puVar9 + 0x2f) = param_10;
        if (param_12 == 0) {
          FUN_71001b12a0((ulong *)&local_88);
          puVar9[0x30] = local_88;
          puVar9[0x43] = param_11;
          FUN_71001b3cb0((long)(puVar9 + 0x3e),param_9);
          pcStack_80 = FUN_7100249190;
        }
        else {
          FUN_71001b12a0((ulong *)&local_88);
          puVar9[0x46] = param_12;
          puVar9[0x30] = local_88;
          pcStack_80 = FUN_7100249040;
        }
        local_88 = &PTR_FUN_7104f56e28;
        local_78 = 0;
        puStack_70 = &DAT_71044114cc;
        FUN_71001d3d60((long)puVar9,(long)&local_88);
      }
      else {
        puVar9 = FUN_71001af850(0x1d0);
        if (puVar9 == (undefined8 *)0x0) {
          _DAT_00000160 = (undefined4)param_3[3];
          _DAT_00000178 = param_10;
          _DAT_00000164 = param_4;
          _DAT_00000168 = param_2;
          FUN_71001b12a0((ulong *)&local_88);
          _DAT_00000180 = local_88;
          local_88 = &PTR_FUN_7104f56e28;
          _DAT_000001c8 = param_11;
          pcStack_80 = FUN_71002489e0;
          local_78 = 0;
          puStack_70 = &DAT_71044114cc;
          _DAT_000001c0 = param_8;
          FUN_71001d3d60(0,(long)&local_88);
        }
        else {
          FUN_71001d38d0(puVar9,2);
          *puVar9 = &DAT_7104f5c568;
          FUN_710022e6b0(puVar9 + 0x14,0);
          puVar9[0x36] = puVar9 + 0x34;
          puVar9[0x37] = 0x10;
          puVar9[0x2e] = 0;
          puVar9[0x30] = 0;
          puVar9[0x31] = &PTR_FUN_7104f5c998;
          *(undefined1 *)(puVar9 + 0x34) = 0;
          puVar9[0x32] = 0;
          puVar9[0x33] = &PTR_FUN_710509cc08;
          puVar9[0x38] = 0;
          puVar9[0x39] = 0;
          *puVar9 = &DAT_7104f5c5e0;
          *(int *)(puVar9 + 0x2c) = (int)param_3[3];
          *(undefined4 *)((long)puVar9 + 0x164) = param_4;
          puVar9[0x2d] = param_2;
          *(undefined4 *)(puVar9 + 0x2f) = param_10;
          FUN_71001b12a0((ulong *)&local_88);
          puVar9[0x30] = local_88;
          puVar9[0x38] = param_8;
          puVar9[0x39] = param_11;
          local_88 = &PTR_FUN_7104f56e28;
          pcStack_80 = FUN_71002489e0;
          local_78 = 0;
          puStack_70 = &DAT_71044114cc;
          FUN_71001d3d60((long)puVar9,(long)&local_88);
        }
      }
      *(undefined8 **)(param_2 + 0x1f8) = puVar9;
      piVar2 = (int *)(puVar9 + 1);
      iVar12 = *piVar2;
      if (iVar12 != *piVar2) {
        ClearExclusiveLocal();
        iVar11 = iVar12;
        goto LAB_7100247ed0;
      }
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar6) {
        *piVar2 = *piVar2 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
      while (iVar11 = iVar12, cVar5 != '\0') {
LAB_7100247ed0:
        while (iVar12 = *piVar2, iVar12 != iVar11) {
          ClearExclusiveLocal();
          iVar11 = iVar12;
        }
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar6) {
          *piVar2 = iVar11 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      }
      plVar7 = &DAT_71052af138;
      if (DAT_71052af1d8 == '\0') {
LAB_7100247f4c:
        if ((*plVar7 == 0) || (lVar10 = *(long *)(*plVar7 + 0x10), lVar10 == 0))
        goto LAB_7100247f7c;
        lVar10 = *(long *)(lVar10 + 0x10);
      }
      else {
        puVar8 = (uint *)FUN_7101717960(DAT_71052af1d0);
        uVar4 = *puVar8;
        if (uVar4 == 0) goto LAB_7100247f4c;
        if ((ulong)uVar4 < (ulong)(DAT_71052af1b0[1] - *DAT_71052af1b0 >> 3)) {
          plVar7 = (long *)(*(long *)(*DAT_71052af1b0 + (ulong)uVar4 * 8) + 0x20);
          goto LAB_7100247f4c;
        }
        FUN_71001b1300("..\\..\\..\\..\\.\\OnlineCore/src/Core/InstanceTable.h",0x47,0xe0000003,0);
LAB_7100247f7c:
        lVar10 = 0;
      }
      FUN_71001ccdf0(lVar10,*(long *)(param_2 + 0x1f8),0);
      local_88 = (undefined **)CONCAT44(local_88._4_4_,0x10001);
LAB_7100247f90:
      FUN_71001b4200(param_1,(undefined4 *)&local_88);
      FUN_71001e6b00(local_100);
      return;
    }
  }
  else if ((int)plVar7[8] == 5) {
    plVar1 = plVar7 + 1;
    iVar12 = (int)*plVar1;
    iVar11 = (int)*plVar1 + -1;
    if (iVar12 != (int)*plVar1) {
      ClearExclusiveLocal();
      goto LAB_7100247a20;
    }
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar6) {
      *(int *)plVar1 = iVar11;
      cVar5 = ExclusiveMonitorsStatus();
    }
    while (cVar5 != '\0') {
LAB_7100247a20:
      while( true ) {
        iVar3 = (int)*plVar1;
        iVar11 = iVar12 + -1;
        if (iVar3 == iVar12) break;
        ClearExclusiveLocal();
        iVar12 = iVar3;
      }
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      iVar12 = iVar3;
      if (bVar6) {
        *(int *)plVar1 = iVar11;
        cVar5 = ExclusiveMonitorsStatus();
      }
    }
    if ((iVar11 == 0) && (*(char *)((long)plVar7 + 0xc) == '\0')) {
      *(undefined1 *)((long)plVar7 + 0xc) = 1;
      (**(code **)(*plVar7 + 8))();
    }
    *(undefined8 *)(param_2 + 0x1f8) = 0;
    goto LAB_7100247a8c;
  }
  local_100[0]._0_4_ = 0x80010004;
LAB_7100247aa8:
  FUN_71001b4200(param_1,(undefined4 *)local_100);
  return;
}

