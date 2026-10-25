// addr:      71000f74b0
// offset:    0xf74b0
// name:      FUN_71000f74b0
// mangled:   
// signature: undefined FUN_71000f74b0(void)


undefined8 FUN_71000f74b0(long param_1)

{
  long lVar1;
  bool bVar2;
  int iVar3;
  ulong uVar4;
  undefined8 uVar5;
  long *plVar6;
  char *pcVar7;
  undefined1 uVar8;
  code *pcVar9;
  int aiStack_40 [4];
  undefined4 auStack_28 [2];
  
  iVar3 = FUN_7100146ba0(DAT_71052adb38);
  switch(iVar3) {
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
    if ((aiStack_40[0] != 0) ||
       (iVar3 = FUN_7100146ba0(DAT_71052adb38), lVar1 = DAT_71052adb38, iVar3 == 4)) {
      aiStack_40[0] = 0x6c59;
      nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)aiStack_40 | 4))
      ;
      auStack_28[0] = 0;
      nn::err::ErrorResultVariant::operator=
                ((ErrorResultVariant *)((ulong)aiStack_40 | 4),(Result *)auStack_28);
      FUN_71000bcf30((int *)(param_1 + 0x220),aiStack_40);
      uVar8 = 4;
LAB_71000f7574:
      *(undefined1 *)(param_1 + 0x130) = uVar8;
      *(code **)(param_1 + 0x30) = FUN_71000f7210;
      *(undefined8 *)(param_1 + 0x38) = 0;
      *(char **)(param_1 + 0x40) = "NexMatchJointSessionJob::StartLeaveMesh";
      return 5;
    }
    if (*(char *)(param_1 + 0xfb) != '\0') {
      FUN_71000bcf30((int *)(param_1 + 0x220),(int *)(param_1 + 0x100));
      uVar8 = 6;
      goto LAB_71000f7574;
    }
    iVar3 = FUN_7100148dc0(DAT_71052adb38);
    if (iVar3 == 2) {
      bVar2 = FUN_7100140060(param_1);
      if ((bVar2) &&
         (uVar4 = (**(code **)(**(long **)(lVar1 + (ulong)(*(char *)(lVar1 + 0x162) == '\0') * 8 +
                                          0x168) + 0xe0))(), (uVar4 & 1) != 0)) {
        uVar5 = 0;
        *(code **)(param_1 + 0x30) = FUN_71000f7a50;
        *(undefined8 *)(param_1 + 0x38) = 0;
        pcVar7 = "NexMatchJointSessionJob::CloseJointSessionParticipation";
      }
      else {
        *(undefined4 *)(param_1 + 0x230) = 5;
        lVar1 = DAT_71052ac580;
        plVar6 = FUN_71000bb680();
        uVar5 = 0;
        *(long *)(param_1 + 0x1f8) = *(long *)(lVar1 + 0x30) + *plVar6 * 20000;
        pcVar7 = "NexMatchJointSessionJob::SendInvitationAsCompanion";
        *(code **)(param_1 + 0x30) = FUN_71000f7df0;
        *(undefined8 *)(param_1 + 0x38) = 0;
      }
    }
    else {
      plVar6 = *(long **)(lVar1 + (ulong)*(byte *)(lVar1 + 0x162) * 8 + 0x168);
      (**(code **)(*plVar6 + 0x90))
                (aiStack_40,plVar6,param_1 + 0x60,
                 *(undefined4 *)(lVar1 + (ulong)*(byte *)(lVar1 + 0x162) * 4 + 0x180));
      if (aiStack_40[0] == 0) {
        pcVar9 = FUN_71000f77a0;
        pcVar7 = "NexMatchJointSessionJob::WaitCloseMatchmakeSession";
      }
      else {
        *(undefined1 *)(param_1 + 0x130) = 1;
        FUN_71000bcf30((int *)(param_1 + 0x220),aiStack_40);
        FUN_71000d8f90(*(long *)(DAT_71052adb38 +
                                 (ulong)(*(char *)(DAT_71052adb38 + 0x162) == '\0') * 8 + 0x168));
        pcVar9 = FUN_71000f7210;
        pcVar7 = "NexMatchJointSessionJob::StartLeaveMesh";
      }
      *(code **)(param_1 + 0x30) = pcVar9;
      *(undefined8 *)(param_1 + 0x38) = 0;
      uVar5 = 5;
    }
    goto LAB_71000f7620;
  }
  *(undefined1 *)(param_1 + 0xfa) = 1;
  *(undefined1 *)(param_1 + 0x130) = 3;
  nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)aiStack_40 | 4));
  auStack_28[0] = 0;
  nn::err::ErrorResultVariant::operator=
            ((ErrorResultVariant *)((ulong)aiStack_40 | 4),(Result *)auStack_28);
  FUN_71000bcf30((int *)(param_1 + 0x220),aiStack_40);
  (**(code **)(**(long **)(DAT_71052adb38 + 8) + 0x28))();
  uVar5 = 0;
  *(code **)(param_1 + 0x30) = FUN_71000f70d0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  pcVar7 = "NexMatchJointSessionJob::ProcessFailure";
LAB_71000f7620:
  *(char **)(param_1 + 0x40) = pcVar7;
  return uVar5;
}

