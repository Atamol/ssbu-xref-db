// addr:      71039145e0
// offset:    0x39145e0
// name:      FUN_71039145e0
// mangled:   
// signature: ulong __cdecl FUN_71039145e0(long * param_1, int * param_2, int param_3)


ulong FUN_71039145e0(long *param_1,int *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  byte bVar4;
  ulong uVar5;
  long lVar6;
  byte bVar7;
  uint uVar8;
  uint uVar9;
  ulong uVar10;
  uint uVar11;
  
  if (*param_2 == 7) {
LAB_710391470c:
    if ((((uint)param_2[2] >> 8 & 1) == 0) &&
       ((int)(uint)*(byte *)((long)param_1 + 0x3a) <= param_2[2])) {
      *(char *)((long)param_1 + 0x3c) = *(char *)((long)param_1 + 0x3c) + -1;
    }
  }
  else {
    if (*param_2 == 0xc) {
      lVar6 = *param_1;
      uVar11 = *(uint *)(*(long *)(lVar6 + 0x38) + (long)param_2[2] * 4);
      if ((uVar11 & 0x3f) == 0x1b) {
        *(int *)(param_1 + 4) = (int)param_1[4] + -1;
        FUN_7103913040(param_1,uVar11 >> 0x11 & 0x7fc0 | (uint)(param_3 == 0) << 0xe | 0x22);
        uVar11 = *(uint *)(param_1 + 5);
        *(undefined4 *)(param_1 + 5) = 0xffffffff;
        uVar5 = FUN_7103913040(param_1,0x7fff801e);
        if (uVar11 == 0xffffffff) {
          return uVar5;
        }
        if ((int)uVar5 == -1) goto LAB_71039147d8;
        lVar6 = *(long *)(*param_1 + 0x38);
        uVar10 = uVar5 & 0xffffffff;
        do {
          uVar9 = (uint)uVar10;
          uVar8 = *(uint *)(lVar6 + (long)(int)uVar9 * 4);
          iVar1 = (uVar8 >> 0xe) - 0x1ffff;
          uVar3 = 0xffffffff;
          if (iVar1 != -1) {
            uVar3 = uVar9 + iVar1 + 1;
          }
          uVar10 = (ulong)uVar3;
        } while (uVar3 != 0xffffffff);
        goto LAB_71039147ac;
      }
    }
    else {
      lVar6 = *param_1;
    }
    bVar4 = *(byte *)((long)param_1 + 0x3c);
    bVar7 = bVar4 + 1;
    if (*(byte *)(lVar6 + 0xc) <= bVar4) {
      if (0xfd < bVar4) {
                    /* WARNING: Subroutine does not return */
        FUN_710390eb80(param_1[2],"function or expression needs too many registers");
      }
      *(byte *)(lVar6 + 0xc) = bVar7;
      bVar7 = *(char *)((long)param_1 + 0x3c) + 1;
    }
    *(byte *)((long)param_1 + 0x3c) = bVar7;
    FUN_7103913ee0(param_1,param_2,bVar7 - 1);
    if (*param_2 == 7) goto LAB_710391470c;
  }
  FUN_7103913040(param_1,param_3 << 0xe | param_2[2] << 0x17 | 0x3fe3);
  uVar11 = *(uint *)(param_1 + 5);
  *(undefined4 *)(param_1 + 5) = 0xffffffff;
  uVar5 = FUN_7103913040(param_1,0x7fff801e);
  if (uVar11 == 0xffffffff) {
    return uVar5;
  }
  if ((int)uVar5 == -1) {
LAB_71039147d8:
    return (ulong)uVar11;
  }
  lVar6 = *(long *)(*param_1 + 0x38);
  uVar10 = uVar5 & 0xffffffff;
  do {
    uVar9 = (uint)uVar10;
    uVar8 = *(uint *)(lVar6 + (long)(int)uVar9 * 4);
    iVar1 = (uVar8 >> 0xe) - 0x1ffff;
    uVar3 = 0xffffffff;
    if (iVar1 != -1) {
      uVar3 = uVar9 + iVar1 + 1;
    }
    uVar10 = (ulong)uVar3;
  } while (uVar3 != 0xffffffff);
LAB_71039147ac:
  iVar1 = uVar11 + ~uVar9;
  iVar2 = -iVar1;
  if (-1 < iVar1) {
    iVar2 = iVar1;
  }
  if (iVar2 < 0x20000) {
    *(uint *)(lVar6 + (long)(int)uVar9 * 4) = iVar1 * 0x4000 + 0x7fffc000U | uVar8 & 0x3fff;
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_710390eb80(param_1[2],"control structure too long");
}

