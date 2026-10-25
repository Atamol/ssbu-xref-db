// addr:      71000f9ae0
// offset:    0xf9ae0
// name:      FUN_71000f9ae0
// mangled:   
// signature: undefined FUN_71000f9ae0(void)


undefined8 FUN_71000f9ae0(long param_1)

{
  long lVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  undefined8 uVar6;
  char *pcVar7;
  undefined1 uVar8;
  code *pcVar9;
  long lVar10;
  int aiStack_50 [4];
  undefined4 uStack_38;
  int iStack_34;
  
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
    FUN_7100192e90(aiStack_50,DAT_71052adfc0);
    if ((aiStack_50[0] != 0) ||
       (iVar2 = FUN_7100146ba0(DAT_71052adb38), lVar1 = DAT_71052adb38, iVar2 == 4)) {
      aiStack_50[0] = 0x6c59;
      nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)aiStack_50 | 4))
      ;
      uStack_38 = 0;
      nn::err::ErrorResultVariant::operator=
                ((ErrorResultVariant *)((ulong)aiStack_50 | 4),(Result *)&uStack_38);
      FUN_71000bcf30((int *)(param_1 + 0x220),aiStack_50);
      uVar8 = 4;
LAB_71000f9ba8:
      *(undefined1 *)(param_1 + 0x130) = uVar8;
      *(code **)(param_1 + 0x30) = FUN_71000f7210;
      *(undefined8 *)(param_1 + 0x38) = 0;
      *(char **)(param_1 + 0x40) = "NexMatchJointSessionJob::StartLeaveMesh";
      return 5;
    }
    if (*(char *)(param_1 + 0xfb) != '\0') {
      FUN_71000bcf30((int *)(param_1 + 0x220),(int *)(param_1 + 0x100));
      uVar8 = 6;
      goto LAB_71000f9ba8;
    }
    lVar10 = *(long *)(DAT_71052adb38 + 0xb8);
    lVar3 = FUN_7100146f60(DAT_71052adb38);
    uVar4 = FUN_7100150d50(lVar10,lVar3,&iStack_34);
    if ((uVar4 & 1) == 0) {
      iStack_34 = 0;
    }
    lVar3 = *(long *)(DAT_71052ac580 + 0x30);
    lVar10 = *(long *)(param_1 + 0x1d0);
    plVar5 = FUN_71000bb680();
    if (lVar3 - lVar10 < *plVar5 * 15000) {
      if (*(char *)(param_1 + 0x234) != '\0') {
        *(undefined1 *)(param_1 + 0x234) = 0;
        if ((*(long *)(param_1 + 0x238) == *(long *)(lVar1 + 0xf0)) ||
           (((uVar4 = FUN_7100150d50(*(long *)(DAT_71052adb38 + 0xb8),*(long *)(param_1 + 0x238),
                                     &iStack_34), (uVar4 & 1) != 0 &&
             (iStack_34 != *(int *)(lVar1 + (ulong)*(byte *)(lVar1 + 0x162) * 4 + 0x180))) &&
            (uVar4 = (**(code **)(**(long **)(lVar1 + (ulong)*(byte *)(lVar1 + 0x162) * 8 + 0x168) +
                                 0xe0))(), (uVar4 & 1) != 0)))) {
          FUN_71000f9670(param_1);
          *(undefined4 *)(param_1 + 0x230) = 5;
          lVar1 = DAT_71052ac580;
          plVar5 = FUN_71000bb680();
          uVar6 = 0;
          pcVar7 = "NexMatchJointSessionJob::SendInvitationAsCompanion";
          *(long *)(param_1 + 0x1f8) = *(long *)(lVar1 + 0x30) + *plVar5 * 20000;
          pcVar9 = FUN_71000f7df0;
          goto LAB_71000f9e74;
        }
      }
      if (*(long *)(param_1 + 0xa0) == 0) {
        return 5;
      }
      *(undefined4 *)(param_1 + 0x98) = 6;
LAB_71000f9e6c:
      pcVar9 = FUN_71000f9e90;
      uVar6 = 0;
      pcVar7 = "NexMatchJointSessionJob::SendAnswerToInvitation";
    }
    else {
      if (*(int *)(lVar1 + (ulong)*(byte *)(lVar1 + 0x162) * 4 + 0x180) != iStack_34) {
        uVar6 = (**(code **)(**(long **)(lVar1 + (ulong)*(byte *)(lVar1 + 0x162) * 8 + 0x168) + 0xf0
                            ))();
        *(undefined8 *)(param_1 + 0xa0) = uVar6;
        *(undefined4 *)(param_1 + 0x98) = 6;
        goto LAB_71000f9e6c;
      }
      *(undefined1 *)(param_1 + 0x130) = 0xe;
      aiStack_50[0] = 0x6c59;
      nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)aiStack_50 | 4))
      ;
      uStack_38 = 0;
      nn::err::ErrorResultVariant::operator=
                ((ErrorResultVariant *)((ulong)aiStack_50 | 4),(Result *)&uStack_38);
      FUN_71000bcf30((int *)(param_1 + 0x220),aiStack_50);
      FUN_71000d8f90(*(long *)(DAT_71052adb38 +
                               (ulong)(*(char *)(DAT_71052adb38 + 0x162) == '\0') * 8 + 0x168));
      pcVar9 = FUN_71000f7210;
      uVar6 = 5;
      pcVar7 = "NexMatchJointSessionJob::StartLeaveMesh";
    }
LAB_71000f9e74:
    *(code **)(param_1 + 0x30) = pcVar9;
    *(undefined8 *)(param_1 + 0x38) = 0;
    goto LAB_71000f9c54;
  }
  *(undefined1 *)(param_1 + 0xfa) = 1;
  *(undefined1 *)(param_1 + 0x130) = 3;
  nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)aiStack_50 | 4));
  uStack_38 = 0;
  nn::err::ErrorResultVariant::operator=
            ((ErrorResultVariant *)((ulong)aiStack_50 | 4),(Result *)&uStack_38);
  FUN_71000bcf30((int *)(param_1 + 0x220),aiStack_50);
  (**(code **)(**(long **)(DAT_71052adb38 + 8) + 0x28))();
  uVar6 = 0;
  *(code **)(param_1 + 0x30) = FUN_71000f70d0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  pcVar7 = "NexMatchJointSessionJob::ProcessFailure";
LAB_71000f9c54:
  *(char **)(param_1 + 0x40) = pcVar7;
  return uVar6;
}

