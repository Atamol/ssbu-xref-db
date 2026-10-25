// addr:      71000d5310
// offset:    0xd5310
// name:      FUN_71000d5310
// mangled:   
// signature: undefined FUN_71000d5310(void)


undefined8 FUN_71000d5310(long param_1)

{
  *(char **)(param_1 + 0x40) = "NexJoinMeshJob::SetupLocalStation";
  *(code **)(param_1 + 0x30) = FUN_710018a080;
  *(undefined8 *)(param_1 + 0x38) = 0;
  return 0;
}

