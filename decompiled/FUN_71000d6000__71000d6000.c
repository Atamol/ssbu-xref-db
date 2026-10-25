// addr:      71000d6000
// offset:    0xd6000
// name:      FUN_71000d6000
// mangled:   
// signature: undefined FUN_71000d6000(void)


undefined8 FUN_71000d6000(long param_1)

{
  *(char **)(param_1 + 0x40) = "NexCreateMeshJob::SetupLocalStation";
  *(code **)(param_1 + 0x30) = FUN_71001878b0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  return 0;
}

