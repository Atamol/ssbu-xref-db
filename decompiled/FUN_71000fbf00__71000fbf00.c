// addr:      71000fbf00
// offset:    0xfbf00
// name:      FUN_71000fbf00
// mangled:   
// signature: undefined FUN_71000fbf00(void)


undefined8 FUN_71000fbf00(long param_1)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  undefined8 uVar4;
  long *plVar5;
  undefined4 uVar6;
  char *pcVar7;
  code *pcVar8;
  int aiStack_40 [4];
  int aiStack_28 [2];
  
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
    aiStack_28[0] = 0;
    uVar3 = FUN_71000dc3a0(*(long *)(DAT_71052adb38 +
                                     (ulong)(*(char *)(DAT_71052adb38 + 0x162) == '\0') * 8 + 0x168)
                           ,aiStack_28);
    if ((uVar3 & 1) == 0) {
      return 5;
    }
    FUN_71000bce50(aiStack_40,(int *)(param_1 + 100));
    if (aiStack_40[0] == 0) {
      *(int *)(param_1 + 0xf0) = aiStack_28[0];
      FUN_7100149290(DAT_71052adb38,aiStack_28[0]);
      uVar6 = 1;
      if (*(char *)(param_1 + 0x266) == '\0') {
        uVar6 = 2;
      }
      FUN_7100149250(DAT_71052adb38,uVar6);
      lVar1 = DAT_71052ac580;
      plVar5 = FUN_71000bb680();
      uVar4 = 0;
      pcVar7 = "NexMatchJointSessionJob::WaitNotification";
      *(long *)(param_1 + 0x210) = *(long *)(lVar1 + 0x30) + *plVar5 * 10000;
      pcVar8 = FUN_71000fbbe0;
    }
    else {
      *(undefined1 *)(param_1 + 0x130) = 0x12;
      FUN_71000bce50(aiStack_40,(int *)(param_1 + 100));
      FUN_71000bcf30((int *)(param_1 + 0x220),aiStack_40);
      FUN_71000d8f90(*(long *)(DAT_71052adb38 +
                               (ulong)(*(char *)(DAT_71052adb38 + 0x162) == '\0') * 8 + 0x168));
      pcVar8 = FUN_71000f7210;
      uVar4 = 5;
      pcVar7 = "NexMatchJointSessionJob::StartLeaveMesh";
    }
    *(code **)(param_1 + 0x30) = pcVar8;
    *(undefined8 *)(param_1 + 0x38) = 0;
    goto LAB_71000fc07c;
  }
  *(undefined1 *)(param_1 + 0xfa) = 1;
  *(undefined1 *)(param_1 + 0x130) = 3;
  nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)aiStack_40 | 4));
  aiStack_28[0] = 0;
  nn::err::ErrorResultVariant::operator=
            ((ErrorResultVariant *)((ulong)aiStack_40 | 4),(Result *)aiStack_28);
  FUN_71000bcf30((int *)(param_1 + 0x220),aiStack_40);
  (**(code **)(**(long **)(DAT_71052adb38 + 8) + 0x28))();
  uVar4 = 0;
  *(code **)(param_1 + 0x30) = FUN_71000f70d0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  pcVar7 = "NexMatchJointSessionJob::ProcessFailure";
LAB_71000fc07c:
  *(char **)(param_1 + 0x40) = pcVar7;
  return uVar4;
}

