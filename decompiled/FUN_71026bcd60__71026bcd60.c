// addr:      71026bcd60
// offset:    0x26bcd60
// name:      FUN_71026bcd60
// mangled:   
// signature: undefined __cdecl FUN_71026bcd60(long * * * param_1, undefined8 param_2, undefined * * param_3, undefined1[16] * param_4, undefined1[16] * param_5, undefined1[16] * param_6, long * * * * * * param_7, long * * * param_8)


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_71026bcd60(long ***param_1,undefined8 param_2,undefined **param_3,
                   undefined1 (*param_4) [16],undefined1 (*param_5) [16],undefined1 (*param_6) [16],
                   long ******param_7,long ***param_8)

{
  uint uVar1;
  undefined8 *puVar2;
  byte bVar3;
  char cVar4;
  long ***ppplVar5;
  long ***ppplVar6;
  bool bVar7;
  uint uVar8;
  int iVar9;
  ulong uVar10;
  long *plVar11;
  long *plVar12;
  ulong *puVar13;
  long ****pppplVar14;
  long ****pppplVar15;
  ulong extraout_x1;
  ulong uVar16;
  ulong extraout_x1_00;
  ulong extraout_x1_01;
  ulong extraout_x1_02;
  ulong extraout_x1_03;
  long *extraout_x1_04;
  long *extraout_x1_05;
  long *extraout_x1_06;
  long *extraout_x1_07;
  long *extraout_x1_08;
  long *extraout_x1_09;
  long *extraout_x1_10;
  long *extraout_x1_11;
  long *extraout_x1_12;
  long *extraout_x1_13;
  long *extraout_x1_14;
  long *extraout_x1_15;
  undefined8 extraout_x1_16;
  undefined8 extraout_x1_17;
  undefined8 extraout_x1_18;
  undefined8 extraout_x1_19;
  undefined8 extraout_x1_20;
  undefined8 extraout_x1_21;
  undefined8 extraout_x1_22;
  ulong extraout_x1_23;
  undefined8 extraout_x1_24;
  undefined8 extraout_x1_25;
  undefined8 extraout_x1_26;
  undefined8 extraout_x1_27;
  undefined8 extraout_x1_28;
  undefined8 extraout_x1_29;
  undefined8 extraout_x1_30;
  undefined8 extraout_x1_31;
  undefined8 extraout_x1_32;
  undefined8 extraout_x1_33;
  undefined8 extraout_x1_34;
  undefined8 uVar17;
  undefined8 extraout_x1_35;
  undefined8 extraout_x1_36;
  undefined8 extraout_x1_37;
  undefined8 extraout_x1_38;
  undefined8 extraout_x1_39;
  undefined8 extraout_x1_40;
  undefined8 extraout_x1_41;
  undefined8 extraout_x1_42;
  undefined8 extraout_x1_43;
  undefined8 extraout_x1_44;
  undefined8 extraout_x1_45;
  undefined8 extraout_x1_46;
  undefined8 extraout_x1_47;
  undefined8 extraout_x1_48;
  undefined8 extraout_x1_49;
  uint uVar18;
  long ****pppplVar19;
  long ****pppplVar20;
  char *pcVar21;
  uint *puVar22;
  long **pplVar23;
  int *piVar24;
  long **pplVar25;
  long lVar26;
  undefined8 *puVar27;
  long *plVar28;
  long *plVar29;
  byte *pbVar30;
  long lVar31;
  ulong uVar32;
  ulong uVar33;
  byte *pbVar34;
  ulong uVar35;
  undefined8 *puVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  long ***local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  long **local_b0;
  undefined8 local_a8;
  long ***local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  long **local_70;
  undefined8 local_68;
  
  pppplVar15 = &local_e0;
  pppplVar19 = &local_e0;
  *(uint *)(param_1 + 0x12a) = (uint)*(byte *)((long)param_1 + 0x94);
  FUN_71025d9250((long *)param_1,param_2,(long *********)param_3,param_4,param_5,param_6,param_7,
                 param_8);
  pplVar25 = param_1[0x61];
  *(byte *)(param_1 + 0x184) = *(byte *)(param_1 + 3) ^ 1;
  pplVar23 = (long **)pplVar25[0x1f];
  fVar37 = *(float *)(pplVar25 + 0x23);
  fVar39 = *(float *)((long)pplVar25 + 0x11c);
  param_1[0x121] = (long **)pplVar25[0x20];
  param_1[0x120] = pplVar23;
  fVar40 = SUB84(pplVar25[0x2c],0);
  fVar42 = *(float *)(param_1 + 0x120) + fVar40;
  fVar43 = fVar40 + *(float *)((long)param_1 + 0x904);
  fVar41 = (float)((ulong)pplVar25[0x2c] >> 0x20);
  *(float *)(param_1 + 0x120) = fVar42;
  *(float *)((long)param_1 + 0x904) = fVar43;
  fVar38 = ((fVar37 + fVar40) - fVar42) * *(float *)(param_1 + 0xe8);
  fVar37 = ((fVar39 + fVar40) - fVar43) * *(float *)(param_1 + 0xe8);
  *(float *)(param_1 + 0x121) = fVar41 + *(float *)(param_1 + 0x121);
  param_1[0x123] = param_1[0x123];
  param_1[0x122] = (long **)CONCAT44((int)((ulong)param_1[0x122] >> 0x20),fVar42 + fVar38);
  param_1[0x125] = param_1[0x125];
  param_1[0x124] = (long **)CONCAT44((int)((ulong)param_1[0x124] >> 0x20),fVar43 + fVar37);
  param_1[0x127] = param_1[0x127];
  param_1[0x126] = (long **)CONCAT44((int)((ulong)param_1[0x126] >> 0x20),fVar42 + fVar38 * 0.8);
  *(float *)((long)param_1 + 0x90c) = fVar41 + *(float *)((long)param_1 + 0x90c);
  param_1[0x129] = param_1[0x129];
  param_1[0x128] = (long **)CONCAT44((int)((ulong)param_1[0x128] >> 0x20),fVar43 + fVar37 * 0.8);
  if (2 < *(uint *)(param_1 + 0x17)) goto LAB_71026bf888;
  pppplVar20 = (long ****)(param_1 + 0xe7);
  lVar26 = *(long *)(DAT_710532a9d0 + (ulong)*(uint *)(param_1 + 0x17) * 8);
  for (puVar22 = *(uint **)(lVar26 + 0x228); puVar22 != *(uint **)(lVar26 + 0x230);
      puVar22 = puVar22 + 1) {
    uVar8 = *puVar22;
    if (((uVar8 != 0xffffff) &&
        (uVar8 < *(uint *)(*(long *)(**(long **)(DAT_7105332f20 + 0x78) + 0x40) + 4))) &&
       (*(long *)(*(long *)(**(long **)(DAT_7105332f20 + 0x78) + 0x60) + (ulong)uVar8 * 0x20 + 0x18)
        == 0x126f275c0e)) {
      FUN_7103540a00(DAT_7105332f20,uVar8);
      FUN_7103720ec0((long *)pppplVar20,uVar8,(long *********)param_3,(byte ****)param_4,
                     (long ****)param_5,param_6,param_7,param_8);
      FUN_7103540b10(DAT_7105332f20,uVar8,(long *********)param_3,(byte ****)param_4,
                     (long ****)param_5,param_6,param_7,param_8);
      uVar16 = extraout_x1_23;
      goto LAB_71026bceec;
    }
  }
  FUN_7103720ec0((long *)pppplVar20,0xffffff,(long *********)param_3,(byte ****)param_4,
                 (long ****)param_5,param_6,param_7,param_8);
  uVar16 = extraout_x1;
LAB_71026bceec:
  pplVar23 = param_1[0xf4];
  if (100 < *(uint *)pplVar23) {
    *(uint *)pplVar23 = 100;
    pplVar23 = param_1[0xf4];
  }
  if (100 < *(uint *)((long)pplVar23 + 4)) {
    *(uint *)((long)pplVar23 + 4) = 100;
  }
  pplVar23 = param_1[0x62];
  lVar26 = 0;
  do {
    uVar32 = (long)pplVar23[0x1b] - (long)pplVar23[0x1a];
    if ((int)(uVar32 >> 4) == 0) {
LAB_71026bd060:
      uVar33 = 0xffffffff;
    }
    else {
      pbVar30 = (&PTR_DAT_71050cf0c8)[lVar26 * 2];
      lVar31 = *pplVar23[0x1a];
      if (lVar31 != 0) {
        uVar8 = (uint)*pbVar30;
        if (*pbVar30 == 0) {
          uVar35 = 0;
          uVar33 = 0;
        }
        else {
          uVar33 = 0;
          uVar18 = 0xffffffff;
          pbVar34 = pbVar30;
          do {
            pbVar34 = pbVar34 + 1;
            uVar16 = (ulong)(uVar8 - 0x41);
            param_3 = (undefined **)(ulong)(uVar8 + 0x20);
            uVar1 = uVar8 + 0x20;
            if (0x19 < uVar8 - 0x41) {
              uVar1 = uVar8;
            }
            uVar18 = (&DAT_7104754084)[(uVar1 ^ uVar18) & 0xff] ^ uVar18 >> 8;
            uVar8 = (uint)*pbVar34;
            uVar33 = uVar33 + 0x100000000;
          } while (uVar8 != 0);
          uVar35 = (ulong)~uVar18;
          uVar33 = uVar33 & 0xff00000000;
        }
        if (*(ulong *)(lVar31 + 0x68) == (uVar33 | uVar35)) {
          uVar33 = 0;
          goto LAB_71026bd064;
        }
      }
      uVar33 = 0;
      do {
        do {
          uVar33 = uVar33 + 1;
          if ((uVar32 >> 4 & 0xffffffff) <= uVar33) goto LAB_71026bd060;
        } while (pplVar23[0x1a][uVar33 * 2] == 0);
        bVar3 = *pbVar30;
        if (bVar3 == 0) {
          uVar10 = 0;
          uVar35 = 0;
        }
        else {
          uVar35 = 0;
          uVar16 = 0xffffffff;
          pbVar34 = pbVar30;
          do {
            pbVar34 = pbVar34 + 1;
            uVar18 = (uint)bVar3;
            param_4 = (undefined1 (*) [16])(ulong)(uVar18 - 0x41);
            param_5 = (undefined1 (*) [16])(ulong)(uVar18 + 0x20);
            uVar8 = uVar18 + 0x20;
            if (0x19 < uVar18 - 0x41) {
              uVar8 = uVar18;
            }
            uVar8 = (&DAT_7104754084)[(uVar8 ^ (uint)uVar16) & 0xff] ^ (uint)uVar16 >> 8;
            uVar16 = (ulong)uVar8;
            bVar3 = *pbVar34;
            uVar35 = uVar35 + 0x100000000;
          } while (bVar3 != 0);
          uVar10 = (ulong)~uVar8;
          uVar35 = uVar35 & 0xff00000000;
        }
        param_3 = (undefined **)0x0;
      } while (*(ulong *)(pplVar23[0x1a][uVar33 * 2] + 0x68) != (uVar35 | uVar10));
    }
LAB_71026bd064:
    lVar31 = lVar26 + 1;
    *(int *)((long)param_1 + (ulong)(uint)(&DAT_71050cf0c0)[lVar26 * 4] * 4 + 0xc60) = (int)uVar33;
    lVar26 = lVar31;
  } while (lVar31 != 0xd);
  lVar26 = 0;
  do {
    uVar8 = *(uint *)((long)param_1 + lVar26 * 4 + 0xc60);
    if (-1 < (int)uVar8) {
      lVar31 = param_1[0x62][0x1a][(ulong)uVar8 * 2];
      if (((lVar31 != 0) && (*(long *)(lVar31 + 0xd8) == 0)) && (*(long *)(lVar31 + 0xd8) == 0)) {
        plVar11 = FUN_71026533a0((undefined8 *)(lVar31 + 0x90),0,(long ****)param_3,
                                 (byte ****)param_4,(long ****)param_5,param_6,(long ***)param_7,
                                 param_8);
        plVar12 = *(long **)(lVar31 + 0xd8);
        *(long **)(lVar31 + 0xd8) = plVar11;
        uVar16 = extraout_x1_01;
        if (plVar12 != (long *)0x0) {
          (**(code **)(*plVar12 + 8))();
          uVar16 = extraout_x1_02;
        }
      }
      if (((uint)lVar26 < 0x20) && ((1 << (ulong)((uint)lVar26 & 0x1f) & 0xe000297fU) != 0)) {
        if (lVar31 != 0) {
          *(undefined1 *)(lVar31 + 0x110) = 0;
          FUN_71025e9d50((long *)(lVar31 + 0x108),uVar16,(long ****)param_3,(byte ****)param_4,
                         (long ****)param_5,param_6,param_7,param_8);
          if ((*(char *)(lVar31 + 0xe0) != '\0') && (*(long *)(lVar31 + 200) != 0)) {
            *(undefined2 *)(*(long *)(lVar31 + 200) + 0x30) = 0x101;
          }
          if (*(long *)(lVar31 + 0xd8) != 0) {
            *(undefined1 *)(*(long *)(lVar31 + 0xd8) + 0x21) = 1;
          }
          uVar16 = extraout_x1_03;
          if (*(char *)(lVar31 + 0xe0) != '\0') {
            *(undefined1 *)(*(long *)(lVar31 + 0xb0) + 0x10) = 0;
          }
        }
      }
      else if (lVar31 != 0) {
        *(undefined1 *)(lVar31 + 0x110) = 1;
        FUN_71025e9d50((long *)(lVar31 + 0x108),uVar16,(long ****)param_3,(byte ****)param_4,
                       (long ****)param_5,param_6,param_7,param_8);
        uVar16 = extraout_x1_00;
      }
    }
    lVar26 = lVar26 + 1;
  } while (lVar26 != 0x20);
  pplVar23 = param_1[0x62];
  plVar11 = pplVar23[0x1a];
  uVar32 = (long)pplVar23[0x1b] - (long)plVar11;
  uVar16 = uVar32 >> 4;
  for (; plVar11 != pplVar23[0x1b]; plVar11 = plVar11 + 2) {
    if ((*(uint *)(plVar11 + 1) < 2) && (*(long *)(*plVar11 + 0x68) == 0xc3c2a78cc)) {
      pppplVar14 = FUN_710262fb80((long)pplVar23,plVar11,(long *********)param_3,(byte ****)param_4,
                                  (long ****)param_5,param_6,(long ***)param_7,param_8);
      if (pppplVar14 != (long ****)0x0) {
        iVar9 = (int)uVar16;
        *(int *)((long)param_1 + 0xc84) = iVar9;
        uVar16 = (ulong)(iVar9 + 1);
        lVar26 = param_1[0x62][0x1a][(uVar32 >> 4 & 0xffffffff) * 2];
        if (lVar26 != 0) {
          *(undefined1 *)(lVar26 + 0x110) = 0;
          FUN_71025e9d50((long *)(lVar26 + 0x108),extraout_x1_19,(long ****)param_3,
                         (byte ****)param_4,(long ****)param_5,param_6,param_7,param_8);
          if ((*(char *)(lVar26 + 0xe0) != '\0') && (*(long *)(lVar26 + 200) != 0)) {
            *(undefined2 *)(*(long *)(lVar26 + 200) + 0x30) = 0x101;
          }
          if (*(long *)(lVar26 + 0xd8) != 0) {
            *(undefined1 *)(*(long *)(lVar26 + 0xd8) + 0x21) = 1;
          }
          if (*(char *)(lVar26 + 0xe0) != '\0') {
            *(undefined1 *)(*(long *)(lVar26 + 0xb0) + 0x10) = 0;
          }
        }
        goto LAB_71026bd1b4;
      }
      break;
    }
  }
  uVar16 = uVar16 & 0xffffffff;
LAB_71026bd1b4:
  pplVar23 = param_1[0x62];
  for (plVar11 = pplVar23[0x1a]; plVar11 != pplVar23[0x1b]; plVar11 = plVar11 + 2) {
    if ((*(uint *)(plVar11 + 1) < 2) && (*(long *)(*plVar11 + 0x68) == 0xc3c2a78cc)) {
      pppplVar14 = FUN_710262fb80((long)pplVar23,plVar11,(long *********)param_3,(byte ****)param_4,
                                  (long ****)param_5,param_6,(long ***)param_7,param_8);
      if (pppplVar14 != (long ****)0x0) {
        *(int *)(param_1 + 0x191) = (int)uVar16;
        uVar32 = (ulong)((int)uVar16 + 1);
        lVar26 = param_1[0x62][0x1a][uVar16 * 2];
        uVar16 = uVar32;
        if (lVar26 != 0) {
          *(undefined1 *)(lVar26 + 0x110) = 0;
          FUN_71025e9d50((long *)(lVar26 + 0x108),extraout_x1_20,(long ****)param_3,
                         (byte ****)param_4,(long ****)param_5,param_6,param_7,param_8);
          if ((*(char *)(lVar26 + 0xe0) != '\0') && (*(long *)(lVar26 + 200) != 0)) {
            *(undefined2 *)(*(long *)(lVar26 + 200) + 0x30) = 0x101;
          }
          if (*(long *)(lVar26 + 0xd8) != 0) {
            *(undefined1 *)(*(long *)(lVar26 + 0xd8) + 0x21) = 1;
          }
          if (*(char *)(lVar26 + 0xe0) != '\0') {
            *(undefined1 *)(*(long *)(lVar26 + 0xb0) + 0x10) = 0;
          }
        }
      }
      break;
    }
  }
  pplVar23 = param_1[0x62];
  for (plVar11 = pplVar23[0x1a]; plVar11 != pplVar23[0x1b]; plVar11 = plVar11 + 2) {
    if ((*(uint *)(plVar11 + 1) < 2) && (*(long *)(*plVar11 + 0x68) == 0x90222786a)) {
      pppplVar14 = FUN_710262fb80((long)pplVar23,plVar11,(long *********)param_3,(byte ****)param_4,
                                  (long ****)param_5,param_6,(long ***)param_7,param_8);
      if (pppplVar14 != (long ****)0x0) {
        *(int *)((long)param_1 + 0xc7c) = (int)uVar16;
        uVar32 = (ulong)((int)uVar16 + 1);
        lVar26 = param_1[0x62][0x1a][uVar16 * 2];
        uVar16 = uVar32;
        if (lVar26 != 0) {
          *(undefined1 *)(lVar26 + 0x110) = 0;
          FUN_71025e9d50((long *)(lVar26 + 0x108),extraout_x1_21,(long ****)param_3,
                         (byte ****)param_4,(long ****)param_5,param_6,param_7,param_8);
          if ((*(char *)(lVar26 + 0xe0) != '\0') && (*(long *)(lVar26 + 200) != 0)) {
            *(undefined2 *)(*(long *)(lVar26 + 200) + 0x30) = 0x101;
          }
          if (*(long *)(lVar26 + 0xd8) != 0) {
            *(undefined1 *)(*(long *)(lVar26 + 0xd8) + 0x21) = 1;
          }
          if (*(char *)(lVar26 + 0xe0) != '\0') {
            *(undefined1 *)(*(long *)(lVar26 + 0xb0) + 0x10) = 0;
          }
        }
      }
      break;
    }
  }
  pplVar23 = param_1[0x62];
  for (plVar11 = pplVar23[0x1a]; plVar11 != pplVar23[0x1b]; plVar11 = plVar11 + 2) {
    if ((*(uint *)(plVar11 + 1) < 2) && (*(long *)(*plVar11 + 0x68) == 0xbb2345ae7)) {
      pppplVar14 = FUN_710262fb80((long)pplVar23,plVar11,(long *********)param_3,(byte ****)param_4,
                                  (long ****)param_5,param_6,(long ***)param_7,param_8);
      if (pppplVar14 != (long ****)0x0) {
        *(int *)(param_1 + 0x192) = (int)uVar16;
        uVar32 = (ulong)((int)uVar16 + 1);
        lVar26 = param_1[0x62][0x1a][uVar16 * 2];
        uVar16 = uVar32;
        if (lVar26 != 0) {
          *(undefined1 *)(lVar26 + 0x110) = 0;
          FUN_71025e9d50((long *)(lVar26 + 0x108),extraout_x1_22,(long ****)param_3,
                         (byte ****)param_4,(long ****)param_5,param_6,param_7,param_8);
          if ((*(char *)(lVar26 + 0xe0) != '\0') && (*(long *)(lVar26 + 200) != 0)) {
            *(undefined2 *)(*(long *)(lVar26 + 200) + 0x30) = 0x101;
          }
          if (*(long *)(lVar26 + 0xd8) != 0) {
            *(undefined1 *)(*(long *)(lVar26 + 0xd8) + 0x21) = 1;
          }
          if (*(char *)(lVar26 + 0xe0) != '\0') {
            *(undefined1 *)(*(long *)(lVar26 + 0xb0) + 0x10) = 0;
          }
        }
      }
      break;
    }
  }
  lVar26 = 1;
  do {
    pplVar23 = param_1[0x62];
    for (plVar11 = pplVar23[0x1a]; plVar11 != pplVar23[0x1b]; plVar11 = plVar11 + 2) {
      if ((*(uint *)(plVar11 + 1) < 2) && (*(long *)(*plVar11 + 0x68) == 0xa96d1f415)) {
        pppplVar14 = FUN_710262fb80((long)pplVar23,plVar11,(long *********)param_3,
                                    (byte ****)param_4,(long ****)param_5,param_6,(long ***)param_7,
                                    param_8);
        plVar11 = extraout_x1_04;
        if (pppplVar14 != (long ****)0x0) {
          *(int *)((long)param_1 + lVar26 * 4 + 0xc94) = (int)uVar16;
          uVar32 = (ulong)((int)uVar16 + 1);
          lVar31 = param_1[0x62][0x1a][uVar16 * 2];
          uVar16 = uVar32;
          if (lVar31 != 0) {
            *(undefined1 *)(lVar31 + 0x110) = 0;
            FUN_71025e9d50((long *)(lVar31 + 0x108),extraout_x1_04,(long ****)param_3,
                           (byte ****)param_4,(long ****)param_5,param_6,param_7,param_8);
            if ((*(char *)(lVar31 + 0xe0) != '\0') && (*(long *)(lVar31 + 200) != 0)) {
              *(undefined2 *)(*(long *)(lVar31 + 200) + 0x30) = 0x101;
            }
            if (*(long *)(lVar31 + 0xd8) != 0) {
              *(undefined1 *)(*(long *)(lVar31 + 0xd8) + 0x21) = 1;
            }
            plVar11 = extraout_x1_05;
            if (*(char *)(lVar31 + 0xe0) != '\0') {
              *(undefined1 *)(*(long *)(lVar31 + 0xb0) + 0x10) = 0;
            }
          }
        }
        break;
      }
    }
    lVar26 = lVar26 + 1;
  } while (lVar26 != 0x10);
  uVar8 = *(uint *)(param_1 + 0x12a);
  if (0x1f < uVar8) goto LAB_71026bf888;
  iVar9 = *(int *)((long)param_1 + (ulong)uVar8 * 4 + 0xc60);
  if (uVar8 == 0) {
    if (-1 < iVar9) {
      lVar26 = param_1[0x62][0x1a][(ulong)*(uint *)(param_1 + 0x18c) * 2];
      if (lVar26 != 0) {
        *(undefined1 *)(lVar26 + 0x110) = 1;
        FUN_71025e9d50((long *)(lVar26 + 0x108),plVar11,(long ****)param_3,(byte ****)param_4,
                       (long ****)param_5,param_6,param_7,param_8);
        if ((*(char *)(lVar26 + 0xe0) != '\0') && (*(long *)(lVar26 + 200) != 0)) {
          *(undefined2 *)(*(long *)(lVar26 + 200) + 0x30) = 0;
        }
        if (*(long *)(lVar26 + 0xd8) != 0) {
          *(undefined1 *)(*(long *)(lVar26 + 0xd8) + 0x21) = 0;
        }
        plVar11 = extraout_x1_08;
        if (*(char *)(lVar26 + 0xe0) != '\0') {
          *(undefined1 *)(*(long *)(lVar26 + 0xb0) + 0x10) = 1;
        }
      }
      lVar26 = param_1[0x62][0x1a][(ulong)*(uint *)((long)param_1 + 0xcd4) * 2];
      if (lVar26 != 0) {
        *(undefined1 *)(lVar26 + 0x110) = 1;
        FUN_71025e9d50((long *)(lVar26 + 0x108),plVar11,(long ****)param_3,(byte ****)param_4,
                       (long ****)param_5,param_6,param_7,param_8);
        if ((*(char *)(lVar26 + 0xe0) != '\0') && (*(long *)(lVar26 + 200) != 0)) {
          *(undefined2 *)(*(long *)(lVar26 + 200) + 0x30) = 0;
        }
        if (*(long *)(lVar26 + 0xd8) != 0) {
          *(undefined1 *)(*(long *)(lVar26 + 0xd8) + 0x21) = 0;
        }
        plVar11 = extraout_x1_09;
        if (*(char *)(lVar26 + 0xe0) != '\0') {
          *(undefined1 *)(*(long *)(lVar26 + 0xb0) + 0x10) = 1;
        }
      }
    }
  }
  else if (-1 < iVar9) {
    lVar26 = param_1[0x62][0x1a][(ulong)*(uint *)(param_1 + 0x18c) * 2];
    if (lVar26 != 0) {
      *(undefined1 *)(lVar26 + 0x110) = 0;
      FUN_71025e9d50((long *)(lVar26 + 0x108),plVar11,(long ****)param_3,(byte ****)param_4,
                     (long ****)param_5,param_6,param_7,param_8);
      if ((*(char *)(lVar26 + 0xe0) != '\0') && (*(long *)(lVar26 + 200) != 0)) {
        *(undefined2 *)(*(long *)(lVar26 + 200) + 0x30) = 0x101;
      }
      if (*(long *)(lVar26 + 0xd8) != 0) {
        *(undefined1 *)(*(long *)(lVar26 + 0xd8) + 0x21) = 1;
      }
      plVar11 = extraout_x1_06;
      if (*(char *)(lVar26 + 0xe0) != '\0') {
        *(undefined1 *)(*(long *)(lVar26 + 0xb0) + 0x10) = 0;
      }
    }
    lVar26 = param_1[0x62][0x1a][(ulong)*(uint *)((long)param_1 + 0xcd4) * 2];
    if (lVar26 != 0) {
      *(undefined1 *)(lVar26 + 0x110) = 0;
      FUN_71025e9d50((long *)(lVar26 + 0x108),plVar11,(long ****)param_3,(byte ****)param_4,
                     (long ****)param_5,param_6,param_7,param_8);
      if ((*(char *)(lVar26 + 0xe0) != '\0') && (*(long *)(lVar26 + 200) != 0)) {
        *(undefined2 *)(*(long *)(lVar26 + 200) + 0x30) = 0x101;
      }
      if (*(long *)(lVar26 + 0xd8) != 0) {
        *(undefined1 *)(*(long *)(lVar26 + 0xd8) + 0x21) = 1;
      }
      plVar11 = extraout_x1_07;
      if (*(char *)(lVar26 + 0xe0) != '\0') {
        *(undefined1 *)(*(long *)(lVar26 + 0xb0) + 0x10) = 0;
      }
    }
  }
  uVar8 = *(uint *)(param_1 + 0x12a);
  if (0x1f < uVar8) goto LAB_71026bf888;
  iVar9 = *(int *)((long)param_1 + (ulong)uVar8 * 4 + 0xc60);
  if (uVar8 == 1) {
    if (-1 < iVar9) {
      lVar26 = param_1[0x62][0x1a][(ulong)*(uint *)((long)param_1 + 0xc64) * 2];
      if (lVar26 != 0) {
        *(undefined1 *)(lVar26 + 0x110) = 1;
        FUN_71025e9d50((long *)(lVar26 + 0x108),plVar11,(long ****)param_3,(byte ****)param_4,
                       (long ****)param_5,param_6,param_7,param_8);
        if ((*(char *)(lVar26 + 0xe0) != '\0') && (*(long *)(lVar26 + 200) != 0)) {
          *(undefined2 *)(*(long *)(lVar26 + 200) + 0x30) = 0;
        }
        if (*(long *)(lVar26 + 0xd8) != 0) {
          *(undefined1 *)(*(long *)(lVar26 + 0xd8) + 0x21) = 0;
        }
        plVar11 = extraout_x1_10;
        if (*(char *)(lVar26 + 0xe0) != '\0') {
          *(undefined1 *)(*(long *)(lVar26 + 0xb0) + 0x10) = 1;
        }
      }
      lVar26 = param_1[0x62][0x1a][(ulong)*(uint *)(param_1 + 0x19b) * 2];
      if (lVar26 != 0) {
        *(undefined1 *)(lVar26 + 0x110) = 1;
        FUN_71025e9d50((long *)(lVar26 + 0x108),plVar11,(long ****)param_3,(byte ****)param_4,
                       (long ****)param_5,param_6,param_7,param_8);
        if ((*(char *)(lVar26 + 0xe0) != '\0') && (*(long *)(lVar26 + 200) != 0)) {
          *(undefined2 *)(*(long *)(lVar26 + 200) + 0x30) = 0;
        }
        if (*(long *)(lVar26 + 0xd8) != 0) {
          *(undefined1 *)(*(long *)(lVar26 + 0xd8) + 0x21) = 0;
        }
        plVar11 = extraout_x1_11;
        if (*(char *)(lVar26 + 0xe0) != '\0') {
          *(undefined1 *)(*(long *)(lVar26 + 0xb0) + 0x10) = 1;
        }
      }
    }
  }
  else if (-1 < iVar9) {
    lVar26 = param_1[0x62][0x1a][(ulong)*(uint *)((long)param_1 + 0xc64) * 2];
    if (lVar26 != 0) {
      *(undefined1 *)(lVar26 + 0x110) = 0;
      FUN_71025e9d50((long *)(lVar26 + 0x108),plVar11,(long ****)param_3,(byte ****)param_4,
                     (long ****)param_5,param_6,param_7,param_8);
      if ((*(char *)(lVar26 + 0xe0) != '\0') && (*(long *)(lVar26 + 200) != 0)) {
        *(undefined2 *)(*(long *)(lVar26 + 200) + 0x30) = 0x101;
      }
      if (*(long *)(lVar26 + 0xd8) != 0) {
        *(undefined1 *)(*(long *)(lVar26 + 0xd8) + 0x21) = 1;
      }
      plVar11 = extraout_x1_12;
      if (*(char *)(lVar26 + 0xe0) != '\0') {
        *(undefined1 *)(*(long *)(lVar26 + 0xb0) + 0x10) = 0;
      }
    }
    lVar26 = param_1[0x62][0x1a][(ulong)*(uint *)(param_1 + 0x19b) * 2];
    if (lVar26 != 0) {
      *(undefined1 *)(lVar26 + 0x110) = 0;
      FUN_71025e9d50((long *)(lVar26 + 0x108),plVar11,(long ****)param_3,(byte ****)param_4,
                     (long ****)param_5,param_6,param_7,param_8);
      if ((*(char *)(lVar26 + 0xe0) != '\0') && (*(long *)(lVar26 + 200) != 0)) {
        *(undefined2 *)(*(long *)(lVar26 + 200) + 0x30) = 0x101;
      }
      if (*(long *)(lVar26 + 0xd8) != 0) {
        *(undefined1 *)(*(long *)(lVar26 + 0xd8) + 0x21) = 1;
      }
      plVar11 = extraout_x1_13;
      if (*(char *)(lVar26 + 0xe0) != '\0') {
        *(undefined1 *)(*(long *)(lVar26 + 0xb0) + 0x10) = 0;
      }
    }
  }
  uVar8 = *(uint *)(param_1 + 0x12a);
  if (0x1f < uVar8) goto LAB_71026bf888;
  iVar9 = *(int *)((long)param_1 + (ulong)uVar8 * 4 + 0xc60);
  if (uVar8 == 2) {
    if (-1 < iVar9) {
      lVar26 = param_1[0x62][0x1a][(ulong)*(uint *)(param_1 + 0x18d) * 2];
      if (lVar26 != 0) {
        *(undefined1 *)(lVar26 + 0x110) = 1;
        FUN_71025e9d50((long *)(lVar26 + 0x108),plVar11,(long ****)param_3,(byte ****)param_4,
                       (long ****)param_5,param_6,param_7,param_8);
        if ((*(char *)(lVar26 + 0xe0) != '\0') && (*(long *)(lVar26 + 200) != 0)) {
          *(undefined2 *)(*(long *)(lVar26 + 200) + 0x30) = 0;
        }
        if (*(long *)(lVar26 + 0xd8) != 0) {
          *(undefined1 *)(*(long *)(lVar26 + 0xd8) + 0x21) = 0;
        }
        plVar11 = extraout_x1_14;
        if (*(char *)(lVar26 + 0xe0) != '\0') {
          *(undefined1 *)(*(long *)(lVar26 + 0xb0) + 0x10) = 1;
        }
      }
      lVar26 = param_1[0x62][0x1a][(ulong)*(uint *)((long)param_1 + 0xcdc) * 2];
      if (lVar26 != 0) {
        *(undefined1 *)(lVar26 + 0x110) = 1;
        FUN_71025e9d50((long *)(lVar26 + 0x108),plVar11,(long ****)param_3,(byte ****)param_4,
                       (long ****)param_5,param_6,param_7,param_8);
        if ((*(char *)(lVar26 + 0xe0) != '\0') && (*(long *)(lVar26 + 200) != 0)) {
          *(undefined2 *)(*(long *)(lVar26 + 200) + 0x30) = 0;
        }
        if (*(long *)(lVar26 + 0xd8) != 0) {
          *(undefined1 *)(*(long *)(lVar26 + 0xd8) + 0x21) = 0;
        }
        if (*(char *)(lVar26 + 0xe0) != '\0') {
          *(undefined1 *)(*(long *)(lVar26 + 0xb0) + 0x10) = 1;
        }
      }
    }
  }
  else if (-1 < iVar9) {
    lVar26 = param_1[0x62][0x1a][(ulong)*(uint *)(param_1 + 0x18d) * 2];
    if (lVar26 != 0) {
      *(undefined1 *)(lVar26 + 0x110) = 0;
      FUN_71025e9d50((long *)(lVar26 + 0x108),plVar11,(long ****)param_3,(byte ****)param_4,
                     (long ****)param_5,param_6,param_7,param_8);
      if ((*(char *)(lVar26 + 0xe0) != '\0') && (*(long *)(lVar26 + 200) != 0)) {
        *(undefined2 *)(*(long *)(lVar26 + 200) + 0x30) = 0x101;
      }
      if (*(long *)(lVar26 + 0xd8) != 0) {
        *(undefined1 *)(*(long *)(lVar26 + 0xd8) + 0x21) = 1;
      }
      plVar11 = extraout_x1_15;
      if (*(char *)(lVar26 + 0xe0) != '\0') {
        *(undefined1 *)(*(long *)(lVar26 + 0xb0) + 0x10) = 0;
      }
    }
    lVar26 = param_1[0x62][0x1a][(ulong)*(uint *)((long)param_1 + 0xcdc) * 2];
    if (lVar26 != 0) {
      *(undefined1 *)(lVar26 + 0x110) = 0;
      FUN_71025e9d50((long *)(lVar26 + 0x108),plVar11,(long ****)param_3,(byte ****)param_4,
                     (long ****)param_5,param_6,param_7,param_8);
      if ((*(char *)(lVar26 + 0xe0) != '\0') && (*(long *)(lVar26 + 200) != 0)) {
        *(undefined2 *)(*(long *)(lVar26 + 200) + 0x30) = 0x101;
      }
      if (*(long *)(lVar26 + 0xd8) != 0) {
        *(undefined1 *)(*(long *)(lVar26 + 0xd8) + 0x21) = 1;
      }
      if (*(char *)(lVar26 + 0xe0) != '\0') {
        *(undefined1 *)(*(long *)(lVar26 + 0xb0) + 0x10) = 0;
      }
    }
  }
  uVar16 = (ulong)*(uint *)(param_1 + 0x12a);
  lVar26 = param_1[0x60][9][uVar16];
  puVar13 = (ulong *)param_1[0x60][0xc];
  if (puVar13 != (ulong *)(lVar26 + 8)) {
    param_3 = *(undefined ***)(lVar26 + 0x10);
    FUN_7102616cf0(puVar13,*(undefined1 (**) [16])(lVar26 + 8),(undefined1 (*) [16])param_3,
                   (byte ****)param_4,(long ****)param_5,param_6,param_7,param_8);
    uVar16 = (ulong)*(uint *)(param_1 + 0x12a);
    lVar26 = param_1[0x60][9][uVar16];
    puVar13 = (ulong *)param_1[0x60][0xc];
  }
  if (puVar13 + 3 != (ulong *)(lVar26 + 0x20)) {
    param_3 = *(undefined ***)(lVar26 + 0x28);
    FUN_7102616cf0(puVar13 + 3,*(undefined1 (**) [16])(lVar26 + 0x20),(undefined1 (*) [16])param_3,
                   (byte ****)param_4,(long ****)param_5,param_6,param_7,param_8);
    uVar16 = (ulong)*(uint *)(param_1 + 0x12a);
  }
  FUN_7102624870((long)param_1[0x61],uVar16);
  FUN_7102624740((long)param_1[0x61],(ulong)*(uint *)(param_1 + 0x12a));
  pplVar23 = param_1[0x60];
  uVar8 = 1 << (ulong)(*(uint *)(param_1 + 0x12a) & 0x1f);
  FUN_710262bb40((long)pplVar23,uVar8);
  FUN_710262beb0((long)pplVar23,~uVar8);
  FUN_710262c200((long)param_1[0x60],*(uint *)(param_1 + 0x12a));
  plVar11 = param_1[0x60][0xc];
  lVar26 = param_1[0x60][9][*(uint *)(param_1 + 0x12a)];
  lVar31 = *(long *)(lVar26 + 0x40);
  plVar11[7] = *(ulong *)(lVar26 + 0x48) & 0xffffffff;
  plVar11[6] = lVar31;
  lVar31 = *(long *)(lVar26 + 0x50);
  plVar11[9] = *(ulong *)(lVar26 + 0x58) & 0xffffffff;
  plVar11[8] = lVar31;
  lVar31 = *(long *)(lVar26 + 0x60);
  plVar11[0xb] = *(ulong *)(lVar26 + 0x68) & 0xffffffff;
  plVar11[10] = lVar31;
  lVar31 = *(long *)(lVar26 + 0x70);
  plVar11[0xd] = *(ulong *)(lVar26 + 0x78) & 0xffffffff;
  plVar11[0xc] = lVar31;
  lVar31 = *(long *)(lVar26 + 0x80);
  plVar11[0xf] = *(ulong *)(lVar26 + 0x88) & 0xffffffff;
  plVar11[0xe] = lVar31;
  *(undefined1 *)(plVar11 + 0x10) = *(undefined1 *)(lVar26 + 0x90);
  lVar31 = *(long *)(lVar26 + 0xa0);
  plVar11[0x13] = *(ulong *)(lVar26 + 0xa8) & 0xffffffff;
  plVar11[0x12] = lVar31;
  lVar31 = *(long *)(lVar26 + 0xb0);
  plVar11[0x15] = *(ulong *)(lVar26 + 0xb8) & 0xffffffff;
  plVar11[0x14] = lVar31;
  if (*(int *)(param_1 + 0x12a) == 1) {
    plVar11 = (long *)*param_1[0x60][3];
    do {
      if (plVar11 == (long *)param_1[0x60][3][1]) goto LAB_71026bda18;
      lVar26 = *plVar11;
      plVar11 = plVar11 + 1;
    } while ((*(ulong *)(lVar26 + 0xa0) & 0xffffffffff) != 0x77e350c3c);
    puVar27 = *(undefined8 **)(lVar26 + 0x130);
    uVar8 = FUN_7103151710((byte *)"IPP0101");
    puVar36 = (undefined8 *)*puVar27;
    puVar2 = (undefined8 *)puVar27[1];
    uVar17 = extraout_x1_38;
    puVar27 = puVar36;
    if (puVar36 != puVar2) {
      do {
        plVar11 = (long *)*puVar27;
        if ((plVar11[3] != 0) && (*(uint *)(plVar11[3] + 0x100) == uVar8)) goto LAB_71026bec3c;
        puVar27 = puVar27 + 1;
      } while (puVar2 != puVar27);
      plVar11 = (long *)0x0;
LAB_71026bec3c:
      uVar8 = FUN_7103151710((byte *)"IPP0102");
      uVar17 = extraout_x1_39;
      if (puVar36 == puVar2) goto LAB_71026bed18;
      do {
        plVar12 = (long *)*puVar36;
        if ((plVar12[3] != 0) && (*(uint *)(plVar12[3] + 0x100) == uVar8)) goto LAB_71026bda20;
        puVar36 = puVar36 + 1;
      } while (puVar2 != puVar36);
      goto LAB_71026bed00;
    }
  }
  else if (*(int *)(param_1 + 0x12a) == 2) {
    plVar11 = (long *)*param_1[0x60][3];
    do {
      if (plVar11 == (long *)param_1[0x60][3][1]) goto LAB_71026bda18;
      lVar26 = *plVar11;
      plVar11 = plVar11 + 1;
    } while ((*(ulong *)(lVar26 + 0xa0) & 0xffffffffff) != 0x7f8a17e92);
    puVar27 = *(undefined8 **)(lVar26 + 0x130);
    uVar8 = FUN_7103151710((byte *)"IPP0201");
    puVar36 = (undefined8 *)*puVar27;
    puVar2 = (undefined8 *)puVar27[1];
    uVar17 = extraout_x1_36;
    puVar27 = puVar36;
    if (puVar36 != puVar2) {
      do {
        plVar11 = (long *)*puVar27;
        if ((plVar11[3] != 0) && (*(uint *)(plVar11[3] + 0x100) == uVar8)) goto LAB_71026bebb4;
        puVar27 = puVar27 + 1;
      } while (puVar2 != puVar27);
      plVar11 = (long *)0x0;
LAB_71026bebb4:
      uVar8 = FUN_7103151710((byte *)"IPP0202");
      uVar17 = extraout_x1_37;
      if (puVar36 == puVar2) goto LAB_71026bed18;
      do {
        plVar12 = (long *)*puVar36;
        if ((plVar12[3] != 0) && (*(uint *)(plVar12[3] + 0x100) == uVar8)) goto LAB_71026bda20;
        puVar36 = puVar36 + 1;
      } while (puVar2 != puVar36);
      goto LAB_71026bed00;
    }
  }
  else {
    plVar11 = (long *)*param_1[0x60][3];
    do {
      if (plVar11 == (long *)param_1[0x60][3][1]) goto LAB_71026bda18;
      lVar26 = *plVar11;
      plVar11 = plVar11 + 1;
    } while ((*(ulong *)(lVar26 + 0xa0) & 0xffffffffff) != 0x7b569df99);
    puVar27 = *(undefined8 **)(lVar26 + 0x130);
    uVar8 = FUN_7103151710((byte *)"IPP0001");
    puVar36 = (undefined8 *)*puVar27;
    puVar2 = (undefined8 *)puVar27[1];
    uVar17 = extraout_x1_40;
    puVar27 = puVar36;
    if (puVar36 != puVar2) {
      do {
        plVar11 = (long *)*puVar27;
        if ((plVar11[3] != 0) && (*(uint *)(plVar11[3] + 0x100) == uVar8)) goto LAB_71026becc4;
        puVar27 = puVar27 + 1;
      } while (puVar2 != puVar27);
      plVar11 = (long *)0x0;
LAB_71026becc4:
      uVar8 = FUN_7103151710((byte *)"IPP0002");
      uVar17 = extraout_x1_41;
      if (puVar36 == puVar2) {
LAB_71026bed18:
        plVar12 = (long *)0x0;
        goto LAB_71026bda20;
      }
      do {
        plVar12 = (long *)*puVar36;
        if ((plVar12[3] != 0) && (*(uint *)(plVar12[3] + 0x100) == uVar8)) goto LAB_71026bda20;
        puVar36 = puVar36 + 1;
      } while (puVar2 != puVar36);
LAB_71026bed00:
      plVar12 = (long *)0x0;
      goto LAB_71026bda20;
    }
  }
  plVar12 = (long *)0x0;
  plVar11 = (long *)0x0;
  goto LAB_71026bda20;
LAB_71026bda18:
  plVar12 = (long *)0x0;
  plVar11 = (long *)0x0;
  uVar17 = extraout_x1_16;
LAB_71026bda20:
  if (((DAT_71053144d8 & 1) == 0) &&
     (iVar9 = __cxa_guard_acquire(&DAT_71053144d8), uVar17 = extraout_x1_42, iVar9 != 0)) {
    FUN_7101764000();
    param_3 = &PTR_LOOP_7104f17000;
    FUN_71000001c0();
    __cxa_guard_release(&DAT_71053144d8);
    uVar17 = extraout_x1_43;
  }
  if (DAT_71052c51ba == '\0') {
    if ((plVar11 != (long *)0x0) && ((char)plVar11[4] == '\0')) {
      *(undefined1 *)(plVar11 + 4) = 1;
      lVar31 = *plVar11;
      plVar29 = (long *)plVar11[1];
      lVar26 = plVar11[2];
      *plVar29 = lVar31;
      *(long **)(lVar31 + 8) = plVar29;
      *(long *)(lVar26 + 0x30) = *(long *)(lVar26 + 0x30) + -1;
      *plVar11 = 0;
      plVar11[1] = 0;
      puVar27 = *(undefined8 **)(lVar26 + 0x28);
      *plVar11 = lVar26 + 0x20;
      plVar11[1] = (long)puVar27;
      *(long **)(lVar26 + 0x28) = plVar11;
      *puVar27 = plVar11;
      *(long *)(lVar26 + 0x18) = *(long *)(lVar26 + 0x18) + 1;
      iVar9 = 0;
      if (plVar11[3] != 0) {
        iVar9 = *(int *)(plVar11[3] + 0x110);
      }
      *(int *)(lVar26 + 0x48) = *(int *)(lVar26 + 0x48) + iVar9;
    }
    if ((plVar12 != (long *)0x0) && ((char)plVar12[4] != '\0')) {
      plVar11 = (long *)plVar12[1];
      lVar26 = plVar12[2];
      lVar31 = *plVar12;
      *(undefined1 *)(plVar12 + 4) = 0;
      *plVar11 = lVar31;
      *(long **)(lVar31 + 8) = plVar11;
      *(long *)(lVar26 + 0x18) = *(long *)(lVar26 + 0x18) + -1;
      *plVar12 = 0;
      plVar12[1] = 0;
      puVar27 = *(undefined8 **)(lVar26 + 0x40);
      *plVar12 = lVar26 + 0x38;
      plVar12[1] = (long)puVar27;
      *(long **)(lVar26 + 0x40) = plVar12;
      *puVar27 = plVar12;
      *(long *)(lVar26 + 0x30) = *(long *)(lVar26 + 0x30) + 1;
      iVar9 = 0;
      if (plVar12[3] != 0) {
        iVar9 = *(int *)(plVar12[3] + 0x110);
      }
      iVar9 = *(int *)(lVar26 + 0x48) - iVar9;
      goto LAB_71026bdb78;
    }
  }
  else if ((plVar12 != (long *)0x0) && ((char)plVar12[4] == '\0')) {
    *(undefined1 *)(plVar12 + 4) = 1;
    lVar31 = *plVar12;
    plVar11 = (long *)plVar12[1];
    lVar26 = plVar12[2];
    *plVar11 = lVar31;
    *(long **)(lVar31 + 8) = plVar11;
    *(long *)(lVar26 + 0x30) = *(long *)(lVar26 + 0x30) + -1;
    *plVar12 = 0;
    plVar12[1] = 0;
    puVar27 = *(undefined8 **)(lVar26 + 0x28);
    *plVar12 = lVar26 + 0x20;
    plVar12[1] = (long)puVar27;
    *(long **)(lVar26 + 0x28) = plVar12;
    *puVar27 = plVar12;
    *(long *)(lVar26 + 0x18) = *(long *)(lVar26 + 0x18) + 1;
    iVar9 = 0;
    if (plVar12[3] != 0) {
      iVar9 = *(int *)(plVar12[3] + 0x110);
    }
    iVar9 = *(int *)(lVar26 + 0x48) + iVar9;
LAB_71026bdb78:
    *(int *)(lVar26 + 0x48) = iVar9;
  }
  *(undefined4 *)((long)param_1 + 0x9a4) =
       *(undefined4 *)(&DAT_7104551864 + (ulong)*(uint *)(param_1 + 0x12a) * 4);
  *(undefined4 *)(param_1 + 0x136) = 1;
  *(undefined1 *)((long)param_1 + 0x9b4) = 1;
  if (((DAT_710532ae90 & 1) == 0) &&
     (iVar9 = __cxa_guard_acquire(&DAT_710532ae90), uVar17 = extraout_x1_44, iVar9 != 0)) {
    uRam000000710532aea8 = 0;
    _DAT_710532aea0 = 0x422fd2f24288fefa;
    uRam000000710532aeb8 = 0;
    _DAT_710532aeb0 = 0x42149fbec2bac625;
    uRam000000710532aec8 = 0;
    _DAT_710532aec0 = 0x428eed0e40c58106;
    uRam000000710532aed8 = 0;
    _DAT_710532aed0 = 0x42cc10e5c2b7ea7f;
    uRam000000710532aee8 = 0;
    _DAT_710532aee0 = 0x42026a7f42be2f9e;
    uRam000000710532aef8 = 0;
    _DAT_710532aef0 = 0x42b93f7dc28b8189;
    __cxa_guard_release(&DAT_710532ae90);
    uVar17 = extraout_x1_45;
  }
  pplVar23 = *(long ***)(&DAT_710532aea0 + (ulong)*(uint *)(param_1 + 0x12a) * 0x20);
  param_1[0x13b] = (long **)0x0;
  param_1[0x13a] = pplVar23;
  if (-1 < (int)*(uint *)(param_1 + 399)) {
    lVar26 = param_1[0x62][0x1a][(ulong)*(uint *)(param_1 + 399) * 2];
    if (lVar26 == 0) {
      local_b0 = param_1[0x13a];
      local_a8 = CONCAT44(0x3f800000,(int)param_1[0x13b]);
      uStack_d8 = 0;
      local_e0 = (long ***)&DAT_3f800000;
      uStack_c8 = 0;
      local_d0 = 0x3f80000000000000;
      uStack_b8 = 0x3f800000;
      local_c0 = 0;
    }
    else {
      *(undefined1 *)(lVar26 + 0x110) = 1;
      FUN_71025e9d50((long *)(lVar26 + 0x108),uVar17,(long ****)param_3,(byte ****)param_4,
                     (long ****)param_5,param_6,param_7,param_8);
      if ((*(char *)(lVar26 + 0xe0) != '\0') && (*(long *)(lVar26 + 200) != 0)) {
        *(undefined2 *)(*(long *)(lVar26 + 200) + 0x30) = 0;
      }
      if (*(long *)(lVar26 + 0xd8) != 0) {
        *(undefined1 *)(*(long *)(lVar26 + 0xd8) + 0x21) = 0;
      }
      if (*(char *)(lVar26 + 0xe0) != '\0') {
        *(undefined1 *)(*(long *)(lVar26 + 0xb0) + 0x10) = 1;
      }
      local_b0 = param_1[0x13a];
      local_a8 = CONCAT44(0x3f800000,(int)param_1[0x13b]);
      uStack_d8 = 0;
      local_e0 = (long ***)&DAT_3f800000;
      uStack_c8 = 0;
      local_d0 = 0x3f80000000000000;
      uStack_b8 = 0x3f800000;
      local_c0 = 0;
      (**(code **)(**(long **)(lVar26 + 0x90) + 0x148))(*(long **)(lVar26 + 0x90),&local_e0);
      lVar26 = *(long *)(lVar26 + 0xd8);
      uVar17 = extraout_x1_17;
      if (lVar26 != 0) {
        local_88 = uStack_c8;
        local_90 = local_d0;
        uStack_98 = uStack_d8;
        local_a0 = local_e0;
        local_68 = local_a8;
        local_70 = local_b0;
        local_78 = uStack_b8;
        local_80 = local_c0;
        if (*(char *)(*(long *)(lVar26 + 8) + 0xa8) != '\0') {
          plVar11 = *(long **)(*(long *)(lVar26 + 8) + 0x48);
          (**(code **)(*plVar11 + 0x20))(plVar11,&local_a0);
          uVar17 = extraout_x1_18;
        }
        *(undefined1 *)(lVar26 + 0x20) = 1;
      }
    }
  }
  if (*(uint *)((long)param_1 + 0x9a4) < 2) {
    *(undefined4 *)(param_1 + 0x13c) = 0;
    if ((-1 < (int)*(uint *)((long)param_1 + 0xc7c)) &&
       (lVar26 = param_1[0x62][0x1a][(ulong)*(uint *)((long)param_1 + 0xc7c) * 2], lVar26 != 0)) {
      *(undefined1 *)(lVar26 + 0x110) = 0;
      FUN_71025e9d50((long *)(lVar26 + 0x108),uVar17,(long ****)param_3,(byte ****)param_4,
                     (long ****)param_5,param_6,param_7,param_8);
      if ((*(char *)(lVar26 + 0xe0) != '\0') && (*(long *)(lVar26 + 200) != 0)) {
        *(undefined2 *)(*(long *)(lVar26 + 200) + 0x30) = 0;
      }
      if (*(long *)(lVar26 + 0xd8) != 0) {
        *(undefined1 *)(*(long *)(lVar26 + 0xd8) + 0x21) = 0;
      }
      if (*(char *)(lVar26 + 0xe0) != '\0') {
        *(undefined1 *)(*(long *)(lVar26 + 0xb0) + 0x10) = 1;
      }
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x13c) = 1;
    *(undefined1 *)((long)param_1 + 0x9e4) = 1;
    if (((DAT_710532ae90 & 1) == 0) &&
       (iVar9 = __cxa_guard_acquire(&DAT_710532ae90), uVar17 = extraout_x1_48, iVar9 != 0)) {
      uRam000000710532aea8 = 0;
      _DAT_710532aea0 = 0x422fd2f24288fefa;
      uRam000000710532aeb8 = 0;
      _DAT_710532aeb0 = 0x42149fbec2bac625;
      uRam000000710532aec8 = 0;
      _DAT_710532aec0 = 0x428eed0e40c58106;
      uRam000000710532aed8 = 0;
      _DAT_710532aed0 = 0x42cc10e5c2b7ea7f;
      uRam000000710532aee8 = 0;
      _DAT_710532aee0 = 0x42026a7f42be2f9e;
      uRam000000710532aef8 = 0;
      _DAT_710532aef0 = 0x42b93f7dc28b8189;
      __cxa_guard_release(&DAT_710532ae90);
      uVar17 = extraout_x1_49;
    }
    pplVar23 = *(long ***)(&DAT_710532aeb0 + (ulong)*(uint *)(param_1 + 0x12a) * 0x20);
    param_1[0x141] = (long **)0x0;
    param_1[0x140] = pplVar23;
    if (-1 < (int)*(uint *)((long)param_1 + 0xc7c)) {
      lVar26 = param_1[0x62][0x1a][(ulong)*(uint *)((long)param_1 + 0xc7c) * 2];
      if (lVar26 == 0) {
        local_b0 = param_1[0x140];
        local_a8 = CONCAT44(0x3f800000,(int)param_1[0x141]);
        uStack_d8 = 0;
        local_e0 = (long ***)&DAT_3f800000;
        uStack_c8 = 0;
        local_d0 = 0x3f80000000000000;
        uStack_b8 = 0x3f800000;
        local_c0 = 0;
      }
      else {
        *(undefined1 *)(lVar26 + 0x110) = 1;
        FUN_71025e9d50((long *)(lVar26 + 0x108),uVar17,(long ****)param_3,(byte ****)param_4,
                       (long ****)param_5,param_6,param_7,param_8);
        if ((*(char *)(lVar26 + 0xe0) != '\0') && (*(long *)(lVar26 + 200) != 0)) {
          *(undefined2 *)(*(long *)(lVar26 + 200) + 0x30) = 0;
        }
        if (*(long *)(lVar26 + 0xd8) != 0) {
          *(undefined1 *)(*(long *)(lVar26 + 0xd8) + 0x21) = 0;
        }
        if (*(char *)(lVar26 + 0xe0) != '\0') {
          *(undefined1 *)(*(long *)(lVar26 + 0xb0) + 0x10) = 1;
        }
        local_b0 = param_1[0x140];
        local_a8 = CONCAT44(0x3f800000,(int)param_1[0x141]);
        uStack_d8 = 0;
        local_e0 = (long ***)&DAT_3f800000;
        uStack_c8 = 0;
        local_d0 = 0x3f80000000000000;
        uStack_b8 = 0x3f800000;
        local_c0 = 0;
        (**(code **)(**(long **)(lVar26 + 0x90) + 0x148))(*(long **)(lVar26 + 0x90),&local_e0);
        lVar26 = *(long *)(lVar26 + 0xd8);
        if (lVar26 != 0) {
          local_88 = uStack_c8;
          local_90 = local_d0;
          uStack_98 = uStack_d8;
          local_a0 = local_e0;
          local_68 = local_a8;
          local_70 = local_b0;
          local_78 = uStack_b8;
          local_80 = local_c0;
          if (*(char *)(*(long *)(lVar26 + 8) + 0xa8) != '\0') {
            plVar11 = *(long **)(*(long *)(lVar26 + 8) + 0x48);
            (**(code **)(*plVar11 + 0x20))(plVar11,&local_a0);
          }
          *(undefined1 *)(lVar26 + 0x20) = 1;
        }
      }
    }
  }
  *(undefined4 *)(param_1 + 0x142) = 0;
  *(undefined4 *)(param_1 + 0x14c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x14e) = 0;
  *(undefined4 *)(param_1 + 0x158) = 0xffffffff;
  pppplVar14 = (long ****)
               FUN_710392e290(0x10,0x50,(long ****)param_3,(byte ****)param_4,(long ****)param_5,
                              param_6,param_7,param_8);
  if (pppplVar14 == (long ****)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_e0 = (long ***)((ulong)local_e0 & 0xffffffff00000000);
      local_a0 = (long ***)&DAT_00000050;
      pppplVar14 = &local_a0;
      uVar16 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_e0);
      if (((uVar16 & 1) != 0) &&
         (pppplVar14 = (long ****)
                       FUN_710392e290(0x10,0x50,pppplVar14,(byte ****)param_4,(long ****)param_5,
                                      param_6,param_7,param_8), pppplVar14 != (long ****)0x0))
      goto LAB_71026be138;
    }
    pppplVar14 = (long ****)0x0;
  }
