// addr:      710307c2a0
// offset:    0x307c2a0
// name:      FUN_710307c2a0
// mangled:   
// signature: undefined __cdecl FUN_710307c2a0(long param_1, long * param_2, long * * * * param_3, byte * * * * param_4, long * * * * param_5, ulong param_6, undefined8 param_7, undefined8 param_8)


void FUN_710307c2a0(long param_1,long *param_2,long ****param_3,byte ****param_4,long ****param_5,
                   ulong param_6,undefined8 param_7,undefined8 param_8)

{
  uint *puVar1;
  long *plVar2;
  int iVar3;
  uint uVar4;
  byte *pbVar5;
  int iVar6;
  uint uVar7;
  long ****pppplVar8;
  byte ****ppppbVar9;
  uint uVar10;
  int iVar11;
  char *pcVar12;
  long lVar13;
  ulong uVar14;
  ulong uVar15;
  long ***ppplVar16;
  byte *pbVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  undefined8 uVar21;
  undefined8 *puVar22;
  byte ****ppppbVar23;
  byte **ppbVar24;
  undefined8 uVar25;
  int iVar26;
  long lVar27;
  void *pvVar28;
  size_t __n;
  ulong uVar29;
  undefined8 uVar30;
  byte *pbVar31;
  byte *pbVar32;
  undefined8 *puVar33;
  long *plVar34;
  undefined8 *puVar35;
  undefined8 *puVar36;
  long ****pppplVar37;
  void *pvVar38;
  ulong uVar39;
  ulong uVar40;
  byte *pbVar41;
  undefined4 uVar42;
  byte ****local_100;
  long local_d0;
  long local_c8;
  long local_a8;
  long ***local_a0 [2];
  undefined4 local_84;
  
  pcVar12 = (char *)param_2[1];
  if ((*pcVar12 == '\f') && (iVar11 = *(int *)(pcVar12 + 1) + -1, 0 < *(int *)(pcVar12 + 1))) {
    lVar18 = *param_2;
    iVar26 = 0;
    do {
      iVar3 = iVar11 + iVar26;
      if (iVar3 < 0) {
        iVar3 = iVar3 + 1;
      }
      iVar3 = iVar3 >> 1;
      puVar1 = (uint *)(*(long *)(lVar18 + 0x28) + (long)*(int *)(pcVar12 + 5) + (long)iVar3 * 8);
      uVar29 = *(ulong *)(*(long *)(lVar18 + 0x20) + (ulong)*puVar1 * 8);
      if (uVar29 == 0xe9a069166) {
        uVar29 = (ulong)(int)puVar1[1];
        pbVar41 = &DAT_7104742dbb;
        local_a8 = 0;
        if ((uVar29 & 0x80000000) == 0) {
          pbVar41 = (byte *)(pcVar12 + uVar29);
          local_a8 = lVar18;
        }
        goto LAB_710307c36c;
      }
      iVar6 = iVar3 + -1;
      if (uVar29 < 0xe9a069167) {
        iVar26 = iVar3 + 1;
        iVar6 = iVar11;
      }
      iVar11 = iVar6;
    } while (iVar26 <= iVar11);
    local_a8 = 0;
    pbVar41 = &DAT_7104742dbb;
  }
  else {
    local_a8 = 0;
    pbVar41 = &DAT_7104742dbb;
  }
LAB_710307c36c:
  if (*pbVar41 - 0xb < 2) {
    iVar11 = *(int *)(pbVar41 + 1);
  }
  else {
    iVar11 = 0;
  }
  pbVar17 = *(byte **)(param_1 + 8);
  pbVar32 = *(byte **)(param_1 + 0x10);
  uVar29 = (ulong)iVar11;
  lVar18 = (long)pbVar32 - (long)pbVar17 >> 3;
  plVar2 = (long *)(param_1 + 8);
  if ((ulong)(lVar18 * -0x3333333333333333) < uVar29) {
    uVar40 = uVar29 + lVar18 * 0x3333333333333333;
    if ((ulong)((*(long *)(param_1 + 0x18) - (long)pbVar32 >> 3) * -0x3333333333333333) < uVar40) {
      if (iVar11 < 0) goto LAB_7103081f2c;
      lVar13 = *(long *)(param_1 + 0x18) - (long)pbVar17 >> 3;
      if ((ulong)(lVar13 * -0x3333333333333333) < 0x333333333333333) {
        uVar14 = lVar13 * -0x6666666666666666;
        uVar39 = uVar29;
        if (uVar29 <= uVar14) {
          uVar39 = uVar14;
        }
        if (uVar39 != 0) goto LAB_710307c4e0;
        lVar13 = 0;
      }
      else {
        uVar39 = 0x666666666666666;
LAB_710307c4e0:
        ppplVar16 = (long ***)(uVar39 * 0x28);
        if (ppplVar16 == (long ***)0x0) {
          ppplVar16 = (long ***)0x1;
        }
        lVar13 = FUN_710392e290(0x10,ppplVar16,param_3,param_4,param_5,param_6,param_7,param_8);
        if (lVar13 == 0) {
          if (DAT_7105332f00 != (long *)0x0) {
            local_84 = 0;
            pppplVar37 = local_a0;
            local_a0[0] = ppplVar16;
            uVar14 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_84);
            if (((uVar14 & 1) != 0) &&
               (lVar13 = FUN_710392e290(0x10,ppplVar16,pppplVar37,param_4,param_5,param_6,param_7,
                                        param_8), lVar13 != 0)) goto LAB_710307c550;
          }
          lVar13 = 0;
        }
      }
LAB_710307c550:
      puVar36 = (undefined8 *)(lVar13 + lVar18 * 8);
      lVar18 = lVar13 + uVar39 * 0x28;
      param_3 = (long ****)(uVar40 * 0x28);
      memset(puVar36,0,(size_t)param_3);
      lVar13 = lVar13 + uVar29 * 0x28;
      if (pbVar32 == pbVar17) {
        *(undefined8 **)(param_1 + 8) = puVar36;
        *(long *)(param_1 + 0x10) = lVar13;
        *(long *)(param_1 + 0x18) = lVar18;
      }
      else {
        do {
          pbVar31 = pbVar32 + -0x28;
          uVar21 = *(undefined8 *)(pbVar32 + -0x20);
          uVar30 = *(undefined8 *)(pbVar32 + -0x18);
          puVar35 = puVar36 + -5;
          *puVar35 = *(undefined8 *)pbVar31;
          puVar36[-4] = uVar21;
          puVar36[-3] = uVar30;
          pbVar31[0] = 0;
          pbVar31[1] = 0;
          pbVar31[2] = 0;
          pbVar31[3] = 0;
          pbVar31[4] = 0;
          pbVar31[5] = 0;
          pbVar31[6] = 0;
          pbVar31[7] = 0;
          uVar21 = *(undefined8 *)(pbVar32 + -8);
          pbVar32[-0x20] = 0;
          pbVar32[-0x1f] = 0;
          pbVar32[-0x1e] = 0;
          pbVar32[-0x1d] = 0;
          pbVar32[-0x1c] = 0;
          pbVar32[-0x1b] = 0;
          pbVar32[-0x1a] = 0;
          pbVar32[-0x19] = 0;
          pbVar32[-0x18] = 0;
          pbVar32[-0x17] = 0;
          pbVar32[-0x16] = 0;
          pbVar32[-0x15] = 0;
          pbVar32[-0x14] = 0;
          pbVar32[-0x13] = 0;
          pbVar32[-0x12] = 0;
          pbVar32[-0x11] = 0;
          puVar36[-2] = *(undefined8 *)(pbVar32 + -0x10);
          puVar36[-1] = uVar21;
          pbVar32 = pbVar31;
          puVar36 = puVar35;
        } while (pbVar17 != pbVar31);
        pbVar17 = *(byte **)(param_1 + 8);
        pbVar32 = *(byte **)(param_1 + 0x10);
        *(undefined8 **)(param_1 + 8) = puVar35;
        *(long *)(param_1 + 0x10) = lVar13;
        *(long *)(param_1 + 0x18) = lVar18;
        while (pbVar31 = pbVar32, pbVar31 != pbVar17) {
          pbVar32 = pbVar31 + -0x28;
          if (((*pbVar32 & 1) != 0) && (*(ulong *)(pbVar31 + -0x18) != 0)) {
            FUN_710392eb40(*(ulong *)(pbVar31 + -0x18));
          }
        }
      }
      if (pbVar17 != (byte *)0x0) {
        FUN_710392eb40((ulong)pbVar17);
      }
    }
    else {
      uVar29 = uVar40;
      if ((uVar40 & 1) != 0) {
        pbVar32[0x18] = 0;
        pbVar32[0x19] = 0;
        pbVar32[0x1a] = 0;
        pbVar32[0x1b] = 0;
        pbVar32[0x1c] = 0;
        pbVar32[0x1d] = 0;
        pbVar32[0x1e] = 0;
        pbVar32[0x1f] = 0;
        pbVar32[0x20] = 0;
        pbVar32[0x21] = 0;
        pbVar32[0x22] = 0;
        pbVar32[0x23] = 0;
        pbVar32[0x24] = 0;
        pbVar32[0x25] = 0;
        pbVar32[0x26] = 0;
        pbVar32[0x27] = 0;
        pbVar32[0] = 0;
        pbVar32[1] = 0;
        pbVar32[2] = 0;
        pbVar32[3] = 0;
        pbVar32[4] = 0;
        pbVar32[5] = 0;
        pbVar32[6] = 0;
        pbVar32[7] = 0;
        pbVar32[8] = 0;
        pbVar32[9] = 0;
        pbVar32[10] = 0;
        pbVar32[0xb] = 0;
        pbVar32[0xc] = 0;
        pbVar32[0xd] = 0;
        pbVar32[0xe] = 0;
        pbVar32[0xf] = 0;
        pbVar32[0x10] = 0;
        pbVar32[0x11] = 0;
        pbVar32[0x12] = 0;
        pbVar32[0x13] = 0;
        pbVar32[0x14] = 0;
        pbVar32[0x15] = 0;
        pbVar32[0x16] = 0;
        pbVar32[0x17] = 0;
        pbVar32 = (byte *)(*(long *)(param_1 + 0x10) + 0x28);
        uVar29 = uVar40 - 1;
        *(byte **)(param_1 + 0x10) = pbVar32;
      }
      if (uVar40 != 1) {
        do {
          pbVar32[0x18] = 0;
          pbVar32[0x19] = 0;
          pbVar32[0x1a] = 0;
          pbVar32[0x1b] = 0;
          pbVar32[0x1c] = 0;
          pbVar32[0x1d] = 0;
          pbVar32[0x1e] = 0;
          pbVar32[0x1f] = 0;
          pbVar32[0x20] = 0;
          pbVar32[0x21] = 0;
          pbVar32[0x22] = 0;
          pbVar32[0x23] = 0;
          pbVar32[0x24] = 0;
          pbVar32[0x25] = 0;
          pbVar32[0x26] = 0;
          pbVar32[0x27] = 0;
          uVar29 = uVar29 - 2;
          pbVar32[8] = 0;
          pbVar32[9] = 0;
          pbVar32[10] = 0;
          pbVar32[0xb] = 0;
          pbVar32[0xc] = 0;
          pbVar32[0xd] = 0;
          pbVar32[0xe] = 0;
          pbVar32[0xf] = 0;
          pbVar32[0x10] = 0;
          pbVar32[0x11] = 0;
          pbVar32[0x12] = 0;
          pbVar32[0x13] = 0;
          pbVar32[0x14] = 0;
          pbVar32[0x15] = 0;
          pbVar32[0x16] = 0;
          pbVar32[0x17] = 0;
          pbVar32[0] = 0;
          pbVar32[1] = 0;
          pbVar32[2] = 0;
          pbVar32[3] = 0;
          pbVar32[4] = 0;
          pbVar32[5] = 0;
          pbVar32[6] = 0;
          pbVar32[7] = 0;
          lVar18 = *(long *)(param_1 + 0x10);
          *(long *)(param_1 + 0x10) = lVar18 + 0x28;
          *(undefined8 *)(lVar18 + 0x40) = 0;
          *(undefined8 *)(lVar18 + 0x48) = 0;
          *(undefined8 *)(lVar18 + 0x28) = 0;
          *(undefined8 *)(lVar18 + 0x30) = 0;
          *(undefined8 *)(lVar18 + 0x38) = 0;
          pbVar32 = (byte *)(*(long *)(param_1 + 0x10) + 0x28);
          *(byte **)(param_1 + 0x10) = pbVar32;
        } while (uVar29 != 0);
      }
    }
  }
  else if (lVar18 * -0x3333333333333333 - uVar29 != 0) {
    while (pbVar31 = pbVar32, pbVar17 + uVar29 * 0x28 != pbVar31) {
      pbVar32 = pbVar31 + -0x28;
      if (((*pbVar32 & 1) != 0) && (*(ulong *)(pbVar31 + -0x18) != 0)) {
        FUN_710392eb40(*(ulong *)(pbVar31 + -0x18));
      }
    }
    *(byte **)(param_1 + 0x10) = pbVar17 + uVar29 * 0x28;
  }
  uVar10 = (uint)*pbVar41;
  if ((*pbVar41 - 0xb < 2) && (0 < *(int *)(pbVar41 + 1))) {
    lVar18 = 0;
LAB_710307c670:
    do {
      iVar11 = (int)lVar18;
      if (iVar11 < 0) {
LAB_710307c6a8:
        lVar13 = 0;
        pbVar32 = &DAT_7104742dbb;
      }
      else {
        lVar13 = 0;
        pbVar32 = &DAT_7104742dbb;
        if (uVar10 == 0xb) {
          if (*(int *)(pbVar41 + 1) <= iVar11) goto LAB_710307c6a8;
          pbVar32 = pbVar41 + *(int *)(pbVar41 + (long)iVar11 * 4 + 5);
          lVar13 = local_a8;
        }
      }
      if ((*pbVar32 == 0xc) && (iVar11 = *(int *)(pbVar32 + 1) + -1, 0 < *(int *)(pbVar32 + 1))) {
        iVar26 = 0;
        do {
          iVar3 = iVar11 + iVar26;
          if (iVar3 < 0) {
            iVar3 = iVar3 + 1;
          }
          iVar3 = iVar3 >> 1;
          uVar29 = *(ulong *)(*(long *)(lVar13 + 0x20) +
                             (ulong)*(uint *)(*(long *)(lVar13 + 0x28) + (long)*(int *)(pbVar32 + 5)
                                             + (long)iVar3 * 8) * 8);
          if (uVar29 == 0xd5103debc) break;
          iVar6 = iVar3 + -1;
          if (uVar29 < 0xd5103debd) {
            iVar26 = iVar3 + 1;
            iVar6 = iVar11;
          }
          iVar11 = iVar6;
        } while (iVar26 <= iVar11);
      }
      std::string::assign((char *)(*plVar2 + lVar18 * 0x28));
      pbVar17 = &DAT_7104742dbb;
      if ((*pbVar32 == 0xc) && (iVar11 = *(int *)(pbVar32 + 1) + -1, 0 < *(int *)(pbVar32 + 1))) {
        iVar26 = 0;
        do {
          iVar3 = iVar11 + iVar26;
          if (iVar3 < 0) {
            iVar3 = iVar3 + 1;
          }
          iVar3 = iVar3 >> 1;
          puVar1 = (uint *)(*(long *)(lVar13 + 0x28) + (long)*(int *)(pbVar32 + 5) + (long)iVar3 * 8
                           );
          uVar29 = *(ulong *)(*(long *)(lVar13 + 0x20) + (ulong)*puVar1 * 8);
          if (uVar29 == 0xbc0ad263c) {
            uVar10 = puVar1[1];
            if (-1 < (int)uVar10) {
              pbVar17 = pbVar32 + (int)uVar10;
            }
            break;
          }
          iVar6 = iVar3 + -1;
          if (uVar29 < 0xbc0ad263d) {
            iVar26 = iVar3 + 1;
            iVar6 = iVar11;
          }
          iVar11 = iVar6;
        } while (iVar26 <= iVar11);
      }
      uVar42 = 0;
      if (*pbVar17 == 8) {
        uVar42 = *(undefined4 *)(pbVar17 + 1);
      }
      *(undefined4 *)(*plVar2 + lVar18 * 0x28 + 0x18) = uVar42;
      pbVar17 = &DAT_7104742dbb;
      if ((*pbVar32 == 0xc) && (iVar11 = *(int *)(pbVar32 + 1) + -1, 0 < *(int *)(pbVar32 + 1))) {
        iVar26 = 0;
        do {
          iVar3 = iVar11 + iVar26;
          if (iVar3 < 0) {
            iVar3 = iVar3 + 1;
          }
          iVar3 = iVar3 >> 1;
          puVar1 = (uint *)(*(long *)(lVar13 + 0x28) + (long)*(int *)(pbVar32 + 5) + (long)iVar3 * 8
                           );
          uVar29 = *(ulong *)(*(long *)(lVar13 + 0x20) + (ulong)*puVar1 * 8);
          if (uVar29 == 0xa381ad7fa) {
            uVar10 = puVar1[1];
            if (-1 < (int)uVar10) {
              pbVar17 = pbVar32 + (int)uVar10;
            }
            break;
          }
          iVar6 = iVar3 + -1;
          if (uVar29 < 0xa381ad7fb) {
            iVar26 = iVar3 + 1;
            iVar6 = iVar11;
          }
          iVar11 = iVar6;
        } while (iVar26 <= iVar11);
      }
      uVar42 = 0x4627d000;
      if (*pbVar17 == 8) {
        uVar42 = *(undefined4 *)(pbVar17 + 1);
      }
      *(undefined4 *)(*plVar2 + lVar18 * 0x28 + 0x1c) = uVar42;
      pbVar17 = &DAT_7104742dbb;
      if ((*pbVar32 == 0xc) && (iVar11 = *(int *)(pbVar32 + 1) + -1, 0 < *(int *)(pbVar32 + 1))) {
        iVar26 = 0;
        do {
          iVar3 = iVar11 + iVar26;
          if (iVar3 < 0) {
            iVar3 = iVar3 + 1;
          }
          iVar3 = iVar3 >> 1;
          puVar1 = (uint *)(*(long *)(lVar13 + 0x28) + (long)*(int *)(pbVar32 + 5) + (long)iVar3 * 8
                           );
          uVar29 = *(ulong *)(*(long *)(lVar13 + 0x20) + (ulong)*puVar1 * 8);
          if (uVar29 == 0x1115e9b9f4) {
            uVar10 = puVar1[1];
            if (-1 < (int)uVar10) {
              pbVar17 = pbVar32 + (int)uVar10;
            }
            break;
          }
          iVar6 = iVar3 + -1;
          if (uVar29 < 0x1115e9b9f5) {
            iVar26 = iVar3 + 1;
            iVar6 = iVar11;
          }
          iVar11 = iVar6;
        } while (iVar26 <= iVar11);
      }
      switch(*pbVar17) {
      case 1:
      case 3:
        uVar10 = (uint)pbVar17[1];
        break;
      case 2:
        uVar10 = (uint)(char)pbVar17[1];
        break;
      case 4:
        uVar10 = (uint)*(short *)(pbVar17 + 1);
        break;
      case 5:
        uVar10 = (uint)*(ushort *)(pbVar17 + 1);
        break;
      case 6:
      case 7:
        uVar10 = *(uint *)(pbVar17 + 1);
        break;
      default:
        uVar10 = 1;
      }
      *(bool *)(*plVar2 + lVar18 * 0x28 + 0x20) = uVar10 != 0;
      pbVar17 = &DAT_7104742dbb;
      if ((*pbVar32 == 0xc) && (iVar11 = *(int *)(pbVar32 + 1) + -1, 0 < *(int *)(pbVar32 + 1))) {
        iVar26 = 0;
        do {
          iVar3 = iVar11 + iVar26;
          if (iVar3 < 0) {
            iVar3 = iVar3 + 1;
          }
          iVar3 = iVar3 >> 1;
          puVar1 = (uint *)(*(long *)(lVar13 + 0x28) + (long)*(int *)(pbVar32 + 5) + (long)iVar3 * 8
                           );
          uVar29 = *(ulong *)(*(long *)(lVar13 + 0x20) + (ulong)*puVar1 * 8);
          if (uVar29 == 0xbbe16da93) {
            uVar10 = puVar1[1];
            if (-1 < (int)uVar10) {
              pbVar17 = pbVar32 + (int)uVar10;
            }
            break;
          }
          iVar6 = iVar3 + -1;
          if (uVar29 < 0xbbe16da94) {
            iVar26 = iVar3 + 1;
            iVar6 = iVar11;
          }
          iVar11 = iVar6;
        } while (iVar26 <= iVar11);
      }
      uVar42 = 0x43848000;
      if (*pbVar17 == 8) {
        uVar42 = *(undefined4 *)(pbVar17 + 1);
      }
      lVar13 = lVar18 * 0x28;
      lVar18 = lVar18 + 1;
      *(undefined4 *)(*plVar2 + lVar13 + 0x24) = uVar42;
      uVar10 = (uint)*pbVar41;
      if (uVar10 - 0xb < 2) {
        if (*(int *)(pbVar41 + 1) <= lVar18) break;
        goto LAB_710307c670;
      }
    } while (lVar18 < 0);
  }
  pcVar12 = (char *)param_2[1];
  if ((*pcVar12 == '\f') && (iVar11 = *(int *)(pcVar12 + 1) + -1, 0 < *(int *)(pcVar12 + 1))) {
    lVar18 = *param_2;
    iVar26 = 0;
    pbVar41 = &DAT_7104742dbb;
    do {
      iVar3 = iVar11 + iVar26;
      if (iVar3 < 0) {
        iVar3 = iVar3 + 1;
      }
      iVar3 = iVar3 >> 1;
      puVar1 = (uint *)(*(long *)(lVar18 + 0x28) + (long)*(int *)(pcVar12 + 5) + (long)iVar3 * 8);
      uVar29 = *(ulong *)(*(long *)(lVar18 + 0x20) + (ulong)*puVar1 * 8);
      if (uVar29 == 0x107c6c18d4) {
        uVar10 = puVar1[1];
        if ((int)uVar10 < 0) goto LAB_710307cb04;
        pbVar41 = (byte *)(pcVar12 + (int)uVar10);
        goto LAB_710307cb10;
      }
      iVar6 = iVar3 + -1;
      if (uVar29 < 0x107c6c18d5) {
        iVar26 = iVar3 + 1;
        iVar6 = iVar11;
      }
      iVar11 = iVar6;
    } while (iVar26 <= iVar11);
    lVar18 = 0;
  }
  else {
LAB_710307cb04:
    lVar18 = 0;
    pbVar41 = &DAT_7104742dbb;
  }
