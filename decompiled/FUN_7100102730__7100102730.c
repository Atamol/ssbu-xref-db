// addr:      7100102730
// offset:    0x102730
// name:      FUN_7100102730
// mangled:   
// signature: undefined FUN_7100102730(void)


undefined8 FUN_7100102730(long param_1)

{
  bool bVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  char *pcVar6;
  long lVar7;
  undefined1 uVar8;
  undefined8 uVar9;
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
       (iVar2 = FUN_7100146ba0(DAT_71052adb38), lVar7 = DAT_71052adb38, iVar2 != 4)) {
      if (*(char *)(param_1 + 0xfb) == '\0') {
        bVar1 = FUN_7100150680(*(long *)(DAT_71052adb38 + 0xb8),*(long *)(param_1 + 0xa0));
        if (!bVar1) {
          uVar4 = FUN_7100146ed0(lVar7);
          if ((uVar4 & 1) == 0) {
            uVar9 = 5;
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
            pcVar6 = "NexMatchJointSessionJob::StartLeaveMesh";
            goto LAB_71001028a4;
          }
          FUN_7100192e90(aiStack_50,DAT_71052adfc0);
          aiStack_60[0] = 0x6c50;
          nn::err::ErrorResultVariant::ErrorResultVariant
                    ((ErrorResultVariant *)((ulong)aiStack_60 | 4));
          auStack_38[0] = 0;
          nn::err::ErrorResultVariant::operator=
                    ((ErrorResultVariant *)((ulong)aiStack_60 | 4),(Result *)auStack_38);
          if (aiStack_50[0] != aiStack_60[0]) {
            if (*(char *)(param_1 + 0x240) == '\0') {
              return 5;
            }
            *(undefined1 *)(param_1 + 0x240) = 0;
            goto LAB_7100102a94;
          }
          *(undefined1 *)(param_1 + 0x130) = 4;
          aiStack_50[0] = 0x6c59;
          nn::err::ErrorResultVariant::ErrorResultVariant
                    ((ErrorResultVariant *)((ulong)aiStack_50 | 4));
          aiStack_60[0] = 0;
          nn::err::ErrorResultVariant::operator=
                    ((ErrorResultVariant *)((ulong)aiStack_50 | 4),(Result *)aiStack_60);
          FUN_71000bcf30((int *)(param_1 + 0x220),aiStack_50);
          FUN_71000d8f90(*(long *)(DAT_71052adb38 +
                                   (ulong)(*(char *)(DAT_71052adb38 + 0x162) == '\0') * 8 + 0x168));
          goto LAB_71001027fc;
        }
        lVar3 = (**(code **)(**(long **)(lVar7 + (ulong)*(byte *)(lVar7 + 0x162) * 8 + 0x168) + 0xf0
                            ))();
        if (lVar3 != *(long *)(param_1 + 0xa0)) {
LAB_7100102a94:
          lVar3 = FUN_71001939c0(DAT_71052adfc0);
          lVar7 = DAT_71052ac580;
          if (*(char *)(lVar3 + 0x84) == '\0') {
            plVar5 = FUN_71000bb680();
            lVar7 = *(long *)(lVar7 + 0x30) + *plVar5 * -36000;
          }
          else {
            lVar7 = *(long *)(DAT_71052ac580 + 0x30);
          }
          *(long *)(param_1 + 0x1c8) = lVar7;
          *(char **)(param_1 + 0x40) = "NexMatchJointSessionJob::WaitCompanionStation";
          *(undefined4 *)(param_1 + 0x230) = 0x11;
          *(code **)(param_1 + 0x30) = FUN_71000ffca0;
          *(undefined8 *)(param_1 + 0x38) = 0;
          return 0;
        }
        if ((*(char *)(param_1 + 0xf8) == '\0') ||
           (FUN_710014f000(aiStack_50,*(long *)(lVar7 + 200),(char)*(undefined4 *)(param_1 + 0x90),
                           lVar3,1), aiStack_50[0] != 0)) {
          return 5;
        }
        uVar9 = 0;
        *(code **)(param_1 + 0x30) = FUN_7100101210;
        *(undefined8 *)(param_1 + 0x38) = 0;
        pcVar6 = "NexMatchJointSessionJob::WaitHostStationId";
        goto LAB_71001028a4;
      }
      FUN_71000bcf30((int *)(param_1 + 0x220),(int *)(param_1 + 0x100));
      uVar8 = 6;
    }
    else {
      aiStack_50[0] = 0x6c59;
      nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)aiStack_50 | 4))
      ;
      aiStack_60[0] = 0;
      nn::err::ErrorResultVariant::operator=
                ((ErrorResultVariant *)((ulong)aiStack_50 | 4),(Result *)aiStack_60);
      FUN_71000bcf30((int *)(param_1 + 0x220),aiStack_50);
      uVar8 = 4;
    }
    *(undefined1 *)(param_1 + 0x130) = uVar8;
LAB_71001027fc:
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
  uVar9 = 0;
  *(code **)(param_1 + 0x30) = FUN_71000f70d0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  pcVar6 = "NexMatchJointSessionJob::ProcessFailure";
LAB_71001028a4:
  *(char **)(param_1 + 0x40) = pcVar6;
  return uVar9;
}

