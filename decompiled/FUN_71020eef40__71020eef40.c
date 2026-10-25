// addr:      71020eef40
// offset:    0x20eef40
// name:      FUN_71020eef40
// mangled:   
// signature: undefined8 __cdecl FUN_71020eef40(long param_1)


undefined8 FUN_71020eef40(long param_1)

{
  long lVar1;
  long *plVar2;
  undefined8 *puVar3;
  undefined *local_38;
  undefined8 local_30;
  undefined8 local_28;
  
  if (0 < *(long *)(*(long *)(param_1 + 0x18) + 0x18)) {
    FUN_71038fec40(param_1);
  }
  lVar1 = FUN_710391e050(param_1);
  plVar2 = *(long **)(param_1 + 0x10);
  *(undefined4 *)(plVar2 + 1) = 0x45;
  *plVar2 = lVar1;
  *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + 0x10;
  FUN_710391d4c0(param_1,lVar1,0,1);
  local_30 = 0x5000000000000001;
  local_28 = 0x5000000000000046;
  local_38 = &DAT_71050b4d78;
  FUN_71020d4810((long)&local_38,param_1);
  puVar3 = *(undefined8 **)(param_1 + 0x10);
  *puVar3 = FUN_71020ef030;
  *(undefined4 *)(puVar3 + 1) = 2;
  lVar1 = *(long *)(param_1 + 0x10);
  *(long *)(param_1 + 0x10) = lVar1 + 0x10;
  FUN_71038f5390(param_1,(long *)(lVar1 + -0x10),"new_instance_lua");
  return 1;
}

