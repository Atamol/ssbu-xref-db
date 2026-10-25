// addr:      7102c72db0
// offset:    0x2c72db0
// name:      FUN_7102c72db0
// mangled:   
// signature: ulong __cdecl FUN_7102c72db0(long * param_1, ulong param_2, undefined8 param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


ulong FUN_7102c72db0(long *param_1,ulong param_2,undefined8 param_3,byte ****param_4,
                    long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined **ppuVar1;
  uint uVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  long *********ppppppppplVar6;
  long lVar7;
  long *********local_58;
  
  ppuVar1 = (undefined **)&DAT_7105128308;
  if ((param_2 & 1) == 0) {
    ppuVar1 = &PTR_s_light01_7105128328;
  }
  FUN_71025f7350(*(long *)(*(long *)(*param_1 + 0x318) + 0x10),*ppuVar1);
  FUN_7102633800(*(long *)(*param_1 + 0x318),(long *********)ppuVar1[1],param_3,param_4,param_5,
                 param_6,param_7,param_8);
  ppppppppplVar6 = (long *********)ppuVar1[2];
  FUN_7102633a10(*(long *)(*param_1 + 0x318),ppppppppplVar6,1,param_4,param_5,param_6,param_7,
                 param_8);
  uVar3 = FUN_7102633b90(*(long *)(*param_1 + 0x318),(long *********)ppuVar1[3],1,param_4,param_5,
                         param_6,param_7,param_8);
  lVar4 = *(long *)(*param_1 + 0x310);
  uVar5 = *(long *)(lVar4 + 0xd8) - *(long *)(lVar4 + 0xd0);
  if (0 < (int)(uVar5 >> 4)) {
    uVar5 = uVar5 >> 4 & 0xffffffff;
    lVar7 = 0;
    while( true ) {
      uVar5 = uVar5 - 1;
      lVar4 = *(long *)(*(long *)(lVar4 + 0xd0) + lVar7);
      if ((lVar4 != 0) &&
         ((((*(long *)(lVar4 + 0x68) == 0x806ae66ff || (*(long *)(lVar4 + 0x68) == 0x1093598f8c)) ||
           (*(long *)(lVar4 + 0x68) == 0x10d4f9f55c)) || (*(long *)(lVar4 + 0x68) == 0x10e999dcec)))
         ) {
        if (*(char *)(lVar4 + 0xe0) != '\0') {
          local_58 = ppppppppplVar6;
          uVar2 = FUN_71026527b0(*(undefined8 **)(lVar4 + 0xb8),&local_58,(long *********)0x1,
                                 param_4,param_5,param_6,param_7,param_8);
          uVar3 = (ulong)uVar2;
        }
        if (*(char *)(lVar4 + 0xe0) != '\0') {
          *(undefined1 *)(*(long *)(lVar4 + 0xb8) + 0x33) = 0;
        }
      }
      if (uVar5 == 0) break;
      lVar4 = *(long *)(*param_1 + 0x310);
      lVar7 = lVar7 + 0x10;
    }
  }
  return uVar3;
}

