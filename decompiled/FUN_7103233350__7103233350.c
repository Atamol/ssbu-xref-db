// addr:      7103233350
// offset:    0x3233350
// name:      FUN_7103233350
// mangled:   
// signature: undefined __cdecl FUN_7103233350(long param_1, long * param_2, long * * * * param_3, byte * * * * param_4, long * * * * param_5, uint * param_6, byte * * * param_7, ulong param_8)


void FUN_7103233350(long param_1,long *param_2,long ****param_3,byte ****param_4,long ****param_5,
                   uint *param_6,byte ***param_7,ulong param_8)

{
  uint *puVar1;
  long *plVar2;
  int iVar3;
  undefined8 *puVar4;
  void *pvVar5;
  byte *pbVar6;
  int iVar7;
  uint uVar8;
  bool bVar9;
  long lVar10;
  uint uVar11;
  long ****pppplVar12;
  long ****pppplVar13;
  int iVar14;
  char *pcVar15;
  long lVar16;
  ulong uVar17;
  long ***ppplVar18;
  long lVar19;
  ulong uVar20;
  undefined8 *puVar21;
  uint uVar22;
  char *pcVar23;
  int iVar24;
  long lVar25;
  long lVar26;
  undefined8 uVar27;
  long ****pppplVar28;
  long ****pppplVar29;
  undefined8 uVar30;
  ulong uVar31;
  byte *pbVar32;
  long lVar33;
  ulong uVar34;
  size_t __n;
  byte *pbVar35;
  undefined8 *puVar36;
  void *pvVar37;
  undefined8 *puVar38;
  byte *pbVar39;
  ulong uVar40;
  ulong uVar41;
  undefined4 uVar42;
  undefined4 uVar43;
  long ***local_70;
  undefined4 local_64;
  
  pcVar15 = (char *)param_2[1];
  if ((*pcVar15 == '\f') && (iVar14 = *(int *)(pcVar15 + 1) + -1, 0 < *(int *)(pcVar15 + 1))) {
    lVar33 = *param_2;
    iVar24 = 0;
    pbVar39 = &DAT_7104742dbb;
    do {
      iVar3 = iVar14 + iVar24;
      if (iVar3 < 0) {
        iVar3 = iVar3 + 1;
      }
      iVar3 = iVar3 >> 1;
      puVar1 = (uint *)(*(long *)(lVar33 + 0x28) + (long)*(int *)(pcVar15 + 5) + (long)iVar3 * 8);
      uVar31 = *(ulong *)(*(long *)(lVar33 + 0x20) + (ulong)*puVar1 * 8);
      if (uVar31 == 0x1035cbd72b) {
        uVar22 = puVar1[1];
        if ((int)uVar22 < 0) goto LAB_7103233410;
        pbVar39 = (byte *)(pcVar15 + (int)uVar22);
        goto LAB_710323341c;
      }
      iVar7 = iVar3 + -1;
      if (uVar31 < 0x1035cbd72c) {
        iVar24 = iVar3 + 1;
        iVar7 = iVar14;
      }
      iVar14 = iVar7;
    } while (iVar24 <= iVar14);
    lVar33 = 0;
  }
  else {
LAB_7103233410:
    lVar33 = 0;
    pbVar39 = &DAT_7104742dbb;
  }
LAB_710323341c:
  if (*pbVar39 - 0xb < 2) {
    iVar14 = *(int *)(pbVar39 + 1);
  }
  else {
    iVar14 = 0;
  }
  uVar31 = *(ulong *)(param_1 + 8);
  puVar21 = *(undefined8 **)(param_1 + 0x10);
  uVar34 = (ulong)iVar14;
  uVar40 = (long)((long)puVar21 - uVar31) >> 5;
  if (uVar40 < uVar34) {
    uVar41 = uVar34 - uVar40;
    if ((ulong)(*(long *)(param_1 + 0x18) - (long)puVar21 >> 5) < uVar41) {
      if (iVar14 < 0) goto LAB_71032362d0;
      lVar16 = *(long *)(param_1 + 0x18) - uVar31;
      if ((ulong)(lVar16 >> 5) < 0x3ffffffffffffff) {
        uVar17 = lVar16 >> 4;
        uVar20 = uVar34;
        if (uVar34 <= uVar17) {
          uVar20 = uVar17;
        }
        if (uVar20 != 0) {
          if (uVar20 >> 0x3b != 0) goto LAB_71032358a8;
          goto LAB_7103233540;
        }
        uVar20 = 0;
        lVar16 = 0;
      }
      else {
        uVar20 = 0x7ffffffffffffff;
LAB_7103233540:
        ppplVar18 = (long ***)(uVar20 * 0x20);
        if (ppplVar18 == (long ***)0x0) {
          ppplVar18 = (long ***)0x1;
        }
        lVar16 = FUN_710392e290(0x10,ppplVar18,param_3,param_4,param_5,param_6,param_7,param_8);
        if (lVar16 == 0) {
          if (DAT_7105332f00 != (long *)0x0) {
            local_64 = 0;
            pppplVar28 = &local_70;
            local_70 = ppplVar18;
            uVar17 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_64);
            if (((uVar17 & 1) != 0) &&
               (lVar16 = FUN_710392e290(0x10,ppplVar18,pppplVar28,param_4,param_5,param_6,param_7,
                                        param_8), lVar16 != 0)) goto LAB_71032335ac;
          }
          lVar16 = 0;
        }
      }
LAB_71032335ac:
      puVar4 = (undefined8 *)(lVar16 + uVar40 * 0x20);
      param_3 = (long ****)(uVar41 * 0x20);
      lVar19 = lVar16 + uVar20 * 0x20;
      memset(puVar4,0,(size_t)param_3);
      lVar10 = lVar16 + uVar34 * 0x20;
      if ((long)puVar21 - uVar31 == 0) {
        *(undefined8 **)(param_1 + 8) = puVar4;
        *(long *)(param_1 + 0x10) = lVar10;
        *(long *)(param_1 + 0x18) = lVar19;
      }
      else {
        uVar34 = ((long)puVar21 - uVar31) - 0x20;
        puVar36 = puVar4;
        puVar38 = puVar21;
        if (((uint)uVar34 >> 5 & 1) == 0) {
          puVar38 = puVar21 + -4;
          puVar36 = puVar4 + -4;
          *puVar36 = *puVar38;
          uVar27 = puVar21[-3];
          uVar30 = puVar21[-1];
          puVar4[-2] = puVar21[-2];
          puVar4[-1] = uVar30;
          puVar4[-3] = uVar27;
          puVar21[-2] = 0;
          puVar21[-1] = 0;
          puVar21[-3] = 0;
        }
        if (0x1f < uVar34) {
          lVar25 = 0;
          do {
            lVar26 = lVar25 + -0x40;
            *(undefined8 *)((long)puVar36 + lVar25 + -0x20) =
                 *(undefined8 *)((long)puVar38 + lVar25 + -0x20);
            uVar27 = *(undefined8 *)((long)puVar38 + lVar25 + -0x18);
            uVar30 = *(undefined8 *)((long)puVar38 + lVar25 + -8);
            *(undefined8 *)((long)puVar36 + lVar25 + -0x10) =
                 *(undefined8 *)((long)puVar38 + lVar25 + -0x10);
            *(undefined8 *)((long)puVar36 + lVar25 + -8) = uVar30;
            *(undefined8 *)((long)puVar36 + lVar25 + -0x18) = uVar27;
            *(undefined8 *)((long)puVar38 + lVar25 + -0x10) = 0;
            *(undefined8 *)((long)puVar38 + lVar25 + -8) = 0;
            *(undefined8 *)((long)puVar38 + lVar25 + -0x18) = 0;
            *(undefined8 *)((long)puVar36 + lVar25 + -0x40) =
                 *(undefined8 *)((long)puVar38 + lVar25 + -0x40);
            uVar30 = *(undefined8 *)((long)puVar38 + lVar25 + -0x28);
            uVar27 = *(undefined8 *)((long)puVar38 + lVar25 + -0x30);
            *(undefined8 *)((long)puVar36 + lVar25 + -0x38) =
                 *(undefined8 *)((long)puVar38 + lVar25 + -0x38);
            *(undefined8 *)((long)puVar36 + lVar25 + -0x30) = uVar27;
            *(undefined8 *)((long)puVar36 + lVar25 + -0x28) = uVar30;
            *(undefined8 *)((long)puVar38 + lVar25 + -0x38) = 0;
            *(undefined8 *)((long)puVar38 + lVar25 + -0x30) = 0;
            *(undefined8 *)((long)puVar38 + lVar25 + -0x28) = 0;
            lVar25 = lVar26;
          } while (uVar31 - (long)puVar38 != lVar26);
        }
        uVar31 = *(ulong *)(param_1 + 8);
        uVar41 = *(ulong *)(param_1 + 0x10);
        *(ulong *)(param_1 + 8) = lVar16 + (uVar40 + (uVar34 >> 5 ^ 0xffffffffffffffff)) * 0x20;
        *(long *)(param_1 + 0x10) = lVar10;
        *(long *)(param_1 + 0x18) = lVar19;
        while (uVar34 = uVar41, uVar34 != uVar31) {
          uVar41 = uVar34 - 0x20;
          if (((*(byte *)(uVar34 - 0x18) & 1) != 0) && (*(ulong *)(uVar34 - 8) != 0)) {
            FUN_710392eb40(*(ulong *)(uVar34 - 8));
          }
        }
      }
      if (uVar31 != 0) {
        FUN_710392eb40(uVar31);
      }
    }
    else {
      uVar31 = uVar41;
      if ((uVar41 & 1) != 0) {
        puVar21[2] = 0;
        puVar21[3] = 0;
        *puVar21 = 0;
        puVar21[1] = 0;
        puVar21 = (undefined8 *)(*(long *)(param_1 + 0x10) + 0x20);
        uVar31 = uVar41 - 1;
        *(undefined8 **)(param_1 + 0x10) = puVar21;
      }
      if (uVar41 != 1) {
        do {
          puVar21[2] = 0;
          puVar21[3] = 0;
          uVar31 = uVar31 - 2;
          *puVar21 = 0;
          puVar21[1] = 0;
          lVar16 = *(long *)(param_1 + 0x10);
          *(long *)(param_1 + 0x10) = lVar16 + 0x20;
          *(undefined8 *)(lVar16 + 0x30) = 0;
          *(undefined8 *)(lVar16 + 0x38) = 0;
          *(undefined8 *)(lVar16 + 0x20) = 0;
          *(undefined8 *)(lVar16 + 0x28) = 0;
          puVar21 = (undefined8 *)(*(long *)(param_1 + 0x10) + 0x20);
          *(undefined8 **)(param_1 + 0x10) = puVar21;
        } while (uVar31 != 0);
      }
    }
  }
  else if (uVar40 != uVar34) {
    puVar4 = (undefined8 *)(uVar31 + uVar34 * 0x20);
    while (puVar36 = puVar21, puVar4 != puVar36) {
      puVar21 = puVar36 + -4;
      if (((*(byte *)(puVar36 + -3) & 1) != 0) && (puVar36[-1] != 0)) {
        FUN_710392eb40(puVar36[-1]);
      }
    }
    *(undefined8 **)(param_1 + 0x10) = puVar4;
  }
  uVar22 = (uint)*pbVar39;
  if ((*pbVar39 - 0xb < 2) && (0 < *(int *)(pbVar39 + 1))) {
    lVar16 = 0;
LAB_7103233700:
    do {
      iVar14 = (int)lVar16;
      if (iVar14 < 0) {
LAB_7103233738:
        lVar19 = 0;
        pbVar32 = &DAT_7104742dbb;
      }
      else {
        lVar19 = 0;
        pbVar32 = &DAT_7104742dbb;
        if (uVar22 == 0xb) {
          if (*(int *)(pbVar39 + 1) <= iVar14) goto LAB_7103233738;
          pbVar32 = pbVar39 + *(int *)(pbVar39 + (long)iVar14 * 4 + 5);
          lVar19 = lVar33;
        }
      }
      if ((*pbVar32 == 0xc) && (iVar14 = *(int *)(pbVar32 + 1) + -1, 0 < *(int *)(pbVar32 + 1))) {
        iVar24 = 0;
        do {
          iVar3 = iVar14 + iVar24;
          if (iVar3 < 0) {
            iVar3 = iVar3 + 1;
          }
          iVar3 = iVar3 >> 1;
          puVar1 = (uint *)(*(long *)(lVar19 + 0x28) + (long)*(int *)(pbVar32 + 5) + (long)iVar3 * 8
                           );
          uVar31 = *(ulong *)(*(long *)(lVar19 + 0x20) + (ulong)*puVar1 * 8);
          if (uVar31 == 0x43bc4bcd9) {
            uVar22 = puVar1[1];
            if (-1 < (int)uVar22) {
              pbVar35 = pbVar32 + (int)uVar22;
              lVar10 = lVar19;
              goto LAB_71032337c0;
            }
            break;
          }
          iVar7 = iVar3 + -1;
          if (uVar31 < 0x43bc4bcda) {
            iVar24 = iVar3 + 1;
            iVar7 = iVar14;
          }
          iVar14 = iVar7;
        } while (iVar24 <= iVar14);
      }
      lVar10 = 0;
      pbVar35 = &DAT_7104742dbb;
LAB_71032337c0:
      if (*pbVar35 == 9) {
        uVar27 = *(undefined8 *)(*(long *)(lVar10 + 0x20) + (long)*(int *)(pbVar35 + 1) * 8);
      }
      else {
        uVar27 = 0;
      }
      *(undefined8 *)(*(long *)(param_1 + 8) + lVar16 * 0x20) = uVar27;
      if ((*pbVar32 == 0xc) && (iVar14 = *(int *)(pbVar32 + 1) + -1, 0 < *(int *)(pbVar32 + 1))) {
        iVar24 = 0;
        do {
          iVar3 = iVar14 + iVar24;
          if (iVar3 < 0) {
            iVar3 = iVar3 + 1;
          }
          iVar3 = iVar3 >> 1;
          uVar31 = *(ulong *)(*(long *)(lVar19 + 0x20) +
                             (ulong)*(uint *)(*(long *)(lVar19 + 0x28) + (long)*(int *)(pbVar32 + 5)
                                             + (long)iVar3 * 8) * 8);
          if (uVar31 == 0x81a4baca9) break;
          iVar7 = iVar3 + -1;
          if (uVar31 < 0x81a4bacaa) {
            iVar24 = iVar3 + 1;
            iVar7 = iVar14;
          }
          iVar14 = iVar7;
        } while (iVar24 <= iVar14);
      }
      std::string::assign((char *)(*(long *)(param_1 + 8) + lVar16 * 0x20 + 8));
      uVar22 = (uint)*pbVar39;
      lVar16 = lVar16 + 1;
      if (uVar22 - 0xb < 2) {
        if (*(int *)(pbVar39 + 1) <= lVar16) break;
        goto LAB_7103233700;
      }
    } while (lVar16 < 0);
  }
  pcVar15 = (char *)param_2[1];
  if ((*pcVar15 == '\f') && (iVar14 = *(int *)(pcVar15 + 1) + -1, 0 < *(int *)(pcVar15 + 1))) {
    iVar24 = 0;
    pbVar39 = &DAT_7104742dbb;
    do {
      iVar3 = iVar14 + iVar24;
      if (iVar3 < 0) {
        iVar3 = iVar3 + 1;
      }
      iVar3 = iVar3 >> 1;
      puVar1 = (uint *)(*(long *)(*param_2 + 0x28) + (long)*(int *)(pcVar15 + 5) + (long)iVar3 * 8);
      uVar31 = *(ulong *)(*(long *)(*param_2 + 0x20) + (ulong)*puVar1 * 8);
      if (uVar31 == 0x11853a3d26) {
        uVar22 = puVar1[1];
        if ((int)uVar22 < 0) goto LAB_7103233964;
        pbVar39 = (byte *)(pcVar15 + (int)uVar22);
        break;
      }
      iVar7 = iVar3 + -1;
      if (uVar31 < 0x11853a3d27) {
        iVar24 = iVar3 + 1;
        iVar7 = iVar14;
      }
      iVar14 = iVar7;
    } while (iVar24 <= iVar14);
  }
  else {
LAB_7103233964:
    pbVar39 = &DAT_7104742dbb;
  }
  if (*pbVar39 - 0xb < 2) {
    iVar14 = *(int *)(pbVar39 + 1);
  }
  else {
    iVar14 = 0;
  }
  uVar31 = (ulong)iVar14;
  lVar33 = (long)*(byte **)(param_1 + 0x28) - *(long *)(param_1 + 0x20) >> 3;
  uVar34 = lVar33 * -0x5555555555555555;
  if (uVar34 < uVar31) {
    FUN_710084f280((long *)(param_1 + 0x20),uVar31 + lVar33 * 0x5555555555555555,param_3,param_4,
                   param_5,param_6,param_7,param_8);
  }
  else if (uVar34 - uVar31 != 0) {
    pbVar35 = (byte *)(*(long *)(param_1 + 0x20) + uVar31 * 0x18);
    pbVar32 = *(byte **)(param_1 + 0x28);
    while (pbVar6 = pbVar32, pbVar35 != pbVar6) {
      pbVar32 = pbVar6 + -0x18;
      if (((*pbVar32 & 1) != 0) && (*(ulong *)(pbVar6 + -8) != 0)) {
        FUN_710392eb40(*(ulong *)(pbVar6 + -8));
      }
    }
    *(byte **)(param_1 + 0x28) = pbVar35;
  }
  if ((*pbVar39 - 0xb < 2) && (0 < *(int *)(pbVar39 + 1))) {
    lVar16 = 0;
    lVar33 = 0;
    do {
      std::string::assign((char *)(*(long *)(param_1 + 0x20) + lVar16));
      lVar33 = lVar33 + 1;
      if (*pbVar39 - 0xb < 2) {
        iVar14 = *(int *)(pbVar39 + 1);
      }
      else {
        iVar14 = 0;
      }
      lVar16 = lVar16 + 0x18;
    } while (lVar33 < iVar14);
  }
  pcVar15 = (char *)param_2[1];
  if ((*pcVar15 == '\f') && (iVar14 = *(int *)(pcVar15 + 1) + -1, 0 < *(int *)(pcVar15 + 1))) {
    lVar33 = *param_2;
    iVar24 = 0;
    pbVar39 = &DAT_7104742dbb;
    do {
      iVar3 = iVar14 + iVar24;
      if (iVar3 < 0) {
        iVar3 = iVar3 + 1;
      }
      iVar3 = iVar3 >> 1;
      puVar1 = (uint *)(*(long *)(lVar33 + 0x28) + (long)*(int *)(pcVar15 + 5) + (long)iVar3 * 8);
      uVar31 = *(ulong *)(*(long *)(lVar33 + 0x20) + (ulong)*puVar1 * 8);
      if (uVar31 == 0x1479b2febb) {
        uVar22 = puVar1[1];
        if ((int)uVar22 < 0) goto LAB_7103233b6c;
        pbVar39 = (byte *)(pcVar15 + (int)uVar22);
        goto LAB_7103233b78;
      }
      iVar7 = iVar3 + -1;
      if (uVar31 < 0x1479b2febc) {
        iVar24 = iVar3 + 1;
        iVar7 = iVar14;
      }
      iVar14 = iVar7;
    } while (iVar24 <= iVar14);
    lVar33 = 0;
  }
  else {
LAB_7103233b6c:
    lVar33 = 0;
    pbVar39 = &DAT_7104742dbb;
  }
