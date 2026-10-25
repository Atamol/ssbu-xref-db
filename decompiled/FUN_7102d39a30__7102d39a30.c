// addr:      7102d39a30
// offset:    0x2d39a30
// name:      FUN_7102d39a30
// mangled:   
// signature: undefined __cdecl FUN_7102d39a30(long * param_1, ulong param_2, long * * * * param_3, undefined1[16] * param_4, undefined1[16] * param_5, undefined1[16] * param_6, uint * param_7, undefined8 param_8)


void FUN_7102d39a30(long *param_1,ulong param_2,long ****param_3,undefined1 (*param_4) [16],
                   undefined1 (*param_5) [16],undefined1 (*param_6) [16],uint *param_7,
                   undefined8 param_8)

{
  char *pcVar1;
  undefined8 *puVar2;
  uint uVar3;
  char cVar4;
  uint uVar5;
  long ***ppplVar6;
  uint *puVar7;
  undefined8 *puVar8;
  ulong *puVar9;
  long *plVar10;
  uint *__dest;
  long *plVar11;
  ulong extraout_x1;
  ulong extraout_x1_00;
  ulong extraout_x1_01;
  ulong extraout_x1_02;
  undefined8 extraout_x1_03;
  undefined8 extraout_x1_04;
  undefined8 extraout_x1_05;
  undefined8 extraout_x1_06;
  undefined8 extraout_x1_07;
  undefined8 extraout_x1_08;
  undefined8 extraout_x1_09;
  void *extraout_x1_10;
  void *extraout_x1_11;
  undefined8 extraout_x1_12;
  void *extraout_x1_13;
  void *extraout_x1_14;
  void *extraout_x1_15;
  void *extraout_x1_16;
  void *extraout_x1_17;
  void *extraout_x1_18;
  void *extraout_x1_19;
  void *extraout_x1_20;
  void *extraout_x1_21;
  void *extraout_x1_22;
  void *extraout_x1_23;
  void *extraout_x1_24;
  void *extraout_x1_25;
  void *extraout_x1_26;
  void *extraout_x1_27;
  void *extraout_x1_28;
  void *extraout_x1_29;
  void *extraout_x1_30;
  void *extraout_x1_31;
  void *extraout_x1_32;
  void *extraout_x1_33;
  void *extraout_x1_34;
  void *extraout_x1_35;
  undefined8 uVar12;
  void *extraout_x1_36;
  void *extraout_x1_37;
  void *extraout_x1_38;
  undefined8 extraout_x1_39;
  void *extraout_x1_40;
  void *pvVar13;
  void *extraout_x1_41;
  void *extraout_x1_42;
  void *extraout_x1_43;
  void *extraout_x1_44;
  void *extraout_x1_45;
  void *extraout_x1_46;
  void *extraout_x1_47;
  void *extraout_x1_48;
  void *extraout_x1_49;
  void *extraout_x1_50;
  void *extraout_x1_51;
  void *extraout_x1_52;
  void *extraout_x1_53;
  void *extraout_x1_54;
  void *extraout_x1_55;
  long ****pppplVar15;
  uint uVar16;
  long lVar17;
  code *pcVar18;
  long *plVar19;
  long lVar20;
  long *plVar21;
  ulong uVar22;
  long ****pppplVar23;
  long lVar24;
  long lVar25;
  long *plVar26;
  long *plVar27;
  ulong uVar28;
  long ****pppplVar29;
  void *pvVar30;
  long ****pppplVar31;
  long ****pppplVar32;
  undefined1 auVar33 [16];
  long ***local_b0;
  uint *local_a8;
  uint *local_a0;
  uint *local_98;
  char *local_90;
  char *local_88;
  undefined8 local_80;
  uint local_78;
  long ***local_70;
  undefined4 local_64;
  void *pvVar14;
  
  uVar16 = (uint)param_2;
  *(uint *)(param_1 + 7) = uVar16;
  if ((uVar16 != 0) && (*(int *)(*param_1 + 8) - 0x15dU < 2)) {
    *(undefined4 *)(param_1 + 7) = 0;
  }
  cVar4 = *(char *)((long)param_1 + 0x34);
  uVar28 = param_2;
  if (cVar4 != '\0') {
    lVar25 = param_1[8];
    plVar27 = (long *)(lVar25 + 0x38);
    plVar26 = (long *)*plVar27;
    if (plVar27 != plVar26) {
      do {
        FUN_7102d346a0((long)plVar26,uVar28,param_3,(byte ****)param_4,(long ****)param_5,param_6,
                       param_7,param_8);
        plVar26 = (long *)*plVar26;
        uVar28 = extraout_x1;
      } while (plVar27 != plVar26);
      plVar26 = (long *)*plVar27;
    }
    for (; plVar27 != plVar26; plVar26 = (long *)*plVar26) {
      if (plVar26[6] != 0) {
        param_3 = (long ****)((long)plVar26 + 0x3c);
        param_4 = (undefined1 (*) [16])0x1;
        FUN_7102d44300(plVar26[6],(ulong)*(uint *)(plVar26 + 7),(int *)param_3,1);
        uVar28 = extraout_x1_00;
      }
      *(undefined1 *)((long)plVar26 + 0x91) = 1;
    }
    *(undefined1 *)(lVar25 + 8) = 0;
    lVar24 = *(long *)(param_1[0xc] + 0x18);
    for (lVar25 = *(long *)(param_1[0xc] + 0x10); lVar25 != lVar24; lVar25 = lVar25 + 0x18) {
      lVar17 = *(long *)(lVar25 + 8);
      if (lVar17 != 0) {
        *(undefined1 *)(lVar17 + 0x110) = 1;
        FUN_71025e9d50((long *)(lVar17 + 0x108),uVar28,param_3,(byte ****)param_4,(long ****)param_5
                       ,param_6,param_7,param_8);
        uVar28 = extraout_x1_01;
      }
    }
    puVar8 = (undefined8 *)param_1[0xb];
    *(undefined1 *)(puVar8 + 1) = 0;
    FUN_7102d42de0(puVar8,uVar28,param_3,(byte ****)param_4,(long ****)param_5,param_6,param_7,
                   param_8);
    FUN_7102d41dd0(param_1[9]);
    *(undefined1 *)((long)param_1 + 0x34) = 0;
    uVar28 = extraout_x1_02;
  }
  FUN_7102d36460(param_1[8],uVar28,param_3,(byte ****)param_4,(long ****)param_5,param_6,param_7,
                 param_8);
  plVar27 = (long *)param_1[0xb];
  plVar26 = (long *)*plVar27;
  if (*(int *)(*param_1 + 8) - 0x15dU < 2) {
    if (*(int *)(*plVar26 + 8) == 0x15e) {
      uVar16 = 0;
    }
    else {
      uVar16 = 1;
      if (*(char *)((long)plVar26 + 0x12) != '\0') {
        uVar16 = 2;
      }
    }
    *(uint *)(plVar27 + 2) = uVar16;
    pppplVar15 = (long ****)&DAT_ffffffff;
    FUN_710262b8c0(*(long *)(*plVar26 + 0x300),uVar16,0xffffffff,(byte ****)param_4,
                   (long ****)param_5,param_6,param_7,param_8);
    puVar8 = *(undefined8 **)(**(long **)(*(long *)*plVar27 + 0x330) + 0x50);
    puVar2 = *(undefined8 **)(**(long **)(*(long *)*plVar27 + 0x330) + 0x58);
    if (puVar8 != puVar2) {
      lVar25 = plVar27[2];
      do {
        plVar26 = (long *)*puVar8;
        if (*(int *)((long)plVar26 + 0xc) == (int)lVar25) {
          if ((char)plVar26[3] == '\0') {
            (**(code **)(*plVar26 + 0x10))(plVar26);
            *(undefined1 *)(plVar26 + 3) = 1;
          }
        }
        else if ((char)plVar26[3] != '\0') {
          *(undefined1 *)(plVar26 + 3) = 0;
          (**(code **)(*plVar26 + 0x18))(plVar26);
        }
        puVar8 = puVar8 + 1;
      } while (puVar2 != puVar8);
    }
    plVar26 = (long *)param_1[0xc];
    if (*(int *)(*(long *)*plVar26 + 8) == 0x15e) {
      uVar16 = 0;
    }
    else {
      uVar16 = 1;
      if (*(char *)(*plVar26 + 0x12) != '\0') {
        uVar16 = 2;
      }
    }
    puVar9 = (ulong *)FUN_710392e290(0x10,0xb0,pppplVar15,(byte ****)param_4,(long ****)param_5,
                                     param_6,param_7,param_8);
    pvVar13 = extraout_x1_10;
    if (puVar9 == (ulong *)0x0) {
      if (DAT_7105332f00 != (long *)0x0) {
        local_80 = (long ***)((ulong)local_80 & 0xffffffff00000000);
        local_b0 = (long ***)&DAT_000000b0;
        pppplVar15 = &local_b0;
        auVar33 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_80);
        pvVar13 = auVar33._8_8_;
        if (((auVar33._0_8_ & 1) != 0) &&
           (puVar9 = (ulong *)FUN_710392e290(0x10,0xb0,pppplVar15,(byte ****)param_4,
                                             (long ****)param_5,param_6,param_7,param_8),
           pvVar13 = extraout_x1_11, puVar9 != (ulong *)0x0)) goto LAB_7102d39ff4;
      }
      puVar9 = (ulong *)0x0;
    }
LAB_7102d39ff4:
    *puVar9 = 0x1230cd60d4;
    puVar9[1] = 0;
    puVar9[2] = 0x15addd2a50;
    puVar9[3] = 0;
    puVar9[4] = 0xcad8dda57;
    puVar9[5] = 0;
    puVar9[6] = 0x162cb85b28;
    puVar9[7] = 0;
    puVar9[8] = 0x1230cd60d4;
    puVar9[9] = 1;
    puVar9[10] = 0x15addd2a50;
    puVar9[0xb] = 1;
    puVar9[0xc] = 0xcad8dda57;
    puVar9[0xd] = 1;
    puVar9[0xe] = 0xe2402e231;
    puVar9[0xf] = 2;
    puVar9[0x10] = 0xeab91811a;
    puVar9[0x11] = 2;
    puVar9[0x12] = 0xdfbd6385b;
    puVar9[0x13] = 2;
    puVar9[0x14] = 0x14dad54202;
    puVar9[0x15] = 2;
    plVar26[9] = plVar26[8];
    if ((*puVar9 & 0xffffffffff) != 0) {
      for (plVar27 = *(long **)(*(long *)(*(long *)*plVar26 + 0x310) + 0xd0);
          plVar27 != *(long **)(*(long *)(*(long *)*plVar26 + 0x310) + 0xd8); plVar27 = plVar27 + 2)
      {
        if ((*(uint *)(plVar27 + 1) < 2) &&
           (lVar25 = *plVar27, (*puVar9 & 0xffffffffff) == *(ulong *)(lVar25 + 0x68))) {
          if (lVar25 != 0) {
            *(undefined1 *)(lVar25 + 0x110) = 0;
            FUN_71025e9d50((long *)(lVar25 + 0x108),pvVar13,pppplVar15,(byte ****)param_4,
                           (long ****)param_5,param_6,param_7,param_8);
            if ((*(char *)(lVar25 + 0xe0) != '\0') && (*(long *)(lVar25 + 200) != 0)) {
              *(undefined2 *)(*(long *)(lVar25 + 200) + 0x30) = 0x101;
            }
            if (*(long *)(lVar25 + 0xd8) != 0) {
              *(undefined1 *)(*(long *)(lVar25 + 0xd8) + 0x21) = 1;
            }
            if (*(char *)(lVar25 + 0xe0) != '\0') {
              *(undefined1 *)(*(long *)(lVar25 + 0xb0) + 0x10) = 0;
            }
            *(byte *)(lVar25 + 0x118) = *(byte *)(lVar25 + 0x118) | 1;
            pvVar13 = extraout_x1_13;
          }
          break;
        }
      }
    }
    uVar28 = puVar9[2] & 0xffffffffff;
    if (uVar28 != 0) {
      for (plVar27 = *(long **)(*(long *)(*(long *)*plVar26 + 0x310) + 0xd0);
          plVar27 != *(long **)(*(long *)(*(long *)*plVar26 + 0x310) + 0xd8); plVar27 = plVar27 + 2)
      {
        if ((*(uint *)(plVar27 + 1) < 2) && (lVar25 = *plVar27, uVar28 == *(ulong *)(lVar25 + 0x68))
           ) {
          if (lVar25 != 0) {
            *(undefined1 *)(lVar25 + 0x110) = 0;
            FUN_71025e9d50((long *)(lVar25 + 0x108),pvVar13,pppplVar15,(byte ****)param_4,
                           (long ****)param_5,param_6,param_7,param_8);
            if ((*(char *)(lVar25 + 0xe0) != '\0') && (*(long *)(lVar25 + 200) != 0)) {
              *(undefined2 *)(*(long *)(lVar25 + 200) + 0x30) = 0x101;
            }
            if (*(long *)(lVar25 + 0xd8) != 0) {
              *(undefined1 *)(*(long *)(lVar25 + 0xd8) + 0x21) = 1;
            }
            if (*(char *)(lVar25 + 0xe0) != '\0') {
              *(undefined1 *)(*(long *)(lVar25 + 0xb0) + 0x10) = 0;
            }
            *(byte *)(lVar25 + 0x118) = *(byte *)(lVar25 + 0x118) | 1;
            pvVar13 = extraout_x1_14;
          }
          break;
        }
      }
    }
    uVar28 = puVar9[4] & 0xffffffffff;
    if (uVar28 != 0) {
      for (plVar27 = *(long **)(*(long *)(*(long *)*plVar26 + 0x310) + 0xd0);
          plVar27 != *(long **)(*(long *)(*(long *)*plVar26 + 0x310) + 0xd8); plVar27 = plVar27 + 2)
      {
        if ((*(uint *)(plVar27 + 1) < 2) && (lVar25 = *plVar27, uVar28 == *(ulong *)(lVar25 + 0x68))
           ) {
          if (lVar25 != 0) {
            *(undefined1 *)(lVar25 + 0x110) = 0;
            FUN_71025e9d50((long *)(lVar25 + 0x108),pvVar13,pppplVar15,(byte ****)param_4,
                           (long ****)param_5,param_6,param_7,param_8);
            if ((*(char *)(lVar25 + 0xe0) != '\0') && (*(long *)(lVar25 + 200) != 0)) {
              *(undefined2 *)(*(long *)(lVar25 + 200) + 0x30) = 0x101;
            }
            if (*(long *)(lVar25 + 0xd8) != 0) {
              *(undefined1 *)(*(long *)(lVar25 + 0xd8) + 0x21) = 1;
            }
            if (*(char *)(lVar25 + 0xe0) != '\0') {
              *(undefined1 *)(*(long *)(lVar25 + 0xb0) + 0x10) = 0;
            }
            *(byte *)(lVar25 + 0x118) = *(byte *)(lVar25 + 0x118) | 1;
            pvVar13 = extraout_x1_15;
          }
          break;
        }
      }
    }
    uVar28 = puVar9[6] & 0xffffffffff;
    if (uVar28 != 0) {
      for (plVar27 = *(long **)(*(long *)(*(long *)*plVar26 + 0x310) + 0xd0);
          plVar27 != *(long **)(*(long *)(*(long *)*plVar26 + 0x310) + 0xd8); plVar27 = plVar27 + 2)
      {
        if ((*(uint *)(plVar27 + 1) < 2) && (lVar25 = *plVar27, uVar28 == *(ulong *)(lVar25 + 0x68))
           ) {
          if (lVar25 != 0) {
            *(undefined1 *)(lVar25 + 0x110) = 0;
            FUN_71025e9d50((long *)(lVar25 + 0x108),pvVar13,pppplVar15,(byte ****)param_4,
                           (long ****)param_5,param_6,param_7,param_8);
            if ((*(char *)(lVar25 + 0xe0) != '\0') && (*(long *)(lVar25 + 200) != 0)) {
              *(undefined2 *)(*(long *)(lVar25 + 200) + 0x30) = 0x101;
            }
            if (*(long *)(lVar25 + 0xd8) != 0) {
              *(undefined1 *)(*(long *)(lVar25 + 0xd8) + 0x21) = 1;
            }
            if (*(char *)(lVar25 + 0xe0) != '\0') {
              *(undefined1 *)(*(long *)(lVar25 + 0xb0) + 0x10) = 0;
            }
            *(byte *)(lVar25 + 0x118) = *(byte *)(lVar25 + 0x118) | 1;
            pvVar13 = extraout_x1_16;
          }
          break;
        }
      }
    }
    uVar28 = puVar9[8] & 0xffffffffff;
    if (uVar28 != 0) {
      for (plVar27 = *(long **)(*(long *)(*(long *)*plVar26 + 0x310) + 0xd0);
          plVar27 != *(long **)(*(long *)(*(long *)*plVar26 + 0x310) + 0xd8); plVar27 = plVar27 + 2)
      {
        if ((*(uint *)(plVar27 + 1) < 2) && (lVar25 = *plVar27, uVar28 == *(ulong *)(lVar25 + 0x68))
           ) {
          if (lVar25 != 0) {
            *(undefined1 *)(lVar25 + 0x110) = 0;
            FUN_71025e9d50((long *)(lVar25 + 0x108),pvVar13,pppplVar15,(byte ****)param_4,
                           (long ****)param_5,param_6,param_7,param_8);
            if ((*(char *)(lVar25 + 0xe0) != '\0') && (*(long *)(lVar25 + 200) != 0)) {
              *(undefined2 *)(*(long *)(lVar25 + 200) + 0x30) = 0x101;
            }
            if (*(long *)(lVar25 + 0xd8) != 0) {
              *(undefined1 *)(*(long *)(lVar25 + 0xd8) + 0x21) = 1;
            }
            if (*(char *)(lVar25 + 0xe0) != '\0') {
              *(undefined1 *)(*(long *)(lVar25 + 0xb0) + 0x10) = 0;
            }
            *(byte *)(lVar25 + 0x118) = *(byte *)(lVar25 + 0x118) | 1;
            pvVar13 = extraout_x1_17;
          }
          break;
        }
      }
    }
    uVar28 = puVar9[10] & 0xffffffffff;
    if (uVar28 != 0) {
      for (plVar27 = *(long **)(*(long *)(*(long *)*plVar26 + 0x310) + 0xd0);
          plVar27 != *(long **)(*(long *)(*(long *)*plVar26 + 0x310) + 0xd8); plVar27 = plVar27 + 2)
      {
        if ((*(uint *)(plVar27 + 1) < 2) && (lVar25 = *plVar27, uVar28 == *(ulong *)(lVar25 + 0x68))
           ) {
          if (lVar25 != 0) {
            *(undefined1 *)(lVar25 + 0x110) = 0;
            FUN_71025e9d50((long *)(lVar25 + 0x108),pvVar13,pppplVar15,(byte ****)param_4,
                           (long ****)param_5,param_6,param_7,param_8);
            if ((*(char *)(lVar25 + 0xe0) != '\0') && (*(long *)(lVar25 + 200) != 0)) {
              *(undefined2 *)(*(long *)(lVar25 + 200) + 0x30) = 0x101;
            }
            if (*(long *)(lVar25 + 0xd8) != 0) {
              *(undefined1 *)(*(long *)(lVar25 + 0xd8) + 0x21) = 1;
            }
            if (*(char *)(lVar25 + 0xe0) != '\0') {
              *(undefined1 *)(*(long *)(lVar25 + 0xb0) + 0x10) = 0;
            }
            *(byte *)(lVar25 + 0x118) = *(byte *)(lVar25 + 0x118) | 1;
            pvVar13 = extraout_x1_18;
          }
          break;
        }
      }
    }
    uVar28 = puVar9[0xc] & 0xffffffffff;
    if (uVar28 != 0) {
      for (plVar27 = *(long **)(*(long *)(*(long *)*plVar26 + 0x310) + 0xd0);
          plVar27 != *(long **)(*(long *)(*(long *)*plVar26 + 0x310) + 0xd8); plVar27 = plVar27 + 2)
      {
        if ((*(uint *)(plVar27 + 1) < 2) && (lVar25 = *plVar27, uVar28 == *(ulong *)(lVar25 + 0x68))
           ) {
          if (lVar25 != 0) {
            *(undefined1 *)(lVar25 + 0x110) = 0;
            FUN_71025e9d50((long *)(lVar25 + 0x108),pvVar13,pppplVar15,(byte ****)param_4,
                           (long ****)param_5,param_6,param_7,param_8);
            if ((*(char *)(lVar25 + 0xe0) != '\0') && (*(long *)(lVar25 + 200) != 0)) {
              *(undefined2 *)(*(long *)(lVar25 + 200) + 0x30) = 0x101;
            }
            if (*(long *)(lVar25 + 0xd8) != 0) {
              *(undefined1 *)(*(long *)(lVar25 + 0xd8) + 0x21) = 1;
            }
            if (*(char *)(lVar25 + 0xe0) != '\0') {
              *(undefined1 *)(*(long *)(lVar25 + 0xb0) + 0x10) = 0;
            }
            *(byte *)(lVar25 + 0x118) = *(byte *)(lVar25 + 0x118) | 1;
            pvVar13 = extraout_x1_19;
          }
          break;
        }
      }
    }
    uVar28 = puVar9[0xe] & 0xffffffffff;
    if (uVar28 != 0) {
      for (plVar27 = *(long **)(*(long *)(*(long *)*plVar26 + 0x310) + 0xd0);
          plVar27 != *(long **)(*(long *)(*(long *)*plVar26 + 0x310) + 0xd8); plVar27 = plVar27 + 2)
      {
        if ((*(uint *)(plVar27 + 1) < 2) && (lVar25 = *plVar27, uVar28 == *(ulong *)(lVar25 + 0x68))
           ) {
          if (lVar25 != 0) {
            *(undefined1 *)(lVar25 + 0x110) = 0;
            FUN_71025e9d50((long *)(lVar25 + 0x108),pvVar13,pppplVar15,(byte ****)param_4,
                           (long ****)param_5,param_6,param_7,param_8);
            if ((*(char *)(lVar25 + 0xe0) != '\0') && (*(long *)(lVar25 + 200) != 0)) {
              *(undefined2 *)(*(long *)(lVar25 + 200) + 0x30) = 0x101;
            }
            if (*(long *)(lVar25 + 0xd8) != 0) {
              *(undefined1 *)(*(long *)(lVar25 + 0xd8) + 0x21) = 1;
            }
            if (*(char *)(lVar25 + 0xe0) != '\0') {
              *(undefined1 *)(*(long *)(lVar25 + 0xb0) + 0x10) = 0;
            }
            *(byte *)(lVar25 + 0x118) = *(byte *)(lVar25 + 0x118) | 1;
            pvVar13 = extraout_x1_20;
          }
          break;
        }
      }
    }
    uVar28 = puVar9[0x10] & 0xffffffffff;
    if (uVar28 != 0) {
      for (plVar27 = *(long **)(*(long *)(*(long *)*plVar26 + 0x310) + 0xd0);
          plVar27 != *(long **)(*(long *)(*(long *)*plVar26 + 0x310) + 0xd8); plVar27 = plVar27 + 2)
      {
        if ((*(uint *)(plVar27 + 1) < 2) && (lVar25 = *plVar27, uVar28 == *(ulong *)(lVar25 + 0x68))
           ) {
          if (lVar25 != 0) {
            *(undefined1 *)(lVar25 + 0x110) = 0;
            FUN_71025e9d50((long *)(lVar25 + 0x108),pvVar13,pppplVar15,(byte ****)param_4,
                           (long ****)param_5,param_6,param_7,param_8);
            if ((*(char *)(lVar25 + 0xe0) != '\0') && (*(long *)(lVar25 + 200) != 0)) {
              *(undefined2 *)(*(long *)(lVar25 + 200) + 0x30) = 0x101;
            }
            if (*(long *)(lVar25 + 0xd8) != 0) {
              *(undefined1 *)(*(long *)(lVar25 + 0xd8) + 0x21) = 1;
            }
            if (*(char *)(lVar25 + 0xe0) != '\0') {
              *(undefined1 *)(*(long *)(lVar25 + 0xb0) + 0x10) = 0;
            }
            *(byte *)(lVar25 + 0x118) = *(byte *)(lVar25 + 0x118) | 1;
            pvVar13 = extraout_x1_21;
          }
          break;
        }
      }
    }
    uVar28 = puVar9[0x12] & 0xffffffffff;
    if (uVar28 != 0) {
      for (plVar27 = *(long **)(*(long *)(*(long *)*plVar26 + 0x310) + 0xd0);
          plVar27 != *(long **)(*(long *)(*(long *)*plVar26 + 0x310) + 0xd8); plVar27 = plVar27 + 2)
      {
        if ((*(uint *)(plVar27 + 1) < 2) && (lVar25 = *plVar27, uVar28 == *(ulong *)(lVar25 + 0x68))
           ) {
          if (lVar25 != 0) {
            *(undefined1 *)(lVar25 + 0x110) = 0;
            FUN_71025e9d50((long *)(lVar25 + 0x108),pvVar13,pppplVar15,(byte ****)param_4,
                           (long ****)param_5,param_6,param_7,param_8);
            if ((*(char *)(lVar25 + 0xe0) != '\0') && (*(long *)(lVar25 + 200) != 0)) {
              *(undefined2 *)(*(long *)(lVar25 + 200) + 0x30) = 0x101;
            }
            if (*(long *)(lVar25 + 0xd8) != 0) {
              *(undefined1 *)(*(long *)(lVar25 + 0xd8) + 0x21) = 1;
            }
            if (*(char *)(lVar25 + 0xe0) != '\0') {
              *(undefined1 *)(*(long *)(lVar25 + 0xb0) + 0x10) = 0;
            }
            *(byte *)(lVar25 + 0x118) = *(byte *)(lVar25 + 0x118) | 1;
            pvVar13 = extraout_x1_22;
          }
          break;
        }
      }
    }
    uVar28 = puVar9[0x14] & 0xffffffffff;
    if (uVar28 != 0) {
      for (plVar27 = *(long **)(*(long *)(*(long *)*plVar26 + 0x310) + 0xd0);
          plVar27 != *(long **)(*(long *)(*(long *)*plVar26 + 0x310) + 0xd8); plVar27 = plVar27 + 2)
      {
        if ((*(uint *)(plVar27 + 1) < 2) && (lVar25 = *plVar27, uVar28 == *(ulong *)(lVar25 + 0x68))
           ) {
          if (lVar25 != 0) {
            *(undefined1 *)(lVar25 + 0x110) = 0;
            FUN_71025e9d50((long *)(lVar25 + 0x108),pvVar13,pppplVar15,(byte ****)param_4,
                           (long ****)param_5,param_6,param_7,param_8);
            if ((*(char *)(lVar25 + 0xe0) != '\0') && (*(long *)(lVar25 + 200) != 0)) {
              *(undefined2 *)(*(long *)(lVar25 + 200) + 0x30) = 0x101;
            }
            if (*(long *)(lVar25 + 0xd8) != 0) {
              *(undefined1 *)(*(long *)(lVar25 + 0xd8) + 0x21) = 1;
            }
            if (*(char *)(lVar25 + 0xe0) != '\0') {
              *(undefined1 *)(*(long *)(lVar25 + 0xb0) + 0x10) = 0;
            }
            *(byte *)(lVar25 + 0x118) = *(byte *)(lVar25 + 0x118) | 1;
            pvVar13 = extraout_x1_23;
          }
          break;
        }
      }
    }
    if ((uVar16 == (uint)puVar9[1]) && ((*puVar9 & 0xffffffffff) != 0)) {
      for (plVar27 = *(long **)(*(long *)(*(long *)*plVar26 + 0x310) + 0xd0);
          plVar27 != *(long **)(*(long *)(*(long *)*plVar26 + 0x310) + 0xd8); plVar27 = plVar27 + 2)
      {
        if ((*(uint *)(plVar27 + 1) < 2) &&
           (lVar25 = *plVar27, (*puVar9 & 0xffffffffff) == *(ulong *)(lVar25 + 0x68))) {
          if (lVar25 != 0) {
            *(byte *)(lVar25 + 0x118) = *(byte *)(lVar25 + 0x118) & 0xfe;
            if ((*(char *)(lVar25 + 0xe0) != '\0') && (*(long *)(lVar25 + 200) != 0)) {
              *(undefined2 *)(*(long *)(lVar25 + 200) + 0x30) = 0;
            }
            if (*(long *)(lVar25 + 0xd8) != 0) {
              *(undefined1 *)(*(long *)(lVar25 + 0xd8) + 0x21) = 0;
            }
            if (*(char *)(lVar25 + 0xe0) != '\0') {
              *(undefined1 *)(*(long *)(lVar25 + 0xb0) + 0x10) = 1;
            }
            *(undefined1 *)(lVar25 + 0x110) = 1;
            FUN_71025e9d50((long *)(lVar25 + 0x108),pvVar13,pppplVar15,(byte ****)param_4,
                           (long ****)param_5,param_6,param_7,param_8);
            pvVar13 = extraout_x1_24;
          }
          break;
        }
      }
    }
    if ((uVar16 == (uint)puVar9[3]) && (uVar28 = puVar9[2] & 0xffffffffff, uVar28 != 0)) {
      for (plVar27 = *(long **)(*(long *)(*(long *)*plVar26 + 0x310) + 0xd0);
          plVar27 != *(long **)(*(long *)(*(long *)*plVar26 + 0x310) + 0xd8); plVar27 = plVar27 + 2)
      {
        if ((*(uint *)(plVar27 + 1) < 2) && (lVar25 = *plVar27, uVar28 == *(ulong *)(lVar25 + 0x68))
           ) {
          if (lVar25 != 0) {
            *(byte *)(lVar25 + 0x118) = *(byte *)(lVar25 + 0x118) & 0xfe;
            if ((*(char *)(lVar25 + 0xe0) != '\0') && (*(long *)(lVar25 + 200) != 0)) {
              *(undefined2 *)(*(long *)(lVar25 + 200) + 0x30) = 0;
            }
            if (*(long *)(lVar25 + 0xd8) != 0) {
              *(undefined1 *)(*(long *)(lVar25 + 0xd8) + 0x21) = 0;
            }
            if (*(char *)(lVar25 + 0xe0) != '\0') {
              *(undefined1 *)(*(long *)(lVar25 + 0xb0) + 0x10) = 1;
            }
            *(undefined1 *)(lVar25 + 0x110) = 1;
            FUN_71025e9d50((long *)(lVar25 + 0x108),pvVar13,pppplVar15,(byte ****)param_4,
                           (long ****)param_5,param_6,param_7,param_8);
            pvVar13 = extraout_x1_25;
          }
          break;
        }
      }
    }
    if ((uVar16 == (uint)puVar9[5]) && (uVar28 = puVar9[4] & 0xffffffffff, uVar28 != 0)) {
      for (plVar27 = *(long **)(*(long *)(*(long *)*plVar26 + 0x310) + 0xd0);
          plVar27 != *(long **)(*(long *)(*(long *)*plVar26 + 0x310) + 0xd8); plVar27 = plVar27 + 2)
      {
        if ((*(uint *)(plVar27 + 1) < 2) && (lVar25 = *plVar27, uVar28 == *(ulong *)(lVar25 + 0x68))
           ) {
          if (lVar25 != 0) {
            *(byte *)(lVar25 + 0x118) = *(byte *)(lVar25 + 0x118) & 0xfe;
            if ((*(char *)(lVar25 + 0xe0) != '\0') && (*(long *)(lVar25 + 200) != 0)) {
              *(undefined2 *)(*(long *)(lVar25 + 200) + 0x30) = 0;
            }
            if (*(long *)(lVar25 + 0xd8) != 0) {
              *(undefined1 *)(*(long *)(lVar25 + 0xd8) + 0x21) = 0;
            }
            if (*(char *)(lVar25 + 0xe0) != '\0') {
              *(undefined1 *)(*(long *)(lVar25 + 0xb0) + 0x10) = 1;
            }
            *(undefined1 *)(lVar25 + 0x110) = 1;
            FUN_71025e9d50((long *)(lVar25 + 0x108),pvVar13,pppplVar15,(byte ****)param_4,
                           (long ****)param_5,param_6,param_7,param_8);
            pvVar13 = extraout_x1_26;
          }
          break;
        }
      }
    }
    if ((uVar16 == (uint)puVar9[7]) && (uVar28 = puVar9[6] & 0xffffffffff, uVar28 != 0)) {
      for (plVar27 = *(long **)(*(long *)(*(long *)*plVar26 + 0x310) + 0xd0);
          plVar27 != *(long **)(*(long *)(*(long *)*plVar26 + 0x310) + 0xd8); plVar27 = plVar27 + 2)
      {
        if ((*(uint *)(plVar27 + 1) < 2) && (lVar25 = *plVar27, uVar28 == *(ulong *)(lVar25 + 0x68))
           ) {
          if (lVar25 != 0) {
            *(byte *)(lVar25 + 0x118) = *(byte *)(lVar25 + 0x118) & 0xfe;
            if ((*(char *)(lVar25 + 0xe0) != '\0') && (*(long *)(lVar25 + 200) != 0)) {
              *(undefined2 *)(*(long *)(lVar25 + 200) + 0x30) = 0;
            }
            if (*(long *)(lVar25 + 0xd8) != 0) {
              *(undefined1 *)(*(long *)(lVar25 + 0xd8) + 0x21) = 0;
            }
            if (*(char *)(lVar25 + 0xe0) != '\0') {
              *(undefined1 *)(*(long *)(lVar25 + 0xb0) + 0x10) = 1;
            }
            *(undefined1 *)(lVar25 + 0x110) = 1;
            FUN_71025e9d50((long *)(lVar25 + 0x108),pvVar13,pppplVar15,(byte ****)param_4,
                           (long ****)param_5,param_6,param_7,param_8);
            pvVar13 = extraout_x1_27;
          }
          break;
        }
      }
    }
    if ((uVar16 == (uint)puVar9[9]) && (uVar28 = puVar9[8] & 0xffffffffff, uVar28 != 0)) {
      for (plVar27 = *(long **)(*(long *)(*(long *)*plVar26 + 0x310) + 0xd0);
          plVar27 != *(long **)(*(long *)(*(long *)*plVar26 + 0x310) + 0xd8); plVar27 = plVar27 + 2)
      {
        if ((*(uint *)(plVar27 + 1) < 2) && (lVar25 = *plVar27, uVar28 == *(ulong *)(lVar25 + 0x68))
           ) {
          if (lVar25 != 0) {
            *(byte *)(lVar25 + 0x118) = *(byte *)(lVar25 + 0x118) & 0xfe;
            if ((*(char *)(lVar25 + 0xe0) != '\0') && (*(long *)(lVar25 + 200) != 0)) {
              *(undefined2 *)(*(long *)(lVar25 + 200) + 0x30) = 0;
            }
            if (*(long *)(lVar25 + 0xd8) != 0) {
              *(undefined1 *)(*(long *)(lVar25 + 0xd8) + 0x21) = 0;
            }
            if (*(char *)(lVar25 + 0xe0) != '\0') {
              *(undefined1 *)(*(long *)(lVar25 + 0xb0) + 0x10) = 1;
            }
            *(undefined1 *)(lVar25 + 0x110) = 1;
            FUN_71025e9d50((long *)(lVar25 + 0x108),pvVar13,pppplVar15,(byte ****)param_4,
                           (long ****)param_5,param_6,param_7,param_8);
            pvVar13 = extraout_x1_28;
          }
          break;
        }
      }
    }
    if ((uVar16 == (uint)puVar9[0xb]) && (uVar28 = puVar9[10] & 0xffffffffff, uVar28 != 0)) {
      for (plVar27 = *(long **)(*(long *)(*(long *)*plVar26 + 0x310) + 0xd0);
          plVar27 != *(long **)(*(long *)(*(long *)*plVar26 + 0x310) + 0xd8); plVar27 = plVar27 + 2)
      {
        if ((*(uint *)(plVar27 + 1) < 2) && (lVar25 = *plVar27, uVar28 == *(ulong *)(lVar25 + 0x68))
           ) {
          if (lVar25 != 0) {
            *(byte *)(lVar25 + 0x118) = *(byte *)(lVar25 + 0x118) & 0xfe;
            if ((*(char *)(lVar25 + 0xe0) != '\0') && (*(long *)(lVar25 + 200) != 0)) {
              *(undefined2 *)(*(long *)(lVar25 + 200) + 0x30) = 0;
            }
            if (*(long *)(lVar25 + 0xd8) != 0) {
              *(undefined1 *)(*(long *)(lVar25 + 0xd8) + 0x21) = 0;
            }
            if (*(char *)(lVar25 + 0xe0) != '\0') {
              *(undefined1 *)(*(long *)(lVar25 + 0xb0) + 0x10) = 1;
            }
            *(undefined1 *)(lVar25 + 0x110) = 1;
            FUN_71025e9d50((long *)(lVar25 + 0x108),pvVar13,pppplVar15,(byte ****)param_4,
                           (long ****)param_5,param_6,param_7,param_8);
            pvVar13 = extraout_x1_29;
          }
          break;
        }
      }
    }
    if ((uVar16 == (uint)puVar9[0xd]) && (uVar28 = puVar9[0xc] & 0xffffffffff, uVar28 != 0)) {
      for (plVar27 = *(long **)(*(long *)(*(long *)*plVar26 + 0x310) + 0xd0);
          plVar27 != *(long **)(*(long *)(*(long *)*plVar26 + 0x310) + 0xd8); plVar27 = plVar27 + 2)
      {
        if ((*(uint *)(plVar27 + 1) < 2) && (lVar25 = *plVar27, uVar28 == *(ulong *)(lVar25 + 0x68))
           ) {
          if (lVar25 != 0) {
            *(byte *)(lVar25 + 0x118) = *(byte *)(lVar25 + 0x118) & 0xfe;
            if ((*(char *)(lVar25 + 0xe0) != '\0') && (*(long *)(lVar25 + 200) != 0)) {
              *(undefined2 *)(*(long *)(lVar25 + 200) + 0x30) = 0;
            }
            if (*(long *)(lVar25 + 0xd8) != 0) {
              *(undefined1 *)(*(long *)(lVar25 + 0xd8) + 0x21) = 0;
            }
            if (*(char *)(lVar25 + 0xe0) != '\0') {
              *(undefined1 *)(*(long *)(lVar25 + 0xb0) + 0x10) = 1;
            }
            *(undefined1 *)(lVar25 + 0x110) = 1;
            FUN_71025e9d50((long *)(lVar25 + 0x108),pvVar13,pppplVar15,(byte ****)param_4,
                           (long ****)param_5,param_6,param_7,param_8);
            pvVar13 = extraout_x1_30;
          }
          break;
        }
      }
    }
    if ((uVar16 == (uint)puVar9[0xf]) && (uVar28 = puVar9[0xe] & 0xffffffffff, uVar28 != 0)) {
      for (plVar27 = *(long **)(*(long *)(*(long *)*plVar26 + 0x310) + 0xd0);
          plVar27 != *(long **)(*(long *)(*(long *)*plVar26 + 0x310) + 0xd8); plVar27 = plVar27 + 2)
      {
        if ((*(uint *)(plVar27 + 1) < 2) && (lVar25 = *plVar27, uVar28 == *(ulong *)(lVar25 + 0x68))
           ) {
          if (lVar25 != 0) {
            *(byte *)(lVar25 + 0x118) = *(byte *)(lVar25 + 0x118) & 0xfe;
            if ((*(char *)(lVar25 + 0xe0) != '\0') && (*(long *)(lVar25 + 200) != 0)) {
              *(undefined2 *)(*(long *)(lVar25 + 200) + 0x30) = 0;
            }
            if (*(long *)(lVar25 + 0xd8) != 0) {
              *(undefined1 *)(*(long *)(lVar25 + 0xd8) + 0x21) = 0;
            }
            if (*(char *)(lVar25 + 0xe0) != '\0') {
              *(undefined1 *)(*(long *)(lVar25 + 0xb0) + 0x10) = 1;
            }
            *(undefined1 *)(lVar25 + 0x110) = 1;
            FUN_71025e9d50((long *)(lVar25 + 0x108),pvVar13,pppplVar15,(byte ****)param_4,
                           (long ****)param_5,param_6,param_7,param_8);
            pvVar13 = extraout_x1_31;
          }
          break;
        }
      }
    }
    if ((uVar16 == (uint)puVar9[0x11]) && (uVar28 = puVar9[0x10] & 0xffffffffff, uVar28 != 0)) {
      for (plVar27 = *(long **)(*(long *)(*(long *)*plVar26 + 0x310) + 0xd0);
          plVar27 != *(long **)(*(long *)(*(long *)*plVar26 + 0x310) + 0xd8); plVar27 = plVar27 + 2)
      {
        if ((*(uint *)(plVar27 + 1) < 2) && (lVar25 = *plVar27, uVar28 == *(ulong *)(lVar25 + 0x68))
           ) {
          if (lVar25 != 0) {
            *(byte *)(lVar25 + 0x118) = *(byte *)(lVar25 + 0x118) & 0xfe;
            if ((*(char *)(lVar25 + 0xe0) != '\0') && (*(long *)(lVar25 + 200) != 0)) {
              *(undefined2 *)(*(long *)(lVar25 + 200) + 0x30) = 0;
            }
            if (*(long *)(lVar25 + 0xd8) != 0) {
              *(undefined1 *)(*(long *)(lVar25 + 0xd8) + 0x21) = 0;
            }
            if (*(char *)(lVar25 + 0xe0) != '\0') {
              *(undefined1 *)(*(long *)(lVar25 + 0xb0) + 0x10) = 1;
            }
            *(undefined1 *)(lVar25 + 0x110) = 1;
            FUN_71025e9d50((long *)(lVar25 + 0x108),pvVar13,pppplVar15,(byte ****)param_4,
                           (long ****)param_5,param_6,param_7,param_8);
            pvVar13 = extraout_x1_32;
          }
          break;
        }
      }
    }
    if ((uVar16 == (uint)puVar9[0x13]) && (uVar28 = puVar9[0x12] & 0xffffffffff, uVar28 != 0)) {
      for (plVar27 = *(long **)(*(long *)(*(long *)*plVar26 + 0x310) + 0xd0);
          plVar27 != *(long **)(*(long *)(*(long *)*plVar26 + 0x310) + 0xd8); plVar27 = plVar27 + 2)
      {
        if ((*(uint *)(plVar27 + 1) < 2) && (lVar25 = *plVar27, uVar28 == *(ulong *)(lVar25 + 0x68))
           ) {
          if (lVar25 != 0) {
            *(byte *)(lVar25 + 0x118) = *(byte *)(lVar25 + 0x118) & 0xfe;
            if ((*(char *)(lVar25 + 0xe0) != '\0') && (*(long *)(lVar25 + 200) != 0)) {
              *(undefined2 *)(*(long *)(lVar25 + 200) + 0x30) = 0;
            }
            if (*(long *)(lVar25 + 0xd8) != 0) {
              *(undefined1 *)(*(long *)(lVar25 + 0xd8) + 0x21) = 0;
            }
            if (*(char *)(lVar25 + 0xe0) != '\0') {
              *(undefined1 *)(*(long *)(lVar25 + 0xb0) + 0x10) = 1;
            }
            *(undefined1 *)(lVar25 + 0x110) = 1;
            FUN_71025e9d50((long *)(lVar25 + 0x108),pvVar13,pppplVar15,(byte ****)param_4,
                           (long ****)param_5,param_6,param_7,param_8);
            pvVar13 = extraout_x1_33;
          }
          break;
        }
      }
    }
    if ((uVar16 == (uint)puVar9[0x15]) && (uVar28 = puVar9[0x14] & 0xffffffffff, uVar28 != 0)) {
      for (plVar27 = *(long **)(*(long *)(*(long *)*plVar26 + 0x310) + 0xd0);
          plVar27 != *(long **)(*(long *)(*(long *)*plVar26 + 0x310) + 0xd8); plVar27 = plVar27 + 2)
      {
        if ((*(uint *)(plVar27 + 1) < 2) && (lVar25 = *plVar27, uVar28 == *(ulong *)(lVar25 + 0x68))
           ) {
          if (lVar25 != 0) {
            *(byte *)(lVar25 + 0x118) = *(byte *)(lVar25 + 0x118) & 0xfe;
            if ((*(char *)(lVar25 + 0xe0) != '\0') && (*(long *)(lVar25 + 200) != 0)) {
              *(undefined2 *)(*(long *)(lVar25 + 200) + 0x30) = 0;
            }
            if (*(long *)(lVar25 + 0xd8) != 0) {
              *(undefined1 *)(*(long *)(lVar25 + 0xd8) + 0x21) = 0;
            }
            if (*(char *)(lVar25 + 0xe0) != '\0') {
              *(undefined1 *)(*(long *)(lVar25 + 0xb0) + 0x10) = 1;
            }
            *(undefined1 *)(lVar25 + 0x110) = 1;
            FUN_71025e9d50((long *)(lVar25 + 0x108),pvVar13,pppplVar15,(byte ****)param_4,
                           (long ****)param_5,param_6,param_7,param_8);
            pvVar13 = extraout_x1_34;
          }
          break;
        }
      }
    }
    plVar26[0xb] = 0;
    plVar26[0xc] = 0;
    if (uVar16 >> 1 == 0) {
      lVar25 = 0x15addd2a50;
LAB_7102d3b4b8:
      plVar27 = (long *)*plVar26;
      for (plVar10 = *(long **)(*(long *)(*plVar27 + 0x310) + 0xd0);
          plVar10 != *(long **)(*(long *)(*plVar27 + 0x310) + 0xd8); plVar10 = plVar10 + 2) {
        if ((*(uint *)(plVar10 + 1) < 2) && (lVar24 = *plVar10, lVar25 == *(long *)(lVar24 + 0x68)))
        goto LAB_7102d3b4fc;
      }
      lVar24 = 0;
LAB_7102d3b4fc:
      plVar26[0xc] = lVar24;
    }
    else {
      if (uVar16 == 2) {
        lVar25 = 0x14dad54202;
        goto LAB_7102d3b4b8;
      }
      plVar27 = (long *)*plVar26;
    }
    if ((*(char *)(*plVar27 + 200) != '\0') &&
       (plVar27 = *(long **)(*(long *)(*plVar27 + 0x310) + 0x118), plVar27 != (long *)0x0)) {
      FUN_710261f440(plVar27,0);
      lVar25 = *plVar27;
      pvVar13 = extraout_x1_35;
      if (*(char *)(*plVar26 + 0x12) == '\0') {
        if (*(char *)(lVar25 + 0x80) != '\0') {
          plVar10 = *(long **)(lVar25 + 0x30);
          pcVar18 = *(code **)(*plVar10 + 0x180);
          uVar12 = 0x96f6fc714;
          goto LAB_7102d3b57c;
        }
      }
      else if (*(char *)(lVar25 + 0x80) != '\0') {
        plVar10 = *(long **)(lVar25 + 0x30);
        pcVar18 = *(code **)(*plVar10 + 0x180);
        uVar12 = 0x800071bbe;
LAB_7102d3b57c:
        pppplVar15 = (long ****)0x1;
        (*pcVar18)(plVar10,uVar12);
        pvVar13 = extraout_x1_36;
      }
      if ((*(int *)(*(long *)*plVar26 + 8) == 0x15e) && (*(char *)(*plVar27 + 0x80) != '\0')) {
        plVar26 = *(long **)(*plVar27 + 0x30);
        pppplVar15 = (long ****)0x1;
        (**(code **)(*plVar26 + 0x180))(plVar26,0xe34072ce7);
        pvVar13 = extraout_x1_37;
      }
    }
    if (puVar9 != (ulong *)0x0) {
      FUN_710392eb40((ulong)puVar9);
      pvVar13 = extraout_x1_38;
    }
    goto joined_r0x007102d3b5d0;
  }
  uVar5 = *(byte *)(*plVar26 + 0x18) ^ 1 | uVar16 << 1;
  *(uint *)(plVar27 + 2) = uVar5;
  pppplVar15 = (long ****)&DAT_ffffffff;
  FUN_710262b8c0(*(long *)(*plVar26 + 0x300),uVar5,0xffffffff,(byte ****)param_4,(long ****)param_5,
                 param_6,param_7,param_8);
  puVar8 = *(undefined8 **)(**(long **)(*(long *)*plVar27 + 0x330) + 0x50);
  puVar2 = *(undefined8 **)(**(long **)(*(long *)*plVar27 + 0x330) + 0x58);
  uVar12 = extraout_x1_03;
  if (puVar8 != puVar2) {
    lVar25 = plVar27[2];
    do {
      plVar26 = (long *)*puVar8;
      if (*(int *)((long)plVar26 + 0xc) == (int)lVar25) {
        if ((char)plVar26[3] == '\0') {
          (**(code **)(*plVar26 + 0x10))(plVar26);
          *(undefined1 *)(plVar26 + 3) = 1;
          uVar12 = extraout_x1_04;
        }
      }
      else if ((char)plVar26[3] != '\0') {
        *(undefined1 *)(plVar26 + 3) = 0;
        (**(code **)(*plVar26 + 0x18))(plVar26);
        uVar12 = extraout_x1_05;
      }
      puVar8 = puVar8 + 1;
    } while (puVar2 != puVar8);
  }
  puVar8 = (undefined8 *)param_1[0xd];
  local_b0 = (long ***)0x7104306918;
  local_a8 = (uint *)0x710439b571;
  uVar28 = param_2 & 0xffffffff;
  local_a0 = (uint *)0x71042d475d;
  local_98 = (uint *)0x710426e1aa;
  local_90 = "reflection_cubemap_05SnowyTundra";
  local_88 = "reflection_cubemap_06StoneShore";
  if (uVar16 < 6) {
    FUN_7102633800(*(long *)(*(long *)*puVar8 + 0x318),(long *********)(&local_b0)[uVar28],
                   pppplVar15,param_4,(long ****)param_5,param_6,param_7,param_8);
    uVar12 = extraout_x1_06;
  }
  local_b0 = (long ***)0x710437a9d2;
  local_a8 = (uint *)0x710426e1c5;
  local_a0 = (uint *)0x710426e1d9;
  local_98 = (uint *)0x710436a7f7;
  local_90 = "stage_05SnowyTundra";
  local_88 = "stage_06StoneShore";
  if (uVar16 < 6) {
    pppplVar15 = (long ****)0x1;
    FUN_7102633b90(*(long *)(*(long *)*puVar8 + 0x318),(long *********)(&local_b0)[uVar28],1,param_4
                   ,(long ****)param_5,param_6,param_7,param_8);
    uVar12 = extraout_x1_07;
  }
  local_b0 = (long ***)0x71042f60d0;
  local_a8 = (uint *)0x7104410ad6;
  local_a0 = (uint *)0x71043385b5;
  local_98 = (uint *)0x71043282b1;
  local_90 = "chara_05SnowyTundra";
  local_88 = "chara_06StoneShore";
  if (uVar16 < 6) {
    pppplVar15 = (long ****)0x1;
    FUN_7102633a10(*(long *)(*(long *)*puVar8 + 0x318),(long *********)(&local_b0)[uVar28],1,param_4
                   ,(long ****)param_5,param_6,param_7,param_8);
    uVar12 = extraout_x1_08;
  }
  plVar27 = (long *)param_1[0xc];
  plVar26 = (long *)*plVar27;
  plVar27[9] = plVar27[8];
  lVar17 = plVar26[1];
  lVar25 = *(long *)(lVar17 + 0xe8);
  lVar24 = *(long *)(lVar17 + 0xf0);
  if (lVar25 != lVar24) {
LAB_7102d39d5c:
    uVar22 = *(ulong *)(lVar25 + 8) & 0xffffffffff;
    if (uVar22 != 0) {
      for (plVar10 = *(long **)(*(long *)(*plVar26 + 0x310) + 0xd0);
          plVar10 != *(long **)(*(long *)(*plVar26 + 0x310) + 0xd8); plVar10 = plVar10 + 2) {
        if ((*(uint *)(plVar10 + 1) < 2) && (lVar20 = *plVar10, uVar22 == *(ulong *)(lVar20 + 0x68))
           ) {
          if (lVar20 != 0) {
            pcVar1 = *(char **)(lVar17 + 0xe8);
            goto joined_r0x007102d39db4;
          }
          break;
        }
      }
    }
    goto LAB_7102d39e00;
  }
