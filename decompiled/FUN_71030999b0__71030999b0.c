// addr:      71030999b0
// offset:    0x30999b0
// name:      FUN_71030999b0
// mangled:   
// signature: undefined __cdecl FUN_71030999b0(undefined8 param_1, long param_2, undefined8 param_3, char * param_4, undefined1[16] * param_5, undefined1[16] * param_6, undefined1[16] * param_7, long * * * param_8, long * * * param_9)


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_71030999b0(undefined8 param_1,long param_2,undefined8 param_3,char *param_4,
                   undefined1 (*param_5) [16],undefined1 (*param_6) [16],undefined1 (*param_7) [16],
                   long ***param_8,long ***param_9)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  char cVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined4 uVar9;
  undefined4 uVar10;
  bool bVar11;
  uint uVar12;
  long *plVar13;
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
  long *plVar14;
  undefined8 extraout_x1_31;
  undefined8 extraout_x1_32;
  undefined8 extraout_x1_33;
  undefined8 extraout_x1_34;
  undefined8 uVar15;
  undefined8 extraout_x1_35;
  undefined8 extraout_x1_36;
  undefined8 extraout_x1_37;
  undefined8 extraout_x1_38;
  undefined8 extraout_x1_39;
  undefined8 extraout_x1_40;
  undefined8 extraout_x1_41;
  int iVar16;
  long lVar17;
  uint *puVar18;
  long *plVar19;
  undefined8 *puVar20;
  long lVar21;
  ulong uVar22;
  undefined8 *puVar23;
  undefined8 *puVar24;
  float fVar25;
  float fVar26;
  float fVar35;
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  float fVar43;
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  float fVar44;
  undefined1 auVar42 [16];
  float fVar45;
  undefined1 auVar46 [16];
  float fVar47;
  float fVar48;
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  float fVar51;
  float fVar54;
  float fVar55;
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  float fVar58;
  undefined8 uVar59;
  ulong local_130;
  float local_120;
  float local_110;
  float fStack_10c;
  ulong uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  ulong uStack_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  
  FUN_71025dd540(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9);
  uVar12 = *(uint *)(param_2 + 0x788);
  fVar58 = (float)param_1;
  uVar15 = extraout_x1;
  if (uVar12 != 0xffffffff) {
    fVar25 = *(float *)(param_2 + 0x888) + fVar58;
    *(float *)(param_2 + 0x888) = fVar25;
    if (7 < uVar12) {
LAB_710309b7f4:
                    /* WARNING: Subroutine does not return */
      abort();
    }
    if (*(float *)(&DAT_710455c650 + (long)(int)uVar12 * 8) < fVar25) {
      fVar25 = fmodf(fVar25,*(float *)(&DAT_710455c650 + (long)(int)uVar12 * 8));
      fVar25 = fVar25 + *(float *)(&DAT_710455c64c + (long)(int)uVar12 * 8);
      *(float *)(param_2 + 0x888) = fVar25;
      uVar15 = extraout_x1_00;
    }
    *(float *)(*(long *)(*(long *)(param_2 + 0x318) + 0x10) + 0x48) = fVar25;
  }
  if (((0.0 < *(float *)(param_2 + 0x78c)) && (*(char *)(param_2 + 0x67) == '\0')) &&
     (*(int *)(param_2 + 0x788) != -1)) {
    *(float *)(param_2 + 0x78c) = *(float *)(param_2 + 0x78c) - fVar58;
  }
  if (*(long *)(param_2 + 0x840) == 0) {
    for (plVar13 = *(long **)(*(long *)(param_2 + 0x310) + 0xd0);
        plVar13 != *(long **)(*(long *)(param_2 + 0x310) + 0xd8); plVar13 = plVar13 + 2) {
      if ((*(uint *)(plVar13 + 1) < 2) &&
         (lVar17 = *plVar13, *(long *)(lVar17 + 0x68) == 0x6137650f6)) goto LAB_7103099ac0;
    }
    lVar17 = 0;
LAB_7103099ac0:
    *(long *)(param_2 + 0x840) = lVar17;
    lVar17 = *(long *)(param_2 + 0x848);
  }
  else {
    lVar17 = *(long *)(param_2 + 0x848);
  }
  if (lVar17 == 0) {
    for (plVar13 = *(long **)(*(long *)(param_2 + 0x310) + 0xd0);
        plVar13 != *(long **)(*(long *)(param_2 + 0x310) + 0xd8); plVar13 = plVar13 + 2) {
      if ((*(uint *)(plVar13 + 1) < 2) &&
         (lVar17 = *plVar13, *(long *)(lVar17 + 0x68) == 0x71e478127)) {
        *(long *)(param_2 + 0x848) = lVar17;
        if ((lVar17 != 0) &&
           (((*(long *)(lVar17 + 0xd8) == 0 && (lVar17 != 0)) && (*(long *)(lVar17 + 0xd8) == 0))))
        {
          plVar13 = FUN_71026533a0((undefined8 *)(lVar17 + 0x90),0,(long ****)param_4,
                                   (byte ****)param_5,(long ****)param_6,param_7,param_8,param_9);
          plVar19 = *(long **)(lVar17 + 0xd8);
          *(long **)(lVar17 + 0xd8) = plVar13;
          uVar15 = extraout_x1_21;
          if (plVar19 != (long *)0x0) {
            (**(code **)(*plVar19 + 8))();
            uVar15 = extraout_x1_22;
          }
        }
        goto LAB_7103099b14;
      }
    }
    *(undefined8 *)(param_2 + 0x848) = 0;
  }
