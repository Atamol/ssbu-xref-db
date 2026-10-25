// addr:      71025aa140
// offset:    0x25aa140
// name:      FUN_71025aa140
// mangled:   
// signature: undefined __cdecl FUN_71025aa140(long param_1)


void FUN_71025aa140(long param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  long lVar4;
  
  if (*(int *)(param_1 + 0x1fc) == 0) {
    lVar4 = *(long *)(*(long *)(param_1 + 0x228) + 0x80);
    if (*(int *)(lVar4 + 0x5a4) == 6 || *(int *)(lVar4 + 0x5a4) == 0) {
      FUN_7103778300(0x3f800000,*(long *)(lVar4 + 0x4f0),0x7104421055);
      FUN_7103778300(0x3f800000,*(long *)(lVar4 + 0x4f0),0x71043f0dfb);
      FUN_7103778300(0x3f800000,*(long *)(lVar4 + 0x4f0),0x71043f0fa9);
      *(undefined4 *)(lVar4 + 0x5b8) = 0;
      *(undefined8 *)(lVar4 + 0x5b0) = 0;
      *(undefined8 *)(lVar4 + 0x5a8) = 0;
      FUN_7103778630(0,*(long *)(lVar4 + 0x4f0),0x7104443ccd);
      *(undefined4 *)(lVar4 + 0x5a4) = 1;
      lVar4 = *(long *)(*(long *)(param_1 + 0x228) + 0x80);
    }
    *(undefined4 *)(lVar4 + 0x5ac) = 0x3ecccccd;
    *(undefined4 *)(lVar4 + 0x5b0) = *(undefined4 *)(lVar4 + 0x5a8);
    *(undefined8 *)(lVar4 + 0x5b4) = 0x3c;
    *(undefined1 *)(param_1 + 0x209) = 1;
    if (DAT_710532f7d8 != 0) {
      lVar4 = *(long *)(DAT_710532f7d8 + 8);
      std::mutex::lock();
      *(undefined1 *)(lVar4 + 0xf1) = 1;
      *(undefined1 *)(lVar4 + 0xf5) = 0;
      *(uint *)(lVar4 + 0xe8) = *(uint *)(lVar4 + 0xe8) | 4;
      *(undefined1 *)(*(long *)(*(long *)(lVar4 + 0xa0) + 0x80) + 0x1cc) =
           *(undefined1 *)(lVar4 + 0xf4);
      *(undefined4 *)(lVar4 + 0xec) = 0xffffffff;
      *(undefined8 *)(lVar4 + 0xf8) = 0x8ffff0000000000;
      *(undefined4 *)(lVar4 + 0x100) = 7;
      std::mutex::unlock();
    }
  }
  else {
    lVar4 = *(long *)(*(long *)(DAT_71052c4c58 + 8) + 0x90);
    if ((*(char *)(*(long *)(*(long *)(DAT_71052c4c58 + 8) + 0x80) + 0x244) == '\0') ||
       (*(int *)(lVar4 + 0x10) == 0)) {
      iVar2 = nn::err::ErrorResultVariant::GetState();
      if (((iVar2 == 0) && (*(int *)(lVar4 + 0x28) == 0)) || (*(char *)(lVar4 + 0x2d) != '\0')) {
        lVar4 = *(long *)(*(long *)(param_1 + 0x228) + 0x80);
        *(undefined4 *)(lVar4 + 0x5ac) = 0x3ecccccd;
        *(undefined4 *)(lVar4 + 0x5b0) = *(undefined4 *)(lVar4 + 0x5a8);
        *(undefined8 *)(lVar4 + 0x5b4) = 10;
        uVar1 = *(uint *)(param_1 + 500);
        if (0x12 < uVar1) goto LAB_71025aa324;
        uVar3 = 0xe;
      }
      else {
        uVar1 = *(uint *)(param_1 + 500);
        if (0x12 < uVar1) {
LAB_71025aa324:
                    /* WARNING: Subroutine does not return */
          abort();
        }
        uVar3 = 0x16;
      }
      *(undefined4 *)(param_1 + (long)(int)uVar1 * 4 + 0x1a8) = uVar3;
    }
  }
  return;
}

