// addr:      71021ceb00
// offset:    0x21ceb00
// name:      FUN_71021ceb00
// mangled:   
// signature: undefined __cdecl FUN_71021ceb00(long param_1, long param_2)


void FUN_71021ceb00(long param_1,long param_2)

{
  undefined8 *puVar1;
  long lVar2;
  undefined4 *puVar3;
  
  FUN_7101ff91a0(param_1,param_2);
  puVar1 = *(undefined8 **)(param_2 + 0x10);
  *puVar1 = FUN_71021cea40;
  *(undefined4 *)(puVar1 + 1) = 2;
  lVar2 = *(long *)(param_2 + 0x10);
  *(long *)(param_2 + 0x10) = lVar2 + 0x10;
  FUN_71038f5390(param_2,(long *)(lVar2 + -0x10),"new_instance_lua");
  puVar3 = *(undefined4 **)(param_2 + 0x10);
  *puVar3 = *(undefined4 *)(param_1 + 0x2c);
  puVar3[2] = 3;
  lVar2 = *(long *)(param_2 + 0x10);
  *(long *)(param_2 + 0x10) = lVar2 + 0x10;
  FUN_71038f5390(param_2,(long *)(lVar2 + -0x10),"pos_x_");
  puVar3 = *(undefined4 **)(param_2 + 0x10);
  *puVar3 = *(undefined4 *)(param_1 + 0x30);
  puVar3[2] = 3;
  lVar2 = *(long *)(param_2 + 0x10);
  *(long *)(param_2 + 0x10) = lVar2 + 0x10;
  FUN_71038f5390(param_2,(long *)(lVar2 + -0x10),"pos_y_");
  puVar3 = *(undefined4 **)(param_2 + 0x10);
  *puVar3 = *(undefined4 *)(param_1 + 0x34);
  puVar3[2] = 3;
  lVar2 = *(long *)(param_2 + 0x10);
  *(long *)(param_2 + 0x10) = lVar2 + 0x10;
  FUN_71038f5390(param_2,(long *)(lVar2 + -0x10),"distance_");
  return;
}

