// addr:      7103922b00
// offset:    0x3922b00
// name:      FUN_7103922b00
// mangled:   
// signature: undefined8 __cdecl FUN_7103922b00(long param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


/* WARNING: Removing unreachable block (ram,0x007103922c30) */

undefined8
FUN_7103922b00(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
              undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  uint uVar1;
  byte bVar2;
  long lVar3;
  undefined8 uVar4;
  float *pfVar5;
  long lVar6;
  long lVar7;
  float *pfVar8;
  byte *pbVar9;
  long *plVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  float *pfVar14;
  ulong uVar15;
  
  pfVar8 = *(float **)(param_1 + 0x10);
  pfVar5 = (float *)(**(long **)(param_1 + 0x20) + 0x10);
  pfVar14 = pfVar5;
  if (pfVar8 <= pfVar5) {
    pfVar14 = (float *)&DAT_7104862960;
  }
  if (((uint)pfVar14[2] & 0xf) == 4) {
LAB_7103922b88:
    lVar6 = *(long *)pfVar14;
    if (*(char *)(lVar6 + 8) == '\x04') {
      uVar15 = (ulong)*(byte *)(lVar6 + 0xb);
      lVar6 = lVar6 + 0x18;
    }
    else {
      uVar15 = *(ulong *)(lVar6 + 0x10);
      lVar6 = lVar6 + 0x18;
    }
  }
  else {
    if (((uint)pfVar14[2] & 0xf) == 3) {
      if (0 < *(long *)(*(long *)(param_1 + 0x18) + 0x18)) {
        FUN_71038fec40(param_1);
        pfVar8 = *(float **)(param_1 + 0x10);
        pfVar5 = (float *)(**(long **)(param_1 + 0x20) + 0x10);
      }
      pfVar14 = pfVar5;
      if (pfVar8 <= pfVar5) {
        pfVar14 = (float *)&DAT_7104862960;
      }
      FUN_71039080b0(param_1,pfVar14);
      goto LAB_7103922b88;
    }
    FUN_71038f74d0(param_1,1,"string",param_4,param_5,param_6,param_7,param_8);
    uVar15 = 0;
    lVar6 = 0;
  }
  uVar4 = 0;
  lVar3 = FUN_71038f45b0(param_1,2,(undefined4 *)0x0);
  lVar7 = lVar3 + -1;
  if (lVar3 < 1) {
    lVar7 = 0;
    if ((long)uVar15 < 1) {
      return 0;
    }
  }
  else {
    if (lVar3 <= (long)uVar15) {
      do {
        lVar7 = lVar3;
        lVar3 = lVar7 + 1;
      } while ((*(byte *)(lVar6 + lVar7) & 0xc0) == 0x80);
    }
    if ((long)uVar15 <= lVar7) {
      return 0;
    }
  }
  pbVar9 = (byte *)(lVar6 + lVar7);
  bVar2 = *pbVar9;
  uVar12 = (uint)bVar2;
  if ((char)bVar2 < '\0') {
    if ((bVar2 >> 6 & 1) == 0) {
      uVar13 = 0;
      uVar15 = 0;
    }
    else {
      uVar15 = 0;
      uVar13 = 0;
      uVar11 = uVar12;
      do {
        if ((pbVar9[uVar15 + 1] & 0xc0) != 0x80) goto LAB_7103922d14;
        uVar13 = pbVar9[uVar15 + 1] & 0x3f | uVar13 << 6;
        uVar15 = uVar15 + 1;
        uVar12 = uVar11 << 1;
        uVar1 = uVar11 >> 5;
        uVar11 = uVar12;
      } while ((uVar1 & 1) != 0);
      if (3 < (uint)uVar15) goto LAB_7103922d14;
    }
    uVar12 = (uVar12 & 0x7f) << (ulong)((int)uVar15 * 5 & 0x1f) | uVar13;
    if ((0x10 < uVar12 >> 0x10) || (uVar12 <= (uint)(&DAT_71044659b0)[uVar15 & 0xffffffff]))
    goto LAB_7103922d14;
    pbVar9 = pbVar9 + (uVar15 & 0xffffffff);
  }
  if ((pbVar9[1] & 0xc0) != 0x80) {
    plVar10 = *(long **)(param_1 + 0x10);
    *plVar10 = lVar7 + 1;
    *(undefined4 *)(plVar10 + 1) = 0x13;
    lVar6 = *(long *)(param_1 + 0x10);
    *(long *)(param_1 + 0x10) = lVar6 + 0x10;
    *(long *)(lVar6 + 0x10) = (long)(int)uVar12;
    *(undefined4 *)(lVar6 + 0x18) = 0x13;
    *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + 0x10;
    return 2;
  }
LAB_7103922d14:
                    /* WARNING: Subroutine does not return */
  FUN_71038f6c50(param_1,"invalid UTF-8 code",uVar4,param_4,param_5,param_6,param_7,param_8);
}

