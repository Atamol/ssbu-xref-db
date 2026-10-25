// addr:      71000ff840
// offset:    0xff840
// name:      FUN_71000ff840
// mangled:   
// signature: undefined FUN_71000ff840(void)


undefined8 FUN_71000ff840(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  char *pcVar3;
  code *pcVar4;
  int aiStack_40 [4];
  undefined4 auStack_28 [2];
  
  iVar1 = FUN_7100146ba0(DAT_71052adb38);
  switch(iVar1) {
  case 5:
    aiStack_40[0] = 0xc406;
    break;
  case 6:
    aiStack_40[0] = 0xa471;
    break;
  case 7:
    aiStack_40[0] = 0xc420;
    break;
  case 8:
    aiStack_40[0] = 0xc421;
    break;
  default:
    if (*(char *)(param_1 + 0xfb) != '\0') {
      FUN_71000bcf30((int *)(param_1 + 0x220),(int *)(param_1 + 0x100));
      *(undefined1 *)(param_1 + 0x130) = 6;
      *(code **)(param_1 + 0x30) = FUN_71000f7210;
      *(undefined8 *)(param_1 + 0x38) = 0;
      *(char **)(param_1 + 0x40) = "NexMatchJointSessionJob::StartLeaveMesh";
      return 5;
    }
    *(undefined1 *)(DAT_71052adb38 + 0x15c) = 0;
    FUN_71001918f0(aiStack_40,DAT_71052adfc0);
    if (aiStack_40[0] == 0) {
      FUN_7100193380((long)DAT_71052adfc0,1);
      pcVar4 = FUN_71000ffa10;
      pcVar3 = "NexMatchJointSessionJob::WaitCreateNextMesh";
    }
    else {
      *(undefined1 *)(param_1 + 0x130) = 0x1b;
      FUN_71000bcf30((int *)(param_1 + 0x220),aiStack_40);
      FUN_71000d8f90(*(long *)(DAT_71052adb38 +
                               (ulong)(*(char *)(DAT_71052adb38 + 0x162) == '\0') * 8 + 0x168));
      pcVar4 = FUN_71000f7210;
      pcVar3 = "NexMatchJointSessionJob::StartLeaveMesh";
    }
    uVar2 = 5;
    *(code **)(param_1 + 0x30) = pcVar4;
    *(undefined8 *)(param_1 + 0x38) = 0;
    goto LAB_71000ff964;
  }
  *(undefined1 *)(param_1 + 0xfa) = 1;
  *(undefined1 *)(param_1 + 0x130) = 3;
  nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)aiStack_40 | 4));
  auStack_28[0] = 0;
  nn::err::ErrorResultVariant::operator=
            ((ErrorResultVariant *)((ulong)aiStack_40 | 4),(Result *)auStack_28);
  FUN_71000bcf30((int *)(param_1 + 0x220),aiStack_40);
  (**(code **)(**(long **)(DAT_71052adb38 + 8) + 0x28))();
  uVar2 = 0;
  *(code **)(param_1 + 0x30) = FUN_71000f70d0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  pcVar3 = "NexMatchJointSessionJob::ProcessFailure";
LAB_71000ff964:
  *(char **)(param_1 + 0x40) = pcVar3;
  return uVar2;
}