LAB_7103233b78:
  if (*pbVar39 - 0xb < 2) {
    iVar14 = *(int *)(pbVar39 + 1);
  }
  else {
    iVar14 = 0;
  }
  uVar31 = (ulong)iVar14;
  uVar34 = *(long *)(param_1 + 0x40) - *(long *)(param_1 + 0x38) >> 4;
  plVar2 = (long *)(param_1 + 0x38);
  if (uVar34 < uVar31) {
    FUN_71032362e0(plVar2,uVar31 - uVar34,param_3,param_4,param_5,param_6,param_7,param_8);
  }
  else if (uVar34 != uVar31) {
    *(ulong *)(param_1 + 0x40) = *(long *)(param_1 + 0x38) + uVar31 * 0x10;
  }
  uVar22 = (uint)*pbVar39;
  if ((*pbVar39 - 0xb < 2) && (0 < *(int *)(pbVar39 + 1))) {
    lVar16 = 0;
LAB_7103233c3c:
    do {
      iVar14 = (int)lVar16;
      if (iVar14 < 0) {
LAB_7103233c74:
        lVar19 = 0;
        pbVar32 = &DAT_7104742dbb;
      }
      else {
        pbVar32 = &DAT_7104742dbb;
        lVar19 = 0;
        if (uVar22 == 0xb) {
          if (*(int *)(pbVar39 + 1) <= iVar14) goto LAB_7103233c74;
          pbVar32 = pbVar39 + *(int *)(pbVar39 + (long)iVar14 * 4 + 5);
          lVar19 = lVar33;
        }
      }
      pbVar35 = &DAT_7104742dbb;
      if ((*pbVar32 == 0xc) && (iVar14 = *(int *)(pbVar32 + 1) + -1, 0 < *(int *)(pbVar32 + 1))) {
        iVar24 = 0;
        do {
          iVar3 = iVar14 + iVar24;
          if (iVar3 < 0) {
            iVar3 = iVar3 + 1;
          }
          iVar3 = iVar3 >> 1;
          puVar1 = (uint *)(*(long *)(lVar19 + 0x28) + (long)*(int *)(pbVar32 + 5) + (long)iVar3 * 8
                           );
          uVar31 = *(ulong *)(*(long *)(lVar19 + 0x20) + (ulong)*puVar1 * 8);
          if (uVar31 == 0x16c09ff9d) {
            uVar22 = puVar1[1];
            if (-1 < (int)uVar22) {
              pbVar35 = pbVar32 + (int)uVar22;
            }
            break;
          }
          iVar7 = iVar3 + -1;
          if (uVar31 < 0x16c09ff9e) {
            iVar24 = iVar3 + 1;
            iVar7 = iVar14;
          }
          iVar14 = iVar7;
        } while (iVar24 <= iVar14);
      }
      uVar43 = 0x43480000;
      if (*pbVar35 == 8) {
        uVar43 = *(undefined4 *)(pbVar35 + 1);
      }
      *(undefined4 *)(*plVar2 + lVar16 * 0x10) = uVar43;
      pbVar35 = &DAT_7104742dbb;
      if ((*pbVar32 == 0xc) && (iVar14 = *(int *)(pbVar32 + 1) + -1, 0 < *(int *)(pbVar32 + 1))) {
        iVar24 = 0;
        do {
          iVar3 = iVar14 + iVar24;
          if (iVar3 < 0) {
            iVar3 = iVar3 + 1;
          }
          iVar3 = iVar3 >> 1;
          puVar1 = (uint *)(*(long *)(lVar19 + 0x28) + (long)*(int *)(pbVar32 + 5) + (long)iVar3 * 8
                           );
          uVar31 = *(ulong *)(*(long *)(lVar19 + 0x20) + (ulong)*puVar1 * 8);
          if (uVar31 == 0x101d41b76) {
            uVar22 = puVar1[1];
            if (-1 < (int)uVar22) {
              pbVar35 = pbVar32 + (int)uVar22;
            }
            break;
          }
          iVar7 = iVar3 + -1;
          if (uVar31 < 0x101d41b77) {
            iVar24 = iVar3 + 1;
            iVar7 = iVar14;
          }
          iVar14 = iVar7;
        } while (iVar24 <= iVar14);
      }
      uVar43 = 0x3f800000;
      if (*pbVar35 == 8) {
        uVar43 = *(undefined4 *)(pbVar35 + 1);
      }
      *(undefined4 *)(*plVar2 + lVar16 * 0x10 + 4) = uVar43;
      pbVar35 = &DAT_7104742dbb;
      if ((*pbVar32 == 0xc) && (iVar14 = *(int *)(pbVar32 + 1) + -1, 0 < *(int *)(pbVar32 + 1))) {
        iVar24 = 0;
        do {
          iVar3 = iVar14 + iVar24;
          if (iVar3 < 0) {
            iVar3 = iVar3 + 1;
          }
          iVar3 = iVar3 >> 1;
          puVar1 = (uint *)(*(long *)(lVar19 + 0x28) + (long)*(int *)(pbVar32 + 5) + (long)iVar3 * 8
                           );
          uVar31 = *(ulong *)(*(long *)(lVar19 + 0x20) + (ulong)*puVar1 * 8);
          if (uVar31 == 0x171beeff9) {
            uVar22 = puVar1[1];
            if (-1 < (int)uVar22) {
              pbVar35 = pbVar32 + (int)uVar22;
            }
            break;
          }
          iVar7 = iVar3 + -1;
          if (uVar31 < 0x171beeffa) {
            iVar24 = iVar3 + 1;
            iVar7 = iVar14;
          }
          iVar14 = iVar7;
        } while (iVar24 <= iVar14);
      }
      uVar43 = 0x3da3d70a;
      if (*pbVar35 == 8) {
        uVar43 = *(undefined4 *)(pbVar35 + 1);
      }
      *(undefined4 *)(*plVar2 + lVar16 * 0x10 + 8) = uVar43;
      pbVar35 = &DAT_7104742dbb;
      if ((*pbVar32 == 0xc) && (iVar14 = *(int *)(pbVar32 + 1) + -1, 0 < *(int *)(pbVar32 + 1))) {
        iVar24 = 0;
        do {
          iVar3 = iVar14 + iVar24;
          if (iVar3 < 0) {
            iVar3 = iVar3 + 1;
          }
          iVar3 = iVar3 >> 1;
          puVar1 = (uint *)(*(long *)(lVar19 + 0x28) + (long)*(int *)(pbVar32 + 5) + (long)iVar3 * 8
                           );
          uVar31 = *(ulong *)(*(long *)(lVar19 + 0x20) + (ulong)*puVar1 * 8);
          if (uVar31 == 0x1e8b7be43) {
            uVar22 = puVar1[1];
            if (-1 < (int)uVar22) {
              pbVar35 = pbVar32 + (int)uVar22;
            }
            break;
          }
          iVar7 = iVar3 + -1;
          if (uVar31 < 0x1e8b7be44) {
            iVar24 = iVar3 + 1;
            iVar7 = iVar14;
          }
          iVar14 = iVar7;
        } while (iVar24 <= iVar14);
      }
      uVar43 = 0x3f800000;
      if (*pbVar35 == 8) {
        uVar43 = *(undefined4 *)(pbVar35 + 1);
      }
      lVar19 = lVar16 * 0x10;
      lVar16 = lVar16 + 1;
      *(undefined4 *)(*plVar2 + lVar19 + 0xc) = uVar43;
      uVar22 = (uint)*pbVar39;
      if (uVar22 - 0xb < 2) {
        if (*(int *)(pbVar39 + 1) <= lVar16) break;
        goto LAB_7103233c3c;
      }
    } while (lVar16 < 0);
  }
  pcVar15 = (char *)param_2[1];
  if ((*pcVar15 == '\f') && (iVar14 = *(int *)(pcVar15 + 1) + -1, 0 < *(int *)(pcVar15 + 1))) {
    lVar33 = *param_2;
    iVar24 = 0;
    pbVar39 = &DAT_7104742dbb;
    do {
      iVar3 = iVar14 + iVar24;
      if (iVar3 < 0) {
        iVar3 = iVar3 + 1;
      }
      iVar3 = iVar3 >> 1;
      puVar1 = (uint *)(*(long *)(lVar33 + 0x28) + (long)*(int *)(pcVar15 + 5) + (long)iVar3 * 8);
      uVar31 = *(ulong *)(*(long *)(lVar33 + 0x20) + (ulong)*puVar1 * 8);
      if (uVar31 == 0x16a76ce7b8) {
        uVar22 = puVar1[1];
        if ((int)uVar22 < 0) goto LAB_7103233fc0;
        pbVar39 = (byte *)(pcVar15 + (int)uVar22);
        goto LAB_7103233fcc;
      }
      iVar7 = iVar3 + -1;
      if (uVar31 < 0x16a76ce7b9) {
        iVar24 = iVar3 + 1;
        iVar7 = iVar14;
      }
      iVar14 = iVar7;
    } while (iVar24 <= iVar14);
    lVar33 = 0;
  }
  else {
LAB_7103233fc0:
    lVar33 = 0;
    pbVar39 = &DAT_7104742dbb;
  }