LAB_7102d39e0c:
  plVar27[0xb] = 0;
  switch(uVar28) {
  case 0:
    plVar26 = (long *)*plVar27;
    for (plVar10 = *(long **)(*(long *)(*plVar26 + 0x310) + 0xd0);
        plVar10 != *(long **)(*(long *)(*plVar26 + 0x310) + 0xd8); plVar10 = plVar10 + 2) {
      if ((*(uint *)(plVar10 + 1) < 2) &&
         (lVar25 = *plVar10, *(long *)(lVar25 + 0x68) == 0x13aa5d121a)) goto LAB_7102d39e7c;
    }
    lVar25 = 0;
LAB_7102d39e7c:
    plVar27[0xb] = lVar25;
    plVar27[0xc] = 0;
    for (plVar10 = *(long **)(*(long *)(*plVar26 + 0x310) + 0xd0);
        plVar10 != *(long **)(*(long *)(*plVar26 + 0x310) + 0xd8); plVar10 = plVar10 + 2) {
      if ((*(uint *)(plVar10 + 1) < 2) &&
         (lVar25 = *plVar10, *(long *)(lVar25 + 0x68) == 0x15eff39dba)) goto LAB_7102d3a3d0;
    }
    break;
  case 1:
    plVar26 = (long *)*plVar27;
    for (plVar10 = *(long **)(*(long *)(*plVar26 + 0x310) + 0xd0);
        plVar10 != *(long **)(*(long *)(*plVar26 + 0x310) + 0xd8); plVar10 = plVar10 + 2) {
      if ((*(uint *)(plVar10 + 1) < 2) &&
         (lVar25 = *plVar10, *(long *)(lVar25 + 0x68) == 0x182ff1a84d)) goto LAB_7102d3a2e0;
    }
    lVar25 = 0;
LAB_7102d3a2e0:
    plVar27[0xb] = lVar25;
    plVar27[0xc] = 0;
    for (plVar10 = *(long **)(*(long *)(*plVar26 + 0x310) + 0xd0);
        plVar10 != *(long **)(*(long *)(*plVar26 + 0x310) + 0xd8); plVar10 = plVar10 + 2) {
      if ((*(uint *)(plVar10 + 1) < 2) &&
         (lVar25 = *plVar10, *(long *)(lVar25 + 0x68) == 0x1a66634b93)) goto LAB_7102d3a3d0;
    }
    break;
  case 2:
    plVar26 = (long *)*plVar27;
    for (plVar10 = *(long **)(*(long *)(*plVar26 + 0x310) + 0xd0);
        plVar10 != *(long **)(*(long *)(*plVar26 + 0x310) + 0xd8); plVar10 = plVar10 + 2) {
      if ((*(uint *)(plVar10 + 1) < 2) &&
         (lVar25 = *plVar10, *(long *)(lVar25 + 0x68) == 0x14e2c4894a)) goto LAB_7102d3a1a0;
    }
    lVar25 = 0;
LAB_7102d3a1a0:
    plVar27[0xb] = lVar25;
    plVar27[0xc] = 0;
    for (plVar10 = *(long **)(*(long *)(*plVar26 + 0x310) + 0xd0);
        plVar10 != *(long **)(*(long *)(*plVar26 + 0x310) + 0xd8); plVar10 = plVar10 + 2) {
      if ((*(uint *)(plVar10 + 1) < 2) &&
         (lVar25 = *plVar10, *(long *)(lVar25 + 0x68) == 0x16d9a6d1ed)) goto LAB_7102d3a3d0;
    }
    break;
  case 3:
    plVar26 = (long *)*plVar27;
    for (plVar10 = *(long **)(*(long *)(*plVar26 + 0x310) + 0xd0);
        plVar10 != *(long **)(*(long *)(*plVar26 + 0x310) + 0xd8); plVar10 = plVar10 + 2) {
      if ((*(uint *)(plVar10 + 1) < 2) &&
         (lVar25 = *plVar10, *(long *)(lVar25 + 0x68) == 0x1243984c5c)) goto LAB_7102d3a240;
    }
    lVar25 = 0;
LAB_7102d3a240:
    plVar27[0xb] = lVar25;
    plVar27[0xc] = 0;
    for (plVar10 = *(long **)(*(long *)(*plVar26 + 0x310) + 0xd0);
        plVar10 != *(long **)(*(long *)(*plVar26 + 0x310) + 0xd8); plVar10 = plVar10 + 2) {
      if ((*(uint *)(plVar10 + 1) < 2) &&
         (lVar25 = *plVar10, *(long *)(lVar25 + 0x68) == 0x14c920262d)) goto LAB_7102d3a3d0;
    }
    break;
  case 4:
    plVar26 = (long *)*plVar27;
    for (plVar10 = *(long **)(*(long *)(*plVar26 + 0x310) + 0xd0);
        plVar10 != *(long **)(*(long *)(*plVar26 + 0x310) + 0xd8); plVar10 = plVar10 + 2) {
      if ((*(uint *)(plVar10 + 1) < 2) &&
         (lVar25 = *plVar10, *(long *)(lVar25 + 0x68) == 0x18fc003f20)) goto LAB_7102d3a100;
    }
    lVar25 = 0;
LAB_7102d3a100:
    plVar27[0xb] = lVar25;
    plVar27[0xc] = 0;
    for (plVar10 = *(long **)(*(long *)(*plVar26 + 0x310) + 0xd0);
        plVar10 != *(long **)(*(long *)(*plVar26 + 0x310) + 0xd8); plVar10 = plVar10 + 2) {
      if ((*(uint *)(plVar10 + 1) < 2) &&
         (lVar25 = *plVar10, *(long *)(lVar25 + 0x68) == 0x1a99f0d365)) goto LAB_7102d3a3d0;
    }
    break;
  case 5:
    plVar26 = (long *)*plVar27;
    for (plVar10 = *(long **)(*(long *)(*plVar26 + 0x310) + 0xd0);
        plVar10 != *(long **)(*(long *)(*plVar26 + 0x310) + 0xd8); plVar10 = plVar10 + 2) {
      if ((*(uint *)(plVar10 + 1) < 2) &&
         (lVar25 = *plVar10, *(long *)(lVar25 + 0x68) == 0x175c29fde0)) goto LAB_7102d3a380;
    }
    lVar25 = 0;
LAB_7102d3a380:
    plVar27[0xb] = lVar25;
    plVar27[0xc] = 0;
    for (plVar10 = *(long **)(*(long *)(*plVar26 + 0x310) + 0xd0);
        plVar10 != *(long **)(*(long *)(*plVar26 + 0x310) + 0xd8); plVar10 = plVar10 + 2) {
      if ((*(uint *)(plVar10 + 1) < 2) &&
         (lVar25 = *plVar10, *(long *)(lVar25 + 0x68) == 0x19e5f5b925)) goto LAB_7102d3a3d0;
    }
    break;
  default:
    plVar26 = (long *)*plVar27;
    plVar27[0xc] = 0;
    goto LAB_7102d3a3d4;
  }
  lVar25 = 0;
