// addr:      710018f2c0
// offset:    0x18f2c0
// name:      FUN_710018f2c0
// mangled:   
// signature: undefined8 __cdecl FUN_710018f2c0(long param_1)


undefined8 FUN_710018f2c0(long param_1)

{
  char *pcVar1;
  long *plVar2;
  
  plVar2 = *(long **)(DAT_71052adfc0 + 0x38);
  if (*(char *)((long)plVar2 + 0x84) == '\0') {
    if (*(int *)(DAT_71052adfc0 + 0xb8) == 2) {
      *(code **)(param_1 + 0x30) = FUN_710018f560;
      pcVar1 = "LeaveWithHostMigrationJob::SendStartMultiMigrationMessage";
    }
    else {
      *(code **)(param_1 + 0x30) = FUN_710018f5e0;
      pcVar1 = "LeaveWithHostMigrationJob::SendStartMigrationMessage";
    }
  }
  else if (*(int *)(DAT_71052adfc0 + 0xb8) == 2) {
    FUN_71001a2880(plVar2);
    *(undefined1 *)(plVar2 + 9) = 1;
    *(code **)(param_1 + 0x30) = FUN_710018f380;
    pcVar1 = "LeaveWithHostMigrationJob::StartDisconnectStations";
  }
  else {
    *(code **)(param_1 + 0x30) = FUN_710018f4e0;
    pcVar1 = "LeaveWithHostMigrationJob::WaitHostMigrationProcess";
  }
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(char **)(param_1 + 0x40) = pcVar1;
  return 0;
}

