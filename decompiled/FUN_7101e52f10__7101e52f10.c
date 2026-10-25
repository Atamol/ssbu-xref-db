// addr:      7101e52f10
// offset:    0x1e52f10
// name:      FUN_7101e52f10
// mangled:   
// signature: undefined __cdecl FUN_7101e52f10(long param_1, undefined8 param_2, long * * * * * * * * * param_3, byte * * * * param_4, long * * * * param_5, ulong param_6, ulong param_7, ulong param_8)


void FUN_7101e52f10(long param_1,undefined8 param_2,long *********param_3,byte ****param_4,
                   long ****param_5,ulong param_6,ulong param_7,ulong param_8)

{
  float *pfVar1;
  ulong *puVar2;
  int *piVar3;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  long ****pppplVar4;
  long lVar5;
  int iVar6;
  int iVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  int iVar14;
  
  piVar3 = DAT_71052c3360;
  if (*(int *)(param_1 + 0x174) != 0) {
    if ((*(char *)(*(long *)(DAT_710532f7c8 + 8) + 0x6a) != '\0') &&
       (*(char *)(*(long *)(DAT_710532f7c8 + 8) + 0x6b) == '\0')) {
      pppplVar4 = (long ****)0x1001;
      FUN_7103775dc0((long *)**(undefined8 **)(param_1 + 0x10),0,(long ****)0x1001,param_4,param_5,
                     param_6,param_7,param_8);
      *(undefined1 *)(param_1 + 0x18d) = 1;
      FUN_7103778300(0x3f800000,*(long *)(param_1 + 0x20),0x7104421055);
      FUN_7101e55e00(param_1);
      FUN_7101e54b40(param_1,extraout_x1,pppplVar4,param_4,param_5,param_6,param_7,param_8);
      FUN_7101e54cc0(param_1,extraout_x1_00,pppplVar4,param_4,param_5,param_6,param_7,param_8);
      FUN_7101e55c60(param_1,extraout_x1_01,pppplVar4,param_4,param_5,param_6,param_7,param_8);
      if (0x12 < *(uint *)(param_1 + 0x16c)) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      *(undefined4 *)(param_1 + (long)(int)*(uint *)(param_1 + 0x16c) * 4 + 0x120) = 2;
    }
    return;
  }
  lVar5 = *(long *)(*(long *)(DAT_71052c3360 + 6) + 8);
  lVar8 = *(long *)(*(long *)(DAT_71052c3360 + 6) + 0x10);
  lVar13 = lVar5;
  lVar11 = lVar8;
  lVar10 = lVar5;
  if (lVar5 != lVar8) {
    lVar11 = lVar5;
    if (*(float *)(lVar5 + 0x38) <= 0.9999 ||
        (*(ulong *)(lVar5 + 0x30) & 0xffffffffff) != 0x16cabf7ea4) {
      do {
        lVar9 = lVar11 + 0x90;
        lVar10 = lVar8;
        if (lVar8 == lVar9) break;
        pfVar1 = (float *)(lVar11 + 200);
        puVar2 = (ulong *)(lVar11 + 0xc0);
        lVar10 = lVar9;
        lVar11 = lVar9;
      } while (*pfVar1 <= 0.9999 || (*puVar2 & 0xffffffffff) != 0x16cabf7ea4);
      if (lVar10 != lVar8) {
        lVar13 = lVar10;
      }
    }
    uVar12 = *(ulong *)(lVar5 + 0x88);
    lVar9 = lVar5;
    while ((lVar11 = lVar9, lVar10 = lVar9, (uVar12 & 0xffffffffff) != 0x13222260b0 &&
           (lVar11 = lVar8, lVar10 = lVar8, lVar8 != lVar9 + 0x90))) {
      uVar12 = *(ulong *)(lVar9 + 0x118);
      lVar9 = lVar9 + 0x90;
    }
  }
  lVar9 = lVar5;
  if (lVar11 != lVar8) {
    lVar9 = lVar10;
  }
  iVar6 = (int)(lVar13 - lVar5 >> 4) * 0x38e38e39;
  iVar14 = (int)(lVar9 - lVar5 >> 4) * 0x38e38e39;
  *DAT_7105339448 = 1;
  if ((-1 < iVar6) &&
     (lVar13 = *(long *)(piVar3 + 6),
     iVar6 < (int)((ulong)(*(long *)(lVar13 + 0x10) - *(long *)(lVar13 + 8)) >> 4) * 0x38e38e39)) {
    *piVar3 = iVar6;
    if (*(char *)(*(long *)(lVar13 + 8) + (long)iVar6 * 0x90 + 1) == '\0') {
      piVar3[1] = iVar6;
      iVar7 = iVar6;
LAB_7101e53164:
      FUN_710133fba0(lVar13,*(long *)(lVar13 + 8) + (long)iVar7 * 0x90,param_3,param_4,param_5,
                     param_6,param_7,param_8);
      iVar6 = piVar3[2];
      if (iVar6 < 0) goto LAB_7101e5318c;
    }
    else {
      piVar3[2] = iVar6;
      iVar7 = piVar3[1];
      if (-1 < iVar7) goto LAB_7101e53164;
    }
    FUN_710133fba0(*(long *)(piVar3 + 6),*(long *)(lVar13 + 8) + (long)iVar6 * 0x90,param_3,param_4,
                   param_5,param_6,param_7,param_8);
  }
LAB_7101e5318c:
  piVar3 = DAT_71052c3360;
  if ((iVar14 < 0) ||
     (lVar13 = *(long *)(DAT_71052c3360 + 6),
     (int)((ulong)(*(long *)(lVar13 + 0x10) - *(long *)(lVar13 + 8)) >> 4) * 0x38e38e39 <= iVar14))
  goto LAB_7101e53218;
  *DAT_71052c3360 = iVar14;
  if (*(char *)(*(long *)(lVar13 + 8) + (long)iVar14 * 0x90 + 1) == '\0') {
    piVar3[1] = iVar14;
    iVar6 = iVar14;
LAB_7101e531f0:
    FUN_710133fba0(lVar13,*(long *)(lVar13 + 8) + (long)iVar6 * 0x90,param_3,param_4,param_5,param_6
                   ,param_7,param_8);
    iVar14 = piVar3[2];
    if (iVar14 < 0) goto LAB_7101e53218;
  }
  else {
    piVar3[2] = iVar14;
    iVar6 = piVar3[1];
    if (-1 < iVar6) goto LAB_7101e531f0;
  }
  FUN_710133fba0(*(long *)(piVar3 + 6),*(long *)(lVar13 + 8) + (long)iVar14 * 0x90,param_3,param_4,
                 param_5,param_6,param_7,param_8);
LAB_7101e53218:
  FUN_71032e4d70(*(long *)(DAT_710532f7c8 + 8),0,0,0xffffffff,0,0,param_7,param_8);
  FUN_7103778630(0,*(long *)(param_1 + 0x20),0x7104412f1d);
  FUN_7103771a80((long *)(param_1 + 0x28),0,1);
  return;
}