LAB_7102d3a3d0:
  plVar27[0xc] = lVar25;
LAB_7102d3a3d4:
  if ((*(char *)(*plVar26 + 200) != '\0') &&
     (plVar26 = *(long **)(*(long *)(*plVar26 + 0x310) + 0x118), plVar26 != (long *)0x0)) {
    FUN_710261f440(plVar26,0);
    uVar12 = extraout_x1_12;
    if (*(char *)(*(long *)*plVar27 + 0x18) == '\0') {
      switch(uVar28) {
      case 0:
        if (*(char *)(*plVar26 + 0x80) != '\0') {
          plVar26 = *(long **)(*plVar26 + 0x30);
          pcVar18 = *(code **)(*plVar26 + 0x180);
          uVar12 = 0x1796da337c;
          goto LAB_7102d3b780;
        }
        break;
      case 1:
        if (*(char *)(*plVar26 + 0x80) != '\0') {
          plVar26 = *(long **)(*plVar26 + 0x30);
          pcVar18 = *(code **)(*plVar26 + 0x180);
          uVar12 = 0x1c2312e45b;
          goto LAB_7102d3b780;
        }
        break;
      case 2:
        if (*(char *)(*plVar26 + 0x80) != '\0') {
          plVar26 = *(long **)(*plVar26 + 0x30);
          pcVar18 = *(code **)(*plVar26 + 0x180);
          uVar12 = 0x18cd2becfd;
          goto LAB_7102d3b780;
        }
        break;
      case 3:
        if (*(char *)(*plVar26 + 0x80) != '\0') {
          plVar26 = *(long **)(*plVar26 + 0x30);
          pcVar18 = *(code **)(*plVar26 + 0x180);
          uVar12 = 0x166e641568;
          goto LAB_7102d3b780;
        }
        break;
      case 4:
        if (*(char *)(*plVar26 + 0x80) != '\0') {
          plVar26 = *(long **)(*plVar26 + 0x30);
          pcVar18 = *(code **)(*plVar26 + 0x180);
          uVar12 = 0x1c10c20829;
          goto LAB_7102d3b780;
        }
        break;
      case 5:
        if (*(char *)(*plVar26 + 0x80) != '\0') {
          plVar26 = *(long **)(*plVar26 + 0x30);
          pcVar18 = *(code **)(*plVar26 + 0x180);
          uVar12 = 0x1b3118f794;
          goto LAB_7102d3b780;
        }
      }
    }
    else {
      switch(uVar28) {
      case 0:
        if (*(char *)(*plVar26 + 0x80) != '\0') {
          plVar26 = *(long **)(*plVar26 + 0x30);
          pcVar18 = *(code **)(*plVar26 + 0x180);
          uVar12 = 0xd05691a8b;
LAB_7102d3b780:
          pppplVar15 = (long ****)0x1;
          (*pcVar18)(plVar26,uVar12);
          uVar12 = extraout_x1_39;
        }
        break;
      case 1:
        if (*(char *)(*plVar26 + 0x80) != '\0') {
          plVar26 = *(long **)(*plVar26 + 0x30);
          pcVar18 = *(code **)(*plVar26 + 0x180);
          uVar12 = 0x12e606a9ff;
          goto LAB_7102d3b780;
        }
        break;
      case 2:
        if (*(char *)(*plVar26 + 0x80) != '\0') {
          plVar26 = *(long **)(*plVar26 + 0x30);
          pcVar18 = *(code **)(*plVar26 + 0x180);
          uVar12 = 0xef7b68bd3;
          goto LAB_7102d3b780;
        }
        break;
      case 3:
        if (*(char *)(*plVar26 + 0x80) != '\0') {
          plVar26 = *(long **)(*plVar26 + 0x30);
          pcVar18 = *(code **)(*plVar26 + 0x180);
          uVar12 = 0xc61e2f728;
          goto LAB_7102d3b780;
        }
        break;
      case 4:
        if (*(char *)(*plVar26 + 0x80) != '\0') {
          plVar26 = *(long **)(*plVar26 + 0x30);
          pcVar18 = *(code **)(*plVar26 + 0x180);
          uVar12 = 0x1204f0df09;
          goto LAB_7102d3b780;
        }
        break;
      case 5:
        if (*(char *)(*plVar26 + 0x80) != '\0') {
          plVar26 = *(long **)(*plVar26 + 0x30);
          pcVar18 = *(code **)(*plVar26 + 0x180);
          uVar12 = 0x1115f5b6a6;
          goto LAB_7102d3b780;
        }
      }
    }
  }
  plVar27 = (long *)param_1[8];
  FUN_7102d36460((long)plVar27,uVar12,pppplVar15,(byte ****)param_4,(long ****)param_5,param_6,
                 param_7,param_8);
  plVar26 = (long *)*plVar27;
  pvVar13 = extraout_x1_40;
  if (*(char *)(*plVar26 + 0x18) == '\0') goto joined_r0x007102d3b5d0;
  switch(uVar28) {
  default:
    lVar25 = plVar26[1];
    local_a0 = (uint *)0x0;
    local_98 = (uint *)0x0;
    local_a8 = (uint *)0x0;
    ppplVar6 = (long ***)(*(long *)(lVar25 + 0x250) - *(long *)(lVar25 + 0x248));
    if (ppplVar6 == (long ***)0x0) {
      __dest = (uint *)0x0;
    }
    else {
      if (0xccccccccccccccc < (ulong)(((long)ppplVar6 >> 2) * -0x3333333333333333)) {
LAB_7102d3c328:
        local_98 = (uint *)0x0;
        local_a0 = (uint *)0x0;
        local_a8 = (uint *)0x0;
                    /* WARNING: Subroutine does not return */
        std::__vector_base_common<true>::__throw_length_error();
      }
      __dest = (uint *)FUN_710392e290(0x10,ppplVar6,pppplVar15,(byte ****)param_4,(long ****)param_5
                                      ,param_6,param_7,param_8);
      if (__dest == (uint *)0x0) {
        if (DAT_7105332f00 != (long *)0x0) {
          local_70 = (long ***)((ulong)local_70 & 0xffffffff00000000);
          pppplVar15 = (long ****)&local_80;
          local_80 = ppplVar6;
          uVar28 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_70);
          if (((uVar28 & 1) != 0) &&
             (__dest = (uint *)FUN_710392e290(0x10,ppplVar6,pppplVar15,(byte ****)param_4,
                                              (long ****)param_5,param_6,param_7,param_8),
             __dest != (uint *)0x0)) goto LAB_7102d3b860;
        }
        __dest = (uint *)0x0;
      }
LAB_7102d3b860:
      local_98 = __dest + ((long)ppplVar6 >> 2);
      pvVar13 = *(void **)(lVar25 + 0x248);
      pppplVar15 = (long ****)(*(long *)(lVar25 + 0x250) - (long)pvVar13);
      local_a8 = __dest;
      local_a0 = __dest;
      if (0 < (long)pppplVar15) {
        uVar28 = (ulong)pppplVar15 / 0x14;
        memcpy(__dest,pvVar13,(size_t)pppplVar15);
        local_a0 = __dest + uVar28 * 5;
        pvVar13 = extraout_x1_41;
      }
    }
    puVar8 = (undefined8 *)(lVar25 + 0x260);
    break;
  case 1:
    lVar25 = plVar26[1];
    local_a0 = (uint *)0x0;
    local_98 = (uint *)0x0;
    local_a8 = (uint *)0x0;
    ppplVar6 = (long ***)(*(long *)(lVar25 + 0x278) - *(long *)(lVar25 + 0x270));
    if (ppplVar6 == (long ***)0x0) {
      __dest = (uint *)0x0;
    }
    else {
      if (0xccccccccccccccc < (ulong)(((long)ppplVar6 >> 2) * -0x3333333333333333))
      goto LAB_7102d3c328;
      __dest = (uint *)FUN_710392e290(0x10,ppplVar6,pppplVar15,(byte ****)param_4,(long ****)param_5
                                      ,param_6,param_7,param_8);
      if (__dest == (uint *)0x0) {
        if (DAT_7105332f00 != (long *)0x0) {
          local_70 = (long ***)((ulong)local_70 & 0xffffffff00000000);
          pppplVar15 = (long ****)&local_80;
          local_80 = ppplVar6;
          uVar28 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_70);
          if (((uVar28 & 1) != 0) &&
             (__dest = (uint *)FUN_710392e290(0x10,ppplVar6,pppplVar15,(byte ****)param_4,
                                              (long ****)param_5,param_6,param_7,param_8),
             __dest != (uint *)0x0)) goto LAB_7102d3bbe0;
        }
        __dest = (uint *)0x0;
      }
