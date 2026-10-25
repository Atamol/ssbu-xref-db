// addr:      7102ec4ee0
// offset:    0x2ec4ee0
// name:      FUN_7102ec4ee0
// mangled:   
// signature: undefined __cdecl FUN_7102ec4ee0(float param_1, long param_2, undefined8 param_3, undefined * * param_4, undefined1[16] * param_5, undefined1[16] * param_6, undefined1[16] * param_7, undefined8 param_8, undefined8 param_9)


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7102ec4ee0(float param_1,long param_2,undefined8 param_3,undefined **param_4,
                   undefined1 (*param_5) [16],undefined1 (*param_6) [16],undefined1 (*param_7) [16],
                   undefined8 param_8,undefined8 param_9)

{
  undefined4 uVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  bool bVar8;
  bool bVar9;
  uint uVar10;
  int iVar12;
  uint uVar11;
  long *plVar13;
  long *plVar14;
  long *plVar15;
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
  long extraout_x1_16;
  undefined8 extraout_x1_17;
  undefined8 extraout_x1_18;
  undefined8 uVar16;
  long extraout_x1_19;
  undefined8 extraout_x1_20;
  undefined8 extraout_x1_21;
  undefined8 extraout_x1_22;
  undefined8 extraout_x1_23;
  uint *puVar17;
  long lVar18;
  long lVar19;
  float fVar20;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined8 local_c0;
  ulong local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  ulong uStack_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  
  fVar20 = *(float *)(param_2 + 0x264) - param_1;
  if (fVar20 <= 0.0) {
    fVar20 = 0.0;
  }
  lVar19 = *(long *)(param_2 + 0x40);
  *(float *)(param_2 + 0x264) = fVar20;
  if (*(long *)(lVar19 + 0x38) != 0) {
    if (((DAT_71053144d8 & 1) == 0) &&
       (iVar12 = __cxa_guard_acquire(&DAT_71053144d8), param_3 = extraout_x1_20, iVar12 != 0)) {
      FUN_7101764000();
      param_4 = &PTR_LOOP_7104f17000;
      FUN_71000001c0();
      __cxa_guard_release(&DAT_71053144d8);
      param_3 = extraout_x1_21;
    }
    if (DAT_71052c518a == '\0') {
      auVar26 = (**(code **)(**(long **)(*(long *)(lVar19 + 0x38) + 0x130) + 0x138))();
      param_3 = auVar26._8_8_;
      if (auVar26._0_8_ == 0) goto LAB_7102ec4f84;
    }
    else {
      auVar26._8_8_ = param_3;
      auVar26._0_8_ = &DAT_710532f420;
    }
    param_3 = auVar26._8_8_;
    for (lVar19 = *(long *)(auVar26._0_8_ + 8); auVar26._0_8_ != lVar19;
        lVar19 = *(long *)(lVar19 + 8)) {
      if (*(int *)(lVar19 + 0x10) == 1) {
        fVar20 = *(float *)(*(long *)(param_2 + 0x10) + 0x2ec);
        *(float *)(param_2 + 0x264) = fVar20;
        lVar19 = *(long *)(param_2 + 0x18);
        goto joined_r0x007102ec5068;
      }
    }
  }
LAB_7102ec4f84:
  fVar20 = *(float *)(param_2 + 0x264);
  lVar19 = *(long *)(param_2 + 0x18);
joined_r0x007102ec5068:
  if (lVar19 == 0) {
LAB_7102ec506c:
    bVar9 = false;
    bVar8 = false;
    if (0.0 < fVar20) goto LAB_7102ec4ff4;
LAB_7102ec5078:
    if ((lVar19 != 0) && (bVar8)) {
      if ((*(char *)(lVar19 + 0xe0) != '\0') && (*(long *)(lVar19 + 200) != 0)) {
        *(undefined2 *)(*(long *)(lVar19 + 200) + 0x30) = 0;
      }
      if (*(long *)(lVar19 + 0xd8) != 0) {
        *(undefined1 *)(*(long *)(lVar19 + 0xd8) + 0x21) = 0;
      }
      if (*(char *)(lVar19 + 0xe0) != '\0') {
        *(undefined1 *)(*(long *)(lVar19 + 0xb0) + 0x10) = 1;
      }
    }
LAB_7102ec50b8:
    if (*(char *)(param_2 + 0x260) == '\0') goto LAB_7102ec5044;
LAB_7102ec50c0:
    fVar20 = *(float *)(param_2 + 0x25c) - param_1;
    *(float *)(param_2 + 0x25c) = fVar20;
    if (fVar20 < 0.0) {
      *(undefined4 *)(param_2 + 0x25c) = 0;
      *(undefined2 *)(param_2 + 0x260) = 0x100;
    }
  }
  else {
                    /* WARNING: Read-only address (ram,0x00710446a350) is written */
    if (*(char *)(lVar19 + 0xe0) == '\0') {
      bVar8 = true;
LAB_7102ec4fc8:
      lVar18 = *(long *)(lVar19 + 0xd8);
      bVar9 = (bool)(bVar8 & lVar18 == 0);
      if ((lVar18 != 0) && (bVar8)) {
        bVar9 = *(char *)(lVar18 + 0x21) != '\0';
      }
    }
    else {
      lVar18 = *(long *)(lVar19 + 200);
      if (lVar18 == 0) {
LAB_7102ec4fb0:
        bVar8 = *(char *)(*(long *)(lVar19 + 0xb0) + 0x10) == '\0';
        goto LAB_7102ec4fc8;
      }
      if (*(char *)(lVar18 + 0x30) == '\0') goto LAB_7102ec506c;
      bVar9 = false;
      if (*(char *)(lVar18 + 0x31) != '\0') goto LAB_7102ec4fb0;
    }
    bVar8 = bVar9;
    if (fVar20 <= 0.0) goto LAB_7102ec5078;
LAB_7102ec4ff4:
    if (bVar9 || lVar19 == 0) goto LAB_7102ec50b8;
    if ((*(char *)(lVar19 + 0xe0) != '\0') && (*(long *)(lVar19 + 200) != 0)) {
      *(undefined2 *)(*(long *)(lVar19 + 200) + 0x30) = 0x101;
    }
    if (*(long *)(lVar19 + 0xd8) != 0) {
      *(undefined1 *)(*(long *)(lVar19 + 0xd8) + 0x21) = 1;
    }
    if (*(char *)(lVar19 + 0xe0) == '\0') goto LAB_7102ec50b8;
    *(undefined1 *)(*(long *)(lVar19 + 0xb0) + 0x10) = 0;
    if (*(char *)(param_2 + 0x260) != '\0') goto LAB_7102ec50c0;
LAB_7102ec5044:
    if (*(char *)(param_2 + 0x261) != '\0') {
      *(undefined1 *)(param_2 + 0x261) = 0;
    }
  }
  FUN_7102ecf700(param_1,*(long **)(param_2 + 0x1d8),param_3,param_4,param_5,param_6,param_7,param_8
                 ,param_9);
  FUN_7102ecf700(param_1,*(long **)(param_2 + 0x1e0),extraout_x1,param_4,param_5,param_6,param_7,
                 param_8,param_9);
  FUN_7102ecf700(param_1,*(long **)(param_2 + 0x1e8),extraout_x1_00,param_4,param_5,param_6,param_7,
                 param_8,param_9);
  FUN_7102ecf700(param_1,*(long **)(param_2 + 0x1f0),extraout_x1_01,param_4,param_5,param_6,param_7,
                 param_8,param_9);
  FUN_7102ecf700(param_1,*(long **)(param_2 + 0x1f8),extraout_x1_02,param_4,param_5,param_6,param_7,
                 param_8,param_9);
  FUN_7102ecf700(param_1,*(long **)(param_2 + 0x200),extraout_x1_03,param_4,param_5,param_6,param_7,
                 param_8,param_9);
  FUN_7102ecf700(param_1,*(long **)(param_2 + 0x208),extraout_x1_04,param_4,param_5,param_6,param_7,
                 param_8,param_9);
  FUN_7102ecf700(param_1,*(long **)(param_2 + 0x210),extraout_x1_05,param_4,param_5,param_6,param_7,
                 param_8,param_9);
  FUN_7102ecf700(param_1,*(long **)(param_2 + 0x218),extraout_x1_06,param_4,param_5,param_6,param_7,
                 param_8,param_9);
  FUN_7102ecf700(param_1,*(long **)(param_2 + 0x220),extraout_x1_07,param_4,param_5,param_6,param_7,
                 param_8,param_9);
  FUN_7102ecf700(param_1,*(long **)(param_2 + 0x228),extraout_x1_08,param_4,param_5,param_6,param_7,
                 param_8,param_9);
  FUN_7102ecf700(param_1,*(long **)(param_2 + 0x230),extraout_x1_09,param_4,param_5,param_6,param_7,
                 param_8,param_9);
  FUN_7102ecf700(param_1,*(long **)(param_2 + 0x238),extraout_x1_10,param_4,param_5,param_6,param_7,
                 param_8,param_9);
  FUN_7102ecf700(param_1,*(long **)(param_2 + 0x240),extraout_x1_11,param_4,param_5,param_6,param_7,
                 param_8,param_9);
  FUN_7102ecf700(param_1,*(long **)(param_2 + 0x248),extraout_x1_12,param_4,param_5,param_6,param_7,
                 param_8,param_9);
  FUN_7102ecf700(param_1,*(long **)(param_2 + 0x250),extraout_x1_13,param_4,param_5,param_6,param_7,
                 param_8,param_9);
  uVar16 = extraout_x1_14;
  if ((*(char *)(param_2 + 0x1d0) != '\0') && (*(float *)(param_2 + 0x25c) == 0.0)) {
    uVar1 = *(undefined4 *)(*(long *)(param_2 + 0x10) + 0x2e8);
    *(undefined4 *)(param_2 + 0x25c) = uVar1;
    *(undefined4 *)(param_2 + 600) = uVar1;
    *(undefined2 *)(param_2 + 0x260) = 1;
    auVar26 = _DAT_710446a350;
    lVar19 = *(long *)(*(long *)(param_2 + 0x1d8) + 0xf0);
    if (((lVar19 == 0) || (*(char *)(lVar19 + 0x35) == '\0')) &&
       (*(int *)(*(long *)(param_2 + 0x1d8) + 0x78) == 0)) {
      plVar15 = (long *)(param_2 + 0x1d8);
    }
    else {
      plVar15 = (long *)(param_2 + 0x1e0);
      lVar19 = *(long *)(*plVar15 + 0xf0);
      if (((lVar19 != 0) && (*(char *)(lVar19 + 0x35) != '\0')) || (*(int *)(*plVar15 + 0x78) != 0))
      {
        plVar15 = (long *)(param_2 + 0x1e8);
        lVar19 = *(long *)(*plVar15 + 0xf0);
        if (((lVar19 != 0) && (*(char *)(lVar19 + 0x35) != '\0')) ||
           (*(int *)(*plVar15 + 0x78) != 0)) {
          plVar15 = (long *)(param_2 + 0x1f0);
          lVar19 = *(long *)(*plVar15 + 0xf0);
          if (((lVar19 != 0) && (*(char *)(lVar19 + 0x35) != '\0')) ||
             (*(int *)(*plVar15 + 0x78) != 0)) {
            plVar15 = (long *)(param_2 + 0x1f8);
            lVar19 = *(long *)(*plVar15 + 0xf0);
            if (((lVar19 != 0) && (*(char *)(lVar19 + 0x35) != '\0')) ||
               (*(int *)(*plVar15 + 0x78) != 0)) {
              plVar15 = (long *)(param_2 + 0x200);
              lVar19 = *(long *)(*plVar15 + 0xf0);
              if (((lVar19 != 0) && (*(char *)(lVar19 + 0x35) != '\0')) ||
                 (*(int *)(*plVar15 + 0x78) != 0)) {
                plVar15 = (long *)(param_2 + 0x208);
                lVar19 = *(long *)(*plVar15 + 0xf0);
                if (((lVar19 != 0) && (*(char *)(lVar19 + 0x35) != '\0')) ||
                   (*(int *)(*plVar15 + 0x78) != 0)) {
                  plVar15 = (long *)(param_2 + 0x210);
                  lVar19 = *(long *)(*plVar15 + 0xf0);
                  if (((lVar19 != 0) && (*(char *)(lVar19 + 0x35) != '\0')) ||
                     (*(int *)(*plVar15 + 0x78) != 0)) {
                    plVar15 = (long *)(param_2 + 0x218);
                    lVar19 = *(long *)(*plVar15 + 0xf0);
                    if (((lVar19 != 0) && (*(char *)(lVar19 + 0x35) != '\0')) ||
                       (*(int *)(*plVar15 + 0x78) != 0)) {
                      plVar15 = (long *)(param_2 + 0x220);
                      lVar19 = *(long *)(*plVar15 + 0xf0);
                      if (((lVar19 != 0) && (*(char *)(lVar19 + 0x35) != '\0')) ||
                         (*(int *)(*plVar15 + 0x78) != 0)) {
                        plVar15 = (long *)(param_2 + 0x228);
                        lVar19 = *(long *)(*plVar15 + 0xf0);
                        if (((lVar19 != 0) && (*(char *)(lVar19 + 0x35) != '\0')) ||
                           (*(int *)(*plVar15 + 0x78) != 0)) {
                          plVar15 = (long *)(param_2 + 0x230);
                          lVar19 = *(long *)(*plVar15 + 0xf0);
                          if (((lVar19 != 0) && (*(char *)(lVar19 + 0x35) != '\0')) ||
                             (*(int *)(*plVar15 + 0x78) != 0)) {
                            plVar15 = (long *)(param_2 + 0x238);
                            lVar19 = *(long *)(*plVar15 + 0xf0);
                            if (((lVar19 != 0) && (*(char *)(lVar19 + 0x35) != '\0')) ||
                               (*(int *)(*plVar15 + 0x78) != 0)) {
                              plVar15 = (long *)(param_2 + 0x240);
                              lVar19 = *(long *)(*plVar15 + 0xf0);
                              if (((lVar19 != 0) && (*(char *)(lVar19 + 0x35) != '\0')) ||
                                 (*(int *)(*plVar15 + 0x78) != 0)) {
                                plVar15 = (long *)(param_2 + 0x248);
                                lVar19 = *(long *)(*plVar15 + 0xf0);
                                if (((lVar19 != 0) && (*(char *)(lVar19 + 0x35) != '\0')) ||
                                   (*(int *)(*plVar15 + 0x78) != 0)) {
                                  plVar15 = (long *)(param_2 + 0x250);
                                  lVar19 = *(long *)(*plVar15 + 0xf0);
                                  if (((lVar19 != 0) && (*(char *)(lVar19 + 0x35) != '\0')) ||
                                     (*(int *)(*plVar15 + 0x78) != 0)) goto LAB_7102ec54b0;
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    lVar19 = *(long *)(param_2 + 0x18);
    if (lVar19 != 0) {
      if (*(long *)(lVar19 + 0xd8) == 0) {
        uVar10 = 0xffffffff;
        lVar18 = *(long *)(lVar19 + 0xd8);
        if (lVar18 == 0) {
LAB_7102ec5478:
          auVar27 = (**(code **)(**(long **)(lVar19 + 0x90) + 0x158))();
        }
        else {
LAB_7102ec5430:
          uVar11 = (**(code **)(**(long **)(*(long *)(lVar18 + 8) + 8) + 0x10))();
          if (uVar11 <= uVar10) goto LAB_7102ec5478;
          plVar13 = *(long **)(*(long *)(*(long *)(lVar19 + 0xd8) + 8) + 0x48);
          (**(code **)(*plVar13 + 0x38))(plVar13,0);
          auVar27._8_8_ = extraout_x1_16;
          auVar27._0_8_ = extraout_x1_16 + (ulong)uVar10 * 0x40;
        }
        uVar16 = auVar27._8_8_;
        auVar26 = *(undefined1 (*) [16])(auVar27._0_8_ + 0x30);
      }
      else {
        plVar13 = *(long **)(*(long *)(*(long *)(lVar19 + 0xd8) + 8) + 8);
        uVar10 = (**(code **)(*plVar13 + 0x18))(plVar13,"effect_pos_fushigibana");
        lVar19 = *(long *)(param_2 + 0x18);
        uVar16 = extraout_x1_15;
        if (lVar19 != 0) {
          lVar18 = *(long *)(lVar19 + 0xd8);
          if (lVar18 != 0) goto LAB_7102ec5430;
          goto LAB_7102ec5478;
        }
      }
    }
    auVar27 = NEON_ext(auVar26,auVar26,8,1);
    lVar19 = *plVar15;
    *(undefined4 *)(lVar19 + 0x78) = 1;
    *(ulong *)(lVar19 + 0x98) = (ulong)auVar27._0_4_;
    *(long *)(lVar19 + 0x90) = auVar26._0_8_;
  }
LAB_7102ec54b0:
  if (0.0 < *(float *)(param_2 + 0x264)) goto switchD_7102ec55e4_default;
  if (*(char *)(param_2 + 0x38) == '\0') {
    if (*(char *)(param_2 + 0x39) != '\0') {
      *(undefined1 *)(param_2 + 0x39) = 0;
    }
LAB_7102ec558c:
    lVar19 = *(long *)(param_2 + 0x18);
  }
  else {
    fVar20 = *(float *)(param_2 + 0x34) - param_1;
    *(float *)(param_2 + 0x34) = fVar20;
    if (0.0 <= fVar20) goto LAB_7102ec558c;
    *(undefined4 *)(param_2 + 0x34) = 0;
    *(undefined2 *)(param_2 + 0x38) = 0x100;
    lVar19 = *(long *)(param_2 + 0x18);
  }
                    /* WARNING: Read-only address (ram,0x00710446a350) is written */
  if ((lVar19 != 0) && (fVar20 = 0.0, *(char *)(lVar19 + 0x110) != '\0')) {
    lVar19 = *(long *)(param_2 + 0x90);
    if (*(long *)(lVar19 + 0x38) != 0) {
      if (((DAT_71053144d8 & 1) == 0) &&
         (iVar12 = __cxa_guard_acquire(&DAT_71053144d8), uVar16 = extraout_x1_22, iVar12 != 0)) {
        FUN_7101764000();
        param_4 = &PTR_LOOP_7104f17000;
        FUN_71000001c0();
        __cxa_guard_release(&DAT_71053144d8);
        uVar16 = extraout_x1_23;
      }
      fVar20 = 0.0;
      if (DAT_71052c518a == '\0') {
        plVar15 = *(long **)(*(long *)(lVar19 + 0x38) + 0x130);
        fVar20 = (float)(**(code **)(*plVar15 + 0xb0))(plVar15,0);
        uVar16 = extraout_x1_17;
      }
    }
    fVar20 = *(float *)(param_2 + 0xe0) - fVar20;
    if (fVar20 <= 0.0) {
      fVar20 = 0.0;
    }
    *(float *)(param_2 + 0xe0) = fVar20;
    if (fVar20 <= 0.0) {
      *(undefined2 *)(param_2 + 0x38) = 1;
      *(undefined8 *)(param_2 + 0x30) = 0;
      *(undefined4 *)(param_2 + 0x2c) = 5;
    }
  }
  *(undefined8 *)(param_2 + 0xf8) = 0;
  *(undefined8 *)(param_2 + 0xf0) = 0x3f800000;
  *(undefined8 *)(param_2 + 0x108) = 0;
  *(undefined8 *)(param_2 + 0x100) = 0x3f80000000000000;
  *(undefined8 *)(param_2 + 0x118) = 0x3f800000;
  *(undefined8 *)(param_2 + 0x110) = 0;
  auVar26 = _DAT_710446a350;
  *(long *)(param_2 + 0x128) = DAT_710446a350._8_8_;
  *(long *)(param_2 + 0x120) = auVar26._0_8_;
  switch(*(undefined4 *)(param_2 + 0x2c)) {
  case 1:
    *(undefined4 *)(param_2 + 0xe0) = 0x42c80000;
    *(undefined8 *)(param_2 + 0x118) = *(undefined8 *)(param_2 + 0x158);
    *(undefined8 *)(param_2 + 0x120) = *(undefined8 *)(param_2 + 0x160);
    *(undefined8 *)(param_2 + 0x110) = *(undefined8 *)(param_2 + 0x150);
    *(undefined8 *)(param_2 + 0x128) = *(undefined8 *)(param_2 + 0x168);
    *(undefined8 *)(param_2 + 0x100) = *(undefined8 *)(param_2 + 0x140);
    *(undefined8 *)(param_2 + 0x108) = *(undefined8 *)(param_2 + 0x148);
    *(undefined8 *)(param_2 + 0xf0) = *(undefined8 *)(param_2 + 0x130);
    *(undefined8 *)(param_2 + 0xf8) = *(undefined8 *)(param_2 + 0x138);
    lVar19 = *(long *)(param_2 + 0x18);
    uVar1 = *(undefined4 *)(*(long *)(param_2 + 0x10) + 0x2dc);
    *(undefined4 *)(param_2 + 0x30) = uVar1;
    *(undefined4 *)(param_2 + 0x34) = uVar1;
    *(undefined4 *)(param_2 + 0x2c) = 2;
    *(undefined2 *)(param_2 + 0x38) = 1;
    if (lVar19 != 0) {
      *(undefined1 *)(lVar19 + 0x110) = 1;
      FUN_71025e9d50((long *)(lVar19 + 0x108),uVar16,(long ****)param_4,(byte ****)param_5,
                     (long ****)param_6,param_7,param_8,param_9);
    }
    FUN_710313ef20(*(long **)(param_2 + 0x40));
    *(undefined1 *)(param_2 + 0x1d0) = 0;
    *(undefined8 *)(param_2 + 600) = 0;
    *(undefined2 *)(param_2 + 0x260) = 1;
    FUN_710260fdd0(0,*(long *)(param_2 + 0x18),1);
    lVar19 = *(long *)(param_2 + 0x18);
    if (lVar19 != 0) {
      if (*(long *)(lVar19 + 0xd8) == 0) {
        uVar10 = 0xffffffff;
        lVar18 = *(long *)(lVar19 + 0xd8);
        if (lVar18 == 0) {
LAB_7102ec5afc:
          lVar19 = (**(code **)(**(long **)(lVar19 + 0x90) + 0x158))();
        }
        else {
LAB_7102ec5ab4:
          uVar11 = (**(code **)(**(long **)(*(long *)(lVar18 + 8) + 8) + 0x10))();
          if (uVar11 <= uVar10) goto LAB_7102ec5afc;
          plVar15 = *(long **)(*(long *)(*(long *)(lVar19 + 0xd8) + 8) + 0x48);
          (**(code **)(*plVar15 + 0x38))(plVar15,0);
          lVar19 = extraout_x1_19 + (ulong)uVar10 * 0x40;
        }
        auVar26 = *(undefined1 (*) [16])(lVar19 + 0x30);
      }
      else {
        plVar15 = *(long **)(*(long *)(*(long *)(lVar19 + 0xd8) + 8) + 8);
        uVar10 = (**(code **)(*plVar15 + 0x18))(plVar15,"Pokemon_Fushigibana");
        lVar19 = *(long *)(param_2 + 0x18);
        if (lVar19 != 0) {
          lVar18 = *(long *)(lVar19 + 0xd8);
          if (lVar18 != 0) goto LAB_7102ec5ab4;
          goto LAB_7102ec5afc;
        }
      }
    }
    auVar27 = NEON_ext(auVar26,auVar26,8,1);
    uStack_78 = (ulong)auVar27._0_4_;
    local_80 = auVar26._0_8_;
    lVar19 = **(long **)(param_2 + 0x20);
    if (*(long *)(lVar19 + 8) != 0) {
      local_c0 = 0;
      uVar10 = FUN_7102405040(*(long *)(lVar19 + 8),&local_c0,1,(byte ****)param_5,
                              (long ****)param_6,param_7,param_8,param_9);
      if (uVar10 != 0xffffffff) {
        if (uVar10 < 0x19) {
          plVar15 = *(long **)(*(long *)(lVar19 + 8) + (long)(int)uVar10 * 0x50 + 0x68);
          if (((*plVar15 != 0) && ((int)plVar15[1] != -1)) &&
             ((int)plVar15[1] == *(int *)(*plVar15 + 0x20))) {
            FUN_7103736cf0(plVar15,(undefined1 (*) [12])&local_80);
          }
        }
        (**(code **)(**(long **)(lVar19 + 8) + 0x58))(*(long **)(lVar19 + 8),0,uVar10);
      }
      lVar19 = **(long **)(param_2 + 0x20);
      if (*(long *)(lVar19 + 8) != 0) {
        local_c0 = 0;
        uVar10 = FUN_7102405040(*(long *)(lVar19 + 8),&local_c0,1,(byte ****)param_5,
                                (long ****)param_6,param_7,param_8,param_9);
        if (uVar10 != 0xffffffff) {
          if (uVar10 < 0x19) {
            plVar15 = *(long **)(*(long *)(lVar19 + 8) + (long)(int)uVar10 * 0x50 + 0x68);
            if (((*plVar15 != 0) && ((int)plVar15[1] != -1)) &&
               ((int)plVar15[1] == *(int *)(*plVar15 + 0x20))) {
              FUN_7103736cf0(plVar15,(undefined1 (*) [12])&local_80);
            }
          }
          (**(code **)(**(long **)(lVar19 + 8) + 0x58))(*(long **)(lVar19 + 8),1,uVar10);
        }
      }
    }
    break;
  case 2:
    fVar20 = (*(float *)(param_2 + 0x30) - *(float *)(param_2 + 0x34)) /
             *(float *)(*(long *)(param_2 + 0x10) + 0x2dc);
    auVar21._0_8_ =
         CONCAT44(*(float *)(param_2 + 0x174) +
                  ((float)((ulong)*(undefined8 *)(param_2 + 0x1c0) >> 0x20) -
                  *(float *)(param_2 + 0x174)) * fVar20,
                  *(float *)(param_2 + 0x170) +
                  ((float)*(undefined8 *)(param_2 + 0x1c0) - *(float *)(param_2 + 0x170)) * fVar20);
    auVar21._8_4_ =
         *(float *)(param_2 + 0x178) +
         ((float)*(undefined8 *)(param_2 + 0x1c8) - *(float *)(param_2 + 0x178)) * fVar20;
    auVar21._12_4_ =
         *(float *)(param_2 + 0x17c) +
         ((float)((ulong)*(undefined8 *)(param_2 + 0x1c8) >> 0x20) - *(float *)(param_2 + 0x17c)) *
         0.0;
    auVar4._8_4_ = auVar21._8_4_;
    auVar4._0_8_ = auVar21._0_8_;
    auVar4._12_4_ = 0x3f800000;
    auVar26 = NEON_ext(auVar4,auVar21,0xc,1);
    auVar5._8_4_ = auVar21._8_4_;
    auVar5._0_8_ = auVar21._0_8_;
    auVar5._12_4_ = 0x3f800000;
    auVar27 = NEON_ext(auVar26,auVar5,4,1);
    auVar26 = NEON_ext(auVar26,auVar26,8,1);
    auVar26 = NEON_ext(auVar27,auVar26,0xc,1);
    *(long *)(param_2 + 0x128) = auVar26._8_8_;
    *(long *)(param_2 + 0x120) = auVar26._0_8_;
    if (*(float *)(param_2 + 0x34) == 0.0) {
      uVar1 = *(undefined4 *)(*(long *)(param_2 + 0x10) + 0x2e0);
      *(undefined4 *)(param_2 + 0x30) = uVar1;
      *(undefined4 *)(param_2 + 0x34) = uVar1;
      *(undefined2 *)(param_2 + 0x38) = 1;
      *(undefined4 *)(param_2 + 0x2c) = 3;
      if (*(char *)(param_2 + 0x1d0) == '\0') {
        puVar17 = *(uint **)(*(long *)(param_2 + 8) + 0x340);
        uVar10 = *puVar17;
        *puVar17 = puVar17[1];
        uVar11 = puVar17[3];
        uVar10 = uVar10 ^ uVar10 << 0xb;
        uVar10 = uVar10 ^ uVar10 >> 8 ^ uVar11 ^ uVar11 >> 0x13;
        puVar17[1] = puVar17[2];
        puVar17[2] = uVar11;
        puVar17[3] = uVar10;
        if (*(float *)(*(long *)(param_2 + 0x10) + 0x2f0) <= (float)uVar10 * 2.3283064e-10) {
          if (*(char *)(param_2 + 0x1d0) == '\0') break;
        }
        else {
          *(undefined1 *)(param_2 + 0x1d0) = 1;
        }
        FUN_710260fdd0(0x41300000,*(long *)(param_2 + 0x18),1);
      }
    }
    break;
  case 3:
    auVar25._0_12_ = SUB1612(*(undefined1 (*) [16])(param_2 + 0x1c0),0);
    auVar25._12_4_ = 0x3f800000;
    auVar26 = NEON_ext(auVar25,*(undefined1 (*) [16])(param_2 + 0x1c0),0xc,1);
    auVar27 = NEON_ext(auVar26,auVar25,4,1);
    auVar26 = NEON_ext(auVar26,auVar26,8,1);
    auVar26 = NEON_ext(auVar27,auVar26,0xc,1);
    *(long *)(param_2 + 0x128) = auVar26._8_8_;
    *(long *)(param_2 + 0x120) = auVar26._0_8_;
    if (*(float *)(param_2 + 0x34) == 0.0) {
      uVar1 = *(undefined4 *)(*(long *)(param_2 + 0x10) + 0x2e4);
      *(undefined4 *)(param_2 + 0x30) = uVar1;
      *(undefined4 *)(param_2 + 0x34) = uVar1;
      *(undefined4 *)(param_2 + 0x2c) = 4;
      *(undefined2 *)(param_2 + 0x38) = 1;
    }
    break;
  case 4:
    fVar20 = *(float *)(param_2 + 0x34) / *(float *)(*(long *)(param_2 + 0x10) + 0x2e4);
    auVar24._0_8_ =
         CONCAT44(*(float *)(param_2 + 0x174) +
                  ((float)((ulong)*(undefined8 *)(param_2 + 0x1c0) >> 0x20) -
                  *(float *)(param_2 + 0x174)) * fVar20,
                  *(float *)(param_2 + 0x170) +
                  ((float)*(undefined8 *)(param_2 + 0x1c0) - *(float *)(param_2 + 0x170)) * fVar20);
    auVar24._8_4_ =
         *(float *)(param_2 + 0x178) +
         ((float)*(undefined8 *)(param_2 + 0x1c8) - *(float *)(param_2 + 0x178)) * fVar20;
    auVar24._12_4_ =
         *(float *)(param_2 + 0x17c) +
         ((float)((ulong)*(undefined8 *)(param_2 + 0x1c8) >> 0x20) - *(float *)(param_2 + 0x17c)) *
         0.0;
    auVar2._8_4_ = auVar24._8_4_;
    auVar2._0_8_ = auVar24._0_8_;
    auVar2._12_4_ = 0x3f800000;
    auVar26 = NEON_ext(auVar2,auVar24,0xc,1);
    auVar3._8_4_ = auVar24._8_4_;
    auVar3._0_8_ = auVar24._0_8_;
    auVar3._12_4_ = 0x3f800000;
    auVar27 = NEON_ext(auVar26,auVar3,4,1);
    auVar26 = NEON_ext(auVar26,auVar26,8,1);
    auVar26 = NEON_ext(auVar27,auVar26,0xc,1);
    *(long *)(param_2 + 0x128) = auVar26._8_8_;
    *(long *)(param_2 + 0x120) = auVar26._0_8_;
    if (*(float *)(param_2 + 0x34) != 0.0) break;
    *(undefined1 *)(param_2 + 0x1d0) = 0;
  case 5:
    plVar15 = *(long **)(param_2 + 0x40);
    if ((char)plVar15[8] != '\0') {
      plVar13 = (long *)plVar15[6];
      if (((plVar13 != (long *)0x0) && ((char)plVar13[2] != '\0')) &&
         (*(undefined1 *)(plVar13 + 2) = 0, (char)plVar13[10] != '\0')) {
        plVar14 = (long *)FUN_71003ac560((ulong)*(uint *)(*plVar13 + 8));
        (**(code **)(*plVar14 + 0x48))(plVar14,0);
        *(undefined1 *)(plVar13 + 10) = 0;
      }
      (**(code **)(*plVar15 + 0x30))(plVar15);
      uVar16 = extraout_x1_18;
    }
    *(undefined1 *)(plVar15 + 8) = 0;
    lVar19 = *(long *)(param_2 + 0x18);
    if (lVar19 != 0) {
      *(undefined1 *)(lVar19 + 0x110) = 0;
      FUN_71025e9d50((long *)(lVar19 + 0x108),uVar16,(long ****)param_4,(byte ****)param_5,
                     (long ****)param_6,param_7,param_8,param_9);
    }
    *(undefined4 *)(param_2 + 0x2c) = 0;
  }
switchD_7102ec55e4_default:
  local_b0 = *(undefined8 *)(param_2 + 0x100);
  local_a8 = *(undefined8 *)(param_2 + 0x108);
  local_c0 = *(undefined8 *)(param_2 + 0xf0);
  local_b8 = *(ulong *)(param_2 + 0xf8);
  local_90 = *(undefined8 *)(param_2 + 0x120);
  uStack_88 = *(undefined8 *)(param_2 + 0x128);
  local_a0 = *(undefined8 *)(param_2 + 0x110);
  local_98 = *(undefined8 *)(param_2 + 0x118);
  lVar19 = *(long *)(param_2 + 0x18);
  if (lVar19 != 0) {
    (**(code **)(**(long **)(lVar19 + 0x90) + 0x148))(*(long **)(lVar19 + 0x90),&local_c0);
    lVar19 = *(long *)(lVar19 + 0xd8);
    if (lVar19 != 0) {
      local_68 = local_a8;
      local_70 = local_b0;
      uStack_78 = local_b8;
      local_80 = local_c0;
      local_48 = uStack_88;
      local_50 = local_90;
      local_58 = local_98;
      local_60 = local_a0;
      if (*(char *)(*(long *)(lVar19 + 8) + 0xa8) != '\0') {
        plVar15 = *(long **)(*(long *)(lVar19 + 8) + 0x48);
        (**(code **)(*plVar15 + 0x20))(plVar15,&local_80);
      }
      *(undefined1 *)(lVar19 + 0x20) = 1;
    }
    if (*(long *)(param_2 + 0x18) != 0) {
      plVar15 = *(long **)(*(long *)(param_2 + 0x18) + 0xd8);
      (**(code **)(*plVar15 + 0x10))(plVar15);
      if (*(char *)(plVar15[1] + 0xa8) != '\0') {
        plVar13 = *(long **)(plVar15[1] + 0x48);
        (**(code **)(*plVar13 + 0x10))(plVar13,0);
        if (*(char *)(plVar15[1] + 0xa8) != '\0') {
          plVar13 = *(long **)(plVar15[1] + 0x48);
          (**(code **)(*plVar13 + 0x10))(plVar13,1);
          (**(code **)(*plVar13 + 0x10))(plVar13,2);
        }
      }
      *(undefined1 *)(plVar15 + 4) = 0;
    }
  }
  lVar19 = *(long *)(param_2 + 0x40);
  bVar8 = false;
  if (*(long *)(lVar19 + 0x30) != 0) {
    bVar8 = *(char *)(*(long *)(lVar19 + 0x30) + 0x10) != '\0';
  }
  if ((bVar8) || (*(char *)(lVar19 + 0x40) != '\0')) {
    auVar6._8_8_ = uStack_88;
    auVar6._0_8_ = local_90;
    auVar22._0_12_ = auVar6._0_12_;
    auVar22._12_4_ = *(undefined4 *)(param_2 + 0x8c);
    *(long *)(param_2 + 0x88) = auVar22._8_8_;
    *(undefined8 *)(param_2 + 0x80) = local_90;
    if (*(long *)(lVar19 + 0x38) != 0) {
      plVar15 = *(long **)(*(long *)(lVar19 + 0x38) + 0x130);
      (**(code **)(*plVar15 + 0x178))(plVar15,param_2 + 0x50,param_2 + 0x50,1);
    }
  }
  lVar19 = *(long *)(param_2 + 0x90);
  bVar8 = false;
  if (*(long *)(lVar19 + 0x30) != 0) {
    bVar8 = *(char *)(*(long *)(lVar19 + 0x30) + 0x10) != '\0';
  }
  if ((bVar8) || (*(char *)(lVar19 + 0x40) != '\0')) {
    auVar7._8_8_ = uStack_88;
    auVar7._0_8_ = local_90;
    auVar23._0_12_ = auVar7._0_12_;
    auVar23._12_4_ = *(undefined4 *)(param_2 + 0xdc);
    *(long *)(param_2 + 0xd8) = auVar23._8_8_;
    *(undefined8 *)(param_2 + 0xd0) = local_90;
    if (*(long *)(lVar19 + 0x38) != 0) {
      plVar15 = *(long **)(*(long *)(lVar19 + 0x38) + 0x130);
      (**(code **)(*plVar15 + 0x168))(plVar15,param_2 + 0xa0,param_2 + 0xa0,1);
    }
  }
  return;
}

