// addr:      71039218a0
// offset:    0x39218a0
// name:      FUN_71039218a0
// mangled:   
// signature: undefined8 __cdecl FUN_71039218a0(long param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


undefined8
FUN_71039218a0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
              undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long *plVar4;
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
  plVar4 = *(long **)(param_1 + 0x10);
  *(undefined4 *)(plVar4 + 1) = 0x45;
  *plVar4 = lVar1;
  uVar3 = 6;
  *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + 0x10;
  FUN_710391d4c0(param_1,lVar1,0,6);
  FUN_71038f9510(param_1,(long *)&PTR_s_offset_7105294450,0,uVar3,param_5,param_6,param_7,param_8);
  if (0 < *(long *)(*(long *)(param_1 + 0x18) + 0x18)) {
    FUN_71038fec40(param_1);
  }
  puVar2 = FUN_7103917660(param_1,&DAT_7104862ac9,0xe);
  puVar5 = *(undefined8 **)(param_1 + 0x10);
  *puVar5 = puVar2;
  *(uint *)(puVar5 + 1) = *(byte *)(puVar2 + 1) | 0x40;
  lVar1 = *(long *)(param_1 + 0x10);
  *(long *)(param_1 + 0x10) = lVar1 + 0x10;
  FUN_71038f5390(param_1,(long *)(lVar1 + -0x10),"charpattern");
  return 1;
}