LAB_7103233fcc:
  if (*pbVar39 - 0xb < 2) {
    iVar14 = *(int *)(pbVar39 + 1);
  }
  else {
    iVar14 = 0;
  }
  uVar31 = (ulong)iVar14;
  uVar34 = *(long *)(param_1 + 0x58) - *(long *)(param_1 + 0x50) >> 4;
  plVar2 = (long *)(param_1 + 0x50);
  if (uVar34 < uVar31) {
    FUN_71032362e0(plVar2,uVar31 - uVar34,param_3,param_4,param_5,param_6,param_7,param_8);
  }
  else if (uVar34 != uVar31) {
    *(ulong *)(param_1 + 0x58) = *(long *)(param_1 + 0x50) + uVar31 * 0x10;
  }
  uVar22 = (uint)*pbVar39;
  if ((*pbVar39 - 0xb < 2) && (0 < *(int *)(pbVar39 + 1))) {
    uVar43 = 0x3dcccccd;
    lVar16 = 0;
LAB_7103234064:
    do {
      iVar14 = (int)lVar16;
      if (iVar14 < 0) {
LAB_710323409c:
        lVar19 = 0;
        pbVar32 = &DAT_7104742dbb;
      }
      else {
        pbVar32 = &DAT_7104742dbb;
        lVar19 = 0;
        if (uVar22 == 0xb) {
          if (*(int *)(pbVar39 + 1) <= iVar14) goto LAB_710323409c;
          pbVar32 = pbVar39 + *(int *)(pbVar39 + (long)iVar14 * 4 + 5);
          lVar19 = lVar33;
        }
      }
      pbVar35 = &DAT_7104742dbb;
      if ((*pbVar32 == 0xc) && (iVar14 = *(int *)(pbVar32 + 1) + -1, 0 < *(int *)(pbVar32 + 1))) {
        iVar24 = 0;
        do {
          iVar3 = iVar14 + iVar24;
          if (iVar3 < 0) {
            iVar3 = iVar3 + 1;
          }
          iVar3 = iVar3 >> 1;
          puVar1 = (uint *)(*(long *)(lVar19 + 0x28) + (long)*(int *)(pbVar32 + 5) + (long)iVar3 * 8
                           );
          uVar31 = *(ulong *)(*(long *)(lVar19 + 0x20) + (ulong)*puVar1 * 8);
          if (uVar31 == 0x16c09ff9d) {
            uVar22 = puVar1[1];
            if (-1 < (int)uVar22) {
              pbVar35 = pbVar32 + (int)uVar22;
            }
            break;
          }
          iVar7 = iVar3 + -1;
          if (uVar31 < 0x16c09ff9e) {
            iVar24 = iVar3 + 1;
            iVar7 = iVar14;
          }
          iVar14 = iVar7;
        } while (iVar24 <= iVar14);
      }
      uVar42 = uVar43;
      if (*pbVar35 == 8) {
        uVar42 = *(undefined4 *)(pbVar35 + 1);
      }
      *(undefined4 *)(*plVar2 + lVar16 * 0x10) = uVar42;
      pbVar35 = &DAT_7104742dbb;
      if ((*pbVar32 == 0xc) && (iVar14 = *(int *)(pbVar32 + 1) + -1, 0 < *(int *)(pbVar32 + 1))) {
        iVar24 = 0;
        do {
          iVar3 = iVar14 + iVar24;
          if (iVar3 < 0) {
            iVar3 = iVar3 + 1;
          }
          iVar3 = iVar3 >> 1;
          puVar1 = (uint *)(*(long *)(lVar19 + 0x28) + (long)*(int *)(pbVar32 + 5) + (long)iVar3 * 8
                           );
          uVar31 = *(ulong *)(*(long *)(lVar19 + 0x20) + (ulong)*puVar1 * 8);
          if (uVar31 == 0x101d41b76) {
            uVar22 = puVar1[1];
            if (-1 < (int)uVar22) {
              pbVar35 = pbVar32 + (int)uVar22;
            }
            break;
          }
          iVar7 = iVar3 + -1;
          if (uVar31 < 0x101d41b77) {
            iVar24 = iVar3 + 1;
            iVar7 = iVar14;
          }
          iVar14 = iVar7;
        } while (iVar24 <= iVar14);
      }
      uVar42 = uVar43;
      if (*pbVar35 == 8) {
        uVar42 = *(undefined4 *)(pbVar35 + 1);
      }
      *(undefined4 *)(*plVar2 + lVar16 * 0x10 + 4) = uVar42;
      pbVar35 = &DAT_7104742dbb;
      if ((*pbVar32 == 0xc) && (iVar14 = *(int *)(pbVar32 + 1) + -1, 0 < *(int *)(pbVar32 + 1))) {
        iVar24 = 0;
        do {
          iVar3 = iVar14 + iVar24;
          if (iVar3 < 0) {
            iVar3 = iVar3 + 1;
          }
          iVar3 = iVar3 >> 1;
          puVar1 = (uint *)(*(long *)(lVar19 + 0x28) + (long)*(int *)(pbVar32 + 5) + (long)iVar3 * 8
                           );
          uVar31 = *(ulong *)(*(long *)(lVar19 + 0x20) + (ulong)*puVar1 * 8);
          if (uVar31 == 0x171beeff9) {
            uVar22 = puVar1[1];
            if (-1 < (int)uVar22) {
              pbVar35 = pbVar32 + (int)uVar22;
            }
            break;
          }
          iVar7 = iVar3 + -1;
          if (uVar31 < 0x171beeffa) {
            iVar24 = iVar3 + 1;
            iVar7 = iVar14;
          }
          iVar14 = iVar7;
        } while (iVar24 <= iVar14);
      }
      uVar42 = uVar43;
      if (*pbVar35 == 8) {
        uVar42 = *(undefined4 *)(pbVar35 + 1);
      }
      *(undefined4 *)(*plVar2 + lVar16 * 0x10 + 8) = uVar42;
      pbVar35 = &DAT_7104742dbb;
      if ((*pbVar32 == 0xc) && (iVar14 = *(int *)(pbVar32 + 1) + -1, 0 < *(int *)(pbVar32 + 1))) {
        iVar24 = 0;
        do {
          iVar3 = iVar14 + iVar24;
          if (iVar3 < 0) {
            iVar3 = iVar3 + 1;
          }
          iVar3 = iVar3 >> 1;
          puVar1 = (uint *)(*(long *)(lVar19 + 0x28) + (long)*(int *)(pbVar32 + 5) + (long)iVar3 * 8
                           );
          uVar31 = *(ulong *)(*(long *)(lVar19 + 0x20) + (ulong)*puVar1 * 8);
          if (uVar31 == 0x1e8b7be43) {
            uVar22 = puVar1[1];
            if (-1 < (int)uVar22) {
              pbVar35 = pbVar32 + (int)uVar22;
            }
            break;
          }
          iVar7 = iVar3 + -1;
          if (uVar31 < 0x1e8b7be44) {
            iVar24 = iVar3 + 1;
            iVar7 = iVar14;
          }
          iVar14 = iVar7;
        } while (iVar24 <= iVar14);
      }
      uVar42 = 0x3f000000;
      if (*pbVar35 == 8) {
        uVar42 = *(undefined4 *)(pbVar35 + 1);
      }
      lVar19 = lVar16 * 0x10;
      lVar16 = lVar16 + 1;
      *(undefined4 *)(*plVar2 + lVar19 + 0xc) = uVar42;
      uVar22 = (uint)*pbVar39;
      if (uVar22 - 0xb < 2) {
        if (*(int *)(pbVar39 + 1) <= lVar16) break;
        goto LAB_7103234064;
      }
    } while (lVar16 < 0);
  }
  pcVar15 = (char *)param_2[1];
  if ((*pcVar15 == '\f') && (iVar14 = *(int *)(pcVar15 + 1) + -1, 0 < *(int *)(pcVar15 + 1))) {
    lVar33 = *param_2;
    iVar24 = 0;
    pcVar23 = "";
    do {
      iVar3 = iVar14 + iVar24;
      if (iVar3 < 0) {
        iVar3 = iVar3 + 1;
      }
      iVar3 = iVar3 >> 1;
      puVar1 = (uint *)(*(long *)(lVar33 + 0x28) + (long)*(int *)(pcVar15 + 5) + (long)iVar3 * 8);
      uVar31 = *(ulong *)(*(long *)(lVar33 + 0x20) + (ulong)*puVar1 * 8);
      if (uVar31 == 0x103a50924c) {
        uVar22 = puVar1[1];
        if ((int)uVar22 < 0) goto LAB_71032343e8;
        pcVar23 = pcVar15 + (int)uVar22;
        goto LAB_71032343f4;
      }
      iVar7 = iVar3 + -1;
      if (uVar31 < 0x103a50924d) {
        iVar24 = iVar3 + 1;
        iVar7 = iVar14;
      }
      iVar14 = iVar7;
    } while (iVar24 <= iVar14);
    lVar33 = 0;
  }
  else {
LAB_71032343e8:
    lVar33 = 0;
    pcVar23 = "";
  }
LAB_71032343f4:
  if (*pcVar23 == '\t') {
    uVar27 = *(undefined8 *)(*(long *)(lVar33 + 0x20) + (long)*(int *)(pcVar23 + 1) * 8);
  }
  else {
    uVar27 = 0;
  }
  *(undefined8 *)(param_1 + 0x68) = uVar27;
  pcVar15 = (char *)param_2[1];
  if ((*pcVar15 == '\f') && (iVar14 = *(int *)(pcVar15 + 1) + -1, 0 < *(int *)(pcVar15 + 1))) {
    lVar33 = *param_2;
    iVar24 = 0;
    pbVar39 = &DAT_7104742dbb;
    do {
      iVar3 = iVar14 + iVar24;
      if (iVar3 < 0) {
        iVar3 = iVar3 + 1;
      }
      iVar3 = iVar3 >> 1;
      puVar1 = (uint *)(*(long *)(lVar33 + 0x28) + (long)*(int *)(pcVar15 + 5) + (long)iVar3 * 8);
      uVar31 = *(ulong *)(*(long *)(lVar33 + 0x20) + (ulong)*puVar1 * 8);
      if (uVar31 == 0x1a317c2094) {
        uVar22 = puVar1[1];
        if ((int)uVar22 < 0) goto LAB_71032344b0;
        pbVar39 = (byte *)(pcVar15 + (int)uVar22);
        goto LAB_71032344bc;
      }
      iVar7 = iVar3 + -1;
      if (uVar31 < 0x1a317c2095) {
        iVar24 = iVar3 + 1;
        iVar7 = iVar14;
      }
      iVar14 = iVar7;
    } while (iVar24 <= iVar14);
    lVar33 = 0;
  }
  else {
LAB_71032344b0:
    lVar33 = 0;
    pbVar39 = &DAT_7104742dbb;
  }
