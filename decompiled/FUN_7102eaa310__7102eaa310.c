// addr:      7102eaa310
// offset:    0x2eaa310
// name:      FUN_7102eaa310
// mangled:   
// signature: undefined __cdecl FUN_7102eaa310(long param_1, undefined8 param_2, long * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_7102eaa310(long param_1,undefined8 param_2,long ****param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  bool bVar1;
  undefined8 extraout_x1;
  long lVar2;
  
  if (*(char *)(param_1 + 0x98) != '\0') {
    *(undefined1 *)(param_1 + 0x98) = 0;
    FUN_7102610070(*(long *)(param_1 + 200 + (long)*(int *)(param_1 + 0xb0) * 8),
                   (byte *)"Shaymin_land_appear");
    *(undefined4 *)(param_1 + 0xa4) = 0;
    lVar2 = *(long *)(param_1 + 200 + (long)*(int *)(param_1 + 0xb0) * 8);
    if (lVar2 != 0) {
      *(undefined1 *)(lVar2 + 0x110) = 1;
      FUN_71025e9d50((long *)(lVar2 + 0x108),extraout_x1,param_3,param_4,param_5,param_6,param_7,
                     param_8);
      lVar2 = *(long *)(param_1 + (long)*(int *)(param_1 + 0xb0) * 8 + 200);
      if (lVar2 != 0) {
        FUN_71025ee450(0,*(long **)(lVar2 + 0xd8),1);
        lVar2 = *(long *)(param_1 + (long)*(int *)(param_1 + 0xb0) * 8 + 200);
        if (lVar2 != 0) {
          if ((*(char *)(lVar2 + 0xe0) != '\0') && (*(long *)(lVar2 + 200) != 0)) {
            *(undefined2 *)(*(long *)(lVar2 + 200) + 0x32) = 0;
          }
          if (*(long *)(lVar2 + 0xd8) != 0) {
            *(undefined1 *)(*(long *)(lVar2 + 0xd8) + 0x22) = 0;
          }
        }
      }
    }
    lVar2 = *(long *)(param_1 + (long)*(int *)(param_1 + 0xb0) * 8 + 200);
    if ((lVar2 != 0) && (lVar2 = *(long *)(lVar2 + 0xd8), lVar2 != 0)) {
      *(undefined1 *)(lVar2 + 0x21) = 0;
    }
  }
  bVar1 = FUN_710260ffb0(*(long *)(param_1 + (long)*(int *)(param_1 + 0xb0) * 8 + 200));
  if (bVar1) {
    *(undefined4 *)(param_1 + 0x40) = 2;
    *(undefined1 *)(param_1 + 0x98) = 1;
  }
  return;
}

