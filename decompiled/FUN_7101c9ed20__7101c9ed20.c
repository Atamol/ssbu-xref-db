// addr:      7101c9ed20
// offset:    0x1c9ed20
// name:      FUN_7101c9ed20
// mangled:   
// signature: undefined __cdecl FUN_7101c9ed20(long param_1, long param_2, undefined1 * param_3, undefined8 param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_7101c9ed20(long param_1,long param_2,undefined1 *param_3,undefined8 param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  char cVar1;
  ulong uVar2;
  char *pcVar3;
  undefined1 *puVar4;
  undefined **local_38;
  ulong local_30;
  ushort local_24 [2];
  
  puVar4 = param_3;
  FUN_7103776910(&local_38,param_1 + 0x118,(long ****)"set_txt_help",param_3,param_4,param_5,param_6
                 ,param_7,param_8);
  switch(*param_3) {
  case 0:
    cVar1 = *(char *)(param_2 + 1);
    if (cVar1 == '\x01') {
      pcVar3 = "mnu_anyone_rule_edit_help_mel";
    }
    else if (cVar1 == '\x02') {
      pcVar3 = "mnu_anyone_rule_edit_help_mel_team";
    }
    else {
      if (cVar1 != '\x03') goto switchD_7101c9ed68_default;
      pcVar3 = "mnu_anyone_rule_edit_help_1on1";
    }
    break;
  case 1:
    cVar1 = *(char *)(param_2 + 2);
    if (cVar1 == '\x01') {
      pcVar3 = "mnu_anyone_rule_edit_help_time";
    }
    else if (cVar1 == '\x02') {
      pcVar3 = "mnu_anyone_rule_edit_help_stock";
    }
    else {
      if (cVar1 != '\x03') goto switchD_7101c9ed68_default;
      pcVar3 = "mnu_anyone_rule_edit_help_stamina";
    }
    break;
  case 2:
    pcVar3 = "mnu_anyone_rule_edit_help_stamina_n";
    break;
  case 3:
    pcVar3 = "mnu_anyone_rule_edit_help_stock_n";
    break;
  case 4:
    if ((*(byte *)(param_2 + 2) & 0xfe) == 2) {
      pcVar3 = "mnu_anyone_rule_edit_help_time_end_n";
    }
    else {
      pcVar3 = "mnu_anyone_rule_edit_help_time_n";
    }
    break;
  case 5:
    switch(*(undefined1 *)(param_2 + 6)) {
    case 1:
      pcVar3 = "mnu_anyone_rule_edit_help_stg_all";
      break;
    case 2:
      pcVar3 = "mnu_anyone_rule_edit_help_no_gimmick";
      break;
    case 3:
      pcVar3 = "mnu_anyone_rule_edit_help_battlefield";
      break;
    case 4:
      pcVar3 = "mnu_anyone_rule_edit_help_end";
      break;
    case 5:
      pcVar3 = "mnu_anyone_rule_edit_help_battlefield_s";
      break;
    default:
      goto switchD_7101c9ed68_default;
    }
    break;
  case 6:
    pcVar3 = "mnu_anyone_rule_edit_help_customize";
    break;
  case 7:
    if ((*(byte *)(param_2 + 9) & 1) == 0) {
      pcVar3 = "mnu_anyone_rule_edit_help_charge_off";
    }
    else {
      pcVar3 = "mnu_anyone_rule_edit_help_charge_on";
    }
    break;
  default:
switchD_7101c9ed68_default:
    if (*(long **)(local_30 + 0x10) != (long *)0x0) {
      local_24[0] = 0;
      local_24[1] = 0;
      FUN_71037a2270(*(long **)(local_30 + 0x10),local_24,0,0);
    }
    goto LAB_7101c9eee0;
  }
  FUN_710377a120((long)&local_38,pcVar3,puVar4,param_4,param_5,param_6,param_7,param_8);
LAB_7101c9eee0:
  uVar2 = local_30;
  local_38 = &PTR_FUN_710523d9a8;
  local_30 = 0;
  if (uVar2 != 0) {
    FUN_710392eb40(uVar2);
  }
  return;
}

