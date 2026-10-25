// addr:      71029f8420
// offset:    0x29f8420
// name:      FUN_71029f8420
// mangled:   
// signature: undefined __cdecl FUN_71029f8420(undefined1[16] param_1, long param_2, undefined8 param_3, long * * * * param_4, undefined1[16] * param_5, undefined1[16] * param_6, undefined1[16] * param_7, undefined8 param_8, undefined8 param_9)


/* WARNING: Removing unreachable block (ram,0x0071029f87a8) */
/* WARNING: Removing unreachable block (ram,0x0071029f8a8c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_71029f8420(undefined1 param_1 [16],long param_2,undefined8 param_3,long ****param_4,
                   undefined1 (*param_5) [16],undefined1 (*param_6) [16],undefined1 (*param_7) [16],
                   undefined8 param_8,undefined8 param_9)

{
  uint uVar1;
  long lVar2;
  undefined8 *puVar3;
  char cVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined4 uVar7;
  byte bVar8;
  uint uVar9;
  long *plVar10;
  ulong *puVar11;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 extraout_x1_02;
  undefined8 extraout_x1_03;
  undefined8 extraout_x1_04;
  undefined8 extraout_x1_05;
  undefined8 extraout_x1_06;
  undefined8 extraout_x1_07;
  undefined8 extraout_x1_08;
  undefined8 extraout_x1_09;
  undefined8 extraout_x1_10;
  undefined8 extraout_x1_11;
  undefined8 extraout_x1_12;
  undefined8 extraout_x1_13;
  undefined8 extraout_x1_14;
  undefined8 extraout_x1_15;
  undefined8 extraout_x1_16;
  undefined8 extraout_x1_17;
  undefined8 extraout_x1_18;
  undefined8 extraout_x1_19;
  undefined8 extraout_x1_20;
  undefined8 extraout_x1_21;
  undefined8 extraout_x1_22;
  undefined8 extraout_x1_23;
  undefined8 extraout_x1_24;
  undefined8 extraout_x1_25;
  undefined8 extraout_x1_26;
  undefined8 extraout_x1_27;
  undefined8 extraout_x1_28;
  undefined8 extraout_x1_29;
  undefined8 extraout_x1_30;
  undefined8 extraout_x1_31;
  undefined8 extraout_x1_32;
  undefined8 uVar12;
  undefined8 extraout_x1_33;
  undefined8 extraout_x1_34;
  undefined8 extraout_x1_35;
  undefined8 extraout_x1_36;
  undefined8 extraout_x1_37;
  undefined8 extraout_x1_38;
  long ****pppplVar13;
  undefined1 (*pauVar14) [16];
  code *UNRECOVERED_JUMPTABLE;
  undefined4 uVar15;
  undefined8 *puVar16;
  long lVar17;
  int iVar18;
  uint *puVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  ulong uVar23;
  long *plVar24;
  long *plVar25;
  long *plVar26;
  float fVar27;
  float fVar28;
  undefined1 auVar29 [16];
  float fVar30;
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  float fVar35;
  undefined1 auVar36 [16];
  float fVar38;
  undefined1 auVar37 [16];
  float fVar39;
  float fVar42;
  float fVar43;
  float fVar44;
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  float fVar45;
  undefined1 auVar46 [16];
  float fVar47;
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  float fVar53;
  undefined1 auVar54 [16];
  float fVar55;
  float fVar56;
  float fVar57;
  float fVar58;
  float fVar61;
  float fVar62;
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  float fVar63;
  ulong local_d0;
  undefined1 local_c0 [8];
  ulong uStack_b8;
  float local_b0 [2];
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  float local_80;
  float fStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined8 local_68;
  
  FUN_71025dd540(param_1._0_8_,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9);
  if ((*(byte *)(param_2 + 0xd8) >> 4 & 1) != 0) {
    return;
  }
  if (*(char *)(param_2 + 0x8b8) != '\0') {
    **(undefined4 **)(param_2 + 0x8b0) = 0;
    *(undefined1 *)(param_2 + 0x8b8) = 0;
  }
  **(float **)(param_2 + 0x8b0) = **(float **)(param_2 + 0x8b0) + (float)param_1._0_8_;
  uVar12 = extraout_x1;
  if (*(long *)(param_2 + 0x940) != 0) {
    uVar23 = 0;
    do {
      FUN_71029fbeb0(*(long **)(param_2 + 0x950 + uVar23 * 8));
      uVar23 = uVar23 + 1;
      uVar12 = extraout_x1_00;
    } while (uVar23 < *(ulong *)(param_2 + 0x940));
  }
  if (*(long *)(param_2 + 0x9e0) != 0) {
    uVar23 = 0;
    do {
      FUN_71029fbeb0(*(long **)(param_2 + 0x9f0 + uVar23 * 8));
      uVar23 = uVar23 + 1;
      uVar12 = extraout_x1_01;
    } while (uVar23 < *(ulong *)(param_2 + 0x9e0));
  }
  FUN_71029fbaf0(*(long **)(param_2 + 0xa68),uVar12,param_4,(byte ****)param_5,(long ****)param_6,
                 param_7,param_8,param_9);
  FUN_71029fef10(*(long **)(param_2 + 0xa70),extraout_x1_02,param_4,(byte ****)param_5,
                 (long ****)param_6,param_7,param_8,param_9);
  plVar25 = *(long **)(param_2 + 0xa60);
  fVar28 = *(float *)(plVar25 + 4);
  fVar27 = *(float *)plVar25[2];
  *(float *)(plVar25 + 4) = fVar27;
  if (fVar27 < fVar28) {
    fVar30 = *(float *)(plVar25 + 3);
    *(float *)(plVar25 + 3) = fVar27;
    *(float *)((long)plVar25 + 0x24) = *(float *)((long)plVar25 + 0x24) + fVar27 + (fVar28 - fVar30)
    ;
  }
  uVar12 = extraout_x1_03;
  switch((int)plVar25[1]) {
  case 1:
    *(undefined1 *)((long)plVar25 + 0xc) = 1;
LAB_71029f8f30:
    *(undefined4 *)(plVar25 + 1) = 2;
    break;
  case 2:
    puVar19 = *(uint **)(*plVar25 + 0x340);
    cVar4 = *(char *)((long)plVar25 + 0xc);
    uVar9 = *puVar19;
    *puVar19 = puVar19[1];
    uVar1 = puVar19[3];
    uVar9 = uVar9 ^ uVar9 << 0xb;
    uVar9 = uVar9 ^ uVar9 >> 8 ^ uVar1 ^ uVar1 >> 0x13;
    fVar27 = (float)uVar9;
    puVar19[1] = puVar19[2];
    puVar19[2] = uVar1;
    puVar19[3] = uVar9;
    if (cVar4 == '\0') {
      uVar15 = *(undefined4 *)plVar25[2];
      *(undefined4 *)(plVar25 + 3) = uVar15;
      *(undefined4 *)(plVar25 + 4) = uVar15;
      *(undefined4 *)((long)plVar25 + 0x24) = 0;
      *(float *)((long)plVar25 + 0x1c) = fVar27 * 140.0 * 2.3283064e-10 + 360.0;
      bVar8 = *(byte *)((long)plVar25 + 0xd) ^ 1;
    }
    else {
      uVar15 = *(undefined4 *)plVar25[2];
      *(undefined4 *)(plVar25 + 3) = uVar15;
      *(undefined4 *)(plVar25 + 4) = uVar15;
      *(undefined4 *)((long)plVar25 + 0x24) = 0;
      *(float *)((long)plVar25 + 0x1c) = fVar27 * 200.0 * 2.3283064e-10 + 420.0;
      puVar19 = *(uint **)(*plVar25 + 0x340);
      uVar9 = *puVar19;
      *puVar19 = puVar19[1];
      uVar1 = puVar19[3];
      uVar9 = uVar9 ^ uVar9 << 0xb;
      uVar9 = uVar9 ^ uVar9 >> 8 ^ uVar1 ^ uVar1 >> 0x13;
      puVar19[1] = puVar19[2];
      puVar19[2] = uVar1;
      puVar19[3] = uVar9;
      bVar8 = uVar9 % 100 < 0x32;
    }
    *(byte *)((long)plVar25 + 0xd) = bVar8;
    *(undefined4 *)(plVar25 + 1) = 3;
    break;
  case 3:
    if (*(float *)((long)plVar25 + 0x1c) <=
        (fVar27 - *(float *)(plVar25 + 3)) + *(float *)((long)plVar25 + 0x24)) {
      local_80 = *(float *)(&DAT_71044654d8 + (ulong)(*(char *)((long)plVar25 + 0xd) == '\0') * 4);
      local_d0 = (ulong)(uint)local_80;
      uStack_a8 = 0;
      local_b0[0] = 1.0;
      local_b0[1] = 0.0;
      uStack_98 = 0;
      local_a0 = 0x3f80000000000000;
      uStack_88 = 0x3f800000;
      local_90 = 0;
      uStack_78 = 0;
      uStack_74 = 0x3f800000;
      fStack_7c = 0.0;
      pppplVar13 = (long ****)(plVar25 + 6);
      *pppplVar13 = (long ***)0x0;
      plVar24 = (long *)plVar25[0x16];
      plVar25[0xc] = 0;
      plVar25[0xd] = 0;
      plVar25[9] = 0x3f800000;
      plVar25[8] = (long)&DAT_3f8000003f800000;
      plVar25[0xb] = 0x3f80000000000000;
      plVar25[10] = 0;
      *(undefined1 *)(plVar25 + 0x14) = 0;
      lVar20 = *plVar24;
      if (lVar20 != 0) {
        *(undefined1 *)(lVar20 + 0x110) = 1;
        FUN_71025e9d50((long *)(lVar20 + 0x108),extraout_x1_03,param_4,(byte ****)param_5,
                       (long ****)param_6,param_7,param_8,param_9);
        lVar20 = *plVar24;
        if (lVar20 != 0) {
          if ((*(char *)(lVar20 + 0xe0) != '\0') && (*(long *)(lVar20 + 200) != 0)) {
            *(undefined2 *)(*(long *)(lVar20 + 200) + 0x30) = 0;
          }
          if (*(long *)(lVar20 + 0xd8) != 0) {
            *(undefined1 *)(*(long *)(lVar20 + 0xd8) + 0x21) = 0;
          }
          if (*(char *)(lVar20 + 0xe0) != '\0') {
            *(undefined1 *)(*(long *)(lVar20 + 0xb0) + 0x10) = 1;
          }
          if ((*plVar24 != 0) && (lVar20 = *(long *)(*plVar24 + 0xd8), lVar20 != 0)) {
            *(undefined1 *)(lVar20 + 0x21) = 1;
          }
        }
      }
      FUN_71029ff750((long *)plVar25[0x16],(undefined8 *)local_b0,(int *)pppplVar13);
      FUN_710313ef20(*(long **)(plVar25[0x1a] + 0x10));
      FUN_71029ffc60(plVar25[0x1a],(undefined8 *)local_b0,(int *)pppplVar13);
      *(undefined1 *)(plVar25 + 0x18) = 1;
      lVar20 = *(long *)(plVar25[0x17] + 8);
      *(undefined8 *)(lVar20 + 0x38) = 0;
      *(ulong *)(lVar20 + 0x30) = local_d0;
      uVar15 = *(undefined4 *)plVar25[2];
      *(undefined4 *)(plVar25 + 3) = uVar15;
      *(undefined4 *)((long)plVar25 + 0x1c) = 0x44b54000;
      *(undefined4 *)(plVar25 + 4) = uVar15;
      *(undefined4 *)((long)plVar25 + 0x24) = 0;
      *(undefined4 *)(plVar25 + 1) = 4;
      uVar12 = extraout_x1_04;
      param_4 = pppplVar13;
    }
    break;
  case 4:
    fVar28 = *(float *)((long)plVar25 + 0x1c);
    fVar27 = (fVar27 - *(float *)(plVar25 + 3)) + *(float *)((long)plVar25 + 0x24);
    if (fVar28 <= fVar27) {
      if (*(char *)((long)plVar25 + 0xc) != '\0') {
        plVar24 = (long *)plVar25[0x16];
        lVar20 = *plVar24;
        if (lVar20 != 0) {
          *(undefined1 *)(lVar20 + 0x110) = 0;
          FUN_71025e9d50((long *)(lVar20 + 0x108),extraout_x1_03,param_4,(byte ****)param_5,
                         (long ****)param_6,param_7,param_8,param_9);
          lVar20 = *plVar24;
          uVar12 = extraout_x1_10;
          if (lVar20 != 0) {
            if ((*(char *)(lVar20 + 0xe0) != '\0') && (*(long *)(lVar20 + 200) != 0)) {
              *(undefined2 *)(*(long *)(lVar20 + 200) + 0x30) = 0x101;
            }
            if (*(long *)(lVar20 + 0xd8) != 0) {
              *(undefined1 *)(*(long *)(lVar20 + 0xd8) + 0x21) = 1;
            }
            if (*(char *)(lVar20 + 0xe0) != '\0') {
              *(undefined1 *)(*(long *)(lVar20 + 0xb0) + 0x10) = 0;
            }
          }
        }
        plVar24 = *(long **)(plVar25[0x1a] + 0x10);
        if ((char)plVar24[8] != '\0') {
          plVar26 = (long *)plVar24[6];
          if (((plVar26 != (long *)0x0) && ((char)plVar26[2] != '\0')) &&
             (*(undefined1 *)(plVar26 + 2) = 0, (char)plVar26[10] != '\0')) {
            plVar10 = (long *)FUN_71003ac560((ulong)*(uint *)(*plVar26 + 8));
            (**(code **)(*plVar10 + 0x48))(plVar10,0);
            *(undefined1 *)(plVar26 + 10) = 0;
          }
          (**(code **)(*plVar24 + 0x30))(plVar24);
          uVar12 = extraout_x1_11;
        }
        *(undefined1 *)(plVar24 + 8) = 0;
        *(undefined4 *)(*(long *)(plVar25[0x17] + 8) + 0x10) = 1;
        *(undefined2 *)(plVar25 + 0x18) = 0;
        *(undefined1 *)((long)plVar25 + 0xc) = 0;
        goto LAB_71029f8f30;
      }
      *(undefined4 *)(plVar25 + 1) = 5;
    }
    else {
      fVar30 = 0.0;
      if (fVar28 != 0.0) {
        fVar27 = fVar27 / fVar28;
        fVar30 = 0.0;
        if (0.0 <= fVar27) {
          fVar30 = fVar27 * 800.0;
        }
      }
      fVar27 = 400.0 - fVar30;
      if (*(char *)((long)plVar25 + 0xd) != '\0') {
        fVar27 = fVar30 + -400.0;
      }
      fVar28 = *(float *)(plVar25[5] + 0x5c);
      uStack_a8 = 0;
      local_b0[0] = 1.0;
      local_b0[1] = 0.0;
      uStack_98 = 0;
      local_a0 = 0x3f80000000000000;
      uStack_88 = 0x3f800000;
      local_90 = 0;
      local_80 = fVar27;
      fStack_7c = fVar28;
      if (*(char *)((long)plVar25 + 0xd) == '\0') {
        auVar48._0_4_ =
             (int)(_Float1Divided2Pi * 0.0 +
                  (float)(-(uint)(0.0 <= _Float1Divided2Pi * 0.0) & 0x80000000 ^ 0xbf000000));
        auVar48._4_4_ =
             (int)(_Float1Divided2Pi * 3.1415927 +
                  (float)(-(uint)(0.0 <= _Float1Divided2Pi * 3.1415927) & 0x80000000 ^ 0xbf000000));
        auVar48._8_4_ =
             (int)(_Float1Divided2Pi * 0.0 +
                  (float)(-(uint)(0.0 <= _Float1Divided2Pi * 0.0) & 0x80000000 ^ 0xbf000000));
        auVar48._12_4_ =
             (int)(_Float1Divided2Pi * 0.0 +
                  (float)(-(uint)(0.0 <= _Float1Divided2Pi * 0.0) & 0x80000000 ^ 0xbf000000));
        auVar49 = NEON_scvtf(auVar48,4);
        auVar60._0_4_ = 0.0 - auVar49._0_4_ * _Float2Pi;
        auVar60._4_4_ = 3.1415927 - auVar49._4_4_ * _Float2Pi;
        auVar60._8_4_ = 0.0 - auVar49._8_4_ * _Float2Pi;
        auVar60._12_4_ = 0.0 - auVar49._12_4_ * _Float2Pi;
        fVar30 = -_FloatPiDivided2;
        auVar50._0_8_ =
             CONCAT44(-(uint)(_FloatPiDivided2 < auVar60._4_4_),
                      -(uint)(_FloatPiDivided2 < auVar60._0_4_));
        auVar50._8_4_ = -(uint)(_FloatPiDivided2 < auVar60._8_4_);
        auVar50._12_4_ = -(uint)(_FloatPiDivided2 < auVar60._12_4_);
        fVar55 = -_FloatPi;
        auVar59._8_8_ = auVar50._8_8_;
        auVar59._0_8_ = auVar50._0_8_;
        auVar49._4_4_ = _FloatPi - auVar60._4_4_;
        auVar49._0_4_ = _FloatPi - auVar60._0_4_;
        auVar49._8_4_ = _FloatPi - auVar60._8_4_;
        auVar49._12_4_ = _FloatPi - auVar60._12_4_;
        auVar60 = auVar60 ^ (auVar60 ^ auVar49) & auVar59;
        auVar46._0_8_ = CONCAT44(-(uint)(auVar60._4_4_ < fVar30),-(uint)(auVar60._0_4_ < fVar30));
        auVar46._8_4_ = -(uint)(auVar60._8_4_ < fVar30);
        auVar46._12_4_ = -(uint)(auVar60._12_4_ < fVar30);
        fVar56 = -_DAT_7107528010;
        auVar54._8_8_ = auVar46._8_8_;
        auVar54._0_8_ = auVar46._0_8_;
        auVar40._4_4_ = fVar55 - auVar60._4_4_;
        auVar40._0_4_ = fVar55 - auVar60._0_4_;
        auVar40._8_4_ = fVar55 - auVar60._8_4_;
        auVar40._12_4_ = fVar55 - auVar60._12_4_;
        auVar60 = auVar60 ^ (auVar60 ^ auVar40) & auVar54;
        fVar35 = auVar60._0_4_;
        fVar58 = fVar35 * fVar35;
        fVar38 = auVar60._4_4_;
        fVar61 = fVar38 * fVar38;
        fVar39 = auVar60._8_4_;
        fVar62 = fVar39 * fVar39;
        fVar42 = auVar60._12_4_;
        fVar63 = fVar42 * fVar42;
        fVar30 = -_DAT_7107528008;
        fVar57 = -_DAT_7107529008;
        fVar55 = -_DAT_7107529010;
        auVar40 = NEON_fmov(0xbf800000,4);
        auVar49 = NEON_fmov(0x3f800000,4);
        auVar60 = auVar49 ^ (auVar49 ^ auVar40) & auVar50;
        auVar60 = auVar60 ^ (auVar60 ^ auVar40) & auVar46;
        auVar41._0_4_ =
             (auVar49._0_4_ +
             fVar58 * (fVar56 + fVar58 * (_DAT_710752800c +
                                         fVar58 * (fVar30 + fVar58 * (_DAT_7107528004 -
                                                                     fVar58 * _SinCoefficients)))))
             * fVar35;
        auVar41._4_4_ =
             (auVar49._4_4_ +
             fVar61 * (fVar56 + fVar61 * (_DAT_710752800c +
                                         fVar61 * (fVar30 + fVar61 * (_DAT_7107528004 -
                                                                     fVar61 * _SinCoefficients)))))
             * fVar38;
        auVar41._8_4_ =
             (auVar49._8_4_ +
             fVar62 * (fVar56 + fVar62 * (_DAT_710752800c +
                                         fVar62 * (fVar30 + fVar62 * (_DAT_7107528004 -
                                                                     fVar62 * _SinCoefficients)))))
             * fVar39;
        auVar41._12_4_ =
             (auVar49._12_4_ +
             fVar63 * (fVar56 + fVar63 * (_DAT_710752800c +
                                         fVar63 * (fVar30 + fVar63 * (_DAT_7107528004 -
                                                                     fVar63 * _SinCoefficients)))))
             * fVar42;
        auVar36._0_4_ =
             (auVar49._0_4_ +
             fVar58 * (fVar55 + fVar58 * (_DAT_710752900c +
                                         fVar58 * (fVar57 + fVar58 * (_DAT_7107529004 -
                                                                     fVar58 * _CosCoefficients)))))
             * auVar60._0_4_;
        auVar36._4_4_ =
             (auVar49._4_4_ +
             fVar61 * (fVar55 + fVar61 * (_DAT_710752900c +
                                         fVar61 * (fVar57 + fVar61 * (_DAT_7107529004 -
                                                                     fVar61 * _CosCoefficients)))))
             * auVar60._4_4_;
        auVar36._8_4_ =
             (auVar49._8_4_ +
             fVar62 * (fVar55 + fVar62 * (_DAT_710752900c +
                                         fVar62 * (fVar57 + fVar62 * (_DAT_7107529004 -
                                                                     fVar62 * _CosCoefficients)))))
             * auVar60._8_4_;
        auVar36._12_4_ =
             (auVar49._12_4_ +
             fVar63 * (fVar55 + fVar63 * (_DAT_710752900c +
                                         fVar63 * (fVar57 + fVar63 * (_DAT_7107529004 -
                                                                     fVar63 * _CosCoefficients)))))
             * auVar60._12_4_;
        auVar49 = NEON_ext(auVar41,auVar41,8,1);
        auVar40 = NEON_ext(auVar36,auVar36,8,1);
        fVar30 = auVar49._0_4_;
        fVar55 = auVar40._0_4_;
        fVar58 = auVar36._4_4_ * fVar55;
        fVar61 = auVar36._4_4_ * fVar30;
        fVar62 = auVar41._4_4_ * -1.0;
        fVar39 = fVar30 * auVar36._0_4_ * -1.0 + auVar41._4_4_ * fVar55 * auVar41._0_4_;
        fVar42 = fVar55 * auVar36._0_4_ * 1.0 + auVar41._4_4_ * fVar30 * auVar41._0_4_;
        fVar56 = auVar36._0_4_ * 0.0 * 0.0 + auVar36._4_4_ * 1.0 * auVar41._0_4_;
        fVar57 = auVar36._0_4_ * 0.0 * 0.0 + auVar41._0_4_ * 0.0;
        fVar35 = fVar30 * auVar41._0_4_ * 1.0 + auVar41._4_4_ * fVar55 * auVar36._0_4_;
        fVar30 = fVar55 * auVar41._0_4_ * -1.0 + auVar41._4_4_ * fVar30 * auVar36._0_4_;
        fVar55 = auVar41._0_4_ * 0.0 * 0.0 + auVar36._4_4_ * 1.0 * auVar36._0_4_;
        fVar38 = auVar41._0_4_ * 0.0 * 0.0 + auVar36._0_4_ * 0.0;
        local_80 = fVar27 + 0.0;
        fStack_7c = fVar28 + 0.0;
        uStack_a8._4_4_ = fVar58 * 0.0 + fVar61 * 0.0 + fVar62 * 0.0 + 0.0;
        uStack_a8._0_4_ = fVar58 * 0.0 + fVar61 * 0.0 + fVar62 * 1.0 + 0.0;
        local_b0[1] = fVar58 * 0.0 + fVar61 * 1.0 + fVar62 * 0.0 + fVar28 * 0.0;
        local_b0[0] = fVar58 * 1.0 + fVar61 * 0.0 + fVar62 * 0.0 + fVar27 * 0.0;
        uStack_98 = CONCAT44(fVar39 * 0.0 + fVar42 * 0.0 + fVar56 * 0.0 + fVar57 * 1.0,
                             fVar39 * 0.0 + fVar42 * 0.0 + fVar56 * 1.0 + fVar57 * 0.0);
        local_a0 = CONCAT44(fVar39 * 0.0 + fVar42 * 1.0 + fVar56 * 0.0 + fVar28 * fVar57,
                            fVar39 * 1.0 + fVar42 * 0.0 + fVar56 * 0.0 + fVar27 * fVar57);
        uStack_88 = CONCAT44(fVar35 * 0.0 + fVar30 * 0.0 + fVar55 * 0.0 + fVar38 * 1.0,
                             fVar35 * 0.0 + fVar30 * 0.0 + fVar55 * 1.0 + fVar38 * 0.0);
        local_90 = CONCAT44(fVar35 * 0.0 + fVar30 * 1.0 + fVar55 * 0.0 + fVar28 * fVar38,
                            fVar35 * 1.0 + fVar30 * 0.0 + fVar55 * 0.0 + fVar27 * fVar38);
      }
      uStack_74 = 0x3f800000;
      uStack_78 = 0;
      fVar30 = *(float *)((long)plVar25 + 0x34);
      param_4 = (long ****)(plVar25 + 6);
      *(undefined1 *)(plVar25 + 0x14) = 0;
      if (40.0 <= fVar30) {
        fVar30 = 0.0;
        *(uint *)(plVar25 + 6) = ((int)plVar25[6] + 1U) % 5;
        *(undefined4 *)((long)plVar25 + 0x34) = 0;
        *(undefined1 *)(plVar25 + 0x14) = 1;
      }
      fVar35 = _DAT_7107528004;
      fVar55 = _FloatPi;
      fVar30 = fVar30 + (float)param_1._0_8_;
      fVar38 = *(float *)(&DAT_7104556e00 + (long)(int)fVar30 * 4) * 0.017453292 * 0.5;
      fVar39 = fVar38 * _Float1Divided2Pi;
      auVar31._0_4_ = (int)(fVar39 + (float)(-(uint)(0.0 <= fVar39) & 0x80000000 ^ 0xbf000000));
      auVar31._4_4_ = (int)(fVar39 + (float)(-(uint)(0.0 <= fVar39) & 0x80000000 ^ 0xbf000000));
      auVar31._8_4_ = (int)(fVar39 + (float)(-(uint)(0.0 <= fVar39) & 0x80000000 ^ 0xbf000000));
      auVar31._12_4_ = (int)(fVar39 + (float)(-(uint)(0.0 <= fVar39) & 0x80000000 ^ 0xbf000000));
      auVar49 = NEON_scvtf(auVar31,4);
      auVar52._0_4_ = fVar38 - auVar49._0_4_ * _Float2Pi;
      auVar52._4_4_ = fVar38 - auVar49._4_4_ * _Float2Pi;
      auVar52._8_4_ = fVar38 - auVar49._8_4_ * _Float2Pi;
      auVar52._12_4_ = fVar38 - auVar49._12_4_ * _Float2Pi;
      auVar37._0_8_ =
           CONCAT44(-(uint)(_FloatPiDivided2 < auVar52._4_4_),
                    -(uint)(_FloatPiDivided2 < auVar52._0_4_));
      auVar37._8_4_ = -(uint)(_FloatPiDivided2 < auVar52._8_4_);
      auVar37._12_4_ = -(uint)(_FloatPiDivided2 < auVar52._12_4_);
      fVar56 = -_FloatPiDivided2;
      auVar32._0_4_ = _FloatPi - auVar52._0_4_;
      auVar32._4_4_ = _FloatPi - auVar52._4_4_;
      auVar32._8_4_ = _FloatPi - auVar52._8_4_;
      auVar32._12_4_ = _FloatPi - auVar52._12_4_;
      auVar51._8_8_ = auVar37._8_8_;
      auVar51._0_8_ = auVar37._0_8_;
      *(float *)((long)plVar25 + 0x34) = fVar30;
      lVar20 = _ConstantOne;
      fVar42 = fRam0000007107530008;
      fVar39 = fRam0000007107530004;
      fVar38 = _ConstantUnitX;
      uVar7 = _DAT_7107521004;
      uVar15 = _ConstantZero;
      fVar55 = -fVar55;
      auVar52 = auVar52 ^ (auVar52 ^ auVar32) & auVar51;
      uVar23 = uRam0000007107558008 & 0xffffffff;
      auVar34._0_8_ = CONCAT44(-(uint)(auVar52._4_4_ < fVar56),-(uint)(auVar52._0_4_ < fVar56));
      auVar34._8_4_ = -(uint)(auVar52._8_4_ < fVar56);
      auVar34._12_4_ = -(uint)(auVar52._12_4_ < fVar56);
      auVar33._0_4_ = fVar55 - auVar52._0_4_;
      auVar33._4_4_ = fVar55 - auVar52._4_4_;
      auVar33._8_4_ = fVar55 - auVar52._8_4_;
      auVar33._12_4_ = fVar55 - auVar52._12_4_;
      auVar40 = NEON_fmov(0xbf800000,4);
      auVar29._8_8_ = auVar34._8_8_;
      auVar29._0_8_ = auVar34._0_8_;
      auVar52 = auVar52 ^ (auVar52 ^ auVar33) & auVar29;
      auVar49 = NEON_fmov(0x3f800000,4);
      fVar30 = auVar49._12_4_;
      uVar9 = (uint)fVar30 ^ ((uint)fVar30 ^ auVar40._12_4_) & auVar37._12_4_;
      fVar58 = auVar52._0_4_;
      fVar63 = fVar58 * fVar58;
      fVar61 = auVar52._4_4_;
      fVar43 = fVar61 * fVar61;
      fVar62 = auVar52._8_4_;
      fVar44 = fVar62 * fVar62;
      fVar45 = auVar52._12_4_ * auVar52._12_4_;
      fVar55 = fVar63 * _SinCoefficients;
      fVar56 = fVar43 * _SinCoefficients;
      fVar57 = fVar44 * _SinCoefficients;
      plVar25[0xd] = (ulong)_DAT_7107521008;
      *(undefined4 *)(plVar25 + 0xc) = uVar15;
      *(undefined4 *)((long)plVar25 + 100) = uVar7;
      fVar47 = -_DAT_7107528008;
      fVar55 = _DAT_710752800c + fVar63 * (fVar47 + fVar63 * (fVar35 - fVar55));
      fVar56 = _DAT_710752800c + fVar43 * (fVar47 + fVar43 * (fVar35 - fVar56));
      fVar35 = _DAT_710752800c + fVar44 * (fVar47 + fVar44 * (fVar35 - fVar57));
      fVar53 = _DAT_710752900c +
               fVar45 * (-_DAT_7107529008 + fVar45 * (_DAT_7107529004 - fVar45 * _CosCoefficients));
      fVar57 = -_DAT_7107528010;
      fVar47 = -_DAT_7107529010;
      plVar25[9] = uVar23;
      plVar25[8] = lVar20;
      *(float *)(plVar25 + 0xb) =
           fVar42 * (auVar49._8_4_ + fVar44 * (fVar57 + fVar44 * fVar35)) * fVar62;
      *(float *)((long)plVar25 + 0x5c) =
           (fVar30 + fVar45 * (fVar47 + fVar45 * fVar53)) *
           (float)(uVar9 ^ (uVar9 ^ auVar40._12_4_) & auVar34._12_4_);
      *(float *)(plVar25 + 10) =
           fVar38 * (auVar49._0_4_ + fVar63 * (fVar57 + fVar63 * fVar55)) * fVar58;
      *(float *)((long)plVar25 + 0x54) =
           fVar39 * (auVar49._4_4_ + fVar43 * (fVar57 + fVar43 * fVar56)) * fVar61;
      FUN_71029ff750((long *)plVar25[0x16],(undefined8 *)local_b0,(int *)param_4);
      FUN_71029ffc60(plVar25[0x1a],(undefined8 *)local_b0,(int *)param_4);
      uVar12 = extraout_x1_05;
      if ((char)plVar25[0x14] != '\0') {
        local_c0._4_4_ = fStack_7c;
        local_c0._0_4_ = local_80;
        auVar6._4_4_ = fStack_7c;
        auVar6._0_4_ = local_80;
        auVar6._8_4_ = uStack_78;
        auVar5._4_4_ = fStack_7c;
        auVar5._0_4_ = local_80;
        auVar5._8_4_ = uStack_78;
        auVar5._12_4_ = uStack_74;
        auVar6._12_4_ = uStack_74;
        auVar49 = NEON_ext(auVar5,auVar6,8,1);
        uStack_b8 = (ulong)auVar49._0_4_;
        lVar20 = **(long **)(*plVar25 + 0x338);
        if (*(long *)(lVar20 + 8) != 0) {
          param_4 = (long ****)0x1;
          local_68 = 0;
          uVar9 = FUN_7102405040(*(long *)(lVar20 + 8),&local_68,1,(byte ****)param_5,
                                 (long ****)param_6,param_7,param_8,param_9);
          uVar12 = extraout_x1_06;
          if (uVar9 != 0xffffffff) {
            param_4 = (long ****)(ulong)uVar9;
            if (uVar9 < 0x19) {
              plVar24 = *(long **)(*(long *)(lVar20 + 8) + (long)(int)uVar9 * 0x50 + 0x68);
              if (((*plVar24 != 0) && ((int)plVar24[1] != -1)) &&
                 ((int)plVar24[1] == *(int *)(*plVar24 + 0x20))) {
                FUN_7103736cf0(plVar24,(undefined1 (*) [12])local_c0);
              }
            }
            (**(code **)(**(long **)(lVar20 + 8) + 0x58))(*(long **)(lVar20 + 8),7);
            uVar12 = extraout_x1_07;
          }
        }
      }
      fVar55 = *(float *)(plVar25[5] + 0x60);
      fVar35 = *(float *)(plVar25[5] + 100);
      fVar30 = -fVar55;
      if (*(char *)((long)plVar25 + 0xd) != '\0') {
        fVar30 = fVar55;
      }
      fVar27 = fVar27 + fVar30;
      if ((char)plVar25[0x18] != '\0') {
        if (*(char *)((long)plVar25 + 0xc1) == '\0') {
          if ((*(float *)((long)plVar25 + 0xc4) <= fVar27) && (fVar27 <= *(float *)(plVar25 + 0x19))
             ) {
            *(undefined4 *)(*(long *)(plVar25[0x17] + 8) + 0x10) = 0;
            *(undefined1 *)((long)plVar25 + 0xc1) = 1;
          }
        }
        else if ((fVar27 < *(float *)((long)plVar25 + 0xc4)) ||
                (*(float *)(plVar25 + 0x19) < fVar27)) {
          *(undefined4 *)(*(long *)(plVar25[0x17] + 8) + 0x10) = 1;
          *(undefined1 *)((long)plVar25 + 0xc1) = 0;
        }
      }
      lVar20 = *(long *)(plVar25[0x17] + 8);
      *(undefined8 *)(lVar20 + 0x38) = 0;
      *(ulong *)(lVar20 + 0x30) = CONCAT44(fVar28 + fVar35,fVar27);
    }
    break;
  case 5:
    plVar24 = (long *)plVar25[0x16];
    lVar20 = *plVar24;
    if (lVar20 != 0) {
      *(undefined1 *)(lVar20 + 0x110) = 0;
      FUN_71025e9d50((long *)(lVar20 + 0x108),extraout_x1_03,param_4,(byte ****)param_5,
                     (long ****)param_6,param_7,param_8,param_9);
      lVar20 = *plVar24;
      uVar12 = extraout_x1_08;
      if (lVar20 != 0) {
        if ((*(char *)(lVar20 + 0xe0) != '\0') && (*(long *)(lVar20 + 200) != 0)) {
          *(undefined2 *)(*(long *)(lVar20 + 200) + 0x30) = 0x101;
        }
        if (*(long *)(lVar20 + 0xd8) != 0) {
          *(undefined1 *)(*(long *)(lVar20 + 0xd8) + 0x21) = 1;
        }
        if (*(char *)(lVar20 + 0xe0) != '\0') {
          *(undefined1 *)(*(long *)(lVar20 + 0xb0) + 0x10) = 0;
        }
      }
    }
    plVar24 = *(long **)(plVar25[0x1a] + 0x10);
    if ((char)plVar24[8] != '\0') {
      plVar26 = (long *)plVar24[6];
      if (((plVar26 != (long *)0x0) && ((char)plVar26[2] != '\0')) &&
         (*(undefined1 *)(plVar26 + 2) = 0, (char)plVar26[10] != '\0')) {
        plVar10 = (long *)FUN_71003ac560((ulong)*(uint *)(*plVar26 + 8));
        (**(code **)(*plVar10 + 0x48))(plVar10,0);
        *(undefined1 *)(plVar26 + 10) = 0;
      }
      (**(code **)(*plVar24 + 0x30))(plVar24);
      uVar12 = extraout_x1_09;
    }
    *(undefined1 *)(plVar24 + 8) = 0;
    *(undefined4 *)(*(long *)(plVar25[0x17] + 8) + 0x10) = 1;
    *(undefined2 *)(plVar25 + 0x18) = 0;
    *(undefined4 *)(plVar25 + 1) = 0;
  }
  plVar25 = *(long **)(param_2 + 0xa80);
  if ((int)plVar25[1] == 4) {
    lVar20 = *(long *)(*(long *)(*plVar25 + 0x318) + 0x18);
    if (*(float *)((long)plVar25 + 0x24) <= *(float *)(lVar20 + 0x2c)) {
      uVar15 = (undefined4)plVar25[4];
      goto LAB_71029f9028;
    }
  }
  else if (((int)plVar25[1] == 3) &&
          (lVar20 = *(long *)(*(long *)(*plVar25 + 0x318) + 0x18),
          *(float *)((long)plVar25 + 0x1c) <= *(float *)(lVar20 + 0x2c))) {
    uVar15 = (undefined4)plVar25[3];
LAB_71029f9028:
    *(undefined4 *)(lVar20 + 0x2c) = uVar15;
  }
  puVar16 = *(undefined8 **)(param_2 + 0x898);
  fVar28 = *(float *)(puVar16 + 2);
  fVar27 = *(float *)*puVar16;
  *(float *)(puVar16 + 2) = fVar27;
  if (fVar27 < fVar28) {
    fVar30 = *(float *)(puVar16 + 1);
    *(float *)(puVar16 + 1) = fVar27;
    *(float *)((long)puVar16 + 0x14) = *(float *)((long)puVar16 + 0x14) + fVar27 + (fVar28 - fVar30)
    ;
  }
  if (7 < *(uint *)(param_2 + 0x888)) {
    return;
  }
  iVar18 = *(int *)(param_2 + 0x8a8);
  switch(*(uint *)(param_2 + 0x888)) {
  case 0:
    if (iVar18 != 0) {
      return;
    }
    lVar20 = *(long *)(param_2 + 0x898);
    if ((*(float *)(lVar20 + 0x10) - *(float *)(lVar20 + 8)) + *(float *)(lVar20 + 0x14) <
        *(float *)(lVar20 + 0xc)) {
      return;
    }
    FUN_71029feac0(*(undefined4 *)(param_2 + 0x784),0x439d8000,0x43700000,100.0,
                   *(long *)(param_2 + 0xa78));
    fVar27 = *(float *)(param_2 + 0x854);
    fVar28 = *(float *)(param_2 + 0x850);
    uVar15 = 1;
    goto LAB_71029f9c70;
  case 1:
    if (iVar18 != 0) {
      return;
    }
    lVar20 = *(long *)(param_2 + 0x898);
    if ((*(float *)(lVar20 + 0x10) - *(float *)(lVar20 + 8)) + *(float *)(lVar20 + 0x14) <
        *(float *)(lVar20 + 0xc)) {
      return;
    }
    if (*(long *)(param_2 + 0x940) != 0) {
      uVar23 = 0;
      do {
        plVar25 = *(long **)(param_2 + 0x950 + uVar23 * 8);
        FUN_71029fc1d0(plVar25,3,(long ****)(plVar25 + 3),(byte ****)param_5,(long ****)param_6,
                       param_7,param_8,param_9);
        uVar23 = uVar23 + 1;
      } while (uVar23 < *(ulong *)(param_2 + 0x940));
    }
    lVar20 = *(long *)(param_2 + 0xa00);
    pppplVar13 = (long ****)0x1;
    FUN_71025f4d80((long *)**(undefined8 **)(lVar20 + 0xe8),
                   (long *)(*(undefined8 **)(lVar20 + 0xe8))[1],1);
    plVar25 = *(long **)(lVar20 + 0xf0);
    if ((char)plVar25[4] != '\0') {
      plVar24 = (long *)plVar25[1];
      lVar17 = plVar25[2];
      lVar22 = *plVar25;
      *(undefined1 *)(plVar25 + 4) = 0;
      *plVar24 = lVar22;
      *(long **)(lVar22 + 8) = plVar24;
      *(long *)(lVar17 + 0x18) = *(long *)(lVar17 + 0x18) + -1;
      *plVar25 = 0;
      plVar25[1] = 0;
      puVar16 = *(undefined8 **)(lVar17 + 0x40);
      *plVar25 = lVar17 + 0x38;
      plVar25[1] = (long)puVar16;
      *(long **)(lVar17 + 0x40) = plVar25;
      *puVar16 = plVar25;
      *(long *)(lVar17 + 0x30) = *(long *)(lVar17 + 0x30) + 1;
      iVar18 = 0;
      if (plVar25[3] != 0) {
        iVar18 = *(int *)(plVar25[3] + 0x110);
      }
      *(int *)(lVar17 + 0x48) = *(int *)(lVar17 + 0x48) - iVar18;
    }
    uVar12 = extraout_x1_12;
    if (*(long *)(lVar20 + 200) != 0) {
      uVar23 = 0;
      do {
        plVar25 = *(long **)(lVar20 + 0xd8 + uVar23 * 8);
        pppplVar13 = (long ****)(plVar25 + 3);
        FUN_71029fc1d0(plVar25,3,pppplVar13,(byte ****)param_5,(long ****)param_6,param_7,param_8,
                       param_9);
        uVar23 = uVar23 + 1;
        uVar12 = extraout_x1_13;
      } while (uVar23 < *(ulong *)(lVar20 + 200));
    }
    FUN_71029fbe10(*(long *)(param_2 + 0xa68),uVar12,pppplVar13,(byte ****)param_5,
                   (long ****)param_6,param_7,param_8,param_9);
    lVar20 = *(long *)(param_2 + 0xa88);
    lVar17 = *(long *)(param_2 + 0xa90);
    if (lVar20 != lVar17) {
      do {
        lVar22 = *(long *)(lVar20 + 0x10);
        if ((lVar22 != 0) && (*(char *)(lVar22 + 0x35) != '\0')) {
          uVar9 = *(uint *)(lVar22 + 0x3c);
          lVar22 = *lib::Singleton<lib::EffectManager>::instance_;
          std::mutex::lock();
          if ((0 < (int)uVar9) &&
             (lVar22 = lVar22 + (ulong)(uVar9 >> 0x18) * 0x300,
             lVar22 != 0 && *(uint *)(lVar22 + 4) == uVar9)) {
            FUN_71035707d0(lVar22,0,(long ****)0x0,0,(long ****)param_6,param_7,param_8,param_9);
          }
          std::mutex::unlock();
        }
        lVar20 = lVar20 + 0x18;
      } while (lVar17 != lVar20);
      lVar20 = *(long *)(param_2 + 0xa88);
      lVar17 = *(long *)(param_2 + 0xa90);
      while (lVar22 = lVar17, lVar22 != lVar20) {
        lVar21 = *(long *)(lVar22 + -8);
        lVar17 = lVar22 + -0x18;
        if (lVar21 != 0) {
          lVar2 = *(long *)(lVar22 + -0x18);
          plVar25 = *(long **)(lVar22 + -0x10);
          *plVar25 = lVar2;
          *(long **)(lVar2 + 8) = plVar25;
          *(long *)(lVar21 + 0x10) = *(long *)(lVar21 + 0x10) + -1;
          *(undefined8 *)(lVar22 + -0x10) = 0;
          *(undefined8 *)(lVar22 + -8) = 0;
          *(undefined8 *)(lVar22 + -0x18) = 0;
        }
      }
    }
    *(long *)(param_2 + 0xa90) = lVar20;
    FUN_71026329a0(*(undefined8 **)(param_2 + 0x330));
    fVar27 = *(float *)(param_2 + 0x85c);
    fVar28 = *(float *)(param_2 + 0x858);
    uVar15 = 2;
    goto LAB_71029f9c70;
  case 2:
    if ((iVar18 == 0) &&
       (lVar20 = *(long *)(param_2 + 0x898),
       *(float *)(lVar20 + 0xc) <=
       (*(float *)(lVar20 + 0x10) - *(float *)(lVar20 + 8)) + *(float *)(lVar20 + 0x14))) {
      if (*(long *)(param_2 + 0x940) != 0) {
        uVar23 = 0;
        do {
          plVar25 = *(long **)(param_2 + 0x950 + uVar23 * 8);
          lVar20 = *plVar25;
          *(undefined1 *)(plVar25 + 6) = 0;
          if (lVar20 != 0) {
            *(undefined1 *)(lVar20 + 0x110) = 0;
            FUN_71025e9d50((long *)(lVar20 + 0x108),uVar12,param_4,(byte ****)param_5,
                           (long ****)param_6,param_7,param_8,param_9);
            lVar20 = *plVar25;
            uVar12 = extraout_x1_14;
            if (lVar20 != 0) {
              if ((*(char *)(lVar20 + 0xe0) != '\0') && (*(long *)(lVar20 + 200) != 0)) {
                *(undefined2 *)(*(long *)(lVar20 + 200) + 0x30) = 0x101;
              }
              if (*(long *)(lVar20 + 0xd8) != 0) {
                *(undefined1 *)(*(long *)(lVar20 + 0xd8) + 0x21) = 1;
              }
              if (*(char *)(lVar20 + 0xe0) != '\0') {
                *(undefined1 *)(*(long *)(lVar20 + 0xb0) + 0x10) = 0;
              }
            }
          }
          uVar23 = uVar23 + 1;
        } while (uVar23 < *(ulong *)(param_2 + 0x940));
      }
      lVar20 = *(long *)(param_2 + 0xa00);
      pauVar14 = (undefined1 (*) [16])0x1;
      FUN_71025f4d80((long *)**(undefined8 **)(lVar20 + 0xe8),
                     (long *)(*(undefined8 **)(lVar20 + 0xe8))[1],1);
      plVar25 = *(long **)(lVar20 + 0xf0);
      if ((char)plVar25[4] != '\0') {
        plVar24 = (long *)plVar25[1];
        lVar17 = plVar25[2];
        lVar22 = *plVar25;
        *(undefined1 *)(plVar25 + 4) = 0;
        *plVar24 = lVar22;
        *(long **)(lVar22 + 8) = plVar24;
        *(long *)(lVar17 + 0x18) = *(long *)(lVar17 + 0x18) + -1;
        *plVar25 = 0;
        plVar25[1] = 0;
        puVar16 = *(undefined8 **)(lVar17 + 0x40);
        *plVar25 = lVar17 + 0x38;
        plVar25[1] = (long)puVar16;
        *(long **)(lVar17 + 0x40) = plVar25;
        *puVar16 = plVar25;
        *(long *)(lVar17 + 0x30) = *(long *)(lVar17 + 0x30) + 1;
        iVar18 = 0;
        if (plVar25[3] != 0) {
          iVar18 = *(int *)(plVar25[3] + 0x110);
        }
        *(int *)(lVar17 + 0x48) = *(int *)(lVar17 + 0x48) - iVar18;
      }
      uVar12 = extraout_x1_15;
      if (*(long *)(lVar20 + 200) != 0) {
        uVar23 = 0;
        do {
          plVar25 = *(long **)(lVar20 + 0xd8 + uVar23 * 8);
          lVar17 = *plVar25;
          *(undefined1 *)(plVar25 + 6) = 0;
          if (lVar17 != 0) {
            *(undefined1 *)(lVar17 + 0x110) = 0;
            FUN_71025e9d50((long *)(lVar17 + 0x108),uVar12,(long ****)pauVar14,(byte ****)param_5,
                           (long ****)param_6,param_7,param_8,param_9);
            lVar17 = *plVar25;
            uVar12 = extraout_x1_16;
            if (lVar17 != 0) {
              if ((*(char *)(lVar17 + 0xe0) != '\0') && (*(long *)(lVar17 + 200) != 0)) {
                *(undefined2 *)(*(long *)(lVar17 + 200) + 0x30) = 0x101;
              }
              if (*(long *)(lVar17 + 0xd8) != 0) {
                *(undefined1 *)(*(long *)(lVar17 + 0xd8) + 0x21) = 1;
              }
              if (*(char *)(lVar17 + 0xe0) != '\0') {
                *(undefined1 *)(*(long *)(lVar17 + 0xb0) + 0x10) = 0;
              }
            }
          }
          uVar23 = uVar23 + 1;
        } while (uVar23 < *(ulong *)(lVar20 + 200));
      }
      lVar17 = *(long *)(param_2 + 0xa68);
      lVar20 = *(long *)(lVar17 + 0x10);
      *(undefined4 *)(lVar17 + 8) = 0;
      if (lVar20 != 0) {
        *(undefined1 *)(lVar20 + 0x110) = 0;
        FUN_71025e9d50((long *)(lVar20 + 0x108),uVar12,(long ****)pauVar14,(byte ****)param_5,
                       (long ****)param_6,param_7,param_8,param_9);
        lVar20 = *(long *)(lVar17 + 0x10);
        if (lVar20 != 0) {
          if ((*(char *)(lVar20 + 0xe0) != '\0') && (*(long *)(lVar20 + 200) != 0)) {
            *(undefined2 *)(*(long *)(lVar20 + 200) + 0x30) = 0x101;
          }
          if (*(long *)(lVar20 + 0xd8) != 0) {
            *(undefined1 *)(*(long *)(lVar20 + 0xd8) + 0x21) = 1;
          }
          if (*(char *)(lVar20 + 0xe0) != '\0') {
            *(undefined1 *)(*(long *)(lVar20 + 0xb0) + 0x10) = 0;
          }
        }
      }
      lVar20 = *(long *)(*(long *)(*(long *)(param_2 + 0x300) + 0x48) + 8);
      puVar11 = *(ulong **)(*(long *)(param_2 + 0x300) + 0x60);
      if (puVar11 != (ulong *)(lVar20 + 8)) {
        pauVar14 = *(undefined1 (**) [16])(lVar20 + 0x10);
        FUN_7102616cf0(puVar11,*(undefined1 (**) [16])(lVar20 + 8),pauVar14,(byte ****)param_5,
                       (long ****)param_6,param_7,param_8,param_9);
        lVar20 = *(long *)(*(long *)(*(long *)(param_2 + 0x300) + 0x48) + 8);
        puVar11 = *(ulong **)(*(long *)(param_2 + 0x300) + 0x60);
      }
      if (puVar11 + 3 != (ulong *)(lVar20 + 0x20)) {
        pauVar14 = *(undefined1 (**) [16])(lVar20 + 0x28);
        FUN_7102616cf0(puVar11 + 3,*(undefined1 (**) [16])(lVar20 + 0x20),pauVar14,
                       (byte ****)param_5,(long ****)param_6,param_7,param_8,param_9);
      }
      FUN_7102624740(*(long *)(param_2 + 0x308),1);
      FUN_7102624870(*(long *)(param_2 + 0x308),1);
      local_b0 = *(float (*) [2])(param_2 + 0x744);
      uVar9 = *(uint *)(param_2 + 0x74c);
      uStack_a8 = (ulong)uVar9;
      fVar27 = *(float *)(param_2 + 0x758) * 0.017453292;
      fVar28 = *(float *)(param_2 + 0x754) * 0.017453292;
      uStack_88 = 0;
      local_90 = CONCAT44(fVar28,fVar27);
      fVar30 = *(float *)(param_2 + 0x750) * 0.017453292;
      local_a0 = CONCAT44(local_a0._4_4_,fVar30);
      fVar55 = *(float *)(param_2 + 0x75c);
      lVar20 = *(long *)(param_2 + 0x308);
      if (1.0 <= fVar55) {
        *(float *)(lVar20 + 0x434) = fVar55;
        *(float *)(lVar20 + 0x438) = fVar55;
        *(undefined8 *)(lVar20 + 0x498) = 0;
        *(ulong *)(lVar20 + 0x490) = CONCAT44(fVar28,fVar27);
        *(undefined1 *)(lVar20 + 0x430) = 1;
        *(uint *)(lVar20 + 0x478) = uVar9;
        *(undefined4 *)(lVar20 + 0x47c) = 0;
        *(float (*) [2])(lVar20 + 0x470) = local_b0;
        *(undefined4 *)(lVar20 + 0x448) = *(undefined4 *)(lVar20 + 0x3d8);
        *(undefined4 *)(lVar20 + 0x44c) = 0;
        *(undefined4 *)(lVar20 + 0x440) = *(undefined4 *)(lVar20 + 0x3d0);
        *(undefined4 *)(lVar20 + 0x444) = *(undefined4 *)(lVar20 + 0x3d4);
        *(float *)(lVar20 + 0x480) = fVar30;
        *(undefined4 *)(lVar20 + 0x450) = *(undefined4 *)(lVar20 + 0x3e0);
        *(ulong *)(lVar20 + 0x468) = (ulong)*(uint *)(lVar20 + 0x3f8);
        *(undefined4 *)(lVar20 + 0x460) = *(undefined4 *)(lVar20 + 0x3f0);
        *(undefined4 *)(lVar20 + 0x464) = *(undefined4 *)(lVar20 + 0x3f4);
      }
      else {
        *(float *)(lVar20 + 0x3e0) = fVar30;
        *(undefined8 *)(lVar20 + 0x3f8) = 0;
        *(ulong *)(lVar20 + 0x3f0) = CONCAT44(fVar28,fVar27);
        *(uint *)(lVar20 + 0x3d8) = uVar9;
        *(undefined4 *)(lVar20 + 0x3dc) = 0;
        *(float (*) [2])(lVar20 + 0x3d0) = local_b0;
        pauVar14 = (undefined1 (*) [16])local_b0;
        FUN_7103159960(*(long *)(*lib::Singleton<app::StageManager>::instance_ + 0x1c0),
                       *(ulong *)(lVar20 + 8),(undefined8 *)pauVar14);
      }
      *(undefined1 *)(lVar20 + 0xe0) = 1;
      lVar20 = *(long *)(param_2 + 0xa08);
      plVar24 = (long *)(*(long **)(lVar20 + 0xe8))[1];
      for (plVar25 = (long *)**(long **)(lVar20 + 0xe8); plVar25 != plVar24; plVar25 = plVar25 + 1)
      {
        lVar17 = *plVar25;
        *(undefined1 *)(lVar17 + 0x128) = 1;
        if (*(long *)(lVar17 + 8) != 0) {
          *(undefined8 *)(*(long *)(lVar17 + 8) + 0xd8) = 0xffffffffffffffff;
          FUN_7100532bc0(*(long *)(lVar17 + 8),0);
        }
      }
      plVar25 = *(long **)(lVar20 + 0xf0);
      if ((char)plVar25[4] != '\0') {
        plVar24 = (long *)plVar25[1];
        lVar17 = plVar25[2];
        lVar22 = *plVar25;
        *(undefined1 *)(plVar25 + 4) = 0;
        *plVar24 = lVar22;
        *(long **)(lVar22 + 8) = plVar24;
        *(long *)(lVar17 + 0x18) = *(long *)(lVar17 + 0x18) + -1;
        *plVar25 = 0;
        plVar25[1] = 0;
        puVar16 = *(undefined8 **)(lVar17 + 0x40);
        *plVar25 = lVar17 + 0x38;
        plVar25[1] = (long)puVar16;
        *(long **)(lVar17 + 0x40) = plVar25;
        *puVar16 = plVar25;
        *(long *)(lVar17 + 0x30) = *(long *)(lVar17 + 0x30) + 1;
        iVar18 = 0;
        if (plVar25[3] != 0) {
          iVar18 = *(int *)(plVar25[3] + 0x110);
        }
        *(int *)(lVar17 + 0x48) = *(int *)(lVar17 + 0x48) - iVar18;
      }
      if (*(long *)(lVar20 + 200) != 0) {
        uVar23 = 0;
        do {
          plVar25 = *(long **)(lVar20 + 0xd8 + uVar23 * 8);
          pauVar14 = (undefined1 (*) [16])(plVar25 + 1);
          FUN_71029fc1d0(plVar25,1,(long ****)pauVar14,(byte ****)param_5,(long ****)param_6,param_7
                         ,param_8,param_9);
          uVar23 = uVar23 + 1;
        } while (uVar23 < *(ulong *)(lVar20 + 200));
      }
      if (*(long *)(param_2 + 0xa38) != 0) {
        uVar23 = 0;
        do {
          lVar20 = *(long *)(param_2 + uVar23 * 8 + 0xa48);
          plVar25 = *(long **)(lVar20 + 0x30);
          if (((plVar25 != (long *)0x0) && ((char)plVar25[2] != '\0')) &&
             (*(undefined1 *)(plVar25 + 2) = 0, (char)plVar25[10] != '\0')) {
            plVar24 = (long *)FUN_71003ac560((ulong)*(uint *)(*plVar25 + 8));
            (**(code **)(*plVar24 + 0x48))(plVar24,0);
            *(undefined1 *)(plVar25 + 10) = 0;
          }
          plVar25 = *(long **)(lVar20 + 0x98);
          if (plVar25 != (long *)0x0) {
            plVar24 = (long *)plVar25[1];
            for (plVar25 = (long *)*plVar25; plVar25 != plVar24; plVar25 = plVar25 + 1) {
              lVar17 = *plVar25;
              *(undefined1 *)(lVar17 + 0x128) = 1;
              if (*(long *)(lVar17 + 8) != 0) {
                *(undefined8 *)(*(long *)(lVar17 + 8) + 0xd8) = 0xffffffffffffffff;
                FUN_7100532bc0(*(long *)(lVar17 + 8),0);
              }
            }
          }
          plVar25 = *(long **)(lVar20 + 0xa0);
          if ((char)plVar25[4] != '\0') {
            plVar24 = (long *)plVar25[1];
            lVar17 = plVar25[2];
            lVar22 = *plVar25;
            *(undefined1 *)(plVar25 + 4) = 0;
            *plVar24 = lVar22;
            *(long **)(lVar22 + 8) = plVar24;
            *(long *)(lVar17 + 0x18) = *(long *)(lVar17 + 0x18) + -1;
            *plVar25 = 0;
            plVar25[1] = 0;
            puVar16 = *(undefined8 **)(lVar17 + 0x40);
            *plVar25 = lVar17 + 0x38;
            plVar25[1] = (long)puVar16;
            *(long **)(lVar17 + 0x40) = plVar25;
            *puVar16 = plVar25;
            *(long *)(lVar17 + 0x30) = *(long *)(lVar17 + 0x30) + 1;
            iVar18 = 0;
            if (plVar25[3] != 0) {
              iVar18 = *(int *)(plVar25[3] + 0x110);
            }
            *(int *)(lVar17 + 0x48) = *(int *)(lVar17 + 0x48) - iVar18;
          }
          plVar25 = *(long **)(lVar20 + 0xa8);
          if ((char)plVar25[4] != '\0') {
            plVar24 = (long *)plVar25[1];
            lVar17 = plVar25[2];
            lVar22 = *plVar25;
            *(undefined1 *)(plVar25 + 4) = 0;
            *plVar24 = lVar22;
            *(long **)(lVar22 + 8) = plVar24;
            *(long *)(lVar17 + 0x18) = *(long *)(lVar17 + 0x18) + -1;
            *plVar25 = 0;
            plVar25[1] = 0;
            puVar16 = *(undefined8 **)(lVar17 + 0x40);
            *plVar25 = lVar17 + 0x38;
            plVar25[1] = (long)puVar16;
            *(long **)(lVar17 + 0x40) = plVar25;
            *puVar16 = plVar25;
            *(long *)(lVar17 + 0x30) = *(long *)(lVar17 + 0x30) + 1;
            iVar18 = 0;
            if (plVar25[3] != 0) {
              iVar18 = *(int *)(plVar25[3] + 0x110);
            }
            *(int *)(lVar17 + 0x48) = *(int *)(lVar17 + 0x48) - iVar18;
          }
          pauVar14 = (undefined1 (*) [16])(lVar20 + 0x60);
          FUN_71029fc1d0((long *)(lVar20 + 0x58),1,(long ****)pauVar14,(byte ****)param_5,
                         (long ****)param_6,param_7,param_8,param_9);
          lVar17 = *(long *)(lVar20 + 0x90);
          if (lVar17 != 0) {
            *(undefined1 *)(lVar17 + 0x110) = 0;
            FUN_71025e9d50((long *)(lVar17 + 0x108),extraout_x1_33,(long ****)pauVar14,
                           (byte ****)param_5,(long ****)param_6,param_7,param_8,param_9);
            lVar17 = *(long *)(lVar20 + 0x90);
            if (lVar17 != 0) {
              if ((*(char *)(lVar17 + 0xe0) != '\0') && (*(long *)(lVar17 + 200) != 0)) {
                *(undefined2 *)(*(long *)(lVar17 + 200) + 0x30) = 0x101;
              }
              if (*(long *)(lVar17 + 0xd8) != 0) {
                *(undefined1 *)(*(long *)(lVar17 + 0xd8) + 0x21) = 1;
              }
              if (*(char *)(lVar17 + 0xe0) != '\0') {
                *(undefined1 *)(*(long *)(lVar17 + 0xb0) + 0x10) = 0;
              }
              lVar17 = *(long *)(lVar20 + 0x90);
              if (lVar17 != 0) {
                *(byte *)(lVar17 + 0x118) = *(byte *)(lVar17 + 0x118) | 1;
              }
            }
          }
          *(undefined1 *)(lVar20 + 0x124) = 0;
          uVar23 = uVar23 + 1;
        } while (uVar23 < *(ulong *)(param_2 + 0xa38));
      }
      if (*(long *)(param_2 + 0x9e0) != 0) {
        uVar23 = 0;
        do {
          plVar25 = *(long **)(param_2 + 0x9f0 + uVar23 * 8);
          pauVar14 = (undefined1 (*) [16])(plVar25 + 1);
          FUN_71029fc1d0(plVar25,1,(long ****)pauVar14,(byte ****)param_5,(long ****)param_6,param_7
                         ,param_8,param_9);
          uVar23 = uVar23 + 1;
        } while (uVar23 < *(ulong *)(param_2 + 0x9e0));
      }
      plVar25 = *(long **)(param_2 + 0xa80);
      *(undefined4 *)(*(long *)(*(long *)(*plVar25 + 0x318) + 0x18) + 0x2c) =
           *(undefined4 *)((long)plVar25 + 0x14);
      *(undefined4 *)(plVar25 + 1) = 2;
      *(undefined4 *)(param_2 + 0x888) = 3;
      puVar16 = *(undefined8 **)(param_2 + 0x898);
      uVar15 = *(undefined4 *)*puVar16;
      *(float *)((long)puVar16 + 0xc) = *(float *)(param_2 + 0x864) - *(float *)(param_2 + 0x860);
      *(undefined4 *)(puVar16 + 1) = uVar15;
      *(undefined4 *)(puVar16 + 2) = uVar15;
      *(undefined4 *)((long)puVar16 + 0x14) = 0;
      plVar25 = *(long **)(**(long **)(*(long *)(param_2 + 0x840) + 0x338) + 8);
      if (plVar25 != (long *)0x0) {
        pauVar14 = (undefined1 (*) [16])&DAT_ffffffff;
        (**(code **)(*plVar25 + 0x58))(plVar25,1);
      }
      lVar20 = *(long *)(*(long *)(param_2 + 0x300) + 0x60);
      lVar17 = *(long *)(*(long *)(*(long *)(param_2 + 0x300) + 0x48) + 8);
      uVar15 = *(undefined4 *)(lVar17 + 0x40);
      uVar7 = *(undefined4 *)(lVar17 + 0x44);
      *(undefined4 *)(lVar20 + 0x38) = *(undefined4 *)(lVar17 + 0x48);
      *(undefined4 *)(lVar20 + 0x3c) = 0;
      *(undefined4 *)(lVar20 + 0x30) = uVar15;
      *(undefined4 *)(lVar20 + 0x34) = uVar7;
      uVar15 = *(undefined4 *)(lVar17 + 0x50);
      uVar7 = *(undefined4 *)(lVar17 + 0x54);
      *(undefined4 *)(lVar20 + 0x48) = *(undefined4 *)(lVar17 + 0x58);
      *(undefined4 *)(lVar20 + 0x4c) = 0;
      *(undefined4 *)(lVar20 + 0x40) = uVar15;
      *(undefined4 *)(lVar20 + 0x44) = uVar7;
      uVar15 = *(undefined4 *)(lVar17 + 0x60);
      uVar7 = *(undefined4 *)(lVar17 + 100);
      *(undefined4 *)(lVar20 + 0x58) = *(undefined4 *)(lVar17 + 0x68);
      *(undefined4 *)(lVar20 + 0x5c) = 0;
      *(undefined4 *)(lVar20 + 0x50) = uVar15;
      *(undefined4 *)(lVar20 + 0x54) = uVar7;
      uVar15 = *(undefined4 *)(lVar17 + 0x70);
      uVar7 = *(undefined4 *)(lVar17 + 0x74);
      *(undefined4 *)(lVar20 + 0x68) = *(undefined4 *)(lVar17 + 0x78);
      *(undefined4 *)(lVar20 + 0x6c) = 0;
      *(undefined4 *)(lVar20 + 0x60) = uVar15;
      *(undefined4 *)(lVar20 + 100) = uVar7;
      uVar15 = *(undefined4 *)(lVar17 + 0x80);
      uVar7 = *(undefined4 *)(lVar17 + 0x84);
      *(undefined4 *)(lVar20 + 0x78) = *(undefined4 *)(lVar17 + 0x88);
      *(undefined4 *)(lVar20 + 0x7c) = 0;
      *(undefined4 *)(lVar20 + 0x70) = uVar15;
      *(undefined4 *)(lVar20 + 0x74) = uVar7;
      *(undefined1 *)(lVar20 + 0x80) = *(undefined1 *)(lVar17 + 0x90);
      uVar15 = *(undefined4 *)(lVar17 + 0xa0);
      uVar7 = *(undefined4 *)(lVar17 + 0xa4);
      *(undefined4 *)(lVar20 + 0x98) = *(undefined4 *)(lVar17 + 0xa8);
      *(undefined4 *)(lVar20 + 0x9c) = 0;
      *(undefined4 *)(lVar20 + 0x90) = uVar15;
      *(undefined4 *)(lVar20 + 0x94) = uVar7;
      uVar15 = *(undefined4 *)(lVar17 + 0xb0);
      uVar7 = *(undefined4 *)(lVar17 + 0xb4);
      *(ulong *)(lVar20 + 0xa8) = (ulong)*(uint *)(lVar17 + 0xb8);
      *(undefined4 *)(lVar20 + 0xa0) = uVar15;
      *(undefined4 *)(lVar20 + 0xa4) = uVar7;
      puVar3 = *(undefined8 **)(**(long **)(param_2 + 0x330) + 0x58);
      for (puVar16 = *(undefined8 **)(**(long **)(param_2 + 0x330) + 0x50); puVar16 != puVar3;
          puVar16 = puVar16 + 1) {
        plVar25 = (long *)*puVar16;
        if (*(int *)((long)plVar25 + 0xc) == 1) {
          if ((char)plVar25[3] == '\0') {
            (**(code **)(*plVar25 + 0x10))(plVar25);
            *(undefined1 *)(plVar25 + 3) = 1;
          }
        }
        else if ((char)plVar25[3] != '\0') {
          *(undefined1 *)(plVar25 + 3) = 0;
          (**(code **)(*plVar25 + 0x18))(plVar25);
        }
      }
      FUN_71025f7350(*(long *)(*(long *)(param_2 + 0x318) + 0x10),(byte *)"light01");
      FUN_7102633910(*(long *)(param_2 + 0x318),(long *********)"render_param_01",pauVar14,param_5,
                     (long ****)param_6,param_7,param_8,param_9);
      FUN_7102633800(*(long *)(param_2 + 0x318),(long *********)"reflection_cubemap_01",pauVar14,
                     param_5,(long ****)param_6,param_7,param_8,param_9);
      FUN_7102633a10(*(long *)(param_2 + 0x318),(long *********)"chara_01",1,param_5,
                     (long ****)param_6,param_7,param_8,param_9);
      FUN_7102633b90(*(long *)(param_2 + 0x318),(long *********)"stage_01",1,param_5,
                     (long ****)param_6,param_7,param_8,param_9);
      FUN_71029fad30(param_2);
    }
    break;
  case 3:
    if ((iVar18 == 0) &&
       (lVar20 = *(long *)(param_2 + 0x898),
       *(float *)(lVar20 + 0xc) <=
       (*(float *)(lVar20 + 0x10) - *(float *)(lVar20 + 8)) + *(float *)(lVar20 + 0x14))) {
      lVar20 = *(long *)(param_2 + 0xa08);
      plVar24 = (long *)(*(long **)(lVar20 + 0xe8))[1];
      for (plVar25 = (long *)**(long **)(lVar20 + 0xe8); plVar25 != plVar24; plVar25 = plVar25 + 1)
      {
        lVar17 = *plVar25;
        *(undefined1 *)(lVar17 + 0x128) = 1;
        if (*(long *)(lVar17 + 8) != 0) {
          *(undefined8 *)(*(long *)(lVar17 + 8) + 0xd8) = 0xffffffffffffffff;
          FUN_7100532bc0(*(long *)(lVar17 + 8),0);
          uVar12 = extraout_x1_17;
        }
      }
      plVar25 = *(long **)(lVar20 + 0xf0);
      if ((char)plVar25[4] == '\0') {
        *(undefined1 *)(plVar25 + 4) = 1;
        lVar22 = *plVar25;
        plVar24 = (long *)plVar25[1];
        lVar17 = plVar25[2];
        *plVar24 = lVar22;
        *(long **)(lVar22 + 8) = plVar24;
        *(long *)(lVar17 + 0x30) = *(long *)(lVar17 + 0x30) + -1;
        *plVar25 = 0;
        plVar25[1] = 0;
        puVar16 = *(undefined8 **)(lVar17 + 0x28);
        *plVar25 = lVar17 + 0x20;
        plVar25[1] = (long)puVar16;
        *(long **)(lVar17 + 0x28) = plVar25;
        *puVar16 = plVar25;
        *(long *)(lVar17 + 0x18) = *(long *)(lVar17 + 0x18) + 1;
        iVar18 = 0;
        if (plVar25[3] != 0) {
          iVar18 = *(int *)(plVar25[3] + 0x110);
        }
        *(int *)(lVar17 + 0x48) = *(int *)(lVar17 + 0x48) + iVar18;
      }
      if (*(long *)(lVar20 + 200) != 0) {
        uVar23 = 0;
        do {
          plVar25 = *(long **)(lVar20 + 0xd8 + uVar23 * 8);
          param_4 = (long ****)(plVar25 + 2);
          FUN_71029fc1d0(plVar25,2,param_4,(byte ****)param_5,(long ****)param_6,param_7,param_8,
                         param_9);
          uVar23 = uVar23 + 1;
          uVar12 = extraout_x1_18;
        } while (uVar23 < *(ulong *)(lVar20 + 200));
      }
      *(undefined1 *)(lVar20 + 0x170) = 1;
      if (*(long *)(param_2 + 0xa38) != 0) {
        uVar23 = 0;
        do {
          FUN_71029fd5a0(*(long *)(param_2 + 0xa48 + uVar23 * 8),0,param_4,(byte ****)param_5,
                         (long ****)param_6,param_7,param_8,param_9);
          uVar23 = uVar23 + 1;
          uVar12 = extraout_x1_19;
        } while (uVar23 < *(ulong *)(param_2 + 0xa38));
      }
      *(undefined4 *)(*(long *)(param_2 + 0xa60) + 8) = 1;
      if (*(long *)(param_2 + 0x9e0) != 0) {
        uVar23 = 0;
        do {
          plVar25 = *(long **)(param_2 + 0x9f0 + uVar23 * 8);
          param_4 = (long ****)(plVar25 + 2);
          FUN_71029fc1d0(plVar25,2,param_4,(byte ****)param_5,(long ****)param_6,param_7,param_8,
                         param_9);
          uVar23 = uVar23 + 1;
          uVar12 = extraout_x1_20;
        } while (uVar23 < *(ulong *)(param_2 + 0x9e0));
      }
      lVar17 = *(long *)(param_2 + 0xa70);
      lVar20 = *(long *)(lVar17 + 0x30);
      if (lVar20 != 0) {
        *(undefined1 *)(lVar20 + 0x110) = 0;
        FUN_71025e9d50((long *)(lVar20 + 0x108),uVar12,param_4,(byte ****)param_5,(long ****)param_6
                       ,param_7,param_8,param_9);
        uVar12 = extraout_x1_21;
      }
      lVar20 = *(long *)(lVar17 + 0x38);
      if (lVar20 != 0) {
        *(undefined1 *)(lVar20 + 0x110) = 0;
        FUN_71025e9d50((long *)(lVar20 + 0x108),uVar12,param_4,(byte ****)param_5,(long ****)param_6
                       ,param_7,param_8,param_9);
      }
      uVar15 = **(undefined4 **)(lVar17 + 0x18);
      *(undefined4 *)(lVar17 + 0x10) = 4;
      *(undefined4 *)(lVar17 + 0x28) = uVar15;
      *(undefined4 *)(lVar17 + 0x2c) = 0;
      *(undefined4 *)(lVar17 + 0x20) = uVar15;
      *(undefined4 *)(lVar17 + 0x24) = 0x456ec000;
      FUN_7102630ae0((ulong *)**(undefined8 **)(param_2 + 0x330));
      puVar16 = *(undefined8 **)(param_2 + 0x898);
      *(undefined4 *)(param_2 + 0x888) = 4;
      uVar15 = *(undefined4 *)*puVar16;
      *(float *)((long)puVar16 + 0xc) = *(float *)(param_2 + 0x86c) - *(float *)(param_2 + 0x868);
      *(undefined4 *)(puVar16 + 1) = uVar15;
      *(undefined4 *)(puVar16 + 2) = uVar15;
      *(undefined4 *)((long)puVar16 + 0x14) = 0;
    }
    break;
  case 4:
    if ((iVar18 != 0) ||
       (lVar20 = *(long *)(param_2 + 0x898),
       (*(float *)(lVar20 + 0x10) - *(float *)(lVar20 + 8)) + *(float *)(lVar20 + 0x14) <
       *(float *)(lVar20 + 0xc))) {
      if ((*(long *)(param_2 + 0xa38) != 0) &&
         (((lVar20 = *(long *)(param_2 + 0xa10), *(float *)(lVar20 + 0x120) <= 0.0 &&
           (*(float *)(*(long *)(param_2 + 0xa18) + 0x120) <= 0.0)) &&
          (*(float *)(*(long *)(param_2 + 0xa20) + 0x120) <= 0.0)))) {
        plVar25 = *(long **)(lVar20 + 0xa0);
        if ((char)plVar25[4] != '\0') {
          plVar24 = (long *)plVar25[1];
          lVar17 = plVar25[2];
          lVar22 = *plVar25;
          *(undefined1 *)(plVar25 + 4) = 0;
          *plVar24 = lVar22;
          *(long **)(lVar22 + 8) = plVar24;
          *(long *)(lVar17 + 0x18) = *(long *)(lVar17 + 0x18) + -1;
          *plVar25 = 0;
          plVar25[1] = 0;
          puVar16 = *(undefined8 **)(lVar17 + 0x40);
          *plVar25 = lVar17 + 0x38;
          plVar25[1] = (long)puVar16;
          *(long **)(lVar17 + 0x40) = plVar25;
          *puVar16 = plVar25;
          *(long *)(lVar17 + 0x30) = *(long *)(lVar17 + 0x30) + 1;
          iVar18 = 0;
          if (plVar25[3] != 0) {
            iVar18 = *(int *)(plVar25[3] + 0x110);
          }
          *(int *)(lVar17 + 0x48) = *(int *)(lVar17 + 0x48) - iVar18;
        }
        plVar25 = *(long **)(lVar20 + 0xa8);
        if ((char)plVar25[4] != '\0') {
          plVar24 = (long *)plVar25[1];
          lVar20 = plVar25[2];
          lVar17 = *plVar25;
          *(undefined1 *)(plVar25 + 4) = 0;
          *plVar24 = lVar17;
          *(long **)(lVar17 + 8) = plVar24;
          *(long *)(lVar20 + 0x18) = *(long *)(lVar20 + 0x18) + -1;
          *plVar25 = 0;
          plVar25[1] = 0;
          puVar16 = *(undefined8 **)(lVar20 + 0x40);
          *plVar25 = lVar20 + 0x38;
          plVar25[1] = (long)puVar16;
          *(long **)(lVar20 + 0x40) = plVar25;
          *puVar16 = plVar25;
          *(long *)(lVar20 + 0x30) = *(long *)(lVar20 + 0x30) + 1;
          iVar18 = 0;
          if (plVar25[3] != 0) {
            iVar18 = *(int *)(plVar25[3] + 0x110);
          }
          *(int *)(lVar20 + 0x48) = *(int *)(lVar20 + 0x48) - iVar18;
        }
      }
    }
    else {
      FUN_71029feac0(*(undefined4 *)(param_2 + 0x788),0x43960000,0x43480000,160.0,
                     *(long *)(param_2 + 0xa78));
      *(undefined4 *)(param_2 + 0x888) = 5;
      puVar16 = *(undefined8 **)(param_2 + 0x898);
      uVar15 = *(undefined4 *)*puVar16;
      *(float *)((long)puVar16 + 0xc) = *(float *)(param_2 + 0x874) - *(float *)(param_2 + 0x870);
      *(undefined4 *)(puVar16 + 1) = uVar15;
      *(undefined4 *)(puVar16 + 2) = uVar15;
      *(undefined4 *)((long)puVar16 + 0x14) = 0;
      plVar25 = *(long **)(**(long **)(*(long *)(param_2 + 0x840) + 0x338) + 8);
      if (plVar25 != (long *)0x0) {
        UNRECOVERED_JUMPTABLE = *(code **)(*plVar25 + 0x58);
        uVar12 = 4;
LAB_71029fa20c:
                    /* WARNING: Could not recover jumptable at 0x0071029fa22c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE)(plVar25,uVar12,0xffffffff);
        return;
      }
    }
    break;
  case 5:
    if (iVar18 != 0) {
      return;
    }
    lVar20 = *(long *)(param_2 + 0x898);
    if ((*(float *)(lVar20 + 0x10) - *(float *)(lVar20 + 8)) + *(float *)(lVar20 + 0x14) <
        *(float *)(lVar20 + 0xc)) {
      return;
    }
    if (*(long *)(param_2 + 0x9e0) != 0) {
      uVar23 = 0;
      do {
        plVar25 = *(long **)(param_2 + 0x9f0 + uVar23 * 8);
        FUN_71029fc1d0(plVar25,3,(long ****)(plVar25 + 3),(byte ****)param_5,(long ****)param_6,
                       param_7,param_8,param_9);
        uVar23 = uVar23 + 1;
      } while (uVar23 < *(ulong *)(param_2 + 0x9e0));
    }
    lVar20 = *(long *)(param_2 + 0xa08);
    FUN_71025f4d80((long *)**(undefined8 **)(lVar20 + 0xe8),
                   (long *)(*(undefined8 **)(lVar20 + 0xe8))[1],1);
    plVar25 = *(long **)(lVar20 + 0xf0);
    if ((char)plVar25[4] != '\0') {
      plVar24 = (long *)plVar25[1];
      lVar17 = plVar25[2];
      lVar22 = *plVar25;
      *(undefined1 *)(plVar25 + 4) = 0;
      *plVar24 = lVar22;
      *(long **)(lVar22 + 8) = plVar24;
      *(long *)(lVar17 + 0x18) = *(long *)(lVar17 + 0x18) + -1;
      *plVar25 = 0;
      plVar25[1] = 0;
      puVar16 = *(undefined8 **)(lVar17 + 0x40);
      *plVar25 = lVar17 + 0x38;
      plVar25[1] = (long)puVar16;
      *(long **)(lVar17 + 0x40) = plVar25;
      *puVar16 = plVar25;
      *(long *)(lVar17 + 0x30) = *(long *)(lVar17 + 0x30) + 1;
      iVar18 = 0;
      if (plVar25[3] != 0) {
        iVar18 = *(int *)(plVar25[3] + 0x110);
      }
      *(int *)(lVar17 + 0x48) = *(int *)(lVar17 + 0x48) - iVar18;
    }
    if (*(long *)(lVar20 + 200) != 0) {
      uVar23 = 0;
      do {
        plVar25 = *(long **)(lVar20 + 0xd8 + uVar23 * 8);
        FUN_71029fc1d0(plVar25,3,(long ****)(plVar25 + 3),(byte ****)param_5,(long ****)param_6,
                       param_7,param_8,param_9);
        uVar23 = uVar23 + 1;
      } while (uVar23 < *(ulong *)(lVar20 + 200));
    }
    if (*(long *)(param_2 + 0xa38) != 0) {
      uVar23 = 0;
      do {
        lVar20 = *(long *)(param_2 + 0xa48 + uVar23 * 8);
        plVar25 = *(long **)(lVar20 + 0x30);
        if (((plVar25 != (long *)0x0) && ((char)plVar25[2] != '\0')) &&
           (*(undefined1 *)(plVar25 + 2) = 0, (char)plVar25[10] != '\0')) {
          plVar24 = (long *)FUN_71003ac560((ulong)*(uint *)(*plVar25 + 8));
          (**(code **)(*plVar24 + 0x48))(plVar24,0);
          *(undefined1 *)(plVar25 + 10) = 0;
        }
        puVar16 = *(undefined8 **)(lVar20 + 0x98);
        if (puVar16 != (undefined8 *)0x0) {
          FUN_71025f4d80((long *)*puVar16,(long *)puVar16[1],1);
        }
        plVar25 = *(long **)(lVar20 + 0xa0);
        if ((char)plVar25[4] != '\0') {
          plVar24 = (long *)plVar25[1];
          lVar17 = plVar25[2];
          lVar22 = *plVar25;
          *(undefined1 *)(plVar25 + 4) = 0;
          *plVar24 = lVar22;
          *(long **)(lVar22 + 8) = plVar24;
          *(long *)(lVar17 + 0x18) = *(long *)(lVar17 + 0x18) + -1;
          *plVar25 = 0;
          plVar25[1] = 0;
          puVar16 = *(undefined8 **)(lVar17 + 0x40);
          *plVar25 = lVar17 + 0x38;
          plVar25[1] = (long)puVar16;
          *(long **)(lVar17 + 0x40) = plVar25;
          *puVar16 = plVar25;
          *(long *)(lVar17 + 0x30) = *(long *)(lVar17 + 0x30) + 1;
          iVar18 = 0;
          if (plVar25[3] != 0) {
            iVar18 = *(int *)(plVar25[3] + 0x110);
          }
          *(int *)(lVar17 + 0x48) = *(int *)(lVar17 + 0x48) - iVar18;
        }
        plVar25 = *(long **)(lVar20 + 0xa8);
        if ((char)plVar25[4] != '\0') {
          plVar24 = (long *)plVar25[1];
          lVar17 = plVar25[2];
          lVar22 = *plVar25;
          *(undefined1 *)(plVar25 + 4) = 0;
          *plVar24 = lVar22;
          *(long **)(lVar22 + 8) = plVar24;
          *(long *)(lVar17 + 0x18) = *(long *)(lVar17 + 0x18) + -1;
          *plVar25 = 0;
          plVar25[1] = 0;
          puVar16 = *(undefined8 **)(lVar17 + 0x40);
          *plVar25 = lVar17 + 0x38;
          plVar25[1] = (long)puVar16;
          *(long **)(lVar17 + 0x40) = plVar25;
          *puVar16 = plVar25;
          *(long *)(lVar17 + 0x30) = *(long *)(lVar17 + 0x30) + 1;
          iVar18 = 0;
          if (plVar25[3] != 0) {
            iVar18 = *(int *)(plVar25[3] + 0x110);
          }
          *(int *)(lVar17 + 0x48) = *(int *)(lVar17 + 0x48) - iVar18;
        }
        if (0.0 < *(float *)(lVar20 + 0x120)) {
          FUN_71029fc1d0((long *)(lVar20 + 0x58),3,(long ****)(lVar20 + 0x70),(byte ****)param_5,
                         (long ****)param_6,param_7,param_8,param_9);
        }
        *(undefined1 *)(lVar20 + 0x124) = 0;
        uVar23 = uVar23 + 1;
      } while (uVar23 < *(ulong *)(param_2 + 0xa38));
    }
    *(undefined4 *)(*(long *)(param_2 + 0xa60) + 8) = 5;
    FUN_71026329a0(*(undefined8 **)(param_2 + 0x330));
    lVar20 = *(long *)(param_2 + 0xa88);
    lVar17 = *(long *)(param_2 + 0xa90);
    if (lVar20 != lVar17) {
      do {
        lVar22 = *(long *)(lVar20 + 0x10);
        if ((lVar22 != 0) && (*(char *)(lVar22 + 0x35) != '\0')) {
          uVar9 = *(uint *)(lVar22 + 0x3c);
          lVar22 = *lib::Singleton<lib::EffectManager>::instance_;
          std::mutex::lock();
          if ((0 < (int)uVar9) &&
             (lVar22 = lVar22 + (ulong)(uVar9 >> 0x18) * 0x300,
             lVar22 != 0 && *(uint *)(lVar22 + 4) == uVar9)) {
            FUN_71035707d0(lVar22,0,(long ****)0x0,0,(long ****)param_6,param_7,param_8,param_9);
          }
          std::mutex::unlock();
        }
        lVar20 = lVar20 + 0x18;
      } while (lVar17 != lVar20);
      lVar20 = *(long *)(param_2 + 0xa88);
      lVar17 = *(long *)(param_2 + 0xa90);
      while (lVar22 = lVar17, lVar22 != lVar20) {
        lVar21 = *(long *)(lVar22 + -8);
        lVar17 = lVar22 + -0x18;
        if (lVar21 != 0) {
          lVar2 = *(long *)(lVar22 + -0x18);
          plVar25 = *(long **)(lVar22 + -0x10);
          *plVar25 = lVar2;
          *(long **)(lVar2 + 8) = plVar25;
          *(long *)(lVar21 + 0x10) = *(long *)(lVar21 + 0x10) + -1;
          *(undefined8 *)(lVar22 + -0x10) = 0;
          *(undefined8 *)(lVar22 + -8) = 0;
          *(undefined8 *)(lVar22 + -0x18) = 0;
        }
      }
    }
    *(long *)(param_2 + 0xa90) = lVar20;
    FUN_710067de90(*lib::Singleton<app::FighterManager>::instance_,0x170bbe76a2,0,0,0x50000000);
    fVar27 = *(float *)(param_2 + 0x87c);
    fVar28 = *(float *)(param_2 + 0x878);
    uVar15 = 6;
LAB_71029f9c70:
    puVar16 = *(undefined8 **)(param_2 + 0x898);
    *(undefined4 *)(param_2 + 0x888) = uVar15;
    uVar15 = *(undefined4 *)*puVar16;
    *(undefined4 *)(puVar16 + 1) = uVar15;
    *(undefined4 *)(puVar16 + 2) = uVar15;
    *(undefined4 *)((long)puVar16 + 0x14) = 0;
    *(float *)((long)puVar16 + 0xc) = fVar27 - fVar28;
    break;
  case 6:
    if ((iVar18 == 0) &&
       (lVar20 = *(long *)(param_2 + 0x898),
       *(float *)(lVar20 + 0xc) <=
       (*(float *)(lVar20 + 0x10) - *(float *)(lVar20 + 8)) + *(float *)(lVar20 + 0x14))) {
      if (*(long *)(param_2 + 0x9e0) != 0) {
        uVar23 = 0;
        do {
          plVar25 = *(long **)(param_2 + 0x9f0 + uVar23 * 8);
          lVar20 = *plVar25;
          *(undefined1 *)(plVar25 + 6) = 0;
          if (lVar20 != 0) {
            *(undefined1 *)(lVar20 + 0x110) = 0;
            FUN_71025e9d50((long *)(lVar20 + 0x108),uVar12,param_4,(byte ****)param_5,
                           (long ****)param_6,param_7,param_8,param_9);
            lVar20 = *plVar25;
            uVar12 = extraout_x1_22;
            if (lVar20 != 0) {
              if ((*(char *)(lVar20 + 0xe0) != '\0') && (*(long *)(lVar20 + 200) != 0)) {
                *(undefined2 *)(*(long *)(lVar20 + 200) + 0x30) = 0x101;
              }
              if (*(long *)(lVar20 + 0xd8) != 0) {
                *(undefined1 *)(*(long *)(lVar20 + 0xd8) + 0x21) = 1;
              }
              if (*(char *)(lVar20 + 0xe0) != '\0') {
                *(undefined1 *)(*(long *)(lVar20 + 0xb0) + 0x10) = 0;
              }
            }
          }
          uVar23 = uVar23 + 1;
        } while (uVar23 < *(ulong *)(param_2 + 0x9e0));
      }
      lVar20 = *(long *)(param_2 + 0xa08);
      pauVar14 = (undefined1 (*) [16])0x1;
      FUN_71025f4d80((long *)**(undefined8 **)(lVar20 + 0xe8),
                     (long *)(*(undefined8 **)(lVar20 + 0xe8))[1],1);
      plVar25 = *(long **)(lVar20 + 0xf0);
      if ((char)plVar25[4] != '\0') {
        plVar24 = (long *)plVar25[1];
        lVar17 = plVar25[2];
        lVar22 = *plVar25;
        *(undefined1 *)(plVar25 + 4) = 0;
        *plVar24 = lVar22;
        *(long **)(lVar22 + 8) = plVar24;
        *(long *)(lVar17 + 0x18) = *(long *)(lVar17 + 0x18) + -1;
        *plVar25 = 0;
        plVar25[1] = 0;
        puVar16 = *(undefined8 **)(lVar17 + 0x40);
        *plVar25 = lVar17 + 0x38;
        plVar25[1] = (long)puVar16;
        *(long **)(lVar17 + 0x40) = plVar25;
        *puVar16 = plVar25;
        *(long *)(lVar17 + 0x30) = *(long *)(lVar17 + 0x30) + 1;
        iVar18 = 0;
        if (plVar25[3] != 0) {
          iVar18 = *(int *)(plVar25[3] + 0x110);
        }
        *(int *)(lVar17 + 0x48) = *(int *)(lVar17 + 0x48) - iVar18;
      }
      uVar12 = extraout_x1_23;
      if (*(long *)(lVar20 + 200) != 0) {
        uVar23 = 0;
        do {
          plVar25 = *(long **)(lVar20 + 0xd8 + uVar23 * 8);
          lVar17 = *plVar25;
          *(undefined1 *)(plVar25 + 6) = 0;
          if (lVar17 != 0) {
            *(undefined1 *)(lVar17 + 0x110) = 0;
            FUN_71025e9d50((long *)(lVar17 + 0x108),uVar12,(long ****)pauVar14,(byte ****)param_5,
                           (long ****)param_6,param_7,param_8,param_9);
            lVar17 = *plVar25;
            uVar12 = extraout_x1_24;
            if (lVar17 != 0) {
              if ((*(char *)(lVar17 + 0xe0) != '\0') && (*(long *)(lVar17 + 200) != 0)) {
                *(undefined2 *)(*(long *)(lVar17 + 200) + 0x30) = 0x101;
              }
              if (*(long *)(lVar17 + 0xd8) != 0) {
                *(undefined1 *)(*(long *)(lVar17 + 0xd8) + 0x21) = 1;
              }
              if (*(char *)(lVar17 + 0xe0) != '\0') {
                *(undefined1 *)(*(long *)(lVar17 + 0xb0) + 0x10) = 0;
              }
            }
          }
          uVar23 = uVar23 + 1;
        } while (uVar23 < *(ulong *)(lVar20 + 200));
      }
      if (*(long *)(param_2 + 0xa38) != 0) {
        uVar23 = 0;
        do {
          FUN_71029fd390(*(long *)(param_2 + 0xa48 + uVar23 * 8),uVar12,(long ****)pauVar14,
                         (byte ****)param_5,(long ****)param_6,param_7,param_8,param_9);
          uVar23 = uVar23 + 1;
          uVar12 = extraout_x1_25;
        } while (uVar23 < *(ulong *)(param_2 + 0xa38));
      }
      lVar20 = **(long **)(*(long *)(param_2 + 0x300) + 0x48);
      puVar11 = *(ulong **)(*(long *)(param_2 + 0x300) + 0x60);
      if (puVar11 != (ulong *)(lVar20 + 8)) {
        pauVar14 = *(undefined1 (**) [16])(lVar20 + 0x10);
        FUN_7102616cf0(puVar11,*(undefined1 (**) [16])(lVar20 + 8),pauVar14,(byte ****)param_5,
                       (long ****)param_6,param_7,param_8,param_9);
        lVar20 = **(long **)(*(long *)(param_2 + 0x300) + 0x48);
        puVar11 = *(ulong **)(*(long *)(param_2 + 0x300) + 0x60);
      }
      if (puVar11 + 3 != (ulong *)(lVar20 + 0x20)) {
        pauVar14 = *(undefined1 (**) [16])(lVar20 + 0x28);
        FUN_7102616cf0(puVar11 + 3,*(undefined1 (**) [16])(lVar20 + 0x20),pauVar14,
                       (byte ****)param_5,(long ****)param_6,param_7,param_8,param_9);
      }
      FUN_7102624740(*(long *)(param_2 + 0x308),0);
      FUN_7102624870(*(long *)(param_2 + 0x308),0);
      lVar20 = *(long *)(param_2 + 0x308);
      uStack_a8 = (ulong)SUB164(*(undefined1 (*) [16])(lVar20 + 0x230),8);
      local_b0 = SUB168(*(undefined1 (*) [16])(lVar20 + 0x230),0);
      uVar23 = *(ulong *)(lVar20 + 600);
      local_90 = *(undefined8 *)(lVar20 + 0x250);
      uVar15 = *(undefined4 *)(lVar20 + 0x240);
      uStack_88 = uVar23 & 0xffffffff;
      local_a0 = CONCAT44(local_a0._4_4_,uVar15);
      fVar27 = *(float *)(param_2 + 0x740);
      if (1.0 <= fVar27) {
        *(float *)(lVar20 + 0x434) = fVar27;
        *(float *)(lVar20 + 0x438) = fVar27;
        *(undefined4 *)(lVar20 + 0x480) = uVar15;
        *(ulong *)(lVar20 + 0x478) = uStack_a8;
        *(float (*) [2])(lVar20 + 0x470) = local_b0;
        *(ulong *)(lVar20 + 0x498) = uVar23 & 0xffffffff;
        *(undefined8 *)(lVar20 + 0x490) = local_90;
        *(undefined1 *)(lVar20 + 0x430) = 1;
        *(undefined4 *)(lVar20 + 0x450) = *(undefined4 *)(lVar20 + 0x3e0);
        *(ulong *)(lVar20 + 0x448) = (ulong)*(uint *)(lVar20 + 0x3d8);
        *(undefined4 *)(lVar20 + 0x440) = *(undefined4 *)(lVar20 + 0x3d0);
        *(undefined4 *)(lVar20 + 0x444) = *(undefined4 *)(lVar20 + 0x3d4);
        *(ulong *)(lVar20 + 0x468) = (ulong)SUB164(*(undefined1 (*) [16])(lVar20 + 0x3f0),8);
        *(long *)(lVar20 + 0x460) = SUB168(*(undefined1 (*) [16])(lVar20 + 0x3f0),0);
        uVar12 = extraout_x1_26;
      }
      else {
        *(undefined4 *)(lVar20 + 0x3e0) = uVar15;
        *(ulong *)(lVar20 + 0x3d8) = uStack_a8;
        *(float (*) [2])(lVar20 + 0x3d0) = local_b0;
        *(ulong *)(lVar20 + 0x3f8) = uVar23 & 0xffffffff;
        *(undefined8 *)(lVar20 + 0x3f0) = local_90;
        pauVar14 = (undefined1 (*) [16])local_b0;
        FUN_7103159960(*(long *)(*lib::Singleton<app::StageManager>::instance_ + 0x1c0),
                       *(ulong *)(lVar20 + 8),(undefined8 *)pauVar14);
        uVar12 = extraout_x1_27;
      }
      *(undefined1 *)(lVar20 + 0xe0) = 1;
      puVar3 = *(undefined8 **)(**(long **)(param_2 + 0x330) + 0x58);
      for (puVar16 = *(undefined8 **)(**(long **)(param_2 + 0x330) + 0x50); puVar16 != puVar3;
          puVar16 = puVar16 + 1) {
        plVar25 = (long *)*puVar16;
        if (*(int *)((long)plVar25 + 0xc) == 0) {
          if ((char)plVar25[3] == '\0') {
            (**(code **)(*plVar25 + 0x10))(plVar25);
            *(undefined1 *)(plVar25 + 3) = 1;
            uVar12 = extraout_x1_35;
          }
        }
        else if ((char)plVar25[3] != '\0') {
          *(undefined1 *)(plVar25 + 3) = 0;
          (**(code **)(*plVar25 + 0x18))(plVar25);
          uVar12 = extraout_x1_34;
        }
      }
      lVar20 = *(long *)(param_2 + 0xa00);
      plVar24 = (long *)(*(long **)(lVar20 + 0xe8))[1];
      for (plVar25 = (long *)**(long **)(lVar20 + 0xe8); plVar25 != plVar24; plVar25 = plVar25 + 1)
      {
        lVar17 = *plVar25;
        *(undefined1 *)(lVar17 + 0x128) = 1;
        if (*(long *)(lVar17 + 8) != 0) {
          *(undefined8 *)(*(long *)(lVar17 + 8) + 0xd8) = 0xffffffffffffffff;
          FUN_7100532bc0(*(long *)(lVar17 + 8),0);
          uVar12 = extraout_x1_36;
        }
      }
      plVar25 = *(long **)(lVar20 + 0xf0);
      if ((char)plVar25[4] != '\0') {
        plVar24 = (long *)plVar25[1];
        lVar17 = plVar25[2];
        lVar22 = *plVar25;
        *(undefined1 *)(plVar25 + 4) = 0;
        *plVar24 = lVar22;
        *(long **)(lVar22 + 8) = plVar24;
        *(long *)(lVar17 + 0x18) = *(long *)(lVar17 + 0x18) + -1;
        *plVar25 = 0;
        plVar25[1] = 0;
        puVar16 = *(undefined8 **)(lVar17 + 0x40);
        *plVar25 = lVar17 + 0x38;
        plVar25[1] = (long)puVar16;
        *(long **)(lVar17 + 0x40) = plVar25;
        *puVar16 = plVar25;
        *(long *)(lVar17 + 0x30) = *(long *)(lVar17 + 0x30) + 1;
        iVar18 = 0;
        if (plVar25[3] != 0) {
          iVar18 = *(int *)(plVar25[3] + 0x110);
        }
        *(int *)(lVar17 + 0x48) = *(int *)(lVar17 + 0x48) - iVar18;
      }
      if (*(long *)(lVar20 + 200) != 0) {
        uVar23 = 0;
        do {
          plVar25 = *(long **)(lVar20 + 0xd8 + uVar23 * 8);
          pauVar14 = (undefined1 (*) [16])(plVar25 + 1);
          FUN_71029fc1d0(plVar25,1,(long ****)pauVar14,(byte ****)param_5,(long ****)param_6,param_7
                         ,param_8,param_9);
          uVar23 = uVar23 + 1;
          uVar12 = extraout_x1_37;
        } while (uVar23 < *(ulong *)(lVar20 + 200));
      }
      if (*(long *)(param_2 + 0x940) != 0) {
        uVar23 = 0;
        do {
          plVar25 = *(long **)(param_2 + 0x950 + uVar23 * 8);
          pauVar14 = (undefined1 (*) [16])(plVar25 + 1);
          FUN_71029fc1d0(plVar25,1,(long ****)pauVar14,(byte ****)param_5,(long ****)param_6,param_7
                         ,param_8,param_9);
          uVar23 = uVar23 + 1;
          uVar12 = extraout_x1_38;
        } while (uVar23 < *(ulong *)(param_2 + 0x940));
      }
      lVar17 = *(long *)(param_2 + 0xa68);
      lVar20 = *(long *)(lVar17 + 0x10);
      *(undefined4 *)(lVar17 + 8) = 0;
      if (lVar20 != 0) {
        *(undefined1 *)(lVar20 + 0x110) = 0;
        FUN_71025e9d50((long *)(lVar20 + 0x108),uVar12,(long ****)pauVar14,(byte ****)param_5,
                       (long ****)param_6,param_7,param_8,param_9);
        lVar20 = *(long *)(lVar17 + 0x10);
        if (lVar20 != 0) {
          if ((*(char *)(lVar20 + 0xe0) != '\0') && (*(long *)(lVar20 + 200) != 0)) {
            *(undefined2 *)(*(long *)(lVar20 + 200) + 0x30) = 0x101;
          }
          if (*(long *)(lVar20 + 0xd8) != 0) {
            *(undefined1 *)(*(long *)(lVar20 + 0xd8) + 0x21) = 1;
          }
          if (*(char *)(lVar20 + 0xe0) != '\0') {
            *(undefined1 *)(*(long *)(lVar20 + 0xb0) + 0x10) = 0;
          }
        }
      }
      plVar25 = *(long **)(param_2 + 0xa80);
      *(int *)(*(long *)(*(long *)(*plVar25 + 0x318) + 0x18) + 0x2c) = (int)plVar25[2];
      *(undefined4 *)(plVar25 + 1) = 1;
      FUN_71029faf00(param_2);
      *(undefined4 *)(param_2 + 0x888) = 7;
      puVar16 = *(undefined8 **)(param_2 + 0x898);
      uVar15 = *(undefined4 *)*puVar16;
      *(float *)((long)puVar16 + 0xc) = *(float *)(param_2 + 0x884) - *(float *)(param_2 + 0x880);
      *(undefined4 *)(puVar16 + 1) = uVar15;
      *(undefined4 *)(puVar16 + 2) = uVar15;
      *(undefined4 *)((long)puVar16 + 0x14) = 0;
      lVar20 = *(long *)(*(long *)(param_2 + 0x300) + 0x60);
      lVar17 = **(long **)(*(long *)(param_2 + 0x300) + 0x48);
      uVar12 = *(undefined8 *)(lVar17 + 0x40);
      *(ulong *)(lVar20 + 0x38) = *(ulong *)(lVar17 + 0x48) & 0xffffffff;
      *(undefined8 *)(lVar20 + 0x30) = uVar12;
      uVar12 = *(undefined8 *)(lVar17 + 0x50);
      *(ulong *)(lVar20 + 0x48) = *(ulong *)(lVar17 + 0x58) & 0xffffffff;
      *(undefined8 *)(lVar20 + 0x40) = uVar12;
      uVar12 = *(undefined8 *)(lVar17 + 0x60);
      *(ulong *)(lVar20 + 0x58) = *(ulong *)(lVar17 + 0x68) & 0xffffffff;
      *(undefined8 *)(lVar20 + 0x50) = uVar12;
      uVar12 = *(undefined8 *)(lVar17 + 0x70);
      *(ulong *)(lVar20 + 0x68) = *(ulong *)(lVar17 + 0x78) & 0xffffffff;
      *(undefined8 *)(lVar20 + 0x60) = uVar12;
      uVar12 = *(undefined8 *)(lVar17 + 0x80);
      *(int *)(lVar20 + 0x78) = (int)*(undefined8 *)(lVar17 + 0x88);
      *(undefined4 *)(lVar20 + 0x7c) = 0;
      *(undefined8 *)(lVar20 + 0x70) = uVar12;
      *(undefined1 *)(lVar20 + 0x80) = *(undefined1 *)(lVar17 + 0x90);
      uVar12 = *(undefined8 *)(lVar17 + 0xa0);
      *(ulong *)(lVar20 + 0x98) = *(ulong *)(lVar17 + 0xa8) & 0xffffffff;
      *(undefined8 *)(lVar20 + 0x90) = uVar12;
      uVar12 = *(undefined8 *)(lVar17 + 0xb0);
      *(ulong *)(lVar20 + 0xa8) = *(ulong *)(lVar17 + 0xb8) & 0xffffffff;
      *(undefined8 *)(lVar20 + 0xa0) = uVar12;
      FUN_71025f7350(*(long *)(*(long *)(param_2 + 0x318) + 0x10),(byte *)"light00");
      FUN_7102633910(*(long *)(param_2 + 0x318),(long *********)"render_param",pauVar14,param_5,
                     (long ****)param_6,param_7,param_8,param_9);
      FUN_7102633800(*(long *)(param_2 + 0x318),(long *********)"reflection_cubemap",pauVar14,
                     param_5,(long ****)param_6,param_7,param_8,param_9);
      FUN_7102633a10(*(long *)(param_2 + 0x318),(long *********)"chara",1,param_5,(long ****)param_6
                     ,param_7,param_8,param_9);
      FUN_7102633b90(*(long *)(param_2 + 0x318),(long *********)"stage",1,param_5,(long ****)param_6
                     ,param_7,param_8,param_9);
    }
    break;
  case 7:
    if ((iVar18 == 0) &&
       (lVar20 = *(long *)(param_2 + 0x898),
       *(float *)(lVar20 + 0xc) <=
       (*(float *)(lVar20 + 0x10) - *(float *)(lVar20 + 8)) + *(float *)(lVar20 + 0x14))) {
      lVar20 = *(long *)(param_2 + 0xa00);
      plVar24 = (long *)(*(long **)(lVar20 + 0xe8))[1];
      for (plVar25 = (long *)**(long **)(lVar20 + 0xe8); plVar25 != plVar24; plVar25 = plVar25 + 1)
      {
        lVar17 = *plVar25;
        *(undefined1 *)(lVar17 + 0x128) = 1;
        if (*(long *)(lVar17 + 8) != 0) {
          *(undefined8 *)(*(long *)(lVar17 + 8) + 0xd8) = 0xffffffffffffffff;
          FUN_7100532bc0(*(long *)(lVar17 + 8),0);
          uVar12 = extraout_x1_28;
        }
      }
      plVar25 = *(long **)(lVar20 + 0xf0);
      if ((char)plVar25[4] == '\0') {
        *(undefined1 *)(plVar25 + 4) = 1;
        lVar22 = *plVar25;
        plVar24 = (long *)plVar25[1];
        lVar17 = plVar25[2];
        *plVar24 = lVar22;
        *(long **)(lVar22 + 8) = plVar24;
        *(long *)(lVar17 + 0x30) = *(long *)(lVar17 + 0x30) + -1;
        *plVar25 = 0;
        plVar25[1] = 0;
        puVar16 = *(undefined8 **)(lVar17 + 0x28);
        *plVar25 = lVar17 + 0x20;
        plVar25[1] = (long)puVar16;
        *(long **)(lVar17 + 0x28) = plVar25;
        *puVar16 = plVar25;
        *(long *)(lVar17 + 0x18) = *(long *)(lVar17 + 0x18) + 1;
        iVar18 = 0;
        if (plVar25[3] != 0) {
          iVar18 = *(int *)(plVar25[3] + 0x110);
        }
        *(int *)(lVar17 + 0x48) = *(int *)(lVar17 + 0x48) + iVar18;
      }
      if (*(long *)(lVar20 + 200) != 0) {
        uVar23 = 0;
        do {
          plVar25 = *(long **)(lVar20 + 0xd8 + uVar23 * 8);
          param_4 = (long ****)(plVar25 + 2);
          FUN_71029fc1d0(plVar25,2,param_4,(byte ****)param_5,(long ****)param_6,param_7,param_8,
                         param_9);
          uVar23 = uVar23 + 1;
          uVar12 = extraout_x1_29;
        } while (uVar23 < *(ulong *)(lVar20 + 200));
      }
      *(undefined1 *)(lVar20 + 0x170) = 1;
      if (*(long *)(param_2 + 0x940) != 0) {
        uVar23 = 0;
        do {
          plVar25 = *(long **)(param_2 + 0x950 + uVar23 * 8);
          param_4 = (long ****)(plVar25 + 2);
          FUN_71029fc1d0(plVar25,2,param_4,(byte ****)param_5,(long ****)param_6,param_7,param_8,
                         param_9);
          uVar23 = uVar23 + 1;
          uVar12 = extraout_x1_30;
        } while (uVar23 < *(ulong *)(param_2 + 0x940));
      }
      lVar17 = *(long *)(param_2 + 0xa68);
      lVar20 = *(long *)(lVar17 + 0x10);
      *(undefined4 *)(lVar17 + 8) = 1;
      uVar15 = **(undefined4 **)(lVar17 + 0x18);
      *(undefined4 *)(lVar17 + 0x20) = uVar15;
      *(undefined4 *)(lVar17 + 0x28) = uVar15;
      *(undefined4 *)(lVar17 + 0x2c) = 0;
      *(float *)(lVar17 + 0x24) = *(float *)(lVar17 + 0x40) - *(float *)(lVar17 + 0x30);
      if (lVar20 != 0) {
        *(undefined1 *)(lVar20 + 0x110) = 0;
        FUN_71025e9d50((long *)(lVar20 + 0x108),uVar12,param_4,(byte ****)param_5,(long ****)param_6
                       ,param_7,param_8,param_9);
        lVar20 = *(long *)(lVar17 + 0x10);
        uVar12 = extraout_x1_31;
        if (lVar20 != 0) {
          if ((*(char *)(lVar20 + 0xe0) != '\0') && (*(long *)(lVar20 + 200) != 0)) {
            *(undefined2 *)(*(long *)(lVar20 + 200) + 0x30) = 0x101;
          }
          if (*(long *)(lVar20 + 0xd8) != 0) {
            *(undefined1 *)(*(long *)(lVar20 + 0xd8) + 0x21) = 1;
          }
          if (*(char *)(lVar20 + 0xe0) != '\0') {
            *(undefined1 *)(*(long *)(lVar20 + 0xb0) + 0x10) = 0;
          }
        }
      }
      lVar17 = *(long *)(param_2 + 0xa70);
      lVar20 = *(long *)(lVar17 + 0x30);
      if (lVar20 != 0) {
        *(undefined1 *)(lVar20 + 0x110) = 0;
        FUN_71025e9d50((long *)(lVar20 + 0x108),uVar12,param_4,(byte ****)param_5,(long ****)param_6
                       ,param_7,param_8,param_9);
        uVar12 = extraout_x1_32;
      }
      lVar20 = *(long *)(lVar17 + 0x38);
      if (lVar20 != 0) {
        *(undefined1 *)(lVar20 + 0x110) = 0;
        FUN_71025e9d50((long *)(lVar20 + 0x108),uVar12,param_4,(byte ****)param_5,(long ****)param_6
                       ,param_7,param_8,param_9);
      }
      uVar15 = **(undefined4 **)(lVar17 + 0x18);
      *(undefined4 *)(lVar17 + 0x20) = uVar15;
      *(undefined4 *)(lVar17 + 0x24) = 0x452fd000;
      *(undefined4 *)(lVar17 + 0x28) = uVar15;
      *(undefined4 *)(lVar17 + 0x2c) = 0;
      *(undefined4 *)(lVar17 + 0x10) = 0;
      FUN_7102630ae0((ulong *)**(undefined8 **)(param_2 + 0x330));
      *(undefined1 *)(param_2 + 0x8b8) = 1;
      puVar16 = *(undefined8 **)(param_2 + 0x898);
      *(undefined4 *)(param_2 + 0x888) = 0;
      uVar15 = *(undefined4 *)*puVar16;
      *(float *)((long)puVar16 + 0xc) = *(float *)(param_2 + 0x84c) - *(float *)(param_2 + 0x848);
      *(undefined4 *)(puVar16 + 1) = uVar15;
      *(undefined4 *)(puVar16 + 2) = uVar15;
      *(undefined4 *)((long)puVar16 + 0x14) = 0;
      plVar25 = *(long **)(**(long **)(*(long *)(param_2 + 0x840) + 0x338) + 8);
      if (plVar25 != (long *)0x0) {
        UNRECOVERED_JUMPTABLE = *(code **)(*plVar25 + 0x58);
        uVar12 = 0;
        goto LAB_71029fa20c;
      }
    }
  }
  return;
}

