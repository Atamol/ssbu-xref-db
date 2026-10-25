// addr:      710289aec0
// offset:    0x289aec0
// name:      FUN_710289aec0
// mangled:   
// signature: undefined __cdecl FUN_710289aec0(long param_1, long * param_2, long * * * * param_3, uint * param_4, uint * param_5, undefined8 param_6, uint * param_7, long param_8)


void FUN_710289aec0(long param_1,long *param_2,long ****param_3,uint *param_4,uint *param_5,
                   undefined8 param_6,uint *param_7,long param_8)

{
  uint *puVar1;
  int iVar2;
  ulong *puVar3;
  int iVar4;
  undefined8 *puVar5;
  void *pvVar6;
  byte *pbVar7;
  long ****pppplVar8;
  byte ****ppppbVar9;
  uint *puVar10;
  uint *puVar11;
  byte *pbVar12;
  uint *puVar13;
  uint uVar14;
  int iVar15;
  char *pcVar16;
  long lVar17;
  ulong uVar18;
  long ***ppplVar19;
  undefined8 *puVar20;
  ulong uVar21;
  char *pcVar22;
  long lVar23;
  int iVar24;
  long ****pppplVar25;
  long **pplVar26;
  long lVar27;
  byte *pbVar28;
  undefined8 uVar29;
  byte *pbVar30;
  byte ****ppppbVar31;
  byte **ppbVar32;
  long lVar33;
  long *plVar34;
  byte *pbVar35;
  long *plVar36;
  ulong uVar37;
  ulong *puVar38;
  ulong *puVar39;
  long *plVar40;
  ulong uVar41;
  long lVar42;
  void *pvVar43;
  size_t sVar44;
  ulong uVar45;
  undefined4 uVar46;
  byte ****local_108;
  long ****local_e8;
  long local_b8;
  long local_b0;
  long ***local_98;
  undefined4 local_8c [3];
  
  pcVar16 = (char *)param_2[1];
  if ((*pcVar16 == '\f') && (iVar15 = *(int *)(pcVar16 + 1) + -1, 0 < *(int *)(pcVar16 + 1))) {
    local_b0 = *param_2;
    pbVar12 = &DAT_7104742dbb;
    iVar24 = 0;
    do {
      iVar2 = iVar15 + iVar24;
      if (iVar2 < 0) {
        iVar2 = iVar2 + 1;
      }
      iVar2 = iVar2 >> 1;
      puVar10 = (uint *)(*(long *)(local_b0 + 0x28) + (long)*(int *)(pcVar16 + 5) + (long)iVar2 * 8)
      ;
      uVar37 = *(ulong *)(*(long *)(local_b0 + 0x20) + (ulong)*puVar10 * 8);
      if (uVar37 == 0xc1f5d649d) {
        uVar14 = puVar10[1];
        if ((int)uVar14 < 0) goto LAB_710289af8c;
        pbVar12 = (byte *)(pcVar16 + (int)uVar14);
        goto LAB_710289af98;
      }
      iVar4 = iVar2 + -1;
      if (uVar37 < 0xc1f5d649e) {
        iVar24 = iVar2 + 1;
        iVar4 = iVar15;
      }
      iVar15 = iVar4;
    } while (iVar24 <= iVar15);
    local_b0 = 0;
  }
  else {
LAB_710289af8c:
    local_b0 = 0;
    pbVar12 = &DAT_7104742dbb;
  }
LAB_710289af98:
  plVar40 = (long *)(param_1 + 8);
  if (*pbVar12 - 0xb < 2) {
    iVar15 = *(int *)(pbVar12 + 1);
  }
  else {
    iVar15 = 0;
  }
  FUN_710289f4e0(plVar40,(long)iVar15,param_3,(byte ****)param_4,(long ****)param_5,param_6,param_7,
                 param_8);
  uVar14 = (uint)*pbVar12;
  if ((*pbVar12 - 0xb < 2) && (0 < *(int *)(pbVar12 + 1))) {
    lVar42 = 0;
LAB_710289b020:
    do {
      iVar15 = (int)lVar42;
      if (iVar15 < 0) {
LAB_710289b058:
        lVar17 = 0;
        pbVar7 = &DAT_7104742dbb;
      }
      else {
        pbVar7 = &DAT_7104742dbb;
        lVar17 = 0;
        if (uVar14 == 0xb) {
          if (*(int *)(pbVar12 + 1) <= iVar15) goto LAB_710289b058;
          pbVar7 = pbVar12 + *(int *)(pbVar12 + (long)iVar15 * 4 + 5);
          lVar17 = local_b0;
        }
      }
      if ((*pbVar7 == 0xc) && (iVar15 = *(int *)(pbVar7 + 1) + -1, 0 < *(int *)(pbVar7 + 1))) {
        iVar24 = 0;
        do {
          iVar2 = iVar15 + iVar24;
          if (iVar2 < 0) {
            iVar2 = iVar2 + 1;
          }
          iVar2 = iVar2 >> 1;
          uVar37 = *(ulong *)(*(long *)(lVar17 + 0x20) +
                             (ulong)*(uint *)(*(long *)(lVar17 + 0x28) + (long)*(int *)(pbVar7 + 5)
                                             + (long)iVar2 * 8) * 8);
          if (uVar37 == 0xc5e7bd41c) break;
          iVar4 = iVar2 + -1;
          if (uVar37 < 0xc5e7bd41d) {
            iVar24 = iVar2 + 1;
            iVar4 = iVar15;
          }
          iVar15 = iVar4;
        } while (iVar24 <= iVar15);
      }
      std::string::assign((char *)(*plVar40 + lVar42 * 0x48));
      if ((*pbVar7 == 0xc) && (iVar15 = *(int *)(pbVar7 + 1) + -1, 0 < *(int *)(pbVar7 + 1))) {
        iVar24 = 0;
        do {
          iVar2 = iVar15 + iVar24;
          if (iVar2 < 0) {
            iVar2 = iVar2 + 1;
          }
          iVar2 = iVar2 >> 1;
          uVar37 = *(ulong *)(*(long *)(lVar17 + 0x20) +
                             (ulong)*(uint *)(*(long *)(lVar17 + 0x28) + (long)*(int *)(pbVar7 + 5)
                                             + (long)iVar2 * 8) * 8);
          if (uVar37 == 0x1796a40243) break;
          iVar4 = iVar2 + -1;
          if (uVar37 < 0x1796a40244) {
            iVar24 = iVar2 + 1;
            iVar4 = iVar15;
          }
          iVar15 = iVar4;
        } while (iVar24 <= iVar15);
      }
      std::string::assign((char *)(*plVar40 + lVar42 * 0x48 + 0x18));
      if ((*pbVar7 == 0xc) && (iVar15 = *(int *)(pbVar7 + 1) + -1, 0 < *(int *)(pbVar7 + 1))) {
        iVar24 = 0;
        do {
          iVar2 = iVar15 + iVar24;
          if (iVar2 < 0) {
            iVar2 = iVar2 + 1;
          }
          iVar2 = iVar2 >> 1;
          uVar37 = *(ulong *)(*(long *)(lVar17 + 0x20) +
                             (ulong)*(uint *)(*(long *)(lVar17 + 0x28) + (long)*(int *)(pbVar7 + 5)
                                             + (long)iVar2 * 8) * 8);
          if (uVar37 == 0xdeb9621b2) break;
          iVar4 = iVar2 + -1;
          if (uVar37 < 0xdeb9621b3) {
            iVar24 = iVar2 + 1;
            iVar4 = iVar15;
          }
          iVar15 = iVar4;
        } while (iVar24 <= iVar15);
      }
      std::string::assign((char *)(*plVar40 + lVar42 * 0x48 + 0x30));
      uVar14 = (uint)*pbVar12;
      lVar42 = lVar42 + 1;
      if (uVar14 - 0xb < 2) {
        if (*(int *)(pbVar12 + 1) <= lVar42) break;
        goto LAB_710289b020;
      }
    } while (lVar42 < 0);
  }
  pcVar16 = (char *)param_2[1];
  if ((*pcVar16 == '\f') && (iVar15 = *(int *)(pcVar16 + 1) + -1, 0 < *(int *)(pcVar16 + 1))) {
    local_b0 = *param_2;
    pbVar12 = &DAT_7104742dbb;
    iVar24 = 0;
    do {
      iVar2 = iVar15 + iVar24;
      if (iVar2 < 0) {
        iVar2 = iVar2 + 1;
      }
      iVar2 = iVar2 >> 1;
      puVar10 = (uint *)(*(long *)(local_b0 + 0x28) + (long)*(int *)(pcVar16 + 5) + (long)iVar2 * 8)
      ;
      uVar37 = *(ulong *)(*(long *)(local_b0 + 0x20) + (ulong)*puVar10 * 8);
      if (uVar37 == 0x13948570c4) {
        uVar14 = puVar10[1];
        if ((int)uVar14 < 0) goto LAB_710289b33c;
        pbVar12 = (byte *)(pcVar16 + (int)uVar14);
        goto LAB_710289b348;
      }
      iVar4 = iVar2 + -1;
      if (uVar37 < 0x13948570c5) {
        iVar24 = iVar2 + 1;
        iVar4 = iVar15;
      }
      iVar15 = iVar4;
    } while (iVar24 <= iVar15);
    local_b0 = 0;
  }
  else {
LAB_710289b33c:
    local_b0 = 0;
    pbVar12 = &DAT_7104742dbb;
  }
LAB_710289b348:
  plVar40 = (long *)(param_1 + 0x20);
  if (*pbVar12 - 0xb < 2) {
    iVar15 = *(int *)(pbVar12 + 1);
  }
  else {
    iVar15 = 0;
  }
  FUN_710289f4e0(plVar40,(long)iVar15,param_3,(byte ****)param_4,(long ****)param_5,param_6,param_7,
                 param_8);
  uVar14 = (uint)*pbVar12;
  if ((*pbVar12 - 0xb < 2) && (0 < *(int *)(pbVar12 + 1))) {
    lVar42 = 0;
    do {
      iVar15 = (int)lVar42;
      if (iVar15 < 0) {
LAB_710289b404:
        lVar17 = 0;
        pbVar7 = &DAT_7104742dbb;
      }
      else {
        pbVar7 = &DAT_7104742dbb;
        lVar17 = 0;
        if (uVar14 == 0xb) {
          if (*(int *)(pbVar12 + 1) <= iVar15) goto LAB_710289b404;
          pbVar7 = pbVar12 + *(int *)(pbVar12 + (long)iVar15 * 4 + 5);
          lVar17 = local_b0;
        }
      }
      if ((*pbVar7 == 0xc) && (iVar15 = *(int *)(pbVar7 + 1) + -1, 0 < *(int *)(pbVar7 + 1))) {
        iVar24 = 0;
        do {
          iVar2 = iVar15 + iVar24;
          if (iVar2 < 0) {
            iVar2 = iVar2 + 1;
          }
          iVar2 = iVar2 >> 1;
          uVar37 = *(ulong *)(*(long *)(lVar17 + 0x20) +
                             (ulong)*(uint *)(*(long *)(lVar17 + 0x28) + (long)*(int *)(pbVar7 + 5)
                                             + (long)iVar2 * 8) * 8);
          if (uVar37 == 0xc5e7bd41c) break;
          iVar4 = iVar2 + -1;
          if (uVar37 < 0xc5e7bd41d) {
            iVar24 = iVar2 + 1;
            iVar4 = iVar15;
          }
          iVar15 = iVar4;
        } while (iVar24 <= iVar15);
      }
      std::string::assign((char *)(*plVar40 + lVar42 * 0x48));
      if ((*pbVar7 == 0xc) && (iVar15 = *(int *)(pbVar7 + 1) + -1, 0 < *(int *)(pbVar7 + 1))) {
        iVar24 = 0;
        do {
          iVar2 = iVar15 + iVar24;
          if (iVar2 < 0) {
            iVar2 = iVar2 + 1;
          }
          iVar2 = iVar2 >> 1;
          uVar37 = *(ulong *)(*(long *)(lVar17 + 0x20) +
                             (ulong)*(uint *)(*(long *)(lVar17 + 0x28) + (long)*(int *)(pbVar7 + 5)
                                             + (long)iVar2 * 8) * 8);
          if (uVar37 == 0x1796a40243) break;
          iVar4 = iVar2 + -1;
          if (uVar37 < 0x1796a40244) {
            iVar24 = iVar2 + 1;
            iVar4 = iVar15;
          }
          iVar15 = iVar4;
        } while (iVar24 <= iVar15);
      }
      std::string::assign((char *)(*plVar40 + lVar42 * 0x48 + 0x18));
      if ((*pbVar7 == 0xc) && (iVar15 = *(int *)(pbVar7 + 1) + -1, 0 < *(int *)(pbVar7 + 1))) {
        iVar24 = 0;
        do {
          iVar2 = iVar15 + iVar24;
          if (iVar2 < 0) {
            iVar2 = iVar2 + 1;
          }
          iVar2 = iVar2 >> 1;
          uVar37 = *(ulong *)(*(long *)(lVar17 + 0x20) +
                             (ulong)*(uint *)(*(long *)(lVar17 + 0x28) + (long)*(int *)(pbVar7 + 5)
                                             + (long)iVar2 * 8) * 8);
          if (uVar37 == 0xdeb9621b2) break;
          iVar4 = iVar2 + -1;
          if (uVar37 < 0xdeb9621b3) {
            iVar24 = iVar2 + 1;
            iVar4 = iVar15;
          }
          iVar15 = iVar4;
        } while (iVar24 <= iVar15);
      }
      std::string::assign((char *)(*plVar40 + lVar42 * 0x48 + 0x30));
      uVar14 = (uint)*pbVar12;
      lVar42 = lVar42 + 1;
      if (uVar14 - 0xb < 2) {
        iVar15 = *(int *)(pbVar12 + 1);
      }
      else {
        iVar15 = 0;
      }
    } while (lVar42 < iVar15);
  }
  pcVar16 = (char *)param_2[1];
  if ((*pcVar16 == '\f') && (iVar15 = *(int *)(pcVar16 + 1) + -1, 0 < *(int *)(pcVar16 + 1))) {
    local_e8 = (long ****)*param_2;
    pbVar12 = &DAT_7104742dbb;
    iVar24 = 0;
    do {
      iVar2 = iVar15 + iVar24;
      if (iVar2 < 0) {
        iVar2 = iVar2 + 1;
      }
      iVar2 = iVar2 >> 1;
      puVar10 = (uint *)((long)local_e8[5] + (long)iVar2 * 8 + (long)*(int *)(pcVar16 + 5));
      if (local_e8[4][*puVar10] == (long **)0x10649fdafd) {
        uVar14 = puVar10[1];
        if ((int)uVar14 < 0) goto LAB_710289b6fc;
        pbVar12 = (byte *)(pcVar16 + (int)uVar14);
        goto LAB_710289b708;
      }
      iVar4 = iVar2 + -1;
      if (local_e8[4][*puVar10] < (long **)0x10649fdafe) {
        iVar24 = iVar2 + 1;
        iVar4 = iVar15;
      }
      iVar15 = iVar4;
    } while (iVar24 <= iVar15);
    local_e8 = (long ****)0x0;
  }
  else {
LAB_710289b6fc:
    local_e8 = (long ****)0x0;
    pbVar12 = &DAT_7104742dbb;
  }
LAB_710289b708:
  if (*pbVar12 - 0xb < 2) {
    iVar15 = *(int *)(pbVar12 + 1);
  }
  else {
    iVar15 = 0;
  }
  puVar39 = *(ulong **)(param_1 + 0x38);
  puVar38 = *(ulong **)(param_1 + 0x40);
  uVar37 = (ulong)iVar15;
  lVar42 = (long)puVar38 - (long)puVar39 >> 3;
  if ((ulong)(lVar42 * -0x5555555555555555) < uVar37) {
    uVar41 = uVar37 + lVar42 * 0x5555555555555555;
    if ((ulong)((*(long *)(param_1 + 0x48) - (long)puVar38 >> 3) * -0x5555555555555555) < uVar41) {
      if (iVar15 < 0) goto LAB_710289f4cc;
      lVar17 = *(long *)(param_1 + 0x48) - (long)puVar39 >> 3;
      uVar45 = 0xaaaaaaaaaaaaaaa;
      if ((ulong)(lVar17 * -0x5555555555555555) < 0x555555555555555) {
        uVar18 = lVar17 * 0x5555555555555556;
        uVar45 = uVar37;
        if (uVar37 <= uVar18) {
          uVar45 = uVar18;
        }
        if (uVar45 != 0) goto LAB_710289b7a8;
LAB_710289b80c:
        lVar17 = 0;
      }
      else {
LAB_710289b7a8:
        ppplVar19 = (long ***)(uVar45 * 0x18);
        if (ppplVar19 == (long ***)0x0) {
          ppplVar19 = (long ***)0x1;
        }
        lVar17 = FUN_710392e290(0x10,ppplVar19,param_3,(byte ****)param_4,(long ****)param_5,param_6
                                ,param_7,param_8);
        if (lVar17 == 0) {
          if (DAT_7105332f00 != (long *)0x0) {
            local_8c[0] = 0;
            pppplVar25 = &local_98;
            local_98 = ppplVar19;
            uVar18 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,local_8c);
            if (((uVar18 & 1) != 0) &&
               (lVar17 = FUN_710392e290(0x10,ppplVar19,pppplVar25,(byte ****)param_4,
                                        (long ****)param_5,param_6,param_7,param_8), lVar17 != 0))
            goto LAB_710289b810;
          }
          goto LAB_710289b80c;
        }
      }
LAB_710289b810:
      pvVar43 = (void *)(lVar17 + lVar42 * 8);
      param_3 = (long ****)(uVar41 * 0x18);
      lVar42 = lVar17 + uVar45 * 0x18;
      memset(pvVar43,0,(size_t)param_3);
      lVar17 = lVar17 + uVar37 * 0x18;
      if (puVar38 == puVar39) {
        *(void **)(param_1 + 0x38) = pvVar43;
        *(long *)(param_1 + 0x40) = lVar17;
        *(long *)(param_1 + 0x48) = lVar42;
      }
      else {
        lVar27 = 0;
        do {
          *(undefined8 *)((long)pvVar43 + lVar27 + -0x18) = 0;
          *(undefined8 *)((long)pvVar43 + lVar27 + -0x10) = 0;
          *(undefined8 *)((long)pvVar43 + lVar27 + -8) = 0;
          *(undefined8 *)((long)pvVar43 + lVar27 + -0x18) =
               *(undefined8 *)((long)puVar38 + lVar27 + -0x18);
          *(undefined8 *)((long)pvVar43 + lVar27 + -0x10) =
               *(undefined8 *)((long)puVar38 + lVar27 + -0x10);
          lVar23 = lVar27 + -0x18;
          *(undefined8 *)((long)pvVar43 + lVar27 + -8) =
               *(undefined8 *)((long)puVar38 + lVar27 + -8);
          *(undefined8 *)((long)puVar38 + lVar27 + -0x10) = 0;
          *(undefined8 *)((long)puVar38 + lVar27 + -8) = 0;
          *(undefined8 *)((long)puVar38 + lVar27 + -0x18) = 0;
          lVar27 = lVar23;
        } while ((long)puVar39 - (long)puVar38 != lVar23);
        puVar39 = *(ulong **)(param_1 + 0x38);
        puVar38 = *(ulong **)(param_1 + 0x40);
        *(long *)(param_1 + 0x38) = (long)pvVar43 + lVar23;
        *(long *)(param_1 + 0x40) = lVar17;
        *(long *)(param_1 + 0x48) = lVar42;
        while (puVar3 = puVar38, puVar3 != puVar39) {
          puVar38 = puVar3 + -3;
          uVar37 = *puVar38;
          if (uVar37 != 0) {
            puVar3[-2] = uVar37;
            FUN_710392eb40(uVar37);
          }
        }
      }
      if (puVar39 != (ulong *)0x0) {
        FUN_710392eb40((ulong)puVar39);
      }
    }
    else {
      uVar37 = uVar41;
      if ((uVar41 & 1) != 0) {
        puVar38[1] = 0;
        puVar38[2] = 0;
        *puVar38 = 0;
        puVar38 = (ulong *)(*(long *)(param_1 + 0x40) + 0x18);
        uVar37 = uVar41 - 1;
        *(ulong **)(param_1 + 0x40) = puVar38;
      }
      if (uVar41 != 1) {
        do {
          puVar38[1] = 0;
          puVar38[2] = 0;
          uVar37 = uVar37 - 2;
          *puVar38 = 0;
          lVar42 = *(long *)(param_1 + 0x40);
          *(long *)(param_1 + 0x40) = lVar42 + 0x18;
          *(undefined8 *)(lVar42 + 0x20) = 0;
          *(undefined8 *)(lVar42 + 0x28) = 0;
          *(undefined8 *)(lVar42 + 0x18) = 0;
          puVar38 = (ulong *)(*(long *)(param_1 + 0x40) + 0x18);
          *(ulong **)(param_1 + 0x40) = puVar38;
        } while (uVar37 != 0);
      }
    }
  }
  else if (lVar42 * -0x5555555555555555 - uVar37 != 0) {
    while (puVar3 = puVar38, puVar39 + uVar37 * 3 != puVar3) {
      puVar38 = puVar3 + -3;
      uVar41 = *puVar38;
      if (uVar41 != 0) {
        puVar3[-2] = uVar41;
        FUN_710392eb40(uVar41);
      }
    }
    *(ulong **)(param_1 + 0x40) = puVar39 + uVar37 * 3;
  }
  uVar14 = (uint)*pbVar12;
  if ((*pbVar12 - 0xb < 2) && (0 < *(int *)(pbVar12 + 1))) {
    lVar42 = 0;
LAB_710289b9e8:
    do {
      ppppbVar9 = (byte ****)&SUB_00000018;
      iVar15 = (int)lVar42;
      if (iVar15 < 0) {
LAB_710289ba24:
        pppplVar25 = (long ****)0x0;
        pbVar7 = &DAT_7104742dbb;
      }
      else {
        pppplVar25 = (long ****)0x0;
        pbVar7 = &DAT_7104742dbb;
        if (uVar14 == 0xb) {
          if (*(int *)(pbVar12 + 1) <= iVar15) goto LAB_710289ba24;
          pbVar7 = pbVar12 + *(int *)(pbVar12 + (long)iVar15 * 4 + 5);
          pppplVar25 = local_e8;
        }
      }
      pbVar28 = &DAT_7104742dbb;
      if ((*pbVar7 == 0xc) && (iVar15 = *(int *)(pbVar7 + 1) + -1, 0 < *(int *)(pbVar7 + 1))) {
        iVar24 = 0;
        do {
          iVar2 = iVar15 + iVar24;
          if (iVar2 < 0) {
            iVar2 = iVar2 + 1;
          }
          iVar2 = iVar2 >> 1;
          puVar10 = (uint *)((long)pppplVar25[5] + (long)iVar2 * 8 + (long)*(int *)(pbVar7 + 5));
          if (pppplVar25[4][*puVar10] == (long **)0xc5ada567b) {
            uVar37 = (ulong)(int)puVar10[1];
            param_5 = (uint *)(long ****)0x0;
            if ((uVar37 & 0x80000000) == 0) {
              param_5 = (uint *)pppplVar25;
              pbVar28 = pbVar7 + uVar37;
            }
            goto LAB_710289ba98;
          }
          iVar4 = iVar2 + -1;
          if (pppplVar25[4][*puVar10] < (long **)0xc5ada567c) {
            iVar24 = iVar2 + 1;
            iVar4 = iVar15;
          }
          iVar15 = iVar4;
        } while (iVar24 <= iVar15);
      }
      param_5 = (uint *)(long ****)0x0;
LAB_710289ba98:
      lVar17 = *(long *)(param_1 + 0x38);
      puVar5 = (undefined8 *)(lVar17 + lVar42 * 0x18);
      if (*pbVar28 - 0xb < 2) {
        iVar15 = *(int *)(pbVar28 + 1);
      }
      else {
        iVar15 = 0;
      }
      uVar37 = (ulong)iVar15;
      plVar40 = (long *)(lVar17 + lVar42 * 0x18 + 8);
      puVar20 = (undefined8 *)*plVar40;
      pvVar43 = (void *)*puVar5;
      sVar44 = (long)puVar20 - (long)pvVar43;
      uVar41 = (long)sVar44 >> 3;
      if (uVar41 < uVar37) {
        plVar34 = (long *)(lVar17 + lVar42 * 0x18 + 0x10);
        lVar17 = *plVar34;
        uVar45 = uVar37 - uVar41;
        if ((ulong)(lVar17 - (long)puVar20 >> 3) < uVar45) {
          if (iVar15 < 0) goto LAB_710289f4bc;
          lVar17 = lVar17 - (long)pvVar43;
          if ((ulong)(lVar17 >> 3) < 0xfffffffffffffff) {
            uVar21 = lVar17 >> 2;
            uVar18 = uVar37;
            if (uVar37 <= uVar21) {
              uVar18 = uVar21;
            }
            if (uVar18 != 0) {
              if (uVar18 >> 0x3d == 0) goto LAB_710289bbc4;
              goto LAB_710289f4c8;
            }
            uVar18 = 0;
            pvVar6 = (void *)0x0;
          }
          else {
            uVar18 = 0x1fffffffffffffff;
LAB_710289bbc4:
            ppplVar19 = (long ***)(uVar18 * 8);
            if (ppplVar19 == (long ***)0x0) {
              ppplVar19 = (long ***)0x1;
            }
            pppplVar25 = (long ****)param_5;
            pvVar6 = (void *)FUN_710392e290(0x10,ppplVar19,(long ****)0xc5ada567b,
                                            (byte ****)&SUB_00000018,(long ****)param_5,param_6,
                                            param_7,param_8);
            if (pvVar6 == (void *)0x0) {
              if (DAT_7105332f00 != (long *)0x0) {
                local_8c[0] = 0;
                pppplVar8 = &local_98;
                local_98 = ppplVar19;
                uVar21 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,local_8c);
                if (((uVar21 & 1) != 0) &&
                   (pvVar6 = (void *)FUN_710392e290(0x10,ppplVar19,pppplVar8,ppppbVar9,pppplVar25,
                                                    param_6,param_7,param_8), pvVar6 != (void *)0x0)
                   ) goto LAB_710289bc34;
              }
              pvVar6 = (void *)0x0;
            }
          }
LAB_710289bc34:
          memset((void *)((long)pvVar6 + uVar41 * 8),0,uVar45 * 8);
          if (0 < (long)sVar44) {
            memcpy(pvVar6,pvVar43,sVar44);
          }
          *puVar5 = pvVar6;
          *plVar40 = (long)((long)pvVar6 + uVar37 * 8);
          *plVar34 = (long)((long)pvVar6 + uVar18 * 8);
          if (pvVar43 != (void *)0x0) {
            FUN_710392eb40((ulong)pvVar43);
          }
        }
        else {
          uVar37 = uVar45;
          if ((uVar45 & 1) != 0) {
            *puVar20 = 0;
            puVar20 = (undefined8 *)(*plVar40 + 8);
            uVar37 = uVar45 - 1;
            *plVar40 = (long)puVar20;
          }
          if (uVar45 != 1) {
            do {
              *puVar20 = 0;
              lVar17 = *plVar40;
              *plVar40 = lVar17 + 8;
              *(undefined8 *)(lVar17 + 8) = 0;
              puVar20 = (undefined8 *)(*plVar40 + 8);
              uVar37 = uVar37 - 2;
              *plVar40 = (long)puVar20;
            } while (uVar37 != 0);
          }
        }
      }
      else if (uVar41 != uVar37) {
        *plVar40 = (long)((long)pvVar43 + uVar37 * 8);
      }
      param_3 = (long ****)0xc5ada567b;
      param_4 = (uint *)&SUB_00000018;
      uVar14 = (uint)*pbVar28;
      if ((*pbVar28 - 0xb < 2) && (0 < *(int *)(pbVar28 + 1))) {
        lVar17 = 0;
LAB_710289bce8:
        do {
          iVar15 = (int)lVar17;
          if (iVar15 < 0) {
LAB_710289bd20:
            pppplVar25 = (long ****)0x0;
            pbVar7 = &DAT_7104742dbb;
          }
          else {
            pppplVar25 = (long ****)0x0;
            pbVar7 = &DAT_7104742dbb;
            if (uVar14 == 0xb) {
              if (*(int *)(pbVar28 + 1) <= iVar15) goto LAB_710289bd20;
              pbVar7 = pbVar28 + *(int *)(pbVar28 + (long)iVar15 * 4 + 5);
              pppplVar25 = (long ****)param_5;
            }
          }
          if ((*pbVar7 == 0xc) && (iVar15 = *(int *)(pbVar7 + 1) + -1, 0 < *(int *)(pbVar7 + 1))) {
            iVar24 = 0;
            do {
              iVar2 = iVar15 + iVar24;
              if (iVar2 < 0) {
                iVar2 = iVar2 + 1;
              }
              iVar2 = iVar2 >> 1;
              puVar10 = (uint *)((long)pppplVar25[5] + (long)iVar2 * 8 + (long)*(int *)(pbVar7 + 5))
              ;
              if (pppplVar25[4][*puVar10] == (long **)0xa737452e1) {
                uVar14 = puVar10[1];
                if (-1 < (int)uVar14) {
                  pbVar7 = pbVar7 + (int)uVar14;
                  goto LAB_710289bda4;
                }
                break;
              }
              iVar4 = iVar2 + -1;
              if (pppplVar25[4][*puVar10] < (long **)0xa737452e2) {
                iVar24 = iVar2 + 1;
                iVar4 = iVar15;
              }
              iVar15 = iVar4;
            } while (iVar24 <= iVar15);
          }
          pppplVar25 = (long ****)0x0;
          pbVar7 = &DAT_7104742dbb;
LAB_710289bda4:
          if (*pbVar7 == 9) {
            pplVar26 = pppplVar25[4][*(int *)(pbVar7 + 1)];
          }
          else {
            pplVar26 = (long **)0x0;
          }
          *(long ***)(*(long *)(*(long *)(param_1 + 0x38) + lVar42 * 0x18) + lVar17 * 8) = pplVar26;
          uVar14 = (uint)*pbVar28;
          lVar17 = lVar17 + 1;
          if (uVar14 - 0xb < 2) {
            if (*(int *)(pbVar28 + 1) <= lVar17) break;
            goto LAB_710289bce8;
          }
        } while (lVar17 < 0);
      }
      uVar14 = (uint)*pbVar12;
      lVar42 = lVar42 + 1;
      if (uVar14 - 0xb < 2) {
        if (*(int *)(pbVar12 + 1) <= lVar42) break;
        goto LAB_710289b9e8;
      }
    } while (lVar42 < 0);
  }
  pcVar16 = (char *)param_2[1];
  if ((*pcVar16 == '\f') && (iVar15 = *(int *)(pcVar16 + 1) + -1, 0 < *(int *)(pcVar16 + 1))) {
    local_e8 = (long ****)*param_2;
    pbVar12 = &DAT_7104742dbb;
    iVar24 = 0;
    do {
      iVar2 = iVar15 + iVar24;
      if (iVar2 < 0) {
        iVar2 = iVar2 + 1;
      }
      iVar2 = iVar2 >> 1;
      puVar10 = (uint *)((long)local_e8[5] + (long)iVar2 * 8 + (long)*(int *)(pcVar16 + 5));
      if (local_e8[4][*puVar10] == (long **)0x141a832616) {
        uVar14 = puVar10[1];
        if ((int)uVar14 < 0) goto LAB_710289bee0;
        pbVar12 = (byte *)(pcVar16 + (int)uVar14);
        goto LAB_710289beec;
      }
      iVar4 = iVar2 + -1;
      if (local_e8[4][*puVar10] < (long **)0x141a832617) {
        iVar24 = iVar2 + 1;
        iVar4 = iVar15;
      }
      iVar15 = iVar4;
    } while (iVar24 <= iVar15);
    local_e8 = (long ****)0x0;
  }
  else {
LAB_710289bee0:
    local_e8 = (long ****)0x0;
    pbVar12 = &DAT_7104742dbb;
  }
