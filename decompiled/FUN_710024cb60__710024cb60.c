// addr:      710024cb60
// offset:    0x24cb60
// name:      FUN_710024cb60
// mangled:   
// signature: undefined FUN_710024cb60(void)


void FUN_710024cb60(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_710509cc08;
  *(undefined1 *)(param_1 + 1) = 0;
  param_1[3] = param_1 + 1;
  param_1[4] = 0x10;
  FUN_71001b47e0((long)param_1,"DynamicGathering",-1);
  return;
}