LAB_7102d3bbe0:
      local_98 = __dest + ((long)ppplVar6 >> 2);
      pvVar13 = *(void **)(lVar25 + 0x270);
      pppplVar15 = (long ****)(*(long *)(lVar25 + 0x278) - (long)pvVar13);
      local_a8 = __dest;
      local_a0 = __dest;
      if (0 < (long)pppplVar15) {
        uVar28 = (ulong)pppplVar15 / 0x14;
        memcpy(__dest,pvVar13,(size_t)pppplVar15);
        local_a0 = __dest + uVar28 * 5;
        pvVar13 = extraout_x1_45;
      }
    }
    puVar8 = (undefined8 *)(lVar25 + 0x288);
    break;
  case 2:
    lVar25 = plVar26[1];
    local_a0 = (uint *)0x0;
    local_98 = (uint *)0x0;
    local_a8 = (uint *)0x0;
    ppplVar6 = (long ***)(*(long *)(lVar25 + 0x2a0) - *(long *)(lVar25 + 0x298));
    if (ppplVar6 == (long ***)0x0) {
      __dest = (uint *)0x0;
    }
    else {
      if (0xccccccccccccccc < (ulong)(((long)ppplVar6 >> 2) * -0x3333333333333333))
      goto LAB_7102d3c328;
      __dest = (uint *)FUN_710392e290(0x10,ppplVar6,pppplVar15,(byte ****)param_4,(long ****)param_5
                                      ,param_6,param_7,param_8);
      if (__dest == (uint *)0x0) {
        if (DAT_7105332f00 != (long *)0x0) {
          local_70 = (long ***)((ulong)local_70 & 0xffffffff00000000);
          pppplVar15 = (long ****)&local_80;
          local_80 = ppplVar6;
          uVar28 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_70);
          if (((uVar28 & 1) != 0) &&
             (__dest = (uint *)FUN_710392e290(0x10,ppplVar6,pppplVar15,(byte ****)param_4,
                                              (long ****)param_5,param_6,param_7,param_8),
             __dest != (uint *)0x0)) goto LAB_7102d3ba20;
        }
        __dest = (uint *)0x0;
      }