LAB_710289beec:
  if (*pbVar12 - 0xb < 2) {
    iVar15 = *(int *)(pbVar12 + 1);
  }
  else {
    iVar15 = 0;
  }
  puVar39 = *(ulong **)(param_1 + 0x50);
  puVar38 = *(ulong **)(param_1 + 0x58);
  uVar37 = (ulong)iVar15;
  lVar42 = (long)puVar38 - (long)puVar39 >> 3;
  if ((ulong)(lVar42 * -0x5555555555555555) < uVar37) {
    uVar41 = uVar37 + lVar42 * 0x5555555555555555;
    if ((ulong)((*(long *)(param_1 + 0x60) - (long)puVar38 >> 3) * -0x5555555555555555) < uVar41) {
      if (iVar15 < 0) {
LAB_710289f4cc:
                    /* WARNING: Subroutine does not return */
        std::__vector_base_common<true>::__throw_length_error();
      }
      lVar17 = *(long *)(param_1 + 0x60) - (long)puVar39 >> 3;
      uVar45 = 0xaaaaaaaaaaaaaaa;
      if ((ulong)(lVar17 * -0x5555555555555555) < 0x555555555555555) {
        uVar18 = lVar17 * 0x5555555555555556;
        uVar45 = uVar37;
        if (uVar37 <= uVar18) {
          uVar45 = uVar18;
        }
        if (uVar45 != 0) goto LAB_710289bf84;
LAB_710289bfe8:
        lVar17 = 0;
      }
      else {
LAB_710289bf84:
        ppplVar19 = (long ***)(uVar45 * 0x18);
        if (ppplVar19 == (long ***)0x0) {
          ppplVar19 = (long ***)0x1;
        }
        lVar17 = FUN_710392e290(0x10,ppplVar19,param_3,(byte ****)param_4,(long ****)param_5,param_6
                                ,param_7,param_8);
        if (lVar17 == 0) {
          if (DAT_7105332f00 != (long *)0x0) {
            local_8c[0] = 0;
            pppplVar25 = &local_98;
            local_98 = ppplVar19;
            uVar18 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,local_8c);
            if (((uVar18 & 1) != 0) &&
               (lVar17 = FUN_710392e290(0x10,ppplVar19,pppplVar25,(byte ****)param_4,
                                        (long ****)param_5,param_6,param_7,param_8), lVar17 != 0))
            goto LAB_710289bfec;
          }
          goto LAB_710289bfe8;
        }
      }
LAB_710289bfec:
      pvVar43 = (void *)(lVar17 + lVar42 * 8);
      param_3 = (long ****)(uVar41 * 0x18);
      lVar42 = lVar17 + uVar45 * 0x18;
      memset(pvVar43,0,(size_t)param_3);
      lVar17 = lVar17 + uVar37 * 0x18;
      if (puVar38 == puVar39) {
        *(void **)(param_1 + 0x50) = pvVar43;
        *(long *)(param_1 + 0x58) = lVar17;
        *(long *)(param_1 + 0x60) = lVar42;
      }
      else {
        lVar27 = 0;
        do {
          *(undefined8 *)((long)pvVar43 + lVar27 + -0x18) = 0;
          *(undefined8 *)((long)pvVar43 + lVar27 + -0x10) = 0;
          *(undefined8 *)((long)pvVar43 + lVar27 + -8) = 0;
          *(undefined8 *)((long)pvVar43 + lVar27 + -0x18) =
               *(undefined8 *)((long)puVar38 + lVar27 + -0x18);
          *(undefined8 *)((long)pvVar43 + lVar27 + -0x10) =
               *(undefined8 *)((long)puVar38 + lVar27 + -0x10);
          lVar23 = lVar27 + -0x18;
          *(undefined8 *)((long)pvVar43 + lVar27 + -8) =
               *(undefined8 *)((long)puVar38 + lVar27 + -8);
          *(undefined8 *)((long)puVar38 + lVar27 + -0x10) = 0;
          *(undefined8 *)((long)puVar38 + lVar27 + -8) = 0;
          *(undefined8 *)((long)puVar38 + lVar27 + -0x18) = 0;
          lVar27 = lVar23;
        } while ((long)puVar39 - (long)puVar38 != lVar23);
        puVar39 = *(ulong **)(param_1 + 0x50);
        puVar38 = *(ulong **)(param_1 + 0x58);
        *(long *)(param_1 + 0x50) = (long)pvVar43 + lVar23;
        *(long *)(param_1 + 0x58) = lVar17;
        *(long *)(param_1 + 0x60) = lVar42;
        while (puVar3 = puVar38, puVar3 != puVar39) {
          puVar38 = puVar3 + -3;
          uVar37 = *puVar38;
          if (uVar37 != 0) {
            puVar3[-2] = uVar37;
            FUN_710392eb40(uVar37);
          }
        }
      }
      if (puVar39 != (ulong *)0x0) {
        FUN_710392eb40((ulong)puVar39);
      }
    }
    else {
      uVar37 = uVar41;
      if ((uVar41 & 1) != 0) {
        puVar38[1] = 0;
        puVar38[2] = 0;
        *puVar38 = 0;
        puVar38 = (ulong *)(*(long *)(param_1 + 0x58) + 0x18);
        uVar37 = uVar41 - 1;
        *(ulong **)(param_1 + 0x58) = puVar38;
      }
      if (uVar41 != 1) {
        do {
          puVar38[1] = 0;
          puVar38[2] = 0;
          uVar37 = uVar37 - 2;
          *puVar38 = 0;
          lVar42 = *(long *)(param_1 + 0x58);
          *(long *)(param_1 + 0x58) = lVar42 + 0x18;
          *(undefined8 *)(lVar42 + 0x20) = 0;
          *(undefined8 *)(lVar42 + 0x28) = 0;
          *(undefined8 *)(lVar42 + 0x18) = 0;
          puVar38 = (ulong *)(*(long *)(param_1 + 0x58) + 0x18);
          *(ulong **)(param_1 + 0x58) = puVar38;
        } while (uVar37 != 0);
      }
    }
  }
  else if (lVar42 * -0x5555555555555555 - uVar37 != 0) {
    while (puVar3 = puVar38, puVar39 + uVar37 * 3 != puVar3) {
      puVar38 = puVar3 + -3;
      uVar41 = *puVar38;
      if (uVar41 != 0) {
        puVar3[-2] = uVar41;
        FUN_710392eb40(uVar41);
      }
    }
    *(ulong **)(param_1 + 0x58) = puVar39 + uVar37 * 3;
  }
  uVar14 = (uint)*pbVar12;
  if ((*pbVar12 - 0xb < 2) && (0 < *(int *)(pbVar12 + 1))) {
    lVar42 = 0;
LAB_710289c1d8:
    do {
      ppppbVar9 = (byte ****)&SUB_00000018;
      iVar15 = (int)lVar42;
      if (iVar15 < 0) {
LAB_710289c214:
        pppplVar25 = (long ****)0x0;
        pbVar7 = &DAT_7104742dbb;
      }
      else {
        pppplVar25 = (long ****)0x0;
        pbVar7 = &DAT_7104742dbb;
        if (uVar14 == 0xb) {
          if (*(int *)(pbVar12 + 1) <= iVar15) goto LAB_710289c214;
          pbVar7 = pbVar12 + *(int *)(pbVar12 + (long)iVar15 * 4 + 5);
          pppplVar25 = local_e8;
        }
      }
      pbVar28 = &DAT_7104742dbb;
      if ((*pbVar7 == 0xc) && (iVar15 = *(int *)(pbVar7 + 1) + -1, 0 < *(int *)(pbVar7 + 1))) {
        iVar24 = 0;
        do {
          iVar2 = iVar15 + iVar24;
          if (iVar2 < 0) {
            iVar2 = iVar2 + 1;
          }
          iVar2 = iVar2 >> 1;
          puVar10 = (uint *)((long)pppplVar25[5] + (long)iVar2 * 8 + (long)*(int *)(pbVar7 + 5));
          if (pppplVar25[4][*puVar10] == (long **)0x103a8c92a1) {
            uVar37 = (ulong)(int)puVar10[1];
            param_5 = (uint *)(long ****)0x0;
            if ((uVar37 & 0x80000000) == 0) {
              param_5 = (uint *)pppplVar25;
              pbVar28 = pbVar7 + uVar37;
            }
            goto LAB_710289c288;
          }
          iVar4 = iVar2 + -1;
          if (pppplVar25[4][*puVar10] < (long **)0x103a8c92a2) {
            iVar24 = iVar2 + 1;
            iVar4 = iVar15;
          }
          iVar15 = iVar4;
        } while (iVar24 <= iVar15);
      }
      param_5 = (uint *)(long ****)0x0;
LAB_710289c288:
      lVar17 = *(long *)(param_1 + 0x50);
      puVar5 = (undefined8 *)(lVar17 + lVar42 * 0x18);
      if (*pbVar28 - 0xb < 2) {
        iVar15 = *(int *)(pbVar28 + 1);
      }
      else {
        iVar15 = 0;
      }
      uVar41 = (ulong)iVar15;
      plVar40 = (long *)(lVar17 + lVar42 * 0x18 + 8);
      puVar20 = (undefined8 *)*plVar40;
      pvVar43 = (void *)*puVar5;
      sVar44 = (long)puVar20 - (long)pvVar43;
      uVar37 = (long)sVar44 >> 3;
      if (uVar37 < uVar41) {
        plVar34 = (long *)(lVar17 + lVar42 * 0x18 + 0x10);
        lVar17 = *plVar34;
        uVar45 = uVar41 - uVar37;
        if ((ulong)(lVar17 - (long)puVar20 >> 3) < uVar45) {
          if (iVar15 < 0) goto LAB_710289f4bc;
          lVar17 = lVar17 - (long)pvVar43;
          if ((ulong)(lVar17 >> 3) < 0xfffffffffffffff) {
            uVar21 = lVar17 >> 2;
            uVar18 = uVar41;
            if (uVar41 <= uVar21) {
              uVar18 = uVar21;
            }
            if (uVar18 != 0) {
              if (uVar18 >> 0x3d != 0) {
LAB_710289f4c8:
                    /* WARNING: Subroutine does not return */
                abort();
              }
              goto LAB_710289c3b4;
            }
            uVar18 = 0;
            pvVar6 = (void *)0x0;
          }
          else {
            uVar18 = 0x1fffffffffffffff;
LAB_710289c3b4:
            ppplVar19 = (long ***)(uVar18 * 8);
            if (ppplVar19 == (long ***)0x0) {
              ppplVar19 = (long ***)0x1;
            }
            pppplVar25 = (long ****)param_5;
            pvVar6 = (void *)FUN_710392e290(0x10,ppplVar19,(long ****)0x103a8c92a1,
                                            (byte ****)&SUB_00000018,(long ****)param_5,param_6,
                                            param_7,param_8);
            if (pvVar6 == (void *)0x0) {
              if (DAT_7105332f00 != (long *)0x0) {
                local_8c[0] = 0;
                pppplVar8 = &local_98;
                local_98 = ppplVar19;
                uVar21 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,local_8c);
                if (((uVar21 & 1) != 0) &&
                   (pvVar6 = (void *)FUN_710392e290(0x10,ppplVar19,pppplVar8,ppppbVar9,pppplVar25,
                                                    param_6,param_7,param_8), pvVar6 != (void *)0x0)
                   ) goto LAB_710289c424;
              }
              pvVar6 = (void *)0x0;
            }
          }
LAB_710289c424:
          memset((void *)((long)pvVar6 + uVar37 * 8),0,uVar45 * 8);
          if (0 < (long)sVar44) {
            memcpy(pvVar6,pvVar43,sVar44);
          }
          *puVar5 = pvVar6;
          *plVar40 = (long)((long)pvVar6 + uVar41 * 8);
          *plVar34 = (long)((long)pvVar6 + uVar18 * 8);
          if (pvVar43 != (void *)0x0) {
            FUN_710392eb40((ulong)pvVar43);
          }
        }
        else {
          uVar37 = uVar45;
          if ((uVar45 & 1) != 0) {
            *puVar20 = 0;
            puVar20 = (undefined8 *)(*plVar40 + 8);
            uVar37 = uVar45 - 1;
            *plVar40 = (long)puVar20;
          }
          if (uVar45 != 1) {
            do {
              *puVar20 = 0;
              lVar17 = *plVar40;
              *plVar40 = lVar17 + 8;
              *(undefined8 *)(lVar17 + 8) = 0;
              puVar20 = (undefined8 *)(*plVar40 + 8);
              uVar37 = uVar37 - 2;
              *plVar40 = (long)puVar20;
            } while (uVar37 != 0);
          }
        }
      }
      else if (uVar37 != uVar41) {
        *plVar40 = (long)((long)pvVar43 + uVar41 * 8);
      }
      param_3 = (long ****)0x103a8c92a1;
      param_4 = (uint *)&SUB_00000018;
      uVar14 = (uint)*pbVar28;
      if ((*pbVar28 - 0xb < 2) && (0 < *(int *)(pbVar28 + 1))) {
        lVar17 = 0;
LAB_710289c4d0:
        do {
          iVar15 = (int)lVar17;
          if (iVar15 < 0) {
LAB_710289c508:
            pppplVar25 = (long ****)0x0;
            pbVar7 = &DAT_7104742dbb;
          }
          else {
            pppplVar25 = (long ****)0x0;
            pbVar7 = &DAT_7104742dbb;
            if (uVar14 == 0xb) {
              if (*(int *)(pbVar28 + 1) <= iVar15) goto LAB_710289c508;
              pbVar7 = pbVar28 + *(int *)(pbVar28 + (long)iVar15 * 4 + 5);
              pppplVar25 = (long ****)param_5;
            }
          }
          if ((*pbVar7 == 0xc) && (iVar15 = *(int *)(pbVar7 + 1) + -1, 0 < *(int *)(pbVar7 + 1))) {
            iVar24 = 0;
            do {
              iVar2 = iVar15 + iVar24;
              if (iVar2 < 0) {
                iVar2 = iVar2 + 1;
              }
              iVar2 = iVar2 >> 1;
              puVar10 = (uint *)((long)pppplVar25[5] + (long)iVar2 * 8 + (long)*(int *)(pbVar7 + 5))
              ;
              if (pppplVar25[4][*puVar10] == (long **)0xede4e3934) {
                uVar14 = puVar10[1];
                if (-1 < (int)uVar14) {
                  pbVar7 = pbVar7 + (int)uVar14;
                  goto LAB_710289c58c;
                }
                break;
              }
              iVar4 = iVar2 + -1;
              if (pppplVar25[4][*puVar10] < (long **)0xede4e3935) {
                iVar24 = iVar2 + 1;
                iVar4 = iVar15;
              }
              iVar15 = iVar4;
            } while (iVar24 <= iVar15);
          }
          pppplVar25 = (long ****)0x0;
          pbVar7 = &DAT_7104742dbb;
LAB_710289c58c:
          if (*pbVar7 == 9) {
            pplVar26 = pppplVar25[4][*(int *)(pbVar7 + 1)];
          }
          else {
            pplVar26 = (long **)0x0;
          }
          *(long ***)(*(long *)(*(long *)(param_1 + 0x50) + lVar42 * 0x18) + lVar17 * 8) = pplVar26;
          uVar14 = (uint)*pbVar28;
          lVar17 = lVar17 + 1;
          if (uVar14 - 0xb < 2) {
            if (*(int *)(pbVar28 + 1) <= lVar17) break;
            goto LAB_710289c4d0;
          }
        } while (lVar17 < 0);
      }
      uVar14 = (uint)*pbVar12;
      lVar42 = lVar42 + 1;
      if (uVar14 - 0xb < 2) {
        if (*(int *)(pbVar12 + 1) <= lVar42) break;
        goto LAB_710289c1d8;
      }
    } while (lVar42 < 0);
  }
  pcVar16 = (char *)param_2[1];
  if ((*pcVar16 == '\f') && (iVar15 = *(int *)(pcVar16 + 1) + -1, 0 < *(int *)(pcVar16 + 1))) {
    local_108 = (byte ****)*param_2;
    pbVar12 = &DAT_7104742dbb;
    iVar24 = 0;
    do {
      iVar2 = iVar15 + iVar24;
      if (iVar2 < 0) {
        iVar2 = iVar2 + 1;
      }
      iVar2 = iVar2 >> 1;
      puVar10 = (uint *)(*(long *)((long)local_108 + 0x28) + (long)*(int *)(pcVar16 + 5) +
                        (long)iVar2 * 8);
      uVar37 = *(ulong *)(*(long *)((long)local_108 + 0x20) + (ulong)*puVar10 * 8);
      if (uVar37 == 0x10cbd29abe) {
        uVar14 = puVar10[1];
        if ((int)uVar14 < 0) goto LAB_710289c6c8;
        pbVar12 = (byte *)(pcVar16 + (int)uVar14);
        goto LAB_710289c6d4;
      }
      iVar4 = iVar2 + -1;
      if (uVar37 < 0x10cbd29abf) {
        iVar24 = iVar2 + 1;
        iVar4 = iVar15;
      }
      iVar15 = iVar4;
    } while (iVar24 <= iVar15);
    local_108 = (byte ****)0x0;
  }
  else {
LAB_710289c6c8:
    local_108 = (byte ****)0x0;
    pbVar12 = &DAT_7104742dbb;
  }
