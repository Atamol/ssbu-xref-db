// addr:      7103729070
// offset:    0x3729070
// name:      FUN_7103729070
// mangled:   
// signature: undefined __cdecl FUN_7103729070(void)


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7103729070(void)

{
  int iVar1;
  int iVar2;
  long lVar3;
  undefined1 uVar4;
  long lVar5;
  
  _DAT_710593b2e0 = 0;
  DAT_710593b2f8 = 0;
  DAT_710593b300 = 0;
  DAT_710593b2e8 = 0;
  DAT_710593b2f0 = 0;
  DAT_710593b308 = 0x3f800000;
  DAT_710593b330 = 0x3f800000;
  DAT_710593b320 = 0;
  DAT_710593b328 = 0;
  DAT_710593b310 = 0;
  DAT_710593b318 = 0;
  iVar1 = nn::os::GetHostArgc();
  if (0 < iVar1) {
    lVar5 = 0;
    do {
      lVar3 = nn::os::GetHostArgv();
      iVar2 = strcmp("--noluaopt",*(char **)(lVar3 + lVar5 * 8));
      if (iVar2 == 0) {
        _DAT_710593b2e0 = _DAT_710593b2e0 & 0xff00;
        return;
      }
      lVar5 = lVar5 + 1;
    } while (lVar5 < iVar1);
  }
  _DAT_710593b2e0 = CONCAT11(DAT_710593b2e1,1);
  iVar1 = nn::os::GetHostArgc();
  if (0 < iVar1) {
    lVar5 = 0;
    do {
      lVar3 = nn::os::GetHostArgv();
      iVar2 = strcmp("--lua_verify",*(char **)(lVar3 + lVar5 * 8));
      if (iVar2 == 0) {
        uVar4 = 1;
        goto LAB_7103729144;
      }
      lVar5 = lVar5 + 1;
    } while (lVar5 < iVar1);
  }
  uVar4 = 0;
LAB_7103729144:
  _DAT_710593b2e0 = CONCAT11(uVar4,DAT_710593b2e0);
  return;
}

