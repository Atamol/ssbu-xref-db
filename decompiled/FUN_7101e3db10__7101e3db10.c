// addr:      7101e3db10
// offset:    0x1e3db10
// name:      FUN_7101e3db10
// mangled:   
// signature: undefined __cdecl FUN_7101e3db10(long param_1, undefined8 param_2, long * * * * * * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_7101e3db10(long param_1,undefined8 param_2,long *********param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  char cVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  bool bVar4;
  ushort uVar5;
  long ****pppplVar6;
  ulong uVar7;
  undefined **ppuVar8;
  char *pcVar9;
  long ****pppplVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  long lVar15;
  uint uVar16;
  undefined **local_118;
  ulong local_110;
  undefined **local_108;
  ulong local_100 [8];
  undefined **local_c0;
  undefined **local_b8;
  undefined8 uStack_b0;
  
  uVar12 = (ulong)*(uint *)(*(long *)(param_1 + 0x30) + 0x2a4);
  uVar14 = (*(long *)(param_1 + 0x58) - *(long *)(param_1 + 0x50) >> 2) * -0x5555555555555555;
  if (uVar14 < uVar12 || uVar14 - uVar12 == 0) {
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_out_of_range();
  }
  lVar11 = *(long *)(param_1 + 0x50) + uVar12 * 0xc;
  cVar1 = *(char *)(lVar11 + 4);
  uVar16 = *(uint *)(lVar11 + 8);
  uVar12 = (ulong)uVar16;
  if (cVar1 == '\0') {
    lVar11 = param_1 + 8;
    FUN_7103778300(0x3f800000,*(long *)(param_1 + 0x10),0x71042e77d4);
    FUN_7103776910(&local_c0,lVar11,(long ****)"set_txt_facility",param_3,param_4,param_5,param_6,
                   param_7,param_8);
    FUN_710377a120((long)&local_c0,"cam_gym_title",param_3,param_4,param_5,param_6,param_7,param_8);
    ppuVar8 = local_b8;
    local_c0 = &PTR_FUN_710523d9a8;
    local_b8 = (undefined **)0x0;
    if (ppuVar8 != (undefined **)0x0) {
      FUN_710392eb40((ulong)ppuVar8);
    }
    FUN_7103776910(&local_c0,lVar11,(long ****)"set_rep_facility_bg",param_3,param_4,param_5,param_6
                   ,param_7,param_8);
    ppuVar8 = local_b8;
    FUN_7103778b80((long)local_b8,param_1 + 0x248,param_3,param_4,param_5,param_6,param_7,param_8);
    local_c0 = &PTR_FUN_710523d9a8;
    local_b8 = (undefined **)0x0;
    if (ppuVar8 != (undefined **)0x0) {
      FUN_710392eb40((ulong)ppuVar8);
    }
    FUN_7103778300(0x3f800000,*(long *)(param_1 + 0x10),0x7104401aef);
    FUN_7103778300(0x3f800000,*(long *)(param_1 + 0x10),0x710435bdc9);
    FUN_7103778300(0x3f800000,*(long *)(param_1 + 0x10),0x7104455098);
    FUN_7103778300(0x3f800000,*(long *)(param_1 + 0x10),0x71043cfa1a);
    FUN_7103776910(&local_c0,lVar11,(long ****)"set_txt_up_00",param_3,param_4,param_5,param_6,
                   param_7,param_8);
    FUN_710377a120((long)&local_c0,"cam_fac_menu_exp_up",param_3,param_4,param_5,param_6,param_7,
                   param_8);
joined_r0x007101e3e1a4:
    local_c0 = &PTR_FUN_710523d9a8;
    ppuVar3 = (undefined **)0x0;
    ppuVar2 = local_b8;
    ppuVar8 = (undefined **)0x0;
  }
  else {
    if (cVar1 != '\x01') {
      ppuVar8 = local_b8;
      if (cVar1 != '\x02') goto LAB_7101e3e1ac;
      lVar11 = param_1 + 8;
      FUN_7103778300(0x3f800000,*(long *)(param_1 + 0x10),0x7104281094);
      FUN_7103776910(&local_c0,lVar11,(long ****)"set_txt_facility",param_3,param_4,param_5,param_6,
                     param_7,param_8);
      FUN_710377a120((long)&local_c0,"cam_searchfield_title",param_3,param_4,param_5,param_6,param_7
                     ,param_8);
      ppuVar8 = local_b8;
      local_c0 = &PTR_FUN_710523d9a8;
      local_b8 = (undefined **)0x0;
      if (ppuVar8 != (undefined **)0x0) {
        FUN_710392eb40((ulong)ppuVar8);
      }
      FUN_7103776910(&local_c0,lVar11,(long ****)"set_rep_facility_bg",param_3,param_4,param_5,
                     param_6,param_7,param_8);
      ppuVar8 = local_b8;
      if (2 < uVar16) goto LAB_7101e3e2dc;
      FUN_7103778b80((long)local_b8,param_1 + uVar12 * 0x10 + 0x348,param_3,param_4,param_5,param_6,
                     param_7,param_8);
      local_c0 = &PTR_FUN_710523d9a8;
      local_b8 = (undefined **)0x0;
      if (ppuVar8 != (undefined **)0x0) {
        FUN_710392eb40((ulong)ppuVar8);
      }
      FUN_7103778300(0x3f800000,*(long *)(param_1 + 0x10),0x71042f88d7);
      FUN_7103776910(&local_c0,lVar11,(long ****)"set_txt_data",param_3,param_4,param_5,param_6,
                     param_7,param_8);
      FUN_7103776910(&local_108,lVar11,(long ****)"set_txt_searchtime",param_3,param_4,param_5,
                     param_6,param_7,param_8);
      uVar16 = uVar16 & 0xff;
      if (uVar16 == 2) {
        FUN_710377a120((long)&local_c0,"cam_fac_menu_accessible_energy",param_3,param_4,param_5,
                       param_6,param_7,param_8);
        pcVar9 = "cam_searchfield_required_time_2";
LAB_7101e3e184:
        FUN_710377a120((long)&local_108,pcVar9,param_3,param_4,param_5,param_6,param_7,param_8);
      }
      else {
        if (uVar16 == 1) {
          FUN_710377a120((long)&local_c0,"cam_fac_menu_accessible_support_item",param_3,param_4,
                         param_5,param_6,param_7,param_8);
          pcVar9 = "cam_searchfield_required_time_1";
          goto LAB_7101e3e184;
        }
        if (uVar16 == 0) {
          FUN_710377a120((long)&local_c0,"cam_fac_menu_accessible_sp",param_3,param_4,param_5,
                         param_6,param_7,param_8);
          pcVar9 = "cam_searchfield_required_time_0";
          goto LAB_7101e3e184;
        }
        if ((long *)local_b8[2] != (long *)0x0) {
          FUN_71037a28a0((long *)local_b8[2],&DAT_7104867c2e);
        }
        if (*(long **)(local_100[0] + 0x10) != (long *)0x0) {
          FUN_71037a28a0(*(long **)(local_100[0] + 0x10),&DAT_7104867c2e);
        }
      }
      uVar14 = local_100[0];
      local_108 = &PTR_FUN_710523d9a8;
      local_100[0] = 0;
      if (uVar14 != 0) {
        FUN_710392eb40(uVar14);
      }
      goto joined_r0x007101e3e1a4;
    }
    lVar11 = param_1 + 8;
    FUN_7103778300(0x3f800000,*(long *)(param_1 + 0x10),0x71042f88cf);
    FUN_7103776910(&local_c0,lVar11,(long ****)"set_txt_facility",param_3,param_4,param_5,param_6,
                   param_7,param_8);
    FUN_710377a120((long)&local_c0,"cam_school_title",param_3,param_4,param_5,param_6,param_7,
                   param_8);
    ppuVar8 = local_b8;
    local_c0 = &PTR_FUN_710523d9a8;
    local_b8 = (undefined **)0x0;
    if (ppuVar8 != (undefined **)0x0) {
      FUN_710392eb40((ulong)ppuVar8);
    }
    FUN_7103776910(&local_c0,lVar11,(long ****)"set_rep_facility_bg",param_3,param_4,param_5,param_6
                   ,param_7,param_8);
    ppuVar8 = local_b8;
    if (0xe < uVar16) {
LAB_7101e3e2dc:
                    /* WARNING: Subroutine does not return */
      abort();
    }
    FUN_7103778b80((long)local_b8,param_1 + uVar12 * 0x10 + 600,param_3,param_4,param_5,param_6,
                   param_7,param_8);
    local_c0 = &PTR_FUN_710523d9a8;
    local_b8 = (undefined **)0x0;
    if (ppuVar8 != (undefined **)0x0) {
      FUN_710392eb40((ulong)ppuVar8);
    }
    lVar15 = *(long *)(DAT_710532f730 + 8);
    pppplVar6 = (long ****)FUN_71032a3bd0(*(long *)(lVar15 + 0x208),uVar16);
    uVar7 = FUN_71032a3d90(*(long *)(*(long *)(lVar15 + 0x208) + 8),0x1530ff0e86);
    uVar14 = uVar7 & 0xffffffffff;
    if ((((ulong)pppplVar6 & 0xff00000000000000) != 0x5200000000000000) ||
       (((ulong)pppplVar6 & 0xffffffffff) == 0)) {
      if ((uVar7 & 0xff00000000000000) == 0x5200000000000000) goto joined_r0x007101e3dd88;
LAB_7101e3dee4:
      FUN_7103778300(0x3f800000,*(long *)(param_1 + 0x10),0x71042f88d7);
      FUN_7103776910(&local_c0,lVar11,(long ****)"set_txt_data",param_3,param_4,param_5,param_6,
                     param_7,param_8);
      FUN_710377a120((long)&local_c0,"cam_fac_menu_forget_school",param_3,param_4,param_5,param_6,
                     param_7,param_8);
      goto joined_r0x007101e3e1a4;
    }
    if (((uVar7 & 0xff00000000000000) == 0x5200000000000000) && (uVar14 != 0)) {
      uVar14 = (uVar7 ^ (ulong)pppplVar6) & 0xffffffffff;
joined_r0x007101e3dd88:
      if (uVar14 == 0) goto LAB_7101e3dee4;
    }
    FUN_7103778300(0x3f800000,*(long *)(param_1 + 0x10),0x7104401aef);
    bVar4 = FUN_71032a50f0(*(long *)(lVar15 + 0x208),(ulong)pppplVar6);
    if (bVar4) {
      pcVar9 = "caption_largeup";
    }
    else {
      pcVar9 = "caption_up";
    }
    FUN_7103778300(0x3f800000,*(long *)(param_1 + 0x10),(long)pcVar9);
    local_b8 = (undefined **)0x0;
    uStack_b0 = 0;
    local_c0 = (undefined **)0x0;
    pppplVar10 = pppplVar6;
    FUN_71032a3e90((long *)&local_108,*(long *)(lVar15 + 0x208),(ulong)pppplVar6);
    FUN_71032a5330((long *)&local_108,(ulong *)&local_c0,pppplVar10,param_4,param_5,param_6,param_7,
                   param_8);
    FUN_7103778430(lVar11,"item_up_%d",((long)local_b8 - (long)local_c0 >> 3) * -0x71c71c71c71c71c7,
                   param_4,param_5,param_6,param_7,param_8);
    ppuVar8 = local_b8;
    if (local_b8 != local_c0) {
      uVar14 = 0;
      uVar16 = 1;
      do {
        uVar7 = (ulong)(uVar16 - 1);
        FUN_7103776910(&local_108,lVar11,(long ****)"set_txt_up_%02d",uVar7,param_4,param_5,param_6,
                       param_7,param_8);
        uVar13 = ((long)local_b8 - (long)local_c0 >> 3) * -0x71c71c71c71c71c7;
        if (uVar13 < uVar14 || uVar13 - uVar14 == 0) goto LAB_7101e3e2d0;
        FUN_710377a120((long)&local_108,(char *)(local_c0 + uVar14 * 9 + 1),uVar7,param_4,param_5,
                       param_6,param_7,param_8);
        uVar14 = local_100[0];
        local_108 = &PTR_FUN_710523d9a8;
        local_100[0] = 0;
        if (uVar14 != 0) {
          FUN_710392eb40(uVar14);
        }
        uVar7 = ((long)local_b8 - (long)local_c0 >> 3) * -0x71c71c71c71c71c7;
        uVar14 = (ulong)uVar16;
        uVar16 = uVar16 + 1;
        ppuVar8 = local_c0;
      } while (uVar14 <= uVar7 && uVar7 - uVar14 != 0);
    }
    if (ppuVar8 != (undefined **)0x0) {
      local_b8 = ppuVar8;
      FUN_710392eb40((ulong)ppuVar8);
    }
    bVar4 = FUN_71032a5210(*(long *)(lVar15 + 0x208),(ulong)pppplVar6);
    if (bVar4) {
      pcVar9 = "caption_largedown";
    }
    else {
      pcVar9 = "caption_down";
    }
    FUN_7103778300(0x3f800000,*(long *)(param_1 + 0x10),(long)pcVar9);
    local_b8 = (undefined **)0x0;
    uStack_b0 = 0;
    local_c0 = (undefined **)0x0;
    FUN_71032a40d0((long *)&local_108,*(long *)(lVar15 + 0x208),(ulong)pppplVar6);
    FUN_71032a5330((long *)&local_108,(ulong *)&local_c0,pppplVar6,param_4,param_5,param_6,param_7,
                   param_8);
    FUN_7103778430(lVar11,"item_down_%d",
                   ((long)local_b8 - (long)local_c0 >> 3) * -0x71c71c71c71c71c7,param_4,param_5,
                   param_6,param_7,param_8);
    ppuVar3 = local_b8;
    ppuVar2 = local_b8;
    ppuVar8 = local_b8;
    if (local_b8 != local_c0) {
      uVar14 = 0;
      uVar16 = 1;
      do {
        uVar7 = (ulong)(uVar16 - 1);
        FUN_7103776910(&local_108,lVar11,(long ****)"set_txt_down_%02d",uVar7,param_4,param_5,
                       param_6,param_7,param_8);
        uVar13 = ((long)local_b8 - (long)local_c0 >> 3) * -0x71c71c71c71c71c7;
        if (uVar13 < uVar14 || uVar13 - uVar14 == 0) {
LAB_7101e3e2d0:
                    /* WARNING: Subroutine does not return */
          std::__vector_base_common<true>::__throw_out_of_range();
        }
        FUN_710377a120((long)&local_108,(char *)(local_c0 + uVar14 * 9 + 1),uVar7,param_4,param_5,
                       param_6,param_7,param_8);
        uVar14 = local_100[0];
        local_108 = &PTR_FUN_710523d9a8;
        local_100[0] = 0;
        if (uVar14 != 0) {
          FUN_710392eb40(uVar14);
        }
        uVar7 = ((long)local_b8 - (long)local_c0 >> 3) * -0x71c71c71c71c71c7;
        uVar14 = (ulong)uVar16;
        uVar16 = uVar16 + 1;
        ppuVar3 = local_c0;
        ppuVar2 = local_c0;
        ppuVar8 = local_b8;
      } while (uVar14 <= uVar7 && uVar7 - uVar14 != 0);
    }
  }
  local_b8 = ppuVar3;
  if (ppuVar2 != (undefined **)0x0) {
    FUN_710392eb40((ulong)ppuVar2);
    ppuVar8 = local_b8;
  }