LAB_71026be138:
  ppplVar6 = ppplRam0000007107459008;
  ppplVar5 = _ConstantZero;
  *pppplVar14 = param_1;
  *(undefined2 *)(pppplVar14 + 1) = 1;
  pppplVar14[6] = (long ***)0x0;
  pppplVar14[7] = (long ***)0x0;
  *(undefined1 *)((long)pppplVar14 + 10) = 0;
  pppplVar14[3] = ppplVar6;
  pppplVar14[2] = ppplVar5;
  pppplVar14[5] = ppplVar6;
  pppplVar14[4] = ppplVar5;
  *(undefined4 *)((long)pppplVar14 + 0xc) = 0xffffffff;
  *(undefined4 *)(pppplVar14 + 8) = 0;
  bVar7 = FUN_71031675b0(*(long *)(*lib::Singleton<app::StageManager>::instance_ + 0x1c8),
                         (ulong)param_1,pppplVar14,(byte ****)param_4,(long ****)param_5,param_6,
                         param_7,param_8);
  *(bool *)(pppplVar14 + 1) = bVar7;
  pplVar23 = param_1[0x182];
  param_1[0x182] = (long **)pppplVar14;
  if (pplVar23 != (long **)0x0) {
    if ((*(char *)((long)DAT_71052b6fd8 + 9) != '\0') && (*(char *)((long)pplVar23 + 10) != '\0')) {
      if (*(char *)((long)pplVar23 + 9) != '\0') {
        uVar8 = *(uint *)((long)pplVar23 + 0xc);
        if ((uVar8 < 0x38) &&
           (piVar24 = *(int **)(*DAT_71052b6fd8 + 0xc0),
           *(char *)((long)piVar24 + (long)(int)uVar8 + 0x464) != '\0')) {
          *(undefined1 *)((long)piVar24 + (long)(int)uVar8 + 0x464) = 0;
          *piVar24 = *piVar24 + -1;
        }
        *(undefined4 *)((long)pplVar23 + 0xc) = 0xffffffff;
        *(undefined1 *)((long)pplVar23 + 9) = 0;
      }
      *(undefined1 *)((long)pplVar23 + 10) = 0;
    }
    FUN_71031676c0(*(long *)(*lib::Singleton<app::StageManager>::instance_ + 0x1c8),(ulong)*pplVar23
                   ,(long)pplVar23);
    FUN_710392eb40((ulong)pplVar23);
    pppplVar14 = (long ****)param_1[0x182];
  }
  local_a0 = (long ***)param_1[0x11a];
  local_e0 = (long ***)param_1[0x11b];
  uStack_98 = 0;
  uStack_d8 = 0;
  FUN_710317e570((long)pppplVar14,&local_a0,&local_e0);
  pplVar23 = param_1[0x182];
  if (*(char *)((long)pplVar23 + 9) != '\0') {
    uVar8 = *(uint *)((long)pplVar23 + 0xc);
    if ((uVar8 < 0x38) &&
       (piVar24 = *(int **)(*DAT_71052b6fd8 + 0xc0),
       *(char *)((long)piVar24 + (long)(int)uVar8 + 0x464) != '\0')) {
      *(undefined1 *)((long)piVar24 + (long)(int)uVar8 + 0x464) = 0;
      *piVar24 = *piVar24 + -1;
    }
    *(undefined4 *)((long)pplVar23 + 0xc) = 0xffffffff;
    *(undefined1 *)((long)pplVar23 + 9) = 0;
  }
  *(undefined1 *)((long)pplVar23 + 10) = 0;
  pppplVar15 = (long ****)
               FUN_710392e290(0x10,0x50,pppplVar15,(byte ****)param_4,(long ****)param_5,param_6,
                              param_7,param_8);
  if (pppplVar15 == (long ****)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_e0 = (long ***)((ulong)local_e0 & 0xffffffff00000000);
      local_a0 = (long ***)&DAT_00000050;
      pppplVar15 = &local_a0;
      uVar16 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_e0);
      if (((uVar16 & 1) != 0) &&
         (pppplVar15 = (long ****)
                       FUN_710392e290(0x10,0x50,pppplVar15,(byte ****)param_4,(long ****)param_5,
                                      param_6,param_7,param_8), pppplVar15 != (long ****)0x0))
      goto LAB_71026be308;
    }
    pppplVar15 = (long ****)0x0;
  }
