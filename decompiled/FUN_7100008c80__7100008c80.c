// addr:      7100008c80
// offset:    0x8c80
// name:      FUN_7100008c80
// mangled:   
// signature: undefined __cdecl FUN_7100008c80(long param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_7100008c80(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                   undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  ulong uVar1;
  undefined8 *puVar2;
  
  if ((*(long *)(param_1 + 0xa8) != 0) &&
     ((*(long *)(param_1 + 0x4d10) != 0 || (*(int *)(param_1 + 0x4d18) != 0)))) {
    puVar2 = (undefined8 *)(*(long *)(param_1 + 0xa8) + 0xb0);
    uVar1 = FUN_7100017150((long *)*puVar2,(long *)(param_1 + 0x4d20),puVar2);
    if ((int)uVar1 != 0) {
      FUN_7100015de0(param_1,(byte *)"Internal error clearing splay node = %d\n",uVar1 & 0xffffffff,
                     param_4,param_5,param_6,param_7,param_8);
    }
    if (*(long *)(param_1 + 0x4d70) != 0) {
      do {
        FUN_7100006870((long *)(param_1 + 0x4d58),*(undefined8 **)(param_1 + 0x4d60),0);
      } while (*(long *)(param_1 + 0x4d70) != 0);
    }
    *(undefined8 *)(param_1 + 0x4d10) = 0;
    *(undefined4 *)(param_1 + 0x4d18) = 0;
  }
  return;
}

