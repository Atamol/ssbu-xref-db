// addr:      710217d480
// offset:    0x217d480
// name:      FUN_710217d480
// mangled:   
// signature: undefined8 __cdecl FUN_710217d480(long param_1)


undefined8 FUN_710217d480(long param_1)

{
  long lVar1;
  long *plVar2;
  undefined8 *puVar3;
  undefined *local_50;
  undefined4 local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined1 local_28;
  undefined4 local_24;
  
  if (0 < *(long *)(*(long *)(param_1 + 0x18) + 0x18)) {
    FUN_71038fec40(param_1);
  }
  lVar1 = FUN_710391e050(param_1);
  plVar2 = *(long **)(param_1 + 0x10);
  *(undefined4 *)(plVar2 + 1) = 0x45;
  *plVar2 = lVar1;
  *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + 0x10;
  FUN_710391d4c0(param_1,lVar1,0,2);
  local_48 = 10;
  local_40 = 0x1ecef20215;
  uStack_38 = 0;
  local_30 = 0xffffffff50000000;
  local_50 = &DAT_71050b51d8;
  local_28 = 0;
  local_24 = 0xffffffff;
  FUN_7101ff91a0((long)&local_50,param_1);
  puVar3 = *(undefined8 **)(param_1 + 0x10);
  *puVar3 = FUN_710217d5b0;
  *(undefined4 *)(puVar3 + 1) = 2;
  lVar1 = *(long *)(param_1 + 0x10);
  *(long *)(param_1 + 0x10) = lVar1 + 0x10;
  FUN_71038f5390(param_1,(long *)(lVar1 + -0x10),"new_instance_lua");
  puVar3 = *(undefined8 **)(param_1 + 0x10);
  *puVar3 = 0xffffffffffffffff;
  *(undefined4 *)(puVar3 + 1) = 0x13;
  lVar1 = *(long *)(param_1 + 0x10);
  *(long *)(param_1 + 0x10) = lVar1 + 0x10;
  FUN_71038f5390(param_1,(long *)(lVar1 + -0x10),"index_");
  return 1;
}