LAB_71026be308:
  ppplVar6 = ppplRam0000007107459008;
  ppplVar5 = _ConstantZero;
  *pppplVar15 = param_1;
  *(undefined2 *)(pppplVar15 + 1) = 1;
  *(undefined1 *)((long)pppplVar15 + 10) = 0;
  *(undefined4 *)((long)pppplVar15 + 0xc) = 0xffffffff;
  *(undefined4 *)(pppplVar15 + 8) = 0;
  pppplVar15[6] = (long ***)0x0;
  pppplVar15[7] = (long ***)0x0;
  pppplVar15[3] = ppplVar6;
  pppplVar15[2] = ppplVar5;
  pppplVar15[5] = ppplVar6;
  pppplVar15[4] = ppplVar5;
  bVar7 = FUN_71031675b0(*(long *)(*lib::Singleton<app::StageManager>::instance_ + 0x1c8),
                         (ulong)param_1,pppplVar15,(byte ****)param_4,(long ****)param_5,param_6,
                         param_7,param_8);
  *(bool *)(pppplVar15 + 1) = bVar7;
  pplVar23 = param_1[0x183];
  param_1[0x183] = (long **)pppplVar15;
  if (pplVar23 != (long **)0x0) {
    if ((*(char *)((long)DAT_71052b6fd8 + 9) != '\0') && (*(char *)((long)pplVar23 + 10) != '\0')) {
      if (*(char *)((long)pplVar23 + 9) != '\0') {
        uVar8 = *(uint *)((long)pplVar23 + 0xc);
        if ((uVar8 < 0x38) &&
           (piVar24 = *(int **)(*DAT_71052b6fd8 + 0xc0),
           *(char *)((long)piVar24 + (long)(int)uVar8 + 0x464) != '\0')) {
          *(undefined1 *)((long)piVar24 + (long)(int)uVar8 + 0x464) = 0;
          *piVar24 = *piVar24 + -1;
        }
        *(undefined4 *)((long)pplVar23 + 0xc) = 0xffffffff;
        *(undefined1 *)((long)pplVar23 + 9) = 0;
      }
      *(undefined1 *)((long)pplVar23 + 10) = 0;
    }
    FUN_71031676c0(*(long *)(*lib::Singleton<app::StageManager>::instance_ + 0x1c8),(ulong)*pplVar23
                   ,(long)pplVar23);
    FUN_710392eb40((ulong)pplVar23);
    pppplVar15 = (long ****)param_1[0x183];
  }
  local_a0 = (long ***)param_1[0x11a];
  local_e0 = (long ***)param_1[0x11b];
  uStack_98 = 0;
  uStack_d8 = 0;
  FUN_710317e570((long)pppplVar15,&local_a0,&local_e0);
  pplVar23 = param_1[0x183];
  if (*(char *)((long)pplVar23 + 9) != '\0') {
    uVar8 = *(uint *)((long)pplVar23 + 0xc);
    if ((uVar8 < 0x38) &&
       (piVar24 = *(int **)(*DAT_71052b6fd8 + 0xc0),
       *(char *)((long)piVar24 + (long)(int)uVar8 + 0x464) != '\0')) {
      *(undefined1 *)((long)piVar24 + (long)(int)uVar8 + 0x464) = 0;
      *piVar24 = *piVar24 + -1;
    }
    *(undefined4 *)((long)pplVar23 + 0xc) = 0xffffffff;
    *(undefined1 *)((long)pplVar23 + 9) = 0;
  }
  *(undefined1 *)((long)pplVar23 + 10) = 0;
  if (*(char *)(param_1 + 3) == '\0') {
    *(undefined4 *)(param_1 + 0x15c) = 0;
    uVar17 = extraout_x1_24;
    if ((-1 < (int)*(uint *)(param_1 + 400)) &&
       (lVar26 = param_1[0x62][0x1a][(ulong)*(uint *)(param_1 + 400) * 2], lVar26 != 0)) {
      *(undefined1 *)(lVar26 + 0x110) = 0;
      FUN_71025e9d50((long *)(lVar26 + 0x108),extraout_x1_24,pppplVar19,(byte ****)param_4,
                     (long ****)param_5,param_6,param_7,param_8);
      if ((*(char *)(lVar26 + 0xe0) != '\0') && (*(long *)(lVar26 + 200) != 0)) {
        *(undefined2 *)(*(long *)(lVar26 + 200) + 0x30) = 0x101;
      }
      if (*(long *)(lVar26 + 0xd8) != 0) {
        *(undefined1 *)(*(long *)(lVar26 + 0xd8) + 0x21) = 1;
      }
      uVar17 = extraout_x1_27;
      if (*(char *)(lVar26 + 0xe0) != '\0') {
        *(undefined1 *)(*(long *)(lVar26 + 0xb0) + 0x10) = 0;
      }
    }
    pplVar23 = param_1[0x16e];
    if (pplVar23 != (long **)0x0) {
      if (*(char *)(pplVar23 + 8) != '\0') {
        plVar11 = pplVar23[6];
        if (((plVar11 != (long *)0x0) && ((char)plVar11[2] != '\0')) &&
           (*(undefined1 *)(plVar11 + 2) = 0, (char)plVar11[10] != '\0')) {
          plVar12 = (long *)FUN_71003ac560((ulong)*(uint *)(*plVar11 + 8));
          (**(code **)(*plVar12 + 0x48))(plVar12,0);
          *(undefined1 *)(plVar11 + 10) = 0;
        }
        (*(code *)(*pplVar23)[6])(pplVar23);
        uVar17 = extraout_x1_28;
      }
      *(undefined1 *)(pplVar23 + 8) = 0;
    }
    pplVar23 = param_1[0x16b];
    if (pplVar23 != (long **)0x0) {
      if (*(char *)(pplVar23 + 8) != '\0') {
        plVar11 = pplVar23[6];
        if (((plVar11 != (long *)0x0) && ((char)plVar11[2] != '\0')) &&
           (*(undefined1 *)(plVar11 + 2) = 0, (char)plVar11[10] != '\0')) {
          plVar12 = (long *)FUN_71003ac560((ulong)*(uint *)(*plVar11 + 8));
          (**(code **)(*plVar12 + 0x48))(plVar12,0);
          *(undefined1 *)(plVar11 + 10) = 0;
        }
        (*(code *)(*pplVar23)[6])(pplVar23);
        uVar17 = extraout_x1_29;
      }
      *(undefined1 *)(pplVar23 + 8) = 0;
    }
    *(undefined4 *)(param_1 + 0x160) = 0;
    if ((-1 < (int)*(uint *)((long)param_1 + 0xc84)) &&
       (lVar26 = param_1[0x62][0x1a][(ulong)*(uint *)((long)param_1 + 0xc84) * 2], lVar26 != 0)) {
      *(undefined1 *)(lVar26 + 0x110) = 0;
      FUN_71025e9d50((long *)(lVar26 + 0x108),uVar17,pppplVar19,(byte ****)param_4,
                     (long ****)param_5,param_6,param_7,param_8);
      if ((*(char *)(lVar26 + 0xe0) != '\0') && (*(long *)(lVar26 + 200) != 0)) {
        *(undefined2 *)(*(long *)(lVar26 + 200) + 0x30) = 0x101;
      }
      if (*(long *)(lVar26 + 0xd8) != 0) {
        *(undefined1 *)(*(long *)(lVar26 + 0xd8) + 0x21) = 1;
      }
      uVar17 = extraout_x1_30;
      if (*(char *)(lVar26 + 0xe0) != '\0') {
        *(undefined1 *)(*(long *)(lVar26 + 0xb0) + 0x10) = 0;
      }
    }
    pplVar23 = param_1[0x16f];
    if (pplVar23 != (long **)0x0) {
      if (*(char *)(pplVar23 + 8) != '\0') {
        plVar11 = pplVar23[6];
        if (((plVar11 != (long *)0x0) && ((char)plVar11[2] != '\0')) &&
           (*(undefined1 *)(plVar11 + 2) = 0, (char)plVar11[10] != '\0')) {
          plVar12 = (long *)FUN_71003ac560((ulong)*(uint *)(*plVar11 + 8));
          (**(code **)(*plVar12 + 0x48))(plVar12,0);
          *(undefined1 *)(plVar11 + 10) = 0;
        }
        (*(code *)(*pplVar23)[6])(pplVar23);
        uVar17 = extraout_x1_31;
      }
      *(undefined1 *)(pplVar23 + 8) = 0;
    }
    pplVar23 = param_1[0x16c];
    if (pplVar23 != (long **)0x0) {
      if (*(char *)(pplVar23 + 8) != '\0') {
        plVar11 = pplVar23[6];
        if (((plVar11 != (long *)0x0) && ((char)plVar11[2] != '\0')) &&
           (*(undefined1 *)(plVar11 + 2) = 0, (char)plVar11[10] != '\0')) {
          plVar12 = (long *)FUN_71003ac560((ulong)*(uint *)(*plVar11 + 8));
          (**(code **)(*plVar12 + 0x48))(plVar12,0);
          *(undefined1 *)(plVar11 + 10) = 0;
        }
        (*(code *)(*pplVar23)[6])(pplVar23);
        uVar17 = extraout_x1_32;
      }
      *(undefined1 *)(pplVar23 + 8) = 0;
    }
    *(undefined4 *)(param_1 + 0x164) = 0;
    if ((-1 < (int)*(uint *)(param_1 + 0x191)) &&
       (lVar26 = param_1[0x62][0x1a][(ulong)*(uint *)(param_1 + 0x191) * 2], lVar26 != 0)) {
      *(undefined1 *)(lVar26 + 0x110) = 0;
      FUN_71025e9d50((long *)(lVar26 + 0x108),uVar17,pppplVar19,(byte ****)param_4,
                     (long ****)param_5,param_6,param_7,param_8);
      if ((*(char *)(lVar26 + 0xe0) != '\0') && (*(long *)(lVar26 + 200) != 0)) {
        *(undefined2 *)(*(long *)(lVar26 + 200) + 0x30) = 0x101;
      }
      if (*(long *)(lVar26 + 0xd8) != 0) {
        *(undefined1 *)(*(long *)(lVar26 + 0xd8) + 0x21) = 1;
      }
      if (*(char *)(lVar26 + 0xe0) != '\0') {
        *(undefined1 *)(*(long *)(lVar26 + 0xb0) + 0x10) = 0;
      }
    }
    pplVar23 = param_1[0x170];
    if (pplVar23 != (long **)0x0) {
      if (*(char *)(pplVar23 + 8) != '\0') {
        plVar11 = pplVar23[6];
        if (((plVar11 != (long *)0x0) && ((char)plVar11[2] != '\0')) &&
           (*(undefined1 *)(plVar11 + 2) = 0, (char)plVar11[10] != '\0')) {
          plVar12 = (long *)FUN_71003ac560((ulong)*(uint *)(*plVar11 + 8));
          (**(code **)(*plVar12 + 0x48))(plVar12,0);
          *(undefined1 *)(plVar11 + 10) = 0;
        }
        (*(code *)(*pplVar23)[6])(pplVar23);
      }
      *(undefined1 *)(pplVar23 + 8) = 0;
    }
    pplVar23 = param_1[0x16d];
    if (pplVar23 != (long **)0x0) {
      if (*(char *)(pplVar23 + 8) != '\0') {
        plVar11 = pplVar23[6];
        if (((plVar11 != (long *)0x0) && ((char)plVar11[2] != '\0')) &&
           (*(undefined1 *)(plVar11 + 2) = 0, (char)plVar11[10] != '\0')) {
          plVar12 = (long *)FUN_71003ac560((ulong)*(uint *)(*plVar11 + 8));
          (**(code **)(*plVar12 + 0x48))(plVar12,0);
          *(undefined1 *)(plVar11 + 10) = 0;
        }
        (*(code *)(*pplVar23)[6])(pplVar23);
      }
      *(undefined1 *)(pplVar23 + 8) = 0;
    }
  }
  else {
    uVar17 = extraout_x1_24;
    if (((DAT_710532af00 & 1) == 0) &&
       (iVar9 = __cxa_guard_acquire(&DAT_710532af00), uVar17 = extraout_x1_46, iVar9 != 0)) {
      DAT_710532af30 = 0;
      DAT_710532af38 = 0;
      uRam000000710532af18 = 0;
      _DAT_710532af10 = 0x4288f2b041059581;
      DAT_710532af20 = 0;
      DAT_710532af28 = 0;
      uRam000000710532af48 = 0;
      _DAT_710532af40 = 0x42c3f74cc1b845a2;
      uRam000000710532af58 = 0;
      _DAT_710532af50 = 0x42c3f74c42a83646;
      uRam000000710532af68 = 0;
      _DAT_710532af60 = 0;
      uRam000000710532af78 = 0;
      _DAT_710532af70 = 0x42415810c2a593f8;
      uRam000000710532af88 = 0;
      _DAT_710532af80 = 0x42b1e1cb42abc51f;
      uRam000000710532af98 = 0;
      _DAT_710532af90 = 0;
      __cxa_guard_release(&DAT_710532af00);
      uVar17 = extraout_x1_47;
    }
    uVar8 = *(uint *)(&DAT_7104551858 + (ulong)*(uint *)(param_1 + 0x12a) * 4);
    lVar26 = (ulong)*(uint *)(param_1 + 0x12a) * 0x30;
    *(undefined4 *)(param_1 + 0x15d) = 0;
    *(undefined4 *)(param_1 + 0x15c) = 1;
    *(uint *)(param_1 + 0x15a) = uVar8;
    uVar16 = *(ulong *)(lVar26 + 0x710532af18);
    pplVar23 = *(long ***)(&DAT_710532af10 + lVar26);
    *(undefined4 *)((long)param_1 + 0xae4) = 0;
    param_1[0x15f] = (long **)(uVar16 & 0xffffffff);
    param_1[0x15e] = pplVar23;
    if (-1 < (int)*(uint *)(param_1 + 400)) {
      lVar26 = param_1[0x62][0x1a][(ulong)*(uint *)(param_1 + 400) * 2];
      if (lVar26 == 0) {
        local_b0 = param_1[0x15e];
        local_a8 = CONCAT44(0x3f800000,(int)param_1[0x15f]);
        uStack_d8 = 0;
        local_e0 = (long ***)&DAT_3f800000;
        uStack_c8 = 0;
        local_d0 = 0x3f80000000000000;
        uStack_b8 = 0x3f800000;
        local_c0 = 0;
      }
      else {
        *(undefined1 *)(lVar26 + 0x110) = 0;
        FUN_71025e9d50((long *)(lVar26 + 0x108),uVar17,pppplVar19,(byte ****)param_4,
                       (long ****)param_5,param_6,param_7,param_8);
        if ((*(char *)(lVar26 + 0xe0) != '\0') && (*(long *)(lVar26 + 200) != 0)) {
          *(undefined2 *)(*(long *)(lVar26 + 200) + 0x32) = 0x101;
        }
        if (*(long *)(lVar26 + 0xd8) != 0) {
          *(undefined1 *)(*(long *)(lVar26 + 0xd8) + 0x22) = 1;
        }
        if ((*(char *)(lVar26 + 0xe0) != '\0') && (*(long *)(lVar26 + 200) != 0)) {
          *(undefined2 *)(*(long *)(lVar26 + 200) + 0x30) = 0x101;
        }
        if (*(long *)(lVar26 + 0xd8) != 0) {
          *(undefined1 *)(*(long *)(lVar26 + 0xd8) + 0x21) = 1;
        }
        if (*(char *)(lVar26 + 0xe0) != '\0') {
          *(undefined1 *)(*(long *)(lVar26 + 0xb0) + 0x10) = 0;
        }
        local_b0 = param_1[0x15e];
        local_a8 = CONCAT44(0x3f800000,(int)param_1[0x15f]);
        uStack_d8 = 0;
        local_e0 = (long ***)&DAT_3f800000;
        uStack_c8 = 0;
        local_d0 = 0x3f80000000000000;
        uStack_b8 = 0x3f800000;
        local_c0 = 0;
        (**(code **)(**(long **)(lVar26 + 0x90) + 0x148))(*(long **)(lVar26 + 0x90),&local_e0);
        lVar26 = *(long *)(lVar26 + 0xd8);
        uVar17 = extraout_x1_25;
        if (lVar26 != 0) {
          local_88 = uStack_c8;
          local_90 = local_d0;
          uStack_98 = uStack_d8;
          local_a0 = local_e0;
          local_68 = local_a8;
          local_70 = local_b0;
          local_78 = uStack_b8;
          local_80 = local_c0;
          if (*(char *)(*(long *)(lVar26 + 8) + 0xa8) != '\0') {
            plVar11 = *(long **)(*(long *)(lVar26 + 8) + 0x48);
            (**(code **)(*plVar11 + 0x20))(plVar11,&local_a0);
            uVar17 = extraout_x1_26;
          }
          *(undefined1 *)(lVar26 + 0x20) = 1;
        }
      }
      uVar8 = *(uint *)(param_1 + 0x15a);
    }
    if (uVar8 < 2) {
      *(undefined4 *)(param_1 + 0x160) = 0;
      if ((-1 < (int)*(uint *)((long)param_1 + 0xc84)) &&
         (lVar26 = param_1[0x62][0x1a][(ulong)*(uint *)((long)param_1 + 0xc84) * 2], lVar26 != 0)) {
        *(undefined1 *)(lVar26 + 0x110) = 0;
        FUN_71025e9d50((long *)(lVar26 + 0x108),uVar17,pppplVar19,(byte ****)param_4,
                       (long ****)param_5,param_6,param_7,param_8);
        if ((*(char *)(lVar26 + 0xe0) != '\0') && (*(long *)(lVar26 + 200) != 0)) {
          *(undefined2 *)(*(long *)(lVar26 + 200) + 0x30) = 0x101;
        }
        if (*(long *)(lVar26 + 0xd8) != 0) {
          *(undefined1 *)(*(long *)(lVar26 + 0xd8) + 0x21) = 1;
        }
        uVar17 = extraout_x1_35;
        if (*(char *)(lVar26 + 0xe0) != '\0') {
          *(undefined1 *)(*(long *)(lVar26 + 0xb0) + 0x10) = 0;
        }
      }
    }
    else {
      *(undefined4 *)(param_1 + 0x161) = 0;
      *(undefined4 *)(param_1 + 0x160) = 1;
      uVar16 = (&DAT_710532af28)[(ulong)*(uint *)(param_1 + 0x12a) * 6];
      pplVar23 = (long **)(&DAT_710532af20)[(ulong)*(uint *)(param_1 + 0x12a) * 6];
      *(undefined4 *)((long)param_1 + 0xb04) = 0;
      param_1[0x163] = (long **)(uVar16 & 0xffffffff);
      param_1[0x162] = pplVar23;
      if (-1 < (int)*(uint *)((long)param_1 + 0xc84)) {
        lVar26 = param_1[0x62][0x1a][(ulong)*(uint *)((long)param_1 + 0xc84) * 2];
        if (lVar26 == 0) {
          local_b0 = param_1[0x162];
          local_a8 = CONCAT44(0x3f800000,(int)param_1[0x163]);
          uStack_d8 = 0;
          local_e0 = (long ***)&DAT_3f800000;
          uStack_c8 = 0;
          local_d0 = 0x3f80000000000000;
          uStack_b8 = 0x3f800000;
          local_c0 = 0;
        }
        else {
          *(undefined1 *)(lVar26 + 0x110) = 0;
          FUN_71025e9d50((long *)(lVar26 + 0x108),uVar17,pppplVar19,(byte ****)param_4,
                         (long ****)param_5,param_6,param_7,param_8);
          if ((*(char *)(lVar26 + 0xe0) != '\0') && (*(long *)(lVar26 + 200) != 0)) {
            *(undefined2 *)(*(long *)(lVar26 + 200) + 0x32) = 0x101;
          }
          if (*(long *)(lVar26 + 0xd8) != 0) {
            *(undefined1 *)(*(long *)(lVar26 + 0xd8) + 0x22) = 1;
          }
          if ((*(char *)(lVar26 + 0xe0) != '\0') && (*(long *)(lVar26 + 200) != 0)) {
            *(undefined2 *)(*(long *)(lVar26 + 200) + 0x30) = 0x101;
          }
          if (*(long *)(lVar26 + 0xd8) != 0) {
            *(undefined1 *)(*(long *)(lVar26 + 0xd8) + 0x21) = 1;
          }
          if (*(char *)(lVar26 + 0xe0) != '\0') {
            *(undefined1 *)(*(long *)(lVar26 + 0xb0) + 0x10) = 0;
          }
          local_b0 = param_1[0x162];
          local_a8 = CONCAT44(0x3f800000,(int)param_1[0x163]);
          uStack_d8 = 0;
          local_e0 = (long ***)&DAT_3f800000;
          uStack_c8 = 0;
          local_d0 = 0x3f80000000000000;
          uStack_b8 = 0x3f800000;
          local_c0 = 0;
          (**(code **)(**(long **)(lVar26 + 0x90) + 0x148))(*(long **)(lVar26 + 0x90),&local_e0);
          lVar26 = *(long *)(lVar26 + 0xd8);
          uVar17 = extraout_x1_33;
          if (lVar26 != 0) {
            local_88 = uStack_c8;
            local_90 = local_d0;
            uStack_98 = uStack_d8;
            local_a0 = local_e0;
            local_68 = local_a8;
            local_70 = local_b0;
            local_78 = uStack_b8;
            local_80 = local_c0;
            if (*(char *)(*(long *)(lVar26 + 8) + 0xa8) != '\0') {
              plVar11 = *(long **)(*(long *)(lVar26 + 8) + 0x48);
              (**(code **)(*plVar11 + 0x20))(plVar11,&local_a0);
              uVar17 = extraout_x1_34;
            }
            *(undefined1 *)(lVar26 + 0x20) = 1;
          }
        }
      }
    }
    if (*(uint *)(param_1 + 0x15a) < 3) {
      *(undefined4 *)(param_1 + 0x164) = 0;
      if ((-1 < (int)*(uint *)(param_1 + 0x191)) &&
         (lVar26 = param_1[0x62][0x1a][(ulong)*(uint *)(param_1 + 0x191) * 2], lVar26 != 0)) {
        *(undefined1 *)(lVar26 + 0x110) = 0;
        FUN_71025e9d50((long *)(lVar26 + 0x108),uVar17,pppplVar19,(byte ****)param_4,
                       (long ****)param_5,param_6,param_7,param_8);
        if ((*(char *)(lVar26 + 0xe0) != '\0') && (*(long *)(lVar26 + 200) != 0)) {
          *(undefined2 *)(*(long *)(lVar26 + 200) + 0x30) = 0x101;
        }
        if (*(long *)(lVar26 + 0xd8) != 0) {
          *(undefined1 *)(*(long *)(lVar26 + 0xd8) + 0x21) = 1;
        }
        if (*(char *)(lVar26 + 0xe0) != '\0') {
          *(undefined1 *)(*(long *)(lVar26 + 0xb0) + 0x10) = 0;
        }
      }
    }
    else {
      *(undefined4 *)(param_1 + 0x165) = 0;
      *(undefined4 *)(param_1 + 0x164) = 1;
      uVar16 = (&DAT_710532af38)[(ulong)*(uint *)(param_1 + 0x12a) * 6];
      pplVar23 = (long **)(&DAT_710532af30)[(ulong)*(uint *)(param_1 + 0x12a) * 6];
      *(undefined4 *)((long)param_1 + 0xb24) = 0;
      param_1[0x167] = (long **)(uVar16 & 0xffffffff);
      param_1[0x166] = pplVar23;
      if (-1 < (int)*(uint *)(param_1 + 0x191)) {
        lVar26 = param_1[0x62][0x1a][(ulong)*(uint *)(param_1 + 0x191) * 2];
        if (lVar26 == 0) {
          local_b0 = param_1[0x166];
          local_a8 = CONCAT44(0x3f800000,(int)param_1[0x167]);
          uStack_d8 = 0;
          local_e0 = (long ***)&DAT_3f800000;
          uStack_c8 = 0;
          local_d0 = 0x3f80000000000000;
          uStack_b8 = 0x3f800000;
          local_c0 = 0;
        }
        else {
          *(undefined1 *)(lVar26 + 0x110) = 0;
          FUN_71025e9d50((long *)(lVar26 + 0x108),uVar17,pppplVar19,(byte ****)param_4,
                         (long ****)param_5,param_6,param_7,param_8);
          if ((*(char *)(lVar26 + 0xe0) != '\0') && (*(long *)(lVar26 + 200) != 0)) {
            *(undefined2 *)(*(long *)(lVar26 + 200) + 0x32) = 0x101;
          }
          if (*(long *)(lVar26 + 0xd8) != 0) {
            *(undefined1 *)(*(long *)(lVar26 + 0xd8) + 0x22) = 1;
          }
          if ((*(char *)(lVar26 + 0xe0) != '\0') && (*(long *)(lVar26 + 200) != 0)) {
            *(undefined2 *)(*(long *)(lVar26 + 200) + 0x30) = 0x101;
          }
          if (*(long *)(lVar26 + 0xd8) != 0) {
            *(undefined1 *)(*(long *)(lVar26 + 0xd8) + 0x21) = 1;
          }
          if (*(char *)(lVar26 + 0xe0) != '\0') {
            *(undefined1 *)(*(long *)(lVar26 + 0xb0) + 0x10) = 0;
          }
          local_b0 = param_1[0x166];
          local_a8 = CONCAT44(0x3f800000,(int)param_1[0x167]);
          uStack_d8 = 0;
          local_e0 = (long ***)&DAT_3f800000;
          uStack_c8 = 0;
          local_d0 = 0x3f80000000000000;
          uStack_b8 = 0x3f800000;
          local_c0 = 0;
          (**(code **)(**(long **)(lVar26 + 0x90) + 0x148))(*(long **)(lVar26 + 0x90),&local_e0);
          lVar26 = *(long *)(lVar26 + 0xd8);
          if (lVar26 != 0) {
            local_88 = uStack_c8;
            local_90 = local_d0;
            uStack_98 = uStack_d8;
            local_a0 = local_e0;
            local_68 = local_a8;
            local_70 = local_b0;
            local_78 = uStack_b8;
            local_80 = local_c0;
            if (*(char *)(*(long *)(lVar26 + 8) + 0xa8) != '\0') {
              plVar11 = *(long **)(*(long *)(lVar26 + 8) + 0x48);
              (**(code **)(*plVar11 + 0x20))(plVar11,&local_a0);
            }
            *(undefined1 *)(lVar26 + 0x20) = 1;
          }
        }
      }
    }
  }
  param_1[0x181] = (long **)0x0;
  param_1[0x180] = (long **)0x0;
  param_1[0x17f] = (long **)0x0;
  param_1[0x17e] = (long **)0x0;
  param_1[0x17d] = (long **)0x0;
  param_1[0x17c] = (long **)0x0;
  param_1[0x17b] = (long **)0x0;
  param_1[0x17a] = (long **)0x0;
  param_1[0x179] = (long **)0x0;
  param_1[0x178] = (long **)0x0;
  param_1[0x177] = (long **)0x0;
  param_1[0x176] = (long **)0x0;
  param_1[0x175] = (long **)0x0;
  param_1[0x174] = (long **)0x0;
  param_1[0x173] = (long **)0x0;
  param_1[0x172] = (long **)0x0;
  pplVar23 = (long **)FUN_710392e290(0x10,0x28,pppplVar19,(byte ****)param_4,(long ****)param_5,
                                     param_6,param_7,param_8);
  if (pplVar23 == (long **)0x0) {
    local_e0 = (long ***)((ulong)local_e0 & 0xffffffff00000000);
    local_a0 = (long ***)&DAT_00000028;
    pppplVar19 = &local_a0;
    (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_e0);
    pplVar23 = (long **)FUN_710392e290(0x10,0x28,pppplVar19,(byte ****)param_4,(long ****)param_5,
                                       param_6,param_7,param_8);
  }
  pplVar25 = param_1[0x60];
  pplVar23[2] = (long *)0x101010101010101;
  pplVar23[3] = (long *)0x101010101010101;
  *(undefined1 *)(pplVar23 + 4) = 1;
  *pplVar23 = (long *)pplVar25;
  pplVar23[1] = (long *)0x101010101010101;
  plVar11 = lib::Singleton<app::StageManager>::instance_;
  *(undefined1 *)((long)pplVar23 + 0x17) = 0;
  plVar29 = (long *)(*(long *)(*plVar11 + 0x1c8) + 0x50);
  plVar12 = (long *)*plVar29;
  if (plVar12 != (long *)0x0) {
    plVar29 = (long *)(*(long *)(*plVar11 + 0x1c8) + 0x50);
    do {
      while (plVar28 = plVar12, (long *)plVar28[4] <= pplVar25[2]) {
        if (pplVar25[2] <= (long *)plVar28[4]) goto LAB_71026bf058;
        plVar29 = plVar28 + 1;
        plVar12 = (long *)*plVar29;
        if ((long *)*plVar29 == (long *)0x0) goto LAB_71026bf058;
      }
      plVar12 = (long *)*plVar28;
      plVar29 = plVar28;
    } while ((long *)*plVar28 != (long *)0x0);
  }
