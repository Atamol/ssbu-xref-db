// addr:      710278e1f0
// offset:    0x278e1f0
// name:      FUN_710278e1f0
// mangled:   
// signature: undefined __cdecl FUN_710278e1f0(long param_1, long * param_2, uint * param_3, byte * * * * param_4, uint * param_5, undefined8 param_6, ulong param_7, byte * param_8)


void FUN_710278e1f0(long param_1,long *param_2,uint *param_3,byte ****param_4,uint *param_5,
                   undefined8 param_6,ulong param_7,byte *param_8)

{
  uint *puVar1;
  long *plVar2;
  int iVar3;
  uint uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  int iVar7;
  uint uVar8;
  void *pvVar9;
  long ****pppplVar10;
  byte *pbVar11;
  int iVar12;
  char *pcVar13;
  long lVar14;
  ulong uVar15;
  long ***ppplVar16;
  ulong uVar17;
  long lVar18;
  ulong uVar19;
  undefined8 *puVar20;
  long lVar21;
  int iVar22;
  byte *pbVar23;
  undefined8 uVar24;
  uint uVar25;
  ulong uVar26;
  undefined8 uVar27;
  size_t __n;
  long ****pppplVar28;
  void *pvVar29;
  long lVar30;
  byte *pbVar31;
  ulong uVar32;
  ulong uVar33;
  undefined4 uVar34;
  long local_90;
  long ***local_70;
  undefined4 local_64;
  
  pcVar13 = (char *)param_2[1];
  if ((*pcVar13 == '\f') && (iVar12 = *(int *)(pcVar13 + 1) + -1, 0 < *(int *)(pcVar13 + 1))) {
    lVar30 = *param_2;
    iVar22 = 0;
    pbVar31 = &DAT_7104742dbb;
    do {
      iVar3 = iVar12 + iVar22;
      if (iVar3 < 0) {
        iVar3 = iVar3 + 1;
      }
      iVar3 = iVar3 >> 1;
      puVar1 = (uint *)(*(long *)(lVar30 + 0x28) + (long)*(int *)(pcVar13 + 5) + (long)iVar3 * 8);
      uVar26 = *(ulong *)(*(long *)(lVar30 + 0x20) + (ulong)*puVar1 * 8);
      if (uVar26 == 0x6e4d63009) {
        uVar25 = puVar1[1];
        if ((int)uVar25 < 0) goto LAB_710278e2b0;
        pbVar31 = (byte *)(pcVar13 + (int)uVar25);
        goto LAB_710278e2bc;
      }
      iVar7 = iVar3 + -1;
      if (uVar26 < 0x6e4d6300a) {
        iVar22 = iVar3 + 1;
        iVar7 = iVar12;
      }
      iVar12 = iVar7;
    } while (iVar22 <= iVar12);
    lVar30 = 0;
  }
  else {
LAB_710278e2b0:
    lVar30 = 0;
    pbVar31 = &DAT_7104742dbb;
  }
LAB_710278e2bc:
  if (*pbVar31 - 0xb < 2) {
    iVar12 = *(int *)(pbVar31 + 1);
  }
  else {
    iVar12 = 0;
  }
  uVar26 = (ulong)iVar12;
  pvVar29 = *(void **)(param_1 + 8);
  puVar20 = *(undefined8 **)(param_1 + 0x10);
  pppplVar28 = (long ****)((long)puVar20 - (long)pvVar29);
  uVar33 = (long)pppplVar28 >> 4;
  plVar2 = (long *)(param_1 + 8);
  if (uVar33 < uVar26) {
    uVar32 = uVar26 - uVar33;
    if ((ulong)(*(long *)(param_1 + 0x18) - (long)puVar20 >> 4) < uVar32) {
      if (iVar12 < 0) goto LAB_710278fe30;
      lVar14 = *(long *)(param_1 + 0x18) - (long)pvVar29;
      if ((ulong)(lVar14 >> 4) < 0x7ffffffffffffff) {
        uVar15 = lVar14 >> 3;
        uVar17 = uVar26;
        if (uVar26 <= uVar15) {
          uVar17 = uVar15;
        }
        if (uVar17 != 0) {
          if (uVar17 >> 0x3c != 0) goto LAB_710278fba8;
          goto LAB_710278e3b4;
        }
LAB_710278e414:
        pvVar9 = (void *)0x0;
      }
      else {
        uVar17 = 0xfffffffffffffff;
LAB_710278e3b4:
        ppplVar16 = (long ***)(uVar17 * 0x10);
        if (ppplVar16 == (long ***)0x0) {
          ppplVar16 = (long ***)0x1;
        }
        pvVar9 = (void *)FUN_710392e290(0x10,ppplVar16,(long ****)param_3,param_4,(long ****)param_5
                                        ,param_6,param_7,param_8);
        if (pvVar9 == (void *)0x0) {
          if (DAT_7105332f00 != (long *)0x0) {
            local_64 = 0;
            pppplVar10 = &local_70;
            local_70 = ppplVar16;
            uVar15 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_64);
            if (((uVar15 & 1) != 0) &&
               (pvVar9 = (void *)FUN_710392e290(0x10,ppplVar16,pppplVar10,param_4,(long ****)param_5
                                                ,param_6,param_7,param_8), pvVar9 != (void *)0x0))
            goto LAB_710278e418;
          }
          goto LAB_710278e414;
        }
      }
LAB_710278e418:
      param_3 = (uint *)(uVar32 * 0x10);
      memset((void *)((long)pvVar9 + uVar33 * 0x10),0,(size_t)param_3);
      if (0 < (long)pppplVar28) {
        memcpy(pvVar9,pvVar29,(size_t)pppplVar28);
        param_3 = (uint *)pppplVar28;
      }
      *(void **)(param_1 + 8) = pvVar9;
      *(void **)(param_1 + 0x10) = (void *)((long)pvVar9 + uVar26 * 0x10);
      *(void **)(param_1 + 0x18) = (void *)((long)pvVar9 + uVar17 * 0x10);
      if (pvVar29 != (void *)0x0) {
        FUN_710392eb40((ulong)pvVar29);
      }
    }
    else {
      uVar26 = uVar32;
      if ((uVar32 & 1) != 0) {
        *puVar20 = 0;
        puVar20[1] = 0;
        puVar20 = (undefined8 *)(*(long *)(param_1 + 0x10) + 0x10);
        uVar26 = uVar32 - 1;
        *(undefined8 **)(param_1 + 0x10) = puVar20;
      }
      if (uVar32 != 1) {
        do {
          *puVar20 = 0;
          puVar20[1] = 0;
          lVar14 = *(long *)(param_1 + 0x10);
          *(long *)(param_1 + 0x10) = lVar14 + 0x10;
          uVar26 = uVar26 - 2;
          *(undefined8 *)(lVar14 + 0x10) = 0;
          *(undefined8 *)(lVar14 + 0x18) = 0;
          puVar20 = (undefined8 *)(*(long *)(param_1 + 0x10) + 0x10);
          *(undefined8 **)(param_1 + 0x10) = puVar20;
        } while (uVar26 != 0);
      }
    }
  }
  else if (uVar33 != uVar26) {
    *(void **)(param_1 + 0x10) = (void *)((long)pvVar29 + uVar26 * 0x10);
  }
  uVar25 = (uint)*pbVar31;
  if ((*pbVar31 - 0xb < 2) && (0 < *(int *)(pbVar31 + 1))) {
    lVar14 = 0;
LAB_710278e4c0:
    do {
      iVar12 = (int)lVar14;
      if (iVar12 < 0) {
LAB_710278e4f8:
        lVar18 = 0;
        pbVar23 = &DAT_7104742dbb;
      }
      else {
        pbVar23 = &DAT_7104742dbb;
        lVar18 = 0;
        if (uVar25 == 0xb) {
          if (*(int *)(pbVar31 + 1) <= iVar12) goto LAB_710278e4f8;
          pbVar23 = pbVar31 + *(int *)(pbVar31 + (long)iVar12 * 4 + 5);
          lVar18 = lVar30;
        }
      }
      if ((*pbVar23 == 0xc) && (uVar25 = *(int *)(pbVar23 + 1) - 1, 0 < *(int *)(pbVar23 + 1))) {
        iVar12 = 0;
        do {
          iVar22 = uVar25 + iVar12;
          if (iVar22 < 0) {
            iVar22 = iVar22 + 1;
          }
          uVar4 = iVar22 >> 1;
          param_3 = (uint *)(ulong)uVar4;
          param_4 = (byte ****)
                    (*(long *)(lVar18 + 0x28) + (long)*(int *)(pbVar23 + 5) + (long)(int)uVar4 * 8);
          param_5 = *(uint **)(*(long *)(lVar18 + 0x20) + (ulong)*(uint *)param_4 * 8);
          if ((long ****)param_5 == (long ****)0xa737452e1) {
            if (-1 < (int)*(uint *)((long)param_4 + 4)) {
              pbVar11 = pbVar23 + (int)*(uint *)((long)param_4 + 4);
              lVar21 = lVar18;
              goto LAB_710278e580;
            }
            break;
          }
          param_4 = (byte ****)(ulong)(uVar4 - 1);
          uVar8 = uVar4 - 1;
          if (param_5 < (long ****)0xa737452e2) {
            iVar12 = uVar4 + 1;
            uVar8 = uVar25;
          }
          uVar25 = uVar8;
        } while (iVar12 <= (int)uVar25);
      }
      lVar21 = 0;
      pbVar11 = &DAT_7104742dbb;
LAB_710278e580:
      if (*pbVar11 == 9) {
        uVar27 = *(undefined8 *)(*(long *)(lVar21 + 0x20) + (long)*(int *)(pbVar11 + 1) * 8);
      }
      else {
        uVar27 = 0;
      }
      *(undefined8 *)(*plVar2 + lVar14 * 0x10) = uVar27;
      pbVar11 = &DAT_7104742dbb;
      if ((*pbVar23 == 0xc) && (uVar25 = *(int *)(pbVar23 + 1) - 1, 0 < *(int *)(pbVar23 + 1))) {
        iVar12 = 0;
        do {
          iVar22 = uVar25 + iVar12;
          if (iVar22 < 0) {
            iVar22 = iVar22 + 1;
          }
          uVar4 = iVar22 >> 1;
          param_3 = (uint *)(ulong)uVar4;
          param_4 = (byte ****)
                    (*(long *)(lVar18 + 0x28) + (long)*(int *)(pbVar23 + 5) + (long)(int)uVar4 * 8);
          param_5 = *(uint **)(*(long *)(lVar18 + 0x20) + (ulong)*(uint *)param_4 * 8);
          if ((long ****)param_5 == (long ****)0x5ec462584) {
            if (-1 < (int)*(uint *)((long)param_4 + 4)) {
              pbVar11 = pbVar23 + (int)*(uint *)((long)param_4 + 4);
            }
            break;
          }
          param_4 = (byte ****)(ulong)(uVar4 - 1);
          uVar8 = uVar4 - 1;
          if (param_5 < (long ****)0x5ec462585) {
            iVar12 = uVar4 + 1;
            uVar8 = uVar25;
          }
          uVar25 = uVar8;
        } while (iVar12 <= (int)uVar25);
      }
      uVar34 = 0x3f800000;
      if (*pbVar11 == 8) {
        uVar34 = *(undefined4 *)(pbVar11 + 1);
      }
      *(undefined4 *)(*plVar2 + lVar14 * 0x10 + 8) = uVar34;
      pbVar11 = &DAT_7104742dbb;
      if ((*pbVar23 == 0xc) && (uVar25 = *(int *)(pbVar23 + 1) - 1, 0 < *(int *)(pbVar23 + 1))) {
        iVar12 = 0;
        do {
          iVar22 = uVar25 + iVar12;
          if (iVar22 < 0) {
            iVar22 = iVar22 + 1;
          }
          iVar22 = iVar22 >> 1;
          param_3 = (uint *)(*(long *)(lVar18 + 0x28) + (long)*(int *)(pbVar23 + 5) +
                            (long)iVar22 * 8);
          param_4 = *(byte *****)(*(long *)(lVar18 + 0x20) + (ulong)*param_3 * 8);
          if (param_4 == (byte ****)0x1630b67bc2) {
            if (-1 < (int)*(uint *)((long)param_3 + 4)) {
              pbVar11 = pbVar23 + (int)*(uint *)((long)param_3 + 4);
            }
            break;
          }
          param_3 = (uint *)(ulong)(iVar22 - 1U);
          uVar4 = iVar22 - 1U;
          if (param_4 < (byte ****)0x1630b67bc3) {
            iVar12 = iVar22 + 1;
            uVar4 = uVar25;
          }
          uVar25 = uVar4;
        } while (iVar12 <= (int)uVar25);
      }
      switch(*pbVar11) {
      case 1:
      case 3:
        uVar25 = (uint)pbVar11[1];
        break;
      case 2:
        uVar25 = (uint)(char)pbVar11[1];
        break;
      case 4:
        uVar25 = (uint)*(short *)(pbVar11 + 1);
        break;
      case 5:
        uVar25 = (uint)*(ushort *)(pbVar11 + 1);
        break;
      case 6:
      case 7:
        uVar25 = *(uint *)(pbVar11 + 1);
        break;
      default:
        uVar25 = 1;
      }
      lVar18 = lVar14 * 0x10;
      lVar14 = lVar14 + 1;
      *(bool *)(*plVar2 + lVar18 + 0xc) = uVar25 != 0;
      uVar25 = (uint)*pbVar31;
      if (uVar25 - 0xb < 2) {
        if (*(int *)(pbVar31 + 1) <= lVar14) break;
        goto LAB_710278e4c0;
      }
    } while (lVar14 < 0);
  }
  pcVar13 = (char *)param_2[1];
  if ((*pcVar13 == '\f') && (iVar12 = *(int *)(pcVar13 + 1) + -1, 0 < *(int *)(pcVar13 + 1))) {
    local_90 = *param_2;
    pbVar31 = &DAT_7104742dbb;
    iVar22 = 0;
    do {
      iVar3 = iVar12 + iVar22;
      if (iVar3 < 0) {
        iVar3 = iVar3 + 1;
      }
      iVar3 = iVar3 >> 1;
      puVar1 = (uint *)(*(long *)(local_90 + 0x28) + (long)*(int *)(pcVar13 + 5) + (long)iVar3 * 8);
      uVar26 = *(ulong *)(*(long *)(local_90 + 0x20) + (ulong)*puVar1 * 8);
      if (uVar26 == 0xb5bec06ae) {
        uVar25 = puVar1[1];
        if ((int)uVar25 < 0) goto LAB_710278e7fc;
        pbVar31 = (byte *)(pcVar13 + (int)uVar25);
        goto LAB_710278e808;
      }
      iVar7 = iVar3 + -1;
      if (uVar26 < 0xb5bec06af) {
        iVar22 = iVar3 + 1;
        iVar7 = iVar12;
      }
      iVar12 = iVar7;
    } while (iVar22 <= iVar12);
    local_90 = 0;
  }
  else {
LAB_710278e7fc:
    local_90 = 0;
    pbVar31 = &DAT_7104742dbb;
  }
