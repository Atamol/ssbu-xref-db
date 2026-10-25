// addr:      7101ac1590
// offset:    0x1ac1590
// name:      FUN_7101ac1590
// mangled:   
// signature: undefined __cdecl FUN_7101ac1590(long param_1, long param_2, long * * * * param_3, byte * * * * param_4, long * * * * param_5, byte * * * * param_6, long * * param_7, byte * param_8)


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7101ac1590(long param_1,long param_2,long ****param_3,byte ****param_4,long ****param_5,
                   byte ****param_6,long **param_7,byte *param_8)

{
  uint uVar1;
  uint uVar2;
  char cVar3;
  bool bVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined **ppuVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  ulong uVar14;
  long lVar15;
  ulong uVar16;
  long *plVar17;
  long *plVar18;
  long *plVar19;
  long *plVar20;
  char *pcVar21;
  long ****pppplVar22;
  int *piVar23;
  undefined *puVar24;
  long lVar25;
  undefined4 local_330 [2];
  undefined **local_328;
  long local_320;
  undefined8 local_318;
  undefined1 local_310;
  undefined8 local_308;
  undefined8 uStack_300;
  undefined8 local_2f8;
  long ***local_2f0;
  undefined **local_2e8;
  long local_2e0;
  undefined8 local_2d8;
  ulong local_2d0;
  undefined8 local_2c8;
  undefined8 local_2c0;
  undefined8 local_2b8;
  undefined8 local_2b0;
  undefined8 uStack_2a8;
  undefined8 local_2a0;
  undefined6 uStack_298;
  undefined2 local_292;
  undefined6 uStack_290;
  undefined8 local_288;
  undefined8 local_280;
  undefined8 uStack_278;
  undefined8 local_270;
  undefined8 uStack_268;
  undefined8 local_260;
  undefined8 uStack_258;
  undefined8 local_250;
  undefined8 uStack_248;
  undefined8 local_240;
  undefined8 uStack_238;
  undefined8 local_230;
  undefined8 uStack_228;
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
  undefined8 local_1c0;
  ulong local_1b8;
  undefined8 uStack_1b0;
  undefined8 local_1a8;
  undefined6 uStack_1a0;
  undefined2 local_19a;
  undefined6 uStack_198;
  undefined4 local_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 local_130;
  undefined8 local_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined4 local_e8 [34];
  
  uVar14 = (**(code **)(**(long **)(param_1 + 0x268) + 0x68))();
  if ((uVar14 & 1) == 0) {
    (**(code **)(**(long **)(param_1 + 0x260) + 0x70))(*(long **)(param_1 + 0x260),1);
    (**(code **)(**(long **)(param_1 + 0x260) + 0x60))(*(long **)(param_1 + 0x260),1);
    (**(code **)(**(long **)(param_1 + 0x268) + 0x60))(*(long **)(param_1 + 0x268),1);
    (**(code **)(**(long **)(param_1 + 0x270) + 0x60))(*(long **)(param_1 + 0x270),1);
    (**(code **)(**(long **)(param_1 + 0x278) + 0x60))(*(long **)(param_1 + 0x278),1);
    (**(code **)(**(long **)(param_1 + 0x280) + 0x60))(*(long **)(param_1 + 0x280),1);
    (**(code **)(**(long **)(param_1 + 0x288) + 0x60))(*(long **)(param_1 + 0x288),1);
  }
  plVar20 = (long *)(param_1 + 0x260);
  if (*(int *)(param_1 + 0x20c) != 0) {
    uVar14 = (**(code **)(*(long *)*plVar20 + 0x80))();
    if ((uVar14 & 1) == 0) {
      uVar14 = (**(code **)(**(long **)(param_1 + 0x268) + 0x80))();
      if ((uVar14 & 1) == 0) goto LAB_7101ac1868;
      lVar15 = *(long *)(DAT_710532f8d0 + 8);
      if ((ulong)(*(long *)(lVar15 + 0x48) - *(long *)(lVar15 + 0x40) >> 3) < 2) {
        uVar14 = 0;
        if (*(char *)(lVar15 + 0x191) == '\0') goto LAB_7101ac17b0;
LAB_7101ac1820:
        local_2d0 = local_2d0 & 0xffffffffffffff00;
        local_2d8 = 0x87650000000000;
        local_2c8 = 0xffffffffffffffff;
        local_2c0 = 0;
        local_2f0 = (long ***)((ulong)local_2f0 & 0xffffffff00000000);
        local_2b8 = 0;
      }
      else {
        uVar14 = *(ulong *)(*(long *)(lVar15 + 0x40) + 8);
        if (*(char *)(lVar15 + 0x191) != '\0') goto LAB_7101ac1820;
LAB_7101ac17b0:
        param_3 = (long ****)&DAT_00000004;
        uVar16 = FUN_7103313f20(lVar15,uVar14,(long ****)&DAT_00000004,param_4,param_5,param_6,
                                param_7,param_8);
        if ((uVar16 & 1) == 0) goto LAB_7101ac1820;
        FUN_71024076d0((undefined4 *)&local_2f0,uVar14);
        if (((local_2e0 != 0) && (DAT_7106dd53a8 == '\x01')) && ((int)local_2d8 == DAT_7106dd53ac))
        {
          piVar23 = (int *)(local_2e0 + 0x38);
          do {
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(piVar23,0x10);
            if (bVar4) {
              *piVar23 = *piVar23 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
        }
      }
      plVar17 = (long *)*plVar20;
    }
    else {
      lVar15 = *(long *)(DAT_710532f8d0 + 8);
      if ((ulong)(*(long *)(lVar15 + 0x48) - *(long *)(lVar15 + 0x40) >> 3) < 2) {
        uVar14 = 0;
        if (*(char *)(lVar15 + 0x191) == '\0') goto LAB_7101ac16f8;
LAB_7101ac1768:
        local_2d0 = local_2d0 & 0xffffffffffffff00;
        local_2d8 = 0x87650000000000;
        local_2c8 = 0xffffffffffffffff;
        local_2c0 = 0;
        local_2f0 = (long ***)((ulong)local_2f0 & 0xffffffff00000000);
        local_2b8 = 0;
      }
      else {
        uVar14 = *(ulong *)(*(long *)(lVar15 + 0x40) + 8);
        if (*(char *)(lVar15 + 0x191) != '\0') goto LAB_7101ac1768;
LAB_7101ac16f8:
        param_3 = (long ****)&DAT_00000004;
        uVar16 = FUN_7103313f20(lVar15,uVar14,(long ****)&DAT_00000004,param_4,param_5,param_6,
                                param_7,param_8);
        if ((uVar16 & 1) == 0) goto LAB_7101ac1768;
        FUN_71024076d0((undefined4 *)&local_2f0,uVar14);
        if (((local_2e0 != 0) && (DAT_7106dd53a8 == '\x01')) && ((int)local_2d8 == DAT_7106dd53ac))
        {
          piVar23 = (int *)(local_2e0 + 0x38);
          do {
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(piVar23,0x10);
            if (bVar4) {
              *piVar23 = *piVar23 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
        }
      }
      plVar17 = *(long **)(param_1 + 0x268);
    }
    local_2d0 = local_2d0 & 0xffffffffffffff00;
    local_2e0 = 0;
    local_2e8 = &PTR_FUN_7104f73d50;
    (**(code **)(*plVar17 + 0x70))(plVar17,0);
  }
LAB_7101ac1868:
  if ((*(int *)((long)*(long **)(param_1 + 0x260) + 0x254) != *(int *)(param_1 + 0x334)) &&
     (uVar14 = (**(code **)(**(long **)(param_1 + 0x260) + 0x78))(), (uVar14 & 1) != 0)) {
    *(undefined4 *)(param_1 + 0x334) = *(undefined4 *)(*(long *)(param_1 + 0x260) + 0x254);
  }
  uVar14 = (**(code **)(**(long **)(param_1 + 0x270) + 0x78))();
  if (((uVar14 & 1) != 0) &&
     ((*(int *)(*(long *)(param_1 + 0x270) + 0x254) == 0) != (bool)*(char *)(param_1 + 0x32f))) {
    param_3 = (long ****)0x0;
    FUN_7103771be0(plVar20,0,0);
  }
  uVar14 = (**(code **)(**(long **)(param_1 + 0x278) + 0x78))();
  if (((uVar14 & 1) != 0) &&
     ((*(int *)(*(long *)(param_1 + 0x278) + 0x254) == 0) != (bool)*(char *)(param_1 + 0x330))) {
    param_3 = (long ****)0x0;
    FUN_7103771be0(plVar20,1,0);
  }
  uVar14 = (**(code **)(**(long **)(param_1 + 0x280) + 0x78))();
  if (((uVar14 & 1) != 0) &&
     ((*(int *)(*(long *)(param_1 + 0x280) + 0x254) == 0) != (bool)*(char *)(param_1 + 0x331))) {
    param_3 = (long ****)0x0;
    FUN_7103771be0(plVar20,2,0);
  }
  uVar14 = (**(code **)(**(long **)(param_1 + 0x288) + 0x78))();
  if (((uVar14 & 1) != 0) &&
     ((*(int *)(*(long *)(param_1 + 0x288) + 0x254) == 0) != (bool)*(char *)(param_1 + 0x332))) {
    param_3 = (long ****)0x0;
    FUN_7103771be0(plVar20,3,0);
  }
  lVar15 = *(long *)(**(long **)**(undefined8 **)(param_1 + 0x228) + 0x600);
  plVar17 = (long *)(param_1 + 0x268);
  if ((*(char *)(lVar15 + 0x4aa) == '\0') || ((*(byte *)(lVar15 + 0x1bc) >> 1 & 1) == 0)) {
    if (((*(char *)(*(long *)(param_2 + 8) + 0x4aa) == '\0') ||
        ((*(byte *)(*(long *)(param_2 + 8) + 0x1ac) >> 1 & 1) == 0)) &&
       ((*(char *)(*plVar17 + 0x280) == '\0' &&
        (lVar15 = *plVar20, *(char *)(lVar15 + 0x280) == '\0')))) {
      switch(*(undefined4 *)(lVar15 + 0x25c)) {
      case 0:
        param_3 = (long ****)(ulong)(*(char *)(param_1 + 0x32f) == '\0');
        FUN_7101ac4180(param_1,(ulong)*(uint *)(lVar15 + 0x254),param_3,param_4,param_5,param_6,
                       param_7,param_8);
        plVar19 = (long *)FUN_710392e290(0x10,8,param_3,param_4,param_5,param_6,param_7,param_8);
        if (plVar19 == (long *)0x0) {
          if (DAT_7105332f00 != (long *)0x0) {
            local_e8[0] = 0;
            local_2f0 = (long ***)&DAT_00000008;
            param_3 = &local_2f0;
            uVar14 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,local_e8);
            if (((uVar14 & 1) != 0) &&
               (plVar19 = (long *)FUN_710392e290(0x10,8,param_3,param_4,param_5,param_6,param_7,
                                                 param_8), plVar19 != (long *)0x0))
            goto LAB_7101ac1ff0;
          }
          plVar19 = (long *)0x0;
        }
LAB_7101ac1ff0:
        *plVar19 = 0;
        lVar15 = *(long *)(*(long *)(param_1 + 0x298) + 8);
        break;
      case 1:
        param_3 = (long ****)(ulong)(*(char *)(param_1 + 0x330) == '\0');
        FUN_7101ac4180(param_1,(ulong)*(uint *)(lVar15 + 0x254),param_3,param_4,param_5,param_6,
                       param_7,param_8);
        plVar19 = (long *)FUN_710392e290(0x10,8,param_3,param_4,param_5,param_6,param_7,param_8);
        if (plVar19 == (long *)0x0) {
          if (DAT_7105332f00 != (long *)0x0) {
            local_e8[0] = 0;
            local_2f0 = (long ***)&DAT_00000008;
            param_3 = &local_2f0;
            uVar14 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,local_e8);
            if (((uVar14 & 1) != 0) &&
               (plVar19 = (long *)FUN_710392e290(0x10,8,param_3,param_4,param_5,param_6,param_7,
                                                 param_8), plVar19 != (long *)0x0))
            goto LAB_7101ac25b0;
          }
          plVar19 = (long *)0x0;
        }
LAB_7101ac25b0:
        *plVar19 = 0;
        lVar15 = *(long *)(*(long *)(param_1 + 0x2a8) + 8);
        break;
      case 2:
        param_3 = (long ****)(ulong)(*(char *)(param_1 + 0x331) == '\0');
        FUN_7101ac4180(param_1,(ulong)*(uint *)(lVar15 + 0x254),param_3,param_4,param_5,param_6,
                       param_7,param_8);
        plVar19 = (long *)FUN_710392e290(0x10,8,param_3,param_4,param_5,param_6,param_7,param_8);
        if (plVar19 == (long *)0x0) {
          if (DAT_7105332f00 != (long *)0x0) {
            local_e8[0] = 0;
            local_2f0 = (long ***)&DAT_00000008;
            param_3 = &local_2f0;
            uVar14 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,local_e8);
            if (((uVar14 & 1) != 0) &&
               (plVar19 = (long *)FUN_710392e290(0x10,8,param_3,param_4,param_5,param_6,param_7,
                                                 param_8), plVar19 != (long *)0x0))
            goto LAB_7101ac2638;
          }
          plVar19 = (long *)0x0;
        }
LAB_7101ac2638:
        *plVar19 = 0;
        lVar15 = *(long *)(*(long *)(param_1 + 0x2b8) + 8);
        break;
      case 3:
        param_3 = (long ****)(ulong)(*(char *)(param_1 + 0x332) == '\0');
        FUN_7101ac4180(param_1,(ulong)*(uint *)(lVar15 + 0x254),param_3,param_4,param_5,param_6,
                       param_7,param_8);
        plVar19 = (long *)FUN_710392e290(0x10,8,param_3,param_4,param_5,param_6,param_7,param_8);
        if (plVar19 == (long *)0x0) {
          if (DAT_7105332f00 != (long *)0x0) {
            local_e8[0] = 0;
            local_2f0 = (long ***)&DAT_00000008;
            param_3 = &local_2f0;
            uVar14 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,local_e8);
            if (((uVar14 & 1) != 0) &&
               (plVar19 = (long *)FUN_710392e290(0x10,8,param_3,param_4,param_5,param_6,param_7,
                                                 param_8), plVar19 != (long *)0x0))
            goto LAB_7101ac26c0;
          }
          plVar19 = (long *)0x0;
        }
LAB_7101ac26c0:
        *plVar19 = 0;
        lVar15 = *(long *)(*(long *)(param_1 + 0x2c8) + 8);
        break;
      default:
        goto switchD_7101ac1f78_default;
      }
      if ((lVar15 == 0) || (*(long *)(lVar15 + 0x60) == 0)) {
        *plVar19 = 0;
      }
      else {
        plVar18 = (long *)FUN_7103796f20(*(long *)(lVar15 + 0x60),*(long *)(lVar15 + 0x18) + 0xb0);
        *plVar19 = (long)plVar18;
        if (plVar18 != (long *)0x0) {
          (**(code **)(*plVar18 + 0x238))(plVar18,0);
          (**(code **)(*plVar18 + 0x228))(plVar18,0);
          uVar14 = (**(code **)(*plVar18 + 0x200))(plVar18);
          if (((uVar14 & 1) != 0) &&
             (uVar14 = (**(code **)(*plVar18 + 0x210))(plVar18), (uVar14 & 1) != 0)) {
            (**(code **)(*plVar18 + 0x238))(plVar18,1);
            (**(code **)(*plVar18 + 0x3c8))(plVar18);
            (**(code **)(*plVar18 + 0x10))(plVar18);
            (**(code **)(*plVar18 + 0x18))(plVar18);
          }
        }
      }
      FUN_710392eb40((ulong)plVar19);
    }
    else {
      iVar11 = (int)((ulong)((*(long **)(param_1 + 0x300))[1] - **(long **)(param_1 + 0x300)) >> 6)
               * -0x11111111;
      FUN_7103776910(&local_2f0,param_1 + 0x230,(long ****)"set_parts_arrow_l",param_3,param_4,
                     param_5,param_6,param_7,param_8);
      ppuVar7 = local_2e8;
      puVar24 = *local_2e8;
      if (puVar24 != (undefined *)0x0) {
        puVar24[0x58] = puVar24[0x58] & 0xfe | 1 < iVar11;
      }
      local_2f0 = (long ***)&PTR_FUN_710523d9a8;
      local_2e8 = (undefined **)0x0;
      if (ppuVar7 != (undefined **)0x0) {
        FUN_710392eb40((ulong)ppuVar7);
      }
      FUN_7103776910(&local_2f0,param_1 + 0x230,(long ****)"set_parts_arrow_r",param_3,param_4,
                     param_5,param_6,param_7,param_8);
      ppuVar7 = local_2e8;
      lVar15 = (long)*local_2e8;
      if (lVar15 != 0) {
        *(byte *)(lVar15 + 0x58) = *(byte *)(lVar15 + 0x58) & 0xfe | 1 < iVar11;
      }
      local_2f0 = (long ***)&PTR_FUN_710523d9a8;
      local_2e8 = (undefined **)0x0;
      if (ppuVar7 != (undefined **)0x0) {
        FUN_710392eb40((ulong)ppuVar7);
      }
      if (0x12 < *(uint *)(param_1 + 0x204)) goto LAB_7101ac2794;
      *(undefined4 *)(param_1 + (long)(int)*(uint *)(param_1 + 0x204) * 4 + 0x1b8) = 0x12;
    }
  }
  else {
    (**(code **)(*(long *)*plVar20 + 0x70))((long *)*plVar20,0);
    param_3 = (long ****)0x0;
    FUN_7103771be0(plVar17,4,0);
  }
switchD_7101ac1f78_default:
  if (*(int *)(*plVar17 + 0x25c) == 4) {
    local_2e8 = (undefined **)0x0;
    local_2f0 = (long ***)CONCAT44(local_2f0._4_4_,0xffffffff);
    uStack_290 = 0;
    local_288 = 0;
    local_2a0 = 0;
    uStack_298 = 0;
    local_292 = 0;
    local_2b0 = 0;
    uStack_2a8 = 0;
    local_2c0 = 0;
    local_2b8 = 0;
    local_2d0 = 0;
    local_2c8 = 0;
    local_2e0 = 0;
    local_2d8 = 0;
    local_1d0 = 0;
    uStack_1c8 = 0;
    local_1e0 = 0;
    uStack_1d8 = 0;
    local_1f0 = 0;
    uStack_1e8 = 0;
    local_200 = 0;
    uStack_1f8 = 0;
    local_210 = 0;
    uStack_208 = 0;
    local_220 = 0;
    uStack_218 = 0;
    local_230 = 0;
    uStack_228 = 0;
    local_240 = 0;
    uStack_238 = 0;
    local_250 = 0;
    uStack_248 = 0;
    local_260 = 0;
    uStack_258 = 0;
    local_270 = 0;
    uStack_268 = 0;
    local_280 = 0;
    uStack_278 = 0;
    FUN_71004f5770(&local_280);
    local_190 = 0;
    uStack_198 = 0;
    local_1a8 = 0;
    uStack_1a0 = 0;
    local_19a = 0;
    local_1c0 = 0;
    local_f0 = 0;
    local_f8 = 0;
    local_100 = 0;
    local_108 = 0;
    local_110 = 0;
    local_118 = 0;
    local_120 = 0;
    local_128 = 0;
    local_130 = 0;
    local_138 = 0;
    uStack_1b0 = 0;
    local_148 = 0;
    uStack_140 = 0;
    local_158 = 0;
    uStack_150 = 0;
    local_168 = 0;
    uStack_160 = 0;
    local_178 = 0;
    uStack_170 = 0;
    local_188 = 0;
    uStack_180 = 0;
    local_1b8 = (ulong)*(uint *)(param_1 + 0x32f) << 0x20 ^ 0x101010100000000;
    uVar1 = 7500000;
    if (*(char *)(param_1 + 0x332) == '\0') {
      uVar1 = 5000000;
    }
    iVar11 = *(int *)(**(long **)(param_1 + 0x300) + (long)*(int *)(param_1 + 0x2f8) * 0x3c0 + 0x68)
    ;
    if (*(char *)(param_1 + 0x345) == '\0') {
      FUN_71036eb020(*(undefined8 **)(*DAT_710533a080 + 8),0x1e,param_3,param_4,param_5,param_6,
                     param_7,param_8);
      *(undefined1 *)(param_1 + 0x345) = 1;
    }
    uVar2 = uVar1 >> 3;
    nn::album::MovieMakerMovieParameter::MovieMakerMovieParameter
              ((MovieMakerMovieParameter *)local_e8);
    iVar8 = nn::album::MovieMakerMovieParameter::GetAudioBitRate();
    iVar9 = iVar8 + 7;
    if (-1 < iVar8) {
      iVar9 = iVar8;
    }
    iVar9 = nn::album::PrecheckToStartMovieMaker((ulong)(uVar2 * 0x78 + (iVar9 >> 3) * 0x3c));
    bVar4 = iVar9 == 0;
    if (!bVar4) {
      nn::err::ShowError(iVar9);
    }
    iVar9 = iVar11 + 0x1b;
    iVar8 = (iVar11 + 0x57) * uVar2;
    nn::album::MovieMakerMovieParameter::MovieMakerMovieParameter
              ((MovieMakerMovieParameter *)local_e8);
    iVar10 = nn::album::MovieMakerMovieParameter::GetAudioBitRate();
    iVar11 = iVar10 + 7;
    if (-1 < iVar10) {
      iVar11 = iVar10;
    }
    iVar11 = nn::album::PrecheckToStartMovieMaker((ulong)(uint)(iVar8 + (iVar11 >> 3) * iVar9));
    if (iVar11 == 0) {
      nn::album::MovieMakerMovieParameter::MovieMakerMovieParameter
                ((MovieMakerMovieParameter *)local_e8);
      iVar10 = nn::album::MovieMakerMovieParameter::GetAudioBitRate();
      nn::album::MovieMakerMovieParameter::MovieMakerMovieParameter
                ((MovieMakerMovieParameter *)local_e8);
      iVar13 = nn::album::MovieMakerMovieParameter::GetAudioBitRate();
      iVar11 = iVar13 + 7;
      if (-1 < iVar13) {
        iVar11 = iVar13;
      }
      if ((uint)(iVar8 + (iVar11 >> 3) * iVar9) < 0x78400001) {
        iVar11 = 0;
        *(undefined1 *)(param_1 + 0x32e) = 0;
      }
      else {
        uVar14 = (ulong)((iVar10 + uVar1) * 0x3c);
        *(undefined1 *)(param_1 + 0x32e) = 1;
        iVar11 = 0;
        if (uVar14 != 0) {
          iVar11 = (int)(0xe178000000 / uVar14);
        }
      }
    }
    else {
      if (!bVar4) {
        *(bool *)(param_1 + 0x342) = bVar4;
        return;
      }
      iVar8 = 0x3c;
      *(undefined1 *)(param_1 + 0x32e) = 0;
      iVar10 = iVar9;
      do {
        iVar13 = iVar10 - iVar8;
        iVar11 = iVar9;
        if (iVar10 < iVar8) goto LAB_7101ac1e28;
        if (iVar13 < 0) {
          iVar13 = iVar13 + 1;
        }
        iVar11 = iVar8 + (iVar13 >> 1);
        nn::album::MovieMakerMovieParameter::MovieMakerMovieParameter
                  ((MovieMakerMovieParameter *)local_e8);
        iVar12 = nn::album::MovieMakerMovieParameter::GetAudioBitRate();
        iVar13 = iVar12 + 7;
        if (-1 < iVar12) {
          iVar13 = iVar12;
        }
        iVar13 = nn::album::PrecheckToStartMovieMaker
                           ((ulong)((iVar11 + 0x3c) * uVar2 + (iVar13 >> 3) * iVar11));
        if (iVar13 == 0) {
          iVar8 = iVar11 + 5;
          nn::album::MovieMakerMovieParameter::MovieMakerMovieParameter
                    ((MovieMakerMovieParameter *)local_e8);
          iVar12 = nn::album::MovieMakerMovieParameter::GetAudioBitRate();
          iVar13 = iVar12 + 7;
          if (-1 < iVar12) {
            iVar13 = iVar12;
          }
          iVar13 = nn::album::PrecheckToStartMovieMaker
                             ((ulong)((iVar11 + 0x41) * uVar2 + (iVar13 >> 3) * iVar8));
          if (iVar13 != 0) goto LAB_7101ac1e28;
        }
        else {
          iVar10 = iVar11 + -5;
          nn::album::MovieMakerMovieParameter::MovieMakerMovieParameter
                    ((MovieMakerMovieParameter *)local_e8);
          iVar12 = nn::album::MovieMakerMovieParameter::GetAudioBitRate();
          iVar13 = iVar12 + 7;
          if (-1 < iVar12) {
            iVar13 = iVar12;
          }
          iVar13 = nn::album::PrecheckToStartMovieMaker
                             ((ulong)((iVar11 + 0x37) * uVar2 + (iVar13 >> 3) * iVar10));
          iVar11 = iVar10;
          if (iVar13 == 0) goto LAB_7101ac1e28;
        }
        iVar11 = iVar9;
        if (iVar9 <= iVar8) goto LAB_7101ac1e28;
      } while (0x3c < iVar10);
      iVar11 = 0x3c;
LAB_7101ac1e28:
      nn::album::MovieMakerMovieParameter::MovieMakerMovieParameter
                ((MovieMakerMovieParameter *)local_e8);
      iVar9 = nn::album::MovieMakerMovieParameter::GetAudioBitRate();
      uVar14 = (ulong)((iVar9 + uVar1) * 0x3c);
      iVar9 = 0;
      if (uVar14 != 0) {
        iVar9 = (int)(0xe178000000 / uVar14);
      }
      if (iVar9 <= iVar11) {
        iVar11 = iVar9;
      }
      iVar11 = iVar11 + -0x1e;
    }
    *(int *)(param_1 + 0x348) = iVar11;
    *(bool *)(param_1 + 0x342) = bVar4;
    if (!bVar4) {
      return;
    }
    lVar15 = *(long *)(**(long **)**(undefined8 **)(param_1 + 0x228) + 0x600);
    param_3 = (long ****)0x264;
    memset((void *)(lVar15 + 0x198),0,0x264);
    *(undefined8 *)(lVar15 + 0x40c) = 0;
    *(undefined8 *)(lVar15 + 0x424) = 0;
    *(undefined4 *)(lVar15 + 0x480) = 0;
    uVar6 = uRam0000007107459008;
    uVar5 = _ConstantZero;
    *(undefined8 *)(lVar15 + 0x4a0) = 0;
    *(undefined8 *)(lVar15 + 0x468) = uVar6;
    *(undefined8 *)(lVar15 + 0x460) = uVar5;
    *(undefined8 *)(lVar15 + 0x438) = uVar6;
    *(undefined8 *)(lVar15 + 0x430) = uVar5;
    *(undefined8 *)(lVar15 + 0x448) = uVar6;
    *(undefined8 *)(lVar15 + 0x440) = uVar5;
    *(undefined8 *)(lVar15 + 0x458) = uVar6;
    *(undefined8 *)(lVar15 + 0x450) = uVar5;
    *(undefined8 *)(lVar15 + 0x498) = 0;
    if (0x12 < *(uint *)(param_1 + 0x204)) {
LAB_7101ac2794:
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(undefined4 *)(param_1 + (long)(int)*(uint *)(param_1 + 0x204) * 4 + 0x1b8) = 5;
  }
  uVar14 = (**(code **)(*(long *)*plVar20 + 0x78))();
  if ((uVar14 & 1) == 0) goto LAB_7101ac2460;
  uVar14 = (**(code **)(*(long *)*plVar20 + 0x80))();
  if (((((uVar14 & 1) == 0) && (*(char *)(*(long *)(param_2 + 8) + 0x4aa) != '\0')) &&
      ((*(byte *)(*(long *)(param_2 + 8) + 0x198) >> 1 & 1) != 0)) &&
     (*(char *)(param_1 + 0x341) != '\0')) {
    lVar15 = *(long *)(DAT_710532f8d0 + 8);
    if ((ulong)(*(long *)(lVar15 + 0x48) - *(long *)(lVar15 + 0x40) >> 3) < 2) {
      uVar14 = 0;
      if (*(char *)(lVar15 + 0x191) == '\0') goto LAB_7101ac2010;
LAB_7101ac2080:
      local_318 = 0x87650000000000;
      local_308 = 0xffffffffffffffff;
      uStack_300 = 0;
      local_330[0] = 0;
      local_2f8 = 0;
    }
    else {
      uVar14 = *(ulong *)(*(long *)(lVar15 + 0x40) + 8);
      if (*(char *)(lVar15 + 0x191) != '\0') goto LAB_7101ac2080;
LAB_7101ac2010:
      param_3 = (long ****)&DAT_00000004;
      uVar16 = FUN_7103313f20(lVar15,uVar14,(long ****)&DAT_00000004,param_4,param_5,param_6,param_7
                              ,param_8);
      if ((uVar16 & 1) == 0) goto LAB_7101ac2080;
      FUN_71024076d0(local_330,uVar14);
      if (((local_320 != 0) && (DAT_7106dd53a8 == '\x01')) && ((int)local_318 == DAT_7106dd53ac)) {
        piVar23 = (int *)(local_320 + 0x38);
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar23,0x10);
          if (bVar4) {
            *piVar23 = *piVar23 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
    }
    local_328 = &PTR_FUN_7104f73d50;
    local_320 = 0;
    local_310 = 0;
    (**(code **)(*(long *)*plVar20 + 0x70))((long *)*plVar20,0);
    (**(code **)(*(long *)*plVar17 + 0x70))((long *)*plVar17,1);
  }
  switch(*(undefined4 *)(*plVar20 + 0x254)) {
  case 0:
    if (*(char *)(param_1 + 0x32f) == '\0') {
      pcVar21 = "mnu_replay_detail_help_rec_info_off";
    }
    else {
      pcVar21 = "mnu_replay_detail_help_rec_info_on";
    }
    FUN_710377a120(param_1 + 0x2d0,pcVar21,param_3,param_4,param_5,param_6,param_7,param_8);
    plVar19 = (long *)FUN_710392e290(0x10,8,param_3,param_4,param_5,param_6,param_7,param_8);
    if (plVar19 == (long *)0x0) {
      if (DAT_7105332f00 != (long *)0x0) {
        local_e8[0] = 0;
        local_2f0 = (long ***)&DAT_00000008;
        pppplVar22 = &local_2f0;
        uVar14 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,local_e8);
        if (((uVar14 & 1) != 0) &&
           (plVar19 = (long *)FUN_710392e290(0x10,8,pppplVar22,param_4,param_5,param_6,param_7,
                                             param_8), plVar19 != (long *)0x0)) goto LAB_7101ac21c8;
      }
      plVar19 = (long *)0x0;
    }
LAB_7101ac21c8:
    *plVar19 = 0;
    lVar15 = *(long *)(*(long *)(param_1 + 0x298) + 8);
    break;
  case 1:
    if (*(char *)(param_1 + 0x330) == '\0') {
      pcVar21 = "mnu_replay_detail_help_rec_music_no";
    }
    else {
      pcVar21 = "mnu_replay_detail_help_rec_music_yes";
    }
    FUN_710377a120(param_1 + 0x2d0,pcVar21,param_3,param_4,param_5,param_6,param_7,param_8);
    plVar19 = (long *)FUN_710392e290(0x10,8,param_3,param_4,param_5,param_6,param_7,param_8);
    if (plVar19 == (long *)0x0) {
      if (DAT_7105332f00 != (long *)0x0) {
        local_e8[0] = 0;
        local_2f0 = (long ***)&DAT_00000008;
        pppplVar22 = &local_2f0;
        uVar14 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,local_e8);
        if (((uVar14 & 1) != 0) &&
           (plVar19 = (long *)FUN_710392e290(0x10,8,pppplVar22,param_4,param_5,param_6,param_7,
                                             param_8), plVar19 != (long *)0x0)) goto LAB_7101ac23f4;
      }
      plVar19 = (long *)0x0;
    }
LAB_7101ac23f4:
    *plVar19 = 0;
    lVar15 = *(long *)(*(long *)(param_1 + 0x2a8) + 8);
    break;
  case 2:
    if (*(char *)(param_1 + 0x331) == '\0') {
      pcVar21 = "mnu_replay_detail_help_rec_se_no";
    }
    else {
      pcVar21 = "mnu_replay_detail_help_rec_se_yes";
    }
    FUN_710377a120(param_1 + 0x2d0,pcVar21,param_3,param_4,param_5,param_6,param_7,param_8);
    plVar19 = (long *)FUN_710392e290(0x10,8,param_3,param_4,param_5,param_6,param_7,param_8);
    if (plVar19 == (long *)0x0) {
      if (DAT_7105332f00 != (long *)0x0) {
        local_e8[0] = 0;
        local_2f0 = (long ***)&DAT_00000008;
        pppplVar22 = &local_2f0;
        uVar14 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,local_e8);
        if (((uVar14 & 1) != 0) &&
           (plVar19 = (long *)FUN_710392e290(0x10,8,pppplVar22,param_4,param_5,param_6,param_7,
                                             param_8), plVar19 != (long *)0x0)) goto LAB_7101ac22fc;
      }
      plVar19 = (long *)0x0;
    }
LAB_7101ac22fc:
    *plVar19 = 0;
    lVar15 = *(long *)(*(long *)(param_1 + 0x2b8) + 8);
    break;
  case 3:
    if (*(char *)(param_1 + 0x332) == '\0') {
      pcVar21 = "mnu_replay_detail_help_rec_quality_normal";
    }
    else {
      pcVar21 = "mnu_replay_detail_help_rec_quality_high";
    }
    FUN_710377a120(param_1 + 0x2d0,pcVar21,param_3,param_4,param_5,param_6,param_7,param_8);
    plVar19 = (long *)FUN_710392e290(0x10,8,param_3,param_4,param_5,param_6,param_7,param_8);
    if (plVar19 == (long *)0x0) {
      if (DAT_7105332f00 != (long *)0x0) {
        local_e8[0] = 0;
        local_2f0 = (long ***)&DAT_00000008;
        pppplVar22 = &local_2f0;
        uVar14 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,local_e8);
        if (((uVar14 & 1) != 0) &&
           (plVar19 = (long *)FUN_710392e290(0x10,8,pppplVar22,param_4,param_5,param_6,param_7,
                                             param_8), plVar19 != (long *)0x0)) goto LAB_7101ac2378;
      }
      plVar19 = (long *)0x0;
    }
