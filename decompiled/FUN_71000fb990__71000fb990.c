// addr:      71000fb990
// offset:    0xfb990
// name:      FUN_71000fb990
// mangled:   
// signature: undefined FUN_71000fb990(void)


undefined8 FUN_71000fb990(long param_1)

{
  byte bVar1;
  int iVar2;
  undefined4 uVar3;
  ulong uVar4;
  undefined8 uVar5;
  long *plVar6;
  char *pcVar7;
  code *pcVar8;
  long lVar9;
  int aiStack_48 [4];
  int aiStack_38 [2];
  
  iVar2 = FUN_7100146ba0(DAT_71052adb38);
  switch(iVar2) {
  case 5:
    aiStack_48[0] = 0xc406;
    break;
  case 6:
    aiStack_48[0] = 0xa471;
    break;
  case 7:
    aiStack_48[0] = 0xc420;
    break;
  case 8:
    aiStack_48[0] = 0xc421;
    break;
  default:
    aiStack_38[0] = 0;
    lVar9 = *(long *)(DAT_71052adb38 + (ulong)(*(char *)(DAT_71052adb38 + 0x162) == '\0') * 8 +
                     0x168);
    uVar4 = FUN_71000d9620(lVar9,aiStack_38,param_1 + 0xf5);
    if ((uVar4 & 1) == 0) {
      return 5;
    }
    FUN_71000d8f90(lVar9);
    FUN_71000bce50(aiStack_48,(int *)(param_1 + 100));
    if (aiStack_48[0] == 0) {
      *(int *)(param_1 + 0xf0) = aiStack_38[0];
      FUN_7100149290(DAT_71052adb38,aiStack_38[0]);
      if (*(char *)(param_1 + 0xf5) == '\0') {
        bVar1 = FUN_71000eb6b0(lVar9);
        if ((bVar1 & 1) != 0) {
          uVar3 = FUN_71000eb6c0(lVar9);
          lVar9 = DAT_71052adb38;
          *(undefined4 *)(DAT_71052adb38 + 0x214) = uVar3;
          *(undefined1 *)(lVar9 + 0x218) = 1;
        }
      }
      else {
        uVar3 = 1;
        if (*(char *)(param_1 + 0x266) == '\0') {
          uVar3 = 2;
        }
        FUN_7100149250(DAT_71052adb38,uVar3);
      }
      lVar9 = DAT_71052ac580;
      plVar6 = FUN_71000bb680();
      uVar5 = 0;
      pcVar7 = "NexMatchJointSessionJob::WaitNotification";
      *(long *)(param_1 + 0x210) = *(long *)(lVar9 + 0x30) + *plVar6 * 10000;
      pcVar8 = FUN_71000fbbe0;
    }
    else {
      *(undefined1 *)(param_1 + 0x130) = 0x10;
      FUN_71000bce50(aiStack_48,(int *)(param_1 + 100));
      FUN_71000bcf30((int *)(param_1 + 0x220),aiStack_48);
      FUN_71000d8f90(*(long *)(DAT_71052adb38 +
                               (ulong)(*(char *)(DAT_71052adb38 + 0x162) == '\0') * 8 + 0x168));
      pcVar8 = FUN_71000f7210;
      uVar5 = 5;
      pcVar7 = "NexMatchJointSessionJob::StartLeaveMesh";
    }
    *(code **)(param_1 + 0x30) = pcVar8;
    *(undefined8 *)(param_1 + 0x38) = 0;
    goto LAB_71000fbb1c;
  }
  *(undefined1 *)(param_1 + 0xfa) = 1;
  *(undefined1 *)(param_1 + 0x130) = 3;
  nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)aiStack_48 | 4));
  aiStack_38[0] = 0;
  nn::err::ErrorResultVariant::operator=
            ((ErrorResultVariant *)((ulong)aiStack_48 | 4),(Result *)aiStack_38);
  FUN_71000bcf30((int *)(param_1 + 0x220),aiStack_48);
  (**(code **)(**(long **)(DAT_71052adb38 + 8) + 0x28))();
  uVar5 = 0;
  *(code **)(param_1 + 0x30) = FUN_71000f70d0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  pcVar7 = "NexMatchJointSessionJob::ProcessFailure";
LAB_71000fbb1c:
  *(char **)(param_1 + 0x40) = pcVar7;
  return uVar5;
}

