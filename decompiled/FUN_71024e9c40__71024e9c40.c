// addr:      71024e9c40
// offset:    0x24e9c40
// name:      FUN_71024e9c40
// mangled:   
// signature: undefined __cdecl FUN_71024e9c40(long param_1, undefined8 param_2, long * * * * * * * * * param_3, byte * * * * param_4, long * * * * param_5, long * param_6, long * * * param_7, long * * * param_8)


void FUN_71024e9c40(long param_1,undefined8 param_2,long *********param_3,byte ****param_4,
                   long ****param_5,long *param_6,long ***param_7,long ***param_8)

{
  long *plVar1;
  uint uVar2;
  byte bVar3;
  char cVar4;
  long ********pppppppplVar5;
  bool bVar6;
  int iVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
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
  undefined8 uVar11;
  undefined8 extraout_x1_20;
  undefined8 extraout_x1_21;
  undefined8 extraout_x1_22;
  undefined8 extraout_x1_23;
  undefined8 extraout_x1_24;
  undefined8 extraout_x1_25;
  char *pcVar12;
  long *********ppppppppplVar13;
  byte ****ppppbVar14;
  code *pcVar15;
  long lVar16;
  uint uVar17;
  long lVar18;
  int *piVar19;
  int *piVar20;
  uint uVar21;
  long *plVar22;
  long *plVar23;
  long *plVar24;
  long *plVar25;
  ulong uVar26;
  undefined1 auVar27 [16];
  long local_d8;
  long *plStack_d0;
  long ***local_c8;
  long *local_c0;
  byte ***local_b8;
  long *local_b0;
  long ********local_a8;
  long *local_a0;
  uint local_98 [2];
  long local_90;
  long *local_88;
  uint local_80 [2];
  long ********local_78;
  long *local_70;
  uint local_68 [2];
  
  plVar22 = (long *)(param_1 + 0xe8);
  if (*plVar22 == 0) {
LAB_71024e9d00:
    uVar21 = *(uint *)(param_1 + 0x10);
    lVar18 = DAT_7105332f20;
  }
  else {
    FUN_71035598f0(plVar22,param_2,(long ****)param_3,param_4,param_5,param_6,param_7,param_8);
    plVar23 = *(long **)(param_1 + 0xf0);
    *(undefined8 *)(param_1 + 0xe8) = 0;
    *(undefined8 *)(param_1 + 0xf0) = 0;
    if (plVar23 == (long *)0x0) {
      *plVar22 = 0;
      *(undefined8 *)(param_1 + 0xf0) = 0;
      goto LAB_71024e9d00;
    }
    plVar24 = plVar23 + 1;
    do {
      lVar18 = *plVar24;
      cVar4 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar24,0x10);
      if (bVar6) {
        *plVar24 = lVar18 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar18 == 0) {
      (**(code **)(*plVar23 + 0x10))(plVar23);
      std::__shared_weak_count::__release_weak();
    }
    plVar23 = *(long **)(param_1 + 0xf0);
    *plVar22 = 0;
    *(undefined8 *)(param_1 + 0xf0) = 0;
    if (plVar23 == (long *)0x0) goto LAB_71024e9d00;
    plVar24 = plVar23 + 1;
    do {
      lVar18 = *plVar24;
      cVar4 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar24,0x10);
      if (bVar6) {
        *plVar24 = lVar18 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar18 != 0) goto LAB_71024e9d00;
    (**(code **)(*plVar23 + 0x10))(plVar23);
    std::__shared_weak_count::__release_weak();
    uVar21 = *(uint *)(param_1 + 0x10);
    lVar18 = DAT_7105332f20;
  }
  if ((int)uVar21 < 0) {
    DAT_7105332f20 = lVar18;
    return;
  }
  if (*(char *)(param_1 + 0x167) != '\0') {
    piVar19 = *(int **)(*DAT_710532a868 + 0x2e8);
    piVar20 = *(int **)(*DAT_710532a868 + 0x2f0);
    if (piVar19 != piVar20) {
      uVar17 = 0;
      do {
        if (*piVar19 == *(int *)(*DAT_710532a860 + 0x78)) {
          if (uVar17 == uVar21) {
            if ((*(ulong *)(piVar19 + 8) & 0xffffffffff) != 0) {
              uVar17 = 0xcee0;
              goto LAB_71024e9d6c;
            }
            break;
          }
          uVar17 = uVar17 + 1;
        }
        piVar19 = piVar19 + 0x16;
      } while (piVar20 != piVar19);
    }
  }
  uVar17 = 0xcce0;
LAB_71024e9d6c:
  uVar21 = *(uint *)(*DAT_710532a860 + (ulong)uVar21 * 4 + (ulong)(uVar17 | 0x30000));
  DAT_7105332f20 = lVar18;
  local_80[0] = uVar21;
  if ((uVar21 != 0xffffff) && (uVar21 < *(uint *)(lVar18 + 0x48))) {
    std::recursive_mutex::lock();
    if ((*(byte *)(*(long *)(lVar18 + 0x40) + (ulong)uVar21 * 0x48 + 8) & 1) == 0) {
      std::recursive_mutex::unlock();
      FUN_7103540d50(lVar18,uVar21,param_3,param_4,param_5,param_6,param_7,param_8);
    }
    else {
      FUN_71035432d0((int *)(*(long *)(lVar18 + 0x40) + (ulong)uVar21 * 0x48));
      std::recursive_mutex::unlock();
    }
  }
  pcVar12 = "model.numdlb";
  FUN_710353e1d0((uint *)&local_78,local_80,(byte *)"model.numdlb");
  if ((uint)local_78 != 0xffffff) {
    FUN_7103540b10(DAT_7105332f20,(uint)local_78,(long *********)pcVar12,param_4,param_5,param_6,
                   param_7,param_8);
  }
  if (((uint)local_78 == 0xffffff) ||
     (lVar18 = **(long **)(DAT_7105332f20 + 0x78),
     *(uint *)(*(long *)(lVar18 + 0x40) + 4) <= (uint)local_78)) {
    local_78 = (long ********)0x0;
  }
  else {
    local_78 = (long ********)
               (*(ulong *)(*(long *)(lVar18 + 0x60) + ((ulong)local_78 & 0xffffffff) * 0x20) &
               0xffffffffff);
  }
  lVar18 = (*(long **)(DAT_7105332f20 + 0x78))[1];
  pcVar15 = FUN_7103542240;
  ppppbVar14 = (byte ****)&DAT_00000008;
  puVar8 = bsearch(&local_78,*(void **)(lVar18 + 0x20),(ulong)*(uint *)(*(long *)(lVar18 + 8) + 8),8
                   ,FUN_7103542240);
  local_68[0] = 0xffffff;
  if (puVar8 != (undefined8 *)0x0) {
    uVar21 = (uint)((ulong)*puVar8 >> 0x20);
    uVar17 = uVar21 >> 8;
    if ((uVar17 != 0xffffff) &&
       (uVar2 = *(uint *)(*(long *)(lVar18 + 8) + 4), local_68[0] = uVar21 >> 8,
       uVar2 < uVar17 || uVar2 == local_68[0])) {
      local_68[0] = 0xffffff;
    }
  }
  ppppppppplVar13 = (long *********)&DAT_00000004;
  FUN_71035c2890(&local_78,local_68,(long *********)&DAT_00000004,ppppbVar14,(long ****)pcVar15,
                 param_6,param_7,param_8);
  plVar23 = local_70;
  pppppppplVar5 = local_78;
  local_78 = (long ********)0x0;
  local_70 = (long *)0x0;
  plVar24 = *(long **)(param_1 + 0xf0);
  *(long *********)(param_1 + 0xe8) = pppppppplVar5;
  *(long **)(param_1 + 0xf0) = plVar23;
  uVar11 = extraout_x1;
  if (plVar24 != (long *)0x0) {
    plVar23 = plVar24 + 1;
    do {
      lVar18 = *plVar23;
      cVar4 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar23,0x10);
      if (bVar6) {
        *plVar23 = lVar18 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar18 == 0) {
      (**(code **)(*plVar24 + 0x10))(plVar24);
      std::__shared_weak_count::__release_weak();
      uVar11 = extraout_x1_00;
    }
  }
  if (local_70 != (long *)0x0) {
    plVar23 = local_70 + 1;
    do {
      lVar18 = *plVar23;
      cVar4 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar23,0x10);
      if (bVar6) {
        *plVar23 = lVar18 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar18 == 0) {
      (**(code **)(*local_70 + 0x10))(local_70);
      std::__shared_weak_count::__release_weak();
      uVar11 = extraout_x1_01;
    }
  }
  lVar18 = DAT_7105332f20;
  uVar26 = (ulong)local_80[0];
  if (local_80[0] != 0xffffff) {
    if (local_80[0] < *(uint *)(DAT_7105332f20 + 0x48)) {
      std::recursive_mutex::lock();
      lVar16 = *(long *)(lVar18 + 0x40);
      if ((*(byte *)(lVar16 + uVar26 * 0x48 + 8) & 1) != 0) {
        FUN_710353f5a0(lVar18,(int *)(lVar16 + uVar26 * 0x48),(long ****)ppppppppplVar13,ppppbVar14,
                       (long ****)pcVar15,param_6,param_7,param_8);
      }
      std::recursive_mutex::unlock();
      uVar11 = extraout_x1_02;
    }
    local_80[0] = 0xffffff;
  }
  puVar8 = (undefined8 *)(param_1 + 0xf8);
  *puVar8 = 0;
  plVar23 = *(long **)(param_1 + 0x100);
  *(undefined8 *)(param_1 + 0x100) = 0;
  if (plVar23 != (long *)0x0) {
    plVar24 = plVar23 + 1;
    do {
      lVar18 = *plVar24;
      cVar4 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar24,0x10);
      if (bVar6) {
        *plVar24 = lVar18 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar18 == 0) {
      (**(code **)(*plVar23 + 0x10))(plVar23);
      std::__shared_weak_count::__release_weak();
      uVar11 = extraout_x1_03;
    }
  }
  plVar23 = *(long **)(param_1 + 0x110);
  *(undefined8 *)(param_1 + 0x108) = 0;
  *(undefined8 *)(param_1 + 0x110) = 0;
  if (plVar23 != (long *)0x0) {
    plVar24 = plVar23 + 1;
    do {
      lVar18 = *plVar24;
      cVar4 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar24,0x10);
      if (bVar6) {
        *plVar24 = lVar18 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar18 == 0) {
      (**(code **)(*plVar23 + 0x10))(plVar23);
      std::__shared_weak_count::__release_weak();
      uVar11 = extraout_x1_04;
    }
  }
  plVar23 = *(long **)(param_1 + 0x120);
  *(undefined8 *)(param_1 + 0x118) = 0;
  *(undefined8 *)(param_1 + 0x120) = 0;
  if (plVar23 != (long *)0x0) {
    plVar24 = plVar23 + 1;
    do {
      lVar18 = *plVar24;
      cVar4 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar24,0x10);
      if (bVar6) {
        *plVar24 = lVar18 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar18 == 0) {
      (**(code **)(*plVar23 + 0x10))(plVar23);
      std::__shared_weak_count::__release_weak();
      uVar11 = extraout_x1_05;
    }
  }
  plVar23 = *(long **)(param_1 + 0x130);
  *(undefined8 *)(param_1 + 0x128) = 0;
  *(undefined8 *)(param_1 + 0x130) = 0;
  if (plVar23 != (long *)0x0) {
    plVar24 = plVar23 + 1;
    do {
      lVar18 = *plVar24;
      cVar4 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar24,0x10);
      if (bVar6) {
        *plVar24 = lVar18 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar18 == 0) {
      (**(code **)(*plVar23 + 0x10))(plVar23);
      std::__shared_weak_count::__release_weak();
      uVar11 = extraout_x1_06;
    }
  }
  lVar18 = DAT_7105332f20;
  if (*(char *)(param_1 + 0x167) != '\0') {
    piVar19 = *(int **)(*DAT_710532a868 + 0x2e8);
    piVar20 = *(int **)(*DAT_710532a868 + 0x2f0);
    if (piVar19 != piVar20) {
      uVar21 = 0;
      do {
        if (*piVar19 == *(int *)(*DAT_710532a860 + 0x78)) {
          if (uVar21 == *(uint *)(param_1 + 0x10)) {
            if ((*(ulong *)(piVar19 + 10) & 0xffffffffff) != 0) {
              uVar21 = 0xcfe0;
              goto LAB_71024ea114;
            }
            break;
          }
          uVar21 = uVar21 + 1;
        }
        piVar19 = piVar19 + 0x16;
      } while (piVar20 != piVar19);
    }
  }
  uVar21 = 0xcde0;
LAB_71024ea114:
  uVar21 = *(uint *)(*DAT_710532a860 + (ulong)*(uint *)(param_1 + 0x10) * 4 +
                    (ulong)(uVar21 | 0x30000));
  if (uVar21 != 0xffffff) {
    if (uVar21 < *(uint *)(DAT_7105332f20 + 0x48)) {
      std::recursive_mutex::lock();
      lVar16 = *(long *)(lVar18 + 0x40);
      if ((*(byte *)(lVar16 + (ulong)uVar21 * 0x48 + 8) & 1) == 0) {
        std::recursive_mutex::unlock();
        FUN_7103540d50(lVar18,uVar21,ppppppppplVar13,ppppbVar14,(long ****)pcVar15,param_6,param_7,
                       param_8);
        uVar11 = extraout_x1_07;
      }
      else {
        FUN_71035432d0((int *)(lVar16 + (ulong)uVar21 * 0x48));
        std::recursive_mutex::unlock();
        uVar11 = extraout_x1_08;
      }
      if (uVar21 == 0xffffff) goto LAB_71024ea9f0;
    }
    lVar18 = DAT_7105332f20;
    if (uVar21 < *(uint *)(DAT_7105332f20 + 0x48)) {
      std::recursive_mutex::lock();
      piVar19 = (int *)(*(long *)(lVar18 + 0x40) + (ulong)uVar21 * 0x48);
      bVar3 = *(byte *)(piVar19 + 2);
      std::recursive_mutex::unlock();
      uVar11 = extraout_x1_09;
      if (((bVar3 & 1) == 0) || (piVar19 == (int *)0x0)) goto LAB_71024ea210;
      if (*piVar19 == 0xffffff) {
        iVar7 = -1;
      }
      else {
        iVar7 = FUN_7103543080((long)piVar19);
        uVar11 = extraout_x1_10;
      }
      bVar6 = iVar7 == 3;
      if (uVar21 != 0xffffff) goto LAB_71024ea230;
    }
    else {
LAB_71024ea210:
      if (uVar21 == 0xffffff) goto LAB_71024ea9f0;
      bVar6 = false;
LAB_71024ea230:
      lVar18 = DAT_7105332f20;
      if (uVar21 < *(uint *)(DAT_7105332f20 + 0x48)) {
        std::recursive_mutex::lock();
        lVar16 = *(long *)(lVar18 + 0x40);
        if ((*(byte *)(lVar16 + (ulong)uVar21 * 0x48 + 8) & 1) != 0) {
          FUN_710353f5a0(lVar18,(int *)(lVar16 + (ulong)uVar21 * 0x48),(long ****)ppppppppplVar13,
                         ppppbVar14,(long ****)pcVar15,param_6,param_7,param_8);
        }
        std::recursive_mutex::unlock();
        uVar11 = extraout_x1_11;
      }
    }
    if (bVar6) {
      puVar9 = (undefined8 *)
               FUN_710392e290(0x10,0x30,(long ****)ppppppppplVar13,ppppbVar14,(long ****)pcVar15,
                              param_6,param_7,param_8);
      if (puVar9 == (undefined8 *)0x0) {
        if (DAT_7105332f00 != (long *)0x0) {
          local_68[0] = 0;
          local_78 = (long ********)&DAT_00000030;
          ppppppppplVar13 = &local_78;
          uVar26 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,local_68);
          if (((uVar26 & 1) != 0) &&
             (puVar9 = (undefined8 *)
                       FUN_710392e290(0x10,0x30,(long ****)ppppppppplVar13,ppppbVar14,
                                      (long ****)pcVar15,param_6,param_7,param_8),
             puVar9 != (undefined8 *)0x0)) goto LAB_71024ea2e4;
        }
        puVar9 = (undefined8 *)0x0;
      }
LAB_71024ea2e4:
      *puVar9 = &PTR_FUN_7105239200;
      puVar9[3] = 0;
      puVar9[4] = 0;
      *(undefined4 *)(puVar9 + 5) = 0x3f800000;
      puVar9[1] = 0;
      puVar9[2] = 0;
      puVar10 = (undefined8 *)
                FUN_710392e290(0x10,0x20,(long ****)ppppppppplVar13,ppppbVar14,(long ****)pcVar15,
                               param_6,param_7,param_8);
      if (puVar10 == (undefined8 *)0x0) {
        if (DAT_7105332f00 != (long *)0x0) {
          local_68[0] = 0;
          local_78 = (long ********)&SUB_00000020;
          ppppppppplVar13 = &local_78;
          uVar26 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,local_68);
          if (((uVar26 & 1) != 0) &&
             (puVar10 = (undefined8 *)
                        FUN_710392e290(0x10,0x20,(long ****)ppppppppplVar13,ppppbVar14,
                                       (long ****)pcVar15,param_6,param_7,param_8),
             puVar10 != (undefined8 *)0x0)) goto LAB_71024ea354;
        }
        puVar10 = (undefined8 *)0x0;
      }
LAB_71024ea354:
      *puVar10 = &DAT_7105239240;
      puVar10[1] = 0;
      puVar10[2] = 0;
      puVar10[3] = puVar9;
      *(undefined8 **)(param_1 + 0xf8) = puVar9;
      plVar23 = *(long **)(param_1 + 0x100);
      *(undefined8 **)(param_1 + 0x100) = puVar10;
      if (plVar23 != (long *)0x0) {
        plVar24 = plVar23 + 1;
        do {
          lVar18 = *plVar24;
          cVar4 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar24,0x10);
          if (bVar6) {
            *plVar24 = lVar18 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (lVar18 == 0) {
          (**(code **)(*plVar23 + 0x10))(plVar23);
          std::__shared_weak_count::__release_weak();
        }
      }
      puVar9 = (undefined8 *)
               FUN_710392e290(0x10,200,(long ****)ppppppppplVar13,ppppbVar14,(long ****)pcVar15,
                              param_6,param_7,param_8);
      uVar11 = extraout_x1_12;
      if (puVar9 == (undefined8 *)0x0) {
        if (DAT_7105332f00 != (long *)0x0) {
          local_68[0] = 0;
          local_78 = (long ********)&DAT_000000c8;
          ppppppppplVar13 = &local_78;
          auVar27 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,local_68);
          uVar11 = auVar27._8_8_;
          if (((auVar27._0_8_ & 1) != 0) &&
             (puVar9 = (undefined8 *)
                       FUN_710392e290(0x10,200,(long ****)ppppppppplVar13,ppppbVar14,
                                      (long ****)pcVar15,param_6,param_7,param_8),
             uVar11 = extraout_x1_13, puVar9 != (undefined8 *)0x0)) goto LAB_71024ea400;
        }
        puVar9 = (undefined8 *)0x0;
      }
LAB_71024ea400:
      puVar9[1] = 0;
      puVar9[2] = 0;
      *puVar9 = &PTR_FUN_7104f76000;
      FUN_710367adf0(puVar9 + 3,uVar11,(long ****)ppppppppplVar13,ppppbVar14,(long ****)pcVar15,
                     param_6,param_7,param_8);
      *(undefined8 **)(param_1 + 0x108) = puVar9 + 3;
      plVar23 = *(long **)(param_1 + 0x110);
      *(undefined8 **)(param_1 + 0x110) = puVar9;
      if (plVar23 != (long *)0x0) {
        plVar24 = plVar23 + 1;
        do {
          lVar18 = *plVar24;
          cVar4 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar24,0x10);
          if (bVar6) {
            *plVar24 = lVar18 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (lVar18 == 0) {
          (**(code **)(*plVar23 + 0x10))(plVar23);
          std::__shared_weak_count::__release_weak();
        }
      }
      puVar9 = (undefined8 *)
               FUN_710392e290(0x10,0xa8,(long ****)ppppppppplVar13,ppppbVar14,(long ****)pcVar15,
                              param_6,param_7,param_8);
      uVar11 = extraout_x1_14;
      if (puVar9 == (undefined8 *)0x0) {
        if (DAT_7105332f00 != (long *)0x0) {
          local_68[0] = 0;
          local_78 = (long ********)&DAT_000000a8;
          ppppppppplVar13 = &local_78;
          auVar27 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,local_68);
          uVar11 = auVar27._8_8_;
          if (((auVar27._0_8_ & 1) != 0) &&
             (puVar9 = (undefined8 *)
                       FUN_710392e290(0x10,0xa8,(long ****)ppppppppplVar13,ppppbVar14,
                                      (long ****)pcVar15,param_6,param_7,param_8),
             uVar11 = extraout_x1_15, puVar9 != (undefined8 *)0x0)) goto LAB_71024ea4b8;
        }
        puVar9 = (undefined8 *)0x0;
      }
LAB_71024ea4b8:
      puVar9[1] = 0;
      puVar9[2] = 0;
      *puVar9 = &PTR_FUN_71050c0538;
      FUN_7103680c00(puVar9 + 3,uVar11,(long ****)ppppppppplVar13,ppppbVar14,(long ****)pcVar15,
                     param_6,param_7,param_8);
      *(undefined8 **)(param_1 + 0x118) = puVar9 + 3;
      plVar23 = *(long **)(param_1 + 0x120);
      *(undefined8 **)(param_1 + 0x120) = puVar9;
      if (plVar23 != (long *)0x0) {
        plVar24 = plVar23 + 1;
        do {
          lVar18 = *plVar24;
          cVar4 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar24,0x10);
          if (bVar6) {
            *plVar24 = lVar18 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (lVar18 == 0) {
          (**(code **)(*plVar23 + 0x10))(plVar23);
          std::__shared_weak_count::__release_weak();
        }
      }
      puVar9 = (undefined8 *)
               FUN_710392e290(0x10,0xa8,(long ****)ppppppppplVar13,ppppbVar14,(long ****)pcVar15,
                              param_6,param_7,param_8);
      uVar11 = extraout_x1_16;
      if (puVar9 == (undefined8 *)0x0) {
        if (DAT_7105332f00 != (long *)0x0) {
          local_68[0] = 0;
          local_78 = (long ********)&DAT_000000a8;
          ppppppppplVar13 = &local_78;
          auVar27 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,local_68);
          uVar11 = auVar27._8_8_;
          if (((auVar27._0_8_ & 1) != 0) &&
             (puVar9 = (undefined8 *)
                       FUN_710392e290(0x10,0xa8,(long ****)ppppppppplVar13,ppppbVar14,
                                      (long ****)pcVar15,param_6,param_7,param_8),
             uVar11 = extraout_x1_17, puVar9 != (undefined8 *)0x0)) goto LAB_71024ea570;
        }
        puVar9 = (undefined8 *)0x0;
      }
LAB_71024ea570:
      puVar9[1] = 0;
      puVar9[2] = 0;
      *puVar9 = &PTR_FUN_71050c0570;
      FUN_710367c690(puVar9 + 3,uVar11,(long ****)ppppppppplVar13,ppppbVar14,(long ****)pcVar15,
                     param_6,param_7,param_8);
      *(undefined8 **)(param_1 + 0x128) = puVar9 + 3;
      plVar23 = *(long **)(param_1 + 0x130);
      *(undefined8 **)(param_1 + 0x130) = puVar9;
      if (plVar23 != (long *)0x0) {
        plVar24 = plVar23 + 1;
        do {
          lVar18 = *plVar24;
          cVar4 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar24,0x10);
          if (bVar6) {
            *plVar24 = lVar18 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (lVar18 == 0) {
          (**(code **)(*plVar23 + 0x10))(plVar23);
          std::__shared_weak_count::__release_weak();
        }
      }
      local_90 = *(long *)(param_1 + 0xe8);
      local_88 = *(long **)(param_1 + 0xf0);
      if (local_88 != (long *)0x0) {
        plVar23 = local_88 + 1;
        do {
          cVar4 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar23,0x10);
          if (bVar6) {
            *plVar23 = *plVar23 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
      }
      lVar18 = DAT_7105332f20;
      if (*(char *)(param_1 + 0x167) != '\0') {
        piVar19 = *(int **)(*DAT_710532a868 + 0x2e8);
        piVar20 = *(int **)(*DAT_710532a868 + 0x2f0);
        if (piVar19 != piVar20) {
          uVar21 = 0;
          do {
            if (*piVar19 == *(int *)(*DAT_710532a860 + 0x78)) {
              if (uVar21 == *(uint *)(param_1 + 0x10)) {
                if ((*(ulong *)(piVar19 + 10) & 0xffffffffff) != 0) {
                  uVar21 = 0xcfe0;
                  goto LAB_71024ea658;
                }
                break;
              }
              uVar21 = uVar21 + 1;
            }
            piVar19 = piVar19 + 0x16;
          } while (piVar20 != piVar19);
        }
      }
      uVar21 = 0xcde0;
LAB_71024ea658:
      uVar21 = *(uint *)(*DAT_710532a860 + (ulong)*(uint *)(param_1 + 0x10) * 4 +
                        (ulong)(uVar21 | 0x30000));
      local_98[0] = uVar21;
      if ((uVar21 != 0xffffff) && (uVar21 < *(uint *)(DAT_7105332f20 + 0x48))) {
        std::recursive_mutex::lock();
        lVar16 = *(long *)(lVar18 + 0x40);
        if ((*(byte *)(lVar16 + (ulong)uVar21 * 0x48 + 8) & 1) == 0) {
          std::recursive_mutex::unlock();
          FUN_7103540d50(lVar18,uVar21,ppppppppplVar13,ppppbVar14,(long ****)pcVar15,param_6,param_7
                         ,param_8);
        }
        else {
          FUN_71035432d0((int *)(lVar16 + (ulong)uVar21 * 0x48));
          std::recursive_mutex::unlock();
        }
      }
      local_a8 = *(long *********)(param_1 + 0xf8);
      local_a0 = *(long **)(param_1 + 0x100);
      if (local_a0 != (long *)0x0) {
        plVar23 = local_a0 + 1;
        do {
          cVar4 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar23,0x10);
          if (bVar6) {
            *plVar23 = *plVar23 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
      }
      local_b8 = *(byte ****)(param_1 + 0x108);
      local_b0 = *(long **)(param_1 + 0x110);
      if (local_b0 != (long *)0x0) {
        plVar23 = local_b0 + 1;
        do {
          cVar4 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar23,0x10);
          if (bVar6) {
            *plVar23 = *plVar23 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
      }
      local_c8 = *(long ****)(param_1 + 0x118);
      local_c0 = *(long **)(param_1 + 0x120);
      if (local_c0 != (long *)0x0) {
        plVar23 = local_c0 + 1;
        do {
          cVar4 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar23,0x10);
          if (bVar6) {
            *plVar23 = *plVar23 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
      }
      local_d8 = *(long *)(param_1 + 0x128);
      plVar23 = *(long **)(param_1 + 0x130);
      plStack_d0 = plVar23;
      if (plVar23 == (long *)0x0) {
        ppppppppplVar13 = &local_a8;
        ppppbVar14 = &local_b8;
        pcVar15 = (code *)&local_c8;
        param_6 = &local_d8;
        FUN_71024cc230(&local_90,local_98,ppppppppplVar13,ppppbVar14,(long ****)pcVar15,param_6,
                       param_7,param_8);
      }
      else {
        plVar24 = plVar23 + 1;
        do {
          cVar4 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar24,0x10);
          if (bVar6) {
            *plVar24 = *plVar24 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        ppppppppplVar13 = &local_a8;
        ppppbVar14 = &local_b8;
        pcVar15 = (code *)&local_c8;
        param_6 = &local_d8;
        FUN_71024cc230(&local_90,local_98,ppppppppplVar13,ppppbVar14,(long ****)pcVar15,param_6,
                       param_7,param_8);
        do {
          lVar18 = *plVar24;
          cVar4 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar24,0x10);
          if (bVar6) {
            *plVar24 = lVar18 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (lVar18 == 0) {
          (**(code **)(*plVar23 + 0x10))(plVar23);
          std::__shared_weak_count::__release_weak();
        }
      }
      if (local_c0 != (long *)0x0) {
        plVar23 = local_c0 + 1;
        do {
          lVar18 = *plVar23;
          cVar4 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar23,0x10);
          if (bVar6) {
            *plVar23 = lVar18 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (lVar18 == 0) {
          (**(code **)(*local_c0 + 0x10))(local_c0);
          std::__shared_weak_count::__release_weak();
        }
      }
      if (local_b0 != (long *)0x0) {
        plVar23 = local_b0 + 1;
        do {
          lVar18 = *plVar23;
          cVar4 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar23,0x10);
          if (bVar6) {
            *plVar23 = lVar18 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (lVar18 == 0) {
          (**(code **)(*local_b0 + 0x10))(local_b0);
          std::__shared_weak_count::__release_weak();
        }
      }
      if (local_a0 != (long *)0x0) {
        plVar23 = local_a0 + 1;
        do {
          lVar18 = *plVar23;
          cVar4 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar23,0x10);
          if (bVar6) {
            *plVar23 = lVar18 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (lVar18 == 0) {
          (**(code **)(*local_a0 + 0x10))(local_a0);
          std::__shared_weak_count::__release_weak();
        }
      }
      lVar18 = DAT_7105332f20;
      uVar26 = (ulong)local_98[0];
      if (local_98[0] != 0xffffff) {
        if (local_98[0] < *(uint *)(DAT_7105332f20 + 0x48)) {
          std::recursive_mutex::lock();
          lVar16 = *(long *)(lVar18 + 0x40);
          if ((*(byte *)(lVar16 + uVar26 * 0x48 + 8) & 1) != 0) {
            FUN_710353f5a0(lVar18,(int *)(lVar16 + uVar26 * 0x48),(long ****)ppppppppplVar13,
                           ppppbVar14,(long ****)pcVar15,param_6,param_7,param_8);
          }
          std::recursive_mutex::unlock();
        }
        local_98[0] = 0xffffff;
      }
      if (local_88 != (long *)0x0) {
        plVar23 = local_88 + 1;
        do {
          lVar18 = *plVar23;
          cVar4 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar23,0x10);
          if (bVar6) {
            *plVar23 = lVar18 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (lVar18 == 0) {
          (**(code **)(*local_88 + 0x10))(local_88);
          std::__shared_weak_count::__release_weak();
        }
      }
      plVar23 = (long *)(param_1 + 0x108);
      auVar27 = (**(code **)(*(long *)*puVar8 + 0x28))();
      uVar11 = auVar27._8_8_;
      if ((auVar27._0_8_ & 1) != 0) {
        plVar24 = *(long **)(param_1 + 0x100);
        *(undefined8 *)(param_1 + 0xf8) = 0;
        *(undefined8 *)(param_1 + 0x100) = 0;
        if (plVar24 == (long *)0x0) {
          *puVar8 = 0;
          *(undefined8 *)(param_1 + 0x100) = 0;
        }
        else {
          plVar25 = plVar24 + 1;
          do {
            lVar18 = *plVar25;
            cVar4 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(plVar25,0x10);
            if (bVar6) {
              *plVar25 = lVar18 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (lVar18 == 0) {
            (**(code **)(*plVar24 + 0x10))(plVar24);
            std::__shared_weak_count::__release_weak();
            uVar11 = extraout_x1_18;
          }
          plVar24 = *(long **)(param_1 + 0x100);
          *puVar8 = 0;
          *(undefined8 *)(param_1 + 0x100) = 0;
          if (plVar24 != (long *)0x0) {
            plVar25 = plVar24 + 1;
            do {
              lVar18 = *plVar25;
              cVar4 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(plVar25,0x10);
              if (bVar6) {
                *plVar25 = lVar18 + -1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (lVar18 == 0) {
              (**(code **)(*plVar24 + 0x10))(plVar24);
              std::__shared_weak_count::__release_weak();
              uVar11 = extraout_x1_19;
            }
          }
        }
      }
      plVar24 = (long *)(param_1 + 0x118);
      if (*(char *)(*plVar23 + 0xa8) == '\0') {
        plVar25 = *(long **)(param_1 + 0x110);
        *(undefined8 *)(param_1 + 0x108) = 0;
        *(undefined8 *)(param_1 + 0x110) = 0;
        if (plVar25 == (long *)0x0) {
          *plVar23 = 0;
          *(undefined8 *)(param_1 + 0x110) = 0;
        }
        else {
          plVar1 = plVar25 + 1;
          do {
            lVar18 = *plVar1;
            cVar4 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar6) {
              *plVar1 = lVar18 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (lVar18 == 0) {
            (**(code **)(*plVar25 + 0x10))(plVar25);
            std::__shared_weak_count::__release_weak();
            uVar11 = extraout_x1_20;
          }
          plVar25 = *(long **)(param_1 + 0x110);
          *plVar23 = 0;
          *(undefined8 *)(param_1 + 0x110) = 0;
          if (plVar25 != (long *)0x0) {
            plVar23 = plVar25 + 1;
            do {
              lVar18 = *plVar23;
              cVar4 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(plVar23,0x10);
              if (bVar6) {
                *plVar23 = lVar18 + -1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (lVar18 == 0) {
              (**(code **)(*plVar25 + 0x10))(plVar25);
              std::__shared_weak_count::__release_weak();
              uVar11 = extraout_x1_21;
            }
          }
        }
      }
      plVar23 = (long *)(param_1 + 0x128);
      if (*(char *)(*plVar24 + 0x88) == '\0') {
        plVar25 = *(long **)(param_1 + 0x120);
        *(undefined8 *)(param_1 + 0x118) = 0;
        *(undefined8 *)(param_1 + 0x120) = 0;
        if (plVar25 == (long *)0x0) {
          *plVar24 = 0;
          *(undefined8 *)(param_1 + 0x120) = 0;
        }
        else {
          plVar1 = plVar25 + 1;
          do {
            lVar18 = *plVar1;
            cVar4 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar6) {
              *plVar1 = lVar18 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (lVar18 == 0) {
            (**(code **)(*plVar25 + 0x10))(plVar25);
            std::__shared_weak_count::__release_weak();
            uVar11 = extraout_x1_22;
          }
          plVar25 = *(long **)(param_1 + 0x120);
          *plVar24 = 0;
          *(undefined8 *)(param_1 + 0x120) = 0;
          if (plVar25 != (long *)0x0) {
            plVar24 = plVar25 + 1;
            do {
              lVar18 = *plVar24;
              cVar4 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(plVar24,0x10);
              if (bVar6) {
                *plVar24 = lVar18 + -1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (lVar18 == 0) {
              (**(code **)(*plVar25 + 0x10))(plVar25);
              std::__shared_weak_count::__release_weak();
              uVar11 = extraout_x1_23;
            }
          }
        }
      }
      if (*(char *)(*plVar23 + 0x88) == '\0') {
        plVar24 = *(long **)(param_1 + 0x130);
        *(undefined8 *)(param_1 + 0x128) = 0;
        *(undefined8 *)(param_1 + 0x130) = 0;
        if (plVar24 == (long *)0x0) {
          *plVar23 = 0;
          *(undefined8 *)(param_1 + 0x130) = 0;
          cVar4 = *(char *)(param_1 + 0x164);
          goto joined_r0x0071024eaba8;
        }
        plVar25 = plVar24 + 1;
        do {
          lVar18 = *plVar25;
          cVar4 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar25,0x10);
          if (bVar6) {
            *plVar25 = lVar18 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (lVar18 == 0) {
          (**(code **)(*plVar24 + 0x10))(plVar24);
          std::__shared_weak_count::__release_weak();
          uVar11 = extraout_x1_24;
        }
        plVar24 = *(long **)(param_1 + 0x130);
        *plVar23 = 0;
        *(undefined8 *)(param_1 + 0x130) = 0;
        if (plVar24 != (long *)0x0) {
          plVar23 = plVar24 + 1;
          do {
            lVar18 = *plVar23;
            cVar4 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(plVar23,0x10);
            if (bVar6) {
              *plVar23 = lVar18 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (lVar18 == 0) {
            (**(code **)(*plVar24 + 0x10))(plVar24);
            std::__shared_weak_count::__release_weak();
            cVar4 = *(char *)(param_1 + 0x164);
            uVar11 = extraout_x1_25;
            goto joined_r0x0071024eaba8;
          }
        }
      }
    }
  }
LAB_71024ea9f0:
  cVar4 = *(char *)(param_1 + 0x164);
joined_r0x0071024eaba8:
  if (cVar4 != '\0') {
    FUN_71035597d0(plVar22,uVar11,(long ****)ppppppppplVar13,ppppbVar14,(long ****)pcVar15,param_6,
                   param_7,param_8);
    (**(code **)(*(long *)*plVar22 + 0xa8))((long *)*plVar22,1);
  }
  return;
}

