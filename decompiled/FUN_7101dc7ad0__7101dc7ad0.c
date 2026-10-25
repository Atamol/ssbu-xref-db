// addr:      7101dc7ad0
// offset:    0x1dc7ad0
// name:      FUN_7101dc7ad0
// mangled:   
// signature: undefined __cdecl FUN_7101dc7ad0(long param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_7101dc7ad0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  ulong uVar1;
  char *pcVar2;
  undefined **local_30;
  ulong local_28;
  
  FUN_7103776910(&local_30,param_1 + 0x20,(long ****)"set_txt_tabname_active",param_3,param_4,
                 param_5,param_6,param_7,param_8);
  switch(*(undefined4 *)(*(long *)(param_1 + 0x30) + 0x254)) {
  case 0:
    FUN_7103778300(0x3f800000,*(long *)(param_1 + 0x28),0x7104454f7c);
    pcVar2 = "mnu_spirits_directory_select_sort_all";
    break;
  case 1:
    FUN_7103778300(0x3f800000,*(long *)(param_1 + 0x28),0x71042b47c4);
    pcVar2 = "mnu_spirits_directory_select_sort_attacker";
    break;
  case 2:
    FUN_7103778300(0x3f800000,*(long *)(param_1 + 0x28),0x7104270436);
    pcVar2 = "mnu_spirits_directory_select_sort_supporter";
    break;
  case 3:
    FUN_7103778300(0x3f800000,*(long *)(param_1 + 0x28),0x710443353b);
    pcVar2 = "mnu_spirits_directory_select_sort_fighter";
    break;
  case 4:
    FUN_7103778300(0x3f800000,*(long *)(param_1 + 0x28),0x71043adc89);
    pcVar2 = "mnu_spirits_directory_select_sort_master";
    break;
  default:
    goto switchD_7101dc7b18_default;
  }
  FUN_710377a120((long)&local_30,pcVar2,param_3,param_4,param_5,param_6,param_7,param_8);
switchD_7101dc7b18_default:
  uVar1 = local_28;
  local_30 = &PTR_FUN_710523d9a8;
  local_28 = 0;
  if (uVar1 != 0) {
    FUN_710392eb40(uVar1);
  }
  return;
}

