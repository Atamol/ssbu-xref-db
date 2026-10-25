// addr:      7101e103e0
// offset:    0x1e103e0
// name:      FUN_7101e103e0
// mangled:   
// signature: undefined __cdecl FUN_7101e103e0(long param_1, undefined8 param_2, undefined * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_7101e103e0(long param_1,undefined8 param_2,undefined **param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  int iVar1;
  int iVar2;
  short sVar3;
  char cVar4;
  bool bVar5;
  long *plVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 uVar9;
  ulong uVar10;
  int *piVar11;
  code *pcVar12;
  undefined4 uVar13;
  byte *pbVar14;
  uint uVar15;
  uint uVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  undefined4 local_328 [2];
  undefined **local_320;
  long local_318;
  undefined8 local_310;
  undefined1 local_308;
  undefined8 local_300;
  undefined8 uStack_2f8;
  undefined8 local_2f0;
  undefined4 local_2e8 [2];
  undefined **local_2e0;
  long local_2d8;
  undefined8 local_2d0;
  undefined1 local_2c8;
  undefined8 local_2c0;
  undefined8 uStack_2b8;
  undefined8 local_2b0;
  undefined4 local_2a8 [2];
  undefined **local_2a0;
  long local_298;
  undefined8 local_290;
  undefined1 local_288;
  undefined8 local_280;
  undefined8 uStack_278;
  undefined8 local_270;
  undefined4 local_268 [2];
  undefined **local_260;
  long local_258;
  undefined8 local_250;
  undefined1 local_248;
  undefined8 local_240;
  undefined8 uStack_238;
  undefined8 local_230;
  undefined4 local_228 [2];
  undefined **local_220;
  long local_218;
  undefined8 local_210;
  undefined1 local_208;
  undefined8 local_200;
  undefined8 uStack_1f8;
  undefined8 local_1f0;
  undefined4 local_1e8 [2];
  undefined **local_1e0;
  long local_1d8;
  undefined8 local_1d0;
  undefined1 local_1c8;
  undefined8 local_1c0;
  undefined8 uStack_1b8;
  undefined8 local_1b0;
  undefined4 local_1a8 [2];
  undefined **local_1a0;
  long local_198;
  undefined8 local_190;
  undefined1 local_188;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined8 local_170;
  undefined4 local_168 [2];
  undefined **local_160;
  long local_158;
  undefined8 local_150;
  undefined1 local_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 local_128;
  undefined1 local_120;
  byte bStack_11f;
  undefined2 uStack_11e;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  undefined2 uStack_114;
  undefined2 uStack_112;
  undefined8 local_110;
  undefined4 local_108;
  undefined2 local_104;
  undefined8 local_102;
  undefined4 local_fa;
  undefined8 local_f6;
  undefined1 local_ee;
  undefined4 local_e4;
  undefined1 local_e0;
  undefined4 local_dc;
  undefined1 local_d8;
  undefined **local_d0;
  undefined8 local_c8;
  undefined2 local_c0;
  undefined1 local_be;
  undefined2 local_bd;
  undefined1 local_bb;
  undefined1 local_ba;
  undefined1 local_b9;
  undefined1 local_b8;
  undefined1 local_b7;
  undefined1 local_b6;
  undefined **local_b0;
  ulong local_a8;
  undefined4 local_a0 [4];
  long local_90;
  int local_88;
  undefined **local_60;
  ulong local_58;
  
  if (*(int *)(param_1 + 0x144) == 0) {
    *(undefined4 *)(param_1 + 0x198) = 0;
    uVar16 = 0x811c9dc5;
    (**(code **)(**(long **)(param_1 + 0x180) + 0x60))(*(long **)(param_1 + 0x180),0);
    (**(code **)(**(long **)(param_1 + 0x180) + 0x70))(*(long **)(param_1 + 0x180),0);
    (**(code **)(**(long **)(param_1 + 0x188) + 0x70))(*(long **)(param_1 + 0x188),1);
    (**(code **)(**(long **)(param_1 + 0x188) + 0x60))(*(long **)(param_1 + 0x188),1);
    (**(code **)(**(long **)(param_1 + 400) + 0x70))(*(long **)(param_1 + 400),0);
    local_120 = 0x6d;
    bStack_11f = 0x6e;
    uStack_11e = 0x5f75;
    uStack_11c = 0x72697073;
    uStack_118 = 0x5f737469;
    uStack_114 = 0x6863;
    uStack_112 = 0x6c61;
    local_110 = 0x616f6265676e656c;
    local_108 = 0x6f5f6472;
    local_104 = 0x6772;
    local_102 = 0x65685f657a696e61;
    local_fa = 0x735f706c;
    local_f6 = 0x726574726f707075;
    uVar15 = 0x6d;
    local_ee = 0;
    pbVar14 = &bStack_11f;
    do {
      uVar16 = uVar16 * 0x89 ^ uVar15;
      uVar15 = (uint)*pbVar14;
      pbVar14 = pbVar14 + 1;
    } while (uVar15 != 0);
    local_128 = (undefined **)CONCAT44(0x32,uVar16);
    FUN_7101af53d0(*(long *)(*(long *)(*(long *)(DAT_710532f840 + 8) + 0xb8) + 0x80),
                   (uint *)&local_128,param_3,param_4,param_5,param_6,param_7,param_8);
    uVar16 = *(uint *)(*(long *)(param_1 + 0x188) + 0x254);
    *(uint *)(param_1 + 0x274) = uVar16;
    if (-1 < (int)uVar16) {
      FUN_7103776640(&local_128,param_1 + 0x160,(byte ****)"set_parts_slot",param_3,param_4,param_5,
                     param_6,param_7,param_8);
      uVar10 = (ulong)uVar16;
      FUN_7103776640(&local_d0,(long)&local_128,(byte ****)"set_parts_btn_spter_%02d",uVar10,param_4
                     ,param_5,param_6,param_7,param_8);
      FUN_7103776640(&local_60,(long)&local_d0,(byte ****)"set_parts_csr_01",uVar10,param_4,param_5,
                     param_6,param_7,param_8);
      uVar8 = local_58;
      FUN_7103778300(0x3f800000,local_58,0x7104412fd0);
      local_60 = &PTR_FUN_710523d988;
      local_58 = 0;
      if (uVar8 != 0) {
        uVar7 = *(ulong *)(uVar8 + 0x18);
        *(undefined ***)(uVar8 + 0x10) = &PTR_FUN_710523d9a8;
        *(undefined8 *)(uVar8 + 0x18) = 0;
        if (uVar7 != 0) {
          FUN_710392eb40(uVar7);
        }
        FUN_710392eb40(uVar8);
      }
      FUN_7103776640(&local_60,(long)&local_d0,(byte ****)"set_parts_csr_02",uVar10,param_4,param_5,
                     param_6,param_7,param_8);
      uVar8 = local_58;
      FUN_7103778300(0x3f800000,local_58,0x7104412fd0);
      local_60 = &PTR_FUN_710523d988;
      local_58 = 0;
      if (uVar8 != 0) {
        uVar7 = *(ulong *)(uVar8 + 0x18);
        *(undefined ***)(uVar8 + 0x10) = &PTR_FUN_710523d9a8;
        *(undefined8 *)(uVar8 + 0x18) = 0;
        if (uVar7 != 0) {
          FUN_710392eb40(uVar7);
        }
        FUN_710392eb40(uVar8);
      }
      FUN_7103776640(&local_60,(long)&local_d0,(byte ****)"set_parts_csr_03",uVar10,param_4,param_5,
                     param_6,param_7,param_8);
      uVar8 = local_58;
      FUN_7103778300(0x3f800000,local_58,0x7104412fd0);
      local_60 = &PTR_FUN_710523d988;
      local_58 = 0;
      if (uVar8 != 0) {
        uVar10 = *(ulong *)(uVar8 + 0x18);
        *(undefined ***)(uVar8 + 0x10) = &PTR_FUN_710523d9a8;
        *(undefined8 *)(uVar8 + 0x18) = 0;
        if (uVar10 != 0) {
          FUN_710392eb40(uVar10);
        }
        FUN_710392eb40(uVar8);
      }
      uVar8 = local_c8;
      local_d0 = &PTR_FUN_710523d988;
      local_c8 = 0;
      if (uVar8 != 0) {
        uVar10 = *(ulong *)(uVar8 + 0x18);
        *(undefined ***)(uVar8 + 0x10) = &PTR_FUN_710523d9a8;
        *(undefined8 *)(uVar8 + 0x18) = 0;
        if (uVar10 != 0) {
          FUN_710392eb40(uVar10);
        }
        FUN_710392eb40(uVar8);
      }
      uVar8 = CONCAT44(uStack_11c,CONCAT22(uStack_11e,CONCAT11(bStack_11f,local_120)));
      local_128 = &PTR_FUN_710523d988;
      local_120 = 0;
      bStack_11f = 0;
      uStack_11e = 0;
      uStack_11c = 0;
      if (uVar8 != 0) {
        uVar10 = *(ulong *)(uVar8 + 0x18);
        *(undefined ***)(uVar8 + 0x10) = &PTR_FUN_710523d9a8;
        *(undefined8 *)(uVar8 + 0x18) = 0;
        if (uVar10 != 0) {
          FUN_710392eb40(uVar10);
        }
        FUN_710392eb40(uVar8);
      }
    }
    if ((((*(char *)(param_1 + 0x264) != '\0') &&
         (*(char *)(*(long *)(DAT_710532f8d0 + 8) + 0x191) == '\0')) &&
        (uVar8 = FUN_7103313f20(*(long *)(DAT_710532f8d0 + 8),0x1bf69629fc,(long ****)&DAT_00000004,
                                param_4,param_5,param_6,param_7,param_8), (uVar8 & 1) != 0)) &&
       (((FUN_71024076d0(local_a0,0x1bf69629fc), local_90 != 0 && (DAT_7106dd53a8 == '\x01')) &&
        (local_88 == DAT_7106dd53ac)))) {
      piVar11 = (int *)(local_90 + 0x38);
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar11,0x10);
        if (bVar5) {
          *piVar11 = *piVar11 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    *(undefined2 *)(param_1 + 0x263) = 0;
    return;
  }
  if (*(char *)(param_1 + 0x263) == '\0') {
    FUN_7101e134d0(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
    lVar17 = *(long *)(*(long *)(DAT_710532f840 + 8) + 0xb8);
    uVar16 = *(uint *)(*(long *)(param_1 + 0x188) + 0x254);
    lVar18 = *(long *)(lVar17 + 0x80);
    if (*(int *)(lVar18 + 0x2270) == 0) {
LAB_7101e10bec:
      FUN_7101e13790(param_1);
      *(undefined1 *)(param_1 + 0x260) = 0;
      goto LAB_7101e10d14;
    }
    iVar2 = -1;
    if (*(int *)(lVar18 + 0x11b0) - 1U < 5) {
      iVar2 = 1;
    }
    lVar19 = *(long *)**(undefined8 **)(param_1 + 0x150);
    iVar1 = 2;
    if (*(int *)(lVar18 + 0x11b0) < 6) {
      iVar1 = iVar2;
    }
    if ((*(int *)((long)*(long **)(lVar18 + 0x2268) + 0x254) == iVar1) &&
       (uVar8 = (**(code **)(**(long **)(lVar18 + 0x2268) + 0x78))(), (uVar8 & 1) != 0)) {
LAB_7101e109ec:
      uVar15 = *(uint *)(param_1 + 0x13c);
      if (0x12 < uVar15) goto LAB_7101e11864;
      uVar13 = 5;
LAB_7101e10cc0:
      *(undefined4 *)(param_1 + (long)(int)uVar15 * 4 + 0xf0) = uVar13;
      plVar6 = *(long **)(param_1 + 0x180);
      if (((plVar6 != (long *)0x0) && (*(long *)(param_1 + 0x188) != 0)) &&
         (*(long *)(param_1 + 400) != 0)) {
        pcVar12 = *(code **)(*plVar6 + 0x70);
        uVar9 = 0;
LAB_7101e10ce8:
        (*pcVar12)(plVar6,uVar9);
        (**(code **)(**(long **)(param_1 + 0x188) + 0x70))(*(long **)(param_1 + 0x188),0);
        plVar6 = *(long **)(param_1 + 400);
        pcVar12 = *(code **)(*plVar6 + 0x70);
        uVar9 = 0;
LAB_7101e10d10:
        (*pcVar12)(plVar6,uVar9);
      }
    }
    else {
      lVar18 = *(long *)(lVar19 + 0x600);
      if (*(char *)(lVar18 + 0x4aa) != '\0') {
        if (((*(byte *)(lVar18 + 0x1b8) >> 1 & 1) != 0) ||
           ((*(byte *)(lVar18 + 0x1bc) >> 1 & 1) != 0)) {
          if (*(char *)(*(long *)(DAT_710532f8d0 + 8) + 0x191) == '\0') {
            param_3 = (undefined **)&DAT_00000004;
            uVar8 = FUN_7103313f20(*(long *)(DAT_710532f8d0 + 8),0x10c0b65170,
                                   (long ****)&DAT_00000004,param_4,param_5,param_6,param_7,param_8)
            ;
            if ((uVar8 & 1) == 0) goto LAB_7101e10b44;
            FUN_71024076d0(local_168,0x10c0b65170);
            if (((local_158 != 0) && (DAT_7106dd53a8 == '\x01')) &&
               ((int)local_150 == DAT_7106dd53ac)) {
              piVar11 = (int *)(local_158 + 0x38);
              do {
                cVar4 = '\x01';
                bVar5 = (bool)ExclusiveMonitorPass(piVar11,0x10);
                if (bVar5) {
                  *piVar11 = *piVar11 + -1;
                  cVar4 = ExclusiveMonitorsStatus();
                }
              } while (cVar4 != '\0');
            }
          }
          else {
LAB_7101e10b44:
            local_150 = 0x87650000000000;
            local_140 = 0xffffffffffffffff;
            uStack_138 = 0;
            local_168[0] = 0;
            local_130 = 0;
          }
          local_160 = &PTR_FUN_7104f73d50;
          local_158 = 0;
          local_148 = 0;
          if (0x12 < *(uint *)(param_1 + 0x13c)) goto LAB_7101e11864;
          *(undefined4 *)(param_1 + (long)(int)*(uint *)(param_1 + 0x13c) * 4 + 0xf0) = 2;
          if (((*(long *)(param_1 + 0x180) == 0) || (*(long *)(param_1 + 0x188) == 0)) ||
             (*(long *)(param_1 + 400) == 0)) goto LAB_7101e10d14;
          param_3 = (undefined **)0x0;
          FUN_7103771a80((long *)(param_1 + 0x180),1,0);
          plVar6 = *(long **)(param_1 + 0x180);
          pcVar12 = *(code **)(*plVar6 + 0x70);
          uVar9 = 1;
          goto LAB_7101e10ce8;
        }
        if ((*(byte *)(lVar18 + 0x1c0) >> 1 & 1) != 0) {
          if (uVar16 != *(uint *)(param_1 + 0x274)) goto LAB_7101e10d14;
          if (*(char *)(*(long *)(DAT_710532f8d0 + 8) + 0x191) == '\0') {
            param_3 = (undefined **)&DAT_00000004;
            uVar8 = FUN_7103313f20(*(long *)(DAT_710532f8d0 + 8),0x10c0b65170,
                                   (long ****)&DAT_00000004,param_4,param_5,param_6,param_7,param_8)
            ;
            if ((uVar8 & 1) == 0) goto LAB_7101e11240;
            FUN_71024076d0(local_1a8,0x10c0b65170);
            if (((local_198 != 0) && (DAT_7106dd53a8 == '\x01')) &&
               ((int)local_190 == DAT_7106dd53ac)) {
              piVar11 = (int *)(local_198 + 0x38);
              do {
                cVar4 = '\x01';
                bVar5 = (bool)ExclusiveMonitorPass(piVar11,0x10);
                if (bVar5) {
                  *piVar11 = *piVar11 + -1;
                  cVar4 = ExclusiveMonitorsStatus();
                }
              } while (cVar4 != '\0');
            }
          }
          else {
LAB_7101e11240:
            local_190 = 0x87650000000000;
            local_180 = 0xffffffffffffffff;
            uStack_178 = 0;
            local_1a8[0] = 0;
            local_170 = 0;
          }
          local_1a0 = &PTR_FUN_7104f73d50;
          local_198 = 0;
          local_188 = 0;
          goto LAB_7101e109ec;
        }
        if ((*(byte *)(lVar18 + 0x1c4) >> 1 & 1) == 0) goto LAB_7101e10a70;
        if (uVar16 != *(uint *)(param_1 + 0x274)) goto LAB_7101e10d14;
        if (*(char *)(*(long *)(DAT_710532f8d0 + 8) + 0x191) == '\0') {
          param_3 = (undefined **)&DAT_00000004;
          uVar8 = FUN_7103313f20(*(long *)(DAT_710532f8d0 + 8),0x10c0b65170,(long ****)&DAT_00000004
                                 ,param_4,param_5,param_6,param_7,param_8);
          if ((uVar8 & 1) == 0) goto LAB_7101e112c4;
          FUN_71024076d0(local_1e8,0x10c0b65170);
          if (((local_1d8 != 0) && (DAT_7106dd53a8 == '\x01')) && ((int)local_1d0 == DAT_7106dd53ac)
             ) {
            piVar11 = (int *)(local_1d8 + 0x38);
            do {
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(piVar11,0x10);
              if (bVar5) {
                *piVar11 = *piVar11 + -1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
          }
        }
        else {
LAB_7101e112c4:
          local_1d0 = 0x87650000000000;
          local_1c0 = 0xffffffffffffffff;
          uStack_1b8 = 0;
          local_1e8[0] = 0;
          local_1b0 = 0;
        }
        local_1e0 = &PTR_FUN_7104f73d50;
        local_1d8 = 0;
        local_1c8 = 0;
        if (0x12 < *(uint *)(param_1 + 0x13c)) goto LAB_7101e11864;
        *(undefined4 *)(param_1 + (long)(int)*(uint *)(param_1 + 0x13c) * 4 + 0xf0) = 4;
        plVar6 = *(long **)(param_1 + 0x180);
        if (((plVar6 == (long *)0x0) || (*(long *)(param_1 + 0x188) == 0)) ||
           (*(long *)(param_1 + 400) == 0)) goto LAB_7101e10d14;
        (**(code **)(*plVar6 + 0x70))(plVar6,0);
        (**(code **)(**(long **)(param_1 + 0x188) + 0x70))(*(long **)(param_1 + 0x188),0);
        param_3 = (undefined **)0x0;
        FUN_7103771a80((long *)(param_1 + 400),3,0);
        plVar6 = *(long **)(param_1 + 400);
        pcVar12 = *(code **)(*plVar6 + 0x70);
        uVar9 = 1;
        goto LAB_7101e10d10;
      }
LAB_7101e10a70:
      if (*(int *)(*(long *)(lVar17 + 0x80) + 0x2270) - 1U < 2) {
        lVar18 = *(long *)(DAT_710532f8d0 + 8);
        if ((ulong)(*(long *)(lVar18 + 0x48) - *(long *)(lVar18 + 0x40) >> 3) < 3) {
          uVar8 = 0;
          if (*(char *)(lVar18 + 0x191) == '\0') goto LAB_7101e10c08;
LAB_7101e10c78:
          local_210 = 0x87650000000000;
          local_200 = 0xffffffffffffffff;
          uStack_1f8 = 0;
          local_228[0] = 0;
          local_1f0 = 0;
        }
        else {
          uVar8 = *(ulong *)(*(long *)(lVar18 + 0x40) + 0x10);
          if (*(char *)(lVar18 + 0x191) != '\0') goto LAB_7101e10c78;
LAB_7101e10c08:
          param_3 = (undefined **)&DAT_00000004;
          uVar10 = FUN_7103313f20(lVar18,uVar8,(long ****)&DAT_00000004,param_4,param_5,param_6,
                                  param_7,param_8);
          if ((uVar10 & 1) == 0) goto LAB_7101e10c78;
          FUN_71024076d0(local_228,uVar8);
          if (((local_218 != 0) && (DAT_7106dd53a8 == '\x01')) && ((int)local_210 == DAT_7106dd53ac)
             ) {
            piVar11 = (int *)(local_218 + 0x38);
            do {
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(piVar11,0x10);
              if (bVar5) {
                *piVar11 = *piVar11 + -1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
          }
        }
        local_220 = &PTR_FUN_7104f73d50;
        local_218 = 0;
        local_208 = 0;
        uVar15 = *(uint *)(param_1 + 0x13c);
        if (0x12 < uVar15) {
LAB_7101e11864:
                    /* WARNING: Subroutine does not return */
          abort();
        }
        uVar13 = 7;
        goto LAB_7101e10cc0;
      }
      if (*(char *)(lVar18 + 0x4aa) == '\0') {
LAB_7101e10be0:
        if (*(char *)(*(long *)(param_1 + 0x188) + 0x280) != '\0') goto LAB_7101e10bec;
        iVar2 = *(int *)(*(long *)(param_1 + 0x188) + 0x25c);
        if (iVar2 == 2) {
          lVar18 = *(long *)(DAT_710532f8d0 + 8);
          if ((ulong)(*(long *)(lVar18 + 0x48) - *(long *)(lVar18 + 0x40) >> 3) < 3) {
            uVar8 = 0;
            if (*(char *)(lVar18 + 0x191) == '\0') goto LAB_7101e1168c;
LAB_7101e116fc:
            local_310 = 0x87650000000000;
            local_300 = 0xffffffffffffffff;
            uStack_2f8 = 0;
            local_328[0] = 0;
            local_2f0 = 0;
          }
          else {
            uVar8 = *(ulong *)(*(long *)(lVar18 + 0x40) + 0x10);
            if (*(char *)(lVar18 + 0x191) != '\0') goto LAB_7101e116fc;
LAB_7101e1168c:
            param_3 = (undefined **)&DAT_00000004;
            uVar10 = FUN_7103313f20(lVar18,uVar8,(long ****)&DAT_00000004,param_4,param_5,param_6,
                                    param_7,param_8);
            if ((uVar10 & 1) == 0) goto LAB_7101e116fc;
            FUN_71024076d0(local_328,uVar8);
            if (((local_318 != 0) && (DAT_7106dd53a8 == '\x01')) &&
               ((int)local_310 == DAT_7106dd53ac)) {
              piVar11 = (int *)(local_318 + 0x38);
              do {
                cVar4 = '\x01';
                bVar5 = (bool)ExclusiveMonitorPass(piVar11,0x10);
                if (bVar5) {
                  *piVar11 = *piVar11 + -1;
                  cVar4 = ExclusiveMonitorsStatus();
                }
              } while (cVar4 != '\0');
            }
          }
          local_320 = &PTR_FUN_7104f73d50;
          local_318 = 0;
          local_308 = 0;
          if ((*(char *)(param_1 + 0x1b6) != -1) || (*(char *)(param_1 + 0x1b7) != -1))
          goto LAB_7101e10d14;
          *(undefined1 *)(param_1 + 0x1ba) = 0;
          *(undefined1 *)(param_1 + 0x1b7) = 2;
          uVar13 = 4;
        }
        else if (iVar2 == 1) {
          lVar18 = *(long *)(DAT_710532f8d0 + 8);
          if ((ulong)(*(long *)(lVar18 + 0x48) - *(long *)(lVar18 + 0x40) >> 3) < 3) {
            uVar8 = 0;
            if (*(char *)(lVar18 + 0x191) == '\0') goto LAB_7101e11768;
LAB_7101e117d8:
            local_2d0 = 0x87650000000000;
            local_2c0 = 0xffffffffffffffff;
            uStack_2b8 = 0;
            local_2e8[0] = 0;
            local_2b0 = 0;
          }
          else {
            uVar8 = *(ulong *)(*(long *)(lVar18 + 0x40) + 0x10);
            if (*(char *)(lVar18 + 0x191) != '\0') goto LAB_7101e117d8;
LAB_7101e11768:
            param_3 = (undefined **)&DAT_00000004;
            uVar10 = FUN_7103313f20(lVar18,uVar8,(long ****)&DAT_00000004,param_4,param_5,param_6,
                                    param_7,param_8);
            if ((uVar10 & 1) == 0) goto LAB_7101e117d8;
            FUN_71024076d0(local_2e8,uVar8);
            if (((local_2d8 != 0) && (DAT_7106dd53a8 == '\x01')) &&
               ((int)local_2d0 == DAT_7106dd53ac)) {
              piVar11 = (int *)(local_2d8 + 0x38);
              do {
                cVar4 = '\x01';
                bVar5 = (bool)ExclusiveMonitorPass(piVar11,0x10);
                if (bVar5) {
                  *piVar11 = *piVar11 + -1;
                  cVar4 = ExclusiveMonitorsStatus();
                }
              } while (cVar4 != '\0');
            }
          }
          local_2e0 = &PTR_FUN_7104f73d50;
          local_2d8 = 0;
          local_2c8 = 0;
          if ((*(char *)(param_1 + 0x1b6) != -1) || (*(char *)(param_1 + 0x1b7) != -1))
          goto LAB_7101e10d14;
          *(undefined1 *)(param_1 + 0x1ba) = 0;
          *(undefined1 *)(param_1 + 0x1b7) = 1;
          uVar13 = 3;
        }
        else {
          if (iVar2 != 0) goto LAB_7101e10d14;
          lVar18 = *(long *)(DAT_710532f8d0 + 8);
          if ((ulong)(*(long *)(lVar18 + 0x48) - *(long *)(lVar18 + 0x40) >> 3) < 3) {
            uVar8 = 0;
            if (*(char *)(lVar18 + 0x191) == '\0') goto LAB_7101e115b4;
LAB_7101e11624:
            local_290 = 0x87650000000000;
            local_280 = 0xffffffffffffffff;
            uStack_278 = 0;
            local_2a8[0] = 0;
            local_270 = 0;
          }
          else {
            uVar8 = *(ulong *)(*(long *)(lVar18 + 0x40) + 0x10);
            if (*(char *)(lVar18 + 0x191) != '\0') goto LAB_7101e11624;
LAB_7101e115b4:
            param_3 = (undefined **)&DAT_00000004;
            uVar10 = FUN_7103313f20(lVar18,uVar8,(long ****)&DAT_00000004,param_4,param_5,param_6,
                                    param_7,param_8);
            if ((uVar10 & 1) == 0) goto LAB_7101e11624;
            FUN_71024076d0(local_2a8,uVar8);
            if (((local_298 != 0) && (DAT_7106dd53a8 == '\x01')) &&
               ((int)local_290 == DAT_7106dd53ac)) {
              piVar11 = (int *)(local_298 + 0x38);
              do {
                cVar4 = '\x01';
                bVar5 = (bool)ExclusiveMonitorPass(piVar11,0x10);
                if (bVar5) {
                  *piVar11 = *piVar11 + -1;
                  cVar4 = ExclusiveMonitorsStatus();
                }
              } while (cVar4 != '\0');
            }
          }
          local_2a0 = &PTR_FUN_7104f73d50;
          local_298 = 0;
          local_288 = 0;
          if ((*(char *)(param_1 + 0x1b6) != -1) || (*(char *)(param_1 + 0x1b7) != -1))
          goto LAB_7101e10d14;
          uVar13 = 2;
          *(undefined1 *)(param_1 + 0x1ba) = 0;
          *(undefined1 *)(param_1 + 0x1b7) = 0;
        }
        *(undefined4 *)(param_1 + 0x198) = uVar13;
        if (*(int *)(param_1 + 0x13c) < 0x12) {
          uVar15 = *(int *)(param_1 + 0x13c) + 1;
          *(uint *)(param_1 + 0x13c) = uVar15;
          if (0x12 < uVar15) goto LAB_7101e11864;
          *(undefined4 *)(param_1 + (long)(int)uVar15 * 4 + 0xf0) = 6;
        }
      }
      else if ((*(byte *)(lVar18 + 0x1b4) >> 1 & 1) == 0) {
        if ((*(byte *)(lVar18 + 0x1cc) >> 1 & 1) == 0) goto LAB_7101e10be0;
        FUN_7103776640(&local_128,param_1 + 0x160,(byte ****)"set_parts_det_key_04",param_3,param_4,
                       param_5,param_6,param_7,param_8);
        uVar8 = CONCAT44(uStack_11c,CONCAT22(uStack_11e,CONCAT11(bStack_11f,local_120)));
        FUN_7103778300(0x3f800000,uVar8,0x71042a357e);
        local_128 = &PTR_FUN_710523d988;
        local_120 = 0;
        bStack_11f = 0;
        uStack_11e = 0;
        uStack_11c = 0;
        if (uVar8 != 0) {
          uVar10 = *(ulong *)(uVar8 + 0x18);
          *(undefined ***)(uVar8 + 0x10) = &PTR_FUN_710523d9a8;
          *(undefined8 *)(uVar8 + 0x18) = 0;
          if (uVar10 != 0) {
            FUN_710392eb40(uVar10);
          }
          FUN_710392eb40(uVar8);
        }
        FUN_7101e16790(param_1,0,param_3,param_4,param_5,param_6,param_7,param_8);
      }
      else {
        uVar15 = *(uint *)(*(long *)(param_1 + 0x188) + 0x254);
        if (uVar15 == 2) {
          sVar3 = *(short *)(param_1 + 0x1ae);
        }
        else if (uVar15 == 1) {
          sVar3 = *(short *)(param_1 + 0x1ac);
        }
        else {
          if (uVar15 != 0) goto LAB_7101e10d14;
          sVar3 = *(short *)(param_1 + 0x1aa);
        }
        if (sVar3 != -1) {
          lVar18 = *(long *)(DAT_710532f8d0 + 8);
          if ((ulong)(*(long *)(lVar18 + 0x48) - *(long *)(lVar18 + 0x40) >> 3) < 3) {
            uVar8 = 0;
            if (*(char *)(lVar18 + 0x191) == '\0') goto LAB_7101e11380;
LAB_7101e113f0:
            local_250 = 0x87650000000000;
            local_240 = 0xffffffffffffffff;
            uStack_238 = 0;
            local_268[0] = 0;
            local_230 = 0;
          }
          else {
            uVar8 = *(ulong *)(*(long *)(lVar18 + 0x40) + 0x10);
            if (*(char *)(lVar18 + 0x191) != '\0') goto LAB_7101e113f0;
LAB_7101e11380:
            param_3 = (undefined **)&DAT_00000004;
            uVar10 = FUN_7103313f20(lVar18,uVar8,(long ****)&DAT_00000004,param_4,param_5,param_6,
                                    param_7,param_8);
            if ((uVar10 & 1) == 0) goto LAB_7101e113f0;
            FUN_71024076d0(local_268,uVar8);
            if (((local_258 != 0) && (DAT_7106dd53a8 == '\x01')) &&
               ((int)local_250 == DAT_7106dd53ac)) {
              piVar11 = (int *)(local_258 + 0x38);
              do {
                cVar4 = '\x01';
                bVar5 = (bool)ExclusiveMonitorPass(piVar11,0x10);
                if (bVar5) {
                  *piVar11 = *piVar11 + -1;
                  cVar4 = ExclusiveMonitorsStatus();
                }
              } while (cVar4 != '\0');
            }
          }
          local_260 = &PTR_FUN_7104f73d50;
          local_258 = 0;
          local_248 = 0;
          FUN_7103776640(&local_128,param_1 + 0x160,(byte ****)"set_parts_det_key_01",param_3,
                         param_4,param_5,param_6,param_7,param_8);
          uVar8 = CONCAT44(uStack_11c,CONCAT22(uStack_11e,CONCAT11(bStack_11f,local_120)));
          FUN_7103778300(0x3f800000,uVar8,0x71042a357e);
          local_128 = &PTR_FUN_710523d988;
          local_120 = 0;
          bStack_11f = 0;
          uStack_11e = 0;
          uStack_11c = 0;
          if (uVar8 != 0) {
            uVar10 = *(ulong *)(uVar8 + 0x18);
            *(undefined ***)(uVar8 + 0x10) = &PTR_FUN_710523d9a8;
            *(undefined8 *)(uVar8 + 0x18) = 0;
            if (uVar10 != 0) {
              FUN_710392eb40(uVar10);
            }
            FUN_710392eb40(uVar8);
          }
          FUN_7103776640(&local_128,param_1 + 0x160,(byte ****)"set_parts_slot",param_3,param_4,
                         param_5,param_6,param_7,param_8);
          param_3 = (undefined **)(ulong)uVar15;
          FUN_7103776640(&local_d0,(long)&local_128,(byte ****)"set_parts_btn_spter_%02d",param_3,
                         param_4,param_5,param_6,param_7,param_8);
          uVar8 = local_c8;
          FUN_7103778300(0x3f800000,local_c8,0x710436c90a);
          *(undefined1 *)(param_1 + 0x263) = 1;
          **(uint **)(DAT_710593b988 + 8) = **(uint **)(DAT_710593b988 + 8) | 2;
          local_d0 = &PTR_FUN_710523d988;
          local_c8 = 0;
          if (uVar8 != 0) {
            uVar10 = *(ulong *)(uVar8 + 0x18);
            *(undefined ***)(uVar8 + 0x10) = &PTR_FUN_710523d9a8;
            *(undefined8 *)(uVar8 + 0x18) = 0;
            if (uVar10 != 0) {
              FUN_710392eb40(uVar10);
            }
            FUN_710392eb40(uVar8);
          }
          uVar8 = CONCAT44(uStack_11c,CONCAT22(uStack_11e,CONCAT11(bStack_11f,local_120)));
          local_128 = &PTR_FUN_710523d988;
          local_120 = 0;
          bStack_11f = 0;
          uStack_11e = 0;
          uStack_11c = 0;
          if (uVar8 != 0) {
            uVar10 = *(ulong *)(uVar8 + 0x18);
            *(undefined ***)(uVar8 + 0x10) = &PTR_FUN_710523d9a8;
            *(undefined8 *)(uVar8 + 0x18) = 0;
            if (uVar10 != 0) {
              FUN_710392eb40(uVar10);
            }
            FUN_710392eb40(uVar8);
          }
        }
      }
    }
LAB_7101e10d14:
    if (*(uint *)(param_1 + 0x274) == uVar16) {
      return;
    }
    FUN_7103776640(&local_128,param_1 + 0x160,(byte ****)"set_parts_slot",param_3,param_4,param_5,
                   param_6,param_7,param_8);
    uVar8 = (ulong)*(uint *)(param_1 + 0x274);
    if (-1 < (int)*(uint *)(param_1 + 0x274)) {
      FUN_7103776640(&local_d0,(long)&local_128,(byte ****)"set_parts_btn_spter_%02d",uVar8,param_4,
                     param_5,param_6,param_7,param_8);
      FUN_7103776640(&local_60,(long)&local_d0,(byte ****)"set_parts_csr_01",uVar8,param_4,param_5,
                     param_6,param_7,param_8);
      uVar10 = local_58;
      FUN_7103778300(0x3f800000,local_58,0x710435be3c);
      local_60 = &PTR_FUN_710523d988;
      local_58 = 0;
      if (uVar10 != 0) {
        uVar7 = *(ulong *)(uVar10 + 0x18);
        *(undefined ***)(uVar10 + 0x10) = &PTR_FUN_710523d9a8;
        *(undefined8 *)(uVar10 + 0x18) = 0;
        if (uVar7 != 0) {
          FUN_710392eb40(uVar7);
        }
        FUN_710392eb40(uVar10);
      }
      FUN_7103776640(&local_60,(long)&local_d0,(byte ****)"set_parts_csr_02",uVar8,param_4,param_5,
                     param_6,param_7,param_8);
      uVar10 = local_58;
      FUN_7103778300(0x3f800000,local_58,0x710435be3c);
      local_60 = &PTR_FUN_710523d988;
      local_58 = 0;
      if (uVar10 != 0) {
        uVar7 = *(ulong *)(uVar10 + 0x18);
        *(undefined ***)(uVar10 + 0x10) = &PTR_FUN_710523d9a8;
        *(undefined8 *)(uVar10 + 0x18) = 0;
        if (uVar7 != 0) {
          FUN_710392eb40(uVar7);
        }
        FUN_710392eb40(uVar10);
      }
      FUN_7103776640(&local_60,(long)&local_d0,(byte ****)"set_parts_csr_03",uVar8,param_4,param_5,
                     param_6,param_7,param_8);
      uVar8 = local_58;
      FUN_7103778300(0x3f800000,local_58,0x710435be3c);
      local_60 = &PTR_FUN_710523d988;
      local_58 = 0;
      if (uVar8 != 0) {
        uVar10 = *(ulong *)(uVar8 + 0x18);
        *(undefined ***)(uVar8 + 0x10) = &PTR_FUN_710523d9a8;
        *(undefined8 *)(uVar8 + 0x18) = 0;
        if (uVar10 != 0) {
          FUN_710392eb40(uVar10);
        }
        FUN_710392eb40(uVar8);
      }
      uVar8 = local_c8;
      local_d0 = &PTR_FUN_710523d988;
      local_c8 = 0;
      if (uVar8 != 0) {
        uVar10 = *(ulong *)(uVar8 + 0x18);
        *(undefined ***)(uVar8 + 0x10) = &PTR_FUN_710523d9a8;
        *(undefined8 *)(uVar8 + 0x18) = 0;
        if (uVar10 != 0) {
          FUN_710392eb40(uVar10);
        }
        FUN_710392eb40(uVar8);
      }
    }
    if (-1 < (int)uVar16) {
      uVar10 = (ulong)uVar16;
      FUN_7103776640(&local_d0,(long)&local_128,(byte ****)"set_parts_btn_spter_%02d",uVar10,param_4
                     ,param_5,param_6,param_7,param_8);
      FUN_7103776640(&local_60,(long)&local_d0,(byte ****)"set_parts_csr_01",uVar10,param_4,param_5,
                     param_6,param_7,param_8);
      uVar8 = local_58;
      FUN_7103778300(0x3f800000,local_58,0x7104412fd0);
      local_60 = &PTR_FUN_710523d988;
      local_58 = 0;
      if (uVar8 != 0) {
        uVar7 = *(ulong *)(uVar8 + 0x18);
        *(undefined ***)(uVar8 + 0x10) = &PTR_FUN_710523d9a8;
        *(undefined8 *)(uVar8 + 0x18) = 0;
        if (uVar7 != 0) {
          FUN_710392eb40(uVar7);
        }
        FUN_710392eb40(uVar8);
      }
      FUN_7103776640(&local_60,(long)&local_d0,(byte ****)"set_parts_csr_02",uVar10,param_4,param_5,
                     param_6,param_7,param_8);
      uVar8 = local_58;
      FUN_7103778300(0x3f800000,local_58,0x7104412fd0);
      local_60 = &PTR_FUN_710523d988;
      local_58 = 0;
      if (uVar8 != 0) {
        uVar7 = *(ulong *)(uVar8 + 0x18);
        *(undefined ***)(uVar8 + 0x10) = &PTR_FUN_710523d9a8;
        *(undefined8 *)(uVar8 + 0x18) = 0;
        if (uVar7 != 0) {
          FUN_710392eb40(uVar7);
        }
        FUN_710392eb40(uVar8);
      }
      FUN_7103776640(&local_60,(long)&local_d0,(byte ****)"set_parts_csr_03",uVar10,param_4,param_5,
                     param_6,param_7,param_8);
      uVar8 = local_58;
      FUN_7103778300(0x3f800000,local_58,0x7104412fd0);
      local_60 = &PTR_FUN_710523d988;
      local_58 = 0;
      if (uVar8 != 0) {
        uVar10 = *(ulong *)(uVar8 + 0x18);
        *(undefined ***)(uVar8 + 0x10) = &PTR_FUN_710523d9a8;
        *(undefined8 *)(uVar8 + 0x18) = 0;
        if (uVar10 != 0) {
          FUN_710392eb40(uVar10);
        }
        FUN_710392eb40(uVar8);
      }
      uVar8 = local_c8;
      local_d0 = &PTR_FUN_710523d988;
      local_c8 = 0;
      if (uVar8 != 0) {
        uVar10 = *(ulong *)(uVar8 + 0x18);
        *(undefined ***)(uVar8 + 0x10) = &PTR_FUN_710523d9a8;
        *(undefined8 *)(uVar8 + 0x18) = 0;
        if (uVar10 != 0) {
          FUN_710392eb40(uVar10);
        }
        FUN_710392eb40(uVar8);
      }
    }
    *(uint *)(param_1 + 0x274) = uVar16;
    uVar8 = CONCAT44(uStack_11c,CONCAT22(uStack_11e,CONCAT11(bStack_11f,local_120)));
    local_128 = &PTR_FUN_710523d988;
    local_120 = 0;
    bStack_11f = 0;
    uStack_11e = 0;
    uStack_11c = 0;
    goto joined_r0x007101e10fe4;
  }
  uVar16 = *(uint *)(*(long *)(param_1 + 0x188) + 0x254);
  FUN_7103776640(&local_60,param_1 + 0x160,(byte ****)"set_parts_slot",param_3,param_4,param_5,
                 param_6,param_7,param_8);
  uVar10 = (ulong)uVar16;
  FUN_7103776640(&local_b0,(long)&local_60,(byte ****)"set_parts_btn_spter_%02d",uVar10,param_4,
                 param_5,param_6,param_7,param_8);
  uVar8 = local_a8;
  lVar18 = *(long *)(local_a8 + 8);
  if (lVar18 == 0) {
LAB_7101e104a4:
    local_d0 = &PTR_FUN_71050c0b38;
    local_c8 = *(ulong *)(param_1 + 0x1a8);
    local_c0 = *(undefined2 *)(param_1 + 0x1b0);
    local_be = *(undefined1 *)(param_1 + 0x1b2);
    local_bd = *(undefined2 *)(param_1 + 0x1b3);
    local_bb = *(undefined1 *)(param_1 + 0x1b5);
    local_ba = *(undefined1 *)(param_1 + 0x1b6);
    local_b9 = *(undefined1 *)(param_1 + 0x1b7);
    local_b8 = *(undefined1 *)(param_1 + 0x1b8);
    local_b7 = *(undefined1 *)(param_1 + 0x1b9);
    local_b6 = *(undefined1 *)(param_1 + 0x1ba);
    FUN_710252a950((long)&local_d0,(byte)uVar16);
    uStack_11c = 0;
    uStack_118 = 0;
    uStack_114 = 0;
    local_e4 = 0xffffffff;
    local_e0 = 0;
    local_dc = 0;
    local_d8 = 0;
    local_128 = (undefined **)CONCAT44(local_c8._2_4_,CONCAT22((undefined2)local_c8,0xffff));
    local_120 = (undefined1)(local_c8 >> 0x30);
    bStack_11f = (byte)(local_c8 >> 0x38);
    FUN_7101e13860(param_1,&local_128,uVar10,param_4,param_5,param_6,param_7,param_8);
    FUN_7102529a70(param_1 + 0x1a0,(long)&local_128);
    FUN_7101e14030(param_1);
    FUN_7101e153c0(param_1);
    FUN_7101e16090(param_1);
    *(undefined1 *)(param_1 + 0x263) = 0;
    **(uint **)(DAT_710593b988 + 8) = **(uint **)(DAT_710593b988 + 8) & 0xfffffffd;
  }
  else {
    plVar6 = (long *)FUN_71037964b0(lVar18,0x710436c90a);
    if (plVar6 == (long *)0x0) {
LAB_7101e10480:
      plVar6 = (long *)FUN_71037964b0(lVar18,0x710436c90a);
      if (plVar6 != (long *)0x0) {
        (**(code **)(*plVar6 + 0x1a0))(0);
      }
      goto LAB_7101e104a4;
    }
    uVar7 = (**(code **)(*plVar6 + 0x138))();
    if ((uVar7 & 1) != 0) {
      lVar18 = *(long *)(local_a8 + 8);
      if (lVar18 == 0) goto LAB_7101e104a4;
      goto LAB_7101e10480;
    }
  }
  local_b0 = &PTR_FUN_710523d988;
  local_a8 = 0;
  if (uVar8 != 0) {
    uVar10 = *(ulong *)(uVar8 + 0x18);
    *(undefined ***)(uVar8 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar8 + 0x18) = 0;
    if (uVar10 != 0) {
      FUN_710392eb40(uVar10);
    }
    FUN_710392eb40(uVar8);
  }
  uVar8 = local_58;
  local_60 = &PTR_FUN_710523d988;
  local_58 = 0;
joined_r0x007101e10fe4:
  if (uVar8 != 0) {
    uVar10 = *(ulong *)(uVar8 + 0x18);
    *(undefined ***)(uVar8 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar8 + 0x18) = 0;
    if (uVar10 != 0) {
      FUN_710392eb40(uVar10);
    }
    FUN_710392eb40(uVar8);
  }
  return;
}

