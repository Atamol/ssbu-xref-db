// addr:      7101ba23f0
// offset:    0x1ba23f0
// name:      FUN_7101ba23f0
// mangled:   
// signature: undefined __cdecl FUN_7101ba23f0(long param_1, int param_2, ulong param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_7101ba23f0(long param_1,int param_2,ulong param_3,undefined8 param_4,undefined8 param_5,
                   undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long lVar1;
  long *plVar2;
  char *pcVar3;
  undefined8 uVar4;
  int iVar5;
  ulong uVar6;
  uint uVar7;
  uint uVar8;
  byte *pbVar9;
  int iVar10;
  ulong uVar11;
  uint uVar12;
  uint local_128 [2];
  byte local_120 [64];
  undefined8 local_e0;
  byte local_d8 [64];
  undefined8 local_98;
  byte local_90 [64];
  
  uVar11 = param_3 & 0xffffffff;
  uVar12 = 0x811c9dc5;
  local_90[0] = 0;
  local_98 = 0;
  iVar10 = (int)param_3;
  uVar4 = param_4;
  if (param_2 == -1) {
LAB_7101ba24f8:
    plVar2 = *(long **)(*(long *)(param_1 + 0x2b0) + 0x10);
    if (plVar2 != (long *)0x0) {
      param_3 = 0;
      uVar4 = 0;
      local_e0 = local_e0 & 0xffffffff00000000;
      FUN_71037a2270(plVar2,(ushort *)&local_e0,0,0);
    }
    lVar1 = *(long *)(param_1 + 0x2a0);
    pcVar3 = "no_assign";
  }
  else {
    uVar4 = 0;
    param_3 = uVar11;
    FUN_7101d38c00((uint *)&local_e0,param_2,iVar10,0);
    for (uVar6 = 0; local_d8[uVar6] != 0; uVar6 = uVar6 + 2) {
      local_90[uVar6] = local_d8[uVar6];
      if (0x3e < (int)uVar6 + 1U) {
        uVar6 = (ulong)((int)uVar6 + 1);
        break;
      }
      if (local_d8[uVar6 + 1] == 0) {
        uVar6 = uVar6 + 1;
        break;
      }
      local_90[uVar6 + 1] = local_d8[uVar6 + 1];
    }
    local_90[uVar6 & 0xffffffff] = 0;
    uVar7 = (uint)local_90[0];
    iVar5 = (int)uVar6;
    local_98 = CONCAT44(iVar5,(undefined4)local_98);
    uVar8 = uVar12;
    if (local_90[0] != 0) {
      pbVar9 = local_90;
      do {
        pbVar9 = pbVar9 + 1;
        uVar8 = uVar8 * 0x89 ^ uVar7;
        uVar7 = (uint)*pbVar9;
      } while (uVar7 != 0);
    }
    local_98 = CONCAT44(iVar5,uVar8);
    if (iVar5 < 1) goto LAB_7101ba24f8;
    FUN_710377a120(param_1 + 0x2a8,(char *)local_90,param_3,uVar4,param_5,param_6,param_7,param_8);
    lVar1 = *(long *)(param_1 + 0x2a0);
    pcVar3 = "single";
  }
  FUN_7103778300(0x3f800000,lVar1,(long)pcVar3);
  local_90[0] = 0;
  local_98 = 0;
  if (param_2 == -1) {
LAB_7101ba2600:
    plVar2 = *(long **)(*(long *)(param_1 + 0x300) + 0x10);
    if (plVar2 != (long *)0x0) {
      param_3 = 0;
      uVar4 = 0;
      local_e0 = local_e0 & 0xffffffff00000000;
      FUN_71037a2270(plVar2,(ushort *)&local_e0,0,0);
    }
    lVar1 = *(long *)(param_1 + 0x2f0);
    pcVar3 = "no_assign";
  }
  else {
    uVar4 = 0;
    param_3 = uVar11;
    FUN_7101d38c00((uint *)&local_e0,param_2,iVar10,0);
    for (uVar6 = 0; local_d8[uVar6] != 0; uVar6 = uVar6 + 2) {
      local_90[uVar6] = local_d8[uVar6];
      if (0x3e < (int)uVar6 + 1U) {
        uVar6 = (ulong)((int)uVar6 + 1);
        break;
      }
      if (local_d8[uVar6 + 1] == 0) {
        uVar6 = uVar6 + 1;
        break;
      }
      local_90[uVar6 + 1] = local_d8[uVar6 + 1];
    }
    local_90[uVar6 & 0xffffffff] = 0;
    uVar7 = (uint)local_90[0];
    iVar5 = (int)uVar6;
    local_98 = CONCAT44(iVar5,(undefined4)local_98);
    uVar8 = uVar12;
    if (local_90[0] != 0) {
      pbVar9 = local_90;
      do {
        pbVar9 = pbVar9 + 1;
        uVar8 = uVar8 * 0x89 ^ uVar7;
        uVar7 = (uint)*pbVar9;
      } while (uVar7 != 0);
    }
    local_98 = CONCAT44(iVar5,uVar8);
    if (iVar5 < 1) goto LAB_7101ba2600;
    FUN_710377a120(param_1 + 0x2f8,(char *)local_90,param_3,uVar4,param_5,param_6,param_7,param_8);
    lVar1 = *(long *)(param_1 + 0x2f0);
    pcVar3 = "stick_lr_btn";
  }
  FUN_7103778300(0x3f800000,lVar1,(long)pcVar3);
  local_90[0] = 0;
  local_98 = 0;
  if (param_2 == -1) {
LAB_7101ba2708:
    plVar2 = *(long **)(*(long *)(param_1 + 0x350) + 0x10);
    if (plVar2 != (long *)0x0) {
      param_3 = 0;
      uVar4 = 0;
      local_e0 = local_e0 & 0xffffffff00000000;
      FUN_71037a2270(plVar2,(ushort *)&local_e0,0,0);
    }
    lVar1 = *(long *)(param_1 + 0x340);
    pcVar3 = "no_assign";
  }
  else {
    uVar4 = 0;
    param_3 = uVar11;
    FUN_7101d38c00((uint *)&local_e0,param_2,iVar10,0);
    for (uVar6 = 0; local_d8[uVar6] != 0; uVar6 = uVar6 + 2) {
      local_90[uVar6] = local_d8[uVar6];
      if (0x3e < (int)uVar6 + 1U) {
        uVar6 = (ulong)((int)uVar6 + 1);
        break;
      }
      if (local_d8[uVar6 + 1] == 0) {
        uVar6 = uVar6 + 1;
        break;
      }
      local_90[uVar6 + 1] = local_d8[uVar6 + 1];
    }
    local_90[uVar6 & 0xffffffff] = 0;
    uVar7 = (uint)local_90[0];
    iVar5 = (int)uVar6;
    local_98 = CONCAT44(iVar5,(undefined4)local_98);
    uVar8 = uVar12;
    if (local_90[0] != 0) {
      pbVar9 = local_90;
      do {
        pbVar9 = pbVar9 + 1;
        uVar8 = uVar8 * 0x89 ^ uVar7;
        uVar7 = (uint)*pbVar9;
      } while (uVar7 != 0);
    }
    local_98 = CONCAT44(iVar5,uVar8);
    if (iVar5 < 1) goto LAB_7101ba2708;
    FUN_710377a120(param_1 + 0x348,(char *)local_90,param_3,uVar4,param_5,param_6,param_7,param_8);
    lVar1 = *(long *)(param_1 + 0x340);
    pcVar3 = "stick_t_btn";
  }
  FUN_7103778300(0x3f800000,lVar1,(long)pcVar3);
  local_90[0] = 0;
  local_98 = 0;
  if (param_2 == -1) {
LAB_7101ba2810:
    plVar2 = *(long **)(*(long *)(param_1 + 0x3a0) + 0x10);
    if (plVar2 != (long *)0x0) {
      param_3 = 0;
      uVar4 = 0;
      local_e0 = local_e0 & 0xffffffff00000000;
      FUN_71037a2270(plVar2,(ushort *)&local_e0,0,0);
    }
    lVar1 = *(long *)(param_1 + 0x390);
    pcVar3 = "no_assign";
  }
  else {
    uVar4 = 0;
    param_3 = uVar11;
    FUN_7101d38c00((uint *)&local_e0,param_2,iVar10,0);
    for (uVar6 = 0; local_d8[uVar6] != 0; uVar6 = uVar6 + 2) {
      local_90[uVar6] = local_d8[uVar6];
      if (0x3e < (int)uVar6 + 1U) {
        uVar6 = (ulong)((int)uVar6 + 1);
        break;
      }
      if (local_d8[uVar6 + 1] == 0) {
        uVar6 = uVar6 + 1;
        break;
      }
      local_90[uVar6 + 1] = local_d8[uVar6 + 1];
    }
    local_90[uVar6 & 0xffffffff] = 0;
    uVar7 = (uint)local_90[0];
    iVar5 = (int)uVar6;
    local_98 = CONCAT44(iVar5,(undefined4)local_98);
    uVar8 = uVar12;
    if (local_90[0] != 0) {
      pbVar9 = local_90;
      do {
        pbVar9 = pbVar9 + 1;
        uVar8 = uVar8 * 0x89 ^ uVar7;
        uVar7 = (uint)*pbVar9;
      } while (uVar7 != 0);
    }
    local_98 = CONCAT44(iVar5,uVar8);
    if (iVar5 < 1) goto LAB_7101ba2810;
    FUN_710377a120(param_1 + 0x398,(char *)local_90,param_3,uVar4,param_5,param_6,param_7,param_8);
    lVar1 = *(long *)(param_1 + 0x390);
    pcVar3 = "stick_b_btn";
  }
  FUN_7103778300(0x3f800000,lVar1,(long)pcVar3);
  local_90[0] = 0;
  local_98 = 0;
  if (param_2 == -1) {
LAB_7101ba2918:
    plVar2 = *(long **)(*(long *)(param_1 + 0x3f0) + 0x10);
    if (plVar2 != (long *)0x0) {
      param_3 = 0;
      uVar4 = 0;
      local_e0 = local_e0 & 0xffffffff00000000;
      FUN_71037a2270(plVar2,(ushort *)&local_e0,0,0);
    }
    lVar1 = *(long *)(param_1 + 0x3e0);
    pcVar3 = "no_assign";
  }
  else {
    uVar4 = 0;
    param_3 = uVar11;
    FUN_7101d38c00((uint *)&local_e0,param_2,iVar10,0);
    for (uVar6 = 0; local_d8[uVar6] != 0; uVar6 = uVar6 + 2) {
      local_90[uVar6] = local_d8[uVar6];
      if (0x3e < (int)uVar6 + 1U) {
        uVar6 = (ulong)((int)uVar6 + 1);
        break;
      }
      if (local_d8[uVar6 + 1] == 0) {
        uVar6 = uVar6 + 1;
        break;
      }
      local_90[uVar6 + 1] = local_d8[uVar6 + 1];
    }
    local_90[uVar6 & 0xffffffff] = 0;
    uVar7 = (uint)local_90[0];
    iVar5 = (int)uVar6;
    local_98 = CONCAT44(iVar5,(undefined4)local_98);
    uVar8 = uVar12;
    if (local_90[0] != 0) {
      pbVar9 = local_90;
      do {
        pbVar9 = pbVar9 + 1;
        uVar8 = uVar8 * 0x89 ^ uVar7;
        uVar7 = (uint)*pbVar9;
      } while (uVar7 != 0);
    }
    local_98 = CONCAT44(iVar5,uVar8);
    if (iVar5 < 1) goto LAB_7101ba2918;
    FUN_710377a120(param_1 + 1000,(char *)local_90,param_3,uVar4,param_5,param_6,param_7,param_8);
    lVar1 = *(long *)(param_1 + 0x3e0);
    pcVar3 = "single";
  }
  FUN_7103778300(0x3f800000,lVar1,(long)pcVar3);
  local_90[0] = 0;
  local_98 = 0;
  local_d8[0] = 0;
  local_e0 = 0;
  if (param_2 == -1) {
    iVar10 = 0;
  }
  else {
    FUN_7101d38c00(local_128,param_2,(int)param_4,0);
    for (uVar6 = 0; local_120[uVar6] != 0; uVar6 = uVar6 + 2) {
      local_90[uVar6] = local_120[uVar6];
      if (0x3e < (int)uVar6 + 1U) {
        uVar6 = (ulong)((int)uVar6 + 1);
        break;
      }
      if (local_120[uVar6 + 1] == 0) {
        uVar6 = uVar6 + 1;
        break;
      }
      local_90[uVar6 + 1] = local_120[uVar6 + 1];
    }
    local_90[uVar6 & 0xffffffff] = 0;
    uVar7 = (uint)local_90[0];
    iVar5 = (int)uVar6;
    local_98 = CONCAT44(iVar5,(undefined4)local_98);
    uVar8 = uVar12;
    if (local_90[0] != 0) {
      pbVar9 = local_90;
      do {
        pbVar9 = pbVar9 + 1;
        uVar8 = uVar8 * 0x89 ^ uVar7;
        uVar7 = (uint)*pbVar9;
      } while (uVar7 != 0);
    }
    uVar4 = 0;
    local_98 = CONCAT44(iVar5,uVar8);
    FUN_7101d38c00(local_128,param_2,iVar10,0);
    for (uVar6 = 0; local_120[uVar6] != 0; uVar6 = uVar6 + 2) {
      local_d8[uVar6] = local_120[uVar6];
      if (0x3e < (int)uVar6 + 1U) {
        uVar6 = (ulong)((int)uVar6 + 1);
        break;
      }
      if (local_120[uVar6 + 1] == 0) {
        uVar6 = uVar6 + 1;
        break;
      }
      local_d8[uVar6 + 1] = local_120[uVar6 + 1];
    }
    local_d8[uVar6 & 0xffffffff] = 0;
    uVar8 = (uint)local_d8[0];
    iVar10 = (int)uVar6;
    local_e0 = CONCAT44(iVar10,(uint)local_e0);
    if (local_d8[0] != 0) {
      pbVar9 = local_d8;
      do {
        pbVar9 = pbVar9 + 1;
        uVar12 = uVar12 * 0x89 ^ uVar8;
        uVar8 = (uint)*pbVar9;
      } while (uVar8 != 0);
    }
    local_e0 = CONCAT44(iVar10,uVar12);
    param_3 = uVar11;
    if (iVar5 != 0) {
      FUN_710377a120(param_1 + 0x590,(char *)local_90,uVar11,uVar4,param_5,param_6,param_7,param_8);
      param_3 = uVar11;
      goto joined_r0x007101ba2ae4;
    }
  }
  plVar2 = *(long **)(*(long *)(param_1 + 0x598) + 0x10);
  if (plVar2 != (long *)0x0) {
    param_3 = 0;
    uVar4 = 0;
    local_128[0] = 0;
    FUN_71037a2270(plVar2,(ushort *)local_128,0,0);
  }
joined_r0x007101ba2ae4:
  if (iVar10 == 0) {
    plVar2 = *(long **)(*(long *)(param_1 + 0x5b8) + 0x10);
    if (plVar2 != (long *)0x0) {
      local_128[0] = 0;
      FUN_71037a2270(plVar2,(ushort *)local_128,0,0);
    }
  }
  else {
    FUN_710377a120(param_1 + 0x5b0,(char *)local_d8,param_3,uVar4,param_5,param_6,param_7,param_8);
  }
  return;
}

