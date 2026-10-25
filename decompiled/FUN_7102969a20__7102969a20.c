// addr:      7102969a20
// offset:    0x2969a20
// name:      FUN_7102969a20
// mangled:   
// signature: undefined __cdecl FUN_7102969a20(undefined1[16] param_1, long param_2, undefined8 param_3, char * param_4, undefined1[16] * param_5, undefined1[16] * param_6, undefined1[16] * param_7, undefined8 param_8, undefined8 param_9)


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7102969a20(undefined1 param_1 [16],long param_2,undefined8 param_3,char *param_4,
                   undefined1 (*param_5) [16],undefined1 (*param_6) [16],undefined1 (*param_7) [16],
                   undefined8 param_8,undefined8 param_9)

{
  long ***ppplVar1;
  undefined1 (*pauVar2) [16];
  uint uVar3;
  undefined8 *puVar4;
  uint uVar5;
  char cVar6;
  int iVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  bool bVar12;
  uint uVar13;
  int iVar14;
  long *plVar15;
  long *plVar16;
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
  undefined8 uVar17;
  undefined8 extraout_x1_10;
  undefined8 uVar18;
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
  undefined8 extraout_x1_33;
  undefined8 extraout_x1_34;
  undefined8 extraout_x1_35;
  undefined8 extraout_x1_36;
  undefined **ppuVar19;
  long lVar20;
  uint *puVar21;
  code *pcVar22;
  undefined8 *puVar23;
  long lVar24;
  ulong uVar25;
  ulong uVar26;
  long **pplVar27;
  long lVar28;
  long *plVar29;
  int iVar30;
  undefined4 uVar31;
  undefined4 uVar33;
  undefined8 uVar32;
  float fVar34;
  float fVar35;
  undefined4 uVar37;
  float fVar38;
  undefined1 auVar36 [16];
  float fVar39;
  float fVar40;
  float fVar41;
  undefined4 uVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  long **local_110;
  long *local_108;
  long local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  long **local_d0;
  long *plStack_c8;
  long local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined1 local_90 [8];
  undefined8 uStack_88;
  
  uVar18 = param_1._8_8_;
  auVar36._0_8_ = param_1._0_8_;
  puVar4 = (undefined8 *)(*(long **)(param_2 + 0x350))[1];
  for (puVar23 = (undefined8 *)**(long **)(param_2 + 0x350); puVar23 != puVar4;
      puVar23 = puVar23 + 1) {
                    /* WARNING: Read-only address (ram,0x0071044656b0) is written */
                    /* WARNING: Read-only address (ram,0x00710446a350) is written */
    auVar36._8_8_ = uVar18;
    (**(code **)(*(long *)*puVar23 + 0x10))(auVar36);
    param_3 = extraout_x1;
  }
                    /* WARNING: Read-only address (ram,0x0071044656b0) is written */
                    /* WARNING: Read-only address (ram,0x00710446a350) is written */
  DAT_710532d198 = 0.0;
  if ((*(long *)(param_2 + 0x980) != 0) &&
     (lVar20 = *(long *)(*(long *)(param_2 + 0x980) + 0xd8), lVar20 != 0)) {
    DAT_710532d198 = *(float *)(lVar20 + 0x10);
  }
  fVar34 = *(float *)(param_2 + 0xae8);
  if (fVar34 <= 0.0) {
    puVar21 = *(uint **)(*(long *)(param_2 + 0xb98) + 0x340);
    fVar34 = *(float *)(*(long *)(param_2 + 0x9e8) + 0x28);
    fVar41 = *(float *)(*(long *)(param_2 + 0x9e8) + 0x2c);
    uVar13 = *puVar21;
    *puVar21 = puVar21[1];
    uVar3 = puVar21[3];
    uVar13 = uVar13 ^ uVar13 << 0xb;
    uVar13 = uVar13 ^ uVar13 >> 8 ^ uVar3 ^ uVar3 >> 0x13;
    puVar21[1] = puVar21[2];
    puVar21[2] = uVar3;
    puVar21[3] = uVar13;
    *(float *)(param_2 + 0xae8) =
         *(float *)(*(long *)(param_2 + 0x9e8) + 0x28) +
         (fVar41 - fVar34) * (float)uVar13 * 2.3283064e-10;
    puVar21 = *(uint **)(*(long *)(param_2 + 0xb98) + 0x340);
    uVar13 = *puVar21;
    *puVar21 = puVar21[1];
    uVar3 = puVar21[3];
    uVar13 = uVar13 ^ uVar13 << 0xb;
    uVar13 = uVar13 ^ uVar13 >> 8 ^ uVar3 ^ uVar3 >> 0x13;
    puVar21[1] = puVar21[2];
    puVar21[2] = uVar3;
    puVar21[3] = uVar13;
    fVar34 = *(float *)(*(long *)(param_2 + 0x9e8) + 0x30);
    *(undefined8 *)(param_2 + 0xaf8) = *(undefined8 *)(param_2 + 0xaf8);
    *(ulong *)(param_2 + 0xaf0) =
         CONCAT44((int)((ulong)*(undefined8 *)(param_2 + 0xaf0) >> 0x20),
                  fVar34 * ((float)uVar13 * -2.0 * 2.3283064e-10 + 1.0));
    puVar21 = *(uint **)(*(long *)(param_2 + 0xb98) + 0x340);
    uVar13 = *puVar21;
    *puVar21 = puVar21[1];
    uVar3 = puVar21[3];
    uVar13 = uVar13 ^ uVar13 << 0xb;
    uVar13 = uVar13 ^ uVar13 >> 8 ^ uVar3 ^ uVar3 >> 0x13;
    fVar34 = (float)uVar13;
    puVar21[1] = puVar21[2];
    puVar21[2] = uVar3;
    puVar21[3] = uVar13;
    lVar20 = *(long *)(param_2 + 0x9e8);
    fVar41 = *(float *)(param_2 + 0xaf0);
    uVar31 = *(undefined4 *)(param_2 + 0xaf8);
    uVar33 = *(undefined4 *)(param_2 + 0xafc);
    fVar45 = *(float *)(lVar20 + 0x30) * (1.0 - (fVar34 + fVar34) * 2.3283064e-10);
    fVar34 = *(float *)(param_2 + 0xae8);
    *(undefined4 *)(param_2 + 0xaf8) = uVar31;
    *(undefined4 *)(param_2 + 0xafc) = uVar33;
    *(float *)(param_2 + 0xaf0) = fVar41;
    *(float *)(param_2 + 0xaf4) = fVar45;
  }
  else {
    fVar41 = *(float *)(param_2 + 0xaf0);
    fVar45 = *(float *)(param_2 + 0xaf4);
    uVar31 = *(undefined4 *)(param_2 + 0xaf8);
    uVar33 = *(undefined4 *)(param_2 + 0xafc);
    lVar20 = *(long *)(param_2 + 0x9e8);
  }
  fVar46 = param_1._0_4_;
  uVar18 = *(undefined8 *)(param_2 + 0xb08);
  fVar39 = (float)*(undefined8 *)(param_2 + 0xb00) + fVar46 * fVar41;
  fVar40 = (float)((ulong)*(undefined8 *)(param_2 + 0xb00) >> 0x20);
  *(float *)(param_2 + 0xae8) = fVar34 - fVar46;
  *(undefined8 *)(param_2 + 0xb08) = uVar18;
  *(ulong *)(param_2 + 0xb00) = CONCAT44(fVar40,fVar39);
  fVar35 = *(float *)(lVar20 + 0x34);
  fVar43 = -fVar35;
  fVar34 = fVar35;
  if (fVar39 <= fVar35) {
    fVar34 = fVar39;
  }
  fVar44 = fVar43;
  if (fVar43 <= fVar34) {
    fVar44 = fVar35;
  }
  bVar12 = true;
  if ((fVar43 <= fVar34) && (bVar12 = false, !NAN(fVar35) && !NAN(fVar39))) {
    bVar12 = fVar35 < fVar39;
  }
  if (!bVar12) {
    fVar44 = fVar39;
  }
  fVar40 = fVar40 + fVar46 * fVar45;
  *(undefined8 *)(param_2 + 0xb08) = uVar18;
  *(ulong *)(param_2 + 0xb00) = CONCAT44(fVar40,fVar44);
  fVar35 = *(float *)(lVar20 + 0x34);
  fVar39 = -fVar35;
  fVar34 = fVar35;
  if (fVar40 <= fVar35) {
    fVar34 = fVar40;
  }
  fVar43 = fVar39;
  if (fVar39 <= fVar34) {
    fVar43 = fVar35;
  }
  bVar12 = true;
  if ((fVar39 <= fVar34) && (bVar12 = false, !NAN(fVar35) && !NAN(fVar40))) {
    bVar12 = fVar35 < fVar40;
  }
  if (!bVar12) {
    fVar43 = fVar40;
  }
  *(undefined8 *)(param_2 + 0xb08) = uVar18;
  *(ulong *)(param_2 + 0xb00) = CONCAT44(fVar43,fVar44);
  fVar35 = (float)*(undefined8 *)(param_2 + 0xb10) + fVar44 * fVar46;
  fVar34 = (float)((ulong)*(undefined8 *)(param_2 + 0xb10) >> 0x20) + fVar43 * fVar46;
  *(undefined8 *)(param_2 + 0xb18) = *(undefined8 *)(param_2 + 0xb18);
  *(ulong *)(param_2 + 0xb10) = CONCAT44(fVar34,fVar35);
  if (fVar35 <= *(float *)(lVar20 + 0x38)) {
    if (fVar35 < -*(float *)(lVar20 + 0x38)) {
      fVar41 = *(float *)(lVar20 + 0x30);
      goto LAB_7102969c94;
    }
  }
  else {
    fVar41 = -*(float *)(lVar20 + 0x30);
LAB_7102969c94:
    *(undefined4 *)(param_2 + 0xaf8) = uVar31;
    *(undefined4 *)(param_2 + 0xafc) = uVar33;
    *(float *)(param_2 + 0xaf0) = fVar41;
    *(float *)(param_2 + 0xaf4) = fVar45;
  }
  if (fVar34 <= *(float *)(lVar20 + 0x3c)) {
    if (fVar34 < -*(float *)(lVar20 + 0x3c)) {
      fVar34 = *(float *)(lVar20 + 0x30);
      goto LAB_7102969cc4;
    }
  }
  else {
    fVar34 = -*(float *)(lVar20 + 0x30);
LAB_7102969cc4:
    *(undefined4 *)(param_2 + 0xaf8) = uVar31;
    *(undefined4 *)(param_2 + 0xafc) = uVar33;
    *(ulong *)(param_2 + 0xaf0) = CONCAT44(fVar34,fVar41);
  }
  switch(*(undefined4 *)(param_2 + 0xad8)) {
  case 0:
    fVar34 = DAT_710532d198 + 0.0;
    if ((fVar34 < 450.0) || ((1450.0 <= fVar34 && (2450.0 <= fVar34)))) {
      *(undefined4 *)(param_2 + 0xad8) = 1;
    }
    break;
  case 1:
    if ((450.0 <= DAT_710532d198 + 0.0) && (DAT_710532d198 + 0.0 < 1450.0)) {
      *(undefined4 *)(param_2 + 0xad8) = 2;
    }
    break;
  case 2:
    fVar34 = DAT_710532d198 + 200.0;
    if (((1450.0 <= fVar34) && (450.0 <= fVar34)) && (fVar34 < 2450.0)) {
      puVar21 = *(uint **)(*(long *)(param_2 + 0xb98) + 0x340);
      uVar5 = *(uint *)(lVar20 + 8);
      uVar13 = *puVar21;
      *puVar21 = puVar21[1];
      uVar3 = puVar21[3];
      uVar13 = uVar13 ^ uVar13 << 0xb;
      uVar13 = uVar13 ^ uVar13 >> 8 ^ uVar3 ^ uVar3 >> 0x13;
      puVar21[1] = puVar21[2];
      puVar21[2] = uVar3;
      puVar21[3] = uVar13;
      uVar3 = 0;
      if (uVar5 != 0) {
        uVar3 = uVar13 / uVar5;
      }
      if (uVar13 != uVar3 * uVar5) goto LAB_7102969f28;
      *(undefined8 *)(param_2 + 0xadc) = 0;
      *(undefined4 *)(param_2 + 0xad8) = 3;
    }
    break;
  case 3:
    fVar34 = *(float *)(param_2 + 0xae0);
    fVar41 = *(float *)(lVar20 + 0xc) * fVar46;
    if (*(float *)(param_2 + 0xae4) - *(float *)(lVar20 + 0x20) <=
        fVar34 * 0.5 * (fVar34 / *(float *)(lVar20 + 0xc))) {
      fVar34 = fVar34 - fVar41;
      *(float *)(param_2 + 0xae0) = fVar34;
      if (fVar34 <= *(float *)(lVar20 + 0x14)) {
        fVar34 = *(float *)(lVar20 + 0x14);
      }
    }
    else {
      fVar34 = fVar34 + fVar41;
      *(float *)(param_2 + 0xae0) = fVar34;
      if (*(float *)(lVar20 + 0x10) <= fVar34) {
        fVar34 = *(float *)(lVar20 + 0x10);
      }
    }
    *(float *)(param_2 + 0xae0) = fVar34;
    fVar34 = *(float *)(param_2 + 0xae4) - fVar34 * fVar46;
    *(float *)(param_2 + 0xae4) = fVar34;
    if (fVar34 <= *(float *)(lVar20 + 0x20)) {
      fVar34 = *(float *)(lVar20 + 0x20);
    }
    *(float *)(param_2 + 0xae4) = fVar34;
    fVar34 = (float)NEON_ucvtf(*(undefined4 *)(lVar20 + 0x18));
    if (fVar34 < *(float *)(param_2 + 0xadc)) {
      *(undefined4 *)(param_2 + 0xad8) = 4;
    }
    *(float *)(param_2 + 0xadc) = *(float *)(param_2 + 0xadc) + fVar46;
    break;
  case 4:
    fVar34 = *(float *)(param_2 + 0xae0);
    fVar41 = *(float *)(lVar20 + 0xc) * fVar46;
    if (*(float *)(lVar20 + 0x1c) - *(float *)(param_2 + 0xae4) <=
        fVar34 * 0.5 * (fVar34 / *(float *)(lVar20 + 0xc))) {
      fVar34 = fVar34 - fVar41;
      *(float *)(param_2 + 0xae0) = fVar34;
      if (fVar34 <= *(float *)(lVar20 + 0x14)) {
        fVar34 = *(float *)(lVar20 + 0x14);
      }
    }
    else {
      fVar34 = fVar34 + fVar41;
      *(float *)(param_2 + 0xae0) = fVar34;
      if (*(float *)(lVar20 + 0x10) <= fVar34) {
        fVar34 = *(float *)(lVar20 + 0x10);
      }
    }
    *(float *)(param_2 + 0xae0) = fVar34;
    fVar34 = *(float *)(param_2 + 0xae4) + fVar34 * fVar46;
    *(float *)(param_2 + 0xae4) = fVar34;
    if (*(float *)(lVar20 + 0x1c) <= fVar34) {
      fVar34 = *(float *)(lVar20 + 0x1c);
    }
    *(float *)(param_2 + 0xae4) = fVar34;
    if (*(float *)(lVar20 + 0x1c) <= fVar34) {
LAB_7102969f28:
      *(undefined4 *)(param_2 + 0xad8) = 0;
    }
  }
  local_e0._0_4_ = 0.0 - *(float *)(param_2 + 0xb10);
  local_e0._4_4_ = (-250.0 - *(float *)(param_2 + 0xae4)) - *(float *)(param_2 + 0xb14);
  local_108 = (long *)0x0;
  local_110 = (long **)&DAT_3f800000;
  uStack_f8 = 0;
  local_100 = 0x3f80000000000000;
  uVar32 = DAT_71044656b0._8_8_;
  uVar18 = (undefined8)DAT_71044656b0;
  local_d8 = 0x3f80000000000000;
  lVar20 = *(long *)(param_2 + 0x9d0);
  local_f0 = uVar18;
  uStack_e8 = uVar32;
  if (lVar20 != 0) {
    (**(code **)(**(long **)(lVar20 + 0x90) + 0x148))(*(long **)(lVar20 + 0x90),&local_110);
    lVar20 = *(long *)(lVar20 + 0xd8);
    param_3 = extraout_x1_00;
    if (lVar20 != 0) {
      uStack_b8 = uStack_f8;
      local_c0 = local_100;
      plStack_c8 = local_108;
      local_d0 = local_110;
      local_98 = local_d8;
      local_a0 = local_e0;
      uStack_a8 = uStack_e8;
      local_b0 = local_f0;
      if (*(char *)(*(long *)(lVar20 + 8) + 0xa8) != '\0') {
        plVar15 = *(long **)(*(long *)(lVar20 + 8) + 0x48);
        (**(code **)(*plVar15 + 0x20))(plVar15,&local_d0);
        param_3 = extraout_x1_01;
      }
      *(undefined1 *)(lVar20 + 0x20) = 1;
    }
  }
  lVar20 = *(long *)(param_2 + 0x9d8);
  if (lVar20 != 0) {
    (**(code **)(**(long **)(lVar20 + 0x90) + 0x148))(*(long **)(lVar20 + 0x90),&local_110);
    lVar20 = *(long *)(lVar20 + 0xd8);
    param_3 = extraout_x1_02;
    if (lVar20 != 0) {
      uStack_b8 = uStack_f8;
      local_c0 = local_100;
      plStack_c8 = local_108;
      local_d0 = local_110;
      local_98 = local_d8;
      local_a0 = local_e0;
      uStack_a8 = uStack_e8;
      local_b0 = local_f0;
      if (*(char *)(*(long *)(lVar20 + 8) + 0xa8) != '\0') {
        plVar15 = *(long **)(*(long *)(lVar20 + 8) + 0x48);
        (**(code **)(*plVar15 + 0x20))(plVar15,&local_d0);
        param_3 = extraout_x1_03;
      }
      *(undefined1 *)(lVar20 + 0x20) = 1;
    }
  }
  cVar6 = *(char *)(param_2 + 0xaa4);
  if (*(long *)(param_2 + 0x9d0) == 0) {
    if ((DAT_710532a9e0 & 1) == 0) {
      iVar14 = __cxa_guard_acquire(&DAT_710532a9e0);
      auVar47._8_8_ = extraout_x1_31;
      auVar47._0_8_ = &DAT_710532a9f0;
      if (iVar14 != 0) {
        DAT_710532a9f8 = 0;
        DAT_710532a9f0 = 0x3f800000;
        DAT_710532aa08 = 0;
        DAT_710532aa00 = 0x3f80000000000000;
        DAT_710532aa28 = DAT_710446a350._8_8_;
        DAT_710532aa20 = DAT_710446a350;
        DAT_710532aa10 = uVar18;
        DAT_710532aa18 = uVar32;
        __cxa_guard_release(&DAT_710532a9e0);
        auVar47._8_8_ = extraout_x1_32;
        auVar47._0_8_ = &DAT_710532a9f0;
      }
    }
    else {
      auVar47._8_8_ = param_3;
      auVar47._0_8_ = &DAT_710532a9f0;
    }
  }
  else {
    auVar47 = (**(code **)(**(long **)(*(long *)(param_2 + 0x9d0) + 0x90) + 0x158))();
  }
  uVar17 = auVar47._8_8_;
  fVar45 = (float)*(undefined8 *)(param_2 + 0xa58);
  fVar35 = (float)((ulong)*(undefined8 *)(param_2 + 0xa58) >> 0x20);
  fVar34 = (float)*(undefined8 *)(param_2 + 0xa50);
  fVar41 = (float)((ulong)*(undefined8 *)(param_2 + 0xa50) >> 0x20);
  fVar39 = *(float *)(param_2 + 0xaa0) + *(float *)(auVar47._0_8_ + 0x34);
  if (fVar41 < fVar39) {
LAB_710296a154:
    auVar10._4_4_ = fVar41;
    auVar10._0_4_ = fVar34;
    auVar10._8_4_ = fVar45;
    auVar10._12_4_ = fVar35;
    auVar11._4_4_ = fVar41;
    auVar11._0_4_ = fVar34;
    auVar11._8_4_ = fVar45;
    auVar11._12_4_ = fVar35;
    auVar36 = NEON_ext(auVar10,auVar11,8,1);
    uVar26 = (ulong)auVar36._0_4_;
    *(undefined1 *)(param_2 + 0xaa4) = 1;
    if (cVar6 == '\0') {
      param_4 = (char *)0x1b0dc4e36e;
      FUN_7102626be0(&local_d0,*(ulong **)(*(long *)(param_2 + 0xb98) + 800),(long ****)0x1b0dc4e36e
                     ,(byte ****)param_5,(long ****)param_6,param_7,param_8,param_9);
      ppplVar1 = (long ***)(param_2 + 0xaa8);
      if ((ppplVar1 == &local_d0) || (lVar20 = *(long *)(param_2 + 0xab8), lVar20 == local_c0)) {
joined_r0x00710296a360:
        if (local_c0 != 0) {
          *plStack_c8 = (long)local_d0;
          local_d0[1] = plStack_c8;
          *(long *)(local_c0 + 0x10) = *(long *)(local_c0 + 0x10) + -1;
          plStack_c8 = (long *)0x0;
          local_c0 = 0;
          local_d0 = (long **)0x0;
        }
      }
      else {
        if (local_c0 != 0) {
          if (lVar20 != 0) {
            pplVar27 = *ppplVar1;
            plVar15 = *(long **)(param_2 + 0xab0);
            *plVar15 = (long)pplVar27;
            pplVar27[1] = plVar15;
            *(long *)(lVar20 + 0x10) = *(long *)(lVar20 + 0x10) + -1;
            *(undefined8 *)(param_2 + 0xab0) = 0;
            *(undefined8 *)(param_2 + 0xab8) = 0;
            *ppplVar1 = (long **)0x0;
          }
          puVar23 = *(undefined8 **)(local_c0 + 0x20);
          *(long *)(param_2 + 0xaa8) = local_c0 + 0x18;
          *(undefined8 **)(param_2 + 0xab0) = puVar23;
          *(long ****)(local_c0 + 0x20) = ppplVar1;
          *puVar23 = ppplVar1;
          *(long *)(local_c0 + 0x10) = *(long *)(local_c0 + 0x10) + 1;
          *(long *)(param_2 + 0xab8) = local_c0;
          goto joined_r0x00710296a360;
        }
        if (lVar20 == 0) goto joined_r0x00710296a360;
        lVar24 = *(long *)(param_2 + 0xaa8);
        plVar15 = *(long **)(param_2 + 0xab0);
        *plVar15 = lVar24;
        *(long **)(lVar24 + 8) = plVar15;
        *(long *)(lVar20 + 0x10) = *(long *)(lVar20 + 0x10) + -1;
        *(undefined8 *)(param_2 + 0xab0) = 0;
        *(undefined8 *)(param_2 + 0xab8) = 0;
        *ppplVar1 = (long **)0x0;
      }
      lVar20 = *(long *)(param_2 + 0xab8);
      uVar17 = extraout_x1_04;
      if (lVar20 != 0) {
        *(ulong *)(lVar20 + 0x58) = uVar26;
        *(ulong *)(lVar20 + 0x50) = CONCAT44(fVar41,fVar34);
        if (*(char *)(lVar20 + 0x35) == '\0') {
          *(ulong *)(lVar20 + 0x48) = *(ulong *)(lVar20 + 0x48) | 1;
          lVar20 = *(long *)(param_2 + 0xab8);
        }
        else {
          uVar13 = *(uint *)(lVar20 + 0x3c);
          if (0 < (int)uVar13) {
            lVar24 = *lib::Singleton<lib::EffectManager>::instance_;
            uVar25 = (ulong)(uVar13 >> 0x18);
            lVar28 = lVar24 + uVar25 * 0x300;
            if ((lVar28 != 0) && (*(uint *)(lVar28 + 4) == uVar13)) {
              if (*(char *)(lVar24 + uVar25 * 0x300 + 0x2d6) == '\0') {
                lVar20 = lVar24 + uVar25 * 0x300;
                *(undefined1 *)(lVar20 + 0x2da) = 1;
                *(ulong *)(lVar20 + 0x128) = uVar26;
                *(ulong *)(lVar20 + 0x120) = CONCAT44(fVar41,fVar34);
              }
              else {
                lVar28 = lVar24 + uVar25 * 0x300;
                uVar31 = *(undefined4 *)(lVar28 + 0xf8);
                uVar33 = *(undefined4 *)(lVar28 + 0xfc);
                *(undefined4 *)(lVar28 + 0xf8) = uVar31;
                *(undefined4 *)(lVar28 + 0xfc) = uVar33;
                *(float *)(lVar28 + 0xf0) = fVar34;
                *(undefined4 *)(lVar28 + 0xf4) = *(undefined4 *)(lVar28 + 0xf4);
                uVar37 = *(undefined4 *)(lVar20 + 0x54);
                *(undefined4 *)(lVar28 + 0xf8) = uVar31;
                *(undefined4 *)(lVar28 + 0xfc) = uVar33;
                *(float *)(lVar28 + 0xf0) = fVar34;
                *(undefined4 *)(lVar28 + 0xf4) = uVar37;
                *(undefined4 *)(lVar28 + 0xf8) = *(undefined4 *)(lVar20 + 0x58);
                *(undefined4 *)(lVar28 + 0xfc) = uVar33;
                *(float *)(lVar28 + 0xf0) = fVar34;
                *(undefined4 *)(lVar28 + 0xf4) = uVar37;
              }
              if (*(long *)(lVar24 + uVar25 * 0x300 + 0x58) == 0) {
                lVar24 = lVar24 + uVar25 * 0x300;
                *(undefined8 *)(lVar24 + 0x130) = 0;
                *(undefined8 *)(lVar24 + 0x138) = 0;
              }
            }
          }
          lVar20 = *(long *)(param_2 + 0xab8);
        }
                    /* WARNING: Read-only address (ram,0x0071044656b0) is written */
                    /* WARNING: Read-only address (ram,0x00710446a350) is written */
        if ((lVar20 != 0) && (*(char *)(lVar20 + 0x35) == '\0')) {
          *(undefined1 *)(lVar20 + 0x35) = 1;
          uVar13 = 0x1800000;
          *(undefined4 *)(lVar20 + 0x38) = 0;
          param_5 = (undefined1 (*) [16])(lVar20 + 0x50);
          param_6 = (undefined1 (*) [16])(lVar20 + 0x60);
          param_7 = (undefined1 (*) [16])(lVar20 + 0x70);
          param_9 = 0xffffffff;
          if (*(char *)(lVar20 + 0xb8) == '\0') {
            uVar13 = 0x1800001;
          }
          param_4 = (char *)(ulong)uVar13;
          param_8 = 0;
          uVar13 = FUN_7103563430(*lib::Singleton<lib::EffectManager>::instance_,
                                  *(ulong *)(lVar20 + 0x40),uVar13,param_5,param_6,param_7,0,-1,0);
          *(uint *)(lVar20 + 0x3c) = uVar13;
          FUN_71025ef570(lVar20);
          *(bool *)(lVar20 + 0x34) = *(int *)(lVar20 + 0x3c) != 0;
          uVar17 = extraout_x1_06;
        }
      }
    }
    else {
      lVar20 = *(long *)(param_2 + 0xab8);
      if (lVar20 != 0) {
        *(ulong *)(lVar20 + 0x58) = uVar26;
        *(ulong *)(lVar20 + 0x50) = CONCAT44(fVar41,fVar34);
        if (*(char *)(lVar20 + 0x35) == '\0') {
          *(ulong *)(lVar20 + 0x48) = *(ulong *)(lVar20 + 0x48) | 1;
        }
        else {
          uVar13 = *(uint *)(lVar20 + 0x3c);
          if (0 < (int)uVar13) {
            lVar24 = *lib::Singleton<lib::EffectManager>::instance_;
            uVar25 = (ulong)(uVar13 >> 0x18);
            lVar28 = lVar24 + uVar25 * 0x300;
            if ((lVar28 != 0) && (*(uint *)(lVar28 + 4) == uVar13)) {
              if (*(char *)(lVar24 + uVar25 * 0x300 + 0x2d6) == '\0') {
                lVar20 = lVar24 + uVar25 * 0x300;
                *(undefined1 *)(lVar20 + 0x2da) = 1;
                *(ulong *)(lVar20 + 0x128) = uVar26;
                *(ulong *)(lVar20 + 0x120) = CONCAT44(fVar41,fVar34);
              }
              else {
                lVar28 = lVar24 + uVar25 * 0x300;
                uVar31 = *(undefined4 *)(lVar28 + 0xf8);
                uVar33 = *(undefined4 *)(lVar28 + 0xfc);
                *(undefined4 *)(lVar28 + 0xf8) = uVar31;
                *(undefined4 *)(lVar28 + 0xfc) = uVar33;
                *(float *)(lVar28 + 0xf0) = fVar34;
                *(undefined4 *)(lVar28 + 0xf4) = *(undefined4 *)(lVar28 + 0xf4);
                uVar37 = *(undefined4 *)(lVar20 + 0x54);
                *(undefined4 *)(lVar28 + 0xf8) = uVar31;
                *(undefined4 *)(lVar28 + 0xfc) = uVar33;
                *(float *)(lVar28 + 0xf0) = fVar34;
                *(undefined4 *)(lVar28 + 0xf4) = uVar37;
                *(undefined4 *)(lVar28 + 0xf8) = *(undefined4 *)(lVar20 + 0x58);
                *(undefined4 *)(lVar28 + 0xfc) = uVar33;
                *(float *)(lVar28 + 0xf0) = fVar34;
                *(undefined4 *)(lVar28 + 0xf4) = uVar37;
              }
              if (*(long *)(lVar24 + uVar25 * 0x300 + 0x58) == 0) {
                lVar24 = lVar24 + uVar25 * 0x300;
                *(undefined8 *)(lVar24 + 0x130) = 0;
                *(undefined8 *)(lVar24 + 0x138) = 0;
              }
            }
          }
        }
      }
    }
  }
  else {
    fVar40 = *(float *)(param_2 + 0xa60);
    fVar43 = *(float *)(param_2 + 0xa64);
    fVar44 = *(float *)(param_2 + 0xa68);
    fVar38 = *(float *)(param_2 + 0xa6c);
    if (fVar43 < fVar39) {
LAB_710296a12c:
      fVar39 = (fVar39 - fVar41) / (fVar43 - fVar41);
      fVar34 = fVar34 + (fVar40 - fVar34) * fVar39;
      fVar41 = fVar41 + (fVar43 - fVar41) * fVar39;
      fVar45 = fVar45 + (fVar44 - fVar45) * fVar39;
      fVar35 = fVar35 + (fVar38 - fVar35) * 0.0;
      goto LAB_710296a154;
    }
    fVar34 = fVar40;
    fVar41 = fVar43;
    fVar45 = fVar44;
    fVar35 = fVar38;
    fVar40 = *(float *)(param_2 + 0xa70);
    fVar43 = *(float *)(param_2 + 0xa74);
    fVar44 = *(float *)(param_2 + 0xa78);
    fVar38 = *(float *)(param_2 + 0xa7c);
    if ((float)((ulong)*(undefined8 *)(param_2 + 0xa70) >> 0x20) < fVar39) goto LAB_710296a12c;
    lVar20 = *(long *)(param_2 + 0xab8);
    *(undefined1 *)(param_2 + 0xaa4) = 0;
    if (lVar20 != 0) {
      if (*(char *)(lVar20 + 0x35) != '\0') {
        uVar13 = *(uint *)(lVar20 + 0x3c);
        lVar20 = *lib::Singleton<lib::EffectManager>::instance_;
        std::mutex::lock();
        if (((0 < (int)uVar13) && (lVar20 = lVar20 + (ulong)(uVar13 >> 0x18) * 0x300, lVar20 != 0))
           && (*(uint *)(lVar20 + 4) == uVar13)) {
          param_4 = (char *)0x0;
          param_5 = (undefined1 (*) [16])0x0;
          FUN_71035707d0(lVar20,0,(long ****)0x0,0,(long ****)param_6,param_7,param_8,param_9);
        }
        std::mutex::unlock();
        lVar20 = *(long *)(param_2 + 0xab8);
        uVar17 = extraout_x1_05;
        if (lVar20 == 0) goto LAB_710296a54c;
      }
      lVar24 = *(long *)(param_2 + 0xaa8);
      plVar15 = *(long **)(param_2 + 0xab0);
      *plVar15 = lVar24;
      *(long **)(lVar24 + 8) = plVar15;
      *(long *)(lVar20 + 0x10) = *(long *)(lVar20 + 0x10) + -1;
      *(undefined8 *)(param_2 + 0xaa8) = 0;
      *(undefined8 *)(param_2 + 0xab0) = 0;
      *(undefined8 *)(param_2 + 0xab8) = 0;
    }
  }
LAB_710296a54c:
  cVar6 = *(char *)(param_2 + 0xaa5);
  if (*(long *)(param_2 + 0x9d0) == 0) {
    if ((DAT_710532a9e0 & 1) == 0) {
      iVar14 = __cxa_guard_acquire(&DAT_710532a9e0);
      auVar48._8_8_ = extraout_x1_33;
      auVar48._0_8_ = &DAT_710532a9f0;
      if (iVar14 != 0) {
        DAT_710532a9f8 = 0;
        DAT_710532a9f0 = 0x3f800000;
        DAT_710532aa08 = 0;
        DAT_710532aa00 = 0x3f80000000000000;
        DAT_710532aa28 = DAT_710446a350._8_8_;
        DAT_710532aa20 = DAT_710446a350;
        DAT_710532aa10 = uVar18;
        DAT_710532aa18 = uVar32;
        __cxa_guard_release(&DAT_710532a9e0);
        auVar48._8_8_ = extraout_x1_34;
        auVar48._0_8_ = &DAT_710532a9f0;
      }
    }
    else {
      auVar48._8_8_ = uVar17;
      auVar48._0_8_ = &DAT_710532a9f0;
    }
  }
  else {
    auVar48 = (**(code **)(**(long **)(*(long *)(param_2 + 0x9d0) + 0x90) + 0x158))();
  }
  uVar17 = auVar48._8_8_;
  fVar34 = *(float *)(param_2 + 0xaa0) + *(float *)(auVar48._0_8_ + 0x34);
  fVar35 = (float)*(undefined8 *)(param_2 + 0xa88);
  fVar39 = (float)((ulong)*(undefined8 *)(param_2 + 0xa88) >> 0x20);
  fVar41 = (float)*(undefined8 *)(param_2 + 0xa80);
  fVar45 = (float)((ulong)*(undefined8 *)(param_2 + 0xa80) >> 0x20);
  if (fVar45 < fVar34) {
LAB_710296a5dc:
    auVar8._4_4_ = fVar45;
    auVar8._0_4_ = fVar41;
    auVar8._8_4_ = fVar35;
    auVar8._12_4_ = fVar39;
    auVar9._4_4_ = fVar45;
    auVar9._0_4_ = fVar41;
    auVar9._8_4_ = fVar35;
    auVar9._12_4_ = fVar39;
    auVar36 = NEON_ext(auVar8,auVar9,8,1);
    uVar26 = (ulong)auVar36._0_4_;
    *(undefined1 *)(param_2 + 0xaa5) = 1;
    if (cVar6 == '\0') {
      param_4 = (char *)0x16106b0435;
      FUN_7102626be0(&local_d0,*(ulong **)(*(long *)(param_2 + 0xb98) + 800),(long ****)0x16106b0435
                     ,(byte ****)param_5,(long ****)param_6,param_7,param_8,param_9);
      ppplVar1 = (long ***)(param_2 + 0xac0);
      if ((ppplVar1 == &local_d0) || (lVar20 = *(long *)(param_2 + 0xad0), lVar20 == local_c0)) {
joined_r0x00710296a808:
        if (local_c0 != 0) {
          *plStack_c8 = (long)local_d0;
          local_d0[1] = plStack_c8;
          *(long *)(local_c0 + 0x10) = *(long *)(local_c0 + 0x10) + -1;
          plStack_c8 = (long *)0x0;
          local_c0 = 0;
          local_d0 = (long **)0x0;
        }
      }
      else {
        if (local_c0 != 0) {
          if (lVar20 != 0) {
            pplVar27 = *ppplVar1;
            plVar15 = *(long **)(param_2 + 0xac8);
            *plVar15 = (long)pplVar27;
            pplVar27[1] = plVar15;
            *(long *)(lVar20 + 0x10) = *(long *)(lVar20 + 0x10) + -1;
            *(undefined8 *)(param_2 + 0xac8) = 0;
            *(undefined8 *)(param_2 + 0xad0) = 0;
            *ppplVar1 = (long **)0x0;
          }
          puVar23 = *(undefined8 **)(local_c0 + 0x20);
          *(long *)(param_2 + 0xac0) = local_c0 + 0x18;
          *(undefined8 **)(param_2 + 0xac8) = puVar23;
          *(long ****)(local_c0 + 0x20) = ppplVar1;
          *puVar23 = ppplVar1;
          *(long *)(local_c0 + 0x10) = *(long *)(local_c0 + 0x10) + 1;
          *(long *)(param_2 + 0xad0) = local_c0;
          goto joined_r0x00710296a808;
        }
        if (lVar20 == 0) goto joined_r0x00710296a808;
        lVar24 = *(long *)(param_2 + 0xac0);
        plVar15 = *(long **)(param_2 + 0xac8);
        *plVar15 = lVar24;
        *(long **)(lVar24 + 8) = plVar15;
        *(long *)(lVar20 + 0x10) = *(long *)(lVar20 + 0x10) + -1;
        *(undefined8 *)(param_2 + 0xac8) = 0;
        *(undefined8 *)(param_2 + 0xad0) = 0;
        *ppplVar1 = (long **)0x0;
      }
      lVar20 = *(long *)(param_2 + 0xad0);
      uVar17 = extraout_x1_07;
      if (lVar20 != 0) {
        *(ulong *)(lVar20 + 0x58) = uVar26;
        *(ulong *)(lVar20 + 0x50) = CONCAT44(fVar45,fVar41);
        if (*(char *)(lVar20 + 0x35) == '\0') {
          *(ulong *)(lVar20 + 0x48) = *(ulong *)(lVar20 + 0x48) | 1;
          lVar20 = *(long *)(param_2 + 0xad0);
        }
        else {
          uVar13 = *(uint *)(lVar20 + 0x3c);
          if (0 < (int)uVar13) {
            lVar24 = *lib::Singleton<lib::EffectManager>::instance_;
            uVar25 = (ulong)(uVar13 >> 0x18);
            lVar28 = lVar24 + uVar25 * 0x300;
            if ((lVar28 != 0) && (*(uint *)(lVar28 + 4) == uVar13)) {
              if (*(char *)(lVar24 + uVar25 * 0x300 + 0x2d6) == '\0') {
                lVar20 = lVar24 + uVar25 * 0x300;
                *(undefined1 *)(lVar20 + 0x2da) = 1;
                *(ulong *)(lVar20 + 0x128) = uVar26;
                *(ulong *)(lVar20 + 0x120) = CONCAT44(fVar45,fVar41);
              }
              else {
                lVar28 = lVar24 + uVar25 * 0x300;
                uVar31 = *(undefined4 *)(lVar28 + 0xf8);
                uVar33 = *(undefined4 *)(lVar28 + 0xfc);
                *(undefined4 *)(lVar28 + 0xf8) = uVar31;
                *(undefined4 *)(lVar28 + 0xfc) = uVar33;
                *(float *)(lVar28 + 0xf0) = fVar41;
                *(undefined4 *)(lVar28 + 0xf4) = *(undefined4 *)(lVar28 + 0xf4);
                uVar37 = *(undefined4 *)(lVar20 + 0x54);
                *(undefined4 *)(lVar28 + 0xf8) = uVar31;
                *(undefined4 *)(lVar28 + 0xfc) = uVar33;
                *(float *)(lVar28 + 0xf0) = fVar41;
                *(undefined4 *)(lVar28 + 0xf4) = uVar37;
                *(undefined4 *)(lVar28 + 0xf8) = *(undefined4 *)(lVar20 + 0x58);
                *(undefined4 *)(lVar28 + 0xfc) = uVar33;
                *(float *)(lVar28 + 0xf0) = fVar41;
                *(undefined4 *)(lVar28 + 0xf4) = uVar37;
              }
              if (*(long *)(lVar24 + uVar25 * 0x300 + 0x58) == 0) {
                lVar24 = lVar24 + uVar25 * 0x300;
                *(undefined8 *)(lVar24 + 0x130) = 0;
                *(undefined8 *)(lVar24 + 0x138) = 0;
              }
            }
          }
          lVar20 = *(long *)(param_2 + 0xad0);
        }
                    /* WARNING: Read-only address (ram,0x0071044656b0) is written */
                    /* WARNING: Read-only address (ram,0x00710446a350) is written */
        if ((lVar20 != 0) && (*(char *)(lVar20 + 0x35) == '\0')) {
          *(undefined1 *)(lVar20 + 0x35) = 1;
          uVar13 = 0x1800000;
          *(undefined4 *)(lVar20 + 0x38) = 0;
          param_5 = (undefined1 (*) [16])(lVar20 + 0x50);
          param_6 = (undefined1 (*) [16])(lVar20 + 0x60);
          param_7 = (undefined1 (*) [16])(lVar20 + 0x70);
          param_9 = 0xffffffff;
          if (*(char *)(lVar20 + 0xb8) == '\0') {
            uVar13 = 0x1800001;
          }
          param_4 = (char *)(ulong)uVar13;
          param_8 = 0;
          uVar13 = FUN_7103563430(*lib::Singleton<lib::EffectManager>::instance_,
                                  *(ulong *)(lVar20 + 0x40),uVar13,param_5,param_6,param_7,0,-1,0);
          *(uint *)(lVar20 + 0x3c) = uVar13;
          FUN_71025ef570(lVar20);
          *(bool *)(lVar20 + 0x34) = *(int *)(lVar20 + 0x3c) != 0;
          uVar17 = extraout_x1_09;
        }
      }
      plVar15 = *(long **)(**(long **)(param_2 + 0x9c8) + 8);
      if (plVar15 != (long *)0x0) {
        pcVar22 = *(code **)(*plVar15 + 0x58);
        uVar17 = 9;
        goto LAB_710296aa14;
      }
    }
    else {
      lVar20 = *(long *)(param_2 + 0xad0);
      if (lVar20 != 0) {
        *(ulong *)(lVar20 + 0x58) = uVar26;
        *(ulong *)(lVar20 + 0x50) = CONCAT44(fVar45,fVar41);
        if (*(char *)(lVar20 + 0x35) == '\0') {
          *(ulong *)(lVar20 + 0x48) = *(ulong *)(lVar20 + 0x48) | 1;
        }
        else {
          uVar13 = *(uint *)(lVar20 + 0x3c);
          if (0 < (int)uVar13) {
            lVar24 = *lib::Singleton<lib::EffectManager>::instance_;
            uVar25 = (ulong)(uVar13 >> 0x18);
            lVar28 = lVar24 + uVar25 * 0x300;
            if ((lVar28 != 0) && (*(uint *)(lVar28 + 4) == uVar13)) {
              if (*(char *)(lVar24 + uVar25 * 0x300 + 0x2d6) == '\0') {
                lVar20 = lVar24 + uVar25 * 0x300;
                *(undefined1 *)(lVar20 + 0x2da) = 1;
                *(ulong *)(lVar20 + 0x128) = uVar26;
                *(ulong *)(lVar20 + 0x120) = CONCAT44(fVar45,fVar41);
              }
              else {
                lVar28 = lVar24 + uVar25 * 0x300;
                uVar31 = *(undefined4 *)(lVar28 + 0xf8);
                uVar33 = *(undefined4 *)(lVar28 + 0xfc);
                *(undefined4 *)(lVar28 + 0xf8) = uVar31;
                *(undefined4 *)(lVar28 + 0xfc) = uVar33;
                *(float *)(lVar28 + 0xf0) = fVar41;
                *(undefined4 *)(lVar28 + 0xf4) = *(undefined4 *)(lVar28 + 0xf4);
                uVar37 = *(undefined4 *)(lVar20 + 0x54);
                *(undefined4 *)(lVar28 + 0xf8) = uVar31;
                *(undefined4 *)(lVar28 + 0xfc) = uVar33;
                *(float *)(lVar28 + 0xf0) = fVar41;
                *(undefined4 *)(lVar28 + 0xf4) = uVar37;
                *(undefined4 *)(lVar28 + 0xf8) = *(undefined4 *)(lVar20 + 0x58);
                *(undefined4 *)(lVar28 + 0xfc) = uVar33;
                *(float *)(lVar28 + 0xf0) = fVar41;
                *(undefined4 *)(lVar28 + 0xf4) = uVar37;
              }
              if (*(long *)(lVar24 + uVar25 * 0x300 + 0x58) == 0) {
                lVar24 = lVar24 + uVar25 * 0x300;
                *(undefined8 *)(lVar24 + 0x130) = 0;
                *(undefined8 *)(lVar24 + 0x138) = 0;
              }
            }
          }
        }
      }
    }
  }
  else {
    fVar40 = (float)((ulong)*(undefined8 *)(param_2 + 0xa90) >> 0x20);
    if (fVar40 < fVar34) {
      fVar40 = fVar40 - fVar45;
      fVar34 = (fVar34 - fVar45) / fVar40;
      fVar41 = fVar41 + ((float)*(undefined8 *)(param_2 + 0xa90) - fVar41) * fVar34;
      fVar45 = fVar45 + fVar40 * fVar34;
      fVar35 = fVar35 + ((float)*(undefined8 *)(param_2 + 0xa98) - fVar35) * fVar34;
      fVar39 = fVar39 + ((float)((ulong)*(undefined8 *)(param_2 + 0xa98) >> 0x20) - fVar39) * 0.0;
      goto LAB_710296a5dc;
    }
    lVar20 = *(long *)(param_2 + 0xad0);
    *(undefined1 *)(param_2 + 0xaa5) = 0;
    if (lVar20 == 0) goto LAB_710296aa18;
    if (*(char *)(lVar20 + 0x35) == '\0') {
LAB_710296a7a4:
      lVar24 = *(long *)(param_2 + 0xac0);
      plVar15 = *(long **)(param_2 + 0xac8);
      *plVar15 = lVar24;
      *(long **)(lVar24 + 8) = plVar15;
      *(long *)(lVar20 + 0x10) = *(long *)(lVar20 + 0x10) + -1;
      *(undefined8 *)(param_2 + 0xac0) = 0;
      *(undefined8 *)(param_2 + 0xac8) = 0;
      *(undefined8 *)(param_2 + 0xad0) = 0;
    }
    else {
      uVar13 = *(uint *)(lVar20 + 0x3c);
      lVar20 = *lib::Singleton<lib::EffectManager>::instance_;
      std::mutex::lock();
      if (((0 < (int)uVar13) && (lVar20 = lVar20 + (ulong)(uVar13 >> 0x18) * 0x300, lVar20 != 0)) &&
         (*(uint *)(lVar20 + 4) == uVar13)) {
        param_4 = (char *)0x0;
        param_5 = (undefined1 (*) [16])0x0;
        FUN_71035707d0(lVar20,0,(long ****)0x0,0,(long ****)param_6,param_7,param_8,param_9);
      }
      std::mutex::unlock();
      lVar20 = *(long *)(param_2 + 0xad0);
      uVar17 = extraout_x1_08;
      if (lVar20 != 0) goto LAB_710296a7a4;
    }
    plVar15 = *(long **)(**(long **)(param_2 + 0x9c8) + 8);
    if (plVar15 == (long *)0x0) goto LAB_710296aa18;
    pcVar22 = *(code **)(*plVar15 + 0x58);
    uVar17 = 8;
LAB_710296aa14:
    param_4 = &DAT_ffffffff;
    (*pcVar22)(plVar15,uVar17);
    uVar17 = extraout_x1_10;
  }
LAB_710296aa18:
  if (*(float *)(param_2 + 0x978) <= 10.0) goto LAB_710296bfd4;
  if ((*(int *)(param_2 + 0xb70) == 0) &&
     (lVar20 = *(long *)(param_2 + 0xb20), *(long *)(lVar20 + 0x38) != 0)) {
    if (((DAT_71053144d8 & 1) == 0) &&
       (iVar14 = __cxa_guard_acquire(&DAT_71053144d8), uVar17 = extraout_x1_35, iVar14 != 0)) {
      FUN_7101764000();
      ppuVar19 = &PTR_LOOP_7104f17000;
      FUN_71000001c0();
      __cxa_guard_release(&DAT_71053144d8);
      uVar17 = extraout_x1_36;
      param_4 = (char *)ppuVar19;
    }
    if ((DAT_71052c518a == '\0') &&
       (plVar15 = *(long **)(*(long *)(lVar20 + 0x38) + 0x130),
       fVar34 = (float)(**(code **)(*plVar15 + 0xb0))(plVar15,0), uVar17 = extraout_x1_11,
       0.0 < fVar34)) {
      fVar34 = *(float *)(param_2 + 0xb28) - fVar34;
      *(float *)(param_2 + 0xb28) = fVar34;
      if (fVar34 <= 0.0) {
        *(undefined4 *)(param_2 + 0xb70) = 5;
        lVar20 = *(long *)(param_2 + 0x9e0);
        if (lVar20 != 0) {
          if (*(char *)(lVar20 + 0xe0) != '\0') {
            (**(code **)(**(long **)(lVar20 + 0x90) + 0x180))
                      (*(long **)(lVar20 + 0x90),0xaedc69cc9,0);
            lVar20 = *(long *)(param_2 + 0x9e0);
            if (lVar20 == 0) goto LAB_710296b624;
          }
          if (*(char *)(lVar20 + 0xe0) != '\0') {
            (**(code **)(**(long **)(lVar20 + 0x90) + 0x180))
                      (*(long **)(lVar20 + 0x90),0x93e43754b,1);
          }
        }
LAB_710296b624:
        puVar23 = *(undefined8 **)(*(long *)(param_2 + 0xb20) + 0x100);
        param_4 = (char *)0x1;
        FUN_71025f4d80((long *)*puVar23,(long *)puVar23[1],1);
        lVar20 = **(long **)(param_2 + 0x9c8);
        uVar17 = extraout_x1_21;
        if (*(long *)(lVar20 + 8) != 0) {
          param_4 = (char *)0x1;
          local_d0 = (long **)0x0;
          uVar13 = FUN_7102405040(*(long *)(lVar20 + 8),&local_d0,1,(byte ****)param_5,
                                  (long ****)param_6,param_7,param_8,param_9);
          uVar17 = extraout_x1_22;
          if (uVar13 != 0xffffffff) {
            param_4 = (char *)(ulong)uVar13;
            if (uVar13 < 0x19) {
              plVar15 = *(long **)(*(long *)(lVar20 + 8) + (long)(int)uVar13 * 0x50 + 0x68);
              if (((*plVar15 != 0) && ((int)plVar15[1] != -1)) &&
                 ((int)plVar15[1] == *(int *)(*plVar15 + 0x20))) {
                FUN_7103736cf0(plVar15,(undefined1 (*) [12])(param_2 + 0xa30));
              }
            }
            (**(code **)(**(long **)(lVar20 + 8) + 0x58))(*(long **)(lVar20 + 8),0xb);
            uVar17 = extraout_x1_23;
          }
        }
        if (*(long *)(**(long **)(*(long *)(*lib::Singleton<app::StageManager>::instance_ + 0x1c0) +
                                 0xb0) + 0x20) ==
            *(long *)(*(long *)(*(long *)(param_2 + 0xb98) + 0x308) + 8)) {
          local_d0 = _ConstantZero;
          plStack_c8 = _DAT_7107521008;
          param_4 = (char *)&local_d0;
          FUN_71005162f0(*DAT_71052b8f00 + 0x2b0,5,(undefined1 (*) [16])param_4);
          uVar17 = extraout_x1_24;
        }
      }
      else {
        lVar20 = **(long **)(param_2 + 0x9c8);
        if (*(long *)(lVar20 + 8) != 0) {
          param_4 = (char *)0x1;
          local_d0 = (long **)0x0;
          uVar13 = FUN_7102405040(*(long *)(lVar20 + 8),&local_d0,1,(byte ****)param_5,
                                  (long ****)param_6,param_7,param_8,param_9);
          uVar17 = extraout_x1_12;
          if (uVar13 != 0xffffffff) {
            param_4 = (char *)(ulong)uVar13;
            if (uVar13 < 0x19) {
              plVar15 = *(long **)(*(long *)(lVar20 + 8) + (long)(int)uVar13 * 0x50 + 0x68);
              if (((*plVar15 != 0) && ((int)plVar15[1] != -1)) &&
                 ((int)plVar15[1] == *(int *)(*plVar15 + 0x20))) {
                FUN_7103736cf0(plVar15,(undefined1 (*) [12])(param_2 + 0xa30));
              }
            }
            (**(code **)(**(long **)(lVar20 + 8) + 0x58))(*(long **)(lVar20 + 8),10);
            uVar17 = extraout_x1_13;
          }
        }
      }
    }
  }
  if (*(char *)(*(long *)(param_2 + 0xb98) + 0x18) != '\0') {
    *(float *)(param_2 + 0xb78) = *(float *)(param_2 + 0xb78) - fVar46;
  }
  switch(*(undefined4 *)(param_2 + 0xb70)) {
  case 0:
    if (*(float *)(param_2 + 0xb78) <= 0.0) {
      *(undefined4 *)(param_2 + 0xb70) = 1;
      puVar21 = *(uint **)(*(long *)(param_2 + 0xb98) + 0x340);
      uVar13 = *puVar21;
      *puVar21 = puVar21[1];
      uVar3 = puVar21[3];
      uVar13 = uVar13 ^ uVar13 << 0xb;
      uVar13 = uVar13 ^ uVar13 >> 8 ^ uVar3 ^ uVar3 >> 0x13;
      puVar21[1] = puVar21[2];
      puVar21[2] = uVar3;
      puVar21[3] = uVar13;
      lVar20 = *(long *)(param_2 + 0x9e8);
      fVar34 = (float)uVar13 * 2.3283064e-10;
      fVar41 = *(float *)(lVar20 + 0x4c);
      *(bool *)(param_2 + 0xb74) = fVar41 > fVar34 || fVar34 == fVar41;
      if (fVar41 <= fVar34 && fVar34 != fVar41) {
        *(undefined4 *)(param_2 + 0xb78) = *(undefined4 *)(lVar20 + 0x54);
        puVar21 = *(uint **)(*(long *)(param_2 + 0xb98) + 0x340);
        uVar5 = *(int *)(lVar20 + 0x5c) - *(int *)(lVar20 + 0x58);
        uVar13 = *puVar21;
        *puVar21 = puVar21[1];
        uVar3 = puVar21[3];
        uVar13 = uVar13 ^ uVar13 << 0xb;
        uVar13 = uVar13 ^ uVar13 >> 8 ^ uVar3 ^ uVar3 >> 0x13;
        puVar21[1] = puVar21[2];
        puVar21[2] = uVar3;
        puVar21[3] = uVar13;
        uVar3 = 0;
        if (uVar5 != 0) {
          uVar3 = uVar13 / uVar5;
        }
        *(uint *)(param_2 + 0xb7c) =
             *(int *)(*(long *)(param_2 + 0x9e8) + 0x58) + (uVar13 - uVar3 * uVar5);
        lVar20 = **(long **)(param_2 + 0x9c8);
        if (*(long *)(lVar20 + 8) != 0) {
          local_d0 = (long **)0x0;
          uVar13 = FUN_7102405040(*(long *)(lVar20 + 8),&local_d0,1,(byte ****)param_5,
                                  (long ****)param_6,param_7,param_8,param_9);
          if (uVar13 != 0xffffffff) {
            if (uVar13 < 0x19) {
              plVar15 = *(long **)(*(long *)(lVar20 + 8) + (long)(int)uVar13 * 0x50 + 0x68);
              if (((*plVar15 != 0) && ((int)plVar15[1] != -1)) &&
                 ((int)plVar15[1] == *(int *)(*plVar15 + 0x20))) {
                FUN_7103736cf0(plVar15,(undefined1 (*) [12])(param_2 + 0xa30));
              }
            }
            plVar15 = *(long **)(lVar20 + 8);
            pcVar22 = *(code **)(*plVar15 + 0x58);
            uVar18 = 7;
            goto LAB_710296b4dc;
          }
        }
      }
      else {
        uVar31 = *(undefined4 *)(lVar20 + 0x50);
        *(undefined4 *)(param_2 + 0xb7c) = 1;
        *(undefined4 *)(param_2 + 0xb78) = uVar31;
        lVar20 = **(long **)(param_2 + 0x9c8);
        if (*(long *)(lVar20 + 8) != 0) {
          local_d0 = (long **)0x0;
          uVar13 = FUN_7102405040(*(long *)(lVar20 + 8),&local_d0,1,(byte ****)param_5,
                                  (long ****)param_6,param_7,param_8,param_9);
          if (uVar13 != 0xffffffff) {
            if (uVar13 < 0x19) {
              plVar15 = *(long **)(*(long *)(lVar20 + 8) + (long)(int)uVar13 * 0x50 + 0x68);
              if (((*plVar15 != 0) && ((int)plVar15[1] != -1)) &&
                 ((int)plVar15[1] == *(int *)(*plVar15 + 0x20))) {
                FUN_7103736cf0(plVar15,(undefined1 (*) [12])(param_2 + 0xa30));
              }
            }
            plVar15 = *(long **)(lVar20 + 8);
            pcVar22 = *(code **)(*plVar15 + 0x58);
            uVar18 = 6;
LAB_710296b4dc:
            (*pcVar22)(plVar15,uVar18,uVar13);
          }
        }
      }
      param_4 = (char *)0x16ff38b4f1;
      FUN_7102626be0(&local_d0,*(ulong **)(*(long *)(param_2 + 0xb98) + 800),(long ****)0x16ff38b4f1
                     ,(byte ****)param_5,(long ****)param_6,param_7,param_8,param_9);
      ppplVar1 = (long ***)(param_2 + 0xb40);
      if ((ppplVar1 != &local_d0) && (lVar20 = *(long *)(param_2 + 0xb50), lVar20 != local_c0)) {
        if (local_c0 == 0) {
          if (lVar20 != 0) {
            lVar24 = *(long *)(param_2 + 0xb40);
            plVar15 = *(long **)(param_2 + 0xb48);
            *plVar15 = lVar24;
            *(long **)(lVar24 + 8) = plVar15;
            *(long *)(lVar20 + 0x10) = *(long *)(lVar20 + 0x10) + -1;
            *(undefined8 *)(param_2 + 0xb48) = 0;
            *(undefined8 *)(param_2 + 0xb50) = 0;
            *ppplVar1 = (long **)0x0;
          }
        }
        else {
          if (lVar20 != 0) {
            pplVar27 = *ppplVar1;
            plVar15 = *(long **)(param_2 + 0xb48);
            *plVar15 = (long)pplVar27;
            pplVar27[1] = plVar15;
            *(long *)(lVar20 + 0x10) = *(long *)(lVar20 + 0x10) + -1;
            *(undefined8 *)(param_2 + 0xb48) = 0;
            *(undefined8 *)(param_2 + 0xb50) = 0;
            *ppplVar1 = (long **)0x0;
          }
          puVar23 = *(undefined8 **)(local_c0 + 0x20);
          *(long *)(param_2 + 0xb40) = local_c0 + 0x18;
          *(undefined8 **)(param_2 + 0xb48) = puVar23;
          *(long ****)(local_c0 + 0x20) = ppplVar1;
          *puVar23 = ppplVar1;
          *(long *)(local_c0 + 0x10) = *(long *)(local_c0 + 0x10) + 1;
          *(long *)(param_2 + 0xb50) = local_c0;
        }
      }
      if (local_c0 != 0) {
        *plStack_c8 = (long)local_d0;
        local_d0[1] = plStack_c8;
        *(long *)(local_c0 + 0x10) = *(long *)(local_c0 + 0x10) + -1;
        plStack_c8 = (long *)0x0;
        local_c0 = 0;
        local_d0 = (long **)0x0;
      }
      lVar20 = *(long *)(param_2 + 0xb50);
      if (lVar20 != 0) {
        auVar36 = *(undefined1 (*) [16])(param_2 + 0xa30);
        auVar47 = NEON_ext(auVar36,auVar36,8,1);
        *(ulong *)(lVar20 + 0x58) = (ulong)auVar47._0_4_;
        *(long *)(lVar20 + 0x50) = auVar36._0_8_;
        if (*(char *)(lVar20 + 0x35) == '\0') {
          *(ulong *)(lVar20 + 0x48) = *(ulong *)(lVar20 + 0x48) | 1;
          lVar20 = *(long *)(param_2 + 0xb50);
        }
        else {
          uVar13 = *(uint *)(lVar20 + 0x3c);
          if (0 < (int)uVar13) {
            lVar24 = *lib::Singleton<lib::EffectManager>::instance_;
            uVar26 = (ulong)(uVar13 >> 0x18);
            lVar28 = lVar24 + uVar26 * 0x300;
            if ((lVar28 != 0) && (*(uint *)(lVar28 + 4) == uVar13)) {
              if (*(char *)(lVar24 + uVar26 * 0x300 + 0x2d6) == '\0') {
                lVar20 = lVar24 + uVar26 * 0x300;
                *(undefined1 *)(lVar20 + 0x2da) = 1;
                *(ulong *)(lVar20 + 0x128) = (ulong)auVar47._0_4_;
                *(long *)(lVar20 + 0x120) = auVar36._0_8_;
              }
              else {
                lVar28 = lVar24 + uVar26 * 0x300;
                uVar31 = *(undefined4 *)(lVar28 + 0xf8);
                uVar33 = *(undefined4 *)(lVar28 + 0xfc);
                uVar42 = auVar36._0_4_;
                *(undefined4 *)(lVar28 + 0xf8) = uVar31;
                *(undefined4 *)(lVar28 + 0xfc) = uVar33;
                *(undefined4 *)(lVar28 + 0xf0) = uVar42;
                *(undefined4 *)(lVar28 + 0xf4) = *(undefined4 *)(lVar28 + 0xf4);
                uVar37 = *(undefined4 *)(lVar20 + 0x54);
                *(undefined4 *)(lVar28 + 0xf8) = uVar31;
                *(undefined4 *)(lVar28 + 0xfc) = uVar33;
                *(undefined4 *)(lVar28 + 0xf0) = uVar42;
                *(undefined4 *)(lVar28 + 0xf4) = uVar37;
                *(undefined4 *)(lVar28 + 0xf8) = *(undefined4 *)(lVar20 + 0x58);
                *(undefined4 *)(lVar28 + 0xfc) = uVar33;
                *(undefined4 *)(lVar28 + 0xf0) = uVar42;
                *(undefined4 *)(lVar28 + 0xf4) = uVar37;
              }
              if (*(long *)(lVar24 + uVar26 * 0x300 + 0x58) == 0) {
                lVar24 = lVar24 + uVar26 * 0x300;
                *(undefined8 *)(lVar24 + 0x130) = 0;
                *(undefined8 *)(lVar24 + 0x138) = 0;
              }
            }
          }
          lVar20 = *(long *)(param_2 + 0xb50);
        }
        if ((lVar20 != 0) && (*(char *)(lVar20 + 0x35) == '\0')) {
          *(undefined1 *)(lVar20 + 0x35) = 1;
          uVar13 = 0x1800000;
          *(undefined4 *)(lVar20 + 0x38) = 0;
          param_5 = (undefined1 (*) [16])(lVar20 + 0x50);
          param_6 = (undefined1 (*) [16])(lVar20 + 0x60);
          param_7 = (undefined1 (*) [16])(lVar20 + 0x70);
          param_9 = 0xffffffff;
          if (*(char *)(lVar20 + 0xb8) == '\0') {
            uVar13 = 0x1800001;
          }
          param_8 = 0;
          uVar13 = FUN_7103563430(*lib::Singleton<lib::EffectManager>::instance_,
                                  *(ulong *)(lVar20 + 0x40),uVar13,param_5,param_6,param_7,0,-1,0);
          *(uint *)(lVar20 + 0x3c) = uVar13;
          FUN_71025ef570(lVar20);
          *(bool *)(lVar20 + 0x34) = *(int *)(lVar20 + 0x3c) != 0;
        }
      }
      FUN_7102626be0(&local_d0,*(ulong **)(*(long *)(param_2 + 0xb98) + 800),(long ****)0x16ff38b4f1
                     ,(byte ****)param_5,(long ****)param_6,param_7,param_8,param_9);
      ppplVar1 = (long ***)(param_2 + 0xb58);
      if ((ppplVar1 != &local_d0) && (lVar20 = *(long *)(param_2 + 0xb68), lVar20 != local_c0)) {
        if (local_c0 == 0) {
          if (lVar20 != 0) {
            lVar24 = *(long *)(param_2 + 0xb58);
            plVar15 = *(long **)(param_2 + 0xb60);
            *plVar15 = lVar24;
            *(long **)(lVar24 + 8) = plVar15;
            *(long *)(lVar20 + 0x10) = *(long *)(lVar20 + 0x10) + -1;
            *(undefined8 *)(param_2 + 0xb60) = 0;
            *(undefined8 *)(param_2 + 0xb68) = 0;
            *ppplVar1 = (long **)0x0;
          }
        }
        else {
          if (lVar20 != 0) {
            pplVar27 = *ppplVar1;
            plVar15 = *(long **)(param_2 + 0xb60);
            *plVar15 = (long)pplVar27;
            pplVar27[1] = plVar15;
            *(long *)(lVar20 + 0x10) = *(long *)(lVar20 + 0x10) + -1;
            *(undefined8 *)(param_2 + 0xb60) = 0;
            *(undefined8 *)(param_2 + 0xb68) = 0;
            *ppplVar1 = (long **)0x0;
          }
          puVar23 = *(undefined8 **)(local_c0 + 0x20);
          *(long *)(param_2 + 0xb58) = local_c0 + 0x18;
          *(undefined8 **)(param_2 + 0xb60) = puVar23;
          *(long ****)(local_c0 + 0x20) = ppplVar1;
          *puVar23 = ppplVar1;
          *(long *)(local_c0 + 0x10) = *(long *)(local_c0 + 0x10) + 1;
          *(long *)(param_2 + 0xb68) = local_c0;
        }
      }
      if (local_c0 != 0) {
        *plStack_c8 = (long)local_d0;
        local_d0[1] = plStack_c8;
        *(long *)(local_c0 + 0x10) = *(long *)(local_c0 + 0x10) + -1;
        plStack_c8 = (long *)0x0;
        local_c0 = 0;
        local_d0 = (long **)0x0;
      }
      lVar20 = *(long *)(param_2 + 0xb68);
      if (lVar20 != 0) {
        auVar36 = *(undefined1 (*) [16])(param_2 + 0xa40);
        auVar47 = NEON_ext(auVar36,auVar36,8,1);
        *(ulong *)(lVar20 + 0x58) = (ulong)auVar47._0_4_;
        *(long *)(lVar20 + 0x50) = auVar36._0_8_;
        if (*(char *)(lVar20 + 0x35) == '\0') {
          *(ulong *)(lVar20 + 0x48) = *(ulong *)(lVar20 + 0x48) | 1;
          lVar20 = *(long *)(param_2 + 0xb68);
        }
        else {
          uVar13 = *(uint *)(lVar20 + 0x3c);
          if (0 < (int)uVar13) {
            lVar24 = *lib::Singleton<lib::EffectManager>::instance_;
            uVar26 = (ulong)(uVar13 >> 0x18);
            lVar28 = lVar24 + uVar26 * 0x300;
            if ((lVar28 != 0) && (*(uint *)(lVar28 + 4) == uVar13)) {
              if (*(char *)(lVar24 + uVar26 * 0x300 + 0x2d6) == '\0') {
                lVar20 = lVar24 + uVar26 * 0x300;
                *(undefined1 *)(lVar20 + 0x2da) = 1;
                *(ulong *)(lVar20 + 0x128) = (ulong)auVar47._0_4_;
                *(long *)(lVar20 + 0x120) = auVar36._0_8_;
              }
              else {
                lVar28 = lVar24 + uVar26 * 0x300;
                uVar31 = *(undefined4 *)(lVar28 + 0xf8);
                uVar33 = *(undefined4 *)(lVar28 + 0xfc);
                uVar42 = auVar36._0_4_;
                *(undefined4 *)(lVar28 + 0xf8) = uVar31;
                *(undefined4 *)(lVar28 + 0xfc) = uVar33;
                *(undefined4 *)(lVar28 + 0xf0) = uVar42;
                *(undefined4 *)(lVar28 + 0xf4) = *(undefined4 *)(lVar28 + 0xf4);
                uVar37 = *(undefined4 *)(lVar20 + 0x54);
                *(undefined4 *)(lVar28 + 0xf8) = uVar31;
                *(undefined4 *)(lVar28 + 0xfc) = uVar33;
                *(undefined4 *)(lVar28 + 0xf0) = uVar42;
                *(undefined4 *)(lVar28 + 0xf4) = uVar37;
                *(undefined4 *)(lVar28 + 0xf8) = *(undefined4 *)(lVar20 + 0x58);
                *(undefined4 *)(lVar28 + 0xfc) = uVar33;
                *(undefined4 *)(lVar28 + 0xf0) = uVar42;
                *(undefined4 *)(lVar28 + 0xf4) = uVar37;
              }
              if (*(long *)(lVar24 + uVar26 * 0x300 + 0x58) == 0) {
                lVar24 = lVar24 + uVar26 * 0x300;
                *(undefined8 *)(lVar24 + 0x130) = 0;
                *(undefined8 *)(lVar24 + 0x138) = 0;
              }
            }
          }
          lVar20 = *(long *)(param_2 + 0xb68);
        }
        if ((lVar20 != 0) && (*(char *)(lVar20 + 0x35) == '\0')) {
          *(undefined1 *)(lVar20 + 0x35) = 1;
          uVar13 = 0x1800000;
          *(undefined4 *)(lVar20 + 0x38) = 0;
          param_5 = (undefined1 (*) [16])(lVar20 + 0x50);
          param_6 = (undefined1 (*) [16])(lVar20 + 0x60);
          param_7 = (undefined1 (*) [16])(lVar20 + 0x70);
          param_9 = 0xffffffff;
          if (*(char *)(lVar20 + 0xb8) == '\0') {
            uVar13 = 0x1800001;
          }
          param_4 = (char *)(ulong)uVar13;
          param_8 = 0;
          uVar13 = FUN_7103563430(*lib::Singleton<lib::EffectManager>::instance_,
                                  *(ulong *)(lVar20 + 0x40),uVar13,param_5,param_6,param_7,0,-1,0);
          *(uint *)(lVar20 + 0x3c) = uVar13;
          FUN_71025ef570(lVar20);
          *(bool *)(lVar20 + 0x34) = *(int *)(lVar20 + 0x3c) != 0;
        }
      }
      plVar15 = *(long **)(param_2 + 0xb30);
LAB_710296bfc4:
      FUN_710313ef20(plVar15);
      uVar17 = extraout_x1_30;
    }
    break;
  case 1:
    if (*(float *)(param_2 + 0xb78) <= 0.0) {
      *(undefined4 *)(param_2 + 0xb70) = 2;
      plVar15 = *(long **)(param_2 + 0xb30);
      *(undefined4 *)(param_2 + 0xb78) = *(undefined4 *)(*(long *)(param_2 + 0x9e8) + 0x48);
      if ((char)plVar15[8] != '\0') {
        plVar29 = (long *)plVar15[6];
        if (((plVar29 != (long *)0x0) && ((char)plVar29[2] != '\0')) &&
           (*(undefined1 *)(plVar29 + 2) = 0, (char)plVar29[10] != '\0')) {
          plVar16 = (long *)FUN_71003ac560((ulong)*(uint *)(*plVar29 + 8));
          (**(code **)(*plVar16 + 0x48))(plVar16,0);
          *(undefined1 *)(plVar29 + 10) = 0;
        }
        (**(code **)(*plVar15 + 0x30))(plVar15);
        uVar17 = extraout_x1_14;
      }
      *(undefined1 *)(plVar15 + 8) = 0;
      lVar20 = *(long *)(param_2 + 0xb50);
      if (lVar20 != 0) {
        if (*(char *)(lVar20 + 0x35) != '\0') {
          uVar13 = *(uint *)(lVar20 + 0x3c);
          lVar20 = *lib::Singleton<lib::EffectManager>::instance_;
          std::mutex::lock();
          if (((0 < (int)uVar13) && (lVar20 = lVar20 + (ulong)(uVar13 >> 0x18) * 0x300, lVar20 != 0)
              ) && (*(uint *)(lVar20 + 4) == uVar13)) {
            param_4 = (char *)0x0;
            param_5 = (undefined1 (*) [16])0x0;
            FUN_71035707d0(lVar20,0,(long ****)0x0,0,(long ****)param_6,param_7,param_8,param_9);
          }
          std::mutex::unlock();
          lVar20 = *(long *)(param_2 + 0xb50);
          uVar17 = extraout_x1_15;
          if (lVar20 == 0) goto LAB_710296ad58;
        }
        lVar24 = *(long *)(param_2 + 0xb40);
        plVar15 = *(long **)(param_2 + 0xb48);
        *plVar15 = lVar24;
        *(long **)(lVar24 + 8) = plVar15;
        *(long *)(lVar20 + 0x10) = *(long *)(lVar20 + 0x10) + -1;
        *(undefined8 *)(param_2 + 0xb40) = 0;
        *(undefined8 *)(param_2 + 0xb48) = 0;
        *(undefined8 *)(param_2 + 0xb50) = 0;
      }
LAB_710296ad58:
      lVar20 = *(long *)(param_2 + 0xb68);
      if (lVar20 != 0) {
        if (*(char *)(lVar20 + 0x35) != '\0') {
          uVar13 = *(uint *)(lVar20 + 0x3c);
          lVar20 = *lib::Singleton<lib::EffectManager>::instance_;
          std::mutex::lock();
          if (((0 < (int)uVar13) && (lVar20 = lVar20 + (ulong)(uVar13 >> 0x18) * 0x300, lVar20 != 0)
              ) && (*(uint *)(lVar20 + 4) == uVar13)) {
            param_4 = (char *)0x0;
            param_5 = (undefined1 (*) [16])0x0;
            FUN_71035707d0(lVar20,0,(long ****)0x0,0,(long ****)param_6,param_7,param_8,param_9);
          }
          std::mutex::unlock();
          lVar20 = *(long *)(param_2 + 0xb68);
          uVar17 = extraout_x1_16;
          if (lVar20 == 0) break;
        }
        lVar24 = *(long *)(param_2 + 0xb58);
        plVar15 = *(long **)(param_2 + 0xb60);
        *plVar15 = lVar24;
        *(long **)(lVar24 + 8) = plVar15;
        *(long *)(lVar20 + 0x10) = *(long *)(lVar20 + 0x10) + -1;
        *(undefined8 *)(param_2 + 0xb58) = 0;
        *(undefined8 *)(param_2 + 0xb60) = 0;
        *(undefined8 *)(param_2 + 0xb68) = 0;
      }
    }
    break;
  case 2:
    if (*(float *)(param_2 + 0xb78) <= 0.0) {
      *(undefined4 *)(param_2 + 0xb70) = 3;
      FUN_710313ef20(*(long **)(param_2 + 0xb38));
      uVar17 = extraout_x1_17;
    }
    fVar41 = *(float *)(param_2 + 0xa30) + 1.0;
    fVar45 = *(float *)(param_2 + 0xa34) + -3.0;
    fVar35 = *(float *)(param_2 + 0xa30) + -200.0;
    fVar39 = *(float *)(param_2 + 0xa34) + 10.0;
    lVar20 = *lib::Singleton<app::FighterManager>::instance_;
    iVar14 = *(int *)(lVar20 + 0xa0);
    fVar34 = fVar41;
    if (fVar41 == fVar35 || fVar35 > fVar41) {
      fVar34 = fVar35;
    }
    if (fVar35 <= fVar41) {
      fVar41 = fVar35;
    }
    fVar35 = fVar45;
    if (fVar45 == fVar39 || fVar39 > fVar45) {
      fVar35 = fVar39;
    }
    if (fVar39 <= fVar45) {
      fVar45 = fVar39;
    }
    if (0 < iVar14) {
      iVar30 = 0;
      do {
        iVar7 = iVar30;
        if (*(long *)(lVar20 + 0x20) == 0) {
LAB_710296ae9c:
          if (*(long *)(lVar20 + 0x28) != 0) {
            if (iVar7 == 0) {
              uVar13 = 1;
              goto LAB_710296af44;
            }
            iVar7 = iVar7 + -1;
          }
          if (*(long *)(lVar20 + 0x30) != 0) {
            if (iVar7 == 0) {
              uVar13 = 2;
              goto LAB_710296af44;
            }
            iVar7 = iVar7 + -1;
          }
          if (*(long *)(lVar20 + 0x38) != 0) {
            if (iVar7 == 0) {
              uVar13 = 3;
              goto LAB_710296af44;
            }
            iVar7 = iVar7 + -1;
          }
          if (*(long *)(lVar20 + 0x40) != 0) {
            if (iVar7 == 0) {
              uVar13 = 4;
              goto LAB_710296af44;
            }
            iVar7 = iVar7 + -1;
          }
          if (*(long *)(lVar20 + 0x48) != 0) {
            if (iVar7 == 0) {
              uVar13 = 5;
              goto LAB_710296af44;
            }
            iVar7 = iVar7 + -1;
          }
          if (*(long *)(lVar20 + 0x50) != 0) {
            if (iVar7 == 0) {
              uVar13 = 6;
              goto LAB_710296af44;
            }
            iVar7 = iVar7 + -1;
          }
          uVar13 = 7;
          if (*(long *)(lVar20 + 0x58) == 0 || iVar7 != 0) {
            uVar13 = 0xffffffff;
          }
        }
        else {
          if (iVar30 != 0) {
            iVar7 = iVar30 + -1;
            goto LAB_710296ae9c;
          }
          uVar13 = 0;
        }
LAB_710296af44:
        auVar36 = FUN_7100679a30(lib::Singleton<app::FighterManager>::instance_,uVar13);
        if (((fVar41 < auVar36._0_4_) && (auVar36._0_4_ < fVar34)) &&
           ((fVar45 < auVar36._4_4_ && (auVar36._4_4_ < fVar35)))) {
          plVar15 = *(long **)(param_2 + 0xb38);
          *(undefined4 *)(param_2 + 0xb70) = 3;
          goto LAB_710296bfc4;
        }
        iVar30 = iVar30 + 1;
        uVar17 = extraout_x1_18;
        if (iVar14 <= iVar30) break;
        lVar20 = *lib::Singleton<app::FighterManager>::instance_;
      } while( true );
    }
    break;
  case 3:
    uVar13 = *(int *)(param_2 + 0xb7c) - 1;
    *(uint *)(param_2 + 0xb7c) = uVar13;
    pauVar2 = (undefined1 (*) [16])(param_2 + 0xa40);
    if ((uVar13 & 1) == 0) {
      pauVar2 = (undefined1 (*) [16])(param_2 + 0xa30);
    }
    local_a0 = *(undefined8 *)*pauVar2;
    uStack_88 = *(undefined8 *)(*pauVar2 + 8);
    plStack_c8 = (long *)0x0;
    local_d0 = (long **)&DAT_3f800000;
    uStack_b8 = 0;
    local_c0 = 0x3f80000000000000;
    local_98 = CONCAT44(0x3f800000,(int)uStack_88);
    if (*(char *)(param_2 + 0xb74) == '\0') {
      lVar20 = *(long *)(param_2 + 0xb88);
    }
    else {
      lVar20 = *(long *)(param_2 + 0xb80);
    }
    local_b0 = uVar18;
    uStack_a8 = uVar32;
    local_90 = (undefined1  [8])local_a0;
    if (lVar20 != 0) {
      param_6 = (undefined1 (*) [16])0x1;
      param_5 = (undefined1 (*) [16])0x0;
      param_7 = (undefined1 (*) [16])0x0;
      FUN_710296c690(lVar20,*(undefined8 *)(param_2 + 0x9e0),&local_d0,(undefined1 (*) [16])0x0,1,0)
      ;
    }
    param_4 = (char *)0x15291866d0;
    if ((uVar13 & 1) == 0) {
      FUN_7102626be0(&local_110,*(ulong **)(*(long *)(param_2 + 0xb98) + 800),
                     (long ****)0x15291866d0,(byte ****)param_5,(long ****)param_6,param_7,param_8,
                     param_9);
      uVar17 = extraout_x1_20;
      if (local_100 != 0) {
        auVar36 = *(undefined1 (*) [16])(param_2 + 0xa30);
        goto LAB_710296b36c;
      }
    }
    else {
      FUN_7102626be0(&local_110,*(ulong **)(*(long *)(param_2 + 0xb98) + 800),
                     (long ****)0x15291866d0,(byte ****)param_5,(long ****)param_6,param_7,param_8,
                     param_9);
      uVar17 = extraout_x1_19;
      if (local_100 != 0) {
        auVar36 = *(undefined1 (*) [16])(param_2 + 0xa40);
LAB_710296b36c:
        lVar20 = local_100;
        auVar47 = NEON_ext(auVar36,auVar36,8,1);
        *(ulong *)(local_100 + 0x58) = (ulong)auVar47._0_4_;
        *(long *)(local_100 + 0x50) = auVar36._0_8_;
        if (*(char *)(local_100 + 0x35) == '\0') {
          *(ulong *)(local_100 + 0x48) = *(ulong *)(local_100 + 0x48) | 1;
        }
        else {
          uVar13 = *(uint *)(local_100 + 0x3c);
          if (0 < (int)uVar13) {
            lVar24 = *lib::Singleton<lib::EffectManager>::instance_;
            uVar26 = (ulong)(uVar13 >> 0x18);
            lVar28 = lVar24 + uVar26 * 0x300;
            if ((lVar28 != 0) && (*(uint *)(lVar28 + 4) == uVar13)) {
              if (*(char *)(lVar24 + uVar26 * 0x300 + 0x2d6) == '\0') {
                lVar28 = lVar24 + uVar26 * 0x300;
                *(undefined1 *)(lVar28 + 0x2da) = 1;
                *(ulong *)(lVar28 + 0x128) = (ulong)auVar47._0_4_;
                *(long *)(lVar28 + 0x120) = auVar36._0_8_;
              }
              else {
                lVar28 = lVar24 + uVar26 * 0x300;
                uVar31 = *(undefined4 *)(lVar28 + 0xf8);
                uVar33 = *(undefined4 *)(lVar28 + 0xfc);
                uVar42 = auVar36._0_4_;
                *(undefined4 *)(lVar28 + 0xf8) = uVar31;
                *(undefined4 *)(lVar28 + 0xfc) = uVar33;
                *(undefined4 *)(lVar28 + 0xf0) = uVar42;
                *(undefined4 *)(lVar28 + 0xf4) = *(undefined4 *)(lVar28 + 0xf4);
                uVar37 = *(undefined4 *)(local_100 + 0x54);
                *(undefined4 *)(lVar28 + 0xf8) = uVar31;
                *(undefined4 *)(lVar28 + 0xfc) = uVar33;
                *(undefined4 *)(lVar28 + 0xf0) = uVar42;
                *(undefined4 *)(lVar28 + 0xf4) = uVar37;
                *(undefined4 *)(lVar28 + 0xf8) = *(undefined4 *)(local_100 + 0x58);
                *(undefined4 *)(lVar28 + 0xfc) = uVar33;
                *(undefined4 *)(lVar28 + 0xf0) = uVar42;
                *(undefined4 *)(lVar28 + 0xf4) = uVar37;
              }
              if (*(long *)(lVar24 + uVar26 * 0x300 + 0x58) == 0) {
                lVar24 = lVar24 + uVar26 * 0x300;
                *(undefined8 *)(lVar24 + 0x130) = 0;
                *(undefined8 *)(lVar24 + 0x138) = 0;
              }
            }
          }
        }
        if (local_100 != 0) {
          if (*(char *)(local_100 + 0x35) == '\0') {
            *(undefined1 *)(local_100 + 0x35) = 1;
            uVar13 = 0x1800000;
            *(undefined4 *)(local_100 + 0x38) = 0;
            param_5 = (undefined1 (*) [16])(local_100 + 0x50);
            param_6 = (undefined1 (*) [16])(local_100 + 0x60);
            param_7 = (undefined1 (*) [16])(local_100 + 0x70);
            param_9 = 0xffffffff;
            if (*(char *)(local_100 + 0xb8) == '\0') {
              uVar13 = 0x1800001;
            }
            param_4 = (char *)(ulong)uVar13;
            param_8 = 0;
            uVar13 = FUN_7103563430(*lib::Singleton<lib::EffectManager>::instance_,
                                    *(ulong *)(local_100 + 0x40),uVar13,param_5,param_6,param_7,0,-1
                                    ,0);
            *(uint *)(lVar20 + 0x3c) = uVar13;
            FUN_71025ef570(lVar20);
            *(bool *)(lVar20 + 0x34) = *(int *)(lVar20 + 0x3c) != 0;
            uVar17 = extraout_x1_25;
            if (local_100 == 0) goto LAB_710296ba68;
          }
          *local_108 = (long)local_110;
          local_110[1] = local_108;
          *(long *)(local_100 + 0x10) = *(long *)(local_100 + 0x10) + -1;
          local_108 = (long *)0x0;
          local_100 = 0;
          local_110 = (long **)0x0;
        }
      }
    }
LAB_710296ba68:
    lVar20 = **(long **)(param_2 + 0x9c8);
    if (*(long *)(lVar20 + 8) != 0) {
      param_4 = (char *)0x1;
      local_110 = (long **)0x0;
      uVar13 = FUN_7102405040(*(long *)(lVar20 + 8),&local_110,1,(byte ****)param_5,
                              (long ****)param_6,param_7,param_8,param_9);
      uVar17 = extraout_x1_26;
      if (uVar13 != 0xffffffff) {
        param_4 = (char *)(ulong)uVar13;
        if (uVar13 < 0x19) {
          plVar15 = *(long **)(*(long *)(lVar20 + 8) + (long)(int)uVar13 * 0x50 + 0x68);
          if (((*plVar15 != 0) && ((int)plVar15[1] != -1)) &&
             ((int)plVar15[1] == *(int *)(*plVar15 + 0x20))) {
            FUN_7103736cf0(plVar15,(undefined1 (*) [12])local_90);
          }
        }
        (**(code **)(**(long **)(lVar20 + 8) + 0x58))(*(long **)(lVar20 + 8),4);
        uVar17 = extraout_x1_27;
      }
    }
    if (*(int *)(param_2 + 0xb7c) < 1) {
      *(undefined1 *)(param_2 + 0xb74) = 1;
      *(undefined4 *)(param_2 + 0xb70) = 0;
      puVar21 = *(uint **)(*(long *)(param_2 + 0xb98) + 0x340);
      uVar13 = *puVar21;
      *puVar21 = puVar21[1];
      uVar3 = puVar21[3];
      uVar13 = uVar13 ^ uVar13 << 0xb;
      uVar13 = uVar13 ^ uVar13 >> 8 ^ uVar3 ^ uVar3 >> 0x13;
      puVar21[1] = puVar21[2];
      puVar21[2] = uVar3;
      puVar21[3] = uVar13;
      plVar15 = *(long **)(param_2 + 0xb38);
      fVar34 = *(float *)(*(long *)(param_2 + 0x9e8) + 0x40);
      *(float *)(param_2 + 0xb78) =
           fVar34 + (float)uVar13 * 2.3283064e-10 *
                    (*(float *)(*(long *)(param_2 + 0x9e8) + 0x44) - fVar34);
      if ((char)plVar15[8] != '\0') {
        plVar29 = (long *)plVar15[6];
        if (((plVar29 != (long *)0x0) && ((char)plVar29[2] != '\0')) &&
           (*(undefined1 *)(plVar29 + 2) = 0, (char)plVar29[10] != '\0')) {
          plVar16 = (long *)FUN_71003ac560((ulong)*(uint *)(*plVar29 + 8));
          (**(code **)(*plVar16 + 0x48))(plVar16,0);
          *(undefined1 *)(plVar29 + 10) = 0;
        }
        (**(code **)(*plVar15 + 0x30))(plVar15);
        uVar17 = extraout_x1_28;
      }
      *(undefined1 *)(plVar15 + 8) = 0;
    }
    else {
      *(undefined4 *)(param_2 + 0xb70) = 4;
      *(undefined4 *)(param_2 + 0xb78) = 0x41000000;
    }
    break;
  case 4:
    if (*(float *)(param_2 + 0xb78) <= 0.0) {
      *(undefined4 *)(param_2 + 0xb70) = 3;
    }
    break;
  case 5:
    plVar15 = *(long **)(param_2 + 0xb20);
    if ((char)plVar15[8] != '\0') {
      plVar29 = (long *)plVar15[6];
      if (((plVar29 != (long *)0x0) && ((char)plVar29[2] != '\0')) &&
         (*(undefined1 *)(plVar29 + 2) = 0, (char)plVar29[10] != '\0')) {
        plVar16 = (long *)FUN_71003ac560((ulong)*(uint *)(*plVar29 + 8));
        (**(code **)(*plVar16 + 0x48))(plVar16,0);
        *(undefined1 *)(plVar29 + 10) = 0;
      }
      (**(code **)(*plVar15 + 0x30))(plVar15);
    }
    *(undefined1 *)(plVar15 + 8) = 0;
    plVar15 = *(long **)(param_2 + 0xb30);
    if ((char)plVar15[8] != '\0') {
      plVar29 = (long *)plVar15[6];
      if (((plVar29 != (long *)0x0) && ((char)plVar29[2] != '\0')) &&
         (*(undefined1 *)(plVar29 + 2) = 0, (char)plVar29[10] != '\0')) {
        plVar16 = (long *)FUN_71003ac560((ulong)*(uint *)(*plVar29 + 8));
        (**(code **)(*plVar16 + 0x48))(plVar16,0);
        *(undefined1 *)(plVar29 + 10) = 0;
      }
      (**(code **)(*plVar15 + 0x30))(plVar15);
    }
    *(undefined1 *)(plVar15 + 8) = 0;
    plVar15 = *(long **)(param_2 + 0xb38);
    if ((char)plVar15[8] != '\0') {
      plVar29 = (long *)plVar15[6];
      if (((plVar29 != (long *)0x0) && ((char)plVar29[2] != '\0')) &&
         (*(undefined1 *)(plVar29 + 2) = 0, (char)plVar29[10] != '\0')) {
        plVar16 = (long *)FUN_71003ac560((ulong)*(uint *)(*plVar29 + 8));
        (**(code **)(*plVar16 + 0x48))(plVar16,0);
        *(undefined1 *)(plVar29 + 10) = 0;
      }
      (**(code **)(*plVar15 + 0x30))(plVar15);
    }
    *(undefined1 *)(plVar15 + 8) = 0;
    *(undefined4 *)(param_2 + 0xb70) = 6;
    lVar20 = *(long *)(param_2 + 0xb50);
    if (lVar20 != 0) {
      if (*(char *)(lVar20 + 0x35) != '\0') {
        uVar13 = *(uint *)(lVar20 + 0x3c);
        lVar20 = *lib::Singleton<lib::EffectManager>::instance_;
        std::mutex::lock();
        if (((0 < (int)uVar13) && (lVar20 = lVar20 + (ulong)(uVar13 >> 0x18) * 0x300, lVar20 != 0))
           && (*(uint *)(lVar20 + 4) == uVar13)) {
          param_5 = (undefined1 (*) [16])0x0;
          FUN_71035707d0(lVar20,0,(long ****)0x0,0,(long ****)param_6,param_7,param_8,param_9);
        }
        std::mutex::unlock();
        lVar20 = *(long *)(param_2 + 0xb50);
        if (lVar20 == 0) goto LAB_710296b1f0;
      }
      lVar24 = *(long *)(param_2 + 0xb40);
      plVar15 = *(long **)(param_2 + 0xb48);
      *plVar15 = lVar24;
      *(long **)(lVar24 + 8) = plVar15;
      *(long *)(lVar20 + 0x10) = *(long *)(lVar20 + 0x10) + -1;
      *(undefined8 *)(param_2 + 0xb40) = 0;
      *(undefined8 *)(param_2 + 0xb48) = 0;
      *(undefined8 *)(param_2 + 0xb50) = 0;
    }
LAB_710296b1f0:
    lVar20 = *(long *)(param_2 + 0xb68);
    if (lVar20 != 0) {
      if (*(char *)(lVar20 + 0x35) != '\0') {
        uVar13 = *(uint *)(lVar20 + 0x3c);
        lVar20 = *lib::Singleton<lib::EffectManager>::instance_;
        std::mutex::lock();
        if (((0 < (int)uVar13) && (lVar20 = lVar20 + (ulong)(uVar13 >> 0x18) * 0x300, lVar20 != 0))
           && (*(uint *)(lVar20 + 4) == uVar13)) {
          param_5 = (undefined1 (*) [16])0x0;
          FUN_71035707d0(lVar20,0,(long ****)0x0,0,(long ****)param_6,param_7,param_8,param_9);
        }
        std::mutex::unlock();
        lVar20 = *(long *)(param_2 + 0xb68);
        if (lVar20 == 0) goto LAB_710296b290;
      }
      lVar24 = *(long *)(param_2 + 0xb58);
      plVar15 = *(long **)(param_2 + 0xb60);
      *plVar15 = lVar24;
      *(long **)(lVar24 + 8) = plVar15;
      *(long *)(lVar20 + 0x10) = *(long *)(lVar20 + 0x10) + -1;
      *(undefined8 *)(param_2 + 0xb58) = 0;
      *(undefined8 *)(param_2 + 0xb60) = 0;
      *(undefined8 *)(param_2 + 0xb68) = 0;
    }
LAB_710296b290:
    FUN_7102626be0(&local_d0,*(ulong **)(*(long *)(param_2 + 0xb98) + 800),(long ****)0x195e532702,
                   (byte ****)param_5,(long ****)param_6,param_7,param_8,param_9);
    lVar20 = local_c0;
    if (local_c0 != 0) {
      auVar36 = *(undefined1 (*) [16])(param_2 + 0xa30);
      auVar47 = NEON_ext(auVar36,auVar36,8,1);
      *(ulong *)(local_c0 + 0x58) = (ulong)auVar47._0_4_;
      *(long *)(local_c0 + 0x50) = auVar36._0_8_;
      if (*(char *)(local_c0 + 0x35) == '\0') {
        *(ulong *)(local_c0 + 0x48) = *(ulong *)(local_c0 + 0x48) | 1;
      }
      else {
        uVar13 = *(uint *)(local_c0 + 0x3c);
        if (0 < (int)uVar13) {
          lVar24 = *lib::Singleton<lib::EffectManager>::instance_;
          uVar26 = (ulong)(uVar13 >> 0x18);
          lVar28 = lVar24 + uVar26 * 0x300;
          if ((lVar28 != 0) && (*(uint *)(lVar28 + 4) == uVar13)) {
            if (*(char *)(lVar24 + uVar26 * 0x300 + 0x2d6) == '\0') {
              lVar28 = lVar24 + uVar26 * 0x300;
              *(undefined1 *)(lVar28 + 0x2da) = 1;
              *(ulong *)(lVar28 + 0x128) = (ulong)auVar47._0_4_;
              *(long *)(lVar28 + 0x120) = auVar36._0_8_;
            }
            else {
              lVar28 = lVar24 + uVar26 * 0x300;
              uVar31 = *(undefined4 *)(lVar28 + 0xf8);
              uVar33 = *(undefined4 *)(lVar28 + 0xfc);
              uVar42 = auVar36._0_4_;
              *(undefined4 *)(lVar28 + 0xf8) = uVar31;
              *(undefined4 *)(lVar28 + 0xfc) = uVar33;
              *(undefined4 *)(lVar28 + 0xf0) = uVar42;
              *(undefined4 *)(lVar28 + 0xf4) = *(undefined4 *)(lVar28 + 0xf4);
              uVar37 = *(undefined4 *)(local_c0 + 0x54);
              *(undefined4 *)(lVar28 + 0xf8) = uVar31;
              *(undefined4 *)(lVar28 + 0xfc) = uVar33;
              *(undefined4 *)(lVar28 + 0xf0) = uVar42;
              *(undefined4 *)(lVar28 + 0xf4) = uVar37;
              *(undefined4 *)(lVar28 + 0xf8) = *(undefined4 *)(local_c0 + 0x58);
              *(undefined4 *)(lVar28 + 0xfc) = uVar33;
              *(undefined4 *)(lVar28 + 0xf0) = uVar42;
              *(undefined4 *)(lVar28 + 0xf4) = uVar37;
            }
            if (*(long *)(lVar24 + uVar26 * 0x300 + 0x58) == 0) {
              lVar24 = lVar24 + uVar26 * 0x300;
              *(undefined8 *)(lVar24 + 0x130) = 0;
              *(undefined8 *)(lVar24 + 0x138) = 0;
            }
          }
        }
      }
      if ((local_c0 != 0) && (*(char *)(local_c0 + 0x35) == '\0')) {
        *(undefined1 *)(local_c0 + 0x35) = 1;
        uVar13 = 0x1800000;
        *(undefined4 *)(local_c0 + 0x38) = 0;
        param_5 = (undefined1 (*) [16])(local_c0 + 0x50);
        param_6 = (undefined1 (*) [16])(local_c0 + 0x60);
        param_7 = (undefined1 (*) [16])(local_c0 + 0x70);
        param_9 = 0xffffffff;
        if (*(char *)(local_c0 + 0xb8) == '\0') {
          uVar13 = 0x1800001;
        }
        param_8 = 0;
        uVar13 = FUN_7103563430(*lib::Singleton<lib::EffectManager>::instance_,
                                *(ulong *)(local_c0 + 0x40),uVar13,param_5,param_6,param_7,0,-1,0);
        *(uint *)(lVar20 + 0x3c) = uVar13;
        FUN_71025ef570(lVar20);
        *(bool *)(lVar20 + 0x34) = *(int *)(lVar20 + 0x3c) != 0;
      }
    }
    FUN_7102626be0(&local_110,*(ulong **)(*(long *)(param_2 + 0xb98) + 800),(long ****)0x195e532702,
                   (byte ****)param_5,(long ****)param_6,param_7,param_8,param_9);
    lVar20 = local_100;
    if (local_100 != 0) {
      auVar36 = *(undefined1 (*) [16])(param_2 + 0xa40);
      auVar47 = NEON_ext(auVar36,auVar36,8,1);
      *(ulong *)(local_100 + 0x58) = (ulong)auVar47._0_4_;
      *(long *)(local_100 + 0x50) = auVar36._0_8_;
      if (*(char *)(local_100 + 0x35) == '\0') {
        *(ulong *)(local_100 + 0x48) = *(ulong *)(local_100 + 0x48) | 1;
      }
      else {
        uVar13 = *(uint *)(local_100 + 0x3c);
        if (0 < (int)uVar13) {
          lVar24 = *lib::Singleton<lib::EffectManager>::instance_;
          uVar26 = (ulong)(uVar13 >> 0x18);
          lVar28 = lVar24 + uVar26 * 0x300;
          if ((lVar28 != 0) && (*(uint *)(lVar28 + 4) == uVar13)) {
            if (*(char *)(lVar24 + uVar26 * 0x300 + 0x2d6) == '\0') {
              lVar28 = lVar24 + uVar26 * 0x300;
              *(undefined1 *)(lVar28 + 0x2da) = 1;
              *(ulong *)(lVar28 + 0x128) = (ulong)auVar47._0_4_;
              *(long *)(lVar28 + 0x120) = auVar36._0_8_;
            }
            else {
              lVar28 = lVar24 + uVar26 * 0x300;
              uVar31 = *(undefined4 *)(lVar28 + 0xf8);
              uVar33 = *(undefined4 *)(lVar28 + 0xfc);
              uVar42 = auVar36._0_4_;
              *(undefined4 *)(lVar28 + 0xf8) = uVar31;
              *(undefined4 *)(lVar28 + 0xfc) = uVar33;
              *(undefined4 *)(lVar28 + 0xf0) = uVar42;
              *(undefined4 *)(lVar28 + 0xf4) = *(undefined4 *)(lVar28 + 0xf4);
              uVar37 = *(undefined4 *)(local_100 + 0x54);
              *(undefined4 *)(lVar28 + 0xf8) = uVar31;
              *(undefined4 *)(lVar28 + 0xfc) = uVar33;
              *(undefined4 *)(lVar28 + 0xf0) = uVar42;
              *(undefined4 *)(lVar28 + 0xf4) = uVar37;
              *(undefined4 *)(lVar28 + 0xf8) = *(undefined4 *)(local_100 + 0x58);
              *(undefined4 *)(lVar28 + 0xfc) = uVar33;
              *(undefined4 *)(lVar28 + 0xf0) = uVar42;
              *(undefined4 *)(lVar28 + 0xf4) = uVar37;
            }
            if (*(long *)(lVar24 + uVar26 * 0x300 + 0x58) == 0) {
              lVar24 = lVar24 + uVar26 * 0x300;
              *(undefined8 *)(lVar24 + 0x130) = 0;
              *(undefined8 *)(lVar24 + 0x138) = 0;
            }
          }
        }
      }
      if ((local_100 != 0) && (*(char *)(local_100 + 0x35) == '\0')) {
        *(undefined1 *)(local_100 + 0x35) = 1;
        uVar13 = 0x1800000;
        *(undefined4 *)(local_100 + 0x38) = 0;
        param_5 = (undefined1 (*) [16])(local_100 + 0x50);
        param_6 = (undefined1 (*) [16])(local_100 + 0x60);
        param_7 = (undefined1 (*) [16])(local_100 + 0x70);
        param_9 = 0xffffffff;
        if (*(char *)(local_100 + 0xb8) == '\0') {
          uVar13 = 0x1800001;
        }
        param_8 = 0;
        uVar13 = FUN_7103563430(*lib::Singleton<lib::EffectManager>::instance_,
                                *(ulong *)(local_100 + 0x40),uVar13,param_5,param_6,param_7,0,-1,0);
        *(uint *)(lVar20 + 0x3c) = uVar13;
        FUN_71025ef570(lVar20);
        *(bool *)(lVar20 + 0x34) = *(int *)(lVar20 + 0x3c) != 0;
      }
    }
    param_4 = "IPP0002";
    FUN_71025f55b0((undefined8 *)**(undefined8 **)(param_2 + 0xb90),
                   (undefined8 *)(*(undefined8 **)(param_2 + 0xb90))[1],"IPP0002");
    if (local_100 != 0) {
      *local_108 = (long)local_110;
      local_110[1] = local_108;
      *(long *)(local_100 + 0x10) = *(long *)(local_100 + 0x10) + -1;
      local_108 = (long *)0x0;
      local_100 = 0;
      local_110 = (long **)0x0;
    }
    uVar17 = extraout_x1_29;
    if (local_c0 != 0) {
      *plStack_c8 = (long)local_d0;
      local_d0[1] = plStack_c8;
      *(long *)(local_c0 + 0x10) = *(long *)(local_c0 + 0x10) + -1;
      plStack_c8 = (long *)0x0;
      local_c0 = 0;
      local_d0 = (long **)0x0;
    }
  }
  FUN_710296c900(fVar46,param_2 + 0xba0,uVar17,(long ****)param_4,param_5,(long ****)param_6,param_7
                 ,param_8,param_9);
LAB_710296bfd4:
  if (DAT_710532f490 != (long *)0x0) {
    plStack_c8 = (long *)0x0;
    local_d0 = (long **)0xc1a0000042700000;
    uStack_b8 = 0;
    local_c0 = 0xc120000042c80000;
    FUN_7103237a10(*DAT_710532f490 + 0x68160,&local_d0,(long ****)param_4,(byte ****)param_5,
                   (long ****)param_6,param_7,param_8,param_9);
  }
  return;
}

