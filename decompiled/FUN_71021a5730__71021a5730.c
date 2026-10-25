// addr:      71021a5730
// offset:    0x21a5730
// name:      FUN_71021a5730
// mangled:   
// signature: undefined8 __cdecl FUN_71021a5730(long param_1)


undefined8 FUN_71021a5730(long param_1)

{
  long lVar1;
  long *plVar2;
  undefined8 *puVar3;
  undefined *local_68;
  undefined4 local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined1 local_40;
  undefined8 local_38;
  
  if (0 < *(long *)(*(long *)(param_1 + 0x18) + 0x18)) {
    FUN_71038fec40(param_1);
  }
  lVar1 = FUN_710391e050(param_1);
  plVar2 = *(long **)(param_1 + 0x10);
  *(undefined4 *)(plVar2 + 1) = 0x45;
  *plVar2 = lVar1;
  *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + 0x10;
  FUN_710391d4c0(param_1,lVar1,0,2);
  local_60 = 10;
  local_40 = 0;
  local_58 = 0x1cd7c52b40;
  uStack_50 = 0;
  local_48 = 0xffffffff50000000;
  local_68 = &DAT_71050b5458;
  local_38 = 0x7fb997a80;
  FUN_7101ff91a0((long)&local_68,param_1);
  puVar3 = *(undefined8 **)(param_1 + 0x10);
  *puVar3 = FUN_71021a5870;
  *(undefined4 *)(puVar3 + 1) = 2;
  lVar1 = *(long *)(param_1 + 0x10);
  *(long *)(param_1 + 0x10) = lVar1 + 0x10;
  FUN_71038f5390(param_1,(long *)(lVar1 + -0x10),"new_instance_lua");
  puVar3 = *(undefined8 **)(param_1 + 0x10);
  *(undefined4 *)(puVar3 + 1) = 0x13;
  *puVar3 = 0x7fb997a80;
  lVar1 = *(long *)(param_1 + 0x10);
  *(long *)(param_1 + 0x10) = lVar1 + 0x10;
  FUN_71038f5390(param_1,(long *)(lVar1 + -0x10),"cut_joint_id_");
  return 1;
}

