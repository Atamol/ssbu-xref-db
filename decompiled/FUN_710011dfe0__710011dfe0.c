// addr:      710011dfe0
// offset:    0x11dfe0
// name:      FUN_710011dfe0
// mangled:   
// signature: undefined FUN_710011dfe0(void)


undefined8 FUN_710011dfe0(long param_1)

{
  *(char **)(param_1 + 0x40) = "LanMatchJointSessionJob::WaitRandomMatchmake";
  *(code **)(param_1 + 0x30) = FUN_710011e230;
  *(undefined8 *)(param_1 + 0x38) = 0;
  return 5;
}

