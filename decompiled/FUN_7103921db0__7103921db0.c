// addr:      7103921db0
// offset:    0x3921db0
// name:      FUN_7103921db0
// mangled:   
// signature: int __cdecl FUN_7103921db0(long param_1, undefined8 param_2, char * param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


/* WARNING: Removing unreachable block (ram,0x007103922114) */

int FUN_7103921db0(long param_1,undefined8 param_2,char *param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  uint uVar2;
  float fVar3;
  byte bVar4;
  int iVar5;
  long lVar6;
  float *pfVar7;
  float *pfVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  float *pfVar12;
  byte *pbVar13;
  long lVar14;
  uint uVar15;
  uint uVar16;
  long *plVar17;
  uint uVar18;
  float *pfVar19;
  long lVar20;
  long lVar21;
  ulong uVar22;
  float local_60 [4];
  int local_44;
  
  pfVar7 = local_60;
  pfVar12 = *(float **)(param_1 + 0x10);
  pfVar8 = (float *)(**(long **)(param_1 + 0x20) + 0x10);
  pfVar19 = pfVar8;
  if (pfVar12 <= pfVar8) {
    pfVar19 = (float *)&DAT_7104862960;
  }
  if (((uint)pfVar19[2] & 0xf) == 4) {
LAB_7103921e44:
    lVar9 = *(long *)pfVar19;
    if (*(char *)(lVar9 + 8) == '\x04') {
      uVar22 = (ulong)*(byte *)(lVar9 + 0xb);
      lVar9 = lVar9 + 0x18;
    }
    else {
      uVar22 = *(ulong *)(lVar9 + 0x10);
      lVar9 = lVar9 + 0x18;
    }
  }
  else {
    if (((uint)pfVar19[2] & 0xf) == 3) {
      if (0 < *(long *)(*(long *)(param_1 + 0x18) + 0x18)) {
        FUN_71038fec40(param_1);
        pfVar12 = *(float **)(param_1 + 0x10);
        pfVar8 = (float *)(**(long **)(param_1 + 0x20) + 0x10);
      }
      pfVar19 = pfVar8;
      if (pfVar12 <= pfVar8) {
        pfVar19 = (float *)&DAT_7104862960;
      }
      FUN_71039080b0(param_1,pfVar19);
      goto LAB_7103921e44;
    }
    param_3 = "string";
    FUN_71038f74d0(param_1,1,"string",param_4,param_5,param_6,param_7,param_8);
    uVar22 = 0;
    lVar9 = 0;
  }
  puVar1 = (undefined8 *)(**(long **)(param_1 + 0x20) + 0x20);
  if ((puVar1 < *(undefined8 **)(param_1 + 0x10) && puVar1 != &DAT_7104862960) &&
     ((*(byte *)(**(long **)(param_1 + 0x20) + 0x28) & 0xf) != 0)) {
    param_3 = (char *)&local_44;
    lVar6 = FUN_71038f45b0(param_1,2,(undefined4 *)param_3);
    if (local_44 == 0) {
      pfVar8 = (float *)(**(long **)(param_1 + 0x20) + 0x20);
      if (*(float **)(param_1 + 0x10) <= pfVar8) {
        pfVar8 = (float *)&DAT_7104862960;
      }
      fVar3 = pfVar8[2];
      if ((fVar3 == 4.2039e-45) || (fVar3 == 2.66247e-44)) {
LAB_7103921f98:
        param_3 = "number has no integer representation";
        FUN_71038f6d60(param_1,2,"number has no integer representation",param_4,param_5,param_6,
                       param_7,param_8);
      }
      else {
        if (((uint)fVar3 & 0xf) == 4) {
          pbVar13 = FUN_7103907f00((byte *)(*(long *)pfVar8 + 0x18),local_60);
          lVar21 = *(long *)pfVar8;
          if (*(char *)(lVar21 + 8) == '\x04') {
            uVar11 = (ulong)*(byte *)(lVar21 + 0xb);
          }
          else {
            uVar11 = *(ulong *)(lVar21 + 0x10);
          }
          if (pbVar13 == (byte *)(uVar11 + 1)) goto LAB_7103921f98;
        }
        param_3 = "number";
        FUN_71038f74d0(param_1,2,"number",param_4,param_5,param_6,param_7,param_8);
      }
    }
    lVar21 = lVar6;
    if ((lVar6 < 0) && (lVar21 = 0, (ulong)-lVar6 <= uVar22)) {
      lVar21 = lVar6 + uVar22 + 1;
    }
  }
  else {
    lVar21 = 1;
  }
  puVar1 = (undefined8 *)(**(long **)(param_1 + 0x20) + 0x30);
  lVar6 = lVar21;
  if (((*(undefined8 **)(param_1 + 0x10) <= puVar1) || (puVar1 == &DAT_7104862960)) ||
     ((*(byte *)(**(long **)(param_1 + 0x20) + 0x38) & 0xf) == 0)) goto joined_r0x007103921f30;
  param_3 = (char *)&local_44;
  lVar6 = FUN_71038f45b0(param_1,3,(undefined4 *)param_3);
  if (local_44 != 0) goto joined_r0x007103921f30;
  pfVar8 = (float *)(**(long **)(param_1 + 0x20) + 0x30);
  if (*(float **)(param_1 + 0x10) <= pfVar8) {
    pfVar8 = (float *)&DAT_7104862960;
  }
  fVar3 = pfVar8[2];
  if ((fVar3 == 4.2039e-45) || (fVar3 == 2.66247e-44)) {
LAB_7103921ff8:
    param_3 = "number has no integer representation";
    FUN_71038f6d60(param_1,3,"number has no integer representation",param_4,param_5,param_6,param_7,
                   param_8);
  }
  else {
    if (((uint)fVar3 & 0xf) == 4) {
      pbVar13 = FUN_7103907f00((byte *)(*(long *)pfVar8 + 0x18),local_60);
      lVar10 = *(long *)pfVar8;
      if (*(char *)(lVar10 + 8) == '\x04') {
        uVar11 = (ulong)*(byte *)(lVar10 + 0xb);
      }
      else {
        uVar11 = *(ulong *)(lVar10 + 0x10);
      }
      if (pbVar13 == (byte *)(uVar11 + 1)) goto LAB_7103921ff8;
    }
    param_3 = "number";
    FUN_71038f74d0(param_1,3,"number",param_4,param_5,param_6,param_7,param_8);
  }
joined_r0x007103921f30:
  lVar10 = lVar6;
  if ((lVar6 < 0) && (lVar10 = 0, (ulong)-lVar6 <= uVar22)) {
    lVar10 = lVar6 + uVar22 + 1;
  }
  if (lVar21 < 1) {
    param_3 = "out of range";
    FUN_71038f6d60(param_1,2,"out of range",param_4,param_5,param_6,param_7,param_8);
  }
  if ((long)uVar22 < lVar10) {
    param_3 = "out of range";
    FUN_71038f6d60(param_1,3,"out of range",param_4,param_5,param_6,param_7,param_8);
  }
  if (lVar10 < lVar21) {
    iVar5 = 0;
  }
  else {
    if (0x7ffffffe < lVar10 - lVar21) {
                    /* WARNING: Subroutine does not return */
      FUN_71038f6c50(param_1,"string slice too long",param_3,param_4,param_5,param_6,param_7,param_8
                    );
    }
    iVar5 = (int)(lVar10 - lVar21);
    local_60[0] = (float)(iVar5 + 0x15);
    lVar6 = *(long *)(param_1 + 0x10);
    lVar20 = *(long *)(param_1 + 0x20);
    lVar14 = (long)(int)local_60[0];
    if (*(long *)(param_1 + 0x30) - lVar6 >> 4 <= lVar14) {
      if ((0xf422b - iVar5 < (int)((ulong)(lVar6 - *(long *)(param_1 + 0x38)) >> 4) + 5) ||
         (iVar5 = FUN_71038fb4b0(param_1,FUN_71038f3f70,local_60), iVar5 != 0)) {
                    /* WARNING: Subroutine does not return */
        FUN_71038f6c50(param_1,"stack overflow (%s)","string slice too long",param_4,param_5,param_6
                       ,param_7,param_8);
      }
      lVar6 = *(long *)(param_1 + 0x10);
      lVar14 = (long)(int)local_60[0];
      param_3 = (char *)pfVar7;
    }
    uVar22 = lVar6 + lVar14 * 0x10;
    if (*(ulong *)(lVar20 + 8) < uVar22) {
      *(ulong *)(lVar20 + 8) = uVar22;
    }
    iVar5 = 0;
    pbVar13 = (byte *)((lVar9 + lVar21) - 1);
    do {
      bVar4 = *pbVar13;
      uVar16 = (uint)bVar4;
      if ((char)bVar4 < '\0') {
        if ((bVar4 >> 6 & 1) == 0) {
          uVar18 = 0;
          uVar22 = 0;
        }
        else {
          uVar22 = 0;
          uVar18 = 0;
          uVar15 = uVar16;
          do {
            if ((pbVar13[uVar22 + 1] & 0xc0) != 0x80) goto LAB_710392229c;
            uVar18 = pbVar13[uVar22 + 1] & 0x3f | uVar18 << 6;
            uVar22 = uVar22 + 1;
            uVar16 = uVar15 << 1;
            uVar2 = uVar15 >> 5;
            uVar15 = uVar16;
          } while ((uVar2 & 1) != 0);
          if (3 < (uint)uVar22) goto LAB_710392229c;
        }
        uVar16 = (uVar16 & 0x7f) << (ulong)((int)uVar22 * 5 & 0x1f) | uVar18;
        if ((0x10 < uVar16 >> 0x10) || (uVar16 <= (uint)(&DAT_71044659b0)[uVar22 & 0xffffffff])) {
LAB_710392229c:
                    /* WARNING: Subroutine does not return */
          FUN_71038f6c50(param_1,"invalid UTF-8 code",param_3,param_4,param_5,param_6,param_7,
                         param_8);
        }
        pbVar13 = pbVar13 + (uVar22 & 0xffffffff);
      }
      plVar17 = *(long **)(param_1 + 0x10);
      *plVar17 = (long)(int)uVar16;
      *(undefined4 *)(plVar17 + 1) = 0x13;
      pbVar13 = pbVar13 + 1;
      iVar5 = iVar5 + 1;
      *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + 0x10;
    } while (pbVar13 < (byte *)(lVar9 + lVar10));
  }
  return iVar5;
}