LAB_71026bf058:
  lVar26 = *(long *)(*(long *)(*plVar29 + 0x28) + 0xc0);
  if ((uint)((ulong)(*(long *)(*(long *)(*plVar29 + 0x28) + 200) - lVar26) >> 3) < 2) {
LAB_71026bf0f0:
    lVar26 = 0;
    cVar4 = DAT_000000e0;
  }
  else {
    uVar8 = *(uint *)(lVar26 + 8);
    if ((*(uint *)(DAT_71052b9298 + 0x134) & 1 << (ulong)(uVar8 & 0x1f)) == 0) {
      puVar22 = (uint *)0x0;
    }
    else {
      puVar22 = *(uint **)(DAT_71052b9298 + (ulong)uVar8 * 8 + 0x30);
    }
    if (*puVar22 < 0xb) goto LAB_71026bf0f0;
    puVar27 = *(undefined8 **)(puVar22 + 2);
    lVar26 = -2;
    do {
      puVar27 = (undefined8 *)*puVar27;
      lVar26 = lVar26 + 1;
    } while (lVar26 != 0);
    lVar26 = *(long *)**(undefined8 **)**(undefined8 **)**(undefined8 **)*puVar27;
    cVar4 = *(char *)(lVar26 + 0xe0);
  }
  if (cVar4 != '\0') {
    plVar11 = *(long **)(lVar26 + 0x80);
    *(undefined2 *)(lVar26 + 0xe0) = 0;
    *(undefined2 *)(lVar26 + 0xe7) = 0;
    for (; (long *)(lVar26 + 0x80) != plVar11; plVar11 = (long *)*plVar11) {
      *(undefined1 *)(plVar11 + 0x20) = 0;
      if (*(uint *)((long)plVar11 + 0xfc) != 0) {
        plVar12 = (long *)plVar11[0x1e];
        *(undefined1 *)(*plVar12 + (ulong)*(uint *)((long)plVar11 + 0xfc) * 0x18 + 0x10) = 0;
        pppplVar19 = (long ****)0x0;
        (**(code **)(*(long *)plVar12[3] + 0x18))();
      }
      *(undefined4 *)(plVar11 + 0x10) = 0;
      plVar11[0xe] = 0;
      plVar11[0xf] = 0;
      plVar11[0xc] = 0;
      plVar11[0xd] = 0;
    }
    for (plVar11 = *(long **)(lVar26 + 0x68); (long *)(lVar26 + 0x68) != plVar11;
        plVar11 = (long *)*plVar11) {
      *(undefined1 *)(plVar11 + 10) = 0;
    }
    FUN_7100525010(DAT_71052b9298,lVar26);
    plVar11 = lib::Singleton<app::StageManager>::instance_;
  }
  *(undefined1 *)(pplVar23 + 3) = 0;
  plVar29 = (long *)(*(long *)(*plVar11 + 0x1c8) + 0x50);
  plVar12 = (long *)*plVar29;
  if (plVar12 != (long *)0x0) {
    plVar29 = (long *)(*(long *)(*plVar11 + 0x1c8) + 0x50);
    do {
      while (plVar11 = plVar12, (long *)plVar11[4] <= pplVar25[2]) {
        if (pplVar25[2] <= (long *)plVar11[4]) goto LAB_71026bf1ec;
        plVar29 = plVar11 + 1;
        plVar12 = (long *)*plVar29;
        if ((long *)*plVar29 == (long *)0x0) goto LAB_71026bf1ec;
      }
      plVar12 = (long *)*plVar11;
      plVar29 = plVar11;
    } while ((long *)*plVar11 != (long *)0x0);
  }
