// addr:      7100108de0
// offset:    0x108de0
// name:      FUN_7100108de0
// mangled:   
// signature: undefined FUN_7100108de0(void)


undefined8 FUN_7100108de0(long param_1)

{
  ulong uVar1;
  char *pcVar2;
  code *pcVar3;
  int aiStack_38 [4];
  undefined4 auStack_28 [2];
  
  uVar1 = FUN_7100143730(param_1);
  if ((uVar1 & 1) == 0) {
    FUN_71000ed7a0(aiStack_38);
    if (aiStack_38[0] == 0) {
      *(undefined4 *)(param_1 + 0x60) = 3;
      pcVar3 = FUN_7100108ec0;
      pcVar2 = "NexMatchRandomMatchmakeJob::WaitStartNatSession";
    }
    else {
      FUN_71000bcf30((int *)(param_1 + 0x6c),aiStack_38);
      pcVar3 = FUN_71001082f0;
      pcVar2 = "NexMatchRandomMatchmakeJob::LeaveMatchmakeSession";
    }
    *(code **)(param_1 + 0x30) = pcVar3;
    *(undefined8 *)(param_1 + 0x38) = 0;
  }
  else {
    aiStack_38[0] = 0x6c05;
    nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)aiStack_38 | 4));
    auStack_28[0] = 0;
    nn::err::ErrorResultVariant::operator=
              ((ErrorResultVariant *)((ulong)aiStack_38 | 4),(Result *)auStack_28);
    FUN_71000bcf30((int *)(param_1 + 0x6c),aiStack_38);
    *(code **)(param_1 + 0x30) = FUN_71001082f0;
    *(undefined8 *)(param_1 + 0x38) = 0;
    pcVar2 = "NexMatchRandomMatchmakeJob::LeaveMatchmakeSession";
  }
  *(char **)(param_1 + 0x40) = pcVar2;
  return 5;
}