LAB_7102d3ba20:
      local_98 = __dest + ((long)ppplVar6 >> 2);
      pvVar13 = *(void **)(lVar25 + 0x298);
      pppplVar15 = (long ****)(*(long *)(lVar25 + 0x2a0) - (long)pvVar13);
      local_a8 = __dest;
      local_a0 = __dest;
      if (0 < (long)pppplVar15) {
        uVar28 = (ulong)pppplVar15 / 0x14;
        memcpy(__dest,pvVar13,(size_t)pppplVar15);
        local_a0 = __dest + uVar28 * 5;
        pvVar13 = extraout_x1_43;
      }
    }
    puVar8 = (undefined8 *)(lVar25 + 0x2b0);
    break;
  case 3:
    lVar25 = plVar26[1];
    local_a0 = (uint *)0x0;
    local_98 = (uint *)0x0;
    local_a8 = (uint *)0x0;
    ppplVar6 = (long ***)(*(long *)(lVar25 + 0x2c8) - *(long *)(lVar25 + 0x2c0));
    if (ppplVar6 == (long ***)0x0) {
      __dest = (uint *)0x0;
    }
    else {
      if (0xccccccccccccccc < (ulong)(((long)ppplVar6 >> 2) * -0x3333333333333333))
      goto LAB_7102d3c328;
      __dest = (uint *)FUN_710392e290(0x10,ppplVar6,pppplVar15,(byte ****)param_4,(long ****)param_5
                                      ,param_6,param_7,param_8);
      if (__dest == (uint *)0x0) {
        if (DAT_7105332f00 != (long *)0x0) {
          local_70 = (long ***)((ulong)local_70 & 0xffffffff00000000);
          pppplVar15 = (long ****)&local_80;
          local_80 = ppplVar6;
          uVar28 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_70);
          if (((uVar28 & 1) != 0) &&
             (__dest = (uint *)FUN_710392e290(0x10,ppplVar6,pppplVar15,(byte ****)param_4,
                                              (long ****)param_5,param_6,param_7,param_8),
             __dest != (uint *)0x0)) goto LAB_7102d3bb00;
        }
        __dest = (uint *)0x0;
      }