LAB_710307cb10:
  if (*pbVar41 - 0xb < 2) {
    iVar11 = *(int *)(pbVar41 + 1);
  }
  else {
    iVar11 = 0;
  }
  uVar29 = (ulong)iVar11;
  plVar2 = (long *)(param_1 + 0x20);
  uVar40 = (long)*(byte **)(param_1 + 0x28) - *(long *)(param_1 + 0x20) >> 5;
  if (uVar40 < uVar29) {
    FUN_7103081f40(plVar2,uVar29 - uVar40,param_3,param_4,param_5,param_6,0xbc0ad263c,0xa381ad7fa);
  }
  else if (uVar40 != uVar29) {
    pbVar32 = (byte *)(*(long *)(param_1 + 0x20) + uVar29 * 0x20);
    pbVar17 = *(byte **)(param_1 + 0x28);
    while (pbVar31 = pbVar17, pbVar32 != pbVar31) {
      pbVar17 = pbVar31 + -0x20;
      if (((*pbVar17 & 1) != 0) && (*(ulong *)(pbVar31 + -0x10) != 0)) {
        FUN_710392eb40(*(ulong *)(pbVar31 + -0x10));
      }
    }
    *(byte **)(param_1 + 0x28) = pbVar32;
  }
  uVar10 = (uint)*pbVar41;
  if ((*pbVar41 - 0xb < 2) && (0 < *(int *)(pbVar41 + 1))) {
    lVar13 = 0;
LAB_710307cbfc:
    do {
      iVar11 = (int)lVar13;
      if (iVar11 < 0) {
LAB_710307cc34:
        lVar27 = 0;
        pbVar32 = &DAT_7104742dbb;
      }
      else {
        pbVar32 = &DAT_7104742dbb;
        lVar27 = 0;
        if (uVar10 == 0xb) {
          if (*(int *)(pbVar41 + 1) <= iVar11) goto LAB_710307cc34;
          pbVar32 = pbVar41 + *(int *)(pbVar41 + (long)iVar11 * 4 + 5);
          lVar27 = lVar18;
        }
      }
      if ((*pbVar32 == 0xc) && (iVar11 = *(int *)(pbVar32 + 1) + -1, 0 < *(int *)(pbVar32 + 1))) {
        iVar26 = 0;
        do {
          iVar3 = iVar11 + iVar26;
          if (iVar3 < 0) {
            iVar3 = iVar3 + 1;
          }
          iVar3 = iVar3 >> 1;
          uVar29 = *(ulong *)(*(long *)(lVar27 + 0x20) +
                             (ulong)*(uint *)(*(long *)(lVar27 + 0x28) + (long)*(int *)(pbVar32 + 5)
                                             + (long)iVar3 * 8) * 8);
          if (uVar29 == 0xd5103debc) break;
          iVar6 = iVar3 + -1;
          if (uVar29 < 0xd5103debd) {
            iVar26 = iVar3 + 1;
            iVar6 = iVar11;
          }
          iVar11 = iVar6;
        } while (iVar26 <= iVar11);
      }
      std::string::assign((char *)(*plVar2 + lVar13 * 0x20));
      pbVar17 = &DAT_7104742dbb;
      if ((*pbVar32 == 0xc) && (iVar11 = *(int *)(pbVar32 + 1) + -1, 0 < *(int *)(pbVar32 + 1))) {
        iVar26 = 0;
        do {
          iVar3 = iVar11 + iVar26;
          if (iVar3 < 0) {
            iVar3 = iVar3 + 1;
          }
          iVar3 = iVar3 >> 1;
          puVar1 = (uint *)(*(long *)(lVar27 + 0x28) + (long)*(int *)(pbVar32 + 5) + (long)iVar3 * 8
                           );
          uVar29 = *(ulong *)(*(long *)(lVar27 + 0x20) + (ulong)*puVar1 * 8);
          if (uVar29 == 0xbc0ad263c) {
            uVar10 = puVar1[1];
            if (-1 < (int)uVar10) {
              pbVar17 = pbVar32 + (int)uVar10;
            }
            break;
          }
          iVar6 = iVar3 + -1;
          if (uVar29 < 0xbc0ad263d) {
            iVar26 = iVar3 + 1;
            iVar6 = iVar11;
          }
          iVar11 = iVar6;
        } while (iVar26 <= iVar11);
      }
      uVar42 = 0;
      if (*pbVar17 == 8) {
        uVar42 = *(undefined4 *)(pbVar17 + 1);
      }
      *(undefined4 *)(*plVar2 + lVar13 * 0x20 + 0x18) = uVar42;
      pbVar17 = &DAT_7104742dbb;
      if ((*pbVar32 == 0xc) && (iVar11 = *(int *)(pbVar32 + 1) + -1, 0 < *(int *)(pbVar32 + 1))) {
        iVar26 = 0;
        do {
          iVar3 = iVar11 + iVar26;
          if (iVar3 < 0) {
            iVar3 = iVar3 + 1;
          }
          iVar3 = iVar3 >> 1;
          puVar1 = (uint *)(*(long *)(lVar27 + 0x28) + (long)*(int *)(pbVar32 + 5) + (long)iVar3 * 8
                           );
          uVar29 = *(ulong *)(*(long *)(lVar27 + 0x20) + (ulong)*puVar1 * 8);
          if (uVar29 == 0xa381ad7fa) {
            uVar10 = puVar1[1];
            if (-1 < (int)uVar10) {
              pbVar17 = pbVar32 + (int)uVar10;
            }
            break;
          }
          iVar6 = iVar3 + -1;
          if (uVar29 < 0xa381ad7fb) {
            iVar26 = iVar3 + 1;
            iVar6 = iVar11;
          }
          iVar11 = iVar6;
        } while (iVar26 <= iVar11);
      }
      uVar42 = 0x46abe000;
      if (*pbVar17 == 8) {
        uVar42 = *(undefined4 *)(pbVar17 + 1);
      }
      lVar27 = lVar13 * 0x20;
      lVar13 = lVar13 + 1;
      *(undefined4 *)(*plVar2 + lVar27 + 0x1c) = uVar42;
      uVar10 = (uint)*pbVar41;
      if (uVar10 - 0xb < 2) {
        if (*(int *)(pbVar41 + 1) <= lVar13) break;
        goto LAB_710307cbfc;
      }
    } while (lVar13 < 0);
  }
  pcVar12 = (char *)param_2[1];
  if ((*pcVar12 == '\f') && (iVar11 = *(int *)(pcVar12 + 1) + -1, 0 < *(int *)(pcVar12 + 1))) {
    lVar18 = *param_2;
    iVar26 = 0;
    pbVar41 = &DAT_7104742dbb;
    do {
      iVar3 = iVar11 + iVar26;
      if (iVar3 < 0) {
        iVar3 = iVar3 + 1;
      }
      iVar3 = iVar3 >> 1;
      puVar1 = (uint *)(*(long *)(lVar18 + 0x28) + (long)*(int *)(pcVar12 + 5) + (long)iVar3 * 8);
      uVar29 = *(ulong *)(*(long *)(lVar18 + 0x20) + (ulong)*puVar1 * 8);
      if (uVar29 == 0x184d0d98aa) {
        uVar10 = puVar1[1];
        if ((int)uVar10 < 0) goto LAB_710307cf08;
        pbVar41 = (byte *)(pcVar12 + (int)uVar10);
        goto LAB_710307cf14;
      }
      iVar6 = iVar3 + -1;
      if (uVar29 < 0x184d0d98ab) {
        iVar26 = iVar3 + 1;
        iVar6 = iVar11;
      }
      iVar11 = iVar6;
    } while (iVar26 <= iVar11);
    lVar18 = 0;
  }
  else {
LAB_710307cf08:
    lVar18 = 0;
    pbVar41 = &DAT_7104742dbb;
  }
LAB_710307cf14:
  if (*pbVar41 - 0xb < 2) {
    iVar11 = *(int *)(pbVar41 + 1);
  }
  else {
    iVar11 = 0;
  }
  uVar29 = (ulong)iVar11;
  plVar2 = (long *)(param_1 + 0x38);
  uVar40 = (long)*(byte **)(param_1 + 0x40) - *(long *)(param_1 + 0x38) >> 5;
  if (uVar40 < uVar29) {
    FUN_7103081f40(plVar2,uVar29 - uVar40,param_3,param_4,param_5,param_6,0xbc0ad263c,0xa381ad7fa);
  }
  else if (uVar40 != uVar29) {
    pbVar32 = (byte *)(*(long *)(param_1 + 0x38) + uVar29 * 0x20);
    pbVar17 = *(byte **)(param_1 + 0x40);
    while (pbVar31 = pbVar17, pbVar32 != pbVar31) {
      pbVar17 = pbVar31 + -0x20;
      if (((*pbVar17 & 1) != 0) && (*(ulong *)(pbVar31 + -0x10) != 0)) {
        FUN_710392eb40(*(ulong *)(pbVar31 + -0x10));
      }
    }
    *(byte **)(param_1 + 0x40) = pbVar32;
  }
  uVar10 = (uint)*pbVar41;
  if ((*pbVar41 - 0xb < 2) && (0 < *(int *)(pbVar41 + 1))) {
    lVar13 = 0;
LAB_710307d000:
    do {
      iVar11 = (int)lVar13;
      if (iVar11 < 0) {
LAB_710307d038:
        lVar27 = 0;
        pbVar32 = &DAT_7104742dbb;
      }
      else {
        pbVar32 = &DAT_7104742dbb;
        lVar27 = 0;
        if (uVar10 == 0xb) {
          if (*(int *)(pbVar41 + 1) <= iVar11) goto LAB_710307d038;
          pbVar32 = pbVar41 + *(int *)(pbVar41 + (long)iVar11 * 4 + 5);
          lVar27 = lVar18;
        }
      }
      if ((*pbVar32 == 0xc) && (iVar11 = *(int *)(pbVar32 + 1) + -1, 0 < *(int *)(pbVar32 + 1))) {
        iVar26 = 0;
        do {
          iVar3 = iVar11 + iVar26;
          if (iVar3 < 0) {
            iVar3 = iVar3 + 1;
          }
          iVar3 = iVar3 >> 1;
          uVar29 = *(ulong *)(*(long *)(lVar27 + 0x20) +
                             (ulong)*(uint *)(*(long *)(lVar27 + 0x28) + (long)*(int *)(pbVar32 + 5)
                                             + (long)iVar3 * 8) * 8);
          if (uVar29 == 0xd5103debc) break;
          iVar6 = iVar3 + -1;
          if (uVar29 < 0xd5103debd) {
            iVar26 = iVar3 + 1;
            iVar6 = iVar11;
          }
          iVar11 = iVar6;
        } while (iVar26 <= iVar11);
      }
      std::string::assign((char *)(*plVar2 + lVar13 * 0x20));
      pbVar17 = &DAT_7104742dbb;
      if ((*pbVar32 == 0xc) && (iVar11 = *(int *)(pbVar32 + 1) + -1, 0 < *(int *)(pbVar32 + 1))) {
        iVar26 = 0;
        do {
          iVar3 = iVar11 + iVar26;
          if (iVar3 < 0) {
            iVar3 = iVar3 + 1;
          }
          iVar3 = iVar3 >> 1;
          puVar1 = (uint *)(*(long *)(lVar27 + 0x28) + (long)*(int *)(pbVar32 + 5) + (long)iVar3 * 8
                           );
          uVar29 = *(ulong *)(*(long *)(lVar27 + 0x20) + (ulong)*puVar1 * 8);
          if (uVar29 == 0xbc0ad263c) {
            uVar10 = puVar1[1];
            if (-1 < (int)uVar10) {
              pbVar17 = pbVar32 + (int)uVar10;
            }
            break;
          }
          iVar6 = iVar3 + -1;
          if (uVar29 < 0xbc0ad263d) {
            iVar26 = iVar3 + 1;
            iVar6 = iVar11;
          }
          iVar11 = iVar6;
        } while (iVar26 <= iVar11);
      }
      uVar42 = 0;
      if (*pbVar17 == 8) {
        uVar42 = *(undefined4 *)(pbVar17 + 1);
      }
      *(undefined4 *)(*plVar2 + lVar13 * 0x20 + 0x18) = uVar42;
      pbVar17 = &DAT_7104742dbb;
      if ((*pbVar32 == 0xc) && (iVar11 = *(int *)(pbVar32 + 1) + -1, 0 < *(int *)(pbVar32 + 1))) {
        iVar26 = 0;
        do {
          iVar3 = iVar11 + iVar26;
          if (iVar3 < 0) {
            iVar3 = iVar3 + 1;
          }
          iVar3 = iVar3 >> 1;
          puVar1 = (uint *)(*(long *)(lVar27 + 0x28) + (long)*(int *)(pbVar32 + 5) + (long)iVar3 * 8
                           );
          uVar29 = *(ulong *)(*(long *)(lVar27 + 0x20) + (ulong)*puVar1 * 8);
          if (uVar29 == 0xa381ad7fa) {
            uVar10 = puVar1[1];
            if (-1 < (int)uVar10) {
              pbVar17 = pbVar32 + (int)uVar10;
            }
            break;
          }
          iVar6 = iVar3 + -1;
          if (uVar29 < 0xa381ad7fb) {
            iVar26 = iVar3 + 1;
            iVar6 = iVar11;
          }
          iVar11 = iVar6;
        } while (iVar26 <= iVar11);
      }
      uVar42 = 0x46abe000;
      if (*pbVar17 == 8) {
        uVar42 = *(undefined4 *)(pbVar17 + 1);
      }
      lVar27 = lVar13 * 0x20;
      lVar13 = lVar13 + 1;
      *(undefined4 *)(*plVar2 + lVar27 + 0x1c) = uVar42;
      uVar10 = (uint)*pbVar41;
      if (uVar10 - 0xb < 2) {
        if (*(int *)(pbVar41 + 1) <= lVar13) break;
        goto LAB_710307d000;
      }
    } while (lVar13 < 0);
  }
  pcVar12 = (char *)param_2[1];
  if ((*pcVar12 == '\f') && (iVar11 = *(int *)(pcVar12 + 1) + -1, 0 < *(int *)(pcVar12 + 1))) {
    lVar18 = *param_2;
    iVar26 = 0;
    pbVar41 = &DAT_7104742dbb;
    do {
      iVar3 = iVar11 + iVar26;
      if (iVar3 < 0) {
        iVar3 = iVar3 + 1;
      }
      iVar3 = iVar3 >> 1;
      puVar1 = (uint *)(*(long *)(lVar18 + 0x28) + (long)*(int *)(pcVar12 + 5) + (long)iVar3 * 8);
      uVar29 = *(ulong *)(*(long *)(lVar18 + 0x20) + (ulong)*puVar1 * 8);
      if (uVar29 == 0x11320c0d7b) {
        uVar10 = puVar1[1];
        if ((int)uVar10 < 0) goto LAB_710307d30c;
        pbVar41 = (byte *)(pcVar12 + (int)uVar10);
        goto LAB_710307d318;
      }
      iVar6 = iVar3 + -1;
      if (uVar29 < 0x11320c0d7c) {
        iVar26 = iVar3 + 1;
        iVar6 = iVar11;
      }
      iVar11 = iVar6;
    } while (iVar26 <= iVar11);
    lVar18 = 0;
  }
  else {
LAB_710307d30c:
    lVar18 = 0;
    pbVar41 = &DAT_7104742dbb;
  }
LAB_710307d318:
  if (*pbVar41 - 0xb < 2) {
    iVar11 = *(int *)(pbVar41 + 1);
  }
  else {
    iVar11 = 0;
  }
  uVar29 = (ulong)iVar11;
  plVar2 = (long *)(param_1 + 0x50);
  uVar40 = (long)*(byte **)(param_1 + 0x58) - *(long *)(param_1 + 0x50) >> 5;
  if (uVar40 < uVar29) {
    FUN_7103081f40(plVar2,uVar29 - uVar40,param_3,param_4,param_5,param_6,0xbc0ad263c,0xa381ad7fa);
  }
  else if (uVar40 != uVar29) {
    pbVar32 = (byte *)(*(long *)(param_1 + 0x50) + uVar29 * 0x20);
    pbVar17 = *(byte **)(param_1 + 0x58);
    while (pbVar31 = pbVar17, pbVar32 != pbVar31) {
      pbVar17 = pbVar31 + -0x20;
      if (((*pbVar17 & 1) != 0) && (*(ulong *)(pbVar31 + -0x10) != 0)) {
        FUN_710392eb40(*(ulong *)(pbVar31 + -0x10));
      }
    }
    *(byte **)(param_1 + 0x58) = pbVar32;
  }
  uVar10 = (uint)*pbVar41;
  if ((*pbVar41 - 0xb < 2) && (0 < *(int *)(pbVar41 + 1))) {
    lVar13 = 0;
LAB_710307d404:
    do {
      iVar11 = (int)lVar13;
      if (iVar11 < 0) {
LAB_710307d43c:
        lVar27 = 0;
        pbVar32 = &DAT_7104742dbb;
      }
      else {
        pbVar32 = &DAT_7104742dbb;
        lVar27 = 0;
        if (uVar10 == 0xb) {
          if (*(int *)(pbVar41 + 1) <= iVar11) goto LAB_710307d43c;
          pbVar32 = pbVar41 + *(int *)(pbVar41 + (long)iVar11 * 4 + 5);
          lVar27 = lVar18;
        }
      }
      if ((*pbVar32 == 0xc) && (iVar11 = *(int *)(pbVar32 + 1) + -1, 0 < *(int *)(pbVar32 + 1))) {
        iVar26 = 0;
        do {
          iVar3 = iVar11 + iVar26;
          if (iVar3 < 0) {
            iVar3 = iVar3 + 1;
          }
          iVar3 = iVar3 >> 1;
          uVar29 = *(ulong *)(*(long *)(lVar27 + 0x20) +
                             (ulong)*(uint *)(*(long *)(lVar27 + 0x28) + (long)*(int *)(pbVar32 + 5)
                                             + (long)iVar3 * 8) * 8);
          if (uVar29 == 0xd5103debc) break;
          iVar6 = iVar3 + -1;
          if (uVar29 < 0xd5103debd) {
            iVar26 = iVar3 + 1;
            iVar6 = iVar11;
          }
          iVar11 = iVar6;
        } while (iVar26 <= iVar11);
      }
      std::string::assign((char *)(*plVar2 + lVar13 * 0x20));
      pbVar17 = &DAT_7104742dbb;
      if ((*pbVar32 == 0xc) && (iVar11 = *(int *)(pbVar32 + 1) + -1, 0 < *(int *)(pbVar32 + 1))) {
        iVar26 = 0;
        do {
          iVar3 = iVar11 + iVar26;
          if (iVar3 < 0) {
            iVar3 = iVar3 + 1;
          }
          iVar3 = iVar3 >> 1;
          puVar1 = (uint *)(*(long *)(lVar27 + 0x28) + (long)*(int *)(pbVar32 + 5) + (long)iVar3 * 8
                           );
          uVar29 = *(ulong *)(*(long *)(lVar27 + 0x20) + (ulong)*puVar1 * 8);
          if (uVar29 == 0xbc0ad263c) {
            uVar10 = puVar1[1];
            if (-1 < (int)uVar10) {
              pbVar17 = pbVar32 + (int)uVar10;
            }
            break;
          }
          iVar6 = iVar3 + -1;
          if (uVar29 < 0xbc0ad263d) {
            iVar26 = iVar3 + 1;
            iVar6 = iVar11;
          }
          iVar11 = iVar6;
        } while (iVar26 <= iVar11);
      }
      uVar42 = 0;
      if (*pbVar17 == 8) {
        uVar42 = *(undefined4 *)(pbVar17 + 1);
      }
      *(undefined4 *)(*plVar2 + lVar13 * 0x20 + 0x18) = uVar42;
      pbVar17 = &DAT_7104742dbb;
      if ((*pbVar32 == 0xc) && (iVar11 = *(int *)(pbVar32 + 1) + -1, 0 < *(int *)(pbVar32 + 1))) {
        iVar26 = 0;
        do {
          iVar3 = iVar11 + iVar26;
          if (iVar3 < 0) {
            iVar3 = iVar3 + 1;
          }
          iVar3 = iVar3 >> 1;
          puVar1 = (uint *)(*(long *)(lVar27 + 0x28) + (long)*(int *)(pbVar32 + 5) + (long)iVar3 * 8
                           );
          uVar29 = *(ulong *)(*(long *)(lVar27 + 0x20) + (ulong)*puVar1 * 8);
          if (uVar29 == 0xa381ad7fa) {
            uVar10 = puVar1[1];
            if (-1 < (int)uVar10) {
              pbVar17 = pbVar32 + (int)uVar10;
            }
            break;
          }
          iVar6 = iVar3 + -1;
          if (uVar29 < 0xa381ad7fb) {
            iVar26 = iVar3 + 1;
            iVar6 = iVar11;
          }
          iVar11 = iVar6;
        } while (iVar26 <= iVar11);
      }
      uVar42 = 0x46abe000;
      if (*pbVar17 == 8) {
        uVar42 = *(undefined4 *)(pbVar17 + 1);
      }
      lVar27 = lVar13 * 0x20;
      lVar13 = lVar13 + 1;
      *(undefined4 *)(*plVar2 + lVar27 + 0x1c) = uVar42;
      uVar10 = (uint)*pbVar41;
      if (uVar10 - 0xb < 2) {
        if (*(int *)(pbVar41 + 1) <= lVar13) break;
        goto LAB_710307d404;
      }
    } while (lVar13 < 0);
  }
  pcVar12 = (char *)param_2[1];
  if ((*pcVar12 == '\f') && (iVar11 = *(int *)(pcVar12 + 1) + -1, 0 < *(int *)(pcVar12 + 1))) {
    local_d0 = *param_2;
    pbVar41 = &DAT_7104742dbb;
    iVar26 = 0;
    do {
      iVar3 = iVar11 + iVar26;
      if (iVar3 < 0) {
        iVar3 = iVar3 + 1;
      }
      iVar3 = iVar3 >> 1;
      puVar1 = (uint *)(*(long *)(local_d0 + 0x28) + (long)*(int *)(pcVar12 + 5) + (long)iVar3 * 8);
      uVar29 = *(ulong *)(*(long *)(local_d0 + 0x20) + (ulong)*puVar1 * 8);
      if (uVar29 == 0xe3a69384e) {
        uVar10 = puVar1[1];
        if ((int)uVar10 < 0) goto LAB_710307d714;
        pbVar41 = (byte *)(pcVar12 + (int)uVar10);
        goto LAB_710307d720;
      }
      iVar6 = iVar3 + -1;
      if (uVar29 < 0xe3a69384f) {
        iVar26 = iVar3 + 1;
        iVar6 = iVar11;
      }
      iVar11 = iVar6;
    } while (iVar26 <= iVar11);
    local_d0 = 0;
  }
  else {
LAB_710307d714:
    local_d0 = 0;
    pbVar41 = &DAT_7104742dbb;
  }
