// addr:      71001a7ea0
// offset:    0x1a7ea0
// name:      FUN_71001a7ea0
// mangled:   
// signature: undefined FUN_71001a7ea0(void)


undefined8 FUN_71001a7ea0(long param_1)

{
  if (*(int *)(param_1 + 0x100) == 1) {
    return 5;
  }
  *(code **)(param_1 + 0x30) = FUN_71001a7dd0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(char **)(param_1 + 0x40) = "ProcessUpdateMeshJob::CleanupByProcessFailure";
  return 0;
}