LAB_710289c6d4:
  if (*pbVar12 - 0xb < 2) {
    iVar15 = *(int *)(pbVar12 + 1);
  }
  else {
    iVar15 = 0;
  }
  puVar39 = *(ulong **)(param_1 + 0x68);
  puVar38 = *(ulong **)(param_1 + 0x70);
  uVar37 = (ulong)iVar15;
  lVar42 = (long)puVar38 - (long)puVar39 >> 3;
  plVar40 = (long *)(param_1 + 0x68);
  if ((ulong)(lVar42 * -0x5555555555555555) < uVar37) {
    uVar41 = uVar37 + lVar42 * 0x5555555555555555;
    if ((ulong)((*(long *)(param_1 + 0x78) - (long)puVar38 >> 3) * -0x5555555555555555) < uVar41) {
      if (iVar15 < 0) goto LAB_710289f4d4;
      lVar17 = *(long *)(param_1 + 0x78) - (long)puVar39 >> 3;
      uVar45 = 0xaaaaaaaaaaaaaaa;
      if ((ulong)(lVar17 * -0x5555555555555555) < 0x555555555555555) {
        uVar18 = lVar17 * 0x5555555555555556;
        uVar45 = uVar37;
        if (uVar37 <= uVar18) {
          uVar45 = uVar18;
        }
        if (uVar45 != 0) goto LAB_710289c768;
LAB_710289c7cc:
        lVar17 = 0;
      }
      else {
LAB_710289c768:
        ppplVar19 = (long ***)(uVar45 * 0x18);
        if (ppplVar19 == (long ***)0x0) {
          ppplVar19 = (long ***)0x1;
        }
        lVar17 = FUN_710392e290(0x10,ppplVar19,param_3,(byte ****)param_4,(long ****)param_5,param_6
                                ,param_7,param_8);
        if (lVar17 == 0) {
          if (DAT_7105332f00 != (long *)0x0) {
            local_8c[0] = 0;
            pppplVar25 = &local_98;
            local_98 = ppplVar19;
            uVar18 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,local_8c);
            if (((uVar18 & 1) != 0) &&
               (lVar17 = FUN_710392e290(0x10,ppplVar19,pppplVar25,(byte ****)param_4,
                                        (long ****)param_5,param_6,param_7,param_8), lVar17 != 0))
            goto LAB_710289c7d0;
          }
          goto LAB_710289c7cc;
        }
      }
LAB_710289c7d0:
      pvVar43 = (void *)(lVar17 + lVar42 * 8);
      param_3 = (long ****)(uVar41 * 0x18);
      lVar42 = lVar17 + uVar45 * 0x18;
      memset(pvVar43,0,(size_t)param_3);
      lVar17 = lVar17 + uVar37 * 0x18;
      if (puVar38 == puVar39) {
        *(void **)(param_1 + 0x68) = pvVar43;
        *(long *)(param_1 + 0x70) = lVar17;
        *(long *)(param_1 + 0x78) = lVar42;
      }
      else {
        lVar27 = 0;
        do {
          *(undefined8 *)((long)pvVar43 + lVar27 + -0x18) = 0;
          *(undefined8 *)((long)pvVar43 + lVar27 + -0x10) = 0;
          *(undefined8 *)((long)pvVar43 + lVar27 + -8) = 0;
          *(undefined8 *)((long)pvVar43 + lVar27 + -0x18) =
               *(undefined8 *)((long)puVar38 + lVar27 + -0x18);
          *(undefined8 *)((long)pvVar43 + lVar27 + -0x10) =
               *(undefined8 *)((long)puVar38 + lVar27 + -0x10);
          lVar23 = lVar27 + -0x18;
          *(undefined8 *)((long)pvVar43 + lVar27 + -8) =
               *(undefined8 *)((long)puVar38 + lVar27 + -8);
          *(undefined8 *)((long)puVar38 + lVar27 + -0x10) = 0;
          *(undefined8 *)((long)puVar38 + lVar27 + -8) = 0;
          *(undefined8 *)((long)puVar38 + lVar27 + -0x18) = 0;
          lVar27 = lVar23;
        } while ((long)puVar39 - (long)puVar38 != lVar23);
        puVar39 = *(ulong **)(param_1 + 0x68);
        puVar38 = *(ulong **)(param_1 + 0x70);
        *(long *)(param_1 + 0x68) = (long)pvVar43 + lVar23;
        *(long *)(param_1 + 0x70) = lVar17;
        *(long *)(param_1 + 0x78) = lVar42;
        while (puVar3 = puVar38, puVar3 != puVar39) {
          puVar38 = puVar3 + -3;
          uVar37 = *puVar38;
          if (uVar37 != 0) {
            puVar3[-2] = uVar37;
            FUN_710392eb40(uVar37);
          }
        }
      }
      if (puVar39 != (ulong *)0x0) {
        FUN_710392eb40((ulong)puVar39);
      }
    }
    else {
      uVar37 = uVar41;
      if ((uVar41 & 1) != 0) {
        puVar38[1] = 0;
        puVar38[2] = 0;
        *puVar38 = 0;
        puVar38 = (ulong *)(*(long *)(param_1 + 0x70) + 0x18);
        uVar37 = uVar41 - 1;
        *(ulong **)(param_1 + 0x70) = puVar38;
      }
      if (uVar41 != 1) {
        do {
          puVar38[1] = 0;
          puVar38[2] = 0;
          uVar37 = uVar37 - 2;
          *puVar38 = 0;
          lVar42 = *(long *)(param_1 + 0x70);
          *(long *)(param_1 + 0x70) = lVar42 + 0x18;
          *(undefined8 *)(lVar42 + 0x20) = 0;
          *(undefined8 *)(lVar42 + 0x28) = 0;
          *(undefined8 *)(lVar42 + 0x18) = 0;
          puVar38 = (ulong *)(*(long *)(param_1 + 0x70) + 0x18);
          *(ulong **)(param_1 + 0x70) = puVar38;
        } while (uVar37 != 0);
      }
    }
  }
  else if (lVar42 * -0x5555555555555555 - uVar37 != 0) {
    while (puVar3 = puVar38, puVar39 + uVar37 * 3 != puVar3) {
      puVar38 = puVar3 + -3;
      uVar41 = *puVar38;
      if (uVar41 != 0) {
        puVar3[-2] = uVar41;
        FUN_710392eb40(uVar41);
      }
    }
    *(ulong **)(param_1 + 0x70) = puVar39 + uVar37 * 3;
  }
  uVar14 = (uint)*pbVar12;
  if ((*pbVar12 - 0xb < 2) && (0 < *(int *)(pbVar12 + 1))) {
    lVar42 = 0;
LAB_710289c9fc:
    do {
      puVar13 = &switchD_710289cf9c::switchdataD_710450cfbc;
      puVar11 = &switchD_710289d078::switchdataD_710450cfd8;
      puVar10 = &switchD_710289d154::switchdataD_710450cff4;
      uVar29 = 5;
      iVar15 = (int)lVar42;
      if (iVar15 < 0) {
LAB_710289ca34:
        ppppbVar9 = (byte ****)0x0;
        pbVar7 = &DAT_7104742dbb;
      }
      else {
        pbVar7 = &DAT_7104742dbb;
        ppppbVar9 = (byte ****)0;
        if (uVar14 == 0xb) {
          if (*(int *)(pbVar12 + 1) <= iVar15) goto LAB_710289ca34;
          pbVar7 = pbVar12 + *(int *)(pbVar12 + (long)iVar15 * 4 + 5);
          ppppbVar9 = local_108;
        }
      }
      pbVar28 = &DAT_7104742dbb;
      if ((*pbVar7 == 0xc) && (iVar15 = *(int *)(pbVar7 + 1) + -1, 0 < *(int *)(pbVar7 + 1))) {
        iVar24 = 0;
        do {
          iVar2 = iVar15 + iVar24;
          if (iVar2 < 0) {
            iVar2 = iVar2 + 1;
          }
          iVar2 = iVar2 >> 1;
          puVar1 = (uint *)(*(long *)((long)ppppbVar9 + 0x28) + (long)*(int *)(pbVar7 + 5) +
                           (long)iVar2 * 8);
          uVar37 = *(ulong *)(*(long *)((long)ppppbVar9 + 0x20) + (ulong)*puVar1 * 8);
          if (uVar37 == 0xc95012419) {
            uVar37 = (ulong)(int)puVar1[1];
            param_8 = 0;
            if ((uVar37 & 0x80000000) == 0) {
              param_8 = (long)ppppbVar9;
              pbVar28 = pbVar7 + uVar37;
            }
            goto LAB_710289caa4;
          }
          iVar4 = iVar2 + -1;
          if (uVar37 < 0xc9501241a) {
            iVar24 = iVar2 + 1;
            iVar4 = iVar15;
          }
          iVar15 = iVar4;
        } while (iVar24 <= iVar15);
      }
      param_8 = 0;
LAB_710289caa4:
      lVar17 = *plVar40;
      puVar5 = (undefined8 *)(lVar17 + lVar42 * 0x18);
      if (*pbVar28 - 0xb < 2) {
        iVar15 = *(int *)(pbVar28 + 1);
      }
      else {
        iVar15 = 0;
      }
      plVar34 = (long *)(lVar17 + lVar42 * 0x18 + 8);
      puVar20 = (undefined8 *)*plVar34;
      pvVar43 = (void *)*puVar5;
      sVar44 = (long)puVar20 - (long)pvVar43;
      uVar37 = (ulong)iVar15;
      lVar27 = (long)sVar44 >> 3;
      if ((ulong)(lVar27 * -0x5555555555555555) < uVar37) {
        plVar36 = (long *)(lVar17 + lVar42 * 0x18 + 0x10);
        lVar17 = *plVar36;
        uVar41 = uVar37 + lVar27 * 0x5555555555555555;
        if ((ulong)((lVar17 - (long)puVar20 >> 3) * -0x5555555555555555) < uVar41) {
          if (iVar15 < 0) {
LAB_710289f4bc:
                    /* WARNING: Subroutine does not return */
            std::__vector_base_common<true>::__throw_length_error();
          }
          lVar17 = lVar17 - (long)pvVar43 >> 3;
          uVar45 = 0xaaaaaaaaaaaaaaa;
          if ((ulong)(lVar17 * -0x5555555555555555) < 0x555555555555555) {
            uVar18 = lVar17 * 0x5555555555555556;
            uVar45 = uVar37;
            if (uVar37 <= uVar18) {
              uVar45 = uVar18;
            }
            if (uVar45 != 0) goto LAB_710289cb64;
            uVar45 = 0;
            lVar23 = 0;
          }
          else {
LAB_710289cb64:
            ppplVar19 = (long ***)(uVar45 * 0x18);
            if (ppplVar19 == (long ***)0x0) {
              ppplVar19 = (long ***)0x1;
            }
            lVar17 = param_8;
            lVar23 = FUN_710392e290(0x10,ppplVar19,(long ****)0xc95012419,
                                    (byte ****)&switchD_710289d154::switchdataD_710450cff4,
                                    (long ****)&switchD_710289d078::switchdataD_710450cfd8,5,
                                    &switchD_710289cf9c::switchdataD_710450cfbc,param_8);
            if (lVar23 == 0) {
              if (DAT_7105332f00 != (long *)0x0) {
                local_8c[0] = 0;
                pppplVar25 = &local_98;
                local_98 = ppplVar19;
                uVar18 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,local_8c);
                if (((uVar18 & 1) != 0) &&
                   (lVar23 = FUN_710392e290(0x10,ppplVar19,pppplVar25,(byte ****)puVar10,
                                            (long ****)puVar11,uVar29,puVar13,lVar17), lVar23 != 0))
                goto LAB_710289cbd8;
              }
              lVar23 = 0;
            }
          }
LAB_710289cbd8:
          pvVar6 = (void *)(lVar23 + lVar27 * 8);
          memset(pvVar6,0,uVar41 * 0x18);
          lVar17 = SUB168(SEXT816((long)sVar44) * SEXT816(-0x2aaaaaaaaaaaaaab),8);
          pvVar6 = (void *)((long)pvVar6 + ((lVar17 >> 2) - (lVar17 >> 0x3f)) * 0x18);
          if (0 < (long)sVar44) {
            memcpy(pvVar6,pvVar43,sVar44);
          }
          *puVar5 = pvVar6;
          *plVar34 = lVar23 + uVar37 * 0x18;
          *plVar36 = lVar23 + uVar45 * 0x18;
          if (pvVar43 != (void *)0x0) {
            FUN_710392eb40((ulong)pvVar43);
          }
        }
        else {
          uVar37 = uVar41;
          if ((uVar41 & 1) != 0) {
            puVar20[1] = 0;
            puVar20[2] = 0;
            uVar37 = uVar41 - 1;
            *puVar20 = 0;
            puVar20 = (undefined8 *)(*plVar34 + 0x18);
            *plVar34 = (long)puVar20;
          }
          if (uVar41 != 1) {
            do {
              puVar20[1] = 0;
              puVar20[2] = 0;
              uVar37 = uVar37 - 2;
              *puVar20 = 0;
              lVar17 = *plVar34;
              *plVar34 = lVar17 + 0x18;
              *(undefined8 *)(lVar17 + 0x20) = 0;
              *(undefined8 *)(lVar17 + 0x28) = 0;
              *(undefined8 *)(lVar17 + 0x18) = 0;
              puVar20 = (undefined8 *)(*plVar34 + 0x18);
              *plVar34 = (long)puVar20;
            } while (uVar37 != 0);
          }
        }
      }
      else if (lVar27 * -0x5555555555555555 - uVar37 != 0) {
        *plVar34 = (long)((long)pvVar43 + uVar37 * 0x18);
      }
      param_7 = &switchD_710289cf9c::switchdataD_710450cfbc;
      param_5 = &switchD_710289d078::switchdataD_710450cfd8;
      param_4 = &switchD_710289d154::switchdataD_710450cff4;
      param_3 = (long ****)0xc95012419;
      uVar14 = (uint)*pbVar28;
      if ((*pbVar28 - 0xb < 2) && (0 < *(int *)(pbVar28 + 1))) {
        lVar17 = 0;
LAB_710289cd68:
        do {
          iVar15 = (int)lVar17;
          if (iVar15 < 0) {
LAB_710289cda0:
            lVar27 = 0;
            pbVar7 = &DAT_7104742dbb;
          }
          else {
            pbVar7 = &DAT_7104742dbb;
            lVar27 = 0;
            if (uVar14 == 0xb) {
              if (*(int *)(pbVar28 + 1) <= iVar15) goto LAB_710289cda0;
              pbVar7 = pbVar28 + *(int *)(pbVar28 + (long)iVar15 * 4 + 5);
              lVar27 = param_8;
            }
          }
          if ((*pbVar7 == 0xc) && (iVar15 = *(int *)(pbVar7 + 1) + -1, 0 < *(int *)(pbVar7 + 1))) {
            iVar24 = 0;
            do {
              iVar2 = iVar15 + iVar24;
              if (iVar2 < 0) {
                iVar2 = iVar2 + 1;
              }
              iVar2 = iVar2 >> 1;
              puVar10 = (uint *)(*(long *)(lVar27 + 0x28) + (long)*(int *)(pbVar7 + 5) +
                                (long)iVar2 * 8);
              uVar37 = *(ulong *)(*(long *)(lVar27 + 0x20) + (ulong)*puVar10 * 8);
              if (uVar37 == 0xa737452e1) {
                uVar14 = puVar10[1];
                if (-1 < (int)uVar14) {
                  pbVar30 = pbVar7 + (int)uVar14;
                  lVar23 = lVar27;
                  goto LAB_710289ce28;
                }
                break;
              }
              iVar4 = iVar2 + -1;
              if (uVar37 < 0xa737452e2) {
                iVar24 = iVar2 + 1;
                iVar4 = iVar15;
              }
              iVar15 = iVar4;
            } while (iVar24 <= iVar15);
          }
          lVar23 = 0;
          pbVar30 = &DAT_7104742dbb;
LAB_710289ce28:
          if (*pbVar30 == 9) {
            uVar29 = *(undefined8 *)(*(long *)(lVar23 + 0x20) + (long)*(int *)(pbVar30 + 1) * 8);
          }
          else {
            uVar29 = 0;
          }
          *(undefined8 *)(*(long *)(*plVar40 + lVar42 * 0x18) + lVar17 * 0x18) = uVar29;
          pbVar30 = &DAT_7104742dbb;
          if ((*pbVar7 == 0xc) && (iVar15 = *(int *)(pbVar7 + 1) + -1, 0 < *(int *)(pbVar7 + 1))) {
            iVar24 = 0;
            do {
              iVar2 = iVar15 + iVar24;
              if (iVar2 < 0) {
                iVar2 = iVar2 + 1;
              }
              iVar2 = iVar2 >> 1;
              puVar10 = (uint *)(*(long *)(lVar27 + 0x28) + (long)*(int *)(pbVar7 + 5) +
                                (long)iVar2 * 8);
              uVar37 = *(ulong *)(*(long *)(lVar27 + 0x20) + (ulong)*puVar10 * 8);
              if (uVar37 == 0x5ec462584) {
                uVar14 = puVar10[1];
                if (-1 < (int)uVar14) {
                  pbVar30 = pbVar7 + (int)uVar14;
                }
                break;
              }
              iVar4 = iVar2 + -1;
              if (uVar37 < 0x5ec462585) {
                iVar24 = iVar2 + 1;
                iVar4 = iVar15;
              }
              iVar15 = iVar4;
            } while (iVar24 <= iVar15);
          }
          uVar46 = 0x3f88f5c3;
          if (*pbVar30 == 8) {
            uVar46 = *(undefined4 *)(pbVar30 + 1);
          }
          *(undefined4 *)(*(long *)(*plVar40 + lVar42 * 0x18) + lVar17 * 0x18 + 8) = uVar46;
          pbVar30 = &DAT_7104742dbb;
          if ((*pbVar7 == 0xc) && (iVar15 = *(int *)(pbVar7 + 1) + -1, 0 < *(int *)(pbVar7 + 1))) {
            iVar24 = 0;
            do {
              iVar2 = iVar15 + iVar24;
              if (iVar2 < 0) {
                iVar2 = iVar2 + 1;
              }
              iVar2 = iVar2 >> 1;
              puVar10 = (uint *)(*(long *)(lVar27 + 0x28) + (long)*(int *)(pbVar7 + 5) +
                                (long)iVar2 * 8);
              uVar37 = *(ulong *)(*(long *)(lVar27 + 0x20) + (ulong)*puVar10 * 8);
              if (uVar37 == 0x8008bc31a) {
                uVar14 = puVar10[1];
                if (-1 < (int)uVar14) {
                  pbVar30 = pbVar7 + (int)uVar14;
                }
                break;
              }
              iVar4 = iVar2 + -1;
              if (uVar37 < 0x8008bc31b) {
                iVar24 = iVar2 + 1;
                iVar4 = iVar15;
              }
              iVar15 = iVar4;
            } while (iVar24 <= iVar15);
          }
          switch(*pbVar30) {
          case 1:
          case 3:
            uVar14 = (uint)pbVar30[1];
            break;
          case 2:
            uVar14 = (uint)(char)pbVar30[1];
            break;
          case 4:
            uVar14 = (uint)*(short *)(pbVar30 + 1);
            break;
          case 5:
            uVar14 = (uint)*(ushort *)(pbVar30 + 1);
            break;
          case 6:
          case 7:
            uVar14 = *(uint *)(pbVar30 + 1);
            break;
          default:
            uVar14 = 2;
          }
          *(uint *)(*(long *)(*plVar40 + lVar42 * 0x18) + lVar17 * 0x18 + 0xc) = uVar14;
          pbVar30 = &DAT_7104742dbb;
          if ((*pbVar7 == 0xc) && (iVar15 = *(int *)(pbVar7 + 1) + -1, 0 < *(int *)(pbVar7 + 1))) {
            iVar24 = 0;
            do {
              iVar2 = iVar15 + iVar24;
              if (iVar2 < 0) {
                iVar2 = iVar2 + 1;
              }
              iVar2 = iVar2 >> 1;
              puVar10 = (uint *)(*(long *)(lVar27 + 0x28) + (long)*(int *)(pbVar7 + 5) +
                                (long)iVar2 * 8);
              uVar37 = *(ulong *)(*(long *)(lVar27 + 0x20) + (ulong)*puVar10 * 8);
              if (uVar37 == 0x83c86fc43) {
                uVar14 = puVar10[1];
                if (-1 < (int)uVar14) {
                  pbVar30 = pbVar7 + (int)uVar14;
                }
                break;
              }
              iVar4 = iVar2 + -1;
              if (uVar37 < 0x83c86fc44) {
                iVar24 = iVar2 + 1;
                iVar4 = iVar15;
              }
              iVar15 = iVar4;
            } while (iVar24 <= iVar15);
          }
          switch(*pbVar30) {
          case 1:
          case 3:
            uVar14 = (uint)pbVar30[1];
            break;
          case 2:
            uVar14 = (uint)(char)pbVar30[1];
            break;
          case 4:
            uVar14 = (uint)*(short *)(pbVar30 + 1);
            break;
          case 5:
            uVar14 = (uint)*(ushort *)(pbVar30 + 1);
            break;
          case 6:
          case 7:
            uVar14 = *(uint *)(pbVar30 + 1);
            break;
          default:
            uVar14 = 5;
          }
          *(uint *)(*(long *)(*plVar40 + lVar42 * 0x18) + lVar17 * 0x18 + 0x10) = uVar14;
          pbVar30 = &DAT_7104742dbb;
          if ((*pbVar7 == 0xc) && (iVar15 = *(int *)(pbVar7 + 1) + -1, 0 < *(int *)(pbVar7 + 1))) {
            iVar24 = 0;
            do {
              iVar2 = iVar15 + iVar24;
              if (iVar2 < 0) {
                iVar2 = iVar2 + 1;
              }
              iVar2 = iVar2 >> 1;
              puVar10 = (uint *)(*(long *)(lVar27 + 0x28) + (long)*(int *)(pbVar7 + 5) +
                                (long)iVar2 * 8);
              uVar37 = *(ulong *)(*(long *)(lVar27 + 0x20) + (ulong)*puVar10 * 8);
              if (uVar37 == 0x135c8fa056) {
                uVar14 = puVar10[1];
                if (-1 < (int)uVar14) {
                  pbVar30 = pbVar7 + (int)uVar14;
                }
                break;
              }
              iVar4 = iVar2 + -1;
              if (uVar37 < 0x135c8fa057) {
                iVar24 = iVar2 + 1;
                iVar4 = iVar15;
              }
              iVar15 = iVar4;
            } while (iVar24 <= iVar15);
          }
          switch(*pbVar30) {
          case 1:
          case 3:
            uVar14 = (uint)pbVar30[1];
            break;
          case 2:
            uVar14 = (uint)(char)pbVar30[1];
            break;
          case 4:
            uVar14 = (uint)*(short *)(pbVar30 + 1);
            break;
          case 5:
            uVar14 = (uint)*(ushort *)(pbVar30 + 1);
            break;
          case 6:
          case 7:
            uVar14 = *(uint *)(pbVar30 + 1);
            break;
          default:
            uVar14 = 1;
          }
          *(bool *)(*(long *)(*plVar40 + lVar42 * 0x18) + lVar17 * 0x18 + 0x14) = uVar14 != 0;
          uVar14 = (uint)*pbVar28;
          lVar17 = lVar17 + 1;
          if (uVar14 - 0xb < 2) {
            if (*(int *)(pbVar28 + 1) <= lVar17) break;
            goto LAB_710289cd68;
          }
        } while (lVar17 < 0);
      }
      uVar14 = (uint)*pbVar12;
      lVar42 = lVar42 + 1;
      if (uVar14 - 0xb < 2) {
        if (*(int *)(pbVar12 + 1) <= lVar42) break;
        goto LAB_710289c9fc;
      }
    } while (lVar42 < 0);
  }
  pcVar16 = (char *)param_2[1];
  if ((*pcVar16 == '\f') && (iVar15 = *(int *)(pcVar16 + 1) + -1, 0 < *(int *)(pcVar16 + 1))) {
    lVar42 = *param_2;
    iVar24 = 0;
    do {
      iVar2 = iVar15 + iVar24;
      if (iVar2 < 0) {
        iVar2 = iVar2 + 1;
      }
      iVar2 = iVar2 >> 1;
      puVar10 = (uint *)(*(long *)(lVar42 + 0x28) + (long)*(int *)(pcVar16 + 5) + (long)iVar2 * 8);
      uVar37 = *(ulong *)(*(long *)(lVar42 + 0x20) + (ulong)*puVar10 * 8);
      if (uVar37 == 0xd5c726cd0) {
        uVar14 = puVar10[1];
        if ((int)uVar14 < 0) {
          lVar42 = 0;
          pcVar16 = "";
        }
        else {
          pcVar16 = pcVar16 + (int)uVar14;
        }
        goto LAB_710289d2d0;
      }
      iVar4 = iVar2 + -1;
      if (uVar37 < 0xd5c726cd1) {
        iVar24 = iVar2 + 1;
        iVar4 = iVar15;
      }
      iVar15 = iVar4;
    } while (iVar24 <= iVar15);
  }
  pcVar16 = "";
  lVar42 = 0;