LAB_710307d720:
  if (*pbVar41 - 0xb < 2) {
    iVar11 = *(int *)(pbVar41 + 1);
  }
  else {
    iVar11 = 0;
  }
  uVar29 = (ulong)iVar11;
  uVar40 = *(long *)(param_1 + 0x70) - *(long *)(param_1 + 0x68) >> 5;
  plVar2 = (long *)(param_1 + 0x68);
  if (uVar40 < uVar29) {
    FUN_71030821e0(plVar2,uVar29 - uVar40,param_3,param_4,param_5,param_6,0xbc0ad263c,0xa381ad7fa);
  }
  else if (uVar40 != uVar29) {
    lVar18 = *(long *)(param_1 + 0x68) + uVar29 * 0x20;
    lVar13 = *(long *)(param_1 + 0x70);
    while (lVar27 = lVar13, lVar18 != lVar27) {
      pbVar32 = *(byte **)(lVar27 + -0x18);
      lVar13 = lVar27 + -0x20;
      if (pbVar32 != (byte *)0x0) {
        pbVar17 = *(byte **)(lVar27 + -0x10);
        if (pbVar17 == pbVar32) {
          *(byte **)(lVar27 + -0x10) = pbVar32;
          pbVar17 = pbVar32;
        }
        else {
          do {
            pbVar31 = pbVar17 + -0x28;
            if (((*pbVar31 & 1) != 0) && (*(ulong *)(pbVar17 + -0x18) != 0)) {
              FUN_710392eb40(*(ulong *)(pbVar17 + -0x18));
            }
            pbVar17 = pbVar31;
          } while (pbVar32 != pbVar31);
          pbVar17 = *(byte **)(lVar27 + -0x18);
          *(byte **)(lVar27 + -0x10) = pbVar32;
        }
        if (pbVar17 != (byte *)0x0) {
          FUN_710392eb40((ulong)pbVar17);
        }
      }
    }
    *(long *)(param_1 + 0x70) = lVar18;
  }
  uVar10 = (uint)*pbVar41;
  if ((*pbVar41 - 0xb < 2) && (0 < *(int *)(pbVar41 + 1))) {
    lVar18 = 0;
    do {
      lVar13 = 0;
      iVar11 = (int)lVar18;
      if (iVar11 < 0) {
        pbVar32 = &DAT_7104742dbb;
      }
      else {
        pbVar32 = &DAT_7104742dbb;
        if (uVar10 == 0xb) {
          if (iVar11 < *(int *)(pbVar41 + 1)) {
            pbVar32 = pbVar41 + *(int *)(pbVar41 + (long)iVar11 * 4 + 5);
            lVar13 = local_d0;
          }
          else {
            lVar13 = 0;
            pbVar32 = &DAT_7104742dbb;
          }
        }
      }
      if ((*pbVar32 == 0xc) && (iVar11 = *(int *)(pbVar32 + 1) + -1, 0 < *(int *)(pbVar32 + 1))) {
        iVar26 = 0;
        do {
          iVar3 = iVar11 + iVar26;
          if (iVar3 < 0) {
            iVar3 = iVar3 + 1;
          }
          iVar3 = iVar3 >> 1;
          puVar1 = (uint *)(*(long *)(lVar13 + 0x28) + (long)*(int *)(pbVar32 + 5) + (long)iVar3 * 8
                           );
          uVar29 = *(ulong *)(*(long *)(lVar13 + 0x20) + (ulong)*puVar1 * 8);
          if (uVar29 == 0xa737452e1) {
            uVar10 = puVar1[1];
            if (-1 < (int)uVar10) {
              pbVar17 = pbVar32 + (int)uVar10;
              lVar27 = lVar13;
              goto LAB_710307d990;
            }
            break;
          }
          iVar6 = iVar3 + -1;
          if (uVar29 < 0xa737452e2) {
            iVar26 = iVar3 + 1;
            iVar6 = iVar11;
          }
          iVar11 = iVar6;
        } while (iVar26 <= iVar11);
      }
      lVar27 = 0;
      pbVar17 = &DAT_7104742dbb;
LAB_710307d990:
      if (*pbVar17 == 9) {
        uVar21 = *(undefined8 *)(*(long *)(lVar27 + 0x20) + (long)*(int *)(pbVar17 + 1) * 8);
      }
      else {
        uVar21 = 0;
      }
      *(undefined8 *)(*plVar2 + lVar18 * 0x20) = uVar21;
      pbVar17 = &DAT_7104742dbb;
      if ((*pbVar32 == 0xc) && (iVar11 = *(int *)(pbVar32 + 1) + -1, 0 < *(int *)(pbVar32 + 1))) {
        iVar26 = 0;
        do {
          iVar3 = iVar11 + iVar26;
          if (iVar3 < 0) {
            iVar3 = iVar3 + 1;
          }
          iVar3 = iVar3 >> 1;
          puVar1 = (uint *)(*(long *)(lVar13 + 0x28) + (long)*(int *)(pbVar32 + 5) + (long)iVar3 * 8
                           );
          uVar29 = *(ulong *)(*(long *)(lVar13 + 0x20) + (ulong)*puVar1 * 8);
          if (uVar29 == 0xa94e60370) {
            uVar29 = (ulong)(int)puVar1[1];
            local_a8 = 0;
            if ((uVar29 & 0x80000000) == 0) {
              pbVar17 = pbVar32 + uVar29;
              local_a8 = lVar13;
            }
            goto LAB_710307da28;
          }
          iVar6 = iVar3 + -1;
          if (uVar29 < 0xa94e60371) {
            iVar26 = iVar3 + 1;
            iVar6 = iVar11;
          }
          iVar11 = iVar6;
        } while (iVar26 <= iVar11);
      }
      local_a8 = 0;
LAB_710307da28:
      lVar13 = *plVar2 + lVar18 * 0x20;
      plVar34 = (long *)(lVar13 + 8);
      if (*pbVar17 - 0xb < 2) {
        iVar11 = *(int *)(pbVar17 + 1);
      }
      else {
        iVar11 = 0;
      }
      puVar36 = (undefined8 *)(lVar13 + 0x10);
      pbVar32 = (byte *)*puVar36;
      lVar13 = *plVar34;
      uVar29 = (ulong)iVar11;
      lVar27 = (long)pbVar32 - lVar13 >> 3;
      uVar40 = lVar27 * -0x3333333333333333;
      if (uVar40 < uVar29) {
        FUN_7103082720(plVar34,uVar29 + lVar27 * 0x3333333333333333,param_3,param_4,param_5,param_6,
                       0xbc0ad263c,0xa381ad7fa);
      }
      else if (uVar40 - uVar29 != 0) {
        pbVar31 = (byte *)(lVar13 + uVar29 * 0x28);
        while (pbVar5 = pbVar32, pbVar31 != pbVar5) {
          pbVar32 = pbVar5 + -0x28;
          if (((*pbVar32 & 1) != 0) && (*(ulong *)(pbVar5 + -0x18) != 0)) {
            FUN_710392eb40(*(ulong *)(pbVar5 + -0x18));
          }
        }
        *puVar36 = pbVar31;
      }
      uVar10 = (uint)*pbVar17;
      if ((*pbVar17 - 0xb < 2) && (0 < *(int *)(pbVar17 + 1))) {
        lVar13 = 0;
LAB_710307db0c:
        do {
          iVar11 = (int)lVar13;
          if (iVar11 < 0) {
LAB_710307db44:
            lVar27 = 0;
            pbVar32 = &DAT_7104742dbb;
          }
          else {
            lVar27 = 0;
            pbVar32 = &DAT_7104742dbb;
            if (uVar10 == 0xb) {
              if (*(int *)(pbVar17 + 1) <= iVar11) goto LAB_710307db44;
              pbVar32 = pbVar17 + *(int *)(pbVar17 + (long)iVar11 * 4 + 5);
              lVar27 = local_a8;
            }
          }
          if ((*pbVar32 == 0xc) && (iVar11 = *(int *)(pbVar32 + 1) + -1, 0 < *(int *)(pbVar32 + 1)))
          {
            iVar26 = 0;
            do {
              iVar3 = iVar11 + iVar26;
              if (iVar3 < 0) {
                iVar3 = iVar3 + 1;
              }
              iVar3 = iVar3 >> 1;
              uVar29 = *(ulong *)(*(long *)(lVar27 + 0x20) +
                                 (ulong)*(uint *)(*(long *)(lVar27 + 0x28) +
                                                  (long)*(int *)(pbVar32 + 5) + (long)iVar3 * 8) * 8
                                 );
              if (uVar29 == 0x16510da628) break;
              iVar6 = iVar3 + -1;
              if (uVar29 < 0x16510da629) {
                iVar26 = iVar3 + 1;
                iVar6 = iVar11;
              }
              iVar11 = iVar6;
            } while (iVar26 <= iVar11);
          }
          std::string::assign((char *)(*(long *)(*plVar2 + lVar18 * 0x20 + 8) + lVar13 * 0x28));
          pbVar31 = &DAT_7104742dbb;
          if ((*pbVar32 == 0xc) && (iVar11 = *(int *)(pbVar32 + 1) + -1, 0 < *(int *)(pbVar32 + 1)))
          {
            iVar26 = 0;
            do {
              iVar3 = iVar11 + iVar26;
              if (iVar3 < 0) {
                iVar3 = iVar3 + 1;
              }
              iVar3 = iVar3 >> 1;
              puVar1 = (uint *)(*(long *)(lVar27 + 0x28) + (long)*(int *)(pbVar32 + 5) +
                               (long)iVar3 * 8);
              uVar29 = *(ulong *)(*(long *)(lVar27 + 0x20) + (ulong)*puVar1 * 8);
              if (uVar29 == 0xbc0ad263c) {
                uVar10 = puVar1[1];
                if (-1 < (int)uVar10) {
                  pbVar31 = pbVar32 + (int)uVar10;
                }
                break;
              }
              iVar6 = iVar3 + -1;
              if (uVar29 < 0xbc0ad263d) {
                iVar26 = iVar3 + 1;
                iVar6 = iVar11;
              }
              iVar11 = iVar6;
            } while (iVar26 <= iVar11);
          }
          uVar42 = 0;
          if (*pbVar31 == 8) {
            uVar42 = *(undefined4 *)(pbVar31 + 1);
          }
          *(undefined4 *)(*(long *)(*plVar2 + lVar18 * 0x20 + 8) + lVar13 * 0x28 + 0x18) = uVar42;
          pbVar31 = &DAT_7104742dbb;
          if ((*pbVar32 == 0xc) && (iVar11 = *(int *)(pbVar32 + 1) + -1, 0 < *(int *)(pbVar32 + 1)))
          {
            iVar26 = 0;
            do {
              iVar3 = iVar11 + iVar26;
              if (iVar3 < 0) {
                iVar3 = iVar3 + 1;
              }
              iVar3 = iVar3 >> 1;
              puVar1 = (uint *)(*(long *)(lVar27 + 0x28) + (long)*(int *)(pbVar32 + 5) +
                               (long)iVar3 * 8);
              uVar29 = *(ulong *)(*(long *)(lVar27 + 0x20) + (ulong)*puVar1 * 8);
              if (uVar29 == 0xa381ad7fa) {
                uVar10 = puVar1[1];
                if (-1 < (int)uVar10) {
                  pbVar31 = pbVar32 + (int)uVar10;
                }
                break;
              }
              iVar6 = iVar3 + -1;
              if (uVar29 < 0xa381ad7fb) {
                iVar26 = iVar3 + 1;
                iVar6 = iVar11;
              }
              iVar11 = iVar6;
            } while (iVar26 <= iVar11);
          }
          uVar42 = 0x4627d000;
          if (*pbVar31 == 8) {
            uVar42 = *(undefined4 *)(pbVar31 + 1);
          }
          *(undefined4 *)(*(long *)(*plVar2 + lVar18 * 0x20 + 8) + lVar13 * 0x28 + 0x1c) = uVar42;
          pbVar31 = &DAT_7104742dbb;
          if ((*pbVar32 == 0xc) && (iVar11 = *(int *)(pbVar32 + 1) + -1, 0 < *(int *)(pbVar32 + 1)))
          {
            iVar26 = 0;
            do {
              iVar3 = iVar11 + iVar26;
              if (iVar3 < 0) {
                iVar3 = iVar3 + 1;
              }
              iVar3 = iVar3 >> 1;
              puVar1 = (uint *)(*(long *)(lVar27 + 0x28) + (long)*(int *)(pbVar32 + 5) +
                               (long)iVar3 * 8);
              uVar29 = *(ulong *)(*(long *)(lVar27 + 0x20) + (ulong)*puVar1 * 8);
              if (uVar29 == 0xf2c6d9796) {
                uVar10 = puVar1[1];
                if (-1 < (int)uVar10) {
                  pbVar31 = pbVar32 + (int)uVar10;
                }
                break;
              }
              iVar6 = iVar3 + -1;
              if (uVar29 < 0xf2c6d9797) {
                iVar26 = iVar3 + 1;
                iVar6 = iVar11;
              }
              iVar11 = iVar6;
            } while (iVar26 <= iVar11);
          }
          uVar42 = 0x3f800000;
          if (*pbVar31 == 8) {
            uVar42 = *(undefined4 *)(pbVar31 + 1);
          }
          *(undefined4 *)(*(long *)(*plVar2 + lVar18 * 0x20 + 8) + lVar13 * 0x28 + 0x20) = uVar42;
          pbVar31 = &DAT_7104742dbb;
          if ((*pbVar32 == 0xc) && (iVar11 = *(int *)(pbVar32 + 1) + -1, 0 < *(int *)(pbVar32 + 1)))
          {
            iVar26 = 0;
            do {
              iVar3 = iVar11 + iVar26;
              if (iVar3 < 0) {
                iVar3 = iVar3 + 1;
              }
              iVar3 = iVar3 >> 1;
              puVar1 = (uint *)(*(long *)(lVar27 + 0x28) + (long)*(int *)(pbVar32 + 5) +
                               (long)iVar3 * 8);
              uVar29 = *(ulong *)(*(long *)(lVar27 + 0x20) + (ulong)*puVar1 * 8);
              if (uVar29 == 0x1115e9b9f4) {
                uVar10 = puVar1[1];
                if (-1 < (int)uVar10) {
                  pbVar31 = pbVar32 + (int)uVar10;
                }
                break;
              }
              iVar6 = iVar3 + -1;
              if (uVar29 < 0x1115e9b9f5) {
                iVar26 = iVar3 + 1;
                iVar6 = iVar11;
              }
              iVar11 = iVar6;
            } while (iVar26 <= iVar11);
          }
          switch(*pbVar31) {
          case 1:
          case 3:
            uVar10 = (uint)pbVar31[1];
            break;
          case 2:
            uVar10 = (uint)(char)pbVar31[1];
            break;
          case 4:
            uVar10 = (uint)*(short *)(pbVar31 + 1);
            break;
          case 5:
            uVar10 = (uint)*(ushort *)(pbVar31 + 1);
            break;
          case 6:
          case 7:
            uVar10 = *(uint *)(pbVar31 + 1);
            break;
          default:
            uVar10 = 1;
          }
          *(bool *)(*(long *)(*plVar2 + lVar18 * 0x20 + 8) + lVar13 * 0x28 + 0x24) = uVar10 != 0;
          uVar10 = (uint)*pbVar17;
          lVar13 = lVar13 + 1;
          if (uVar10 - 0xb < 2) {
            if (*(int *)(pbVar17 + 1) <= lVar13) break;
            goto LAB_710307db0c;
          }
        } while (lVar13 < 0);
      }
      uVar10 = (uint)*pbVar41;
      lVar18 = lVar18 + 1;
      if (uVar10 - 0xb < 2) {
        iVar11 = *(int *)(pbVar41 + 1);
      }
      else {
        iVar11 = 0;
      }
    } while (lVar18 < iVar11);
  }
  pcVar12 = (char *)param_2[1];
  if ((*pcVar12 == '\f') && (iVar11 = *(int *)(pcVar12 + 1) + -1, 0 < *(int *)(pcVar12 + 1))) {
    local_d0 = *param_2;
    pbVar41 = &DAT_7104742dbb;
    iVar26 = 0;
    do {
      iVar3 = iVar11 + iVar26;
      if (iVar3 < 0) {
        iVar3 = iVar3 + 1;
      }
      iVar3 = iVar3 >> 1;
      puVar1 = (uint *)(*(long *)(local_d0 + 0x28) + (long)*(int *)(pcVar12 + 5) + (long)iVar3 * 8);
      uVar29 = *(ulong *)(*(long *)(local_d0 + 0x20) + (ulong)*puVar1 * 8);
      if (uVar29 == 0xf874067c0) {
        uVar10 = puVar1[1];
        if ((int)uVar10 < 0) goto LAB_710307e010;
        pbVar41 = (byte *)(pcVar12 + (int)uVar10);
        goto LAB_710307e01c;
      }
      iVar6 = iVar3 + -1;
      if (uVar29 < 0xf874067c1) {
        iVar26 = iVar3 + 1;
        iVar6 = iVar11;
      }
      iVar11 = iVar6;
    } while (iVar26 <= iVar11);
    local_d0 = 0;
  }
  else {
LAB_710307e010:
    local_d0 = 0;
    pbVar41 = &DAT_7104742dbb;
  }