LAB_7102d3bb00:
      local_98 = __dest + ((long)ppplVar6 >> 2);
      pvVar13 = *(void **)(lVar25 + 0x2c0);
      pppplVar15 = (long ****)(*(long *)(lVar25 + 0x2c8) - (long)pvVar13);
      local_a8 = __dest;
      local_a0 = __dest;
      if (0 < (long)pppplVar15) {
        uVar28 = (ulong)pppplVar15 / 0x14;
        memcpy(__dest,pvVar13,(size_t)pppplVar15);
        local_a0 = __dest + uVar28 * 5;
        pvVar13 = extraout_x1_44;
      }
    }
    puVar8 = (undefined8 *)(lVar25 + 0x2d8);
    break;
  case 4:
    lVar25 = plVar26[1];
    local_a0 = (uint *)0x0;
    local_98 = (uint *)0x0;
    local_a8 = (uint *)0x0;
    ppplVar6 = (long ***)(*(long *)(lVar25 + 0x2f0) - *(long *)(lVar25 + 0x2e8));
    if (ppplVar6 == (long ***)0x0) {
      __dest = (uint *)0x0;
    }
    else {
      if (0xccccccccccccccc < (ulong)(((long)ppplVar6 >> 2) * -0x3333333333333333))
      goto LAB_7102d3c328;
      __dest = (uint *)FUN_710392e290(0x10,ppplVar6,pppplVar15,(byte ****)param_4,(long ****)param_5
                                      ,param_6,param_7,param_8);
      if (__dest == (uint *)0x0) {
        if (DAT_7105332f00 != (long *)0x0) {
          local_70 = (long ***)((ulong)local_70 & 0xffffffff00000000);
          pppplVar15 = (long ****)&local_80;
          local_80 = ppplVar6;
          uVar28 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_70);
          if (((uVar28 & 1) != 0) &&
             (__dest = (uint *)FUN_710392e290(0x10,ppplVar6,pppplVar15,(byte ****)param_4,
                                              (long ****)param_5,param_6,param_7,param_8),
             __dest != (uint *)0x0)) goto LAB_7102d3b940;
        }
        __dest = (uint *)0x0;
      }
