// addr:      7101a1c070
// offset:    0x1a1c070
// name:      FUN_7101a1c070
// mangled:   
// signature: undefined __cdecl FUN_7101a1c070(long param_1, int * param_2, ulong param_3, undefined8 param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_7101a1c070(long param_1,int *param_2,ulong param_3,undefined8 param_4,long ****param_5,
                   undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  ulong uVar1;
  undefined **local_30;
  ulong local_28;
  
  if (param_2[3] == 0) {
    FUN_7103778300(0x3f800000,*(long *)(param_1 + 8),0x71042c47bc);
  }
  else {
    param_3 = (ulong)(param_2[3] + 2);
    FUN_7103778430(param_1,"score_color_%d",param_3,param_4,param_5,param_6,param_7,param_8);
  }
  FUN_7103776910(&local_30,param_1,(long ****)"set_txt_match",param_3,param_4,param_5,param_6,
                 param_7,param_8);
  if (((*param_2 == 0) || (param_2[3] != 1)) && (param_2[3] != 2)) {
    FUN_710377a120((long)&local_30,"mel_chara_select_world_pw_none",param_3,param_4,param_5,param_6,
                   param_7,param_8);
  }
  else {
    FUN_710377a280((long)&local_30,(byte *)"mel_chara_select_world_pw_n",1);
  }
  uVar1 = local_28;
  local_30 = &PTR_FUN_710523d9a8;
  local_28 = 0;
  if (uVar1 != 0) {
    FUN_710392eb40(uVar1);
  }
  return;
}

