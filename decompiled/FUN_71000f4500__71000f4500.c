// addr:      71000f4500
// offset:    0xf4500
// name:      FUN_71000f4500
// mangled:   
// signature: undefined FUN_71000f4500(void)


undefined8 FUN_71000f4500(long param_1)

{
  *(char **)(param_1 + 0x40) = "NexMatchJoinSessionJob::LeaveMatchmakeSession";
  *(code **)(param_1 + 0x30) = FUN_71000f2880;
  *(undefined8 *)(param_1 + 0x38) = 0;
  return 5;
}

