// addr:      710018d570
// offset:    0x18d570
// name:      FUN_710018d570
// mangled:   
// signature: undefined FUN_710018d570(void)


undefined8 FUN_710018d570(long param_1)

{
  int aiStack_30 [4];
  
  if (*(int *)(param_1 + 0xc0) - 2U < 3) {
    FUN_71000bce50(aiStack_30,(int *)(param_1 + 0xc4));
    *(code **)(param_1 + 0x30) = FUN_710018d5e0;
    *(undefined8 *)(param_1 + 0x38) = 0;
    *(char **)(param_1 + 0x40) = "JoinMeshJob::CompleteCancelWithLeaveMesh";
    return 0;
  }
  return 5;
}

