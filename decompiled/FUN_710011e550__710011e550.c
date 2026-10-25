// addr:      710011e550
// offset:    0x11e550
// name:      FUN_710011e550
// mangled:   
// signature: undefined FUN_710011e550(void)


undefined8 FUN_710011e550(long param_1)

{
  *(char **)(param_1 + 0x40) = "LanMatchJointSessionJob::WaitUpdateSessionKey";
  *(code **)(param_1 + 0x30) = FUN_710011e570;
  *(undefined8 *)(param_1 + 0x38) = 0;
  return 5;
}

