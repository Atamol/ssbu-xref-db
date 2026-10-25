// addr:      7101bf4410
// offset:    0x1bf4410
// name:      FUN_7101bf4410
// mangled:   
// signature: undefined __cdecl FUN_7101bf4410(long param_1)


void FUN_7101bf4410(long param_1)

{
  long lVar1;
  long *plVar2;
  ulong uVar3;
  undefined4 uVar4;
  
  if (*(int *)(param_1 + 0xcc) == 0) {
    FUN_71037760f0(*(long *)**(undefined8 **)(param_1 + 0xe0),1);
    *(undefined1 *)(param_1 + 300) = 0;
  }
  lVar1 = *(long *)(*(long *)(**(long **)(param_1 + 0xe0) + 0x10) + 8);
  if ((((lVar1 == 0) || (plVar2 = (long *)FUN_71037964b0(lVar1,0x71043cfb52), plVar2 == (long *)0x0)
       ) || (uVar3 = (**(code **)(*plVar2 + 0x138))(), (uVar3 & 1) != 0)) &&
     (*(char *)(param_1 + 0x12e) == '\0')) {
    FUN_7103778760(*(long *)(**(long **)(param_1 + 0xe0) + 0x10),0x71042d6998);
    *(undefined1 *)(param_1 + 0x12e) = 1;
  }
  uVar4 = 0x3f800000;
  if (*(char *)(param_1 + 300) != '\0') {
    uVar4 = 0;
  }
  *(undefined4 *)(*(long *)**(undefined8 **)(param_1 + 0xe0) + 0x640) = uVar4;
  if (((*(char *)(param_1 + 0x12d) != '\0') &&
      (lVar1 = *(long *)(*(long *)**(undefined8 **)(param_1 + 0xe0) + 0x600),
      *(char *)(lVar1 + 0x4aa) != '\0')) && ((*(byte *)(lVar1 + 0x1a8) >> 1 & 1) != 0)) {
    if (0x12 < *(uint *)(param_1 + 0xc4)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(undefined4 *)(param_1 + (long)(int)*(uint *)(param_1 + 0xc4) * 4 + 0x78) = 3;
  }
  return;
}

