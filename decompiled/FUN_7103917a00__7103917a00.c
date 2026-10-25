// addr:      7103917a00
// offset:    0x3917a00
// name:      FUN_7103917a00
// mangled:   
// signature: undefined8 __cdecl FUN_7103917a00(long param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


undefined8
FUN_7103917a00(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
              undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long lVar1;
  undefined8 uVar2;
  long *plVar3;
  undefined8 *puVar4;
  
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
  uVar2 = 0x11;
  *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + 0x10;
  FUN_710391d4c0(param_1,lVar1,0,0x11);
  FUN_71038f9510(param_1,(long *)&PTR_DAT_7105294198,0,uVar2,param_5,param_6,param_7,param_8);
  if (0 < *(long *)(*(long *)(param_1 + 0x18) + 0x18)) {
    FUN_71038fec40(param_1);
  }
  lVar1 = FUN_710391e050(param_1);
  plVar3 = *(long **)(param_1 + 0x10);
  *plVar3 = lVar1;
  *(undefined4 *)(plVar3 + 1) = 0x45;
  *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + 0x10;
  FUN_710391d4c0(param_1,lVar1,0,1);
  FUN_71038f4b20(param_1,"");
  puVar4 = *(undefined8 **)(param_1 + 0x10);
  *puVar4 = puVar4[-4];
  puVar4[1] = puVar4[-3];
  *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + 0x10;
  FUN_71038f5c00(param_1,-2);
  lVar1 = *(long *)(param_1 + 0x10);
  *(long *)(param_1 + 0x10) = lVar1 + -0x10;
  *(undefined8 *)(lVar1 + -0x10) = *(undefined8 *)(lVar1 + -0x30);
  *(undefined8 *)(lVar1 + -8) = *(undefined8 *)(lVar1 + -0x28);
  lVar1 = *(long *)(param_1 + 0x10);
  *(long *)(param_1 + 0x10) = lVar1 + 0x10;
  FUN_71038f5390(param_1,(long *)(lVar1 + -0x10),"__index");
  *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + -0x10;
  return 1;
}

