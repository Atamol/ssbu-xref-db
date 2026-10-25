// addr:      7101607fc0
// offset:    0x1607fc0
// name:      FUN_7101607fc0
// mangled:   
// signature: ulong __cdecl FUN_7101607fc0(long param_1, ulong param_2, long * * * * * * * * * param_3, byte * * * * param_4, undefined * param_5, ulong param_6, long * * * param_7, long * * * param_8)


ulong FUN_7101607fc0(long param_1,ulong param_2,long *********param_3,byte ****param_4,
                    undefined *param_5,ulong param_6,long ***param_7,long ***param_8)

{
  ulong *puVar1;
  ulong *puVar2;
  int iVar3;
  uint uVar4;
  char cVar5;
  byte bVar6;
  ulong *puVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  uint *puVar11;
  uint *puVar12;
  bool bVar13;
  uint uVar14;
  uint *puVar15;
  undefined8 *puVar16;
  ulong extraout_x1;
  ulong extraout_x1_00;
  ulong extraout_x1_01;
  ulong extraout_x1_02;
  ulong extraout_x1_03;
  ulong extraout_x1_04;
  ulong extraout_x1_05;
  ulong extraout_x1_06;
  ulong extraout_x1_07;
  ulong extraout_x1_08;
  ulong extraout_x1_09;
  ulong extraout_x1_10;
  ulong extraout_x1_11;
  ulong extraout_x1_12;
  ulong extraout_x1_13;
  ulong extraout_x1_14;
  ulong extraout_x1_15;
  ulong extraout_x1_16;
  ulong extraout_x1_17;
  ulong extraout_x1_18;
  ulong extraout_x1_19;
  ulong extraout_x1_20;
  ulong extraout_x1_21;
  ulong extraout_x1_22;
  ulong extraout_x1_23;
  ulong extraout_x1_24;
  undefined8 extraout_x1_25;
  undefined8 extraout_x1_26;
  long *********ppppppppplVar17;
  char *pcVar18;
  code *pcVar19;
  long *plVar20;
  uint uVar21;
  long *plVar22;
  ulong *puVar23;
  byte *pbVar24;
  ulong uVar25;
  ulong uVar26;
  long lVar27;
  long *plVar28;
  uint uVar29;
  long lVar30;
  ulong uVar31;
  long lVar32;
  uint uVar33;
  long ********pppppppplVar34;
  undefined1 auVar35 [16];
  long ********local_1b0;
  long *local_1a8;
  long ********local_1a0;
  long *local_198;
  undefined8 local_190;
  long *local_188;
  uint local_180 [2];
  undefined8 local_178;
  uint *local_170;
  undefined2 local_78;
  uint local_70 [4];
  
  auVar10._8_8_ = param_2;
  auVar10._0_8_ = param_1;
  auVar9._8_8_ = param_2;
  auVar9._0_8_ = param_1;
  auVar35._8_8_ = param_2;
  auVar35._0_8_ = param_1;
  if (((*(char *)(param_1 + 0x48) != '\0') || (auVar35 = auVar9, *(char *)(param_1 + 0x4d) == '\0'))
     || (auVar35 = auVar10, *(long *)(param_1 + 0x58) != *(long *)(param_1 + 0x50)))
  goto LAB_7101607fec;
  plVar20 = (long *)(*(long *)(param_1 + 0x10) + 0x10);
  plVar22 = (long *)*plVar20;
  if (plVar22 == (long *)0x0) {
LAB_71016081c4:
    local_178 = (uint *)&SUB_ffffff00ffffff;
    uVar26 = param_2;
LAB_71016081cc:
    FUN_710353f120((uint *)&local_178,uVar26,param_3,param_4,(long ****)param_5,param_6,param_7,
                   param_8);
    uVar26 = extraout_x1;
LAB_71016081d4:
    plVar22 = (long *)(*(long *)(param_1 + 0x10) + 0x10);
    plVar28 = (long *)*plVar22;
    plVar20 = plVar22;
    if (plVar28 == (long *)0x0) {
LAB_7101608214:
      local_178 = (uint *)&SUB_ffffff00ffffff;
    }
    else {
      do {
        if ((ulong)plVar28[4] >= 0xa0000) {
          plVar20 = plVar28;
        }
        plVar28 = (long *)plVar28[(ulong)plVar28[4] < 0xa0000];
      } while (plVar28 != (long *)0x0);
      if ((plVar20 == plVar22) || (0xa0000 < (ulong)plVar20[4])) goto LAB_7101608214;
      uVar33 = *(uint *)((long)plVar20 + 0x2c);
      uVar26 = (ulong)uVar33;
      local_178 = (uint *)CONCAT44(local_178._4_4_,uVar33);
      if (uVar33 != 0xffffff) {
        FUN_7103540a00(DAT_7105332f20,uVar33);
        uVar26 = extraout_x1_11;
      }
      lVar27 = DAT_7105332f20;
      uVar33 = *(uint *)(plVar20 + 6);
      uVar25 = (ulong)uVar33;
      local_178 = (uint *)CONCAT44(uVar33,(uint)local_178);
      if (uVar33 != 0xffffff) {
        if (uVar33 < *(uint *)(DAT_7105332f20 + 0x48)) {
          std::recursive_mutex::lock();
          lVar32 = *(long *)(lVar27 + 0x40);
          if ((*(byte *)(lVar32 + uVar25 * 0x48 + 8) & 1) == 0) {
            std::recursive_mutex::unlock();
            FUN_7103540d50(lVar27,uVar33,param_3,param_4,(long ****)param_5,param_6,param_7,param_8)
            ;
            uVar26 = extraout_x1_12;
          }
          else {
            FUN_71035432d0((int *)(lVar32 + uVar25 * 0x48));
            std::recursive_mutex::unlock();
            uVar26 = extraout_x1_21;
          }
          if (uVar33 == 0xffffff) goto LAB_710160821c;
        }
        lVar27 = DAT_7105332f20;
        if (uVar33 < *(uint *)(DAT_7105332f20 + 0x48)) {
          std::recursive_mutex::lock();
          lVar32 = *(long *)(lVar27 + 0x40);
          if ((*(byte *)(lVar32 + uVar25 * 0x48 + 8) & 1) == 0) {
            std::recursive_mutex::unlock();
            FUN_7103540d50(lVar27,uVar33,param_3,param_4,(long ****)param_5,param_6,param_7,param_8)
            ;
            uVar26 = extraout_x1_22;
          }
          else {
            FUN_71035432d0((int *)(lVar32 + uVar25 * 0x48));
            std::recursive_mutex::unlock();
            uVar26 = extraout_x1_24;
          }
        }
        auVar35 = FUN_710353f120((uint *)&local_178,uVar26,param_3,param_4,(long ****)param_5,
                                 param_6,param_7,param_8);
        lVar27 = DAT_7105332f20;
        if (uVar33 != 0xffffff) {
          if (uVar33 < *(uint *)(DAT_7105332f20 + 0x48)) {
            std::recursive_mutex::lock();
            lVar32 = *(long *)(lVar27 + 0x40);
            if ((*(byte *)(lVar32 + uVar25 * 0x48 + 8) & 1) == 0) {
              std::recursive_mutex::unlock();
              puVar15 = FUN_7103540d50(lVar27,uVar33,param_3,param_4,(long ****)param_5,param_6,
                                       param_7,param_8);
              auVar35._8_8_ = extraout_x1_25;
              auVar35._0_8_ = puVar15;
            }
            else {
              FUN_71035432d0((int *)(lVar32 + uVar25 * 0x48));
              auVar35 = std::recursive_mutex::unlock();
            }
          }
          lVar27 = DAT_7105332f20;
          if (uVar33 < *(uint *)(DAT_7105332f20 + 0x48)) {
            std::recursive_mutex::lock();
            lVar32 = *(long *)(lVar27 + 0x40);
            if ((*(byte *)(lVar32 + uVar25 * 0x48 + 8) & 1) != 0) {
              FUN_710353f5a0(lVar27,(int *)(lVar32 + uVar25 * 0x48),(long ****)param_3,param_4,
                             (long ****)param_5,param_6,param_7,param_8);
            }
            auVar35 = std::recursive_mutex::unlock();
          }
        }
        goto LAB_7101608fc0;
      }
    }
LAB_710160821c:
    auVar35 = FUN_710353f120((uint *)&local_178,uVar26,param_3,param_4,(long ****)param_5,param_6,
                             param_7,param_8);
    uVar26 = auVar35._8_8_;
    cVar5 = *(char *)(param_1 + 0x49);
joined_r0x007101608228:
    if (cVar5 == '\0') goto LAB_7101607ff4;
LAB_7101608050:
    uVar26 = auVar35._0_8_;
    if (*(char *)(param_1 + 0x4a) != '\0') goto LAB_71016080c8;
LAB_7101608058:
    uVar25 = auVar35._8_8_;
    uVar26 = auVar35._0_8_;
    if (*(int *)(param_1 + 0xc) == 0x681) goto LAB_71016080c8;
    plVar20 = (long *)(*(long *)(param_1 + 0x10) + 0x10);
    plVar22 = (long *)*plVar20;
    if (plVar22 == (long *)0x0) {
LAB_71016080b0:
      local_178 = (uint *)&SUB_ffffff00ffffff;
LAB_71016080b8:
      local_190 = (long ********)CONCAT44(local_190._4_4_,0xffffff);
LAB_71016080c0:
      uVar26 = FUN_710353f120((uint *)&local_178,uVar25,param_3,param_4,(long ****)param_5,param_6,
                              param_7,param_8);
      goto LAB_71016080c8;
    }
    uVar26 = (ulong)(int)(*(int *)(param_1 + 4) << 0x10 | 3);
    plVar28 = plVar20;
    do {
      if ((ulong)plVar22[4] >= uVar26) {
        plVar28 = plVar22;
      }
      plVar22 = (long *)plVar22[(ulong)plVar22[4] < uVar26];
    } while (plVar22 != (long *)0x0);
    if ((plVar28 == plVar20) || (uVar26 < (ulong)plVar28[4])) goto LAB_71016080b0;
    uVar33 = *(uint *)((long)plVar28 + 0x2c);
    uVar25 = (ulong)uVar33;
    local_178 = (uint *)CONCAT44(local_178._4_4_,uVar33);
    if (uVar33 != 0xffffff) {
      FUN_7103540a00(DAT_7105332f20,uVar33);
      uVar25 = extraout_x1_07;
    }
    lVar27 = DAT_7105332f20;
    uVar33 = *(uint *)(plVar28 + 6);
    uVar31 = (ulong)uVar33;
    local_178 = (uint *)CONCAT44(uVar33,(uint)local_178);
    if (uVar33 == 0xffffff) goto LAB_71016080b8;
    if (uVar33 < *(uint *)(DAT_7105332f20 + 0x48)) {
      std::recursive_mutex::lock();
      lVar32 = *(long *)(lVar27 + 0x40);
      if ((*(byte *)(lVar32 + uVar31 * 0x48 + 8) & 1) == 0) {
        std::recursive_mutex::unlock();
        FUN_7103540d50(lVar27,uVar33,param_3,param_4,(long ****)param_5,param_6,param_7,param_8);
        uVar25 = extraout_x1_08;
      }
      else {
        FUN_71035432d0((int *)(lVar32 + uVar31 * 0x48));
        std::recursive_mutex::unlock();
        uVar25 = extraout_x1_16;
      }
      local_190 = (long ********)CONCAT44(local_190._4_4_,uVar33);
      if (uVar33 != 0xffffff) goto LAB_7101608d1c;
      goto LAB_71016080c0;
    }
    local_190 = (long ********)CONCAT44(local_190._4_4_,uVar33);
LAB_7101608d1c:
    lVar27 = DAT_7105332f20;
    if (uVar33 < *(uint *)(DAT_7105332f20 + 0x48)) {
      std::recursive_mutex::lock();
      lVar32 = *(long *)(lVar27 + 0x40);
      if ((*(byte *)(lVar32 + uVar31 * 0x48 + 8) & 1) == 0) {
        std::recursive_mutex::unlock();
        FUN_7103540d50(lVar27,uVar33,param_3,param_4,(long ****)param_5,param_6,param_7,param_8);
        uVar25 = extraout_x1_17;
      }
      else {
        FUN_71035432d0((int *)(lVar32 + uVar31 * 0x48));
        std::recursive_mutex::unlock();
        uVar25 = extraout_x1_18;
      }
    }
    uVar26 = FUN_710353f120((uint *)&local_178,uVar25,param_3,param_4,(long ****)param_5,param_6,
                            param_7,param_8);
    if (uVar33 == 0xffffff) goto LAB_71016080c8;
    ppppppppplVar17 = (long *********)&local_190;
    uVar14 = FUN_7103563a20(*lib::Singleton<lib::EffectManager>::instance_,*(int *)(param_1 + 0xc),
                            ppppppppplVar17,param_4,(long ****)param_5,param_6,param_7,param_8);
    uVar26 = (ulong)uVar14;
    *(undefined1 *)(param_1 + 0x4a) = 1;
    lVar27 = DAT_7105332f20;
    if (uVar33 < *(uint *)(DAT_7105332f20 + 0x48)) {
      std::recursive_mutex::lock();
      lVar32 = *(long *)(lVar27 + 0x40);
      if ((*(byte *)(lVar32 + uVar31 * 0x48 + 8) & 1) != 0) {
        FUN_710353f5a0(lVar27,(int *)(lVar32 + uVar31 * 0x48),(long ****)ppppppppplVar17,param_4,
                       (long ****)param_5,param_6,param_7,param_8);
      }
      uVar26 = std::recursive_mutex::unlock();
    }
    local_190 = (long ********)CONCAT44(local_190._4_4_,0xffffff);
    cVar5 = *(char *)(param_1 + 0x4b);
  }
  else {
    uVar26 = (ulong)(*(int *)(param_1 + 4) << 0x10);
    plVar28 = plVar20;
    do {
      if ((ulong)plVar22[4] >= uVar26) {
        plVar28 = plVar22;
      }
      plVar22 = (long *)plVar22[(ulong)plVar22[4] < uVar26];
    } while (plVar22 != (long *)0x0);
    if ((plVar28 == plVar20) || (uVar26 < (ulong)plVar28[4])) goto LAB_71016081c4;
    uVar33 = *(uint *)((long)plVar28 + 0x2c);
    uVar26 = (ulong)uVar33;
    local_178 = (uint *)CONCAT44(local_178._4_4_,uVar33);
    if (uVar33 != 0xffffff) {
      FUN_7103540a00(DAT_7105332f20,uVar33);
      uVar26 = extraout_x1_09;
    }
    lVar27 = DAT_7105332f20;
    uVar33 = *(uint *)(plVar28 + 6);
    uVar25 = (ulong)uVar33;
    local_178 = (uint *)CONCAT44(uVar33,(uint)local_178);
    if (uVar33 == 0xffffff) goto LAB_71016081cc;
    if (uVar33 < *(uint *)(DAT_7105332f20 + 0x48)) {
      std::recursive_mutex::lock();
      lVar32 = *(long *)(lVar27 + 0x40);
      if ((*(byte *)(lVar32 + uVar25 * 0x48 + 8) & 1) == 0) {
        std::recursive_mutex::unlock();
        FUN_7103540d50(lVar27,uVar33,param_3,param_4,(long ****)param_5,param_6,param_7,param_8);
        uVar26 = extraout_x1_10;
      }
      else {
        FUN_71035432d0((int *)(lVar32 + uVar25 * 0x48));
        std::recursive_mutex::unlock();
        uVar26 = extraout_x1_19;
      }
      if (uVar33 == 0xffffff) goto LAB_71016081cc;
    }
    lVar27 = DAT_7105332f20;
    if (uVar33 < *(uint *)(DAT_7105332f20 + 0x48)) {
      std::recursive_mutex::lock();
      lVar32 = *(long *)(lVar27 + 0x40);
      if ((*(byte *)(lVar32 + uVar25 * 0x48 + 8) & 1) == 0) {
        std::recursive_mutex::unlock();
        FUN_7103540d50(lVar27,uVar33,param_3,param_4,(long ****)param_5,param_6,param_7,param_8);
        uVar26 = extraout_x1_20;
      }
      else {
        FUN_71035432d0((int *)(lVar32 + uVar25 * 0x48));
        std::recursive_mutex::unlock();
        uVar26 = extraout_x1_23;
      }
    }
    auVar35 = FUN_710353f120((uint *)&local_178,uVar26,param_3,param_4,(long ****)param_5,param_6,
                             param_7,param_8);
    uVar26 = auVar35._8_8_;
    if (uVar33 == 0xffffff) goto LAB_71016081d4;
LAB_7101608fc0:
    uVar33 = (uint)uVar25;
    if (uVar33 != 0xffffff) {
      if (*(int *)(param_1 + 8) < 1) {
        *(undefined1 *)(param_1 + 0x48) = 1;
      }
      else {
        uVar14 = 0;
        do {
          local_78 = 0;
          local_178 = (uint *)((ulong)local_178 & 0xffffffffffffff00);
          FUN_710147f330((long)&local_178,"c%02d",(ulong)uVar14,param_4,param_5,param_6,param_7,
                         param_8);
          uVar29 = (uint)(byte)local_178;
          if ((byte)local_178 == 0) {
            uVar31 = 0;
            uVar26 = 0;
          }
          else {
            uVar26 = 0;
            uVar21 = 0xffffffff;
            pbVar24 = (byte *)((ulong)&local_178 | 1);
            do {
              uVar4 = uVar29 + 0x20;
              if (0x19 < uVar29 - 0x41) {
                uVar4 = uVar29;
              }
              uVar21 = (&DAT_7104754084)[(uVar4 ^ uVar21) & 0xff] ^ uVar21 >> 8;
              uVar29 = (uint)*pbVar24;
              uVar26 = uVar26 + 0x100000000;
              pbVar24 = pbVar24 + 1;
            } while (uVar29 != 0);
            uVar31 = (ulong)~uVar21;
            uVar26 = uVar26 & 0xff00000000;
          }
          param_3 = (long *********)(uVar26 | uVar31);
          FUN_710353e380(local_180,uVar33,(long ****)param_3,param_4,(long ****)param_5,param_6,
                         param_7,param_8);
          uVar26 = (ulong)uVar14;
          pcVar19 = (code *)param_5;
          if (local_180[0] == 0xffffff) {
            param_3 = (long *********)0x34c4faa34;
            FUN_710353e380((uint *)&local_190,uVar33,(long ****)0x34c4faa34,param_4,
                           (long ****)param_5,param_6,param_7,param_8);
            uVar26 = 0;
            local_180[0] = (uint)local_190;
            pcVar19 = (code *)param_5;
          }
          plVar20 = DAT_71052c41e8;
          iVar3 = *(int *)(param_1 + 4);
          if (iVar3 < 0) {
            plVar20 = (long *)0x0;
            local_190 = (long ********)0x0;
            local_188 = (long *)0x0;
LAB_71016091a0:
            pcVar18 = "model.numdlb";
            FUN_710353e1d0((uint *)&local_1a0,local_180,(byte *)"model.numdlb");
            uVar29 = (uint)local_1a0;
            uVar26 = (ulong)local_1a0 & 0xffffffff;
            if ((uint)local_1a0 != 0xffffff) {
              FUN_7103540b10(DAT_7105332f20,(uint)local_1a0,(long *********)pcVar18,param_4,
                             (long ****)pcVar19,param_6,param_7,param_8);
            }
            if ((uVar29 == 0xffffff) ||
               (lVar27 = **(long **)(DAT_7105332f20 + 0x78),
               *(uint *)(*(long *)(lVar27 + 0x40) + 4) <= uVar29)) {
              local_1a0 = (long ********)0x0;
            }
            else {
              local_1a0 = (long ********)
                          (*(ulong *)(*(long *)(lVar27 + 0x60) + uVar26 * 0x20) & 0xffffffffff);
            }
            lVar27 = (*(long **)(DAT_7105332f20 + 0x78))[1];
            param_4 = (byte ****)&DAT_00000008;
            pcVar19 = FUN_7103542240;
            puVar16 = bsearch(&local_1a0,*(void **)(lVar27 + 0x20),
                              (ulong)*(uint *)(*(long *)(lVar27 + 8) + 8),8,FUN_7103542240);
            local_70[0] = 0xffffff;
            if (puVar16 != (undefined8 *)0x0) {
              uVar29 = (uint)((ulong)*puVar16 >> 0x20);
              uVar21 = uVar29 >> 8;
              if ((uVar21 != 0xffffff) &&
                 (uVar4 = *(uint *)(*(long *)(lVar27 + 8) + 4), local_70[0] = uVar29 >> 8,
                 uVar4 < uVar21 || uVar4 == local_70[0])) {
                local_70[0] = 0xffffff;
              }
            }
            param_3 = (long *********)0x2;
            auVar35 = FUN_71035c2890(&local_1a0,local_70,(long *********)0x2,param_4,
                                     (long ****)pcVar19,param_6,param_7,param_8);
            local_188 = local_198;
            local_190 = local_1a0;
            local_1a0 = (long ********)0x0;
            local_198 = (long *)0x0;
            if (plVar20 != (long *)0x0) {
              plVar22 = plVar20 + 1;
              do {
                lVar27 = *plVar22;
                cVar5 = '\x01';
                bVar13 = (bool)ExclusiveMonitorPass(plVar22,0x10);
                if (bVar13) {
                  *plVar22 = lVar27 + -1;
                  cVar5 = ExclusiveMonitorsStatus();
                }
              } while (cVar5 != '\0');
              if (lVar27 == 0) {
                (**(code **)(*plVar20 + 0x10))(plVar20);
                auVar35 = std::__shared_weak_count::__release_weak();
              }
            }
            if (local_198 != (long *)0x0) {
              plVar20 = local_198 + 1;
              do {
                lVar27 = *plVar20;
                cVar5 = '\x01';
                bVar13 = (bool)ExclusiveMonitorPass(plVar20,0x10);
                if (bVar13) {
                  *plVar20 = lVar27 + -1;
                  cVar5 = ExclusiveMonitorsStatus();
                }
              } while (cVar5 != '\0');
              if (lVar27 == 0) {
                (**(code **)(*local_198 + 0x10))(local_198);
                auVar35 = std::__shared_weak_count::__release_weak();
              }
            }
          }
          else {
            if (*(int *)(*DAT_71052c41e8 + (long)iVar3 * 0x80 + 0x5160) != 0) {
              local_190 = (long ********)0x0;
              local_188 = (long *)0x0;
LAB_7101609198:
              plVar20 = (long *)0x0;
              goto LAB_71016091a0;
            }
            std::mutex::lock();
            lVar27 = *plVar20 + (long)iVar3 * 0x18;
            lVar32 = *(long *)(lVar27 + 0x12950);
            if ((ulong)(*(long *)(lVar27 + 0x12958) - lVar32 >> 4) <= uVar26) {
              local_190 = (long ********)0x0;
              local_188 = (long *)0x0;
              std::mutex::unlock();
              goto LAB_7101609198;
            }
            puVar23 = (ulong *)(lVar32 + uVar26 * 0x10);
            pppppppplVar34 = (long ********)*puVar23;
            plVar20 = (long *)puVar23[1];
            if (plVar20 != (long *)0x0) {
              plVar22 = plVar20 + 1;
              do {
                cVar5 = '\x01';
                bVar13 = (bool)ExclusiveMonitorPass(plVar22,0x10);
                if (bVar13) {
                  *plVar22 = *plVar22 + 1;
                  cVar5 = ExclusiveMonitorsStatus();
                }
              } while (cVar5 != '\0');
            }
            local_190 = pppppppplVar34;
            local_188 = plVar20;
            auVar35 = std::mutex::unlock();
            if (pppppppplVar34 == (long ********)0x0) goto LAB_71016091a0;
          }
          puVar23 = *(ulong **)(param_1 + 0x58);
          if (puVar23 == *(ulong **)(param_1 + 0x60)) {
            auVar35 = FUN_71016095f0((long *)(param_1 + 0x50),&local_190,(long ****)param_3,param_4,
                                     (long ****)pcVar19,param_6,param_7,param_8);
          }
          else {
            *puVar23 = (ulong)local_190;
            puVar23[1] = (ulong)local_188;
            if (local_188 != (long *)0x0) {
              plVar20 = local_188 + 1;
              do {
                cVar5 = '\x01';
                bVar13 = (bool)ExclusiveMonitorPass(plVar20,0x10);
                if (bVar13) {
                  *plVar20 = *plVar20 + 1;
                  cVar5 = ExclusiveMonitorsStatus();
                }
              } while (cVar5 != '\0');
            }
            *(long *)(param_1 + 0x58) = *(long *)(param_1 + 0x58) + 0x10;
          }
          uVar29 = local_180[0];
          if (*(uint **)(param_1 + 0x20) == *(uint **)(param_1 + 0x28)) {
            auVar35 = FUN_7101609820((long *)(param_1 + 0x18),local_180,param_3,param_4,
                                     (long ****)pcVar19,param_6,param_7,param_8);
            param_5 = pcVar19;
            pppppppplVar34 = local_1b0;
            plVar20 = local_1a8;
            local_1b0 = local_190;
            local_1a8 = local_188;
          }
          else {
            uVar26 = (ulong)local_180[0];
            **(uint **)(param_1 + 0x20) = local_180[0];
            lVar27 = DAT_7105332f20;
            if ((local_180[0] != 0xffffff) && (local_180[0] < *(uint *)(DAT_7105332f20 + 0x48))) {
              std::recursive_mutex::lock();
              lVar32 = *(long *)(lVar27 + 0x40);
              if ((*(byte *)(lVar32 + uVar26 * 0x48 + 8) & 1) == 0) {
                std::recursive_mutex::unlock();
                puVar15 = FUN_7103540d50(lVar27,uVar29,param_3,param_4,(long ****)pcVar19,param_6,
                                         param_7,param_8);
                auVar35._8_8_ = extraout_x1_26;
                auVar35._0_8_ = puVar15;
              }
              else {
                FUN_71035432d0((int *)(lVar32 + uVar26 * 0x48));
                auVar35 = std::recursive_mutex::unlock();
              }
            }
            *(long *)(param_1 + 0x20) = *(long *)(param_1 + 0x20) + 4;
            param_5 = pcVar19;
            pppppppplVar34 = local_1b0;
            plVar20 = local_1a8;
            local_1b0 = local_190;
            local_1a8 = local_188;
          }
          local_190 = local_1b0;
          local_188 = local_1a8;
          if ((uVar14 == 0) && ((param_2 & 1) != 0)) {
            if (local_1a8 != (long *)0x0) {
              plVar20 = local_1a8 + 1;
              do {
                cVar5 = '\x01';
                bVar13 = (bool)ExclusiveMonitorPass(plVar20,0x10);
                if (bVar13) {
                  *plVar20 = *plVar20 + 1;
                  cVar5 = ExclusiveMonitorsStatus();
                }
              } while (cVar5 != '\0');
            }
            auVar35 = FUN_71035c2e50(&local_1a0,&local_1b0,(long ****)param_3,param_4,
                                     (long ****)param_5,param_6,param_7,param_8);
            plVar20 = local_198;
            pppppppplVar34 = local_1a0;
            local_1a0 = (long ********)0x0;
            local_198 = (long *)0x0;
            plVar22 = *(long **)(param_1 + 0x70);
            *(long *********)(param_1 + 0x68) = pppppppplVar34;
            *(long **)(param_1 + 0x70) = plVar20;
            if (plVar22 != (long *)0x0) {
              plVar20 = plVar22 + 1;
              do {
                lVar27 = *plVar20;
                cVar5 = '\x01';
                bVar13 = (bool)ExclusiveMonitorPass(plVar20,0x10);
                if (bVar13) {
                  *plVar20 = lVar27 + -1;
                  cVar5 = ExclusiveMonitorsStatus();
                }
              } while (cVar5 != '\0');
              if (lVar27 == 0) {
                (**(code **)(*plVar22 + 0x10))(plVar22);
                auVar35 = std::__shared_weak_count::__release_weak();
              }
            }
            if (local_198 != (long *)0x0) {
              plVar20 = local_198 + 1;
              do {
                lVar27 = *plVar20;
                cVar5 = '\x01';
                bVar13 = (bool)ExclusiveMonitorPass(plVar20,0x10);
                if (bVar13) {
                  *plVar20 = lVar27 + -1;
                  cVar5 = ExclusiveMonitorsStatus();
                }
              } while (cVar5 != '\0');
              if (lVar27 == 0) {
                (**(code **)(*local_198 + 0x10))(local_198);
                auVar35 = std::__shared_weak_count::__release_weak();
              }
            }
            pppppppplVar34 = local_1b0;
            plVar20 = local_1a8;
            if (local_1a8 != (long *)0x0) {
              plVar22 = local_1a8 + 1;
              do {
                lVar27 = *plVar22;
                cVar5 = '\x01';
                bVar13 = (bool)ExclusiveMonitorPass(plVar22,0x10);
                if (bVar13) {
                  *plVar22 = lVar27 + -1;
                  cVar5 = ExclusiveMonitorsStatus();
                }
              } while (cVar5 != '\0');
              if (lVar27 == 0) {
                (**(code **)(*local_1a8 + 0x10))(local_1a8);
                auVar35 = std::__shared_weak_count::__release_weak();
                pppppppplVar34 = local_1b0;
                plVar20 = local_1a8;
              }
            }
          }
          local_1a8 = plVar20;
          local_1b0 = pppppppplVar34;
          if (local_188 != (long *)0x0) {
            plVar20 = local_188 + 1;
            do {
              lVar27 = *plVar20;
              cVar5 = '\x01';
              bVar13 = (bool)ExclusiveMonitorPass(plVar20,0x10);
              if (bVar13) {
                *plVar20 = lVar27 + -1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            if (lVar27 == 0) {
              (**(code **)(*local_188 + 0x10))(local_188);
              auVar35 = std::__shared_weak_count::__release_weak();
            }
          }
          lVar27 = DAT_7105332f20;
          uVar26 = (ulong)local_180[0];
          if (local_180[0] != 0xffffff) {
            if (local_180[0] < *(uint *)(DAT_7105332f20 + 0x48)) {
              std::recursive_mutex::lock();
              lVar32 = *(long *)(lVar27 + 0x40);
              if ((*(byte *)(lVar32 + uVar26 * 0x48 + 8) & 1) != 0) {
                FUN_710353f5a0(lVar27,(int *)(lVar32 + uVar26 * 0x48),(long ****)param_3,param_4,
                               (long ****)param_5,param_6,param_7,param_8);
              }
              auVar35 = std::recursive_mutex::unlock();
            }
            local_180[0] = 0xffffff;
          }
          uVar14 = uVar14 + 1;
        } while ((int)uVar14 < *(int *)(param_1 + 8));
        *(undefined1 *)(param_1 + 0x48) = 1;
        if (uVar33 == 0xffffff) goto LAB_7101607fec;
      }
      lVar27 = DAT_7105332f20;
      if (uVar33 < *(uint *)(DAT_7105332f20 + 0x48)) {
        std::recursive_mutex::lock();
        lVar32 = *(long *)(lVar27 + 0x40);
        if ((*(byte *)(lVar32 + uVar25 * 0x48 + 8) & 1) != 0) {
          FUN_710353f5a0(lVar27,(int *)(lVar32 + uVar25 * 0x48),(long ****)param_3,param_4,
                         (long ****)param_5,param_6,param_7,param_8);
        }
        auVar35 = std::recursive_mutex::unlock();
        uVar26 = auVar35._8_8_;
        cVar5 = *(char *)(param_1 + 0x49);
        goto joined_r0x007101608228;
      }
    }
LAB_7101607fec:
    uVar26 = auVar35._8_8_;
    if (*(char *)(param_1 + 0x49) != '\0') goto LAB_7101608050;
LAB_7101607ff4:
    plVar20 = (long *)(*(long *)(param_1 + 0x10) + 0x10);
    plVar22 = (long *)*plVar20;
    if (plVar22 == (long *)0x0) {
LAB_7101608040:
      local_178 = (uint *)&SUB_ffffff00ffffff;
LAB_7101608048:
      auVar35 = FUN_710353f120((uint *)&local_178,uVar26,param_3,param_4,(long ****)param_5,param_6,
                               param_7,param_8);
      goto LAB_7101608050;
    }
    uVar25 = (ulong)(int)(*(int *)(param_1 + 4) << 0x10 | 2);
    plVar28 = plVar20;
    do {
      if ((ulong)plVar22[4] >= uVar25) {
        plVar28 = plVar22;
      }
      plVar22 = (long *)plVar22[(ulong)plVar22[4] < uVar25];
    } while (plVar22 != (long *)0x0);
    if ((plVar28 == plVar20) || (uVar25 < (ulong)plVar28[4])) goto LAB_7101608040;
    uVar33 = *(uint *)((long)plVar28 + 0x2c);
    uVar26 = (ulong)uVar33;
    local_178 = (uint *)CONCAT44(local_178._4_4_,uVar33);
    if (uVar33 != 0xffffff) {
      FUN_7103540a00(DAT_7105332f20,uVar33);
      uVar26 = extraout_x1_00;
    }
    lVar27 = DAT_7105332f20;
    uVar33 = *(uint *)(plVar28 + 6);
    uVar25 = (ulong)uVar33;
    local_178 = (uint *)CONCAT44(uVar33,(uint)local_178);
    if (uVar33 == 0xffffff) goto LAB_7101608048;
    if (uVar33 < *(uint *)(DAT_7105332f20 + 0x48)) {
      std::recursive_mutex::lock();
      lVar32 = *(long *)(lVar27 + 0x40);
      if ((*(byte *)(lVar32 + uVar25 * 0x48 + 8) & 1) == 0) {
        std::recursive_mutex::unlock();
        FUN_7103540d50(lVar27,uVar33,param_3,param_4,(long ****)param_5,param_6,param_7,param_8);
        uVar26 = extraout_x1_01;
      }
      else {
        FUN_71035432d0((int *)(lVar32 + uVar25 * 0x48));
        std::recursive_mutex::unlock();
        uVar26 = extraout_x1_13;
      }
      if (uVar33 == 0xffffff) goto LAB_7101608048;
    }
    lVar27 = DAT_7105332f20;
    if (uVar33 < *(uint *)(DAT_7105332f20 + 0x48)) {
      std::recursive_mutex::lock();
      lVar32 = *(long *)(lVar27 + 0x40);
      if ((*(byte *)(lVar32 + uVar25 * 0x48 + 8) & 1) == 0) {
        std::recursive_mutex::unlock();
        FUN_7103540d50(lVar27,uVar33,param_3,param_4,(long ****)param_5,param_6,param_7,param_8);
        uVar26 = extraout_x1_14;
      }
      else {
        FUN_71035432d0((int *)(lVar32 + uVar25 * 0x48));
        std::recursive_mutex::unlock();
        uVar26 = extraout_x1_15;
      }
    }
    auVar35 = FUN_710353f120((uint *)&local_178,uVar26,param_3,param_4,(long ****)param_5,param_6,
                             param_7,param_8);
    if (uVar33 == 0xffffff) goto LAB_7101608050;
    if (*(int *)(param_1 + 8) < 1) {
      *(undefined1 *)(param_1 + 0x49) = 1;
    }
    else {
      uVar14 = 0;
      do {
        local_78 = 0;
        local_178 = (uint *)((ulong)local_178 & 0xffffffffffffff00);
        FUN_710147f330((long)&local_178,"c%02d",(ulong)uVar14,param_4,param_5,param_6,param_7,
                       param_8);
        uVar29 = (uint)(byte)local_178;
        if ((byte)local_178 == 0) {
          uVar31 = 0;
          uVar26 = 0;
        }
        else {
          uVar26 = 0;
          uVar21 = 0xffffffff;
          pbVar24 = (byte *)((ulong)&local_178 | 1);
          do {
            uVar4 = uVar29 + 0x20;
            if (0x19 < uVar29 - 0x41) {
              uVar4 = uVar29;
            }
            uVar21 = (&DAT_7104754084)[(uVar4 ^ uVar21) & 0xff] ^ uVar21 >> 8;
            uVar29 = (uint)*pbVar24;
            uVar26 = uVar26 + 0x100000000;
            pbVar24 = pbVar24 + 1;
          } while (uVar29 != 0);
          uVar31 = (ulong)~uVar21;
          uVar26 = uVar26 & 0xff00000000;
        }
        param_3 = (long *********)(uVar26 | uVar31);
        auVar35 = FUN_710353e380((uint *)&local_190,uVar33,(long ****)param_3,param_4,
                                 (long ****)param_5,param_6,param_7,param_8);
        bVar13 = (uint)local_190 == 0xffffff;
        uVar29 = (uint)local_190;
        if (bVar13) {
          param_3 = (long *********)0x34c4faa34;
          auVar35 = FUN_710353e380((uint *)&local_1a0,uVar33,(long ****)0x34c4faa34,param_4,
                                   (long ****)param_5,param_6,param_7,param_8);
          bVar13 = (uint)local_1a0 == 0xffffff;
          local_190 = (long ********)CONCAT44(local_190._4_4_,(uint)local_1a0);
          uVar29 = (uint)local_1a0;
          if (!bVar13) goto LAB_7101608ac4;
LAB_7101608ba4:
          uVar21 = 0xffffff;
          local_1a0 = (long ********)CONCAT44(local_1a0._4_4_,0xffffff);
        }
        else {
LAB_7101608ac4:
          lVar27 = DAT_7105332f20;
          if (uVar29 < *(uint *)(DAT_7105332f20 + 0x48)) {
            std::recursive_mutex::lock();
            lVar27 = *(long *)(lVar27 + 0x40);
            lVar32 = lVar27 + (ulong)uVar29 * 0x48;
            bVar6 = *(byte *)(lVar32 + 8);
            auVar35 = std::recursive_mutex::unlock();
            auVar8._8_8_ = auVar35._8_8_;
            auVar8._0_8_ = DAT_7105332f20;
            if (((bVar6 & 1) != 0) && (lVar32 != 0)) {
              lVar27 = lVar27 + (ulong)uVar29 * 0x48;
              for (puVar15 = *(uint **)(lVar27 + 0x10); puVar15 != *(uint **)(lVar27 + 0x18);
                  puVar15 = puVar15 + 1) {
                uVar21 = *puVar15;
                if (((uVar21 != 0xffffff) &&
                    (uVar21 < *(uint *)(*(long *)(**(long **)(DAT_7105332f20 + 0x78) + 0x40) + 4)))
                   && (*(long *)(*(long *)(**(long **)(DAT_7105332f20 + 0x78) + 0x60) +
                                 (ulong)uVar21 * 0x20 + 0x18) == 0xfd0f04996)) {
                  local_1a0 = (long ********)CONCAT44(local_1a0._4_4_,uVar21);
                  auVar35 = FUN_7103540a00(DAT_7105332f20,uVar21);
                  goto LAB_7101608bac;
                }
                auVar35 = auVar8;
              }
              goto LAB_7101608ba4;
            }
          }
          uVar21 = 0xffffff;
          local_1a0 = (long ********)CONCAT44(local_1a0._4_4_,0xffffff);
        }
LAB_7101608bac:
        if (*(uint **)(param_1 + 0x38) == *(uint **)(param_1 + 0x40)) {
          auVar35 = FUN_7101609af0((long *)(param_1 + 0x30),(uint *)&local_1a0,param_3,param_4,
                                   (long ****)param_5,param_6,param_7,param_8);
        }
        else {
          **(uint **)(param_1 + 0x38) = uVar21;
          if (uVar21 != 0xffffff) {
            auVar35 = FUN_7103540a00(DAT_7105332f20,uVar21);
          }
          *(long *)(param_1 + 0x38) = *(long *)(param_1 + 0x38) + 4;
        }
        if (uVar21 != 0xffffff) {
          auVar35 = FUN_7103540b10(DAT_7105332f20,uVar21,param_3,param_4,(long ****)param_5,param_6,
                                   param_7,param_8);
          local_1a0 = (long ********)CONCAT44(local_1a0._4_4_,0xffffff);
        }
        lVar27 = DAT_7105332f20;
        if (!bVar13) {
          if (uVar29 < *(uint *)(DAT_7105332f20 + 0x48)) {
            std::recursive_mutex::lock();
            lVar32 = *(long *)(lVar27 + 0x40);
            if ((*(byte *)(lVar32 + (ulong)uVar29 * 0x48 + 8) & 1) != 0) {
              FUN_710353f5a0(lVar27,(int *)(lVar32 + (ulong)uVar29 * 0x48),(long ****)param_3,
                             param_4,(long ****)param_5,param_6,param_7,param_8);
            }
            auVar35 = std::recursive_mutex::unlock();
          }
          local_190 = (long ********)CONCAT44(local_190._4_4_,0xffffff);
        }
        uVar14 = uVar14 + 1;
      } while ((int)uVar14 < *(int *)(param_1 + 8));
      *(undefined1 *)(param_1 + 0x49) = 1;
    }
    lVar27 = DAT_7105332f20;
    if (*(uint *)(DAT_7105332f20 + 0x48) <= uVar33) goto LAB_7101608050;
    std::recursive_mutex::lock();
    lVar32 = *(long *)(lVar27 + 0x40);
    if ((*(byte *)(lVar32 + uVar25 * 0x48 + 8) & 1) != 0) {
      FUN_710353f5a0(lVar27,(int *)(lVar32 + uVar25 * 0x48),(long ****)param_3,param_4,
                     (long ****)param_5,param_6,param_7,param_8);
    }
    auVar35 = std::recursive_mutex::unlock();
    uVar26 = auVar35._0_8_;
    if (*(char *)(param_1 + 0x4a) == '\0') goto LAB_7101608058;
LAB_71016080c8:
    cVar5 = *(char *)(param_1 + 0x4b);
  }
  if (cVar5 != '\0') {
    return uVar26;
  }
  iVar3 = *(int *)(param_1 + 4);
  lVar27 = 0;
  do {
    puVar23 = (ulong *)((long)&DAT_710453f7b8 + lVar27);
    if (*(int *)((long)&DAT_710453f7c0 + lVar27) == iVar3) {
LAB_71016082c0:
      uVar26 = *puVar23;
      goto LAB_71016082c4;
    }
    if (*(int *)((long)&DAT_710453f7d0 + lVar27) == iVar3) {
      puVar23 = (ulong *)((long)&DAT_710453f7c8 + lVar27);
      goto LAB_71016082c0;
    }
    if (*(int *)((long)&DAT_710453f7e0 + lVar27) == iVar3) {
      puVar23 = (ulong *)((long)&DAT_710453f7d8 + lVar27);
      goto LAB_71016082c0;
    }
    if (*(int *)((long)&DAT_710453f7f0 + lVar27) == iVar3) {
      puVar23 = (ulong *)((long)&DAT_710453f7e8 + lVar27);
      goto LAB_71016082c0;
    }
    lVar27 = lVar27 + 0x40;
  } while (lVar27 != 0x1b00);
  uVar25 = 0x19be28306a;
  if (iVar3 != 0x1b2) {
    uVar25 = 0xe573a5b8a;
  }
  uVar26 = 0x153ef2779e;
  if (iVar3 != 0x1b1) {
    uVar26 = uVar25;
  }
LAB_71016082c4:
  ppppppppplVar17 = (long *********)0x9846e2f98;
  FUN_710372c000((long *)*lib::Singleton<lib::LuaManager>::instance_,uVar26,(long ****)0x9846e2f98,
                 param_4,(long ****)param_5,param_6,param_7,param_8);
  lVar32 = *lib::Singleton<lib::LuaManager>::instance_;
  std::mutex::lock();
  for (lVar27 = *(long *)(lVar32 + 8); lVar32 != lVar27; lVar27 = *(long *)(lVar27 + 8)) {
    if (((*(ulong *)(*(long *)(lVar27 + 0x10) + 0x18) ^ uVar26) & 0xffffffffff) == 0) {
      lVar30 = 0;
      if (lVar32 != lVar27) {
        lVar30 = *(long *)(lVar27 + 0x10);
      }
      goto LAB_7101608334;
    }
  }
  lVar30 = 0;
LAB_7101608334:
  std::mutex::unlock();
  plVar20 = (long *)(*(long *)(param_1 + 0x10) + 0x10);
  plVar22 = (long *)*plVar20;
  if (plVar22 != (long *)0x0) {
    uVar26 = (ulong)(int)(*(int *)(param_1 + 4) << 0x10 | 8);
    plVar28 = plVar20;
    do {
      if ((ulong)plVar22[4] >= uVar26) {
        plVar28 = plVar22;
      }
      plVar22 = (long *)plVar22[(ulong)plVar22[4] < uVar26];
    } while (plVar22 != (long *)0x0);
    if ((plVar28 != plVar20) && ((ulong)plVar28[4] <= uVar26)) {
      uVar33 = *(uint *)((long)plVar28 + 0x2c);
      local_190 = (long ********)CONCAT44(local_190._4_4_,uVar33);
      if (uVar33 != 0xffffff) {
        FUN_7103540a00(DAT_7105332f20,uVar33);
      }
      lVar27 = DAT_7105332f20;
      uVar14 = *(uint *)(plVar28 + 6);
      local_190 = (long ********)CONCAT44(uVar14,(uint)local_190);
      uVar33 = 0xffffff;
      if ((uVar14 != 0xffffff) && (uVar33 = uVar14, uVar14 < *(uint *)(DAT_7105332f20 + 0x48))) {
        std::recursive_mutex::lock();
        lVar32 = *(long *)(lVar27 + 0x40);
        if ((*(byte *)(lVar32 + (ulong)uVar14 * 0x48 + 8) & 1) == 0) {
          std::recursive_mutex::unlock();
          FUN_7103540d50(lVar27,uVar14,ppppppppplVar17,param_4,(long ****)param_5,param_6,param_7,
                         param_8);
        }
        else {
          FUN_71035432d0((int *)(lVar32 + (ulong)uVar14 * 0x48));
          std::recursive_mutex::unlock();
        }
      }
      goto LAB_7101608394;
    }
  }
  local_190 = (long ********)&SUB_ffffff00ffffff;
  uVar33 = 0xffffff;
LAB_7101608394:
  FUN_710353db90(&local_178,uVar33,(long ****)ppppppppplVar17,param_4,(long ****)param_5,param_6,
                 param_7,param_8);
  puVar12 = local_170;
  uVar26 = extraout_x1_02;
  puVar11 = local_178;
  for (puVar15 = local_178; local_178 = puVar11, puVar15 != puVar12; puVar15 = puVar15 + 1) {
    bVar13 = FUN_710353d910(*puVar15,"lc");
    uVar26 = extraout_x1_03;
    if (bVar13) {
      ppppppppplVar17 = (long *********)0x1;
      FUN_710372ca20(lVar30,puVar15,1,param_4,param_5,param_6,param_7,param_8);
      uVar26 = extraout_x1_04;
    }
    puVar11 = local_178;
  }
  if (puVar11 != (uint *)0x0) {
    while (puVar15 = local_170, puVar15 != puVar11) {
      local_170 = puVar15 + -1;
      uVar33 = *local_170;
      uVar26 = (ulong)uVar33;
      if (uVar33 != 0xffffff) {
        FUN_7103540b10(DAT_7105332f20,uVar33,ppppppppplVar17,param_4,(long ****)param_5,param_6,
                       param_7,param_8);
        puVar15[-1] = 0xffffff;
        uVar26 = extraout_x1_05;
      }
    }
    local_170 = puVar11;
    if (local_178 != (uint *)0x0) {
      FUN_710392eb40((ulong)local_178);
      uVar26 = extraout_x1_06;
    }
  }
  FUN_710353f120((uint *)&local_190,uVar26,ppppppppplVar17,param_4,(long ****)param_5,param_6,
                 param_7,param_8);
  puVar23 = (ulong *)(param_1 + 0x78);
  if (*(long *)(param_1 + 0x90) != 0) {
    puVar1 = (ulong *)*(ulong *)(param_1 + 0x88);
    while (puVar1 != (ulong *)0x0) {
      uVar26 = *puVar1;
      FUN_710392eb40((ulong)puVar1);
      puVar1 = (ulong *)uVar26;
    }
    uVar26 = *(ulong *)(param_1 + 0x80);
    *(undefined8 *)(param_1 + 0x88) = 0;
    if (uVar26 != 0) {
      uVar25 = uVar26 & 3;
      if (uVar26 - 1 < 3) {
        lVar27 = 0;
      }
      else {
        lVar27 = 0;
        do {
          lVar32 = lVar27 * 8;
          lVar27 = lVar27 + 4;
          *(undefined8 *)(*puVar23 + lVar32) = 0;
          *(undefined8 *)(*puVar23 + lVar32 + 8) = 0;
          *(undefined8 *)(*puVar23 + lVar32 + 0x10) = 0;
          *(undefined8 *)(*puVar23 + lVar32 + 0x18) = 0;
        } while (uVar26 - uVar25 != lVar27);
      }
      if (uVar25 != 0) {
        lVar27 = lVar27 << 3;
        lVar32 = -uVar25;
        do {
          *(undefined8 *)(*puVar23 + lVar27) = 0;
          lVar27 = lVar27 + 8;
          lVar32 = lVar32 + 1;
        } while (lVar32 != 0);
      }
    }
    *(undefined8 *)(param_1 + 0x90) = 0;
  }
  puVar1 = (ulong *)(param_1 + 0xa0);
  if (*(long *)(param_1 + 0xb8) != 0) {
    puVar2 = (ulong *)*(ulong *)(param_1 + 0xb0);
    while (puVar2 != (ulong *)0x0) {
      uVar26 = *puVar2;
      FUN_710392eb40((ulong)puVar2);
      puVar2 = (ulong *)uVar26;
    }
    uVar26 = *(ulong *)(param_1 + 0xa8);
    *(undefined8 *)(param_1 + 0xb0) = 0;
    if (uVar26 != 0) {
      uVar25 = uVar26 & 3;
      if (uVar26 - 1 < 3) {
        lVar27 = 0;
      }
      else {
        lVar27 = 0;
        do {
          lVar32 = lVar27 * 8;
          lVar27 = lVar27 + 4;
          *(undefined8 *)(*puVar1 + lVar32) = 0;
          *(undefined8 *)(*puVar1 + lVar32 + 8) = 0;
          *(undefined8 *)(*puVar1 + lVar32 + 0x10) = 0;
          *(undefined8 *)(*puVar1 + lVar32 + 0x18) = 0;
        } while (uVar26 - uVar25 != lVar27);
      }
      if (uVar25 != 0) {
        lVar27 = lVar27 << 3;
        lVar32 = -uVar25;
        do {
          *(undefined8 *)(*puVar1 + lVar27) = 0;
          lVar27 = lVar27 + 8;
          lVar32 = lVar32 + 1;
        } while (lVar32 != 0);
      }
    }
    *(undefined8 *)(param_1 + 0xb8) = 0;
  }
  puVar2 = (ulong *)(param_1 + 200);
  if (*(long *)(param_1 + 0xe0) != 0) {
    puVar7 = (ulong *)*(ulong *)(param_1 + 0xd8);
    while (puVar7 != (ulong *)0x0) {
      uVar26 = *puVar7;
      FUN_710392eb40((ulong)puVar7);
      puVar7 = (ulong *)uVar26;
    }
    uVar26 = *(ulong *)(param_1 + 0xd0);
    *(undefined8 *)(param_1 + 0xd8) = 0;
    if (uVar26 != 0) {
      uVar25 = uVar26 & 3;
      if (uVar26 - 1 < 3) {
        lVar27 = 0;
      }
      else {
        lVar27 = 0;
        do {
          lVar32 = lVar27 * 8;
          lVar27 = lVar27 + 4;
          *(undefined8 *)(*puVar2 + lVar32) = 0;
          *(undefined8 *)(*puVar2 + lVar32 + 8) = 0;
          *(undefined8 *)(*puVar2 + lVar32 + 0x10) = 0;
          *(undefined8 *)(*puVar2 + lVar32 + 0x18) = 0;
        } while (uVar26 - uVar25 != lVar27);
      }
      if (uVar25 != 0) {
        lVar27 = lVar27 << 3;
        lVar32 = -uVar25;
        do {
          *(undefined8 *)(*puVar2 + lVar27) = 0;
          lVar27 = lVar27 + 8;
          lVar32 = lVar32 + 1;
        } while (lVar32 != 0);
      }
    }
    *(undefined8 *)(param_1 + 0xe0) = 0;
  }
  FUN_71037271e0(*(ulong *)(lVar30 + 8),"game_",puVar23,param_4,(long ****)param_5,param_6,param_7,
                 param_8);
  FUN_71037271e0(*(ulong *)(lVar30 + 8),"effect_",puVar1,param_4,(long ****)param_5,param_6,param_7,
                 param_8);
  uVar26 = FUN_71037271e0(*(ulong *)(lVar30 + 8),"sound_",puVar2,param_4,(long ****)param_5,param_6,
                          param_7,param_8);
  *(undefined1 *)(param_1 + 0x4b) = 1;
  return uVar26;
}

