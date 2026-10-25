// addr:      710024d1b0
// offset:    0x24d1b0
// name:      FUN_710024d1b0
// mangled:   
// signature: undefined FUN_710024d1b0(void)


void FUN_710024d1b0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_710509cc08;
  *(undefined1 *)(param_1 + 1) = 0;
  param_1[3] = param_1 + 1;
  param_1[4] = 0x10;
  FUN_71001b47e0((long)param_1,"Gathering",-1);
  return;
}

