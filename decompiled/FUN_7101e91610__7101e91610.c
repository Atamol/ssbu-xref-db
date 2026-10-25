// addr:      7101e91610
// offset:    0x1e91610
// name:      FUN_7101e91610
// mangled:   
// signature: undefined __cdecl FUN_7101e91610(long param_1, uint param_2, undefined * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_7101e91610(long param_1,uint param_2,undefined **param_3,byte ****param_4,long ****param_5,
                   undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long lVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined1 *puVar7;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  char *pcVar8;
  undefined8 extraout_x1_01;
  undefined8 extraout_x1_02;
  undefined8 extraout_x1_03;
  undefined8 extraout_x1_04;
  int iVar9;
  undefined8 uVar10;
  long ****pppplVar11;
  byte ****ppppbVar12;
  ulong uVar13;
  long ****pppplVar14;
  ulong uVar15;
  long lVar16;
  long lVar17;
  ulong uVar18;
  long lVar19;
  ulong uVar20;
  uint uVar21;
  long *plVar22;
  byte ****ppppbVar23;
  uint uVar24;
  undefined8 *puVar25;
  float fVar26;
  undefined **local_c0;
  ulong local_b8;
  undefined **local_b0;
  ulong local_a8;
  undefined **local_a0;
  ulong local_98;
  undefined **local_90;
  ulong local_88;
  long ***local_80;
  ulong local_78;
  
  iVar9 = (int)param_3;
  *(uint *)(param_1 + 0x1f0) = param_2;
  *(int *)(param_1 + 500) = iVar9;
  *(undefined4 *)(param_1 + 0x1f8) = 0;
  if (1 < iVar9 - 2U) {
    if (iVar9 == 1) {
      FUN_7103778300(0x3f800000,*(long *)(param_1 + 0x38),0x710439daca);
      FUN_7103778300(0x3f800000,*(long *)(param_1 + 0x38),0x71042f89e4);
      if (*(uint *)(param_1 + 0x1dc) < 0x13) {
        *(undefined4 *)(param_1 + (long)(int)*(uint *)(param_1 + 0x1dc) * 4 + 400) = 6;
        if (*(int *)(param_1 + 0x1dc) < 0x12) {
          uVar4 = *(int *)(param_1 + 0x1dc) + 1;
          *(uint *)(param_1 + 0x1dc) = uVar4;
          if (0x12 < uVar4) goto LAB_7101e92378;
          *(undefined4 *)(param_1 + (long)(int)uVar4 * 4 + 400) = 1;
        }
        FUN_7103776640(&local_90,param_1 + 0x30,(byte ****)"set_parts_btn_04",param_3,param_4,
                       param_5,param_6,param_7,param_8);
        FUN_7103776910(&local_80,(long)&local_90,(long ****)"set_txt_00",param_3,param_4,param_5,
                       param_6,param_7,param_8);
        FUN_710377a120((long)&local_80,"cmn_yes",param_3,param_4,param_5,param_6,param_7,param_8);
        uVar15 = local_78;
        local_80 = (long ***)&PTR_FUN_710523d9a8;
        local_78 = 0;
        if (uVar15 != 0) {
          FUN_710392eb40(uVar15);
        }
        uVar15 = local_88;
        local_90 = &PTR_FUN_710523d988;
        local_88 = 0;
        if (uVar15 != 0) {
          uVar5 = *(ulong *)(uVar15 + 0x18);
          *(undefined ***)(uVar15 + 0x10) = &PTR_FUN_710523d9a8;
          *(undefined8 *)(uVar15 + 0x18) = 0;
          if (uVar5 != 0) {
            FUN_710392eb40(uVar5);
          }
          FUN_710392eb40(uVar15);
        }
        FUN_7103776910(&local_80,param_1 + 0x30,(long ****)"set_txt_caution",param_3,param_4,param_5
                       ,param_6,param_7,param_8);
        FUN_710377a280((long)&local_80,(byte *)"cam_save_overwrite_start",1);
        uVar15 = local_78;
        local_80 = (long ***)&PTR_FUN_710523d9a8;
        local_78 = 0;
        if (uVar15 != 0) {
          FUN_710392eb40(uVar15);
        }
        FUN_7103771a80((long *)(param_1 + 0x60),0,0);
        return;
      }
      goto LAB_7101e92378;
    }
    if (iVar9 != 0) {
      return;
    }
    if (2 < param_2) goto LAB_7101e92378;
    uVar15 = *(ulong *)(*(long *)**(undefined8 **)(*DAT_7105314510 + 0x158) +
                        (ulong)param_2 * 0x3d700 + 0x3d6d0);
    uVar4 = *(uint *)(param_1 + 0x1dc);
    if ((uVar15 & 0xffffffffff) == 0 || (uVar15 & 0xff00000000000000) != 0xc100000000000000) {
      if (0x12 < uVar4) goto LAB_7101e92378;
      *(undefined4 *)(param_1 + (long)(int)uVar4 * 4 + 400) = 2;
      if (*(int *)(param_1 + 0x1dc) < 0x12) {
        uVar4 = *(int *)(param_1 + 0x1dc) + 1;
        *(uint *)(param_1 + 0x1dc) = uVar4;
        if (0x12 < uVar4) goto LAB_7101e92378;
        *(undefined4 *)(param_1 + (long)(int)uVar4 * 4 + 400) = 1;
      }
      FUN_7103778300(0x3f800000,*(long *)(param_1 + 0x38),0x71043f0fb3);
      uVar10 = 0;
      FUN_7103771a80((long *)(param_1 + 0x50),1,0);
      switch(*(undefined4 *)(*(long *)(param_1 + 0x50) + 0x254)) {
      case 0:
        pcVar8 = "cam_save_help_easy";
        break;
      case 1:
        pcVar8 = "cam_save_help_normal";
        break;
      case 2:
        pcVar8 = "cam_save_help_hard";
        break;
      case 3:
        pcVar8 = "cam_save_help_very_easy";
        break;
      default:
        goto switchD_7101e91730_default;
      }
      FUN_710377a120(param_1 + 0x40,pcVar8,uVar10,param_4,param_5,param_6,param_7,param_8);
switchD_7101e91730_default:
      ppppbVar12 = (byte ****)0x0;
      pppplVar14 = (long ****)0x0;
      FUN_7101e8e680(param_1,0,0,0,(long ****)0x0,param_6,param_7,param_8);
      local_80 = (long ***)0x1184557dae;
      FUN_7103772070(*(long *)(param_1 + 0x50),0,&local_80,ppppbVar12,pppplVar14,param_6,param_7,
                     param_8);
      local_80 = (long ***)0x1184557dae;
      FUN_7103772070(*(long *)(param_1 + 0x50),1,&local_80,ppppbVar12,pppplVar14,param_6,param_7,
                     param_8);
      local_80 = (long ***)0x1184557dae;
      FUN_7103772070(*(long *)(param_1 + 0x50),2,&local_80,ppppbVar12,pppplVar14,param_6,param_7,
                     param_8);
      local_80 = (long ***)0x1184557dae;
      FUN_7103772070(*(long *)(param_1 + 0x50),3,&local_80,ppppbVar12,pppplVar14,param_6,param_7,
                     param_8);
      return;
    }
    if (0x12 < uVar4) goto LAB_7101e92378;
    *(undefined4 *)(param_1 + (long)(int)uVar4 * 4 + 400) = 3;
    if (*(int *)(param_1 + 0x1dc) < 0x12) {
      uVar4 = *(int *)(param_1 + 0x1dc) + 1;
      *(uint *)(param_1 + 0x1dc) = uVar4;
      if (0x12 < uVar4) goto LAB_7101e92378;
      *(undefined4 *)(param_1 + (long)(int)uVar4 * 4 + 400) = 1;
    }
    lVar1 = param_1 + 0x30;
    FUN_7103776640(&local_c0,lVar1,(byte ****)"set_btn_m_decide",param_3,param_4,param_5,param_6,
                   param_7,param_8);
    FUN_710337d360(&local_c0,extraout_x1,param_3,param_4,param_5,param_6,param_7,param_8);
    uVar15 = local_b8;
    local_c0 = &PTR_FUN_710523d988;
    local_b8 = 0;
    if (uVar15 != 0) {
      uVar5 = *(ulong *)(uVar15 + 0x18);
      *(undefined ***)(uVar15 + 0x10) = &PTR_FUN_710523d9a8;
      *(undefined8 *)(uVar15 + 0x18) = 0;
      if (uVar5 != 0) {
        FUN_710392eb40(uVar5);
      }
      FUN_710392eb40(uVar15);
    }
    FUN_7103778300(0x3f800000,*(long *)(param_1 + 0x38),0x7104401bd3);
    uVar10 = 0;
    FUN_7103771a80((long *)(param_1 + 0x58),0,0);
    FUN_7101e8e840(param_1,extraout_x1_00,uVar10,param_4,param_5,param_6,param_7,param_8);
    puVar25 = *(undefined8 **)(*DAT_7105314510 + 0x158);
    FUN_7103776640(&local_80,lVar1,(byte ****)"set_parts_clear",uVar10,param_4,param_5,param_6,
                   param_7,param_8);
    FUN_7103776640(&local_90,lVar1,(byte ****)"set_parts_clear_s",uVar10,param_4,param_5,param_6,
                   param_7,param_8);
    uVar15 = local_78;
    if (2 < *(uint *)(param_1 + 0x1f0)) goto LAB_7101e92378;
    if (*(char *)(*(long *)**(undefined8 **)(*DAT_7105314510 + 0x158) +
                  (ulong)*(uint *)(param_1 + 0x1f0) * 0x3d700 + 0x3cc37) == '\0') {
      FUN_7103778300(0x3f800000,local_78,0x7104348100);
      lVar17 = *(long *)(*(long *)(param_1 + 0x58) + 0x1b8);
      if (lVar17 != 0) {
        lVar16 = *(long *)(param_1 + 0x58) + 0x1b8;
        lVar19 = lVar16;
        do {
          if (0 < *(int *)(lVar17 + 0x20)) {
            lVar19 = lVar17;
          }
          lVar17 = *(long *)(lVar17 + (ulong)(*(int *)(lVar17 + 0x20) < 1) * 8);
        } while (lVar17 != 0);
        if (((lVar19 != lVar16) && (*(int *)(lVar19 + 0x20) < 2)) &&
           (plVar22 = *(long **)(lVar19 + 0x28), plVar22 != (long *)0x0)) {
          (**(code **)(*plVar22 + 0x1f8))(plVar22,0);
          uVar10 = 0;
          (**(code **)(*plVar22 + 0x388))(plVar22,1);
        }
      }
      if (2 < *(uint *)(param_1 + 0x1f0)) goto LAB_7101e92378;
      if (*(char *)(*(long *)*puVar25 + (ulong)*(uint *)(param_1 + 0x1f0) * 0x3d700 + 0x3cc35) ==
          '\0') {
        FUN_7103778300(0x3f800000,*(long *)(param_1 + 0x38),0x710433a870);
        pcVar8 = "hide";
        uVar5 = local_88;
        uVar20 = local_88;
      }
      else {
        FUN_7103778300(0x3f800000,*(long *)(param_1 + 0x38),0x71042e78f0);
        pcVar8 = "show";
        uVar5 = local_88;
        uVar20 = local_88;
      }
    }
    else {
      FUN_7103778300(0x3f800000,local_78,0x710438b28f);
      FUN_7103778300(0x3f800000,local_88,0x7104348100);
      lVar17 = *(long *)(*(long *)(param_1 + 0x58) + 0x1b8);
      if (lVar17 != 0) {
        lVar16 = *(long *)(param_1 + 0x58) + 0x1b8;
        lVar19 = lVar16;
        do {
          if (0 < *(int *)(lVar17 + 0x20)) {
            lVar19 = lVar17;
          }
          lVar17 = *(long *)(lVar17 + (ulong)(*(int *)(lVar17 + 0x20) < 1) * 8);
        } while (lVar17 != 0);
        if (((lVar19 != lVar16) && (*(int *)(lVar19 + 0x20) < 2)) &&
           (plVar22 = *(long **)(lVar19 + 0x28), plVar22 != (long *)0x0)) {
          (**(code **)(*plVar22 + 0x1f8))(plVar22,1);
          uVar10 = 0;
          (**(code **)(*plVar22 + 0x388))(plVar22,0);
        }
      }
      pcVar8 = "lay_continue_01";
      uVar5 = *(ulong *)(param_1 + 0x38);
      uVar20 = local_88;
    }
    FUN_7103778300(0x3f800000,uVar5,(long)pcVar8);
    FUN_7103776640(&local_b0,lVar1,(byte ****)"set_parts_caption_con",uVar10,param_4,param_5,param_6
                   ,param_7,param_8);
    FUN_7103776910(&local_a0,(long)&local_b0,(long ****)"set_txt_help",uVar10,param_4,param_5,
                   param_6,param_7,param_8);
    uVar13 = (ulong)(*(int *)(param_1 + 0x1f0) + 1);
    uVar10 = 1;
    FUN_710377a280((long)&local_a0,(byte *)"cam_save_num_area",1);
    uVar5 = local_98;
    local_a0 = &PTR_FUN_710523d9a8;
    local_98 = 0;
    if (uVar5 != 0) {
      FUN_710392eb40(uVar5);
    }
    uVar5 = local_a8;
    local_b0 = &PTR_FUN_710523d988;
    local_a8 = 0;
    if (uVar5 != 0) {
      uVar6 = *(ulong *)(uVar5 + 0x18);
      *(undefined ***)(uVar5 + 0x10) = &PTR_FUN_710523d9a8;
      *(undefined8 *)(uVar5 + 0x18) = 0;
      if (uVar6 != 0) {
        FUN_710392eb40(uVar6);
      }
      FUN_710392eb40(uVar5);
    }
    if (2 < *(uint *)(param_1 + 0x1f0)) goto LAB_7101e92378;
    uVar6 = *(ulong *)(*(long *)*puVar25 + (ulong)*(uint *)(param_1 + 0x1f0) * 0x3d700 + 0x3cc18);
    uVar18 = uVar6 & 0xffffffff;
    lVar19 = (long)uVar6 >> 0x20;
    uVar5 = lVar19 * 0xed75ed55 + (uVar18 * 0xed75ed55 >> 0x20);
    lVar16 = -((long)uVar6 >> 0x3f);
    lVar17 = lVar16 + ((long)(uVar6 + lVar19 * -0x63a000da + ((long)uVar5 >> 0x20) +
                             ((long)(uVar18 * -0x63a000da + (uVar5 & 0xffffffff)) >> 0x20)) >> 0x29)
    ;
    uVar5 = lVar19 * 0x68fd3d1d + (uVar18 * 0x68fd3d1d >> 0x20);
    uVar6 = lVar19 * 0x26d694b3 + (uVar18 * 0x26d694b3 >> 0x20);
    if (0x98967e < lVar17) {
      lVar17 = 9999999;
    }
    pcVar8 = (char *)(lVar17 * 1000000 +
                      ((lVar16 + ((long)(lVar19 * 0x12533fe + ((long)uVar5 >> 0x20) +
                                        (uVar18 * 0x12533fe + (uVar5 & 0xffffffff) >> 0x20)) >> 0x1c
                                 )) % 0x3c) * 1000 +
                     (lVar16 + ((long)(lVar19 * 0x112e0be8 + ((long)uVar6 >> 0x20) +
                                      (uVar18 * 0x112e0be8 + (uVar6 & 0xffffffff) >> 0x20)) >> 0x1a)
                     ) % 0x3c);
    FUN_7103776910(&local_a0,lVar1,(long ****)"set_txt_play_time",uVar10,uVar13,param_5,param_6,
                   param_7,param_8);
    uVar10 = 1;
    FUN_710377a280((long)&local_a0,(byte *)"cam_save_playtime_time",1);
    uVar5 = local_98;
    local_a0 = &PTR_FUN_710523d9a8;
    local_98 = 0;
    if (uVar5 != 0) {
      FUN_710392eb40(uVar5);
    }
    FUN_7103776910(&local_a0,lVar1,(long ****)"set_txt_difficulty",uVar10,pcVar8,param_5,param_6,
                   param_7,param_8);
    if (2 < *(uint *)(param_1 + 0x1f0)) goto LAB_7101e92378;
    switch(*(undefined1 *)
            (*(long *)*puVar25 + (ulong)*(uint *)(param_1 + 0x1f0) * 0x3d700 + 0x3d68c)) {
    case 0:
      pcVar8 = "cam_save_level_easy";
      break;
    case 1:
      pcVar8 = "cam_save_level_normal";
      break;
    case 2:
      pcVar8 = "cam_save_level_hard";
      break;
    case 3:
      pcVar8 = "cam_save_level_very_easy";
      break;
    default:
      goto switchD_7101e9205c_default;
    }
    uVar10 = 1;
    FUN_710377a280((long)&local_a0,(byte *)"cam_save_level_type",1);
switchD_7101e9205c_default:
    FUN_7103776910(&local_b0,lVar1,(long ****)"set_txt_fighter_num",uVar10,pcVar8,param_5,param_6,
                   param_7,param_8);
    uVar4 = *(uint *)(param_1 + 0x1f0);
    if (uVar4 < 3) {
      lVar17 = *(long *)(DAT_710532f730 + 8);
      plVar22 = (long *)*puVar25;
      uVar21 = 0;
      uVar24 = 0;
      do {
        if ((*(uint *)(*plVar22 + (ulong)uVar4 * 0x3d700 + (ulong)(uVar24 >> 5) * 4 + 0x3d6e8) &
            1 << (ulong)(uVar24 & 0x1f)) != 0) {
          puVar7 = FUN_7103264590(lVar17 + 0x160,uVar24);
          uVar3 = FUN_71032662f0(*(long *)(lVar17 + 0x168),(ulong)puVar7);
          uVar21 = uVar21 + (~uVar3 & 1);
        }
        uVar24 = uVar24 + 1;
      } while (uVar24 != 99);
      pppplVar14 = (long ****)0x1;
      ppppbVar12 = (byte ****)(ulong)uVar21;
      FUN_710377a280((long)&local_b0,(byte *)"cam_save_fighter_n",1);
      uVar5 = local_a8;
      local_b0 = &PTR_FUN_710523d9a8;
      local_a8 = 0;
      uVar10 = extraout_x1_01;
      if (uVar5 != 0) {
        FUN_710392eb40(uVar5);
        uVar10 = extraout_x1_02;
      }
      uVar4 = FUN_71024cc980(*(uint *)(param_1 + 0x1f0),uVar10,pppplVar14,ppppbVar12,param_5,param_6
                             ,param_7,param_8);
      ppppbVar23 = (byte ****)(ulong)uVar4;
      FUN_7103776910(&local_b0,lVar1,(long ****)"set_txt_clear_num",pppplVar14,ppppbVar12,param_5,
                     param_6,param_7,param_8);
      pppplVar14 = (long ****)0x1;
      FUN_710377a280((long)&local_b0,(byte *)"cam_save_clear_n",1);
      uVar5 = local_a8;
      local_b0 = &PTR_FUN_710523d9a8;
      local_a8 = 0;
      uVar10 = extraout_x1_03;
      if (uVar5 != 0) {
        FUN_710392eb40(uVar5);
        uVar10 = extraout_x1_04;
      }
      fVar26 = FUN_71024ccb40(*(uint *)(param_1 + 0x1f0),uVar10,pppplVar14,ppppbVar23,param_5,
                              param_6,param_7,param_8);
      FUN_7103776910(&local_b0,lVar1,(long ****)"set_txt_complete",pppplVar14,ppppbVar23,param_5,
                     param_6,param_7,param_8);
      uVar10 = 2;
      uVar13 = (ulong)((uint)(int)(fVar26 * 10000.0) / 100);
      pppplVar14 = (long ****)(ulong)((uint)(int)(fVar26 * 10000.0) % 100);
      FUN_710377a280((long)&local_b0,(byte *)"cam_save_complete_percent",2);
      uVar5 = local_a8;
      local_b0 = &PTR_FUN_710523d9a8;
      local_a8 = 0;
      if (uVar5 != 0) {
        FUN_710392eb40(uVar5);
      }
      if (*(uint *)(param_1 + 0x1f0) < 3) {
        FUN_7103776910(&local_b0,lVar1,(long ****)"set_txt_clear_times_num",uVar10,uVar13,pppplVar14
                       ,param_6,param_7,param_8);
        FUN_710377a280((long)&local_b0,(byte *)"cam_save_clear_times_n",1);
        uVar5 = local_a8;
        local_b0 = &PTR_FUN_710523d9a8;
        local_a8 = 0;
        if (uVar5 != 0) {
          FUN_710392eb40(uVar5);
        }
        uVar5 = local_98;
        local_a0 = &PTR_FUN_710523d9a8;
        local_98 = 0;
        if (uVar5 != 0) {
          FUN_710392eb40(uVar5);
        }
        local_90 = &PTR_FUN_710523d988;
        local_88 = 0;
        if (uVar20 != 0) {
          uVar5 = *(ulong *)(uVar20 + 0x18);
          *(undefined ***)(uVar20 + 0x10) = &PTR_FUN_710523d9a8;
          *(undefined8 *)(uVar20 + 0x18) = 0;
          if (uVar5 != 0) {
            FUN_710392eb40(uVar5);
          }
          FUN_710392eb40(uVar20);
        }
        local_80 = (long ***)&PTR_FUN_710523d988;
        local_78 = 0;
        if (uVar15 == 0) {
          return;
        }
        uVar5 = *(ulong *)(uVar15 + 0x18);
        *(undefined ***)(uVar15 + 0x10) = &PTR_FUN_710523d9a8;
        *(undefined8 *)(uVar15 + 0x18) = 0;
        if (uVar5 != 0) {
          FUN_710392eb40(uVar5);
        }
        FUN_710392eb40(uVar15);
        return;
      }
    }
LAB_7101e92378:
                    /* WARNING: Subroutine does not return */
    abort();
  }
  if (0x12 < *(uint *)(param_1 + 0x1dc)) goto LAB_7101e92378;
  puVar25 = *(undefined8 **)(*DAT_7105314510 + 0x158);
  *(undefined4 *)(param_1 + (long)(int)*(uint *)(param_1 + 0x1dc) * 4 + 400) = 2;
  if (*(int *)(param_1 + 0x1dc) < 0x12) {
    uVar4 = *(int *)(param_1 + 0x1dc) + 1;
    *(uint *)(param_1 + 0x1dc) = uVar4;
    if (0x12 < uVar4) goto LAB_7101e92378;
    *(undefined4 *)(param_1 + (long)(int)uVar4 * 4 + 400) = 1;
  }
  FUN_7103778300(0x3f800000,*(long *)(param_1 + 0x38),0x71043f0fb3);
  if (2 < *(uint *)(param_1 + 0x1f0)) goto LAB_7101e92378;
  cVar2 = *(char *)(*(long *)*puVar25 + (ulong)*(uint *)(param_1 + 0x1f0) * 0x3d700 + 0x3d68c);
  ppppbVar12 = (byte ****)(ulong)(cVar2 == '\x02');
  pppplVar14 = (long ****)(ulong)(cVar2 == '\x03');
  FUN_7101e8e680(param_1,(ulong)(cVar2 == '\0'),(ulong)(cVar2 == '\x01'),(ulong)ppppbVar12,
                 pppplVar14,param_6,param_7,param_8);
  if (*(int *)(param_1 + 500) == 2) {
    lVar1 = *(long *)(*(long *)(DAT_710532f8d0 + 8) + 0x40);
    if ((ulong)(*(long *)(*(long *)(DAT_710532f8d0 + 8) + 0x48) - lVar1 >> 3) < 3) {
      local_80 = (long ***)0x0;
    }
    else {
      local_80 = *(long ****)(lVar1 + 0x10);
    }
  }
  else {
    local_80 = (long ***)0x1184557dae;
  }
  plVar22 = (long *)(param_1 + 0x50);
  FUN_7103772070(*plVar22,0,&local_80,ppppbVar12,pppplVar14,param_6,param_7,param_8);
  FUN_7103772070(*plVar22,1,&local_80,ppppbVar12,pppplVar14,param_6,param_7,param_8);
  FUN_7103772070(*plVar22,2,&local_80,ppppbVar12,pppplVar14,param_6,param_7,param_8);
  pppplVar11 = &local_80;
  FUN_7103772070(*plVar22,3,pppplVar11,ppppbVar12,pppplVar14,param_6,param_7,param_8);
  switch(cVar2) {
  case '\0':
    iVar9 = 0;
    break;
  case '\x01':
    iVar9 = 1;
    break;
  case '\x02':
    iVar9 = 2;
    break;
  case '\x03':
    iVar9 = 3;
    break;
  default:
    goto switchD_7101e91bcc_default;
  }
  pppplVar11 = (long ****)0x0;
  FUN_7103771a80(plVar22,iVar9,0);
switchD_7101e91bcc_default:
  switch(*(undefined4 *)(*plVar22 + 0x254)) {
  case 0:
    pcVar8 = "cam_save_help_easy";
    break;
  case 1:
    pcVar8 = "cam_save_help_normal";
    break;
  case 2:
    pcVar8 = "cam_save_help_hard";
    break;
  case 3:
    pcVar8 = "cam_save_help_very_easy";
    break;
  default:
    goto switchD_7101e91c1c_default;
  }
  FUN_710377a120(param_1 + 0x40,pcVar8,pppplVar11,ppppbVar12,pppplVar14,param_6,param_7,param_8);
switchD_7101e91c1c_default:
  return;
}