LAB_710278e808:
  if (*pbVar31 - 0xb < 2) {
    iVar12 = *(int *)(pbVar31 + 1);
  }
  else {
    iVar12 = 0;
  }
  puVar5 = *(undefined8 **)(param_1 + 0x20);
  puVar20 = *(undefined8 **)(param_1 + 0x28);
  uVar26 = (ulong)iVar12;
  lVar30 = (long)puVar20 - (long)puVar5 >> 3;
  plVar2 = (long *)(param_1 + 0x20);
  if ((ulong)(lVar30 * -0x71c71c71c71c71c7) < uVar26) {
    uVar33 = uVar26 + lVar30 * 0x71c71c71c71c71c7;
    if ((ulong)((*(long *)(param_1 + 0x30) - (long)puVar20 >> 3) * -0x71c71c71c71c71c7) < uVar33) {
      if (iVar12 < 0) goto LAB_710278fe30;
      lVar14 = *(long *)(param_1 + 0x30) - (long)puVar5 >> 3;
      if ((ulong)(lVar14 * -0x71c71c71c71c71c7) < 0x1c71c71c71c71c7) {
        uVar17 = lVar14 * 0x1c71c71c71c71c72;
        uVar32 = uVar26;
        if (uVar26 <= uVar17) {
          uVar32 = uVar17;
        }
        if (uVar32 != 0) goto LAB_710278e994;
LAB_710278e9f8:
        lVar14 = 0;
      }
      else {
        uVar32 = 0x38e38e38e38e38e;
LAB_710278e994:
        ppplVar16 = (long ***)(uVar32 * 0x48);
        if (ppplVar16 == (long ***)0x0) {
          ppplVar16 = (long ***)0x1;
        }
        lVar14 = FUN_710392e290(0x10,ppplVar16,(long ****)param_3,param_4,(long ****)param_5,param_6
                                ,param_7,param_8);
        if (lVar14 == 0) {
          if (DAT_7105332f00 != (long *)0x0) {
            local_64 = 0;
            pppplVar28 = &local_70;
            local_70 = ppplVar16;
            uVar17 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_64);
            if (((uVar17 & 1) != 0) &&
               (lVar14 = FUN_710392e290(0x10,ppplVar16,pppplVar28,param_4,(long ****)param_5,param_6
                                        ,param_7,param_8), lVar14 != 0)) goto LAB_710278e9fc;
          }
          goto LAB_710278e9f8;
        }
      }
LAB_710278e9fc:
      pvVar29 = (void *)(lVar14 + lVar30 * 8);
      param_3 = (uint *)(uVar33 * 0x48);
      lVar30 = lVar14 + uVar32 * 0x48;
      memset(pvVar29,0,(size_t)param_3);
      lVar14 = lVar14 + uVar26 * 0x48;
      if (puVar20 == puVar5) {
        *(void **)(param_1 + 0x20) = pvVar29;
        *(long *)(param_1 + 0x28) = lVar14;
        *(long *)(param_1 + 0x30) = lVar30;
      }
      else {
        lVar18 = 0;
        do {
          uVar27 = *(undefined8 *)((long)puVar20 + lVar18 + -0x48);
          uVar24 = *(undefined8 *)((long)puVar20 + lVar18 + -0x38);
          lVar21 = lVar18 + -0x48;
          *(undefined8 *)((long)pvVar29 + lVar18 + -0x40) =
               *(undefined8 *)((long)puVar20 + lVar18 + -0x40);
          *(undefined8 *)((long)pvVar29 + lVar18 + -0x38) = uVar24;
          *(undefined8 *)((long)pvVar29 + lVar18 + -0x48) = uVar27;
          *(undefined8 *)((long)puVar20 + lVar18 + -0x40) = 0;
          *(undefined8 *)((long)puVar20 + lVar18 + -0x38) = 0;
          *(undefined8 *)((long)puVar20 + lVar18 + -0x48) = 0;
          *(undefined2 *)((long)pvVar29 + lVar18 + -0x30) =
               *(undefined2 *)((long)puVar20 + lVar18 + -0x30);
          uVar24 = *(undefined8 *)((long)puVar20 + lVar18 + -0x18);
          uVar27 = *(undefined8 *)((long)puVar20 + lVar18 + -0x20);
          *(undefined8 *)((long)pvVar29 + lVar18 + -0x28) =
               *(undefined8 *)((long)puVar20 + lVar18 + -0x28);
          *(undefined8 *)((long)pvVar29 + lVar18 + -0x20) = uVar27;
          *(undefined8 *)((long)pvVar29 + lVar18 + -0x18) = uVar24;
          uVar27 = *(undefined8 *)((long)puVar20 + lVar18 + -8);
          *(undefined8 *)((long)puVar20 + lVar18 + -0x28) = 0;
          *(undefined8 *)((long)puVar20 + lVar18 + -0x20) = 0;
          *(undefined8 *)((long)puVar20 + lVar18 + -0x18) = 0;
          *(undefined8 *)((long)pvVar29 + lVar18 + -0x10) =
               *(undefined8 *)((long)puVar20 + lVar18 + -0x10);
          *(undefined8 *)((long)pvVar29 + lVar18 + -8) = uVar27;
          lVar18 = lVar21;
        } while ((long)puVar5 - (long)puVar20 != lVar21);
        puVar5 = *(undefined8 **)(param_1 + 0x20);
        puVar20 = *(undefined8 **)(param_1 + 0x28);
        *(long *)(param_1 + 0x20) = (long)pvVar29 + lVar21;
        *(long *)(param_1 + 0x28) = lVar14;
        *(long *)(param_1 + 0x30) = lVar30;
        while (puVar6 = puVar20, puVar6 != puVar5) {
          if (((*(byte *)(puVar6 + -5) & 1) != 0) && (puVar6[-3] != 0)) {
            FUN_710392eb40(puVar6[-3]);
          }
          puVar20 = puVar6 + -9;
          if (((*(byte *)(puVar6 + -9) & 1) != 0) && (puVar6[-7] != 0)) {
            FUN_710392eb40(puVar6[-7]);
          }
        }
      }
      if (puVar5 != (undefined8 *)0x0) {
        FUN_710392eb40((ulong)puVar5);
      }
    }
    else {
      uVar26 = uVar33;
      if ((uVar33 & 1) != 0) {
        puVar20[7] = 0;
        puVar20[8] = 0;
        *puVar20 = 0;
        puVar20[5] = 0;
        puVar20[6] = 0;
        puVar20[3] = 0;
        puVar20[4] = 0;
        puVar20[1] = 0;
        puVar20[2] = 0;
        puVar20 = (undefined8 *)(*(long *)(param_1 + 0x28) + 0x48);
        uVar26 = uVar33 - 1;
        *(undefined8 **)(param_1 + 0x28) = puVar20;
      }
      if (uVar33 != 1) {
        do {
          puVar20[7] = 0;
          puVar20[8] = 0;
          uVar26 = uVar26 - 2;
          puVar20[5] = 0;
          puVar20[6] = 0;
          *puVar20 = 0;
          puVar20[3] = 0;
          puVar20[4] = 0;
          puVar20[1] = 0;
          puVar20[2] = 0;
          lVar30 = *(long *)(param_1 + 0x28);
          *(long *)(param_1 + 0x28) = lVar30 + 0x48;
          *(undefined8 *)(lVar30 + 0x48) = 0;
          *(undefined8 *)(lVar30 + 0x80) = 0;
          *(undefined8 *)(lVar30 + 0x88) = 0;
          *(undefined8 *)(lVar30 + 0x70) = 0;
          *(undefined8 *)(lVar30 + 0x78) = 0;
          *(undefined8 *)(lVar30 + 0x60) = 0;
          *(undefined8 *)(lVar30 + 0x68) = 0;
          *(undefined8 *)(lVar30 + 0x50) = 0;
          *(undefined8 *)(lVar30 + 0x58) = 0;
          puVar20 = (undefined8 *)(*(long *)(param_1 + 0x28) + 0x48);
          *(undefined8 **)(param_1 + 0x28) = puVar20;
        } while (uVar26 != 0);
      }
    }
  }
  else if (lVar30 * -0x71c71c71c71c71c7 - uVar26 != 0) {
    while (puVar6 = puVar20, puVar5 + uVar26 * 9 != puVar6) {
      if (((*(byte *)(puVar6 + -5) & 1) != 0) && (puVar6[-3] != 0)) {
        FUN_710392eb40(puVar6[-3]);
      }
      puVar20 = puVar6 + -9;
      if (((*(byte *)(puVar6 + -9) & 1) != 0) && (puVar6[-7] != 0)) {
        FUN_710392eb40(puVar6[-7]);
      }
    }
    *(undefined8 **)(param_1 + 0x28) = puVar5 + uVar26 * 9;
  }
  uVar25 = (uint)*pbVar31;
  if ((*pbVar31 - 0xb < 2) && (0 < *(int *)(pbVar31 + 1))) {
    lVar30 = 0;
LAB_710278eb68:
    do {
      iVar12 = (int)lVar30;
      if (iVar12 < 0) {
LAB_710278eba0:
        lVar14 = 0;
        pbVar23 = &DAT_7104742dbb;
      }
      else {
        pbVar23 = &DAT_7104742dbb;
        lVar14 = 0;
        if (uVar25 == 0xb) {
          if (*(int *)(pbVar31 + 1) <= iVar12) goto LAB_710278eba0;
          pbVar23 = pbVar31 + *(int *)(pbVar31 + (long)iVar12 * 4 + 5);
          lVar14 = local_90;
        }
      }
      if ((*pbVar23 == 0xc) && (iVar12 = *(int *)(pbVar23 + 1) + -1, 0 < *(int *)(pbVar23 + 1))) {
        iVar22 = 0;
        do {
          iVar3 = iVar12 + iVar22;
          if (iVar3 < 0) {
            iVar3 = iVar3 + 1;
          }
          iVar3 = iVar3 >> 1;
          uVar26 = *(ulong *)(*(long *)(lVar14 + 0x20) +
                             (ulong)*(uint *)(*(long *)(lVar14 + 0x28) + (long)*(int *)(pbVar23 + 5)
                                             + (long)iVar3 * 8) * 8);
          if (uVar26 == 0x45e237e06) break;
          iVar7 = iVar3 + -1;
          if (uVar26 < 0x45e237e07) {
            iVar22 = iVar3 + 1;
            iVar7 = iVar12;
          }
          iVar12 = iVar7;
        } while (iVar22 <= iVar12);
      }
      std::string::assign((char *)(*plVar2 + lVar30 * 0x48));
      pbVar11 = &DAT_7104742dbb;
      if ((*pbVar23 == 0xc) && (iVar12 = *(int *)(pbVar23 + 1) + -1, 0 < *(int *)(pbVar23 + 1))) {
        iVar22 = 0;
        do {
          iVar3 = iVar12 + iVar22;
          if (iVar3 < 0) {
            iVar3 = iVar3 + 1;
          }
          iVar3 = iVar3 >> 1;
          puVar1 = (uint *)(*(long *)(lVar14 + 0x28) + (long)*(int *)(pbVar23 + 5) + (long)iVar3 * 8
                           );
          uVar26 = *(ulong *)(*(long *)(lVar14 + 0x20) + (ulong)*puVar1 * 8);
          if (uVar26 == 0x734ac33cf) {
            uVar25 = puVar1[1];
            if (-1 < (int)uVar25) {
              pbVar11 = pbVar23 + (int)uVar25;
            }
            break;
          }
          iVar7 = iVar3 + -1;
          if (uVar26 < 0x734ac33d0) {
            iVar22 = iVar3 + 1;
            iVar7 = iVar12;
          }
          iVar12 = iVar7;
        } while (iVar22 <= iVar12);
      }
      switch(*pbVar11) {
      case 1:
      case 3:
        uVar25 = (uint)pbVar11[1];
        break;
      case 2:
        uVar25 = (uint)(char)pbVar11[1];
        break;
      case 4:
        uVar25 = (uint)*(short *)(pbVar11 + 1);
        break;
      case 5:
        uVar25 = (uint)*(ushort *)(pbVar11 + 1);
        break;
      case 6:
      case 7:
        uVar25 = *(uint *)(pbVar11 + 1);
        break;
      default:
        uVar25 = 0;
      }
      *(bool *)(*plVar2 + lVar30 * 0x48 + 0x18) = uVar25 != 0;
      pbVar11 = &DAT_7104742dbb;
      if ((*pbVar23 == 0xc) && (iVar12 = *(int *)(pbVar23 + 1) + -1, 0 < *(int *)(pbVar23 + 1))) {
        iVar22 = 0;
        do {
          iVar3 = iVar12 + iVar22;
          if (iVar3 < 0) {
            iVar3 = iVar3 + 1;
          }
          iVar3 = iVar3 >> 1;
          puVar1 = (uint *)(*(long *)(lVar14 + 0x28) + (long)*(int *)(pbVar23 + 5) + (long)iVar3 * 8
                           );
          uVar26 = *(ulong *)(*(long *)(lVar14 + 0x20) + (ulong)*puVar1 * 8);
          if (uVar26 == 0xe55329823) {
            uVar25 = puVar1[1];
            if (-1 < (int)uVar25) {
              pbVar11 = pbVar23 + (int)uVar25;
            }
            break;
          }
          iVar7 = iVar3 + -1;
          if (uVar26 < 0xe55329824) {
            iVar22 = iVar3 + 1;
            iVar7 = iVar12;
          }
          iVar12 = iVar7;
        } while (iVar22 <= iVar12);
      }
      switch(*pbVar11) {
      case 1:
      case 3:
        uVar25 = (uint)pbVar11[1];
        break;
      case 2:
        uVar25 = (uint)(char)pbVar11[1];
        break;
      case 4:
        uVar25 = (uint)*(short *)(pbVar11 + 1);
        break;
      case 5:
        uVar25 = (uint)*(ushort *)(pbVar11 + 1);
        break;
      case 6:
      case 7:
        uVar25 = *(uint *)(pbVar11 + 1);
        break;
      default:
        uVar25 = 1;
      }
      *(bool *)(*plVar2 + lVar30 * 0x48 + 0x19) = uVar25 != 0;
      if ((*pbVar23 == 0xc) && (iVar12 = *(int *)(pbVar23 + 1) + -1, 0 < *(int *)(pbVar23 + 1))) {
        iVar22 = 0;
        do {
          iVar3 = iVar12 + iVar22;
          if (iVar3 < 0) {
            iVar3 = iVar3 + 1;
          }
          iVar3 = iVar3 >> 1;
          uVar26 = *(ulong *)(*(long *)(lVar14 + 0x20) +
                             (ulong)*(uint *)(*(long *)(lVar14 + 0x28) + (long)*(int *)(pbVar23 + 5)
                                             + (long)iVar3 * 8) * 8);
          if (uVar26 == 0xc32435920) break;
          iVar7 = iVar3 + -1;
          if (uVar26 < 0xc32435921) {
            iVar22 = iVar3 + 1;
            iVar7 = iVar12;
          }
          iVar12 = iVar7;
        } while (iVar22 <= iVar12);
      }
      std::string::assign((char *)(*plVar2 + lVar30 * 0x48 + 0x20));
      pbVar11 = &DAT_7104742dbb;
      if ((*pbVar23 == 0xc) && (iVar12 = *(int *)(pbVar23 + 1) + -1, 0 < *(int *)(pbVar23 + 1))) {
        iVar22 = 0;
        do {
          iVar3 = iVar12 + iVar22;
          if (iVar3 < 0) {
            iVar3 = iVar3 + 1;
          }
          iVar3 = iVar3 >> 1;
          puVar1 = (uint *)(*(long *)(lVar14 + 0x28) + (long)*(int *)(pbVar23 + 5) + (long)iVar3 * 8
                           );
          uVar26 = *(ulong *)(*(long *)(lVar14 + 0x20) + (ulong)*puVar1 * 8);
          if (uVar26 == 0x13f2d58620) {
            uVar25 = puVar1[1];
            if (-1 < (int)uVar25) {
              pbVar11 = pbVar23 + (int)uVar25;
            }
            break;
          }
          iVar7 = iVar3 + -1;
          if (uVar26 < 0x13f2d58621) {
            iVar22 = iVar3 + 1;
            iVar7 = iVar12;
          }
          iVar12 = iVar7;
        } while (iVar22 <= iVar12);
      }
      switch(*pbVar11) {
      case 1:
      case 3:
        uVar25 = (uint)pbVar11[1];
        break;
      case 2:
        uVar25 = (uint)(char)pbVar11[1];
        break;
      case 4:
        uVar25 = (uint)*(short *)(pbVar11 + 1);
        break;
      case 5:
        uVar25 = (uint)*(ushort *)(pbVar11 + 1);
        break;
      case 6:
      case 7:
        uVar25 = *(uint *)(pbVar11 + 1);
        break;
      default:
        uVar25 = 10;
      }
      *(uint *)(*plVar2 + lVar30 * 0x48 + 0x38) = uVar25;
      pbVar11 = &DAT_7104742dbb;
      if ((*pbVar23 == 0xc) && (iVar12 = *(int *)(pbVar23 + 1) + -1, 0 < *(int *)(pbVar23 + 1))) {
        iVar22 = 0;
        do {
          iVar3 = iVar12 + iVar22;
          if (iVar3 < 0) {
            iVar3 = iVar3 + 1;
          }
          iVar3 = iVar3 >> 1;
          puVar1 = (uint *)(*(long *)(lVar14 + 0x28) + (long)*(int *)(pbVar23 + 5) + (long)iVar3 * 8
                           );
          uVar26 = *(ulong *)(*(long *)(lVar14 + 0x20) + (ulong)*puVar1 * 8);
          if (uVar26 == 0x118e058ff5) {
            uVar25 = puVar1[1];
            if (-1 < (int)uVar25) {
              pbVar11 = pbVar23 + (int)uVar25;
            }
            break;
          }
          iVar7 = iVar3 + -1;
          if (uVar26 < 0x118e058ff6) {
            iVar22 = iVar3 + 1;
            iVar7 = iVar12;
          }
          iVar12 = iVar7;
        } while (iVar22 <= iVar12);
      }
      switch(*pbVar11) {
      case 1:
      case 3:
        uVar25 = (uint)pbVar11[1];
        break;
      case 2:
        uVar25 = (uint)(char)pbVar11[1];
        break;
      case 4:
        uVar25 = (uint)*(short *)(pbVar11 + 1);
        break;
      case 5:
        uVar25 = (uint)*(ushort *)(pbVar11 + 1);
        break;
      case 6:
      case 7:
        uVar25 = *(uint *)(pbVar11 + 1);
        break;
      default:
        uVar25 = 0xffffffff;
      }
      *(uint *)(*plVar2 + lVar30 * 0x48 + 0x3c) = uVar25;
      pbVar11 = &DAT_7104742dbb;
      if ((*pbVar23 == 0xc) && (iVar12 = *(int *)(pbVar23 + 1) + -1, 0 < *(int *)(pbVar23 + 1))) {
        iVar22 = 0;
        do {
          iVar3 = iVar12 + iVar22;
          if (iVar3 < 0) {
            iVar3 = iVar3 + 1;
          }
          iVar3 = iVar3 >> 1;
          puVar1 = (uint *)(*(long *)(lVar14 + 0x28) + (long)*(int *)(pbVar23 + 5) + (long)iVar3 * 8
                           );
          uVar26 = *(ulong *)(*(long *)(lVar14 + 0x20) + (ulong)*puVar1 * 8);
          if (uVar26 == 0x1306ba870f) {
            uVar25 = puVar1[1];
            if (-1 < (int)uVar25) {
              pbVar11 = pbVar23 + (int)uVar25;
            }
            break;
          }
          iVar7 = iVar3 + -1;
          if (uVar26 < 0x1306ba8710) {
            iVar22 = iVar3 + 1;
            iVar7 = iVar12;
          }
          iVar12 = iVar7;
        } while (iVar22 <= iVar12);
      }
      switch(*pbVar11) {
      case 1:
      case 3:
        uVar25 = (uint)pbVar11[1];
        break;
      case 2:
        uVar25 = (uint)(char)pbVar11[1];
        break;
      case 4:
        uVar25 = (uint)*(short *)(pbVar11 + 1);
        break;
      case 5:
        uVar25 = (uint)*(ushort *)(pbVar11 + 1);
        break;
      case 6:
      case 7:
        uVar25 = *(uint *)(pbVar11 + 1);
        break;
      default:
        uVar25 = 0xffffffff;
      }
      *(uint *)(*plVar2 + lVar30 * 0x48 + 0x40) = uVar25;
      pbVar11 = &DAT_7104742dbb;
      if ((*pbVar23 == 0xc) && (iVar12 = *(int *)(pbVar23 + 1) + -1, 0 < *(int *)(pbVar23 + 1))) {
        iVar22 = 0;
        do {
          iVar3 = iVar12 + iVar22;
          if (iVar3 < 0) {
            iVar3 = iVar3 + 1;
          }
          iVar3 = iVar3 >> 1;
          puVar1 = (uint *)(*(long *)(lVar14 + 0x28) + (long)*(int *)(pbVar23 + 5) + (long)iVar3 * 8
                           );
          uVar26 = *(ulong *)(*(long *)(lVar14 + 0x20) + (ulong)*puVar1 * 8);
          if (uVar26 == 0x117a6a8eda) {
            uVar25 = puVar1[1];
            if (-1 < (int)uVar25) {
              pbVar11 = pbVar23 + (int)uVar25;
            }
            break;
          }
          iVar7 = iVar3 + -1;
          if (uVar26 < 0x117a6a8edb) {
            iVar22 = iVar3 + 1;
            iVar7 = iVar12;
          }
          iVar12 = iVar7;
        } while (iVar22 <= iVar12);
      }
      switch(*pbVar11) {
      case 1:
      case 3:
        uVar25 = (uint)pbVar11[1];
        break;
      case 2:
        uVar25 = (uint)(char)pbVar11[1];
        break;
      case 4:
        uVar25 = (uint)*(short *)(pbVar11 + 1);
        break;
      case 5:
        uVar25 = (uint)*(ushort *)(pbVar11 + 1);
        break;
      case 6:
      case 7:
        uVar25 = *(uint *)(pbVar11 + 1);
        break;
      default:
        uVar25 = 0xffffffff;
      }
      lVar14 = lVar30 * 0x48;
      lVar30 = lVar30 + 1;
      *(uint *)(*plVar2 + lVar14 + 0x44) = uVar25;
      uVar25 = (uint)*pbVar31;
      if (uVar25 - 0xb < 2) {
        if (*(int *)(pbVar31 + 1) <= lVar30) break;
        goto LAB_710278eb68;
      }
    } while (lVar30 < 0);
  }
  pcVar13 = (char *)param_2[1];
  if ((*pcVar13 == '\f') && (iVar12 = *(int *)(pcVar13 + 1) + -1, 0 < *(int *)(pcVar13 + 1))) {
    lVar30 = *param_2;
    iVar22 = 0;
    pbVar31 = &DAT_7104742dbb;
    do {
      iVar3 = iVar12 + iVar22;
      if (iVar3 < 0) {
        iVar3 = iVar3 + 1;
      }
      iVar3 = iVar3 >> 1;
      puVar1 = (uint *)(*(long *)(lVar30 + 0x28) + (long)*(int *)(pcVar13 + 5) + (long)iVar3 * 8);
      uVar26 = *(ulong *)(*(long *)(lVar30 + 0x20) + (ulong)*puVar1 * 8);
      if (uVar26 == 0xf5706ec00) {
        uVar25 = puVar1[1];
        if ((int)uVar25 < 0) goto LAB_710278f34c;
        pbVar31 = (byte *)(pcVar13 + (int)uVar25);
        goto LAB_710278f358;
      }
      iVar7 = iVar3 + -1;
      if (uVar26 < 0xf5706ec01) {
        iVar22 = iVar3 + 1;
        iVar7 = iVar12;
      }
      iVar12 = iVar7;
    } while (iVar22 <= iVar12);
    lVar30 = 0;
  }
  else {
LAB_710278f34c:
    lVar30 = 0;
    pbVar31 = &DAT_7104742dbb;
  }
