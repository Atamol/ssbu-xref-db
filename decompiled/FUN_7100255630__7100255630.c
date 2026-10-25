// addr:      7100255630
// offset:    0x255630
// name:      FUN_7100255630
// mangled:   
// signature: undefined FUN_7100255630(void)


void FUN_7100255630(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_710509cc08;
  *(undefined1 *)(param_1 + 1) = 0;
  param_1[3] = param_1 + 1;
  param_1[4] = 0x10;
  FUN_71001b47e0((long)param_1,"MatchmakeSession",-1);
  return;
}

