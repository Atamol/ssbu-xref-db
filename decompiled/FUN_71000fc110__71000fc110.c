// addr:      71000fc110
// offset:    0xfc110
// name:      FUN_71000fc110
// mangled:   
// signature: undefined FUN_71000fc110(void)


undefined8 FUN_71000fc110(long param_1)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  undefined8 uVar4;
  long *plVar5;
  char *pcVar6;
  code *pcVar7;
  int aiStack_40 [4];
  undefined4 auStack_28 [2];
  
  iVar2 = FUN_7100146ba0(DAT_71052adb38);
  switch(iVar2) {
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
    uVar3 = FUN_71000df790(*(long *)(DAT_71052adb38 +
                                     (ulong)(*(char *)(DAT_71052adb38 + 0x162) == '\0') * 8 + 0x168)
                          );
    if ((uVar3 & 1) == 0) {
      return 5;
    }
    FUN_71000bce50(aiStack_40,(int *)(param_1 + 100));
    if (aiStack_40[0] == 0) {
      FUN_7100149290(DAT_71052adb38,*(int *)(param_1 + 0xf0));
      lVar1 = DAT_71052ac580;
      plVar5 = FUN_71000bb680();
      uVar4 = 0;
      pcVar6 = "NexMatchJointSessionJob::WaitNotification";
      *(long *)(param_1 + 0x210) = *(long *)(lVar1 + 0x30) + *plVar5 * 10000;
      pcVar7 = FUN_71000fbbe0;
    }
    else {
      *(undefined1 *)(param_1 + 0x130) = 0x13;
      FUN_71000bce50(aiStack_40,(int *)(param_1 + 100));
      FUN_71000bcf30((int *)(param_1 + 0x220),aiStack_40);
      FUN_71000d8f90(*(long *)(DAT_71052adb38 +
                               (ulong)(*(char *)(DAT_71052adb38 + 0x162) == '\0') * 8 + 0x168));
      pcVar7 = FUN_71000f7210;
      uVar4 = 5;
      pcVar6 = "NexMatchJointSessionJob::StartLeaveMesh";
    }
    goto LAB_71000fc280;
  }
  *(undefined1 *)(param_1 + 0xfa) = 1;
  *(undefined1 *)(param_1 + 0x130) = 3;
  nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)aiStack_40 | 4));
  auStack_28[0] = 0;
  nn::err::ErrorResultVariant::operator=
            ((ErrorResultVariant *)((ulong)aiStack_40 | 4),(Result *)auStack_28);
  FUN_71000bcf30((int *)(param_1 + 0x220),aiStack_40);
  (**(code **)(**(long **)(DAT_71052adb38 + 8) + 0x28))();
  pcVar7 = FUN_71000f70d0;
  uVar4 = 0;
  pcVar6 = "NexMatchJointSessionJob::ProcessFailure";
LAB_71000fc280:
  *(code **)(param_1 + 0x30) = pcVar7;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(char **)(param_1 + 0x40) = pcVar6;
  return uVar4;
}

