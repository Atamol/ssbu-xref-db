// addr:      7101f9af50
// offset:    0x1f9af50
// name:      FUN_7101f9af50
// mangled:   
// signature: undefined __cdecl FUN_7101f9af50(undefined4 * param_1, long param_2)


void FUN_7101f9af50(undefined4 *param_1,long param_2)

{
  undefined8 *puVar1;
  long lVar2;
  undefined4 *puVar3;
  
  puVar1 = *(undefined8 **)(param_2 + 0x10);
  *puVar1 = FUN_7101f9b070;
  *(undefined4 *)(puVar1 + 1) = 2;
  lVar2 = *(long *)(param_2 + 0x10);
  *(long *)(param_2 + 0x10) = lVar2 + 0x10;
  FUN_71038f5390(param_2,(long *)(lVar2 + -0x10),"new_instance_lua");
  puVar3 = *(undefined4 **)(param_2 + 0x10);
  *puVar3 = *param_1;
  puVar3[2] = 3;
  lVar2 = *(long *)(param_2 + 0x10);
  *(long *)(param_2 + 0x10) = lVar2 + 0x10;
  FUN_71038f5390(param_2,(long *)(lVar2 + -0x10),"left");
  puVar3 = *(undefined4 **)(param_2 + 0x10);
  *puVar3 = param_1[1];
  puVar3[2] = 3;
  lVar2 = *(long *)(param_2 + 0x10);
  *(long *)(param_2 + 0x10) = lVar2 + 0x10;
  FUN_71038f5390(param_2,(long *)(lVar2 + -0x10),"right");
  puVar3 = *(undefined4 **)(param_2 + 0x10);
  *puVar3 = param_1[2];
  puVar3[2] = 3;
  lVar2 = *(long *)(param_2 + 0x10);
  *(long *)(param_2 + 0x10) = lVar2 + 0x10;
  FUN_71038f5390(param_2,(long *)(lVar2 + -0x10),"top");
  puVar3 = *(undefined4 **)(param_2 + 0x10);
  *puVar3 = param_1[3];
  puVar3[2] = 3;
  lVar2 = *(long *)(param_2 + 0x10);
  *(long *)(param_2 + 0x10) = lVar2 + 0x10;
  FUN_71038f5390(param_2,(long *)(lVar2 + -0x10),"bottom");
  return;
}