LAB_710278f358:
  if (*pbVar31 - 0xb < 2) {
    iVar12 = *(int *)(pbVar31 + 1);
  }
  else {
    iVar12 = 0;
  }
  uVar26 = (ulong)iVar12;
  pvVar29 = *(void **)(param_1 + 0x38);
  puVar20 = *(undefined8 **)(param_1 + 0x40);
  pppplVar28 = (long ****)((long)puVar20 - (long)pvVar29);
  lVar14 = (long)pppplVar28 >> 3;
  plVar2 = (long *)(param_1 + 0x38);
  if ((ulong)(lVar14 * -0x5555555555555555) < uVar26) {
    uVar33 = uVar26 + lVar14 * 0x5555555555555555;
    if ((ulong)((*(long *)(param_1 + 0x48) - (long)puVar20 >> 3) * -0x5555555555555555) < uVar33) {
      if (iVar12 < 0) {
LAB_710278fe30:
                    /* WARNING: Subroutine does not return */
        std::__vector_base_common<true>::__throw_length_error();
      }
      lVar18 = *(long *)(param_1 + 0x48) - (long)pvVar29 >> 3;
      if ((ulong)(lVar18 * -0x5555555555555555) < 0x555555555555555) {
        uVar17 = lVar18 * 0x5555555555555556;
        uVar32 = uVar26;
        if (uVar26 <= uVar17) {
          uVar32 = uVar17;
        }
        if (uVar32 != 0) goto LAB_710278f48c;
        lVar18 = 0;
      }
      else {
        uVar32 = 0xaaaaaaaaaaaaaaa;
LAB_710278f48c:
        ppplVar16 = (long ***)(uVar32 * 0x18);
        if (ppplVar16 == (long ***)0x0) {
          ppplVar16 = (long ***)0x1;
        }
        lVar18 = FUN_710392e290(0x10,ppplVar16,(long ****)param_3,param_4,(long ****)param_5,param_6
                                ,param_7,param_8);
        if (lVar18 == 0) {
          if (DAT_7105332f00 != (long *)0x0) {
            local_64 = 0;
            pppplVar10 = &local_70;
            local_70 = ppplVar16;
            uVar17 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_64);
            if (((uVar17 & 1) != 0) &&
               (lVar18 = FUN_710392e290(0x10,ppplVar16,pppplVar10,param_4,(long ****)param_5,param_6
                                        ,param_7,param_8), lVar18 != 0)) goto LAB_710278f4fc;
          }
          lVar18 = 0;
        }
      }
LAB_710278f4fc:
      pvVar9 = (void *)(lVar18 + lVar14 * 8);
      param_3 = (uint *)(uVar33 * 0x18);
      memset(pvVar9,0,(size_t)param_3);
      lVar14 = SUB168(SEXT816((long)pppplVar28) * SEXT816(-0x2aaaaaaaaaaaaaab),8);
      pvVar9 = (void *)((long)pvVar9 + ((lVar14 >> 2) - (lVar14 >> 0x3f)) * 0x18);
      if (0 < (long)pppplVar28) {
        memcpy(pvVar9,pvVar29,(size_t)pppplVar28);
        param_3 = (uint *)pppplVar28;
      }
      *(void **)(param_1 + 0x38) = pvVar9;
      *(ulong *)(param_1 + 0x40) = lVar18 + uVar26 * 0x18;
      *(ulong *)(param_1 + 0x48) = lVar18 + uVar32 * 0x18;
      if (pvVar29 != (void *)0x0) {
        FUN_710392eb40((ulong)pvVar29);
      }
    }
    else {
      uVar26 = uVar33;
      if ((uVar33 & 1) != 0) {
        puVar20[1] = 0;
        puVar20[2] = 0;
        uVar26 = uVar33 - 1;
        *puVar20 = 0;
        puVar20 = (undefined8 *)(*(long *)(param_1 + 0x40) + 0x18);
        *(undefined8 **)(param_1 + 0x40) = puVar20;
      }
      if (uVar33 != 1) {
        do {
          puVar20[1] = 0;
          puVar20[2] = 0;
          uVar26 = uVar26 - 2;
          *puVar20 = 0;
          lVar14 = *(long *)(param_1 + 0x40);
          *(long *)(param_1 + 0x40) = lVar14 + 0x18;
          *(undefined8 *)(lVar14 + 0x20) = 0;
          *(undefined8 *)(lVar14 + 0x28) = 0;
          *(undefined8 *)(lVar14 + 0x18) = 0;
          puVar20 = (undefined8 *)(*(long *)(param_1 + 0x40) + 0x18);
          *(undefined8 **)(param_1 + 0x40) = puVar20;
        } while (uVar26 != 0);
      }
    }
  }
  else if (lVar14 * -0x5555555555555555 - uVar26 != 0) {
    *(void **)(param_1 + 0x40) = (void *)((long)pvVar29 + uVar26 * 0x18);
  }
  uVar26 = (ulong)*pbVar31;
  if ((*pbVar31 - 0xb < 2) && (0 < *(int *)(pbVar31 + 1))) {
    lVar14 = 0;
    param_3 = &switchD_710278f864::switchdataD_710450aa30;
    param_4 = (byte ****)0x1ce7;
    param_5 = &switchD_710278f790::switchdataD_710450aa14;
LAB_710278f60c:
    do {
      iVar12 = (int)lVar14;
      if (iVar12 < 0) {
LAB_710278f644:
        lVar18 = 0;
        pbVar23 = &DAT_7104742dbb;
      }
      else {
        pbVar23 = &DAT_7104742dbb;
        lVar18 = 0;
        if ((int)uVar26 == 0xb) {
          if (*(int *)(pbVar31 + 1) <= iVar12) goto LAB_710278f644;
          pbVar23 = pbVar31 + *(int *)(pbVar31 + (long)iVar12 * 4 + 5);
          lVar18 = lVar30;
        }
      }
      if ((*pbVar23 == 0xc) && (iVar12 = *(int *)(pbVar23 + 1) + -1, 0 < *(int *)(pbVar23 + 1))) {
        iVar22 = 0;
        do {
          iVar3 = iVar12 + iVar22;
          if (iVar3 < 0) {
            iVar3 = iVar3 + 1;
          }
          iVar3 = iVar3 >> 1;
          puVar1 = (uint *)(*(long *)(lVar18 + 0x28) + (long)*(int *)(pbVar23 + 5) + (long)iVar3 * 8
                           );
          uVar26 = *(ulong *)(*(long *)(lVar18 + 0x20) + (ulong)*puVar1 * 8);
          if (uVar26 == 0xa737452e1) {
            uVar25 = puVar1[1];
            if (-1 < (int)uVar25) {
              pbVar11 = pbVar23 + (int)uVar25;
              lVar21 = lVar18;
              goto LAB_710278f6cc;
            }
            break;
          }
          iVar7 = iVar3 + -1;
          if (uVar26 < 0xa737452e2) {
            iVar22 = iVar3 + 1;
            iVar7 = iVar12;
          }
          iVar12 = iVar7;
        } while (iVar22 <= iVar12);
      }
      lVar21 = 0;
      pbVar11 = &DAT_7104742dbb;
LAB_710278f6cc:
      if (*pbVar11 == 9) {
        uVar27 = *(undefined8 *)(*(long *)(lVar21 + 0x20) + (long)*(int *)(pbVar11 + 1) * 8);
      }
      else {
        uVar27 = 0;
      }
      *(undefined8 *)(*plVar2 + lVar14 * 0x18) = uVar27;
      pbVar11 = &DAT_7104742dbb;
      if ((*pbVar23 == 0xc) && (iVar12 = *(int *)(pbVar23 + 1) + -1, 0 < *(int *)(pbVar23 + 1))) {
        iVar22 = 0;
        do {
          iVar3 = iVar12 + iVar22;
          if (iVar3 < 0) {
            iVar3 = iVar3 + 1;
          }
          iVar3 = iVar3 >> 1;
          puVar1 = (uint *)(*(long *)(lVar18 + 0x28) + (long)*(int *)(pbVar23 + 5) + (long)iVar3 * 8
                           );
          uVar26 = *(ulong *)(*(long *)(lVar18 + 0x20) + (ulong)*puVar1 * 8);
          if (uVar26 == 0x13f2d58620) {
            uVar25 = puVar1[1];
            if (-1 < (int)uVar25) {
              pbVar11 = pbVar23 + (int)uVar25;
            }
            break;
          }
          iVar7 = iVar3 + -1;
          if (uVar26 < 0x13f2d58621) {
            iVar22 = iVar3 + 1;
            iVar7 = iVar12;
          }
          iVar12 = iVar7;
        } while (iVar22 <= iVar12);
      }
      switch(*pbVar11) {
      case 1:
      case 3:
        uVar25 = (uint)pbVar11[1];
        break;
      case 2:
        uVar25 = (uint)(char)pbVar11[1];
        break;
      case 4:
        uVar25 = (uint)*(short *)(pbVar11 + 1);
        break;
      case 5:
        uVar25 = (uint)*(ushort *)(pbVar11 + 1);
        break;
      case 6:
      case 7:
        uVar25 = *(uint *)(pbVar11 + 1);
        break;
      default:
        uVar25 = 0;
      }
      *(uint *)(*plVar2 + lVar14 * 0x18 + 8) = uVar25;
      pbVar11 = &DAT_7104742dbb;
      if ((*pbVar23 == 0xc) && (iVar12 = *(int *)(pbVar23 + 1) + -1, 0 < *(int *)(pbVar23 + 1))) {
        iVar22 = 0;
        do {
          iVar3 = iVar12 + iVar22;
          if (iVar3 < 0) {
            iVar3 = iVar3 + 1;
          }
          iVar3 = iVar3 >> 1;
          puVar1 = (uint *)(*(long *)(lVar18 + 0x28) + (long)*(int *)(pbVar23 + 5) + (long)iVar3 * 8
                           );
          uVar26 = *(ulong *)(*(long *)(lVar18 + 0x20) + (ulong)*puVar1 * 8);
          if (uVar26 == 0x118e058ff5) {
            uVar25 = puVar1[1];
            if (-1 < (int)uVar25) {
              pbVar11 = pbVar23 + (int)uVar25;
            }
            break;
          }
          iVar7 = iVar3 + -1;
          if (uVar26 < 0x118e058ff6) {
            iVar22 = iVar3 + 1;
            iVar7 = iVar12;
          }
          iVar12 = iVar7;
        } while (iVar22 <= iVar12);
      }
      switch(*pbVar11) {
      case 1:
      case 3:
        uVar25 = (uint)pbVar11[1];
        break;
      case 2:
        uVar25 = (uint)(char)pbVar11[1];
        break;
      case 4:
        uVar25 = (uint)*(short *)(pbVar11 + 1);
        break;
      case 5:
        uVar25 = (uint)*(ushort *)(pbVar11 + 1);
        break;
      case 6:
      case 7:
        uVar25 = *(uint *)(pbVar11 + 1);
        break;
      default:
        uVar25 = 0x640;
      }
      *(uint *)(*plVar2 + lVar14 * 0x18 + 0xc) = uVar25;
      pbVar11 = &DAT_7104742dbb;
      if ((*pbVar23 == 0xc) && (iVar12 = *(int *)(pbVar23 + 1) + -1, 0 < *(int *)(pbVar23 + 1))) {
        iVar22 = 0;
        do {
          iVar3 = iVar12 + iVar22;
          if (iVar3 < 0) {
            iVar3 = iVar3 + 1;
          }
          iVar3 = iVar3 >> 1;
          puVar1 = (uint *)(*(long *)(lVar18 + 0x28) + (long)*(int *)(pbVar23 + 5) + (long)iVar3 * 8
                           );
          uVar26 = *(ulong *)(*(long *)(lVar18 + 0x20) + (ulong)*puVar1 * 8);
          if (uVar26 == 0x1306ba870f) {
            uVar25 = puVar1[1];
            if (-1 < (int)uVar25) {
              pbVar11 = pbVar23 + (int)uVar25;
            }
            break;
          }
          iVar7 = iVar3 + -1;
          if (uVar26 < 0x1306ba8710) {
            iVar22 = iVar3 + 1;
            iVar7 = iVar12;
          }
          iVar12 = iVar7;
        } while (iVar22 <= iVar12);
      }
      switch(*pbVar11) {
      case 1:
      case 3:
        uVar25 = (uint)pbVar11[1];
        break;
      case 2:
        uVar25 = (uint)(char)pbVar11[1];
        break;
      case 4:
        uVar25 = (uint)*(short *)(pbVar11 + 1);
        break;
      case 5:
        uVar25 = (uint)*(ushort *)(pbVar11 + 1);
        break;
      case 6:
      case 7:
        uVar25 = *(uint *)(pbVar11 + 1);
        break;
      default:
        uVar25 = 0xffffffff;
      }
      *(uint *)(*plVar2 + lVar14 * 0x18 + 0x10) = uVar25;
      param_8 = &DAT_7104742dbb;
      if ((*pbVar23 == 0xc) && (iVar12 = *(int *)(pbVar23 + 1) + -1, 0 < *(int *)(pbVar23 + 1))) {
        iVar22 = 0;
        do {
          iVar3 = iVar12 + iVar22;
          if (iVar3 < 0) {
            iVar3 = iVar3 + 1;
          }
          iVar3 = iVar3 >> 1;
          puVar1 = (uint *)(*(long *)(lVar18 + 0x28) + (long)*(int *)(pbVar23 + 5) + (long)iVar3 * 8
                           );
          uVar26 = *(ulong *)(*(long *)(lVar18 + 0x20) + (ulong)*puVar1 * 8);
          if (uVar26 == 0x117a6a8eda) {
            uVar25 = puVar1[1];
            if (-1 < (int)uVar25) {
              param_8 = pbVar23 + (int)uVar25;
            }
            break;
          }
          iVar7 = iVar3 + -1;
          if (uVar26 < 0x117a6a8edb) {
            iVar22 = iVar3 + 1;
            iVar7 = iVar12;
          }
          iVar12 = iVar7;
        } while (iVar22 <= iVar12);
      }
      switch(*param_8) {
      case 1:
      case 3:
        uVar25 = (uint)param_8[1];
        break;
      case 2:
        uVar25 = (uint)(char)param_8[1];
        break;
      case 4:
        uVar25 = (uint)*(short *)(param_8 + 1);
        break;
      case 5:
        uVar25 = (uint)*(ushort *)(param_8 + 1);
        break;
      case 6:
      case 7:
        uVar25 = *(uint *)(param_8 + 1);
        break;
      default:
        uVar25 = 0x1ce7;
      }
      lVar18 = lVar14 * 0x18;
      lVar14 = lVar14 + 1;
      *(uint *)(*plVar2 + lVar18 + 0x14) = uVar25;
      uVar26 = (ulong)*pbVar31;
      if (*pbVar31 - 0xb < 2) {
        param_7 = (ulong)*(uint *)(pbVar31 + 1);
        if ((int)*(uint *)(pbVar31 + 1) <= lVar14) break;
        goto LAB_710278f60c;
      }
      param_7 = 0;
    } while (lVar14 < 0);
  }
  pcVar13 = (char *)param_2[1];
  if ((*pcVar13 == '\f') && (iVar12 = *(int *)(pcVar13 + 1) + -1, 0 < *(int *)(pcVar13 + 1))) {
    lVar30 = *param_2;
    iVar22 = 0;
    pbVar31 = &DAT_7104742dbb;
    do {
      iVar3 = iVar12 + iVar22;
      if (iVar3 < 0) {
        iVar3 = iVar3 + 1;
      }
      iVar3 = iVar3 >> 1;
      puVar1 = (uint *)(*(long *)(lVar30 + 0x28) + (long)*(int *)(pcVar13 + 5) + (long)iVar3 * 8);
      uVar33 = *(ulong *)(*(long *)(lVar30 + 0x20) + (ulong)*puVar1 * 8);
      if (uVar33 == 0xef9e3a40a) {
        uVar25 = puVar1[1];
        if ((int)uVar25 < 0) goto LAB_710278fb18;
        pbVar31 = (byte *)(pcVar13 + (int)uVar25);
        goto LAB_710278fb24;
      }
      iVar7 = iVar3 + -1;
      if (uVar33 < 0xef9e3a40b) {
        iVar22 = iVar3 + 1;
        iVar7 = iVar12;
      }
      iVar12 = iVar7;
    } while (iVar22 <= iVar12);
    lVar30 = 0;
  }
  else {
LAB_710278fb18:
    lVar30 = 0;
    pbVar31 = &DAT_7104742dbb;
  }
