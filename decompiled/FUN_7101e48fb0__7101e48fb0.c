// addr:      7101e48fb0
// offset:    0x1e48fb0
// name:      FUN_7101e48fb0
// mangled:   
// signature: undefined __cdecl FUN_7101e48fb0(long param_1, undefined8 param_2, long * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_7101e48fb0(long param_1,undefined8 param_2,long ****param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long *plVar1;
  ulong uVar2;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  if (*(int *)(param_1 + 0x184) == 0) {
    if (*(char *)(param_1 + 0x1b0) != '\0') {
      lVar3 = 0;
      lVar6 = 9;
      do {
        if ((((lVar6 - 9U < 4) &&
             (lVar5 = *(long *)(*(long *)(param_1 + 0x1a8) + lVar6 * 8), lVar5 != 0)) &&
            (*(char *)(lVar5 + 0xb0) != '\0')) &&
           (((plVar1 = *(long **)(**(long **)(param_1 + 0x250) + 8), (char)plVar1[0x71] != '\0' &&
             (lVar4 = *plVar1, lVar4 != 0)) && (*(short *)(lVar4 + lVar3) != -1)))) {
          FUN_7101e9be90(lVar5,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
          FUN_7101e9c4a0(lVar5);
          param_2 = extraout_x1;
          if ((*(char *)(param_1 + 0x1b2) != '\0') &&
             (lVar5 = *(long *)(*(long *)(param_1 + 0x1a8) + lVar6 * 8), lVar5 != 0)) {
            FUN_7103778300(0x3f800000,*(long *)(lVar5 + 8),0x71042d69e0);
            param_2 = extraout_x1_00;
          }
        }
        uVar2 = lVar6 - 8;
        lVar3 = lVar3 + 0x1d8;
        lVar6 = lVar6 + 1;
      } while (uVar2 < *(byte *)(param_1 + 0x1b0));
    }
  }
  else {
    lVar3 = *(long *)(*(long *)(param_1 + 0x1c8) + 0x48);
    if (((lVar3 == 0) || (plVar1 = *(long **)(*(long *)(lVar3 + 8) + 8), plVar1 == (long *)0x0)) ||
       (uVar2 = (**(code **)(*plVar1 + 0x138))(), (uVar2 & 1) != 0)) {
      *(undefined8 *)(param_1 + 0x10) = 0;
      *(undefined8 *)(param_1 + 0x18) = 0;
      *(undefined8 *)(param_1 + 0x174) = 0;
      *(undefined8 *)(param_1 + 0x16c) = 0;
      *(undefined8 *)(param_1 + 0x164) = 0;
      *(undefined8 *)(param_1 + 0x15c) = 0;
      *(undefined8 *)(param_1 + 0x154) = 0;
      *(undefined8 *)(param_1 + 0x14c) = 0;
      *(undefined8 *)(param_1 + 0x144) = 0;
      *(undefined8 *)(param_1 + 0x134) = 0;
      *(undefined8 *)(param_1 + 0x13c) = 0;
      *(undefined8 *)(param_1 + 0x180) = 0xffffffff;
      *(undefined4 *)(param_1 + 0x188) = 0xffffffff;
      *(undefined4 *)(param_1 + 0x17c) = 0;
      *(undefined1 *)(param_1 + 0x18c) = 0;
      *(undefined4 *)(param_1 + 0x130) = 0xf;
    }
  }
  return;
}

