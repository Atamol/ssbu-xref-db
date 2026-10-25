// addr:      7103903b10
// offset:    0x3903b10
// name:      FUN_7103903b10
// mangled:   
// signature: undefined8 __cdecl FUN_7103903b10(long param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


undefined8
FUN_7103903b10(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
              undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long lVar1;
  undefined8 uVar2;
  long *plVar3;
  undefined4 *puVar4;
  undefined8 *puVar5;
  
  if ((param_1 != 0) && (*(undefined **)(*(long *)(param_1 + 0x18) + 0xd0) != &DAT_7104862854)) {
                    /* WARNING: Subroutine does not return */
    FUN_71038f6c50(param_1,"multiple Lua VMs detected",param_3,param_4,param_5,param_6,param_7,
                   param_8);
  }
  if (0 < *(long *)(*(long *)(param_1 + 0x18) + 0x18)) {
    FUN_71038fec40(param_1);
  }
  lVar1 = FUN_710391e050(param_1);
  plVar3 = *(long **)(param_1 + 0x10);
  *(undefined4 *)(plVar3 + 1) = 0x45;
  *plVar3 = lVar1;
  uVar2 = 0x1b;
  *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + 0x10;
  FUN_710391d4c0(param_1,lVar1,0,0x1b);
  FUN_71038f9510(param_1,(long *)&PTR_DAT_7105293e10,0,uVar2,param_5,param_6,param_7,param_8);
  puVar4 = *(undefined4 **)(param_1 + 0x10);
  *puVar4 = 0x40490fdb;
  puVar4[2] = 3;
  lVar1 = *(long *)(param_1 + 0x10);
  *(long *)(param_1 + 0x10) = lVar1 + 0x10;
  FUN_71038f5390(param_1,(long *)(lVar1 + -0x10),"pi");
  puVar4 = *(undefined4 **)(param_1 + 0x10);
  *puVar4 = 0x7f800000;
  puVar4[2] = 3;
  lVar1 = *(long *)(param_1 + 0x10);
  *(long *)(param_1 + 0x10) = lVar1 + 0x10;
  FUN_71038f5390(param_1,(long *)(lVar1 + -0x10),"huge");
  puVar5 = *(undefined8 **)(param_1 + 0x10);
  *puVar5 = 0x7fffffffffffffff;
  *(undefined4 *)(puVar5 + 1) = 0x13;
  lVar1 = *(long *)(param_1 + 0x10);
  *(long *)(param_1 + 0x10) = lVar1 + 0x10;
  FUN_71038f5390(param_1,(long *)(lVar1 + -0x10),"maxinteger");
  puVar5 = *(undefined8 **)(param_1 + 0x10);
  *puVar5 = 0x8000000000000000;
  *(undefined4 *)(puVar5 + 1) = 0x13;
  lVar1 = *(long *)(param_1 + 0x10);
  *(long *)(param_1 + 0x10) = lVar1 + 0x10;
  FUN_71038f5390(param_1,(long *)(lVar1 + -0x10),"mininteger");
  puVar4 = *(undefined4 **)(param_1 + 0x10);
  *puVar4 = 0x7f7fffff;
  puVar4[2] = 3;
  lVar1 = *(long *)(param_1 + 0x10);
  *(long *)(param_1 + 0x10) = lVar1 + 0x10;
  FUN_71038f5390(param_1,(long *)(lVar1 + -0x10),"FLT_MAX");
  puVar4 = *(undefined4 **)(param_1 + 0x10);
  *puVar4 = 0x800000;
  puVar4[2] = 3;
  lVar1 = *(long *)(param_1 + 0x10);
  *(long *)(param_1 + 0x10) = lVar1 + 0x10;
  FUN_71038f5390(param_1,(long *)(lVar1 + -0x10),"FLT_MIN");
  return 1;
}

