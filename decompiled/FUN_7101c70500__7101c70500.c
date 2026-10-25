// addr:      7101c70500
// offset:    0x1c70500
// name:      FUN_7101c70500
// mangled:   
// signature: char * __cdecl FUN_7101c70500(undefined1 param_1)


char * FUN_7101c70500(undefined1 param_1)

{
  char *pcVar1;
  
  pcVar1 = "mnu_online_room_inside_sysmsg_enter";
  switch(param_1) {
  case 1:
    goto switchD_7101c70528_caseD_1;
  case 2:
  case 3:
    return "mnu_online_room_inside_sysmsg_leave";
  case 4:
    return "mnu_online_room_inside_sysmsg_10ko";
  case 5:
    return "mnu_online_room_inside_sysmsg_30ko";
  case 6:
    return "mnu_online_room_inside_sysmsg_50ko";
  case 7:
    return "mnu_online_room_inside_sysmsg_100ko";
  default:
    pcVar1 = "";
switchD_7101c70528_caseD_1:
    return pcVar1;
  case 9:
    return "mnu_online_room_inside_sysmsg_battle_finish";
  case 10:
    return "mnu_online_room_inside_sysmsg_cannot_battle";
  case 100:
    return "mnu_online_room_inside_sysmsg_battle_start";
  case 0x65:
    return "mnu_online_room_inside_sysmsg_battle_start_c";
  case 0x66:
    return "mnu_online_room_inside_sysmsg_winning_streak";
  case 0x67:
    return "mnu_online_room_inside_chat_own";
  case 0x68:
    return "mnu_online_room_inside_chat_others";
  case 0x69:
    return "mnu_online_room_inside_sysmsg_rule_changing";
  case 0x6a:
    return "mnu_online_room_inside_sysmsg_rule_change";
  case 0x6b:
    return "mnu_online_room_inside_sysmsg_rule_0";
  case 0x6c:
  case 0x6d:
  case 0x6e:
    return "mnu_online_room_inside_sysmsg_rule_1";
  case 0x6f:
    return "mnu_online_room_inside_sysmsg_rule_2";
  case 0x70:
    return "mnu_online_room_inside_sysmsg_rule_3";
  case 0x71:
    return "mnu_online_room_inside_sysmsg_rule_no_change";
  }
}