LAB_71026bf1ec:
  lVar26 = *(long *)(*(long *)(*plVar29 + 0x28) + 0xc0);
  if ((uint)((ulong)(*(long *)(*(long *)(*plVar29 + 0x28) + 200) - lVar26) >> 3) < 2) {
LAB_71026bf284:
    lVar26 = 0;
    cVar4 = DAT_000000e0;
  }
  else {
    uVar8 = *(uint *)(lVar26 + 8);
    if ((*(uint *)(DAT_71052b9298 + 0x134) & 1 << (ulong)(uVar8 & 0x1f)) == 0) {
      puVar22 = (uint *)0x0;
    }
    else {
      puVar22 = *(uint **)(DAT_71052b9298 + (ulong)uVar8 * 8 + 0x30);
    }
    if (*puVar22 < 0xc) goto LAB_71026bf284;
    puVar27 = *(undefined8 **)(puVar22 + 2);
    lVar26 = -3;
    do {
      puVar27 = (undefined8 *)*puVar27;
      lVar26 = lVar26 + 1;
    } while (lVar26 != 0);
    lVar26 = *(long *)**(undefined8 **)**(undefined8 **)**(undefined8 **)*puVar27;
    cVar4 = *(char *)(lVar26 + 0xe0);
  }
  if (cVar4 != '\0') {
    plVar11 = *(long **)(lVar26 + 0x80);
    *(undefined2 *)(lVar26 + 0xe0) = 0;
    *(undefined2 *)(lVar26 + 0xe7) = 0;
    for (; (long *)(lVar26 + 0x80) != plVar11; plVar11 = (long *)*plVar11) {
      *(undefined1 *)(plVar11 + 0x20) = 0;
      if (*(uint *)((long)plVar11 + 0xfc) != 0) {
        plVar12 = (long *)plVar11[0x1e];
        *(undefined1 *)(*plVar12 + (ulong)*(uint *)((long)plVar11 + 0xfc) * 0x18 + 0x10) = 0;
        pppplVar19 = (long ****)0x0;
        (**(code **)(*(long *)plVar12[3] + 0x18))();
      }
      *(undefined4 *)(plVar11 + 0x10) = 0;
      plVar11[0xe] = 0;
      plVar11[0xf] = 0;
      plVar11[0xc] = 0;
      plVar11[0xd] = 0;
    }
    for (plVar11 = *(long **)(lVar26 + 0x68); (long *)(lVar26 + 0x68) != plVar11;
        plVar11 = (long *)*plVar11) {
      *(undefined1 *)(plVar11 + 10) = 0;
    }
    FUN_7100525010(DAT_71052b9298,lVar26);
  }
  pplVar25 = param_1[0x19c];
  param_1[0x19c] = pplVar23;
  if (pplVar25 != (long **)0x0) {
    FUN_710392eb40((ulong)pplVar25);
  }
  pplVar23 = (long **)FUN_710392e290(0x10,0xa8,pppplVar19,(byte ****)param_4,(long ****)param_5,
                                     param_6,param_7,param_8);
  if (pplVar23 == (long **)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_e0 = (long ***)((ulong)local_e0 & 0xffffffff00000000);
      local_a0 = (long ***)&DAT_000000a8;
      pppplVar19 = &local_a0;
      uVar16 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_e0);
      if (((uVar16 & 1) != 0) &&
         (pplVar23 = (long **)FUN_710392e290(0x10,0xa8,pppplVar19,(byte ****)param_4,
                                             (long ****)param_5,param_6,param_7,param_8),
         pplVar23 != (long **)0x0)) goto LAB_71026bf390;
    }
    pplVar23 = (long **)0x0;
  }
