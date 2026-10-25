// addr:      710024cd60
// offset:    0x24cd60
// name:      FUN_710024cd60
// mangled:   
// signature: undefined FUN_710024cd60(void)


void FUN_710024cd60(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_710509cc08;
  *(undefined1 *)(param_1 + 1) = 0;
  param_1[3] = param_1 + 1;
  param_1[4] = 0x10;
  FUN_71001b47e0((long)param_1,"GameSession",-1);
  return;
}

