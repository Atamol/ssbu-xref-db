// addr:      71025abf40
// offset:    0x25abf40
// name:      FUN_71025abf40
// mangled:   
// signature: undefined __cdecl FUN_71025abf40(long param_1)


void FUN_71025abf40(long param_1)

{
  int iVar1;
  undefined4 uVar2;
  long lVar3;
  
  if (*(int *)(param_1 + 0x1fc) == 0) {
    lVar3 = *(long *)(*(long *)(param_1 + 0x228) + 0x80);
    if (*(int *)(lVar3 + 0x5a4) == 6 || *(int *)(lVar3 + 0x5a4) == 0) {
      FUN_7103778300(0x3f800000,*(long *)(lVar3 + 0x4f0),0x7104421055);
      FUN_7103778300(0x3f800000,*(long *)(lVar3 + 0x4f0),0x71043f0dfb);
      FUN_7103778300(0x3f800000,*(long *)(lVar3 + 0x4f0),0x71043f0fa9);
      *(undefined4 *)(lVar3 + 0x5b8) = 0;
      *(undefined8 *)(lVar3 + 0x5b0) = 0;
      *(undefined8 *)(lVar3 + 0x5a8) = 0;
      FUN_7103778630(0,*(long *)(lVar3 + 0x4f0),0x7104443ccd);
      *(undefined4 *)(lVar3 + 0x5a4) = 1;
      lVar3 = *(long *)(*(long *)(param_1 + 0x228) + 0x80);
    }
    *(undefined4 *)(lVar3 + 0x5ac) = 0x3f666666;
    *(undefined4 *)(lVar3 + 0x5b0) = *(undefined4 *)(lVar3 + 0x5a8);
    *(undefined8 *)(lVar3 + 0x5b4) = 0x3c;
    *(undefined1 *)(param_1 + 0x209) = 1;
    if (DAT_710532f7d8 != 0) {
      lVar3 = *(long *)(DAT_710532f7d8 + 8);
      std::mutex::lock();
      *(undefined1 *)(lVar3 + 0xf1) = 1;
      *(undefined1 *)(lVar3 + 0xf5) = 0;
      *(uint *)(lVar3 + 0xe8) = *(uint *)(lVar3 + 0xe8) | 4;
      *(undefined1 *)(*(long *)(*(long *)(lVar3 + 0xa0) + 0x80) + 0x1cc) =
           *(undefined1 *)(lVar3 + 0xf4);
      *(undefined4 *)(lVar3 + 0xec) = 0xffffffff;
      *(undefined8 *)(lVar3 + 0xf8) = 0x8ffff0000000000;
      *(undefined4 *)(lVar3 + 0x100) = 7;
      std::mutex::unlock();
    }
  }
  else {
    lVar3 = *(long *)(*(long *)(DAT_71052c4c58 + 8) + 0x90);
    if ((*(char *)(*(long *)(*(long *)(DAT_71052c4c58 + 8) + 0x80) + 0x244) == '\0') ||
       (*(int *)(lVar3 + 0x10) == 0)) {
      iVar1 = nn::err::ErrorResultVariant::GetState();
      if (((iVar1 == 0) && (*(int *)(lVar3 + 0x28) == 0)) || (*(char *)(lVar3 + 0x2d) != '\0')) {
        lVar3 = *(long *)(*(long *)(param_1 + 0x228) + 0x80);
        if (*(char *)(param_1 + 0x209) != '\0') {
          *(undefined4 *)(lVar3 + 0x5ac) = 0x3f800000;
          *(undefined4 *)(lVar3 + 0x5b0) = *(undefined4 *)(lVar3 + 0x5a8);
          *(undefined8 *)(lVar3 + 0x5b4) = 10;
          *(undefined1 *)(param_1 + 0x209) = 0;
          return;
        }
        if (*(int *)(lVar3 + 0x5a4) != 2) {
          return;
        }
        if (*(float *)(lVar3 + 0x5a8) < 1.0) {
          return;
        }
        if (0x12 < *(uint *)(param_1 + 500)) goto LAB_71025ac150;
        lVar3 = (long)(int)*(uint *)(param_1 + 500) << 2;
        uVar2 = 0x15;
      }
      else {
        if (0x12 < *(uint *)(param_1 + 500)) {
LAB_71025ac150:
                    /* WARNING: Subroutine does not return */
          abort();
        }
        lVar3 = (long)(int)*(uint *)(param_1 + 500) * 4;
        uVar2 = 0x16;
      }
      *(undefined4 *)(param_1 + lVar3 + 0x1a8) = uVar2;
    }
  }
  return;
}

