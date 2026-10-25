// addr:      710018df90
// offset:    0x18df90
// name:      FUN_710018df90
// mangled:   
// signature: undefined FUN_710018df90(void)


undefined8 FUN_710018df90(long param_1)

{
  if (*(int *)(param_1 + 0x160) - 2U < 3) {
    *(code **)(param_1 + 0x30) = FUN_710018ddc0;
    *(undefined8 *)(param_1 + 0x38) = 0;
    *(char **)(param_1 + 0x40) = "KickoutManageJob::ClientFinalize";
    return 0;
  }
  return 5;
}

