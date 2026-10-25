// addr:      710024a590
// offset:    0x24a590
// name:      FUN_710024a590
// mangled:   
// signature: undefined FUN_710024a590(void)


void FUN_710024a590(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_710509cc08;
  *(undefined1 *)(param_1 + 1) = 0;
  param_1[3] = param_1 + 1;
  param_1[4] = 0x10;
  FUN_71001b47e0((long)param_1,"AuthenticationInfo",-1);
  return;
}

