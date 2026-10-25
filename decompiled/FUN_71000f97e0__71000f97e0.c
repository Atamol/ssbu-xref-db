// addr:      71000f97e0
// offset:    0xf97e0
// name:      FUN_71000f97e0
// mangled:   
// signature: undefined FUN_71000f97e0(void)


undefined8 FUN_71000f97e0(long param_1)

{
  undefined4 uVar1;
  long lVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  char *pcVar6;
  undefined1 uVar7;
  code *pcVar8;
  long lVar9;
  undefined8 uVar10;
  int aiStack_60 [4];
  int aiStack_50 [4];
  undefined4 auStack_38 [2];
  
  iVar3 = FUN_7100146ba0(DAT_71052adb38);
  switch(iVar3) {
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
    FUN_7100192e90(aiStack_50,DAT_71052adfc0);
    if ((aiStack_50[0] != 0) ||
       (iVar3 = FUN_7100146ba0(DAT_71052adb38), lVar2 = DAT_71052adb38, iVar3 == 4)) {
      aiStack_50[0] = 0x6c59;
      nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)aiStack_50 | 4))
      ;
      aiStack_60[0] = 0;
      nn::err::ErrorResultVariant::operator=
                ((ErrorResultVariant *)((ulong)aiStack_50 | 4),(Result *)aiStack_60);
      FUN_71000bcf30((int *)(param_1 + 0x220),aiStack_50);
      uVar7 = 4;
LAB_71000f98a8:
      *(undefined1 *)(param_1 + 0x130) = uVar7;
      *(code **)(param_1 + 0x30) = FUN_71000f7210;
      *(undefined8 *)(param_1 + 0x38) = 0;
      *(char **)(param_1 + 0x40) = "NexMatchJointSessionJob::StartLeaveMesh";
      return 5;
    }
    if (*(char *)(param_1 + 0xfb) != '\0') {
      FUN_71000bcf30((int *)(param_1 + 0x220),(int *)(param_1 + 0x100));
      uVar7 = 6;
      goto LAB_71000f98a8;
    }
    lVar9 = *(long *)(DAT_71052adb38 + 200);
    uVar1 = *(undefined4 *)(param_1 + 0x90);
    lVar4 = FUN_7100146f60(DAT_71052adb38);
    FUN_710014e3a0(aiStack_50,lVar9,(char)uVar1,lVar4,1);
    aiStack_60[0] = 0x4c0d;
    nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)aiStack_60 | 4));
    auStack_38[0] = 0;
    nn::err::ErrorResultVariant::operator=
              ((ErrorResultVariant *)((ulong)aiStack_60 | 4),(Result *)auStack_38);
    uVar10 = 5;
    if (aiStack_50[0] == aiStack_60[0]) {
      return 5;
    }
    if (aiStack_50[0] == 0) {
      uVar5 = (**(code **)(**(long **)(lVar2 + (ulong)*(byte *)(lVar2 + 0x162) * 8 + 0x168) + 0xe0))
                        ();
      if ((uVar5 & 1) == 0) {
        pcVar6 = "NexMatchJointSessionJob::WaitForInvitationAsCompanion";
        uVar10 = *(undefined8 *)(DAT_71052ac580 + 0x30);
        *(undefined4 *)(param_1 + 0x98) = 6;
        *(undefined8 *)(param_1 + 0x1d0) = uVar10;
        pcVar8 = FUN_71000f9ae0;
        uVar10 = 5;
      }
      else {
        FUN_71000f9670(param_1);
        pcVar8 = FUN_71000f74b0;
        uVar10 = 0;
        pcVar6 = "NexMatchJointSessionJob::CloseMatchmakeSession";
      }
    }
    else {
      *(undefined1 *)(param_1 + 0x130) = 5;
      aiStack_60[0] = 0x6c57;
      nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)aiStack_60 | 4))
      ;
      auStack_38[0] = 0;
      nn::err::ErrorResultVariant::operator=
                ((ErrorResultVariant *)((ulong)aiStack_60 | 4),(Result *)auStack_38);
      FUN_71000bcf30((int *)(param_1 + 0x220),aiStack_60);
      FUN_71000d8f90(*(long *)(DAT_71052adb38 +
                               (ulong)(*(char *)(DAT_71052adb38 + 0x162) == '\0') * 8 + 0x168));
      pcVar8 = FUN_71000f7210;
      pcVar6 = "NexMatchJointSessionJob::StartLeaveMesh";
    }
    *(code **)(param_1 + 0x30) = pcVar8;
    *(undefined8 *)(param_1 + 0x38) = 0;
    goto LAB_71000f9954;
  }
  *(undefined1 *)(param_1 + 0xfa) = 1;
  *(undefined1 *)(param_1 + 0x130) = 3;
  nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)aiStack_50 | 4));
  aiStack_60[0] = 0;
  nn::err::ErrorResultVariant::operator=
            ((ErrorResultVariant *)((ulong)aiStack_50 | 4),(Result *)aiStack_60);
  FUN_71000bcf30((int *)(param_1 + 0x220),aiStack_50);
  (**(code **)(**(long **)(DAT_71052adb38 + 8) + 0x28))();
  uVar10 = 0;
  *(code **)(param_1 + 0x30) = FUN_71000f70d0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  pcVar6 = "NexMatchJointSessionJob::ProcessFailure";
LAB_71000f9954:
  *(char **)(param_1 + 0x40) = pcVar6;
  return uVar10;
}