LAB_71032344bc:
  if (*pbVar39 - 0xb < 2) {
    iVar14 = *(int *)(pbVar39 + 1);
  }
  else {
    iVar14 = 0;
  }
  uVar31 = (ulong)iVar14;
  uVar34 = *(long *)(param_1 + 0x78) - *(long *)(param_1 + 0x70) >> 4;
  plVar2 = (long *)(param_1 + 0x70);
  if (uVar34 < uVar31) {
    FUN_71032362e0(plVar2,uVar31 - uVar34,param_3,param_4,param_5,param_6,param_7,param_8);
  }
  else if (uVar34 != uVar31) {
    *(ulong *)(param_1 + 0x78) = *(long *)(param_1 + 0x70) + uVar31 * 0x10;
  }
  uVar22 = (uint)*pbVar39;
  if ((*pbVar39 - 0xb < 2) && (0 < *(int *)(pbVar39 + 1))) {
    lVar16 = 0;
LAB_7103234570:
    do {
      iVar14 = (int)lVar16;
      if (iVar14 < 0) {
LAB_71032345a8:
        lVar19 = 0;
        pbVar32 = &DAT_7104742dbb;
      }
      else {
        pbVar32 = &DAT_7104742dbb;
        lVar19 = 0;
        if (uVar22 == 0xb) {
          if (*(int *)(pbVar39 + 1) <= iVar14) goto LAB_71032345a8;
          pbVar32 = pbVar39 + *(int *)(pbVar39 + (long)iVar14 * 4 + 5);
          lVar19 = lVar33;
        }
      }
      pbVar35 = &DAT_7104742dbb;
      if ((*pbVar32 == 0xc) && (iVar14 = *(int *)(pbVar32 + 1) + -1, 0 < *(int *)(pbVar32 + 1))) {
        iVar24 = 0;
        do {
          iVar3 = iVar14 + iVar24;
          if (iVar3 < 0) {
            iVar3 = iVar3 + 1;
          }
          iVar3 = iVar3 >> 1;
          puVar1 = (uint *)(*(long *)(lVar19 + 0x28) + (long)*(int *)(pbVar32 + 5) + (long)iVar3 * 8
                           );
          uVar31 = *(ulong *)(*(long *)(lVar19 + 0x20) + (ulong)*puVar1 * 8);
          if (uVar31 == 0x16c09ff9d) {
            uVar22 = puVar1[1];
            if (-1 < (int)uVar22) {
              pbVar35 = pbVar32 + (int)uVar22;
            }
            break;
          }
          iVar7 = iVar3 + -1;
          if (uVar31 < 0x16c09ff9e) {
            iVar24 = iVar3 + 1;
            iVar7 = iVar14;
          }
          iVar14 = iVar7;
        } while (iVar24 <= iVar14);
      }
      uVar43 = 0x3f333333;
      if (*pbVar35 == 8) {
        uVar43 = *(undefined4 *)(pbVar35 + 1);
      }
      *(undefined4 *)(*plVar2 + lVar16 * 0x10) = uVar43;
      pbVar35 = &DAT_7104742dbb;
      if ((*pbVar32 == 0xc) && (iVar14 = *(int *)(pbVar32 + 1) + -1, 0 < *(int *)(pbVar32 + 1))) {
        iVar24 = 0;
        do {
          iVar3 = iVar14 + iVar24;
          if (iVar3 < 0) {
            iVar3 = iVar3 + 1;
          }
          iVar3 = iVar3 >> 1;
          puVar1 = (uint *)(*(long *)(lVar19 + 0x28) + (long)*(int *)(pbVar32 + 5) + (long)iVar3 * 8
                           );
          uVar31 = *(ulong *)(*(long *)(lVar19 + 0x20) + (ulong)*puVar1 * 8);
          if (uVar31 == 0x101d41b76) {
            uVar22 = puVar1[1];
            if (-1 < (int)uVar22) {
              pbVar35 = pbVar32 + (int)uVar22;
            }
            break;
          }
          iVar7 = iVar3 + -1;
          if (uVar31 < 0x101d41b77) {
            iVar24 = iVar3 + 1;
            iVar7 = iVar14;
          }
          iVar14 = iVar7;
        } while (iVar24 <= iVar14);
      }
      uVar43 = 0x3f333333;
      if (*pbVar35 == 8) {
        uVar43 = *(undefined4 *)(pbVar35 + 1);
      }
      *(undefined4 *)(*plVar2 + lVar16 * 0x10 + 4) = uVar43;
      pbVar35 = &DAT_7104742dbb;
      if ((*pbVar32 == 0xc) && (iVar14 = *(int *)(pbVar32 + 1) + -1, 0 < *(int *)(pbVar32 + 1))) {
        iVar24 = 0;
        do {
          iVar3 = iVar14 + iVar24;
          if (iVar3 < 0) {
            iVar3 = iVar3 + 1;
          }
          iVar3 = iVar3 >> 1;
          puVar1 = (uint *)(*(long *)(lVar19 + 0x28) + (long)*(int *)(pbVar32 + 5) + (long)iVar3 * 8
                           );
          uVar31 = *(ulong *)(*(long *)(lVar19 + 0x20) + (ulong)*puVar1 * 8);
          if (uVar31 == 0x171beeff9) {
            uVar22 = puVar1[1];
            if (-1 < (int)uVar22) {
              pbVar35 = pbVar32 + (int)uVar22;
            }
            break;
          }
          iVar7 = iVar3 + -1;
          if (uVar31 < 0x171beeffa) {
            iVar24 = iVar3 + 1;
            iVar7 = iVar14;
          }
          iVar14 = iVar7;
        } while (iVar24 <= iVar14);
      }
      uVar43 = 0x3f4ccccd;
      if (*pbVar35 == 8) {
        uVar43 = *(undefined4 *)(pbVar35 + 1);
      }
      *(undefined4 *)(*plVar2 + lVar16 * 0x10 + 8) = uVar43;
      pbVar35 = &DAT_7104742dbb;
      if ((*pbVar32 == 0xc) && (iVar14 = *(int *)(pbVar32 + 1) + -1, 0 < *(int *)(pbVar32 + 1))) {
        iVar24 = 0;
        do {
          iVar3 = iVar14 + iVar24;
          if (iVar3 < 0) {
            iVar3 = iVar3 + 1;
          }
          iVar3 = iVar3 >> 1;
          puVar1 = (uint *)(*(long *)(lVar19 + 0x28) + (long)*(int *)(pbVar32 + 5) + (long)iVar3 * 8
                           );
          uVar31 = *(ulong *)(*(long *)(lVar19 + 0x20) + (ulong)*puVar1 * 8);
          if (uVar31 == 0x1e8b7be43) {
            uVar22 = puVar1[1];
            if (-1 < (int)uVar22) {
              pbVar35 = pbVar32 + (int)uVar22;
            }
            break;
          }
          iVar7 = iVar3 + -1;
          if (uVar31 < 0x1e8b7be44) {
            iVar24 = iVar3 + 1;
            iVar7 = iVar14;
          }
          iVar14 = iVar7;
        } while (iVar24 <= iVar14);
      }
      uVar43 = 0x3eb33333;
      if (*pbVar35 == 8) {
        uVar43 = *(undefined4 *)(pbVar35 + 1);
      }
      lVar19 = lVar16 * 0x10;
      lVar16 = lVar16 + 1;
      *(undefined4 *)(*plVar2 + lVar19 + 0xc) = uVar43;
      uVar22 = (uint)*pbVar39;
      if (uVar22 - 0xb < 2) {
        if (*(int *)(pbVar39 + 1) <= lVar16) break;
        goto LAB_7103234570;
      }
    } while (lVar16 < 0);
  }
  pcVar15 = (char *)param_2[1];
  if ((*pcVar15 == '\f') && (iVar14 = *(int *)(pcVar15 + 1) + -1, 0 < *(int *)(pcVar15 + 1))) {
    lVar33 = *param_2;
    iVar24 = 0;
    pbVar39 = &DAT_7104742dbb;
    do {
      iVar3 = iVar14 + iVar24;
      if (iVar3 < 0) {
        iVar3 = iVar3 + 1;
      }
      iVar3 = iVar3 >> 1;
      puVar1 = (uint *)(*(long *)(lVar33 + 0x28) + (long)*(int *)(pcVar15 + 5) + (long)iVar3 * 8);
      uVar31 = *(ulong *)(*(long *)(lVar33 + 0x20) + (ulong)*puVar1 * 8);
      if (uVar31 == 0x1016f18155) {
        uVar22 = puVar1[1];
        if ((int)uVar22 < 0) goto LAB_71032348f4;
        pbVar39 = (byte *)(pcVar15 + (int)uVar22);
        goto LAB_7103234900;
      }
      iVar7 = iVar3 + -1;
      if (uVar31 < 0x1016f18156) {
        iVar24 = iVar3 + 1;
        iVar7 = iVar14;
      }
      iVar14 = iVar7;
    } while (iVar24 <= iVar14);
    lVar33 = 0;
  }
  else {
LAB_71032348f4:
    lVar33 = 0;
    pbVar39 = &DAT_7104742dbb;
  }
