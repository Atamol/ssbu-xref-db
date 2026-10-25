// addr:      71000f7a50
// offset:    0xf7a50
// name:      FUN_71000f7a50
// mangled:   
// signature: undefined FUN_71000f7a50(void)


undefined8 FUN_71000f7a50(long param_1)

{
  int iVar1;
  long *plVar2;
  undefined8 uVar3;
  ulong uVar4;
  char *pcVar5;
  ulong uVar6;
  long lVar7;
  undefined1 uVar8;
  code *pcVar9;
  long lVar10;
  undefined1 *puVar11;
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
    if ((aiStack_40[0] != 0) ||
       (iVar1 = FUN_7100146ba0(DAT_71052adb38), lVar10 = DAT_71052adb38, iVar1 == 4)) {
      aiStack_40[0] = 0x6c59;
      nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)aiStack_40 | 4))
      ;
      auStack_28[0] = 0;
      nn::err::ErrorResultVariant::operator=
                ((ErrorResultVariant *)((ulong)aiStack_40 | 4),(Result *)auStack_28);
      FUN_71000bcf30((int *)(param_1 + 0x220),aiStack_40);
      uVar8 = 4;
LAB_71000f7b14:
      *(undefined1 *)(param_1 + 0x130) = uVar8;
      *(code **)(param_1 + 0x30) = FUN_71000f7210;
      *(undefined8 *)(param_1 + 0x38) = 0;
      *(char **)(param_1 + 0x40) = "NexMatchJointSessionJob::StartLeaveMesh";
      return 5;
    }
    if (*(char *)(param_1 + 0xfb) != '\0') {
      FUN_71000bcf30((int *)(param_1 + 0x220),(int *)(param_1 + 0x100));
      uVar8 = 6;
      goto LAB_71000f7b14;
    }
    iVar1 = FUN_7100148e50(DAT_71052adb38);
    lVar7 = DAT_71052ac580;
    if (iVar1 == 2) {
      if (*(int *)(param_1 + 0x90) == 9) {
        plVar2 = FUN_71000bb680();
        uVar3 = 0;
        *(long *)(param_1 + 0x1f8) = *(long *)(lVar7 + 0x30) + *plVar2 * 20000;
        *(code **)(param_1 + 0x30) = FUN_71000f8600;
        *(undefined8 *)(param_1 + 0x38) = 0;
        pcVar5 = "NexMatchJointSessionJob::SendDestroyInvitation";
      }
      else {
        uVar4 = FUN_7100146ed0(DAT_71052adb38);
        if ((uVar4 & 1) == 0) {
          *(undefined4 *)(param_1 + 0x230) = 5;
          lVar10 = DAT_71052ac580;
          plVar2 = FUN_71000bb680();
          uVar3 = 0;
          *(long *)(param_1 + 0x1f8) = *(long *)(lVar10 + 0x30) + *plVar2 * 20000;
          pcVar5 = "NexMatchJointSessionJob::SendInvitationAsCompanion";
          *(code **)(param_1 + 0x30) = FUN_71000f7df0;
          *(undefined8 *)(param_1 + 0x38) = 0;
        }
        else {
          uVar4 = FUN_7100151000(*(long *)(DAT_71052adb38 + 0xb8),param_1 + 0x268);
          *(char *)(param_1 + 0x2e8) = (char)uVar4;
          if ((uVar4 & 0xff) != 0) {
            uVar6 = uVar4 & 3;
            if ((uVar4 & 0xff) - 1 < 3) {
              lVar10 = 0;
            }
            else {
              lVar10 = 0;
              do {
                lVar7 = param_1 + lVar10;
                lVar10 = lVar10 + 4;
                *(undefined4 *)(lVar7 + 0x2e9) = 0;
              } while ((uVar4 & 0xff) - uVar6 != lVar10);
            }
            if (uVar6 != 0) {
              lVar7 = -uVar6;
              puVar11 = (undefined1 *)(param_1 + lVar10 + 0x2e9);
              do {
                lVar7 = lVar7 + 1;
                *puVar11 = 0;
                puVar11 = puVar11 + 1;
              } while (lVar7 != 0);
            }
          }
          uVar3 = 0;
          *(code **)(param_1 + 0x30) = FUN_71000f8aa0;
          *(undefined8 *)(param_1 + 0x38) = 0;
          pcVar5 = "NexMatchJointSessionJob::GetMatchmakeSessionOwners";
        }
      }
    }
    else {
      uVar4 = (ulong)(*(char *)(lVar10 + 0x162) == '\0');
      plVar2 = *(long **)(lVar10 + uVar4 * 8 + 0x168);
      (**(code **)(*plVar2 + 0x90))
                (aiStack_40,plVar2,param_1 + 0x60,*(undefined4 *)(lVar10 + uVar4 * 4 + 0x180));
      if (aiStack_40[0] == 0) {
        pcVar9 = FUN_71000f82a0;
        pcVar5 = "NexMatchJointSessionJob::WaitCloseJointSessionParticipation";
      }
      else {
        *(undefined1 *)(param_1 + 0x130) = 2;
        FUN_71000bcf30((int *)(param_1 + 0x220),aiStack_40);
        FUN_71000d8f90(*(long *)(DAT_71052adb38 +
                                 (ulong)(*(char *)(DAT_71052adb38 + 0x162) == '\0') * 8 + 0x168));
        pcVar9 = FUN_71000f7210;
        pcVar5 = "NexMatchJointSessionJob::StartLeaveMesh";
      }
      *(code **)(param_1 + 0x30) = pcVar9;
      *(undefined8 *)(param_1 + 0x38) = 0;
      uVar3 = 5;
    }
    goto LAB_71000f7bc0;
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
  pcVar5 = "NexMatchJointSessionJob::ProcessFailure";
LAB_71000f7bc0:
  *(char **)(param_1 + 0x40) = pcVar5;
  return uVar3;
}