LAB_710307e01c:
  if (*pbVar41 - 0xb < 2) {
    iVar11 = *(int *)(pbVar41 + 1);
  }
  else {
    iVar11 = 0;
  }
  uVar29 = (ulong)iVar11;
  uVar40 = *(long *)(param_1 + 0x88) - *(long *)(param_1 + 0x80) >> 5;
  plVar2 = (long *)(param_1 + 0x80);
  if (uVar40 < uVar29) {
    FUN_7103082480(plVar2,uVar29 - uVar40,param_3,param_4,param_5,param_6,0xbc0ad263c,0xa381ad7fa);
  }
  else if (uVar40 != uVar29) {
    lVar18 = *(long *)(param_1 + 0x80) + uVar29 * 0x20;
    lVar13 = *(long *)(param_1 + 0x88);
    while (lVar27 = lVar13, lVar18 != lVar27) {
      pbVar32 = *(byte **)(lVar27 + -0x18);
      lVar13 = lVar27 + -0x20;
      if (pbVar32 != (byte *)0x0) {
        pbVar17 = *(byte **)(lVar27 + -0x10);
        if (pbVar17 == pbVar32) {
          *(byte **)(lVar27 + -0x10) = pbVar32;
          pbVar17 = pbVar32;
        }
        else {
          do {
            pbVar31 = pbVar17 + -0x28;
            if (((*pbVar31 & 1) != 0) && (*(ulong *)(pbVar17 + -0x18) != 0)) {
              FUN_710392eb40(*(ulong *)(pbVar17 + -0x18));
            }
            pbVar17 = pbVar31;
          } while (pbVar32 != pbVar31);
          pbVar17 = *(byte **)(lVar27 + -0x18);
          *(byte **)(lVar27 + -0x10) = pbVar32;
        }
        if (pbVar17 != (byte *)0x0) {
          FUN_710392eb40((ulong)pbVar17);
        }
      }
    }
    *(long *)(param_1 + 0x88) = lVar18;
  }
  uVar10 = (uint)*pbVar41;
  if ((*pbVar41 - 0xb < 2) && (0 < *(int *)(pbVar41 + 1))) {
    lVar18 = 0;
    do {
      iVar11 = (int)lVar18;
      if (iVar11 < 0) {
LAB_710307e1cc:
        lVar13 = 0;
        pbVar32 = &DAT_7104742dbb;
      }
      else {
        lVar13 = 0;
        pbVar32 = &DAT_7104742dbb;
        if (uVar10 == 0xb) {
          if (*(int *)(pbVar41 + 1) <= iVar11) goto LAB_710307e1cc;
          pbVar32 = pbVar41 + *(int *)(pbVar41 + (long)iVar11 * 4 + 5);
          lVar13 = local_d0;
        }
      }
      if ((*pbVar32 == 0xc) && (iVar11 = *(int *)(pbVar32 + 1) + -1, 0 < *(int *)(pbVar32 + 1))) {
        iVar26 = 0;
        do {
          iVar3 = iVar11 + iVar26;
          if (iVar3 < 0) {
            iVar3 = iVar3 + 1;
          }
          iVar3 = iVar3 >> 1;
          puVar1 = (uint *)(*(long *)(lVar13 + 0x28) + (long)*(int *)(pbVar32 + 5) + (long)iVar3 * 8
                           );
          uVar29 = *(ulong *)(*(long *)(lVar13 + 0x20) + (ulong)*puVar1 * 8);
          if (uVar29 == 0xa737452e1) {
            uVar10 = puVar1[1];
            if (-1 < (int)uVar10) {
              pbVar17 = pbVar32 + (int)uVar10;
              lVar27 = lVar13;
              goto LAB_710307e254;
            }
            break;
          }
          iVar6 = iVar3 + -1;
          if (uVar29 < 0xa737452e2) {
            iVar26 = iVar3 + 1;
            iVar6 = iVar11;
          }
          iVar11 = iVar6;
        } while (iVar26 <= iVar11);
      }
      lVar27 = 0;
      pbVar17 = &DAT_7104742dbb;
LAB_710307e254:
      if (*pbVar17 == 9) {
        uVar21 = *(undefined8 *)(*(long *)(lVar27 + 0x20) + (long)*(int *)(pbVar17 + 1) * 8);
      }
      else {
        uVar21 = 0;
      }
      *(undefined8 *)(*plVar2 + lVar18 * 0x20) = uVar21;
      pbVar17 = &DAT_7104742dbb;
      if ((*pbVar32 == 0xc) && (iVar11 = *(int *)(pbVar32 + 1) + -1, 0 < *(int *)(pbVar32 + 1))) {
        iVar26 = 0;
        do {
          iVar3 = iVar11 + iVar26;
          if (iVar3 < 0) {
            iVar3 = iVar3 + 1;
          }
          iVar3 = iVar3 >> 1;
          puVar1 = (uint *)(*(long *)(lVar13 + 0x28) + (long)*(int *)(pbVar32 + 5) + (long)iVar3 * 8
                           );
          uVar29 = *(ulong *)(*(long *)(lVar13 + 0x20) + (ulong)*puVar1 * 8);
          if (uVar29 == 0xa94e60370) {
            uVar29 = (ulong)(int)puVar1[1];
            local_a8 = 0;
            if ((uVar29 & 0x80000000) == 0) {
              pbVar17 = pbVar32 + uVar29;
              local_a8 = lVar13;
            }
            goto LAB_710307e2f8;
          }
          iVar6 = iVar3 + -1;
          if (uVar29 < 0xa94e60371) {
            iVar26 = iVar3 + 1;
            iVar6 = iVar11;
          }
          iVar11 = iVar6;
        } while (iVar26 <= iVar11);
      }
      local_a8 = 0;
LAB_710307e2f8:
      lVar13 = *plVar2 + lVar18 * 0x20;
      plVar34 = (long *)(lVar13 + 8);
      if (*pbVar17 - 0xb < 2) {
        iVar11 = *(int *)(pbVar17 + 1);
      }
      else {
        iVar11 = 0;
      }
      puVar36 = (undefined8 *)(lVar13 + 0x10);
      pbVar32 = (byte *)*puVar36;
      lVar13 = *plVar34;
      uVar29 = (ulong)iVar11;
      lVar27 = (long)pbVar32 - lVar13 >> 3;
      uVar40 = lVar27 * -0x3333333333333333;
      if (uVar40 < uVar29) {
        FUN_7103082980(plVar34,uVar29 + lVar27 * 0x3333333333333333,param_3,param_4,param_5,param_6,
                       0xbc0ad263c,0xa381ad7fa);
      }
      else if (uVar40 - uVar29 != 0) {
        pbVar31 = (byte *)(lVar13 + uVar29 * 0x28);
        while (pbVar5 = pbVar32, pbVar31 != pbVar5) {
          pbVar32 = pbVar5 + -0x28;
          if (((*pbVar32 & 1) != 0) && (*(ulong *)(pbVar5 + -0x18) != 0)) {
            FUN_710392eb40(*(ulong *)(pbVar5 + -0x18));
          }
        }
        *puVar36 = pbVar31;
      }
      uVar10 = (uint)*pbVar17;
      if ((*pbVar17 - 0xb < 2) && (0 < *(int *)(pbVar17 + 1))) {
        lVar13 = 0;
LAB_710307e3dc:
        do {
          iVar11 = (int)lVar13;
          if (iVar11 < 0) {
LAB_710307e414:
            lVar27 = 0;
            pbVar32 = &DAT_7104742dbb;
          }
          else {
            lVar27 = 0;
            pbVar32 = &DAT_7104742dbb;
            if (uVar10 == 0xb) {
              if (*(int *)(pbVar17 + 1) <= iVar11) goto LAB_710307e414;
              pbVar32 = pbVar17 + *(int *)(pbVar17 + (long)iVar11 * 4 + 5);
              lVar27 = local_a8;
            }
          }
          if ((*pbVar32 == 0xc) && (iVar11 = *(int *)(pbVar32 + 1) + -1, 0 < *(int *)(pbVar32 + 1)))
          {
            iVar26 = 0;
            do {
              iVar3 = iVar11 + iVar26;
              if (iVar3 < 0) {
                iVar3 = iVar3 + 1;
              }
              iVar3 = iVar3 >> 1;
              uVar29 = *(ulong *)(*(long *)(lVar27 + 0x20) +
                                 (ulong)*(uint *)(*(long *)(lVar27 + 0x28) +
                                                  (long)*(int *)(pbVar32 + 5) + (long)iVar3 * 8) * 8
                                 );
              if (uVar29 == 0x14590ea12c) break;
              iVar6 = iVar3 + -1;
              if (uVar29 < 0x14590ea12d) {
                iVar26 = iVar3 + 1;
                iVar6 = iVar11;
              }
              iVar11 = iVar6;
            } while (iVar26 <= iVar11);
          }
          std::string::assign((char *)(*(long *)(*plVar2 + lVar18 * 0x20 + 8) + lVar13 * 0x28));
          pbVar31 = &DAT_7104742dbb;
          if ((*pbVar32 == 0xc) && (iVar11 = *(int *)(pbVar32 + 1) + -1, 0 < *(int *)(pbVar32 + 1)))
          {
            iVar26 = 0;
            do {
              iVar3 = iVar11 + iVar26;
              if (iVar3 < 0) {
                iVar3 = iVar3 + 1;
              }
              iVar3 = iVar3 >> 1;
              puVar1 = (uint *)(*(long *)(lVar27 + 0x28) + (long)*(int *)(pbVar32 + 5) +
                               (long)iVar3 * 8);
              uVar29 = *(ulong *)(*(long *)(lVar27 + 0x20) + (ulong)*puVar1 * 8);
              if (uVar29 == 0xbc0ad263c) {
                uVar10 = puVar1[1];
                if (-1 < (int)uVar10) {
                  pbVar31 = pbVar32 + (int)uVar10;
                }
                break;
              }
              iVar6 = iVar3 + -1;
              if (uVar29 < 0xbc0ad263d) {
                iVar26 = iVar3 + 1;
                iVar6 = iVar11;
              }
              iVar11 = iVar6;
            } while (iVar26 <= iVar11);
          }
          uVar42 = 0;
          if (*pbVar31 == 8) {
            uVar42 = *(undefined4 *)(pbVar31 + 1);
          }
          *(undefined4 *)(*(long *)(*plVar2 + lVar18 * 0x20 + 8) + lVar13 * 0x28 + 0x18) = uVar42;
          pbVar31 = &DAT_7104742dbb;
          if ((*pbVar32 == 0xc) && (iVar11 = *(int *)(pbVar32 + 1) + -1, 0 < *(int *)(pbVar32 + 1)))
          {
            iVar26 = 0;
            do {
              iVar3 = iVar11 + iVar26;
              if (iVar3 < 0) {
                iVar3 = iVar3 + 1;
              }
              iVar3 = iVar3 >> 1;
              puVar1 = (uint *)(*(long *)(lVar27 + 0x28) + (long)*(int *)(pbVar32 + 5) +
                               (long)iVar3 * 8);
              uVar29 = *(ulong *)(*(long *)(lVar27 + 0x20) + (ulong)*puVar1 * 8);
              if (uVar29 == 0xa381ad7fa) {
                uVar10 = puVar1[1];
                if (-1 < (int)uVar10) {
                  pbVar31 = pbVar32 + (int)uVar10;
                }
                break;
              }
              iVar6 = iVar3 + -1;
              if (uVar29 < 0xa381ad7fb) {
                iVar26 = iVar3 + 1;
                iVar6 = iVar11;
              }
              iVar11 = iVar6;
            } while (iVar26 <= iVar11);
          }
          uVar42 = 0x452be000;
          if (*pbVar31 == 8) {
            uVar42 = *(undefined4 *)(pbVar31 + 1);
          }
          *(undefined4 *)(*(long *)(*plVar2 + lVar18 * 0x20 + 8) + lVar13 * 0x28 + 0x1c) = uVar42;
          pbVar31 = &DAT_7104742dbb;
          if ((*pbVar32 == 0xc) && (iVar11 = *(int *)(pbVar32 + 1) + -1, 0 < *(int *)(pbVar32 + 1)))
          {
            iVar26 = 0;
            do {
              iVar3 = iVar11 + iVar26;
              if (iVar3 < 0) {
                iVar3 = iVar3 + 1;
              }
              iVar3 = iVar3 >> 1;
              puVar1 = (uint *)(*(long *)(lVar27 + 0x28) + (long)*(int *)(pbVar32 + 5) +
                               (long)iVar3 * 8);
              uVar29 = *(ulong *)(*(long *)(lVar27 + 0x20) + (ulong)*puVar1 * 8);
              if (uVar29 == 0xf2c6d9796) {
                uVar10 = puVar1[1];
                if (-1 < (int)uVar10) {
                  pbVar31 = pbVar32 + (int)uVar10;
                }
                break;
              }
              iVar6 = iVar3 + -1;
              if (uVar29 < 0xf2c6d9797) {
                iVar26 = iVar3 + 1;
                iVar6 = iVar11;
              }
              iVar11 = iVar6;
            } while (iVar26 <= iVar11);
          }
          uVar42 = 0x3f800000;
          if (*pbVar31 == 8) {
            uVar42 = *(undefined4 *)(pbVar31 + 1);
          }
          *(undefined4 *)(*(long *)(*plVar2 + lVar18 * 0x20 + 8) + lVar13 * 0x28 + 0x20) = uVar42;
          pbVar31 = &DAT_7104742dbb;
          if ((*pbVar32 == 0xc) && (iVar11 = *(int *)(pbVar32 + 1) + -1, 0 < *(int *)(pbVar32 + 1)))
          {
            iVar26 = 0;
            do {
              iVar3 = iVar11 + iVar26;
              if (iVar3 < 0) {
                iVar3 = iVar3 + 1;
              }
              iVar3 = iVar3 >> 1;
              puVar1 = (uint *)(*(long *)(lVar27 + 0x28) + (long)*(int *)(pbVar32 + 5) +
                               (long)iVar3 * 8);
              uVar29 = *(ulong *)(*(long *)(lVar27 + 0x20) + (ulong)*puVar1 * 8);
              if (uVar29 == 0x1115e9b9f4) {
                uVar10 = puVar1[1];
                if (-1 < (int)uVar10) {
                  pbVar31 = pbVar32 + (int)uVar10;
                }
                break;
              }
              iVar6 = iVar3 + -1;
              if (uVar29 < 0x1115e9b9f5) {
                iVar26 = iVar3 + 1;
                iVar6 = iVar11;
              }
              iVar11 = iVar6;
            } while (iVar26 <= iVar11);
          }
          switch(*pbVar31) {
          case 1:
          case 3:
            uVar10 = (uint)pbVar31[1];
            break;
          case 2:
            uVar10 = (uint)(char)pbVar31[1];
            break;
          case 4:
            uVar10 = (uint)*(short *)(pbVar31 + 1);
            break;
          case 5:
            uVar10 = (uint)*(ushort *)(pbVar31 + 1);
            break;
          case 6:
          case 7:
            uVar10 = *(uint *)(pbVar31 + 1);
            break;
          default:
            uVar10 = 1;
          }
          *(bool *)(*(long *)(*plVar2 + lVar18 * 0x20 + 8) + lVar13 * 0x28 + 0x24) = uVar10 != 0;
          uVar10 = (uint)*pbVar17;
          lVar13 = lVar13 + 1;
          if (uVar10 - 0xb < 2) {
            if (*(int *)(pbVar17 + 1) <= lVar13) break;
            goto LAB_710307e3dc;
          }
        } while (lVar13 < 0);
      }
      uVar10 = (uint)*pbVar41;
      lVar18 = lVar18 + 1;
      if (uVar10 - 0xb < 2) {
        iVar11 = *(int *)(pbVar41 + 1);
      }
      else {
        iVar11 = 0;
      }
    } while (lVar18 < iVar11);
  }
  uVar30 = 0xa381ad7fa;
  uVar21 = 0xbc0ad263c;
  pcVar12 = (char *)param_2[1];
  if ((*pcVar12 == '\f') && (iVar11 = *(int *)(pcVar12 + 1) + -1, 0 < *(int *)(pcVar12 + 1))) {
    lVar18 = *param_2;
    iVar26 = 0;
    pbVar41 = &DAT_7104742dbb;
    do {
      iVar3 = iVar11 + iVar26;
      if (iVar3 < 0) {
        iVar3 = iVar3 + 1;
      }
      iVar3 = iVar3 >> 1;
      puVar1 = (uint *)(*(long *)(lVar18 + 0x28) + (long)*(int *)(pcVar12 + 5) + (long)iVar3 * 8);
      uVar29 = *(ulong *)(*(long *)(lVar18 + 0x20) + (ulong)*puVar1 * 8);
      if (uVar29 == 0x126ede04c2) {
        uVar10 = puVar1[1];
        if ((int)uVar10 < 0) goto LAB_710307e8dc;
        pbVar41 = (byte *)(pcVar12 + (int)uVar10);
        goto LAB_710307e8e8;
      }
      iVar6 = iVar3 + -1;
      if (uVar29 < 0x126ede04c3) {
        iVar26 = iVar3 + 1;
        iVar6 = iVar11;
      }
      iVar11 = iVar6;
    } while (iVar26 <= iVar11);
    lVar18 = 0;
  }
  else {
LAB_710307e8dc:
    lVar18 = 0;
    pbVar41 = &DAT_7104742dbb;
  }
LAB_710307e8e8:
  if (*pbVar41 - 0xb < 2) {
    iVar11 = *(int *)(pbVar41 + 1);
  }
  else {
    iVar11 = 0;
  }
  uVar29 = (ulong)iVar11;
  pvVar28 = *(void **)(param_1 + 0x98);
  puVar36 = *(undefined8 **)(param_1 + 0xa0);
  pppplVar37 = (long ****)((long)puVar36 - (long)pvVar28);
  lVar13 = (long)pppplVar37 >> 3;
  plVar2 = (long *)(param_1 + 0x98);
  if ((ulong)(lVar13 * -0x5555555555555555) < uVar29) {
    uVar40 = uVar29 + lVar13 * 0x5555555555555555;
    if ((ulong)((*(long *)(param_1 + 0xa8) - (long)puVar36 >> 3) * -0x5555555555555555) < uVar40) {
      if (iVar11 < 0) goto LAB_7103081f2c;
      lVar27 = *(long *)(param_1 + 0xa8) - (long)pvVar28 >> 3;
      if ((ulong)(lVar27 * -0x5555555555555555) < 0x555555555555555) {
        uVar14 = lVar27 * 0x5555555555555556;
        uVar39 = uVar29;
        if (uVar29 <= uVar14) {
          uVar39 = uVar14;
        }
        if (uVar39 != 0) goto LAB_710307ea94;
        lVar27 = 0;
      }
      else {
        uVar39 = 0xaaaaaaaaaaaaaaa;
LAB_710307ea94:
        ppplVar16 = (long ***)(uVar39 * 0x18);
        if (ppplVar16 == (long ***)0x0) {
          ppplVar16 = (long ***)0x1;
        }
        lVar27 = FUN_710392e290(0x10,ppplVar16,param_3,param_4,param_5,param_6,0xbc0ad263c,
                                0xa381ad7fa);
        if (lVar27 == 0) {
          if (DAT_7105332f00 != (long *)0x0) {
            local_84 = 0;
            pppplVar8 = local_a0;
            local_a0[0] = ppplVar16;
            uVar14 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_84);
            if (((uVar14 & 1) != 0) &&
               (lVar27 = FUN_710392e290(0x10,ppplVar16,pppplVar8,param_4,param_5,param_6,uVar21,
                                        uVar30), lVar27 != 0)) goto LAB_710307eb0c;
          }
          lVar27 = 0;
        }
      }
LAB_710307eb0c:
      pvVar38 = (void *)(lVar27 + lVar13 * 8);
      param_3 = (long ****)(uVar40 * 0x18);
      memset(pvVar38,0,(size_t)param_3);
      lVar13 = SUB168(SEXT816((long)pppplVar37) * SEXT816(-0x2aaaaaaaaaaaaaab),8);
      pvVar38 = (void *)((long)pvVar38 + ((lVar13 >> 2) - (lVar13 >> 0x3f)) * 0x18);
      if (0 < (long)pppplVar37) {
        memcpy(pvVar38,pvVar28,(size_t)pppplVar37);
        param_3 = pppplVar37;
      }
      *(void **)(param_1 + 0x98) = pvVar38;
      *(ulong *)(param_1 + 0xa0) = lVar27 + uVar29 * 0x18;
      *(ulong *)(param_1 + 0xa8) = lVar27 + uVar39 * 0x18;
      if (pvVar28 != (void *)0x0) {
        FUN_710392eb40((ulong)pvVar28);
      }
    }
    else {
      uVar29 = uVar40;
      if ((uVar40 & 1) != 0) {
        puVar36[1] = 0;
        puVar36[2] = 0;
        uVar29 = uVar40 - 1;
        *puVar36 = 0;
        puVar36 = (undefined8 *)(*(long *)(param_1 + 0xa0) + 0x18);
        *(undefined8 **)(param_1 + 0xa0) = puVar36;
      }
      if (uVar40 != 1) {
        do {
          puVar36[1] = 0;
          puVar36[2] = 0;
          uVar29 = uVar29 - 2;
          *puVar36 = 0;
          lVar13 = *(long *)(param_1 + 0xa0);
          *(long *)(param_1 + 0xa0) = lVar13 + 0x18;
          *(undefined8 *)(lVar13 + 0x20) = 0;
          *(undefined8 *)(lVar13 + 0x28) = 0;
          *(undefined8 *)(lVar13 + 0x18) = 0;
          puVar36 = (undefined8 *)(*(long *)(param_1 + 0xa0) + 0x18);
          *(undefined8 **)(param_1 + 0xa0) = puVar36;
        } while (uVar29 != 0);
      }
    }
  }
  else if (lVar13 * -0x5555555555555555 - uVar29 != 0) {
    *(void **)(param_1 + 0xa0) = (void *)((long)pvVar28 + uVar29 * 0x18);
  }
  uVar21 = 0xa381ad7fa;
  uVar10 = (uint)*pbVar41;
  if ((*pbVar41 - 0xb < 2) && (0 < *(int *)(pbVar41 + 1))) {
    lVar13 = 0;
LAB_710307ec3c:
    do {
      iVar11 = (int)lVar13;
      if (iVar11 < 0) {
LAB_710307ec74:
        lVar27 = 0;
        pbVar32 = &DAT_7104742dbb;
      }
      else {
        pbVar32 = &DAT_7104742dbb;
        lVar27 = 0;
        if (uVar10 == 0xb) {
          if (*(int *)(pbVar41 + 1) <= iVar11) goto LAB_710307ec74;
          pbVar32 = pbVar41 + *(int *)(pbVar41 + (long)iVar11 * 4 + 5);
          lVar27 = lVar18;
        }
      }
      if ((*pbVar32 == 0xc) && (uVar10 = *(int *)(pbVar32 + 1) - 1, 0 < *(int *)(pbVar32 + 1))) {
        iVar11 = 0;
        param_3 = (long ****)(*(long *)(lVar27 + 0x28) + (long)*(int *)(pbVar32 + 5));
        do {
          iVar26 = uVar10 + iVar11;
          if (iVar26 < 0) {
            iVar26 = iVar26 + 1;
          }
          uVar4 = iVar26 >> 1;
          param_4 = (byte ****)(ulong)uVar4;
          param_5 = param_3 + (int)uVar4;
          param_6 = *(ulong *)(*(long *)(lVar27 + 0x20) + (ulong)*(uint *)param_5 * 8);
          if (param_6 == 0xa737452e1) {
            if (-1 < (int)*(uint *)((long)param_5 + 4)) {
              pbVar17 = pbVar32 + (int)*(uint *)((long)param_5 + 4);
              lVar19 = lVar27;
              goto LAB_710307ecfc;
            }
            break;
          }
          param_5 = (long ****)(ulong)(uVar4 - 1);
          uVar7 = uVar4 - 1;
          if (param_6 < 0xa737452e2) {
            iVar11 = uVar4 + 1;
            uVar7 = uVar10;
          }
          uVar10 = uVar7;
        } while (iVar11 <= (int)uVar10);
      }
      pbVar17 = &DAT_7104742dbb;
      lVar19 = 0;
LAB_710307ecfc:
      if (*pbVar17 == 9) {
        uVar30 = *(undefined8 *)(*(long *)(lVar19 + 0x20) + (long)*(int *)(pbVar17 + 1) * 8);
      }
      else {
        uVar30 = 0;
      }
      *(undefined8 *)(*plVar2 + lVar13 * 0x18) = uVar30;
      pbVar17 = &DAT_7104742dbb;
      if ((*pbVar32 == 0xc) && (uVar10 = *(int *)(pbVar32 + 1) - 1, 0 < *(int *)(pbVar32 + 1))) {
        iVar11 = 0;
        param_3 = (long ****)(*(long *)(lVar27 + 0x28) + (long)*(int *)(pbVar32 + 5));
        do {
          iVar26 = uVar10 + iVar11;
          if (iVar26 < 0) {
            iVar26 = iVar26 + 1;
          }
          uVar4 = iVar26 >> 1;
          param_4 = (byte ****)(ulong)uVar4;
          param_5 = param_3 + (int)uVar4;
          param_6 = *(ulong *)(*(long *)(lVar27 + 0x20) + (ulong)*(uint *)param_5 * 8);
          if (param_6 == 0x18cdc1683) {
            if (-1 < (int)*(uint *)((long)param_5 + 4)) {
              pbVar17 = pbVar32 + (int)*(uint *)((long)param_5 + 4);
            }
            break;
          }
          param_5 = (long ****)(ulong)(uVar4 - 1);
          uVar7 = uVar4 - 1;
          if (param_6 < 0x18cdc1684) {
            iVar11 = uVar4 + 1;
            uVar7 = uVar10;
          }
          uVar10 = uVar7;
        } while (iVar11 <= (int)uVar10);
      }
      uVar42 = 0xc20371aa;
      if (*pbVar17 == 8) {
        uVar42 = *(undefined4 *)(pbVar17 + 1);
      }
      *(undefined4 *)(*plVar2 + lVar13 * 0x18 + 8) = uVar42;
      pbVar17 = &DAT_7104742dbb;
      if ((*pbVar32 == 0xc) && (uVar10 = *(int *)(pbVar32 + 1) - 1, 0 < *(int *)(pbVar32 + 1))) {
        iVar11 = 0;
        param_3 = (long ****)(*(long *)(lVar27 + 0x28) + (long)*(int *)(pbVar32 + 5));
        do {
          iVar26 = uVar10 + iVar11;
          if (iVar26 < 0) {
            iVar26 = iVar26 + 1;
          }
          uVar4 = iVar26 >> 1;
          param_4 = (byte ****)(ulong)uVar4;
          param_5 = param_3 + (int)uVar4;
          param_6 = *(ulong *)(*(long *)(lVar27 + 0x20) + (ulong)*(uint *)param_5 * 8);
          if (param_6 == 0x1fbdb2615) {
            if (-1 < (int)*(uint *)((long)param_5 + 4)) {
              pbVar17 = pbVar32 + (int)*(uint *)((long)param_5 + 4);
            }
            break;
          }
          param_5 = (long ****)(ulong)(uVar4 - 1);
          uVar7 = uVar4 - 1;
          if (param_6 < 0x1fbdb2616) {
            iVar11 = uVar4 + 1;
            uVar7 = uVar10;
          }
          uVar10 = uVar7;
        } while (iVar11 <= (int)uVar10);
      }
      uVar42 = 0xc1fe6a7f;
      if (*pbVar17 == 8) {
        uVar42 = *(undefined4 *)(pbVar17 + 1);
      }
      *(undefined4 *)(*plVar2 + lVar13 * 0x18 + 0xc) = uVar42;
      pbVar17 = &DAT_7104742dbb;
      if ((*pbVar32 == 0xc) && (uVar10 = *(int *)(pbVar32 + 1) - 1, 0 < *(int *)(pbVar32 + 1))) {
        iVar11 = 0;
        param_3 = (long ****)(*(long *)(lVar27 + 0x28) + (long)*(int *)(pbVar32 + 5));
        do {
          iVar26 = uVar10 + iVar11;
          if (iVar26 < 0) {
            iVar26 = iVar26 + 1;
          }
          uVar4 = iVar26 >> 1;
          param_4 = (byte ****)(ulong)uVar4;
          param_5 = param_3 + (int)uVar4;
          param_6 = *(ulong *)(*(long *)(lVar27 + 0x20) + (ulong)*(uint *)param_5 * 8);
          if (param_6 == 0x162d277af) {
            if (-1 < (int)*(uint *)((long)param_5 + 4)) {
              pbVar17 = pbVar32 + (int)*(uint *)((long)param_5 + 4);
            }
            break;
          }
          param_5 = (long ****)(ulong)(uVar4 - 1);
          uVar7 = uVar4 - 1;
          if (param_6 < 0x162d277b0) {
            iVar11 = uVar4 + 1;
            uVar7 = uVar10;
          }
          uVar10 = uVar7;
        } while (iVar11 <= (int)uVar10);
      }
      uVar42 = 0;
      if (*pbVar17 == 8) {
        uVar42 = *(undefined4 *)(pbVar17 + 1);
      }
      *(undefined4 *)(*plVar2 + lVar13 * 0x18 + 0x10) = uVar42;
      pbVar17 = &DAT_7104742dbb;
      if (*pbVar32 == 0xc) {
        uVar10 = *(int *)(pbVar32 + 1) - 1;
        if (*(int *)(pbVar32 + 1) < 1) {
LAB_710307efb8:
          pbVar17 = &DAT_7104742dbb;
        }
        else {
          iVar11 = 0;
          do {
            iVar26 = uVar10 + iVar11;
            if (iVar26 < 0) {
              iVar26 = iVar26 + 1;
            }
            uVar4 = iVar26 >> 1;
            param_3 = (long ****)(ulong)uVar4;
            param_4 = (byte ****)
                      (*(long *)(lVar27 + 0x28) + (long)*(int *)(pbVar32 + 5) + (long)(int)uVar4 * 8
                      );
            param_5 = *(long *****)(*(long *)(lVar27 + 0x20) + (ulong)*(uint *)param_4 * 8);
            if (param_5 == (long ****)0x5ec462584) {
              if ((int)*(uint *)((long)param_4 + 4) < 0) goto LAB_710307efb8;
              pbVar17 = pbVar32 + (int)*(uint *)((long)param_4 + 4);
              break;
            }
            param_4 = (byte ****)(ulong)(uVar4 - 1);
            uVar7 = uVar4 - 1;
            if (param_5 < (long ****)0x5ec462585) {
              iVar11 = uVar4 + 1;
              uVar7 = uVar10;
            }
            uVar10 = uVar7;
          } while (iVar11 <= (int)uVar10);
        }
      }
      uVar42 = 0x3f800000;
      if (*pbVar17 == 8) {
        uVar42 = *(undefined4 *)(pbVar17 + 1);
      }
      lVar27 = lVar13 * 0x18;
      lVar13 = lVar13 + 1;
      *(undefined4 *)(*plVar2 + lVar27 + 0x14) = uVar42;
      uVar10 = (uint)*pbVar41;
      if (uVar10 - 0xb < 2) {
        if (*(int *)(pbVar41 + 1) <= lVar13) break;
        goto LAB_710307ec3c;
      }
    } while (lVar13 < 0);
  }
  uVar30 = 0xbc0ad263c;
  pcVar12 = (char *)param_2[1];
  if ((*pcVar12 == '\f') && (iVar11 = *(int *)(pcVar12 + 1) + -1, 0 < *(int *)(pcVar12 + 1))) {
    local_100 = (byte ****)*param_2;
    pbVar41 = &DAT_7104742dbb;
    iVar26 = 0;
    do {
      iVar3 = iVar11 + iVar26;
      if (iVar3 < 0) {
        iVar3 = iVar3 + 1;
      }
      iVar3 = iVar3 >> 1;
      puVar1 = (uint *)((long)local_100[5] + (long)iVar3 * 8 + (long)*(int *)(pcVar12 + 5));
      if (local_100[4][*puVar1] == (byte **)0x1c925484c7) {
        uVar10 = puVar1[1];
        if ((int)uVar10 < 0) goto LAB_710307f0b0;
        pbVar41 = (byte *)(pcVar12 + (int)uVar10);
        goto LAB_710307f0bc;
      }
      iVar6 = iVar3 + -1;
      if (local_100[4][*puVar1] < (byte **)0x1c925484c8) {
        iVar26 = iVar3 + 1;
        iVar6 = iVar11;
      }
      iVar11 = iVar6;
    } while (iVar26 <= iVar11);
    local_100 = (byte ****)0x0;
  }
  else {
LAB_710307f0b0:
    local_100 = (byte ****)0x0;
    pbVar41 = &DAT_7104742dbb;
  }