LAB_7103234900:
  if (*pbVar39 - 0xb < 2) {
    iVar14 = *(int *)(pbVar39 + 1);
  }
  else {
    iVar14 = 0;
  }
  uVar31 = (ulong)iVar14;
  pvVar5 = *(void **)(param_1 + 0x88);
  puVar21 = *(undefined8 **)(param_1 + 0x90);
  pppplVar28 = (long ****)((long)puVar21 - (long)pvVar5);
  lVar16 = (long)pppplVar28 >> 4;
  plVar2 = (long *)(param_1 + 0x88);
  if ((ulong)(lVar16 * -0x5555555555555555) < uVar31) {
    uVar34 = uVar31 + lVar16 * 0x5555555555555555;
    if ((ulong)((*(long *)(param_1 + 0x98) - (long)puVar21 >> 4) * -0x5555555555555555) < uVar34) {
      if (iVar14 < 0) goto LAB_71032362d0;
      lVar19 = *(long *)(param_1 + 0x98) - (long)pvVar5 >> 4;
      if ((ulong)(lVar19 * -0x5555555555555555) < 0x2aaaaaaaaaaaaaa) {
        uVar41 = lVar19 * 0x5555555555555556;
        uVar40 = uVar31;
        if (uVar31 <= uVar41) {
          uVar40 = uVar41;
        }
        if (uVar40 != 0) goto LAB_7103234a28;
        lVar19 = 0;
      }
      else {
        uVar40 = 0x555555555555555;
LAB_7103234a28:
        ppplVar18 = (long ***)(uVar40 * 0x30);
        if (ppplVar18 == (long ***)0x0) {
          ppplVar18 = (long ***)0x1;
        }
        lVar19 = FUN_710392e290(0x10,ppplVar18,param_3,param_4,param_5,param_6,param_7,param_8);
        if (lVar19 == 0) {
          if (DAT_7105332f00 != (long *)0x0) {
            local_64 = 0;
            pppplVar29 = &local_70;
            local_70 = ppplVar18;
            uVar41 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_64);
            if (((uVar41 & 1) != 0) &&
               (lVar19 = FUN_710392e290(0x10,ppplVar18,pppplVar29,param_4,param_5,param_6,param_7,
                                        param_8), lVar19 != 0)) goto LAB_7103234a9c;
          }
          lVar19 = 0;
        }
      }
LAB_7103234a9c:
      pvVar37 = (void *)(lVar19 + lVar16 * 0x10);
      memset(pvVar37,0,uVar34 * 0x30);
      lVar16 = SUB168(SEXT816((long)pppplVar28) * SEXT816(-0x2aaaaaaaaaaaaaab),8);
      pvVar37 = (void *)((long)pvVar37 + ((lVar16 >> 3) - (lVar16 >> 0x3f)) * 0x30);
      param_3 = pppplVar28;
      if (0 < (long)pppplVar28) {
        memcpy(pvVar37,pvVar5,(size_t)pppplVar28);
        param_3 = pppplVar28;
      }
      *(void **)(param_1 + 0x88) = pvVar37;
      *(ulong *)(param_1 + 0x90) = lVar19 + uVar31 * 0x30;
      *(ulong *)(param_1 + 0x98) = lVar19 + uVar40 * 0x30;
      if (pvVar5 != (void *)0x0) {
        FUN_710392eb40((ulong)pvVar5);
      }
    }
    else {
      uVar31 = uVar34;
      if ((uVar34 & 1) != 0) {
        puVar21[4] = 0;
        puVar21[5] = 0;
        uVar31 = uVar34 - 1;
        puVar21[2] = 0;
        puVar21[3] = 0;
        *puVar21 = 0;
        puVar21[1] = 0;
        puVar21 = (undefined8 *)(*(long *)(param_1 + 0x90) + 0x30);
        *(undefined8 **)(param_1 + 0x90) = puVar21;
      }
      if (uVar34 != 1) {
        do {
          puVar21[4] = 0;
          puVar21[5] = 0;
          uVar31 = uVar31 - 2;
          puVar21[2] = 0;
          puVar21[3] = 0;
          *puVar21 = 0;
          puVar21[1] = 0;
          lVar16 = *(long *)(param_1 + 0x90);
          *(long *)(param_1 + 0x90) = lVar16 + 0x30;
          *(undefined8 *)(lVar16 + 0x50) = 0;
          *(undefined8 *)(lVar16 + 0x58) = 0;
          *(undefined8 *)(lVar16 + 0x40) = 0;
          *(undefined8 *)(lVar16 + 0x48) = 0;
          *(undefined8 *)(lVar16 + 0x30) = 0;
          *(undefined8 *)(lVar16 + 0x38) = 0;
          puVar21 = (undefined8 *)(*(long *)(param_1 + 0x90) + 0x30);
          *(undefined8 **)(param_1 + 0x90) = puVar21;
        } while (uVar31 != 0);
      }
    }
  }
  else if (lVar16 * -0x5555555555555555 - uVar31 != 0) {
    *(void **)(param_1 + 0x90) = (void *)((long)pvVar5 + uVar31 * 0x30);
  }
  uVar22 = (uint)*pbVar39;
  if ((*pbVar39 - 0xb < 2) && (0 < *(int *)(pbVar39 + 1))) {
    lVar16 = 0;
LAB_7103234ba4:
    do {
      iVar14 = (int)lVar16;
      if (iVar14 < 0) {
LAB_7103234bdc:
        lVar19 = 0;
        pbVar32 = &DAT_7104742dbb;
      }
      else {
        lVar19 = 0;
        pbVar32 = &DAT_7104742dbb;
        if (uVar22 == 0xb) {
          if (*(int *)(pbVar39 + 1) <= iVar14) goto LAB_7103234bdc;
          pbVar32 = pbVar39 + *(int *)(pbVar39 + (long)iVar14 * 4 + 5);
          lVar19 = lVar33;
        }
      }
      if ((*pbVar32 == 0xc) && (uVar22 = *(int *)(pbVar32 + 1) - 1, 0 < *(int *)(pbVar32 + 1))) {
        iVar14 = 0;
        do {
          iVar24 = uVar22 + iVar14;
          if (iVar24 < 0) {
            iVar24 = iVar24 + 1;
          }
          uVar11 = iVar24 >> 1;
          param_6 = (uint *)(ulong)uVar11;
          param_7 = (byte ***)
                    (*(long *)(lVar19 + 0x28) + (long)*(int *)(pbVar32 + 5) + (long)(int)uVar11 * 8)
          ;
          param_8 = *(ulong *)(*(long *)(lVar19 + 0x20) + (ulong)*(uint *)param_7 * 8);
          if (param_8 == 0x43bc4bcd9) {
            if (-1 < (int)*(uint *)((long)param_7 + 4)) {
              pbVar35 = pbVar32 + (int)*(uint *)((long)param_7 + 4);
              lVar10 = lVar19;
              goto LAB_7103234c64;
            }
            break;
          }
          param_7 = (byte ***)(ulong)(uVar11 - 1);
          uVar8 = uVar11 - 1;
          if (param_8 < 0x43bc4bcda) {
            iVar14 = uVar11 + 1;
            uVar8 = uVar22;
          }
          uVar22 = uVar8;
        } while (iVar14 <= (int)uVar22);
      }
      lVar10 = 0;
      pbVar35 = &DAT_7104742dbb;
LAB_7103234c64:
      if (*pbVar35 == 9) {
        uVar27 = *(undefined8 *)(*(long *)(lVar10 + 0x20) + (long)*(int *)(pbVar35 + 1) * 8);
      }
      else {
        uVar27 = 0;
      }
      *(undefined8 *)(*plVar2 + lVar16 * 0x30) = uVar27;
      if ((*pbVar32 == 0xc) && (uVar22 = *(int *)(pbVar32 + 1) - 1, 0 < *(int *)(pbVar32 + 1))) {
        iVar14 = 0;
        do {
          iVar24 = uVar22 + iVar14;
          if (iVar24 < 0) {
            iVar24 = iVar24 + 1;
          }
          uVar11 = iVar24 >> 1;
          param_6 = (uint *)(ulong)uVar11;
          param_7 = (byte ***)
                    (*(long *)(lVar19 + 0x28) + (long)*(int *)(pbVar32 + 5) + (long)(int)uVar11 * 8)
          ;
          param_8 = *(ulong *)(*(long *)(lVar19 + 0x20) + (ulong)*(uint *)param_7 * 8);
          if (param_8 == 0xc9823e2c9) {
            if (-1 < (int)*(uint *)((long)param_7 + 4)) {
              pbVar35 = pbVar32 + (int)*(uint *)((long)param_7 + 4);
              lVar10 = lVar19;
              goto LAB_7103234d14;
            }
            break;
          }
          param_7 = (byte ***)(ulong)(uVar11 - 1);
          uVar8 = uVar11 - 1;
          if (param_8 < 0xc9823e2ca) {
            iVar14 = uVar11 + 1;
            uVar8 = uVar22;
          }
          uVar22 = uVar8;
        } while (iVar14 <= (int)uVar22);
      }
      lVar10 = 0;
      pbVar35 = &DAT_7104742dbb;
LAB_7103234d14:
      if (*pbVar35 == 9) {
        uVar27 = *(undefined8 *)(*(long *)(lVar10 + 0x20) + (long)*(int *)(pbVar35 + 1) * 8);
      }
      else {
        uVar27 = 0;
      }
      *(undefined8 *)(*plVar2 + lVar16 * 0x30 + 8) = uVar27;
      if ((*pbVar32 == 0xc) && (uVar22 = *(int *)(pbVar32 + 1) - 1, 0 < *(int *)(pbVar32 + 1))) {
        iVar14 = 0;
        do {
          iVar24 = uVar22 + iVar14;
          if (iVar24 < 0) {
            iVar24 = iVar24 + 1;
          }
          uVar11 = iVar24 >> 1;
          param_6 = (uint *)(ulong)uVar11;
          param_7 = (byte ***)
                    (*(long *)(lVar19 + 0x28) + (long)*(int *)(pbVar32 + 5) + (long)(int)uVar11 * 8)
          ;
          param_8 = *(ulong *)(*(long *)(lVar19 + 0x20) + (ulong)*(uint *)param_7 * 8);
          if (param_8 == 0xcef24d25f) {
            if (-1 < (int)*(uint *)((long)param_7 + 4)) {
              pbVar35 = pbVar32 + (int)*(uint *)((long)param_7 + 4);
              lVar10 = lVar19;
              goto LAB_7103234dc4;
            }
            break;
          }
          param_7 = (byte ***)(ulong)(uVar11 - 1);
          uVar8 = uVar11 - 1;
          if (param_8 < 0xcef24d260) {
            iVar14 = uVar11 + 1;
            uVar8 = uVar22;
          }
          uVar22 = uVar8;
        } while (iVar14 <= (int)uVar22);
      }
      lVar10 = 0;
      pbVar35 = &DAT_7104742dbb;
LAB_7103234dc4:
      if (*pbVar35 == 9) {
        uVar27 = *(undefined8 *)(*(long *)(lVar10 + 0x20) + (long)*(int *)(pbVar35 + 1) * 8);
      }
      else {
        uVar27 = 0;
      }
      *(undefined8 *)(*plVar2 + lVar16 * 0x30 + 0x10) = uVar27;
      if ((*pbVar32 == 0xc) && (uVar22 = *(int *)(pbVar32 + 1) - 1, 0 < *(int *)(pbVar32 + 1))) {
        iVar14 = 0;
        do {
          iVar24 = uVar22 + iVar14;
          if (iVar24 < 0) {
            iVar24 = iVar24 + 1;
          }
          uVar11 = iVar24 >> 1;
          param_6 = (uint *)(ulong)uVar11;
          param_7 = (byte ***)
                    (*(long *)(lVar19 + 0x28) + (long)*(int *)(pbVar32 + 5) + (long)(int)uVar11 * 8)
          ;
          param_8 = *(ulong *)(*(long *)(lVar19 + 0x20) + (ulong)*(uint *)param_7 * 8);
          if (param_8 == 0xc762d83e5) {
            if (-1 < (int)*(uint *)((long)param_7 + 4)) {
              pbVar35 = pbVar32 + (int)*(uint *)((long)param_7 + 4);
              lVar10 = lVar19;
              goto LAB_7103234e74;
            }
            break;
          }
          param_7 = (byte ***)(ulong)(uVar11 - 1);
          uVar8 = uVar11 - 1;
          if (param_8 < 0xc762d83e6) {
            iVar14 = uVar11 + 1;
            uVar8 = uVar22;
          }
          uVar22 = uVar8;
        } while (iVar14 <= (int)uVar22);
      }
      lVar10 = 0;
      pbVar35 = &DAT_7104742dbb;
LAB_7103234e74:
      if (*pbVar35 == 9) {
        uVar27 = *(undefined8 *)(*(long *)(lVar10 + 0x20) + (long)*(int *)(pbVar35 + 1) * 8);
      }
      else {
        uVar27 = 0;
      }
      *(undefined8 *)(*plVar2 + lVar16 * 0x30 + 0x18) = uVar27;
      if ((*pbVar32 == 0xc) && (uVar22 = *(int *)(pbVar32 + 1) - 1, 0 < *(int *)(pbVar32 + 1))) {
        iVar14 = 0;
        do {
          iVar24 = uVar22 + iVar14;
          if (iVar24 < 0) {
            iVar24 = iVar24 + 1;
          }
          uVar11 = iVar24 >> 1;
          param_6 = (uint *)(ulong)uVar11;
          param_7 = (byte ***)
                    (*(long *)(lVar19 + 0x28) + (long)*(int *)(pbVar32 + 5) + (long)(int)uVar11 * 8)
          ;
          param_8 = *(ulong *)(*(long *)(lVar19 + 0x20) + (ulong)*(uint *)param_7 * 8);
          if (param_8 == 0xc012ab373) {
            if (-1 < (int)*(uint *)((long)param_7 + 4)) {
              pbVar35 = pbVar32 + (int)*(uint *)((long)param_7 + 4);
              lVar10 = lVar19;
              goto LAB_7103234f24;
            }
            break;
          }
          param_7 = (byte ***)(ulong)(uVar11 - 1);
          uVar8 = uVar11 - 1;
          if (param_8 < 0xc012ab374) {
            iVar14 = uVar11 + 1;
            uVar8 = uVar22;
          }
          uVar22 = uVar8;
        } while (iVar14 <= (int)uVar22);
      }
      lVar10 = 0;
      pbVar35 = &DAT_7104742dbb;
LAB_7103234f24:
      param_4 = (byte ****)(ulong)*pbVar35;
      if (*pbVar35 == 9) {
        ppplVar18 = *(long ****)(*(long *)(lVar10 + 0x20) + (long)*(int *)(pbVar35 + 1) * 8);
      }
      else {
        ppplVar18 = (long ***)0x0;
      }
      param_3 = (long ****)(*plVar2 + lVar16 * 0x30);
      param_3[4] = ppplVar18;
      pbVar35 = &DAT_7104742dbb;
      if ((*pbVar32 == 0xc) && (uVar22 = *(int *)(pbVar32 + 1) - 1, 0 < *(int *)(pbVar32 + 1))) {
        param_4 = *(byte *****)(lVar19 + 0x20);
        param_3 = (long ****)0x0;
        do {
          uVar11 = (uint)param_3;
          iVar14 = uVar22 + uVar11;
          if (iVar14 < 0) {
            iVar14 = iVar14 + 1;
          }
          iVar14 = iVar14 >> 1;
          param_6 = (uint *)(*(long *)(lVar19 + 0x28) + (long)*(int *)(pbVar32 + 5) +
                            (long)iVar14 * 8);
          param_7 = param_4[*param_6];
          if (param_7 == (byte ***)0x5ec462584) {
            if (-1 < (int)param_6[1]) {
              pbVar35 = pbVar32 + (int)param_6[1];
            }
            break;
          }
          param_6 = (uint *)(ulong)(iVar14 - 1U);
          uVar8 = iVar14 - 1U;
          if (param_7 < (byte ***)0x5ec462585) {
            uVar11 = iVar14 + 1;
            uVar8 = uVar22;
          }
          uVar22 = uVar8;
          param_3 = (long ****)(ulong)uVar11;
        } while ((int)uVar11 <= (int)uVar22);
      }
      uVar43 = 0x3f19999a;
      if (*pbVar35 == 8) {
        uVar43 = *(undefined4 *)(pbVar35 + 1);
      }
      lVar19 = lVar16 * 0x30;
      lVar16 = lVar16 + 1;
      *(undefined4 *)(*plVar2 + lVar19 + 0x28) = uVar43;
      uVar22 = (uint)*pbVar39;
      if (uVar22 - 0xb < 2) {
        if (*(int *)(pbVar39 + 1) <= lVar16) break;
        goto LAB_7103234ba4;
      }
    } while (lVar16 < 0);
  }
  pcVar15 = (char *)param_2[1];
  if ((*pcVar15 == '\f') && (iVar14 = *(int *)(pcVar15 + 1) + -1, 0 < *(int *)(pcVar15 + 1))) {
    pppplVar28 = (long ****)*param_2;
    iVar24 = 0;
    pbVar39 = &DAT_7104742dbb;
    do {
      iVar3 = iVar14 + iVar24;
      if (iVar3 < 0) {
        iVar3 = iVar3 + 1;
      }
      iVar3 = iVar3 >> 1;
      puVar1 = (uint *)((long)pppplVar28[5] + (long)iVar3 * 8 + (long)*(int *)(pcVar15 + 5));
      if (pppplVar28[4][*puVar1] == (long **)0x18aa95c72f) {
        uVar22 = puVar1[1];
        if ((int)uVar22 < 0) goto LAB_71032350b8;
        pbVar39 = (byte *)(pcVar15 + (int)uVar22);
        goto LAB_71032350c4;
      }
      iVar7 = iVar3 + -1;
      if (pppplVar28[4][*puVar1] < (long **)0x18aa95c730) {
        iVar24 = iVar3 + 1;
        iVar7 = iVar14;
      }
      iVar14 = iVar7;
    } while (iVar24 <= iVar14);
    pppplVar28 = (long ****)0x0;
  }
  else {
LAB_71032350b8:
    pppplVar28 = (long ****)0x0;
    pbVar39 = &DAT_7104742dbb;
  }
