// addr:      71024eb610
// offset:    0x24eb610
// name:      FUN_71024eb610
// mangled:   
// signature: undefined __cdecl FUN_71024eb610(long param_1, ulong param_2, long * * * * * * * * * param_3, byte * * * * param_4, long * * * * param_5, long * param_6, long * * * param_7, long * * * param_8)


void FUN_71024eb610(long param_1,ulong param_2,long *********param_3,byte ****param_4,
                   long ****param_5,long *param_6,long ***param_7,long ***param_8)

{
  long *plVar1;
  uint uVar2;
  byte bVar3;
  char cVar4;
  uint uVar5;
  long ********pppppppplVar6;
  bool bVar7;
  int iVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
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
  undefined8 extraout_x1_31;
  undefined8 extraout_x1_32;
  undefined8 extraout_x1_33;
  undefined8 uVar14;
  undefined8 extraout_x1_34;
  undefined8 extraout_x1_35;
  undefined8 extraout_x1_36;
  undefined8 extraout_x1_37;
  undefined8 extraout_x1_38;
  undefined8 extraout_x1_39;
  char *pcVar15;
  long *********ppppppppplVar16;
  byte ****ppppbVar17;
  code *pcVar18;
  long lVar19;
  uint uVar20;
  uint uVar21;
  int *piVar22;
  int *piVar23;
  ulong uVar24;
  undefined8 uVar25;
  long lVar26;
  long *plVar27;
  long *plVar28;
  long *plVar29;
  undefined8 uVar30;
  long *plVar31;
  ulong uVar32;
  undefined1 auVar33 [16];
  long local_b8;
  long *plStack_b0;
  long ***local_a8;
  long *local_a0;
  undefined8 local_98;
  long *local_90;
  long ********local_88;
  long *local_80;
  uint local_78 [2];
  long ********local_70;
  long *local_68;
  
  puVar9 = (undefined8 *)
           FUN_710392e290(0x10,0x170,(long ****)param_3,param_4,param_5,param_6,param_7,param_8);
  uVar14 = extraout_x1;
  if (puVar9 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_88 = (long ********)((ulong)local_88 & 0xffffffff00000000);
      local_70 = (long ********)&DAT_00000170;
      param_3 = &local_70;
      auVar33 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_88);
      uVar14 = auVar33._8_8_;
      if (((auVar33._0_8_ & 1) != 0) &&
         (puVar9 = (undefined8 *)
                   FUN_710392e290(0x10,0x170,(long ****)param_3,param_4,param_5,param_6,param_7,
                                  param_8), uVar14 = extraout_x1_00, puVar9 != (undefined8 *)0x0))
      goto LAB_71024eb694;
    }
    puVar9 = (undefined8 *)0x0;
  }