LAB_710307f0bc:
  if (*pbVar41 - 0xb < 2) {
    iVar11 = *(int *)(pbVar41 + 1);
  }
  else {
    iVar11 = 0;
  }
  puVar35 = *(undefined8 **)(param_1 + 0xb0);
  puVar36 = *(undefined8 **)(param_1 + 0xb8);
  uVar40 = (ulong)iVar11;
  uVar29 = (long)puVar36 - (long)puVar35 >> 5;
  plVar2 = (long *)(param_1 + 0xb0);
  if (uVar29 < uVar40) {
    uVar39 = uVar40 - uVar29;
    if ((ulong)(*(long *)(param_1 + 0xc0) - (long)puVar36 >> 5) < uVar39) {
      if (iVar11 < 0) {
                    /* WARNING: Subroutine does not return */
        std::__vector_base_common<true>::__throw_length_error();
      }
      lVar18 = *(long *)(param_1 + 0xc0) - (long)puVar35;
      if ((ulong)(lVar18 >> 5) < 0x3ffffffffffffff) {
        uVar15 = lVar18 >> 4;
        uVar14 = uVar40;
        if (uVar40 <= uVar15) {
          uVar14 = uVar15;
        }
        if (uVar14 != 0) {
          if (uVar14 >> 0x3b != 0) {
LAB_7103081f34:
                    /* WARNING: Subroutine does not return */
            abort();
          }
          goto LAB_710307f1f4;
        }
LAB_710307f254:
        lVar18 = 0;
      }
      else {
        uVar14 = 0x7ffffffffffffff;
LAB_710307f1f4:
        ppplVar16 = (long ***)(uVar14 * 0x20);
        if (ppplVar16 == (long ***)0x0) {
          ppplVar16 = (long ***)0x1;
        }
        lVar18 = FUN_710392e290(0x10,ppplVar16,param_3,param_4,param_5,param_6,0xbc0ad263c,
                                0xa381ad7fa);
        if (lVar18 == 0) {
          if (DAT_7105332f00 != (long *)0x0) {
            local_84 = 0;
            pppplVar37 = local_a0;
            local_a0[0] = ppplVar16;
            uVar15 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_84);
            if (((uVar15 & 1) != 0) &&
               (lVar18 = FUN_710392e290(0x10,ppplVar16,pppplVar37,param_4,param_5,param_6,uVar30,
                                        uVar21), lVar18 != 0)) goto LAB_710307f258;
          }
          goto LAB_710307f254;
        }
      }
LAB_710307f258:
      pvVar28 = (void *)(lVar18 + uVar29 * 0x20);
      param_3 = (long ****)(uVar39 * 0x20);
      lVar13 = lVar18 + uVar14 * 0x20;
      memset(pvVar28,0,(size_t)param_3);
      lVar27 = lVar18 + uVar40 * 0x20;
      lVar19 = (long)puVar36 - (long)puVar35;
      if (lVar19 == 0) {
        *(void **)(param_1 + 0xb0) = pvVar28;
        *(long *)(param_1 + 0xb8) = lVar27;
        *(long *)(param_1 + 0xc0) = lVar13;
      }
      else {
        puVar22 = (undefined8 *)((long)pvVar28 + -0x10);
        do {
          puVar33 = puVar36 + -4;
          uVar21 = *puVar33;
          *puVar22 = 0;
          puVar22[1] = 0;
          puVar22[-2] = uVar21;
          puVar22[-1] = 0;
          puVar22[-1] = puVar36[-3];
          *puVar22 = puVar36[-2];
          puVar22[1] = puVar36[-1];
          puVar22 = puVar22 + -4;
          puVar36[-2] = 0;
          puVar36[-1] = 0;
          puVar36[-3] = 0;
          puVar36 = puVar33;
        } while (puVar35 != puVar33);
        puVar35 = *(undefined8 **)(param_1 + 0xb0);
        puVar36 = *(undefined8 **)(param_1 + 0xb8);
        *(ulong *)(param_1 + 0xb0) =
             lVar18 + (uVar29 + (lVar19 - 0x20U >> 5 ^ 0xffffffffffffffff)) * 0x20;
        *(long *)(param_1 + 0xb8) = lVar27;
        *(long *)(param_1 + 0xc0) = lVar13;
        while (puVar22 = puVar36, puVar22 != puVar35) {
          uVar29 = puVar22[-3];
          puVar36 = puVar22 + -4;
          if (uVar29 != 0) {
            puVar22[-2] = uVar29;
            FUN_710392eb40(uVar29);
          }
        }
      }
      if (puVar35 != (undefined8 *)0x0) {
        FUN_710392eb40((ulong)puVar35);
      }
    }
    else {
      uVar29 = uVar39;
      if ((uVar39 & 1) != 0) {
        puVar36[2] = 0;
        puVar36[3] = 0;
        *puVar36 = 0;
        puVar36[1] = 0;
        puVar36 = (undefined8 *)(*(long *)(param_1 + 0xb8) + 0x20);
        uVar29 = uVar39 - 1;
        *(undefined8 **)(param_1 + 0xb8) = puVar36;
      }
      if (uVar39 != 1) {
        do {
          puVar36[2] = 0;
          puVar36[3] = 0;
          uVar29 = uVar29 - 2;
          *puVar36 = 0;
          puVar36[1] = 0;
          lVar18 = *(long *)(param_1 + 0xb8);
          *(long *)(param_1 + 0xb8) = lVar18 + 0x20;
          *(undefined8 *)(lVar18 + 0x30) = 0;
          *(undefined8 *)(lVar18 + 0x38) = 0;
          *(undefined8 *)(lVar18 + 0x20) = 0;
          *(undefined8 *)(lVar18 + 0x28) = 0;
          puVar36 = (undefined8 *)(*(long *)(param_1 + 0xb8) + 0x20);
          *(undefined8 **)(param_1 + 0xb8) = puVar36;
        } while (uVar29 != 0);
      }
    }
  }
  else if (uVar29 != uVar40) {
    while (puVar22 = puVar36, puVar35 + uVar40 * 4 != puVar22) {
      uVar29 = puVar22[-3];
      puVar36 = puVar22 + -4;
      if (uVar29 != 0) {
        puVar22[-2] = uVar29;
        FUN_710392eb40(uVar29);
      }
    }
    *(undefined8 **)(param_1 + 0xb8) = puVar35 + uVar40 * 4;
  }
  uVar10 = (uint)*pbVar41;
  if ((*pbVar41 - 0xb < 2) && (0 < *(int *)(pbVar41 + 1))) {
    lVar18 = 0;
LAB_710307f400:
    do {
      uVar30 = 0xa381ad7fa;
      uVar21 = 0xbc0ad263c;
      iVar11 = (int)lVar18;
      if (iVar11 < 0) {
LAB_710307f43c:
        ppppbVar9 = (byte ****)0x0;
        pbVar32 = &DAT_7104742dbb;
      }
      else {
        ppppbVar9 = (byte ****)0x0;
        pbVar32 = &DAT_7104742dbb;
        if (uVar10 == 0xb) {
          if (*(int *)(pbVar41 + 1) <= iVar11) goto LAB_710307f43c;
          pbVar32 = pbVar41 + *(int *)(pbVar41 + (long)iVar11 * 4 + 5);
          ppppbVar9 = local_100;
        }
      }
      if ((*pbVar32 == 0xc) && (iVar11 = *(int *)(pbVar32 + 1) + -1, 0 < *(int *)(pbVar32 + 1))) {
        iVar26 = 0;
        do {
          iVar3 = iVar11 + iVar26;
          if (iVar3 < 0) {
            iVar3 = iVar3 + 1;
          }
          iVar3 = iVar3 >> 1;
          puVar1 = (uint *)((long)ppppbVar9[5] + (long)iVar3 * 8 + (long)*(int *)(pbVar32 + 5));
          if (ppppbVar9[4][*puVar1] == (byte **)0xa737452e1) {
            uVar10 = puVar1[1];
            if (-1 < (int)uVar10) {
              pbVar17 = pbVar32 + (int)uVar10;
              ppppbVar23 = ppppbVar9;
              goto LAB_710307f4d0;
            }
            break;
          }
          iVar6 = iVar3 + -1;
          if (ppppbVar9[4][*puVar1] < (byte **)0xa737452e2) {
            iVar26 = iVar3 + 1;
            iVar6 = iVar11;
          }
          iVar11 = iVar6;
        } while (iVar26 <= iVar11);
      }
      ppppbVar23 = (byte ****)0x0;
      pbVar17 = &DAT_7104742dbb;
LAB_710307f4d0:
      if (*pbVar17 == 9) {
        ppbVar24 = ppppbVar23[4][*(int *)(pbVar17 + 1)];
      }
      else {
        ppbVar24 = (byte **)0x0;
      }
      *(byte ***)(*plVar2 + lVar18 * 0x20) = ppbVar24;
      pbVar17 = &DAT_7104742dbb;
      if ((*pbVar32 == 0xc) && (iVar11 = *(int *)(pbVar32 + 1) + -1, 0 < *(int *)(pbVar32 + 1))) {
        iVar26 = 0;
        do {
          iVar3 = iVar11 + iVar26;
          if (iVar3 < 0) {
            iVar3 = iVar3 + 1;
          }
          iVar3 = iVar3 >> 1;
          puVar1 = (uint *)((long)ppppbVar9[5] + (long)iVar3 * 8 + (long)*(int *)(pbVar32 + 5));
          if (ppppbVar9[4][*puVar1] == (byte **)0x68fce0ef3) {
            uVar29 = (ulong)(int)puVar1[1];
            param_4 = (byte ****)0x0;
            if ((uVar29 & 0x80000000) == 0) {
              param_4 = ppppbVar9;
              pbVar17 = pbVar32 + uVar29;
            }
            goto LAB_710307f568;
          }
          iVar6 = iVar3 + -1;
          if (ppppbVar9[4][*puVar1] < (byte **)0x68fce0ef4) {
            iVar26 = iVar3 + 1;
            iVar6 = iVar11;
          }
          iVar11 = iVar6;
        } while (iVar26 <= iVar11);
      }
      param_4 = (byte ****)0x0;
LAB_710307f568:
      lVar13 = *plVar2 + lVar18 * 0x20;
      if (*pbVar17 - 0xb < 2) {
        iVar11 = *(int *)(pbVar17 + 1);
      }
      else {
        iVar11 = 0;
      }
      uVar40 = (ulong)iVar11;
      plVar34 = (long *)(lVar13 + 0x10);
      puVar36 = (undefined8 *)*plVar34;
      pvVar28 = *(void **)(lVar13 + 8);
      __n = (long)puVar36 - (long)pvVar28;
      uVar29 = (long)__n >> 3;
      if (uVar29 < uVar40) {
        lVar27 = *(long *)(lVar13 + 0x18);
        uVar39 = uVar40 - uVar29;
        if ((ulong)(lVar27 - (long)puVar36 >> 3) < uVar39) {
          if (iVar11 < 0) {
                    /* WARNING: Subroutine does not return */
            std::__vector_base_common<true>::__throw_length_error();
          }
          lVar27 = lVar27 - (long)pvVar28;
          if ((ulong)(lVar27 >> 3) < 0xfffffffffffffff) {
            uVar15 = lVar27 >> 2;
            uVar14 = uVar40;
            if (uVar40 <= uVar15) {
              uVar14 = uVar15;
            }
            if (uVar14 != 0) {
              if (uVar14 >> 0x3d == 0) goto LAB_710307f68c;
              goto LAB_7103081f34;
            }
            uVar14 = 0;
            pvVar38 = (void *)0x0;
          }
          else {
            uVar14 = 0x1fffffffffffffff;
LAB_710307f68c:
            ppplVar16 = (long ***)(uVar14 * 8);
            if (ppplVar16 == (long ***)0x0) {
              ppplVar16 = (long ***)0x1;
            }
            ppppbVar9 = param_4;
            pvVar38 = (void *)FUN_710392e290(0x10,ppplVar16,(long ****)0x68fce0ef3,param_4,param_5,
                                             param_6,0xbc0ad263c,0xa381ad7fa);
            if (pvVar38 == (void *)0x0) {
              if (DAT_7105332f00 != (long *)0x0) {
                local_84 = 0;
                pppplVar37 = local_a0;
                local_a0[0] = ppplVar16;
                uVar15 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_84);
                if (((uVar15 & 1) != 0) &&
                   (pvVar38 = (void *)FUN_710392e290(0x10,ppplVar16,pppplVar37,ppppbVar9,param_5,
                                                     param_6,uVar21,uVar30), pvVar38 != (void *)0x0)
                   ) goto LAB_710307f700;
              }
              pvVar38 = (void *)0x0;
            }
          }
LAB_710307f700:
          memset((void *)((long)pvVar38 + uVar29 * 8),0,uVar39 * 8);
          if (0 < (long)__n) {
            memcpy(pvVar38,pvVar28,__n);
          }
          *(void **)(lVar13 + 8) = pvVar38;
          *plVar34 = (long)((long)pvVar38 + uVar40 * 8);
          *(long *)(lVar13 + 0x18) = (long)((long)pvVar38 + uVar14 * 8);
          if (pvVar28 != (void *)0x0) {
            FUN_710392eb40((ulong)pvVar28);
          }
        }
        else {
          uVar29 = uVar39;
          if ((uVar39 & 1) != 0) {
            *puVar36 = 0;
            puVar36 = (undefined8 *)(*plVar34 + 8);
            uVar29 = uVar39 - 1;
            *plVar34 = (long)puVar36;
          }
          if (uVar39 != 1) {
            do {
              *puVar36 = 0;
              lVar13 = *plVar34;
              *plVar34 = lVar13 + 8;
              *(undefined8 *)(lVar13 + 8) = 0;
              puVar36 = (undefined8 *)(*plVar34 + 8);
              uVar29 = uVar29 - 2;
              *plVar34 = (long)puVar36;
            } while (uVar29 != 0);
          }
        }
      }
      else if (uVar29 != uVar40) {
        *plVar34 = (long)((long)pvVar28 + uVar40 * 8);
      }
      param_3 = (long ****)0x68fce0ef3;
      uVar10 = (uint)*pbVar17;
      if ((*pbVar17 - 0xb < 2) && (0 < *(int *)(pbVar17 + 1))) {
        lVar13 = 0;
LAB_710307f7dc:
        do {
          iVar11 = (int)lVar13;
          if (iVar11 < 0) {
LAB_710307f814:
            ppppbVar9 = (byte ****)0x0;
            pbVar32 = &DAT_7104742dbb;
          }
          else {
            pbVar32 = &DAT_7104742dbb;
            ppppbVar9 = (byte ****)0x0;
            if (uVar10 == 0xb) {
              if (*(int *)(pbVar17 + 1) <= iVar11) goto LAB_710307f814;
              pbVar32 = pbVar17 + *(int *)(pbVar17 + (long)iVar11 * 4 + 5);
              ppppbVar9 = param_4;
            }
          }
          pbVar31 = &DAT_7104742dbb;
          if ((*pbVar32 == 0xc) && (iVar11 = *(int *)(pbVar32 + 1) + -1, 0 < *(int *)(pbVar32 + 1)))
          {
            iVar26 = 0;
            do {
              iVar3 = iVar11 + iVar26;
              if (iVar3 < 0) {
                iVar3 = iVar3 + 1;
              }
              iVar3 = iVar3 >> 1;
              puVar1 = (uint *)((long)ppppbVar9[5] + (long)iVar3 * 8 + (long)*(int *)(pbVar32 + 5));
              if (ppppbVar9[4][*puVar1] == (byte **)0x8865f80c0) {
                uVar10 = puVar1[1];
                if (-1 < (int)uVar10) {
                  pbVar31 = pbVar32 + (int)uVar10;
                }
                break;
              }
              iVar6 = iVar3 + -1;
              if (ppppbVar9[4][*puVar1] < (byte **)0x8865f80c1) {
                iVar26 = iVar3 + 1;
                iVar6 = iVar11;
              }
              iVar11 = iVar6;
            } while (iVar26 <= iVar11);
          }
          uVar42 = 0x42700000;
          if (*pbVar31 == 8) {
            uVar42 = *(undefined4 *)(pbVar31 + 1);
          }
          *(undefined4 *)(*(long *)(*plVar2 + lVar18 * 0x20 + 8) + lVar13 * 8) = uVar42;
          pbVar31 = &DAT_7104742dbb;
          if ((*pbVar32 == 0xc) && (iVar11 = *(int *)(pbVar32 + 1) + -1, 0 < *(int *)(pbVar32 + 1)))
          {
            iVar26 = 0;
            do {
              iVar3 = iVar11 + iVar26;
              if (iVar3 < 0) {
                iVar3 = iVar3 + 1;
              }
              iVar3 = iVar3 >> 1;
              puVar1 = (uint *)((long)ppppbVar9[5] + (long)iVar3 * 8 + (long)*(int *)(pbVar32 + 5));
              if (ppppbVar9[4][*puVar1] == (byte **)0xa13040909) {
                uVar10 = puVar1[1];
                if (-1 < (int)uVar10) {
                  pbVar31 = pbVar32 + (int)uVar10;
                }
                break;
              }
              iVar6 = iVar3 + -1;
              if (ppppbVar9[4][*puVar1] < (byte **)0xa1304090a) {
                iVar26 = iVar3 + 1;
                iVar6 = iVar11;
              }
              iVar11 = iVar6;
            } while (iVar26 <= iVar11);
          }
          uVar42 = 0x3f99999a;
          if (*pbVar31 == 8) {
            uVar42 = *(undefined4 *)(pbVar31 + 1);
          }
          lVar27 = lVar13 * 8;
          lVar13 = lVar13 + 1;
          *(undefined4 *)(*(long *)(*plVar2 + lVar18 * 0x20 + 8) + lVar27 + 4) = uVar42;
          uVar10 = (uint)*pbVar17;
          if (uVar10 - 0xb < 2) {
            if (*(int *)(pbVar17 + 1) <= lVar13) break;
            goto LAB_710307f7dc;
          }
        } while (lVar13 < 0);
      }
      uVar10 = (uint)*pbVar41;
      lVar18 = lVar18 + 1;
      if (uVar10 - 0xb < 2) {
        if (*(int *)(pbVar41 + 1) <= lVar18) break;
        goto LAB_710307f400;
      }
    } while (lVar18 < 0);
  }
  uVar30 = 0xa381ad7fa;
  uVar21 = 0xbc0ad263c;
  pcVar12 = (char *)param_2[1];
  if (*pcVar12 == '\f') {
    iVar11 = *(int *)(pcVar12 + 1) + -1;
    if (*(int *)(pcVar12 + 1) < 1) {
LAB_710307fac4:
      lVar18 = 0;
      pbVar41 = &DAT_7104742dbb;
    }
    else {
      lVar18 = *param_2;
      iVar26 = 0;
      pbVar41 = &DAT_7104742dbb;
      do {
        iVar3 = iVar11 + iVar26;
        if (iVar3 < 0) {
          iVar3 = iVar3 + 1;
        }
        iVar3 = iVar3 >> 1;
        puVar1 = (uint *)(*(long *)(lVar18 + 0x28) + (long)*(int *)(pcVar12 + 5) + (long)iVar3 * 8);
        uVar29 = *(ulong *)(*(long *)(lVar18 + 0x20) + (ulong)*puVar1 * 8);
        if (uVar29 == 0x180544039b) {
          uVar10 = puVar1[1];
          if ((int)uVar10 < 0) goto LAB_710307fac4;
          pbVar41 = (byte *)(pcVar12 + (int)uVar10);
          goto LAB_710307fad0;
        }
        iVar6 = iVar3 + -1;
        if (uVar29 < 0x180544039c) {
          iVar26 = iVar3 + 1;
          iVar6 = iVar11;
        }
        iVar11 = iVar6;
      } while (iVar26 <= iVar11);
      lVar18 = 0;
    }
  }
  else {
    lVar18 = 0;
    pbVar41 = &DAT_7104742dbb;
  }
