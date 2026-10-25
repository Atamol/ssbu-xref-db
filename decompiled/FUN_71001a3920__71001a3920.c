// addr:      71001a3920
// offset:    0x1a3920
// name:      FUN_71001a3920
// mangled:   
// signature: undefined FUN_71001a3920(void)


undefined8 FUN_71001a3920(long param_1)

{
  *(undefined8 *)(param_1 + 100) = 0;
  *(undefined4 *)(param_1 + 0xb8) = 0x300fd;
  *(undefined8 *)(param_1 + 0x6c) = 0;
  *(code **)(param_1 + 0x30) = FUN_71001a3960;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(char **)(param_1 + 0x40) = "ProcessJoinRequestJob::CheckApprovalJoin";
  return 3;
}

