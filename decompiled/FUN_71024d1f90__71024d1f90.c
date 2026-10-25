// addr:      71024d1f90
// offset:    0x24d1f90
// name:      FUN_71024d1f90
// mangled:   
// signature: undefined __cdecl FUN_71024d1f90(int * param_1, int * param_2, long * * * * * * * * * param_3, byte * * * * param_4, undefined * param_5, long * param_6, long * * * param_7, long * * * param_8)


void FUN_71024d1f90(int *param_1,int *param_2,long *********param_3,byte ****param_4,
                   undefined *param_5,long *param_6,long ***param_7,long ***param_8)

{
  long *plVar1;
  uint uVar2;
  byte bVar3;
  char cVar4;
  bool bVar5;
  uint uVar6;
  long ********pppppppplVar7;
  int iVar8;
  int iVar9;
  long *plVar10;
  long lVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  int *extraout_x1;
  int *extraout_x1_00;
  int *extraout_x1_01;
  int *extraout_x1_02;
  int *extraout_x1_03;
  int *extraout_x1_04;
  int *extraout_x1_05;
  int *extraout_x1_06;
  int *extraout_x1_07;
  int *extraout_x1_08;
  int *extraout_x1_09;
  int *extraout_x1_10;
  int *extraout_x1_11;
  int *extraout_x1_12;
  int *extraout_x1_13;
  int *extraout_x1_14;
  int *extraout_x1_15;
  int *extraout_x1_16;
  undefined8 extraout_x1_17;
  undefined8 extraout_x1_18;
  undefined8 extraout_x1_19;
  undefined8 extraout_x1_20;
  undefined8 extraout_x1_21;
  undefined8 extraout_x1_22;
  undefined8 uVar14;
  int *extraout_x1_23;
  int *extraout_x1_24;
  int *extraout_x1_25;
  int *extraout_x1_26;
  int *extraout_x1_27;
  int *extraout_x1_28;
  int *extraout_x1_29;
  int *extraout_x1_30;
  int *extraout_x1_31;
  int *extraout_x1_32;
  int *extraout_x1_33;
  char *pcVar15;
  long *********ppppppppplVar16;
  byte ****ppppbVar17;
  code *pcVar18;
  ulong uVar19;
  long lVar20;
  ulong uVar21;
  uint uVar22;
  uint uVar23;
  ulong *puVar24;
  long *plVar25;
  long *plVar26;
  long *plVar27;
  long *plVar28;
  long *plVar29;
  int iVar30;
  long *plVar31;
  int *piVar32;
  int *piVar33;
  ulong uVar34;
  ulong uVar35;
  int *piVar36;
  int *piVar37;
  undefined1 auVar38 [16];
  long local_158;
  long *plStack_150;
  long ***local_148;
  long *local_140;
  byte ***local_138;
  long *local_130;
  long ********local_128;
  long *local_120;
  uint local_118 [2];
  ulong local_110;
  long *local_108;
  long ********local_100;
  long *local_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  ulong local_e0 [10];
  undefined1 *local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined5 uStack_78;
  undefined3 local_73;
  undefined5 uStack_70;
  
  local_100 = (long ********)&DAT_ffffffff;
  local_f8 = (long *)0x0;
  uVar34 = (ulong)param_5 & 0xffffffff;
  local_e0[8] = 0;
  local_e0[9] = 0;
  local_e0[6] = 0;
  local_e0[7] = 0;
  local_90 = &DAT_3f8000003f800000;
  uStack_88 = 0;
  local_e0[4] = 0;
  local_e0[5] = 0;
  local_e0[2] = 0;
  local_e0[3] = 0;
  local_e0[0] = 0;
  local_e0[1] = 0;
  local_f0 = 0;
  uStack_e8 = 0;
  uStack_70 = 0;
  local_80 = 0;
  uStack_78 = 0;
  local_73 = 0;
  piVar36 = *(int **)(*DAT_710532a868 + 0x2c0);
  iVar30 = (int)param_3;
  iVar8 = (int)param_4;
  piVar32 = *(int **)(*DAT_710532a868 + 0x2b8);
  piVar37 = piVar32;
  piVar33 = param_2;
  while (ppppppppplVar16 = param_3, ppppbVar17 = param_4, pcVar18 = (code *)param_5,
        piVar37 != piVar36) {
    if ((*piVar37 == iVar30) && (piVar37[1] == iVar8)) {
      ppppppppplVar16 = (long *********)0x95;
      memcpy(&local_100,piVar37,0x95);
      piVar33 = extraout_x1;
      pcVar18 = (code *)param_5;
      break;
    }
    piVar37 = piVar37 + 0x26;
    piVar33 = piVar37;
  }
  uVar35 = local_e0[uVar34];
  local_100 = (long ********)&DAT_ffffffff;
  local_f8 = (long *)0x0;
  local_e0[8] = 0;
  local_e0[9] = 0;
  local_e0[6] = 0;
  local_e0[7] = 0;
  local_90 = &DAT_3f8000003f800000;
  uStack_88 = 0;
  local_e0[4] = 0;
  local_e0[5] = 0;
  local_e0[2] = 0;
  local_e0[3] = 0;
  local_e0[0] = 0;
  local_e0[1] = 0;
  local_f0 = 0;
  uStack_e8 = 0;
  uStack_70 = 0;
  local_80 = 0;
  uStack_78 = 0;
  local_73 = 0;
  for (; piVar32 != piVar36; piVar32 = piVar32 + 0x26) {
    if ((*piVar32 == iVar30) && (piVar32[1] == iVar8)) {
      ppppppppplVar16 = (long *********)0x95;
      memcpy(&local_100,piVar32,0x95);
      piVar33 = extraout_x1_00;
      break;
    }
  }
  lVar11 = DAT_7105332f20;
  uVar19 = 0;
  pcVar15 = (char *)((long)param_2 + 0x45389);
  do {
    if ((((pcVar15[-1] != '\0') && (*pcVar15 == '\0')) &&
        (((*(ulong *)(pcVar15 + -0x61) ^ uVar35) & 0xffffffffff) == 0)) &&
       (((*(ulong *)(pcVar15 + -0x59) ^ local_e0[uVar34 + 3]) & 0xffffffffff) == 0)) {
      if ((int)uVar19 != 0xffff) goto LAB_71024d2280;
      break;
    }
    uVar19 = uVar19 + 1;
    pcVar15 = pcVar15 + 0x68;
  } while (uVar19 < 0x400);
  if (*(char *)((long)param_2 + 0x5f3d7) != '\0') goto LAB_71024d2240;
  uVar35 = 0;
  piVar37 = param_2 + 0x114fc;
  do {
    if ((char)piVar37[-0x1a] == '\0') {
      piVar37 = piVar37 + -0x1a;
LAB_71024d2194:
      lVar20 = *(long *)(param_2 +
                        ((ulong)param_3 & 0xffffffff) * 0xe10 +
                        ((ulong)param_4 & 0xffffffff) * 0x12 + uVar34 * 6 + 0x2026);
      if (lVar20 != 0) {
        uVar23 = *(uint *)(lVar20 + 8);
        if ((uVar23 != 0xffffff) && (uVar23 < *(uint *)(DAT_7105332f20 + 0x48))) {
          std::recursive_mutex::lock();
          piVar32 = (int *)(*(long *)(lVar11 + 0x40) + (ulong)uVar23 * 0x48);
          bVar3 = *(byte *)(piVar32 + 2);
          std::recursive_mutex::unlock();
          uVar19 = 0xfffe;
          piVar33 = extraout_x1_01;
          if ((bVar3 & 1) != 0) {
            if (piVar32 == (int *)0x0) goto LAB_71024d2234;
            if (*piVar32 == 0xffffff) goto LAB_71024d2230;
            iVar9 = FUN_7103543080((long)piVar32);
            plVar28 = DAT_710532a868;
            piVar33 = extraout_x1_09;
            if (iVar9 == 3) {
              local_100 = (long ********)&DAT_ffffffff;
              local_f8 = (long *)0x0;
              local_e0[8] = 0;
              local_e0[9] = 0;
              local_e0[6] = 0;
              local_e0[7] = 0;
              local_90 = &DAT_3f8000003f800000;
              uStack_88 = 0;
              local_e0[4] = 0;
              local_e0[5] = 0;
              local_e0[2] = 0;
              local_e0[3] = 0;
              local_e0[0] = 0;
              local_e0[1] = 0;
              local_f0 = 0;
              uStack_e8 = 0;
              uStack_70 = 0;
              local_80 = 0;
              uStack_78 = 0;
              local_73 = 0;
              piVar32 = *(int **)(*DAT_710532a868 + 0x2b8);
              goto joined_r0x0071024d24e0;
            }
          }
          uVar19 = 0xfffe;
          goto LAB_71024d2234;
        }
      }
LAB_71024d2230:
      uVar19 = 0xfffe;
      goto LAB_71024d2234;
    }
    if ((char)*piVar37 == '\0') {
      uVar35 = uVar35 + 1;
      goto LAB_71024d2194;
    }
    uVar35 = uVar35 + 2;
    piVar37 = piVar37 + 0x34;
  } while (uVar35 < 0x400);
  uVar19 = 0xffff;
  goto LAB_71024d2234;
joined_r0x0071024d24e0:
  if (piVar32 == *(int **)(*DAT_710532a868 + 0x2c0)) goto LAB_71024d252c;
  if ((*piVar32 == iVar30) && (piVar32[1] == iVar8)) {
    ppppppppplVar16 = (long *********)0x95;
    memcpy(&local_100,piVar32,0x95);
    goto LAB_71024d252c;
  }
  piVar32 = piVar32 + 0x26;
  goto joined_r0x0071024d24e0;
LAB_71024d252c:
  *(ulong *)(param_2 + uVar35 * 0x1a + 0x114ca) = local_e0[uVar34];
  lVar11 = *plVar28;
  local_100 = (long ********)&DAT_ffffffff;
  local_f8 = (long *)0x0;
  local_e0[8] = 0;
  local_e0[9] = 0;
  local_e0[6] = 0;
  local_e0[7] = 0;
  local_90 = &DAT_3f8000003f800000;
  uStack_88 = 0;
  local_e0[4] = 0;
  local_e0[5] = 0;
  local_e0[2] = 0;
  local_e0[3] = 0;
  local_e0[0] = 0;
  local_e0[1] = 0;
  local_f0 = 0;
  uStack_e8 = 0;
  uStack_70 = 0;
  local_80 = 0;
  uStack_78 = 0;
  local_73 = 0;
  for (piVar32 = *(int **)(lVar11 + 0x2b8); piVar32 != *(int **)(lVar11 + 0x2c0);
      piVar32 = piVar32 + 0x26) {
    if ((*piVar32 == iVar30) && (piVar32[1] == iVar8)) {
      ppppppppplVar16 = (long *********)0x95;
      memcpy(&local_100,piVar32,0x95);
      break;
    }
  }
  *(ulong *)(param_2 + uVar35 * 0x1a + 0x114cc) = local_e0[uVar34 + 3];
  lVar11 = *plVar28;
  local_100 = (long ********)&DAT_ffffffff;
  local_f8 = (long *)0x0;
  local_e0[8] = 0;
  local_e0[9] = 0;
  local_e0[6] = 0;
  local_e0[7] = 0;
  local_90 = &DAT_3f8000003f800000;
  uStack_88 = 0;
  local_e0[4] = 0;
  local_e0[5] = 0;
  local_e0[2] = 0;
  local_e0[3] = 0;
  local_e0[0] = 0;
  local_e0[1] = 0;
  local_f0 = 0;
  uStack_e8 = 0;
  uStack_70 = 0;
  local_80 = 0;
  uStack_78 = 0;
  local_73 = 0;
  piVar36 = *(int **)(lVar11 + 0x2c0);
  piVar33 = *(int **)(lVar11 + 0x2b8);
  for (piVar32 = piVar33; piVar32 != piVar36; piVar32 = piVar32 + 0x26) {
    if ((*piVar32 == iVar30) && (piVar32[1] == iVar8)) {
      ppppppppplVar16 = (long *********)0x95;
      memcpy(&local_100,piVar32,0x95);
      break;
    }
  }
  uVar19 = local_e0[uVar34];
  local_100 = (long ********)&DAT_ffffffff;
  local_f8 = (long *)0x0;
  local_e0[8] = 0;
  local_e0[9] = 0;
  local_e0[6] = 0;
  local_e0[7] = 0;
  local_90 = &DAT_3f8000003f800000;
  uStack_88 = 0;
  local_e0[4] = 0;
  local_e0[5] = 0;
  local_e0[2] = 0;
  local_e0[3] = 0;
  local_e0[0] = 0;
  local_e0[1] = 0;
  local_f0 = 0;
  uStack_e8 = 0;
  uStack_70 = 0;
  local_80 = 0;
  uStack_78 = 0;
  local_73 = 0;
  for (; piVar33 != piVar36; piVar33 = piVar33 + 0x26) {
    if ((*piVar33 == iVar30) && (piVar33[1] == iVar8)) {
      ppppppppplVar16 = (long *********)0x95;
      memcpy(&local_100,piVar33,0x95);
      break;
    }
  }
  uVar21 = 0;
  puVar24 = (ulong *)(param_2 + 0x114ca);
LAB_71024d270c:
  if (((((char)puVar24[0xc] == '\0') || (*(char *)((long)puVar24 + 0x61) != '\0')) ||
      (((*puVar24 ^ uVar19) & 0xffffffffff) != 0)) ||
     (((puVar24[1] ^ local_e0[uVar34 + 3]) & 0xffffffffff) != 0)) goto LAB_71024d273c;
  if ((int)uVar21 != 0xffff) {
    local_110 = puVar24[2];
    local_108 = (long *)puVar24[3];
    if (local_108 != (long *)0x0) {
      plVar28 = local_108 + 1;
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar28,0x10);
        if (bVar5) {
          *plVar28 = *plVar28 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    FUN_71035c2e50(&local_100,&local_110,(long ****)ppppppppplVar16,ppppbVar17,(long ****)pcVar18,
                   param_6,param_7,param_8);
    plVar28 = local_f8;
    pppppppplVar7 = local_100;
    local_100 = (long ********)0x0;
    local_f8 = (long *)0x0;
    *(long *********)(param_2 + uVar35 * 0x1a + 0x114ce) = pppppppplVar7;
    plVar31 = *(long **)(param_2 + uVar35 * 0x1a + 0x114d0);
    *(long **)(param_2 + uVar35 * 0x1a + 0x114d0) = plVar28;
    piVar33 = extraout_x1_23;
    if (plVar31 != (long *)0x0) {
      plVar28 = plVar31 + 1;
      do {
        lVar11 = *plVar28;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar28,0x10);
        if (bVar5) {
          *plVar28 = lVar11 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (lVar11 == 0) {
        (**(code **)(*plVar31 + 0x10))(plVar31);
        std::__shared_weak_count::__release_weak();
        piVar33 = extraout_x1_24;
      }
    }
    if (local_f8 != (long *)0x0) {
      plVar28 = local_f8 + 1;
      do {
        lVar11 = *plVar28;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar28,0x10);
        if (bVar5) {
          *plVar28 = lVar11 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (lVar11 == 0) {
        (**(code **)(*local_f8 + 0x10))(local_f8);
        std::__shared_weak_count::__release_weak();
        piVar33 = extraout_x1_25;
      }
    }
    if (local_108 != (long *)0x0) {
      plVar28 = local_108 + 1;
      do {
        lVar11 = *plVar28;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar28,0x10);
        if (bVar5) {
          *plVar28 = lVar11 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
        plVar31 = local_108;
      } while (cVar4 != '\0');
      goto LAB_71024d28b8;
    }
    goto LAB_71024d28dc;
  }
  goto LAB_71024d274c;
LAB_71024d273c:
  uVar21 = uVar21 + 1;
  puVar24 = puVar24 + 0xd;
  if (0x3ff < uVar21) goto LAB_71024d274c;
  goto LAB_71024d270c;
LAB_71024d274c:
  pcVar15 = "model.numdlb";
  FUN_710353e1d0((uint *)&local_100,
                 (uint *)(*(long *)(param_2 +
                                   ((ulong)param_3 & 0xffffffff) * 0xe10 +
                                   ((ulong)param_4 & 0xffffffff) * 0x12 + uVar34 * 6 + 0x2026) + 8),
                 (byte *)"model.numdlb");
  uVar23 = (uint)local_100;
  uVar19 = (ulong)local_100 & 0xffffffff;
  if ((uint)local_100 != 0xffffff) {
    FUN_7103540b10(DAT_7105332f20,(uint)local_100,(long *********)pcVar15,ppppbVar17,
                   (long ****)pcVar18,param_6,param_7,param_8);
  }
  if ((uVar23 == 0xffffff) ||
     (lVar11 = **(long **)(DAT_7105332f20 + 0x78), *(uint *)(*(long *)(lVar11 + 0x40) + 4) <= uVar23
     )) {
    local_100 = (long ********)0x0;
  }
  else {
    local_100 = (long ********)(*(ulong *)(*(long *)(lVar11 + 0x60) + uVar19 * 0x20) & 0xffffffffff)
    ;
  }
  lVar11 = (*(long **)(DAT_7105332f20 + 0x78))[1];
  pcVar18 = FUN_7103542240;
  ppppbVar17 = (byte ****)&DAT_00000008;
  puVar12 = bsearch(&local_100,*(void **)(lVar11 + 0x20),(ulong)*(uint *)(*(long *)(lVar11 + 8) + 8)
                    ,8,FUN_7103542240);
  uVar23 = 0xffffff;
  if (puVar12 != (undefined8 *)0x0) {
    uVar6 = (uint)((ulong)*puVar12 >> 0x20);
    uVar22 = uVar6 >> 8;
    if ((uVar22 != 0xffffff) &&
       (uVar2 = *(uint *)(*(long *)(lVar11 + 8) + 4), uVar23 = uVar6 >> 8,
       uVar2 < uVar22 || uVar2 == uVar23)) {
      uVar23 = 0xffffff;
    }
  }
  ppppppppplVar16 = (long *********)&DAT_00000004;
  local_110 = CONCAT44(local_110._4_4_,uVar23);
  FUN_71035c2890(&local_100,(uint *)&local_110,(long *********)&DAT_00000004,ppppbVar17,
                 (long ****)pcVar18,param_6,param_7,param_8);
  plVar28 = local_f8;
  pppppppplVar7 = local_100;
  local_100 = (long ********)0x0;
  local_f8 = (long *)0x0;
  *(long *********)(param_2 + uVar35 * 0x1a + 0x114ce) = pppppppplVar7;
  plVar31 = *(long **)(param_2 + uVar35 * 0x1a + 0x114d0);
  *(long **)(param_2 + uVar35 * 0x1a + 0x114d0) = plVar28;
  piVar33 = extraout_x1_10;
  if (plVar31 != (long *)0x0) {
    plVar28 = plVar31 + 1;
    do {
      lVar11 = *plVar28;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar28,0x10);
      if (bVar5) {
        *plVar28 = lVar11 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar11 == 0) {
      (**(code **)(*plVar31 + 0x10))(plVar31);
      std::__shared_weak_count::__release_weak();
      piVar33 = extraout_x1_11;
    }
  }
  if (local_f8 != (long *)0x0) {
    plVar28 = local_f8 + 1;
    do {
      lVar11 = *plVar28;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar28,0x10);
      if (bVar5) {
        *plVar28 = lVar11 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
      plVar31 = local_f8;
    } while (cVar4 != '\0');
LAB_71024d28b8:
    if (lVar11 == 0) {
      (**(code **)(*plVar31 + 0x10))(plVar31);
      std::__shared_weak_count::__release_weak();
      piVar33 = extraout_x1_12;
    }
  }
LAB_71024d28dc:
  puVar24 = (ulong *)(param_2 + uVar35 * 0x1a + 0x114d2);
  *puVar24 = 0;
  plVar28 = (long *)(param_2 + uVar35 * 0x1a + 0x114d4);
  plVar31 = (long *)*plVar28;
  *plVar28 = 0;
  if (plVar31 != (long *)0x0) {
    plVar10 = plVar31 + 1;
    do {
      lVar11 = *plVar10;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar5) {
        *plVar10 = lVar11 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar11 == 0) {
      (**(code **)(*plVar31 + 0x10))(plVar31);
      std::__shared_weak_count::__release_weak();
      piVar33 = extraout_x1_13;
    }
  }
  plVar31 = (long *)(param_2 + uVar35 * 0x1a + 0x114d6);
  *plVar31 = 0;
  plVar10 = (long *)(param_2 + uVar35 * 0x1a + 0x114d8);
  plVar25 = (long *)*plVar10;
  *plVar10 = 0;
  if (plVar25 != (long *)0x0) {
    plVar29 = plVar25 + 1;
    do {
      lVar11 = *plVar29;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar29,0x10);
      if (bVar5) {
        *plVar29 = lVar11 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar11 == 0) {
      (**(code **)(*plVar25 + 0x10))(plVar25);
      std::__shared_weak_count::__release_weak();
      piVar33 = extraout_x1_14;
    }
  }
  plVar25 = (long *)(param_2 + uVar35 * 0x1a + 0x114da);
  *plVar25 = 0;
  plVar29 = (long *)(param_2 + uVar35 * 0x1a + 0x114dc);
  plVar26 = (long *)*plVar29;
  *plVar29 = 0;
  if (plVar26 != (long *)0x0) {
    plVar27 = plVar26 + 1;
    do {
      lVar11 = *plVar27;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar27,0x10);
      if (bVar5) {
        *plVar27 = lVar11 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar11 == 0) {
      (**(code **)(*plVar26 + 0x10))(plVar26);
      std::__shared_weak_count::__release_weak();
      piVar33 = extraout_x1_15;
    }
  }
  plVar26 = (long *)(param_2 + uVar35 * 0x1a + 0x114de);
  *plVar26 = 0;
  piVar32 = param_2 + uVar35 * 0x1a + 0x114e0;
  plVar27 = *(long **)piVar32;
  piVar32[0] = 0;
  piVar32[1] = 0;
  if (plVar27 != (long *)0x0) {
    plVar1 = plVar27 + 1;
    do {
      lVar11 = *plVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *plVar1 = lVar11 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar11 == 0) {
      (**(code **)(*plVar27 + 0x10))(plVar27);
      std::__shared_weak_count::__release_weak();
      piVar33 = extraout_x1_16;
    }
  }
  if (*(long *)(param_2 +
               ((ulong)param_3 & 0xffffffff) * 0xe10 +
               ((ulong)param_4 & 0xffffffff) * 0x12 + uVar34 * 6 + 0x2028) != 0) {
    puVar12 = (undefined8 *)
              FUN_710392e290(0x10,0x30,(long ****)ppppppppplVar16,ppppbVar17,(long ****)pcVar18,
                             param_6,param_7,param_8);
    if (puVar12 == (undefined8 *)0x0) {
      if (DAT_7105332f00 != (long *)0x0) {
        local_128 = (long ********)((ulong)local_128 & 0xffffffff00000000);
        local_100 = (long ********)&DAT_00000030;
        ppppppppplVar16 = &local_100;
        uVar19 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_128);
        if (((uVar19 & 1) != 0) &&
           (puVar12 = (undefined8 *)
                      FUN_710392e290(0x10,0x30,(long ****)ppppppppplVar16,ppppbVar17,
                                     (long ****)pcVar18,param_6,param_7,param_8),
           puVar12 != (undefined8 *)0x0)) goto LAB_71024d2b18;
      }
      puVar12 = (undefined8 *)0x0;
    }
LAB_71024d2b18:
    *puVar12 = &PTR_FUN_7105239200;
    puVar12[3] = 0;
    puVar12[4] = 0;
    *(undefined4 *)(puVar12 + 5) = 0x3f800000;
    puVar12[1] = 0;
    puVar12[2] = 0;
    puVar13 = (undefined8 *)
              FUN_710392e290(0x10,0x20,(long ****)ppppppppplVar16,ppppbVar17,(long ****)pcVar18,
                             param_6,param_7,param_8);
    if (puVar13 == (undefined8 *)0x0) {
      if (DAT_7105332f00 != (long *)0x0) {
        local_128 = (long ********)((ulong)local_128 & 0xffffffff00000000);
        local_100 = (long ********)&SUB_00000020;
        ppppppppplVar16 = &local_100;
        uVar19 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_128);
        if (((uVar19 & 1) != 0) &&
           (puVar13 = (undefined8 *)
                      FUN_710392e290(0x10,0x20,(long ****)ppppppppplVar16,ppppbVar17,
                                     (long ****)pcVar18,param_6,param_7,param_8),
           puVar13 != (undefined8 *)0x0)) goto LAB_71024d2b88;
      }
      puVar13 = (undefined8 *)0x0;
    }
LAB_71024d2b88:
    *puVar13 = &DAT_7105239240;
    puVar13[1] = 0;
    puVar13[2] = 0;
    puVar13[3] = puVar12;
    *puVar24 = (ulong)puVar12;
    plVar27 = (long *)*plVar28;
    *plVar28 = (long)puVar13;
    if (plVar27 != (long *)0x0) {
      plVar1 = plVar27 + 1;
      do {
        lVar11 = *plVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar5) {
          *plVar1 = lVar11 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (lVar11 == 0) {
        (**(code **)(*plVar27 + 0x10))(plVar27);
        std::__shared_weak_count::__release_weak();
      }
    }
    puVar12 = (undefined8 *)
              FUN_710392e290(0x10,200,(long ****)ppppppppplVar16,ppppbVar17,(long ****)pcVar18,
                             param_6,param_7,param_8);
    uVar14 = extraout_x1_17;
    if (puVar12 == (undefined8 *)0x0) {
      if (DAT_7105332f00 != (long *)0x0) {
        local_128 = (long ********)((ulong)local_128 & 0xffffffff00000000);
        local_100 = (long ********)&DAT_000000c8;
        ppppppppplVar16 = &local_100;
        auVar38 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_128);
        uVar14 = auVar38._8_8_;
        if (((auVar38._0_8_ & 1) != 0) &&
           (puVar12 = (undefined8 *)
                      FUN_710392e290(0x10,200,(long ****)ppppppppplVar16,ppppbVar17,
                                     (long ****)pcVar18,param_6,param_7,param_8),
           uVar14 = extraout_x1_18, puVar12 != (undefined8 *)0x0)) goto LAB_71024d2c3c;
      }
      puVar12 = (undefined8 *)0x0;
    }
LAB_71024d2c3c:
    puVar12[1] = 0;
    puVar12[2] = 0;
    *puVar12 = &PTR_FUN_7104f76000;
    FUN_710367adf0(puVar12 + 3,uVar14,(long ****)ppppppppplVar16,ppppbVar17,(long ****)pcVar18,
                   param_6,param_7,param_8);
    *plVar31 = (long)(puVar12 + 3);
    plVar27 = (long *)*plVar10;
    *plVar10 = (long)puVar12;
    if (plVar27 != (long *)0x0) {
      plVar1 = plVar27 + 1;
      do {
        lVar11 = *plVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar5) {
          *plVar1 = lVar11 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (lVar11 == 0) {
        (**(code **)(*plVar27 + 0x10))(plVar27);
        std::__shared_weak_count::__release_weak();
      }
    }
    puVar12 = (undefined8 *)
              FUN_710392e290(0x10,0xa8,(long ****)ppppppppplVar16,ppppbVar17,(long ****)pcVar18,
                             param_6,param_7,param_8);
    uVar14 = extraout_x1_19;
    if (puVar12 == (undefined8 *)0x0) {
      if (DAT_7105332f00 != (long *)0x0) {
        local_128 = (long ********)((ulong)local_128 & 0xffffffff00000000);
        local_100 = (long ********)&DAT_000000a8;
        ppppppppplVar16 = &local_100;
        auVar38 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_128);
        uVar14 = auVar38._8_8_;
        if (((auVar38._0_8_ & 1) != 0) &&
           (puVar12 = (undefined8 *)
                      FUN_710392e290(0x10,0xa8,(long ****)ppppppppplVar16,ppppbVar17,
                                     (long ****)pcVar18,param_6,param_7,param_8),
           uVar14 = extraout_x1_20, puVar12 != (undefined8 *)0x0)) goto LAB_71024d2cfc;
      }
      puVar12 = (undefined8 *)0x0;
    }
LAB_71024d2cfc:
    puVar12[1] = 0;
    puVar12[2] = 0;
    *puVar12 = &PTR_FUN_71050c0538;
    FUN_7103680c00(puVar12 + 3,uVar14,(long ****)ppppppppplVar16,ppppbVar17,(long ****)pcVar18,
                   param_6,param_7,param_8);
    *plVar25 = (long)(puVar12 + 3);
    plVar27 = (long *)*plVar29;
    *plVar29 = (long)puVar12;
    if (plVar27 != (long *)0x0) {
      plVar1 = plVar27 + 1;
      do {
        lVar11 = *plVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar5) {
          *plVar1 = lVar11 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (lVar11 == 0) {
        (**(code **)(*plVar27 + 0x10))(plVar27);
        std::__shared_weak_count::__release_weak();
      }
    }
    puVar12 = (undefined8 *)
              FUN_710392e290(0x10,0xa8,(long ****)ppppppppplVar16,ppppbVar17,(long ****)pcVar18,
                             param_6,param_7,param_8);
    uVar14 = extraout_x1_21;
    if (puVar12 == (undefined8 *)0x0) {
      if (DAT_7105332f00 != (long *)0x0) {
        local_128 = (long ********)((ulong)local_128 & 0xffffffff00000000);
        local_100 = (long ********)&DAT_000000a8;
        ppppppppplVar16 = &local_100;
        auVar38 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_128);
        uVar14 = auVar38._8_8_;
        if (((auVar38._0_8_ & 1) != 0) &&
           (puVar12 = (undefined8 *)
                      FUN_710392e290(0x10,0xa8,(long ****)ppppppppplVar16,ppppbVar17,
                                     (long ****)pcVar18,param_6,param_7,param_8),
           uVar14 = extraout_x1_22, puVar12 != (undefined8 *)0x0)) goto LAB_71024d2db8;
      }
      puVar12 = (undefined8 *)0x0;
    }
LAB_71024d2db8:
    puVar12[1] = 0;
    puVar12[2] = 0;
    *puVar12 = &PTR_FUN_71050c0570;
    FUN_710367c690(puVar12 + 3,uVar14,(long ****)ppppppppplVar16,ppppbVar17,(long ****)pcVar18,
                   param_6,param_7,param_8);
    *plVar26 = (long)(puVar12 + 3);
    plVar27 = *(long **)piVar32;
    *(undefined8 **)piVar32 = puVar12;
    if (plVar27 != (long *)0x0) {
      plVar1 = plVar27 + 1;
      do {
        lVar11 = *plVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar5) {
          *plVar1 = lVar11 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (lVar11 == 0) {
        (**(code **)(*plVar27 + 0x10))(plVar27);
        std::__shared_weak_count::__release_weak();
      }
    }
    local_100 = *(long *********)(param_2 + uVar35 * 0x1a + 0x114ce);
    local_f8 = *(long **)(param_2 + uVar35 * 0x1a + 0x114d0);
    if (local_f8 != (long *)0x0) {
      plVar27 = local_f8 + 1;
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar27,0x10);
        if (bVar5) {
          *plVar27 = *plVar27 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    lVar11 = DAT_7105332f20;
    uVar23 = *(uint *)(*(long *)(param_2 +
                                ((ulong)param_3 & 0xffffffff) * 0xe10 +
                                ((ulong)param_4 & 0xffffffff) * 0x12 + uVar34 * 6 + 0x2028) + 8);
    local_118[0] = uVar23;
    if ((uVar23 != 0xffffff) && (uVar23 < *(uint *)(DAT_7105332f20 + 0x48))) {
      std::recursive_mutex::lock();
      lVar20 = *(long *)(lVar11 + 0x40);
      if ((*(byte *)(lVar20 + (ulong)uVar23 * 0x48 + 8) & 1) == 0) {
        std::recursive_mutex::unlock();
        FUN_7103540d50(lVar11,uVar23,ppppppppplVar16,ppppbVar17,(long ****)pcVar18,param_6,param_7,
                       param_8);
      }
      else {
        FUN_71035432d0((int *)(lVar20 + (ulong)uVar23 * 0x48));
        std::recursive_mutex::unlock();
      }
    }
    local_128 = (long ********)*puVar24;
    local_120 = (long *)*plVar28;
    if (local_120 != (long *)0x0) {
      plVar27 = local_120 + 1;
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar27,0x10);
        if (bVar5) {
          *plVar27 = *plVar27 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    local_138 = (byte ***)*plVar31;
    local_130 = (long *)*plVar10;
    if (local_130 != (long *)0x0) {
      plVar27 = local_130 + 1;
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar27,0x10);
        if (bVar5) {
          *plVar27 = *plVar27 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    local_148 = (long ***)*plVar25;
    local_140 = (long *)*plVar29;
    if (local_140 != (long *)0x0) {
      plVar27 = local_140 + 1;
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar27,0x10);
        if (bVar5) {
          *plVar27 = *plVar27 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    local_158 = *plVar26;
    plVar27 = *(long **)piVar32;
    plStack_150 = plVar27;
    if (plVar27 == (long *)0x0) {
      ppppppppplVar16 = &local_128;
      ppppbVar17 = &local_138;
      pcVar18 = (code *)&local_148;
      param_6 = &local_158;
      FUN_71024cc230((long *)&local_100,local_118,ppppppppplVar16,ppppbVar17,(long ****)pcVar18,
                     param_6,param_7,param_8);
    }
    else {
      plVar1 = plVar27 + 1;
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar5) {
          *plVar1 = *plVar1 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      ppppppppplVar16 = &local_128;
      ppppbVar17 = &local_138;
      pcVar18 = (code *)&local_148;
      param_6 = &local_158;
      FUN_71024cc230((long *)&local_100,local_118,ppppppppplVar16,ppppbVar17,(long ****)pcVar18,
                     param_6,param_7,param_8);
      do {
        lVar11 = *plVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar5) {
          *plVar1 = lVar11 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (lVar11 == 0) {
        (**(code **)(*plVar27 + 0x10))(plVar27);
        std::__shared_weak_count::__release_weak();
      }
    }
    if (local_140 != (long *)0x0) {
      plVar27 = local_140 + 1;
      do {
        lVar11 = *plVar27;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar27,0x10);
        if (bVar5) {
          *plVar27 = lVar11 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (lVar11 == 0) {
        (**(code **)(*local_140 + 0x10))(local_140);
        std::__shared_weak_count::__release_weak();
      }
    }
    if (local_130 != (long *)0x0) {
      plVar27 = local_130 + 1;
      do {
        lVar11 = *plVar27;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar27,0x10);
        if (bVar5) {
          *plVar27 = lVar11 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (lVar11 == 0) {
        (**(code **)(*local_130 + 0x10))(local_130);
        std::__shared_weak_count::__release_weak();
      }
    }
    if (local_120 != (long *)0x0) {
      plVar27 = local_120 + 1;
      do {
        lVar11 = *plVar27;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar27,0x10);
        if (bVar5) {
          *plVar27 = lVar11 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (lVar11 == 0) {
        (**(code **)(*local_120 + 0x10))(local_120);
        std::__shared_weak_count::__release_weak();
      }
    }
    lVar11 = DAT_7105332f20;
    uVar34 = (ulong)local_118[0];
    if (local_118[0] != 0xffffff) {
      if (local_118[0] < *(uint *)(DAT_7105332f20 + 0x48)) {
        std::recursive_mutex::lock();
        lVar20 = *(long *)(lVar11 + 0x40);
        if ((*(byte *)(lVar20 + uVar34 * 0x48 + 8) & 1) != 0) {
          FUN_710353f5a0(lVar11,(int *)(lVar20 + uVar34 * 0x48),(long ****)ppppppppplVar16,
                         ppppbVar17,(long ****)pcVar18,param_6,param_7,param_8);
        }
        std::recursive_mutex::unlock();
      }
      local_118[0] = 0xffffff;
    }
    if (local_f8 != (long *)0x0) {
      plVar27 = local_f8 + 1;
      do {
        lVar11 = *plVar27;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar27,0x10);
        if (bVar5) {
          *plVar27 = lVar11 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (lVar11 == 0) {
        (**(code **)(*local_f8 + 0x10))(local_f8);
        std::__shared_weak_count::__release_weak();
      }
    }
    auVar38 = (**(code **)(*(long *)*puVar24 + 0x28))();
    piVar33 = auVar38._8_8_;
    if ((auVar38._0_8_ & 1) != 0) {
      *puVar24 = 0;
      plVar27 = (long *)*plVar28;
      *plVar28 = 0;
      if (plVar27 == (long *)0x0) {
        *puVar24 = 0;
        (param_2 + uVar35 * 0x1a + 0x114d4)[0] = 0;
        (param_2 + uVar35 * 0x1a + 0x114d4)[1] = 0;
      }
      else {
        plVar1 = plVar27 + 1;
        do {
          lVar11 = *plVar1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar5) {
            *plVar1 = lVar11 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (lVar11 == 0) {
          (**(code **)(*plVar27 + 0x10))(plVar27);
          std::__shared_weak_count::__release_weak();
          piVar33 = extraout_x1_26;
        }
        plVar28 = (long *)*plVar28;
        *puVar24 = 0;
        (param_2 + uVar35 * 0x1a + 0x114d4)[0] = 0;
        (param_2 + uVar35 * 0x1a + 0x114d4)[1] = 0;
        if (plVar28 != (long *)0x0) {
          plVar27 = plVar28 + 1;
          do {
            lVar11 = *plVar27;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(plVar27,0x10);
            if (bVar5) {
              *plVar27 = lVar11 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (lVar11 == 0) {
            (**(code **)(*plVar28 + 0x10))(plVar28);
            std::__shared_weak_count::__release_weak();
            piVar33 = extraout_x1_27;
          }
        }
      }
    }
    if (*(char *)(*plVar31 + 0xa8) == '\0') {
      *plVar31 = 0;
      plVar28 = (long *)*plVar10;
      *plVar10 = 0;
      if (plVar28 == (long *)0x0) {
        *plVar31 = 0;
        (param_2 + uVar35 * 0x1a + 0x114d8)[0] = 0;
        (param_2 + uVar35 * 0x1a + 0x114d8)[1] = 0;
      }
      else {
        plVar27 = plVar28 + 1;
        do {
          lVar11 = *plVar27;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar27,0x10);
          if (bVar5) {
            *plVar27 = lVar11 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (lVar11 == 0) {
          (**(code **)(*plVar28 + 0x10))(plVar28);
          std::__shared_weak_count::__release_weak();
          piVar33 = extraout_x1_28;
        }
        plVar10 = (long *)*plVar10;
        *plVar31 = 0;
        (param_2 + uVar35 * 0x1a + 0x114d8)[0] = 0;
        (param_2 + uVar35 * 0x1a + 0x114d8)[1] = 0;
        if (plVar10 != (long *)0x0) {
          plVar28 = plVar10 + 1;
          do {
            lVar11 = *plVar28;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(plVar28,0x10);
            if (bVar5) {
              *plVar28 = lVar11 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (lVar11 == 0) {
            (**(code **)(*plVar10 + 0x10))(plVar10);
            std::__shared_weak_count::__release_weak();
            piVar33 = extraout_x1_29;
          }
        }
      }
    }
    if (*(char *)(*plVar25 + 0x88) == '\0') {
      *plVar25 = 0;
      plVar28 = (long *)*plVar29;
      *plVar29 = 0;
      if (plVar28 == (long *)0x0) {
        *plVar25 = 0;
        (param_2 + uVar35 * 0x1a + 0x114dc)[0] = 0;
        (param_2 + uVar35 * 0x1a + 0x114dc)[1] = 0;
      }
      else {
        plVar31 = plVar28 + 1;
        do {
          lVar11 = *plVar31;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar31,0x10);
          if (bVar5) {
            *plVar31 = lVar11 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (lVar11 == 0) {
          (**(code **)(*plVar28 + 0x10))(plVar28);
          std::__shared_weak_count::__release_weak();
          piVar33 = extraout_x1_30;
        }
        plVar29 = (long *)*plVar29;
        *plVar25 = 0;
        (param_2 + uVar35 * 0x1a + 0x114dc)[0] = 0;
        (param_2 + uVar35 * 0x1a + 0x114dc)[1] = 0;
        if (plVar29 != (long *)0x0) {
          plVar28 = plVar29 + 1;
          do {
            lVar11 = *plVar28;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(plVar28,0x10);
            if (bVar5) {
              *plVar28 = lVar11 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (lVar11 == 0) {
            (**(code **)(*plVar29 + 0x10))(plVar29);
            std::__shared_weak_count::__release_weak();
            piVar33 = extraout_x1_31;
          }
        }
      }
    }
    if (*(char *)(*plVar26 + 0x88) == '\0') {
      *plVar26 = 0;
      plVar28 = *(long **)piVar32;
      piVar32[0] = 0;
      piVar32[1] = 0;
      if (plVar28 == (long *)0x0) {
        *plVar26 = 0;
        (param_2 + uVar35 * 0x1a + 0x114e0)[0] = 0;
        (param_2 + uVar35 * 0x1a + 0x114e0)[1] = 0;
      }
      else {
        plVar31 = plVar28 + 1;
        do {
          lVar11 = *plVar31;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar31,0x10);
          if (bVar5) {
            *plVar31 = lVar11 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (lVar11 == 0) {
          (**(code **)(*plVar28 + 0x10))(plVar28);
          std::__shared_weak_count::__release_weak();
          piVar33 = extraout_x1_32;
        }
        plVar28 = *(long **)piVar32;
        *plVar26 = 0;
        (param_2 + uVar35 * 0x1a + 0x114e0)[0] = 0;
        (param_2 + uVar35 * 0x1a + 0x114e0)[1] = 0;
        if (plVar28 != (long *)0x0) {
          plVar31 = plVar28 + 1;
          do {
            lVar11 = *plVar31;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(plVar31,0x10);
            if (bVar5) {
              *plVar31 = lVar11 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (lVar11 == 0) {
            (**(code **)(*plVar28 + 0x10))(plVar28);
            std::__shared_weak_count::__release_weak();
            piVar33 = extraout_x1_33;
          }
        }
      }
    }
  }
  *(char *)piVar37 = '\x01';
  *(undefined1 *)((long)param_2 + uVar35 * 0x68 + 0x45389) = 0;
  uVar19 = uVar35 & 0xffffffff;
LAB_71024d2234:
  if ((int)uVar19 == 0xffff) {
LAB_71024d2240:
    *param_1 = -1;
    param_1[0xe] = 0;
    param_1[0xf] = 0;
    param_1[0x10] = 0;
    param_1[0x11] = 0;
    param_1[10] = 0;
    param_1[0xb] = 0;
    param_1[0xc] = 0;
    param_1[0xd] = 0;
    param_1[6] = 0;
    param_1[7] = 0;
    param_1[8] = 0;
    param_1[9] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    param_1[4] = 0;
    param_1[5] = 0;
    return;
  }
LAB_71024d2280:
  piVar37 = param_2 + 0x17cca;
  if ((int)uVar19 != 0xfffe) {
    piVar37 = param_2 + (uVar19 & 0xffffffff) * 0x1a + 0x114ca;
  }
  *(undefined1 *)((long)piVar37 + 0x61) = 1;
  *param_1 = (int)uVar19;
  piVar32 = param_1 + 2;
  piVar32[0] = 0;
  piVar32[1] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  plVar28 = *(long **)(piVar37 + 4);
  lVar11 = *(long *)(piVar37 + 6);
  if (lVar11 != 0) {
    plVar31 = (long *)(lVar11 + 8);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar31,0x10);
      if (bVar5) {
        *plVar31 = *plVar31 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  *(long **)(param_1 + 2) = plVar28;
  *(long *)(param_1 + 4) = lVar11;
  lVar11 = *(long *)(piVar37 + 0xc);
  lVar20 = *(long *)(piVar37 + 0xe);
  if (lVar20 != 0) {
    plVar31 = (long *)(lVar20 + 8);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar31,0x10);
      if (bVar5) {
        *plVar31 = *plVar31 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  *(long *)(param_1 + 6) = lVar11;
  *(long *)(param_1 + 8) = lVar20;
  if (lVar11 == 0) goto LAB_71024d2388;
  plVar31 = *(long **)(lVar11 + 0x10);
  iVar8 = (**(code **)(**(long **)(lVar11 + 0x38) + 0x20))();
  if (iVar8 == 1) {
    plVar31 = (long *)(**(code **)(*plVar31 + 0x38))(plVar31,1);
    if (plVar31 == (long *)0x0) {
      plVar10 = (long *)0x0;
    }
    else {
LAB_71024d234c:
      plVar10 = (long *)(**(code **)(*plVar31 + 0x40))(plVar31,0);
    }
LAB_71024d235c:
    (**(code **)(*plVar10 + 0x80))(0);
    piVar33 = extraout_x1_03;
  }
  else {
    piVar33 = extraout_x1_02;
    if (iVar8 == 0) {
      plVar31 = (long *)(**(code **)(*plVar31 + 0x38))(plVar31,0);
      plVar10 = (long *)0x0;
      if (plVar31 != (long *)0x0) goto LAB_71024d234c;
      goto LAB_71024d235c;
    }
  }
  if (*(char *)(lVar11 + 0xa8) != '\0') {
    lVar11 = (**(code **)(**(long **)(lVar11 + 8) + 0x38))();
    FUN_7103682790(lVar11);
    piVar33 = extraout_x1_04;
  }
LAB_71024d2388:
  lVar11 = *(long *)(piVar37 + 0x10);
  lVar20 = *(long *)(piVar37 + 0x12);
  if (lVar20 != 0) {
    plVar31 = (long *)(lVar20 + 8);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar31,0x10);
      if (bVar5) {
        *plVar31 = *plVar31 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  *(long *)(param_1 + 10) = lVar11;
  *(long *)(param_1 + 0xc) = lVar20;
  if (((lVar11 != 0) && (*(char *)(lVar11 + 0x88) != '\0')) &&
     ((**(code **)(**(long **)(lVar11 + 0x70) + 0x40))(0,*(long **)(lVar11 + 0x70),0),
     piVar33 = extraout_x1_05, *(char *)(lVar11 + 0x88) != '\0')) {
    lVar11 = (**(code **)(**(long **)(lVar11 + 8) + 0x38))();
    FUN_7103682790(lVar11);
    piVar33 = extraout_x1_06;
  }
  lVar11 = *(long *)(piVar37 + 0x14);
  lVar20 = *(long *)(piVar37 + 0x16);
  if (lVar20 != 0) {
    plVar31 = (long *)(lVar20 + 8);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar31,0x10);
      if (bVar5) {
        *plVar31 = *plVar31 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  *(long *)(param_1 + 0xe) = lVar11;
  *(long *)(param_1 + 0x10) = lVar20;
  if (((lVar11 != 0) && (*(char *)(lVar11 + 0x88) != '\0')) &&
     ((**(code **)(**(long **)(lVar11 + 0x78) + 0x40))(0,*(long **)(lVar11 + 0x78),0),
     piVar33 = extraout_x1_07, *(char *)(lVar11 + 0x88) != '\0')) {
    lVar11 = (**(code **)(**(long **)(lVar11 + 8) + 0x38))();
    FUN_7103682790(lVar11);
    piVar33 = extraout_x1_08;
  }
  if (plVar28 == (long *)0x0) {
    return;
  }
  FUN_71035597d0((undefined8 *)piVar32,piVar33,(long ****)ppppppppplVar16,ppppbVar17,
                 (long ****)pcVar18,param_6,param_7,param_8);
  (**(code **)(*plVar28 + 0xa8))(plVar28,1);
  return;
}

