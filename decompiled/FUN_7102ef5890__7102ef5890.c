// addr:      7102ef5890
// offset:    0x2ef5890
// name:      FUN_7102ef5890
// mangled:   
// signature: undefined8 __cdecl FUN_7102ef5890(undefined8 param_1, undefined8 param_2, uint * param_3)


undefined8 FUN_7102ef5890(undefined8 param_1,undefined8 param_2,uint *param_3)

{
  char *pcVar1;
  
  if (DAT_71052c35c8 != 0) {
    if ((**(uint **)(DAT_71052c35c8 + 8) | 2) == 2) {
      pcVar1 = "resultstage_set_walk_%02d";
    }
    else {
      pcVar1 = "resultstage_set_car_%02d";
    }
    FUN_710062dc20(param_3,pcVar1);
    return 1;
  }
  return 0;
}