LAB_710278fb24:
  if (*pbVar31 - 0xb < 2) {
    iVar12 = *(int *)(pbVar31 + 1);
  }
  else {
    iVar12 = 0;
  }
  uVar33 = (ulong)iVar12;
  pvVar29 = *(void **)(param_1 + 0x50);
  puVar20 = *(undefined8 **)(param_1 + 0x58);
  __n = (long)puVar20 - (long)pvVar29;
  uVar32 = (long)__n >> 3;
  if (uVar33 <= uVar32) {
    if (uVar32 != uVar33) {
      *(void **)(param_1 + 0x58) = (void *)((long)pvVar29 + uVar33 * 8);
    }
    goto LAB_710278fcc4;
  }
  uVar17 = uVar33 - uVar32;
  if (uVar17 <= (ulong)(*(long *)(param_1 + 0x60) - (long)puVar20 >> 3)) {
    uVar26 = uVar17;
    if ((uVar17 & 1) != 0) {
      *puVar20 = 0;
      puVar20 = (undefined8 *)(*(long *)(param_1 + 0x58) + 8);
      uVar26 = uVar17 - 1;
      *(undefined8 **)(param_1 + 0x58) = puVar20;
    }
    if (uVar17 != 1) {
      do {
        *puVar20 = 0;
        lVar14 = *(long *)(param_1 + 0x58);
        *(long *)(param_1 + 0x58) = lVar14 + 8;
        *(undefined8 *)(lVar14 + 8) = 0;
        puVar20 = (undefined8 *)(*(long *)(param_1 + 0x58) + 8);
        uVar26 = uVar26 - 2;
        *(undefined8 **)(param_1 + 0x58) = puVar20;
      } while (uVar26 != 0);
    }
    goto LAB_710278fcc4;
  }
  if (iVar12 < 0) {
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_length_error();
  }
  lVar14 = *(long *)(param_1 + 0x60) - (long)pvVar29;
  if ((ulong)(lVar14 >> 3) < 0xfffffffffffffff) {
    uVar19 = lVar14 >> 2;
    uVar15 = uVar33;
    if (uVar33 <= uVar19) {
      uVar15 = uVar19;
    }
    if (uVar15 != 0) {
      if (uVar15 >> 0x3d != 0) {
LAB_710278fba8:
                    /* WARNING: Subroutine does not return */
        abort();
      }
      goto LAB_710278fc14;
    }
LAB_710278fc78:
    pvVar9 = (void *)0x0;
  }
  else {
    uVar15 = 0x1fffffffffffffff;
LAB_710278fc14:
    ppplVar16 = (long ***)(uVar15 * 8);
    if (ppplVar16 == (long ***)0x0) {
      ppplVar16 = (long ***)0x1;
    }
    pvVar9 = (void *)FUN_710392e290(0x10,ppplVar16,(long ****)param_3,param_4,(long ****)param_5,
                                    uVar26,param_7,param_8);
    if (pvVar9 == (void *)0x0) {
      if (DAT_7105332f00 != (long *)0x0) {
        local_64 = 0;
        pppplVar28 = &local_70;
        local_70 = ppplVar16;
        uVar19 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_64);
        if (((uVar19 & 1) != 0) &&
           (pvVar9 = (void *)FUN_710392e290(0x10,ppplVar16,pppplVar28,param_4,(long ****)param_5,
                                            uVar26,param_7,param_8), pvVar9 != (void *)0x0))
        goto LAB_710278fc7c;
      }
      goto LAB_710278fc78;
    }
  }
