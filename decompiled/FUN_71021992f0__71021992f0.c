// addr:      71021992f0
// offset:    0x21992f0
// name:      FUN_71021992f0
// mangled:   
// signature: undefined8 __cdecl FUN_71021992f0(long param_1)


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_71021992f0(long param_1)

{
  long lVar1;
  long *plVar2;
  undefined8 *puVar3;
  undefined4 *puVar4;
  undefined *local_90;
  undefined4 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined1 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  
  if (0 < *(long *)(*(long *)(param_1 + 0x18) + 0x18)) {
    FUN_71038fec40(param_1);
  }
  lVar1 = FUN_710391e050(param_1);
  plVar2 = *(long **)(param_1 + 0x10);
  *(undefined4 *)(plVar2 + 1) = 0x45;
  *plVar2 = lVar1;
  *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + 0x10;
  FUN_710391d4c0(param_1,lVar1,0,3);
  local_88 = 10;
  local_80 = 0x5ecd55cc6;
  uStack_78 = 0;
  local_70 = 0xffffffff50000000;
  local_68 = 0;
  local_60 = 0x7fb997a80;
  uStack_38 = uRam0000007107459008;
  local_40 = _ConstantZero;
  local_58 = 0xffffffff00000000;
  uStack_50 = 0;
  local_48 = 0;
  local_90 = &DAT_71050b52c8;
  local_30 = 0;
  FUN_71020b1a20((long)&local_90,param_1,1);
  puVar3 = *(undefined8 **)(param_1 + 0x10);
  *puVar3 = FUN_7102199470;
  *(undefined4 *)(puVar3 + 1) = 2;
  lVar1 = *(long *)(param_1 + 0x10);
  *(long *)(param_1 + 0x10) = lVar1 + 0x10;
  FUN_71038f5390(param_1,(long *)(lVar1 + -0x10),"new_instance_lua");
  puVar4 = *(undefined4 **)(param_1 + 0x10);
  *puVar4 = 0;
  puVar4[2] = 3;
  lVar1 = *(long *)(param_1 + 0x10);
  *(long *)(param_1 + 0x10) = lVar1 + 0x10;
  FUN_71038f5390(param_1,(long *)(lVar1 + -0x10),"bezier_param1_");
  puVar4 = *(undefined4 **)(param_1 + 0x10);
  *puVar4 = 0;
  puVar4[2] = 3;
  lVar1 = *(long *)(param_1 + 0x10);
  *(long *)(param_1 + 0x10) = lVar1 + 0x10;
  FUN_71038f5390(param_1,(long *)(lVar1 + -0x10),"bezier_param2_");
  return 1;
}

