// addr:      7100004a10
// offset:    0x4a10
// name:      FUN_7100004a10
// mangled:   
// signature: undefined4 __cdecl FUN_7100004a10(long * param_1, long * param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


undefined4
FUN_7100004a10(long *param_1,long *param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5,
              undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  char *pcVar1;
  int iVar2;
  uint uVar3;
  bool bVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined4 uVar7;
  uint uVar8;
  long lVar9;
  long lVar10;
  undefined1 auVar11 [12];
  
  lVar10 = *param_1;
  lVar9 = param_1[0x14b];
  *param_2 = 0;
  if (lVar9 == 0) {
    uVar7 = 6;
  }
  else {
    nnosLockMutex(*(undefined8 *)(lVar9 + 0x18));
    iVar2 = *(int *)(lVar9 + 0x20);
    nnosUnlockMutex(*(undefined8 *)(lVar9 + 0x18));
    if (iVar2 == 0) {
      auVar11 = FUN_7100017740();
      uVar6 = *(undefined8 *)(lVar10 + 0xa70);
      uVar5 = FUN_7100017750(auVar11._0_8_,auVar11._8_4_,*(long *)(lVar10 + 0xa68),(int)uVar6);
      uVar5 = uVar5 & ((long)uVar5 >> 0x3f ^ 0xffffffffffffffffU);
      if (*(int *)(lVar9 + 8) == 0) {
        uVar8 = 1;
        *(undefined4 *)(lVar9 + 8) = 1;
      }
      else {
        uVar3 = *(int *)(lVar9 + 8) << (*(long *)(lVar9 + 0x10) <= (long)uVar5);
        uVar8 = 0xfa;
        if (uVar3 < 0xfb) {
          uVar8 = uVar3;
        }
        if (0xfa < uVar3 || *(long *)(lVar9 + 0x10) <= (long)uVar5) {
          *(uint *)(lVar9 + 8) = uVar8;
        }
      }
      *(ulong *)(lVar9 + 0x10) = uVar5 + uVar8;
      FUN_71000086c0(*param_1,(ulong)uVar8,1,uVar6,param_5,param_6,param_7,param_8);
      uVar7 = 0;
    }
    else {
      lVar9 = param_1[0x14b];
      FUN_7100005940(param_1,*(int *)(lVar9 + 0x34),*(long *)(lVar9 + 0x38));
      *(undefined8 *)(lVar9 + 0x38) = 0;
      if (param_1[0x149] == 0) {
        bVar4 = *(char *)((long)param_1 + 0x816) != '\0';
        pcVar1 = "host";
        if (bVar4) {
          pcVar1 = "proxy";
        }
        uVar7 = 5;
        if (!bVar4) {
          uVar7 = 6;
        }
        FUN_7100016040(*param_1,(byte *)"Could not resolve %s: %s",pcVar1,param_1[0x147],param_5,
                       param_6,param_7,param_8);
        FUN_7100004840(param_1 + 0x147);
      }
      else {
        FUN_7100004840(param_1 + 0x147);
        uVar7 = 0;
        *param_2 = param_1[0x149];
      }
    }
  }
  return uVar7;
}

