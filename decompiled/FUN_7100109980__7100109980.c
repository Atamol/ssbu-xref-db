// addr:      7100109980
// offset:    0x109980
// name:      FUN_7100109980
// mangled:   
// signature: undefined FUN_7100109980(void)


undefined8 FUN_7100109980(long param_1)

{
  *(char **)(param_1 + 0x40) = "NexMatchRandomMatchmakeJob::LeaveMatchmakeSession";
  *(code **)(param_1 + 0x30) = FUN_71001082f0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  return 5;
}

