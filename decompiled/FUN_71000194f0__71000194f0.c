// addr:      71000194f0
// offset:    0x194f0
// name:      FUN_71000194f0
// mangled:   
// signature: ulong __cdecl FUN_71000194f0(long * param_1, long * param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


ulong FUN_71000194f0(long *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                    undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long lVar1;
  ulong uVar2;
  undefined8 extraout_x1;
  long lVar3;
  
  lVar3 = *param_1;
  *param_2 = 0;
  if (((((*(char *)(lVar3 + 0x6c1) == '\0') || ((*(uint *)(param_1[0x10b] + 0x80) & 0x40003) != 0))
       && (*(long *)(lVar3 + 0xe0) + *(long *)(lVar3 + 0xf0) == 0)) &&
      (*(char *)((long)param_1 + 0x812) != '\0')) &&
     (((*(char *)(lVar3 + 0x6c0) == '\0' || ((*(byte *)(param_1[0x10b] + 0x80) & 3) != 0)) &&
      (*(int *)(lVar3 + 0x8fc) != 0xb)))) {
    FUN_7100015de0(*param_1,(byte *)"Connection died, retrying a fresh connect\n",param_3,param_4,
                   param_5,param_6,param_7,param_8);
    lVar1 = FUN_71000272c0();
    *param_2 = lVar1;
    if (lVar1 == 0) {
      return 0x1b;
    }
    FUN_7100004200((long)param_1,1);
    *(undefined1 *)(param_1 + 0x104) = 1;
    if (((*(byte *)(param_1[0x10b] + 0x80) & 3) != 0) &&
       (*(long *)(*(long *)(lVar3 + 600) + 0x30) != 0)) {
      uVar2 = FUN_71000179b0(param_1,extraout_x1,param_3,param_4,param_5,param_6,param_7,param_8);
      return uVar2;
    }
  }
  return 0;
}

