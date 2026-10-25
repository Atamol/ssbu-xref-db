// addr:      71020b89a0
// offset:    0x20b89a0
// name:      FUN_71020b89a0
// mangled:   
// signature: undefined8 __cdecl FUN_71020b89a0(long param_1)


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_71020b89a0(long param_1)

{
  long lVar1;
  long *plVar2;
  undefined8 *puVar3;
  undefined4 *puVar4;
  undefined *local_b0;
  undefined4 local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined1 local_88;
  undefined4 local_84;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined4 local_70;
  undefined2 local_6c;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  
  if (0 < *(long *)(*(long *)(param_1 + 0x18) + 0x18)) {
    FUN_71038fec40(param_1);
  }
  lVar1 = FUN_710391e050(param_1);
  plVar2 = *(long **)(param_1 + 0x10);
  *(undefined4 *)(plVar2 + 1) = 0x45;
  *plVar2 = lVar1;
  *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + 0x10;
  FUN_710391d4c0(param_1,lVar1,0,2);
  local_a8 = 10;
  local_68 = 0;
  uStack_60 = 0;
  local_a0 = 0x1014e8b312;
  uStack_98 = 0;
  local_90 = 0xffffffff50000000;
  local_88 = 0;
  local_84 = 0;
  local_80 = 0x7fb997a80;
  uStack_78 = 0x7fb997a80;
  local_70 = 0x3f800000;
  local_6c = 0;
  uStack_48 = uRam0000007107459008;
  local_50 = _ConstantZero;
  local_40 = 0x3f800000ffffffff;
  local_b0 = &DAT_71050b4648;
  FUN_71020b6200((long)&local_b0,param_1,1);
  puVar3 = *(undefined8 **)(param_1 + 0x10);
  *puVar3 = FUN_71020b8b10;
  *(undefined4 *)(puVar3 + 1) = 2;
  lVar1 = *(long *)(param_1 + 0x10);
  *(long *)(param_1 + 0x10) = lVar1 + 0x10;
  FUN_71038f5390(param_1,(long *)(lVar1 + -0x10),"new_instance_lua");
  puVar4 = *(undefined4 **)(param_1 + 0x10);
  puVar4[2] = 3;
  *puVar4 = 0x3f800000;
  lVar1 = *(long *)(param_1 + 0x10);
  *(long *)(param_1 + 0x10) = lVar1 + 0x10;
  FUN_71038f5390(param_1,(long *)(lVar1 + -0x10),"damage_mul_");
  return 1;
}

