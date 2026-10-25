// addr:      7101d14390
// offset:    0x1d14390
// name:      FUN_7101d14390
// mangled:   
// signature: undefined __cdecl FUN_7101d14390(long param_1)


void FUN_7101d14390(long param_1)

{
  long lVar1;
  long *plVar2;
  ulong uVar3;
  
  if ((*(char *)(param_1 + 0x4c0) != '\0') &&
     (((lVar1 = *(long *)(*(long *)(*(long *)(param_1 + 0x110) + 8) + 8), lVar1 == 0 ||
       (plVar2 = (long *)FUN_71037964b0(lVar1,0x7104453107), plVar2 == (long *)0x0)) ||
      (uVar3 = (**(code **)(*plVar2 + 0x138))(), (uVar3 & 1) != 0)))) {
    if (0x12 < *(uint *)(param_1 + 0xf4)) goto LAB_7101d1448c;
    lVar1 = param_1 + (long)(int)*(uint *)(param_1 + 0xf4) * 4;
    *(int *)(lVar1 + 0xa8) = *(int *)(lVar1 + 0xa8) + 1;
  }
  if (*(char *)(param_1 + 0x4c4) == '\0') {
    lVar1 = *(long *)(**(long **)**(undefined8 **)(param_1 + 0x108) + 0x600);
    if ((*(char *)(lVar1 + 0x4aa) != '\0') && ((*(byte *)(lVar1 + 0x1b0) >> 1 & 1) != 0)) {
      *(undefined8 *)(param_1 + 0xf8) = 0xffffffff;
      *(undefined4 *)(param_1 + 0x100) = 0xffffffff;
      *(undefined8 *)(param_1 + 8) = 0;
      *(undefined8 *)(param_1 + 0x10) = 0;
      *(undefined4 *)(param_1 + 0xf4) = 0;
      *(undefined8 *)(param_1 + 0xec) = 0;
      *(undefined8 *)(param_1 + 0xe4) = 0;
      *(undefined8 *)(param_1 + 0xdc) = 0;
      *(undefined8 *)(param_1 + 0xd4) = 0;
      *(undefined8 *)(param_1 + 0xcc) = 0;
      *(undefined8 *)(param_1 + 0xc4) = 0;
      *(undefined8 *)(param_1 + 0xbc) = 0;
      *(undefined8 *)(param_1 + 0xb4) = 0;
      *(undefined8 *)(param_1 + 0xac) = 0;
      *(undefined1 *)(param_1 + 0x104) = 0;
      *(undefined4 *)(param_1 + 0xa8) = 1;
    }
  }
  else {
    if (0x12 < *(uint *)(param_1 + 0xf4)) {
LAB_7101d1448c:
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(undefined4 *)(param_1 + (long)(int)*(uint *)(param_1 + 0xf4) * 4 + 0xa8) = 7;
  }
  return;
}