LAB_7102d3b940:
      local_98 = __dest + ((long)ppplVar6 >> 2);
      pvVar13 = *(void **)(lVar25 + 0x2e8);
      pppplVar15 = (long ****)(*(long *)(lVar25 + 0x2f0) - (long)pvVar13);
      local_a8 = __dest;
      local_a0 = __dest;
      if (0 < (long)pppplVar15) {
        uVar28 = (ulong)pppplVar15 / 0x14;
        memcpy(__dest,pvVar13,(size_t)pppplVar15);
        local_a0 = __dest + uVar28 * 5;
        pvVar13 = extraout_x1_42;
      }
    }
    puVar8 = (undefined8 *)(lVar25 + 0x300);
    break;
  case 5:
    lVar25 = plVar26[1];
    local_a0 = (uint *)0x0;
    local_98 = (uint *)0x0;
    local_a8 = (uint *)0x0;
    ppplVar6 = (long ***)(*(long *)(lVar25 + 0x318) - *(long *)(lVar25 + 0x310));
    if (ppplVar6 == (long ***)0x0) {
      __dest = (uint *)0x0;
    }
    else {
      if (0xccccccccccccccc < (ulong)(((long)ppplVar6 >> 2) * -0x3333333333333333))
      goto LAB_7102d3c328;
      __dest = (uint *)FUN_710392e290(0x10,ppplVar6,pppplVar15,(byte ****)param_4,(long ****)param_5
                                      ,param_6,param_7,param_8);
      if (__dest == (uint *)0x0) {
        if (DAT_7105332f00 != (long *)0x0) {
          local_70 = (long ***)((ulong)local_70 & 0xffffffff00000000);
          pppplVar15 = (long ****)&local_80;
          local_80 = ppplVar6;
          uVar28 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_70);
          if (((uVar28 & 1) != 0) &&
             (__dest = (uint *)FUN_710392e290(0x10,ppplVar6,pppplVar15,(byte ****)param_4,
                                              (long ****)param_5,param_6,param_7,param_8),
             __dest != (uint *)0x0)) goto LAB_7102d3bcc0;
        }
        __dest = (uint *)0x0;
      }