LAB_710289d2d0:
  if ((*pcVar16 == '\f') && (iVar15 = *(int *)(pcVar16 + 1) + -1, 0 < *(int *)(pcVar16 + 1))) {
    iVar24 = 0;
    pcVar22 = "";
    do {
      iVar2 = iVar15 + iVar24;
      if (iVar2 < 0) {
        iVar2 = iVar2 + 1;
      }
      iVar2 = iVar2 >> 1;
      puVar10 = (uint *)(*(long *)(lVar42 + 0x28) + (long)*(int *)(pcVar16 + 5) + (long)iVar2 * 8);
      uVar37 = *(ulong *)(*(long *)(lVar42 + 0x20) + (ulong)*puVar10 * 8);
      if (uVar37 == 0x5ec462584) {
        uVar14 = puVar10[1];
        if ((int)uVar14 < 0) goto LAB_710289d378;
        pcVar22 = pcVar16 + (int)uVar14;
        break;
      }
      iVar4 = iVar2 + -1;
      if (uVar37 < 0x5ec462585) {
        iVar24 = iVar2 + 1;
        iVar4 = iVar15;
      }
      iVar15 = iVar4;
    } while (iVar24 <= iVar15);
  }
  else {
LAB_710289d378:
    pcVar22 = "";
  }
  if (*pcVar22 == '\b') {
    uVar46 = *(undefined4 *)(pcVar22 + 1);
  }
  else {
    uVar46 = 0x3f88f5c3;
  }
  *(undefined4 *)(param_1 + 0x80) = uVar46;
  if ((*pcVar16 == '\f') && (iVar15 = *(int *)(pcVar16 + 1) + -1, 0 < *(int *)(pcVar16 + 1))) {
    iVar24 = 0;
    pcVar22 = "";
    do {
      iVar2 = iVar15 + iVar24;
      if (iVar2 < 0) {
        iVar2 = iVar2 + 1;
      }
      iVar2 = iVar2 >> 1;
      puVar10 = (uint *)(*(long *)(lVar42 + 0x28) + (long)*(int *)(pcVar16 + 5) + (long)iVar2 * 8);
      uVar37 = *(ulong *)(*(long *)(lVar42 + 0x20) + (ulong)*puVar10 * 8);
      if (uVar37 == 0x11ed502fd3) {
        uVar14 = puVar10[1];
        if ((int)uVar14 < 0) goto LAB_710289d42c;
        pcVar22 = pcVar16 + (int)uVar14;
        break;
      }
      iVar4 = iVar2 + -1;
      if (uVar37 < 0x11ed502fd4) {
        iVar24 = iVar2 + 1;
        iVar4 = iVar15;
      }
      iVar15 = iVar4;
    } while (iVar24 <= iVar15);
  }
  else {
LAB_710289d42c:
    pcVar22 = "";
  }
  switch(*pcVar22) {
  case '\x01':
  case '\x03':
    uVar14 = (uint)(byte)pcVar22[1];
    break;
  case '\x02':
    uVar14 = (uint)pcVar22[1];
    break;
  case '\x04':
    uVar14 = (uint)*(short *)(pcVar22 + 1);
    break;
  case '\x05':
    uVar14 = (uint)*(ushort *)(pcVar22 + 1);
    break;
  case '\x06':
  case '\a':
    uVar14 = *(uint *)(pcVar22 + 1);
    break;
  default:
    uVar14 = 1;
  }
  *(bool *)(param_1 + 0x84) = uVar14 != 0;
  if ((*pcVar16 == '\f') && (iVar15 = *(int *)(pcVar16 + 1) + -1, 0 < *(int *)(pcVar16 + 1))) {
    iVar24 = 0;
    pcVar22 = "";
    do {
      iVar2 = iVar15 + iVar24;
      if (iVar2 < 0) {
        iVar2 = iVar2 + 1;
      }
      iVar2 = iVar2 >> 1;
      puVar10 = (uint *)(*(long *)(lVar42 + 0x28) + (long)*(int *)(pcVar16 + 5) + (long)iVar2 * 8);
      uVar37 = *(ulong *)(*(long *)(lVar42 + 0x20) + (ulong)*puVar10 * 8);
      if (uVar37 == 0x18cdc1683) {
        uVar14 = puVar10[1];
        if ((int)uVar14 < 0) goto LAB_710289d51c;
        pcVar22 = pcVar16 + (int)uVar14;
        break;
      }
      iVar4 = iVar2 + -1;
      if (uVar37 < 0x18cdc1684) {
        iVar24 = iVar2 + 1;
        iVar4 = iVar15;
      }
      iVar15 = iVar4;
    } while (iVar24 <= iVar15);
  }
  else {
LAB_710289d51c:
    pcVar22 = "";
  }
  if (*pcVar22 == '\b') {
    uVar46 = *(undefined4 *)(pcVar22 + 1);
  }
  else {
    uVar46 = 0x42200000;
  }
  *(undefined4 *)(param_1 + 0x88) = uVar46;
  if ((*pcVar16 == '\f') && (iVar15 = *(int *)(pcVar16 + 1) + -1, 0 < *(int *)(pcVar16 + 1))) {
    iVar24 = 0;
    pcVar22 = "";
    do {
      iVar2 = iVar15 + iVar24;
      if (iVar2 < 0) {
        iVar2 = iVar2 + 1;
      }
      iVar2 = iVar2 >> 1;
      puVar10 = (uint *)(*(long *)(lVar42 + 0x28) + (long)*(int *)(pcVar16 + 5) + (long)iVar2 * 8);
      uVar37 = *(ulong *)(*(long *)(lVar42 + 0x20) + (ulong)*puVar10 * 8);
      if (uVar37 == 0x1fbdb2615) {
        uVar14 = puVar10[1];
        if ((int)uVar14 < 0) goto LAB_710289d5d0;
        pcVar22 = pcVar16 + (int)uVar14;
        break;
      }
      iVar4 = iVar2 + -1;
      if (uVar37 < 0x1fbdb2616) {
        iVar24 = iVar2 + 1;
        iVar4 = iVar15;
      }
      iVar15 = iVar4;
    } while (iVar24 <= iVar15);
  }
  else {
LAB_710289d5d0:
    pcVar22 = "";
  }
  if (*pcVar22 == '\b') {
    uVar46 = *(undefined4 *)(pcVar22 + 1);
  }
  else {
    uVar46 = 0x41f00000;
  }
  *(undefined4 *)(param_1 + 0x8c) = uVar46;
  if ((*pcVar16 == '\f') && (iVar15 = *(int *)(pcVar16 + 1) + -1, 0 < *(int *)(pcVar16 + 1))) {
    iVar24 = 0;
    pcVar22 = "";
    do {
      iVar2 = iVar15 + iVar24;
      if (iVar2 < 0) {
        iVar2 = iVar2 + 1;
      }
      iVar2 = iVar2 >> 1;
      puVar10 = (uint *)(*(long *)(lVar42 + 0x28) + (long)*(int *)(pcVar16 + 5) + (long)iVar2 * 8);
      uVar37 = *(ulong *)(*(long *)(lVar42 + 0x20) + (ulong)*puVar10 * 8);
      if (uVar37 == 0x162d277af) {
        uVar14 = puVar10[1];
        if ((int)uVar14 < 0) goto LAB_710289d680;
        pcVar22 = pcVar16 + (int)uVar14;
        break;
      }
      iVar4 = iVar2 + -1;
      if (uVar37 < 0x162d277b0) {
        iVar24 = iVar2 + 1;
        iVar4 = iVar15;
      }
      iVar15 = iVar4;
    } while (iVar24 <= iVar15);
  }
  else {
LAB_710289d680:
    pcVar22 = "";
  }
  if (*pcVar22 == '\b') {
    uVar46 = *(undefined4 *)(pcVar22 + 1);
  }
  else {
    uVar46 = 0xc3820000;
  }
  *(undefined4 *)(param_1 + 0x90) = uVar46;
  pcVar16 = (char *)param_2[1];
  if ((*pcVar16 == '\f') && (iVar15 = *(int *)(pcVar16 + 1) + -1, 0 < *(int *)(pcVar16 + 1))) {
    lVar42 = *param_2;
    iVar24 = 0;
    pcVar22 = "";
    do {
      iVar2 = iVar15 + iVar24;
      if (iVar2 < 0) {
        iVar2 = iVar2 + 1;
      }
      iVar2 = iVar2 >> 1;
      puVar10 = (uint *)(*(long *)(lVar42 + 0x28) + (long)*(int *)(pcVar16 + 5) + (long)iVar2 * 8);
      uVar37 = *(ulong *)(*(long *)(lVar42 + 0x20) + (ulong)*puVar10 * 8);
      if (uVar37 == 0xd2da5560f) {
        uVar14 = puVar10[1];
        if ((int)uVar14 < 0) goto LAB_710289d748;
        pcVar22 = pcVar16 + (int)uVar14;
        goto LAB_710289d754;
      }
      iVar4 = iVar2 + -1;
      if (uVar37 < 0xd2da55610) {
        iVar24 = iVar2 + 1;
        iVar4 = iVar15;
      }
      iVar15 = iVar4;
    } while (iVar24 <= iVar15);
    lVar42 = 0;
  }
  else {
LAB_710289d748:
    lVar42 = 0;
    pcVar22 = "";
  }
