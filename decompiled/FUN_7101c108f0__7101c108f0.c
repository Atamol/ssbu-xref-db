// addr:      7101c108f0
// offset:    0x1c108f0
// name:      FUN_7101c108f0
// mangled:   
// signature: undefined __cdecl FUN_7101c108f0(long param_1, undefined1 param_2, long * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_7101c108f0(long param_1,undefined1 param_2,long ****param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  ulong uVar1;
  ulong uVar2;
  char *pcVar3;
  undefined **local_30;
  ulong local_28;
  
  FUN_7103776390(&local_30,(undefined8 *)(**(long **)(param_1 + 0x6a8) + 8),param_3,param_4,param_5,
                 param_6,param_7,param_8);
  switch(param_2) {
  case 2:
    if (*(char *)(param_1 + 0x659) == '\x01') {
      pcVar3 = "bg_banner_rule_stock";
    }
    else if (*(char *)(param_1 + 0x659) == '\x02') {
      pcVar3 = "bg_banner_rule_hp";
    }
    else {
      pcVar3 = "bg_banner_rule_time";
    }
    break;
  case 3:
    pcVar3 = "bg_banner_team_com";
    break;
  case 4:
    pcVar3 = "bg_banner_time_limit";
    break;
  case 5:
    pcVar3 = "bg_banner_stock_num";
    break;
  case 6:
    pcVar3 = "bg_banner_hp_mode";
    break;
  case 7:
    pcVar3 = "bg_banner_victory_cond";
    break;
  case 8:
    pcVar3 = "bg_banner_spirit_icon";
    break;
  case 9:
    pcVar3 = "bg_banner_cp_level";
    break;
  case 10:
    pcVar3 = "bg_banner_handicap_damage";
    break;
  case 0xb:
    pcVar3 = "bg_banner_stage_select";
    break;
  case 0xc:
    pcVar3 = "bg_banner_item_switch";
    break;
  case 0xd:
    pcVar3 = "bg_banner_stage_switch";
    break;
  case 0xe:
    pcVar3 = "bg_banner_team_attack";
    break;
  case 0xf:
    pcVar3 = "bg_banner_def_reaction";
    break;
  case 0x10:
    pcVar3 = "bg_banner_charge_final";
    break;
  case 0x11:
    pcVar3 = "bg_banner_handicap_boost";
    break;
  case 0x12:
    pcVar3 = "bg_banner_stage_gimmick";
    break;
  case 0x13:
    pcVar3 = "bg_banner_stage_number";
    break;
  case 0x14:
    pcVar3 = "bg_banner_stage_change";
    break;
  case 0x15:
    pcVar3 = "bg_banner_recovery_value";
    break;
  case 0x16:
    pcVar3 = "bg_banner_pause";
    break;
  case 0x17:
    pcVar3 = "bg_banner_score_disp";
    break;
  case 0x18:
    pcVar3 = "bg_banner_damage_disp";
    break;
  case 0x19:
  case 0x1a:
    pcVar3 = "bg_banner_rule_detail";
    break;
  case 0x1b:
    pcVar3 = "bg_banner_battle_max_num";
    break;
  case 0x1c:
    pcVar3 = "bg_banner_allbattle_unreversal";
    break;
  case 0x1d:
    pcVar3 = "bg_banner_scaledown_stage";
    break;
  case 0x1e:
    pcVar3 = "bg_banner_drop_bomb";
    break;
  default:
    goto switchD_7101c1093c_default;
  }
  FUN_7103778300(0x3f800000,local_28,(long)pcVar3);
switchD_7101c1093c_default:
  uVar1 = local_28;
  local_30 = &PTR_FUN_710523d988;
  local_28 = 0;
  if (uVar1 != 0) {
    uVar2 = *(ulong *)(uVar1 + 0x18);
    *(undefined ***)(uVar1 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar1 + 0x18) = 0;
    if (uVar2 != 0) {
      FUN_710392eb40(uVar2);
    }
    FUN_710392eb40(uVar1);
  }
  return;
}

