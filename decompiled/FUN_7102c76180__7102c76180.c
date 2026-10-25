// addr:      7102c76180
// offset:    0x2c76180
// name:      FUN_7102c76180
// mangled:   
// signature: undefined __cdecl FUN_7102c76180(long param_1, uint param_2)


void FUN_7102c76180(long param_1,uint param_2)

{
  long lVar1;
  undefined1 uVar2;
  byte *pbVar3;
  
  if ((((param_1 != 0) && (lVar1 = *(long *)(param_1 + 8), lVar1 != 0)) && (param_2 < 2)) &&
     (*(long *)(lVar1 + 0xd8) != 0)) {
    pbVar3 = (&PTR_s_queen_set_wait_71051283c8)[(int)param_2];
    FUN_7102610070(lVar1,pbVar3);
    if (*(long *)(param_1 + 8) == 0) {
      lVar1 = 0;
    }
    else {
      FUN_71025ee080(*(long *)(param_1 + 8) + 0x60,pbVar3,0);
      lVar1 = *(long *)(param_1 + 8);
    }
    FUN_710260fdd0(0,lVar1,1);
    lVar1 = *(long *)(param_1 + 8);
    if (param_2 == 0) {
      if (lVar1 == 0) {
        *(undefined1 *)(param_1 + 0x19) = 1;
        return;
      }
      if ((*(char *)(lVar1 + 0xe0) != '\0') && (*(long *)(lVar1 + 200) != 0)) {
        *(undefined2 *)(*(long *)(lVar1 + 200) + 0x32) = 0x101;
      }
      uVar2 = 1;
      if (*(long *)(lVar1 + 0xd8) != 0) {
        *(undefined1 *)(*(long *)(lVar1 + 0xd8) + 0x22) = 1;
      }
    }
    else {
      if (lVar1 != 0) {
        if ((*(char *)(lVar1 + 0xe0) != '\0') && (*(long *)(lVar1 + 200) != 0)) {
          *(undefined2 *)(*(long *)(lVar1 + 200) + 0x32) = 0;
        }
        if (*(long *)(lVar1 + 0xd8) != 0) {
          *(undefined1 *)(*(long *)(lVar1 + 0xd8) + 0x22) = 0;
        }
      }
      uVar2 = 0;
      *(undefined1 *)(param_1 + 0x1b) = 0;
    }
    lVar1 = *(long *)(param_1 + 8);
    *(undefined1 *)(param_1 + 0x19) = uVar2;
    if (lVar1 != 0) {
      if ((*(char *)(lVar1 + 0xe0) != '\0') && (*(long *)(lVar1 + 200) != 0)) {
        *(undefined2 *)(*(long *)(lVar1 + 200) + 0x30) = 0;
      }
      if (*(long *)(lVar1 + 0xd8) != 0) {
        *(undefined1 *)(*(long *)(lVar1 + 0xd8) + 0x21) = 0;
      }
      if (*(char *)(lVar1 + 0xe0) != '\0') {
        *(undefined1 *)(*(long *)(lVar1 + 0xb0) + 0x10) = 1;
      }
    }
  }
  return;
}

