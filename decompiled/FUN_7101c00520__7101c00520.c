// addr:      7101c00520
// offset:    0x1c00520
// name:      FUN_7101c00520
// mangled:   
// signature: undefined __cdecl FUN_7101c00520(undefined1[16] param_1, long * * * * * * * * param_2, undefined8 param_3, long param_4, undefined8 param_5, ulong param_6, byte * * * * param_7, long * * * * param_8, int * param_9, int * param_10, undefined8 param_11)


void FUN_7101c00520(undefined1 param_1 [16],long ********param_2,undefined8 param_3,long param_4,
                   undefined8 param_5,ulong param_6,byte ****param_7,long ****param_8,int *param_9,
                   int *param_10,undefined8 param_11)

{
  byte ****ppppbVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  char cVar5;
  bool bVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined **ppuVar10;
  uint uVar11;
  int iVar12;
  ulong uVar13;
  long lVar14;
  long *plVar15;
  ulong uVar16;
  ulong uVar17;
  undefined *puVar18;
  int *piVar19;
  int iVar20;
  byte ****ppppbVar21;
  int *piVar22;
  int *piVar23;
  long lVar24;
  uint uVar25;
  int *piVar26;
  byte ****ppppbVar27;
  undefined4 uVar28;
  undefined4 extraout_s0;
  undefined4 extraout_s0_00;
  undefined4 extraout_s0_01;
  undefined4 extraout_s0_02;
  undefined4 extraout_s0_03;
  undefined4 extraout_s0_04;
  undefined4 extraout_s0_05;
  undefined4 extraout_s0_06;
  undefined4 extraout_s0_07;
  undefined4 extraout_s0_08;
  undefined4 extraout_s0_09;
  undefined4 extraout_s0_10;
  undefined4 extraout_s0_11;
  undefined4 extraout_s0_12;
  undefined4 extraout_s0_13;
  undefined4 extraout_s0_14;
  undefined4 uVar29;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  undefined4 extraout_var_01;
  undefined4 extraout_var_02;
  undefined4 extraout_var_03;
  undefined4 extraout_var_04;
  undefined4 extraout_var_05;
  undefined4 extraout_var_06;
  undefined4 extraout_var_07;
  undefined4 extraout_var_08;
  undefined4 extraout_var_09;
  undefined4 extraout_var_10;
  undefined4 extraout_var_11;
  undefined4 extraout_var_12;
  undefined4 extraout_var_13;
  undefined4 extraout_var_14;
  undefined8 uVar30;
  undefined8 extraout_var_15;
  undefined8 extraout_var_16;
  undefined8 extraout_var_17;
  undefined8 extraout_var_18;
  undefined8 extraout_var_19;
  undefined8 extraout_var_20;
  undefined8 extraout_var_21;
  undefined8 extraout_var_22;
  undefined8 extraout_var_23;
  undefined8 extraout_var_24;
  undefined8 extraout_var_25;
  undefined8 extraout_var_26;
  undefined8 extraout_var_27;
  undefined8 extraout_var_28;
  undefined8 extraout_var_29;
  undefined8 extraout_var_30;
  undefined **local_d8;
  ulong local_d0;
  undefined **local_c8;
  ulong local_c0;
  undefined **local_b8;
  undefined **local_b0;
  long local_a8;
  undefined8 local_a0;
  ulong local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  
  uVar28 = param_1._0_4_;
  uVar29 = param_1._4_4_;
  uVar30 = param_1._8_8_;
  lVar24 = *(long *)(param_4 + 0x80);
  if (*(int *)(lVar24 + 0xbcc) == 0) {
    iVar12 = *(int *)(lVar24 + 0xbd0);
    if ((iVar12 != 0) && (*(int *)(lVar24 + 0xbd0) = iVar12 + -1, iVar12 + -1 == 0 || iVar12 < 1)) {
      if ((*(int *)(lVar24 + 0xb50) == 0) && (0 < *(int *)(lVar24 + 0xb58))) {
        iVar12 = -5;
        *(undefined4 *)(lVar24 + 0xb54) = 0xfffffffb;
        if (0 < *(int *)(lVar24 + 0x10)) {
          uVar25 = 0;
          do {
            param_6 = (ulong)uVar25;
            FUN_7103776910(&local_b8,**(long **)(lVar24 + 0x80) + 8,
                           (long ****)"set_parts_panel_%02d",param_6,param_7,param_8,param_9,
                           param_10,param_11);
            ppuVar10 = local_b0;
            puVar18 = *local_b0;
            if (puVar18 != (undefined *)0x0) {
              puVar18[0x58] = puVar18[0x58] & 0xfe;
            }
            local_b8 = &PTR_FUN_710523d9a8;
            local_b0 = (undefined **)0x0;
            uVar28 = extraout_s0;
            uVar29 = extraout_var;
            uVar30 = extraout_var_15;
            if (ppuVar10 != (undefined **)0x0) {
              FUN_710392eb40((ulong)ppuVar10);
              uVar28 = extraout_s0_00;
              uVar29 = extraout_var_00;
              uVar30 = extraout_var_16;
            }
            uVar25 = uVar25 + 1;
          } while ((int)uVar25 < *(int *)(lVar24 + 0x10));
          iVar12 = *(int *)(lVar24 + 0xb54);
        }
        auVar7._4_4_ = uVar29;
        auVar7._0_4_ = uVar28;
        auVar7._8_8_ = uVar30;
        FUN_7101bff9e0(auVar7,param_2,param_3,lVar24,iVar12);
        *(undefined4 *)(lVar24 + 0xb50) = 1;
      }
      *(undefined4 *)(lVar24 + 0xbc0) = *(undefined4 *)(lVar24 + 0x3c);
      *(undefined4 *)(lVar24 + 0xbc8) = 0;
      *(undefined1 *)(lVar24 + 0xbdc) = 1;
      FUN_7101bff490(lVar24,0);
      *(undefined4 *)(lVar24 + 0xbd0) = 0;
      uVar28 = extraout_s0_01;
      uVar29 = extraout_var_01;
      uVar30 = extraout_var_17;
    }
    iVar12 = *(int *)(lVar24 + 0xbd4);
    if ((iVar12 != 0) && (*(int *)(lVar24 + 0xbd4) = iVar12 + -1, iVar12 + -1 == 0 || iVar12 < 1)) {
      FUN_7103778300(0x3f800000,*(long *)(**(long **)(lVar24 + 0x80) + 0x10),0x7104421055);
      if (*(char *)(*(long *)(DAT_710532f8d0 + 8) + 0x191) == '\0') {
        param_6 = 4;
        uVar13 = FUN_7103313f20(*(long *)(DAT_710532f8d0 + 8),0x14fe27063e,(long ****)&DAT_00000004,
                                param_7,param_8,param_9,param_10,param_11);
        if ((uVar13 & 1) == 0) goto LAB_7101c006e8;
        FUN_71024076d0((undefined4 *)&local_b8,0x14fe27063e);
        if (((local_a8 != 0) && (DAT_7106dd53a8 == '\x01')) && ((int)local_a0 == DAT_7106dd53ac)) {
          piVar19 = (int *)(local_a8 + 0x38);
          do {
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(piVar19,0x10);
            if (bVar6) {
              *piVar19 = *piVar19 + -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
        }
      }
      else {
LAB_7101c006e8:
        local_98 = local_98 & 0xffffffffffffff00;
        local_a0 = 0x87650000000000;
        local_90 = 0xffffffffffffffff;
        local_88 = 0;
        local_b8 = (undefined **)((ulong)local_b8 & 0xffffffff00000000);
        local_80 = 0;
      }
      local_b0 = &PTR_FUN_7104f73d50;
      local_a8 = 0;
      local_98 = local_98 & 0xffffffffffffff00;
      FUN_7101bff490(lVar24,1);
      *(undefined4 *)(lVar24 + 0xb74) = 0;
      *(undefined4 *)(lVar24 + 0xbd4) = 0;
      uVar28 = extraout_s0_02;
      uVar29 = extraout_var_02;
      uVar30 = extraout_var_18;
    }
    if ((*(int *)(lVar24 + 0xb50) == 1) &&
       (((lVar14 = *(long *)(*(long *)(**(long **)(lVar24 + 0x80) + 0x10) + 8), lVar14 == 0 ||
         (plVar15 = (long *)FUN_71037964b0(lVar14,0x7104453107), uVar28 = extraout_s0_03,
         uVar29 = extraout_var_03, uVar30 = extraout_var_19, plVar15 == (long *)0x0)) ||
        (uVar13 = (**(code **)(*plVar15 + 0x138))(), uVar28 = extraout_s0_04,
        uVar29 = extraout_var_04, uVar30 = extraout_var_20, (uVar13 & 1) != 0)))) {
      if (*(int *)(lVar24 + 0xb54) < *(int *)(lVar24 + 0xb58) - *(int *)(lVar24 + 0x10)) {
        iVar12 = *(int *)(lVar24 + 0xb54) + 1;
        *(int *)(lVar24 + 0xb54) = iVar12;
        auVar8._4_4_ = uVar29;
        auVar8._0_4_ = uVar28;
        auVar8._8_8_ = uVar30;
        FUN_7101bff9e0(auVar8,param_2,param_3,lVar24,iVar12);
        FUN_7103778300(0x3f800000,*(long *)(**(long **)(lVar24 + 0x80) + 0x10),0x7104453107);
        uVar28 = extraout_s0_05;
        uVar29 = extraout_var_05;
        uVar30 = extraout_var_21;
      }
      else {
        *(undefined4 *)(lVar24 + 0xb50) = 0;
      }
    }
    iVar12 = *(int *)(lVar24 + 0xb74);
    if (*(int *)(lVar24 + 0x28) <= iVar12) {
      if (iVar12 < *(int *)(lVar24 + 0x2c)) {
        iVar12 = iVar12 + 1;
      }
      else {
        if (*(char *)(*(long *)(DAT_710532f8d0 + 8) + 0x191) == '\0') {
          param_6 = 4;
          uVar13 = FUN_7103313f20(*(long *)(DAT_710532f8d0 + 8),0x130f21e8ef,
                                  (long ****)&DAT_00000004,param_7,param_8,param_9,param_10,param_11
                                 );
          uVar28 = extraout_s0_06;
          uVar29 = extraout_var_06;
          uVar30 = extraout_var_22;
          if ((uVar13 & 1) == 0) goto LAB_7101c00870;
          FUN_71024076d0((undefined4 *)&local_b8,0x130f21e8ef);
          uVar28 = extraout_s0_07;
          uVar29 = extraout_var_07;
          uVar30 = extraout_var_23;
          if (((local_a8 != 0) && (DAT_7106dd53a8 == '\x01')) && ((int)local_a0 == DAT_7106dd53ac))
          {
            piVar19 = (int *)(local_a8 + 0x38);
            do {
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(piVar19,0x10);
              if (bVar6) {
                *piVar19 = *piVar19 + -1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
          }
        }
        else {
LAB_7101c00870:
          local_98 = local_98 & 0xffffffffffffff00;
          local_a0 = 0x87650000000000;
          local_90 = 0xffffffffffffffff;
          local_88 = 0;
          local_b8 = (undefined **)((ulong)local_b8 & 0xffffffff00000000);
          local_80 = 0;
        }
        local_b0 = &PTR_FUN_7104f73d50;
        local_a8 = 0;
        local_98 = local_98 & 0xffffffffffffff00;
        iVar12 = *(int *)(lVar24 + 0x24);
      }
      *(int *)(lVar24 + 0xb74) = iVar12;
    }
    iVar12 = *(int *)(lVar24 + 0xb5c);
    if (iVar12 < *(int *)(lVar24 + 0xb70)) {
      if (iVar12 < *(int *)(lVar24 + 0x34)) goto LAB_7101c008e4;
      iVar12 = iVar12 + 1;
    }
    else {
      FUN_7101bff110(lVar24,*(ulong *)(lVar24 + 0xb68),param_6,param_7,param_8,param_9,param_10,
                     param_11);
      iVar12 = *(int *)(lVar24 + 0x30);
      uVar28 = extraout_s0_08;
      uVar29 = extraout_var_08;
      uVar30 = extraout_var_24;
    }
    *(int *)(lVar24 + 0xb5c) = iVar12;
  }
LAB_7101c008e4:
  if (*(char *)(lVar24 + 0xbde) != '\0') {
    ppppbVar1 = (byte ****)"set_parts_player_%02d";
    if (*(int *)(lVar24 + 0xbcc) != 0) {
      ppppbVar1 = (byte ****)"set_parts_player_1%1d";
    }
    FUN_7103776640(&local_c8,**(long **)(lVar24 + 0x80) + 8,ppppbVar1,
                   (long)*(int *)(lVar24 + (long)*(int *)(lVar24 + 0xbc4) * 4 + 0xb78),param_7,
                   param_8,param_9,param_10,param_11);
    uVar13 = local_c0;
    uVar28 = extraout_s0_09;
    uVar29 = extraout_var_09;
    uVar30 = extraout_var_25;
    if (((*(long *)(local_c0 + 8) == 0) ||
        (plVar15 = (long *)FUN_71037964b0(*(long *)(local_c0 + 8),0x7104422664),
        uVar28 = extraout_s0_10, uVar29 = extraout_var_10, uVar30 = extraout_var_26,
        plVar15 == (long *)0x0)) ||
       (uVar16 = (**(code **)(*plVar15 + 0x130))(), uVar28 = extraout_s0_11,
       uVar29 = extraout_var_11, uVar30 = extraout_var_27, (uVar16 & 1) == 0)) {
      lVar14 = (long)*(int *)(lVar24 + 0xbc4) + 1;
      iVar12 = (int)lVar14;
      *(int *)(lVar24 + 0xbc4) = iVar12;
      if (iVar12 < *(int *)(lVar24 + 0x98)) {
        ppppbVar1 = (byte ****)"set_parts_player_%02d";
        if (*(int *)(lVar24 + 0xbcc) != 0) {
          ppppbVar1 = (byte ****)"set_parts_player_1%1d";
        }
        FUN_7103776640(&local_b8,**(long **)(lVar24 + 0x80) + 8,ppppbVar1,
                       (long)*(int *)(lVar24 + lVar14 * 4 + 0xb78),param_7,param_8,param_9,param_10,
                       param_11);
        ppuVar10 = local_b0;
        FUN_7103778300(0x3f800000,(long)local_b0,0x710429257e);
        FUN_7103778300(0x3f800000,(long)ppuVar10,0x7104422664);
        local_b8 = &PTR_FUN_710523d988;
        local_b0 = (undefined **)0x0;
        uVar28 = extraout_s0_12;
        uVar29 = extraout_var_12;
        uVar30 = extraout_var_28;
        if (ppuVar10 != (undefined **)0x0) {
          puVar18 = ppuVar10[3];
          ppuVar10[2] = (undefined *)&PTR_FUN_710523d9a8;
          ppuVar10[3] = (undefined *)0x0;
          if (puVar18 != (undefined *)0x0) {
            FUN_710392eb40((ulong)puVar18);
          }
          FUN_710392eb40((ulong)ppuVar10);
          uVar28 = extraout_s0_13;
          uVar29 = extraout_var_13;
          uVar30 = extraout_var_29;
        }
      }
      else {
        *(undefined2 *)(lVar24 + 0xbdd) = 1;
        *(undefined4 *)(lVar24 + 0xbbc) = *(undefined4 *)(lVar24 + 0x40);
      }
    }
    local_c8 = &PTR_FUN_710523d988;
    local_c0 = 0;
    if (uVar13 != 0) {
      uVar16 = *(ulong *)(uVar13 + 0x18);
      *(undefined ***)(uVar13 + 0x10) = &PTR_FUN_710523d9a8;
      *(undefined8 *)(uVar13 + 0x18) = 0;
      if (uVar16 != 0) {
        FUN_710392eb40(uVar16);
      }
      FUN_710392eb40(uVar13);
      uVar28 = extraout_s0_14;
      uVar29 = extraout_var_14;
      uVar30 = extraout_var_30;
    }
  }
  if (((*(char *)(lVar24 + 0xbdc) != '\0') &&
      (iVar12 = *(int *)(lVar24 + 3000), iVar12 < *(int *)(lVar24 + 0xb58))) &&
     (iVar20 = *(int *)(lVar24 + 0xbc0) + 1, *(int *)(lVar24 + 0xbc0) = iVar20,
     *(int *)(lVar24 + 0x3c) <= iVar20)) {
    *(int *)(lVar24 + 3000) = iVar12 + 1;
    *(int *)(lVar24 + 0xbc8) = iVar12 + 1;
    auVar9._4_4_ = uVar29;
    auVar9._0_4_ = uVar28;
    auVar9._8_8_ = uVar30;
    FUN_7101bfed30(auVar9,param_2,param_3,lVar24,iVar12);
    uVar25 = *(uint *)(lVar24 + 0x98);
    if (0 < (int)uVar25) {
      piVar19 = (int *)(lVar24 + 0xa18);
      uVar3 = *(uint *)(lVar24 + 3000);
      piVar23 = (int *)(lVar24 + 0x9c);
      uVar13 = 0;
      piVar26 = piVar23;
      do {
        piVar22 = piVar26;
        if (7 < uVar13) {
          piVar22 = &DAT_710509ec08;
        }
        iVar12 = *piVar22;
        piVar22 = piVar23;
        if ((((*piVar23 == iVar12) ||
             (piVar22 = (int *)(lVar24 + 0x134), *(int *)(lVar24 + 0x134) == iVar12)) ||
            ((piVar22 = (int *)(lVar24 + 0x1cc), *(int *)(lVar24 + 0x1cc) == iVar12 ||
             ((((piVar22 = (int *)(lVar24 + 0x264), *(int *)(lVar24 + 0x264) == iVar12 ||
                (piVar22 = (int *)(lVar24 + 0x2fc), *(int *)(lVar24 + 0x2fc) == iVar12)) ||
               (piVar22 = (int *)(lVar24 + 0x394), *(int *)(lVar24 + 0x394) == iVar12)) ||
              ((piVar22 = (int *)(lVar24 + 0x42c), *(int *)(lVar24 + 0x42c) == iVar12 ||
               (piVar22 = (int *)(lVar24 + 0x4c4), *(int *)(lVar24 + 0x4c4) == iVar12)))))))) &&
           (iVar12 = piVar22[1], iVar12 != -1)) {
          piVar22 = piVar19;
          if (((*piVar19 != iVar12) &&
              (piVar22 = (int *)(lVar24 + 0xa20), *(int *)(lVar24 + 0xa20) != iVar12)) &&
             (((piVar22 = (int *)(lVar24 + 0xa28), *(int *)(lVar24 + 0xa28) != iVar12 &&
               (((piVar22 = (int *)(lVar24 + 0xa30), *(int *)(lVar24 + 0xa30) != iVar12 &&
                 (piVar22 = (int *)(lVar24 + 0xa38), *(int *)(lVar24 + 0xa38) != iVar12)) &&
                (piVar22 = (int *)(lVar24 + 0xa40), *(int *)(lVar24 + 0xa40) != iVar12)))) &&
              ((piVar22 = (int *)(lVar24 + 0xa48), *(int *)(lVar24 + 0xa48) != iVar12 &&
               (piVar22 = (int *)(lVar24 + 0xa50), *(int *)(lVar24 + 0xa50) != iVar12)))))) {
            piVar22 = piVar19;
          }
          uVar11 = piVar22[1];
        }
        else {
          uVar11 = 0;
        }
        lVar14 = (long)*(int *)(lVar24 + 0xb78 + uVar13 * 4);
        uVar2 = uVar3;
        if ((int)uVar11 <= (int)uVar3) {
          uVar2 = uVar11;
        }
        if (*(uint *)(lVar24 + lVar14 * 4 + 0xb98) != uVar2) {
          ppppbVar1 = (byte ****)"set_parts_player_%02d";
          if (*(int *)(lVar24 + 0xbcc) != 0) {
            ppppbVar1 = (byte ****)"set_parts_player_1%1d";
          }
          FUN_7103776640(&local_d8,**(long **)(lVar24 + 0x80) + 8,ppppbVar1,lVar14,param_7,param_8,
                         param_9,param_10,param_11);
          FUN_7103776910(&local_c8,(long)&local_d8,(long ****)"set_txt_num",lVar14,param_7,param_8,
                         param_9,param_10,param_11);
          uVar16 = local_c0;
          plVar15 = *(long **)(local_c0 + 0x10);
          if (plVar15 != (long *)0x0) {
            param_8 = (long ****)0x0;
            param_9 = (int *)0x0;
            local_88 = 0;
            local_80 = 0;
            local_98 = 0;
            local_90 = 0;
            local_a8 = 0;
            local_a0 = 0;
            local_b8 = (undefined **)0x0;
            local_b0 = (undefined **)0x0;
            uVar11 = FUN_71037ad940((long)&local_b8,0x20,0,uVar2,0,0);
            param_7 = (byte ****)0x0;
            FUN_71037a2270(plVar15,(ushort *)&local_b8,uVar11,0);
          }
          local_c8 = &PTR_FUN_710523d9a8;
          local_c0 = 0;
          if (uVar16 != 0) {
            FUN_710392eb40(uVar16);
          }
          uVar16 = local_d0;
          local_d8 = &PTR_FUN_710523d988;
          local_d0 = 0;
          if (uVar16 != 0) {
            uVar17 = *(ulong *)(uVar16 + 0x18);
            *(undefined ***)(uVar16 + 0x10) = &PTR_FUN_710523d9a8;
            *(undefined8 *)(uVar16 + 0x18) = 0;
            if (uVar17 != 0) {
              FUN_710392eb40(uVar17);
            }
            FUN_710392eb40(uVar16);
          }
          *(uint *)(lVar24 + (long)*(int *)(lVar24 + 0xb78 + uVar13 * 4) * 4 + 0xb98) = uVar2;
        }
        uVar13 = uVar13 + 1;
        piVar26 = piVar26 + 0x26;
      } while (uVar25 != uVar13);
    }
    if ((*(char *)(*(long *)(DAT_710532f8d0 + 8) + 0x191) == '\0') &&
       (uVar13 = FUN_7103313f20(*(long *)(DAT_710532f8d0 + 8),0x19b4f69cad,(long ****)&DAT_00000004,
                                param_7,param_8,param_9,param_10,param_11), (uVar13 & 1) != 0)) {
      FUN_71024076d0((undefined4 *)&local_b8,0x19b4f69cad);
      if (((local_a8 != 0) && (DAT_7106dd53a8 == '\x01')) && ((int)local_a0 == DAT_7106dd53ac)) {
        piVar19 = (int *)(local_a8 + 0x38);
        do {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(piVar19,0x10);
          if (bVar6) {
            *piVar19 = *piVar19 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
      }
    }
    else {
      local_98 = local_98 & 0xffffffffffffff00;
      local_a0 = 0x87650000000000;
      local_90 = 0xffffffffffffffff;
      local_88 = 0;
      local_b8 = (undefined **)((ulong)local_b8 & 0xffffffff00000000);
      local_80 = 0;
    }
    local_b0 = &PTR_FUN_7104f73d50;
    local_a8 = 0;
    local_98 = local_98 & 0xffffffffffffff00;
    *(undefined4 *)(lVar24 + 0xbc0) = 0;
    if (*(int *)(lVar24 + 0xb58) <= *(int *)(lVar24 + 3000)) {
      uVar25 = *(uint *)(lVar24 + 0x98);
      *(undefined2 *)(lVar24 + 0xbdc) = 0x100;
      *(undefined4 *)(lVar24 + 0xbbc) = *(undefined4 *)(lVar24 + 0x40);
      if (0 < (int)uVar25) {
        ppppbVar1 = (byte ****)(lVar24 + 0x9c);
        uVar13 = 0;
        piVar19 = (int *)(lVar24 + 0xa18);
        param_7 = (byte ****)(lVar24 + 0x4c4);
        param_9 = (int *)(lVar24 + 0xa48);
        param_10 = (int *)(lVar24 + 0xa50);
        ppppbVar27 = ppppbVar1;
        do {
          iVar12 = (int)uVar13;
          ppppbVar21 = ppppbVar1;
          if (((((iVar12 == *(int *)ppppbVar1) ||
                (ppppbVar21 = (byte ****)(lVar24 + 0x134), iVar12 == *(int *)(lVar24 + 0x134))) ||
               ((ppppbVar21 = (byte ****)(lVar24 + 0x1cc), iVar12 == *(int *)(lVar24 + 0x1cc) ||
                ((ppppbVar21 = (byte ****)(lVar24 + 0x264), iVar12 == *(int *)(lVar24 + 0x264) ||
                 (ppppbVar21 = (byte ****)(lVar24 + 0x2fc), iVar12 == *(int *)(lVar24 + 0x2fc)))))))
              || ((ppppbVar21 = (byte ****)(lVar24 + 0x394), iVar12 == *(int *)(lVar24 + 0x394) ||
                  ((ppppbVar21 = (byte ****)(lVar24 + 0x42c), iVar12 == *(int *)(lVar24 + 0x42c) ||
                   (ppppbVar21 = param_7, iVar12 == *(int *)param_7)))))) &&
             (iVar12 = *(int *)((long)ppppbVar21 + 4), iVar12 != -1)) {
            piVar23 = piVar19;
            if ((((((*piVar19 != iVar12) &&
                   (piVar23 = (int *)(lVar24 + 0xa20), *(int *)(lVar24 + 0xa20) != iVar12)) &&
                  (piVar23 = (int *)(lVar24 + 0xa28), *(int *)(lVar24 + 0xa28) != iVar12)) &&
                 ((piVar23 = (int *)(lVar24 + 0xa30), *(int *)(lVar24 + 0xa30) != iVar12 &&
                  (piVar23 = (int *)(lVar24 + 0xa38), *(int *)(lVar24 + 0xa38) != iVar12)))) &&
                (piVar23 = (int *)(lVar24 + 0xa40), *(int *)(lVar24 + 0xa40) != iVar12)) &&
               ((piVar23 = param_9, *param_9 != iVar12 && (piVar23 = param_10, *param_10 != iVar12))
               )) {
              piVar23 = piVar19;
            }
            iVar12 = piVar23[1];
          }
          else {
            iVar12 = 0;
          }
          if (*(int *)(lVar24 + 0xb58) <= iVar12) {
            ppppbVar21 = ppppbVar27;
            if (7 < uVar13) {
              ppppbVar21 = (byte ****)&DAT_710509ec08;
            }
            if (*(int *)((long)ppppbVar21 + 0x94) != 3) {
              if (((DAT_71053144d8 & 1) == 0) &&
                 (iVar12 = __cxa_guard_acquire(&DAT_71053144d8), iVar12 != 0)) {
                FUN_7101764000();
                FUN_71000001c0();
                __cxa_guard_release(&DAT_71053144d8);
              }
              uVar3 = (&DAT_71052c574c)[(long)*(int *)((long)ppppbVar21 + 4) * 0x98];
              if (uVar3 != 0xffffffff) {
                if (9 < uVar3) {
LAB_7101c018cc:
                    /* WARNING: Subroutine does not return */
                  abort();
                }
                lVar14 = *(long *)(*(long *)(DAT_71053398d8 + 8) + (long)(int)uVar3 * 8 + 8);
                if ((*(int *)(lVar14 + 0xa8) == 1) || (*(char *)(lVar14 + 0xdd) != '\0')) {
                  *(undefined2 *)(lVar14 + 0xdd) = 0x100;
                  if (0x12 < *(uint *)(lVar14 + 0xa4)) goto LAB_7101c018cc;
                  *(undefined4 *)(lVar14 + (long)(int)*(uint *)(lVar14 + 0xa4) * 4 + 0x58) = 2;
                }
              }
            }
          }
          param_8 = (long ****)&DAT_71053144d8;
          param_11 = 0x260;
          uVar13 = uVar13 + 1;
          ppppbVar27 = ppppbVar27 + 0x13;
        } while (uVar25 != uVar13);
      }
    }
  }
  if (*(char *)(lVar24 + 0xbdd) == '\0') goto LAB_7101c0118c;
  if (0 < *(int *)(lVar24 + 0xbbc)) {
    *(int *)(lVar24 + 0xbbc) = *(int *)(lVar24 + 0xbbc) + -1;
    goto LAB_7101c0118c;
  }
  *(undefined1 *)(lVar24 + 0xbdd) = 0;
  if (*(int *)(lVar24 + 0xbcc) != 1) {
    if (*(int *)(lVar24 + 0xbcc) != 0) goto LAB_7101c0118c;
    iVar12 = *(int *)(lVar24 + 0xa58);
    if (*(int *)(lVar24 + 0xa0) == iVar12) {
      piVar19 = (int *)(lVar24 + 0x9c);
LAB_7101c013c8:
      iVar12 = *piVar19;
    }
    else {
      if (*(int *)(lVar24 + 0x138) == iVar12) {
        piVar19 = (int *)(lVar24 + 0x134);
        goto LAB_7101c013c8;
      }
      if (*(int *)(lVar24 + 0x1d0) == iVar12) {
        piVar19 = (int *)(lVar24 + 0x1cc);
        goto LAB_7101c013c8;
      }
      if (*(int *)(lVar24 + 0x268) == iVar12) {
        piVar19 = (int *)(lVar24 + 0x264);
        goto LAB_7101c013c8;
      }
      if (*(int *)(lVar24 + 0x300) == iVar12) {
        piVar19 = (int *)(lVar24 + 0x2fc);
        goto LAB_7101c013c8;
      }
      if (*(int *)(lVar24 + 0x398) == iVar12) {
        piVar19 = (int *)(lVar24 + 0x394);
        goto LAB_7101c013c8;
      }
      if (*(int *)(lVar24 + 0x430) == iVar12) {
        piVar19 = (int *)(lVar24 + 0x42c);
        goto LAB_7101c013c8;
      }
      if (*(int *)(lVar24 + 0x4c8) == iVar12) {
        piVar19 = (int *)(lVar24 + 0x4c4);
        goto LAB_7101c013c8;
      }
      iVar12 = 0;
    }
    if (0 < *(int *)(lVar24 + 0x98)) {
      uVar13 = 0;
      piVar19 = (int *)(lVar24 + 0x9c);
      iVar20 = -1;
      do {
        piVar23 = piVar19;
        if (7 < uVar13) {
          piVar23 = &DAT_710509ec08;
        }
        iVar4 = (int)uVar13;
        if (*piVar23 != iVar12) {
          iVar4 = iVar20;
        }
        uVar13 = uVar13 + 1;
      } while (((long)uVar13 < (long)*(int *)(lVar24 + 0x98)) &&
              (piVar19 = piVar19 + 0x26, iVar20 = iVar4, *piVar23 != iVar12));
      if (iVar4 != -1) {
        FUN_7103776640(&local_b8,**(long **)(lVar24 + 0x80) + 8,(byte ****)"set_parts_player_%02d",
                       (long)*(int *)(lVar24 + (long)iVar4 * 4 + 0xb78),param_7,param_8,param_9,
                       param_10,param_11);
        ppuVar10 = local_b0;
        FUN_7103778300(0x3f800000,(long)local_b0,0x710433a0fe);
        local_b8 = &PTR_FUN_710523d988;
        local_b0 = (undefined **)0x0;
        if (ppuVar10 != (undefined **)0x0) {
          puVar18 = ppuVar10[3];
          ppuVar10[2] = (undefined *)&PTR_FUN_710523d9a8;
          ppuVar10[3] = (undefined *)0x0;
          if (puVar18 != (undefined *)0x0) {
            FUN_710392eb40((ulong)puVar18);
          }
          FUN_710392eb40((ulong)ppuVar10);
        }
      }
    }
    goto LAB_7101c0118c;
  }
  iVar12 = *(int *)(lVar24 + 0xa58);
  piVar19 = (int *)(lVar24 + 0x9c);
  uVar25 = *(uint *)(lVar24 + 0x98);
  piVar23 = piVar19;
  if (*(int *)(lVar24 + 0xa0) == iVar12) {
LAB_7101c0132c:
    iVar12 = *piVar23;
  }
  else {
    if (*(int *)(lVar24 + 0x138) == iVar12) {
      piVar23 = (int *)(lVar24 + 0x134);
      goto LAB_7101c0132c;
    }
    if (*(int *)(lVar24 + 0x1d0) == iVar12) {
      piVar23 = (int *)(lVar24 + 0x1cc);
      goto LAB_7101c0132c;
    }
    if (*(int *)(lVar24 + 0x268) == iVar12) {
      piVar23 = (int *)(lVar24 + 0x264);
      goto LAB_7101c0132c;
    }
    if (*(int *)(lVar24 + 0x300) == iVar12) {
      piVar23 = (int *)(lVar24 + 0x2fc);
      goto LAB_7101c0132c;
    }
    if (*(int *)(lVar24 + 0x398) == iVar12) {
      piVar23 = (int *)(lVar24 + 0x394);
      goto LAB_7101c0132c;
    }
    if (*(int *)(lVar24 + 0x430) == iVar12) {
      piVar23 = (int *)(lVar24 + 0x42c);
      goto LAB_7101c0132c;
    }
    if (*(int *)(lVar24 + 0x4c8) == iVar12) {
      piVar23 = (int *)(lVar24 + 0x4c4);
      goto LAB_7101c0132c;
    }
    iVar12 = 0;
  }
  iVar20 = *piVar19;
  piVar23 = piVar19;
  if (iVar20 == iVar12) {
LAB_7101c0149c:
    iVar12 = piVar23[1];
    if (iVar12 == -1) goto LAB_7101c014cc;
    lVar14 = lVar24 + 0xa18;
    if (*(int *)(lVar24 + 0xa18) != iVar12) {
      if (*(int *)(lVar24 + 0xa20) == iVar12) {
        lVar14 = lVar24 + 0xa20;
      }
      else if (*(int *)(lVar24 + 0xa28) == iVar12) {
        lVar14 = lVar24 + 0xa28;
      }
      else if (*(int *)(lVar24 + 0xa30) == iVar12) {
        lVar14 = lVar24 + 0xa30;
      }
      else if (*(int *)(lVar24 + 0xa38) == iVar12) {
        lVar14 = lVar24 + 0xa38;
      }
      else if (*(int *)(lVar24 + 0xa40) == iVar12) {
        lVar14 = lVar24 + 0xa40;
      }
      else if (*(int *)(lVar24 + 0xa48) == iVar12) {
        lVar14 = lVar24 + 0xa48;
      }
      else {
        lVar14 = lVar24 + 0xa50;
        if (*(int *)(lVar24 + 0xa50) != iVar12) {
          lVar14 = lVar24 + 0xa18;
        }
      }
    }
    iVar12 = *(int *)(lVar14 + 4);
  }
  else {
    if (*(int *)(lVar24 + 0x134) == iVar12) {
      piVar23 = (int *)(lVar24 + 0x134);
      goto LAB_7101c0149c;
    }
    if (*(int *)(lVar24 + 0x1cc) == iVar12) {
      piVar23 = (int *)(lVar24 + 0x1cc);
      goto LAB_7101c0149c;
    }
    if (*(int *)(lVar24 + 0x264) == iVar12) {
      piVar23 = (int *)(lVar24 + 0x264);
      goto LAB_7101c0149c;
    }
    if (*(int *)(lVar24 + 0x2fc) == iVar12) {
      piVar23 = (int *)(lVar24 + 0x2fc);
      goto LAB_7101c0149c;
    }
    if (*(int *)(lVar24 + 0x394) == iVar12) {
      piVar23 = (int *)(lVar24 + 0x394);
      goto LAB_7101c0149c;
    }
    if (*(int *)(lVar24 + 0x42c) == iVar12) {
      piVar23 = (int *)(lVar24 + 0x42c);
      goto LAB_7101c0149c;
    }
    if (*(int *)(lVar24 + 0x4c4) == iVar12) {
      piVar23 = (int *)(lVar24 + 0x4c4);
      goto LAB_7101c0149c;
    }
LAB_7101c014cc:
    iVar12 = 0;
  }
  if (0 < (int)uVar25) {
    uVar13 = 0;
    piVar23 = (int *)(lVar24 + 0x9c);
    piVar26 = (int *)(lVar24 + 0xa18);
    do {
      piVar22 = piVar23;
      if (7 < uVar13) {
        piVar22 = &DAT_710509ec08;
      }
      iVar4 = *piVar22;
      piVar22 = piVar19;
      if (((((iVar20 == iVar4) ||
            (piVar22 = (int *)(lVar24 + 0x134), *(int *)(lVar24 + 0x134) == iVar4)) ||
           (piVar22 = (int *)(lVar24 + 0x1cc), *(int *)(lVar24 + 0x1cc) == iVar4)) ||
          (((piVar22 = (int *)(lVar24 + 0x264), *(int *)(lVar24 + 0x264) == iVar4 ||
            (piVar22 = (int *)(lVar24 + 0x2fc), *(int *)(lVar24 + 0x2fc) == iVar4)) ||
           ((piVar22 = (int *)(lVar24 + 0x394), *(int *)(lVar24 + 0x394) == iVar4 ||
            ((piVar22 = (int *)(lVar24 + 0x42c), *(int *)(lVar24 + 0x42c) == iVar4 ||
             (piVar22 = (int *)(lVar24 + 0x4c4), *(int *)(lVar24 + 0x4c4) == iVar4)))))))) &&
         (iVar20 = piVar22[1], iVar20 != -1)) {
        piVar22 = piVar26;
        if ((((*piVar26 != iVar20) &&
             (piVar22 = (int *)(lVar24 + 0xa20), *(int *)(lVar24 + 0xa20) != iVar20)) &&
            (piVar22 = (int *)(lVar24 + 0xa28), *(int *)(lVar24 + 0xa28) != iVar20)) &&
           (((piVar22 = (int *)(lVar24 + 0xa30), *(int *)(lVar24 + 0xa30) != iVar20 &&
             (piVar22 = (int *)(lVar24 + 0xa38), *(int *)(lVar24 + 0xa38) != iVar20)) &&
            ((piVar22 = (int *)(lVar24 + 0xa40), *(int *)(lVar24 + 0xa40) != iVar20 &&
             ((piVar22 = (int *)(lVar24 + 0xa48), *(int *)(lVar24 + 0xa48) != iVar20 &&
              (piVar22 = (int *)(lVar24 + 0xa50), *(int *)(lVar24 + 0xa50) != iVar20)))))))) {
          piVar22 = piVar26;
        }
        if (piVar22[1] == iVar12) {
LAB_7101c0175c:
          ppppbVar1 = (byte ****)"set_parts_player_%02d";
          if (*(int *)(lVar24 + 0xbcc) != 0) {
            ppppbVar1 = (byte ****)"set_parts_player_1%1d";
          }
          FUN_7103776640(&local_b8,**(long **)(lVar24 + 0x80) + 8,ppppbVar1,
                         (long)*(int *)(lVar24 + 0xb78 + uVar13 * 4),param_7,param_8,param_9,
                         param_10,param_11);
          ppuVar10 = local_b0;
          FUN_7103778300(0x3f800000,(long)local_b0,0x710433a105);
          local_b8 = &PTR_FUN_710523d988;
          local_b0 = (undefined **)0x0;
          if (ppuVar10 != (undefined **)0x0) {
            puVar18 = ppuVar10[3];
            ppuVar10[2] = (undefined *)&PTR_FUN_710523d9a8;
            ppuVar10[3] = (undefined *)0x0;
            if (puVar18 != (undefined *)0x0) {
              FUN_710392eb40((ulong)puVar18);
            }
            FUN_710392eb40((ulong)ppuVar10);
          }
        }
      }
      else if (iVar12 == 0) goto LAB_7101c0175c;
      if ((ulong)uVar25 - 1 == uVar13) break;
      iVar20 = *piVar19;
      uVar13 = uVar13 + 1;
      piVar23 = piVar23 + 0x26;
    } while( true );
  }
  if ((*(char *)(*(long *)(DAT_710532f8d0 + 8) + 0x191) == '\0') &&
     (uVar13 = FUN_7103313f20(*(long *)(DAT_710532f8d0 + 8),0x1ffd208ef2,(long ****)&DAT_00000004,
                              param_7,param_8,param_9,param_10,param_11), (uVar13 & 1) != 0)) {
    FUN_71024076d0((undefined4 *)&local_b8,0x1ffd208ef2);
    if (((local_a8 != 0) && (DAT_7106dd53a8 == '\x01')) && ((int)local_a0 == DAT_7106dd53ac)) {
      piVar19 = (int *)(local_a8 + 0x38);
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar19,0x10);
        if (bVar6) {
          *piVar19 = *piVar19 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
    }
  }
  else {
    local_98 = local_98 & 0xffffffffffffff00;
    local_a0 = 0x87650000000000;
    local_90 = 0xffffffffffffffff;
    local_88 = 0;
    local_b8 = (undefined **)((ulong)local_b8 & 0xffffffff00000000);
    local_80 = 0;
  }
  local_b0 = &PTR_FUN_7104f73d50;
  local_a8 = 0;
  FUN_7101bff490(lVar24,1);
LAB_7101c0118c:
  iVar12 = *(int *)(lVar24 + 0xbd8) + -1;
  if ((0 < *(int *)(lVar24 + 0xbd8)) && (*(int *)(lVar24 + 0xbd8) = iVar12, iVar12 == 0)) {
    FUN_7103778300(0x3f800000,*(long *)(**(long **)(lVar24 + 0x80) + 0x10),0x71042a3819);
  }
  return;
}

