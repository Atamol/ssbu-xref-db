// addr:      710018d6e0
// offset:    0x18d6e0
// name:      FUN_710018d6e0
// mangled:   
// signature: undefined FUN_710018d6e0(void)


undefined8 FUN_710018d6e0(long param_1)

{
  int aiStack_30 [4];
  
  FUN_7100192af0(aiStack_30,DAT_71052adfc0,(int *)(param_1 + 0xc0));
  *(char **)(param_1 + 0x40) = "JoinMeshJob::WaitLeaveMesh";
  *(code **)(param_1 + 0x30) = FUN_710018d570;
  *(undefined8 *)(param_1 + 0x38) = 0;
  return 5;
}