LAB_710289d754:
  if ((*pcVar22 == '\f') && (iVar15 = *(int *)(pcVar22 + 1) + -1, 0 < *(int *)(pcVar22 + 1))) {
    iVar24 = 0;
    pcVar16 = "";
    do {
      iVar2 = iVar15 + iVar24;
      if (iVar2 < 0) {
        iVar2 = iVar2 + 1;
      }
      iVar2 = iVar2 >> 1;
      puVar10 = (uint *)(*(long *)(lVar42 + 0x28) + (long)*(int *)(pcVar22 + 5) + (long)iVar2 * 8);
      uVar37 = *(ulong *)(*(long *)(lVar42 + 0x20) + (ulong)*puVar10 * 8);
      if (uVar37 == 0x5ec462584) {
        uVar14 = puVar10[1];
        if ((int)uVar14 < 0) goto LAB_710289d7e0;
        pcVar16 = pcVar22 + (int)uVar14;
        break;
      }
      iVar4 = iVar2 + -1;
      if (uVar37 < 0x5ec462585) {
        iVar24 = iVar2 + 1;
        iVar4 = iVar15;
      }
      iVar15 = iVar4;
    } while (iVar24 <= iVar15);
  }
  else {
LAB_710289d7e0:
    pcVar16 = "";
  }
  if (*pcVar16 == '\b') {
    uVar46 = *(undefined4 *)(pcVar16 + 1);
  }
  else {
    uVar46 = 0x3f866666;
  }
  *(undefined4 *)(param_1 + 0x94) = uVar46;
  if ((*pcVar22 == '\f') && (iVar15 = *(int *)(pcVar22 + 1) + -1, 0 < *(int *)(pcVar22 + 1))) {
    iVar24 = 0;
    pcVar16 = "";
    do {
      iVar2 = iVar15 + iVar24;
      if (iVar2 < 0) {
        iVar2 = iVar2 + 1;
      }
      iVar2 = iVar2 >> 1;
      puVar10 = (uint *)(*(long *)(lVar42 + 0x28) + (long)*(int *)(pcVar22 + 5) + (long)iVar2 * 8);
      uVar37 = *(ulong *)(*(long *)(lVar42 + 0x20) + (ulong)*puVar10 * 8);
      if (uVar37 == 0x11ed502fd3) {
        uVar14 = puVar10[1];
        if ((int)uVar14 < 0) goto LAB_710289d894;
        pcVar16 = pcVar22 + (int)uVar14;
        break;
      }
      iVar4 = iVar2 + -1;
      if (uVar37 < 0x11ed502fd4) {
        iVar24 = iVar2 + 1;
        iVar4 = iVar15;
      }
      iVar15 = iVar4;
    } while (iVar24 <= iVar15);
  }
  else {
LAB_710289d894:
    pcVar16 = "";
  }
  switch(*pcVar16) {
  case '\x01':
  case '\x03':
    uVar14 = (uint)(byte)pcVar16[1];
    break;
  case '\x02':
    uVar14 = (uint)pcVar16[1];
    break;
  case '\x04':
    uVar14 = (uint)*(short *)(pcVar16 + 1);
    break;
  case '\x05':
    uVar14 = (uint)*(ushort *)(pcVar16 + 1);
    break;
  case '\x06':
  case '\a':
    uVar14 = *(uint *)(pcVar16 + 1);
    break;
  default:
    uVar14 = 1;
  }
  *(bool *)(param_1 + 0x98) = uVar14 != 0;
  if ((*pcVar22 == '\f') && (iVar15 = *(int *)(pcVar22 + 1) + -1, 0 < *(int *)(pcVar22 + 1))) {
    iVar24 = 0;
    pcVar16 = "";
    do {
      iVar2 = iVar15 + iVar24;
      if (iVar2 < 0) {
        iVar2 = iVar2 + 1;
      }
      iVar2 = iVar2 >> 1;
      puVar10 = (uint *)(*(long *)(lVar42 + 0x28) + (long)*(int *)(pcVar22 + 5) + (long)iVar2 * 8);
      uVar37 = *(ulong *)(*(long *)(lVar42 + 0x20) + (ulong)*puVar10 * 8);
      if (uVar37 == 0x18cdc1683) {
        uVar14 = puVar10[1];
        if ((int)uVar14 < 0) goto LAB_710289d984;
        pcVar16 = pcVar22 + (int)uVar14;
        break;
      }
      iVar4 = iVar2 + -1;
      if (uVar37 < 0x18cdc1684) {
        iVar24 = iVar2 + 1;
        iVar4 = iVar15;
      }
      iVar15 = iVar4;
    } while (iVar24 <= iVar15);
  }
  else {
LAB_710289d984:
    pcVar16 = "";
  }
  if (*pcVar16 == '\b') {
    uVar46 = *(undefined4 *)(pcVar16 + 1);
  }
  else {
    uVar46 = 0;
  }
  *(undefined4 *)(param_1 + 0x9c) = uVar46;
  if ((*pcVar22 == '\f') && (iVar15 = *(int *)(pcVar22 + 1) + -1, 0 < *(int *)(pcVar22 + 1))) {
    iVar24 = 0;
    pcVar16 = "";
    do {
      iVar2 = iVar15 + iVar24;
      if (iVar2 < 0) {
        iVar2 = iVar2 + 1;
      }
      iVar2 = iVar2 >> 1;
      puVar10 = (uint *)(*(long *)(lVar42 + 0x28) + (long)*(int *)(pcVar22 + 5) + (long)iVar2 * 8);
      uVar37 = *(ulong *)(*(long *)(lVar42 + 0x20) + (ulong)*puVar10 * 8);
      if (uVar37 == 0x1fbdb2615) {
        uVar14 = puVar10[1];
        if ((int)uVar14 < 0) goto LAB_710289da34;
        pcVar16 = pcVar22 + (int)uVar14;
        break;
      }
      iVar4 = iVar2 + -1;
      if (uVar37 < 0x1fbdb2616) {
        iVar24 = iVar2 + 1;
        iVar4 = iVar15;
      }
      iVar15 = iVar4;
    } while (iVar24 <= iVar15);
  }
  else {
LAB_710289da34:
    pcVar16 = "";
  }
  if (*pcVar16 == '\b') {
    uVar46 = *(undefined4 *)(pcVar16 + 1);
  }
  else {
    uVar46 = 0;
  }
  *(undefined4 *)(param_1 + 0xa0) = uVar46;
  if ((*pcVar22 == '\f') && (iVar15 = *(int *)(pcVar22 + 1) + -1, 0 < *(int *)(pcVar22 + 1))) {
    iVar24 = 0;
    pcVar16 = "";
    do {
      iVar2 = iVar15 + iVar24;
      if (iVar2 < 0) {
        iVar2 = iVar2 + 1;
      }
      iVar2 = iVar2 >> 1;
      puVar10 = (uint *)(*(long *)(lVar42 + 0x28) + (long)*(int *)(pcVar22 + 5) + (long)iVar2 * 8);
      uVar37 = *(ulong *)(*(long *)(lVar42 + 0x20) + (ulong)*puVar10 * 8);
      if (uVar37 == 0x162d277af) {
        uVar14 = puVar10[1];
        if ((int)uVar14 < 0) goto LAB_710289dae4;
        pcVar16 = pcVar22 + (int)uVar14;
        break;
      }
      iVar4 = iVar2 + -1;
      if (uVar37 < 0x162d277b0) {
        iVar24 = iVar2 + 1;
        iVar4 = iVar15;
      }
      iVar15 = iVar4;
    } while (iVar24 <= iVar15);
  }
  else {
LAB_710289dae4:
    pcVar16 = "";
  }
  if (*pcVar16 == '\b') {
    uVar46 = *(undefined4 *)(pcVar16 + 1);
  }
  else {
    uVar46 = 0xc2480000;
  }
  *(undefined4 *)(param_1 + 0xa4) = uVar46;
  pcVar16 = (char *)param_2[1];
  if ((*pcVar16 == '\f') && (iVar15 = *(int *)(pcVar16 + 1) + -1, 0 < *(int *)(pcVar16 + 1))) {
    local_108 = (byte ****)*param_2;
    pbVar12 = &DAT_7104742dbb;
    iVar24 = 0;
    do {
      iVar2 = iVar15 + iVar24;
      if (iVar2 < 0) {
        iVar2 = iVar2 + 1;
      }
      iVar2 = iVar2 >> 1;
      puVar10 = (uint *)((long)local_108[5] + (long)iVar2 * 8 + (long)*(int *)(pcVar16 + 5));
      if (local_108[4][*puVar10] == (byte **)0xdc4cc4d58) {
        uVar14 = puVar10[1];
        if ((int)uVar14 < 0) goto LAB_710289dbb0;
        pbVar12 = (byte *)(pcVar16 + (int)uVar14);
        goto LAB_710289dbbc;
      }
      iVar4 = iVar2 + -1;
      if (local_108[4][*puVar10] < (byte **)0xdc4cc4d59) {
        iVar24 = iVar2 + 1;
        iVar4 = iVar15;
      }
      iVar15 = iVar4;
    } while (iVar24 <= iVar15);
    local_108 = (byte ****)0x0;
  }
  else {
LAB_710289dbb0:
    local_108 = (byte ****)0x0;
    pbVar12 = &DAT_7104742dbb;
  }