LAB_710307fad0:
  if (*pbVar41 - 0xb < 2) {
    iVar11 = *(int *)(pbVar41 + 1);
  }
  else {
    iVar11 = 0;
  }
  puVar35 = *(undefined8 **)(param_1 + 200);
  puVar36 = *(undefined8 **)(param_1 + 0xd0);
  uVar29 = (ulong)iVar11;
  lVar13 = (long)puVar36 - (long)puVar35 >> 5;
  plVar2 = (long *)(param_1 + 200);
  if ((ulong)(lVar13 * -0x5555555555555555) < uVar29) {
    uVar40 = uVar29 + lVar13 * 0x5555555555555555;
    if ((ulong)((*(long *)(param_1 + 0xd8) - (long)puVar36 >> 5) * -0x5555555555555555) < uVar40) {
      if (iVar11 < 0) goto LAB_7103081f2c;
      lVar27 = *(long *)(param_1 + 0xd8) - (long)puVar35 >> 5;
      if ((ulong)(lVar27 * -0x5555555555555555) < 0x155555555555555) {
        uVar14 = lVar27 * 0x5555555555555556;
        uVar39 = uVar29;
        if (uVar29 <= uVar14) {
          uVar39 = uVar14;
        }
        if (uVar39 != 0) goto LAB_710307fc8c;
        lVar27 = 0;
      }
      else {
        uVar39 = 0x2aaaaaaaaaaaaaa;
LAB_710307fc8c:
        ppplVar16 = (long ***)(uVar39 * 0x60);
        if (ppplVar16 == (long ***)0x0) {
          ppplVar16 = (long ***)0x1;
        }
        lVar27 = FUN_710392e290(0x10,ppplVar16,param_3,param_4,param_5,param_6,0xbc0ad263c,
                                0xa381ad7fa);
        if (lVar27 == 0) {
          if (DAT_7105332f00 != (long *)0x0) {
            local_84 = 0;
            pppplVar37 = local_a0;
            local_a0[0] = ppplVar16;
            uVar14 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_84);
            if (((uVar14 & 1) != 0) &&
               (lVar27 = FUN_710392e290(0x10,ppplVar16,pppplVar37,param_4,param_5,param_6,uVar21,
                                        uVar30), lVar27 != 0)) goto LAB_710307fcfc;
          }
          lVar27 = 0;
        }
      }
LAB_710307fcfc:
      pvVar28 = (void *)(lVar27 + lVar13 * 0x20);
      lVar13 = lVar27 + uVar39 * 0x60;
      param_3 = (long ****)(uVar40 * 0x60);
      memset(pvVar28,0,(size_t)param_3);
      lVar27 = lVar27 + uVar29 * 0x60;
      if (puVar36 == puVar35) {
        *(void **)(param_1 + 200) = pvVar28;
        *(long *)(param_1 + 0xd0) = lVar27;
        *(long *)(param_1 + 0xd8) = lVar13;
      }
      else {
        lVar19 = 0;
        do {
          uVar21 = *(undefined8 *)((long)puVar36 + lVar19 + -0x60);
          uVar30 = *(undefined8 *)((long)puVar36 + lVar19 + -0x50);
          lVar20 = lVar19 + -0x60;
          *(undefined8 *)((long)pvVar28 + lVar19 + -0x58) =
               *(undefined8 *)((long)puVar36 + lVar19 + -0x58);
          *(undefined8 *)((long)pvVar28 + lVar19 + -0x50) = uVar30;
          *(undefined8 *)((long)pvVar28 + lVar19 + -0x60) = uVar21;
          uVar21 = *(undefined8 *)((long)puVar36 + lVar19 + -0x40);
          *(undefined8 *)((long)puVar36 + lVar19 + -0x60) = 0;
          *(undefined8 *)((long)puVar36 + lVar19 + -0x58) = 0;
          *(undefined8 *)((long)puVar36 + lVar19 + -0x50) = 0;
          *(undefined8 *)((long)pvVar28 + lVar19 + -0x48) =
               *(undefined8 *)((long)puVar36 + lVar19 + -0x48);
          *(undefined8 *)((long)pvVar28 + lVar19 + -0x40) = uVar21;
          uVar30 = *(undefined8 *)((long)puVar36 + lVar19 + -0x28);
          uVar21 = *(undefined8 *)((long)puVar36 + lVar19 + -0x30);
          *(undefined8 *)((long)pvVar28 + lVar19 + -0x38) =
               *(undefined8 *)((long)puVar36 + lVar19 + -0x38);
          *(undefined8 *)((long)pvVar28 + lVar19 + -0x30) = uVar21;
          *(undefined8 *)((long)pvVar28 + lVar19 + -0x28) = uVar30;
          uVar30 = *(undefined8 *)((long)puVar36 + lVar19 + -0x10);
          uVar21 = *(undefined8 *)((long)puVar36 + lVar19 + -0x18);
          *(undefined8 *)((long)puVar36 + lVar19 + -0x38) = 0;
          *(undefined8 *)((long)puVar36 + lVar19 + -0x30) = 0;
          *(undefined8 *)((long)puVar36 + lVar19 + -0x28) = 0;
          *(undefined8 *)((long)pvVar28 + lVar19 + -0x20) =
               *(undefined8 *)((long)puVar36 + lVar19 + -0x20);
          *(undefined8 *)((long)pvVar28 + lVar19 + -0x18) = uVar21;
          *(undefined8 *)((long)pvVar28 + lVar19 + -0x10) = uVar30;
          *(undefined8 *)((long)puVar36 + lVar19 + -0x20) = 0;
          *(undefined8 *)((long)puVar36 + lVar19 + -0x18) = 0;
          *(undefined8 *)((long)puVar36 + lVar19 + -0x10) = 0;
          *(undefined8 *)((long)pvVar28 + lVar19 + -8) =
               *(undefined8 *)((long)puVar36 + lVar19 + -8);
          lVar19 = lVar20;
        } while ((long)puVar35 - (long)puVar36 != lVar20);
        puVar35 = *(undefined8 **)(param_1 + 200);
        puVar36 = *(undefined8 **)(param_1 + 0xd0);
        *(long *)(param_1 + 200) = (long)pvVar28 + lVar20;
        *(long *)(param_1 + 0xd0) = lVar27;
        *(long *)(param_1 + 0xd8) = lVar13;
        while (puVar22 = puVar36, puVar22 != puVar35) {
          if (((*(byte *)(puVar22 + -4) & 1) != 0) && (puVar22[-2] != 0)) {
            FUN_710392eb40(puVar22[-2]);
          }
          if (((*(byte *)(puVar22 + -7) & 1) != 0) && (puVar22[-5] != 0)) {
            FUN_710392eb40(puVar22[-5]);
          }
          puVar36 = puVar22 + -0xc;
          if (((*(byte *)(puVar22 + -0xc) & 1) != 0) && (puVar22[-10] != 0)) {
            FUN_710392eb40(puVar22[-10]);
          }
        }
      }
      if (puVar35 != (undefined8 *)0x0) {
        FUN_710392eb40((ulong)puVar35);
      }
    }
    else {
      uVar29 = uVar40;
      if ((uVar40 & 1) != 0) {
        puVar36[10] = 0;
        puVar36[0xb] = 0;
        puVar36[8] = 0;
        puVar36[9] = 0;
        puVar36[6] = 0;
        puVar36[7] = 0;
        puVar36[4] = 0;
        puVar36[5] = 0;
        puVar36[2] = 0;
        puVar36[3] = 0;
        *puVar36 = 0;
        puVar36[1] = 0;
        puVar36 = (undefined8 *)(*(long *)(param_1 + 0xd0) + 0x60);
        uVar29 = uVar40 - 1;
        *(undefined8 **)(param_1 + 0xd0) = puVar36;
      }
      if (uVar40 != 1) {
        do {
          puVar36[10] = 0;
          puVar36[0xb] = 0;
          uVar29 = uVar29 - 2;
          puVar36[8] = 0;
          puVar36[9] = 0;
          puVar36[6] = 0;
          puVar36[7] = 0;
          puVar36[4] = 0;
          puVar36[5] = 0;
          puVar36[2] = 0;
          puVar36[3] = 0;
          *puVar36 = 0;
          puVar36[1] = 0;
          lVar13 = *(long *)(param_1 + 0xd0);
          *(long *)(param_1 + 0xd0) = lVar13 + 0x60;
          *(undefined8 *)(lVar13 + 0xb0) = 0;
          *(undefined8 *)(lVar13 + 0xb8) = 0;
          *(undefined8 *)(lVar13 + 0xa0) = 0;
          *(undefined8 *)(lVar13 + 0xa8) = 0;
          *(undefined8 *)(lVar13 + 0x90) = 0;
          *(undefined8 *)(lVar13 + 0x98) = 0;
          *(undefined8 *)(lVar13 + 0x80) = 0;
          *(undefined8 *)(lVar13 + 0x88) = 0;
          *(undefined8 *)(lVar13 + 0x70) = 0;
          *(undefined8 *)(lVar13 + 0x78) = 0;
          *(undefined8 *)(lVar13 + 0x60) = 0;
          *(undefined8 *)(lVar13 + 0x68) = 0;
          puVar36 = (undefined8 *)(*(long *)(param_1 + 0xd0) + 0x60);
          *(undefined8 **)(param_1 + 0xd0) = puVar36;
        } while (uVar29 != 0);
      }
    }
  }
  else if (lVar13 * -0x5555555555555555 - uVar29 != 0) {
    while (puVar22 = puVar36, puVar35 + uVar29 * 0xc != puVar22) {
      if (((*(byte *)(puVar22 + -4) & 1) != 0) && (puVar22[-2] != 0)) {
        FUN_710392eb40(puVar22[-2]);
      }
      if (((*(byte *)(puVar22 + -7) & 1) != 0) && (puVar22[-5] != 0)) {
        FUN_710392eb40(puVar22[-5]);
      }
      puVar36 = puVar22 + -0xc;
      if (((*(byte *)(puVar22 + -0xc) & 1) != 0) && (puVar22[-10] != 0)) {
        FUN_710392eb40(puVar22[-10]);
      }
    }
    *(undefined8 **)(param_1 + 0xd0) = puVar35 + uVar29 * 0xc;
  }
  uVar10 = (uint)*pbVar41;
  if ((*pbVar41 - 0xb < 2) && (0 < *(int *)(pbVar41 + 1))) {
    lVar13 = 0;
LAB_710307ff10:
    do {
      iVar11 = (int)lVar13;
      if (iVar11 < 0) {
LAB_710307ff48:
        lVar27 = 0;
        pbVar32 = &DAT_7104742dbb;
      }
      else {
        lVar27 = 0;
        pbVar32 = &DAT_7104742dbb;
        if (uVar10 == 0xb) {
          if (*(int *)(pbVar41 + 1) <= iVar11) goto LAB_710307ff48;
          pbVar32 = pbVar41 + *(int *)(pbVar41 + (long)iVar11 * 4 + 5);
          lVar27 = lVar18;
        }
      }
      if ((*pbVar32 == 0xc) && (iVar11 = *(int *)(pbVar32 + 1) + -1, 0 < *(int *)(pbVar32 + 1))) {
        iVar26 = 0;
        do {
          iVar3 = iVar11 + iVar26;
          if (iVar3 < 0) {
            iVar3 = iVar3 + 1;
          }
          iVar3 = iVar3 >> 1;
          uVar29 = *(ulong *)(*(long *)(lVar27 + 0x20) +
                             (ulong)*(uint *)(*(long *)(lVar27 + 0x28) + (long)*(int *)(pbVar32 + 5)
                                             + (long)iVar3 * 8) * 8);
          if (uVar29 == 0xa737452e1) break;
          iVar6 = iVar3 + -1;
          if (uVar29 < 0xa737452e2) {
            iVar26 = iVar3 + 1;
            iVar6 = iVar11;
          }
          iVar11 = iVar6;
        } while (iVar26 <= iVar11);
      }
      std::string::assign((char *)(*plVar2 + lVar13 * 0x60));
      pbVar17 = &DAT_7104742dbb;
      if ((*pbVar32 == 0xc) && (iVar11 = *(int *)(pbVar32 + 1) + -1, 0 < *(int *)(pbVar32 + 1))) {
        iVar26 = 0;
        do {
          iVar3 = iVar11 + iVar26;
          if (iVar3 < 0) {
            iVar3 = iVar3 + 1;
          }
          iVar3 = iVar3 >> 1;
          puVar1 = (uint *)(*(long *)(lVar27 + 0x28) + (long)*(int *)(pbVar32 + 5) + (long)iVar3 * 8
                           );
          uVar29 = *(ulong *)(*(long *)(lVar27 + 0x20) + (ulong)*puVar1 * 8);
          if (uVar29 == 0x18cdc1683) {
            uVar10 = puVar1[1];
            if (-1 < (int)uVar10) {
              pbVar17 = pbVar32 + (int)uVar10;
            }
            break;
          }
          iVar6 = iVar3 + -1;
          if (uVar29 < 0x18cdc1684) {
            iVar26 = iVar3 + 1;
            iVar6 = iVar11;
          }
          iVar11 = iVar6;
        } while (iVar26 <= iVar11);
      }
      uVar42 = 0xc20371aa;
      if (*pbVar17 == 8) {
        uVar42 = *(undefined4 *)(pbVar17 + 1);
      }
      *(undefined4 *)(*plVar2 + lVar13 * 0x60 + 0x18) = uVar42;
      pbVar17 = &DAT_7104742dbb;
      if ((*pbVar32 == 0xc) && (iVar11 = *(int *)(pbVar32 + 1) + -1, 0 < *(int *)(pbVar32 + 1))) {
        iVar26 = 0;
        do {
          iVar3 = iVar11 + iVar26;
          if (iVar3 < 0) {
            iVar3 = iVar3 + 1;
          }
          iVar3 = iVar3 >> 1;
          puVar1 = (uint *)(*(long *)(lVar27 + 0x28) + (long)*(int *)(pbVar32 + 5) + (long)iVar3 * 8
                           );
          uVar29 = *(ulong *)(*(long *)(lVar27 + 0x20) + (ulong)*puVar1 * 8);
          if (uVar29 == 0x1fbdb2615) {
            uVar10 = puVar1[1];
            if (-1 < (int)uVar10) {
              pbVar17 = pbVar32 + (int)uVar10;
            }
            break;
          }
          iVar6 = iVar3 + -1;
          if (uVar29 < 0x1fbdb2616) {
            iVar26 = iVar3 + 1;
            iVar6 = iVar11;
          }
          iVar11 = iVar6;
        } while (iVar26 <= iVar11);
      }
      uVar42 = 0xc1fe6a7f;
      if (*pbVar17 == 8) {
        uVar42 = *(undefined4 *)(pbVar17 + 1);
      }
      *(undefined4 *)(*plVar2 + lVar13 * 0x60 + 0x1c) = uVar42;
      pbVar17 = &DAT_7104742dbb;
      if ((*pbVar32 == 0xc) && (iVar11 = *(int *)(pbVar32 + 1) + -1, 0 < *(int *)(pbVar32 + 1))) {
        iVar26 = 0;
        do {
          iVar3 = iVar11 + iVar26;
          if (iVar3 < 0) {
            iVar3 = iVar3 + 1;
          }
          iVar3 = iVar3 >> 1;
          puVar1 = (uint *)(*(long *)(lVar27 + 0x28) + (long)*(int *)(pbVar32 + 5) + (long)iVar3 * 8
                           );
          uVar29 = *(ulong *)(*(long *)(lVar27 + 0x20) + (ulong)*puVar1 * 8);
          if (uVar29 == 0x162d277af) {
            uVar10 = puVar1[1];
            if (-1 < (int)uVar10) {
              pbVar17 = pbVar32 + (int)uVar10;
            }
            break;
          }
          iVar6 = iVar3 + -1;
          if (uVar29 < 0x162d277b0) {
            iVar26 = iVar3 + 1;
            iVar6 = iVar11;
          }
          iVar11 = iVar6;
        } while (iVar26 <= iVar11);
      }
      uVar42 = 0;
      if (*pbVar17 == 8) {
        uVar42 = *(undefined4 *)(pbVar17 + 1);
      }
      *(undefined4 *)(*plVar2 + lVar13 * 0x60 + 0x20) = uVar42;
      pbVar17 = &DAT_7104742dbb;
      if ((*pbVar32 == 0xc) && (iVar11 = *(int *)(pbVar32 + 1) + -1, 0 < *(int *)(pbVar32 + 1))) {
        iVar26 = 0;
        do {
          iVar3 = iVar11 + iVar26;
          if (iVar3 < 0) {
            iVar3 = iVar3 + 1;
          }
          iVar3 = iVar3 >> 1;
          puVar1 = (uint *)(*(long *)(lVar27 + 0x28) + (long)*(int *)(pbVar32 + 5) + (long)iVar3 * 8
                           );
          uVar29 = *(ulong *)(*(long *)(lVar27 + 0x20) + (ulong)*puVar1 * 8);
          if (uVar29 == 0x5ec462584) {
            uVar10 = puVar1[1];
            if (-1 < (int)uVar10) {
              pbVar17 = pbVar32 + (int)uVar10;
            }
            break;
          }
          iVar6 = iVar3 + -1;
          if (uVar29 < 0x5ec462585) {
            iVar26 = iVar3 + 1;
            iVar6 = iVar11;
          }
          iVar11 = iVar6;
        } while (iVar26 <= iVar11);
      }
      uVar42 = 0x3f800000;
      if (*pbVar17 == 8) {
        uVar42 = *(undefined4 *)(pbVar17 + 1);
      }
      *(undefined4 *)(*plVar2 + lVar13 * 0x60 + 0x24) = uVar42;
      if ((*pbVar32 == 0xc) && (iVar11 = *(int *)(pbVar32 + 1) + -1, 0 < *(int *)(pbVar32 + 1))) {
        iVar26 = 0;
        do {
          iVar3 = iVar11 + iVar26;
          if (iVar3 < 0) {
            iVar3 = iVar3 + 1;
          }
          iVar3 = iVar3 >> 1;
          uVar29 = *(ulong *)(*(long *)(lVar27 + 0x20) +
                             (ulong)*(uint *)(*(long *)(lVar27 + 0x28) + (long)*(int *)(pbVar32 + 5)
                                             + (long)iVar3 * 8) * 8);
          if (uVar29 == 0x12527b1ef0) break;
          iVar6 = iVar3 + -1;
          if (uVar29 < 0x12527b1ef1) {
            iVar26 = iVar3 + 1;
            iVar6 = iVar11;
          }
          iVar11 = iVar6;
        } while (iVar26 <= iVar11);
      }
      std::string::assign((char *)(*plVar2 + lVar13 * 0x60 + 0x28));
      if ((*pbVar32 == 0xc) && (iVar11 = *(int *)(pbVar32 + 1) + -1, 0 < *(int *)(pbVar32 + 1))) {
        iVar26 = 0;
        do {
          iVar3 = iVar11 + iVar26;
          if (iVar3 < 0) {
            iVar3 = iVar3 + 1;
          }
          iVar3 = iVar3 >> 1;
          uVar29 = *(ulong *)(*(long *)(lVar27 + 0x20) +
                             (ulong)*(uint *)(*(long *)(lVar27 + 0x28) + (long)*(int *)(pbVar32 + 5)
                                             + (long)iVar3 * 8) * 8);
          if (uVar29 == 0x1004c7627d) break;
          iVar6 = iVar3 + -1;
          if (uVar29 < 0x1004c7627e) {
            iVar26 = iVar3 + 1;
            iVar6 = iVar11;
          }
          iVar11 = iVar6;
        } while (iVar26 <= iVar11);
      }
      std::string::assign((char *)(*plVar2 + lVar13 * 0x60 + 0x40));
      pbVar17 = &DAT_7104742dbb;
      if ((*pbVar32 == 0xc) && (iVar11 = *(int *)(pbVar32 + 1) + -1, 0 < *(int *)(pbVar32 + 1))) {
        iVar26 = 0;
        do {
          iVar3 = iVar11 + iVar26;
          if (iVar3 < 0) {
            iVar3 = iVar3 + 1;
          }
          iVar3 = iVar3 >> 1;
          puVar1 = (uint *)(*(long *)(lVar27 + 0x28) + (long)*(int *)(pbVar32 + 5) + (long)iVar3 * 8
                           );
          uVar29 = *(ulong *)(*(long *)(lVar27 + 0x20) + (ulong)*puVar1 * 8);
          if (uVar29 == 0x9d2692f62) {
            uVar10 = puVar1[1];
            if (-1 < (int)uVar10) {
              pbVar17 = pbVar32 + (int)uVar10;
            }
            break;
          }
          iVar6 = iVar3 + -1;
          if (uVar29 < 0x9d2692f63) {
            iVar26 = iVar3 + 1;
            iVar6 = iVar11;
          }
          iVar11 = iVar6;
        } while (iVar26 <= iVar11);
      }
      switch(*pbVar17) {
      case 1:
      case 3:
        uVar10 = (uint)pbVar17[1];
        break;
      case 2:
        uVar10 = (uint)(char)pbVar17[1];
        break;
      case 4:
        uVar10 = (uint)*(short *)(pbVar17 + 1);
        break;
      case 5:
        uVar10 = (uint)*(ushort *)(pbVar17 + 1);
        break;
      case 6:
      case 7:
        uVar10 = *(uint *)(pbVar17 + 1);
        break;
      default:
        uVar10 = 0;
      }
      *(uint *)(*plVar2 + lVar13 * 0x60 + 0x58) = uVar10;
      pbVar17 = &DAT_7104742dbb;
      if ((*pbVar32 == 0xc) && (iVar11 = *(int *)(pbVar32 + 1) + -1, 0 < *(int *)(pbVar32 + 1))) {
        iVar26 = 0;
        do {
          iVar3 = iVar11 + iVar26;
          if (iVar3 < 0) {
            iVar3 = iVar3 + 1;
          }
          iVar3 = iVar3 >> 1;
          puVar1 = (uint *)(*(long *)(lVar27 + 0x28) + (long)*(int *)(pbVar32 + 5) + (long)iVar3 * 8
                           );
          uVar29 = *(ulong *)(*(long *)(lVar27 + 0x20) + (ulong)*puVar1 * 8);
          if (uVar29 == 0xba578ff09) {
            uVar10 = puVar1[1];
            if (-1 < (int)uVar10) {
              pbVar17 = pbVar32 + (int)uVar10;
            }
            break;
          }
          iVar6 = iVar3 + -1;
          if (uVar29 < 0xba578ff0a) {
            iVar26 = iVar3 + 1;
            iVar6 = iVar11;
          }
          iVar11 = iVar6;
        } while (iVar26 <= iVar11);
      }
      uVar42 = 0x42e20000;
      if (*pbVar17 == 8) {
        uVar42 = *(undefined4 *)(pbVar17 + 1);
      }
      lVar27 = lVar13 * 0x60;
      lVar13 = lVar13 + 1;
      *(undefined4 *)(*plVar2 + lVar27 + 0x5c) = uVar42;
      uVar10 = (uint)*pbVar41;
      if (uVar10 - 0xb < 2) {
        if (*(int *)(pbVar41 + 1) <= lVar13) break;
        goto LAB_710307ff10;
      }
    } while (lVar13 < 0);
  }
  uVar30 = 0xa381ad7fa;
  uVar21 = 0xbc0ad263c;
  pcVar12 = (char *)param_2[1];
  if ((*pcVar12 == '\f') && (iVar11 = *(int *)(pcVar12 + 1) + -1, 0 < *(int *)(pcVar12 + 1))) {
    lVar18 = *param_2;
    iVar26 = 0;
    pbVar41 = &DAT_7104742dbb;
    do {
      iVar3 = iVar11 + iVar26;
      if (iVar3 < 0) {
        iVar3 = iVar3 + 1;
      }
      iVar3 = iVar3 >> 1;
      puVar1 = (uint *)(*(long *)(lVar18 + 0x28) + (long)*(int *)(pcVar12 + 5) + (long)iVar3 * 8);
      uVar29 = *(ulong *)(*(long *)(lVar18 + 0x20) + (ulong)*puVar1 * 8);
      if (uVar29 == 0x1a598ccc5b) {
        uVar10 = puVar1[1];
        if ((int)uVar10 < 0) goto LAB_71030806ac;
        pbVar41 = (byte *)(pcVar12 + (int)uVar10);
        goto LAB_71030806b8;
      }
      iVar6 = iVar3 + -1;
      if (uVar29 < 0x1a598ccc5c) {
        iVar26 = iVar3 + 1;
        iVar6 = iVar11;
      }
      iVar11 = iVar6;
    } while (iVar26 <= iVar11);
    lVar18 = 0;
  }
  else {
LAB_71030806ac:
    lVar18 = 0;
    pbVar41 = &DAT_7104742dbb;
  }
LAB_71030806b8:
  if (*pbVar41 - 0xb < 2) {
    iVar11 = *(int *)(pbVar41 + 1);
  }
  else {
    iVar11 = 0;
  }
  uVar29 = (ulong)iVar11;
  pvVar28 = *(void **)(param_1 + 0xe0);
  puVar36 = *(undefined8 **)(param_1 + 0xe8);
  pppplVar37 = (long ****)((long)puVar36 - (long)pvVar28);
  lVar13 = (long)pppplVar37 >> 3;
  plVar2 = (long *)(param_1 + 0xe0);
  if (uVar29 <= (ulong)(lVar13 * -0x5555555555555555)) {
    if (lVar13 * -0x5555555555555555 - uVar29 != 0) {
      *(void **)(param_1 + 0xe8) = (void *)((long)pvVar28 + uVar29 * 0x18);
    }
    goto LAB_7103080930;
  }
  uVar40 = uVar29 + lVar13 * 0x5555555555555555;
  if (uVar40 <= (ulong)((*(long *)(param_1 + 0xf0) - (long)puVar36 >> 3) * -0x5555555555555555)) {
    uVar29 = uVar40;
    if ((uVar40 & 1) != 0) {
      puVar36[1] = 0;
      puVar36[2] = 0;
      uVar29 = uVar40 - 1;
      *puVar36 = 0;
      puVar36 = (undefined8 *)(*(long *)(param_1 + 0xe8) + 0x18);
      *(undefined8 **)(param_1 + 0xe8) = puVar36;
    }
    if (uVar40 != 1) {
      do {
        puVar36[1] = 0;
        puVar36[2] = 0;
        uVar29 = uVar29 - 2;
        *puVar36 = 0;
        lVar13 = *(long *)(param_1 + 0xe8);
        *(long *)(param_1 + 0xe8) = lVar13 + 0x18;
        *(undefined8 *)(lVar13 + 0x20) = 0;
        *(undefined8 *)(lVar13 + 0x28) = 0;
        *(undefined8 *)(lVar13 + 0x18) = 0;
        puVar36 = (undefined8 *)(*(long *)(param_1 + 0xe8) + 0x18);
        *(undefined8 **)(param_1 + 0xe8) = puVar36;
      } while (uVar29 != 0);
    }
    goto LAB_7103080930;
  }
  if (iVar11 < 0) {
LAB_7103081f2c:
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_length_error();
  }
  lVar27 = *(long *)(param_1 + 0xf0) - (long)pvVar28 >> 3;
  if ((ulong)(lVar27 * -0x5555555555555555) < 0x555555555555555) {
    uVar14 = lVar27 * 0x5555555555555556;
    uVar39 = uVar29;
    if (uVar29 <= uVar14) {
      uVar39 = uVar14;
    }
    if (uVar39 != 0) goto LAB_7103080800;
    lVar27 = 0;
  }
  else {
    uVar39 = 0xaaaaaaaaaaaaaaa;
LAB_7103080800:
    ppplVar16 = (long ***)(uVar39 * 0x18);
    if (ppplVar16 == (long ***)0x0) {
      ppplVar16 = (long ***)0x1;
    }
    lVar27 = FUN_710392e290(0x10,ppplVar16,param_3,param_4,param_5,param_6,0xbc0ad263c,0xa381ad7fa);
    if (lVar27 == 0) {
      if (DAT_7105332f00 != (long *)0x0) {
        local_84 = 0;
        pppplVar8 = local_a0;
        local_a0[0] = ppplVar16;
        uVar14 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_84);
        if (((uVar14 & 1) != 0) &&
           (lVar27 = FUN_710392e290(0x10,ppplVar16,pppplVar8,param_4,param_5,param_6,uVar21,uVar30),
           lVar27 != 0)) goto LAB_7103080878;
      }
      lVar27 = 0;
    }
  }
