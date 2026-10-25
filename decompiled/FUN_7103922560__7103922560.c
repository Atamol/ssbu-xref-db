// addr:      7103922560
// offset:    0x3922560
// name:      FUN_7103922560
// mangled:   
// signature: undefined8 __cdecl FUN_7103922560(long param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


/* WARNING: Removing unreachable block (ram,0x00710392276c) */

undefined8
FUN_7103922560(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
              undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  uint uVar2;
  float fVar3;
  byte bVar4;
  byte *pbVar5;
  undefined8 uVar6;
  uint uVar7;
  float *pfVar8;
  long lVar9;
  ulong *puVar10;
  ulong uVar11;
  float *pfVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  float *pfVar16;
  long lVar17;
  ulong uVar18;
  long lVar19;
  byte *pbVar20;
  float afStack_60 [4];
  int local_44;
  
  pfVar12 = *(float **)(param_1 + 0x10);
  pfVar8 = (float *)(**(long **)(param_1 + 0x20) + 0x10);
  pfVar16 = pfVar8;
  if (pfVar12 <= pfVar8) {
    pfVar16 = (float *)&DAT_7104862960;
  }
  if (((uint)pfVar16[2] & 0xf) == 4) {
LAB_71039225f4:
    lVar9 = *(long *)pfVar16;
    if (*(char *)(lVar9 + 8) == '\x04') {
      uVar18 = (ulong)*(byte *)(lVar9 + 0xb);
    }
    else {
      uVar18 = *(ulong *)(lVar9 + 0x10);
    }
    lVar9 = lVar9 + 0x18;
  }
  else {
    if (((uint)pfVar16[2] & 0xf) == 3) {
      if (0 < *(long *)(*(long *)(param_1 + 0x18) + 0x18)) {
        FUN_71038fec40(param_1);
        pfVar12 = *(float **)(param_1 + 0x10);
        pfVar8 = (float *)(**(long **)(param_1 + 0x20) + 0x10);
      }
      pfVar16 = pfVar8;
      if (pfVar12 <= pfVar8) {
        pfVar16 = (float *)&DAT_7104862960;
      }
      FUN_71039080b0(param_1,pfVar16);
      goto LAB_71039225f4;
    }
    FUN_71038f74d0(param_1,1,"string",param_4,param_5,param_6,param_7,param_8);
    uVar18 = 0;
    lVar9 = 0;
  }
  puVar1 = (undefined8 *)(**(long **)(param_1 + 0x20) + 0x20);
  if ((puVar1 < *(undefined8 **)(param_1 + 0x10) && puVar1 != &DAT_7104862960) &&
     ((*(byte *)(**(long **)(param_1 + 0x20) + 0x28) & 0xf) != 0)) {
    pbVar5 = (byte *)FUN_71038f45b0(param_1,2,&local_44);
    if (local_44 == 0) {
      pfVar8 = (float *)(**(long **)(param_1 + 0x20) + 0x20);
      if (*(float **)(param_1 + 0x10) <= pfVar8) {
        pfVar8 = (float *)&DAT_7104862960;
      }
      fVar3 = pfVar8[2];
      if ((fVar3 == 4.2039e-45) || (fVar3 == 2.66247e-44)) {
LAB_7103922950:
        FUN_71038f6d60(param_1,2,"number has no integer representation",param_4,param_5,param_6,
                       param_7,param_8);
      }
      else {
        if (((uint)fVar3 & 0xf) == 4) {
          pbVar20 = FUN_7103907f00((byte *)(*(long *)pfVar8 + 0x18),afStack_60);
          lVar17 = *(long *)pfVar8;
          if (*(char *)(lVar17 + 8) == '\x04') {
            uVar11 = (ulong)*(byte *)(lVar17 + 0xb);
          }
          else {
            uVar11 = *(ulong *)(lVar17 + 0x10);
          }
          if (pbVar20 == (byte *)(uVar11 + 1)) goto LAB_7103922950;
        }
        FUN_71038f74d0(param_1,2,"number",param_4,param_5,param_6,param_7,param_8);
      }
    }
    pbVar20 = pbVar5;
    if (((long)pbVar5 < 0) && (pbVar20 = (byte *)0x0, (ulong)-(long)pbVar5 <= uVar18)) {
      pbVar20 = pbVar5 + uVar18 + 1;
    }
  }
  else {
    pbVar20 = (byte *)0x1;
  }
  puVar1 = (undefined8 *)(**(long **)(param_1 + 0x20) + 0x30);
  lVar17 = -1;
  if ((puVar1 < *(undefined8 **)(param_1 + 0x10)) && (puVar1 != &DAT_7104862960)) {
    if ((*(byte *)(**(long **)(param_1 + 0x20) + 0x38) & 0xf) == 0) {
      lVar17 = -1;
    }
    else {
      lVar17 = FUN_71038f45b0(param_1,3,&local_44);
      if (local_44 == 0) {
        pfVar8 = (float *)(**(long **)(param_1 + 0x20) + 0x30);
        if (*(float **)(param_1 + 0x10) <= pfVar8) {
          pfVar8 = (float *)&DAT_7104862960;
        }
        fVar3 = pfVar8[2];
        if ((fVar3 == 4.2039e-45) || (fVar3 == 2.66247e-44)) {
LAB_71039229b0:
          FUN_71038f6d60(param_1,3,"number has no integer representation",param_4,param_5,param_6,
                         param_7,param_8);
        }
        else {
          if (((uint)fVar3 & 0xf) == 4) {
            pbVar5 = FUN_7103907f00((byte *)(*(long *)pfVar8 + 0x18),afStack_60);
            lVar19 = *(long *)pfVar8;
            if (*(char *)(lVar19 + 8) == '\x04') {
              uVar11 = (ulong)*(byte *)(lVar19 + 0xb);
            }
            else {
              uVar11 = *(ulong *)(lVar19 + 0x10);
            }
            if (pbVar5 == (byte *)(uVar11 + 1)) goto LAB_71039229b0;
          }
          FUN_71038f74d0(param_1,3,"number",param_4,param_5,param_6,param_7,param_8);
        }
      }
      lVar19 = lVar17;
      if (-1 < lVar17) goto LAB_71039226fc;
    }
  }
  lVar19 = 0;
  if ((ulong)-lVar17 <= uVar18) {
    lVar19 = lVar17 + uVar18 + 1;
  }
LAB_71039226fc:
  pbVar5 = pbVar20 + -1;
  if (((long)pbVar20 < 1) || (pbVar20 = pbVar5, (long)uVar18 < (long)pbVar5)) {
    FUN_71038f6d60(param_1,2,"initial position out of string",param_4,param_5,param_6,param_7,
                   param_8);
    pbVar5 = pbVar20;
  }
  if ((long)uVar18 < lVar19) {
    FUN_71038f6d60(param_1,3,"final position out of string",param_4,param_5,param_6,param_7,param_8)
    ;
  }
  if ((long)pbVar5 < lVar19) {
    uVar7 = 0;
    do {
      pbVar20 = pbVar5 + lVar9;
      bVar4 = *pbVar20;
      if ((char)bVar4 < '\0') {
        uVar14 = (uint)bVar4;
        if ((bVar4 >> 6 & 1) == 0) {
          uVar13 = 0;
          uVar18 = 0;
LAB_71039227ac:
          uVar13 = (uVar14 & 0x7f) << (ulong)((int)uVar18 * 5 & 0x1f) | uVar13;
          if ((uVar13 >> 0x10 < 0x11) && ((uint)(&DAT_71044659b0)[uVar18 & 0xffffffff] < uVar13)) {
            pbVar20 = pbVar20 + (uVar18 & 0xffffffff);
            goto LAB_71039227d8;
          }
        }
        else {
          uVar18 = 0;
          uVar13 = 0;
          uVar15 = uVar14;
          do {
            if ((pbVar5[uVar18 + lVar9 + 1] & 0xc0) != 0x80) goto LAB_710392282c;
            uVar13 = pbVar5[uVar18 + lVar9 + 1] & 0x3f | uVar13 << 6;
            uVar18 = uVar18 + 1;
            uVar14 = uVar15 << 1;
            uVar2 = uVar15 >> 5;
            uVar15 = uVar14;
          } while ((uVar2 & 1) != 0);
          if ((uint)uVar18 < 4) goto LAB_71039227ac;
        }
LAB_710392282c:
        *(undefined4 *)(*(long *)(param_1 + 0x10) + 8) = 0;
        lVar9 = *(long *)(param_1 + 0x10);
        *(long *)(param_1 + 0x10) = lVar9 + 0x10;
        *(byte **)(lVar9 + 0x10) = pbVar5 + 1;
        puVar10 = (ulong *)(lVar9 + 0x18);
        uVar6 = 2;
        goto LAB_7103922850;
      }
LAB_71039227d8:
      pbVar5 = pbVar20 + (1 - lVar9);
      uVar7 = uVar7 + 1;
    } while ((long)pbVar5 < lVar19);
    uVar18 = (ulong)uVar7;
  }
  else {
    uVar18 = 0;
  }
  uVar6 = 1;
  puVar10 = *(ulong **)(param_1 + 0x10) + 1;
  **(ulong **)(param_1 + 0x10) = uVar18;
LAB_7103922850:
  *(undefined4 *)puVar10 = 0x13;
  *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + 0x10;
  return uVar6;
}