LAB_71032350c4:
  if (*pbVar39 - 0xb < 2) {
    iVar14 = *(int *)(pbVar39 + 1);
  }
  else {
    iVar14 = 0;
  }
  uVar31 = (ulong)iVar14;
  pvVar5 = *(void **)(param_1 + 0xa0);
  puVar21 = *(undefined8 **)(param_1 + 0xa8);
  pppplVar29 = (long ****)((long)puVar21 - (long)pvVar5);
  lVar33 = (long)pppplVar29 >> 2;
  plVar2 = (long *)(param_1 + 0xa0);
  if ((ulong)(lVar33 * -0x3333333333333333) < uVar31) {
    uVar34 = uVar31 + lVar33 * 0x3333333333333333;
    if ((ulong)((*(long *)(param_1 + 0xb0) - (long)puVar21 >> 2) * -0x3333333333333333) < uVar34) {
      if (iVar14 < 0) goto LAB_71032362d0;
      lVar16 = *(long *)(param_1 + 0xb0) - (long)pvVar5 >> 2;
      if ((ulong)(lVar16 * -0x3333333333333333) < 0x666666666666666) {
        uVar41 = lVar16 * -0x6666666666666666;
        uVar40 = uVar31;
        if (uVar31 <= uVar41) {
          uVar40 = uVar41;
        }
        if (uVar40 != 0) goto LAB_71032351e0;
        lVar16 = 0;
      }
      else {
        uVar40 = 0xccccccccccccccc;
LAB_71032351e0:
        ppplVar18 = (long ***)(uVar40 * 0x14);
        if (ppplVar18 == (long ***)0x0) {
          ppplVar18 = (long ***)0x1;
        }
        pppplVar13 = pppplVar28;
        lVar16 = FUN_710392e290(0x10,ppplVar18,param_3,param_4,pppplVar28,param_6,param_7,param_8);
        if (lVar16 == 0) {
          if (DAT_7105332f00 != (long *)0x0) {
            local_64 = 0;
            pppplVar12 = &local_70;
            local_70 = ppplVar18;
            uVar41 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_64);
            if (((uVar41 & 1) != 0) &&
               (lVar16 = FUN_710392e290(0x10,ppplVar18,pppplVar12,param_4,pppplVar13,param_6,param_7
                                        ,param_8), lVar16 != 0)) goto LAB_7103235254;
          }
          lVar16 = 0;
        }
      }
LAB_7103235254:
      pvVar37 = (void *)(lVar16 + lVar33 * 4);
      memset(pvVar37,0,uVar34 * 0x14);
      lVar33 = SUB168(SEXT816((long)pppplVar29) * SEXT816(-0x6666666666666667),8);
      pvVar37 = (void *)((long)pvVar37 + ((lVar33 >> 3) - (lVar33 >> 0x3f)) * 0x14);
      param_3 = pppplVar29;
      if (0 < (long)pppplVar29) {
        memcpy(pvVar37,pvVar5,(size_t)pppplVar29);
        param_3 = pppplVar29;
      }
      *(void **)(param_1 + 0xa0) = pvVar37;
      *(ulong *)(param_1 + 0xa8) = lVar16 + uVar31 * 0x14;
      *(ulong *)(param_1 + 0xb0) = lVar16 + uVar40 * 0x14;
      if (pvVar5 != (void *)0x0) {
        FUN_710392eb40((ulong)pvVar5);
      }
    }
    else {
      uVar31 = uVar34;
      if ((uVar34 & 1) != 0) {
        *(undefined4 *)(puVar21 + 2) = 0;
        *puVar21 = 0;
        puVar21[1] = 0;
        puVar21 = (undefined8 *)(*(long *)(param_1 + 0xa8) + 0x14);
        uVar31 = uVar34 - 1;
        *(undefined8 **)(param_1 + 0xa8) = puVar21;
      }
      if (uVar34 != 1) {
        do {
          *(undefined4 *)(puVar21 + 2) = 0;
          *puVar21 = 0;
          puVar21[1] = 0;
          lVar33 = *(long *)(param_1 + 0xa8);
          *(long *)(param_1 + 0xa8) = lVar33 + 0x14;
          *(undefined4 *)(lVar33 + 0x24) = 0;
          *(undefined8 *)(lVar33 + 0x1c) = 0;
          *(undefined8 *)(lVar33 + 0x14) = 0;
          puVar21 = (undefined8 *)(*(long *)(param_1 + 0xa8) + 0x14);
          uVar31 = uVar31 - 2;
          *(undefined8 **)(param_1 + 0xa8) = puVar21;
        } while (uVar31 != 0);
      }
    }
  }
  else if (lVar33 * -0x3333333333333333 - uVar31 != 0) {
    *(void **)(param_1 + 0xa8) = (void *)((long)pvVar5 + uVar31 * 0x14);
  }
  uVar22 = (uint)*pbVar39;
  if ((*pbVar39 - 0xb < 2) && (0 < *(int *)(pbVar39 + 1))) {
    lVar33 = 0;
LAB_7103235338:
    do {
      iVar14 = (int)lVar33;
      if (iVar14 < 0) {
LAB_7103235370:
        pppplVar29 = (long ****)0x0;
        pbVar32 = &DAT_7104742dbb;
      }
      else {
        pbVar32 = &DAT_7104742dbb;
        pppplVar29 = (long ****)0x0;
        if (uVar22 == 0xb) {
          if (*(int *)(pbVar39 + 1) <= iVar14) goto LAB_7103235370;
          pbVar32 = pbVar39 + *(int *)(pbVar39 + (long)iVar14 * 4 + 5);
          pppplVar29 = pppplVar28;
        }
      }
      pbVar35 = &DAT_7104742dbb;
      if ((*pbVar32 == 0xc) && (uVar22 = *(int *)(pbVar32 + 1) - 1, 0 < *(int *)(pbVar32 + 1))) {
        iVar14 = 0;
        do {
          iVar24 = uVar22 + iVar14;
          if (iVar24 < 0) {
            iVar24 = iVar24 + 1;
          }
          iVar24 = iVar24 >> 1;
          param_3 = (long ****)
                    ((long)pppplVar29[5] + (long)iVar24 * 8 + (long)*(int *)(pbVar32 + 5));
          param_4 = (byte ****)pppplVar29[4][*(uint *)param_3];
          if (param_4 == (byte ****)0x16c09ff9d) {
            if (-1 < (int)*(uint *)((long)param_3 + 4)) {
              pbVar35 = pbVar32 + (int)*(uint *)((long)param_3 + 4);
            }
            break;
          }
          param_3 = (long ****)(ulong)(iVar24 - 1U);
          uVar11 = iVar24 - 1U;
          if (param_4 < (byte ****)0x16c09ff9e) {
            iVar14 = iVar24 + 1;
            uVar11 = uVar22;
          }
          uVar22 = uVar11;
        } while (iVar14 <= (int)uVar22);
      }
      uVar43 = 0x3f800000;
      if (*pbVar35 == 8) {
        uVar43 = *(undefined4 *)(pbVar35 + 1);
      }
      *(undefined4 *)(*plVar2 + lVar33 * 0x14) = uVar43;
      pbVar35 = &DAT_7104742dbb;
      if ((*pbVar32 == 0xc) && (uVar22 = *(int *)(pbVar32 + 1) - 1, 0 < *(int *)(pbVar32 + 1))) {
        iVar14 = 0;
        do {
          iVar24 = uVar22 + iVar14;
          if (iVar24 < 0) {
            iVar24 = iVar24 + 1;
          }
          iVar24 = iVar24 >> 1;
          param_3 = (long ****)
                    ((long)pppplVar29[5] + (long)iVar24 * 8 + (long)*(int *)(pbVar32 + 5));
          param_4 = (byte ****)pppplVar29[4][*(uint *)param_3];
          if (param_4 == (byte ****)0x101d41b76) {
            if (-1 < (int)*(uint *)((long)param_3 + 4)) {
              pbVar35 = pbVar32 + (int)*(uint *)((long)param_3 + 4);
            }
            break;
          }
          param_3 = (long ****)(ulong)(iVar24 - 1U);
          uVar11 = iVar24 - 1U;
          if (param_4 < (byte ****)0x101d41b77) {
            iVar14 = iVar24 + 1;
            uVar11 = uVar22;
          }
          uVar22 = uVar11;
        } while (iVar14 <= (int)uVar22);
      }
      uVar43 = 0x3f800000;
      if (*pbVar35 == 8) {
        uVar43 = *(undefined4 *)(pbVar35 + 1);
      }
      *(undefined4 *)(*plVar2 + lVar33 * 0x14 + 4) = uVar43;
      pbVar35 = &DAT_7104742dbb;
      if ((*pbVar32 == 0xc) && (uVar22 = *(int *)(pbVar32 + 1) - 1, 0 < *(int *)(pbVar32 + 1))) {
        iVar14 = 0;
        do {
          iVar24 = uVar22 + iVar14;
          if (iVar24 < 0) {
            iVar24 = iVar24 + 1;
          }
          iVar24 = iVar24 >> 1;
          param_3 = (long ****)
                    ((long)pppplVar29[5] + (long)iVar24 * 8 + (long)*(int *)(pbVar32 + 5));
          param_4 = (byte ****)pppplVar29[4][*(uint *)param_3];
          if (param_4 == (byte ****)0x171beeff9) {
            if (-1 < (int)*(uint *)((long)param_3 + 4)) {
              pbVar35 = pbVar32 + (int)*(uint *)((long)param_3 + 4);
            }
            break;
          }
          param_3 = (long ****)(ulong)(iVar24 - 1U);
          uVar11 = iVar24 - 1U;
          if (param_4 < (byte ****)0x171beeffa) {
            iVar14 = iVar24 + 1;
            uVar11 = uVar22;
          }
          uVar22 = uVar11;
        } while (iVar14 <= (int)uVar22);
      }
      uVar43 = 0x3f800000;
      if (*pbVar35 == 8) {
        uVar43 = *(undefined4 *)(pbVar35 + 1);
      }
      *(undefined4 *)(*plVar2 + lVar33 * 0x14 + 8) = uVar43;
      pbVar35 = &DAT_7104742dbb;
      if ((*pbVar32 == 0xc) && (uVar22 = *(int *)(pbVar32 + 1) - 1, 0 < *(int *)(pbVar32 + 1))) {
        iVar14 = 0;
        do {
          iVar24 = uVar22 + iVar14;
          if (iVar24 < 0) {
            iVar24 = iVar24 + 1;
          }
          iVar24 = iVar24 >> 1;
          param_3 = (long ****)
                    ((long)pppplVar29[5] + (long)iVar24 * 8 + (long)*(int *)(pbVar32 + 5));
          param_4 = (byte ****)pppplVar29[4][*(uint *)param_3];
          if (param_4 == (byte ****)0x5a4710a17) {
            if (-1 < (int)*(uint *)((long)param_3 + 4)) {
              pbVar35 = pbVar32 + (int)*(uint *)((long)param_3 + 4);
            }
            break;
          }
          param_3 = (long ****)(ulong)(iVar24 - 1U);
          uVar11 = iVar24 - 1U;
          if (param_4 < (byte ****)0x5a4710a18) {
            iVar14 = iVar24 + 1;
            uVar11 = uVar22;
          }
          uVar22 = uVar11;
        } while (iVar14 <= (int)uVar22);
      }
      uVar43 = 0x3e99999a;
      if (*pbVar35 == 8) {
        uVar43 = *(undefined4 *)(pbVar35 + 1);
      }
      *(undefined4 *)(*plVar2 + lVar33 * 0x14 + 0xc) = uVar43;
      pbVar35 = &DAT_7104742dbb;
      if ((*pbVar32 == 0xc) && (iVar14 = *(int *)(pbVar32 + 1) + -1, 0 < *(int *)(pbVar32 + 1))) {
        iVar24 = 0;
        do {
          iVar3 = iVar14 + iVar24;
          if (iVar3 < 0) {
            iVar3 = iVar3 + 1;
          }
          iVar3 = iVar3 >> 1;
          puVar1 = (uint *)((long)pppplVar29[5] + (long)iVar3 * 8 + (long)*(int *)(pbVar32 + 5));
          param_3 = (long ****)pppplVar29[4][*puVar1];
          if (param_3 == (long ****)0x5796efd3a) {
            uVar22 = puVar1[1];
            if (-1 < (int)uVar22) {
              pbVar35 = pbVar32 + (int)uVar22;
            }
            break;
          }
          iVar7 = iVar3 + -1;
          if (param_3 < (long ****)0x5796efd3b) {
            iVar24 = iVar3 + 1;
            iVar7 = iVar14;
          }
          iVar14 = iVar7;
        } while (iVar24 <= iVar14);
      }
      uVar43 = 0x3f4ccccd;
      if (*pbVar35 == 8) {
        uVar43 = *(undefined4 *)(pbVar35 + 1);
      }
      lVar16 = lVar33 * 0x14;
      lVar33 = lVar33 + 1;
      *(undefined4 *)(*plVar2 + lVar16 + 0x10) = uVar43;
      uVar22 = (uint)*pbVar39;
      if (uVar22 - 0xb < 2) {
        if (*(int *)(pbVar39 + 1) <= lVar33) break;
        goto LAB_7103235338;
      }
    } while (lVar33 < 0);
  }
  pcVar15 = (char *)param_2[1];
  if ((*pcVar15 == '\f') && (iVar14 = *(int *)(pcVar15 + 1) + -1, 0 < *(int *)(pcVar15 + 1))) {
    iVar24 = 0;
    pcVar23 = "";
    do {
      iVar3 = iVar14 + iVar24;
      if (iVar3 < 0) {
        iVar3 = iVar3 + 1;
      }
      iVar3 = iVar3 >> 1;
      puVar1 = (uint *)(*(long *)(*param_2 + 0x28) + (long)*(int *)(pcVar15 + 5) + (long)iVar3 * 8);
      uVar31 = *(ulong *)(*(long *)(*param_2 + 0x20) + (ulong)*puVar1 * 8);
      if (uVar31 == 0xcefb4d583) {
        uVar22 = puVar1[1];
        if ((int)uVar22 < 0) goto LAB_7103235758;
        pcVar23 = pcVar15 + (int)uVar22;
        break;
      }
      iVar7 = iVar3 + -1;
      if (uVar31 < 0xcefb4d584) {
        iVar24 = iVar3 + 1;
        iVar7 = iVar14;
      }
      iVar14 = iVar7;
    } while (iVar24 <= iVar14);
  }
  else {
LAB_7103235758:
    pcVar23 = "";
  }
  if (*pcVar23 == '\b') {
    uVar43 = *(undefined4 *)(pcVar23 + 1);
  }
  else {
    uVar43 = 0x3c23d70a;
  }
  *(undefined4 *)(param_1 + 0xb8) = uVar43;
  pcVar15 = (char *)param_2[1];
  if ((*pcVar15 == '\f') && (iVar14 = *(int *)(pcVar15 + 1) + -1, 0 < *(int *)(pcVar15 + 1))) {
    lVar33 = *param_2;
    iVar24 = 0;
    pbVar39 = &DAT_7104742dbb;
    do {
      iVar3 = iVar14 + iVar24;
      if (iVar3 < 0) {
        iVar3 = iVar3 + 1;
      }
      iVar3 = iVar3 >> 1;
      puVar1 = (uint *)(*(long *)(lVar33 + 0x28) + (long)*(int *)(pcVar15 + 5) + (long)iVar3 * 8);
      uVar31 = *(ulong *)(*(long *)(lVar33 + 0x20) + (ulong)*puVar1 * 8);
      if (uVar31 == 0xdabe51262) {
        uVar22 = puVar1[1];
        if ((int)uVar22 < 0) goto LAB_7103235818;
        pbVar39 = (byte *)(pcVar15 + (int)uVar22);
        goto LAB_7103235824;
      }
      iVar7 = iVar3 + -1;
      if (uVar31 < 0xdabe51263) {
        iVar24 = iVar3 + 1;
        iVar7 = iVar14;
      }
      iVar14 = iVar7;
    } while (iVar24 <= iVar14);
    lVar33 = 0;
  }
  else {
LAB_7103235818:
    lVar33 = 0;
    pbVar39 = &DAT_7104742dbb;
  }
