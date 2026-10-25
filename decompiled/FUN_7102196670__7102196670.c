// addr:      7102196670
// offset:    0x2196670
// name:      FUN_7102196670
// mangled:   
// signature: undefined FUN_7102196670(void)


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_7102196670(long param_1)

{
  long lVar1;
  long *plVar2;
  undefined8 *puVar3;
  undefined4 *puVar4;
  undefined *puStack_90;
  undefined4 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  if (0 < *(long *)(*(long *)(param_1 + 0x18) + 0x18)) {
    FUN_71038fec40(param_1);
  }
  lVar1 = FUN_710391e050(param_1);
  plVar2 = *(long **)(param_1 + 0x10);
  *(undefined4 *)(plVar2 + 1) = 0x45;
  *plVar2 = lVar1;
  *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + 0x10;
  FUN_710391d4c0(param_1,lVar1,0,3);
  uStack_88 = 10;
  uStack_80 = 0x5ecd55cc6;
  uStack_78 = 0;
  uStack_70 = 0xffffffff50000000;
  uStack_68 = 0;
  uStack_60 = 0x7fb997a80;
  uStack_38 = uRam0000007107459008;
  uStack_40 = _ConstantZero;
  uStack_58 = 0xffffffff00000000;
  uStack_50 = 0;
  uStack_48 = 0;
  puStack_90 = &DAT_71050b5278;
  uStack_30 = 0;
  FUN_71020b1a20((long)&puStack_90,param_1,1);
  puVar3 = *(undefined8 **)(param_1 + 0x10);
  *puVar3 = FUN_7102196800;
  *(undefined4 *)(puVar3 + 1) = 2;
  lVar1 = *(long *)(param_1 + 0x10);
  *(long *)(param_1 + 0x10) = lVar1 + 0x10;
  FUN_71038f5390(param_1,(long *)(lVar1 + -0x10),"new_instance_lua");
  puVar3 = *(undefined8 **)(param_1 + 0x10);
  *(undefined4 *)(puVar3 + 1) = 0x13;
  *puVar3 = 0;
  lVar1 = *(long *)(param_1 + 0x10);
  *(long *)(param_1 + 0x10) = lVar1 + 0x10;
  FUN_71038f5390(param_1,(long *)(lVar1 + -0x10),"type_");
  puVar4 = *(undefined4 **)(param_1 + 0x10);
  *puVar4 = 0;
  puVar4[2] = 3;
  lVar1 = *(long *)(param_1 + 0x10);
  *(long *)(param_1 + 0x10) = lVar1 + 0x10;
  FUN_71038f5390(param_1,(long *)(lVar1 + -0x10),"speed_");
  return 1;
}

