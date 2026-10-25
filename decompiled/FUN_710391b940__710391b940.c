// addr:      710391b940
// offset:    0x391b940
// name:      FUN_710391b940
// mangled:   
// signature: ulong __cdecl FUN_710391b940(long param_1, long param_2, int param_3, ulong param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


ulong FUN_710391b940(long param_1,long param_2,int param_3,ulong param_4,undefined8 param_5,
                    undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  bool bVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  ulong uVar5;
  long lVar6;
  int iVar7;
  ulong uVar8;
  char *pcVar9;
  
  uVar3 = (uint)param_4;
  if ((int)uVar3 < 1) {
    uVar8 = 0;
  }
  else {
    uVar4 = 0xfffffff7;
    if (-9 < (int)~uVar3) {
      uVar4 = ~uVar3;
    }
    if (param_3 == 0) {
      iVar7 = uVar3 + uVar4;
      uVar8 = 0;
      lVar6 = (long)(int)(-2 - uVar4) + 1;
      do {
        iVar7 = iVar7 + 1;
        uVar8 = (ulong)*(byte *)(param_2 + iVar7) | uVar8 << 8;
        lVar6 = lVar6 + -1;
      } while (0 < lVar6);
    }
    else {
      uVar8 = 0;
      lVar6 = (long)(int)(-2 - uVar4);
      do {
        uVar8 = (ulong)*(byte *)(param_2 + lVar6) | uVar8 << 8;
        bVar1 = 0 < lVar6;
        lVar6 = lVar6 + -1;
      } while (bVar1);
    }
  }
  if ((int)uVar3 < 8) {
    if ((int)param_5 != 0) {
      uVar5 = 1L << ((ulong)(uVar3 * 8 - 1) & 0x3f);
      uVar8 = (uVar8 ^ uVar5) - uVar5;
    }
  }
  else if (uVar3 != 8) {
    cVar2 = '\0';
    if (0x7fffffffffffffff < uVar8 && (int)param_5 != 0) {
      cVar2 = -1;
    }
    if (param_3 == 0) {
      lVar6 = -9;
      do {
        if (cVar2 != *(char *)(param_2 + (int)(uVar3 + (int)lVar6))) {
                    /* WARNING: Subroutine does not return */
          FUN_71038f6c50(param_1,"%d-byte integer does not fit into Lua Integer",
                         param_4 & 0xffffffff,param_4,param_5,param_6,param_7,param_8);
        }
        lVar6 = lVar6 + -1;
      } while ((param_4 & 0xffffffff) + lVar6 != -1);
    }
    else {
      lVar6 = (param_4 & 0xffffffff) - 8;
      pcVar9 = (char *)(param_2 + 8);
      do {
        if (cVar2 != *pcVar9) {
                    /* WARNING: Subroutine does not return */
          FUN_71038f6c50(param_1,"%d-byte integer does not fit into Lua Integer",
                         param_4 & 0xffffffff,param_4,param_5,param_6,param_7,param_8);
        }
        lVar6 = lVar6 + -1;
        pcVar9 = pcVar9 + 1;
      } while (lVar6 != 0);
    }
  }
  return uVar8;
}

