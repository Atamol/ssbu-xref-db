// addr:      7102bb3290
// offset:    0x2bb3290
// name:      FUN_7102bb3290
// mangled:   
// signature: undefined __cdecl FUN_7102bb3290(long param_1, long * param_2, byte * * * * param_3, byte * * * * param_4, long * * * * param_5, byte * * * * param_6, byte * * * param_7, long * * * * param_8)


void FUN_7102bb3290(long param_1,long *param_2,byte ****param_3,byte ****param_4,long ****param_5,
                   byte ****param_6,byte ***param_7,long ****param_8)

{
  uint *puVar1;
  long *plVar2;
  int iVar3;
  uint uVar4;
  byte bVar5;
  int iVar6;
  uint uVar7;
  byte *pbVar8;
  long *plVar9;
  long ****pppplVar10;
  int iVar11;
  char *pcVar12;
  long lVar13;
  ulong uVar14;
  long ***ppplVar15;
  ulong uVar16;
  ulong uVar17;
  long lVar18;
  long lVar19;
  ulong uVar20;
  long lVar21;
  char *pcVar22;
  int iVar23;
  ulong uVar24;
  undefined8 *puVar25;
  undefined8 *puVar26;
  undefined8 uVar27;
  long lVar28;
  uint uVar29;
  undefined8 uVar30;
  undefined4 *puVar31;
  byte *pbVar32;
  ulong uVar33;
  byte *pbVar34;
  byte *pbVar35;
  undefined8 *puVar36;
  byte *pbVar37;
  undefined8 *puVar38;
  byte ****ppppbVar39;
  undefined8 *puVar40;
  byte ****ppppbVar41;
  size_t sVar42;
  void *pvVar43;
  long ****pppplVar44;
  void *pvVar45;
  undefined4 uVar46;
  undefined4 uVar47;
  undefined4 uVar48;
  long local_c8;
  long local_c0;
  long local_b0;
  long ***local_98;
  undefined4 local_84;
  
  plVar9 = param_2 + 1;
  pcVar12 = (char *)*plVar9;
  if ((*pcVar12 == '\f') && (iVar11 = *(int *)(pcVar12 + 1) + -1, 0 < *(int *)(pcVar12 + 1))) {
    iVar23 = 0;
    pbVar37 = &DAT_7104742dbb;
    do {
      iVar3 = iVar11 + iVar23;
      if (iVar3 < 0) {
        iVar3 = iVar3 + 1;
      }
      iVar3 = iVar3 >> 1;
      puVar1 = (uint *)(*(long *)(*param_2 + 0x28) + (long)*(int *)(pcVar12 + 5) + (long)iVar3 * 8);
      uVar33 = *(ulong *)(*(long *)(*param_2 + 0x20) + (ulong)*puVar1 * 8);
      if (uVar33 == 0x11f7738e5b) {
        uVar29 = puVar1[1];
        if ((int)uVar29 < 0) goto LAB_7102bb3360;
        pbVar37 = (byte *)(pcVar12 + (int)uVar29);
        break;
      }
      iVar6 = iVar3 + -1;
      if (uVar33 < 0x11f7738e5c) {
        iVar23 = iVar3 + 1;
        iVar6 = iVar11;
      }
      iVar11 = iVar6;
    } while (iVar23 <= iVar11);
  }
  else {
LAB_7102bb3360:
    pbVar37 = &DAT_7104742dbb;
  }
  if (*pbVar37 - 0xb < 2) {
    iVar11 = *(int *)(pbVar37 + 1);
  }
  else {
    iVar11 = 0;
  }
  uVar33 = (ulong)iVar11;
  uVar24 = *(long *)(param_1 + 0x10) - *(long *)(param_1 + 8) >> 2;
  if (uVar24 < uVar33) {
    FUN_71003ca470((long *)(param_1 + 8),uVar33 - uVar24,(long ****)param_3,param_4,param_5,param_6,
                   param_7,param_8);
  }
  else if (uVar24 != uVar33) {
    *(ulong *)(param_1 + 0x10) = *(long *)(param_1 + 8) + uVar33 * 4;
  }
  uVar29 = (uint)*pbVar37;
  if ((*pbVar37 - 0xb < 2) && (0 < *(int *)(pbVar37 + 1))) {
    iVar11 = 0;
    lVar18 = 0;
    do {
      if ((int)lVar18 < 0) {
        pbVar35 = &DAT_7104742dbb;
      }
      else {
        pbVar35 = &DAT_7104742dbb;
        if ((uVar29 == 0xb) && ((int)lVar18 < *(int *)(pbVar37 + 1))) {
          pbVar35 = pbVar37 + *(int *)(pbVar37 + (long)iVar11 + 5);
        }
      }
      uVar46 = 0x42040000;
      if (*pbVar35 == 8) {
        uVar46 = *(undefined4 *)(pbVar35 + 1);
      }
      *(undefined4 *)(*(long *)(param_1 + 8) + lVar18 * 4) = uVar46;
      uVar29 = (uint)*pbVar37;
      lVar18 = lVar18 + 1;
      if (uVar29 - 0xb < 2) {
        iVar23 = *(int *)(pbVar37 + 1);
      }
      else {
        iVar23 = 0;
      }
      iVar11 = iVar11 + 4;
    } while (lVar18 < iVar23);
  }
  pcVar12 = (char *)*plVar9;
  if ((*pcVar12 == '\f') && (iVar11 = *(int *)(pcVar12 + 1) + -1, 0 < *(int *)(pcVar12 + 1))) {
    lVar18 = *param_2;
    iVar23 = 0;
    pbVar37 = &DAT_7104742dbb;
    do {
      iVar3 = iVar11 + iVar23;
      if (iVar3 < 0) {
        iVar3 = iVar3 + 1;
      }
      iVar3 = iVar3 >> 1;
      puVar1 = (uint *)(*(long *)(lVar18 + 0x28) + (long)*(int *)(pcVar12 + 5) + (long)iVar3 * 8);
      uVar33 = *(ulong *)(*(long *)(lVar18 + 0x20) + (ulong)*puVar1 * 8);
      if (uVar33 == 0xb76db05bf) {
        uVar29 = puVar1[1];
        if ((int)uVar29 < 0) goto LAB_7102bb3510;
        pbVar37 = (byte *)(pcVar12 + (int)uVar29);
        goto LAB_7102bb351c;
      }
      iVar6 = iVar3 + -1;
      if (uVar33 < 0xb76db05c0) {
        iVar23 = iVar3 + 1;
        iVar6 = iVar11;
      }
      iVar11 = iVar6;
    } while (iVar23 <= iVar11);
    lVar18 = 0;
  }
  else {
LAB_7102bb3510:
    lVar18 = 0;
    pbVar37 = &DAT_7104742dbb;
  }
LAB_7102bb351c:
  if (*pbVar37 - 0xb < 2) {
    iVar11 = *(int *)(pbVar37 + 1);
  }
  else {
    iVar11 = 0;
  }
  uVar33 = (ulong)iVar11;
  pvVar43 = *(void **)(param_1 + 0x20);
  puVar25 = *(undefined8 **)(param_1 + 0x28);
  ppppbVar39 = (byte ****)((long)puVar25 - (long)pvVar43);
  lVar19 = (long)ppppbVar39 >> 3;
  plVar2 = (long *)(param_1 + 0x20);
  if ((ulong)(lVar19 * -0x3333333333333333) < uVar33) {
    uVar24 = uVar33 + lVar19 * 0x3333333333333333;
    if ((ulong)((*(long *)(param_1 + 0x30) - (long)puVar25 >> 3) * -0x3333333333333333) < uVar24) {
      if (iVar11 < 0) goto LAB_7102bbde84;
      lVar13 = *(long *)(param_1 + 0x30) - (long)pvVar43 >> 3;
      uVar20 = 0x666666666666666;
      if ((ulong)(lVar13 * -0x3333333333333333) < 0x333333333333333) {
        uVar14 = lVar13 * -0x6666666666666666;
        uVar20 = uVar33;
        if (uVar33 <= uVar14) {
          uVar20 = uVar14;
        }
        if (uVar20 != 0) goto LAB_7102bb35c8;
        uVar20 = 0;
        lVar13 = 0;
      }
      else {
LAB_7102bb35c8:
        ppplVar15 = (long ***)(uVar20 * 0x28);
        if (ppplVar15 == (long ***)0x0) {
          ppplVar15 = (long ***)0x1;
        }
        lVar13 = FUN_710392e290(0x10,ppplVar15,(long ****)param_3,param_4,param_5,param_6,param_7,
                                param_8);
        if (lVar13 == 0) {
          if (DAT_7105332f00 != (long *)0x0) {
            local_84 = 0;
            pppplVar10 = &local_98;
            local_98 = ppplVar15;
            uVar14 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_84);
            if (((uVar14 & 1) != 0) &&
               (lVar13 = FUN_710392e290(0x10,ppplVar15,pppplVar10,param_4,param_5,param_6,param_7,
                                        param_8), lVar13 != 0)) goto LAB_7102bb3638;
          }
          lVar13 = 0;
        }
      }
LAB_7102bb3638:
      pvVar45 = (void *)(lVar13 + lVar19 * 8);
      param_3 = (byte ****)(uVar24 * 0x28);
      memset(pvVar45,0,(size_t)param_3);
      lVar19 = SUB168(SEXT816((long)ppppbVar39) * SEXT816(-0x6666666666666667),8);
      pvVar45 = (void *)((long)pvVar45 + ((lVar19 >> 4) - (lVar19 >> 0x3f)) * 0x28);
      if (0 < (long)ppppbVar39) {
        memcpy(pvVar45,pvVar43,(size_t)ppppbVar39);
        param_3 = ppppbVar39;
      }
      *(void **)(param_1 + 0x20) = pvVar45;
      *(ulong *)(param_1 + 0x28) = lVar13 + uVar33 * 0x28;
      *(ulong *)(param_1 + 0x30) = lVar13 + uVar20 * 0x28;
      if (pvVar43 != (void *)0x0) {
        FUN_710392eb40((ulong)pvVar43);
      }
    }
    else {
      uVar33 = uVar24;
      if ((uVar24 & 1) != 0) {
        puVar25[3] = 0;
        puVar25[4] = 0;
        uVar33 = uVar24 - 1;
        puVar25[1] = 0;
        puVar25[2] = 0;
        *puVar25 = 0;
        puVar25 = (undefined8 *)(*(long *)(param_1 + 0x28) + 0x28);
        *(undefined8 **)(param_1 + 0x28) = puVar25;
      }
      if (uVar24 != 1) {
        do {
          puVar25[3] = 0;
          puVar25[4] = 0;
          uVar33 = uVar33 - 2;
          puVar25[1] = 0;
          puVar25[2] = 0;
          *puVar25 = 0;
          lVar19 = *(long *)(param_1 + 0x28);
          *(long *)(param_1 + 0x28) = lVar19 + 0x28;
          *(undefined8 *)(lVar19 + 0x40) = 0;
          *(undefined8 *)(lVar19 + 0x48) = 0;
          *(undefined8 *)(lVar19 + 0x28) = 0;
          *(undefined8 *)(lVar19 + 0x30) = 0;
          *(undefined8 *)(lVar19 + 0x38) = 0;
          puVar25 = (undefined8 *)(*(long *)(param_1 + 0x28) + 0x28);
          *(undefined8 **)(param_1 + 0x28) = puVar25;
        } while (uVar33 != 0);
      }
    }
  }
  else if (lVar19 * -0x3333333333333333 - uVar33 != 0) {
    *(void **)(param_1 + 0x28) = (void *)((long)pvVar43 + uVar33 * 0x28);
  }
  ppppbVar39 = (byte ****)(ulong)*pbVar37;
  if ((*pbVar37 - 0xb < 2) && (0 < *(int *)(pbVar37 + 1))) {
    uVar47 = 0x42700000;
    uVar46 = 0;
    lVar19 = 0;
    param_3 = (byte ****)&DAT_7104742dbb;
LAB_7102bb37f8:
    do {
      iVar11 = (int)lVar19;
      if (iVar11 < 0) {
LAB_7102bb3830:
        lVar13 = 0;
        ppppbVar41 = (byte ****)&DAT_7104742dbb;
      }
      else {
        ppppbVar41 = param_3;
        lVar13 = 0;
        if ((int)ppppbVar39 == 0xb) {
          if (*(int *)(pbVar37 + 1) <= iVar11) goto LAB_7102bb3830;
          ppppbVar41 = (byte ****)(pbVar37 + *(int *)(pbVar37 + (long)iVar11 * 4 + 5));
          lVar13 = lVar18;
        }
      }
      ppppbVar39 = param_3;
      if ((*(char *)ppppbVar41 == '\f') &&
         (iVar11 = *(int *)((long)ppppbVar41 + 1) + -1, 0 < *(int *)((long)ppppbVar41 + 1))) {
        param_8 = *(long *****)(lVar13 + 0x20);
        iVar23 = 0;
        do {
          iVar3 = iVar11 + iVar23;
          if (iVar3 < 0) {
            iVar3 = iVar3 + 1;
          }
          iVar3 = iVar3 >> 1;
          puVar1 = (uint *)(*(long *)(lVar13 + 0x28) + (long)*(int *)((long)ppppbVar41 + 5) +
                           (long)iVar3 * 8);
          if (param_8[*puVar1] == (long ***)0x5c01aa2d7) {
            uVar29 = puVar1[1];
            if (-1 < (int)uVar29) {
              ppppbVar39 = (byte ****)((long)ppppbVar41 + (long)(int)uVar29);
            }
            break;
          }
          iVar6 = iVar3 + -1;
          if (param_8[*puVar1] < (long ***)0x5c01aa2d8) {
            iVar23 = iVar3 + 1;
            iVar6 = iVar11;
          }
          iVar11 = iVar6;
        } while (iVar23 <= iVar11);
      }
      uVar48 = 0xc28c0000;
      if (*(char *)ppppbVar39 == '\b') {
        uVar48 = *(undefined4 *)((long)ppppbVar39 + 1);
      }
      *(undefined4 *)(*plVar2 + lVar19 * 0x28) = uVar48;
      ppppbVar39 = param_3;
      if ((*(char *)ppppbVar41 == '\f') &&
         (iVar11 = *(int *)((long)ppppbVar41 + 1) + -1, 0 < *(int *)((long)ppppbVar41 + 1))) {
        param_8 = *(long *****)(lVar13 + 0x20);
        iVar23 = 0;
        do {
          iVar3 = iVar11 + iVar23;
          if (iVar3 < 0) {
            iVar3 = iVar3 + 1;
          }
          iVar3 = iVar3 >> 1;
          puVar1 = (uint *)(*(long *)(lVar13 + 0x28) + (long)*(int *)((long)ppppbVar41 + 5) +
                           (long)iVar3 * 8);
          if (param_8[*puVar1] == (long ***)0x51d0555fa) {
            uVar29 = puVar1[1];
            if (-1 < (int)uVar29) {
              ppppbVar39 = (byte ****)((long)ppppbVar41 + (long)(int)uVar29);
            }
            break;
          }
          iVar6 = iVar3 + -1;
          if (param_8[*puVar1] < (long ***)0x51d0555fb) {
            iVar23 = iVar3 + 1;
            iVar6 = iVar11;
          }
          iVar11 = iVar6;
        } while (iVar23 <= iVar11);
      }
      uVar48 = uVar46;
      if (*(char *)ppppbVar39 == '\b') {
        uVar48 = *(undefined4 *)((long)ppppbVar39 + 1);
      }
      *(undefined4 *)(*plVar2 + lVar19 * 0x28 + 4) = uVar48;
      ppppbVar39 = param_3;
      if ((*(char *)ppppbVar41 == '\f') &&
         (iVar11 = *(int *)((long)ppppbVar41 + 1) + -1, 0 < *(int *)((long)ppppbVar41 + 1))) {
        param_8 = *(long *****)(lVar13 + 0x20);
        iVar23 = 0;
        do {
          iVar3 = iVar11 + iVar23;
          if (iVar3 < 0) {
            iVar3 = iVar3 + 1;
          }
          iVar3 = iVar3 >> 1;
          puVar1 = (uint *)(*(long *)(lVar13 + 0x28) + (long)*(int *)((long)ppppbVar41 + 5) +
                           (long)iVar3 * 8);
          if (param_8[*puVar1] == (long ***)0x5b71d9241) {
            uVar29 = puVar1[1];
            if (-1 < (int)uVar29) {
              ppppbVar39 = (byte ****)((long)ppppbVar41 + (long)(int)uVar29);
            }
            break;
          }
          iVar6 = iVar3 + -1;
          if (param_8[*puVar1] < (long ***)0x5b71d9242) {
            iVar23 = iVar3 + 1;
            iVar6 = iVar11;
          }
          iVar11 = iVar6;
        } while (iVar23 <= iVar11);
      }
      uVar48 = uVar46;
      if (*(char *)ppppbVar39 == '\b') {
        uVar48 = *(undefined4 *)((long)ppppbVar39 + 1);
      }
      *(undefined4 *)(*plVar2 + lVar19 * 0x28 + 8) = uVar48;
      ppppbVar39 = param_3;
      if ((*(char *)ppppbVar41 == '\f') &&
         (iVar11 = *(int *)((long)ppppbVar41 + 1) + -1, 0 < *(int *)((long)ppppbVar41 + 1))) {
        param_8 = *(long *****)(lVar13 + 0x20);
        iVar23 = 0;
        do {
          iVar3 = iVar11 + iVar23;
          if (iVar3 < 0) {
            iVar3 = iVar3 + 1;
          }
          iVar3 = iVar3 >> 1;
          puVar1 = (uint *)(*(long *)(lVar13 + 0x28) + (long)*(int *)((long)ppppbVar41 + 5) +
                           (long)iVar3 * 8);
          if (param_8[*puVar1] == (long ***)0x56a02656c) {
            uVar29 = puVar1[1];
            if (-1 < (int)uVar29) {
              ppppbVar39 = (byte ****)((long)ppppbVar41 + (long)(int)uVar29);
            }
            break;
          }
          iVar6 = iVar3 + -1;
          if (param_8[*puVar1] < (long ***)0x56a02656d) {
            iVar23 = iVar3 + 1;
            iVar6 = iVar11;
          }
          iVar11 = iVar6;
        } while (iVar23 <= iVar11);
      }
      uVar48 = uVar46;
      if (*(char *)ppppbVar39 == '\b') {
        uVar48 = *(undefined4 *)((long)ppppbVar39 + 1);
      }
      *(undefined4 *)(*plVar2 + lVar19 * 0x28 + 0xc) = uVar48;
      ppppbVar39 = param_3;
      if ((*(char *)ppppbVar41 == '\f') &&
         (iVar11 = *(int *)((long)ppppbVar41 + 1) + -1, 0 < *(int *)((long)ppppbVar41 + 1))) {
        param_8 = *(long *****)(lVar13 + 0x20);
        iVar23 = 0;
        do {
          iVar3 = iVar11 + iVar23;
          if (iVar3 < 0) {
            iVar3 = iVar3 + 1;
          }
          iVar3 = iVar3 >> 1;
          puVar1 = (uint *)(*(long *)(lVar13 + 0x28) + (long)*(int *)((long)ppppbVar41 + 5) +
                           (long)iVar3 * 8);
          if (param_8[*puVar1] == (long ***)0xecc51395a) {
            uVar29 = puVar1[1];
            if (-1 < (int)uVar29) {
              ppppbVar39 = (byte ****)((long)ppppbVar41 + (long)(int)uVar29);
            }
            break;
          }
          iVar6 = iVar3 + -1;
          if (param_8[*puVar1] < (long ***)0xecc51395b) {
            iVar23 = iVar3 + 1;
            iVar6 = iVar11;
          }
          iVar11 = iVar6;
        } while (iVar23 <= iVar11);
      }
      uVar48 = 0x38d1b717;
      if (*(char *)ppppbVar39 == '\b') {
        uVar48 = *(undefined4 *)((long)ppppbVar39 + 1);
      }
      *(undefined4 *)(*plVar2 + lVar19 * 0x28 + 0x10) = uVar48;
      ppppbVar39 = param_3;
      if ((*(char *)ppppbVar41 == '\f') &&
         (iVar11 = *(int *)((long)ppppbVar41 + 1) + -1, 0 < *(int *)((long)ppppbVar41 + 1))) {
        param_8 = *(long *****)(lVar13 + 0x20);
        iVar23 = 0;
        do {
          iVar3 = iVar11 + iVar23;
          if (iVar3 < 0) {
            iVar3 = iVar3 + 1;
          }
          iVar3 = iVar3 >> 1;
          puVar1 = (uint *)(*(long *)(lVar13 + 0x28) + (long)*(int *)((long)ppppbVar41 + 5) +
                           (long)iVar3 * 8);
          if (param_8[*puVar1] == (long ***)0x126e65e824) {
            uVar29 = puVar1[1];
            if (-1 < (int)uVar29) {
              ppppbVar39 = (byte ****)((long)ppppbVar41 + (long)(int)uVar29);
            }
            break;
          }
          iVar6 = iVar3 + -1;
          if (param_8[*puVar1] < (long ***)0x126e65e825) {
            iVar23 = iVar3 + 1;
            iVar6 = iVar11;
          }
          iVar11 = iVar6;
        } while (iVar23 <= iVar11);
      }
      uVar48 = 0x3ac49ba6;
      if (*(char *)ppppbVar39 == '\b') {
        uVar48 = *(undefined4 *)((long)ppppbVar39 + 1);
      }
      *(undefined4 *)(*plVar2 + lVar19 * 0x28 + 0x14) = uVar48;
      ppppbVar39 = param_3;
      if ((*(char *)ppppbVar41 == '\f') &&
         (iVar11 = *(int *)((long)ppppbVar41 + 1) + -1, 0 < *(int *)((long)ppppbVar41 + 1))) {
        param_8 = *(long *****)(lVar13 + 0x20);
        iVar23 = 0;
        do {
          iVar3 = iVar11 + iVar23;
          if (iVar3 < 0) {
            iVar3 = iVar3 + 1;
          }
          iVar3 = iVar3 >> 1;
          puVar1 = (uint *)(*(long *)(lVar13 + 0x28) + (long)*(int *)((long)ppppbVar41 + 5) +
                           (long)iVar3 * 8);
          if (param_8[*puVar1] == (long ***)0xeb493f141) {
            uVar29 = puVar1[1];
            if (-1 < (int)uVar29) {
              ppppbVar39 = (byte ****)((long)ppppbVar41 + (long)(int)uVar29);
            }
            break;
          }
          iVar6 = iVar3 + -1;
          if (param_8[*puVar1] < (long ***)0xeb493f142) {
            iVar23 = iVar3 + 1;
            iVar6 = iVar11;
          }
          iVar11 = iVar6;
        } while (iVar23 <= iVar11);
      }
      uVar48 = uVar47;
      if (*(char *)ppppbVar39 == '\b') {
        uVar48 = *(undefined4 *)((long)ppppbVar39 + 1);
      }
      *(undefined4 *)(*plVar2 + lVar19 * 0x28 + 0x18) = uVar48;
      ppppbVar39 = param_3;
      if ((*(char *)ppppbVar41 == '\f') &&
         (iVar11 = *(int *)((long)ppppbVar41 + 1) + -1, 0 < *(int *)((long)ppppbVar41 + 1))) {
        param_8 = *(long *****)(lVar13 + 0x20);
        iVar23 = 0;
        do {
          iVar3 = iVar11 + iVar23;
          if (iVar3 < 0) {
            iVar3 = iVar3 + 1;
          }
          iVar3 = iVar3 >> 1;
          puVar1 = (uint *)(*(long *)(lVar13 + 0x28) + (long)*(int *)((long)ppppbVar41 + 5) +
                           (long)iVar3 * 8);
          if (param_8[*puVar1] == (long ***)0xe889ece18) {
            uVar29 = puVar1[1];
            if (-1 < (int)uVar29) {
              ppppbVar39 = (byte ****)((long)ppppbVar41 + (long)(int)uVar29);
            }
            break;
          }
          iVar6 = iVar3 + -1;
          if (param_8[*puVar1] < (long ***)0xe889ece19) {
            iVar23 = iVar3 + 1;
            iVar6 = iVar11;
          }
          iVar11 = iVar6;
        } while (iVar23 <= iVar11);
      }
      uVar48 = uVar47;
      if (*(char *)ppppbVar39 == '\b') {
        uVar48 = *(undefined4 *)((long)ppppbVar39 + 1);
      }
      *(undefined4 *)(*plVar2 + lVar19 * 0x28 + 0x1c) = uVar48;
      ppppbVar39 = param_3;
      if ((*(char *)ppppbVar41 == '\f') &&
         (iVar11 = *(int *)((long)ppppbVar41 + 1) + -1, 0 < *(int *)((long)ppppbVar41 + 1))) {
        param_8 = *(long *****)(lVar13 + 0x20);
        iVar23 = 0;
        do {
          iVar3 = iVar11 + iVar23;
          if (iVar3 < 0) {
            iVar3 = iVar3 + 1;
          }
          iVar3 = iVar3 >> 1;
          puVar1 = (uint *)(*(long *)(lVar13 + 0x28) + (long)*(int *)((long)ppppbVar41 + 5) +
                           (long)iVar3 * 8);
          if (param_8[*puVar1] == (long ***)0xd38918ff4) {
            uVar29 = puVar1[1];
            if (-1 < (int)uVar29) {
              ppppbVar39 = (byte ****)((long)ppppbVar41 + (long)(int)uVar29);
            }
            break;
          }
          iVar6 = iVar3 + -1;
          if (param_8[*puVar1] < (long ***)0xd38918ff5) {
            iVar23 = iVar3 + 1;
            iVar6 = iVar11;
          }
          iVar11 = iVar6;
        } while (iVar23 <= iVar11);
      }
      param_7 = (byte ***)(ulong)*(byte *)ppppbVar39;
      uVar48 = uVar47;
      if (*(byte *)ppppbVar39 == 8) {
        uVar48 = *(undefined4 *)((long)ppppbVar39 + 1);
      }
      *(undefined4 *)(*plVar2 + lVar19 * 0x28 + 0x20) = uVar48;
      param_6 = param_3;
      if ((*(char *)ppppbVar41 == '\f') &&
         (iVar11 = *(int *)((long)ppppbVar41 + 1) + -1, 0 < *(int *)((long)ppppbVar41 + 1))) {
        param_8 = *(long *****)(lVar13 + 0x20);
        param_7 = (byte ***)0x0;
        do {
          uVar29 = (uint)param_7;
          iVar23 = iVar11 + uVar29;
          if (iVar23 < 0) {
            iVar23 = iVar23 + 1;
          }
          iVar23 = iVar23 >> 1;
          puVar1 = (uint *)(*(long *)(lVar13 + 0x28) + (long)*(int *)((long)ppppbVar41 + 5) +
                           (long)iVar23 * 8);
          if (param_8[*puVar1] == (long ***)0xd049cb0ad) {
            uVar29 = puVar1[1];
            if (-1 < (int)uVar29) {
              param_6 = (byte ****)((long)ppppbVar41 + (long)(int)uVar29);
            }
            break;
          }
          iVar3 = iVar23 + -1;
          if (param_8[*puVar1] < (long ***)0xd049cb0ae) {
            uVar29 = iVar23 + 1;
            iVar3 = iVar11;
          }
          iVar11 = iVar3;
          param_7 = (byte ***)(ulong)uVar29;
        } while ((int)uVar29 <= iVar11);
      }
      uVar48 = uVar47;
      if (*(char *)param_6 == '\b') {
        uVar48 = *(undefined4 *)((long)param_6 + 1);
      }
      lVar13 = lVar19 * 0x28;
      lVar19 = lVar19 + 1;
      *(undefined4 *)(*plVar2 + lVar13 + 0x24) = uVar48;
      ppppbVar39 = (byte ****)(ulong)*pbVar37;
      if (*pbVar37 - 0xb < 2) {
        param_5 = (long ****)(ulong)*(uint *)(pbVar37 + 1);
        if ((int)*(uint *)(pbVar37 + 1) <= lVar19) break;
        goto LAB_7102bb37f8;
      }
      param_5 = (long ****)0x0;
    } while (lVar19 < 0);
  }
  pcVar12 = (char *)*plVar9;
  if ((*pcVar12 == '\f') && (iVar11 = *(int *)(pcVar12 + 1) + -1, 0 < *(int *)(pcVar12 + 1))) {
    local_b0 = *param_2;
    pbVar37 = &DAT_7104742dbb;
    iVar23 = 0;
    do {
      iVar3 = iVar11 + iVar23;
      if (iVar3 < 0) {
        iVar3 = iVar3 + 1;
      }
      iVar3 = iVar3 >> 1;
      puVar1 = (uint *)(*(long *)(local_b0 + 0x28) + (long)*(int *)(pcVar12 + 5) + (long)iVar3 * 8);
      uVar33 = *(ulong *)(*(long *)(local_b0 + 0x20) + (ulong)*puVar1 * 8);
      if (uVar33 == 0xd3a64e8b2) {
        uVar29 = puVar1[1];
        if ((int)uVar29 < 0) goto LAB_7102bb3f48;
        pbVar37 = (byte *)(pcVar12 + (int)uVar29);
        goto LAB_7102bb3f54;
      }
      iVar6 = iVar3 + -1;
      if (uVar33 < 0xd3a64e8b3) {
        iVar23 = iVar3 + 1;
        iVar6 = iVar11;
      }
      iVar11 = iVar6;
    } while (iVar23 <= iVar11);
    local_b0 = 0;
  }
  else {
LAB_7102bb3f48:
    local_b0 = 0;
    pbVar37 = &DAT_7104742dbb;
  }
LAB_7102bb3f54:
  if (*pbVar37 - 0xb < 2) {
    iVar11 = *(int *)(pbVar37 + 1);
  }
  else {
    iVar11 = 0;
  }
  puVar38 = *(undefined8 **)(param_1 + 0x38);
  puVar25 = *(undefined8 **)(param_1 + 0x40);
  uVar33 = (ulong)iVar11;
  lVar18 = (long)puVar25 - (long)puVar38 >> 4;
  if ((ulong)(lVar18 * -0x5555555555555555) < uVar33) {
    uVar24 = uVar33 + lVar18 * 0x5555555555555555;
    if ((ulong)((*(long *)(param_1 + 0x48) - (long)puVar25 >> 4) * -0x5555555555555555) < uVar24) {
      if (iVar11 < 0) goto LAB_7102bbde84;
      lVar19 = *(long *)(param_1 + 0x48) - (long)puVar38 >> 4;
      if ((ulong)(lVar19 * -0x5555555555555555) < 0x2aaaaaaaaaaaaaa) {
        uVar14 = lVar19 * 0x5555555555555556;
        uVar20 = uVar33;
        if (uVar33 <= uVar14) {
          uVar20 = uVar14;
        }
        if (uVar20 != 0) goto LAB_7102bb40bc;
        lVar19 = 0;
      }
      else {
        uVar20 = 0x555555555555555;
LAB_7102bb40bc:
        ppplVar15 = (long ***)(uVar20 * 0x30);
        if (ppplVar15 == (long ***)0x0) {
          ppplVar15 = (long ***)0x1;
        }
        lVar19 = FUN_710392e290(0x10,ppplVar15,(long ****)param_3,ppppbVar39,param_5,param_6,param_7
                                ,param_8);
        if (lVar19 == 0) {
          if (DAT_7105332f00 != (long *)0x0) {
            local_84 = 0;
            pppplVar10 = &local_98;
            local_98 = ppplVar15;
            uVar14 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_84);
            if (((uVar14 & 1) != 0) &&
               (lVar19 = FUN_710392e290(0x10,ppplVar15,pppplVar10,ppppbVar39,param_5,param_6,param_7
                                        ,param_8), lVar19 != 0)) goto LAB_7102bb412c;
          }
          lVar19 = 0;
        }
      }
LAB_7102bb412c:
      puVar40 = (undefined8 *)(lVar19 + lVar18 * 0x10);
      lVar18 = lVar19 + uVar20 * 0x30;
      param_3 = (byte ****)(uVar24 * 0x30);
      memset(puVar40,0,(size_t)param_3);
      lVar19 = lVar19 + uVar33 * 0x30;
      if (puVar25 == puVar38) {
        *(undefined8 **)(param_1 + 0x38) = puVar40;
        *(long *)(param_1 + 0x40) = lVar19;
        *(long *)(param_1 + 0x48) = lVar18;
      }
      else {
        do {
          puVar26 = puVar25 + -6;
          uVar30 = puVar25[-5];
          uVar27 = puVar25[-4];
          puVar36 = puVar40 + -6;
          *puVar36 = *puVar26;
          puVar40[-5] = uVar30;
          puVar40[-4] = uVar27;
          uVar27 = puVar25[-1];
          uVar30 = puVar25[-2];
          *puVar26 = 0;
          puVar25[-5] = 0;
          puVar25[-4] = 0;
          puVar40[-3] = puVar25[-3];
          puVar40[-2] = uVar30;
          puVar40[-1] = uVar27;
          puVar25[-3] = 0;
          puVar25[-2] = 0;
          puVar25[-1] = 0;
          puVar40 = puVar36;
          puVar25 = puVar26;
        } while (puVar38 != puVar26);
        puVar38 = *(undefined8 **)(param_1 + 0x38);
        puVar25 = *(undefined8 **)(param_1 + 0x40);
        *(undefined8 **)(param_1 + 0x38) = puVar36;
        *(long *)(param_1 + 0x40) = lVar19;
        *(long *)(param_1 + 0x48) = lVar18;
        while (puVar40 = puVar25, puVar40 != puVar38) {
          if (((*(byte *)(puVar40 + -3) & 1) != 0) && (puVar40[-1] != 0)) {
            FUN_710392eb40(puVar40[-1]);
          }
          puVar25 = puVar40 + -6;
          if (((*(byte *)(puVar40 + -6) & 1) != 0) && (puVar40[-4] != 0)) {
            FUN_710392eb40(puVar40[-4]);
          }
        }
      }
      if (puVar38 != (undefined8 *)0x0) {
        FUN_710392eb40((ulong)puVar38);
      }
    }
    else {
      uVar33 = uVar24;
      if ((uVar24 & 1) != 0) {
        puVar25[4] = 0;
        puVar25[5] = 0;
        puVar25[2] = 0;
        puVar25[3] = 0;
        *puVar25 = 0;
        puVar25[1] = 0;
        puVar25 = (undefined8 *)(*(long *)(param_1 + 0x40) + 0x30);
        uVar33 = uVar24 - 1;
        *(undefined8 **)(param_1 + 0x40) = puVar25;
      }
      if (uVar24 != 1) {
        do {
          puVar25[4] = 0;
          puVar25[5] = 0;
          uVar33 = uVar33 - 2;
          puVar25[2] = 0;
          puVar25[3] = 0;
          *puVar25 = 0;
          puVar25[1] = 0;
          lVar18 = *(long *)(param_1 + 0x40);
          *(long *)(param_1 + 0x40) = lVar18 + 0x30;
          *(undefined8 *)(lVar18 + 0x50) = 0;
          *(undefined8 *)(lVar18 + 0x58) = 0;
          *(undefined8 *)(lVar18 + 0x40) = 0;
          *(undefined8 *)(lVar18 + 0x48) = 0;
          *(undefined8 *)(lVar18 + 0x30) = 0;
          *(undefined8 *)(lVar18 + 0x38) = 0;
          puVar25 = (undefined8 *)(*(long *)(param_1 + 0x40) + 0x30);
          *(undefined8 **)(param_1 + 0x40) = puVar25;
        } while (uVar33 != 0);
      }
    }
  }
  else if (lVar18 * -0x5555555555555555 - uVar33 != 0) {
    while (puVar40 = puVar25, puVar38 + uVar33 * 6 != puVar40) {
      if (((*(byte *)(puVar40 + -3) & 1) != 0) && (puVar40[-1] != 0)) {
        FUN_710392eb40(puVar40[-1]);
      }
      puVar25 = puVar40 + -6;
      if (((*(byte *)(puVar40 + -6) & 1) != 0) && (puVar40[-4] != 0)) {
        FUN_710392eb40(puVar40[-4]);
      }
    }
    *(undefined8 **)(param_1 + 0x40) = puVar38 + uVar33 * 6;
  }
  uVar29 = (uint)*pbVar37;
  if ((*pbVar37 - 0xb < 2) && (0 < *(int *)(pbVar37 + 1))) {
    lVar18 = 0;
    do {
      iVar11 = (int)lVar18;
      if (iVar11 < 0) {
LAB_7102bb4284:
        lVar19 = 0;
        pbVar35 = &DAT_7104742dbb;
      }
      else {
        lVar19 = 0;
        pbVar35 = &DAT_7104742dbb;
        if (uVar29 == 0xb) {
          if (*(int *)(pbVar37 + 1) <= iVar11) goto LAB_7102bb4284;
          pbVar35 = pbVar37 + *(int *)(pbVar37 + (long)iVar11 * 4 + 5);
          lVar19 = local_b0;
        }
      }
      if ((*pbVar35 == 0xc) && (iVar11 = *(int *)(pbVar35 + 1) + -1, 0 < *(int *)(pbVar35 + 1))) {
        iVar23 = 0;
        do {
          iVar3 = iVar11 + iVar23;
          if (iVar3 < 0) {
            iVar3 = iVar3 + 1;
          }
          iVar3 = iVar3 >> 1;
          uVar33 = *(ulong *)(*(long *)(lVar19 + 0x20) +
                             (ulong)*(uint *)(*(long *)(lVar19 + 0x28) + (long)*(int *)(pbVar35 + 5)
                                             + (long)iVar3 * 8) * 8);
          if (uVar33 == 0xa737452e1) break;
          iVar6 = iVar3 + -1;
          if (uVar33 < 0xa737452e2) {
            iVar23 = iVar3 + 1;
            iVar6 = iVar11;
          }
          iVar11 = iVar6;
        } while (iVar23 <= iVar11);
      }
      std::string::assign((char *)(*(long *)(param_1 + 0x38) + lVar18 * 0x30));
      if ((*pbVar35 == 0xc) && (iVar11 = *(int *)(pbVar35 + 1) + -1, 0 < *(int *)(pbVar35 + 1))) {
        iVar23 = 0;
        do {
          iVar3 = iVar11 + iVar23;
          if (iVar3 < 0) {
            iVar3 = iVar3 + 1;
          }
          iVar3 = iVar3 >> 1;
          uVar33 = *(ulong *)(*(long *)(lVar19 + 0x20) +
                             (ulong)*(uint *)(*(long *)(lVar19 + 0x28) + (long)*(int *)(pbVar35 + 5)
                                             + (long)iVar3 * 8) * 8);
          if (uVar33 == 0xc4f5c64e2) break;
          iVar6 = iVar3 + -1;
          if (uVar33 < 0xc4f5c64e3) {
            iVar23 = iVar3 + 1;
            iVar6 = iVar11;
          }
          iVar11 = iVar6;
        } while (iVar23 <= iVar11);
      }
      std::string::assign((char *)(*(long *)(param_1 + 0x38) + lVar18 * 0x30 + 0x18));
      uVar29 = (uint)*pbVar37;
      lVar18 = lVar18 + 1;
      if (uVar29 - 0xb < 2) {
        iVar11 = *(int *)(pbVar37 + 1);
      }
      else {
        iVar11 = 0;
      }
    } while (lVar18 < iVar11);
  }
  pcVar12 = (char *)*plVar9;
  if ((*pcVar12 == '\f') && (iVar11 = *(int *)(pcVar12 + 1) + -1, 0 < *(int *)(pcVar12 + 1))) {
    lVar18 = *param_2;
    iVar23 = 0;
    pbVar37 = &DAT_7104742dbb;
    do {
      iVar3 = iVar11 + iVar23;
      if (iVar3 < 0) {
        iVar3 = iVar3 + 1;
      }
      iVar3 = iVar3 >> 1;
      puVar1 = (uint *)(*(long *)(lVar18 + 0x28) + (long)*(int *)(pcVar12 + 5) + (long)iVar3 * 8);
      uVar33 = *(ulong *)(*(long *)(lVar18 + 0x20) + (ulong)*puVar1 * 8);
      if (uVar33 == 0x93426f62f) {
        uVar29 = puVar1[1];
        if ((int)uVar29 < 0) goto LAB_7102bb44ac;
        pbVar37 = (byte *)(pcVar12 + (int)uVar29);
        goto LAB_7102bb44b8;
      }
      iVar6 = iVar3 + -1;
      if (uVar33 < 0x93426f630) {
        iVar23 = iVar3 + 1;
        iVar6 = iVar11;
      }
      iVar11 = iVar6;
    } while (iVar23 <= iVar11);
    lVar18 = 0;
  }
  else {
LAB_7102bb44ac:
    lVar18 = 0;
    pbVar37 = &DAT_7104742dbb;
  }
LAB_7102bb44b8:
  if (*pbVar37 - 0xb < 2) {
    iVar11 = *(int *)(pbVar37 + 1);
  }
  else {
    iVar11 = 0;
  }
  uVar33 = (ulong)iVar11;
  pvVar43 = *(void **)(param_1 + 0x50);
  puVar25 = *(undefined8 **)(param_1 + 0x58);
  ppppbVar41 = (byte ****)((long)puVar25 - (long)pvVar43);
  lVar19 = (long)ppppbVar41 >> 2;
  plVar2 = (long *)(param_1 + 0x50);
  if ((ulong)(lVar19 * -0x3333333333333333) < uVar33) {
    uVar24 = uVar33 + lVar19 * 0x3333333333333333;
    if ((ulong)((*(long *)(param_1 + 0x60) - (long)puVar25 >> 2) * -0x3333333333333333) < uVar24) {
      if (iVar11 < 0) goto LAB_7102bbde84;
      lVar13 = *(long *)(param_1 + 0x60) - (long)pvVar43 >> 2;
      if ((ulong)(lVar13 * -0x3333333333333333) < 0x666666666666666) {
        uVar14 = lVar13 * -0x6666666666666666;
        uVar20 = uVar33;
        if (uVar33 <= uVar14) {
          uVar20 = uVar14;
        }
        if (uVar20 != 0) goto LAB_7102bb45f8;
        lVar13 = 0;
      }
      else {
        uVar20 = 0xccccccccccccccc;
LAB_7102bb45f8:
        ppplVar15 = (long ***)(uVar20 * 0x14);
        if (ppplVar15 == (long ***)0x0) {
          ppplVar15 = (long ***)0x1;
        }
        lVar13 = FUN_710392e290(0x10,ppplVar15,(long ****)param_3,ppppbVar39,param_5,param_6,param_7
                                ,param_8);
        if (lVar13 == 0) {
          if (DAT_7105332f00 != (long *)0x0) {
            local_84 = 0;
            pppplVar10 = &local_98;
            local_98 = ppplVar15;
            uVar14 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_84);
            if (((uVar14 & 1) != 0) &&
               (lVar13 = FUN_710392e290(0x10,ppplVar15,pppplVar10,ppppbVar39,param_5,param_6,param_7
                                        ,param_8), lVar13 != 0)) goto LAB_7102bb4668;
          }
          lVar13 = 0;
        }
      }
LAB_7102bb4668:
      pvVar45 = (void *)(lVar13 + lVar19 * 4);
      param_3 = (byte ****)(uVar24 * 0x14);
      memset(pvVar45,0,(size_t)param_3);
      lVar19 = SUB168(SEXT816((long)ppppbVar41) * SEXT816(-0x6666666666666667),8);
      pvVar45 = (void *)((long)pvVar45 + ((lVar19 >> 3) - (lVar19 >> 0x3f)) * 0x14);
      if (0 < (long)ppppbVar41) {
        memcpy(pvVar45,pvVar43,(size_t)ppppbVar41);
        param_3 = ppppbVar41;
      }
      *(ulong *)(param_1 + 0x60) = lVar13 + uVar20 * 0x14;
      *(void **)(param_1 + 0x50) = pvVar45;
      *(ulong *)(param_1 + 0x58) = lVar13 + uVar33 * 0x14;
      if (pvVar43 != (void *)0x0) {
        FUN_710392eb40((ulong)pvVar43);
      }
    }
    else {
      uVar33 = uVar24;
      if ((uVar24 & 1) != 0) {
        *(undefined4 *)(puVar25 + 2) = 0;
        *puVar25 = 0;
        puVar25[1] = 0;
        puVar25 = (undefined8 *)(*(long *)(param_1 + 0x58) + 0x14);
        uVar33 = uVar24 - 1;
        *(undefined8 **)(param_1 + 0x58) = puVar25;
      }
      if (uVar24 != 1) {
        do {
          *(undefined4 *)(puVar25 + 2) = 0;
          *puVar25 = 0;
          puVar25[1] = 0;
          lVar19 = *(long *)(param_1 + 0x58);
          *(long *)(param_1 + 0x58) = lVar19 + 0x14;
          *(undefined4 *)(lVar19 + 0x24) = 0;
          *(undefined8 *)(lVar19 + 0x1c) = 0;
          *(undefined8 *)(lVar19 + 0x14) = 0;
          puVar25 = (undefined8 *)(*(long *)(param_1 + 0x58) + 0x14);
          uVar33 = uVar33 - 2;
          *(undefined8 **)(param_1 + 0x58) = puVar25;
        } while (uVar33 != 0);
      }
    }
  }
  else if (lVar19 * -0x3333333333333333 - uVar33 != 0) {
    *(void **)(param_1 + 0x58) = (void *)((long)pvVar43 + uVar33 * 0x14);
  }
  uVar29 = (uint)*pbVar37;
  if ((*pbVar37 - 0xb < 2) && (0 < *(int *)(pbVar37 + 1))) {
    uVar46 = 0;
    lVar19 = 0;
LAB_7102bb474c:
    do {
      iVar11 = (int)lVar19;
      if (iVar11 < 0) {
LAB_7102bb4784:
        lVar13 = 0;
        pbVar35 = &DAT_7104742dbb;
      }
      else {
        pbVar35 = &DAT_7104742dbb;
        lVar13 = 0;
        if (uVar29 == 0xb) {
          if (*(int *)(pbVar37 + 1) <= iVar11) goto LAB_7102bb4784;
          pbVar35 = pbVar37 + *(int *)(pbVar37 + (long)iVar11 * 4 + 5);
          lVar13 = lVar18;
        }
      }
      pbVar8 = &DAT_7104742dbb;
      if ((*pbVar35 == 0xc) && (uVar29 = *(int *)(pbVar35 + 1) - 1, 0 < *(int *)(pbVar35 + 1))) {
        param_3 = *(byte *****)(lVar13 + 0x20);
        iVar11 = 0;
        ppppbVar39 = (byte ****)(*(long *)(lVar13 + 0x28) + (long)*(int *)(pbVar35 + 5));
        do {
          iVar23 = uVar29 + iVar11;
          if (iVar23 < 0) {
            iVar23 = iVar23 + 1;
          }
          uVar4 = iVar23 >> 1;
          param_5 = (long ****)(ulong)uVar4;
          param_6 = ppppbVar39 + (int)uVar4;
          param_7 = param_3[*(uint *)param_6];
          if (param_7 == (byte ***)0x1561f7ad54) {
            if (-1 < (int)*(uint *)((long)param_6 + 4)) {
              pbVar8 = pbVar35 + (int)*(uint *)((long)param_6 + 4);
            }
            break;
          }
          param_6 = (byte ****)(ulong)(uVar4 - 1);
          uVar7 = uVar4 - 1;
          if (param_7 < (byte ***)0x1561f7ad55) {
            iVar11 = uVar4 + 1;
            uVar7 = uVar29;
          }
          uVar29 = uVar7;
        } while (iVar11 <= (int)uVar29);
      }
      uVar47 = uVar46;
      if (*pbVar8 == 8) {
        uVar47 = *(undefined4 *)(pbVar8 + 1);
      }
      *(undefined4 *)(*plVar2 + lVar19 * 0x14) = uVar47;
      pbVar8 = &DAT_7104742dbb;
      if ((*pbVar35 == 0xc) && (uVar29 = *(int *)(pbVar35 + 1) - 1, 0 < *(int *)(pbVar35 + 1))) {
        param_3 = *(byte *****)(lVar13 + 0x20);
        iVar11 = 0;
        ppppbVar39 = (byte ****)(*(long *)(lVar13 + 0x28) + (long)*(int *)(pbVar35 + 5));
        do {
          iVar23 = uVar29 + iVar11;
          if (iVar23 < 0) {
            iVar23 = iVar23 + 1;
          }
          uVar4 = iVar23 >> 1;
          param_5 = (long ****)(ulong)uVar4;
          param_6 = ppppbVar39 + (int)uVar4;
          param_7 = param_3[*(uint *)param_6];
          if (param_7 == (byte ***)0x1362c93092) {
            if (-1 < (int)*(uint *)((long)param_6 + 4)) {
              pbVar8 = pbVar35 + (int)*(uint *)((long)param_6 + 4);
            }
            break;
          }
          param_6 = (byte ****)(ulong)(uVar4 - 1);
          uVar7 = uVar4 - 1;
          if (param_7 < (byte ***)0x1362c93093) {
            iVar11 = uVar4 + 1;
            uVar7 = uVar29;
          }
          uVar29 = uVar7;
        } while (iVar11 <= (int)uVar29);
      }
      uVar47 = 0x443b8000;
      if (*pbVar8 == 8) {
        uVar47 = *(undefined4 *)(pbVar8 + 1);
      }
      *(undefined4 *)(*plVar2 + lVar19 * 0x14 + 4) = uVar47;
      pbVar8 = &DAT_7104742dbb;
      if ((*pbVar35 == 0xc) && (uVar29 = *(int *)(pbVar35 + 1) - 1, 0 < *(int *)(pbVar35 + 1))) {
        param_3 = *(byte *****)(lVar13 + 0x20);
        iVar11 = 0;
        ppppbVar39 = (byte ****)(*(long *)(lVar13 + 0x28) + (long)*(int *)(pbVar35 + 5));
        do {
          iVar23 = uVar29 + iVar11;
          if (iVar23 < 0) {
            iVar23 = iVar23 + 1;
          }
          uVar4 = iVar23 >> 1;
          param_5 = (long ****)(ulong)uVar4;
          param_6 = ppppbVar39 + (int)uVar4;
          param_7 = param_3[*(uint *)param_6];
          if (param_7 == (byte ***)0xfe93af576) {
            if (-1 < (int)*(uint *)((long)param_6 + 4)) {
              pbVar8 = pbVar35 + (int)*(uint *)((long)param_6 + 4);
            }
            break;
          }
          param_6 = (byte ****)(ulong)(uVar4 - 1);
          uVar7 = uVar4 - 1;
          if (param_7 < (byte ***)0xfe93af577) {
            iVar11 = uVar4 + 1;
            uVar7 = uVar29;
          }
          uVar29 = uVar7;
        } while (iVar11 <= (int)uVar29);
      }
      uVar47 = uVar46;
      if (*pbVar8 == 8) {
        uVar47 = *(undefined4 *)(pbVar8 + 1);
      }
      *(undefined4 *)(*plVar2 + lVar19 * 0x14 + 8) = uVar47;
      pbVar8 = &DAT_7104742dbb;
      if ((*pbVar35 == 0xc) && (uVar29 = *(int *)(pbVar35 + 1) - 1, 0 < *(int *)(pbVar35 + 1))) {
        param_3 = *(byte *****)(lVar13 + 0x20);
        iVar11 = 0;
        ppppbVar39 = (byte ****)(*(long *)(lVar13 + 0x28) + (long)*(int *)(pbVar35 + 5));
        do {
          iVar23 = uVar29 + iVar11;
          if (iVar23 < 0) {
            iVar23 = iVar23 + 1;
          }
          uVar4 = iVar23 >> 1;
          param_5 = (long ****)(ulong)uVar4;
          param_6 = ppppbVar39 + (int)uVar4;
          param_7 = param_3[*(uint *)param_6];
          if (param_7 == (byte ***)0x11aeaf1fd0) {
            if (-1 < (int)*(uint *)((long)param_6 + 4)) {
              pbVar8 = pbVar35 + (int)*(uint *)((long)param_6 + 4);
            }
            break;
          }
          param_6 = (byte ****)(ulong)(uVar4 - 1);
          uVar7 = uVar4 - 1;
          if (param_7 < (byte ***)0x11aeaf1fd1) {
            iVar11 = uVar4 + 1;
            uVar7 = uVar29;
          }
          uVar29 = uVar7;
        } while (iVar11 <= (int)uVar29);
      }
      uVar47 = uVar46;
      if (*pbVar8 == 8) {
        uVar47 = *(undefined4 *)(pbVar8 + 1);
      }
      *(undefined4 *)(*plVar2 + lVar19 * 0x14 + 0xc) = uVar47;
      pbVar8 = &DAT_7104742dbb;
      if ((*pbVar35 == 0xc) && (uVar29 = *(int *)(pbVar35 + 1) - 1, 0 < *(int *)(pbVar35 + 1))) {
        param_3 = *(byte *****)(lVar13 + 0x20);
        iVar11 = 0;
        do {
          iVar23 = uVar29 + iVar11;
          if (iVar23 < 0) {
            iVar23 = iVar23 + 1;
          }
          uVar4 = iVar23 >> 1;
          ppppbVar39 = (byte ****)(ulong)uVar4;
          param_5 = (long ****)
                    (*(long *)(lVar13 + 0x28) + (long)*(int *)(pbVar35 + 5) + (long)(int)uVar4 * 8);
          param_6 = (byte ****)param_3[*(uint *)param_5];
          if (param_6 == (byte ****)0x11321bd2e2) {
            if (-1 < (int)*(uint *)((long)param_5 + 4)) {
              pbVar8 = pbVar35 + (int)*(uint *)((long)param_5 + 4);
            }
            break;
          }
          param_5 = (long ****)(ulong)(uVar4 - 1);
          uVar7 = uVar4 - 1;
          if (param_6 < (byte ****)0x11321bd2e3) {
            iVar11 = uVar4 + 1;
            uVar7 = uVar29;
          }
          uVar29 = uVar7;
        } while (iVar11 <= (int)uVar29);
      }
      uVar47 = uVar46;
      if (*pbVar8 == 8) {
        uVar47 = *(undefined4 *)(pbVar8 + 1);
      }
      lVar13 = lVar19 * 0x14;
      lVar19 = lVar19 + 1;
      *(undefined4 *)(*plVar2 + lVar13 + 0x10) = uVar47;
      uVar29 = (uint)*pbVar37;
      if (uVar29 - 0xb < 2) {
        if (*(int *)(pbVar37 + 1) <= lVar19) break;
        goto LAB_7102bb474c;
      }
    } while (lVar19 < 0);
  }
  pcVar12 = (char *)*plVar9;
  if ((*pcVar12 == '\f') && (iVar11 = *(int *)(pcVar12 + 1) + -1, 0 < *(int *)(pcVar12 + 1))) {
    lVar18 = *param_2;
    iVar23 = 0;
    pbVar37 = &DAT_7104742dbb;
    do {
      iVar3 = iVar11 + iVar23;
      if (iVar3 < 0) {
        iVar3 = iVar3 + 1;
      }
      iVar3 = iVar3 >> 1;
      puVar1 = (uint *)(*(long *)(lVar18 + 0x28) + (long)*(int *)(pcVar12 + 5) + (long)iVar3 * 8);
      uVar33 = *(ulong *)(*(long *)(lVar18 + 0x20) + (ulong)*puVar1 * 8);
      if (uVar33 == 0xdc274454b) {
        uVar29 = puVar1[1];
        if ((int)uVar29 < 0) goto LAB_7102bb4b78;
        pbVar37 = (byte *)(pcVar12 + (int)uVar29);
        goto LAB_7102bb4b84;
      }
      iVar6 = iVar3 + -1;
      if (uVar33 < 0xdc274454c) {
        iVar23 = iVar3 + 1;
        iVar6 = iVar11;
      }
      iVar11 = iVar6;
    } while (iVar23 <= iVar11);
    lVar18 = 0;
  }
  else {
LAB_7102bb4b78:
    lVar18 = 0;
    pbVar37 = &DAT_7104742dbb;
  }
LAB_7102bb4b84:
  if (*pbVar37 - 0xb < 2) {
    iVar11 = *(int *)(pbVar37 + 1);
  }
  else {
    iVar11 = 0;
  }
  uVar33 = (ulong)iVar11;
  pvVar43 = *(void **)(param_1 + 0x68);
  puVar25 = *(undefined8 **)(param_1 + 0x70);
  sVar42 = (long)puVar25 - (long)pvVar43;
  uVar24 = (long)sVar42 >> 3;
  if (uVar24 < uVar33) {
    uVar20 = uVar33 - uVar24;
    if ((ulong)(*(long *)(param_1 + 0x78) - (long)puVar25 >> 3) < uVar20) {
      if (iVar11 < 0) goto LAB_7102bbde84;
      lVar19 = *(long *)(param_1 + 0x78) - (long)pvVar43;
      if ((ulong)(lVar19 >> 3) < 0xfffffffffffffff) {
        uVar16 = lVar19 >> 2;
        uVar14 = uVar33;
        if (uVar33 <= uVar16) {
          uVar14 = uVar16;
        }
        if (uVar14 != 0) {
          if (uVar14 >> 0x3d != 0) goto LAB_7102bbb008;
          goto LAB_7102bb4c78;
        }
LAB_7102bb4cdc:
        pvVar45 = (void *)0x0;
      }
      else {
        uVar14 = 0x1fffffffffffffff;
LAB_7102bb4c78:
        ppplVar15 = (long ***)(uVar14 * 8);
        if (ppplVar15 == (long ***)0x0) {
          ppplVar15 = (long ***)0x1;
        }
        pvVar45 = (void *)FUN_710392e290(0x10,ppplVar15,(long ****)param_3,ppppbVar39,param_5,
                                         param_6,param_7,param_8);
        if (pvVar45 == (void *)0x0) {
          if (DAT_7105332f00 != (long *)0x0) {
            local_84 = 0;
            pppplVar10 = &local_98;
            local_98 = ppplVar15;
            uVar16 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_84);
            if (((uVar16 & 1) != 0) &&
               (pvVar45 = (void *)FUN_710392e290(0x10,ppplVar15,pppplVar10,ppppbVar39,param_5,
                                                 param_6,param_7,param_8), pvVar45 != (void *)0x0))
            goto LAB_7102bb4ce0;
          }
          goto LAB_7102bb4cdc;
        }
      }
LAB_7102bb4ce0:
      memset((void *)((long)pvVar45 + uVar24 * 8),0,uVar20 * 8);
      if (0 < (long)sVar42) {
        memcpy(pvVar45,pvVar43,sVar42);
      }
      *(void **)(param_1 + 0x68) = pvVar45;
      *(void **)(param_1 + 0x70) = (void *)((long)pvVar45 + uVar33 * 8);
      *(void **)(param_1 + 0x78) = (void *)((long)pvVar45 + uVar14 * 8);
      if (pvVar43 != (void *)0x0) {
        FUN_710392eb40((ulong)pvVar43);
      }
    }
    else {
      uVar33 = uVar20;
      if ((uVar20 & 1) != 0) {
        *puVar25 = 0;
        puVar25 = (undefined8 *)(*(long *)(param_1 + 0x70) + 8);
        uVar33 = uVar20 - 1;
        *(undefined8 **)(param_1 + 0x70) = puVar25;
      }
      if (uVar20 != 1) {
        do {
          *puVar25 = 0;
          lVar19 = *(long *)(param_1 + 0x70);
          *(long *)(param_1 + 0x70) = lVar19 + 8;
          *(undefined8 *)(lVar19 + 8) = 0;
          puVar25 = (undefined8 *)(*(long *)(param_1 + 0x70) + 8);
          uVar33 = uVar33 - 2;
          *(undefined8 **)(param_1 + 0x70) = puVar25;
        } while (uVar33 != 0);
      }
    }
  }
  else if (uVar24 != uVar33) {
    *(void **)(param_1 + 0x70) = (void *)((long)pvVar43 + uVar33 * 8);
  }
  uVar29 = (uint)*pbVar37;
  pppplVar10 = (long ****)0xbf6dc4096;
  if ((*pbVar37 - 0xb < 2) && (0 < *(int *)(pbVar37 + 1))) {
    lVar19 = 0;
LAB_7102bb4d80:
    do {
      iVar11 = (int)lVar19;
      if (iVar11 < 0) {
LAB_7102bb4db8:
        lVar13 = 0;
        pbVar35 = &DAT_7104742dbb;
      }
      else {
        pbVar35 = &DAT_7104742dbb;
        lVar13 = 0;
        if (uVar29 == 0xb) {
          if (*(int *)(pbVar37 + 1) <= iVar11) goto LAB_7102bb4db8;
          pbVar35 = pbVar37 + *(int *)(pbVar37 + (long)iVar11 * 4 + 5);
          lVar13 = lVar18;
        }
      }
      pbVar8 = &DAT_7104742dbb;
      if ((*pbVar35 == 0xc) && (iVar11 = *(int *)(pbVar35 + 1) + -1, 0 < *(int *)(pbVar35 + 1))) {
        iVar23 = 0;
        do {
          iVar3 = iVar11 + iVar23;
          if (iVar3 < 0) {
            iVar3 = iVar3 + 1;
          }
          iVar3 = iVar3 >> 1;
          puVar1 = (uint *)(*(long *)(lVar13 + 0x28) + (long)*(int *)(pbVar35 + 5) + (long)iVar3 * 8
                           );
          uVar33 = *(ulong *)(*(long *)(lVar13 + 0x20) + (ulong)*puVar1 * 8);
          if (uVar33 == 0xbf6dc4096) {
            uVar29 = puVar1[1];
            if (-1 < (int)uVar29) {
              pbVar8 = pbVar35 + (int)uVar29;
            }
            break;
          }
          iVar6 = iVar3 + -1;
          if (uVar33 < 0xbf6dc4097) {
            iVar23 = iVar3 + 1;
            iVar6 = iVar11;
          }
          iVar11 = iVar6;
        } while (iVar23 <= iVar11);
      }
      uVar46 = 0;
      if (*pbVar8 == 8) {
        uVar46 = *(undefined4 *)(pbVar8 + 1);
      }
      *(undefined4 *)(*(long *)(param_1 + 0x68) + lVar19 * 8) = uVar46;
      pbVar8 = &DAT_7104742dbb;
      if ((*pbVar35 == 0xc) && (iVar11 = *(int *)(pbVar35 + 1) + -1, 0 < *(int *)(pbVar35 + 1))) {
        iVar23 = 0;
        do {
          iVar3 = iVar11 + iVar23;
          if (iVar3 < 0) {
            iVar3 = iVar3 + 1;
          }
          iVar3 = iVar3 >> 1;
          puVar1 = (uint *)(*(long *)(lVar13 + 0x28) + (long)*(int *)(pbVar35 + 5) + (long)iVar3 * 8
                           );
          uVar33 = *(ulong *)(*(long *)(lVar13 + 0x20) + (ulong)*puVar1 * 8);
          if (uVar33 == 0x9c4677bc8) {
            uVar29 = puVar1[1];
            if (-1 < (int)uVar29) {
              pbVar8 = pbVar35 + (int)uVar29;
            }
            break;
          }
          iVar6 = iVar3 + -1;
          if (uVar33 < 0x9c4677bc9) {
            iVar23 = iVar3 + 1;
            iVar6 = iVar11;
          }
          iVar11 = iVar6;
        } while (iVar23 <= iVar11);
      }
      uVar46 = 0x44390000;
      if (*pbVar8 == 8) {
        uVar46 = *(undefined4 *)(pbVar8 + 1);
      }
      lVar13 = lVar19 * 8;
      lVar19 = lVar19 + 1;
      *(undefined4 *)(*(long *)(param_1 + 0x68) + lVar13 + 4) = uVar46;
      uVar29 = (uint)*pbVar37;
      if (uVar29 - 0xb < 2) {
        if (*(int *)(pbVar37 + 1) <= lVar19) break;
        goto LAB_7102bb4d80;
      }
    } while (lVar19 < 0);
  }
  pcVar12 = (char *)*plVar9;
  if ((*pcVar12 == '\f') && (iVar11 = *(int *)(pcVar12 + 1) + -1, 0 < *(int *)(pcVar12 + 1))) {
    iVar23 = 0;
    pcVar22 = "";
    do {
      iVar3 = iVar11 + iVar23;
      if (iVar3 < 0) {
        iVar3 = iVar3 + 1;
      }
      iVar3 = iVar3 >> 1;
      puVar1 = (uint *)(*(long *)(*param_2 + 0x28) + (long)*(int *)(pcVar12 + 5) + (long)iVar3 * 8);
      uVar33 = *(ulong *)(*(long *)(*param_2 + 0x20) + (ulong)*puVar1 * 8);
      if (uVar33 == 0x19c4655074) {
        uVar29 = puVar1[1];
        if ((int)uVar29 < 0) goto LAB_7102bb4fc8;
        pcVar22 = pcVar12 + (int)uVar29;
        break;
      }
      iVar6 = iVar3 + -1;
      if (uVar33 < 0x19c4655075) {
        iVar23 = iVar3 + 1;
        iVar6 = iVar11;
      }
      iVar11 = iVar6;
    } while (iVar23 <= iVar11);
  }
  else {
LAB_7102bb4fc8:
    pcVar22 = "";
  }
  if (*pcVar22 == '\b') {
    uVar46 = *(undefined4 *)(pcVar22 + 1);
  }
  else {
    uVar46 = 0x447a0000;
  }
  *(undefined4 *)(param_1 + 0x80) = uVar46;
  pcVar12 = (char *)*plVar9;
  if ((*pcVar12 == '\f') && (iVar11 = *(int *)(pcVar12 + 1) + -1, 0 < *(int *)(pcVar12 + 1))) {
    iVar23 = 0;
    pcVar22 = "";
    do {
      iVar3 = iVar11 + iVar23;
      if (iVar3 < 0) {
        iVar3 = iVar3 + 1;
      }
      iVar3 = iVar3 >> 1;
      puVar1 = (uint *)(*(long *)(*param_2 + 0x28) + (long)*(int *)(pcVar12 + 5) + (long)iVar3 * 8);
      uVar33 = *(ulong *)(*(long *)(*param_2 + 0x20) + (ulong)*puVar1 * 8);
      if (uVar33 == 0x17f8a2abd0) {
        uVar29 = puVar1[1];
        if ((int)uVar29 < 0) goto LAB_7102bb508c;
        pcVar22 = pcVar12 + (int)uVar29;
        break;
      }
      iVar6 = iVar3 + -1;
      if (uVar33 < 0x17f8a2abd1) {
        iVar23 = iVar3 + 1;
        iVar6 = iVar11;
      }
      iVar11 = iVar6;
    } while (iVar23 <= iVar11);
  }
  else {
LAB_7102bb508c:
    pcVar22 = "";
  }
  if (*pcVar22 == '\b') {
    uVar46 = *(undefined4 *)(pcVar22 + 1);
  }
  else {
    uVar46 = 0x451e2000;
  }
  *(undefined4 *)(param_1 + 0x84) = uVar46;
  pcVar12 = (char *)*plVar9;
  if ((*pcVar12 == '\f') && (iVar11 = *(int *)(pcVar12 + 1) + -1, 0 < *(int *)(pcVar12 + 1))) {
    lVar18 = *param_2;
    iVar23 = 0;
    pbVar37 = &DAT_7104742dbb;
    do {
      iVar3 = iVar11 + iVar23;
      if (iVar3 < 0) {
        iVar3 = iVar3 + 1;
      }
      iVar3 = iVar3 >> 1;
      puVar1 = (uint *)(*(long *)(lVar18 + 0x28) + (long)*(int *)(pcVar12 + 5) + (long)iVar3 * 8);
      uVar33 = *(ulong *)(*(long *)(lVar18 + 0x20) + (ulong)*puVar1 * 8);
      if (uVar33 == 0x1429315824) {
        uVar29 = puVar1[1];
        if ((int)uVar29 < 0) goto LAB_7102bb5154;
        pbVar37 = (byte *)(pcVar12 + (int)uVar29);
        goto LAB_7102bb5160;
      }
      iVar6 = iVar3 + -1;
      if (uVar33 < 0x1429315825) {
        iVar23 = iVar3 + 1;
        iVar6 = iVar11;
      }
      iVar11 = iVar6;
    } while (iVar23 <= iVar11);
    lVar18 = 0;
  }
  else {
LAB_7102bb5154:
    lVar18 = 0;
    pbVar37 = &DAT_7104742dbb;
  }
LAB_7102bb5160:
  if (*pbVar37 - 0xb < 2) {
    iVar11 = *(int *)(pbVar37 + 1);
  }
  else {
    iVar11 = 0;
  }
  uVar33 = (ulong)iVar11;
  uVar24 = *(long *)(param_1 + 0x90) - *(long *)(param_1 + 0x88) >> 3;
  if (uVar24 < uVar33) {
    FUN_7100771690((long *)(param_1 + 0x88),uVar33 - uVar24,(long ****)0xbf6dc4096,ppppbVar39,
                   param_5,param_6,param_7,param_8);
  }
  else if (uVar24 != uVar33) {
    *(ulong *)(param_1 + 0x90) = *(long *)(param_1 + 0x88) + uVar33 * 8;
  }
  uVar29 = (uint)*pbVar37;
  if ((*pbVar37 - 0xb < 2) && (0 < *(int *)(pbVar37 + 1))) {
    iVar11 = 0;
    lVar19 = 0;
    do {
      if ((int)lVar19 < 0) {
LAB_7102bb521c:
        lVar13 = 0;
        pbVar35 = &DAT_7104742dbb;
      }
      else {
        pbVar35 = &DAT_7104742dbb;
        lVar13 = 0;
        if (uVar29 == 0xb) {
          if (*(int *)(pbVar37 + 1) <= (int)lVar19) goto LAB_7102bb521c;
          pbVar35 = pbVar37 + *(int *)(pbVar37 + (long)iVar11 + 5);
          lVar13 = lVar18;
        }
      }
      if (*pbVar35 == 9) {
        uVar30 = *(undefined8 *)(*(long *)(lVar13 + 0x20) + (long)*(int *)(pbVar35 + 1) * 8);
      }
      else {
        uVar30 = 0;
      }
      *(undefined8 *)(*(long *)(param_1 + 0x88) + lVar19 * 8) = uVar30;
      uVar29 = (uint)*pbVar37;
      lVar19 = lVar19 + 1;
      if (uVar29 - 0xb < 2) {
        iVar23 = *(int *)(pbVar37 + 1);
      }
      else {
        iVar23 = 0;
      }
      iVar11 = iVar11 + 4;
    } while (lVar19 < iVar23);
  }
  pcVar12 = (char *)*plVar9;
  if ((*pcVar12 == '\f') && (iVar11 = *(int *)(pcVar12 + 1) + -1, 0 < *(int *)(pcVar12 + 1))) {
    lVar18 = *param_2;
    iVar23 = 0;
    pbVar37 = &DAT_7104742dbb;
    do {
      iVar3 = iVar11 + iVar23;
      if (iVar3 < 0) {
        iVar3 = iVar3 + 1;
      }
      iVar3 = iVar3 >> 1;
      puVar1 = (uint *)(*(long *)(lVar18 + 0x28) + (long)*(int *)(pcVar12 + 5) + (long)iVar3 * 8);
      uVar33 = *(ulong *)(*(long *)(lVar18 + 0x20) + (ulong)*puVar1 * 8);
      if (uVar33 == 0x1106311788) {
        uVar29 = puVar1[1];
        if ((int)uVar29 < 0) goto LAB_7102bb5314;
        pbVar37 = (byte *)(pcVar12 + (int)uVar29);
        goto LAB_7102bb5320;
      }
      iVar6 = iVar3 + -1;
      if (uVar33 < 0x1106311789) {
        iVar23 = iVar3 + 1;
        iVar6 = iVar11;
      }
      iVar11 = iVar6;
    } while (iVar23 <= iVar11);
    lVar18 = 0;
  }
  else {
LAB_7102bb5314:
    lVar18 = 0;
    pbVar37 = &DAT_7104742dbb;
  }
LAB_7102bb5320:
  if (*pbVar37 - 0xb < 2) {
    iVar11 = *(int *)(pbVar37 + 1);
  }
  else {
    iVar11 = 0;
  }
  uVar33 = (ulong)iVar11;
  uVar24 = *(long *)(param_1 + 0xa8) - *(long *)(param_1 + 0xa0) >> 3;
  if (uVar24 < uVar33) {
    FUN_7100771690((long *)(param_1 + 0xa0),uVar33 - uVar24,pppplVar10,ppppbVar39,param_5,param_6,
                   param_7,param_8);
  }
  else if (uVar24 != uVar33) {
    *(ulong *)(param_1 + 0xa8) = *(long *)(param_1 + 0xa0) + uVar33 * 8;
  }
  uVar29 = (uint)*pbVar37;
  if ((*pbVar37 - 0xb < 2) && (0 < *(int *)(pbVar37 + 1))) {
    iVar11 = 0;
    lVar19 = 0;
    do {
      if ((int)lVar19 < 0) {
LAB_7102bb53dc:
        lVar13 = 0;
        pbVar35 = &DAT_7104742dbb;
      }
      else {
        pbVar35 = &DAT_7104742dbb;
        lVar13 = 0;
        if (uVar29 == 0xb) {
          if (*(int *)(pbVar37 + 1) <= (int)lVar19) goto LAB_7102bb53dc;
          pbVar35 = pbVar37 + *(int *)(pbVar37 + (long)iVar11 + 5);
          lVar13 = lVar18;
        }
      }
      if (*pbVar35 == 9) {
        uVar30 = *(undefined8 *)(*(long *)(lVar13 + 0x20) + (long)*(int *)(pbVar35 + 1) * 8);
      }
      else {
        uVar30 = 0;
      }
      *(undefined8 *)(*(long *)(param_1 + 0xa0) + lVar19 * 8) = uVar30;
      uVar29 = (uint)*pbVar37;
      lVar19 = lVar19 + 1;
      if (uVar29 - 0xb < 2) {
        iVar23 = *(int *)(pbVar37 + 1);
      }
      else {
        iVar23 = 0;
      }
      iVar11 = iVar11 + 4;
    } while (lVar19 < iVar23);
  }
  pcVar12 = (char *)*plVar9;
  if ((*pcVar12 == '\f') && (iVar11 = *(int *)(pcVar12 + 1) + -1, 0 < *(int *)(pcVar12 + 1))) {
    lVar18 = *param_2;
    iVar23 = 0;
    pbVar37 = &DAT_7104742dbb;
    do {
      iVar3 = iVar11 + iVar23;
      if (iVar3 < 0) {
        iVar3 = iVar3 + 1;
      }
      iVar3 = iVar3 >> 1;
      puVar1 = (uint *)(*(long *)(lVar18 + 0x28) + (long)*(int *)(pcVar12 + 5) + (long)iVar3 * 8);
      uVar33 = *(ulong *)(*(long *)(lVar18 + 0x20) + (ulong)*puVar1 * 8);
      if (uVar33 == 0x112db3a16a) {
        uVar29 = puVar1[1];
        if ((int)uVar29 < 0) goto LAB_7102bb54d4;
        pbVar37 = (byte *)(pcVar12 + (int)uVar29);
        goto LAB_7102bb54e0;
      }
      iVar6 = iVar3 + -1;
      if (uVar33 < 0x112db3a16b) {
        iVar23 = iVar3 + 1;
        iVar6 = iVar11;
      }
      iVar11 = iVar6;
    } while (iVar23 <= iVar11);
    lVar18 = 0;
  }
  else {
LAB_7102bb54d4:
    lVar18 = 0;
    pbVar37 = &DAT_7104742dbb;
  }
LAB_7102bb54e0:
  if (*pbVar37 - 0xb < 2) {
    iVar11 = *(int *)(pbVar37 + 1);
  }
  else {
    iVar11 = 0;
  }
  lVar19 = *(long *)(param_1 + 0xc0) - *(long *)(param_1 + 0xb8) >> 2;
  uVar24 = lVar19 * -0x3333333333333333;
  uVar33 = (ulong)iVar11;
  plVar2 = (long *)(param_1 + 0xb8);
  if (uVar24 < uVar33) {
    FUN_7102bbde90(plVar2,uVar33 + lVar19 * 0x3333333333333333,pppplVar10,ppppbVar39,param_5,param_6
                   ,param_7,param_8);
  }
  else if (uVar24 - uVar33 != 0) {
    *(ulong *)(param_1 + 0xc0) = *(long *)(param_1 + 0xb8) + uVar33 * 0x14;
  }
  uVar29 = (uint)*pbVar37;
  if ((*pbVar37 - 0xb < 2) && (0 < *(int *)(pbVar37 + 1))) {
    lVar19 = 0;
LAB_7102bb55c4:
    do {
      iVar11 = (int)lVar19;
      if (iVar11 < 0) {
LAB_7102bb55fc:
        lVar13 = 0;
        pbVar35 = &DAT_7104742dbb;
      }
      else {
        pbVar35 = &DAT_7104742dbb;
        lVar13 = 0;
        if (uVar29 == 0xb) {
          if (*(int *)(pbVar37 + 1) <= iVar11) goto LAB_7102bb55fc;
          pbVar35 = pbVar37 + *(int *)(pbVar37 + (long)iVar11 * 4 + 5);
          lVar13 = lVar18;
        }
      }
      pbVar8 = &DAT_7104742dbb;
      if ((*pbVar35 == 0xc) && (uVar29 = *(int *)(pbVar35 + 1) - 1, 0 < *(int *)(pbVar35 + 1))) {
        iVar11 = 0;
        pppplVar10 = (long ****)(*(long *)(lVar13 + 0x28) + (long)*(int *)(pbVar35 + 5));
        do {
          iVar23 = uVar29 + iVar11;
          if (iVar23 < 0) {
            iVar23 = iVar23 + 1;
          }
          uVar4 = iVar23 >> 1;
          ppppbVar39 = (byte ****)(ulong)uVar4;
          param_5 = pppplVar10 + (int)uVar4;
          param_6 = *(byte *****)(*(long *)(lVar13 + 0x20) + (ulong)*(uint *)param_5 * 8);
          if (param_6 == (byte ****)0xbc0ad263c) {
            if (-1 < (int)*(uint *)((long)param_5 + 4)) {
              pbVar8 = pbVar35 + (int)*(uint *)((long)param_5 + 4);
            }
            break;
          }
          param_5 = (long ****)(ulong)(uVar4 - 1);
          uVar7 = uVar4 - 1;
          if (param_6 < (byte ****)0xbc0ad263d) {
            iVar11 = uVar4 + 1;
            uVar7 = uVar29;
          }
          uVar29 = uVar7;
        } while (iVar11 <= (int)uVar29);
      }
      uVar46 = 0x43960000;
      if (*pbVar8 == 8) {
        uVar46 = *(undefined4 *)(pbVar8 + 1);
      }
      *(undefined4 *)(*plVar2 + lVar19 * 0x14) = uVar46;
      pbVar8 = &DAT_7104742dbb;
      if ((*pbVar35 == 0xc) && (uVar29 = *(int *)(pbVar35 + 1) - 1, 0 < *(int *)(pbVar35 + 1))) {
        iVar11 = 0;
        pppplVar10 = (long ****)(*(long *)(lVar13 + 0x28) + (long)*(int *)(pbVar35 + 5));
        do {
          iVar23 = uVar29 + iVar11;
          if (iVar23 < 0) {
            iVar23 = iVar23 + 1;
          }
          uVar4 = iVar23 >> 1;
          ppppbVar39 = (byte ****)(ulong)uVar4;
          param_5 = pppplVar10 + (int)uVar4;
          param_6 = *(byte *****)(*(long *)(lVar13 + 0x20) + (ulong)*(uint *)param_5 * 8);
          if (param_6 == (byte ****)0x629a8db8a) {
            if (-1 < (int)*(uint *)((long)param_5 + 4)) {
              pbVar8 = pbVar35 + (int)*(uint *)((long)param_5 + 4);
            }
            break;
          }
          param_5 = (long ****)(ulong)(uVar4 - 1);
          uVar7 = uVar4 - 1;
          if (param_6 < (byte ****)0x629a8db8b) {
            iVar11 = uVar4 + 1;
            uVar7 = uVar29;
          }
          uVar29 = uVar7;
        } while (iVar11 <= (int)uVar29);
      }
      uVar46 = 0x3f400000;
      if (*pbVar8 == 8) {
        uVar46 = *(undefined4 *)(pbVar8 + 1);
      }
      *(undefined4 *)(*plVar2 + lVar19 * 0x14 + 4) = uVar46;
      pbVar8 = &DAT_7104742dbb;
      if ((*pbVar35 == 0xc) && (uVar29 = *(int *)(pbVar35 + 1) - 1, 0 < *(int *)(pbVar35 + 1))) {
        iVar11 = 0;
        pppplVar10 = (long ****)(*(long *)(lVar13 + 0x28) + (long)*(int *)(pbVar35 + 5));
        do {
          iVar23 = uVar29 + iVar11;
          if (iVar23 < 0) {
            iVar23 = iVar23 + 1;
          }
          uVar4 = iVar23 >> 1;
          ppppbVar39 = (byte ****)(ulong)uVar4;
          param_5 = pppplVar10 + (int)uVar4;
          param_6 = *(byte *****)(*(long *)(lVar13 + 0x20) + (ulong)*(uint *)param_5 * 8);
          if (param_6 == (byte ****)0x32c3f7083) {
            if (-1 < (int)*(uint *)((long)param_5 + 4)) {
              pbVar8 = pbVar35 + (int)*(uint *)((long)param_5 + 4);
            }
            break;
          }
          param_5 = (long ****)(ulong)(uVar4 - 1);
          uVar7 = uVar4 - 1;
          if (param_6 < (byte ****)0x32c3f7084) {
            iVar11 = uVar4 + 1;
            uVar7 = uVar29;
          }
          uVar29 = uVar7;
        } while (iVar11 <= (int)uVar29);
      }
      uVar46 = 0xbb23d70a;
      if (*pbVar8 == 8) {
        uVar46 = *(undefined4 *)(pbVar8 + 1);
      }
      *(undefined4 *)(*plVar2 + lVar19 * 0x14 + 8) = uVar46;
      pbVar8 = &DAT_7104742dbb;
      if ((*pbVar35 == 0xc) && (uVar29 = *(int *)(pbVar35 + 1) - 1, 0 < *(int *)(pbVar35 + 1))) {
        iVar11 = 0;
        pppplVar10 = (long ****)(*(long *)(lVar13 + 0x28) + (long)*(int *)(pbVar35 + 5));
        do {
          iVar23 = uVar29 + iVar11;
          if (iVar23 < 0) {
            iVar23 = iVar23 + 1;
          }
          uVar4 = iVar23 >> 1;
          ppppbVar39 = (byte ****)(ulong)uVar4;
          param_5 = pppplVar10 + (int)uVar4;
          param_6 = *(byte *****)(*(long *)(lVar13 + 0x20) + (ulong)*(uint *)param_5 * 8);
          if (param_6 == (byte ****)0x70eb0f916) {
            if (-1 < (int)*(uint *)((long)param_5 + 4)) {
              pbVar8 = pbVar35 + (int)*(uint *)((long)param_5 + 4);
            }
            break;
          }
          param_5 = (long ****)(ulong)(uVar4 - 1);
          uVar7 = uVar4 - 1;
          if (param_6 < (byte ****)0x70eb0f917) {
            iVar11 = uVar4 + 1;
            uVar7 = uVar29;
          }
          uVar29 = uVar7;
        } while (iVar11 <= (int)uVar29);
      }
      uVar46 = 0x3f000000;
      if (*pbVar8 == 8) {
        uVar46 = *(undefined4 *)(pbVar8 + 1);
      }
      *(undefined4 *)(*plVar2 + lVar19 * 0x14 + 0xc) = uVar46;
      pbVar8 = &DAT_7104742dbb;
      if ((*pbVar35 == 0xc) && (uVar29 = *(int *)(pbVar35 + 1) - 1, 0 < *(int *)(pbVar35 + 1))) {
        iVar11 = 0;
        do {
          iVar23 = uVar29 + iVar11;
          if (iVar23 < 0) {
            iVar23 = iVar23 + 1;
          }
          uVar4 = iVar23 >> 1;
          pppplVar10 = (long ****)(ulong)uVar4;
          ppppbVar39 = (byte ****)
                       (*(long *)(lVar13 + 0x28) + (long)*(int *)(pbVar35 + 5) +
                       (long)(int)uVar4 * 8);
          param_5 = *(long *****)(*(long *)(lVar13 + 0x20) + (ulong)*(uint *)ppppbVar39 * 8);
          if (param_5 == (long ****)0xbe13a8d34) {
            if (-1 < (int)*(uint *)((long)ppppbVar39 + 4)) {
              pbVar8 = pbVar35 + (int)*(uint *)((long)ppppbVar39 + 4);
            }
            break;
          }
          ppppbVar39 = (byte ****)(ulong)(uVar4 - 1);
          uVar7 = uVar4 - 1;
          if (param_5 < (long ****)0xbe13a8d35) {
            iVar11 = uVar4 + 1;
            uVar7 = uVar29;
          }
          uVar29 = uVar7;
        } while (iVar11 <= (int)uVar29);
      }
      uVar46 = 0;
      if (*pbVar8 == 8) {
        uVar46 = *(undefined4 *)(pbVar8 + 1);
      }
      lVar13 = lVar19 * 0x14;
      lVar19 = lVar19 + 1;
      *(undefined4 *)(*plVar2 + lVar13 + 0x10) = uVar46;
      uVar29 = (uint)*pbVar37;
      if (uVar29 - 0xb < 2) {
        if (*(int *)(pbVar37 + 1) <= lVar19) break;
        goto LAB_7102bb55c4;
      }
    } while (lVar19 < 0);
  }
  pcVar12 = (char *)*plVar9;
  if ((*pcVar12 == '\f') && (iVar11 = *(int *)(pcVar12 + 1) + -1, 0 < *(int *)(pcVar12 + 1))) {
    lVar18 = *param_2;
    iVar23 = 0;
    pbVar37 = &DAT_7104742dbb;
    do {
      iVar3 = iVar11 + iVar23;
      if (iVar3 < 0) {
        iVar3 = iVar3 + 1;
      }
      iVar3 = iVar3 >> 1;
      puVar1 = (uint *)(*(long *)(lVar18 + 0x28) + (long)*(int *)(pcVar12 + 5) + (long)iVar3 * 8);
      uVar33 = *(ulong *)(*(long *)(lVar18 + 0x20) + (ulong)*puVar1 * 8);
      if (uVar33 == 0x13c55240ea) {
        uVar29 = puVar1[1];
        if ((int)uVar29 < 0) goto LAB_7102bb59f0;
        pbVar37 = (byte *)(pcVar12 + (int)uVar29);
        goto LAB_7102bb59fc;
      }
      iVar6 = iVar3 + -1;
      if (uVar33 < 0x13c55240eb) {
        iVar23 = iVar3 + 1;
        iVar6 = iVar11;
      }
      iVar11 = iVar6;
    } while (iVar23 <= iVar11);
    lVar18 = 0;
  }
  else {
LAB_7102bb59f0:
    lVar18 = 0;
    pbVar37 = &DAT_7104742dbb;
  }
LAB_7102bb59fc:
  if (*pbVar37 - 0xb < 2) {
    iVar11 = *(int *)(pbVar37 + 1);
  }
  else {
    iVar11 = 0;
  }
  lVar19 = *(long *)(param_1 + 0xd8) - *(long *)(param_1 + 0xd0) >> 2;
  uVar24 = lVar19 * -0x3333333333333333;
  uVar33 = (ulong)iVar11;
  plVar2 = (long *)(param_1 + 0xd0);
  if (uVar24 < uVar33) {
    FUN_7102bbde90(plVar2,uVar33 + lVar19 * 0x3333333333333333,pppplVar10,ppppbVar39,param_5,param_6
                   ,param_7,param_8);
  }
  else if (uVar24 - uVar33 != 0) {
    *(ulong *)(param_1 + 0xd8) = *(long *)(param_1 + 0xd0) + uVar33 * 0x14;
  }
  uVar29 = (uint)*pbVar37;
  if ((*pbVar37 - 0xb < 2) && (0 < *(int *)(pbVar37 + 1))) {
    lVar19 = 0;
LAB_7102bb5ad4:
    do {
      iVar11 = (int)lVar19;
      if (iVar11 < 0) {
LAB_7102bb5b0c:
        lVar13 = 0;
        pbVar35 = &DAT_7104742dbb;
      }
      else {
        pbVar35 = &DAT_7104742dbb;
        lVar13 = 0;
        if (uVar29 == 0xb) {
          if (*(int *)(pbVar37 + 1) <= iVar11) goto LAB_7102bb5b0c;
          pbVar35 = pbVar37 + *(int *)(pbVar37 + (long)iVar11 * 4 + 5);
          lVar13 = lVar18;
        }
      }
      pbVar8 = &DAT_7104742dbb;
      if ((*pbVar35 == 0xc) && (uVar29 = *(int *)(pbVar35 + 1) - 1, 0 < *(int *)(pbVar35 + 1))) {
        iVar11 = 0;
        pppplVar10 = (long ****)(*(long *)(lVar13 + 0x28) + (long)*(int *)(pbVar35 + 5));
        do {
          iVar23 = uVar29 + iVar11;
          if (iVar23 < 0) {
            iVar23 = iVar23 + 1;
          }
          uVar4 = iVar23 >> 1;
          ppppbVar39 = (byte ****)(ulong)uVar4;
          param_5 = pppplVar10 + (int)uVar4;
          param_6 = *(byte *****)(*(long *)(lVar13 + 0x20) + (ulong)*(uint *)param_5 * 8);
          if (param_6 == (byte ****)0xbc0ad263c) {
            if (-1 < (int)*(uint *)((long)param_5 + 4)) {
              pbVar8 = pbVar35 + (int)*(uint *)((long)param_5 + 4);
            }
            break;
          }
          param_5 = (long ****)(ulong)(uVar4 - 1);
          uVar7 = uVar4 - 1;
          if (param_6 < (byte ****)0xbc0ad263d) {
            iVar11 = uVar4 + 1;
            uVar7 = uVar29;
          }
          uVar29 = uVar7;
        } while (iVar11 <= (int)uVar29);
      }
      uVar46 = 0x44750000;
      if (*pbVar8 == 8) {
        uVar46 = *(undefined4 *)(pbVar8 + 1);
      }
      *(undefined4 *)(*plVar2 + lVar19 * 0x14) = uVar46;
      pbVar8 = &DAT_7104742dbb;
      if ((*pbVar35 == 0xc) && (uVar29 = *(int *)(pbVar35 + 1) - 1, 0 < *(int *)(pbVar35 + 1))) {
        iVar11 = 0;
        pppplVar10 = (long ****)(*(long *)(lVar13 + 0x28) + (long)*(int *)(pbVar35 + 5));
        do {
          iVar23 = uVar29 + iVar11;
          if (iVar23 < 0) {
            iVar23 = iVar23 + 1;
          }
          uVar4 = iVar23 >> 1;
          ppppbVar39 = (byte ****)(ulong)uVar4;
          param_5 = pppplVar10 + (int)uVar4;
          param_6 = *(byte *****)(*(long *)(lVar13 + 0x20) + (ulong)*(uint *)param_5 * 8);
          if (param_6 == (byte ****)0x629a8db8a) {
            if (-1 < (int)*(uint *)((long)param_5 + 4)) {
              pbVar8 = pbVar35 + (int)*(uint *)((long)param_5 + 4);
            }
            break;
          }
          param_5 = (long ****)(ulong)(uVar4 - 1);
          uVar7 = uVar4 - 1;
          if (param_6 < (byte ****)0x629a8db8b) {
            iVar11 = uVar4 + 1;
            uVar7 = uVar29;
          }
          uVar29 = uVar7;
        } while (iVar11 <= (int)uVar29);
      }
      uVar46 = 0x3ecccccd;
      if (*pbVar8 == 8) {
        uVar46 = *(undefined4 *)(pbVar8 + 1);
      }
      *(undefined4 *)(*plVar2 + lVar19 * 0x14 + 4) = uVar46;
      pbVar8 = &DAT_7104742dbb;
      if ((*pbVar35 == 0xc) && (uVar29 = *(int *)(pbVar35 + 1) - 1, 0 < *(int *)(pbVar35 + 1))) {
        iVar11 = 0;
        pppplVar10 = (long ****)(*(long *)(lVar13 + 0x28) + (long)*(int *)(pbVar35 + 5));
        do {
          iVar23 = uVar29 + iVar11;
          if (iVar23 < 0) {
            iVar23 = iVar23 + 1;
          }
          uVar4 = iVar23 >> 1;
          ppppbVar39 = (byte ****)(ulong)uVar4;
          param_5 = pppplVar10 + (int)uVar4;
          param_6 = *(byte *****)(*(long *)(lVar13 + 0x20) + (ulong)*(uint *)param_5 * 8);
          if (param_6 == (byte ****)0x32c3f7083) {
            if (-1 < (int)*(uint *)((long)param_5 + 4)) {
              pbVar8 = pbVar35 + (int)*(uint *)((long)param_5 + 4);
            }
            break;
          }
          param_5 = (long ****)(ulong)(uVar4 - 1);
          uVar7 = uVar4 - 1;
          if (param_6 < (byte ****)0x32c3f7084) {
            iVar11 = uVar4 + 1;
            uVar7 = uVar29;
          }
          uVar29 = uVar7;
        } while (iVar11 <= (int)uVar29);
      }
      uVar46 = 0x3c23d70a;
      if (*pbVar8 == 8) {
        uVar46 = *(undefined4 *)(pbVar8 + 1);
      }
      *(undefined4 *)(*plVar2 + lVar19 * 0x14 + 8) = uVar46;
      pbVar8 = &DAT_7104742dbb;
      if ((*pbVar35 == 0xc) && (uVar29 = *(int *)(pbVar35 + 1) - 1, 0 < *(int *)(pbVar35 + 1))) {
        iVar11 = 0;
        pppplVar10 = (long ****)(*(long *)(lVar13 + 0x28) + (long)*(int *)(pbVar35 + 5));
        do {
          iVar23 = uVar29 + iVar11;
          if (iVar23 < 0) {
            iVar23 = iVar23 + 1;
          }
          uVar4 = iVar23 >> 1;
          ppppbVar39 = (byte ****)(ulong)uVar4;
          param_5 = pppplVar10 + (int)uVar4;
          param_6 = *(byte *****)(*(long *)(lVar13 + 0x20) + (ulong)*(uint *)param_5 * 8);
          if (param_6 == (byte ****)0x70eb0f916) {
            if (-1 < (int)*(uint *)((long)param_5 + 4)) {
              pbVar8 = pbVar35 + (int)*(uint *)((long)param_5 + 4);
            }
            break;
          }
          param_5 = (long ****)(ulong)(uVar4 - 1);
          uVar7 = uVar4 - 1;
          if (param_6 < (byte ****)0x70eb0f917) {
            iVar11 = uVar4 + 1;
            uVar7 = uVar29;
          }
          uVar29 = uVar7;
        } while (iVar11 <= (int)uVar29);
      }
      uVar46 = 0x3ecccccd;
      if (*pbVar8 == 8) {
        uVar46 = *(undefined4 *)(pbVar8 + 1);
      }
      *(undefined4 *)(*plVar2 + lVar19 * 0x14 + 0xc) = uVar46;
      pbVar8 = &DAT_7104742dbb;
      if ((*pbVar35 == 0xc) && (uVar29 = *(int *)(pbVar35 + 1) - 1, 0 < *(int *)(pbVar35 + 1))) {
        iVar11 = 0;
        do {
          iVar23 = uVar29 + iVar11;
          if (iVar23 < 0) {
            iVar23 = iVar23 + 1;
          }
          uVar4 = iVar23 >> 1;
          pppplVar10 = (long ****)(ulong)uVar4;
          ppppbVar39 = (byte ****)
                       (*(long *)(lVar13 + 0x28) + (long)*(int *)(pbVar35 + 5) +
                       (long)(int)uVar4 * 8);
          param_5 = *(long *****)(*(long *)(lVar13 + 0x20) + (ulong)*(uint *)ppppbVar39 * 8);
          if (param_5 == (long ****)0xbe13a8d34) {
            if (-1 < (int)*(uint *)((long)ppppbVar39 + 4)) {
              pbVar8 = pbVar35 + (int)*(uint *)((long)ppppbVar39 + 4);
            }
            break;
          }
          ppppbVar39 = (byte ****)(ulong)(uVar4 - 1);
          uVar7 = uVar4 - 1;
          if (param_5 < (long ****)0xbe13a8d35) {
            iVar11 = uVar4 + 1;
            uVar7 = uVar29;
          }
          uVar29 = uVar7;
        } while (iVar11 <= (int)uVar29);
      }
      uVar46 = 0;
      if (*pbVar8 == 8) {
        uVar46 = *(undefined4 *)(pbVar8 + 1);
      }
      lVar13 = lVar19 * 0x14;
      lVar19 = lVar19 + 1;
      *(undefined4 *)(*plVar2 + lVar13 + 0x10) = uVar46;
      uVar29 = (uint)*pbVar37;
      if (uVar29 - 0xb < 2) {
        if (*(int *)(pbVar37 + 1) <= lVar19) break;
        goto LAB_7102bb5ad4;
      }
    } while (lVar19 < 0);
  }
  pcVar12 = (char *)*plVar9;
  if ((*pcVar12 == '\f') && (iVar11 = *(int *)(pcVar12 + 1) + -1, 0 < *(int *)(pcVar12 + 1))) {
    iVar23 = 0;
    pcVar22 = "";
    do {
      iVar3 = iVar11 + iVar23;
      if (iVar3 < 0) {
        iVar3 = iVar3 + 1;
      }
      iVar3 = iVar3 >> 1;
      puVar1 = (uint *)(*(long *)(*param_2 + 0x28) + (long)*(int *)(pcVar12 + 5) + (long)iVar3 * 8);
      uVar33 = *(ulong *)(*(long *)(*param_2 + 0x20) + (ulong)*puVar1 * 8);
      if (uVar33 == 0x18f0cd2710) {
        uVar29 = puVar1[1];
        if ((int)uVar29 < 0) goto LAB_7102bb5efc;
        pcVar22 = pcVar12 + (int)uVar29;
        break;
      }
      iVar6 = iVar3 + -1;
      if (uVar33 < 0x18f0cd2711) {
        iVar23 = iVar3 + 1;
        iVar6 = iVar11;
      }
      iVar11 = iVar6;
    } while (iVar23 <= iVar11);
  }
  else {
LAB_7102bb5efc:
    pcVar22 = "";
  }
  if (*pcVar22 == '\b') {
    uVar46 = *(undefined4 *)(pcVar22 + 1);
  }
  else {
    uVar46 = 0xc2ca0000;
  }
  *(undefined4 *)(param_1 + 0xe8) = uVar46;
  pcVar12 = (char *)*plVar9;
  if ((*pcVar12 == '\f') && (iVar11 = *(int *)(pcVar12 + 1) + -1, 0 < *(int *)(pcVar12 + 1))) {
    iVar23 = 0;
    pcVar22 = "";
    do {
      iVar3 = iVar11 + iVar23;
      if (iVar3 < 0) {
        iVar3 = iVar3 + 1;
      }
      iVar3 = iVar3 >> 1;
      puVar1 = (uint *)(*(long *)(*param_2 + 0x28) + (long)*(int *)(pcVar12 + 5) + (long)iVar3 * 8);
      uVar33 = *(ulong *)(*(long *)(*param_2 + 0x20) + (ulong)*puVar1 * 8);
      if (uVar33 == 0x181f0f4c2e) {
        uVar29 = puVar1[1];
        if ((int)uVar29 < 0) goto LAB_7102bb5fc0;
        pcVar22 = pcVar12 + (int)uVar29;
        break;
      }
      iVar6 = iVar3 + -1;
      if (uVar33 < 0x181f0f4c2f) {
        iVar23 = iVar3 + 1;
        iVar6 = iVar11;
      }
      iVar11 = iVar6;
    } while (iVar23 <= iVar11);
  }
  else {
LAB_7102bb5fc0:
    pcVar22 = "";
  }
  if (*pcVar22 == '\b') {
    uVar46 = *(undefined4 *)(pcVar22 + 1);
  }
  else {
    uVar46 = 0xc2fc0000;
  }
  *(undefined4 *)(param_1 + 0xec) = uVar46;
  pcVar12 = (char *)*plVar9;
  if ((*pcVar12 == '\f') && (iVar11 = *(int *)(pcVar12 + 1) + -1, 0 < *(int *)(pcVar12 + 1))) {
    iVar23 = 0;
    pcVar22 = "";
    do {
      iVar3 = iVar11 + iVar23;
      if (iVar3 < 0) {
        iVar3 = iVar3 + 1;
      }
      iVar3 = iVar3 >> 1;
      puVar1 = (uint *)(*(long *)(*param_2 + 0x28) + (long)*(int *)(pcVar12 + 5) + (long)iVar3 * 8);
      uVar33 = *(ulong *)(*(long *)(*param_2 + 0x20) + (ulong)*puVar1 * 8);
      if (uVar33 == 0x18fdd35757) {
        uVar29 = puVar1[1];
        if ((int)uVar29 < 0) goto LAB_7102bb6084;
        pcVar22 = pcVar12 + (int)uVar29;
        break;
      }
      iVar6 = iVar3 + -1;
      if (uVar33 < 0x18fdd35758) {
        iVar23 = iVar3 + 1;
        iVar6 = iVar11;
      }
      iVar11 = iVar6;
    } while (iVar23 <= iVar11);
  }
  else {
LAB_7102bb6084:
    pcVar22 = "";
  }
  if (*pcVar22 == '\b') {
    uVar46 = *(undefined4 *)(pcVar22 + 1);
  }
  else {
    uVar46 = 0xc3260000;
  }
  *(undefined4 *)(param_1 + 0xf0) = uVar46;
  pcVar12 = (char *)*plVar9;
  if ((*pcVar12 == '\f') && (iVar11 = *(int *)(pcVar12 + 1) + -1, 0 < *(int *)(pcVar12 + 1))) {
    iVar23 = 0;
    pcVar22 = "";
    do {
      iVar3 = iVar11 + iVar23;
      if (iVar3 < 0) {
        iVar3 = iVar3 + 1;
      }
      iVar3 = iVar3 >> 1;
      puVar1 = (uint *)(*(long *)(*param_2 + 0x28) + (long)*(int *)(pcVar12 + 5) + (long)iVar3 * 8);
      uVar33 = *(ulong *)(*(long *)(*param_2 + 0x20) + (ulong)*puVar1 * 8);
      if (uVar33 == 0x1812113c69) {
        uVar29 = puVar1[1];
        if ((int)uVar29 < 0) goto LAB_7102bb6148;
        pcVar22 = pcVar12 + (int)uVar29;
        break;
      }
      iVar6 = iVar3 + -1;
      if (uVar33 < 0x1812113c6a) {
        iVar23 = iVar3 + 1;
        iVar6 = iVar11;
      }
      iVar11 = iVar6;
    } while (iVar23 <= iVar11);
  }
  else {
LAB_7102bb6148:
    pcVar22 = "";
  }
  if (*pcVar22 == '\b') {
    uVar46 = *(undefined4 *)(pcVar22 + 1);
  }
  else {
    uVar46 = 0xc32d0000;
  }
  *(undefined4 *)(param_1 + 0xf4) = uVar46;
  pcVar12 = (char *)*plVar9;
  if ((*pcVar12 == '\f') && (iVar11 = *(int *)(pcVar12 + 1) + -1, 0 < *(int *)(pcVar12 + 1))) {
    iVar23 = 0;
    pcVar22 = "";
    do {
      iVar3 = iVar11 + iVar23;
      if (iVar3 < 0) {
        iVar3 = iVar3 + 1;
      }
      iVar3 = iVar3 >> 1;
      puVar1 = (uint *)(*(long *)(*param_2 + 0x28) + (long)*(int *)(pcVar12 + 5) + (long)iVar3 * 8);
      uVar33 = *(ulong *)(*(long *)(*param_2 + 0x20) + (ulong)*puVar1 * 8);
      if (uVar33 == 0xf1285c2e6) {
        uVar29 = puVar1[1];
        if ((int)uVar29 < 0) goto LAB_7102bb620c;
        pcVar22 = pcVar12 + (int)uVar29;
        break;
      }
      iVar6 = iVar3 + -1;
      if (uVar33 < 0xf1285c2e7) {
        iVar23 = iVar3 + 1;
        iVar6 = iVar11;
      }
      iVar11 = iVar6;
    } while (iVar23 <= iVar11);
  }
  else {
LAB_7102bb620c:
    pcVar22 = "";
  }
  if (*pcVar22 == '\b') {
    uVar46 = *(undefined4 *)(pcVar22 + 1);
  }
  else {
    uVar46 = 0x3f4ccccd;
  }
  *(undefined4 *)(param_1 + 0xf8) = uVar46;
  pcVar12 = (char *)*plVar9;
  if ((*pcVar12 == '\f') && (iVar11 = *(int *)(pcVar12 + 1) + -1, 0 < *(int *)(pcVar12 + 1))) {
    iVar23 = 0;
    pcVar22 = "";
    do {
      iVar3 = iVar11 + iVar23;
      if (iVar3 < 0) {
        iVar3 = iVar3 + 1;
      }
      iVar3 = iVar3 >> 1;
      puVar1 = (uint *)(*(long *)(*param_2 + 0x28) + (long)*(int *)(pcVar12 + 5) + (long)iVar3 * 8);
      uVar33 = *(ulong *)(*(long *)(*param_2 + 0x20) + (ulong)*puVar1 * 8);
      if (uVar33 == 0x238364db58) {
        uVar29 = puVar1[1];
        if ((int)uVar29 < 0) goto LAB_7102bb62d0;
        pcVar22 = pcVar12 + (int)uVar29;
        break;
      }
      iVar6 = iVar3 + -1;
      if (uVar33 < 0x238364db59) {
        iVar23 = iVar3 + 1;
        iVar6 = iVar11;
      }
      iVar11 = iVar6;
    } while (iVar23 <= iVar11);
  }
  else {
LAB_7102bb62d0:
    pcVar22 = "";
  }
  if (*pcVar22 == '\b') {
    uVar46 = *(undefined4 *)(pcVar22 + 1);
  }
  else {
    uVar46 = 0x45f32000;
  }
  *(undefined4 *)(param_1 + 0xfc) = uVar46;
  pcVar12 = (char *)*plVar9;
  if ((*pcVar12 == '\f') && (iVar11 = *(int *)(pcVar12 + 1) + -1, 0 < *(int *)(pcVar12 + 1))) {
    iVar23 = 0;
    pcVar22 = "";
    do {
      iVar3 = iVar11 + iVar23;
      if (iVar3 < 0) {
        iVar3 = iVar3 + 1;
      }
      iVar3 = iVar3 >> 1;
      puVar1 = (uint *)(*(long *)(*param_2 + 0x28) + (long)*(int *)(pcVar12 + 5) + (long)iVar3 * 8);
      uVar33 = *(ulong *)(*(long *)(*param_2 + 0x20) + (ulong)*puVar1 * 8);
      if (uVar33 == 0xe3ccfb238) {
        uVar29 = puVar1[1];
        if ((int)uVar29 < 0) goto LAB_7102bb6394;
        pcVar22 = pcVar12 + (int)uVar29;
        break;
      }
      iVar6 = iVar3 + -1;
      if (uVar33 < 0xe3ccfb239) {
        iVar23 = iVar3 + 1;
        iVar6 = iVar11;
      }
      iVar11 = iVar6;
    } while (iVar23 <= iVar11);
  }
  else {
LAB_7102bb6394:
    pcVar22 = "";
  }
  if (*pcVar22 == '\b') {
    uVar46 = *(undefined4 *)(pcVar22 + 1);
  }
  else {
    uVar46 = 0x41700000;
  }
  *(undefined4 *)(param_1 + 0x100) = uVar46;
  pcVar12 = (char *)*plVar9;
  if ((*pcVar12 == '\f') && (iVar11 = *(int *)(pcVar12 + 1) + -1, 0 < *(int *)(pcVar12 + 1))) {
    iVar23 = 0;
    pcVar22 = "";
    do {
      iVar3 = iVar11 + iVar23;
      if (iVar3 < 0) {
        iVar3 = iVar3 + 1;
      }
      iVar3 = iVar3 >> 1;
      puVar1 = (uint *)(*(long *)(*param_2 + 0x28) + (long)*(int *)(pcVar12 + 5) + (long)iVar3 * 8);
      uVar33 = *(ulong *)(*(long *)(*param_2 + 0x20) + (ulong)*puVar1 * 8);
      if (uVar33 == 0xe06ce42d0) {
        uVar29 = puVar1[1];
        if ((int)uVar29 < 0) goto LAB_7102bb6454;
        pcVar22 = pcVar12 + (int)uVar29;
        break;
      }
      iVar6 = iVar3 + -1;
      if (uVar33 < 0xe06ce42d1) {
        iVar23 = iVar3 + 1;
        iVar6 = iVar11;
      }
      iVar11 = iVar6;
    } while (iVar23 <= iVar11);
  }
  else {
LAB_7102bb6454:
    pcVar22 = "";
  }
  if (*pcVar22 == '\b') {
    uVar46 = *(undefined4 *)(pcVar22 + 1);
  }
  else {
    uVar46 = 0x40a00000;
  }
  *(undefined4 *)(param_1 + 0x104) = uVar46;
  pcVar12 = (char *)*plVar9;
  if ((*pcVar12 == '\f') && (iVar11 = *(int *)(pcVar12 + 1) + -1, 0 < *(int *)(pcVar12 + 1))) {
    lVar18 = *param_2;
    iVar23 = 0;
    pbVar37 = &DAT_7104742dbb;
    do {
      iVar3 = iVar11 + iVar23;
      if (iVar3 < 0) {
        iVar3 = iVar3 + 1;
      }
      iVar3 = iVar3 >> 1;
      puVar1 = (uint *)(*(long *)(lVar18 + 0x28) + (long)*(int *)(pcVar12 + 5) + (long)iVar3 * 8);
      uVar33 = *(ulong *)(*(long *)(lVar18 + 0x20) + (ulong)*puVar1 * 8);
      if (uVar33 == 0x113033d2c6) {
        uVar29 = puVar1[1];
        if ((int)uVar29 < 0) goto LAB_7102bb6518;
        pbVar37 = (byte *)(pcVar12 + (int)uVar29);
        goto LAB_7102bb6524;
      }
      iVar6 = iVar3 + -1;
      if (uVar33 < 0x113033d2c7) {
        iVar23 = iVar3 + 1;
        iVar6 = iVar11;
      }
      iVar11 = iVar6;
    } while (iVar23 <= iVar11);
    lVar18 = 0;
  }
  else {
LAB_7102bb6518:
    lVar18 = 0;
    pbVar37 = &DAT_7104742dbb;
  }
LAB_7102bb6524:
  if (*pbVar37 - 0xb < 2) {
    iVar11 = *(int *)(pbVar37 + 1);
  }
  else {
    iVar11 = 0;
  }
  lVar19 = *(long *)(param_1 + 0x110) - *(long *)(param_1 + 0x108) >> 2;
  uVar24 = lVar19 * -0x5555555555555555;
  uVar33 = (ulong)iVar11;
  plVar2 = (long *)(param_1 + 0x108);
  if (uVar24 < uVar33) {
    FUN_7102bbe0a0(plVar2,uVar33 + lVar19 * 0x5555555555555555,pppplVar10,ppppbVar39,param_5,param_6
                   ,param_7,param_8);
  }
  else if (uVar24 - uVar33 != 0) {
    *(ulong *)(param_1 + 0x110) = *(long *)(param_1 + 0x108) + uVar33 * 0xc;
  }
  uVar29 = (uint)*pbVar37;
  ppppbVar39 = (byte ****)0x51ef8ae8d;
  if ((*pbVar37 - 0xb < 2) && (0 < *(int *)(pbVar37 + 1))) {
    lVar19 = 0;
LAB_7102bb65f4:
    do {
      iVar11 = (int)lVar19;
      if (iVar11 < 0) {
LAB_7102bb662c:
        lVar13 = 0;
        pbVar35 = &DAT_7104742dbb;
      }
      else {
        pbVar35 = &DAT_7104742dbb;
        lVar13 = 0;
        if (uVar29 == 0xb) {
          if (*(int *)(pbVar37 + 1) <= iVar11) goto LAB_7102bb662c;
          pbVar35 = pbVar37 + *(int *)(pbVar37 + (long)iVar11 * 4 + 5);
          lVar13 = lVar18;
        }
      }
      pbVar8 = &DAT_7104742dbb;
      if ((*pbVar35 == 0xc) && (iVar11 = *(int *)(pbVar35 + 1) + -1, 0 < *(int *)(pbVar35 + 1))) {
        iVar23 = 0;
        do {
          iVar3 = iVar11 + iVar23;
          if (iVar3 < 0) {
            iVar3 = iVar3 + 1;
          }
          iVar3 = iVar3 >> 1;
          puVar1 = (uint *)(*(long *)(lVar13 + 0x28) + (long)*(int *)(pbVar35 + 5) + (long)iVar3 * 8
                           );
          uVar33 = *(ulong *)(*(long *)(lVar13 + 0x20) + (ulong)*puVar1 * 8);
          if (uVar33 == 0x569ff9e1b) {
            uVar29 = puVar1[1];
            if (-1 < (int)uVar29) {
              pbVar8 = pbVar35 + (int)uVar29;
            }
            break;
          }
          iVar6 = iVar3 + -1;
          if (uVar33 < 0x569ff9e1c) {
            iVar23 = iVar3 + 1;
            iVar6 = iVar11;
          }
          iVar11 = iVar6;
        } while (iVar23 <= iVar11);
      }
      uVar46 = 0xc2dc0000;
      if (*pbVar8 == 8) {
        uVar46 = *(undefined4 *)(pbVar8 + 1);
      }
      *(undefined4 *)(*plVar2 + lVar19 * 0xc) = uVar46;
      pbVar8 = &DAT_7104742dbb;
      if ((*pbVar35 == 0xc) && (iVar11 = *(int *)(pbVar35 + 1) + -1, 0 < *(int *)(pbVar35 + 1))) {
        iVar23 = 0;
        do {
          iVar3 = iVar11 + iVar23;
          if (iVar3 < 0) {
            iVar3 = iVar3 + 1;
          }
          iVar3 = iVar3 >> 1;
          puVar1 = (uint *)(*(long *)(lVar13 + 0x28) + (long)*(int *)(pbVar35 + 5) + (long)iVar3 * 8
                           );
          uVar33 = *(ulong *)(*(long *)(lVar13 + 0x20) + (ulong)*puVar1 * 8);
          if (uVar33 == 0x51ef8ae8d) {
            uVar29 = puVar1[1];
            if (-1 < (int)uVar29) {
              pbVar8 = pbVar35 + (int)uVar29;
            }
            break;
          }
          iVar6 = iVar3 + -1;
          if (uVar33 < 0x51ef8ae8e) {
            iVar23 = iVar3 + 1;
            iVar6 = iVar11;
          }
          iVar11 = iVar6;
        } while (iVar23 <= iVar11);
      }
      uVar46 = 0x43988000;
      if (*pbVar8 == 8) {
        uVar46 = *(undefined4 *)(pbVar8 + 1);
      }
      *(undefined4 *)(*plVar2 + lVar19 * 0xc + 4) = uVar46;
      pbVar8 = &DAT_7104742dbb;
      if ((*pbVar35 == 0xc) && (iVar11 = *(int *)(pbVar35 + 1) + -1, 0 < *(int *)(pbVar35 + 1))) {
        iVar23 = 0;
        do {
          iVar3 = iVar11 + iVar23;
          if (iVar3 < 0) {
            iVar3 = iVar3 + 1;
          }
          iVar3 = iVar3 >> 1;
          puVar1 = (uint *)(*(long *)(lVar13 + 0x28) + (long)*(int *)(pbVar35 + 5) + (long)iVar3 * 8
                           );
          uVar33 = *(ulong *)(*(long *)(lVar13 + 0x20) + (ulong)*puVar1 * 8);
          if (uVar33 == 0x587f1ff37) {
            uVar29 = puVar1[1];
            if (-1 < (int)uVar29) {
              pbVar8 = pbVar35 + (int)uVar29;
            }
            break;
          }
          iVar6 = iVar3 + -1;
          if (uVar33 < 0x587f1ff38) {
            iVar23 = iVar3 + 1;
            iVar6 = iVar11;
          }
          iVar11 = iVar6;
        } while (iVar23 <= iVar11);
      }
      uVar46 = 0xc2e60000;
      if (*pbVar8 == 8) {
        uVar46 = *(undefined4 *)(pbVar8 + 1);
      }
      lVar13 = lVar19 * 0xc;
      lVar19 = lVar19 + 1;
      *(undefined4 *)(*plVar2 + lVar13 + 8) = uVar46;
      uVar29 = (uint)*pbVar37;
      if (uVar29 - 0xb < 2) {
        if (*(int *)(pbVar37 + 1) <= lVar19) break;
        goto LAB_7102bb65f4;
      }
    } while (lVar19 < 0);
  }
  pcVar12 = (char *)*plVar9;
  if ((*pcVar12 == '\f') && (iVar11 = *(int *)(pcVar12 + 1) + -1, 0 < *(int *)(pcVar12 + 1))) {
    lVar18 = *param_2;
    iVar23 = 0;
    pbVar37 = &DAT_7104742dbb;
    do {
      iVar3 = iVar11 + iVar23;
      if (iVar3 < 0) {
        iVar3 = iVar3 + 1;
      }
      iVar3 = iVar3 >> 1;
      puVar1 = (uint *)(*(long *)(lVar18 + 0x28) + (long)*(int *)(pcVar12 + 5) + (long)iVar3 * 8);
      uVar33 = *(ulong *)(*(long *)(lVar18 + 0x20) + (ulong)*puVar1 * 8);
      if (uVar33 == 0x104d13d260) {
        uVar29 = puVar1[1];
        if ((int)uVar29 < 0) goto LAB_7102bb68e0;
        pbVar37 = (byte *)(pcVar12 + (int)uVar29);
        goto LAB_7102bb68ec;
      }
      iVar6 = iVar3 + -1;
      if (uVar33 < 0x104d13d261) {
        iVar23 = iVar3 + 1;
        iVar6 = iVar11;
      }
      iVar11 = iVar6;
    } while (iVar23 <= iVar11);
    lVar18 = 0;
  }
  else {
LAB_7102bb68e0:
    lVar18 = 0;
    pbVar37 = &DAT_7104742dbb;
  }
LAB_7102bb68ec:
  if (*pbVar37 - 0xb < 2) {
    iVar11 = *(int *)(pbVar37 + 1);
  }
  else {
    iVar11 = 0;
  }
  uVar33 = (ulong)iVar11;
  pvVar43 = *(void **)(param_1 + 0x120);
  puVar25 = *(undefined8 **)(param_1 + 0x128);
  sVar42 = (long)puVar25 - (long)pvVar43;
  lVar19 = (long)sVar42 >> 4;
  plVar2 = (long *)(param_1 + 0x120);
  if ((ulong)(lVar19 * -0x5555555555555555) < uVar33) {
    uVar24 = uVar33 + lVar19 * 0x5555555555555555;
    if ((ulong)((*(long *)(param_1 + 0x130) - (long)puVar25 >> 4) * -0x5555555555555555) < uVar24) {
      if (iVar11 < 0) goto LAB_7102bbde84;
      lVar13 = *(long *)(param_1 + 0x130) - (long)pvVar43 >> 4;
      if ((ulong)(lVar13 * -0x5555555555555555) < 0x2aaaaaaaaaaaaaa) {
        uVar14 = lVar13 * 0x5555555555555556;
        uVar20 = uVar33;
        if (uVar33 <= uVar14) {
          uVar20 = uVar14;
        }
        if (uVar20 != 0) goto LAB_7102bb6a14;
LAB_7102bb6a78:
        lVar13 = 0;
      }
      else {
        uVar20 = 0x555555555555555;
LAB_7102bb6a14:
        ppplVar15 = (long ***)(uVar20 * 0x30);
        if (ppplVar15 == (long ***)0x0) {
          ppplVar15 = (long ***)0x1;
        }
        lVar13 = FUN_710392e290(0x10,ppplVar15,(long ****)0x569ff9e1b,(byte ****)0x51ef8ae8d,param_5
                                ,param_6,param_7,param_8);
        if (lVar13 == 0) {
          if (DAT_7105332f00 != (long *)0x0) {
            local_84 = 0;
            pppplVar10 = &local_98;
            local_98 = ppplVar15;
            uVar14 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_84);
            if (((uVar14 & 1) != 0) &&
               (lVar13 = FUN_710392e290(0x10,ppplVar15,pppplVar10,ppppbVar39,param_5,param_6,param_7
                                        ,param_8), lVar13 != 0)) goto LAB_7102bb6a7c;
          }
          goto LAB_7102bb6a78;
        }
      }
LAB_7102bb6a7c:
      pvVar45 = (void *)(lVar13 + lVar19 * 0x10);
      memset(pvVar45,0,uVar24 * 0x30);
      lVar19 = SUB168(SEXT816((long)sVar42) * SEXT816(-0x2aaaaaaaaaaaaaab),8);
      pvVar45 = (void *)((long)pvVar45 + ((lVar19 >> 3) - (lVar19 >> 0x3f)) * 0x30);
      if (0 < (long)sVar42) {
        memcpy(pvVar45,pvVar43,sVar42);
      }
      *(ulong *)(param_1 + 0x130) = lVar13 + uVar20 * 0x30;
      *(void **)(param_1 + 0x120) = pvVar45;
      *(ulong *)(param_1 + 0x128) = lVar13 + uVar33 * 0x30;
      if (pvVar43 != (void *)0x0) {
        FUN_710392eb40((ulong)pvVar43);
      }
    }
    else {
      uVar33 = uVar24;
      if ((uVar24 & 1) != 0) {
        puVar25[4] = 0;
        puVar25[5] = 0;
        uVar33 = uVar24 - 1;
        puVar25[2] = 0;
        puVar25[3] = 0;
        *puVar25 = 0;
        puVar25[1] = 0;
        puVar25 = (undefined8 *)(*(long *)(param_1 + 0x128) + 0x30);
        *(undefined8 **)(param_1 + 0x128) = puVar25;
      }
      if (uVar24 != 1) {
        do {
          puVar25[4] = 0;
          puVar25[5] = 0;
          uVar33 = uVar33 - 2;
          puVar25[2] = 0;
          puVar25[3] = 0;
          *puVar25 = 0;
          puVar25[1] = 0;
          lVar19 = *(long *)(param_1 + 0x128);
          *(long *)(param_1 + 0x128) = lVar19 + 0x30;
          *(undefined8 *)(lVar19 + 0x50) = 0;
          *(undefined8 *)(lVar19 + 0x58) = 0;
          *(undefined8 *)(lVar19 + 0x40) = 0;
          *(undefined8 *)(lVar19 + 0x48) = 0;
          *(undefined8 *)(lVar19 + 0x30) = 0;
          *(undefined8 *)(lVar19 + 0x38) = 0;
          puVar25 = (undefined8 *)(*(long *)(param_1 + 0x128) + 0x30);
          *(undefined8 **)(param_1 + 0x128) = puVar25;
        } while (uVar33 != 0);
      }
    }
  }
  else if (lVar19 * -0x5555555555555555 - uVar33 != 0) {
    *(void **)(param_1 + 0x128) = (void *)((long)pvVar43 + uVar33 * 0x30);
  }
  uVar33 = (ulong)*pbVar37;
  if ((*pbVar37 - 0xb < 2) && (0 < *(int *)(pbVar37 + 1))) {
    uVar46 = 0;
    lVar19 = 0;
    param_5 = (long ****)&DAT_7104742dbb;
LAB_7102bb6c04:
    do {
      iVar11 = (int)lVar19;
      if (iVar11 < 0) {
LAB_7102bb6c3c:
        lVar13 = 0;
        pppplVar10 = (long ****)&DAT_7104742dbb;
      }
      else {
        pppplVar10 = param_5;
        lVar13 = 0;
        if ((int)uVar33 == 0xb) {
          if (*(int *)(pbVar37 + 1) <= iVar11) goto LAB_7102bb6c3c;
          pppplVar10 = (long ****)(pbVar37 + *(int *)(pbVar37 + (long)iVar11 * 4 + 5));
          lVar13 = lVar18;
        }
      }
      pppplVar44 = param_5;
      if ((*(byte *)pppplVar10 == 0xc) &&
         (iVar11 = *(int *)((long)pppplVar10 + 1) + -1, 0 < *(int *)((long)pppplVar10 + 1))) {
        iVar23 = 0;
        do {
          iVar3 = iVar11 + iVar23;
          if (iVar3 < 0) {
            iVar3 = iVar3 + 1;
          }
          iVar3 = iVar3 >> 1;
          puVar1 = (uint *)(*(long *)(lVar13 + 0x28) + (long)*(int *)((long)pppplVar10 + 5) +
                           (long)iVar3 * 8);
          uVar33 = *(ulong *)(*(long *)(lVar13 + 0x20) + (ulong)*puVar1 * 8);
          if (uVar33 == 0x5c01aa2d7) {
            uVar29 = puVar1[1];
            if (-1 < (int)uVar29) {
              pppplVar44 = (long ****)((long)pppplVar10 + (long)(int)uVar29);
            }
            break;
          }
          iVar6 = iVar3 + -1;
          if (uVar33 < 0x5c01aa2d8) {
            iVar23 = iVar3 + 1;
            iVar6 = iVar11;
          }
          iVar11 = iVar6;
        } while (iVar23 <= iVar11);
      }
      uVar47 = uVar46;
      if (*(byte *)pppplVar44 == 8) {
        uVar47 = *(undefined4 *)((long)pppplVar44 + 1);
      }
      *(undefined4 *)(*plVar2 + lVar19 * 0x30) = uVar47;
      pppplVar44 = param_5;
      if ((*(byte *)pppplVar10 == 0xc) &&
         (iVar11 = *(int *)((long)pppplVar10 + 1) + -1, 0 < *(int *)((long)pppplVar10 + 1))) {
        iVar23 = 0;
        do {
          iVar3 = iVar11 + iVar23;
          if (iVar3 < 0) {
            iVar3 = iVar3 + 1;
          }
          iVar3 = iVar3 >> 1;
          puVar1 = (uint *)(*(long *)(lVar13 + 0x28) + (long)*(int *)((long)pppplVar10 + 5) +
                           (long)iVar3 * 8);
          uVar33 = *(ulong *)(*(long *)(lVar13 + 0x20) + (ulong)*puVar1 * 8);
          if (uVar33 == 0x51d0555fa) {
            uVar29 = puVar1[1];
            if (-1 < (int)uVar29) {
              pppplVar44 = (long ****)((long)pppplVar10 + (long)(int)uVar29);
            }
            break;
          }
          iVar6 = iVar3 + -1;
          if (uVar33 < 0x51d0555fb) {
            iVar23 = iVar3 + 1;
            iVar6 = iVar11;
          }
          iVar11 = iVar6;
        } while (iVar23 <= iVar11);
      }
      uVar47 = 0xc3c80000;
      if (*(byte *)pppplVar44 == 8) {
        uVar47 = *(undefined4 *)((long)pppplVar44 + 1);
      }
      *(undefined4 *)(*plVar2 + lVar19 * 0x30 + 4) = uVar47;
      pppplVar44 = param_5;
      if ((*(byte *)pppplVar10 == 0xc) &&
         (iVar11 = *(int *)((long)pppplVar10 + 1) + -1, 0 < *(int *)((long)pppplVar10 + 1))) {
        iVar23 = 0;
        do {
          iVar3 = iVar11 + iVar23;
          if (iVar3 < 0) {
            iVar3 = iVar3 + 1;
          }
          iVar3 = iVar3 >> 1;
          puVar1 = (uint *)(*(long *)(lVar13 + 0x28) + (long)*(int *)((long)pppplVar10 + 5) +
                           (long)iVar3 * 8);
          uVar33 = *(ulong *)(*(long *)(lVar13 + 0x20) + (ulong)*puVar1 * 8);
          if (uVar33 == 0x5b71d9241) {
            uVar29 = puVar1[1];
            if (-1 < (int)uVar29) {
              pppplVar44 = (long ****)((long)pppplVar10 + (long)(int)uVar29);
            }
            break;
          }
          iVar6 = iVar3 + -1;
          if (uVar33 < 0x5b71d9242) {
            iVar23 = iVar3 + 1;
            iVar6 = iVar11;
          }
          iVar11 = iVar6;
        } while (iVar23 <= iVar11);
      }
      uVar47 = uVar46;
      if (*(byte *)pppplVar44 == 8) {
        uVar47 = *(undefined4 *)((long)pppplVar44 + 1);
      }
      *(undefined4 *)(*plVar2 + lVar19 * 0x30 + 8) = uVar47;
      pppplVar44 = param_5;
      if ((*(byte *)pppplVar10 == 0xc) &&
         (iVar11 = *(int *)((long)pppplVar10 + 1) + -1, 0 < *(int *)((long)pppplVar10 + 1))) {
        iVar23 = 0;
        do {
          iVar3 = iVar11 + iVar23;
          if (iVar3 < 0) {
            iVar3 = iVar3 + 1;
          }
          iVar3 = iVar3 >> 1;
          puVar1 = (uint *)(*(long *)(lVar13 + 0x28) + (long)*(int *)((long)pppplVar10 + 5) +
                           (long)iVar3 * 8);
          uVar33 = *(ulong *)(*(long *)(lVar13 + 0x20) + (ulong)*puVar1 * 8);
          if (uVar33 == 0x56a02656c) {
            uVar29 = puVar1[1];
            if (-1 < (int)uVar29) {
              pppplVar44 = (long ****)((long)pppplVar10 + (long)(int)uVar29);
            }
            break;
          }
          iVar6 = iVar3 + -1;
          if (uVar33 < 0x56a02656d) {
            iVar23 = iVar3 + 1;
            iVar6 = iVar11;
          }
          iVar11 = iVar6;
        } while (iVar23 <= iVar11);
      }
      uVar47 = 0x43160000;
      if (*(byte *)pppplVar44 == 8) {
        uVar47 = *(undefined4 *)((long)pppplVar44 + 1);
      }
      *(undefined4 *)(*plVar2 + lVar19 * 0x30 + 0xc) = uVar47;
      pppplVar44 = param_5;
      if ((*(byte *)pppplVar10 == 0xc) &&
         (iVar11 = *(int *)((long)pppplVar10 + 1) + -1, 0 < *(int *)((long)pppplVar10 + 1))) {
        iVar23 = 0;
        do {
          iVar3 = iVar11 + iVar23;
          if (iVar3 < 0) {
            iVar3 = iVar3 + 1;
          }
          iVar3 = iVar3 >> 1;
          puVar1 = (uint *)(*(long *)(lVar13 + 0x28) + (long)*(int *)((long)pppplVar10 + 5) +
                           (long)iVar3 * 8);
          uVar33 = *(ulong *)(*(long *)(lVar13 + 0x20) + (ulong)*puVar1 * 8);
          if (uVar33 == 0xecc51395a) {
            uVar29 = puVar1[1];
            if (-1 < (int)uVar29) {
              pppplVar44 = (long ****)((long)pppplVar10 + (long)(int)uVar29);
            }
            break;
          }
          iVar6 = iVar3 + -1;
          if (uVar33 < 0xecc51395b) {
            iVar23 = iVar3 + 1;
            iVar6 = iVar11;
          }
          iVar11 = iVar6;
        } while (iVar23 <= iVar11);
      }
      uVar47 = 0x38d1b717;
      if (*(byte *)pppplVar44 == 8) {
        uVar47 = *(undefined4 *)((long)pppplVar44 + 1);
      }
      *(undefined4 *)(*plVar2 + lVar19 * 0x30 + 0x10) = uVar47;
      pppplVar44 = param_5;
      if ((*(byte *)pppplVar10 == 0xc) &&
         (iVar11 = *(int *)((long)pppplVar10 + 1) + -1, 0 < *(int *)((long)pppplVar10 + 1))) {
        iVar23 = 0;
        do {
          iVar3 = iVar11 + iVar23;
          if (iVar3 < 0) {
            iVar3 = iVar3 + 1;
          }
          iVar3 = iVar3 >> 1;
          puVar1 = (uint *)(*(long *)(lVar13 + 0x28) + (long)*(int *)((long)pppplVar10 + 5) +
                           (long)iVar3 * 8);
          uVar33 = *(ulong *)(*(long *)(lVar13 + 0x20) + (ulong)*puVar1 * 8);
          if (uVar33 == 0x126e65e824) {
            uVar29 = puVar1[1];
            if (-1 < (int)uVar29) {
              pppplVar44 = (long ****)((long)pppplVar10 + (long)(int)uVar29);
            }
            break;
          }
          iVar6 = iVar3 + -1;
          if (uVar33 < 0x126e65e825) {
            iVar23 = iVar3 + 1;
            iVar6 = iVar11;
          }
          iVar11 = iVar6;
        } while (iVar23 <= iVar11);
      }
      uVar47 = 0x3b03126f;
      if (*(byte *)pppplVar44 == 8) {
        uVar47 = *(undefined4 *)((long)pppplVar44 + 1);
      }
      *(undefined4 *)(*plVar2 + lVar19 * 0x30 + 0x14) = uVar47;
      pppplVar44 = param_5;
      if ((*(byte *)pppplVar10 == 0xc) &&
         (iVar11 = *(int *)((long)pppplVar10 + 1) + -1, 0 < *(int *)((long)pppplVar10 + 1))) {
        iVar23 = 0;
        do {
          iVar3 = iVar11 + iVar23;
          if (iVar3 < 0) {
            iVar3 = iVar3 + 1;
          }
          iVar3 = iVar3 >> 1;
          puVar1 = (uint *)(*(long *)(lVar13 + 0x28) + (long)*(int *)((long)pppplVar10 + 5) +
                           (long)iVar3 * 8);
          uVar33 = *(ulong *)(*(long *)(lVar13 + 0x20) + (ulong)*puVar1 * 8);
          if (uVar33 == 0x8008bc31a) {
            uVar29 = puVar1[1];
            if (-1 < (int)uVar29) {
              pppplVar44 = (long ****)((long)pppplVar10 + (long)(int)uVar29);
            }
            break;
          }
          iVar6 = iVar3 + -1;
          if (uVar33 < 0x8008bc31b) {
            iVar23 = iVar3 + 1;
            iVar6 = iVar11;
          }
          iVar11 = iVar6;
        } while (iVar23 <= iVar11);
      }
      uVar47 = uVar46;
      if (*(byte *)pppplVar44 == 8) {
        uVar47 = *(undefined4 *)((long)pppplVar44 + 1);
      }
      *(undefined4 *)(*plVar2 + lVar19 * 0x30 + 0x18) = uVar47;
      pppplVar44 = param_5;
      if ((*(byte *)pppplVar10 == 0xc) &&
         (iVar11 = *(int *)((long)pppplVar10 + 1) + -1, 0 < *(int *)((long)pppplVar10 + 1))) {
        iVar23 = 0;
        do {
          iVar3 = iVar11 + iVar23;
          if (iVar3 < 0) {
            iVar3 = iVar3 + 1;
          }
          iVar3 = iVar3 >> 1;
          puVar1 = (uint *)(*(long *)(lVar13 + 0x28) + (long)*(int *)((long)pppplVar10 + 5) +
                           (long)iVar3 * 8);
          uVar33 = *(ulong *)(*(long *)(lVar13 + 0x20) + (ulong)*puVar1 * 8);
          if (uVar33 == 0x83c86fc43) {
            uVar29 = puVar1[1];
            if (-1 < (int)uVar29) {
              pppplVar44 = (long ****)((long)pppplVar10 + (long)(int)uVar29);
            }
            break;
          }
          iVar6 = iVar3 + -1;
          if (uVar33 < 0x83c86fc44) {
            iVar23 = iVar3 + 1;
            iVar6 = iVar11;
          }
          iVar11 = iVar6;
        } while (iVar23 <= iVar11);
      }
      uVar47 = 0x41700000;
      if (*(byte *)pppplVar44 == 8) {
        uVar47 = *(undefined4 *)((long)pppplVar44 + 1);
      }
      *(undefined4 *)(*plVar2 + lVar19 * 0x30 + 0x1c) = uVar47;
      pppplVar44 = param_5;
      if ((*(byte *)pppplVar10 == 0xc) &&
         (iVar11 = *(int *)((long)pppplVar10 + 1) + -1, 0 < *(int *)((long)pppplVar10 + 1))) {
        iVar23 = 0;
        do {
          iVar3 = iVar11 + iVar23;
          if (iVar3 < 0) {
            iVar3 = iVar3 + 1;
          }
          iVar3 = iVar3 >> 1;
          puVar1 = (uint *)(*(long *)(lVar13 + 0x28) + (long)*(int *)((long)pppplVar10 + 5) +
                           (long)iVar3 * 8);
          uVar33 = *(ulong *)(*(long *)(lVar13 + 0x20) + (ulong)*puVar1 * 8);
          if (uVar33 == 0x8a5e43855) {
            uVar29 = puVar1[1];
            if (-1 < (int)uVar29) {
              pppplVar44 = (long ****)((long)pppplVar10 + (long)(int)uVar29);
            }
            break;
          }
          iVar6 = iVar3 + -1;
          if (uVar33 < 0x8a5e43856) {
            iVar23 = iVar3 + 1;
            iVar6 = iVar11;
          }
          iVar11 = iVar6;
        } while (iVar23 <= iVar11);
      }
      uVar47 = 0x44228000;
      if (*(byte *)pppplVar44 == 8) {
        uVar47 = *(undefined4 *)((long)pppplVar44 + 1);
      }
      *(undefined4 *)(*plVar2 + lVar19 * 0x30 + 0x20) = uVar47;
      pppplVar44 = param_5;
      if ((*(byte *)pppplVar10 == 0xc) &&
         (iVar11 = *(int *)((long)pppplVar10 + 1) + -1, 0 < *(int *)((long)pppplVar10 + 1))) {
        iVar23 = 0;
        do {
          iVar3 = iVar11 + iVar23;
          if (iVar3 < 0) {
            iVar3 = iVar3 + 1;
          }
          iVar3 = iVar3 >> 1;
          puVar1 = (uint *)(*(long *)(lVar13 + 0x28) + (long)*(int *)((long)pppplVar10 + 5) +
                           (long)iVar3 * 8);
          uVar33 = *(ulong *)(*(long *)(lVar13 + 0x20) + (ulong)*puVar1 * 8);
          if (uVar33 == 0x899e9070c) {
            uVar29 = puVar1[1];
            if (-1 < (int)uVar29) {
              pppplVar44 = (long ****)((long)pppplVar10 + (long)(int)uVar29);
            }
            break;
          }
          iVar6 = iVar3 + -1;
          if (uVar33 < 0x899e9070d) {
            iVar23 = iVar3 + 1;
            iVar6 = iVar11;
          }
          iVar11 = iVar6;
        } while (iVar23 <= iVar11);
      }
      uVar47 = 0x44480000;
      if (*(byte *)pppplVar44 == 8) {
        uVar47 = *(undefined4 *)((long)pppplVar44 + 1);
      }
      *(undefined4 *)(*plVar2 + lVar19 * 0x30 + 0x24) = uVar47;
      pppplVar44 = param_5;
      if ((*(byte *)pppplVar10 == 0xc) &&
         (iVar11 = *(int *)((long)pppplVar10 + 1) + -1, 0 < *(int *)((long)pppplVar10 + 1))) {
        iVar23 = 0;
        do {
          iVar3 = iVar11 + iVar23;
          if (iVar3 < 0) {
            iVar3 = iVar3 + 1;
          }
          iVar3 = iVar3 >> 1;
          puVar1 = (uint *)(*(long *)(lVar13 + 0x28) + (long)*(int *)((long)pppplVar10 + 5) +
                           (long)iVar3 * 8);
          uVar33 = *(ulong *)(*(long *)(lVar13 + 0x20) + (ulong)*puVar1 * 8);
          if (uVar33 == 0x8cc532c51) {
            uVar29 = puVar1[1];
            if (-1 < (int)uVar29) {
              pppplVar44 = (long ****)((long)pppplVar10 + (long)(int)uVar29);
            }
            break;
          }
          iVar6 = iVar3 + -1;
          if (uVar33 < 0x8cc532c52) {
            iVar23 = iVar3 + 1;
            iVar6 = iVar11;
          }
          iVar11 = iVar6;
        } while (iVar23 <= iVar11);
      }
      uVar47 = 0x41f00000;
      if (*(byte *)pppplVar44 == 8) {
        uVar47 = *(undefined4 *)((long)pppplVar44 + 1);
      }
      *(undefined4 *)(*plVar2 + lVar19 * 0x30 + 0x28) = uVar47;
      param_8 = param_5;
      if ((*(byte *)pppplVar10 == 0xc) &&
         (iVar11 = *(int *)((long)pppplVar10 + 1) + -1, 0 < *(int *)((long)pppplVar10 + 1))) {
        iVar23 = 0;
        do {
          iVar3 = iVar11 + iVar23;
          if (iVar3 < 0) {
            iVar3 = iVar3 + 1;
          }
          iVar3 = iVar3 >> 1;
          puVar1 = (uint *)(*(long *)(lVar13 + 0x28) + (long)*(int *)((long)pppplVar10 + 5) +
                           (long)iVar3 * 8);
          uVar33 = *(ulong *)(*(long *)(lVar13 + 0x20) + (ulong)*puVar1 * 8);
          if (uVar33 == 0x8f05e1308) {
            uVar29 = puVar1[1];
            if (-1 < (int)uVar29) {
              param_8 = (long ****)((long)pppplVar10 + (long)(int)uVar29);
            }
            break;
          }
          iVar6 = iVar3 + -1;
          if (uVar33 < 0x8f05e1309) {
            iVar23 = iVar3 + 1;
            iVar6 = iVar11;
          }
          iVar11 = iVar6;
        } while (iVar23 <= iVar11);
      }
      uVar47 = 0x42700000;
      if (*(byte *)param_8 == 8) {
        uVar47 = *(undefined4 *)((long)param_8 + 1);
      }
      lVar13 = lVar19 * 0x30;
      lVar19 = lVar19 + 1;
      *(undefined4 *)(*plVar2 + lVar13 + 0x2c) = uVar47;
      uVar33 = (ulong)*pbVar37;
      if (*pbVar37 - 0xb < 2) {
        param_7 = (byte ***)(ulong)*(uint *)(pbVar37 + 1);
        if ((int)*(uint *)(pbVar37 + 1) <= lVar19) break;
        goto LAB_7102bb6c04;
      }
      param_7 = (byte ***)0x0;
    } while (lVar19 < 0);
  }
  pcVar12 = (char *)*plVar9;
  if (*pcVar12 == '\f') {
    iVar11 = *(int *)(pcVar12 + 1) + -1;
    if (*(int *)(pcVar12 + 1) < 1) {
LAB_7102bb74bc:
      local_b0 = 0;
      pbVar37 = &DAT_7104742dbb;
    }
    else {
      local_b0 = *param_2;
      pbVar37 = &DAT_7104742dbb;
      iVar23 = 0;
      do {
        iVar3 = iVar11 + iVar23;
        if (iVar3 < 0) {
          iVar3 = iVar3 + 1;
        }
        iVar3 = iVar3 >> 1;
        puVar1 = (uint *)(*(long *)(local_b0 + 0x28) + (long)*(int *)(pcVar12 + 5) + (long)iVar3 * 8
                         );
        uVar24 = *(ulong *)(*(long *)(local_b0 + 0x20) + (ulong)*puVar1 * 8);
        if (uVar24 == 0xde7d97abb) {
          uVar29 = puVar1[1];
          if ((int)uVar29 < 0) goto LAB_7102bb74bc;
          pbVar37 = (byte *)(pcVar12 + (int)uVar29);
          goto LAB_7102bb74c8;
        }
        iVar6 = iVar3 + -1;
        if (uVar24 < 0xde7d97abc) {
          iVar23 = iVar3 + 1;
          iVar6 = iVar11;
        }
        iVar11 = iVar6;
      } while (iVar23 <= iVar11);
      local_b0 = 0;
    }
  }
  else {
    local_b0 = 0;
    pbVar37 = &DAT_7104742dbb;
  }
LAB_7102bb74c8:
  if (*pbVar37 - 0xb < 2) {
    iVar11 = *(int *)(pbVar37 + 1);
  }
  else {
    iVar11 = 0;
  }
  pbVar8 = *(byte **)(param_1 + 0x138);
  pbVar35 = *(byte **)(param_1 + 0x140);
  uVar20 = (ulong)iVar11;
  ppppbVar39 = (byte ****)0x51ef8ae8d;
  plVar2 = (long *)(param_1 + 0x138);
  uVar24 = (long)pbVar35 - (long)pbVar8 >> 5;
  if (uVar24 < uVar20) {
    uVar14 = uVar20 - uVar24;
    if ((ulong)(*(long *)(param_1 + 0x148) - (long)pbVar35 >> 5) < uVar14) {
      if (iVar11 < 0) goto LAB_7102bbde84;
      lVar18 = *(long *)(param_1 + 0x148) - (long)pbVar8;
      if ((ulong)(lVar18 >> 5) < 0x3ffffffffffffff) {
        uVar17 = lVar18 >> 4;
        uVar16 = uVar20;
        if (uVar20 <= uVar17) {
          uVar16 = uVar17;
        }
        if (uVar16 != 0) {
          if (uVar16 >> 0x3b != 0) goto LAB_7102bbb008;
          goto LAB_7102bb7630;
        }
LAB_7102bb7690:
        lVar18 = 0;
      }
      else {
        uVar16 = 0x7ffffffffffffff;
LAB_7102bb7630:
        ppplVar15 = (long ***)(uVar16 * 0x20);
        if (ppplVar15 == (long ***)0x0) {
          ppplVar15 = (long ***)0x1;
        }
        lVar18 = FUN_710392e290(0x10,ppplVar15,(long ****)0x569ff9e1b,(byte ****)0x51ef8ae8d,param_5
                                ,uVar33,param_7,param_8);
        if (lVar18 == 0) {
          if (DAT_7105332f00 != (long *)0x0) {
            local_84 = 0;
            pppplVar10 = &local_98;
            local_98 = ppplVar15;
            uVar17 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_84);
            if (((uVar17 & 1) != 0) &&
               (lVar18 = FUN_710392e290(0x10,ppplVar15,pppplVar10,ppppbVar39,param_5,uVar33,param_7,
                                        param_8), lVar18 != 0)) goto LAB_7102bb7694;
          }
          goto LAB_7102bb7690;
        }
      }
LAB_7102bb7694:
      pvVar43 = (void *)(lVar18 + uVar24 * 0x20);
      lVar19 = lVar18 + uVar16 * 0x20;
      memset(pvVar43,0,uVar14 * 0x20);
      lVar13 = lVar18 + uVar20 * 0x20;
      if ((long)pbVar35 - (long)pbVar8 == 0) {
        *(void **)(param_1 + 0x138) = pvVar43;
        *(long *)(param_1 + 0x140) = lVar13;
        *(long *)(param_1 + 0x148) = lVar19;
      }
      else {
        uVar14 = ((long)pbVar35 - (long)pbVar8) - 0x20;
        uVar16 = uVar14 >> 5;
        uVar29 = (int)uVar16 + 1;
        uVar20 = (ulong)uVar29 & 3;
        if ((uVar29 & 3) != 0) {
          lVar28 = -uVar20;
          puVar31 = (undefined4 *)((long)pvVar43 + -8);
          pbVar34 = pbVar35;
          do {
            pbVar32 = pbVar34 + -0x20;
            uVar30 = *(undefined8 *)pbVar32;
            uVar27 = *(undefined8 *)(pbVar34 + -0x10);
            *(undefined8 *)(puVar31 + -4) = *(undefined8 *)(pbVar34 + -0x18);
            *(undefined8 *)(puVar31 + -2) = uVar27;
            *(undefined8 *)(puVar31 + -6) = uVar30;
            uVar46 = *(undefined4 *)(pbVar34 + -8);
            bVar5 = pbVar34[-4];
            lVar28 = lVar28 + 1;
            pbVar34[-0x18] = 0;
            pbVar34[-0x17] = 0;
            pbVar34[-0x16] = 0;
            pbVar34[-0x15] = 0;
            pbVar34[-0x14] = 0;
            pbVar34[-0x13] = 0;
            pbVar34[-0x12] = 0;
            pbVar34[-0x11] = 0;
            pbVar34[-0x10] = 0;
            pbVar34[-0xf] = 0;
            pbVar34[-0xe] = 0;
            pbVar34[-0xd] = 0;
            pbVar34[-0xc] = 0;
            pbVar34[-0xb] = 0;
            pbVar34[-10] = 0;
            pbVar34[-9] = 0;
            pbVar32[0] = 0;
            pbVar32[1] = 0;
            pbVar32[2] = 0;
            pbVar32[3] = 0;
            pbVar32[4] = 0;
            pbVar32[5] = 0;
            pbVar32[6] = 0;
            pbVar32[7] = 0;
            *(byte *)(puVar31 + 1) = bVar5;
            *puVar31 = uVar46;
            puVar31 = puVar31 + -8;
            pbVar34 = pbVar32;
          } while (lVar28 != 0);
          pvVar43 = (void *)(lVar18 + (uVar24 - uVar20) * 0x20);
          pbVar35 = pbVar35 + uVar20 * -0x20;
        }
        if (0x5f < uVar14) {
          puVar25 = (undefined8 *)((long)pvVar43 + -0x40);
          do {
            uVar30 = *(undefined8 *)(pbVar35 + -0x20);
            uVar27 = *(undefined8 *)(pbVar35 + -0x10);
            puVar25[5] = *(undefined8 *)(pbVar35 + -0x18);
            puVar25[6] = uVar27;
            puVar25[4] = uVar30;
            uVar46 = *(undefined4 *)(pbVar35 + -8);
            pbVar35[-0x20] = 0;
            pbVar35[-0x1f] = 0;
            pbVar35[-0x1e] = 0;
            pbVar35[-0x1d] = 0;
            pbVar35[-0x1c] = 0;
            pbVar35[-0x1b] = 0;
            pbVar35[-0x1a] = 0;
            pbVar35[-0x19] = 0;
            pbVar35[-0x18] = 0;
            pbVar35[-0x17] = 0;
            pbVar35[-0x16] = 0;
            pbVar35[-0x15] = 0;
            pbVar35[-0x14] = 0;
            pbVar35[-0x13] = 0;
            pbVar35[-0x12] = 0;
            pbVar35[-0x11] = 0;
            pbVar35[-0x10] = 0;
            pbVar35[-0xf] = 0;
            pbVar35[-0xe] = 0;
            pbVar35[-0xd] = 0;
            pbVar35[-0xc] = 0;
            pbVar35[-0xb] = 0;
            pbVar35[-10] = 0;
            pbVar35[-9] = 0;
            *(byte *)((long)puVar25 + 0x3c) = pbVar35[-4];
            *(undefined4 *)(puVar25 + 7) = uVar46;
            uVar30 = *(undefined8 *)(pbVar35 + -0x40);
            uVar27 = *(undefined8 *)(pbVar35 + -0x30);
            puVar25[1] = *(undefined8 *)(pbVar35 + -0x38);
            puVar25[2] = uVar27;
            *puVar25 = uVar30;
            uVar46 = *(undefined4 *)(pbVar35 + -0x28);
            pbVar35[-0x38] = 0;
            pbVar35[-0x37] = 0;
            pbVar35[-0x36] = 0;
            pbVar35[-0x35] = 0;
            pbVar35[-0x34] = 0;
            pbVar35[-0x33] = 0;
            pbVar35[-0x32] = 0;
            pbVar35[-0x31] = 0;
            pbVar35[-0x30] = 0;
            pbVar35[-0x2f] = 0;
            pbVar35[-0x2e] = 0;
            pbVar35[-0x2d] = 0;
            pbVar35[-0x2c] = 0;
            pbVar35[-0x2b] = 0;
            pbVar35[-0x2a] = 0;
            pbVar35[-0x29] = 0;
            pbVar35[-0x40] = 0;
            pbVar35[-0x3f] = 0;
            pbVar35[-0x3e] = 0;
            pbVar35[-0x3d] = 0;
            pbVar35[-0x3c] = 0;
            pbVar35[-0x3b] = 0;
            pbVar35[-0x3a] = 0;
            pbVar35[-0x39] = 0;
            *(byte *)((long)puVar25 + 0x1c) = pbVar35[-0x24];
            *(undefined4 *)(puVar25 + 3) = uVar46;
            uVar27 = *(undefined8 *)(pbVar35 + -0x50);
            uVar30 = *(undefined8 *)(pbVar35 + -0x58);
            puVar25[-4] = *(undefined8 *)(pbVar35 + -0x60);
            puVar25[-3] = uVar30;
            puVar25[-2] = uVar27;
            uVar46 = *(undefined4 *)(pbVar35 + -0x48);
            pbVar35[-0x58] = 0;
            pbVar35[-0x57] = 0;
            pbVar35[-0x56] = 0;
            pbVar35[-0x55] = 0;
            pbVar35[-0x54] = 0;
            pbVar35[-0x53] = 0;
            pbVar35[-0x52] = 0;
            pbVar35[-0x51] = 0;
            pbVar35[-0x50] = 0;
            pbVar35[-0x4f] = 0;
            pbVar35[-0x4e] = 0;
            pbVar35[-0x4d] = 0;
            pbVar35[-0x4c] = 0;
            pbVar35[-0x4b] = 0;
            pbVar35[-0x4a] = 0;
            pbVar35[-0x49] = 0;
            pbVar35[-0x60] = 0;
            pbVar35[-0x5f] = 0;
            pbVar35[-0x5e] = 0;
            pbVar35[-0x5d] = 0;
            pbVar35[-0x5c] = 0;
            pbVar35[-0x5b] = 0;
            pbVar35[-0x5a] = 0;
            pbVar35[-0x59] = 0;
            *(byte *)((long)puVar25 + -4) = pbVar35[-0x44];
            *(undefined4 *)(puVar25 + -1) = uVar46;
            pbVar34 = pbVar35 + -0x80;
            uVar30 = *(undefined8 *)(pbVar35 + -0x78);
            uVar27 = *(undefined8 *)(pbVar35 + -0x70);
            puVar25[-8] = *(undefined8 *)pbVar34;
            puVar25[-7] = uVar30;
            puVar25[-6] = uVar27;
            uVar46 = *(undefined4 *)(pbVar35 + -0x68);
            bVar5 = pbVar35[-100];
            pbVar35[-0x78] = 0;
            pbVar35[-0x77] = 0;
            pbVar35[-0x76] = 0;
            pbVar35[-0x75] = 0;
            pbVar35[-0x74] = 0;
            pbVar35[-0x73] = 0;
            pbVar35[-0x72] = 0;
            pbVar35[-0x71] = 0;
            pbVar35[-0x70] = 0;
            pbVar35[-0x6f] = 0;
            pbVar35[-0x6e] = 0;
            pbVar35[-0x6d] = 0;
            pbVar35[-0x6c] = 0;
            pbVar35[-0x6b] = 0;
            pbVar35[-0x6a] = 0;
            pbVar35[-0x69] = 0;
            pbVar34[0] = 0;
            pbVar34[1] = 0;
            pbVar34[2] = 0;
            pbVar34[3] = 0;
            pbVar34[4] = 0;
            pbVar34[5] = 0;
            pbVar34[6] = 0;
            pbVar34[7] = 0;
            *(byte *)((long)puVar25 + -0x24) = bVar5;
            *(undefined4 *)(puVar25 + -5) = uVar46;
            puVar25 = puVar25 + -0x10;
            pbVar35 = pbVar34;
          } while (pbVar8 != pbVar34);
        }
        pbVar8 = *(byte **)(param_1 + 0x138);
        pbVar35 = *(byte **)(param_1 + 0x140);
        *(ulong *)(param_1 + 0x138) = lVar18 + (uVar24 + ~uVar16) * 0x20;
        *(long *)(param_1 + 0x140) = lVar13;
        *(long *)(param_1 + 0x148) = lVar19;
        while (pbVar34 = pbVar35, pbVar34 != pbVar8) {
          pbVar35 = pbVar34 + -0x20;
          if (((*pbVar35 & 1) != 0) && (*(ulong *)(pbVar34 + -0x10) != 0)) {
            FUN_710392eb40(*(ulong *)(pbVar34 + -0x10));
          }
        }
      }
      if (pbVar8 != (byte *)0x0) {
        FUN_710392eb40((ulong)pbVar8);
      }
    }
    else {
      uVar24 = uVar14;
      if ((uVar14 & 1) != 0) {
        pbVar35[0x10] = 0;
        pbVar35[0x11] = 0;
        pbVar35[0x12] = 0;
        pbVar35[0x13] = 0;
        pbVar35[0x14] = 0;
        pbVar35[0x15] = 0;
        pbVar35[0x16] = 0;
        pbVar35[0x17] = 0;
        pbVar35[0x18] = 0;
        pbVar35[0x19] = 0;
        pbVar35[0x1a] = 0;
        pbVar35[0x1b] = 0;
        pbVar35[0x1c] = 0;
        pbVar35[0x1d] = 0;
        pbVar35[0x1e] = 0;
        pbVar35[0x1f] = 0;
        pbVar35[0] = 0;
        pbVar35[1] = 0;
        pbVar35[2] = 0;
        pbVar35[3] = 0;
        pbVar35[4] = 0;
        pbVar35[5] = 0;
        pbVar35[6] = 0;
        pbVar35[7] = 0;
        pbVar35[8] = 0;
        pbVar35[9] = 0;
        pbVar35[10] = 0;
        pbVar35[0xb] = 0;
        pbVar35[0xc] = 0;
        pbVar35[0xd] = 0;
        pbVar35[0xe] = 0;
        pbVar35[0xf] = 0;
        pbVar35 = (byte *)(*(long *)(param_1 + 0x140) + 0x20);
        uVar24 = uVar14 - 1;
        *(byte **)(param_1 + 0x140) = pbVar35;
      }
      if (uVar14 != 1) {
        do {
          pbVar35[0x10] = 0;
          pbVar35[0x11] = 0;
          pbVar35[0x12] = 0;
          pbVar35[0x13] = 0;
          pbVar35[0x14] = 0;
          pbVar35[0x15] = 0;
          pbVar35[0x16] = 0;
          pbVar35[0x17] = 0;
          pbVar35[0x18] = 0;
          pbVar35[0x19] = 0;
          pbVar35[0x1a] = 0;
          pbVar35[0x1b] = 0;
          pbVar35[0x1c] = 0;
          pbVar35[0x1d] = 0;
          pbVar35[0x1e] = 0;
          pbVar35[0x1f] = 0;
          uVar24 = uVar24 - 2;
          pbVar35[0] = 0;
          pbVar35[1] = 0;
          pbVar35[2] = 0;
          pbVar35[3] = 0;
          pbVar35[4] = 0;
          pbVar35[5] = 0;
          pbVar35[6] = 0;
          pbVar35[7] = 0;
          pbVar35[8] = 0;
          pbVar35[9] = 0;
          pbVar35[10] = 0;
          pbVar35[0xb] = 0;
          pbVar35[0xc] = 0;
          pbVar35[0xd] = 0;
          pbVar35[0xe] = 0;
          pbVar35[0xf] = 0;
          lVar18 = *(long *)(param_1 + 0x140);
          *(long *)(param_1 + 0x140) = lVar18 + 0x20;
          *(undefined8 *)(lVar18 + 0x30) = 0;
          *(undefined8 *)(lVar18 + 0x38) = 0;
          *(undefined8 *)(lVar18 + 0x20) = 0;
          *(undefined8 *)(lVar18 + 0x28) = 0;
          pbVar35 = (byte *)(*(long *)(param_1 + 0x140) + 0x20);
          *(byte **)(param_1 + 0x140) = pbVar35;
        } while (uVar24 != 0);
      }
    }
  }
  else if (uVar24 != uVar20) {
    while (pbVar34 = pbVar35, pbVar8 + uVar20 * 0x20 != pbVar34) {
      pbVar35 = pbVar34 + -0x20;
      if (((*pbVar35 & 1) != 0) && (*(ulong *)(pbVar34 + -0x10) != 0)) {
        FUN_710392eb40(*(ulong *)(pbVar34 + -0x10));
      }
    }
    *(byte **)(param_1 + 0x140) = pbVar8 + uVar20 * 0x20;
  }
  uVar29 = (uint)*pbVar37;
  if ((*pbVar37 - 0xb < 2) && (0 < *(int *)(pbVar37 + 1))) {
    lVar18 = 0;
LAB_7102bb790c:
    do {
      iVar11 = (int)lVar18;
      if (iVar11 < 0) {
LAB_7102bb7948:
        lVar19 = 0;
        pbVar35 = &DAT_7104742dbb;
      }
      else {
        pbVar35 = &DAT_7104742dbb;
        lVar19 = 0;
        if (uVar29 == 0xb) {
          if (*(int *)(pbVar37 + 1) <= iVar11) goto LAB_7102bb7948;
          pbVar35 = pbVar37 + *(int *)(pbVar37 + (long)iVar11 * 4 + 5);
          lVar19 = local_b0;
        }
      }
      if ((*pbVar35 == 0xc) && (iVar11 = *(int *)(pbVar35 + 1) + -1, 0 < *(int *)(pbVar35 + 1))) {
        iVar23 = 0;
        do {
          iVar3 = iVar11 + iVar23;
          if (iVar3 < 0) {
            iVar3 = iVar3 + 1;
          }
          iVar3 = iVar3 >> 1;
          uVar24 = *(ulong *)(*(long *)(lVar19 + 0x20) +
                             (ulong)*(uint *)(*(long *)(lVar19 + 0x28) + (long)*(int *)(pbVar35 + 5)
                                             + (long)iVar3 * 8) * 8);
          if (uVar24 == 0xa737452e1) break;
          iVar6 = iVar3 + -1;
          if (uVar24 < 0xa737452e2) {
            iVar23 = iVar3 + 1;
            iVar6 = iVar11;
          }
          iVar11 = iVar6;
        } while (iVar23 <= iVar11);
      }
      std::string::assign((char *)(*plVar2 + lVar18 * 0x20));
      pbVar8 = &DAT_7104742dbb;
      if ((*pbVar35 == 0xc) && (iVar11 = *(int *)(pbVar35 + 1) + -1, 0 < *(int *)(pbVar35 + 1))) {
        iVar23 = 0;
        do {
          iVar3 = iVar11 + iVar23;
          if (iVar3 < 0) {
            iVar3 = iVar3 + 1;
          }
          iVar3 = iVar3 >> 1;
          puVar1 = (uint *)(*(long *)(lVar19 + 0x28) + (long)*(int *)(pbVar35 + 5) + (long)iVar3 * 8
                           );
          uVar24 = *(ulong *)(*(long *)(lVar19 + 0x20) + (ulong)*puVar1 * 8);
          if (uVar24 == 0x5be45d62e) {
            uVar29 = puVar1[1];
            if (-1 < (int)uVar29) {
              pbVar8 = pbVar35 + (int)uVar29;
            }
            break;
          }
          iVar6 = iVar3 + -1;
          if (uVar24 < 0x5be45d62f) {
            iVar23 = iVar3 + 1;
            iVar6 = iVar11;
          }
          iVar11 = iVar6;
        } while (iVar23 <= iVar11);
      }
      switch(*pbVar8) {
      case 1:
      case 3:
        uVar29 = (uint)pbVar8[1];
        break;
      case 2:
        uVar29 = (uint)(char)pbVar8[1];
        break;
      case 4:
        uVar29 = (uint)*(short *)(pbVar8 + 1);
        break;
      case 5:
        uVar29 = (uint)*(ushort *)(pbVar8 + 1);
        break;
      case 6:
      case 7:
        uVar29 = *(uint *)(pbVar8 + 1);
        break;
      default:
        uVar29 = 2;
      }
      *(uint *)(*plVar2 + lVar18 * 0x20 + 0x18) = uVar29;
      pbVar8 = &DAT_7104742dbb;
      if ((*pbVar35 == 0xc) && (iVar11 = *(int *)(pbVar35 + 1) + -1, 0 < *(int *)(pbVar35 + 1))) {
        iVar23 = 0;
        do {
          iVar3 = iVar11 + iVar23;
          if (iVar3 < 0) {
            iVar3 = iVar3 + 1;
          }
          iVar3 = iVar3 >> 1;
          puVar1 = (uint *)(*(long *)(lVar19 + 0x28) + (long)*(int *)(pbVar35 + 5) + (long)iVar3 * 8
                           );
          uVar24 = *(ulong *)(*(long *)(lVar19 + 0x20) + (ulong)*puVar1 * 8);
          if (uVar24 == 0x7ef94c949) {
            uVar29 = puVar1[1];
            if (-1 < (int)uVar29) {
              pbVar8 = pbVar35 + (int)uVar29;
            }
            break;
          }
          iVar6 = iVar3 + -1;
          if (uVar24 < 0x7ef94c94a) {
            iVar23 = iVar3 + 1;
            iVar6 = iVar11;
          }
          iVar11 = iVar6;
        } while (iVar23 <= iVar11);
      }
      switch(*pbVar8) {
      case 1:
      case 3:
        uVar29 = (uint)pbVar8[1];
        break;
      case 2:
        uVar29 = (uint)(char)pbVar8[1];
        break;
      case 4:
        uVar29 = (uint)*(short *)(pbVar8 + 1);
        break;
      case 5:
        uVar29 = (uint)*(ushort *)(pbVar8 + 1);
        break;
      case 6:
      case 7:
        uVar29 = *(uint *)(pbVar8 + 1);
        break;
      default:
        uVar29 = 1;
      }
      lVar19 = lVar18 * 0x20;
      lVar18 = lVar18 + 1;
      *(bool *)(*plVar2 + lVar19 + 0x1c) = uVar29 != 0;
      uVar29 = (uint)*pbVar37;
      if (uVar29 - 0xb < 2) {
        if (*(int *)(pbVar37 + 1) <= lVar18) break;
        goto LAB_7102bb790c;
      }
    } while (lVar18 < 0);
  }
  ppppbVar39 = (byte ****)0x51ef8ae8d;
  pcVar12 = (char *)*plVar9;
  if (*pcVar12 == '\f') {
    iVar11 = *(int *)(pcVar12 + 1) + -1;
    if (*(int *)(pcVar12 + 1) < 1) {
LAB_7102bb7ce4:
      local_b0 = 0;
      pbVar37 = &DAT_7104742dbb;
    }
    else {
      local_b0 = *param_2;
      pbVar37 = &DAT_7104742dbb;
      iVar23 = 0;
      do {
        iVar3 = iVar11 + iVar23;
        if (iVar3 < 0) {
          iVar3 = iVar3 + 1;
        }
        iVar3 = iVar3 >> 1;
        puVar1 = (uint *)(*(long *)(local_b0 + 0x28) + (long)*(int *)(pcVar12 + 5) + (long)iVar3 * 8
                         );
        uVar24 = *(ulong *)(*(long *)(local_b0 + 0x20) + (ulong)*puVar1 * 8);
        if (uVar24 == 0xa0bc54e5a) {
          uVar29 = puVar1[1];
          if ((int)uVar29 < 0) goto LAB_7102bb7ce4;
          pbVar37 = (byte *)(pcVar12 + (int)uVar29);
          goto LAB_7102bb7cf0;
        }
        iVar6 = iVar3 + -1;
        if (uVar24 < 0xa0bc54e5b) {
          iVar23 = iVar3 + 1;
          iVar6 = iVar11;
        }
        iVar11 = iVar6;
      } while (iVar23 <= iVar11);
      local_b0 = 0;
    }
  }
  else {
    local_b0 = 0;
    pbVar37 = &DAT_7104742dbb;
  }
LAB_7102bb7cf0:
  if (*pbVar37 - 0xb < 2) {
    iVar11 = *(int *)(pbVar37 + 1);
  }
  else {
    iVar11 = 0;
  }
  pbVar8 = *(byte **)(param_1 + 0x150);
  pbVar35 = *(byte **)(param_1 + 0x158);
  uVar24 = (ulong)iVar11;
  lVar18 = (long)pbVar35 - (long)pbVar8 >> 3;
  plVar2 = (long *)(param_1 + 0x150);
  if ((ulong)(lVar18 * -0x3333333333333333) < uVar24) {
    uVar20 = uVar24 + lVar18 * 0x3333333333333333;
    if ((ulong)((*(long *)(param_1 + 0x160) - (long)pbVar35 >> 3) * -0x3333333333333333) < uVar20) {
      if (iVar11 < 0) goto LAB_7102bbde84;
      lVar19 = *(long *)(param_1 + 0x160) - (long)pbVar8 >> 3;
      uVar14 = 0x666666666666666;
      if ((ulong)(lVar19 * -0x3333333333333333) < 0x333333333333333) {
        uVar16 = lVar19 * -0x6666666666666666;
        uVar14 = uVar24;
        if (uVar24 <= uVar16) {
          uVar14 = uVar16;
        }
        if (uVar14 != 0) goto LAB_7102bb7d88;
        uVar14 = 0;
        lVar19 = 0;
      }
      else {
LAB_7102bb7d88:
        ppplVar15 = (long ***)(uVar14 * 0x28);
        if (ppplVar15 == (long ***)0x0) {
          ppplVar15 = (long ***)0x1;
        }
        lVar19 = FUN_710392e290(0x10,ppplVar15,(long ****)0x569ff9e1b,(byte ****)0x51ef8ae8d,param_5
                                ,uVar33,param_7,param_8);
        if (lVar19 == 0) {
          if (DAT_7105332f00 != (long *)0x0) {
            local_84 = 0;
            pppplVar10 = &local_98;
            local_98 = ppplVar15;
            uVar16 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_84);
            if (((uVar16 & 1) != 0) &&
               (lVar19 = FUN_710392e290(0x10,ppplVar15,pppplVar10,ppppbVar39,param_5,uVar33,param_7,
                                        param_8), lVar19 != 0)) goto LAB_7102bb7df8;
          }
          lVar19 = 0;
        }
      }
LAB_7102bb7df8:
      puVar25 = (undefined8 *)(lVar19 + lVar18 * 8);
      lVar18 = lVar19 + uVar14 * 0x28;
      memset(puVar25,0,uVar20 * 0x28);
      lVar19 = lVar19 + uVar24 * 0x28;
      if (pbVar35 == pbVar8) {
        *(undefined8 **)(param_1 + 0x150) = puVar25;
        *(long *)(param_1 + 0x158) = lVar19;
        *(long *)(param_1 + 0x160) = lVar18;
      }
      else {
        do {
          pbVar34 = pbVar35 + -0x28;
          uVar30 = *(undefined8 *)(pbVar35 + -0x20);
          uVar27 = *(undefined8 *)(pbVar35 + -0x18);
          puVar38 = puVar25 + -5;
          *puVar38 = *(undefined8 *)pbVar34;
          puVar25[-4] = uVar30;
          puVar25[-3] = uVar27;
          uVar30 = *(undefined8 *)(pbVar35 + -0x10);
          uVar46 = *(undefined4 *)(pbVar35 + -8);
          pbVar35[-0x20] = 0;
          pbVar35[-0x1f] = 0;
          pbVar35[-0x1e] = 0;
          pbVar35[-0x1d] = 0;
          pbVar35[-0x1c] = 0;
          pbVar35[-0x1b] = 0;
          pbVar35[-0x1a] = 0;
          pbVar35[-0x19] = 0;
          pbVar35[-0x18] = 0;
          pbVar35[-0x17] = 0;
          pbVar35[-0x16] = 0;
          pbVar35[-0x15] = 0;
          pbVar35[-0x14] = 0;
          pbVar35[-0x13] = 0;
          pbVar35[-0x12] = 0;
          pbVar35[-0x11] = 0;
          pbVar34[0] = 0;
          pbVar34[1] = 0;
          pbVar34[2] = 0;
          pbVar34[3] = 0;
          pbVar34[4] = 0;
          pbVar34[5] = 0;
          pbVar34[6] = 0;
          pbVar34[7] = 0;
          *(undefined4 *)(puVar25 + -1) = uVar46;
          puVar25[-2] = uVar30;
          pbVar35 = pbVar34;
          puVar25 = puVar38;
        } while (pbVar8 != pbVar34);
        pbVar8 = *(byte **)(param_1 + 0x150);
        pbVar35 = *(byte **)(param_1 + 0x158);
        *(long *)(param_1 + 0x160) = lVar18;
        *(undefined8 **)(param_1 + 0x150) = puVar38;
        *(long *)(param_1 + 0x158) = lVar19;
        while (pbVar34 = pbVar35, pbVar34 != pbVar8) {
          pbVar35 = pbVar34 + -0x28;
          if (((*pbVar35 & 1) != 0) && (*(ulong *)(pbVar34 + -0x18) != 0)) {
            FUN_710392eb40(*(ulong *)(pbVar34 + -0x18));
          }
        }
      }
      if (pbVar8 != (byte *)0x0) {
        FUN_710392eb40((ulong)pbVar8);
      }
    }
    else {
      uVar24 = uVar20;
      if ((uVar20 & 1) != 0) {
        pbVar35[0x18] = 0;
        pbVar35[0x19] = 0;
        pbVar35[0x1a] = 0;
        pbVar35[0x1b] = 0;
        pbVar35[0x1c] = 0;
        pbVar35[0x1d] = 0;
        pbVar35[0x1e] = 0;
        pbVar35[0x1f] = 0;
        pbVar35[0x20] = 0;
        pbVar35[0x21] = 0;
        pbVar35[0x22] = 0;
        pbVar35[0x23] = 0;
        pbVar35[0x24] = 0;
        pbVar35[0x25] = 0;
        pbVar35[0x26] = 0;
        pbVar35[0x27] = 0;
        pbVar35[0] = 0;
        pbVar35[1] = 0;
        pbVar35[2] = 0;
        pbVar35[3] = 0;
        pbVar35[4] = 0;
        pbVar35[5] = 0;
        pbVar35[6] = 0;
        pbVar35[7] = 0;
        pbVar35[8] = 0;
        pbVar35[9] = 0;
        pbVar35[10] = 0;
        pbVar35[0xb] = 0;
        pbVar35[0xc] = 0;
        pbVar35[0xd] = 0;
        pbVar35[0xe] = 0;
        pbVar35[0xf] = 0;
        pbVar35[0x10] = 0;
        pbVar35[0x11] = 0;
        pbVar35[0x12] = 0;
        pbVar35[0x13] = 0;
        pbVar35[0x14] = 0;
        pbVar35[0x15] = 0;
        pbVar35[0x16] = 0;
        pbVar35[0x17] = 0;
        pbVar35 = (byte *)(*(long *)(param_1 + 0x158) + 0x28);
        uVar24 = uVar20 - 1;
        *(byte **)(param_1 + 0x158) = pbVar35;
      }
      if (uVar20 != 1) {
        do {
          pbVar35[0x18] = 0;
          pbVar35[0x19] = 0;
          pbVar35[0x1a] = 0;
          pbVar35[0x1b] = 0;
          pbVar35[0x1c] = 0;
          pbVar35[0x1d] = 0;
          pbVar35[0x1e] = 0;
          pbVar35[0x1f] = 0;
          pbVar35[0x20] = 0;
          pbVar35[0x21] = 0;
          pbVar35[0x22] = 0;
          pbVar35[0x23] = 0;
          pbVar35[0x24] = 0;
          pbVar35[0x25] = 0;
          pbVar35[0x26] = 0;
          pbVar35[0x27] = 0;
          uVar24 = uVar24 - 2;
          pbVar35[8] = 0;
          pbVar35[9] = 0;
          pbVar35[10] = 0;
          pbVar35[0xb] = 0;
          pbVar35[0xc] = 0;
          pbVar35[0xd] = 0;
          pbVar35[0xe] = 0;
          pbVar35[0xf] = 0;
          pbVar35[0x10] = 0;
          pbVar35[0x11] = 0;
          pbVar35[0x12] = 0;
          pbVar35[0x13] = 0;
          pbVar35[0x14] = 0;
          pbVar35[0x15] = 0;
          pbVar35[0x16] = 0;
          pbVar35[0x17] = 0;
          pbVar35[0] = 0;
          pbVar35[1] = 0;
          pbVar35[2] = 0;
          pbVar35[3] = 0;
          pbVar35[4] = 0;
          pbVar35[5] = 0;
          pbVar35[6] = 0;
          pbVar35[7] = 0;
          lVar18 = *(long *)(param_1 + 0x158);
          *(long *)(param_1 + 0x158) = lVar18 + 0x28;
          *(undefined8 *)(lVar18 + 0x40) = 0;
          *(undefined8 *)(lVar18 + 0x48) = 0;
          *(undefined8 *)(lVar18 + 0x28) = 0;
          *(undefined8 *)(lVar18 + 0x30) = 0;
          *(undefined8 *)(lVar18 + 0x38) = 0;
          pbVar35 = (byte *)(*(long *)(param_1 + 0x158) + 0x28);
          *(byte **)(param_1 + 0x158) = pbVar35;
        } while (uVar24 != 0);
      }
    }
  }
  else if (lVar18 * -0x3333333333333333 - uVar24 != 0) {
    while (pbVar34 = pbVar35, pbVar8 + uVar24 * 0x28 != pbVar34) {
      pbVar35 = pbVar34 + -0x28;
      if (((*pbVar35 & 1) != 0) && (*(ulong *)(pbVar34 + -0x18) != 0)) {
        FUN_710392eb40(*(ulong *)(pbVar34 + -0x18));
      }
    }
    *(byte **)(param_1 + 0x158) = pbVar8 + uVar24 * 0x28;
  }
  uVar29 = (uint)*pbVar37;
  if ((*pbVar37 - 0xb < 2) && (0 < *(int *)(pbVar37 + 1))) {
    lVar18 = 0;
LAB_7102bb8104:
    do {
      iVar11 = (int)lVar18;
      if (iVar11 < 0) {
LAB_7102bb813c:
        lVar19 = 0;
        pbVar35 = &DAT_7104742dbb;
      }
      else {
        pbVar35 = &DAT_7104742dbb;
        lVar19 = 0;
        if (uVar29 == 0xb) {
          if (*(int *)(pbVar37 + 1) <= iVar11) goto LAB_7102bb813c;
          pbVar35 = pbVar37 + *(int *)(pbVar37 + (long)iVar11 * 4 + 5);
          lVar19 = local_b0;
        }
      }
      if ((*pbVar35 == 0xc) && (iVar11 = *(int *)(pbVar35 + 1) + -1, 0 < *(int *)(pbVar35 + 1))) {
        iVar23 = 0;
        do {
          iVar3 = iVar11 + iVar23;
          if (iVar3 < 0) {
            iVar3 = iVar3 + 1;
          }
          iVar3 = iVar3 >> 1;
          uVar24 = *(ulong *)(*(long *)(lVar19 + 0x20) +
                             (ulong)*(uint *)(*(long *)(lVar19 + 0x28) + (long)*(int *)(pbVar35 + 5)
                                             + (long)iVar3 * 8) * 8);
          if (uVar24 == 0xa737452e1) break;
          iVar6 = iVar3 + -1;
          if (uVar24 < 0xa737452e2) {
            iVar23 = iVar3 + 1;
            iVar6 = iVar11;
          }
          iVar11 = iVar6;
        } while (iVar23 <= iVar11);
      }
      std::string::assign((char *)(*plVar2 + lVar18 * 0x28));
      pbVar8 = &DAT_7104742dbb;
      if ((*pbVar35 == 0xc) && (iVar11 = *(int *)(pbVar35 + 1) + -1, 0 < *(int *)(pbVar35 + 1))) {
        iVar23 = 0;
        do {
          iVar3 = iVar11 + iVar23;
          if (iVar3 < 0) {
            iVar3 = iVar3 + 1;
          }
          iVar3 = iVar3 >> 1;
          puVar1 = (uint *)(*(long *)(lVar19 + 0x28) + (long)*(int *)(pbVar35 + 5) + (long)iVar3 * 8
                           );
          uVar24 = *(ulong *)(*(long *)(lVar19 + 0x20) + (ulong)*puVar1 * 8);
          if (uVar24 == 0x569ff9e1b) {
            uVar29 = puVar1[1];
            if (-1 < (int)uVar29) {
              pbVar8 = pbVar35 + (int)uVar29;
            }
            break;
          }
          iVar6 = iVar3 + -1;
          if (uVar24 < 0x569ff9e1c) {
            iVar23 = iVar3 + 1;
            iVar6 = iVar11;
          }
          iVar11 = iVar6;
        } while (iVar23 <= iVar11);
      }
      uVar46 = 0x42200000;
      if (*pbVar8 == 8) {
        uVar46 = *(undefined4 *)(pbVar8 + 1);
      }
      *(undefined4 *)(*plVar2 + lVar18 * 0x28 + 0x18) = uVar46;
      pbVar8 = &DAT_7104742dbb;
      if ((*pbVar35 == 0xc) && (iVar11 = *(int *)(pbVar35 + 1) + -1, 0 < *(int *)(pbVar35 + 1))) {
        iVar23 = 0;
        do {
          iVar3 = iVar11 + iVar23;
          if (iVar3 < 0) {
            iVar3 = iVar3 + 1;
          }
          iVar3 = iVar3 >> 1;
          puVar1 = (uint *)(*(long *)(lVar19 + 0x28) + (long)*(int *)(pbVar35 + 5) + (long)iVar3 * 8
                           );
          uVar24 = *(ulong *)(*(long *)(lVar19 + 0x20) + (ulong)*puVar1 * 8);
          if (uVar24 == 0x51ef8ae8d) {
            uVar29 = puVar1[1];
            if (-1 < (int)uVar29) {
              pbVar8 = pbVar35 + (int)uVar29;
            }
            break;
          }
          iVar6 = iVar3 + -1;
          if (uVar24 < 0x51ef8ae8e) {
            iVar23 = iVar3 + 1;
            iVar6 = iVar11;
          }
          iVar11 = iVar6;
        } while (iVar23 <= iVar11);
      }
      uVar46 = 0;
      if (*pbVar8 == 8) {
        uVar46 = *(undefined4 *)(pbVar8 + 1);
      }
      *(undefined4 *)(*plVar2 + lVar18 * 0x28 + 0x1c) = uVar46;
      pbVar8 = &DAT_7104742dbb;
      if ((*pbVar35 == 0xc) && (iVar11 = *(int *)(pbVar35 + 1) + -1, 0 < *(int *)(pbVar35 + 1))) {
        iVar23 = 0;
        do {
          iVar3 = iVar11 + iVar23;
          if (iVar3 < 0) {
            iVar3 = iVar3 + 1;
          }
          iVar3 = iVar3 >> 1;
          puVar1 = (uint *)(*(long *)(lVar19 + 0x28) + (long)*(int *)(pbVar35 + 5) + (long)iVar3 * 8
                           );
          uVar24 = *(ulong *)(*(long *)(lVar19 + 0x20) + (ulong)*puVar1 * 8);
          if (uVar24 == 0x587f1ff37) {
            uVar29 = puVar1[1];
            if (-1 < (int)uVar29) {
              pbVar8 = pbVar35 + (int)uVar29;
            }
            break;
          }
          iVar6 = iVar3 + -1;
          if (uVar24 < 0x587f1ff38) {
            iVar23 = iVar3 + 1;
            iVar6 = iVar11;
          }
          iVar11 = iVar6;
        } while (iVar23 <= iVar11);
      }
      uVar46 = 0xc2200000;
      if (*pbVar8 == 8) {
        uVar46 = *(undefined4 *)(pbVar8 + 1);
      }
      lVar19 = lVar18 * 0x28;
      lVar18 = lVar18 + 1;
      *(undefined4 *)(*plVar2 + lVar19 + 0x20) = uVar46;
      uVar29 = (uint)*pbVar37;
      if (uVar29 - 0xb < 2) {
        if (*(int *)(pbVar37 + 1) <= lVar18) break;
        goto LAB_7102bb8104;
      }
    } while (lVar18 < 0);
  }
  ppppbVar39 = (byte ****)0x51ef8ae8d;
  pcVar12 = (char *)*plVar9;
  if ((*pcVar12 == '\f') && (iVar11 = *(int *)(pcVar12 + 1) + -1, 0 < *(int *)(pcVar12 + 1))) {
    iVar23 = 0;
    pcVar22 = "";
    do {
      iVar3 = iVar11 + iVar23;
      if (iVar3 < 0) {
        iVar3 = iVar3 + 1;
      }
      iVar3 = iVar3 >> 1;
      puVar1 = (uint *)(*(long *)(*param_2 + 0x28) + (long)*(int *)(pcVar12 + 5) + (long)iVar3 * 8);
      uVar24 = *(ulong *)(*(long *)(*param_2 + 0x20) + (ulong)*puVar1 * 8);
      if (uVar24 == 0x16a02fca1c) {
        uVar29 = puVar1[1];
        if ((int)uVar29 < 0) goto LAB_7102bb84c8;
        pcVar22 = pcVar12 + (int)uVar29;
        break;
      }
      iVar6 = iVar3 + -1;
      if (uVar24 < 0x16a02fca1d) {
        iVar23 = iVar3 + 1;
        iVar6 = iVar11;
      }
      iVar11 = iVar6;
    } while (iVar23 <= iVar11);
  }
  else {
LAB_7102bb84c8:
    pcVar22 = "";
  }
  if (*pcVar22 == '\b') {
    uVar46 = *(undefined4 *)(pcVar22 + 1);
  }
  else {
    uVar46 = 0x42200000;
  }
  *(undefined4 *)(param_1 + 0x168) = uVar46;
  pcVar12 = (char *)*plVar9;
  if ((*pcVar12 == '\f') && (iVar11 = *(int *)(pcVar12 + 1) + -1, 0 < *(int *)(pcVar12 + 1))) {
    local_c8 = *param_2;
    pbVar37 = &DAT_7104742dbb;
    iVar23 = 0;
    do {
      iVar3 = iVar11 + iVar23;
      if (iVar3 < 0) {
        iVar3 = iVar3 + 1;
      }
      iVar3 = iVar3 >> 1;
      puVar1 = (uint *)(*(long *)(local_c8 + 0x28) + (long)*(int *)(pcVar12 + 5) + (long)iVar3 * 8);
      uVar24 = *(ulong *)(*(long *)(local_c8 + 0x20) + (ulong)*puVar1 * 8);
      if (uVar24 == 0xe365c6a95) {
        uVar29 = puVar1[1];
        if ((int)uVar29 < 0) goto LAB_7102bb8594;
        pbVar37 = (byte *)(pcVar12 + (int)uVar29);
        goto LAB_7102bb85a0;
      }
      iVar6 = iVar3 + -1;
      if (uVar24 < 0xe365c6a96) {
        iVar23 = iVar3 + 1;
        iVar6 = iVar11;
      }
      iVar11 = iVar6;
    } while (iVar23 <= iVar11);
    local_c8 = 0;
  }
  else {
LAB_7102bb8594:
    local_c8 = 0;
    pbVar37 = &DAT_7104742dbb;
  }
LAB_7102bb85a0:
  if (*pbVar37 - 0xb < 2) {
    iVar11 = *(int *)(pbVar37 + 1);
  }
  else {
    iVar11 = 0;
  }
  puVar38 = *(undefined8 **)(param_1 + 0x170);
  puVar25 = *(undefined8 **)(param_1 + 0x178);
  uVar20 = (ulong)iVar11;
  uVar24 = (long)puVar25 - (long)puVar38 >> 6;
  plVar2 = (long *)(param_1 + 0x170);
  if (uVar24 < uVar20) {
    uVar14 = uVar20 - uVar24;
    if ((ulong)(*(long *)(param_1 + 0x180) - (long)puVar25 >> 6) < uVar14) {
      if (iVar11 < 0) {
                    /* WARNING: Subroutine does not return */
        std::__vector_base_common<true>::__throw_length_error();
      }
      lVar18 = *(long *)(param_1 + 0x180) - (long)puVar38;
      if ((ulong)(lVar18 >> 6) < 0x1ffffffffffffff) {
        uVar17 = lVar18 >> 5;
        uVar16 = uVar20;
        if (uVar20 <= uVar17) {
          uVar16 = uVar17;
        }
        if (uVar16 != 0) {
          if (uVar16 >> 0x3a != 0) goto LAB_7102bbb008;
          goto LAB_7102bb8744;
        }
LAB_7102bb87a4:
        lVar18 = 0;
      }
      else {
        uVar16 = 0x3ffffffffffffff;
LAB_7102bb8744:
        ppplVar15 = (long ***)(uVar16 * 0x40);
        if (ppplVar15 == (long ***)0x0) {
          ppplVar15 = (long ***)0x1;
        }
        lVar18 = FUN_710392e290(0x10,ppplVar15,(long ****)0x569ff9e1b,(byte ****)0x51ef8ae8d,param_5
                                ,uVar33,param_7,param_8);
        if (lVar18 == 0) {
          if (DAT_7105332f00 != (long *)0x0) {
            local_84 = 0;
            pppplVar10 = &local_98;
            local_98 = ppplVar15;
            uVar17 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_84);
            if (((uVar17 & 1) != 0) &&
               (lVar18 = FUN_710392e290(0x10,ppplVar15,pppplVar10,ppppbVar39,param_5,uVar33,param_7,
                                        param_8), lVar18 != 0)) goto LAB_7102bb87a8;
          }
          goto LAB_7102bb87a4;
        }
      }
LAB_7102bb87a8:
      puVar40 = (undefined8 *)(lVar18 + uVar24 * 0x40);
      lVar19 = lVar18 + uVar16 * 0x40;
      memset(puVar40,0,uVar14 * 0x40);
      lVar13 = lVar18 + uVar20 * 0x40;
      if ((long)puVar25 - (long)puVar38 == 0) {
        *(undefined8 **)(param_1 + 0x170) = puVar40;
        *(long *)(param_1 + 0x178) = lVar13;
        *(long *)(param_1 + 0x180) = lVar19;
      }
      else {
        uVar20 = ((long)puVar25 - (long)puVar38) - 0x40;
        puVar36 = puVar25;
        puVar26 = puVar40;
        if (((uint)uVar20 >> 6 & 1) == 0) {
          puVar36 = puVar25 + -8;
          uVar30 = puVar25[-7];
          uVar27 = puVar25[-6];
          puVar26 = puVar40 + -8;
          *puVar26 = *puVar36;
          puVar40[-7] = uVar30;
          puVar40[-6] = uVar27;
          uVar27 = puVar25[-3];
          uVar30 = puVar25[-4];
          *puVar36 = 0;
          puVar25[-7] = 0;
          puVar25[-6] = 0;
          puVar40[-5] = puVar25[-5];
          puVar40[-4] = uVar30;
          puVar40[-3] = uVar27;
          puVar25[-5] = 0;
          uVar30 = puVar25[-1];
          puVar25[-4] = 0;
          puVar25[-3] = 0;
          puVar40[-2] = puVar25[-2];
          puVar40[-1] = uVar30;
        }
        if (0x3f < uVar20) {
          puVar26 = puVar26 + -8;
          do {
            uVar30 = puVar36[-8];
            uVar27 = puVar36[-6];
            puVar26[1] = puVar36[-7];
            puVar26[2] = uVar27;
            *puVar26 = uVar30;
            uVar30 = puVar36[-5];
            uVar27 = puVar36[-3];
            puVar36[-7] = 0;
            puVar36[-6] = 0;
            puVar36[-8] = 0;
            puVar26[4] = puVar36[-4];
            puVar26[5] = uVar27;
            puVar26[3] = uVar30;
            uVar30 = puVar36[-1];
            puVar36[-5] = 0;
            puVar36[-4] = 0;
            puVar36[-3] = 0;
            puVar26[6] = puVar36[-2];
            puVar26[7] = uVar30;
            puVar25 = puVar36 + -0x10;
            uVar30 = puVar36[-0xf];
            uVar27 = puVar36[-0xe];
            puVar26[-8] = *puVar25;
            puVar26[-7] = uVar30;
            puVar26[-6] = uVar27;
            uVar27 = puVar36[-0xb];
            uVar30 = puVar36[-0xc];
            *puVar25 = 0;
            puVar36[-0xf] = 0;
            puVar36[-0xe] = 0;
            puVar26[-5] = puVar36[-0xd];
            puVar26[-4] = uVar30;
            puVar26[-3] = uVar27;
            puVar36[-0xd] = 0;
            uVar30 = puVar36[-9];
            puVar36[-0xc] = 0;
            puVar36[-0xb] = 0;
            puVar26[-2] = puVar36[-10];
            puVar26[-1] = uVar30;
            puVar26 = puVar26 + -0x10;
            puVar36 = puVar25;
          } while (puVar38 != puVar25);
        }
        puVar38 = *(undefined8 **)(param_1 + 0x170);
        puVar25 = *(undefined8 **)(param_1 + 0x178);
        *(ulong *)(param_1 + 0x170) = lVar18 + (uVar24 + (uVar20 >> 6 ^ 0xffffffffffffffff)) * 0x40;
        *(long *)(param_1 + 0x178) = lVar13;
        *(long *)(param_1 + 0x180) = lVar19;
        while (puVar40 = puVar25, puVar40 != puVar38) {
          if (((*(byte *)(puVar40 + -5) & 1) != 0) && (puVar40[-3] != 0)) {
            FUN_710392eb40(puVar40[-3]);
          }
          puVar25 = puVar40 + -8;
          if (((*(byte *)(puVar40 + -8) & 1) != 0) && (puVar40[-6] != 0)) {
            FUN_710392eb40(puVar40[-6]);
          }
        }
      }
      if (puVar38 != (undefined8 *)0x0) {
        FUN_710392eb40((ulong)puVar38);
      }
    }
    else {
      uVar24 = uVar14;
      if ((uVar14 & 1) != 0) {
        puVar25[6] = 0;
        puVar25[7] = 0;
        puVar25[4] = 0;
        puVar25[5] = 0;
        puVar25[2] = 0;
        puVar25[3] = 0;
        *puVar25 = 0;
        puVar25[1] = 0;
        puVar25 = (undefined8 *)(*(long *)(param_1 + 0x178) + 0x40);
        uVar24 = uVar14 - 1;
        *(undefined8 **)(param_1 + 0x178) = puVar25;
      }
      if (uVar14 != 1) {
        do {
          puVar25[6] = 0;
          puVar25[7] = 0;
          uVar24 = uVar24 - 2;
          puVar25[4] = 0;
          puVar25[5] = 0;
          puVar25[2] = 0;
          puVar25[3] = 0;
          *puVar25 = 0;
          puVar25[1] = 0;
          lVar18 = *(long *)(param_1 + 0x178);
          *(long *)(param_1 + 0x178) = lVar18 + 0x40;
          *(undefined8 *)(lVar18 + 0x70) = 0;
          *(undefined8 *)(lVar18 + 0x78) = 0;
          *(undefined8 *)(lVar18 + 0x60) = 0;
          *(undefined8 *)(lVar18 + 0x68) = 0;
          *(undefined8 *)(lVar18 + 0x50) = 0;
          *(undefined8 *)(lVar18 + 0x58) = 0;
          *(undefined8 *)(lVar18 + 0x40) = 0;
          *(undefined8 *)(lVar18 + 0x48) = 0;
          puVar25 = (undefined8 *)(*(long *)(param_1 + 0x178) + 0x40);
          *(undefined8 **)(param_1 + 0x178) = puVar25;
        } while (uVar24 != 0);
      }
    }
  }
  else if (uVar24 != uVar20) {
    while (puVar40 = puVar25, puVar38 + uVar20 * 8 != puVar40) {
      if (((*(byte *)(puVar40 + -5) & 1) != 0) && (puVar40[-3] != 0)) {
        FUN_710392eb40(puVar40[-3]);
      }
      puVar25 = puVar40 + -8;
      if (((*(byte *)(puVar40 + -8) & 1) != 0) && (puVar40[-6] != 0)) {
        FUN_710392eb40(puVar40[-6]);
      }
    }
    *(undefined8 **)(param_1 + 0x178) = puVar38 + uVar20 * 8;
  }
  uVar29 = (uint)*pbVar37;
  if ((*pbVar37 - 0xb < 2) && (0 < *(int *)(pbVar37 + 1))) {
    uVar46 = 0;
    lVar18 = 0;
LAB_7102bb8a58:
    do {
      iVar11 = (int)lVar18;
      if (iVar11 < 0) {
LAB_7102bb8a90:
        lVar19 = 0;
        pbVar35 = &DAT_7104742dbb;
      }
      else {
        pbVar35 = &DAT_7104742dbb;
        lVar19 = 0;
        if (uVar29 == 0xb) {
          if (*(int *)(pbVar37 + 1) <= iVar11) goto LAB_7102bb8a90;
          pbVar35 = pbVar37 + *(int *)(pbVar37 + (long)iVar11 * 4 + 5);
          lVar19 = local_c8;
        }
      }
      if ((*pbVar35 == 0xc) && (iVar11 = *(int *)(pbVar35 + 1) + -1, 0 < *(int *)(pbVar35 + 1))) {
        iVar23 = 0;
        do {
          iVar3 = iVar11 + iVar23;
          if (iVar3 < 0) {
            iVar3 = iVar3 + 1;
          }
          iVar3 = iVar3 >> 1;
          uVar24 = *(ulong *)(*(long *)(lVar19 + 0x20) +
                             (ulong)*(uint *)(*(long *)(lVar19 + 0x28) + (long)*(int *)(pbVar35 + 5)
                                             + (long)iVar3 * 8) * 8);
          if (uVar24 == 0xbce4649ff) break;
          iVar6 = iVar3 + -1;
          if (uVar24 < 0xbce464a00) {
            iVar23 = iVar3 + 1;
            iVar6 = iVar11;
          }
          iVar11 = iVar6;
        } while (iVar23 <= iVar11);
      }
      std::string::assign((char *)(*plVar2 + lVar18 * 0x40));
      if ((*pbVar35 == 0xc) && (iVar11 = *(int *)(pbVar35 + 1) + -1, 0 < *(int *)(pbVar35 + 1))) {
        iVar23 = 0;
        do {
          iVar3 = iVar11 + iVar23;
          if (iVar3 < 0) {
            iVar3 = iVar3 + 1;
          }
          iVar3 = iVar3 >> 1;
          uVar24 = *(ulong *)(*(long *)(lVar19 + 0x20) +
                             (ulong)*(uint *)(*(long *)(lVar19 + 0x28) + (long)*(int *)(pbVar35 + 5)
                                             + (long)iVar3 * 8) * 8);
          if (uVar24 == 0x9dbc35fca) break;
          iVar6 = iVar3 + -1;
          if (uVar24 < 0x9dbc35fcb) {
            iVar23 = iVar3 + 1;
            iVar6 = iVar11;
          }
          iVar11 = iVar6;
        } while (iVar23 <= iVar11);
      }
      std::string::assign((char *)(*plVar2 + lVar18 * 0x40 + 0x18));
      pbVar8 = &DAT_7104742dbb;
      if ((*pbVar35 == 0xc) && (iVar11 = *(int *)(pbVar35 + 1) + -1, 0 < *(int *)(pbVar35 + 1))) {
        iVar23 = 0;
        do {
          iVar3 = iVar11 + iVar23;
          if (iVar3 < 0) {
            iVar3 = iVar3 + 1;
          }
          iVar3 = iVar3 >> 1;
          puVar1 = (uint *)(*(long *)(lVar19 + 0x28) + (long)*(int *)(pbVar35 + 5) + (long)iVar3 * 8
                           );
          uVar24 = *(ulong *)(*(long *)(lVar19 + 0x20) + (ulong)*puVar1 * 8);
          if (uVar24 == 0x8d8ad1dd1) {
            uVar29 = puVar1[1];
            if (-1 < (int)uVar29) {
              pbVar8 = pbVar35 + (int)uVar29;
            }
            break;
          }
          iVar6 = iVar3 + -1;
          if (uVar24 < 0x8d8ad1dd2) {
            iVar23 = iVar3 + 1;
            iVar6 = iVar11;
          }
          iVar11 = iVar6;
        } while (iVar23 <= iVar11);
      }
      uVar47 = uVar46;
      if (*pbVar8 == 8) {
        uVar47 = *(undefined4 *)(pbVar8 + 1);
      }
      *(undefined4 *)(*plVar2 + lVar18 * 0x40 + 0x30) = uVar47;
      pbVar8 = &DAT_7104742dbb;
      if ((*pbVar35 == 0xc) && (iVar11 = *(int *)(pbVar35 + 1) + -1, 0 < *(int *)(pbVar35 + 1))) {
        iVar23 = 0;
        do {
          iVar3 = iVar11 + iVar23;
          if (iVar3 < 0) {
            iVar3 = iVar3 + 1;
          }
          iVar3 = iVar3 >> 1;
          puVar1 = (uint *)(*(long *)(lVar19 + 0x28) + (long)*(int *)(pbVar35 + 5) + (long)iVar3 * 8
                           );
          uVar24 = *(ulong *)(*(long *)(lVar19 + 0x20) + (ulong)*puVar1 * 8);
          if (uVar24 == 0x8afaa2d47) {
            uVar29 = puVar1[1];
            if (-1 < (int)uVar29) {
              pbVar8 = pbVar35 + (int)uVar29;
            }
            break;
          }
          iVar6 = iVar3 + -1;
          if (uVar24 < 0x8afaa2d48) {
            iVar23 = iVar3 + 1;
            iVar6 = iVar11;
          }
          iVar11 = iVar6;
        } while (iVar23 <= iVar11);
      }
      uVar47 = uVar46;
      if (*pbVar8 == 8) {
        uVar47 = *(undefined4 *)(pbVar8 + 1);
      }
      *(undefined4 *)(*plVar2 + lVar18 * 0x40 + 0x34) = uVar47;
      pbVar8 = &DAT_7104742dbb;
      if ((*pbVar35 == 0xc) && (iVar11 = *(int *)(pbVar35 + 1) + -1, 0 < *(int *)(pbVar35 + 1))) {
        iVar23 = 0;
        do {
          iVar3 = iVar11 + iVar23;
          if (iVar3 < 0) {
            iVar3 = iVar3 + 1;
          }
          iVar3 = iVar3 >> 1;
          puVar1 = (uint *)(*(long *)(lVar19 + 0x28) + (long)*(int *)(pbVar35 + 5) + (long)iVar3 * 8
                           );
          uVar24 = *(ulong *)(*(long *)(lVar19 + 0x20) + (ulong)*puVar1 * 8);
          if (uVar24 == 0x836a37cfd) {
            uVar29 = puVar1[1];
            if (-1 < (int)uVar29) {
              pbVar8 = pbVar35 + (int)uVar29;
            }
            break;
          }
          iVar6 = iVar3 + -1;
          if (uVar24 < 0x836a37cfe) {
            iVar23 = iVar3 + 1;
            iVar6 = iVar11;
          }
          iVar11 = iVar6;
        } while (iVar23 <= iVar11);
      }
      uVar47 = uVar46;
      if (*pbVar8 == 8) {
        uVar47 = *(undefined4 *)(pbVar8 + 1);
      }
      *(undefined4 *)(*plVar2 + lVar18 * 0x40 + 0x38) = uVar47;
      pbVar8 = &DAT_7104742dbb;
      if ((*pbVar35 == 0xc) && (iVar11 = *(int *)(pbVar35 + 1) + -1, 0 < *(int *)(pbVar35 + 1))) {
        iVar23 = 0;
        do {
          iVar3 = iVar11 + iVar23;
          if (iVar3 < 0) {
            iVar3 = iVar3 + 1;
          }
          iVar3 = iVar3 >> 1;
          puVar1 = (uint *)(*(long *)(lVar19 + 0x28) + (long)*(int *)(pbVar35 + 5) + (long)iVar3 * 8
                           );
          uVar24 = *(ulong *)(*(long *)(lVar19 + 0x20) + (ulong)*puVar1 * 8);
          if (uVar24 == 0xac02ad133) {
            uVar29 = puVar1[1];
            if (-1 < (int)uVar29) {
              pbVar8 = pbVar35 + (int)uVar29;
            }
            break;
          }
          iVar6 = iVar3 + -1;
          if (uVar24 < 0xac02ad134) {
            iVar23 = iVar3 + 1;
            iVar6 = iVar11;
          }
          iVar11 = iVar6;
        } while (iVar23 <= iVar11);
      }
      uVar47 = 0x42700000;
      if (*pbVar8 == 8) {
        uVar47 = *(undefined4 *)(pbVar8 + 1);
      }
      lVar19 = lVar18 * 0x40;
      lVar18 = lVar18 + 1;
      *(undefined4 *)(*plVar2 + lVar19 + 0x3c) = uVar47;
      uVar29 = (uint)*pbVar37;
      if (uVar29 - 0xb < 2) {
        if (*(int *)(pbVar37 + 1) <= lVar18) break;
        goto LAB_7102bb8a58;
      }
    } while (lVar18 < 0);
  }
  ppppbVar39 = (byte ****)0x51ef8ae8d;
  pcVar12 = (char *)*plVar9;
  if (*pcVar12 == '\f') {
    iVar11 = *(int *)(pcVar12 + 1) + -1;
    if (*(int *)(pcVar12 + 1) < 1) {
LAB_7102bb8fb4:
      local_c0 = 0;
      pbVar37 = &DAT_7104742dbb;
    }
    else {
      local_c0 = *param_2;
      pbVar37 = &DAT_7104742dbb;
      iVar23 = 0;
      do {
        iVar3 = iVar11 + iVar23;
        if (iVar3 < 0) {
          iVar3 = iVar3 + 1;
        }
        iVar3 = iVar3 >> 1;
        puVar1 = (uint *)(*(long *)(local_c0 + 0x28) + (long)*(int *)(pcVar12 + 5) + (long)iVar3 * 8
                         );
        uVar24 = *(ulong *)(*(long *)(local_c0 + 0x20) + (ulong)*puVar1 * 8);
        if (uVar24 == 0x138aaf98ec) {
          uVar29 = puVar1[1];
          if ((int)uVar29 < 0) goto LAB_7102bb8fb4;
          pbVar37 = (byte *)(pcVar12 + (int)uVar29);
          goto LAB_7102bb8fc0;
        }
        iVar6 = iVar3 + -1;
        if (uVar24 < 0x138aaf98ed) {
          iVar23 = iVar3 + 1;
          iVar6 = iVar11;
        }
        iVar11 = iVar6;
      } while (iVar23 <= iVar11);
      local_c0 = 0;
    }
  }
  else {
    local_c0 = 0;
    pbVar37 = &DAT_7104742dbb;
  }
LAB_7102bb8fc0:
  if (*pbVar37 - 0xb < 2) {
    iVar11 = *(int *)(pbVar37 + 1);
  }
  else {
    iVar11 = 0;
  }
  pbVar8 = *(byte **)(param_1 + 0x188);
  pbVar35 = *(byte **)(param_1 + 400);
  uVar24 = (ulong)iVar11;
  lVar18 = (long)pbVar35 - (long)pbVar8 >> 3;
  plVar2 = (long *)(param_1 + 0x188);
  if ((ulong)(lVar18 * -0x3333333333333333) < uVar24) {
    uVar20 = uVar24 + lVar18 * 0x3333333333333333;
    if ((ulong)((*(long *)(param_1 + 0x198) - (long)pbVar35 >> 3) * -0x3333333333333333) < uVar20) {
      if (iVar11 < 0) goto LAB_7102bbde84;
      lVar19 = *(long *)(param_1 + 0x198) - (long)pbVar8 >> 3;
      uVar14 = 0x666666666666666;
      if ((ulong)(lVar19 * -0x3333333333333333) < 0x333333333333333) {
        uVar16 = lVar19 * -0x6666666666666666;
        uVar14 = uVar24;
        if (uVar24 <= uVar16) {
          uVar14 = uVar16;
        }
        if (uVar14 != 0) goto LAB_7102bb9054;
LAB_7102bb90b8:
        lVar19 = 0;
      }
      else {
LAB_7102bb9054:
        ppplVar15 = (long ***)(uVar14 * 0x28);
        if (ppplVar15 == (long ***)0x0) {
          ppplVar15 = (long ***)0x1;
        }
        lVar19 = FUN_710392e290(0x10,ppplVar15,(long ****)0x569ff9e1b,(byte ****)0x51ef8ae8d,param_5
                                ,uVar33,param_7,param_8);
        if (lVar19 == 0) {
          if (DAT_7105332f00 != (long *)0x0) {
            local_84 = 0;
            pppplVar10 = &local_98;
            local_98 = ppplVar15;
            uVar16 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_84);
            if (((uVar16 & 1) != 0) &&
               (lVar19 = FUN_710392e290(0x10,ppplVar15,pppplVar10,ppppbVar39,param_5,uVar33,param_7,
                                        param_8), lVar19 != 0)) goto LAB_7102bb90bc;
          }
          goto LAB_7102bb90b8;
        }
      }
LAB_7102bb90bc:
      puVar25 = (undefined8 *)(lVar19 + lVar18 * 8);
      lVar18 = lVar19 + uVar14 * 0x28;
      memset(puVar25,0,uVar20 * 0x28);
      lVar19 = lVar19 + uVar24 * 0x28;
      if (pbVar35 == pbVar8) {
        *(long *)(param_1 + 0x198) = lVar18;
        *(undefined8 **)(param_1 + 0x188) = puVar25;
        *(long *)(param_1 + 400) = lVar19;
      }
      else {
        do {
          pbVar34 = pbVar35 + -0x28;
          uVar30 = *(undefined8 *)(pbVar35 + -0x20);
          uVar27 = *(undefined8 *)(pbVar35 + -0x18);
          puVar38 = puVar25 + -5;
          *puVar38 = *(undefined8 *)pbVar34;
          puVar25[-4] = uVar30;
          puVar25[-3] = uVar27;
          pbVar34[0] = 0;
          pbVar34[1] = 0;
          pbVar34[2] = 0;
          pbVar34[3] = 0;
          pbVar34[4] = 0;
          pbVar34[5] = 0;
          pbVar34[6] = 0;
          pbVar34[7] = 0;
          uVar30 = *(undefined8 *)(pbVar35 + -8);
          pbVar35[-0x20] = 0;
          pbVar35[-0x1f] = 0;
          pbVar35[-0x1e] = 0;
          pbVar35[-0x1d] = 0;
          pbVar35[-0x1c] = 0;
          pbVar35[-0x1b] = 0;
          pbVar35[-0x1a] = 0;
          pbVar35[-0x19] = 0;
          pbVar35[-0x18] = 0;
          pbVar35[-0x17] = 0;
          pbVar35[-0x16] = 0;
          pbVar35[-0x15] = 0;
          pbVar35[-0x14] = 0;
          pbVar35[-0x13] = 0;
          pbVar35[-0x12] = 0;
          pbVar35[-0x11] = 0;
          puVar25[-2] = *(undefined8 *)(pbVar35 + -0x10);
          puVar25[-1] = uVar30;
          pbVar35 = pbVar34;
          puVar25 = puVar38;
        } while (pbVar8 != pbVar34);
        pbVar8 = *(byte **)(param_1 + 0x188);
        pbVar35 = *(byte **)(param_1 + 400);
        *(undefined8 **)(param_1 + 0x188) = puVar38;
        *(long *)(param_1 + 400) = lVar19;
        *(long *)(param_1 + 0x198) = lVar18;
        while (pbVar34 = pbVar35, pbVar34 != pbVar8) {
          pbVar35 = pbVar34 + -0x28;
          if (((*pbVar35 & 1) != 0) && (*(ulong *)(pbVar34 + -0x18) != 0)) {
            FUN_710392eb40(*(ulong *)(pbVar34 + -0x18));
          }
        }
      }
      if (pbVar8 != (byte *)0x0) {
        FUN_710392eb40((ulong)pbVar8);
      }
    }
    else {
      uVar24 = uVar20;
      if ((uVar20 & 1) != 0) {
        pbVar35[0x18] = 0;
        pbVar35[0x19] = 0;
        pbVar35[0x1a] = 0;
        pbVar35[0x1b] = 0;
        pbVar35[0x1c] = 0;
        pbVar35[0x1d] = 0;
        pbVar35[0x1e] = 0;
        pbVar35[0x1f] = 0;
        pbVar35[0x20] = 0;
        pbVar35[0x21] = 0;
        pbVar35[0x22] = 0;
        pbVar35[0x23] = 0;
        pbVar35[0x24] = 0;
        pbVar35[0x25] = 0;
        pbVar35[0x26] = 0;
        pbVar35[0x27] = 0;
        pbVar35[0] = 0;
        pbVar35[1] = 0;
        pbVar35[2] = 0;
        pbVar35[3] = 0;
        pbVar35[4] = 0;
        pbVar35[5] = 0;
        pbVar35[6] = 0;
        pbVar35[7] = 0;
        pbVar35[8] = 0;
        pbVar35[9] = 0;
        pbVar35[10] = 0;
        pbVar35[0xb] = 0;
        pbVar35[0xc] = 0;
        pbVar35[0xd] = 0;
        pbVar35[0xe] = 0;
        pbVar35[0xf] = 0;
        pbVar35[0x10] = 0;
        pbVar35[0x11] = 0;
        pbVar35[0x12] = 0;
        pbVar35[0x13] = 0;
        pbVar35[0x14] = 0;
        pbVar35[0x15] = 0;
        pbVar35[0x16] = 0;
        pbVar35[0x17] = 0;
        pbVar35 = (byte *)(*(long *)(param_1 + 400) + 0x28);
        uVar24 = uVar20 - 1;
        *(byte **)(param_1 + 400) = pbVar35;
      }
      if (uVar20 != 1) {
        do {
          pbVar35[0x18] = 0;
          pbVar35[0x19] = 0;
          pbVar35[0x1a] = 0;
          pbVar35[0x1b] = 0;
          pbVar35[0x1c] = 0;
          pbVar35[0x1d] = 0;
          pbVar35[0x1e] = 0;
          pbVar35[0x1f] = 0;
          pbVar35[0x20] = 0;
          pbVar35[0x21] = 0;
          pbVar35[0x22] = 0;
          pbVar35[0x23] = 0;
          pbVar35[0x24] = 0;
          pbVar35[0x25] = 0;
          pbVar35[0x26] = 0;
          pbVar35[0x27] = 0;
          uVar24 = uVar24 - 2;
          pbVar35[8] = 0;
          pbVar35[9] = 0;
          pbVar35[10] = 0;
          pbVar35[0xb] = 0;
          pbVar35[0xc] = 0;
          pbVar35[0xd] = 0;
          pbVar35[0xe] = 0;
          pbVar35[0xf] = 0;
          pbVar35[0x10] = 0;
          pbVar35[0x11] = 0;
          pbVar35[0x12] = 0;
          pbVar35[0x13] = 0;
          pbVar35[0x14] = 0;
          pbVar35[0x15] = 0;
          pbVar35[0x16] = 0;
          pbVar35[0x17] = 0;
          pbVar35[0] = 0;
          pbVar35[1] = 0;
          pbVar35[2] = 0;
          pbVar35[3] = 0;
          pbVar35[4] = 0;
          pbVar35[5] = 0;
          pbVar35[6] = 0;
          pbVar35[7] = 0;
          lVar18 = *(long *)(param_1 + 400);
          *(long *)(param_1 + 400) = lVar18 + 0x28;
          *(undefined8 *)(lVar18 + 0x40) = 0;
          *(undefined8 *)(lVar18 + 0x48) = 0;
          *(undefined8 *)(lVar18 + 0x28) = 0;
          *(undefined8 *)(lVar18 + 0x30) = 0;
          *(undefined8 *)(lVar18 + 0x38) = 0;
          pbVar35 = (byte *)(*(long *)(param_1 + 400) + 0x28);
          *(byte **)(param_1 + 400) = pbVar35;
        } while (uVar24 != 0);
      }
    }
  }
  else if (lVar18 * -0x3333333333333333 - uVar24 != 0) {
    while (pbVar34 = pbVar35, pbVar8 + uVar24 * 0x28 != pbVar34) {
      pbVar35 = pbVar34 + -0x28;
      if (((*pbVar35 & 1) != 0) && (*(ulong *)(pbVar34 + -0x18) != 0)) {
        FUN_710392eb40(*(ulong *)(pbVar34 + -0x18));
      }
    }
    *(byte **)(param_1 + 400) = pbVar8 + uVar24 * 0x28;
  }
  uVar29 = (uint)*pbVar37;
  if ((*pbVar37 - 0xb < 2) && (0 < *(int *)(pbVar37 + 1))) {
    lVar18 = 0;
LAB_7102bb9354:
    do {
      pbVar35 = &DAT_7104742dbb;
      iVar11 = (int)lVar18;
      if (iVar11 < 0) {
LAB_7102bb938c:
        lVar19 = 0;
      }
      else {
        lVar19 = 0;
        if (uVar29 == 0xb) {
          if (*(int *)(pbVar37 + 1) <= iVar11) goto LAB_7102bb938c;
          pbVar35 = pbVar37 + *(int *)(pbVar37 + (long)iVar11 * 4 + 5);
          lVar19 = local_c0;
        }
      }
      if ((*pbVar35 == 0xc) && (iVar11 = *(int *)(pbVar35 + 1) + -1, 0 < *(int *)(pbVar35 + 1))) {
        iVar23 = 0;
        do {
          iVar3 = iVar11 + iVar23;
          if (iVar3 < 0) {
            iVar3 = iVar3 + 1;
          }
          iVar3 = iVar3 >> 1;
          uVar24 = *(ulong *)(*(long *)(lVar19 + 0x20) +
                             (ulong)*(uint *)(*(long *)(lVar19 + 0x28) + (long)*(int *)(pbVar35 + 5)
                                             + (long)iVar3 * 8) * 8);
          if (uVar24 == 0xb38e4b741) break;
          iVar6 = iVar3 + -1;
          if (uVar24 < 0xb38e4b742) {
            iVar23 = iVar3 + 1;
            iVar6 = iVar11;
          }
          iVar11 = iVar6;
        } while (iVar23 <= iVar11);
      }
      std::string::assign((char *)(*plVar2 + lVar18 * 0x28));
      pbVar8 = &DAT_7104742dbb;
      pbVar34 = pbVar8;
      if ((*pbVar35 == 0xc) && (iVar11 = *(int *)(pbVar35 + 1) + -1, 0 < *(int *)(pbVar35 + 1))) {
        iVar23 = 0;
        do {
          iVar3 = iVar11 + iVar23;
          if (iVar3 < 0) {
            iVar3 = iVar3 + 1;
          }
          iVar3 = iVar3 >> 1;
          puVar1 = (uint *)(*(long *)(lVar19 + 0x28) + (long)*(int *)(pbVar35 + 5) + (long)iVar3 * 8
                           );
          uVar24 = *(ulong *)(*(long *)(lVar19 + 0x20) + (ulong)*puVar1 * 8);
          if (uVar24 == 0xa68050372) {
            uVar29 = puVar1[1];
            if (-1 < (int)uVar29) {
              pbVar34 = pbVar35 + (int)uVar29;
            }
            break;
          }
          iVar6 = iVar3 + -1;
          if (uVar24 < 0xa68050373) {
            iVar23 = iVar3 + 1;
            iVar6 = iVar11;
          }
          iVar11 = iVar6;
        } while (iVar23 <= iVar11);
      }
      switch(*pbVar34) {
      case 1:
      case 3:
        uVar29 = (uint)pbVar34[1];
        break;
      case 2:
        uVar29 = (uint)(char)pbVar34[1];
        break;
      case 4:
        uVar29 = (uint)*(short *)(pbVar34 + 1);
        break;
      case 5:
        uVar29 = (uint)*(ushort *)(pbVar34 + 1);
        break;
      case 6:
      case 7:
        uVar29 = *(uint *)(pbVar34 + 1);
        break;
      default:
        uVar29 = 1;
      }
      *(uint *)(*plVar2 + lVar18 * 0x28 + 0x18) = uVar29;
      pbVar34 = pbVar8;
      if ((*pbVar35 == 0xc) && (iVar11 = *(int *)(pbVar35 + 1) + -1, 0 < *(int *)(pbVar35 + 1))) {
        iVar23 = 0;
        do {
          iVar3 = iVar11 + iVar23;
          if (iVar3 < 0) {
            iVar3 = iVar3 + 1;
          }
          iVar3 = iVar3 >> 1;
          puVar1 = (uint *)(*(long *)(lVar19 + 0x28) + (long)*(int *)(pbVar35 + 5) + (long)iVar3 * 8
                           );
          uVar24 = *(ulong *)(*(long *)(lVar19 + 0x20) + (ulong)*puVar1 * 8);
          if (uVar24 == 0xc74d4e598) {
            uVar29 = puVar1[1];
            if (-1 < (int)uVar29) {
              pbVar34 = pbVar35 + (int)uVar29;
            }
            break;
          }
          iVar6 = iVar3 + -1;
          if (uVar24 < 0xc74d4e599) {
            iVar23 = iVar3 + 1;
            iVar6 = iVar11;
          }
          iVar11 = iVar6;
        } while (iVar23 <= iVar11);
      }
      uVar46 = 0x425c0000;
      if (*pbVar34 == 8) {
        uVar46 = *(undefined4 *)(pbVar34 + 1);
      }
      *(undefined4 *)(*plVar2 + lVar18 * 0x28 + 0x1c) = uVar46;
      pbVar34 = pbVar8;
      if ((*pbVar35 == 0xc) && (iVar11 = *(int *)(pbVar35 + 1) + -1, 0 < *(int *)(pbVar35 + 1))) {
        iVar23 = 0;
        do {
          iVar3 = iVar11 + iVar23;
          if (iVar3 < 0) {
            iVar3 = iVar3 + 1;
          }
          iVar3 = iVar3 >> 1;
          puVar1 = (uint *)(*(long *)(lVar19 + 0x28) + (long)*(int *)(pbVar35 + 5) + (long)iVar3 * 8
                           );
          uVar24 = *(ulong *)(*(long *)(lVar19 + 0x20) + (ulong)*puVar1 * 8);
          if (uVar24 == 0xb768aaaff) {
            uVar29 = puVar1[1];
            if (-1 < (int)uVar29) {
              pbVar34 = pbVar35 + (int)uVar29;
            }
            break;
          }
          iVar6 = iVar3 + -1;
          if (uVar24 < 0xb768aab00) {
            iVar23 = iVar3 + 1;
            iVar6 = iVar11;
          }
          iVar11 = iVar6;
        } while (iVar23 <= iVar11);
      }
      uVar46 = 0x425c0000;
      if (*pbVar34 == 8) {
        uVar46 = *(undefined4 *)(pbVar34 + 1);
      }
      *(undefined4 *)(*plVar2 + lVar18 * 0x28 + 0x20) = uVar46;
      if ((*pbVar35 == 0xc) && (iVar11 = *(int *)(pbVar35 + 1) + -1, 0 < *(int *)(pbVar35 + 1))) {
        iVar23 = 0;
        do {
          iVar3 = iVar11 + iVar23;
          if (iVar3 < 0) {
            iVar3 = iVar3 + 1;
          }
          iVar3 = iVar3 >> 1;
          puVar1 = (uint *)(*(long *)(lVar19 + 0x28) + (long)*(int *)(pbVar35 + 5) + (long)iVar3 * 8
                           );
          uVar24 = *(ulong *)(*(long *)(lVar19 + 0x20) + (ulong)*puVar1 * 8);
          if (uVar24 == 0x19a30da42f) {
            uVar29 = puVar1[1];
            if (-1 < (int)uVar29) {
              pbVar8 = pbVar35 + (int)uVar29;
            }
            break;
          }
          iVar6 = iVar3 + -1;
          if (uVar24 < 0x19a30da430) {
            iVar23 = iVar3 + 1;
            iVar6 = iVar11;
          }
          iVar11 = iVar6;
        } while (iVar23 <= iVar11);
      }
      uVar46 = 0;
      if (*pbVar8 == 8) {
        uVar46 = *(undefined4 *)(pbVar8 + 1);
      }
      lVar19 = lVar18 * 0x28;
      lVar18 = lVar18 + 1;
      *(undefined4 *)(*plVar2 + lVar19 + 0x24) = uVar46;
      uVar29 = (uint)*pbVar37;
      if (uVar29 - 0xb < 2) {
        if (*(int *)(pbVar37 + 1) <= lVar18) break;
        goto LAB_7102bb9354;
      }
    } while (lVar18 < 0);
  }
  pcVar12 = (char *)*plVar9;
  if ((*pcVar12 == '\f') && (iVar11 = *(int *)(pcVar12 + 1) + -1, 0 < *(int *)(pcVar12 + 1))) {
    lVar18 = *param_2;
    iVar23 = 0;
    pbVar37 = &DAT_7104742dbb;
    do {
      iVar3 = iVar11 + iVar23;
      if (iVar3 < 0) {
        iVar3 = iVar3 + 1;
      }
      iVar3 = iVar3 >> 1;
      puVar1 = (uint *)(*(long *)(lVar18 + 0x28) + (long)*(int *)(pcVar12 + 5) + (long)iVar3 * 8);
      uVar24 = *(ulong *)(*(long *)(lVar18 + 0x20) + (ulong)*puVar1 * 8);
      if (uVar24 == 0xb9ced2964) {
        uVar29 = puVar1[1];
        if ((int)uVar29 < 0) goto LAB_7102bb9814;
        pbVar37 = (byte *)(pcVar12 + (int)uVar29);
        goto LAB_7102bb9820;
      }
      iVar6 = iVar3 + -1;
      if (uVar24 < 0xb9ced2965) {
        iVar23 = iVar3 + 1;
        iVar6 = iVar11;
      }
      iVar11 = iVar6;
    } while (iVar23 <= iVar11);
    lVar18 = 0;
  }
  else {
LAB_7102bb9814:
    lVar18 = 0;
    pbVar37 = &DAT_7104742dbb;
  }
LAB_7102bb9820:
  if (*pbVar37 - 0xb < 2) {
    iVar11 = *(int *)(pbVar37 + 1);
  }
  else {
    iVar11 = 0;
  }
  lVar19 = *(long *)(param_1 + 0x1a8) - *(long *)(param_1 + 0x1a0) >> 2;
  uVar20 = lVar19 * -0x5555555555555555;
  uVar24 = (ulong)iVar11;
  plVar2 = (long *)(param_1 + 0x1a0);
  if (uVar20 < uVar24) {
    FUN_7102bbe0a0(plVar2,uVar24 + lVar19 * 0x5555555555555555,(long ****)0x569ff9e1b,
                   (byte ****)0x51ef8ae8d,param_5,uVar33,param_7,param_8);
  }
  else if (uVar20 - uVar24 != 0) {
    *(ulong *)(param_1 + 0x1a8) = *(long *)(param_1 + 0x1a0) + uVar24 * 0xc;
  }
  ppppbVar39 = (byte ****)0x51ef8ae8d;
  pppplVar10 = (long ****)0x569ff9e1b;
  uVar29 = (uint)*pbVar37;
  if ((*pbVar37 - 0xb < 2) && (0 < *(int *)(pbVar37 + 1))) {
    lVar19 = 0;
LAB_7102bb98fc:
    do {
      iVar11 = (int)lVar19;
      if (iVar11 < 0) {
LAB_7102bb9934:
        lVar13 = 0;
        pbVar35 = &DAT_7104742dbb;
      }
      else {
        pbVar35 = &DAT_7104742dbb;
        lVar13 = 0;
        if (uVar29 == 0xb) {
          if (*(int *)(pbVar37 + 1) <= iVar11) goto LAB_7102bb9934;
          pbVar35 = pbVar37 + *(int *)(pbVar37 + (long)iVar11 * 4 + 5);
          lVar13 = lVar18;
        }
      }
      pbVar8 = &DAT_7104742dbb;
      if (*pbVar35 == 0xc) {
        iVar11 = *(int *)(pbVar35 + 1) + -1;
        if (*(int *)(pbVar35 + 1) < 1) {
LAB_7102bb99d0:
          pbVar8 = &DAT_7104742dbb;
        }
        else {
          iVar23 = 0;
          do {
            iVar3 = iVar11 + iVar23;
            if (iVar3 < 0) {
              iVar3 = iVar3 + 1;
            }
            iVar3 = iVar3 >> 1;
            puVar1 = (uint *)(*(long *)(lVar13 + 0x28) + (long)*(int *)(pbVar35 + 5) +
                             (long)iVar3 * 8);
            uVar24 = *(ulong *)(*(long *)(lVar13 + 0x20) + (ulong)*puVar1 * 8);
            if (uVar24 == 0x569ff9e1b) {
              uVar29 = puVar1[1];
              if ((int)uVar29 < 0) goto LAB_7102bb99d0;
              pbVar8 = pbVar35 + (int)uVar29;
              break;
            }
            iVar6 = iVar3 + -1;
            if (uVar24 < 0x569ff9e1c) {
              iVar23 = iVar3 + 1;
              iVar6 = iVar11;
            }
            iVar11 = iVar6;
          } while (iVar23 <= iVar11);
        }
      }
      uVar46 = 0;
      if (*pbVar8 == 8) {
        uVar46 = *(undefined4 *)(pbVar8 + 1);
      }
      *(undefined4 *)(*plVar2 + lVar19 * 0xc) = uVar46;
      pbVar8 = &DAT_7104742dbb;
      if (*pbVar35 == 0xc) {
        iVar11 = *(int *)(pbVar35 + 1) + -1;
        if (*(int *)(pbVar35 + 1) < 1) {
LAB_7102bb9a8c:
          pbVar8 = &DAT_7104742dbb;
        }
        else {
          iVar23 = 0;
          do {
            iVar3 = iVar11 + iVar23;
            if (iVar3 < 0) {
              iVar3 = iVar3 + 1;
            }
            iVar3 = iVar3 >> 1;
            puVar1 = (uint *)(*(long *)(lVar13 + 0x28) + (long)*(int *)(pbVar35 + 5) +
                             (long)iVar3 * 8);
            uVar24 = *(ulong *)(*(long *)(lVar13 + 0x20) + (ulong)*puVar1 * 8);
            if (uVar24 == 0x51ef8ae8d) {
              uVar29 = puVar1[1];
              if ((int)uVar29 < 0) goto LAB_7102bb9a8c;
              pbVar8 = pbVar35 + (int)uVar29;
              break;
            }
            iVar6 = iVar3 + -1;
            if (uVar24 < 0x51ef8ae8e) {
              iVar23 = iVar3 + 1;
              iVar6 = iVar11;
            }
            iVar11 = iVar6;
          } while (iVar23 <= iVar11);
        }
      }
      uVar46 = 0x44940000;
      if (*pbVar8 == 8) {
        uVar46 = *(undefined4 *)(pbVar8 + 1);
      }
      *(undefined4 *)(*plVar2 + lVar19 * 0xc + 4) = uVar46;
      pbVar8 = &DAT_7104742dbb;
      if (*pbVar35 == 0xc) {
        iVar11 = *(int *)(pbVar35 + 1) + -1;
        if (*(int *)(pbVar35 + 1) < 1) {
LAB_7102bb9b48:
          pbVar8 = &DAT_7104742dbb;
        }
        else {
          iVar23 = 0;
          do {
            iVar3 = iVar11 + iVar23;
            if (iVar3 < 0) {
              iVar3 = iVar3 + 1;
            }
            iVar3 = iVar3 >> 1;
            puVar1 = (uint *)(*(long *)(lVar13 + 0x28) + (long)*(int *)(pbVar35 + 5) +
                             (long)iVar3 * 8);
            uVar24 = *(ulong *)(*(long *)(lVar13 + 0x20) + (ulong)*puVar1 * 8);
            if (uVar24 == 0x587f1ff37) {
              uVar29 = puVar1[1];
              if ((int)uVar29 < 0) goto LAB_7102bb9b48;
              pbVar8 = pbVar35 + (int)uVar29;
              break;
            }
            iVar6 = iVar3 + -1;
            if (uVar24 < 0x587f1ff38) {
              iVar23 = iVar3 + 1;
              iVar6 = iVar11;
            }
            iVar11 = iVar6;
          } while (iVar23 <= iVar11);
        }
      }
      uVar46 = 0;
      if (*pbVar8 == 8) {
        uVar46 = *(undefined4 *)(pbVar8 + 1);
      }
      lVar13 = lVar19 * 0xc;
      lVar19 = lVar19 + 1;
      *(undefined4 *)(*plVar2 + lVar13 + 8) = uVar46;
      uVar29 = (uint)*pbVar37;
      if (uVar29 - 0xb < 2) {
        if (*(int *)(pbVar37 + 1) <= lVar19) break;
        goto LAB_7102bb98fc;
      }
    } while (lVar19 < 0);
  }
  pcVar12 = (char *)*plVar9;
  if ((*pcVar12 == '\f') && (iVar11 = *(int *)(pcVar12 + 1) + -1, 0 < *(int *)(pcVar12 + 1))) {
    lVar18 = *param_2;
    iVar23 = 0;
    pbVar37 = &DAT_7104742dbb;
    do {
      iVar3 = iVar11 + iVar23;
      if (iVar3 < 0) {
        iVar3 = iVar3 + 1;
      }
      iVar3 = iVar3 >> 1;
      puVar1 = (uint *)(*(long *)(lVar18 + 0x28) + (long)*(int *)(pcVar12 + 5) + (long)iVar3 * 8);
      uVar24 = *(ulong *)(*(long *)(lVar18 + 0x20) + (ulong)*puVar1 * 8);
      if (uVar24 == 0xb377dbfcc) {
        uVar29 = puVar1[1];
        if ((int)uVar29 < 0) goto LAB_7102bb9c3c;
        pbVar37 = (byte *)(pcVar12 + (int)uVar29);
        goto LAB_7102bb9c48;
      }
      iVar6 = iVar3 + -1;
      if (uVar24 < 0xb377dbfcd) {
        iVar23 = iVar3 + 1;
        iVar6 = iVar11;
      }
      iVar11 = iVar6;
    } while (iVar23 <= iVar11);
    lVar18 = 0;
  }
  else {
LAB_7102bb9c3c:
    lVar18 = 0;
    pbVar37 = &DAT_7104742dbb;
  }
LAB_7102bb9c48:
  if (*pbVar37 - 0xb < 2) {
    iVar11 = *(int *)(pbVar37 + 1);
  }
  else {
    iVar11 = 0;
  }
  puVar38 = *(undefined8 **)(param_1 + 0x1b8);
  puVar25 = *(undefined8 **)(param_1 + 0x1c0);
  uVar24 = (ulong)iVar11;
  lVar19 = (long)puVar25 - (long)puVar38 >> 3;
  plVar2 = (long *)(param_1 + 0x1b8);
  if ((ulong)(lVar19 * -0x71c71c71c71c71c7) < uVar24) {
    uVar20 = uVar24 + lVar19 * 0x71c71c71c71c71c7;
    if ((ulong)((*(long *)(param_1 + 0x1c8) - (long)puVar25 >> 3) * -0x71c71c71c71c71c7) < uVar20) {
      if (iVar11 < 0) goto LAB_7102bbde84;
      lVar13 = *(long *)(param_1 + 0x1c8) - (long)puVar38 >> 3;
      if ((ulong)(lVar13 * -0x71c71c71c71c71c7) < 0x1c71c71c71c71c7) {
        uVar16 = lVar13 * 0x1c71c71c71c71c72;
        uVar14 = uVar24;
        if (uVar24 <= uVar16) {
          uVar14 = uVar16;
        }
        if (uVar14 != 0) goto LAB_7102bb9df4;
LAB_7102bb9e58:
        lVar13 = 0;
      }
      else {
        uVar14 = 0x38e38e38e38e38e;
LAB_7102bb9df4:
        ppplVar15 = (long ***)(uVar14 * 0x48);
        if (ppplVar15 == (long ***)0x0) {
          ppplVar15 = (long ***)0x1;
        }
        lVar13 = FUN_710392e290(0x10,ppplVar15,(long ****)0x569ff9e1b,(byte ****)0x51ef8ae8d,param_5
                                ,uVar33,param_7,param_8);
        if (lVar13 == 0) {
          if (DAT_7105332f00 != (long *)0x0) {
            local_84 = 0;
            pppplVar10 = &local_98;
            local_98 = ppplVar15;
            uVar16 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_84);
            if (((uVar16 & 1) != 0) &&
               (lVar13 = FUN_710392e290(0x10,ppplVar15,pppplVar10,ppppbVar39,param_5,uVar33,param_7,
                                        param_8), lVar13 != 0)) goto LAB_7102bb9e5c;
          }
          goto LAB_7102bb9e58;
        }
      }
LAB_7102bb9e5c:
      pvVar43 = (void *)(lVar13 + lVar19 * 8);
      pppplVar10 = (long ****)(uVar20 * 0x48);
      lVar19 = lVar13 + uVar14 * 0x48;
      memset(pvVar43,0,(size_t)pppplVar10);
      lVar13 = lVar13 + uVar24 * 0x48;
      if (puVar25 == puVar38) {
        *(void **)(param_1 + 0x1b8) = pvVar43;
        *(long *)(param_1 + 0x1c0) = lVar13;
        *(long *)(param_1 + 0x1c8) = lVar19;
      }
      else {
        lVar28 = 0;
        do {
          uVar30 = *(undefined8 *)((long)puVar25 + lVar28 + -0x48);
          uVar27 = *(undefined8 *)((long)puVar25 + lVar28 + -0x38);
          lVar21 = lVar28 + -0x48;
          *(undefined8 *)((long)pvVar43 + lVar28 + -0x40) =
               *(undefined8 *)((long)puVar25 + lVar28 + -0x40);
          *(undefined8 *)((long)pvVar43 + lVar28 + -0x38) = uVar27;
          *(undefined8 *)((long)pvVar43 + lVar28 + -0x48) = uVar30;
          uVar30 = *(undefined8 *)((long)puVar25 + lVar28 + -0x30);
          *(undefined8 *)((long)puVar25 + lVar28 + -0x48) = 0;
          *(undefined8 *)((long)puVar25 + lVar28 + -0x40) = 0;
          *(undefined8 *)((long)puVar25 + lVar28 + -0x38) = 0;
          *(undefined4 *)((long)pvVar43 + lVar28 + -0x28) =
               *(undefined4 *)((long)puVar25 + lVar28 + -0x28);
          *(undefined8 *)((long)pvVar43 + lVar28 + -0x30) = uVar30;
          uVar30 = *(undefined8 *)((long)puVar25 + lVar28 + -0x20);
          uVar27 = *(undefined8 *)((long)puVar25 + lVar28 + -0x10);
          *(undefined8 *)((long)pvVar43 + lVar28 + -0x18) =
               *(undefined8 *)((long)puVar25 + lVar28 + -0x18);
          *(undefined8 *)((long)pvVar43 + lVar28 + -0x10) = uVar27;
          *(undefined8 *)((long)pvVar43 + lVar28 + -0x20) = uVar30;
          *(undefined8 *)((long)puVar25 + lVar28 + -0x18) = 0;
          *(undefined8 *)((long)puVar25 + lVar28 + -0x10) = 0;
          *(undefined8 *)((long)puVar25 + lVar28 + -0x20) = 0;
          *(undefined8 *)((long)pvVar43 + lVar28 + -8) =
               *(undefined8 *)((long)puVar25 + lVar28 + -8);
          lVar28 = lVar21;
        } while ((long)puVar38 - (long)puVar25 != lVar21);
        puVar38 = *(undefined8 **)(param_1 + 0x1b8);
        puVar25 = *(undefined8 **)(param_1 + 0x1c0);
        *(long *)(param_1 + 0x1b8) = (long)pvVar43 + lVar21;
        *(long *)(param_1 + 0x1c0) = lVar13;
        *(long *)(param_1 + 0x1c8) = lVar19;
        while (puVar40 = puVar25, puVar40 != puVar38) {
          if (((*(byte *)(puVar40 + -4) & 1) != 0) && (puVar40[-2] != 0)) {
            FUN_710392eb40(puVar40[-2]);
          }
          puVar25 = puVar40 + -9;
          if (((*(byte *)(puVar40 + -9) & 1) != 0) && (puVar40[-7] != 0)) {
            FUN_710392eb40(puVar40[-7]);
          }
        }
      }
      if (puVar38 != (undefined8 *)0x0) {
        FUN_710392eb40((ulong)puVar38);
      }
    }
    else {
      uVar24 = uVar20;
      if ((uVar20 & 1) != 0) {
        puVar25[7] = 0;
        puVar25[8] = 0;
        *puVar25 = 0;
        puVar25[5] = 0;
        puVar25[6] = 0;
        puVar25[3] = 0;
        puVar25[4] = 0;
        puVar25[1] = 0;
        puVar25[2] = 0;
        puVar25 = (undefined8 *)(*(long *)(param_1 + 0x1c0) + 0x48);
        uVar24 = uVar20 - 1;
        *(undefined8 **)(param_1 + 0x1c0) = puVar25;
      }
      if (uVar20 != 1) {
        do {
          puVar25[7] = 0;
          puVar25[8] = 0;
          uVar24 = uVar24 - 2;
          puVar25[5] = 0;
          puVar25[6] = 0;
          *puVar25 = 0;
          puVar25[3] = 0;
          puVar25[4] = 0;
          puVar25[1] = 0;
          puVar25[2] = 0;
          lVar19 = *(long *)(param_1 + 0x1c0);
          *(long *)(param_1 + 0x1c0) = lVar19 + 0x48;
          *(undefined8 *)(lVar19 + 0x48) = 0;
          *(undefined8 *)(lVar19 + 0x80) = 0;
          *(undefined8 *)(lVar19 + 0x88) = 0;
          *(undefined8 *)(lVar19 + 0x70) = 0;
          *(undefined8 *)(lVar19 + 0x78) = 0;
          *(undefined8 *)(lVar19 + 0x60) = 0;
          *(undefined8 *)(lVar19 + 0x68) = 0;
          *(undefined8 *)(lVar19 + 0x50) = 0;
          *(undefined8 *)(lVar19 + 0x58) = 0;
          puVar25 = (undefined8 *)(*(long *)(param_1 + 0x1c0) + 0x48);
          *(undefined8 **)(param_1 + 0x1c0) = puVar25;
        } while (uVar24 != 0);
      }
    }
  }
  else if (lVar19 * -0x71c71c71c71c71c7 - uVar24 != 0) {
    while (puVar40 = puVar25, puVar38 + uVar24 * 9 != puVar40) {
      if (((*(byte *)(puVar40 + -4) & 1) != 0) && (puVar40[-2] != 0)) {
        FUN_710392eb40(puVar40[-2]);
      }
      puVar25 = puVar40 + -9;
      if (((*(byte *)(puVar40 + -9) & 1) != 0) && (puVar40[-7] != 0)) {
        FUN_710392eb40(puVar40[-7]);
      }
    }
    *(undefined8 **)(param_1 + 0x1c0) = puVar38 + uVar24 * 9;
  }
  uVar29 = (uint)*pbVar37;
  if ((*pbVar37 - 0xb < 2) && (0 < *(int *)(pbVar37 + 1))) {
    lVar19 = 0;
LAB_7102bb9ff8:
    do {
      iVar11 = (int)lVar19;
      if (iVar11 < 0) {
LAB_7102bba034:
        lVar13 = 0;
        pbVar35 = &DAT_7104742dbb;
      }
      else {
        pbVar35 = &DAT_7104742dbb;
        lVar13 = 0;
        if (uVar29 == 0xb) {
          if (*(int *)(pbVar37 + 1) <= iVar11) goto LAB_7102bba034;
          pbVar35 = pbVar37 + *(int *)(pbVar37 + (long)iVar11 * 4 + 5);
          lVar13 = lVar18;
        }
      }
      if ((*pbVar35 == 0xc) && (iVar11 = *(int *)(pbVar35 + 1) + -1, 0 < *(int *)(pbVar35 + 1))) {
        iVar23 = 0;
        do {
          iVar3 = iVar11 + iVar23;
          if (iVar3 < 0) {
            iVar3 = iVar3 + 1;
          }
          iVar3 = iVar3 >> 1;
          uVar24 = *(ulong *)(*(long *)(lVar13 + 0x20) +
                             (ulong)*(uint *)(*(long *)(lVar13 + 0x28) + (long)*(int *)(pbVar35 + 5)
                                             + (long)iVar3 * 8) * 8);
          if (uVar24 == 0xa737452e1) break;
          iVar6 = iVar3 + -1;
          if (uVar24 < 0xa737452e2) {
            iVar23 = iVar3 + 1;
            iVar6 = iVar11;
          }
          iVar11 = iVar6;
        } while (iVar23 <= iVar11);
      }
      std::string::assign((char *)(*plVar2 + lVar19 * 0x48));
      pbVar8 = &DAT_7104742dbb;
      if ((*pbVar35 == 0xc) && (iVar11 = *(int *)(pbVar35 + 1) + -1, 0 < *(int *)(pbVar35 + 1))) {
        iVar23 = 0;
        do {
          iVar3 = iVar11 + iVar23;
          if (iVar3 < 0) {
            iVar3 = iVar3 + 1;
          }
          iVar3 = iVar3 >> 1;
          puVar1 = (uint *)(*(long *)(lVar13 + 0x28) + (long)*(int *)(pbVar35 + 5) + (long)iVar3 * 8
                           );
          uVar24 = *(ulong *)(*(long *)(lVar13 + 0x20) + (ulong)*puVar1 * 8);
          if (uVar24 == 0x569ff9e1b) {
            uVar29 = puVar1[1];
            if (-1 < (int)uVar29) {
              pbVar8 = pbVar35 + (int)uVar29;
            }
            break;
          }
          iVar6 = iVar3 + -1;
          if (uVar24 < 0x569ff9e1c) {
            iVar23 = iVar3 + 1;
            iVar6 = iVar11;
          }
          iVar11 = iVar6;
        } while (iVar23 <= iVar11);
      }
      uVar46 = 0xc3020000;
      if (*pbVar8 == 8) {
        uVar46 = *(undefined4 *)(pbVar8 + 1);
      }
      *(undefined4 *)(*plVar2 + lVar19 * 0x48 + 0x18) = uVar46;
      pbVar8 = &DAT_7104742dbb;
      if ((*pbVar35 == 0xc) && (iVar11 = *(int *)(pbVar35 + 1) + -1, 0 < *(int *)(pbVar35 + 1))) {
        iVar23 = 0;
        do {
          iVar3 = iVar11 + iVar23;
          if (iVar3 < 0) {
            iVar3 = iVar3 + 1;
          }
          iVar3 = iVar3 >> 1;
          puVar1 = (uint *)(*(long *)(lVar13 + 0x28) + (long)*(int *)(pbVar35 + 5) + (long)iVar3 * 8
                           );
          uVar24 = *(ulong *)(*(long *)(lVar13 + 0x20) + (ulong)*puVar1 * 8);
          if (uVar24 == 0x51ef8ae8d) {
            uVar29 = puVar1[1];
            if (-1 < (int)uVar29) {
              pbVar8 = pbVar35 + (int)uVar29;
            }
            break;
          }
          iVar6 = iVar3 + -1;
          if (uVar24 < 0x51ef8ae8e) {
            iVar23 = iVar3 + 1;
            iVar6 = iVar11;
          }
          iVar11 = iVar6;
        } while (iVar23 <= iVar11);
      }
      uVar46 = 0;
      if (*pbVar8 == 8) {
        uVar46 = *(undefined4 *)(pbVar8 + 1);
      }
      *(undefined4 *)(*plVar2 + lVar19 * 0x48 + 0x1c) = uVar46;
      pbVar8 = &DAT_7104742dbb;
      if ((*pbVar35 == 0xc) && (iVar11 = *(int *)(pbVar35 + 1) + -1, 0 < *(int *)(pbVar35 + 1))) {
        iVar23 = 0;
        do {
          iVar3 = iVar11 + iVar23;
          if (iVar3 < 0) {
            iVar3 = iVar3 + 1;
          }
          iVar3 = iVar3 >> 1;
          puVar1 = (uint *)(*(long *)(lVar13 + 0x28) + (long)*(int *)(pbVar35 + 5) + (long)iVar3 * 8
                           );
          uVar24 = *(ulong *)(*(long *)(lVar13 + 0x20) + (ulong)*puVar1 * 8);
          if (uVar24 == 0x587f1ff37) {
            uVar29 = puVar1[1];
            if (-1 < (int)uVar29) {
              pbVar8 = pbVar35 + (int)uVar29;
            }
            break;
          }
          iVar6 = iVar3 + -1;
          if (uVar24 < 0x587f1ff38) {
            iVar23 = iVar3 + 1;
            iVar6 = iVar11;
          }
          iVar11 = iVar6;
        } while (iVar23 <= iVar11);
      }
      uVar46 = 0xc1f00000;
      if (*pbVar8 == 8) {
        uVar46 = *(undefined4 *)(pbVar8 + 1);
      }
      *(undefined4 *)(*plVar2 + lVar19 * 0x48 + 0x20) = uVar46;
      if ((*pbVar35 == 0xc) && (iVar11 = *(int *)(pbVar35 + 1) + -1, 0 < *(int *)(pbVar35 + 1))) {
        iVar23 = 0;
        do {
          iVar3 = iVar11 + iVar23;
          if (iVar3 < 0) {
            iVar3 = iVar3 + 1;
          }
          iVar3 = iVar3 >> 1;
          uVar24 = *(ulong *)(*(long *)(lVar13 + 0x20) +
                             (ulong)*(uint *)(*(long *)(lVar13 + 0x28) + (long)*(int *)(pbVar35 + 5)
                                             + (long)iVar3 * 8) * 8);
          if (uVar24 == 0xb38e4b741) break;
          iVar6 = iVar3 + -1;
          if (uVar24 < 0xb38e4b742) {
            iVar23 = iVar3 + 1;
            iVar6 = iVar11;
          }
          iVar11 = iVar6;
        } while (iVar23 <= iVar11);
      }
      std::string::assign((char *)(*plVar2 + lVar19 * 0x48 + 0x28));
      pbVar8 = &DAT_7104742dbb;
      if ((*pbVar35 == 0xc) && (iVar11 = *(int *)(pbVar35 + 1) + -1, 0 < *(int *)(pbVar35 + 1))) {
        iVar23 = 0;
        do {
          iVar3 = iVar11 + iVar23;
          if (iVar3 < 0) {
            iVar3 = iVar3 + 1;
          }
          iVar3 = iVar3 >> 1;
          puVar1 = (uint *)(*(long *)(lVar13 + 0x28) + (long)*(int *)(pbVar35 + 5) + (long)iVar3 * 8
                           );
          uVar24 = *(ulong *)(*(long *)(lVar13 + 0x20) + (ulong)*puVar1 * 8);
          if (uVar24 == 0x56177eb68) {
            uVar29 = puVar1[1];
            if (-1 < (int)uVar29) {
              pbVar8 = pbVar35 + (int)uVar29;
            }
            break;
          }
          iVar6 = iVar3 + -1;
          if (uVar24 < 0x56177eb69) {
            iVar23 = iVar3 + 1;
            iVar6 = iVar11;
          }
          iVar11 = iVar6;
        } while (iVar23 <= iVar11);
      }
      uVar46 = 0x41200000;
      if (*pbVar8 == 8) {
        uVar46 = *(undefined4 *)(pbVar8 + 1);
      }
      *(undefined4 *)(*plVar2 + lVar19 * 0x48 + 0x40) = uVar46;
      pbVar8 = &DAT_7104742dbb;
      if ((*pbVar35 == 0xc) && (iVar11 = *(int *)(pbVar35 + 1) + -1, 0 < *(int *)(pbVar35 + 1))) {
        iVar23 = 0;
        do {
          iVar3 = iVar11 + iVar23;
          if (iVar3 < 0) {
            iVar3 = iVar3 + 1;
          }
          iVar3 = iVar3 >> 1;
          puVar1 = (uint *)(*(long *)(lVar13 + 0x28) + (long)*(int *)(pbVar35 + 5) + (long)iVar3 * 8
                           );
          uVar24 = *(ulong *)(*(long *)(lVar13 + 0x20) + (ulong)*puVar1 * 8);
          if (uVar24 == 0xf876f02a8) {
            uVar29 = puVar1[1];
            if (-1 < (int)uVar29) {
              pbVar8 = pbVar35 + (int)uVar29;
            }
            break;
          }
          iVar6 = iVar3 + -1;
          if (uVar24 < 0xf876f02a9) {
            iVar23 = iVar3 + 1;
            iVar6 = iVar11;
          }
          iVar11 = iVar6;
        } while (iVar23 <= iVar11);
      }
      uVar46 = 0x41a00000;
      if (*pbVar8 == 8) {
        uVar46 = *(undefined4 *)(pbVar8 + 1);
      }
      lVar13 = lVar19 * 0x48;
      lVar19 = lVar19 + 1;
      *(undefined4 *)(*plVar2 + lVar13 + 0x44) = uVar46;
      uVar29 = (uint)*pbVar37;
      if (uVar29 - 0xb < 2) {
        if (*(int *)(pbVar37 + 1) <= lVar19) break;
        goto LAB_7102bb9ff8;
      }
    } while (lVar19 < 0);
  }
  pcVar12 = (char *)*plVar9;
  if ((*pcVar12 == '\f') && (iVar11 = *(int *)(pcVar12 + 1) + -1, 0 < *(int *)(pcVar12 + 1))) {
    iVar23 = 0;
    pcVar22 = "";
    do {
      iVar3 = iVar11 + iVar23;
      if (iVar3 < 0) {
        iVar3 = iVar3 + 1;
      }
      iVar3 = iVar3 >> 1;
      puVar1 = (uint *)(*(long *)(*param_2 + 0x28) + (long)*(int *)(pcVar12 + 5) + (long)iVar3 * 8);
      uVar24 = *(ulong *)(*(long *)(*param_2 + 0x20) + (ulong)*puVar1 * 8);
      if (uVar24 == 0x12721d9e56) {
        uVar29 = puVar1[1];
        if ((int)uVar29 < 0) goto LAB_7102bba5c0;
        pcVar22 = pcVar12 + (int)uVar29;
        break;
      }
      iVar6 = iVar3 + -1;
      if (uVar24 < 0x12721d9e57) {
        iVar23 = iVar3 + 1;
        iVar6 = iVar11;
      }
      iVar11 = iVar6;
    } while (iVar23 <= iVar11);
  }
  else {
LAB_7102bba5c0:
    pcVar22 = "";
  }
  switch(*pcVar22) {
  case '\x01':
  case '\x03':
    uVar29 = (uint)(byte)pcVar22[1];
    break;
  case '\x02':
    uVar29 = (uint)pcVar22[1];
    break;
  case '\x04':
    uVar29 = (uint)*(short *)(pcVar22 + 1);
    break;
  case '\x05':
    uVar29 = (uint)*(ushort *)(pcVar22 + 1);
    break;
  case '\x06':
  case '\a':
    uVar29 = *(uint *)(pcVar22 + 1);
    break;
  default:
    uVar29 = 4;
  }
  *(uint *)(param_1 + 0x1d0) = uVar29;
  pcVar12 = (char *)*plVar9;
  if ((*pcVar12 == '\f') && (iVar11 = *(int *)(pcVar12 + 1) + -1, 0 < *(int *)(pcVar12 + 1))) {
    iVar23 = 0;
    pcVar22 = "";
    do {
      iVar3 = iVar11 + iVar23;
      if (iVar3 < 0) {
        iVar3 = iVar3 + 1;
      }
      iVar3 = iVar3 >> 1;
      puVar1 = (uint *)(*(long *)(*param_2 + 0x28) + (long)*(int *)(pcVar12 + 5) + (long)iVar3 * 8);
      uVar24 = *(ulong *)(*(long *)(*param_2 + 0x20) + (ulong)*puVar1 * 8);
      if (uVar24 == 0x124e10a10f) {
        uVar29 = puVar1[1];
        if ((int)uVar29 < 0) goto LAB_7102bba6b8;
        pcVar22 = pcVar12 + (int)uVar29;
        break;
      }
      iVar6 = iVar3 + -1;
      if (uVar24 < 0x124e10a110) {
        iVar23 = iVar3 + 1;
        iVar6 = iVar11;
      }
      iVar11 = iVar6;
    } while (iVar23 <= iVar11);
  }
  else {
LAB_7102bba6b8:
    pcVar22 = "";
  }
  switch(*pcVar22) {
  case '\x01':
  case '\x03':
    uVar29 = (uint)(byte)pcVar22[1];
    break;
  case '\x02':
    uVar29 = (uint)pcVar22[1];
    break;
  case '\x04':
    uVar29 = (uint)*(short *)(pcVar22 + 1);
    break;
  case '\x05':
    uVar29 = (uint)*(ushort *)(pcVar22 + 1);
    break;
  case '\x06':
  case '\a':
    uVar29 = *(uint *)(pcVar22 + 1);
    break;
  default:
    uVar29 = 7;
  }
  *(uint *)(param_1 + 0x1d4) = uVar29;
  pcVar12 = (char *)*plVar9;
  if ((*pcVar12 == '\f') && (iVar11 = *(int *)(pcVar12 + 1) + -1, 0 < *(int *)(pcVar12 + 1))) {
    iVar23 = 0;
    pcVar22 = "";
    do {
      iVar3 = iVar11 + iVar23;
      if (iVar3 < 0) {
        iVar3 = iVar3 + 1;
      }
      iVar3 = iVar3 >> 1;
      puVar1 = (uint *)(*(long *)(*param_2 + 0x28) + (long)*(int *)(pcVar12 + 5) + (long)iVar3 * 8);
      uVar24 = *(ulong *)(*(long *)(*param_2 + 0x20) + (ulong)*puVar1 * 8);
      if (uVar24 == 0x1cb57c224d) {
        uVar29 = puVar1[1];
        if ((int)uVar29 < 0) goto LAB_7102bba7b0;
        pcVar22 = pcVar12 + (int)uVar29;
        break;
      }
      iVar6 = iVar3 + -1;
      if (uVar24 < 0x1cb57c224e) {
        iVar23 = iVar3 + 1;
        iVar6 = iVar11;
      }
      iVar11 = iVar6;
    } while (iVar23 <= iVar11);
  }
  else {
LAB_7102bba7b0:
    pcVar22 = "";
  }
  switch(*pcVar22) {
  case '\x01':
  case '\x03':
    uVar29 = (uint)(byte)pcVar22[1];
    break;
  case '\x02':
    uVar29 = (uint)pcVar22[1];
    break;
  case '\x04':
    uVar29 = (uint)*(short *)(pcVar22 + 1);
    break;
  case '\x05':
    uVar29 = (uint)*(ushort *)(pcVar22 + 1);
    break;
  case '\x06':
  case '\a':
    uVar29 = *(uint *)(pcVar22 + 1);
    break;
  default:
    uVar29 = 1;
  }
  *(bool *)(param_1 + 0x1d8) = uVar29 != 0;
  pcVar12 = (char *)*plVar9;
  if ((*pcVar12 == '\f') && (iVar11 = *(int *)(pcVar12 + 1) + -1, 0 < *(int *)(pcVar12 + 1))) {
    lVar18 = *param_2;
    iVar23 = 0;
    pbVar37 = &DAT_7104742dbb;
    do {
      iVar3 = iVar11 + iVar23;
      if (iVar3 < 0) {
        iVar3 = iVar3 + 1;
      }
      iVar3 = iVar3 >> 1;
      puVar1 = (uint *)(*(long *)(lVar18 + 0x28) + (long)*(int *)(pcVar12 + 5) + (long)iVar3 * 8);
      uVar24 = *(ulong *)(*(long *)(lVar18 + 0x20) + (ulong)*puVar1 * 8);
      if (uVar24 == 0xbdeafca61) {
        uVar29 = puVar1[1];
        if ((int)uVar29 < 0) goto LAB_7102bba8b4;
        pbVar37 = (byte *)(pcVar12 + (int)uVar29);
        goto LAB_7102bba8c0;
      }
      iVar6 = iVar3 + -1;
      if (uVar24 < 0xbdeafca62) {
        iVar23 = iVar3 + 1;
        iVar6 = iVar11;
      }
      iVar11 = iVar6;
    } while (iVar23 <= iVar11);
    lVar18 = 0;
  }
  else {
LAB_7102bba8b4:
    lVar18 = 0;
    pbVar37 = &DAT_7104742dbb;
  }
LAB_7102bba8c0:
  if (*pbVar37 - 0xb < 2) {
    iVar11 = *(int *)(pbVar37 + 1);
  }
  else {
    iVar11 = 0;
  }
  uVar24 = (ulong)iVar11;
  pvVar43 = *(void **)(param_1 + 0x1e0);
  puVar25 = *(undefined8 **)(param_1 + 0x1e8);
  pppplVar44 = (long ****)((long)puVar25 - (long)pvVar43);
  lVar19 = (long)pppplVar44 >> 2;
  plVar2 = (long *)(param_1 + 0x1e0);
  if ((ulong)(lVar19 * -0x3333333333333333) < uVar24) {
    uVar20 = uVar24 + lVar19 * 0x3333333333333333;
    if ((ulong)((*(long *)(param_1 + 0x1f0) - (long)puVar25 >> 2) * -0x3333333333333333) < uVar20) {
      if (iVar11 < 0) goto LAB_7102bbde84;
      lVar13 = *(long *)(param_1 + 0x1f0) - (long)pvVar43 >> 2;
      if ((ulong)(lVar13 * -0x3333333333333333) < 0x666666666666666) {
        uVar16 = lVar13 * -0x6666666666666666;
        uVar14 = uVar24;
        if (uVar24 <= uVar16) {
          uVar14 = uVar16;
        }
        if (uVar14 != 0) goto LAB_7102bba9e8;
        lVar13 = 0;
      }
      else {
        uVar14 = 0xccccccccccccccc;
LAB_7102bba9e8:
        ppplVar15 = (long ***)(uVar14 * 0x14);
        if (ppplVar15 == (long ***)0x0) {
          ppplVar15 = (long ***)0x1;
        }
        lVar13 = FUN_710392e290(0x10,ppplVar15,pppplVar10,ppppbVar39,param_5,uVar33,param_7,param_8)
        ;
        if (lVar13 == 0) {
          if (DAT_7105332f00 != (long *)0x0) {
            local_84 = 0;
            pppplVar10 = &local_98;
            local_98 = ppplVar15;
            uVar16 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_84);
            if (((uVar16 & 1) != 0) &&
               (lVar13 = FUN_710392e290(0x10,ppplVar15,pppplVar10,ppppbVar39,param_5,uVar33,param_7,
                                        param_8), lVar13 != 0)) goto LAB_7102bbaa58;
          }
          lVar13 = 0;
        }
      }
LAB_7102bbaa58:
      pvVar45 = (void *)(lVar13 + lVar19 * 4);
      pppplVar10 = (long ****)(uVar20 * 0x14);
      memset(pvVar45,0,(size_t)pppplVar10);
      lVar19 = SUB168(SEXT816((long)pppplVar44) * SEXT816(-0x6666666666666667),8);
      pvVar45 = (void *)((long)pvVar45 + ((lVar19 >> 3) - (lVar19 >> 0x3f)) * 0x14);
      if (0 < (long)pppplVar44) {
        memcpy(pvVar45,pvVar43,(size_t)pppplVar44);
        pppplVar10 = pppplVar44;
      }
      *(ulong *)(param_1 + 0x1f0) = lVar13 + uVar14 * 0x14;
      *(void **)(param_1 + 0x1e0) = pvVar45;
      *(ulong *)(param_1 + 0x1e8) = lVar13 + uVar24 * 0x14;
      if (pvVar43 != (void *)0x0) {
        FUN_710392eb40((ulong)pvVar43);
      }
    }
    else {
      uVar33 = uVar20;
      if ((uVar20 & 1) != 0) {
        *(undefined4 *)(puVar25 + 2) = 0;
        *puVar25 = 0;
        puVar25[1] = 0;
        puVar25 = (undefined8 *)(*(long *)(param_1 + 0x1e8) + 0x14);
        uVar33 = uVar20 - 1;
        *(undefined8 **)(param_1 + 0x1e8) = puVar25;
      }
      if (uVar20 != 1) {
        do {
          *(undefined4 *)(puVar25 + 2) = 0;
          *puVar25 = 0;
          puVar25[1] = 0;
          lVar19 = *(long *)(param_1 + 0x1e8);
          *(long *)(param_1 + 0x1e8) = lVar19 + 0x14;
          *(undefined4 *)(lVar19 + 0x24) = 0;
          *(undefined8 *)(lVar19 + 0x1c) = 0;
          *(undefined8 *)(lVar19 + 0x14) = 0;
          puVar25 = (undefined8 *)(*(long *)(param_1 + 0x1e8) + 0x14);
          uVar33 = uVar33 - 2;
          *(undefined8 **)(param_1 + 0x1e8) = puVar25;
        } while (uVar33 != 0);
      }
    }
  }
  else if (lVar19 * -0x3333333333333333 - uVar24 != 0) {
    *(void **)(param_1 + 0x1e8) = (void *)((long)pvVar43 + uVar24 * 0x14);
  }
  uVar29 = (uint)*pbVar37;
  uVar27 = 0xbc0ad263c;
  uVar30 = 0x9c4677bc8;
  if ((*pbVar37 - 0xb < 2) && (0 < *(int *)(pbVar37 + 1))) {
    lVar19 = 0;
LAB_7102bbab50:
    do {
      iVar11 = (int)lVar19;
      if (iVar11 < 0) {
LAB_7102bbab88:
        lVar13 = 0;
        pbVar35 = &DAT_7104742dbb;
      }
      else {
        pbVar35 = &DAT_7104742dbb;
        lVar13 = 0;
        if (uVar29 == 0xb) {
          if (*(int *)(pbVar37 + 1) <= iVar11) goto LAB_7102bbab88;
          pbVar35 = pbVar37 + *(int *)(pbVar37 + (long)iVar11 * 4 + 5);
          lVar13 = lVar18;
        }
      }
      pbVar8 = &DAT_7104742dbb;
      if ((*pbVar35 == 0xc) && (uVar29 = *(int *)(pbVar35 + 1) - 1, 0 < *(int *)(pbVar35 + 1))) {
        iVar11 = 0;
        do {
          iVar23 = uVar29 + iVar11;
          if (iVar23 < 0) {
            iVar23 = iVar23 + 1;
          }
          uVar4 = iVar23 >> 1;
          pppplVar10 = (long ****)(ulong)uVar4;
          ppppbVar39 = (byte ****)
                       (*(long *)(lVar13 + 0x28) + (long)*(int *)(pbVar35 + 5) +
                       (long)(int)uVar4 * 8);
          param_5 = *(long *****)(*(long *)(lVar13 + 0x20) + (ulong)*(uint *)ppppbVar39 * 8);
          if (param_5 == (long ****)0xbc0ad263c) {
            if (-1 < (int)*(uint *)((long)ppppbVar39 + 4)) {
              pbVar8 = pbVar35 + (int)*(uint *)((long)ppppbVar39 + 4);
            }
            break;
          }
          ppppbVar39 = (byte ****)(ulong)(uVar4 - 1);
          uVar7 = uVar4 - 1;
          if (param_5 < (long ****)0xbc0ad263d) {
            iVar11 = uVar4 + 1;
            uVar7 = uVar29;
          }
          uVar29 = uVar7;
        } while (iVar11 <= (int)uVar29);
      }
      uVar46 = 0x43960000;
      if (*pbVar8 == 8) {
        uVar46 = *(undefined4 *)(pbVar8 + 1);
      }
      *(undefined4 *)(*plVar2 + lVar19 * 0x14) = uVar46;
      pbVar8 = &DAT_7104742dbb;
      if ((*pbVar35 == 0xc) && (uVar29 = *(int *)(pbVar35 + 1) - 1, 0 < *(int *)(pbVar35 + 1))) {
        iVar11 = 0;
        do {
          iVar23 = uVar29 + iVar11;
          if (iVar23 < 0) {
            iVar23 = iVar23 + 1;
          }
          uVar4 = iVar23 >> 1;
          pppplVar10 = (long ****)(ulong)uVar4;
          ppppbVar39 = (byte ****)
                       (*(long *)(lVar13 + 0x28) + (long)*(int *)(pbVar35 + 5) +
                       (long)(int)uVar4 * 8);
          param_5 = *(long *****)(*(long *)(lVar13 + 0x20) + (ulong)*(uint *)ppppbVar39 * 8);
          if (param_5 == (long ****)0x9c4677bc8) {
            if (-1 < (int)*(uint *)((long)ppppbVar39 + 4)) {
              pbVar8 = pbVar35 + (int)*(uint *)((long)ppppbVar39 + 4);
            }
            break;
          }
          ppppbVar39 = (byte ****)(ulong)(uVar4 - 1);
          uVar7 = uVar4 - 1;
          if (param_5 < (long ****)0x9c4677bc9) {
            iVar11 = uVar4 + 1;
            uVar7 = uVar29;
          }
          uVar29 = uVar7;
        } while (iVar11 <= (int)uVar29);
      }
      uVar46 = 0x44098000;
      if (*pbVar8 == 8) {
        uVar46 = *(undefined4 *)(pbVar8 + 1);
      }
      *(undefined4 *)(*plVar2 + lVar19 * 0x14 + 4) = uVar46;
      pbVar8 = &DAT_7104742dbb;
      if ((*pbVar35 == 0xc) && (uVar29 = *(int *)(pbVar35 + 1) - 1, 0 < *(int *)(pbVar35 + 1))) {
        iVar11 = 0;
        do {
          iVar23 = uVar29 + iVar11;
          if (iVar23 < 0) {
            iVar23 = iVar23 + 1;
          }
          uVar4 = iVar23 >> 1;
          pppplVar10 = (long ****)(ulong)uVar4;
          ppppbVar39 = (byte ****)
                       (*(long *)(lVar13 + 0x28) + (long)*(int *)(pbVar35 + 5) +
                       (long)(int)uVar4 * 8);
          param_5 = *(long *****)(*(long *)(lVar13 + 0x20) + (ulong)*(uint *)ppppbVar39 * 8);
          if (param_5 == (long ****)0x18cdc1683) {
            if (-1 < (int)*(uint *)((long)ppppbVar39 + 4)) {
              pbVar8 = pbVar35 + (int)*(uint *)((long)ppppbVar39 + 4);
            }
            break;
          }
          ppppbVar39 = (byte ****)(ulong)(uVar4 - 1);
          uVar7 = uVar4 - 1;
          if (param_5 < (long ****)0x18cdc1684) {
            iVar11 = uVar4 + 1;
            uVar7 = uVar29;
          }
          uVar29 = uVar7;
        } while (iVar11 <= (int)uVar29);
      }
      uVar46 = 0;
      if (*pbVar8 == 8) {
        uVar46 = *(undefined4 *)(pbVar8 + 1);
      }
      *(undefined4 *)(*plVar2 + lVar19 * 0x14 + 8) = uVar46;
      pbVar8 = &DAT_7104742dbb;
      if ((*pbVar35 == 0xc) && (uVar29 = *(int *)(pbVar35 + 1) - 1, 0 < *(int *)(pbVar35 + 1))) {
        iVar11 = 0;
        do {
          iVar23 = uVar29 + iVar11;
          if (iVar23 < 0) {
            iVar23 = iVar23 + 1;
          }
          uVar4 = iVar23 >> 1;
          pppplVar10 = (long ****)(ulong)uVar4;
          ppppbVar39 = (byte ****)
                       (*(long *)(lVar13 + 0x28) + (long)*(int *)(pbVar35 + 5) +
                       (long)(int)uVar4 * 8);
          param_5 = *(long *****)(*(long *)(lVar13 + 0x20) + (ulong)*(uint *)ppppbVar39 * 8);
          if (param_5 == (long ****)0x1fbdb2615) {
            if (-1 < (int)*(uint *)((long)ppppbVar39 + 4)) {
              pbVar8 = pbVar35 + (int)*(uint *)((long)ppppbVar39 + 4);
            }
            break;
          }
          ppppbVar39 = (byte ****)(ulong)(uVar4 - 1);
          uVar7 = uVar4 - 1;
          if (param_5 < (long ****)0x1fbdb2616) {
            iVar11 = uVar4 + 1;
            uVar7 = uVar29;
          }
          uVar29 = uVar7;
        } while (iVar11 <= (int)uVar29);
      }
      uVar46 = 0x42480000;
      if (*pbVar8 == 8) {
        uVar46 = *(undefined4 *)(pbVar8 + 1);
      }
      *(undefined4 *)(*plVar2 + lVar19 * 0x14 + 0xc) = uVar46;
      pbVar8 = &DAT_7104742dbb;
      if ((*pbVar35 == 0xc) && (uVar29 = *(int *)(pbVar35 + 1) - 1, 0 < *(int *)(pbVar35 + 1))) {
        iVar11 = 0;
        do {
          iVar23 = uVar29 + iVar11;
          if (iVar23 < 0) {
            iVar23 = iVar23 + 1;
          }
          iVar23 = iVar23 >> 1;
          pppplVar10 = (long ****)
                       (*(long *)(lVar13 + 0x28) + (long)*(int *)(pbVar35 + 5) + (long)iVar23 * 8);
          ppppbVar39 = *(byte *****)(*(long *)(lVar13 + 0x20) + (ulong)*(uint *)pppplVar10 * 8);
          if (ppppbVar39 == (byte ****)0x162d277af) {
            if (-1 < (int)*(uint *)((long)pppplVar10 + 4)) {
              pbVar8 = pbVar35 + (int)*(uint *)((long)pppplVar10 + 4);
            }
            break;
          }
          pppplVar10 = (long ****)(ulong)(iVar23 - 1U);
          uVar4 = iVar23 - 1U;
          if (ppppbVar39 < (byte ****)0x162d277b0) {
            iVar11 = iVar23 + 1;
            uVar4 = uVar29;
          }
          uVar29 = uVar4;
        } while (iVar11 <= (int)uVar29);
      }
      uVar46 = 0xc1f00000;
      if (*pbVar8 == 8) {
        uVar46 = *(undefined4 *)(pbVar8 + 1);
      }
      lVar13 = lVar19 * 0x14;
      lVar19 = lVar19 + 1;
      *(undefined4 *)(*plVar2 + lVar13 + 0x10) = uVar46;
      uVar29 = (uint)*pbVar37;
      if (uVar29 - 0xb < 2) {
        if (*(int *)(pbVar37 + 1) <= lVar19) break;
        goto LAB_7102bbab50;
      }
    } while (lVar19 < 0);
  }
  pcVar12 = (char *)*plVar9;
  if ((*pcVar12 == '\f') && (iVar11 = *(int *)(pcVar12 + 1) + -1, 0 < *(int *)(pcVar12 + 1))) {
    lVar18 = *param_2;
    iVar23 = 0;
    pbVar37 = &DAT_7104742dbb;
    do {
      iVar3 = iVar11 + iVar23;
      if (iVar3 < 0) {
        iVar3 = iVar3 + 1;
      }
      iVar3 = iVar3 >> 1;
      puVar1 = (uint *)(*(long *)(lVar18 + 0x28) + (long)*(int *)(pcVar12 + 5) + (long)iVar3 * 8);
      uVar33 = *(ulong *)(*(long *)(lVar18 + 0x20) + (ulong)*puVar1 * 8);
      if (uVar33 == 0xe9bf04c2e) {
        uVar29 = puVar1[1];
        if ((int)uVar29 < 0) goto LAB_7102bbaf7c;
        pbVar37 = (byte *)(pcVar12 + (int)uVar29);
        goto LAB_7102bbaf88;
      }
      iVar6 = iVar3 + -1;
      if (uVar33 < 0xe9bf04c2f) {
        iVar23 = iVar3 + 1;
        iVar6 = iVar11;
      }
      iVar11 = iVar6;
    } while (iVar23 <= iVar11);
    lVar18 = 0;
  }
  else {
LAB_7102bbaf7c:
    lVar18 = 0;
    pbVar37 = &DAT_7104742dbb;
  }
LAB_7102bbaf88:
  if (*pbVar37 - 0xb < 2) {
    iVar11 = *(int *)(pbVar37 + 1);
  }
  else {
    iVar11 = 0;
  }
  uVar33 = (ulong)iVar11;
  pvVar43 = *(void **)(param_1 + 0x1f8);
  puVar25 = *(undefined8 **)(param_1 + 0x200);
  pppplVar44 = (long ****)((long)puVar25 - (long)pvVar43);
  uVar24 = (long)pppplVar44 >> 3;
  if (uVar33 <= uVar24) {
    if (uVar24 != uVar33) {
      *(void **)(param_1 + 0x200) = (void *)((long)pvVar43 + uVar33 * 8);
    }
    goto LAB_7102bbb140;
  }
  uVar20 = uVar33 - uVar24;
  if (uVar20 <= (ulong)(*(long *)(param_1 + 0x208) - (long)puVar25 >> 3)) {
    uVar33 = uVar20;
    if ((uVar20 & 1) != 0) {
      *puVar25 = 0;
      puVar25 = (undefined8 *)(*(long *)(param_1 + 0x200) + 8);
      uVar33 = uVar20 - 1;
      *(undefined8 **)(param_1 + 0x200) = puVar25;
    }
    if (uVar20 != 1) {
      do {
        *puVar25 = 0;
        lVar19 = *(long *)(param_1 + 0x200);
        *(long *)(param_1 + 0x200) = lVar19 + 8;
        *(undefined8 *)(lVar19 + 8) = 0;
        puVar25 = (undefined8 *)(*(long *)(param_1 + 0x200) + 8);
        uVar33 = uVar33 - 2;
        *(undefined8 **)(param_1 + 0x200) = puVar25;
      } while (uVar33 != 0);
    }
    goto LAB_7102bbb140;
  }
  if (iVar11 < 0) {
LAB_7102bbde84:
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_length_error();
  }
  lVar19 = *(long *)(param_1 + 0x208) - (long)pvVar43;
  if ((ulong)(lVar19 >> 3) < 0xfffffffffffffff) {
    uVar16 = lVar19 >> 2;
    uVar14 = uVar33;
    if (uVar33 <= uVar16) {
      uVar14 = uVar16;
    }
    if (uVar14 != 0) {
      if (uVar14 >> 0x3d != 0) {
LAB_7102bbb008:
                    /* WARNING: Subroutine does not return */
        abort();
      }
      goto LAB_7102bbb088;
    }
LAB_7102bbb0ec:
    pvVar45 = (void *)0x0;
  }
  else {
    uVar14 = 0x1fffffffffffffff;
LAB_7102bbb088:
    ppplVar15 = (long ***)(uVar14 * 8);
    if (ppplVar15 == (long ***)0x0) {
      ppplVar15 = (long ***)0x1;
    }
    pvVar45 = (void *)FUN_710392e290(0x10,ppplVar15,pppplVar10,ppppbVar39,param_5,0x9c4677bc8,
                                     0xbc0ad263c,param_8);
    if (pvVar45 == (void *)0x0) {
      if (DAT_7105332f00 != (long *)0x0) {
        local_84 = 0;
        pppplVar10 = &local_98;
        local_98 = ppplVar15;
        uVar16 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_84);
        if (((uVar16 & 1) != 0) &&
           (pvVar45 = (void *)FUN_710392e290(0x10,ppplVar15,pppplVar10,ppppbVar39,param_5,uVar30,
                                             uVar27,param_8), pvVar45 != (void *)0x0))
        goto LAB_7102bbb0f0;
      }
      goto LAB_7102bbb0ec;
    }
  }
LAB_7102bbb0f0:
  pppplVar10 = (long ****)(uVar20 * 8);
  memset((void *)((long)pvVar45 + uVar24 * 8),0,(size_t)pppplVar10);
  if (0 < (long)pppplVar44) {
    memcpy(pvVar45,pvVar43,(size_t)pppplVar44);
    pppplVar10 = pppplVar44;
  }
  *(void **)(param_1 + 0x1f8) = pvVar45;
  *(void **)(param_1 + 0x200) = (void *)((long)pvVar45 + uVar33 * 8);
  *(void **)(param_1 + 0x208) = (void *)((long)pvVar45 + uVar14 * 8);
  if (pvVar43 != (void *)0x0) {
    FUN_710392eb40((ulong)pvVar43);
  }
LAB_7102bbb140:
  uVar29 = (uint)*pbVar37;
  if ((*pbVar37 - 0xb < 2) && (0 < *(int *)(pbVar37 + 1))) {
    lVar19 = 0;
LAB_7102bbb194:
    do {
      iVar11 = (int)lVar19;
      if (iVar11 < 0) {
LAB_7102bbb1cc:
        lVar13 = 0;
        pbVar35 = &DAT_7104742dbb;
      }
      else {
        pbVar35 = &DAT_7104742dbb;
        lVar13 = 0;
        if (uVar29 == 0xb) {
          if (*(int *)(pbVar37 + 1) <= iVar11) goto LAB_7102bbb1cc;
          pbVar35 = pbVar37 + *(int *)(pbVar37 + (long)iVar11 * 4 + 5);
          lVar13 = lVar18;
        }
      }
      pbVar8 = &DAT_7104742dbb;
      if ((*pbVar35 == 0xc) && (iVar11 = *(int *)(pbVar35 + 1) + -1, 0 < *(int *)(pbVar35 + 1))) {
        iVar23 = 0;
        do {
          iVar3 = iVar11 + iVar23;
          if (iVar3 < 0) {
            iVar3 = iVar3 + 1;
          }
          iVar3 = iVar3 >> 1;
          puVar1 = (uint *)(*(long *)(lVar13 + 0x28) + (long)*(int *)(pbVar35 + 5) + (long)iVar3 * 8
                           );
          uVar33 = *(ulong *)(*(long *)(lVar13 + 0x20) + (ulong)*puVar1 * 8);
          if (uVar33 == 0xbc0ad263c) {
            uVar29 = puVar1[1];
            if (-1 < (int)uVar29) {
              pbVar8 = pbVar35 + (int)uVar29;
            }
            break;
          }
          iVar6 = iVar3 + -1;
          if (uVar33 < 0xbc0ad263d) {
            iVar23 = iVar3 + 1;
            iVar6 = iVar11;
          }
          iVar11 = iVar6;
        } while (iVar23 <= iVar11);
      }
      uVar46 = 0x44098000;
      if (*pbVar8 == 8) {
        uVar46 = *(undefined4 *)(pbVar8 + 1);
      }
      *(undefined4 *)(*(long *)(param_1 + 0x1f8) + lVar19 * 8) = uVar46;
      pbVar8 = &DAT_7104742dbb;
      if ((*pbVar35 == 0xc) && (iVar11 = *(int *)(pbVar35 + 1) + -1, 0 < *(int *)(pbVar35 + 1))) {
        iVar23 = 0;
        do {
          iVar3 = iVar11 + iVar23;
          if (iVar3 < 0) {
            iVar3 = iVar3 + 1;
          }
          iVar3 = iVar3 >> 1;
          puVar1 = (uint *)(*(long *)(lVar13 + 0x28) + (long)*(int *)(pbVar35 + 5) + (long)iVar3 * 8
                           );
          uVar33 = *(ulong *)(*(long *)(lVar13 + 0x20) + (ulong)*puVar1 * 8);
          if (uVar33 == 0x9c4677bc8) {
            uVar29 = puVar1[1];
            if (-1 < (int)uVar29) {
              pbVar8 = pbVar35 + (int)uVar29;
            }
            break;
          }
          iVar6 = iVar3 + -1;
          if (uVar33 < 0x9c4677bc9) {
            iVar23 = iVar3 + 1;
            iVar6 = iVar11;
          }
          iVar11 = iVar6;
        } while (iVar23 <= iVar11);
      }
      uVar46 = 0x4480c000;
      if (*pbVar8 == 8) {
        uVar46 = *(undefined4 *)(pbVar8 + 1);
      }
      lVar13 = lVar19 * 8;
      lVar19 = lVar19 + 1;
      *(undefined4 *)(*(long *)(param_1 + 0x1f8) + lVar13 + 4) = uVar46;
      uVar29 = (uint)*pbVar37;
      if (uVar29 - 0xb < 2) {
        if (*(int *)(pbVar37 + 1) <= lVar19) break;
        goto LAB_7102bbb194;
      }
    } while (lVar19 < 0);
  }
  pcVar12 = (char *)*plVar9;
  if ((*pcVar12 == '\f') && (iVar11 = *(int *)(pcVar12 + 1) + -1, 0 < *(int *)(pcVar12 + 1))) {
    iVar23 = 0;
    pcVar22 = "";
    do {
      iVar3 = iVar11 + iVar23;
      if (iVar3 < 0) {
        iVar3 = iVar3 + 1;
      }
      iVar3 = iVar3 >> 1;
      puVar1 = (uint *)(*(long *)(*param_2 + 0x28) + (long)*(int *)(pcVar12 + 5) + (long)iVar3 * 8);
      uVar33 = *(ulong *)(*(long *)(*param_2 + 0x20) + (ulong)*puVar1 * 8);
      if (uVar33 == 0x1ba9cc3b6c) {
        uVar29 = puVar1[1];
        if ((int)uVar29 < 0) goto LAB_7102bbb3dc;
        pcVar22 = pcVar12 + (int)uVar29;
        break;
      }
      iVar6 = iVar3 + -1;
      if (uVar33 < 0x1ba9cc3b6d) {
        iVar23 = iVar3 + 1;
        iVar6 = iVar11;
      }
      iVar11 = iVar6;
    } while (iVar23 <= iVar11);
  }
  else {
LAB_7102bbb3dc:
    pcVar22 = "";
  }
  if (*pcVar22 == '\b') {
    uVar46 = *(undefined4 *)(pcVar22 + 1);
  }
  else {
    uVar46 = 0x45fd2000;
  }
  *(undefined4 *)(param_1 + 0x210) = uVar46;
  pcVar12 = (char *)*plVar9;
  if ((*pcVar12 == '\f') && (iVar11 = *(int *)(pcVar12 + 1) + -1, 0 < *(int *)(pcVar12 + 1))) {
    iVar23 = 0;
    pcVar22 = "";
    do {
      iVar3 = iVar11 + iVar23;
      if (iVar3 < 0) {
        iVar3 = iVar3 + 1;
      }
      iVar3 = iVar3 >> 1;
      puVar1 = (uint *)(*(long *)(*param_2 + 0x28) + (long)*(int *)(pcVar12 + 5) + (long)iVar3 * 8);
      uVar33 = *(ulong *)(*(long *)(*param_2 + 0x20) + (ulong)*puVar1 * 8);
      if (uVar33 == 0x213832d30a) {
        uVar29 = puVar1[1];
        if ((int)uVar29 < 0) goto LAB_7102bbb4a0;
        pcVar22 = pcVar12 + (int)uVar29;
        break;
      }
      iVar6 = iVar3 + -1;
      if (uVar33 < 0x213832d30b) {
        iVar23 = iVar3 + 1;
        iVar6 = iVar11;
      }
      iVar11 = iVar6;
    } while (iVar23 <= iVar11);
  }
  else {
LAB_7102bbb4a0:
    pcVar22 = "";
  }
  if (*pcVar22 == '\b') {
    uVar46 = *(undefined4 *)(pcVar22 + 1);
  }
  else {
    uVar46 = 0x44228000;
  }
  *(undefined4 *)(param_1 + 0x214) = uVar46;
  pcVar12 = (char *)*plVar9;
  if ((*pcVar12 == '\f') && (iVar11 = *(int *)(pcVar12 + 1) + -1, 0 < *(int *)(pcVar12 + 1))) {
    iVar23 = 0;
    pcVar22 = "";
    do {
      iVar3 = iVar11 + iVar23;
      if (iVar3 < 0) {
        iVar3 = iVar3 + 1;
      }
      iVar3 = iVar3 >> 1;
      puVar1 = (uint *)(*(long *)(*param_2 + 0x28) + (long)*(int *)(pcVar12 + 5) + (long)iVar3 * 8);
      uVar33 = *(ulong *)(*(long *)(*param_2 + 0x20) + (ulong)*puVar1 * 8);
      if (uVar33 == 0x15d44e7406) {
        uVar29 = puVar1[1];
        if ((int)uVar29 < 0) goto LAB_7102bbb564;
        pcVar22 = pcVar12 + (int)uVar29;
        break;
      }
      iVar6 = iVar3 + -1;
      if (uVar33 < 0x15d44e7407) {
        iVar23 = iVar3 + 1;
        iVar6 = iVar11;
      }
      iVar11 = iVar6;
    } while (iVar23 <= iVar11);
  }
  else {
LAB_7102bbb564:
    pcVar22 = "";
  }
  if (*pcVar22 == '\b') {
    uVar46 = *(undefined4 *)(pcVar22 + 1);
  }
  else {
    uVar46 = 0x44548000;
  }
  *(undefined4 *)(param_1 + 0x218) = uVar46;
  pcVar12 = (char *)*plVar9;
  if ((*pcVar12 == '\f') && (iVar11 = *(int *)(pcVar12 + 1) + -1, 0 < *(int *)(pcVar12 + 1))) {
    iVar23 = 0;
    pcVar22 = "";
    do {
      iVar3 = iVar11 + iVar23;
      if (iVar3 < 0) {
        iVar3 = iVar3 + 1;
      }
      iVar3 = iVar3 >> 1;
      puVar1 = (uint *)(*(long *)(*param_2 + 0x28) + (long)*(int *)(pcVar12 + 5) + (long)iVar3 * 8);
      uVar33 = *(ulong *)(*(long *)(*param_2 + 0x20) + (ulong)*puVar1 * 8);
      if (uVar33 == 0x171e3eb03b) {
        uVar29 = puVar1[1];
        if ((int)uVar29 < 0) goto LAB_7102bbb628;
        pcVar22 = pcVar12 + (int)uVar29;
        break;
      }
      iVar6 = iVar3 + -1;
      if (uVar33 < 0x171e3eb03c) {
        iVar23 = iVar3 + 1;
        iVar6 = iVar11;
      }
      iVar11 = iVar6;
    } while (iVar23 <= iVar11);
  }
  else {
LAB_7102bbb628:
    pcVar22 = "";
  }
  if (*pcVar22 == '\b') {
    uVar46 = *(undefined4 *)(pcVar22 + 1);
  }
  else {
    uVar46 = 0x45174000;
  }
  *(undefined4 *)(param_1 + 0x21c) = uVar46;
  pcVar12 = (char *)*plVar9;
  if ((*pcVar12 == '\f') && (iVar11 = *(int *)(pcVar12 + 1) + -1, 0 < *(int *)(pcVar12 + 1))) {
    iVar23 = 0;
    pcVar22 = "";
    do {
      iVar3 = iVar11 + iVar23;
      if (iVar3 < 0) {
        iVar3 = iVar3 + 1;
      }
      iVar3 = iVar3 >> 1;
      puVar1 = (uint *)(*(long *)(*param_2 + 0x28) + (long)*(int *)(pcVar12 + 5) + (long)iVar3 * 8);
      uVar33 = *(ulong *)(*(long *)(*param_2 + 0x20) + (ulong)*puVar1 * 8);
      if (uVar33 == 0x1f3d9c8ce3) {
        uVar29 = puVar1[1];
        if ((int)uVar29 < 0) goto LAB_7102bbb6ec;
        pcVar22 = pcVar12 + (int)uVar29;
        break;
      }
      iVar6 = iVar3 + -1;
      if (uVar33 < 0x1f3d9c8ce4) {
        iVar23 = iVar3 + 1;
        iVar6 = iVar11;
      }
      iVar11 = iVar6;
    } while (iVar23 <= iVar11);
  }
  else {
LAB_7102bbb6ec:
    pcVar22 = "";
  }
  if (*pcVar22 == '\b') {
    uVar46 = *(undefined4 *)(pcVar22 + 1);
  }
  else {
    uVar46 = 0x45fc3000;
  }
  *(undefined4 *)(param_1 + 0x220) = uVar46;
  pcVar12 = (char *)*plVar9;
  if ((*pcVar12 == '\f') && (iVar11 = *(int *)(pcVar12 + 1) + -1, 0 < *(int *)(pcVar12 + 1))) {
    iVar23 = 0;
    pcVar22 = "";
    do {
      iVar3 = iVar11 + iVar23;
      if (iVar3 < 0) {
        iVar3 = iVar3 + 1;
      }
      iVar3 = iVar3 >> 1;
      puVar1 = (uint *)(*(long *)(*param_2 + 0x28) + (long)*(int *)(pcVar12 + 5) + (long)iVar3 * 8);
      pppplVar10 = *(long *****)(*(long *)(*param_2 + 0x20) + (ulong)*puVar1 * 8);
      if (pppplVar10 == (long ****)0x1f3f428bc4) {
        uVar29 = puVar1[1];
        if ((int)uVar29 < 0) goto LAB_7102bbb7b0;
        pcVar22 = pcVar12 + (int)uVar29;
        break;
      }
      iVar6 = iVar3 + -1;
      if (pppplVar10 < (long ****)0x1f3f428bc5) {
        iVar23 = iVar3 + 1;
        iVar6 = iVar11;
      }
      iVar11 = iVar6;
    } while (iVar23 <= iVar11);
  }
  else {
LAB_7102bbb7b0:
    pcVar22 = "";
  }
  if (*pcVar22 == '\b') {
    uVar46 = *(undefined4 *)(pcVar22 + 1);
  }
  else {
    uVar46 = 0x44228000;
  }
  *(undefined4 *)(param_1 + 0x224) = uVar46;
  pcVar12 = (char *)*plVar9;
  if ((*pcVar12 == '\f') && (iVar11 = *(int *)(pcVar12 + 1) + -1, 0 < *(int *)(pcVar12 + 1))) {
    iVar23 = 0;
    pcVar22 = "";
    do {
      iVar3 = iVar11 + iVar23;
      if (iVar3 < 0) {
        iVar3 = iVar3 + 1;
      }
      iVar3 = iVar3 >> 1;
      puVar1 = (uint *)(*(long *)(*param_2 + 0x28) + (long)*(int *)(pcVar12 + 5) + (long)iVar3 * 8);
      uVar33 = *(ulong *)(*(long *)(*param_2 + 0x20) + (ulong)*puVar1 * 8);
      if (uVar33 == 0x153ec8a964) {
        uVar29 = puVar1[1];
        if ((int)uVar29 < 0) goto LAB_7102bbb870;
        pcVar22 = pcVar12 + (int)uVar29;
        break;
      }
      iVar6 = iVar3 + -1;
      if (uVar33 < 0x153ec8a965) {
        iVar23 = iVar3 + 1;
        iVar6 = iVar11;
      }
      iVar11 = iVar6;
    } while (iVar23 <= iVar11);
  }
  else {
LAB_7102bbb870:
    pcVar22 = "";
  }
  if (*pcVar22 == '\b') {
    uVar46 = *(undefined4 *)(pcVar22 + 1);
  }
  else {
    uVar46 = 0x44548000;
  }
  *(undefined4 *)(param_1 + 0x228) = uVar46;
  pcVar12 = (char *)*plVar9;
  if ((*pcVar12 == '\f') && (iVar11 = *(int *)(pcVar12 + 1) + -1, 0 < *(int *)(pcVar12 + 1))) {
    iVar23 = 0;
    pcVar22 = "";
    do {
      iVar3 = iVar11 + iVar23;
      if (iVar3 < 0) {
        iVar3 = iVar3 + 1;
      }
      iVar3 = iVar3 >> 1;
      puVar1 = (uint *)(*(long *)(*param_2 + 0x28) + (long)*(int *)(pcVar12 + 5) + (long)iVar3 * 8);
      uVar33 = *(ulong *)(*(long *)(*param_2 + 0x20) + (ulong)*puVar1 * 8);
      if (uVar33 == 0x17b197fdf1) {
        uVar29 = puVar1[1];
        if ((int)uVar29 < 0) goto LAB_7102bbb930;
        pcVar22 = pcVar12 + (int)uVar29;
        break;
      }
      iVar6 = iVar3 + -1;
      if (uVar33 < 0x17b197fdf2) {
        iVar23 = iVar3 + 1;
        iVar6 = iVar11;
      }
      iVar11 = iVar6;
    } while (iVar23 <= iVar11);
  }
  else {
LAB_7102bbb930:
    pcVar22 = "";
  }
  if (*pcVar22 == '\b') {
    uVar46 = *(undefined4 *)(pcVar22 + 1);
  }
  else {
    uVar46 = 0x45174000;
  }
  *(undefined4 *)(param_1 + 0x22c) = uVar46;
  pcVar12 = (char *)*plVar9;
  if ((*pcVar12 == '\f') && (iVar11 = *(int *)(pcVar12 + 1) + -1, 0 < *(int *)(pcVar12 + 1))) {
    iVar23 = 0;
    pcVar22 = "";
    do {
      iVar3 = iVar11 + iVar23;
      if (iVar3 < 0) {
        iVar3 = iVar3 + 1;
      }
      iVar3 = iVar3 >> 1;
      puVar1 = (uint *)(*(long *)(*param_2 + 0x28) + (long)*(int *)(pcVar12 + 5) + (long)iVar3 * 8);
      uVar33 = *(ulong *)(*(long *)(*param_2 + 0x20) + (ulong)*puVar1 * 8);
      if (uVar33 == 0x217c93f612) {
        uVar29 = puVar1[1];
        if ((int)uVar29 < 0) goto LAB_7102bbb9f0;
        pcVar22 = pcVar12 + (int)uVar29;
        break;
      }
      iVar6 = iVar3 + -1;
      if (uVar33 < 0x217c93f613) {
        iVar23 = iVar3 + 1;
        iVar6 = iVar11;
      }
      iVar11 = iVar6;
    } while (iVar23 <= iVar11);
  }
  else {
LAB_7102bbb9f0:
    pcVar22 = "";
  }
  if (*pcVar22 == '\b') {
    uVar46 = *(undefined4 *)(pcVar22 + 1);
  }
  else {
    uVar46 = 0x45fc3000;
  }
  *(undefined4 *)(param_1 + 0x230) = uVar46;
  pcVar12 = (char *)*plVar9;
  if ((*pcVar12 == '\f') && (iVar11 = *(int *)(pcVar12 + 1) + -1, 0 < *(int *)(pcVar12 + 1))) {
    iVar23 = 0;
    pcVar22 = "";
    do {
      iVar3 = iVar11 + iVar23;
      if (iVar3 < 0) {
        iVar3 = iVar3 + 1;
      }
      iVar3 = iVar3 >> 1;
      puVar1 = (uint *)(*(long *)(*param_2 + 0x28) + (long)*(int *)(pcVar12 + 5) + (long)iVar3 * 8);
      uVar33 = *(ulong *)(*(long *)(*param_2 + 0x20) + (ulong)*puVar1 * 8);
      if (uVar33 == 0x1f3ef776d9) {
        uVar29 = puVar1[1];
        if ((int)uVar29 < 0) goto LAB_7102bbbab0;
        pcVar22 = pcVar12 + (int)uVar29;
        break;
      }
      iVar6 = iVar3 + -1;
      if (uVar33 < 0x1f3ef776da) {
        iVar23 = iVar3 + 1;
        iVar6 = iVar11;
      }
      iVar11 = iVar6;
    } while (iVar23 <= iVar11);
  }
  else {
LAB_7102bbbab0:
    pcVar22 = "";
  }
  if (*pcVar22 == '\b') {
    uVar46 = *(undefined4 *)(pcVar22 + 1);
  }
  else {
    uVar46 = 0x4585c000;
  }
  *(undefined4 *)(param_1 + 0x234) = uVar46;
  pcVar12 = (char *)*plVar9;
  if ((*pcVar12 == '\f') && (iVar11 = *(int *)(pcVar12 + 1) + -1, 0 < *(int *)(pcVar12 + 1))) {
    iVar23 = 0;
    pcVar22 = "";
    do {
      iVar3 = iVar11 + iVar23;
      if (iVar3 < 0) {
        iVar3 = iVar3 + 1;
      }
      iVar3 = iVar3 >> 1;
      puVar1 = (uint *)(*(long *)(*param_2 + 0x28) + (long)*(int *)(pcVar12 + 5) + (long)iVar3 * 8);
      uVar33 = *(ulong *)(*(long *)(*param_2 + 0x20) + (ulong)*puVar1 * 8);
      if (uVar33 == 0x15d19a1f85) {
        uVar29 = puVar1[1];
        if ((int)uVar29 < 0) goto LAB_7102bbbb74;
        pcVar22 = pcVar12 + (int)uVar29;
        break;
      }
      iVar6 = iVar3 + -1;
      if (uVar33 < 0x15d19a1f86) {
        iVar23 = iVar3 + 1;
        iVar6 = iVar11;
      }
      iVar11 = iVar6;
    } while (iVar23 <= iVar11);
  }
  else {
LAB_7102bbbb74:
    pcVar22 = "";
  }
  if (*pcVar22 == '\b') {
    uVar46 = *(undefined4 *)(pcVar22 + 1);
  }
  else {
    uVar46 = 0x458b1000;
  }
  *(undefined4 *)(param_1 + 0x238) = uVar46;
  pcVar12 = (char *)*plVar9;
  if ((*pcVar12 == '\f') && (iVar11 = *(int *)(pcVar12 + 1) + -1, 0 < *(int *)(pcVar12 + 1))) {
    iVar23 = 0;
    pcVar22 = "";
    do {
      iVar3 = iVar11 + iVar23;
      if (iVar3 < 0) {
        iVar3 = iVar3 + 1;
      }
      iVar3 = iVar3 >> 1;
      puVar1 = (uint *)(*(long *)(*param_2 + 0x28) + (long)*(int *)(pcVar12 + 5) + (long)iVar3 * 8);
      uVar33 = *(ulong *)(*(long *)(*param_2 + 0x20) + (ulong)*puVar1 * 8);
      if (uVar33 == 0x17d4f0c6b7) {
        uVar29 = puVar1[1];
        if ((int)uVar29 < 0) goto LAB_7102bbbc38;
        pcVar22 = pcVar12 + (int)uVar29;
        break;
      }
      iVar6 = iVar3 + -1;
      if (uVar33 < 0x17d4f0c6b8) {
        iVar23 = iVar3 + 1;
        iVar6 = iVar11;
      }
      iVar11 = iVar6;
    } while (iVar23 <= iVar11);
  }
  else {
LAB_7102bbbc38:
    pcVar22 = "";
  }
  if (*pcVar22 == '\b') {
    uVar46 = *(undefined4 *)(pcVar22 + 1);
  }
  else {
    uVar46 = 0x45bcc000;
  }
  *(undefined4 *)(param_1 + 0x23c) = uVar46;
  pcVar12 = (char *)*plVar9;
  if ((*pcVar12 == '\f') && (iVar11 = *(int *)(pcVar12 + 1) + -1, 0 < *(int *)(pcVar12 + 1))) {
    iVar23 = 0;
    pcVar22 = "";
    do {
      iVar3 = iVar11 + iVar23;
      if (iVar3 < 0) {
        iVar3 = iVar3 + 1;
      }
      iVar3 = iVar3 >> 1;
      puVar1 = (uint *)(*(long *)(*param_2 + 0x28) + (long)*(int *)(pcVar12 + 5) + (long)iVar3 * 8);
      uVar33 = *(ulong *)(*(long *)(*param_2 + 0x20) + (ulong)*puVar1 * 8);
      if (uVar33 == 0x1895ddd6bf) {
        uVar29 = puVar1[1];
        if ((int)uVar29 < 0) goto LAB_7102bbbcfc;
        pcVar22 = pcVar12 + (int)uVar29;
        break;
      }
      iVar6 = iVar3 + -1;
      if (uVar33 < 0x1895ddd6c0) {
        iVar23 = iVar3 + 1;
        iVar6 = iVar11;
      }
      iVar11 = iVar6;
    } while (iVar23 <= iVar11);
  }
  else {
LAB_7102bbbcfc:
    pcVar22 = "";
  }
  if (*pcVar22 == '\b') {
    uVar46 = *(undefined4 *)(pcVar22 + 1);
  }
  else {
    uVar46 = 0x45c3a000;
  }
  *(undefined4 *)(param_1 + 0x240) = uVar46;
  pcVar12 = (char *)*plVar9;
  if ((*pcVar12 == '\f') && (iVar11 = *(int *)(pcVar12 + 1) + -1, 0 < *(int *)(pcVar12 + 1))) {
    iVar23 = 0;
    pcVar22 = "";
    do {
      iVar3 = iVar11 + iVar23;
      if (iVar3 < 0) {
        iVar3 = iVar3 + 1;
      }
      iVar3 = iVar3 >> 1;
      puVar1 = (uint *)(*(long *)(*param_2 + 0x28) + (long)*(int *)(pcVar12 + 5) + (long)iVar3 * 8);
      uVar33 = *(ulong *)(*(long *)(*param_2 + 0x20) + (ulong)*puVar1 * 8);
      if (uVar33 == 0x1a13e1269d) {
        uVar29 = puVar1[1];
        if ((int)uVar29 < 0) goto LAB_7102bbbdc0;
        pcVar22 = pcVar12 + (int)uVar29;
        break;
      }
      iVar6 = iVar3 + -1;
      if (uVar33 < 0x1a13e1269e) {
        iVar23 = iVar3 + 1;
        iVar6 = iVar11;
      }
      iVar11 = iVar6;
    } while (iVar23 <= iVar11);
  }
  else {
LAB_7102bbbdc0:
    pcVar22 = "";
  }
  if (*pcVar22 == '\b') {
    uVar46 = *(undefined4 *)(pcVar22 + 1);
  }
  else {
    uVar46 = 0x45f64000;
  }
  *(undefined4 *)(param_1 + 0x244) = uVar46;
  pcVar12 = (char *)*plVar9;
  if ((*pcVar12 == '\f') && (iVar11 = *(int *)(pcVar12 + 1) + -1, 0 < *(int *)(pcVar12 + 1))) {
    iVar23 = 0;
    pcVar22 = "";
    do {
      iVar3 = iVar11 + iVar23;
      if (iVar3 < 0) {
        iVar3 = iVar3 + 1;
      }
      iVar3 = iVar3 >> 1;
      puVar1 = (uint *)(*(long *)(*param_2 + 0x28) + (long)*(int *)(pcVar12 + 5) + (long)iVar3 * 8);
      uVar33 = *(ulong *)(*(long *)(*param_2 + 0x20) + (ulong)*puVar1 * 8);
      if (uVar33 == 0x2140f3151a) {
        uVar29 = puVar1[1];
        if ((int)uVar29 < 0) goto LAB_7102bbbe84;
        pcVar22 = pcVar12 + (int)uVar29;
        break;
      }
      iVar6 = iVar3 + -1;
      if (uVar33 < 0x2140f3151b) {
        iVar23 = iVar3 + 1;
        iVar6 = iVar11;
      }
      iVar11 = iVar6;
    } while (iVar23 <= iVar11);
  }
  else {
LAB_7102bbbe84:
    pcVar22 = "";
  }
  if (*pcVar22 == '\b') {
    uVar46 = *(undefined4 *)(pcVar22 + 1);
  }
  else {
    uVar46 = 0x45fc3000;
  }
  *(undefined4 *)(param_1 + 0x248) = uVar46;
  pcVar12 = (char *)*plVar9;
  if ((*pcVar12 == '\f') && (iVar11 = *(int *)(pcVar12 + 1) + -1, 0 < *(int *)(pcVar12 + 1))) {
    iVar23 = 0;
    pbVar37 = &DAT_7104742dbb;
    do {
      iVar3 = iVar11 + iVar23;
      if (iVar3 < 0) {
        iVar3 = iVar3 + 1;
      }
      iVar3 = iVar3 >> 1;
      puVar1 = (uint *)(*(long *)(*param_2 + 0x28) + (long)*(int *)(pcVar12 + 5) + (long)iVar3 * 8);
      uVar33 = *(ulong *)(*(long *)(*param_2 + 0x20) + (ulong)*puVar1 * 8);
      if (uVar33 == 0x117709f7ca) {
        uVar29 = puVar1[1];
        if ((int)uVar29 < 0) goto LAB_7102bbbf44;
        pbVar37 = (byte *)(pcVar12 + (int)uVar29);
        break;
      }
      iVar6 = iVar3 + -1;
      if (uVar33 < 0x117709f7cb) {
        iVar23 = iVar3 + 1;
        iVar6 = iVar11;
      }
      iVar11 = iVar6;
    } while (iVar23 <= iVar11);
  }
  else {
LAB_7102bbbf44:
    pbVar37 = &DAT_7104742dbb;
  }
  if (*pbVar37 - 0xb < 2) {
    iVar11 = *(int *)(pbVar37 + 1);
  }
  else {
    iVar11 = 0;
  }
  uVar33 = (ulong)iVar11;
  uVar24 = *(long *)(param_1 + 600) - *(long *)(param_1 + 0x250) >> 2;
  if (uVar24 < uVar33) {
    FUN_71003ca470((long *)(param_1 + 0x250),uVar33 - uVar24,pppplVar10,ppppbVar39,param_5,uVar30,
                   uVar27,param_8);
  }
  else if (uVar24 != uVar33) {
    *(ulong *)(param_1 + 600) = *(long *)(param_1 + 0x250) + uVar33 * 4;
  }
  uVar29 = (uint)*pbVar37;
  if ((*pbVar37 - 0xb < 2) && (0 < *(int *)(pbVar37 + 1))) {
    iVar11 = 0;
    lVar18 = 0;
    do {
      if ((int)lVar18 < 0) {
        pbVar35 = &DAT_7104742dbb;
      }
      else {
        pbVar35 = &DAT_7104742dbb;
        if ((uVar29 == 0xb) && ((int)lVar18 < *(int *)(pbVar37 + 1))) {
          pbVar35 = pbVar37 + *(int *)(pbVar37 + (long)iVar11 + 5);
        }
      }
      uVar46 = 0;
      if (*pbVar35 == 8) {
        uVar46 = *(undefined4 *)(pbVar35 + 1);
      }
      *(undefined4 *)(*(long *)(param_1 + 0x250) + lVar18 * 4) = uVar46;
      uVar29 = (uint)*pbVar37;
      lVar18 = lVar18 + 1;
      if (uVar29 - 0xb < 2) {
        iVar23 = *(int *)(pbVar37 + 1);
      }
      else {
        iVar23 = 0;
      }
      iVar11 = iVar11 + 4;
    } while (lVar18 < iVar23);
  }
  pcVar12 = (char *)*plVar9;
  if ((*pcVar12 == '\f') && (iVar11 = *(int *)(pcVar12 + 1) + -1, 0 < *(int *)(pcVar12 + 1))) {
    iVar23 = 0;
    pbVar37 = &DAT_7104742dbb;
    do {
      iVar3 = iVar11 + iVar23;
      if (iVar3 < 0) {
        iVar3 = iVar3 + 1;
      }
      iVar3 = iVar3 >> 1;
      puVar1 = (uint *)(*(long *)(*param_2 + 0x28) + (long)*(int *)(pcVar12 + 5) + (long)iVar3 * 8);
      uVar33 = *(ulong *)(*(long *)(*param_2 + 0x20) + (ulong)*puVar1 * 8);
      if (uVar33 == 0x13d90dee22) {
        uVar29 = puVar1[1];
        if ((int)uVar29 < 0) goto LAB_7102bbc0f0;
        pbVar37 = (byte *)(pcVar12 + (int)uVar29);
        break;
      }
      iVar6 = iVar3 + -1;
      if (uVar33 < 0x13d90dee23) {
        iVar23 = iVar3 + 1;
        iVar6 = iVar11;
      }
      iVar11 = iVar6;
    } while (iVar23 <= iVar11);
  }
  else {
LAB_7102bbc0f0:
    pbVar37 = &DAT_7104742dbb;
  }
  if (*pbVar37 - 0xb < 2) {
    iVar11 = *(int *)(pbVar37 + 1);
  }
  else {
    iVar11 = 0;
  }
  uVar33 = (ulong)iVar11;
  uVar24 = *(long *)(param_1 + 0x270) - *(long *)(param_1 + 0x268) >> 2;
  if (uVar24 < uVar33) {
    FUN_71003ca470((long *)(param_1 + 0x268),uVar33 - uVar24,pppplVar10,ppppbVar39,param_5,uVar30,
                   uVar27,param_8);
  }
  else if (uVar24 != uVar33) {
    *(ulong *)(param_1 + 0x270) = *(long *)(param_1 + 0x268) + uVar33 * 4;
  }
  uVar29 = (uint)*pbVar37;
  if ((*pbVar37 - 0xb < 2) && (0 < *(int *)(pbVar37 + 1))) {
    iVar11 = 0;
    lVar18 = 0;
    do {
      if ((int)lVar18 < 0) {
        pbVar35 = &DAT_7104742dbb;
      }
      else {
        pbVar35 = &DAT_7104742dbb;
        if ((uVar29 == 0xb) && ((int)lVar18 < *(int *)(pbVar37 + 1))) {
          pbVar35 = pbVar37 + *(int *)(pbVar37 + (long)iVar11 + 5);
        }
      }
      uVar46 = 0;
      if (*pbVar35 == 8) {
        uVar46 = *(undefined4 *)(pbVar35 + 1);
      }
      *(undefined4 *)(*(long *)(param_1 + 0x268) + lVar18 * 4) = uVar46;
      uVar29 = (uint)*pbVar37;
      lVar18 = lVar18 + 1;
      if (uVar29 - 0xb < 2) {
        iVar23 = *(int *)(pbVar37 + 1);
      }
      else {
        iVar23 = 0;
      }
      iVar11 = iVar11 + 4;
    } while (lVar18 < iVar23);
  }
  pcVar12 = (char *)*plVar9;
  if ((*pcVar12 == '\f') && (iVar11 = *(int *)(pcVar12 + 1) + -1, 0 < *(int *)(pcVar12 + 1))) {
    iVar23 = 0;
    pbVar37 = &DAT_7104742dbb;
    do {
      iVar3 = iVar11 + iVar23;
      if (iVar3 < 0) {
        iVar3 = iVar3 + 1;
      }
      iVar3 = iVar3 >> 1;
      puVar1 = (uint *)(*(long *)(*param_2 + 0x28) + (long)*(int *)(pcVar12 + 5) + (long)iVar3 * 8);
      uVar33 = *(ulong *)(*(long *)(*param_2 + 0x20) + (ulong)*puVar1 * 8);
      if (uVar33 == 0x12164b6ff6) {
        uVar29 = puVar1[1];
        if ((int)uVar29 < 0) goto LAB_7102bbc29c;
        pbVar37 = (byte *)(pcVar12 + (int)uVar29);
        break;
      }
      iVar6 = iVar3 + -1;
      if (uVar33 < 0x12164b6ff7) {
        iVar23 = iVar3 + 1;
        iVar6 = iVar11;
      }
      iVar11 = iVar6;
    } while (iVar23 <= iVar11);
  }
  else {
LAB_7102bbc29c:
    pbVar37 = &DAT_7104742dbb;
  }
  if (*pbVar37 - 0xb < 2) {
    iVar11 = *(int *)(pbVar37 + 1);
  }
  else {
    iVar11 = 0;
  }
  uVar33 = (ulong)iVar11;
  uVar24 = *(long *)(param_1 + 0x288) - *(long *)(param_1 + 0x280) >> 2;
  if (uVar24 < uVar33) {
    FUN_71003ca470((long *)(param_1 + 0x280),uVar33 - uVar24,pppplVar10,ppppbVar39,param_5,uVar30,
                   uVar27,param_8);
  }
  else if (uVar24 != uVar33) {
    *(ulong *)(param_1 + 0x288) = *(long *)(param_1 + 0x280) + uVar33 * 4;
  }
  uVar29 = (uint)*pbVar37;
  if ((*pbVar37 - 0xb < 2) && (0 < *(int *)(pbVar37 + 1))) {
    iVar11 = 0;
    lVar18 = 0;
    do {
      if ((int)lVar18 < 0) {
        pbVar35 = &DAT_7104742dbb;
      }
      else {
        pbVar35 = &DAT_7104742dbb;
        if ((uVar29 == 0xb) && ((int)lVar18 < *(int *)(pbVar37 + 1))) {
          pbVar35 = pbVar37 + *(int *)(pbVar37 + (long)iVar11 + 5);
        }
      }
      uVar46 = 0;
      if (*pbVar35 == 8) {
        uVar46 = *(undefined4 *)(pbVar35 + 1);
      }
      *(undefined4 *)(*(long *)(param_1 + 0x280) + lVar18 * 4) = uVar46;
      uVar29 = (uint)*pbVar37;
      lVar18 = lVar18 + 1;
      if (uVar29 - 0xb < 2) {
        iVar23 = *(int *)(pbVar37 + 1);
      }
      else {
        iVar23 = 0;
      }
      iVar11 = iVar11 + 4;
    } while (lVar18 < iVar23);
  }
  pcVar12 = (char *)*plVar9;
  if ((*pcVar12 == '\f') && (iVar11 = *(int *)(pcVar12 + 1) + -1, 0 < *(int *)(pcVar12 + 1))) {
    lVar18 = *param_2;
    iVar23 = 0;
    pbVar37 = &DAT_7104742dbb;
    do {
      iVar3 = iVar11 + iVar23;
      if (iVar3 < 0) {
        iVar3 = iVar3 + 1;
      }
      iVar3 = iVar3 >> 1;
      puVar1 = (uint *)(*(long *)(lVar18 + 0x28) + (long)*(int *)(pcVar12 + 5) + (long)iVar3 * 8);
      uVar33 = *(ulong *)(*(long *)(lVar18 + 0x20) + (ulong)*puVar1 * 8);
      if (uVar33 == 0x14ac2515aa) {
        uVar29 = puVar1[1];
        if ((int)uVar29 < 0) goto LAB_7102bbc44c;
        pbVar37 = (byte *)(pcVar12 + (int)uVar29);
        goto LAB_7102bbc458;
      }
      iVar6 = iVar3 + -1;
      if (uVar33 < 0x14ac2515ab) {
        iVar23 = iVar3 + 1;
        iVar6 = iVar11;
      }
      iVar11 = iVar6;
    } while (iVar23 <= iVar11);
    lVar18 = 0;
  }
  else {
LAB_7102bbc44c:
    lVar18 = 0;
    pbVar37 = &DAT_7104742dbb;
  }
LAB_7102bbc458:
  if (*pbVar37 - 0xb < 2) {
    iVar11 = *(int *)(pbVar37 + 1);
  }
  else {
    iVar11 = 0;
  }
  lVar19 = *(long *)(param_1 + 0x2a0) - *(long *)(param_1 + 0x298) >> 2;
  uVar24 = lVar19 * -0x5555555555555555;
  uVar33 = (ulong)iVar11;
  plVar2 = (long *)(param_1 + 0x298);
  if (uVar24 < uVar33) {
    FUN_7102bbe2b0(plVar2,uVar33 + lVar19 * 0x5555555555555555,pppplVar10,ppppbVar39,param_5,uVar30,
                   uVar27,param_8);
  }
  else if (uVar24 - uVar33 != 0) {
    *(ulong *)(param_1 + 0x2a0) = *(long *)(param_1 + 0x298) + uVar33 * 0xc;
  }
  uVar29 = (uint)*pbVar37;
  if ((*pbVar37 - 0xb < 2) && (0 < *(int *)(pbVar37 + 1))) {
    lVar19 = 0;
LAB_7102bbc514:
    do {
      iVar11 = (int)lVar19;
      if (iVar11 < 0) {
LAB_7102bbc54c:
        lVar13 = 0;
        pbVar35 = &DAT_7104742dbb;
      }
      else {
        pbVar35 = &DAT_7104742dbb;
        lVar13 = 0;
        if (uVar29 == 0xb) {
          if (*(int *)(pbVar37 + 1) <= iVar11) goto LAB_7102bbc54c;
          pbVar35 = pbVar37 + *(int *)(pbVar37 + (long)iVar11 * 4 + 5);
          lVar13 = lVar18;
        }
      }
      pbVar8 = &DAT_7104742dbb;
      if ((*pbVar35 == 0xc) && (uVar29 = *(int *)(pbVar35 + 1) - 1, 0 < *(int *)(pbVar35 + 1))) {
        iVar11 = 0;
        do {
          iVar23 = uVar29 + iVar11;
          if (iVar23 < 0) {
            iVar23 = iVar23 + 1;
          }
          uVar4 = iVar23 >> 1;
          pppplVar10 = (long ****)(ulong)uVar4;
          ppppbVar39 = (byte ****)
                       (*(long *)(lVar13 + 0x28) + (long)*(int *)(pbVar35 + 5) +
                       (long)(int)uVar4 * 8);
          param_5 = *(long *****)(*(long *)(lVar13 + 0x20) + (ulong)*(uint *)ppppbVar39 * 8);
          if (param_5 == (long ****)0xbc0ad263c) {
            if (-1 < (int)*(uint *)((long)ppppbVar39 + 4)) {
              pbVar8 = pbVar35 + (int)*(uint *)((long)ppppbVar39 + 4);
            }
            break;
          }
          ppppbVar39 = (byte ****)(ulong)(uVar4 - 1);
          uVar7 = uVar4 - 1;
          if (param_5 < (long ****)0xbc0ad263d) {
            iVar11 = uVar4 + 1;
            uVar7 = uVar29;
          }
          uVar29 = uVar7;
        } while (iVar11 <= (int)uVar29);
      }
      uVar46 = 0x44598000;
      if (*pbVar8 == 8) {
        uVar46 = *(undefined4 *)(pbVar8 + 1);
      }
      *(undefined4 *)(*plVar2 + lVar19 * 0xc) = uVar46;
      pbVar8 = &DAT_7104742dbb;
      if ((*pbVar35 == 0xc) && (uVar29 = *(int *)(pbVar35 + 1) - 1, 0 < *(int *)(pbVar35 + 1))) {
        iVar11 = 0;
        do {
          iVar23 = uVar29 + iVar11;
          if (iVar23 < 0) {
            iVar23 = iVar23 + 1;
          }
          uVar4 = iVar23 >> 1;
          pppplVar10 = (long ****)(ulong)uVar4;
          ppppbVar39 = (byte ****)
                       (*(long *)(lVar13 + 0x28) + (long)*(int *)(pbVar35 + 5) +
                       (long)(int)uVar4 * 8);
          param_5 = *(long *****)(*(long *)(lVar13 + 0x20) + (ulong)*(uint *)ppppbVar39 * 8);
          if (param_5 == (long ****)0xc4d6258ef) {
            if (-1 < (int)*(uint *)((long)ppppbVar39 + 4)) {
              pbVar8 = pbVar35 + (int)*(uint *)((long)ppppbVar39 + 4);
            }
            break;
          }
          ppppbVar39 = (byte ****)(ulong)(uVar4 - 1);
          uVar7 = uVar4 - 1;
          if (param_5 < (long ****)0xc4d6258f0) {
            iVar11 = uVar4 + 1;
            uVar7 = uVar29;
          }
          uVar29 = uVar7;
        } while (iVar11 <= (int)uVar29);
      }
      uVar46 = 0x41f00000;
      if (*pbVar8 == 8) {
        uVar46 = *(undefined4 *)(pbVar8 + 1);
      }
      *(undefined4 *)(*plVar2 + lVar19 * 0xc + 4) = uVar46;
      pbVar8 = &DAT_7104742dbb;
      if ((*pbVar35 == 0xc) && (uVar29 = *(int *)(pbVar35 + 1) - 1, 0 < *(int *)(pbVar35 + 1))) {
        iVar11 = 0;
        do {
          iVar23 = uVar29 + iVar11;
          if (iVar23 < 0) {
            iVar23 = iVar23 + 1;
          }
          iVar23 = iVar23 >> 1;
          pppplVar10 = (long ****)
                       (*(long *)(lVar13 + 0x28) + (long)*(int *)(pbVar35 + 5) + (long)iVar23 * 8);
          ppppbVar39 = *(byte *****)(*(long *)(lVar13 + 0x20) + (ulong)*(uint *)pppplVar10 * 8);
          if (ppppbVar39 == (byte ****)0x6d8d56f83) {
            if (-1 < (int)*(uint *)((long)pppplVar10 + 4)) {
              pbVar8 = pbVar35 + (int)*(uint *)((long)pppplVar10 + 4);
            }
            break;
          }
          pppplVar10 = (long ****)(ulong)(iVar23 - 1U);
          uVar4 = iVar23 - 1U;
          if (ppppbVar39 < (byte ****)0x6d8d56f84) {
            iVar11 = iVar23 + 1;
            uVar4 = uVar29;
          }
          uVar29 = uVar4;
        } while (iVar11 <= (int)uVar29);
      }
      switch(*pbVar8) {
      case 1:
      case 3:
        uVar29 = (uint)pbVar8[1];
        break;
      case 2:
        uVar29 = (uint)(char)pbVar8[1];
        break;
      case 4:
        uVar29 = (uint)*(short *)(pbVar8 + 1);
        break;
      case 5:
        uVar29 = (uint)*(ushort *)(pbVar8 + 1);
        break;
      case 6:
      case 7:
        uVar29 = *(uint *)(pbVar8 + 1);
        break;
      default:
        uVar29 = 1;
      }
      *(bool *)(*plVar2 + lVar19 * 0xc + 8) = uVar29 != 0;
      uVar29 = (uint)*pbVar37;
      lVar19 = lVar19 + 1;
      if (uVar29 - 0xb < 2) {
        if (*(int *)(pbVar37 + 1) <= lVar19) break;
        goto LAB_7102bbc514;
      }
    } while (lVar19 < 0);
  }
  pcVar12 = (char *)*plVar9;
  if ((*pcVar12 == '\f') && (iVar11 = *(int *)(pcVar12 + 1) + -1, 0 < *(int *)(pcVar12 + 1))) {
    lVar18 = *param_2;
    iVar23 = 0;
    pbVar37 = &DAT_7104742dbb;
    do {
      iVar3 = iVar11 + iVar23;
      if (iVar3 < 0) {
        iVar3 = iVar3 + 1;
      }
      iVar3 = iVar3 >> 1;
      puVar1 = (uint *)(*(long *)(lVar18 + 0x28) + (long)*(int *)(pcVar12 + 5) + (long)iVar3 * 8);
      uVar33 = *(ulong *)(*(long *)(lVar18 + 0x20) + (ulong)*puVar1 * 8);
      if (uVar33 == 0x16e708e00e) {
        uVar29 = puVar1[1];
        if ((int)uVar29 < 0) goto LAB_7102bbc83c;
        pbVar37 = (byte *)(pcVar12 + (int)uVar29);
        goto LAB_7102bbc848;
      }
      iVar6 = iVar3 + -1;
      if (uVar33 < 0x16e708e00f) {
        iVar23 = iVar3 + 1;
        iVar6 = iVar11;
      }
      iVar11 = iVar6;
    } while (iVar23 <= iVar11);
    lVar18 = 0;
  }
  else {
LAB_7102bbc83c:
    lVar18 = 0;
    pbVar37 = &DAT_7104742dbb;
  }
LAB_7102bbc848:
  if (*pbVar37 - 0xb < 2) {
    iVar11 = *(int *)(pbVar37 + 1);
  }
  else {
    iVar11 = 0;
  }
  lVar19 = *(long *)(param_1 + 0x2b8) - *(long *)(param_1 + 0x2b0) >> 2;
  uVar24 = lVar19 * -0x5555555555555555;
  uVar33 = (ulong)iVar11;
  plVar2 = (long *)(param_1 + 0x2b0);
  if (uVar24 < uVar33) {
    FUN_7102bbe2b0(plVar2,uVar33 + lVar19 * 0x5555555555555555,pppplVar10,ppppbVar39,param_5,uVar30,
                   uVar27,param_8);
  }
  else if (uVar24 - uVar33 != 0) {
    *(ulong *)(param_1 + 0x2b8) = *(long *)(param_1 + 0x2b0) + uVar33 * 0xc;
  }
  uVar29 = (uint)*pbVar37;
  if ((*pbVar37 - 0xb < 2) && (0 < *(int *)(pbVar37 + 1))) {
    lVar19 = 0;
LAB_7102bbc920:
    do {
      iVar11 = (int)lVar19;
      if (iVar11 < 0) {
LAB_7102bbc958:
        lVar13 = 0;
        pbVar35 = &DAT_7104742dbb;
      }
      else {
        pbVar35 = &DAT_7104742dbb;
        lVar13 = 0;
        if (uVar29 == 0xb) {
          if (*(int *)(pbVar37 + 1) <= iVar11) goto LAB_7102bbc958;
          pbVar35 = pbVar37 + *(int *)(pbVar37 + (long)iVar11 * 4 + 5);
          lVar13 = lVar18;
        }
      }
      pbVar8 = &DAT_7104742dbb;
      if ((*pbVar35 == 0xc) && (iVar11 = *(int *)(pbVar35 + 1) + -1, 0 < *(int *)(pbVar35 + 1))) {
        iVar23 = 0;
        do {
          iVar3 = iVar11 + iVar23;
          if (iVar3 < 0) {
            iVar3 = iVar3 + 1;
          }
          iVar3 = iVar3 >> 1;
          puVar1 = (uint *)(*(long *)(lVar13 + 0x28) + (long)*(int *)(pbVar35 + 5) + (long)iVar3 * 8
                           );
          uVar33 = *(ulong *)(*(long *)(lVar13 + 0x20) + (ulong)*puVar1 * 8);
          if (uVar33 == 0xbc0ad263c) {
            uVar29 = puVar1[1];
            if (-1 < (int)uVar29) {
              pbVar8 = pbVar35 + (int)uVar29;
            }
            break;
          }
          iVar6 = iVar3 + -1;
          if (uVar33 < 0xbc0ad263d) {
            iVar23 = iVar3 + 1;
            iVar6 = iVar11;
          }
          iVar11 = iVar6;
        } while (iVar23 <= iVar11);
      }
      uVar46 = 0x44160000;
      if (*pbVar8 == 8) {
        uVar46 = *(undefined4 *)(pbVar8 + 1);
      }
      *(undefined4 *)(*plVar2 + lVar19 * 0xc) = uVar46;
      pbVar8 = &DAT_7104742dbb;
      if ((*pbVar35 == 0xc) && (iVar11 = *(int *)(pbVar35 + 1) + -1, 0 < *(int *)(pbVar35 + 1))) {
        iVar23 = 0;
        do {
          iVar3 = iVar11 + iVar23;
          if (iVar3 < 0) {
            iVar3 = iVar3 + 1;
          }
          iVar3 = iVar3 >> 1;
          puVar1 = (uint *)(*(long *)(lVar13 + 0x28) + (long)*(int *)(pbVar35 + 5) + (long)iVar3 * 8
                           );
          uVar33 = *(ulong *)(*(long *)(lVar13 + 0x20) + (ulong)*puVar1 * 8);
          if (uVar33 == 0xc4d6258ef) {
            uVar29 = puVar1[1];
            if (-1 < (int)uVar29) {
              pbVar8 = pbVar35 + (int)uVar29;
            }
            break;
          }
          iVar6 = iVar3 + -1;
          if (uVar33 < 0xc4d6258f0) {
            iVar23 = iVar3 + 1;
            iVar6 = iVar11;
          }
          iVar11 = iVar6;
        } while (iVar23 <= iVar11);
      }
      uVar46 = 0x42200000;
      if (*pbVar8 == 8) {
        uVar46 = *(undefined4 *)(pbVar8 + 1);
      }
      *(undefined4 *)(*plVar2 + lVar19 * 0xc + 4) = uVar46;
      pbVar8 = &DAT_7104742dbb;
      if ((*pbVar35 == 0xc) && (iVar11 = *(int *)(pbVar35 + 1) + -1, 0 < *(int *)(pbVar35 + 1))) {
        iVar23 = 0;
        do {
          iVar3 = iVar11 + iVar23;
          if (iVar3 < 0) {
            iVar3 = iVar3 + 1;
          }
          iVar3 = iVar3 >> 1;
          puVar1 = (uint *)(*(long *)(lVar13 + 0x28) + (long)*(int *)(pbVar35 + 5) + (long)iVar3 * 8
                           );
          uVar33 = *(ulong *)(*(long *)(lVar13 + 0x20) + (ulong)*puVar1 * 8);
          if (uVar33 == 0x6d8d56f83) {
            uVar29 = puVar1[1];
            if (-1 < (int)uVar29) {
              pbVar8 = pbVar35 + (int)uVar29;
            }
            break;
          }
          iVar6 = iVar3 + -1;
          if (uVar33 < 0x6d8d56f84) {
            iVar23 = iVar3 + 1;
            iVar6 = iVar11;
          }
          iVar11 = iVar6;
        } while (iVar23 <= iVar11);
      }
      switch(*pbVar8) {
      case 1:
      case 3:
        uVar29 = (uint)pbVar8[1];
        break;
      case 2:
        uVar29 = (uint)(char)pbVar8[1];
        break;
      case 4:
        uVar29 = (uint)*(short *)(pbVar8 + 1);
        break;
      case 5:
        uVar29 = (uint)*(ushort *)(pbVar8 + 1);
        break;
      case 6:
      case 7:
        uVar29 = *(uint *)(pbVar8 + 1);
        break;
      default:
        uVar29 = 1;
      }
      *(bool *)(*plVar2 + lVar19 * 0xc + 8) = uVar29 != 0;
      uVar29 = (uint)*pbVar37;
      lVar19 = lVar19 + 1;
      if (uVar29 - 0xb < 2) {
        if (*(int *)(pbVar37 + 1) <= lVar19) break;
        goto LAB_7102bbc920;
      }
    } while (lVar19 < 0);
  }
  pcVar12 = (char *)*plVar9;
  if ((*pcVar12 == '\f') && (iVar11 = *(int *)(pcVar12 + 1) + -1, 0 < *(int *)(pcVar12 + 1))) {
    iVar23 = 0;
    pcVar22 = "";
    do {
      iVar3 = iVar11 + iVar23;
      if (iVar3 < 0) {
        iVar3 = iVar3 + 1;
      }
      iVar3 = iVar3 >> 1;
      puVar1 = (uint *)(*(long *)(*param_2 + 0x28) + (long)*(int *)(pcVar12 + 5) + (long)iVar3 * 8);
      uVar33 = *(ulong *)(*(long *)(*param_2 + 0x20) + (ulong)*puVar1 * 8);
      if (uVar33 == 0x1734793af6) {
        uVar29 = puVar1[1];
        if ((int)uVar29 < 0) goto LAB_7102bbcc44;
        pcVar22 = pcVar12 + (int)uVar29;
        break;
      }
      iVar6 = iVar3 + -1;
      if (uVar33 < 0x1734793af7) {
        iVar23 = iVar3 + 1;
        iVar6 = iVar11;
      }
      iVar11 = iVar6;
    } while (iVar23 <= iVar11);
  }
  else {
LAB_7102bbcc44:
    pcVar22 = "";
  }
  if (*pcVar22 == '\b') {
    uVar46 = *(undefined4 *)(pcVar22 + 1);
  }
  else {
    uVar46 = 0x45834000;
  }
  *(undefined4 *)(param_1 + 0x2c8) = uVar46;
  pcVar12 = (char *)*plVar9;
  if ((*pcVar12 == '\f') && (iVar11 = *(int *)(pcVar12 + 1) + -1, 0 < *(int *)(pcVar12 + 1))) {
    iVar23 = 0;
    pcVar22 = "";
    do {
      iVar3 = iVar11 + iVar23;
      if (iVar3 < 0) {
        iVar3 = iVar3 + 1;
      }
      iVar3 = iVar3 >> 1;
      puVar1 = (uint *)(*(long *)(*param_2 + 0x28) + (long)*(int *)(pcVar12 + 5) + (long)iVar3 * 8);
      uVar33 = *(ulong *)(*(long *)(*param_2 + 0x20) + (ulong)*puVar1 * 8);
      if (uVar33 == 0x1638b34cec) {
        uVar29 = puVar1[1];
        if ((int)uVar29 < 0) goto LAB_7102bbcd08;
        pcVar22 = pcVar12 + (int)uVar29;
        break;
      }
      iVar6 = iVar3 + -1;
      if (uVar33 < 0x1638b34ced) {
        iVar23 = iVar3 + 1;
        iVar6 = iVar11;
      }
      iVar11 = iVar6;
    } while (iVar23 <= iVar11);
  }
  else {
LAB_7102bbcd08:
    pcVar22 = "";
  }
  if (*pcVar22 == '\b') {
    uVar46 = *(undefined4 *)(pcVar22 + 1);
  }
  else {
    uVar46 = 0x4601b000;
  }
  *(undefined4 *)(param_1 + 0x2cc) = uVar46;
  pcVar12 = (char *)*plVar9;
  if ((*pcVar12 == '\f') && (iVar11 = *(int *)(pcVar12 + 1) + -1, 0 < *(int *)(pcVar12 + 1))) {
    lVar18 = *param_2;
    iVar23 = 0;
    pcVar22 = "";
    do {
      iVar3 = iVar11 + iVar23;
      if (iVar3 < 0) {
        iVar3 = iVar3 + 1;
      }
      iVar3 = iVar3 >> 1;
      puVar1 = (uint *)(*(long *)(lVar18 + 0x28) + (long)*(int *)(pcVar12 + 5) + (long)iVar3 * 8);
      uVar33 = *(ulong *)(*(long *)(lVar18 + 0x20) + (ulong)*puVar1 * 8);
      if (uVar33 == 0x15972295dc) {
        uVar29 = puVar1[1];
        if ((int)uVar29 < 0) goto LAB_7102bbcdd0;
        pcVar22 = pcVar12 + (int)uVar29;
        goto LAB_7102bbcddc;
      }
      iVar6 = iVar3 + -1;
      if (uVar33 < 0x15972295dd) {
        iVar23 = iVar3 + 1;
        iVar6 = iVar11;
      }
      iVar11 = iVar6;
    } while (iVar23 <= iVar11);
    lVar18 = 0;
  }
  else {
LAB_7102bbcdd0:
    lVar18 = 0;
    pcVar22 = "";
  }
LAB_7102bbcddc:
  if ((*pcVar22 == '\f') && (iVar11 = *(int *)(pcVar22 + 1) + -1, 0 < *(int *)(pcVar22 + 1))) {
    iVar23 = 0;
    pcVar12 = "";
    do {
      iVar3 = iVar11 + iVar23;
      if (iVar3 < 0) {
        iVar3 = iVar3 + 1;
      }
      iVar3 = iVar3 >> 1;
      puVar1 = (uint *)(*(long *)(lVar18 + 0x28) + (long)*(int *)(pcVar22 + 5) + (long)iVar3 * 8);
      uVar33 = *(ulong *)(*(long *)(lVar18 + 0x20) + (ulong)*puVar1 * 8);
      if (uVar33 == 0x8e41430cc) {
        uVar29 = puVar1[1];
        if ((int)uVar29 < 0) goto LAB_7102bbce68;
        pcVar12 = pcVar22 + (int)uVar29;
        break;
      }
      iVar6 = iVar3 + -1;
      if (uVar33 < 0x8e41430cd) {
        iVar23 = iVar3 + 1;
        iVar6 = iVar11;
      }
      iVar11 = iVar6;
    } while (iVar23 <= iVar11);
  }
  else {
LAB_7102bbce68:
    pcVar12 = "";
  }
  if (*pcVar12 == '\b') {
    uVar46 = *(undefined4 *)(pcVar12 + 1);
  }
  else {
    uVar46 = 0xc32a0000;
  }
  *(undefined4 *)(param_1 + 0x2d0) = uVar46;
  if ((*pcVar22 == '\f') && (iVar11 = *(int *)(pcVar22 + 1) + -1, 0 < *(int *)(pcVar22 + 1))) {
    iVar23 = 0;
    pcVar12 = "";
    do {
      iVar3 = iVar11 + iVar23;
      if (iVar3 < 0) {
        iVar3 = iVar3 + 1;
      }
      iVar3 = iVar3 >> 1;
      puVar1 = (uint *)(*(long *)(lVar18 + 0x28) + (long)*(int *)(pcVar22 + 5) + (long)iVar3 * 8);
      uVar33 = *(ulong *)(*(long *)(lVar18 + 0x20) + (ulong)*puVar1 * 8);
      if (uVar33 == 0x89313005a) {
        uVar29 = puVar1[1];
        if ((int)uVar29 < 0) goto LAB_7102bbcf1c;
        pcVar12 = pcVar22 + (int)uVar29;
        break;
      }
      iVar6 = iVar3 + -1;
      if (uVar33 < 0x89313005b) {
        iVar23 = iVar3 + 1;
        iVar6 = iVar11;
      }
      iVar11 = iVar6;
    } while (iVar23 <= iVar11);
  }
  else {
LAB_7102bbcf1c:
    pcVar12 = "";
  }
  if (*pcVar12 == '\b') {
    uVar46 = *(undefined4 *)(pcVar12 + 1);
  }
  else {
    uVar46 = 0;
  }
  *(undefined4 *)(param_1 + 0x2d4) = uVar46;
  if ((*pcVar22 == '\f') && (iVar11 = *(int *)(pcVar22 + 1) + -1, 0 < *(int *)(pcVar22 + 1))) {
    iVar23 = 0;
    pcVar12 = "";
    do {
      iVar3 = iVar11 + iVar23;
      if (iVar3 < 0) {
        iVar3 = iVar3 + 1;
      }
      iVar3 = iVar3 >> 1;
      puVar1 = (uint *)(*(long *)(lVar18 + 0x28) + (long)*(int *)(pcVar22 + 5) + (long)iVar3 * 8);
      uVar33 = *(ulong *)(*(long *)(lVar18 + 0x20) + (ulong)*puVar1 * 8);
      if (uVar33 == 0x58c1a452f) {
        uVar29 = puVar1[1];
        if ((int)uVar29 < 0) goto LAB_7102bbcfcc;
        pcVar12 = pcVar22 + (int)uVar29;
        break;
      }
      iVar6 = iVar3 + -1;
      if (uVar33 < 0x58c1a4530) {
        iVar23 = iVar3 + 1;
        iVar6 = iVar11;
      }
      iVar11 = iVar6;
    } while (iVar23 <= iVar11);
  }
  else {
LAB_7102bbcfcc:
    pcVar12 = "";
  }
  if (*pcVar12 == '\b') {
    uVar46 = *(undefined4 *)(pcVar12 + 1);
  }
  else {
    uVar46 = 0x432a0000;
  }
  *(undefined4 *)(param_1 + 0x2d8) = uVar46;
  if ((*pcVar22 == '\f') && (iVar11 = *(int *)(pcVar22 + 1) + -1, 0 < *(int *)(pcVar22 + 1))) {
    iVar23 = 0;
    pcVar12 = "";
    do {
      iVar3 = iVar11 + iVar23;
      if (iVar3 < 0) {
        iVar3 = iVar3 + 1;
      }
      iVar3 = iVar3 >> 1;
      puVar1 = (uint *)(*(long *)(lVar18 + 0x28) + (long)*(int *)(pcVar22 + 5) + (long)iVar3 * 8);
      uVar33 = *(ulong *)(*(long *)(lVar18 + 0x20) + (ulong)*puVar1 * 8);
      if (uVar33 == 0x6f54de50f) {
        uVar29 = puVar1[1];
        if ((int)uVar29 < 0) goto LAB_7102bbd080;
        pcVar12 = pcVar22 + (int)uVar29;
        break;
      }
      iVar6 = iVar3 + -1;
      if (uVar33 < 0x6f54de510) {
        iVar23 = iVar3 + 1;
        iVar6 = iVar11;
      }
      iVar11 = iVar6;
    } while (iVar23 <= iVar11);
  }
  else {
LAB_7102bbd080:
    pcVar12 = "";
  }
  if (*pcVar12 == '\b') {
    uVar46 = *(undefined4 *)(pcVar12 + 1);
  }
  else {
    uVar46 = 0x41a00000;
  }
  *(undefined4 *)(param_1 + 0x2dc) = uVar46;
  if ((*pcVar22 == '\f') && (iVar11 = *(int *)(pcVar22 + 1) + -1, 0 < *(int *)(pcVar22 + 1))) {
    iVar23 = 0;
    pcVar12 = "";
    do {
      iVar3 = iVar11 + iVar23;
      if (iVar3 < 0) {
        iVar3 = iVar3 + 1;
      }
      iVar3 = iVar3 >> 1;
      puVar1 = (uint *)(*(long *)(lVar18 + 0x28) + (long)*(int *)(pcVar22 + 5) + (long)iVar3 * 8);
      uVar33 = *(ulong *)(*(long *)(lVar18 + 0x20) + (ulong)*puVar1 * 8);
      if (uVar33 == 0x106847bd3c) {
        uVar29 = puVar1[1];
        if ((int)uVar29 < 0) goto LAB_7102bbd130;
        pcVar12 = pcVar22 + (int)uVar29;
        break;
      }
      iVar6 = iVar3 + -1;
      if (uVar33 < 0x106847bd3d) {
        iVar23 = iVar3 + 1;
        iVar6 = iVar11;
      }
      iVar11 = iVar6;
    } while (iVar23 <= iVar11);
  }
  else {
LAB_7102bbd130:
    pcVar12 = "";
  }
  switch(*pcVar12) {
  case '\x01':
  case '\x03':
    uVar29 = (uint)(byte)pcVar12[1];
    break;
  case '\x02':
    uVar29 = (uint)pcVar12[1];
    break;
  case '\x04':
    uVar29 = (uint)*(short *)(pcVar12 + 1);
    break;
  case '\x05':
    uVar29 = (uint)*(ushort *)(pcVar12 + 1);
    break;
  case '\x06':
  case '\a':
    uVar29 = *(uint *)(pcVar12 + 1);
    break;
  default:
    uVar29 = 0;
  }
  *(uint *)(param_1 + 0x2e0) = uVar29;
  if ((*pcVar22 == '\f') && (iVar11 = *(int *)(pcVar22 + 1) + -1, 0 < *(int *)(pcVar22 + 1))) {
    iVar23 = 0;
    pcVar12 = "";
    do {
      iVar3 = iVar11 + iVar23;
      if (iVar3 < 0) {
        iVar3 = iVar3 + 1;
      }
      iVar3 = iVar3 >> 1;
      puVar1 = (uint *)(*(long *)(lVar18 + 0x28) + (long)*(int *)(pcVar22 + 5) + (long)iVar3 * 8);
      uVar33 = *(ulong *)(*(long *)(lVar18 + 0x20) + (ulong)*puVar1 * 8);
      if (uVar33 == 0xbf6dc4096) {
        uVar29 = puVar1[1];
        if ((int)uVar29 < 0) goto LAB_7102bbd20c;
        pcVar12 = pcVar22 + (int)uVar29;
        break;
      }
      iVar6 = iVar3 + -1;
      if (uVar33 < 0xbf6dc4097) {
        iVar23 = iVar3 + 1;
        iVar6 = iVar11;
      }
      iVar11 = iVar6;
    } while (iVar23 <= iVar11);
  }
  else {
LAB_7102bbd20c:
    pcVar12 = "";
  }
  if (*pcVar12 == '\b') {
    uVar46 = *(undefined4 *)(pcVar12 + 1);
  }
  else {
    uVar46 = 0x43b40000;
  }
  *(undefined4 *)(param_1 + 0x2e4) = uVar46;
  if ((*pcVar22 == '\f') && (iVar11 = *(int *)(pcVar22 + 1) + -1, 0 < *(int *)(pcVar22 + 1))) {
    iVar23 = 0;
    pcVar12 = "";
    do {
      iVar3 = iVar11 + iVar23;
      if (iVar3 < 0) {
        iVar3 = iVar3 + 1;
      }
      iVar3 = iVar3 >> 1;
      puVar1 = (uint *)(*(long *)(lVar18 + 0x28) + (long)*(int *)(pcVar22 + 5) + (long)iVar3 * 8);
      uVar33 = *(ulong *)(*(long *)(lVar18 + 0x20) + (ulong)*puVar1 * 8);
      if (uVar33 == 0x9c4677bc8) {
        uVar29 = puVar1[1];
        if ((int)uVar29 < 0) goto LAB_7102bbd2b4;
        pcVar12 = pcVar22 + (int)uVar29;
        break;
      }
      iVar6 = iVar3 + -1;
      if (uVar33 < 0x9c4677bc9) {
        iVar23 = iVar3 + 1;
        iVar6 = iVar11;
      }
      iVar11 = iVar6;
    } while (iVar23 <= iVar11);
  }
  else {
LAB_7102bbd2b4:
    pcVar12 = "";
  }
  if (*pcVar12 == '\b') {
    uVar46 = *(undefined4 *)(pcVar12 + 1);
  }
  else {
    uVar46 = 0x4419c000;
  }
  *(undefined4 *)(param_1 + 0x2e8) = uVar46;
  pcVar12 = (char *)*plVar9;
  if ((*pcVar12 == '\f') && (iVar11 = *(int *)(pcVar12 + 1) + -1, 0 < *(int *)(pcVar12 + 1))) {
    lVar18 = *param_2;
    iVar23 = 0;
    pcVar22 = "";
    do {
      iVar3 = iVar11 + iVar23;
      if (iVar3 < 0) {
        iVar3 = iVar3 + 1;
      }
      iVar3 = iVar3 >> 1;
      puVar1 = (uint *)(*(long *)(lVar18 + 0x28) + (long)*(int *)(pcVar12 + 5) + (long)iVar3 * 8);
      uVar33 = *(ulong *)(*(long *)(lVar18 + 0x20) + (ulong)*puVar1 * 8);
      if (uVar33 == 0x1668e9344d) {
        uVar29 = puVar1[1];
        if ((int)uVar29 < 0) goto LAB_7102bbd37c;
        pcVar22 = pcVar12 + (int)uVar29;
        goto LAB_7102bbd388;
      }
      iVar6 = iVar3 + -1;
      if (uVar33 < 0x1668e9344e) {
        iVar23 = iVar3 + 1;
        iVar6 = iVar11;
      }
      iVar11 = iVar6;
    } while (iVar23 <= iVar11);
    lVar18 = 0;
  }
  else {
LAB_7102bbd37c:
    lVar18 = 0;
    pcVar22 = "";
  }
LAB_7102bbd388:
  if ((*pcVar22 == '\f') && (iVar11 = *(int *)(pcVar22 + 1) + -1, 0 < *(int *)(pcVar22 + 1))) {
    iVar23 = 0;
    pcVar12 = "";
    do {
      iVar3 = iVar11 + iVar23;
      if (iVar3 < 0) {
        iVar3 = iVar3 + 1;
      }
      iVar3 = iVar3 >> 1;
      puVar1 = (uint *)(*(long *)(lVar18 + 0x28) + (long)*(int *)(pcVar22 + 5) + (long)iVar3 * 8);
      uVar33 = *(ulong *)(*(long *)(lVar18 + 0x20) + (ulong)*puVar1 * 8);
      if (uVar33 == 0x8e41430cc) {
        uVar29 = puVar1[1];
        if ((int)uVar29 < 0) goto LAB_7102bbd414;
        pcVar12 = pcVar22 + (int)uVar29;
        break;
      }
      iVar6 = iVar3 + -1;
      if (uVar33 < 0x8e41430cd) {
        iVar23 = iVar3 + 1;
        iVar6 = iVar11;
      }
      iVar11 = iVar6;
    } while (iVar23 <= iVar11);
  }
  else {
LAB_7102bbd414:
    pcVar12 = "";
  }
  if (*pcVar12 == '\b') {
    uVar46 = *(undefined4 *)(pcVar12 + 1);
  }
  else {
    uVar46 = 0x432a0000;
  }
  *(undefined4 *)(param_1 + 0x2ec) = uVar46;
  if ((*pcVar22 == '\f') && (iVar11 = *(int *)(pcVar22 + 1) + -1, 0 < *(int *)(pcVar22 + 1))) {
    iVar23 = 0;
    pcVar12 = "";
    do {
      iVar3 = iVar11 + iVar23;
      if (iVar3 < 0) {
        iVar3 = iVar3 + 1;
      }
      iVar3 = iVar3 >> 1;
      puVar1 = (uint *)(*(long *)(lVar18 + 0x28) + (long)*(int *)(pcVar22 + 5) + (long)iVar3 * 8);
      uVar33 = *(ulong *)(*(long *)(lVar18 + 0x20) + (ulong)*puVar1 * 8);
      if (uVar33 == 0x89313005a) {
        uVar29 = puVar1[1];
        if ((int)uVar29 < 0) goto LAB_7102bbd4c4;
        pcVar12 = pcVar22 + (int)uVar29;
        break;
      }
      iVar6 = iVar3 + -1;
      if (uVar33 < 0x89313005b) {
        iVar23 = iVar3 + 1;
        iVar6 = iVar11;
      }
      iVar11 = iVar6;
    } while (iVar23 <= iVar11);
  }
  else {
LAB_7102bbd4c4:
    pcVar12 = "";
  }
  if (*pcVar12 == '\b') {
    uVar46 = *(undefined4 *)(pcVar12 + 1);
  }
  else {
    uVar46 = 0;
  }
  *(undefined4 *)(param_1 + 0x2f0) = uVar46;
  if ((*pcVar22 == '\f') && (iVar11 = *(int *)(pcVar22 + 1) + -1, 0 < *(int *)(pcVar22 + 1))) {
    iVar23 = 0;
    pcVar12 = "";
    do {
      iVar3 = iVar11 + iVar23;
      if (iVar3 < 0) {
        iVar3 = iVar3 + 1;
      }
      iVar3 = iVar3 >> 1;
      puVar1 = (uint *)(*(long *)(lVar18 + 0x28) + (long)*(int *)(pcVar22 + 5) + (long)iVar3 * 8);
      uVar33 = *(ulong *)(*(long *)(lVar18 + 0x20) + (ulong)*puVar1 * 8);
      if (uVar33 == 0x58c1a452f) {
        uVar29 = puVar1[1];
        if ((int)uVar29 < 0) goto LAB_7102bbd574;
        pcVar12 = pcVar22 + (int)uVar29;
        break;
      }
      iVar6 = iVar3 + -1;
      if (uVar33 < 0x58c1a4530) {
        iVar23 = iVar3 + 1;
        iVar6 = iVar11;
      }
      iVar11 = iVar6;
    } while (iVar23 <= iVar11);
  }
  else {
LAB_7102bbd574:
    pcVar12 = "";
  }
  if (*pcVar12 == '\b') {
    uVar46 = *(undefined4 *)(pcVar12 + 1);
  }
  else {
    uVar46 = 0x432a0000;
  }
  *(undefined4 *)(param_1 + 0x2f4) = uVar46;
  if ((*pcVar22 == '\f') && (iVar11 = *(int *)(pcVar22 + 1) + -1, 0 < *(int *)(pcVar22 + 1))) {
    iVar23 = 0;
    pcVar12 = "";
    do {
      iVar3 = iVar11 + iVar23;
      if (iVar3 < 0) {
        iVar3 = iVar3 + 1;
      }
      iVar3 = iVar3 >> 1;
      puVar1 = (uint *)(*(long *)(lVar18 + 0x28) + (long)*(int *)(pcVar22 + 5) + (long)iVar3 * 8);
      uVar33 = *(ulong *)(*(long *)(lVar18 + 0x20) + (ulong)*puVar1 * 8);
      if (uVar33 == 0x6f54de50f) {
        uVar29 = puVar1[1];
        if ((int)uVar29 < 0) goto LAB_7102bbd624;
        pcVar12 = pcVar22 + (int)uVar29;
        break;
      }
      iVar6 = iVar3 + -1;
      if (uVar33 < 0x6f54de510) {
        iVar23 = iVar3 + 1;
        iVar6 = iVar11;
      }
      iVar11 = iVar6;
    } while (iVar23 <= iVar11);
  }
  else {
LAB_7102bbd624:
    pcVar12 = "";
  }
  if (*pcVar12 == '\b') {
    uVar46 = *(undefined4 *)(pcVar12 + 1);
  }
  else {
    uVar46 = 0x41a00000;
  }
  *(undefined4 *)(param_1 + 0x2f8) = uVar46;
  if ((*pcVar22 == '\f') && (iVar11 = *(int *)(pcVar22 + 1) + -1, 0 < *(int *)(pcVar22 + 1))) {
    iVar23 = 0;
    pcVar12 = "";
    do {
      iVar3 = iVar11 + iVar23;
      if (iVar3 < 0) {
        iVar3 = iVar3 + 1;
      }
      iVar3 = iVar3 >> 1;
      puVar1 = (uint *)(*(long *)(lVar18 + 0x28) + (long)*(int *)(pcVar22 + 5) + (long)iVar3 * 8);
      uVar33 = *(ulong *)(*(long *)(lVar18 + 0x20) + (ulong)*puVar1 * 8);
      if (uVar33 == 0x106847bd3c) {
        uVar29 = puVar1[1];
        if ((int)uVar29 < 0) goto LAB_7102bbd6d4;
        pcVar12 = pcVar22 + (int)uVar29;
        break;
      }
      iVar6 = iVar3 + -1;
      if (uVar33 < 0x106847bd3d) {
        iVar23 = iVar3 + 1;
        iVar6 = iVar11;
      }
      iVar11 = iVar6;
    } while (iVar23 <= iVar11);
  }
  else {
LAB_7102bbd6d4:
    pcVar12 = "";
  }
  switch(*pcVar12) {
  case '\x01':
  case '\x03':
    uVar29 = (uint)(byte)pcVar12[1];
    break;
  case '\x02':
    uVar29 = (uint)pcVar12[1];
    break;
  case '\x04':
    uVar29 = (uint)*(short *)(pcVar12 + 1);
    break;
  case '\x05':
    uVar29 = (uint)*(ushort *)(pcVar12 + 1);
    break;
  case '\x06':
  case '\a':
    uVar29 = *(uint *)(pcVar12 + 1);
    break;
  default:
    uVar29 = 0;
  }
  *(uint *)(param_1 + 0x2fc) = uVar29;
  if ((*pcVar22 == '\f') && (iVar11 = *(int *)(pcVar22 + 1) + -1, 0 < *(int *)(pcVar22 + 1))) {
    iVar23 = 0;
    pcVar12 = "";
    do {
      iVar3 = iVar11 + iVar23;
      if (iVar3 < 0) {
        iVar3 = iVar3 + 1;
      }
      iVar3 = iVar3 >> 1;
      puVar1 = (uint *)(*(long *)(lVar18 + 0x28) + (long)*(int *)(pcVar22 + 5) + (long)iVar3 * 8);
      uVar33 = *(ulong *)(*(long *)(lVar18 + 0x20) + (ulong)*puVar1 * 8);
      if (uVar33 == 0xbf6dc4096) {
        uVar29 = puVar1[1];
        if ((int)uVar29 < 0) goto LAB_7102bbd7b0;
        pcVar12 = pcVar22 + (int)uVar29;
        break;
      }
      iVar6 = iVar3 + -1;
      if (uVar33 < 0xbf6dc4097) {
        iVar23 = iVar3 + 1;
        iVar6 = iVar11;
      }
      iVar11 = iVar6;
    } while (iVar23 <= iVar11);
  }
  else {
LAB_7102bbd7b0:
    pcVar12 = "";
  }
  if (*pcVar12 == '\b') {
    uVar46 = *(undefined4 *)(pcVar12 + 1);
  }
  else {
    uVar46 = 0x43b40000;
  }
  *(undefined4 *)(param_1 + 0x300) = uVar46;
  if ((*pcVar22 == '\f') && (iVar11 = *(int *)(pcVar22 + 1) + -1, 0 < *(int *)(pcVar22 + 1))) {
    iVar23 = 0;
    pcVar12 = "";
    do {
      iVar3 = iVar11 + iVar23;
      if (iVar3 < 0) {
        iVar3 = iVar3 + 1;
      }
      iVar3 = iVar3 >> 1;
      puVar1 = (uint *)(*(long *)(lVar18 + 0x28) + (long)*(int *)(pcVar22 + 5) + (long)iVar3 * 8);
      uVar33 = *(ulong *)(*(long *)(lVar18 + 0x20) + (ulong)*puVar1 * 8);
      if (uVar33 == 0x9c4677bc8) {
        uVar29 = puVar1[1];
        if ((int)uVar29 < 0) goto LAB_7102bbd854;
        pcVar12 = pcVar22 + (int)uVar29;
        break;
      }
      iVar6 = iVar3 + -1;
      if (uVar33 < 0x9c4677bc9) {
        iVar23 = iVar3 + 1;
        iVar6 = iVar11;
      }
      iVar11 = iVar6;
    } while (iVar23 <= iVar11);
  }
  else {
LAB_7102bbd854:
    pcVar12 = "";
  }
  if (*pcVar12 == '\b') {
    uVar46 = *(undefined4 *)(pcVar12 + 1);
  }
  else {
    uVar46 = 0x4419c000;
  }
  *(undefined4 *)(param_1 + 0x304) = uVar46;
  pcVar12 = (char *)*plVar9;
  if ((*pcVar12 == '\f') && (iVar11 = *(int *)(pcVar12 + 1) + -1, 0 < *(int *)(pcVar12 + 1))) {
    lVar18 = *param_2;
    iVar23 = 0;
    pcVar22 = "";
    do {
      iVar3 = iVar11 + iVar23;
      if (iVar3 < 0) {
        iVar3 = iVar3 + 1;
      }
      iVar3 = iVar3 >> 1;
      puVar1 = (uint *)(*(long *)(lVar18 + 0x28) + (long)*(int *)(pcVar12 + 5) + (long)iVar3 * 8);
      uVar33 = *(ulong *)(*(long *)(lVar18 + 0x20) + (ulong)*puVar1 * 8);
      if (uVar33 == 0x12d0e8b901) {
        uVar29 = puVar1[1];
        if ((int)uVar29 < 0) goto LAB_7102bbd918;
        pcVar22 = pcVar12 + (int)uVar29;
        goto LAB_7102bbd924;
      }
      iVar6 = iVar3 + -1;
      if (uVar33 < 0x12d0e8b902) {
        iVar23 = iVar3 + 1;
        iVar6 = iVar11;
      }
      iVar11 = iVar6;
    } while (iVar23 <= iVar11);
    lVar18 = 0;
  }
  else {
LAB_7102bbd918:
    lVar18 = 0;
    pcVar22 = "";
  }
LAB_7102bbd924:
  if ((*pcVar22 == '\f') && (iVar11 = *(int *)(pcVar22 + 1) + -1, 0 < *(int *)(pcVar22 + 1))) {
    iVar23 = 0;
    pcVar12 = "";
    do {
      iVar3 = iVar11 + iVar23;
      if (iVar3 < 0) {
        iVar3 = iVar3 + 1;
      }
      iVar3 = iVar3 >> 1;
      puVar1 = (uint *)(*(long *)(lVar18 + 0x28) + (long)*(int *)(pcVar22 + 5) + (long)iVar3 * 8);
      uVar33 = *(ulong *)(*(long *)(lVar18 + 0x20) + (ulong)*puVar1 * 8);
      if (uVar33 == 0x8e41430cc) {
        uVar29 = puVar1[1];
        if ((int)uVar29 < 0) goto LAB_7102bbd9b0;
        pcVar12 = pcVar22 + (int)uVar29;
        break;
      }
      iVar6 = iVar3 + -1;
      if (uVar33 < 0x8e41430cd) {
        iVar23 = iVar3 + 1;
        iVar6 = iVar11;
      }
      iVar11 = iVar6;
    } while (iVar23 <= iVar11);
  }
  else {
LAB_7102bbd9b0:
    pcVar12 = "";
  }
  if (*pcVar12 == '\b') {
    uVar46 = *(undefined4 *)(pcVar12 + 1);
  }
  else {
    uVar46 = 0;
  }
  *(undefined4 *)(param_1 + 0x308) = uVar46;
  if ((*pcVar22 == '\f') && (iVar11 = *(int *)(pcVar22 + 1) + -1, 0 < *(int *)(pcVar22 + 1))) {
    iVar23 = 0;
    pcVar12 = "";
    do {
      iVar3 = iVar11 + iVar23;
      if (iVar3 < 0) {
        iVar3 = iVar3 + 1;
      }
      iVar3 = iVar3 >> 1;
      puVar1 = (uint *)(*(long *)(lVar18 + 0x28) + (long)*(int *)(pcVar22 + 5) + (long)iVar3 * 8);
      uVar33 = *(ulong *)(*(long *)(lVar18 + 0x20) + (ulong)*puVar1 * 8);
      if (uVar33 == 0x89313005a) {
        uVar29 = puVar1[1];
        if ((int)uVar29 < 0) goto LAB_7102bbda60;
        pcVar12 = pcVar22 + (int)uVar29;
        break;
      }
      iVar6 = iVar3 + -1;
      if (uVar33 < 0x89313005b) {
        iVar23 = iVar3 + 1;
        iVar6 = iVar11;
      }
      iVar11 = iVar6;
    } while (iVar23 <= iVar11);
  }
  else {
LAB_7102bbda60:
    pcVar12 = "";
  }
  if (*pcVar12 == '\b') {
    uVar46 = *(undefined4 *)(pcVar12 + 1);
  }
  else {
    uVar46 = 0xc0a00000;
  }
  *(undefined4 *)(param_1 + 0x30c) = uVar46;
  if ((*pcVar22 == '\f') && (iVar11 = *(int *)(pcVar22 + 1) + -1, 0 < *(int *)(pcVar22 + 1))) {
    iVar23 = 0;
    pcVar12 = "";
    do {
      iVar3 = iVar11 + iVar23;
      if (iVar3 < 0) {
        iVar3 = iVar3 + 1;
      }
      iVar3 = iVar3 >> 1;
      puVar1 = (uint *)(*(long *)(lVar18 + 0x28) + (long)*(int *)(pcVar22 + 5) + (long)iVar3 * 8);
      uVar33 = *(ulong *)(*(long *)(lVar18 + 0x20) + (ulong)*puVar1 * 8);
      if (uVar33 == 0x58c1a452f) {
        uVar29 = puVar1[1];
        if ((int)uVar29 < 0) goto LAB_7102bbdb10;
        pcVar12 = pcVar22 + (int)uVar29;
        break;
      }
      iVar6 = iVar3 + -1;
      if (uVar33 < 0x58c1a4530) {
        iVar23 = iVar3 + 1;
        iVar6 = iVar11;
      }
      iVar11 = iVar6;
    } while (iVar23 <= iVar11);
  }
  else {
LAB_7102bbdb10:
    pcVar12 = "";
  }
  if (*pcVar12 == '\b') {
    uVar46 = *(undefined4 *)(pcVar12 + 1);
  }
  else {
    uVar46 = 0x43fa0000;
  }
  *(undefined4 *)(param_1 + 0x310) = uVar46;
  if ((*pcVar22 == '\f') && (iVar11 = *(int *)(pcVar22 + 1) + -1, 0 < *(int *)(pcVar22 + 1))) {
    iVar23 = 0;
    pcVar12 = "";
    do {
      iVar3 = iVar11 + iVar23;
      if (iVar3 < 0) {
        iVar3 = iVar3 + 1;
      }
      iVar3 = iVar3 >> 1;
      puVar1 = (uint *)(*(long *)(lVar18 + 0x28) + (long)*(int *)(pcVar22 + 5) + (long)iVar3 * 8);
      uVar33 = *(ulong *)(*(long *)(lVar18 + 0x20) + (ulong)*puVar1 * 8);
      if (uVar33 == 0x6f54de50f) {
        uVar29 = puVar1[1];
        if ((int)uVar29 < 0) goto LAB_7102bbdbc4;
        pcVar12 = pcVar22 + (int)uVar29;
        break;
      }
      iVar6 = iVar3 + -1;
      if (uVar33 < 0x6f54de510) {
        iVar23 = iVar3 + 1;
        iVar6 = iVar11;
      }
      iVar11 = iVar6;
    } while (iVar23 <= iVar11);
  }
  else {
LAB_7102bbdbc4:
    pcVar12 = "";
  }
  if (*pcVar12 == '\b') {
    uVar46 = *(undefined4 *)(pcVar12 + 1);
  }
  else {
    uVar46 = 0x41200000;
  }
  *(undefined4 *)(param_1 + 0x314) = uVar46;
  if ((*pcVar22 == '\f') && (iVar11 = *(int *)(pcVar22 + 1) + -1, 0 < *(int *)(pcVar22 + 1))) {
    iVar23 = 0;
    pcVar12 = "";
    do {
      iVar3 = iVar11 + iVar23;
      if (iVar3 < 0) {
        iVar3 = iVar3 + 1;
      }
      iVar3 = iVar3 >> 1;
      puVar1 = (uint *)(*(long *)(lVar18 + 0x28) + (long)*(int *)(pcVar22 + 5) + (long)iVar3 * 8);
      uVar33 = *(ulong *)(*(long *)(lVar18 + 0x20) + (ulong)*puVar1 * 8);
      if (uVar33 == 0x106847bd3c) {
        uVar29 = puVar1[1];
        if ((int)uVar29 < 0) goto LAB_7102bbdc74;
        pcVar12 = pcVar22 + (int)uVar29;
        break;
      }
      iVar6 = iVar3 + -1;
      if (uVar33 < 0x106847bd3d) {
        iVar23 = iVar3 + 1;
        iVar6 = iVar11;
      }
      iVar11 = iVar6;
    } while (iVar23 <= iVar11);
  }
  else {
LAB_7102bbdc74:
    pcVar12 = "";
  }
  switch(*pcVar12) {
  case '\x01':
  case '\x03':
    uVar29 = (uint)(byte)pcVar12[1];
    break;
  case '\x02':
    uVar29 = (uint)pcVar12[1];
    break;
  case '\x04':
    uVar29 = (uint)*(short *)(pcVar12 + 1);
    break;
  case '\x05':
    uVar29 = (uint)*(ushort *)(pcVar12 + 1);
    break;
  case '\x06':
  case '\a':
    uVar29 = *(uint *)(pcVar12 + 1);
    break;
  default:
    uVar29 = 0;
  }
  *(uint *)(param_1 + 0x318) = uVar29;
  if ((*pcVar22 == '\f') && (iVar11 = *(int *)(pcVar22 + 1) + -1, 0 < *(int *)(pcVar22 + 1))) {
    iVar23 = 0;
    pcVar12 = "";
    do {
      iVar3 = iVar11 + iVar23;
      if (iVar3 < 0) {
        iVar3 = iVar3 + 1;
      }
      iVar3 = iVar3 >> 1;
      puVar1 = (uint *)(*(long *)(lVar18 + 0x28) + (long)*(int *)(pcVar22 + 5) + (long)iVar3 * 8);
      uVar33 = *(ulong *)(*(long *)(lVar18 + 0x20) + (ulong)*puVar1 * 8);
      if (uVar33 == 0xbf6dc4096) {
        uVar29 = puVar1[1];
        if ((int)uVar29 < 0) goto LAB_7102bbdd50;
        pcVar12 = pcVar22 + (int)uVar29;
        break;
      }
      iVar6 = iVar3 + -1;
      if (uVar33 < 0xbf6dc4097) {
        iVar23 = iVar3 + 1;
        iVar6 = iVar11;
      }
      iVar11 = iVar6;
    } while (iVar23 <= iVar11);
  }
  else {
LAB_7102bbdd50:
    pcVar12 = "";
  }
  if (*pcVar12 == '\b') {
    uVar46 = *(undefined4 *)(pcVar12 + 1);
  }
  else {
    uVar46 = 0x4419c000;
  }
  *(undefined4 *)(param_1 + 0x31c) = uVar46;
  if ((*pcVar22 == '\f') && (iVar11 = *(int *)(pcVar22 + 1) + -1, 0 < *(int *)(pcVar22 + 1))) {
    iVar23 = 0;
    pcVar12 = "";
    do {
      iVar3 = iVar11 + iVar23;
      if (iVar3 < 0) {
        iVar3 = iVar3 + 1;
      }
      iVar3 = iVar3 >> 1;
      puVar1 = (uint *)(*(long *)(lVar18 + 0x28) + (long)*(int *)(pcVar22 + 5) + (long)iVar3 * 8);
      uVar33 = *(ulong *)(*(long *)(lVar18 + 0x20) + (ulong)*puVar1 * 8);
      if (uVar33 == 0x9c4677bc8) {
        uVar29 = puVar1[1];
        if ((int)uVar29 < 0) goto LAB_7102bbddf4;
        pcVar12 = pcVar22 + (int)uVar29;
        break;
      }
      iVar6 = iVar3 + -1;
      if (uVar33 < 0x9c4677bc9) {
        iVar23 = iVar3 + 1;
        iVar6 = iVar11;
      }
      iVar11 = iVar6;
    } while (iVar23 <= iVar11);
  }
  else {
LAB_7102bbddf4:
    pcVar12 = "";
  }
  if (*pcVar12 == '\b') {
    uVar46 = *(undefined4 *)(pcVar12 + 1);
  }
  else {
    uVar46 = 0x44610000;
  }
  *(undefined4 *)(param_1 + 800) = uVar46;
  return;
}

