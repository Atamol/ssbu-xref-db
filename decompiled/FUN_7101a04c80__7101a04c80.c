// addr:      7101a04c80
// offset:    0x1a04c80
// name:      FUN_7101a04c80
// mangled:   
// signature: undefined __cdecl FUN_7101a04c80(long * param_1, undefined8 * param_2, long * * * * * * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7101a04c80(long *param_1,undefined8 *param_2,long *********param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  char *pcVar1;
  uint uVar2;
  uint uVar3;
  byte bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  char cVar9;
  int iVar10;
  uint uVar11;
  ulong uVar12;
  undefined *puVar13;
  undefined **ppuVar14;
  undefined **ppuVar15;
  undefined1 *puVar16;
  undefined8 *extraout_x1;
  undefined8 *extraout_x1_00;
  undefined8 *extraout_x1_01;
  undefined8 *extraout_x1_02;
  undefined8 *extraout_x1_03;
  undefined8 *extraout_x1_04;
  undefined8 *extraout_x1_05;
  undefined8 *extraout_x1_06;
  undefined8 *extraout_x1_07;
  undefined8 *extraout_x1_08;
  undefined8 *extraout_x1_09;
  undefined8 *extraout_x1_10;
  undefined8 *extraout_x1_11;
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
  undefined4 uVar17;
  undefined8 *puVar18;
  long ********pppppppplVar19;
  long lVar20;
  undefined4 *puVar21;
  code *pcVar22;
  undefined2 uVar23;
  int iVar24;
  long lVar25;
  long lVar26;
  ulong uVar27;
  long lVar28;
  ulong uVar29;
  undefined8 *puVar30;
  long lVar31;
  long *plVar32;
  undefined1 *puVar33;
  long *********ppppppppplVar34;
  long lVar35;
  undefined **ppuVar36;
  float fVar37;
  undefined8 uVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  undefined1 auVar45 [16];
  undefined **local_148;
  ulong local_140;
  undefined **local_138;
  ulong local_130;
  undefined8 local_128;
  uint local_120 [16];
  undefined **local_e0;
  undefined **local_d8;
  undefined **local_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  
  lVar31 = param_1[0xcf];
  *(undefined4 *)(param_1 + 0xd3) = 0;
  param_1[0xd4] = -0xfffffffd;
  puVar30 = param_2;
  if (lVar31 != 0) {
    iVar10 = (int)param_1[0xd5] + -1;
    if ((0 < (int)param_1[0xd5]) && (*(int *)(param_1 + 0xd5) = iVar10, iVar10 == 0)) {
      lVar35 = param_1[0xbd];
      puVar30 = (undefined8 *)(lVar35 + 0x140);
      uVar11 = *(uint *)(*(long *)(*(long *)(*(long *)(lVar31 + 8) + 0x10) + 8) + 0x488);
      FUN_7103776390(&local_138,puVar30,(long ****)param_3,param_4,param_5,param_6,param_7,param_8);
      if (uVar11 == 0xffffffff) {
LAB_7101a04d60:
        uVar17 = 0;
      }
      else {
        if (uVar11 < 10 && *(char *)(DAT_71053398b0 + 8) != '\0') {
          puVar18 = (undefined8 *)(&DAT_7105339860)[(int)uVar11];
          if (puVar18 == (undefined8 *)0x0) goto LAB_7101a04d60;
        }
        else {
          puVar18 = &DAT_7105339830;
        }
        uVar3 = *(int *)(puVar18[2] + 0x9c) - 1;
        if (6 < uVar3) goto LAB_7101a04d60;
        uVar17 = *(undefined4 *)(&DAT_7104753de0 + (long)(int)uVar3 * 4);
      }
      FUN_710339d9f0((uint *)&local_e0,uVar17);
      FUN_7103778300(0x3f800000,local_130,(long)&local_d8);
      if (uVar11 < 10 && *(char *)(DAT_71053398b0 + 8) != '\0') {
        puVar18 = (undefined8 *)(&DAT_7105339860)[(int)uVar11];
        if (puVar18 != (undefined8 *)0x0) goto LAB_7101a04dbc;
LAB_7101a04e34:
        local_120[0] = local_120[0] & 0xffffff00;
        local_128 = (long ********)0x811c9dc5;
      }
      else {
        puVar18 = &DAT_7105339830;
LAB_7101a04dbc:
        if ((char)((long *)puVar18[2])[0x17] == '\0') goto LAB_7101a04e34;
        cVar9 = (**(code **)(*(long *)puVar18[2] + 0x20))();
        bVar4 = cVar9 - 1;
        if ((0xe < bVar4) || ((0x2e8aUL >> ((long)(char)bVar4 & 0x3fU) & 1) != 0))
        goto LAB_7101a04e34;
        FUN_71003a4ca0((uint *)&local_128,"indicator_%d",
                       (ulong)(*(int *)(&DAT_7104753e00 + (long)(char)bVar4 * 4) + 1),param_3,
                       param_4,param_5,param_6,param_7,param_8);
        if (local_128._4_4_ != 0) {
          FUN_7103778300(0x3f800000,local_130,(long)local_120);
        }
      }
      uVar29 = local_130;
      local_138 = &PTR_FUN_710523d988;
      local_130 = 0;
      if (uVar29 != 0) {
        uVar12 = *(ulong *)(uVar29 + 0x18);
        *(undefined ***)(uVar29 + 0x10) = &PTR_FUN_710523d9a8;
        *(undefined8 *)(uVar29 + 0x18) = 0;
        if (uVar12 != 0) {
          FUN_710392eb40(uVar12);
        }
        FUN_710392eb40(uVar29);
      }
      FUN_7103776390(&local_148,(undefined8 *)(lVar35 + 0x150),(long ****)param_3,param_4,param_5,
                     param_6,param_7,param_8);
      if ((uVar11 == 0xffffffff) ||
         ((((puVar18 = &DAT_7105339830, uVar11 < 10 && (*(char *)(DAT_71053398b0 + 8) != '\0')) &&
           (puVar18 = (undefined8 *)(&DAT_7105339860)[(int)uVar11], puVar18 == (undefined8 *)0x0))
          || (uVar3 = *(int *)(puVar18[2] + 0x9c) - 1, 6 < uVar3)))) {
        uVar17 = 0;
      }
      else {
        uVar17 = *(undefined4 *)(&DAT_7104753de0 + (long)(int)uVar3 * 4);
      }
      FUN_710339d9f0((uint *)&local_e0,uVar17);
      FUN_7103778300(0x3f800000,local_140,(long)&local_d8);
      puVar18 = &DAT_7105339830;
      if ((((uVar11 < 10) && (*(char *)(DAT_71053398b0 + 8) != '\0')) &&
          (puVar18 = (undefined8 *)(&DAT_7105339860)[(int)uVar11], puVar18 == (undefined8 *)0x0)) ||
         ((char)((long *)puVar18[2])[0x17] == '\0')) {
LAB_7101a04f98:
        local_120[0] = local_120[0] & 0xffffff00;
        local_128 = (long ********)0x811c9dc5;
      }
      else {
        cVar9 = (**(code **)(*(long *)puVar18[2] + 0x20))();
        bVar4 = cVar9 - 1;
        if ((0xe < bVar4) || ((0x2e8aUL >> ((long)(char)bVar4 & 0x3fU) & 1) != 0))
        goto LAB_7101a04f98;
        FUN_71003a4ca0((uint *)&local_128,"indicator_%d",
                       (ulong)(*(int *)(&DAT_7104753e00 + (long)(char)bVar4 * 4) + 1),param_3,
                       param_4,param_5,param_6,param_7,param_8);
        if (local_128._4_4_ != 0) {
          FUN_7103778300(0x3f800000,local_140,(long)local_120);
        }
      }
      uVar29 = local_140;
      local_148 = &PTR_FUN_710523d988;
      local_140 = 0;
      if (uVar29 != 0) {
        uVar12 = *(ulong *)(uVar29 + 0x18);
        *(undefined ***)(uVar29 + 0x10) = &PTR_FUN_710523d9a8;
        *(undefined8 *)(uVar29 + 0x18) = 0;
        if (uVar12 != 0) {
          FUN_710392eb40(uVar12);
        }
        FUN_710392eb40(uVar29);
      }
      FUN_7103776390(&local_e0,puVar30,(long ****)param_3,param_4,param_5,param_6,param_7,param_8);
      FUN_710337d0d0((long)&local_e0,uVar11,param_3,param_4,param_5,param_6,param_7,param_8);
      ppuVar14 = local_d8;
      local_e0 = &PTR_FUN_710523d988;
      local_d8 = (undefined **)0x0;
      puVar30 = extraout_x1;
      if (ppuVar14 != (undefined **)0x0) {
        puVar13 = ppuVar14[3];
        ppuVar14[2] = (undefined *)&PTR_FUN_710523d9a8;
        ppuVar14[3] = (undefined *)0x0;
        if (puVar13 != (undefined *)0x0) {
          FUN_710392eb40((ulong)puVar13);
        }
        FUN_710392eb40((ulong)ppuVar14);
        puVar30 = extraout_x1_00;
      }
      lVar31 = param_1[0xcf];
      *(undefined4 *)(param_1 + 0xd5) = 0;
    }
    lVar35 = param_1[0xbd];
    if (*(char *)(lVar35 + 0x260) != '\0') {
      uStack_c0 = 0;
      local_b8 = 0xffffffffffffffff;
      lVar25 = *(long *)(lVar31 + 8);
      uVar38 = *(undefined8 *)(*(long *)(*(long *)(lVar25 + 0x20) + 0x100) + 0x60);
      fVar39 = (float)uVar38 + 960.0;
      lVar28 = **(long **)(lVar35 + 0x20);
      fVar37 = 540.0 - (float)((ulong)uVar38 >> 0x20);
      if (lVar28 == 0) {
        fVar40 = 0.0;
        fVar41 = 0.0;
        fVar43 = (float)(_ConstantZero >> 0x20);
        uVar29 = _ConstantZero;
      }
      else {
        fVar43 = *(float *)(lVar28 + 0x30);
        uVar12 = *(ulong *)(lVar28 + 0x30);
        fVar40 = ABS(*(float *)(lVar28 + 0x50) * *(float *)(lVar28 + 0x48));
        fVar41 = ABS(*(float *)(lVar28 + 0x54) * *(float *)(lVar28 + 0x4c));
        bVar4 = *(byte *)(lVar28 + 0x5b) & 3;
        if (bVar4 == 2) {
          fVar43 = fVar43 - fVar40 * 0.5;
LAB_7101a050f0:
          uVar12 = CONCAT44((int)(uVar12 >> 0x20),fVar43);
        }
        else if (bVar4 == 1) {
          fVar43 = fVar43 + fVar40 * 0.5;
          goto LAB_7101a050f0;
        }
        bVar4 = *(byte *)(lVar28 + 0x5b) >> 2 & 3;
        fVar43 = (float)(uVar12 >> 0x20);
        if (bVar4 == 2) {
          fVar43 = fVar41 * 0.5 + fVar43;
LAB_7101a05120:
          uVar12 = CONCAT44(fVar43,(int)uVar12);
        }
        else if (bVar4 == 1) {
          fVar43 = fVar43 - fVar41 * 0.5;
          goto LAB_7101a05120;
        }
        lVar28 = *(long *)(lVar28 + 0x18);
        if (lVar28 == 0) {
          fVar43 = (float)(uVar12 >> 0x20);
          uVar29 = uVar12;
        }
        else {
          do {
            fVar44 = (float)uVar12 + *(float *)(lVar28 + 0x30);
            uVar29 = (ulong)(uint)fVar44;
            fVar43 = (float)(uVar12 >> 0x20) + *(float *)(lVar28 + 0x34);
            uVar12 = CONCAT44(fVar43,fVar44);
            lVar28 = *(long *)(lVar28 + 0x18);
          } while (lVar28 != 0);
        }
      }
      fVar44 = (float)uVar29 + 960.0;
      fVar42 = fVar44 - fVar40 * 0.5;
      fVar44 = fVar44 + fVar40 * 0.5;
      bVar5 = true;
      bVar8 = false;
      if (fVar37 <= (540.0 - fVar43) + fVar41 * 0.5) {
        bVar5 = false;
        bVar8 = true;
        if (!NAN(fVar44) && !NAN(fVar39)) {
          bVar5 = fVar44 < fVar39;
          bVar8 = false;
        }
      }
      bVar6 = false;
      bVar7 = true;
      if (bVar5 == bVar8) {
        bVar6 = false;
        bVar7 = true;
        if (!NAN(fVar42) && !NAN(fVar39)) {
          bVar6 = fVar42 == fVar39;
          bVar7 = fVar39 <= fVar42;
        }
      }
      local_d0 = (undefined **)CONCAT44(fVar37,fVar39);
      lVar28 = *(long *)(*(long *)(lVar25 + 0x10) + 8);
      if ((*(int *)(lVar28 + 0x484) == 0) && (*(int *)(lVar28 + 0x488) == -1)) {
        uVar17 = 0;
      }
      else {
        uVar17 = 0;
        if ((*(char *)(lVar28 + 0x4aa) != '\0') &&
           ((((!bVar7 || bVar6) && (540.0 - fVar43) - fVar41 * 0.5 <= fVar37) &&
             *(char *)(lVar25 + 0x36) != '\0' && (uVar17 = 1, (*(byte *)(lVar28 + 0x1a8) & 2) != 0))
           )) {
          uVar17 = 2;
        }
      }
      local_e0 = (undefined **)CONCAT44((int)((ulong)local_e0 >> 0x20),uVar17);
      uStack_c8 = 0;
      FUN_710376e330(*(long **)(lVar35 + 0x1c0),(int *)&local_e0);
      if ((int)local_b8 != -1) {
        *(undefined1 *)(*(long *)(*(long *)(lVar31 + 8) + 0x20) + 0x165) = 1;
      }
      puVar30 = extraout_x1_01;
      if (local_b8._4_4_ != -1) {
        FUN_71032d3260(*(long *)(*(long *)(lVar31 + 8) + 0x20),extraout_x1_01,param_3,param_4,
                       param_5,param_6,param_7,param_8);
        puVar30 = extraout_x1_02;
      }
    }
  }
  if ((*(char *)((long)param_1 + 0x6b9) != '\0') &&
     (((int)param_1[0x27] - 2U < 2 ||
      (((int)param_1[0x27] == 0xb && (*(int *)(*(long *)(DAT_710532f7b0 + 8) + 0xa28) != 2)))))) {
    lVar31 = param_1[0xcf];
    lVar35 = param_1[0xbd];
    if (*(char *)(lVar35 + 0x260) != '\0') {
      plVar32 = (long *)*param_2;
      local_d8 = (undefined **)0x0;
      local_d0 = (undefined **)0x0;
      local_e0 = (undefined **)0x0;
      if (plVar32[1] - *plVar32 != 0) {
        uVar29 = plVar32[1] - *plVar32 >> 4;
        if (0x555555555555555 < uVar29) goto LAB_7101a0636c;
        pppppppplVar19 = (long ********)(uVar29 * 0x30);
        if (pppppppplVar19 == (long ********)0x0) {
          pppppppplVar19 = (long ********)0x1;
        }
        ppuVar14 = (undefined **)
                   FUN_710392e290(0x10,pppppppplVar19,(long ****)param_3,param_4,param_5,param_6,
                                  param_7,param_8);
        if (ppuVar14 == (undefined **)0x0) {
          if (DAT_7105332f00 != (long *)0x0) {
            local_138 = (undefined **)((ulong)local_138 & 0xffffffff00000000);
            param_3 = (long *********)&local_128;
            local_128 = pppppppplVar19;
            uVar12 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_138);
            if (((uVar12 & 1) != 0) &&
               (ppuVar14 = (undefined **)
                           FUN_710392e290(0x10,pppppppplVar19,(long ****)param_3,param_4,param_5,
                                          param_6,param_7,param_8), ppuVar14 != (undefined **)0x0))
            goto LAB_7101a05320;
          }
          ppuVar14 = (undefined **)0x0;
        }
LAB_7101a05320:
        local_d0 = ppuVar14 + uVar29 * 6;
        local_d8 = ppuVar14;
      }
      lVar25 = **(long **)(lVar35 + 0x20);
      if (lVar25 == 0) {
        fVar37 = 0.0;
        fVar39 = 0.0;
        fVar40 = (float)(_ConstantZero >> 0x20);
        uVar29 = _ConstantZero;
      }
      else {
        fVar40 = *(float *)(lVar25 + 0x30);
        fVar37 = ABS(*(float *)(lVar25 + 0x50) * *(float *)(lVar25 + 0x48));
        uVar12 = *(ulong *)(lVar25 + 0x30);
        fVar39 = ABS(*(float *)(lVar25 + 0x54) * *(float *)(lVar25 + 0x4c));
        bVar4 = *(byte *)(lVar25 + 0x5b) & 3;
        if (bVar4 == 2) {
          fVar40 = fVar40 - fVar37 * 0.5;
LAB_7101a053e8:
          uVar12 = CONCAT44((int)(uVar12 >> 0x20),fVar40);
        }
        else if (bVar4 == 1) {
          fVar40 = fVar40 + fVar37 * 0.5;
          goto LAB_7101a053e8;
        }
        bVar4 = *(byte *)(lVar25 + 0x5b) >> 2 & 3;
        fVar40 = (float)(uVar12 >> 0x20);
        if (bVar4 == 2) {
          fVar40 = fVar39 * 0.5 + fVar40;
LAB_7101a05418:
          uVar12 = CONCAT44(fVar40,(int)uVar12);
        }
        else if (bVar4 == 1) {
          fVar40 = fVar40 - fVar39 * 0.5;
          goto LAB_7101a05418;
        }
        lVar25 = *(long *)(lVar25 + 0x18);
        if (lVar25 == 0) {
          fVar40 = (float)(uVar12 >> 0x20);
          uVar29 = uVar12;
        }
        else {
          do {
            fVar41 = (float)uVar12 + *(float *)(lVar25 + 0x30);
            uVar29 = (ulong)(uint)fVar41;
            fVar40 = (float)(uVar12 >> 0x20) + *(float *)(lVar25 + 0x34);
            uVar12 = CONCAT44(fVar40,fVar41);
            lVar25 = *(long *)(lVar25 + 0x18);
          } while (lVar25 != 0);
        }
      }
      lVar25 = *plVar32;
      lVar28 = plVar32[1];
      local_e0 = local_d8;
      if (lVar25 != lVar28) {
        fVar41 = (float)uVar29 + 960.0;
        fVar43 = fVar41 + fVar37 * 0.5;
        fVar41 = fVar41 - fVar37 * 0.5;
        fVar37 = (540.0 - fVar40) + fVar39 * 0.5;
        do {
          ppuVar14 = local_e0;
          lVar26 = *(long *)(lVar25 + 8);
          uVar38 = *(undefined8 *)(*(long *)(*(long *)(lVar26 + 0x20) + 0x100) + 0x60);
          lVar20 = *(long *)(*(long *)(lVar26 + 0x10) + 8);
          fVar42 = (float)uVar38 + 960.0;
          fVar44 = 540.0 - (float)((ulong)uVar38 >> 0x20);
          if ((*(int *)(lVar20 + 0x484) == 0) && (*(int *)(lVar20 + 0x488) == -1)) {
            uVar17 = 0;
          }
          else {
            uVar17 = 0;
            if (*(char *)(lVar20 + 0x4aa) != '\0') {
              bVar5 = true;
              bVar8 = false;
              if ((540.0 - fVar40) - fVar39 * 0.5 <= fVar44) {
                bVar5 = false;
                bVar8 = true;
                if (!NAN(fVar37) && !NAN(fVar44)) {
                  bVar5 = fVar37 < fVar44;
                  bVar8 = false;
                }
              }
              bVar6 = true;
              bVar7 = false;
              if (bVar5 == bVar8) {
                bVar6 = false;
                bVar7 = true;
                if (!NAN(fVar43) && !NAN(fVar42)) {
                  bVar6 = fVar43 < fVar42;
                  bVar7 = false;
                }
              }
              bVar5 = false;
              bVar8 = true;
              if (bVar6 == bVar7) {
                bVar5 = false;
                bVar8 = true;
                if (!NAN(fVar41) && !NAN(fVar42)) {
                  bVar5 = fVar41 == fVar42;
                  bVar8 = fVar42 <= fVar41;
                }
              }
              if (((!bVar8 || bVar5) && *(char *)(lVar26 + 0x36) != '\0') &&
                 (uVar17 = 1, (*(byte *)(lVar20 + 0x1a8) & 2) != 0)) {
                uVar17 = 2;
              }
            }
          }
          if (local_d8 == local_d0) {
            ppppppppplVar34 = (long *********)((long)local_d8 - (long)local_e0);
            uVar29 = ((long)ppppppppplVar34 >> 4) * -0x5555555555555555 + 1;
            if (0x555555555555555 < uVar29) {
                    /* WARNING: Subroutine does not return */
              std::__vector_base_common<true>::__throw_length_error();
            }
            lVar20 = (long)local_d0 - (long)local_e0 >> 4;
            uVar12 = 0x555555555555555;
            if ((ulong)(lVar20 * -0x5555555555555555) < 0x2aaaaaaaaaaaaaa) {
              uVar27 = lVar20 * 0x5555555555555556;
              uVar12 = uVar29;
              if (uVar29 <= uVar27) {
                uVar12 = uVar27;
              }
              if (uVar12 != 0) goto LAB_7101a055ec;
              lVar20 = 0;
            }
            else {
LAB_7101a055ec:
              pppppppplVar19 = (long ********)(uVar12 * 0x30);
              if (pppppppplVar19 == (long ********)0x0) {
                pppppppplVar19 = (long ********)0x1;
              }
              lVar20 = FUN_710392e290(0x10,pppppppplVar19,(long ****)param_3,param_4,param_5,param_6
                                      ,param_7,param_8);
              if (lVar20 == 0) {
                if (DAT_7105332f00 != (long *)0x0) {
                  local_138 = (undefined **)((ulong)local_138 & 0xffffffff00000000);
                  param_3 = (long *********)&local_128;
                  local_128 = pppppppplVar19;
                  uVar29 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_138);
                  if (((uVar29 & 1) != 0) &&
                     (lVar20 = FUN_710392e290(0x10,pppppppplVar19,(long ****)param_3,param_4,param_5
                                              ,param_6,param_7,param_8), lVar20 != 0))
                  goto LAB_7101a05654;
                }
                lVar20 = 0;
              }
            }
LAB_7101a05654:
            puVar21 = (undefined4 *)(lVar20 + ((long)ppppppppplVar34 >> 4) * 0x10);
            ppuVar36 = (undefined **)(lVar20 + uVar12 * 0x30);
            *puVar21 = uVar17;
            *(long *********)(puVar21 + 1) = local_128;
            *(undefined8 *)(puVar21 + 6) = 0;
            *(undefined **)(puVar21 + 4) = (undefined *)CONCAT44(fVar44,fVar42);
            *(undefined8 *)(puVar21 + 9) = 0xffffffff00000000;
            puVar21[0xb] = 0xffffffff;
            lVar20 = SUB168(SEXT816((long)ppppppppplVar34) * SEXT816(-0x2aaaaaaaaaaaaaab),8);
            puVar21[3] = local_120[0];
            ppuVar15 = (undefined **)(puVar21 + ((lVar20 >> 3) - (lVar20 >> 0x3f)) * 0xc);
            puVar21[8] = (uint)(lVar31 != 0);
            if (0 < (long)ppppppppplVar34) {
              memcpy(ppuVar15,ppuVar14,(size_t)ppppppppplVar34);
              param_3 = ppppppppplVar34;
            }
            local_e0 = ppuVar15;
            local_d8 = (undefined **)(puVar21 + 0xc);
            local_d0 = ppuVar36;
            if (ppuVar14 != (undefined **)0x0) {
              FUN_710392eb40((ulong)ppuVar14);
            }
          }
          else {
            *(undefined4 *)local_d8 = uVar17;
            local_d8[3] = (undefined *)0x0;
            local_d8[2] = (undefined *)CONCAT44(fVar44,fVar42);
            *(uint *)(local_d8 + 4) = (uint)(lVar31 != 0);
            *(long *********)((long)local_d8 + 4) = local_128;
            *(undefined8 *)((long)local_d8 + 0x24) = 0xffffffff00000000;
            *(uint *)((long)local_d8 + 0xc) = local_120[0];
            *(undefined4 *)((long)local_d8 + 0x2c) = 0xffffffff;
            local_d8 = local_d8 + 6;
          }
          lVar25 = lVar25 + 0x10;
        } while (lVar28 != lVar25);
      }
      iVar10 = FUN_710376e720(*(long **)(lVar35 + 0x1c0),(long *)&local_e0,(long ****)param_3,
                              param_4,param_5,param_6,param_7,param_8);
      uVar29 = ((long)local_d8 - (long)local_e0 >> 4) * -0x5555555555555555;
      puVar30 = extraout_x1_03;
      ppuVar15 = local_e0;
      ppuVar14 = local_d8;
      if (0 < (int)uVar29) {
        lVar35 = 0;
        uVar12 = 0;
        lVar31 = 8;
        ppuVar15 = local_e0;
        ppuVar36 = local_d8;
        do {
          if (uVar29 <= uVar12) {
LAB_7101a06354:
                    /* WARNING: Subroutine does not return */
            std::__vector_base_common<true>::__throw_out_of_range();
          }
          if (*(int *)((long)ppuVar15 + lVar35 + 0x28) != -1) {
            if ((ulong)(plVar32[1] - *plVar32 >> 4) <= uVar12) goto LAB_7101a0635c;
            *(undefined1 *)(*(long *)(*(long *)(*plVar32 + lVar31) + 0x20) + 0x165) = 1;
          }
          uVar29 = ((long)ppuVar36 - (long)ppuVar15 >> 4) * -0x5555555555555555;
          if (uVar29 < uVar12 || uVar29 - uVar12 == 0) goto LAB_7101a06354;
          if (*(int *)((long)ppuVar15 + lVar35 + 0x2c) != -1) {
            if ((ulong)(plVar32[1] - *plVar32 >> 4) <= uVar12) {
LAB_7101a0635c:
                    /* WARNING: Subroutine does not return */
              std::__vector_base_common<true>::__throw_out_of_range();
            }
            FUN_71032d3260(*(long *)(*(long *)(*plVar32 + lVar31) + 0x20),puVar30,param_3,param_4,
                           param_5,param_6,param_7,param_8);
            uVar29 = ((long)local_d8 - (long)local_e0 >> 4) * -0x5555555555555555;
            ppuVar15 = local_e0;
            puVar30 = extraout_x1_04;
            ppuVar36 = local_d8;
            if (uVar29 < uVar12 || uVar29 - uVar12 == 0) goto LAB_7101a06354;
          }
          uVar12 = uVar12 + 1;
          lVar31 = lVar31 + 0x10;
          lVar35 = lVar35 + 0x30;
          ppuVar14 = local_d8;
        } while ((long)uVar12 < (long)(int)uVar29);
      }
      local_d8 = ppuVar15;
      if (local_d8 != (undefined **)0x0) {
        FUN_710392eb40((ulong)local_d8);
        puVar30 = extraout_x1_05;
        ppuVar14 = local_d8;
      }
      local_d8 = ppuVar14;
      if (iVar10 != -1) {
        lVar31 = *(long *)*param_2;
        if ((ulong)(((long *)*param_2)[1] - lVar31 >> 4) <= (ulong)(long)iVar10)
        goto LAB_7101a06370;
        lVar31 = lVar31 + (long)iVar10 * 0x10;
        if ((param_1[0xcf] == 0) ||
           (*(int *)(*(long *)(param_1[0xcf] + 8) + 0x28) != (int)param_1[0x2a])) {
          FUN_7101a03490((long)param_1,puVar30,param_3,param_4,param_5,param_6,param_7,param_8);
          param_1[0xd0] = lVar31;
          puVar30 = extraout_x1_06;
          if (lVar31 != 0) {
            param_1[0xd2] = lVar31;
            *(undefined1 *)(param_1[0xbd] + 0x261) = 0;
          }
        }
        *(undefined4 *)(param_1 + 0xd6) = *(undefined4 *)(*(long *)(lVar31 + 8) + 0x28);
      }
    }
  }
  lVar31 = param_1[0xbd];
  if ((*(char *)(lVar31 + 0x259) == '\0') &&
     (plVar32 = *(long **)(*(long *)(lVar31 + 0x130) + 8), plVar32 != (long *)0x0)) {
    auVar45 = (**(code **)(*plVar32 + 0x130))();
    puVar30 = auVar45._8_8_;
    if ((auVar45._0_8_ & 1) != 0) {
      plVar32 = *(long **)(*(long *)(lVar31 + 0x130) + 8);
      if (plVar32 != (long *)0x0) {
        auVar45 = (**(code **)(*plVar32 + 0x138))();
        puVar30 = auVar45._8_8_;
        if ((auVar45._0_8_ & 1) == 0) goto LAB_7101a05868;
      }
      uVar3 = *(uint *)(lVar31 + 0x138);
      uVar11 = uVar3 + 2;
      if (-1 < (int)(uVar3 + 1)) {
        uVar11 = uVar3 + 1;
      }
      uVar11 = (uVar3 + 1) - (uVar11 & 0xfffffffe);
      uVar11 = uVar11 + (uVar11 >> 0x1e & 2);
      uVar2 = 0;
      if (*(char *)(lVar31 + 0x269) == '\0' || uVar11 != 1) {
        uVar2 = uVar11;
      }
      if (uVar2 != uVar3) {
        if (*(char *)(lVar31 + 0x26a) != '\0') {
          uVar29 = -(ulong)(uVar2 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar2 << 3;
          FUN_7103778300(0x3f800000,*(long *)(lVar31 + 0x120),
                         *(long *)((long)&PTR_s_controller_joy_dual_71050a8880 + uVar29));
          FUN_7103776910(&local_e0,lVar31 + 0x118,(long ****)"set_txt_btn",param_3,param_4,param_5,
                         param_6,param_7,param_8);
          FUN_710377a120((long)&local_e0,
                         *(char **)((long)&PTR_s_mel_chara_select_help_press_any__71050a8890 +
                                   uVar29),param_3,param_4,param_5,param_6,param_7,param_8);
          ppuVar14 = local_d8;
          local_e0 = &PTR_FUN_710523d9a8;
          local_d8 = (undefined **)0x0;
          puVar30 = extraout_x1_07;
          if (ppuVar14 != (undefined **)0x0) {
            FUN_710392eb40((ulong)ppuVar14);
            puVar30 = extraout_x1_08;
          }
        }
        *(uint *)(lVar31 + 0x138) = uVar2;
      }
    }
  }
LAB_7101a05868:
  *(undefined4 *)(lVar31 + 0x210) = 0;
  switch(*(undefined4 *)(*(long *)(lVar31 + 0x1c0) + 0x25c)) {
  case 0:
    iVar10 = 1;
    break;
  case 1:
    iVar10 = 2;
    break;
  case 2:
    iVar10 = 3;
    break;
  case 3:
    if (*(int *)(lVar31 + 0x21c) == 1) {
      iVar10 = 9;
    }
    else {
      if (*(int *)(lVar31 + 0x21c) != 0) goto switchD_7101a0588c_default;
      iVar10 = 8;
    }
    break;
  case 4:
    iVar10 = 10;
    break;
  case 5:
    if (*(char *)(lVar31 + 0x24c) == '\x02') {
      iVar10 = 0xc;
    }
    else {
      iVar10 = 0xb;
    }
    break;
  case 6:
    iVar10 = 4;
    break;
  case 7:
    iVar10 = 5;
    break;
  case 8:
    iVar10 = 6;
    break;
  case 9:
    iVar10 = 7;
    break;
  default:
switchD_7101a0588c_default:
    iVar10 = 0;
    goto LAB_7101a05a08;
  }
  *(int *)(lVar31 + 0x210) = iVar10;
LAB_7101a05a08:
  if ((**(long **)(lVar31 + 0x178) == 0) ||
     (plVar32 = (long *)(*(long **)(lVar31 + 0x178))[1], plVar32 == (long *)0x0)) {
LAB_7101a05a30:
    if (iVar10 != 0) goto LAB_7101a05a34;
  }
  else {
    auVar45 = (**(code **)(*plVar32 + 0x138))();
    puVar30 = auVar45._8_8_;
    if ((auVar45._0_8_ & 1) == 0) {
      iVar10 = *(int *)(lVar31 + 0x210);
      goto LAB_7101a05a30;
    }
LAB_7101a05a34:
    plVar32 = *(long **)(lVar31 + 0x178);
    if ((*plVar32 != 0) && (plVar32[1] != 0)) {
      *plVar32 = 0;
      *(undefined8 *)(*(long *)(lVar31 + 0x178) + 8) = 0;
      FUN_7103778300(0x3f800000,*(long *)(lVar31 + 0x10),0x710436cb6c);
      puVar30 = extraout_x1_09;
    }
  }
  if ((**(long **)(lVar31 + 0x188) != 0) &&
     (plVar32 = (long *)(*(long **)(lVar31 + 0x188))[1], plVar32 != (long *)0x0)) {
    auVar45 = (**(code **)(*plVar32 + 0x138))();
    puVar30 = auVar45._8_8_;
    if (((auVar45._0_8_ & 1) != 0) &&
       ((plVar32 = *(long **)(lVar31 + 0x188), *plVar32 != 0 && (plVar32[1] != 0)))) {
      *plVar32 = 0;
      *(undefined8 *)(*(long *)(lVar31 + 0x188) + 8) = 0;
      FUN_7103778300(0x3f800000,*(long *)(lVar31 + 0x10),0x710439cdb9);
      puVar30 = extraout_x1_10;
    }
  }
  if (*(char *)(lVar31 + 0x260) == '\0') {
    bVar5 = false;
    if (*(int *)(lVar31 + 0x214) != 0) {
      if (*(int *)(lVar31 + 0x21c) == 3) {
        bVar5 = false;
      }
      else {
        bVar5 = (*(ulong *)(lVar31 + 0x228) & 0xffffffffff) == 0 ||
                *(ulong *)(lVar31 + 0x228) >> 0x38 != 0xc1;
      }
    }
    if ((bool)*(char *)(lVar31 + 0x268) != bVar5) {
      pcVar1 = "local_on";
      if (bVar5 == false) {
        pcVar1 = "local_off";
      }
      *(bool *)(lVar31 + 0x268) = bVar5;
      FUN_7103778300(0x3f800000,*(long *)(lVar31 + 0x10),(long)pcVar1);
      puVar30 = extraout_x1_11;
    }
  }
  FUN_71019e7c00((undefined8 *)param_1[0xbf],puVar30,param_3,param_4,param_5,param_6,param_7,param_8
                );
  FUN_71019f9b50(param_1[0xc1],extraout_x1_12,(long ****)param_3,param_4,param_5,param_6,param_7,
                 param_8);
  FUN_71019e8ff0(param_1[0xc3],extraout_x1_13,(long ****)param_3,param_4,param_5,param_6,param_7,
                 param_8);
  lVar31 = param_1[0xc5];
  if (*(char *)(lVar31 + 0x48) == '\0') {
    if (*(char *)(*(long *)(lVar31 + 0x30) + 0x316) == '\0') {
      uVar11 = *(uint *)(*(long *)(lVar31 + 0x30) + 0x2b4);
      if (uVar11 == 0xffffffff) goto LAB_7101a05c28;
      if (0xc < uVar11) goto LAB_7101a0636c;
      switch(*(undefined4 *)(&DAT_7104543a78 + (long)(int)uVar11 * 4)) {
      case 1:
        uVar23 = 10;
        break;
      case 2:
        uVar23 = 0x14;
        break;
      case 3:
        uVar23 = 0x1e;
        break;
      case 4:
        uVar23 = 0x28;
        break;
      case 5:
        uVar23 = 0x32;
        break;
      case 6:
        uVar23 = 0x3c;
        break;
      case 7:
        uVar23 = 0x50;
        break;
      case 8:
        uVar23 = 100;
        break;
      case 9:
        uVar23 = 0x7d;
        break;
      case 10:
        uVar23 = 0x96;
        break;
      case 0xb:
        uVar23 = 200;
        break;
      case 0xc:
        uVar23 = 300;
        break;
      default:
        uVar23 = 0;
      }
      *(undefined2 *)(lVar31 + 0x3c) = uVar23;
      *(undefined4 *)(lVar31 + 0x44) = 2;
    }
    else {
      *(undefined4 *)(lVar31 + 0x44) = 1;
    }
    *(undefined1 *)(lVar31 + 0x48) = 1;
  }
LAB_7101a05c28:
  FUN_71019eace0(param_1[199]);
  FUN_7101a0f290(param_1[0xc9],extraout_x1_14,(long ****)param_3,param_4,param_5,param_6,param_7,
                 param_8);
  lVar31 = param_1[0xcb];
  if (*(char *)(lVar31 + 100) == '\0') {
    if (*(char *)(*(long *)(lVar31 + 0x58) + 0x316) == '\0') {
      iVar10 = *(int *)(*(long *)(lVar31 + 0x58) + 0x2b4);
      if (iVar10 == -1) goto LAB_7101a05cb8;
      if (iVar10 < 0) {
LAB_7101a05ca4:
        *(undefined4 *)(lVar31 + 0x50) = 0;
LAB_7101a05ca8:
        uVar17 = 1;
      }
      else {
        uVar29 = *(long *)(lVar31 + 0x40) - *(long *)(lVar31 + 0x38) >> 2;
        if ((int)uVar29 <= iVar10) goto LAB_7101a05ca4;
        if (uVar29 <= (ulong)(long)iVar10) {
LAB_7101a06370:
                    /* WARNING: Subroutine does not return */
          std::__vector_base_common<true>::__throw_out_of_range();
        }
        iVar10 = *(int *)(*(long *)(lVar31 + 0x38) + (long)iVar10 * 4);
        *(int *)(lVar31 + 0x50) = iVar10;
        if (iVar10 == 0) goto LAB_7101a05ca8;
        uVar17 = 2;
      }
      *(undefined4 *)(lVar31 + 0x60) = uVar17;
    }
    else {
      *(undefined4 *)(lVar31 + 0x60) = 1;
    }
    *(undefined1 *)(lVar31 + 100) = 1;
  }
LAB_7101a05cb8:
  FUN_71019e6420((long *)param_1[0xcd]);
  puVar30 = (undefined8 *)param_1[0xbd];
  iVar10 = *(int *)(puVar30 + 0x42);
  uVar38 = extraout_x1_15;
  if (iVar10 == 0) goto switchD_7101a05d18_default;
  lVar31 = param_1[0xcf];
  iVar24 = iVar10;
  if (((lVar31 != 0) && ((int)param_1[0xd6] != -1)) &&
     (iVar24 = 0, *(int *)(*(long *)(lVar31 + 8) + 0x28) == (int)param_1[0xd6] || iVar10 == 2)) {
    iVar24 = iVar10;
  }
  *(undefined4 *)(param_1 + 0xd6) = 0xffffffff;
  switch(iVar24) {
  case 1:
    uVar3 = *(uint *)(param_1 + 0x3f);
    uVar11 = 0;
    if (uVar3 != 3) {
      uVar11 = uVar3 + 1;
    }
    do {
      if (uVar11 == 2) {
        if ((DAT_7105324ae1 & 1) != 0) goto LAB_7101a05d70;
      }
      else {
        if (uVar11 == 0) {
          if ((*(char *)((long)param_1 + 0x6b5) == '\0') &&
             ((lVar31 == 0 || (*(int *)(*(long *)(lVar31 + 8) + 0x28) != (int)param_1[0x2a]))))
          goto LAB_7101a05d7c;
        }
        else if (3 < uVar11) goto LAB_7101a0636c;
LAB_7101a05d70:
        if (*(char *)((long)param_1 + (long)(int)uVar11 + 0x1c0) != '\0') {
          *(uint *)(param_1 + 0xd4) = uVar11;
          if (uVar11 == uVar3) goto LAB_7101a06110;
          uVar17 = 1;
          goto LAB_7101a0610c;
        }
      }
LAB_7101a05d7c:
      uVar2 = 0;
      if (uVar11 != 3) {
        uVar2 = uVar11 + 1;
      }
      uVar11 = uVar2;
    } while (uVar2 != uVar3);
    *(uint *)(param_1 + 0xd4) = uVar3;
    goto LAB_7101a06110;
  case 2:
    iVar10 = *(int *)((long)param_1 + 0x1fc);
    if ((iVar10 == -1) || (iVar10 == 3)) {
      *(undefined4 *)((long)param_1 + 0x6a4) = 0;
      if (iVar10 == 0) goto LAB_7101a06110;
    }
    else {
      *(int *)((long)param_1 + 0x6a4) = iVar10 + 1;
    }
    uVar17 = 2;
    goto LAB_7101a0610c;
  case 3:
    uVar17 = 3;
LAB_7101a0610c:
    *(undefined4 *)(param_1 + 0xd3) = uVar17;
LAB_7101a06110:
    FUN_7101a03490((long)param_1,extraout_x1_15,param_3,param_4,param_5,param_6,param_7,param_8);
    uVar38 = extraout_x1_26;
    break;
  case 4:
    *(undefined4 *)(param_1 + 0xd3) = 5;
    if ((int)param_1[0x3f] != 2) {
      FUN_7101a00c90(puVar30);
      lVar31 = param_1[0xbd];
      uVar29 = *(ulong *)(lVar31 + 0x228);
      param_1[0x40] = uVar29;
      param_1[0x41] = *(long *)(lVar31 + 0x230);
      *(char *)(param_1 + 0x42) = (char)*(undefined4 *)(lVar31 + 0x238);
      bVar5 = FUN_71032652a0(*(long *)(DAT_710532f730 + 8) + 0x160,uVar29);
      *(bool *)((long)param_1 + 0x6be) = bVar5;
      *(undefined1 *)((long)param_1 + 0x6bf) = 0;
      uVar38 = extraout_x1_19;
      goto LAB_7101a061b8;
    }
    break;
  case 5:
    *(undefined4 *)(param_1 + 0xd3) = 6;
    if (*(char *)((long)param_1 + 0x6c2) == '\0') {
      lVar31 = *(long *)(*(long *)(DAT_710532f730 + 8) + 0x168);
      puVar33 = (undefined1 *)puVar30[0x45];
      puVar16 = FUN_71032631a0(lVar31,0x11b1ccb807);
      uVar38 = extraout_x1_17;
      if (((((ulong)puVar33 & 0xff00000000000000) == 0xc100000000000000) &&
          (((ulong)puVar33 & 0xffffffffff) != 0)) &&
         ((((ulong)puVar16 & 0xff00000000000000) == 0xc100000000000000 &&
          (((ulong)puVar16 & 0xffffffffff) != 0)))) {
        if ((((ulong)puVar16 ^ (ulong)puVar33) & 0xffffffffff) == 0) {
LAB_7101a06154:
          if (((*(char *)((long)puVar30 + 0x25f) == '\0') &&
              (ppppppppplVar34 = (long *********)FUN_7103263030(lVar31,puVar30[0x46]),
              uVar38 = extraout_x1_27,
              ((ulong)ppppppppplVar34 & 0xff00000000000000) == 0xc100000000000000)) &&
             (param_3 = ppppppppplVar34, ((ulong)ppppppppplVar34 & 0xffffffffff) != 0)) {
            param_4 = (byte ****)(ulong)*(uint *)(puVar30 + 0x47);
            param_5 = (long ****)0x0;
            param_6 = 0;
            FUN_71019fd290(puVar30,puVar33,ppppppppplVar34,param_4,0,0,param_7,param_8);
            puVar30 = (undefined8 *)param_1[0xbd];
            puVar33 = (undefined1 *)puVar30[0x45];
            uVar38 = extraout_x1_28;
            param_3 = ppppppppplVar34;
          }
        }
      }
      else if ((((ulong)puVar16 & 0xffffffffff) != 0 &&
               ((ulong)puVar16 & 0xff00000000000000) == 0xc100000000000000) ==
               (((ulong)puVar33 & 0xff00000000000000) == 0xc100000000000000 &&
               ((ulong)puVar33 & 0xffffffffff) != 0)) goto LAB_7101a06154;
      param_1[0x40] = (long)puVar33;
      param_1[0x41] = puVar30[0x46];
      *(char *)(param_1 + 0x42) = (char)*(undefined4 *)(puVar30 + 0x47);
      *(undefined2 *)((long)param_1 + 0x6be) = 0;
      goto LAB_7101a061b8;
    }
    break;
  case 6:
    *(undefined4 *)(param_1 + 0xd3) = 7;
    plVar32 = (long *)(DAT_710532f730 + 8);
    uVar29 = puVar30[0x45];
    ppppppppplVar34 = (long *********)FUN_7103263030(*(long *)(*plVar32 + 0x168),uVar29);
    if ((((ulong)ppppppppplVar34 & 0xff00000000000000) == 0xc100000000000000) &&
       (((ulong)ppppppppplVar34 & 0xffffffffff) != 0)) {
      param_4 = (byte ****)(ulong)*(uint *)(puVar30 + 0x47);
      param_5 = (long ****)0x0;
      param_6 = 0;
      FUN_71019fd290(puVar30,(undefined1 *)ppppppppplVar34,ppppppppplVar34,param_4,0,0,param_7,
                     param_8);
      puVar30 = (undefined8 *)param_1[0xbd];
      plVar32 = (long *)(DAT_710532f730 + 8);
      uVar29 = puVar30[0x45];
      param_3 = ppppppppplVar34;
    }
    param_1[0x40] = uVar29;
    param_1[0x41] = puVar30[0x46];
    *(char *)(param_1 + 0x42) = (char)*(undefined4 *)(puVar30 + 0x47);
    lVar31 = *plVar32;
    *(undefined1 *)((long)param_1 + 0x6be) = 0;
    uVar11 = FUN_7103263a30(*(long *)(lVar31 + 0x168),uVar29);
    *(bool *)((long)param_1 + 0x6bf) = ((uVar11 ^ 0xffffffff) & 10) == 0;
    uVar38 = extraout_x1_21;
LAB_7101a061b8:
    *(undefined1 *)((long)param_1 + 0x6ba) = 1;
    break;
  case 7:
    if ((*(char *)((long)param_1 + 0x6bc) != '\0') &&
       (((lVar31 != 0 || (lVar31 = param_1[0xd0], lVar31 != 0)) &&
        (*(char *)(*(long *)(lVar31 + 8) + 0x36) != '\0')))) {
      lVar31 = *(long *)(DAT_710532f730 + 8);
      uVar29 = param_1[0x40];
      uVar11 = FUN_71032633f0(*(long *)(lVar31 + 0x168),uVar29);
      if ((int)uVar11 < 2) {
        bVar5 = FUN_7103265e70(lVar31 + 0x160,uVar29);
        uVar38 = extraout_x1_30;
        if (bVar5) {
          FUN_7101a036e0((long)param_1,extraout_x1_30,param_3,param_4,param_5,param_6,param_7,
                         param_8);
          if (0x12 < *(uint *)((long)param_1 + 0x134)) goto LAB_7101a0636c;
          *(undefined4 *)((long)param_1 + (long)(int)*(uint *)((long)param_1 + 0x134) * 4 + 0xe8) =
               10;
          uVar38 = extraout_x1_31;
        }
      }
      else {
        FUN_7101a036e0((long)param_1,extraout_x1_22,param_3,param_4,param_5,param_6,param_7,param_8)
        ;
        if (0x12 < *(uint *)((long)param_1 + 0x134)) goto LAB_7101a0636c;
        *(undefined4 *)((long)param_1 + (long)(int)*(uint *)((long)param_1 + 0x134) * 4 + 0xe8) = 4;
        uVar38 = extraout_x1_23;
      }
    }
    break;
  case 8:
    if (((*(char *)((long)param_1 + 0x6bc) != '\0') &&
        ((lVar31 != 0 || (lVar31 = param_1[0xd0], lVar31 != 0)))) &&
       (*(char *)(*(long *)(lVar31 + 8) + 0x36) != '\0')) {
      FUN_7101a036e0((long)param_1,extraout_x1_15,param_3,param_4,param_5,param_6,param_7,param_8);
      if (0x12 < *(uint *)((long)param_1 + 0x134)) goto LAB_7101a0636c;
      *(undefined4 *)((long)param_1 + (long)(int)*(uint *)((long)param_1 + 0x134) * 4 + 0xe8) = 5;
      uVar38 = extraout_x1_20;
    }
    break;
  case 9:
    if (((*(char *)((long)param_1 + 0x6bc) != '\0') &&
        ((lVar31 != 0 || (lVar31 = param_1[0xd0], lVar31 != 0)))) &&
       (*(char *)(*(long *)(lVar31 + 8) + 0x36) != '\0')) {
      FUN_7101a036e0((long)param_1,extraout_x1_15,param_3,param_4,param_5,param_6,param_7,param_8);
      if (0x12 < *(uint *)((long)param_1 + 0x134)) goto LAB_7101a0636c;
      *(undefined4 *)((long)param_1 + (long)(int)*(uint *)((long)param_1 + 0x134) * 4 + 0xe8) = 6;
      uVar38 = extraout_x1_24;
    }
    break;
  case 10:
    if ((*(char *)((long)param_1 + 0x6bc) != '\0') &&
       (((lVar31 != 0 || (lVar31 = param_1[0xd0], lVar31 != 0)) &&
        (*(char *)(*(long *)(lVar31 + 8) + 0x36) != '\0')))) {
      FUN_7101a036e0((long)param_1,extraout_x1_15,param_3,param_4,param_5,param_6,param_7,param_8);
      if (0x12 < *(uint *)((long)param_1 + 0x134)) goto LAB_7101a0636c;
      *(undefined4 *)((long)param_1 + (long)(int)*(uint *)((long)param_1 + 0x134) * 4 + 0xe8) = 9;
      uVar38 = extraout_x1_18;
    }
    break;
  case 0xb:
    if (((*(char *)((long)param_1 + 0x6bc) != '\0') &&
        ((lVar31 != 0 || (lVar31 = param_1[0xd0], lVar31 != 0)))) &&
       (*(char *)(*(long *)(lVar31 + 8) + 0x36) != '\0')) {
      FUN_7101a036e0((long)param_1,extraout_x1_15,param_3,param_4,param_5,param_6,param_7,param_8);
      if (0x12 < *(uint *)((long)param_1 + 0x134)) goto LAB_7101a0636c;
      *(undefined4 *)((long)param_1 + (long)(int)*(uint *)((long)param_1 + 0x134) * 4 + 0xe8) = 7;
      uVar38 = extraout_x1_25;
    }
    break;
  case 0xc:
    if (((*(char *)((long)param_1 + 0x6bc) != '\0') &&
        ((lVar31 != 0 || (lVar31 = param_1[0xd0], lVar31 != 0)))) &&
       (*(char *)(*(long *)(lVar31 + 8) + 0x36) != '\0')) {
      FUN_7101a036e0((long)param_1,extraout_x1_15,param_3,param_4,param_5,param_6,param_7,param_8);
      if (0x12 < *(uint *)((long)param_1 + 0x134)) goto LAB_7101a0636c;
      *(undefined4 *)((long)param_1 + (long)(int)*(uint *)((long)param_1 + 0x134) * 4 + 0xe8) = 8;
      uVar38 = extraout_x1_16;
    }
  }
switchD_7101a05d18_default:
  if ((int)param_1[0x3f] == 2) {
    if ((0 < *(int *)((long)param_1 + 0x6ac)) && (*(char *)((long)param_1 + 0x6bc) != '\0')) {
      lVar31 = *(long *)(DAT_710532f7b0 + 8);
      std::recursive_mutex::lock();
      cVar9 = *(char *)(lVar31 + 0x10a51);
      std::recursive_mutex::unlock();
      if ((DAT_71050a8078 == -1) &&
         ((cVar9 == '\0' &&
          (iVar10 = *(int *)((long)param_1 + 0x6ac), iVar24 = iVar10 + -1,
          *(int *)((long)param_1 + 0x6ac) = iVar24, iVar24 == 0 || iVar10 < 1)))) {
        DAT_71050a8078 = (int)param_1[0x2a];
        if (0x12 < *(uint *)((long)param_1 + 0x134)) {
LAB_7101a0636c:
                    /* WARNING: Subroutine does not return */
          abort();
        }
        *(undefined4 *)((long)param_1 + (long)(int)*(uint *)((long)param_1 + 0x134) * 4 + 0xe8) =
             0xb;
        *(undefined4 *)((long)param_1 + 0x6ac) = 0;
        *(undefined4 *)(param_1 + 0xd3) = 9;
        goto LAB_7101a062b4;
      }
    }
  }
  else {
    lVar31 = param_1[0xbd];
    if (*(char *)(lVar31 + 0x266) != '\0') {
      *(undefined1 *)(lVar31 + 0x266) = 0;
      FUN_7103778300(0x3f800000,*(long *)(lVar31 + 0x10),0x710437bfe8);
      uVar38 = extraout_x1_29;
    }
    if (0 < *(int *)((long)param_1 + 0x6ac)) {
      FUN_71019e66d0(param_1[0xcd],uVar38,param_3,param_4,param_5,param_6,param_7,param_8);
      *(undefined4 *)((long)param_1 + 0x6ac) = 0;
    }
  }
  if (((int)param_1[0xd3] == 0) && (*(char *)((long)param_1 + 0x6c3) != '\0')) {
    *(undefined4 *)(param_1 + 0xd3) = 0xb;
    *(undefined1 *)((long)param_1 + 0x6c3) = 0;
  }
LAB_7101a062b4:
  FUN_7101a023f0(param_1);
  if (*param_1 != 0) {
    pcVar22 = (code *)param_1[1];
    uVar29 = param_1[2] & 1;
    if (uVar29 != 0 || pcVar22 != (code *)0x0) {
      if (uVar29 != 0) {
        pcVar22 = *(code **)(pcVar22 + *(long *)(*param_1 + (param_1[2] >> 1)));
      }
      (*pcVar22)();
    }
  }
  *(int *)((long)param_1 + 0x13c) = *(int *)((long)param_1 + 0x13c) + 1;
  return;
}

