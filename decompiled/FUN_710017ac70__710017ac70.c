// addr:      710017ac70
// offset:    0x17ac70
// name:      FUN_710017ac70
// mangled:   
// signature: undefined FUN_710017ac70(void)


undefined8 FUN_710017ac70(long param_1)

{
  ulong uVar1;
  
  uVar1 = (**(code **)(**(long **)(param_1 + 0xa0) + 0x78))();
  if ((uVar1 & 1) == 0) {
    return 5;
  }
  if ((*(int *)(param_1 + 0x60) != 2) && (*(int *)(param_1 + 0x60) != 3)) {
    return 5;
  }
  *(code **)(param_1 + 0x30) = FUN_710017ac20;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(char **)(param_1 + 0x40) = "LocalMatchCreateSessionJob::CompleteFailure";
  return 0;
}

