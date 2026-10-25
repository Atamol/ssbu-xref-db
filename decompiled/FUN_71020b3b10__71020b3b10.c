// addr:      71020b3b10
// offset:    0x20b3b10
// name:      FUN_71020b3b10
// mangled:   
// signature: undefined __cdecl FUN_71020b3b10(long param_1, long param_2)


void FUN_71020b3b10(long param_1,long param_2)

{
  undefined8 *puVar1;
  long lVar2;
  undefined4 *puVar3;
  long *plVar4;
  uint *puVar5;
  
  FUN_7101ff91a0(param_1,param_2);
  puVar1 = *(undefined8 **)(param_2 + 0x10);
  *puVar1 = FUN_71020b3a60;
  *(undefined4 *)(puVar1 + 1) = 2;
  lVar2 = *(long *)(param_2 + 0x10);
  *(long *)(param_2 + 0x10) = lVar2 + 0x10;
  FUN_71038f5390(param_2,(long *)(lVar2 + -0x10),"new_instance_lua");
  puVar3 = *(undefined4 **)(param_2 + 0x10);
  *puVar3 = *(undefined4 *)(param_1 + 0x2c);
  puVar3[2] = 3;
  lVar2 = *(long *)(param_2 + 0x10);
  *(long *)(param_2 + 0x10) = lVar2 + 0x10;
  FUN_71038f5390(param_2,(long *)(lVar2 + -0x10),"_lr");
  plVar4 = *(long **)(param_2 + 0x10);
  *plVar4 = (long)*(int *)(param_1 + 0x30);
  *(undefined4 *)(plVar4 + 1) = 0x13;
  lVar2 = *(long *)(param_2 + 0x10);
  *(long *)(param_2 + 0x10) = lVar2 + 0x10;
  FUN_71038f5390(param_2,(long *)(lVar2 + -0x10),"_taskId");
  puVar5 = *(uint **)(param_2 + 0x10);
  *puVar5 = (uint)*(byte *)(param_1 + 0x34);
  puVar5[2] = 1;
  lVar2 = *(long *)(param_2 + 0x10);
  *(long *)(param_2 + 0x10) = lVar2 + 0x10;
  FUN_71038f5390(param_2,(long *)(lVar2 + -0x10),"_copy");
  return;
}

