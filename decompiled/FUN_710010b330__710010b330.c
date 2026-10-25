// addr:      710010b330
// offset:    0x10b330
// name:      FUN_710010b330
// mangled:   
// signature: undefined8 __cdecl FUN_710010b330(long param_1)


undefined8 FUN_710010b330(long param_1)

{
  undefined4 *puVar1;
  int aiStack_40 [4];
  int local_30 [4];
  
  FUN_71000e8290(local_30,*(long *)(param_1 + 0x90),(int *)(param_1 + 0x60));
  if (local_30[0] != 0) {
    puVar1 = *(undefined4 **)(param_1 + 0x58);
    FUN_71000bce50(aiStack_40,local_30);
    FUN_71000b41f0(puVar1,aiStack_40);
    *(undefined8 *)(param_1 + 0x58) = 0;
    return 1;
  }
  *(char **)(param_1 + 0x40) = "NexMatchCommunityManagementJob::WaitFindCommunityByCommunityId";
  *(code **)(param_1 + 0x30) = FUN_710010b5a0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  return 5;
}

