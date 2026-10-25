// addr:      71001850a0
// offset:    0x1850a0
// name:      FUN_71001850a0
// mangled:   
// signature: undefined FUN_71001850a0(void)


undefined8 FUN_71001850a0(long param_1)

{
  if (*(int *)(param_1 + 0x188) != 0) {
    *(code **)(param_1 + 0x30) = FUN_71001852f0;
    *(undefined8 *)(param_1 + 0x38) = 0;
    *(char **)(param_1 + 0x40) = "LocalEjectClientListCheckJob::EjectTargetClient";
    return 0;
  }
  return 5;
}

