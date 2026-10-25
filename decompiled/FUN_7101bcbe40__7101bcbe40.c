// addr:      7101bcbe40
// offset:    0x1bcbe40
// name:      FUN_7101bcbe40
// mangled:   
// signature: undefined __cdecl FUN_7101bcbe40(long param_1, int param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_7101bcbe40(long param_1,int param_2,undefined8 param_3,undefined8 param_4,
                   undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long lVar1;
  long *plVar2;
  ushort local_14 [2];
  
  if (param_2 - 1U < 0xb) {
    lVar1 = param_1 + 0x2e0;
    switch(param_2) {
    case 1:
      FUN_710377a120(lVar1,"mel_mockbattle_entry",param_3,param_4,param_5,param_6,param_7,param_8);
      return;
    case 2:
      FUN_710377a120(lVar1,"mel_mockbattle_hope_join",param_3,param_4,param_5,param_6,param_7,
                     param_8);
      return;
    case 3:
      FUN_710377a120(lVar1,"mel_mockbattle_preparation",param_3,param_4,param_5,param_6,param_7,
                     param_8);
      return;
    case 4:
      FUN_710377a120(lVar1,"mel_mockbattle_setting_rule",param_3,param_4,param_5,param_6,param_7,
                     param_8);
      return;
    case 5:
      FUN_710377a120(lVar1,"mel_mockbattle_sel_stage",param_3,param_4,param_5,param_6,param_7,
                     param_8);
      return;
    default:
      FUN_710377a120(lVar1,"mel_mockbattle_sel_fighter",param_3,param_4,param_5,param_6,param_7,
                     param_8);
      return;
    case 8:
      FUN_710377a120(lVar1,"mel_mockbattle_check_rule",param_3,param_4,param_5,param_6,param_7,
                     param_8);
      return;
    case 9:
      FUN_710377a120(lVar1,"mel_mockbattle_result",param_3,param_4,param_5,param_6,param_7,param_8);
      return;
    case 10:
      FUN_710377a120(lVar1,"mel_mockbattle_bye",param_3,param_4,param_5,param_6,param_7,param_8);
      return;
    case 0xb:
      FUN_710377a120(lVar1,"mel_mockbattle_battle",param_3,param_4,param_5,param_6,param_7,param_8);
      return;
    }
  }
  plVar2 = *(long **)(*(long *)(param_1 + 0x2e8) + 0x10);
  if (plVar2 != (long *)0x0) {
    local_14[0] = 0;
    local_14[1] = 0;
    FUN_71037a2270(plVar2,local_14,0,0);
  }
  return;
}

