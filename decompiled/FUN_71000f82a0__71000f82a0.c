// addr:      71000f82a0
// offset:    0xf82a0
// name:      FUN_71000f82a0
// mangled:   
// signature: undefined FUN_71000f82a0(void)


undefined8 FUN_71000f82a0(long param_1)

{
  int *piVar1;
  int iVar2;
  ulong uVar3;
  long *plVar4;
  code *pcVar5;
  long lVar6;
  ulong uVar7;
  char *pcVar8;
  undefined1 *puVar9;
  long lVar10;
  undefined8 uVar11;
  int aiStack_60 [4];
  int aiStack_50 [4];
  undefined4 auStack_38 [2];
  
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
    uVar3 = (**(code **)(**(long **)(DAT_71052adb38 +
                                     (ulong)(*(char *)(DAT_71052adb38 + 0x162) == '\0') * 8 + 0x168)
                        + 0x98))();
    if ((uVar3 & 1) == 0) {
      return 5;
    }
    piVar1 = (int *)(param_1 + 100);
    FUN_71000bce50(aiStack_50,piVar1);
    if (aiStack_50[0] == 0) {
      FUN_7100149250(DAT_71052adb38,2);
      lVar6 = DAT_71052ac580;
      if (*(int *)(param_1 + 0x90) == 9) {
        plVar4 = FUN_71000bb680();
        pcVar8 = "NexMatchJointSessionJob::SendDestroyInvitation";
        *(long *)(param_1 + 0x1f8) = *(long *)(lVar6 + 0x30) + *plVar4 * 20000;
        pcVar5 = FUN_71000f8600;
        uVar11 = 0;
      }
      else {
        uVar3 = FUN_7100146ed0(DAT_71052adb38);
        if ((uVar3 & 1) == 0) {
          *(undefined4 *)(param_1 + 0x230) = 5;
          lVar6 = DAT_71052ac580;
          plVar4 = FUN_71000bb680();
          pcVar8 = "NexMatchJointSessionJob::SendInvitationAsCompanion";
          *(long *)(param_1 + 0x1f8) = *(long *)(lVar6 + 0x30) + *plVar4 * 20000;
          pcVar5 = FUN_71000f7df0;
          uVar11 = 0;
        }
        else {
          uVar3 = FUN_7100151000(*(long *)(DAT_71052adb38 + 0xb8),param_1 + 0x268);
          *(char *)(param_1 + 0x2e8) = (char)uVar3;
          if ((uVar3 & 0xff) != 0) {
            uVar7 = uVar3 & 3;
            if ((uVar3 & 0xff) - 1 < 3) {
              lVar6 = 0;
            }
            else {
              lVar6 = 0;
              do {
                lVar10 = param_1 + lVar6;
                lVar6 = lVar6 + 4;
                *(undefined4 *)(lVar10 + 0x2e9) = 0;
              } while ((uVar3 & 0xff) - uVar7 != lVar6);
            }
            if (uVar7 != 0) {
              pcVar5 = FUN_71000f8aa0;
              lVar10 = -uVar7;
              pcVar8 = "NexMatchJointSessionJob::GetMatchmakeSessionOwners";
              uVar11 = 0;
              puVar9 = (undefined1 *)(param_1 + lVar6 + 0x2e9);
              do {
                lVar10 = lVar10 + 1;
                *puVar9 = 0;
                puVar9 = puVar9 + 1;
              } while (lVar10 != 0);
              goto LAB_71000f8448;
            }
          }
          pcVar5 = FUN_71000f8aa0;
          uVar11 = 0;
          pcVar8 = "NexMatchJointSessionJob::GetMatchmakeSessionOwners";
        }
      }
    }
    else {
      *(undefined1 *)(param_1 + 0x130) = 2;
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
      pcVar5 = FUN_71000f7210;
      uVar11 = 5;
      pcVar8 = "NexMatchJointSessionJob::StartLeaveMesh";
    }
    goto LAB_71000f8448;
  }
  *(undefined1 *)(param_1 + 0xfa) = 1;
  *(undefined1 *)(param_1 + 0x130) = 3;
  nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)aiStack_50 | 4));
  aiStack_60[0] = 0;
  nn::err::ErrorResultVariant::operator=
            ((ErrorResultVariant *)((ulong)aiStack_50 | 4),(Result *)aiStack_60);
  FUN_71000bcf30((int *)(param_1 + 0x220),aiStack_50);
  (**(code **)(**(long **)(DAT_71052adb38 + 8) + 0x28))();
  pcVar5 = FUN_71000f70d0;
  uVar11 = 0;
  pcVar8 = "NexMatchJointSessionJob::ProcessFailure";
LAB_71000f8448:
  *(code **)(param_1 + 0x30) = pcVar5;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(char **)(param_1 + 0x40) = pcVar8;
  return uVar11;
}