LAB_7103235824:
  if (*pbVar39 - 0xb < 2) {
    iVar14 = *(int *)(pbVar39 + 1);
  }
  else {
    iVar14 = 0;
  }
  uVar34 = (ulong)iVar14;
  pvVar5 = *(void **)(param_1 + 0xc0);
  puVar21 = *(undefined8 **)(param_1 + 200);
  pppplVar29 = (long ****)((long)puVar21 - (long)pvVar5);
  uVar31 = (long)pppplVar29 >> 4;
  if (uVar31 < uVar34) {
    uVar40 = uVar34 - uVar31;
    if ((ulong)(*(long *)(param_1 + 0xd0) - (long)puVar21 >> 4) < uVar40) {
      if (iVar14 < 0) {
LAB_71032362d0:
                    /* WARNING: Subroutine does not return */
        std::__vector_base_common<true>::__throw_length_error();
      }
      lVar16 = *(long *)(param_1 + 0xd0) - (long)pvVar5;
      if ((ulong)(lVar16 >> 4) < 0x7ffffffffffffff) {
        uVar20 = lVar16 >> 3;
        uVar41 = uVar34;
        if (uVar34 <= uVar20) {
          uVar41 = uVar20;
        }
        if (uVar41 != 0) {
          if (uVar41 >> 0x3c != 0) {
LAB_71032358a8:
                    /* WARNING: Subroutine does not return */
            abort();
          }
          goto LAB_7103235910;
        }
LAB_7103235974:
        pvVar37 = (void *)0x0;
      }
      else {
        uVar41 = 0xfffffffffffffff;
LAB_7103235910:
        ppplVar18 = (long ***)(uVar41 * 0x10);
        if (ppplVar18 == (long ***)0x0) {
          ppplVar18 = (long ***)0x1;
        }
        pvVar37 = (void *)FUN_710392e290(0x10,ppplVar18,param_3,param_4,pppplVar28,param_6,param_7,
                                         param_8);
        if (pvVar37 == (void *)0x0) {
          if (DAT_7105332f00 != (long *)0x0) {
            local_64 = 0;
            pppplVar13 = &local_70;
            local_70 = ppplVar18;
            uVar20 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_64);
            if (((uVar20 & 1) != 0) &&
               (pvVar37 = (void *)FUN_710392e290(0x10,ppplVar18,pppplVar13,param_4,pppplVar28,
                                                 param_6,param_7,param_8), pvVar37 != (void *)0x0))
            goto LAB_7103235978;
          }
          goto LAB_7103235974;
        }
      }
LAB_7103235978:
      param_3 = (long ****)(uVar40 * 0x10);
      memset((void *)((long)pvVar37 + uVar31 * 0x10),0,(size_t)param_3);
      if (0 < (long)pppplVar29) {
        memcpy(pvVar37,pvVar5,(size_t)pppplVar29);
        param_3 = pppplVar29;
      }
      *(void **)(param_1 + 0xc0) = pvVar37;
      *(void **)(param_1 + 200) = (void *)((long)pvVar37 + uVar34 * 0x10);
      *(void **)(param_1 + 0xd0) = (void *)((long)pvVar37 + uVar41 * 0x10);
      if (pvVar5 != (void *)0x0) {
        FUN_710392eb40((ulong)pvVar5);
      }
    }
    else {
      uVar31 = uVar40;
      if ((uVar40 & 1) != 0) {
        *puVar21 = 0;
        puVar21[1] = 0;
        puVar21 = (undefined8 *)(*(long *)(param_1 + 200) + 0x10);
        uVar31 = uVar40 - 1;
        *(undefined8 **)(param_1 + 200) = puVar21;
      }
      if (uVar40 != 1) {
        do {
          *puVar21 = 0;
          puVar21[1] = 0;
          lVar16 = *(long *)(param_1 + 200);
          *(long *)(param_1 + 200) = lVar16 + 0x10;
          uVar31 = uVar31 - 2;
          *(undefined8 *)(lVar16 + 0x10) = 0;
          *(undefined8 *)(lVar16 + 0x18) = 0;
          puVar21 = (undefined8 *)(*(long *)(param_1 + 200) + 0x10);
          *(undefined8 **)(param_1 + 200) = puVar21;
        } while (uVar31 != 0);
      }
    }
  }
  else if (uVar31 != uVar34) {
    *(void **)(param_1 + 200) = (void *)((long)pvVar5 + uVar34 * 0x10);
  }
  uVar22 = (uint)*pbVar39;
  if ((*pbVar39 - 0xb < 2) && (0 < *(int *)(pbVar39 + 1))) {
    lVar16 = 0;
LAB_7103235a14:
    do {
      iVar14 = (int)lVar16;
      if (iVar14 < 0) {
LAB_7103235a4c:
        lVar19 = 0;
        pbVar32 = &DAT_7104742dbb;
      }
      else {
        lVar19 = 0;
        pbVar32 = &DAT_7104742dbb;
        if (uVar22 == 0xb) {
          if (*(int *)(pbVar39 + 1) <= iVar14) goto LAB_7103235a4c;
          pbVar32 = pbVar39 + *(int *)(pbVar39 + (long)iVar14 * 4 + 5);
          lVar19 = lVar33;
        }
      }
      if ((*pbVar32 == 0xc) && (iVar14 = *(int *)(pbVar32 + 1) + -1, 0 < *(int *)(pbVar32 + 1))) {
        iVar24 = 0;
        do {
          iVar3 = iVar14 + iVar24;
          if (iVar3 < 0) {
            iVar3 = iVar3 + 1;
          }
          iVar3 = iVar3 >> 1;
          puVar1 = (uint *)(*(long *)(lVar19 + 0x28) + (long)*(int *)(pbVar32 + 5) + (long)iVar3 * 8
                           );
          param_3 = *(long *****)(*(long *)(lVar19 + 0x20) + (ulong)*puVar1 * 8);
          if (param_3 == (long ****)0xa737452e1) {
            uVar22 = puVar1[1];
            if (-1 < (int)uVar22) {
              pbVar35 = pbVar32 + (int)uVar22;
              lVar10 = lVar19;
              goto LAB_7103235ad4;
            }
            break;
          }
          iVar7 = iVar3 + -1;
          if (param_3 < (long ****)0xa737452e2) {
            iVar24 = iVar3 + 1;
            iVar7 = iVar14;
          }
          iVar14 = iVar7;
        } while (iVar24 <= iVar14);
      }
      lVar10 = 0;
      pbVar35 = &DAT_7104742dbb;
LAB_7103235ad4:
      if (*pbVar35 == 9) {
        uVar27 = *(undefined8 *)(*(long *)(lVar10 + 0x20) + (long)*(int *)(pbVar35 + 1) * 8);
      }
      else {
        uVar27 = 0;
      }
      *(undefined8 *)(*(long *)(param_1 + 0xc0) + lVar16 * 0x10) = uVar27;
      if ((*pbVar32 == 0xc) && (iVar14 = *(int *)(pbVar32 + 1) + -1, 0 < *(int *)(pbVar32 + 1))) {
        iVar24 = 0;
        do {
          iVar3 = iVar14 + iVar24;
          if (iVar3 < 0) {
            iVar3 = iVar3 + 1;
          }
          iVar3 = iVar3 >> 1;
          puVar1 = (uint *)(*(long *)(lVar19 + 0x28) + (long)*(int *)(pbVar32 + 5) + (long)iVar3 * 8
                           );
          param_3 = *(long *****)(*(long *)(lVar19 + 0x20) + (ulong)*puVar1 * 8);
          if (param_3 == (long ****)0xead90426f) {
            uVar22 = puVar1[1];
            if (-1 < (int)uVar22) {
              pbVar32 = pbVar32 + (int)uVar22;
              goto LAB_7103235b80;
            }
            break;
          }
          iVar7 = iVar3 + -1;
          if (param_3 < (long ****)0xead904270) {
            iVar24 = iVar3 + 1;
            iVar7 = iVar14;
          }
          iVar14 = iVar7;
        } while (iVar24 <= iVar14);
      }
      lVar19 = 0;
      pbVar32 = &DAT_7104742dbb;
LAB_7103235b80:
      if (*pbVar32 == 9) {
        uVar27 = *(undefined8 *)(*(long *)(lVar19 + 0x20) + (long)*(int *)(pbVar32 + 1) * 8);
      }
      else {
        uVar27 = 0;
      }
      lVar19 = lVar16 * 0x10;
      lVar16 = lVar16 + 1;
      *(undefined8 *)(*(long *)(param_1 + 0xc0) + lVar19 + 8) = uVar27;
      uVar22 = (uint)*pbVar39;
      if (uVar22 - 0xb < 2) {
        if (*(int *)(pbVar39 + 1) <= lVar16) break;
        goto LAB_7103235a14;
      }
    } while (lVar16 < 0);
  }
  pcVar15 = (char *)param_2[1];
  if ((*pcVar15 == '\f') && (iVar14 = *(int *)(pcVar15 + 1) + -1, 0 < *(int *)(pcVar15 + 1))) {
    iVar24 = 0;
    pcVar23 = "";
    do {
      iVar3 = iVar14 + iVar24;
      if (iVar3 < 0) {
        iVar3 = iVar3 + 1;
      }
      iVar3 = iVar3 >> 1;
      puVar1 = (uint *)(*(long *)(*param_2 + 0x28) + (long)*(int *)(pcVar15 + 5) + (long)iVar3 * 8);
      uVar31 = *(ulong *)(*(long *)(*param_2 + 0x20) + (ulong)*puVar1 * 8);
      if (uVar31 == 0xf44902a8c) {
        uVar22 = puVar1[1];
        if ((int)uVar22 < 0) goto LAB_7103235c70;
        pcVar23 = pcVar15 + (int)uVar22;
        break;
      }
      iVar7 = iVar3 + -1;
      if (uVar31 < 0xf44902a8d) {
        iVar24 = iVar3 + 1;
        iVar7 = iVar14;
      }
      iVar14 = iVar7;
    } while (iVar24 <= iVar14);
  }
  else {
LAB_7103235c70:
    pcVar23 = "";
  }
  if (*pcVar23 == '\b') {
    uVar43 = *(undefined4 *)(pcVar23 + 1);
  }
  else {
    uVar43 = 0x42700000;
  }
  *(undefined4 *)(param_1 + 0xd8) = uVar43;
  pcVar15 = (char *)param_2[1];
  if ((*pcVar15 == '\f') && (iVar14 = *(int *)(pcVar15 + 1) + -1, 0 < *(int *)(pcVar15 + 1))) {
    lVar33 = *param_2;
    iVar24 = 0;
    pbVar39 = &DAT_7104742dbb;
    do {
      iVar3 = iVar14 + iVar24;
      if (iVar3 < 0) {
        iVar3 = iVar3 + 1;
      }
      iVar3 = iVar3 >> 1;
      puVar1 = (uint *)(*(long *)(lVar33 + 0x28) + (long)*(int *)(pcVar15 + 5) + (long)iVar3 * 8);
      uVar31 = *(ulong *)(*(long *)(lVar33 + 0x20) + (ulong)*puVar1 * 8);
      if (uVar31 == 0x11a39d8467) {
        uVar22 = puVar1[1];
        if ((int)uVar22 < 0) goto LAB_7103235d30;
        pbVar39 = (byte *)(pcVar15 + (int)uVar22);
        goto LAB_7103235d3c;
      }
      iVar7 = iVar3 + -1;
      if (uVar31 < 0x11a39d8468) {
        iVar24 = iVar3 + 1;
        iVar7 = iVar14;
      }
      iVar14 = iVar7;
    } while (iVar24 <= iVar14);
    lVar33 = 0;
  }
  else {
LAB_7103235d30:
    lVar33 = 0;
    pbVar39 = &DAT_7104742dbb;
  }
