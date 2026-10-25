// addr:      7102baeee0
// offset:    0x2baeee0
// name:      FUN_7102baeee0
// mangled:   
// signature: undefined __cdecl FUN_7102baeee0(long param_1, undefined8 param_2, long * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_7102baeee0(long param_1,undefined8 param_2,long ****param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long lVar1;
  undefined8 extraout_x1;
  long lVar2;
  
  if (*(char *)(param_1 + 0x390) != '\0') {
    return;
  }
  if (*(float *)(param_1 + 0x368) < *(float *)(param_1 + 0x36c)) {
    return;
  }
  if (*(float *)(param_1 + 0x370) < *(float *)(param_1 + 0x368)) {
    return;
  }
  lVar1 = *(long *)(param_1 + 0x330);
  *(undefined4 *)(param_1 + 0x364) = 0;
  if (lVar1 != 0) {
    if (*(long *)(lVar1 + 0xd8) != 0) {
      FUN_7102610070(lVar1,(byte *)"yak_signal_00_set_00_start");
      lVar1 = *(long *)(param_1 + 0x330);
      if (lVar1 == 0) goto LAB_7102baef5c;
    }
    if (*(long *)(lVar1 + 200) != 0) {
      param_3 = (long ****)0x0;
      FUN_71025ee080(lVar1 + 0x60,(byte *)"yak_signal_00_set_00_start",0);
      lVar1 = *(long *)(param_1 + 0x330);
    }
  }
LAB_7102baef5c:
  FUN_710260fdd0(0,lVar1,1);
  lVar2 = *(long *)(param_1 + 0x330);
  lVar1 = 0;
  if (lVar2 != 0) {
    if ((*(char *)(lVar2 + 0xe0) != '\0') && (*(long *)(lVar2 + 200) != 0)) {
      *(undefined2 *)(*(long *)(lVar2 + 200) + 0x30) = 0;
    }
    if (*(long *)(lVar2 + 0xd8) != 0) {
      *(undefined1 *)(*(long *)(lVar2 + 0xd8) + 0x21) = 0;
    }
    if (*(char *)(lVar2 + 0xe0) != '\0') {
      *(undefined1 *)(*(long *)(lVar2 + 0xb0) + 0x10) = 1;
    }
    lVar1 = *(long *)(param_1 + 0x330);
  }
  if (*(int *)(param_1 + 0x364) == 1) {
    if (lVar1 != 0) {
      if ((*(char *)(lVar1 + 0xe0) != '\0') && (*(long *)(lVar1 + 200) != 0)) {
        *(undefined2 *)(*(long *)(lVar1 + 200) + 0x32) = 0x101;
      }
      if (*(long *)(lVar1 + 0xd8) != 0) {
        *(undefined1 *)(*(long *)(lVar1 + 0xd8) + 0x22) = 1;
        lVar1 = *(long *)(param_1 + 0x330);
        goto joined_r0x007102baf014;
      }
    }
  }
  else if (lVar1 != 0) {
    if ((*(char *)(lVar1 + 0xe0) != '\0') && (*(long *)(lVar1 + 200) != 0)) {
      *(undefined2 *)(*(long *)(lVar1 + 200) + 0x32) = 0;
    }
    if (*(long *)(lVar1 + 0xd8) != 0) {
      *(undefined1 *)(*(long *)(lVar1 + 0xd8) + 0x22) = 0;
    }
  }
  lVar1 = *(long *)(param_1 + 0x330);
joined_r0x007102baf014:
  if (lVar1 != 0) {
    *(undefined1 *)(lVar1 + 0x110) = 1;
    FUN_71025e9d50((long *)(lVar1 + 0x108),extraout_x1,param_3,param_4,param_5,param_6,param_7,
                   param_8);
    lVar1 = *(long *)(param_1 + 0x330);
    if (lVar1 != 0) {
      *(byte *)(lVar1 + 0x118) = *(byte *)(lVar1 + 0x118) & 0xfe;
    }
  }
  *(undefined1 *)(param_1 + 0x390) = 1;
  *(code **)(param_1 + 0x340) = FUN_7102baf060;
  *(undefined8 *)(param_1 + 0x348) = 0;
  return;
}