LAB_7102d3bcc0:
      local_98 = __dest + ((long)ppplVar6 >> 2);
      pvVar13 = *(void **)(lVar25 + 0x310);
      pppplVar15 = (long ****)(*(long *)(lVar25 + 0x318) - (long)pvVar13);
      local_a8 = __dest;
      local_a0 = __dest;
      if (0 < (long)pppplVar15) {
        uVar28 = (ulong)pppplVar15 / 0x14;
        memcpy(__dest,pvVar13,(size_t)pppplVar15);
        local_a0 = __dest + uVar28 * 5;
        pvVar13 = extraout_x1_46;
      }
    }
    puVar8 = (undefined8 *)(lVar25 + 0x328);
  }
  puVar7 = local_a0;
  local_90 = (char *)*puVar8;
  pppplVar29 = &local_b0;
  local_b0 = (long ***)&PTR_FUN_7105134040;
  if (__dest != local_a0) {
    puVar9 = (ulong *)(plVar27 + 0x13);
    plVar26 = plVar27 + 5;
    plVar10 = plVar27 + 0x15;
    do {
      uVar16 = (uint)*(ulong *)(__dest + 1);
      pvVar13 = (void *)(ulong)uVar16;
      uVar5 = __dest[2];
      local_80 = *(long ****)(__dest + 1);
      pppplVar15 = (long ****)(ulong)uVar5;
      local_78 = __dest[3];
      param_4 = (undefined1 (*) [16])(ulong)local_78;
      if ((uVar16 + 0x80 | uVar5 + 0x80 | local_78 + 0x80) < 0x100) {
        pppplVar31 = (long ****)(ulong)*__dest;
        uVar3 = __dest[4];
        plVar11 = FUN_7102d35700((long *)puVar9,uVar16,uVar5,local_78);
        if ((plVar11 == (long *)0x0) || (plVar11[4] == 0)) {
          plVar11 = (long *)*plVar26;
          if ((plVar11 == (long *)0x0) || (pvVar13 = extraout_x1_47, plVar11 == plVar26)) {
            lVar25 = *plVar27;
            puVar8 = (undefined8 *)
                     FUN_710392e290(0x10,200,pppplVar15,(byte ****)param_4,(long ****)param_5,
                                    param_6,param_7,param_8);
            if (puVar8 == (undefined8 *)0x0) {
              if (DAT_7105332f00 != (long *)0x0) {
                local_64 = 0;
                local_70 = (long ***)&DAT_000000c8;
                pppplVar15 = &local_70;
                uVar28 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_64);
                if (((uVar28 & 1) != 0) &&
                   (puVar8 = (undefined8 *)
                             FUN_710392e290(0x10,200,pppplVar15,(byte ****)param_4,
                                            (long ****)param_5,param_6,param_7,param_8),
                   puVar8 != (undefined8 *)0x0)) goto LAB_7102d3be84;
              }
              puVar8 = (undefined8 *)0x0;
            }
LAB_7102d3be84:
            puVar8[4] = 0xffffffff00000000;
            *(undefined4 *)(puVar8 + 5) = 0;
            *puVar8 = 0;
            puVar8[1] = 0;
            puVar8[6] = 0;
            *(undefined4 *)(puVar8 + 9) = 4;
            puVar8[10] = 0;
            *(undefined4 *)(puVar8 + 0xb) = 4;
            puVar8[0xc] = 0;
            *(undefined4 *)(puVar8 + 0xd) = 4;
            puVar8[0xe] = 0;
            *(undefined4 *)(puVar8 + 0xf) = 4;
            *(undefined2 *)(puVar8 + 0x18) = 0;
            puVar8[0x17] = 0;
            *(undefined2 *)(puVar8 + 0x12) = 0;
            *(undefined2 *)((long)puVar8 + 0xb4) = 0;
            *(undefined8 *)((long)puVar8 + 0xac) = 0;
            *(undefined8 *)((long)puVar8 + 0xa4) = 0;
            *(undefined8 *)((long)puVar8 + 0x9c) = 0;
            *(undefined8 *)((long)puVar8 + 0x94) = 0;
            puVar8[2] = lVar25;
            puVar8[3] = 0;
            puVar8[7] = 0;
            puVar8[8] = 0;
            puVar8[0x10] = 0;
            puVar8[0x11] = 0;
            plVar11 = (long *)FUN_710392e290(0x10,0x18,pppplVar15,(byte ****)param_4,
                                             (long ****)param_5,param_6,param_7,param_8);
            pvVar13 = extraout_x1_49;
            if (plVar11 == (long *)0x0) {
              if (DAT_7105332f00 != (long *)0x0) {
                local_64 = 0;
                local_70 = (long ***)&SUB_00000018;
                pppplVar15 = &local_70;
                auVar33 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_64);
                pvVar13 = auVar33._8_8_;
                if (((auVar33._0_8_ & 1) != 0) &&
                   (plVar11 = (long *)FUN_710392e290(0x10,0x18,pppplVar15,(byte ****)param_4,
                                                     (long ****)param_5,param_6,param_7,param_8),
                   pvVar13 = extraout_x1_50, plVar11 != (long *)0x0)) goto LAB_7102d3bf38;
              }
              plVar11 = (long *)0x0;
            }
LAB_7102d3bf38:
            plVar11[1] = (long)(plVar27 + 2);
            plVar11[2] = (long)puVar8;
            lVar25 = plVar27[2];
            *plVar11 = lVar25;
            *(long **)(lVar25 + 8) = plVar11;
            plVar27[2] = (long)plVar11;
            puVar8 = (undefined8 *)plVar27[6];
            plVar27[4] = plVar27[4] + 1;
            plVar11 = (long *)plVar11[2];
            *plVar11 = (long)plVar26;
            plVar11[1] = (long)puVar8;
            plVar27[6] = (long)plVar11;
            *puVar8 = plVar11;
            plVar11 = (long *)plVar27[5];
          }
          if ((plVar11 != (long *)0x0) && (plVar11 != plVar26)) {
            plVar11 = (long *)plVar27[6];
            lVar25 = *plVar11;
            if (lVar25 != 0) {
              plVar21 = (long *)plVar11[1];
              *plVar21 = lVar25;
              *(long **)(lVar25 + 8) = plVar21;
              *plVar11 = 0;
              plVar11[1] = 0;
            }
            param_4 = (undefined1 (*) [16])(ulong)uVar3;
            FUN_7102d34fa0((long)plVar11,(int *)&local_80,pppplVar31,(byte ****)param_4,
                           (long ****)param_5,param_6,param_7,param_8);
            pppplVar32 = (long ****)plVar27[0x14];
            pppplVar15 = (long ****)
                         (((ulong)local_80 & 0xff) << 0x10 | ((ulong)local_80._4_4_ & 0xff) << 8 |
                         (ulong)local_78 & 0xff);
            if (pppplVar32 != (long ****)0x0) {
              uVar28 = (long)pppplVar32 - 1;
              if ((uVar28 & (ulong)pppplVar32) == 0) {
                pppplVar29 = (long ****)(uVar28 & (ulong)pppplVar15);
              }
              else {
                pppplVar29 = pppplVar15;
                if (pppplVar32 <= pppplVar15) {
                  uVar22 = 0;
                  if (pppplVar32 != (long ****)0x0) {
                    uVar22 = (ulong)pppplVar15 / (ulong)pppplVar32;
                  }
                  pppplVar29 = (long ****)((long)pppplVar15 - uVar22 * (long)pppplVar32);
                }
              }
              puVar8 = *(undefined8 **)(*puVar9 + (long)pppplVar29 * 8);
              if ((puVar8 != (undefined8 *)0x0) &&
                 (plVar21 = (long *)*puVar8, plVar21 != (long *)0x0)) {
                pvVar13 = extraout_x1_51;
                if ((uVar28 & (ulong)pppplVar32) == 0) {
                  do {
                    if ((long ****)plVar21[1] != pppplVar15 &&
                        (long ****)((ulong)plVar21[1] & uVar28) != pppplVar29) break;
                    if ((((int)plVar21[2] == (int)local_80) &&
                        (*(uint *)((long)plVar21 + 0x14) == local_80._4_4_)) &&
                       (*(uint *)(plVar21 + 3) == local_78)) goto LAB_7102d3c2c4;
                    plVar21 = (long *)*plVar21;
                  } while (plVar21 != (long *)0x0);
                }
                else {
                  do {
                    pppplVar23 = (long ****)plVar21[1];
                    if (pppplVar23 != pppplVar15) {
                      if (pppplVar32 <= pppplVar23) {
                        uVar28 = 0;
                        if (pppplVar32 != (long ****)0x0) {
                          uVar28 = (ulong)pppplVar23 / (ulong)pppplVar32;
                        }
                        pppplVar23 = (long ****)((long)pppplVar23 - uVar28 * (long)pppplVar32);
                      }
                      if (pppplVar23 != pppplVar29) break;
                    }
                    if ((((int)plVar21[2] == (int)local_80) &&
                        (*(uint *)((long)plVar21 + 0x14) == local_80._4_4_)) &&
                       (*(uint *)(plVar21 + 3) == local_78)) goto LAB_7102d3c2c4;
                    plVar21 = (long *)*plVar21;
                  } while (plVar21 != (long *)0x0);
                }
              }
            }
            plVar21 = (long *)FUN_710392e290(0x10,0x28,pppplVar31,(byte ****)param_4,
                                             (long ****)param_5,param_6,param_7,param_8);
            pvVar13 = extraout_x1_52;
            if (plVar21 == (long *)0x0) {
              if (DAT_7105332f00 != (long *)0x0) {
                local_64 = 0;
                local_70 = (long ***)&DAT_00000028;
                pppplVar31 = &local_70;
                auVar33 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_64);
                pvVar13 = auVar33._8_8_;
                if (((auVar33._0_8_ & 1) != 0) &&
                   (plVar21 = (long *)FUN_710392e290(0x10,0x28,pppplVar31,(byte ****)param_4,
                                                     (long ****)param_5,param_6,param_7,param_8),
                   pvVar13 = extraout_x1_53, plVar21 != (long *)0x0)) goto LAB_7102d3c0fc;
              }
              plVar21 = (long *)0x0;
            }
LAB_7102d3c0fc:
            *(uint *)(plVar21 + 3) = local_78;
            plVar21[1] = (long)pppplVar15;
            plVar21[2] = (long)local_80;
            plVar21[4] = 0;
            *plVar21 = 0;
            if ((pppplVar32 == (long ****)0x0) ||
               (*(float *)(plVar27 + 0x17) * (float)pppplVar32 < (float)(plVar27[0x16] + 1))) {
              if (pppplVar32 < (long ****)0x3) {
                uVar28 = 1;
              }
              else {
                uVar28 = (ulong)(((long)pppplVar32 - 1U & (ulong)pppplVar32) != 0);
              }
              uVar28 = uVar28 | (long)pppplVar32 << 1;
              uVar22 = (ulong)((float)(plVar27[0x16] + 1) / *(float *)(plVar27 + 0x17));
              if (uVar22 <= uVar28) {
                uVar22 = uVar28;
              }
              auVar33._8_8_ = pvVar13;
              auVar33._0_8_ = uVar22;
              if (uVar22 - 1 == 0) {
                auVar33._0_8_ = 2;
              }
              else if ((uVar22 - 1 & uVar22) != 0) {
                auVar33 = std::__next_prime(uVar22);
              }
              pvVar13 = auVar33._8_8_;
              pvVar14 = auVar33._0_8_;
              pvVar30 = (void *)plVar27[0x14];
              if (pvVar30 < pvVar14) {
LAB_7102d3c1a4:
                FUN_7102d36180(puVar9,(ulong)pvVar14,pppplVar31,(byte ****)param_4,
                               (long ****)param_5,param_6,param_7,param_8);
                pvVar13 = extraout_x1_54;
              }
              else if (pvVar14 < pvVar30) {
                pvVar13 = (void *)(long)((float)(ulong)plVar27[0x16] / *(float *)(plVar27 + 0x17));
                if (pvVar30 < (void *)0x3 || ((long)pvVar30 - 1U & (ulong)pvVar30) != 0) {
                  pvVar13 = (void *)std::__next_prime((ulong)pvVar13);
                }
                else if ((void *)0x1 < pvVar13) {
                  pvVar13 = (void *)(1L << (-LZCOUNT((long)pvVar13 - 1) & 0x3fU));
                }
                if (pvVar13 <= pvVar14) {
                  pvVar13 = pvVar14;
                }
                pvVar14 = pvVar13;
                if (pvVar13 < pvVar30) goto LAB_7102d3c1a4;
              }
              pppplVar32 = (long ****)plVar27[0x14];
              if (((long)pppplVar32 - 1U & (ulong)pppplVar32) == 0) {
                pppplVar29 = (long ****)((long)pppplVar32 - 1U & (ulong)pppplVar15);
              }
              else {
                pppplVar29 = pppplVar15;
                if (pppplVar32 <= pppplVar15) {
                  uVar28 = 0;
                  if (pppplVar32 != (long ****)0x0) {
                    uVar28 = (ulong)pppplVar15 / (ulong)pppplVar32;
                  }
                  pppplVar29 = (long ****)((long)pppplVar15 - uVar28 * (long)pppplVar32);
                }
              }
            }
            uVar28 = *puVar9;
            plVar19 = *(long **)(uVar28 + (long)pppplVar29 * 8);
            if (plVar19 == (long *)0x0) {
              *plVar21 = *plVar10;
              *plVar10 = (long)plVar21;
              *(long **)(uVar28 + (long)pppplVar29 * 8) = plVar10;
              if (*plVar21 != 0) {
                pppplVar15 = *(long *****)(*plVar21 + 8);
                if (((long)pppplVar32 - 1U & (ulong)pppplVar32) == 0) {
                  pppplVar15 = (long ****)((ulong)pppplVar15 & (long)pppplVar32 - 1U);
                }
                else if (pppplVar32 <= pppplVar15) {
                  uVar28 = 0;
                  if (pppplVar32 != (long ****)0x0) {
                    uVar28 = (ulong)pppplVar15 / (ulong)pppplVar32;
                  }
                  pppplVar15 = (long ****)((long)pppplVar15 - uVar28 * (long)pppplVar32);
                }
                plVar19 = (long *)(*puVar9 + (long)pppplVar15 * 8);
                goto LAB_7102d3c2b4;
              }
            }
            else {
              *plVar21 = *plVar19;
LAB_7102d3c2b4:
              *plVar19 = (long)plVar21;
            }
            plVar27[0x16] = plVar27[0x16] + 1;
LAB_7102d3c2c4:
            plVar21[4] = (long)plVar11;
            puVar8 = (undefined8 *)plVar27[8];
            *plVar11 = (long)(plVar27 + 7);
            plVar11[1] = (long)puVar8;
            plVar27[8] = (long)plVar11;
            *puVar8 = plVar11;
            pppplVar15 = pppplVar31;
          }
        }
        else {
          param_4 = (undefined1 (*) [16])(ulong)uVar3;
          FUN_7102d34fa0(plVar11[4],(int *)&local_80,pppplVar31,(byte ****)param_4,
                         (long ****)param_5,param_6,param_7,param_8);
          pvVar13 = extraout_x1_48;
          pppplVar15 = pppplVar31;
        }
      }
      __dest = __dest + 5;
    } while (__dest != puVar7);
  }
  if (local_a8 != (uint *)0x0) {
    local_a0 = local_a8;
    FUN_710392eb40((ulong)local_a8);
    pvVar13 = extraout_x1_55;
  }
joined_r0x007102d3b5d0:
  if (cVar4 == '\0') {
    return;
  }
  FUN_7102d3c330((long)param_1,pvVar13,pppplVar15,param_4,param_5,param_6,param_7,param_8);
  return;
joined_r0x007102d39db4:
  if (pcVar1 == *(char **)(lVar17 + 0xf0)) goto LAB_7102d39df4;
  if (((*(ulong *)(pcVar1 + 8) ^ *(ulong *)(lVar25 + 8)) & 0xffffffffff) == 0) {
    if ((-1 < *pcVar1) && ((uVar16 & 0xff) != (int)*pcVar1)) {
      *(undefined1 *)(lVar20 + 0x110) = 0;
      goto LAB_7102d39dfc;
    }
    goto LAB_7102d39df4;
  }
  pcVar1 = pcVar1 + 0x10;
  goto joined_r0x007102d39db4;
LAB_7102d39df4:
  *(undefined1 *)(lVar20 + 0x110) = 1;
LAB_7102d39dfc:
  FUN_71025e9d50((long *)(lVar20 + 0x108),uVar12,pppplVar15,(byte ****)param_4,(long ****)param_5,
                 param_6,param_7,param_8);
  uVar12 = extraout_x1_09;
LAB_7102d39e00:
  lVar25 = lVar25 + 0x10;
  if (lVar25 == lVar24) goto LAB_7102d39e0c;
  plVar26 = (long *)*plVar27;
  goto LAB_7102d39d5c;
}