LAB_710289dbbc:
  if (*pbVar12 - 0xb < 2) {
    iVar15 = *(int *)(pbVar12 + 1);
  }
  else {
    iVar15 = 0;
  }
  puVar39 = *(ulong **)(param_1 + 0xa8);
  puVar38 = *(ulong **)(param_1 + 0xb0);
  uVar37 = (ulong)iVar15;
  lVar42 = (long)puVar38 - (long)puVar39 >> 3;
  plVar40 = (long *)(param_1 + 0xa8);
  if (uVar37 <= (ulong)(lVar42 * -0x5555555555555555)) {
    if (lVar42 * -0x5555555555555555 - uVar37 != 0) {
      while (puVar3 = puVar38, puVar39 + uVar37 * 3 != puVar3) {
        puVar38 = puVar3 + -3;
        uVar41 = *puVar38;
        if (uVar41 != 0) {
          puVar3[-2] = uVar41;
          FUN_710392eb40(uVar41);
        }
      }
      *(ulong **)(param_1 + 0xb0) = puVar39 + uVar37 * 3;
    }
    goto LAB_710289de3c;
  }
  uVar41 = uVar37 + lVar42 * 0x5555555555555555;
  if (uVar41 <= (ulong)((*(long *)(param_1 + 0xb8) - (long)puVar38 >> 3) * -0x5555555555555555)) {
    uVar37 = uVar41;
    if ((uVar41 & 1) != 0) {
      puVar38[1] = 0;
      puVar38[2] = 0;
      *puVar38 = 0;
      puVar38 = (ulong *)(*(long *)(param_1 + 0xb0) + 0x18);
      uVar37 = uVar41 - 1;
      *(ulong **)(param_1 + 0xb0) = puVar38;
    }
    if (uVar41 != 1) {
      do {
        puVar38[1] = 0;
        puVar38[2] = 0;
        uVar37 = uVar37 - 2;
        *puVar38 = 0;
        lVar42 = *(long *)(param_1 + 0xb0);
        *(long *)(param_1 + 0xb0) = lVar42 + 0x18;
        *(undefined8 *)(lVar42 + 0x20) = 0;
        *(undefined8 *)(lVar42 + 0x28) = 0;
        *(undefined8 *)(lVar42 + 0x18) = 0;
        puVar38 = (ulong *)(*(long *)(param_1 + 0xb0) + 0x18);
        *(ulong **)(param_1 + 0xb0) = puVar38;
      } while (uVar37 != 0);
    }
    goto LAB_710289de3c;
  }
  if (iVar15 < 0) {
LAB_710289f4d4:
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_length_error();
  }
  lVar17 = *(long *)(param_1 + 0xb8) - (long)puVar39 >> 3;
  uVar45 = 0xaaaaaaaaaaaaaaa;
  if ((ulong)(lVar17 * -0x5555555555555555) < 0x555555555555555) {
    uVar18 = lVar17 * 0x5555555555555556;
    uVar45 = uVar37;
    if (uVar37 <= uVar18) {
      uVar45 = uVar18;
    }
    if (uVar45 != 0) goto LAB_710289dc50;
LAB_710289dcb4:
    lVar17 = 0;
  }
  else {
LAB_710289dc50:
    ppplVar19 = (long ***)(uVar45 * 0x18);
    if (ppplVar19 == (long ***)0x0) {
      ppplVar19 = (long ***)0x1;
    }
    pbVar7 = pbVar12;
    lVar17 = FUN_710392e290(0x10,ppplVar19,param_3,(byte ****)param_4,(long ****)param_5,pbVar12,
                            param_7,param_8);
    if (lVar17 == 0) {
      if (DAT_7105332f00 != (long *)0x0) {
        local_8c[0] = 0;
        pppplVar25 = &local_98;
        local_98 = ppplVar19;
        uVar18 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,local_8c);
        if (((uVar18 & 1) != 0) &&
           (lVar17 = FUN_710392e290(0x10,ppplVar19,pppplVar25,(byte ****)param_4,(long ****)param_5,
                                    pbVar7,param_7,param_8), lVar17 != 0)) goto LAB_710289dcb8;
      }
      goto LAB_710289dcb4;
    }
  }
LAB_710289dcb8:
  pvVar43 = (void *)(lVar17 + lVar42 * 8);
  param_3 = (long ****)(uVar41 * 0x18);
  lVar42 = lVar17 + uVar45 * 0x18;
  memset(pvVar43,0,(size_t)param_3);
  lVar17 = lVar17 + uVar37 * 0x18;
  if (puVar38 == puVar39) {
    *(void **)(param_1 + 0xa8) = pvVar43;
    *(long *)(param_1 + 0xb0) = lVar17;
    *(long *)(param_1 + 0xb8) = lVar42;
  }
  else {
    lVar27 = 0;
    do {
      *(undefined8 *)((long)pvVar43 + lVar27 + -0x18) = 0;
      *(undefined8 *)((long)pvVar43 + lVar27 + -0x10) = 0;
      *(undefined8 *)((long)pvVar43 + lVar27 + -8) = 0;
      *(undefined8 *)((long)pvVar43 + lVar27 + -0x18) =
           *(undefined8 *)((long)puVar38 + lVar27 + -0x18);
      *(undefined8 *)((long)pvVar43 + lVar27 + -0x10) =
           *(undefined8 *)((long)puVar38 + lVar27 + -0x10);
      lVar23 = lVar27 + -0x18;
      *(undefined8 *)((long)pvVar43 + lVar27 + -8) = *(undefined8 *)((long)puVar38 + lVar27 + -8);
      *(undefined8 *)((long)puVar38 + lVar27 + -0x10) = 0;
      *(undefined8 *)((long)puVar38 + lVar27 + -8) = 0;
      *(undefined8 *)((long)puVar38 + lVar27 + -0x18) = 0;
      lVar27 = lVar23;
    } while ((long)puVar39 - (long)puVar38 != lVar23);
    puVar39 = *(ulong **)(param_1 + 0xa8);
    puVar38 = *(ulong **)(param_1 + 0xb0);
    *(long *)(param_1 + 0xa8) = (long)pvVar43 + lVar23;
    *(long *)(param_1 + 0xb0) = lVar17;
    *(long *)(param_1 + 0xb8) = lVar42;
    while (puVar3 = puVar38, puVar3 != puVar39) {
      puVar38 = puVar3 + -3;
      uVar37 = *puVar38;
      if (uVar37 != 0) {
        puVar3[-2] = uVar37;
        FUN_710392eb40(uVar37);
      }
    }
  }
  if (puVar39 != (ulong *)0x0) {
    FUN_710392eb40((ulong)puVar39);
  }
LAB_710289de3c:
  uVar14 = (uint)*pbVar12;
  if ((*pbVar12 - 0xb < 2) && (0 < *(int *)(pbVar12 + 1))) {
    lVar42 = 0;
LAB_710289ded0:
    do {
      iVar15 = (int)lVar42;
      if (iVar15 < 0) {
LAB_710289df08:
        ppppbVar9 = (byte ****)0x0;
        pppplVar25 = (long ****)&DAT_7104742dbb;
      }
      else {
        pppplVar25 = (long ****)&DAT_7104742dbb;
        ppppbVar9 = (byte ****)0x0;
        if (uVar14 == 0xb) {
          if (*(int *)(pbVar12 + 1) <= iVar15) goto LAB_710289df08;
          pppplVar25 = (long ****)(pbVar12 + *(int *)(pbVar12 + (long)iVar15 * 4 + 5));
          ppppbVar9 = local_108;
        }
      }
      param_5 = (uint *)&DAT_7104742dbb;
      if ((*(byte *)pppplVar25 == 0xc) &&
         (iVar15 = *(int *)((long)pppplVar25 + 1) + -1, 0 < *(int *)((long)pppplVar25 + 1))) {
        iVar24 = 0;
        do {
          iVar2 = iVar15 + iVar24;
          if (iVar2 < 0) {
            iVar2 = iVar2 + 1;
          }
          iVar2 = iVar2 >> 1;
          puVar10 = (uint *)((long)ppppbVar9[5] +
                            (long)iVar2 * 8 + (long)*(int *)((long)pppplVar25 + 5));
          if (ppppbVar9[4][*puVar10] == (byte **)0xf7720607e) {
            uVar37 = (ulong)(int)puVar10[1];
            param_4 = (uint *)(byte ****)0x0;
            if ((uVar37 & 0x80000000) == 0) {
              param_4 = (uint *)ppppbVar9;
              param_5 = (uint *)((long)pppplVar25 + uVar37);
            }
            goto LAB_710289df78;
          }
          iVar4 = iVar2 + -1;
          if (ppppbVar9[4][*puVar10] < (byte **)0xf7720607f) {
            iVar24 = iVar2 + 1;
            iVar4 = iVar15;
          }
          iVar15 = iVar4;
        } while (iVar24 <= iVar15);
      }
      param_4 = (uint *)(byte ****)0x0;
LAB_710289df78:
      lVar17 = *plVar40;
      puVar5 = (undefined8 *)(lVar17 + lVar42 * 0x18);
      if (*(byte *)param_5 - 0xb < 2) {
        iVar15 = *(int *)((long)param_5 + 1);
      }
      else {
        iVar15 = 0;
      }
      plVar34 = (long *)(lVar17 + lVar42 * 0x18 + 8);
      puVar20 = (undefined8 *)*plVar34;
      pvVar43 = (void *)*puVar5;
      sVar44 = (long)puVar20 - (long)pvVar43;
      uVar37 = (ulong)iVar15;
      lVar27 = (long)sVar44 >> 3;
      if ((ulong)(lVar27 * -0x5555555555555555) < uVar37) {
        plVar36 = (long *)(lVar17 + lVar42 * 0x18 + 0x10);
        lVar17 = *plVar36;
        uVar41 = uVar37 + lVar27 * 0x5555555555555555;
        if ((ulong)((lVar17 - (long)puVar20 >> 3) * -0x5555555555555555) < uVar41) {
          if (iVar15 < 0) {
                    /* WARNING: Subroutine does not return */
            std::__vector_base_common<true>::__throw_length_error();
          }
          lVar17 = lVar17 - (long)pvVar43 >> 3;
          uVar45 = 0xaaaaaaaaaaaaaaa;
          if ((ulong)(lVar17 * -0x5555555555555555) < 0x555555555555555) {
            uVar18 = lVar17 * 0x5555555555555556;
            uVar45 = uVar37;
            if (uVar37 <= uVar18) {
              uVar45 = uVar18;
            }
            if (uVar45 != 0) goto LAB_710289e028;
            uVar45 = 0;
            lVar17 = 0;
          }
          else {
LAB_710289e028:
            ppplVar19 = (long ***)(uVar45 * 0x18);
            if (ppplVar19 == (long ***)0x0) {
              ppplVar19 = (long ***)0x1;
            }
            ppppbVar9 = (byte ****)param_4;
            pppplVar25 = (long ****)param_5;
            pbVar7 = pbVar12;
            lVar17 = FUN_710392e290(0x10,ppplVar19,(long ****)0xf7720607e,(byte ****)param_4,
                                    (long ****)param_5,pbVar12,param_7,param_8);
            if (lVar17 == 0) {
              if (DAT_7105332f00 != (long *)0x0) {
                local_8c[0] = 0;
                pppplVar8 = &local_98;
                local_98 = ppplVar19;
                uVar18 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,local_8c);
                if (((uVar18 & 1) != 0) &&
                   (lVar17 = FUN_710392e290(0x10,ppplVar19,pppplVar8,ppppbVar9,pppplVar25,pbVar7,
                                            param_7,param_8), lVar17 != 0)) goto LAB_710289e09c;
              }
              lVar17 = 0;
            }
          }
LAB_710289e09c:
          pvVar6 = (void *)(lVar17 + lVar27 * 8);
          memset(pvVar6,0,uVar41 * 0x18);
          lVar27 = SUB168(SEXT816((long)sVar44) * SEXT816(-0x2aaaaaaaaaaaaaab),8);
          pvVar6 = (void *)((long)pvVar6 + ((lVar27 >> 2) - (lVar27 >> 0x3f)) * 0x18);
          if (0 < (long)sVar44) {
            memcpy(pvVar6,pvVar43,sVar44);
          }
          *puVar5 = pvVar6;
          *plVar34 = lVar17 + uVar37 * 0x18;
          *plVar36 = lVar17 + uVar45 * 0x18;
          if (pvVar43 != (void *)0x0) {
            FUN_710392eb40((ulong)pvVar43);
          }
        }
        else {
          uVar37 = uVar41;
          if ((uVar41 & 1) != 0) {
            puVar20[1] = 0;
            puVar20[2] = 0;
            uVar37 = uVar41 - 1;
            *puVar20 = 0;
            puVar20 = (undefined8 *)(*plVar34 + 0x18);
            *plVar34 = (long)puVar20;
          }
          if (uVar41 != 1) {
            do {
              puVar20[1] = 0;
              puVar20[2] = 0;
              uVar37 = uVar37 - 2;
              *puVar20 = 0;
              lVar17 = *plVar34;
              *plVar34 = lVar17 + 0x18;
              *(undefined8 *)(lVar17 + 0x20) = 0;
              *(undefined8 *)(lVar17 + 0x28) = 0;
              *(undefined8 *)(lVar17 + 0x18) = 0;
              puVar20 = (undefined8 *)(*plVar34 + 0x18);
              *plVar34 = (long)puVar20;
            } while (uVar37 != 0);
          }
        }
      }
      else if (lVar27 * -0x5555555555555555 - uVar37 != 0) {
        *plVar34 = (long)((long)pvVar43 + uVar37 * 0x18);
      }
      param_3 = (long ****)0xf7720607e;
      uVar14 = (uint)*(byte *)param_5;
      if ((*(byte *)param_5 - 0xb < 2) && (0 < *(int *)((long)param_5 + 1))) {
        lVar17 = 0;
LAB_710289e200:
        do {
          iVar15 = (int)lVar17;
          if (iVar15 < 0) {
LAB_710289e238:
            ppppbVar9 = (byte ****)0x0;
            pppplVar25 = (long ****)&DAT_7104742dbb;
          }
          else {
            pppplVar25 = (long ****)&DAT_7104742dbb;
            ppppbVar9 = (byte ****)0x0;
            if (uVar14 == 0xb) {
              if (*(int *)((long)param_5 + 1) <= iVar15) goto LAB_710289e238;
              pppplVar25 = (long ****)
                           ((long)param_5 + (long)*(int *)((long)param_5 + (long)iVar15 * 4 + 5));
              ppppbVar9 = (byte ****)param_4;
            }
          }
          if ((*(byte *)pppplVar25 == 0xc) &&
             (iVar15 = *(int *)((long)pppplVar25 + 1) + -1, 0 < *(int *)((long)pppplVar25 + 1))) {
            iVar24 = 0;
            do {
              iVar2 = iVar15 + iVar24;
              if (iVar2 < 0) {
                iVar2 = iVar2 + 1;
              }
              iVar2 = iVar2 >> 1;
              puVar10 = (uint *)((long)ppppbVar9[5] +
                                (long)iVar2 * 8 + (long)*(int *)((long)pppplVar25 + 5));
              if (ppppbVar9[4][*puVar10] == (byte **)0xceb6ad780) {
                uVar14 = puVar10[1];
                if (-1 < (int)uVar14) {
                  pppplVar8 = (long ****)((long)pppplVar25 + (long)(int)uVar14);
                  ppppbVar31 = ppppbVar9;
                  goto LAB_710289e2c0;
                }
                break;
              }
              iVar4 = iVar2 + -1;
              if (ppppbVar9[4][*puVar10] < (byte **)0xceb6ad781) {
                iVar24 = iVar2 + 1;
                iVar4 = iVar15;
              }
              iVar15 = iVar4;
            } while (iVar24 <= iVar15);
          }
          ppppbVar31 = (byte ****)0x0;
          pppplVar8 = (long ****)&DAT_7104742dbb;
LAB_710289e2c0:
          if (*(byte *)pppplVar8 == 9) {
            ppbVar32 = ppppbVar31[4][*(int *)((long)pppplVar8 + 1)];
          }
          else {
            ppbVar32 = (byte **)0x0;
          }
          *(byte ***)(*(long *)(*plVar40 + lVar42 * 0x18) + lVar17 * 0x18) = ppbVar32;
          pppplVar8 = (long ****)&DAT_7104742dbb;
          if ((*(byte *)pppplVar25 == 0xc) &&
             (iVar15 = *(int *)((long)pppplVar25 + 1) + -1, 0 < *(int *)((long)pppplVar25 + 1))) {
            iVar24 = 0;
            do {
              iVar2 = iVar15 + iVar24;
              if (iVar2 < 0) {
                iVar2 = iVar2 + 1;
              }
              iVar2 = iVar2 >> 1;
              puVar10 = (uint *)((long)ppppbVar9[5] +
                                (long)iVar2 * 8 + (long)*(int *)((long)pppplVar25 + 5));
              if (ppppbVar9[4][*puVar10] == (byte **)0x18cdc1683) {
                uVar14 = puVar10[1];
                if (-1 < (int)uVar14) {
                  pppplVar8 = (long ****)((long)pppplVar25 + (long)(int)uVar14);
                }
                break;
              }
              iVar4 = iVar2 + -1;
              if (ppppbVar9[4][*puVar10] < (byte **)0x18cdc1684) {
                iVar24 = iVar2 + 1;
                iVar4 = iVar15;
              }
              iVar15 = iVar4;
            } while (iVar24 <= iVar15);
          }
          uVar46 = 0x3f800000;
          if (*(byte *)pppplVar8 == 8) {
            uVar46 = *(undefined4 *)((long)pppplVar8 + 1);
          }
          *(undefined4 *)(*(long *)(*plVar40 + lVar42 * 0x18) + lVar17 * 0x18 + 8) = uVar46;
          pppplVar8 = (long ****)&DAT_7104742dbb;
          if ((*(byte *)pppplVar25 == 0xc) &&
             (iVar15 = *(int *)((long)pppplVar25 + 1) + -1, 0 < *(int *)((long)pppplVar25 + 1))) {
            iVar24 = 0;
            do {
              iVar2 = iVar15 + iVar24;
              if (iVar2 < 0) {
                iVar2 = iVar2 + 1;
              }
              iVar2 = iVar2 >> 1;
              puVar10 = (uint *)((long)ppppbVar9[5] +
                                (long)iVar2 * 8 + (long)*(int *)((long)pppplVar25 + 5));
              if (ppppbVar9[4][*puVar10] == (byte **)0x1fbdb2615) {
                uVar14 = puVar10[1];
                if (-1 < (int)uVar14) {
                  pppplVar8 = (long ****)((long)pppplVar25 + (long)(int)uVar14);
                }
                break;
              }
              iVar4 = iVar2 + -1;
              if (ppppbVar9[4][*puVar10] < (byte **)0x1fbdb2616) {
                iVar24 = iVar2 + 1;
                iVar4 = iVar15;
              }
              iVar15 = iVar4;
            } while (iVar24 <= iVar15);
          }
          uVar46 = 0x3e3851ec;
          if (*(byte *)pppplVar8 == 8) {
            uVar46 = *(undefined4 *)((long)pppplVar8 + 1);
          }
          *(undefined4 *)(*(long *)(*plVar40 + lVar42 * 0x18) + lVar17 * 0x18 + 0xc) = uVar46;
          pppplVar8 = (long ****)&DAT_7104742dbb;
          if ((*(byte *)pppplVar25 == 0xc) &&
             (iVar15 = *(int *)((long)pppplVar25 + 1) + -1, 0 < *(int *)((long)pppplVar25 + 1))) {
            iVar24 = 0;
            do {
              iVar2 = iVar15 + iVar24;
              if (iVar2 < 0) {
                iVar2 = iVar2 + 1;
              }
              iVar2 = iVar2 >> 1;
              puVar10 = (uint *)((long)ppppbVar9[5] +
                                (long)iVar2 * 8 + (long)*(int *)((long)pppplVar25 + 5));
              if (ppppbVar9[4][*puVar10] == (byte **)0x162d277af) {
                uVar14 = puVar10[1];
                if (-1 < (int)uVar14) {
                  pppplVar8 = (long ****)((long)pppplVar25 + (long)(int)uVar14);
                }
                break;
              }
              iVar4 = iVar2 + -1;
              if (ppppbVar9[4][*puVar10] < (byte **)0x162d277b0) {
                iVar24 = iVar2 + 1;
                iVar4 = iVar15;
              }
              iVar15 = iVar4;
            } while (iVar24 <= iVar15);
          }
          uVar46 = 0xc2680000;
          if (*(byte *)pppplVar8 == 8) {
            uVar46 = *(undefined4 *)((long)pppplVar8 + 1);
          }
          *(undefined4 *)(*(long *)(*plVar40 + lVar42 * 0x18) + lVar17 * 0x18 + 0x10) = uVar46;
          pppplVar8 = (long ****)&DAT_7104742dbb;
          if ((*(byte *)pppplVar25 == 0xc) &&
             (iVar15 = *(int *)((long)pppplVar25 + 1) + -1, 0 < *(int *)((long)pppplVar25 + 1))) {
            iVar24 = 0;
            do {
              iVar2 = iVar15 + iVar24;
              if (iVar2 < 0) {
                iVar2 = iVar2 + 1;
              }
              iVar2 = iVar2 >> 1;
              puVar10 = (uint *)((long)ppppbVar9[5] +
                                (long)iVar2 * 8 + (long)*(int *)((long)pppplVar25 + 5));
              if (ppppbVar9[4][*puVar10] == (byte **)0x56177eb68) {
                uVar14 = puVar10[1];
                if (-1 < (int)uVar14) {
                  pppplVar8 = (long ****)((long)pppplVar25 + (long)(int)uVar14);
                }
                break;
              }
              iVar4 = iVar2 + -1;
              if (ppppbVar9[4][*puVar10] < (byte **)0x56177eb69) {
                iVar24 = iVar2 + 1;
                iVar4 = iVar15;
              }
              iVar15 = iVar4;
            } while (iVar24 <= iVar15);
          }
          uVar46 = 0;
          if (*(byte *)pppplVar8 == 8) {
            uVar46 = *(undefined4 *)((long)pppplVar8 + 1);
          }
          lVar27 = lVar17 * 0x18;
          lVar17 = lVar17 + 1;
          *(undefined4 *)(*(long *)(*plVar40 + lVar42 * 0x18) + lVar27 + 0x14) = uVar46;
          uVar14 = (uint)*(byte *)param_5;
          if (uVar14 - 0xb < 2) {
            if (*(int *)((long)param_5 + 1) <= lVar17) break;
            goto LAB_710289e200;
          }
        } while (lVar17 < 0);
      }
      uVar14 = (uint)*pbVar12;
      lVar42 = lVar42 + 1;
      if (uVar14 - 0xb < 2) {
        if (*(int *)(pbVar12 + 1) <= lVar42) break;
        goto LAB_710289ded0;
      }
    } while (lVar42 < 0);
  }
  pcVar16 = (char *)param_2[1];
  if ((*pcVar16 == '\f') && (iVar15 = *(int *)(pcVar16 + 1) + -1, 0 < *(int *)(pcVar16 + 1))) {
    local_b8 = *param_2;
    pbVar7 = &DAT_7104742dbb;
    iVar24 = 0;
    do {
      iVar2 = iVar15 + iVar24;
      if (iVar2 < 0) {
        iVar2 = iVar2 + 1;
      }
      iVar2 = iVar2 >> 1;
      puVar10 = (uint *)(*(long *)(local_b8 + 0x28) + (long)*(int *)(pcVar16 + 5) + (long)iVar2 * 8)
      ;
      uVar37 = *(ulong *)(*(long *)(local_b8 + 0x20) + (ulong)*puVar10 * 8);
      if (uVar37 == 0xd5750d646) {
        uVar14 = puVar10[1];
        if ((int)uVar14 < 0) goto LAB_710289e6b8;
        pbVar7 = (byte *)(pcVar16 + (int)uVar14);
        goto LAB_710289e6c4;
      }
      iVar4 = iVar2 + -1;
      if (uVar37 < 0xd5750d647) {
        iVar24 = iVar2 + 1;
        iVar4 = iVar15;
      }
      iVar15 = iVar4;
    } while (iVar24 <= iVar15);
    local_b8 = 0;
  }
  else {
LAB_710289e6b8:
    local_b8 = 0;
    pbVar7 = &DAT_7104742dbb;
  }
