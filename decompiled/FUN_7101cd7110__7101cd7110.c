// addr:      7101cd7110
// offset:    0x1cd7110
// name:      FUN_7101cd7110
// mangled:   
// signature: undefined __cdecl FUN_7101cd7110(long param_1, undefined4 param_2, undefined8 * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_7101cd7110(long param_1,undefined4 param_2,undefined8 *param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  char *pcVar1;
  char *pcVar2;
  uint uVar3;
  ulong uVar4;
  undefined **local_128;
  ulong local_120;
  undefined **local_118;
  ulong local_110;
  undefined **local_108;
  ulong local_100;
  undefined **local_f8;
  ulong local_f0;
  undefined **local_e8;
  ulong local_e0;
  undefined **local_d8;
  ulong local_d0;
  undefined **local_c8;
  ulong local_c0;
  undefined **local_b8;
  ulong local_b0;
  undefined **local_a8;
  ulong local_a0;
  undefined **local_98;
  ulong local_90;
  undefined **local_88;
  ulong local_80;
  undefined **local_78;
  ulong local_70;
  uint auStack_68 [2];
  char acStack_60 [64];
  
  switch(param_2) {
  case 0:
    FUN_7103778ab0(&local_78,param_3,(long ****)param_3,param_4,param_5,param_6,param_7,param_8);
    if (*(uint *)(param_1 + 0x208) < 7) {
      FUN_710377a120((long)&local_78,
                     (&PTR_s_mnu_share_cat_movie_71050ae580)[(int)*(uint *)(param_1 + 0x208)],
                     param_3,param_4,param_5,param_6,param_7,param_8);
    }
    uVar4 = local_70;
    local_78 = &PTR_FUN_710523d9a8;
    local_70 = 0;
    goto joined_r0x007101cd748c;
  case 1:
    FUN_7103778ab0(&local_88,param_3,(long ****)param_3,param_4,param_5,param_6,param_7,param_8);
    if (*(uint *)(param_1 + 0x20c) < 3) {
      FUN_710377a120((long)&local_88,
                     (&PTR_s_mnu_share_movie_kind_all_71050ae5c0)[(int)*(uint *)(param_1 + 0x20c)],
                     param_3,param_4,param_5,param_6,param_7,param_8);
    }
    uVar4 = local_80;
    local_88 = &PTR_FUN_710523d9a8;
    local_80 = 0;
    goto joined_r0x007101cd748c;
  case 2:
    if (*(int *)(param_1 + 0x208) == 2) {
      FUN_7103778ab0(&local_a8,param_3,(long ****)param_3,param_4,param_5,param_6,param_7,param_8);
      uVar4 = (ulong)*(uint *)(param_1 + 0x230);
      FUN_7101cf20d0(auStack_68,*(ulong *)(param_1 + 0x228),*(uint *)(param_1 + 0x230),param_4,
                     param_5,param_6,param_7,param_8);
      FUN_710377a120((long)&local_a8,acStack_60,uVar4,param_4,param_5,param_6,param_7,param_8);
      uVar4 = local_a0;
      local_a8 = &PTR_FUN_710523d9a8;
      local_a0 = 0;
    }
    else {
      if (*(int *)(param_1 + 0x208) != 1) {
        return;
      }
      FUN_7103778ab0(&local_98,param_3,(long ****)param_3,param_4,param_5,param_6,param_7,param_8);
      uVar4 = (ulong)*(uint *)(param_1 + 0x218);
      FUN_7101cf20d0(auStack_68,*(ulong *)(param_1 + 0x210),*(uint *)(param_1 + 0x218),param_4,
                     param_5,param_6,param_7,param_8);
      FUN_710377a120((long)&local_98,acStack_60,uVar4,param_4,param_5,param_6,param_7,param_8);
      uVar4 = local_90;
      local_98 = &PTR_FUN_710523d9a8;
      local_90 = 0;
    }
joined_r0x007101cd748c:
    if (uVar4 == 0) {
      return;
    }
    goto LAB_7101cd73f8;
  case 3:
    if (*(int *)(param_1 + 0x208) == 2) {
      FUN_7103778ab0(&local_c8,param_3,(long ****)param_3,param_4,param_5,param_6,param_7,param_8);
      if (*(uint *)(param_1 + 0x234) < 5) {
        FUN_710377a120((long)&local_c8,
                       (&PTR_s_mnu_share_data_kind_all_71050ae5e0)[(int)*(uint *)(param_1 + 0x234)],
                       param_3,param_4,param_5,param_6,param_7,param_8);
      }
      uVar4 = local_c0;
      local_c8 = &PTR_FUN_710523d9a8;
      local_c0 = 0;
    }
    else {
      if (*(int *)(param_1 + 0x208) != 1) {
        return;
      }
      FUN_7103778ab0(&local_b8,param_3,(long ****)param_3,param_4,param_5,param_6,param_7,param_8);
      if (*(uint *)(param_1 + 0x21c) < 5) {
        FUN_710377a120((long)&local_b8,
                       (&PTR_s_mnu_share_data_kind_all_71050ae5e0)[(int)*(uint *)(param_1 + 0x21c)],
                       param_3,param_4,param_5,param_6,param_7,param_8);
      }
      uVar4 = local_b0;
      local_b8 = &PTR_FUN_710523d9a8;
      local_b0 = 0;
    }
    break;
  case 4:
    if (*(int *)(param_1 + 0x208) == 2) {
      FUN_7103778ab0(&local_e8,param_3,(long ****)param_3,param_4,param_5,param_6,param_7,param_8);
      if (*(uint *)(param_1 + 0x238) < 4) {
        FUN_710377a120((long)&local_e8,
                       (&PTR_s_mnu_share_data_stage_kind_all_71050ae610)
                       [(int)*(uint *)(param_1 + 0x238)],param_3,param_4,param_5,param_6,param_7,
                       param_8);
      }
      uVar4 = local_e0;
      local_e8 = &PTR_FUN_710523d9a8;
      local_e0 = 0;
    }
    else {
      if (*(int *)(param_1 + 0x208) != 1) {
        return;
      }
      FUN_7103778ab0(&local_d8,param_3,(long ****)param_3,param_4,param_5,param_6,param_7,param_8);
      if (*(uint *)(param_1 + 0x220) < 4) {
        FUN_710377a120((long)&local_d8,
                       (&PTR_s_mnu_share_data_stage_kind_all_71050ae610)
                       [(int)*(uint *)(param_1 + 0x220)],param_3,param_4,param_5,param_6,param_7,
                       param_8);
      }
      uVar4 = local_d0;
      local_d8 = &PTR_FUN_710523d9a8;
      local_d0 = 0;
    }
    break;
  case 5:
    FUN_7103778ab0(&local_f8,param_3,(long ****)param_3,param_4,param_5,param_6,param_7,param_8);
    if (*(uint *)(param_1 + 0x240) < 4) {
      FUN_710377a120((long)&local_f8,
                     (&PTR_s_mnu_share_mii_type_kind_all_71050ae630)
                     [(int)*(uint *)(param_1 + 0x240)],param_3,param_4,param_5,param_6,param_7,
                     param_8);
    }
    uVar4 = local_f0;
    local_f8 = &PTR_FUN_710523d9a8;
    local_f0 = 0;
    break;
  case 6:
    FUN_7103778ab0(&local_108,param_3,(long ****)param_3,param_4,param_5,param_6,param_7,param_8);
    if (*(uint *)(param_1 + 0x244) < 4) {
      FUN_710377a120((long)&local_108,
                     (&PTR_s_mnu_share_stage_range_kind_all_71050ae650)
                     [(int)*(uint *)(param_1 + 0x244)],param_3,param_4,param_5,param_6,param_7,
                     param_8);
    }
    uVar4 = local_100;
    local_108 = &PTR_FUN_710523d9a8;
    local_100 = 0;
    break;
  case 7:
    FUN_7103778ab0(&local_118,param_3,(long ****)param_3,param_4,param_5,param_6,param_7,param_8);
    uVar3 = *(uint *)(param_1 + 0x248);
    if (uVar3 < 2) {
      pcVar1 = "mnu_share_stage_player_num_kind_01";
      if (uVar3 != 1) {
        pcVar1 = "";
      }
      pcVar2 = "mnu_share_stage_player_num_kind_02";
      if (uVar3 != 0) {
        pcVar2 = pcVar1;
      }
      FUN_710377a120((long)&local_118,pcVar2,param_3,param_4,param_5,param_6,param_7,param_8);
    }
    uVar4 = local_110;
    local_118 = &PTR_FUN_710523d9a8;
    local_110 = 0;
    break;
  case 8:
    FUN_7103778ab0(&local_128,param_3,(long ****)param_3,param_4,param_5,param_6,param_7,param_8);
    if (*(uint *)(param_1 + 0x24c) < 3) {
      FUN_710377a120((long)&local_128,
                     (&PTR_s_mnu_share_owner_kind_follow_71050ae670)
                     [(int)*(uint *)(param_1 + 0x24c)],param_3,param_4,param_5,param_6,param_7,
                     param_8);
    }
    uVar4 = local_120;
    local_128 = &PTR_FUN_710523d9a8;
    local_120 = 0;
    break;
  default:
    goto switchD_7101cd7140_default;
  }
  if (uVar4 != 0) {
LAB_7101cd73f8:
    FUN_710392eb40(uVar4);
  }
switchD_7101cd7140_default:
  return;
}

