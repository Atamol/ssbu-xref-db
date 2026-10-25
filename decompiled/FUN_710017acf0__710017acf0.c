// addr:      710017acf0
// offset:    0x17acf0
// name:      FUN_710017acf0
// mangled:   
// signature: undefined FUN_710017acf0(void)


void FUN_710017acf0(long param_1)

{
  (**(code **)(**(long **)(param_1 + 0xa0) + 0x170))();
  *(code **)(param_1 + 0x30) = FUN_710013da20;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(char **)(param_1 + 0x40) = "CreateSessionJob::CompleteProcess";
  return;
}