LAB_7103080878:
  pvVar38 = (void *)(lVar27 + lVar13 * 8);
  param_3 = (long ****)(uVar40 * 0x18);
  memset(pvVar38,0,(size_t)param_3);
  lVar13 = SUB168(SEXT816((long)pppplVar37) * SEXT816(-0x2aaaaaaaaaaaaaab),8);
  pvVar38 = (void *)((long)pvVar38 + ((lVar13 >> 2) - (lVar13 >> 0x3f)) * 0x18);
  if (0 < (long)pppplVar37) {
    memcpy(pvVar38,pvVar28,(size_t)pppplVar37);
    param_3 = pppplVar37;
  }
  *(void **)(param_1 + 0xe0) = pvVar38;
  *(ulong *)(param_1 + 0xe8) = lVar27 + uVar29 * 0x18;
  *(ulong *)(param_1 + 0xf0) = lVar27 + uVar39 * 0x18;
  if (pvVar28 != (void *)0x0) {
    FUN_710392eb40((ulong)pvVar28);
  }
LAB_7103080930:
  uVar21 = 0xa381ad7fa;
  uVar10 = (uint)*pbVar41;
  if ((*pbVar41 - 0xb < 2) && (0 < *(int *)(pbVar41 + 1))) {
    lVar13 = 0;
LAB_71030809b0:
    do {
      iVar11 = (int)lVar13;
      if (iVar11 < 0) {
LAB_71030809e8:
        lVar27 = 0;
        pbVar32 = &DAT_7104742dbb;
      }
      else {
        pbVar32 = &DAT_7104742dbb;
        lVar27 = 0;
        if (uVar10 == 0xb) {
          if (*(int *)(pbVar41 + 1) <= iVar11) goto LAB_71030809e8;
          pbVar32 = pbVar41 + *(int *)(pbVar41 + (long)iVar11 * 4 + 5);
          lVar27 = lVar18;
        }
      }
      pbVar17 = &DAT_7104742dbb;
      if ((*pbVar32 == 0xc) && (uVar10 = *(int *)(pbVar32 + 1) - 1, 0 < *(int *)(pbVar32 + 1))) {
        iVar11 = 0;
        param_3 = (long ****)(*(long *)(lVar27 + 0x28) + (long)*(int *)(pbVar32 + 5));
        do {
          iVar26 = uVar10 + iVar11;
          if (iVar26 < 0) {
            iVar26 = iVar26 + 1;
          }
          uVar4 = iVar26 >> 1;
          param_4 = (byte ****)(ulong)uVar4;
          param_5 = param_3 + (int)uVar4;
          param_6 = *(ulong *)(*(long *)(lVar27 + 0x20) + (ulong)*(uint *)param_5 * 8);
          if (param_6 == 0xbc0ad263c) {
            if (-1 < (int)*(uint *)((long)param_5 + 4)) {
              pbVar17 = pbVar32 + (int)*(uint *)((long)param_5 + 4);
            }
            break;
          }
          param_5 = (long ****)(ulong)(uVar4 - 1);
          uVar7 = uVar4 - 1;
          if (param_6 < 0xbc0ad263d) {
            iVar11 = uVar4 + 1;
            uVar7 = uVar10;
          }
          uVar10 = uVar7;
        } while (iVar11 <= (int)uVar10);
      }
      uVar42 = 0;
      if (*pbVar17 == 8) {
        uVar42 = *(undefined4 *)(pbVar17 + 1);
      }
      *(undefined4 *)(*plVar2 + lVar13 * 0x18) = uVar42;
      pbVar17 = &DAT_7104742dbb;
      if ((*pbVar32 == 0xc) && (uVar10 = *(int *)(pbVar32 + 1) - 1, 0 < *(int *)(pbVar32 + 1))) {
        iVar11 = 0;
        param_3 = (long ****)(*(long *)(lVar27 + 0x28) + (long)*(int *)(pbVar32 + 5));
        do {
          iVar26 = uVar10 + iVar11;
          if (iVar26 < 0) {
            iVar26 = iVar26 + 1;
          }
          uVar4 = iVar26 >> 1;
          param_4 = (byte ****)(ulong)uVar4;
          param_5 = param_3 + (int)uVar4;
          param_6 = *(ulong *)(*(long *)(lVar27 + 0x20) + (ulong)*(uint *)param_5 * 8);
          if (param_6 == 0xa381ad7fa) {
            if (-1 < (int)*(uint *)((long)param_5 + 4)) {
              pbVar17 = pbVar32 + (int)*(uint *)((long)param_5 + 4);
            }
            break;
          }
          param_5 = (long ****)(ulong)(uVar4 - 1);
          uVar7 = uVar4 - 1;
          if (param_6 < 0xa381ad7fb) {
            iVar11 = uVar4 + 1;
            uVar7 = uVar10;
          }
          uVar10 = uVar7;
        } while (iVar11 <= (int)uVar10);
      }
      uVar42 = 0x4627d000;
      if (*pbVar17 == 8) {
        uVar42 = *(undefined4 *)(pbVar17 + 1);
      }
      *(undefined4 *)(*plVar2 + lVar13 * 0x18 + 4) = uVar42;
      pbVar17 = &DAT_7104742dbb;
      if ((*pbVar32 == 0xc) && (uVar10 = *(int *)(pbVar32 + 1) - 1, 0 < *(int *)(pbVar32 + 1))) {
        iVar11 = 0;
        param_3 = (long ****)(*(long *)(lVar27 + 0x28) + (long)*(int *)(pbVar32 + 5));
        do {
          iVar26 = uVar10 + iVar11;
          if (iVar26 < 0) {
            iVar26 = iVar26 + 1;
          }
          uVar4 = iVar26 >> 1;
          param_4 = (byte ****)(ulong)uVar4;
          param_5 = param_3 + (int)uVar4;
          param_6 = *(ulong *)(*(long *)(lVar27 + 0x20) + (ulong)*(uint *)param_5 * 8);
          if (param_6 == 0x16c09ff9d) {
            if (-1 < (int)*(uint *)((long)param_5 + 4)) {
              pbVar17 = pbVar32 + (int)*(uint *)((long)param_5 + 4);
            }
            break;
          }
          param_5 = (long ****)(ulong)(uVar4 - 1);
          uVar7 = uVar4 - 1;
          if (param_6 < 0x16c09ff9e) {
            iVar11 = uVar4 + 1;
            uVar7 = uVar10;
          }
          uVar10 = uVar7;
        } while (iVar11 <= (int)uVar10);
      }
      uVar42 = 0x3f4d4fdf;
      if (*pbVar17 == 8) {
        uVar42 = *(undefined4 *)(pbVar17 + 1);
      }
      *(undefined4 *)(*plVar2 + lVar13 * 0x18 + 8) = uVar42;
      pbVar17 = &DAT_7104742dbb;
      if ((*pbVar32 == 0xc) && (uVar10 = *(int *)(pbVar32 + 1) - 1, 0 < *(int *)(pbVar32 + 1))) {
        iVar11 = 0;
        param_3 = (long ****)(*(long *)(lVar27 + 0x28) + (long)*(int *)(pbVar32 + 5));
        do {
          iVar26 = uVar10 + iVar11;
          if (iVar26 < 0) {
            iVar26 = iVar26 + 1;
          }
          uVar4 = iVar26 >> 1;
          param_4 = (byte ****)(ulong)uVar4;
          param_5 = param_3 + (int)uVar4;
          param_6 = *(ulong *)(*(long *)(lVar27 + 0x20) + (ulong)*(uint *)param_5 * 8);
          if (param_6 == 0x101d41b76) {
            if (-1 < (int)*(uint *)((long)param_5 + 4)) {
              pbVar17 = pbVar32 + (int)*(uint *)((long)param_5 + 4);
            }
            break;
          }
          param_5 = (long ****)(ulong)(uVar4 - 1);
          uVar7 = uVar4 - 1;
          if (param_6 < 0x101d41b77) {
            iVar11 = uVar4 + 1;
            uVar7 = uVar10;
          }
          uVar10 = uVar7;
        } while (iVar11 <= (int)uVar10);
      }
      uVar42 = 0x3f6c49ba;
      if (*pbVar17 == 8) {
        uVar42 = *(undefined4 *)(pbVar17 + 1);
      }
      *(undefined4 *)(*plVar2 + lVar13 * 0x18 + 0xc) = uVar42;
      pbVar17 = &DAT_7104742dbb;
      if ((*pbVar32 == 0xc) && (uVar10 = *(int *)(pbVar32 + 1) - 1, 0 < *(int *)(pbVar32 + 1))) {
        iVar11 = 0;
        param_3 = (long ****)(*(long *)(lVar27 + 0x28) + (long)*(int *)(pbVar32 + 5));
        do {
          iVar26 = uVar10 + iVar11;
          if (iVar26 < 0) {
            iVar26 = iVar26 + 1;
          }
          uVar4 = iVar26 >> 1;
          param_4 = (byte ****)(ulong)uVar4;
          param_5 = param_3 + (int)uVar4;
          param_6 = *(ulong *)(*(long *)(lVar27 + 0x20) + (ulong)*(uint *)param_5 * 8);
          if (param_6 == 0x171beeff9) {
            if (-1 < (int)*(uint *)((long)param_5 + 4)) {
              pbVar17 = pbVar32 + (int)*(uint *)((long)param_5 + 4);
            }
            break;
          }
          param_5 = (long ****)(ulong)(uVar4 - 1);
          uVar7 = uVar4 - 1;
          if (param_6 < 0x171beeffa) {
            iVar11 = uVar4 + 1;
            uVar7 = uVar10;
          }
          uVar10 = uVar7;
        } while (iVar11 <= (int)uVar10);
      }
      uVar42 = 0x3f800000;
      if (*pbVar17 == 8) {
        uVar42 = *(undefined4 *)(pbVar17 + 1);
      }
      *(undefined4 *)(*plVar2 + lVar13 * 0x18 + 0x10) = uVar42;
      pbVar17 = &DAT_7104742dbb;
      if (*pbVar32 == 0xc) {
        uVar10 = *(int *)(pbVar32 + 1) - 1;
        if (*(int *)(pbVar32 + 1) < 1) {
LAB_7103080dbc:
          pbVar17 = &DAT_7104742dbb;
        }
        else {
          iVar11 = 0;
          do {
            iVar26 = uVar10 + iVar11;
            if (iVar26 < 0) {
              iVar26 = iVar26 + 1;
            }
            uVar4 = iVar26 >> 1;
            param_3 = (long ****)(ulong)uVar4;
            param_4 = (byte ****)
                      (*(long *)(lVar27 + 0x28) + (long)*(int *)(pbVar32 + 5) + (long)(int)uVar4 * 8
                      );
            param_5 = *(long *****)(*(long *)(lVar27 + 0x20) + (ulong)*(uint *)param_4 * 8);
            if (param_5 == (long ****)0x1e8b7be43) {
              if ((int)*(uint *)((long)param_4 + 4) < 0) goto LAB_7103080dbc;
              pbVar17 = pbVar32 + (int)*(uint *)((long)param_4 + 4);
              break;
            }
            param_4 = (byte ****)(ulong)(uVar4 - 1);
            uVar7 = uVar4 - 1;
            if (param_5 < (long ****)0x1e8b7be44) {
              iVar11 = uVar4 + 1;
              uVar7 = uVar10;
            }
            uVar10 = uVar7;
          } while (iVar11 <= (int)uVar10);
        }
      }
      uVar42 = 0x3f800000;
      if (*pbVar17 == 8) {
        uVar42 = *(undefined4 *)(pbVar17 + 1);
      }
      lVar27 = lVar13 * 0x18;
      lVar13 = lVar13 + 1;
      *(undefined4 *)(*plVar2 + lVar27 + 0x14) = uVar42;
      uVar10 = (uint)*pbVar41;
      if (uVar10 - 0xb < 2) {
        if (*(int *)(pbVar41 + 1) <= lVar13) break;
        goto LAB_71030809b0;
      }
    } while (lVar13 < 0);
  }
  uVar30 = 0xbc0ad263c;
  pcVar12 = (char *)param_2[1];
  if ((*pcVar12 == '\f') && (iVar11 = *(int *)(pcVar12 + 1) + -1, 0 < *(int *)(pcVar12 + 1))) {
    local_d0 = *param_2;
    pbVar41 = &DAT_7104742dbb;
    iVar26 = 0;
    do {
      iVar3 = iVar11 + iVar26;
      if (iVar3 < 0) {
        iVar3 = iVar3 + 1;
      }
      iVar3 = iVar3 >> 1;
      puVar1 = (uint *)(*(long *)(local_d0 + 0x28) + (long)*(int *)(pcVar12 + 5) + (long)iVar3 * 8);
      uVar29 = *(ulong *)(*(long *)(local_d0 + 0x20) + (ulong)*puVar1 * 8);
      if (uVar29 == 0x154bca81f6) {
        uVar10 = puVar1[1];
        if ((int)uVar10 < 0) goto LAB_7103080eb4;
        pbVar41 = (byte *)(pcVar12 + (int)uVar10);
        goto LAB_7103080ec0;
      }
      iVar6 = iVar3 + -1;
      if (uVar29 < 0x154bca81f7) {
        iVar26 = iVar3 + 1;
        iVar6 = iVar11;
      }
      iVar11 = iVar6;
    } while (iVar26 <= iVar11);
    local_d0 = 0;
  }
  else {
LAB_7103080eb4:
    local_d0 = 0;
    pbVar41 = &DAT_7104742dbb;
  }
LAB_7103080ec0:
  if (*pbVar41 - 0xb < 2) {
    uVar29 = (ulong)*(int *)(pbVar41 + 1);
  }
  else {
    uVar29 = 0;
  }
  uVar40 = *(long *)(param_1 + 0x100) - *(long *)(param_1 + 0xf8) >> 5;
  plVar2 = (long *)(param_1 + 0xf8);
  if (uVar29 < uVar40 || uVar29 - uVar40 == 0) {
    if (uVar29 < uVar40) {
      lVar18 = *(long *)(param_1 + 0xf8) + uVar29 * 0x20;
      lVar13 = *(long *)(param_1 + 0x100);
      while (lVar27 = lVar13, lVar18 != lVar27) {
        pbVar32 = *(byte **)(lVar27 + -0x18);
        lVar13 = lVar27 + -0x20;
        if (pbVar32 != (byte *)0x0) {
          pbVar17 = *(byte **)(lVar27 + -0x10);
          if (pbVar17 == pbVar32) {
            *(byte **)(lVar27 + -0x10) = pbVar32;
            pbVar17 = pbVar32;
          }
          else {
            do {
              pbVar31 = pbVar17 + -0x28;
              if (((*pbVar31 & 1) != 0) && (*(ulong *)(pbVar17 + -0x18) != 0)) {
                FUN_710392eb40(*(ulong *)(pbVar17 + -0x18));
              }
              pbVar17 = pbVar31;
            } while (pbVar32 != pbVar31);
            pbVar17 = *(byte **)(lVar27 + -0x18);
            *(byte **)(lVar27 + -0x10) = pbVar32;
          }
          if (pbVar17 != (byte *)0x0) {
            FUN_710392eb40((ulong)pbVar17);
          }
        }
      }
      *(long *)(param_1 + 0x100) = lVar18;
    }
  }
  else {
    FUN_71030821e0(plVar2,uVar29 - uVar40,param_3,param_4,param_5,param_6,0xbc0ad263c,0xa381ad7fa);
  }
  uVar10 = (uint)*pbVar41;
  if ((*pbVar41 - 0xb < 2) && (0 < *(int *)(pbVar41 + 1))) {
    lVar18 = 0;
    do {
      iVar11 = (int)lVar18;
      if (iVar11 < 0) {
LAB_7103081034:
        lVar13 = 0;
        pbVar32 = &DAT_7104742dbb;
      }
      else {
        lVar13 = 0;
        pbVar32 = &DAT_7104742dbb;
        if (uVar10 == 0xb) {
          if (*(int *)(pbVar41 + 1) <= iVar11) goto LAB_7103081034;
          pbVar32 = pbVar41 + *(int *)(pbVar41 + (long)iVar11 * 4 + 5);
          lVar13 = local_d0;
        }
      }
      if ((*pbVar32 == 0xc) && (iVar11 = *(int *)(pbVar32 + 1) + -1, 0 < *(int *)(pbVar32 + 1))) {
        iVar26 = 0;
        do {
          iVar3 = iVar11 + iVar26;
          if (iVar3 < 0) {
            iVar3 = iVar3 + 1;
          }
          iVar3 = iVar3 >> 1;
          puVar1 = (uint *)(*(long *)(lVar13 + 0x28) + (long)*(int *)(pbVar32 + 5) + (long)iVar3 * 8
                           );
          uVar29 = *(ulong *)(*(long *)(lVar13 + 0x20) + (ulong)*puVar1 * 8);
          if (uVar29 == 0xa737452e1) {
            uVar10 = puVar1[1];
            if (-1 < (int)uVar10) {
              pbVar17 = pbVar32 + (int)uVar10;
              lVar27 = lVar13;
              goto LAB_71030810bc;
            }
            break;
          }
          iVar6 = iVar3 + -1;
          if (uVar29 < 0xa737452e2) {
            iVar26 = iVar3 + 1;
            iVar6 = iVar11;
          }
          iVar11 = iVar6;
        } while (iVar26 <= iVar11);
      }
      lVar27 = 0;
      pbVar17 = &DAT_7104742dbb;
LAB_71030810bc:
      if (*pbVar17 == 9) {
        uVar25 = *(undefined8 *)(*(long *)(lVar27 + 0x20) + (long)*(int *)(pbVar17 + 1) * 8);
      }
      else {
        uVar25 = 0;
      }
      *(undefined8 *)(*plVar2 + lVar18 * 0x20) = uVar25;
      pbVar17 = &DAT_7104742dbb;
      if ((*pbVar32 == 0xc) && (iVar11 = *(int *)(pbVar32 + 1) + -1, 0 < *(int *)(pbVar32 + 1))) {
        iVar26 = 0;
        do {
          iVar3 = iVar11 + iVar26;
          if (iVar3 < 0) {
            iVar3 = iVar3 + 1;
          }
          iVar3 = iVar3 >> 1;
          puVar1 = (uint *)(*(long *)(lVar13 + 0x28) + (long)*(int *)(pbVar32 + 5) + (long)iVar3 * 8
                           );
          uVar29 = *(ulong *)(*(long *)(lVar13 + 0x20) + (ulong)*puVar1 * 8);
          if (uVar29 == 0xa94e60370) {
            uVar29 = (ulong)(int)puVar1[1];
            local_a8 = 0;
            if ((uVar29 & 0x80000000) == 0) {
              pbVar17 = pbVar32 + uVar29;
              local_a8 = lVar13;
            }
            goto LAB_7103081160;
          }
          iVar6 = iVar3 + -1;
          if (uVar29 < 0xa94e60371) {
            iVar26 = iVar3 + 1;
            iVar6 = iVar11;
          }
          iVar11 = iVar6;
        } while (iVar26 <= iVar11);
      }
      local_a8 = 0;
LAB_7103081160:
      lVar13 = *plVar2 + lVar18 * 0x20;
      plVar34 = (long *)(lVar13 + 8);
      if (*pbVar17 - 0xb < 2) {
        iVar11 = *(int *)(pbVar17 + 1);
      }
      else {
        iVar11 = 0;
      }
      puVar36 = (undefined8 *)(lVar13 + 0x10);
      pbVar32 = (byte *)*puVar36;
      lVar13 = *plVar34;
      uVar29 = (ulong)iVar11;
      lVar27 = (long)pbVar32 - lVar13 >> 3;
      uVar40 = lVar27 * -0x3333333333333333;
      if (uVar40 < uVar29) {
        FUN_7103082720(plVar34,uVar29 + lVar27 * 0x3333333333333333,param_3,param_4,param_5,param_6,
                       uVar30,uVar21);
      }
      else if (uVar40 - uVar29 != 0) {
        pbVar31 = (byte *)(lVar13 + uVar29 * 0x28);
        while (pbVar5 = pbVar32, pbVar31 != pbVar5) {
          pbVar32 = pbVar5 + -0x28;
          if (((*pbVar32 & 1) != 0) && (*(ulong *)(pbVar5 + -0x18) != 0)) {
            FUN_710392eb40(*(ulong *)(pbVar5 + -0x18));
          }
        }
        *puVar36 = pbVar31;
      }
      uVar10 = (uint)*pbVar17;
      if ((*pbVar17 - 0xb < 2) && (0 < *(int *)(pbVar17 + 1))) {
        lVar13 = 0;
LAB_710308121c:
        do {
          iVar11 = (int)lVar13;
          if (iVar11 < 0) {
LAB_7103081254:
            lVar27 = 0;
            pbVar32 = &DAT_7104742dbb;
          }
          else {
            lVar27 = 0;
            pbVar32 = &DAT_7104742dbb;
            if (uVar10 == 0xb) {
              if (*(int *)(pbVar17 + 1) <= iVar11) goto LAB_7103081254;
              pbVar32 = pbVar17 + *(int *)(pbVar17 + (long)iVar11 * 4 + 5);
              lVar27 = local_a8;
            }
          }
          if ((*pbVar32 == 0xc) && (iVar11 = *(int *)(pbVar32 + 1) + -1, 0 < *(int *)(pbVar32 + 1)))
          {
            iVar26 = 0;
            do {
              iVar3 = iVar11 + iVar26;
              if (iVar3 < 0) {
                iVar3 = iVar3 + 1;
              }
              iVar3 = iVar3 >> 1;
              uVar29 = *(ulong *)(*(long *)(lVar27 + 0x20) +
                                 (ulong)*(uint *)(*(long *)(lVar27 + 0x28) +
                                                  (long)*(int *)(pbVar32 + 5) + (long)iVar3 * 8) * 8
                                 );
              if (uVar29 == 0x16510da628) break;
              iVar6 = iVar3 + -1;
              if (uVar29 < 0x16510da629) {
                iVar26 = iVar3 + 1;
                iVar6 = iVar11;
              }
              iVar11 = iVar6;
            } while (iVar26 <= iVar11);
          }
          std::string::assign((char *)(*(long *)(*plVar2 + lVar18 * 0x20 + 8) + lVar13 * 0x28));
          pbVar31 = &DAT_7104742dbb;
          if ((*pbVar32 == 0xc) && (iVar11 = *(int *)(pbVar32 + 1) + -1, 0 < *(int *)(pbVar32 + 1)))
          {
            iVar26 = 0;
            do {
              iVar3 = iVar11 + iVar26;
              if (iVar3 < 0) {
                iVar3 = iVar3 + 1;
              }
              iVar3 = iVar3 >> 1;
              puVar1 = (uint *)(*(long *)(lVar27 + 0x28) + (long)*(int *)(pbVar32 + 5) +
                               (long)iVar3 * 8);
              uVar29 = *(ulong *)(*(long *)(lVar27 + 0x20) + (ulong)*puVar1 * 8);
              if (uVar29 == 0xbc0ad263c) {
                uVar10 = puVar1[1];
                if (-1 < (int)uVar10) {
                  pbVar31 = pbVar32 + (int)uVar10;
                }
                break;
              }
              iVar6 = iVar3 + -1;
              if (uVar29 < 0xbc0ad263d) {
                iVar26 = iVar3 + 1;
                iVar6 = iVar11;
              }
              iVar11 = iVar6;
            } while (iVar26 <= iVar11);
          }
          uVar42 = 0;
          if (*pbVar31 == 8) {
            uVar42 = *(undefined4 *)(pbVar31 + 1);
          }
          *(undefined4 *)(*(long *)(*plVar2 + lVar18 * 0x20 + 8) + lVar13 * 0x28 + 0x18) = uVar42;
          pbVar31 = &DAT_7104742dbb;
          if ((*pbVar32 == 0xc) && (iVar11 = *(int *)(pbVar32 + 1) + -1, 0 < *(int *)(pbVar32 + 1)))
          {
            iVar26 = 0;
            do {
              iVar3 = iVar11 + iVar26;
              if (iVar3 < 0) {
                iVar3 = iVar3 + 1;
              }
              iVar3 = iVar3 >> 1;
              puVar1 = (uint *)(*(long *)(lVar27 + 0x28) + (long)*(int *)(pbVar32 + 5) +
                               (long)iVar3 * 8);
              uVar29 = *(ulong *)(*(long *)(lVar27 + 0x20) + (ulong)*puVar1 * 8);
              if (uVar29 == 0xa381ad7fa) {
                uVar10 = puVar1[1];
                if (-1 < (int)uVar10) {
                  pbVar31 = pbVar32 + (int)uVar10;
                }
                break;
              }
              iVar6 = iVar3 + -1;
              if (uVar29 < 0xa381ad7fb) {
                iVar26 = iVar3 + 1;
                iVar6 = iVar11;
              }
              iVar11 = iVar6;
            } while (iVar26 <= iVar11);
          }
          uVar42 = 0x4627d000;
          if (*pbVar31 == 8) {
            uVar42 = *(undefined4 *)(pbVar31 + 1);
          }
          *(undefined4 *)(*(long *)(*plVar2 + lVar18 * 0x20 + 8) + lVar13 * 0x28 + 0x1c) = uVar42;
          pbVar31 = &DAT_7104742dbb;
          if ((*pbVar32 == 0xc) && (iVar11 = *(int *)(pbVar32 + 1) + -1, 0 < *(int *)(pbVar32 + 1)))
          {
            iVar26 = 0;
            do {
              iVar3 = iVar11 + iVar26;
              if (iVar3 < 0) {
                iVar3 = iVar3 + 1;
              }
              iVar3 = iVar3 >> 1;
              puVar1 = (uint *)(*(long *)(lVar27 + 0x28) + (long)*(int *)(pbVar32 + 5) +
                               (long)iVar3 * 8);
              uVar29 = *(ulong *)(*(long *)(lVar27 + 0x20) + (ulong)*puVar1 * 8);
              if (uVar29 == 0xf2c6d9796) {
                uVar10 = puVar1[1];
                if (-1 < (int)uVar10) {
                  pbVar31 = pbVar32 + (int)uVar10;
                }
                break;
              }
              iVar6 = iVar3 + -1;
              if (uVar29 < 0xf2c6d9797) {
                iVar26 = iVar3 + 1;
                iVar6 = iVar11;
              }
              iVar11 = iVar6;
            } while (iVar26 <= iVar11);
          }
          uVar42 = 0x3f800000;
          if (*pbVar31 == 8) {
            uVar42 = *(undefined4 *)(pbVar31 + 1);
          }
          *(undefined4 *)(*(long *)(*plVar2 + lVar18 * 0x20 + 8) + lVar13 * 0x28 + 0x20) = uVar42;
          pbVar31 = &DAT_7104742dbb;
          if ((*pbVar32 == 0xc) && (iVar11 = *(int *)(pbVar32 + 1) + -1, 0 < *(int *)(pbVar32 + 1)))
          {
            iVar26 = 0;
            do {
              iVar3 = iVar11 + iVar26;
              if (iVar3 < 0) {
                iVar3 = iVar3 + 1;
              }
              iVar3 = iVar3 >> 1;
              puVar1 = (uint *)(*(long *)(lVar27 + 0x28) + (long)*(int *)(pbVar32 + 5) +
                               (long)iVar3 * 8);
              uVar29 = *(ulong *)(*(long *)(lVar27 + 0x20) + (ulong)*puVar1 * 8);
              if (uVar29 == 0x1115e9b9f4) {
                uVar10 = puVar1[1];
                if (-1 < (int)uVar10) {
                  pbVar31 = pbVar32 + (int)uVar10;
                }
                break;
              }
              iVar6 = iVar3 + -1;
              if (uVar29 < 0x1115e9b9f5) {
                iVar26 = iVar3 + 1;
                iVar6 = iVar11;
              }
              iVar11 = iVar6;
            } while (iVar26 <= iVar11);
          }
          switch(*pbVar31) {
          case 1:
          case 3:
            uVar10 = (uint)pbVar31[1];
            break;
          case 2:
            uVar10 = (uint)(char)pbVar31[1];
            break;
          case 4:
            uVar10 = (uint)*(short *)(pbVar31 + 1);
            break;
          case 5:
            uVar10 = (uint)*(ushort *)(pbVar31 + 1);
            break;
          case 6:
          case 7:
            uVar10 = *(uint *)(pbVar31 + 1);
            break;
          default:
            uVar10 = 1;
          }
          *(bool *)(*(long *)(*plVar2 + lVar18 * 0x20 + 8) + lVar13 * 0x28 + 0x24) = uVar10 != 0;
          uVar10 = (uint)*pbVar17;
          lVar13 = lVar13 + 1;
          if (uVar10 - 0xb < 2) {
            if (*(int *)(pbVar17 + 1) <= lVar13) break;
            goto LAB_710308121c;
          }
        } while (lVar13 < 0);
      }
      uVar10 = (uint)*pbVar41;
      lVar18 = lVar18 + 1;
      if (uVar10 - 0xb < 2) {
        iVar11 = *(int *)(pbVar41 + 1);
      }
      else {
        iVar11 = 0;
      }
    } while (lVar18 < iVar11);
  }
  pcVar12 = (char *)param_2[1];
  if ((*pcVar12 == '\f') && (iVar11 = *(int *)(pcVar12 + 1) + -1, 0 < *(int *)(pcVar12 + 1))) {
    local_c8 = *param_2;
    pbVar41 = &DAT_7104742dbb;
    iVar26 = 0;
    do {
      iVar3 = iVar11 + iVar26;
      if (iVar3 < 0) {
        iVar3 = iVar3 + 1;
      }
      iVar3 = iVar3 >> 1;
      puVar1 = (uint *)(*(long *)(local_c8 + 0x28) + (long)*(int *)(pcVar12 + 5) + (long)iVar3 * 8);
      uVar29 = *(ulong *)(*(long *)(local_c8 + 0x20) + (ulong)*puVar1 * 8);
      if (uVar29 == 0x16428bffc7) {
        uVar10 = puVar1[1];
        if ((int)uVar10 < 0) goto LAB_710308171c;
        pbVar41 = (byte *)(pcVar12 + (int)uVar10);
        goto LAB_7103081728;
      }
      iVar6 = iVar3 + -1;
      if (uVar29 < 0x16428bffc8) {
        iVar26 = iVar3 + 1;
        iVar6 = iVar11;
      }
      iVar11 = iVar6;
    } while (iVar26 <= iVar11);
    local_c8 = 0;
  }
  else {
LAB_710308171c:
    local_c8 = 0;
    pbVar41 = &DAT_7104742dbb;
  }
