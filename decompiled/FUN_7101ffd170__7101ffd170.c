// addr:      7101ffd170
// offset:    0x1ffd170
// name:      FUN_7101ffd170
// mangled:   
// signature: undefined __cdecl FUN_7101ffd170(long param_1, long param_2)


void FUN_7101ffd170(long param_1,long param_2)

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  ulong *puVar4;
  long *plVar5;
  undefined4 *puVar6;
  uint *puVar7;
  
  FUN_7101ff91a0(param_1,param_2);
  puVar1 = *(undefined8 **)(param_2 + 0x10);
  *puVar1 = FUN_7101ffd310;
  *(undefined4 *)(puVar1 + 1) = 2;
  lVar2 = *(long *)(param_2 + 0x10);
  *(long *)(param_2 + 0x10) = lVar2 + 0x10;
  FUN_71038f5390(param_2,(long *)(lVar2 + -0x10),"new_instance_lua");
  uVar3 = *(ulong *)(param_1 + 0x30);
  puVar4 = *(ulong **)(param_2 + 0x10);
  *(undefined4 *)(puVar4 + 1) = 0x13;
  *puVar4 = uVar3 & 0xffffffffff;
  lVar2 = *(long *)(param_2 + 0x10);
  *(long *)(param_2 + 0x10) = lVar2 + 0x10;
  FUN_71038f5390(param_2,(long *)(lVar2 + -0x10),"motion_kind_");
  plVar5 = *(long **)(param_2 + 0x10);
  *plVar5 = (long)*(int *)(param_1 + 0x38);
  *(undefined4 *)(plVar5 + 1) = 0x13;
  lVar2 = *(long *)(param_2 + 0x10);
  *(long *)(param_2 + 0x10) = lVar2 + 0x10;
  FUN_71038f5390(param_2,(long *)(lVar2 + -0x10),"hit_group_");
  plVar5 = *(long **)(param_2 + 0x10);
  *plVar5 = (long)*(int *)(param_1 + 0x3c);
  *(undefined4 *)(plVar5 + 1) = 0x13;
  lVar2 = *(long *)(param_2 + 0x10);
  *(long *)(param_2 + 0x10) = lVar2 + 0x10;
  FUN_71038f5390(param_2,(long *)(lVar2 + -0x10),"hit_no_");
  plVar5 = *(long **)(param_2 + 0x10);
  *plVar5 = (long)*(int *)(param_1 + 0x40);
  *(undefined4 *)(plVar5 + 1) = 0x13;
  lVar2 = *(long *)(param_2 + 0x10);
  *(long *)(param_2 + 0x10) = lVar2 + 0x10;
  FUN_71038f5390(param_2,(long *)(lVar2 + -0x10),"general_kind_");
  puVar6 = *(undefined4 **)(param_2 + 0x10);
  *puVar6 = *(undefined4 *)(param_1 + 0x44);
  puVar6[2] = 3;
  lVar2 = *(long *)(param_2 + 0x10);
  *(long *)(param_2 + 0x10) = lVar2 + 0x10;
  FUN_71038f5390(param_2,(long *)(lVar2 + -0x10),"motion_rate_");
  puVar7 = *(uint **)(param_2 + 0x10);
  *puVar7 = (uint)*(byte *)(param_1 + 0x48);
  puVar7[2] = 1;
  lVar2 = *(long *)(param_2 + 0x10);
  *(long *)(param_2 + 0x10) = lVar2 + 0x10;
  FUN_71038f5390(param_2,(long *)(lVar2 + -0x10),"motion_rate_default_");
  return;
}

