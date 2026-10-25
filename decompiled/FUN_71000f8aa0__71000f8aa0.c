// addr:      71000f8aa0
// offset:    0xf8aa0
// name:      FUN_71000f8aa0
// mangled:   
// signature: undefined FUN_71000f8aa0(void)


undefined8 FUN_71000f8aa0(long param_1)

{
  long lVar1;
  byte bVar2;
  long lVar3;
  int iVar4;
  long *plVar5;
  byte bVar6;
  code *pcVar7;
  undefined1 uVar8;
  char *pcVar9;
  ulong uVar10;
  int aiStack_58 [4];
  undefined4 auStack_48 [2];
  
  lVar3 = DAT_71052adb38;
  iVar4 = FUN_7100146ba0(DAT_71052adb38);
  switch(iVar4) {
  case 5:
    aiStack_58[0] = 0xc406;
    break;
  case 6:
    aiStack_58[0] = 0xa471;
    break;
  case 7:
    aiStack_58[0] = 0xc420;
    break;
  case 8:
    aiStack_58[0] = 0xc421;
    break;
  default:
    FUN_7100192e90(aiStack_58,DAT_71052adfc0);
    if ((aiStack_58[0] == 0) && (iVar4 = FUN_7100146ba0(DAT_71052adb38), iVar4 != 4)) {
      if (*(char *)(param_1 + 0xfb) == '\0') {
        bVar6 = *(byte *)(param_1 + 0x2e8);
        if (bVar6 != 0) {
          uVar10 = 0;
          lVar1 = param_1 + 0x2e9;
          do {
            while( true ) {
              iVar4 = *(int *)(lVar1 + uVar10 * 4 + -0x81);
              bVar2 = *(byte *)(lVar3 + 0x162);
              if ((iVar4 != *(int *)(lVar3 + (ulong)bVar2 * 4 + 0x180)) &&
                 (*(char *)(lVar1 + uVar10) == '\0')) break;
              uVar10 = uVar10 + 1;
              if (bVar6 <= uVar10) goto LAB_71000f8cdc;
            }
            *(undefined1 *)(lVar1 + uVar10) = 1;
            FUN_71000da870(aiStack_58,*(long *)(lVar3 + (ulong)(bVar2 == 0) * 8 + 0x168),
                           (int *)(param_1 + 0x60),iVar4);
            if (aiStack_58[0] == 0) {
              pcVar7 = FUN_71000f8d40;
              pcVar9 = "NexMatchJointSessionJob::WaitGetMatchmakeSessionOwners";
              goto LAB_71000f8b78;
            }
            bVar6 = *(byte *)(param_1 + 0x2e8);
            uVar10 = uVar10 + 1;
          } while (uVar10 < bVar6);
        }
LAB_71000f8cdc:
        *(undefined4 *)(param_1 + 0x230) = 5;
        lVar3 = DAT_71052ac580;
        plVar5 = FUN_71000bb680();
        *(long *)(param_1 + 0x1f8) = *(long *)(lVar3 + 0x30) + *plVar5 * 20000;
        *(char **)(param_1 + 0x40) = "NexMatchJointSessionJob::SendInvitationAsCompanion";
        *(code **)(param_1 + 0x30) = FUN_71000f7df0;
        *(undefined8 *)(param_1 + 0x38) = 0;
        return 0;
      }
      FUN_71000bcf30((int *)(param_1 + 0x220),(int *)(param_1 + 0x100));
      uVar8 = 6;
    }
    else {
      aiStack_58[0] = 0x6c59;
      nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)aiStack_58 | 4))
      ;
      auStack_48[0] = 0;
      nn::err::ErrorResultVariant::operator=
                ((ErrorResultVariant *)((ulong)aiStack_58 | 4),(Result *)auStack_48);
      FUN_71000bcf30((int *)(param_1 + 0x220),aiStack_58);
      uVar8 = 4;
    }
    pcVar7 = FUN_71000f7210;
    *(undefined1 *)(param_1 + 0x130) = uVar8;
    pcVar9 = "NexMatchJointSessionJob::StartLeaveMesh";
LAB_71000f8b78:
    *(code **)(param_1 + 0x30) = pcVar7;
    *(undefined8 *)(param_1 + 0x38) = 0;
    *(char **)(param_1 + 0x40) = pcVar9;
    return 5;
  }
  *(undefined1 *)(param_1 + 0xfa) = 1;
  *(undefined1 *)(param_1 + 0x130) = 3;
  nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)aiStack_58 | 4));
  auStack_48[0] = 0;
  nn::err::ErrorResultVariant::operator=
            ((ErrorResultVariant *)((ulong)aiStack_58 | 4),(Result *)auStack_48);
  FUN_71000bcf30((int *)(param_1 + 0x220),aiStack_58);
  (**(code **)(**(long **)(DAT_71052adb38 + 8) + 0x28))();
  *(code **)(param_1 + 0x30) = FUN_71000f70d0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(char **)(param_1 + 0x40) = "NexMatchJointSessionJob::ProcessFailure";
  return 0;
}

