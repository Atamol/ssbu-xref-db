// addr:      7102148b00
// offset:    0x2148b00
// name:      FUN_7102148b00
// mangled:   
// signature: undefined8 __cdecl FUN_7102148b00(long param_1)


undefined8 FUN_7102148b00(long param_1)

{
  long lVar1;
  long *plVar2;
  undefined8 *puVar3;
  undefined *local_58;
  undefined4 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined1 local_30;
  undefined8 local_28;
  
  if (0 < *(long *)(*(long *)(param_1 + 0x18) + 0x18)) {
    FUN_71038fec40(param_1);
  }
  lVar1 = FUN_710391e050(param_1);
  plVar2 = *(long **)(param_1 + 0x10);
  *(undefined4 *)(plVar2 + 1) = 0x45;
  *plVar2 = lVar1;
  *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + 0x10;
  FUN_710391d4c0(param_1,lVar1,0,2);
  local_50 = 10;
  local_48 = 0;
  uStack_40 = 0;
  local_38 = 0xffffffff50000000;
  local_30 = 0;
  local_58 = &DAT_71050b4e68;
  local_28 = 0;
  FUN_7101ff91a0((long)&local_58,param_1);
  puVar3 = *(undefined8 **)(param_1 + 0x10);
  *puVar3 = FUN_7102148c20;
  *(undefined4 *)(puVar3 + 1) = 2;
  lVar1 = *(long *)(param_1 + 0x10);
  *(long *)(param_1 + 0x10) = lVar1 + 0x10;
  FUN_71038f5390(param_1,(long *)(lVar1 + -0x10),"new_instance_lua");
  *(undefined4 *)(*(long *)(param_1 + 0x10) + 8) = 0;
  lVar1 = *(long *)(param_1 + 0x10);
  *(long *)(param_1 + 0x10) = lVar1 + 0x10;
  FUN_71038f5390(param_1,(long *)(lVar1 + -0x10),"damage_");
  return 1;
}

