// addr:      7101e0ef70
// offset:    0x1e0ef70
// name:      FUN_7101e0ef70
// mangled:   
// signature: undefined __cdecl FUN_7101e0ef70(long param_1, undefined8 param_2, undefined * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_7101e0ef70(long param_1,undefined8 param_2,undefined **param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  char cVar4;
  bool bVar5;
  long *plVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 extraout_x1;
  undefined8 uVar10;
  long lVar11;
  int *piVar12;
  code *pcVar13;
  int iVar14;
  undefined4 uVar15;
  byte *pbVar16;
  uint uVar17;
  long lVar18;
  long lVar19;
  uint uVar20;
  long lVar21;
  long lVar22;
  undefined4 local_2c8 [2];
  undefined **local_2c0;
  long local_2b8;
  undefined8 local_2b0;
  undefined1 local_2a8;
  undefined8 local_2a0;
  undefined8 uStack_298;
  undefined8 local_290;
  undefined4 local_288 [2];
  undefined **local_280;
  long local_278;
  undefined8 local_270;
  undefined1 local_268;
  undefined8 local_260;
  undefined8 uStack_258;
  undefined8 local_250;
  undefined4 local_248 [2];
  undefined **local_240;
  long local_238;
  undefined8 local_230;
  undefined1 local_228;
  undefined8 local_220;
  undefined8 uStack_218;
  undefined8 local_210;
  undefined4 local_208 [2];
  undefined **local_200;
  long local_1f8;
  undefined8 local_1f0;
  undefined1 local_1e8;
  undefined8 local_1e0;
  undefined8 uStack_1d8;
  undefined8 local_1d0;
  undefined4 local_1c8 [2];
  undefined **local_1c0;
  long local_1b8;
  undefined8 local_1b0;
  undefined1 local_1a8;
  undefined8 local_1a0;
  undefined8 uStack_198;
  undefined8 local_190;
  undefined4 local_188 [2];
  undefined **local_180;
  long local_178;
  undefined8 local_170;
  undefined1 local_168;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined4 local_148 [2];
  undefined **local_140;
  long local_138;
  undefined8 local_130;
  undefined1 local_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined **local_108;
  ulong local_100;
  undefined **local_f8;
  ulong local_f0;
  undefined4 local_e8 [4];
  long local_d8;
  int local_d0;
  undefined8 local_a8;
  undefined1 local_a0;
  byte bStack_9f;
  undefined2 uStack_9e;
  undefined4 uStack_9c;
  undefined4 local_98;
  undefined2 uStack_94;
  undefined2 uStack_92;
  undefined8 local_90;
  undefined4 local_88;
  undefined2 local_84;
  undefined8 local_82;
  undefined8 local_7a;
  undefined4 local_72;
  undefined4 local_64;
  undefined1 local_60;
  undefined4 local_5c;
  undefined1 local_58;
  
  if (*(int *)(param_1 + 0x144) == 0) {
    uVar20 = 0x811c9dc5;
    FUN_71037760f0(*(long *)**(undefined8 **)(param_1 + 0x150),1);
    *(undefined4 *)(param_1 + 0x198) = 0;
    (**(code **)(**(long **)(param_1 + 0x180) + 0x60))(*(long **)(param_1 + 0x180),1);
    (**(code **)(**(long **)(param_1 + 0x180) + 0x70))(*(long **)(param_1 + 0x180),1);
    (**(code **)(**(long **)(param_1 + 0x188) + 0x70))(*(long **)(param_1 + 0x188),0);
    (**(code **)(**(long **)(param_1 + 0x188) + 0x60))(*(long **)(param_1 + 0x188),0);
    (**(code **)(**(long **)(param_1 + 400) + 0x70))(*(long **)(param_1 + 400),0);
    local_a0 = 0x6d;
    bStack_9f = 0x6e;
    uStack_9e = 0x5f75;
    uStack_9c = 0x72697073;
    local_98 = 0x5f737469;
    uStack_94 = 0x6863;
    uStack_92 = 0x6c61;
    local_90 = 0x616f6265676e656c;
    local_88 = 0x6f5f6472;
    local_84 = 0x6772;
    local_82 = 0x65685f657a696e61;
    local_7a = 0x63617474615f706c;
    local_72 = 0x72656b;
    uVar17 = 0x6d;
    local_a8._4_2_ = 0x31;
    local_a8._6_2_ = 0;
    pbVar16 = &bStack_9f;
    do {
      uVar3 = uVar20 * 0x89;
      uVar20 = uVar3 ^ uVar17;
      uVar17 = (uint)*pbVar16;
      pbVar16 = pbVar16 + 1;
    } while (uVar17 != 0);
    local_a8._0_2_ = (undefined2)uVar20;
    local_a8._2_2_ = (undefined2)(uVar3 >> 0x10);
    FUN_7101af53d0(*(long *)(*(long *)(*(long *)(DAT_710532f840 + 8) + 0xb8) + 0x80),
                   (uint *)&local_a8,param_3,param_4,param_5,param_6,param_7,param_8);
    FUN_7101e134d0(param_1,extraout_x1,param_3,param_4,param_5,param_6,param_7,param_8);
    if (((((*(char *)(param_1 + 0x264) != '\0') &&
          (*(char *)(*(long *)(DAT_710532f8d0 + 8) + 0x191) == '\0')) &&
         (uVar9 = FUN_7103313f20(*(long *)(DAT_710532f8d0 + 8),0x1bf69629fc,(long ****)&DAT_00000004
                                 ,param_4,param_5,param_6,param_7,param_8), (uVar9 & 1) != 0)) &&
        ((FUN_71024076d0(local_e8,0x1bf69629fc), local_d8 != 0 && (DAT_7106dd53a8 == '\x01')))) &&
       (local_d0 == DAT_7106dd53ac)) {
      piVar12 = (int *)(local_d8 + 0x38);
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar12,0x10);
        if (bVar5) {
          *piVar12 = *piVar12 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    *(undefined2 *)(param_1 + 0x263) = 0;
    return;
  }
  if (*(char *)(param_1 + 0x263) == '\0') {
    FUN_7101e134d0(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
    lVar22 = *(long *)**(undefined8 **)(param_1 + 0x150);
    lVar21 = *(long *)(*(long *)(DAT_710532f840 + 8) + 0xb8);
    if ((((*(int *)(*(long *)(param_1 + 0x180) + 0x254) == 1) &&
         (lVar11 = *(long *)(lVar22 + 0x600), *(char *)(lVar11 + 0x4aa) != '\0')) &&
        (((*(byte *)(lVar11 + 0x1bc) >> 1 & 1) != 0 || ((*(byte *)(lVar11 + 0x1b8) >> 1 & 1) != 0)))
        ) && (0 < *(int *)(param_1 + 0x23c))) {
      local_a8._0_2_ = 0xffff;
      uStack_9c = 0;
      local_98 = 0;
      uStack_94 = 0;
      local_64 = 0xffffffff;
      local_60 = 0;
      local_5c = 0;
      local_58 = 0;
      local_a8._2_2_ = *(undefined2 *)(param_1 + 0x1a8);
      local_a8._4_2_ = *(undefined2 *)(param_1 + 0x1aa);
      local_a8._6_2_ = *(undefined2 *)(param_1 + 0x1ac);
      local_a0 = (undefined1)*(undefined2 *)(param_1 + 0x1ae);
      bStack_9f = (byte)((ushort)*(undefined2 *)(param_1 + 0x1ae) >> 8);
      FUN_7101e16c20(param_1,(long)&local_a8,0);
      if ((*(char *)(*(long *)(DAT_710532f8d0 + 8) + 0x191) == '\0') &&
         (uVar9 = FUN_7103313f20(*(long *)(DAT_710532f8d0 + 8),0x10c0b65170,(long ****)&DAT_00000004
                                 ,param_4,param_5,param_6,param_7,param_8), (uVar9 & 1) != 0)) {
        FUN_71024076d0(local_148,0x10c0b65170);
        if (((local_138 != 0) && (DAT_7106dd53a8 == '\x01')) && ((int)local_130 == DAT_7106dd53ac))
        {
          piVar12 = (int *)(local_138 + 0x38);
          do {
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(piVar12,0x10);
            if (bVar5) {
              *piVar12 = *piVar12 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
        }
      }
      else {
        local_120 = 0xffffffffffffffff;
        uStack_118 = 0;
        local_148[0] = 0;
        local_110 = 0;
        local_130 = 0x87650000000000;
      }
      local_140 = &PTR_FUN_7104f73d50;
      local_138 = 0;
      local_128 = 0;
      if (0x12 < *(uint *)(param_1 + 0x13c)) goto LAB_7101e103d8;
      *(undefined4 *)(param_1 + (long)(int)*(uint *)(param_1 + 0x13c) * 4 + 0xf0) = 3;
      plVar6 = *(long **)(param_1 + 0x180);
      if (plVar6 == (long *)0x0) {
        return;
      }
      if (*(long *)(param_1 + 0x188) == 0) {
        return;
      }
      if (*(long *)(param_1 + 400) == 0) {
        return;
      }
      (**(code **)(*plVar6 + 0x70))(plVar6,0);
      plVar6 = *(long **)(param_1 + 0x188);
      pcVar13 = *(code **)(*plVar6 + 0x70);
      uVar10 = 1;
      goto LAB_7101e0f92c;
    }
    lVar11 = *(long *)(lVar21 + 0x80);
    iVar14 = *(int *)(lVar11 + 0x2270);
    if (iVar14 == 0) goto LAB_7101e0fb14;
    iVar1 = -1;
    if (*(int *)(lVar11 + 0x11b0) - 1U < 5) {
      iVar1 = 1;
    }
    iVar2 = 2;
    if (*(int *)(lVar11 + 0x11b0) < 6) {
      iVar2 = iVar1;
    }
    if (*(int *)((long)*(long **)(lVar11 + 0x2268) + 0x254) == iVar2) {
      uVar9 = (**(code **)(**(long **)(lVar11 + 0x2268) + 0x78))();
      if ((uVar9 & 1) != 0) {
        if (*(uint *)(param_1 + 0x13c) < 0x13) {
          *(undefined4 *)(param_1 + (long)(int)*(uint *)(param_1 + 0x13c) * 4 + 0xf0) = 5;
          plVar6 = *(long **)(param_1 + 0x180);
          if (plVar6 == (long *)0x0) {
            return;
          }
          if (*(long *)(param_1 + 0x188) == 0) {
            return;
          }
          if (*(long *)(param_1 + 400) == 0) {
            return;
          }
          (**(code **)(*plVar6 + 0x70))(plVar6,0);
          (**(code **)(**(long **)(param_1 + 0x188) + 0x70))(*(long **)(param_1 + 0x188),0);
                    /* WARNING: Could not recover jumptable at 0x007101e0f668. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(**(long **)(param_1 + 400) + 0x70))(*(long **)(param_1 + 400),0);
          return;
        }
        goto LAB_7101e103d8;
      }
      lVar11 = *(long *)(lVar21 + 0x80);
      iVar14 = *(int *)(lVar11 + 0x2270);
    }
    if (iVar14 - 1U < 2) {
      lVar22 = *(long *)(DAT_710532f8d0 + 8);
      if ((ulong)(*(long *)(lVar22 + 0x48) - *(long *)(lVar22 + 0x40) >> 3) < 3) {
        uVar9 = 0;
        if (*(char *)(lVar22 + 0x191) == '\0') goto LAB_7101e0f838;
LAB_7101e0f8a8:
        local_170 = 0x87650000000000;
        local_160 = 0xffffffffffffffff;
        uStack_158 = 0;
        local_188[0] = 0;
        local_150 = 0;
      }
      else {
        uVar9 = *(ulong *)(*(long *)(lVar22 + 0x40) + 0x10);
        if (*(char *)(lVar22 + 0x191) != '\0') goto LAB_7101e0f8a8;
LAB_7101e0f838:
        uVar7 = FUN_7103313f20(lVar22,uVar9,(long ****)&DAT_00000004,param_4,param_5,param_6,param_7
                               ,param_8);
        if ((uVar7 & 1) == 0) goto LAB_7101e0f8a8;
        FUN_71024076d0(local_188,uVar9);
        if (((local_178 != 0) && (DAT_7106dd53a8 == '\x01')) && ((int)local_170 == DAT_7106dd53ac))
        {
          piVar12 = (int *)(local_178 + 0x38);
          do {
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(piVar12,0x10);
            if (bVar5) {
              *piVar12 = *piVar12 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
        }
      }
      local_180 = &PTR_FUN_7104f73d50;
      local_178 = 0;
      local_168 = 0;
      if (0x12 < *(uint *)(param_1 + 0x13c)) {
LAB_7101e103d8:
                    /* WARNING: Subroutine does not return */
        abort();
      }
      lVar22 = (long)(int)*(uint *)(param_1 + 0x13c) * 4;
      uVar15 = 7;
    }
    else {
      lVar22 = *(long *)(lVar22 + 0x600);
      if (*(char *)(lVar22 + 0x4aa) == '\0') {
LAB_7101e0f968:
        if (*(char *)(*(long *)(param_1 + 0x180) + 0x280) != '\0') {
          if (*(char *)(lVar11 + 0xc9) == '\0') {
            iVar14 = 4;
          }
          else {
            iVar14 = 0;
          }
          FUN_7103771be0((long *)(lVar11 + 0x2260),iVar14,0);
          *(undefined4 *)(lVar11 + 0x2270) = *(undefined4 *)(*(long *)(lVar11 + 0x2260) + 0x25c);
LAB_7101e0fb14:
          FUN_7101e13790(param_1);
          *(undefined1 *)(param_1 + 0x260) = 0;
          return;
        }
        if (*(int *)(*(long *)(param_1 + 0x180) + 0x25c) != 1) {
          return;
        }
        lVar22 = *(long *)(DAT_710532f8d0 + 8);
        if ((ulong)(*(long *)(lVar22 + 0x48) - *(long *)(lVar22 + 0x40) >> 3) < 3) {
          uVar9 = 0;
          if (*(char *)(lVar22 + 0x191) == '\0') goto LAB_7101e100d8;
LAB_7101e10148:
          local_2b0 = 0x87650000000000;
          local_2a0 = 0xffffffffffffffff;
          uStack_298 = 0;
          local_2c8[0] = 0;
          local_290 = 0;
        }
        else {
          uVar9 = *(ulong *)(*(long *)(lVar22 + 0x40) + 0x10);
          if (*(char *)(lVar22 + 0x191) != '\0') goto LAB_7101e10148;
LAB_7101e100d8:
          uVar7 = FUN_7103313f20(lVar22,uVar9,(long ****)&DAT_00000004,param_4,param_5,param_6,
                                 param_7,param_8);
          if ((uVar7 & 1) == 0) goto LAB_7101e10148;
          FUN_71024076d0(local_2c8,uVar9);
          if (((local_2b8 != 0) && (DAT_7106dd53a8 == '\x01')) && ((int)local_2b0 == DAT_7106dd53ac)
             ) {
            piVar12 = (int *)(local_2b8 + 0x38);
            do {
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(piVar12,0x10);
              if (bVar5) {
                *piVar12 = *piVar12 + -1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
          }
        }
        local_2c0 = &PTR_FUN_7104f73d50;
        local_2b8 = 0;
        local_2a8 = 0;
        if (*(char *)(param_1 + 0x1b6) != -1) {
          return;
        }
        if (*(char *)(param_1 + 0x1b7) != -1) {
          return;
        }
        *(undefined4 *)(param_1 + 0x198) = 1;
        *(undefined1 *)(param_1 + 0x1ba) = 0;
        *(undefined1 *)(param_1 + 0x1b6) = 0;
        if (0x11 < *(int *)(param_1 + 0x13c)) {
          return;
        }
        uVar20 = *(int *)(param_1 + 0x13c) + 1;
        *(uint *)(param_1 + 0x13c) = uVar20;
        if (uVar20 < 0x13) {
          *(undefined4 *)(param_1 + (long)(int)uVar20 * 4 + 0xf0) = 6;
          return;
        }
        goto LAB_7101e103d8;
      }
      if (((*(byte *)(lVar22 + 0x1c8) >> 1 & 1) != 0) && (*(short *)(param_1 + 0x1a8) != -1)) {
        *(undefined1 *)(param_1 + 0x262) = 1;
        if (*(uint *)(param_1 + 0x13c) < 0x13) {
          *(undefined4 *)(param_1 + (long)(int)*(uint *)(param_1 + 0x13c) * 4 + 0xf0) = 9;
          if (*(long *)(param_1 + 0x180) == 0) {
            return;
          }
          if (*(long *)(param_1 + 0x188) == 0) {
            return;
          }
          if (*(long *)(param_1 + 400) == 0) {
            return;
          }
          FUN_71037760f0(*(long *)**(undefined8 **)(param_1 + 0x150),0);
          return;
        }
        goto LAB_7101e103d8;
      }
      if ((*(byte *)(lVar22 + 0x1b4) >> 1 & 1) != 0) {
        if (*(short *)(param_1 + 0x1a8) == -1) {
          return;
        }
        lVar22 = param_1 + 0x160;
        FUN_7103776640(&local_a8,lVar22,(byte ****)"set_parts_det_key_00",param_3,param_4,param_5,
                       param_6,param_7,param_8);
        uVar9 = CONCAT44(uStack_9c,CONCAT22(uStack_9e,CONCAT11(bStack_9f,local_a0)));
        FUN_7103778300(0x3f800000,uVar9,0x71042a357e);
        local_a8._0_2_ = 0xd988;
        local_a8._2_2_ = 0x523;
        local_a8._4_2_ = 0x71;
        local_a8._6_2_ = 0;
        local_a0 = 0;
        bStack_9f = 0;
        uStack_9e = 0;
        uStack_9c = 0;
        if (uVar9 != 0) {
          uVar7 = *(ulong *)(uVar9 + 0x18);
          *(undefined ***)(uVar9 + 0x10) = &PTR_FUN_710523d9a8;
          *(undefined8 *)(uVar9 + 0x18) = 0;
          if (uVar7 != 0) {
            FUN_710392eb40(uVar7);
          }
          FUN_710392eb40(uVar9);
        }
        lVar21 = *(long *)(DAT_710532f8d0 + 8);
        if ((ulong)(*(long *)(lVar21 + 0x48) - *(long *)(lVar21 + 0x40) >> 3) < 3) {
          uVar9 = 0;
          if (*(char *)(lVar21 + 0x191) == '\0') goto LAB_7101e0fbe4;
LAB_7101e0fc54:
          local_1b0 = 0x87650000000000;
          local_1a0 = 0xffffffffffffffff;
          uStack_198 = 0;
          local_1c8[0] = 0;
          local_190 = 0;
        }
        else {
          uVar9 = *(ulong *)(*(long *)(lVar21 + 0x40) + 0x10);
          if (*(char *)(lVar21 + 0x191) != '\0') goto LAB_7101e0fc54;
LAB_7101e0fbe4:
          param_3 = (undefined **)&DAT_00000004;
          uVar7 = FUN_7103313f20(lVar21,uVar9,(long ****)&DAT_00000004,param_4,param_5,param_6,
                                 param_7,param_8);
          if ((uVar7 & 1) == 0) goto LAB_7101e0fc54;
          FUN_71024076d0(local_1c8,uVar9);
          if (((local_1b8 != 0) && (DAT_7106dd53a8 == '\x01')) && ((int)local_1b0 == DAT_7106dd53ac)
             ) {
            piVar12 = (int *)(local_1b8 + 0x38);
            do {
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(piVar12,0x10);
              if (bVar5) {
                *piVar12 = *piVar12 + -1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
          }
        }
        local_1c0 = &PTR_FUN_7104f73d50;
        local_1b8 = 0;
        local_1a8 = 0;
        FUN_7103776640(&local_a8,lVar22,(byte ****)"set_parts_btn_attacker",param_3,param_4,param_5,
                       param_6,param_7,param_8);
        uVar9 = CONCAT44(uStack_9c,CONCAT22(uStack_9e,CONCAT11(bStack_9f,local_a0)));
        FUN_7103778300(0x3f800000,uVar9,0x710436c90a);
        *(undefined1 *)(param_1 + 0x263) = 1;
        **(uint **)(DAT_710593b988 + 8) = **(uint **)(DAT_710593b988 + 8) | 2;
        FUN_7103776640(&local_f8,lVar22,(byte ****)"set_parts_slot",param_3,param_4,param_5,param_6,
                       param_7,param_8);
        FUN_7103776640(&local_108,(long)&local_f8,(byte ****)"set_parts_btn_spter_%02d",0,param_4,
                       param_5,param_6,param_7,param_8);
        uVar7 = local_100;
        FUN_7103778300(0x3f800000,local_100,0x710436c90a);
        local_108 = &PTR_FUN_710523d988;
        local_100 = 0;
        if (uVar7 != 0) {
          uVar8 = *(ulong *)(uVar7 + 0x18);
          *(undefined ***)(uVar7 + 0x10) = &PTR_FUN_710523d9a8;
          *(undefined8 *)(uVar7 + 0x18) = 0;
          if (uVar8 != 0) {
            FUN_710392eb40(uVar8);
          }
          FUN_710392eb40(uVar7);
        }
        FUN_7103776640(&local_108,(long)&local_f8,(byte ****)"set_parts_btn_spter_%02d",1,param_4,
                       param_5,param_6,param_7,param_8);
        uVar7 = local_100;
        FUN_7103778300(0x3f800000,local_100,0x710436c90a);
        local_108 = &PTR_FUN_710523d988;
        local_100 = 0;
        if (uVar7 != 0) {
          uVar8 = *(ulong *)(uVar7 + 0x18);
          *(undefined ***)(uVar7 + 0x10) = &PTR_FUN_710523d9a8;
          *(undefined8 *)(uVar7 + 0x18) = 0;
          if (uVar8 != 0) {
            FUN_710392eb40(uVar8);
          }
          FUN_710392eb40(uVar7);
        }
        FUN_7103776640(&local_108,(long)&local_f8,(byte ****)"set_parts_btn_spter_%02d",2,param_4,
                       param_5,param_6,param_7,param_8);
        uVar7 = local_100;
        FUN_7103778300(0x3f800000,local_100,0x710436c90a);
        local_108 = &PTR_FUN_710523d988;
        local_100 = 0;
        if (uVar7 != 0) {
          uVar8 = *(ulong *)(uVar7 + 0x18);
          *(undefined ***)(uVar7 + 0x10) = &PTR_FUN_710523d9a8;
          *(undefined8 *)(uVar7 + 0x18) = 0;
          if (uVar8 != 0) {
            FUN_710392eb40(uVar8);
          }
          FUN_710392eb40(uVar7);
        }
        *(undefined8 *)(param_1 + 0x1a8) = 0xffffffffffffffff;
        *(undefined2 *)(param_1 + 0x1b4) = 0;
        *(undefined4 *)(param_1 + 0x1b0) = 0;
        *(undefined4 *)(param_1 + 0x1b6) = 0xffff;
        *(undefined1 *)(param_1 + 0x1ba) = 0;
        lVar22 = *(long *)(*(long *)(*(long *)(DAT_710532f840 + 8) + 0xb8) + 0x80);
        if (*(char *)(lVar22 + 0x11ac) != '\0') {
          *(char *)(lVar22 + 0x11ac) = '\0';
          if (*(int *)(lVar22 + 0x11b0) < 6) {
            if (*(int *)(lVar22 + 0x11b0) - 1U < 5) {
              lVar21 = *(long *)(*(long *)(lVar22 + 0x2268) + 0x1b8);
              if (lVar21 != 0) {
                lVar11 = *(long *)(lVar22 + 0x2268) + 0x1b8;
                lVar18 = lVar11;
                lVar19 = lVar21;
                do {
                  if (0 < *(int *)(lVar19 + 0x20)) {
                    lVar18 = lVar19;
                  }
                  lVar19 = *(long *)(lVar19 + (ulong)(*(int *)(lVar19 + 0x20) < 1) * 8);
                } while (lVar19 != 0);
                if (((lVar18 != lVar11) && (*(int *)(lVar18 + 0x20) < 2)) &&
                   (plVar6 = *(long **)(lVar18 + 0x28), plVar6 != (long *)0x0)) {
                  (**(code **)(*plVar6 + 0x1f8))(plVar6,0);
                  (**(code **)(*plVar6 + 0x388))(plVar6,1,0);
                  lVar11 = *(long *)(lVar22 + 0x2268) + 0x1b8;
                  lVar21 = *(long *)(*(long *)(lVar22 + 0x2268) + 0x1b8);
                }
                lVar22 = lVar11;
                if (lVar21 != 0) {
                  do {
                    if (0 < *(int *)(lVar21 + 0x20)) {
                      lVar22 = lVar21;
                    }
                    lVar21 = *(long *)(lVar21 + (ulong)(*(int *)(lVar21 + 0x20) < 1) * 8);
                  } while (lVar21 != 0);
                  if ((lVar22 != lVar11) && (*(int *)(lVar22 + 0x20) < 2)) goto LAB_7101e10060;
                }
              }
            }
          }
          else {
            lVar21 = *(long *)(*(long *)(lVar22 + 0x2268) + 0x1b8);
            if (lVar21 != 0) {
              lVar11 = *(long *)(lVar22 + 0x2268) + 0x1b8;
              lVar18 = lVar11;
              lVar19 = lVar21;
              do {
                if (1 < *(int *)(lVar19 + 0x20)) {
                  lVar18 = lVar19;
                }
                lVar19 = *(long *)(lVar19 + (ulong)(*(int *)(lVar19 + 0x20) < 2) * 8);
              } while (lVar19 != 0);
              if (((lVar18 != lVar11) && (*(int *)(lVar18 + 0x20) < 3)) &&
                 (plVar6 = *(long **)(lVar18 + 0x28), plVar6 != (long *)0x0)) {
                (**(code **)(*plVar6 + 0x1f8))(plVar6,0);
                (**(code **)(*plVar6 + 0x388))(plVar6,1,0);
                lVar11 = *(long *)(lVar22 + 0x2268) + 0x1b8;
                lVar21 = *(long *)(*(long *)(lVar22 + 0x2268) + 0x1b8);
              }
              lVar22 = lVar11;
              if (lVar21 != 0) {
                do {
                  if (1 < *(int *)(lVar21 + 0x20)) {
                    lVar22 = lVar21;
                  }
                  lVar21 = *(long *)(lVar21 + (ulong)(*(int *)(lVar21 + 0x20) < 2) * 8);
                } while (lVar21 != 0);
                if ((lVar22 != lVar11) && (*(int *)(lVar22 + 0x20) < 3)) {
LAB_7101e10060:
                  plVar6 = *(long **)(lVar22 + 0x28);
                  if (plVar6 != (long *)0x0) {
                    (**(code **)(*plVar6 + 0x208))(plVar6,0);
                    (**(code **)(*plVar6 + 0x388))(plVar6,1,0);
                  }
                }
              }
            }
          }
        }
        uVar7 = local_f0;
        local_f8 = &PTR_FUN_710523d988;
        local_f0 = 0;
        if (uVar7 != 0) {
          uVar8 = *(ulong *)(uVar7 + 0x18);
          *(undefined ***)(uVar7 + 0x10) = &PTR_FUN_710523d9a8;
          *(undefined8 *)(uVar7 + 0x18) = 0;
          if (uVar8 != 0) {
            FUN_710392eb40(uVar8);
          }
          FUN_710392eb40(uVar7);
        }
        local_a8._0_2_ = 0xd988;
        local_a8._2_2_ = 0x523;
        local_a8._4_2_ = 0x71;
        local_a8._6_2_ = 0;
        local_a0 = 0;
        bStack_9f = 0;
        uStack_9e = 0;
        uStack_9c = 0;
        goto joined_r0x007101e100c4;
      }
      if ((*(byte *)(lVar22 + 0x1c4) >> 1 & 1) != 0) {
        if ((*(char *)(*(long *)(DAT_710532f8d0 + 8) + 0x191) == '\0') &&
           (uVar9 = FUN_7103313f20(*(long *)(DAT_710532f8d0 + 8),0x10c0b65170,
                                   (long ****)&DAT_00000004,param_4,param_5,param_6,param_7,param_8)
           , (uVar9 & 1) != 0)) {
          FUN_71024076d0(local_208,0x10c0b65170);
          if (((local_1f8 != 0) && (DAT_7106dd53a8 == '\x01')) && ((int)local_1f0 == DAT_7106dd53ac)
             ) {
            piVar12 = (int *)(local_1f8 + 0x38);
            do {
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(piVar12,0x10);
              if (bVar5) {
                *piVar12 = *piVar12 + -1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
          }
        }
        else {
          local_1f0 = 0x87650000000000;
          local_1e0 = 0xffffffffffffffff;
          uStack_1d8 = 0;
          local_208[0] = 0;
          local_1d0 = 0;
        }
        local_200 = &PTR_FUN_7104f73d50;
        local_1f8 = 0;
        local_1e8 = 0;
LAB_7101e0fb58:
        if (*(uint *)(param_1 + 0x13c) < 0x13) {
          *(undefined4 *)(param_1 + (long)(int)*(uint *)(param_1 + 0x13c) * 4 + 0xf0) = 4;
          plVar6 = *(long **)(param_1 + 0x180);
          if (plVar6 == (long *)0x0) {
            return;
          }
          if (*(long *)(param_1 + 0x188) == 0) {
            return;
          }
          if (*(long *)(param_1 + 400) == 0) {
            return;
          }
          (**(code **)(*plVar6 + 0x70))(plVar6,0);
          (**(code **)(**(long **)(param_1 + 0x188) + 0x70))(*(long **)(param_1 + 0x188),0);
          FUN_7103771a80((long *)(param_1 + 400),3,0);
          (**(code **)(**(long **)(param_1 + 400) + 0x70))(*(long **)(param_1 + 400),1);
          return;
        }
        goto LAB_7101e103d8;
      }
      if ((*(byte *)(lVar22 + 0x1c0) >> 1 & 1) == 0) {
        if ((*(byte *)(lVar22 + 0x1cc) >> 1 & 1) != 0) {
          FUN_7103776640(&local_a8,param_1 + 0x160,(byte ****)"set_parts_det_key_02",param_3,param_4
                         ,param_5,param_6,param_7,param_8);
          uVar9 = CONCAT44(uStack_9c,CONCAT22(uStack_9e,CONCAT11(bStack_9f,local_a0)));
          FUN_7103778300(0x3f800000,uVar9,0x71042a357e);
          local_a8._0_2_ = 0xd988;
          local_a8._2_2_ = 0x523;
          local_a8._4_2_ = 0x71;
          local_a8._6_2_ = 0;
          local_a0 = 0;
          bStack_9f = 0;
          uStack_9e = 0;
          uStack_9c = 0;
          if (uVar9 != 0) {
            uVar7 = *(ulong *)(uVar9 + 0x18);
            *(undefined ***)(uVar9 + 0x10) = &PTR_FUN_710523d9a8;
            *(undefined8 *)(uVar9 + 0x18) = 0;
            if (uVar7 != 0) {
              FUN_710392eb40(uVar7);
            }
            FUN_710392eb40(uVar9);
          }
          FUN_7101e16790(param_1,1,param_3,param_4,param_5,param_6,param_7,param_8);
          return;
        }
        goto LAB_7101e0f968;
      }
      lVar22 = *(long *)(DAT_710532f8d0 + 8);
      if (*(char *)(lVar11 + 0x11ac) == '\0') {
        if ((*(char *)(lVar22 + 0x191) == '\0') &&
           (uVar9 = FUN_7103313f20(lVar22,0x10c0b65170,(long ****)&DAT_00000004,param_4,param_5,
                                   param_6,param_7,param_8), (uVar9 & 1) != 0)) {
          FUN_71024076d0(local_288,0x10c0b65170);
          if (((local_278 != 0) && (DAT_7106dd53a8 == '\x01')) && ((int)local_270 == DAT_7106dd53ac)
             ) {
            piVar12 = (int *)(local_278 + 0x38);
            do {
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(piVar12,0x10);
              if (bVar5) {
                *piVar12 = *piVar12 + -1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
          }
        }
        else {
          local_270 = 0x87650000000000;
          local_260 = 0xffffffffffffffff;
          uStack_258 = 0;
          local_288[0] = 0;
          local_250 = 0;
        }
        local_280 = &PTR_FUN_7104f73d50;
        local_278 = 0;
        local_268 = 0;
        goto LAB_7101e0fb58;
      }
      if ((*(char *)(lVar22 + 0x191) == '\0') &&
         (uVar9 = FUN_7103313f20(lVar22,0x10c0b65170,(long ****)&DAT_00000004,param_4,param_5,
                                 param_6,param_7,param_8), (uVar9 & 1) != 0)) {
        FUN_71024076d0(local_248,0x10c0b65170);
        if (((local_238 != 0) && (DAT_7106dd53a8 == '\x01')) && ((int)local_230 == DAT_7106dd53ac))
        {
          piVar12 = (int *)(local_238 + 0x38);
          do {
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(piVar12,0x10);
            if (bVar5) {
              *piVar12 = *piVar12 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
        }
      }
      else {
        local_230 = 0x87650000000000;
        local_220 = 0xffffffffffffffff;
        uStack_218 = 0;
        local_248[0] = 0;
        local_210 = 0;
      }
      local_240 = &PTR_FUN_7104f73d50;
      local_238 = 0;
      local_228 = 0;
      lVar22 = *(long *)(lVar21 + 0x80);
      (**(code **)(**(long **)(lVar22 + 0x2268) + 0x70))(*(long **)(lVar22 + 0x2268),1);
      iVar14 = -1;
      if (*(int *)(lVar22 + 0x11b0) - 1U < 5) {
        iVar14 = 1;
      }
      iVar1 = 2;
      if (*(int *)(lVar22 + 0x11b0) < 6) {
        iVar1 = iVar14;
      }
      FUN_7103771a80((long *)(lVar22 + 0x2268),iVar1,0);
      lVar22 = *(long *)(lVar21 + 0x80);
      (**(code **)(**(long **)(lVar22 + 0x2268) + 0x70))(*(long **)(lVar22 + 0x2268),1);
      iVar14 = -1;
      if (*(int *)(lVar22 + 0x11b0) - 1U < 5) {
        iVar14 = 1;
      }
      iVar1 = 2;
      if (*(int *)(lVar22 + 0x11b0) < 6) {
        iVar1 = iVar14;
      }
      FUN_7103771a80((long *)(lVar22 + 0x2268),iVar1,0);
      if (0x12 < *(uint *)(param_1 + 0x13c)) goto LAB_7101e103d8;
      lVar22 = (long)(int)*(uint *)(param_1 + 0x13c) << 2;
      uVar15 = 5;
    }
    *(undefined4 *)(param_1 + lVar22 + 0xf0) = uVar15;
    plVar6 = *(long **)(param_1 + 0x180);
    if (plVar6 == (long *)0x0) {
      return;
    }
    if (*(long *)(param_1 + 0x188) == 0) {
      return;
    }
    if (*(long *)(param_1 + 400) == 0) {
      return;
    }
    (**(code **)(*plVar6 + 0x70))(plVar6,0);
    plVar6 = *(long **)(param_1 + 0x188);
    pcVar13 = *(code **)(*plVar6 + 0x70);
    uVar10 = 0;
LAB_7101e0f92c:
    (*pcVar13)(plVar6,uVar10);
    (**(code **)(**(long **)(param_1 + 400) + 0x70))(*(long **)(param_1 + 400),0);
    return;
  }
  FUN_7103776640(&local_f8,param_1 + 0x160,(byte ****)"set_parts_btn_attacker",param_3,param_4,
                 param_5,param_6,param_7,param_8);
  uVar9 = local_f0;
  lVar22 = *(long *)(local_f0 + 8);
  if (lVar22 == 0) {
LAB_7101e0f01c:
    FUN_7103776640(&local_108,param_1 + 0x160,(byte ****)"set_parts_slot",param_3,param_4,param_5,
                   param_6,param_7,param_8);
    FUN_7103776640(&local_a8,(long)&local_108,(byte ****)"set_parts_btn_spter_%02d",0,param_4,
                   param_5,param_6,param_7,param_8);
    uVar7 = CONCAT44(uStack_9c,CONCAT22(uStack_9e,CONCAT11(bStack_9f,local_a0)));
    if ((*(long *)(uVar7 + 8) != 0) &&
       (plVar6 = (long *)FUN_71037964b0(*(long *)(uVar7 + 8),0x710436c90a), plVar6 != (long *)0x0))
    {
      (**(code **)(*plVar6 + 0x1a0))(0);
    }
    local_a8._0_2_ = 0xd988;
    local_a8._2_2_ = 0x523;
    local_a8._4_2_ = 0x71;
    local_a8._6_2_ = 0;
    local_a0 = 0;
    bStack_9f = 0;
    uStack_9e = 0;
    uStack_9c = 0;
    if (uVar7 != 0) {
      uVar8 = *(ulong *)(uVar7 + 0x18);
      *(undefined ***)(uVar7 + 0x10) = &PTR_FUN_710523d9a8;
      *(undefined8 *)(uVar7 + 0x18) = 0;
      if (uVar8 != 0) {
        FUN_710392eb40(uVar8);
      }
      FUN_710392eb40(uVar7);
    }
    FUN_7103776640(&local_a8,(long)&local_108,(byte ****)"set_parts_btn_spter_%02d",1,param_4,
                   param_5,param_6,param_7,param_8);
    uVar7 = CONCAT44(uStack_9c,CONCAT22(uStack_9e,CONCAT11(bStack_9f,local_a0)));
    if ((*(long *)(uVar7 + 8) != 0) &&
       (plVar6 = (long *)FUN_71037964b0(*(long *)(uVar7 + 8),0x710436c90a), plVar6 != (long *)0x0))
    {
      (**(code **)(*plVar6 + 0x1a0))(0);
    }
    local_a8._0_2_ = 0xd988;
    local_a8._2_2_ = 0x523;
    local_a8._4_2_ = 0x71;
    local_a8._6_2_ = 0;
    local_a0 = 0;
    bStack_9f = 0;
    uStack_9e = 0;
    uStack_9c = 0;
    if (uVar7 != 0) {
      uVar8 = *(ulong *)(uVar7 + 0x18);
      *(undefined ***)(uVar7 + 0x10) = &PTR_FUN_710523d9a8;
      *(undefined8 *)(uVar7 + 0x18) = 0;
      if (uVar8 != 0) {
        FUN_710392eb40(uVar8);
      }
      FUN_710392eb40(uVar7);
    }
    uVar10 = 2;
    FUN_7103776640(&local_a8,(long)&local_108,(byte ****)"set_parts_btn_spter_%02d",2,param_4,
                   param_5,param_6,param_7,param_8);
    uVar7 = CONCAT44(uStack_9c,CONCAT22(uStack_9e,CONCAT11(bStack_9f,local_a0)));
    if ((*(long *)(uVar7 + 8) != 0) &&
       (plVar6 = (long *)FUN_71037964b0(*(long *)(uVar7 + 8),0x710436c90a), plVar6 != (long *)0x0))
    {
      (**(code **)(*plVar6 + 0x1a0))(0);
    }
    local_a8._0_2_ = 0xd988;
    local_a8._2_2_ = 0x523;
    local_a8._4_2_ = 0x71;
    local_a8._6_2_ = 0;
    local_a0 = 0;
    bStack_9f = 0;
    uStack_9e = 0;
    uStack_9c = 0;
    if (uVar7 != 0) {
      uVar8 = *(ulong *)(uVar7 + 0x18);
      *(undefined ***)(uVar7 + 0x10) = &PTR_FUN_710523d9a8;
      *(undefined8 *)(uVar7 + 0x18) = 0;
      if (uVar8 != 0) {
        FUN_710392eb40(uVar8);
      }
      FUN_710392eb40(uVar7);
    }
    local_a8._0_2_ = 0xffff;
    uStack_9c = 0;
    local_98 = 0;
    uStack_94 = 0;
    local_64 = 0xffffffff;
    local_60 = 0;
    local_5c = 0;
    local_58 = 0;
    local_a8._2_2_ = 0xffff;
    local_a8._4_2_ = 0xffff;
    local_a8._6_2_ = 0xffff;
    local_a0 = 0xff;
    bStack_9f = 0xff;
    FUN_7101e13860(param_1,&local_a8,uVar10,param_4,param_5,param_6,param_7,param_8);
    FUN_7102529a70(param_1 + 0x1a0,(long)&local_a8);
    FUN_7101e14030(param_1);
    FUN_7101e153c0(param_1);
    FUN_7101e16090(param_1);
    uVar7 = local_100;
    *(undefined1 *)(param_1 + 0x263) = 0;
    **(uint **)(DAT_710593b988 + 8) = **(uint **)(DAT_710593b988 + 8) & 0xfffffffd;
    local_108 = &PTR_FUN_710523d988;
    local_100 = 0;
    if (uVar7 != 0) {
      uVar8 = *(ulong *)(uVar7 + 0x18);
      *(undefined ***)(uVar7 + 0x10) = &PTR_FUN_710523d9a8;
      *(undefined8 *)(uVar7 + 0x18) = 0;
      if (uVar8 != 0) {
        FUN_710392eb40(uVar8);
      }
      FUN_710392eb40(uVar7);
    }
  }
  else {
    plVar6 = (long *)FUN_71037964b0(lVar22,0x710436c90a);
    if (plVar6 == (long *)0x0) {
LAB_7101e0eff8:
      plVar6 = (long *)FUN_71037964b0(lVar22,0x710436c90a);
      if (plVar6 != (long *)0x0) {
        (**(code **)(*plVar6 + 0x1a0))(0);
      }
      goto LAB_7101e0f01c;
    }
    uVar7 = (**(code **)(*plVar6 + 0x138))();
    if ((uVar7 & 1) != 0) {
      lVar22 = *(long *)(local_f0 + 8);
      if (lVar22 == 0) goto LAB_7101e0f01c;
      goto LAB_7101e0eff8;
    }
  }
  local_f8 = &PTR_FUN_710523d988;
  local_f0 = 0;
joined_r0x007101e100c4:
  if (uVar9 != 0) {
    uVar7 = *(ulong *)(uVar9 + 0x18);
    *(undefined ***)(uVar9 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar9 + 0x18) = 0;
    if (uVar7 != 0) {
      FUN_710392eb40(uVar7);
    }
    FUN_710392eb40(uVar9);
  }
  return;
}

