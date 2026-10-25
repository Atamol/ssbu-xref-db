// addr:      7101a613c0
// offset:    0x1a613c0
// name:      FUN_7101a613c0
// mangled:   
// signature: undefined __cdecl FUN_7101a613c0(long param_1, undefined8 param_2, long * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_7101a613c0(long param_1,undefined8 param_2,long ****param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  char *pcVar2;
  int iVar3;
  int iVar4;
  char cVar5;
  bool bVar6;
  undefined **ppuVar7;
  byte bVar8;
  uint uVar9;
  long *plVar10;
  ulong uVar11;
  int iVar12;
  byte ****ppppbVar13;
  int iVar14;
  long lVar15;
  ulong uVar16;
  int *piVar17;
  long lVar18;
  long lVar19;
  undefined1 auVar20 [16];
  undefined4 local_220 [2];
  undefined **local_218;
  long local_210;
  undefined8 local_208;
  undefined1 local_200;
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  undefined8 local_1e8;
  undefined4 local_1e0 [2];
  undefined **local_1d8;
  long local_1d0;
  undefined8 local_1c8;
  undefined1 local_1c0;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  undefined8 local_1a8;
  undefined4 local_1a0 [2];
  undefined **local_198;
  long local_190;
  undefined8 local_188;
  undefined1 local_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined4 local_160 [2];
  undefined **local_158;
  long local_150;
  undefined8 local_148;
  undefined1 local_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined4 local_120 [2];
  undefined **local_118;
  long local_110;
  undefined8 local_108;
  undefined1 local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined4 local_e0 [4];
  long local_d0;
  int local_c8;
  undefined **local_a0;
  ulong local_98;
  undefined **local_90;
  undefined **local_88;
  long local_80;
  undefined8 local_78;
  undefined1 local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  
  if (*(int *)(param_1 + 0x134) == 0) {
    if (*(char *)(param_1 + 0x280) != '\0') {
      lVar18 = *(long *)(param_1 + 0x278);
      if (*(char *)(lVar18 + 0x90) != '\0') {
        *(undefined4 *)(lVar18 + 0xa0) = *(undefined4 *)(lVar18 + 0xa4);
        if (*(long *)(lVar18 + 0x88) != 0) {
          FUN_710373b540(*(long *)(lVar18 + 0x88),0);
          uVar16 = *(ulong *)(lVar18 + 0x88);
          *(undefined8 *)(lVar18 + 0x88) = 0;
          if (uVar16 != 0) {
            *(undefined ***)(uVar16 + 8) = &PTR_FUN_7104f73d50;
            if (((*(long *)(uVar16 + 0x10) != 0) && (DAT_7106dd53a8 == '\x01')) &&
               (*(int *)(uVar16 + 0x18) == DAT_7106dd53ac)) {
              piVar17 = (int *)(*(long *)(uVar16 + 0x10) + 0x38);
              do {
                cVar5 = '\x01';
                bVar6 = (bool)ExclusiveMonitorPass(piVar17,0x10);
                if (bVar6) {
                  *piVar17 = *piVar17 + -1;
                  cVar5 = ExclusiveMonitorsStatus();
                }
              } while (cVar5 != '\0');
            }
            *(undefined8 *)(uVar16 + 0x10) = 0;
            *(undefined1 *)(uVar16 + 0x20) = 0;
            FUN_710392eb40(uVar16);
          }
        }
      }
      FUN_7103778300(0x3f800000,*(long *)(**(long **)(param_1 + 0x148) + 0x10),0x71043bede9);
      FUN_7103778300(0x3f800000,*(long *)(**(long **)(param_1 + 0x148) + 0x10),0x7104307f9d);
      *(undefined1 *)(param_1 + 0x280) = 0;
    }
    lVar15 = *(long *)(param_1 + 0x208);
    for (lVar18 = *(long *)(param_1 + 0x200); lVar18 != lVar15; lVar18 = lVar18 + 0x48) {
      if (*(char *)(lVar18 + 0x2b) != '\0') {
        *(undefined1 *)(lVar18 + 0x2b) = 0;
      }
    }
    *(undefined8 *)(param_1 + 0x268) = 0;
    FUN_710377a310(param_1 + 0x1e0,1);
    FUN_710377a310(param_1 + 0x1f0,1);
    FUN_7103778300(0x3f800000,*(long *)(**(long **)(param_1 + 0x148) + 0x10),0x7104432abf);
    FUN_710377cc80(*(long *)(param_1 + 0x158),1);
    uVar16 = (**(code **)(**(long **)(param_1 + 0x198) + 0x78))();
    if ((uVar16 & 1) != 0) {
      (**(code **)(**(long **)(param_1 + 0x198) + 0x70))(*(long **)(param_1 + 0x198),0);
      (**(code **)(**(long **)(param_1 + 0x158) + 0x70))(*(long **)(param_1 + 0x158),1);
    }
    FUN_7103771d60(&local_90,*(long *)(param_1 + 0x1a0),(long ****)0x0,param_4,param_5,param_6,
                   param_7,param_8);
    ppuVar7 = local_88;
    plVar10 = (long *)*local_88;
    if (plVar10 != (long *)0x0) {
      uVar9 = 1;
      (**(code **)(*plVar10 + 0x208))(plVar10,1);
      uVar16 = (**(code **)(*plVar10 + 0x200))(plVar10);
      if ((uVar16 & 1) != 0) {
        uVar9 = (**(code **)(*plVar10 + 0x210))(plVar10);
        uVar9 = uVar9 ^ 1;
      }
      (**(code **)(*plVar10 + 0x388))(plVar10,uVar9 & 1,0);
    }
    local_90 = &PTR_FUN_710523d9c8;
    local_88 = (undefined **)0x0;
    if (ppuVar7 != (undefined **)0x0) {
      FUN_710392eb40((ulong)ppuVar7);
    }
    FUN_7103771d60(&local_90,*(long *)(param_1 + 0x1a0),(long ****)0x1,param_4,param_5,param_6,
                   param_7,param_8);
    ppuVar7 = local_88;
    plVar10 = (long *)*local_88;
    if (plVar10 != (long *)0x0) {
      uVar9 = 1;
      (**(code **)(*plVar10 + 0x208))(plVar10,1);
      uVar16 = (**(code **)(*plVar10 + 0x200))(plVar10);
      if ((uVar16 & 1) != 0) {
        uVar9 = (**(code **)(*plVar10 + 0x210))(plVar10);
        uVar9 = uVar9 ^ 1;
      }
      (**(code **)(*plVar10 + 0x388))(plVar10,uVar9 & 1,0);
    }
    local_90 = &PTR_FUN_710523d9c8;
    local_88 = (undefined **)0x0;
    if (ppuVar7 != (undefined **)0x0) {
      FUN_710392eb40((ulong)ppuVar7);
    }
    FUN_7103771d60(&local_90,*(long *)(param_1 + 0x1a0),(long ****)0x2,param_4,param_5,param_6,
                   param_7,param_8);
    ppuVar7 = local_88;
    plVar10 = (long *)*local_88;
    if (plVar10 != (long *)0x0) {
      (**(code **)(*plVar10 + 0x208))(plVar10,0);
      uVar16 = (**(code **)(*plVar10 + 0x200))(plVar10);
      if ((uVar16 & 1) == 0) {
        uVar9 = 1;
      }
      else {
        uVar9 = (**(code **)(*plVar10 + 0x210))(plVar10);
        uVar9 = uVar9 ^ 1;
      }
      (**(code **)(*plVar10 + 0x388))(plVar10,uVar9 & 1,0);
    }
    local_90 = &PTR_FUN_710523d9c8;
    local_88 = (undefined **)0x0;
    if (ppuVar7 != (undefined **)0x0) {
      FUN_710392eb40((ulong)ppuVar7);
    }
    param_3 = (long ****)0x3;
    FUN_7103771d60(&local_90,*(long *)(param_1 + 0x1a0),(long ****)0x3,param_4,param_5,param_6,
                   param_7,param_8);
    ppuVar7 = local_88;
    plVar10 = (long *)*local_88;
    if (plVar10 != (long *)0x0) {
      (**(code **)(*plVar10 + 0x208))(plVar10,0);
      uVar16 = (**(code **)(*plVar10 + 0x200))(plVar10);
      if ((uVar16 & 1) == 0) {
        uVar9 = 1;
      }
      else {
        uVar9 = (**(code **)(*plVar10 + 0x210))(plVar10);
        uVar9 = uVar9 ^ 1;
      }
      param_3 = (long ****)0x0;
      (**(code **)(*plVar10 + 0x388))(plVar10,uVar9 & 1);
    }
    local_90 = &PTR_FUN_710523d9c8;
    local_88 = (undefined **)0x0;
    if (ppuVar7 != (undefined **)0x0) {
      FUN_710392eb40((ulong)ppuVar7);
    }
  }
  puVar1 = (undefined8 *)(param_1 + 0x148);
  lVar18 = **(long **)*puVar1;
  if ((*(char *)(*(long *)(lVar18 + 0x600) + 0x4aa) != '\0') &&
     ((*(byte *)(*(long *)(lVar18 + 0x600) + 0x1b4) >> 1 & 1) != 0)) {
    param_3 = (long ****)0x0;
    FUN_7103771be0((long *)(param_1 + 0x1a0),0,0);
  }
  if (*(int *)(*(long *)(param_1 + 0x1a0) + 0x25c) == 0) {
    if (*(char *)(param_1 + 0x280) != '\x01') {
      lVar18 = *(long *)(param_1 + 0x278);
      if (*(char *)(lVar18 + 0x90) != '\0') {
        *(undefined4 *)(lVar18 + 0xa0) = *(undefined4 *)(lVar18 + 0xa4);
        if (*(long *)(lVar18 + 0x88) != 0) {
          FUN_710373b540(*(long *)(lVar18 + 0x88),0);
          uVar16 = *(ulong *)(lVar18 + 0x88);
          *(undefined8 *)(lVar18 + 0x88) = 0;
          if (uVar16 != 0) {
            *(undefined ***)(uVar16 + 8) = &PTR_FUN_7104f73d50;
            if (((*(long *)(uVar16 + 0x10) != 0) && (DAT_7106dd53a8 == '\x01')) &&
               (*(int *)(uVar16 + 0x18) == DAT_7106dd53ac)) {
              piVar17 = (int *)(*(long *)(uVar16 + 0x10) + 0x38);
              do {
                cVar5 = '\x01';
                bVar6 = (bool)ExclusiveMonitorPass(piVar17,0x10);
                if (bVar6) {
                  *piVar17 = *piVar17 + -1;
                  cVar5 = ExclusiveMonitorsStatus();
                }
              } while (cVar5 != '\0');
            }
            *(undefined8 *)(uVar16 + 0x10) = 0;
            *(undefined1 *)(uVar16 + 0x20) = 0;
            FUN_710392eb40(uVar16);
          }
        }
      }
      FUN_7103778300(0x3f800000,*(long *)(*(long *)*puVar1 + 0x10),0x7104401d24);
      FUN_7103778300(0x3f800000,*(long *)(*(long *)*puVar1 + 0x10),0x7104443059);
      *(undefined1 *)(param_1 + 0x280) = 1;
    }
    if (*(uint *)(param_1 + 300) < 0x13) {
      *(undefined4 *)(param_1 + (long)(int)*(uint *)(param_1 + 300) * 4 + 0xe0) = 4;
      (**(code **)(**(long **)(param_1 + 0x198) + 0x70))(*(long **)(param_1 + 0x198),0);
      if (*(char *)(*(long *)(DAT_710532f8d0 + 8) + 0x191) != '\0') {
        return;
      }
      uVar16 = FUN_7103313f20(*(long *)(DAT_710532f8d0 + 8),0x1206bb3247,(long ****)&DAT_00000004,
                              param_4,param_5,param_6,param_7,param_8);
      if ((uVar16 & 1) == 0) {
        return;
      }
      FUN_71024076d0(local_e0,0x1206bb3247);
      if (local_d0 == 0) {
        return;
      }
      if (DAT_7106dd53a8 != '\x01') {
        return;
      }
      if (local_c8 != DAT_7106dd53ac) {
        return;
      }
      piVar17 = (int *)(local_d0 + 0x38);
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar17,0x10);
        if (bVar6) {
          *piVar17 = *piVar17 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      return;
    }
    goto LAB_7101a622cc;
  }
  if ((*(char *)(*(long *)(lVar18 + 0x600) + 0x4aa) != '\0') &&
     ((*(byte *)(*(long *)(lVar18 + 0x600) + 0x1b0) >> 1 & 1) != 0)) {
    param_3 = (long ****)0x1;
    FUN_7103771be0((long *)(param_1 + 0x1a0),1,1);
  }
  plVar10 = (long *)(param_1 + 0x158);
  auVar20 = (**(code **)(**(long **)(param_1 + 0x158) + 0x78))();
  if ((((auVar20._0_8_ & 1) == 0) || (*(int *)(*(long *)(param_1 + 0x1a0) + 0x25c) != 1)) ||
     (*(int *)(param_1 + 0x260) == 0)) {
    if ((*(char *)(*plVar10 + 0x316) == '\0') &&
       (*(char *)(*(long *)(param_1 + 400) + 0x280) == '\0')) {
      if ((*(char *)(*(long *)(lVar18 + 0x600) + 0x4aa) != '\0') &&
         ((*(byte *)(*(long *)(lVar18 + 0x600) + 0x1bc) >> 1 & 1) != 0)) {
        bVar8 = (**(code **)(*(long *)*plVar10 + 0x78))();
        *(byte *)(param_1 + 0x283) = bVar8 & 1;
        (**(code **)(**(long **)(param_1 + 400) + 0x70))(*(long **)(param_1 + 400),1);
        FUN_7103771be0((long *)(param_1 + 400),0,0);
      }
    }
    else {
      if ((*(char *)(*(long *)(DAT_710532f8d0 + 8) + 0x191) == '\0') &&
         (uVar16 = FUN_7103313f20(*(long *)(DAT_710532f8d0 + 8),0x1053dffe8c,
                                  (long ****)&DAT_00000004,param_4,param_5,param_6,param_7,param_8),
         (uVar16 & 1) != 0)) {
        FUN_71024076d0(local_120,0x1053dffe8c);
        if (((local_110 != 0) && (DAT_7106dd53a8 == '\x01')) && ((int)local_108 == DAT_7106dd53ac))
        {
          piVar17 = (int *)(local_110 + 0x38);
          do {
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(piVar17,0x10);
            if (bVar6) {
              *piVar17 = *piVar17 + -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
        }
      }
      else {
        local_108 = 0x87650000000000;
        local_f8 = 0xffffffffffffffff;
        uStack_f0 = 0;
        local_120[0] = 0;
        local_e8 = 0;
      }
      local_118 = &PTR_FUN_7104f73d50;
      local_110 = 0;
      local_100 = 0;
      *(undefined4 *)(param_1 + 0x164) = 1;
    }
  }
  else {
    lVar15 = *(long *)(param_1 + 0x158);
    iVar14 = *(int *)(lVar15 + 0x2a4);
    iVar12 = *(int *)(lVar15 + 0x2c8);
    if ((iVar12 < 0) || (*(int *)(lVar15 + 0x2c0) <= iVar12)) {
      FUN_7103776290(&local_a0,auVar20._8_8_,param_3,param_4,param_5,param_6,param_7,param_8);
    }
    else {
      FUN_7103776390(&local_a0,
                     (undefined8 *)(*(long *)(*(long *)(lVar15 + 0x168) + (long)iVar12 * 8) + 8),
                     param_3,param_4,param_5,param_6,param_7,param_8);
    }
    lVar19 = (long)iVar14 * 0x48;
    lVar15 = *(long *)(param_1 + 0x200) + lVar19;
    *(byte *)(lVar15 + 0x29) = *(byte *)(lVar15 + 0x29) ^ 1;
    pcVar2 = "favorite_off";
    if (*(char *)(*(long *)(param_1 + 0x200) + lVar19 + 0x29) != '\0') {
      pcVar2 = "favorite_on";
    }
    FUN_7103778300(0x3f800000,local_98,(long)pcVar2);
    lVar15 = *(long *)(DAT_710532f8d0 + 8);
    uVar16 = 6;
    if (*(char *)(*(long *)(param_1 + 0x200) + lVar19 + 0x29) == '\0') {
      uVar16 = 7;
    }
    if (uVar16 < (ulong)(*(long *)(lVar15 + 0x48) - *(long *)(lVar15 + 0x40) >> 3)) {
      uVar16 = *(ulong *)(*(long *)(lVar15 + 0x40) + uVar16 * 8);
      if (*(char *)(lVar15 + 0x191) != '\0') goto LAB_7101a61f5c;
LAB_7101a61eec:
      uVar11 = FUN_7103313f20(lVar15,uVar16,(long ****)&DAT_00000004,param_4,param_5,param_6,param_7
                              ,param_8);
      if ((uVar11 & 1) == 0) goto LAB_7101a61f5c;
      FUN_71024076d0((undefined4 *)&local_90,uVar16);
      if (((local_80 != 0) && (DAT_7106dd53a8 == '\x01')) && ((int)local_78 == DAT_7106dd53ac)) {
        piVar17 = (int *)(local_80 + 0x38);
        do {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(piVar17,0x10);
          if (bVar6) {
            *piVar17 = *piVar17 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
      }
    }
    else {
      uVar16 = 0;
      if (*(char *)(lVar15 + 0x191) == '\0') goto LAB_7101a61eec;
LAB_7101a61f5c:
      local_70 = 0;
      local_78 = 0x87650000000000;
      local_68 = 0xffffffffffffffff;
      uStack_60 = 0;
      local_90 = (undefined **)((ulong)local_90 & 0xffffffff00000000);
      local_58 = 0;
    }
    uVar16 = local_98;
    local_88 = &PTR_FUN_7104f73d50;
    local_80 = 0;
    piVar17 = (int *)(*(long *)(param_1 + 0x200) + lVar19);
    *(undefined1 *)
     (*(long *)(**(long **)(*DAT_7105314510 + 0x68) + 8) + (long)*piVar17 * 0x30 + 0x515b) =
         *(undefined1 *)((long)piVar17 + 0x29);
    iVar14 = -1;
    if (*(char *)(*(long *)(param_1 + 0x200) + lVar19 + 0x29) == '\0') {
      iVar14 = 1;
    }
    *(int *)(param_1 + 0x270) = iVar14 + *(int *)(param_1 + 0x270);
    local_a0 = &PTR_FUN_710523d988;
    local_98 = 0;
    if (uVar16 != 0) {
      uVar11 = *(ulong *)(uVar16 + 0x18);
      *(undefined ***)(uVar16 + 0x10) = &PTR_FUN_710523d9a8;
      *(undefined8 *)(uVar16 + 0x18) = 0;
      if (uVar11 != 0) {
        FUN_710392eb40(uVar11);
      }
      FUN_710392eb40(uVar16);
    }
  }
  uVar16 = (**(code **)(*(long *)*plVar10 + 0x78))();
  if ((uVar16 & 1) == 0) {
    uVar16 = (**(code **)(**(long **)(param_1 + 400) + 0x78))();
    if (((uVar16 & 1) == 0) ||
       (lVar18 = *(long *)(lVar18 + 0x600), *(char *)(lVar18 + 0x4aa) == '\0')) goto LAB_7101a6227c;
    if ((*(byte *)(lVar18 + 0x19c) >> 1 & 1) == 0) {
      if ((*(byte *)(lVar18 + 0x198) >> 1 & 1) == 0) goto LAB_7101a6227c;
      (**(code **)(**(long **)(param_1 + 0x158) + 0x70))(*(long **)(param_1 + 0x158),1);
      (**(code **)(**(long **)(param_1 + 400) + 0x70))(*(long **)(param_1 + 400),0);
      iVar14 = (int)(*(long *)(param_1 + 0x208) - *(long *)(param_1 + 0x200) >> 3) * 0x38e38e39;
      if (iVar14 == 0) {
        iVar12 = -1;
      }
      else {
        iVar3 = *(int *)(*plVar10 + 0x28c);
        iVar4 = 0;
        if (iVar3 != 0) {
          iVar4 = (iVar14 + -1) / iVar3;
        }
        iVar12 = iVar14 + -1;
        iVar14 = (iVar14 + -1) - iVar4 * iVar3;
        if (0 < iVar14) {
          iVar12 = iVar12 - (iVar14 + -1);
        }
      }
      ppppbVar13 = (byte ****)0x0;
      FUN_7103783c10(plVar10,iVar12,1,0,param_5,param_6,param_7,param_8);
      lVar18 = *(long *)(DAT_710532f8d0 + 8);
      if ((ulong)(*(long *)(lVar18 + 0x48) - *(long *)(lVar18 + 0x40) >> 3) < 2) {
        uVar16 = 0;
        if (*(char *)(lVar18 + 0x191) == '\0') goto LAB_7101a621d8;
LAB_7101a62248:
        local_208 = 0x87650000000000;
        local_1f8 = 0xffffffffffffffff;
        uStack_1f0 = 0;
        local_220[0] = 0;
        local_1e8 = 0;
      }
      else {
        uVar16 = *(ulong *)(*(long *)(lVar18 + 0x40) + 8);
        if (*(char *)(lVar18 + 0x191) != '\0') goto LAB_7101a62248;
LAB_7101a621d8:
        uVar11 = FUN_7103313f20(lVar18,uVar16,(long ****)&DAT_00000004,ppppbVar13,param_5,param_6,
                                param_7,param_8);
        if ((uVar11 & 1) == 0) goto LAB_7101a62248;
        FUN_71024076d0(local_220,uVar16);
        if (((local_210 != 0) && (DAT_7106dd53a8 == '\x01')) && ((int)local_208 == DAT_7106dd53ac))
        {
          piVar17 = (int *)(local_210 + 0x38);
          do {
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(piVar17,0x10);
            if (bVar6) {
              *piVar17 = *piVar17 + -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
        }
      }
      local_218 = &PTR_FUN_7104f73d50;
      local_210 = 0;
      local_200 = 0;
      goto LAB_7101a6227c;
    }
    (**(code **)(**(long **)(param_1 + 0x158) + 0x70))(*(long **)(param_1 + 0x158),1);
    uVar16 = (*(long *)(param_1 + 0x208) - *(long *)(param_1 + 0x200) >> 3) * -0x71c71c71c71c71c7;
    iVar14 = (int)uVar16 + -1;
    if (1 < uVar16) {
      iVar14 = 1;
    }
    ppppbVar13 = (byte ****)0x0;
    FUN_7103783c10(plVar10,iVar14,1,0,param_5,param_6,param_7,param_8);
    (**(code **)(**(long **)(param_1 + 400) + 0x70))(*(long **)(param_1 + 400),0);
    lVar18 = *(long *)(DAT_710532f8d0 + 8);
    if ((ulong)(*(long *)(lVar18 + 0x48) - *(long *)(lVar18 + 0x40) >> 3) < 2) {
      uVar16 = 0;
      if (*(char *)(lVar18 + 0x191) == '\0') goto LAB_7101a6202c;
LAB_7101a6209c:
      local_1c8 = 0x87650000000000;
      local_1b8 = 0xffffffffffffffff;
      uStack_1b0 = 0;
      local_1e0[0] = 0;
      local_1a8 = 0;
    }
    else {
      uVar16 = *(ulong *)(*(long *)(lVar18 + 0x40) + 8);
      if (*(char *)(lVar18 + 0x191) != '\0') goto LAB_7101a6209c;
LAB_7101a6202c:
      uVar11 = FUN_7103313f20(lVar18,uVar16,(long ****)&DAT_00000004,ppppbVar13,param_5,param_6,
                              param_7,param_8);
      if ((uVar11 & 1) == 0) goto LAB_7101a6209c;
      FUN_71024076d0(local_1e0,uVar16);
      if (((local_1d0 != 0) && (DAT_7106dd53a8 == '\x01')) && ((int)local_1c8 == DAT_7106dd53ac)) {
        piVar17 = (int *)(local_1d0 + 0x38);
        do {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(piVar17,0x10);
          if (bVar6) {
            *piVar17 = *piVar17 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
      }
    }
    local_1d8 = &PTR_FUN_7104f73d50;
    local_1d0 = 0;
    local_1c0 = 0;
  }
  else {
    plVar10 = (long *)*plVar10;
    if ((int)plVar10[0x57] == 2) {
      if ((*(char *)(*(long *)(lVar18 + 0x600) + 0x4aa) == '\0') ||
         ((*(byte *)(*(long *)(lVar18 + 0x600) + 0x19c) >> 1 & 1) == 0)) goto LAB_7101a6227c;
      (**(code **)(*plVar10 + 0x70))(plVar10,0);
      (**(code **)(**(long **)(param_1 + 400) + 0x70))(*(long **)(param_1 + 400),1);
      lVar18 = *(long *)(DAT_710532f8d0 + 8);
      if ((ulong)(*(long *)(lVar18 + 0x48) - *(long *)(lVar18 + 0x40) >> 3) < 2) {
        uVar16 = 0;
        if (*(char *)(lVar18 + 0x191) == '\0') goto LAB_7101a620e0;
LAB_7101a62150:
        local_188 = 0x87650000000000;
        local_178 = 0xffffffffffffffff;
        uStack_170 = 0;
        local_1a0[0] = 0;
        local_168 = 0;
      }
      else {
        uVar16 = *(ulong *)(*(long *)(lVar18 + 0x40) + 8);
        if (*(char *)(lVar18 + 0x191) != '\0') goto LAB_7101a62150;
LAB_7101a620e0:
        uVar11 = FUN_7103313f20(lVar18,uVar16,(long ****)&DAT_00000004,param_4,param_5,param_6,
                                param_7,param_8);
        if ((uVar11 & 1) == 0) goto LAB_7101a62150;
        FUN_71024076d0(local_1a0,uVar16);
        if (((local_190 != 0) && (DAT_7106dd53a8 == '\x01')) && ((int)local_188 == DAT_7106dd53ac))
        {
          piVar17 = (int *)(local_190 + 0x38);
          do {
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(piVar17,0x10);
            if (bVar6) {
              *piVar17 = *piVar17 + -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
        }
      }
      local_198 = &PTR_FUN_7104f73d50;
      local_190 = 0;
      local_180 = 0;
    }
    else {
      if ((int)plVar10[0x57] != 1) goto LAB_7101a6227c;
      (**(code **)(*plVar10 + 0x70))(plVar10,0);
      (**(code **)(**(long **)(param_1 + 400) + 0x70))(*(long **)(param_1 + 400),1);
      lVar18 = *(long *)(DAT_710532f8d0 + 8);
      if ((ulong)(*(long *)(lVar18 + 0x48) - *(long *)(lVar18 + 0x40) >> 3) < 2) {
        uVar16 = 0;
        if (*(char *)(lVar18 + 0x191) == '\0') goto LAB_7101a61da0;
LAB_7101a61e10:
        local_148 = 0x87650000000000;
        local_138 = 0xffffffffffffffff;
        uStack_130 = 0;
        local_160[0] = 0;
        local_128 = 0;
      }
      else {
        uVar16 = *(ulong *)(*(long *)(lVar18 + 0x40) + 8);
        if (*(char *)(lVar18 + 0x191) != '\0') goto LAB_7101a61e10;
LAB_7101a61da0:
        uVar11 = FUN_7103313f20(lVar18,uVar16,(long ****)&DAT_00000004,param_4,param_5,param_6,
                                param_7,param_8);
        if ((uVar11 & 1) == 0) goto LAB_7101a61e10;
        FUN_71024076d0(local_160,uVar16);
        if (((local_150 != 0) && (DAT_7106dd53a8 == '\x01')) && ((int)local_148 == DAT_7106dd53ac))
        {
          piVar17 = (int *)(local_150 + 0x38);
          do {
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(piVar17,0x10);
            if (bVar6) {
              *piVar17 = *piVar17 + -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
        }
      }
      local_158 = &PTR_FUN_7104f73d50;
      local_150 = 0;
      local_140 = 0;
    }
  }
LAB_7101a6227c:
  if ((*(int *)(*(long *)(param_1 + 400) + 0x25c) == 0) && (*(int *)(param_1 + 300) < 0x12)) {
    uVar9 = *(int *)(param_1 + 300) + 1;
    *(uint *)(param_1 + 300) = uVar9;
    if (0x12 < uVar9) {
LAB_7101a622cc:
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(undefined4 *)(param_1 + (long)(int)uVar9 * 4 + 0xe0) = 5;
  }
  return;
}

