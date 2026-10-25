// addr:      7103911ed0
// offset:    0x3911ed0
// name:      FUN_7103911ed0
// mangled:   
// signature: undefined __cdecl FUN_7103911ed0(uint * param_1, undefined8 * param_2, uint param_3)


void FUN_7103911ed0(uint *param_1,undefined8 *param_2,uint param_3)

{
  ulong uVar1;
  int iVar2;
  uint uVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  byte *pbVar7;
  ulong uVar8;
  long *plVar9;
  float *pfVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  undefined8 *puVar14;
  long local_68;
  
  plVar9 = *(long **)(param_1 + 0x12);
  uVar3 = *param_1;
  lVar12 = plVar9[1];
  uVar1 = plVar9[2];
  uVar8 = lVar12 + 1;
  if (uVar1 < uVar8) {
    if (0x3ffffffffffffffe < uVar1) goto LAB_7103912634;
    lVar13 = *(long *)(param_1 + 0xe);
    puVar14 = *(undefined8 **)(lVar13 + 0x18);
    lVar12 = *plVar9;
    lVar11 = uVar1 * 2;
    lVar4 = (*(code *)*puVar14)(puVar14[1],lVar12,uVar1,lVar11);
    if ((lVar11 != 0) && (lVar4 == 0)) {
      if (puVar14[0x1a] == 0) {
LAB_7103912648:
                    /* WARNING: Subroutine does not return */
        FUN_71038fb3c0(lVar13,4);
      }
      FUN_71039004f0(lVar13,1);
      lVar4 = (*(code *)*puVar14)(puVar14[1],lVar12,uVar1,lVar11);
      if (lVar4 == 0) goto LAB_7103912648;
    }
    lVar13 = 0;
    if (lVar12 != 0) {
      lVar13 = -uVar1;
    }
    puVar14[3] = lVar13 + lVar11 + puVar14[3];
    lVar12 = plVar9[1];
    uVar8 = lVar12 + 1;
    *plVar9 = lVar4;
    plVar9[2] = lVar11;
  }
  else {
    lVar4 = *plVar9;
  }
  plVar9[1] = uVar8;
  *(char *)(lVar4 + lVar12) = (char)uVar3;
  lVar12 = **(long **)(param_1 + 0x10);
  **(long **)(param_1 + 0x10) = lVar12 + -1;
  plVar9 = *(long **)(param_1 + 0x10);
  if (lVar12 == 0) {
    pbVar7 = (byte *)(*(code *)plVar9[2])(plVar9[4],plVar9[3],&local_68);
    uVar3 = 0xffffffff;
    if ((pbVar7 != (byte *)0x0) && (local_68 != 0)) {
      *plVar9 = local_68 + -1;
      plVar9[1] = (long)(pbVar7 + 1);
      uVar3 = (uint)*pbVar7;
    }
  }
  else {
    pbVar7 = (byte *)plVar9[1];
    plVar9[1] = (long)(pbVar7 + 1);
    uVar3 = (uint)*pbVar7;
  }
  *param_1 = uVar3;
  if (uVar3 == 0xd || uVar3 == 10) {
    FUN_7103911ad0(param_1);
  }
  if (param_2 == (undefined8 *)0x0) {
    do {
      while (uVar3 = *param_1, (int)uVar3 < 0xd) {
        if (uVar3 == 10) {
LAB_71039122ac:
          plVar9 = *(long **)(param_1 + 0x12);
          lVar12 = plVar9[1];
          uVar1 = plVar9[2];
          uVar8 = lVar12 + 1;
          if (uVar1 < uVar8) {
            if (0x3ffffffffffffffe < uVar1) goto LAB_7103912634;
            lVar13 = *(long *)(param_1 + 0xe);
            puVar14 = *(undefined8 **)(lVar13 + 0x18);
            lVar12 = *plVar9;
            lVar11 = uVar1 * 2;
            lVar4 = (*(code *)*puVar14)(puVar14[1],lVar12,uVar1,lVar11);
            if ((lVar11 != 0) && (lVar4 == 0)) {
              if (puVar14[0x1a] == 0) goto LAB_7103912648;
              FUN_71039004f0(lVar13,1);
              lVar4 = (*(code *)*puVar14)(puVar14[1],lVar12,uVar1,lVar11);
              if (lVar4 == 0) goto LAB_7103912648;
            }
            lVar13 = 0;
            if (lVar12 != 0) {
              lVar13 = -uVar1;
            }
            puVar14[3] = lVar13 + lVar11 + puVar14[3];
            lVar12 = plVar9[1];
            uVar8 = lVar12 + 1;
            *plVar9 = lVar4;
            plVar9[2] = lVar11;
          }
          else {
            lVar4 = *plVar9;
          }
          plVar9[1] = uVar8;
          *(undefined1 *)(lVar4 + lVar12) = 10;
          FUN_7103911ad0(param_1);
          *(undefined8 *)(*(long *)(param_1 + 0x12) + 8) = 0;
        }
        else {
          if (uVar3 == 0xffffffff) goto LAB_71039125f4;
LAB_7103912370:
          lVar12 = **(long **)(param_1 + 0x10);
          **(long **)(param_1 + 0x10) = lVar12 + -1;
          plVar9 = *(long **)(param_1 + 0x10);
          if (lVar12 == 0) {
            pbVar7 = (byte *)(*(code *)plVar9[2])(plVar9[4],plVar9[3],&local_68);
            if (pbVar7 == (byte *)0x0) {
              *param_1 = 0xffffffff;
            }
            else {
              uVar3 = 0xffffffff;
              if (local_68 != 0) {
                *plVar9 = local_68 + -1;
                plVar9[1] = (long)(pbVar7 + 1);
                uVar3 = (uint)*pbVar7;
              }
              *param_1 = uVar3;
            }
          }
          else {
            pbVar7 = (byte *)plVar9[1];
            plVar9[1] = (long)(pbVar7 + 1);
            *param_1 = (uint)*pbVar7;
          }
        }
      }
      if (uVar3 != 0x5d) {
        if (uVar3 == 0xd) goto LAB_71039122ac;
        goto LAB_7103912370;
      }
      uVar3 = FUN_7103911c00(param_1);
    } while (uVar3 != param_3);
  }
  else {
    do {
      while (uVar3 = *param_1, (int)uVar3 < 0xd) {
        if (uVar3 == 10) {
LAB_7103912088:
          plVar9 = *(long **)(param_1 + 0x12);
          lVar12 = plVar9[1];
          uVar1 = plVar9[2];
          uVar8 = lVar12 + 1;
          if (uVar1 < uVar8) {
            if (0x3ffffffffffffffe < uVar1) goto LAB_7103912634;
            lVar13 = *(long *)(param_1 + 0xe);
            puVar14 = *(undefined8 **)(lVar13 + 0x18);
            lVar12 = *plVar9;
            lVar11 = uVar1 * 2;
            lVar4 = (*(code *)*puVar14)(puVar14[1],lVar12,uVar1,lVar11);
            if ((lVar11 != 0) && (lVar4 == 0)) {
              if (puVar14[0x1a] == 0) goto LAB_7103912648;
              FUN_71039004f0(lVar13,1);
              lVar4 = (*(code *)*puVar14)(puVar14[1],lVar12,uVar1,lVar11);
              if (lVar4 == 0) goto LAB_7103912648;
            }
            lVar13 = 0;
            if (lVar12 != 0) {
              lVar13 = -uVar1;
            }
            puVar14[3] = lVar13 + lVar11 + puVar14[3];
            lVar12 = plVar9[1];
            uVar8 = lVar12 + 1;
            *plVar9 = lVar4;
            plVar9[2] = lVar11;
          }
          else {
            lVar4 = *plVar9;
          }
          plVar9[1] = uVar8;
          *(undefined1 *)(lVar4 + lVar12) = 10;
          FUN_7103911ad0(param_1);
        }
        else {
          if (uVar3 == 0xffffffff) {
LAB_71039125f4:
            uVar6 = FUN_7103908660(*(undefined8 *)(param_1 + 0xe),
                                   "unfinished long %s (starting at line %d)");
                    /* WARNING: Subroutine does not return */
            FUN_710390eb90((long)param_1,uVar6,0x121);
          }
LAB_7103912138:
          plVar9 = *(long **)(param_1 + 0x12);
          lVar12 = plVar9[1];
          uVar1 = plVar9[2];
          uVar8 = lVar12 + 1;
          if (uVar1 < uVar8) {
            if (0x3ffffffffffffffe < uVar1) goto LAB_7103912634;
            lVar13 = *(long *)(param_1 + 0xe);
            puVar14 = *(undefined8 **)(lVar13 + 0x18);
            lVar12 = *plVar9;
            lVar11 = uVar1 * 2;
            lVar4 = (*(code *)*puVar14)(puVar14[1],lVar12,uVar1,lVar11);
            if ((lVar11 != 0) && (lVar4 == 0)) {
              if (puVar14[0x1a] == 0) goto LAB_7103912648;
              FUN_71039004f0(lVar13,1);
              lVar4 = (*(code *)*puVar14)(puVar14[1],lVar12,uVar1,lVar11);
              if (lVar4 == 0) goto LAB_7103912648;
            }
            lVar13 = 0;
            if (lVar12 != 0) {
              lVar13 = -uVar1;
            }
            puVar14[3] = lVar13 + lVar11 + puVar14[3];
            lVar12 = plVar9[1];
            *plVar9 = lVar4;
            plVar9[2] = lVar11;
            uVar8 = lVar12 + 1;
          }
          else {
            lVar4 = *plVar9;
          }
          plVar9[1] = uVar8;
          *(char *)(lVar4 + lVar12) = (char)uVar3;
          lVar12 = **(long **)(param_1 + 0x10);
          **(long **)(param_1 + 0x10) = lVar12 + -1;
          plVar9 = *(long **)(param_1 + 0x10);
          if (lVar12 == 0) {
            pbVar7 = (byte *)(*(code *)plVar9[2])(plVar9[4],plVar9[3],&local_68);
            if (pbVar7 == (byte *)0x0) {
              *param_1 = 0xffffffff;
            }
            else {
              uVar3 = 0xffffffff;
              if (local_68 != 0) {
                *plVar9 = local_68 + -1;
                plVar9[1] = (long)(pbVar7 + 1);
                uVar3 = (uint)*pbVar7;
              }
              *param_1 = uVar3;
            }
          }
          else {
            pbVar7 = (byte *)plVar9[1];
            plVar9[1] = (long)(pbVar7 + 1);
            *param_1 = (uint)*pbVar7;
          }
        }
      }
      if (uVar3 == 0xd) goto LAB_7103912088;
      if (uVar3 != 0x5d) goto LAB_7103912138;
      uVar3 = FUN_7103911c00(param_1);
    } while (uVar3 != param_3);
  }
  plVar9 = *(long **)(param_1 + 0x12);
  lVar12 = plVar9[1];
  uVar1 = plVar9[2];
  uVar3 = *param_1;
  uVar8 = lVar12 + 1;
  if (uVar1 < uVar8) {
    if (0x3ffffffffffffffe < uVar1) {
LAB_7103912634:
                    /* WARNING: Subroutine does not return */
      FUN_710390eb90((long)param_1,"lexical element too long",0);
    }
    lVar13 = *(long *)(param_1 + 0xe);
    puVar14 = *(undefined8 **)(lVar13 + 0x18);
    lVar12 = *plVar9;
    lVar11 = uVar1 * 2;
    lVar4 = (*(code *)*puVar14)(puVar14[1],lVar12,uVar1,lVar11);
    if ((lVar11 != 0) && (lVar4 == 0)) {
      if (puVar14[0x1a] == 0) {
LAB_7103912654:
                    /* WARNING: Subroutine does not return */
        FUN_71038fb3c0(lVar13,4);
      }
      FUN_71039004f0(lVar13,1);
      lVar4 = (*(code *)*puVar14)(puVar14[1],lVar12,uVar1,lVar11);
      if (lVar4 == 0) goto LAB_7103912654;
    }
    lVar13 = 0;
    if (lVar12 != 0) {
      lVar13 = -uVar1;
    }
    puVar14[3] = lVar13 + lVar11 + puVar14[3];
    lVar12 = plVar9[1];
    uVar8 = lVar12 + 1;
    *plVar9 = lVar4;
    plVar9[2] = lVar11;
  }
  else {
    lVar4 = *plVar9;
  }
  plVar9[1] = uVar8;
  *(char *)(lVar4 + lVar12) = (char)uVar3;
  lVar12 = **(long **)(param_1 + 0x10);
  **(long **)(param_1 + 0x10) = lVar12 + -1;
  plVar9 = *(long **)(param_1 + 0x10);
  if (lVar12 == 0) {
    pbVar7 = (byte *)(*(code *)plVar9[2])(plVar9[4],plVar9[3],&local_68);
    uVar3 = 0xffffffff;
    if ((pbVar7 != (byte *)0x0) && (local_68 != 0)) {
      *plVar9 = local_68 + -1;
      plVar9[1] = (long)(pbVar7 + 1);
      uVar3 = (uint)*pbVar7;
    }
    *param_1 = uVar3;
  }
  else {
    pbVar7 = (byte *)plVar9[1];
    plVar9[1] = (long)(pbVar7 + 1);
    *param_1 = (uint)*pbVar7;
  }
  if (param_2 != (undefined8 *)0x0) {
    lVar4 = *(long *)(param_1 + 0xe);
    puVar5 = FUN_7103917660(lVar4,(void *)(**(long **)(param_1 + 0x12) + (long)(int)(param_3 + 2)),
                            (*(long **)(param_1 + 0x12))[1] - (long)(int)((param_3 + 2) * 2));
    puVar14 = *(undefined8 **)(lVar4 + 0x10);
    *(undefined8 **)(lVar4 + 0x10) = puVar14 + 2;
    *puVar14 = puVar5;
    *(uint *)(puVar14 + 1) = *(byte *)(puVar5 + 1) | 0x40;
    lVar12 = *(long *)(param_1 + 0x14);
    pfVar10 = (float *)(*(long *)(lVar4 + 0x10) + -0x10);
    puVar14 = FUN_710391dde0(lVar12,pfVar10);
    if (puVar14 == &DAT_7104862960) {
      puVar14 = FUN_710391d940(lVar4,lVar12,pfVar10);
      iVar2 = *(int *)(puVar14 + 1);
    }
    else {
      iVar2 = *(int *)(puVar14 + 1);
    }
    if (iVar2 == 0) {
      *(undefined4 *)puVar14 = 1;
      *(undefined4 *)(puVar14 + 1) = 1;
      if (0 < *(long *)(*(long *)(lVar4 + 0x18) + 0x18)) {
        FUN_71038fec40(lVar4);
      }
    }
    else {
      puVar5 = (undefined8 *)puVar14[2];
    }
    *(long *)(lVar4 + 0x10) = *(long *)(lVar4 + 0x10) + -0x10;
    *param_2 = puVar5;
    return;
  }
  return;
}