LAB_710278fc7c:
  memset((void *)((long)pvVar9 + uVar32 * 8),0,uVar17 * 8);
  if (0 < (long)__n) {
    memcpy(pvVar9,pvVar29,__n);
  }
  *(void **)(param_1 + 0x50) = pvVar9;
  *(void **)(param_1 + 0x58) = (void *)((long)pvVar9 + uVar33 * 8);
  *(void **)(param_1 + 0x60) = (void *)((long)pvVar9 + uVar15 * 8);
  if (pvVar29 != (void *)0x0) {
    FUN_710392eb40((ulong)pvVar29);
  }
LAB_710278fcc4:
  uVar25 = (uint)*pbVar31;
  if ((1 < *pbVar31 - 0xb) || (*(int *)(pbVar31 + 1) < 1)) {
    return;
  }
  lVar14 = 0;
  do {
    iVar12 = (int)lVar14;
    if (iVar12 < 0) {
LAB_710278fd34:
      lVar18 = 0;
      pbVar23 = &DAT_7104742dbb;
    }
    else {
      lVar18 = 0;
      pbVar23 = &DAT_7104742dbb;
      if (uVar25 == 0xb) {
        if (*(int *)(pbVar31 + 1) <= iVar12) goto LAB_710278fd34;
        pbVar23 = pbVar31 + *(int *)(pbVar31 + (long)iVar12 * 4 + 5);
        lVar18 = lVar30;
      }
    }
    if ((*pbVar23 == 0xc) && (iVar12 = *(int *)(pbVar23 + 1) + -1, 0 < *(int *)(pbVar23 + 1))) {
      iVar22 = 0;
      do {
        iVar3 = iVar12 + iVar22;
        if (iVar3 < 0) {
          iVar3 = iVar3 + 1;
        }
        iVar3 = iVar3 >> 1;
        puVar1 = (uint *)(*(long *)(lVar18 + 0x28) + (long)*(int *)(pbVar23 + 5) + (long)iVar3 * 8);
        uVar26 = *(ulong *)(*(long *)(lVar18 + 0x20) + (ulong)*puVar1 * 8);
        if (uVar26 == 0xa737452e1) {
          uVar25 = puVar1[1];
          if (-1 < (int)uVar25) {
            pbVar23 = pbVar23 + (int)uVar25;
            goto LAB_710278fdb8;
          }
          break;
        }
        iVar7 = iVar3 + -1;
        if (uVar26 < 0xa737452e2) {
          iVar22 = iVar3 + 1;
          iVar7 = iVar12;
        }
        iVar12 = iVar7;
      } while (iVar22 <= iVar12);
    }
    lVar18 = 0;
    pbVar23 = &DAT_7104742dbb;
LAB_710278fdb8:
    if (*pbVar23 == 9) {
      uVar27 = *(undefined8 *)(*(long *)(lVar18 + 0x20) + (long)*(int *)(pbVar23 + 1) * 8);
    }
    else {
      uVar27 = 0;
    }
    *(undefined8 *)(*(long *)(param_1 + 0x50) + lVar14 * 8) = uVar27;
    uVar25 = (uint)*pbVar31;
    lVar14 = lVar14 + 1;
    if (uVar25 - 0xb < 2) {
      if (*(int *)(pbVar31 + 1) <= lVar14) {
        return;
      }
    }
    else if (-1 < lVar14) {
      return;
    }
  } while( true );
}

