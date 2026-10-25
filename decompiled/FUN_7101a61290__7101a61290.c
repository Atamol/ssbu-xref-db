// addr:      7101a61290
// offset:    0x1a61290
// name:      FUN_7101a61290
// mangled:   
// signature: undefined __cdecl FUN_7101a61290(long param_1, undefined8 param_2, long * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_7101a61290(long param_1,undefined8 param_2,long ****param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  uint uVar1;
  undefined4 uVar2;
  
  if (*(int *)(param_1 + 0x134) == 0) {
    FUN_7101a7a960(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
    *(undefined4 *)(param_1 + 0x164) = 0;
    FUN_7103783690((long *)(param_1 + 0x158),
                   (int)((ulong)(*(long *)(param_1 + 0x208) - *(long *)(param_1 + 0x200)) >> 3) *
                   0x38e38e39);
    FUN_71037760f0(*(long *)**(undefined8 **)(param_1 + 0x148),1);
    FUN_7103778760(*(long *)(**(long **)(param_1 + 0x148) + 0x10),0x7104307f9d);
    uVar1 = *(uint *)(param_1 + 300);
    if (*(int *)(param_1 + 0x260) == 0) {
      if (0x12 < uVar1) goto LAB_7101a61338;
      uVar2 = 7;
    }
    else {
      if (0x12 < uVar1) {
LAB_7101a61338:
                    /* WARNING: Subroutine does not return */
        abort();
      }
      uVar2 = 3;
    }
    *(undefined4 *)(param_1 + (long)(int)uVar1 * 4 + 0xe0) = uVar2;
  }
  return;
}

