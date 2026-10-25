// addr:      71000f53b0
// offset:    0xf53b0
// name:      FUN_71000f53b0
// mangled:   
// signature: undefined FUN_71000f53b0(void)


undefined8 FUN_71000f53b0(long param_1)

{
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  undefined1 uVar4;
  code *pcVar5;
  char *pcVar6;
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
    FUN_7100192e90(aiStack_40,DAT_71052adfc0);
    if ((aiStack_40[0] == 0) && (iVar2 = FUN_7100146ba0(DAT_71052adb38), iVar2 != 4)) {
      if (*(char *)(param_1 + 0xfb) != '\0') {
        FUN_71000bcf30((int *)(param_1 + 0x220),(int *)(param_1 + 0x100));
        uVar4 = 6;
        goto LAB_71000f546c;
      }
      FUN_710013fd20(param_1);
      *(undefined1 *)(DAT_71052adb38 + 0x15d) = 1;
      FUN_7100193380(DAT_71052adfc0,1);
      lVar1 = DAT_71052ac580;
      *(undefined8 *)(param_1 + 0x1c8) = *(undefined8 *)(DAT_71052ac580 + 0x30);
      *(undefined8 *)(param_1 + 0x1d8) = *(undefined8 *)(lVar1 + 0x30);
      if (*(char *)(param_1 + 0x264) == '\0') {
        if (*(int *)(param_1 + 0x90) == 9) {
          pcVar5 = FUN_71000f97e0;
          uVar3 = 0;
          *(undefined4 *)(param_1 + 0x98) = 6;
          pcVar6 = "NexMatchJointSessionJob::SendAnswerToDestroyInvitation";
        }
        else if (*(char *)(param_1 + 0xf4) == '\0') {
          *(undefined4 *)(param_1 + 0x98) = 6;
          *(undefined4 *)(param_1 + 0x230) = 4;
          pcVar5 = FUN_71000f9e90;
          uVar3 = 0;
          pcVar6 = "NexMatchJointSessionJob::SendAnswerToInvitation";
        }
        else {
          pcVar5 = FUN_71000f74b0;
          uVar3 = 0;
          pcVar6 = "NexMatchJointSessionJob::CloseMatchmakeSession";
        }
        goto LAB_71000f5514;
      }
      *(undefined1 *)(param_1 + 0x130) = 0xf;
      aiStack_40[0] = 0x10c08;
      nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)aiStack_40 | 4))
      ;
      auStack_28[0] = 0;
      nn::err::ErrorResultVariant::operator=
                ((ErrorResultVariant *)((ulong)aiStack_40 | 4),(Result *)auStack_28);
      FUN_71000bcf30((int *)(param_1 + 0x220),aiStack_40);
      FUN_71000d8f90(*(long *)(DAT_71052adb38 +
                               (ulong)(*(char *)(DAT_71052adb38 + 0x162) == '\0') * 8 + 0x168));
    }
    else {
      aiStack_40[0] = 0x6c59;
      nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)aiStack_40 | 4))
      ;
      auStack_28[0] = 0;
      nn::err::ErrorResultVariant::operator=
                ((ErrorResultVariant *)((ulong)aiStack_40 | 4),(Result *)auStack_28);
      FUN_71000bcf30((int *)(param_1 + 0x220),aiStack_40);
      uVar4 = 4;
LAB_71000f546c:
      *(undefined1 *)(param_1 + 0x130) = uVar4;
    }
    pcVar5 = FUN_71000f7210;
    uVar3 = 5;
    pcVar6 = "NexMatchJointSessionJob::StartLeaveMesh";
    goto LAB_71000f5514;
  }
  *(undefined1 *)(param_1 + 0xfa) = 1;
  *(undefined1 *)(param_1 + 0x130) = 3;
  nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)aiStack_40 | 4));
  auStack_28[0] = 0;
  nn::err::ErrorResultVariant::operator=
            ((ErrorResultVariant *)((ulong)aiStack_40 | 4),(Result *)auStack_28);
  FUN_71000bcf30((int *)(param_1 + 0x220),aiStack_40);
  (**(code **)(**(long **)(DAT_71052adb38 + 8) + 0x28))();
  pcVar5 = FUN_71000f70d0;
  uVar3 = 0;
  pcVar6 = "NexMatchJointSessionJob::ProcessFailure";
LAB_71000f5514:
  *(code **)(param_1 + 0x30) = pcVar5;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(char **)(param_1 + 0x40) = pcVar6;
  return uVar3;
}