LAB_71024eb694:
  puVar9[1] = param_2;
  puVar9[2] = 0xffffffff;
  *puVar9 = &PTR_FUN_71050c0700;
  uVar32 = 0;
  *(undefined4 *)(puVar9 + 6) = 0x3f800000;
  puVar9[4] = 0;
  puVar9[5] = 0;
  puVar9[0x27] = 1;
  puVar9[0x25] = 0;
  puVar9[0x26] = 0;
  *(undefined4 *)(puVar9 + 0x28) = 0;
  puVar9[0x29] = 0;
  puVar9[0x23] = 0;
  puVar9[0x24] = 0;
  puVar9[0x21] = 0;
  puVar9[0x22] = 0;
  puVar9[0x1f] = 0;
  puVar9[0x20] = 0;
  puVar9[0x1d] = 0;
  puVar9[0x1e] = 0;
  puVar9[0x1b] = 0;
  puVar9[0x1c] = 0;
  *(undefined8 *)((long)puVar9 + 0x15e) = 0;
  *(undefined2 *)((long)puVar9 + 0x166) = 1;
  puVar9[0x2a] = 0;
  puVar9[0x2b] = 0;
  puVar9[0x19] = 0;
  puVar9[0x1a] = 0;
  puVar9[0x17] = 0;
  puVar9[0x18] = 0;
  puVar9[0x15] = 0;
  puVar9[0x16] = 0;
  puVar9[0x13] = 0;
  puVar9[0x14] = 0;
  puVar9[0x11] = 0;
  puVar9[0x12] = 0;
  puVar9[0xf] = 0;
  puVar9[0x10] = 0;
  puVar9[0xd] = 0;
  puVar9[0xe] = 0;
  puVar9[0xb] = 0;
  puVar9[0xc] = 0;
  puVar9[9] = 0;
  puVar9[10] = 0;
  puVar9[7] = 0;
  puVar9[8] = 0;
  do {
    lVar26 = DAT_7105332f20;
    piVar22 = *(int **)(*DAT_710532a868 + 0x2e8);
    piVar23 = *(int **)(*DAT_710532a868 + 0x2f0);
    if (piVar22 != piVar23) {
      uVar21 = 0;
      do {
        if (*piVar22 == *(int *)(*DAT_710532a860 + 0x78)) {
          if (uVar32 == uVar21) {
            uVar24 = *(ulong *)(piVar22 + 4);
            uVar30 = *(undefined8 *)(piVar22 + 0x12);
            uVar25 = *(undefined8 *)(piVar22 + 0x14);
            goto LAB_71024eb7a4;
          }
          uVar21 = uVar21 + 1;
        }
        piVar22 = piVar22 + 0x16;
      } while (piVar23 != piVar22);
    }
    uVar25 = 0;
    uVar30 = 0;
    uVar24 = 0;
LAB_71024eb7a4:
    if (((uVar24 ^ param_2) & 0xffffffffff) == 0) {
      uVar21 = *(uint *)(*DAT_710532a860 + uVar32 * 4 + 0x3cce0);
      uVar24 = (ulong)uVar21;
      if (uVar21 != 0xffffff) {
        if (uVar21 < *(uint *)(DAT_7105332f20 + 0x48)) {
          std::recursive_mutex::lock();
          lVar19 = *(long *)(lVar26 + 0x40);
          if ((*(byte *)(lVar19 + uVar24 * 0x48 + 8) & 1) == 0) {
            std::recursive_mutex::unlock();
            FUN_7103540d50(lVar26,uVar21,param_3,param_4,param_5,param_6,param_7,param_8);
            uVar14 = extraout_x1_01;
          }
          else {
            FUN_71035432d0((int *)(lVar19 + uVar24 * 0x48));
            std::recursive_mutex::unlock();
            uVar14 = extraout_x1_02;
          }
        }
        lVar26 = DAT_7105332f20;
        if (uVar21 < *(uint *)(DAT_7105332f20 + 0x48)) {
          std::recursive_mutex::lock();
          piVar22 = (int *)(*(long *)(lVar26 + 0x40) + uVar24 * 0x48);
          bVar3 = *(byte *)(piVar22 + 2);
          std::recursive_mutex::unlock();
          bVar7 = false;
          uVar14 = extraout_x1_03;
          if (((bVar3 & 1) != 0) && (piVar22 != (int *)0x0)) {
            iVar8 = -1;
            if (*piVar22 != 0xffffff) {
              iVar8 = FUN_7103543080((long)piVar22);
              uVar14 = extraout_x1_04;
            }
            bVar7 = iVar8 == 3;
          }
        }
        else {
          bVar7 = false;
        }
        lVar26 = DAT_7105332f20;
        if (uVar21 < *(uint *)(DAT_7105332f20 + 0x48)) {
          std::recursive_mutex::lock();
          lVar19 = *(long *)(lVar26 + 0x40);
          if ((*(byte *)(lVar19 + uVar24 * 0x48 + 8) & 1) != 0) {
            FUN_710353f5a0(lVar26,(int *)(lVar19 + uVar24 * 0x48),(long ****)param_3,param_4,param_5
                           ,param_6,param_7,param_8);
          }
          std::recursive_mutex::unlock();
          uVar14 = extraout_x1_05;
        }
        if (bVar7) {
          *(int *)(puVar9 + 2) = (int)uVar32;
          puVar9[0x2a] = uVar30;
          puVar9[0x2b] = uVar25;
          break;
        }
      }
    }
    uVar32 = uVar32 + 1;
  } while (uVar32 < 0x40);
  FUN_71024e9c40((long)puVar9,uVar14,param_3,param_4,param_5,param_6,param_7,param_8);
  *(undefined8 **)(param_1 + 8 + (ulong)*(uint *)(param_1 + 0x408) * 8) = puVar9;
  lVar26 = *(long *)(param_1 + 8 + (ulong)*(uint *)(param_1 + 0x408) * 8);
  if (*(int *)(lVar26 + 0x10) < 0) goto LAB_71024ec8ac;
  if (*(uint *)(param_1 + 0x40c) != 0) {
    uVar32 = 0;
    do {
      lVar19 = *(long *)(param_1 + 0x208 + uVar32 * 8);
      if ((lVar19 != 0) &&
         (((*(ulong *)(lVar26 + 0x150) ^ *(ulong *)(lVar19 + 8)) & 0xffffffffff) == 0)) {
        uVar32 = *(ulong *)(lVar26 + 0x158) & 0xffffffffff;
        *(long *)(lVar26 + 0x148) = lVar19;
        if ((uVar32 != 0) && (plVar13 = *(long **)(lVar19 + 0x18), plVar13 != (long *)0x0)) {
          (**(code **)(*plVar13 + 0x180))(plVar13,uVar32,0);
        }
        goto LAB_71024ec8ac;
      }
      uVar32 = uVar32 + 1;
    } while (uVar32 < *(uint *)(param_1 + 0x40c));
  }
  puVar9 = (undefined8 *)
           FUN_710392e290(0x10,0x70,(long ****)param_3,param_4,param_5,param_6,param_7,param_8);
  uVar14 = extraout_x1_06;
  if (puVar9 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_88 = (long ********)((ulong)local_88 & 0xffffffff00000000);
      local_70 = (long ********)&DAT_00000070;
      param_3 = &local_70;
      auVar33 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_88);
      uVar14 = auVar33._8_8_;
      if (((auVar33._0_8_ & 1) != 0) &&
         (puVar9 = (undefined8 *)
                   FUN_710392e290(0x10,0x70,(long ****)param_3,param_4,param_5,param_6,param_7,
                                  param_8), uVar14 = extraout_x1_07, puVar9 != (undefined8 *)0x0))
      goto LAB_71024eb9e4;
    }
    puVar9 = (undefined8 *)0x0;
  }
