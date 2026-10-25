// addr:      710010b460
// offset:    0x10b460
// name:      FUN_710010b460
// mangled:   
// signature: undefined FUN_710010b460(void)


undefined8 FUN_710010b460(long param_1)

{
  undefined4 *puVar1;
  int aiStack_40 [4];
  int aiStack_30 [4];
  
  FUN_71000e8980(aiStack_30,*(long *)(param_1 + 0x90),(int *)(param_1 + 0x60),
                 *(undefined8 *)(param_1 + 0xa0),*(undefined4 *)(param_1 + 0xa8),
                 *(undefined4 *)(param_1 + 0xac));
  if (aiStack_30[0] != 0) {
    puVar1 = *(undefined4 **)(param_1 + 0x58);
    FUN_71000bce50(aiStack_40,aiStack_30);
    FUN_71000b41f0(puVar1,aiStack_40);
    *(undefined8 *)(param_1 + 0x58) = 0;
    return 1;
  }
  *(char **)(param_1 + 0x40) = "NexMatchCommunityManagementJob::WaitFindCommunityByParticipant";
  *(code **)(param_1 + 0x30) = FUN_710010b7a0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  return 5;
}

