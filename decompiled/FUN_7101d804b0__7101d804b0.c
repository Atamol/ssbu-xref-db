// addr:      7101d804b0
// offset:    0x1d804b0
// name:      FUN_7101d804b0
// mangled:   
// signature: undefined __cdecl FUN_7101d804b0(long param_1)


void FUN_7101d804b0(long param_1)

{
  long *plVar1;
  ulong uVar2;
  uint uVar3;
  undefined4 uVar4;
  long lVar5;
  
  lVar5 = **(long **)(param_1 + 0x1e8);
  if (*(int *)(param_1 + 0x1dc) == 0) {
    FUN_7103778300(0x3f800000,*(long *)(lVar5 + 0x10),0x710436c7a1);
  }
  if (*(char *)(*(long *)(param_1 + 0x210) + 0x280) == '\0') {
    lVar5 = *(long *)(*(long *)(lVar5 + 0x10) + 8);
    if (((lVar5 != 0) &&
        (plVar1 = (long *)FUN_71037964b0(lVar5,0x710436c7a1), plVar1 != (long *)0x0)) &&
       (uVar2 = (**(code **)(*plVar1 + 0x138))(), (uVar2 & 1) == 0)) {
      return;
    }
    uVar3 = *(uint *)(param_1 + 0x1d4);
    if (0x12 < uVar3) goto LAB_7101d80554;
    uVar4 = 5;
  }
  else {
    uVar3 = *(uint *)(param_1 + 0x1d4);
    if (0x12 < uVar3) {
LAB_7101d80554:
                    /* WARNING: Subroutine does not return */
      abort();
    }
    uVar4 = 2;
  }
  *(undefined4 *)(param_1 + (long)(int)uVar3 * 4 + 0x188) = uVar4;
  return;
}

