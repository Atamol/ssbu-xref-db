// addr:      7101991290
// offset:    0x1991290
// name:      FUN_7101991290
// mangled:   
// signature: undefined __cdecl FUN_7101991290(long param_1, undefined4 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_7101991290(long param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
                   undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  char *pcVar1;
  undefined8 uVar2;
  uint local_68 [2];
  undefined1 local_60;
  
  if (**(long **)(param_1 + 8) == 0) {
    return;
  }
  if (*(int *)(param_1 + 0x28) == 4) {
    *(undefined4 *)(param_1 + 0x2c) = param_2;
    return;
  }
  *(undefined4 *)(param_1 + 0x28) = param_2;
  uVar2 = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  local_60 = 0;
  local_68[0] = 0;
  local_68[1] = 0;
  FUN_710062dc20(local_68,"mnu_amiibo_journey_online_mark_%d");
  switch(*(undefined4 *)(param_1 + 0x28)) {
  case 1:
    pcVar1 = "mnu_amiibo_journey_wait";
    goto LAB_7101991388;
  case 2:
    pcVar1 = "mnu_amiibo_journey_match";
    break;
  case 3:
    pcVar1 = "mnu_amiibo_journey_newsletter";
LAB_7101991388:
    FUN_710377a280(param_1,(byte *)pcVar1,2);
    return;
  case 4:
    FUN_710377a120(param_1,"mnu_amiibo_journey_communication_error",uVar2,param_4,param_5,param_6,
                   param_7,param_8);
    return;
  case 5:
    pcVar1 = "mnu_amiibo_journey_prepare";
    break;
  case 6:
    pcVar1 = "mnu_amiibo_journey_end";
    break;
  default:
    goto LAB_71019913f4;
  }
  FUN_710377a280(param_1,(byte *)pcVar1,1);
LAB_71019913f4:
  return;
}

