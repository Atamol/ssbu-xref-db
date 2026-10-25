// addr:      7100022b50
// offset:    0x22b50
// name:      FUN_7100022b50
// mangled:   
// signature: undefined8 __cdecl FUN_7100022b50(long * param_1, long param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


undefined8
FUN_7100022b50(long *param_1,long param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5,
              undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  
  if ((param_1[0x11d] + param_1[0x121] == 0) && ((char)param_1[0xc] == '\0')) {
    if (*(code **)(param_1[0x10b] + 0x70) == (code *)0x0) {
      param_4 = 0;
      uVar1 = FUN_7100015800(*(uint *)(param_1 + 0x4b),0xffffffff,0xffffffff,0);
      if (uVar1 == 0) {
        return 0;
      }
    }
    else {
      uVar2 = (**(code **)(param_1[0x10b] + 0x70))(param_1,1);
      if ((uVar2 & 1) == 0) {
        return 0;
      }
    }
    lVar3 = param_1[0xd];
    *param_1 = param_2;
    FUN_7100015de0(param_2,(byte *)"Connection %ld seems to be dead!\n",lVar3,param_4,param_5,
                   param_6,param_7,param_8);
    FUN_710001e860(param_1,1,lVar3,param_4,param_5,param_6,param_7,param_8);
  }
  return 0;
}

