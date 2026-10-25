// addr:      710217c730
// offset:    0x217c730
// name:      FUN_710217c730
// mangled:   
// signature: undefined __cdecl FUN_710217c730(long param_1, long param_2)


void FUN_710217c730(long param_1,long param_2)

{
  undefined8 *puVar1;
  long lVar2;
  long *plVar3;
  
  FUN_7101ff91a0(param_1,param_2);
  puVar1 = *(undefined8 **)(param_2 + 0x10);
  *puVar1 = FUN_710217c660;
  *(undefined4 *)(puVar1 + 1) = 2;
  lVar2 = *(long *)(param_2 + 0x10);
  *(long *)(param_2 + 0x10) = lVar2 + 0x10;
  FUN_71038f5390(param_2,(long *)(lVar2 + -0x10),"new_instance_lua");
  plVar3 = *(long **)(param_2 + 0x10);
  *plVar3 = (long)*(int *)(param_1 + 0x2c);
  *(undefined4 *)(plVar3 + 1) = 0x13;
  lVar2 = *(long *)(param_2 + 0x10);
  *(long *)(param_2 + 0x10) = lVar2 + 0x10;
  FUN_71038f5390(param_2,(long *)(lVar2 + -0x10),"index_");
  plVar3 = *(long **)(param_2 + 0x10);
  *plVar3 = (long)*(int *)(param_1 + 0x30);
  *(undefined4 *)(plVar3 + 1) = 0x13;
  lVar2 = *(long *)(param_2 + 0x10);
  *(long *)(param_2 + 0x10) = lVar2 + 0x10;
  FUN_71038f5390(param_2,(long *)(lVar2 + -0x10),"target_object_id_");
  plVar3 = *(long **)(param_2 + 0x10);
  *plVar3 = (long)*(int *)(param_1 + 0x34);
  *(undefined4 *)(plVar3 + 1) = 0x13;
  lVar2 = *(long *)(param_2 + 0x10);
  *(long *)(param_2 + 0x10) = lVar2 + 0x10;
  FUN_71038f5390(param_2,(long *)(lVar2 + -0x10),"article_object_id_");
  return;
}

