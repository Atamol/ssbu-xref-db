// addr:      71000fd9e0
// offset:    0xfd9e0
// name:      FUN_71000fd9e0
// mangled:   
// signature: undefined FUN_71000fd9e0(void)


undefined8 FUN_71000fd9e0(long param_1)

{
  bool bVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  char *pcVar5;
  undefined1 uVar6;
  undefined8 uVar7;
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
    FUN_7100192e90(aiStack_50,DAT_71052adfc0);
    if ((aiStack_50[0] == 0) &&
       (iVar2 = FUN_7100146ba0(DAT_71052adb38), lVar4 = DAT_71052adb38, iVar2 != 4)) {
      if (*(char *)(param_1 + 0xfb) == '\0') {
        bVar1 = FUN_7100150680(*(long *)(DAT_71052adb38 + 0xb8),*(long *)(param_1 + 0xa0));
        if (bVar1) {
          iVar2 = *(int *)(param_1 + 0xf0);
joined_r0x0071000fddac:
          if ((iVar2 == 0) || (bVar1 = FUN_71000edff0(*(long *)(lVar4 + 8),iVar2), !bVar1)) {
            return 5;
          }
          *(undefined4 *)(param_1 + 0x230) = 10;
          if (*(int *)(DAT_71052adb38 + (ulong)*(byte *)(DAT_71052adb38 + 0x162) * 4 + 0x180) !=
              *(int *)(param_1 + 0xf0)) {
            FUN_7100149290(DAT_71052adb38,*(int *)(param_1 + 0xf0));
            *(undefined4 *)(param_1 + 0x98) = 0;
            lVar4 = (**(code **)(**(long **)(lVar4 + (ulong)(*(char *)(lVar4 + 0x162) == '\0') * 8 +
                                            0x168) + 0xf0))();
            uVar7 = 0;
            if (lVar4 == 0) {
              *(code **)(param_1 + 0x30) = FUN_71000fdf60;
              *(undefined8 *)(param_1 + 0x38) = 0;
              pcVar5 = "NexMatchJointSessionJob::GetNextMatchmakeSessionInfo";
            }
            else {
              *(code **)(param_1 + 0x30) = FUN_71000fc7d0;
              *(undefined8 *)(param_1 + 0x38) = 0;
              pcVar5 = "NexMatchJointSessionJob::SendPreparedForMigrateSession";
            }
            goto LAB_71000fdb54;
          }
          uVar6 = 0x11;
          aiStack_50[0] = 0x10c08;
LAB_71000fdcf0:
          *(undefined1 *)(param_1 + 0x130) = uVar6;
        }
        else {
          uVar3 = FUN_7100146ed0(lVar4);
          if ((uVar3 & 1) == 0) {
            uVar7 = 5;
            *(undefined1 *)(param_1 + 0x130) = 5;
            aiStack_50[0] = 0x6c59;
            nn::err::ErrorResultVariant::ErrorResultVariant
                      ((ErrorResultVariant *)((ulong)aiStack_50 | 4));
            aiStack_60[0] = 0;
            nn::err::ErrorResultVariant::operator=
                      ((ErrorResultVariant *)((ulong)aiStack_50 | 4),(Result *)aiStack_60);
            FUN_71000bcf30((int *)(param_1 + 0x220),aiStack_50);
            FUN_71000d8f90(*(long *)(DAT_71052adb38 +
                                     (ulong)(*(char *)(DAT_71052adb38 + 0x162) == '\0') * 8 + 0x168)
                          );
            *(code **)(param_1 + 0x30) = FUN_71000f7210;
            *(undefined8 *)(param_1 + 0x38) = 0;
            pcVar5 = "NexMatchJointSessionJob::StartLeaveMesh";
            goto LAB_71000fdb54;
          }
          if (*(int *)(lVar4 + (ulong)(*(char *)(lVar4 + 0x162) == '\0') * 4 + 0x180) == 0) {
            uVar6 = 0x14;
            aiStack_50[0] = 0x6c59;
            goto LAB_71000fdcf0;
          }
          FUN_7100192e90(aiStack_50,DAT_71052adfc0);
          aiStack_60[0] = 0x6c50;
          nn::err::ErrorResultVariant::ErrorResultVariant
                    ((ErrorResultVariant *)((ulong)aiStack_60 | 4));
          auStack_38[0] = 0;
          nn::err::ErrorResultVariant::operator=
                    ((ErrorResultVariant *)((ulong)aiStack_60 | 4),(Result *)auStack_38);
          if (aiStack_50[0] != aiStack_60[0]) {
            iVar2 = *(int *)(lVar4 + (ulong)(*(char *)(lVar4 + 0x162) == '\0') * 4 + 0x180);
            *(int *)(param_1 + 0xf0) = iVar2;
            goto joined_r0x0071000fddac;
          }
          *(undefined1 *)(param_1 + 0x130) = 4;
          aiStack_50[0] = 0x6c59;
        }
        nn::err::ErrorResultVariant::ErrorResultVariant
                  ((ErrorResultVariant *)((ulong)aiStack_50 | 4));
        aiStack_60[0] = 0;
        nn::err::ErrorResultVariant::operator=
                  ((ErrorResultVariant *)((ulong)aiStack_50 | 4),(Result *)aiStack_60);
        FUN_71000bcf30((int *)(param_1 + 0x220),aiStack_50);
        FUN_71000d8f90(*(long *)(DAT_71052adb38 +
                                 (ulong)(*(char *)(DAT_71052adb38 + 0x162) == '\0') * 8 + 0x168));
        goto LAB_71000fdaac;
      }
      FUN_71000bcf30((int *)(param_1 + 0x220),(int *)(param_1 + 0x100));
      uVar6 = 6;
    }
    else {
      aiStack_50[0] = 0x6c59;
      nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)aiStack_50 | 4))
      ;
      aiStack_60[0] = 0;
      nn::err::ErrorResultVariant::operator=
                ((ErrorResultVariant *)((ulong)aiStack_50 | 4),(Result *)aiStack_60);
      FUN_71000bcf30((int *)(param_1 + 0x220),aiStack_50);
      uVar6 = 4;
    }
    *(undefined1 *)(param_1 + 0x130) = uVar6;
LAB_71000fdaac:
    *(char **)(param_1 + 0x40) = "NexMatchJointSessionJob::StartLeaveMesh";
    *(code **)(param_1 + 0x30) = FUN_71000f7210;
    *(undefined8 *)(param_1 + 0x38) = 0;
    return 5;
  }
  *(undefined1 *)(param_1 + 0xfa) = 1;
  *(undefined1 *)(param_1 + 0x130) = 3;
  nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)aiStack_50 | 4));
  aiStack_60[0] = 0;
  nn::err::ErrorResultVariant::operator=
            ((ErrorResultVariant *)((ulong)aiStack_50 | 4),(Result *)aiStack_60);
  FUN_71000bcf30((int *)(param_1 + 0x220),aiStack_50);
  (**(code **)(**(long **)(DAT_71052adb38 + 8) + 0x28))();
  uVar7 = 0;
  *(code **)(param_1 + 0x30) = FUN_71000f70d0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  pcVar5 = "NexMatchJointSessionJob::ProcessFailure";
LAB_71000fdb54:
  *(char **)(param_1 + 0x40) = pcVar5;
  return uVar7;
}