LAB_71026bf390:
  pcVar21 = "s17_01_pillar_l";
  pppplVar19 = pppplVar20;
  FUN_71026ca0d0((long *)pplVar23,(long)param_1,pppplVar20,(byte ****)"s17_01_pillar_l",
                 (long ****)param_5,param_6,param_7,param_8);
  pplVar25 = param_1[0x189];
  param_1[0x189] = pplVar23;
  if (pplVar25 != (long **)0x0) {
    FUN_71026ca710((long)pplVar25);
    FUN_710392eb40((ulong)pplVar25);
  }
  pplVar23 = (long **)FUN_710392e290(0x10,0xa8,pppplVar19,(byte ****)pcVar21,(long ****)param_5,
                                     param_6,param_7,param_8);
  if (pplVar23 == (long **)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_e0 = (long ***)((ulong)local_e0 & 0xffffffff00000000);
      local_a0 = (long ***)&DAT_000000a8;
      pppplVar19 = &local_a0;
      uVar16 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_e0);
      if (((uVar16 & 1) != 0) &&
         (pplVar23 = (long **)FUN_710392e290(0x10,0xa8,pppplVar19,(byte ****)pcVar21,
                                             (long ****)param_5,param_6,param_7,param_8),
         pplVar23 != (long **)0x0)) goto LAB_71026bf420;
    }
    pplVar23 = (long **)0x0;
  }