LAB_7103099b14:
  lVar17 = *(long *)(param_2 + 0x840);
  fVar25 = 0.0;
  if (((lVar17 != 0) && (*(char *)(lVar17 + 0xe0) != '\0')) && (*(long *)(lVar17 + 200) != 0)) {
    fVar25 = *(float *)(*(long *)(lVar17 + 200) + 0x3c);
  }
  switch(*(undefined4 *)(param_2 + 0x788)) {
  case 0:
    if (*(float *)(param_2 + 0x78c) <= 0.0) {
      plVar13 = *(long **)(**(long **)(param_2 + 0x338) + 8);
      if (plVar13 != (long *)0x0) {
        param_4 = &DAT_ffffffff;
        (**(code **)(*plVar13 + 0x58))(plVar13,2);
        uVar15 = extraout_x1_23;
      }
      uVar22 = 1;
LAB_710309a54c:
      *(ulong *)(param_2 + 0x788) = uVar22 | 0x4334000000000000;
      goto LAB_710309a554;
    }
    if (600.0 <= fVar25) {
      lVar17 = *(long *)(param_2 + 0x848);
      if (lVar17 != 0) {
        if ((*(char *)(lVar17 + 0xe0) != '\0') && (lVar17 = *(long *)(lVar17 + 200), lVar17 != 0)) {
          puVar20 = *(undefined8 **)(lVar17 + 0x20);
          *(undefined4 *)(lVar17 + 0x40) = 0;
          if (*(undefined8 **)(lVar17 + 0x18) != puVar20) {
            uVar22 = 0;
            puVar24 = *(undefined8 **)(lVar17 + 0x18);
            do {
              puVar23 = puVar24 + 1;
              auVar5._8_8_ = 0;
              auVar5._0_8_ = uVar22;
              (**(code **)(*(long *)*puVar24 + 0x18))(auVar5 << 0x40,(long *)*puVar24,1);
              puVar24 = puVar23;
            } while (puVar20 != puVar23);
            puVar24 = *(undefined8 **)(lVar17 + 0x20);
            for (puVar20 = *(undefined8 **)(lVar17 + 0x18); puVar20 != puVar24;
                puVar20 = puVar20 + 1) {
                    /* WARNING: Read-only address (ram,0x0071044656b0) is written */
                    /* WARNING: Read-only address (ram,0x0071044661c0) is written */
                    /* WARNING: Read-only address (ram,0x0071044697a0) is written */
              (**(code **)(*(long *)*puVar20 + 0x38))();
            }
          }
        }
        lVar17 = *(long *)(param_2 + 0x848);
        if (((lVar17 != 0) && (*(char *)(lVar17 + 0xe0) != '\0')) &&
           (lVar17 = *(long *)(lVar17 + 200), lVar17 != 0)) {
          puVar20 = *(undefined8 **)(lVar17 + 0x20);
          *(undefined4 *)(lVar17 + 0x3c) = 0;
          if (*(undefined8 **)(lVar17 + 0x18) != puVar20) {
            uVar22 = 0;
            puVar24 = *(undefined8 **)(lVar17 + 0x18);
            do {
              puVar23 = puVar24 + 1;
              auVar6._8_8_ = 0;
              auVar6._0_8_ = uVar22;
              (**(code **)(*(long *)*puVar24 + 0x18))(auVar6 << 0x40,(long *)*puVar24,0);
              puVar24 = puVar23;
            } while (puVar20 != puVar23);
            puVar24 = *(undefined8 **)(lVar17 + 0x20);
            for (puVar20 = *(undefined8 **)(lVar17 + 0x18); puVar20 != puVar24;
                puVar20 = puVar20 + 1) {
                    /* WARNING: Read-only address (ram,0x0071044656b0) is written */
                    /* WARNING: Read-only address (ram,0x0071044661c0) is written */
                    /* WARNING: Read-only address (ram,0x0071044697a0) is written */
              (**(code **)(*(long *)*puVar20 + 0x38))();
            }
          }
        }
      }
      FUN_710260fdd0(0,*(long *)(param_2 + 0x840),1);
      FUN_710260fdd0(0,*(long *)(param_2 + 0x850),1);
      lVar17 = *(long *)(param_2 + 0x848);
      uVar15 = extraout_x1_01;
      if (lVar17 != 0) {
        if ((*(char *)(lVar17 + 0xe0) != '\0') && (lVar17 = *(long *)(lVar17 + 200), lVar17 != 0)) {
          puVar20 = *(undefined8 **)(lVar17 + 0x20);
          *(undefined4 *)(lVar17 + 0x40) = 0;
          if (*(undefined8 **)(lVar17 + 0x18) != puVar20) {
            uVar22 = 0;
            puVar24 = *(undefined8 **)(lVar17 + 0x18);
            do {
              puVar23 = puVar24 + 1;
              auVar7._8_8_ = 0;
              auVar7._0_8_ = uVar22;
              (**(code **)(*(long *)*puVar24 + 0x18))(auVar7 << 0x40,(long *)*puVar24,1);
              puVar24 = puVar23;
            } while (puVar20 != puVar23);
            puVar24 = *(undefined8 **)(lVar17 + 0x20);
            uVar15 = extraout_x1_02;
            for (puVar20 = *(undefined8 **)(lVar17 + 0x18); puVar20 != puVar24;
                puVar20 = puVar20 + 1) {
                    /* WARNING: Read-only address (ram,0x0071044656b0) is written */
                    /* WARNING: Read-only address (ram,0x0071044661c0) is written */
                    /* WARNING: Read-only address (ram,0x0071044697a0) is written */
              (**(code **)(*(long *)*puVar20 + 0x38))();
              uVar15 = extraout_x1_03;
            }
          }
        }
        lVar17 = *(long *)(param_2 + 0x848);
        if (((lVar17 != 0) && (*(char *)(lVar17 + 0xe0) != '\0')) &&
           (lVar17 = *(long *)(lVar17 + 200), lVar17 != 0)) {
          puVar20 = *(undefined8 **)(lVar17 + 0x20);
          *(undefined4 *)(lVar17 + 0x3c) = 0;
          if (*(undefined8 **)(lVar17 + 0x18) != puVar20) {
            uVar22 = 0;
            puVar24 = *(undefined8 **)(lVar17 + 0x18);
            do {
              puVar23 = puVar24 + 1;
              auVar8._8_8_ = 0;
              auVar8._0_8_ = uVar22;
              (**(code **)(*(long *)*puVar24 + 0x18))(auVar8 << 0x40,(long *)*puVar24,0);
              puVar24 = puVar23;
            } while (puVar20 != puVar23);
            puVar24 = *(undefined8 **)(lVar17 + 0x20);
            uVar15 = extraout_x1_04;
            for (puVar20 = *(undefined8 **)(lVar17 + 0x18); puVar20 != puVar24;
                puVar20 = puVar20 + 1) {
              (**(code **)(*(long *)*puVar20 + 0x38))();
              uVar15 = extraout_x1_05;
            }
          }
        }
      }
    }
    break;
  case 1:
    if (*(float *)(param_2 + 0x78c) <= 0.0) {
      *(undefined4 *)(param_2 + 0x78c) = *(undefined4 *)(param_2 + 0x778);
      *(undefined4 *)(param_2 + 0x788) = 2;
      goto LAB_710309a554;
    }
    break;
  case 2:
    if (*(float *)(param_2 + 0x78c) <= 0.0) {
      plVar13 = *(long **)(**(long **)(param_2 + 0x338) + 8);
      if (plVar13 != (long *)0x0) {
        param_4 = &DAT_ffffffff;
        (**(code **)(*plVar13 + 0x58))(plVar13,3);
        uVar15 = extraout_x1_24;
      }
      uVar22 = 3;
      goto LAB_710309a54c;
    }
    if (1380.0 <= fVar25) {
      lVar17 = *(long *)(param_2 + 0x848);
      if (lVar17 != 0) {
        if ((*(char *)(lVar17 + 0xe0) != '\0') && (lVar17 = *(long *)(lVar17 + 200), lVar17 != 0)) {
          puVar20 = *(undefined8 **)(lVar17 + 0x18);
          puVar24 = *(undefined8 **)(lVar17 + 0x20);
          *(undefined4 *)(lVar17 + 0x40) = 0x44430000;
          if (puVar20 != puVar24) {
            do {
              puVar23 = puVar20 + 1;
              (**(code **)(*(long *)*puVar20 + 0x18))(0x44430000,(long *)*puVar20,1);
              puVar20 = puVar23;
            } while (puVar24 != puVar23);
            puVar24 = *(undefined8 **)(lVar17 + 0x20);
            for (puVar20 = *(undefined8 **)(lVar17 + 0x18); puVar20 != puVar24;
                puVar20 = puVar20 + 1) {
                    /* WARNING: Read-only address (ram,0x0071044656b0) is written */
                    /* WARNING: Read-only address (ram,0x0071044661c0) is written */
                    /* WARNING: Read-only address (ram,0x0071044697a0) is written */
              (**(code **)(*(long *)*puVar20 + 0x38))();
            }
          }
        }
        lVar17 = *(long *)(param_2 + 0x848);
        if (((lVar17 != 0) && (*(char *)(lVar17 + 0xe0) != '\0')) &&
           (lVar17 = *(long *)(lVar17 + 200), lVar17 != 0)) {
          puVar20 = *(undefined8 **)(lVar17 + 0x18);
          puVar24 = *(undefined8 **)(lVar17 + 0x20);
          *(undefined4 *)(lVar17 + 0x3c) = 0x44430000;
          if (puVar20 != puVar24) {
            do {
              puVar23 = puVar20 + 1;
              (**(code **)(*(long *)*puVar20 + 0x18))(0x44430000,(long *)*puVar20,0);
              puVar20 = puVar23;
            } while (puVar24 != puVar23);
            puVar24 = *(undefined8 **)(lVar17 + 0x20);
            for (puVar20 = *(undefined8 **)(lVar17 + 0x18); puVar20 != puVar24;
                puVar20 = puVar20 + 1) {
                    /* WARNING: Read-only address (ram,0x0071044656b0) is written */
                    /* WARNING: Read-only address (ram,0x0071044661c0) is written */
                    /* WARNING: Read-only address (ram,0x0071044697a0) is written */
              (**(code **)(*(long *)*puVar20 + 0x38))();
            }
          }
        }
      }
      uVar59 = 0;
      FUN_710260fdd0(0x44430000,*(long *)(param_2 + 0x840),1);
      FUN_710260fdd0(0x44430000,*(long *)(param_2 + 0x850),1);
      lVar17 = *(long *)(param_2 + 0x848);
      uVar15 = extraout_x1_06;
      if (lVar17 != 0) {
        if ((*(char *)(lVar17 + 0xe0) != '\0') && (lVar17 = *(long *)(lVar17 + 200), lVar17 != 0)) {
          puVar20 = *(undefined8 **)(lVar17 + 0x20);
          *(undefined4 *)(lVar17 + 0x40) = 0x44430000;
          puVar24 = *(undefined8 **)(lVar17 + 0x18);
          if (*(undefined8 **)(lVar17 + 0x18) != puVar20) {
            do {
              puVar23 = puVar24 + 1;
              auVar27._8_8_ = uVar59;
              auVar27._0_8_ = 0x44430000;
              (**(code **)(*(long *)*puVar24 + 0x18))(auVar27,(long *)*puVar24,1);
              puVar24 = puVar23;
            } while (puVar20 != puVar23);
            puVar24 = *(undefined8 **)(lVar17 + 0x20);
            uVar15 = extraout_x1_07;
            for (puVar20 = *(undefined8 **)(lVar17 + 0x18); puVar20 != puVar24;
                puVar20 = puVar20 + 1) {
                    /* WARNING: Read-only address (ram,0x0071044656b0) is written */
                    /* WARNING: Read-only address (ram,0x0071044661c0) is written */
                    /* WARNING: Read-only address (ram,0x0071044697a0) is written */
              (**(code **)(*(long *)*puVar20 + 0x38))();
              uVar15 = extraout_x1_08;
            }
          }
        }
        lVar17 = *(long *)(param_2 + 0x848);
        if (((lVar17 != 0) && (*(char *)(lVar17 + 0xe0) != '\0')) &&
           (lVar17 = *(long *)(lVar17 + 200), lVar17 != 0)) {
          puVar20 = *(undefined8 **)(lVar17 + 0x20);
          *(undefined4 *)(lVar17 + 0x3c) = 0x44430000;
          puVar24 = *(undefined8 **)(lVar17 + 0x18);
          if (*(undefined8 **)(lVar17 + 0x18) != puVar20) {
            do {
              puVar23 = puVar24 + 1;
              auVar28._8_8_ = uVar59;
              auVar28._0_8_ = 0x44430000;
              (**(code **)(*(long *)*puVar24 + 0x18))(auVar28,(long *)*puVar24,0);
              puVar24 = puVar23;
            } while (puVar20 != puVar23);
            puVar24 = *(undefined8 **)(lVar17 + 0x20);
            uVar15 = extraout_x1_09;
            for (puVar20 = *(undefined8 **)(lVar17 + 0x18); puVar20 != puVar24;
                puVar20 = puVar20 + 1) {
              (**(code **)(*(long *)*puVar20 + 0x38))();
              uVar15 = extraout_x1_10;
            }
          }
        }
      }
    }
    break;
  case 3:
    if (*(float *)(param_2 + 0x78c) <= 0.0) {
      *(undefined4 *)(param_2 + 0x78c) = *(undefined4 *)(param_2 + 0x778);
      *(undefined4 *)(param_2 + 0x788) = 4;
      goto LAB_710309a554;
    }
    break;
  case 4:
    if (*(float *)(param_2 + 0x78c) <= 0.0) {
      plVar13 = *(long **)(**(long **)(param_2 + 0x338) + 8);
      if (plVar13 != (long *)0x0) {
        param_4 = &DAT_ffffffff;
        (**(code **)(*plVar13 + 0x58))(plVar13,4);
        uVar15 = extraout_x1_25;
      }
      uVar22 = 5;
      goto LAB_710309a54c;
    }
    if (2160.0 <= fVar25) {
      lVar17 = *(long *)(param_2 + 0x848);
      if (lVar17 != 0) {
        if ((*(char *)(lVar17 + 0xe0) != '\0') && (lVar17 = *(long *)(lVar17 + 200), lVar17 != 0)) {
          puVar20 = *(undefined8 **)(lVar17 + 0x18);
          puVar24 = *(undefined8 **)(lVar17 + 0x20);
          *(undefined4 *)(lVar17 + 0x40) = 0x44c30000;
          if (puVar20 != puVar24) {
            do {
              puVar23 = puVar20 + 1;
              (**(code **)(*(long *)*puVar20 + 0x18))(0x44c30000,(long *)*puVar20,1);
              puVar20 = puVar23;
            } while (puVar24 != puVar23);
            puVar24 = *(undefined8 **)(lVar17 + 0x20);
            for (puVar20 = *(undefined8 **)(lVar17 + 0x18); puVar20 != puVar24;
                puVar20 = puVar20 + 1) {
                    /* WARNING: Read-only address (ram,0x0071044656b0) is written */
                    /* WARNING: Read-only address (ram,0x0071044661c0) is written */
                    /* WARNING: Read-only address (ram,0x0071044697a0) is written */
              (**(code **)(*(long *)*puVar20 + 0x38))();
            }
          }
        }
        lVar17 = *(long *)(param_2 + 0x848);
        if (((lVar17 != 0) && (*(char *)(lVar17 + 0xe0) != '\0')) &&
           (lVar17 = *(long *)(lVar17 + 200), lVar17 != 0)) {
          puVar20 = *(undefined8 **)(lVar17 + 0x18);
          puVar24 = *(undefined8 **)(lVar17 + 0x20);
          *(undefined4 *)(lVar17 + 0x3c) = 0x44c30000;
          if (puVar20 != puVar24) {
            do {
              puVar23 = puVar20 + 1;
              (**(code **)(*(long *)*puVar20 + 0x18))(0x44c30000,(long *)*puVar20,0);
              puVar20 = puVar23;
            } while (puVar24 != puVar23);
            puVar24 = *(undefined8 **)(lVar17 + 0x20);
            for (puVar20 = *(undefined8 **)(lVar17 + 0x18); puVar20 != puVar24;
                puVar20 = puVar20 + 1) {
                    /* WARNING: Read-only address (ram,0x0071044656b0) is written */
                    /* WARNING: Read-only address (ram,0x0071044661c0) is written */
                    /* WARNING: Read-only address (ram,0x0071044697a0) is written */
              (**(code **)(*(long *)*puVar20 + 0x38))();
            }
          }
        }
      }
      uVar59 = 0;
      FUN_710260fdd0(0x44c30000,*(long *)(param_2 + 0x840),1);
      FUN_710260fdd0(0x44c30000,*(long *)(param_2 + 0x850),1);
      lVar17 = *(long *)(param_2 + 0x848);
      uVar15 = extraout_x1_11;
      if (lVar17 != 0) {
        if ((*(char *)(lVar17 + 0xe0) != '\0') && (lVar17 = *(long *)(lVar17 + 200), lVar17 != 0)) {
          puVar20 = *(undefined8 **)(lVar17 + 0x20);
          *(undefined4 *)(lVar17 + 0x40) = 0x44c30000;
          puVar24 = *(undefined8 **)(lVar17 + 0x18);
          if (*(undefined8 **)(lVar17 + 0x18) != puVar20) {
            do {
              puVar23 = puVar24 + 1;
              auVar50._8_8_ = uVar59;
              auVar50._0_8_ = 0x44c30000;
              (**(code **)(*(long *)*puVar24 + 0x18))(auVar50,(long *)*puVar24,1);
              puVar24 = puVar23;
            } while (puVar20 != puVar23);
            puVar24 = *(undefined8 **)(lVar17 + 0x20);
            uVar15 = extraout_x1_12;
            for (puVar20 = *(undefined8 **)(lVar17 + 0x18); puVar20 != puVar24;
                puVar20 = puVar20 + 1) {
                    /* WARNING: Read-only address (ram,0x0071044656b0) is written */
                    /* WARNING: Read-only address (ram,0x0071044661c0) is written */
                    /* WARNING: Read-only address (ram,0x0071044697a0) is written */
              (**(code **)(*(long *)*puVar20 + 0x38))();
              uVar15 = extraout_x1_13;
            }
          }
        }
        lVar17 = *(long *)(param_2 + 0x848);
        if (((lVar17 != 0) && (*(char *)(lVar17 + 0xe0) != '\0')) &&
           (lVar17 = *(long *)(lVar17 + 200), lVar17 != 0)) {
          puVar20 = *(undefined8 **)(lVar17 + 0x20);
          *(undefined4 *)(lVar17 + 0x3c) = 0x44c30000;
          puVar24 = *(undefined8 **)(lVar17 + 0x18);
          if (*(undefined8 **)(lVar17 + 0x18) != puVar20) {
            do {
              puVar23 = puVar24 + 1;
              auVar29._8_8_ = uVar59;
              auVar29._0_8_ = 0x44c30000;
              (**(code **)(*(long *)*puVar24 + 0x18))(auVar29,(long *)*puVar24,0);
              puVar24 = puVar23;
            } while (puVar20 != puVar23);
            puVar24 = *(undefined8 **)(lVar17 + 0x20);
            uVar15 = extraout_x1_14;
            for (puVar20 = *(undefined8 **)(lVar17 + 0x18); puVar20 != puVar24;
                puVar20 = puVar20 + 1) {
              (**(code **)(*(long *)*puVar20 + 0x38))();
              uVar15 = extraout_x1_15;
            }
          }
        }
      }
    }
    break;
  case 5:
    if (*(float *)(param_2 + 0x78c) <= 0.0) {
      *(undefined4 *)(param_2 + 0x78c) = *(undefined4 *)(param_2 + 0x778);
      *(undefined4 *)(param_2 + 0x788) = 6;
      goto LAB_710309a554;
    }
    break;
  case 6:
    if (*(float *)(param_2 + 0x78c) <= 0.0) {
      plVar13 = *(long **)(**(long **)(param_2 + 0x338) + 8);
      if (plVar13 != (long *)0x0) {
        param_4 = &DAT_ffffffff;
        (**(code **)(*plVar13 + 0x58))(plVar13,5);
        uVar15 = extraout_x1_26;
      }
      uVar22 = 7;
      goto LAB_710309a54c;
    }
    if (2940.0 <= fVar25) {
      lVar17 = *(long *)(param_2 + 0x848);
      if (lVar17 != 0) {
        if ((*(char *)(lVar17 + 0xe0) != '\0') && (lVar17 = *(long *)(lVar17 + 200), lVar17 != 0)) {
          puVar20 = *(undefined8 **)(lVar17 + 0x18);
          puVar24 = *(undefined8 **)(lVar17 + 0x20);
          *(undefined4 *)(lVar17 + 0x40) = 0x45124000;
          if (puVar20 != puVar24) {
            do {
              puVar23 = puVar20 + 1;
              (**(code **)(*(long *)*puVar20 + 0x18))(0x45124000,(long *)*puVar20,1);
              puVar20 = puVar23;
            } while (puVar24 != puVar23);
            puVar24 = *(undefined8 **)(lVar17 + 0x20);
            for (puVar20 = *(undefined8 **)(lVar17 + 0x18); puVar20 != puVar24;
                puVar20 = puVar20 + 1) {
                    /* WARNING: Read-only address (ram,0x0071044656b0) is written */
                    /* WARNING: Read-only address (ram,0x0071044661c0) is written */
                    /* WARNING: Read-only address (ram,0x0071044697a0) is written */
              (**(code **)(*(long *)*puVar20 + 0x38))();
            }
          }
        }
        lVar17 = *(long *)(param_2 + 0x848);
        if (((lVar17 != 0) && (*(char *)(lVar17 + 0xe0) != '\0')) &&
           (lVar17 = *(long *)(lVar17 + 200), lVar17 != 0)) {
          puVar20 = *(undefined8 **)(lVar17 + 0x18);
          puVar24 = *(undefined8 **)(lVar17 + 0x20);
          *(undefined4 *)(lVar17 + 0x3c) = 0x45124000;
          if (puVar20 != puVar24) {
            do {
              puVar23 = puVar20 + 1;
              (**(code **)(*(long *)*puVar20 + 0x18))(0x45124000,(long *)*puVar20,0);
              puVar20 = puVar23;
            } while (puVar24 != puVar23);
            puVar24 = *(undefined8 **)(lVar17 + 0x20);
            for (puVar20 = *(undefined8 **)(lVar17 + 0x18); puVar20 != puVar24;
                puVar20 = puVar20 + 1) {
                    /* WARNING: Read-only address (ram,0x0071044656b0) is written */
                    /* WARNING: Read-only address (ram,0x0071044661c0) is written */
                    /* WARNING: Read-only address (ram,0x0071044697a0) is written */
              (**(code **)(*(long *)*puVar20 + 0x38))();
            }
          }
        }
      }
      uVar59 = 0;
      FUN_710260fdd0(0x45124000,*(long *)(param_2 + 0x840),1);
      FUN_710260fdd0(0x45124000,*(long *)(param_2 + 0x850),1);
      lVar17 = *(long *)(param_2 + 0x848);
      uVar15 = extraout_x1_16;
      if (lVar17 != 0) {
        if ((*(char *)(lVar17 + 0xe0) != '\0') && (lVar17 = *(long *)(lVar17 + 200), lVar17 != 0)) {
          puVar20 = *(undefined8 **)(lVar17 + 0x20);
          *(undefined4 *)(lVar17 + 0x40) = 0x45124000;
          puVar24 = *(undefined8 **)(lVar17 + 0x18);
          if (*(undefined8 **)(lVar17 + 0x18) != puVar20) {
            do {
              puVar23 = puVar24 + 1;
              auVar31._8_8_ = uVar59;
              auVar31._0_8_ = 0x45124000;
              (**(code **)(*(long *)*puVar24 + 0x18))(auVar31,(long *)*puVar24,1);
              puVar24 = puVar23;
            } while (puVar20 != puVar23);
            puVar24 = *(undefined8 **)(lVar17 + 0x20);
            uVar15 = extraout_x1_17;
            for (puVar20 = *(undefined8 **)(lVar17 + 0x18); puVar20 != puVar24;
                puVar20 = puVar20 + 1) {
                    /* WARNING: Read-only address (ram,0x0071044656b0) is written */
                    /* WARNING: Read-only address (ram,0x0071044661c0) is written */
                    /* WARNING: Read-only address (ram,0x0071044697a0) is written */
              (**(code **)(*(long *)*puVar20 + 0x38))();
              uVar15 = extraout_x1_18;
            }
          }
        }
        lVar17 = *(long *)(param_2 + 0x848);
        if (((lVar17 != 0) && (*(char *)(lVar17 + 0xe0) != '\0')) &&
           (lVar17 = *(long *)(lVar17 + 200), lVar17 != 0)) {
          puVar20 = *(undefined8 **)(lVar17 + 0x20);
          *(undefined4 *)(lVar17 + 0x3c) = 0x45124000;
          puVar24 = *(undefined8 **)(lVar17 + 0x18);
          if (*(undefined8 **)(lVar17 + 0x18) != puVar20) {
            do {
              puVar23 = puVar24 + 1;
              auVar41._8_8_ = uVar59;
              auVar41._0_8_ = 0x45124000;
              (**(code **)(*(long *)*puVar24 + 0x18))(auVar41,(long *)*puVar24,0);
              puVar24 = puVar23;
            } while (puVar20 != puVar23);
            puVar24 = *(undefined8 **)(lVar17 + 0x20);
            uVar15 = extraout_x1_19;
            for (puVar20 = *(undefined8 **)(lVar17 + 0x18); puVar20 != puVar24;
                puVar20 = puVar20 + 1) {
              (**(code **)(*(long *)*puVar20 + 0x38))();
              uVar15 = extraout_x1_20;
            }
          }
        }
      }
    }
    break;
  case 7:
    if (*(float *)(param_2 + 0x78c) <= 0.0) {
      *(undefined4 *)(param_2 + 0x78c) = *(undefined4 *)(param_2 + 0x778);
      *(undefined4 *)(param_2 + 0x788) = 0;
      goto LAB_710309a554;
    }
    break;
  case 0xffffffff:
    uVar12 = *(int *)(param_2 + 0x88c) - 1;
    iVar16 = uVar12 * 2 + 2;
    if (2 < uVar12) {
      iVar16 = 0;
    }
    *(int *)(param_2 + 0x788) = iVar16;
    *(undefined4 *)(param_2 + 0x78c) = *(undefined4 *)(param_2 + 0x778);
LAB_710309a554:
    FUN_710309b870(param_2,uVar15,param_4,(byte ****)param_5,(long ****)param_6,param_7,param_8,
                   param_9);
    uVar15 = extraout_x1_27;
  }
  if (((*(char *)(param_2 + 0x18) == '\0') || (*(long *)(param_2 + 0x790) == 0)) ||
     ((0.0 < *(float *)(param_2 + 0x79c) &&
      (fVar25 = *(float *)(param_2 + 0x79c) - fVar58, *(float *)(param_2 + 0x79c) = fVar25,
      0.0 < fVar25)))) {
LAB_710309a698:
    cVar4 = *(char *)(param_2 + 2000);
    fVar25 = _DAT_7107529010;
  }
  else {
    iVar16 = *(int *)(param_2 + 0x798);
    if (iVar16 == 0) {
      puVar18 = *(uint **)(param_2 + 0x340);
      fVar25 = *(float *)(param_2 + 0x744);
      fVar26 = *(float *)(param_2 + 0x748);
      uVar12 = *puVar18 ^ *puVar18 << 0xb;
      *puVar18 = puVar18[1];
      uVar1 = puVar18[3];
      uVar12 = uVar12 ^ uVar12 >> 8 ^ uVar1 ^ uVar1 >> 0x13;
      puVar18[1] = puVar18[2];
      puVar18[2] = uVar1;
      puVar18[3] = uVar12;
      puVar18 = *(uint **)(param_2 + 0x340);
      *(float *)(param_2 + 0x7a0) = fVar25 + (fVar26 - fVar25) * (float)uVar12 * 2.3283064e-10;
      uVar12 = *puVar18;
      *puVar18 = puVar18[1];
      uVar1 = puVar18[3];
      uVar12 = uVar12 ^ uVar12 << 0xb;
      uVar12 = uVar12 ^ uVar12 >> 8 ^ uVar1 ^ uVar1 >> 0x13;
      puVar18[1] = puVar18[2];
      puVar18[2] = uVar1;
      puVar18[3] = uVar12;
      fVar25 = (float)uVar12 * 45.0 * 2.3283064e-10 + -22.5;
      *(float *)(param_2 + 0x7a4) = fVar25;
      fVar25 = fVar25 - *(float *)(param_2 + 0x7c8);
      if (0.0 < fVar25) {
        *(undefined4 *)(param_2 + 0x7a8) = *(undefined4 *)(param_2 + 0x74c);
      }
      if (fVar25 < 0.0) {
        *(float *)(param_2 + 0x7a8) = -*(float *)(param_2 + 0x74c);
      }
      *(undefined4 *)(param_2 + 0x798) = 1;
LAB_710309a67c:
      fVar25 = *(float *)(param_2 + 0x7a0) - fVar58;
      *(float *)(param_2 + 0x7a0) = fVar25;
      if (fVar25 <= 0.0) {
        *(undefined4 *)(param_2 + 0x798) = 2;
      }
      goto LAB_710309a698;
    }
    if (iVar16 != 2) {
      if (iVar16 != 1) goto LAB_710309a698;
      goto LAB_710309a67c;
    }
    fVar25 = *(float *)(param_2 + 0x7c8);
    fVar26 = *(float *)(param_2 + 0x7a8);
    if (((0.0 < fVar26) && (*(float *)(param_2 + 0x7a4) < fVar25)) ||
       ((fVar26 < 0.0 && (fVar25 < *(float *)(param_2 + 0x7a4))))) {
      *(undefined4 *)(param_2 + 0x798) = 0;
      cVar4 = *(char *)(param_2 + 2000);
      fVar25 = _DAT_7107529010;
    }
    else {
      *(undefined1 *)(param_2 + 2000) = 1;
      *(ulong *)(param_2 + 0x7c8) = (ulong)(uint)(fVar26 * fVar58 + fVar25);
      *(undefined4 *)(param_2 + 0x7c0) = *(undefined4 *)(param_2 + 0x7c0);
      *(undefined4 *)(param_2 + 0x7c4) = *(undefined4 *)(param_2 + 0x7c4);
      cVar4 = *(char *)(param_2 + 2000);
      fVar25 = _DAT_7107529010;
    }
  }
  _DAT_7107529010 = fVar25;
  if ((cVar4 != '\0') && (*(long *)(param_2 + 0x790) != 0)) {
    fVar26 = *(float *)(param_2 + 0x7c8) * 0.017453292;
    fVar35 = fVar26 * _Float1Divided2Pi;
    auVar30._0_4_ =
         (int)(_Float1Divided2Pi * 0.0 +
              (float)(-(uint)(0.0 <= _Float1Divided2Pi * 0.0) & 0x80000000 ^ 0xbf000000));
    auVar30._4_4_ =
         (int)(_Float1Divided2Pi * 0.0 +
              (float)(-(uint)(0.0 <= _Float1Divided2Pi * 0.0) & 0x80000000 ^ 0xbf000000));
    auVar30._8_4_ = (int)(fVar35 + (float)(-(uint)(0.0 <= fVar35) & 0x80000000 ^ 0xbf000000));
    auVar30._12_4_ =
         (int)(_Float1Divided2Pi * 0.0 +
              (float)(-(uint)(0.0 <= _Float1Divided2Pi * 0.0) & 0x80000000 ^ 0xbf000000));
    auVar31 = NEON_scvtf(auVar30,4);
    auVar53._0_4_ = 0.0 - auVar31._0_4_ * _Float2Pi;
    auVar53._4_4_ = 0.0 - auVar31._4_4_ * _Float2Pi;
    auVar53._8_4_ = fVar26 - auVar31._8_4_ * _Float2Pi;
    auVar53._12_4_ = 0.0 - auVar31._12_4_ * _Float2Pi;
    fVar26 = -_FloatPiDivided2;
    auVar40._0_8_ =
         CONCAT44(-(uint)(_FloatPiDivided2 < auVar53._4_4_),
                  -(uint)(_FloatPiDivided2 < auVar53._0_4_));
    auVar40._8_4_ = -(uint)(_FloatPiDivided2 < auVar53._8_4_);
    auVar40._12_4_ = -(uint)(_FloatPiDivided2 < auVar53._12_4_);
    auVar52._8_8_ = auVar40._8_8_;
    auVar52._0_8_ = auVar40._0_8_;
    auVar49._0_4_ = _FloatPi - auVar53._0_4_;
    auVar49._4_4_ = _FloatPi - auVar53._4_4_;
    auVar49._8_4_ = _FloatPi - auVar53._8_4_;
    auVar49._12_4_ = _FloatPi - auVar53._12_4_;
    auVar53 = auVar53 ^ (auVar53 ^ auVar49) & auVar52;
    auVar56._0_8_ = CONCAT44(-(uint)(auVar53._4_4_ < fVar26),-(uint)(auVar53._0_4_ < fVar26));
    auVar56._8_4_ = -(uint)(auVar53._8_4_ < fVar26);
    auVar56._12_4_ = -(uint)(auVar53._12_4_ < fVar26);
    fVar26 = -_FloatPi;
    auVar32._0_4_ = fVar26 - auVar53._0_4_;
    auVar32._4_4_ = fVar26 - auVar53._4_4_;
    auVar32._8_4_ = fVar26 - auVar53._8_4_;
    auVar32._12_4_ = fVar26 - auVar53._12_4_;
    auVar50 = NEON_fmov(0xbf800000,4);
    auVar31 = NEON_fmov(0x3f800000,4);
    auVar46._8_8_ = auVar56._8_8_;
    auVar46._0_8_ = auVar56._0_8_;
    auVar41 = auVar31 ^ (auVar31 ^ auVar50) & auVar40;
    auVar41 = auVar41 ^ (auVar41 ^ auVar50) & auVar56;
    auVar53 = auVar53 ^ (auVar53 ^ auVar32) & auVar46;
    fVar45 = auVar53._0_4_;
    fVar26 = fVar45 * fVar45;
    fVar51 = auVar53._4_4_;
    fVar35 = fVar51 * fVar51;
    fVar54 = auVar53._8_4_;
    fVar43 = fVar54 * fVar54;
    fVar55 = auVar53._12_4_;
    fVar44 = fVar55 * fVar55;
    fVar47 = -_DAT_7107528008;
    fVar48 = -_DAT_7107528010;
    auVar33._0_4_ =
         (auVar31._0_4_ +
         fVar26 * (fVar48 + fVar26 * (_DAT_710752800c +
                                     fVar26 * (fVar47 + fVar26 * (_DAT_7107528004 -
                                                                 fVar26 * _SinCoefficients))))) *
         fVar45;
    auVar33._4_4_ =
         (auVar31._4_4_ +
         fVar35 * (fVar48 + fVar35 * (_DAT_710752800c +
                                     fVar35 * (fVar47 + fVar35 * (_DAT_7107528004 -
                                                                 fVar35 * _SinCoefficients))))) *
         fVar51;
    auVar33._8_4_ =
         (auVar31._8_4_ +
         fVar43 * (fVar48 + fVar43 * (_DAT_710752800c +
                                     fVar43 * (fVar47 + fVar43 * (_DAT_7107528004 -
                                                                 fVar43 * _SinCoefficients))))) *
         fVar54;
    auVar33._12_4_ =
         (auVar31._12_4_ +
         fVar44 * (fVar48 + fVar44 * (_DAT_710752800c +
                                     fVar44 * (fVar47 + fVar44 * (_DAT_7107528004 -
                                                                 fVar44 * _SinCoefficients))))) *
         fVar55;
    fVar45 = -_DAT_7107529008;
    fVar51 = _DAT_710752900c +
             fVar26 * (fVar45 + fVar26 * (_DAT_7107529004 - fVar26 * _CosCoefficients));
    fVar54 = _DAT_710752900c +
             fVar35 * (fVar45 + fVar35 * (_DAT_7107529004 - fVar35 * _CosCoefficients));
    fVar55 = _DAT_710752900c +
             fVar43 * (fVar45 + fVar43 * (_DAT_7107529004 - fVar43 * _CosCoefficients));
    fVar45 = _DAT_710752900c +
             fVar44 * (fVar45 + fVar44 * (_DAT_7107529004 - fVar44 * _CosCoefficients));
    *(undefined1 *)(param_2 + 2000) = 0;
    fVar25 = -fVar25;
    auVar36._0_4_ = (auVar31._0_4_ + fVar26 * (fVar25 + fVar26 * fVar51)) * auVar41._0_4_;
    auVar36._4_4_ = (auVar31._4_4_ + fVar35 * (fVar25 + fVar35 * fVar54)) * auVar41._4_4_;
    auVar36._8_4_ = (auVar31._8_4_ + fVar43 * (fVar25 + fVar43 * fVar55)) * auVar41._8_4_;
    auVar36._12_4_ = (auVar31._12_4_ + fVar44 * (fVar25 + fVar44 * fVar45)) * auVar41._12_4_;
    auVar41 = NEON_ext(auVar36,auVar36,8,1);
    auVar31 = NEON_ext(auVar33,auVar33,8,1);
    fVar25 = auVar41._0_4_;
    fVar26 = auVar31._0_4_;
    local_110 = auVar36._4_4_ * fVar25;
    fStack_10c = auVar36._4_4_ * fVar26;
    uStack_108 = (ulong)(uint)(auVar33._4_4_ * -1.0);
    uStack_f8 = CONCAT44(auVar36._0_4_ * 0.0 * 0.0 + auVar33._0_4_ * 0.0,
                         auVar36._0_4_ * 0.0 * 0.0 + auVar36._4_4_ * 1.0 * auVar33._0_4_);
    local_100 = CONCAT44(fVar25 * auVar36._0_4_ * 1.0 + auVar33._4_4_ * fVar26 * auVar33._0_4_,
                         fVar26 * auVar36._0_4_ * -1.0 + auVar33._4_4_ * fVar25 * auVar33._0_4_);
    uStack_e8 = CONCAT44(auVar33._0_4_ * 0.0 * DAT_71044697a0._12_4_ + auVar36._0_4_ * 0.0,
                         auVar33._0_4_ * 0.0 * DAT_71044697a0._8_4_ +
                         auVar36._4_4_ * 1.0 * auVar36._0_4_);
    local_f0 = CONCAT44(fVar25 * auVar33._0_4_ * DAT_71044697a0._4_4_ +
                        auVar33._4_4_ * fVar26 * auVar36._0_4_,
                        fVar26 * auVar33._0_4_ * (float)DAT_71044697a0 +
                        auVar33._4_4_ * fVar25 * auVar36._0_4_);
    auVar42._0_12_ = SUB1612(*(undefined1 (*) [16])(param_2 + 0x7b0),0);
    auVar42._12_4_ = 0x3f800000;
    auVar31 = NEON_ext(auVar42,*(undefined1 (*) [16])(param_2 + 0x7b0),0xc,1);
    auVar41 = NEON_ext(auVar31,auVar42,4,1);
    auVar31 = NEON_ext(auVar31,auVar31,8,1);
    auVar31 = NEON_ext(auVar41,auVar31,0xc,1);
    uStack_d8 = auVar31._8_8_;
    local_e0 = auVar31._0_8_;
    lVar17 = *(long *)(*(long *)(param_2 + 0x790) + 0x70);
    if (lVar17 != 0) {
      (**(code **)(**(long **)(lVar17 + 0x90) + 0x148))(*(long **)(lVar17 + 0x90),&local_110);
      lVar17 = *(long *)(lVar17 + 0xd8);
      uVar15 = extraout_x1_28;
      if (lVar17 != 0) {
        local_b8 = uStack_f8;
        local_c0 = local_100;
        uStack_c8 = uStack_108;
        local_d0._4_4_ = fStack_10c;
        local_d0._0_4_ = local_110;
        local_98 = uStack_d8;
        local_a0 = local_e0;
        local_a8 = uStack_e8;
        local_b0 = local_f0;
        if (*(char *)(*(long *)(lVar17 + 8) + 0xa8) != '\0') {
          plVar13 = *(long **)(*(long *)(lVar17 + 8) + 0x48);
          (**(code **)(*plVar13 + 0x20))(plVar13,&local_d0);
          uVar15 = extraout_x1_29;
        }
        *(undefined1 *)(lVar17 + 0x20) = 1;
      }
    }
    plVar19 = *(long **)(*(long *)(param_2 + 0x300) + 0x18);
    plVar13 = (long *)*plVar19;
    do {
      if (plVar13 == (long *)plVar19[1]) goto LAB_710309a9c8;
      lVar17 = *plVar13;
      plVar13 = plVar13 + 1;
    } while ((*(ulong *)(lVar17 + 0xa0) & 0xffffffffff) != 0x7b569df99);
    puVar20 = *(undefined8 **)(lVar17 + 0x130);
    if (puVar20 != (undefined8 *)0x0) {
      fVar25 = atan2f(*(float *)(*(long *)(param_2 + 0x790) + 0x84),
                      *(float *)(*(long *)(param_2 + 0x790) + 0x80));
      param_4 = "IPP0002";
      param_5 = (undefined1 (*) [16])&local_d0;
      uStack_c8 = DAT_71044661c0._8_8_;
      local_d0 = (undefined8)DAT_71044661c0;
      FUN_71025f51e0(fVar25,(long *)*puVar20,(long *)puVar20[1],"IPP0002",(undefined8 *)param_5);
      uVar15 = extraout_x1_30;
    }
  }
