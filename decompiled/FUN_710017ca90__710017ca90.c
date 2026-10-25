// addr:      710017ca90
// offset:    0x17ca90
// name:      FUN_710017ca90
// mangled:   
// signature: undefined FUN_710017ca90(void)


undefined8 FUN_710017ca90(long param_1)

{
  *(char **)(param_1 + 0x40) = "ProcessHostMigrationJob::SendMigrationFinish";
  *(code **)(param_1 + 0x30) = FUN_71001a20c0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  return 1;
}