LAB_710289e6c4:
  if (*pbVar7 - 0xb < 2) {
    iVar15 = *(int *)(pbVar7 + 1);
  }
  else {
    iVar15 = 0;
  }
  uVar37 = (ulong)iVar15;
  lVar42 = (long)*(ulong **)(param_1 + 200) - *(long *)(param_1 + 0xc0) >> 3;
  uVar41 = lVar42 * -0x5555555555555555;
  plVar40 = (long *)(param_1 + 0xc0);
  if (uVar41 < uVar37) {
    FUN_710289f830(plVar40,uVar37 + lVar42 * 0x5555555555555555,param_3,(byte ****)param_4,
                   (long ****)param_5,pbVar12,param_7,param_8);
  }
  else if (uVar41 - uVar37 != 0) {
    puVar39 = (ulong *)(*(long *)(param_1 + 0xc0) + uVar37 * 0x18);
    puVar38 = *(ulong **)(param_1 + 200);
    while (puVar3 = puVar38, puVar39 != puVar3) {
      puVar38 = puVar3 + -3;
      uVar37 = *puVar38;
      if (uVar37 != 0) {
        puVar3[-2] = uVar37;
        FUN_710392eb40(uVar37);
      }
    }
    *(ulong **)(param_1 + 200) = puVar39;
  }
  uVar14 = (uint)*pbVar7;
  if ((*pbVar7 - 0xb < 2) && (0 < *(int *)(pbVar7 + 1))) {
    lVar42 = 0;
LAB_710289e7c0:
    do {
      iVar15 = (int)lVar42;
      if (iVar15 < 0) {
LAB_710289e7fc:
        lVar17 = 0;
        pbVar28 = &DAT_7104742dbb;
      }
      else {
        lVar17 = 0;
        pbVar28 = &DAT_7104742dbb;
        if (uVar14 == 0xb) {
          if (*(int *)(pbVar7 + 1) <= iVar15) goto LAB_710289e7fc;
          pbVar28 = pbVar7 + *(int *)(pbVar7 + (long)iVar15 * 4 + 5);
          lVar17 = local_b8;
        }
      }
      pbVar30 = &DAT_7104742dbb;
      if ((*pbVar28 == 0xc) && (iVar15 = *(int *)(pbVar28 + 1) + -1, 0 < *(int *)(pbVar28 + 1))) {
        iVar24 = 0;
        do {
          iVar2 = iVar15 + iVar24;
          if (iVar2 < 0) {
            iVar2 = iVar2 + 1;
          }
          iVar2 = iVar2 >> 1;
          puVar10 = (uint *)(*(long *)(lVar17 + 0x28) + (long)*(int *)(pbVar28 + 5) +
                            (long)iVar2 * 8);
          uVar37 = *(ulong *)(*(long *)(lVar17 + 0x20) + (ulong)*puVar10 * 8);
          if (uVar37 == 0xf7720607e) {
            uVar37 = (ulong)(int)puVar10[1];
            lVar27 = 0;
            if ((uVar37 & 0x80000000) == 0) {
              lVar27 = lVar17;
              pbVar30 = pbVar28 + uVar37;
            }
            goto LAB_710289e86c;
          }
          iVar4 = iVar2 + -1;
          if (uVar37 < 0xf7720607f) {
            iVar24 = iVar2 + 1;
            iVar4 = iVar15;
          }
          iVar15 = iVar4;
        } while (iVar24 <= iVar15);
      }
      lVar27 = 0;
LAB_710289e86c:
      plVar34 = (long *)(*plVar40 + lVar42 * 0x18);
      if (*pbVar30 - 0xb < 2) {
        iVar15 = *(int *)(pbVar30 + 1);
      }
      else {
        iVar15 = 0;
      }
      plVar36 = (long *)(*plVar40 + lVar42 * 0x18 + 8);
      lVar17 = *plVar34;
      uVar37 = (ulong)iVar15;
      lVar23 = *plVar36 - lVar17 >> 3;
      uVar41 = lVar23 * -0x5555555555555555;
      if (uVar41 < uVar37) {
        FUN_710289faa0(plVar34,uVar37 + lVar23 * 0x5555555555555555,param_3,(byte ****)param_4,
                       (long ****)param_5,pbVar12,param_7,param_8);
      }
      else if (uVar41 - uVar37 != 0) {
        *plVar36 = lVar17 + uVar37 * 0x18;
      }
      uVar14 = (uint)*pbVar30;
      if ((*pbVar30 - 0xb < 2) && (0 < *(int *)(pbVar30 + 1))) {
        lVar17 = 0;
LAB_710289e904:
        do {
          iVar15 = (int)lVar17;
          if (iVar15 < 0) {
LAB_710289e93c:
            lVar23 = 0;
            pbVar28 = &DAT_7104742dbb;
          }
          else {
            lVar23 = 0;
            pbVar28 = &DAT_7104742dbb;
            if (uVar14 == 0xb) {
              if (*(int *)(pbVar30 + 1) <= iVar15) goto LAB_710289e93c;
              pbVar28 = pbVar30 + *(int *)(pbVar30 + (long)iVar15 * 4 + 5);
              lVar23 = lVar27;
            }
          }
          if ((*pbVar28 == 0xc) && (iVar15 = *(int *)(pbVar28 + 1) + -1, 0 < *(int *)(pbVar28 + 1)))
          {
            iVar24 = 0;
            do {
              iVar2 = iVar15 + iVar24;
              if (iVar2 < 0) {
                iVar2 = iVar2 + 1;
              }
              iVar2 = iVar2 >> 1;
              puVar10 = (uint *)(*(long *)(lVar23 + 0x28) + (long)*(int *)(pbVar28 + 5) +
                                (long)iVar2 * 8);
              uVar37 = *(ulong *)(*(long *)(lVar23 + 0x20) + (ulong)*puVar10 * 8);
              if (uVar37 == 0x14ea145397) {
                uVar14 = puVar10[1];
                if (-1 < (int)uVar14) {
                  pbVar35 = pbVar28 + (int)uVar14;
                  lVar33 = lVar23;
                  goto LAB_710289e9c4;
                }
                break;
              }
              iVar4 = iVar2 + -1;
              if (uVar37 < 0x14ea145398) {
                iVar24 = iVar2 + 1;
                iVar4 = iVar15;
              }
              iVar15 = iVar4;
            } while (iVar24 <= iVar15);
          }
          lVar33 = 0;
          pbVar35 = &DAT_7104742dbb;
LAB_710289e9c4:
          if (*pbVar35 == 9) {
            uVar29 = *(undefined8 *)(*(long *)(lVar33 + 0x20) + (long)*(int *)(pbVar35 + 1) * 8);
          }
          else {
            uVar29 = 0;
          }
          *(undefined8 *)(*(long *)(*plVar40 + lVar42 * 0x18) + lVar17 * 0x18) = uVar29;
          if ((*pbVar28 == 0xc) && (iVar15 = *(int *)(pbVar28 + 1) + -1, 0 < *(int *)(pbVar28 + 1)))
          {
            iVar24 = 0;
            do {
              iVar2 = iVar15 + iVar24;
              if (iVar2 < 0) {
                iVar2 = iVar2 + 1;
              }
              iVar2 = iVar2 >> 1;
              puVar10 = (uint *)(*(long *)(lVar23 + 0x28) + (long)*(int *)(pbVar28 + 5) +
                                (long)iVar2 * 8);
              uVar37 = *(ulong *)(*(long *)(lVar23 + 0x20) + (ulong)*puVar10 * 8);
              if (uVar37 == 0x149675764c) {
                uVar14 = puVar10[1];
                if (-1 < (int)uVar14) {
                  pbVar35 = pbVar28 + (int)uVar14;
                  lVar33 = lVar23;
                  goto LAB_710289ea7c;
                }
                break;
              }
              iVar4 = iVar2 + -1;
              if (uVar37 < 0x149675764d) {
                iVar24 = iVar2 + 1;
                iVar4 = iVar15;
              }
              iVar15 = iVar4;
            } while (iVar24 <= iVar15);
          }
          lVar33 = 0;
          pbVar35 = &DAT_7104742dbb;
LAB_710289ea7c:
          if (*pbVar35 == 9) {
            uVar29 = *(undefined8 *)(*(long *)(lVar33 + 0x20) + (long)*(int *)(pbVar35 + 1) * 8);
          }
          else {
            uVar29 = 0;
          }
          *(undefined8 *)(*(long *)(*plVar40 + lVar42 * 0x18) + lVar17 * 0x18 + 8) = uVar29;
          if ((*pbVar28 == 0xc) && (iVar15 = *(int *)(pbVar28 + 1) + -1, 0 < *(int *)(pbVar28 + 1)))
          {
            iVar24 = 0;
            do {
              iVar2 = iVar15 + iVar24;
              if (iVar2 < 0) {
                iVar2 = iVar2 + 1;
              }
              iVar2 = iVar2 >> 1;
              puVar10 = (uint *)(*(long *)(lVar23 + 0x28) + (long)*(int *)(pbVar28 + 5) +
                                (long)iVar2 * 8);
              uVar37 = *(ulong *)(*(long *)(lVar23 + 0x20) + (ulong)*puVar10 * 8);
              if (uVar37 == 0x140b7a973a) {
                uVar14 = puVar10[1];
                if (-1 < (int)uVar14) {
                  pbVar28 = pbVar28 + (int)uVar14;
                  goto LAB_710289eb30;
                }
                break;
              }
              iVar4 = iVar2 + -1;
              if (uVar37 < 0x140b7a973b) {
                iVar24 = iVar2 + 1;
                iVar4 = iVar15;
              }
              iVar15 = iVar4;
            } while (iVar24 <= iVar15);
          }
          lVar23 = 0;
          pbVar28 = &DAT_7104742dbb;
LAB_710289eb30:
          if (*pbVar28 == 9) {
            uVar29 = *(undefined8 *)(*(long *)(lVar23 + 0x20) + (long)*(int *)(pbVar28 + 1) * 8);
          }
          else {
            uVar29 = 0;
          }
          lVar23 = lVar17 * 0x18;
          lVar17 = lVar17 + 1;
          *(undefined8 *)(*(long *)(*plVar40 + lVar42 * 0x18) + lVar23 + 0x10) = uVar29;
          uVar14 = (uint)*pbVar30;
          if (uVar14 - 0xb < 2) {
            if (*(int *)(pbVar30 + 1) <= lVar17) break;
            goto LAB_710289e904;
          }
        } while (lVar17 < 0);
      }
      uVar14 = (uint)*pbVar7;
      lVar42 = lVar42 + 1;
      if (uVar14 - 0xb < 2) {
        if (*(int *)(pbVar7 + 1) <= lVar42) break;
        goto LAB_710289e7c0;
      }
    } while (lVar42 < 0);
  }
  pcVar16 = (char *)param_2[1];
  if ((*pcVar16 == '\f') && (iVar15 = *(int *)(pcVar16 + 1) + -1, 0 < *(int *)(pcVar16 + 1))) {
    local_b8 = *param_2;
    pbVar7 = &DAT_7104742dbb;
    iVar24 = 0;
    do {
      iVar2 = iVar15 + iVar24;
      if (iVar2 < 0) {
        iVar2 = iVar2 + 1;
      }
      iVar2 = iVar2 >> 1;
      puVar10 = (uint *)(*(long *)(local_b8 + 0x28) + (long)*(int *)(pcVar16 + 5) + (long)iVar2 * 8)
      ;
      uVar37 = *(ulong *)(*(long *)(local_b8 + 0x20) + (ulong)*puVar10 * 8);
      if (uVar37 == 0x1035f279bd) {
        uVar14 = puVar10[1];
        if ((int)uVar14 < 0) goto LAB_710289ec7c;
        pbVar7 = (byte *)(pcVar16 + (int)uVar14);
        goto LAB_710289ec88;
      }
      iVar4 = iVar2 + -1;
      if (uVar37 < 0x1035f279be) {
        iVar24 = iVar2 + 1;
        iVar4 = iVar15;
      }
      iVar15 = iVar4;
    } while (iVar24 <= iVar15);
    local_b8 = 0;
  }
  else {
LAB_710289ec7c:
    local_b8 = 0;
    pbVar7 = &DAT_7104742dbb;
  }
