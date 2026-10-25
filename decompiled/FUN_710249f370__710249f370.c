// addr:      710249f370
// offset:    0x249f370
// name:      FUN_710249f370
// mangled:   
// signature: undefined __cdecl FUN_710249f370(long param_1, undefined8 param_2, long * * * * param_3, undefined1[16] * param_4, undefined1[16] * param_5, undefined1[16] * param_6, long * * * param_7, long * * * param_8)


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_710249f370(long param_1,undefined8 param_2,long ****param_3,undefined1 (*param_4) [16],
                   undefined1 (*param_5) [16],undefined1 (*param_6) [16],long ***param_7,
                   long ***param_8)

{
  undefined1 (*pauVar1) [16];
  long *plVar2;
  byte *pbVar3;
  uint uVar4;
  undefined8 *puVar5;
  char cVar6;
  ushort uVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined8 uVar15;
  bool bVar16;
  bool bVar17;
  uint uVar18;
  int iVar19;
  undefined4 uVar20;
  ulong uVar21;
  undefined1 *puVar22;
  long *plVar23;
  ulong uVar24;
  byte ****ppppbVar25;
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
  undefined8 uVar26;
  undefined8 extraout_x1_14;
  int iVar27;
  long ****pppplVar28;
  char *pcVar29;
  byte bVar30;
  int *piVar31;
  ulong uVar32;
  uint *puVar33;
  code *pcVar34;
  ulong *puVar35;
  long lVar36;
  uint uVar37;
  ulong uVar38;
  ulong *puVar39;
  undefined1 uVar40;
  uint uVar41;
  uint uVar42;
  ulong uVar43;
  long lVar44;
  long lVar45;
  undefined8 *puVar46;
  long lVar47;
  long *plVar48;
  int iVar49;
  undefined4 extraout_s0;
  undefined4 extraout_s0_00;
  undefined4 extraout_s0_01;
  float fVar50;
  undefined4 uVar51;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  float extraout_var_01;
  undefined8 extraout_var_02;
  undefined8 extraout_var_03;
  undefined8 extraout_var_04;
  undefined1 auVar52 [16];
  undefined **local_98;
  long *local_90;
  undefined4 local_88;
  
  lVar47 = *(long *)(param_1 + 8);
  if (*(char *)(lVar47 + 0xc) == '\x02') {
    uVar21 = FUN_710159d380();
    *(byte *)(lVar47 + 0x1c) = (byte)uVar21 & 1;
    if ((uVar21 & 1) == 0) {
      *(int *)(lVar47 + 0x10) = *(int *)(lVar47 + 0x10) + 1;
    }
    lVar44 = *(long *)(lVar47 + 0x28);
    uVar21 = *(ulong *)(lVar44 + 0x10) & 0xffffffffff;
    if ((uVar21 != 0xc477ec1cf && uVar21 != 0xcde779075) && uVar21 != 0xca970a0e3) {
      uVar21 = *(long *)(lVar44 + 0x78) - *(long *)(lVar44 + 0x70);
      uVar18 = (uint)(uVar21 >> 3);
      uVar26 = extraout_x1;
      if (uVar18 != 0) {
        uVar21 = uVar21 >> 3 & 0xffffffff;
        lVar36 = 0;
        iVar49 = 0;
        iVar19 = 0;
        do {
          lVar44 = *(long *)(lVar44 + 0x70);
          lVar45 = *(long *)(lVar44 + lVar36);
          if (*(byte *)(lVar45 + 0x10) - 1 < 2) {
            bVar30 = *(byte *)(lVar45 + 0x78);
            if ((bVar30 | 1) == 3) {
              if (bVar30 == 3) {
                if ((uint)*(ushort *)(lVar45 + 0x16) <= *(uint *)(lVar47 + 0x14))
                goto LAB_710249f4fc;
              }
              else if ((bVar30 == 2) &&
                      ((uint)*(ushort *)(lVar45 + 0x14) * 0x3c <= *(uint *)(lVar47 + 0x10))) {
LAB_710249f4fc:
                uVar40 = 4;
                if (*(int *)(lVar45 + 0x7c) != -1) {
                  uVar40 = 5;
                }
                *(undefined1 *)(lVar45 + 0x78) = uVar40;
                *(undefined4 *)(lVar45 + 0x84) = 0x1e;
              }
              bVar30 = *(byte *)(*(long *)(lVar44 + lVar36) + 0x78);
              iVar19 = iVar19 + 1;
            }
            if (bVar30 == 4) {
              iVar49 = iVar49 + 1;
            }
          }
          if (uVar21 * 8 + -8 == lVar36) goto code_r0x00710249f52c;
          lVar44 = *(long *)(lVar47 + 0x28);
          lVar36 = lVar36 + 8;
        } while( true );
      }
      iVar49 = 0;
      iVar19 = 0;
      goto LAB_710249f7bc;
    }
    if (uVar21 == 0xc477ec1cf) {
      iVar19 = *(int *)(lVar47 + 0x58);
      uVar26 = extraout_x1;
      if (iVar19 == 5) {
        lVar44 = *lib::Singleton<app::FighterManager>::instance_;
        if (0 < *(int *)(lVar44 + 0xa0)) {
          iVar19 = 0;
          do {
            iVar49 = iVar19;
            if (*(long *)(lVar44 + 0x20) == 0) {
LAB_710249f5e4:
              if (*(long *)(lVar44 + 0x28) != 0) {
                if (iVar49 == 0) {
                  lVar36 = 0x100000000;
                  goto LAB_710249f694;
                }
                iVar49 = iVar49 + -1;
              }
              if (*(long *)(lVar44 + 0x30) != 0) {
                if (iVar49 == 0) {
                  lVar36 = 0x200000000;
                  goto LAB_710249f694;
                }
                iVar49 = iVar49 + -1;
              }
              if (*(long *)(lVar44 + 0x38) != 0) {
                if (iVar49 == 0) {
                  lVar36 = 0x300000000;
                  goto LAB_710249f694;
                }
                iVar49 = iVar49 + -1;
              }
              if (*(long *)(lVar44 + 0x40) != 0) {
                if (iVar49 == 0) {
                  lVar36 = 0x400000000;
                  goto LAB_710249f694;
                }
                iVar49 = iVar49 + -1;
              }
              if (*(long *)(lVar44 + 0x48) != 0) {
                if (iVar49 == 0) {
                  lVar36 = 0x500000000;
                  goto LAB_710249f694;
                }
                iVar49 = iVar49 + -1;
              }
              if (*(long *)(lVar44 + 0x50) != 0) {
                if (iVar49 == 0) {
                  lVar36 = 0x600000000;
                  goto LAB_710249f694;
                }
                iVar49 = iVar49 + -1;
              }
              lVar36 = 0x700000000;
              if (*(long *)(lVar44 + 0x58) == 0 || iVar49 != 0) {
                lVar36 = -0x100000000;
              }
              if ((iVar49 != 0) || (*(long *)(lVar44 + 0x58) == 0)) goto LAB_71024a1b28;
            }
            else {
              if (iVar19 != 0) {
                iVar49 = iVar19 + -1;
                goto LAB_710249f5e4;
              }
              lVar36 = 0;
            }
LAB_710249f694:
            lVar44 = *(long *)(lVar44 + (lVar36 >> 0x1d) + 0x20);
            if ((lVar44 != 0) && (*(int *)(*(long *)(lVar44 + 0xf8) + 0x28) != 0)) {
              iVar49 = *(int *)(*(long *)(lVar44 + 0x60) + (long)*(int *)(lVar44 + 0xe0) * 0x260 +
                               0xc);
              if (iVar49 == -1) {
                plVar48 = (long *)(**(long **)(DAT_71052c3420 + 8) + 0xc50);
              }
              else {
                plVar48 = *(long **)(**(long **)(DAT_71052c3420 + 8) + (long)iVar49 * 8 + 0xc68);
              }
              if ((DAT_71052c3420 != 0) && (plVar48[1] != 0)) {
                auVar52 = (**(code **)(*plVar48 + 0x10))(plVar48);
                uVar26 = auVar52._8_8_;
                if (((auVar52._0_8_ & 1) != 0) &&
                   (((DAT_710532f8b0 == 0 || (*(int *)(*(long *)(DAT_710532f8b0 + 8) + 0x138) == 0))
                    || (*(char *)(*(long *)(DAT_710532f8b0 + 8) + 0x2b8) != '\v')))) {
                  uVar18 = *(uint *)((long)plVar48 + 0x14);
                  if (uVar18 != 0xffffffff && *(char *)(*(long *)plVar48[1] + 0x70) != '\0') {
                    if (7 < uVar18) goto LAB_71024a1b28;
                    lVar44 = *(long *)(*(long *)plVar48[1] + 0xb0) + (long)(int)uVar18 * 0x2d0;
                    *(undefined1 *)(lVar44 + 0x13b) = 0;
                    *(undefined1 *)(lVar44 + 0x138) = 1;
                  }
                }
              }
            }
            lVar44 = *lib::Singleton<app::FighterManager>::instance_;
            iVar19 = iVar19 + 1;
          } while (iVar19 < *(int *)(lVar44 + 0xa0));
        }
        if (*(uint *)(lVar47 + 0x5c) < *(int *)(lVar47 + 8) - 1U) {
          *(uint *)(lVar47 + 0x5c) = *(uint *)(lVar47 + 0x5c) + 1;
          uVar20 = 1;
        }
        else {
          uVar20 = 6;
        }
        *(undefined4 *)(lVar47 + 0x58) = uVar20;
        bVar30 = *(byte *)(lVar47 + 0x1f);
        plVar48 = lib::Singleton<app::FighterManager>::instance_;
      }
      else if (iVar19 == 4) {
        FUN_710158a360(*(long *)(lVar47 + 0x30),extraout_x1,(ulong)param_3,param_4,param_5,param_6,
                       param_7,param_8);
        bVar30 = *(byte *)(lVar47 + 0x1f);
        uVar26 = extraout_x1_03;
        plVar48 = lib::Singleton<app::FighterManager>::instance_;
      }
      else {
        if (iVar19 == 1) {
          FUN_7102495230(lVar47,extraout_x1,param_3,(byte ****)param_4,(long ****)param_5,param_6,
                         param_7,param_8);
          uVar26 = extraout_x1_00;
        }
        bVar30 = *(byte *)(lVar47 + 0x1f);
        plVar48 = lib::Singleton<app::FighterManager>::instance_;
      }
      lib::Singleton<app::FighterManager>::instance_ = plVar48;
      if (bVar30 != 0) {
        uVar21 = 0;
        do {
          uVar24 = _DAT_7107521008;
          uVar15 = _ConstantZero;
          if (7 < uVar21) goto LAB_71024a1b28;
          lVar44 = *(long *)(*plVar48 + uVar21 * 8 + 0x20);
          if (((lVar44 != 0) && (lib::Singleton<app::StageManager>::instance_ != (long *)0x0)) &&
             (*(int *)(*lib::Singleton<app::StageManager>::instance_ + 0x17c) != -1)) {
            uVar32 = *(ulong *)(*(long *)(lVar47 + 0x28) + 0x10);
            plVar2 = (long *)(*lib::Singleton<app::StageManager>::instance_ + 0x128);
            uVar38 = uVar32 & 0xffffffffff;
            if ((((uVar38 == 0xc477ec1cf) || (uVar38 == 0xcde779075)) ||
                ((uVar32 & 0xffffffffff) == 0xca970a0e3)) && (*(int *)(lVar47 + 0x58) != 4)) {
              (**(code **)(*plVar2 + 0x50))(plVar2,0);
              auVar13._4_4_ = extraout_var_00;
              auVar13._0_4_ = extraout_s0_00;
              auVar13._8_8_ = extraout_var_03;
              auVar14._4_4_ = extraout_var_00;
              auVar14._0_4_ = extraout_s0_00;
              auVar14._8_8_ = extraout_var_03;
              auVar52 = NEON_ext(auVar13,auVar14,8,1);
              uVar18 = auVar52._0_4_;
              uVar26 = extraout_x1_06;
              uVar20 = extraout_s0_00;
              uVar51 = extraout_var_00;
LAB_710249f96c:
              uVar24 = (ulong)uVar18;
            }
            else {
              uVar18 = (**(code **)(*plVar2 + 0x48))(plVar2);
              uVar20 = (undefined4)uVar15;
              uVar51 = (undefined4)((ulong)uVar15 >> 0x20);
              uVar26 = extraout_x1_04;
              if (0 < (int)uVar18) {
                puVar33 = *(uint **)*DAT_71052c35b0;
                uVar37 = puVar33[3];
                puVar33[4] = puVar33[4] + 1;
                uVar41 = *puVar33 ^ *puVar33 << 0xb;
                *puVar33 = puVar33[1];
                uVar41 = uVar41 ^ uVar41 >> 8 ^ uVar37 ^ uVar37 >> 0x13;
                puVar33[1] = puVar33[2];
                puVar33[2] = uVar37;
                puVar33[3] = uVar41;
                uVar37 = 0;
                if (uVar18 != 0) {
                  uVar37 = uVar41 / uVar18;
                }
                iVar19 = uVar41 - uVar37 * uVar18;
                iVar49 = 0;
                if (uVar18 != 0) {
                  iVar49 = iVar19 / (int)uVar18;
                }
                (**(code **)(*plVar2 + 0x50))(plVar2,iVar19 - iVar49 * uVar18);
                auVar52._4_4_ = extraout_var;
                auVar52._0_4_ = extraout_s0;
                auVar52._8_8_ = extraout_var_02;
                auVar10._4_4_ = extraout_var;
                auVar10._0_4_ = extraout_s0;
                auVar10._8_8_ = extraout_var_02;
                auVar52 = NEON_ext(auVar52,auVar10,8,1);
                uVar18 = auVar52._0_4_;
                uVar26 = extraout_x1_05;
                uVar20 = extraout_s0;
                uVar51 = extraout_var;
                goto LAB_710249f96c;
              }
            }
            auVar11._4_4_ = uVar51;
            auVar11._0_4_ = uVar20;
            auVar11._8_8_ = uVar24;
            auVar12._4_4_ = uVar51;
            auVar12._0_4_ = uVar20;
            auVar12._8_8_ = uVar24;
            auVar52 = NEON_ext(auVar11,auVar12,8,1);
            lVar44 = *(long *)(lVar44 + 0xf8);
            *(ulong *)(lVar44 + 0x9f8) = (ulong)auVar52._0_4_;
            *(ulong *)(lVar44 + 0x9f0) = CONCAT44(uVar51,uVar20);
            bVar30 = *(byte *)(lVar47 + 0x1f);
          }
          uVar21 = uVar21 + 1;
        } while (uVar21 < bVar30);
      }
      FUN_7102493420(lVar47,uVar26,param_3,(byte ****)param_4,(long ****)param_5,(ulong)param_6,
                     param_7,param_8);
      FUN_710158a360(*(long *)(lVar47 + 0x38),extraout_x1_07,(ulong)param_3,param_4,param_5,param_6,
                     param_7,param_8);
    }
    else {
      FUN_7102493420(lVar47,extraout_x1,param_3,(byte ****)param_4,(long ****)param_5,(ulong)param_6
                     ,param_7,param_8);
      FUN_710158a360(*(long *)(lVar47 + 0x38),extraout_x1_01,(ulong)param_3,param_4,param_5,param_6,
                     param_7,param_8);
    }
  }
  goto LAB_710249f9ac;
LAB_71024a16c8:
  pcVar29 = "mel_info_spirits_rule_ally";
  goto joined_r0x0071024a16d0;
LAB_71024a14a4:
  pcVar29 = "mel_info_spirits_rule_enemy";
joined_r0x0071024a16d0:
  if (ppppbVar25 != (byte ****)0x0) {
LAB_71024a152c:
    if (((*(byte *)(plVar48 + 3) & 1) == 0) &&
       (0xef < (uint)(*(int *)((long)plVar48 + 0x24) - (int)plVar48[4]))) {
      uVar20 = 0xffffffff;
      if ((byte ****)pcVar29 == (byte ****)0x0) {
        if (DAT_71052c3420 != 0 && local_90 != (long *)0x0) {
          uVar32 = (*(code *)local_98[2])(&local_98);
          uVar20 = 0xffffffff;
          if (((uVar32 & 1) != 0) &&
             (((DAT_710532f8b0 == 0 || (*(int *)(*(long *)(DAT_710532f8b0 + 8) + 0x138) == 0)) ||
              (uVar20 = 0xffffffff, *(char *)(*(long *)(DAT_710532f8b0 + 8) + 0x2b8) != '\v')))) {
            lVar44 = *(long *)(*local_90 + 0x688);
            pppplVar28 = (long ****)0x0;
LAB_71024a1734:
            pcVar29 = (char *)ppppbVar25;
            ppppbVar25 = (byte ****)0x0;
            goto LAB_71024a173c;
          }
        }
      }
      else if (DAT_71052c3420 != 0 && local_90 != (long *)0x0) {
        uVar32 = (*(code *)local_98[2])(&local_98);
        uVar20 = 0xffffffff;
        if (((uVar32 & 1) != 0) &&
           (((DAT_710532f8b0 == 0 || (*(int *)(*(long *)(DAT_710532f8b0 + 8) + 0x138) == 0)) ||
            (uVar20 = 0xffffffff, *(char *)(*(long *)(DAT_710532f8b0 + 8) + 0x2b8) != '\v')))) {
          lVar44 = *(long *)(*local_90 + 0x688);
          pppplVar28 = (long ****)0x0;
LAB_71024a173c:
          param_6 = (undefined1 (*) [16])0x0;
          uVar20 = FUN_71013e0240(lVar44,1,pppplVar28,(byte ****)pcVar29,(long ****)ppppbVar25,0,
                                  param_7,param_8);
        }
      }
    }
    else {
      uVar20 = 0xffffffff;
      if ((byte ****)pcVar29 == (byte ****)0x0) {
        if (DAT_71052c3420 != 0 && local_90 != (long *)0x0) {
          uVar32 = (*(code *)local_98[2])(&local_98);
          uVar20 = 0xffffffff;
          if (((uVar32 & 1) != 0) &&
             (((DAT_710532f8b0 == 0 || (*(int *)(*(long *)(DAT_710532f8b0 + 8) + 0x138) == 0)) ||
              (uVar20 = 0xffffffff, *(char *)(*(long *)(DAT_710532f8b0 + 8) + 0x2b8) != '\v')))) {
            lVar44 = *(long *)(*local_90 + 0x688);
            pppplVar28 = (long ****)0x1;
            goto LAB_71024a1734;
          }
        }
      }
      else if (DAT_71052c3420 != 0 && local_90 != (long *)0x0) {
        uVar32 = (*(code *)local_98[2])(&local_98);
        uVar20 = 0xffffffff;
        if (((uVar32 & 1) != 0) &&
           (((DAT_710532f8b0 == 0 || (*(int *)(*(long *)(DAT_710532f8b0 + 8) + 0x138) == 0)) ||
            (uVar20 = 0xffffffff, *(char *)(*(long *)(DAT_710532f8b0 + 8) + 0x2b8) != '\v')))) {
          lVar44 = *(long *)(*local_90 + 0x688);
          pppplVar28 = (long ****)0x1;
          goto LAB_71024a173c;
        }
      }
    }
    *(undefined4 *)((long)plVar48 + 0x54) = uVar20;
    param_4 = (undefined1 (*) [16])&DAT_71052301b0;
    param_3 = (long ****)0x3;
    param_5 = param_4;
    puVar33 = FUN_7103565910(-1.0,DAT_7105334948,0x80,3,(float *)&DAT_71052301b0,
                             (float *)&DAT_71052301b0);
    if (puVar33 == (uint *)0x0) {
      uVar41 = 0;
    }
    else {
      puVar33[3] = 3;
      puVar33[4] = 0;
      puVar33[5] = 0x41a00000;
      puVar33[6] = 0x41a00000;
      *(undefined1 **)(puVar33 + 8) = &DAT_3f8000003f800000;
      *(undefined1 **)(puVar33 + 10) = &DAT_3f8000003f800000;
      *(undefined1 **)(puVar33 + 0xc) = &DAT_3f8000003f800000;
      *(undefined1 **)(puVar33 + 0xe) = &DAT_3f8000003f800000;
      *(undefined1 **)(puVar33 + 0x20) = &DAT_3f8000003f800000;
      puVar33[0x10] = 0x3f000000;
      puVar33[0x11] = 0x3f800000;
      puVar33[1] = 0;
      puVar33[0x24] = 0;
      puVar33[7] = 0;
      *(undefined2 *)(puVar33 + 0x68) = 0;
      *(undefined1 **)(puVar33 + 0x18) = &DAT_3f8000003f800000;
      *(undefined1 **)(puVar33 + 0x1a) = &DAT_3f8000003f800000;
      uVar41 = *puVar33;
      puVar33[0x12] = 0x3f800000;
      puVar33[0x13] = 0;
      puVar33[0x14] = 0;
      puVar33[0x15] = 0;
      puVar33[0x1c] = 0;
      puVar33[0x1d] = 0;
      puVar33[0x1e] = 0;
      puVar33[0x1f] = 0x3f800000;
    }
    *(uint *)(plVar48 + 6) = uVar41;
    *(undefined4 *)((long)plVar48 + 0x34) = 0;
  }
LAB_71024a17d4:
  uVar41 = *(uint *)(plVar48 + 6);
  if (uVar41 != 0) {
    if (uVar41 >> 0x19 < 5) {
      puVar33 = DAT_7105334948 + (ulong)(uVar41 >> 0x18) * 0x6c;
      if (*puVar33 != uVar41 || puVar33 == (uint *)0x0) {
        if (puVar33 != (uint *)0x0 && *puVar33 == uVar41) {
          *(undefined2 *)(DAT_7105334948 + (ulong)(uVar41 >> 0x18) * 0x6c + 0x68) = 0;
          puVar33[4] = 0;
          puVar33[5] = 0;
          puVar33[6] = 0;
          puVar33[7] = 0;
          puVar33[0] = 0;
          puVar33[1] = 0;
          puVar33[2] = 0;
          puVar33[3] = 0;
        }
        goto LAB_71024a182c;
      }
    }
    else {
LAB_71024a182c:
      *(undefined4 *)(plVar48 + 6) = 0;
    }
    *(int *)((long)plVar48 + 0x34) = *(int *)((long)plVar48 + 0x34) + 1;
  }
  (**(code **)(*plVar48 + 0x28))(plVar48);
  if (*(char *)((long)plVar48 + 0x1c) == '\x02') {
    if (((*(char *)((long)plVar48 + 0x2c) == '\0') && ((char)plVar48[0xb] == '\0')) &&
       ((*(int *)((long)plVar48 + 0x24) - 0xb4U <= uVar18 &&
        (iVar19 = *(int *)((long)plVar48 + 0x54), -1 < iVar19)))) {
      local_90 = *(long **)(**(long **)(DAT_71052c3420 + 8) + 0xbc8);
      local_88 = *(undefined4 *)(**(long **)(DAT_71052c3420 + 8) + 0xbd0);
      local_98 = &PTR_FUN_7105063c38;
      if ((((DAT_71052c3420 != 0) && (local_90 != (long *)0x0)) &&
          (bVar17 = FUN_710138c450((long)&local_98), bVar17)) &&
         (((DAT_710532f8b0 == 0 || (*(int *)(*(long *)(DAT_710532f8b0 + 8) + 0x138) == 0)) ||
          (*(char *)(*(long *)(DAT_710532f8b0 + 8) + 0x2b8) != '\v')))) {
        for (lVar44 = *(long *)(*(long *)(*local_90 + 0x688) + 0x10);
            *(long *)(*local_90 + 0x688) + 8 != lVar44; lVar44 = *(long *)(lVar44 + 8)) {
          if (*(int *)(lVar44 + 0x1c0) == iVar19) {
            lVar36 = (long)*(int *)(lVar44 + 0x1c4) + 0xc;
            if (0x1a < (uint)lVar36) goto LAB_71024a1b28;
            FUN_710377aee0(0x3f800000,
                           *(long *)(**(long **)(lVar44 + 0x10) + 0x80) + lVar36 * 0x10 + 0x50);
            *(undefined1 *)(lVar44 + 0x1cd) = 1;
            break;
          }
        }
      }
      *(undefined1 *)(plVar48 + 0xb) = 1;
    }
    if ((*(byte *)(plVar48 + 3) >> 1 & 1) == 0) {
      if ((*(char *)((long)plVar48 + 0x2c) != '\0') || (uVar18 < *(uint *)((long)plVar48 + 0x24)))
      goto LAB_71024a1998;
    }
    else {
      uVar32 = (**(code **)(*plVar48 + 0x58))(plVar48);
      if ((uVar32 & 1) == 0) goto LAB_71024a1998;
    }
    FUN_71024a8fa0(plVar48);
    *(undefined1 *)((long)plVar48 + 0x1c) = 3;
  }
LAB_71024a1998:
  uVar24 = uVar24 + 1;
  if ((long)(uVar21 * 0x20000000) >> 0x20 <= (long)uVar24) goto LAB_71024a19cc;
  lVar44 = *(long *)(lVar47 + 0x40);
  if ((ulong)(*(long *)(lVar47 + 0x48) - lVar44 >> 3) <= uVar24) goto LAB_71024a1b30;
  goto LAB_71024a03c4;
code_r0x00710249f52c:
  uVar24 = 0;
  bVar17 = false;
  do {
    if ((!bVar17) && (*(char *)(lVar47 + 0x1c) == '\0')) {
      lVar36 = *(long *)(*(long *)(lVar47 + 0x28) + 0x70);
      lVar44 = *(long *)(lVar36 + uVar24 * 8);
      if (*(char *)(lVar44 + 0x78) == '\x05') {
        if (*(int *)(lVar44 + 0x84) == 0) {
          FUN_7102494b70(lVar47,uVar24 & 0xffffffff,(undefined **)param_3,(byte ****)param_4,
                         (long ****)param_5,(ulong)param_6,param_7,param_8);
          *(undefined1 *)(*(long *)(lVar36 + uVar24 * 8) + 0x78) = 6;
          bVar17 = true;
          uVar26 = extraout_x1_02;
        }
        else {
          bVar17 = false;
          *(int *)(lVar44 + 0x84) = *(int *)(lVar44 + 0x84) + -1;
        }
      }
      else {
        bVar17 = false;
      }
    }
    uVar24 = uVar24 + 1;
  } while (uVar21 != uVar24);
LAB_710249f7bc:
  piVar31 = *(int **)(lVar47 + 0x30);
  if ((((*piVar31 == 0) && (piVar31[0x18] == 0)) && (piVar31[0x30] == 0)) &&
     (((piVar31[0x48] == 0 && (piVar31[0x60] == 0)) &&
      ((piVar31[0x78] == 0 && (piVar31[0x90] == 0)))))) {
    bVar17 = piVar31[0xa8] == 0;
  }
  else {
    bVar17 = false;
  }
  uVar24 = (ulong)*(byte *)(lVar47 + 0x1f);
  uVar21 = uVar24 + 4;
  bVar17 = (bool)(bVar17 & *(char *)(lVar47 + 0x1c) == '\0');
  do {
    if (!bVar17) {
      bVar17 = false;
      goto LAB_71024a0204;
    }
    if (7 < uVar24) goto LAB_71024a1b28;
    lVar44 = *(long *)(*lib::Singleton<app::FighterManager>::instance_ +
                       ((long)(uVar24 << 0x20) >> 0x1d) + 0x20);
    if (lVar44 == 0) {
LAB_71024a0200:
      bVar17 = true;
    }
    else {
      uVar41 = *(uint *)(lVar44 + 0xe0);
      if (uVar41 == 0xffffffff) goto LAB_71024a0200;
      if ((ulong)*(byte *)(lVar44 + 0x5918) < *(ulong *)(lVar44 + 0x4150)) {
        lVar36 = lVar44 + (ulong)*(byte *)(lVar44 + 0x5918) * 8;
        plVar48 = *(long **)(lVar36 + 0x4160);
        if ((plVar48 == (long *)0x0) ||
           (uVar32 = (**(code **)(*plVar48 + 0x518))(), (uVar32 & 1) == 0)) goto LAB_71024a01a0;
        lVar36 = *(long *)(lVar36 + 0x4160);
      }
      else {
LAB_71024a01a0:
        lVar36 = 0;
      }
      FUN_71003a9ab0(&local_98,lVar36);
      auVar52 = (**(code **)(*local_90 + 0x230))();
      uVar26 = auVar52._8_8_;
      bVar17 = true;
      if ((iVar49 != 0) && ((auVar52._0_8_ & 1) != 0)) {
        if ((uVar41 == *(uint *)(lVar47 + 0x24)) ||
           (((*(char *)(lVar44 + 0x593a) == '\0' || (*(int *)(*(long *)(lVar44 + 0xf8) + 0xd8) != 0)
             ) || (*(char *)(lVar44 + 0x5920) == '\x03')))) goto LAB_71024a0200;
        lVar44 = *(long *)(*(long *)(lVar47 + 0x28) + 0x70);
        uVar32 = *(long *)(*(long *)(lVar47 + 0x28) + 0x78) - lVar44;
        if ((int)(uVar32 >> 3) != 0) {
          uVar38 = 0;
          bVar17 = false;
          bVar16 = false;
          param_3 = (long ****)&DAT_ffffffff;
          uVar37 = 0x34bc0;
          do {
            lVar36 = *(long *)(lVar44 + uVar38 * 8);
            if ((*(byte *)(lVar36 + 0x10) - 1 < 2) && (*(char *)(lVar36 + 0x78) == '\x04')) {
              if (bVar17 || bVar16) {
LAB_71024a0058:
                if (bVar17) {
                  uVar7 = *(ushort *)(lVar36 + 0x16);
LAB_71024a0088:
                  uVar42 = (uint)uVar38;
                  uVar4 = (uint)uVar7;
                  if (uVar37 <= uVar7) {
                    uVar42 = (uint)param_3;
                    uVar4 = uVar37;
                  }
                  uVar37 = uVar4;
                  param_3 = (long ****)(ulong)uVar42;
                  bVar17 = true;
                }
                else {
                  if (bVar16) {
                    uVar42 = (uint)*(ushort *)(lVar36 + 0x14);
                    goto LAB_71024a00a0;
                  }
                  bVar16 = false;
                  bVar17 = false;
                }
              }
              else {
                if (*(short *)(lVar36 + 0x14) != 0) {
                  bVar16 = true;
                  goto LAB_71024a0058;
                }
                uVar7 = *(ushort *)(lVar36 + 0x16);
                if (uVar7 != 0) {
                  bVar16 = false;
                  goto LAB_71024a0088;
                }
                uVar42 = 0;
LAB_71024a00a0:
                bVar17 = false;
                uVar4 = (uint)uVar38;
                if (uVar37 <= uVar42) {
                  uVar4 = (uint)param_3;
                  uVar42 = uVar37;
                }
                uVar37 = uVar42;
                param_3 = (long ****)(ulong)uVar4;
                bVar16 = true;
              }
            }
            uVar38 = uVar38 + 1;
          } while ((uVar32 >> 3 & 0xffffffff) != uVar38);
          iVar27 = (int)param_3;
          if ((-1 < iVar27) &&
             (lVar36 = *(long *)(lVar44 + (long)iVar27 * 8), *(char *)(lVar36 + 0x78) == '\x04')) {
            if (*(int *)(lVar36 + 0x84) == 0) {
              param_4 = (undefined1 (*) [16])0x0;
              FUN_7102493600(lVar47,(ulong)uVar41,(undefined **)param_3,0,(long ****)param_5,param_6
                             ,param_7,param_8);
              *(uint *)(*(long *)(lVar44 + (long)iVar27 * 8) + 0x7c) = uVar41;
              bVar17 = false;
              iVar49 = iVar49 + -1;
              *(undefined1 *)(*(long *)(lVar44 + (long)iVar27 * 8) + 0x78) = 6;
              uVar26 = extraout_x1_14;
              goto LAB_71024a0204;
            }
            *(int *)(lVar36 + 0x84) = *(int *)(lVar36 + 0x84) + -1;
          }
        }
        bVar17 = true;
      }
    }
LAB_71024a0204:
    uVar24 = uVar24 + 1;
  } while (uVar24 < uVar21);
  if (uVar18 != 0) {
    iVar49 = 0;
    uVar41 = 1;
    do {
      lVar44 = *(long *)(*(long *)(*(long *)(lVar47 + 0x28) + 0x70) + (ulong)(uVar41 - 1) * 8);
      if (*(byte *)(lVar44 + 0x78) - 4 < 3) {
        bVar30 = 0;
        iVar49 = *(int *)(lVar47 + 0x20);
        goto joined_r0x0071024a0274;
      }
      if (*(int *)(lVar44 + 0x7c) != -1) {
        iVar49 = iVar49 + 1;
      }
      bVar17 = uVar41 < uVar18;
      uVar41 = uVar41 + 1;
    } while (iVar49 != 4 && bVar17);
  }
  bVar30 = 1;
  iVar49 = *(int *)(lVar47 + 0x20);
joined_r0x0071024a0274:
  if (iVar49 == 0) {
    if (!(bool)(iVar19 == 0 | bVar30 ^ 1)) {
      lVar44 = *(long *)(*(long *)(lVar47 + 0x28) + 0x70);
      uVar21 = *(long *)(*(long *)(lVar47 + 0x28) + 0x78) - lVar44;
      if ((int)(uVar21 >> 3) != 0) {
        uVar24 = 0;
        uVar18 = 0x34bc0;
        iVar19 = -1;
        do {
          lVar36 = *(long *)(lVar44 + uVar24 * 8);
          uVar41 = uVar18;
          iVar49 = iVar19;
          if ((*(byte *)(lVar36 + 0x10) - 1 < 2) && ((*(byte *)(lVar36 + 0x78) | 1) == 3)) {
            uVar7 = *(ushort *)(lVar36 + 0x14);
            uVar41 = (uint)uVar7;
            iVar49 = (int)uVar24;
            if (uVar7 == 0 || (uVar18 == uVar7 || uVar18 < uVar7)) {
              uVar41 = uVar18;
              iVar49 = iVar19;
            }
          }
          uVar18 = uVar41;
          uVar24 = uVar24 + 1;
          iVar19 = iVar49;
        } while ((uVar21 >> 3 & 0xffffffff) != uVar24);
        if ((iVar49 != -1) &&
           (lVar44 = *(long *)(lVar44 + (long)iVar49 * 8), *(char *)(lVar44 + 0x78) == '\x02')) {
          uVar40 = 4;
          if (*(int *)(lVar44 + 0x7c) != -1) {
            uVar40 = 5;
          }
          *(undefined1 *)(lVar44 + 0x78) = uVar40;
          *(undefined4 *)(lVar44 + 0x84) = 0x1e;
        }
      }
      iVar49 = 0x3c;
      goto LAB_71024a033c;
    }
  }
  else {
    iVar49 = iVar49 + -1;
LAB_71024a033c:
    *(int *)(lVar47 + 0x20) = iVar49;
  }
  if (*(char *)(lVar47 + 0x1c) == '\0') {
    FUN_710158a360(*(long *)(lVar47 + 0x30),uVar26,(ulong)param_3,param_4,param_5,param_6,param_7,
                   param_8);
  }
  uVar18 = *(uint *)(lVar47 + 0x24);
  if (uVar18 == 0xffffffff) {
    fVar50 = 0.0;
  }
  else {
    if (7 < uVar18) goto LAB_71024a1b28;
    fVar50 = (float)(**(code **)(*(long *)(*(long *)(*lib::Singleton<app::FighterManager>::instance_
                                                     + (long)(int)uVar18 * 8 + 0x20) + 0xf0) + 0x20)
                    )();
  }
  lVar44 = *(long *)(lVar47 + 0x40);
  uVar21 = *(long *)(lVar47 + 0x48) - lVar44;
  if (0 < (int)(uVar21 >> 3)) {
    if (*(long *)(lVar47 + 0x48) == lVar44) {
LAB_71024a1b30:
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_out_of_range();
    }
    uVar24 = 0;
LAB_71024a03c4:
    plVar48 = *(long **)(lVar44 + uVar24 * 8);
    if (*(char *)((long)plVar48 + 0x1c) != '\0') {
      uVar18 = *(uint *)(lVar47 + 0x10);
      if (*(char *)((long)plVar48 + 0x1c) == '\x01') {
        if (*(uint *)(plVar48 + 5) == 0) {
          if (*(uint *)(plVar48 + 4) <= uVar18) {
            if ((*(byte *)(plVar48 + 3) >> 2 & 1) == 0) goto LAB_71024a060c;
LAB_71024a0408:
            plVar2 = lib::Singleton<app::FighterManager>::instance_;
            if ((char)plVar48[10] == '\0') {
              if (*(char *)((long)plVar48 + 0x51) != '\0') {
                lVar45 = *lib::Singleton<app::FighterManager>::instance_;
                lVar44 = *(long *)(lVar45 + 0x20);
                lVar36 = *(long *)(lVar45 + 0x28);
                if ((lVar36 != 0) &&
                   ((((*(char *)(lVar36 + 0x5920) == '\x06' ||
                      (*(char *)(lVar36 + 0x5920) == '\x03')) &&
                     (*(char *)(lVar36 + 0x593a) == '\0')) &&
                    (*(int *)(*(long *)(lVar44 + 0xf8) + 0x28) !=
                     *(int *)(*(long *)(lVar36 + 0xf8) + 0x28))))) {
                  FUN_71024a90e0((long)plVar48,1,param_3,(byte ****)param_4,(long ****)param_5,
                                 param_6,param_7,param_8);
                  lVar45 = *plVar2;
                }
                lVar36 = *(long *)(lVar45 + 0x30);
                if ((((lVar36 != 0) &&
                     ((*(char *)(lVar36 + 0x5920) == '\x06' ||
                      (*(char *)(lVar36 + 0x5920) == '\x03')))) &&
                    (*(char *)(lVar36 + 0x593a) == '\0')) &&
                   (*(int *)(*(long *)(lVar44 + 0xf8) + 0x28) !=
                    *(int *)(*(long *)(lVar36 + 0xf8) + 0x28))) {
                  FUN_71024a90e0((long)plVar48,2,param_3,(byte ****)param_4,(long ****)param_5,
                                 param_6,param_7,param_8);
                  lVar45 = *plVar2;
                }
                lVar36 = *(long *)(lVar45 + 0x38);
                if (((lVar36 != 0) &&
                    ((*(char *)(lVar36 + 0x5920) == '\x06' || (*(char *)(lVar36 + 0x5920) == '\x03')
                     ))) && ((*(char *)(lVar36 + 0x593a) == '\0' &&
                             (*(int *)(*(long *)(lVar44 + 0xf8) + 0x28) !=
                              *(int *)(*(long *)(lVar36 + 0xf8) + 0x28))))) {
                  FUN_71024a90e0((long)plVar48,3,param_3,(byte ****)param_4,(long ****)param_5,
                                 param_6,param_7,param_8);
                  lVar45 = *plVar2;
                }
                lVar36 = *(long *)(lVar45 + 0x40);
                if (((lVar36 != 0) &&
                    (((*(char *)(lVar36 + 0x5920) == '\x06' ||
                      (*(char *)(lVar36 + 0x5920) == '\x03')) &&
                     (*(char *)(lVar36 + 0x593a) == '\0')))) &&
                   (*(int *)(*(long *)(lVar44 + 0xf8) + 0x28) !=
                    *(int *)(*(long *)(lVar36 + 0xf8) + 0x28))) {
                  FUN_71024a90e0((long)plVar48,4,param_3,(byte ****)param_4,(long ****)param_5,
                                 param_6,param_7,param_8);
                  lVar45 = *plVar2;
                }
                lVar36 = *(long *)(lVar45 + 0x48);
                if ((((lVar36 != 0) &&
                     ((*(char *)(lVar36 + 0x5920) == '\x06' ||
                      (*(char *)(lVar36 + 0x5920) == '\x03')))) &&
                    (*(char *)(lVar36 + 0x593a) == '\0')) &&
                   (*(int *)(*(long *)(lVar44 + 0xf8) + 0x28) !=
                    *(int *)(*(long *)(lVar36 + 0xf8) + 0x28))) {
                  FUN_71024a90e0((long)plVar48,5,param_3,(byte ****)param_4,(long ****)param_5,
                                 param_6,param_7,param_8);
                  lVar45 = *plVar2;
                }
                lVar36 = *(long *)(lVar45 + 0x50);
                if (((lVar36 != 0) &&
                    ((*(char *)(lVar36 + 0x5920) == '\x06' || (*(char *)(lVar36 + 0x5920) == '\x03')
                     ))) && ((*(char *)(lVar36 + 0x593a) == '\0' &&
                             (*(int *)(*(long *)(lVar44 + 0xf8) + 0x28) !=
                              *(int *)(*(long *)(lVar36 + 0xf8) + 0x28))))) {
                  FUN_71024a90e0((long)plVar48,6,param_3,(byte ****)param_4,(long ****)param_5,
                                 param_6,param_7,param_8);
                  lVar45 = *plVar2;
                }
                lVar36 = *(long *)(lVar45 + 0x58);
                if (((lVar36 != 0) &&
                    (((*(char *)(lVar36 + 0x5920) == '\x06' ||
                      (*(char *)(lVar36 + 0x5920) == '\x03')) &&
                     (*(char *)(lVar36 + 0x593a) == '\0')))) &&
                   (*(int *)(*(long *)(lVar44 + 0xf8) + 0x28) !=
                    *(int *)(*(long *)(lVar36 + 0xf8) + 0x28))) goto LAB_71024a0b04;
              }
            }
            else {
              lVar44 = *lib::Singleton<app::FighterManager>::instance_;
              lVar36 = *(long *)(lVar44 + 0x20);
              if (*(char *)((long)plVar48 + 0x51) == '\0') {
                if (((lVar36 != 0) &&
                    ((*(char *)(lVar36 + 0x5920) == '\x06' || (*(char *)(lVar36 + 0x5920) == '\x03')
                     ))) && (*(char *)(lVar36 + 0x593a) == '\0')) {
                  FUN_71024a90e0((long)plVar48,0,param_3,(byte ****)param_4,(long ****)param_5,
                                 param_6,param_7,param_8);
                  lVar44 = *plVar2;
                }
                lVar45 = *(long *)(lVar44 + 0x28);
                if (((lVar45 != 0) &&
                    ((*(char *)(lVar45 + 0x5920) == '\x06' || (*(char *)(lVar45 + 0x5920) == '\x03')
                     ))) && ((*(char *)(lVar45 + 0x593a) == '\0' &&
                             (*(int *)(*(long *)(lVar36 + 0xf8) + 0x28) ==
                              *(int *)(*(long *)(lVar45 + 0xf8) + 0x28))))) {
                  FUN_71024a90e0((long)plVar48,1,param_3,(byte ****)param_4,(long ****)param_5,
                                 param_6,param_7,param_8);
                  lVar44 = *plVar2;
                }
                lVar45 = *(long *)(lVar44 + 0x30);
                if ((lVar45 != 0) &&
                   ((((*(char *)(lVar45 + 0x5920) == '\x06' ||
                      (*(char *)(lVar45 + 0x5920) == '\x03')) &&
                     (*(char *)(lVar45 + 0x593a) == '\0')) &&
                    (*(int *)(*(long *)(lVar36 + 0xf8) + 0x28) ==
                     *(int *)(*(long *)(lVar45 + 0xf8) + 0x28))))) {
                  FUN_71024a90e0((long)plVar48,2,param_3,(byte ****)param_4,(long ****)param_5,
                                 param_6,param_7,param_8);
                  lVar44 = *plVar2;
                }
                lVar45 = *(long *)(lVar44 + 0x38);
                if ((((lVar45 != 0) &&
                     ((*(char *)(lVar45 + 0x5920) == '\x06' ||
                      (*(char *)(lVar45 + 0x5920) == '\x03')))) &&
                    (*(char *)(lVar45 + 0x593a) == '\0')) &&
                   (*(int *)(*(long *)(lVar36 + 0xf8) + 0x28) ==
                    *(int *)(*(long *)(lVar45 + 0xf8) + 0x28))) {
                  FUN_71024a90e0((long)plVar48,3,param_3,(byte ****)param_4,(long ****)param_5,
                                 param_6,param_7,param_8);
                  lVar44 = *plVar2;
                }
                lVar45 = *(long *)(lVar44 + 0x40);
                if (((lVar45 != 0) &&
                    ((*(char *)(lVar45 + 0x5920) == '\x06' || (*(char *)(lVar45 + 0x5920) == '\x03')
                     ))) && ((*(char *)(lVar45 + 0x593a) == '\0' &&
                             (*(int *)(*(long *)(lVar36 + 0xf8) + 0x28) ==
                              *(int *)(*(long *)(lVar45 + 0xf8) + 0x28))))) {
                  FUN_71024a90e0((long)plVar48,4,param_3,(byte ****)param_4,(long ****)param_5,
                                 param_6,param_7,param_8);
                  lVar44 = *plVar2;
                }
                lVar45 = *(long *)(lVar44 + 0x48);
                if (((lVar45 != 0) &&
                    (((*(char *)(lVar45 + 0x5920) == '\x06' ||
                      (*(char *)(lVar45 + 0x5920) == '\x03')) &&
                     (*(char *)(lVar45 + 0x593a) == '\0')))) &&
                   (*(int *)(*(long *)(lVar36 + 0xf8) + 0x28) ==
                    *(int *)(*(long *)(lVar45 + 0xf8) + 0x28))) {
                  FUN_71024a90e0((long)plVar48,5,param_3,(byte ****)param_4,(long ****)param_5,
                                 param_6,param_7,param_8);
                  lVar44 = *plVar2;
                }
                lVar45 = *(long *)(lVar44 + 0x50);
                if ((((lVar45 != 0) &&
                     ((*(char *)(lVar45 + 0x5920) == '\x06' ||
                      (*(char *)(lVar45 + 0x5920) == '\x03')))) &&
                    (*(char *)(lVar45 + 0x593a) == '\0')) &&
                   (*(int *)(*(long *)(lVar36 + 0xf8) + 0x28) ==
                    *(int *)(*(long *)(lVar45 + 0xf8) + 0x28))) {
                  FUN_71024a90e0((long)plVar48,6,param_3,(byte ****)param_4,(long ****)param_5,
                                 param_6,param_7,param_8);
                  lVar44 = *plVar2;
                }
                lVar44 = *(long *)(lVar44 + 0x58);
                if (((lVar44 != 0) &&
                    ((*(char *)(lVar44 + 0x5920) == '\x06' || (*(char *)(lVar44 + 0x5920) == '\x03')
                     ))) && ((*(char *)(lVar44 + 0x593a) == '\0' &&
                             (*(int *)(*(long *)(lVar36 + 0xf8) + 0x28) ==
                              *(int *)(*(long *)(lVar44 + 0xf8) + 0x28))))) goto LAB_71024a0b04;
              }
              else {
                if ((lVar36 != 0) &&
                   (((*(char *)(lVar36 + 0x5920) == '\x06' || (*(char *)(lVar36 + 0x5920) == '\x03')
                     ) && (*(char *)(lVar36 + 0x593a) == '\0')))) {
                  FUN_71024a90e0((long)plVar48,0,param_3,(byte ****)param_4,(long ****)param_5,
                                 param_6,param_7,param_8);
                  lVar44 = *plVar2;
                }
                lVar36 = *(long *)(lVar44 + 0x28);
                if (((lVar36 != 0) &&
                    ((*(char *)(lVar36 + 0x5920) == '\x06' || (*(char *)(lVar36 + 0x5920) == '\x03')
                     ))) && (*(char *)(lVar36 + 0x593a) == '\0')) {
                  FUN_71024a90e0((long)plVar48,1,param_3,(byte ****)param_4,(long ****)param_5,
                                 param_6,param_7,param_8);
                  lVar44 = *plVar2;
                }
                lVar36 = *(long *)(lVar44 + 0x30);
                if (((lVar36 != 0) &&
                    ((*(char *)(lVar36 + 0x5920) == '\x06' || (*(char *)(lVar36 + 0x5920) == '\x03')
                     ))) && (*(char *)(lVar36 + 0x593a) == '\0')) {
                  FUN_71024a90e0((long)plVar48,2,param_3,(byte ****)param_4,(long ****)param_5,
                                 param_6,param_7,param_8);
                  lVar44 = *plVar2;
                }
                lVar36 = *(long *)(lVar44 + 0x38);
                if ((lVar36 != 0) &&
                   (((*(char *)(lVar36 + 0x5920) == '\x06' || (*(char *)(lVar36 + 0x5920) == '\x03')
                     ) && (*(char *)(lVar36 + 0x593a) == '\0')))) {
                  FUN_71024a90e0((long)plVar48,3,param_3,(byte ****)param_4,(long ****)param_5,
                                 param_6,param_7,param_8);
                  lVar44 = *plVar2;
                }
                lVar36 = *(long *)(lVar44 + 0x40);
                if (((lVar36 != 0) &&
                    ((*(char *)(lVar36 + 0x5920) == '\x06' || (*(char *)(lVar36 + 0x5920) == '\x03')
                     ))) && (*(char *)(lVar36 + 0x593a) == '\0')) {
                  FUN_71024a90e0((long)plVar48,4,param_3,(byte ****)param_4,(long ****)param_5,
                                 param_6,param_7,param_8);
                  lVar44 = *plVar2;
                }
                lVar36 = *(long *)(lVar44 + 0x48);
                if (((lVar36 != 0) &&
                    ((*(char *)(lVar36 + 0x5920) == '\x06' || (*(char *)(lVar36 + 0x5920) == '\x03')
                     ))) && (*(char *)(lVar36 + 0x593a) == '\0')) {
                  FUN_71024a90e0((long)plVar48,5,param_3,(byte ****)param_4,(long ****)param_5,
                                 param_6,param_7,param_8);
                  lVar44 = *plVar2;
                }
                lVar36 = *(long *)(lVar44 + 0x50);
                if ((lVar36 != 0) &&
                   (((*(char *)(lVar36 + 0x5920) == '\x06' || (*(char *)(lVar36 + 0x5920) == '\x03')
                     ) && (*(char *)(lVar36 + 0x593a) == '\0')))) {
                  FUN_71024a90e0((long)plVar48,6,param_3,(byte ****)param_4,(long ****)param_5,
                                 param_6,param_7,param_8);
                  lVar44 = *plVar2;
                }
                lVar44 = *(long *)(lVar44 + 0x58);
                if (((lVar44 != 0) &&
                    ((*(char *)(lVar44 + 0x5920) == '\x06' || (*(char *)(lVar44 + 0x5920) == '\x03')
                     ))) && (*(char *)(lVar44 + 0x593a) == '\0')) {
LAB_71024a0b04:
                  FUN_71024a90e0((long)plVar48,7,param_3,(byte ****)param_4,(long ****)param_5,
                                 param_6,param_7,param_8);
                }
              }
            }
            puVar5 = (undefined8 *)plVar48[8];
            for (puVar46 = (undefined8 *)plVar48[7]; puVar46 != puVar5; puVar46 = puVar46 + 1) {
              local_98 = (undefined **)*puVar46;
              (**(code **)(*plVar48 + 0x38))(plVar48,&local_98);
            }
            if ((*(byte *)(plVar48 + 3) & 1) == 0) {
              uVar40 = 2;
            }
            else {
              uVar40 = 3;
            }
            *(undefined1 *)((long)plVar48 + 0x1c) = uVar40;
            goto LAB_71024a0b58;
          }
          goto LAB_71024a17d4;
        }
        if (fVar50 < (float)*(uint *)(plVar48 + 5)) goto LAB_71024a17d4;
        *(uint *)((long)plVar48 + 0x24) =
             (uVar18 - (int)plVar48[4]) + *(int *)((long)plVar48 + 0x24) * 2;
        if ((*(byte *)(plVar48 + 3) >> 2 & 1) != 0) goto LAB_71024a0408;
LAB_71024a060c:
        uVar32 = (**(code **)(*plVar48 + 0x30))(plVar48);
        if ((*(byte *)(plVar48 + 3) & 1) != 0) {
          *(undefined1 *)((long)plVar48 + 0x1c) = 3;
          if ((uVar32 & 1) != 0) goto LAB_71024a0b58;
          goto LAB_71024a17d4;
        }
        *(undefined1 *)((long)plVar48 + 0x1c) = 2;
        if ((uVar32 & 1) == 0) goto LAB_71024a17d4;
LAB_71024a0b58:
        local_90 = *(long **)(**(long **)(DAT_71052c3420 + 8) + 0xbc8);
        local_88 = *(undefined4 *)(**(long **)(DAT_71052c3420 + 8) + 0xbd0);
        local_98 = &PTR_FUN_7105063c38;
        ppppbVar25 = (byte ****)FUN_71025b32d0((char)plVar48[1],plVar48[2]);
        if (0x2e < *(byte *)(plVar48 + 1) - 1) goto switchD_71024a0bb8_caseD_4;
        uVar32 = plVar48[2];
        switch((uint)*(byte *)(plVar48 + 1)) {
        case 1:
          lVar44 = *(long *)(*DAT_7105329fa0 + 0x2f8);
          uVar38 = *(long *)(*DAT_7105329fa0 + 0x300) - lVar44 >> 4;
          uVar41 = (uint)uVar38;
          if (uVar41 != 0) {
            uVar37 = 0;
            do {
              uVar43 = (ulong)uVar37;
              if (uVar38 <= uVar43) goto LAB_71024a1b2c;
              if (((*(ulong *)(lVar44 + uVar43 * 0x10) ^ uVar32) & 0xffffffffff) == 0) {
                lVar36 = lVar44 + uVar43 * 0x10;
                cVar6 = *(char *)(lVar36 + 9);
                if (*(char *)(lVar36 + 8) == '\0') {
                  if (cVar6 != '\0') goto LAB_71024a14a4;
                }
                else if (cVar6 == '\0') goto LAB_71024a16c8;
              }
              uVar37 = uVar37 + 1;
            } while (uVar37 < uVar41);
            break;
          }
          goto joined_r0x0071024a1528;
        case 2:
          lVar44 = *(long *)(*DAT_7105329fa0 + 0x310);
          uVar38 = *(long *)(*DAT_7105329fa0 + 0x318) - lVar44 >> 4;
          uVar41 = (uint)uVar38;
          if (uVar41 == 0) goto joined_r0x0071024a1528;
          uVar37 = 0;
          do {
            uVar43 = (ulong)uVar37;
            if (uVar38 <= uVar43) goto LAB_71024a1b2c;
            if (((*(ulong *)(lVar44 + uVar43 * 0x10) ^ uVar32) & 0xffffffffff) == 0) {
              lVar36 = lVar44 + uVar43 * 0x10;
              cVar6 = *(char *)(lVar36 + 9);
              if (*(char *)(lVar36 + 8) == '\0') {
                if (cVar6 != '\0') goto LAB_71024a14a4;
              }
              else if (cVar6 == '\0') goto LAB_71024a16c8;
            }
            uVar37 = uVar37 + 1;
          } while (uVar37 < uVar41);
          break;
        case 3:
          lVar44 = *(long *)(*DAT_7105329fa0 + 0x328);
          uVar38 = *(long *)(*DAT_7105329fa0 + 0x330) - lVar44 >> 4;
          uVar41 = (uint)uVar38;
          if (uVar41 == 0) goto joined_r0x0071024a1528;
          uVar37 = 0;
          do {
            uVar43 = (ulong)uVar37;
            if (uVar38 <= uVar43) goto LAB_71024a1b2c;
            if (((*(ulong *)(lVar44 + uVar43 * 0x10) ^ uVar32) & 0xffffffffff) == 0) {
              lVar36 = lVar44 + uVar43 * 0x10;
              cVar6 = *(char *)(lVar36 + 9);
              if (*(char *)(lVar36 + 8) == '\0') {
                if (cVar6 != '\0') goto LAB_71024a14a4;
              }
              else if (cVar6 == '\0') goto LAB_71024a16c8;
            }
            uVar37 = uVar37 + 1;
          } while (uVar37 < uVar41);
          break;
        case 5:
          lVar44 = *(long *)(*DAT_7105329fa0 + 0x448);
          uVar38 = *(long *)(*DAT_7105329fa0 + 0x450) - lVar44 >> 4;
          uVar41 = (uint)uVar38;
          if (uVar41 == 0) goto joined_r0x0071024a1528;
          uVar37 = 0;
          do {
            uVar43 = (ulong)uVar37;
            if (uVar38 <= uVar43) goto LAB_71024a1b2c;
            if (((*(ulong *)(lVar44 + uVar43 * 0x10) ^ uVar32) & 0xffffffffff) == 0) {
              lVar36 = lVar44 + uVar43 * 0x10;
              cVar6 = *(char *)(lVar36 + 9);
              if (*(char *)(lVar36 + 8) == '\0') {
                if (cVar6 != '\0') goto LAB_71024a14a4;
              }
              else if (cVar6 == '\0') goto LAB_71024a16c8;
            }
            uVar37 = uVar37 + 1;
          } while (uVar37 < uVar41);
          break;
        case 6:
          lVar44 = *(long *)(*DAT_7105329fa0 + 0x358);
          uVar38 = *(long *)(*DAT_7105329fa0 + 0x360) - lVar44 >> 4;
          uVar41 = (uint)uVar38;
          if (uVar41 == 0) goto joined_r0x0071024a1528;
          uVar37 = 0;
          do {
            uVar43 = (ulong)uVar37;
            if (uVar38 <= uVar43) goto LAB_71024a1b2c;
            if (((*(ulong *)(lVar44 + uVar43 * 0x10) ^ uVar32) & 0xffffffffff) == 0) {
              lVar36 = lVar44 + uVar43 * 0x10;
              cVar6 = *(char *)(lVar36 + 9);
              if (*(char *)(lVar36 + 8) == '\0') {
                if (cVar6 != '\0') goto LAB_71024a14a4;
              }
              else if (cVar6 == '\0') goto LAB_71024a16c8;
            }
            uVar37 = uVar37 + 1;
          } while (uVar37 < uVar41);
          break;
        case 9:
          lVar44 = *(long *)(*DAT_7105329fa0 + 0x490);
          uVar38 = *(long *)(*DAT_7105329fa0 + 0x498) - lVar44 >> 4;
          uVar41 = (uint)uVar38;
          if (uVar41 == 0) goto joined_r0x0071024a1528;
          uVar37 = 0;
          do {
            uVar43 = (ulong)uVar37;
            if (uVar38 <= uVar43) goto LAB_71024a1b2c;
            if (((*(ulong *)(lVar44 + uVar43 * 0x10) ^ uVar32) & 0xffffffffff) == 0) {
              lVar36 = lVar44 + uVar43 * 0x10;
              cVar6 = *(char *)(lVar36 + 9);
              if (*(char *)(lVar36 + 8) == '\0') {
                if (cVar6 != '\0') goto LAB_71024a14a4;
              }
              else if (cVar6 == '\0') goto LAB_71024a16c8;
            }
            uVar37 = uVar37 + 1;
          } while (uVar37 < uVar41);
          break;
        case 10:
          lVar44 = *(long *)(*DAT_7105329fa0 + 0x3a0);
          uVar38 = *(long *)(*DAT_7105329fa0 + 0x3a8) - lVar44 >> 4;
          uVar41 = (uint)uVar38;
          if (uVar41 == 0) goto joined_r0x0071024a1528;
          uVar37 = 0;
          do {
            uVar43 = (ulong)uVar37;
            if (uVar38 <= uVar43) goto LAB_71024a1b2c;
            if (((*(ulong *)(lVar44 + uVar43 * 0x10) ^ uVar32) & 0xffffffffff) == 0) {
              lVar36 = lVar44 + uVar43 * 0x10;
              cVar6 = *(char *)(lVar36 + 9);
              if (*(char *)(lVar36 + 8) == '\0') {
                if (cVar6 != '\0') goto LAB_71024a14a4;
              }
              else if (cVar6 == '\0') goto LAB_71024a16c8;
            }
            uVar37 = uVar37 + 1;
          } while (uVar37 < uVar41);
          break;
        case 0x10:
          lVar44 = *(long *)(*DAT_7105329fa0 + 0x460);
          uVar38 = *(long *)(*DAT_7105329fa0 + 0x468) - lVar44 >> 4;
          uVar41 = (uint)uVar38;
          if (uVar41 == 0) goto joined_r0x0071024a1528;
          uVar37 = 0;
          do {
            uVar43 = (ulong)uVar37;
            if (uVar38 <= uVar43) goto LAB_71024a1b2c;
            if (((*(ulong *)(lVar44 + uVar43 * 0x10) ^ uVar32) & 0xffffffffff) == 0) {
              lVar36 = lVar44 + uVar43 * 0x10;
              cVar6 = *(char *)(lVar36 + 9);
              if (*(char *)(lVar36 + 8) == '\0') {
                if (cVar6 != '\0') goto LAB_71024a14a4;
              }
              else if (cVar6 == '\0') goto LAB_71024a16c8;
            }
            uVar37 = uVar37 + 1;
          } while (uVar37 < uVar41);
          break;
        case 0x11:
          lVar44 = *(long *)(*DAT_7105329fa0 + 0x478);
          uVar38 = *(long *)(*DAT_7105329fa0 + 0x480) - lVar44 >> 4;
          uVar41 = (uint)uVar38;
          if (uVar41 == 0) goto joined_r0x0071024a1528;
          uVar37 = 0;
          do {
            uVar43 = (ulong)uVar37;
            if (uVar38 <= uVar43) goto LAB_71024a1b2c;
            if (((*(ulong *)(lVar44 + uVar43 * 0x10) ^ uVar32) & 0xffffffffff) == 0) {
              lVar36 = lVar44 + uVar43 * 0x10;
              cVar6 = *(char *)(lVar36 + 9);
              if (*(char *)(lVar36 + 8) == '\0') {
                if (cVar6 != '\0') goto LAB_71024a14a4;
              }
              else if (cVar6 == '\0') goto LAB_71024a16c8;
            }
            uVar37 = uVar37 + 1;
          } while (uVar37 < uVar41);
          break;
        case 0x12:
          lVar44 = *(long *)(*DAT_7105329fa0 + 0x4c0);
          uVar38 = *(long *)(*DAT_7105329fa0 + 0x4c8) - lVar44 >> 4;
          uVar41 = (uint)uVar38;
          if (uVar41 == 0) goto joined_r0x0071024a1528;
          uVar37 = 0;
          do {
            uVar43 = (ulong)uVar37;
            if (uVar38 <= uVar43) goto LAB_71024a1b2c;
            if (((*(ulong *)(lVar44 + uVar43 * 0x10) ^ uVar32) & 0xffffffffff) == 0) {
              lVar36 = lVar44 + uVar43 * 0x10;
              cVar6 = *(char *)(lVar36 + 9);
              if (*(char *)(lVar36 + 8) == '\0') {
                if (cVar6 != '\0') goto LAB_71024a14a4;
              }
              else if (cVar6 == '\0') goto LAB_71024a16c8;
            }
            uVar37 = uVar37 + 1;
          } while (uVar37 < uVar41);
          break;
        case 0x14:
          lVar44 = *(long *)(*DAT_7105329fa0 + 0x3d0);
          uVar38 = *(long *)(*DAT_7105329fa0 + 0x3d8) - lVar44 >> 4;
          uVar41 = (uint)uVar38;
          if (uVar41 == 0) goto joined_r0x0071024a1528;
          uVar37 = 0;
          do {
            uVar43 = (ulong)uVar37;
            if (uVar38 <= uVar43) goto LAB_71024a1b2c;
            if (((*(ulong *)(lVar44 + uVar43 * 0x10) ^ uVar32) & 0xffffffffff) == 0) {
              lVar36 = lVar44 + uVar43 * 0x10;
              cVar6 = *(char *)(lVar36 + 9);
              if (*(char *)(lVar36 + 8) == '\0') {
                if (cVar6 != '\0') goto LAB_71024a14a4;
              }
              else if (cVar6 == '\0') goto LAB_71024a16c8;
            }
            uVar37 = uVar37 + 1;
          } while (uVar37 < uVar41);
          break;
        case 0x15:
          lVar44 = *(long *)(*DAT_7105329fa0 + 0x4a8);
          uVar38 = *(long *)(*DAT_7105329fa0 + 0x4b0) - lVar44 >> 4;
          uVar41 = (uint)uVar38;
          if (uVar41 == 0) goto joined_r0x0071024a1528;
          uVar37 = 0;
          do {
            uVar43 = (ulong)uVar37;
            if (uVar38 <= uVar43) goto LAB_71024a1b2c;
            if (((*(ulong *)(lVar44 + uVar43 * 0x10) ^ uVar32) & 0xffffffffff) == 0) {
              lVar36 = lVar44 + uVar43 * 0x10;
              cVar6 = *(char *)(lVar36 + 9);
              if (*(char *)(lVar36 + 8) == '\0') {
                if (cVar6 != '\0') goto LAB_71024a14a4;
              }
              else if (cVar6 == '\0') goto LAB_71024a16c8;
            }
            uVar37 = uVar37 + 1;
          } while (uVar37 < uVar41);
          break;
        case 0x16:
          lVar44 = *(long *)(*DAT_7105329fa0 + 1000);
          uVar38 = *(long *)(*DAT_7105329fa0 + 0x3f0) - lVar44 >> 4;
          uVar41 = (uint)uVar38;
          if (uVar41 == 0) goto joined_r0x0071024a1528;
          uVar37 = 0;
          do {
            uVar43 = (ulong)uVar37;
            if (uVar38 <= uVar43) goto LAB_71024a1b2c;
            if (((*(ulong *)(lVar44 + uVar43 * 0x10) ^ uVar32) & 0xffffffffff) == 0) {
              lVar36 = lVar44 + uVar43 * 0x10;
              cVar6 = *(char *)(lVar36 + 9);
              if (*(char *)(lVar36 + 8) == '\0') {
                if (cVar6 != '\0') goto LAB_71024a14a4;
              }
              else if (cVar6 == '\0') goto LAB_71024a16c8;
            }
            uVar37 = uVar37 + 1;
          } while (uVar37 < uVar41);
          break;
        case 0x17:
          lVar44 = *(long *)(*DAT_7105329fa0 + 0x400);
          uVar38 = *(long *)(*DAT_7105329fa0 + 0x408) - lVar44 >> 4;
          uVar41 = (uint)uVar38;
          if (uVar41 == 0) goto joined_r0x0071024a1528;
          uVar37 = 0;
          do {
            uVar43 = (ulong)uVar37;
            if (uVar38 <= uVar43) goto LAB_71024a1b2c;
            if (((*(ulong *)(lVar44 + uVar43 * 0x10) ^ uVar32) & 0xffffffffff) == 0) {
              lVar36 = lVar44 + uVar43 * 0x10;
              cVar6 = *(char *)(lVar36 + 9);
              if (*(char *)(lVar36 + 8) == '\0') {
                if (cVar6 != '\0') goto LAB_71024a14a4;
              }
              else if (cVar6 == '\0') goto LAB_71024a16c8;
            }
            uVar37 = uVar37 + 1;
          } while (uVar37 < uVar41);
          break;
        case 0x18:
          lVar44 = *(long *)(*DAT_7105329fa0 + 0x418);
          uVar38 = *(long *)(*DAT_7105329fa0 + 0x420) - lVar44 >> 4;
          uVar41 = (uint)uVar38;
          if (uVar41 == 0) goto joined_r0x0071024a1528;
          uVar37 = 0;
          do {
            uVar43 = (ulong)uVar37;
            if (uVar38 <= uVar43) goto LAB_71024a1b2c;
            if (((*(ulong *)(lVar44 + uVar43 * 0x10) ^ uVar32) & 0xffffffffff) == 0) {
              lVar36 = lVar44 + uVar43 * 0x10;
              cVar6 = *(char *)(lVar36 + 9);
              if (*(char *)(lVar36 + 8) == '\0') {
                if (cVar6 != '\0') goto LAB_71024a14a4;
              }
              else if (cVar6 == '\0') goto LAB_71024a16c8;
            }
            uVar37 = uVar37 + 1;
          } while (uVar37 < uVar41);
          break;
        case 0x19:
          lVar44 = *(long *)(*DAT_7105329fa0 + 0x4d8);
          uVar38 = *(long *)(*DAT_7105329fa0 + 0x4e0) - lVar44 >> 4;
          uVar41 = (uint)uVar38;
          if (uVar41 == 0) goto joined_r0x0071024a1528;
          uVar37 = 0;
          do {
            uVar43 = (ulong)uVar37;
            if (uVar38 <= uVar43) goto LAB_71024a1b2c;
            if (((*(ulong *)(lVar44 + uVar43 * 0x10) ^ uVar32) & 0xffffffffff) == 0) {
              lVar36 = lVar44 + uVar43 * 0x10;
              cVar6 = *(char *)(lVar36 + 9);
              if (*(char *)(lVar36 + 8) == '\0') {
                if (cVar6 != '\0') goto LAB_71024a14a4;
              }
              else if (cVar6 == '\0') goto LAB_71024a16c8;
            }
            uVar37 = uVar37 + 1;
          } while (uVar37 < uVar41);
          break;
        case 0x20:
          lVar44 = *(long *)(*DAT_7105329fa0 + 0x4f0);
          uVar38 = *(long *)(*DAT_7105329fa0 + 0x4f8) - lVar44 >> 4;
          uVar41 = (uint)uVar38;
          if (uVar41 == 0) goto joined_r0x0071024a1528;
          uVar37 = 0;
          do {
            uVar43 = (ulong)uVar37;
            if (uVar38 <= uVar43) goto LAB_71024a1b2c;
            if (((*(ulong *)(lVar44 + uVar43 * 0x10) ^ uVar32) & 0xffffffffff) == 0) {
              lVar36 = lVar44 + uVar43 * 0x10;
              cVar6 = *(char *)(lVar36 + 9);
              if (*(char *)(lVar36 + 8) == '\0') {
                if (cVar6 != '\0') goto LAB_71024a14a4;
              }
              else if (cVar6 == '\0') goto LAB_71024a16c8;
            }
            uVar37 = uVar37 + 1;
          } while (uVar37 < uVar41);
          break;
        case 0x22:
          lVar44 = *(long *)(*DAT_7105329fa0 + 0x640);
          uVar38 = *(long *)(*DAT_7105329fa0 + 0x648) - lVar44 >> 4;
          uVar41 = (uint)uVar38;
          if (uVar41 == 0) goto joined_r0x0071024a1528;
          uVar37 = 0;
          do {
            uVar43 = (ulong)uVar37;
            if (uVar38 <= uVar43) goto LAB_71024a1b2c;
            if (((*(ulong *)(lVar44 + uVar43 * 0x10) ^ uVar32) & 0xffffffffff) == 0) {
              lVar36 = lVar44 + uVar43 * 0x10;
              cVar6 = *(char *)(lVar36 + 9);
              if (*(char *)(lVar36 + 8) == '\0') {
                if (cVar6 != '\0') {
                  pcVar29 = "mel_info_spirits_rule_enemy";
                  goto joined_r0x0071024a19c4;
                }
              }
              else if (cVar6 == '\0') goto LAB_71024a16c8;
            }
            uVar37 = uVar37 + 1;
          } while (uVar37 < uVar41);
          break;
        case 0x28:
          lVar44 = *(long *)(*DAT_7105329fa0 + 0x5b0);
          uVar38 = *(long *)(*DAT_7105329fa0 + 0x5b8) - lVar44 >> 4;
          uVar41 = (uint)uVar38;
          if (uVar41 == 0) goto joined_r0x0071024a1528;
          uVar37 = 0;
          do {
            uVar43 = (ulong)uVar37;
            if (uVar38 <= uVar43) goto LAB_71024a1b2c;
            if (((*(ulong *)(lVar44 + uVar43 * 0x10) ^ uVar32) & 0xffffffffff) == 0) {
              lVar36 = lVar44 + uVar43 * 0x10;
              cVar6 = *(char *)(lVar36 + 9);
              if (*(char *)(lVar36 + 8) == '\0') {
                if (cVar6 != '\0') goto LAB_71024a14a4;
              }
              else if (cVar6 == '\0') goto LAB_71024a16c8;
            }
            uVar37 = uVar37 + 1;
          } while (uVar37 < uVar41);
          break;
        case 0x2f:
          lVar44 = *(long *)(*DAT_7105329fa0 + 0x658);
          uVar38 = *(long *)(*DAT_7105329fa0 + 0x660) - lVar44 >> 4;
          uVar41 = (uint)uVar38;
          if (uVar41 == 0) goto joined_r0x0071024a1528;
          uVar37 = 0;
          do {
            uVar43 = (ulong)uVar37;
            if (uVar38 <= uVar43) goto LAB_71024a1b2c;
            if (((*(ulong *)(lVar44 + uVar43 * 0x10) ^ uVar32) & 0xffffffffff) == 0) {
              lVar36 = lVar44 + uVar43 * 0x10;
              cVar6 = *(char *)(lVar36 + 9);
              if (*(char *)(lVar36 + 8) == '\0') {
                if (cVar6 != '\0') goto LAB_71024a14a4;
              }
              else if (cVar6 == '\0') goto LAB_71024a16c8;
            }
            uVar37 = uVar37 + 1;
          } while (uVar37 < uVar41);
        }
switchD_71024a0bb8_caseD_4:
joined_r0x0071024a1528:
        pcVar29 = (char *)0x0;
joined_r0x0071024a19c4:
        if (ppppbVar25 == (byte ****)0x0) goto LAB_71024a17d4;
        goto LAB_71024a152c;
      }
      goto LAB_71024a17d4;
    }
    goto LAB_71024a1998;
  }
LAB_71024a19cc:
  if (*(char *)(*(long *)(lVar47 + 0x28) + 0xac) != '\0') {
    lVar44 = **(long **)(DAT_71052c3420 + 8);
    plVar48 = (long *)(lVar44 + 0xae8);
    if (((DAT_71052c3420 != 0) && (*(long *)(lVar44 + 0xaf0) != 0)) &&
       ((uVar21 = (**(code **)(*plVar48 + 0x10))(plVar48), (uVar21 & 1) != 0 &&
        ((((DAT_710532f8b0 == 0 || (*(int *)(*(long *)(DAT_710532f8b0 + 8) + 0x138) == 0)) ||
          (*(char *)(*(long *)(DAT_710532f8b0 + 8) + 0x2b8) != '\v')) &&
         (*(char *)(**(long **)(lVar44 + 0xaf0) + 0x70) != '\0')))))) {
      lVar36 = *(long *)(*(long *)(**(long **)(lVar44 + 0xaf0) + 0xb0) + 0x18b0);
      *(undefined1 *)(lVar36 + 0x23) = 1;
      *(undefined1 *)(lVar36 + 0x20) = 1;
    }
    lVar36 = *(long *)(*(long *)(lVar47 + 0x28) + 0x70);
    iVar19 = 0;
    uVar21 = *(long *)(*(long *)(lVar47 + 0x28) + 0x78) - lVar36 >> 3;
    uVar18 = (uint)uVar21;
    if (uVar18 != 0) {
      uVar41 = 0;
      do {
        if (uVar21 <= uVar41) {
LAB_71024a1b2c:
                    /* WARNING: Subroutine does not return */
          std::__vector_base_common<true>::__throw_out_of_range();
        }
        lVar47 = *(long *)(lVar36 + (ulong)uVar41 * 8);
        if ((*(byte *)(lVar47 + 0x10) - 1 < 2) && (*(char *)(lVar47 + 0x78) != '\x01')) {
          iVar19 = iVar19 + 1;
        }
        uVar41 = uVar41 + 1;
      } while (uVar41 < uVar18);
    }
    if (((DAT_71052c3420 != 0) && (*(long *)(lVar44 + 0xaf0) != 0)) &&
       ((uVar21 = (**(code **)(*plVar48 + 0x10))(plVar48), (uVar21 & 1) != 0 &&
        (((DAT_710532f8b0 == 0 || (*(int *)(*(long *)(DAT_710532f8b0 + 8) + 0x138) == 0)) ||
         (*(char *)(*(long *)(DAT_710532f8b0 + 8) + 0x2b8) != '\v')))))) {
      lVar47 = *(long *)(*(long *)(**(long **)(lVar44 + 0xaf0) + 0xb0) + 0x18b0);
      *(int *)(lVar47 + 0x40) = iVar19;
      *(undefined1 *)(lVar47 + 0x38) = 1;
    }
  }
LAB_710249f9ac:
  plVar48 = *(long **)(*(long *)(param_1 + 8) + 0x150);
  *(undefined1 *)(plVar48 + 0x2c) = 0;
  if (0x12 < *(uint *)((long)plVar48 + 0x104)) {
LAB_71024a1b28:
                    /* WARNING: Subroutine does not return */
    abort();
  }
  uVar18 = *(uint *)((long)plVar48 + (long)(int)*(uint *)((long)plVar48 + 0x104) * 4 + 0xb8);
  if (*(uint *)(plVar48 + 0x21) != uVar18) {
    *(uint *)(plVar48 + 0x22) = *(uint *)(plVar48 + 0x21);
    *(uint *)(plVar48 + 0x21) = uVar18;
    if (8 < uVar18) goto LAB_71024a1b28;
    lVar47 = plVar48[(long)(int)uVar18 * 2 + 6];
    plVar48[1] = plVar48[(long)(int)uVar18 * 2 + 5];
    plVar48[2] = lVar47;
    pcVar34 = (code *)plVar48[3];
    uVar21 = plVar48[4] & 1;
    if (uVar21 != 0 || pcVar34 != (code *)0x0) {
      if (uVar21 != 0) {
        pcVar34 = *(code **)(pcVar34 + *(long *)(*plVar48 + (plVar48[4] >> 1)));
      }
      (*pcVar34)();
    }
    *(undefined4 *)((long)plVar48 + 0x10c) = 0;
  }
  if (*(char *)((long)plVar48 + 0x114) != '\0') {
    pcVar34 = (code *)plVar48[3];
    uVar21 = plVar48[4] & 1;
    if (uVar21 != 0 || pcVar34 != (code *)0x0) {
      if (uVar21 != 0) {
        pcVar34 = *(code **)(pcVar34 + *(long *)(*plVar48 + (plVar48[4] >> 1)));
      }
      (*pcVar34)();
    }
    *(undefined4 *)((long)plVar48 + 0x10c) = 0;
    *(undefined1 *)((long)plVar48 + 0x114) = 0;
  }
  if (*plVar48 != 0) {
    pcVar34 = (code *)plVar48[1];
    uVar21 = plVar48[2] & 1;
    if (uVar21 != 0 || pcVar34 != (code *)0x0) {
      if (uVar21 != 0) {
        pcVar34 = *(code **)(pcVar34 + *(long *)(*plVar48 + (plVar48[2] >> 1)));
      }
      (*pcVar34)();
    }
  }
  *(int *)((long)plVar48 + 0x10c) = *(int *)((long)plVar48 + 0x10c) + 1;
  if (*(char *)((long)plVar48 + 0x16d) != '\0') {
    iVar19 = (**(code **)(*(long *)(*lib::Singleton<app::StageManager>::instance_ + 0x128) + 0x20))
                       (*lib::Singleton<app::StageManager>::instance_ + 0x128);
    plVar2 = lib::Singleton<app::FighterManager>::instance_;
    uVar26 = extraout_x1_08;
    uVar20 = 0x3f800000;
    if (*(long *)(*lib::Singleton<app::FighterManager>::instance_ + 0x20) != 0) {
      puVar22 = FUN_7103263e20(*(long *)(DAT_710532f730 + 8) + 0x160,
                               *(int *)(*(long *)(*lib::Singleton<app::FighterManager>::instance_ +
                                                 0x20) + 0x18));
      puVar35 = *(ulong **)(*DAT_7105329fa0 + 600);
      puVar39 = *(ulong **)(*DAT_7105329fa0 + 0x260);
      uVar26 = extraout_x1_09;
      uVar20 = 0x3f800000;
      if (puVar35 != puVar39) {
        uVar21 = (long)puVar39 + (-0x10 - (long)puVar35);
        if (((uint)uVar21 >> 4 & 1) == 0) {
          if ((((ulong)puVar22 ^ *puVar35) & 0xffffffffff) == 0) {
            uVar20 = (undefined4)puVar35[1];
          }
          else {
            uVar20 = 0x3f800000;
          }
          puVar35 = puVar35 + 2;
        }
        else {
          uVar20 = 0x3f800000;
        }
        if (0xf < uVar21) {
          do {
            if ((((ulong)puVar22 ^ *puVar35) & 0xffffffffff) == 0) {
              uVar20 = (undefined4)puVar35[1];
            }
            if ((((ulong)puVar22 ^ puVar35[2]) & 0xffffffffff) == 0) {
              uVar20 = (undefined4)puVar35[3];
            }
            puVar35 = puVar35 + 4;
          } while (puVar35 != puVar39);
        }
      }
    }
    if (iVar19 < 2) {
      lVar47 = 0;
      do {
        if (((lVar47 == 0) && (lVar44 = *(long *)(*plVar2 + 0x20), lVar44 != 0)) &&
           (pbVar3 = (byte *)(lVar44 + 0x5920), *pbVar3 != 6)) {
          pauVar1 = (undefined1 (*) [16])(*(long *)(lVar44 + 0xf8) + 0x9f0);
          uVar15 = *(undefined8 *)*pauVar1;
          auVar52 = NEON_ext(*pauVar1,*pauVar1,8,1);
          *(undefined4 *)(*(long *)(lVar44 + 0xf8) + 0x9e0) = 0x3f800000;
          lVar36 = *(long *)(lVar44 + 0xf8);
          *(ulong *)(lVar36 + 0x9f8) = (ulong)auVar52._0_4_;
          *(ulong *)(lVar36 + 0x9f0) = CONCAT44((float)((ulong)uVar15 >> 0x20) + 50.0,(int)uVar15);
          *(undefined4 *)(*(long *)(lVar44 + 0xf8) + 0x364) = uVar20;
          *(undefined1 *)(lVar44 + 0x591b) = 0xc;
          if (*pbVar3 - 3 < 2) {
            if ((*(byte *)(lVar44 + 0x591f) & 1) != 0) {
              FUN_7100655f60(lVar44,uVar26,param_3,(byte ****)param_4,(long ****)param_5,
                             (ulong)param_6,param_7,param_8);
              *pbVar3 = 3;
              *(undefined1 *)(lVar44 + 0x5934) = 1;
            }
          }
          else if ((*(int *)*DAT_71052c33d8 < 1) || (*pbVar3 == 6)) {
            FUN_7100655f60(lVar44,uVar26,param_3,(byte ****)param_4,(long ****)param_5,
                           (ulong)param_6,param_7,param_8);
          }
          else {
            *pbVar3 = 5;
          }
          iVar19 = *(int *)(*(long *)(lVar44 + 0xf8) + 0x84);
          if ((iVar19 < 0) ||
             (lVar36 = *(long *)(*(long *)(lib::Singleton<app::FighterParamAccessor2>::instance_ +
                                          0x50) + 0x1768),
             (ulong)(*(long *)(*(long *)(lib::Singleton<app::FighterParamAccessor2>::instance_ +
                                        0x50) + 6000) - lVar36 >> 2) <= (ulong)(long)iVar19)) {
            uVar42 = 0;
            uVar18 = 0;
            uVar41 = 0;
            uVar37 = 0xff000000;
          }
          else {
            uVar42 = *(uint *)(lVar36 + (long)iVar19 * 4);
            uVar18 = uVar42 & 0xffffff00;
            uVar41 = uVar42 & 0xffff0000;
            uVar37 = uVar42 & 0xff000000;
          }
          *(undefined1 *)(lVar44 + 0x59f4) = 0;
          *(uint *)(lVar44 + 0x59f8) = uVar18 & 0xff00 | uVar42 & 0xff | uVar41 & 0xff0000 | uVar37;
          FUN_710065cf50(lVar44,'\0');
          uVar21 = *(ulong *)(lVar44 + 0x4150);
          uVar26 = extraout_x1_11;
          if (uVar21 != 0) {
            uVar24 = 0;
            uVar32 = 1;
            do {
              lVar36 = lVar44 + uVar24 * 8;
              plVar23 = *(long **)(lVar36 + 0x4160);
              if (plVar23 != (long *)0x0) {
                auVar52 = (**(code **)(*plVar23 + 0x518))();
                uVar26 = auVar52._8_8_;
                if ((auVar52._0_8_ & 1) != 0) {
                  lVar36 = *(long *)(lVar36 + 0x4160);
                  (**(code **)(**(long **)(lVar36 + 0x438) + 0x280))(*(long **)(lVar36 + 0x438),1);
                  plVar23 = *(long **)(lVar36 + 0xf700);
                  uVar26 = extraout_x1_12;
                  if (plVar23 != (long *)0x0) {
                    param_3 = (long ****)0x0;
                    (**(code **)(*plVar23 + 0xc0))(plVar23,lVar36);
                    uVar26 = extraout_x1_13;
                  }
                }
              }
              bVar17 = uVar32 < uVar21;
              uVar24 = uVar32;
              uVar32 = (ulong)((int)uVar32 + 1);
            } while (bVar17);
          }
        }
        lVar47 = lVar47 + 1;
      } while (lVar47 != 8);
    }
    else {
      lVar47 = 0;
      do {
        if (((lVar47 == 0) && (lVar44 = *(long *)(*plVar2 + 0x20), lVar44 != 0)) &&
           (pbVar3 = (byte *)(lVar44 + 0x5920), *pbVar3 != 6)) {
          (**(code **)(*(long *)(*lib::Singleton<app::StageManager>::instance_ + 0x128) + 0x28))
                    (*lib::Singleton<app::StageManager>::instance_ + 0x128,0);
          auVar8._4_4_ = extraout_var_01;
          auVar8._0_4_ = extraout_s0_01;
          auVar8._8_8_ = extraout_var_04;
          auVar9._4_4_ = extraout_var_01;
          auVar9._0_4_ = extraout_s0_01;
          auVar9._8_8_ = extraout_var_04;
          auVar52 = NEON_ext(auVar8,auVar9,8,1);
          *(undefined4 *)(*(long *)(lVar44 + 0xf8) + 0x9e0) = 0x3f800000;
          lVar36 = *(long *)(lVar44 + 0xf8);
          *(ulong *)(lVar36 + 0x9f8) = (ulong)auVar52._0_4_;
          *(ulong *)(lVar36 + 0x9f0) = CONCAT44(extraout_var_01 + 50.0,extraout_s0_01);
          *(undefined4 *)(*(long *)(lVar44 + 0xf8) + 0x364) = uVar20;
          *(undefined1 *)(lVar44 + 0x591b) = 0xc;
          if (*pbVar3 - 3 < 2) {
            if ((*(byte *)(lVar44 + 0x591f) & 1) != 0) {
              FUN_7100655f60(lVar44,extraout_x1_10,param_3,(byte ****)param_4,(long ****)param_5,
                             (ulong)param_6,param_7,param_8);
              *pbVar3 = 3;
              *(undefined1 *)(lVar44 + 0x5934) = 1;
            }
          }
          else if ((*(int *)*DAT_71052c33d8 < 1) || (*pbVar3 == 6)) {
            FUN_7100655f60(lVar44,extraout_x1_10,param_3,(byte ****)param_4,(long ****)param_5,
                           (ulong)param_6,param_7,param_8);
          }
          else {
            *pbVar3 = 5;
          }
          iVar19 = *(int *)(*(long *)(lVar44 + 0xf8) + 0x84);
          if ((iVar19 < 0) ||
             (lVar36 = *(long *)(*(long *)(lib::Singleton<app::FighterParamAccessor2>::instance_ +
                                          0x50) + 0x1768),
             (ulong)(*(long *)(*(long *)(lib::Singleton<app::FighterParamAccessor2>::instance_ +
                                        0x50) + 6000) - lVar36 >> 2) <= (ulong)(long)iVar19)) {
            uVar42 = 0;
            uVar18 = 0;
            uVar41 = 0;
            uVar37 = 0xff000000;
          }
          else {
            uVar42 = *(uint *)(lVar36 + (long)iVar19 * 4);
            uVar18 = uVar42 & 0xffffff00;
            uVar41 = uVar42 & 0xffff0000;
            uVar37 = uVar42 & 0xff000000;
          }
          *(undefined1 *)(lVar44 + 0x59f4) = 0;
          *(uint *)(lVar44 + 0x59f8) = uVar18 & 0xff00 | uVar42 & 0xff | uVar41 & 0xff0000 | uVar37;
          FUN_710065cf50(lVar44,'\0');
          uVar21 = *(ulong *)(lVar44 + 0x4150);
          if (uVar21 != 0) {
            uVar24 = 0;
            uVar32 = 1;
            do {
              lVar36 = lVar44 + uVar24 * 8;
              plVar23 = *(long **)(lVar36 + 0x4160);
              if ((plVar23 != (long *)0x0) &&
                 (uVar24 = (**(code **)(*plVar23 + 0x518))(), (uVar24 & 1) != 0)) {
                lVar36 = *(long *)(lVar36 + 0x4160);
                (**(code **)(**(long **)(lVar36 + 0x438) + 0x280))(*(long **)(lVar36 + 0x438),1);
                plVar23 = *(long **)(lVar36 + 0xf700);
                if (plVar23 != (long *)0x0) {
                  param_3 = (long ****)0x0;
                  (**(code **)(*plVar23 + 0xc0))(plVar23,lVar36);
                }
              }
              bVar17 = uVar32 < uVar21;
              uVar24 = uVar32;
              uVar32 = (ulong)((int)uVar32 + 1);
            } while (bVar17);
          }
        }
        lVar47 = lVar47 + 1;
      } while (lVar47 != 8);
    }
    *(undefined1 *)((long)plVar48 + 0x16d) = 0;
  }
  if (((*(char *)((long)plVar48 + 0x152) != '\0') && (*(int *)((long)plVar48 + 0x15c) != 0)) &&
     (iVar19 = *(int *)((long)plVar48 + 0x15c) + -1, *(int *)((long)plVar48 + 0x15c) = iVar19,
     iVar19 == 0)) {
    *(undefined4 *)(plVar48 + 0x2b) = 0x3f800000;
  }
  return;
}

