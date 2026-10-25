// addr:      71000f77a0
// offset:    0xf77a0
// name:      FUN_71000f77a0
// mangled:   
// signature: undefined FUN_71000f77a0(void)


undefined8 FUN_71000f77a0(long param_1)

{
  int *piVar1;
  long lVar2;
  bool bVar3;
  int iVar4;
  ulong uVar5;
  long *plVar6;
  code *pcVar7;
  char *pcVar8;
  undefined8 uVar9;
  int aiStack_60 [4];
  int aiStack_50 [4];
  undefined4 auStack_38 [2];
  
  iVar4 = FUN_7100146ba0(DAT_71052adb38);
  lVar2 = DAT_71052adb38;
  switch(iVar4) {
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
    uVar5 = (**(code **)(**(long **)(DAT_71052adb38 + (ulong)*(byte *)(DAT_71052adb38 + 0x162) * 8 +
                                    0x168) + 0x98))();
    if ((uVar5 & 1) == 0) {
      return 5;
    }
    piVar1 = (int *)(param_1 + 100);
    FUN_71000bce50(aiStack_50,piVar1);
    if (aiStack_50[0] == 0) {
      FUN_7100149240(DAT_71052adb38,2);
      bVar3 = FUN_7100140060(param_1);
      if ((bVar3) &&
         (uVar5 = (**(code **)(**(long **)(lVar2 + (ulong)(*(char *)(lVar2 + 0x162) == '\0') * 8 +
                                          0x168) + 0xe0))(), (uVar5 & 1) != 0)) {
        pcVar7 = FUN_71000f7a50;
        uVar9 = 0;
        pcVar8 = "NexMatchJointSessionJob::CloseJointSessionParticipation";
      }
      else {
        *(undefined4 *)(param_1 + 0x230) = 5;
        lVar2 = DAT_71052ac580;
        plVar6 = FUN_71000bb680();
        pcVar8 = "NexMatchJointSessionJob::SendInvitationAsCompanion";
        *(long *)(param_1 + 0x1f8) = *(long *)(lVar2 + 0x30) + *plVar6 * 20000;
        pcVar7 = FUN_71000f7df0;
        uVar9 = 0;
      }
    }
    else {
      *(undefined1 *)(param_1 + 0x130) = 1;
      FUN_71000bce50(aiStack_50,piVar1);
      aiStack_60[0] = 0x10c08;
      nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)aiStack_60 | 4))
      ;
      auStack_38[0] = 0;
      nn::err::ErrorResultVariant::operator=
                ((ErrorResultVariant *)((ulong)aiStack_60 | 4),(Result *)auStack_38);
      if (aiStack_50[0] == aiStack_60[0]) {
        aiStack_50[0] = 0x6c59;
        nn::err::ErrorResultVariant::ErrorResultVariant
                  ((ErrorResultVariant *)((ulong)aiStack_50 | 4));
        aiStack_60[0] = 0;
        nn::err::ErrorResultVariant::operator=
                  ((ErrorResultVariant *)((ulong)aiStack_50 | 4),(Result *)aiStack_60);
      }
      else {
        FUN_71000bce50(aiStack_50,piVar1);
      }
      FUN_71000bcf30((int *)(param_1 + 0x220),aiStack_50);
      FUN_71000d8f90(*(long *)(DAT_71052adb38 +
                               (ulong)(*(char *)(DAT_71052adb38 + 0x162) == '\0') * 8 + 0x168));
      pcVar7 = FUN_71000f7210;
      uVar9 = 5;
      pcVar8 = "NexMatchJointSessionJob::StartLeaveMesh";
    }
    goto LAB_71000f7940;
  }
  *(undefined1 *)(param_1 + 0xfa) = 1;
  *(undefined1 *)(param_1 + 0x130) = 3;
  nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)aiStack_50 | 4));
  aiStack_60[0] = 0;
  nn::err::ErrorResultVariant::operator=
            ((ErrorResultVariant *)((ulong)aiStack_50 | 4),(Result *)aiStack_60);
  FUN_71000bcf30((int *)(param_1 + 0x220),aiStack_50);
  (**(code **)(**(long **)(DAT_71052adb38 + 8) + 0x28))();
  pcVar7 = FUN_71000f70d0;
  uVar9 = 0;
  pcVar8 = "NexMatchJointSessionJob::ProcessFailure";
LAB_71000f7940:
  *(code **)(param_1 + 0x30) = pcVar7;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(char **)(param_1 + 0x40) = pcVar8;
  return uVar9;
}

