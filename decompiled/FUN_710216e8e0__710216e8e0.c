// addr:      710216e8e0
// offset:    0x216e8e0
// name:      FUN_710216e8e0
// mangled:   
// signature: undefined __cdecl FUN_710216e8e0(long param_1, long param_2)


void FUN_710216e8e0(long param_1,long param_2)

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  ulong *puVar4;
  
  FUN_7101ff91a0(param_1,param_2);
  puVar1 = *(undefined8 **)(param_2 + 0x10);
  *puVar1 = FUN_710216e830;
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
  FUN_71038f5390(param_2,(long *)(lVar2 + -0x10),"owner_joint_id_");
  uVar3 = *(ulong *)(param_1 + 0x38);
  puVar4 = *(ulong **)(param_2 + 0x10);
  *(undefined4 *)(puVar4 + 1) = 0x13;
  *puVar4 = uVar3 & 0xffffffffff;
  lVar2 = *(long *)(param_2 + 0x10);
  *(long *)(param_2 + 0x10) = lVar2 + 0x10;
  FUN_71038f5390(param_2,(long *)(lVar2 + -0x10),"joint_id_");
  return;
}

