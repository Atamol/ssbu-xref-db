// addr:      71001122e0
// offset:    0x1122e0
// name:      FUN_71001122e0
// mangled:   
// signature: undefined FUN_71001122e0(void)


void FUN_71001122e0(long param_1,long param_2)

{
  if ((*(long *)(param_1 + 0xb8) != param_2) && (*(long *)(param_1 + 0x88) != param_2)) {
    *(code **)(param_1 + 0x30) = FUN_7100112320;
    *(undefined8 *)(param_1 + 0x38) = 0;
    *(char **)(param_1 + 0x40) =
         "NexProcessHostMigrationJob::NexCheckMatchMakingClientHostIsUpdated";
  }
  return;
}

