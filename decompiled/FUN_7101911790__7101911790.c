// addr:      7101911790
// offset:    0x1911790
// name:      FUN_7101911790
// mangled:   
// signature: undefined __cdecl FUN_7101911790(long param_1, undefined8 param_2, undefined8 param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_7101911790(long param_1,undefined8 param_2,undefined8 param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  int iVar1;
  ushort uVar2;
  ushort uVar3;
  short sVar4;
  char cVar5;
  bool bVar6;
  size_t sVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  ulong uVar11;
  undefined8 uVar12;
  byte ****ppppbVar13;
  long ****pppplVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  code *pcVar18;
  long lVar19;
  int *piVar20;
  uint *puVar21;
  undefined2 *puVar22;
  long *plVar23;
  ulong uVar24;
  void *pvVar25;
  char *pcVar26;
  byte *pbVar27;
  long lVar28;
  ulong uVar29;
  uint uVar30;
  uint uVar31;
  uint *__dest;
  void *__dest_00;
  long *plVar32;
  long lVar33;
  long lVar34;
  undefined8 local_120;
  undefined8 local_118;
  long local_110;
  undefined2 local_108;
  undefined2 uStack_106;
  undefined1 local_104;
  undefined1 uStack_103;
  undefined1 local_102;
  undefined1 uStack_101;
  undefined1 local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined **local_d8;
  uint local_d0;
  undefined4 uStack_cc;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined8 local_c0;
  uint local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined **local_98;
  long *local_90;
  undefined **local_88;
  ulong local_80;
  
  plVar32 = *(long **)(param_1 + 0x58);
  if (0x12 < *(uint *)((long)plVar32 + 0x214)) {
LAB_710191270c:
                    /* WARNING: Subroutine does not return */
    abort();
  }
  uVar8 = *(uint *)((long)plVar32 + (long)(int)*(uint *)((long)plVar32 + 0x214) * 4 + 0x1c8);
  if (*(uint *)(plVar32 + 0x43) != uVar8) {
    *(uint *)(plVar32 + 0x44) = *(uint *)(plVar32 + 0x43);
    *(uint *)(plVar32 + 0x43) = uVar8;
    if (0x19 < uVar8) goto LAB_710191270c;
    lVar19 = plVar32[(long)(int)uVar8 * 2 + 6];
    plVar32[1] = plVar32[(long)(int)uVar8 * 2 + 5];
    plVar32[2] = lVar19;
    pcVar18 = (code *)plVar32[3];
    uVar24 = plVar32[4] & 1;
    if (uVar24 != 0 || pcVar18 != (code *)0x0) {
      if (uVar24 != 0) {
        pcVar18 = *(code **)(pcVar18 + *(long *)(*plVar32 + (plVar32[4] >> 1)));
      }
      (*pcVar18)();
    }
    *(undefined4 *)((long)plVar32 + 0x21c) = 0;
  }
  if (*(char *)((long)plVar32 + 0x224) != '\0') {
    pcVar18 = (code *)plVar32[3];
    uVar24 = plVar32[4] & 1;
    if (uVar24 != 0 || pcVar18 != (code *)0x0) {
      if (uVar24 != 0) {
        pcVar18 = *(code **)(pcVar18 + *(long *)(*plVar32 + (plVar32[4] >> 1)));
      }
      (*pcVar18)();
    }
    *(undefined4 *)((long)plVar32 + 0x21c) = 0;
    *(undefined1 *)((long)plVar32 + 0x224) = 0;
  }
  if (*plVar32 != 0) {
    pcVar18 = (code *)plVar32[1];
    uVar24 = plVar32[2] & 1;
    if (uVar24 != 0 || pcVar18 != (code *)0x0) {
      plVar23 = (long *)(*plVar32 + (plVar32[2] >> 1));
      if (uVar24 != 0) {
        pcVar18 = *(code **)(pcVar18 + *plVar23);
      }
      (*pcVar18)(plVar23,param_2);
    }
  }
  *(int *)((long)plVar32 + 0x21c) = *(int *)((long)plVar32 + 0x21c) + 1;
  if ((char)plVar32[0x50] == '\0') {
    return;
  }
  if (0 < *(int *)((long)plVar32 + 0x27c)) {
    *(int *)((long)plVar32 + 0x27c) = *(int *)((long)plVar32 + 0x27c) + -1;
  }
  lVar19 = *(long *)(plVar32[0x49] + 0x80);
  if (*(char *)(lVar19 + 0xff0) == '\0') {
    return;
  }
  lVar33 = *(long *)(plVar32[0x47] + 0x80);
  if (*(long *)(lVar33 + 0x2e0) != *(long *)(lVar33 + 0x2d8)) {
    if (*(char *)(*(long *)(DAT_710532f8d0 + 8) + 0x191) == '\0') {
      param_3 = 4;
      uVar24 = FUN_7103313f20(*(long *)(DAT_710532f8d0 + 8),0x1dca4d3f27,(long ****)&DAT_00000004,
                              param_4,param_5,param_6,param_7,param_8);
      if ((uVar24 & 1) == 0) goto LAB_7101911974;
      FUN_71024076d0((undefined4 *)&local_120,0x1dca4d3f27);
      if (((local_110 != 0) && (DAT_7106dd53a8 == '\x01')) &&
         (CONCAT22(uStack_106,local_108) == DAT_7106dd53ac)) {
        piVar20 = (int *)(local_110 + 0x38);
        do {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(piVar20,0x10);
          if (bVar6) {
            *piVar20 = *piVar20 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
      }
    }
    else {
LAB_7101911974:
      local_f8 = 0xffffffffffffffff;
      uStack_f0 = 0;
      local_108 = 0;
      uStack_106 = 0;
      local_104 = 0;
      uStack_103 = 0x65;
      local_102 = 0x87;
      uStack_101 = 0;
      local_120 = local_120 & 0xffffffff00000000;
      local_e8 = 0;
    }
    local_118 = &PTR_FUN_7104f73d50;
    local_110 = 0;
    local_100 = 0;
    FUN_7103778300(0x3f800000,*(long *)(lVar33 + 0x128),0x7104291fbe);
    FUN_7103778300(0x3f800000,*(long *)(lVar33 + 0x128),0x710436c7f6);
    puVar21 = *(uint **)(lVar33 + 0x2e0);
    __dest = *(uint **)(lVar33 + 0x2d8);
    if (puVar21 == __dest) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_out_of_range();
    }
    uVar8 = *__dest;
    if (uVar8 != 0) {
      iVar9 = *(int *)(lVar33 + 0x270) + uVar8;
      uVar31 = __dest[1];
      *(int *)(lVar33 + 0x270) = iVar9;
      lVar19 = lVar33 + 0x130;
      *(float *)(lVar33 + 0x278) = (float)(uint)(iVar9 - *(int *)(lVar33 + 0x268)) / 60.0;
      FUN_7103776640(&local_88,lVar19,(byte ****)"set_parts_param_03",param_3,param_4,param_5,
                     param_6,param_7,param_8);
      FUN_7103776910(&local_d8,(long)&local_88,(long ****)"set_txt_exp_add",param_3,param_4,param_5,
                     param_6,param_7,param_8);
      uVar12 = 1;
      ppppbVar13 = (byte ****)(ulong)uVar8;
      FUN_710377a280((long)&local_d8,(byte *)"mnu_spirits_raise_exp_add_n",1);
      uVar24 = CONCAT44(uStack_cc,local_d0);
      local_d8 = &PTR_FUN_710523d9a8;
      local_d0 = 0;
      uStack_cc = 0;
      if (uVar24 != 0) {
        FUN_710392eb40(uVar24);
      }
      uVar24 = local_80;
      local_88 = &PTR_FUN_710523d988;
      local_80 = 0;
      if (uVar24 != 0) {
        uVar11 = *(ulong *)(uVar24 + 0x18);
        *(undefined ***)(uVar24 + 0x10) = &PTR_FUN_710523d9a8;
        *(undefined8 *)(uVar24 + 0x18) = 0;
        if (uVar11 != 0) {
          FUN_710392eb40(uVar11);
        }
        FUN_710392eb40(uVar24);
      }
      FUN_7103776640(&local_d8,lVar19,(byte ****)"set_parts_param_03",uVar12,ppppbVar13,param_5,
                     param_6,param_7,param_8);
      uVar24 = CONCAT44(uStack_cc,local_d0);
      FUN_7103778300(0x3f800000,uVar24,0x7104401909);
      local_d8 = &PTR_FUN_710523d988;
      local_d0 = 0;
      uStack_cc = 0;
      if (uVar24 != 0) {
        uVar11 = *(ulong *)(uVar24 + 0x18);
        *(undefined ***)(uVar24 + 0x10) = &PTR_FUN_710523d9a8;
        *(undefined8 *)(uVar24 + 0x18) = 0;
        if (uVar11 != 0) {
          FUN_710392eb40(uVar11);
        }
        FUN_710392eb40(uVar24);
      }
      if (*(int *)(lVar33 + 0x2c4) == -1) {
        if ((*(char *)(*(long *)(DAT_710532f8d0 + 8) + 0x191) == '\0') &&
           (uVar24 = FUN_7103313f20(*(long *)(DAT_710532f8d0 + 8),0x197bd6bfff,
                                    (long ****)&DAT_00000004,ppppbVar13,param_5,param_6,param_7,
                                    param_8), (uVar24 & 1) != 0)) {
          FUN_71024076d0((undefined4 *)&local_d8,0x197bd6bfff);
          lVar28 = CONCAT44(uStack_c4,local_c8);
          *(undefined4 *)(lVar33 + 0x298) = local_d8._0_4_;
          if (lVar28 == 0) goto LAB_7101911bc0;
          if (*(int *)(lVar33 + 0x2b4) == 0x876500) {
            if (*(int *)(lVar33 + 0x2b0) == DAT_7106dd53ac) {
              if ((*(long *)(lVar33 + 0x2a8) != 0) && (DAT_7106dd53a8 == '\x01')) {
                piVar20 = (int *)(*(long *)(lVar33 + 0x2a8) + 0x38);
                do {
                  cVar5 = '\x01';
                  bVar6 = (bool)ExclusiveMonitorPass(piVar20,0x10);
                  if (bVar6) {
                    *piVar20 = *piVar20 + -1;
                    cVar5 = ExclusiveMonitorsStatus();
                  }
                } while (cVar5 != '\0');
              }
              *(undefined8 *)(lVar33 + 0x2a8) = 0;
              *(undefined1 *)(lVar33 + 0x2b8) = 0;
            }
            else {
              *(int *)(lVar33 + 0x2b0) = DAT_7106dd53ac;
            }
            *(long *)(lVar33 + 0x2a8) = lVar28;
            piVar20 = (int *)(lVar28 + 0x38);
            do {
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(piVar20,0x10);
              if (bVar6) {
                *piVar20 = *piVar20 + 1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            goto LAB_7101911c08;
          }
        }
        else {
          local_c0 = 0x87650000000000;
          local_c8 = 0;
          uStack_c4 = 0;
          local_b8 = local_b8 & 0xffffff00;
          local_d8 = (undefined **)((ulong)local_d8 & 0xffffffff00000000);
          local_a0 = 0;
          local_b0 = 0xffffffffffffffff;
          uStack_a8 = 0;
          *(undefined4 *)(lVar33 + 0x298) = 0;
LAB_7101911bc0:
          if (((*(long *)(lVar33 + 0x2a8) != 0) && (DAT_7106dd53a8 == '\x01')) &&
             (*(int *)(lVar33 + 0x2b0) == DAT_7106dd53ac)) {
            piVar20 = (int *)(*(long *)(lVar33 + 0x2a8) + 0x38);
            do {
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(piVar20,0x10);
              if (bVar6) {
                *piVar20 = *piVar20 + -1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
          }
          *(undefined8 *)(lVar33 + 0x2a8) = 0;
LAB_7101911c08:
          *(undefined1 *)(lVar33 + 0x2b8) = 0;
          lVar28 = CONCAT44(uStack_c4,local_c8);
        }
        *(undefined8 *)(lVar33 + 0x2c0) = local_b0;
        *(undefined8 *)(lVar33 + 0x2d0) = local_a0;
        *(undefined8 *)(lVar33 + 0x2c8) = uStack_a8;
        local_d0 = 0x4f73d50;
        uStack_cc = 0x71;
        if (((lVar28 != 0) && (DAT_7106dd53a8 == '\x01')) && ((int)local_c0 == DAT_7106dd53ac)) {
          piVar20 = (int *)(lVar28 + 0x38);
          do {
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(piVar20,0x10);
            if (bVar6) {
              *piVar20 = *piVar20 + -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
        }
        local_c8 = 0;
        uStack_c4 = 0;
      }
      uVar3 = *(ushort *)(lVar33 + 0x15c);
      uVar24 = 1;
      if (((short)uVar3 != -1) && ((short)uVar3 < 2000)) {
        lVar28 = *(long *)(*(long *)(DAT_710532f730 + 8) + 0x1d8);
        uVar2 = *(ushort *)(lVar28 + (long)(int)(short)uVar3 * 2 + 0x60);
        uVar24 = (ulong)uVar2;
        uVar11 = (*(long *)(lVar28 + 0x28) - *(long *)(lVar28 + 0x20) >> 6) * -0x3333333333333333;
        if ((uint)uVar2 < (uint)uVar11) {
          puVar22 = (undefined2 *)(*(long *)(lVar28 + 0x20) + uVar24 * 0x140);
          if (uVar11 < uVar24 || uVar11 - uVar24 == 0) {
            puVar22 = &DAT_7105182b08;
          }
          uVar8 = FUN_71025c9ac0(*(float *)(puVar22 + 0x3a),*(uint *)(lVar33 + 0x270),
                                 *(uint *)(puVar22 + 0x38));
          uVar24 = (ulong)uVar8;
        }
        else {
          uVar24 = 1;
        }
      }
      local_d8 = (undefined **)0x1;
      local_d0 = local_d0 & 0xffffff00;
      uStack_cc = 0;
      local_c8 = 0;
      local_c0 = 0x52ffff0000000000;
      local_b8 = 0;
      FUN_71025ca840((int *)&local_d8,uVar3,(int)uVar24);
      uVar8 = FUN_71025cb8d0((long)&local_d8);
      if (*(uint *)(lVar33 + 0x27c) < uVar8) {
        *(uint *)(lVar33 + 0x280) = uVar8;
      }
      uVar3 = *(ushort *)(lVar33 + 0x15e);
      if (uVar3 >> 4 < 0x177) {
        puVar22 = (undefined2 *)(*(long *)(*DAT_7105329f98 + 0x30) + (ulong)uVar3 * 0x50 + 72000);
      }
      else {
        puVar22 = &DAT_710532a878;
        if (((ushort)(uVar3 + 0xe890) < 100) &&
           (lVar28 = *(long *)(*DAT_7105329f98 + 0x30) + (ulong)(ushort)(uVar3 + 0xe890) * 0x50,
           *(short *)(lVar28 + 0x88cc8) != -1)) {
          puVar22 = (undefined2 *)(lVar28 + 0x88cc0);
        }
      }
      lVar28 = (long)(short)puVar22[4];
      uVar8 = *(uint *)(lVar33 + 0x268);
      lVar34 = *(long *)(*(long *)(DAT_710532f730 + 8) + 0x1d8);
      if (lVar28 == -1 || 1999 < lVar28) {
LAB_7101911e54:
        iVar9 = 1;
      }
      else {
        uVar3 = *(ushort *)(lVar34 + lVar28 * 2 + 0x60);
        uVar11 = (ulong)uVar3;
        uVar29 = (*(long *)(lVar34 + 0x28) - *(long *)(lVar34 + 0x20) >> 6) * -0x3333333333333333;
        if ((uint)uVar29 <= (uint)uVar3) goto LAB_7101911e54;
        puVar22 = (undefined2 *)(*(long *)(lVar34 + 0x20) + uVar11 * 0x140);
        if (uVar29 < uVar11 || uVar29 - uVar11 == 0) {
          puVar22 = &DAT_7105182b08;
        }
        iVar9 = FUN_71025c9ac0(*(float *)(puVar22 + 0x3a),uVar8,*(uint *)(puVar22 + 0x38));
      }
      uVar30 = *(uint *)(lVar33 + 0x270);
      if (uVar30 == uVar8) {
        uVar30 = *(int *)(lVar33 + 0x26c) + uVar8;
      }
      if (lVar28 == -1 || 1999 < lVar28) {
LAB_7101911ec0:
        iVar10 = 1;
      }
      else {
        uVar3 = *(ushort *)(lVar34 + lVar28 * 2 + 0x60);
        uVar11 = (ulong)uVar3;
        uVar29 = (*(long *)(lVar34 + 0x28) - *(long *)(lVar34 + 0x20) >> 6) * -0x3333333333333333;
        if ((uint)uVar29 <= (uint)uVar3) goto LAB_7101911ec0;
        puVar22 = (undefined2 *)(*(long *)(lVar34 + 0x20) + uVar11 * 0x140);
        if (uVar29 < uVar11 || uVar29 - uVar11 == 0) {
          puVar22 = &DAT_7105182b08;
        }
        iVar10 = FUN_71025c9ac0(*(float *)(puVar22 + 0x3a),uVar30,*(uint *)(puVar22 + 0x38));
      }
      iVar1 = 0;
      if (iVar9 != 99) {
        iVar1 = iVar10 - iVar9;
      }
      *(int *)(lVar33 + 0x274) = iVar1;
      FUN_7103776640(&local_88,lVar19,(byte ****)"set_parts_param_03",uVar24,ppppbVar13,param_5,
                     param_6,param_7,param_8);
      if (*(int *)(lVar33 + 0x274) == 0) {
        FUN_7103776910(&local_98,(long)&local_88,(long ****)&DAT_71042f86cb,uVar24,ppppbVar13,
                       param_5,param_6,param_7,param_8);
        plVar23 = local_90;
        lVar19 = *local_90;
        if (lVar19 != 0) {
          *(byte *)(lVar19 + 0x58) = *(byte *)(lVar19 + 0x58) & 0xfe;
        }
        local_98 = &PTR_FUN_710523d9a8;
        local_90 = (long *)0x0;
        if (plVar23 != (long *)0x0) {
          FUN_710392eb40((ulong)plVar23);
        }
        FUN_7103776910(&local_98,(long)&local_88,(long ****)"set_txt_lv_add",uVar24,ppppbVar13,
                       param_5,param_6,param_7,param_8);
        lVar19 = *local_90;
        plVar23 = local_90;
        if (lVar19 != 0) {
          *(byte *)(lVar19 + 0x58) = *(byte *)(lVar19 + 0x58) & 0xfe;
        }
      }
      else {
        FUN_7103776910(&local_98,(long)&local_88,(long ****)&DAT_71042f86cb,uVar24,ppppbVar13,
                       param_5,param_6,param_7,param_8);
        plVar23 = local_90;
        lVar19 = *local_90;
        if (lVar19 != 0) {
          *(byte *)(lVar19 + 0x58) = *(byte *)(lVar19 + 0x58) | 1;
        }
        local_98 = &PTR_FUN_710523d9a8;
        local_90 = (long *)0x0;
        if (plVar23 != (long *)0x0) {
          FUN_710392eb40((ulong)plVar23);
        }
        FUN_7103776910(&local_98,(long)&local_88,(long ****)"set_txt_lv_add",uVar24,ppppbVar13,
                       param_5,param_6,param_7,param_8);
        plVar23 = local_90;
        lVar19 = *local_90;
        if (lVar19 != 0) {
          *(byte *)(lVar19 + 0x58) = *(byte *)(lVar19 + 0x58) | 1;
        }
        local_98 = &PTR_FUN_710523d9a8;
        local_90 = (long *)0x0;
        if (plVar23 != (long *)0x0) {
          FUN_710392eb40((ulong)plVar23);
        }
        FUN_7103776910(&local_98,(long)&local_88,(long ****)&DAT_71042f86cb,uVar24,ppppbVar13,
                       param_5,param_6,param_7,param_8);
        FUN_710377a120((long)&local_98,"mnu_spirits_raise_lv",uVar24,ppppbVar13,param_5,param_6,
                       param_7,param_8);
        plVar23 = local_90;
        local_98 = &PTR_FUN_710523d9a8;
        local_90 = (long *)0x0;
        if (plVar23 != (long *)0x0) {
          FUN_710392eb40((ulong)plVar23);
        }
        FUN_7103776910(&local_98,(long)&local_88,(long ****)"set_txt_lv_add",uVar24,ppppbVar13,
                       param_5,param_6,param_7,param_8);
        FUN_710377a280((long)&local_98,(byte *)"mnu_spirits_raise_exp_add_n",1);
        plVar23 = local_90;
      }
      local_98 = &PTR_FUN_710523d9a8;
      local_90 = (long *)0x0;
      if (plVar23 != (long *)0x0) {
        FUN_710392eb40((ulong)plVar23);
      }
      uVar24 = local_80;
      local_88 = &PTR_FUN_710523d988;
      local_80 = 0;
      if (uVar24 != 0) {
        uVar11 = *(ulong *)(uVar24 + 0x18);
        *(undefined ***)(uVar24 + 0x10) = &PTR_FUN_710523d9a8;
        *(undefined8 *)(uVar24 + 0x18) = 0;
        if (uVar11 != 0) {
          FUN_710392eb40(uVar11);
        }
        FUN_710392eb40(uVar24);
      }
      iVar9 = *(int *)(lVar33 + 0x290) - uVar31;
      *(int *)(lVar33 + 0x290) = iVar9;
      __dest = *(uint **)(lVar33 + 0x2d8);
      puVar21 = *(uint **)(lVar33 + 0x2e0);
      *(float *)(lVar33 + 0x294) = (float)(uint)(*(int *)(lVar33 + 0x288) - iVar9) / 60.0;
    }
    sVar7 = (long)puVar21 - (long)(__dest + 2);
    if (sVar7 != 0) {
      memmove(__dest,__dest + 2,sVar7);
    }
    *(uint **)(lVar33 + 0x2e0) = __dest + ((long)sVar7 >> 3) * 2;
    lVar19 = *(long *)(plVar32[0x49] + 0x80);
  }
  ppppbVar13 = (byte ****)0x0;
  pppplVar14 = (long ****)0x0;
  uVar15 = 0;
  uVar16 = 0;
  uVar12 = 0x1d7a5177e3;
  uVar17 = 0;
  FUN_710175dfc0(1.0,1.0,*(long *)(DAT_71052c5120 + 8),
                 *(uint *)(*(long *)(*(long *)**(undefined8 **)(lVar19 + 8) + 0x600) + 0x48c),
                 0x1d7a5177e3,0,0,0,0,0);
  lVar19 = *(long *)(plVar32[0x49] + 0x80);
  if (*(int *)((long)plVar32 + 0x27c) < 1) {
    pvVar25 = *(void **)(lVar19 + 0x1000);
    __dest_00 = *(void **)(lVar19 + 0xff8);
  }
  else {
    pvVar25 = *(void **)(lVar19 + 0x1000);
    __dest_00 = *(void **)(lVar19 + 0xff8);
    if ((int)((ulong)((long)pvVar25 - (long)__dest_00) >> 2) * -0x55555555 != 1)
    goto LAB_7101912684;
  }
  uVar8 = 0x811c9dc5;
  if (pvVar25 == __dest_00) {
switchD_7101912190_default:
    local_118 = (undefined **)((ulong)local_118 & 0xffffffffffffff00);
    local_120 = 0x811c9dc5;
  }
  else {
    uVar31 = uVar8;
    switch(*(undefined4 *)((long)__dest_00 + 4)) {
    case 0:
      local_120._4_4_ = 0xc;
      uVar30 = 0x65;
      local_110 = CONCAT35(local_110._5_3_,0x735f7078);
      pbVar27 = (byte *)((long)&local_118 + 1);
      do {
        uVar31 = uVar31 * 0x89 ^ uVar30;
        uVar30 = (uint)*pbVar27;
        pbVar27 = pbVar27 + 1;
      } while (uVar30 != 0);
      break;
    case 1:
      local_120._4_4_ = 0xc;
      uVar30 = 0x65;
      local_110 = CONCAT35(local_110._5_3_,0x6d5f7078);
      pbVar27 = (byte *)((long)&local_118 + 1);
      do {
        uVar31 = uVar31 * 0x89 ^ uVar30;
        uVar30 = (uint)*pbVar27;
        pbVar27 = pbVar27 + 1;
      } while (uVar30 != 0);
      break;
    case 2:
      local_120._4_4_ = 0xc;
      uVar30 = 0x65;
      local_110 = CONCAT35(local_110._5_3_,0x6c5f7078);
      pbVar27 = (byte *)((long)&local_118 + 1);
      do {
        uVar31 = uVar31 * 0x89 ^ uVar30;
        uVar30 = (uint)*pbVar27;
        pbVar27 = pbVar27 + 1;
      } while (uVar30 != 0);
      break;
    case 3:
      local_120._4_4_ = 0xd;
      local_110 = CONCAT26(local_110._6_2_,0x6c6c5f7078);
      uVar30 = 0x65;
      pbVar27 = (byte *)((long)&local_118 + 1);
      do {
        uVar31 = uVar31 * 0x89 ^ uVar30;
        uVar30 = (uint)*pbVar27;
        pbVar27 = pbVar27 + 1;
      } while (uVar30 != 0);
      break;
    default:
      goto switchD_7101912190_default;
    }
    local_118 = (undefined **)0x655f746365666665;
    local_120 = CONCAT44(local_120._4_4_,uVar31);
  }
  FUN_7101d91ba0(*(long *)(plVar32[0x47] + 0x80),(long)&local_118,uVar12,ppppbVar13,pppplVar14,
                 uVar15,uVar16,uVar17);
  plVar23 = (long *)(plVar32[0x49] + 0x80);
  pcVar26 = *(char **)(*plVar23 + 0xff8);
  if ((*(char **)(*plVar23 + 0x1000) != pcVar26) && (*pcVar26 == '\0')) {
    uVar3 = *(ushort *)((long)plVar32 + 0x264);
    if (uVar3 >> 4 < 0x177) {
      puVar22 = (undefined2 *)(*(long *)(*DAT_7105329f98 + 0x30) + (ulong)uVar3 * 0x50 + 72000);
    }
    else {
      puVar22 = &DAT_710532a878;
      if (((ushort)(uVar3 + 0xe890) < 100) &&
         (lVar19 = *(long *)(*DAT_7105329f98 + 0x30) + (ulong)(ushort)(uVar3 + 0xe890) * 0x50,
         *(short *)(lVar19 + 0x88cc8) != -1)) {
        puVar22 = (undefined2 *)(lVar19 + 0x88cc0);
      }
    }
    sVar4 = puVar22[4];
    uVar31 = 0;
    if ((sVar4 != -1) && (sVar4 < 2000)) {
      lVar19 = *(long *)(*(long *)(DAT_710532f730 + 8) + 0x1d8);
      uVar3 = *(ushort *)(lVar19 + (long)(int)sVar4 * 2 + 0x60);
      uVar24 = (ulong)uVar3;
      uVar11 = (*(long *)(lVar19 + 0x28) - *(long *)(lVar19 + 0x20) >> 6) * -0x3333333333333333;
      if ((uint)uVar3 < (uint)uVar11) {
        puVar22 = (undefined2 *)(*(long *)(lVar19 + 0x20) + uVar24 * 0x140);
        if (uVar11 < uVar24 || uVar11 - uVar24 == 0) {
          puVar22 = &DAT_7105182b08;
        }
        if (*(char *)(puVar22 + 0x2f) == '\0') {
          if (2 < *(byte *)(puVar22 + 0x36) - 1) goto LAB_7101912444;
          uVar31 = 0x20301 >> (ulong)((*(byte *)(puVar22 + 0x36) - 1 & 3) << 3);
        }
        else {
          uVar31 = 4;
        }
      }
      else {
LAB_7101912444:
        uVar31 = 0;
      }
    }
    if ((uVar31 & 0xff) == (uint)(byte)pcVar26[8]) {
      switch(uVar31 & 0xff) {
      case 0:
        local_120._4_4_ = 0x14;
        local_118 = (undefined **)0x615f746365666665;
        local_110 = 0x73756e6f625f7274;
        local_108 = 0x6e5f;
        uStack_106 = 0x6e6f;
        uVar31 = 0x65;
        local_104 = 0;
        pbVar27 = (byte *)((long)&local_118 + 1);
        do {
          uVar8 = uVar8 * 0x89 ^ uVar31;
          uVar31 = (uint)*pbVar27;
          pbVar27 = pbVar27 + 1;
        } while (uVar31 != 0);
        break;
      case 1:
        local_120._4_4_ = 0x18;
        local_118 = (undefined **)0x615f746365666665;
        local_110 = 0x73756e6f625f7274;
        local_108 = 0x6f5f;
        uStack_106 = 0x6666;
        local_104 = 0x65;
        uStack_103 = 0x6e;
        local_102 = 0x73;
        uStack_101 = 0x65;
        uVar31 = 0x65;
        local_100 = 0;
        pbVar27 = (byte *)((long)&local_118 + 1);
        do {
          uVar8 = uVar8 * 0x89 ^ uVar31;
          uVar31 = (uint)*pbVar27;
          pbVar27 = pbVar27 + 1;
        } while (uVar31 != 0);
        break;
      case 2:
        local_120._4_4_ = 0x18;
        local_118 = (undefined **)0x615f746365666665;
        local_110 = 0x73756e6f625f7274;
        local_108 = 0x645f;
        uStack_106 = 0x6665;
        local_104 = 0x65;
        uStack_103 = 0x6e;
        local_102 = 0x73;
        uStack_101 = 0x65;
        uVar31 = 0x65;
        local_100 = 0;
        pbVar27 = (byte *)((long)&local_118 + 1);
        do {
          uVar8 = uVar8 * 0x89 ^ uVar31;
          uVar31 = (uint)*pbVar27;
          pbVar27 = pbVar27 + 1;
        } while (uVar31 != 0);
        break;
      case 3:
        local_120._4_4_ = 0x16;
        local_118 = (undefined **)0x615f746365666665;
        local_110 = 0x73756e6f625f7274;
        local_108 = 0x745f;
        local_102 = 0;
        uStack_106 = 0x7268;
        local_104 = 0x6f;
        uStack_103 = 0x77;
        uVar31 = 0x65;
        pbVar27 = (byte *)((long)&local_118 + 1);
        do {
          uVar8 = uVar8 * 0x89 ^ uVar31;
          uVar31 = (uint)*pbVar27;
          pbVar27 = pbVar27 + 1;
        } while (uVar31 != 0);
        break;
      default:
        local_118 = (undefined **)((ulong)local_118 & 0xffffffffffffff00);
        local_120._4_4_ = 0;
      }
      local_120 = CONCAT44(local_120._4_4_,uVar8);
      FUN_7101d91ba0(*(long *)(plVar32[0x47] + 0x80),(long)&local_118,uVar12,ppppbVar13,pppplVar14,
                     uVar15,uVar16,uVar17);
      plVar23 = (long *)(plVar32[0x49] + 0x80);
    }
  }
  *(undefined4 *)((long)plVar32 + 0x27c) = 5;
  lVar19 = *plVar23;
  pvVar25 = *(void **)(lVar19 + 0x1000);
  __dest_00 = *(void **)(lVar19 + 0xff8);
LAB_7101912684:
  if (pvVar25 != __dest_00) {
    sVar7 = (long)pvVar25 - ((long)__dest_00 + 0xc);
    if (sVar7 != 0) {
      memmove(__dest_00,(void *)((long)__dest_00 + 0xc),sVar7);
    }
    *(void **)(lVar19 + 0x1000) = (void *)((long)__dest_00 + ((long)sVar7 >> 2) * 4);
  }
  return;
}

