// addr:      7100256a60
// offset:    0x256a60
// name:      FUN_7100256a60
// mangled:   
// signature: undefined FUN_7100256a60(void)


void FUN_7100256a60(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_710509cc08;
  *(undefined1 *)(param_1 + 1) = 0;
  param_1[3] = param_1 + 1;
  param_1[4] = 0x10;
  FUN_71001b47e0((long)param_1,"PersistentGathering",-1);
  return;
}

