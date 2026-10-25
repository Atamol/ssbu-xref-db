// addr:      7100010e10
// offset:    0x10e10
// name:      FUN_7100010e10
// mangled:   
// signature: int __cdecl FUN_7100010e10(long * param_1, long * param_2)


int FUN_7100010e10(long *param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  char cVar5;
  bool bVar6;
  bool bVar7;
  long *plVar8;
  long *plVar9;
  size_t sVar10;
  void *pvVar11;
  long lVar12;
  int iVar13;
  int iVar14;
  long lVar15;
  long *plVar16;
  long lVar17;
  long *plVar18;
  long lVar19;
  long *plVar20;
  char *pcVar21;
  long lVar22;
  uint uVar23;
  int *piVar24;
  ulong uVar25;
  void *local_180;
  int local_70;
  
  local_70 = -0x30;
  plVar8 = (long *)FUN_71000272d0();
  if (plVar8 == (long *)0x0) {
    return 1;
  }
  lVar22 = 0;
  piVar24 = (int *)0x0;
  plVar18 = plVar8;
  plVar20 = (long *)register0x00000008;
  iVar14 = 0;
  bVar7 = false;
  do {
    do {
      plVar9 = plVar8;
      if (iVar14 != 0) goto LAB_71000116b0;
      plVar9 = plVar20;
      if (piVar24 == (int *)0x0 || !bVar7) {
        iVar14 = local_70;
        if ((local_70 < 0) && (iVar14 = local_70 + 8, iVar14 < 1)) {
          plVar20 = (long *)(&stack0xffffffffffffff78 + local_70);
          local_70 = iVar14;
        }
        else {
          plVar9 = plVar20 + 1;
          local_70 = iVar14;
        }
        iVar13 = (int)*plVar20;
        if (iVar13 != 0x11) goto LAB_7100010f44;
        iVar13 = 5;
        plVar20 = plVar8;
        lVar22 = 0;
        goto LAB_7100011768;
      }
      iVar13 = *piVar24;
      lVar22 = *(long *)(piVar24 + 2);
      bVar7 = false;
      iVar14 = 0;
      piVar24 = piVar24 + 4;
    } while (iVar13 == 0x11);
    bVar7 = true;
LAB_7100010f44:
    plVar20 = plVar9;
    iVar14 = 4;
    lVar17 = lVar22;
    switch(iVar13) {
    case 2:
      plVar18[8] = plVar18[8] | 4;
    case 1:
      iVar14 = 2;
      if (*plVar18 == 0) {
        if (!bVar7) {
          iVar14 = local_70;
          if ((local_70 < 0) && (iVar14 = local_70 + 8, iVar14 < 1)) {
            plVar9 = (long *)(&stack0xffffffffffffff78 + local_70);
          }
          else {
            plVar20 = plVar9 + 1;
          }
          lVar17 = *plVar9;
          local_70 = iVar14;
        }
        iVar14 = 3;
        if (lVar17 != 0) {
          *plVar18 = lVar17;
          iVar14 = 0;
        }
      }
      break;
    case 3:
      iVar14 = 2;
      if (plVar18[2] == 0) {
        if (!bVar7) {
          iVar14 = local_70;
          if ((local_70 < 0) && (iVar14 = local_70 + 8, iVar14 < 1)) {
            plVar20 = (long *)(&stack0xffffffffffffff78 + local_70);
            plVar16 = plVar9;
            local_70 = iVar14;
          }
          else {
            plVar16 = plVar9 + 1;
            local_70 = iVar14;
          }
          lVar17 = *plVar20;
          plVar9 = plVar16;
        }
        plVar18[2] = lVar17;
        plVar20 = plVar9;
        iVar14 = 0;
      }
      break;
    case 5:
      plVar18[8] = plVar18[8] | 8;
    case 4:
      iVar14 = 2;
      if (plVar18[3] == 0) {
        if (!bVar7) {
          iVar14 = local_70;
          if ((local_70 < 0) && (iVar14 = local_70 + 8, iVar14 < 1)) {
            plVar20 = (long *)(&stack0xffffffffffffff78 + local_70);
            plVar16 = plVar9;
          }
          else {
            plVar16 = plVar9 + 1;
          }
          lVar17 = *plVar20;
          plVar9 = plVar16;
          local_70 = iVar14;
        }
        plVar20 = plVar9;
        iVar14 = 3;
        if (lVar17 != 0) {
          plVar18[3] = lVar17;
          iVar14 = 0;
        }
      }
      break;
    case 6:
      goto joined_r0x0071000111a8;
    case 7:
      iVar14 = 2;
      if ((*(byte *)(plVar18 + 8) & 10) == 0) {
        if (!bVar7) {
          iVar14 = local_70;
          if ((local_70 < 0) && (iVar14 = local_70 + 8, iVar14 < 1)) {
            plVar9 = (long *)(&stack0xffffffffffffff78 + local_70);
          }
          else {
            plVar20 = plVar9 + 1;
          }
          local_70 = iVar14;
          lVar17 = *plVar9;
        }
        iVar14 = 3;
        if (lVar17 != 0) {
          lVar17 = FUN_71000272c0();
          plVar18[3] = lVar17;
          iVar14 = 1;
          if (lVar17 != 0) {
            uVar25 = plVar18[8] | 2;
            goto LAB_710001155c;
          }
        }
      }
      break;
    case 8:
      bVar6 = !bVar7;
      iVar14 = 6;
      bVar7 = true;
      if (bVar6) {
        iVar14 = local_70;
        if ((local_70 < 0) && (iVar14 = local_70 + 8, iVar14 < 1)) {
          plVar9 = (long *)(&stack0xffffffffffffff78 + local_70);
          local_70 = iVar14;
        }
        else {
          plVar20 = plVar9 + 1;
          local_70 = iVar14;
        }
        piVar24 = (int *)*plVar9;
        bVar7 = piVar24 != (int *)0x0;
        iVar14 = 3;
        if (bVar7) {
          iVar14 = 0;
        }
      }
      break;
    case 10:
      if (bVar7) {
        lVar19 = plVar18[3];
      }
      else {
        iVar14 = local_70;
        if ((local_70 < 0) && (iVar14 = local_70 + 8, iVar14 < 1)) {
          plVar9 = (long *)(&stack0xffffffffffffff78 + local_70);
        }
        else {
          plVar20 = plVar9 + 1;
        }
        lVar19 = plVar18[3];
        lVar17 = *plVar9;
        local_70 = iVar14;
      }
      if (lVar19 == 0) {
        iVar14 = 3;
        if (lVar17 != 0) {
          lVar17 = FUN_71000272c0();
          plVar18[3] = lVar17;
          iVar14 = 1;
          if (lVar17 != 0) {
            uVar25 = plVar18[8] | 1;
LAB_710001155c:
            plVar18[8] = uVar25;
            *(undefined1 *)(plVar18 + 4) = 1;
            iVar14 = 0;
          }
        }
      }
      else {
        iVar14 = 2;
        if (((*(byte *)(plVar18 + 8) & 1) != 0) && (iVar14 = 3, lVar17 != 0)) {
          lVar17 = FUN_71000272c0();
          iVar14 = 1;
          if (lVar17 != 0) {
            plVar9 = (long *)FUN_71000272d0();
            if (plVar9 != (long *)0x0) {
              plVar9[8] = 1;
              plVar9[3] = lVar17;
              plVar9[0xf] = plVar18[0xf];
              plVar18[0xf] = (long)plVar9;
              *(undefined1 *)(plVar9 + 4) = 1;
              goto LAB_710001147c;
            }
            goto LAB_7100011654;
          }
        }
      }
      break;
    case 0xb:
    case 0x10:
      if (bVar7) {
        lVar17 = plVar18[0xb];
      }
      else {
        if ((-1 < local_70) || (local_70 = local_70 + 8, 0 < local_70)) {
          plVar9 = plVar9 + 1;
        }
        lVar17 = plVar18[0xb];
      }
      plVar20 = plVar9;
      iVar14 = 2;
      if (lVar17 == 0) {
        lVar17 = FUN_71000272c0();
        plVar18[0xb] = lVar17;
        iVar14 = 1;
        if (lVar17 != 0) {
          *(undefined1 *)(plVar18 + 0xc) = 1;
          iVar14 = 0;
        }
      }
      break;
    case 0xc:
      plVar18[8] = plVar18[8] | 0x30;
      iVar14 = 2;
      if (plVar18[9] == 0) {
        if (!bVar7) {
          iVar14 = local_70;
          if ((local_70 < 0) && (iVar14 = local_70 + 8, iVar14 < 1)) {
            plVar20 = (long *)(&stack0xffffffffffffff78 + local_70);
            plVar16 = plVar9;
          }
          else {
            plVar16 = plVar9 + 1;
          }
          lVar17 = *plVar20;
          plVar9 = plVar16;
          local_70 = iVar14;
        }
        plVar20 = plVar9;
        iVar14 = 3;
        if (lVar17 != 0) {
          plVar18[9] = lVar17;
          goto LAB_7100011600;
        }
      }
      break;
    case 0xd:
      iVar14 = 2;
      if (plVar18[10] == 0) {
        if (!bVar7) {
          iVar14 = local_70;
          if ((local_70 < 0) && (iVar14 = local_70 + 8, iVar14 < 1)) {
            plVar20 = (long *)(&stack0xffffffffffffff78 + local_70);
            plVar16 = plVar9;
            local_70 = iVar14;
          }
          else {
            plVar16 = plVar9 + 1;
            local_70 = iVar14;
          }
          lVar17 = *plVar20;
          plVar9 = plVar16;
        }
        plVar18[10] = lVar17;
        plVar20 = plVar9;
        iVar14 = 0;
      }
      break;
    case 0xe:
      if (bVar7) {
        lVar19 = plVar18[6];
      }
      else {
        iVar14 = local_70;
        if ((local_70 < 0) && (iVar14 = local_70 + 8, iVar14 < 1)) {
          plVar9 = (long *)(&stack0xffffffffffffff78 + local_70);
        }
        else {
          plVar20 = plVar9 + 1;
        }
        lVar19 = plVar18[6];
        lVar17 = *plVar9;
        local_70 = iVar14;
      }
      if (lVar19 == 0) {
        iVar14 = 3;
        if (lVar17 != 0) {
          lVar17 = FUN_71000272c0();
          plVar18[6] = lVar17;
          iVar14 = 1;
          if (lVar17 != 0) {
            *(undefined1 *)(plVar18 + 7) = 1;
            iVar14 = 0;
          }
        }
      }
      else {
        iVar14 = 2;
        if (((*(byte *)(plVar18 + 8) & 1) != 0) && (iVar14 = 3, lVar17 != 0)) {
          lVar17 = FUN_71000272c0();
          iVar14 = 1;
          if (lVar17 != 0) {
            plVar9 = (long *)FUN_71000272d0();
            if (plVar9 == (long *)0x0) {
LAB_7100011654:
              FUN_71000272a0();
              iVar14 = 1;
            }
            else {
              plVar9[8] = 1;
              plVar9[6] = lVar17;
              plVar9[0xf] = plVar18[0xf];
              plVar18[0xf] = (long)plVar9;
              *(undefined1 *)(plVar9 + 7) = 1;
LAB_710001147c:
              plVar18 = plVar9;
              iVar14 = 0;
            }
          }
        }
      }
      break;
    case 0xf:
      if (bVar7) {
        lVar19 = plVar18[0xe];
      }
      else {
        iVar14 = local_70;
        if ((local_70 < 0) && (iVar14 = local_70 + 8, iVar14 < 1)) {
          plVar20 = (long *)(&stack0xffffffffffffff78 + local_70);
          plVar16 = plVar9;
        }
        else {
          plVar16 = plVar9 + 1;
        }
        lVar19 = plVar18[0xe];
        lVar17 = *plVar20;
        plVar9 = plVar16;
        local_70 = iVar14;
      }
      plVar20 = plVar9;
      iVar14 = 2;
      if (lVar19 == 0) {
        plVar18[0xe] = lVar17;
        iVar14 = 0;
      }
      break;
    case 0x13:
      plVar18[8] = plVar18[8] | 0x40;
      iVar14 = 2;
      if (plVar18[0xd] == 0) {
        if (!bVar7) {
          iVar14 = local_70;
          if ((local_70 < 0) && (iVar14 = local_70 + 8, iVar14 < 1)) {
            plVar20 = (long *)(&stack0xffffffffffffff78 + local_70);
            plVar16 = plVar9;
          }
          else {
            plVar16 = plVar9 + 1;
          }
          lVar17 = *plVar20;
          plVar9 = plVar16;
          local_70 = iVar14;
        }
        plVar20 = plVar9;
        iVar14 = 3;
        if (lVar17 != 0) {
          plVar18[0xd] = lVar17;
LAB_7100011600:
          plVar18[3] = lVar17;
          plVar20 = plVar9;
          iVar14 = 0;
        }
      }
      break;
    case 0x14:
      plVar18[8] = plVar18[8] | 0x80;
joined_r0x0071000111a8:
      if (!bVar7) {
        iVar14 = local_70;
        if ((local_70 < 0) && (iVar14 = local_70 + 8, iVar14 < 1)) {
          plVar20 = (long *)(&stack0xffffffffffffff78 + local_70);
          plVar16 = plVar9;
          local_70 = iVar14;
        }
        else {
          plVar16 = plVar9 + 1;
          local_70 = iVar14;
        }
        lVar17 = *plVar20;
        plVar9 = plVar16;
      }
      plVar18[5] = lVar17;
      plVar20 = plVar9;
      iVar14 = 0;
    }
  } while( true );
LAB_71000116b0:
  do {
    if ((char)plVar9[1] != '\0') {
      FUN_71000272a0();
      *plVar9 = 0;
      *(undefined1 *)(plVar9 + 1) = 0;
    }
    if ((char)plVar9[4] != '\0') {
      FUN_71000272a0();
      plVar9[3] = 0;
      *(undefined1 *)(plVar9 + 4) = 0;
    }
    if ((char)plVar9[7] != '\0') {
      FUN_71000272a0();
      plVar9[6] = 0;
      *(undefined1 *)(plVar9 + 7) = 0;
    }
    if ((char)plVar9[0xc] != '\0') {
      FUN_71000272a0();
      plVar9[0xb] = 0;
      *(undefined1 *)(plVar9 + 0xc) = 0;
    }
    plVar20 = plVar9 + 0xf;
    plVar9 = (long *)*plVar20;
  } while ((long *)*plVar20 != (long *)0x0);
  goto LAB_710001171c;
LAB_7100011768:
  if (*plVar20 == 0) {
    if (lVar22 != 0) goto LAB_7100011784;
    iVar14 = 5;
    iVar13 = 5;
joined_r0x007100011b1c:
    if (plVar20 != (long *)0x0) goto LAB_7100011b20;
    goto LAB_710001171c;
  }
  if ((lVar22 == 0) && (plVar20[3] == 0)) goto LAB_7100011b20;
LAB_7100011784:
  uVar25 = plVar20[8];
  uVar23 = (uint)uVar25;
  if ((~uVar23 & 9) == 0) goto LAB_7100011b20;
  if ((plVar20[5] != 0 & uVar23) != 0) goto LAB_7100011b20;
  if ((~uVar23 & 10) == 0) goto LAB_7100011b20;
  if ((~uVar23 & 0x30) == 0 && plVar20[9] == 0) goto LAB_7100011b20;
  if (((uVar25 & 0x11) == 0) || (plVar20[6] != 0)) {
LAB_7100011958:
    if ((plVar20 == plVar8) && (((uint)uVar25 >> 2 & 1) == 0)) {
      pcVar21 = (char *)*plVar20;
      if (pcVar21 == (char *)0x0) {
        iVar14 = 1;
        iVar13 = 1;
        plVar20 = plVar8;
        goto joined_r0x007100011b1c;
      }
      sVar10 = plVar8[2];
      if (sVar10 == 0) {
        sVar10 = strlen(pcVar21);
        sVar10 = sVar10 + 1;
      }
      pvVar11 = FUN_7100017530(pcVar21,sVar10);
      *plVar20 = (long)pvVar11;
      if (pvVar11 == (void *)0x0) {
        iVar13 = 1;
        cVar5 = (char)plVar8[1];
        plVar20 = plVar8;
        goto joined_r0x007100011adc;
      }
      *(undefined1 *)(plVar8 + 1) = 1;
      uVar25 = plVar20[8];
    }
    if ((uVar25 & 0x6b) == 0) {
      pcVar21 = (char *)plVar20[3];
      if (pcVar21 == (char *)0x0) {
        local_180 = (void *)0x0;
      }
      else {
        sVar10 = plVar20[5];
        if (sVar10 == 0) {
          sVar10 = strlen(pcVar21);
          sVar10 = sVar10 + 1;
        }
        local_180 = FUN_7100017530(pcVar21,sVar10);
        plVar20[3] = (long)local_180;
        if (local_180 == (void *)0x0) goto LAB_7100011ad0;
        uVar25 = plVar20[8];
        *(undefined1 *)(plVar20 + 4) = 1;
      }
    }
    else {
      local_180 = (void *)plVar20[3];
    }
    lVar15 = plVar20[9];
    pcVar21 = (char *)*plVar20;
    lVar17 = plVar20[10];
    lVar2 = plVar20[0xb];
    lVar19 = plVar20[5];
    lVar3 = plVar20[6];
    sVar10 = plVar20[2];
    lVar1 = plVar20[0xd];
    lVar4 = plVar20[0xe];
    lVar12 = FUN_71000272d0();
    if (lVar12 == 0) goto LAB_7100011ad0;
    *(char **)(lVar12 + 8) = pcVar21;
    if (pcVar21 == (char *)0x0) {
      sVar10 = 0;
    }
    else if (sVar10 == 0) {
      sVar10 = strlen(pcVar21);
    }
    *(size_t *)(lVar12 + 0x10) = sVar10;
    *(void **)(lVar12 + 0x18) = local_180;
    *(long *)(lVar12 + 0x60) = lVar1;
    *(long *)(lVar12 + 0x68) = lVar19;
    *(long *)(lVar12 + 0x28) = lVar15;
    *(long *)(lVar12 + 0x30) = lVar17;
    *(long *)(lVar12 + 0x38) = lVar3;
    *(long *)(lVar12 + 0x40) = lVar4;
    *(ulong *)(lVar12 + 0x50) = uVar25 | 0x80;
    *(long *)(lVar12 + 0x58) = lVar2;
    if (lVar22 == 0) {
      plVar18 = param_1;
      if ((long *)*param_2 != (long *)0x0) {
        plVar18 = (long *)*param_2;
      }
      *plVar18 = lVar12;
      plVar18 = param_2;
    }
    else {
      *(long *)(lVar12 + 0x48) = *(long *)(lVar22 + 0x48);
      plVar18 = (long *)(lVar22 + 0x48);
    }
    *plVar18 = lVar12;
    plVar20 = (long *)plVar20[0xf];
    lVar22 = lVar12;
    iVar14 = 0;
    if (plVar20 == (long *)0x0) goto LAB_710001171c;
    goto LAB_7100011768;
  }
  lVar17 = 0x18;
  if ((uVar25 & 0x10) != 0) {
    lVar17 = 0x58;
  }
  pcVar21 = *(char **)((long)plVar20 + lVar17);
  if ((((pcVar21 != (char *)0x0) &&
       ((sVar10 = strlen(pcVar21), sVar10 < 4 ||
        (bVar7 = FUN_7100017280((byte *)(pcVar21 + (sVar10 - 4)),&DAT_7104339086), !bVar7)))) &&
      ((sVar10 = strlen(pcVar21), sVar10 < 4 ||
       (bVar7 = FUN_7100017280((byte *)(pcVar21 + (sVar10 - 4)),&DAT_71043bd36f), !bVar7)))) &&
     ((((sVar10 = strlen(pcVar21), sVar10 < 5 ||
        (bVar7 = FUN_7100017280((byte *)(pcVar21 + (sVar10 - 5)),(byte *)".jpeg"), !bVar7)) &&
       ((sVar10 = strlen(pcVar21), sVar10 < 4 ||
        (bVar7 = FUN_7100017280((byte *)(pcVar21 + (sVar10 - 4)),&DAT_7104453842), !bVar7)))) &&
      (((sVar10 = strlen(pcVar21), sVar10 < 5 ||
        (bVar7 = FUN_7100017280((byte *)(pcVar21 + (sVar10 - 5)),(byte *)".html"), !bVar7)) &&
       (sVar10 = strlen(pcVar21), 3 < sVar10)))))) {
    FUN_7100017280((byte *)(pcVar21 + (sVar10 - 4)),&DAT_7104431e18);
  }
  lVar17 = FUN_71000272c0();
  plVar20[6] = lVar17;
  if (lVar17 != 0) {
    uVar25 = plVar20[8];
    *(undefined1 *)(plVar20 + 7) = 1;
    goto LAB_7100011958;
  }
LAB_7100011ad0:
  iVar13 = 1;
  cVar5 = (char)plVar20[1];
joined_r0x007100011adc:
  while( true ) {
    if (cVar5 != '\0') {
      FUN_71000272a0();
      *plVar20 = 0;
      *(undefined1 *)(plVar20 + 1) = 0;
    }
    if ((char)plVar20[4] != '\0') {
      FUN_71000272a0();
      plVar20[3] = 0;
      *(undefined1 *)(plVar20 + 4) = 0;
    }
    if ((char)plVar20[7] != '\0') {
      FUN_71000272a0();
      plVar20[6] = 0;
      *(undefined1 *)(plVar20 + 7) = 0;
    }
    if ((char)plVar20[0xc] != '\0') {
      FUN_71000272a0();
      plVar20[0xb] = 0;
      *(undefined1 *)(plVar20 + 0xc) = 0;
    }
    plVar20 = (long *)plVar20[0xf];
    iVar14 = iVar13;
    if (plVar20 == (long *)0x0) break;
LAB_7100011b20:
    cVar5 = (char)plVar20[1];
  }
LAB_710001171c:
  do {
    plVar8 = (long *)plVar8[0xf];
    FUN_71000272a0();
  } while (plVar8 != (long *)0x0);
  return iVar14;
}

