// addr:      7101d5d640
// offset:    0x1d5d640
// name:      FUN_7101d5d640
// mangled:   
// signature: undefined __cdecl FUN_7101d5d640(long param_1, undefined8 param_2, undefined * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


/* WARNING: Type propagation algorithm not settling */

void FUN_7101d5d640(long param_1,undefined8 param_2,undefined **param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  uint uVar1;
  undefined4 *puVar2;
  uint *puVar3;
  float *pfVar4;
  int iVar5;
  undefined1 uVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  int iVar11;
  bool bVar12;
  bool bVar13;
  bool bVar14;
  bool bVar15;
  int iVar16;
  uint uVar17;
  int iVar18;
  ushort *puVar19;
  undefined *puVar20;
  undefined2 *puVar21;
  undefined8 uVar22;
  byte *pbVar23;
  char *pcVar24;
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
  undefined8 extraout_x1_33;
  undefined8 extraout_x1_34;
  undefined8 extraout_x1_35;
  undefined8 extraout_x1_36;
  undefined8 extraout_x1_37;
  undefined8 extraout_x1_38;
  undefined8 extraout_x1_39;
  undefined8 extraout_x1_40;
  undefined1 *puVar25;
  char cVar26;
  uint uVar27;
  long lVar28;
  int *piVar29;
  code *pcVar30;
  int *piVar31;
  int *piVar32;
  undefined2 *puVar33;
  byte bVar34;
  ushort uVar35;
  char *pcVar36;
  undefined8 *puVar37;
  int iVar38;
  uint uVar39;
  ushort *puVar40;
  ulong uVar41;
  uint uVar42;
  long lVar43;
  undefined8 *puVar44;
  long lVar45;
  ulong uVar46;
  undefined **ppuVar47;
  short *psVar48;
  long *plVar49;
  long lVar50;
  long lVar51;
  undefined1 *puVar52;
  uint *puVar53;
  long lVar54;
  float fVar55;
  float fVar56;
  uint local_1f8;
  uint local_1ec;
  char *local_1d8;
  undefined **local_1b0;
  undefined **local_1a8;
  long local_1a0;
  undefined8 local_198;
  ulong local_190;
  undefined8 uStack_188;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined **local_168;
  undefined **local_160;
  long local_158;
  int local_150;
  undefined1 local_148;
  undefined **local_128;
  undefined **local_120;
  long local_118;
  int local_110;
  undefined1 local_108;
  undefined1 *local_e8;
  undefined **local_e0;
  long local_d8;
  int local_d0;
  undefined1 local_c8;
  undefined **local_a8;
  long *local_a0;
  
  lVar28 = *(long *)(DAT_710532f730 + 8);
  lVar54 = *(long *)(param_1 + 0x80);
  lVar51 = 0;
  do {
    lVar45 = lVar54 + lVar51 * 0x100;
    if (*(int *)(lVar45 + 0x118) == 3) {
      if (0 < *(int *)(lVar45 + 0x134)) {
        FUN_7103776640(&local_1b0,lVar45 + 0x120,(byte ****)"set_parts_message",param_3,param_4,
                       param_5,param_6,param_7,param_8);
        ppuVar47 = local_1a8;
        FUN_7103778300(0x3f800000,(long)local_1a8,0x710428ff7d);
        *(undefined4 *)(lVar45 + 0x134) = 0;
LAB_7101d5db18:
        local_1b0 = &PTR_FUN_710523d988;
        local_1a8 = (undefined **)0x0;
        if (ppuVar47 != (undefined **)0x0) {
          puVar20 = ppuVar47[3];
          ppuVar47[2] = (undefined *)&PTR_FUN_710523d9a8;
          ppuVar47[3] = (undefined *)0x0;
          if (puVar20 != (undefined *)0x0) {
            FUN_710392eb40((ulong)puVar20);
          }
          FUN_710392eb40((ulong)ppuVar47);
        }
      }
    }
    else {
      uVar17 = *(uint *)(lVar45 + 0x130);
      if (-1 < (int)uVar17) {
        lVar50 = *(long *)(lVar28 + 0x308);
        lVar43 = *(long *)(lVar50 + 8);
        pcVar24 = *(char **)(lVar43 + 0x20);
        pbVar23 = &DAT_7104742dbb;
        if ((*pcVar24 == '\f') && (iVar18 = *(int *)(pcVar24 + 1) + -1, 0 < *(int *)(pcVar24 + 1)))
        {
          iVar16 = 0;
          uVar46 = *(ulong *)(lVar43 + 0x48) & 0xffffffffff;
          do {
            iVar38 = iVar18 + iVar16;
            if (iVar38 < 0) {
              iVar38 = iVar38 + 1;
            }
            iVar38 = iVar38 >> 1;
            puVar53 = (uint *)(*(long *)(*(long *)(lVar43 + 0x18) + 0x28) +
                               (long)*(int *)(pcVar24 + 5) + (long)iVar38 * 8);
            uVar41 = *(ulong *)(*(long *)(*(long *)(lVar43 + 0x18) + 0x20) + (ulong)*puVar53 * 8);
            if (uVar41 == uVar46) {
              uVar42 = puVar53[1];
              if (-1 < (int)uVar42) {
                pbVar23 = (byte *)(pcVar24 + (int)uVar42);
              }
              break;
            }
            iVar5 = iVar38 + -1;
            if (uVar41 <= uVar46) {
              iVar16 = iVar38 + 1;
              iVar5 = iVar18;
            }
            iVar18 = iVar5;
          } while (iVar16 <= iVar18);
        }
        if ((*pbVar23 - 0xb < 2) && (iVar18 = *(int *)(pbVar23 + 1), 0 < iVar18)) {
          uVar42 = 0;
          do {
            param_3 = (undefined **)(ulong)uVar42;
            FUN_710326a3e0((long *)&local_128,lVar43,uVar42);
            pbVar23 = &DAT_7104742dbb;
            if ((*(char *)local_120 == '\f') &&
               (iVar16 = *(int *)((long)local_120 + 1) + -1, 0 < *(int *)((long)local_120 + 1))) {
              iVar38 = 0;
              do {
                iVar5 = iVar16 + iVar38;
                if (iVar5 < 0) {
                  iVar5 = iVar5 + 1;
                }
                iVar5 = iVar5 >> 1;
                if (*(ulong *)(local_128[4] +
                              (ulong)*(uint *)(local_128[5] +
                                              (long)iVar5 * 8 + (long)*(int *)((long)local_120 + 5))
                              * 8) == 0xa8be95c66) {
                  uVar39 = *(uint *)((long)(local_128[5] +
                                           (long)iVar5 * 8 + (long)*(int *)((long)local_120 + 5)) +
                                    4);
                  if (-1 < (int)uVar39) {
                    pbVar23 = (byte *)((long)local_120 + (long)(int)uVar39);
                  }
                  break;
                }
                iVar11 = iVar5 + -1;
                if (*(ulong *)(local_128[4] +
                              (ulong)*(uint *)(local_128[5] +
                                              (long)iVar5 * 8 + (long)*(int *)((long)local_120 + 5))
                              * 8) < 0xa8be95c67) {
                  iVar38 = iVar5 + 1;
                  iVar11 = iVar16;
                }
                iVar16 = iVar11;
              } while (iVar38 <= iVar16);
            }
            switch(*pbVar23) {
            case 1:
            case 3:
              uVar39 = (uint)pbVar23[1];
              break;
            case 2:
              uVar39 = (uint)(char)pbVar23[1];
              break;
            case 4:
              uVar39 = (uint)*(short *)(pbVar23 + 1);
              break;
            case 5:
              uVar39 = (uint)*(ushort *)(pbVar23 + 1);
              break;
            case 6:
            case 7:
              uVar39 = *(uint *)(pbVar23 + 1);
              break;
            default:
              if (uVar17 == 0) goto LAB_7101d5d6bc;
              goto LAB_7101d5d900;
            }
            if (uVar39 == uVar17) {
LAB_7101d5d6bc:
              FUN_71003a4ca0((uint *)&local_1b0,"mel_shortmsg_%d",(ulong)uVar17,param_3,param_4,
                             param_5,param_6,param_7,param_8);
              goto LAB_7101d5d914;
            }
LAB_7101d5d900:
            uVar42 = uVar42 + 1;
            if (iVar18 <= (int)uVar42) break;
            lVar43 = *(long *)(lVar50 + 8);
          } while( true );
        }
        local_1a8 = (undefined **)((ulong)local_1a8 & 0xffffffffffffff00);
        local_1b0 = (undefined **)0x0;
LAB_7101d5d914:
        bVar13 = FUN_71037a4570((long *)*DAT_710593bc60,(byte *)&local_1a8);
        if ((bVar13) &&
           (puVar19 = (ushort *)FUN_71037a4450((long *)*DAT_710593bc60,(byte *)&local_1a8),
           puVar19 != (ushort *)0x0)) {
          uVar35 = *puVar19;
          uVar17 = (uint)(uVar35 != 0);
          if (uVar35 != 0) {
            uVar42 = 0;
            puVar40 = puVar19;
            do {
              if ((uVar35 | 1) == 0xf) {
                if (uVar35 == 0xe) {
                  iVar18 = (puVar40[3] >> 1) + 4;
                }
                else {
                  iVar18 = 3;
                  if (uVar35 != 0xf) {
                    iVar18 = 0;
                  }
                }
              }
              else {
                iVar18 = 1;
                if (uVar35 == 10) {
                  uVar17 = uVar17 + 1;
                }
              }
              uVar42 = iVar18 + uVar42;
              puVar40 = puVar19 + uVar42;
              uVar35 = *puVar40;
            } while (uVar35 != 0);
          }
        }
        else {
          uVar17 = 0;
        }
        FUN_7103776640(&local_128,lVar45 + 0x120,(byte ****)"set_parts_message",param_3,param_4,
                       param_5,param_6,param_7,param_8);
        FUN_7103778300(0x3f800000,(long)local_120,0x7104421055);
        param_3 = (undefined **)(ulong)(uVar17 - 1);
        FUN_7103778430((long)&local_128,"line_%02d",param_3,param_4,param_5,param_6,param_7,param_8)
        ;
        FUN_71024076d0((undefined4 *)&local_e8,0x1839a9d45d);
        local_e0 = &PTR_FUN_7104f73d50;
        if (((local_d8 != 0) && (DAT_7106dd53a8 == '\x01')) && (local_d0 == DAT_7106dd53ac)) {
          piVar32 = (int *)(local_d8 + 0x38);
          do {
            cVar26 = '\x01';
            bVar13 = (bool)ExclusiveMonitorPass(piVar32,0x10);
            if (bVar13) {
              *piVar32 = *piVar32 + -1;
              cVar26 = ExclusiveMonitorsStatus();
            }
          } while (cVar26 != '\0');
        }
        local_d8 = 0;
        local_c8 = 0;
        FUN_7103776910(&local_168,(long)&local_128,(long ****)"set_txt_message",param_3,param_4,
                       param_5,param_6,param_7,param_8);
        FUN_710377a120((long)&local_168,(char *)&local_1a8,param_3,param_4,param_5,param_6,param_7,
                       param_8);
        ppuVar47 = local_160;
        *(undefined4 *)(lVar45 + 0x130) = 0xffffffff;
        local_168 = &PTR_FUN_710523d9a8;
        local_160 = (undefined **)0x0;
        if (ppuVar47 != (undefined **)0x0) {
          FUN_710392eb40((ulong)ppuVar47);
        }
        ppuVar47 = local_120;
        local_128 = &PTR_FUN_710523d988;
        local_120 = (undefined **)0x0;
        if (ppuVar47 != (undefined **)0x0) {
          puVar20 = ppuVar47[3];
          ppuVar47[2] = (undefined *)&PTR_FUN_710523d9a8;
          ppuVar47[3] = (undefined *)0x0;
          if (puVar20 != (undefined *)0x0) {
            FUN_710392eb40((ulong)puVar20);
          }
          FUN_710392eb40((ulong)ppuVar47);
        }
      }
      iVar18 = *(int *)(lVar45 + 0x134) + -1;
      if ((0 < *(int *)(lVar45 + 0x134)) && (*(int *)(lVar45 + 0x134) = iVar18, iVar18 == 0)) {
        FUN_7103776640(&local_1b0,lVar45 + 0x120,(byte ****)"set_parts_message",param_3,param_4,
                       param_5,param_6,param_7,param_8);
        ppuVar47 = local_1a8;
        FUN_7103778300(0x3f800000,(long)local_1a8,0x710428ff7d);
        goto LAB_7101d5db18;
      }
    }
    lVar51 = lVar51 + 1;
  } while (lVar51 != 8);
  lVar28 = *(long *)(param_1 + 0x80);
  lVar51 = 0;
  do {
    lVar54 = lVar28 + lVar51 * 0x100;
    if ((*(int *)(lVar54 + 0x118) != 2) || (*(char *)(lVar54 + 0x18c) == '\0')) goto LAB_7101d5e584;
    iVar18 = *(int *)(lVar28 + 0x928);
    if (((DAT_71053144d8 & 1) == 0) && (iVar16 = __cxa_guard_acquire(&DAT_71053144d8), iVar16 != 0))
    {
      FUN_7101764000();
      param_3 = &PTR_LOOP_7104f17000;
      FUN_71000001c0();
      __cxa_guard_release(&DAT_71053144d8);
      if ((DAT_71053144d8 & 1) != 0) goto LAB_7101d5e2a4;
LAB_7101d5e1f8:
      iVar16 = __cxa_guard_acquire(&DAT_71053144d8);
      if (iVar16 == 0) goto LAB_7101d5e2a4;
      FUN_7101764000();
      param_3 = &PTR_LOOP_7104f17000;
      FUN_71000001c0();
      __cxa_guard_release(&DAT_71053144d8);
      if (DAT_71052cc5f0 != '\0') goto LAB_7101d5e2ac;
LAB_7101d5e2ec:
      lVar43 = DAT_71053398b0;
      lVar45 = lVar54 + 0x138;
      if (iVar18 == 0) {
        cVar26 = *(char *)(DAT_71053398b0 + 8);
        puVar44 = &DAT_7105339830;
        if ((cVar26 == '\0') || (puVar44 = DAT_7105339860, DAT_7105339860 != (undefined8 *)0x0)) {
          if (*(char *)(puVar44[2] + 0xb8) != '\0') {
            FUN_7101d5c2e0(lVar45,0);
            cVar26 = *(char *)(lVar43 + 8);
          }
          puVar44 = &DAT_7105339830;
          if (cVar26 != '\0') goto LAB_7101d5e37c;
LAB_7101d5e3d8:
          if (*(char *)(puVar44[2] + 0xb8) != '\0') {
            FUN_7101d5c2e0(lVar45,1);
            cVar26 = *(char *)(lVar43 + 8);
          }
          puVar44 = &DAT_7105339830;
          if (cVar26 != '\0') goto LAB_7101d5e3f8;
LAB_7101d5e408:
          if (*(char *)(puVar44[2] + 0xb8) != '\0') {
            FUN_7101d5c2e0(lVar45,2);
            cVar26 = *(char *)(lVar43 + 8);
          }
          puVar44 = &DAT_7105339830;
          if (cVar26 != '\0') goto LAB_7101d5e428;
LAB_7101d5e438:
          if (*(char *)(puVar44[2] + 0xb8) != '\0') {
            FUN_7101d5c2e0(lVar45,3);
            cVar26 = *(char *)(lVar43 + 8);
          }
          puVar44 = &DAT_7105339830;
          if (cVar26 != '\0') goto LAB_7101d5e458;
LAB_7101d5e468:
          if (*(char *)(puVar44[2] + 0xb8) != '\0') {
            FUN_7101d5c2e0(lVar45,4);
            cVar26 = *(char *)(lVar43 + 8);
          }
          puVar44 = &DAT_7105339830;
          if (cVar26 != '\0') goto LAB_7101d5e488;
LAB_7101d5e49c:
          if (*(char *)(puVar44[2] + 0xb8) != '\0') {
            FUN_7101d5c2e0(lVar45,5);
            cVar26 = *(char *)(lVar43 + 8);
          }
          puVar44 = &DAT_7105339830;
          if (cVar26 != '\0') goto LAB_7101d5e4bc;
LAB_7101d5e4d0:
          if (*(char *)(puVar44[2] + 0xb8) != '\0') {
            FUN_7101d5c2e0(lVar45,6);
            cVar26 = *(char *)(lVar43 + 8);
          }
          puVar44 = &DAT_7105339830;
          if (cVar26 != '\0') goto LAB_7101d5e4f0;
LAB_7101d5e504:
          if (*(char *)(puVar44[2] + 0xb8) != '\0') {
            FUN_7101d5c2e0(lVar45,7);
            cVar26 = *(char *)(lVar43 + 8);
          }
          puVar44 = &DAT_7105339830;
          if (cVar26 != '\0') goto LAB_7101d5e524;
LAB_7101d5e538:
          if (*(char *)(puVar44[2] + 0xb8) != '\0') {
            FUN_7101d5c2e0(lVar45,8);
            cVar26 = *(char *)(lVar43 + 8);
          }
          puVar44 = &DAT_7105339830;
          if (cVar26 != '\0') goto LAB_7101d5e558;
        }
        else {
LAB_7101d5e37c:
          puVar44 = DAT_7105339868;
          if (DAT_7105339868 != (undefined8 *)0x0) goto LAB_7101d5e3d8;
LAB_7101d5e3f8:
          puVar44 = DAT_7105339870;
          if (DAT_7105339870 != (undefined8 *)0x0) goto LAB_7101d5e408;
LAB_7101d5e428:
          puVar44 = DAT_7105339878;
          if (DAT_7105339878 != (undefined8 *)0x0) goto LAB_7101d5e438;
LAB_7101d5e458:
          puVar44 = DAT_7105339880;
          if (DAT_7105339880 != (undefined8 *)0x0) goto LAB_7101d5e468;
LAB_7101d5e488:
          puVar44 = DAT_7105339888;
          if (DAT_7105339888 != (undefined8 *)0x0) goto LAB_7101d5e49c;
LAB_7101d5e4bc:
          puVar44 = DAT_7105339890;
          if (DAT_7105339890 != (undefined8 *)0x0) goto LAB_7101d5e4d0;
LAB_7101d5e4f0:
          puVar44 = DAT_7105339898;
          if (DAT_7105339898 != (undefined8 *)0x0) goto LAB_7101d5e504;
LAB_7101d5e524:
          puVar44 = DAT_71053398a0;
          if (DAT_71053398a0 != (undefined8 *)0x0) goto LAB_7101d5e538;
LAB_7101d5e558:
          puVar44 = DAT_71053398a8;
          if (DAT_71053398a8 == (undefined8 *)0x0) goto LAB_7101d5e584;
        }
        if (*(char *)(puVar44[2] + 0xb8) == '\0') goto LAB_7101d5e584;
        uVar17 = 9;
      }
      else {
        uVar17 = *(uint *)(lVar54 + 0x140);
        if (uVar17 == 0xffffffff) {
          puVar53 = (uint *)(lVar54 + 0x184);
          if (*(int *)(lVar54 + 0x184) == 0) {
            iVar18 = *(int *)(lVar54 + 0x188);
            puVar2 = (undefined4 *)(lVar54 + 0x188);
            if (iVar18 == 0) {
              *puVar2 = 1;
LAB_7101d5dd08:
              lVar45 = *(long *)(DAT_71052c3600 + 8);
              pcVar36 = *(char **)(lVar45 + 0x10);
              pcVar24 = "";
              if (*pcVar36 == '\f') {
                iVar18 = *(int *)(pcVar36 + 1) + -1;
                if (0 < *(int *)(pcVar36 + 1)) {
                  iVar16 = 0;
                  do {
                    iVar38 = iVar18 + iVar16;
                    if (iVar38 < 0) {
                      iVar38 = iVar38 + 1;
                    }
                    uVar17 = iVar38 >> 1;
                    uVar46 = *(ulong *)(*(long *)(*(long *)(lVar45 + 8) + 0x20) +
                                       (ulong)*(uint *)(*(long *)(*(long *)(lVar45 + 8) + 0x28) +
                                                        (long)*(int *)(pcVar36 + 5) +
                                                       (-(ulong)(uVar17 >> 0x1f) &
                                                        0xfffffff800000000 | (ulong)uVar17 << 3)) *
                                       8);
                    if (uVar46 == 0x12d529ee75) break;
                    iVar38 = uVar17 - 1;
                    if (uVar46 < 0x12d529ee76) {
                      iVar16 = uVar17 + 1;
                      iVar38 = iVar18;
                    }
                    iVar18 = iVar38;
                  } while (iVar16 <= iVar18);
                }
                iVar18 = *(int *)(pcVar36 + 1) + -1;
                if (0 < *(int *)(pcVar36 + 1)) {
                  iVar16 = 0;
                  do {
                    iVar38 = iVar18 + iVar16;
                    if (iVar38 < 0) {
                      iVar38 = iVar38 + 1;
                    }
                    iVar38 = iVar38 >> 1;
                    puVar53 = (uint *)(*(long *)(*(long *)(lVar45 + 8) + 0x28) +
                                       (long)*(int *)(pcVar36 + 5) + (long)iVar38 * 8);
                    uVar46 = *(ulong *)(*(long *)(*(long *)(lVar45 + 8) + 0x20) +
                                       (ulong)*puVar53 * 8);
                    if (uVar46 == 0x110a0cb970) {
                      uVar17 = puVar53[1];
                      if (-1 < (int)uVar17) {
                        pcVar24 = pcVar36 + (int)uVar17;
                        goto LAB_7101d5df8c;
                      }
                      break;
                    }
                    iVar5 = iVar38 + -1;
                    if (uVar46 < 0x110a0cb971) {
                      iVar16 = iVar38 + 1;
                      iVar5 = iVar18;
                    }
                    iVar18 = iVar5;
                  } while (iVar16 <= iVar18);
                }
                pcVar24 = "";
              }
LAB_7101d5df8c:
              fVar55 = 0.0;
              if (*pcVar24 == '\b') {
                fVar55 = *(float *)(pcVar24 + 1);
              }
              fVar56 = *(float *)(lVar54 + 0x178);
              if ((fVar56 < 0.0) || (*(float *)(lVar54 + 0x17c) < fVar56)) goto LAB_7101d5e08c;
              pfVar4 = (float *)(lVar54 + 0x178);
              if (*(char *)(lVar54 + 0x144) != '\0') {
                lVar45 = *(long *)(*(long *)(lVar54 + 0x160) + 8);
                if ((lVar45 != 0) && (lVar45 = *(long *)(lVar45 + 0x18), lVar45 != 0)) {
                  *(byte *)(lVar45 + 0x58) = *(byte *)(lVar45 + 0x58) | 1;
                }
                lVar45 = *(long *)(*(long *)(lVar54 + 0x170) + 8);
                if ((lVar45 != 0) && (lVar45 = *(long *)(lVar45 + 0x18), lVar45 != 0)) {
                  *(byte *)(lVar45 + 0x58) = *(byte *)(lVar45 + 0x58) | 1;
                }
                fVar56 = *pfVar4;
              }
              fVar55 = fVar56 + fVar55;
              *pfVar4 = fVar55;
              if (fVar55 <= 0.0) {
                *pfVar4 = 0.0;
                lVar45 = *(long *)(*(long *)(lVar54 + 0x160) + 8);
joined_r0x007101d5e048:
                if ((lVar45 != 0) && (lVar45 = *(long *)(lVar45 + 0x18), lVar45 != 0)) {
                  *(byte *)(lVar45 + 0x58) = *(byte *)(lVar45 + 0x58) & 0xfe;
                }
              }
              else if (*(float *)(lVar54 + 0x17c) <= fVar55) {
                *pfVar4 = *(float *)(lVar54 + 0x17c);
                lVar45 = *(long *)(*(long *)(lVar54 + 0x170) + 8);
                goto joined_r0x007101d5e048;
              }
              lVar45 = **(long **)(lVar54 + 0x150);
              if (lVar45 != 0) {
                fVar55 = *pfVar4;
                *(byte *)(lVar45 + 0x58) = *(byte *)(lVar45 + 0x58) | 0x10;
                *(float *)(lVar45 + 0x34) = (fVar55 - fVar56) + *(float *)(lVar45 + 0x34);
              }
              goto LAB_7101d5e08c;
            }
            if (iVar18 == 2) {
              fVar55 = *(float *)(lVar54 + 0x178);
              *(undefined4 *)(lVar54 + 0x178) = 0;
              lVar54 = **(long **)(lVar54 + 0x150);
              if (lVar54 != 0) {
                *(byte *)(lVar54 + 0x58) = *(byte *)(lVar54 + 0x58) | 0x10;
                *(float *)(lVar54 + 0x34) = (0.0 - fVar55) + *(float *)(lVar54 + 0x34);
              }
              *puVar2 = 1;
            }
            else if (iVar18 == 1) {
              if (*(float *)(lVar54 + 0x178) == 0.0) {
                pcVar36 = *(char **)(*(long *)(DAT_71052c3600 + 8) + 0x10);
                pcVar24 = "";
                if (*pcVar36 == '\f') {
                  iVar18 = *(int *)(pcVar36 + 1) + -1;
                  if (0 < *(int *)(pcVar36 + 1)) {
                    lVar54 = *(long *)(*(long *)(DAT_71052c3600 + 8) + 8);
                    iVar16 = 0;
                    do {
                      iVar38 = iVar18 + iVar16;
                      if (iVar38 < 0) {
                        iVar38 = iVar38 + 1;
                      }
                      iVar38 = iVar38 >> 1;
                      puVar3 = (uint *)(*(long *)(lVar54 + 0x28) + (long)*(int *)(pcVar36 + 5) +
                                       (long)iVar38 * 8);
                      uVar46 = *(ulong *)(*(long *)(lVar54 + 0x20) + (ulong)*puVar3 * 8);
                      if (uVar46 == 0x15b960a94e) {
                        uVar17 = puVar3[1];
                        if (-1 < (int)uVar17) {
                          pcVar24 = pcVar36 + (int)uVar17;
                          goto LAB_7101d5e0e8;
                        }
                        break;
                      }
                      iVar5 = iVar38 + -1;
                      if (uVar46 < 0x15b960a94f) {
                        iVar16 = iVar38 + 1;
                        iVar5 = iVar18;
                      }
                      iVar18 = iVar5;
                    } while (iVar16 <= iVar18);
                  }
                  pcVar24 = "";
                }
LAB_7101d5e0e8:
                switch(*pcVar24) {
                case '\x01':
                case '\x03':
                  uVar17 = (uint)(byte)pcVar24[1];
                  break;
                case '\x02':
                  uVar17 = (uint)pcVar24[1];
                  break;
                case '\x04':
                  uVar17 = (uint)*(short *)(pcVar24 + 1);
                  break;
                case '\x05':
                  uVar17 = (uint)*(ushort *)(pcVar24 + 1);
                  break;
                case '\x06':
                case '\a':
                  uVar17 = *(uint *)(pcVar24 + 1);
                  break;
                default:
                  uVar17 = 0;
                }
                *puVar53 = uVar17;
                *puVar2 = 0;
              }
              else {
                if (*(float *)(lVar54 + 0x178) != *(float *)(lVar54 + 0x17c)) goto LAB_7101d5dd08;
                pcVar36 = *(char **)(*(long *)(DAT_71052c3600 + 8) + 0x10);
                pcVar24 = "";
                if (*pcVar36 == '\f') {
                  iVar18 = *(int *)(pcVar36 + 1) + -1;
                  if (0 < *(int *)(pcVar36 + 1)) {
                    lVar54 = *(long *)(*(long *)(DAT_71052c3600 + 8) + 8);
                    iVar16 = 0;
                    do {
                      iVar38 = iVar18 + iVar16;
                      if (iVar38 < 0) {
                        iVar38 = iVar38 + 1;
                      }
                      iVar38 = iVar38 >> 1;
                      puVar3 = (uint *)(*(long *)(lVar54 + 0x28) + (long)*(int *)(pcVar36 + 5) +
                                       (long)iVar38 * 8);
                      uVar46 = *(ulong *)(*(long *)(lVar54 + 0x20) + (ulong)*puVar3 * 8);
                      if (uVar46 == 0x186f41c349) {
                        uVar17 = puVar3[1];
                        if (-1 < (int)uVar17) {
                          pcVar24 = pcVar36 + (int)uVar17;
                          goto LAB_7101d5e15c;
                        }
                        break;
                      }
                      iVar5 = iVar38 + -1;
                      if (uVar46 < 0x186f41c34a) {
                        iVar16 = iVar38 + 1;
                        iVar5 = iVar18;
                      }
                      iVar18 = iVar5;
                    } while (iVar16 <= iVar18);
                  }
                  pcVar24 = "";
                }
LAB_7101d5e15c:
                switch(*pcVar24) {
                case '\x01':
                case '\x03':
                  uVar17 = (uint)(byte)pcVar24[1];
                  break;
                case '\x02':
                  uVar17 = (uint)pcVar24[1];
                  break;
                case '\x04':
                  uVar17 = (uint)*(short *)(pcVar24 + 1);
                  break;
                case '\x05':
                  uVar17 = (uint)*(ushort *)(pcVar24 + 1);
                  break;
                case '\x06':
                case '\a':
                  uVar17 = *(uint *)(pcVar24 + 1);
                  break;
                default:
                  uVar17 = 0;
                }
                *puVar53 = uVar17;
                *puVar2 = 2;
              }
            }
          }
          else {
            *puVar53 = *(int *)(lVar54 + 0x184) - 1;
          }
          goto LAB_7101d5e584;
        }
      }
      FUN_7101d5c2e0(lVar45,uVar17);
    }
    else {
      if ((DAT_71053144d8 & 1) == 0) goto LAB_7101d5e1f8;
LAB_7101d5e2a4:
      if (DAT_71052cc5f0 == '\0') goto LAB_7101d5e2ec;
LAB_7101d5e2ac:
      if ((DAT_71052c51b0 == 0x11) || (DAT_71052c51b0 == 0x19)) goto LAB_7101d5e2ec;
      if (DAT_71052c51b0 == 0x18) {
        if (((DAT_71053144d8 & 1) == 0) &&
           (iVar16 = __cxa_guard_acquire(&DAT_71053144d8), iVar16 != 0)) {
          FUN_7101764000();
          param_3 = &PTR_LOOP_7104f17000;
          FUN_71000001c0();
          __cxa_guard_release(&DAT_71053144d8);
        }
        if (DAT_71053050f0 == 0x7010300) goto LAB_7101d5e2ec;
      }
      piVar32 = (int *)(lVar54 + 0x184);
      if (*(int *)(lVar54 + 0x184) != 0) {
        *piVar32 = *(int *)(lVar54 + 0x184) + -1;
        goto LAB_7101d5e584;
      }
      puVar2 = (undefined4 *)(lVar54 + 0x188);
      if (*(int *)(lVar54 + 0x188) == 0) {
        *puVar2 = 1;
        fVar56 = *(float *)(lVar54 + 0x17c);
        fVar55 = *(float *)(lVar54 + 0x178);
LAB_7101d5dc50:
        pfVar4 = (float *)(lVar54 + 0x178);
        uVar46 = FUN_710149e570(*(long *)(DAT_71052c3600 + 8));
        if ((0.0 <= fVar55) && (fVar55 <= fVar56)) {
          if (*(char *)(lVar54 + 0x144) != '\0') {
            lVar45 = *(long *)(*(long *)(lVar54 + 0x160) + 8);
            if ((lVar45 != 0) && (lVar45 = *(long *)(lVar45 + 0x18), lVar45 != 0)) {
              *(byte *)(lVar45 + 0x58) = *(byte *)(lVar45 + 0x58) | 1;
            }
            lVar45 = *(long *)(*(long *)(lVar54 + 0x170) + 8);
            if ((lVar45 != 0) && (lVar45 = *(long *)(lVar45 + 0x18), lVar45 != 0)) {
              *(byte *)(lVar45 + 0x58) = *(byte *)(lVar45 + 0x58) | 1;
            }
            fVar55 = *pfVar4;
          }
          fVar56 = fVar55 + fVar56 / ((float)(uVar46 & 0xffffffff) * 0.8);
          *pfVar4 = fVar56;
          if (fVar56 <= 0.0) {
            *pfVar4 = 0.0;
            lVar45 = *(long *)(*(long *)(lVar54 + 0x160) + 8);
joined_r0x007101d5df2c:
            if ((lVar45 != 0) && (lVar45 = *(long *)(lVar45 + 0x18), lVar45 != 0)) {
              *(byte *)(lVar45 + 0x58) = *(byte *)(lVar45 + 0x58) & 0xfe;
            }
          }
          else if (*(float *)(lVar54 + 0x17c) <= fVar56) {
            *pfVar4 = *(float *)(lVar54 + 0x17c);
            lVar45 = *(long *)(*(long *)(lVar54 + 0x170) + 8);
            goto joined_r0x007101d5df2c;
          }
          lVar45 = **(long **)(lVar54 + 0x150);
          if (lVar45 != 0) {
            fVar56 = *pfVar4;
            *(byte *)(lVar45 + 0x58) = *(byte *)(lVar45 + 0x58) | 0x10;
            *(float *)(lVar45 + 0x34) = (fVar56 - fVar55) + *(float *)(lVar45 + 0x34);
          }
        }
      }
      else if (*(int *)(lVar54 + 0x188) == 1) {
        fVar55 = *(float *)(lVar54 + 0x178);
        if (fVar55 == 0.0) {
          uVar46 = FUN_710149e570(*(long *)(DAT_71052c3600 + 8));
          *piVar32 = (int)((float)(uVar46 & 0xffffffff) * 0.1);
          *puVar2 = 0;
        }
        else {
          fVar56 = *(float *)(lVar54 + 0x17c);
          if (fVar55 != fVar56) goto LAB_7101d5dc50;
          uVar46 = FUN_710149e570(*(long *)(DAT_71052c3600 + 8));
          *piVar32 = (int)((float)(uVar46 & 0xffffffff) * 0.1);
          *puVar2 = 2;
        }
      }
LAB_7101d5e08c:
      lVar45 = *(long *)(*(long *)(lVar54 + 0x160) + 8);
      if ((lVar45 != 0) && (lVar45 = *(long *)(lVar45 + 0x18), lVar45 != 0)) {
        *(byte *)(lVar45 + 0x58) = *(byte *)(lVar45 + 0x58) & 0xfe;
      }
      lVar54 = *(long *)(*(long *)(lVar54 + 0x170) + 8);
      if ((lVar54 != 0) && (lVar54 = *(long *)(lVar54 + 0x18), lVar54 != 0)) {
        *(byte *)(lVar54 + 0x58) = *(byte *)(lVar54 + 0x58) & 0xfe;
      }
    }
LAB_7101d5e584:
    lVar51 = lVar51 + 1;
  } while (lVar51 != 8);
  lVar51 = *(long *)(param_1 + 0x80);
  puVar21 = FUN_7101465a30();
  iVar18 = *(int *)(lVar51 + 0x114);
  uVar22 = extraout_x1;
  if (((iVar18 != -1) && (puVar21[(long)iVar18 * 0x1c30 + 0x1c2a] != -1)) &&
     (*(char *)((long)puVar21 + (long)iVar18 * 0x3860 + 0x73) == '\x01')) {
    psVar48 = *(short **)(lVar51 + 0x1b0);
    if (*(int *)(lVar51 + 0x118) == 2) {
      if ((char)psVar48[0x30] == '\0') {
        FUN_710339bc80(psVar48);
        uVar22 = extraout_x1_00;
      }
      FUN_710339c1e0((long *)(lVar51 + 0x1b0),uVar22,(long ****)param_3,param_4,param_5,param_6,
                     param_7,param_8);
      uVar22 = extraout_x1_01;
    }
    else if ((((char)psVar48[0x30] != '\0') &&
             (FUN_710373b540((long)(psVar48 + 0x34),0), uVar22 = extraout_x1_02,
             *(char *)((long)psVar48 + 0x61) == '\0')) &&
            ((**(long **)(psVar48 + 0x24) != 0 && ((*(long **)(psVar48 + 0x24))[1] != 0)))) {
      FUN_710377aee0(0x3f800000,(long)(psVar48 + 0x20));
      uVar22 = extraout_x1_33;
    }
  }
  iVar18 = *(int *)(lVar51 + 0x214);
  if (((iVar18 != -1) && (puVar21[(long)iVar18 * 0x1c30 + 0x1c2a] != -1)) &&
     (*(char *)((long)puVar21 + (long)iVar18 * 0x3860 + 0x73) == '\x01')) {
    psVar48 = *(short **)(lVar51 + 0x2b0);
    if (*(int *)(lVar51 + 0x218) == 2) {
      if ((char)psVar48[0x30] == '\0') {
        FUN_710339bc80(psVar48);
        uVar22 = extraout_x1_03;
      }
      FUN_710339c1e0((long *)(lVar51 + 0x2b0),uVar22,(long ****)param_3,param_4,param_5,param_6,
                     param_7,param_8);
      uVar22 = extraout_x1_04;
    }
    else if (((((char)psVar48[0x30] != '\0') &&
              (FUN_710373b540((long)(psVar48 + 0x34),0), uVar22 = extraout_x1_05,
              *(char *)((long)psVar48 + 0x61) == '\0')) && (**(long **)(psVar48 + 0x24) != 0)) &&
            ((*(long **)(psVar48 + 0x24))[1] != 0)) {
      FUN_710377aee0(0x3f800000,(long)(psVar48 + 0x20));
      uVar22 = extraout_x1_34;
    }
  }
  iVar18 = *(int *)(lVar51 + 0x314);
  if (((iVar18 != -1) && (puVar21[(long)iVar18 * 0x1c30 + 0x1c2a] != -1)) &&
     (*(char *)((long)puVar21 + (long)iVar18 * 0x3860 + 0x73) == '\x01')) {
    psVar48 = *(short **)(lVar51 + 0x3b0);
    if (*(int *)(lVar51 + 0x318) == 2) {
      if ((char)psVar48[0x30] == '\0') {
        FUN_710339bc80(psVar48);
        uVar22 = extraout_x1_06;
      }
      FUN_710339c1e0((long *)(lVar51 + 0x3b0),uVar22,(long ****)param_3,param_4,param_5,param_6,
                     param_7,param_8);
      uVar22 = extraout_x1_07;
    }
    else if ((((char)psVar48[0x30] != '\0') &&
             (FUN_710373b540((long)(psVar48 + 0x34),0), uVar22 = extraout_x1_08,
             *(char *)((long)psVar48 + 0x61) == '\0')) &&
            ((**(long **)(psVar48 + 0x24) != 0 && ((*(long **)(psVar48 + 0x24))[1] != 0)))) {
      FUN_710377aee0(0x3f800000,(long)(psVar48 + 0x20));
      uVar22 = extraout_x1_35;
    }
  }
  iVar18 = *(int *)(lVar51 + 0x414);
  if (((iVar18 != -1) && (puVar21[(long)iVar18 * 0x1c30 + 0x1c2a] != -1)) &&
     (*(char *)((long)puVar21 + (long)iVar18 * 0x3860 + 0x73) == '\x01')) {
    psVar48 = *(short **)(lVar51 + 0x4b0);
    if (*(int *)(lVar51 + 0x418) == 2) {
      if ((char)psVar48[0x30] == '\0') {
        FUN_710339bc80(psVar48);
        uVar22 = extraout_x1_09;
      }
      FUN_710339c1e0((long *)(lVar51 + 0x4b0),uVar22,(long ****)param_3,param_4,param_5,param_6,
                     param_7,param_8);
      uVar22 = extraout_x1_10;
    }
    else if ((((char)psVar48[0x30] != '\0') &&
             (FUN_710373b540((long)(psVar48 + 0x34),0), uVar22 = extraout_x1_11,
             *(char *)((long)psVar48 + 0x61) == '\0')) &&
            ((**(long **)(psVar48 + 0x24) != 0 && ((*(long **)(psVar48 + 0x24))[1] != 0)))) {
      FUN_710377aee0(0x3f800000,(long)(psVar48 + 0x20));
      uVar22 = extraout_x1_36;
    }
  }
  iVar18 = *(int *)(lVar51 + 0x514);
  if (((iVar18 != -1) && (puVar21[(long)iVar18 * 0x1c30 + 0x1c2a] != -1)) &&
     (*(char *)((long)puVar21 + (long)iVar18 * 0x3860 + 0x73) == '\x01')) {
    psVar48 = *(short **)(lVar51 + 0x5b0);
    if (*(int *)(lVar51 + 0x518) == 2) {
      if ((char)psVar48[0x30] == '\0') {
        FUN_710339bc80(psVar48);
        uVar22 = extraout_x1_12;
      }
      FUN_710339c1e0((long *)(lVar51 + 0x5b0),uVar22,(long ****)param_3,param_4,param_5,param_6,
                     param_7,param_8);
      uVar22 = extraout_x1_13;
    }
    else if (((((char)psVar48[0x30] != '\0') &&
              (FUN_710373b540((long)(psVar48 + 0x34),0), uVar22 = extraout_x1_14,
              *(char *)((long)psVar48 + 0x61) == '\0')) && (**(long **)(psVar48 + 0x24) != 0)) &&
            ((*(long **)(psVar48 + 0x24))[1] != 0)) {
      FUN_710377aee0(0x3f800000,(long)(psVar48 + 0x20));
      uVar22 = extraout_x1_37;
    }
  }
  iVar18 = *(int *)(lVar51 + 0x614);
  if (((iVar18 != -1) && (puVar21[(long)iVar18 * 0x1c30 + 0x1c2a] != -1)) &&
     (*(char *)((long)puVar21 + (long)iVar18 * 0x3860 + 0x73) == '\x01')) {
    psVar48 = *(short **)(lVar51 + 0x6b0);
    if (*(int *)(lVar51 + 0x618) == 2) {
      if ((char)psVar48[0x30] == '\0') {
        FUN_710339bc80(psVar48);
        uVar22 = extraout_x1_15;
      }
      FUN_710339c1e0((long *)(lVar51 + 0x6b0),uVar22,(long ****)param_3,param_4,param_5,param_6,
                     param_7,param_8);
      uVar22 = extraout_x1_16;
    }
    else if ((((char)psVar48[0x30] != '\0') &&
             (FUN_710373b540((long)(psVar48 + 0x34),0), uVar22 = extraout_x1_17,
             *(char *)((long)psVar48 + 0x61) == '\0')) &&
            ((**(long **)(psVar48 + 0x24) != 0 && ((*(long **)(psVar48 + 0x24))[1] != 0)))) {
      FUN_710377aee0(0x3f800000,(long)(psVar48 + 0x20));
      uVar22 = extraout_x1_38;
    }
  }
  iVar18 = *(int *)(lVar51 + 0x714);
  if (((iVar18 != -1) && (puVar21[(long)iVar18 * 0x1c30 + 0x1c2a] != -1)) &&
     (*(char *)((long)puVar21 + (long)iVar18 * 0x3860 + 0x73) == '\x01')) {
    psVar48 = *(short **)(lVar51 + 0x7b0);
    if (*(int *)(lVar51 + 0x718) == 2) {
      if ((char)psVar48[0x30] == '\0') {
        FUN_710339bc80(psVar48);
        uVar22 = extraout_x1_18;
      }
      FUN_710339c1e0((long *)(lVar51 + 0x7b0),uVar22,(long ****)param_3,param_4,param_5,param_6,
                     param_7,param_8);
      uVar22 = extraout_x1_19;
    }
    else if ((((char)psVar48[0x30] != '\0') &&
             (FUN_710373b540((long)(psVar48 + 0x34),0), uVar22 = extraout_x1_20,
             *(char *)((long)psVar48 + 0x61) == '\0')) &&
            ((**(long **)(psVar48 + 0x24) != 0 && ((*(long **)(psVar48 + 0x24))[1] != 0)))) {
      FUN_710377aee0(0x3f800000,(long)(psVar48 + 0x20));
      uVar22 = extraout_x1_39;
    }
  }
  iVar18 = *(int *)(lVar51 + 0x814);
  if (((iVar18 != -1) && (puVar21[(long)iVar18 * 0x1c30 + 0x1c2a] != -1)) &&
     (*(char *)((long)puVar21 + (long)iVar18 * 0x3860 + 0x73) == '\x01')) {
    psVar48 = *(short **)(lVar51 + 0x8b0);
    if (*(int *)(lVar51 + 0x818) == 2) {
      if ((char)psVar48[0x30] == '\0') {
        FUN_710339bc80(psVar48);
        uVar22 = extraout_x1_21;
      }
      FUN_710339c1e0((long *)(lVar51 + 0x8b0),uVar22,(long ****)param_3,param_4,param_5,param_6,
                     param_7,param_8);
    }
    else if (((((char)psVar48[0x30] != '\0') &&
              (FUN_710373b540((long)(psVar48 + 0x34),0), *(char *)((long)psVar48 + 0x61) == '\0'))
             && (**(long **)(psVar48 + 0x24) != 0)) && ((*(long **)(psVar48 + 0x24))[1] != 0)) {
      FUN_710377aee0(0x3f800000,(long)(psVar48 + 0x20));
    }
  }
  lVar51 = *(long *)(param_1 + 0x80);
  if (((DAT_71053144d8 & 1) == 0) && (iVar18 = __cxa_guard_acquire(&DAT_71053144d8), iVar18 != 0)) {
    FUN_7101764000();
    param_3 = &PTR_LOOP_7104f17000;
    FUN_71000001c0();
    __cxa_guard_release(&DAT_71053144d8);
  }
  lVar28 = 0;
  bVar13 = false;
  bVar12 = false;
  do {
    lVar54 = lVar51 + lVar28 * 0x100;
    iVar18 = *(int *)(lVar54 + 0x114);
    if ((iVar18 != -1) && (*(char *)((long)&DAT_71052c58e8 + (long)iVar18 * 0x260 + 2) != '\0')) {
      piVar32 = *(int **)*DAT_710532f8f0;
      piVar31 = (int *)((long *)*DAT_710532f8f0)[1];
      if (piVar32 != piVar31) {
LAB_7101d5ea0c:
        if (*piVar32 != iVar18) goto code_r0x007101d5ea18;
        if (piVar32[0xc] == piVar32[0xd]) goto LAB_7101d5ed54;
        if ((*(int *)(lVar54 + 0x118) == 2) && (*(int *)(lVar54 + 0x1b8) == 0)) {
          *(undefined4 *)(lVar54 + 0x1b8) = 1;
        }
        else if (*(int *)(lVar54 + 0x1b8) != 1) goto LAB_7101d5ed54;
        FUN_7103776640(&local_128,lVar54 + 0x120,(byte ****)"parts_fp_lv",param_3,param_4,param_5,
                       param_6,param_7,param_8);
        uVar17 = *(uint *)(lVar54 + 0x1bc);
        puVar53 = (uint *)(lVar54 + 0x1bc);
        puVar3 = (uint *)(lVar54 + 0x1c0);
        if (uVar17 == 0) {
          FUN_7103776910(&local_168,(long)&local_128,(long ****)"set_txt_fp_level",param_3,param_4,
                         param_5,param_6,param_7,param_8);
          param_4 = (byte ****)(ulong)(*puVar3 + 1);
          param_3 = (undefined **)0x1;
          *puVar3 = *puVar3 + 1;
          FUN_710377a280((long)&local_168,(byte *)"mel_result_item_unit_35_00",1);
          FUN_7103778300(0x3f800000,(long)local_120,0x710432a391);
          if (!bVar13) {
            FUN_71024076d0((undefined4 *)&local_1b0,0x149f81f5e8);
            local_1a8 = &PTR_FUN_7104f73d50;
            if (((local_1a0 != 0) && (DAT_7106dd53a8 == '\x01')) &&
               ((int)local_198 == DAT_7106dd53ac)) {
              piVar32 = (int *)(local_1a0 + 0x38);
              do {
                cVar26 = '\x01';
                bVar13 = (bool)ExclusiveMonitorPass(piVar32,0x10);
                if (bVar13) {
                  *piVar32 = *piVar32 + -1;
                  cVar26 = ExclusiveMonitorsStatus();
                }
              } while (cVar26 != '\0');
            }
            local_1a0 = 0;
            local_190 = local_190 & 0xffffffffffffff00;
          }
          ppuVar47 = local_160;
          local_168 = &PTR_FUN_710523d9a8;
          local_160 = (undefined **)0x0;
          if (ppuVar47 != (undefined **)0x0) {
            FUN_710392eb40((ulong)ppuVar47);
          }
          uVar17 = *puVar53;
          bVar13 = true;
        }
        *puVar53 = uVar17 + 1;
        if (4 < uVar17 + 1) {
          piVar32 = *(int **)*DAT_710532f8f0;
          piVar31 = (int *)((long *)*DAT_710532f8f0)[1];
          if (piVar32 == piVar31) {
LAB_7101d5eba8:
            uVar17 = 1;
          }
          else {
            while (piVar29 = piVar32 + 0x2f, *piVar32 != *(int *)(lVar54 + 0x114)) {
              piVar32 = piVar29;
              if (piVar31 == piVar29) goto LAB_7101d5eba8;
            }
            uVar17 = piVar32[0xd];
          }
          if (uVar17 == *puVar3) {
            *(undefined4 *)(lVar54 + 0x1b8) = 3;
            FUN_7103776640(&local_168,lVar54 + 0x120,(byte ****)"set_parts_fp_levelup",param_3,
                           param_4,param_5,param_6,param_7,param_8);
            ppuVar47 = local_160;
            FUN_7103778300(0x3f800000,(long)local_160,0x710432a39d);
            FUN_7103778300(0x3f800000,(long)ppuVar47,0x7104421055);
            FUN_7103776910(&local_a8,(long)&local_168,(long ****)"txt_lvup",param_3,param_4,param_5,
                           param_6,param_7,param_8);
            FUN_710377a120((long)&local_a8,"mnu_lvup",param_3,param_4,param_5,param_6,param_7,
                           param_8);
            if (!bVar12) {
              FUN_71024076d0((undefined4 *)&local_e8,0x157d5d3350);
              local_e0 = &PTR_FUN_7104f73d50;
              if (((local_d8 != 0) && (DAT_7106dd53a8 == '\x01')) && (local_d0 == DAT_7106dd53ac)) {
                piVar32 = (int *)(local_d8 + 0x38);
                do {
                  cVar26 = '\x01';
                  bVar12 = (bool)ExclusiveMonitorPass(piVar32,0x10);
                  if (bVar12) {
                    *piVar32 = *piVar32 + -1;
                    cVar26 = ExclusiveMonitorsStatus();
                  }
                } while (cVar26 != '\0');
              }
              local_d8 = 0;
              local_c8 = 0;
            }
            plVar49 = local_a0;
            local_a8 = &PTR_FUN_710523d9a8;
            local_a0 = (long *)0x0;
            if (plVar49 != (long *)0x0) {
              FUN_710392eb40((ulong)plVar49);
            }
            ppuVar47 = local_160;
            local_168 = &PTR_FUN_710523d988;
            local_160 = (undefined **)0x0;
            if (ppuVar47 != (undefined **)0x0) {
              puVar20 = ppuVar47[3];
              ppuVar47[2] = (undefined *)&PTR_FUN_710523d9a8;
              ppuVar47[3] = (undefined *)0x0;
              if (puVar20 != (undefined *)0x0) {
                FUN_710392eb40((ulong)puVar20);
              }
              FUN_710392eb40((ulong)ppuVar47);
            }
            bVar12 = true;
          }
          *puVar53 = 0;
        }
        ppuVar47 = local_120;
        local_128 = &PTR_FUN_710523d988;
        local_120 = (undefined **)0x0;
        if (ppuVar47 != (undefined **)0x0) {
          puVar20 = ppuVar47[3];
          ppuVar47[2] = (undefined *)&PTR_FUN_710523d9a8;
          ppuVar47[3] = (undefined *)0x0;
          if (puVar20 != (undefined *)0x0) {
            FUN_710392eb40((ulong)puVar20);
          }
          FUN_710392eb40((ulong)ppuVar47);
        }
      }
    }
LAB_7101d5ed54:
    lVar28 = lVar28 + 1;
  } while (lVar28 != 8);
  lVar28 = *(long *)(param_1 + 0x80);
  lVar51 = 0;
  do {
    lVar54 = lVar28 + lVar51 * 0x100;
    if ((*(int *)(lVar54 + 0x208) != 0) && (iVar18 = *(int *)(lVar54 + 0x1c4), iVar18 != 3)) {
      iVar16 = *(int *)(lVar54 + 0x118);
      piVar32 = (int *)(lVar54 + 0x208);
      piVar31 = (int *)(lVar54 + 0x1c4);
      if (iVar16 == 1) {
        fVar56 = *(float *)(lVar54 + 0x1d0);
        fVar55 = fVar56 + *(float *)(lVar54 + 0x1c8);
        *(float *)(lVar54 + 0x1d0) = fVar55;
        pcVar36 = *(char **)(*(long *)(DAT_71052c3600 + 8) + 0x10);
        pcVar24 = "";
        if (*pcVar36 == '\f') {
          iVar16 = *(int *)(pcVar36 + 1) + -1;
          if (0 < *(int *)(pcVar36 + 1)) {
            lVar45 = *(long *)(*(long *)(DAT_71052c3600 + 8) + 8);
            iVar38 = 0;
            do {
              iVar5 = iVar16 + iVar38;
              if (iVar5 < 0) {
                iVar5 = iVar5 + 1;
              }
              iVar5 = iVar5 >> 1;
              puVar53 = (uint *)(*(long *)(lVar45 + 0x28) + (long)*(int *)(pcVar36 + 5) +
                                (long)iVar5 * 8);
              uVar46 = *(ulong *)(*(long *)(lVar45 + 0x20) + (ulong)*puVar53 * 8);
              if (uVar46 == 0x177d9d45f8) {
                uVar17 = puVar53[1];
                if (-1 < (int)uVar17) {
                  pcVar24 = pcVar36 + (int)uVar17;
                  goto LAB_7101d5ee5c;
                }
                break;
              }
              iVar11 = iVar5 + -1;
              if (uVar46 < 0x177d9d45f9) {
                iVar38 = iVar5 + 1;
                iVar11 = iVar16;
              }
              iVar16 = iVar11;
            } while (iVar38 <= iVar16);
          }
          pcVar24 = "";
        }
LAB_7101d5ee5c:
        switch(*pcVar24) {
        case '\x01':
        case '\x03':
          uVar17 = (uint)(byte)pcVar24[1];
          break;
        case '\x02':
          uVar17 = (uint)pcVar24[1];
          break;
        case '\x04':
          uVar17 = (uint)*(short *)(pcVar24 + 1);
          break;
        case '\x05':
          uVar17 = (uint)*(ushort *)(pcVar24 + 1);
          break;
        case '\x06':
        case '\a':
          uVar17 = *(uint *)(pcVar24 + 1);
          break;
        default:
          uVar17 = 0;
        }
        uVar39 = (uint)fVar56;
        uVar42 = (uint)fVar55;
        pfVar4 = (float *)(lVar54 + 0x1d0);
        if (iVar18 == 2) {
          uVar27 = *(uint *)(lVar54 + 0x1cc);
          if (*(int *)(lVar54 + 0x110) == 0) {
            if (uVar42 <= uVar27) {
              uVar42 = uVar27;
            }
            uVar1 = *(int *)(lVar54 + 0x20c) + 1;
            *(uint *)(lVar54 + 0x20c) = uVar1;
            if ((uVar42 != uVar39) && (uVar17 <= uVar1)) {
              FUN_71024076d0((undefined4 *)&local_e8,0x1ac882a1b1);
              local_e0 = &PTR_FUN_7104f73d50;
              if ((local_d8 != 0) && ((DAT_7106dd53a8 == '\x01' && (local_d0 == DAT_7106dd53ac)))) {
                piVar29 = (int *)(local_d8 + 0x38);
                do {
                  cVar26 = '\x01';
                  bVar13 = (bool)ExclusiveMonitorPass(piVar29,0x10);
                  if (bVar13) {
                    *piVar29 = *piVar29 + -1;
                    cVar26 = ExclusiveMonitorsStatus();
                  }
                } while (cVar26 != '\0');
              }
              local_d8 = 0;
              local_c8 = 0;
              *(undefined4 *)(lVar54 + 0x20c) = 0;
              fVar55 = *pfVar4;
              uVar27 = *(uint *)(lVar54 + 0x1cc);
            }
          }
          if (fVar55 <= (float)uVar27) {
            *pfVar4 = (float)uVar27;
            *piVar31 = 3;
            if (*piVar32 == 2) {
              lVar45 = *(long *)(lVar54 + 0x200);
              pcVar24 = "scr_downstop";
LAB_7101d5f080:
              FUN_7103778300(0x3f800000,lVar45,(long)pcVar24);
            }
          }
        }
        else if (iVar18 == 1) {
          uVar27 = *(uint *)(lVar54 + 0x1cc);
          if (*(int *)(lVar54 + 0x110) == 0) {
            if (uVar27 <= uVar42) {
              uVar42 = uVar27;
            }
            uVar1 = *(int *)(lVar54 + 0x20c) + 1;
            *(uint *)(lVar54 + 0x20c) = uVar1;
            if ((uVar42 != uVar39) && (uVar17 <= uVar1)) {
              FUN_71024076d0((undefined4 *)&local_e8,0x184e253f4a);
              local_e0 = &PTR_FUN_7104f73d50;
              if ((local_d8 != 0) && ((DAT_7106dd53a8 == '\x01' && (local_d0 == DAT_7106dd53ac)))) {
                piVar29 = (int *)(local_d8 + 0x38);
                do {
                  cVar26 = '\x01';
                  bVar13 = (bool)ExclusiveMonitorPass(piVar29,0x10);
                  if (bVar13) {
                    *piVar29 = *piVar29 + -1;
                    cVar26 = ExclusiveMonitorsStatus();
                  }
                } while (cVar26 != '\0');
              }
              local_d8 = 0;
              local_c8 = 0;
              *(undefined4 *)(lVar54 + 0x20c) = 0;
              fVar55 = *pfVar4;
              uVar27 = *(uint *)(lVar54 + 0x1cc);
            }
          }
          if ((float)uVar27 < fVar55) {
            *pfVar4 = (float)uVar27;
            *piVar31 = 3;
            if (*piVar32 == 2) {
              lVar45 = *(long *)(lVar54 + 0x200);
              pcVar24 = "scr_upstop";
              goto LAB_7101d5f080;
            }
          }
        }
        plVar49 = *(long **)(*(long *)(lVar54 + 0x1e0) + 0x10);
        if (plVar49 != (long *)0x0) {
          local_180 = 0;
          uStack_178 = 0;
          local_190 = 0;
          uStack_188 = 0;
          param_5 = (long ****)0x0;
          param_6 = 0;
          local_1a0 = 0;
          local_198 = 0;
          local_1b0 = (undefined **)0x0;
          local_1a8 = (undefined **)0x0;
          uVar17 = FUN_71037ad940((long)&local_1b0,0x20,0,(int)*pfVar4,0,0);
          param_4 = (byte ****)0x0;
          FUN_71037a2270(plVar49,(ushort *)&local_1b0,uVar17,0);
        }
        if ((**(long **)(lVar54 + 0x1f0) != 0) &&
           (plVar49 = (long *)(*(long **)(lVar54 + 0x1f0))[2], plVar49 != (long *)0x0)) {
          local_180 = 0;
          uStack_178 = 0;
          local_190 = 0;
          uStack_188 = 0;
          param_5 = (long ****)0x0;
          param_6 = 0;
          local_1a0 = 0;
          local_198 = 0;
          local_1b0 = (undefined **)0x0;
          local_1a8 = (undefined **)0x0;
          uVar17 = FUN_71037ad940((long)&local_1b0,0x20,0,(int)*pfVar4,0,0);
          param_4 = (byte ****)0x0;
          FUN_71037a2270(plVar49,(ushort *)&local_1b0,uVar17,0);
        }
        iVar16 = *(int *)(lVar54 + 0x118);
      }
      if (iVar16 == 2) {
        if (*piVar32 == 2) {
          if (*piVar31 == 1) {
            pcVar24 = "scr_upstop";
          }
          else {
            pcVar24 = "scr_downstop";
          }
          FUN_7103778300(0x3f800000,*(long *)(lVar54 + 0x200),(long)pcVar24);
        }
        fVar55 = (float)NEON_ucvtf(*(undefined4 *)(lVar54 + 0x1cc));
        *(float *)(lVar54 + 0x1d0) = fVar55;
        *piVar31 = 3;
        plVar49 = *(long **)(*(long *)(lVar54 + 0x1e0) + 0x10);
        if (plVar49 != (long *)0x0) {
          param_5 = (long ****)0x0;
          param_6 = 0;
          local_180 = 0;
          uStack_178 = 0;
          local_190 = 0;
          uStack_188 = 0;
          local_1a0 = 0;
          local_198 = 0;
          local_1b0 = (undefined **)0x0;
          local_1a8 = (undefined **)0x0;
          uVar17 = FUN_71037ad940((long)&local_1b0,0x20,0,(int)fVar55,0,0);
          param_4 = (byte ****)0x0;
          FUN_71037a2270(plVar49,(ushort *)&local_1b0,uVar17,0);
        }
        if ((**(long **)(lVar54 + 0x1f0) != 0) &&
           (plVar49 = (long *)(*(long **)(lVar54 + 0x1f0))[2], plVar49 != (long *)0x0)) {
          local_180 = 0;
          uStack_178 = 0;
          local_190 = 0;
          uStack_188 = 0;
          local_1a0 = 0;
          local_198 = 0;
          param_5 = (long ****)0x0;
          param_6 = 0;
          local_1b0 = (undefined **)0x0;
          local_1a8 = (undefined **)0x0;
          uVar17 = FUN_71037ad940((long)&local_1b0,0x20,0,(int)*(float *)(lVar54 + 0x1d0),0,0);
          param_4 = (byte ****)0x0;
          FUN_71037a2270(plVar49,(ushort *)&local_1b0,uVar17,0);
        }
      }
    }
    lVar51 = lVar51 + 1;
  } while (lVar51 != 8);
  lVar51 = *(long *)(param_1 + 0x80);
  if (*(int *)(lVar51 + 0x110) != -1) {
    FUN_7103778630(0,*(long *)(lVar51 + 0x128),0x71043be955);
  }
  if (*(int *)(lVar51 + 0x210) != -1) {
    FUN_7103778630(0,*(long *)(lVar51 + 0x228),0x71043be955);
  }
  if (*(int *)(lVar51 + 0x310) != -1) {
    FUN_7103778630(0,*(long *)(lVar51 + 0x328),0x71043be955);
  }
  if (*(int *)(lVar51 + 0x410) != -1) {
    FUN_7103778630(0,*(long *)(lVar51 + 0x428),0x71043be955);
  }
  if (*(int *)(lVar51 + 0x510) != -1) {
    FUN_7103778630(0,*(long *)(lVar51 + 0x528),0x71043be955);
  }
  if (*(int *)(lVar51 + 0x610) != -1) {
    FUN_7103778630(0,*(long *)(lVar51 + 0x628),0x71043be955);
  }
  if (*(int *)(lVar51 + 0x710) != -1) {
    FUN_7103778630(0,*(long *)(lVar51 + 0x728),0x71043be955);
  }
  if (*(int *)(lVar51 + 0x810) != -1) {
    FUN_7103778630(0,*(long *)(lVar51 + 0x828),0x71043be955);
  }
  if ((*(int *)(lVar51 + 0x110) == -1) || (*(int *)(lVar51 + 0x118) != 1)) {
    if ((*(int *)(lVar51 + 0x210) != -1) && (*(int *)(lVar51 + 0x218) == 1)) {
      lVar28 = 1;
      goto LAB_7101d5f454;
    }
    if ((*(int *)(lVar51 + 0x310) != -1) && (*(int *)(lVar51 + 0x318) == 1)) {
      lVar28 = 2;
      goto LAB_7101d5f454;
    }
    if ((*(int *)(lVar51 + 0x410) != -1) && (*(int *)(lVar51 + 0x418) == 1)) {
      lVar28 = 3;
      goto LAB_7101d5f454;
    }
    if ((*(int *)(lVar51 + 0x510) != -1) && (*(int *)(lVar51 + 0x518) == 1)) {
      lVar28 = 4;
      goto LAB_7101d5f454;
    }
    if ((*(int *)(lVar51 + 0x610) != -1) && (*(int *)(lVar51 + 0x618) == 1)) {
      lVar28 = 5;
      goto LAB_7101d5f454;
    }
    if ((*(int *)(lVar51 + 0x710) != -1) && (*(int *)(lVar51 + 0x718) == 1)) {
      lVar28 = 6;
      goto LAB_7101d5f454;
    }
    if ((*(int *)(lVar51 + 0x810) != -1) && (*(int *)(lVar51 + 0x818) == 1)) {
      lVar28 = 7;
      goto LAB_7101d5f454;
    }
  }
  else {
    lVar28 = 0;
LAB_7101d5f454:
    FUN_7103778630(0x3f800000,*(long *)(lVar51 + lVar28 * 0x100 + 0x128),0x71043be955);
  }
  plVar49 = *(long **)(param_1 + 0x80);
  FUN_7101d61460(plVar49);
  if (*plVar49 != 0) {
    pcVar30 = (code *)plVar49[1];
    uVar46 = plVar49[2] & 1;
    if (uVar46 != 0 || pcVar30 != (code *)0x0) {
      if (uVar46 != 0) {
        pcVar30 = *(code **)(pcVar30 + *(long *)(*plVar49 + (plVar49[2] >> 1)));
      }
      (*pcVar30)();
    }
  }
  *(int *)((long)plVar49 + 0xfc) = *(int *)((long)plVar49 + 0xfc) + 1;
  lVar51 = *(long *)(param_1 + 0x80);
  if (((DAT_71053144d8 & 1) == 0) && (iVar18 = __cxa_guard_acquire(&DAT_71053144d8), iVar18 != 0)) {
    FUN_7101764000();
    FUN_71000001c0();
    __cxa_guard_release(&DAT_71053144d8);
  }
  puVar52 = &DAT_1308abad79;
  if (DAT_71052c51b7 == '\0') {
    pbVar23 = &DAT_71052c51b0;
    if (DAT_71052c51b6 != '\0') {
      pbVar23 = &DAT_71052c51b1;
    }
    if ((*pbVar23 - 0xe < 0x18) && ((0x8007f7U >> (ulong)(*pbVar23 - 0xe & 0x1f) & 1) != 0)) {
      lVar28 = *(long *)(DAT_710532f820 + 8);
      uVar22 = FUN_7101eefe30(*(long *)(*(long *)(lVar28 + 0x110) + 0x80));
      if ((*(int *)(lVar28 + 0xf8) == 0 && (((uint)uVar22 ^ 0xffffffff) & 1) == 0) &&
          *(char *)(lVar28 + 0x142) == '\0') {
        puVar21 = FUN_7101465a30();
        FUN_71015435c0((long *)&local_1b0,(long *)*DAT_71052c3910,0x1308abad79);
        ppuVar47 = local_1b0;
        if (local_1b0 != (undefined **)0x0) {
          local_e8 = &DAT_1308abad79;
          uVar46 = (**(code **)(*local_1b0 + 0x18))(local_1b0,&local_e8);
          if ((uVar46 & 1) != 0) {
            lVar28 = 0;
            do {
              uVar17 = *(uint *)(lVar51 + lVar28 + 0x114);
              lVar54 = (long)(int)uVar17;
              if (((uVar17 != 0xffffffff) &&
                  (2 < *(int *)(lVar51 + lVar28 + 0x118) - 2U && uVar17 < 8)) &&
                 (uVar42 = *(uint *)(DAT_71052c50f0 + lVar54 * 4 + 0x298), uVar42 < 10)) {
                if (*(char *)(DAT_71053398b0 + 8) == '\0') {
                  puVar44 = &DAT_7105339830;
                }
                else {
                  puVar44 = (&DAT_7105339860)[(int)uVar42];
                  if (puVar44 == (undefined8 *)0x0) goto LAB_7101d60510;
                }
                lVar45 = puVar44[2];
                if (*(int *)(lVar45 + 0x9c) == 4) {
                  uVar42 = *(uint *)(lVar45 + 8);
                  if (((uVar42 ^ 0xffffffff) & 0x20080) == 0) goto LAB_7101d604d8;
                  if (((uVar42 ^ 0xffffffff) & 0x20020) == 0) goto LAB_7101d604e4;
                  if (((uVar42 ^ 0xffffffff) & 0x20040) == 0) goto LAB_7101d604f0;
                  if (((uVar42 ^ 0xffffffff) & 0x20010) == 0) goto LAB_7101d604cc;
                }
                else {
                  if (*(int *)(lVar45 + 0x9c) == 3) {
                    uVar42 = *(uint *)(lVar45 + 8);
                    if (((uVar42 ^ 0xffffffff) & 0x10002) == 0) goto LAB_7101d604d8;
                    if (((uVar42 ^ 0xffffffff) & 0x10008) == 0) {
LAB_7101d604e4:
                      puVar33 = puVar21 + lVar54 * 0x1c30;
                      lVar54 = 0x38b1;
                    }
                    else if (((uVar42 ^ 0xffffffff) & 0x10001) == 0) {
LAB_7101d604f0:
                      puVar33 = puVar21 + lVar54 * 0x1c30;
                      lVar54 = 0x38b2;
                    }
                    else {
                      if (((uVar42 ^ 0xffffffff) & 0x10004) != 0) goto LAB_7101d60510;
LAB_7101d604cc:
                      puVar33 = puVar21 + lVar54 * 0x1c30;
                      lVar54 = 0x38b3;
                    }
                    uVar6 = *(undefined1 *)((long)puVar33 + lVar54);
                  }
                  else {
                    uVar42 = *(uint *)(lVar45 + 0x88);
                    if ((uVar42 & 1) == 0) {
                      if ((uVar42 >> 2 & 1) != 0) goto LAB_7101d604e4;
                      if ((uVar42 >> 3 & 1) != 0) goto LAB_7101d604f0;
                      if ((uVar42 >> 1 & 1) != 0) goto LAB_7101d604cc;
                      goto LAB_7101d60510;
                    }
LAB_7101d604d8:
                    uVar6 = *(undefined1 *)(puVar21 + lVar54 * 0x1c30 + 0x1c58);
                  }
                  (**(code **)(*ppuVar47 + 0xe0))(ppuVar47,uVar17,uVar6);
                }
              }
LAB_7101d60510:
              lVar28 = lVar28 + 0x100;
            } while (lVar28 != 0x800);
          }
        }
        if (local_1a8 != (undefined **)0x0) {
          ppuVar47 = local_1a8 + 1;
          do {
            puVar20 = *ppuVar47;
            cVar26 = '\x01';
            bVar13 = (bool)ExclusiveMonitorPass(ppuVar47,0x10);
            if (bVar13) {
              *ppuVar47 = puVar20 + -1;
              cVar26 = ExclusiveMonitorsStatus();
            }
          } while (cVar26 != '\0');
          if (puVar20 == (undefined *)0x0) {
            (**(code **)(*local_1a8 + 0x10))(local_1a8);
            std::__shared_weak_count::__release_weak();
          }
        }
      }
    }
  }
  pbVar23 = (byte *)FUN_7101465a30();
  if (((DAT_71053144d8 & 1) == 0) && (iVar18 = __cxa_guard_acquire(&DAT_71053144d8), iVar18 != 0)) {
    FUN_7101764000();
    FUN_71000001c0();
    __cxa_guard_release(&DAT_71053144d8);
  }
  if (((DAT_71053144d8 & 1) == 0) && (iVar18 = __cxa_guard_acquire(&DAT_71053144d8), iVar18 != 0)) {
    FUN_7101764000();
    FUN_71000001c0();
    __cxa_guard_release(&DAT_71053144d8);
  }
  lVar28 = DAT_71053398b0;
  bVar12 = (DAT_71052c51b0 | 8) == 0x19;
  bVar13 = bVar12 || pbVar23[0x18] == 0;
  if ((!bVar12 && pbVar23[0x18] != 0) && (DAT_71052c51b0 == 0x18)) {
    if (((DAT_71053144d8 & 1) == 0) && (iVar18 = __cxa_guard_acquire(&DAT_71053144d8), iVar18 != 0))
    {
      FUN_7101764000();
      FUN_71000001c0();
      __cxa_guard_release(&DAT_71053144d8);
    }
    bVar13 = DAT_71053050f0 == 0x7010300;
  }
  if (*pbVar23 - 0x14 < 2) {
    if (((DAT_71053144d8 & 1) == 0) && (iVar18 = __cxa_guard_acquire(&DAT_71053144d8), iVar18 != 0))
    {
      FUN_7101764000();
      FUN_71000001c0();
      __cxa_guard_release(&DAT_71053144d8);
    }
    bVar12 = FUN_710179f5b0();
  }
  else if (*pbVar23 == 0x25) {
    bVar12 = true;
  }
  else {
    bVar12 = false;
  }
  FUN_71015435c0((long *)&local_a8,(long *)*DAT_71052c3910,0x1308abad79);
  ppuVar47 = local_a8;
  if (local_a8 == (undefined **)0x0) {
LAB_7101d5fcf0:
    if (bVar13 != false || bVar12 != false) {
LAB_7101d5fd0c:
      piVar32 = (int *)(lVar51 + 0xf8);
      local_1d8 = (char *)(lVar51 + 0x910);
      pcVar24 = (char *)(lVar28 + 8);
      uVar46 = 0;
LAB_7101d5fd38:
      puVar53 = &DAT_71052c573c;
      puVar44 = &DAT_7105339830;
      if (((*pcVar24 != '\0') && (puVar44 = (&DAT_7105339860)[uVar46], puVar44 == (undefined8 *)0x0)
          ) || (*(char *)(puVar44[2] + 0xb8) == '\0')) goto LAB_7101d60060;
      uVar41 = 0;
      bVar7 = false;
      bVar9 = false;
      bVar8 = true;
      do {
        puVar44 = &DAT_7105339830;
        uVar17 = *puVar53;
        if (((uVar17 != 0xffffffff) && ((puVar53[4] != 0xffffffff & (bVar12 ^ 0xffU)) == 0)) &&
           ((*pcVar24 == '\0' || (puVar44 = (&DAT_7105339860)[uVar46], puVar44 != (undefined8 *)0x0)
            ))) {
          lVar28 = puVar44[2];
          if (*(int *)(lVar28 + 0x9c) == 4) {
            bVar34 = *(byte *)(lVar28 + 10) >> 1;
joined_r0x007101d5fe24:
            if ((bVar34 & 1) != 0) goto LAB_7101d6004c;
          }
          else if (*(int *)(lVar28 + 0x9c) == 3) {
            bVar34 = *(byte *)(lVar28 + 10);
            goto joined_r0x007101d5fe24;
          }
          if (**(uint **)(DAT_710593b988 + 8) < 2) {
            uVar42 = *(uint *)(*(long *)(DAT_710593b980 + 8) + uVar46 * 0x30 + 4);
            if ((uVar42 >> 5 & 1) == 0) {
              if (((uVar42 >> 6 & 1) != 0) && (*piVar32 == 2)) {
                if (7 < uVar17) goto LAB_7101d6145c;
                lVar28 = lVar51 + (long)(int)uVar17 * 0x100;
                iVar18 = *(int *)(lVar28 + 0x118);
                if (iVar18 == 3) {
                  pcVar36 = (char *)FUN_7101465a30();
                  uVar17 = 1;
                  if (*pcVar36 != '\t') {
                    uVar17 = 2;
                  }
                  if (uVar17 != *(uint *)(lVar28 + 0x118)) {
LAB_7101d5ff9c:
                    uVar42 = *puVar53;
                    if ((uVar42 != 0xffffffff) && (*piVar32 == 2)) {
                      if (uVar42 < 8) {
                        FUN_7101d5aa30((int *)(lVar51 + (long)(int)uVar42 * 0x100 + 0x110),uVar17,
                                       puVar52,param_4,param_5,param_6,param_7,param_8);
                        bVar8 = false;
                        goto LAB_7101d5ff30;
                      }
                      goto LAB_7101d6145c;
                    }
                    bVar8 = false;
                    bVar9 = true;
                  }
                }
                else if (iVar18 == 2) {
                  uVar17 = 1;
                  if (*local_1d8 != '\0') {
                    uVar17 = 2;
                  }
                  if (uVar17 != 2) goto LAB_7101d5ff9c;
                }
              }
            }
            else if (*piVar32 == 2) {
              if (7 < uVar17) goto LAB_7101d6145c;
              lVar28 = lVar51 + (long)(int)uVar17 * 0x100;
              iVar18 = *(int *)(lVar28 + 0x118);
              if (iVar18 == 0) {
                uVar42 = 1;
LAB_7101d5ff1c:
                FUN_7101d5aa30((int *)(lVar51 + (long)(int)uVar17 * 0x100 + 0x110),uVar42,puVar52,
                               param_4,param_5,param_6,param_7,param_8);
LAB_7101d5ff30:
                bVar9 = true;
              }
              else if (iVar18 == 2) {
LAB_7101d60020:
                FUN_7101d5aa30((int *)(lVar51 + (long)(int)uVar17 * 0x100 + 0x110),3,puVar52,param_4
                               ,param_5,param_6,param_7,param_8);
                bVar9 = true;
                bVar7 = true;
              }
              else if (iVar18 == 1) {
                pcVar36 = (char *)FUN_7101465a30();
                iVar18 = 2;
                if (*pcVar36 == '\t') {
                  iVar18 = 3;
                }
                if (iVar18 != *(int *)(lVar28 + 0x118)) {
                  uVar17 = *puVar53;
                  if (*pcVar36 == '\t') {
                    if ((uVar17 != 0xffffffff) && (*piVar32 == 2)) {
                      if (uVar17 < 8) goto LAB_7101d60020;
                      goto LAB_7101d6145c;
                    }
                    bVar9 = true;
                    bVar7 = true;
                  }
                  else {
                    if ((uVar17 != 0xffffffff) && (*piVar32 == 2)) {
                      if (uVar17 < 8) {
                        uVar42 = 2;
                        goto LAB_7101d5ff1c;
                      }
                      goto LAB_7101d6145c;
                    }
                    bVar9 = true;
                  }
                }
              }
            }
          }
        }
LAB_7101d6004c:
        uVar41 = uVar41 + 1;
        puVar53 = puVar53 + 0x98;
      } while (uVar41 < 8);
      if (!bVar9) goto LAB_7101d60060;
      if (bVar8) {
        if (bVar7) {
          FUN_71024076d0((undefined4 *)&local_168,0x15d04e4a0d);
          local_160 = &PTR_FUN_7104f73d50;
          if (((local_158 != 0) && (DAT_7106dd53a8 == '\x01')) && (local_150 == DAT_7106dd53ac)) {
            piVar32 = (int *)(local_158 + 0x38);
            do {
              cVar26 = '\x01';
              bVar9 = (bool)ExclusiveMonitorPass(piVar32,0x10);
              if (bVar9) {
                *piVar32 = *piVar32 + -1;
                cVar26 = ExclusiveMonitorsStatus();
              }
            } while (cVar26 != '\0');
          }
          local_158 = 0;
          local_148 = 0;
          if (bVar13 != false || bVar12 != false) {
            param_4 = (byte ****)0x0;
            param_5 = (long ****)0x0;
            param_6 = 0;
            param_7 = 0;
            puVar52 = (undefined1 *)0x153b5acbbf;
            param_8 = 0;
            FUN_710175dfc0(1.0,1.0,*(long *)(DAT_71052c5120 + 8),(uint)uVar46,0x153b5acbbf,0,0,0,0,0
                          );
          }
          goto LAB_7101d601fc;
        }
        FUN_71024076d0((undefined4 *)&local_168,0xf57a523f5);
        if (((local_158 != 0) && (DAT_7106dd53a8 == '\x01')) && (local_150 == DAT_7106dd53ac)) {
          piVar32 = (int *)(local_158 + 0x38);
          do {
            cVar26 = '\x01';
            bVar13 = (bool)ExclusiveMonitorPass(piVar32,0x10);
            if (bVar13) {
              *piVar32 = *piVar32 + -1;
              cVar26 = ExclusiveMonitorsStatus();
            }
          } while (cVar26 != '\0');
        }
      }
      else {
        FUN_71024076d0((undefined4 *)&local_168,0x1053dffe8c);
        if (((local_158 != 0) && (DAT_7106dd53a8 == '\x01')) && (local_150 == DAT_7106dd53ac)) {
          piVar32 = (int *)(local_158 + 0x38);
          do {
            cVar26 = '\x01';
            bVar13 = (bool)ExclusiveMonitorPass(piVar32,0x10);
            if (bVar13) {
              *piVar32 = *piVar32 + -1;
              cVar26 = ExclusiveMonitorsStatus();
            }
          } while (cVar26 != '\0');
        }
      }
      local_160 = &PTR_FUN_7104f73d50;
      local_158 = 0;
      local_148 = 0;
    }
  }
  else {
    local_1b0 = (undefined **)&DAT_1308abad79;
    uVar46 = (**(code **)(*local_a8 + 0x18))(local_a8,&local_1b0);
    if ((uVar46 & 1) == 0) goto LAB_7101d5fcf0;
    piVar32 = (int *)(lVar51 + 0xf8);
    uVar46 = 0;
    bVar34 = bVar13 | bVar12;
    local_1ec = 0;
    local_1f8 = 0;
    bVar10 = false;
    bVar9 = false;
    bVar8 = true;
    bVar7 = true;
    do {
      puVar44 = &DAT_7105339830;
      lVar54 = lVar51 + uVar46 * 0x100;
      lVar45 = (long)*(int *)(lVar54 + 0x114);
      if (*(int *)(lVar54 + 0x114) != -1) {
        uVar17 = (&DAT_71052c574c)[lVar45 * 0x98];
        uVar41 = (ulong)(int)uVar17;
        bVar14 = *(char *)(lVar28 + 8) == '\0';
        puVar37 = puVar44;
        if (((9 < uVar41 || bVar14) ||
            (puVar37 = (&DAT_7105339860)[uVar41], puVar37 != (undefined8 *)0x0)) &&
           (*(char *)(puVar37[2] + 0xb8) != '\0')) {
          if ((bVar12 & *(char *)(puVar37[2] + 0xb8) != '\0') != 0) goto LAB_7101d5fcb4;
          bVar10 = true;
        }
        uVar42 = (&DAT_71052c573c)[lVar45 * 0x98];
        if (uVar42 != 0xffffffff) {
          if (bVar34 == 0) {
            bVar14 = false;
            uVar17 = 0;
          }
          else {
            if ((uVar17 == 0xffffffff) ||
               ((9 >= uVar41 && !bVar14 &&
                (puVar44 = (&DAT_7105339860)[uVar41], puVar44 == (undefined8 *)0x0)))) {
LAB_7101d5f7b0:
              uVar17 = 0;
            }
            else {
              lVar43 = puVar44[2];
              if (*(int *)(lVar43 + 0x9c) == 4) {
                if ((*(byte *)(lVar43 + 10) >> 1 & 1) == 0) goto LAB_7101d5f768;
                goto LAB_7101d5f7b0;
              }
              if ((*(int *)(lVar43 + 0x9c) == 3) && ((*(byte *)(lVar43 + 10) & 1) != 0))
              goto LAB_7101d5f7b0;
LAB_7101d5f768:
              if (1 < **(uint **)(DAT_710593b988 + 8)) goto LAB_7101d5f7b0;
              if (9 < uVar17) goto LAB_7101d6145c;
              uVar17 = *(uint *)(*(long *)(DAT_710593b980 + 8) + uVar41 * 0x30 + 4);
              if ((uVar17 >> 5 & 1) != 0) {
                uVar17 = 0;
                bVar14 = true;
                goto LAB_7101d5f7bc;
              }
            }
            bVar14 = false;
            uVar17 = uVar17 >> 6 & 1;
          }
LAB_7101d5f7bc:
          puVar53 = &DAT_71052c573c + lVar45 * 0x98;
          puVar25 = (undefined1 *)(lVar54 + 0x114);
          if (*piVar32 != 2) goto LAB_7101d5fb04;
          if (7 < uVar42) {
LAB_7101d6145c:
                    /* WARNING: Subroutine does not return */
            abort();
          }
          lVar45 = lVar51 + (long)(int)uVar42 * 0x100;
          iVar18 = *(int *)(lVar45 + 0x118);
          if (iVar18 == 0) {
            uVar42 = 1;
LAB_7101d5f858:
            if (bVar13 == false) {
              iVar18 = *(int *)(*(long *)(DAT_71052c35c8 + 8) + 0xc);
              uVar41 = FUN_710149e570(*(long *)(DAT_71052c3600 + 8));
              bVar15 = iVar18 == (int)uVar41;
              bVar9 = (bool)(bVar9 | bVar15);
              if (!bVar14 && !bVar15) goto LAB_7101d5f964;
LAB_7101d5f8b4:
              if (uVar42 == 3) {
                if (bVar7 == false) {
                  bVar7 = false;
                }
                else {
                  FUN_71024076d0((undefined4 *)&local_1b0,0x15d04e4a0d);
                  local_1a8 = &PTR_FUN_7104f73d50;
                  if (((local_1a0 != 0) && (DAT_7106dd53a8 == '\x01')) &&
                     ((int)local_198 == DAT_7106dd53ac)) {
                    piVar31 = (int *)(local_1a0 + 0x38);
                    do {
                      cVar26 = '\x01';
                      bVar7 = (bool)ExclusiveMonitorPass(piVar31,0x10);
                      if (bVar7) {
                        *piVar31 = *piVar31 + -1;
                        cVar26 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar26 != '\0');
                  }
                  local_1a0 = 0;
                  local_190 = local_190 & 0xffffffffffffff00;
                  bVar7 = bVar13;
                }
                if (bVar34 != 0) {
                  puVar52 = (undefined1 *)0x153b5acbbf;
                  param_4 = (byte ****)0x0;
                  param_5 = (long ****)0x0;
                  param_6 = 0;
                  param_7 = 0;
                  param_8 = 0;
                  FUN_710175dfc0(1.0,1.0,*(long *)(DAT_71052c5120 + 8),*(uint *)(lVar54 + 0x140),
                                 0x153b5acbbf,0,0,0,0,0);
                }
joined_r0x007101d5fa60:
                uVar22 = 1;
              }
              else {
                if (bVar8 == false) {
                  bVar8 = false;
                  goto joined_r0x007101d5fa60;
                }
                FUN_71024076d0((undefined4 *)&local_e8,0xf57a523f5);
                local_e0 = &PTR_FUN_7104f73d50;
                if (((local_d8 != 0) && (DAT_7106dd53a8 == '\x01')) && (local_d0 == DAT_7106dd53ac))
                {
                  piVar31 = (int *)(local_d8 + 0x38);
                  do {
                    cVar26 = '\x01';
                    bVar8 = (bool)ExclusiveMonitorPass(piVar31,0x10);
                    if (bVar8) {
                      *piVar31 = *piVar31 + -1;
                      cVar26 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar26 != '\0');
                }
                uVar22 = 1;
                local_d8 = 0;
                local_c8 = 0;
                bVar8 = bVar13;
              }
            }
            else {
              if (bVar14) goto LAB_7101d5f8b4;
LAB_7101d5f964:
              uVar22 = 0;
            }
            if (bVar12 == false) {
              param_5 = (long ****)0x3;
              param_6 = 1;
              param_4 = (byte ****)(ulong)uVar42;
              puVar52 = puVar25;
              uVar42 = (**(code **)(*ppuVar47 + 0x120))(ppuVar47,uVar22);
              if ((-1 < (int)uVar42) &&
                 (uVar39 = 1 << (ulong)((uint)uVar46 & 0x1f), (local_1ec & uVar39) == 0)) {
                uVar27 = *puVar53;
                if ((uVar27 != 0xffffffff) && (*piVar32 == 2)) {
                  if (7 < uVar27) goto LAB_7101d6145c;
                  FUN_7101d5aa30((int *)(lVar51 + (long)(int)uVar27 * 0x100 + 0x110),uVar42,puVar52,
                                 param_4,param_5,param_6,param_7,param_8);
                }
                local_1ec = local_1ec | uVar39;
              }
            }
          }
          else if (iVar18 == 1) {
            pcVar24 = (char *)FUN_7101465a30();
            uVar42 = 2;
            if (*pcVar24 == '\t') {
              uVar42 = 3;
            }
            if (uVar42 != *(uint *)(lVar45 + 0x118)) goto LAB_7101d5f858;
          }
          else if (iVar18 == 2) {
            uVar42 = 3;
            goto LAB_7101d5f858;
          }
LAB_7101d5fb04:
          uVar42 = *puVar53;
          if ((uVar42 != 0xffffffff) && (*piVar32 == 2)) {
            if (7 < uVar42) goto LAB_7101d6145c;
            lVar54 = lVar51 + (long)(int)uVar42 * 0x100;
            iVar18 = *(int *)(lVar54 + 0x118);
            if (iVar18 == 3) {
              pcVar24 = (char *)FUN_7101465a30();
              uVar42 = 1;
              if (*pcVar24 != '\t') {
                uVar42 = 2;
              }
              if (uVar42 != *(uint *)(lVar54 + 0x118)) {
LAB_7101d5fb5c:
                if (uVar17 != 0) {
                  FUN_71024076d0((undefined4 *)&local_128,0x1053dffe8c);
                  local_120 = &PTR_FUN_7104f73d50;
                  if (((local_118 != 0) && (DAT_7106dd53a8 == '\x01')) &&
                     (local_110 == DAT_7106dd53ac)) {
                    piVar31 = (int *)(local_118 + 0x38);
                    do {
                      cVar26 = '\x01';
                      bVar14 = (bool)ExclusiveMonitorPass(piVar31,0x10);
                      if (bVar14) {
                        *piVar31 = *piVar31 + -1;
                        cVar26 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar26 != '\0');
                  }
                  local_118 = 0;
                  local_108 = 0;
                }
                if (bVar12 == false) {
                  param_5 = (long ****)0x2;
                  param_4 = (byte ****)(ulong)uVar42;
                  param_6 = 0;
                  uVar17 = (**(code **)(*ppuVar47 + 0x120))(ppuVar47,uVar17);
                  puVar52 = puVar25;
                  if ((-1 < (int)uVar17) &&
                     (uVar42 = 1 << (ulong)((uint)uVar46 & 0x1f), (local_1f8 & uVar42) == 0)) {
                    uVar39 = *puVar53;
                    if ((uVar39 != 0xffffffff) && (*piVar32 == 2)) {
                      if (7 < uVar39) goto LAB_7101d6145c;
                      FUN_7101d5aa30((int *)(lVar51 + (long)(int)uVar39 * 0x100 + 0x110),uVar17,
                                     puVar25,param_4,param_5,param_6,param_7,param_8);
                    }
                    local_1f8 = local_1f8 | uVar42;
                    puVar52 = puVar25;
                  }
                }
              }
            }
            else if (iVar18 == 2) {
              uVar42 = 1;
              if (*(char *)(lVar51 + 0x910) != '\0') {
                uVar42 = 2;
              }
              if (uVar42 != 2) goto LAB_7101d5fb5c;
            }
          }
        }
      }
LAB_7101d5fcb4:
      uVar46 = uVar46 + 1;
    } while (uVar46 < 8);
    if (bVar9) {
      *(undefined4 *)(*(long *)(DAT_71052c35c8 + 8) + 0xc) = 0;
    }
    if ((bVar34 & !bVar10) != 0) goto LAB_7101d5fd0c;
  }
LAB_7101d601fc:
  if (local_a0 != (long *)0x0) {
    plVar49 = local_a0 + 1;
    do {
      lVar51 = *plVar49;
      cVar26 = '\x01';
      bVar13 = (bool)ExclusiveMonitorPass(plVar49,0x10);
      if (bVar13) {
        *plVar49 = lVar51 + -1;
        cVar26 = ExclusiveMonitorsStatus();
      }
    } while (cVar26 != '\0');
    if (lVar51 == 0) {
      (**(code **)(*local_a0 + 0x10))(local_a0);
      std::__shared_weak_count::__release_weak();
    }
  }
  FUN_7101d61460(*(long **)(param_1 + 0x80));
  lVar51 = *(long *)(param_1 + 0x80);
  uVar22 = extraout_x1_22;
  if (*(int *)(lVar51 + 0x928) != 0) {
    if (*(int *)(lVar51 + 0xf8) == 1) {
      puVar21 = FUN_7101465a30();
      lVar28 = DAT_71053398b0;
      if ((*(int *)(lVar51 + 0x114) == -1) ||
         (*(char *)((long)puVar21 + (long)*(int *)(lVar51 + 0x114) * 0x3860 + 0x73) == '\0')) {
LAB_7101d60364:
        bVar12 = true;
      }
      else {
        puVar44 = &DAT_7105339830;
        if ((*(uint *)(lVar51 + 0x140) < 10) &&
           ((*(char *)(DAT_71053398b0 + 8) != '\0' &&
            (puVar44 = (&DAT_7105339860)[(int)*(uint *)(lVar51 + 0x140)],
            puVar44 == (undefined8 *)0x0)))) {
          bVar13 = false;
          if (*(char *)(lVar51 + 0x1a8) != '\0') goto LAB_7101d6035c;
LAB_7101d60a38:
          bVar12 = true;
          if (bVar13) {
            *(undefined1 *)(lVar51 + 0x1a8) = 1;
            goto LAB_7101d60a44;
          }
        }
        else {
          bVar13 = *(char *)(puVar44[2] + 0xb8) != '\0';
          if (*(char *)(lVar51 + 0x1a8) == '\0') goto LAB_7101d60a38;
LAB_7101d6035c:
          if (!bVar13) {
            *(undefined1 *)(lVar51 + 0x1a8) = 0;
            goto LAB_7101d60364;
          }
LAB_7101d60a44:
          bVar12 = false;
        }
      }
      if ((*(int *)(lVar51 + 0x214) != -1) &&
         (*(char *)((long)puVar21 + (long)*(int *)(lVar51 + 0x214) * 0x3860 + 0x73) != '\0')) {
        puVar44 = &DAT_7105339830;
        if ((*(uint *)(lVar51 + 0x240) < 10) && (*(char *)(lVar28 + 8) != '\0')) {
          puVar44 = (&DAT_7105339860)[(int)*(uint *)(lVar51 + 0x240)];
          bVar13 = false;
          if (puVar44 != (undefined8 *)0x0) goto LAB_7101d60a90;
        }
        else {
LAB_7101d60a90:
          bVar13 = *(char *)(puVar44[2] + 0xb8) != '\0';
        }
        if (*(char *)(lVar51 + 0x2a8) == '\0') {
          bVar34 = 1;
          if (bVar13) {
            *(undefined1 *)(lVar51 + 0x2a8) = 1;
            goto LAB_7101d60ac4;
          }
        }
        else if (bVar13) {
LAB_7101d60ac4:
          bVar34 = 0;
        }
        else {
          *(undefined1 *)(lVar51 + 0x2a8) = 0;
          bVar34 = 1;
        }
        bVar12 = (bool)(bVar12 & bVar34);
      }
      if ((*(int *)(lVar51 + 0x314) != -1) &&
         (*(char *)((long)puVar21 + (long)*(int *)(lVar51 + 0x314) * 0x3860 + 0x73) != '\0')) {
        puVar44 = &DAT_7105339830;
        if ((*(uint *)(lVar51 + 0x340) < 10) && (*(char *)(lVar28 + 8) != '\0')) {
          puVar44 = (&DAT_7105339860)[(int)*(uint *)(lVar51 + 0x340)];
          bVar13 = false;
          if (puVar44 != (undefined8 *)0x0) goto LAB_7101d60b14;
        }
        else {
LAB_7101d60b14:
          bVar13 = *(char *)(puVar44[2] + 0xb8) != '\0';
        }
        if (*(char *)(lVar51 + 0x3a8) == '\0') {
          bVar34 = 1;
          if (bVar13) {
            *(undefined1 *)(lVar51 + 0x3a8) = 1;
            goto LAB_7101d60b48;
          }
        }
        else if (bVar13) {
LAB_7101d60b48:
          bVar34 = 0;
        }
        else {
          *(undefined1 *)(lVar51 + 0x3a8) = 0;
          bVar34 = 1;
        }
        bVar12 = (bool)(bVar12 & bVar34);
      }
      if ((*(int *)(lVar51 + 0x414) != -1) &&
         (*(char *)((long)puVar21 + (long)*(int *)(lVar51 + 0x414) * 0x3860 + 0x73) != '\0')) {
        puVar44 = &DAT_7105339830;
        if ((*(uint *)(lVar51 + 0x440) < 10) && (*(char *)(lVar28 + 8) != '\0')) {
          puVar44 = (&DAT_7105339860)[(int)*(uint *)(lVar51 + 0x440)];
          bVar13 = false;
          if (puVar44 != (undefined8 *)0x0) goto LAB_7101d60b98;
        }
        else {
LAB_7101d60b98:
          bVar13 = *(char *)(puVar44[2] + 0xb8) != '\0';
        }
        if (*(char *)(lVar51 + 0x4a8) == '\0') {
          bVar34 = 1;
          if (bVar13) {
            *(undefined1 *)(lVar51 + 0x4a8) = 1;
            goto LAB_7101d60bcc;
          }
        }
        else if (bVar13) {
LAB_7101d60bcc:
          bVar34 = 0;
        }
        else {
          *(undefined1 *)(lVar51 + 0x4a8) = 0;
          bVar34 = 1;
        }
        bVar12 = (bool)(bVar12 & bVar34);
      }
      if ((*(int *)(lVar51 + 0x514) != -1) &&
         (*(char *)((long)puVar21 + (long)*(int *)(lVar51 + 0x514) * 0x3860 + 0x73) != '\0')) {
        puVar44 = &DAT_7105339830;
        if ((*(uint *)(lVar51 + 0x540) < 10) && (*(char *)(lVar28 + 8) != '\0')) {
          puVar44 = (&DAT_7105339860)[(int)*(uint *)(lVar51 + 0x540)];
          bVar13 = false;
          if (puVar44 != (undefined8 *)0x0) goto LAB_7101d60c1c;
        }
        else {
LAB_7101d60c1c:
          bVar13 = *(char *)(puVar44[2] + 0xb8) != '\0';
        }
        if (*(char *)(lVar51 + 0x5a8) == '\0') {
          bVar34 = 1;
          if (bVar13) {
            *(undefined1 *)(lVar51 + 0x5a8) = 1;
            goto LAB_7101d60c50;
          }
        }
        else if (bVar13) {
LAB_7101d60c50:
          bVar34 = 0;
        }
        else {
          *(undefined1 *)(lVar51 + 0x5a8) = 0;
          bVar34 = 1;
        }
        bVar12 = (bool)(bVar12 & bVar34);
      }
      if ((*(int *)(lVar51 + 0x614) != -1) &&
         (*(char *)((long)puVar21 + (long)*(int *)(lVar51 + 0x614) * 0x3860 + 0x73) != '\0')) {
        puVar44 = &DAT_7105339830;
        if ((*(uint *)(lVar51 + 0x640) < 10) && (*(char *)(lVar28 + 8) != '\0')) {
          puVar44 = (&DAT_7105339860)[(int)*(uint *)(lVar51 + 0x640)];
          bVar13 = false;
          if (puVar44 != (undefined8 *)0x0) goto LAB_7101d60ca0;
        }
        else {
LAB_7101d60ca0:
          bVar13 = *(char *)(puVar44[2] + 0xb8) != '\0';
        }
        if (*(char *)(lVar51 + 0x6a8) == '\0') {
          bVar34 = 1;
          if (bVar13) {
            *(undefined1 *)(lVar51 + 0x6a8) = 1;
            goto LAB_7101d60cd4;
          }
        }
        else if (bVar13) {
LAB_7101d60cd4:
          bVar34 = 0;
        }
        else {
          *(undefined1 *)(lVar51 + 0x6a8) = 0;
          bVar34 = 1;
        }
        bVar12 = (bool)(bVar12 & bVar34);
      }
      if ((*(int *)(lVar51 + 0x714) != -1) &&
         (*(char *)((long)puVar21 + (long)*(int *)(lVar51 + 0x714) * 0x3860 + 0x73) != '\0')) {
        puVar44 = &DAT_7105339830;
        if ((*(uint *)(lVar51 + 0x740) < 10) && (*(char *)(lVar28 + 8) != '\0')) {
          puVar44 = (&DAT_7105339860)[(int)*(uint *)(lVar51 + 0x740)];
          bVar13 = false;
          if (puVar44 != (undefined8 *)0x0) goto LAB_7101d60d24;
        }
        else {
LAB_7101d60d24:
          bVar13 = *(char *)(puVar44[2] + 0xb8) != '\0';
        }
        if (*(char *)(lVar51 + 0x7a8) == '\0') {
          bVar34 = 1;
          if (bVar13) {
            *(undefined1 *)(lVar51 + 0x7a8) = 1;
            goto LAB_7101d60d58;
          }
        }
        else if (bVar13) {
LAB_7101d60d58:
          bVar34 = 0;
        }
        else {
          *(undefined1 *)(lVar51 + 0x7a8) = 0;
          bVar34 = 1;
        }
        bVar12 = (bool)(bVar12 & bVar34);
      }
      uVar22 = extraout_x1_25;
      if ((*(int *)(lVar51 + 0x814) != -1) &&
         (*(char *)((long)puVar21 + (long)*(int *)(lVar51 + 0x814) * 0x3860 + 0x73) != '\0')) {
        puVar44 = &DAT_7105339830;
        if ((*(uint *)(lVar51 + 0x840) < 10) &&
           ((*(char *)(lVar28 + 8) != '\0' &&
            (puVar44 = (&DAT_7105339860)[(int)*(uint *)(lVar51 + 0x840)],
            puVar44 == (undefined8 *)0x0)))) {
          bVar13 = false;
          cVar26 = *(char *)(lVar51 + 0x8a8);
        }
        else {
          bVar13 = *(char *)(puVar44[2] + 0xb8) != '\0';
          cVar26 = *(char *)(lVar51 + 0x8a8);
        }
        if (cVar26 == '\0') {
          if (!bVar13) goto LAB_7101d60de8;
          goto LAB_7101d60ddc;
        }
        if (bVar13) goto LAB_7101d60df8;
        *(undefined1 *)(lVar51 + 0x8a8) = 0;
      }
LAB_7101d60de8:
      if (bVar12) {
        FUN_7101d5b6c0(lVar51,1,puVar52,param_4,param_5,param_6,param_7,param_8);
        uVar22 = extraout_x1_40;
      }
    }
    else {
      if (*(int *)(lVar51 + 0xf8) != 2) goto LAB_7101d60df8;
      puVar21 = FUN_7101465a30();
      lVar28 = DAT_71053398b0;
      uVar22 = extraout_x1_23;
      if ((*(int *)(lVar51 + 0x114) != -1) &&
         (*(char *)((long)puVar21 + (long)*(int *)(lVar51 + 0x114) * 0x3860 + 0x73) != '\0')) {
        puVar44 = &DAT_7105339830;
        if ((*(uint *)(lVar51 + 0x140) < 10) && (*(char *)(DAT_71053398b0 + 8) != '\0')) {
          puVar44 = (&DAT_7105339860)[(int)*(uint *)(lVar51 + 0x140)];
          bVar13 = false;
          if (puVar44 != (undefined8 *)0x0) goto LAB_7101d602c0;
        }
        else {
LAB_7101d602c0:
          bVar13 = *(char *)(puVar44[2] + 0xb8) != '\0';
        }
        if (*(char *)(lVar51 + 0x1a8) == '\0') {
          if (bVar13) {
            *(undefined1 *)(lVar51 + 0x1a8) = 1;
          }
        }
        else if (!bVar13) {
          *(undefined1 *)(lVar51 + 0x1a8) = 0;
          FUN_7101d5aa30((int *)(lVar51 + 0x110),3,puVar52,param_4,param_5,param_6,param_7,param_8);
          uVar22 = extraout_x1_24;
        }
      }
      if ((*(int *)(lVar51 + 0x214) != -1) &&
         (*(char *)((long)puVar21 + (long)*(int *)(lVar51 + 0x214) * 0x3860 + 0x73) != '\0')) {
        puVar44 = &DAT_7105339830;
        if ((*(uint *)(lVar51 + 0x240) < 10) && (*(char *)(lVar28 + 8) != '\0')) {
          puVar44 = (&DAT_7105339860)[(int)*(uint *)(lVar51 + 0x240)];
          bVar13 = false;
          if (puVar44 != (undefined8 *)0x0) goto LAB_7101d605bc;
        }
        else {
LAB_7101d605bc:
          bVar13 = *(char *)(puVar44[2] + 0xb8) != '\0';
        }
        if (*(char *)(lVar51 + 0x2a8) == '\0') {
          if (bVar13) {
            *(undefined1 *)(lVar51 + 0x2a8) = 1;
          }
        }
        else if (!bVar13) {
          *(undefined1 *)(lVar51 + 0x2a8) = 0;
          FUN_7101d5aa30((int *)(lVar51 + 0x210),3,puVar52,param_4,param_5,param_6,param_7,param_8);
          uVar22 = extraout_x1_26;
        }
      }
      if ((*(int *)(lVar51 + 0x314) != -1) &&
         (*(char *)((long)puVar21 + (long)*(int *)(lVar51 + 0x314) * 0x3860 + 0x73) != '\0')) {
        puVar44 = &DAT_7105339830;
        if ((*(uint *)(lVar51 + 0x340) < 10) && (*(char *)(lVar28 + 8) != '\0')) {
          puVar44 = (&DAT_7105339860)[(int)*(uint *)(lVar51 + 0x340)];
          bVar13 = false;
          if (puVar44 != (undefined8 *)0x0) goto LAB_7101d60640;
        }
        else {
LAB_7101d60640:
          bVar13 = *(char *)(puVar44[2] + 0xb8) != '\0';
        }
        if (*(char *)(lVar51 + 0x3a8) == '\0') {
          if (bVar13) {
            *(undefined1 *)(lVar51 + 0x3a8) = 1;
          }
        }
        else if (!bVar13) {
          *(undefined1 *)(lVar51 + 0x3a8) = 0;
          FUN_7101d5aa30((int *)(lVar51 + 0x310),3,puVar52,param_4,param_5,param_6,param_7,param_8);
          uVar22 = extraout_x1_27;
        }
      }
      if ((*(int *)(lVar51 + 0x414) != -1) &&
         (*(char *)((long)puVar21 + (long)*(int *)(lVar51 + 0x414) * 0x3860 + 0x73) != '\0')) {
        puVar44 = &DAT_7105339830;
        if ((*(uint *)(lVar51 + 0x440) < 10) && (*(char *)(lVar28 + 8) != '\0')) {
          puVar44 = (&DAT_7105339860)[(int)*(uint *)(lVar51 + 0x440)];
          bVar13 = false;
          if (puVar44 != (undefined8 *)0x0) goto LAB_7101d606c4;
        }
        else {
LAB_7101d606c4:
          bVar13 = *(char *)(puVar44[2] + 0xb8) != '\0';
        }
        if (*(char *)(lVar51 + 0x4a8) == '\0') {
          if (bVar13) {
            *(undefined1 *)(lVar51 + 0x4a8) = 1;
          }
        }
        else if (!bVar13) {
          *(undefined1 *)(lVar51 + 0x4a8) = 0;
          FUN_7101d5aa30((int *)(lVar51 + 0x410),3,puVar52,param_4,param_5,param_6,param_7,param_8);
          uVar22 = extraout_x1_28;
        }
      }
      if ((*(int *)(lVar51 + 0x514) != -1) &&
         (*(char *)((long)puVar21 + (long)*(int *)(lVar51 + 0x514) * 0x3860 + 0x73) != '\0')) {
        puVar44 = &DAT_7105339830;
        if ((*(uint *)(lVar51 + 0x540) < 10) && (*(char *)(lVar28 + 8) != '\0')) {
          puVar44 = (&DAT_7105339860)[(int)*(uint *)(lVar51 + 0x540)];
          bVar13 = false;
          if (puVar44 != (undefined8 *)0x0) goto LAB_7101d60748;
        }
        else {
LAB_7101d60748:
          bVar13 = *(char *)(puVar44[2] + 0xb8) != '\0';
        }
        if (*(char *)(lVar51 + 0x5a8) == '\0') {
          if (bVar13) {
            *(undefined1 *)(lVar51 + 0x5a8) = 1;
          }
        }
        else if (!bVar13) {
          *(undefined1 *)(lVar51 + 0x5a8) = 0;
          FUN_7101d5aa30((int *)(lVar51 + 0x510),3,puVar52,param_4,param_5,param_6,param_7,param_8);
          uVar22 = extraout_x1_29;
        }
      }
      if ((*(int *)(lVar51 + 0x614) != -1) &&
         (*(char *)((long)puVar21 + (long)*(int *)(lVar51 + 0x614) * 0x3860 + 0x73) != '\0')) {
        puVar44 = &DAT_7105339830;
        if ((*(uint *)(lVar51 + 0x640) < 10) && (*(char *)(lVar28 + 8) != '\0')) {
          puVar44 = (&DAT_7105339860)[(int)*(uint *)(lVar51 + 0x640)];
          bVar13 = false;
          if (puVar44 != (undefined8 *)0x0) goto LAB_7101d607cc;
        }
        else {
LAB_7101d607cc:
          bVar13 = *(char *)(puVar44[2] + 0xb8) != '\0';
        }
        if (*(char *)(lVar51 + 0x6a8) == '\0') {
          if (bVar13) {
            *(undefined1 *)(lVar51 + 0x6a8) = 1;
          }
        }
        else if (!bVar13) {
          *(undefined1 *)(lVar51 + 0x6a8) = 0;
          FUN_7101d5aa30((int *)(lVar51 + 0x610),3,puVar52,param_4,param_5,param_6,param_7,param_8);
          uVar22 = extraout_x1_30;
        }
      }
      if ((*(int *)(lVar51 + 0x714) != -1) &&
         (*(char *)((long)puVar21 + (long)*(int *)(lVar51 + 0x714) * 0x3860 + 0x73) != '\0')) {
        puVar44 = &DAT_7105339830;
        if ((*(uint *)(lVar51 + 0x740) < 10) && (*(char *)(lVar28 + 8) != '\0')) {
          puVar44 = (&DAT_7105339860)[(int)*(uint *)(lVar51 + 0x740)];
          bVar13 = false;
          if (puVar44 != (undefined8 *)0x0) goto LAB_7101d60850;
        }
        else {
LAB_7101d60850:
          bVar13 = *(char *)(puVar44[2] + 0xb8) != '\0';
        }
        if (*(char *)(lVar51 + 0x7a8) == '\0') {
          if (bVar13) {
            *(undefined1 *)(lVar51 + 0x7a8) = 1;
          }
        }
        else if (!bVar13) {
          *(undefined1 *)(lVar51 + 0x7a8) = 0;
          FUN_7101d5aa30((int *)(lVar51 + 0x710),3,puVar52,param_4,param_5,param_6,param_7,param_8);
          uVar22 = extraout_x1_31;
        }
      }
      if ((*(int *)(lVar51 + 0x814) == -1) ||
         (*(char *)((long)puVar21 + (long)*(int *)(lVar51 + 0x814) * 0x3860 + 0x73) == '\0'))
      goto LAB_7101d60df8;
      puVar44 = &DAT_7105339830;
      if ((*(uint *)(lVar51 + 0x840) < 10) && (*(char *)(lVar28 + 8) != '\0')) {
        puVar44 = (&DAT_7105339860)[(int)*(uint *)(lVar51 + 0x840)];
        bVar13 = false;
        if (puVar44 != (undefined8 *)0x0) goto LAB_7101d608d4;
      }
      else {
LAB_7101d608d4:
        bVar13 = *(char *)(puVar44[2] + 0xb8) != '\0';
      }
      if (*(char *)(lVar51 + 0x8a8) == '\0') {
        if (bVar13) {
LAB_7101d60ddc:
          *(undefined1 *)(lVar51 + 0x8a8) = 1;
        }
      }
      else if (!bVar13) {
        *(undefined1 *)(lVar51 + 0x8a8) = 0;
        FUN_7101d5aa30((int *)(lVar51 + 0x810),3,puVar52,param_4,param_5,param_6,param_7,param_8);
        uVar22 = extraout_x1_32;
      }
    }
  }
LAB_7101d60df8:
  FUN_71033935f0(*(long *)(*(long *)(param_1 + 0x80) + 0x938),uVar22,puVar52,param_4,param_5,param_6
                 ,param_7,param_8);
  lVar51 = *(long *)(param_1 + 0x80);
  if (*(int *)(lVar51 + 0x208) == 2) {
    FUN_7103776910(&local_1b0,lVar51 + 0x1f8,(long ****)"set_fxui_like_00",puVar52,param_4,param_5,
                   param_6,param_7,param_8);
    ppuVar47 = local_1a8;
    puVar20 = *local_1a8;
    if (puVar20 != (undefined *)0x0) {
      if (*(int *)(lVar51 + 0x118) == 3) {
        if ((puVar20[0x58] & 1) != 0) {
          bVar34 = puVar20[0x58] & 0xfe;
          goto LAB_7101d60e6c;
        }
      }
      else if ((*(int *)(lVar51 + 0x118) == 2) && ((puVar20[0x58] & 1) == 0)) {
        bVar34 = puVar20[0x58] | 1;
LAB_7101d60e6c:
        puVar20[0x58] = bVar34;
      }
    }
    local_1b0 = &PTR_FUN_710523d9a8;
    local_1a8 = (undefined **)0x0;
    if (ppuVar47 != (undefined **)0x0) {
      FUN_710392eb40((ulong)ppuVar47);
    }
  }
  if (*(int *)(lVar51 + 0x308) == 2) {
    FUN_7103776910(&local_1b0,lVar51 + 0x2f8,(long ****)"set_fxui_like_00",puVar52,param_4,param_5,
                   param_6,param_7,param_8);
    ppuVar47 = local_1a8;
    puVar20 = *local_1a8;
    if (puVar20 != (undefined *)0x0) {
      if (*(int *)(lVar51 + 0x218) == 2) {
        if ((puVar20[0x58] & 1) == 0) {
          bVar34 = puVar20[0x58] | 1;
          goto LAB_7101d60edc;
        }
      }
      else if ((*(int *)(lVar51 + 0x218) == 3) && ((puVar20[0x58] & 1) != 0)) {
        bVar34 = puVar20[0x58] & 0xfe;
LAB_7101d60edc:
        puVar20[0x58] = bVar34;
      }
    }
    local_1b0 = &PTR_FUN_710523d9a8;
    local_1a8 = (undefined **)0x0;
    if (ppuVar47 != (undefined **)0x0) {
      FUN_710392eb40((ulong)ppuVar47);
    }
  }
  if (*(int *)(lVar51 + 0x408) == 2) {
    FUN_7103776910(&local_1b0,lVar51 + 0x3f8,(long ****)"set_fxui_like_00",puVar52,param_4,param_5,
                   param_6,param_7,param_8);
    ppuVar47 = local_1a8;
    puVar20 = *local_1a8;
    if (puVar20 != (undefined *)0x0) {
      if (*(int *)(lVar51 + 0x318) == 2) {
        if ((puVar20[0x58] & 1) == 0) {
          bVar34 = puVar20[0x58] | 1;
          goto LAB_7101d60f4c;
        }
      }
      else if ((*(int *)(lVar51 + 0x318) == 3) && ((puVar20[0x58] & 1) != 0)) {
        bVar34 = puVar20[0x58] & 0xfe;
LAB_7101d60f4c:
        puVar20[0x58] = bVar34;
      }
    }
    local_1b0 = &PTR_FUN_710523d9a8;
    local_1a8 = (undefined **)0x0;
    if (ppuVar47 != (undefined **)0x0) {
      FUN_710392eb40((ulong)ppuVar47);
    }
  }
  if (*(int *)(lVar51 + 0x508) == 2) {
    FUN_7103776910(&local_1b0,lVar51 + 0x4f8,(long ****)"set_fxui_like_00",puVar52,param_4,param_5,
                   param_6,param_7,param_8);
    ppuVar47 = local_1a8;
    puVar20 = *local_1a8;
    if (puVar20 != (undefined *)0x0) {
      if (*(int *)(lVar51 + 0x418) == 2) {
        if ((puVar20[0x58] & 1) == 0) {
          bVar34 = puVar20[0x58] | 1;
          goto LAB_7101d60fbc;
        }
      }
      else if ((*(int *)(lVar51 + 0x418) == 3) && ((puVar20[0x58] & 1) != 0)) {
        bVar34 = puVar20[0x58] & 0xfe;
LAB_7101d60fbc:
        puVar20[0x58] = bVar34;
      }
    }
    local_1b0 = &PTR_FUN_710523d9a8;
    local_1a8 = (undefined **)0x0;
    if (ppuVar47 != (undefined **)0x0) {
      FUN_710392eb40((ulong)ppuVar47);
    }
  }
  if (*(int *)(lVar51 + 0x608) == 2) {
    FUN_7103776910(&local_1b0,lVar51 + 0x5f8,(long ****)"set_fxui_like_00",puVar52,param_4,param_5,
                   param_6,param_7,param_8);
    ppuVar47 = local_1a8;
    puVar20 = *local_1a8;
    if (puVar20 != (undefined *)0x0) {
      if (*(int *)(lVar51 + 0x518) == 2) {
        if ((puVar20[0x58] & 1) == 0) {
          bVar34 = puVar20[0x58] | 1;
          goto LAB_7101d6102c;
        }
      }
      else if ((*(int *)(lVar51 + 0x518) == 3) && ((puVar20[0x58] & 1) != 0)) {
        bVar34 = puVar20[0x58] & 0xfe;
LAB_7101d6102c:
        puVar20[0x58] = bVar34;
      }
    }
    local_1b0 = &PTR_FUN_710523d9a8;
    local_1a8 = (undefined **)0x0;
    if (ppuVar47 != (undefined **)0x0) {
      FUN_710392eb40((ulong)ppuVar47);
    }
  }
  if (*(int *)(lVar51 + 0x708) == 2) {
    FUN_7103776910(&local_1b0,lVar51 + 0x6f8,(long ****)"set_fxui_like_00",puVar52,param_4,param_5,
                   param_6,param_7,param_8);
    ppuVar47 = local_1a8;
    puVar20 = *local_1a8;
    if (puVar20 != (undefined *)0x0) {
      if (*(int *)(lVar51 + 0x618) == 2) {
        if ((puVar20[0x58] & 1) == 0) {
          bVar34 = puVar20[0x58] | 1;
          goto LAB_7101d6109c;
        }
      }
      else if ((*(int *)(lVar51 + 0x618) == 3) && ((puVar20[0x58] & 1) != 0)) {
        bVar34 = puVar20[0x58] & 0xfe;
LAB_7101d6109c:
        puVar20[0x58] = bVar34;
      }
    }
    local_1b0 = &PTR_FUN_710523d9a8;
    local_1a8 = (undefined **)0x0;
    if (ppuVar47 != (undefined **)0x0) {
      FUN_710392eb40((ulong)ppuVar47);
    }
  }
  if (*(int *)(lVar51 + 0x808) == 2) {
    FUN_7103776910(&local_1b0,lVar51 + 0x7f8,(long ****)"set_fxui_like_00",puVar52,param_4,param_5,
                   param_6,param_7,param_8);
    ppuVar47 = local_1a8;
    puVar20 = *local_1a8;
    if (puVar20 != (undefined *)0x0) {
      if (*(int *)(lVar51 + 0x718) == 2) {
        if ((puVar20[0x58] & 1) == 0) {
          bVar34 = puVar20[0x58] | 1;
          goto LAB_7101d6110c;
        }
      }
      else if ((*(int *)(lVar51 + 0x718) == 3) && ((puVar20[0x58] & 1) != 0)) {
        bVar34 = puVar20[0x58] & 0xfe;
LAB_7101d6110c:
        puVar20[0x58] = bVar34;
      }
    }
    local_1b0 = &PTR_FUN_710523d9a8;
    local_1a8 = (undefined **)0x0;
    if (ppuVar47 != (undefined **)0x0) {
      FUN_710392eb40((ulong)ppuVar47);
    }
  }
  if (*(int *)(lVar51 + 0x908) != 2) goto LAB_7101d6118c;
  FUN_7103776910(&local_1b0,lVar51 + 0x8f8,(long ****)"set_fxui_like_00",puVar52,param_4,param_5,
                 param_6,param_7,param_8);
  ppuVar47 = local_1a8;
  puVar20 = *local_1a8;
  if (puVar20 != (undefined *)0x0) {
    if (*(int *)(lVar51 + 0x818) == 2) {
      if ((puVar20[0x58] & 1) == 0) {
        bVar34 = puVar20[0x58] | 1;
        goto LAB_7101d6117c;
      }
    }
    else if ((*(int *)(lVar51 + 0x818) == 3) && ((puVar20[0x58] & 1) != 0)) {
      bVar34 = puVar20[0x58] & 0xfe;
LAB_7101d6117c:
      puVar20[0x58] = bVar34;
    }
  }
  local_1b0 = &PTR_FUN_710523d9a8;
  local_1a8 = (undefined **)0x0;
  if (ppuVar47 != (undefined **)0x0) {
    FUN_710392eb40((ulong)ppuVar47);
  }
LAB_7101d6118c:
  lVar28 = *(long *)(DAT_710532f820 + 8);
  uVar22 = FUN_7101eefe30(*(long *)(*(long *)(lVar28 + 0x110) + 0x80));
  uVar17 = (uint)(*(int *)(lVar28 + 0xf8) != 0) | ((uint)uVar22 ^ 0xffffffff) & 1 |
           (uint)*(byte *)(lVar28 + 0x142);
  if (uVar17 != *(byte *)(lVar51 + 0x940)) {
    if (uVar17 == 0) {
      FUN_7101d5c8e0((int *)(lVar51 + 0x110),1,puVar52,param_4,param_5,param_6,param_7,param_8);
      FUN_7101d5c8e0((int *)(lVar51 + 0x210),1,puVar52,param_4,param_5,param_6,param_7,param_8);
      FUN_7101d5c8e0((int *)(lVar51 + 0x310),1,puVar52,param_4,param_5,param_6,param_7,param_8);
      FUN_7101d5c8e0((int *)(lVar51 + 0x410),1,puVar52,param_4,param_5,param_6,param_7,param_8);
      FUN_7101d5c8e0((int *)(lVar51 + 0x510),1,puVar52,param_4,param_5,param_6,param_7,param_8);
      FUN_7101d5c8e0((int *)(lVar51 + 0x610),1,puVar52,param_4,param_5,param_6,param_7,param_8);
      FUN_7101d5c8e0((int *)(lVar51 + 0x710),1,puVar52,param_4,param_5,param_6,param_7,param_8);
    }
    else {
      FUN_7101d5c8e0((int *)(lVar51 + 0x110),0,puVar52,param_4,param_5,param_6,param_7,param_8);
      FUN_7101d5c8e0((int *)(lVar51 + 0x210),0,puVar52,param_4,param_5,param_6,param_7,param_8);
      FUN_7101d5c8e0((int *)(lVar51 + 0x310),0,puVar52,param_4,param_5,param_6,param_7,param_8);
      FUN_7101d5c8e0((int *)(lVar51 + 0x410),0,puVar52,param_4,param_5,param_6,param_7,param_8);
      FUN_7101d5c8e0((int *)(lVar51 + 0x510),0,puVar52,param_4,param_5,param_6,param_7,param_8);
      FUN_7101d5c8e0((int *)(lVar51 + 0x610),0,puVar52,param_4,param_5,param_6,param_7,param_8);
      FUN_7101d5c8e0((int *)(lVar51 + 0x710),0,puVar52,param_4,param_5,param_6,param_7,param_8);
    }
    FUN_7101d5c8e0((int *)(lVar51 + 0x810),uVar17 == 0,puVar52,param_4,param_5,param_6,param_7,
                   param_8);
  }
  *(char *)(lVar51 + 0x940) = (char)uVar17;
  return;
code_r0x007101d5ea18:
  piVar32 = piVar32 + 0x2f;
  if (piVar31 == piVar32) goto LAB_7101d5ed54;
  goto LAB_7101d5ea0c;
LAB_7101d60060:
  uVar46 = uVar46 + 1;
  if (9 < uVar46) goto LAB_7101d601fc;
  goto LAB_7101d5fd38;
}

