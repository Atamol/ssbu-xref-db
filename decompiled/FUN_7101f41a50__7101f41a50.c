// addr:      7101f41a50
// offset:    0x1f41a50
// name:      FUN_7101f41a50
// mangled:   
// signature: undefined __cdecl FUN_7101f41a50(float param_1, float param_2, float param_3, int * param_4, long * param_5, long * * * * * * * * * param_6, ulong param_7, long * * * * param_8, undefined8 param_9, undefined8 param_10, long * param_11)


void FUN_7101f41a50(float param_1,float param_2,float param_3,int *param_4,long *param_5,
                   long *********param_6,ulong param_7,long ****param_8,undefined8 param_9,
                   undefined8 param_10,long *param_11)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  long *extraout_x1;
  char *pcVar5;
  long *extraout_x1_00;
  long *plVar6;
  long *********ppppppppplVar7;
  long ****pppplVar8;
  uint uVar9;
  int iVar10;
  long *plVar11;
  int iVar12;
  ulong uVar13;
  long lVar14;
  ulong uVar15;
  int iVar16;
  ulong uVar17;
  int *piVar18;
  int iVar19;
  int iVar20;
  long lVar21;
  ulong uVar22;
  long *plVar23;
  long lVar24;
  int *piVar25;
  int iVar26;
  int *piVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  
  iVar10 = (int)param_10;
  uVar9 = (uint)param_9;
  lVar14 = *param_5;
  lVar24 = param_5[1];
  if (lVar24 - lVar14 == 0) {
    uVar15 = 0;
  }
  else {
    uVar22 = (lVar24 - lVar14 >> 3) * -0x70a3d70a3d70a3d7;
    uVar15 = 0;
    iVar19 = 0;
    piVar27 = (int *)(lVar14 + 0x2c);
    do {
      iVar20 = iVar19;
      if (piVar27[-0xb] != 0) {
        iVar20 = piVar27[-1];
      }
      iVar19 = *piVar27 + iVar20;
      if ((iVar20 <= (int)param_1) && ((int)param_1 < iVar19)) break;
      uVar15 = uVar15 + 1;
      piVar27 = piVar27 + 0x32;
    } while (uVar15 <= uVar22 && uVar22 - uVar15 != 0);
  }
  lVar21 = *(long *)(param_4 + 2);
  if (*(long *)(param_4 + 4) == lVar21) {
    return;
  }
  iVar20 = *param_4;
  iVar19 = 3;
  if (iVar20 == iVar10) {
    iVar19 = 1;
  }
  fVar31 = param_2 * 60.0;
  iVar16 = 7;
  uVar15 = uVar15 & 0xffffffff;
  uVar22 = 0;
  iVar26 = 0;
  plVar6 = param_5;
  ppppppppplVar7 = param_6;
  pppplVar8 = param_8;
  plVar11 = param_11;
  if (uVar9 != 5) {
    iVar16 = 5;
  }
  do {
    uVar13 = (lVar24 - lVar14 >> 3) * -0x70a3d70a3d70a3d7;
    if (uVar13 < uVar22 || uVar13 - uVar22 == 0) {
      lVar14 = *(long *)(lVar21 + uVar22 * 0x18 + 8);
      if (*(char *)(lVar14 + 0x21c) != '\0') {
        *(undefined1 *)(lVar14 + 0x21c) = 0;
        FUN_7103778300(0x3f800000,*(long *)(lVar14 + 8),0x71043cd335);
        plVar6 = extraout_x1;
      }
    }
    else {
      piVar27 = (int *)(lVar14 + uVar22 * 200);
      if (*piVar27 == 0) {
        piVar25 = (int *)(lVar14 + uVar22 * 200 + 0x2c);
        fVar30 = ((float)*piVar25 * param_3) / fVar31;
        plVar23 = (long *)(lVar21 + uVar22 * 0x18 + 8);
        FUN_7101f3d820(fVar30,*plVar23);
      }
      else {
        lVar24 = lVar14 + uVar22 * 200;
        piVar25 = (int *)(lVar24 + 0x2c);
        fVar30 = ((float)*piVar25 * param_3) / fVar31;
        iVar26 = *(int *)(lVar24 + 0x28);
        plVar23 = (long *)(lVar21 + uVar22 * 0x18 + 8);
        FUN_7101f3da50(fVar30,((float)*(int *)(lVar24 + 0x48) * param_3) / fVar31,
                       (((float)*(int *)(lVar24 + 0x48) + (float)*(int *)(lVar24 + 0x4c)) * param_3)
                       / fVar31,*plVar23,plVar6,ppppppppplVar7,param_7,pppplVar8,param_9,param_10,
                       plVar11);
      }
      fVar29 = ((float)iVar26 * param_3) / fVar31;
      lVar24 = *plVar23;
      if (*(float *)(lVar24 + 0x214) != fVar29) {
        *(float *)(lVar24 + 0x214) = fVar29;
        lVar24 = **(long **)(lVar24 + 0x18);
        if (lVar24 != 0) {
          *(float *)(lVar24 + 0x30) = fVar29;
          *(undefined4 *)(lVar24 + 0x34) = 0;
          *(byte *)(lVar24 + 0x58) = *(byte *)(lVar24 + 0x58) | 0x10;
        }
      }
      if (uVar22 == uVar15) {
        fVar29 = ((param_1 - (float)iVar26) * param_3) / fVar31;
        lVar24 = *(long *)(lVar21 + uVar15 * 0x18 + 8);
        if (fVar29 <= fVar30) {
          fVar30 = fVar29;
        }
        fVar28 = 0.0;
        if (0.0 <= fVar29) {
          fVar28 = fVar30;
        }
        if (*(float *)(lVar24 + 0x218) != fVar28) {
          *(float *)(lVar24 + 0x218) = fVar28;
          lVar24 = **(long **)(lVar24 + 0x28);
          if (lVar24 != 0) {
            *(float *)(lVar24 + 0x30) = fVar28;
            *(undefined4 *)(lVar24 + 0x34) = 0;
            *(byte *)(lVar24 + 0x58) = *(byte *)(lVar24 + 0x58) | 0x10;
          }
        }
      }
      if (*(char *)(lVar14 + uVar22 * 200 + 0xbd) == '\0') {
        if ((uint)param_8 < 0x13) {
          uVar4 = 1 << (ulong)((uint)param_8 & 0x1f);
          iVar12 = iVar19;
          if ((uVar4 & 0x4000c) == 0) {
            if ((((uVar4 & 0x90) == 0) || (iVar20 != iVar10)) || (uVar22 != uVar15))
            goto LAB_7101f41da4;
            iVar12 = iVar16;
            if ((uVar9 < 0xb) && ((1 << (ulong)(uVar9 & 0x1f) & 0x610U) != 0)) {
              iVar12 = 6;
            }
          }
        }
        else {
LAB_7101f41da4:
          if (iVar20 == iVar10) {
            iVar12 = 1;
          }
          else {
            iVar12 = 3;
          }
          if (uVar22 == uVar15) {
            iVar12 = iVar12 + 1;
          }
        }
      }
      else {
        iVar12 = 8;
      }
      lVar24 = *plVar23;
      if (*(int *)(lVar24 + 0x204) != iVar12) {
        *(int *)(lVar24 + 0x204) = iVar12;
        if (iVar12 - 1U < 10) {
                    /* WARNING: Switch is manually overridden */
          switch(iVar12 - 1U) {
          case 0:
            lVar24 = *(long *)(lVar24 + 8);
            pcVar5 = "edit_seek_out";
            break;
          case 1:
            lVar24 = *(long *)(lVar24 + 8);
            pcVar5 = "edit_seek_over";
            break;
          case 2:
            lVar24 = *(long *)(lVar24 + 8);
            pcVar5 = "noedit_seek_out";
            break;
          case 3:
            lVar24 = *(long *)(lVar24 + 8);
            pcVar5 = "noedit_seek_over";
            break;
          case 4:
            lVar24 = *(long *)(lVar24 + 8);
            pcVar5 = "edit_tlmenu_item";
            break;
          case 5:
            lVar24 = *(long *)(lVar24 + 8);
            pcVar5 = "edit_tlmenu_seek";
            break;
          case 6:
            lVar24 = *(long *)(lVar24 + 8);
            pcVar5 = "edit_tlmenu_transition";
            break;
          case 7:
            lVar24 = *(long *)(lVar24 + 8);
            pcVar5 = "edit_pickup_marked";
            break;
          case 8:
            lVar24 = *(long *)(lVar24 + 8);
            pcVar5 = "edit_pickup";
            break;
          case 9:
            lVar24 = *(long *)(lVar24 + 8);
            pcVar5 = "edit_stretch";
          }
          FUN_7103778300(0x3f800000,lVar24,(long)pcVar5);
        }
      }
      lVar24 = *plVar23;
      if (*(char *)(lVar24 + 0x21c) != '\x01') {
        *(undefined1 *)(lVar24 + 0x21c) = 1;
        FUN_7103778300(0x3f800000,*(long *)(lVar24 + 8),0x710429257e);
      }
      if (*(int *)(lVar14 + uVar22 * 200 + 4) == 1) {
        lVar14 = *param_5;
        if ((lVar14 != param_5[1]) &&
           (uVar13 = (param_5[1] - lVar14 >> 3) * -0x70a3d70a3d70a3d7,
           uVar22 <= uVar13 && uVar13 - uVar22 != 0)) {
          if (*(int *)(lVar14 + uVar22 * 200) == 0) {
            if (uVar22 == 0) {
              iVar12 = 0;
            }
            else {
              uVar17 = 0;
              iVar12 = 0;
              piVar18 = (int *)(lVar14 + 0x2c);
              do {
                if (uVar13 < uVar17 || uVar13 - uVar17 == 0) break;
                uVar17 = uVar17 + 1;
                iVar12 = *piVar18 + iVar12;
                piVar18 = piVar18 + 0x32;
              } while (uVar17 < uVar22);
            }
          }
          else {
            iVar12 = *(int *)(lVar14 + uVar22 * 200 + 0x28);
          }
          lVar24 = *param_11;
          if (lVar24 != param_11[1]) {
            iVar1 = *(int *)(lVar14 + uVar22 * 200 + 0x2c) + iVar12;
            do {
              iVar2 = *(int *)(lVar24 + 0x48) + *(int *)(lVar24 + 0x28);
              iVar3 = iVar2 + *(int *)(lVar24 + 0x4c);
              if ((iVar2 < iVar1 && iVar3 != iVar12) && (iVar1 <= iVar2 || iVar12 <= iVar3)) {
                pppplVar8 = (long ****)0x1;
                goto LAB_7101f41f78;
              }
              lVar24 = lVar24 + 200;
            } while (param_11[1] != lVar24);
          }
        }
      }
      pppplVar8 = (long ****)0x0;
LAB_7101f41f78:
      param_7 = (ulong)param_8 & 0xffffffff;
      ppppppppplVar7 = param_6;
      FUN_7101f3d240(*plVar23,piVar27,param_6,param_7,(ulong)pppplVar8,param_9,param_10,plVar11);
      plVar6 = extraout_x1_00;
      if (*piVar27 == 0) {
        iVar26 = *piVar25 + iVar26;
      }
    }
    lVar21 = *(long *)(param_4 + 2);
    uVar13 = (*(long *)(param_4 + 4) - lVar21 >> 3) * -0x5555555555555555;
    uVar22 = uVar22 + 1;
    if (uVar13 < uVar22 || uVar13 - uVar22 == 0) {
      return;
    }
    lVar14 = *param_5;
    lVar24 = param_5[1];
  } while( true );
}

