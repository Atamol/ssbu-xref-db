// addr:      71000fe620
// offset:    0xfe620
// name:      FUN_71000fe620
// mangled:   
// signature: undefined FUN_71000fe620(void)


undefined8 FUN_71000fe620(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  code *pcVar3;
  char *pcVar4;
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
    if (*(char *)(param_1 + 0xfb) == '\0') {
      if (*(ulong *)(param_1 + 0x208) < *(ulong *)(DAT_71052ac580 + 0x30)) {
        *(code **)(param_1 + 0x30) = FUN_71000fec40;
        *(undefined8 *)(param_1 + 0x38) = 0;
        *(char **)(param_1 + 0x40) = "NexMatchJointSessionJob::MeshRestart";
      }
      uVar2 = 5;
      if (*(char *)(param_1 + 0xf4) == '\0') {
        return 5;
      }
      pcVar3 = FUN_71000fec40;
      pcVar4 = "NexMatchJointSessionJob::MeshRestart";
    }
    else {
      FUN_71000bcf30((int *)(param_1 + 0x220),(int *)(param_1 + 0x100));
      *(undefined1 *)(param_1 + 0x130) = 6;
      pcVar3 = FUN_71000f7210;
      uVar2 = 5;
      pcVar4 = "NexMatchJointSessionJob::StartLeaveMesh";
    }
    goto LAB_71000fe738;
  }
  *(undefined1 *)(param_1 + 0xfa) = 1;
  *(undefined1 *)(param_1 + 0x130) = 3;
  nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)aiStack_40 | 4));
  auStack_28[0] = 0;
  nn::err::ErrorResultVariant::operator=
            ((ErrorResultVariant *)((ulong)aiStack_40 | 4),(Result *)auStack_28);
  FUN_71000bcf30((int *)(param_1 + 0x220),aiStack_40);
  (**(code **)(**(long **)(DAT_71052adb38 + 8) + 0x28))();
  pcVar3 = FUN_71000f70d0;
  uVar2 = 0;
  pcVar4 = "NexMatchJointSessionJob::ProcessFailure";
LAB_71000fe738:
  *(code **)(param_1 + 0x30) = pcVar3;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(char **)(param_1 + 0x40) = pcVar4;
  return uVar2;
}

