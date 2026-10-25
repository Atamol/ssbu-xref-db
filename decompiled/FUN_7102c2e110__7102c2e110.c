// addr:      7102c2e110
// offset:    0x2c2e110
// name:      FUN_7102c2e110
// mangled:   
// signature: undefined __cdecl FUN_7102c2e110(long param_1, undefined8 param_2, long * * * * * * * * * param_3, long * * * * * * * * * param_4, long * * * * param_5, ulong param_6, long * * * param_7, long * * * param_8)


/* WARNING: Removing unreachable block (ram,0x007102c2ebbc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7102c2e110(long param_1,undefined8 param_2,long *********param_3,long *********param_4,
                   long ****param_5,ulong param_6,long ***param_7,long ***param_8)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined1 auVar3 [16];
  undefined4 uVar4;
  int iVar5;
  long *plVar6;
  char *pcVar7;
  undefined8 *puVar8;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  long *********ppppppppplVar9;
  long *plVar10;
  long ********pppppppplVar11;
  code *pcVar12;
  undefined8 uVar13;
  uint uVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  long lVar18;
  uint uVar19;
  long *********ppppppppplVar20;
  long *********__haystack;
  long lVar21;
  float __x;
  float fVar22;
  float fVar23;
  float fVar24;
  undefined1 auVar25 [16];
  undefined1 uVar26;
  undefined1 uVar27;
  undefined1 uVar28;
  undefined1 uVar29;
  float fVar30;
  undefined8 uVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  long ********local_180;
  ulong uStack_178;
  undefined8 local_170;
  ulong uStack_168;
  undefined1 *local_160;
  ulong uStack_158;
  undefined7 local_150;
  undefined1 uStack_149;
  uint7 uStack_148;
  undefined1 uStack_141;
  undefined8 local_140;
  ulong uStack_138;
  undefined2 local_130;
  undefined2 uStack_12e;
  undefined4 uStack_12c;
  undefined8 local_128;
  undefined8 local_120;
  long *********local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined2 local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined4 local_e0;
  undefined2 local_dc;
  undefined1 local_da;
  undefined4 local_d8;
  undefined8 local_d4;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined2 local_b8;
  undefined2 local_b4;
  undefined4 local_b0;
  undefined8 local_ac;
  undefined8 local_a4;
  undefined8 uStack_9c;
  undefined4 local_94;
  undefined2 local_90;
  undefined4 local_8c;
  undefined2 local_88;
  undefined1 local_86;
  undefined4 local_64;
  
  lVar21 = *(long *)(param_1 + 8);
  plVar10 = *(long **)(*(long *)(lVar21 + 0x300) + 0x18);
  puVar8 = (undefined8 *)*plVar10;
  puVar2 = (undefined8 *)plVar10[1];
  if (puVar8 != puVar2) {
    do {
      ppppppppplVar20 = (long *********)*puVar8;
      __haystack = ppppppppplVar20 + 0xb;
      uVar14 = (uint)*(byte *)__haystack;
      if (*(byte *)__haystack != 0) {
        plVar10 = *(long **)(*(long *)(lVar21 + 0x310) + 0xd0);
        plVar6 = *(long **)(*(long *)(lVar21 + 0x310) + 0xd8);
        if (plVar10 != plVar6) {
          uVar16 = 0;
          lVar18 = 0x59;
          uVar19 = 0xffffffff;
          do {
            uVar1 = uVar14 + 0x20;
            if (0x19 < uVar14 - 0x41) {
              uVar1 = uVar14;
            }
            uVar14 = (uint)*(byte *)((long)ppppppppplVar20 + lVar18);
            lVar18 = lVar18 + 1;
            uVar19 = (&DAT_7104754084)[(uVar1 ^ uVar19) & 0xff] ^ uVar19 >> 8;
            uVar16 = uVar16 + 0x100000000;
          } while (uVar14 != 0);
          do {
            if ((*(uint *)(plVar10 + 1) < 2) &&
               ((uVar16 & 0xff00000000 | (ulong)~uVar19) == *(ulong *)(*plVar10 + 0x68))) {
              if (*plVar10 != 0) {
                plVar10 = (long *)FUN_710392e290(0x10,0x1d0,(long ****)param_3,(byte ****)param_4,
                                                 param_5,param_6,param_7,param_8);
                if (plVar10 == (long *)0x0) {
                  if (DAT_7105332f00 != (long *)0x0) {
                    local_64 = 0;
                    local_180 = (long ********)&DAT_000001d0;
                    ppppppppplVar9 = &local_180;
                    uVar16 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_64);
                    if (((uVar16 & 1) != 0) &&
                       (plVar10 = (long *)FUN_710392e290(0x10,0x1d0,(long ****)ppppppppplVar9,
                                                         (byte ****)param_4,param_5,param_6,param_7,
                                                         param_8), plVar10 != (long *)0x0))
                    goto LAB_7102c2e598;
                  }
                  plVar10 = (long *)0x0;
                }
LAB_7102c2e598:
                param_3 = ppppppppplVar20;
                FUN_71031455c0(plVar10,lVar21,(long)ppppppppplVar20,(byte ****)param_4,param_5,
                               param_6,param_7,param_8);
                pppppppplVar11 = local_180;
                ppppppppplVar9 = local_110;
                uVar31 = local_f0;
                uVar13 = uStack_e8;
                local_f0 = _ConstantZero;
                uStack_e8 = uRam0000007107459008;
                local_180 = _ConstantZero;
                goto joined_r0x007102c2e5a8;
              }
              break;
            }
            plVar10 = plVar10 + 2;
          } while (plVar6 != plVar10);
        }
      }
      pppppppplVar11 = local_180;
      uVar31 = local_f0;
      uVar13 = uStack_e8;
      if (ppppppppplVar20[0x25] != (long ********)0x0) {
        plVar10 = (long *)FUN_710392e290(0x10,0x68,(long ****)param_3,(byte ****)param_4,param_5,
                                         param_6,param_7,param_8);
        if (plVar10 == (long *)0x0) {
          if (DAT_7105332f00 != (long *)0x0) {
            local_64 = 0;
            local_180 = (long ********)&DAT_00000068;
            ppppppppplVar9 = &local_180;
            uVar16 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_64);
            if (((uVar16 & 1) != 0) &&
               (plVar10 = (long *)FUN_710392e290(0x10,0x68,(long ****)ppppppppplVar9,
                                                 (byte ****)param_4,param_5,param_6,param_7,param_8)
               , plVar10 != (long *)0x0)) goto LAB_7102c2e294;
          }
          plVar10 = (long *)0x0;
        }
LAB_7102c2e294:
        param_3 = __haystack;
        FUN_7103142910(plVar10,lVar21,(byte *)__haystack,(byte ****)param_4,param_5,param_6,param_7,
                       param_8);
        pppppppplVar11 = local_180;
        ppppppppplVar9 = local_110;
        uVar31 = local_f0;
        uVar13 = uStack_e8;
        local_f0 = _ConstantZero;
        uStack_e8 = uRam0000007107459008;
        local_180 = _ConstantZero;
joined_r0x007102c2e5a8:
        local_110 = ppppppppplVar9;
        _ConstantZero = local_f0;
        uRam0000007107459008 = uStack_e8;
        _ConstantZero = local_180;
        if ((plVar10 != (long *)0x0) && (ppppppppplVar20 != (long *********)0x0)) {
          if (ppppppppplVar20[0x25] != (long ********)0x0) {
            local_da = 0;
            auVar3._8_4_ = _DAT_7107521008;
            auVar3._0_8_ = local_180;
            auVar25._8_4_ = _DAT_7107521008;
            auVar25._0_8_ = local_180;
            auVar25._12_4_ = uRam000000710752100c;
            auVar3._12_4_ = uRam000000710752100c;
            auVar25 = NEON_ext(auVar25,auVar3,8,1);
            uStack_178 = (ulong)auVar25._0_4_;
            local_160 = &DAT_3f8000003f800000;
            uStack_158 = 0x169;
            local_130 = 0x3f;
            uVar14 = (uint)uStack_12c >> 8;
            uStack_12c = CONCAT31((int3)uVar14,0x19);
            local_128 = 0x15a2c502b3;
            local_110._7_1_ = (undefined1)((ulong)ppppppppplVar9 >> 0x38);
            local_150 = 0;
            uStack_149 = 0;
            uStack_148 = 0x8000003f800000;
            uStack_141 = 0x3f;
            local_d8 = 0x3f800000;
            uVar16 = (ulong)local_140 >> 0x20;
            local_140 = CONCAT44((int)uVar16,0x3f800000);
            uStack_138 = 0x31ed91fca;
            uStack_12e = 3;
            local_120 = CONCAT17((char)((ulong)local_120 >> 0x38),0x100000100);
            local_110 = (long *********)
                        (CONCAT26((short)(CONCAT17(local_110._7_1_,
                                                   CONCAT16(0xe,(int6)ppppppppplVar9)) >> 0x30),
                                  (int6)ppppppppplVar9) & 0xffff0000ffffffff);
            local_100 = 0;
            local_f8 = 0x31ed91fca;
            local_c8 = 0x425cbfc4f;
            local_c0 = 0x7fb997a80;
            local_b0 = 0xbf800000;
            local_108 = 0;
            local_e0 = 0;
            local_dc = 0;
            local_d4 = 0x3f800000;
            local_b8 = 0;
            local_b4 = 0;
            local_a4 = 0;
            uStack_9c = 0;
            local_ac = 0;
            local_94 = 0xffffffff;
            local_90 = 3;
            local_8c = 0x3f800000;
            local_88 = 0;
            local_86 = 0;
            pppppppplVar11 = local_180;
            local_170 = local_180;
            uStack_168 = uStack_178;
            uVar31 = local_f0;
            uVar13 = uStack_e8;
            if (plVar10[7] != 0) {
              plVar6 = *(long **)(plVar10[7] + 0xa0);
              param_4 = &local_180;
              param_3 = (long *********)0x0;
              (**(code **)(*plVar6 + 0x68))(plVar6,0);
              pppppppplVar11 = local_180;
              uVar31 = local_f0;
              uVar13 = uStack_e8;
              if (plVar10[7] != 0) {
                plVar6 = *(long **)(plVar10[7] + 0x130);
                param_3 = (long *********)ppppppppplVar20[0x25];
                param_4 = (long *********)0x0;
                param_5 = (long ****)0x0;
                (**(code **)(*plVar6 + 0x108))(plVar6,0);
                pppppppplVar11 = local_180;
                uVar31 = local_f0;
                uVar13 = uStack_e8;
              }
            }
          }
          uStack_e8 = uVar13;
          local_f0 = uVar31;
          local_180 = pppppppplVar11;
          FUN_710313ef20(plVar10);
          lVar21 = 0x18;
          pcVar7 = "stc_s00_clouds_set";
          do {
            pcVar7 = strstr((char *)__haystack,pcVar7);
            if (((pcVar7 != (char *)0x0) &&
                (pppppppplVar11 = ppppppppplVar20[0x22], pppppppplVar11 != (long ********)0x0)) &&
               (*pppppppplVar11 != pppppppplVar11[1])) {
              lVar21 = 0;
              goto LAB_7102c2e5cc;
            }
            pcVar7 = *(char **)(lVar21 + 0x7105123218);
            lVar21 = lVar21 + 0x18;
          } while (lVar21 != 0x2e8);
          lVar21 = 0x18;
          pcVar7 = "stc_s01_clouds_set";
          do {
            pcVar7 = strstr((char *)__haystack,pcVar7);
            if (((pcVar7 != (char *)0x0) &&
                (pppppppplVar11 = ppppppppplVar20[0x22], pppppppplVar11 != (long ********)0x0)) &&
               (*pppppppplVar11 != pppppppplVar11[1])) {
              lVar21 = 1;
              goto LAB_7102c2e5cc;
            }
            pcVar7 = *(char **)(lVar21 + 0x7105123500);
            lVar21 = lVar21 + 0x18;
          } while (lVar21 != 0x2e8);
          lVar21 = 0x18;
          pcVar7 = "dyr_s02_kumo_rotate_set";
          do {
            pcVar7 = strstr((char *)__haystack,pcVar7);
            if (((pcVar7 != (char *)0x0) &&
                (pppppppplVar11 = ppppppppplVar20[0x22], pppppppplVar11 != (long ********)0x0)) &&
               (*pppppppplVar11 != pppppppplVar11[1])) {
              lVar21 = 2;
              goto LAB_7102c2e5cc;
            }
            pcVar7 = *(char **)(lVar21 + 0x71051237e8);
            lVar21 = lVar21 + 0x18;
          } while (lVar21 != 0x2b8);
          lVar21 = 0x18;
          pcVar7 = "dyr_s03_bg_room_a_set";
LAB_7102c2e4fc:
          pcVar7 = strstr((char *)__haystack,pcVar7);
          if (((pcVar7 == (char *)0x0) ||
              (pppppppplVar11 = ppppppppplVar20[0x22], pppppppplVar11 == (long ********)0x0)) ||
             (*pppppppplVar11 == pppppppplVar11[1])) goto LAB_7102c2e51c;
          lVar21 = 3;
LAB_7102c2e5cc:
          lVar21 = param_1 + lVar21 * 8;
          plVar6 = *(long **)(lVar21 + 0x48);
          (**(code **)(*plVar6 + 0x48))(plVar6,plVar10);
          plVar10 = *(long **)(lVar21 + 0x48);
          (**(code **)(*plVar10 + 0x40))(plVar10,ppppppppplVar20);
          pppppppplVar11 = local_180;
          uVar31 = local_f0;
          uVar13 = uStack_e8;
        }
      }
LAB_7102c2e5fc:
      uStack_e8 = uVar13;
      local_f0 = uVar31;
      local_180 = pppppppplVar11;
      puVar8 = puVar8 + 1;
      if (puVar8 == puVar2) break;
      lVar21 = *(long *)(param_1 + 8);
    } while( true );
  }
  (**(code **)(**(long **)(param_1 + 0x48) + 0x50))
            (*(long **)(param_1 + 0x48),*(undefined8 *)(*(long *)(param_1 + 8) + 0x338));
  lVar21 = **(long **)(param_1 + 0x48);
  fVar23 = -*(float *)(*(long *)(param_1 + 0x10) + 0x10);
  if (*(int *)(param_1 + 0x20) == 0) {
    pcVar12 = *(code **)(lVar21 + 0x30);
    fVar24 = 0.0;
  }
  else {
    pcVar12 = *(code **)(lVar21 + 0x38);
    fVar24 = fVar23;
    fVar23 = 0.0;
  }
  (*pcVar12)(fVar23,fVar24,ZEXT816(0x3f800000),0x3f800000,*(long **)(param_1 + 0x48),0);
  (**(code **)(**(long **)(param_1 + 0x50) + 0x50))
            (*(long **)(param_1 + 0x50),*(undefined8 *)(*(long *)(param_1 + 8) + 0x338));
  lVar21 = **(long **)(param_1 + 0x50);
  fVar23 = -*(float *)(*(long *)(param_1 + 0x10) + 0x10);
  if (*(int *)(param_1 + 0x20) == 1) {
    pcVar12 = *(code **)(lVar21 + 0x30);
    fVar24 = 0.0;
    fVar34 = fVar23;
  }
  else {
    pcVar12 = *(code **)(lVar21 + 0x38);
    fVar34 = 0.0;
    fVar24 = fVar23;
  }
  (*pcVar12)(fVar34,fVar24,ZEXT816(0x3f800000),0x3f800000,*(long **)(param_1 + 0x50),0);
  (**(code **)(**(long **)(param_1 + 0x58) + 0x50))
            (*(long **)(param_1 + 0x58),*(undefined8 *)(*(long *)(param_1 + 8) + 0x338));
  lVar21 = **(long **)(param_1 + 0x58);
  fVar23 = -*(float *)(*(long *)(param_1 + 0x10) + 0x10);
  if (*(int *)(param_1 + 0x20) == 2) {
    pcVar12 = *(code **)(lVar21 + 0x30);
    fVar24 = 0.0;
    fVar34 = fVar23;
  }
  else {
    pcVar12 = *(code **)(lVar21 + 0x38);
    fVar34 = 0.0;
    fVar24 = fVar23;
  }
  (*pcVar12)(fVar34,fVar24,ZEXT816(0x3f800000),0x3f800000,*(long **)(param_1 + 0x58),0);
  (**(code **)(**(long **)(param_1 + 0x60) + 0x50))
            (*(long **)(param_1 + 0x60),*(undefined8 *)(*(long *)(param_1 + 8) + 0x338));
  lVar21 = **(long **)(param_1 + 0x60);
  fVar23 = -*(float *)(*(long *)(param_1 + 0x10) + 0x10);
  if (*(int *)(param_1 + 0x20) == 3) {
    pcVar12 = *(code **)(lVar21 + 0x30);
    fVar24 = 0.0;
    fVar34 = fVar23;
  }
  else {
    pcVar12 = *(code **)(lVar21 + 0x38);
    fVar34 = 0.0;
    fVar24 = fVar23;
  }
  (*pcVar12)(fVar34,fVar24,ZEXT816(0x3f800000),0x3f800000,*(long **)(param_1 + 0x60),0);
  plVar10 = *(long **)(param_1 + 0x78);
  if (plVar10 != (long *)0x0) {
    (**(code **)(*plVar10 + 0x10))(plVar10,*(undefined8 *)(param_1 + 0x10));
    (**(code **)(**(long **)(param_1 + 0x78) + 0x48))
              (*(long **)(param_1 + 0x78),*(undefined8 *)(*(long *)(param_1 + 8) + 0x338));
  }
  plVar10 = *(long **)(param_1 + 0x80);
  if (plVar10 != (long *)0x0) {
    (**(code **)(*plVar10 + 0x10))(plVar10,*(undefined8 *)(param_1 + 0x10));
    (**(code **)(**(long **)(param_1 + 0x80) + 0x48))
              (*(long **)(param_1 + 0x80),*(undefined8 *)(*(long *)(param_1 + 8) + 0x338));
  }
  plVar10 = *(long **)(param_1 + 0x88);
  if (plVar10 != (long *)0x0) {
    (**(code **)(*plVar10 + 0x10))(plVar10,*(undefined8 *)(param_1 + 0x10));
    (**(code **)(**(long **)(param_1 + 0x88) + 0x48))
              (*(long **)(param_1 + 0x88),*(undefined8 *)(*(long *)(param_1 + 8) + 0x338));
  }
  plVar10 = *(long **)(param_1 + 0x90);
  if (plVar10 != (long *)0x0) {
    (**(code **)(*plVar10 + 0x10))(plVar10,*(undefined8 *)(param_1 + 0x10));
    (**(code **)(**(long **)(param_1 + 0x90) + 0x48))
              (*(long **)(param_1 + 0x90),*(undefined8 *)(*(long *)(param_1 + 8) + 0x338));
  }
  plVar10 = *(long **)(param_1 + 0x98);
  if (plVar10 != (long *)0x0) {
    (**(code **)(*plVar10 + 0x10))(plVar10,*(undefined8 *)(param_1 + 0x10));
    (**(code **)(**(long **)(param_1 + 0x98) + 0x48))
              (*(long **)(param_1 + 0x98),*(undefined8 *)(*(long *)(param_1 + 8) + 0x338));
  }
  plVar10 = *(long **)(param_1 + 0xa0);
  if (plVar10 != (long *)0x0) {
    (**(code **)(*plVar10 + 0x10))(plVar10,*(undefined8 *)(param_1 + 0x10));
    (**(code **)(**(long **)(param_1 + 0xa0) + 0x48))
              (*(long **)(param_1 + 0xa0),*(undefined8 *)(*(long *)(param_1 + 8) + 0x338));
  }
  puVar8 = (undefined8 *)
           FUN_710392e290(0x10,0x210,(long ****)param_3,(byte ****)param_4,param_5,param_6,param_7,
                          param_8);
  uVar31 = extraout_x1;
  if (puVar8 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_64 = 0;
      local_180 = (long ********)&DAT_00000210;
      param_3 = &local_180;
      auVar25 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_64);
      uVar31 = auVar25._8_8_;
      if (((auVar25._0_8_ & 1) != 0) &&
         (puVar8 = (undefined8 *)
                   FUN_710392e290(0x10,0x210,(long ****)param_3,(byte ****)param_4,param_5,param_6,
                                  param_7,param_8), uVar31 = extraout_x1_00,
         puVar8 != (undefined8 *)0x0)) goto LAB_7102c2e934;
    }
    puVar8 = (undefined8 *)0x0;
  }
LAB_7102c2e934:
  uVar13 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)((long)puVar8 + 0x34) = 0;
  puVar8[5] = 0x4000000000000000;
  puVar8[0x12] = 0;
  puVar8[0x13] = 0;
  puVar8[0x10] = 0;
  puVar8[0x11] = 0;
  *(undefined8 *)((long)puVar8 + 0x14) = 0x3f80000000000000;
  *(undefined8 *)((long)puVar8 + 0x1c) = 0x3f800000;
  *(undefined4 *)(puVar8 + 6) = 0x3f800000;
  *(undefined2 *)((long)puVar8 + 0x3c) = 0;
  puVar8[0x16] = 0;
  *(undefined4 *)(puVar8 + 0x2f) = 0;
  *(undefined2 *)(puVar8 + 0x31) = 0;
  puVar8[0x30] = 0;
  *(undefined4 *)((long)puVar8 + 0x18c) = 0xbf800000;
  *(undefined4 *)(puVar8 + 0x32) = 0x3f800000;
  *(undefined4 *)((long)puVar8 + 0x194) = 0x3f800000;
  *(undefined4 *)(puVar8 + 0x33) = 0xbf800000;
  *puVar8 = &PTR_FUN_7105124018;
  puVar8[1] = uVar13;
  *(undefined1 *)((long)puVar8 + 0x3e) = 1;
  puVar8[0x14] = 0x438700003f800000;
  puVar8[0x15] = 0x42b400003f800000;
  *(undefined4 *)(puVar8 + 0x2a) = 0x420c0000;
  *(undefined4 *)(puVar8 + 0x2e) = 0x420c0000;
  *(undefined4 *)((long)puVar8 + 0x174) = 0x3f000000;
  *(undefined4 *)((long)puVar8 + 0x17c) = 0xffffffff;
  puVar8[0xe] = 0;
  puVar8[0xf] = 0;
  puVar8[0xc] = 0;
  puVar8[0xd] = 0;
  puVar8[10] = 0;
  puVar8[0xb] = 0;
  puVar8[8] = 0;
  puVar8[9] = 0;
  puVar8[0x28] = 0;
  puVar8[0x29] = 0;
  puVar8[0x26] = 0;
  puVar8[0x27] = 0;
  puVar8[0x24] = 0;
  puVar8[0x25] = 0;
  puVar8[0x21] = 0;
  puVar8[0x22] = 0;
  puVar8[0x1f] = 0;
  puVar8[0x20] = 0;
  puVar8[0x1d] = 0;
  puVar8[0x1e] = 0;
  puVar8[0x1b] = 0;
  puVar8[0x1c] = 0;
  puVar8[0x19] = 0;
  puVar8[0x1a] = 0;
  puVar8[0x17] = 0;
  puVar8[0x18] = 0;
  puVar8[0x2c] = 0;
  puVar8[0x2d] = 0;
  *(undefined8 *)((long)puVar8 + 0x19c) = *(undefined8 *)((long)puVar8 + 0x18c);
  *(undefined8 *)((long)puVar8 + 0x1a4) = *(undefined8 *)((long)puVar8 + 0x194);
  *(undefined8 *)((long)puVar8 + 0x1b4) = 0;
  *(undefined8 *)((long)puVar8 + 0x1ac) = 0;
  *(undefined4 *)((long)puVar8 + 0x1bc) = 0xc1a00000;
  *(undefined4 *)(puVar8 + 0x38) = 0x41a00000;
  *(undefined4 *)((long)puVar8 + 0x1c4) = 0x41200000;
  *(undefined4 *)(puVar8 + 0x39) = 0xc1200000;
  *(undefined1 *)(puVar8 + 0x3a) = 0;
  puVar8[0x40] = 0;
  *(undefined4 *)(puVar8 + 0x3f) = 0;
  puVar8[0x3d] = 0;
  puVar8[0x3e] = 0;
  puVar8[0x3b] = 0;
  puVar8[0x3c] = 0;
  plVar10 = *(long **)(param_1 + 0xa8);
  *(undefined8 **)(param_1 + 0xa8) = puVar8;
  if (plVar10 != (long *)0x0) {
    (**(code **)(*plVar10 + 8))(plVar10);
    puVar8 = *(undefined8 **)(param_1 + 0xa8);
    uVar31 = extraout_x1_01;
  }
  FUN_7102c30f40((long)puVar8,uVar31,(long ****)param_3,(byte ****)param_4,param_5,param_6,param_7,
                 param_8);
  *(undefined8 *)(*(long *)(param_1 + 0xa8) + 0x200) =
       *(undefined8 *)(*(long *)(param_1 + 8) + 0x338);
  if (*(long *)(param_1 + 0xa8) != 0) {
    local_110 = (long *********)0x0;
    local_108 = 0;
    local_118 = (long *********)0x0;
    lVar21 = *(long *)(param_1 + 0x10);
    local_180 = *(long *********)(lVar21 + 200);
    uStack_178 = (ulong)*(uint *)(lVar21 + 0xd0);
    local_170 = *(long *********)(lVar21 + 0xd4);
    uStack_168 = (ulong)*(uint *)(lVar21 + 0xdc);
    local_160 = *(undefined1 **)(lVar21 + 0xe0);
    uStack_158 = (ulong)*(uint *)(lVar21 + 0xe8);
    uStack_148 = (uint7)*(uint *)(lVar21 + 0xf4);
    uStack_141 = 0;
    local_150 = (undefined7)*(undefined8 *)(lVar21 + 0xec);
    uStack_149 = (undefined1)((ulong)*(undefined8 *)(lVar21 + 0xec) >> 0x38);
    local_140 = *(undefined8 *)(lVar21 + 0xf8);
    uStack_138 = (ulong)*(uint *)(lVar21 + 0x100);
    local_130 = (undefined2)*(undefined4 *)(lVar21 + 0x104);
    uStack_12e = (undefined2)((uint)*(undefined4 *)(lVar21 + 0x104) >> 0x10);
    uStack_12c = *(undefined4 *)(lVar21 + 0x114);
    local_128 = CONCAT44(*(undefined4 *)(lVar21 + 0x118),*(undefined4 *)(lVar21 + 0x108));
    local_120 = *(undefined8 *)(lVar21 + 0x10c);
    uVar16 = *(long *)(lVar21 + 0x130) - *(long *)(lVar21 + 0x128) >> 2;
    if (uVar16 != 0) {
      FUN_71003ca470(&local_118,uVar16,(long ****)param_3,(byte ****)param_4,param_5,param_6,param_7
                     ,param_8);
    }
    if (local_110 != local_118) {
      uVar16 = 1;
      uVar17 = 0;
      do {
        uVar15 = uVar16;
        *(undefined4 *)((long)local_118 + uVar17 * 4) =
             *(undefined4 *)(*(long *)(*(long *)(param_1 + 0x10) + 0x128) + uVar17 * 4);
        uVar16 = (ulong)((int)uVar15 + 1);
        uVar17 = uVar15;
      } while (uVar15 < (ulong)((long)local_110 - (long)local_118 >> 2));
    }
    uVar14 = (uint)uStack_178;
    fVar33 = SUB84(local_180,0);
    fVar34 = (float)((ulong)local_180 >> 0x20);
    lVar21 = *(long *)(param_1 + 0xa8);
    ppppppppplVar20 = (long *********)(lVar21 + 0x50);
    *(ulong *)(lVar21 + 0x58) = uStack_178 & 0xffffffff;
    *ppppppppplVar20 = local_180;
    *(ulong *)(lVar21 + 0x68) = uStack_168 & 0xffffffff;
    *(float *)(lVar21 + 0x60) = (float)local_170;
    *(float *)(lVar21 + 100) = local_170._4_4_;
    *(ulong *)(lVar21 + 0x78) = uStack_158 & 0xffffffff;
    *(undefined1 **)(lVar21 + 0x70) = local_160;
    *(ulong *)(lVar21 + 0x88) = (ulong)uStack_148 & 0xffffffff;
    *(ulong *)(lVar21 + 0x80) = CONCAT17(uStack_149,local_150);
    *(ulong *)(lVar21 + 0x98) = uStack_138 & 0xffffffff;
    *(undefined8 *)(lVar21 + 0x90) = local_140;
    *(undefined8 *)(lVar21 + 0xa8) = local_128;
    *(undefined8 *)(lVar21 + 0xb0) = local_120;
    *(ulong *)(lVar21 + 0xa0) = CONCAT44(uStack_12c,CONCAT22(uStack_12e,local_130));
    fVar23 = (float)local_170;
    fVar24 = local_170._4_4_;
    if (ppppppppplVar20 != &local_180) {
      param_3 = local_110;
      FUN_71003ca640((undefined8 *)(lVar21 + 0xb8),local_118,(long ****)local_110,(byte ****)param_4
                     ,param_5,param_6,param_7,param_8);
      uVar14 = (uint)*(undefined8 *)(lVar21 + 0x58);
      fVar33 = (float)*(undefined8 *)(lVar21 + 0x50);
      fVar34 = (float)((ulong)*(undefined8 *)(lVar21 + 0x50) >> 0x20);
      fVar23 = *(float *)(lVar21 + 0x60);
      fVar24 = *(float *)(lVar21 + 100);
    }
    fVar33 = fVar33 - fVar23;
    fVar34 = fVar34 - fVar24;
    __x = fVar33 * fVar33 + fVar34 * fVar34;
    fVar22 = fVar33 * fVar33 + fVar34 * fVar34;
    uVar31 = NEON_frsqrte(CONCAT44(fVar22,__x),4);
    fVar32 = (float)((ulong)uVar31 >> 0x20);
    uVar13 = NEON_frsqrts(CONCAT44(fVar22 * fVar32,__x * (float)uVar31),uVar31,4);
    fVar30 = (float)uVar31 * (float)uVar13;
    fVar32 = fVar32 * (float)((ulong)uVar13 >> 0x20);
    uVar31 = NEON_frsqrts(CONCAT44(fVar22 * fVar32,__x * fVar30),CONCAT44(fVar32,fVar30),4);
    iVar5 = -(uint)(__x == 0.0);
    fVar22 = *(float *)(lVar21 + 0xa0);
    uVar26 = SUB41(fVar22,0);
    uVar27 = (undefined1)((uint)fVar22 >> 8);
    uVar28 = (undefined1)((uint)fVar22 >> 0x10);
    uVar29 = (undefined1)((uint)fVar22 >> 0x18);
    if (__x != 0.0) {
      fVar23 = SQRT(__x);
      if (NAN(fVar23)) {
        fVar23 = sqrtf(__x);
      }
      fVar33 = fVar33 * (1.0 / fVar23);
      fVar34 = fVar34 * (1.0 / fVar23);
      uVar14 = (uint)*(undefined8 *)(lVar21 + 0x58);
      fVar23 = *(float *)(lVar21 + 0x60);
      fVar24 = *(float *)(lVar21 + 100);
      uVar4 = *(undefined4 *)(lVar21 + 0xa0);
      uVar26 = (undefined1)uVar4;
      uVar27 = (undefined1)((uint)uVar4 >> 8);
      uVar28 = (undefined1)((uint)uVar4 >> 0x10);
      uVar29 = (undefined1)((uint)uVar4 >> 0x18);
    }
    fVar22 = (float)CONCAT13(uVar29,CONCAT12(uVar28,CONCAT11(uVar27,uVar26))) *
             (float)(uint)(int)((float)((uint)(__x * fVar30 * (float)uVar31) &
                                       CONCAT13(~(byte)((uint)iVar5 >> 0x18),
                                                CONCAT12(~(byte)((uint)iVar5 >> 0x10),
                                                         CONCAT11(~(byte)((uint)iVar5 >> 8),
                                                                  ~(byte)iVar5)))) / fVar22);
    *(ulong *)(lVar21 + 0x58) = (ulong)uVar14;
    *ppppppppplVar20 = (long ********)CONCAT44(fVar24 + fVar34 * fVar22,fVar23 + fVar33 * fVar22);
    if (local_118 != (long *********)0x0) {
      local_110 = local_118;
      FUN_710392eb40((ulong)local_118);
    }
  }
  if (DAT_71052b9390 != 0) {
    uStack_178 = CONCAT44(uStack_178._4_4_,0x3f800000);
    local_170 = (long ********)0x0;
    uStack_168 = 0;
    local_160 = (undefined1 *)0x2bf800000;
    uStack_158 = 0;
    uStack_148 = 0;
    local_150 = 0;
    uStack_149 = 0;
    local_180 = (long ********)&DAT_00000004;
    iVar5 = FUN_710056c360(DAT_71052b9390,(uint *)&local_180,param_3,(byte ****)param_4,
                           (undefined *)param_5,param_6,param_7,param_8);
    *(int *)(param_1 + 0xb0) = iVar5;
  }
  FUN_7102c2f5f0(param_1,(ulong)*(uint *)(param_1 + 0x20),param_3,(byte ****)param_4,param_5,param_6
                 ,param_7,param_8);
  return;
LAB_7102c2e51c:
  pcVar7 = *(char **)(lVar21 + 0x7105123aa0);
  lVar21 = lVar21 + 0x18;
  pppppppplVar11 = local_180;
  uVar31 = local_f0;
  uVar13 = uStack_e8;
  if (lVar21 == 0x3a8) goto LAB_7102c2e5fc;
  goto LAB_7102c2e4fc;
}