LAB_7101ac2378:
    *plVar19 = 0;
    lVar15 = *(long *)(*(long *)(param_1 + 0x2c8) + 8);
    break;
  default:
    goto switchD_7101ac20fc_default;
  }
  if ((lVar15 == 0) || (*(long *)(lVar15 + 0x60) == 0)) {
    *plVar19 = 0;
  }
  else {
    plVar18 = (long *)FUN_7103796f20(*(long *)(lVar15 + 0x60),*(long *)(lVar15 + 0x18) + 0xb0);
    *plVar19 = (long)plVar18;
    if (plVar18 != (long *)0x0) {
      (**(code **)(*plVar18 + 0x218))(plVar18,1);
      (**(code **)(*plVar18 + 0x408))(plVar18);
      (**(code **)(*plVar18 + 1000))(plVar18,0);
      iVar11 = (**(code **)(*plVar18 + 0x140))(plVar18);
      if ((iVar11 != 6) && (iVar11 = (**(code **)(*plVar18 + 0x140))(plVar18), iVar11 != 1)) {
        (**(code **)(*plVar18 + 0x3f8))(plVar18);
      }
      uVar14 = (**(code **)(*plVar18 + 0x158))(plVar18);
      if ((uVar14 & 1) == 0) {
        (**(code **)(*plVar18 + 0x360))(plVar18);
      }
    }
  }
  FUN_710392eb40((ulong)plVar19);