LAB_710309a9c8:
  if ((*(char *)(param_2 + 0x885) == '\0') ||
     ((0.0 < *(float *)(param_2 + 0x7d4) &&
      (fVar25 = *(float *)(param_2 + 0x7d4) - fVar58, *(float *)(param_2 + 0x7d4) = fVar25,
      0.0 < fVar25)))) goto LAB_710309b204;
  if (*(int *)(param_2 + 0x7d8) == -1) {
    puVar18 = *(uint **)(param_2 + 0x340);
    uVar12 = *puVar18;
    *puVar18 = puVar18[1];
    uVar1 = puVar18[3];
    uVar12 = uVar12 ^ uVar12 << 0xb;
    uVar12 = uVar12 ^ uVar12 >> 8 ^ uVar1 ^ uVar1 >> 0x13;
    puVar18[1] = puVar18[2];
    puVar18[2] = uVar1;
    puVar18[3] = uVar12;
    puVar18 = *(uint **)(param_2 + 0x340);
    *(uint *)(param_2 + 0x7d8) = uVar12 & 1;
    fVar25 = *(float *)(param_2 + 0x754);
    uVar12 = *puVar18;
    fVar26 = *(float *)(param_2 + 0x758);
    *puVar18 = puVar18[1];
    uVar12 = uVar12 ^ uVar12 << 0xb;
    uVar1 = puVar18[3];
    uVar12 = uVar12 ^ uVar12 >> 8 ^ uVar1 ^ uVar1 >> 0x13;
    puVar18[1] = puVar18[2];
    puVar18[2] = uVar1;
    puVar18[3] = uVar12;
    puVar18 = *(uint **)(param_2 + 0x340);
    fVar35 = *(float *)(param_2 + 0x75c);
    fVar43 = *(float *)(param_2 + 0x760);
    uVar1 = *puVar18;
    *puVar18 = puVar18[1];
    uVar2 = puVar18[3];
    uVar1 = uVar1 ^ uVar1 << 0xb;
    uVar1 = uVar1 ^ uVar1 >> 8 ^ uVar2 ^ uVar2 >> 0x13;
    puVar18[1] = puVar18[2];
    puVar18[2] = uVar2;
    puVar18[3] = uVar1;
    lVar17 = 0x770;
    if (*(int *)(param_2 + 0x7d8) != 0) {
      lVar17 = 0x76c;
    }
    lVar21 = *(long *)(param_2 + 0x7f0);
    auVar34._0_8_ = CONCAT44(*(float *)(param_2 + 0x774) + -180.0,*(undefined4 *)(param_2 + lVar17))
    ;
    auVar34._8_8_ = 0;
    *(undefined8 *)(param_2 + 0x7e8) = 0;
    *(ulong *)(param_2 + 0x7e0) = auVar34._0_8_;
    if (lVar21 != 0) {
      uStack_108 = 0;
      local_110 = 1.0;
      fStack_10c = 0.0;
      uStack_f8 = 0;
      local_100 = 0x3f80000000000000;
      uStack_e8 = 0x3f800000;
      local_f0 = 0;
      auVar37._8_4_ = 0;
      auVar37._0_8_ = auVar34._0_8_;
      auVar37._12_4_ = 0x3f800000;
      auVar31 = NEON_ext(auVar37,auVar34,0xc,1);
      auVar41 = NEON_ext(auVar31,auVar37,4,1);
      auVar31 = NEON_ext(auVar31,auVar31,8,1);
      auVar31 = NEON_ext(auVar41,auVar31,0xc,1);
      uStack_d8 = auVar31._8_8_;
      local_e0 = auVar31._0_8_;
      (**(code **)(**(long **)(lVar21 + 0x90) + 0x148))(*(long **)(lVar21 + 0x90),&local_110);
      lVar17 = *(long *)(lVar21 + 0xd8);
      if (lVar17 != 0) {
        local_b8 = uStack_f8;
        local_c0 = local_100;
        uStack_c8 = uStack_108;
        local_d0._4_4_ = fStack_10c;
        local_d0._0_4_ = local_110;
        local_98 = uStack_d8;
        local_a0 = local_e0;
        local_a8 = uStack_e8;
        local_b0 = local_f0;
        if (*(char *)(*(long *)(lVar17 + 8) + 0xa8) != '\0') {
          plVar13 = *(long **)(*(long *)(lVar17 + 8) + 0x48);
          (**(code **)(*plVar13 + 0x20))(plVar13,&local_d0);
        }
        *(undefined1 *)(lVar17 + 0x20) = 1;
      }
      uVar15 = local_e0;
      fVar44 = atan2f(fStack_10c,local_110);
      plVar13 = (long *)**(long **)(param_2 + 0x7f8);
      plVar19 = (long *)(*(long **)(param_2 + 0x7f8))[1];
      plVar14 = plVar13;
      if (plVar13 != plVar19) {
        do {
          lVar17 = *plVar13;
          if (*(char *)(lVar17 + 0x128) == '\0' ||
              (*(char *)(*(long *)(lVar17 + 8) + 0xe8) != '\0' ||
              *(char *)(*(long *)(lVar17 + 8) + 0xe7) != '\0')) {
            *(undefined1 *)(lVar17 + 0x129) = 1;
LAB_710309ac68:
            *(undefined8 *)(lVar17 + 0x18) = 0;
            *(undefined8 *)(lVar17 + 0x10) = uVar15;
          }
          else if ((1e-05 < ABS(*(float *)(lVar17 + 0x10) - (float)uVar15)) ||
                  (1e-05 < ABS(*(float *)(lVar17 + 0x14) - (float)((ulong)uVar15 >> 0x20)))) {
            *(undefined1 *)(lVar17 + 0x12a) = 1;
            goto LAB_710309ac68;
          }
          if ((1e-05 <= ABS(0.0 - fVar44)) || (1e-05 <= ABS(*(float *)(lVar17 + 0x30) - fVar44))) {
            *(float *)(lVar17 + 0x30) = fVar44;
            *(undefined1 *)(lVar17 + 0x129) = 1;
          }
          auVar31 = *(undefined1 (*) [16])(lVar17 + 0x50);
          auVar57 = auVar31;
          if (1e-05 <= ABS(auVar31._0_4_ + -1.0)) {
            auVar57._4_12_ = auVar31._4_12_;
            auVar57._0_4_ = 0x3f800000;
            *(undefined1 *)(lVar17 + 0x129) = 1;
            *(long *)(lVar17 + 0x58) = auVar31._8_8_;
            *(long *)(lVar17 + 0x50) = auVar57._0_8_;
          }
          if (1e-05 <= ABS(auVar57._4_4_ + -1.0)) {
            *(undefined1 *)(lVar17 + 0x129) = 1;
            *(long *)(lVar17 + 0x58) = auVar57._8_8_;
            *(ulong *)(lVar17 + 0x50) = CONCAT44(0x3f800000,auVar57._0_4_);
          }
          plVar13 = plVar13 + 1;
        } while (plVar19 != plVar13);
        plVar13 = (long *)**(undefined8 **)(param_2 + 0x7f8);
        plVar14 = (long *)(*(undefined8 **)(param_2 + 0x7f8))[1];
      }
      param_4 = (char *)0x1;
      FUN_71025f4d80(plVar13,plVar14,1);
      uVar15 = extraout_x1_31;
    }
    *(float *)(param_2 + 0x808) = fVar25 + (fVar26 - fVar25) * (float)uVar12 * 2.3283064e-10;
    *(float *)(param_2 + 0x80c) = fVar35 + (fVar43 - fVar35) * (float)uVar1 * 2.3283064e-10;
    *(undefined4 *)(param_2 + 0x828) = *(undefined4 *)(param_2 + 0x764);
    *(undefined4 *)(param_2 + 0x82c) = *(undefined4 *)(param_2 + 0x768);
  }
  switch(*(undefined4 *)(param_2 + 0x800)) {
  case 0:
    *(undefined4 *)(param_2 + 0x804) = *(undefined4 *)(param_2 + 0x808);
    *(undefined4 *)(param_2 + 0x800) = 1;
    cVar4 = *(char *)(param_2 + 0x886);
    goto joined_r0x00710309b7ec;
  case 1:
    fVar25 = *(float *)(param_2 + 0x804) - fVar58;
    *(float *)(param_2 + 0x804) = fVar25;
    if (fVar25 <= 0.0) {
      *(undefined8 *)(param_2 + 0x800) = 0x41f0000000000002;
      lVar17 = *(long *)(param_2 + 0x7f0);
      if (lVar17 != 0) {
        if ((*(char *)(lVar17 + 0xe0) != '\0') && (*(long *)(lVar17 + 200) != 0)) {
          *(undefined2 *)(*(long *)(lVar17 + 200) + 0x30) = 0;
        }
        if (*(long *)(lVar17 + 0xd8) != 0) {
          *(undefined1 *)(*(long *)(lVar17 + 0xd8) + 0x21) = 0;
        }
        if (*(char *)(lVar17 + 0xe0) != '\0') {
          *(undefined1 *)(*(long *)(lVar17 + 0xb0) + 0x10) = 1;
        }
        lVar17 = *(long *)(param_2 + 0x7f0);
        if (lVar17 != 0) {
          *(undefined1 *)(lVar17 + 0x110) = 1;
          FUN_71025e9d50((long *)(lVar17 + 0x108),uVar15,(long ****)param_4,(byte ****)param_5,
                         (long ****)param_6,param_7,param_8,param_9);
          lVar17 = *(long *)(param_2 + 0x7f0);
          if (lVar17 != 0) {
            *(byte *)(lVar17 + 0x118) = *(byte *)(lVar17 + 0x118) & 0xfe;
          }
        }
      }
      plVar19 = (long *)(*(long **)(param_2 + 0x7f8))[1];
      for (plVar13 = (long *)**(long **)(param_2 + 0x7f8); plVar13 != plVar19; plVar13 = plVar13 + 1
          ) {
        lVar17 = *plVar13;
        *(undefined1 *)(lVar17 + 0x128) = 1;
        if (*(long *)(lVar17 + 8) != 0) {
          *(undefined8 *)(*(long *)(lVar17 + 8) + 0xd8) = 0xffffffffffffffff;
          FUN_7100532bc0(*(long *)(lVar17 + 8),0);
        }
      }
      auVar31 = *(undefined1 (*) [16])(param_2 + 0x7e0);
      *(int *)(param_2 + 0x814) = auVar31._4_4_;
      *(undefined4 *)(param_2 + 0x810) = 0;
      if (*(long **)(param_2 + 0x818) != (long *)0x0) {
        auVar41 = NEON_ext(auVar31,auVar31,8,1);
        uStack_c8 = (ulong)auVar41._0_4_;
        lVar17 = **(long **)(param_2 + 0x818);
        local_d0 = auVar31._0_8_;
        if (*(long *)(lVar17 + 8) != 0) {
          param_4 = (char *)0x1;
          local_110 = 0.0;
          fStack_10c = 0.0;
          uVar12 = FUN_7102405040(*(long *)(lVar17 + 8),(undefined8 *)&local_110,1,
                                  (byte ****)param_5,(long ****)param_6,param_7,param_8,param_9);
          if (uVar12 != 0xffffffff) {
            param_4 = (char *)(ulong)uVar12;
            if (uVar12 < 0x19) {
              plVar13 = *(long **)(*(long *)(lVar17 + 8) + (long)(int)uVar12 * 0x50 + 0x68);
              if (((*plVar13 != 0) && ((int)plVar13[1] != -1)) &&
                 ((int)plVar13[1] == *(int *)(*plVar13 + 0x20))) {
                FUN_7103736cf0(plVar13,(undefined1 (*) [12])&local_d0);
              }
            }
            (**(code **)(**(long **)(lVar17 + 8) + 0x58))(*(long **)(lVar17 + 8),10);
          }
        }
      }
    }
    break;
  case 2:
    fVar26 = *(float *)(param_2 + 0x828) * fVar58;
    fVar35 = *(float *)(param_2 + 0x810) + fVar26;
    fVar25 = 29.0;
    if ((int)fVar35 < 0x1e) {
      fVar25 = fVar35;
    }
    *(float *)(param_2 + 0x810) = fVar25;
    fVar26 = *(float *)(param_2 + 0x804) - fVar26;
    *(float *)(param_2 + 0x814) =
         *(float *)(&DAT_710455c7f0 + (long)(int)fVar25 * 4) +
         *(float *)(*(long *)(param_2 + 0x830) + 0x3c);
    *(float *)(param_2 + 0x804) = fVar26;
    if (fVar26 <= 0.0) {
      *(undefined4 *)(param_2 + 0x804) = *(undefined4 *)(param_2 + 0x80c);
      *(undefined4 *)(param_2 + 0x800) = 3;
LAB_710309afb8:
      *(undefined4 *)(param_2 + 0x810) = 0;
    }
    break;
  case 3:
    FUN_710260fdd0(0x41f00000,*(long *)(param_2 + 0x7f0),1);
    fVar25 = *(float *)(param_2 + 0x804) - fVar58;
    fVar26 = *(float *)(*(long *)(param_2 + 0x830) + 0x3c);
    *(float *)(param_2 + 0x804) = fVar25;
    *(float *)(param_2 + 0x814) = fVar26 + -13.447296;
    if (fVar25 <= 0.0) {
      *(undefined8 *)(param_2 + 0x800) = 0x4334000000000004;
      goto LAB_710309afb8;
    }
    break;
  case 4:
    fVar26 = *(float *)(param_2 + 0x82c) * fVar58;
    fVar35 = *(float *)(param_2 + 0x810) + fVar26;
    fVar25 = 179.0;
    if ((int)fVar35 < 0xb4) {
      fVar25 = fVar35;
    }
    *(float *)(param_2 + 0x810) = fVar25;
    fVar26 = *(float *)(param_2 + 0x804) - fVar26;
    *(float *)(param_2 + 0x814) =
         *(float *)(&DAT_710455c868 + (long)(int)fVar25 * 4) +
         *(float *)(*(long *)(param_2 + 0x830) + 0x3c);
    *(float *)(param_2 + 0x804) = fVar26;
    if (0.0 < fVar26) break;
    lVar17 = *(long *)(param_2 + 0x7f0);
    *(undefined4 *)(param_2 + 0x800) = 0;
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
      lVar17 = *(long *)(param_2 + 0x7f0);
      if (lVar17 != 0) {
        *(undefined1 *)(lVar17 + 0x110) = 0;
        FUN_71025e9d50((long *)(lVar17 + 0x108),uVar15,(long ****)param_4,(byte ****)param_5,
                       (long ****)param_6,param_7,param_8,param_9);
        lVar17 = *(long *)(param_2 + 0x7f0);
        if (lVar17 != 0) {
          *(byte *)(lVar17 + 0x118) = *(byte *)(lVar17 + 0x118) | 1;
        }
      }
    }
    param_4 = (char *)0x1;
    FUN_71025f4d80((long *)**(undefined8 **)(param_2 + 0x7f8),
                   (long *)(*(undefined8 **)(param_2 + 0x7f8))[1],1);
    *(undefined4 *)(param_2 + 0x7d8) = 0xffffffff;
    *(undefined4 *)(param_2 + 0x814) = *(undefined4 *)(param_2 + 0x7e4);
    cVar4 = *(char *)(param_2 + 0x886);
    uVar15 = extraout_x1_41;
