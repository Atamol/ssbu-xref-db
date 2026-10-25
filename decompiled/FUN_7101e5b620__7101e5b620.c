// addr:      7101e5b620
// offset:    0x1e5b620
// name:      FUN_7101e5b620
// mangled:   
// signature: undefined __cdecl FUN_7101e5b620(long param_1, undefined8 param_2, long * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_7101e5b620(long param_1,undefined8 param_2,long ****param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  byte bVar1;
  ulong uVar2;
  undefined8 extraout_x1;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  
  if (*(char *)(param_1 + 0x381) != '\0') {
    bVar1 = *(byte *)(param_1 + 0x382);
    uVar5 = (ulong)bVar1;
    uVar2 = FUN_71032a3d90(*(long *)(*(long *)(*(long *)(DAT_710532f730 + 8) + 0x208) + 8),
                           0x1530ff0e86);
    uVar4 = *(ulong *)(param_1 + 0x3b8);
    if ((((uVar2 & 0xff00000000000000) == 0x5200000000000000 && (uVar2 & 0xffffffffff) != 0) &&
        ((uVar4 & 0xff00000000000000) == 0x5200000000000000)) && ((uVar4 & 0xffffffffff) != 0)) {
      if (((uVar4 ^ uVar2) & 0xffffffffff) == 0) goto LAB_7101e5b774;
    }
    else if (((uVar4 & 0xffffffffff) != 0 && (uVar4 & 0xff00000000000000) == 0x5200000000000000) ==
             ((uVar2 & 0xff00000000000000) == 0x5200000000000000 && (uVar2 & 0xffffffffff) != 0))
    goto LAB_7101e5b774;
    lVar3 = *(long *)(**(long **)(param_1 + 0x3b0) + 8);
    if (((*(char *)(lVar3 + 0x388) != '\0') &&
        (uVar2 = (ulong)*(byte *)(*(long **)(param_1 + 0x3b0) + 1), uVar2 < 0xe)) &&
       ((lVar3 = *(long *)(lVar3 + uVar2 * 8 + 8), lVar3 != 0 && bVar1 < 4 &&
        (*(short *)(lVar3 + uVar5 * 0x1c8 + 8) != -1)))) {
      lVar3 = *(long *)(*(long *)(param_1 + 0x208) + uVar5 * 8 + 0x48);
      if (lVar3 != 0) {
        FUN_7101e9be90(lVar3,extraout_x1,param_3,param_4,param_5,param_6,param_7,param_8);
        FUN_7101e9c4a0(lVar3);
      }
      if ((*(char *)(param_1 + 0x212) != '\0') &&
         (lVar3 = *(long *)(*(long *)(param_1 + 0x208) + uVar5 * 8 + 0x48), lVar3 != 0)) {
        FUN_7103778300(0x3f800000,*(long *)(lVar3 + 8),0x71042d69e0);
      }
    }
  }
LAB_7101e5b774:
  *(undefined4 *)(param_1 + 0x1d8) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x1c8) = 0;
  *(undefined8 *)(param_1 + 0x1d0) = 0;
  *(undefined8 *)(param_1 + 0x1b8) = 0;
  *(undefined8 *)(param_1 + 0x1c0) = 0;
  *(undefined8 *)(param_1 + 0x1a8) = 0;
  *(undefined8 *)(param_1 + 0x1b0) = 0;
  *(undefined8 *)(param_1 + 0x198) = 0;
  *(undefined8 *)(param_1 + 0x1a0) = 0;
  *(undefined8 *)(param_1 + 0x1e4) = 0xffffffff00000000;
  *(undefined8 *)(param_1 + 400) = 0x1300000015;
  *(undefined1 *)(param_1 + 0x1ec) = 0;
  *(undefined8 *)(param_1 + 0x1dc) = 0xffffffff00000001;
  return;
}

