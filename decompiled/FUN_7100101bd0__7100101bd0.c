// addr:      7100101bd0
// offset:    0x101bd0
// name:      FUN_7100101bd0
// mangled:   
// signature: undefined FUN_7100101bd0(void)


undefined8 FUN_7100101bd0(long param_1)

{
  bool bVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  char *pcVar6;
  undefined1 uVar7;
  code *pcVar8;
  long lVar9;
  undefined8 uVar10;
  int aiStack_68 [4];
  int aiStack_58 [4];
  undefined4 auStack_48 [2];
  
  iVar2 = FUN_7100146ba0(DAT_71052adb38);
  switch(iVar2) {
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
    if ((aiStack_58[0] == 0) &&
       (iVar2 = FUN_7100146ba0(DAT_71052adb38), lVar9 = DAT_71052adb38, iVar2 != 4)) {
      if (*(char *)(param_1 + 0xfb) == '\0') {
        if (*(ulong *)(param_1 + 0x200) < *(ulong *)(DAT_71052ac580 + 0x30)) {
          *(undefined1 *)(param_1 + 0x130) = 0x22;
        }
        else {
          bVar1 = FUN_7100150680(*(long *)(DAT_71052adb38 + 0xb8),*(long *)(param_1 + 0xa0));
          if (bVar1) {
            lVar3 = (**(code **)(**(long **)(lVar9 + (ulong)*(byte *)(lVar9 + 0x162) * 8 + 0x168) +
                                0xf0))();
            if (lVar3 != *(long *)(param_1 + 0xa0)) {
LAB_7100101fe8:
              lVar3 = FUN_71001939c0(DAT_71052adfc0);
              lVar9 = DAT_71052ac580;
              if (*(char *)(lVar3 + 0x84) == '\0') {
                plVar5 = FUN_71000bb680();
                lVar9 = *(long *)(lVar9 + 0x30) + *plVar5 * -36000;
              }
              else {
                lVar9 = *(long *)(DAT_71052ac580 + 0x30);
              }
              *(long *)(param_1 + 0x1c8) = lVar9;
              *(char **)(param_1 + 0x40) = "NexMatchJointSessionJob::WaitCompanionStation";
              *(undefined4 *)(param_1 + 0x230) = 0x11;
              *(code **)(param_1 + 0x30) = FUN_71000ffca0;
              *(undefined8 *)(param_1 + 0x38) = 0;
              return 0;
            }
            FUN_710014ea20(aiStack_58,*(long *)(lVar9 + 200),(char)*(undefined4 *)(param_1 + 0x90),
                           lVar3,1);
            aiStack_68[0] = 0x4c0d;
            nn::err::ErrorResultVariant::ErrorResultVariant
                      ((ErrorResultVariant *)((ulong)aiStack_68 | 4));
            auStack_48[0] = 0;
            nn::err::ErrorResultVariant::operator=
                      ((ErrorResultVariant *)((ulong)aiStack_68 | 4),(Result *)auStack_48);
            uVar10 = 5;
            if (aiStack_58[0] == aiStack_68[0]) {
              return 5;
            }
            if (aiStack_58[0] == 0) {
              *(undefined4 *)(param_1 + 0x98) = 0x14;
              lVar9 = DAT_71052ac580;
              plVar5 = FUN_71000bb680();
              lVar9 = *(long *)(lVar9 + 0x30);
              lVar3 = *plVar5;
              *(undefined4 *)(param_1 + 0x230) = 0x13;
              *(long *)(param_1 + 0x118) = lVar9 + lVar3 * 10000;
              pcVar8 = FUN_7100102730;
              uVar10 = 0;
              pcVar6 = "NexMatchJointSessionJob::WaitCompletionInvitation";
            }
            else {
              *(undefined1 *)(param_1 + 0x130) = 5;
              aiStack_68[0] = 0x6c57;
              nn::err::ErrorResultVariant::ErrorResultVariant
                        ((ErrorResultVariant *)((ulong)aiStack_68 | 4));
              auStack_48[0] = 0;
              nn::err::ErrorResultVariant::operator=
                        ((ErrorResultVariant *)((ulong)aiStack_68 | 4),(Result *)auStack_48);
              FUN_71000bcf30((int *)(param_1 + 0x220),aiStack_68);
              FUN_71000d8f90(*(long *)(DAT_71052adb38 +
                                       (ulong)(*(char *)(DAT_71052adb38 + 0x162) == '\0') * 8 +
                                      0x168));
              pcVar8 = FUN_71000f7210;
              pcVar6 = "NexMatchJointSessionJob::StartLeaveMesh";
            }
            *(code **)(param_1 + 0x30) = pcVar8;
            *(undefined8 *)(param_1 + 0x38) = 0;
            goto LAB_7100101d44;
          }
          uVar4 = FUN_7100146ed0(lVar9);
          if ((uVar4 & 1) == 0) {
            uVar10 = 5;
            *(undefined1 *)(param_1 + 0x130) = 5;
            aiStack_58[0] = 0x6c59;
            nn::err::ErrorResultVariant::ErrorResultVariant
                      ((ErrorResultVariant *)((ulong)aiStack_58 | 4));
            aiStack_68[0] = 0;
            nn::err::ErrorResultVariant::operator=
                      ((ErrorResultVariant *)((ulong)aiStack_58 | 4),(Result *)aiStack_68);
            FUN_71000bcf30((int *)(param_1 + 0x220),aiStack_58);
            FUN_71000d8f90(*(long *)(DAT_71052adb38 +
                                     (ulong)(*(char *)(DAT_71052adb38 + 0x162) == '\0') * 8 + 0x168)
                          );
            *(code **)(param_1 + 0x30) = FUN_71000f7210;
            *(undefined8 *)(param_1 + 0x38) = 0;
            pcVar6 = "NexMatchJointSessionJob::StartLeaveMesh";
            goto LAB_7100101d44;
          }
          FUN_7100192e90(aiStack_58,DAT_71052adfc0);
          aiStack_68[0] = 0x6c50;
          nn::err::ErrorResultVariant::ErrorResultVariant
                    ((ErrorResultVariant *)((ulong)aiStack_68 | 4));
          auStack_48[0] = 0;
          nn::err::ErrorResultVariant::operator=
                    ((ErrorResultVariant *)((ulong)aiStack_68 | 4),(Result *)auStack_48);
          if (aiStack_58[0] != aiStack_68[0]) {
            if (*(char *)(param_1 + 0x240) == '\0') {
              return 5;
            }
            *(undefined1 *)(param_1 + 0x240) = 0;
            goto LAB_7100101fe8;
          }
          *(undefined1 *)(param_1 + 0x130) = 4;
        }
        aiStack_58[0] = 0x6c59;
        nn::err::ErrorResultVariant::ErrorResultVariant
                  ((ErrorResultVariant *)((ulong)aiStack_58 | 4));
        aiStack_68[0] = 0;
        nn::err::ErrorResultVariant::operator=
                  ((ErrorResultVariant *)((ulong)aiStack_58 | 4),(Result *)aiStack_68);
        FUN_71000bcf30((int *)(param_1 + 0x220),aiStack_58);
        FUN_71000d8f90(*(long *)(DAT_71052adb38 +
                                 (ulong)(*(char *)(DAT_71052adb38 + 0x162) == '\0') * 8 + 0x168));
        goto LAB_7100101c9c;
      }
      FUN_71000bcf30((int *)(param_1 + 0x220),(int *)(param_1 + 0x100));
      uVar7 = 6;
    }
    else {
      aiStack_58[0] = 0x6c59;
      nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)aiStack_58 | 4))
      ;
      aiStack_68[0] = 0;
      nn::err::ErrorResultVariant::operator=
                ((ErrorResultVariant *)((ulong)aiStack_58 | 4),(Result *)aiStack_68);
      FUN_71000bcf30((int *)(param_1 + 0x220),aiStack_58);
      uVar7 = 4;
    }
    *(undefined1 *)(param_1 + 0x130) = uVar7;
LAB_7100101c9c:
    *(char **)(param_1 + 0x40) = "NexMatchJointSessionJob::StartLeaveMesh";
    *(code **)(param_1 + 0x30) = FUN_71000f7210;
    *(undefined8 *)(param_1 + 0x38) = 0;
    return 5;
  }
  *(undefined1 *)(param_1 + 0xfa) = 1;
  *(undefined1 *)(param_1 + 0x130) = 3;
  nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)aiStack_58 | 4));
  aiStack_68[0] = 0;
  nn::err::ErrorResultVariant::operator=
            ((ErrorResultVariant *)((ulong)aiStack_58 | 4),(Result *)aiStack_68);
  FUN_71000bcf30((int *)(param_1 + 0x220),aiStack_58);
  (**(code **)(**(long **)(DAT_71052adb38 + 8) + 0x28))();
  uVar10 = 0;
  *(code **)(param_1 + 0x30) = FUN_71000f70d0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  pcVar6 = "NexMatchJointSessionJob::ProcessFailure";
LAB_7100101d44:
  *(char **)(param_1 + 0x40) = pcVar6;
  return uVar10;
}

