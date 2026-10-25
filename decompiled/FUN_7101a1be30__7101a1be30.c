// addr:      7101a1be30
// offset:    0x1a1be30
// name:      FUN_7101a1be30
// mangled:   
// signature: undefined __cdecl FUN_7101a1be30(long param_1, int * param_2, ulong param_3, ulong param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_7101a1be30(long param_1,int *param_2,ulong param_3,ulong param_4,long ****param_5,
                   undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  uint uVar1;
  ulong uVar2;
  undefined **local_70;
  ulong local_68;
  undefined **local_60;
  ulong local_58;
  undefined **local_50;
  ulong local_48;
  ushort local_34 [2];
  
  if (*param_2 == 0) {
    FUN_7103778300(0x3f800000,*(long *)(param_1 + 8),0x71042c47bc);
  }
  else {
    param_3 = (ulong)(param_2[3] + 2);
    FUN_7103778430(param_1,"score_color_%d",param_3,param_4,param_5,param_6,param_7,param_8);
  }
  FUN_7103776910(&local_60,param_1,(long ****)"set_txt_score_l",param_3,param_4,param_5,param_6,
                 param_7,param_8);
  FUN_7103776910(&local_70,param_1,(long ****)"set_txt_score_m",param_3,param_4,param_5,param_6,
                 param_7,param_8);
  if (*param_2 == 0) {
    FUN_710377a120((long)&local_60,"mel_chara_select_high_score_none",param_3,param_4,param_5,
                   param_6,param_7,param_8);
    FUN_710377a120((long)&local_70,"mel_chara_select_high_score_none",param_3,param_4,param_5,
                   param_6,param_7,param_8);
  }
  else if (*param_2 == 2) {
    uVar1 = param_2[2];
    uVar2 = (ulong)uVar1 / 0xe10;
    if (0x3e6 < uVar1 / 0xe10) {
      uVar2 = 999;
    }
    param_4 = (ulong)(uVar1 / 0x3c + (uVar1 / 0xe10) * -0x3c) + uVar2 * 1000;
    param_5 = (long ****)((ulong)((uVar1 % 0x3c) * 100) / 0x3c);
    FUN_710377a280((long)&local_60,(byte *)"mel_chara_select_kumite_clear_time",2);
    param_3 = 2;
    FUN_710377a280((long)&local_70,(byte *)"mel_chara_select_kumite_clear_time",2);
  }
  else {
    FUN_710377a280((long)&local_60,(byte *)"mel_chara_select_kumite_defeated_score",1);
    param_4 = (ulong)(uint)param_2[1];
    param_3 = 1;
    FUN_710377a280((long)&local_70,(byte *)"mel_chara_select_kumite_defeated_score",1);
  }
  FUN_7103776910(&local_50,param_1,(long ****)"set_txt_worldscore",param_3,param_4,param_5,param_6,
                 param_7,param_8);
  if ((*param_2 == 0) || (param_2[3] != 1)) {
    uVar2 = local_48;
    if (*(long **)(local_48 + 0x10) != (long *)0x0) {
      local_34[0] = 0;
      local_34[1] = 0;
      FUN_71037a2270(*(long **)(local_48 + 0x10),local_34,0,0);
    }
  }
  else {
    FUN_710377a280((long)&local_50,(byte *)"mel_chara_select_world_pw_n",1);
    uVar2 = local_48;
  }
  local_50 = &PTR_FUN_710523d9a8;
  local_48 = 0;
  if (uVar2 != 0) {
    FUN_710392eb40(uVar2);
  }
  uVar2 = local_68;
  local_70 = &PTR_FUN_710523d9a8;
  local_68 = 0;
  if (uVar2 != 0) {
    FUN_710392eb40(uVar2);
  }
  uVar2 = local_58;
  local_60 = &PTR_FUN_710523d9a8;
  local_58 = 0;
  if (uVar2 != 0) {
    FUN_710392eb40(uVar2);
  }
  return;
}

