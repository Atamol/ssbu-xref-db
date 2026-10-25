// addr:      710306bc90
// offset:    0x306bc90
// name:      FUN_710306bc90
// mangled:   
// signature: undefined __cdecl FUN_710306bc90(long param_1, long * param_2, uint * param_3, byte * * * * param_4, long * * * * param_5, uint * param_6, uint * param_7, byte * * * * param_8)


void FUN_710306bc90(long param_1,long *param_2,uint *param_3,byte ****param_4,long ****param_5,
                   uint *param_6,uint *param_7,byte ****param_8)

{
  uint *puVar1;
  long *plVar2;
  long *plVar3;
  int iVar4;
  uint uVar5;
  undefined8 uVar6;
  byte bVar7;
  undefined8 *puVar8;
  int iVar9;
  uint uVar10;
  uint *puVar11;
  long ****pppplVar12;
  long ****pppplVar13;
  byte ****ppppbVar14;
  uint *puVar15;
  undefined8 uVar16;
  byte ****ppppbVar17;
  uint uVar18;
  char cVar19;
  int iVar20;
  byte ***pppbVar21;
  long lVar22;
  ulong uVar23;
  ulong uVar24;
  long ***ppplVar25;
  long *plVar26;
  undefined8 *puVar27;
  char *pcVar28;
  long lVar29;
  long lVar30;
  char *pcVar31;
  uint *puVar32;
  int iVar33;
  uint *puVar34;
  uint uVar35;
  ulong uVar36;
  long lVar37;
  byte *pbVar38;
  byte *pbVar39;
  byte *pbVar40;
  byte *pbVar41;
  long ****pppplVar42;
  void *pvVar43;
  long ****pppplVar44;
  undefined8 *puVar45;
  size_t __n;
  void *pvVar46;
  byte ****ppppbVar47;
  ulong uVar48;
  ulong uVar49;
  undefined4 uVar50;
  undefined4 uVar51;
  undefined4 uVar52;
  undefined4 uVar53;
  long ****local_d0;
  long local_b0;
  long local_a8;
  long ***local_90;
  undefined4 local_84;
  
  ppppbVar47 = (byte ****)(param_2 + 1);
  pppbVar21 = *ppppbVar47;
  if ((*(char *)pppbVar21 == '\f') &&
     (iVar20 = *(int *)((long)pppbVar21 + 1) + -1, 0 < *(int *)((long)pppbVar21 + 1))) {
    iVar33 = 0;
    pcVar28 = "";
    do {
      iVar4 = iVar20 + iVar33;
      if (iVar4 < 0) {
        iVar4 = iVar4 + 1;
      }
      iVar4 = iVar4 >> 1;
      puVar11 = (uint *)(*(long *)(*param_2 + 0x28) + (long)*(int *)((long)pppbVar21 + 5) +
                        (long)iVar4 * 8);
      uVar36 = *(ulong *)(*(long *)(*param_2 + 0x20) + (ulong)*puVar11 * 8);
      if (uVar36 == 0x11f7a56aa7) {
        uVar35 = puVar11[1];
        if ((int)uVar35 < 0) goto LAB_710306bd5c;
        pcVar28 = (char *)((long)pppbVar21 + (long)(int)uVar35);
        break;
      }
      iVar9 = iVar4 + -1;
      if (uVar36 < 0x11f7a56aa8) {
        iVar33 = iVar4 + 1;
        iVar9 = iVar20;
      }
      iVar20 = iVar9;
    } while (iVar33 <= iVar20);
  }
  else {
LAB_710306bd5c:
    pcVar28 = "";
  }
  if (*pcVar28 == '\b') {
    uVar50 = *(undefined4 *)(pcVar28 + 1);
  }
  else {
    uVar50 = 0x46abe000;
  }
  *(undefined4 *)(param_1 + 8) = uVar50;
  pppbVar21 = *ppppbVar47;
  if ((*(char *)pppbVar21 == '\f') &&
     (iVar20 = *(int *)((long)pppbVar21 + 1) + -1, 0 < *(int *)((long)pppbVar21 + 1))) {
    iVar33 = 0;
    pcVar28 = "";
    do {
      iVar4 = iVar20 + iVar33;
      if (iVar4 < 0) {
        iVar4 = iVar4 + 1;
      }
      iVar4 = iVar4 >> 1;
      puVar11 = (uint *)(*(long *)(*param_2 + 0x28) + (long)*(int *)((long)pppbVar21 + 5) +
                        (long)iVar4 * 8);
      uVar36 = *(ulong *)(*(long *)(*param_2 + 0x20) + (ulong)*puVar11 * 8);
      if (uVar36 == 0x1caff5462a) {
        uVar35 = puVar11[1];
        if ((int)uVar35 < 0) goto LAB_710306be1c;
        pcVar28 = (char *)((long)pppbVar21 + (long)(int)uVar35);
        break;
      }
      iVar9 = iVar4 + -1;
      if (uVar36 < 0x1caff5462b) {
        iVar33 = iVar4 + 1;
        iVar9 = iVar20;
      }
      iVar20 = iVar9;
    } while (iVar33 <= iVar20);
  }
  else {
LAB_710306be1c:
    pcVar28 = "";
  }
  if (*pcVar28 == '\b') {
    uVar50 = *(undefined4 *)(pcVar28 + 1);
  }
  else {
    uVar50 = 0x4528c000;
  }
  *(undefined4 *)(param_1 + 0xc) = uVar50;
  pppbVar21 = *ppppbVar47;
  if ((*(char *)pppbVar21 == '\f') &&
     (iVar20 = *(int *)((long)pppbVar21 + 1) + -1, 0 < *(int *)((long)pppbVar21 + 1))) {
    iVar33 = 0;
    pcVar28 = "";
    do {
      iVar4 = iVar20 + iVar33;
      if (iVar4 < 0) {
        iVar4 = iVar4 + 1;
      }
      iVar4 = iVar4 >> 1;
      puVar11 = (uint *)(*(long *)(*param_2 + 0x28) + (long)*(int *)((long)pppbVar21 + 5) +
                        (long)iVar4 * 8);
      uVar36 = *(ulong *)(*(long *)(*param_2 + 0x20) + (ulong)*puVar11 * 8);
      if (uVar36 == 0x18b22882a9) {
        uVar35 = puVar11[1];
        if ((int)uVar35 < 0) goto LAB_710306bedc;
        pcVar28 = (char *)((long)pppbVar21 + (long)(int)uVar35);
        break;
      }
      iVar9 = iVar4 + -1;
      if (uVar36 < 0x18b22882aa) {
        iVar33 = iVar4 + 1;
        iVar9 = iVar20;
      }
      iVar20 = iVar9;
    } while (iVar33 <= iVar20);
  }
  else {
LAB_710306bedc:
    pcVar28 = "";
  }
  if (*pcVar28 == '\b') {
    uVar50 = *(undefined4 *)(pcVar28 + 1);
  }
  else {
    uVar50 = 0x44480000;
  }
  *(undefined4 *)(param_1 + 0x10) = uVar50;
  pppbVar21 = *ppppbVar47;
  if ((*(char *)pppbVar21 == '\f') &&
     (iVar20 = *(int *)((long)pppbVar21 + 1) + -1, 0 < *(int *)((long)pppbVar21 + 1))) {
    lVar37 = *param_2;
    iVar33 = 0;
    pbVar40 = &DAT_7104742dbb;
    do {
      iVar4 = iVar20 + iVar33;
      if (iVar4 < 0) {
        iVar4 = iVar4 + 1;
      }
      iVar4 = iVar4 >> 1;
      puVar11 = (uint *)(*(long *)(lVar37 + 0x28) + (long)*(int *)((long)pppbVar21 + 5) +
                        (long)iVar4 * 8);
      uVar36 = *(ulong *)(*(long *)(lVar37 + 0x20) + (ulong)*puVar11 * 8);
      if (uVar36 == 0x14355a307d) {
        uVar35 = puVar11[1];
        if ((int)uVar35 < 0) goto LAB_710306bfa0;
        pbVar40 = (byte *)((long)pppbVar21 + (long)(int)uVar35);
        goto LAB_710306bfac;
      }
      iVar9 = iVar4 + -1;
      if (uVar36 < 0x14355a307e) {
        iVar33 = iVar4 + 1;
        iVar9 = iVar20;
      }
      iVar20 = iVar9;
    } while (iVar33 <= iVar20);
    lVar37 = 0;
  }
  else {
LAB_710306bfa0:
    lVar37 = 0;
    pbVar40 = &DAT_7104742dbb;
  }
LAB_710306bfac:
  if (*pbVar40 - 0xb < 2) {
    iVar20 = *(int *)(pbVar40 + 1);
  }
  else {
    iVar20 = 0;
  }
  uVar36 = (ulong)iVar20;
  pvVar43 = *(void **)(param_1 + 0x18);
  puVar27 = *(undefined8 **)(param_1 + 0x20);
  pppplVar42 = (long ****)((long)puVar27 - (long)pvVar43);
  lVar29 = (long)pppplVar42 >> 4;
  plVar2 = (long *)(param_1 + 0x18);
  if ((ulong)(lVar29 * -0x5555555555555555) < uVar36) {
    uVar48 = uVar36 + lVar29 * 0x5555555555555555;
    if ((ulong)((*(long *)(param_1 + 0x28) - (long)puVar27 >> 4) * -0x5555555555555555) < uVar48) {
      if (iVar20 < 0) goto LAB_7103079628;
      lVar22 = *(long *)(param_1 + 0x28) - (long)pvVar43 >> 4;
      if ((ulong)(lVar22 * -0x5555555555555555) < 0x2aaaaaaaaaaaaaa) {
        uVar23 = lVar22 * 0x5555555555555556;
        uVar49 = uVar36;
        if (uVar36 <= uVar23) {
          uVar49 = uVar23;
        }
        if (uVar49 != 0) goto LAB_710306c0f0;
        lVar22 = 0;
      }
      else {
        uVar49 = 0x555555555555555;
LAB_710306c0f0:
        ppplVar25 = (long ***)(uVar49 * 0x30);
        if (ppplVar25 == (long ***)0x0) {
          ppplVar25 = (long ***)0x1;
        }
        lVar22 = FUN_710392e290(0x10,ppplVar25,(long ****)param_3,param_4,param_5,param_6,param_7,
                                param_8);
        if (lVar22 == 0) {
          if (DAT_7105332f00 != (long *)0x0) {
            local_84 = 0;
            pppplVar44 = &local_90;
            local_90 = ppplVar25;
            uVar23 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_84);
            if (((uVar23 & 1) != 0) &&
               (lVar22 = FUN_710392e290(0x10,ppplVar25,pppplVar44,param_4,param_5,param_6,param_7,
                                        param_8), lVar22 != 0)) goto LAB_710306c160;
          }
          lVar22 = 0;
        }
      }
LAB_710306c160:
      pvVar46 = (void *)(lVar22 + lVar29 * 0x10);
      param_3 = (uint *)(uVar48 * 0x30);
      memset(pvVar46,0,(size_t)param_3);
      lVar29 = SUB168(SEXT816((long)pppplVar42) * SEXT816(-0x2aaaaaaaaaaaaaab),8);
      pvVar46 = (void *)((long)pvVar46 + ((lVar29 >> 3) - (lVar29 >> 0x3f)) * 0x30);
      if (0 < (long)pppplVar42) {
        memcpy(pvVar46,pvVar43,(size_t)pppplVar42);
        param_3 = (uint *)pppplVar42;
      }
      *(void **)(param_1 + 0x18) = pvVar46;
      *(ulong *)(param_1 + 0x20) = lVar22 + uVar36 * 0x30;
      *(ulong *)(param_1 + 0x28) = lVar22 + uVar49 * 0x30;
      if (pvVar43 != (void *)0x0) {
        FUN_710392eb40((ulong)pvVar43);
      }
    }
    else {
      uVar36 = uVar48;
      if ((uVar48 & 1) != 0) {
        puVar27[4] = 0;
        puVar27[5] = 0;
        uVar36 = uVar48 - 1;
        puVar27[2] = 0;
        puVar27[3] = 0;
        *puVar27 = 0;
        puVar27[1] = 0;
        puVar27 = (undefined8 *)(*(long *)(param_1 + 0x20) + 0x30);
        *(undefined8 **)(param_1 + 0x20) = puVar27;
      }
      if (uVar48 != 1) {
        do {
          puVar27[4] = 0;
          puVar27[5] = 0;
          uVar36 = uVar36 - 2;
          puVar27[2] = 0;
          puVar27[3] = 0;
          *puVar27 = 0;
          puVar27[1] = 0;
          lVar29 = *(long *)(param_1 + 0x20);
          *(long *)(param_1 + 0x20) = lVar29 + 0x30;
          *(undefined8 *)(lVar29 + 0x50) = 0;
          *(undefined8 *)(lVar29 + 0x58) = 0;
          *(undefined8 *)(lVar29 + 0x40) = 0;
          *(undefined8 *)(lVar29 + 0x48) = 0;
          *(undefined8 *)(lVar29 + 0x30) = 0;
          *(undefined8 *)(lVar29 + 0x38) = 0;
          puVar27 = (undefined8 *)(*(long *)(param_1 + 0x20) + 0x30);
          *(undefined8 **)(param_1 + 0x20) = puVar27;
        } while (uVar36 != 0);
      }
    }
  }
  else if (lVar29 * -0x5555555555555555 - uVar36 != 0) {
    *(void **)(param_1 + 0x20) = (void *)((long)pvVar43 + uVar36 * 0x30);
  }
  ppppbVar14 = (byte ****)(ulong)*pbVar40;
  if ((*pbVar40 - 0xb < 2) && (0 < *(int *)(pbVar40 + 1))) {
    lVar29 = 0;
    param_3 = &switchD_710306c6bc::switchdataD_7104526094;
LAB_710306c2b8:
    do {
      iVar20 = (int)lVar29;
      if (iVar20 < 0) {
LAB_710306c2f0:
        lVar22 = 0;
        puVar11 = (uint *)&DAT_7104742dbb;
      }
      else {
        puVar11 = (uint *)&DAT_7104742dbb;
        lVar22 = 0;
        if ((int)ppppbVar14 == 0xb) {
          if (*(int *)(pbVar40 + 1) <= iVar20) goto LAB_710306c2f0;
          puVar11 = (uint *)(pbVar40 + *(int *)(pbVar40 + (long)iVar20 * 4 + 5));
          lVar22 = lVar37;
        }
      }
      if (((char)*puVar11 == '\f') &&
         (iVar20 = *(int *)((long)puVar11 + 1) + -1, 0 < *(int *)((long)puVar11 + 1))) {
        iVar33 = 0;
        do {
          iVar4 = iVar20 + iVar33;
          if (iVar4 < 0) {
            iVar4 = iVar4 + 1;
          }
          iVar4 = iVar4 >> 1;
          puVar15 = (uint *)(*(long *)(lVar22 + 0x28) + (long)*(int *)((long)puVar11 + 5) +
                            (long)iVar4 * 8);
          uVar36 = *(ulong *)(*(long *)(lVar22 + 0x20) + (ulong)*puVar15 * 8);
          if (uVar36 == 0xdde98c202) {
            uVar35 = puVar15[1];
            if (-1 < (int)uVar35) {
              puVar15 = (uint *)((long)puVar11 + (long)(int)uVar35);
              lVar30 = lVar22;
              goto LAB_710306c378;
            }
            break;
          }
          iVar9 = iVar4 + -1;
          if (uVar36 < 0xdde98c203) {
            iVar33 = iVar4 + 1;
            iVar9 = iVar20;
          }
          iVar20 = iVar9;
        } while (iVar33 <= iVar20);
      }
      lVar30 = 0;
      puVar15 = (uint *)&DAT_7104742dbb;
LAB_710306c378:
      if ((char)*puVar15 == '\t') {
        uVar16 = *(undefined8 *)(*(long *)(lVar30 + 0x20) + (long)*(int *)((long)puVar15 + 1) * 8);
      }
      else {
        uVar16 = 0;
      }
      param_8 = (byte ****)(lVar29 * 0x30);
      *(undefined8 *)(*plVar2 + (long)param_8) = uVar16;
      puVar15 = (uint *)&DAT_7104742dbb;
      if (((char)*puVar11 == '\f') &&
         (iVar20 = *(int *)((long)puVar11 + 1) + -1, 0 < *(int *)((long)puVar11 + 1))) {
        param_8 = *(byte *****)(lVar22 + 0x20);
        iVar33 = 0;
        do {
          iVar4 = iVar20 + iVar33;
          if (iVar4 < 0) {
            iVar4 = iVar4 + 1;
          }
          iVar4 = iVar4 >> 1;
          puVar32 = (uint *)(*(long *)(lVar22 + 0x28) + (long)*(int *)((long)puVar11 + 5) +
                            (long)iVar4 * 8);
          if (param_8[*puVar32] == (byte ***)0xbc0ad263c) {
            uVar35 = puVar32[1];
            if (-1 < (int)uVar35) {
              puVar15 = (uint *)((long)puVar11 + (long)(int)uVar35);
            }
            break;
          }
          iVar9 = iVar4 + -1;
          if (param_8[*puVar32] < (byte ***)0xbc0ad263d) {
            iVar33 = iVar4 + 1;
            iVar9 = iVar20;
          }
          iVar20 = iVar9;
        } while (iVar33 <= iVar20);
      }
      uVar50 = 0;
      if ((char)*puVar15 == '\b') {
        uVar50 = *(undefined4 *)((long)puVar15 + 1);
      }
      *(undefined4 *)(*plVar2 + lVar29 * 0x30 + 8) = uVar50;
      puVar15 = (uint *)&DAT_7104742dbb;
      if (((char)*puVar11 == '\f') &&
         (iVar20 = *(int *)((long)puVar11 + 1) + -1, 0 < *(int *)((long)puVar11 + 1))) {
        param_8 = *(byte *****)(lVar22 + 0x20);
        iVar33 = 0;
        do {
          iVar4 = iVar20 + iVar33;
          if (iVar4 < 0) {
            iVar4 = iVar4 + 1;
          }
          iVar4 = iVar4 >> 1;
          puVar32 = (uint *)(*(long *)(lVar22 + 0x28) + (long)*(int *)((long)puVar11 + 5) +
                            (long)iVar4 * 8);
          if (param_8[*puVar32] == (byte ***)0x5ec462584) {
            uVar35 = puVar32[1];
            if (-1 < (int)uVar35) {
              puVar15 = (uint *)((long)puVar11 + (long)(int)uVar35);
            }
            break;
          }
          iVar9 = iVar4 + -1;
          if (param_8[*puVar32] < (byte ***)0x5ec462585) {
            iVar33 = iVar4 + 1;
            iVar9 = iVar20;
          }
          iVar20 = iVar9;
        } while (iVar33 <= iVar20);
      }
      uVar50 = 0x3f800000;
      if ((char)*puVar15 == '\b') {
        uVar50 = *(undefined4 *)((long)puVar15 + 1);
      }
      *(undefined4 *)(*plVar2 + lVar29 * 0x30 + 0xc) = uVar50;
      puVar15 = (uint *)&DAT_7104742dbb;
      if (((char)*puVar11 == '\f') &&
         (iVar20 = *(int *)((long)puVar11 + 1) + -1, 0 < *(int *)((long)puVar11 + 1))) {
        param_8 = *(byte *****)(lVar22 + 0x20);
        iVar33 = 0;
        do {
          iVar4 = iVar20 + iVar33;
          if (iVar4 < 0) {
            iVar4 = iVar4 + 1;
          }
          iVar4 = iVar4 >> 1;
          puVar32 = (uint *)(*(long *)(lVar22 + 0x28) + (long)*(int *)((long)puVar11 + 5) +
                            (long)iVar4 * 8);
          if (param_8[*puVar32] == (byte ***)0x1a0ea795ca) {
            uVar35 = puVar32[1];
            if (-1 < (int)uVar35) {
              puVar15 = (uint *)((long)puVar11 + (long)(int)uVar35);
            }
            break;
          }
          iVar9 = iVar4 + -1;
          if (param_8[*puVar32] < (byte ***)0x1a0ea795cb) {
            iVar33 = iVar4 + 1;
            iVar9 = iVar20;
          }
          iVar20 = iVar9;
        } while (iVar33 <= iVar20);
      }
      uVar50 = 0x43960000;
      if ((char)*puVar15 == '\b') {
        uVar50 = *(undefined4 *)((long)puVar15 + 1);
      }
      *(undefined4 *)(*plVar2 + lVar29 * 0x30 + 0x10) = uVar50;
      puVar15 = (uint *)&DAT_7104742dbb;
      if (((char)*puVar11 == '\f') &&
         (iVar20 = *(int *)((long)puVar11 + 1) + -1, 0 < *(int *)((long)puVar11 + 1))) {
        param_8 = *(byte *****)(lVar22 + 0x20);
        iVar33 = 0;
        do {
          iVar4 = iVar20 + iVar33;
          if (iVar4 < 0) {
            iVar4 = iVar4 + 1;
          }
          iVar4 = iVar4 >> 1;
          puVar32 = (uint *)(*(long *)(lVar22 + 0x28) + (long)*(int *)((long)puVar11 + 5) +
                            (long)iVar4 * 8);
          if (param_8[*puVar32] == (byte ***)0x11391129a8) {
            uVar35 = puVar32[1];
            if (-1 < (int)uVar35) {
              puVar15 = (uint *)((long)puVar11 + (long)(int)uVar35);
            }
            break;
          }
          iVar9 = iVar4 + -1;
          if (param_8[*puVar32] < (byte ***)0x11391129a9) {
            iVar33 = iVar4 + 1;
            iVar9 = iVar20;
          }
          iVar20 = iVar9;
        } while (iVar33 <= iVar20);
      }
      uVar50 = 0x44610000;
      if ((char)*puVar15 == '\b') {
        uVar50 = *(undefined4 *)((long)puVar15 + 1);
      }
      *(undefined4 *)(*plVar2 + lVar29 * 0x30 + 0x14) = uVar50;
      puVar15 = (uint *)&DAT_7104742dbb;
      if (((char)*puVar11 == '\f') &&
         (iVar20 = *(int *)((long)puVar11 + 1) + -1, 0 < *(int *)((long)puVar11 + 1))) {
        param_8 = *(byte *****)(lVar22 + 0x20);
        iVar33 = 0;
        do {
          iVar4 = iVar20 + iVar33;
          if (iVar4 < 0) {
            iVar4 = iVar4 + 1;
          }
          iVar4 = iVar4 >> 1;
          puVar32 = (uint *)(*(long *)(lVar22 + 0x28) + (long)*(int *)((long)puVar11 + 5) +
                            (long)iVar4 * 8);
          if (param_8[*puVar32] == (byte ***)0x1b5ba8d9a4) {
            uVar35 = puVar32[1];
            if (-1 < (int)uVar35) {
              puVar15 = (uint *)((long)puVar11 + (long)(int)uVar35);
            }
            break;
          }
          iVar9 = iVar4 + -1;
          if (param_8[*puVar32] < (byte ***)0x1b5ba8d9a5) {
            iVar33 = iVar4 + 1;
            iVar9 = iVar20;
          }
          iVar20 = iVar9;
        } while (iVar33 <= iVar20);
      }
      switch((char)*puVar15) {
      case '\x01':
      case '\x03':
        uVar35 = (uint)*(byte *)((long)puVar15 + 1);
        break;
      case '\x02':
        uVar35 = (uint)*(char *)((long)puVar15 + 1);
        break;
      case '\x04':
        uVar35 = (uint)*(short *)((long)puVar15 + 1);
        break;
      case '\x05':
        uVar35 = (uint)*(ushort *)((long)puVar15 + 1);
        break;
      case '\x06':
      case '\a':
        uVar35 = *(uint *)((long)puVar15 + 1);
        break;
      default:
        uVar35 = 2;
      }
      *(uint *)(*plVar2 + lVar29 * 0x30 + 0x18) = uVar35;
      puVar15 = (uint *)&DAT_7104742dbb;
      if (((char)*puVar11 == '\f') &&
         (iVar20 = *(int *)((long)puVar11 + 1) + -1, 0 < *(int *)((long)puVar11 + 1))) {
        param_8 = *(byte *****)(lVar22 + 0x20);
        iVar33 = 0;
        do {
          iVar4 = iVar20 + iVar33;
          if (iVar4 < 0) {
            iVar4 = iVar4 + 1;
          }
          iVar4 = iVar4 >> 1;
          puVar32 = (uint *)(*(long *)(lVar22 + 0x28) + (long)*(int *)((long)puVar11 + 5) +
                            (long)iVar4 * 8);
          if (param_8[*puVar32] == (byte ***)0x1f80c683bd) {
            uVar35 = puVar32[1];
            if (-1 < (int)uVar35) {
              puVar15 = (uint *)((long)puVar11 + (long)(int)uVar35);
            }
            break;
          }
          iVar9 = iVar4 + -1;
          if (param_8[*puVar32] < (byte ***)0x1f80c683be) {
            iVar33 = iVar4 + 1;
            iVar9 = iVar20;
          }
          iVar20 = iVar9;
        } while (iVar33 <= iVar20);
      }
      uVar50 = 0x437a0000;
      if ((char)*puVar15 == '\b') {
        uVar50 = *(undefined4 *)((long)puVar15 + 1);
      }
      *(undefined4 *)(*plVar2 + lVar29 * 0x30 + 0x1c) = uVar50;
      puVar15 = (uint *)&DAT_7104742dbb;
      if (((char)*puVar11 == '\f') &&
         (iVar20 = *(int *)((long)puVar11 + 1) + -1, 0 < *(int *)((long)puVar11 + 1))) {
        param_8 = *(byte *****)(lVar22 + 0x20);
        iVar33 = 0;
        do {
          iVar4 = iVar20 + iVar33;
          if (iVar4 < 0) {
            iVar4 = iVar4 + 1;
          }
          iVar4 = iVar4 >> 1;
          puVar32 = (uint *)(*(long *)(lVar22 + 0x28) + (long)*(int *)((long)puVar11 + 5) +
                            (long)iVar4 * 8);
          if (param_8[*puVar32] == (byte ***)0x1b17608c9b) {
            uVar35 = puVar32[1];
            if (-1 < (int)uVar35) {
              puVar15 = (uint *)((long)puVar11 + (long)(int)uVar35);
            }
            break;
          }
          iVar9 = iVar4 + -1;
          if (param_8[*puVar32] < (byte ***)0x1b17608c9c) {
            iVar33 = iVar4 + 1;
            iVar9 = iVar20;
          }
          iVar20 = iVar9;
        } while (iVar33 <= iVar20);
      }
      uVar50 = 0x44548000;
      if ((char)*puVar15 == '\b') {
        uVar50 = *(undefined4 *)((long)puVar15 + 1);
      }
      *(undefined4 *)(*plVar2 + lVar29 * 0x30 + 0x20) = uVar50;
      puVar15 = (uint *)&DAT_7104742dbb;
      if (((char)*puVar11 == '\f') &&
         (iVar20 = *(int *)((long)puVar11 + 1) + -1, 0 < *(int *)((long)puVar11 + 1))) {
        param_8 = *(byte *****)(lVar22 + 0x20);
        iVar33 = 0;
        do {
          iVar4 = iVar20 + iVar33;
          if (iVar4 < 0) {
            iVar4 = iVar4 + 1;
          }
          iVar4 = iVar4 >> 1;
          puVar32 = (uint *)(*(long *)(lVar22 + 0x28) + (long)*(int *)((long)puVar11 + 5) +
                            (long)iVar4 * 8);
          if (param_8[*puVar32] == (byte ***)0x14f9a5de12) {
            uVar35 = puVar32[1];
            if (-1 < (int)uVar35) {
              puVar15 = (uint *)((long)puVar11 + (long)(int)uVar35);
            }
            break;
          }
          iVar9 = iVar4 + -1;
          if (param_8[*puVar32] < (byte ***)0x14f9a5de13) {
            iVar33 = iVar4 + 1;
            iVar9 = iVar20;
          }
          iVar20 = iVar9;
        } while (iVar33 <= iVar20);
      }
      param_7 = (uint *)(ulong)(byte)*puVar15;
      uVar50 = 0x44160000;
      if ((byte)*puVar15 == 8) {
        uVar50 = *(undefined4 *)((long)puVar15 + 1);
      }
      *(undefined4 *)(*plVar2 + lVar29 * 0x30 + 0x24) = uVar50;
      param_6 = (uint *)&DAT_7104742dbb;
      if (((char)*puVar11 == '\f') &&
         (iVar20 = *(int *)((long)puVar11 + 1) + -1, 0 < *(int *)((long)puVar11 + 1))) {
        param_8 = *(byte *****)(lVar22 + 0x20);
        param_7 = (uint *)0x0;
        do {
          uVar35 = (uint)param_7;
          iVar33 = iVar20 + uVar35;
          if (iVar33 < 0) {
            iVar33 = iVar33 + 1;
          }
          iVar33 = iVar33 >> 1;
          puVar15 = (uint *)(*(long *)(lVar22 + 0x28) + (long)*(int *)((long)puVar11 + 5) +
                            (long)iVar33 * 8);
          if (param_8[*puVar15] == (byte ***)0x16c1a1495d) {
            uVar35 = puVar15[1];
            if (-1 < (int)uVar35) {
              param_6 = (uint *)((long)puVar11 + (long)(int)uVar35);
            }
            break;
          }
          iVar4 = iVar33 + -1;
          if (param_8[*puVar15] < (byte ***)0x16c1a1495e) {
            uVar35 = iVar33 + 1;
            iVar4 = iVar20;
          }
          iVar20 = iVar4;
          param_7 = (uint *)(ulong)uVar35;
        } while ((int)uVar35 <= iVar20);
      }
      uVar50 = 0x43960000;
      if ((char)*param_6 == '\b') {
        uVar50 = *(undefined4 *)((long)param_6 + 1);
      }
      lVar22 = lVar29 * 0x30;
      lVar29 = lVar29 + 1;
      *(undefined4 *)(*plVar2 + lVar22 + 0x28) = uVar50;
      ppppbVar14 = (byte ****)(ulong)*pbVar40;
      if (*pbVar40 - 0xb < 2) {
        param_5 = (long ****)(ulong)*(uint *)(pbVar40 + 1);
        if ((int)*(uint *)(pbVar40 + 1) <= lVar29) break;
        goto LAB_710306c2b8;
      }
      param_5 = (long ****)0x0;
    } while (lVar29 < 0);
  }
  pppbVar21 = *ppppbVar47;
  if ((*(char *)pppbVar21 == '\f') &&
     (iVar20 = *(int *)((long)pppbVar21 + 1) + -1, 0 < *(int *)((long)pppbVar21 + 1))) {
    lVar37 = *param_2;
    iVar33 = 0;
    pcVar28 = "";
    do {
      iVar4 = iVar20 + iVar33;
      if (iVar4 < 0) {
        iVar4 = iVar4 + 1;
      }
      iVar4 = iVar4 >> 1;
      puVar11 = (uint *)(*(long *)(lVar37 + 0x28) + (long)*(int *)((long)pppbVar21 + 5) +
                        (long)iVar4 * 8);
      uVar36 = *(ulong *)(*(long *)(lVar37 + 0x20) + (ulong)*puVar11 * 8);
      if (uVar36 == 0xe957de859) {
        uVar35 = puVar11[1];
        if ((int)uVar35 < 0) goto LAB_710306ca44;
        pcVar28 = (char *)((long)pppbVar21 + (long)(int)uVar35);
        goto LAB_710306ca50;
      }
      iVar9 = iVar4 + -1;
      if (uVar36 < 0xe957de85a) {
        iVar33 = iVar4 + 1;
        iVar9 = iVar20;
      }
      iVar20 = iVar9;
    } while (iVar33 <= iVar20);
    lVar37 = 0;
  }
  else {
LAB_710306ca44:
    lVar37 = 0;
    pcVar28 = "";
  }
LAB_710306ca50:
  if ((*pcVar28 == '\f') && (iVar20 = *(int *)(pcVar28 + 1) + -1, 0 < *(int *)(pcVar28 + 1))) {
    iVar33 = 0;
    pcVar31 = "";
    do {
      iVar4 = iVar20 + iVar33;
      if (iVar4 < 0) {
        iVar4 = iVar4 + 1;
      }
      iVar4 = iVar4 >> 1;
      puVar11 = (uint *)(*(long *)(lVar37 + 0x28) + (long)*(int *)(pcVar28 + 5) + (long)iVar4 * 8);
      uVar36 = *(ulong *)(*(long *)(lVar37 + 0x20) + (ulong)*puVar11 * 8);
      if (uVar36 == 0x171af03b68) {
        uVar35 = puVar11[1];
        if ((int)uVar35 < 0) goto LAB_710306cadc;
        pcVar31 = pcVar28 + (int)uVar35;
        break;
      }
      iVar9 = iVar4 + -1;
      if (uVar36 < 0x171af03b69) {
        iVar33 = iVar4 + 1;
        iVar9 = iVar20;
      }
      iVar20 = iVar9;
    } while (iVar33 <= iVar20);
  }
  else {
LAB_710306cadc:
    pcVar31 = "";
  }
  switch(*pcVar31) {
  case '\x01':
  case '\x03':
    uVar35 = (uint)(byte)pcVar31[1];
    break;
  case '\x02':
    uVar35 = (uint)pcVar31[1];
    break;
  case '\x04':
    uVar35 = (uint)*(short *)(pcVar31 + 1);
    break;
  case '\x05':
    uVar35 = (uint)*(ushort *)(pcVar31 + 1);
    break;
  case '\x06':
  case '\a':
    uVar35 = *(uint *)(pcVar31 + 1);
    break;
  default:
    uVar35 = 1;
  }
  *(bool *)(param_1 + 0x30) = uVar35 != 0;
  if ((*pcVar28 == '\f') && (iVar20 = *(int *)(pcVar28 + 1) + -1, 0 < *(int *)(pcVar28 + 1))) {
    iVar33 = 0;
    pcVar31 = "";
    do {
      iVar4 = iVar20 + iVar33;
      if (iVar4 < 0) {
        iVar4 = iVar4 + 1;
      }
      iVar4 = iVar4 >> 1;
      puVar11 = (uint *)(*(long *)(lVar37 + 0x28) + (long)*(int *)(pcVar28 + 5) + (long)iVar4 * 8);
      uVar36 = *(ulong *)(*(long *)(lVar37 + 0x20) + (ulong)*puVar11 * 8);
      if (uVar36 == 0xb54739219) {
        uVar35 = puVar11[1];
        if ((int)uVar35 < 0) goto LAB_710306cbcc;
        pcVar31 = pcVar28 + (int)uVar35;
        break;
      }
      iVar9 = iVar4 + -1;
      if (uVar36 < 0xb5473921a) {
        iVar33 = iVar4 + 1;
        iVar9 = iVar20;
      }
      iVar20 = iVar9;
    } while (iVar33 <= iVar20);
  }
  else {
LAB_710306cbcc:
    pcVar31 = "";
  }
  if (*pcVar31 == '\b') {
    uVar50 = *(undefined4 *)(pcVar31 + 1);
  }
  else {
    uVar50 = 0xc1500000;
  }
  *(undefined4 *)(param_1 + 0x34) = uVar50;
  if ((*pcVar28 == '\f') && (iVar20 = *(int *)(pcVar28 + 1) + -1, 0 < *(int *)(pcVar28 + 1))) {
    iVar33 = 0;
    pcVar31 = "";
    do {
      iVar4 = iVar20 + iVar33;
      if (iVar4 < 0) {
        iVar4 = iVar4 + 1;
      }
      iVar4 = iVar4 >> 1;
      puVar11 = (uint *)(*(long *)(lVar37 + 0x28) + (long)*(int *)(pcVar28 + 5) + (long)iVar4 * 8);
      uVar36 = *(ulong *)(*(long *)(lVar37 + 0x20) + (ulong)*puVar11 * 8);
      if (uVar36 == 0x8e41430cc) {
        uVar35 = puVar11[1];
        if ((int)uVar35 < 0) goto LAB_710306cc7c;
        pcVar31 = pcVar28 + (int)uVar35;
        break;
      }
      iVar9 = iVar4 + -1;
      if (uVar36 < 0x8e41430cd) {
        iVar33 = iVar4 + 1;
        iVar9 = iVar20;
      }
      iVar20 = iVar9;
    } while (iVar33 <= iVar20);
  }
  else {
LAB_710306cc7c:
    pcVar31 = "";
  }
  if (*pcVar31 == '\b') {
    uVar50 = *(undefined4 *)(pcVar31 + 1);
  }
  else {
    uVar50 = 0;
  }
  *(undefined4 *)(param_1 + 0x38) = uVar50;
  if ((*pcVar28 == '\f') && (iVar20 = *(int *)(pcVar28 + 1) + -1, 0 < *(int *)(pcVar28 + 1))) {
    iVar33 = 0;
    pcVar31 = "";
    do {
      iVar4 = iVar20 + iVar33;
      if (iVar4 < 0) {
        iVar4 = iVar4 + 1;
      }
      iVar4 = iVar4 >> 1;
      puVar11 = (uint *)(*(long *)(lVar37 + 0x28) + (long)*(int *)(pcVar28 + 5) + (long)iVar4 * 8);
      uVar36 = *(ulong *)(*(long *)(lVar37 + 0x20) + (ulong)*puVar11 * 8);
      if (uVar36 == 0x89313005a) {
        uVar35 = puVar11[1];
        if ((int)uVar35 < 0) goto LAB_710306cd2c;
        pcVar31 = pcVar28 + (int)uVar35;
        break;
      }
      iVar9 = iVar4 + -1;
      if (uVar36 < 0x89313005b) {
        iVar33 = iVar4 + 1;
        iVar9 = iVar20;
      }
      iVar20 = iVar9;
    } while (iVar33 <= iVar20);
  }
  else {
LAB_710306cd2c:
    pcVar31 = "";
  }
  if (*pcVar31 == '\b') {
    uVar50 = *(undefined4 *)(pcVar31 + 1);
  }
  else {
    uVar50 = 0xc2820000;
  }
  *(undefined4 *)(param_1 + 0x3c) = uVar50;
  if ((*pcVar28 == '\f') && (iVar20 = *(int *)(pcVar28 + 1) + -1, 0 < *(int *)(pcVar28 + 1))) {
    iVar33 = 0;
    pcVar31 = "";
    do {
      iVar4 = iVar20 + iVar33;
      if (iVar4 < 0) {
        iVar4 = iVar4 + 1;
      }
      iVar4 = iVar4 >> 1;
      puVar11 = (uint *)(*(long *)(lVar37 + 0x28) + (long)*(int *)(pcVar28 + 5) + (long)iVar4 * 8);
      uVar36 = *(ulong *)(*(long *)(lVar37 + 0x20) + (ulong)*puVar11 * 8);
      if (uVar36 == 0x58c1a452f) {
        uVar35 = puVar11[1];
        if ((int)uVar35 < 0) goto LAB_710306cde0;
        pcVar31 = pcVar28 + (int)uVar35;
        break;
      }
      iVar9 = iVar4 + -1;
      if (uVar36 < 0x58c1a4530) {
        iVar33 = iVar4 + 1;
        iVar9 = iVar20;
      }
      iVar20 = iVar9;
    } while (iVar33 <= iVar20);
  }
  else {
LAB_710306cde0:
    pcVar31 = "";
  }
  if (*pcVar31 == '\b') {
    uVar50 = *(undefined4 *)(pcVar31 + 1);
  }
  else {
    uVar50 = 0x43fa0000;
  }
  *(undefined4 *)(param_1 + 0x40) = uVar50;
  if ((*pcVar28 == '\f') && (iVar20 = *(int *)(pcVar28 + 1) + -1, 0 < *(int *)(pcVar28 + 1))) {
    iVar33 = 0;
    pcVar31 = "";
    do {
      iVar4 = iVar20 + iVar33;
      if (iVar4 < 0) {
        iVar4 = iVar4 + 1;
      }
      iVar4 = iVar4 >> 1;
      puVar11 = (uint *)(*(long *)(lVar37 + 0x28) + (long)*(int *)(pcVar28 + 5) + (long)iVar4 * 8);
      uVar36 = *(ulong *)(*(long *)(lVar37 + 0x20) + (ulong)*puVar11 * 8);
      if (uVar36 == 0x6f54de50f) {
        uVar35 = puVar11[1];
        if ((int)uVar35 < 0) goto LAB_710306ce94;
        pcVar31 = pcVar28 + (int)uVar35;
        break;
      }
      iVar9 = iVar4 + -1;
      if (uVar36 < 0x6f54de510) {
        iVar33 = iVar4 + 1;
        iVar9 = iVar20;
      }
      iVar20 = iVar9;
    } while (iVar33 <= iVar20);
  }
  else {
LAB_710306ce94:
    pcVar31 = "";
  }
  if (*pcVar31 == '\b') {
    uVar50 = *(undefined4 *)(pcVar31 + 1);
  }
  else {
    uVar50 = 0x42f00000;
  }
  *(undefined4 *)(param_1 + 0x44) = uVar50;
  if ((*pcVar28 == '\f') && (iVar20 = *(int *)(pcVar28 + 1) + -1, 0 < *(int *)(pcVar28 + 1))) {
    iVar33 = 0;
    pcVar31 = "";
    do {
      iVar4 = iVar20 + iVar33;
      if (iVar4 < 0) {
        iVar4 = iVar4 + 1;
      }
      iVar4 = iVar4 >> 1;
      puVar11 = (uint *)(*(long *)(lVar37 + 0x28) + (long)*(int *)(pcVar28 + 5) + (long)iVar4 * 8);
      uVar36 = *(ulong *)(*(long *)(lVar37 + 0x20) + (ulong)*puVar11 * 8);
      if (uVar36 == 0x8afaa2d47) {
        uVar35 = puVar11[1];
        if ((int)uVar35 < 0) goto LAB_710306cf48;
        pcVar31 = pcVar28 + (int)uVar35;
        break;
      }
      iVar9 = iVar4 + -1;
      if (uVar36 < 0x8afaa2d48) {
        iVar33 = iVar4 + 1;
        iVar9 = iVar20;
      }
      iVar20 = iVar9;
    } while (iVar33 <= iVar20);
  }
  else {
LAB_710306cf48:
    pcVar31 = "";
  }
  if (*pcVar31 == '\b') {
    uVar50 = *(undefined4 *)(pcVar31 + 1);
  }
  else {
    uVar50 = 0;
  }
  *(undefined4 *)(param_1 + 0x48) = uVar50;
  pppbVar21 = *ppppbVar47;
  if ((*(char *)pppbVar21 == '\f') &&
     (iVar20 = *(int *)((long)pppbVar21 + 1) + -1, 0 < *(int *)((long)pppbVar21 + 1))) {
    lVar37 = *param_2;
    iVar33 = 0;
    pcVar28 = "";
    do {
      iVar4 = iVar20 + iVar33;
      if (iVar4 < 0) {
        iVar4 = iVar4 + 1;
      }
      iVar4 = iVar4 >> 1;
      puVar11 = (uint *)(*(long *)(lVar37 + 0x28) + (long)*(int *)((long)pppbVar21 + 5) +
                        (long)iVar4 * 8);
      uVar36 = *(ulong *)(*(long *)(lVar37 + 0x20) + (ulong)*puVar11 * 8);
      if (uVar36 == 0x104425e9d9) {
        uVar35 = puVar11[1];
        if ((int)uVar35 < 0) goto LAB_710306d008;
        pcVar28 = (char *)((long)pppbVar21 + (long)(int)uVar35);
        goto LAB_710306d014;
      }
      iVar9 = iVar4 + -1;
      if (uVar36 < 0x104425e9da) {
        iVar33 = iVar4 + 1;
        iVar9 = iVar20;
      }
      iVar20 = iVar9;
    } while (iVar33 <= iVar20);
    lVar37 = 0;
  }
  else {
LAB_710306d008:
    lVar37 = 0;
    pcVar28 = "";
  }
LAB_710306d014:
  if ((*pcVar28 == '\f') && (iVar20 = *(int *)(pcVar28 + 1) + -1, 0 < *(int *)(pcVar28 + 1))) {
    iVar33 = 0;
    pcVar31 = "";
    do {
      iVar4 = iVar20 + iVar33;
      if (iVar4 < 0) {
        iVar4 = iVar4 + 1;
      }
      iVar4 = iVar4 >> 1;
      puVar11 = (uint *)(*(long *)(lVar37 + 0x28) + (long)*(int *)(pcVar28 + 5) + (long)iVar4 * 8);
      uVar36 = *(ulong *)(*(long *)(lVar37 + 0x20) + (ulong)*puVar11 * 8);
      if (uVar36 == 0x5c01aa2d7) {
        uVar35 = puVar11[1];
        if ((int)uVar35 < 0) goto LAB_710306d0a0;
        pcVar31 = pcVar28 + (int)uVar35;
        break;
      }
      iVar9 = iVar4 + -1;
      if (uVar36 < 0x5c01aa2d8) {
        iVar33 = iVar4 + 1;
        iVar9 = iVar20;
      }
      iVar20 = iVar9;
    } while (iVar33 <= iVar20);
  }
  else {
LAB_710306d0a0:
    pcVar31 = "";
  }
  if (*pcVar31 == '\b') {
    uVar50 = *(undefined4 *)(pcVar31 + 1);
  }
  else {
    uVar50 = 0xc2be0000;
  }
  *(undefined4 *)(param_1 + 0x4c) = uVar50;
  if ((*pcVar28 == '\f') && (iVar20 = *(int *)(pcVar28 + 1) + -1, 0 < *(int *)(pcVar28 + 1))) {
    iVar33 = 0;
    pcVar31 = "";
    do {
      iVar4 = iVar20 + iVar33;
      if (iVar4 < 0) {
        iVar4 = iVar4 + 1;
      }
      iVar4 = iVar4 >> 1;
      puVar11 = (uint *)(*(long *)(lVar37 + 0x28) + (long)*(int *)(pcVar28 + 5) + (long)iVar4 * 8);
      uVar36 = *(ulong *)(*(long *)(lVar37 + 0x20) + (ulong)*puVar11 * 8);
      if (uVar36 == 0x51d0555fa) {
        uVar35 = puVar11[1];
        if ((int)uVar35 < 0) goto LAB_710306d154;
        pcVar31 = pcVar28 + (int)uVar35;
        break;
      }
      iVar9 = iVar4 + -1;
      if (uVar36 < 0x51d0555fb) {
        iVar33 = iVar4 + 1;
        iVar9 = iVar20;
      }
      iVar20 = iVar9;
    } while (iVar33 <= iVar20);
  }
  else {
LAB_710306d154:
    pcVar31 = "";
  }
  if (*pcVar31 == '\b') {
    uVar50 = *(undefined4 *)(pcVar31 + 1);
  }
  else {
    uVar50 = 0x41700000;
  }
  *(undefined4 *)(param_1 + 0x50) = uVar50;
  pppbVar21 = *ppppbVar47;
  if ((*(char *)pppbVar21 == '\f') &&
     (iVar20 = *(int *)((long)pppbVar21 + 1) + -1, 0 < *(int *)((long)pppbVar21 + 1))) {
    lVar37 = *param_2;
    iVar33 = 0;
    pbVar40 = &DAT_7104742dbb;
    do {
      iVar4 = iVar20 + iVar33;
      if (iVar4 < 0) {
        iVar4 = iVar4 + 1;
      }
      iVar4 = iVar4 >> 1;
      puVar11 = (uint *)(*(long *)(lVar37 + 0x28) + (long)*(int *)((long)pppbVar21 + 5) +
                        (long)iVar4 * 8);
      uVar36 = *(ulong *)(*(long *)(lVar37 + 0x20) + (ulong)*puVar11 * 8);
      if (uVar36 == 0x17f90f5752) {
        uVar35 = puVar11[1];
        if ((int)uVar35 < 0) goto LAB_710306d214;
        pbVar40 = (byte *)((long)pppbVar21 + (long)(int)uVar35);
        goto LAB_710306d220;
      }
      iVar9 = iVar4 + -1;
      if (uVar36 < 0x17f90f5753) {
        iVar33 = iVar4 + 1;
        iVar9 = iVar20;
      }
      iVar20 = iVar9;
    } while (iVar33 <= iVar20);
    lVar37 = 0;
  }
  else {
LAB_710306d214:
    lVar37 = 0;
    pbVar40 = &DAT_7104742dbb;
  }
LAB_710306d220:
  if (*pbVar40 - 0xb < 2) {
    iVar20 = *(int *)(pbVar40 + 1);
  }
  else {
    iVar20 = 0;
  }
  lVar29 = *(long *)(param_1 + 0x60) - *(long *)(param_1 + 0x58) >> 3;
  uVar48 = lVar29 * -0x3333333333333333;
  uVar36 = (ulong)iVar20;
  plVar2 = (long *)(param_1 + 0x58);
  if (uVar48 < uVar36) {
    FUN_7103079630(plVar2,uVar36 + lVar29 * 0x3333333333333333,(long ****)param_3,ppppbVar14,param_5
                   ,param_6,param_7,param_8);
  }
  else if (uVar48 - uVar36 != 0) {
    *(ulong *)(param_1 + 0x60) = *(long *)(param_1 + 0x58) + uVar36 * 0x28;
  }
  pppplVar42 = (long ****)(ulong)*pbVar40;
  if ((*pbVar40 - 0xb < 2) && (0 < *(int *)(pbVar40 + 1))) {
    uVar50 = 0x3f800000;
    lVar29 = 0;
LAB_710306d324:
    do {
      iVar20 = (int)lVar29;
      if (iVar20 < 0) {
LAB_710306d35c:
        lVar22 = 0;
        pppplVar44 = (long ****)&DAT_7104742dbb;
      }
      else {
        pppplVar44 = (long ****)&DAT_7104742dbb;
        lVar22 = 0;
        if ((int)pppplVar42 == 0xb) {
          if (*(int *)(pbVar40 + 1) <= iVar20) goto LAB_710306d35c;
          pppplVar44 = (long ****)(pbVar40 + *(int *)(pbVar40 + (long)iVar20 * 4 + 5));
          lVar22 = lVar37;
        }
      }
      pppplVar42 = (long ****)&DAT_7104742dbb;
      if ((*(byte *)pppplVar44 == 0xc) &&
         (iVar20 = *(int *)((long)pppplVar44 + 1) + -1, 0 < *(int *)((long)pppplVar44 + 1))) {
        iVar33 = 0;
        param_8 = (byte ****)(*(long *)(lVar22 + 0x28) + (long)*(int *)((long)pppplVar44 + 5));
        do {
          iVar4 = iVar20 + iVar33;
          if (iVar4 < 0) {
            iVar4 = iVar4 + 1;
          }
          iVar4 = iVar4 >> 1;
          uVar36 = *(ulong *)(*(long *)(lVar22 + 0x20) + (ulong)*(uint *)(param_8 + iVar4) * 8);
          if (uVar36 == 0xdc77e0dec) {
            uVar35 = *(uint *)((long)(param_8 + iVar4) + 4);
            if (-1 < (int)uVar35) {
              pppplVar42 = (long ****)((long)pppplVar44 + (long)(int)uVar35);
            }
            break;
          }
          iVar9 = iVar4 + -1;
          if (uVar36 < 0xdc77e0ded) {
            iVar33 = iVar4 + 1;
            iVar9 = iVar20;
          }
          iVar20 = iVar9;
        } while (iVar33 <= iVar20);
      }
      switch(*(byte *)pppplVar42) {
      case 1:
      case 3:
        uVar35 = (uint)*(byte *)((long)pppplVar42 + 1);
        break;
      case 2:
        uVar35 = (uint)(char)*(byte *)((long)pppplVar42 + 1);
        break;
      case 4:
        uVar35 = (uint)*(short *)((long)pppplVar42 + 1);
        break;
      case 5:
        uVar35 = (uint)*(ushort *)((long)pppplVar42 + 1);
        break;
      case 6:
      case 7:
        uVar35 = *(uint *)((long)pppplVar42 + 1);
        break;
      default:
        uVar35 = 2;
      }
      *(uint *)(*plVar2 + lVar29 * 0x28) = uVar35;
      if ((*(byte *)pppplVar44 == 0xc) &&
         (iVar20 = *(int *)((long)pppplVar44 + 1) + -1, 0 < *(int *)((long)pppplVar44 + 1))) {
        iVar33 = 0;
        param_8 = (byte ****)(*(long *)(lVar22 + 0x28) + (long)*(int *)((long)pppplVar44 + 5));
        do {
          iVar4 = iVar20 + iVar33;
          if (iVar4 < 0) {
            iVar4 = iVar4 + 1;
          }
          iVar4 = iVar4 >> 1;
          uVar36 = *(ulong *)(*(long *)(lVar22 + 0x20) + (ulong)*(uint *)(param_8 + iVar4) * 8);
          if (uVar36 == 0x10f6755853) {
            uVar35 = *(uint *)((long)(param_8 + iVar4) + 4);
            if (-1 < (int)uVar35) {
              pppplVar42 = (long ****)((long)pppplVar44 + (long)(int)uVar35);
              lVar30 = lVar22;
              goto LAB_710306d4b8;
            }
            break;
          }
          iVar9 = iVar4 + -1;
          if (uVar36 < 0x10f6755854) {
            iVar33 = iVar4 + 1;
            iVar9 = iVar20;
          }
          iVar20 = iVar9;
        } while (iVar33 <= iVar20);
      }
      lVar30 = 0;
      pppplVar42 = (long ****)&DAT_7104742dbb;
LAB_710306d4b8:
      param_7 = (uint *)(ulong)*(byte *)pppplVar42;
      if (*(byte *)pppplVar42 == 9) {
        uVar16 = *(undefined8 *)
                  (*(long *)(lVar30 + 0x20) + (long)*(int *)((long)pppplVar42 + 1) * 8);
      }
      else {
        uVar16 = 0;
      }
      *(undefined8 *)(*plVar2 + lVar29 * 0x28 + 8) = uVar16;
      pppplVar42 = (long ****)&DAT_7104742dbb;
      if ((*(byte *)pppplVar44 == 0xc) &&
         (iVar20 = *(int *)((long)pppplVar44 + 1) + -1, 0 < *(int *)((long)pppplVar44 + 1))) {
        param_7 = *(uint **)(lVar22 + 0x20);
        iVar33 = 0;
        param_8 = (byte ****)(*(long *)(lVar22 + 0x28) + (long)*(int *)((long)pppplVar44 + 5));
        do {
          iVar4 = iVar20 + iVar33;
          if (iVar4 < 0) {
            iVar4 = iVar4 + 1;
          }
          iVar4 = iVar4 >> 1;
          if (*(long ****)((long)param_7 + (ulong)*(uint *)(param_8 + iVar4) * 8) ==
              (long ***)0xe2105b208) {
            uVar35 = *(uint *)((long)(param_8 + iVar4) + 4);
            if (-1 < (int)uVar35) {
              pppplVar42 = (long ****)((long)pppplVar44 + (long)(int)uVar35);
            }
            break;
          }
          iVar9 = iVar4 + -1;
          if (*(long ****)((long)param_7 + (ulong)*(uint *)(param_8 + iVar4) * 8) <
              (long ***)0xe2105b209) {
            iVar33 = iVar4 + 1;
            iVar9 = iVar20;
          }
          iVar20 = iVar9;
        } while (iVar33 <= iVar20);
      }
      uVar52 = uVar50;
      if (*(byte *)pppplVar42 == 8) {
        uVar52 = *(undefined4 *)((long)pppplVar42 + 1);
      }
      *(undefined4 *)(*plVar2 + lVar29 * 0x28 + 0x10) = uVar52;
      pppplVar42 = (long ****)&DAT_7104742dbb;
      if ((*(byte *)pppplVar44 == 0xc) &&
         (iVar20 = *(int *)((long)pppplVar44 + 1) + -1, 0 < *(int *)((long)pppplVar44 + 1))) {
        param_7 = *(uint **)(lVar22 + 0x20);
        iVar33 = 0;
        param_8 = (byte ****)(*(long *)(lVar22 + 0x28) + (long)*(int *)((long)pppplVar44 + 5));
        do {
          iVar4 = iVar20 + iVar33;
          if (iVar4 < 0) {
            iVar4 = iVar4 + 1;
          }
          iVar4 = iVar4 >> 1;
          if (*(long ****)((long)param_7 + (ulong)*(uint *)(param_8 + iVar4) * 8) ==
              (long ***)0xe5602829e) {
            uVar35 = *(uint *)((long)(param_8 + iVar4) + 4);
            if (-1 < (int)uVar35) {
              pppplVar42 = (long ****)((long)pppplVar44 + (long)(int)uVar35);
            }
            break;
          }
          iVar9 = iVar4 + -1;
          if (*(long ****)((long)param_7 + (ulong)*(uint *)(param_8 + iVar4) * 8) <
              (long ***)0xe5602829f) {
            iVar33 = iVar4 + 1;
            iVar9 = iVar20;
          }
          iVar20 = iVar9;
        } while (iVar33 <= iVar20);
      }
      uVar52 = uVar50;
      if (*(byte *)pppplVar42 == 8) {
        uVar52 = *(undefined4 *)((long)pppplVar42 + 1);
      }
      *(undefined4 *)(*plVar2 + lVar29 * 0x28 + 0x14) = uVar52;
      pppplVar42 = (long ****)&DAT_7104742dbb;
      if ((*(byte *)pppplVar44 == 0xc) &&
         (iVar20 = *(int *)((long)pppplVar44 + 1) + -1, 0 < *(int *)((long)pppplVar44 + 1))) {
        param_7 = *(uint **)(lVar22 + 0x20);
        iVar33 = 0;
        param_8 = (byte ****)(*(long *)(lVar22 + 0x28) + (long)*(int *)((long)pppplVar44 + 5));
        do {
          iVar4 = iVar20 + iVar33;
          if (iVar4 < 0) {
            iVar4 = iVar4 + 1;
          }
          iVar4 = iVar4 >> 1;
          if (*(long ****)((long)param_7 + (ulong)*(uint *)(param_8 + iVar4) * 8) ==
              (long ***)0xecf0bd324) {
            uVar35 = *(uint *)((long)(param_8 + iVar4) + 4);
            if (-1 < (int)uVar35) {
              pppplVar42 = (long ****)((long)pppplVar44 + (long)(int)uVar35);
            }
            break;
          }
          iVar9 = iVar4 + -1;
          if (*(long ****)((long)param_7 + (ulong)*(uint *)(param_8 + iVar4) * 8) <
              (long ***)0xecf0bd325) {
            iVar33 = iVar4 + 1;
            iVar9 = iVar20;
          }
          iVar20 = iVar9;
        } while (iVar33 <= iVar20);
      }
      uVar52 = uVar50;
      if (*(byte *)pppplVar42 == 8) {
        uVar52 = *(undefined4 *)((long)pppplVar42 + 1);
      }
      *(undefined4 *)(*plVar2 + lVar29 * 0x28 + 0x18) = uVar52;
      pppplVar42 = (long ****)&DAT_7104742dbb;
      if ((*(byte *)pppplVar44 == 0xc) &&
         (iVar20 = *(int *)((long)pppplVar44 + 1) + -1, 0 < *(int *)((long)pppplVar44 + 1))) {
        param_7 = *(uint **)(lVar22 + 0x20);
        iVar33 = 0;
        param_8 = (byte ****)(*(long *)(lVar22 + 0x28) + (long)*(int *)((long)pppplVar44 + 5));
        do {
          iVar4 = iVar20 + iVar33;
          if (iVar4 < 0) {
            iVar4 = iVar4 + 1;
          }
          iVar4 = iVar4 >> 1;
          if (*(long ****)((long)param_7 + (ulong)*(uint *)(param_8 + iVar4) * 8) ==
              (long ***)0xee05c4762) {
            uVar35 = *(uint *)((long)(param_8 + iVar4) + 4);
            if (-1 < (int)uVar35) {
              pppplVar42 = (long ****)((long)pppplVar44 + (long)(int)uVar35);
            }
            break;
          }
          iVar9 = iVar4 + -1;
          if (*(long ****)((long)param_7 + (ulong)*(uint *)(param_8 + iVar4) * 8) <
              (long ***)0xee05c4763) {
            iVar33 = iVar4 + 1;
            iVar9 = iVar20;
          }
          iVar20 = iVar9;
        } while (iVar33 <= iVar20);
      }
      switch(*(byte *)pppplVar42) {
      case 1:
      case 3:
        uVar35 = (uint)*(byte *)((long)pppplVar42 + 1);
        break;
      case 2:
        uVar35 = (uint)(char)*(byte *)((long)pppplVar42 + 1);
        break;
      case 4:
        uVar35 = (uint)*(short *)((long)pppplVar42 + 1);
        break;
      case 5:
        uVar35 = (uint)*(ushort *)((long)pppplVar42 + 1);
        break;
      case 6:
      case 7:
        uVar35 = *(uint *)((long)pppplVar42 + 1);
        break;
      default:
        uVar35 = 1;
      }
      param_6 = (uint *)(*plVar2 + lVar29 * 0x28);
      *(bool *)(param_6 + 7) = uVar35 != 0;
      param_5 = (long ****)&DAT_7104742dbb;
      if ((*(byte *)pppplVar44 == 0xc) &&
         (iVar20 = *(int *)((long)pppplVar44 + 1) + -1, 0 < *(int *)((long)pppplVar44 + 1))) {
        param_7 = *(uint **)(lVar22 + 0x20);
        param_6 = (uint *)0x0;
        do {
          uVar35 = (uint)param_6;
          iVar33 = iVar20 + uVar35;
          if (iVar33 < 0) {
            iVar33 = iVar33 + 1;
          }
          uVar18 = iVar33 >> 1;
          param_8 = (byte ****)(ulong)uVar18;
          puVar11 = (uint *)(*(long *)(lVar22 + 0x28) + (long)*(int *)((long)pppplVar44 + 5) +
                            (long)(int)uVar18 * 8);
          if (*(long ****)((long)param_7 + (ulong)*puVar11 * 8) == (long ***)0xa4427db71) {
            uVar35 = puVar11[1];
            if (-1 < (int)uVar35) {
              param_5 = (long ****)((long)pppplVar44 + (long)(int)uVar35);
            }
            break;
          }
          iVar33 = uVar18 - 1;
          if (*(long ****)((long)param_7 + (ulong)*puVar11 * 8) < (long ***)0xa4427db72) {
            uVar35 = uVar18 + 1;
            iVar33 = iVar20;
          }
          iVar20 = iVar33;
          param_6 = (uint *)(ulong)uVar35;
        } while ((int)uVar35 <= iVar20);
      }
      uVar52 = 0x41200000;
      if (*(byte *)param_5 == 8) {
        uVar52 = *(undefined4 *)((long)param_5 + 1);
      }
      lVar22 = lVar29 * 0x28;
      lVar29 = lVar29 + 1;
      *(undefined4 *)(*plVar2 + lVar22 + 0x20) = uVar52;
      pppplVar42 = (long ****)(ulong)*pbVar40;
      if (*pbVar40 - 0xb < 2) {
        ppppbVar14 = (byte ****)(ulong)*(uint *)(pbVar40 + 1);
        if ((int)*(uint *)(pbVar40 + 1) <= lVar29) break;
        goto LAB_710306d324;
      }
      ppppbVar14 = (byte ****)0x0;
    } while (lVar29 < 0);
  }
  pppbVar21 = *ppppbVar47;
  if ((*(char *)pppbVar21 == '\f') &&
     (iVar20 = *(int *)((long)pppbVar21 + 1) + -1, 0 < *(int *)((long)pppbVar21 + 1))) {
    lVar37 = *param_2;
    iVar33 = 0;
    pbVar40 = &DAT_7104742dbb;
    do {
      iVar4 = iVar20 + iVar33;
      if (iVar4 < 0) {
        iVar4 = iVar4 + 1;
      }
      iVar4 = iVar4 >> 1;
      puVar11 = (uint *)(*(long *)(lVar37 + 0x28) + (long)*(int *)((long)pppbVar21 + 5) +
                        (long)iVar4 * 8);
      uVar36 = *(ulong *)(*(long *)(lVar37 + 0x20) + (ulong)*puVar11 * 8);
      if (uVar36 == 0x189478af19) {
        uVar35 = puVar11[1];
        if ((int)uVar35 < 0) goto LAB_710306d90c;
        pbVar40 = (byte *)((long)pppbVar21 + (long)(int)uVar35);
        goto LAB_710306d918;
      }
      iVar9 = iVar4 + -1;
      if (uVar36 < 0x189478af1a) {
        iVar33 = iVar4 + 1;
        iVar9 = iVar20;
      }
      iVar20 = iVar9;
    } while (iVar33 <= iVar20);
    lVar37 = 0;
  }
  else {
LAB_710306d90c:
    lVar37 = 0;
    pbVar40 = &DAT_7104742dbb;
  }
LAB_710306d918:
  if (*pbVar40 - 0xb < 2) {
    iVar20 = *(int *)(pbVar40 + 1);
  }
  else {
    iVar20 = 0;
  }
  lVar29 = *(long *)(param_1 + 0x78) - *(long *)(param_1 + 0x70) >> 3;
  uVar48 = lVar29 * -0x3333333333333333;
  uVar36 = (ulong)iVar20;
  plVar2 = (long *)(param_1 + 0x70);
  if (uVar48 < uVar36) {
    FUN_7103079630(plVar2,uVar36 + lVar29 * 0x3333333333333333,pppplVar42,ppppbVar14,param_5,param_6
                   ,param_7,param_8);
  }
  else if (uVar48 - uVar36 != 0) {
    *(ulong *)(param_1 + 0x78) = *(long *)(param_1 + 0x70) + uVar36 * 0x28;
  }
  puVar11 = (uint *)(ulong)*pbVar40;
  if ((*pbVar40 - 0xb < 2) && (0 < *(int *)(pbVar40 + 1))) {
    uVar50 = 0x3f800000;
    lVar29 = 0;
LAB_710306da14:
    do {
      iVar20 = (int)lVar29;
      if (iVar20 < 0) {
LAB_710306da4c:
        lVar22 = 0;
        pppplVar42 = (long ****)&DAT_7104742dbb;
      }
      else {
        pppplVar42 = (long ****)&DAT_7104742dbb;
        lVar22 = 0;
        if ((int)puVar11 == 0xb) {
          if (*(int *)(pbVar40 + 1) <= iVar20) goto LAB_710306da4c;
          pppplVar42 = (long ****)(pbVar40 + *(int *)(pbVar40 + (long)iVar20 * 4 + 5));
          lVar22 = lVar37;
        }
      }
      pppplVar44 = (long ****)&DAT_7104742dbb;
      if ((*(byte *)pppplVar42 == 0xc) &&
         (iVar20 = *(int *)((long)pppplVar42 + 1) + -1, 0 < *(int *)((long)pppplVar42 + 1))) {
        iVar33 = 0;
        param_8 = (byte ****)(*(long *)(lVar22 + 0x28) + (long)*(int *)((long)pppplVar42 + 5));
        do {
          iVar4 = iVar20 + iVar33;
          if (iVar4 < 0) {
            iVar4 = iVar4 + 1;
          }
          iVar4 = iVar4 >> 1;
          uVar36 = *(ulong *)(*(long *)(lVar22 + 0x20) + (ulong)*(uint *)(param_8 + iVar4) * 8);
          if (uVar36 == 0xdc77e0dec) {
            uVar35 = *(uint *)((long)(param_8 + iVar4) + 4);
            if (-1 < (int)uVar35) {
              pppplVar44 = (long ****)((long)pppplVar42 + (long)(int)uVar35);
            }
            break;
          }
          iVar9 = iVar4 + -1;
          if (uVar36 < 0xdc77e0ded) {
            iVar33 = iVar4 + 1;
            iVar9 = iVar20;
          }
          iVar20 = iVar9;
        } while (iVar33 <= iVar20);
      }
      switch(*(byte *)pppplVar44) {
      case 1:
      case 3:
        uVar35 = (uint)*(byte *)((long)pppplVar44 + 1);
        break;
      case 2:
        uVar35 = (uint)(char)*(byte *)((long)pppplVar44 + 1);
        break;
      case 4:
        uVar35 = (uint)*(short *)((long)pppplVar44 + 1);
        break;
      case 5:
        uVar35 = (uint)*(ushort *)((long)pppplVar44 + 1);
        break;
      case 6:
      case 7:
        uVar35 = *(uint *)((long)pppplVar44 + 1);
        break;
      default:
        uVar35 = 3;
      }
      *(uint *)(*plVar2 + lVar29 * 0x28) = uVar35;
      if ((*(byte *)pppplVar42 == 0xc) &&
         (iVar20 = *(int *)((long)pppplVar42 + 1) + -1, 0 < *(int *)((long)pppplVar42 + 1))) {
        iVar33 = 0;
        param_8 = (byte ****)(*(long *)(lVar22 + 0x28) + (long)*(int *)((long)pppplVar42 + 5));
        do {
          iVar4 = iVar20 + iVar33;
          if (iVar4 < 0) {
            iVar4 = iVar4 + 1;
          }
          iVar4 = iVar4 >> 1;
          uVar36 = *(ulong *)(*(long *)(lVar22 + 0x20) + (ulong)*(uint *)(param_8 + iVar4) * 8);
          if (uVar36 == 0x10f6755853) {
            uVar35 = *(uint *)((long)(param_8 + iVar4) + 4);
            if (-1 < (int)uVar35) {
              pppplVar44 = (long ****)((long)pppplVar42 + (long)(int)uVar35);
              lVar30 = lVar22;
              goto LAB_710306dba8;
            }
            break;
          }
          iVar9 = iVar4 + -1;
          if (uVar36 < 0x10f6755854) {
            iVar33 = iVar4 + 1;
            iVar9 = iVar20;
          }
          iVar20 = iVar9;
        } while (iVar33 <= iVar20);
      }
      lVar30 = 0;
      pppplVar44 = (long ****)&DAT_7104742dbb;
LAB_710306dba8:
      param_7 = (uint *)(ulong)*(byte *)pppplVar44;
      if (*(byte *)pppplVar44 == 9) {
        uVar16 = *(undefined8 *)
                  (*(long *)(lVar30 + 0x20) + (long)*(int *)((long)pppplVar44 + 1) * 8);
      }
      else {
        uVar16 = 0;
      }
      *(undefined8 *)(*plVar2 + lVar29 * 0x28 + 8) = uVar16;
      pppplVar44 = (long ****)&DAT_7104742dbb;
      if ((*(byte *)pppplVar42 == 0xc) &&
         (iVar20 = *(int *)((long)pppplVar42 + 1) + -1, 0 < *(int *)((long)pppplVar42 + 1))) {
        param_7 = *(uint **)(lVar22 + 0x20);
        iVar33 = 0;
        param_8 = (byte ****)(*(long *)(lVar22 + 0x28) + (long)*(int *)((long)pppplVar42 + 5));
        do {
          iVar4 = iVar20 + iVar33;
          if (iVar4 < 0) {
            iVar4 = iVar4 + 1;
          }
          iVar4 = iVar4 >> 1;
          if (*(long ****)((long)param_7 + (ulong)*(uint *)(param_8 + iVar4) * 8) ==
              (long ***)0xe2105b208) {
            uVar35 = *(uint *)((long)(param_8 + iVar4) + 4);
            if (-1 < (int)uVar35) {
              pppplVar44 = (long ****)((long)pppplVar42 + (long)(int)uVar35);
            }
            break;
          }
          iVar9 = iVar4 + -1;
          if (*(long ****)((long)param_7 + (ulong)*(uint *)(param_8 + iVar4) * 8) <
              (long ***)0xe2105b209) {
            iVar33 = iVar4 + 1;
            iVar9 = iVar20;
          }
          iVar20 = iVar9;
        } while (iVar33 <= iVar20);
      }
      uVar52 = uVar50;
      if (*(byte *)pppplVar44 == 8) {
        uVar52 = *(undefined4 *)((long)pppplVar44 + 1);
      }
      *(undefined4 *)(*plVar2 + lVar29 * 0x28 + 0x10) = uVar52;
      pppplVar44 = (long ****)&DAT_7104742dbb;
      if ((*(byte *)pppplVar42 == 0xc) &&
         (iVar20 = *(int *)((long)pppplVar42 + 1) + -1, 0 < *(int *)((long)pppplVar42 + 1))) {
        param_7 = *(uint **)(lVar22 + 0x20);
        iVar33 = 0;
        param_8 = (byte ****)(*(long *)(lVar22 + 0x28) + (long)*(int *)((long)pppplVar42 + 5));
        do {
          iVar4 = iVar20 + iVar33;
          if (iVar4 < 0) {
            iVar4 = iVar4 + 1;
          }
          iVar4 = iVar4 >> 1;
          if (*(long ****)((long)param_7 + (ulong)*(uint *)(param_8 + iVar4) * 8) ==
              (long ***)0xe5602829e) {
            uVar35 = *(uint *)((long)(param_8 + iVar4) + 4);
            if (-1 < (int)uVar35) {
              pppplVar44 = (long ****)((long)pppplVar42 + (long)(int)uVar35);
            }
            break;
          }
          iVar9 = iVar4 + -1;
          if (*(long ****)((long)param_7 + (ulong)*(uint *)(param_8 + iVar4) * 8) <
              (long ***)0xe5602829f) {
            iVar33 = iVar4 + 1;
            iVar9 = iVar20;
          }
          iVar20 = iVar9;
        } while (iVar33 <= iVar20);
      }
      uVar52 = uVar50;
      if (*(byte *)pppplVar44 == 8) {
        uVar52 = *(undefined4 *)((long)pppplVar44 + 1);
      }
      *(undefined4 *)(*plVar2 + lVar29 * 0x28 + 0x14) = uVar52;
      pppplVar44 = (long ****)&DAT_7104742dbb;
      if ((*(byte *)pppplVar42 == 0xc) &&
         (iVar20 = *(int *)((long)pppplVar42 + 1) + -1, 0 < *(int *)((long)pppplVar42 + 1))) {
        param_7 = *(uint **)(lVar22 + 0x20);
        iVar33 = 0;
        param_8 = (byte ****)(*(long *)(lVar22 + 0x28) + (long)*(int *)((long)pppplVar42 + 5));
        do {
          iVar4 = iVar20 + iVar33;
          if (iVar4 < 0) {
            iVar4 = iVar4 + 1;
          }
          iVar4 = iVar4 >> 1;
          if (*(long ****)((long)param_7 + (ulong)*(uint *)(param_8 + iVar4) * 8) ==
              (long ***)0xecf0bd324) {
            uVar35 = *(uint *)((long)(param_8 + iVar4) + 4);
            if (-1 < (int)uVar35) {
              pppplVar44 = (long ****)((long)pppplVar42 + (long)(int)uVar35);
            }
            break;
          }
          iVar9 = iVar4 + -1;
          if (*(long ****)((long)param_7 + (ulong)*(uint *)(param_8 + iVar4) * 8) <
              (long ***)0xecf0bd325) {
            iVar33 = iVar4 + 1;
            iVar9 = iVar20;
          }
          iVar20 = iVar9;
        } while (iVar33 <= iVar20);
      }
      uVar52 = uVar50;
      if (*(byte *)pppplVar44 == 8) {
        uVar52 = *(undefined4 *)((long)pppplVar44 + 1);
      }
      *(undefined4 *)(*plVar2 + lVar29 * 0x28 + 0x18) = uVar52;
      pppplVar44 = (long ****)&DAT_7104742dbb;
      if ((*(byte *)pppplVar42 == 0xc) &&
         (iVar20 = *(int *)((long)pppplVar42 + 1) + -1, 0 < *(int *)((long)pppplVar42 + 1))) {
        param_7 = *(uint **)(lVar22 + 0x20);
        iVar33 = 0;
        param_8 = (byte ****)(*(long *)(lVar22 + 0x28) + (long)*(int *)((long)pppplVar42 + 5));
        do {
          iVar4 = iVar20 + iVar33;
          if (iVar4 < 0) {
            iVar4 = iVar4 + 1;
          }
          iVar4 = iVar4 >> 1;
          if (*(long ****)((long)param_7 + (ulong)*(uint *)(param_8 + iVar4) * 8) ==
              (long ***)0xee05c4762) {
            uVar35 = *(uint *)((long)(param_8 + iVar4) + 4);
            if (-1 < (int)uVar35) {
              pppplVar44 = (long ****)((long)pppplVar42 + (long)(int)uVar35);
            }
            break;
          }
          iVar9 = iVar4 + -1;
          if (*(long ****)((long)param_7 + (ulong)*(uint *)(param_8 + iVar4) * 8) <
              (long ***)0xee05c4763) {
            iVar33 = iVar4 + 1;
            iVar9 = iVar20;
          }
          iVar20 = iVar9;
        } while (iVar33 <= iVar20);
      }
      switch(*(byte *)pppplVar44) {
      case 1:
      case 3:
        uVar35 = (uint)*(byte *)((long)pppplVar44 + 1);
        break;
      case 2:
        uVar35 = (uint)(char)*(byte *)((long)pppplVar44 + 1);
        break;
      case 4:
        uVar35 = (uint)*(short *)((long)pppplVar44 + 1);
        break;
      case 5:
        uVar35 = (uint)*(ushort *)((long)pppplVar44 + 1);
        break;
      case 6:
      case 7:
        uVar35 = *(uint *)((long)pppplVar44 + 1);
        break;
      default:
        uVar35 = 1;
      }
      param_6 = (uint *)(*plVar2 + lVar29 * 0x28);
      *(bool *)(param_6 + 7) = uVar35 != 0;
      param_5 = (long ****)&DAT_7104742dbb;
      if ((*(byte *)pppplVar42 == 0xc) &&
         (iVar20 = *(int *)((long)pppplVar42 + 1) + -1, 0 < *(int *)((long)pppplVar42 + 1))) {
        param_7 = *(uint **)(lVar22 + 0x20);
        param_6 = (uint *)0x0;
        do {
          uVar35 = (uint)param_6;
          iVar33 = iVar20 + uVar35;
          if (iVar33 < 0) {
            iVar33 = iVar33 + 1;
          }
          uVar18 = iVar33 >> 1;
          param_8 = (byte ****)(ulong)uVar18;
          puVar11 = (uint *)(*(long *)(lVar22 + 0x28) + (long)*(int *)((long)pppplVar42 + 5) +
                            (long)(int)uVar18 * 8);
          if (*(long ****)((long)param_7 + (ulong)*puVar11 * 8) == (long ***)0xa4427db71) {
            uVar35 = puVar11[1];
            if (-1 < (int)uVar35) {
              param_5 = (long ****)((long)pppplVar42 + (long)(int)uVar35);
            }
            break;
          }
          iVar33 = uVar18 - 1;
          if (*(long ****)((long)param_7 + (ulong)*puVar11 * 8) < (long ***)0xa4427db72) {
            uVar35 = uVar18 + 1;
            iVar33 = iVar20;
          }
          iVar20 = iVar33;
          param_6 = (uint *)(ulong)uVar35;
        } while ((int)uVar35 <= iVar20);
      }
      uVar52 = 0x41200000;
      if (*(byte *)param_5 == 8) {
        uVar52 = *(undefined4 *)((long)param_5 + 1);
      }
      lVar22 = lVar29 * 0x28;
      lVar29 = lVar29 + 1;
      *(undefined4 *)(*plVar2 + lVar22 + 0x20) = uVar52;
      puVar11 = (uint *)(ulong)*pbVar40;
      if (*pbVar40 - 0xb < 2) {
        ppppbVar14 = (byte ****)(ulong)*(uint *)(pbVar40 + 1);
        if ((int)*(uint *)(pbVar40 + 1) <= lVar29) break;
        goto LAB_710306da14;
      }
      ppppbVar14 = (byte ****)0x0;
    } while (lVar29 < 0);
  }
  pppbVar21 = *ppppbVar47;
  if ((*(char *)pppbVar21 == '\f') &&
     (iVar20 = *(int *)((long)pppbVar21 + 1) + -1, 0 < *(int *)((long)pppbVar21 + 1))) {
    lVar37 = *param_2;
    iVar33 = 0;
    pbVar40 = &DAT_7104742dbb;
    do {
      iVar4 = iVar20 + iVar33;
      if (iVar4 < 0) {
        iVar4 = iVar4 + 1;
      }
      iVar4 = iVar4 >> 1;
      puVar15 = (uint *)(*(long *)(lVar37 + 0x28) + (long)*(int *)((long)pppbVar21 + 5) +
                        (long)iVar4 * 8);
      uVar36 = *(ulong *)(*(long *)(lVar37 + 0x20) + (ulong)*puVar15 * 8);
      if (uVar36 == 0x12c746d6d8) {
        uVar35 = puVar15[1];
        if ((int)uVar35 < 0) goto LAB_710306dffc;
        pbVar40 = (byte *)((long)pppbVar21 + (long)(int)uVar35);
        goto LAB_710306e008;
      }
      iVar9 = iVar4 + -1;
      if (uVar36 < 0x12c746d6d9) {
        iVar33 = iVar4 + 1;
        iVar9 = iVar20;
      }
      iVar20 = iVar9;
    } while (iVar33 <= iVar20);
    lVar37 = 0;
  }
  else {
LAB_710306dffc:
    lVar37 = 0;
    pbVar40 = &DAT_7104742dbb;
  }
LAB_710306e008:
  if (*pbVar40 - 0xb < 2) {
    iVar20 = *(int *)(pbVar40 + 1);
  }
  else {
    iVar20 = 0;
  }
  uVar36 = (ulong)iVar20;
  pvVar43 = *(void **)(param_1 + 0x88);
  puVar27 = *(undefined8 **)(param_1 + 0x90);
  pppplVar42 = (long ****)((long)puVar27 - (long)pvVar43);
  uVar48 = (long)pppplVar42 >> 3;
  if (uVar48 < uVar36) {
    uVar49 = uVar36 - uVar48;
    if ((ulong)(*(long *)(param_1 + 0x98) - (long)puVar27 >> 3) < uVar49) {
      if (iVar20 < 0) goto LAB_7103079628;
      lVar29 = *(long *)(param_1 + 0x98) - (long)pvVar43;
      if ((ulong)(lVar29 >> 3) < 0xfffffffffffffff) {
        uVar24 = lVar29 >> 2;
        uVar23 = uVar36;
        if (uVar36 <= uVar24) {
          uVar23 = uVar24;
        }
        if (uVar23 != 0) {
          if (uVar23 >> 0x3d != 0) goto LAB_7103079260;
          goto LAB_710306e0f8;
        }
LAB_710306e15c:
        pvVar46 = (void *)0x0;
      }
      else {
        uVar23 = 0x1fffffffffffffff;
LAB_710306e0f8:
        ppplVar25 = (long ***)(uVar23 * 8);
        if (ppplVar25 == (long ***)0x0) {
          ppplVar25 = (long ***)0x1;
        }
        pvVar46 = (void *)FUN_710392e290(0x10,ppplVar25,(long ****)puVar11,ppppbVar14,param_5,
                                         param_6,param_7,param_8);
        if (pvVar46 == (void *)0x0) {
          if (DAT_7105332f00 != (long *)0x0) {
            local_84 = 0;
            pppplVar44 = &local_90;
            local_90 = ppplVar25;
            uVar24 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_84);
            if (((uVar24 & 1) != 0) &&
               (pvVar46 = (void *)FUN_710392e290(0x10,ppplVar25,pppplVar44,ppppbVar14,param_5,
                                                 param_6,param_7,param_8), pvVar46 != (void *)0x0))
            goto LAB_710306e160;
          }
          goto LAB_710306e15c;
        }
      }
LAB_710306e160:
      puVar11 = (uint *)(uVar49 * 8);
      memset((void *)((long)pvVar46 + uVar48 * 8),0,(size_t)puVar11);
      if (0 < (long)pppplVar42) {
        memcpy(pvVar46,pvVar43,(size_t)pppplVar42);
        puVar11 = (uint *)pppplVar42;
      }
      *(void **)(param_1 + 0x88) = pvVar46;
      *(void **)(param_1 + 0x90) = (void *)((long)pvVar46 + uVar36 * 8);
      *(void **)(param_1 + 0x98) = (void *)((long)pvVar46 + uVar23 * 8);
      if (pvVar43 != (void *)0x0) {
        FUN_710392eb40((ulong)pvVar43);
      }
    }
    else {
      uVar36 = uVar49;
      if ((uVar49 & 1) != 0) {
        *puVar27 = 0;
        puVar27 = (undefined8 *)(*(long *)(param_1 + 0x90) + 8);
        uVar36 = uVar49 - 1;
        *(undefined8 **)(param_1 + 0x90) = puVar27;
      }
      if (uVar49 != 1) {
        do {
          *puVar27 = 0;
          lVar29 = *(long *)(param_1 + 0x90);
          *(long *)(param_1 + 0x90) = lVar29 + 8;
          *(undefined8 *)(lVar29 + 8) = 0;
          puVar27 = (undefined8 *)(*(long *)(param_1 + 0x90) + 8);
          uVar36 = uVar36 - 2;
          *(undefined8 **)(param_1 + 0x90) = puVar27;
        } while (uVar36 != 0);
      }
    }
  }
  else if (uVar48 != uVar36) {
    *(void **)(param_1 + 0x90) = (void *)((long)pvVar43 + uVar36 * 8);
  }
  uVar35 = (uint)*pbVar40;
  if ((*pbVar40 - 0xb < 2) && (0 < *(int *)(pbVar40 + 1))) {
    lVar29 = 0;
LAB_710306e204:
    do {
      iVar20 = (int)lVar29;
      if (iVar20 < 0) {
LAB_710306e23c:
        lVar22 = 0;
        pbVar38 = &DAT_7104742dbb;
      }
      else {
        pbVar38 = &DAT_7104742dbb;
        lVar22 = 0;
        if (uVar35 == 0xb) {
          if (*(int *)(pbVar40 + 1) <= iVar20) goto LAB_710306e23c;
          pbVar38 = pbVar40 + *(int *)(pbVar40 + (long)iVar20 * 4 + 5);
          lVar22 = lVar37;
        }
      }
      pbVar41 = &DAT_7104742dbb;
      if ((*pbVar38 == 0xc) && (iVar20 = *(int *)(pbVar38 + 1) + -1, 0 < *(int *)(pbVar38 + 1))) {
        iVar33 = 0;
        do {
          iVar4 = iVar20 + iVar33;
          if (iVar4 < 0) {
            iVar4 = iVar4 + 1;
          }
          iVar4 = iVar4 >> 1;
          puVar15 = (uint *)(*(long *)(lVar22 + 0x28) + (long)*(int *)(pbVar38 + 5) +
                            (long)iVar4 * 8);
          puVar11 = *(uint **)(*(long *)(lVar22 + 0x20) + (ulong)*puVar15 * 8);
          if ((long ****)puVar11 == (long ****)0x795f45130) {
            uVar35 = puVar15[1];
            if (-1 < (int)uVar35) {
              pbVar41 = pbVar38 + (int)uVar35;
            }
            break;
          }
          iVar9 = iVar4 + -1;
          if (puVar11 < (long ****)0x795f45131) {
            iVar33 = iVar4 + 1;
            iVar9 = iVar20;
          }
          iVar20 = iVar9;
        } while (iVar33 <= iVar20);
      }
      uVar50 = 0xc3fa0000;
      if (*pbVar41 == 8) {
        uVar50 = *(undefined4 *)(pbVar41 + 1);
      }
      *(undefined4 *)(*(long *)(param_1 + 0x88) + lVar29 * 8) = uVar50;
      pbVar41 = &DAT_7104742dbb;
      if ((*pbVar38 == 0xc) && (iVar20 = *(int *)(pbVar38 + 1) + -1, 0 < *(int *)(pbVar38 + 1))) {
        iVar33 = 0;
        do {
          iVar4 = iVar20 + iVar33;
          if (iVar4 < 0) {
            iVar4 = iVar4 + 1;
          }
          iVar4 = iVar4 >> 1;
          puVar15 = (uint *)(*(long *)(lVar22 + 0x28) + (long)*(int *)(pbVar38 + 5) +
                            (long)iVar4 * 8);
          uVar36 = *(ulong *)(*(long *)(lVar22 + 0x20) + (ulong)*puVar15 * 8);
          if (uVar36 == 0x5602a5479) {
            uVar35 = puVar15[1];
            if (-1 < (int)uVar35) {
              pbVar41 = pbVar38 + (int)uVar35;
            }
            break;
          }
          iVar9 = iVar4 + -1;
          if (uVar36 < 0x5602a547a) {
            iVar33 = iVar4 + 1;
            iVar9 = iVar20;
          }
          iVar20 = iVar9;
        } while (iVar33 <= iVar20);
      }
      uVar50 = 0xc2340000;
      if (*pbVar41 == 8) {
        uVar50 = *(undefined4 *)(pbVar41 + 1);
      }
      lVar22 = lVar29 * 8;
      lVar29 = lVar29 + 1;
      *(undefined4 *)(*(long *)(param_1 + 0x88) + lVar22 + 4) = uVar50;
      uVar35 = (uint)*pbVar40;
      if (uVar35 - 0xb < 2) {
        if (*(int *)(pbVar40 + 1) <= lVar29) break;
        goto LAB_710306e204;
      }
    } while (lVar29 < 0);
  }
  pppbVar21 = *ppppbVar47;
  if ((*(char *)pppbVar21 == '\f') &&
     (iVar20 = *(int *)((long)pppbVar21 + 1) + -1, 0 < *(int *)((long)pppbVar21 + 1))) {
    iVar33 = 0;
    pcVar28 = "";
    do {
      iVar4 = iVar20 + iVar33;
      if (iVar4 < 0) {
        iVar4 = iVar4 + 1;
      }
      iVar4 = iVar4 >> 1;
      puVar15 = (uint *)(*(long *)(*param_2 + 0x28) + (long)*(int *)((long)pppbVar21 + 5) +
                        (long)iVar4 * 8);
      uVar36 = *(ulong *)(*(long *)(*param_2 + 0x20) + (ulong)*puVar15 * 8);
      if (uVar36 == 0x1ab1bd65fa) {
        uVar35 = puVar15[1];
        if ((int)uVar35 < 0) goto LAB_710306e448;
        pcVar28 = (char *)((long)pppbVar21 + (long)(int)uVar35);
        break;
      }
      iVar9 = iVar4 + -1;
      if (uVar36 < 0x1ab1bd65fb) {
        iVar33 = iVar4 + 1;
        iVar9 = iVar20;
      }
      iVar20 = iVar9;
    } while (iVar33 <= iVar20);
  }
  else {
LAB_710306e448:
    pcVar28 = "";
  }
  switch(*pcVar28) {
  case '\x01':
  case '\x03':
    uVar35 = (uint)(byte)pcVar28[1];
    break;
  case '\x02':
    uVar35 = (uint)pcVar28[1];
    break;
  case '\x04':
    uVar35 = (uint)*(short *)(pcVar28 + 1);
    break;
  case '\x05':
    uVar35 = (uint)*(ushort *)(pcVar28 + 1);
    break;
  case '\x06':
  case '\a':
    uVar35 = *(uint *)(pcVar28 + 1);
    break;
  default:
    uVar35 = 9;
  }
  *(uint *)(param_1 + 0xa0) = uVar35;
  pppbVar21 = *ppppbVar47;
  if ((*(char *)pppbVar21 == '\f') &&
     (iVar20 = *(int *)((long)pppbVar21 + 1) + -1, 0 < *(int *)((long)pppbVar21 + 1))) {
    lVar37 = *param_2;
    iVar33 = 0;
    pcVar28 = "";
    do {
      iVar4 = iVar20 + iVar33;
      if (iVar4 < 0) {
        iVar4 = iVar4 + 1;
      }
      iVar4 = iVar4 >> 1;
      puVar15 = (uint *)(*(long *)(lVar37 + 0x28) + (long)*(int *)((long)pppbVar21 + 5) +
                        (long)iVar4 * 8);
      uVar36 = *(ulong *)(*(long *)(lVar37 + 0x20) + (ulong)*puVar15 * 8);
      if (uVar36 == 0x1a867845d8) {
        uVar35 = puVar15[1];
        if ((int)uVar35 < 0) goto LAB_710306e540;
        pcVar28 = (char *)((long)pppbVar21 + (long)(int)uVar35);
        goto LAB_710306e54c;
      }
      iVar9 = iVar4 + -1;
      if (uVar36 < 0x1a867845d9) {
        iVar33 = iVar4 + 1;
        iVar9 = iVar20;
      }
      iVar20 = iVar9;
    } while (iVar33 <= iVar20);
    lVar37 = 0;
  }
  else {
LAB_710306e540:
    lVar37 = 0;
    pcVar28 = "";
  }
LAB_710306e54c:
  if ((*pcVar28 == '\f') && (iVar20 = *(int *)(pcVar28 + 1) + -1, 0 < *(int *)(pcVar28 + 1))) {
    iVar33 = 0;
    pcVar31 = "";
    do {
      iVar4 = iVar20 + iVar33;
      if (iVar4 < 0) {
        iVar4 = iVar4 + 1;
      }
      iVar4 = iVar4 >> 1;
      puVar15 = (uint *)(*(long *)(lVar37 + 0x28) + (long)*(int *)(pcVar28 + 5) + (long)iVar4 * 8);
      uVar36 = *(ulong *)(*(long *)(lVar37 + 0x20) + (ulong)*puVar15 * 8);
      if (uVar36 == 0x18cdc1683) {
        uVar35 = puVar15[1];
        if ((int)uVar35 < 0) goto LAB_710306e5d8;
        pcVar31 = pcVar28 + (int)uVar35;
        break;
      }
      iVar9 = iVar4 + -1;
      if (uVar36 < 0x18cdc1684) {
        iVar33 = iVar4 + 1;
        iVar9 = iVar20;
      }
      iVar20 = iVar9;
    } while (iVar33 <= iVar20);
  }
  else {
LAB_710306e5d8:
    pcVar31 = "";
  }
  if (*pcVar31 == '\b') {
    uVar50 = *(undefined4 *)(pcVar31 + 1);
  }
  else {
    uVar50 = 0x42700000;
  }
  *(undefined4 *)(param_1 + 0xa4) = uVar50;
  if ((*pcVar28 == '\f') && (iVar20 = *(int *)(pcVar28 + 1) + -1, 0 < *(int *)(pcVar28 + 1))) {
    iVar33 = 0;
    pcVar31 = "";
    do {
      iVar4 = iVar20 + iVar33;
      if (iVar4 < 0) {
        iVar4 = iVar4 + 1;
      }
      iVar4 = iVar4 >> 1;
      puVar15 = (uint *)(*(long *)(lVar37 + 0x28) + (long)*(int *)(pcVar28 + 5) + (long)iVar4 * 8);
      uVar36 = *(ulong *)(*(long *)(lVar37 + 0x20) + (ulong)*puVar15 * 8);
      if (uVar36 == 0x1fbdb2615) {
        uVar35 = puVar15[1];
        if ((int)uVar35 < 0) goto LAB_710306e68c;
        pcVar31 = pcVar28 + (int)uVar35;
        break;
      }
      iVar9 = iVar4 + -1;
      if (uVar36 < 0x1fbdb2616) {
        iVar33 = iVar4 + 1;
        iVar9 = iVar20;
      }
      iVar20 = iVar9;
    } while (iVar33 <= iVar20);
  }
  else {
LAB_710306e68c:
    pcVar31 = "";
  }
  if (*pcVar31 == '\b') {
    uVar50 = *(undefined4 *)(pcVar31 + 1);
  }
  else {
    uVar50 = 0x41a00000;
  }
  *(undefined4 *)(param_1 + 0xa8) = uVar50;
  if ((*pcVar28 == '\f') && (iVar20 = *(int *)(pcVar28 + 1) + -1, 0 < *(int *)(pcVar28 + 1))) {
    iVar33 = 0;
    pcVar31 = "";
    do {
      iVar4 = iVar20 + iVar33;
      if (iVar4 < 0) {
        iVar4 = iVar4 + 1;
      }
      iVar4 = iVar4 >> 1;
      puVar15 = (uint *)(*(long *)(lVar37 + 0x28) + (long)*(int *)(pcVar28 + 5) + (long)iVar4 * 8);
      uVar36 = *(ulong *)(*(long *)(lVar37 + 0x20) + (ulong)*puVar15 * 8);
      if (uVar36 == 0x162d277af) {
        uVar35 = puVar15[1];
        if ((int)uVar35 < 0) goto LAB_710306e73c;
        pcVar31 = pcVar28 + (int)uVar35;
        break;
      }
      iVar9 = iVar4 + -1;
      if (uVar36 < 0x162d277b0) {
        iVar33 = iVar4 + 1;
        iVar9 = iVar20;
      }
      iVar20 = iVar9;
    } while (iVar33 <= iVar20);
  }
  else {
LAB_710306e73c:
    pcVar31 = "";
  }
  if (*pcVar31 == '\b') {
    uVar50 = *(undefined4 *)(pcVar31 + 1);
  }
  else {
    uVar50 = 0x43160000;
  }
  *(undefined4 *)(param_1 + 0xac) = uVar50;
  pppbVar21 = *ppppbVar47;
  if ((*(char *)pppbVar21 == '\f') &&
     (iVar20 = *(int *)((long)pppbVar21 + 1) + -1, 0 < *(int *)((long)pppbVar21 + 1))) {
    iVar33 = 0;
    pcVar28 = "";
    do {
      iVar4 = iVar20 + iVar33;
      if (iVar4 < 0) {
        iVar4 = iVar4 + 1;
      }
      iVar4 = iVar4 >> 1;
      puVar15 = (uint *)(*(long *)(*param_2 + 0x28) + (long)*(int *)((long)pppbVar21 + 5) +
                        (long)iVar4 * 8);
      uVar36 = *(ulong *)(*(long *)(*param_2 + 0x20) + (ulong)*puVar15 * 8);
      if (uVar36 == 0x155dd90a50) {
        uVar35 = puVar15[1];
        if ((int)uVar35 < 0) goto LAB_710306e7fc;
        pcVar28 = (char *)((long)pppbVar21 + (long)(int)uVar35);
        break;
      }
      iVar9 = iVar4 + -1;
      if (uVar36 < 0x155dd90a51) {
        iVar33 = iVar4 + 1;
        iVar9 = iVar20;
      }
      iVar20 = iVar9;
    } while (iVar33 <= iVar20);
  }
  else {
LAB_710306e7fc:
    pcVar28 = "";
  }
  if (*pcVar28 == '\b') {
    uVar50 = *(undefined4 *)(pcVar28 + 1);
  }
  else {
    uVar50 = 0x42700000;
  }
  *(undefined4 *)(param_1 + 0xb0) = uVar50;
  pppbVar21 = *ppppbVar47;
  if ((*(char *)pppbVar21 == '\f') &&
     (iVar20 = *(int *)((long)pppbVar21 + 1) + -1, 0 < *(int *)((long)pppbVar21 + 1))) {
    iVar33 = 0;
    pcVar28 = "";
    do {
      iVar4 = iVar20 + iVar33;
      if (iVar4 < 0) {
        iVar4 = iVar4 + 1;
      }
      iVar4 = iVar4 >> 1;
      puVar15 = (uint *)(*(long *)(*param_2 + 0x28) + (long)*(int *)((long)pppbVar21 + 5) +
                        (long)iVar4 * 8);
      uVar36 = *(ulong *)(*(long *)(*param_2 + 0x20) + (ulong)*puVar15 * 8);
      if (uVar36 == 0x1c4013d88e) {
        uVar35 = puVar15[1];
        if ((int)uVar35 < 0) goto LAB_710306e8b8;
        pcVar28 = (char *)((long)pppbVar21 + (long)(int)uVar35);
        break;
      }
      iVar9 = iVar4 + -1;
      if (uVar36 < 0x1c4013d88f) {
        iVar33 = iVar4 + 1;
        iVar9 = iVar20;
      }
      iVar20 = iVar9;
    } while (iVar33 <= iVar20);
  }
  else {
LAB_710306e8b8:
    pcVar28 = "";
  }
  if (*pcVar28 == '\b') {
    uVar50 = *(undefined4 *)(pcVar28 + 1);
  }
  else {
    uVar50 = 0x42700000;
  }
  *(undefined4 *)(param_1 + 0xb4) = uVar50;
  pppbVar21 = *ppppbVar47;
  if ((*(char *)pppbVar21 == '\f') &&
     (iVar20 = *(int *)((long)pppbVar21 + 1) + -1, 0 < *(int *)((long)pppbVar21 + 1))) {
    iVar33 = 0;
    pcVar28 = "";
    do {
      iVar4 = iVar20 + iVar33;
      if (iVar4 < 0) {
        iVar4 = iVar4 + 1;
      }
      iVar4 = iVar4 >> 1;
      puVar15 = (uint *)(*(long *)(*param_2 + 0x28) + (long)*(int *)((long)pppbVar21 + 5) +
                        (long)iVar4 * 8);
      uVar36 = *(ulong *)(*(long *)(*param_2 + 0x20) + (ulong)*puVar15 * 8);
      if (uVar36 == 0x1a75e64df3) {
        uVar35 = puVar15[1];
        if ((int)uVar35 < 0) goto LAB_710306e974;
        pcVar28 = (char *)((long)pppbVar21 + (long)(int)uVar35);
        break;
      }
      iVar9 = iVar4 + -1;
      if (uVar36 < 0x1a75e64df4) {
        iVar33 = iVar4 + 1;
        iVar9 = iVar20;
      }
      iVar20 = iVar9;
    } while (iVar33 <= iVar20);
  }
  else {
LAB_710306e974:
    pcVar28 = "";
  }
  if (*pcVar28 == '\b') {
    uVar50 = *(undefined4 *)(pcVar28 + 1);
  }
  else {
    uVar50 = 0x43340000;
  }
  *(undefined4 *)(param_1 + 0xb8) = uVar50;
  pppbVar21 = *ppppbVar47;
  if ((*(char *)pppbVar21 == '\f') &&
     (iVar20 = *(int *)((long)pppbVar21 + 1) + -1, 0 < *(int *)((long)pppbVar21 + 1))) {
    lVar37 = *param_2;
    iVar33 = 0;
    pbVar40 = &DAT_7104742dbb;
    do {
      iVar4 = iVar20 + iVar33;
      if (iVar4 < 0) {
        iVar4 = iVar4 + 1;
      }
      iVar4 = iVar4 >> 1;
      puVar15 = (uint *)(*(long *)(lVar37 + 0x28) + (long)*(int *)((long)pppbVar21 + 5) +
                        (long)iVar4 * 8);
      uVar36 = *(ulong *)(*(long *)(lVar37 + 0x20) + (ulong)*puVar15 * 8);
      if (uVar36 == 0x16ae875add) {
        uVar35 = puVar15[1];
        if ((int)uVar35 < 0) goto LAB_710306ea38;
        pbVar40 = (byte *)((long)pppbVar21 + (long)(int)uVar35);
        goto LAB_710306ea44;
      }
      iVar9 = iVar4 + -1;
      if (uVar36 < 0x16ae875ade) {
        iVar33 = iVar4 + 1;
        iVar9 = iVar20;
      }
      iVar20 = iVar9;
    } while (iVar33 <= iVar20);
    lVar37 = 0;
  }
  else {
LAB_710306ea38:
    lVar37 = 0;
    pbVar40 = &DAT_7104742dbb;
  }
LAB_710306ea44:
  if (*pbVar40 - 0xb < 2) {
    iVar20 = *(int *)(pbVar40 + 1);
  }
  else {
    iVar20 = 0;
  }
  uVar36 = (ulong)iVar20;
  pvVar43 = *(void **)(param_1 + 0xc0);
  puVar27 = *(undefined8 **)(param_1 + 200);
  pppplVar42 = (long ****)((long)puVar27 - (long)pvVar43);
  uVar48 = (long)pppplVar42 >> 4;
  if (uVar48 < uVar36) {
    uVar49 = uVar36 - uVar48;
    if ((ulong)(*(long *)(param_1 + 0xd0) - (long)puVar27 >> 4) < uVar49) {
      if (iVar20 < 0) goto LAB_7103079628;
      lVar29 = *(long *)(param_1 + 0xd0) - (long)pvVar43;
      if ((ulong)(lVar29 >> 4) < 0x7ffffffffffffff) {
        uVar24 = lVar29 >> 3;
        uVar23 = uVar36;
        if (uVar36 <= uVar24) {
          uVar23 = uVar24;
        }
        if (uVar23 != 0) {
          if (uVar23 >> 0x3c != 0) goto LAB_7103079260;
          goto LAB_710306eb48;
        }
LAB_710306eba8:
        pvVar46 = (void *)0x0;
      }
      else {
        uVar23 = 0xfffffffffffffff;
LAB_710306eb48:
        ppplVar25 = (long ***)(uVar23 * 0x10);
        if (ppplVar25 == (long ***)0x0) {
          ppplVar25 = (long ***)0x1;
        }
        pvVar46 = (void *)FUN_710392e290(0x10,ppplVar25,(long ****)puVar11,ppppbVar14,param_5,
                                         param_6,param_7,param_8);
        if (pvVar46 == (void *)0x0) {
          if (DAT_7105332f00 != (long *)0x0) {
            local_84 = 0;
            pppplVar44 = &local_90;
            local_90 = ppplVar25;
            uVar24 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_84);
            if (((uVar24 & 1) != 0) &&
               (pvVar46 = (void *)FUN_710392e290(0x10,ppplVar25,pppplVar44,ppppbVar14,param_5,
                                                 param_6,param_7,param_8), pvVar46 != (void *)0x0))
            goto LAB_710306ebac;
          }
          goto LAB_710306eba8;
        }
      }
LAB_710306ebac:
      puVar11 = (uint *)(uVar49 * 0x10);
      memset((void *)((long)pvVar46 + uVar48 * 0x10),0,(size_t)puVar11);
      if (0 < (long)pppplVar42) {
        memcpy(pvVar46,pvVar43,(size_t)pppplVar42);
        puVar11 = (uint *)pppplVar42;
      }
      *(void **)(param_1 + 0xc0) = pvVar46;
      *(void **)(param_1 + 200) = (void *)((long)pvVar46 + uVar36 * 0x10);
      *(void **)(param_1 + 0xd0) = (void *)((long)pvVar46 + uVar23 * 0x10);
      if (pvVar43 != (void *)0x0) {
        FUN_710392eb40((ulong)pvVar43);
      }
    }
    else {
      uVar36 = uVar49;
      if ((uVar49 & 1) != 0) {
        *puVar27 = 0;
        puVar27[1] = 0;
        puVar27 = (undefined8 *)(*(long *)(param_1 + 200) + 0x10);
        uVar36 = uVar49 - 1;
        *(undefined8 **)(param_1 + 200) = puVar27;
      }
      if (uVar49 != 1) {
        do {
          *puVar27 = 0;
          puVar27[1] = 0;
          lVar29 = *(long *)(param_1 + 200);
          *(long *)(param_1 + 200) = lVar29 + 0x10;
          uVar36 = uVar36 - 2;
          *(undefined8 *)(lVar29 + 0x10) = 0;
          *(undefined8 *)(lVar29 + 0x18) = 0;
          puVar27 = (undefined8 *)(*(long *)(param_1 + 200) + 0x10);
          *(undefined8 **)(param_1 + 200) = puVar27;
        } while (uVar36 != 0);
      }
    }
  }
  else if (uVar48 != uVar36) {
    *(void **)(param_1 + 200) = (void *)((long)pvVar43 + uVar36 * 0x10);
  }
  uVar35 = (uint)*pbVar40;
  if ((*pbVar40 - 0xb < 2) && (0 < *(int *)(pbVar40 + 1))) {
    lVar29 = 0;
LAB_710306ec4c:
    do {
      iVar20 = (int)lVar29;
      if (iVar20 < 0) {
LAB_710306ec84:
        lVar22 = 0;
        pbVar38 = &DAT_7104742dbb;
      }
      else {
        lVar22 = 0;
        pbVar38 = &DAT_7104742dbb;
        if (uVar35 == 0xb) {
          if (*(int *)(pbVar40 + 1) <= iVar20) goto LAB_710306ec84;
          pbVar38 = pbVar40 + *(int *)(pbVar40 + (long)iVar20 * 4 + 5);
          lVar22 = lVar37;
        }
      }
      if ((*pbVar38 == 0xc) && (iVar20 = *(int *)(pbVar38 + 1) + -1, 0 < *(int *)(pbVar38 + 1))) {
        iVar33 = 0;
        do {
          iVar4 = iVar20 + iVar33;
          if (iVar4 < 0) {
            iVar4 = iVar4 + 1;
          }
          iVar4 = iVar4 >> 1;
          puVar15 = (uint *)(*(long *)(lVar22 + 0x28) + (long)*(int *)(pbVar38 + 5) +
                            (long)iVar4 * 8);
          puVar11 = *(uint **)(*(long *)(lVar22 + 0x20) + (ulong)*puVar15 * 8);
          if ((long ****)puVar11 == (long ****)0xdcc5473b2) {
            uVar35 = puVar15[1];
            if (-1 < (int)uVar35) {
              pbVar41 = pbVar38 + (int)uVar35;
              lVar30 = lVar22;
              goto LAB_710306ed0c;
            }
            break;
          }
          iVar9 = iVar4 + -1;
          if (puVar11 < (long ****)0xdcc5473b3) {
            iVar33 = iVar4 + 1;
            iVar9 = iVar20;
          }
          iVar20 = iVar9;
        } while (iVar33 <= iVar20);
      }
      lVar30 = 0;
      pbVar41 = &DAT_7104742dbb;
LAB_710306ed0c:
      if (*pbVar41 == 9) {
        uVar16 = *(undefined8 *)(*(long *)(lVar30 + 0x20) + (long)*(int *)(pbVar41 + 1) * 8);
      }
      else {
        uVar16 = 0;
      }
      *(undefined8 *)(*(long *)(param_1 + 0xc0) + lVar29 * 0x10) = uVar16;
      if ((*pbVar38 == 0xc) && (iVar20 = *(int *)(pbVar38 + 1) + -1, 0 < *(int *)(pbVar38 + 1))) {
        iVar33 = 0;
        do {
          iVar4 = iVar20 + iVar33;
          if (iVar4 < 0) {
            iVar4 = iVar4 + 1;
          }
          iVar4 = iVar4 >> 1;
          puVar15 = (uint *)(*(long *)(lVar22 + 0x28) + (long)*(int *)(pbVar38 + 5) +
                            (long)iVar4 * 8);
          puVar11 = *(uint **)(*(long *)(lVar22 + 0x20) + (ulong)*puVar15 * 8);
          if ((long ****)puVar11 == (long ****)0xee583078c) {
            uVar35 = puVar15[1];
            if (-1 < (int)uVar35) {
              pbVar38 = pbVar38 + (int)uVar35;
              goto LAB_710306edb8;
            }
            break;
          }
          iVar9 = iVar4 + -1;
          if (puVar11 < (long ****)0xee583078d) {
            iVar33 = iVar4 + 1;
            iVar9 = iVar20;
          }
          iVar20 = iVar9;
        } while (iVar33 <= iVar20);
      }
      lVar22 = 0;
      pbVar38 = &DAT_7104742dbb;
LAB_710306edb8:
      if (*pbVar38 == 9) {
        uVar16 = *(undefined8 *)(*(long *)(lVar22 + 0x20) + (long)*(int *)(pbVar38 + 1) * 8);
      }
      else {
        uVar16 = 0;
      }
      lVar22 = lVar29 * 0x10;
      lVar29 = lVar29 + 1;
      *(undefined8 *)(*(long *)(param_1 + 0xc0) + lVar22 + 8) = uVar16;
      uVar35 = (uint)*pbVar40;
      if (uVar35 - 0xb < 2) {
        if (*(int *)(pbVar40 + 1) <= lVar29) break;
        goto LAB_710306ec4c;
      }
    } while (lVar29 < 0);
  }
  pppbVar21 = *ppppbVar47;
  if ((*(char *)pppbVar21 == '\f') &&
     (iVar20 = *(int *)((long)pppbVar21 + 1) + -1, 0 < *(int *)((long)pppbVar21 + 1))) {
    iVar33 = 0;
    pcVar28 = "";
    do {
      iVar4 = iVar20 + iVar33;
      if (iVar4 < 0) {
        iVar4 = iVar4 + 1;
      }
      iVar4 = iVar4 >> 1;
      puVar15 = (uint *)(*(long *)(*param_2 + 0x28) + (long)*(int *)((long)pppbVar21 + 5) +
                        (long)iVar4 * 8);
      uVar36 = *(ulong *)(*(long *)(*param_2 + 0x20) + (ulong)*puVar15 * 8);
      if (uVar36 == 0x14f327d65d) {
        uVar35 = puVar15[1];
        if ((int)uVar35 < 0) goto LAB_710306eeac;
        pcVar28 = (char *)((long)pppbVar21 + (long)(int)uVar35);
        break;
      }
      iVar9 = iVar4 + -1;
      if (uVar36 < 0x14f327d65e) {
        iVar33 = iVar4 + 1;
        iVar9 = iVar20;
      }
      iVar20 = iVar9;
    } while (iVar33 <= iVar20);
  }
  else {
LAB_710306eeac:
    pcVar28 = "";
  }
  switch(*pcVar28) {
  case '\x01':
  case '\x03':
    uVar35 = (uint)(byte)pcVar28[1];
    break;
  case '\x02':
    uVar35 = (uint)pcVar28[1];
    break;
  case '\x04':
    uVar35 = (uint)*(short *)(pcVar28 + 1);
    break;
  case '\x05':
    uVar35 = (uint)*(ushort *)(pcVar28 + 1);
    break;
  case '\x06':
  case '\a':
    uVar35 = *(uint *)(pcVar28 + 1);
    break;
  default:
    uVar35 = 1;
  }
  *(bool *)(param_1 + 0xd8) = uVar35 != 0;
  pppbVar21 = *ppppbVar47;
  if ((*(char *)pppbVar21 == '\f') &&
     (iVar20 = *(int *)((long)pppbVar21 + 1) + -1, 0 < *(int *)((long)pppbVar21 + 1))) {
    lVar37 = *param_2;
    iVar33 = 0;
    pcVar28 = "";
    do {
      iVar4 = iVar20 + iVar33;
      if (iVar4 < 0) {
        iVar4 = iVar4 + 1;
      }
      iVar4 = iVar4 >> 1;
      puVar15 = (uint *)(*(long *)(lVar37 + 0x28) + (long)*(int *)((long)pppbVar21 + 5) +
                        (long)iVar4 * 8);
      uVar36 = *(ulong *)(*(long *)(lVar37 + 0x20) + (ulong)*puVar15 * 8);
      if (uVar36 == 0x124abe55fe) {
        uVar35 = puVar15[1];
        if ((int)uVar35 < 0) goto LAB_710306efac;
        pcVar28 = (char *)((long)pppbVar21 + (long)(int)uVar35);
        goto LAB_710306efb8;
      }
      iVar9 = iVar4 + -1;
      if (uVar36 < 0x124abe55ff) {
        iVar33 = iVar4 + 1;
        iVar9 = iVar20;
      }
      iVar20 = iVar9;
    } while (iVar33 <= iVar20);
    lVar37 = 0;
  }
  else {
LAB_710306efac:
    lVar37 = 0;
    pcVar28 = "";
  }
LAB_710306efb8:
  if ((*pcVar28 == '\f') && (iVar20 = *(int *)(pcVar28 + 1) + -1, 0 < *(int *)(pcVar28 + 1))) {
    iVar33 = 0;
    pcVar31 = "";
    do {
      iVar4 = iVar20 + iVar33;
      if (iVar4 < 0) {
        iVar4 = iVar4 + 1;
      }
      iVar4 = iVar4 >> 1;
      puVar15 = (uint *)(*(long *)(lVar37 + 0x28) + (long)*(int *)(pcVar28 + 5) + (long)iVar4 * 8);
      uVar36 = *(ulong *)(*(long *)(lVar37 + 0x20) + (ulong)*puVar15 * 8);
      if (uVar36 == 0x10f6f67961) {
        uVar35 = puVar15[1];
        if ((int)uVar35 < 0) goto LAB_710306f044;
        pcVar31 = pcVar28 + (int)uVar35;
        break;
      }
      iVar9 = iVar4 + -1;
      if (uVar36 < 0x10f6f67962) {
        iVar33 = iVar4 + 1;
        iVar9 = iVar20;
      }
      iVar20 = iVar9;
    } while (iVar33 <= iVar20);
  }
  else {
LAB_710306f044:
    pcVar31 = "";
  }
  if (*pcVar31 == '\b') {
    uVar50 = *(undefined4 *)(pcVar31 + 1);
  }
  else {
    uVar50 = 0x43730000;
  }
  *(undefined4 *)(param_1 + 0xdc) = uVar50;
  if ((*pcVar28 == '\f') && (iVar20 = *(int *)(pcVar28 + 1) + -1, 0 < *(int *)(pcVar28 + 1))) {
    iVar33 = 0;
    pcVar31 = "";
    do {
      iVar4 = iVar20 + iVar33;
      if (iVar4 < 0) {
        iVar4 = iVar4 + 1;
      }
      iVar4 = iVar4 >> 1;
      puVar15 = (uint *)(*(long *)(lVar37 + 0x28) + (long)*(int *)(pcVar28 + 5) + (long)iVar4 * 8);
      uVar36 = *(ulong *)(*(long *)(lVar37 + 0x20) + (ulong)*puVar15 * 8);
      if (uVar36 == 0x10cafb4638) {
        uVar35 = puVar15[1];
        if ((int)uVar35 < 0) goto LAB_710306f0f8;
        pcVar31 = pcVar28 + (int)uVar35;
        break;
      }
      iVar9 = iVar4 + -1;
      if (uVar36 < 0x10cafb4639) {
        iVar33 = iVar4 + 1;
        iVar9 = iVar20;
      }
      iVar20 = iVar9;
    } while (iVar33 <= iVar20);
  }
  else {
LAB_710306f0f8:
    pcVar31 = "";
  }
  if (*pcVar31 == '\b') {
    uVar50 = *(undefined4 *)(pcVar31 + 1);
  }
  else {
    uVar50 = 0x43730000;
  }
  *(undefined4 *)(param_1 + 0xe0) = uVar50;
  if ((*pcVar28 == '\f') && (iVar20 = *(int *)(pcVar28 + 1) + -1, 0 < *(int *)(pcVar28 + 1))) {
    iVar33 = 0;
    pcVar31 = "";
    do {
      iVar4 = iVar20 + iVar33;
      if (iVar4 < 0) {
        iVar4 = iVar4 + 1;
      }
      iVar4 = iVar4 >> 1;
      puVar15 = (uint *)(*(long *)(lVar37 + 0x28) + (long)*(int *)(pcVar28 + 5) + (long)iVar4 * 8);
      uVar36 = *(ulong *)(*(long *)(lVar37 + 0x20) + (ulong)*puVar15 * 8);
      if (uVar36 == 0x14e5a58611) {
        uVar35 = puVar15[1];
        if ((int)uVar35 < 0) goto LAB_710306f1a8;
        pcVar31 = pcVar28 + (int)uVar35;
        break;
      }
      iVar9 = iVar4 + -1;
      if (uVar36 < 0x14e5a58612) {
        iVar33 = iVar4 + 1;
        iVar9 = iVar20;
      }
      iVar20 = iVar9;
    } while (iVar33 <= iVar20);
  }
  else {
LAB_710306f1a8:
    pcVar31 = "";
  }
  if (*pcVar31 == '\b') {
    uVar50 = *(undefined4 *)(pcVar31 + 1);
  }
  else {
    uVar50 = 0xbf4ccccd;
  }
  *(undefined4 *)(param_1 + 0xe4) = uVar50;
  if ((*pcVar28 == '\f') && (iVar20 = *(int *)(pcVar28 + 1) + -1, 0 < *(int *)(pcVar28 + 1))) {
    iVar33 = 0;
    pcVar31 = "";
    do {
      iVar4 = iVar20 + iVar33;
      if (iVar4 < 0) {
        iVar4 = iVar4 + 1;
      }
      iVar4 = iVar4 >> 1;
      puVar15 = (uint *)(*(long *)(lVar37 + 0x28) + (long)*(int *)(pcVar28 + 5) + (long)iVar4 * 8);
      uVar36 = *(ulong *)(*(long *)(lVar37 + 0x20) + (ulong)*puVar15 * 8);
      if (uVar36 == 0x14d9a8b948) {
        uVar35 = puVar15[1];
        if ((int)uVar35 < 0) goto LAB_710306f25c;
        pcVar31 = pcVar28 + (int)uVar35;
        break;
      }
      iVar9 = iVar4 + -1;
      if (uVar36 < 0x14d9a8b949) {
        iVar33 = iVar4 + 1;
        iVar9 = iVar20;
      }
      iVar20 = iVar9;
    } while (iVar33 <= iVar20);
  }
  else {
LAB_710306f25c:
    pcVar31 = "";
  }
  if (*pcVar31 == '\b') {
    uVar50 = *(undefined4 *)(pcVar31 + 1);
  }
  else {
    uVar50 = 0xbf800000;
  }
  *(undefined4 *)(param_1 + 0xe8) = uVar50;
  if ((*pcVar28 == '\f') && (iVar20 = *(int *)(pcVar28 + 1) + -1, 0 < *(int *)(pcVar28 + 1))) {
    iVar33 = 0;
    pcVar31 = "";
    do {
      iVar4 = iVar20 + iVar33;
      if (iVar4 < 0) {
        iVar4 = iVar4 + 1;
      }
      iVar4 = iVar4 >> 1;
      puVar15 = (uint *)(*(long *)(lVar37 + 0x28) + (long)*(int *)(pcVar28 + 5) + (long)iVar4 * 8);
      uVar36 = *(ulong *)(*(long *)(lVar37 + 0x20) + (ulong)*puVar15 * 8);
      if (uVar36 == 0x131b8611ff) {
        uVar35 = puVar15[1];
        if ((int)uVar35 < 0) goto LAB_710306f30c;
        pcVar31 = pcVar28 + (int)uVar35;
        break;
      }
      iVar9 = iVar4 + -1;
      if (uVar36 < 0x131b861200) {
        iVar33 = iVar4 + 1;
        iVar9 = iVar20;
      }
      iVar20 = iVar9;
    } while (iVar33 <= iVar20);
  }
  else {
LAB_710306f30c:
    pcVar31 = "";
  }
  if (*pcVar31 == '\b') {
    uVar50 = *(undefined4 *)(pcVar31 + 1);
  }
  else {
    uVar50 = 0x3f4ccccd;
  }
  *(undefined4 *)(param_1 + 0xec) = uVar50;
  if ((*pcVar28 == '\f') && (iVar20 = *(int *)(pcVar28 + 1) + -1, 0 < *(int *)(pcVar28 + 1))) {
    iVar33 = 0;
    pcVar31 = "";
    do {
      iVar4 = iVar20 + iVar33;
      if (iVar4 < 0) {
        iVar4 = iVar4 + 1;
      }
      iVar4 = iVar4 >> 1;
      puVar15 = (uint *)(*(long *)(lVar37 + 0x28) + (long)*(int *)(pcVar28 + 5) + (long)iVar4 * 8);
      uVar36 = *(ulong *)(*(long *)(lVar37 + 0x20) + (ulong)*puVar15 * 8);
      if (uVar36 == 0x13278b2ea6) {
        uVar35 = puVar15[1];
        if ((int)uVar35 < 0) goto LAB_710306f3c0;
        pcVar31 = pcVar28 + (int)uVar35;
        break;
      }
      iVar9 = iVar4 + -1;
      if (uVar36 < 0x13278b2ea7) {
        iVar33 = iVar4 + 1;
        iVar9 = iVar20;
      }
      iVar20 = iVar9;
    } while (iVar33 <= iVar20);
  }
  else {
LAB_710306f3c0:
    pcVar31 = "";
  }
  if (*pcVar31 == '\b') {
    uVar50 = *(undefined4 *)(pcVar31 + 1);
  }
  else {
    uVar50 = 0x3f800000;
  }
  *(undefined4 *)(param_1 + 0xf0) = uVar50;
  pppbVar21 = *ppppbVar47;
  if ((*(char *)pppbVar21 == '\f') &&
     (iVar20 = *(int *)((long)pppbVar21 + 1) + -1, 0 < *(int *)((long)pppbVar21 + 1))) {
    iVar33 = 0;
    pcVar28 = "";
    do {
      iVar4 = iVar20 + iVar33;
      if (iVar4 < 0) {
        iVar4 = iVar4 + 1;
      }
      iVar4 = iVar4 >> 1;
      puVar15 = (uint *)(*(long *)(*param_2 + 0x28) + (long)*(int *)((long)pppbVar21 + 5) +
                        (long)iVar4 * 8);
      uVar36 = *(ulong *)(*(long *)(*param_2 + 0x20) + (ulong)*puVar15 * 8);
      if (uVar36 == 0x286ac83d2c) {
        uVar35 = puVar15[1];
        if ((int)uVar35 < 0) goto LAB_710306f47c;
        pcVar28 = (char *)((long)pppbVar21 + (long)(int)uVar35);
        break;
      }
      iVar9 = iVar4 + -1;
      if (uVar36 < 0x286ac83d2d) {
        iVar33 = iVar4 + 1;
        iVar9 = iVar20;
      }
      iVar20 = iVar9;
    } while (iVar33 <= iVar20);
  }
  else {
LAB_710306f47c:
    pcVar28 = "";
  }
  if (*pcVar28 == '\b') {
    uVar50 = *(undefined4 *)(pcVar28 + 1);
  }
  else {
    uVar50 = 0x43960000;
  }
  *(undefined4 *)(param_1 + 0xf4) = uVar50;
  pppbVar21 = *ppppbVar47;
  if ((*(char *)pppbVar21 == '\f') &&
     (iVar20 = *(int *)((long)pppbVar21 + 1) + -1, 0 < *(int *)((long)pppbVar21 + 1))) {
    iVar33 = 0;
    pcVar28 = "";
    do {
      iVar4 = iVar20 + iVar33;
      if (iVar4 < 0) {
        iVar4 = iVar4 + 1;
      }
      iVar4 = iVar4 >> 1;
      puVar15 = (uint *)(*(long *)(*param_2 + 0x28) + (long)*(int *)((long)pppbVar21 + 5) +
                        (long)iVar4 * 8);
      uVar36 = *(ulong *)(*(long *)(*param_2 + 0x20) + (ulong)*puVar15 * 8);
      if (uVar36 == 0x27deb13bfb) {
        uVar35 = puVar15[1];
        if ((int)uVar35 < 0) goto LAB_710306f53c;
        pcVar28 = (char *)((long)pppbVar21 + (long)(int)uVar35);
        break;
      }
      iVar9 = iVar4 + -1;
      if (uVar36 < 0x27deb13bfc) {
        iVar33 = iVar4 + 1;
        iVar9 = iVar20;
      }
      iVar20 = iVar9;
    } while (iVar33 <= iVar20);
  }
  else {
LAB_710306f53c:
    pcVar28 = "";
  }
  if (*pcVar28 == '\b') {
    uVar50 = *(undefined4 *)(pcVar28 + 1);
  }
  else {
    uVar50 = 0x43960000;
  }
  *(undefined4 *)(param_1 + 0xf8) = uVar50;
  pppbVar21 = *ppppbVar47;
  if ((*(char *)pppbVar21 == '\f') &&
     (iVar20 = *(int *)((long)pppbVar21 + 1) + -1, 0 < *(int *)((long)pppbVar21 + 1))) {
    local_d0 = (long ****)*param_2;
    pbVar40 = &DAT_7104742dbb;
    iVar33 = 0;
    do {
      iVar4 = iVar20 + iVar33;
      if (iVar4 < 0) {
        iVar4 = iVar4 + 1;
      }
      iVar4 = iVar4 >> 1;
      puVar15 = (uint *)((long)local_d0[5] + (long)iVar4 * 8 + (long)*(int *)((long)pppbVar21 + 5));
      if (local_d0[4][*puVar15] == (long **)0xc1e54ec65) {
        uVar35 = puVar15[1];
        if ((int)uVar35 < 0) goto LAB_710306f600;
        pbVar40 = (byte *)((long)pppbVar21 + (long)(int)uVar35);
        goto LAB_710306f60c;
      }
      iVar9 = iVar4 + -1;
      if (local_d0[4][*puVar15] < (long **)0xc1e54ec66) {
        iVar33 = iVar4 + 1;
        iVar9 = iVar20;
      }
      iVar20 = iVar9;
    } while (iVar33 <= iVar20);
    local_d0 = (long ****)0x0;
  }
  else {
LAB_710306f600:
    local_d0 = (long ****)0x0;
    pbVar40 = &DAT_7104742dbb;
  }
LAB_710306f60c:
  if (*pbVar40 - 0xb < 2) {
    iVar20 = *(int *)(pbVar40 + 1);
  }
  else {
    iVar20 = 0;
  }
  puVar45 = *(undefined8 **)(param_1 + 0x100);
  puVar27 = *(undefined8 **)(param_1 + 0x108);
  uVar36 = (ulong)iVar20;
  lVar37 = (long)puVar27 - (long)puVar45 >> 4;
  plVar2 = (long *)(param_1 + 0x100);
  if ((ulong)(lVar37 * -0x3333333333333333) < uVar36) {
    uVar48 = uVar36 + lVar37 * 0x3333333333333333;
    if ((ulong)((*(long *)(param_1 + 0x110) - (long)puVar27 >> 4) * -0x3333333333333333) < uVar48) {
      if (iVar20 < 0) goto LAB_7103079628;
      lVar29 = *(long *)(param_1 + 0x110) - (long)puVar45 >> 4;
      if ((ulong)(lVar29 * -0x3333333333333333) < 0x199999999999999) {
        uVar23 = lVar29 * -0x6666666666666666;
        uVar49 = uVar36;
        if (uVar36 <= uVar23) {
          uVar49 = uVar23;
        }
        if (uVar49 != 0) goto LAB_710306f790;
LAB_710306f7f4:
        lVar29 = 0;
      }
      else {
        uVar49 = 0x333333333333333;
LAB_710306f790:
        ppplVar25 = (long ***)(uVar49 * 0x50);
        if (ppplVar25 == (long ***)0x0) {
          ppplVar25 = (long ***)0x1;
        }
        lVar29 = FUN_710392e290(0x10,ppplVar25,(long ****)puVar11,ppppbVar14,param_5,param_6,param_7
                                ,param_8);
        if (lVar29 == 0) {
          if (DAT_7105332f00 != (long *)0x0) {
            local_84 = 0;
            pppplVar42 = &local_90;
            local_90 = ppplVar25;
            uVar23 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_84);
            if (((uVar23 & 1) != 0) &&
               (lVar29 = FUN_710392e290(0x10,ppplVar25,pppplVar42,ppppbVar14,param_5,param_6,param_7
                                        ,param_8), lVar29 != 0)) goto LAB_710306f7f8;
          }
          goto LAB_710306f7f4;
        }
      }
LAB_710306f7f8:
      pvVar43 = (void *)(lVar29 + lVar37 * 0x10);
      puVar11 = (uint *)(uVar48 * 0x50);
      lVar37 = lVar29 + uVar49 * 0x50;
      memset(pvVar43,0,(size_t)puVar11);
      lVar29 = lVar29 + uVar36 * 0x50;
      if (puVar27 == puVar45) {
        *(void **)(param_1 + 0x100) = pvVar43;
        *(long *)(param_1 + 0x108) = lVar29;
        *(long *)(param_1 + 0x110) = lVar37;
      }
      else {
        lVar22 = 0;
        do {
          uVar50 = *(undefined4 *)((long)puVar27 + lVar22 + -0x50);
          *(undefined8 *)((long)pvVar43 + lVar22 + -0x40) = 0;
          *(undefined8 *)((long)pvVar43 + lVar22 + -0x38) = 0;
          *(undefined8 *)((long)pvVar43 + lVar22 + -0x48) = 0;
          lVar30 = lVar22 + -0x50;
          *(undefined4 *)((long)pvVar43 + lVar22 + -0x50) = uVar50;
          *(undefined8 *)((long)pvVar43 + lVar22 + -0x48) =
               *(undefined8 *)((long)puVar27 + lVar22 + -0x48);
          *(undefined8 *)((long)pvVar43 + lVar22 + -0x40) =
               *(undefined8 *)((long)puVar27 + lVar22 + -0x40);
          *(undefined8 *)((long)pvVar43 + lVar22 + -0x38) =
               *(undefined8 *)((long)puVar27 + lVar22 + -0x38);
          *(undefined8 *)((long)puVar27 + lVar22 + -0x40) = 0;
          *(undefined8 *)((long)puVar27 + lVar22 + -0x38) = 0;
          *(undefined8 *)((long)puVar27 + lVar22 + -0x48) = 0;
          *(undefined8 *)((long)pvVar43 + lVar22 + -0x28) = 0;
          *(undefined8 *)((long)pvVar43 + lVar22 + -0x20) = 0;
          *(undefined8 *)((long)pvVar43 + lVar22 + -0x30) = 0;
          *(undefined8 *)((long)pvVar43 + lVar22 + -0x30) =
               *(undefined8 *)((long)puVar27 + lVar22 + -0x30);
          *(undefined8 *)((long)pvVar43 + lVar22 + -0x28) =
               *(undefined8 *)((long)puVar27 + lVar22 + -0x28);
          *(undefined8 *)((long)pvVar43 + lVar22 + -0x20) =
               *(undefined8 *)((long)puVar27 + lVar22 + -0x20);
          *(undefined8 *)((long)puVar27 + lVar22 + -0x28) = 0;
          *(undefined8 *)((long)puVar27 + lVar22 + -0x20) = 0;
          *(undefined8 *)((long)puVar27 + lVar22 + -0x30) = 0;
          *(undefined8 *)((long)pvVar43 + lVar22 + -0x10) = 0;
          *(undefined8 *)((long)pvVar43 + lVar22 + -8) = 0;
          *(undefined8 *)((long)pvVar43 + lVar22 + -0x18) = 0;
          *(undefined8 *)((long)pvVar43 + lVar22 + -0x18) =
               *(undefined8 *)((long)puVar27 + lVar22 + -0x18);
          *(undefined8 *)((long)pvVar43 + lVar22 + -0x10) =
               *(undefined8 *)((long)puVar27 + lVar22 + -0x10);
          *(undefined8 *)((long)pvVar43 + lVar22 + -8) =
               *(undefined8 *)((long)puVar27 + lVar22 + -8);
          *(undefined8 *)((long)puVar27 + lVar22 + -0x10) = 0;
          *(undefined8 *)((long)puVar27 + lVar22 + -8) = 0;
          *(undefined8 *)((long)puVar27 + lVar22 + -0x18) = 0;
          lVar22 = lVar30;
        } while ((long)puVar45 - (long)puVar27 != lVar30);
        puVar45 = *(undefined8 **)(param_1 + 0x100);
        puVar27 = *(undefined8 **)(param_1 + 0x108);
        *(long *)(param_1 + 0x100) = (long)pvVar43 + lVar30;
        *(long *)(param_1 + 0x108) = lVar29;
        *(long *)(param_1 + 0x110) = lVar37;
        while (puVar8 = puVar27, puVar8 != puVar45) {
          uVar36 = puVar8[-3];
          if (uVar36 != 0) {
            puVar8[-2] = uVar36;
            FUN_710392eb40(uVar36);
          }
          uVar36 = puVar8[-6];
          if (uVar36 != 0) {
            puVar8[-5] = uVar36;
            FUN_710392eb40(uVar36);
          }
          uVar36 = puVar8[-9];
          puVar27 = puVar8 + -10;
          if (uVar36 != 0) {
            puVar8[-8] = uVar36;
            FUN_710392eb40(uVar36);
          }
        }
      }
      if (puVar45 != (undefined8 *)0x0) {
        FUN_710392eb40((ulong)puVar45);
      }
    }
    else {
      uVar36 = uVar48;
      if ((uVar48 & 1) != 0) {
        puVar27[8] = 0;
        puVar27[9] = 0;
        puVar27[6] = 0;
        puVar27[7] = 0;
        puVar27[4] = 0;
        puVar27[5] = 0;
        puVar27[2] = 0;
        puVar27[3] = 0;
        *puVar27 = 0;
        puVar27[1] = 0;
        puVar27 = (undefined8 *)(*(long *)(param_1 + 0x108) + 0x50);
        uVar36 = uVar48 - 1;
        *(undefined8 **)(param_1 + 0x108) = puVar27;
      }
      if (uVar48 != 1) {
        do {
          puVar27[8] = 0;
          puVar27[9] = 0;
          uVar36 = uVar36 - 2;
          puVar27[6] = 0;
          puVar27[7] = 0;
          puVar27[4] = 0;
          puVar27[5] = 0;
          puVar27[2] = 0;
          puVar27[3] = 0;
          *puVar27 = 0;
          puVar27[1] = 0;
          lVar37 = *(long *)(param_1 + 0x108);
          *(long *)(param_1 + 0x108) = lVar37 + 0x50;
          *(undefined8 *)(lVar37 + 0x90) = 0;
          *(undefined8 *)(lVar37 + 0x98) = 0;
          *(undefined8 *)(lVar37 + 0x80) = 0;
          *(undefined8 *)(lVar37 + 0x88) = 0;
          *(undefined8 *)(lVar37 + 0x70) = 0;
          *(undefined8 *)(lVar37 + 0x78) = 0;
          *(undefined8 *)(lVar37 + 0x60) = 0;
          *(undefined8 *)(lVar37 + 0x68) = 0;
          *(undefined8 *)(lVar37 + 0x50) = 0;
          *(undefined8 *)(lVar37 + 0x58) = 0;
          puVar27 = (undefined8 *)(*(long *)(param_1 + 0x108) + 0x50);
          *(undefined8 **)(param_1 + 0x108) = puVar27;
        } while (uVar36 != 0);
      }
    }
  }
  else if (lVar37 * -0x3333333333333333 - uVar36 != 0) {
    while (puVar8 = puVar27, puVar45 + uVar36 * 10 != puVar8) {
      uVar48 = puVar8[-3];
      if (uVar48 != 0) {
        puVar8[-2] = uVar48;
        FUN_710392eb40(uVar48);
      }
      uVar48 = puVar8[-6];
      if (uVar48 != 0) {
        puVar8[-5] = uVar48;
        FUN_710392eb40(uVar48);
      }
      uVar48 = puVar8[-9];
      puVar27 = puVar8 + -10;
      if (uVar48 != 0) {
        puVar8[-8] = uVar48;
        FUN_710392eb40(uVar48);
      }
    }
    *(undefined8 **)(param_1 + 0x108) = puVar45 + uVar36 * 10;
  }
  uVar35 = (uint)*pbVar40;
  if ((*pbVar40 - 0xb < 2) && (0 < *(int *)(pbVar40 + 1))) {
    uVar50 = 0x43730000;
    uVar52 = 0xc0066666;
    uVar53 = 0x40066666;
    lVar37 = 0;
    do {
      pppplVar42 = (long ****)0x0;
      iVar20 = (int)lVar37;
      if (iVar20 < 0) {
        param_6 = (uint *)&DAT_7104742dbb;
      }
      else {
        param_6 = (uint *)&DAT_7104742dbb;
        if (uVar35 == 0xb) {
          if (iVar20 < *(int *)(pbVar40 + 1)) {
            param_6 = (uint *)(pbVar40 + *(int *)(pbVar40 + (long)iVar20 * 4 + 5));
            pppplVar42 = local_d0;
          }
          else {
            pppplVar42 = (long ****)0x0;
            param_6 = (uint *)&DAT_7104742dbb;
          }
        }
      }
      puVar11 = (uint *)&DAT_7104742dbb;
      if (((char)*param_6 == '\f') &&
         (iVar20 = *(int *)((long)param_6 + 1) + -1, 0 < *(int *)((long)param_6 + 1))) {
        iVar33 = 0;
        do {
          iVar4 = iVar20 + iVar33;
          if (iVar4 < 0) {
            iVar4 = iVar4 + 1;
          }
          iVar4 = iVar4 >> 1;
          puVar15 = (uint *)((long)pppplVar42[5] +
                            (long)iVar4 * 8 + (long)*(int *)((long)param_6 + 5));
          if (pppplVar42[4][*puVar15] == (long **)0xbc0ad263c) {
            uVar35 = puVar15[1];
            if (-1 < (int)uVar35) {
              puVar11 = (uint *)((long)param_6 + (long)(int)uVar35);
            }
            break;
          }
          iVar9 = iVar4 + -1;
          if (pppplVar42[4][*puVar15] < (long **)0xbc0ad263d) {
            iVar33 = iVar4 + 1;
            iVar9 = iVar20;
          }
          iVar20 = iVar9;
        } while (iVar33 <= iVar20);
      }
      uVar51 = 0x45ed8000;
      if ((char)*puVar11 == '\b') {
        uVar51 = *(undefined4 *)((long)puVar11 + 1);
      }
      *(undefined4 *)(*plVar2 + lVar37 * 0x50) = uVar51;
      if (((char)*param_6 == '\f') &&
         (iVar20 = *(int *)((long)param_6 + 1) + -1, 0 < *(int *)((long)param_6 + 1))) {
        iVar33 = 0;
        do {
          iVar4 = iVar20 + iVar33;
          if (iVar4 < 0) {
            iVar4 = iVar4 + 1;
          }
          iVar4 = iVar4 >> 1;
          puVar11 = (uint *)((long)pppplVar42[5] +
                            (long)iVar4 * 8 + (long)*(int *)((long)param_6 + 5));
          if (pppplVar42[4][*puVar11] == (long **)0x63af7d34b) {
            uVar35 = puVar11[1];
            if (-1 < (int)uVar35) {
              puVar11 = (uint *)((long)param_6 + (long)(int)uVar35);
              pppplVar44 = pppplVar42;
              goto LAB_710306fb84;
            }
            break;
          }
          iVar9 = iVar4 + -1;
          if (pppplVar42[4][*puVar11] < (long **)0x63af7d34c) {
            iVar33 = iVar4 + 1;
            iVar9 = iVar20;
          }
          iVar20 = iVar9;
        } while (iVar33 <= iVar20);
      }
      pppplVar44 = (long ****)0x0;
      puVar11 = (uint *)&DAT_7104742dbb;
LAB_710306fb84:
      plVar3 = (long *)(*plVar2 + lVar37 * 0x50 + 8);
      if ((byte)*puVar11 - 0xb < 2) {
        iVar20 = *(int *)((long)puVar11 + 1);
      }
      else {
        iVar20 = 0;
      }
      plVar26 = (long *)(*plVar2 + lVar37 * 0x50 + 0x10);
      lVar29 = *plVar3;
      lVar22 = *plVar26 - lVar29 >> 3;
      uVar48 = lVar22 * -0x5555555555555555;
      uVar36 = (ulong)iVar20;
      if (uVar48 < uVar36) {
        FUN_7103079840(plVar3,uVar36 + lVar22 * 0x5555555555555555,(long ****)&DAT_00000050,
                       (byte ****)&SUB_00000018,pppplVar42,param_6,pppplVar44,param_8);
      }
      else if (uVar48 - uVar36 != 0) {
        *plVar26 = lVar29 + uVar36 * 0x18;
      }
      uVar35 = (uint)(byte)*puVar11;
      if (((byte)*puVar11 - 0xb < 2) && (0 < *(int *)((long)puVar11 + 1))) {
        lVar29 = 0;
LAB_710306fc44:
        do {
          iVar20 = (int)lVar29;
          if (iVar20 < 0) {
LAB_710306fc7c:
            pppplVar13 = (long ****)0x0;
            puVar15 = (uint *)&DAT_7104742dbb;
          }
          else {
            puVar15 = (uint *)&DAT_7104742dbb;
            pppplVar13 = (long ****)0x0;
            if (uVar35 == 0xb) {
              if (*(int *)((long)puVar11 + 1) <= iVar20) goto LAB_710306fc7c;
              puVar15 = (uint *)((long)puVar11 +
                                (long)*(int *)((long)puVar11 + (long)iVar20 * 4 + 5));
              pppplVar13 = pppplVar44;
            }
          }
          puVar32 = (uint *)&DAT_7104742dbb;
          if (((char)*puVar15 == '\f') &&
             (iVar20 = *(int *)((long)puVar15 + 1) + -1, 0 < *(int *)((long)puVar15 + 1))) {
            iVar33 = 0;
            do {
              iVar4 = iVar20 + iVar33;
              if (iVar4 < 0) {
                iVar4 = iVar4 + 1;
              }
              iVar4 = iVar4 >> 1;
              puVar34 = (uint *)((long)pppplVar13[5] +
                                (long)iVar4 * 8 + (long)*(int *)((long)puVar15 + 5));
              if (pppplVar13[4][*puVar34] == (long **)0x10f6f67961) {
                uVar35 = puVar34[1];
                if (-1 < (int)uVar35) {
                  puVar32 = (uint *)((long)puVar15 + (long)(int)uVar35);
                }
                break;
              }
              iVar9 = iVar4 + -1;
              if (pppplVar13[4][*puVar34] < (long **)0x10f6f67962) {
                iVar33 = iVar4 + 1;
                iVar9 = iVar20;
              }
              iVar20 = iVar9;
            } while (iVar33 <= iVar20);
          }
          uVar51 = uVar50;
          if ((char)*puVar32 == '\b') {
            uVar51 = *(undefined4 *)((long)puVar32 + 1);
          }
          *(undefined4 *)(*(long *)(*plVar2 + lVar37 * 0x50 + 8) + lVar29 * 0x18) = uVar51;
          puVar32 = (uint *)&DAT_7104742dbb;
          if (((char)*puVar15 == '\f') &&
             (iVar20 = *(int *)((long)puVar15 + 1) + -1, 0 < *(int *)((long)puVar15 + 1))) {
            iVar33 = 0;
            do {
              iVar4 = iVar20 + iVar33;
              if (iVar4 < 0) {
                iVar4 = iVar4 + 1;
              }
              iVar4 = iVar4 >> 1;
              puVar34 = (uint *)((long)pppplVar13[5] +
                                (long)iVar4 * 8 + (long)*(int *)((long)puVar15 + 5));
              if (pppplVar13[4][*puVar34] == (long **)0x10cafb4638) {
                uVar35 = puVar34[1];
                if (-1 < (int)uVar35) {
                  puVar32 = (uint *)((long)puVar15 + (long)(int)uVar35);
                }
                break;
              }
              iVar9 = iVar4 + -1;
              if (pppplVar13[4][*puVar34] < (long **)0x10cafb4639) {
                iVar33 = iVar4 + 1;
                iVar9 = iVar20;
              }
              iVar20 = iVar9;
            } while (iVar33 <= iVar20);
          }
          uVar51 = uVar50;
          if ((char)*puVar32 == '\b') {
            uVar51 = *(undefined4 *)((long)puVar32 + 1);
          }
          *(undefined4 *)(*(long *)(*plVar2 + lVar37 * 0x50 + 8) + lVar29 * 0x18 + 4) = uVar51;
          puVar32 = (uint *)&DAT_7104742dbb;
          if (((char)*puVar15 == '\f') &&
             (iVar20 = *(int *)((long)puVar15 + 1) + -1, 0 < *(int *)((long)puVar15 + 1))) {
            iVar33 = 0;
            do {
              iVar4 = iVar20 + iVar33;
              if (iVar4 < 0) {
                iVar4 = iVar4 + 1;
              }
              iVar4 = iVar4 >> 1;
              puVar34 = (uint *)((long)pppplVar13[5] +
                                (long)iVar4 * 8 + (long)*(int *)((long)puVar15 + 5));
              if (pppplVar13[4][*puVar34] == (long **)0x14e5a58611) {
                uVar35 = puVar34[1];
                if (-1 < (int)uVar35) {
                  puVar32 = (uint *)((long)puVar15 + (long)(int)uVar35);
                }
                break;
              }
              iVar9 = iVar4 + -1;
              if (pppplVar13[4][*puVar34] < (long **)0x14e5a58612) {
                iVar33 = iVar4 + 1;
                iVar9 = iVar20;
              }
              iVar20 = iVar9;
            } while (iVar33 <= iVar20);
          }
          uVar51 = uVar52;
          if ((char)*puVar32 == '\b') {
            uVar51 = *(undefined4 *)((long)puVar32 + 1);
          }
          *(undefined4 *)(*(long *)(*plVar2 + lVar37 * 0x50 + 8) + lVar29 * 0x18 + 8) = uVar51;
          puVar32 = (uint *)&DAT_7104742dbb;
          if (((char)*puVar15 == '\f') &&
             (iVar20 = *(int *)((long)puVar15 + 1) + -1, 0 < *(int *)((long)puVar15 + 1))) {
            iVar33 = 0;
            do {
              iVar4 = iVar20 + iVar33;
              if (iVar4 < 0) {
                iVar4 = iVar4 + 1;
              }
              iVar4 = iVar4 >> 1;
              puVar34 = (uint *)((long)pppplVar13[5] +
                                (long)iVar4 * 8 + (long)*(int *)((long)puVar15 + 5));
              if (pppplVar13[4][*puVar34] == (long **)0x14d9a8b948) {
                uVar35 = puVar34[1];
                if (-1 < (int)uVar35) {
                  puVar32 = (uint *)((long)puVar15 + (long)(int)uVar35);
                }
                break;
              }
              iVar9 = iVar4 + -1;
              if (pppplVar13[4][*puVar34] < (long **)0x14d9a8b949) {
                iVar33 = iVar4 + 1;
                iVar9 = iVar20;
              }
              iVar20 = iVar9;
            } while (iVar33 <= iVar20);
          }
          uVar51 = uVar52;
          if ((char)*puVar32 == '\b') {
            uVar51 = *(undefined4 *)((long)puVar32 + 1);
          }
          *(undefined4 *)(*(long *)(*plVar2 + lVar37 * 0x50 + 8) + lVar29 * 0x18 + 0xc) = uVar51;
          puVar32 = (uint *)&DAT_7104742dbb;
          if (((char)*puVar15 == '\f') &&
             (iVar20 = *(int *)((long)puVar15 + 1) + -1, 0 < *(int *)((long)puVar15 + 1))) {
            iVar33 = 0;
            do {
              iVar4 = iVar20 + iVar33;
              if (iVar4 < 0) {
                iVar4 = iVar4 + 1;
              }
              iVar4 = iVar4 >> 1;
              puVar34 = (uint *)((long)pppplVar13[5] +
                                (long)iVar4 * 8 + (long)*(int *)((long)puVar15 + 5));
              if (pppplVar13[4][*puVar34] == (long **)0x131b8611ff) {
                uVar35 = puVar34[1];
                if (-1 < (int)uVar35) {
                  puVar32 = (uint *)((long)puVar15 + (long)(int)uVar35);
                }
                break;
              }
              iVar9 = iVar4 + -1;
              if (pppplVar13[4][*puVar34] < (long **)0x131b861200) {
                iVar33 = iVar4 + 1;
                iVar9 = iVar20;
              }
              iVar20 = iVar9;
            } while (iVar33 <= iVar20);
          }
          uVar51 = uVar53;
          if ((char)*puVar32 == '\b') {
            uVar51 = *(undefined4 *)((long)puVar32 + 1);
          }
          *(undefined4 *)(*(long *)(*plVar2 + lVar37 * 0x50 + 8) + lVar29 * 0x18 + 0x10) = uVar51;
          puVar32 = (uint *)&DAT_7104742dbb;
          if (((char)*puVar15 == '\f') &&
             (iVar20 = *(int *)((long)puVar15 + 1) + -1, 0 < *(int *)((long)puVar15 + 1))) {
            iVar33 = 0;
            do {
              iVar4 = iVar20 + iVar33;
              if (iVar4 < 0) {
                iVar4 = iVar4 + 1;
              }
              iVar4 = iVar4 >> 1;
              puVar34 = (uint *)((long)pppplVar13[5] +
                                (long)iVar4 * 8 + (long)*(int *)((long)puVar15 + 5));
              if (pppplVar13[4][*puVar34] == (long **)0x13278b2ea6) {
                uVar35 = puVar34[1];
                if (-1 < (int)uVar35) {
                  puVar32 = (uint *)((long)puVar15 + (long)(int)uVar35);
                }
                break;
              }
              iVar9 = iVar4 + -1;
              if (pppplVar13[4][*puVar34] < (long **)0x13278b2ea7) {
                iVar33 = iVar4 + 1;
                iVar9 = iVar20;
              }
              iVar20 = iVar9;
            } while (iVar33 <= iVar20);
          }
          uVar51 = uVar53;
          if ((char)*puVar32 == '\b') {
            uVar51 = *(undefined4 *)((long)puVar32 + 1);
          }
          lVar22 = lVar29 * 0x18;
          lVar29 = lVar29 + 1;
          *(undefined4 *)(*(long *)(*plVar2 + lVar37 * 0x50 + 8) + lVar22 + 0x14) = uVar51;
          uVar35 = (uint)(byte)*puVar11;
          if (uVar35 - 0xb < 2) {
            if (*(int *)((long)puVar11 + 1) <= lVar29) break;
            goto LAB_710306fc44;
          }
        } while (lVar29 < 0);
      }
      if (((char)*param_6 == '\f') &&
         (iVar20 = *(int *)((long)param_6 + 1) + -1, 0 < *(int *)((long)param_6 + 1))) {
        iVar33 = 0;
        do {
          iVar4 = iVar20 + iVar33;
          if (iVar4 < 0) {
            iVar4 = iVar4 + 1;
          }
          iVar4 = iVar4 >> 1;
          puVar11 = (uint *)((long)pppplVar42[5] +
                            (long)iVar4 * 8 + (long)*(int *)((long)param_6 + 5));
          if (pppplVar42[4][*puVar11] == (long **)0x84a182dfd) {
            uVar35 = puVar11[1];
            if (-1 < (int)uVar35) {
              puVar11 = (uint *)((long)param_6 + (long)(int)uVar35);
              param_7 = (uint *)pppplVar42;
              goto LAB_7103070124;
            }
            break;
          }
          iVar9 = iVar4 + -1;
          if (pppplVar42[4][*puVar11] < (long **)0x84a182dfe) {
            iVar33 = iVar4 + 1;
            iVar9 = iVar20;
          }
          iVar20 = iVar9;
        } while (iVar33 <= iVar20);
      }
      param_7 = (uint *)(long ****)0x0;
      puVar11 = (uint *)&DAT_7104742dbb;
LAB_7103070124:
      plVar3 = (long *)(*plVar2 + lVar37 * 0x50 + 0x20);
      if ((byte)*puVar11 - 0xb < 2) {
        iVar20 = *(int *)((long)puVar11 + 1);
      }
      else {
        iVar20 = 0;
      }
      plVar26 = (long *)(*plVar2 + lVar37 * 0x50 + 0x28);
      lVar29 = *plVar3;
      lVar22 = *plVar26 - lVar29 >> 3;
      uVar48 = lVar22 * -0x5555555555555555;
      uVar36 = (ulong)iVar20;
      if (uVar48 < uVar36) {
        FUN_7103079840(plVar3,uVar36 + lVar22 * 0x5555555555555555,(long ****)&DAT_00000050,
                       (byte ****)&SUB_00000018,pppplVar42,param_6,param_7,param_8);
      }
      else if (uVar48 - uVar36 != 0) {
        *plVar26 = lVar29 + uVar36 * 0x18;
      }
      uVar35 = (uint)(byte)*puVar11;
      if (((byte)*puVar11 - 0xb < 2) && (0 < *(int *)((long)puVar11 + 1))) {
        lVar29 = 0;
LAB_71030701e0:
        do {
          iVar20 = (int)lVar29;
          if (iVar20 < 0) {
LAB_7103070218:
            pppplVar44 = (long ****)0x0;
            puVar15 = (uint *)&DAT_7104742dbb;
          }
          else {
            puVar15 = (uint *)&DAT_7104742dbb;
            pppplVar44 = (long ****)0x0;
            if (uVar35 == 0xb) {
              if (*(int *)((long)puVar11 + 1) <= iVar20) goto LAB_7103070218;
              puVar15 = (uint *)((long)puVar11 +
                                (long)*(int *)((long)puVar11 + (long)iVar20 * 4 + 5));
              pppplVar44 = (long ****)param_7;
            }
          }
          puVar32 = (uint *)&DAT_7104742dbb;
          if (((char)*puVar15 == '\f') &&
             (iVar20 = *(int *)((long)puVar15 + 1) + -1, 0 < *(int *)((long)puVar15 + 1))) {
            iVar33 = 0;
            do {
              iVar4 = iVar20 + iVar33;
              if (iVar4 < 0) {
                iVar4 = iVar4 + 1;
              }
              iVar4 = iVar4 >> 1;
              puVar34 = (uint *)((long)pppplVar44[5] +
                                (long)iVar4 * 8 + (long)*(int *)((long)puVar15 + 5));
              if (pppplVar44[4][*puVar34] == (long **)0x10f6f67961) {
                uVar35 = puVar34[1];
                if (-1 < (int)uVar35) {
                  puVar32 = (uint *)((long)puVar15 + (long)(int)uVar35);
                }
                break;
              }
              iVar9 = iVar4 + -1;
              if (pppplVar44[4][*puVar34] < (long **)0x10f6f67962) {
                iVar33 = iVar4 + 1;
                iVar9 = iVar20;
              }
              iVar20 = iVar9;
            } while (iVar33 <= iVar20);
          }
          uVar51 = uVar50;
          if ((char)*puVar32 == '\b') {
            uVar51 = *(undefined4 *)((long)puVar32 + 1);
          }
          *(undefined4 *)(*(long *)(*plVar2 + lVar37 * 0x50 + 0x20) + lVar29 * 0x18) = uVar51;
          puVar32 = (uint *)&DAT_7104742dbb;
          if (((char)*puVar15 == '\f') &&
             (iVar20 = *(int *)((long)puVar15 + 1) + -1, 0 < *(int *)((long)puVar15 + 1))) {
            iVar33 = 0;
            do {
              iVar4 = iVar20 + iVar33;
              if (iVar4 < 0) {
                iVar4 = iVar4 + 1;
              }
              iVar4 = iVar4 >> 1;
              puVar34 = (uint *)((long)pppplVar44[5] +
                                (long)iVar4 * 8 + (long)*(int *)((long)puVar15 + 5));
              if (pppplVar44[4][*puVar34] == (long **)0x10cafb4638) {
                uVar35 = puVar34[1];
                if (-1 < (int)uVar35) {
                  puVar32 = (uint *)((long)puVar15 + (long)(int)uVar35);
                }
                break;
              }
              iVar9 = iVar4 + -1;
              if (pppplVar44[4][*puVar34] < (long **)0x10cafb4639) {
                iVar33 = iVar4 + 1;
                iVar9 = iVar20;
              }
              iVar20 = iVar9;
            } while (iVar33 <= iVar20);
          }
          uVar51 = uVar50;
          if ((char)*puVar32 == '\b') {
            uVar51 = *(undefined4 *)((long)puVar32 + 1);
          }
          *(undefined4 *)(*(long *)(*plVar2 + lVar37 * 0x50 + 0x20) + lVar29 * 0x18 + 4) = uVar51;
          puVar32 = (uint *)&DAT_7104742dbb;
          if (((char)*puVar15 == '\f') &&
             (iVar20 = *(int *)((long)puVar15 + 1) + -1, 0 < *(int *)((long)puVar15 + 1))) {
            iVar33 = 0;
            do {
              iVar4 = iVar20 + iVar33;
              if (iVar4 < 0) {
                iVar4 = iVar4 + 1;
              }
              iVar4 = iVar4 >> 1;
              puVar34 = (uint *)((long)pppplVar44[5] +
                                (long)iVar4 * 8 + (long)*(int *)((long)puVar15 + 5));
              if (pppplVar44[4][*puVar34] == (long **)0x14e5a58611) {
                uVar35 = puVar34[1];
                if (-1 < (int)uVar35) {
                  puVar32 = (uint *)((long)puVar15 + (long)(int)uVar35);
                }
                break;
              }
              iVar9 = iVar4 + -1;
              if (pppplVar44[4][*puVar34] < (long **)0x14e5a58612) {
                iVar33 = iVar4 + 1;
                iVar9 = iVar20;
              }
              iVar20 = iVar9;
            } while (iVar33 <= iVar20);
          }
          uVar51 = uVar52;
          if ((char)*puVar32 == '\b') {
            uVar51 = *(undefined4 *)((long)puVar32 + 1);
          }
          *(undefined4 *)(*(long *)(*plVar2 + lVar37 * 0x50 + 0x20) + lVar29 * 0x18 + 8) = uVar51;
          puVar32 = (uint *)&DAT_7104742dbb;
          if (((char)*puVar15 == '\f') &&
             (iVar20 = *(int *)((long)puVar15 + 1) + -1, 0 < *(int *)((long)puVar15 + 1))) {
            iVar33 = 0;
            do {
              iVar4 = iVar20 + iVar33;
              if (iVar4 < 0) {
                iVar4 = iVar4 + 1;
              }
              iVar4 = iVar4 >> 1;
              puVar34 = (uint *)((long)pppplVar44[5] +
                                (long)iVar4 * 8 + (long)*(int *)((long)puVar15 + 5));
              if (pppplVar44[4][*puVar34] == (long **)0x14d9a8b948) {
                uVar35 = puVar34[1];
                if (-1 < (int)uVar35) {
                  puVar32 = (uint *)((long)puVar15 + (long)(int)uVar35);
                }
                break;
              }
              iVar9 = iVar4 + -1;
              if (pppplVar44[4][*puVar34] < (long **)0x14d9a8b949) {
                iVar33 = iVar4 + 1;
                iVar9 = iVar20;
              }
              iVar20 = iVar9;
            } while (iVar33 <= iVar20);
          }
          uVar51 = uVar52;
          if ((char)*puVar32 == '\b') {
            uVar51 = *(undefined4 *)((long)puVar32 + 1);
          }
          *(undefined4 *)(*(long *)(*plVar2 + lVar37 * 0x50 + 0x20) + lVar29 * 0x18 + 0xc) = uVar51;
          puVar32 = (uint *)&DAT_7104742dbb;
          if (((char)*puVar15 == '\f') &&
             (iVar20 = *(int *)((long)puVar15 + 1) + -1, 0 < *(int *)((long)puVar15 + 1))) {
            iVar33 = 0;
            do {
              iVar4 = iVar20 + iVar33;
              if (iVar4 < 0) {
                iVar4 = iVar4 + 1;
              }
              iVar4 = iVar4 >> 1;
              puVar34 = (uint *)((long)pppplVar44[5] +
                                (long)iVar4 * 8 + (long)*(int *)((long)puVar15 + 5));
              if (pppplVar44[4][*puVar34] == (long **)0x131b8611ff) {
                uVar35 = puVar34[1];
                if (-1 < (int)uVar35) {
                  puVar32 = (uint *)((long)puVar15 + (long)(int)uVar35);
                }
                break;
              }
              iVar9 = iVar4 + -1;
              if (pppplVar44[4][*puVar34] < (long **)0x131b861200) {
                iVar33 = iVar4 + 1;
                iVar9 = iVar20;
              }
              iVar20 = iVar9;
            } while (iVar33 <= iVar20);
          }
          uVar51 = uVar53;
          if ((char)*puVar32 == '\b') {
            uVar51 = *(undefined4 *)((long)puVar32 + 1);
          }
          *(undefined4 *)(*(long *)(*plVar2 + lVar37 * 0x50 + 0x20) + lVar29 * 0x18 + 0x10) = uVar51
          ;
          puVar32 = (uint *)&DAT_7104742dbb;
          if (((char)*puVar15 == '\f') &&
             (iVar20 = *(int *)((long)puVar15 + 1) + -1, 0 < *(int *)((long)puVar15 + 1))) {
            iVar33 = 0;
            do {
              iVar4 = iVar20 + iVar33;
              if (iVar4 < 0) {
                iVar4 = iVar4 + 1;
              }
              iVar4 = iVar4 >> 1;
              puVar34 = (uint *)((long)pppplVar44[5] +
                                (long)iVar4 * 8 + (long)*(int *)((long)puVar15 + 5));
              if (pppplVar44[4][*puVar34] == (long **)0x13278b2ea6) {
                uVar35 = puVar34[1];
                if (-1 < (int)uVar35) {
                  puVar32 = (uint *)((long)puVar15 + (long)(int)uVar35);
                }
                break;
              }
              iVar9 = iVar4 + -1;
              if (pppplVar44[4][*puVar34] < (long **)0x13278b2ea7) {
                iVar33 = iVar4 + 1;
                iVar9 = iVar20;
              }
              iVar20 = iVar9;
            } while (iVar33 <= iVar20);
          }
          uVar51 = uVar53;
          if ((char)*puVar32 == '\b') {
            uVar51 = *(undefined4 *)((long)puVar32 + 1);
          }
          lVar22 = lVar29 * 0x18;
          lVar29 = lVar29 + 1;
          *(undefined4 *)(*(long *)(*plVar2 + lVar37 * 0x50 + 0x20) + lVar22 + 0x14) = uVar51;
          uVar35 = (uint)(byte)*puVar11;
          if (uVar35 - 0xb < 2) {
            if (*(int *)((long)puVar11 + 1) <= lVar29) break;
            goto LAB_71030701e0;
          }
        } while (lVar29 < 0);
      }
      puVar15 = (uint *)&DAT_7104742dbb;
      if (((char)*param_6 == '\f') &&
         (iVar20 = *(int *)((long)param_6 + 1) + -1, 0 < *(int *)((long)param_6 + 1))) {
        iVar33 = 0;
        do {
          iVar4 = iVar20 + iVar33;
          if (iVar4 < 0) {
            iVar4 = iVar4 + 1;
          }
          iVar4 = iVar4 >> 1;
          puVar11 = (uint *)((long)pppplVar42[5] +
                            (long)iVar4 * 8 + (long)*(int *)((long)param_6 + 5));
          if (pppplVar42[4][*puVar11] == (long **)0x8d3117c47) {
            uVar36 = (ulong)(int)puVar11[1];
            param_5 = (long ****)0x0;
            if ((uVar36 & 0x80000000) == 0) {
              param_5 = pppplVar42;
              puVar15 = (uint *)((long)param_6 + uVar36);
            }
            goto LAB_71030706a8;
          }
          iVar9 = iVar4 + -1;
          if (pppplVar42[4][*puVar11] < (long **)0x8d3117c48) {
            iVar33 = iVar4 + 1;
            iVar9 = iVar20;
          }
          iVar20 = iVar9;
        } while (iVar33 <= iVar20);
      }
      param_5 = (long ****)0x0;
LAB_71030706a8:
      plVar3 = (long *)(*plVar2 + lVar37 * 0x50 + 0x38);
      if ((byte)*puVar15 - 0xb < 2) {
        iVar20 = *(int *)((long)puVar15 + 1);
      }
      else {
        iVar20 = 0;
      }
      plVar26 = (long *)(*plVar2 + lVar37 * 0x50 + 0x40);
      lVar29 = *plVar3;
      lVar22 = *plVar26 - lVar29 >> 3;
      uVar48 = lVar22 * -0x5555555555555555;
      uVar36 = (ulong)iVar20;
      if (uVar48 < uVar36) {
        FUN_7103079840(plVar3,uVar36 + lVar22 * 0x5555555555555555,(long ****)&DAT_00000050,
                       (byte ****)&SUB_00000018,param_5,param_6,param_7,param_8);
      }
      else if (uVar48 - uVar36 != 0) {
        *plVar26 = lVar29 + uVar36 * 0x18;
      }
      ppppbVar14 = (byte ****)&SUB_00000018;
      puVar11 = (uint *)&DAT_00000050;
      uVar35 = (uint)(byte)*puVar15;
      if (((byte)*puVar15 - 0xb < 2) && (0 < *(int *)((long)puVar15 + 1))) {
        lVar29 = 0;
LAB_7103070750:
        do {
          iVar20 = (int)lVar29;
          if (iVar20 < 0) {
LAB_7103070788:
            pppplVar42 = (long ****)0x0;
            puVar32 = (uint *)&DAT_7104742dbb;
          }
          else {
            puVar32 = (uint *)&DAT_7104742dbb;
            pppplVar42 = (long ****)0x0;
            if (uVar35 == 0xb) {
              if (*(int *)((long)puVar15 + 1) <= iVar20) goto LAB_7103070788;
              puVar32 = (uint *)((long)puVar15 +
                                (long)*(int *)((long)puVar15 + (long)iVar20 * 4 + 5));
              pppplVar42 = param_5;
            }
          }
          puVar34 = (uint *)&DAT_7104742dbb;
          if (((char)*puVar32 == '\f') &&
             (iVar20 = *(int *)((long)puVar32 + 1) + -1, 0 < *(int *)((long)puVar32 + 1))) {
            iVar33 = 0;
            do {
              iVar4 = iVar20 + iVar33;
              if (iVar4 < 0) {
                iVar4 = iVar4 + 1;
              }
              iVar4 = iVar4 >> 1;
              puVar1 = (uint *)((long)pppplVar42[5] +
                               (long)iVar4 * 8 + (long)*(int *)((long)puVar32 + 5));
              if (pppplVar42[4][*puVar1] == (long **)0x10f6f67961) {
                uVar35 = puVar1[1];
                if (-1 < (int)uVar35) {
                  puVar34 = (uint *)((long)puVar32 + (long)(int)uVar35);
                }
                break;
              }
              iVar9 = iVar4 + -1;
              if (pppplVar42[4][*puVar1] < (long **)0x10f6f67962) {
                iVar33 = iVar4 + 1;
                iVar9 = iVar20;
              }
              iVar20 = iVar9;
            } while (iVar33 <= iVar20);
          }
          uVar51 = uVar50;
          if ((char)*puVar34 == '\b') {
            uVar51 = *(undefined4 *)((long)puVar34 + 1);
          }
          *(undefined4 *)(*(long *)(*plVar2 + lVar37 * 0x50 + 0x38) + lVar29 * 0x18) = uVar51;
          puVar34 = (uint *)&DAT_7104742dbb;
          if (((char)*puVar32 == '\f') &&
             (iVar20 = *(int *)((long)puVar32 + 1) + -1, 0 < *(int *)((long)puVar32 + 1))) {
            iVar33 = 0;
            do {
              iVar4 = iVar20 + iVar33;
              if (iVar4 < 0) {
                iVar4 = iVar4 + 1;
              }
              iVar4 = iVar4 >> 1;
              puVar1 = (uint *)((long)pppplVar42[5] +
                               (long)iVar4 * 8 + (long)*(int *)((long)puVar32 + 5));
              if (pppplVar42[4][*puVar1] == (long **)0x10cafb4638) {
                uVar35 = puVar1[1];
                if (-1 < (int)uVar35) {
                  puVar34 = (uint *)((long)puVar32 + (long)(int)uVar35);
                }
                break;
              }
              iVar9 = iVar4 + -1;
              if (pppplVar42[4][*puVar1] < (long **)0x10cafb4639) {
                iVar33 = iVar4 + 1;
                iVar9 = iVar20;
              }
              iVar20 = iVar9;
            } while (iVar33 <= iVar20);
          }
          uVar51 = uVar50;
          if ((char)*puVar34 == '\b') {
            uVar51 = *(undefined4 *)((long)puVar34 + 1);
          }
          *(undefined4 *)(*(long *)(*plVar2 + lVar37 * 0x50 + 0x38) + lVar29 * 0x18 + 4) = uVar51;
          puVar34 = (uint *)&DAT_7104742dbb;
          if (((char)*puVar32 == '\f') &&
             (iVar20 = *(int *)((long)puVar32 + 1) + -1, 0 < *(int *)((long)puVar32 + 1))) {
            iVar33 = 0;
            do {
              iVar4 = iVar20 + iVar33;
              if (iVar4 < 0) {
                iVar4 = iVar4 + 1;
              }
              iVar4 = iVar4 >> 1;
              puVar1 = (uint *)((long)pppplVar42[5] +
                               (long)iVar4 * 8 + (long)*(int *)((long)puVar32 + 5));
              if (pppplVar42[4][*puVar1] == (long **)0x14e5a58611) {
                uVar35 = puVar1[1];
                if (-1 < (int)uVar35) {
                  puVar34 = (uint *)((long)puVar32 + (long)(int)uVar35);
                }
                break;
              }
              iVar9 = iVar4 + -1;
              if (pppplVar42[4][*puVar1] < (long **)0x14e5a58612) {
                iVar33 = iVar4 + 1;
                iVar9 = iVar20;
              }
              iVar20 = iVar9;
            } while (iVar33 <= iVar20);
          }
          uVar51 = uVar52;
          if ((char)*puVar34 == '\b') {
            uVar51 = *(undefined4 *)((long)puVar34 + 1);
          }
          *(undefined4 *)(*(long *)(*plVar2 + lVar37 * 0x50 + 0x38) + lVar29 * 0x18 + 8) = uVar51;
          puVar34 = (uint *)&DAT_7104742dbb;
          if (((char)*puVar32 == '\f') &&
             (iVar20 = *(int *)((long)puVar32 + 1) + -1, 0 < *(int *)((long)puVar32 + 1))) {
            iVar33 = 0;
            do {
              iVar4 = iVar20 + iVar33;
              if (iVar4 < 0) {
                iVar4 = iVar4 + 1;
              }
              iVar4 = iVar4 >> 1;
              puVar1 = (uint *)((long)pppplVar42[5] +
                               (long)iVar4 * 8 + (long)*(int *)((long)puVar32 + 5));
              if (pppplVar42[4][*puVar1] == (long **)0x14d9a8b948) {
                uVar35 = puVar1[1];
                if (-1 < (int)uVar35) {
                  puVar34 = (uint *)((long)puVar32 + (long)(int)uVar35);
                }
                break;
              }
              iVar9 = iVar4 + -1;
              if (pppplVar42[4][*puVar1] < (long **)0x14d9a8b949) {
                iVar33 = iVar4 + 1;
                iVar9 = iVar20;
              }
              iVar20 = iVar9;
            } while (iVar33 <= iVar20);
          }
          uVar51 = uVar52;
          if ((char)*puVar34 == '\b') {
            uVar51 = *(undefined4 *)((long)puVar34 + 1);
          }
          *(undefined4 *)(*(long *)(*plVar2 + lVar37 * 0x50 + 0x38) + lVar29 * 0x18 + 0xc) = uVar51;
          puVar34 = (uint *)&DAT_7104742dbb;
          if (((char)*puVar32 == '\f') &&
             (iVar20 = *(int *)((long)puVar32 + 1) + -1, 0 < *(int *)((long)puVar32 + 1))) {
            iVar33 = 0;
            do {
              iVar4 = iVar20 + iVar33;
              if (iVar4 < 0) {
                iVar4 = iVar4 + 1;
              }
              iVar4 = iVar4 >> 1;
              puVar1 = (uint *)((long)pppplVar42[5] +
                               (long)iVar4 * 8 + (long)*(int *)((long)puVar32 + 5));
              if (pppplVar42[4][*puVar1] == (long **)0x131b8611ff) {
                uVar35 = puVar1[1];
                if (-1 < (int)uVar35) {
                  puVar34 = (uint *)((long)puVar32 + (long)(int)uVar35);
                }
                break;
              }
              iVar9 = iVar4 + -1;
              if (pppplVar42[4][*puVar1] < (long **)0x131b861200) {
                iVar33 = iVar4 + 1;
                iVar9 = iVar20;
              }
              iVar20 = iVar9;
            } while (iVar33 <= iVar20);
          }
          uVar51 = uVar53;
          if ((char)*puVar34 == '\b') {
            uVar51 = *(undefined4 *)((long)puVar34 + 1);
          }
          *(undefined4 *)(*(long *)(*plVar2 + lVar37 * 0x50 + 0x38) + lVar29 * 0x18 + 0x10) = uVar51
          ;
          puVar34 = (uint *)&DAT_7104742dbb;
          if (((char)*puVar32 == '\f') &&
             (iVar20 = *(int *)((long)puVar32 + 1) + -1, 0 < *(int *)((long)puVar32 + 1))) {
            iVar33 = 0;
            do {
              iVar4 = iVar20 + iVar33;
              if (iVar4 < 0) {
                iVar4 = iVar4 + 1;
              }
              iVar4 = iVar4 >> 1;
              puVar1 = (uint *)((long)pppplVar42[5] +
                               (long)iVar4 * 8 + (long)*(int *)((long)puVar32 + 5));
              if (pppplVar42[4][*puVar1] == (long **)0x13278b2ea6) {
                uVar35 = puVar1[1];
                if (-1 < (int)uVar35) {
                  puVar34 = (uint *)((long)puVar32 + (long)(int)uVar35);
                }
                break;
              }
              iVar9 = iVar4 + -1;
              if (pppplVar42[4][*puVar1] < (long **)0x13278b2ea7) {
                iVar33 = iVar4 + 1;
                iVar9 = iVar20;
              }
              iVar20 = iVar9;
            } while (iVar33 <= iVar20);
          }
          uVar51 = uVar53;
          if ((char)*puVar34 == '\b') {
            uVar51 = *(undefined4 *)((long)puVar34 + 1);
          }
          lVar22 = lVar29 * 0x18;
          lVar29 = lVar29 + 1;
          *(undefined4 *)(*(long *)(*plVar2 + lVar37 * 0x50 + 0x38) + lVar22 + 0x14) = uVar51;
          uVar35 = (uint)(byte)*puVar15;
          if (uVar35 - 0xb < 2) {
            if (*(int *)((long)puVar15 + 1) <= lVar29) break;
            goto LAB_7103070750;
          }
        } while (lVar29 < 0);
      }
      uVar35 = (uint)*pbVar40;
      lVar37 = lVar37 + 1;
      if (uVar35 - 0xb < 2) {
        iVar20 = *(int *)(pbVar40 + 1);
      }
      else {
        iVar20 = 0;
      }
    } while (lVar37 < iVar20);
  }
  pppbVar21 = *ppppbVar47;
  if ((*(char *)pppbVar21 == '\f') &&
     (iVar20 = *(int *)((long)pppbVar21 + 1) + -1, 0 < *(int *)((long)pppbVar21 + 1))) {
    lVar37 = *param_2;
    iVar33 = 0;
    pbVar40 = &DAT_7104742dbb;
    do {
      iVar4 = iVar20 + iVar33;
      if (iVar4 < 0) {
        iVar4 = iVar4 + 1;
      }
      iVar4 = iVar4 >> 1;
      puVar15 = (uint *)(*(long *)(lVar37 + 0x28) + (long)*(int *)((long)pppbVar21 + 5) +
                        (long)iVar4 * 8);
      uVar36 = *(ulong *)(*(long *)(lVar37 + 0x20) + (ulong)*puVar15 * 8);
      if (uVar36 == 0x12f5e3cadb) {
        uVar35 = puVar15[1];
        if ((int)uVar35 < 0) goto LAB_7103070c80;
        pbVar40 = (byte *)((long)pppbVar21 + (long)(int)uVar35);
        goto LAB_7103070c8c;
      }
      iVar9 = iVar4 + -1;
      if (uVar36 < 0x12f5e3cadc) {
        iVar33 = iVar4 + 1;
        iVar9 = iVar20;
      }
      iVar20 = iVar9;
    } while (iVar33 <= iVar20);
    lVar37 = 0;
  }
  else {
LAB_7103070c80:
    lVar37 = 0;
    pbVar40 = &DAT_7104742dbb;
  }
LAB_7103070c8c:
  if (*pbVar40 - 0xb < 2) {
    iVar20 = *(int *)(pbVar40 + 1);
  }
  else {
    iVar20 = 0;
  }
  lVar29 = *(long *)(param_1 + 0x120) - *(long *)(param_1 + 0x118) >> 3;
  uVar48 = lVar29 * -0x5555555555555555;
  uVar36 = (ulong)iVar20;
  plVar2 = (long *)(param_1 + 0x118);
  if (uVar48 < uVar36) {
    FUN_7103079840(plVar2,uVar36 + lVar29 * 0x5555555555555555,(long ****)puVar11,ppppbVar14,param_5
                   ,param_6,param_7,param_8);
  }
  else if (uVar48 - uVar36 != 0) {
    *(ulong *)(param_1 + 0x120) = *(long *)(param_1 + 0x118) + uVar36 * 0x18;
  }
  uVar35 = (uint)*pbVar40;
  if ((*pbVar40 - 0xb < 2) && (0 < *(int *)(pbVar40 + 1))) {
    lVar29 = 0;
LAB_7103070d7c:
    do {
      iVar20 = (int)lVar29;
      if (iVar20 < 0) {
LAB_7103070db4:
        lVar22 = 0;
        pbVar38 = &DAT_7104742dbb;
      }
      else {
        lVar22 = 0;
        pbVar38 = &DAT_7104742dbb;
        if (uVar35 == 0xb) {
          if (*(int *)(pbVar40 + 1) <= iVar20) goto LAB_7103070db4;
          pbVar38 = pbVar40 + *(int *)(pbVar40 + (long)iVar20 * 4 + 5);
          lVar22 = lVar37;
        }
      }
      pbVar41 = &DAT_7104742dbb;
      if ((*pbVar38 == 0xc) && (uVar35 = *(int *)(pbVar38 + 1) - 1, 0 < *(int *)(pbVar38 + 1))) {
        ppppbVar14 = *(byte *****)(lVar22 + 0x20);
        iVar20 = 0;
        param_5 = (long ****)(*(long *)(lVar22 + 0x28) + (long)*(int *)(pbVar38 + 5));
        do {
          iVar33 = uVar35 + iVar20;
          if (iVar33 < 0) {
            iVar33 = iVar33 + 1;
          }
          uVar18 = iVar33 >> 1;
          param_6 = (uint *)(ulong)uVar18;
          param_7 = (uint *)(param_5 + (int)uVar18);
          param_8 = (byte ****)ppppbVar14[*param_7];
          if (param_8 == (byte ****)0x10f6f67961) {
            if (-1 < (int)*(uint *)((long)param_7 + 4)) {
              pbVar41 = pbVar38 + (int)*(uint *)((long)param_7 + 4);
            }
            break;
          }
          param_7 = (uint *)(ulong)(uVar18 - 1);
          uVar5 = uVar18 - 1;
          if (param_8 < (byte ****)0x10f6f67962) {
            iVar20 = uVar18 + 1;
            uVar5 = uVar35;
          }
          uVar35 = uVar5;
        } while (iVar20 <= (int)uVar35);
      }
      uVar50 = 0x43730000;
      if (*pbVar41 == 8) {
        uVar50 = *(undefined4 *)(pbVar41 + 1);
      }
      *(undefined4 *)(*plVar2 + lVar29 * 0x18) = uVar50;
      pbVar41 = &DAT_7104742dbb;
      if ((*pbVar38 == 0xc) && (uVar35 = *(int *)(pbVar38 + 1) - 1, 0 < *(int *)(pbVar38 + 1))) {
        ppppbVar14 = *(byte *****)(lVar22 + 0x20);
        iVar20 = 0;
        param_5 = (long ****)(*(long *)(lVar22 + 0x28) + (long)*(int *)(pbVar38 + 5));
        do {
          iVar33 = uVar35 + iVar20;
          if (iVar33 < 0) {
            iVar33 = iVar33 + 1;
          }
          uVar18 = iVar33 >> 1;
          param_6 = (uint *)(ulong)uVar18;
          param_7 = (uint *)(param_5 + (int)uVar18);
          param_8 = (byte ****)ppppbVar14[*param_7];
          if (param_8 == (byte ****)0x10cafb4638) {
            if (-1 < (int)*(uint *)((long)param_7 + 4)) {
              pbVar41 = pbVar38 + (int)*(uint *)((long)param_7 + 4);
            }
            break;
          }
          param_7 = (uint *)(ulong)(uVar18 - 1);
          uVar5 = uVar18 - 1;
          if (param_8 < (byte ****)0x10cafb4639) {
            iVar20 = uVar18 + 1;
            uVar5 = uVar35;
          }
          uVar35 = uVar5;
        } while (iVar20 <= (int)uVar35);
      }
      uVar50 = 0x43730000;
      if (*pbVar41 == 8) {
        uVar50 = *(undefined4 *)(pbVar41 + 1);
      }
      *(undefined4 *)(*plVar2 + lVar29 * 0x18 + 4) = uVar50;
      pbVar41 = &DAT_7104742dbb;
      if ((*pbVar38 == 0xc) && (uVar35 = *(int *)(pbVar38 + 1) - 1, 0 < *(int *)(pbVar38 + 1))) {
        ppppbVar14 = *(byte *****)(lVar22 + 0x20);
        iVar20 = 0;
        param_5 = (long ****)(*(long *)(lVar22 + 0x28) + (long)*(int *)(pbVar38 + 5));
        do {
          iVar33 = uVar35 + iVar20;
          if (iVar33 < 0) {
            iVar33 = iVar33 + 1;
          }
          uVar18 = iVar33 >> 1;
          param_6 = (uint *)(ulong)uVar18;
          param_7 = (uint *)(param_5 + (int)uVar18);
          param_8 = (byte ****)ppppbVar14[*param_7];
          if (param_8 == (byte ****)0x14e5a58611) {
            if (-1 < (int)*(uint *)((long)param_7 + 4)) {
              pbVar41 = pbVar38 + (int)*(uint *)((long)param_7 + 4);
            }
            break;
          }
          param_7 = (uint *)(ulong)(uVar18 - 1);
          uVar5 = uVar18 - 1;
          if (param_8 < (byte ****)0x14e5a58612) {
            iVar20 = uVar18 + 1;
            uVar5 = uVar35;
          }
          uVar35 = uVar5;
        } while (iVar20 <= (int)uVar35);
      }
      uVar50 = 0xc0500000;
      if (*pbVar41 == 8) {
        uVar50 = *(undefined4 *)(pbVar41 + 1);
      }
      *(undefined4 *)(*plVar2 + lVar29 * 0x18 + 8) = uVar50;
      pbVar41 = &DAT_7104742dbb;
      if ((*pbVar38 == 0xc) && (uVar35 = *(int *)(pbVar38 + 1) - 1, 0 < *(int *)(pbVar38 + 1))) {
        ppppbVar14 = *(byte *****)(lVar22 + 0x20);
        iVar20 = 0;
        param_5 = (long ****)(*(long *)(lVar22 + 0x28) + (long)*(int *)(pbVar38 + 5));
        do {
          iVar33 = uVar35 + iVar20;
          if (iVar33 < 0) {
            iVar33 = iVar33 + 1;
          }
          uVar18 = iVar33 >> 1;
          param_6 = (uint *)(ulong)uVar18;
          param_7 = (uint *)(param_5 + (int)uVar18);
          param_8 = (byte ****)ppppbVar14[*param_7];
          if (param_8 == (byte ****)0x14d9a8b948) {
            if (-1 < (int)*(uint *)((long)param_7 + 4)) {
              pbVar41 = pbVar38 + (int)*(uint *)((long)param_7 + 4);
            }
            break;
          }
          param_7 = (uint *)(ulong)(uVar18 - 1);
          uVar5 = uVar18 - 1;
          if (param_8 < (byte ****)0x14d9a8b949) {
            iVar20 = uVar18 + 1;
            uVar5 = uVar35;
          }
          uVar35 = uVar5;
        } while (iVar20 <= (int)uVar35);
      }
      uVar50 = 0xc0500000;
      if (*pbVar41 == 8) {
        uVar50 = *(undefined4 *)(pbVar41 + 1);
      }
      *(undefined4 *)(*plVar2 + lVar29 * 0x18 + 0xc) = uVar50;
      pbVar41 = &DAT_7104742dbb;
      if ((*pbVar38 == 0xc) && (uVar35 = *(int *)(pbVar38 + 1) - 1, 0 < *(int *)(pbVar38 + 1))) {
        ppppbVar14 = *(byte *****)(lVar22 + 0x20);
        iVar20 = 0;
        param_5 = (long ****)(*(long *)(lVar22 + 0x28) + (long)*(int *)(pbVar38 + 5));
        do {
          iVar33 = uVar35 + iVar20;
          if (iVar33 < 0) {
            iVar33 = iVar33 + 1;
          }
          uVar18 = iVar33 >> 1;
          param_6 = (uint *)(ulong)uVar18;
          param_7 = (uint *)(param_5 + (int)uVar18);
          param_8 = (byte ****)ppppbVar14[*param_7];
          if (param_8 == (byte ****)0x131b8611ff) {
            if (-1 < (int)*(uint *)((long)param_7 + 4)) {
              pbVar41 = pbVar38 + (int)*(uint *)((long)param_7 + 4);
            }
            break;
          }
          param_7 = (uint *)(ulong)(uVar18 - 1);
          uVar5 = uVar18 - 1;
          if (param_8 < (byte ****)0x131b861200) {
            iVar20 = uVar18 + 1;
            uVar5 = uVar35;
          }
          uVar35 = uVar5;
        } while (iVar20 <= (int)uVar35);
      }
      puVar11 = (uint *)(ulong)*pbVar41;
      uVar50 = 0x40500000;
      if (*pbVar41 == 8) {
        uVar50 = *(undefined4 *)(pbVar41 + 1);
      }
      *(undefined4 *)(*plVar2 + lVar29 * 0x18 + 0x10) = uVar50;
      pbVar41 = &DAT_7104742dbb;
      if ((*pbVar38 == 0xc) && (uVar35 = *(int *)(pbVar38 + 1) - 1, 0 < *(int *)(pbVar38 + 1))) {
        ppppbVar14 = *(byte *****)(lVar22 + 0x20);
        puVar11 = (uint *)0x0;
        do {
          uVar18 = (uint)puVar11;
          iVar20 = uVar35 + uVar18;
          if (iVar20 < 0) {
            iVar20 = iVar20 + 1;
          }
          uVar5 = iVar20 >> 1;
          param_5 = (long ****)(ulong)uVar5;
          param_6 = (uint *)(*(long *)(lVar22 + 0x28) + (long)*(int *)(pbVar38 + 5) +
                            (long)(int)uVar5 * 8);
          param_7 = (uint *)ppppbVar14[*param_6];
          if ((long ****)param_7 == (long ****)0x13278b2ea6) {
            if (-1 < (int)param_6[1]) {
              pbVar41 = pbVar38 + (int)param_6[1];
            }
            break;
          }
          param_6 = (uint *)(ulong)(uVar5 - 1);
          uVar10 = uVar5 - 1;
          if (param_7 < (long ****)0x13278b2ea7) {
            uVar18 = uVar5 + 1;
            uVar10 = uVar35;
          }
          uVar35 = uVar10;
          puVar11 = (uint *)(ulong)uVar18;
        } while ((int)uVar18 <= (int)uVar35);
      }
      uVar50 = 0x40500000;
      if (*pbVar41 == 8) {
        uVar50 = *(undefined4 *)(pbVar41 + 1);
      }
      lVar22 = lVar29 * 0x18;
      lVar29 = lVar29 + 1;
      *(undefined4 *)(*plVar2 + lVar22 + 0x14) = uVar50;
      uVar35 = (uint)*pbVar40;
      if (uVar35 - 0xb < 2) {
        if (*(int *)(pbVar40 + 1) <= lVar29) break;
        goto LAB_7103070d7c;
      }
    } while (lVar29 < 0);
  }
  pppbVar21 = *ppppbVar47;
  if ((*(char *)pppbVar21 == '\f') &&
     (iVar20 = *(int *)((long)pppbVar21 + 1) + -1, 0 < *(int *)((long)pppbVar21 + 1))) {
    lVar37 = *param_2;
    iVar33 = 0;
    pbVar40 = &DAT_7104742dbb;
    do {
      iVar4 = iVar20 + iVar33;
      if (iVar4 < 0) {
        iVar4 = iVar4 + 1;
      }
      iVar4 = iVar4 >> 1;
      puVar15 = (uint *)(*(long *)(lVar37 + 0x28) + (long)*(int *)((long)pppbVar21 + 5) +
                        (long)iVar4 * 8);
      uVar36 = *(ulong *)(*(long *)(lVar37 + 0x20) + (ulong)*puVar15 * 8);
      if (uVar36 == 0x13c04d5fae) {
        uVar35 = puVar15[1];
        if ((int)uVar35 < 0) goto LAB_7103071244;
        pbVar40 = (byte *)((long)pppbVar21 + (long)(int)uVar35);
        goto LAB_7103071250;
      }
      iVar9 = iVar4 + -1;
      if (uVar36 < 0x13c04d5faf) {
        iVar33 = iVar4 + 1;
        iVar9 = iVar20;
      }
      iVar20 = iVar9;
    } while (iVar33 <= iVar20);
    lVar37 = 0;
  }
  else {
LAB_7103071244:
    lVar37 = 0;
    pbVar40 = &DAT_7104742dbb;
  }
LAB_7103071250:
  if (*pbVar40 - 0xb < 2) {
    iVar20 = *(int *)(pbVar40 + 1);
  }
  else {
    iVar20 = 0;
  }
  uVar36 = (ulong)iVar20;
  pvVar43 = *(void **)(param_1 + 0x130);
  puVar27 = *(undefined8 **)(param_1 + 0x138);
  pppplVar42 = (long ****)((long)puVar27 - (long)pvVar43);
  lVar29 = (long)pppplVar42 >> 2;
  plVar2 = (long *)(param_1 + 0x130);
  if ((ulong)(lVar29 * -0x5555555555555555) < uVar36) {
    uVar48 = uVar36 + lVar29 * 0x5555555555555555;
    if ((ulong)((*(long *)(param_1 + 0x140) - (long)puVar27 >> 2) * -0x5555555555555555) < uVar48) {
      if (iVar20 < 0) goto LAB_7103079628;
      lVar22 = *(long *)(param_1 + 0x140) - (long)pvVar43 >> 2;
      if ((ulong)(lVar22 * -0x5555555555555555) < 0xaaaaaaaaaaaaaaa) {
        uVar23 = lVar22 * 0x5555555555555556;
        uVar49 = uVar36;
        if (uVar36 <= uVar23) {
          uVar49 = uVar23;
        }
        if (uVar49 != 0) goto LAB_7103071388;
        lVar22 = 0;
      }
      else {
        uVar49 = 0x1555555555555555;
LAB_7103071388:
        ppplVar25 = (long ***)(uVar49 * 0xc);
        if (ppplVar25 == (long ***)0x0) {
          ppplVar25 = (long ***)0x1;
        }
        lVar22 = FUN_710392e290(0x10,ppplVar25,(long ****)puVar11,ppppbVar14,param_5,param_6,param_7
                                ,param_8);
        if (lVar22 == 0) {
          if (DAT_7105332f00 != (long *)0x0) {
            local_84 = 0;
            pppplVar44 = &local_90;
            local_90 = ppplVar25;
            uVar23 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_84);
            if (((uVar23 & 1) != 0) &&
               (lVar22 = FUN_710392e290(0x10,ppplVar25,pppplVar44,ppppbVar14,param_5,param_6,param_7
                                        ,param_8), lVar22 != 0)) goto LAB_71030713f8;
          }
          lVar22 = 0;
        }
      }
LAB_71030713f8:
      pvVar46 = (void *)(lVar22 + lVar29 * 4);
      puVar11 = (uint *)(uVar48 * 0xc);
      memset(pvVar46,0,(size_t)puVar11);
      lVar29 = SUB168(SEXT816((long)pppplVar42) * SEXT816(-0x2aaaaaaaaaaaaaab),8);
      pvVar46 = (void *)((long)pvVar46 + ((lVar29 >> 1) - (lVar29 >> 0x3f)) * 0xc);
      if (0 < (long)pppplVar42) {
        memcpy(pvVar46,pvVar43,(size_t)pppplVar42);
        puVar11 = (uint *)pppplVar42;
      }
      *(void **)(param_1 + 0x130) = pvVar46;
      *(ulong *)(param_1 + 0x138) = lVar22 + uVar36 * 0xc;
      *(ulong *)(param_1 + 0x140) = lVar22 + uVar49 * 0xc;
      if (pvVar43 != (void *)0x0) {
        FUN_710392eb40((ulong)pvVar43);
      }
    }
    else {
      uVar36 = uVar48;
      if ((uVar48 & 1) != 0) {
        *(undefined4 *)(puVar27 + 1) = 0;
        *puVar27 = 0;
        puVar27 = (undefined8 *)(*(long *)(param_1 + 0x138) + 0xc);
        uVar36 = uVar48 - 1;
        *(undefined8 **)(param_1 + 0x138) = puVar27;
      }
      if (uVar48 != 1) {
        do {
          *(undefined4 *)(puVar27 + 1) = 0;
          *puVar27 = 0;
          lVar29 = *(long *)(param_1 + 0x138);
          *(long *)(param_1 + 0x138) = lVar29 + 0xc;
          *(undefined4 *)(lVar29 + 0x14) = 0;
          *(undefined8 *)(lVar29 + 0xc) = 0;
          puVar27 = (undefined8 *)(*(long *)(param_1 + 0x138) + 0xc);
          uVar36 = uVar36 - 2;
          *(undefined8 **)(param_1 + 0x138) = puVar27;
        } while (uVar36 != 0);
      }
    }
  }
  else if (lVar29 * -0x5555555555555555 - uVar36 != 0) {
    *(void **)(param_1 + 0x138) = (void *)((long)pvVar43 + uVar36 * 0xc);
  }
  uVar35 = (uint)*pbVar40;
  if ((*pbVar40 - 0xb < 2) && (0 < *(int *)(pbVar40 + 1))) {
    lVar29 = 0;
LAB_71030714e4:
    do {
      iVar20 = (int)lVar29;
      if (iVar20 < 0) {
LAB_710307151c:
        lVar22 = 0;
        pbVar38 = &DAT_7104742dbb;
      }
      else {
        pbVar38 = &DAT_7104742dbb;
        lVar22 = 0;
        if (uVar35 == 0xb) {
          if (*(int *)(pbVar40 + 1) <= iVar20) goto LAB_710307151c;
          pbVar38 = pbVar40 + *(int *)(pbVar40 + (long)iVar20 * 4 + 5);
          lVar22 = lVar37;
        }
      }
      pbVar41 = &DAT_7104742dbb;
      if ((*pbVar38 == 0xc) && (uVar35 = *(int *)(pbVar38 + 1) - 1, 0 < *(int *)(pbVar38 + 1))) {
        iVar20 = 0;
        do {
          iVar33 = uVar35 + iVar20;
          if (iVar33 < 0) {
            iVar33 = iVar33 + 1;
          }
          uVar18 = iVar33 >> 1;
          puVar11 = (uint *)(ulong)uVar18;
          ppppbVar14 = (byte ****)
                       (*(long *)(lVar22 + 0x28) + (long)*(int *)(pbVar38 + 5) +
                       (long)(int)uVar18 * 8);
          param_5 = *(long *****)(*(long *)(lVar22 + 0x20) + (ulong)*(uint *)ppppbVar14 * 8);
          if (param_5 == (long ****)0x9d10a8f87) {
            if (-1 < (int)*(uint *)((long)ppppbVar14 + 4)) {
              pbVar41 = pbVar38 + (int)*(uint *)((long)ppppbVar14 + 4);
            }
            break;
          }
          ppppbVar14 = (byte ****)(ulong)(uVar18 - 1);
          uVar5 = uVar18 - 1;
          if (param_5 < (long ****)0x9d10a8f88) {
            iVar20 = uVar18 + 1;
            uVar5 = uVar35;
          }
          uVar35 = uVar5;
        } while (iVar20 <= (int)uVar35);
      }
      uVar50 = 0x44960000;
      if (*pbVar41 == 8) {
        uVar50 = *(undefined4 *)(pbVar41 + 1);
      }
      *(undefined4 *)(*plVar2 + lVar29 * 0xc) = uVar50;
      pbVar41 = &DAT_7104742dbb;
      if ((*pbVar38 == 0xc) && (uVar35 = *(int *)(pbVar38 + 1) - 1, 0 < *(int *)(pbVar38 + 1))) {
        iVar20 = 0;
        do {
          iVar33 = uVar35 + iVar20;
          if (iVar33 < 0) {
            iVar33 = iVar33 + 1;
          }
          uVar18 = iVar33 >> 1;
          puVar11 = (uint *)(ulong)uVar18;
          ppppbVar14 = (byte ****)
                       (*(long *)(lVar22 + 0x28) + (long)*(int *)(pbVar38 + 5) +
                       (long)(int)uVar18 * 8);
          param_5 = *(long *****)(*(long *)(lVar22 + 0x20) + (ulong)*(uint *)ppppbVar14 * 8);
          if (param_5 == (long ****)0x906e13dc6) {
            if (-1 < (int)*(uint *)((long)ppppbVar14 + 4)) {
              pbVar41 = pbVar38 + (int)*(uint *)((long)ppppbVar14 + 4);
            }
            break;
          }
          ppppbVar14 = (byte ****)(ulong)(uVar18 - 1);
          uVar5 = uVar18 - 1;
          if (param_5 < (long ****)0x906e13dc7) {
            iVar20 = uVar18 + 1;
            uVar5 = uVar35;
          }
          uVar35 = uVar5;
        } while (iVar20 <= (int)uVar35);
      }
      uVar50 = 0x44af0000;
      if (*pbVar41 == 8) {
        uVar50 = *(undefined4 *)(pbVar41 + 1);
      }
      *(undefined4 *)(*plVar2 + lVar29 * 0xc + 4) = uVar50;
      pbVar41 = &DAT_7104742dbb;
      if ((*pbVar38 == 0xc) && (uVar35 = *(int *)(pbVar38 + 1) - 1, 0 < *(int *)(pbVar38 + 1))) {
        iVar20 = 0;
        do {
          iVar33 = uVar35 + iVar20;
          if (iVar33 < 0) {
            iVar33 = iVar33 + 1;
          }
          iVar33 = iVar33 >> 1;
          puVar11 = (uint *)(*(long *)(lVar22 + 0x28) + (long)*(int *)(pbVar38 + 5) +
                            (long)iVar33 * 8);
          ppppbVar14 = *(byte *****)(*(long *)(lVar22 + 0x20) + (ulong)*puVar11 * 8);
          if (ppppbVar14 == (byte ****)0xbbe16da93) {
            if (-1 < (int)*(uint *)((long)puVar11 + 4)) {
              pbVar41 = pbVar38 + (int)*(uint *)((long)puVar11 + 4);
            }
            break;
          }
          puVar11 = (uint *)(ulong)(iVar33 - 1U);
          uVar18 = iVar33 - 1U;
          if (ppppbVar14 < (byte ****)0xbbe16da94) {
            iVar20 = iVar33 + 1;
            uVar18 = uVar35;
          }
          uVar35 = uVar18;
        } while (iVar20 <= (int)uVar35);
      }
      uVar50 = 0x41200000;
      if (*pbVar41 == 8) {
        uVar50 = *(undefined4 *)(pbVar41 + 1);
      }
      lVar22 = lVar29 * 0xc;
      lVar29 = lVar29 + 1;
      *(undefined4 *)(*plVar2 + lVar22 + 8) = uVar50;
      uVar35 = (uint)*pbVar40;
      if (uVar35 - 0xb < 2) {
        if (*(int *)(pbVar40 + 1) <= lVar29) break;
        goto LAB_71030714e4;
      }
    } while (lVar29 < 0);
  }
  pppbVar21 = *ppppbVar47;
  if ((*(char *)pppbVar21 == '\f') &&
     (iVar20 = *(int *)((long)pppbVar21 + 1) + -1, 0 < *(int *)((long)pppbVar21 + 1))) {
    lVar37 = *param_2;
    iVar33 = 0;
    pcVar28 = "";
    do {
      iVar4 = iVar20 + iVar33;
      if (iVar4 < 0) {
        iVar4 = iVar4 + 1;
      }
      iVar4 = iVar4 >> 1;
      puVar15 = (uint *)(*(long *)(lVar37 + 0x28) + (long)*(int *)((long)pppbVar21 + 5) +
                        (long)iVar4 * 8);
      uVar36 = *(ulong *)(*(long *)(lVar37 + 0x20) + (ulong)*puVar15 * 8);
      if (uVar36 == 0x11b7d74c09) {
        uVar35 = puVar15[1];
        if ((int)uVar35 < 0) goto LAB_71030717cc;
        pcVar28 = (char *)((long)pppbVar21 + (long)(int)uVar35);
        goto LAB_71030717d8;
      }
      iVar9 = iVar4 + -1;
      if (uVar36 < 0x11b7d74c0a) {
        iVar33 = iVar4 + 1;
        iVar9 = iVar20;
      }
      iVar20 = iVar9;
    } while (iVar33 <= iVar20);
    lVar37 = 0;
  }
  else {
LAB_71030717cc:
    lVar37 = 0;
    pcVar28 = "";
  }
LAB_71030717d8:
  if ((*pcVar28 == '\f') && (iVar20 = *(int *)(pcVar28 + 1) + -1, 0 < *(int *)(pcVar28 + 1))) {
    iVar33 = 0;
    pcVar31 = "";
    do {
      iVar4 = iVar20 + iVar33;
      if (iVar4 < 0) {
        iVar4 = iVar4 + 1;
      }
      iVar4 = iVar4 >> 1;
      puVar15 = (uint *)(*(long *)(lVar37 + 0x28) + (long)*(int *)(pcVar28 + 5) + (long)iVar4 * 8);
      uVar36 = *(ulong *)(*(long *)(lVar37 + 0x20) + (ulong)*puVar15 * 8);
      if (uVar36 == 0xbc0ad263c) {
        uVar35 = puVar15[1];
        if ((int)uVar35 < 0) goto LAB_7103071858;
        pcVar31 = pcVar28 + (int)uVar35;
        break;
      }
      iVar9 = iVar4 + -1;
      if (uVar36 < 0xbc0ad263d) {
        iVar33 = iVar4 + 1;
        iVar9 = iVar20;
      }
      iVar20 = iVar9;
    } while (iVar33 <= iVar20);
  }
  else {
LAB_7103071858:
    pcVar31 = "";
  }
  if (*pcVar31 == '\b') {
    uVar50 = *(undefined4 *)(pcVar31 + 1);
  }
  else {
    uVar50 = 0x442f0000;
  }
  *(undefined4 *)(param_1 + 0x148) = uVar50;
  if ((*pcVar28 == '\f') && (iVar20 = *(int *)(pcVar28 + 1) + -1, 0 < *(int *)(pcVar28 + 1))) {
    iVar33 = 0;
    pcVar31 = "";
    do {
      iVar4 = iVar20 + iVar33;
      if (iVar4 < 0) {
        iVar4 = iVar4 + 1;
      }
      iVar4 = iVar4 >> 1;
      puVar15 = (uint *)(*(long *)(lVar37 + 0x28) + (long)*(int *)(pcVar28 + 5) + (long)iVar4 * 8);
      uVar36 = *(ulong *)(*(long *)(lVar37 + 0x20) + (ulong)*puVar15 * 8);
      if (uVar36 == 0xa381ad7fa) {
        uVar35 = puVar15[1];
        if ((int)uVar35 < 0) goto LAB_710307190c;
        pcVar31 = pcVar28 + (int)uVar35;
        break;
      }
      iVar9 = iVar4 + -1;
      if (uVar36 < 0xa381ad7fb) {
        iVar33 = iVar4 + 1;
        iVar9 = iVar20;
      }
      iVar20 = iVar9;
    } while (iVar33 <= iVar20);
  }
  else {
LAB_710307190c:
    pcVar31 = "";
  }
  if (*pcVar31 == '\b') {
    uVar50 = *(undefined4 *)(pcVar31 + 1);
  }
  else {
    uVar50 = 0x442f0000;
  }
  *(undefined4 *)(param_1 + 0x14c) = uVar50;
  pppbVar21 = *ppppbVar47;
  if ((*(char *)pppbVar21 == '\f') &&
     (iVar20 = *(int *)((long)pppbVar21 + 1) + -1, 0 < *(int *)((long)pppbVar21 + 1))) {
    lVar37 = *param_2;
    iVar33 = 0;
    pcVar28 = "";
    do {
      iVar4 = iVar20 + iVar33;
      if (iVar4 < 0) {
        iVar4 = iVar4 + 1;
      }
      iVar4 = iVar4 >> 1;
      puVar15 = (uint *)(*(long *)(lVar37 + 0x28) + (long)*(int *)((long)pppbVar21 + 5) +
                        (long)iVar4 * 8);
      uVar36 = *(ulong *)(*(long *)(lVar37 + 0x20) + (ulong)*puVar15 * 8);
      if (uVar36 == 0x1808df8222) {
        uVar35 = puVar15[1];
        if ((int)uVar35 < 0) goto LAB_71030719e4;
        pcVar28 = (char *)((long)pppbVar21 + (long)(int)uVar35);
        goto LAB_71030719f0;
      }
      iVar9 = iVar4 + -1;
      if (uVar36 < 0x1808df8223) {
        iVar33 = iVar4 + 1;
        iVar9 = iVar20;
      }
      iVar20 = iVar9;
    } while (iVar33 <= iVar20);
    lVar37 = 0;
  }
  else {
LAB_71030719e4:
    lVar37 = 0;
    pcVar28 = "";
  }
LAB_71030719f0:
  if ((*pcVar28 == '\f') && (iVar20 = *(int *)(pcVar28 + 1) + -1, 0 < *(int *)(pcVar28 + 1))) {
    iVar33 = 0;
    pcVar31 = "";
    do {
      iVar4 = iVar20 + iVar33;
      if (iVar4 < 0) {
        iVar4 = iVar4 + 1;
      }
      iVar4 = iVar4 >> 1;
      puVar15 = (uint *)(*(long *)(lVar37 + 0x28) + (long)*(int *)(pcVar28 + 5) + (long)iVar4 * 8);
      uVar36 = *(ulong *)(*(long *)(lVar37 + 0x20) + (ulong)*puVar15 * 8);
      if (uVar36 == 0xbc0ad263c) {
        uVar35 = puVar15[1];
        if ((int)uVar35 < 0) goto LAB_7103071a70;
        pcVar31 = pcVar28 + (int)uVar35;
        break;
      }
      iVar9 = iVar4 + -1;
      if (uVar36 < 0xbc0ad263d) {
        iVar33 = iVar4 + 1;
        iVar9 = iVar20;
      }
      iVar20 = iVar9;
    } while (iVar33 <= iVar20);
  }
  else {
LAB_7103071a70:
    pcVar31 = "";
  }
  if (*pcVar31 == '\b') {
    uVar50 = *(undefined4 *)(pcVar31 + 1);
  }
  else {
    uVar50 = 0x431b0000;
  }
  *(undefined4 *)(param_1 + 0x150) = uVar50;
  if ((*pcVar28 == '\f') && (iVar20 = *(int *)(pcVar28 + 1) + -1, 0 < *(int *)(pcVar28 + 1))) {
    iVar33 = 0;
    pcVar31 = "";
    do {
      iVar4 = iVar20 + iVar33;
      if (iVar4 < 0) {
        iVar4 = iVar4 + 1;
      }
      iVar4 = iVar4 >> 1;
      puVar15 = (uint *)(*(long *)(lVar37 + 0x28) + (long)*(int *)(pcVar28 + 5) + (long)iVar4 * 8);
      uVar36 = *(ulong *)(*(long *)(lVar37 + 0x20) + (ulong)*puVar15 * 8);
      if (uVar36 == 0xa381ad7fa) {
        uVar35 = puVar15[1];
        if ((int)uVar35 < 0) goto LAB_7103071b18;
        pcVar31 = pcVar28 + (int)uVar35;
        break;
      }
      iVar9 = iVar4 + -1;
      if (uVar36 < 0xa381ad7fb) {
        iVar33 = iVar4 + 1;
        iVar9 = iVar20;
      }
      iVar20 = iVar9;
    } while (iVar33 <= iVar20);
  }
  else {
LAB_7103071b18:
    pcVar31 = "";
  }
  if (*pcVar31 == '\b') {
    uVar50 = *(undefined4 *)(pcVar31 + 1);
  }
  else {
    uVar50 = 0x43660000;
  }
  *(undefined4 *)(param_1 + 0x154) = uVar50;
  pppbVar21 = *ppppbVar47;
  if ((*(char *)pppbVar21 == '\f') &&
     (iVar20 = *(int *)((long)pppbVar21 + 1) + -1, 0 < *(int *)((long)pppbVar21 + 1))) {
    iVar33 = 0;
    pcVar28 = "";
    do {
      iVar4 = iVar20 + iVar33;
      if (iVar4 < 0) {
        iVar4 = iVar4 + 1;
      }
      iVar4 = iVar4 >> 1;
      puVar15 = (uint *)(*(long *)(*param_2 + 0x28) + (long)*(int *)((long)pppbVar21 + 5) +
                        (long)iVar4 * 8);
      uVar36 = *(ulong *)(*(long *)(*param_2 + 0x20) + (ulong)*puVar15 * 8);
      if (uVar36 == 0x1e21dffa0d) {
        uVar35 = puVar15[1];
        if ((int)uVar35 < 0) goto LAB_7103071bd8;
        pcVar28 = (char *)((long)pppbVar21 + (long)(int)uVar35);
        break;
      }
      iVar9 = iVar4 + -1;
      if (uVar36 < 0x1e21dffa0e) {
        iVar33 = iVar4 + 1;
        iVar9 = iVar20;
      }
      iVar20 = iVar9;
    } while (iVar33 <= iVar20);
  }
  else {
LAB_7103071bd8:
    pcVar28 = "";
  }
  if (*pcVar28 == '\b') {
    uVar50 = *(undefined4 *)(pcVar28 + 1);
  }
  else {
    uVar50 = 0x43660000;
  }
  *(undefined4 *)(param_1 + 0x158) = uVar50;
  pppbVar21 = *ppppbVar47;
  if ((*(char *)pppbVar21 == '\f') &&
     (iVar20 = *(int *)((long)pppbVar21 + 1) + -1, 0 < *(int *)((long)pppbVar21 + 1))) {
    lVar37 = *param_2;
    iVar33 = 0;
    pbVar40 = &DAT_7104742dbb;
    do {
      iVar4 = iVar20 + iVar33;
      if (iVar4 < 0) {
        iVar4 = iVar4 + 1;
      }
      iVar4 = iVar4 >> 1;
      puVar15 = (uint *)(*(long *)(lVar37 + 0x28) + (long)*(int *)((long)pppbVar21 + 5) +
                        (long)iVar4 * 8);
      uVar36 = *(ulong *)(*(long *)(lVar37 + 0x20) + (ulong)*puVar15 * 8);
      if (uVar36 == 0x175ac2dcb0) {
        uVar35 = puVar15[1];
        if ((int)uVar35 < 0) goto LAB_7103071c98;
        pbVar40 = (byte *)((long)pppbVar21 + (long)(int)uVar35);
        goto LAB_7103071ca4;
      }
      iVar9 = iVar4 + -1;
      if (uVar36 < 0x175ac2dcb1) {
        iVar33 = iVar4 + 1;
        iVar9 = iVar20;
      }
      iVar20 = iVar9;
    } while (iVar33 <= iVar20);
    lVar37 = 0;
  }
  else {
LAB_7103071c98:
    lVar37 = 0;
    pbVar40 = &DAT_7104742dbb;
  }
LAB_7103071ca4:
  if (*pbVar40 - 0xb < 2) {
    iVar20 = *(int *)(pbVar40 + 1);
  }
  else {
    iVar20 = 0;
  }
  uVar48 = (ulong)iVar20;
  pvVar43 = *(void **)(param_1 + 0x160);
  puVar27 = *(undefined8 **)(param_1 + 0x168);
  pppplVar42 = (long ****)((long)puVar27 - (long)pvVar43);
  uVar36 = (long)pppplVar42 >> 3;
  ppppbVar17 = ppppbVar47;
  if (uVar36 < uVar48) {
    uVar49 = uVar48 - uVar36;
    if ((ulong)(*(long *)(param_1 + 0x170) - (long)puVar27 >> 3) < uVar49) {
      if (iVar20 < 0) goto LAB_7103079628;
      lVar29 = *(long *)(param_1 + 0x170) - (long)pvVar43;
      if ((ulong)(lVar29 >> 3) < 0xfffffffffffffff) {
        uVar24 = lVar29 >> 2;
        uVar23 = uVar48;
        if (uVar48 <= uVar24) {
          uVar23 = uVar24;
        }
        if (uVar23 != 0) {
          if (uVar23 >> 0x3d != 0) goto LAB_7103079260;
          goto LAB_7103071d98;
        }
LAB_7103071dfc:
        pvVar46 = (void *)0x0;
      }
      else {
        uVar23 = 0x1fffffffffffffff;
LAB_7103071d98:
        ppplVar25 = (long ***)(uVar23 * 8);
        if (ppplVar25 == (long ***)0x0) {
          ppplVar25 = (long ***)0x1;
        }
        pvVar46 = (void *)FUN_710392e290(0x10,ppplVar25,(long ****)puVar11,ppppbVar14,param_5,
                                         ppppbVar47,param_7,param_8);
        if (pvVar46 == (void *)0x0) {
          if (DAT_7105332f00 != (long *)0x0) {
            local_84 = 0;
            pppplVar44 = &local_90;
            local_90 = ppplVar25;
            uVar24 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_84);
            if (((uVar24 & 1) != 0) &&
               (pvVar46 = (void *)FUN_710392e290(0x10,ppplVar25,pppplVar44,ppppbVar14,param_5,
                                                 ppppbVar17,param_7,param_8), pvVar46 != (void *)0x0
               )) goto LAB_7103071e00;
          }
          goto LAB_7103071dfc;
        }
      }
LAB_7103071e00:
      puVar11 = (uint *)(uVar49 * 8);
      memset((void *)((long)pvVar46 + uVar36 * 8),0,(size_t)puVar11);
      if (0 < (long)pppplVar42) {
        memcpy(pvVar46,pvVar43,(size_t)pppplVar42);
        puVar11 = (uint *)pppplVar42;
      }
      *(void **)(param_1 + 0x160) = pvVar46;
      *(void **)(param_1 + 0x168) = (void *)((long)pvVar46 + uVar48 * 8);
      *(void **)(param_1 + 0x170) = (void *)((long)pvVar46 + uVar23 * 8);
      if (pvVar43 != (void *)0x0) {
        FUN_710392eb40((ulong)pvVar43);
      }
    }
    else {
      uVar36 = uVar49;
      if ((uVar49 & 1) != 0) {
        *puVar27 = 0;
        puVar27 = (undefined8 *)(*(long *)(param_1 + 0x168) + 8);
        uVar36 = uVar49 - 1;
        *(undefined8 **)(param_1 + 0x168) = puVar27;
      }
      if (uVar49 != 1) {
        do {
          *puVar27 = 0;
          lVar29 = *(long *)(param_1 + 0x168);
          *(long *)(param_1 + 0x168) = lVar29 + 8;
          *(undefined8 *)(lVar29 + 8) = 0;
          puVar27 = (undefined8 *)(*(long *)(param_1 + 0x168) + 8);
          uVar36 = uVar36 - 2;
          *(undefined8 **)(param_1 + 0x168) = puVar27;
        } while (uVar36 != 0);
      }
    }
  }
  else if (uVar36 != uVar48) {
    *(void **)(param_1 + 0x168) = (void *)((long)pvVar43 + uVar48 * 8);
  }
  uVar35 = (uint)*pbVar40;
  if ((*pbVar40 - 0xb < 2) && (0 < *(int *)(pbVar40 + 1))) {
    lVar29 = 0;
LAB_7103071eac:
    do {
      iVar20 = (int)lVar29;
      if (iVar20 < 0) {
LAB_7103071ee4:
        lVar22 = 0;
        pbVar38 = &DAT_7104742dbb;
      }
      else {
        pbVar38 = &DAT_7104742dbb;
        lVar22 = 0;
        if (uVar35 == 0xb) {
          if (*(int *)(pbVar40 + 1) <= iVar20) goto LAB_7103071ee4;
          pbVar38 = pbVar40 + *(int *)(pbVar40 + (long)iVar20 * 4 + 5);
          lVar22 = lVar37;
        }
      }
      pbVar41 = &DAT_7104742dbb;
      if ((*pbVar38 == 0xc) && (iVar20 = *(int *)(pbVar38 + 1) + -1, 0 < *(int *)(pbVar38 + 1))) {
        iVar33 = 0;
        do {
          iVar4 = iVar20 + iVar33;
          if (iVar4 < 0) {
            iVar4 = iVar4 + 1;
          }
          iVar4 = iVar4 >> 1;
          puVar15 = (uint *)(*(long *)(lVar22 + 0x28) + (long)*(int *)(pbVar38 + 5) +
                            (long)iVar4 * 8);
          puVar11 = *(uint **)(*(long *)(lVar22 + 0x20) + (ulong)*puVar15 * 8);
          if ((long ****)puVar11 == (long ****)0x7e908d411) {
            uVar35 = puVar15[1];
            if (-1 < (int)uVar35) {
              pbVar41 = pbVar38 + (int)uVar35;
            }
            break;
          }
          iVar9 = iVar4 + -1;
          if (puVar11 < (long ****)0x7e908d412) {
            iVar33 = iVar4 + 1;
            iVar9 = iVar20;
          }
          iVar20 = iVar9;
        } while (iVar33 <= iVar20);
      }
      uVar50 = 0x42b40000;
      if (*pbVar41 == 8) {
        uVar50 = *(undefined4 *)(pbVar41 + 1);
      }
      *(undefined4 *)(*(long *)(param_1 + 0x160) + lVar29 * 8) = uVar50;
      pbVar41 = &DAT_7104742dbb;
      if ((*pbVar38 == 0xc) && (iVar20 = *(int *)(pbVar38 + 1) + -1, 0 < *(int *)(pbVar38 + 1))) {
        iVar33 = 0;
        do {
          iVar4 = iVar20 + iVar33;
          if (iVar4 < 0) {
            iVar4 = iVar4 + 1;
          }
          iVar4 = iVar4 >> 1;
          puVar15 = (uint *)(*(long *)(lVar22 + 0x28) + (long)*(int *)(pbVar38 + 5) +
                            (long)iVar4 * 8);
          uVar36 = *(ulong *)(*(long *)(lVar22 + 0x20) + (ulong)*puVar15 * 8);
          if (uVar36 == 0x1037fba423) {
            uVar35 = puVar15[1];
            if (-1 < (int)uVar35) {
              pbVar41 = pbVar38 + (int)uVar35;
            }
            break;
          }
          iVar9 = iVar4 + -1;
          if (uVar36 < 0x1037fba424) {
            iVar33 = iVar4 + 1;
            iVar9 = iVar20;
          }
          iVar20 = iVar9;
        } while (iVar33 <= iVar20);
      }
      uVar50 = 0;
      if (*pbVar41 == 8) {
        uVar50 = *(undefined4 *)(pbVar41 + 1);
      }
      lVar22 = lVar29 * 8;
      lVar29 = lVar29 + 1;
      *(undefined4 *)(*(long *)(param_1 + 0x160) + lVar22 + 4) = uVar50;
      uVar35 = (uint)*pbVar40;
      if (uVar35 - 0xb < 2) {
        if (*(int *)(pbVar40 + 1) <= lVar29) break;
        goto LAB_7103071eac;
      }
    } while (lVar29 < 0);
  }
  pppbVar21 = *ppppbVar47;
  if ((*(char *)pppbVar21 == '\f') &&
     (iVar20 = *(int *)((long)pppbVar21 + 1) + -1, 0 < *(int *)((long)pppbVar21 + 1))) {
    iVar33 = 0;
    pcVar28 = "";
    do {
      iVar4 = iVar20 + iVar33;
      if (iVar4 < 0) {
        iVar4 = iVar4 + 1;
      }
      iVar4 = iVar4 >> 1;
      puVar15 = (uint *)(*(long *)(*param_2 + 0x28) + (long)*(int *)((long)pppbVar21 + 5) +
                        (long)iVar4 * 8);
      uVar36 = *(ulong *)(*(long *)(*param_2 + 0x20) + (ulong)*puVar15 * 8);
      if (uVar36 == 0x16ec3b7304) {
        uVar35 = puVar15[1];
        if ((int)uVar35 < 0) goto LAB_71030720f4;
        pcVar28 = (char *)((long)pppbVar21 + (long)(int)uVar35);
        break;
      }
      iVar9 = iVar4 + -1;
      if (uVar36 < 0x16ec3b7305) {
        iVar33 = iVar4 + 1;
        iVar9 = iVar20;
      }
      iVar20 = iVar9;
    } while (iVar33 <= iVar20);
  }
  else {
LAB_71030720f4:
    pcVar28 = "";
  }
  switch(*pcVar28) {
  case '\x01':
  case '\x03':
    uVar35 = (uint)(byte)pcVar28[1];
    break;
  case '\x02':
    uVar35 = (uint)pcVar28[1];
    break;
  case '\x04':
    uVar35 = (uint)*(short *)(pcVar28 + 1);
    break;
  case '\x05':
    uVar35 = (uint)*(ushort *)(pcVar28 + 1);
    break;
  case '\x06':
  case '\a':
    uVar35 = *(uint *)(pcVar28 + 1);
    break;
  default:
    uVar35 = 1;
  }
  *(uint *)(param_1 + 0x178) = uVar35;
  pppbVar21 = *ppppbVar47;
  if ((*(char *)pppbVar21 == '\f') &&
     (iVar20 = *(int *)((long)pppbVar21 + 1) + -1, 0 < *(int *)((long)pppbVar21 + 1))) {
    lVar37 = *param_2;
    iVar33 = 0;
    pbVar40 = &DAT_7104742dbb;
    do {
      iVar4 = iVar20 + iVar33;
      if (iVar4 < 0) {
        iVar4 = iVar4 + 1;
      }
      iVar4 = iVar4 >> 1;
      puVar15 = (uint *)(*(long *)(lVar37 + 0x28) + (long)*(int *)((long)pppbVar21 + 5) +
                        (long)iVar4 * 8);
      uVar36 = *(ulong *)(*(long *)(lVar37 + 0x20) + (ulong)*puVar15 * 8);
      if (uVar36 == 0x113c5c4c00) {
        uVar35 = puVar15[1];
        if ((int)uVar35 < 0) goto LAB_71030721ec;
        pbVar40 = (byte *)((long)pppbVar21 + (long)(int)uVar35);
        goto LAB_71030721f8;
      }
      iVar9 = iVar4 + -1;
      if (uVar36 < 0x113c5c4c01) {
        iVar33 = iVar4 + 1;
        iVar9 = iVar20;
      }
      iVar20 = iVar9;
    } while (iVar33 <= iVar20);
    lVar37 = 0;
  }
  else {
LAB_71030721ec:
    lVar37 = 0;
    pbVar40 = &DAT_7104742dbb;
  }
LAB_71030721f8:
  if (*pbVar40 - 0xb < 2) {
    iVar20 = *(int *)(pbVar40 + 1);
  }
  else {
    iVar20 = 0;
  }
  uVar48 = (ulong)iVar20;
  pvVar43 = *(void **)(param_1 + 0x180);
  puVar27 = *(undefined8 **)(param_1 + 0x188);
  pppplVar42 = (long ****)((long)puVar27 - (long)pvVar43);
  uVar36 = (long)pppplVar42 >> 5;
  plVar2 = (long *)(param_1 + 0x180);
  if (uVar36 < uVar48) {
    uVar49 = uVar48 - uVar36;
    if ((ulong)(*(long *)(param_1 + 400) - (long)puVar27 >> 5) < uVar49) {
      if (iVar20 < 0) goto LAB_7103079628;
      lVar29 = *(long *)(param_1 + 400) - (long)pvVar43;
      if ((ulong)(lVar29 >> 5) < 0x3ffffffffffffff) {
        uVar24 = lVar29 >> 4;
        uVar23 = uVar48;
        if (uVar48 <= uVar24) {
          uVar23 = uVar24;
        }
        if (uVar23 != 0) {
          if (uVar23 >> 0x3b != 0) goto LAB_7103079260;
          goto LAB_71030722fc;
        }
        pvVar46 = (void *)0x0;
      }
      else {
        uVar23 = 0x7ffffffffffffff;
LAB_71030722fc:
        ppplVar25 = (long ***)(uVar23 * 0x20);
        if (ppplVar25 == (long ***)0x0) {
          ppplVar25 = (long ***)0x1;
        }
        pvVar46 = (void *)FUN_710392e290(0x10,ppplVar25,(long ****)puVar11,ppppbVar14,param_5,
                                         ppppbVar17,param_7,param_8);
        if (pvVar46 == (void *)0x0) {
          if (DAT_7105332f00 != (long *)0x0) {
            local_84 = 0;
            pppplVar44 = &local_90;
            local_90 = ppplVar25;
            uVar24 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_84);
            if (((uVar24 & 1) != 0) &&
               (pvVar46 = (void *)FUN_710392e290(0x10,ppplVar25,pppplVar44,ppppbVar14,param_5,
                                                 ppppbVar17,param_7,param_8), pvVar46 != (void *)0x0
               )) goto LAB_7103072364;
          }
          pvVar46 = (void *)0x0;
        }
      }
LAB_7103072364:
      puVar11 = (uint *)(uVar49 * 0x20);
      memset((void *)((long)pvVar46 + uVar36 * 0x20),0,(size_t)puVar11);
      if (0 < (long)pppplVar42) {
        memcpy(pvVar46,pvVar43,(size_t)pppplVar42);
        puVar11 = (uint *)pppplVar42;
      }
      *(void **)(param_1 + 0x180) = pvVar46;
      *(void **)(param_1 + 0x188) = (void *)((long)pvVar46 + uVar48 * 0x20);
      *(void **)(param_1 + 400) = (void *)((long)pvVar46 + uVar23 * 0x20);
      if (pvVar43 != (void *)0x0) {
        FUN_710392eb40((ulong)pvVar43);
      }
    }
    else {
      uVar36 = uVar49;
      if ((uVar49 & 1) != 0) {
        puVar27[2] = 0;
        puVar27[3] = 0;
        uVar36 = uVar49 - 1;
        *puVar27 = 0;
        puVar27[1] = 0;
        puVar27 = (undefined8 *)(*(long *)(param_1 + 0x188) + 0x20);
        *(undefined8 **)(param_1 + 0x188) = puVar27;
      }
      if (uVar49 != 1) {
        do {
          puVar27[2] = 0;
          puVar27[3] = 0;
          uVar36 = uVar36 - 2;
          *puVar27 = 0;
          puVar27[1] = 0;
          lVar29 = *(long *)(param_1 + 0x188);
          *(long *)(param_1 + 0x188) = lVar29 + 0x20;
          *(undefined8 *)(lVar29 + 0x30) = 0;
          *(undefined8 *)(lVar29 + 0x38) = 0;
          *(undefined8 *)(lVar29 + 0x20) = 0;
          *(undefined8 *)(lVar29 + 0x28) = 0;
          puVar27 = (undefined8 *)(*(long *)(param_1 + 0x188) + 0x20);
          *(undefined8 **)(param_1 + 0x188) = puVar27;
        } while (uVar36 != 0);
      }
    }
  }
  else if (uVar36 != uVar48) {
    *(void **)(param_1 + 0x188) = (void *)((long)pvVar43 + uVar48 * 0x20);
  }
  uVar35 = (uint)*pbVar40;
  if ((*pbVar40 - 0xb < 2) && (0 < *(int *)(pbVar40 + 1))) {
    lVar29 = 0;
LAB_7103072434:
    do {
      iVar20 = (int)lVar29;
      if (iVar20 < 0) {
LAB_710307246c:
        lVar22 = 0;
        pbVar38 = &DAT_7104742dbb;
      }
      else {
        pbVar38 = &DAT_7104742dbb;
        lVar22 = 0;
        if (uVar35 == 0xb) {
          if (*(int *)(pbVar40 + 1) <= iVar20) goto LAB_710307246c;
          pbVar38 = pbVar40 + *(int *)(pbVar40 + (long)iVar20 * 4 + 5);
          lVar22 = lVar37;
        }
      }
      pbVar41 = &DAT_7104742dbb;
      if ((*pbVar38 == 0xc) && (uVar35 = *(int *)(pbVar38 + 1) - 1, 0 < *(int *)(pbVar38 + 1))) {
        iVar20 = 0;
        ppppbVar14 = (byte ****)(*(long *)(lVar22 + 0x28) + (long)*(int *)(pbVar38 + 5));
        do {
          iVar33 = uVar35 + iVar20;
          if (iVar33 < 0) {
            iVar33 = iVar33 + 1;
          }
          uVar18 = iVar33 >> 1;
          param_5 = (long ****)(ulong)uVar18;
          ppppbVar17 = ppppbVar14 + (int)uVar18;
          param_7 = *(uint **)(*(long *)(lVar22 + 0x20) + (ulong)*(uint *)ppppbVar17 * 8);
          if ((long ****)param_7 == (long ****)0xbc0ad263c) {
            if (-1 < (int)*(uint *)((long)ppppbVar17 + 4)) {
              pbVar41 = pbVar38 + (int)*(uint *)((long)ppppbVar17 + 4);
            }
            break;
          }
          ppppbVar17 = (byte ****)(ulong)(uVar18 - 1);
          uVar5 = uVar18 - 1;
          if (param_7 < (long ****)0xbc0ad263d) {
            iVar20 = uVar18 + 1;
            uVar5 = uVar35;
          }
          uVar35 = uVar5;
        } while (iVar20 <= (int)uVar35);
      }
      uVar50 = 0x431b0000;
      if (*pbVar41 == 8) {
        uVar50 = *(undefined4 *)(pbVar41 + 1);
      }
      *(undefined4 *)(*plVar2 + lVar29 * 0x20) = uVar50;
      if ((*pbVar38 == 0xc) && (uVar35 = *(int *)(pbVar38 + 1) - 1, 0 < *(int *)(pbVar38 + 1))) {
        iVar20 = 0;
        ppppbVar14 = (byte ****)(*(long *)(lVar22 + 0x28) + (long)*(int *)(pbVar38 + 5));
        do {
          iVar33 = uVar35 + iVar20;
          if (iVar33 < 0) {
            iVar33 = iVar33 + 1;
          }
          uVar18 = iVar33 >> 1;
          param_5 = (long ****)(ulong)uVar18;
          ppppbVar17 = ppppbVar14 + (int)uVar18;
          param_7 = *(uint **)(*(long *)(lVar22 + 0x20) + (ulong)*(uint *)ppppbVar17 * 8);
          if ((long ****)param_7 == (long ****)0x166d704896) {
            if (-1 < (int)*(uint *)((long)ppppbVar17 + 4)) {
              pbVar41 = pbVar38 + (int)*(uint *)((long)ppppbVar17 + 4);
              lVar30 = lVar22;
              goto LAB_7103072594;
            }
            break;
          }
          ppppbVar17 = (byte ****)(ulong)(uVar18 - 1);
          uVar5 = uVar18 - 1;
          if (param_7 < (long ****)0x166d704897) {
            iVar20 = uVar18 + 1;
            uVar5 = uVar35;
          }
          uVar35 = uVar5;
        } while (iVar20 <= (int)uVar35);
      }
      lVar30 = 0;
      pbVar41 = &DAT_7104742dbb;
LAB_7103072594:
      puVar11 = (uint *)(ulong)*pbVar41;
      if (*pbVar41 == 9) {
        uVar16 = *(undefined8 *)(*(long *)(lVar30 + 0x20) + (long)*(int *)(pbVar41 + 1) * 8);
      }
      else {
        uVar16 = 0;
      }
      *(undefined8 *)(*plVar2 + lVar29 * 0x20 + 8) = uVar16;
      pbVar41 = &DAT_7104742dbb;
      if ((*pbVar38 == 0xc) && (uVar35 = *(int *)(pbVar38 + 1) - 1, 0 < *(int *)(pbVar38 + 1))) {
        puVar11 = *(uint **)(lVar22 + 0x20);
        iVar20 = 0;
        ppppbVar14 = (byte ****)(*(long *)(lVar22 + 0x28) + (long)*(int *)(pbVar38 + 5));
        do {
          iVar33 = uVar35 + iVar20;
          if (iVar33 < 0) {
            iVar33 = iVar33 + 1;
          }
          uVar18 = iVar33 >> 1;
          param_5 = (long ****)(ulong)uVar18;
          ppppbVar17 = ppppbVar14 + (int)uVar18;
          param_7 = *(uint **)((long)puVar11 + (ulong)*(uint *)ppppbVar17 * 8);
          if ((long ****)param_7 == (long ****)0x11abf1862c) {
            if (-1 < (int)*(uint *)((long)ppppbVar17 + 4)) {
              pbVar41 = pbVar38 + (int)*(uint *)((long)ppppbVar17 + 4);
            }
            break;
          }
          ppppbVar17 = (byte ****)(ulong)(uVar18 - 1);
          uVar5 = uVar18 - 1;
          if (param_7 < (long ****)0x11abf1862d) {
            iVar20 = uVar18 + 1;
            uVar5 = uVar35;
          }
          uVar35 = uVar5;
        } while (iVar20 <= (int)uVar35);
      }
      switch(*pbVar41) {
      case 1:
      case 3:
        uVar35 = (uint)pbVar41[1];
        break;
      case 2:
        uVar35 = (uint)(char)pbVar41[1];
        break;
      case 4:
        uVar35 = (uint)*(short *)(pbVar41 + 1);
        break;
      case 5:
        uVar35 = (uint)*(ushort *)(pbVar41 + 1);
        break;
      case 6:
      case 7:
        uVar35 = *(uint *)(pbVar41 + 1);
        break;
      default:
        uVar35 = 0;
      }
      *(uint *)(*plVar2 + lVar29 * 0x20 + 0x10) = uVar35;
      pbVar41 = &DAT_7104742dbb;
      if ((*pbVar38 == 0xc) && (uVar35 = *(int *)(pbVar38 + 1) - 1, 0 < *(int *)(pbVar38 + 1))) {
        puVar11 = *(uint **)(lVar22 + 0x20);
        iVar20 = 0;
        ppppbVar14 = (byte ****)(*(long *)(lVar22 + 0x28) + (long)*(int *)(pbVar38 + 5));
        do {
          iVar33 = uVar35 + iVar20;
          if (iVar33 < 0) {
            iVar33 = iVar33 + 1;
          }
          uVar18 = iVar33 >> 1;
          param_5 = (long ****)(ulong)uVar18;
          ppppbVar17 = ppppbVar14 + (int)uVar18;
          param_7 = *(uint **)((long)puVar11 + (ulong)*(uint *)ppppbVar17 * 8);
          if ((long ****)param_7 == (long ****)0x10c7bc9f76) {
            if (-1 < (int)*(uint *)((long)ppppbVar17 + 4)) {
              pbVar41 = pbVar38 + (int)*(uint *)((long)ppppbVar17 + 4);
            }
            break;
          }
          ppppbVar17 = (byte ****)(ulong)(uVar18 - 1);
          uVar5 = uVar18 - 1;
          if (param_7 < (long ****)0x10c7bc9f77) {
            iVar20 = uVar18 + 1;
            uVar5 = uVar35;
          }
          uVar35 = uVar5;
        } while (iVar20 <= (int)uVar35);
      }
      switch(*pbVar41) {
      case 1:
      case 3:
        uVar35 = (uint)pbVar41[1];
        break;
      case 2:
        uVar35 = (uint)(char)pbVar41[1];
        break;
      case 4:
        uVar35 = (uint)*(short *)(pbVar41 + 1);
        break;
      case 5:
        uVar35 = (uint)*(ushort *)(pbVar41 + 1);
        break;
      case 6:
      case 7:
        uVar35 = *(uint *)(pbVar41 + 1);
        break;
      default:
        uVar35 = 0;
      }
      *(uint *)(*plVar2 + lVar29 * 0x20 + 0x14) = uVar35;
      pbVar41 = &DAT_7104742dbb;
      if ((*pbVar38 == 0xc) && (uVar35 = *(int *)(pbVar38 + 1) - 1, 0 < *(int *)(pbVar38 + 1))) {
        puVar11 = *(uint **)(lVar22 + 0x20);
        iVar20 = 0;
        do {
          iVar33 = uVar35 + iVar20;
          if (iVar33 < 0) {
            iVar33 = iVar33 + 1;
          }
          uVar18 = iVar33 >> 1;
          ppppbVar14 = (byte ****)(ulong)uVar18;
          param_5 = (long ****)
                    (*(long *)(lVar22 + 0x28) + (long)*(int *)(pbVar38 + 5) + (long)(int)uVar18 * 8)
          ;
          ppppbVar17 = *(byte *****)((long)puVar11 + (ulong)*(uint *)param_5 * 8);
          if (ppppbVar17 == (byte ****)0x12cd592a00) {
            if (-1 < (int)*(uint *)((long)param_5 + 4)) {
              pbVar41 = pbVar38 + (int)*(uint *)((long)param_5 + 4);
            }
            break;
          }
          param_5 = (long ****)(ulong)(uVar18 - 1);
          uVar5 = uVar18 - 1;
          if (ppppbVar17 < (byte ****)0x12cd592a01) {
            iVar20 = uVar18 + 1;
            uVar5 = uVar35;
          }
          uVar35 = uVar5;
        } while (iVar20 <= (int)uVar35);
      }
      uVar50 = 0x41f00000;
      if (*pbVar41 == 8) {
        uVar50 = *(undefined4 *)(pbVar41 + 1);
      }
      lVar22 = lVar29 * 0x20;
      lVar29 = lVar29 + 1;
      *(undefined4 *)(*plVar2 + lVar22 + 0x18) = uVar50;
      uVar35 = (uint)*pbVar40;
      if (uVar35 - 0xb < 2) {
        if (*(int *)(pbVar40 + 1) <= lVar29) break;
        goto LAB_7103072434;
      }
    } while (lVar29 < 0);
  }
  pppbVar21 = *ppppbVar47;
  if ((*(char *)pppbVar21 == '\f') &&
     (iVar20 = *(int *)((long)pppbVar21 + 1) + -1, 0 < *(int *)((long)pppbVar21 + 1))) {
    lVar37 = *param_2;
    iVar33 = 0;
    pbVar40 = &DAT_7104742dbb;
    do {
      iVar4 = iVar20 + iVar33;
      if (iVar4 < 0) {
        iVar4 = iVar4 + 1;
      }
      iVar4 = iVar4 >> 1;
      puVar15 = (uint *)(*(long *)(lVar37 + 0x28) + (long)*(int *)((long)pppbVar21 + 5) +
                        (long)iVar4 * 8);
      uVar36 = *(ulong *)(*(long *)(lVar37 + 0x20) + (ulong)*puVar15 * 8);
      if (uVar36 == 0x111871021f) {
        uVar35 = puVar15[1];
        if ((int)uVar35 < 0) goto LAB_71030728d8;
        pbVar40 = (byte *)((long)pppbVar21 + (long)(int)uVar35);
        goto LAB_71030728e4;
      }
      iVar9 = iVar4 + -1;
      if (uVar36 < 0x1118710220) {
        iVar33 = iVar4 + 1;
        iVar9 = iVar20;
      }
      iVar20 = iVar9;
    } while (iVar33 <= iVar20);
    lVar37 = 0;
  }
  else {
LAB_71030728d8:
    lVar37 = 0;
    pbVar40 = &DAT_7104742dbb;
  }
LAB_71030728e4:
  if (*pbVar40 - 0xb < 2) {
    iVar20 = *(int *)(pbVar40 + 1);
  }
  else {
    iVar20 = 0;
  }
  uVar36 = (ulong)iVar20;
  pvVar43 = *(void **)(param_1 + 0x198);
  puVar27 = *(undefined8 **)(param_1 + 0x1a0);
  pppplVar42 = (long ****)((long)puVar27 - (long)pvVar43);
  uVar48 = (long)pppplVar42 >> 5;
  plVar2 = (long *)(param_1 + 0x198);
  if (uVar48 < uVar36) {
    uVar49 = uVar36 - uVar48;
    if ((ulong)(*(long *)(param_1 + 0x1a8) - (long)puVar27 >> 5) < uVar49) {
      if (iVar20 < 0) goto LAB_7103079628;
      lVar29 = *(long *)(param_1 + 0x1a8) - (long)pvVar43;
      if ((ulong)(lVar29 >> 5) < 0x3ffffffffffffff) {
        uVar24 = lVar29 >> 4;
        uVar23 = uVar36;
        if (uVar36 <= uVar24) {
          uVar23 = uVar24;
        }
        if (uVar23 != 0) {
          if (uVar23 >> 0x3b != 0) goto LAB_7103079260;
          goto LAB_71030729e4;
        }
LAB_7103072a44:
        pvVar46 = (void *)0x0;
      }
      else {
        uVar23 = 0x7ffffffffffffff;
LAB_71030729e4:
        ppplVar25 = (long ***)(uVar23 * 0x20);
        if (ppplVar25 == (long ***)0x0) {
          ppplVar25 = (long ***)0x1;
        }
        pvVar46 = (void *)FUN_710392e290(0x10,ppplVar25,(long ****)puVar11,ppppbVar14,param_5,
                                         ppppbVar17,param_7,param_8);
        if (pvVar46 == (void *)0x0) {
          if (DAT_7105332f00 != (long *)0x0) {
            local_84 = 0;
            pppplVar44 = &local_90;
            local_90 = ppplVar25;
            uVar24 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_84);
            if (((uVar24 & 1) != 0) &&
               (pvVar46 = (void *)FUN_710392e290(0x10,ppplVar25,pppplVar44,ppppbVar14,param_5,
                                                 ppppbVar17,param_7,param_8), pvVar46 != (void *)0x0
               )) goto LAB_7103072a48;
          }
          goto LAB_7103072a44;
        }
      }
LAB_7103072a48:
      puVar11 = (uint *)(uVar49 * 0x20);
      memset((void *)((long)pvVar46 + uVar48 * 0x20),0,(size_t)puVar11);
      if (0 < (long)pppplVar42) {
        memcpy(pvVar46,pvVar43,(size_t)pppplVar42);
        puVar11 = (uint *)pppplVar42;
      }
      *(void **)(param_1 + 0x198) = pvVar46;
      *(void **)(param_1 + 0x1a0) = (void *)((long)pvVar46 + uVar36 * 0x20);
      *(void **)(param_1 + 0x1a8) = (void *)((long)pvVar46 + uVar23 * 0x20);
      if (pvVar43 != (void *)0x0) {
        FUN_710392eb40((ulong)pvVar43);
      }
    }
    else {
      uVar36 = uVar49;
      if ((uVar49 & 1) != 0) {
        puVar27[2] = 0;
        puVar27[3] = 0;
        uVar36 = uVar49 - 1;
        *puVar27 = 0;
        puVar27[1] = 0;
        puVar27 = (undefined8 *)(*(long *)(param_1 + 0x1a0) + 0x20);
        *(undefined8 **)(param_1 + 0x1a0) = puVar27;
      }
      if (uVar49 != 1) {
        do {
          puVar27[2] = 0;
          puVar27[3] = 0;
          uVar36 = uVar36 - 2;
          *puVar27 = 0;
          puVar27[1] = 0;
          lVar29 = *(long *)(param_1 + 0x1a0);
          *(long *)(param_1 + 0x1a0) = lVar29 + 0x20;
          *(undefined8 *)(lVar29 + 0x30) = 0;
          *(undefined8 *)(lVar29 + 0x38) = 0;
          *(undefined8 *)(lVar29 + 0x20) = 0;
          *(undefined8 *)(lVar29 + 0x28) = 0;
          puVar27 = (undefined8 *)(*(long *)(param_1 + 0x1a0) + 0x20);
          *(undefined8 **)(param_1 + 0x1a0) = puVar27;
        } while (uVar36 != 0);
      }
    }
  }
  else if (uVar48 != uVar36) {
    *(void **)(param_1 + 0x1a0) = (void *)((long)pvVar43 + uVar36 * 0x20);
  }
  puVar15 = (uint *)(ulong)*pbVar40;
  if ((*pbVar40 - 0xb < 2) && (0 < *(int *)(pbVar40 + 1))) {
    uVar50 = 0;
    lVar29 = 0;
    puVar11 = &switchD_7103072c2c::switchdataD_71045261c8;
LAB_7103072b58:
    do {
      iVar20 = (int)lVar29;
      if (iVar20 < 0) {
LAB_7103072b90:
        lVar22 = 0;
        ppppbVar14 = (byte ****)&DAT_7104742dbb;
      }
      else {
        ppppbVar14 = (byte ****)&DAT_7104742dbb;
        lVar22 = 0;
        if ((int)puVar15 == 0xb) {
          if (*(int *)(pbVar40 + 1) <= iVar20) goto LAB_7103072b90;
          ppppbVar14 = (byte ****)(pbVar40 + *(int *)(pbVar40 + (long)iVar20 * 4 + 5));
          lVar22 = lVar37;
        }
      }
      ppppbVar17 = (byte ****)&DAT_7104742dbb;
      if ((*(char *)ppppbVar14 == '\f') &&
         (iVar20 = *(int *)((long)ppppbVar14 + 1) + -1, 0 < *(int *)((long)ppppbVar14 + 1))) {
        iVar33 = 0;
        do {
          iVar4 = iVar20 + iVar33;
          if (iVar4 < 0) {
            iVar4 = iVar4 + 1;
          }
          iVar4 = iVar4 >> 1;
          puVar15 = (uint *)(*(long *)(lVar22 + 0x28) + (long)*(int *)((long)ppppbVar14 + 5) +
                            (long)iVar4 * 8);
          uVar36 = *(ulong *)(*(long *)(lVar22 + 0x20) + (ulong)*puVar15 * 8);
          if (uVar36 == 0x905b0eb58) {
            uVar35 = puVar15[1];
            if (-1 < (int)uVar35) {
              ppppbVar17 = (byte ****)((long)ppppbVar14 + (long)(int)uVar35);
            }
            break;
          }
          iVar9 = iVar4 + -1;
          if (uVar36 < 0x905b0eb59) {
            iVar33 = iVar4 + 1;
            iVar9 = iVar20;
          }
          iVar20 = iVar9;
        } while (iVar33 <= iVar20);
      }
      switch(*(undefined1 *)ppppbVar17) {
      case 1:
      case 3:
        uVar35 = (uint)*(byte *)((long)ppppbVar17 + 1);
        break;
      case 2:
        uVar35 = (uint)*(char *)((long)ppppbVar17 + 1);
        break;
      case 4:
        uVar35 = (uint)*(short *)((long)ppppbVar17 + 1);
        break;
      case 5:
        uVar35 = (uint)*(ushort *)((long)ppppbVar17 + 1);
        break;
      case 6:
      case 7:
        uVar35 = *(uint *)((long)ppppbVar17 + 1);
        break;
      default:
        uVar35 = 0;
      }
      param_8 = (byte ****)(lVar29 * 0x20);
      *(bool *)(*plVar2 + (long)param_8) = uVar35 != 0;
      ppppbVar17 = (byte ****)&DAT_7104742dbb;
      if ((*(char *)ppppbVar14 == '\f') &&
         (iVar20 = *(int *)((long)ppppbVar14 + 1) + -1, 0 < *(int *)((long)ppppbVar14 + 1))) {
        param_8 = *(byte *****)(lVar22 + 0x20);
        iVar33 = 0;
        do {
          iVar4 = iVar20 + iVar33;
          if (iVar4 < 0) {
            iVar4 = iVar4 + 1;
          }
          iVar4 = iVar4 >> 1;
          puVar15 = (uint *)(*(long *)(lVar22 + 0x28) + (long)*(int *)((long)ppppbVar14 + 5) +
                            (long)iVar4 * 8);
          if (param_8[*puVar15] == (byte ***)0xd8e0980ea) {
            uVar35 = puVar15[1];
            if (-1 < (int)uVar35) {
              ppppbVar17 = (byte ****)((long)ppppbVar14 + (long)(int)uVar35);
            }
            break;
          }
          iVar9 = iVar4 + -1;
          if (param_8[*puVar15] < (byte ***)0xd8e0980eb) {
            iVar33 = iVar4 + 1;
            iVar9 = iVar20;
          }
          iVar20 = iVar9;
        } while (iVar33 <= iVar20);
      }
      switch(*(undefined1 *)ppppbVar17) {
      case 1:
      case 3:
        uVar35 = (uint)*(byte *)((long)ppppbVar17 + 1);
        break;
      case 2:
        uVar35 = (uint)*(char *)((long)ppppbVar17 + 1);
        break;
      case 4:
        uVar35 = (uint)*(short *)((long)ppppbVar17 + 1);
        break;
      case 5:
        uVar35 = (uint)*(ushort *)((long)ppppbVar17 + 1);
        break;
      case 6:
      case 7:
        uVar35 = *(uint *)((long)ppppbVar17 + 1);
        break;
      default:
        uVar35 = 1;
      }
      *(bool *)(*plVar2 + lVar29 * 0x20 + 1) = uVar35 != 0;
      ppppbVar17 = (byte ****)&DAT_7104742dbb;
      if ((*(char *)ppppbVar14 == '\f') &&
         (iVar20 = *(int *)((long)ppppbVar14 + 1) + -1, 0 < *(int *)((long)ppppbVar14 + 1))) {
        param_8 = *(byte *****)(lVar22 + 0x20);
        iVar33 = 0;
        do {
          iVar4 = iVar20 + iVar33;
          if (iVar4 < 0) {
            iVar4 = iVar4 + 1;
          }
          iVar4 = iVar4 >> 1;
          puVar15 = (uint *)(*(long *)(lVar22 + 0x28) + (long)*(int *)((long)ppppbVar14 + 5) +
                            (long)iVar4 * 8);
          if (param_8[*puVar15] == (byte ***)0x18cdc1683) {
            uVar35 = puVar15[1];
            if (-1 < (int)uVar35) {
              ppppbVar17 = (byte ****)((long)ppppbVar14 + (long)(int)uVar35);
            }
            break;
          }
          iVar9 = iVar4 + -1;
          if (param_8[*puVar15] < (byte ***)0x18cdc1684) {
            iVar33 = iVar4 + 1;
            iVar9 = iVar20;
          }
          iVar20 = iVar9;
        } while (iVar33 <= iVar20);
      }
      uVar52 = 0x42400000;
      if (*(char *)ppppbVar17 == '\b') {
        uVar52 = *(undefined4 *)((long)ppppbVar17 + 1);
      }
      *(undefined4 *)(*plVar2 + lVar29 * 0x20 + 4) = uVar52;
      ppppbVar17 = (byte ****)&DAT_7104742dbb;
      if ((*(char *)ppppbVar14 == '\f') &&
         (iVar20 = *(int *)((long)ppppbVar14 + 1) + -1, 0 < *(int *)((long)ppppbVar14 + 1))) {
        param_8 = *(byte *****)(lVar22 + 0x20);
        iVar33 = 0;
        do {
          iVar4 = iVar20 + iVar33;
          if (iVar4 < 0) {
            iVar4 = iVar4 + 1;
          }
          iVar4 = iVar4 >> 1;
          puVar15 = (uint *)(*(long *)(lVar22 + 0x28) + (long)*(int *)((long)ppppbVar14 + 5) +
                            (long)iVar4 * 8);
          if (param_8[*puVar15] == (byte ***)0x1fbdb2615) {
            uVar35 = puVar15[1];
            if (-1 < (int)uVar35) {
              ppppbVar17 = (byte ****)((long)ppppbVar14 + (long)(int)uVar35);
            }
            break;
          }
          iVar9 = iVar4 + -1;
          if (param_8[*puVar15] < (byte ***)0x1fbdb2616) {
            iVar33 = iVar4 + 1;
            iVar9 = iVar20;
          }
          iVar20 = iVar9;
        } while (iVar33 <= iVar20);
      }
      uVar52 = 0xbf800000;
      if (*(char *)ppppbVar17 == '\b') {
        uVar52 = *(undefined4 *)((long)ppppbVar17 + 1);
      }
      *(undefined4 *)(*plVar2 + lVar29 * 0x20 + 8) = uVar52;
      ppppbVar17 = (byte ****)&DAT_7104742dbb;
      if ((*(char *)ppppbVar14 == '\f') &&
         (iVar20 = *(int *)((long)ppppbVar14 + 1) + -1, 0 < *(int *)((long)ppppbVar14 + 1))) {
        param_8 = *(byte *****)(lVar22 + 0x20);
        iVar33 = 0;
        do {
          iVar4 = iVar20 + iVar33;
          if (iVar4 < 0) {
            iVar4 = iVar4 + 1;
          }
          iVar4 = iVar4 >> 1;
          puVar15 = (uint *)(*(long *)(lVar22 + 0x28) + (long)*(int *)((long)ppppbVar14 + 5) +
                            (long)iVar4 * 8);
          if (param_8[*puVar15] == (byte ***)0x8d8ad1dd1) {
            uVar35 = puVar15[1];
            if (-1 < (int)uVar35) {
              ppppbVar17 = (byte ****)((long)ppppbVar14 + (long)(int)uVar35);
            }
            break;
          }
          iVar9 = iVar4 + -1;
          if (param_8[*puVar15] < (byte ***)0x8d8ad1dd2) {
            iVar33 = iVar4 + 1;
            iVar9 = iVar20;
          }
          iVar20 = iVar9;
        } while (iVar33 <= iVar20);
      }
      uVar52 = uVar50;
      if (*(char *)ppppbVar17 == '\b') {
        uVar52 = *(undefined4 *)((long)ppppbVar17 + 1);
      }
      *(undefined4 *)(*plVar2 + lVar29 * 0x20 + 0xc) = uVar52;
      ppppbVar17 = (byte ****)&DAT_7104742dbb;
      if ((*(char *)ppppbVar14 == '\f') &&
         (iVar20 = *(int *)((long)ppppbVar14 + 1) + -1, 0 < *(int *)((long)ppppbVar14 + 1))) {
        param_8 = *(byte *****)(lVar22 + 0x20);
        iVar33 = 0;
        do {
          iVar4 = iVar20 + iVar33;
          if (iVar4 < 0) {
            iVar4 = iVar4 + 1;
          }
          iVar4 = iVar4 >> 1;
          puVar15 = (uint *)(*(long *)(lVar22 + 0x28) + (long)*(int *)((long)ppppbVar14 + 5) +
                            (long)iVar4 * 8);
          if (param_8[*puVar15] == (byte ***)0x8afaa2d47) {
            uVar35 = puVar15[1];
            if (-1 < (int)uVar35) {
              ppppbVar17 = (byte ****)((long)ppppbVar14 + (long)(int)uVar35);
            }
            break;
          }
          iVar9 = iVar4 + -1;
          if (param_8[*puVar15] < (byte ***)0x8afaa2d48) {
            iVar33 = iVar4 + 1;
            iVar9 = iVar20;
          }
          iVar20 = iVar9;
        } while (iVar33 <= iVar20);
      }
      uVar52 = uVar50;
      if (*(char *)ppppbVar17 == '\b') {
        uVar52 = *(undefined4 *)((long)ppppbVar17 + 1);
      }
      *(undefined4 *)(*plVar2 + lVar29 * 0x20 + 0x10) = uVar52;
      ppppbVar17 = (byte ****)&DAT_7104742dbb;
      if ((*(char *)ppppbVar14 == '\f') &&
         (iVar20 = *(int *)((long)ppppbVar14 + 1) + -1, 0 < *(int *)((long)ppppbVar14 + 1))) {
        param_8 = *(byte *****)(lVar22 + 0x20);
        iVar33 = 0;
        do {
          iVar4 = iVar20 + iVar33;
          if (iVar4 < 0) {
            iVar4 = iVar4 + 1;
          }
          iVar4 = iVar4 >> 1;
          puVar15 = (uint *)(*(long *)(lVar22 + 0x28) + (long)*(int *)((long)ppppbVar14 + 5) +
                            (long)iVar4 * 8);
          if (param_8[*puVar15] == (byte ***)0x63b7c6e5a) {
            uVar35 = puVar15[1];
            if (-1 < (int)uVar35) {
              ppppbVar17 = (byte ****)((long)ppppbVar14 + (long)(int)uVar35);
            }
            break;
          }
          iVar9 = iVar4 + -1;
          if (param_8[*puVar15] < (byte ***)0x63b7c6e5b) {
            iVar33 = iVar4 + 1;
            iVar9 = iVar20;
          }
          iVar20 = iVar9;
        } while (iVar33 <= iVar20);
      }
      uVar52 = 0x40a00000;
      if (*(char *)ppppbVar17 == '\b') {
        uVar52 = *(undefined4 *)((long)ppppbVar17 + 1);
      }
      *(undefined4 *)(*plVar2 + lVar29 * 0x20 + 0x14) = uVar52;
      ppppbVar17 = (byte ****)&DAT_7104742dbb;
      if ((*(char *)ppppbVar14 == '\f') &&
         (iVar20 = *(int *)((long)ppppbVar14 + 1) + -1, 0 < *(int *)((long)ppppbVar14 + 1))) {
        param_8 = *(byte *****)(lVar22 + 0x20);
        iVar33 = 0;
        do {
          iVar4 = iVar20 + iVar33;
          if (iVar4 < 0) {
            iVar4 = iVar4 + 1;
          }
          iVar4 = iVar4 >> 1;
          puVar15 = (uint *)(*(long *)(lVar22 + 0x28) + (long)*(int *)((long)ppppbVar14 + 5) +
                            (long)iVar4 * 8);
          if (param_8[*puVar15] == (byte ***)0x6017d9eb2) {
            uVar35 = puVar15[1];
            if (-1 < (int)uVar35) {
              ppppbVar17 = (byte ****)((long)ppppbVar14 + (long)(int)uVar35);
            }
            break;
          }
          iVar9 = iVar4 + -1;
          if (param_8[*puVar15] < (byte ***)0x6017d9eb3) {
            iVar33 = iVar4 + 1;
            iVar9 = iVar20;
          }
          iVar20 = iVar9;
        } while (iVar33 <= iVar20);
      }
      param_7 = (uint *)(ulong)*(byte *)ppppbVar17;
      uVar52 = 0x40a00000;
      if (*(byte *)ppppbVar17 == 8) {
        uVar52 = *(undefined4 *)((long)ppppbVar17 + 1);
      }
      *(undefined4 *)(*plVar2 + lVar29 * 0x20 + 0x18) = uVar52;
      ppppbVar17 = (byte ****)&DAT_7104742dbb;
      if ((*(char *)ppppbVar14 == '\f') &&
         (iVar20 = *(int *)((long)ppppbVar14 + 1) + -1, 0 < *(int *)((long)ppppbVar14 + 1))) {
        param_8 = *(byte *****)(lVar22 + 0x20);
        param_7 = (uint *)0x0;
        do {
          uVar35 = (uint)param_7;
          iVar33 = iVar20 + uVar35;
          if (iVar33 < 0) {
            iVar33 = iVar33 + 1;
          }
          iVar33 = iVar33 >> 1;
          puVar15 = (uint *)(*(long *)(lVar22 + 0x28) + (long)*(int *)((long)ppppbVar14 + 5) +
                            (long)iVar33 * 8);
          if (param_8[*puVar15] == (byte ***)0x5f87ebad2) {
            uVar35 = puVar15[1];
            if (-1 < (int)uVar35) {
              ppppbVar17 = (byte ****)((long)ppppbVar14 + (long)(int)uVar35);
            }
            break;
          }
          iVar4 = iVar33 + -1;
          if (param_8[*puVar15] < (byte ***)0x5f87ebad3) {
            uVar35 = iVar33 + 1;
            iVar4 = iVar20;
          }
          iVar20 = iVar4;
          param_7 = (uint *)(ulong)uVar35;
        } while ((int)uVar35 <= iVar20);
      }
      uVar52 = uVar50;
      if (*(char *)ppppbVar17 == '\b') {
        uVar52 = *(undefined4 *)((long)ppppbVar17 + 1);
      }
      lVar22 = lVar29 * 0x20;
      lVar29 = lVar29 + 1;
      *(undefined4 *)(*plVar2 + lVar22 + 0x1c) = uVar52;
      puVar15 = (uint *)(ulong)*pbVar40;
      if (*pbVar40 - 0xb < 2) {
        if (*(int *)(pbVar40 + 1) <= lVar29) break;
        goto LAB_7103072b58;
      }
    } while (lVar29 < 0);
  }
  pppbVar21 = *ppppbVar47;
  if ((*(char *)pppbVar21 == '\f') &&
     (iVar20 = *(int *)((long)pppbVar21 + 1) + -1, 0 < *(int *)((long)pppbVar21 + 1))) {
    local_b0 = *param_2;
    pppplVar42 = (long ****)&DAT_7104742dbb;
    iVar33 = 0;
    do {
      iVar4 = iVar20 + iVar33;
      if (iVar4 < 0) {
        iVar4 = iVar4 + 1;
      }
      iVar4 = iVar4 >> 1;
      puVar32 = (uint *)(*(long *)(local_b0 + 0x28) + (long)*(int *)((long)pppbVar21 + 5) +
                        (long)iVar4 * 8);
      uVar36 = *(ulong *)(*(long *)(local_b0 + 0x20) + (ulong)*puVar32 * 8);
      if (uVar36 == 0x102de02017) {
        uVar35 = puVar32[1];
        if ((int)uVar35 < 0) goto LAB_710307327c;
        pppplVar42 = (long ****)((long)pppbVar21 + (long)(int)uVar35);
        goto LAB_7103073288;
      }
      iVar9 = iVar4 + -1;
      if (uVar36 < 0x102de02018) {
        iVar33 = iVar4 + 1;
        iVar9 = iVar20;
      }
      iVar20 = iVar9;
    } while (iVar33 <= iVar20);
    local_b0 = 0;
  }
  else {
LAB_710307327c:
    local_b0 = 0;
    pppplVar42 = (long ****)&DAT_7104742dbb;
  }
LAB_7103073288:
  if (*(byte *)pppplVar42 - 0xb < 2) {
    iVar20 = *(int *)((long)pppplVar42 + 1);
  }
  else {
    iVar20 = 0;
  }
  uVar36 = (ulong)iVar20;
  pvVar43 = *(void **)(param_1 + 0x1b0);
  puVar27 = *(undefined8 **)(param_1 + 0x1b8);
  pppplVar44 = (long ****)((long)puVar27 - (long)pvVar43);
  lVar37 = (long)pppplVar44 >> 2;
  plVar2 = (long *)(param_1 + 0x1b0);
  if ((ulong)(lVar37 * -0x71c71c71c71c71c7) < uVar36) {
    uVar48 = uVar36 + lVar37 * 0x71c71c71c71c71c7;
    if ((ulong)((*(long *)(param_1 + 0x1c0) - (long)puVar27 >> 2) * -0x71c71c71c71c71c7) < uVar48) {
      if (iVar20 < 0) goto LAB_7103079628;
      lVar29 = *(long *)(param_1 + 0x1c0) - (long)pvVar43 >> 2;
      if ((ulong)(lVar29 * -0x71c71c71c71c71c7) < 0x38e38e38e38e38e) {
        uVar23 = lVar29 * 0x1c71c71c71c71c72;
        uVar49 = uVar36;
        if (uVar36 <= uVar23) {
          uVar49 = uVar23;
        }
        if (uVar49 != 0) goto LAB_71030733c4;
LAB_7103073428:
        lVar29 = 0;
      }
      else {
        uVar49 = 0x71c71c71c71c71c;
LAB_71030733c4:
        ppplVar25 = (long ***)(uVar49 * 0x24);
        if (ppplVar25 == (long ***)0x0) {
          ppplVar25 = (long ***)0x1;
        }
        pppplVar13 = pppplVar42;
        lVar29 = FUN_710392e290(0x10,ppplVar25,(long ****)puVar11,(byte ****)puVar15,pppplVar42,
                                ppppbVar17,param_7,param_8);
        if (lVar29 == 0) {
          if (DAT_7105332f00 != (long *)0x0) {
            local_84 = 0;
            pppplVar12 = &local_90;
            local_90 = ppplVar25;
            uVar23 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_84);
            if (((uVar23 & 1) != 0) &&
               (lVar29 = FUN_710392e290(0x10,ppplVar25,pppplVar12,(byte ****)puVar15,pppplVar13,
                                        ppppbVar17,param_7,param_8), lVar29 != 0))
            goto LAB_710307342c;
          }
          goto LAB_7103073428;
        }
      }
LAB_710307342c:
      pvVar46 = (void *)(lVar29 + lVar37 * 4);
      puVar11 = (uint *)(uVar48 * 0x24);
      memset(pvVar46,0,(size_t)puVar11);
      lVar37 = SUB168(SEXT816((long)pppplVar44) * SEXT816(-0xe38e38e38e38e39),8);
      pvVar46 = (void *)((long)pvVar46 + ((lVar37 >> 1) - (lVar37 >> 0x3f)) * 0x24);
      if (0 < (long)pppplVar44) {
        memcpy(pvVar46,pvVar43,(size_t)pppplVar44);
        puVar11 = (uint *)pppplVar44;
      }
      *(void **)(param_1 + 0x1b0) = pvVar46;
      *(ulong *)(param_1 + 0x1b8) = lVar29 + uVar36 * 0x24;
      *(ulong *)(param_1 + 0x1c0) = lVar29 + uVar49 * 0x24;
      if (pvVar43 != (void *)0x0) {
        FUN_710392eb40((ulong)pvVar43);
      }
    }
    else {
      uVar36 = uVar48;
      if ((uVar48 & 1) != 0) {
        *(undefined4 *)(puVar27 + 4) = 0;
        puVar27[2] = 0;
        puVar27[3] = 0;
        uVar36 = uVar48 - 1;
        *puVar27 = 0;
        puVar27[1] = 0;
        puVar27 = (undefined8 *)(*(long *)(param_1 + 0x1b8) + 0x24);
        *(undefined8 **)(param_1 + 0x1b8) = puVar27;
      }
      if (uVar48 != 1) {
        do {
          *(undefined4 *)(puVar27 + 4) = 0;
          puVar27[2] = 0;
          puVar27[3] = 0;
          uVar36 = uVar36 - 2;
          *puVar27 = 0;
          puVar27[1] = 0;
          lVar37 = *(long *)(param_1 + 0x1b8);
          *(long *)(param_1 + 0x1b8) = lVar37 + 0x24;
          *(undefined4 *)(lVar37 + 0x44) = 0;
          *(undefined8 *)(lVar37 + 0x3c) = 0;
          *(undefined8 *)(lVar37 + 0x34) = 0;
          *(undefined8 *)(lVar37 + 0x2c) = 0;
          *(undefined8 *)(lVar37 + 0x24) = 0;
          puVar27 = (undefined8 *)(*(long *)(param_1 + 0x1b8) + 0x24);
          *(undefined8 **)(param_1 + 0x1b8) = puVar27;
        } while (uVar36 != 0);
      }
    }
  }
  else if (lVar37 * -0x71c71c71c71c71c7 - uVar36 != 0) {
    *(void **)(param_1 + 0x1b8) = (void *)((long)pvVar43 + uVar36 * 0x24);
  }
  uVar35 = (uint)*(byte *)pppplVar42;
  if ((*(byte *)pppplVar42 - 0xb < 2) && (0 < *(int *)((long)pppplVar42 + 1))) {
    uVar50 = 0;
    lVar37 = 0;
    puVar11 = (uint *)&DAT_00000014;
    puVar15 = &switchD_7103073c28::switchdataD_7104526270;
    param_7 = &switchD_71030736dc::switchdataD_7104526200;
LAB_7103073568:
    do {
      iVar20 = (int)lVar37;
      if (iVar20 < 0) {
LAB_71030735a0:
        lVar29 = 0;
        pbVar40 = &DAT_7104742dbb;
      }
      else {
        lVar29 = 0;
        pbVar40 = &DAT_7104742dbb;
        if (uVar35 == 0xb) {
          if (*(int *)((long)pppplVar42 + 1) <= iVar20) goto LAB_71030735a0;
          pbVar40 = (byte *)((long)pppplVar42 +
                            (long)*(int *)((long)pppplVar42 + (long)iVar20 * 4 + 5));
          lVar29 = local_b0;
        }
      }
      pbVar38 = &DAT_7104742dbb;
      if ((*pbVar40 == 0xc) && (iVar20 = *(int *)(pbVar40 + 1) + -1, 0 < *(int *)(pbVar40 + 1))) {
        iVar33 = 0;
        do {
          iVar4 = iVar20 + iVar33;
          if (iVar4 < 0) {
            iVar4 = iVar4 + 1;
          }
          iVar4 = iVar4 >> 1;
          puVar32 = (uint *)(*(long *)(lVar29 + 0x28) + (long)*(int *)(pbVar40 + 5) +
                            (long)iVar4 * 8);
          uVar36 = *(ulong *)(*(long *)(lVar29 + 0x20) + (ulong)*puVar32 * 8);
          if (uVar36 == 0x61b6e485b) {
            uVar35 = puVar32[1];
            if (-1 < (int)uVar35) {
              pbVar38 = pbVar40 + (int)uVar35;
            }
            break;
          }
          iVar9 = iVar4 + -1;
          if (uVar36 < 0x61b6e485c) {
            iVar33 = iVar4 + 1;
            iVar9 = iVar20;
          }
          iVar20 = iVar9;
        } while (iVar33 <= iVar20);
      }
      uVar52 = uVar50;
      if (*pbVar38 == 8) {
        uVar52 = *(undefined4 *)(pbVar38 + 1);
      }
      *(undefined4 *)(*plVar2 + lVar37 * 0x24) = uVar52;
      pbVar38 = &DAT_7104742dbb;
      if ((*pbVar40 == 0xc) && (iVar20 = *(int *)(pbVar40 + 1) + -1, 0 < *(int *)(pbVar40 + 1))) {
        iVar33 = 0;
        do {
          iVar4 = iVar20 + iVar33;
          if (iVar4 < 0) {
            iVar4 = iVar4 + 1;
          }
          iVar4 = iVar4 >> 1;
          puVar32 = (uint *)(*(long *)(lVar29 + 0x28) + (long)*(int *)(pbVar40 + 5) +
                            (long)iVar4 * 8);
          uVar36 = *(ulong *)(*(long *)(lVar29 + 0x20) + (ulong)*puVar32 * 8);
          if (uVar36 == 0x50f345ac1) {
            uVar35 = puVar32[1];
            if (-1 < (int)uVar35) {
              pbVar38 = pbVar40 + (int)uVar35;
            }
            break;
          }
          iVar9 = iVar4 + -1;
          if (uVar36 < 0x50f345ac2) {
            iVar33 = iVar4 + 1;
            iVar9 = iVar20;
          }
          iVar20 = iVar9;
        } while (iVar33 <= iVar20);
      }
      switch(*pbVar38) {
      case 1:
      case 3:
        uVar35 = (uint)pbVar38[1];
        break;
      case 2:
        uVar35 = (uint)(char)pbVar38[1];
        break;
      case 4:
        uVar35 = (uint)*(short *)(pbVar38 + 1);
        break;
      case 5:
        uVar35 = (uint)*(ushort *)(pbVar38 + 1);
        break;
      case 6:
      case 7:
        uVar35 = *(uint *)(pbVar38 + 1);
        break;
      default:
        uVar35 = 0x46;
      }
      *(uint *)(*plVar2 + lVar37 * 0x24 + 4) = uVar35;
      pbVar38 = &DAT_7104742dbb;
      if ((*pbVar40 == 0xc) && (iVar20 = *(int *)(pbVar40 + 1) + -1, 0 < *(int *)(pbVar40 + 1))) {
        iVar33 = 0;
        do {
          iVar4 = iVar20 + iVar33;
          if (iVar4 < 0) {
            iVar4 = iVar4 + 1;
          }
          iVar4 = iVar4 >> 1;
          puVar32 = (uint *)(*(long *)(lVar29 + 0x28) + (long)*(int *)(pbVar40 + 5) +
                            (long)iVar4 * 8);
          uVar36 = *(ulong *)(*(long *)(lVar29 + 0x20) + (ulong)*puVar32 * 8);
          if (uVar36 == 0x570e5c534) {
            uVar35 = puVar32[1];
            if (-1 < (int)uVar35) {
              pbVar38 = pbVar40 + (int)uVar35;
            }
            break;
          }
          iVar9 = iVar4 + -1;
          if (uVar36 < 0x570e5c535) {
            iVar33 = iVar4 + 1;
            iVar9 = iVar20;
          }
          iVar20 = iVar9;
        } while (iVar33 <= iVar20);
      }
      uVar35 = 0x14;
      uVar18 = uVar35;
      switch(*pbVar38) {
      case 1:
      case 3:
        uVar18 = (uint)pbVar38[1];
        break;
      case 2:
        uVar18 = (int)(char)pbVar38[1];
        break;
      case 4:
        uVar18 = (int)*(short *)(pbVar38 + 1);
        break;
      case 5:
        uVar18 = (uint)*(ushort *)(pbVar38 + 1);
        break;
      case 6:
      case 7:
        uVar18 = *(uint *)(pbVar38 + 1);
      }
      *(uint *)(*plVar2 + lVar37 * 0x24 + 8) = uVar18;
      pbVar38 = &DAT_7104742dbb;
      if ((*pbVar40 == 0xc) && (iVar20 = *(int *)(pbVar40 + 1) + -1, 0 < *(int *)(pbVar40 + 1))) {
        iVar33 = 0;
        do {
          iVar4 = iVar20 + iVar33;
          if (iVar4 < 0) {
            iVar4 = iVar4 + 1;
          }
          iVar4 = iVar4 >> 1;
          puVar32 = (uint *)(*(long *)(lVar29 + 0x28) + (long)*(int *)(pbVar40 + 5) +
                            (long)iVar4 * 8);
          uVar36 = *(ulong *)(*(long *)(lVar29 + 0x20) + (ulong)*puVar32 * 8);
          if (uVar36 == 0x5d405f1b3) {
            uVar18 = puVar32[1];
            if (-1 < (int)uVar18) {
              pbVar38 = pbVar40 + (int)uVar18;
            }
            break;
          }
          iVar9 = iVar4 + -1;
          if (uVar36 < 0x5d405f1b4) {
            iVar33 = iVar4 + 1;
            iVar9 = iVar20;
          }
          iVar20 = iVar9;
        } while (iVar33 <= iVar20);
      }
      switch(*pbVar38) {
      case 1:
      case 3:
        uVar18 = (uint)pbVar38[1];
        break;
      case 2:
        uVar18 = (uint)(char)pbVar38[1];
        break;
      case 4:
        uVar18 = (uint)*(short *)(pbVar38 + 1);
        break;
      case 5:
        uVar18 = (uint)*(ushort *)(pbVar38 + 1);
        break;
      case 6:
      case 7:
        uVar18 = *(uint *)(pbVar38 + 1);
        break;
      default:
        uVar18 = 0x14;
      }
      *(uint *)(*plVar2 + lVar37 * 0x24 + 0xc) = uVar18;
      pbVar38 = &DAT_7104742dbb;
      if ((*pbVar40 == 0xc) && (iVar20 = *(int *)(pbVar40 + 1) + -1, 0 < *(int *)(pbVar40 + 1))) {
        iVar33 = 0;
        do {
          iVar4 = iVar20 + iVar33;
          if (iVar4 < 0) {
            iVar4 = iVar4 + 1;
          }
          iVar4 = iVar4 >> 1;
          puVar32 = (uint *)(*(long *)(lVar29 + 0x28) + (long)*(int *)(pbVar40 + 5) +
                            (long)iVar4 * 8);
          uVar36 = *(ulong *)(*(long *)(lVar29 + 0x20) + (ulong)*puVar32 * 8);
          if (uVar36 == 0xa381ad7fa) {
            uVar18 = puVar32[1];
            if (-1 < (int)uVar18) {
              pbVar38 = pbVar40 + (int)uVar18;
            }
            break;
          }
          iVar9 = iVar4 + -1;
          if (uVar36 < 0xa381ad7fb) {
            iVar33 = iVar4 + 1;
            iVar9 = iVar20;
          }
          iVar20 = iVar9;
        } while (iVar33 <= iVar20);
      }
      uVar52 = uVar50;
      if (*pbVar38 == 8) {
        uVar52 = *(undefined4 *)(pbVar38 + 1);
      }
      *(undefined4 *)(*plVar2 + lVar37 * 0x24 + 0x10) = uVar52;
      pbVar38 = &DAT_7104742dbb;
      if ((*pbVar40 == 0xc) && (iVar20 = *(int *)(pbVar40 + 1) + -1, 0 < *(int *)(pbVar40 + 1))) {
        iVar33 = 0;
        do {
          iVar4 = iVar20 + iVar33;
          if (iVar4 < 0) {
            iVar4 = iVar4 + 1;
          }
          iVar4 = iVar4 >> 1;
          puVar32 = (uint *)(*(long *)(lVar29 + 0x28) + (long)*(int *)(pbVar40 + 5) +
                            (long)iVar4 * 8);
          uVar36 = *(ulong *)(*(long *)(lVar29 + 0x20) + (ulong)*puVar32 * 8);
          if (uVar36 == 0xa3f786bac) {
            uVar18 = puVar32[1];
            if (-1 < (int)uVar18) {
              pbVar38 = pbVar40 + (int)uVar18;
            }
            break;
          }
          iVar9 = iVar4 + -1;
          if (uVar36 < 0xa3f786bad) {
            iVar33 = iVar4 + 1;
            iVar9 = iVar20;
          }
          iVar20 = iVar9;
        } while (iVar33 <= iVar20);
      }
      uVar52 = uVar50;
      if (*pbVar38 == 8) {
        uVar52 = *(undefined4 *)(pbVar38 + 1);
      }
      *(undefined4 *)(*plVar2 + lVar37 * 0x24 + 0x14) = uVar52;
      pbVar38 = &DAT_7104742dbb;
      if ((*pbVar40 == 0xc) && (iVar20 = *(int *)(pbVar40 + 1) + -1, 0 < *(int *)(pbVar40 + 1))) {
        iVar33 = 0;
        do {
          iVar4 = iVar20 + iVar33;
          if (iVar4 < 0) {
            iVar4 = iVar4 + 1;
          }
          iVar4 = iVar4 >> 1;
          puVar32 = (uint *)(*(long *)(lVar29 + 0x28) + (long)*(int *)(pbVar40 + 5) +
                            (long)iVar4 * 8);
          uVar36 = *(ulong *)(*(long *)(lVar29 + 0x20) + (ulong)*puVar32 * 8);
          if (uVar36 == 0x4fd3943f8) {
            uVar18 = puVar32[1];
            if (-1 < (int)uVar18) {
              pbVar38 = pbVar40 + (int)uVar18;
            }
            break;
          }
          iVar9 = iVar4 + -1;
          if (uVar36 < 0x4fd3943f9) {
            iVar33 = iVar4 + 1;
            iVar9 = iVar20;
          }
          iVar20 = iVar9;
        } while (iVar33 <= iVar20);
      }
      uVar52 = uVar50;
      if (*pbVar38 == 8) {
        uVar52 = *(undefined4 *)(pbVar38 + 1);
      }
      *(undefined4 *)(*plVar2 + lVar37 * 0x24 + 0x18) = uVar52;
      pbVar38 = &DAT_7104742dbb;
      if ((*pbVar40 == 0xc) && (iVar20 = *(int *)(pbVar40 + 1) + -1, 0 < *(int *)(pbVar40 + 1))) {
        iVar33 = 0;
        do {
          iVar4 = iVar20 + iVar33;
          if (iVar4 < 0) {
            iVar4 = iVar4 + 1;
          }
          iVar4 = iVar4 >> 1;
          puVar32 = (uint *)(*(long *)(lVar29 + 0x28) + (long)*(int *)(pbVar40 + 5) +
                            (long)iVar4 * 8);
          uVar36 = *(ulong *)(*(long *)(lVar29 + 0x20) + (ulong)*puVar32 * 8);
          if (uVar36 == 0x10f6d7f433) {
            uVar18 = puVar32[1];
            if (-1 < (int)uVar18) {
              pbVar38 = pbVar40 + (int)uVar18;
            }
            break;
          }
          iVar9 = iVar4 + -1;
          if (uVar36 < 0x10f6d7f434) {
            iVar33 = iVar4 + 1;
            iVar9 = iVar20;
          }
          iVar20 = iVar9;
        } while (iVar33 <= iVar20);
      }
      switch(*pbVar38) {
      case 1:
      case 3:
        param_8 = (byte ****)(ulong)pbVar38[1];
        break;
      case 2:
        param_8 = (byte ****)(long)(char)pbVar38[1];
        break;
      case 4:
        param_8 = (byte ****)(long)*(short *)(pbVar38 + 1);
        break;
      case 5:
        param_8 = (byte ****)(ulong)*(ushort *)(pbVar38 + 1);
        break;
      case 6:
      case 7:
        param_8 = (byte ****)(ulong)*(uint *)(pbVar38 + 1);
        break;
      default:
        param_8 = (byte ****)0x2;
      }
      *(int *)(*plVar2 + lVar37 * 0x24 + 0x1c) = (int)param_8;
      if ((*pbVar40 == 0xc) && (iVar20 = *(int *)(pbVar40 + 1) + -1, 0 < *(int *)(pbVar40 + 1))) {
        param_8 = *(byte *****)(lVar29 + 0x20);
        iVar33 = 0;
        do {
          iVar4 = iVar20 + iVar33;
          if (iVar4 < 0) {
            iVar4 = iVar4 + 1;
          }
          iVar4 = iVar4 >> 1;
          puVar32 = (uint *)(*(long *)(lVar29 + 0x28) + (long)*(int *)(pbVar40 + 5) +
                            (long)iVar4 * 8);
          if (param_8[*puVar32] == (byte ***)0x89ee54ab3) {
            uVar18 = puVar32[1];
            if (-1 < (int)uVar18) {
              pbVar40 = pbVar40 + (int)uVar18;
              goto LAB_7103073c08;
            }
            break;
          }
          iVar9 = iVar4 + -1;
          if (param_8[*puVar32] < (byte ***)0x89ee54ab4) {
            iVar33 = iVar4 + 1;
            iVar9 = iVar20;
          }
          iVar20 = iVar9;
        } while (iVar33 <= iVar20);
      }
      lVar29 = 0;
      pbVar40 = &DAT_7104742dbb;
LAB_7103073c08:
      ppppbVar17 = (byte ****)(ulong)*pbVar40;
      uVar18 = (uint)*pbVar40;
      if (uVar18 - 1 < 7) {
        switch(uVar18) {
        case 1:
        case 3:
          uVar35 = (uint)pbVar40[1];
          break;
        case 2:
          uVar35 = (uint)(char)pbVar40[1];
          break;
        case 4:
          uVar35 = (uint)*(short *)(pbVar40 + 1);
          break;
        case 5:
          uVar35 = (uint)*(ushort *)(pbVar40 + 1);
          break;
        case 6:
        case 7:
          uVar35 = *(uint *)(pbVar40 + 1);
          break;
        default:
          uVar35 = 0;
        }
        goto LAB_7103074f10;
      }
      if (uVar18 != 9) goto LAB_7103074f1c;
      ppppbVar17 = *(byte *****)(lVar29 + 0x20);
      uVar36 = (ulong)ppppbVar17[*(int *)(pbVar40 + 1)] & 0xffffffffff;
      if (uVar36 < 0x1da727dda7) {
        uVar35 = 0;
        if (uVar36 < 0x19ff3e1888) {
          if (uVar36 < 0x1612d7c227) {
            if (uVar36 < 0x147b8b6ff3) {
              if (0x1358f3c96a < uVar36) {
                if (uVar36 < 0x13a2fcf408) {
                  if (uVar36 != 0x1358f3c96b) {
                    uVar48 = 0x136a7c7544;
LAB_7103074de0:
                    if (uVar36 == uVar48) goto LAB_7103074f10;
                    goto LAB_7103074f1c;
                  }
                }
                else {
                  if (uVar36 == 0x13a2fcf408) goto LAB_7103074f0c;
                  if (uVar36 != 0x140b342854) {
                    uVar48 = 0x1454c267fe;
                    goto LAB_7103074de0;
                  }
                }
LAB_7103074ea8:
                uVar35 = 5;
                goto LAB_7103074f10;
              }
              if (uVar36 < 0x12464ef7c0) {
                if (uVar36 == 0x11c8f620e5) goto LAB_7103074f0c;
                if (uVar36 == 0x11cf9be4fc) goto LAB_7103074b34;
              }
              else {
                if (uVar36 == 0x12464ef7c0) goto LAB_7103074c60;
                if (uVar36 == 0x132ff4f9fd) goto LAB_7103074bf8;
              }
            }
            else if (uVar36 < 0x14e734bf1f) {
              if (uVar36 < 0x14aecd5a9d) {
                if (uVar36 == 0x147b8b6ff3) goto LAB_7103074d2c;
                if (uVar36 == 0x14976c2394) goto LAB_7103074f04;
              }
              else {
                if (uVar36 == 0x14aecd5a9d) {
LAB_7103074f04:
                  uVar35 = 1;
                  goto LAB_7103074f10;
                }
                if (uVar36 == 0x14d45c28b1) goto LAB_7103074bf8;
                if (uVar36 == 0x14d9ca6a0b) goto LAB_7103074c60;
              }
            }
            else if (uVar36 < 0x150750219c) {
              if (uVar36 == 0x14e734bf1f) goto LAB_7103074ea8;
              if (uVar36 == 0x15010dd11c) goto LAB_7103074f0c;
            }
            else {
              if (uVar36 == 0x150750219c) goto LAB_7103074c68;
              if (uVar36 == 0x154b6b24ab) {
LAB_7103074a4c:
                uVar35 = 8;
                goto LAB_7103074f10;
              }
              if (uVar36 == 0x15f087af49) goto LAB_7103074f04;
            }
          }
          else if (uVar36 < 0x189ef7c5e8) {
            if (uVar36 < 0x17f7d70436) {
              if (uVar36 < 0x1777723c78) {
                if (uVar36 == 0x1612d7c227) goto LAB_7103074f10;
                if (uVar36 == 0x1762df116c) goto LAB_7103074c60;
              }
              else {
                if (uVar36 == 0x1777723c78) goto LAB_7103074b04;
                if ((uVar36 == 0x1798a00332) || (uVar36 == 0x17dbf9c79b)) goto LAB_7103074f0c;
              }
            }
            else if (uVar36 < 0x185be87ea0) {
              if (uVar36 == 0x17f7d70436) goto LAB_7103074bf8;
              if (uVar36 == 0x1854e3a50a) goto LAB_7103074ea8;
            }
            else {
              if (uVar36 == 0x185be87ea0) goto LAB_7103074f98;
              if (uVar36 == 0x187d4dadf0) goto LAB_7103074ea8;
              if (uVar36 == 0x187d583698) goto LAB_7103074d2c;
            }
          }
          else if (uVar36 < 0x194d1c9a0a) {
            if (uVar36 < 0x18c8e98293) {
              if (uVar36 == 0x189ef7c5e8) goto LAB_7103074b34;
              if (uVar36 == 0x18bfe4afd4) goto LAB_7103074c60;
            }
            else {
              if (uVar36 == 0x18c8e98293) {
LAB_7103074c68:
                uVar35 = 0xe;
                goto LAB_7103074f10;
              }
              if (uVar36 == 0x1900a16150) goto LAB_7103074b6c;
              if (uVar36 == 0x1920ee5d2e) goto LAB_7103074bf8;
            }
          }
          else if (uVar36 < 0x19b54ed1b7) {
            if (uVar36 == 0x194d1c9a0a) goto LAB_7103074c68;
            if (uVar36 == 0x199e7bc742) goto LAB_7103074c60;
          }
          else {
            if (uVar36 == 0x19b54ed1b7) {
              uVar35 = 0x50;
              goto LAB_7103074f10;
            }
            if (uVar36 == 0x19d5c78f1a) goto LAB_7103074b34;
            if (uVar36 == 0x19d8701188) goto LAB_7103074a4c;
          }
        }
        else {
          if (0x1bef2975e7 < uVar36) {
            if (uVar36 < 0x1c89c9c2c5) {
              if (uVar36 < 0x1c2f7a650c) {
                if (uVar36 < 0x1c0ae27e24) {
                  if (uVar36 != 0x1bef2975e8) {
                    if (uVar36 == 0x1c013682e2) goto LAB_7103074fb0;
                    goto LAB_7103074f1c;
                  }
LAB_7103074e44:
                  uVar35 = 10;
                }
                else {
                  if (uVar36 == 0x1c0ae27e24) goto LAB_7103074b6c;
                  if (uVar36 == 0x1c0eb10be3) {
LAB_7103074bf8:
                    uVar35 = 7;
                  }
                  else {
                    if (uVar36 != 0x1c1ba64c99) goto LAB_7103074f1c;
                    uVar35 = 0x4c;
                  }
                }
              }
              else {
                if (uVar36 < 0x1c3e2d224e) {
                  if (uVar36 == 0x1c2f7a650c) goto LAB_7103074c00;
                  if (uVar36 == 0x1c3cd3e508) goto LAB_7103074bf8;
                  goto LAB_7103074f1c;
                }
                if (uVar36 != 0x1c3e2d224e) {
                  if (uVar36 == 0x1c4627fa8f) goto LAB_7103074f80;
                  uVar48 = 0x1c807afd3d;
                  goto LAB_7103074de0;
                }
LAB_7103074d2c:
                uVar35 = 9;
              }
            }
            else if (uVar36 < 0x1d0f3340a1) {
              if (uVar36 < 0x1cd91cdd73) {
                if (uVar36 == 0x1c89c9c2c5) goto LAB_7103074c60;
                if (uVar36 != 0x1cc22d24d3) goto LAB_7103074f1c;
LAB_7103074b34:
                uVar35 = 4;
              }
              else if (uVar36 == 0x1cd91cdd73) {
                uVar35 = 0x11;
              }
              else {
                if (uVar36 == 0x1ce0f1d8ec) goto LAB_7103074b34;
                if (uVar36 != 0x1cf08c9a53) goto LAB_7103074f1c;
                uVar35 = 0x80000001;
              }
            }
            else if (uVar36 < 0x1d6c35808e) {
              if (uVar36 != 0x1d0f3340a1) {
                if (uVar36 == 0x1d600d17ea) goto LAB_7103074cc8;
                goto LAB_7103074f1c;
              }
LAB_7103074fa0:
              uVar35 = 0xf;
            }
            else if (uVar36 == 0x1d6c35808e) {
LAB_7103074f88:
              uVar35 = 0xd;
            }
            else {
              if (uVar36 == 0x1d707084a0) goto LAB_7103074d5c;
              if (uVar36 != 0x1d7808e1ba) goto LAB_7103074f1c;
              uVar35 = 0x80000003;
            }
            goto LAB_7103074f10;
          }
          if (uVar36 < 0x1abf715127) {
            if (0x1a3cd9a171 < uVar36) {
              if (uVar36 < 0x1a5612f412) {
                if (uVar36 != 0x1a3cd9a172) {
                  if (uVar36 == 0x1a4035e5d8) goto LAB_7103074e44;
                  goto LAB_7103074f1c;
                }
LAB_7103074fb0:
                uVar35 = 6;
              }
              else if (uVar36 == 0x1a5612f412) {
LAB_7103074c60:
                uVar35 = 2;
              }
              else {
                if (uVar36 != 0x1a92090074) {
                  if (uVar36 == 0x1ab95511b5) goto LAB_7103074f88;
                  goto LAB_7103074f1c;
                }
                uVar35 = 0x4f;
              }
              goto LAB_7103074f10;
            }
            if (uVar36 < 0x1a130b6ef1) {
              if (uVar36 == 0x19ff3e1888) goto LAB_7103074f10;
              if (uVar36 == 0x1a042cd3ef) goto LAB_7103074ea8;
            }
            else {
              if (uVar36 == 0x1a130b6ef1) goto LAB_7103074d2c;
              if (uVar36 == 0x1a20c8c9a6) goto LAB_7103074c60;
            }
          }
          else {
            if (0x1b4d027a78 < uVar36) {
              if (uVar36 < 0x1bde8ff304) {
                if (uVar36 != 0x1b4d027a79) {
                  if (uVar36 == 0x1ba099f2b9) goto LAB_7103074f04;
                  goto LAB_7103074f1c;
                }
LAB_7103074f0c:
                uVar35 = 3;
              }
              else if (uVar36 == 0x1bde8ff304) {
LAB_7103074f90:
                uVar35 = 0x3f;
              }
              else {
                if (uVar36 != 0x1beac53520) {
                  if (uVar36 != 0x1bedba73cf) goto LAB_7103074f1c;
                  goto LAB_7103074f0c;
                }
                uVar35 = 0x23;
              }
              goto LAB_7103074f10;
            }
            if (uVar36 < 0x1ae13e9305) {
              if ((uVar36 == 0x1abf715127) || (uVar36 == 0x1ac4d90a73)) goto LAB_7103074f04;
            }
            else {
              if (uVar36 == 0x1ae13e9305) goto LAB_7103074fa8;
              if (uVar36 == 0x1afddcec06) goto LAB_7103074f0c;
              if (uVar36 == 0x1b19308703) goto LAB_7103074fa0;
            }
          }
        }
        goto LAB_7103074f1c;
      }
      if (uVar36 < 0x20fe9ed417) {
        if (0x1fbb4dec78 < uVar36) {
          if (uVar36 < 0x2039a52466) {
            if (uVar36 < 0x201090b53b) {
              if (uVar36 < 0x1ff3d0c1f7) {
                if (uVar36 == 0x1fbb4dec79) goto LAB_7103074c60;
                if (uVar36 == 0x1fd0532c69) goto LAB_7103074a4c;
                goto LAB_7103074f1c;
              }
              if (uVar36 == 0x1ff3d0c1f7) goto LAB_7103074f04;
              if (uVar36 == 0x1ffc091e01) {
                uVar35 = 0x21;
              }
              else {
                if (uVar36 != 0x2005388c3e) goto LAB_7103074f1c;
                uVar35 = 0x1d;
              }
            }
            else if (uVar36 < 0x201bbc3e12) {
              if (uVar36 == 0x201090b53b) {
                uVar35 = 0x3e;
              }
              else {
                if (uVar36 != 0x20146ba334) goto LAB_7103074f1c;
                uVar35 = 0x51;
              }
            }
            else if (uVar36 == 0x201bbc3e12) {
              uVar35 = 0x1e;
            }
            else if (uVar36 == 0x2028826d4b) {
              uVar35 = 0x12;
            }
            else {
              if (uVar36 != 0x2033aee21c) goto LAB_7103074f1c;
              uVar35 = 0x27;
            }
          }
          else if (uVar36 < 0x209bd8469e) {
            if (uVar36 < 0x203ee4966d) {
              if (uVar36 != 0x2039a52466) {
                if (uVar36 == 0x203cdb45fe) goto LAB_7103074b04;
                goto LAB_7103074f1c;
              }
LAB_7103074e14:
              uVar35 = 0x20;
            }
            else if (uVar36 == 0x203ee4966d) {
LAB_7103074fb8:
              uVar35 = 0x2b;
            }
            else {
              if (uVar36 != 0x2040e200b9) {
                if (uVar36 == 0x208999e481) goto LAB_7103074f90;
                goto LAB_7103074f1c;
              }
LAB_7103074b04:
              uVar35 = 0x1f;
            }
          }
          else if (uVar36 < 0x20d78fbbdb) {
            if (uVar36 == 0x209bd8469e) {
LAB_7103074f98:
              uVar35 = 0xc;
            }
            else {
              if (uVar36 != 0x20ab1af734) goto LAB_7103074f1c;
              uVar35 = 0x52;
            }
          }
          else if (uVar36 == 0x20d78fbbdb) {
            uVar35 = 0x55;
          }
          else if (uVar36 == 0x20dd065dc2) {
            uVar35 = 0x29;
          }
          else {
            if (uVar36 != 0x20ebe35d0c) goto LAB_7103074f1c;
            uVar35 = 0x30;
          }
          goto LAB_7103074f10;
        }
        if (uVar36 < 0x1e3be1c044) {
          if (0x1de5509805 < uVar36) {
            if (uVar36 < 0x1e1bc21503) {
              if (uVar36 != 0x1de5509806) {
                if (uVar36 == 0x1ded09afe3) goto LAB_7103074e14;
                goto LAB_7103074f1c;
              }
              uVar35 = 0x3c;
            }
            else if (uVar36 == 0x1e1bc21503) {
LAB_7103074f80:
              uVar35 = 0x3d;
            }
            else {
              if (uVar36 != 0x1e20ed33da) {
                if (uVar36 == 0x1e3ae8c9f9) goto LAB_7103074360;
                goto LAB_7103074f1c;
              }
              uVar35 = 0x2e;
            }
            goto LAB_7103074f10;
          }
          if (uVar36 < 0x1dc7d376a5) {
            if (uVar36 == 0x1da727dda7) goto LAB_710307493c;
            if (uVar36 == 0x1da8d32364) goto LAB_7103074c60;
          }
          else {
            if (uVar36 == 0x1dc7d376a5) {
              uVar35 = 0x4e;
              goto LAB_7103074f10;
            }
            if (uVar36 == 0x1dcafa394c) goto LAB_7103074b6c;
          }
        }
        else {
          if (uVar36 < 0x1f1d32e6fb) {
            if (uVar36 < 0x1e7e74ecf4) {
              if (uVar36 == 0x1e3be1c044) {
LAB_7103074fa8:
                uVar35 = 0x10;
              }
              else {
                if (uVar36 != 0x1e49c10ae0) goto LAB_7103074f1c;
LAB_7103074d5c:
                uVar35 = 0x22;
              }
            }
            else {
              if (uVar36 == 0x1e7e74ecf4) goto LAB_7103074f0c;
              if (uVar36 == 0x1eb513a4a5) {
                uVar35 = 0x3b;
              }
              else {
                if (uVar36 != 0x1eefe69e67) goto LAB_7103074f1c;
                uVar35 = 0x41;
              }
            }
            goto LAB_7103074f10;
          }
          if (uVar36 < 0x1f4550d37f) {
            if (uVar36 == 0x1f1d32e6fb) {
              uVar35 = 0x26;
              goto LAB_7103074f10;
            }
            if (uVar36 == 0x1f2d85f02b) goto LAB_7103074f04;
          }
          else {
            if (uVar36 == 0x1f4550d37f) goto LAB_7103074b04;
            if (uVar36 == 0x1f6cd6c486) goto LAB_7103074fb8;
            if (uVar36 == 0x1f7d633a35) goto LAB_7103074f10;
          }
        }
      }
      else {
        if (uVar36 < 0x24b92f2d22) {
          if (uVar36 < 0x230535683b) {
            if (uVar36 < 0x2216ca77c1) {
              if (uVar36 < 0x21333f7557) {
                if (uVar36 == 0x20fe9ed417) {
                  uVar35 = 0x40;
                }
                else {
                  if (uVar36 != 0x212020c2cb) goto LAB_7103074f1c;
                  uVar35 = 0x2c;
                }
              }
              else if (uVar36 == 0x21333f7557) {
                uVar35 = 0x15;
              }
              else {
                if (uVar36 != 0x21bba1c0ca) goto LAB_7103074f1c;
                uVar35 = 0x32;
              }
            }
            else if (uVar36 < 0x222bb85667) {
              if (uVar36 == 0x2216ca77c1) {
                uVar35 = 0x2d;
              }
              else {
                if (uVar36 != 0x222a600352) goto LAB_7103074f1c;
                uVar35 = 0x3a;
              }
            }
            else if (uVar36 == 0x222bb85667) {
LAB_7103074c00:
              uVar35 = 0x1c;
            }
            else {
              if (uVar36 != 0x227cfc8a95) {
                if (uVar36 == 0x22d66e8a25) goto LAB_7103074fc0;
                goto LAB_7103074f1c;
              }
              uVar35 = 0x4b;
            }
          }
          else if (uVar36 < 0x23a1359207) {
            if (uVar36 < 0x234f3bf32b) {
              if (uVar36 == 0x230535683b) {
                uVar35 = 0x44;
              }
              else {
                if (uVar36 != 0x23415d63a4) goto LAB_7103074f1c;
                uVar35 = 0x24;
              }
            }
            else if (uVar36 == 0x234f3bf32b) {
              uVar35 = 0x45;
            }
            else if (uVar36 == 0x23723258ad) {
              uVar35 = 0x43;
            }
            else {
              if (uVar36 != 0x2374dfc186) goto LAB_7103074f1c;
              uVar35 = 0x31;
            }
          }
          else if (uVar36 < 0x23d632a291) {
            if (uVar36 == 0x23a1359207) {
              uVar35 = 0x47;
            }
            else {
              if (uVar36 != 0x23a208a58c) goto LAB_7103074f1c;
              uVar35 = 0x4a;
            }
          }
          else if (uVar36 == 0x23d632a291) {
            uVar35 = 0x46;
          }
          else if (uVar36 == 0x23e1ea6f4c) {
LAB_7103074fc0:
            uVar35 = 0x37;
          }
          else {
            if (uVar36 != 0x23eb3b0917) goto LAB_7103074f1c;
            uVar35 = 0x42;
          }
        }
        else if (uVar36 < 0x25deca122a) {
          if (uVar36 < 0x2547e571c8) {
            if (uVar36 < 0x24d6eee396) {
              if (uVar36 == 0x24b92f2d22) {
                uVar35 = 0x25;
              }
              else {
                if (uVar36 != 0x24c5f41f55) goto LAB_7103074f1c;
                uVar35 = 0x80000000;
              }
            }
            else if (uVar36 == 0x24d6eee396) {
LAB_7103074360:
              uVar35 = 0x13;
            }
            else if (uVar36 == 0x251f64b361) {
              uVar35 = 0x53;
            }
            else {
              if (uVar36 != 0x25435e84a0) goto LAB_7103074f1c;
              uVar35 = 0x48;
            }
          }
          else if (uVar36 < 0x257e7b4b96) {
            if (uVar36 == 0x2547e571c8) {
              uVar35 = 0x2f;
            }
            else {
              if (uVar36 != 0x256b10096c) goto LAB_7103074f1c;
              uVar35 = 0x39;
            }
          }
          else if (uVar36 == 0x257e7b4b96) {
LAB_710307493c:
            uVar35 = 0x2a;
          }
          else if (uVar36 == 0x2585a6ffed) {
            uVar35 = 0x28;
          }
          else {
            if (uVar36 != 0x25da57d51a) goto LAB_7103074f1c;
            uVar35 = 0x49;
          }
        }
        else if (uVar36 < 0x27a107ee27) {
          if (uVar36 < 0x26540fe18d) {
            if (uVar36 == 0x25deca122a) {
LAB_7103074b6c:
              uVar35 = 0xb;
            }
            else {
              if (uVar36 != 0x262c49a549) goto LAB_7103074f1c;
              uVar35 = 0x36;
            }
          }
          else if (uVar36 == 0x26540fe18d) {
            uVar35 = 0x33;
          }
          else {
            if (uVar36 != 0x26d4d7e9ef) {
              if (uVar36 == 0x273be3703a) goto LAB_710307493c;
              goto LAB_7103074f1c;
            }
            uVar35 = 0x35;
          }
        }
        else if (uVar36 < 0x28136c1b0e) {
          if (uVar36 == 0x27a107ee27) {
            uVar35 = 0x34;
          }
          else {
            if (uVar36 != 0x27f9d546cd) goto LAB_7103074f1c;
            uVar35 = 0x38;
          }
        }
        else if (uVar36 == 0x28136c1b0e) {
LAB_7103074cc8:
          uVar35 = 0x17;
        }
        else {
          if (uVar36 != 0x2a3eef0b50) {
            if (uVar36 == 0x2ba3786d83) goto LAB_7103074c00;
            goto LAB_7103074f1c;
          }
          uVar35 = 0x54;
        }
LAB_7103074f10:
        *(uint *)(*plVar2 + lVar37 * 0x24 + 0x20) = uVar35;
      }
LAB_7103074f1c:
      uVar35 = (uint)*(byte *)pppplVar42;
      lVar37 = lVar37 + 1;
      if (uVar35 - 0xb < 2) {
        if (*(int *)((long)pppplVar42 + 1) <= lVar37) break;
        goto LAB_7103073568;
      }
    } while (lVar37 < 0);
  }
  pppbVar21 = *ppppbVar47;
  if ((*(char *)pppbVar21 == '\f') &&
     (iVar20 = *(int *)((long)pppbVar21 + 1) + -1, 0 < *(int *)((long)pppbVar21 + 1))) {
    iVar33 = 0;
    pcVar28 = "";
    do {
      iVar4 = iVar20 + iVar33;
      if (iVar4 < 0) {
        iVar4 = iVar4 + 1;
      }
      iVar4 = iVar4 >> 1;
      puVar32 = (uint *)(*(long *)(*param_2 + 0x28) + (long)*(int *)((long)pppbVar21 + 5) +
                        (long)iVar4 * 8);
      uVar36 = *(ulong *)(*(long *)(*param_2 + 0x20) + (ulong)*puVar32 * 8);
      if (uVar36 == 0x18efd42c91) {
        uVar35 = puVar32[1];
        if ((int)uVar35 < 0) goto LAB_710307515c;
        pcVar28 = (char *)((long)pppbVar21 + (long)(int)uVar35);
        break;
      }
      iVar9 = iVar4 + -1;
      if (uVar36 < 0x18efd42c92) {
        iVar33 = iVar4 + 1;
        iVar9 = iVar20;
      }
      iVar20 = iVar9;
    } while (iVar33 <= iVar20);
  }
  else {
LAB_710307515c:
    pcVar28 = "";
  }
  if (*pcVar28 == '\b') {
    uVar50 = *(undefined4 *)(pcVar28 + 1);
  }
  else {
    uVar50 = 0x440c0000;
  }
  *(undefined4 *)(param_1 + 0x1c8) = uVar50;
  pppbVar21 = *ppppbVar47;
  if ((*(char *)pppbVar21 == '\f') &&
     (iVar20 = *(int *)((long)pppbVar21 + 1) + -1, 0 < *(int *)((long)pppbVar21 + 1))) {
    lVar37 = *param_2;
    iVar33 = 0;
    pbVar40 = &DAT_7104742dbb;
    do {
      iVar4 = iVar20 + iVar33;
      if (iVar4 < 0) {
        iVar4 = iVar4 + 1;
      }
      iVar4 = iVar4 >> 1;
      puVar32 = (uint *)(*(long *)(lVar37 + 0x28) + (long)*(int *)((long)pppbVar21 + 5) +
                        (long)iVar4 * 8);
      uVar36 = *(ulong *)(*(long *)(lVar37 + 0x20) + (ulong)*puVar32 * 8);
      if (uVar36 == 0x1670497c20) {
        uVar35 = puVar32[1];
        if ((int)uVar35 < 0) goto LAB_7103075234;
        pbVar40 = (byte *)((long)pppbVar21 + (long)(int)uVar35);
        goto LAB_7103075240;
      }
      iVar9 = iVar4 + -1;
      if (uVar36 < 0x1670497c21) {
        iVar33 = iVar4 + 1;
        iVar9 = iVar20;
      }
      iVar20 = iVar9;
    } while (iVar33 <= iVar20);
    lVar37 = 0;
  }
  else {
LAB_7103075234:
    lVar37 = 0;
    pbVar40 = &DAT_7104742dbb;
  }
LAB_7103075240:
  if (*pbVar40 - 0xb < 2) {
    iVar20 = *(int *)(pbVar40 + 1);
  }
  else {
    iVar20 = 0;
  }
  uVar36 = (ulong)iVar20;
  pvVar43 = *(void **)(param_1 + 0x1d0);
  puVar27 = *(undefined8 **)(param_1 + 0x1d8);
  pppplVar44 = (long ****)((long)puVar27 - (long)pvVar43);
  uVar48 = (long)pppplVar44 >> 5;
  plVar2 = (long *)(param_1 + 0x1d0);
  if (uVar48 < uVar36) {
    uVar49 = uVar36 - uVar48;
    if ((ulong)(*(long *)(param_1 + 0x1e0) - (long)puVar27 >> 5) < uVar49) {
      if (iVar20 < 0) goto LAB_7103079628;
      lVar29 = *(long *)(param_1 + 0x1e0) - (long)pvVar43;
      if ((ulong)(lVar29 >> 5) < 0x3ffffffffffffff) {
        uVar24 = lVar29 >> 4;
        uVar23 = uVar36;
        if (uVar36 <= uVar24) {
          uVar23 = uVar24;
        }
        if (uVar23 != 0) {
          if (uVar23 >> 0x3b != 0) goto LAB_7103079260;
          goto LAB_710307533c;
        }
LAB_710307539c:
        pvVar46 = (void *)0x0;
      }
      else {
        uVar23 = 0x7ffffffffffffff;
LAB_710307533c:
        ppplVar25 = (long ***)(uVar23 * 0x20);
        if (ppplVar25 == (long ***)0x0) {
          ppplVar25 = (long ***)0x1;
        }
        pvVar46 = (void *)FUN_710392e290(0x10,ppplVar25,(long ****)puVar11,(byte ****)puVar15,
                                         pppplVar42,ppppbVar17,param_7,param_8);
        if (pvVar46 == (void *)0x0) {
          if (DAT_7105332f00 != (long *)0x0) {
            local_84 = 0;
            pppplVar13 = &local_90;
            local_90 = ppplVar25;
            uVar24 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_84);
            if (((uVar24 & 1) != 0) &&
               (pvVar46 = (void *)FUN_710392e290(0x10,ppplVar25,pppplVar13,(byte ****)puVar15,
                                                 pppplVar42,ppppbVar17,param_7,param_8),
               pvVar46 != (void *)0x0)) goto LAB_71030753a0;
          }
          goto LAB_710307539c;
        }
      }
LAB_71030753a0:
      puVar11 = (uint *)(uVar49 * 0x20);
      memset((void *)((long)pvVar46 + uVar48 * 0x20),0,(size_t)puVar11);
      if (0 < (long)pppplVar44) {
        memcpy(pvVar46,pvVar43,(size_t)pppplVar44);
        puVar11 = (uint *)pppplVar44;
      }
      *(void **)(param_1 + 0x1d0) = pvVar46;
      *(void **)(param_1 + 0x1d8) = (void *)((long)pvVar46 + uVar36 * 0x20);
      *(void **)(param_1 + 0x1e0) = (void *)((long)pvVar46 + uVar23 * 0x20);
      if (pvVar43 != (void *)0x0) {
        FUN_710392eb40((ulong)pvVar43);
      }
    }
    else {
      uVar36 = uVar49;
      if ((uVar49 & 1) != 0) {
        puVar27[2] = 0;
        puVar27[3] = 0;
        uVar36 = uVar49 - 1;
        *puVar27 = 0;
        puVar27[1] = 0;
        puVar27 = (undefined8 *)(*(long *)(param_1 + 0x1d8) + 0x20);
        *(undefined8 **)(param_1 + 0x1d8) = puVar27;
      }
      if (uVar49 != 1) {
        do {
          puVar27[2] = 0;
          puVar27[3] = 0;
          uVar36 = uVar36 - 2;
          *puVar27 = 0;
          puVar27[1] = 0;
          lVar29 = *(long *)(param_1 + 0x1d8);
          *(long *)(param_1 + 0x1d8) = lVar29 + 0x20;
          *(undefined8 *)(lVar29 + 0x30) = 0;
          *(undefined8 *)(lVar29 + 0x38) = 0;
          *(undefined8 *)(lVar29 + 0x20) = 0;
          *(undefined8 *)(lVar29 + 0x28) = 0;
          puVar27 = (undefined8 *)(*(long *)(param_1 + 0x1d8) + 0x20);
          *(undefined8 **)(param_1 + 0x1d8) = puVar27;
        } while (uVar36 != 0);
      }
    }
  }
  else if (uVar48 != uVar36) {
    *(void **)(param_1 + 0x1d8) = (void *)((long)pvVar43 + uVar36 * 0x20);
  }
  uVar35 = (uint)*pbVar40;
  if ((*pbVar40 - 0xb < 2) && (0 < *(int *)(pbVar40 + 1))) {
    lVar29 = 0;
LAB_71030754ac:
    do {
      iVar20 = (int)lVar29;
      if (iVar20 < 0) {
LAB_71030754e4:
        lVar22 = 0;
        pppplVar44 = (long ****)&DAT_7104742dbb;
      }
      else {
        pppplVar44 = (long ****)&DAT_7104742dbb;
        lVar22 = 0;
        if (uVar35 == 0xb) {
          if (*(int *)(pbVar40 + 1) <= iVar20) goto LAB_71030754e4;
          pppplVar44 = (long ****)(pbVar40 + *(int *)(pbVar40 + (long)iVar20 * 4 + 5));
          lVar22 = lVar37;
        }
      }
      pppplVar13 = (long ****)&DAT_7104742dbb;
      if ((*(byte *)pppplVar44 == 0xc) &&
         (uVar35 = *(int *)((long)pppplVar44 + 1) - 1, 0 < *(int *)((long)pppplVar44 + 1))) {
        pppplVar42 = *(long *****)(lVar22 + 0x20);
        iVar20 = 0;
        ppppbVar17 = (byte ****)(*(long *)(lVar22 + 0x28) + (long)*(int *)((long)pppplVar44 + 5));
        do {
          iVar33 = uVar35 + iVar20;
          if (iVar33 < 0) {
            iVar33 = iVar33 + 1;
          }
          uVar18 = iVar33 >> 1;
          param_7 = (uint *)(ulong)uVar18;
          param_8 = ppppbVar17 + (int)uVar18;
          uVar5 = *(uint *)param_8;
          if (pppplVar42[uVar5] == (long ***)0x569ff9e1b) {
            if (-1 < (int)*(uint *)((long)param_8 + 4)) {
              pppplVar13 = (long ****)((long)pppplVar44 + (long)(int)*(uint *)((long)param_8 + 4));
            }
            break;
          }
          param_8 = (byte ****)(ulong)(uVar18 - 1);
          uVar10 = uVar18 - 1;
          if (pppplVar42[uVar5] < (long ***)0x569ff9e1c) {
            iVar20 = uVar18 + 1;
            uVar10 = uVar35;
          }
          uVar35 = uVar10;
        } while (iVar20 <= (int)uVar35);
      }
      uVar50 = 0x40a00000;
      if (*(byte *)pppplVar13 == 8) {
        uVar50 = *(undefined4 *)((long)pppplVar13 + 1);
      }
      *(undefined4 *)(*plVar2 + lVar29 * 0x20) = uVar50;
      pppplVar13 = (long ****)&DAT_7104742dbb;
      if ((*(byte *)pppplVar44 == 0xc) &&
         (uVar35 = *(int *)((long)pppplVar44 + 1) - 1, 0 < *(int *)((long)pppplVar44 + 1))) {
        pppplVar42 = *(long *****)(lVar22 + 0x20);
        iVar20 = 0;
        ppppbVar17 = (byte ****)(*(long *)(lVar22 + 0x28) + (long)*(int *)((long)pppplVar44 + 5));
        do {
          iVar33 = uVar35 + iVar20;
          if (iVar33 < 0) {
            iVar33 = iVar33 + 1;
          }
          uVar18 = iVar33 >> 1;
          param_7 = (uint *)(ulong)uVar18;
          param_8 = ppppbVar17 + (int)uVar18;
          uVar5 = *(uint *)param_8;
          if (pppplVar42[uVar5] == (long ***)0x51ef8ae8d) {
            if (-1 < (int)*(uint *)((long)param_8 + 4)) {
              pppplVar13 = (long ****)((long)pppplVar44 + (long)(int)*(uint *)((long)param_8 + 4));
            }
            break;
          }
          param_8 = (byte ****)(ulong)(uVar18 - 1);
          uVar10 = uVar18 - 1;
          if (pppplVar42[uVar5] < (long ***)0x51ef8ae8e) {
            iVar20 = uVar18 + 1;
            uVar10 = uVar35;
          }
          uVar35 = uVar10;
        } while (iVar20 <= (int)uVar35);
      }
      uVar50 = 0x40a00000;
      if (*(byte *)pppplVar13 == 8) {
        uVar50 = *(undefined4 *)((long)pppplVar13 + 1);
      }
      *(undefined4 *)(*plVar2 + lVar29 * 0x20 + 4) = uVar50;
      pppplVar13 = (long ****)&DAT_7104742dbb;
      if ((*(byte *)pppplVar44 == 0xc) &&
         (uVar35 = *(int *)((long)pppplVar44 + 1) - 1, 0 < *(int *)((long)pppplVar44 + 1))) {
        pppplVar42 = *(long *****)(lVar22 + 0x20);
        iVar20 = 0;
        ppppbVar17 = (byte ****)(*(long *)(lVar22 + 0x28) + (long)*(int *)((long)pppplVar44 + 5));
        do {
          iVar33 = uVar35 + iVar20;
          if (iVar33 < 0) {
            iVar33 = iVar33 + 1;
          }
          uVar18 = iVar33 >> 1;
          param_7 = (uint *)(ulong)uVar18;
          param_8 = ppppbVar17 + (int)uVar18;
          uVar5 = *(uint *)param_8;
          if (pppplVar42[uVar5] == (long ***)0xb3cb1ef4e) {
            if (-1 < (int)*(uint *)((long)param_8 + 4)) {
              pppplVar13 = (long ****)((long)pppplVar44 + (long)(int)*(uint *)((long)param_8 + 4));
            }
            break;
          }
          param_8 = (byte ****)(ulong)(uVar18 - 1);
          uVar10 = uVar18 - 1;
          if (pppplVar42[uVar5] < (long ***)0xb3cb1ef4f) {
            iVar20 = uVar18 + 1;
            uVar10 = uVar35;
          }
          uVar35 = uVar10;
        } while (iVar20 <= (int)uVar35);
      }
      uVar50 = 0xc2700000;
      if (*(byte *)pppplVar13 == 8) {
        uVar50 = *(undefined4 *)((long)pppplVar13 + 1);
      }
      *(undefined4 *)(*plVar2 + lVar29 * 0x20 + 8) = uVar50;
      pppplVar13 = (long ****)&DAT_7104742dbb;
      if ((*(byte *)pppplVar44 == 0xc) &&
         (uVar35 = *(int *)((long)pppplVar44 + 1) - 1, 0 < *(int *)((long)pppplVar44 + 1))) {
        pppplVar42 = *(long *****)(lVar22 + 0x20);
        iVar20 = 0;
        ppppbVar17 = (byte ****)(*(long *)(lVar22 + 0x28) + (long)*(int *)((long)pppplVar44 + 5));
        do {
          iVar33 = uVar35 + iVar20;
          if (iVar33 < 0) {
            iVar33 = iVar33 + 1;
          }
          uVar18 = iVar33 >> 1;
          param_7 = (uint *)(ulong)uVar18;
          param_8 = ppppbVar17 + (int)uVar18;
          uVar5 = *(uint *)param_8;
          if (pppplVar42[uVar5] == (long ***)0xc59f2204b) {
            if (-1 < (int)*(uint *)((long)param_8 + 4)) {
              pppplVar13 = (long ****)((long)pppplVar44 + (long)(int)*(uint *)((long)param_8 + 4));
            }
            break;
          }
          param_8 = (byte ****)(ulong)(uVar18 - 1);
          uVar10 = uVar18 - 1;
          if (pppplVar42[uVar5] < (long ***)0xc59f2204c) {
            iVar20 = uVar18 + 1;
            uVar10 = uVar35;
          }
          uVar35 = uVar10;
        } while (iVar20 <= (int)uVar35);
      }
      uVar50 = 0x42700000;
      if (*(byte *)pppplVar13 == 8) {
        uVar50 = *(undefined4 *)((long)pppplVar13 + 1);
      }
      *(undefined4 *)(*plVar2 + lVar29 * 0x20 + 0xc) = uVar50;
      pppplVar13 = (long ****)&DAT_7104742dbb;
      if ((*(byte *)pppplVar44 == 0xc) &&
         (uVar35 = *(int *)((long)pppplVar44 + 1) - 1, 0 < *(int *)((long)pppplVar44 + 1))) {
        pppplVar42 = *(long *****)(lVar22 + 0x20);
        iVar20 = 0;
        ppppbVar17 = (byte ****)(*(long *)(lVar22 + 0x28) + (long)*(int *)((long)pppplVar44 + 5));
        do {
          iVar33 = uVar35 + iVar20;
          if (iVar33 < 0) {
            iVar33 = iVar33 + 1;
          }
          uVar18 = iVar33 >> 1;
          param_7 = (uint *)(ulong)uVar18;
          param_8 = ppppbVar17 + (int)uVar18;
          uVar5 = *(uint *)param_8;
          if (pppplVar42[uVar5] == (long ***)0x9cd38f189) {
            if (-1 < (int)*(uint *)((long)param_8 + 4)) {
              pppplVar13 = (long ****)((long)pppplVar44 + (long)(int)*(uint *)((long)param_8 + 4));
            }
            break;
          }
          param_8 = (byte ****)(ulong)(uVar18 - 1);
          uVar10 = uVar18 - 1;
          if (pppplVar42[uVar5] < (long ***)0x9cd38f18a) {
            iVar20 = uVar18 + 1;
            uVar10 = uVar35;
          }
          uVar35 = uVar10;
        } while (iVar20 <= (int)uVar35);
      }
      uVar50 = 0x41f00000;
      if (*(byte *)pppplVar13 == 8) {
        uVar50 = *(undefined4 *)((long)pppplVar13 + 1);
      }
      *(undefined4 *)(*plVar2 + lVar29 * 0x20 + 0x10) = uVar50;
      pppplVar13 = (long ****)&DAT_7104742dbb;
      if ((*(byte *)pppplVar44 == 0xc) &&
         (uVar35 = *(int *)((long)pppplVar44 + 1) - 1, 0 < *(int *)((long)pppplVar44 + 1))) {
        pppplVar42 = *(long *****)(lVar22 + 0x20);
        iVar20 = 0;
        ppppbVar17 = (byte ****)(*(long *)(lVar22 + 0x28) + (long)*(int *)((long)pppplVar44 + 5));
        do {
          iVar33 = uVar35 + iVar20;
          if (iVar33 < 0) {
            iVar33 = iVar33 + 1;
          }
          uVar18 = iVar33 >> 1;
          param_7 = (uint *)(ulong)uVar18;
          param_8 = ppppbVar17 + (int)uVar18;
          uVar5 = *(uint *)param_8;
          if (pppplVar42[uVar5] == (long ***)0xbc790e513) {
            if (-1 < (int)*(uint *)((long)param_8 + 4)) {
              pppplVar13 = (long ****)((long)pppplVar44 + (long)(int)*(uint *)((long)param_8 + 4));
            }
            break;
          }
          param_8 = (byte ****)(ulong)(uVar18 - 1);
          uVar10 = uVar18 - 1;
          if (pppplVar42[uVar5] < (long ***)0xbc790e514) {
            iVar20 = uVar18 + 1;
            uVar10 = uVar35;
          }
          uVar35 = uVar10;
        } while (iVar20 <= (int)uVar35);
      }
      uVar50 = 0xc1a00000;
      if (*(byte *)pppplVar13 == 8) {
        uVar50 = *(undefined4 *)((long)pppplVar13 + 1);
      }
      *(undefined4 *)(*plVar2 + lVar29 * 0x20 + 0x14) = uVar50;
      pppplVar13 = (long ****)&DAT_7104742dbb;
      if ((*(byte *)pppplVar44 == 0xc) &&
         (uVar35 = *(int *)((long)pppplVar44 + 1) - 1, 0 < *(int *)((long)pppplVar44 + 1))) {
        pppplVar42 = *(long *****)(lVar22 + 0x20);
        iVar20 = 0;
        ppppbVar17 = (byte ****)(*(long *)(lVar22 + 0x28) + (long)*(int *)((long)pppplVar44 + 5));
        do {
          iVar33 = uVar35 + iVar20;
          if (iVar33 < 0) {
            iVar33 = iVar33 + 1;
          }
          uVar18 = iVar33 >> 1;
          param_7 = (uint *)(ulong)uVar18;
          param_8 = ppppbVar17 + (int)uVar18;
          uVar5 = *(uint *)param_8;
          if (pppplVar42[uVar5] == (long ***)0xd05e8311a) {
            if (-1 < (int)*(uint *)((long)param_8 + 4)) {
              pppplVar13 = (long ****)((long)pppplVar44 + (long)(int)*(uint *)((long)param_8 + 4));
            }
            break;
          }
          param_8 = (byte ****)(ulong)(uVar18 - 1);
          uVar10 = uVar18 - 1;
          if (pppplVar42[uVar5] < (long ***)0xd05e8311b) {
            iVar20 = uVar18 + 1;
            uVar10 = uVar35;
          }
          uVar35 = uVar10;
        } while (iVar20 <= (int)uVar35);
      }
      puVar15 = (uint *)(ulong)*(byte *)pppplVar13;
      uVar50 = 0x42b40000;
      if (*(byte *)pppplVar13 == 8) {
        uVar50 = *(undefined4 *)((long)pppplVar13 + 1);
      }
      *(undefined4 *)(*plVar2 + lVar29 * 0x20 + 0x18) = uVar50;
      puVar11 = (uint *)&DAT_7104742dbb;
      if ((*(byte *)pppplVar44 == 0xc) &&
         (uVar35 = *(int *)((long)pppplVar44 + 1) - 1, 0 < *(int *)((long)pppplVar44 + 1))) {
        pppplVar42 = *(long *****)(lVar22 + 0x20);
        puVar15 = (uint *)0x0;
        do {
          uVar18 = (uint)puVar15;
          iVar20 = uVar35 + uVar18;
          if (iVar20 < 0) {
            iVar20 = iVar20 + 1;
          }
          uVar5 = iVar20 >> 1;
          ppppbVar17 = (byte ****)(ulong)uVar5;
          param_7 = (uint *)(*(long *)(lVar22 + 0x28) + (long)*(int *)((long)pppplVar44 + 5) +
                            (long)(int)uVar5 * 8);
          param_8 = (byte ****)pppplVar42[*param_7];
          if (param_8 == (byte ****)0xfdd63e087) {
            if (-1 < (int)*(uint *)((long)param_7 + 4)) {
              puVar11 = (uint *)((long)pppplVar44 + (long)(int)*(uint *)((long)param_7 + 4));
            }
            break;
          }
          param_7 = (uint *)(ulong)(uVar5 - 1);
          uVar10 = uVar5 - 1;
          if (param_8 < (byte ****)0xfdd63e088) {
            uVar18 = uVar5 + 1;
            uVar10 = uVar35;
          }
          uVar35 = uVar10;
          puVar15 = (uint *)(ulong)uVar18;
        } while ((int)uVar18 <= (int)uVar35);
      }
      uVar50 = 0x43480000;
      if (*(byte *)puVar11 == 8) {
        uVar50 = *(undefined4 *)((long)puVar11 + 1);
      }
      lVar22 = lVar29 * 0x20;
      lVar29 = lVar29 + 1;
      *(undefined4 *)(*plVar2 + lVar22 + 0x1c) = uVar50;
      uVar35 = (uint)*pbVar40;
      if (uVar35 - 0xb < 2) {
        if (*(int *)(pbVar40 + 1) <= lVar29) break;
        goto LAB_71030754ac;
      }
    } while (lVar29 < 0);
  }
  pppbVar21 = *ppppbVar47;
  if (*(char *)pppbVar21 == '\f') {
    iVar20 = *(int *)((long)pppbVar21 + 1) + -1;
    if (*(int *)((long)pppbVar21 + 1) < 1) {
LAB_7103075acc:
      pcVar28 = "";
    }
    else {
      iVar33 = 0;
      pcVar28 = "";
      do {
        iVar4 = iVar20 + iVar33;
        if (iVar4 < 0) {
          iVar4 = iVar4 + 1;
        }
        iVar4 = iVar4 >> 1;
        puVar32 = (uint *)(*(long *)(*param_2 + 0x28) + (long)*(int *)((long)pppbVar21 + 5) +
                          (long)iVar4 * 8);
        uVar36 = *(ulong *)(*(long *)(*param_2 + 0x20) + (ulong)*puVar32 * 8);
        if (uVar36 == 0x1da4c90529) {
          uVar35 = puVar32[1];
          if ((int)uVar35 < 0) goto LAB_7103075acc;
          pcVar28 = (char *)((long)pppbVar21 + (long)(int)uVar35);
          break;
        }
        iVar9 = iVar4 + -1;
        if (uVar36 < 0x1da4c9052a) {
          iVar33 = iVar4 + 1;
          iVar9 = iVar20;
        }
        iVar20 = iVar9;
      } while (iVar33 <= iVar20);
    }
  }
  else {
    pcVar28 = "";
  }
  if (*pcVar28 == '\b') {
    uVar50 = *(undefined4 *)(pcVar28 + 1);
  }
  else {
    uVar50 = 0x43fa0000;
  }
  *(undefined4 *)(param_1 + 0x1e8) = uVar50;
  pppbVar21 = *ppppbVar47;
  if ((*(char *)pppbVar21 == '\f') &&
     (iVar20 = *(int *)((long)pppbVar21 + 1) + -1, 0 < *(int *)((long)pppbVar21 + 1))) {
    iVar33 = 0;
    pcVar28 = "";
    do {
      iVar4 = iVar20 + iVar33;
      if (iVar4 < 0) {
        iVar4 = iVar4 + 1;
      }
      iVar4 = iVar4 >> 1;
      puVar32 = (uint *)(*(long *)(*param_2 + 0x28) + (long)*(int *)((long)pppbVar21 + 5) +
                        (long)iVar4 * 8);
      uVar36 = *(ulong *)(*(long *)(*param_2 + 0x20) + (ulong)*puVar32 * 8);
      if (uVar36 == 0x1c31556aff) {
        uVar35 = puVar32[1];
        if ((int)uVar35 < 0) goto LAB_7103075b88;
        pcVar28 = (char *)((long)pppbVar21 + (long)(int)uVar35);
        break;
      }
      iVar9 = iVar4 + -1;
      if (uVar36 < 0x1c31556b00) {
        iVar33 = iVar4 + 1;
        iVar9 = iVar20;
      }
      iVar20 = iVar9;
    } while (iVar33 <= iVar20);
  }
  else {
LAB_7103075b88:
    pcVar28 = "";
  }
  if (*pcVar28 == '\b') {
    uVar50 = *(undefined4 *)(pcVar28 + 1);
  }
  else {
    uVar50 = 0x42a00000;
  }
  *(undefined4 *)(param_1 + 0x1ec) = uVar50;
  pppbVar21 = *ppppbVar47;
  if ((*(char *)pppbVar21 == '\f') &&
     (iVar20 = *(int *)((long)pppbVar21 + 1) + -1, 0 < *(int *)((long)pppbVar21 + 1))) {
    iVar33 = 0;
    pcVar28 = "";
    do {
      iVar4 = iVar20 + iVar33;
      if (iVar4 < 0) {
        iVar4 = iVar4 + 1;
      }
      iVar4 = iVar4 >> 1;
      puVar32 = (uint *)(*(long *)(*param_2 + 0x28) + (long)*(int *)((long)pppbVar21 + 5) +
                        (long)iVar4 * 8);
      uVar36 = *(ulong *)(*(long *)(*param_2 + 0x20) + (ulong)*puVar32 * 8);
      if (uVar36 == 0x1b4e0b5a0d) {
        uVar35 = puVar32[1];
        if ((int)uVar35 < 0) goto LAB_7103075c48;
        pcVar28 = (char *)((long)pppbVar21 + (long)(int)uVar35);
        break;
      }
      iVar9 = iVar4 + -1;
      if (uVar36 < 0x1b4e0b5a0e) {
        iVar33 = iVar4 + 1;
        iVar9 = iVar20;
      }
      iVar20 = iVar9;
    } while (iVar33 <= iVar20);
  }
  else {
LAB_7103075c48:
    pcVar28 = "";
  }
  if (*pcVar28 == '\b') {
    uVar50 = *(undefined4 *)(pcVar28 + 1);
  }
  else {
    uVar50 = 0x42c80000;
  }
  *(undefined4 *)(param_1 + 0x1f0) = uVar50;
  pppbVar21 = *ppppbVar47;
  if ((*(char *)pppbVar21 == '\f') &&
     (iVar20 = *(int *)((long)pppbVar21 + 1) + -1, 0 < *(int *)((long)pppbVar21 + 1))) {
    iVar33 = 0;
    pcVar28 = "";
    do {
      iVar4 = iVar20 + iVar33;
      if (iVar4 < 0) {
        iVar4 = iVar4 + 1;
      }
      iVar4 = iVar4 >> 1;
      puVar32 = (uint *)(*(long *)(*param_2 + 0x28) + (long)*(int *)((long)pppbVar21 + 5) +
                        (long)iVar4 * 8);
      uVar36 = *(ulong *)(*(long *)(*param_2 + 0x20) + (ulong)*puVar32 * 8);
      if (uVar36 == 0x15518b6e68) {
        uVar35 = puVar32[1];
        if ((int)uVar35 < 0) goto LAB_7103075d08;
        pcVar28 = (char *)((long)pppbVar21 + (long)(int)uVar35);
        break;
      }
      iVar9 = iVar4 + -1;
      if (uVar36 < 0x15518b6e69) {
        iVar33 = iVar4 + 1;
        iVar9 = iVar20;
      }
      iVar20 = iVar9;
    } while (iVar33 <= iVar20);
  }
  else {
LAB_7103075d08:
    pcVar28 = "";
  }
  if (*pcVar28 == '\b') {
    uVar50 = *(undefined4 *)(pcVar28 + 1);
  }
  else {
    uVar50 = 0;
  }
  *(undefined4 *)(param_1 + 500) = uVar50;
  pppbVar21 = *ppppbVar47;
  if ((*(char *)pppbVar21 == '\f') &&
     (iVar20 = *(int *)((long)pppbVar21 + 1) + -1, 0 < *(int *)((long)pppbVar21 + 1))) {
    iVar33 = 0;
    pcVar28 = "";
    do {
      iVar4 = iVar20 + iVar33;
      if (iVar4 < 0) {
        iVar4 = iVar4 + 1;
      }
      iVar4 = iVar4 >> 1;
      puVar32 = (uint *)(*(long *)(*param_2 + 0x28) + (long)*(int *)((long)pppbVar21 + 5) +
                        (long)iVar4 * 8);
      uVar36 = *(ulong *)(*(long *)(*param_2 + 0x20) + (ulong)*puVar32 * 8);
      if (uVar36 == 0x1a4fd6b190) {
        uVar35 = puVar32[1];
        if ((int)uVar35 < 0) goto LAB_7103075dc4;
        pcVar28 = (char *)((long)pppbVar21 + (long)(int)uVar35);
        break;
      }
      iVar9 = iVar4 + -1;
      if (uVar36 < 0x1a4fd6b191) {
        iVar33 = iVar4 + 1;
        iVar9 = iVar20;
      }
      iVar20 = iVar9;
    } while (iVar33 <= iVar20);
  }
  else {
LAB_7103075dc4:
    pcVar28 = "";
  }
  if (*pcVar28 == '\b') {
    uVar50 = *(undefined4 *)(pcVar28 + 1);
  }
  else {
    uVar50 = 0x42480000;
  }
  *(undefined4 *)(param_1 + 0x1f8) = uVar50;
  pppbVar21 = *ppppbVar47;
  if ((*(char *)pppbVar21 == '\f') &&
     (iVar20 = *(int *)((long)pppbVar21 + 1) + -1, 0 < *(int *)((long)pppbVar21 + 1))) {
    iVar33 = 0;
    pcVar28 = "";
    do {
      iVar4 = iVar20 + iVar33;
      if (iVar4 < 0) {
        iVar4 = iVar4 + 1;
      }
      iVar4 = iVar4 >> 1;
      puVar32 = (uint *)(*(long *)(*param_2 + 0x28) + (long)*(int *)((long)pppbVar21 + 5) +
                        (long)iVar4 * 8);
      uVar36 = *(ulong *)(*(long *)(*param_2 + 0x20) + (ulong)*puVar32 * 8);
      if (uVar36 == 0x16b40b5951) {
        uVar35 = puVar32[1];
        if ((int)uVar35 < 0) goto LAB_7103075e84;
        pcVar28 = (char *)((long)pppbVar21 + (long)(int)uVar35);
        break;
      }
      iVar9 = iVar4 + -1;
      if (uVar36 < 0x16b40b5952) {
        iVar33 = iVar4 + 1;
        iVar9 = iVar20;
      }
      iVar20 = iVar9;
    } while (iVar33 <= iVar20);
  }
  else {
LAB_7103075e84:
    pcVar28 = "";
  }
  if (*pcVar28 == '\b') {
    uVar50 = *(undefined4 *)(pcVar28 + 1);
  }
  else {
    uVar50 = 0x453b8000;
  }
  *(undefined4 *)(param_1 + 0x1fc) = uVar50;
  pppbVar21 = *ppppbVar47;
  if ((*(char *)pppbVar21 == '\f') &&
     (iVar20 = *(int *)((long)pppbVar21 + 1) + -1, 0 < *(int *)((long)pppbVar21 + 1))) {
    iVar33 = 0;
    pcVar28 = "";
    do {
      iVar4 = iVar20 + iVar33;
      if (iVar4 < 0) {
        iVar4 = iVar4 + 1;
      }
      iVar4 = iVar4 >> 1;
      puVar32 = (uint *)(*(long *)(*param_2 + 0x28) + (long)*(int *)((long)pppbVar21 + 5) +
                        (long)iVar4 * 8);
      uVar36 = *(ulong *)(*(long *)(*param_2 + 0x20) + (ulong)*puVar32 * 8);
      if (uVar36 == 0x1286bc2562) {
        uVar35 = puVar32[1];
        if ((int)uVar35 < 0) goto LAB_7103075f44;
        pcVar28 = (char *)((long)pppbVar21 + (long)(int)uVar35);
        break;
      }
      iVar9 = iVar4 + -1;
      if (uVar36 < 0x1286bc2563) {
        iVar33 = iVar4 + 1;
        iVar9 = iVar20;
      }
      iVar20 = iVar9;
    } while (iVar33 <= iVar20);
  }
  else {
LAB_7103075f44:
    pcVar28 = "";
  }
  if (*pcVar28 == '\b') {
    uVar50 = *(undefined4 *)(pcVar28 + 1);
  }
  else {
    uVar50 = 0x42480000;
  }
  *(undefined4 *)(param_1 + 0x200) = uVar50;
  pppbVar21 = *ppppbVar47;
  if ((*(char *)pppbVar21 == '\f') &&
     (iVar20 = *(int *)((long)pppbVar21 + 1) + -1, 0 < *(int *)((long)pppbVar21 + 1))) {
    iVar33 = 0;
    pcVar28 = "";
    do {
      iVar4 = iVar20 + iVar33;
      if (iVar4 < 0) {
        iVar4 = iVar4 + 1;
      }
      iVar4 = iVar4 >> 1;
      puVar32 = (uint *)(*(long *)(*param_2 + 0x28) + (long)*(int *)((long)pppbVar21 + 5) +
                        (long)iVar4 * 8);
      uVar36 = *(ulong *)(*(long *)(*param_2 + 0x20) + (ulong)*puVar32 * 8);
      if (uVar36 == 0x1b1dcaa9e1) {
        uVar35 = puVar32[1];
        if ((int)uVar35 < 0) goto LAB_7103076000;
        pcVar28 = (char *)((long)pppbVar21 + (long)(int)uVar35);
        break;
      }
      iVar9 = iVar4 + -1;
      if (uVar36 < 0x1b1dcaa9e2) {
        iVar33 = iVar4 + 1;
        iVar9 = iVar20;
      }
      iVar20 = iVar9;
    } while (iVar33 <= iVar20);
  }
  else {
LAB_7103076000:
    pcVar28 = "";
  }
  if (*pcVar28 == '\b') {
    uVar50 = *(undefined4 *)(pcVar28 + 1);
  }
  else {
    uVar50 = 0x43960000;
  }
  *(undefined4 *)(param_1 + 0x204) = uVar50;
  pppbVar21 = *ppppbVar47;
  if ((*(char *)pppbVar21 == '\f') &&
     (iVar20 = *(int *)((long)pppbVar21 + 1) + -1, 0 < *(int *)((long)pppbVar21 + 1))) {
    lVar37 = *param_2;
    iVar33 = 0;
    pbVar40 = &DAT_7104742dbb;
    do {
      iVar4 = iVar20 + iVar33;
      if (iVar4 < 0) {
        iVar4 = iVar4 + 1;
      }
      iVar4 = iVar4 >> 1;
      puVar32 = (uint *)(*(long *)(lVar37 + 0x28) + (long)*(int *)((long)pppbVar21 + 5) +
                        (long)iVar4 * 8);
      uVar36 = *(ulong *)(*(long *)(lVar37 + 0x20) + (ulong)*puVar32 * 8);
      if (uVar36 == 0x2891393d8a) {
        uVar35 = puVar32[1];
        if ((int)uVar35 < 0) goto LAB_71030760c0;
        pbVar40 = (byte *)((long)pppbVar21 + (long)(int)uVar35);
        goto LAB_71030760cc;
      }
      iVar9 = iVar4 + -1;
      if (uVar36 < 0x2891393d8b) {
        iVar33 = iVar4 + 1;
        iVar9 = iVar20;
      }
      iVar20 = iVar9;
    } while (iVar33 <= iVar20);
    lVar37 = 0;
  }
  else {
LAB_71030760c0:
    lVar37 = 0;
    pbVar40 = &DAT_7104742dbb;
  }
LAB_71030760cc:
  if (*pbVar40 - 0xb < 2) {
    iVar20 = *(int *)(pbVar40 + 1);
  }
  else {
    iVar20 = 0;
  }
  uVar36 = (ulong)iVar20;
  puVar27 = *(undefined8 **)(param_1 + 0x210);
  pvVar43 = *(void **)(param_1 + 0x208);
  pppplVar44 = (long ****)((long)puVar27 - (long)pvVar43);
  lVar29 = (long)pppplVar44 >> 2;
  plVar2 = (long *)(param_1 + 0x208);
  if ((ulong)(lVar29 * -0x5555555555555555) < uVar36) {
    uVar48 = uVar36 + lVar29 * 0x5555555555555555;
    if ((ulong)((*(long *)(param_1 + 0x218) - (long)puVar27 >> 2) * -0x5555555555555555) < uVar48) {
      if (iVar20 < 0) goto LAB_7103079628;
      lVar22 = *(long *)(param_1 + 0x218) - (long)pvVar43 >> 2;
      if ((ulong)(lVar22 * -0x5555555555555555) < 0xaaaaaaaaaaaaaaa) {
        uVar23 = lVar22 * 0x5555555555555556;
        uVar49 = uVar36;
        if (uVar36 <= uVar23) {
          uVar49 = uVar23;
        }
        if (uVar49 != 0) goto LAB_71030761ec;
        lVar22 = 0;
      }
      else {
        uVar49 = 0x1555555555555555;
LAB_71030761ec:
        ppplVar25 = (long ***)(uVar49 * 0xc);
        if (ppplVar25 == (long ***)0x0) {
          ppplVar25 = (long ***)0x1;
        }
        lVar22 = FUN_710392e290(0x10,ppplVar25,(long ****)puVar11,(byte ****)puVar15,pppplVar42,
                                ppppbVar17,param_7,param_8);
        if (lVar22 == 0) {
          if (DAT_7105332f00 != (long *)0x0) {
            local_84 = 0;
            pppplVar13 = &local_90;
            local_90 = ppplVar25;
            uVar23 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_84);
            if (((uVar23 & 1) != 0) &&
               (lVar22 = FUN_710392e290(0x10,ppplVar25,pppplVar13,(byte ****)puVar15,pppplVar42,
                                        ppppbVar17,param_7,param_8), lVar22 != 0))
            goto LAB_710307625c;
          }
          lVar22 = 0;
        }
      }
LAB_710307625c:
      pvVar46 = (void *)(lVar22 + lVar29 * 4);
      puVar11 = (uint *)(uVar48 * 0xc);
      memset(pvVar46,0,(size_t)puVar11);
      lVar29 = SUB168(SEXT816((long)pppplVar44) * SEXT816(-0x2aaaaaaaaaaaaaab),8);
      pvVar46 = (void *)((long)pvVar46 + ((lVar29 >> 1) - (lVar29 >> 0x3f)) * 0xc);
      if (0 < (long)pppplVar44) {
        memcpy(pvVar46,pvVar43,(size_t)pppplVar44);
        puVar11 = (uint *)pppplVar44;
      }
      *(void **)(param_1 + 0x208) = pvVar46;
      *(ulong *)(param_1 + 0x210) = lVar22 + uVar36 * 0xc;
      *(ulong *)(param_1 + 0x218) = lVar22 + uVar49 * 0xc;
      if (pvVar43 != (void *)0x0) {
        FUN_710392eb40((ulong)pvVar43);
      }
    }
    else {
      uVar36 = uVar48;
      if ((uVar48 & 1) != 0) {
        *(undefined4 *)(puVar27 + 1) = 0;
        *puVar27 = 0;
        puVar27 = (undefined8 *)(*(long *)(param_1 + 0x210) + 0xc);
        uVar36 = uVar48 - 1;
        *(undefined8 **)(param_1 + 0x210) = puVar27;
      }
      if (uVar48 != 1) {
        do {
          *(undefined4 *)(puVar27 + 1) = 0;
          *puVar27 = 0;
          lVar29 = *(long *)(param_1 + 0x210);
          *(long *)(param_1 + 0x210) = lVar29 + 0xc;
          *(undefined4 *)(lVar29 + 0x14) = 0;
          *(undefined8 *)(lVar29 + 0xc) = 0;
          puVar27 = (undefined8 *)(*(long *)(param_1 + 0x210) + 0xc);
          uVar36 = uVar36 - 2;
          *(undefined8 **)(param_1 + 0x210) = puVar27;
        } while (uVar36 != 0);
      }
    }
  }
  else if (lVar29 * -0x5555555555555555 - uVar36 != 0) {
    *(void **)(param_1 + 0x210) = (void *)((long)pvVar43 + uVar36 * 0xc);
  }
  uVar35 = (uint)*pbVar40;
  if ((*pbVar40 - 0xb < 2) && (0 < *(int *)(pbVar40 + 1))) {
    lVar29 = 0;
LAB_710307633c:
    do {
      iVar20 = (int)lVar29;
      if (iVar20 < 0) {
LAB_7103076374:
        lVar22 = 0;
        pbVar38 = &DAT_7104742dbb;
      }
      else {
        pbVar38 = &DAT_7104742dbb;
        lVar22 = 0;
        if (uVar35 == 0xb) {
          if (*(int *)(pbVar40 + 1) <= iVar20) goto LAB_7103076374;
          pbVar38 = pbVar40 + *(int *)(pbVar40 + (long)iVar20 * 4 + 5);
          lVar22 = lVar37;
        }
      }
      pbVar41 = &DAT_7104742dbb;
      if ((*pbVar38 == 0xc) && (uVar35 = *(int *)(pbVar38 + 1) - 1, 0 < *(int *)(pbVar38 + 1))) {
        iVar20 = 0;
        do {
          iVar33 = uVar35 + iVar20;
          if (iVar33 < 0) {
            iVar33 = iVar33 + 1;
          }
          uVar18 = iVar33 >> 1;
          puVar11 = (uint *)(ulong)uVar18;
          puVar15 = (uint *)(*(long *)(lVar22 + 0x28) + (long)*(int *)(pbVar38 + 5) +
                            (long)(int)uVar18 * 8);
          pppplVar42 = *(long *****)(*(long *)(lVar22 + 0x20) + (ulong)*puVar15 * 8);
          if (pppplVar42 == (long ****)0x17ca8b307f) {
            if (-1 < (int)*(uint *)((long)puVar15 + 4)) {
              pbVar41 = pbVar38 + (int)*(uint *)((long)puVar15 + 4);
            }
            break;
          }
          puVar15 = (uint *)(ulong)(uVar18 - 1);
          uVar5 = uVar18 - 1;
          if (pppplVar42 < (long ****)0x17ca8b3080) {
            iVar20 = uVar18 + 1;
            uVar5 = uVar35;
          }
          uVar35 = uVar5;
        } while (iVar20 <= (int)uVar35);
      }
      uVar50 = 0x42c80000;
      if (*pbVar41 == 8) {
        uVar50 = *(undefined4 *)(pbVar41 + 1);
      }
      *(undefined4 *)(*plVar2 + lVar29 * 0xc) = uVar50;
      pbVar41 = &DAT_7104742dbb;
      if ((*pbVar38 == 0xc) && (uVar35 = *(int *)(pbVar38 + 1) - 1, 0 < *(int *)(pbVar38 + 1))) {
        iVar20 = 0;
        do {
          iVar33 = uVar35 + iVar20;
          if (iVar33 < 0) {
            iVar33 = iVar33 + 1;
          }
          uVar18 = iVar33 >> 1;
          puVar11 = (uint *)(ulong)uVar18;
          puVar15 = (uint *)(*(long *)(lVar22 + 0x28) + (long)*(int *)(pbVar38 + 5) +
                            (long)(int)uVar18 * 8);
          pppplVar42 = *(long *****)(*(long *)(lVar22 + 0x20) + (ulong)*puVar15 * 8);
          if (pppplVar42 == (long ****)0x1b1eb8c788) {
            if (-1 < (int)*(uint *)((long)puVar15 + 4)) {
              pbVar41 = pbVar38 + (int)*(uint *)((long)puVar15 + 4);
            }
            break;
          }
          puVar15 = (uint *)(ulong)(uVar18 - 1);
          uVar5 = uVar18 - 1;
          if (pppplVar42 < (long ****)0x1b1eb8c789) {
            iVar20 = uVar18 + 1;
            uVar5 = uVar35;
          }
          uVar35 = uVar5;
        } while (iVar20 <= (int)uVar35);
      }
      uVar50 = 0x41a00000;
      if (*pbVar41 == 8) {
        uVar50 = *(undefined4 *)(pbVar41 + 1);
      }
      *(undefined4 *)(*plVar2 + lVar29 * 0xc + 4) = uVar50;
      pbVar41 = &DAT_7104742dbb;
      if ((*pbVar38 == 0xc) && (uVar35 = *(int *)(pbVar38 + 1) - 1, 0 < *(int *)(pbVar38 + 1))) {
        iVar20 = 0;
        do {
          iVar33 = uVar35 + iVar20;
          if (iVar33 < 0) {
            iVar33 = iVar33 + 1;
          }
          iVar33 = iVar33 >> 1;
          puVar11 = (uint *)(*(long *)(lVar22 + 0x28) + (long)*(int *)(pbVar38 + 5) +
                            (long)iVar33 * 8);
          puVar15 = *(uint **)(*(long *)(lVar22 + 0x20) + (ulong)*puVar11 * 8);
          if ((byte ****)puVar15 == (byte ****)0x193ef276b9) {
            if (-1 < (int)*(uint *)((long)puVar11 + 4)) {
              pbVar41 = pbVar38 + (int)*(uint *)((long)puVar11 + 4);
            }
            break;
          }
          puVar11 = (uint *)(ulong)(iVar33 - 1U);
          uVar18 = iVar33 - 1U;
          if (puVar15 < (byte ****)0x193ef276ba) {
            iVar20 = iVar33 + 1;
            uVar18 = uVar35;
          }
          uVar35 = uVar18;
        } while (iVar20 <= (int)uVar35);
      }
      uVar50 = 0x40a00000;
      if (*pbVar41 == 8) {
        uVar50 = *(undefined4 *)(pbVar41 + 1);
      }
      lVar22 = lVar29 * 0xc;
      lVar29 = lVar29 + 1;
      *(undefined4 *)(*plVar2 + lVar22 + 8) = uVar50;
      uVar35 = (uint)*pbVar40;
      if (uVar35 - 0xb < 2) {
        if (*(int *)(pbVar40 + 1) <= lVar29) break;
        goto LAB_710307633c;
      }
    } while (lVar29 < 0);
  }
  pppbVar21 = *ppppbVar47;
  if ((*(char *)pppbVar21 == '\f') &&
     (iVar20 = *(int *)((long)pppbVar21 + 1) + -1, 0 < *(int *)((long)pppbVar21 + 1))) {
    lVar37 = *param_2;
    iVar33 = 0;
    pbVar40 = &DAT_7104742dbb;
    do {
      iVar4 = iVar20 + iVar33;
      if (iVar4 < 0) {
        iVar4 = iVar4 + 1;
      }
      iVar4 = iVar4 >> 1;
      puVar32 = (uint *)(*(long *)(lVar37 + 0x28) + (long)*(int *)((long)pppbVar21 + 5) +
                        (long)iVar4 * 8);
      uVar36 = *(ulong *)(*(long *)(lVar37 + 0x20) + (ulong)*puVar32 * 8);
      if (uVar36 == 0x21db47b278) {
        uVar35 = puVar32[1];
        if ((int)uVar35 < 0) goto LAB_7103076624;
        pbVar40 = (byte *)((long)pppbVar21 + (long)(int)uVar35);
        goto LAB_7103076630;
      }
      iVar9 = iVar4 + -1;
      if (uVar36 < 0x21db47b279) {
        iVar33 = iVar4 + 1;
        iVar9 = iVar20;
      }
      iVar20 = iVar9;
    } while (iVar33 <= iVar20);
    lVar37 = 0;
  }
  else {
LAB_7103076624:
    lVar37 = 0;
    pbVar40 = &DAT_7104742dbb;
  }
LAB_7103076630:
  if (*pbVar40 - 0xb < 2) {
    iVar20 = *(int *)(pbVar40 + 1);
  }
  else {
    iVar20 = 0;
  }
  uVar48 = (ulong)iVar20;
  puVar27 = *(undefined8 **)(param_1 + 0x228);
  pvVar43 = *(void **)(param_1 + 0x220);
  pppplVar44 = (long ****)((long)puVar27 - (long)pvVar43);
  uVar36 = (long)pppplVar44 >> 3;
  if (uVar36 < uVar48) {
    uVar49 = uVar48 - uVar36;
    if ((ulong)(*(long *)(param_1 + 0x230) - (long)puVar27 >> 3) < uVar49) {
      if (iVar20 < 0) goto LAB_7103079628;
      lVar29 = *(long *)(param_1 + 0x230) - (long)pvVar43;
      if ((ulong)(lVar29 >> 3) < 0xfffffffffffffff) {
        uVar24 = lVar29 >> 2;
        uVar23 = uVar48;
        if (uVar48 <= uVar24) {
          uVar23 = uVar24;
        }
        if (uVar23 != 0) {
          if (uVar23 >> 0x3d != 0) goto LAB_7103079260;
          goto LAB_710307671c;
        }
LAB_7103076780:
        pvVar46 = (void *)0x0;
      }
      else {
        uVar23 = 0x1fffffffffffffff;
LAB_710307671c:
        ppplVar25 = (long ***)(uVar23 * 8);
        if (ppplVar25 == (long ***)0x0) {
          ppplVar25 = (long ***)0x1;
        }
        pvVar46 = (void *)FUN_710392e290(0x10,ppplVar25,(long ****)puVar11,(byte ****)puVar15,
                                         pppplVar42,ppppbVar17,param_7,param_8);
        if (pvVar46 == (void *)0x0) {
          if (DAT_7105332f00 != (long *)0x0) {
            local_84 = 0;
            pppplVar13 = &local_90;
            local_90 = ppplVar25;
            uVar24 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_84);
            if (((uVar24 & 1) != 0) &&
               (pvVar46 = (void *)FUN_710392e290(0x10,ppplVar25,pppplVar13,(byte ****)puVar15,
                                                 pppplVar42,ppppbVar17,param_7,param_8),
               pvVar46 != (void *)0x0)) goto LAB_7103076784;
          }
          goto LAB_7103076780;
        }
      }
LAB_7103076784:
      puVar11 = (uint *)(uVar49 * 8);
      memset((void *)((long)pvVar46 + uVar36 * 8),0,(size_t)puVar11);
      if (0 < (long)pppplVar44) {
        memcpy(pvVar46,pvVar43,(size_t)pppplVar44);
        puVar11 = (uint *)pppplVar44;
      }
      *(void **)(param_1 + 0x220) = pvVar46;
      *(void **)(param_1 + 0x228) = (void *)((long)pvVar46 + uVar48 * 8);
      *(void **)(param_1 + 0x230) = (void *)((long)pvVar46 + uVar23 * 8);
      if (pvVar43 != (void *)0x0) {
        FUN_710392eb40((ulong)pvVar43);
      }
    }
    else {
      uVar36 = uVar49;
      if ((uVar49 & 1) != 0) {
        *puVar27 = 0;
        puVar27 = (undefined8 *)(*(long *)(param_1 + 0x228) + 8);
        uVar36 = uVar49 - 1;
        *(undefined8 **)(param_1 + 0x228) = puVar27;
      }
      if (uVar49 != 1) {
        do {
          *puVar27 = 0;
          lVar29 = *(long *)(param_1 + 0x228);
          *(long *)(param_1 + 0x228) = lVar29 + 8;
          *(undefined8 *)(lVar29 + 8) = 0;
          puVar27 = (undefined8 *)(*(long *)(param_1 + 0x228) + 8);
          uVar36 = uVar36 - 2;
          *(undefined8 **)(param_1 + 0x228) = puVar27;
        } while (uVar36 != 0);
      }
    }
  }
  else if (uVar36 != uVar48) {
    *(void **)(param_1 + 0x228) = (void *)((long)pvVar43 + uVar48 * 8);
  }
  uVar35 = (uint)*pbVar40;
  if ((*pbVar40 - 0xb < 2) && (0 < *(int *)(pbVar40 + 1))) {
    lVar29 = 0;
LAB_710307682c:
    do {
      iVar20 = (int)lVar29;
      if (iVar20 < 0) {
LAB_7103076864:
        lVar22 = 0;
        pbVar38 = &DAT_7104742dbb;
      }
      else {
        pbVar38 = &DAT_7104742dbb;
        lVar22 = 0;
        if (uVar35 == 0xb) {
          if (*(int *)(pbVar40 + 1) <= iVar20) goto LAB_7103076864;
          pbVar38 = pbVar40 + *(int *)(pbVar40 + (long)iVar20 * 4 + 5);
          lVar22 = lVar37;
        }
      }
      pbVar41 = &DAT_7104742dbb;
      if ((*pbVar38 == 0xc) && (iVar20 = *(int *)(pbVar38 + 1) + -1, 0 < *(int *)(pbVar38 + 1))) {
        iVar33 = 0;
        do {
          iVar4 = iVar20 + iVar33;
          if (iVar4 < 0) {
            iVar4 = iVar4 + 1;
          }
          iVar4 = iVar4 >> 1;
          puVar32 = (uint *)(*(long *)(lVar22 + 0x28) + (long)*(int *)(pbVar38 + 5) +
                            (long)iVar4 * 8);
          puVar11 = *(uint **)(*(long *)(lVar22 + 0x20) + (ulong)*puVar32 * 8);
          if ((long ****)puVar11 == (long ****)0x1880e5f859) {
            uVar35 = puVar32[1];
            if (-1 < (int)uVar35) {
              pbVar41 = pbVar38 + (int)uVar35;
            }
            break;
          }
          iVar9 = iVar4 + -1;
          if (puVar11 < (long ****)0x1880e5f85a) {
            iVar33 = iVar4 + 1;
            iVar9 = iVar20;
          }
          iVar20 = iVar9;
        } while (iVar33 <= iVar20);
      }
      uVar50 = 0x45160000;
      if (*pbVar41 == 8) {
        uVar50 = *(undefined4 *)(pbVar41 + 1);
      }
      *(undefined4 *)(*(long *)(param_1 + 0x220) + lVar29 * 8) = uVar50;
      pbVar41 = &DAT_7104742dbb;
      if ((*pbVar38 == 0xc) && (iVar20 = *(int *)(pbVar38 + 1) + -1, 0 < *(int *)(pbVar38 + 1))) {
        iVar33 = 0;
        do {
          iVar4 = iVar20 + iVar33;
          if (iVar4 < 0) {
            iVar4 = iVar4 + 1;
          }
          iVar4 = iVar4 >> 1;
          puVar32 = (uint *)(*(long *)(lVar22 + 0x28) + (long)*(int *)(pbVar38 + 5) +
                            (long)iVar4 * 8);
          uVar36 = *(ulong *)(*(long *)(lVar22 + 0x20) + (ulong)*puVar32 * 8);
          if (uVar36 == 0x211029aeed) {
            uVar35 = puVar32[1];
            if (-1 < (int)uVar35) {
              pbVar41 = pbVar38 + (int)uVar35;
            }
            break;
          }
          iVar9 = iVar4 + -1;
          if (uVar36 < 0x211029aeee) {
            iVar33 = iVar4 + 1;
            iVar9 = iVar20;
          }
          iVar20 = iVar9;
        } while (iVar33 <= iVar20);
      }
      uVar50 = 0x45610000;
      if (*pbVar41 == 8) {
        uVar50 = *(undefined4 *)(pbVar41 + 1);
      }
      lVar22 = lVar29 * 8;
      lVar29 = lVar29 + 1;
      *(undefined4 *)(*(long *)(param_1 + 0x220) + lVar22 + 4) = uVar50;
      uVar35 = (uint)*pbVar40;
      if (uVar35 - 0xb < 2) {
        if (*(int *)(pbVar40 + 1) <= lVar29) break;
        goto LAB_710307682c;
      }
    } while (lVar29 < 0);
  }
  pppbVar21 = *ppppbVar47;
  if (*(char *)pppbVar21 == '\f') {
    iVar20 = *(int *)((long)pppbVar21 + 1) + -1;
    if (*(int *)((long)pppbVar21 + 1) < 1) {
LAB_7103076a90:
      pcVar28 = "";
    }
    else {
      iVar33 = 0;
      pcVar28 = "";
      do {
        iVar4 = iVar20 + iVar33;
        if (iVar4 < 0) {
          iVar4 = iVar4 + 1;
        }
        iVar4 = iVar4 >> 1;
        puVar32 = (uint *)(*(long *)(*param_2 + 0x28) + (long)*(int *)((long)pppbVar21 + 5) +
                          (long)iVar4 * 8);
        uVar36 = *(ulong *)(*(long *)(*param_2 + 0x20) + (ulong)*puVar32 * 8);
        if (uVar36 == 0x16381a202e) {
          uVar35 = puVar32[1];
          if ((int)uVar35 < 0) goto LAB_7103076a90;
          pcVar28 = (char *)((long)pppbVar21 + (long)(int)uVar35);
          break;
        }
        iVar9 = iVar4 + -1;
        if (uVar36 < 0x16381a202f) {
          iVar33 = iVar4 + 1;
          iVar9 = iVar20;
        }
        iVar20 = iVar9;
      } while (iVar33 <= iVar20);
    }
  }
  else {
    pcVar28 = "";
  }
  if (*pcVar28 == '\b') {
    uVar50 = *(undefined4 *)(pcVar28 + 1);
  }
  else {
    uVar50 = 0x42480000;
  }
  *(undefined4 *)(param_1 + 0x238) = uVar50;
  pppbVar21 = *ppppbVar47;
  if ((*(char *)pppbVar21 == '\f') &&
     (iVar20 = *(int *)((long)pppbVar21 + 1) + -1, 0 < *(int *)((long)pppbVar21 + 1))) {
    iVar33 = 0;
    pcVar28 = "";
    do {
      iVar4 = iVar20 + iVar33;
      if (iVar4 < 0) {
        iVar4 = iVar4 + 1;
      }
      iVar4 = iVar4 >> 1;
      puVar32 = (uint *)(*(long *)(*param_2 + 0x28) + (long)*(int *)((long)pppbVar21 + 5) +
                        (long)iVar4 * 8);
      uVar36 = *(ulong *)(*(long *)(*param_2 + 0x20) + (ulong)*puVar32 * 8);
      if (uVar36 == 0x1ab27f030b) {
        uVar35 = puVar32[1];
        if ((int)uVar35 < 0) goto LAB_7103076b50;
        pcVar28 = (char *)((long)pppbVar21 + (long)(int)uVar35);
        break;
      }
      iVar9 = iVar4 + -1;
      if (uVar36 < 0x1ab27f030c) {
        iVar33 = iVar4 + 1;
        iVar9 = iVar20;
      }
      iVar20 = iVar9;
    } while (iVar33 <= iVar20);
  }
  else {
LAB_7103076b50:
    pcVar28 = "";
  }
  if (*pcVar28 == '\b') {
    uVar50 = *(undefined4 *)(pcVar28 + 1);
  }
  else {
    uVar50 = 0x42c80000;
  }
  *(undefined4 *)(param_1 + 0x23c) = uVar50;
  pppbVar21 = *ppppbVar47;
  if ((*(char *)pppbVar21 == '\f') &&
     (iVar20 = *(int *)((long)pppbVar21 + 1) + -1, 0 < *(int *)((long)pppbVar21 + 1))) {
    iVar33 = 0;
    pcVar28 = "";
    do {
      iVar4 = iVar20 + iVar33;
      if (iVar4 < 0) {
        iVar4 = iVar4 + 1;
      }
      iVar4 = iVar4 >> 1;
      puVar32 = (uint *)(*(long *)(*param_2 + 0x28) + (long)*(int *)((long)pppbVar21 + 5) +
                        (long)iVar4 * 8);
      uVar36 = *(ulong *)(*(long *)(*param_2 + 0x20) + (ulong)*puVar32 * 8);
      if (uVar36 == 0x1adc5b439d) {
        uVar35 = puVar32[1];
        if ((int)uVar35 < 0) goto LAB_7103076c0c;
        pcVar28 = (char *)((long)pppbVar21 + (long)(int)uVar35);
        break;
      }
      iVar9 = iVar4 + -1;
      if (uVar36 < 0x1adc5b439e) {
        iVar33 = iVar4 + 1;
        iVar9 = iVar20;
      }
      iVar20 = iVar9;
    } while (iVar33 <= iVar20);
  }
  else {
LAB_7103076c0c:
    pcVar28 = "";
  }
  if (*pcVar28 == '\b') {
    uVar50 = *(undefined4 *)(pcVar28 + 1);
  }
  else {
    uVar50 = 0x41f00000;
  }
  *(undefined4 *)(param_1 + 0x240) = uVar50;
  pppbVar21 = *ppppbVar47;
  if ((*(char *)pppbVar21 == '\f') &&
     (iVar20 = *(int *)((long)pppbVar21 + 1) + -1, 0 < *(int *)((long)pppbVar21 + 1))) {
    iVar33 = 0;
    pcVar28 = "";
    do {
      iVar4 = iVar20 + iVar33;
      if (iVar4 < 0) {
        iVar4 = iVar4 + 1;
      }
      iVar4 = iVar4 >> 1;
      puVar32 = (uint *)(*(long *)(*param_2 + 0x28) + (long)*(int *)((long)pppbVar21 + 5) +
                        (long)iVar4 * 8);
      uVar36 = *(ulong *)(*(long *)(*param_2 + 0x20) + (ulong)*puVar32 * 8);
      if (uVar36 == 0x158d2a160e) {
        uVar35 = puVar32[1];
        if ((int)uVar35 < 0) goto LAB_7103076cc8;
        pcVar28 = (char *)((long)pppbVar21 + (long)(int)uVar35);
        break;
      }
      iVar9 = iVar4 + -1;
      if (uVar36 < 0x158d2a160f) {
        iVar33 = iVar4 + 1;
        iVar9 = iVar20;
      }
      iVar20 = iVar9;
    } while (iVar33 <= iVar20);
  }
  else {
LAB_7103076cc8:
    pcVar28 = "";
  }
  if (*pcVar28 == '\b') {
    uVar50 = *(undefined4 *)(pcVar28 + 1);
  }
  else {
    uVar50 = 0x41200000;
  }
  *(undefined4 *)(param_1 + 0x244) = uVar50;
  pppbVar21 = *ppppbVar47;
  if ((*(char *)pppbVar21 == '\f') &&
     (iVar20 = *(int *)((long)pppbVar21 + 1) + -1, 0 < *(int *)((long)pppbVar21 + 1))) {
    iVar33 = 0;
    pcVar28 = "";
    do {
      iVar4 = iVar20 + iVar33;
      if (iVar4 < 0) {
        iVar4 = iVar4 + 1;
      }
      iVar4 = iVar4 >> 1;
      puVar32 = (uint *)(*(long *)(*param_2 + 0x28) + (long)*(int *)((long)pppbVar21 + 5) +
                        (long)iVar4 * 8);
      uVar36 = *(ulong *)(*(long *)(*param_2 + 0x20) + (ulong)*puVar32 * 8);
      if (uVar36 == 0x1ecb5e636f) {
        uVar35 = puVar32[1];
        if ((int)uVar35 < 0) goto LAB_7103076d84;
        pcVar28 = (char *)((long)pppbVar21 + (long)(int)uVar35);
        break;
      }
      iVar9 = iVar4 + -1;
      if (uVar36 < 0x1ecb5e6370) {
        iVar33 = iVar4 + 1;
        iVar9 = iVar20;
      }
      iVar20 = iVar9;
    } while (iVar33 <= iVar20);
  }
  else {
LAB_7103076d84:
    pcVar28 = "";
  }
  if (*pcVar28 == '\b') {
    uVar50 = *(undefined4 *)(pcVar28 + 1);
  }
  else {
    uVar50 = 0x44960000;
  }
  *(undefined4 *)(param_1 + 0x248) = uVar50;
  pppbVar21 = *ppppbVar47;
  if ((*(char *)pppbVar21 == '\f') &&
     (iVar20 = *(int *)((long)pppbVar21 + 1) + -1, 0 < *(int *)((long)pppbVar21 + 1))) {
    iVar33 = 0;
    pcVar28 = "";
    do {
      iVar4 = iVar20 + iVar33;
      if (iVar4 < 0) {
        iVar4 = iVar4 + 1;
      }
      iVar4 = iVar4 >> 1;
      puVar32 = (uint *)(*(long *)(*param_2 + 0x28) + (long)*(int *)((long)pppbVar21 + 5) +
                        (long)iVar4 * 8);
      uVar36 = *(ulong *)(*(long *)(*param_2 + 0x20) + (ulong)*puVar32 * 8);
      if (uVar36 == 0x1779e7824e) {
        uVar35 = puVar32[1];
        if ((int)uVar35 < 0) goto LAB_7103076e44;
        pcVar28 = (char *)((long)pppbVar21 + (long)(int)uVar35);
        break;
      }
      iVar9 = iVar4 + -1;
      if (uVar36 < 0x1779e7824f) {
        iVar33 = iVar4 + 1;
        iVar9 = iVar20;
      }
      iVar20 = iVar9;
    } while (iVar33 <= iVar20);
  }
  else {
LAB_7103076e44:
    pcVar28 = "";
  }
  if (*pcVar28 == '\b') {
    uVar50 = *(undefined4 *)(pcVar28 + 1);
  }
  else {
    uVar50 = 0x44960000;
  }
  *(undefined4 *)(param_1 + 0x24c) = uVar50;
  pppbVar21 = *ppppbVar47;
  if ((*(char *)pppbVar21 == '\f') &&
     (iVar20 = *(int *)((long)pppbVar21 + 1) + -1, 0 < *(int *)((long)pppbVar21 + 1))) {
    lVar37 = *param_2;
    iVar33 = 0;
    pbVar40 = &DAT_7104742dbb;
    do {
      iVar4 = iVar20 + iVar33;
      if (iVar4 < 0) {
        iVar4 = iVar4 + 1;
      }
      iVar4 = iVar4 >> 1;
      puVar32 = (uint *)(*(long *)(lVar37 + 0x28) + (long)*(int *)((long)pppbVar21 + 5) +
                        (long)iVar4 * 8);
      uVar36 = *(ulong *)(*(long *)(lVar37 + 0x20) + (ulong)*puVar32 * 8);
      if (uVar36 == 0x1a2091d1e3) {
        uVar35 = puVar32[1];
        if ((int)uVar35 < 0) goto LAB_7103076f04;
        pbVar40 = (byte *)((long)pppbVar21 + (long)(int)uVar35);
        goto LAB_7103076f10;
      }
      iVar9 = iVar4 + -1;
      if (uVar36 < 0x1a2091d1e4) {
        iVar33 = iVar4 + 1;
        iVar9 = iVar20;
      }
      iVar20 = iVar9;
    } while (iVar33 <= iVar20);
    lVar37 = 0;
  }
  else {
LAB_7103076f04:
    lVar37 = 0;
    pbVar40 = &DAT_7104742dbb;
  }
LAB_7103076f10:
  if (*pbVar40 - 0xb < 2) {
    iVar20 = *(int *)(pbVar40 + 1);
  }
  else {
    iVar20 = 0;
  }
  uVar36 = (ulong)iVar20;
  uVar48 = *(long *)(param_1 + 600) - *(long *)(param_1 + 0x250) >> 5;
  plVar2 = (long *)(param_1 + 0x250);
  if (uVar48 < uVar36) {
    FUN_7103079a50(plVar2,uVar36 - uVar48,(long ****)puVar11,(byte ****)puVar15,pppplVar42,
                   ppppbVar17,param_7,param_8);
  }
  else if (uVar48 != uVar36) {
    *(ulong *)(param_1 + 600) = *(long *)(param_1 + 0x250) + uVar36 * 0x20;
  }
  uVar35 = (uint)*pbVar40;
  if ((*pbVar40 - 0xb < 2) && (0 < *(int *)(pbVar40 + 1))) {
    lVar29 = 0;
LAB_7103076ff8:
    do {
      iVar20 = (int)lVar29;
      if (iVar20 < 0) {
LAB_7103077030:
        lVar22 = 0;
        pbVar38 = &DAT_7104742dbb;
      }
      else {
        lVar22 = 0;
        pbVar38 = &DAT_7104742dbb;
        if (uVar35 == 0xb) {
          if (*(int *)(pbVar40 + 1) <= iVar20) goto LAB_7103077030;
          pbVar38 = pbVar40 + *(int *)(pbVar40 + (long)iVar20 * 4 + 5);
          lVar22 = lVar37;
        }
      }
      if ((*pbVar38 == 0xc) && (uVar35 = *(int *)(pbVar38 + 1) - 1, 0 < *(int *)(pbVar38 + 1))) {
        iVar20 = 0;
        pppplVar42 = (long ****)(*(long *)(lVar22 + 0x28) + (long)*(int *)(pbVar38 + 5));
        do {
          iVar33 = uVar35 + iVar20;
          if (iVar33 < 0) {
            iVar33 = iVar33 + 1;
          }
          uVar18 = iVar33 >> 1;
          ppppbVar17 = (byte ****)(ulong)uVar18;
          param_7 = (uint *)(pppplVar42 + (int)uVar18);
          param_8 = *(byte *****)(*(long *)(lVar22 + 0x20) + (ulong)*param_7 * 8);
          if (param_8 == (byte ****)0xe128c0b42) {
            if (-1 < (int)*(uint *)((long)param_7 + 4)) {
              pbVar41 = pbVar38 + (int)*(uint *)((long)param_7 + 4);
              lVar30 = lVar22;
              goto LAB_71030770b8;
            }
            break;
          }
          param_7 = (uint *)(ulong)(uVar18 - 1);
          uVar5 = uVar18 - 1;
          if (param_8 < (byte ****)0xe128c0b43) {
            iVar20 = uVar18 + 1;
            uVar5 = uVar35;
          }
          uVar35 = uVar5;
        } while (iVar20 <= (int)uVar35);
      }
      lVar30 = 0;
      pbVar41 = &DAT_7104742dbb;
LAB_71030770b8:
      if (*pbVar41 == 9) {
        uVar16 = *(undefined8 *)(*(long *)(lVar30 + 0x20) + (long)*(int *)(pbVar41 + 1) * 8);
      }
      else {
        uVar16 = 0;
      }
      *(undefined8 *)(*plVar2 + lVar29 * 0x20) = uVar16;
      if ((*pbVar38 == 0xc) && (uVar35 = *(int *)(pbVar38 + 1) - 1, 0 < *(int *)(pbVar38 + 1))) {
        iVar20 = 0;
        pppplVar42 = (long ****)(*(long *)(lVar22 + 0x28) + (long)*(int *)(pbVar38 + 5));
        do {
          iVar33 = uVar35 + iVar20;
          if (iVar33 < 0) {
            iVar33 = iVar33 + 1;
          }
          uVar18 = iVar33 >> 1;
          ppppbVar17 = (byte ****)(ulong)uVar18;
          param_7 = (uint *)(pppplVar42 + (int)uVar18);
          param_8 = *(byte *****)(*(long *)(lVar22 + 0x20) + (ulong)*param_7 * 8);
          if (param_8 == (byte ****)0xd03ec8529) {
            if (-1 < (int)*(uint *)((long)param_7 + 4)) {
              pbVar41 = pbVar38 + (int)*(uint *)((long)param_7 + 4);
              lVar30 = lVar22;
              goto LAB_7103077168;
            }
            break;
          }
          param_7 = (uint *)(ulong)(uVar18 - 1);
          uVar5 = uVar18 - 1;
          if (param_8 < (byte ****)0xd03ec852a) {
            iVar20 = uVar18 + 1;
            uVar5 = uVar35;
          }
          uVar35 = uVar5;
        } while (iVar20 <= (int)uVar35);
      }
      lVar30 = 0;
      pbVar41 = &DAT_7104742dbb;
LAB_7103077168:
      puVar15 = (uint *)(ulong)*pbVar41;
      if (*pbVar41 == 9) {
        uVar16 = *(undefined8 *)(*(long *)(lVar30 + 0x20) + (long)*(int *)(pbVar41 + 1) * 8);
      }
      else {
        uVar16 = 0;
      }
      *(undefined8 *)(*plVar2 + lVar29 * 0x20 + 8) = uVar16;
      pbVar41 = &DAT_7104742dbb;
      if ((*pbVar38 == 0xc) && (uVar35 = *(int *)(pbVar38 + 1) - 1, 0 < *(int *)(pbVar38 + 1))) {
        puVar15 = *(uint **)(lVar22 + 0x20);
        iVar20 = 0;
        pppplVar42 = (long ****)(*(long *)(lVar22 + 0x28) + (long)*(int *)(pbVar38 + 5));
        do {
          iVar33 = uVar35 + iVar20;
          if (iVar33 < 0) {
            iVar33 = iVar33 + 1;
          }
          uVar18 = iVar33 >> 1;
          ppppbVar17 = (byte ****)(ulong)uVar18;
          param_7 = (uint *)(pppplVar42 + (int)uVar18);
          param_8 = *(byte *****)((long)puVar15 + (ulong)*param_7 * 8);
          if (param_8 == (byte ****)0x101b5250d2) {
            if (-1 < (int)*(uint *)((long)param_7 + 4)) {
              pbVar41 = pbVar38 + (int)*(uint *)((long)param_7 + 4);
            }
            break;
          }
          param_7 = (uint *)(ulong)(uVar18 - 1);
          uVar5 = uVar18 - 1;
          if (param_8 < (byte ****)0x101b5250d3) {
            iVar20 = uVar18 + 1;
            uVar5 = uVar35;
          }
          uVar35 = uVar5;
        } while (iVar20 <= (int)uVar35);
      }
      uVar50 = 0x43240000;
      if (*pbVar41 == 8) {
        uVar50 = *(undefined4 *)(pbVar41 + 1);
      }
      *(undefined4 *)(*plVar2 + lVar29 * 0x20 + 0x10) = uVar50;
      pbVar41 = &DAT_7104742dbb;
      if ((*pbVar38 == 0xc) && (uVar35 = *(int *)(pbVar38 + 1) - 1, 0 < *(int *)(pbVar38 + 1))) {
        puVar15 = *(uint **)(lVar22 + 0x20);
        iVar20 = 0;
        pppplVar42 = (long ****)(*(long *)(lVar22 + 0x28) + (long)*(int *)(pbVar38 + 5));
        do {
          iVar33 = uVar35 + iVar20;
          if (iVar33 < 0) {
            iVar33 = iVar33 + 1;
          }
          uVar18 = iVar33 >> 1;
          ppppbVar17 = (byte ****)(ulong)uVar18;
          param_7 = (uint *)(pppplVar42 + (int)uVar18);
          param_8 = *(byte *****)((long)puVar15 + (ulong)*param_7 * 8);
          if (param_8 == (byte ****)0x12f8f1388d) {
            if (-1 < (int)*(uint *)((long)param_7 + 4)) {
              pbVar41 = pbVar38 + (int)*(uint *)((long)param_7 + 4);
            }
            break;
          }
          param_7 = (uint *)(ulong)(uVar18 - 1);
          uVar5 = uVar18 - 1;
          if (param_8 < (byte ****)0x12f8f1388e) {
            iVar20 = uVar18 + 1;
            uVar5 = uVar35;
          }
          uVar35 = uVar5;
        } while (iVar20 <= (int)uVar35);
      }
      switch(*pbVar41) {
      case 1:
      case 3:
        uVar35 = (uint)pbVar41[1];
        break;
      case 2:
        uVar35 = (uint)(char)pbVar41[1];
        break;
      case 4:
        uVar35 = (uint)*(short *)(pbVar41 + 1);
        break;
      case 5:
        uVar35 = (uint)*(ushort *)(pbVar41 + 1);
        break;
      case 6:
      case 7:
        uVar35 = *(uint *)(pbVar41 + 1);
        break;
      default:
        uVar35 = 6;
      }
      *(uint *)(*plVar2 + lVar29 * 0x20 + 0x14) = uVar35;
      pbVar41 = &DAT_7104742dbb;
      if ((*pbVar38 == 0xc) && (uVar35 = *(int *)(pbVar38 + 1) - 1, 0 < *(int *)(pbVar38 + 1))) {
        puVar15 = *(uint **)(lVar22 + 0x20);
        iVar20 = 0;
        pppplVar42 = (long ****)(*(long *)(lVar22 + 0x28) + (long)*(int *)(pbVar38 + 5));
        do {
          iVar33 = uVar35 + iVar20;
          if (iVar33 < 0) {
            iVar33 = iVar33 + 1;
          }
          uVar18 = iVar33 >> 1;
          ppppbVar17 = (byte ****)(ulong)uVar18;
          param_7 = (uint *)(pppplVar42 + (int)uVar18);
          param_8 = *(byte *****)((long)puVar15 + (ulong)*param_7 * 8);
          if (param_8 == (byte ****)0x10a18c92e9) {
            if (-1 < (int)*(uint *)((long)param_7 + 4)) {
              pbVar41 = pbVar38 + (int)*(uint *)((long)param_7 + 4);
            }
            break;
          }
          param_7 = (uint *)(ulong)(uVar18 - 1);
          uVar5 = uVar18 - 1;
          if (param_8 < (byte ****)0x10a18c92ea) {
            iVar20 = uVar18 + 1;
            uVar5 = uVar35;
          }
          uVar35 = uVar5;
        } while (iVar20 <= (int)uVar35);
      }
      puVar11 = (uint *)(ulong)*pbVar41;
      uVar50 = 0x3f800000;
      if (*pbVar41 == 8) {
        uVar50 = *(undefined4 *)(pbVar41 + 1);
      }
      *(undefined4 *)(*plVar2 + lVar29 * 0x20 + 0x18) = uVar50;
      pbVar41 = &DAT_7104742dbb;
      if ((*pbVar38 == 0xc) && (uVar35 = *(int *)(pbVar38 + 1) - 1, 0 < *(int *)(pbVar38 + 1))) {
        puVar15 = *(uint **)(lVar22 + 0x20);
        puVar11 = (uint *)0x0;
        do {
          uVar18 = (uint)puVar11;
          iVar20 = uVar35 + uVar18;
          if (iVar20 < 0) {
            iVar20 = iVar20 + 1;
          }
          uVar5 = iVar20 >> 1;
          pppplVar42 = (long ****)(ulong)uVar5;
          ppppbVar17 = (byte ****)
                       (*(long *)(lVar22 + 0x28) + (long)*(int *)(pbVar38 + 5) +
                       (long)(int)uVar5 * 8);
          param_7 = *(uint **)((long)puVar15 + (ulong)*(uint *)ppppbVar17 * 8);
          if ((long ****)param_7 == (long ****)0x1413b5e472) {
            if (-1 < (int)*(uint *)((long)ppppbVar17 + 4)) {
              pbVar41 = pbVar38 + (int)*(uint *)((long)ppppbVar17 + 4);
            }
            break;
          }
          ppppbVar17 = (byte ****)(ulong)(uVar5 - 1);
          uVar10 = uVar5 - 1;
          if (param_7 < (long ****)0x1413b5e473) {
            uVar18 = uVar5 + 1;
            uVar10 = uVar35;
          }
          uVar35 = uVar10;
          puVar11 = (uint *)(ulong)uVar18;
        } while ((int)uVar18 <= (int)uVar35);
      }
      uVar50 = 0x41f00000;
      if (*pbVar41 == 8) {
        uVar50 = *(undefined4 *)(pbVar41 + 1);
      }
      lVar22 = lVar29 * 0x20;
      lVar29 = lVar29 + 1;
      *(undefined4 *)(*plVar2 + lVar22 + 0x1c) = uVar50;
      uVar35 = (uint)*pbVar40;
      if (uVar35 - 0xb < 2) {
        if (*(int *)(pbVar40 + 1) <= lVar29) break;
        goto LAB_7103076ff8;
      }
    } while (lVar29 < 0);
  }
  pppbVar21 = *ppppbVar47;
  if ((*(char *)pppbVar21 == '\f') &&
     (iVar20 = *(int *)((long)pppbVar21 + 1) + -1, 0 < *(int *)((long)pppbVar21 + 1))) {
    lVar37 = *param_2;
    iVar33 = 0;
    pbVar40 = &DAT_7104742dbb;
    do {
      iVar4 = iVar20 + iVar33;
      if (iVar4 < 0) {
        iVar4 = iVar4 + 1;
      }
      iVar4 = iVar4 >> 1;
      puVar32 = (uint *)(*(long *)(lVar37 + 0x28) + (long)*(int *)((long)pppbVar21 + 5) +
                        (long)iVar4 * 8);
      uVar36 = *(ulong *)(*(long *)(lVar37 + 0x20) + (ulong)*puVar32 * 8);
      if (uVar36 == 0x1f38d80062) {
        uVar35 = puVar32[1];
        if ((int)uVar35 < 0) goto LAB_7103077514;
        pbVar40 = (byte *)((long)pppbVar21 + (long)(int)uVar35);
        goto LAB_7103077520;
      }
      iVar9 = iVar4 + -1;
      if (uVar36 < 0x1f38d80063) {
        iVar33 = iVar4 + 1;
        iVar9 = iVar20;
      }
      iVar20 = iVar9;
    } while (iVar33 <= iVar20);
    lVar37 = 0;
  }
  else {
LAB_7103077514:
    lVar37 = 0;
    pbVar40 = &DAT_7104742dbb;
  }
LAB_7103077520:
  if (*pbVar40 - 0xb < 2) {
    iVar20 = *(int *)(pbVar40 + 1);
  }
  else {
    iVar20 = 0;
  }
  uVar36 = (ulong)iVar20;
  uVar48 = *(long *)(param_1 + 0x270) - *(long *)(param_1 + 0x268) >> 5;
  plVar2 = (long *)(param_1 + 0x268);
  if (uVar48 < uVar36) {
    FUN_7103079a50(plVar2,uVar36 - uVar48,(long ****)puVar11,(byte ****)puVar15,pppplVar42,
                   ppppbVar17,param_7,param_8);
  }
  else if (uVar48 != uVar36) {
    *(ulong *)(param_1 + 0x270) = *(long *)(param_1 + 0x268) + uVar36 * 0x20;
  }
  uVar35 = (uint)*pbVar40;
  if ((*pbVar40 - 0xb < 2) && (0 < *(int *)(pbVar40 + 1))) {
    lVar29 = 0;
LAB_7103077608:
    do {
      iVar20 = (int)lVar29;
      if (iVar20 < 0) {
LAB_7103077640:
        lVar22 = 0;
        pbVar38 = &DAT_7104742dbb;
      }
      else {
        lVar22 = 0;
        pbVar38 = &DAT_7104742dbb;
        if (uVar35 == 0xb) {
          if (*(int *)(pbVar40 + 1) <= iVar20) goto LAB_7103077640;
          pbVar38 = pbVar40 + *(int *)(pbVar40 + (long)iVar20 * 4 + 5);
          lVar22 = lVar37;
        }
      }
      if ((*pbVar38 == 0xc) && (uVar35 = *(int *)(pbVar38 + 1) - 1, 0 < *(int *)(pbVar38 + 1))) {
        iVar20 = 0;
        pppplVar42 = (long ****)(*(long *)(lVar22 + 0x28) + (long)*(int *)(pbVar38 + 5));
        do {
          iVar33 = uVar35 + iVar20;
          if (iVar33 < 0) {
            iVar33 = iVar33 + 1;
          }
          uVar18 = iVar33 >> 1;
          ppppbVar17 = (byte ****)(ulong)uVar18;
          param_7 = (uint *)(pppplVar42 + (int)uVar18);
          param_8 = *(byte *****)(*(long *)(lVar22 + 0x20) + (ulong)*param_7 * 8);
          if (param_8 == (byte ****)0xe128c0b42) {
            if (-1 < (int)*(uint *)((long)param_7 + 4)) {
              pbVar41 = pbVar38 + (int)*(uint *)((long)param_7 + 4);
              lVar30 = lVar22;
              goto LAB_71030776c8;
            }
            break;
          }
          param_7 = (uint *)(ulong)(uVar18 - 1);
          uVar5 = uVar18 - 1;
          if (param_8 < (byte ****)0xe128c0b43) {
            iVar20 = uVar18 + 1;
            uVar5 = uVar35;
          }
          uVar35 = uVar5;
        } while (iVar20 <= (int)uVar35);
      }
      lVar30 = 0;
      pbVar41 = &DAT_7104742dbb;
LAB_71030776c8:
      if (*pbVar41 == 9) {
        uVar16 = *(undefined8 *)(*(long *)(lVar30 + 0x20) + (long)*(int *)(pbVar41 + 1) * 8);
      }
      else {
        uVar16 = 0;
      }
      *(undefined8 *)(*plVar2 + lVar29 * 0x20) = uVar16;
      if ((*pbVar38 == 0xc) && (uVar35 = *(int *)(pbVar38 + 1) - 1, 0 < *(int *)(pbVar38 + 1))) {
        iVar20 = 0;
        pppplVar42 = (long ****)(*(long *)(lVar22 + 0x28) + (long)*(int *)(pbVar38 + 5));
        do {
          iVar33 = uVar35 + iVar20;
          if (iVar33 < 0) {
            iVar33 = iVar33 + 1;
          }
          uVar18 = iVar33 >> 1;
          ppppbVar17 = (byte ****)(ulong)uVar18;
          param_7 = (uint *)(pppplVar42 + (int)uVar18);
          param_8 = *(byte *****)(*(long *)(lVar22 + 0x20) + (ulong)*param_7 * 8);
          if (param_8 == (byte ****)0xd03ec8529) {
            if (-1 < (int)*(uint *)((long)param_7 + 4)) {
              pbVar41 = pbVar38 + (int)*(uint *)((long)param_7 + 4);
              lVar30 = lVar22;
              goto LAB_7103077778;
            }
            break;
          }
          param_7 = (uint *)(ulong)(uVar18 - 1);
          uVar5 = uVar18 - 1;
          if (param_8 < (byte ****)0xd03ec852a) {
            iVar20 = uVar18 + 1;
            uVar5 = uVar35;
          }
          uVar35 = uVar5;
        } while (iVar20 <= (int)uVar35);
      }
      lVar30 = 0;
      pbVar41 = &DAT_7104742dbb;
LAB_7103077778:
      puVar15 = (uint *)(ulong)*pbVar41;
      if (*pbVar41 == 9) {
        uVar16 = *(undefined8 *)(*(long *)(lVar30 + 0x20) + (long)*(int *)(pbVar41 + 1) * 8);
      }
      else {
        uVar16 = 0;
      }
      *(undefined8 *)(*plVar2 + lVar29 * 0x20 + 8) = uVar16;
      pbVar41 = &DAT_7104742dbb;
      if ((*pbVar38 == 0xc) && (uVar35 = *(int *)(pbVar38 + 1) - 1, 0 < *(int *)(pbVar38 + 1))) {
        puVar15 = *(uint **)(lVar22 + 0x20);
        iVar20 = 0;
        pppplVar42 = (long ****)(*(long *)(lVar22 + 0x28) + (long)*(int *)(pbVar38 + 5));
        do {
          iVar33 = uVar35 + iVar20;
          if (iVar33 < 0) {
            iVar33 = iVar33 + 1;
          }
          uVar18 = iVar33 >> 1;
          ppppbVar17 = (byte ****)(ulong)uVar18;
          param_7 = (uint *)(pppplVar42 + (int)uVar18);
          param_8 = *(byte *****)((long)puVar15 + (ulong)*param_7 * 8);
          if (param_8 == (byte ****)0x101b5250d2) {
            if (-1 < (int)*(uint *)((long)param_7 + 4)) {
              pbVar41 = pbVar38 + (int)*(uint *)((long)param_7 + 4);
            }
            break;
          }
          param_7 = (uint *)(ulong)(uVar18 - 1);
          uVar5 = uVar18 - 1;
          if (param_8 < (byte ****)0x101b5250d3) {
            iVar20 = uVar18 + 1;
            uVar5 = uVar35;
          }
          uVar35 = uVar5;
        } while (iVar20 <= (int)uVar35);
      }
      uVar50 = 0x43290000;
      if (*pbVar41 == 8) {
        uVar50 = *(undefined4 *)(pbVar41 + 1);
      }
      *(undefined4 *)(*plVar2 + lVar29 * 0x20 + 0x10) = uVar50;
      pbVar41 = &DAT_7104742dbb;
      if ((*pbVar38 == 0xc) && (uVar35 = *(int *)(pbVar38 + 1) - 1, 0 < *(int *)(pbVar38 + 1))) {
        puVar15 = *(uint **)(lVar22 + 0x20);
        iVar20 = 0;
        pppplVar42 = (long ****)(*(long *)(lVar22 + 0x28) + (long)*(int *)(pbVar38 + 5));
        do {
          iVar33 = uVar35 + iVar20;
          if (iVar33 < 0) {
            iVar33 = iVar33 + 1;
          }
          uVar18 = iVar33 >> 1;
          ppppbVar17 = (byte ****)(ulong)uVar18;
          param_7 = (uint *)(pppplVar42 + (int)uVar18);
          param_8 = *(byte *****)((long)puVar15 + (ulong)*param_7 * 8);
          if (param_8 == (byte ****)0x12f8f1388d) {
            if (-1 < (int)*(uint *)((long)param_7 + 4)) {
              pbVar41 = pbVar38 + (int)*(uint *)((long)param_7 + 4);
            }
            break;
          }
          param_7 = (uint *)(ulong)(uVar18 - 1);
          uVar5 = uVar18 - 1;
          if (param_8 < (byte ****)0x12f8f1388e) {
            iVar20 = uVar18 + 1;
            uVar5 = uVar35;
          }
          uVar35 = uVar5;
        } while (iVar20 <= (int)uVar35);
      }
      switch(*pbVar41) {
      case 1:
      case 3:
        uVar35 = (uint)pbVar41[1];
        break;
      case 2:
        uVar35 = (uint)(char)pbVar41[1];
        break;
      case 4:
        uVar35 = (uint)*(short *)(pbVar41 + 1);
        break;
      case 5:
        uVar35 = (uint)*(ushort *)(pbVar41 + 1);
        break;
      case 6:
      case 7:
        uVar35 = *(uint *)(pbVar41 + 1);
        break;
      default:
        uVar35 = 0;
      }
      *(uint *)(*plVar2 + lVar29 * 0x20 + 0x14) = uVar35;
      pbVar41 = &DAT_7104742dbb;
      if ((*pbVar38 == 0xc) && (uVar35 = *(int *)(pbVar38 + 1) - 1, 0 < *(int *)(pbVar38 + 1))) {
        puVar15 = *(uint **)(lVar22 + 0x20);
        iVar20 = 0;
        pppplVar42 = (long ****)(*(long *)(lVar22 + 0x28) + (long)*(int *)(pbVar38 + 5));
        do {
          iVar33 = uVar35 + iVar20;
          if (iVar33 < 0) {
            iVar33 = iVar33 + 1;
          }
          uVar18 = iVar33 >> 1;
          ppppbVar17 = (byte ****)(ulong)uVar18;
          param_7 = (uint *)(pppplVar42 + (int)uVar18);
          param_8 = *(byte *****)((long)puVar15 + (ulong)*param_7 * 8);
          if (param_8 == (byte ****)0x10a18c92e9) {
            if (-1 < (int)*(uint *)((long)param_7 + 4)) {
              pbVar41 = pbVar38 + (int)*(uint *)((long)param_7 + 4);
            }
            break;
          }
          param_7 = (uint *)(ulong)(uVar18 - 1);
          uVar5 = uVar18 - 1;
          if (param_8 < (byte ****)0x10a18c92ea) {
            iVar20 = uVar18 + 1;
            uVar5 = uVar35;
          }
          uVar35 = uVar5;
        } while (iVar20 <= (int)uVar35);
      }
      puVar11 = (uint *)(ulong)*pbVar41;
      uVar50 = 0x3f800000;
      if (*pbVar41 == 8) {
        uVar50 = *(undefined4 *)(pbVar41 + 1);
      }
      *(undefined4 *)(*plVar2 + lVar29 * 0x20 + 0x18) = uVar50;
      pbVar41 = &DAT_7104742dbb;
      if ((*pbVar38 == 0xc) && (uVar35 = *(int *)(pbVar38 + 1) - 1, 0 < *(int *)(pbVar38 + 1))) {
        puVar15 = *(uint **)(lVar22 + 0x20);
        puVar11 = (uint *)0x0;
        do {
          uVar18 = (uint)puVar11;
          iVar20 = uVar35 + uVar18;
          if (iVar20 < 0) {
            iVar20 = iVar20 + 1;
          }
          uVar5 = iVar20 >> 1;
          pppplVar42 = (long ****)(ulong)uVar5;
          ppppbVar17 = (byte ****)
                       (*(long *)(lVar22 + 0x28) + (long)*(int *)(pbVar38 + 5) +
                       (long)(int)uVar5 * 8);
          param_7 = *(uint **)((long)puVar15 + (ulong)*(uint *)ppppbVar17 * 8);
          if ((long ****)param_7 == (long ****)0x1413b5e472) {
            if (-1 < (int)*(uint *)((long)ppppbVar17 + 4)) {
              pbVar41 = pbVar38 + (int)*(uint *)((long)ppppbVar17 + 4);
            }
            break;
          }
          ppppbVar17 = (byte ****)(ulong)(uVar5 - 1);
          uVar10 = uVar5 - 1;
          if (param_7 < (long ****)0x1413b5e473) {
            uVar18 = uVar5 + 1;
            uVar10 = uVar35;
          }
          uVar35 = uVar10;
          puVar11 = (uint *)(ulong)uVar18;
        } while ((int)uVar18 <= (int)uVar35);
      }
      uVar50 = 0x41f00000;
      if (*pbVar41 == 8) {
        uVar50 = *(undefined4 *)(pbVar41 + 1);
      }
      lVar22 = lVar29 * 0x20;
      lVar29 = lVar29 + 1;
      *(undefined4 *)(*plVar2 + lVar22 + 0x1c) = uVar50;
      uVar35 = (uint)*pbVar40;
      if (uVar35 - 0xb < 2) {
        if (*(int *)(pbVar40 + 1) <= lVar29) break;
        goto LAB_7103077608;
      }
    } while (lVar29 < 0);
  }
  pppbVar21 = *ppppbVar47;
  if ((*(char *)pppbVar21 == '\f') &&
     (iVar20 = *(int *)((long)pppbVar21 + 1) + -1, 0 < *(int *)((long)pppbVar21 + 1))) {
    iVar33 = 0;
    pcVar28 = "";
    do {
      iVar4 = iVar20 + iVar33;
      if (iVar4 < 0) {
        iVar4 = iVar4 + 1;
      }
      iVar4 = iVar4 >> 1;
      puVar32 = (uint *)(*(long *)(*param_2 + 0x28) + (long)*(int *)((long)pppbVar21 + 5) +
                        (long)iVar4 * 8);
      uVar36 = *(ulong *)(*(long *)(*param_2 + 0x20) + (ulong)*puVar32 * 8);
      if (uVar36 == 0x1de2a6c6da) {
        uVar35 = puVar32[1];
        if ((int)uVar35 < 0) goto LAB_7103077b20;
        pcVar28 = (char *)((long)pppbVar21 + (long)(int)uVar35);
        break;
      }
      iVar9 = iVar4 + -1;
      if (uVar36 < 0x1de2a6c6db) {
        iVar33 = iVar4 + 1;
        iVar9 = iVar20;
      }
      iVar20 = iVar9;
    } while (iVar33 <= iVar20);
  }
  else {
LAB_7103077b20:
    pcVar28 = "";
  }
  if (*pcVar28 == '\b') {
    uVar50 = *(undefined4 *)(pcVar28 + 1);
  }
  else {
    uVar50 = 0x43480000;
  }
  *(undefined4 *)(param_1 + 0x280) = uVar50;
  pppbVar21 = *ppppbVar47;
  if ((*(char *)pppbVar21 == '\f') &&
     (iVar20 = *(int *)((long)pppbVar21 + 1) + -1, 0 < *(int *)((long)pppbVar21 + 1))) {
    iVar33 = 0;
    pcVar28 = "";
    do {
      iVar4 = iVar20 + iVar33;
      if (iVar4 < 0) {
        iVar4 = iVar4 + 1;
      }
      iVar4 = iVar4 >> 1;
      puVar32 = (uint *)(*(long *)(*param_2 + 0x28) + (long)*(int *)((long)pppbVar21 + 5) +
                        (long)iVar4 * 8);
      uVar36 = *(ulong *)(*(long *)(*param_2 + 0x20) + (ulong)*puVar32 * 8);
      if (uVar36 == 0x165f46a040) {
        uVar35 = puVar32[1];
        if ((int)uVar35 < 0) goto LAB_7103077be0;
        pcVar28 = (char *)((long)pppbVar21 + (long)(int)uVar35);
        break;
      }
      iVar9 = iVar4 + -1;
      if (uVar36 < 0x165f46a041) {
        iVar33 = iVar4 + 1;
        iVar9 = iVar20;
      }
      iVar20 = iVar9;
    } while (iVar33 <= iVar20);
  }
  else {
LAB_7103077be0:
    pcVar28 = "";
  }
  if (*pcVar28 == '\b') {
    uVar50 = *(undefined4 *)(pcVar28 + 1);
  }
  else {
    uVar50 = 0x44160000;
  }
  *(undefined4 *)(param_1 + 0x284) = uVar50;
  pppbVar21 = *ppppbVar47;
  if ((*(char *)pppbVar21 == '\f') &&
     (iVar20 = *(int *)((long)pppbVar21 + 1) + -1, 0 < *(int *)((long)pppbVar21 + 1))) {
    lVar37 = *param_2;
    iVar33 = 0;
    pcVar28 = "";
    do {
      iVar4 = iVar20 + iVar33;
      if (iVar4 < 0) {
        iVar4 = iVar4 + 1;
      }
      iVar4 = iVar4 >> 1;
      puVar32 = (uint *)(*(long *)(lVar37 + 0x28) + (long)*(int *)((long)pppbVar21 + 5) +
                        (long)iVar4 * 8);
      uVar36 = *(ulong *)(*(long *)(lVar37 + 0x20) + (ulong)*puVar32 * 8);
      if (uVar36 == 0x17727d2c37) {
        uVar35 = puVar32[1];
        if ((int)uVar35 < 0) goto LAB_7103077ca4;
        pcVar28 = (char *)((long)pppbVar21 + (long)(int)uVar35);
        goto LAB_7103077cb0;
      }
      iVar9 = iVar4 + -1;
      if (uVar36 < 0x17727d2c38) {
        iVar33 = iVar4 + 1;
        iVar9 = iVar20;
      }
      iVar20 = iVar9;
    } while (iVar33 <= iVar20);
    lVar37 = 0;
  }
  else {
LAB_7103077ca4:
    lVar37 = 0;
    pcVar28 = "";
  }
LAB_7103077cb0:
  if ((*pcVar28 == '\f') && (iVar20 = *(int *)(pcVar28 + 1) + -1, 0 < *(int *)(pcVar28 + 1))) {
    iVar33 = 0;
    pcVar31 = "";
    do {
      iVar4 = iVar20 + iVar33;
      if (iVar4 < 0) {
        iVar4 = iVar4 + 1;
      }
      iVar4 = iVar4 >> 1;
      puVar32 = (uint *)(*(long *)(lVar37 + 0x28) + (long)*(int *)(pcVar28 + 5) + (long)iVar4 * 8);
      uVar36 = *(ulong *)(*(long *)(lVar37 + 0x20) + (ulong)*puVar32 * 8);
      if (uVar36 == 0xd0a529f50) {
        uVar35 = puVar32[1];
        if ((int)uVar35 < 0) goto LAB_7103077d3c;
        pcVar31 = pcVar28 + (int)uVar35;
        break;
      }
      iVar9 = iVar4 + -1;
      if (uVar36 < 0xd0a529f51) {
        iVar33 = iVar4 + 1;
        iVar9 = iVar20;
      }
      iVar20 = iVar9;
    } while (iVar33 <= iVar20);
  }
  else {
LAB_7103077d3c:
    pcVar31 = "";
  }
  switch(*pcVar31) {
  case '\x01':
  case '\x03':
    uVar35 = (uint)(byte)pcVar31[1];
    break;
  case '\x02':
    uVar35 = (uint)pcVar31[1];
    break;
  case '\x04':
    uVar35 = (uint)*(short *)(pcVar31 + 1);
    break;
  case '\x05':
    uVar35 = (uint)*(ushort *)(pcVar31 + 1);
    break;
  case '\x06':
  case '\a':
    uVar35 = *(uint *)(pcVar31 + 1);
    break;
  default:
    uVar35 = 1;
  }
  *(bool *)(param_1 + 0x288) = uVar35 != 0;
  if ((*pcVar28 == '\f') && (iVar20 = *(int *)(pcVar28 + 1) + -1, 0 < *(int *)(pcVar28 + 1))) {
    iVar33 = 0;
    pcVar31 = "";
    do {
      iVar4 = iVar20 + iVar33;
      if (iVar4 < 0) {
        iVar4 = iVar4 + 1;
      }
      iVar4 = iVar4 >> 1;
      puVar32 = (uint *)(*(long *)(lVar37 + 0x28) + (long)*(int *)(pcVar28 + 5) + (long)iVar4 * 8);
      uVar36 = *(ulong *)(*(long *)(lVar37 + 0x20) + (ulong)*puVar32 * 8);
      if (uVar36 == 0x9922fd43e) {
        uVar35 = puVar32[1];
        if ((int)uVar35 < 0) goto LAB_7103077e2c;
        pcVar31 = pcVar28 + (int)uVar35;
        break;
      }
      iVar9 = iVar4 + -1;
      if (uVar36 < 0x9922fd43f) {
        iVar33 = iVar4 + 1;
        iVar9 = iVar20;
      }
      iVar20 = iVar9;
    } while (iVar33 <= iVar20);
  }
  else {
LAB_7103077e2c:
    pcVar31 = "";
  }
  switch(*pcVar31) {
  case '\x01':
  case '\x03':
    uVar35 = (uint)(byte)pcVar31[1];
    break;
  case '\x02':
    uVar35 = (uint)pcVar31[1];
    break;
  case '\x04':
    uVar35 = (uint)*(short *)(pcVar31 + 1);
    break;
  case '\x05':
    uVar35 = (uint)*(ushort *)(pcVar31 + 1);
    break;
  case '\x06':
  case '\a':
    uVar35 = *(uint *)(pcVar31 + 1);
    break;
  default:
    uVar35 = 1;
  }
  *(bool *)(param_1 + 0x289) = uVar35 != 0;
  if ((*pcVar28 == '\f') && (iVar20 = *(int *)(pcVar28 + 1) + -1, 0 < *(int *)(pcVar28 + 1))) {
    iVar33 = 0;
    pcVar31 = "";
    do {
      iVar4 = iVar20 + iVar33;
      if (iVar4 < 0) {
        iVar4 = iVar4 + 1;
      }
      iVar4 = iVar4 >> 1;
      puVar32 = (uint *)(*(long *)(lVar37 + 0x28) + (long)*(int *)(pcVar28 + 5) + (long)iVar4 * 8);
      uVar36 = *(ulong *)(*(long *)(lVar37 + 0x20) + (ulong)*puVar32 * 8);
      if (uVar36 == 0xcd0581135) {
        uVar35 = puVar32[1];
        if ((int)uVar35 < 0) goto LAB_7103077f1c;
        pcVar31 = pcVar28 + (int)uVar35;
        break;
      }
      iVar9 = iVar4 + -1;
      if (uVar36 < 0xcd0581136) {
        iVar33 = iVar4 + 1;
        iVar9 = iVar20;
      }
      iVar20 = iVar9;
    } while (iVar33 <= iVar20);
  }
  else {
LAB_7103077f1c:
    pcVar31 = "";
  }
  switch(*pcVar31) {
  case '\x01':
  case '\x03':
    uVar35 = (uint)(byte)pcVar31[1];
    break;
  case '\x02':
    uVar35 = (uint)pcVar31[1];
    break;
  case '\x04':
    uVar35 = (uint)*(short *)(pcVar31 + 1);
    break;
  case '\x05':
    uVar35 = (uint)*(ushort *)(pcVar31 + 1);
    break;
  case '\x06':
  case '\a':
    uVar35 = *(uint *)(pcVar31 + 1);
    break;
  default:
    uVar35 = 1;
  }
  *(bool *)(param_1 + 0x28a) = uVar35 != 0;
  pppbVar21 = *ppppbVar47;
  if ((*(char *)pppbVar21 == '\f') &&
     (iVar20 = *(int *)((long)pppbVar21 + 1) + -1, 0 < *(int *)((long)pppbVar21 + 1))) {
    iVar33 = 0;
    pcVar28 = "";
    do {
      iVar4 = iVar20 + iVar33;
      if (iVar4 < 0) {
        iVar4 = iVar4 + 1;
      }
      iVar4 = iVar4 >> 1;
      puVar32 = (uint *)(*(long *)(*param_2 + 0x28) + (long)*(int *)((long)pppbVar21 + 5) +
                        (long)iVar4 * 8);
      uVar36 = *(ulong *)(*(long *)(*param_2 + 0x20) + (ulong)*puVar32 * 8);
      if (uVar36 == 0x1c7803324e) {
        uVar35 = puVar32[1];
        if ((int)uVar35 < 0) goto LAB_7103078018;
        pcVar28 = (char *)((long)pppbVar21 + (long)(int)uVar35);
        break;
      }
      iVar9 = iVar4 + -1;
      if (uVar36 < 0x1c7803324f) {
        iVar33 = iVar4 + 1;
        iVar9 = iVar20;
      }
      iVar20 = iVar9;
    } while (iVar33 <= iVar20);
  }
  else {
LAB_7103078018:
    pcVar28 = "";
  }
  if (*pcVar28 == '\b') {
    uVar50 = *(undefined4 *)(pcVar28 + 1);
  }
  else {
    uVar50 = 0x41c80000;
  }
  *(undefined4 *)(param_1 + 0x28c) = uVar50;
  pppbVar21 = *ppppbVar47;
  if ((*(char *)pppbVar21 == '\f') &&
     (iVar20 = *(int *)((long)pppbVar21 + 1) + -1, 0 < *(int *)((long)pppbVar21 + 1))) {
    iVar33 = 0;
    pcVar28 = "";
    do {
      iVar4 = iVar20 + iVar33;
      if (iVar4 < 0) {
        iVar4 = iVar4 + 1;
      }
      iVar4 = iVar4 >> 1;
      puVar32 = (uint *)(*(long *)(*param_2 + 0x28) + (long)*(int *)((long)pppbVar21 + 5) +
                        (long)iVar4 * 8);
      uVar36 = *(ulong *)(*(long *)(*param_2 + 0x20) + (ulong)*puVar32 * 8);
      if (uVar36 == 0x14971d85b2) {
        uVar35 = puVar32[1];
        if ((int)uVar35 < 0) goto LAB_71030780d4;
        pcVar28 = (char *)((long)pppbVar21 + (long)(int)uVar35);
        break;
      }
      iVar9 = iVar4 + -1;
      if (uVar36 < 0x14971d85b3) {
        iVar33 = iVar4 + 1;
        iVar9 = iVar20;
      }
      iVar20 = iVar9;
    } while (iVar33 <= iVar20);
  }
  else {
LAB_71030780d4:
    pcVar28 = "";
  }
  switch(*pcVar28) {
  case '\x01':
  case '\x03':
    uVar35 = (uint)(byte)pcVar28[1];
    break;
  case '\x02':
    uVar35 = (uint)pcVar28[1];
    break;
  case '\x04':
    uVar35 = (uint)*(short *)(pcVar28 + 1);
    break;
  case '\x05':
    uVar35 = (uint)*(ushort *)(pcVar28 + 1);
    break;
  case '\x06':
  case '\a':
    uVar35 = *(uint *)(pcVar28 + 1);
    break;
  default:
    uVar35 = 4;
  }
  *(uint *)(param_1 + 0x290) = uVar35;
  pppbVar21 = *ppppbVar47;
  if ((*(char *)pppbVar21 == '\f') &&
     (iVar20 = *(int *)((long)pppbVar21 + 1) + -1, 0 < *(int *)((long)pppbVar21 + 1))) {
    local_a8 = *param_2;
    pbVar40 = &DAT_7104742dbb;
    iVar33 = 0;
    do {
      iVar4 = iVar20 + iVar33;
      if (iVar4 < 0) {
        iVar4 = iVar4 + 1;
      }
      iVar4 = iVar4 >> 1;
      puVar32 = (uint *)(*(long *)(local_a8 + 0x28) + (long)*(int *)((long)pppbVar21 + 5) +
                        (long)iVar4 * 8);
      uVar36 = *(ulong *)(*(long *)(local_a8 + 0x20) + (ulong)*puVar32 * 8);
      if (uVar36 == 0x15a4ad4ce7) {
        uVar35 = puVar32[1];
        if ((int)uVar35 < 0) goto LAB_71030781d0;
        pbVar40 = (byte *)((long)pppbVar21 + (long)(int)uVar35);
        goto LAB_71030781dc;
      }
      iVar9 = iVar4 + -1;
      if (uVar36 < 0x15a4ad4ce8) {
        iVar33 = iVar4 + 1;
        iVar9 = iVar20;
      }
      iVar20 = iVar9;
    } while (iVar33 <= iVar20);
    local_a8 = 0;
  }
  else {
LAB_71030781d0:
    local_a8 = 0;
    pbVar40 = &DAT_7104742dbb;
  }
LAB_71030781dc:
  if (*pbVar40 - 0xb < 2) {
    iVar20 = *(int *)(pbVar40 + 1);
  }
  else {
    iVar20 = 0;
  }
  pbVar38 = *(byte **)(param_1 + 0x2a0);
  pbVar41 = *(byte **)(param_1 + 0x298);
  uVar36 = (ulong)iVar20;
  lVar37 = (long)pbVar38 - (long)pbVar41 >> 3;
  plVar2 = (long *)(param_1 + 0x298);
  if ((ulong)(lVar37 * -0x3333333333333333) < uVar36) {
    uVar48 = uVar36 + lVar37 * 0x3333333333333333;
    if ((ulong)((*(long *)(param_1 + 0x2a8) - (long)pbVar38 >> 3) * -0x3333333333333333) < uVar48) {
      if (iVar20 < 0) goto LAB_7103079628;
      lVar29 = *(long *)(param_1 + 0x2a8) - (long)pbVar41 >> 3;
      if ((ulong)(lVar29 * -0x3333333333333333) < 0x333333333333333) {
        uVar23 = lVar29 * -0x6666666666666666;
        uVar49 = uVar36;
        if (uVar36 <= uVar23) {
          uVar49 = uVar23;
        }
        if (uVar49 != 0) goto LAB_7103078324;
        lVar29 = 0;
      }
      else {
        uVar49 = 0x666666666666666;
LAB_7103078324:
        ppplVar25 = (long ***)(uVar49 * 0x28);
        if (ppplVar25 == (long ***)0x0) {
          ppplVar25 = (long ***)0x1;
        }
        lVar29 = FUN_710392e290(0x10,ppplVar25,(long ****)puVar11,(byte ****)puVar15,pppplVar42,
                                ppppbVar17,param_7,param_8);
        if (lVar29 == 0) {
          if (DAT_7105332f00 != (long *)0x0) {
            local_84 = 0;
            pppplVar44 = &local_90;
            local_90 = ppplVar25;
            uVar23 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_84);
            if (((uVar23 & 1) != 0) &&
               (lVar29 = FUN_710392e290(0x10,ppplVar25,pppplVar44,(byte ****)puVar15,pppplVar42,
                                        ppppbVar17,param_7,param_8), lVar29 != 0))
            goto LAB_7103078394;
          }
          lVar29 = 0;
        }
      }
LAB_7103078394:
      puVar27 = (undefined8 *)(lVar29 + lVar37 * 8);
      lVar37 = lVar29 + uVar49 * 0x28;
      puVar11 = (uint *)(uVar48 * 0x28);
      memset(puVar27,0,(size_t)puVar11);
      lVar29 = lVar29 + uVar36 * 0x28;
      if (pbVar38 == pbVar41) {
        *(undefined8 **)(param_1 + 0x298) = puVar27;
        *(long *)(param_1 + 0x2a0) = lVar29;
        *(long *)(param_1 + 0x2a8) = lVar37;
      }
      else {
        do {
          pbVar39 = pbVar38 + -0x28;
          uVar16 = *(undefined8 *)(pbVar38 + -0x20);
          uVar6 = *(undefined8 *)(pbVar38 + -0x18);
          puVar45 = puVar27 + -5;
          *puVar45 = *(undefined8 *)pbVar39;
          puVar27[-4] = uVar16;
          puVar27[-3] = uVar6;
          uVar16 = *(undefined8 *)(pbVar38 + -0x10);
          bVar7 = pbVar38[-8];
          pbVar38[-0x20] = 0;
          pbVar38[-0x1f] = 0;
          pbVar38[-0x1e] = 0;
          pbVar38[-0x1d] = 0;
          pbVar38[-0x1c] = 0;
          pbVar38[-0x1b] = 0;
          pbVar38[-0x1a] = 0;
          pbVar38[-0x19] = 0;
          pbVar38[-0x18] = 0;
          pbVar38[-0x17] = 0;
          pbVar38[-0x16] = 0;
          pbVar38[-0x15] = 0;
          pbVar38[-0x14] = 0;
          pbVar38[-0x13] = 0;
          pbVar38[-0x12] = 0;
          pbVar38[-0x11] = 0;
          pbVar39[0] = 0;
          pbVar39[1] = 0;
          pbVar39[2] = 0;
          pbVar39[3] = 0;
          pbVar39[4] = 0;
          pbVar39[5] = 0;
          pbVar39[6] = 0;
          pbVar39[7] = 0;
          *(byte *)(puVar27 + -1) = bVar7;
          puVar27[-2] = uVar16;
          pbVar38 = pbVar39;
          puVar27 = puVar45;
        } while (pbVar41 != pbVar39);
        pbVar41 = *(byte **)(param_1 + 0x298);
        pbVar38 = *(byte **)(param_1 + 0x2a0);
        *(long *)(param_1 + 0x2a0) = lVar29;
        *(undefined8 **)(param_1 + 0x298) = puVar45;
        *(long *)(param_1 + 0x2a8) = lVar37;
        while (pbVar39 = pbVar38, pbVar39 != pbVar41) {
          pbVar38 = pbVar39 + -0x28;
          if (((*pbVar38 & 1) != 0) && (*(ulong *)(pbVar39 + -0x18) != 0)) {
            FUN_710392eb40(*(ulong *)(pbVar39 + -0x18));
          }
        }
      }
      if (pbVar41 != (byte *)0x0) {
        FUN_710392eb40((ulong)pbVar41);
      }
    }
    else {
      uVar36 = uVar48;
      if ((uVar48 & 1) != 0) {
        pbVar38[0x18] = 0;
        pbVar38[0x19] = 0;
        pbVar38[0x1a] = 0;
        pbVar38[0x1b] = 0;
        pbVar38[0x1c] = 0;
        pbVar38[0x1d] = 0;
        pbVar38[0x1e] = 0;
        pbVar38[0x1f] = 0;
        pbVar38[0x20] = 0;
        pbVar38[0x21] = 0;
        pbVar38[0x22] = 0;
        pbVar38[0x23] = 0;
        pbVar38[0x24] = 0;
        pbVar38[0x25] = 0;
        pbVar38[0x26] = 0;
        pbVar38[0x27] = 0;
        pbVar38[0] = 0;
        pbVar38[1] = 0;
        pbVar38[2] = 0;
        pbVar38[3] = 0;
        pbVar38[4] = 0;
        pbVar38[5] = 0;
        pbVar38[6] = 0;
        pbVar38[7] = 0;
        pbVar38[8] = 0;
        pbVar38[9] = 0;
        pbVar38[10] = 0;
        pbVar38[0xb] = 0;
        pbVar38[0xc] = 0;
        pbVar38[0xd] = 0;
        pbVar38[0xe] = 0;
        pbVar38[0xf] = 0;
        pbVar38[0x10] = 0;
        pbVar38[0x11] = 0;
        pbVar38[0x12] = 0;
        pbVar38[0x13] = 0;
        pbVar38[0x14] = 0;
        pbVar38[0x15] = 0;
        pbVar38[0x16] = 0;
        pbVar38[0x17] = 0;
        pbVar38 = (byte *)(*(long *)(param_1 + 0x2a0) + 0x28);
        uVar36 = uVar48 - 1;
        *(byte **)(param_1 + 0x2a0) = pbVar38;
      }
      if (uVar48 != 1) {
        do {
          pbVar38[0x18] = 0;
          pbVar38[0x19] = 0;
          pbVar38[0x1a] = 0;
          pbVar38[0x1b] = 0;
          pbVar38[0x1c] = 0;
          pbVar38[0x1d] = 0;
          pbVar38[0x1e] = 0;
          pbVar38[0x1f] = 0;
          pbVar38[0x20] = 0;
          pbVar38[0x21] = 0;
          pbVar38[0x22] = 0;
          pbVar38[0x23] = 0;
          pbVar38[0x24] = 0;
          pbVar38[0x25] = 0;
          pbVar38[0x26] = 0;
          pbVar38[0x27] = 0;
          uVar36 = uVar36 - 2;
          pbVar38[8] = 0;
          pbVar38[9] = 0;
          pbVar38[10] = 0;
          pbVar38[0xb] = 0;
          pbVar38[0xc] = 0;
          pbVar38[0xd] = 0;
          pbVar38[0xe] = 0;
          pbVar38[0xf] = 0;
          pbVar38[0x10] = 0;
          pbVar38[0x11] = 0;
          pbVar38[0x12] = 0;
          pbVar38[0x13] = 0;
          pbVar38[0x14] = 0;
          pbVar38[0x15] = 0;
          pbVar38[0x16] = 0;
          pbVar38[0x17] = 0;
          pbVar38[0] = 0;
          pbVar38[1] = 0;
          pbVar38[2] = 0;
          pbVar38[3] = 0;
          pbVar38[4] = 0;
          pbVar38[5] = 0;
          pbVar38[6] = 0;
          pbVar38[7] = 0;
          lVar37 = *(long *)(param_1 + 0x2a0);
          *(long *)(param_1 + 0x2a0) = lVar37 + 0x28;
          *(undefined8 *)(lVar37 + 0x40) = 0;
          *(undefined8 *)(lVar37 + 0x48) = 0;
          *(undefined8 *)(lVar37 + 0x28) = 0;
          *(undefined8 *)(lVar37 + 0x30) = 0;
          *(undefined8 *)(lVar37 + 0x38) = 0;
          pbVar38 = (byte *)(*(long *)(param_1 + 0x2a0) + 0x28);
          *(byte **)(param_1 + 0x2a0) = pbVar38;
        } while (uVar36 != 0);
      }
    }
  }
  else if (lVar37 * -0x3333333333333333 - uVar36 != 0) {
    while (pbVar39 = pbVar38, pbVar41 + uVar36 * 0x28 != pbVar39) {
      pbVar38 = pbVar39 + -0x28;
      if (((*pbVar38 & 1) != 0) && (*(ulong *)(pbVar39 + -0x18) != 0)) {
        FUN_710392eb40(*(ulong *)(pbVar39 + -0x18));
      }
    }
    *(byte **)(param_1 + 0x2a0) = pbVar41 + uVar36 * 0x28;
  }
  uVar35 = (uint)*pbVar40;
  if ((*pbVar40 - 0xb < 2) && (0 < *(int *)(pbVar40 + 1))) {
    lVar37 = 0;
LAB_71030784a8:
    do {
      iVar20 = (int)lVar37;
      if (iVar20 < 0) {
LAB_71030784e0:
        lVar29 = 0;
        pbVar38 = &DAT_7104742dbb;
      }
      else {
        pbVar38 = &DAT_7104742dbb;
        lVar29 = 0;
        if (uVar35 == 0xb) {
          if (*(int *)(pbVar40 + 1) <= iVar20) goto LAB_71030784e0;
          pbVar38 = pbVar40 + *(int *)(pbVar40 + (long)iVar20 * 4 + 5);
          lVar29 = local_a8;
        }
      }
      if ((*pbVar38 == 0xc) && (iVar20 = *(int *)(pbVar38 + 1) + -1, 0 < *(int *)(pbVar38 + 1))) {
        iVar33 = 0;
        do {
          iVar4 = iVar20 + iVar33;
          if (iVar4 < 0) {
            iVar4 = iVar4 + 1;
          }
          iVar4 = iVar4 >> 1;
          uVar36 = *(ulong *)(*(long *)(lVar29 + 0x20) +
                             (ulong)*(uint *)(*(long *)(lVar29 + 0x28) + (long)*(int *)(pbVar38 + 5)
                                             + (long)iVar4 * 8) * 8);
          if (uVar36 == 0x16510da628) break;
          iVar9 = iVar4 + -1;
          if (uVar36 < 0x16510da629) {
            iVar33 = iVar4 + 1;
            iVar9 = iVar20;
          }
          iVar20 = iVar9;
        } while (iVar33 <= iVar20);
      }
      std::string::assign((char *)(*plVar2 + lVar37 * 0x28));
      pbVar41 = &DAT_7104742dbb;
      if ((*pbVar38 == 0xc) && (iVar20 = *(int *)(pbVar38 + 1) + -1, 0 < *(int *)(pbVar38 + 1))) {
        iVar33 = 0;
        do {
          iVar4 = iVar20 + iVar33;
          if (iVar4 < 0) {
            iVar4 = iVar4 + 1;
          }
          iVar4 = iVar4 >> 1;
          puVar32 = (uint *)(*(long *)(lVar29 + 0x28) + (long)*(int *)(pbVar38 + 5) +
                            (long)iVar4 * 8);
          uVar36 = *(ulong *)(*(long *)(lVar29 + 0x20) + (ulong)*puVar32 * 8);
          if (uVar36 == 0xbc0ad263c) {
            uVar35 = puVar32[1];
            if (-1 < (int)uVar35) {
              pbVar41 = pbVar38 + (int)uVar35;
            }
            break;
          }
          iVar9 = iVar4 + -1;
          if (uVar36 < 0xbc0ad263d) {
            iVar33 = iVar4 + 1;
            iVar9 = iVar20;
          }
          iVar20 = iVar9;
        } while (iVar33 <= iVar20);
      }
      uVar50 = 0x41200000;
      if (*pbVar41 == 8) {
        uVar50 = *(undefined4 *)(pbVar41 + 1);
      }
      *(undefined4 *)(*plVar2 + lVar37 * 0x28 + 0x18) = uVar50;
      pbVar41 = &DAT_7104742dbb;
      if ((*pbVar38 == 0xc) && (iVar20 = *(int *)(pbVar38 + 1) + -1, 0 < *(int *)(pbVar38 + 1))) {
        iVar33 = 0;
        do {
          iVar4 = iVar20 + iVar33;
          if (iVar4 < 0) {
            iVar4 = iVar4 + 1;
          }
          iVar4 = iVar4 >> 1;
          puVar32 = (uint *)(*(long *)(lVar29 + 0x28) + (long)*(int *)(pbVar38 + 5) +
                            (long)iVar4 * 8);
          uVar36 = *(ulong *)(*(long *)(lVar29 + 0x20) + (ulong)*puVar32 * 8);
          if (uVar36 == 0xa381ad7fa) {
            uVar35 = puVar32[1];
            if (-1 < (int)uVar35) {
              pbVar41 = pbVar38 + (int)uVar35;
            }
            break;
          }
          iVar9 = iVar4 + -1;
          if (uVar36 < 0xa381ad7fb) {
            iVar33 = iVar4 + 1;
            iVar9 = iVar20;
          }
          iVar20 = iVar9;
        } while (iVar33 <= iVar20);
      }
      uVar50 = 0x428c0000;
      if (*pbVar41 == 8) {
        uVar50 = *(undefined4 *)(pbVar41 + 1);
      }
      *(undefined4 *)(*plVar2 + lVar37 * 0x28 + 0x1c) = uVar50;
      pbVar41 = &DAT_7104742dbb;
      if ((*pbVar38 == 0xc) && (iVar20 = *(int *)(pbVar38 + 1) + -1, 0 < *(int *)(pbVar38 + 1))) {
        iVar33 = 0;
        do {
          iVar4 = iVar20 + iVar33;
          if (iVar4 < 0) {
            iVar4 = iVar4 + 1;
          }
          iVar4 = iVar4 >> 1;
          puVar32 = (uint *)(*(long *)(lVar29 + 0x28) + (long)*(int *)(pbVar38 + 5) +
                            (long)iVar4 * 8);
          uVar36 = *(ulong *)(*(long *)(lVar29 + 0x20) + (ulong)*puVar32 * 8);
          if (uVar36 == 0x1115e9b9f4) {
            uVar35 = puVar32[1];
            if (-1 < (int)uVar35) {
              pbVar41 = pbVar38 + (int)uVar35;
            }
            break;
          }
          iVar9 = iVar4 + -1;
          if (uVar36 < 0x1115e9b9f5) {
            iVar33 = iVar4 + 1;
            iVar9 = iVar20;
          }
          iVar20 = iVar9;
        } while (iVar33 <= iVar20);
      }
      switch(*pbVar41) {
      case 1:
      case 3:
        uVar35 = (uint)pbVar41[1];
        break;
      case 2:
        uVar35 = (uint)(char)pbVar41[1];
        break;
      case 4:
        uVar35 = (uint)*(short *)(pbVar41 + 1);
        break;
      case 5:
        uVar35 = (uint)*(ushort *)(pbVar41 + 1);
        break;
      case 6:
      case 7:
        uVar35 = *(uint *)(pbVar41 + 1);
        break;
      default:
        uVar35 = 0;
      }
      *(bool *)(*plVar2 + lVar37 * 0x28 + 0x20) = uVar35 != 0;
      uVar35 = (uint)*pbVar40;
      lVar37 = lVar37 + 1;
      if (uVar35 - 0xb < 2) {
        if (*(int *)(pbVar40 + 1) <= lVar37) break;
        goto LAB_71030784a8;
      }
    } while (lVar37 < 0);
  }
  pppbVar21 = *ppppbVar47;
  if ((*(char *)pppbVar21 == '\f') &&
     (iVar20 = *(int *)((long)pppbVar21 + 1) + -1, 0 < *(int *)((long)pppbVar21 + 1))) {
    lVar37 = *param_2;
    iVar33 = 0;
    pbVar40 = &DAT_7104742dbb;
    do {
      iVar4 = iVar20 + iVar33;
      if (iVar4 < 0) {
        iVar4 = iVar4 + 1;
      }
      iVar4 = iVar4 >> 1;
      puVar32 = (uint *)(*(long *)(lVar37 + 0x28) + (long)*(int *)((long)pppbVar21 + 5) +
                        (long)iVar4 * 8);
      uVar36 = *(ulong *)(*(long *)(lVar37 + 0x20) + (ulong)*puVar32 * 8);
      if (uVar36 == 0x12518629c9) {
        uVar35 = puVar32[1];
        if ((int)uVar35 < 0) goto LAB_710307889c;
        pbVar40 = (byte *)((long)pppbVar21 + (long)(int)uVar35);
        goto LAB_71030788a8;
      }
      iVar9 = iVar4 + -1;
      if (uVar36 < 0x12518629ca) {
        iVar33 = iVar4 + 1;
        iVar9 = iVar20;
      }
      iVar20 = iVar9;
    } while (iVar33 <= iVar20);
    lVar37 = 0;
  }
  else {
LAB_710307889c:
    lVar37 = 0;
    pbVar40 = &DAT_7104742dbb;
  }
LAB_71030788a8:
  if (*pbVar40 - 0xb < 2) {
    iVar20 = *(int *)(pbVar40 + 1);
  }
  else {
    iVar20 = 0;
  }
  uVar36 = (ulong)iVar20;
  puVar27 = *(undefined8 **)(param_1 + 0x2b8);
  pvVar43 = *(void **)(param_1 + 0x2b0);
  pppplVar44 = (long ****)((long)puVar27 - (long)pvVar43);
  lVar29 = (long)pppplVar44 >> 3;
  plVar2 = (long *)(param_1 + 0x2b0);
  if ((ulong)(lVar29 * -0x5555555555555555) < uVar36) {
    uVar48 = uVar36 + lVar29 * 0x5555555555555555;
    if ((ulong)((*(long *)(param_1 + 0x2c0) - (long)puVar27 >> 3) * -0x5555555555555555) < uVar48) {
      if (iVar20 < 0) goto LAB_7103079628;
      lVar22 = *(long *)(param_1 + 0x2c0) - (long)pvVar43 >> 3;
      if ((ulong)(lVar22 * -0x5555555555555555) < 0x555555555555555) {
        uVar23 = lVar22 * 0x5555555555555556;
        uVar49 = uVar36;
        if (uVar36 <= uVar23) {
          uVar49 = uVar23;
        }
        if (uVar49 != 0) goto LAB_71030789c8;
        lVar22 = 0;
      }
      else {
        uVar49 = 0xaaaaaaaaaaaaaaa;
LAB_71030789c8:
        ppplVar25 = (long ***)(uVar49 * 0x18);
        if (ppplVar25 == (long ***)0x0) {
          ppplVar25 = (long ***)0x1;
        }
        lVar22 = FUN_710392e290(0x10,ppplVar25,(long ****)puVar11,(byte ****)puVar15,pppplVar42,
                                ppppbVar17,param_7,param_8);
        if (lVar22 == 0) {
          if (DAT_7105332f00 != (long *)0x0) {
            local_84 = 0;
            pppplVar13 = &local_90;
            local_90 = ppplVar25;
            uVar23 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_84);
            if (((uVar23 & 1) != 0) &&
               (lVar22 = FUN_710392e290(0x10,ppplVar25,pppplVar13,(byte ****)puVar15,pppplVar42,
                                        ppppbVar17,param_7,param_8), lVar22 != 0))
            goto LAB_7103078a38;
          }
          lVar22 = 0;
        }
      }
LAB_7103078a38:
      pvVar46 = (void *)(lVar22 + lVar29 * 8);
      puVar11 = (uint *)(uVar48 * 0x18);
      memset(pvVar46,0,(size_t)puVar11);
      lVar29 = SUB168(SEXT816((long)pppplVar44) * SEXT816(-0x2aaaaaaaaaaaaaab),8);
      pvVar46 = (void *)((long)pvVar46 + ((lVar29 >> 2) - (lVar29 >> 0x3f)) * 0x18);
      if (0 < (long)pppplVar44) {
        memcpy(pvVar46,pvVar43,(size_t)pppplVar44);
        puVar11 = (uint *)pppplVar44;
      }
      *(void **)(param_1 + 0x2b0) = pvVar46;
      *(ulong *)(param_1 + 0x2b8) = lVar22 + uVar36 * 0x18;
      *(ulong *)(param_1 + 0x2c0) = lVar22 + uVar49 * 0x18;
      if (pvVar43 != (void *)0x0) {
        FUN_710392eb40((ulong)pvVar43);
      }
    }
    else {
      uVar36 = uVar48;
      if ((uVar48 & 1) != 0) {
        puVar27[1] = 0;
        puVar27[2] = 0;
        uVar36 = uVar48 - 1;
        *puVar27 = 0;
        puVar27 = (undefined8 *)(*(long *)(param_1 + 0x2b8) + 0x18);
        *(undefined8 **)(param_1 + 0x2b8) = puVar27;
      }
      if (uVar48 != 1) {
        do {
          puVar27[1] = 0;
          puVar27[2] = 0;
          uVar36 = uVar36 - 2;
          *puVar27 = 0;
          lVar29 = *(long *)(param_1 + 0x2b8);
          *(long *)(param_1 + 0x2b8) = lVar29 + 0x18;
          *(undefined8 *)(lVar29 + 0x20) = 0;
          *(undefined8 *)(lVar29 + 0x28) = 0;
          *(undefined8 *)(lVar29 + 0x18) = 0;
          puVar27 = (undefined8 *)(*(long *)(param_1 + 0x2b8) + 0x18);
          *(undefined8 **)(param_1 + 0x2b8) = puVar27;
        } while (uVar36 != 0);
      }
    }
  }
  else if (lVar29 * -0x5555555555555555 - uVar36 != 0) {
    *(void **)(param_1 + 0x2b8) = (void *)((long)pvVar43 + uVar36 * 0x18);
  }
  uVar35 = (uint)*pbVar40;
  if ((*pbVar40 - 0xb < 2) && (0 < *(int *)(pbVar40 + 1))) {
    lVar29 = 0;
LAB_7103078b08:
    do {
      iVar20 = (int)lVar29;
      if (iVar20 < 0) {
LAB_7103078b40:
        lVar22 = 0;
        pbVar38 = &DAT_7104742dbb;
      }
      else {
        lVar22 = 0;
        pbVar38 = &DAT_7104742dbb;
        if (uVar35 == 0xb) {
          if (*(int *)(pbVar40 + 1) <= iVar20) goto LAB_7103078b40;
          pbVar38 = pbVar40 + *(int *)(pbVar40 + (long)iVar20 * 4 + 5);
          lVar22 = lVar37;
        }
      }
      if ((*pbVar38 == 0xc) && (uVar35 = *(int *)(pbVar38 + 1) - 1, 0 < *(int *)(pbVar38 + 1))) {
        iVar20 = 0;
        do {
          iVar33 = uVar35 + iVar20;
          if (iVar33 < 0) {
            iVar33 = iVar33 + 1;
          }
          uVar18 = iVar33 >> 1;
          puVar11 = (uint *)(ulong)uVar18;
          puVar15 = (uint *)(*(long *)(lVar22 + 0x28) + (long)*(int *)(pbVar38 + 5) +
                            (long)(int)uVar18 * 8);
          pppplVar42 = *(long *****)(*(long *)(lVar22 + 0x20) + (ulong)*puVar15 * 8);
          if (pppplVar42 == (long ****)0xdde98c202) {
            if (-1 < (int)*(uint *)((long)puVar15 + 4)) {
              pbVar41 = pbVar38 + (int)*(uint *)((long)puVar15 + 4);
              lVar30 = lVar22;
              goto LAB_7103078bc8;
            }
            break;
          }
          puVar15 = (uint *)(ulong)(uVar18 - 1);
          uVar5 = uVar18 - 1;
          if (pppplVar42 < (long ****)0xdde98c203) {
            iVar20 = uVar18 + 1;
            uVar5 = uVar35;
          }
          uVar35 = uVar5;
        } while (iVar20 <= (int)uVar35);
      }
      lVar30 = 0;
      pbVar41 = &DAT_7104742dbb;
LAB_7103078bc8:
      if (*pbVar41 == 9) {
        uVar16 = *(undefined8 *)(*(long *)(lVar30 + 0x20) + (long)*(int *)(pbVar41 + 1) * 8);
      }
      else {
        uVar16 = 0;
      }
      *(undefined8 *)(*plVar2 + lVar29 * 0x18) = uVar16;
      if ((*pbVar38 == 0xc) && (uVar35 = *(int *)(pbVar38 + 1) - 1, 0 < *(int *)(pbVar38 + 1))) {
        iVar20 = 0;
        do {
          iVar33 = uVar35 + iVar20;
          if (iVar33 < 0) {
            iVar33 = iVar33 + 1;
          }
          uVar18 = iVar33 >> 1;
          puVar11 = (uint *)(ulong)uVar18;
          puVar15 = (uint *)(*(long *)(lVar22 + 0x28) + (long)*(int *)(pbVar38 + 5) +
                            (long)(int)uVar18 * 8);
          pppplVar42 = *(long *****)(*(long *)(lVar22 + 0x20) + (ulong)*puVar15 * 8);
          if (pppplVar42 == (long ****)0x9dbc35fca) {
            if (-1 < (int)*(uint *)((long)puVar15 + 4)) {
              pbVar41 = pbVar38 + (int)*(uint *)((long)puVar15 + 4);
              lVar30 = lVar22;
              goto LAB_7103078c78;
            }
            break;
          }
          puVar15 = (uint *)(ulong)(uVar18 - 1);
          uVar5 = uVar18 - 1;
          if (pppplVar42 < (long ****)0x9dbc35fcb) {
            iVar20 = uVar18 + 1;
            uVar5 = uVar35;
          }
          uVar35 = uVar5;
        } while (iVar20 <= (int)uVar35);
      }
      lVar30 = 0;
      pbVar41 = &DAT_7104742dbb;
LAB_7103078c78:
      if (*pbVar41 == 9) {
        uVar16 = *(undefined8 *)(*(long *)(lVar30 + 0x20) + (long)*(int *)(pbVar41 + 1) * 8);
      }
      else {
        uVar16 = 0;
      }
      *(undefined8 *)(*plVar2 + lVar29 * 0x18 + 8) = uVar16;
      if ((*pbVar38 == 0xc) && (uVar35 = *(int *)(pbVar38 + 1) - 1, 0 < *(int *)(pbVar38 + 1))) {
        iVar20 = 0;
        do {
          iVar33 = uVar35 + iVar20;
          if (iVar33 < 0) {
            iVar33 = iVar33 + 1;
          }
          uVar18 = iVar33 >> 1;
          puVar11 = (uint *)(ulong)uVar18;
          puVar15 = (uint *)(*(long *)(lVar22 + 0x28) + (long)*(int *)(pbVar38 + 5) +
                            (long)(int)uVar18 * 8);
          pppplVar42 = *(long *****)(*(long *)(lVar22 + 0x20) + (ulong)*puVar15 * 8);
          if (pppplVar42 == (long ****)0x9c86e8329) {
            if (-1 < (int)*(uint *)((long)puVar15 + 4)) {
              pbVar38 = pbVar38 + (int)*(uint *)((long)puVar15 + 4);
              goto LAB_7103078d24;
            }
            break;
          }
          puVar15 = (uint *)(ulong)(uVar18 - 1);
          uVar5 = uVar18 - 1;
          if (pppplVar42 < (long ****)0x9c86e832a) {
            iVar20 = uVar18 + 1;
            uVar5 = uVar35;
          }
          uVar35 = uVar5;
        } while (iVar20 <= (int)uVar35);
      }
      lVar22 = 0;
      pbVar38 = &DAT_7104742dbb;
LAB_7103078d24:
      if (*pbVar38 == 9) {
        uVar16 = *(undefined8 *)(*(long *)(lVar22 + 0x20) + (long)*(int *)(pbVar38 + 1) * 8);
      }
      else {
        uVar16 = 0;
      }
      lVar22 = lVar29 * 0x18;
      lVar29 = lVar29 + 1;
      *(undefined8 *)(*plVar2 + lVar22 + 0x10) = uVar16;
      uVar35 = (uint)*pbVar40;
      if (uVar35 - 0xb < 2) {
        if (*(int *)(pbVar40 + 1) <= lVar29) break;
        goto LAB_7103078b08;
      }
    } while (lVar29 < 0);
  }
  pppbVar21 = *ppppbVar47;
  if ((*(char *)pppbVar21 == '\f') &&
     (iVar20 = *(int *)((long)pppbVar21 + 1) + -1, 0 < *(int *)((long)pppbVar21 + 1))) {
    lVar37 = *param_2;
    iVar33 = 0;
    pcVar28 = "";
    do {
      iVar4 = iVar20 + iVar33;
      if (iVar4 < 0) {
        iVar4 = iVar4 + 1;
      }
      iVar4 = iVar4 >> 1;
      puVar32 = (uint *)(*(long *)(lVar37 + 0x28) + (long)*(int *)((long)pppbVar21 + 5) +
                        (long)iVar4 * 8);
      uVar36 = *(ulong *)(*(long *)(lVar37 + 0x20) + (ulong)*puVar32 * 8);
      if (uVar36 == 0x102109bb07) {
        uVar35 = puVar32[1];
        if ((int)uVar35 < 0) goto LAB_7103078e1c;
        pcVar28 = (char *)((long)pppbVar21 + (long)(int)uVar35);
        goto LAB_7103078e28;
      }
      iVar9 = iVar4 + -1;
      if (uVar36 < 0x102109bb08) {
        iVar33 = iVar4 + 1;
        iVar9 = iVar20;
      }
      iVar20 = iVar9;
    } while (iVar33 <= iVar20);
    lVar37 = 0;
  }
  else {
LAB_7103078e1c:
    lVar37 = 0;
    pcVar28 = "";
  }
LAB_7103078e28:
  if ((*pcVar28 == '\f') && (iVar20 = *(int *)(pcVar28 + 1) + -1, 0 < *(int *)(pcVar28 + 1))) {
    iVar33 = 0;
    pcVar31 = "";
    do {
      iVar4 = iVar20 + iVar33;
      if (iVar4 < 0) {
        iVar4 = iVar4 + 1;
      }
      iVar4 = iVar4 >> 1;
      puVar32 = (uint *)(*(long *)(lVar37 + 0x28) + (long)*(int *)(pcVar28 + 5) + (long)iVar4 * 8);
      uVar36 = *(ulong *)(*(long *)(lVar37 + 0x20) + (ulong)*puVar32 * 8);
      if (uVar36 == 0x18cdc1683) {
        uVar35 = puVar32[1];
        if ((int)uVar35 < 0) goto LAB_7103078eb4;
        pcVar31 = pcVar28 + (int)uVar35;
        break;
      }
      iVar9 = iVar4 + -1;
      if (uVar36 < 0x18cdc1684) {
        iVar33 = iVar4 + 1;
        iVar9 = iVar20;
      }
      iVar20 = iVar9;
    } while (iVar33 <= iVar20);
  }
  else {
LAB_7103078eb4:
    pcVar31 = "";
  }
  if (*pcVar31 == '\b') {
    uVar50 = *(undefined4 *)(pcVar31 + 1);
  }
  else {
    uVar50 = 0;
  }
  *(undefined4 *)(param_1 + 0x2c8) = uVar50;
  if ((*pcVar28 == '\f') && (iVar20 = *(int *)(pcVar28 + 1) + -1, 0 < *(int *)(pcVar28 + 1))) {
    iVar33 = 0;
    pcVar31 = "";
    do {
      iVar4 = iVar20 + iVar33;
      if (iVar4 < 0) {
        iVar4 = iVar4 + 1;
      }
      iVar4 = iVar4 >> 1;
      puVar32 = (uint *)(*(long *)(lVar37 + 0x28) + (long)*(int *)(pcVar28 + 5) + (long)iVar4 * 8);
      uVar36 = *(ulong *)(*(long *)(lVar37 + 0x20) + (ulong)*puVar32 * 8);
      if (uVar36 == 0x1fbdb2615) {
        uVar35 = puVar32[1];
        if ((int)uVar35 < 0) goto LAB_7103078f64;
        pcVar31 = pcVar28 + (int)uVar35;
        break;
      }
      iVar9 = iVar4 + -1;
      if (uVar36 < 0x1fbdb2616) {
        iVar33 = iVar4 + 1;
        iVar9 = iVar20;
      }
      iVar20 = iVar9;
    } while (iVar33 <= iVar20);
  }
  else {
LAB_7103078f64:
    pcVar31 = "";
  }
  if (*pcVar31 == '\b') {
    uVar50 = *(undefined4 *)(pcVar31 + 1);
  }
  else {
    uVar50 = 0;
  }
  *(undefined4 *)(param_1 + 0x2cc) = uVar50;
  if ((*pcVar28 == '\f') && (iVar20 = *(int *)(pcVar28 + 1) + -1, 0 < *(int *)(pcVar28 + 1))) {
    iVar33 = 0;
    pcVar31 = "";
    do {
      iVar4 = iVar20 + iVar33;
      if (iVar4 < 0) {
        iVar4 = iVar4 + 1;
      }
      iVar4 = iVar4 >> 1;
      puVar32 = (uint *)(*(long *)(lVar37 + 0x28) + (long)*(int *)(pcVar28 + 5) + (long)iVar4 * 8);
      uVar36 = *(ulong *)(*(long *)(lVar37 + 0x20) + (ulong)*puVar32 * 8);
      if (uVar36 == 0x162d277af) {
        uVar35 = puVar32[1];
        if ((int)uVar35 < 0) goto LAB_7103079014;
        pcVar31 = pcVar28 + (int)uVar35;
        break;
      }
      iVar9 = iVar4 + -1;
      if (uVar36 < 0x162d277b0) {
        iVar33 = iVar4 + 1;
        iVar9 = iVar20;
      }
      iVar20 = iVar9;
    } while (iVar33 <= iVar20);
  }
  else {
LAB_7103079014:
    pcVar31 = "";
  }
  if (*pcVar31 == '\b') {
    uVar50 = *(undefined4 *)(pcVar31 + 1);
  }
  else {
    uVar50 = 0;
  }
  *(undefined4 *)(param_1 + 0x2d0) = uVar50;
  pppbVar21 = *ppppbVar47;
  if ((*(char *)pppbVar21 == '\f') &&
     (iVar20 = *(int *)((long)pppbVar21 + 1) + -1, 0 < *(int *)((long)pppbVar21 + 1))) {
    iVar33 = 0;
    pcVar28 = "";
    do {
      iVar4 = iVar20 + iVar33;
      if (iVar4 < 0) {
        iVar4 = iVar4 + 1;
      }
      iVar4 = iVar4 >> 1;
      puVar32 = (uint *)(*(long *)(*param_2 + 0x28) + (long)*(int *)((long)pppbVar21 + 5) +
                        (long)iVar4 * 8);
      uVar36 = *(ulong *)(*(long *)(*param_2 + 0x20) + (ulong)*puVar32 * 8);
      if (uVar36 == 0x2448cfb29c) {
        uVar35 = puVar32[1];
        if ((int)uVar35 < 0) goto LAB_71030790d0;
        pcVar28 = (char *)((long)pppbVar21 + (long)(int)uVar35);
        break;
      }
      iVar9 = iVar4 + -1;
      if (uVar36 < 0x2448cfb29d) {
        iVar33 = iVar4 + 1;
        iVar9 = iVar20;
      }
      iVar20 = iVar9;
    } while (iVar33 <= iVar20);
  }
  else {
LAB_71030790d0:
    pcVar28 = "";
  }
  switch(*pcVar28) {
  case '\x01':
  case '\x03':
    uVar35 = (uint)(byte)pcVar28[1];
    break;
  case '\x02':
    uVar35 = (uint)pcVar28[1];
    break;
  case '\x04':
    uVar35 = (uint)*(short *)(pcVar28 + 1);
    break;
  case '\x05':
    uVar35 = (uint)*(ushort *)(pcVar28 + 1);
    break;
  case '\x06':
  case '\a':
    uVar35 = *(uint *)(pcVar28 + 1);
    break;
  default:
    uVar35 = 1;
  }
  *(bool *)(param_1 + 0x2d4) = uVar35 != 0;
  pppbVar21 = *ppppbVar47;
  if ((*(char *)pppbVar21 == '\f') &&
     (iVar20 = *(int *)((long)pppbVar21 + 1) + -1, 0 < *(int *)((long)pppbVar21 + 1))) {
    lVar37 = *param_2;
    iVar33 = 0;
    pbVar40 = &DAT_7104742dbb;
    do {
      iVar4 = iVar20 + iVar33;
      if (iVar4 < 0) {
        iVar4 = iVar4 + 1;
      }
      iVar4 = iVar4 >> 1;
      puVar32 = (uint *)(*(long *)(lVar37 + 0x28) + (long)*(int *)((long)pppbVar21 + 5) +
                        (long)iVar4 * 8);
      uVar36 = *(ulong *)(*(long *)(lVar37 + 0x20) + (ulong)*puVar32 * 8);
      if (uVar36 == 0x159498ac56) {
        uVar35 = puVar32[1];
        if ((int)uVar35 < 0) goto LAB_71030791d0;
        pbVar40 = (byte *)((long)pppbVar21 + (long)(int)uVar35);
        goto LAB_71030791dc;
      }
      iVar9 = iVar4 + -1;
      if (uVar36 < 0x159498ac57) {
        iVar33 = iVar4 + 1;
        iVar9 = iVar20;
      }
      iVar20 = iVar9;
    } while (iVar33 <= iVar20);
    lVar37 = 0;
  }
  else {
LAB_71030791d0:
    lVar37 = 0;
    pbVar40 = &DAT_7104742dbb;
  }
LAB_71030791dc:
  if (*pbVar40 - 0xb < 2) {
    iVar20 = *(int *)(pbVar40 + 1);
  }
  else {
    iVar20 = 0;
  }
  uVar36 = (ulong)iVar20;
  puVar27 = *(undefined8 **)(param_1 + 0x2e0);
  pvVar43 = *(void **)(param_1 + 0x2d8);
  __n = (long)puVar27 - (long)pvVar43;
  uVar48 = (long)__n >> 3;
  if (uVar36 <= uVar48) {
    if (uVar48 != uVar36) {
      *(void **)(param_1 + 0x2e0) = (void *)((long)pvVar43 + uVar36 * 8);
    }
    goto LAB_7103079388;
  }
  uVar49 = uVar36 - uVar48;
  if (uVar49 <= (ulong)(*(long *)(param_1 + 0x2e8) - (long)puVar27 >> 3)) {
    uVar36 = uVar49;
    if ((uVar49 & 1) != 0) {
      *puVar27 = 0;
      puVar27 = (undefined8 *)(*(long *)(param_1 + 0x2e0) + 8);
      uVar36 = uVar49 - 1;
      *(undefined8 **)(param_1 + 0x2e0) = puVar27;
    }
    if (uVar49 != 1) {
      do {
        *puVar27 = 0;
        lVar29 = *(long *)(param_1 + 0x2e0);
        *(long *)(param_1 + 0x2e0) = lVar29 + 8;
        *(undefined8 *)(lVar29 + 8) = 0;
        puVar27 = (undefined8 *)(*(long *)(param_1 + 0x2e0) + 8);
        uVar36 = uVar36 - 2;
        *(undefined8 **)(param_1 + 0x2e0) = puVar27;
      } while (uVar36 != 0);
    }
    goto LAB_7103079388;
  }
  if (iVar20 < 0) {
LAB_7103079628:
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_length_error();
  }
  lVar29 = *(long *)(param_1 + 0x2e8) - (long)pvVar43;
  if ((ulong)(lVar29 >> 3) < 0xfffffffffffffff) {
    uVar24 = lVar29 >> 2;
    uVar23 = uVar36;
    if (uVar36 <= uVar24) {
      uVar23 = uVar24;
    }
    if (uVar23 != 0) {
      if (uVar23 >> 0x3d != 0) {
LAB_7103079260:
                    /* WARNING: Subroutine does not return */
        abort();
      }
      goto LAB_71030792cc;
    }
LAB_7103079330:
    pvVar46 = (void *)0x0;
  }
  else {
    uVar23 = 0x1fffffffffffffff;
LAB_71030792cc:
    ppplVar25 = (long ***)(uVar23 * 8);
    if (ppplVar25 == (long ***)0x0) {
      ppplVar25 = (long ***)0x1;
    }
    pvVar46 = (void *)FUN_710392e290(0x10,ppplVar25,(long ****)puVar11,(byte ****)puVar15,pppplVar42
                                     ,ppppbVar17,param_7,param_8);
    if (pvVar46 == (void *)0x0) {
      if (DAT_7105332f00 != (long *)0x0) {
        local_84 = 0;
        pppplVar44 = &local_90;
        local_90 = ppplVar25;
        uVar24 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_84);
        if (((uVar24 & 1) != 0) &&
           (pvVar46 = (void *)FUN_710392e290(0x10,ppplVar25,pppplVar44,(byte ****)puVar15,pppplVar42
                                             ,ppppbVar17,param_7,param_8), pvVar46 != (void *)0x0))
        goto LAB_7103079334;
      }
      goto LAB_7103079330;
    }
  }
LAB_7103079334:
  memset((void *)((long)pvVar46 + uVar48 * 8),0,uVar49 * 8);
  if (0 < (long)__n) {
    memcpy(pvVar46,pvVar43,__n);
  }
  *(void **)(param_1 + 0x2d8) = pvVar46;
  *(void **)(param_1 + 0x2e0) = (void *)((long)pvVar46 + uVar36 * 8);
  *(void **)(param_1 + 0x2e8) = (void *)((long)pvVar46 + uVar23 * 8);
  if (pvVar43 != (void *)0x0) {
    FUN_710392eb40((ulong)pvVar43);
  }
LAB_7103079388:
  uVar35 = (uint)*pbVar40;
  if ((*pbVar40 - 0xb < 2) && (0 < *(int *)(pbVar40 + 1))) {
    lVar29 = 0;
LAB_71030793c0:
    do {
      iVar20 = (int)lVar29;
      if (iVar20 < 0) {
LAB_71030793f8:
        lVar22 = 0;
        pbVar38 = &DAT_7104742dbb;
      }
      else {
        lVar22 = 0;
        pbVar38 = &DAT_7104742dbb;
        if (uVar35 == 0xb) {
          if (*(int *)(pbVar40 + 1) <= iVar20) goto LAB_71030793f8;
          pbVar38 = pbVar40 + *(int *)(pbVar40 + (long)iVar20 * 4 + 5);
          lVar22 = lVar37;
        }
      }
      if ((*pbVar38 == 0xc) && (iVar20 = *(int *)(pbVar38 + 1) + -1, 0 < *(int *)(pbVar38 + 1))) {
        iVar33 = 0;
        do {
          iVar4 = iVar20 + iVar33;
          if (iVar4 < 0) {
            iVar4 = iVar4 + 1;
          }
          iVar4 = iVar4 >> 1;
          puVar11 = (uint *)(*(long *)(lVar22 + 0x28) + (long)*(int *)(pbVar38 + 5) +
                            (long)iVar4 * 8);
          uVar36 = *(ulong *)(*(long *)(lVar22 + 0x20) + (ulong)*puVar11 * 8);
          if (uVar36 == 0xa737452e1) {
            uVar35 = puVar11[1];
            if (-1 < (int)uVar35) {
              pbVar38 = pbVar38 + (int)uVar35;
              goto LAB_710307947c;
            }
            break;
          }
          iVar9 = iVar4 + -1;
          if (uVar36 < 0xa737452e2) {
            iVar33 = iVar4 + 1;
            iVar9 = iVar20;
          }
          iVar20 = iVar9;
        } while (iVar33 <= iVar20);
      }
      lVar22 = 0;
      pbVar38 = &DAT_7104742dbb;
LAB_710307947c:
      if (*pbVar38 == 9) {
        uVar16 = *(undefined8 *)(*(long *)(lVar22 + 0x20) + (long)*(int *)(pbVar38 + 1) * 8);
      }
      else {
        uVar16 = 0;
      }
      *(undefined8 *)(*(long *)(param_1 + 0x2d8) + lVar29 * 8) = uVar16;
      uVar35 = (uint)*pbVar40;
      lVar29 = lVar29 + 1;
      if (uVar35 - 0xb < 2) {
        if (*(int *)(pbVar40 + 1) <= lVar29) break;
        goto LAB_71030793c0;
      }
    } while (lVar29 < 0);
  }
  pppbVar21 = *ppppbVar47;
  if ((*(char *)pppbVar21 == '\f') &&
     (iVar20 = *(int *)((long)pppbVar21 + 1) + -1, 0 < *(int *)((long)pppbVar21 + 1))) {
    iVar33 = 0;
    pcVar28 = "";
    do {
      iVar4 = iVar20 + iVar33;
      if (iVar4 < 0) {
        iVar4 = iVar4 + 1;
      }
      iVar4 = iVar4 >> 1;
      puVar11 = (uint *)(*(long *)(*param_2 + 0x28) + (long)*(int *)((long)pppbVar21 + 5) +
                        (long)iVar4 * 8);
      uVar36 = *(ulong *)(*(long *)(*param_2 + 0x20) + (ulong)*puVar11 * 8);
      if (uVar36 == 0x24cb74bcb8) {
        uVar35 = puVar11[1];
        if ((int)uVar35 < 0) goto LAB_710307956c;
        pcVar28 = (char *)((long)pppbVar21 + (long)(int)uVar35);
        break;
      }
      iVar9 = iVar4 + -1;
      if (uVar36 < 0x24cb74bcb9) {
        iVar33 = iVar4 + 1;
        iVar9 = iVar20;
      }
      iVar20 = iVar9;
    } while (iVar33 <= iVar20);
  }
  else {
LAB_710307956c:
    pcVar28 = "";
  }
  switch(*pcVar28) {
  case '\x01':
  case '\x03':
    cVar19 = pcVar28[1];
    break;
  case '\x02':
    cVar19 = pcVar28[1];
    break;
  case '\x04':
    cVar19 = (char)*(undefined2 *)(pcVar28 + 1);
    break;
  case '\x05':
    cVar19 = (char)*(undefined2 *)(pcVar28 + 1);
    break;
  case '\x06':
  case '\a':
    cVar19 = (char)*(undefined4 *)(pcVar28 + 1);
    break;
  default:
    cVar19 = '\x04';
  }
  *(char *)(param_1 + 0x2f0) = cVar19;
  return;
}

