// addr:      710391f690
// offset:    0x391f690
// name:      FUN_710391f690
// mangled:   
// signature: undefined8 __cdecl FUN_710391f690(long param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


undefined8
FUN_710391f690(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
              undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  undefined8 *puVar5;
  long lVar6;
  long lVar7;
  int local_24;
  
  FUN_710391f820(param_1,7,param_3,param_4,param_5,param_6,param_7,param_8);
  lVar4 = FUN_71038f8ab0(param_1,1,param_3,param_4,param_5,param_6,param_7,param_8);
  if (1 < lVar4) {
    if (0x7ffffffe < lVar4) {
      FUN_71038f6d60(param_1,1,"array too big",param_4,param_5,param_6,param_7,param_8);
    }
    lVar6 = 0x3c;
    local_24 = 0x3c;
    puVar5 = *(undefined8 **)(param_1 + 0x10);
    lVar7 = *(long *)(param_1 + 0x20);
    if (*(long *)(param_1 + 0x30) - (long)puVar5 < 0x3c1) {
      if ((0xf41ff < (int)((ulong)((long)puVar5 - *(long *)(param_1 + 0x38)) >> 4)) ||
         (iVar3 = FUN_71038fb4b0(param_1,FUN_71038f3f70,&local_24), iVar3 != 0)) {
                    /* WARNING: Subroutine does not return */
        FUN_71038f6c50(param_1,"stack overflow (%s)",&DAT_7104867c2e,param_4,param_5,param_6,param_7
                       ,param_8);
      }
      puVar5 = *(undefined8 **)(param_1 + 0x10);
      lVar6 = (long)local_24;
    }
    if (*(undefined8 **)(lVar7 + 8) < puVar5 + lVar6 * 2) {
      *(undefined8 **)(lVar7 + 8) = puVar5 + lVar6 * 2;
      puVar5 = *(undefined8 **)(param_1 + 0x10);
    }
    lVar6 = **(long **)(param_1 + 0x20);
    puVar1 = (undefined8 *)(lVar6 + 0x20);
    if ((((puVar1 < puVar5) && (puVar1 != &DAT_7104862960)) &&
        (uVar2 = *(uint *)(lVar6 + 0x28) & 0xf, uVar2 != 0)) && ((puVar5 <= puVar1 || (uVar2 != 6)))
       ) {
      FUN_71038f74d0(param_1,2,"function",param_4,param_5,param_6,param_7,param_8);
      lVar6 = **(long **)(param_1 + 0x20);
      puVar5 = *(undefined8 **)(param_1 + 0x10);
    }
    while (puVar5 < (undefined8 *)(lVar6 + 0x30)) {
      *(undefined8 **)(param_1 + 0x10) = puVar5 + 2;
      *(undefined4 *)(puVar5 + 1) = 0;
      puVar5 = *(undefined8 **)(param_1 + 0x10);
    }
    *(undefined8 **)(param_1 + 0x10) = (undefined8 *)(lVar6 + 0x30);
    FUN_710391fa00(param_1,1,(uint)lVar4,0,param_5,param_6,param_7,param_8);
  }
  return 0;
}

