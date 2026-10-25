// addr:      7101a90fb0
// offset:    0x1a90fb0
// name:      FUN_7101a90fb0
// mangled:   
// signature: undefined __cdecl FUN_7101a90fb0(long param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_7101a90fb0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  uint uVar1;
  ulong uVar2;
  char *pcVar3;
  undefined **local_30;
  ulong local_28;
  
  FUN_7103776910(&local_30,**(long **)(param_1 + 0x120) + 8,(long ****)"set_txt_title",param_3,
                 param_4,param_5,param_6,param_7,param_8);
  uVar1 = *(uint *)(param_1 + 0x377c);
  if (7 < uVar1) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  if (*(char *)(param_1 + (long)(int)uVar1 * 0x6c8 + 0x7ca) == '\0') {
    switch(uVar1) {
    case 0:
      pcVar3 = "mnu_clear_getter_page_name_melee";
      break;
    case 1:
      pcVar3 = "mnu_clear_getter_page_name_campaign";
      break;
    case 2:
      pcVar3 = "mnu_clear_getter_page_name_spirits";
      break;
    case 3:
      pcVar3 = "mnu_clear_getter_page_name_spirits_2";
      break;
    case 4:
      pcVar3 = "mnu_clear_getter_page_name_standard";
      break;
    case 5:
      pcVar3 = "mnu_clear_getter_page_name_other";
      break;
    case 6:
      pcVar3 = "mnu_clear_getter_page_name_etc";
      break;
    case 7:
      pcVar3 = "mnu_clear_getter_page_name_online";
      break;
    default:
      goto switchD_7101a91050_default;
    }
  }
  else {
    pcVar3 = "mnu_clear_getter_page_name_unknown";
  }
  FUN_710377a120((long)&local_30,pcVar3,param_3,param_4,param_5,param_6,param_7,param_8);
switchD_7101a91050_default:
  uVar2 = local_28;
  local_30 = &PTR_FUN_710523d9a8;
  local_28 = 0;
  if (uVar2 != 0) {
    FUN_710392eb40(uVar2);
  }
  return;
}