LAB_7103081728:
  if (*pbVar41 - 0xb < 2) {
    uVar29 = (ulong)*(int *)(pbVar41 + 1);
  }
  else {
    uVar29 = 0;
  }
  uVar40 = *(long *)(param_1 + 0x118) - *(long *)(param_1 + 0x110) >> 5;
  plVar2 = (long *)(param_1 + 0x110);
  if (uVar29 < uVar40 || uVar29 - uVar40 == 0) {
    if (uVar29 < uVar40) {
      lVar18 = *(long *)(param_1 + 0x110) + uVar29 * 0x20;
      lVar13 = *(long *)(param_1 + 0x118);
      while (lVar27 = lVar13, lVar18 != lVar27) {
        pbVar32 = *(byte **)(lVar27 + -0x18);
        lVar13 = lVar27 + -0x20;
        if (pbVar32 != (byte *)0x0) {
          pbVar17 = *(byte **)(lVar27 + -0x10);
          if (pbVar17 == pbVar32) {
            *(byte **)(lVar27 + -0x10) = pbVar32;
            pbVar17 = pbVar32;
          }
          else {
            do {
              pbVar31 = pbVar17 + -0x28;
              if (((*pbVar31 & 1) != 0) && (*(ulong *)(pbVar17 + -0x18) != 0)) {
                FUN_710392eb40(*(ulong *)(pbVar17 + -0x18));
              }
              pbVar17 = pbVar31;
            } while (pbVar32 != pbVar31);
            pbVar17 = *(byte **)(lVar27 + -0x18);
            *(byte **)(lVar27 + -0x10) = pbVar32;
          }
          if (pbVar17 != (byte *)0x0) {
            FUN_710392eb40((ulong)pbVar17);
          }
        }
      }
      *(long *)(param_1 + 0x118) = lVar18;
    }
  }
  else {
    FUN_7103082480(plVar2,uVar29 - uVar40,param_3,param_4,param_5,param_6,uVar30,uVar21);
  }
  uVar10 = (uint)*pbVar41;
  if ((*pbVar41 - 0xb < 2) && (0 < *(int *)(pbVar41 + 1))) {
    lVar18 = 0;
    do {
      iVar11 = (int)lVar18;
      if (iVar11 < 0) {
LAB_710308189c:
        lVar13 = 0;
        pbVar32 = &DAT_7104742dbb;
      }
      else {
        lVar13 = 0;
        pbVar32 = &DAT_7104742dbb;
        if (uVar10 == 0xb) {
          if (*(int *)(pbVar41 + 1) <= iVar11) goto LAB_710308189c;
          pbVar32 = pbVar41 + *(int *)(pbVar41 + (long)iVar11 * 4 + 5);
          lVar13 = local_c8;
        }
      }
      if ((*pbVar32 == 0xc) && (iVar11 = *(int *)(pbVar32 + 1) + -1, 0 < *(int *)(pbVar32 + 1))) {
        iVar26 = 0;
        do {
          iVar3 = iVar11 + iVar26;
          if (iVar3 < 0) {
            iVar3 = iVar3 + 1;
          }
          iVar3 = iVar3 >> 1;
          puVar1 = (uint *)(*(long *)(lVar13 + 0x28) + (long)*(int *)(pbVar32 + 5) + (long)iVar3 * 8
                           );
          uVar29 = *(ulong *)(*(long *)(lVar13 + 0x20) + (ulong)*puVar1 * 8);
          if (uVar29 == 0xa737452e1) {
            uVar10 = puVar1[1];
            if (-1 < (int)uVar10) {
              pbVar17 = pbVar32 + (int)uVar10;
              lVar27 = lVar13;
              goto LAB_7103081924;
            }
            break;
          }
          iVar6 = iVar3 + -1;
          if (uVar29 < 0xa737452e2) {
            iVar26 = iVar3 + 1;
            iVar6 = iVar11;
          }
          iVar11 = iVar6;
        } while (iVar26 <= iVar11);
      }
      lVar27 = 0;
      pbVar17 = &DAT_7104742dbb;
LAB_7103081924:
      if (*pbVar17 == 9) {
        uVar25 = *(undefined8 *)(*(long *)(lVar27 + 0x20) + (long)*(int *)(pbVar17 + 1) * 8);
      }
      else {
        uVar25 = 0;
      }
      *(undefined8 *)(*plVar2 + lVar18 * 0x20) = uVar25;
      pbVar17 = &DAT_7104742dbb;
      if ((*pbVar32 == 0xc) && (iVar11 = *(int *)(pbVar32 + 1) + -1, 0 < *(int *)(pbVar32 + 1))) {
        iVar26 = 0;
        do {
          iVar3 = iVar11 + iVar26;
          if (iVar3 < 0) {
            iVar3 = iVar3 + 1;
          }
          iVar3 = iVar3 >> 1;
          puVar1 = (uint *)(*(long *)(lVar13 + 0x28) + (long)*(int *)(pbVar32 + 5) + (long)iVar3 * 8
                           );
          uVar29 = *(ulong *)(*(long *)(lVar13 + 0x20) + (ulong)*puVar1 * 8);
          if (uVar29 == 0xa94e60370) {
            uVar29 = (ulong)(int)puVar1[1];
            local_a8 = 0;
            if ((uVar29 & 0x80000000) == 0) {
              pbVar17 = pbVar32 + uVar29;
              local_a8 = lVar13;
            }
            goto LAB_71030819c8;
          }
          iVar6 = iVar3 + -1;
          if (uVar29 < 0xa94e60371) {
            iVar26 = iVar3 + 1;
            iVar6 = iVar11;
          }
          iVar11 = iVar6;
        } while (iVar26 <= iVar11);
      }
      local_a8 = 0;
LAB_71030819c8:
      lVar13 = *plVar2 + lVar18 * 0x20;
      plVar34 = (long *)(lVar13 + 8);
      if (*pbVar17 - 0xb < 2) {
        iVar11 = *(int *)(pbVar17 + 1);
      }
      else {
        iVar11 = 0;
      }
      puVar36 = (undefined8 *)(lVar13 + 0x10);
      pbVar32 = (byte *)*puVar36;
      lVar13 = *plVar34;
      uVar29 = (ulong)iVar11;
      lVar27 = (long)pbVar32 - lVar13 >> 3;
      uVar40 = lVar27 * -0x3333333333333333;
      if (uVar40 < uVar29) {
        FUN_7103082980(plVar34,uVar29 + lVar27 * 0x3333333333333333,param_3,param_4,param_5,param_6,
                       uVar30,uVar21);
      }
      else if (uVar40 - uVar29 != 0) {
        pbVar31 = (byte *)(lVar13 + uVar29 * 0x28);
        while (pbVar5 = pbVar32, pbVar31 != pbVar5) {
          pbVar32 = pbVar5 + -0x28;
          if (((*pbVar32 & 1) != 0) && (*(ulong *)(pbVar5 + -0x18) != 0)) {
            FUN_710392eb40(*(ulong *)(pbVar5 + -0x18));
          }
        }
        *puVar36 = pbVar31;
      }
      uVar10 = (uint)*pbVar17;
      if ((*pbVar17 - 0xb < 2) && (0 < *(int *)(pbVar17 + 1))) {
        lVar13 = 0;
LAB_7103081a84:
        do {
          iVar11 = (int)lVar13;
          if (iVar11 < 0) {
LAB_7103081abc:
            lVar27 = 0;
            pbVar32 = &DAT_7104742dbb;
          }
          else {
            lVar27 = 0;
            pbVar32 = &DAT_7104742dbb;
            if (uVar10 == 0xb) {
              if (*(int *)(pbVar17 + 1) <= iVar11) goto LAB_7103081abc;
              pbVar32 = pbVar17 + *(int *)(pbVar17 + (long)iVar11 * 4 + 5);
              lVar27 = local_a8;
            }
          }
          if ((*pbVar32 == 0xc) && (iVar11 = *(int *)(pbVar32 + 1) + -1, 0 < *(int *)(pbVar32 + 1)))
          {
            iVar26 = 0;
            do {
              iVar3 = iVar11 + iVar26;
              if (iVar3 < 0) {
                iVar3 = iVar3 + 1;
              }
              iVar3 = iVar3 >> 1;
              uVar29 = *(ulong *)(*(long *)(lVar27 + 0x20) +
                                 (ulong)*(uint *)(*(long *)(lVar27 + 0x28) +
                                                  (long)*(int *)(pbVar32 + 5) + (long)iVar3 * 8) * 8
                                 );
              if (uVar29 == 0x14590ea12c) break;
              iVar6 = iVar3 + -1;
              if (uVar29 < 0x14590ea12d) {
                iVar26 = iVar3 + 1;
                iVar6 = iVar11;
              }
              iVar11 = iVar6;
            } while (iVar26 <= iVar11);
          }
          std::string::assign((char *)(*(long *)(*plVar2 + lVar18 * 0x20 + 8) + lVar13 * 0x28));
          pbVar31 = &DAT_7104742dbb;
          if ((*pbVar32 == 0xc) && (iVar11 = *(int *)(pbVar32 + 1) + -1, 0 < *(int *)(pbVar32 + 1)))
          {
            iVar26 = 0;
            do {
              iVar3 = iVar11 + iVar26;
              if (iVar3 < 0) {
                iVar3 = iVar3 + 1;
              }
              iVar3 = iVar3 >> 1;
              puVar1 = (uint *)(*(long *)(lVar27 + 0x28) + (long)*(int *)(pbVar32 + 5) +
                               (long)iVar3 * 8);
              uVar29 = *(ulong *)(*(long *)(lVar27 + 0x20) + (ulong)*puVar1 * 8);
              if (uVar29 == 0xbc0ad263c) {
                uVar10 = puVar1[1];
                if (-1 < (int)uVar10) {
                  pbVar31 = pbVar32 + (int)uVar10;
                }
                break;
              }
              iVar6 = iVar3 + -1;
              if (uVar29 < 0xbc0ad263d) {
                iVar26 = iVar3 + 1;
                iVar6 = iVar11;
              }
              iVar11 = iVar6;
            } while (iVar26 <= iVar11);
          }
          uVar42 = 0;
          if (*pbVar31 == 8) {
            uVar42 = *(undefined4 *)(pbVar31 + 1);
          }
          *(undefined4 *)(*(long *)(*plVar2 + lVar18 * 0x20 + 8) + lVar13 * 0x28 + 0x18) = uVar42;
          pbVar31 = &DAT_7104742dbb;
          if ((*pbVar32 == 0xc) && (iVar11 = *(int *)(pbVar32 + 1) + -1, 0 < *(int *)(pbVar32 + 1)))
          {
            iVar26 = 0;
            do {
              iVar3 = iVar11 + iVar26;
              if (iVar3 < 0) {
                iVar3 = iVar3 + 1;
              }
              iVar3 = iVar3 >> 1;
              puVar1 = (uint *)(*(long *)(lVar27 + 0x28) + (long)*(int *)(pbVar32 + 5) +
                               (long)iVar3 * 8);
              uVar29 = *(ulong *)(*(long *)(lVar27 + 0x20) + (ulong)*puVar1 * 8);
              if (uVar29 == 0xa381ad7fa) {
                uVar10 = puVar1[1];
                if (-1 < (int)uVar10) {
                  pbVar31 = pbVar32 + (int)uVar10;
                }
                break;
              }
              iVar6 = iVar3 + -1;
              if (uVar29 < 0xa381ad7fb) {
                iVar26 = iVar3 + 1;
                iVar6 = iVar11;
              }
              iVar11 = iVar6;
            } while (iVar26 <= iVar11);
          }
          uVar42 = 0x452be000;
          if (*pbVar31 == 8) {
            uVar42 = *(undefined4 *)(pbVar31 + 1);
          }
          *(undefined4 *)(*(long *)(*plVar2 + lVar18 * 0x20 + 8) + lVar13 * 0x28 + 0x1c) = uVar42;
          pbVar31 = &DAT_7104742dbb;
          if ((*pbVar32 == 0xc) && (iVar11 = *(int *)(pbVar32 + 1) + -1, 0 < *(int *)(pbVar32 + 1)))
          {
            iVar26 = 0;
            do {
              iVar3 = iVar11 + iVar26;
              if (iVar3 < 0) {
                iVar3 = iVar3 + 1;
              }
              iVar3 = iVar3 >> 1;
              puVar1 = (uint *)(*(long *)(lVar27 + 0x28) + (long)*(int *)(pbVar32 + 5) +
                               (long)iVar3 * 8);
              uVar29 = *(ulong *)(*(long *)(lVar27 + 0x20) + (ulong)*puVar1 * 8);
              if (uVar29 == 0xf2c6d9796) {
                uVar10 = puVar1[1];
                if (-1 < (int)uVar10) {
                  pbVar31 = pbVar32 + (int)uVar10;
                }
                break;
              }
              iVar6 = iVar3 + -1;
              if (uVar29 < 0xf2c6d9797) {
                iVar26 = iVar3 + 1;
                iVar6 = iVar11;
              }
              iVar11 = iVar6;
            } while (iVar26 <= iVar11);
          }
          uVar42 = 0x3f800000;
          if (*pbVar31 == 8) {
            uVar42 = *(undefined4 *)(pbVar31 + 1);
          }
          *(undefined4 *)(*(long *)(*plVar2 + lVar18 * 0x20 + 8) + lVar13 * 0x28 + 0x20) = uVar42;
          pbVar31 = &DAT_7104742dbb;
          if ((*pbVar32 == 0xc) && (iVar11 = *(int *)(pbVar32 + 1) + -1, 0 < *(int *)(pbVar32 + 1)))
          {
            iVar26 = 0;
            do {
              iVar3 = iVar11 + iVar26;
              if (iVar3 < 0) {
                iVar3 = iVar3 + 1;
              }
              iVar3 = iVar3 >> 1;
              puVar1 = (uint *)(*(long *)(lVar27 + 0x28) + (long)*(int *)(pbVar32 + 5) +
                               (long)iVar3 * 8);
              uVar29 = *(ulong *)(*(long *)(lVar27 + 0x20) + (ulong)*puVar1 * 8);
              if (uVar29 == 0x1115e9b9f4) {
                uVar10 = puVar1[1];
                if (-1 < (int)uVar10) {
                  pbVar31 = pbVar32 + (int)uVar10;
                }
                break;
              }
              iVar6 = iVar3 + -1;
              if (uVar29 < 0x1115e9b9f5) {
                iVar26 = iVar3 + 1;
                iVar6 = iVar11;
              }
              iVar11 = iVar6;
            } while (iVar26 <= iVar11);
          }
          switch(*pbVar31) {
          case 1:
          case 3:
            uVar10 = (uint)pbVar31[1];
            break;
          case 2:
            uVar10 = (uint)(char)pbVar31[1];
            break;
          case 4:
            uVar10 = (uint)*(short *)(pbVar31 + 1);
            break;
          case 5:
            uVar10 = (uint)*(ushort *)(pbVar31 + 1);
            break;
          case 6:
          case 7:
            uVar10 = *(uint *)(pbVar31 + 1);
            break;
          default:
            uVar10 = 1;
          }
          *(bool *)(*(long *)(*plVar2 + lVar18 * 0x20 + 8) + lVar13 * 0x28 + 0x24) = uVar10 != 0;
          uVar10 = (uint)*pbVar17;
          lVar13 = lVar13 + 1;
          if (uVar10 - 0xb < 2) {
            if (*(int *)(pbVar17 + 1) <= lVar13) break;
            goto LAB_7103081a84;
          }
        } while (lVar13 < 0);
      }
      uVar10 = (uint)*pbVar41;
      lVar18 = lVar18 + 1;
      if (uVar10 - 0xb < 2) {
        iVar11 = *(int *)(pbVar41 + 1);
      }
      else {
        iVar11 = 0;
      }
    } while (lVar18 < iVar11);
  }
  return;
}

