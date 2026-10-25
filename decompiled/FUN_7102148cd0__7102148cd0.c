// addr:      7102148cd0
// offset:    0x2148cd0
// name:      FUN_7102148cd0
// mangled:   
// signature: undefined __cdecl FUN_7102148cd0(long param_1, long param_2)


void FUN_7102148cd0(long param_1,long param_2)

{
  undefined8 *puVar1;
  long lVar2;
  long *plVar3;
  undefined4 uVar4;
  
  FUN_7101ff91a0(param_1,param_2);
  puVar1 = *(undefined8 **)(param_2 + 0x10);
  *puVar1 = FUN_7102148c20;
  *(undefined4 *)(puVar1 + 1) = 2;
  lVar2 = *(long *)(param_2 + 0x10);
  *(long *)(param_2 + 0x10) = lVar2 + 0x10;
  FUN_71038f5390(param_2,(long *)(lVar2 + -0x10),"new_instance_lua");
  plVar3 = *(long **)(param_2 + 0x10);
  uVar4 = 0;
  if (*(long *)(param_1 + 0x30) != 0) {
    *plVar3 = *(long *)(param_1 + 0x30);
    uVar4 = 2;
  }
  *(undefined4 *)(plVar3 + 1) = uVar4;
  lVar2 = *(long *)(param_2 + 0x10);
  *(long *)(param_2 + 0x10) = lVar2 + 0x10;
  FUN_71038f5390(param_2,(long *)(lVar2 + -0x10),"damage_");
  return;
}