LAB_71026bf420:
  pcVar21 = "s17_01_pillar_r";
  pppplVar19 = pppplVar20;
  FUN_71026ca0d0((long *)pplVar23,(long)param_1,pppplVar20,(byte ****)"s17_01_pillar_r",
                 (long ****)param_5,param_6,param_7,param_8);
  pplVar25 = param_1[0x18a];
  param_1[0x18a] = pplVar23;
  if (pplVar25 != (long **)0x0) {
    FUN_71026ca710((long)pplVar25);
    FUN_710392eb40((ulong)pplVar25);
  }
  pplVar23 = (long **)FUN_710392e290(0x10,0xa8,pppplVar19,(byte ****)pcVar21,(long ****)param_5,
                                     param_6,param_7,param_8);
  if (pplVar23 == (long **)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_e0 = (long ***)((ulong)local_e0 & 0xffffffff00000000);
      local_a0 = (long ***)&DAT_000000a8;
      pppplVar19 = &local_a0;
      uVar16 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_e0);
      if (((uVar16 & 1) != 0) &&
         (pplVar23 = (long **)FUN_710392e290(0x10,0xa8,pppplVar19,(byte ****)pcVar21,
                                             (long ****)param_5,param_6,param_7,param_8),
         pplVar23 != (long **)0x0)) goto LAB_71026bf4b0;
    }
    pplVar23 = (long **)0x0;
  }
