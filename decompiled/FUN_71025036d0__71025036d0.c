// addr:      71025036d0
// offset:    0x25036d0
// name:      FUN_71025036d0
// mangled:   
// signature: undefined __cdecl FUN_71025036d0(long param_1, ulong param_2, long * * * * * * * * * param_3, undefined1[16] * param_4, undefined * param_5, undefined1[16] * param_6, long * * * param_7, long * * * param_8)


void FUN_71025036d0(long param_1,ulong param_2,long *********param_3,undefined1 (*param_4) [16],
                   undefined *param_5,undefined1 (*param_6) [16],long ***param_7,long ***param_8)

{
  undefined **ppuVar1;
  long *plVar2;
  uint uVar3;
  byte bVar4;
  char cVar5;
  uint uVar6;
  long ********pppppppplVar7;
  bool bVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  undefined8 extraout_x1;
  ulong extraout_x1_00;
  ulong extraout_x1_01;
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
  undefined8 uVar15;
  undefined8 extraout_x1_23;
  undefined8 extraout_x1_24;
  undefined8 extraout_x1_25;
  undefined8 extraout_x1_26;
  undefined8 extraout_x1_27;
  undefined8 extraout_x1_28;
  char *pcVar16;
  code *pcVar17;
  long lVar18;
  uint uVar19;
  long lVar20;
  undefined *puVar21;
  int *piVar22;
  ulong uVar23;
  ulong *puVar24;
  long *plVar25;
  long *plVar26;
  long *plVar27;
  long *plVar28;
  int *piVar29;
  float fVar30;
  undefined1 auVar31 [16];
  undefined8 local_220;
  undefined8 uStack_218;
  undefined8 local_210;
  undefined8 uStack_208;
  undefined8 local_200;
  undefined8 uStack_1f8;
  undefined8 local_1f0;
  undefined8 uStack_1e8;
  undefined8 local_1e0;
  undefined8 uStack_1d8;
  undefined8 local_1d0;
  undefined8 uStack_1c8;
  undefined5 uStack_1c0;
  undefined3 local_1bb;
  undefined5 uStack_1b8;
  long ********local_1b0;
  undefined **ppuStack_1a8;
  long local_1a0;
  int local_198;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined1 local_168 [8];
  long *plStack_160;
  undefined1 local_158 [8];
  long *local_150;
  undefined1 local_148 [8];
  long *local_140;
  long ********local_138;
  long *local_130;
  uint local_128 [2];
  long local_120;
  long *local_118;
  undefined4 local_110 [2];
  undefined **local_108;
  long local_100;
  int local_f8;
  undefined4 uStack_f4;
  undefined1 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined4 local_d0 [2];
  undefined **local_c8;
  long local_c0;
  undefined8 local_b8;
  undefined1 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined1 *local_90;
  undefined8 uStack_88;
  ulong local_80 [4];
  
  iVar11 = (int)param_2;
  if (*(int *)(param_1 + 0x10) == iVar11) {
    return;
  }
  uVar23 = param_2 & 0xffffffff;
  if (*(int *)(param_1 + 0x10) == -1) {
    uVar9 = 1;
LAB_71025039f4:
    FUN_7102500b20(param_1,param_2,param_3,(byte ****)param_4,(long ****)param_5,param_6,param_7,
                   param_8);
    *(undefined8 *)(param_1 + 0x430) = 0;
    pcVar17 = (code *)param_5;
  }
  else {
    plVar25 = (long *)(param_1 + 0x18);
    if ((long *)*plVar25 == (long *)0x0) {
      uVar9 = 1;
    }
    else {
      uVar9 = (**(code **)(*(long *)*plVar25 + 0xb0))();
      FUN_71035598f0(plVar25,extraout_x1,(long ****)param_3,(byte ****)param_4,(long ****)param_5,
                     param_6,param_7,param_8);
      plVar28 = *(long **)(param_1 + 0x20);
      *(undefined8 *)(param_1 + 0x18) = 0;
      *(undefined8 *)(param_1 + 0x20) = 0;
      if (plVar28 == (long *)0x0) {
        *plVar25 = 0;
        *(undefined8 *)(param_1 + 0x20) = 0;
      }
      else {
        plVar26 = plVar28 + 1;
        do {
          lVar20 = *plVar26;
          cVar5 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(plVar26,0x10);
          if (bVar8) {
            *plVar26 = lVar20 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (lVar20 == 0) {
          (**(code **)(*plVar28 + 0x10))(plVar28);
          std::__shared_weak_count::__release_weak();
        }
        plVar28 = *(long **)(param_1 + 0x20);
        *plVar25 = 0;
        *(undefined8 *)(param_1 + 0x20) = 0;
        if (plVar28 != (long *)0x0) {
          plVar25 = plVar28 + 1;
          do {
            lVar20 = *plVar25;
            cVar5 = '\x01';
            bVar8 = (bool)ExclusiveMonitorPass(plVar25,0x10);
            if (bVar8) {
              *plVar25 = lVar20 + -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (lVar20 == 0) {
            (**(code **)(*plVar28 + 0x10))(plVar28);
            std::__shared_weak_count::__release_weak();
          }
        }
      }
      uVar10 = *(uint *)(param_1 + 0x394);
      if (0 < (int)uVar10) {
        lVar20 = *lib::Singleton<lib::EffectManager>::instance_ + (ulong)(uVar10 >> 0x18) * 0x300;
        if (*(uint *)(lVar20 + 4) == uVar10 && lVar20 != 0) {
          std::mutex::lock();
          if (*(uint *)(lVar20 + 4) == uVar10) {
            param_3 = (long *********)0x0;
            param_4 = (undefined1 (*) [16])0x0;
            FUN_71035707d0(lVar20,0,(long ****)0x0,0,(long ****)param_5,param_6,param_7,param_8);
          }
          std::mutex::unlock();
        }
      }
      local_d0[0] = *(undefined4 *)(param_1 + 0x398);
      local_c0 = 0;
      local_b8 = 0x87650000000000;
      lVar20 = *(long *)(param_1 + 0x3a8);
      if (lVar20 != 0) {
        if (DAT_7106dd53ac != 0) {
          local_b8 = CONCAT44(0x876500,DAT_7106dd53ac);
        }
        piVar29 = (int *)(lVar20 + 0x38);
        do {
          cVar5 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(piVar29,0x10);
          if (bVar8) {
            *piVar29 = *piVar29 + 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
          local_c0 = lVar20;
        } while (cVar5 != '\0');
      }
      lVar20 = local_c0;
      local_b0 = 0;
      local_c8 = &PTR_FUN_7104f73d30;
      local_a8 = *(undefined8 *)(param_1 + 0x3c0);
      local_a0 = *(undefined8 *)(param_1 + 0x3c8);
      uStack_98 = *(undefined8 *)(param_1 + 0x3d0);
      uVar10 = FUN_71024d15d0((long)local_d0);
      local_c8 = &PTR_FUN_7104f73d50;
      if (((lVar20 != 0) && (DAT_7106dd53a8 == '\x01')) && ((int)local_b8 == DAT_7106dd53ac)) {
        piVar29 = (int *)(lVar20 + 0x38);
        do {
          cVar5 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(piVar29,0x10);
          if (bVar8) {
            *piVar29 = *piVar29 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
      }
      local_c0 = 0;
      local_b0 = 0;
      param_2 = extraout_x1_00;
      if ((uVar10 & 1) != 0) {
        local_110[0] = *(undefined4 *)(param_1 + 0x398);
        local_100 = 0;
        local_f8 = 0;
        uStack_f4 = 0x876500;
        lVar20 = *(long *)(param_1 + 0x3a8);
        if (lVar20 != 0) {
          if (DAT_7106dd53ac != 0) {
            local_f8 = DAT_7106dd53ac;
          }
          piVar29 = (int *)(lVar20 + 0x38);
          do {
            cVar5 = '\x01';
            bVar8 = (bool)ExclusiveMonitorPass(piVar29,0x10);
            if (bVar8) {
              *piVar29 = *piVar29 + 1;
              cVar5 = ExclusiveMonitorsStatus();
            }
            local_100 = lVar20;
          } while (cVar5 != '\0');
        }
        lVar20 = local_100;
        local_f0 = 0;
        local_108 = &PTR_FUN_7104f73d30;
        local_e8 = *(undefined8 *)(param_1 + 0x3c0);
        local_e0 = *(undefined8 *)(param_1 + 0x3c8);
        uStack_d8 = *(undefined8 *)(param_1 + 0x3d0);
        FUN_71024d16d0(local_110);
        local_108 = &PTR_FUN_7104f73d50;
        if (((lVar20 != 0) && (DAT_7106dd53a8 == '\x01')) && (local_f8 == DAT_7106dd53ac)) {
          piVar29 = (int *)(lVar20 + 0x38);
          do {
            cVar5 = '\x01';
            bVar8 = (bool)ExclusiveMonitorPass(piVar29,0x10);
            if (bVar8) {
              *piVar29 = *piVar29 + -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
        }
        local_100 = 0;
        local_f0 = 0;
        param_2 = extraout_x1_01;
      }
    }
    pcVar17 = (code *)param_5;
    if (*(int *)(param_1 + 0x10) == -1) goto LAB_71025039f4;
  }
  *(int *)(param_1 + 0x10) = iVar11;
  lVar20 = DAT_7105332f20;
  if (iVar11 == -1) goto LAB_71025049ac;
  uVar10 = *(uint *)(*DAT_710532a860 + uVar23 * 4 + 0x3cc88);
  uVar23 = (ulong)uVar10;
  if (uVar10 != 0xffffff) {
    if (uVar10 < *(uint *)(DAT_7105332f20 + 0x48)) {
      std::recursive_mutex::lock();
      lVar18 = *(long *)(lVar20 + 0x40);
      if ((*(byte *)(lVar18 + uVar23 * 0x48 + 8) & 1) == 0) {
        std::recursive_mutex::unlock();
        FUN_7103540d50(lVar20,uVar10,param_3,(byte ****)param_4,(long ****)pcVar17,param_6,param_7,
                       param_8);
      }
      else {
        FUN_71035432d0((int *)(lVar18 + uVar23 * 0x48));
        std::recursive_mutex::unlock();
      }
    }
    lVar20 = DAT_7105332f20;
    if (uVar10 < *(uint *)(DAT_7105332f20 + 0x48)) {
      std::recursive_mutex::lock();
      piVar29 = (int *)(*(long *)(lVar20 + 0x40) + uVar23 * 0x48);
      bVar4 = *(byte *)(piVar29 + 2);
      std::recursive_mutex::unlock();
      bVar8 = false;
      if (((bVar4 & 1) != 0) && (piVar29 != (int *)0x0)) {
        if (*piVar29 == 0xffffff) {
          iVar11 = -1;
        }
        else {
          iVar11 = FUN_7103543080((long)piVar29);
        }
        bVar8 = iVar11 == 3;
      }
    }
    else {
      bVar8 = false;
    }
    lVar20 = DAT_7105332f20;
    if (uVar10 < *(uint *)(DAT_7105332f20 + 0x48)) {
      std::recursive_mutex::lock();
      lVar18 = *(long *)(lVar20 + 0x40);
      if ((*(byte *)(lVar18 + uVar23 * 0x48 + 8) & 1) != 0) {
        FUN_710353f5a0(lVar20,(int *)(lVar18 + uVar23 * 0x48),(long ****)param_3,(byte ****)param_4,
                       (long ****)pcVar17,param_6,param_7,param_8);
      }
      std::recursive_mutex::unlock();
      lVar20 = DAT_7105332f20;
    }
    DAT_7105332f20 = lVar20;
    if (bVar8) {
      local_80[0]._4_4_ = (undefined4)(local_80[0] >> 0x20);
      uVar10 = *(uint *)(*DAT_710532a860 + (ulong)*(uint *)(param_1 + 0x10) * 4 + 0x3cc88);
      local_90._4_4_ = (undefined4)((ulong)local_90 >> 0x20);
      local_90 = (undefined1 *)CONCAT44(local_90._4_4_,uVar10);
      if ((uVar10 != 0xffffff) && (uVar10 < *(uint *)(lVar20 + 0x48))) {
        std::recursive_mutex::lock();
        if ((*(byte *)(*(long *)(lVar20 + 0x40) + (ulong)uVar10 * 0x48 + 8) & 1) == 0) {
          std::recursive_mutex::unlock();
          FUN_7103540d50(lVar20,uVar10,param_3,(byte ****)param_4,(long ****)pcVar17,param_6,param_7
                         ,param_8);
        }
        else {
          FUN_71035432d0((int *)(*(long *)(lVar20 + 0x40) + (ulong)uVar10 * 0x48));
          std::recursive_mutex::unlock();
        }
      }
      pcVar16 = "model.numdlb";
      FUN_710353e1d0((uint *)&local_1b0,(uint *)&local_90,(byte *)"model.numdlb");
      if ((uint)local_1b0 != 0xffffff) {
        FUN_7103540b10(DAT_7105332f20,(uint)local_1b0,(long *********)pcVar16,(byte ****)param_4,
                       (long ****)pcVar17,param_6,param_7,param_8);
      }
      if (((uint)local_1b0 == 0xffffff) ||
         (lVar20 = **(long **)(DAT_7105332f20 + 0x78),
         *(uint *)(*(long *)(lVar20 + 0x40) + 4) <= (uint)local_1b0)) {
        local_1b0 = (long ********)0x0;
      }
      else {
        local_1b0 = (long ********)
                    (*(ulong *)(*(long *)(lVar20 + 0x60) + ((ulong)local_1b0 & 0xffffffff) * 0x20) &
                    0xffffffffff);
      }
      lVar20 = (*(long **)(DAT_7105332f20 + 0x78))[1];
      pcVar17 = FUN_7103542240;
      param_4 = (undefined1 (*) [16])&DAT_00000008;
      puVar12 = bsearch(&local_1b0,*(void **)(lVar20 + 0x20),
                        (ulong)*(uint *)(*(long *)(lVar20 + 8) + 8),8,FUN_7103542240);
      uVar10 = 0xffffff;
      if (puVar12 != (undefined8 *)0x0) {
        uVar6 = (uint)((ulong)*puVar12 >> 0x20);
        uVar19 = uVar6 >> 8;
        if ((uVar19 != 0xffffff) &&
           (uVar3 = *(uint *)(*(long *)(lVar20 + 8) + 4), uVar10 = uVar6 >> 8,
           uVar3 < uVar19 || uVar3 == uVar10)) {
          uVar10 = 0xffffff;
        }
      }
      param_3 = (long *********)&DAT_00000009;
      local_80[0] = CONCAT44(local_80[0]._4_4_,uVar10);
      FUN_71035c2890(&local_1b0,(uint *)local_80,(long *********)&DAT_00000009,(byte ****)param_4,
                     (long ****)pcVar17,param_6,param_7,param_8);
      ppuVar1 = ppuStack_1a8;
      pppppppplVar7 = local_1b0;
      local_1b0 = (long ********)0x0;
      ppuStack_1a8 = (undefined **)0x0;
      puVar24 = (ulong *)(param_1 + 0x18);
      *puVar24 = (ulong)pppppppplVar7;
      plVar25 = *(long **)(param_1 + 0x20);
      *(undefined ***)(param_1 + 0x20) = ppuVar1;
      uVar15 = extraout_x1_02;
      if (plVar25 != (long *)0x0) {
        plVar28 = plVar25 + 1;
        do {
          lVar20 = *plVar28;
          cVar5 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(plVar28,0x10);
          if (bVar8) {
            *plVar28 = lVar20 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (lVar20 == 0) {
          (**(code **)(*plVar25 + 0x10))(plVar25);
          std::__shared_weak_count::__release_weak();
          uVar15 = extraout_x1_03;
        }
      }
      if (ppuStack_1a8 != (undefined **)0x0) {
        ppuVar1 = ppuStack_1a8 + 1;
        do {
          puVar21 = *ppuVar1;
          cVar5 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(ppuVar1,0x10);
          if (bVar8) {
            *ppuVar1 = puVar21 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (puVar21 == (undefined *)0x0) {
          (**(code **)(*ppuStack_1a8 + 0x10))(ppuStack_1a8);
          std::__shared_weak_count::__release_weak();
          uVar15 = extraout_x1_04;
        }
      }
      lVar20 = DAT_7105332f20;
      uVar23 = (ulong)local_90 & 0xffffffff;
      if ((uint)local_90 != 0xffffff) {
        if ((uint)local_90 < *(uint *)(DAT_7105332f20 + 0x48)) {
          std::recursive_mutex::lock();
          lVar18 = *(long *)(lVar20 + 0x40);
          if ((*(byte *)(lVar18 + uVar23 * 0x48 + 8) & 1) != 0) {
            FUN_710353f5a0(lVar20,(int *)(lVar18 + uVar23 * 0x48),(long ****)param_3,
                           (byte ****)param_4,(long ****)pcVar17,param_6,param_7,param_8);
          }
          std::recursive_mutex::unlock();
          uVar15 = extraout_x1_05;
        }
        local_90 = (undefined1 *)CONCAT44(local_90._4_4_,0xffffff);
      }
      puVar12 = (undefined8 *)(param_1 + 0x28);
      *puVar12 = 0;
      plVar25 = *(long **)(param_1 + 0x30);
      *(undefined8 *)(param_1 + 0x30) = 0;
      if (plVar25 != (long *)0x0) {
        plVar28 = plVar25 + 1;
        do {
          lVar20 = *plVar28;
          cVar5 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(plVar28,0x10);
          if (bVar8) {
            *plVar28 = lVar20 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (lVar20 == 0) {
          (**(code **)(*plVar25 + 0x10))(plVar25);
          std::__shared_weak_count::__release_weak();
          uVar15 = extraout_x1_06;
        }
      }
      plVar25 = (long *)(param_1 + 0x38);
      *plVar25 = 0;
      plVar28 = *(long **)(param_1 + 0x40);
      *(undefined8 *)(param_1 + 0x40) = 0;
      if (plVar28 != (long *)0x0) {
        plVar26 = plVar28 + 1;
        do {
          lVar20 = *plVar26;
          cVar5 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(plVar26,0x10);
          if (bVar8) {
            *plVar26 = lVar20 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (lVar20 == 0) {
          (**(code **)(*plVar28 + 0x10))(plVar28);
          std::__shared_weak_count::__release_weak();
          uVar15 = extraout_x1_07;
        }
      }
      plVar28 = (long *)(param_1 + 0x48);
      *plVar28 = 0;
      plVar26 = *(long **)(param_1 + 0x50);
      *(undefined8 *)(param_1 + 0x50) = 0;
      if (plVar26 != (long *)0x0) {
        plVar27 = plVar26 + 1;
        do {
          lVar20 = *plVar27;
          cVar5 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(plVar27,0x10);
          if (bVar8) {
            *plVar27 = lVar20 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (lVar20 == 0) {
          (**(code **)(*plVar26 + 0x10))(plVar26);
          std::__shared_weak_count::__release_weak();
          uVar15 = extraout_x1_08;
        }
      }
      plVar26 = (long *)(param_1 + 0x58);
      *plVar26 = 0;
      plVar27 = *(long **)(param_1 + 0x60);
      *(undefined8 *)(param_1 + 0x60) = 0;
      if (plVar27 != (long *)0x0) {
        plVar2 = plVar27 + 1;
        do {
          lVar20 = *plVar2;
          cVar5 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar8) {
            *plVar2 = lVar20 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (lVar20 == 0) {
          (**(code **)(*plVar27 + 0x10))(plVar27);
          std::__shared_weak_count::__release_weak();
          uVar15 = extraout_x1_09;
        }
      }
      lVar20 = DAT_7105332f20;
      uVar10 = *(uint *)(*DAT_710532a860 + (ulong)*(uint *)(param_1 + 0x10) * 4 + 0x3cca4);
      uVar23 = (ulong)uVar10;
      if (uVar10 != 0xffffff) {
        if (uVar10 < *(uint *)(DAT_7105332f20 + 0x48)) {
          std::recursive_mutex::lock();
          lVar18 = *(long *)(lVar20 + 0x40);
          if ((*(byte *)(lVar18 + uVar23 * 0x48 + 8) & 1) == 0) {
            std::recursive_mutex::unlock();
            FUN_7103540d50(lVar20,uVar10,param_3,(byte ****)param_4,(long ****)pcVar17,param_6,
                           param_7,param_8);
            uVar15 = extraout_x1_10;
          }
          else {
            FUN_71035432d0((int *)(lVar18 + uVar23 * 0x48));
            std::recursive_mutex::unlock();
            uVar15 = extraout_x1_11;
          }
        }
        lVar20 = DAT_7105332f20;
        if (uVar10 < *(uint *)(DAT_7105332f20 + 0x48)) {
          std::recursive_mutex::lock();
          piVar29 = (int *)(*(long *)(lVar20 + 0x40) + uVar23 * 0x48);
          bVar4 = *(byte *)(piVar29 + 2);
          std::recursive_mutex::unlock();
          bVar8 = false;
          uVar15 = extraout_x1_12;
          if (((bVar4 & 1) != 0) && (piVar29 != (int *)0x0)) {
            if (*piVar29 == 0xffffff) {
              iVar11 = -1;
            }
            else {
              iVar11 = FUN_7103543080((long)piVar29);
              uVar15 = extraout_x1_13;
            }
            bVar8 = iVar11 == 3;
          }
        }
        else {
          bVar8 = false;
        }
        lVar20 = DAT_7105332f20;
        if (uVar10 < *(uint *)(DAT_7105332f20 + 0x48)) {
          std::recursive_mutex::lock();
          lVar18 = *(long *)(lVar20 + 0x40);
          if ((*(byte *)(lVar18 + uVar23 * 0x48 + 8) & 1) != 0) {
            FUN_710353f5a0(lVar20,(int *)(lVar18 + uVar23 * 0x48),(long ****)param_3,
                           (byte ****)param_4,(long ****)pcVar17,param_6,param_7,param_8);
          }
          std::recursive_mutex::unlock();
          uVar15 = extraout_x1_14;
        }
        if (bVar8) {
          puVar13 = (undefined8 *)
                    FUN_710392e290(0x10,0x30,(long ****)param_3,(byte ****)param_4,
                                   (long ****)pcVar17,param_6,param_7,param_8);
          if (puVar13 == (undefined8 *)0x0) {
            if (DAT_7105332f00 != (long *)0x0) {
              local_80[0] = local_80[0] & 0xffffffff00000000;
              local_1b0 = (long ********)&DAT_00000030;
              param_3 = &local_1b0;
              uVar23 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,local_80);
              if (((uVar23 & 1) != 0) &&
                 (puVar13 = (undefined8 *)
                            FUN_710392e290(0x10,0x30,(long ****)param_3,(byte ****)param_4,
                                           (long ****)pcVar17,param_6,param_7,param_8),
                 puVar13 != (undefined8 *)0x0)) goto LAB_7102504084;
            }
            puVar13 = (undefined8 *)0x0;
          }
LAB_7102504084:
          *puVar13 = &PTR_FUN_7105239200;
          puVar13[3] = 0;
          puVar13[4] = 0;
          *(undefined4 *)(puVar13 + 5) = 0x3f800000;
          puVar13[1] = 0;
          puVar13[2] = 0;
          puVar14 = (undefined8 *)
                    FUN_710392e290(0x10,0x20,(long ****)param_3,(byte ****)param_4,
                                   (long ****)pcVar17,param_6,param_7,param_8);
          if (puVar14 == (undefined8 *)0x0) {
            if (DAT_7105332f00 != (long *)0x0) {
              local_80[0] = local_80[0] & 0xffffffff00000000;
              local_1b0 = (long ********)&SUB_00000020;
              param_3 = &local_1b0;
              uVar23 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,local_80);
              if (((uVar23 & 1) != 0) &&
                 (puVar14 = (undefined8 *)
                            FUN_710392e290(0x10,0x20,(long ****)param_3,(byte ****)param_4,
                                           (long ****)pcVar17,param_6,param_7,param_8),
                 puVar14 != (undefined8 *)0x0)) goto LAB_71025040f4;
            }
            puVar14 = (undefined8 *)0x0;
          }
LAB_71025040f4:
          *puVar14 = &DAT_7105239240;
          puVar14[1] = 0;
          puVar14[2] = 0;
          puVar14[3] = puVar13;
          *(undefined8 **)(param_1 + 0x28) = puVar13;
          plVar27 = *(long **)(param_1 + 0x30);
          *(undefined8 **)(param_1 + 0x30) = puVar14;
          if (plVar27 != (long *)0x0) {
            plVar2 = plVar27 + 1;
            do {
              lVar20 = *plVar2;
              cVar5 = '\x01';
              bVar8 = (bool)ExclusiveMonitorPass(plVar2,0x10);
              if (bVar8) {
                *plVar2 = lVar20 + -1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            if (lVar20 == 0) {
              (**(code **)(*plVar27 + 0x10))(plVar27);
              std::__shared_weak_count::__release_weak();
            }
          }
          puVar13 = (undefined8 *)
                    FUN_710392e290(0x10,200,(long ****)param_3,(byte ****)param_4,(long ****)pcVar17
                                   ,param_6,param_7,param_8);
          uVar15 = extraout_x1_15;
          if (puVar13 == (undefined8 *)0x0) {
            if (DAT_7105332f00 != (long *)0x0) {
              local_80[0] = local_80[0] & 0xffffffff00000000;
              local_1b0 = (long ********)&DAT_000000c8;
              param_3 = &local_1b0;
              auVar31 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,local_80);
              uVar15 = auVar31._8_8_;
              if (((auVar31._0_8_ & 1) != 0) &&
                 (puVar13 = (undefined8 *)
                            FUN_710392e290(0x10,200,(long ****)param_3,(byte ****)param_4,
                                           (long ****)pcVar17,param_6,param_7,param_8),
                 uVar15 = extraout_x1_16, puVar13 != (undefined8 *)0x0)) goto LAB_71025041a4;
            }
            puVar13 = (undefined8 *)0x0;
          }
LAB_71025041a4:
          puVar13[1] = 0;
          puVar13[2] = 0;
          *puVar13 = &PTR_FUN_7104f76000;
          FUN_710367adf0(puVar13 + 3,uVar15,(long ****)param_3,(byte ****)param_4,(long ****)pcVar17
                         ,param_6,param_7,param_8);
          *(undefined8 **)(param_1 + 0x38) = puVar13 + 3;
          plVar27 = *(long **)(param_1 + 0x40);
          *(undefined8 **)(param_1 + 0x40) = puVar13;
          if (plVar27 != (long *)0x0) {
            plVar2 = plVar27 + 1;
            do {
              lVar20 = *plVar2;
              cVar5 = '\x01';
              bVar8 = (bool)ExclusiveMonitorPass(plVar2,0x10);
              if (bVar8) {
                *plVar2 = lVar20 + -1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            if (lVar20 == 0) {
              (**(code **)(*plVar27 + 0x10))(plVar27);
              std::__shared_weak_count::__release_weak();
            }
          }
          puVar13 = (undefined8 *)
                    FUN_710392e290(0x10,0xa8,(long ****)param_3,(byte ****)param_4,
                                   (long ****)pcVar17,param_6,param_7,param_8);
          uVar15 = extraout_x1_17;
          if (puVar13 == (undefined8 *)0x0) {
            if (DAT_7105332f00 != (long *)0x0) {
              local_80[0] = local_80[0] & 0xffffffff00000000;
              local_1b0 = (long ********)&DAT_000000a8;
              param_3 = &local_1b0;
              auVar31 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,local_80);
              uVar15 = auVar31._8_8_;
              if (((auVar31._0_8_ & 1) != 0) &&
                 (puVar13 = (undefined8 *)
                            FUN_710392e290(0x10,0xa8,(long ****)param_3,(byte ****)param_4,
                                           (long ****)pcVar17,param_6,param_7,param_8),
                 uVar15 = extraout_x1_18, puVar13 != (undefined8 *)0x0)) goto LAB_710250425c;
            }
            puVar13 = (undefined8 *)0x0;
          }
LAB_710250425c:
          puVar13[1] = 0;
          puVar13[2] = 0;
          *puVar13 = &PTR_FUN_71050c0538;
          FUN_7103680c00(puVar13 + 3,uVar15,(long ****)param_3,(byte ****)param_4,(long ****)pcVar17
                         ,param_6,param_7,param_8);
          *(undefined8 **)(param_1 + 0x48) = puVar13 + 3;
          plVar27 = *(long **)(param_1 + 0x50);
          *(undefined8 **)(param_1 + 0x50) = puVar13;
          if (plVar27 != (long *)0x0) {
            plVar2 = plVar27 + 1;
            do {
              lVar20 = *plVar2;
              cVar5 = '\x01';
              bVar8 = (bool)ExclusiveMonitorPass(plVar2,0x10);
              if (bVar8) {
                *plVar2 = lVar20 + -1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            if (lVar20 == 0) {
              (**(code **)(*plVar27 + 0x10))(plVar27);
              std::__shared_weak_count::__release_weak();
            }
          }
          puVar13 = (undefined8 *)
                    FUN_710392e290(0x10,0xa8,(long ****)param_3,(byte ****)param_4,
                                   (long ****)pcVar17,param_6,param_7,param_8);
          uVar15 = extraout_x1_19;
          if (puVar13 == (undefined8 *)0x0) {
            if (DAT_7105332f00 != (long *)0x0) {
              local_80[0] = local_80[0] & 0xffffffff00000000;
              local_1b0 = (long ********)&DAT_000000a8;
              param_3 = &local_1b0;
              auVar31 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,local_80);
              uVar15 = auVar31._8_8_;
              if (((auVar31._0_8_ & 1) != 0) &&
                 (puVar13 = (undefined8 *)
                            FUN_710392e290(0x10,0xa8,(long ****)param_3,(byte ****)param_4,
                                           (long ****)pcVar17,param_6,param_7,param_8),
                 uVar15 = extraout_x1_20, puVar13 != (undefined8 *)0x0)) goto LAB_7102504314;
            }
            puVar13 = (undefined8 *)0x0;
          }
LAB_7102504314:
          puVar13[1] = 0;
          puVar13[2] = 0;
          *puVar13 = &PTR_FUN_71050c0570;
          FUN_710367c690(puVar13 + 3,uVar15,(long ****)param_3,(byte ****)param_4,(long ****)pcVar17
                         ,param_6,param_7,param_8);
          *(undefined8 **)(param_1 + 0x58) = puVar13 + 3;
          plVar27 = *(long **)(param_1 + 0x60);
          *(undefined8 **)(param_1 + 0x60) = puVar13;
          if (plVar27 != (long *)0x0) {
            plVar2 = plVar27 + 1;
            do {
              lVar20 = *plVar2;
              cVar5 = '\x01';
              bVar8 = (bool)ExclusiveMonitorPass(plVar2,0x10);
              if (bVar8) {
                *plVar2 = lVar20 + -1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            if (lVar20 == 0) {
              (**(code **)(*plVar27 + 0x10))(plVar27);
              std::__shared_weak_count::__release_weak();
            }
          }
          local_120 = *(long *)(param_1 + 0x18);
          local_118 = *(long **)(param_1 + 0x20);
          if (local_118 != (long *)0x0) {
            plVar27 = local_118 + 1;
            do {
              cVar5 = '\x01';
              bVar8 = (bool)ExclusiveMonitorPass(plVar27,0x10);
              if (bVar8) {
                *plVar27 = *plVar27 + 1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
          }
          lVar20 = DAT_7105332f20;
          uVar10 = *(uint *)(*DAT_710532a860 + (ulong)*(uint *)(param_1 + 0x10) * 4 + 0x3cca4);
          local_128[0] = uVar10;
          if ((uVar10 != 0xffffff) && (uVar10 < *(uint *)(DAT_7105332f20 + 0x48))) {
            std::recursive_mutex::lock();
            lVar18 = *(long *)(lVar20 + 0x40);
            if ((*(byte *)(lVar18 + (ulong)uVar10 * 0x48 + 8) & 1) == 0) {
              std::recursive_mutex::unlock();
              FUN_7103540d50(lVar20,uVar10,param_3,(byte ****)param_4,(long ****)pcVar17,param_6,
                             param_7,param_8);
            }
            else {
              FUN_71035432d0((int *)(lVar18 + (ulong)uVar10 * 0x48));
              std::recursive_mutex::unlock();
            }
          }
          local_138 = *(long *********)(param_1 + 0x28);
          local_130 = *(long **)(param_1 + 0x30);
          if (local_130 != (long *)0x0) {
            plVar27 = local_130 + 1;
            do {
              cVar5 = '\x01';
              bVar8 = (bool)ExclusiveMonitorPass(plVar27,0x10);
              if (bVar8) {
                *plVar27 = *plVar27 + 1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
          }
          local_148 = *(undefined1 (*) [8])(param_1 + 0x38);
          local_140 = *(long **)(param_1 + 0x40);
          if (local_140 != (long *)0x0) {
            plVar27 = local_140 + 1;
            do {
              cVar5 = '\x01';
              bVar8 = (bool)ExclusiveMonitorPass(plVar27,0x10);
              if (bVar8) {
                *plVar27 = *plVar27 + 1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
          }
          local_158 = *(undefined1 (*) [8])(param_1 + 0x48);
          local_150 = *(long **)(param_1 + 0x50);
          if (local_150 != (long *)0x0) {
            plVar27 = local_150 + 1;
            do {
              cVar5 = '\x01';
              bVar8 = (bool)ExclusiveMonitorPass(plVar27,0x10);
              if (bVar8) {
                *plVar27 = *plVar27 + 1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
          }
          local_168 = *(undefined1 (*) [8])(param_1 + 0x58);
          plVar27 = *(long **)(param_1 + 0x60);
          plStack_160 = plVar27;
          if (plVar27 == (long *)0x0) {
            param_3 = &local_138;
            param_4 = (undefined1 (*) [16])local_148;
            pcVar17 = (code *)local_158;
            param_6 = (undefined1 (*) [16])local_168;
            FUN_71024cc230(&local_120,local_128,param_3,(byte ****)param_4,(long ****)pcVar17,
                           (long *)param_6,param_7,param_8);
          }
          else {
            plVar2 = plVar27 + 1;
            do {
              cVar5 = '\x01';
              bVar8 = (bool)ExclusiveMonitorPass(plVar2,0x10);
              if (bVar8) {
                *plVar2 = *plVar2 + 1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            param_3 = &local_138;
            param_4 = (undefined1 (*) [16])local_148;
            pcVar17 = (code *)local_158;
            param_6 = (undefined1 (*) [16])local_168;
            FUN_71024cc230(&local_120,local_128,param_3,(byte ****)param_4,(long ****)pcVar17,
                           (long *)param_6,param_7,param_8);
            do {
              lVar20 = *plVar2;
              cVar5 = '\x01';
              bVar8 = (bool)ExclusiveMonitorPass(plVar2,0x10);
              if (bVar8) {
                *plVar2 = lVar20 + -1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            if (lVar20 == 0) {
              (**(code **)(*plVar27 + 0x10))(plVar27);
              std::__shared_weak_count::__release_weak();
            }
          }
          if (local_150 != (long *)0x0) {
            plVar27 = local_150 + 1;
            do {
              lVar20 = *plVar27;
              cVar5 = '\x01';
              bVar8 = (bool)ExclusiveMonitorPass(plVar27,0x10);
              if (bVar8) {
                *plVar27 = lVar20 + -1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            if (lVar20 == 0) {
              (**(code **)(*local_150 + 0x10))(local_150);
              std::__shared_weak_count::__release_weak();
            }
          }
          if (local_140 != (long *)0x0) {
            plVar27 = local_140 + 1;
            do {
              lVar20 = *plVar27;
              cVar5 = '\x01';
              bVar8 = (bool)ExclusiveMonitorPass(plVar27,0x10);
              if (bVar8) {
                *plVar27 = lVar20 + -1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            if (lVar20 == 0) {
              (**(code **)(*local_140 + 0x10))(local_140);
              std::__shared_weak_count::__release_weak();
            }
          }
          if (local_130 != (long *)0x0) {
            plVar27 = local_130 + 1;
            do {
              lVar20 = *plVar27;
              cVar5 = '\x01';
              bVar8 = (bool)ExclusiveMonitorPass(plVar27,0x10);
              if (bVar8) {
                *plVar27 = lVar20 + -1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            if (lVar20 == 0) {
              (**(code **)(*local_130 + 0x10))(local_130);
              std::__shared_weak_count::__release_weak();
            }
          }
          lVar20 = DAT_7105332f20;
          uVar23 = (ulong)local_128[0];
          if (local_128[0] != 0xffffff) {
            if (local_128[0] < *(uint *)(DAT_7105332f20 + 0x48)) {
              std::recursive_mutex::lock();
              lVar18 = *(long *)(lVar20 + 0x40);
              if ((*(byte *)(lVar18 + uVar23 * 0x48 + 8) & 1) != 0) {
                FUN_710353f5a0(lVar20,(int *)(lVar18 + uVar23 * 0x48),(long ****)param_3,
                               (byte ****)param_4,(long ****)pcVar17,param_6,param_7,param_8);
              }
              std::recursive_mutex::unlock();
            }
            local_128[0] = 0xffffff;
          }
          if (local_118 != (long *)0x0) {
            plVar27 = local_118 + 1;
            do {
              lVar20 = *plVar27;
              cVar5 = '\x01';
              bVar8 = (bool)ExclusiveMonitorPass(plVar27,0x10);
              if (bVar8) {
                *plVar27 = lVar20 + -1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            if (lVar20 == 0) {
              (**(code **)(*local_118 + 0x10))(local_118);
              std::__shared_weak_count::__release_weak();
            }
          }
          auVar31 = (**(code **)(*(long *)*puVar12 + 0x28))();
          uVar15 = auVar31._8_8_;
          if ((auVar31._0_8_ & 1) != 0) {
            plVar27 = *(long **)(param_1 + 0x30);
            *(undefined8 *)(param_1 + 0x28) = 0;
            *(undefined8 *)(param_1 + 0x30) = 0;
            if (plVar27 == (long *)0x0) {
              *puVar12 = 0;
              *(undefined8 *)(param_1 + 0x30) = 0;
            }
            else {
              plVar2 = plVar27 + 1;
              do {
                lVar20 = *plVar2;
                cVar5 = '\x01';
                bVar8 = (bool)ExclusiveMonitorPass(plVar2,0x10);
                if (bVar8) {
                  *plVar2 = lVar20 + -1;
                  cVar5 = ExclusiveMonitorsStatus();
                }
              } while (cVar5 != '\0');
              if (lVar20 == 0) {
                (**(code **)(*plVar27 + 0x10))(plVar27);
                std::__shared_weak_count::__release_weak();
                uVar15 = extraout_x1_21;
              }
              plVar27 = *(long **)(param_1 + 0x30);
              *puVar12 = 0;
              *(undefined8 *)(param_1 + 0x30) = 0;
              if (plVar27 != (long *)0x0) {
                plVar2 = plVar27 + 1;
                do {
                  lVar20 = *plVar2;
                  cVar5 = '\x01';
                  bVar8 = (bool)ExclusiveMonitorPass(plVar2,0x10);
                  if (bVar8) {
                    *plVar2 = lVar20 + -1;
                    cVar5 = ExclusiveMonitorsStatus();
                  }
                } while (cVar5 != '\0');
                if (lVar20 == 0) {
                  (**(code **)(*plVar27 + 0x10))(plVar27);
                  std::__shared_weak_count::__release_weak();
                  uVar15 = extraout_x1_22;
                }
              }
            }
          }
          if (*(char *)(*plVar25 + 0xa8) == '\0') {
            plVar27 = *(long **)(param_1 + 0x40);
            *(undefined8 *)(param_1 + 0x38) = 0;
            *(undefined8 *)(param_1 + 0x40) = 0;
            if (plVar27 == (long *)0x0) {
              *plVar25 = 0;
              *(undefined8 *)(param_1 + 0x40) = 0;
            }
            else {
              plVar2 = plVar27 + 1;
              do {
                lVar20 = *plVar2;
                cVar5 = '\x01';
                bVar8 = (bool)ExclusiveMonitorPass(plVar2,0x10);
                if (bVar8) {
                  *plVar2 = lVar20 + -1;
                  cVar5 = ExclusiveMonitorsStatus();
                }
              } while (cVar5 != '\0');
              if (lVar20 == 0) {
                (**(code **)(*plVar27 + 0x10))(plVar27);
                std::__shared_weak_count::__release_weak();
                uVar15 = extraout_x1_23;
              }
              plVar27 = *(long **)(param_1 + 0x40);
              *plVar25 = 0;
              *(undefined8 *)(param_1 + 0x40) = 0;
              if (plVar27 != (long *)0x0) {
                plVar25 = plVar27 + 1;
                do {
                  lVar20 = *plVar25;
                  cVar5 = '\x01';
                  bVar8 = (bool)ExclusiveMonitorPass(plVar25,0x10);
                  if (bVar8) {
                    *plVar25 = lVar20 + -1;
                    cVar5 = ExclusiveMonitorsStatus();
                  }
                } while (cVar5 != '\0');
                if (lVar20 == 0) {
                  (**(code **)(*plVar27 + 0x10))(plVar27);
                  std::__shared_weak_count::__release_weak();
                  uVar15 = extraout_x1_24;
                }
              }
            }
          }
          if (*(char *)(*plVar28 + 0x88) == '\0') {
            plVar25 = *(long **)(param_1 + 0x50);
            *(undefined8 *)(param_1 + 0x48) = 0;
            *(undefined8 *)(param_1 + 0x50) = 0;
            if (plVar25 == (long *)0x0) {
              *plVar28 = 0;
              *(undefined8 *)(param_1 + 0x50) = 0;
            }
            else {
              plVar27 = plVar25 + 1;
              do {
                lVar20 = *plVar27;
                cVar5 = '\x01';
                bVar8 = (bool)ExclusiveMonitorPass(plVar27,0x10);
                if (bVar8) {
                  *plVar27 = lVar20 + -1;
                  cVar5 = ExclusiveMonitorsStatus();
                }
              } while (cVar5 != '\0');
              if (lVar20 == 0) {
                (**(code **)(*plVar25 + 0x10))(plVar25);
                std::__shared_weak_count::__release_weak();
                uVar15 = extraout_x1_25;
              }
              plVar25 = *(long **)(param_1 + 0x50);
              *plVar28 = 0;
              *(undefined8 *)(param_1 + 0x50) = 0;
              if (plVar25 != (long *)0x0) {
                plVar28 = plVar25 + 1;
                do {
                  lVar20 = *plVar28;
                  cVar5 = '\x01';
                  bVar8 = (bool)ExclusiveMonitorPass(plVar28,0x10);
                  if (bVar8) {
                    *plVar28 = lVar20 + -1;
                    cVar5 = ExclusiveMonitorsStatus();
                  }
                } while (cVar5 != '\0');
                if (lVar20 == 0) {
                  (**(code **)(*plVar25 + 0x10))(plVar25);
                  std::__shared_weak_count::__release_weak();
                  uVar15 = extraout_x1_26;
                }
              }
            }
          }
          if (*(char *)(*plVar26 + 0x88) == '\0') {
            plVar25 = *(long **)(param_1 + 0x60);
            *(undefined8 *)(param_1 + 0x58) = 0;
            *(undefined8 *)(param_1 + 0x60) = 0;
            if (plVar25 == (long *)0x0) {
              *plVar26 = 0;
              *(undefined8 *)(param_1 + 0x60) = 0;
            }
            else {
              plVar28 = plVar25 + 1;
              do {
                lVar20 = *plVar28;
                cVar5 = '\x01';
                bVar8 = (bool)ExclusiveMonitorPass(plVar28,0x10);
                if (bVar8) {
                  *plVar28 = lVar20 + -1;
                  cVar5 = ExclusiveMonitorsStatus();
                }
              } while (cVar5 != '\0');
              if (lVar20 == 0) {
                (**(code **)(*plVar25 + 0x10))(plVar25);
                std::__shared_weak_count::__release_weak();
                uVar15 = extraout_x1_27;
              }
              plVar25 = *(long **)(param_1 + 0x60);
              *plVar26 = 0;
              *(undefined8 *)(param_1 + 0x60) = 0;
              if (plVar25 != (long *)0x0) {
                plVar28 = plVar25 + 1;
                do {
                  lVar20 = *plVar28;
                  cVar5 = '\x01';
                  bVar8 = (bool)ExclusiveMonitorPass(plVar28,0x10);
                  if (bVar8) {
                    *plVar28 = lVar20 + -1;
                    cVar5 = ExclusiveMonitorsStatus();
                  }
                } while (cVar5 != '\0');
                if (lVar20 == 0) {
                  (**(code **)(*plVar25 + 0x10))(plVar25);
                  std::__shared_weak_count::__release_weak();
                  uVar15 = extraout_x1_28;
                }
              }
            }
          }
        }
      }
      FUN_71035597d0(puVar24,uVar15,(long ****)param_3,(byte ****)param_4,(long ****)pcVar17,param_6
                     ,param_7,param_8);
      (**(code **)(*(long *)*puVar24 + 0xa8))((long *)*puVar24,uVar9 & 1);
    }
  }
  fVar30 = *(float *)(*(long *)(param_1 + 0x428) + 0x218c);
  *(float *)(param_1 + 0x70) = fVar30;
  piVar29 = *(int **)(*DAT_710532a868 + 0x3c0);
  piVar22 = *(int **)(*DAT_710532a868 + 0x3c8);
  if (piVar29 != piVar22) {
    do {
      if (*piVar29 == *(int *)(param_1 + 0x10)) {
        uVar23 = *(ulong *)(piVar29 + 6);
        goto LAB_710250479c;
      }
      piVar29 = piVar29 + 0x10;
    } while (piVar22 != piVar29);
  }
  uVar23 = 0;
LAB_710250479c:
  uVar9 = 0;
  if (((uVar23 & 0xffffffffff) != 0) && (*(char *)(*DAT_710532a860 + 0x5f3d7) == '\0')) {
    param_8 = (long ***)&DAT_ffffffff;
    ppuStack_1a8 = (undefined **)0x0;
    local_1b0 = (long ********)0x0;
    local_80[1] = 0;
    local_80[0] = 0;
    param_3 = (long *********)0x1800000;
    uStack_88 = 0x3f800000;
    local_90 = &DAT_3f8000003f800000;
    param_4 = (undefined1 (*) [16])&local_1b0;
    pcVar17 = (code *)local_80;
    param_6 = (undefined1 (*) [16])&local_90;
    param_7 = (long ***)0x0;
    uVar9 = FUN_7103563430(*lib::Singleton<lib::EffectManager>::instance_,uVar23,0x1800000,param_4,
                           (undefined1 (*) [16])pcVar17,param_6,0,-1,0);
    fVar30 = *(float *)(param_1 + 0x70);
  }
  *(uint *)(param_1 + 0x394) = uVar9;
  if (fVar30 <= 0.0) goto LAB_71025049ac;
  piVar29 = *(int **)(*DAT_710532a868 + 0x3c0);
  piVar22 = *(int **)(*DAT_710532a868 + 0x3c8);
  if (piVar29 != piVar22) {
    do {
      if (*piVar29 == *(int *)(param_1 + 0x10)) {
        param_3 = *(long **********)(piVar29 + 8);
        goto LAB_7102504854;
      }
      piVar29 = piVar29 + 0x10;
    } while (piVar22 != piVar29);
  }
  param_3 = (long *********)0x0;
LAB_7102504854:
  FUN_71024d1440((undefined4 *)&local_1b0,*DAT_710532a860,(ulong)param_3);
  *(uint *)(param_1 + 0x398) = (uint)local_1b0;
  if (local_1a0 == 0) {
    if (((*(long *)(param_1 + 0x3a8) != 0) && (DAT_7106dd53a8 == '\x01')) &&
       (*(int *)(param_1 + 0x3b0) == DAT_7106dd53ac)) {
      piVar29 = (int *)(*(long *)(param_1 + 0x3a8) + 0x38);
      do {
        cVar5 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(piVar29,0x10);
        if (bVar8) {
          *piVar29 = *piVar29 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
    }
    *(undefined8 *)(param_1 + 0x3a8) = 0;
LAB_7102504948:
    *(undefined1 *)(param_1 + 0x3b8) = 0;
  }
  else if (*(int *)(param_1 + 0x3b4) == 0x876500) {
    if (*(int *)(param_1 + 0x3b0) == DAT_7106dd53ac) {
      if ((*(long *)(param_1 + 0x3a8) != 0) && (DAT_7106dd53a8 == '\x01')) {
        piVar29 = (int *)(*(long *)(param_1 + 0x3a8) + 0x38);
        do {
          cVar5 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(piVar29,0x10);
          if (bVar8) {
            *piVar29 = *piVar29 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
      }
      *(undefined8 *)(param_1 + 0x3a8) = 0;
      *(undefined1 *)(param_1 + 0x3b8) = 0;
    }
    else {
      *(int *)(param_1 + 0x3b0) = DAT_7106dd53ac;
    }
    *(long *)(param_1 + 0x3a8) = local_1a0;
    piVar29 = (int *)(local_1a0 + 0x38);
    do {
      cVar5 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(piVar29,0x10);
      if (bVar8) {
        *piVar29 = *piVar29 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    goto LAB_7102504948;
  }
  *(undefined8 *)(param_1 + 0x3c0) = local_188;
  *(undefined8 *)(param_1 + 0x3d0) = local_178;
  *(undefined8 *)(param_1 + 0x3c8) = uStack_180;
  ppuStack_1a8 = &PTR_FUN_7104f73d50;
  if (((local_1a0 != 0) && (DAT_7106dd53a8 == '\x01')) && (local_198 == DAT_7106dd53ac)) {
    piVar29 = (int *)(local_1a0 + 0x38);
    do {
      cVar5 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(piVar29,0x10);
      if (bVar8) {
        *piVar29 = *piVar29 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
LAB_71025049ac:
  FUN_7102504bd0(param_1);
  lVar20 = *(long *)(param_1 + 0x428);
  FUN_7102500e20(&local_220,*(int *)(param_1 + 0x10),param_3,(byte ****)param_4,(long ****)pcVar17,
                 param_6,param_7,param_8);
  *(undefined8 *)(lVar20 + 8) = local_220;
  *(undefined8 *)(lVar20 + 0x10) = uStack_218;
  *(undefined8 *)(lVar20 + 0x28) = local_200;
  *(undefined8 *)(lVar20 + 0x30) = uStack_1f8;
  *(undefined8 *)(lVar20 + 0x18) = local_210;
  *(undefined8 *)(lVar20 + 0x20) = uStack_208;
  *(undefined8 *)(lVar20 + 0x48) = local_1e0;
  *(undefined8 *)(lVar20 + 0x50) = uStack_1d8;
  *(undefined8 *)(lVar20 + 0x38) = local_1f0;
  *(undefined8 *)(lVar20 + 0x40) = uStack_1e8;
  *(ulong *)(lVar20 + 0x6d) = CONCAT53(uStack_1b8,local_1bb);
  *(undefined8 *)(lVar20 + 0x58) = local_1d0;
  *(undefined8 *)(lVar20 + 0x60) = uStack_1c8;
  *(ulong *)(lVar20 + 0x68) = CONCAT35(local_1bb,uStack_1c0);
  *(float *)(lVar20 + 0x70) = *(float *)(lVar20 + 0x70) + 90.0;
  return;
}

