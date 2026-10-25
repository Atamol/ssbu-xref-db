// addr:      7101d0ae40
// offset:    0x1d0ae40
// name:      FUN_7101d0ae40
// mangled:   
// signature: undefined __cdecl FUN_7101d0ae40(long param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_7101d0ae40(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                   undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long lVar1;
  long lVar2;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 extraout_x1_02;
  undefined8 extraout_x1_03;
  
  lVar2 = *(long *)(param_1 + 200);
  for (lVar1 = *(long *)(param_1 + 0xc0); lVar1 != lVar2; lVar1 = lVar1 + 0x1a0) {
    FUN_7101d0e4a0(lVar1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
    param_2 = extraout_x1;
  }
  lVar2 = *(long *)(param_1 + 0xe0);
  for (lVar1 = *(long *)(param_1 + 0xd8); lVar1 != lVar2; lVar1 = lVar1 + 0x1a0) {
    FUN_7101d0e4a0(lVar1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
    param_2 = extraout_x1_00;
  }
  lVar2 = *(long *)(param_1 + 0xf8);
  for (lVar1 = *(long *)(param_1 + 0xf0); lVar1 != lVar2; lVar1 = lVar1 + 0x1a0) {
    FUN_7101d0e4a0(lVar1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
    param_2 = extraout_x1_01;
  }
  lVar2 = *(long *)(param_1 + 0x110);
  for (lVar1 = *(long *)(param_1 + 0x108); lVar1 != lVar2; lVar1 = lVar1 + 0x1a0) {
    FUN_7101d0e4a0(lVar1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
    param_2 = extraout_x1_02;
  }
  lVar2 = *(long *)(param_1 + 0x128);
  for (lVar1 = *(long *)(param_1 + 0x120); lVar1 != lVar2; lVar1 = lVar1 + 0x1a0) {
    FUN_7101d0e4a0(lVar1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
    param_2 = extraout_x1_03;
  }
  lVar2 = *(long *)(param_1 + 0xb0);
  for (lVar1 = *(long *)(param_1 + 0xa8); lVar1 != lVar2; lVar1 = lVar1 + 0x30) {
    FUN_7103778300(0x3f800000,*(long *)(lVar1 + 8),0x71043cf67d);
  }
  return;
}

