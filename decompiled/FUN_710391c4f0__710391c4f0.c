// addr:      710391c4f0
// offset:    0x391c4f0
// name:      FUN_710391c4f0
// mangled:   
// signature: byte * __cdecl FUN_710391c4f0(undefined8 * param_1, byte * param_2, byte * param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


byte * FUN_710391c4f0(undefined8 *param_1,byte *param_2,byte *param_3,undefined8 param_4,
                     undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  byte *pbVar7;
  byte *pbVar8;
  long lVar9;
  long lVar10;
  byte *pbVar11;
  long lVar12;
  long *plVar13;
  undefined8 uVar14;
  byte *pbVar15;
  byte *pbVar16;
  uint uVar17;
  byte *pbVar18;
  byte *pbVar19;
  
  iVar6 = *(int *)(param_1 + 5);
  *(int *)(param_1 + 5) = iVar6 + -1;
  pbVar15 = param_3;
  if (iVar6 == 0) {
LAB_710391ce0c:
                    /* WARNING: Subroutine does not return */
    FUN_71038f6c50(param_1[3],"pattern too complex",param_3,param_4,param_5,param_6,param_7,param_8)
    ;
  }
LAB_710391c53c:
  do {
    pbVar8 = pbVar15;
    pbVar11 = param_2;
    param_2 = pbVar11 + 1;
LAB_710391c550:
    pbVar18 = (byte *)param_1[2];
LAB_710391c554:
    pbVar7 = pbVar11;
    if (pbVar8 == pbVar18) goto LAB_710391ca5c;
    bVar2 = *pbVar8;
    if (bVar2 != 0x25) {
      if (bVar2 == 0x24) {
        pbVar15 = pbVar8 + 1;
        if (pbVar15 != pbVar18) goto LAB_710391c7f4;
        if (pbVar11 != (byte *)param_1[1]) {
          pbVar7 = (byte *)0x0;
        }
        goto LAB_710391ca5c;
      }
      if (bVar2 == 0x29) {
        lVar12 = (long)*(int *)((long)param_1 + 0x2c);
        lVar10 = lVar12 + 1;
        lVar9 = lVar12 << 0x20;
        plVar13 = param_1 + lVar12 * 2 + 5;
        do {
          lVar10 = lVar10 + -1;
          if (lVar10 < 1) {
                    /* WARNING: Subroutine does not return */
            FUN_71038f6c50(param_1[3],"invalid pattern capture",pbVar8 + 1,param_4,param_5,param_6,
                           param_7,param_8);
          }
          lVar12 = *plVar13;
          lVar9 = lVar9 + -0x100000000;
          plVar13 = plVar13 + -2;
        } while (lVar12 != -1);
        lVar9 = lVar9 >> 0x1c;
        *(long *)((long)param_1 + lVar9 + 0x38) =
             (long)pbVar11 - *(long *)((long)param_1 + lVar9 + 0x30);
        pbVar7 = FUN_710391c4f0(param_1,pbVar11,pbVar8 + 1,param_4,param_5,param_6,param_7,param_8);
        if (pbVar7 == (byte *)0x0) {
          *(undefined8 *)((long)param_1 + lVar9 + 0x38) = 0xffffffffffffffff;
        }
        goto LAB_710391ca5c;
      }
      if (bVar2 != 0x28) {
        pbVar15 = pbVar8 + 1;
        if (bVar2 == 0x5b) {
          pbVar7 = pbVar8 + 2;
          if (pbVar8[1] != 0x5e) {
            pbVar7 = pbVar15;
          }
          do {
            if (pbVar7 == pbVar18) {
LAB_710391cddc:
                    /* WARNING: Subroutine does not return */
              FUN_71038f6c50(param_1[3],"malformed pattern (missing \']\')",param_3,param_4,param_5,
                             param_6,param_7,param_8);
            }
            pbVar15 = pbVar7 + 2;
            lVar9 = 1;
            if (*pbVar7 == 0x25 && pbVar7 + 1 < pbVar18) {
              lVar9 = 2;
            }
            pbVar19 = pbVar7 + lVar9;
            if (*pbVar7 != 0x25 || pbVar7 + 1 >= pbVar18) {
              pbVar15 = pbVar7 + 1;
            }
            pbVar7 = pbVar15;
          } while (*pbVar19 != 0x5d);
          pbVar15 = pbVar15 + 1;
        }
        goto LAB_710391c7f4;
      }
      pbVar15 = pbVar8 + 1;
      iVar6 = *(int *)((long)param_1 + 0x2c);
      if (*pbVar15 == 0x29) {
        if (0x1f < iVar6) {
LAB_710391ce4c:
                    /* WARNING: Subroutine does not return */
          FUN_71038f6c50(param_1[3],"too many captures",pbVar15,param_4,param_5,param_6,param_7,
                         param_8);
        }
        pbVar15 = pbVar8 + 2;
        uVar14 = 0xfffffffffffffffe;
      }
      else {
        if (0x1f < iVar6) goto LAB_710391ce4c;
        uVar14 = 0xffffffffffffffff;
      }
      param_1[(long)iVar6 * 2 + 6] = pbVar11;
      param_1[(long)iVar6 * 2 + 7] = uVar14;
      *(int *)((long)param_1 + 0x2c) = iVar6 + 1;
      pbVar7 = FUN_710391c4f0(param_1,pbVar11,pbVar15,param_4,param_5,param_6,param_7,param_8);
      if (pbVar7 == (byte *)0x0) {
        *(int *)((long)param_1 + 0x2c) = *(int *)((long)param_1 + 0x2c) + -1;
      }
      goto LAB_710391ca5c;
    }
    bVar1 = pbVar8[1];
    if (bVar1 == 0x66) {
      if (pbVar8[2] != 0x5b) {
                    /* WARNING: Subroutine does not return */
        FUN_71038f6c50(param_1[3],"missing \'[\' after \'%%f\' in pattern",param_3,param_4,param_5,
                       param_6,param_7,param_8);
      }
      pbVar15 = pbVar8 + 3;
      pbVar7 = pbVar15;
      if (*pbVar15 == 0x5e) {
        pbVar7 = pbVar8 + 4;
      }
      do {
        if (pbVar7 == pbVar18) goto LAB_710391cddc;
        pbVar19 = pbVar7 + 2;
        lVar9 = 1;
        if (*pbVar7 == 0x25 && pbVar7 + 1 < pbVar18) {
          lVar9 = 2;
        }
        pbVar16 = pbVar7 + lVar9;
        if (*pbVar7 != 0x25 || pbVar7 + 1 >= pbVar18) {
          pbVar19 = pbVar7 + 1;
        }
        pbVar7 = pbVar19;
      } while (*pbVar16 != 0x5d);
      if (pbVar11 == (byte *)*param_1) {
        uVar17 = 0;
      }
      else {
        uVar17 = (uint)pbVar11[-1];
      }
      bVar4 = *pbVar15 != 0x5e;
      if (bVar4) {
        pbVar15 = pbVar8 + 2;
      }
      pbVar7 = pbVar15 + 1;
      pbVar16 = pbVar7;
      pbVar8 = pbVar15;
      while (pbVar16 < pbVar19) {
        bVar2 = pbVar8[1];
        uVar5 = (uint)pbVar8[2];
        if (bVar2 == 0x25) {
          uVar5 = FUN_710391cf20(uVar17,uVar5);
          pbVar8 = pbVar8 + 2;
          if (uVar5 != 0) goto LAB_710391c684;
        }
        else if ((uVar5 == 0x2d) && (pbVar8 = pbVar8 + 3, pbVar8 < pbVar19)) {
          if ((bVar2 < uVar17 || bVar2 == uVar17) && (uVar17 <= *pbVar8)) {
LAB_710391c684:
            if (bVar4) goto LAB_710391ca58;
            goto LAB_710391c698;
          }
        }
        else {
          pbVar8 = pbVar16;
          if (bVar2 == uVar17) goto LAB_710391c684;
        }
        pbVar16 = pbVar8 + 1;
      }
      if (!bVar4) goto LAB_710391ca58;
LAB_710391c698:
      pbVar8 = pbVar19 + 1;
      if (pbVar7 < pbVar19) {
        bVar2 = *pbVar11;
        do {
          bVar1 = pbVar15[1];
          uVar17 = (uint)pbVar15[2];
          if (bVar1 == 0x25) {
            uVar17 = FUN_710391cf20((uint)bVar2,uVar17);
            pbVar15 = pbVar15 + 2;
            if (uVar17 != 0) goto LAB_710391c720;
          }
          else if ((uVar17 == 0x2d) && (pbVar15 = pbVar15 + 3, pbVar15 < pbVar19)) {
            if ((bVar1 <= bVar2) && (bVar2 <= *pbVar15)) {
LAB_710391c720:
              if (!bVar4) goto LAB_710391ca58;
              goto LAB_710391c554;
            }
          }
          else {
            pbVar15 = pbVar7;
            if (bVar1 == bVar2) goto LAB_710391c720;
          }
          pbVar7 = pbVar15 + 1;
        } while (pbVar7 < pbVar19);
      }
      if (bVar4) goto LAB_710391ca58;
      goto LAB_710391c554;
    }
    uVar17 = bVar1 - 0x30;
    param_3 = (byte *)(ulong)uVar17;
    if (uVar17 < 10) {
      if (((bVar1 < 0x31) ||
          (lVar9 = (ulong)bVar1 - 0x31, *(int *)((long)param_1 + 0x2c) <= (int)lVar9)) ||
         (pbVar15 = (byte *)param_1[lVar9 * 2 + 7], pbVar15 == (byte *)0xffffffffffffffff)) {
                    /* WARNING: Subroutine does not return */
        FUN_71038f6c50(param_1[3],"invalid capture index %%%d",param_3,param_4,param_5,param_6,
                       param_7,param_8);
      }
      if ((byte *)(param_1[1] - (long)pbVar11) < pbVar15) goto LAB_710391ca58;
      param_3 = pbVar15;
      iVar6 = memcmp((void *)param_1[lVar9 * 2 + 6],pbVar11,(size_t)pbVar15);
      pbVar7 = (byte *)0x0;
      if ((pbVar11 + (long)pbVar15 == (byte *)0x0) || (iVar6 != 0)) goto LAB_710391ca5c;
      param_2 = pbVar11 + (long)pbVar15;
      pbVar15 = pbVar8 + 2;
      goto LAB_710391c53c;
    }
    if (bVar1 == 0x62) {
      if (pbVar18 + -1 <= pbVar8 + 2) {
                    /* WARNING: Subroutine does not return */
        FUN_71038f6c50(param_1[3],"malformed pattern (missing arguments to \'%%b\')",0x32,param_4,
                       param_5,param_6,param_7,param_8);
      }
      if ((*pbVar11 != pbVar8[2]) || ((byte *)param_1[1] <= param_2)) goto LAB_710391ca58;
      iVar6 = 1;
      goto LAB_710391c9ec;
    }
    if (pbVar8 + 1 == pbVar18) {
                    /* WARNING: Subroutine does not return */
      FUN_71038f6c50(param_1[3],"malformed pattern (ends with \'%%\')",param_3,param_4,param_5,
                     param_6,param_7,param_8);
    }
    pbVar15 = pbVar8 + 2;
LAB_710391c7f4:
    pbVar19 = pbVar8 + 1;
    pbVar18 = (byte *)param_1[1];
    if (pbVar18 <= pbVar11) {
LAB_710391c830:
      pbVar7 = (byte *)0x0;
      if ((0x3f < *pbVar15) || ((1L << ((ulong)*pbVar15 & 0x3f) & 0x8000240000000000U) == 0))
      goto LAB_710391ca5c;
      pbVar8 = pbVar15 + 1;
      goto LAB_710391c550;
    }
    bVar1 = *pbVar11;
    if (bVar2 == 0x5b) {
      bVar4 = pbVar8[1] != 0x5e;
      pbVar7 = pbVar19;
      if (bVar4) {
        pbVar7 = pbVar8;
      }
      do {
        while( true ) {
          while( true ) {
            pbVar16 = pbVar7 + 1;
            if (pbVar15 + -1 <= pbVar16) {
              bVar4 = !bVar4;
              goto LAB_710391c914;
            }
            bVar2 = pbVar7[1];
            uVar17 = (uint)pbVar7[2];
            if (bVar2 != 0x25) break;
            uVar17 = FUN_710391cf20((uint)bVar1,uVar17);
            pbVar7 = pbVar7 + 2;
            if (uVar17 != 0) goto LAB_710391c914;
          }
          if ((uVar17 != 0x2d) || (pbVar7 = pbVar7 + 3, pbVar15 + -1 <= pbVar7)) break;
          if ((bVar2 <= bVar1) && (bVar1 <= *pbVar7)) goto LAB_710391c914;
        }
        pbVar7 = pbVar16;
      } while (bVar2 != bVar1);
LAB_710391c914:
      if (!bVar4) goto LAB_710391c830;
    }
    else if (bVar2 != 0x2e) {
      if (bVar2 == 0x25) {
        uVar17 = FUN_710391cf20((uint)bVar1,(uint)*pbVar19);
        if (uVar17 == 0) goto LAB_710391c830;
      }
      else if (bVar2 != bVar1) goto LAB_710391c830;
    }
    lVar9 = param_1[4];
    param_1[4] = lVar9 + -1;
    if (lVar9 == 0) goto LAB_710391ce0c;
    bVar2 = *pbVar15;
    if (bVar2 == 0x3f) {
      pbVar8 = pbVar15 + 1;
      param_3 = pbVar8;
      pbVar7 = FUN_710391c4f0(param_1,param_2,pbVar8,param_4,param_5,param_6,param_7,param_8);
      if (pbVar7 != (byte *)0x0) goto LAB_710391ca5c;
      goto LAB_710391c550;
    }
    pbVar16 = pbVar11;
    if ((bVar2 == 0x2a) || (pbVar16 = param_2, bVar2 == 0x2b)) {
      if (pbVar18 <= pbVar16) {
        lVar9 = 0;
        goto LAB_710391cc90;
      }
      bVar2 = *pbVar8;
      lVar9 = 0;
      pbVar11 = pbVar16;
      goto LAB_710391cb88;
    }
  } while (bVar2 != 0x2d);
  do {
    pbVar7 = FUN_710391c4f0(param_1,pbVar11,pbVar15 + 1,param_4,param_5,param_6,param_7,param_8);
    if (pbVar7 != (byte *)0x0) break;
    if ((byte *)param_1[1] <= pbVar11) goto LAB_710391ca58;
    bVar2 = *pbVar8;
    bVar1 = *pbVar11;
    if (bVar2 == 0x5b) {
      bVar4 = pbVar8[1] != 0x5e;
      pbVar18 = pbVar19;
      if (bVar4) {
        pbVar18 = pbVar8;
      }
      uVar17 = (uint)bVar4;
      do {
        while( true ) {
          while( true ) {
            pbVar7 = pbVar18 + 1;
            if (pbVar15 + -1 <= pbVar7) {
              uVar17 = bVar4 ^ 1;
              goto LAB_710391cdcc;
            }
            bVar2 = pbVar18[1];
            uVar5 = (uint)pbVar18[2];
            if (bVar2 != 0x25) break;
            uVar5 = FUN_710391cf20((uint)bVar1,uVar5);
            pbVar18 = pbVar18 + 2;
            if (uVar5 != 0) goto LAB_710391cdcc;
          }
          if ((uVar5 != 0x2d) || (pbVar18 = pbVar18 + 3, pbVar15 + -1 <= pbVar18)) break;
          if ((bVar2 <= bVar1) && (bVar1 <= *pbVar18)) goto LAB_710391cdcc;
        }
        pbVar18 = pbVar7;
      } while (bVar2 != bVar1);
    }
    else if (bVar2 == 0x2e) {
      uVar17 = 1;
    }
    else if (bVar2 == 0x25) {
      uVar17 = FUN_710391cf20((uint)bVar1,(uint)*pbVar19);
    }
    else {
      uVar17 = (uint)(bVar2 == bVar1);
    }
LAB_710391cdcc:
    pbVar7 = (byte *)0x0;
    pbVar11 = pbVar11 + 1;
  } while (uVar17 != 0);
LAB_710391ca5c:
  *(int *)(param_1 + 5) = *(int *)(param_1 + 5) + 1;
  return pbVar7;
LAB_710391c9ec:
  if (*param_2 == pbVar8[3]) {
    iVar6 = iVar6 + -1;
    if (iVar6 == 0) goto LAB_710391ca20;
  }
  else if (*param_2 == *pbVar11) {
    iVar6 = iVar6 + 1;
  }
  param_2 = param_2 + 1;
  pbVar7 = (byte *)0x0;
  if ((byte *)param_1[1] <= param_2) goto LAB_710391ca5c;
  goto LAB_710391c9ec;
LAB_710391ca20:
  param_2 = param_2 + 1;
  pbVar15 = pbVar8 + 4;
  goto LAB_710391c53c;
LAB_710391cb88:
  do {
    bVar1 = *pbVar11;
    if (bVar2 == 0x5b) {
      bVar4 = pbVar8[1] != 0x5e;
      pbVar11 = pbVar19;
      if (bVar4) {
        pbVar11 = pbVar8;
      }
      do {
        while( true ) {
          while( true ) {
            pbVar7 = pbVar11 + 1;
            if (pbVar15 + -1 <= pbVar7) {
              bVar4 = !bVar4;
              goto LAB_710391cc6c;
            }
            bVar3 = pbVar11[1];
            uVar17 = (uint)pbVar11[2];
            if (bVar3 != 0x25) break;
            uVar17 = FUN_710391cf20((uint)bVar1,uVar17);
            pbVar11 = pbVar11 + 2;
            if (uVar17 != 0) goto LAB_710391cc6c;
          }
          if ((uVar17 != 0x2d) || (pbVar11 = pbVar11 + 3, pbVar15 + -1 <= pbVar11)) break;
          if ((bVar3 <= bVar1) && (bVar1 <= *pbVar11)) goto LAB_710391cc6c;
        }
        pbVar11 = pbVar7;
      } while (bVar3 != bVar1);
LAB_710391cc6c:
      if (!bVar4) break;
    }
    else if (bVar2 != 0x2e) {
      if (bVar2 == 0x25) {
        uVar17 = FUN_710391cf20((uint)bVar1,(uint)*pbVar19);
        if (uVar17 == 0) break;
      }
      else if (bVar2 != bVar1) break;
    }
    lVar9 = lVar9 + 1;
    pbVar11 = pbVar16 + lVar9;
  } while (pbVar11 < pbVar18);
LAB_710391cc90:
  do {
    if (lVar9 < 0) goto LAB_710391ca58;
    pbVar7 = FUN_710391c4f0(param_1,pbVar16 + lVar9,pbVar15 + 1,param_4,param_5,param_6,param_7,
                            param_8);
    lVar9 = lVar9 + -1;
  } while (pbVar7 == (byte *)0x0);
  goto LAB_710391ca5c;
LAB_710391ca58:
  pbVar7 = (byte *)0x0;
  goto LAB_710391ca5c;
}

