// addr:      710018d4e0
// offset:    0x18d4e0
// name:      FUN_710018d4e0
// mangled:   
// signature: undefined FUN_710018d4e0(void)


undefined8 FUN_710018d4e0(long param_1)

{
  uint uVar1;
  undefined8 uVar2;
  code *pcVar3;
  char *pcVar4;
  int aiStack_30 [4];
  
  uVar1 = FUN_7100191bb0((long)DAT_71052adfc0);
  if ((uVar1 & 0xffff) < 2) {
    pcVar3 = FUN_710018d5e0;
    uVar2 = 0;
    pcVar4 = "JoinMeshJob::CompleteCancelWithLeaveMesh";
  }
  else {
    FUN_7100192050(aiStack_30,DAT_71052adfc0,(int *)(param_1 + 0xc0));
    pcVar3 = FUN_710018d570;
    uVar2 = 5;
    pcVar4 = "JoinMeshJob::WaitLeaveMesh";
  }
  *(code **)(param_1 + 0x30) = pcVar3;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(char **)(param_1 + 0x40) = pcVar4;
  return uVar2;
}

