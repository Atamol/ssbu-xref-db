// addr:      71000179b0
// offset:    0x179b0
// name:      FUN_71000179b0
// mangled:   
// signature: ulong __cdecl FUN_71000179b0(long * param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


ulong FUN_71000179b0(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                    undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  
  uVar3 = 0;
  lVar4 = *param_1;
  *(undefined1 *)((long)param_1 + 0x823) = 0;
  *(uint *)(lVar4 + 0x224) = *(uint *)(lVar4 + 0x224) & 0xfffffffd;
  if (*(long *)(lVar4 + 0x2e0) == 0) {
    if (*(int *)(lVar4 + 0x480) == 3) {
      return 0;
    }
    if (*(code **)(lVar4 + 0x2e8) == (code *)0x0) {
      if (*(code **)(lVar4 + 0x340) == (code *)0x0) {
        if (*(code **)(lVar4 + 0x4fd0) == FUN_71000279b0) {
          param_3 = 0;
          iVar2 = FUN_71000279e0();
          if (iVar2 != -1) {
            return 0;
          }
        }
        FUN_7100016040(lVar4,(byte *)"necessary data rewind wasn\'t possible",param_3,param_4,
                       param_5,param_6,param_7,param_8);
      }
      else {
        uVar1 = (**(code **)(lVar4 + 0x340))(lVar4,1,*(undefined8 *)(lVar4 + 0x3a0));
        FUN_7100015de0(lVar4,(byte *)"the ioctl callback returned %d\n",(ulong)uVar1,param_4,param_5
                       ,param_6,param_7,param_8);
        if (uVar1 == 0) {
          return 0;
        }
        FUN_7100016040(lVar4,(byte *)"ioctl callback returned error %d",(ulong)uVar1,param_4,param_5
                       ,param_6,param_7,param_8);
      }
    }
    else {
      uVar3 = (**(code **)(lVar4 + 0x2e8))(*(undefined8 *)(lVar4 + 0x378),0,0);
      if ((int)uVar3 == 0) {
        return uVar3;
      }
      FUN_7100016040(lVar4,(byte *)"seek callback returned error %d",uVar3 & 0xffffffff,param_4,
                     param_5,param_6,param_7,param_8);
    }
    uVar3 = 0x41;
  }
  return uVar3;
}

