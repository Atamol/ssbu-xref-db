// addr:      7102eaa400
// offset:    0x2eaa400
// name:      FUN_7102eaa400
// mangled:   
// signature: undefined __cdecl FUN_7102eaa400(long param_1, undefined8 param_2, long * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_7102eaa400(long param_1,undefined8 param_2,long ****param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  bool bVar1;
  undefined8 extraout_x1;
  char *pcVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  
  if (*(char *)(param_1 + 0x98) == '\0') {
    lVar4 = (long)*(int *)(param_1 + 0xb0);
    goto LAB_7102eaa5bc;
  }
  *(undefined1 *)(param_1 + 0x98) = 0;
  *(undefined1 *)(param_1 + 0xac) = 0;
  lVar4 = *(long *)(param_1 + (long)*(int *)(param_1 + 0xb0) * 8 + 200);
  if (lVar4 != 0) {
    *(undefined1 *)(lVar4 + 0x110) = 1;
    FUN_71025e9d50((long *)(lVar4 + 0x108),param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  }
  iVar3 = *(int *)(param_1 + 0xb4);
  if (iVar3 == 2) {
    lVar4 = *(long *)(param_1 + (long)*(int *)(param_1 + 0xb0) * 8 + 200);
    if (*(char *)(param_1 + 0xb8) == '\0') {
      pcVar2 = "Shaymin_land_wait";
      goto LAB_7102eaa548;
    }
    FUN_7102610070(lVar4,(byte *)"Shaymin_sky_wait");
    lVar4 = *(long *)(param_1 + (long)*(int *)(param_1 + 0xb0) * 8 + 200);
    if (lVar4 != 0) {
      *(undefined1 *)(lVar4 + 0x110) = 1;
      FUN_71025e9d50((long *)(lVar4 + 0x108),extraout_x1,param_3,param_4,param_5,param_6,param_7,
                     param_8);
      lVar4 = *(long *)(param_1 + (long)*(int *)(param_1 + 0xb0) * 8 + 200);
      if (lVar4 != 0) {
        FUN_71025ee450(0,*(long **)(lVar4 + 0xd8),1);
        lVar4 = *(long *)(param_1 + (long)*(int *)(param_1 + 0xb0) * 8 + 200);
        if (lVar4 != 0) {
          if ((*(char *)(lVar4 + 0xe0) != '\0') && (*(long *)(lVar4 + 200) != 0)) {
            *(undefined2 *)(*(long *)(lVar4 + 200) + 0x32) = 0;
          }
          if (*(long *)(lVar4 + 0xd8) != 0) {
            *(undefined1 *)(*(long *)(lVar4 + 0xd8) + 0x22) = 0;
          }
        }
      }
    }
    lVar4 = *(long *)(param_1 + (long)*(int *)(param_1 + 0xb0) * 8 + 200);
    if ((lVar4 != 0) && (lVar4 = *(long *)(lVar4 + 0xd8), lVar4 != 0)) {
      *(undefined1 *)(lVar4 + 0x21) = 0;
    }
  }
  else {
    if (iVar3 == 1) {
      lVar4 = *(long *)(param_1 + (long)*(int *)(param_1 + 0xb0) * 8 + 200);
      pcVar2 = "Erufuun_wait";
    }
    else {
      if (iVar3 != 0) goto LAB_7102eaa54c;
      lVar4 = *(long *)(param_1 + (long)*(int *)(param_1 + 0xb0) * 8 + 200);
      pcVar2 = "Milokaross_wait";
    }
LAB_7102eaa548:
    FUN_7102610070(lVar4,(byte *)pcVar2);
  }
LAB_7102eaa54c:
  lVar4 = (long)*(int *)(param_1 + 0xb0);
  lVar5 = *(long *)(param_1 + lVar4 * 8 + 200);
  if (lVar5 != 0) {
    if (*(long *)(lVar5 + 0xd8) != 0) {
      *(undefined1 *)(*(long *)(lVar5 + 0xd8) + 0x22) = 0;
      lVar4 = (long)*(int *)(param_1 + 0xb0);
      lVar5 = *(long *)(param_1 + lVar4 * 8 + 200);
      if (lVar5 == 0) goto LAB_7102eaa5a8;
    }
    FUN_71025ee450(0,*(long **)(lVar5 + 0xd8),1);
    lVar4 = (long)*(int *)(param_1 + 0xb0);
    lVar5 = *(long *)(param_1 + lVar4 * 8 + 200);
    if ((lVar5 != 0) && (lVar5 = *(long *)(lVar5 + 0xd8), lVar5 != 0)) {
      *(undefined1 *)(lVar5 + 0x21) = 0;
      lVar4 = (long)*(int *)(param_1 + 0xb0);
    }
  }
LAB_7102eaa5a8:
  *(int *)(param_1 + 0xa8) =
       (int)*(float *)(*(long *)(*(long *)(param_1 + 0x10) + 0x90) + lVar4 * 4);
LAB_7102eaa5bc:
  bVar1 = FUN_710260ffb0(*(long *)(param_1 + lVar4 * 8 + 200));
  if (bVar1) {
    iVar3 = *(int *)(param_1 + 0xa8) + -1;
    *(int *)(param_1 + 0xa8) = iVar3;
    lVar4 = *(long *)(param_1 + (long)*(int *)(param_1 + 0xb0) * 8 + 200);
    if (lVar4 != 0) {
      FUN_71025ee450(0,*(long **)(lVar4 + 0xd8),1);
      iVar3 = *(int *)(param_1 + 0xa8);
    }
    if (iVar3 < 0) {
      if ((*(int *)(param_1 + 0xb4) == 2) && (*(char *)(param_1 + 0xb8) == '\0')) {
        *(undefined1 *)(param_1 + 0xb8) = 1;
        *(undefined4 *)(param_1 + 0x40) = 4;
      }
      else {
        *(undefined4 *)(param_1 + 0x40) = 3;
      }
      *(undefined1 *)(param_1 + 0x98) = 1;
    }
  }
  return;
}

