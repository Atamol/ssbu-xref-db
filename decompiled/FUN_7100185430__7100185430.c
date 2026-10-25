// addr:      7100185430
// offset:    0x185430
// name:      FUN_7100185430
// mangled:   
// signature: undefined FUN_7100185430(void)


undefined8 FUN_7100185430(long param_1)

{
  uint uVar1;
  
  uVar1 = FUN_71000b4a50(*(long *)(param_1 + 0x58));
  if ((uVar1 & 1) == 0) {
    *(code **)(param_1 + 0x30) = FUN_71001850a0;
    *(undefined8 *)(param_1 + 0x38) = 0;
    *(char **)(param_1 + 0x40) = "LocalEjectClientListCheckJob::CheckTargetList";
  }
  return 5;
}

