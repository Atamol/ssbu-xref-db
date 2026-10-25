// addr:      7101a93f80
// offset:    0x1a93f80
// name:      FUN_7101a93f80
// mangled:   
// signature: undefined __cdecl FUN_7101a93f80(long param_1, undefined8 param_2, undefined8 param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_7101a93f80(long param_1,undefined8 param_2,undefined8 param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined2 *puVar1;
  uint uVar2;
  char cVar3;
  bool bVar4;
  ushort uVar5;
  uint uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  char *pcVar10;
  ulong uVar11;
  long *********ppppppppplVar12;
  byte ****ppppbVar13;
  long lVar14;
  byte *pbVar15;
  code *pcVar16;
  uint uVar17;
  long lVar18;
  long lVar19;
  ulong uVar20;
  undefined8 uVar21;
  long alStack_2b0 [4];
  long *local_290;
  long alStack_280 [4];
  long *local_260;
  long alStack_250 [4];
  long *local_230;
  long alStack_220 [4];
  long *local_200;
  long alStack_1f0 [4];
  long *local_1d0;
  undefined4 local_1c0;
  undefined **local_1b0;
  ulong local_1a8;
  int local_1a0 [4];
  undefined8 local_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined **local_168;
  undefined8 local_160;
  undefined8 local_120;
  undefined8 local_118;
  undefined **local_d8;
  ulong local_d0;
  undefined **local_c8;
  ulong local_c0;
  undefined **local_b8;
  ulong local_b0;
  undefined **local_a8;
  ulong local_a0;
  long ********local_98;
  undefined8 local_90;
  ulong local_88;
  ulong local_80;
  
  local_1a0[0] = 0;
  uStack_188 = 0;
  uStack_180 = 0;
  local_190 = 0;
  local_178 = 0xffffffffffffffff;
  lVar18 = *(long *)**(long **)(param_1 + 0x120);
  FUN_7103776640(&local_1b0,(long)((long *)**(long **)(param_1 + 0x120) + 1),
                 (byte ****)"set_parts_cur_hand",param_3,param_4,param_5,param_6,param_7,param_8);
  local_290 = (long *)0x0;
  local_260 = (long *)0x0;
  local_230 = (long *)0x0;
  local_200 = (long *)0x0;
  local_1d0 = (long *)0x0;
  local_1c0 = 0;
  lVar18 = *(long *)(lVar18 + 0x600);
  if ((*(int *)(lVar18 + 0x484) == 0) && (*(int *)(lVar18 + 0x488) == -1)) {
    local_1a0[0] = 0;
  }
  else {
    local_1a0[0] = 0;
    if ((*(char *)(lVar18 + 0x4aa) != '\0') &&
       ((*(char *)(param_1 + 0x3778) != '\0' &&
        (local_1a0[0] = 1, (*(byte *)(lVar18 + 0x1a8) & 2) != 0)))) {
      local_1a0[0] = 2;
    }
  }
  lVar18 = 0x128;
  if (*(char *)(param_1 + 0x3779) != '\0') {
    lVar18 = 0x130;
  }
  uVar21 = *(undefined8 *)(*(long *)(param_1 + lVar18) + 0x60);
  local_190 = CONCAT44(540.0 - (float)((ulong)uVar21 >> 0x20),(float)uVar21 + 960.0);
  uStack_188 = 0;
  if (7 < *(uint *)(param_1 + 0x377c)) goto LAB_7101a94598;
  FUN_710376e330(*(long **)(param_1 + (long)(int)*(uint *)(param_1 + 0x377c) * 8 + 0x3780),local_1a0
                );
  FUN_710376e330(*(long **)(param_1 + 0x3800),local_1a0);
  FUN_710376e330(*(long **)(param_1 + 0x3810),local_1a0);
  FUN_710376e330(*(long **)(param_1 + 0x3818),local_1a0);
  FUN_710376e330(*(long **)(param_1 + 0x3808),local_1a0);
  if (7 < *(uint *)(param_1 + 0x377c)) goto LAB_7101a94598;
  if ((((*(int *)(*(long *)(param_1 + (long)(int)*(uint *)(param_1 + 0x377c) * 8 + 0x3780) + 0x254)
         == -1) && (*(int *)(*(long *)(param_1 + 0x3800) + 0x254) == -1)) &&
      (*(int *)(*(long *)(param_1 + 0x3810) + 0x254) == -1)) &&
     ((*(int *)(*(long *)(param_1 + 0x3808) + 0x254) == -1 &&
      (*(int *)(*(long *)(param_1 + 0x3818) + 0x254) == -1)))) {
    FUN_71037780e0(&local_120,(long)&local_1b0,(long ****)"hand_wait",param_3,param_4,param_5,
                   param_6,param_7,param_8);
    uVar11 = local_118;
    if (*(long **)(local_118 + 8) == (long *)0x0) {
      uVar7 = 0;
    }
    else {
      uVar7 = (**(code **)(**(long **)(local_118 + 8) + 0x130))();
      uVar7 = uVar7 & 0xffffffff;
    }
    local_120 = &PTR_FUN_710523d9e8;
    local_118 = 0;
    if (uVar11 != 0) {
      FUN_710392eb40(uVar11);
    }
    if ((uVar7 & 1) == 0) {
      pcVar10 = "hand_wait";
LAB_7101a941c8:
      FUN_7103778300(0x3f800000,local_1a8,(long)pcVar10);
    }
  }
  else {
    FUN_71037780e0(&local_120,(long)&local_1b0,(long ****)"hand_point_loop",param_3,param_4,param_5,
                   param_6,param_7,param_8);
    uVar11 = local_118;
    if (*(long **)(local_118 + 8) == (long *)0x0) {
      uVar7 = 0;
    }
    else {
      uVar7 = (**(code **)(**(long **)(local_118 + 8) + 0x130))();
      uVar7 = uVar7 & 0xffffffff;
    }
    local_120 = &PTR_FUN_710523d9e8;
    local_118 = 0;
    if (uVar11 != 0) {
      FUN_710392eb40(uVar11);
    }
    if ((uVar7 & 1) == 0) {
      pcVar10 = "hand_point_loop";
      goto LAB_7101a941c8;
    }
  }
  if (*(int *)(param_1 + 0x108) != 6) {
    uVar6 = *(uint *)(param_1 + 0x377c);
    uVar11 = (ulong)uVar6;
    if (7 < uVar6) {
LAB_7101a94598:
                    /* WARNING: Subroutine does not return */
      abort();
    }
    uVar17 = *(uint *)(*(long *)(param_1 + (long)(int)uVar6 * 8 + 0x3780) + 0x254);
    if (uVar17 != 0xffffffff) {
      if (*(char *)(param_1 + 0x3935) == '\0') {
        uVar6 = 0;
        do {
          ppppbVar13 = (byte ****)(ulong)uVar6;
          FUN_7103776640(&local_120,**(long **)(param_1 + 0x120) + 8,
                         (byte ****)"set_parts_in_%d%02d",uVar11,ppppbVar13,param_5,param_6,param_7,
                         param_8);
          uVar11 = local_118;
          FUN_7103778300(0x3f800000,local_118,0x71042d5cf4);
          local_120 = &PTR_FUN_710523d988;
          local_118 = 0;
          if (uVar11 != 0) {
            uVar7 = *(ulong *)(uVar11 + 0x18);
            *(undefined ***)(uVar11 + 0x10) = &PTR_FUN_710523d9a8;
            *(undefined8 *)(uVar11 + 0x18) = 0;
            if (uVar7 != 0) {
              FUN_710392eb40(uVar7);
            }
            FUN_710392eb40(uVar11);
          }
          uVar2 = *(uint *)(param_1 + 0x377c);
          uVar11 = (ulong)uVar2;
          if (7 < uVar2) goto LAB_7101a94598;
          uVar6 = uVar6 + 1;
        } while (uVar6 < 0x1e);
        if (0x1d < uVar17) goto LAB_7101a94598;
        if ((*(int *)(param_1 + (long)(int)uVar2 * 0x6c8 + (long)(int)uVar17 * 0x38 + 0x138) == 3)
           && (*(char *)(param_1 + 0x3779) == '\0')) {
          ppppbVar13 = (byte ****)(ulong)uVar17;
          FUN_7103776640(&local_120,**(long **)(param_1 + 0x120) + 8,
                         (byte ****)"set_parts_in_%d%02d",uVar11,ppppbVar13,param_5,param_6,param_7,
                         param_8);
          uVar11 = local_118;
          FUN_7103778300(0x3f800000,local_118,0x71042a2a2f);
          local_120 = &PTR_FUN_710523d988;
          local_118 = 0;
          if (uVar11 != 0) {
            uVar7 = *(ulong *)(uVar11 + 0x18);
            *(undefined ***)(uVar11 + 0x10) = &PTR_FUN_710523d9a8;
            *(undefined8 *)(uVar11 + 0x18) = 0;
            if (uVar7 != 0) {
              FUN_710392eb40(uVar7);
            }
            FUN_710392eb40(uVar11);
          }
          uVar11 = (ulong)*(uint *)(param_1 + 0x377c);
          if (7 < *(uint *)(param_1 + 0x377c)) goto LAB_7101a94598;
        }
        FUN_7101a91d70(param_1,*(uint *)(*(long *)(param_1 + (long)(int)uVar11 * 8 + 0x3780) + 0x254
                                        ),uVar11,ppppbVar13,param_5,param_6,param_7,param_8);
      }
      else {
        FUN_7103776640(&local_120,**(long **)(param_1 + 0x120) + 8,(byte ****)"set_part_footer",
                       uVar11,param_4,param_5,param_6,param_7,param_8);
        uVar11 = local_118;
        FUN_7103778300(0x3f800000,local_118,0x710424fb39);
        local_120 = &PTR_FUN_710523d988;
        local_118 = 0;
        if (uVar11 != 0) {
          *(undefined ***)(uVar11 + 0x10) = &PTR_FUN_710523d9a8;
LAB_7101a94258:
          local_118 = 0;
          local_120 = &PTR_FUN_710523d988;
          uVar7 = *(ulong *)(uVar11 + 0x18);
          *(undefined8 *)(uVar11 + 0x18) = 0;
          if (uVar7 != 0) {
            FUN_710392eb40(uVar7);
          }
          FUN_710392eb40(uVar11);
        }
LAB_7101a94270:
        *(undefined1 *)(param_1 + 0x3935) = 0;
      }
      goto LAB_7101a94d8c;
    }
    if (*(int *)(*(long *)(param_1 + 0x3818) + 0x254) == -1) {
      FUN_7101a939e0(param_1,0,0,param_4,param_5,param_6,param_7,param_8);
      uVar6 = *(uint *)(param_1 + 0x377c);
      if (uVar6 < 8) {
        uVar17 = 0;
        do {
          uVar11 = (ulong)uVar6;
          if (0x1d < uVar17) {
            if (*(char *)(param_1 + 0x3935) != '\0') {
              FUN_7103776640(&local_120,**(long **)(param_1 + 0x120) + 8,
                             (byte ****)"set_part_footer",uVar11,param_4,param_5,param_6,param_7,
                             param_8);
              uVar11 = local_118;
              FUN_7103778300(0x3f800000,local_118,0x710424fb39);
              local_120 = &PTR_FUN_710523d988;
              local_118 = 0;
              if (uVar11 == 0) goto LAB_7101a94270;
              *(undefined ***)(uVar11 + 0x10) = &PTR_FUN_710523d9a8;
              goto LAB_7101a94258;
            }
            if (*(char *)(param_1 + 0x3934) == '\0') goto LAB_7101a94d8c;
            FUN_7103776640(&local_120,**(long **)(param_1 + 0x120) + 8,(byte ****)"set_part_footer",
                           uVar11,param_4,param_5,param_6,param_7,param_8);
            uVar11 = local_118;
            FUN_7103778300(0x3f800000,local_118,0x71043f04b3);
            local_120 = &PTR_FUN_710523d988;
            local_118 = 0;
            if (uVar11 == 0) goto LAB_7101a94d20;
            uVar7 = *(ulong *)(uVar11 + 0x18);
            *(undefined ***)(uVar11 + 0x10) = &PTR_FUN_710523d9a8;
            *(undefined8 *)(uVar11 + 0x18) = 0;
            if (uVar7 == 0) goto LAB_7101a94d18;
            goto LAB_7101a94d14;
          }
          param_4 = (byte ****)(ulong)uVar17;
          FUN_7103776640(&local_120,**(long **)(param_1 + 0x120) + 8,
                         (byte ****)"set_parts_in_%d%02d",uVar11,param_4,param_5,param_6,param_7,
                         param_8);
          uVar11 = local_118;
          FUN_7103778300(0x3f800000,local_118,0x71042d5cf4);
          local_120 = &PTR_FUN_710523d988;
          local_118 = 0;
          if (uVar11 != 0) {
            uVar7 = *(ulong *)(uVar11 + 0x18);
            *(undefined ***)(uVar11 + 0x10) = &PTR_FUN_710523d9a8;
            *(undefined8 *)(uVar11 + 0x18) = 0;
            if (uVar7 != 0) {
              FUN_710392eb40(uVar7);
            }
            FUN_710392eb40(uVar11);
          }
          uVar6 = *(uint *)(param_1 + 0x377c);
          uVar17 = uVar17 + 1;
        } while (uVar6 < 8);
      }
      goto LAB_7101a94598;
    }
    lVar18 = param_1 + (long)(int)uVar6 * 0x6c8;
    local_98 = *(long *********)(lVar18 + 2000);
    local_90 = *(undefined8 *)(lVar18 + 0x7d8);
    local_88 = *(ulong *)(lVar18 + 0x7e0);
    local_80 = *(ulong *)(lVar18 + 0x7e8);
    uVar6 = *(uint *)(lVar18 + 0x7f4);
    ppppppppplVar12 = (long *********)(ulong)uVar6;
    FUN_7101a939e0(param_1,3,ppppppppplVar12,param_4,param_5,param_6,param_7,param_8);
    FUN_7103776640(&local_120,**(long **)(param_1 + 0x120) + 8,(byte ****)"set_part_footer",
                   ppppppppplVar12,param_4,param_5,param_6,param_7,param_8);
    FUN_7103776910(&local_a8,(long)&local_120,(long ****)"set_rep_pic_reward_00",ppppppppplVar12,
                   param_4,param_5,param_6,param_7,param_8);
    uVar11 = local_118;
    local_120 = &PTR_FUN_710523d988;
    local_118 = 0;
    if (uVar11 != 0) {
      uVar7 = *(ulong *)(uVar11 + 0x18);
      *(undefined ***)(uVar11 + 0x10) = &PTR_FUN_710523d9a8;
      *(undefined8 *)(uVar11 + 0x18) = 0;
      if (uVar7 != 0) {
        FUN_710392eb40(uVar7);
      }
      FUN_710392eb40(uVar11);
    }
    if (uVar6 == 4) {
      FUN_7103776640(&local_168,**(long **)(param_1 + 0x120) + 8,(byte ****)"set_part_footer",
                     ppppppppplVar12,param_4,param_5,param_6,param_7,param_8);
      FUN_7103776910(&local_120,(long)&local_168,(long ****)"set_rep_spirits",ppppppppplVar12,
                     param_4,param_5,param_6,param_7,param_8);
      uVar11 = local_160;
      local_168 = &PTR_FUN_710523d988;
      local_160 = 0;
      if (uVar11 != 0) {
        uVar7 = *(ulong *)(uVar11 + 0x18);
        *(undefined ***)(uVar11 + 0x10) = &PTR_FUN_710523d9a8;
        *(undefined8 *)(uVar11 + 0x18) = 0;
        if (uVar7 != 0) {
          FUN_710392eb40(uVar7);
        }
        FUN_710392eb40(uVar11);
      }
      FUN_7103776640(&local_b8,**(long **)(param_1 + 0x120) + 8,(byte ****)"set_part_footer",
                     ppppppppplVar12,param_4,param_5,param_6,param_7,param_8);
      FUN_7103776910(&local_168,(long)&local_b8,(long ****)"set_rep_spirits_shadow",ppppppppplVar12,
                     param_4,param_5,param_6,param_7,param_8);
      uVar11 = local_b0;
      local_b8 = &PTR_FUN_710523d988;
      local_b0 = 0;
      if (uVar11 != 0) {
        uVar7 = *(ulong *)(uVar11 + 0x18);
        *(undefined ***)(uVar11 + 0x10) = &PTR_FUN_710523d9a8;
        *(undefined8 *)(uVar11 + 0x18) = 0;
        if (uVar7 != 0) {
          FUN_710392eb40(uVar7);
        }
        FUN_710392eb40(uVar11);
      }
      lVar18 = *DAT_7105329f98;
      if ((char)local_90 == '\x04') {
        lVar19 = *(long *)(*(long *)(DAT_710532f730 + 8) + 0x1d8);
        uVar6 = FUN_71032a7800(lVar19,local_88);
        lVar14 = *(long *)(lVar19 + 0x20);
        uVar11 = (*(long *)(lVar19 + 0x28) - lVar14 >> 6) * -0x3333333333333333;
        if ((uint)uVar11 <= uVar6) goto LAB_7101a9478c;
        ppppppppplVar12 = (long *********)0xffff;
        uVar5 = *(ushort *)(lVar14 + (ulong)uVar6 * 0x140);
        if ((long *********)(ulong)uVar5 == (long *********)0xffff) {
          uVar7 = 0xffffffff;
        }
        else {
          uVar7 = (ulong)*(ushort *)(lVar19 + (long)(short)uVar5 * 2 + 0x60);
          ppppppppplVar12 = (long *********)(ulong)uVar5;
        }
      }
      else {
        lVar19 = *(long *)(*(long *)(DAT_710532f730 + 8) + 0x1d8);
        lVar14 = *(long *)(lVar19 + 0x20);
        uVar11 = (*(long *)(lVar19 + 0x28) - lVar14 >> 6) * -0x3333333333333333;
LAB_7101a9478c:
        uVar7 = 0xffffffff;
        ppppppppplVar12 = (long *********)0xffff;
      }
      puVar1 = (undefined2 *)(lVar14 + uVar7 * 0x140);
      if (uVar11 <= uVar7) {
        puVar1 = &DAT_7105182b08;
      }
      uVar6 = 1;
      uVar5 = (ushort)ppppppppplVar12;
      if (*(char *)(puVar1 + 0x2f) == '\x03') {
        bVar4 = FUN_71025c9890(uVar5);
        uVar6 = 1;
        if (bVar4) {
          uVar6 = 2;
        }
      }
      uVar17 = FUN_710259d0a0(*(long *)(lVar18 + 0x20),(byte)uVar6,uVar5,param_4,param_5,param_6,
                              param_7,param_8);
      if ((uVar17 & 1) != 0) {
        FUN_71037799d0(local_118);
        FUN_71037799d0(local_160);
        FUN_71025ae1b0(uVar5,&local_168,0,(byte ****)(ulong)uVar6,param_5,param_6,param_7,param_8);
        ppppppppplVar12 = (long *********)0x0;
        param_4 = (byte ****)(ulong)uVar6;
        FUN_71025ae1b0(uVar5,&local_120,0,param_4,param_5,param_6,param_7,param_8);
      }
      uVar11 = local_160;
      local_168 = &PTR_FUN_710523d9a8;
      local_160 = 0;
      if (uVar11 != 0) {
        FUN_710392eb40(uVar11);
      }
LAB_7101a94834:
      uVar11 = local_118;
      local_120 = &PTR_FUN_710523d9a8;
      local_118 = 0;
      if (uVar11 != 0) {
        FUN_710392eb40(uVar11);
      }
    }
    else if (uVar6 == 1) {
      FUN_7103776640(&local_168,**(long **)(param_1 + 0x120) + 8,(byte ****)"set_part_footer",
                     ppppppppplVar12,param_4,param_5,param_6,param_7,param_8);
      FUN_7103776910(&local_120,(long)&local_168,(long ****)"set_rep_pic_reward_00",ppppppppplVar12,
                     param_4,param_5,param_6,param_7,param_8);
      uVar11 = local_160;
      local_168 = &PTR_FUN_710523d988;
      local_160 = 0;
      if (uVar11 != 0) {
        uVar7 = *(ulong *)(uVar11 + 0x18);
        *(undefined ***)(uVar11 + 0x10) = &PTR_FUN_710523d9a8;
        *(undefined8 *)(uVar11 + 0x18) = 0;
        if (uVar7 != 0) {
          FUN_710392eb40(uVar7);
        }
        FUN_710392eb40(uVar11);
      }
      ppppppppplVar12 = &local_98;
      FUN_7101b11530(&local_120,*(long **)(param_1 + 0x118),ppppppppplVar12,param_4,param_5,param_6,
                     param_7,param_8);
      goto LAB_7101a94834;
    }
    FUN_7103776640(&local_120,**(long **)(param_1 + 0x120) + 8,(byte ****)"set_part_footer",
                   ppppppppplVar12,param_4,param_5,param_6,param_7,param_8);
    FUN_7103776910(&local_b8,(long)&local_120,(long ****)"set_txt_title",ppppppppplVar12,param_4,
                   param_5,param_6,param_7,param_8);
    uVar11 = local_118;
    local_120 = &PTR_FUN_710523d988;
    local_118 = 0;
    if (uVar11 != 0) {
      uVar7 = *(ulong *)(uVar11 + 0x18);
      *(undefined ***)(uVar11 + 0x10) = &PTR_FUN_710523d9a8;
      *(undefined8 *)(uVar11 + 0x18) = 0;
      if (uVar7 != 0) {
        FUN_710392eb40(uVar7);
      }
      FUN_710392eb40(uVar11);
    }
    FUN_7103776640(&local_120,**(long **)(param_1 + 0x120) + 8,(byte ****)"set_part_footer",
                   ppppppppplVar12,param_4,param_5,param_6,param_7,param_8);
    FUN_7103776910(&local_c8,(long)&local_120,(long ****)"set_txt_mission",ppppppppplVar12,param_4,
                   param_5,param_6,param_7,param_8);
    uVar11 = local_118;
    local_120 = &PTR_FUN_710523d988;
    local_118 = 0;
    if (uVar11 != 0) {
      uVar7 = *(ulong *)(uVar11 + 0x18);
      *(undefined ***)(uVar11 + 0x10) = &PTR_FUN_710523d9a8;
      *(undefined8 *)(uVar11 + 0x18) = 0;
      if (uVar7 != 0) {
        FUN_710392eb40(uVar7);
      }
      FUN_710392eb40(uVar11);
    }
    FUN_7103776640(&local_120,**(long **)(param_1 + 0x120) + 8,(byte ****)"set_part_footer",
                   ppppppppplVar12,param_4,param_5,param_6,param_7,param_8);
    FUN_7103776910(&local_d8,(long)&local_120,(long ****)"set_txt_item",ppppppppplVar12,param_4,
                   param_5,param_6,param_7,param_8);
    uVar11 = local_118;
    local_120 = &PTR_FUN_710523d988;
    local_118 = 0;
    if (uVar11 != 0) {
      uVar7 = *(ulong *)(uVar11 + 0x18);
      *(undefined ***)(uVar11 + 0x10) = &PTR_FUN_710523d9a8;
      *(undefined8 *)(uVar11 + 0x18) = 0;
      if (uVar7 != 0) {
        FUN_710392eb40(uVar7);
      }
      FUN_710392eb40(uVar11);
    }
    uVar11 = local_b0;
    if (*(long **)(local_b0 + 0x10) != (long *)0x0) {
      FUN_71037a28a0(*(long **)(local_b0 + 0x10),&DAT_7104867c2e);
    }
    uVar7 = local_c0;
    if (*(long **)(local_c0 + 0x10) != (long *)0x0) {
      FUN_71037a28a0(*(long **)(local_c0 + 0x10),&DAT_7104867c2e);
    }
    cVar3 = (char)local_90;
    uVar20 = 0x2dff000000000000;
    local_118 = local_118 & 0xffffffffffffff00;
    local_120 = (undefined **)0x0;
    if ((char)local_90 == '\x05') {
      lVar18 = *(long *)(*(long *)(*(long *)(DAT_710532f730 + 8) + 0x318) + 8);
      uVar8 = FUN_710327d930(lVar18,local_88);
    }
    else {
      lVar18 = *(long *)(*(long *)(*(long *)(DAT_710532f730 + 8) + 0x318) + 8);
      uVar8 = 0x2dff000000000000;
    }
    uVar9 = FUN_710327d930(lVar18,0xd61d998cb);
    if (((((uVar8 & 0xff00000000000000) == 0x2d00000000000000) && ((uVar8 & 0xffffffffff) != 0)) &&
        ((uVar9 & 0xff00000000000000) == 0x2d00000000000000)) && ((uVar9 & 0xffffffffff) != 0)) {
      if (((uVar9 ^ uVar8) & 0xffffffffff) != 0) goto LAB_7101a94a24;
LAB_7101a94b14:
      param_4 = (byte ****)(local_80 & 0xffffffff);
      ppppppppplVar12 = (long *********)0x1;
      FUN_710377a280((long)&local_d8,(byte *)"mnu_insert_popup_reward_g",1);
      FUN_7103776640(&local_168,**(long **)(param_1 + 0x120) + 8,(byte ****)"set_part_footer",
                     ppppppppplVar12,param_4,param_5,param_6,param_7,param_8);
      pcVar10 = "txt_item_name_gold";
    }
    else {
      if (((uVar9 & 0xffffffffff) != 0 && (uVar9 & 0xff00000000000000) == 0x2d00000000000000) ==
          ((uVar8 & 0xff00000000000000) == 0x2d00000000000000 && (uVar8 & 0xffffffffff) != 0))
      goto LAB_7101a94b14;
LAB_7101a94a24:
      if (cVar3 == '\x05') {
        uVar20 = FUN_710327d930(lVar18,local_88);
      }
      uVar8 = FUN_710327d930(lVar18,0x155f9548cb);
      if ((((uVar20 & 0xff00000000000000) == 0x2d00000000000000) && ((uVar20 & 0xffffffffff) != 0))
         && (((uVar8 & 0xff00000000000000) == 0x2d00000000000000 && ((uVar8 & 0xffffffffff) != 0))))
      {
        if (((uVar8 ^ uVar20) & 0xffffffffff) == 0) {
LAB_7101a94b90:
          param_4 = (byte ****)(local_80 & 0xffffffff);
          ppppppppplVar12 = (long *********)0x1;
          FUN_710377a280((long)&local_d8,(byte *)"mnu_insert_popup_reward_sp",1);
          FUN_7103776640(&local_168,**(long **)(param_1 + 0x120) + 8,(byte ****)"set_part_footer",
                         ppppppppplVar12,param_4,param_5,param_6,param_7,param_8);
          pcVar10 = "txt_item_name_sp";
          goto LAB_7101a94c48;
        }
      }
      else if (((uVar8 & 0xffffffffff) != 0 && (uVar8 & 0xff00000000000000) == 0x2d00000000000000)
               == ((uVar20 & 0xff00000000000000) == 0x2d00000000000000 &&
                  (uVar20 & 0xffffffffff) != 0)) goto LAB_7101a94b90;
      FUN_7101780fd0((uint *)&local_168,(ulong *)&local_98,ppppppppplVar12,param_4,param_5,param_6,
                     param_7,param_8);
      for (uVar20 = 0; *(char *)((long)&local_160 + uVar20) != '\0'; uVar20 = uVar20 + 2) {
        *(char *)((long)&local_118 + uVar20) = *(char *)((long)&local_160 + uVar20);
        if (0x3e < (int)uVar20 + 1U) {
          uVar20 = (ulong)((int)uVar20 + 1);
          break;
        }
        cVar3 = *(char *)((long)&local_160 + uVar20 + 1);
        if (cVar3 == '\0') {
          uVar20 = uVar20 + 1;
          break;
        }
        *(char *)((long)&local_118 + uVar20 + 1) = cVar3;
      }
      uVar6 = 0x811c9dc5;
      *(char *)((long)&local_118 + (uVar20 & 0xffffffff)) = '\0';
      uVar17 = (uint)(byte)local_118;
      local_120 = (undefined **)CONCAT44((int)uVar20,(undefined4)local_120);
      if ((byte)local_118 != 0) {
        pbVar15 = (byte *)((long)&local_118 + 1);
        do {
          uVar6 = uVar6 * 0x89 ^ uVar17;
          uVar17 = (uint)*pbVar15;
          pbVar15 = pbVar15 + 1;
        } while (uVar17 != 0);
      }
      local_120 = (undefined **)CONCAT44((int)uVar20,uVar6);
      FUN_710377a120((long)&local_d8,(char *)&local_118,ppppppppplVar12,param_4,param_5,param_6,
                     param_7,param_8);
      FUN_7103776640(&local_168,**(long **)(param_1 + 0x120) + 8,(byte ****)"set_part_footer",
                     ppppppppplVar12,param_4,param_5,param_6,param_7,param_8);
      pcVar10 = "txt_item_name_def";
    }
LAB_7101a94c48:
    uVar20 = local_160;
    FUN_7103778300(0x3f800000,local_160,(long)pcVar10);
    local_168 = &PTR_FUN_710523d988;
    local_160 = 0;
    if (uVar20 != 0) {
      uVar8 = *(ulong *)(uVar20 + 0x18);
      *(undefined ***)(uVar20 + 0x10) = &PTR_FUN_710523d9a8;
      *(undefined8 *)(uVar20 + 0x18) = 0;
      if (uVar8 != 0) {
        FUN_710392eb40(uVar8);
      }
      FUN_710392eb40(uVar20);
    }
    uVar20 = local_d0;
    local_d8 = &PTR_FUN_710523d9a8;
    local_d0 = 0;
    if (uVar20 != 0) {
      FUN_710392eb40(uVar20);
    }
    local_c8 = &PTR_FUN_710523d9a8;
    local_c0 = 0;
    if (uVar7 != 0) {
      FUN_710392eb40(uVar7);
    }
    local_b8 = &PTR_FUN_710523d9a8;
    local_b0 = 0;
    if (uVar11 != 0) {
      FUN_710392eb40(uVar11);
    }
    uVar11 = local_a0;
    local_a8 = &PTR_FUN_710523d9a8;
    local_a0 = 0;
    if (uVar11 != 0) {
      FUN_710392eb40(uVar11);
    }
    if (*(char *)(param_1 + 0x3934) == '\0') {
      if (*(char *)(param_1 + 0x3935) == '\0') {
        FUN_7103776640(&local_120,**(long **)(param_1 + 0x120) + 8,(byte ****)"set_part_footer",
                       ppppppppplVar12,param_4,param_5,param_6,param_7,param_8);
        uVar11 = local_118;
        FUN_7103778300(0x3f800000,local_118,0x7104412f04);
        local_120 = &PTR_FUN_710523d988;
        local_118 = 0;
        if (uVar11 != 0) {
          uVar7 = *(ulong *)(uVar11 + 0x18);
          *(undefined ***)(uVar11 + 0x10) = &PTR_FUN_710523d9a8;
          *(undefined8 *)(uVar11 + 0x18) = 0;
          if (uVar7 != 0) {
            FUN_710392eb40(uVar7);
          }
          FUN_710392eb40(uVar11);
        }
        *(undefined1 *)(param_1 + 0x3935) = 1;
      }
    }
    else {
      FUN_7103776640(&local_120,**(long **)(param_1 + 0x120) + 8,(byte ****)"set_part_footer",
                     ppppppppplVar12,param_4,param_5,param_6,param_7,param_8);
      uVar11 = local_118;
      FUN_7103778300(0x3f800000,local_118,0x71043f04b3);
      local_120 = &PTR_FUN_710523d988;
      local_118 = 0;
      if (uVar11 != 0) {
        uVar7 = *(ulong *)(uVar11 + 0x18);
        *(undefined ***)(uVar11 + 0x10) = &PTR_FUN_710523d9a8;
        *(undefined8 *)(uVar11 + 0x18) = 0;
        if (uVar7 != 0) {
LAB_7101a94d14:
          local_118 = 0;
          local_120 = &PTR_FUN_710523d988;
          FUN_710392eb40(uVar7);
        }
LAB_7101a94d18:
        FUN_710392eb40(uVar11);
      }
LAB_7101a94d20:
      *(undefined1 *)(param_1 + 0x3934) = 0;
    }
  }