LAB_71024eb9e4:
  uVar30 = *(undefined8 *)(lVar26 + 0x150);
  uVar21 = *(uint *)(lVar26 + 0x10);
  *(uint *)(puVar9 + 2) = uVar21;
  *puVar9 = &PTR_FUN_71050c06e0;
  puVar9[1] = uVar30;
  plVar13 = puVar9 + 3;
  *plVar13 = 0;
  puVar9[0xc] = 0;
  puVar9[0xd] = 0;
  puVar9[10] = 0;
  puVar9[0xb] = 0;
  puVar9[8] = 0;
  puVar9[9] = 0;
  puVar9[6] = 0;
  puVar9[7] = 0;
  puVar9[4] = 0;
  puVar9[5] = 0;
  lVar26 = DAT_7105332f20;
  uVar21 = *(uint *)(*DAT_710532a860 + (ulong)uVar21 * 4 + 0x3d0e0);
  uVar32 = (ulong)uVar21;
  if (uVar21 == 0xffffff) {
LAB_71024ebba4:
    puVar9[1] = 0;
    *(undefined4 *)(puVar9 + 2) = 0xffffffff;
    if (*plVar13 == 0) goto LAB_71024ebc48;
LAB_71024ebbb8:
    FUN_71035598f0(plVar13,uVar14,(long ****)param_3,param_4,param_5,param_6,param_7,param_8);
    plVar28 = (long *)puVar9[4];
    puVar9[3] = 0;
    puVar9[4] = 0;
    if (plVar28 == (long *)0x0) {
      *plVar13 = 0;
      puVar9[4] = 0;
      goto LAB_71024ebc48;
    }
    plVar27 = plVar28 + 1;
    do {
      lVar26 = *plVar27;
      cVar4 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar27,0x10);
      if (bVar7) {
        *plVar27 = lVar26 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar26 == 0) {
      (**(code **)(*plVar28 + 0x10))(plVar28);
      std::__shared_weak_count::__release_weak();
    }
    plVar28 = (long *)puVar9[4];
    *plVar13 = 0;
    puVar9[4] = 0;
    if (plVar28 == (long *)0x0) goto LAB_71024ebc48;
    plVar27 = plVar28 + 1;
    do {
      lVar26 = *plVar27;
      cVar4 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar27,0x10);
      if (bVar7) {
        *plVar27 = lVar26 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar26 != 0) goto LAB_71024ebc48;
    (**(code **)(*plVar28 + 0x10))(plVar28);
    std::__shared_weak_count::__release_weak();
    uVar21 = *(uint *)(puVar9 + 2);
    lVar26 = DAT_7105332f20;
  }
  else {
    if (uVar21 < *(uint *)(DAT_7105332f20 + 0x48)) {
      std::recursive_mutex::lock();
      lVar19 = *(long *)(lVar26 + 0x40);
      if ((*(byte *)(lVar19 + uVar32 * 0x48 + 8) & 1) == 0) {
        std::recursive_mutex::unlock();
        FUN_7103540d50(lVar26,uVar21,param_3,param_4,param_5,param_6,param_7,param_8);
        uVar14 = extraout_x1_08;
      }
      else {
        FUN_71035432d0((int *)(lVar19 + uVar32 * 0x48));
        std::recursive_mutex::unlock();
        uVar14 = extraout_x1_09;
      }
    }
    lVar26 = DAT_7105332f20;
    if (uVar21 < *(uint *)(DAT_7105332f20 + 0x48)) {
      std::recursive_mutex::lock();
      piVar22 = (int *)(*(long *)(lVar26 + 0x40) + uVar32 * 0x48);
      bVar3 = *(byte *)(piVar22 + 2);
      std::recursive_mutex::unlock();
      bVar7 = false;
      uVar14 = extraout_x1_10;
      if (((bVar3 & 1) != 0) && (piVar22 != (int *)0x0)) {
        if (*piVar22 == 0xffffff) {
          iVar8 = -1;
        }
        else {
          iVar8 = FUN_7103543080((long)piVar22);
          uVar14 = extraout_x1_11;
        }
        bVar7 = iVar8 == 3;
      }
    }
    else {
      bVar7 = false;
    }
    lVar26 = DAT_7105332f20;
    if (uVar21 < *(uint *)(DAT_7105332f20 + 0x48)) {
      std::recursive_mutex::lock();
      lVar19 = *(long *)(lVar26 + 0x40);
      if ((*(byte *)(lVar19 + uVar32 * 0x48 + 8) & 1) != 0) {
        FUN_710353f5a0(lVar26,(int *)(lVar19 + uVar32 * 0x48),(long ****)param_3,param_4,param_5,
                       param_6,param_7,param_8);
      }
      std::recursive_mutex::unlock();
      uVar14 = extraout_x1_12;
    }
    if (!bVar7) goto LAB_71024ebba4;
    if (*plVar13 != 0) goto LAB_71024ebbb8;
LAB_71024ebc48:
    uVar21 = *(uint *)(puVar9 + 2);
    lVar26 = DAT_7105332f20;
  }
  DAT_7105332f20 = lVar26;
  if (-1 < (int)uVar21) {
    uVar21 = *(uint *)(*DAT_710532a860 + (ulong)uVar21 * 4 + 0x3d0e0);
    local_98._4_4_ = (undefined4)((ulong)local_98 >> 0x20);
    local_98 = (byte ***)CONCAT44(local_98._4_4_,uVar21);
    if ((uVar21 != 0xffffff) && (uVar21 < *(uint *)(lVar26 + 0x48))) {
      std::recursive_mutex::lock();
      if ((*(byte *)(*(long *)(lVar26 + 0x40) + (ulong)uVar21 * 0x48 + 8) & 1) == 0) {
        std::recursive_mutex::unlock();
        FUN_7103540d50(lVar26,uVar21,param_3,param_4,param_5,param_6,param_7,param_8);
      }
      else {
        FUN_71035432d0((int *)(*(long *)(lVar26 + 0x40) + (ulong)uVar21 * 0x48));
        std::recursive_mutex::unlock();
      }
    }
    pcVar15 = "model.numdlb";
    FUN_710353e1d0((uint *)&local_70,(uint *)&local_98,(byte *)"model.numdlb");
    uVar21 = (uint)local_70;
    uVar32 = (ulong)local_70 & 0xffffffff;
    if ((uint)local_70 != 0xffffff) {
      FUN_7103540b10(DAT_7105332f20,(uint)local_70,(long *********)pcVar15,param_4,param_5,param_6,
                     param_7,param_8);
    }
    if ((uVar21 == 0xffffff) ||
       (lVar26 = **(long **)(DAT_7105332f20 + 0x78),
       *(uint *)(*(long *)(lVar26 + 0x40) + 4) <= uVar21)) {
      local_70 = (long ********)0x0;
    }
    else {
      local_70 = (long ********)
                 (*(ulong *)(*(long *)(lVar26 + 0x60) + uVar32 * 0x20) & 0xffffffffff);
    }
    lVar26 = (*(long **)(DAT_7105332f20 + 0x78))[1];
    pcVar18 = FUN_7103542240;
    ppppbVar17 = (byte ****)&DAT_00000008;
    puVar10 = bsearch(&local_70,*(void **)(lVar26 + 0x20),
                      (ulong)*(uint *)(*(long *)(lVar26 + 8) + 8),8,FUN_7103542240);
    uVar21 = 0xffffff;
    if (puVar10 != (undefined8 *)0x0) {
      uVar5 = (uint)((ulong)*puVar10 >> 0x20);
      uVar20 = uVar5 >> 8;
      if ((uVar20 != 0xffffff) &&
         (uVar2 = *(uint *)(*(long *)(lVar26 + 8) + 4), uVar21 = uVar5 >> 8,
         uVar2 < uVar20 || uVar2 == uVar21)) {
        uVar21 = 0xffffff;
      }
    }
    ppppppppplVar16 = (long *********)&DAT_00000004;
    local_88 = (long ********)CONCAT44(local_88._4_4_,uVar21);
    FUN_71035c2890(&local_70,(uint *)&local_88,(long *********)&DAT_00000004,ppppbVar17,
                   (long ****)pcVar18,param_6,param_7,param_8);
    plVar28 = local_68;
    pppppppplVar6 = local_70;
    local_70 = (long ********)0x0;
    local_68 = (long *)0x0;
    plVar27 = (long *)puVar9[4];
    puVar9[3] = pppppppplVar6;
    puVar9[4] = plVar28;
    uVar14 = extraout_x1_13;
    if (plVar27 != (long *)0x0) {
      plVar28 = plVar27 + 1;
      do {
        lVar26 = *plVar28;
        cVar4 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(plVar28,0x10);
        if (bVar7) {
          *plVar28 = lVar26 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (lVar26 == 0) {
        (**(code **)(*plVar27 + 0x10))(plVar27);
        std::__shared_weak_count::__release_weak();
        uVar14 = extraout_x1_14;
      }
    }
    if (local_68 != (long *)0x0) {
      plVar28 = local_68 + 1;
      do {
        lVar26 = *plVar28;
        cVar4 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(plVar28,0x10);
        if (bVar7) {
          *plVar28 = lVar26 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (lVar26 == 0) {
        (**(code **)(*local_68 + 0x10))(local_68);
        std::__shared_weak_count::__release_weak();
        uVar14 = extraout_x1_15;
      }
    }
    lVar26 = DAT_7105332f20;
    uVar32 = (ulong)local_98 & 0xffffffff;
    if ((uint)local_98 != 0xffffff) {
      if ((uint)local_98 < *(uint *)(DAT_7105332f20 + 0x48)) {
        std::recursive_mutex::lock();
        lVar19 = *(long *)(lVar26 + 0x40);
        if ((*(byte *)(lVar19 + uVar32 * 0x48 + 8) & 1) != 0) {
          FUN_710353f5a0(lVar26,(int *)(lVar19 + uVar32 * 0x48),(long ****)ppppppppplVar16,
                         ppppbVar17,(long ****)pcVar18,param_6,param_7,param_8);
        }
        std::recursive_mutex::unlock();
        uVar14 = extraout_x1_16;
      }
      local_98 = (byte ***)CONCAT44(local_98._4_4_,0xffffff);
    }
    puVar10 = puVar9 + 5;
    *puVar10 = 0;
    plVar28 = (long *)puVar9[6];
    puVar9[6] = 0;
    if (plVar28 != (long *)0x0) {
      plVar27 = plVar28 + 1;
      do {
        lVar26 = *plVar27;
        cVar4 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(plVar27,0x10);
        if (bVar7) {
          *plVar27 = lVar26 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (lVar26 == 0) {
        (**(code **)(*plVar28 + 0x10))(plVar28);
        std::__shared_weak_count::__release_weak();
        uVar14 = extraout_x1_17;
      }
    }
    plVar27 = puVar9 + 7;
    *plVar27 = 0;
    plVar28 = (long *)puVar9[8];
    puVar9[8] = 0;
    if (plVar28 != (long *)0x0) {
      plVar29 = plVar28 + 1;
      do {
        lVar26 = *plVar29;
        cVar4 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(plVar29,0x10);
        if (bVar7) {
          *plVar29 = lVar26 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (lVar26 == 0) {
        (**(code **)(*plVar28 + 0x10))(plVar28);
        std::__shared_weak_count::__release_weak();
        uVar14 = extraout_x1_18;
      }
    }
    plVar29 = puVar9 + 9;
    *plVar29 = 0;
    plVar28 = (long *)puVar9[10];
    puVar9[10] = 0;
    if (plVar28 != (long *)0x0) {
      plVar31 = plVar28 + 1;
      do {
        lVar26 = *plVar31;
        cVar4 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(plVar31,0x10);
        if (bVar7) {
          *plVar31 = lVar26 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (lVar26 == 0) {
        (**(code **)(*plVar28 + 0x10))(plVar28);
        std::__shared_weak_count::__release_weak();
        uVar14 = extraout_x1_19;
      }
    }
    plVar31 = puVar9 + 0xb;
    *plVar31 = 0;
    plVar28 = (long *)puVar9[0xc];
    puVar9[0xc] = 0;
    if (plVar28 != (long *)0x0) {
      plVar1 = plVar28 + 1;
      do {
        lVar26 = *plVar1;
        cVar4 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar7) {
          *plVar1 = lVar26 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (lVar26 == 0) {
        (**(code **)(*plVar28 + 0x10))(plVar28);
        std::__shared_weak_count::__release_weak();
        uVar14 = extraout_x1_20;
      }
    }
    lVar26 = DAT_7105332f20;
    uVar21 = *(uint *)(*DAT_710532a860 + (ulong)*(uint *)(puVar9 + 2) * 4 + 0x3d1e0);
    uVar32 = (ulong)uVar21;
    if (uVar21 != 0xffffff) {
      if (uVar21 < *(uint *)(DAT_7105332f20 + 0x48)) {
        std::recursive_mutex::lock();
        lVar19 = *(long *)(lVar26 + 0x40);
        if ((*(byte *)(lVar19 + uVar32 * 0x48 + 8) & 1) == 0) {
          std::recursive_mutex::unlock();
          FUN_7103540d50(lVar26,uVar21,ppppppppplVar16,ppppbVar17,(long ****)pcVar18,param_6,param_7
                         ,param_8);
          uVar14 = extraout_x1_21;
        }
        else {
          FUN_71035432d0((int *)(lVar19 + uVar32 * 0x48));
          std::recursive_mutex::unlock();
          uVar14 = extraout_x1_22;
        }
      }
      lVar26 = DAT_7105332f20;
      if (uVar21 < *(uint *)(DAT_7105332f20 + 0x48)) {
        std::recursive_mutex::lock();
        piVar22 = (int *)(*(long *)(lVar26 + 0x40) + uVar32 * 0x48);
        bVar3 = *(byte *)(piVar22 + 2);
        std::recursive_mutex::unlock();
        bVar7 = false;
        uVar14 = extraout_x1_23;
        if (((bVar3 & 1) != 0) && (piVar22 != (int *)0x0)) {
          if (*piVar22 == 0xffffff) {
            iVar8 = -1;
          }
          else {
            iVar8 = FUN_7103543080((long)piVar22);
            uVar14 = extraout_x1_24;
          }
          bVar7 = iVar8 == 3;
        }
      }
      else {
        bVar7 = false;
      }
      lVar26 = DAT_7105332f20;
      if (uVar21 < *(uint *)(DAT_7105332f20 + 0x48)) {
        std::recursive_mutex::lock();
        lVar19 = *(long *)(lVar26 + 0x40);
        if ((*(byte *)(lVar19 + uVar32 * 0x48 + 8) & 1) != 0) {
          FUN_710353f5a0(lVar26,(int *)(lVar19 + uVar32 * 0x48),(long ****)ppppppppplVar16,
                         ppppbVar17,(long ****)pcVar18,param_6,param_7,param_8);
        }
        std::recursive_mutex::unlock();
        uVar14 = extraout_x1_25;
      }
      if (bVar7) {
        puVar11 = (undefined8 *)
                  FUN_710392e290(0x10,0x30,(long ****)ppppppppplVar16,ppppbVar17,(long ****)pcVar18,
                                 param_6,param_7,param_8);
        if (puVar11 == (undefined8 *)0x0) {
          if (DAT_7105332f00 != (long *)0x0) {
            local_88 = (long ********)((ulong)local_88 & 0xffffffff00000000);
            local_70 = (long ********)&DAT_00000030;
            ppppppppplVar16 = &local_70;
            uVar32 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_88);
            if (((uVar32 & 1) != 0) &&
               (puVar11 = (undefined8 *)
                          FUN_710392e290(0x10,0x30,(long ****)ppppppppplVar16,ppppbVar17,
                                         (long ****)pcVar18,param_6,param_7,param_8),
               puVar11 != (undefined8 *)0x0)) goto LAB_71024ec188;
          }
          puVar11 = (undefined8 *)0x0;
        }
LAB_71024ec188:
        *puVar11 = &PTR_FUN_7105239200;
        puVar11[3] = 0;
        puVar11[4] = 0;
        *(undefined4 *)(puVar11 + 5) = 0x3f800000;
        puVar11[1] = 0;
        puVar11[2] = 0;
        puVar12 = (undefined8 *)
                  FUN_710392e290(0x10,0x20,(long ****)ppppppppplVar16,ppppbVar17,(long ****)pcVar18,
                                 param_6,param_7,param_8);
        if (puVar12 == (undefined8 *)0x0) {
          if (DAT_7105332f00 != (long *)0x0) {
            local_88 = (long ********)((ulong)local_88 & 0xffffffff00000000);
            local_70 = (long ********)&SUB_00000020;
            ppppppppplVar16 = &local_70;
            uVar32 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_88);
            if (((uVar32 & 1) != 0) &&
               (puVar12 = (undefined8 *)
                          FUN_710392e290(0x10,0x20,(long ****)ppppppppplVar16,ppppbVar17,
                                         (long ****)pcVar18,param_6,param_7,param_8),
               puVar12 != (undefined8 *)0x0)) goto LAB_71024ec1f8;
          }
          puVar12 = (undefined8 *)0x0;
        }
LAB_71024ec1f8:
        *puVar12 = &DAT_7105239240;
        puVar12[1] = 0;
        puVar12[2] = 0;
        puVar12[3] = puVar11;
        puVar9[5] = puVar11;
        plVar28 = (long *)puVar9[6];
        puVar9[6] = puVar12;
        if (plVar28 != (long *)0x0) {
          plVar1 = plVar28 + 1;
          do {
            lVar26 = *plVar1;
            cVar4 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar7) {
              *plVar1 = lVar26 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (lVar26 == 0) {
            (**(code **)(*plVar28 + 0x10))(plVar28);
            std::__shared_weak_count::__release_weak();
          }
        }
        puVar11 = (undefined8 *)
                  FUN_710392e290(0x10,200,(long ****)ppppppppplVar16,ppppbVar17,(long ****)pcVar18,
                                 param_6,param_7,param_8);
        uVar14 = extraout_x1_26;
        if (puVar11 == (undefined8 *)0x0) {
          if (DAT_7105332f00 != (long *)0x0) {
            local_88 = (long ********)((ulong)local_88 & 0xffffffff00000000);
            local_70 = (long ********)&DAT_000000c8;
            ppppppppplVar16 = &local_70;
            auVar33 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_88);
            uVar14 = auVar33._8_8_;
            if (((auVar33._0_8_ & 1) != 0) &&
               (puVar11 = (undefined8 *)
                          FUN_710392e290(0x10,200,(long ****)ppppppppplVar16,ppppbVar17,
                                         (long ****)pcVar18,param_6,param_7,param_8),
               uVar14 = extraout_x1_27, puVar11 != (undefined8 *)0x0)) goto LAB_71024ec2a4;
          }
          puVar11 = (undefined8 *)0x0;
        }
LAB_71024ec2a4:
        puVar11[1] = 0;
        puVar11[2] = 0;
        *puVar11 = &PTR_FUN_7104f76000;
        FUN_710367adf0(puVar11 + 3,uVar14,(long ****)ppppppppplVar16,ppppbVar17,(long ****)pcVar18,
                       param_6,param_7,param_8);
        puVar9[7] = puVar11 + 3;
        plVar28 = (long *)puVar9[8];
        puVar9[8] = puVar11;
        if (plVar28 != (long *)0x0) {
          plVar1 = plVar28 + 1;
          do {
            lVar26 = *plVar1;
            cVar4 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar7) {
              *plVar1 = lVar26 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (lVar26 == 0) {
            (**(code **)(*plVar28 + 0x10))(plVar28);
            std::__shared_weak_count::__release_weak();
          }
        }
        puVar11 = (undefined8 *)
                  FUN_710392e290(0x10,0xa8,(long ****)ppppppppplVar16,ppppbVar17,(long ****)pcVar18,
                                 param_6,param_7,param_8);
        uVar14 = extraout_x1_28;
        if (puVar11 == (undefined8 *)0x0) {
          if (DAT_7105332f00 != (long *)0x0) {
            local_88 = (long ********)((ulong)local_88 & 0xffffffff00000000);
            local_70 = (long ********)&DAT_000000a8;
            ppppppppplVar16 = &local_70;
            auVar33 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_88);
            uVar14 = auVar33._8_8_;
            if (((auVar33._0_8_ & 1) != 0) &&
               (puVar11 = (undefined8 *)
                          FUN_710392e290(0x10,0xa8,(long ****)ppppppppplVar16,ppppbVar17,
                                         (long ****)pcVar18,param_6,param_7,param_8),
               uVar14 = extraout_x1_29, puVar11 != (undefined8 *)0x0)) goto LAB_71024ec35c;
          }
          puVar11 = (undefined8 *)0x0;
        }
LAB_71024ec35c:
        puVar11[1] = 0;
        puVar11[2] = 0;
        *puVar11 = &PTR_FUN_71050c0538;
        FUN_7103680c00(puVar11 + 3,uVar14,(long ****)ppppppppplVar16,ppppbVar17,(long ****)pcVar18,
                       param_6,param_7,param_8);
        puVar9[9] = puVar11 + 3;
        plVar28 = (long *)puVar9[10];
        puVar9[10] = puVar11;
        if (plVar28 != (long *)0x0) {
          plVar1 = plVar28 + 1;
          do {
            lVar26 = *plVar1;
            cVar4 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar7) {
              *plVar1 = lVar26 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (lVar26 == 0) {
            (**(code **)(*plVar28 + 0x10))(plVar28);
            std::__shared_weak_count::__release_weak();
          }
        }
        puVar11 = (undefined8 *)
                  FUN_710392e290(0x10,0xa8,(long ****)ppppppppplVar16,ppppbVar17,(long ****)pcVar18,
                                 param_6,param_7,param_8);
        uVar14 = extraout_x1_30;
        if (puVar11 == (undefined8 *)0x0) {
          if (DAT_7105332f00 != (long *)0x0) {
            local_88 = (long ********)((ulong)local_88 & 0xffffffff00000000);
            local_70 = (long ********)&DAT_000000a8;
            ppppppppplVar16 = &local_70;
            auVar33 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_88);
            uVar14 = auVar33._8_8_;
            if (((auVar33._0_8_ & 1) != 0) &&
               (puVar11 = (undefined8 *)
                          FUN_710392e290(0x10,0xa8,(long ****)ppppppppplVar16,ppppbVar17,
                                         (long ****)pcVar18,param_6,param_7,param_8),
               uVar14 = extraout_x1_31, puVar11 != (undefined8 *)0x0)) goto LAB_71024ec414;
          }
          puVar11 = (undefined8 *)0x0;
        }
LAB_71024ec414:
        puVar11[1] = 0;
        puVar11[2] = 0;
        *puVar11 = &PTR_FUN_71050c0570;
        FUN_710367c690(puVar11 + 3,uVar14,(long ****)ppppppppplVar16,ppppbVar17,(long ****)pcVar18,
                       param_6,param_7,param_8);
        puVar9[0xb] = puVar11 + 3;
        plVar28 = (long *)puVar9[0xc];
        puVar9[0xc] = puVar11;
        if (plVar28 != (long *)0x0) {
          plVar1 = plVar28 + 1;
          do {
            lVar26 = *plVar1;
            cVar4 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar7) {
              *plVar1 = lVar26 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (lVar26 == 0) {
            (**(code **)(*plVar28 + 0x10))(plVar28);
            std::__shared_weak_count::__release_weak();
          }
        }
        local_70 = (long ********)puVar9[3];
        local_68 = (long *)puVar9[4];
        if (local_68 != (long *)0x0) {
          plVar28 = local_68 + 1;
          do {
            cVar4 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(plVar28,0x10);
            if (bVar7) {
              *plVar28 = *plVar28 + 1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
        }
        lVar26 = DAT_7105332f20;
        uVar21 = *(uint *)(*DAT_710532a860 + (ulong)*(uint *)(puVar9 + 2) * 4 + 0x3d1e0);
        local_78[0] = uVar21;
        if ((uVar21 != 0xffffff) && (uVar21 < *(uint *)(DAT_7105332f20 + 0x48))) {
          std::recursive_mutex::lock();
          lVar19 = *(long *)(lVar26 + 0x40);
          if ((*(byte *)(lVar19 + (ulong)uVar21 * 0x48 + 8) & 1) == 0) {
            std::recursive_mutex::unlock();
            FUN_7103540d50(lVar26,uVar21,ppppppppplVar16,ppppbVar17,(long ****)pcVar18,param_6,
                           param_7,param_8);
          }
          else {
            FUN_71035432d0((int *)(lVar19 + (ulong)uVar21 * 0x48));
            std::recursive_mutex::unlock();
          }
        }
        local_88 = (long ********)puVar9[5];
        local_80 = (long *)puVar9[6];
        if (local_80 != (long *)0x0) {
          plVar28 = local_80 + 1;
          do {
            cVar4 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(plVar28,0x10);
            if (bVar7) {
              *plVar28 = *plVar28 + 1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
        }
        local_98 = (byte ***)puVar9[7];
        local_90 = (long *)puVar9[8];
        if (local_90 != (long *)0x0) {
          plVar28 = local_90 + 1;
          do {
            cVar4 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(plVar28,0x10);
            if (bVar7) {
              *plVar28 = *plVar28 + 1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
        }
        local_a8 = (long ***)puVar9[9];
        local_a0 = (long *)puVar9[10];
        if (local_a0 != (long *)0x0) {
          plVar28 = local_a0 + 1;
          do {
            cVar4 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(plVar28,0x10);
            if (bVar7) {
              *plVar28 = *plVar28 + 1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
        }
        local_b8 = puVar9[0xb];
        plVar28 = (long *)puVar9[0xc];
        plStack_b0 = plVar28;
        if (plVar28 == (long *)0x0) {
          ppppppppplVar16 = &local_88;
          ppppbVar17 = (byte ****)&local_98;
          pcVar18 = (code *)&local_a8;
          param_6 = &local_b8;
          FUN_71024cc230((long *)&local_70,local_78,ppppppppplVar16,ppppbVar17,(long ****)pcVar18,
                         param_6,param_7,param_8);
        }
        else {
          plVar1 = plVar28 + 1;
          do {
            cVar4 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar7) {
              *plVar1 = *plVar1 + 1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          ppppppppplVar16 = &local_88;
          ppppbVar17 = (byte ****)&local_98;
          pcVar18 = (code *)&local_a8;
          param_6 = &local_b8;
          FUN_71024cc230((long *)&local_70,local_78,ppppppppplVar16,ppppbVar17,(long ****)pcVar18,
                         param_6,param_7,param_8);
          do {
            lVar26 = *plVar1;
            cVar4 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar7) {
              *plVar1 = lVar26 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (lVar26 == 0) {
            (**(code **)(*plVar28 + 0x10))(plVar28);
            std::__shared_weak_count::__release_weak();
          }
        }
        if (local_a0 != (long *)0x0) {
          plVar28 = local_a0 + 1;
          do {
            lVar26 = *plVar28;
            cVar4 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(plVar28,0x10);
            if (bVar7) {
              *plVar28 = lVar26 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (lVar26 == 0) {
            (**(code **)(*local_a0 + 0x10))(local_a0);
            std::__shared_weak_count::__release_weak();
          }
        }
        if (local_90 != (long *)0x0) {
          plVar28 = local_90 + 1;
          do {
            lVar26 = *plVar28;
            cVar4 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(plVar28,0x10);
            if (bVar7) {
              *plVar28 = lVar26 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (lVar26 == 0) {
            (**(code **)(*local_90 + 0x10))(local_90);
            std::__shared_weak_count::__release_weak();
          }
        }
        if (local_80 != (long *)0x0) {
          plVar28 = local_80 + 1;
          do {
            lVar26 = *plVar28;
            cVar4 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(plVar28,0x10);
            if (bVar7) {
              *plVar28 = lVar26 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (lVar26 == 0) {
            (**(code **)(*local_80 + 0x10))(local_80);
            std::__shared_weak_count::__release_weak();
          }
        }
        lVar26 = DAT_7105332f20;
        uVar32 = (ulong)local_78[0];
        if (local_78[0] != 0xffffff) {
          if (local_78[0] < *(uint *)(DAT_7105332f20 + 0x48)) {
            std::recursive_mutex::lock();
            lVar19 = *(long *)(lVar26 + 0x40);
            if ((*(byte *)(lVar19 + uVar32 * 0x48 + 8) & 1) != 0) {
              FUN_710353f5a0(lVar26,(int *)(lVar19 + uVar32 * 0x48),(long ****)ppppppppplVar16,
                             ppppbVar17,(long ****)pcVar18,param_6,param_7,param_8);
            }
            std::recursive_mutex::unlock();
          }
          local_78[0] = 0xffffff;
        }
        if (local_68 != (long *)0x0) {
          plVar28 = local_68 + 1;
          do {
            lVar26 = *plVar28;
            cVar4 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(plVar28,0x10);
            if (bVar7) {
              *plVar28 = lVar26 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (lVar26 == 0) {
            (**(code **)(*local_68 + 0x10))(local_68);
            std::__shared_weak_count::__release_weak();
          }
        }
        auVar33 = (**(code **)(*(long *)*puVar10 + 0x28))();
        uVar14 = auVar33._8_8_;
        if ((auVar33._0_8_ & 1) != 0) {
          plVar28 = (long *)puVar9[6];
          puVar9[5] = 0;
          puVar9[6] = 0;
          if (plVar28 == (long *)0x0) {
            *puVar10 = 0;
            puVar9[6] = 0;
          }
          else {
            plVar1 = plVar28 + 1;
            do {
              lVar26 = *plVar1;
              cVar4 = '\x01';
              bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
              if (bVar7) {
                *plVar1 = lVar26 + -1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (lVar26 == 0) {
              (**(code **)(*plVar28 + 0x10))(plVar28);
              std::__shared_weak_count::__release_weak();
              uVar14 = extraout_x1_32;
            }
            plVar28 = (long *)puVar9[6];
            *puVar10 = 0;
            puVar9[6] = 0;
            if (plVar28 != (long *)0x0) {
              plVar1 = plVar28 + 1;
              do {
                lVar26 = *plVar1;
                cVar4 = '\x01';
                bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
                if (bVar7) {
                  *plVar1 = lVar26 + -1;
                  cVar4 = ExclusiveMonitorsStatus();
                }
              } while (cVar4 != '\0');
              if (lVar26 == 0) {
                (**(code **)(*plVar28 + 0x10))(plVar28);
                std::__shared_weak_count::__release_weak();
                uVar14 = extraout_x1_33;
              }
            }
          }
        }
        if (*(char *)(*plVar27 + 0xa8) == '\0') {
          plVar28 = (long *)puVar9[8];
          puVar9[7] = 0;
          puVar9[8] = 0;
          if (plVar28 == (long *)0x0) {
            *plVar27 = 0;
            puVar9[8] = 0;
          }
          else {
            plVar1 = plVar28 + 1;
            do {
              lVar26 = *plVar1;
              cVar4 = '\x01';
              bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
              if (bVar7) {
                *plVar1 = lVar26 + -1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (lVar26 == 0) {
              (**(code **)(*plVar28 + 0x10))(plVar28);
              std::__shared_weak_count::__release_weak();
              uVar14 = extraout_x1_34;
            }
            plVar28 = (long *)puVar9[8];
            *plVar27 = 0;
            puVar9[8] = 0;
            if (plVar28 != (long *)0x0) {
              plVar27 = plVar28 + 1;
              do {
                lVar26 = *plVar27;
                cVar4 = '\x01';
                bVar7 = (bool)ExclusiveMonitorPass(plVar27,0x10);
                if (bVar7) {
                  *plVar27 = lVar26 + -1;
                  cVar4 = ExclusiveMonitorsStatus();
                }
              } while (cVar4 != '\0');
              if (lVar26 == 0) {
                (**(code **)(*plVar28 + 0x10))(plVar28);
                std::__shared_weak_count::__release_weak();
                uVar14 = extraout_x1_35;
              }
            }
          }
        }
        if (*(char *)(*plVar29 + 0x88) == '\0') {
          plVar28 = (long *)puVar9[10];
          puVar9[9] = 0;
          puVar9[10] = 0;
          if (plVar28 == (long *)0x0) {
            *plVar29 = 0;
            puVar9[10] = 0;
          }
          else {
            plVar27 = plVar28 + 1;
            do {
              lVar26 = *plVar27;
              cVar4 = '\x01';
              bVar7 = (bool)ExclusiveMonitorPass(plVar27,0x10);
              if (bVar7) {
                *plVar27 = lVar26 + -1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (lVar26 == 0) {
              (**(code **)(*plVar28 + 0x10))(plVar28);
              std::__shared_weak_count::__release_weak();
              uVar14 = extraout_x1_36;
            }
            plVar28 = (long *)puVar9[10];
            *plVar29 = 0;
            puVar9[10] = 0;
            if (plVar28 != (long *)0x0) {
              plVar27 = plVar28 + 1;
              do {
                lVar26 = *plVar27;
                cVar4 = '\x01';
                bVar7 = (bool)ExclusiveMonitorPass(plVar27,0x10);
                if (bVar7) {
                  *plVar27 = lVar26 + -1;
                  cVar4 = ExclusiveMonitorsStatus();
                }
              } while (cVar4 != '\0');
              if (lVar26 == 0) {
                (**(code **)(*plVar28 + 0x10))(plVar28);
                std::__shared_weak_count::__release_weak();
                uVar14 = extraout_x1_37;
              }
            }
          }
        }
        if (*(char *)(*plVar31 + 0x88) == '\0') {
          plVar28 = (long *)puVar9[0xc];
          puVar9[0xb] = 0;
          puVar9[0xc] = 0;
          if (plVar28 == (long *)0x0) {
            *plVar31 = 0;
            puVar9[0xc] = 0;
          }
          else {
            plVar27 = plVar28 + 1;
            do {
              lVar26 = *plVar27;
              cVar4 = '\x01';
              bVar7 = (bool)ExclusiveMonitorPass(plVar27,0x10);
              if (bVar7) {
                *plVar27 = lVar26 + -1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (lVar26 == 0) {
              (**(code **)(*plVar28 + 0x10))(plVar28);
              std::__shared_weak_count::__release_weak();
              uVar14 = extraout_x1_38;
            }
            plVar28 = (long *)puVar9[0xc];
            *plVar31 = 0;
            puVar9[0xc] = 0;
            if (plVar28 != (long *)0x0) {
              plVar27 = plVar28 + 1;
              do {
                lVar26 = *plVar27;
                cVar4 = '\x01';
                bVar7 = (bool)ExclusiveMonitorPass(plVar27,0x10);
                if (bVar7) {
                  *plVar27 = lVar26 + -1;
                  cVar4 = ExclusiveMonitorsStatus();
                }
              } while (cVar4 != '\0');
              if (lVar26 == 0) {
                (**(code **)(*plVar28 + 0x10))(plVar28);
                std::__shared_weak_count::__release_weak();
                uVar14 = extraout_x1_39;
              }
            }
          }
        }
      }
    }
    FUN_71035597d0(plVar13,uVar14,(long ****)ppppppppplVar16,ppppbVar17,(long ****)pcVar18,param_6,
                   param_7,param_8);
    (**(code **)(*(long *)*plVar13 + 0xa8))((long *)*plVar13,0);
  }
  FUN_71024e9760((long)puVar9);
  *(undefined8 **)(param_1 + 0x208 + (ulong)*(uint *)(param_1 + 0x40c) * 8) = puVar9;
  lVar19 = *(long *)(param_1 + (ulong)*(uint *)(param_1 + 0x408) * 8 + 8);
  lVar26 = *(long *)(param_1 + 0x208 + (ulong)*(uint *)(param_1 + 0x40c) * 8);
  *(long *)(lVar19 + 0x148) = lVar26;
  if (((lVar26 != 0) && (uVar32 = *(ulong *)(lVar19 + 0x158) & 0xffffffffff, uVar32 != 0)) &&
     (plVar13 = *(long **)(lVar26 + 0x18), plVar13 != (long *)0x0)) {
    (**(code **)(*plVar13 + 0x180))(plVar13,uVar32,0);
  }
  *(int *)(param_1 + 0x40c) = *(int *)(param_1 + 0x40c) + 1;
LAB_71024ec8ac:
  *(int *)(param_1 + 0x408) = *(int *)(param_1 + 0x408) + 1;
  return;
}

