// addr:      710185f870
// offset:    0x185f870
// name:      FUN_710185f870
// mangled:   
// signature: undefined __cdecl FUN_710185f870(long param_1)


void FUN_710185f870(long param_1)

{
  uint uVar1;
  long lVar2;
  
  FUN_7101ba5a60(*(long *)(*(long *)(param_1 + 0x170) + 0x80),(long *)(param_1 + 0x198),
                 *(ulong *)(param_1 + 400));
  lVar2 = *(long *)(*(long *)(param_1 + 0x170) + 0x80);
  FUN_7103778300(0x3f800000,*(long *)(**(long **)(lVar2 + 8) + 0x10),0x71042807d3);
  *(undefined1 *)(lVar2 + 0x1559) = 1;
  if (*(uint *)(param_1 + 0x154) < 0x13) {
    *(undefined4 *)(param_1 + (long)(int)*(uint *)(param_1 + 0x154) * 4 + 0x108) = 1;
    if (*(int *)(param_1 + 0x154) < 0x12) {
      uVar1 = *(int *)(param_1 + 0x154) + 1;
      *(uint *)(param_1 + 0x154) = uVar1;
      if (0x12 < uVar1) goto LAB_710185f90c;
      *(undefined4 *)(param_1 + (long)(int)uVar1 * 4 + 0x108) = 0xd;
    }
    return;
  }
LAB_710185f90c:
                    /* WARNING: Subroutine does not return */
  abort();
}

