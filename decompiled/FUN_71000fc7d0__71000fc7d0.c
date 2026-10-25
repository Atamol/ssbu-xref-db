// addr:      71000fc7d0
// offset:    0xfc7d0
// name:      FUN_71000fc7d0
// mangled:   
// signature: undefined FUN_71000fc7d0(void)


undefined8 FUN_71000fc7d0(long param_1)

{
  long lVar1;
  bool bVar2;
  int iVar3;
  ulong uVar4;
  int *piVar5;
  char *pcVar6;
  undefined1 uVar7;
  undefined8 uVar8;
  int aiStack_60 [4];
  int aiStack_50 [4];
  undefined4 auStack_38 [2];
  
  piVar5 = aiStack_60;
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
    if ((aiStack_50[0] == 0) &&
       (iVar3 = FUN_7100146ba0(DAT_71052adb38), lVar1 = DAT_71052adb38, iVar3 != 4)) {
      if (*(char *)(param_1 + 0xfb) == '\0') {
        bVar2 = FUN_7100150680(*(long *)(DAT_71052adb38 + 0xb8),*(long *)(param_1 + 0xa0));
        if (bVar2) {
          FUN_710014e050(aiStack_50,*(long *)(lVar1 + 200),(char)*(undefined4 *)(param_1 + 0x90),
                         *(long *)(param_1 + 0xa0),*(int *)(param_1 + 0xf0),1);
          aiStack_60[0] = 0x4c0d;
          nn::err::ErrorResultVariant::ErrorResultVariant
                    ((ErrorResultVariant *)((ulong)aiStack_60 | 4));
          auStack_38[0] = 0;
          nn::err::ErrorResultVariant::operator=
                    ((ErrorResultVariant *)((ulong)aiStack_60 | 4),(Result *)auStack_38);
          if (aiStack_50[0] == aiStack_60[0]) {
            return 5;
          }
          if (aiStack_50[0] == 0) {
            FUN_7100150440(*(long *)(lVar1 + 0xb8),*(long *)(lVar1 + 0xf0),1);
            FUN_7100150440(*(long *)(lVar1 + 0xb8),*(long *)(param_1 + 0xa0),1);
            *(undefined1 *)(DAT_71052adb38 + 0x15c) = 1;
            *(undefined4 *)(param_1 + 0x98) = 10;
            *(code **)(param_1 + 0x30) = FUN_71000fddd0;
            *(undefined8 *)(param_1 + 0x38) = 0;
            *(undefined1 *)(param_1 + 0xf7) = 0;
            *(char **)(param_1 + 0x40) = "NexMatchJointSessionJob::WaitUntilLeaderLeavesMesh";
            *(undefined4 *)(param_1 + 0x230) = 0xc;
            return 0;
          }
          *(undefined1 *)(param_1 + 0x130) = 5;
          aiStack_60[0] = 0x6c57;
          nn::err::ErrorResultVariant::ErrorResultVariant
                    ((ErrorResultVariant *)((ulong)aiStack_60 | 4));
          auStack_38[0] = 0;
          nn::err::ErrorResultVariant::operator=
                    ((ErrorResultVariant *)((ulong)aiStack_60 | 4),(Result *)auStack_38);
        }
        else {
          uVar4 = FUN_7100146ed0(lVar1);
          if ((uVar4 & 1) != 0) {
            FUN_7100192e90(aiStack_50,DAT_71052adfc0);
            aiStack_60[0] = 0x6c50;
            nn::err::ErrorResultVariant::ErrorResultVariant
                      ((ErrorResultVariant *)((ulong)aiStack_60 | 4));
            auStack_38[0] = 0;
            nn::err::ErrorResultVariant::operator=
                      ((ErrorResultVariant *)((ulong)aiStack_60 | 4),(Result *)auStack_38);
            if (aiStack_50[0] != aiStack_60[0]) {
              if (*(char *)(param_1 + 0x234) == '\0') {
                return 5;
              }
              *(undefined1 *)(param_1 + 0x234) = 0;
              if (*(long *)(param_1 + 0x238) == *(long *)(lVar1 + 0xf0)) {
                FUN_71000f9670(param_1);
                *(undefined4 *)(param_1 + 0xf0) =
                     *(undefined4 *)(lVar1 + (ulong)(*(char *)(lVar1 + 0x162) == '\0') * 4 + 0x180);
                *(code **)(param_1 + 0x30) = FUN_71000fc2f0;
                *(undefined8 *)(param_1 + 0x38) = 0;
                *(char **)(param_1 + 0x40) = "NexMatchJointSessionJob::SendNextSessionId";
                return 5;
              }
              *(long *)(param_1 + 0xa0) = *(long *)(param_1 + 0x238);
              *(undefined4 *)(param_1 + 0xf0) = 0;
              FUN_7100149290(DAT_71052adb38,0);
              *(undefined4 *)(param_1 + 0x98) = 3;
              *(undefined8 *)(param_1 + 0x38) = 0;
              *(char **)(param_1 + 0x40) = "NexMatchJointSessionJob::WaitNextSessionId";
              *(undefined4 *)(param_1 + 0x230) = 9;
              *(code **)(param_1 + 0x30) = FUN_71000fd9e0;
              return 5;
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
                                     (ulong)(*(char *)(DAT_71052adb38 + 0x162) == '\0') * 8 + 0x168)
                          );
            goto LAB_71000fc89c;
          }
          *(undefined1 *)(param_1 + 0x130) = 5;
          aiStack_50[0] = 0x6c59;
          nn::err::ErrorResultVariant::ErrorResultVariant
                    ((ErrorResultVariant *)((ulong)aiStack_50 | 4));
          aiStack_60[0] = 0;
          nn::err::ErrorResultVariant::operator=
                    ((ErrorResultVariant *)((ulong)aiStack_50 | 4),(Result *)aiStack_60);
          piVar5 = aiStack_50;
        }
        uVar8 = 5;
        FUN_71000bcf30((int *)(param_1 + 0x220),piVar5);
        FUN_71000d8f90(*(long *)(DAT_71052adb38 +
                                 (ulong)(*(char *)(DAT_71052adb38 + 0x162) == '\0') * 8 + 0x168));
        *(code **)(param_1 + 0x30) = FUN_71000f7210;
        *(undefined8 *)(param_1 + 0x38) = 0;
        pcVar6 = "NexMatchJointSessionJob::StartLeaveMesh";
        goto LAB_71000fc944;
      }
      FUN_71000bcf30((int *)(param_1 + 0x220),(int *)(param_1 + 0x100));
      uVar7 = 6;
    }
    else {
      aiStack_50[0] = 0x6c59;
      nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)aiStack_50 | 4))
      ;
      aiStack_60[0] = 0;
      nn::err::ErrorResultVariant::operator=
                ((ErrorResultVariant *)((ulong)aiStack_50 | 4),(Result *)aiStack_60);
      FUN_71000bcf30((int *)(param_1 + 0x220),aiStack_50);
      uVar7 = 4;
    }
    *(undefined1 *)(param_1 + 0x130) = uVar7;
LAB_71000fc89c:
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
  uVar8 = 0;
  *(code **)(param_1 + 0x30) = FUN_71000f70d0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  pcVar6 = "NexMatchJointSessionJob::ProcessFailure";
LAB_71000fc944:
  *(char **)(param_1 + 0x40) = pcVar6;
  return uVar8;
}

