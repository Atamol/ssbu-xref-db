// addr:      71000f3970
// offset:    0xf3970
// name:      FUN_71000f3970
// mangled:   
// signature: undefined FUN_71000f3970(void)


undefined8 FUN_71000f3970(long *param_1)

{
  ulong uVar1;
  char *pcVar2;
  code *pcVar3;
  int aiStack_38 [4];
  undefined4 auStack_28 [2];
  
  uVar1 = (**(code **)(*param_1 + 0x48))();
  if ((uVar1 & 1) == 0) {
    FUN_71000ed7a0(aiStack_38);
    if (aiStack_38[0] == 0) {
      *(undefined4 *)(param_1 + 0x22) = 3;
      pcVar3 = FUN_71000f3a60;
      pcVar2 = "NexMatchJoinSessionJob::WaitStartNatSession";
    }
    else {
      FUN_71000bcf30((int *)(param_1 + 0x24),aiStack_38);
      pcVar3 = FUN_71000f2880;
      pcVar2 = "NexMatchJoinSessionJob::LeaveMatchmakeSession";
    }
    param_1[6] = (long)pcVar3;
    param_1[7] = 0;
  }
  else {
    aiStack_38[0] = 0x6c05;
    nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)aiStack_38 | 4));
    auStack_28[0] = 0;
    nn::err::ErrorResultVariant::operator=
              ((ErrorResultVariant *)((ulong)aiStack_38 | 4),(Result *)auStack_28);
    FUN_71000bcf30((int *)(param_1 + 0x24),aiStack_38);
    param_1[6] = (long)FUN_71000f2880;
    param_1[7] = 0;
    pcVar2 = "NexMatchJoinSessionJob::LeaveMatchmakeSession";
  }
  param_1[8] = (long)pcVar2;
  return 5;
}

