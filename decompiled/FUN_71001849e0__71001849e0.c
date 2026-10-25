// addr:      71001849e0
// offset:    0x1849e0
// name:      FUN_71001849e0
// mangled:   
// signature: undefined FUN_71001849e0(void)


undefined8 FUN_71001849e0(long param_1)

{
  uint uVar1;
  
  uVar1 = FUN_71000b4a50(*(long *)(param_1 + 0x58));
  if ((uVar1 & 1) != 0) {
    return 5;
  }
  *(code **)(param_1 + 0x30) = FUN_7100184a40;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(char **)(param_1 + 0x40) = "LocalAllowParticipatingJob::CompleteProcess";
  return 0;
}

