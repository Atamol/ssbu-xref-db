// addr:      7101e71d10
// offset:    0x1e71d10
// name:      FUN_7101e71d10
// mangled:   
// signature: undefined __cdecl FUN_7101e71d10(long param_1, undefined8 param_2, long * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_7101e71d10(long param_1,undefined8 param_2,long ****param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 uVar1;
  uint uVar2;
  long *plVar3;
  ulong uVar4;
  long lVar5;
  code *pcVar6;
  long lVar7;
  
  lVar7 = *(long *)(param_1 + 0x80);
  FUN_7103399c10(*(long *)(*(long *)(lVar7 + 0x1e8) + 0x10));
  if ((*(char *)(*(long *)(*(long *)(lVar7 + 0x1e8) + 0x10) + 0x90) == '\0') &&
     (*(char *)(lVar7 + 0x1f1) != '\0')) {
    *(undefined1 *)(lVar7 + 0x1f1) = 0;
    FUN_7101e943a0((long *)(lVar7 + 0x1e8),*(byte *)(lVar7 + 0x1f2),param_3,param_4,param_5,param_6,
                   param_7,param_8);
  }
  lVar5 = *(long *)(*(long *)(lVar7 + 0x1c8) + 0x40);
  if (((lVar5 == 0) || (plVar3 = *(long **)(*(long *)(lVar5 + 8) + 8), plVar3 == (long *)0x0)) ||
     (uVar4 = (**(code **)(*plVar3 + 0x138))(), (uVar4 & 1) != 0)) {
    if (*(char *)(lVar7 + 0x1d1) != '\0') {
      FUN_7103778300(0x3f800000,*(long *)(*(long *)(lVar7 + 0x1c8) + 8),0x71042f8a23);
      *(undefined1 *)(lVar7 + 0x1d1) = 0;
    }
    if (*(int *)(lVar7 + 0x1d4) != 0) {
      *(int *)(lVar7 + 0x1d4) = *(int *)(lVar7 + 0x1d4) + -1;
    }
  }
  if (*(uint *)(lVar7 + 0x18c) < 0x13) {
    uVar2 = *(uint *)(lVar7 + (long)(int)*(uint *)(lVar7 + 0x18c) * 4 + 0x140);
    if (*(uint *)(lVar7 + 400) != uVar2) {
      *(uint *)(lVar7 + 0x198) = *(uint *)(lVar7 + 400);
      *(uint *)(lVar7 + 400) = uVar2;
      if (0x10 < uVar2) goto LAB_7101e71e98;
      lVar5 = lVar7 + (long)(int)uVar2 * 0x10;
      uVar1 = *(undefined8 *)(lVar5 + 0x38);
      *(undefined8 *)(lVar7 + 0x10) = *(undefined8 *)(lVar5 + 0x30);
      *(undefined8 *)(lVar7 + 0x18) = uVar1;
      pcVar6 = *(code **)(lVar7 + 0x20);
      uVar4 = *(ulong *)(lVar7 + 0x28) & 1;
      if (uVar4 != 0 || pcVar6 != (code *)0x0) {
        if (uVar4 != 0) {
          pcVar6 = *(code **)(pcVar6 + *(long *)(*(long *)(lVar7 + 8) +
                                                ((long)*(ulong *)(lVar7 + 0x28) >> 1)));
        }
        (*pcVar6)();
      }
      *(undefined4 *)(lVar7 + 0x194) = 0;
    }
    if (*(char *)(lVar7 + 0x19c) != '\0') {
      pcVar6 = *(code **)(lVar7 + 0x20);
      uVar4 = *(ulong *)(lVar7 + 0x28) & 1;
      if (uVar4 != 0 || pcVar6 != (code *)0x0) {
        if (uVar4 != 0) {
          pcVar6 = *(code **)(pcVar6 + *(long *)(*(long *)(lVar7 + 8) +
                                                ((long)*(ulong *)(lVar7 + 0x28) >> 1)));
        }
        (*pcVar6)();
      }
      *(undefined4 *)(lVar7 + 0x194) = 0;
      *(undefined1 *)(lVar7 + 0x19c) = 0;
    }
    if (*(long *)(lVar7 + 8) != 0) {
      pcVar6 = *(code **)(lVar7 + 0x10);
      uVar4 = *(ulong *)(lVar7 + 0x18) & 1;
      if (uVar4 != 0 || pcVar6 != (code *)0x0) {
        if (uVar4 != 0) {
          pcVar6 = *(code **)(pcVar6 + *(long *)(*(long *)(lVar7 + 8) +
                                                ((long)*(ulong *)(lVar7 + 0x18) >> 1)));
        }
        (*pcVar6)();
      }
    }
    *(int *)(lVar7 + 0x194) = *(int *)(lVar7 + 0x194) + 1;
    return;
  }
LAB_7101e71e98:
                    /* WARNING: Subroutine does not return */
  abort();
}