switchD_7101ac20fc_default:
  lVar15 = *(long *)(param_1 + 0x260);
  *(bool *)(param_1 + 0x341) = *(int *)(lVar15 + 0x254) == 0;
  lVar25 = *(long *)(param_2 + 8);
  if (*(char *)(lVar25 + 0x4aa) != '\0') {
    if ((*(byte *)(lVar25 + 0x1a0) >> 1 & 1) == 0) {
      if ((*(byte *)(lVar25 + 0x1a4) >> 1 & 1) == 0) goto LAB_7101ac2460;
      uVar1 = *(uint *)(lVar15 + 0x254);
      pppplVar22 = (long ****)0x0;
    }
    else {
      uVar1 = *(uint *)(lVar15 + 0x254);
      pppplVar22 = (long ****)0x1;
    }
    FUN_7101ac4180(param_1,(ulong)uVar1,pppplVar22,param_4,param_5,param_6,param_7,param_8);
  }
LAB_7101ac2460:
  uVar14 = (**(code **)(*(long *)*plVar17 + 0x78))();
  if ((uVar14 & 1) != 0) {
    uVar14 = (**(code **)(*(long *)*plVar17 + 0x80))();
    if ((uVar14 & 1) == 0) {
      if ((*(char *)(*(long *)(param_2 + 8) + 0x4aa) != '\0') &&
         ((*(byte *)(*(long *)(param_2 + 8) + 0x19c) >> 1 & 1) != 0)) {
        (**(code **)(*(long *)*plVar20 + 0x70))((long *)*plVar20,1);
        (**(code **)(*(long *)*plVar17 + 0x70))((long *)*plVar17,0);
        FUN_7103771a80(plVar20,0,0);
      }
    }
    else {
      (**(code **)(**(long **)(param_1 + 0x260) + 0x70))(*(long **)(param_1 + 0x260),0);
      *(undefined4 *)(param_1 + 0x334) = 4;
      plVar20 = *(long **)(*(long *)(param_1 + 0x2d8) + 0x10);
      if (plVar20 != (long *)0x0) {
        local_2f0 = (long ***)((ulong)local_2f0 & 0xffffffff00000000);
        FUN_71037a2270(plVar20,(ushort *)&local_2f0,0,0);
      }
    }
  }
  return;
}