LAB_710289ec88:
  if (*pbVar7 - 0xb < 2) {
    iVar15 = *(int *)(pbVar7 + 1);
  }
  else {
    iVar15 = 0;
  }
  uVar37 = (ulong)iVar15;
  lVar42 = (long)*(ulong **)(param_1 + 0xe0) - *(long *)(param_1 + 0xd8) >> 3;
  uVar41 = lVar42 * -0x5555555555555555;
  plVar40 = (long *)(param_1 + 0xd8);
  if (uVar41 < uVar37) {
    FUN_710289f830(plVar40,uVar37 + lVar42 * 0x5555555555555555,param_3,(byte ****)param_4,
                   (long ****)param_5,pbVar12,param_7,param_8);
  }
  else if (uVar41 - uVar37 != 0) {
    puVar39 = (ulong *)(*(long *)(param_1 + 0xd8) + uVar37 * 0x18);
    puVar38 = *(ulong **)(param_1 + 0xe0);
    while (puVar3 = puVar38, puVar39 != puVar3) {
      puVar38 = puVar3 + -3;
      uVar37 = *puVar38;
      if (uVar37 != 0) {
        puVar3[-2] = uVar37;
        FUN_710392eb40(uVar37);
      }
    }
    *(ulong **)(param_1 + 0xe0) = puVar39;
  }
  uVar14 = (uint)*pbVar7;
  if ((*pbVar7 - 0xb < 2) && (0 < *(int *)(pbVar7 + 1))) {
    lVar42 = 0;
LAB_710289ed7c:
    do {
      iVar15 = (int)lVar42;
      if (iVar15 < 0) {
LAB_710289edb8:
        lVar17 = 0;
        pbVar28 = &DAT_7104742dbb;
      }
      else {
        lVar17 = 0;
        pbVar28 = &DAT_7104742dbb;
        if (uVar14 == 0xb) {
          if (*(int *)(pbVar7 + 1) <= iVar15) goto LAB_710289edb8;
          pbVar28 = pbVar7 + *(int *)(pbVar7 + (long)iVar15 * 4 + 5);
          lVar17 = local_b8;
        }
      }
      pbVar30 = &DAT_7104742dbb;
      if ((*pbVar28 == 0xc) && (iVar15 = *(int *)(pbVar28 + 1) + -1, 0 < *(int *)(pbVar28 + 1))) {
        iVar24 = 0;
        do {
          iVar2 = iVar15 + iVar24;
          if (iVar2 < 0) {
            iVar2 = iVar2 + 1;
          }
          iVar2 = iVar2 >> 1;
          puVar10 = (uint *)(*(long *)(lVar17 + 0x28) + (long)*(int *)(pbVar28 + 5) +
                            (long)iVar2 * 8);
          uVar37 = *(ulong *)(*(long *)(lVar17 + 0x20) + (ulong)*puVar10 * 8);
          if (uVar37 == 0xf7720607e) {
            uVar37 = (ulong)(int)puVar10[1];
            lVar27 = 0;
            if ((uVar37 & 0x80000000) == 0) {
              lVar27 = lVar17;
              pbVar30 = pbVar28 + uVar37;
            }
            goto LAB_710289ee28;
          }
          iVar4 = iVar2 + -1;
          if (uVar37 < 0xf7720607f) {
            iVar24 = iVar2 + 1;
            iVar4 = iVar15;
          }
          iVar15 = iVar4;
        } while (iVar24 <= iVar15);
      }
      lVar27 = 0;
LAB_710289ee28:
      plVar34 = (long *)(*plVar40 + lVar42 * 0x18);
      if (*pbVar30 - 0xb < 2) {
        iVar15 = *(int *)(pbVar30 + 1);
      }
      else {
        iVar15 = 0;
      }
      plVar36 = (long *)(*plVar40 + lVar42 * 0x18 + 8);
      lVar17 = *plVar34;
      uVar37 = (ulong)iVar15;
      lVar23 = *plVar36 - lVar17 >> 3;
      uVar41 = lVar23 * -0x5555555555555555;
      if (uVar41 < uVar37) {
        FUN_710289faa0(plVar34,uVar37 + lVar23 * 0x5555555555555555,param_3,(byte ****)param_4,
                       (long ****)param_5,pbVar12,param_7,param_8);
      }
      else if (uVar41 - uVar37 != 0) {
        *plVar36 = lVar17 + uVar37 * 0x18;
      }
      uVar14 = (uint)*pbVar30;
      if ((*pbVar30 - 0xb < 2) && (0 < *(int *)(pbVar30 + 1))) {
        lVar17 = 0;
LAB_710289eeb8:
        do {
          iVar15 = (int)lVar17;
          if (iVar15 < 0) {
LAB_710289eef0:
            lVar23 = 0;
            pbVar28 = &DAT_7104742dbb;
          }
          else {
            lVar23 = 0;
            pbVar28 = &DAT_7104742dbb;
            if (uVar14 == 0xb) {
              if (*(int *)(pbVar30 + 1) <= iVar15) goto LAB_710289eef0;
              pbVar28 = pbVar30 + *(int *)(pbVar30 + (long)iVar15 * 4 + 5);
              lVar23 = lVar27;
            }
          }
          if ((*pbVar28 == 0xc) && (iVar15 = *(int *)(pbVar28 + 1) + -1, 0 < *(int *)(pbVar28 + 1)))
          {
            iVar24 = 0;
            do {
              iVar2 = iVar15 + iVar24;
              if (iVar2 < 0) {
                iVar2 = iVar2 + 1;
              }
              iVar2 = iVar2 >> 1;
              puVar10 = (uint *)(*(long *)(lVar23 + 0x28) + (long)*(int *)(pbVar28 + 5) +
                                (long)iVar2 * 8);
              uVar37 = *(ulong *)(*(long *)(lVar23 + 0x20) + (ulong)*puVar10 * 8);
              if (uVar37 == 0x14ea145397) {
                uVar14 = puVar10[1];
                if (-1 < (int)uVar14) {
                  pbVar35 = pbVar28 + (int)uVar14;
                  lVar33 = lVar23;
                  goto LAB_710289ef78;
                }
                break;
              }
              iVar4 = iVar2 + -1;
              if (uVar37 < 0x14ea145398) {
                iVar24 = iVar2 + 1;
                iVar4 = iVar15;
              }
              iVar15 = iVar4;
            } while (iVar24 <= iVar15);
          }
          lVar33 = 0;
          pbVar35 = &DAT_7104742dbb;
LAB_710289ef78:
          if (*pbVar35 == 9) {
            uVar29 = *(undefined8 *)(*(long *)(lVar33 + 0x20) + (long)*(int *)(pbVar35 + 1) * 8);
          }
          else {
            uVar29 = 0;
          }
          *(undefined8 *)(*(long *)(*plVar40 + lVar42 * 0x18) + lVar17 * 0x18) = uVar29;
          if ((*pbVar28 == 0xc) && (iVar15 = *(int *)(pbVar28 + 1) + -1, 0 < *(int *)(pbVar28 + 1)))
          {
            iVar24 = 0;
            do {
              iVar2 = iVar15 + iVar24;
              if (iVar2 < 0) {
                iVar2 = iVar2 + 1;
              }
              iVar2 = iVar2 >> 1;
              puVar10 = (uint *)(*(long *)(lVar23 + 0x28) + (long)*(int *)(pbVar28 + 5) +
                                (long)iVar2 * 8);
              uVar37 = *(ulong *)(*(long *)(lVar23 + 0x20) + (ulong)*puVar10 * 8);
              if (uVar37 == 0x149675764c) {
                uVar14 = puVar10[1];
                if (-1 < (int)uVar14) {
                  pbVar35 = pbVar28 + (int)uVar14;
                  lVar33 = lVar23;
                  goto LAB_710289f030;
                }
                break;
              }
              iVar4 = iVar2 + -1;
              if (uVar37 < 0x149675764d) {
                iVar24 = iVar2 + 1;
                iVar4 = iVar15;
              }
              iVar15 = iVar4;
            } while (iVar24 <= iVar15);
          }
          lVar33 = 0;
          pbVar35 = &DAT_7104742dbb;
LAB_710289f030:
          if (*pbVar35 == 9) {
            uVar29 = *(undefined8 *)(*(long *)(lVar33 + 0x20) + (long)*(int *)(pbVar35 + 1) * 8);
          }
          else {
            uVar29 = 0;
          }
          *(undefined8 *)(*(long *)(*plVar40 + lVar42 * 0x18) + lVar17 * 0x18 + 8) = uVar29;
          if ((*pbVar28 == 0xc) && (iVar15 = *(int *)(pbVar28 + 1) + -1, 0 < *(int *)(pbVar28 + 1)))
          {
            iVar24 = 0;
            do {
              iVar2 = iVar15 + iVar24;
              if (iVar2 < 0) {
                iVar2 = iVar2 + 1;
              }
              iVar2 = iVar2 >> 1;
              puVar10 = (uint *)(*(long *)(lVar23 + 0x28) + (long)*(int *)(pbVar28 + 5) +
                                (long)iVar2 * 8);
              uVar37 = *(ulong *)(*(long *)(lVar23 + 0x20) + (ulong)*puVar10 * 8);
              if (uVar37 == 0x140b7a973a) {
                uVar14 = puVar10[1];
                if (-1 < (int)uVar14) {
                  pbVar28 = pbVar28 + (int)uVar14;
                  goto LAB_710289f0e4;
                }
                break;
              }
              iVar4 = iVar2 + -1;
              if (uVar37 < 0x140b7a973b) {
                iVar24 = iVar2 + 1;
                iVar4 = iVar15;
              }
              iVar15 = iVar4;
            } while (iVar24 <= iVar15);
          }
          lVar23 = 0;
          pbVar28 = &DAT_7104742dbb;
LAB_710289f0e4:
          if (*pbVar28 == 9) {
            uVar29 = *(undefined8 *)(*(long *)(lVar23 + 0x20) + (long)*(int *)(pbVar28 + 1) * 8);
          }
          else {
            uVar29 = 0;
          }
          lVar23 = lVar17 * 0x18;
          lVar17 = lVar17 + 1;
          *(undefined8 *)(*(long *)(*plVar40 + lVar42 * 0x18) + lVar23 + 0x10) = uVar29;
          uVar14 = (uint)*pbVar30;
          if (uVar14 - 0xb < 2) {
            if (*(int *)(pbVar30 + 1) <= lVar17) break;
            goto LAB_710289eeb8;
          }
        } while (lVar17 < 0);
      }
      uVar14 = (uint)*pbVar7;
      lVar42 = lVar42 + 1;
      if (uVar14 - 0xb < 2) {
        if (*(int *)(pbVar7 + 1) <= lVar42) break;
        goto LAB_710289ed7c;
      }
    } while (lVar42 < 0);
  }
  pcVar16 = (char *)param_2[1];
  if ((*pcVar16 == '\f') && (iVar15 = *(int *)(pcVar16 + 1) + -1, 0 < *(int *)(pcVar16 + 1))) {
    lVar42 = *param_2;
    iVar24 = 0;
    pcVar22 = "";
    do {
      iVar2 = iVar15 + iVar24;
      if (iVar2 < 0) {
        iVar2 = iVar2 + 1;
      }
      iVar2 = iVar2 >> 1;
      puVar10 = (uint *)(*(long *)(lVar42 + 0x28) + (long)*(int *)(pcVar16 + 5) + (long)iVar2 * 8);
      uVar37 = *(ulong *)(*(long *)(lVar42 + 0x20) + (ulong)*puVar10 * 8);
      if (uVar37 == 0x12a2d79223) {
        uVar14 = puVar10[1];
        if ((int)uVar14 < 0) goto LAB_710289f22c;
        pcVar22 = pcVar16 + (int)uVar14;
        goto LAB_710289f238;
      }
      iVar4 = iVar2 + -1;
      if (uVar37 < 0x12a2d79224) {
        iVar24 = iVar2 + 1;
        iVar4 = iVar15;
      }
      iVar15 = iVar4;
    } while (iVar24 <= iVar15);
    lVar42 = 0;
  }
  else {
LAB_710289f22c:
    lVar42 = 0;
    pcVar22 = "";
  }
LAB_710289f238:
  if ((*pcVar22 == '\f') && (iVar15 = *(int *)(pcVar22 + 1) + -1, 0 < *(int *)(pcVar22 + 1))) {
    iVar24 = 0;
    pcVar16 = "";
    do {
      iVar2 = iVar15 + iVar24;
      if (iVar2 < 0) {
        iVar2 = iVar2 + 1;
      }
      iVar2 = iVar2 >> 1;
      puVar10 = (uint *)(*(long *)(lVar42 + 0x28) + (long)*(int *)(pcVar22 + 5) + (long)iVar2 * 8);
      uVar37 = *(ulong *)(*(long *)(lVar42 + 0x20) + (ulong)*puVar10 * 8);
      if (uVar37 == 0x8d8ad1dd1) {
        uVar14 = puVar10[1];
        if ((int)uVar14 < 0) goto LAB_710289f300;
        pcVar16 = pcVar22 + (int)uVar14;
        break;
      }
      iVar4 = iVar2 + -1;
      if (uVar37 < 0x8d8ad1dd2) {
        iVar24 = iVar2 + 1;
        iVar4 = iVar15;
      }
      iVar15 = iVar4;
    } while (iVar24 <= iVar15);
  }
  else {
LAB_710289f300:
    pcVar16 = "";
  }
  if (*pcVar16 == '\b') {
    uVar46 = *(undefined4 *)(pcVar16 + 1);
  }
  else {
    uVar46 = 0;
  }
  *(undefined4 *)(param_1 + 0xf0) = uVar46;
  if ((*pcVar22 == '\f') && (iVar15 = *(int *)(pcVar22 + 1) + -1, 0 < *(int *)(pcVar22 + 1))) {
    iVar24 = 0;
    pcVar16 = "";
    do {
      iVar2 = iVar15 + iVar24;
      if (iVar2 < 0) {
        iVar2 = iVar2 + 1;
      }
      iVar2 = iVar2 >> 1;
      puVar10 = (uint *)(*(long *)(lVar42 + 0x28) + (long)*(int *)(pcVar22 + 5) + (long)iVar2 * 8);
      uVar37 = *(ulong *)(*(long *)(lVar42 + 0x20) + (ulong)*puVar10 * 8);
      if (uVar37 == 0x8afaa2d47) {
        uVar14 = puVar10[1];
        if ((int)uVar14 < 0) goto LAB_710289f3b0;
        pcVar16 = pcVar22 + (int)uVar14;
        break;
      }
      iVar4 = iVar2 + -1;
      if (uVar37 < 0x8afaa2d48) {
        iVar24 = iVar2 + 1;
        iVar4 = iVar15;
      }
      iVar15 = iVar4;
    } while (iVar24 <= iVar15);
  }
  else {
LAB_710289f3b0:
    pcVar16 = "";
  }
  if (*pcVar16 == '\b') {
    uVar46 = *(undefined4 *)(pcVar16 + 1);
  }
  else {
    uVar46 = 0;
  }
  *(undefined4 *)(param_1 + 0xf4) = uVar46;
  if ((*pcVar22 == '\f') && (iVar15 = *(int *)(pcVar22 + 1) + -1, 0 < *(int *)(pcVar22 + 1))) {
    iVar24 = 0;
    pcVar16 = "";
    do {
      iVar2 = iVar15 + iVar24;
      if (iVar2 < 0) {
        iVar2 = iVar2 + 1;
      }
      iVar2 = iVar2 >> 1;
      puVar10 = (uint *)(*(long *)(lVar42 + 0x28) + (long)*(int *)(pcVar22 + 5) + (long)iVar2 * 8);
      uVar37 = *(ulong *)(*(long *)(lVar42 + 0x20) + (ulong)*puVar10 * 8);
      if (uVar37 == 0x836a37cfd) {
        uVar14 = puVar10[1];
        if ((int)uVar14 < 0) goto LAB_710289f460;
        pcVar16 = pcVar22 + (int)uVar14;
        break;
      }
      iVar4 = iVar2 + -1;
      if (uVar37 < 0x836a37cfe) {
        iVar24 = iVar2 + 1;
        iVar4 = iVar15;
      }
      iVar15 = iVar4;
    } while (iVar24 <= iVar15);
  }
  else {
LAB_710289f460:
    pcVar16 = "";
  }
  if (*pcVar16 == '\b') {
    uVar46 = *(undefined4 *)(pcVar16 + 1);
  }
  else {
    uVar46 = 0;
  }
  *(undefined4 *)(param_1 + 0xf8) = uVar46;
  return;
}

