// addr:      7101ac6fd0
// offset:    0x1ac6fd0
// name:      FUN_7101ac6fd0
// mangled:   
// signature: undefined __cdecl FUN_7101ac6fd0(long param_1, long param_2, long param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_7101ac6fd0(long param_1,long param_2,long param_3,undefined8 param_4,undefined8 param_5,
                   undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  char cVar1;
  char *pcVar2;
  byte bVar3;
  char cVar4;
  
  if (*(char *)(param_3 + 100) == '\x12') {
    cVar1 = *(char *)(param_3 + 0x88) == '\x01';
    cVar4 = '\x02';
    if (!(bool)cVar1) {
      cVar4 = '\x01';
    }
    if (*(char *)(param_3 + 0xd8) == '\x01') {
      cVar1 = cVar4;
    }
    if (*(char *)(param_3 + 0x128) == '\x01') {
      cVar1 = cVar1 + '\x01';
    }
    if (*(char *)(param_3 + 0x178) == '\x01') {
      cVar1 = cVar1 + '\x01';
    }
    if (*(char *)(param_3 + 0x1c8) == '\x01') {
      cVar1 = cVar1 + '\x01';
    }
    if (*(char *)(param_3 + 0x218) == '\x01') {
      cVar1 = cVar1 + '\x01';
    }
    if (*(char *)(param_3 + 0x268) == '\x01') {
      cVar1 = cVar1 + '\x01';
    }
    if (*(char *)(param_3 + 0x2b8) == '\x01') {
      cVar1 = cVar1 + '\x01';
    }
    bVar3 = 0x10;
    if (cVar1 != '\x02') {
      bVar3 = 8;
    }
  }
  else {
    bVar3 = *(int *)(param_3 + 0x68) != 0 | (*(int *)(param_3 + 0x6c) != 0) << 1 |
            (0.0 < *(float *)(param_3 + 0x94)) << 2;
  }
  switch(bVar3) {
  case 1:
    FUN_710377a120(param_1,"mnu_replay_detail_rule_time",param_3,param_4,param_5,param_6,param_7,
                   param_8);
    FUN_710377a280(param_2,(byte *)"mel_rule_select_time",1);
    return;
  case 2:
    pcVar2 = "mnu_replay_detail_rule_stock";
    goto LAB_7101ac7164;
  case 3:
    pcVar2 = "mnu_replay_detail_rule_stock";
    goto LAB_7101ac71b4;
  default:
    FUN_710377a120(param_1,"mnu_replay_detail_rule_time",param_3,param_4,param_5,param_6,param_7,
                   param_8);
    pcVar2 = "mel_rule_select_time_inifinity";
    break;
  case 6:
    pcVar2 = "mnu_replay_detail_rule_stamina";
LAB_7101ac7164:
    FUN_710377a120(param_1,pcVar2,param_3,param_4,param_5,param_6,param_7,param_8);
    pcVar2 = "mel_rule_select_time_inifinity_stock";
LAB_7101ac71d0:
    FUN_710377a280(param_2,(byte *)pcVar2,2);
    return;
  case 7:
    pcVar2 = "mnu_replay_detail_rule_stamina";
LAB_7101ac71b4:
    FUN_710377a120(param_1,pcVar2,param_3,param_4,param_5,param_6,param_7,param_8);
    pcVar2 = "mel_rule_select_time_stock";
    goto LAB_7101ac71d0;
  case 8:
    pcVar2 = "mnu_replay_detail_homerun_single";
    break;
  case 0x10:
    pcVar2 = "mnu_replay_detail_homerun_coop";
  }
  FUN_710377a120(param_2,pcVar2,param_3,param_4,param_5,param_6,param_7,param_8);
  return;
}

