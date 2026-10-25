// addr:      7101bbbf80
// offset:    0x1bbbf80
// name:      FUN_7101bbbf80
// mangled:   
// signature: undefined __cdecl FUN_7101bbbf80(undefined8 param_1, undefined4 param_2, long param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_7101bbbf80(undefined8 param_1,undefined4 param_2,long param_3,undefined8 param_4,
                   undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  switch(param_2) {
  case 2:
    FUN_710377a280(param_3,(byte *)"mel_training_cp_lv_n",1);
    return;
  case 3:
    FUN_710377a120(param_3,"mel_training_cp_walk",param_3,param_4,param_5,param_6,param_7,param_8);
    return;
  case 4:
    FUN_710377a120(param_3,"mel_training_cp_escape",param_3,param_4,param_5,param_6,param_7,param_8)
    ;
    return;
  case 5:
    FUN_710377a120(param_3,"mel_training_cp_jump",param_3,param_4,param_5,param_6,param_7,param_8);
    return;
  case 6:
    FUN_710377a120(param_3,"mel_training_cp_attack",param_3,param_4,param_5,param_6,param_7,param_8)
    ;
    return;
  case 7:
    FUN_710377a120(param_3,"mel_training_cp_smash_side",param_3,param_4,param_5,param_6,param_7,
                   param_8);
    return;
  case 8:
    FUN_710377a120(param_3,"mel_training_cp_operation",param_3,param_4,param_5,param_6,param_7,
                   param_8);
    return;
  default:
    FUN_710377a120(param_3,"mel_training_cp_stop",param_3,param_4,param_5,param_6,param_7,param_8);
    return;
  }
}