LAB_7101e3e1ac:
  local_b8 = ppuVar8;
  uVar5 = FUN_7102512d40(cVar1,uVar12);
  lVar11 = *(long *)(*(long *)(DAT_710532f730 + 8) + 0x1d8);
  uVar12 = FUN_71032a9470(lVar11,uVar5);
  FUN_71032a9540((uint *)&local_c0,lVar11,uVar12);
  FUN_71003a4ca0((uint *)&local_108,"spi_%s",&local_b8,uVar12,param_4,param_5,param_6,param_7,
                 param_8);
  FUN_7103776640(&local_118,param_1 + 8,(byte ****)"set_parts_txt_name",uVar12,param_4,param_5,
                 param_6,param_7,param_8);
  FUN_7103776910(&local_c0,(long)&local_118,(long ****)"set_txt_help",uVar12,param_4,param_5,param_6
                 ,param_7,param_8);
  FUN_710377a120((long)&local_c0,(char *)local_100,uVar12,param_4,param_5,param_6,param_7,param_8);
  ppuVar8 = local_b8;
  local_c0 = &PTR_FUN_710523d9a8;
  local_b8 = (undefined **)0x0;
  if (ppuVar8 != (undefined **)0x0) {
    FUN_710392eb40((ulong)ppuVar8);
  }
  uVar12 = local_110;
  local_118 = &PTR_FUN_710523d988;
  local_110 = 0;
  if (uVar12 != 0) {
    uVar14 = *(ulong *)(uVar12 + 0x18);
    *(undefined ***)(uVar12 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar12 + 0x18) = 0;
    if (uVar14 != 0) {
      FUN_710392eb40(uVar14);
    }
    FUN_710392eb40(uVar12);
  }
  return;
}

