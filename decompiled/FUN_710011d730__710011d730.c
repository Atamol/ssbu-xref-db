// addr:      710011d730
// offset:    0x11d730
// name:      FUN_710011d730
// mangled:   
// signature: undefined FUN_710011d730(void)


undefined8 FUN_710011d730(long param_1)

{
  *(char **)(param_1 + 0x40) = "LanMatchJoinSessionJob::LeaveMatchmakeSession";
  *(code **)(param_1 + 0x30) = FUN_710011cd30;
  *(undefined8 *)(param_1 + 0x38) = 0;
  return 0;
}

