// addr:      71000fdf60
// offset:    0xfdf60
// name:      FUN_71000fdf60
// mangled:   
// signature: undefined FUN_71000fdf60(void)


undefined8 FUN_71000fdf60(long param_1)

{
  int iVar1;
  long *plVar2;
  undefined8 uVar3;
  char *pcVar4;
  undefined1 uVar5;
  code *pcVar6;
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
    FUN_7100192e90(aiStack_40,DAT_71052adfc0);
    if ((aiStack_40[0] != 0) || (iVar1 = FUN_7100146ba0(DAT_71052adb38), iVar1 == 4)) {
      aiStack_40[0] = 0x6c59;
      nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)aiStack_40 | 4))
      ;
      auStack_28[0] = 0;
      nn::err::ErrorResultVariant::operator=
                ((ErrorResultVariant *)((ulong)aiStack_40 | 4),(Result *)auStack_28);
      FUN_71000bcf30((int *)(param_1 + 0x220),aiStack_40);
      uVar5 = 4;
LAB_71000fe024:
      *(undefined1 *)(param_1 + 0x130) = uVar5;
      *(code **)(param_1 + 0x30) = FUN_71000f7210;
      *(undefined8 *)(param_1 + 0x38) = 0;
      *(char **)(param_1 + 0x40) = "NexMatchJointSessionJob::StartLeaveMesh";
      return 5;
    }
    if (*(char *)(param_1 + 0xfb) != '\0') {
      FUN_71000bcf30((int *)(param_1 + 0x220),(int *)(param_1 + 0x100));
      uVar5 = 6;
      goto LAB_71000fe024;
    }
    plVar2 = *(long **)(DAT_71052adb38 + (ulong)(*(char *)(DAT_71052adb38 + 0x162) == '\0') * 8 +
                       0x168);
    (**(code **)(*plVar2 + 0xb0))(aiStack_40,plVar2,param_1 + 0x60,*(undefined4 *)(param_1 + 0xf0));
    if (aiStack_40[0] == 0) {
      pcVar6 = FUN_71000fe1b0;
      pcVar4 = "NexMatchJointSessionJob::WaitGetNextMatchmakeSessionInfo";
    }
    else {
      *(undefined1 *)(param_1 + 0x130) = 0x16;
      FUN_71000bcf30((int *)(param_1 + 0x220),aiStack_40);
      FUN_71000d8f90(*(long *)(DAT_71052adb38 +
                               (ulong)(*(char *)(DAT_71052adb38 + 0x162) == '\0') * 8 + 0x168));
      pcVar6 = FUN_71000f7210;
      pcVar4 = "NexMatchJointSessionJob::StartLeaveMesh";
    }
    uVar3 = 5;
    *(code **)(param_1 + 0x30) = pcVar6;
    *(undefined8 *)(param_1 + 0x38) = 0;
    goto LAB_71000fe0d0;
  }
  *(undefined1 *)(param_1 + 0xfa) = 1;
  *(undefined1 *)(param_1 + 0x130) = 3;
  nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)aiStack_40 | 4));
  auStack_28[0] = 0;
  nn::err::ErrorResultVariant::operator=
            ((ErrorResultVariant *)((ulong)aiStack_40 | 4),(Result *)auStack_28);
  FUN_71000bcf30((int *)(param_1 + 0x220),aiStack_40);
  (**(code **)(**(long **)(DAT_71052adb38 + 8) + 0x28))();
  uVar3 = 0;
  *(code **)(param_1 + 0x30) = FUN_71000f70d0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  pcVar4 = "NexMatchJointSessionJob::ProcessFailure";
LAB_71000fe0d0:
  *(char **)(param_1 + 0x40) = pcVar4;
  return uVar3;
}

