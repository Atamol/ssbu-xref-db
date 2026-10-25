// addr:      71000d5330
// offset:    0xd5330
// name:      FUN_71000d5330
// mangled:   
// signature: undefined FUN_71000d5330(void)


undefined8 FUN_71000d5330(long param_1)

{
  char *pcVar1;
  code *pcVar2;
  bool bVar3;
  byte bVar4;
  
  bVar4 = FUN_71001936e0(DAT_71052adfc0);
  bVar3 = (bVar4 & 1) == 0;
  pcVar1 = "NexJoinMeshJob::StartBandwidthCheck";
  if (bVar3) {
    pcVar1 = "NexJoinMeshJob::CompleteProcess";
  }
  *(char **)(param_1 + 0x40) = pcVar1;
  pcVar2 = FUN_71000d53a0;
  if (bVar3) {
    pcVar2 = FUN_710018cf30;
  }
  *(code **)(param_1 + 0x30) = pcVar2;
  *(undefined8 *)(param_1 + 0x38) = 0;
  return 0;
}

