// addr:      7100183230
// offset:    0x183230
// name:      FUN_7100183230
// mangled:   
// signature: undefined FUN_7100183230(void)


undefined8 FUN_7100183230(long param_1)

{
  (**(code **)(**(long **)(param_1 + 0x90) + 400))();
  FUN_710017e4f0(*(long **)(param_1 + 0x90));
  *(char **)(param_1 + 0x40) = "LocalEventJob::WaitBackgroundJobEnd";
  *(code **)(param_1 + 0x30) = FUN_7100183280;
  *(undefined8 *)(param_1 + 0x38) = 0;
  return 0;
}