LAB_7103235d3c:
  if (*pbVar39 - 0xb < 2) {
    uVar31 = (ulong)*(int *)(pbVar39 + 1);
  }
  else {
    uVar31 = 0;
  }
  pvVar5 = *(void **)(param_1 + 0xe0);
  puVar21 = *(undefined8 **)(param_1 + 0xe8);
  __n = (long)puVar21 - (long)pvVar5;
  lVar16 = (long)__n >> 3;
  plVar2 = (long *)(param_1 + 0xe0);
  bVar9 = uVar31 < (ulong)(lVar16 * -0x5555555555555555);
  uVar34 = uVar31 + lVar16 * 0x5555555555555555;
  if (bVar9 || uVar34 == 0) {
    if (bVar9) {
      *(void **)(param_1 + 0xe8) = (void *)((long)pvVar5 + uVar31 * 0x18);
    }
    goto LAB_7103235f20;
  }
  if (uVar34 <= (ulong)((*(long *)(param_1 + 0xf0) - (long)puVar21 >> 3) * -0x5555555555555555)) {
    uVar31 = uVar34;
    if ((uVar34 & 1) != 0) {
      puVar21[1] = 0;
      puVar21[2] = 0;
      uVar31 = uVar34 - 1;
      *puVar21 = 0;
      puVar21 = (undefined8 *)(*(long *)(param_1 + 0xe8) + 0x18);
      *(undefined8 **)(param_1 + 0xe8) = puVar21;
    }
    if (uVar34 != 1) {
      do {
        puVar21[1] = 0;
        puVar21[2] = 0;
        uVar31 = uVar31 - 2;
        *puVar21 = 0;
        lVar16 = *(long *)(param_1 + 0xe8);
        *(long *)(param_1 + 0xe8) = lVar16 + 0x18;
        *(undefined8 *)(lVar16 + 0x20) = 0;
        *(undefined8 *)(lVar16 + 0x28) = 0;
        *(undefined8 *)(lVar16 + 0x18) = 0;
        puVar21 = (undefined8 *)(*(long *)(param_1 + 0xe8) + 0x18);
        *(undefined8 **)(param_1 + 0xe8) = puVar21;
      } while (uVar31 != 0);
    }
    goto LAB_7103235f20;
  }
  uVar40 = 0xaaaaaaaaaaaaaaa;
  if (0xaaaaaaaaaaaaaaa < uVar31) {
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_length_error();
  }
  lVar19 = *(long *)(param_1 + 0xf0) - (long)pvVar5 >> 3;
  if ((ulong)(lVar19 * -0x5555555555555555) < 0x555555555555555) {
    uVar41 = lVar19 * 0x5555555555555556;
    uVar40 = uVar31;
    if (uVar31 <= uVar41) {
      uVar40 = uVar41;
    }
    if (uVar40 != 0) goto LAB_7103235dcc;
    uVar40 = 0;
    lVar19 = 0;
  }
  else {
LAB_7103235dcc:
    ppplVar18 = (long ***)(uVar40 * 0x18);
    if (ppplVar18 == (long ***)0x0) {
      ppplVar18 = (long ***)0x1;
    }
    lVar19 = FUN_710392e290(0x10,ppplVar18,param_3,param_4,pppplVar28,param_6,param_7,param_8);
    if (lVar19 == 0) {
      if (DAT_7105332f00 != (long *)0x0) {
        local_64 = 0;
        pppplVar29 = &local_70;
        local_70 = ppplVar18;
        uVar41 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_64);
        if (((uVar41 & 1) != 0) &&
           (lVar19 = FUN_710392e290(0x10,ppplVar18,pppplVar29,param_4,pppplVar28,param_6,param_7,
                                    param_8), lVar19 != 0)) goto LAB_7103235e3c;
      }
      lVar19 = 0;
    }
  }
LAB_7103235e3c:
  pvVar37 = (void *)(lVar19 + lVar16 * 8);
  memset(pvVar37,0,uVar34 * 0x18);
  lVar16 = SUB168(SEXT816((long)__n) * SEXT816(-0x2aaaaaaaaaaaaaab),8);
  pvVar37 = (void *)((long)pvVar37 + ((lVar16 >> 2) - (lVar16 >> 0x3f)) * 0x18);
  if (0 < (long)__n) {
    memcpy(pvVar37,pvVar5,__n);
  }
  *(void **)(param_1 + 0xe0) = pvVar37;
  *(ulong *)(param_1 + 0xe8) = lVar19 + uVar31 * 0x18;
  *(ulong *)(param_1 + 0xf0) = lVar19 + uVar40 * 0x18;
  if (pvVar5 != (void *)0x0) {
    FUN_710392eb40((ulong)pvVar5);
  }
LAB_7103235f20:
  uVar22 = (uint)*pbVar39;
  if ((1 < *pbVar39 - 0xb) || (*(int *)(pbVar39 + 1) < 1)) {
    return;
  }
  lVar16 = 0;
  do {
    iVar14 = (int)lVar16;
    if (iVar14 < 0) {
LAB_7103235fc4:
      lVar19 = 0;
      pbVar32 = &DAT_7104742dbb;
    }
    else {
      pbVar32 = &DAT_7104742dbb;
      lVar19 = 0;
      if (uVar22 == 0xb) {
        if (*(int *)(pbVar39 + 1) <= iVar14) goto LAB_7103235fc4;
        pbVar32 = pbVar39 + *(int *)(pbVar39 + (long)iVar14 * 4 + 5);
        lVar19 = lVar33;
      }
    }
    if ((*pbVar32 == 0xc) && (iVar14 = *(int *)(pbVar32 + 1) + -1, 0 < *(int *)(pbVar32 + 1))) {
      iVar24 = 0;
      do {
        iVar3 = iVar14 + iVar24;
        if (iVar3 < 0) {
          iVar3 = iVar3 + 1;
        }
        iVar3 = iVar3 >> 1;
        puVar1 = (uint *)(*(long *)(lVar19 + 0x28) + (long)*(int *)(pbVar32 + 5) + (long)iVar3 * 8);
        uVar31 = *(ulong *)(*(long *)(lVar19 + 0x20) + (ulong)*puVar1 * 8);
        if (uVar31 == 0xa737452e1) {
          uVar22 = puVar1[1];
          if (-1 < (int)uVar22) {
            pbVar35 = pbVar32 + (int)uVar22;
            lVar10 = lVar19;
            goto LAB_710323604c;
          }
          break;
        }
        iVar7 = iVar3 + -1;
        if (uVar31 < 0xa737452e2) {
          iVar24 = iVar3 + 1;
          iVar7 = iVar14;
        }
        iVar14 = iVar7;
      } while (iVar24 <= iVar14);
    }
    pbVar35 = &DAT_7104742dbb;
    lVar10 = 0;
LAB_710323604c:
    if (*pbVar35 == 9) {
      uVar27 = *(undefined8 *)(*(long *)(lVar10 + 0x20) + (long)*(int *)(pbVar35 + 1) * 8);
    }
    else {
      uVar27 = 0;
    }
    *(undefined8 *)(*plVar2 + lVar16 * 0x18) = uVar27;
    pbVar35 = &DAT_7104742dbb;
    if ((*pbVar32 == 0xc) && (iVar14 = *(int *)(pbVar32 + 1) + -1, 0 < *(int *)(pbVar32 + 1))) {
      iVar24 = 0;
      do {
        iVar3 = iVar14 + iVar24;
        if (iVar3 < 0) {
          iVar3 = iVar3 + 1;
        }
        iVar3 = iVar3 >> 1;
        puVar1 = (uint *)(*(long *)(lVar19 + 0x28) + (long)*(int *)(pbVar32 + 5) + (long)iVar3 * 8);
        uVar31 = *(ulong *)(*(long *)(lVar19 + 0x20) + (ulong)*puVar1 * 8);
        if (uVar31 == 0xa802cefc8) {
          uVar22 = puVar1[1];
          if (-1 < (int)uVar22) {
            pbVar35 = pbVar32 + (int)uVar22;
          }
          break;
        }
        iVar7 = iVar3 + -1;
        if (uVar31 < 0xa802cefc9) {
          iVar24 = iVar3 + 1;
          iVar7 = iVar14;
        }
        iVar14 = iVar7;
      } while (iVar24 <= iVar14);
    }
    uVar43 = 0x40400000;
    if (*pbVar35 == 8) {
      uVar43 = *(undefined4 *)(pbVar35 + 1);
    }
    *(undefined4 *)(*plVar2 + lVar16 * 0x18 + 8) = uVar43;
    pbVar35 = &DAT_7104742dbb;
    if ((*pbVar32 == 0xc) && (iVar14 = *(int *)(pbVar32 + 1) + -1, 0 < *(int *)(pbVar32 + 1))) {
      iVar24 = 0;
      do {
        iVar3 = iVar14 + iVar24;
        if (iVar3 < 0) {
          iVar3 = iVar3 + 1;
        }
        iVar3 = iVar3 >> 1;
        puVar1 = (uint *)(*(long *)(lVar19 + 0x28) + (long)*(int *)(pbVar32 + 5) + (long)iVar3 * 8);
        uVar31 = *(ulong *)(*(long *)(lVar19 + 0x20) + (ulong)*puVar1 * 8);
        if (uVar31 == 0x7f4804849) {
          uVar22 = puVar1[1];
          if (-1 < (int)uVar22) {
            pbVar35 = pbVar32 + (int)uVar22;
          }
          break;
        }
        iVar7 = iVar3 + -1;
        if (uVar31 < 0x7f480484a) {
          iVar24 = iVar3 + 1;
          iVar7 = iVar14;
        }
        iVar14 = iVar7;
      } while (iVar24 <= iVar14);
    }
    uVar43 = 0x3e4ccccd;
    if (*pbVar35 == 8) {
      uVar43 = *(undefined4 *)(pbVar35 + 1);
    }
    *(undefined4 *)(*plVar2 + lVar16 * 0x18 + 0xc) = uVar43;
    pbVar35 = &DAT_7104742dbb;
    if ((*pbVar32 == 0xc) && (iVar14 = *(int *)(pbVar32 + 1) + -1, 0 < *(int *)(pbVar32 + 1))) {
      iVar24 = 0;
      do {
        iVar3 = iVar14 + iVar24;
        if (iVar3 < 0) {
          iVar3 = iVar3 + 1;
        }
        iVar3 = iVar3 >> 1;
        puVar1 = (uint *)(*(long *)(lVar19 + 0x28) + (long)*(int *)(pbVar32 + 5) + (long)iVar3 * 8);
        uVar31 = *(ulong *)(*(long *)(lVar19 + 0x20) + (ulong)*puVar1 * 8);
        if (uVar31 == 0x7c56852d4) {
          uVar22 = puVar1[1];
          if (-1 < (int)uVar22) {
            pbVar35 = pbVar32 + (int)uVar22;
          }
          break;
        }
        iVar7 = iVar3 + -1;
        if (uVar31 < 0x7c56852d5) {
          iVar24 = iVar3 + 1;
          iVar7 = iVar14;
        }
        iVar14 = iVar7;
      } while (iVar24 <= iVar14);
    }
    uVar43 = 0x3e4ccccd;
    if (*pbVar35 == 8) {
      uVar43 = *(undefined4 *)(pbVar35 + 1);
    }
    lVar19 = lVar16 * 0x18;
    lVar16 = lVar16 + 1;
    *(undefined4 *)(*plVar2 + lVar19 + 0x10) = uVar43;
    uVar22 = (uint)*pbVar39;
    if (uVar22 - 0xb < 2) {
      if (*(int *)(pbVar39 + 1) <= lVar16) {
        return;
      }
    }
    else if (-1 < lVar16) {
      return;
    }
  } while( true );
}

