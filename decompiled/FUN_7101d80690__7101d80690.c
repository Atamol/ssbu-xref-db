// addr:      7101d80690
// offset:    0x1d80690
// name:      FUN_7101d80690
// mangled:   
// signature: undefined __cdecl FUN_7101d80690(long param_1, undefined8 param_2, long * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_7101d80690(long param_1,undefined8 param_2,long ****param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long ****pppplVar1;
  int iVar2;
  long *plVar3;
  undefined1 local_38 [4];
  undefined1 local_34;
  
  plVar3 = (long *)**(undefined8 **)(param_1 + 0x1e8);
  *(undefined4 *)(*(long *)(*plVar3 + 0x600) + 0x10) = 0xa0;
  iVar2 = (int)(*(long *)(*(long *)(param_1 + 8) + 0x20) - *(long *)(*(long *)(param_1 + 8) + 0x18)
               >> 3) * -0x45d1745d;
  *(int *)(param_1 + 0x438) = iVar2;
  FUN_7100492060((ulong *)(param_1 + 0x448),(long)iVar2,param_3,param_4,param_5,param_6,param_7,
                 param_8);
  pppplVar1 = (long ****)&local_34;
  local_34 = 0;
  FUN_7101d81e10((ulong *)(param_1 + 0x448),(long)*(int *)(param_1 + 0x438),pppplVar1,param_4,
                 param_5,param_6,param_7,param_8);
  FUN_7100492060((ulong *)(param_1 + 0x460),(long)*(int *)(param_1 + 0x438),pppplVar1,param_4,
                 param_5,param_6,param_7,param_8);
  local_38[0] = 0;
  FUN_7101d81e10((ulong *)(param_1 + 0x460),(long)*(int *)(param_1 + 0x438),(long ****)local_38,
                 param_4,param_5,param_6,param_7,param_8);
  (**(code **)(**(long **)(param_1 + 0x210) + 0x60))(*(long **)(param_1 + 0x210),1);
  FUN_7103783690((long *)(param_1 + 0x430),*(int *)(param_1 + 0x438) + 1);
  (**(code **)(**(long **)(param_1 + 0x430) + 0x60))(*(long **)(param_1 + 0x430),1);
  (**(code **)(**(long **)(param_1 + 0x430) + 0x70))(*(long **)(param_1 + 0x430),1);
  *(undefined1 *)(param_1 + 0x218) = 1;
  FUN_7103778300(0x3f800000,plVar3[2],0x71044018d1);
  FUN_7103778300(0x3f800000,plVar3[2],0x7104421055);
  if (*(uint *)(param_1 + 0x1d4) < 0x13) {
    *(undefined4 *)(param_1 + (long)(int)*(uint *)(param_1 + 0x1d4) * 4 + 0x188) = 9;
    return;
  }
                    /* WARNING: Subroutine does not return */
  abort();
}

