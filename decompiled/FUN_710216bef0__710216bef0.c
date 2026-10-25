// addr:      710216bef0
// offset:    0x216bef0
// name:      FUN_710216bef0
// mangled:   
// signature: undefined __cdecl FUN_710216bef0(long param_1, long param_2)


void FUN_710216bef0(long param_1,long param_2)

{
  undefined8 *puVar1;
  long lVar2;
  ulong *puVar3;
  undefined4 *puVar4;
  uint *puVar5;
  
  FUN_7101ff91a0(param_1,param_2);
  puVar1 = *(undefined8 **)(param_2 + 0x10);
  *puVar1 = FUN_710216c030;
  *(undefined4 *)(puVar1 + 1) = 2;
  lVar2 = *(long *)(param_2 + 0x10);
  *(long *)(param_2 + 0x10) = lVar2 + 0x10;
  FUN_71038f5390(param_2,(long *)(lVar2 + -0x10),"new_instance_lua");
  puVar3 = *(ulong **)(param_2 + 0x10);
  *puVar3 = *(ulong *)(param_1 + 0x30) & 0xffffffffff;
  *(undefined4 *)(puVar3 + 1) = 0x13;
  lVar2 = *(long *)(param_2 + 0x10);
  *(long *)(param_2 + 0x10) = lVar2 + 0x10;
  FUN_71038f5390(param_2,(long *)(lVar2 + -0x10),"motion_kind_");
  puVar4 = *(undefined4 **)(param_2 + 0x10);
  *puVar4 = *(undefined4 *)(param_1 + 0x38);
  puVar4[2] = 3;
  lVar2 = *(long *)(param_2 + 0x10);
  *(long *)(param_2 + 0x10) = lVar2 + 0x10;
  FUN_71038f5390(param_2,(long *)(lVar2 + -0x10),"start_frame_");
  puVar4 = *(undefined4 **)(param_2 + 0x10);
  *puVar4 = *(undefined4 *)(param_1 + 0x3c);
  puVar4[2] = 3;
  lVar2 = *(long *)(param_2 + 0x10);
  *(long *)(param_2 + 0x10) = lVar2 + 0x10;
  FUN_71038f5390(param_2,(long *)(lVar2 + -0x10),"rate_");
  puVar5 = *(uint **)(param_2 + 0x10);
  *puVar5 = (uint)*(byte *)(param_1 + 0x40);
  puVar5[2] = 1;
  lVar2 = *(long *)(param_2 + 0x10);
  *(long *)(param_2 + 0x10) = lVar2 + 0x10;
  FUN_71038f5390(param_2,(long *)(lVar2 + -0x10),"loop_");
  return;
}

