// addr:      71019bbad0
// offset:    0x19bbad0
// name:      FUN_71019bbad0
// mangled:   
// signature: undefined __cdecl FUN_71019bbad0(long param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_71019bbad0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  
  lVar5 = *(long *)(param_1 + 0x48);
  lVar6 = *(long *)(param_1 + 0x50);
  if (lVar5 != lVar6) {
    do {
      FUN_7103778300(0x3f800000,*(long *)(lVar5 + 8),0x71043df9cf);
      lVar5 = lVar5 + 0x10;
    } while (lVar6 != lVar5);
    lVar5 = *(long *)(param_1 + 0x48);
    lVar6 = *(long *)(param_1 + 0x50);
  }
  uVar3 = lVar6 - lVar5 >> 4;
  lVar2 = *(long *)(param_1 + 0x218);
  lVar1 = *(long *)(param_1 + 0x210);
  uVar4 = lVar2 - lVar1 >> 2;
  if (uVar3 <= uVar4) {
    uVar4 = uVar3;
  }
  if (uVar4 != 0) {
    if (lVar6 == lVar5) {
LAB_71019bbbb8:
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_out_of_range();
    }
    lVar6 = 0;
    uVar3 = 0;
    while( true ) {
      if ((ulong)(lVar2 - lVar1 >> 2) <= uVar3) {
                    /* WARNING: Subroutine does not return */
        std::__vector_base_common<true>::__throw_out_of_range();
      }
      FUN_71019bbbf0(param_1,*(int *)(lVar1 + uVar3 * 4),lVar5 + lVar6,param_4,param_5,param_6,
                     param_7,param_8);
      uVar3 = uVar3 + 1;
      if (uVar4 <= uVar3) break;
      lVar5 = *(long *)(param_1 + 0x48);
      if ((ulong)(*(long *)(param_1 + 0x50) - lVar5 >> 4) <= uVar3) goto LAB_71019bbbb8;
      lVar2 = *(long *)(param_1 + 0x218);
      lVar1 = *(long *)(param_1 + 0x210);
      lVar6 = lVar6 + 0x10;
    }
  }
  return;
}