joined_r0x00710309b7ec:
    if (cVar4 == '\0') {
      return;
    }
    goto LAB_710309b20c;
  }
  auVar31 = *(undefined1 (*) [16])(param_2 + 0x7e0);
  auVar38._0_8_ = CONCAT44(*(undefined4 *)(param_2 + 0x814),auVar31._0_4_);
  auVar31 = NEON_ext(auVar31,auVar31,8,1);
  auVar38._8_8_ = auVar31._0_8_;
  auVar39._0_12_ = auVar38._0_12_;
  auVar39._12_4_ = 0x3f800000;
  uStack_108 = 0;
  local_110 = 1.0;
  fStack_10c = 0.0;
  uStack_f8 = 0;
  local_100 = 0x3f80000000000000;
  local_f0 = (undefined8)DAT_71044656b0;
  uStack_e8 = DAT_71044656b0._8_8_;
  uStack_d8 = auVar39._8_8_;
  lVar17 = *(long *)(param_2 + 0x7f0);
  local_e0 = auVar38._0_8_;
  if (lVar17 != 0) {
    (**(code **)(**(long **)(lVar17 + 0x90) + 0x148))(*(long **)(lVar17 + 0x90),&local_110);
    lVar17 = *(long *)(lVar17 + 0xd8);
    if (lVar17 != 0) {
      local_b8 = uStack_f8;
      local_c0 = local_100;
      uStack_c8 = uStack_108;
      local_d0._4_4_ = fStack_10c;
      local_d0._0_4_ = local_110;
      local_98 = uStack_d8;
      local_a0 = local_e0;
      local_a8 = uStack_e8;
      local_b0 = local_f0;
      if (*(char *)(*(long *)(lVar17 + 8) + 0xa8) != '\0') {
        plVar13 = *(long **)(*(long *)(lVar17 + 8) + 0x48);
        (**(code **)(*plVar13 + 0x20))(plVar13,&local_d0);
      }
      *(undefined1 *)(lVar17 + 0x20) = 1;
    }
  }
  uVar59 = local_e0;
  fVar25 = atan2f(fStack_10c,local_110);
  plVar13 = (long *)**(long **)(param_2 + 0x7f8);
  plVar19 = (long *)(*(long **)(param_2 + 0x7f8))[1];
  uVar15 = extraout_x1_32;
  if (plVar13 != plVar19) {
    do {
      lVar17 = *plVar13;
      if (*(char *)(lVar17 + 0x128) == '\0' ||
          (*(char *)(*(long *)(lVar17 + 8) + 0xe8) != '\0' ||
          *(char *)(*(long *)(lVar17 + 8) + 0xe7) != '\0')) {
        *(undefined1 *)(lVar17 + 0x129) = 1;
LAB_710309b194:
        *(undefined8 *)(lVar17 + 0x18) = 0;
        *(undefined8 *)(lVar17 + 0x10) = uVar59;
      }
      else if ((1e-05 < ABS(*(float *)(lVar17 + 0x10) - (float)uVar59)) ||
              (1e-05 < ABS(*(float *)(lVar17 + 0x14) - (float)((ulong)uVar59 >> 0x20)))) {
        *(undefined1 *)(lVar17 + 0x12a) = 1;
        goto LAB_710309b194;
      }
      if ((1e-05 <= ABS(0.0 - fVar25)) || (1e-05 <= ABS(*(float *)(lVar17 + 0x30) - fVar25))) {
        *(float *)(lVar17 + 0x30) = fVar25;
        *(undefined1 *)(lVar17 + 0x129) = 1;
      }
      fVar26 = *(float *)(lVar17 + 0x50);
      fVar35 = *(float *)(lVar17 + 0x54);
      uVar9 = *(undefined4 *)(lVar17 + 0x58);
      uVar10 = *(undefined4 *)(lVar17 + 0x5c);
      if (1e-05 <= ABS(fVar26 + -1.0)) {
        fVar26 = 1.0;
        *(undefined1 *)(lVar17 + 0x129) = 1;
        *(undefined4 *)(lVar17 + 0x58) = uVar9;
        *(undefined4 *)(lVar17 + 0x5c) = uVar10;
        *(undefined4 *)(lVar17 + 0x50) = 0x3f800000;
        *(float *)(lVar17 + 0x54) = fVar35;
      }
      if (1e-05 <= ABS(fVar35 + -1.0)) {
        *(undefined1 *)(lVar17 + 0x129) = 1;
        *(undefined4 *)(lVar17 + 0x58) = uVar9;
        *(undefined4 *)(lVar17 + 0x5c) = uVar10;
        *(ulong *)(lVar17 + 0x50) = CONCAT44(0x3f800000,fVar26);
      }
      plVar13 = plVar13 + 1;
    } while (plVar19 != plVar13);
  }
