// addr:      7101ff91a0
// offset:    0x1ff91a0
// name:      FUN_7101ff91a0
// mangled:   
// signature: undefined __cdecl FUN_7101ff91a0(long param_1, long param_2)


void FUN_7101ff91a0(long param_1,long param_2)

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  ulong *puVar4;
  long *plVar5;
  uint *puVar6;
  
  puVar1 = *(undefined8 **)(param_2 + 0x10);
  *puVar1 = FUN_7101ff93a0;
  *(undefined4 *)(puVar1 + 1) = 2;
  lVar2 = *(long *)(param_2 + 0x10);
  *(long *)(param_2 + 0x10) = lVar2 + 0x10;
  FUN_71038f5390(param_2,(long *)(lVar2 + -0x10),"new_instance_lua");
  uVar3 = *(ulong *)(param_1 + 0x10);
  puVar4 = *(ulong **)(param_2 + 0x10);
  *(undefined4 *)(puVar4 + 1) = 0x13;
  *puVar4 = uVar3 & 0xffffffffff;
  lVar2 = *(long *)(param_2 + 0x10);
  *(long *)(param_2 + 0x10) = lVar2 + 0x10;
  FUN_71038f5390(param_2,(long *)(lVar2 + -0x10),"link_event_kind_");
  plVar5 = *(long **)(param_2 + 0x10);
  *plVar5 = (long)*(int *)(param_1 + 0x20);
  *(undefined4 *)(plVar5 + 1) = 0x13;
  lVar2 = *(long *)(param_2 + 0x10);
  *(long *)(param_2 + 0x10) = lVar2 + 0x10;
  FUN_71038f5390(param_2,(long *)(lVar2 + -0x10),"sender_id_");
  plVar5 = *(long **)(param_2 + 0x10);
  *plVar5 = (long)*(int *)(param_1 + 0x24);
  *(undefined4 *)(plVar5 + 1) = 0x13;
  lVar2 = *(long *)(param_2 + 0x10);
  *(long *)(param_2 + 0x10) = lVar2 + 0x10;
  FUN_71038f5390(param_2,(long *)(lVar2 + -0x10),"no_");
  puVar6 = *(uint **)(param_2 + 0x10);
  *puVar6 = (uint)*(byte *)(param_1 + 0x28);
  puVar6[2] = 1;
  lVar2 = *(long *)(param_2 + 0x10);
  *(long *)(param_2 + 0x10) = lVar2 + 0x10;
  FUN_71038f5390(param_2,(long *)(lVar2 + -0x10),"result_");
  return;
}

