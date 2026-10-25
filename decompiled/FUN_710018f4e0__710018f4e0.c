// addr:      710018f4e0
// offset:    0x18f4e0
// name:      FUN_710018f4e0
// mangled:   
// signature: undefined FUN_710018f4e0(void)


undefined8 FUN_710018f4e0(long param_1)

{
  if (*(char *)(*(long *)(DAT_71052adfc0 + 0x38) + 0x84) == '\0') {
    *(code **)(param_1 + 0x30) = FUN_710018f5e0;
    *(undefined8 *)(param_1 + 0x38) = 0;
    *(char **)(param_1 + 0x40) = "LeaveWithHostMigrationJob::SendStartMigrationMessage";
    return 0;
  }
  if (*(ulong *)(DAT_71052ac580 + 0x30) < *(ulong *)(param_1 + 0x60)) {
    return 5;
  }
  *(code **)(param_1 + 0x30) = FUN_710018f700;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(char **)(param_1 + 0x40) = "LeaveWithHostMigrationJob::CleanupMesh";
  return 0;
}

