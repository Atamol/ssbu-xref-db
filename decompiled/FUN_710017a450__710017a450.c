// addr:      710017a450
// offset:    0x17a450
// name:      FUN_710017a450
// mangled:   
// signature: undefined FUN_710017a450(void)


void FUN_710017a450(long param_1)

{
  (**(code **)(**(long **)(param_1 + 0x138) + 0x170))();
  *(code **)(param_1 + 0x30) = FUN_710013f3b0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(char **)(param_1 + 0x40) = "JoinSessionJob::CompleteProcess";
  return;
}