LAB_71026bf4b0:
  pcVar21 = "s17_02_pillar";
  FUN_71026ca0d0((long *)pplVar23,(long)param_1,pppplVar20,(byte ****)"s17_02_pillar",
                 (long ****)param_5,param_6,param_7,param_8);
  pplVar25 = param_1[0x18b];
  param_1[0x18b] = pplVar23;
  if (pplVar25 != (long **)0x0) {
    FUN_71026ca710((long)pplVar25);
    FUN_710392eb40((ulong)pplVar25);
  }
  pplVar23 = param_1[0x68];
  uVar8 = *(uint *)pplVar23 ^ *(uint *)pplVar23 << 0xb;
  *(uint *)pplVar23 = *(uint *)((long)pplVar23 + 4);
  uVar18 = *(uint *)((long)pplVar23 + 0xc);
  uVar8 = uVar8 ^ uVar8 >> 8 ^ uVar18 ^ uVar18 >> 0x13;
  *(uint *)((long)pplVar23 + 4) = *(uint *)(pplVar23 + 1);
  *(uint *)(pplVar23 + 1) = uVar18;
  *(uint *)((long)pplVar23 + 0xc) = uVar8;
  *(uint *)((long)param_1 + 0x9c4) = uVar8 & 3;
  pplVar23 = param_1[0x68];
  uVar8 = *(uint *)pplVar23 ^ *(uint *)pplVar23 << 0xb;
  *(uint *)pplVar23 = *(uint *)((long)pplVar23 + 4);
  uVar18 = *(uint *)((long)pplVar23 + 0xc);
  uVar8 = uVar8 ^ uVar8 >> 8 ^ uVar18 ^ uVar18 >> 0x13;
  *(uint *)((long)pplVar23 + 4) = *(uint *)(pplVar23 + 1);
  *(uint *)(pplVar23 + 1) = uVar18;
  *(uint *)((long)pplVar23 + 0xc) = uVar8;
  *(uint *)(param_1 + 0x139) = uVar8 % 3;
  pplVar23 = param_1[0x68];
  uVar8 = *(uint *)pplVar23 ^ *(uint *)pplVar23 << 0xb;
  *(uint *)pplVar23 = *(uint *)((long)pplVar23 + 4);
  uVar18 = *(uint *)((long)pplVar23 + 0xc);
  uVar8 = uVar8 ^ uVar8 >> 8 ^ uVar18 ^ uVar18 >> 0x13;
  *(uint *)((long)pplVar23 + 4) = *(uint *)(pplVar23 + 1);
  *(uint *)(pplVar23 + 1) = uVar18;
  *(uint *)((long)pplVar23 + 0xc) = uVar8;
  *(uint *)((long)param_1 + 0x9f4) = uVar8 & 3;
  pplVar23 = param_1[0x68];
  uVar8 = *(uint *)pplVar23;
  *(uint *)pplVar23 = *(uint *)((long)pplVar23 + 4);
  uVar18 = *(uint *)((long)pplVar23 + 0xc);
  uVar8 = uVar8 ^ uVar8 << 0xb;
  uVar8 = uVar8 ^ uVar8 >> 8 ^ uVar18 ^ uVar18 >> 0x13;
  *(uint *)((long)pplVar23 + 4) = *(uint *)(pplVar23 + 1);
  *(uint *)(pplVar23 + 1) = uVar18;
  *(uint *)((long)pplVar23 + 0xc) = uVar8;
  *(uint *)(param_1 + 0x13f) = uVar8 % 3;
  FUN_7102633910((long)param_1[99],(long *********)"render_param",pppplVar20,pcVar21,
                 (long ****)param_5,param_6,param_7,param_8);
  if (*(uint *)(param_1 + 0x12a) < 3) {
    FUN_7102633800((long)param_1[99],
                   (long *********)
                   (&PTR_s_reflection_cubemap00_71050cf190)[*(uint *)(param_1 + 0x12a)],pppplVar20,
                   pcVar21,(long ****)param_5,param_6,param_7,param_8);
    if (*(uint *)(param_1 + 0x12a) < 3) {
      FUN_7102633a10((long)param_1[99],
                     (long *********)(&PTR_s_chara_st00_71050cf1a8)[*(uint *)(param_1 + 0x12a)],0,
                     pcVar21,(long ****)param_5,param_6,param_7,param_8);
      if (*(uint *)(param_1 + 0x12a) < 3) {
        FUN_7102633b90((long)param_1[99],
                       (long *********)(&PTR_s_stage_st00_71050cf1c0)[*(uint *)(param_1 + 0x12a)],0,
                       pcVar21,(long ****)param_5,param_6,param_7,param_8);
        plVar11 = param_1[0x62][0x23];
        if ((plVar11 != (long *)0x0) && (*(char *)(*plVar11 + 0x80) != '\0')) {
          plVar12 = *(long **)(*plVar11 + 0x30);
          (**(code **)(*plVar12 + 0x180))(plVar12,0x1385e06e03,*(int *)(param_1 + 0x12a) == 0);
          if (*(char *)(*plVar11 + 0x80) != '\0') {
            plVar12 = *(long **)(*plVar11 + 0x30);
            (**(code **)(*plVar12 + 0x180))(plVar12,0x13f2e75e95,*(int *)(param_1 + 0x12a) == 1);
            if (*(char *)(*plVar11 + 0x80) != '\0') {
              plVar11 = *(long **)(*plVar11 + 0x30);
              (**(code **)(*plVar11 + 0x180))(plVar11,0x136bee0f2f,*(int *)(param_1 + 0x12a) == 2);
            }
          }
        }
        return;
      }
    }
  }
LAB_71026bf888:
                    /* WARNING: Subroutine does not return */
  abort();
}