LAB_710309b204:
  if (*(char *)(param_2 + 0x886) != '\0') {
LAB_710309b20c:
    fVar25 = *(float *)(param_2 + 0x880) + fVar58;
    iVar16 = (int)fVar25;
    *(float *)(param_2 + 0x880) = fVar25;
    if (iVar16 % 2000 == 0) {
      puVar18 = *(uint **)(param_2 + 0x340);
      uVar1 = puVar18[3];
      uVar12 = *puVar18 ^ *puVar18 << 0xb;
      uVar12 = uVar12 ^ uVar12 >> 8 ^ uVar1 ^ uVar1 >> 0x13;
      *puVar18 = puVar18[1];
      puVar18[1] = puVar18[2];
      puVar18[2] = uVar1;
      puVar18[3] = uVar12;
      plVar13 = *(long **)(param_2 + 0x858);
      *(undefined4 *)((long)plVar13 + 0x54) = 2;
      lVar17 = (ulong)(uVar12 % 9) * 0x20;
      lVar21 = *(long *)(&DAT_710455c690 + lVar17);
      lVar17 = *(long *)(&DAT_710455c698 + lVar17);
      plVar13[9] = 0;
      plVar13[8] = (long)&DAT_3f8000003f800000;
      plVar13[4] = lVar21;
      plVar13[5] = lVar17;
      auVar31 = _ConstantZero;
      plVar13[0xb] = 0;
      auVar41 = NEON_ext(auVar31,auVar31,8,1);
      *(undefined4 *)(plVar13 + 2) = 0x41200000;
      lVar17 = plVar13[1];
      plVar13[7] = (ulong)auVar41._0_4_;
      plVar13[6] = auVar31._0_8_;
      if (lVar17 != 0) {
        *(undefined1 *)(lVar17 + 0x110) = 1;
        FUN_71025e9d50((long *)(lVar17 + 0x108),uVar15,(long ****)param_4,(byte ****)param_5,
                       (long ****)param_6,param_7,param_8,param_9);
        lVar17 = plVar13[1];
        if (lVar17 != 0) {
          *(byte *)(lVar17 + 0x118) = *(byte *)(lVar17 + 0x118) & 0xfe;
          lVar17 = plVar13[1];
          if (((lVar17 != 0) && (*(char *)(lVar17 + 0xe0) != '\0')) &&
             (*(long *)(lVar17 + 200) != 0)) {
            *(undefined2 *)(*(long *)(lVar17 + 200) + 0x30) = 0;
          }
        }
      }
      FUN_710313ef20((long *)*plVar13);
      *(undefined1 *)(*plVar13 + 0x60) = 0;
      uVar15 = extraout_x1_33;
      if (((long *)plVar13[0x14] != (long *)0x0) &&
         (plVar19 = *(long **)(*(long *)plVar13[0x14] + 8), plVar19 != (long *)0x0)) {
        param_4 = (char *)(ulong)*(uint *)(plVar13 + 0x15);
        (**(code **)(*plVar19 + 0x58))(plVar19,6);
        uVar15 = extraout_x1_34;
      }
      iVar16 = (int)*(float *)(param_2 + 0x880);
    }
    if (iVar16 % 2000 == 1000) {
      puVar18 = *(uint **)(param_2 + 0x340);
      uVar12 = *puVar18 ^ *puVar18 << 0xb;
      *puVar18 = puVar18[1];
      uVar1 = puVar18[3];
      uVar12 = uVar12 ^ uVar12 >> 8 ^ uVar1 ^ uVar1 >> 0x13;
      puVar18[1] = puVar18[2];
      puVar18[2] = uVar1;
      puVar18[3] = uVar12;
      puVar18 = *(uint **)(param_2 + 0x340);
      uVar1 = *puVar18;
      *puVar18 = puVar18[1];
      uVar2 = puVar18[3];
      uVar1 = uVar1 ^ uVar1 << 0xb;
      uVar1 = uVar1 ^ uVar1 >> 8 ^ uVar2 ^ uVar2 >> 0x13;
      local_120 = ((float)uVar1 * 2.3283064e-10 + -0.5) * 70.0;
      iVar16 = -(uint)((float)uVar12 * 2.3283064e-10 < 0.5);
      puVar18[1] = puVar18[2];
      puVar18[2] = uVar2;
      puVar18[3] = uVar1;
      puVar18 = *(uint **)(param_2 + 0x340);
      local_130 = CONCAT44(iVar16,iVar16) & 0x3dcccccdbdcccccd ^ 0xbdcccccd;
      uVar22 = 0;
      uVar12 = *puVar18 ^ *puVar18 << 0xb;
      *puVar18 = puVar18[1];
      uVar1 = puVar18[3];
      uVar12 = uVar12 ^ uVar12 >> 8 ^ uVar1 ^ uVar1 >> 0x13;
      puVar18[1] = puVar18[2];
      puVar18[2] = uVar1;
      puVar18[3] = uVar12;
      do {
        puVar18 = *(uint **)(param_2 + 0x340);
        uVar1 = *puVar18 ^ *puVar18 << 0xb;
        *puVar18 = puVar18[1];
        uVar2 = puVar18[3];
        uVar1 = uVar1 ^ uVar1 >> 8 ^ uVar2 ^ uVar2 >> 0x13;
        puVar18[1] = puVar18[2];
        puVar18[2] = uVar2;
        puVar18[3] = uVar1;
        puVar18 = *(uint **)(param_2 + 0x340);
        uVar2 = *puVar18;
        *puVar18 = puVar18[1];
        uVar3 = puVar18[3];
        uVar2 = uVar2 ^ uVar2 << 0xb;
        uVar2 = uVar2 ^ uVar2 >> 8 ^ uVar3 ^ uVar3 >> 0x13;
        puVar18[1] = puVar18[2];
        puVar18[2] = uVar3;
        puVar18[3] = uVar2;
        if (4 < uVar22) goto LAB_710309b7f4;
        local_130 = CONCAT44((float)uVar1 * 2.3283064e-10 * 0.5 + 1.3,(int)local_130);
        local_120 = local_120 - ((float)uVar2 * 2.3283064e-10 * 10.0 + 10.0);
        plVar19 = *(long **)(param_2 + uVar22 * 8 + 0x858);
        *(undefined4 *)((long)plVar19 + 0x54) = 1;
        *(undefined4 *)(plVar19 + 5) = 0;
        *(undefined4 *)((long)plVar19 + 0x2c) = 0;
        *(float *)(plVar19 + 4) = local_120;
        *(undefined4 *)((long)plVar19 + 0x24) = 0x43160000;
        auVar31 = _ConstantZero;
        plVar19[0xb] = 0;
        *(undefined4 *)(plVar19 + 2) = 0x41200000;
        auVar41 = NEON_ext(auVar31,auVar31,8,1);
        plVar13 = (long *)plVar19[0x14];
        plVar19[7] = (ulong)auVar41._0_4_;
        plVar19[6] = auVar31._0_8_;
        plVar19[9] = 0;
        plVar19[8] = local_130;
        if (uVar22 == 0) {
          if ((plVar13 != (long *)0x0) &&
             (plVar13 = *(long **)(*plVar13 + 8), plVar13 != (long *)0x0)) {
            lVar17 = *plVar13;
            uVar1 = *(uint *)(plVar19 + 0x15);
            uVar15 = 6;
            goto LAB_710309b598;
          }
        }
        else if ((plVar13 != (long *)0x0) &&
                (plVar13 = *(long **)(*plVar13 + 8), plVar13 != (long *)0x0)) {
          lVar17 = *plVar13;
          uVar1 = *(uint *)(plVar19 + 0x15);
          uVar15 = 7;
LAB_710309b598:
          param_4 = (char *)(ulong)uVar1;
          (**(code **)(lVar17 + 0x58))(plVar13,uVar15);
          uVar15 = extraout_x1_35;
        }
        lVar17 = plVar19[1];
        if (lVar17 != 0) {
          *(undefined1 *)(lVar17 + 0x110) = 1;
          FUN_71025e9d50((long *)(lVar17 + 0x108),uVar15,(long ****)param_4,(byte ****)param_5,
                         (long ****)param_6,param_7,param_8,param_9);
          lVar17 = plVar19[1];
          if (lVar17 != 0) {
            *(byte *)(lVar17 + 0x118) = *(byte *)(lVar17 + 0x118) & 0xfe;
            lVar17 = plVar19[1];
            if (lVar17 != 0) {
              if ((*(char *)(lVar17 + 0xe0) != '\0') &&
                 (lVar17 = *(long *)(lVar17 + 200), lVar17 != 0)) {
                puVar20 = *(undefined8 **)(lVar17 + 0x20);
                *(undefined4 *)(lVar17 + 0x3c) = 0;
                puVar24 = *(undefined8 **)(lVar17 + 0x18);
                if (*(undefined8 **)(lVar17 + 0x18) == puVar20) {
                  *(undefined4 *)(lVar17 + 0x40) = 0;
                }
                else {
                  do {
                    puVar23 = puVar24 + 1;
                    (**(code **)(*(long *)*puVar24 + 0x18))((long *)*puVar24,0);
                    puVar24 = puVar23;
                  } while (puVar20 != puVar23);
                  puVar20 = *(undefined8 **)(lVar17 + 0x20);
                  *(undefined4 *)(lVar17 + 0x40) = 0;
                  puVar24 = *(undefined8 **)(lVar17 + 0x18);
                  if (*(undefined8 **)(lVar17 + 0x18) != puVar20) {
                    do {
                      puVar23 = puVar24 + 1;
                      (**(code **)(*(long *)*puVar24 + 0x18))((long *)*puVar24,1);
                      puVar24 = puVar23;
                    } while (puVar20 != puVar23);
                    puVar24 = *(undefined8 **)(lVar17 + 0x20);
                    for (puVar20 = *(undefined8 **)(lVar17 + 0x18); puVar20 != puVar24;
                        puVar20 = puVar20 + 1) {
                      (**(code **)(*(long *)*puVar20 + 0x38))();
                    }
                  }
                }
              }
              lVar17 = plVar19[1];
              if (((lVar17 != 0) && (*(char *)(lVar17 + 0xe0) != '\0')) &&
                 (*(long *)(lVar17 + 200) != 0)) {
                *(undefined2 *)(*(long *)(lVar17 + 200) + 0x30) = 0;
              }
            }
          }
        }
        FUN_710313ef20((long *)*plVar19);
        bVar11 = uVar22 < uVar12 % 5;
        uVar22 = uVar22 + 1;
        *(undefined1 *)(*plVar19 + 0x60) = 0;
        uVar15 = extraout_x1_36;
      } while (bVar11);
    }
    FUN_710309bdb0(fVar58,*(long **)(param_2 + 0x858),uVar15,(long ****)param_4,(byte ****)param_5,
                   (long ****)param_6,param_7,param_8,param_9);
    FUN_710309bdb0(fVar58,*(long **)(param_2 + 0x860),extraout_x1_37,(long ****)param_4,
                   (byte ****)param_5,(long ****)param_6,param_7,param_8,param_9);
    FUN_710309bdb0(fVar58,*(long **)(param_2 + 0x868),extraout_x1_38,(long ****)param_4,
                   (byte ****)param_5,(long ****)param_6,param_7,param_8,param_9);
    FUN_710309bdb0(fVar58,*(long **)(param_2 + 0x870),extraout_x1_39,(long ****)param_4,
                   (byte ****)param_5,(long ****)param_6,param_7,param_8,param_9);
    FUN_710309bdb0(fVar58,*(long **)(param_2 + 0x878),extraout_x1_40,(long ****)param_4,
                   (byte ****)param_5,(long ****)param_6,param_7,param_8,param_9);
    if (3000.0 <= *(float *)(param_2 + 0x880)) {
      *(float *)(param_2 + 0x880) = *(float *)(param_2 + 0x880) + -2000.0;
    }
  }
                    /* WARNING: Read-only address (ram,0x0071044656b0) is written */
                    /* WARNING: Read-only address (ram,0x0071044661c0) is written */
                    /* WARNING: Read-only address (ram,0x0071044697a0) is written */
  return;
}

