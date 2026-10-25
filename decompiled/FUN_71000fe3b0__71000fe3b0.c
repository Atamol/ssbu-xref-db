// addr:      71000fe3b0
// offset:    0xfe3b0
// name:      FUN_71000fe3b0
// mangled:   
// signature: undefined FUN_71000fe3b0(void)


undefined8 FUN_71000fe3b0(long param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 uVar3;
  ulong uVar4;
  code *pcVar5;
  char *pcVar6;
  long *plVar7;
  int aiStack_60 [4];
  int aiStack_50 [4];
  
  FUN_71001902d0(DAT_71052adfc0);
  iVar2 = FUN_7100146ba0(DAT_71052adb38);
  switch(iVar2) {
  case 5:
    aiStack_50[0] = 0xc406;
    break;
  case 6:
    aiStack_50[0] = 0xa471;
    break;
  case 7:
    aiStack_50[0] = 0xc420;
    break;
  case 8:
    aiStack_50[0] = 0xc421;
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
    uVar4 = (ulong)(*(char *)(DAT_71052adb38 + 0x162) == '\0');
    plVar7 = *(long **)(DAT_71052adb38 + uVar4 * 8 + 0x168);
    uVar1 = *(undefined4 *)(DAT_71052adb38 + uVar4 * 4 + 0x180);
    aiStack_50[0] = 0;
    nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)aiStack_50 | 4));
    aiStack_60[0] = 0;
    nn::err::ErrorResultVariant::operator=
              ((ErrorResultVariant *)((ulong)aiStack_50 | 4),(Result *)aiStack_60);
    uVar4 = FUN_7100146ed0(DAT_71052adb38);
    if (((uVar4 & 1) == 0) && (uVar4 = (**(code **)(*plVar7 + 0xe0))(plVar7), (uVar4 & 1) != 0)) {
      *(undefined1 *)(param_1 + 0x263) = 1;
      pcVar5 = *(code **)(*plVar7 + 0x70);
    }
    else {
      *(undefined1 *)(param_1 + 0x263) = 0;
      pcVar5 = *(code **)(*plVar7 + 0x60);
    }
    (*pcVar5)(aiStack_60,plVar7,param_1 + 0x60,uVar1);
    FUN_71000bcf30(aiStack_50,aiStack_60);
    if (aiStack_50[0] == 0) {
      pcVar5 = FUN_71000fea60;
      uVar3 = 0;
      pcVar6 = "NexMatchJointSessionJob::WaitLeavePreviousMatchmakeSession";
    }
    else {
      *(undefined1 *)(param_1 + 0x130) = 0x26;
      FUN_71000bcf30((int *)(param_1 + 0x220),aiStack_50);
      FUN_71000d8f90(*(long *)(DAT_71052adb38 +
                               (ulong)(*(char *)(DAT_71052adb38 + 0x162) == '\0') * 8 + 0x168));
      pcVar5 = FUN_71000f7210;
      uVar3 = 5;
      pcVar6 = "NexMatchJointSessionJob::StartLeaveMesh";
    }
    *(code **)(param_1 + 0x30) = pcVar5;
    *(undefined8 *)(param_1 + 0x38) = 0;
    *(char **)(param_1 + 0x40) = pcVar6;
    return uVar3;
  }
  *(undefined1 *)(param_1 + 0xfa) = 1;
  *(undefined1 *)(param_1 + 0x130) = 3;
  nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)aiStack_50 | 4));
  aiStack_60[0] = 0;
  nn::err::ErrorResultVariant::operator=
            ((ErrorResultVariant *)((ulong)aiStack_50 | 4),(Result *)aiStack_60);
  FUN_71000bcf30((int *)(param_1 + 0x220),aiStack_50);
  (**(code **)(**(long **)(DAT_71052adb38 + 8) + 0x28))();
  *(code **)(param_1 + 0x30) = FUN_71000f70d0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(char **)(param_1 + 0x40) = "NexMatchJointSessionJob::ProcessFailure";
  return 0;
}