LAB_7101a94d8c:
  if (alStack_1f0 == local_1d0) {
    pcVar16 = *(code **)(*local_1d0 + 0x20);
LAB_7101a94db8:
    (*pcVar16)();
  }
  else if (local_1d0 != (long *)0x0) {
    pcVar16 = *(code **)(*local_1d0 + 0x28);
    goto LAB_7101a94db8;
  }
  if (alStack_220 == local_200) {
    pcVar16 = *(code **)(*local_200 + 0x20);
LAB_7101a94de8:
    (*pcVar16)();
  }
  else if (local_200 != (long *)0x0) {
    pcVar16 = *(code **)(*local_200 + 0x28);
    goto LAB_7101a94de8;
  }
  if (alStack_250 == local_230) {
    pcVar16 = *(code **)(*local_230 + 0x20);
LAB_7101a94e18:
    (*pcVar16)();
  }
  else if (local_230 != (long *)0x0) {
    pcVar16 = *(code **)(*local_230 + 0x28);
    goto LAB_7101a94e18;
  }
  if (alStack_280 == local_260) {
    pcVar16 = *(code **)(*local_260 + 0x20);
LAB_7101a94e48:
    (*pcVar16)();
  }
  else if (local_260 != (long *)0x0) {
    pcVar16 = *(code **)(*local_260 + 0x28);
    goto LAB_7101a94e48;
  }
  if (alStack_2b0 == local_290) {
    pcVar16 = *(code **)(*local_290 + 0x20);
  }
  else {
    if (local_290 == (long *)0x0) goto LAB_7101a94e7c;
    pcVar16 = *(code **)(*local_290 + 0x28);
  }
  (*pcVar16)();
LAB_7101a94e7c:
  uVar11 = local_1a8;
  local_1b0 = &PTR_FUN_710523d988;
  local_1a8 = 0;
  if (uVar11 != 0) {
    uVar7 = *(ulong *)(uVar11 + 0x18);
    *(undefined ***)(uVar11 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar11 + 0x18) = 0;
    if (uVar7 != 0) {
      FUN_710392eb40(uVar7);
    }
    FUN_710392eb40(uVar11);
  }
  return;
}

