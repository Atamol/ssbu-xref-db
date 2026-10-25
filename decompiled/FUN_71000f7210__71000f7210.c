// addr:      71000f7210
// offset:    0xf7210
// name:      FUN_71000f7210
// mangled:   
// signature: undefined FUN_71000f7210(void)


undefined8 FUN_71000f7210(long param_1)

{
  long lVar1;
  undefined8 *puVar2;
  bool bVar3;
  int iVar4;
  ulong uVar5;
  undefined8 uVar6;
  char *pcVar7;
  code *pcVar8;
  int aiStack_60 [4];
  int aiStack_50 [4];
  undefined4 auStack_38 [2];
  
  *(undefined1 *)(param_1 + 0xfa) = 1;
  lVar1 = DAT_71052adb38;
  *(undefined1 *)(DAT_71052adb38 + 0x15c) = 1;
  iVar4 = FUN_7100146ba0(lVar1);
  puVar2 = DAT_71052adfc0;
  switch(iVar4) {
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
    FUN_7100192e90(aiStack_50,(long)DAT_71052adfc0);
    aiStack_60[0] = 0x6c50;
    nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)aiStack_60 | 4));
    auStack_38[0] = 0;
    nn::err::ErrorResultVariant::operator=
              ((ErrorResultVariant *)((ulong)aiStack_60 | 4),(Result *)auStack_38);
    if (aiStack_50[0] != aiStack_60[0]) {
      aiStack_50[0] = 0;
      nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)aiStack_50 | 4))
      ;
      aiStack_60[0] = 0;
      nn::err::ErrorResultVariant::operator=
                ((ErrorResultVariant *)((ulong)aiStack_50 | 4),(Result *)aiStack_60);
      bVar3 = FUN_71001931d0((long)puVar2);
      if (bVar3) {
        uVar5 = FUN_7100146ed0(DAT_71052adb38);
        if ((uVar5 & 1) == 0) {
          FUN_7100191ee0(aiStack_60,puVar2);
          FUN_71000bcf30(aiStack_50,aiStack_60);
          *(undefined4 *)(param_1 + 0x94) = 3;
        }
        else {
          FUN_71001921b0(aiStack_60,puVar2);
          FUN_71000bcf30(aiStack_50,aiStack_60);
          *(undefined4 *)(param_1 + 0x94) = 2;
        }
      }
      else {
        FUN_7100192c30(aiStack_60,(long)puVar2);
        FUN_71000bcf30(aiStack_50,aiStack_60);
        *(undefined4 *)(param_1 + 0x94) = 1;
      }
      if (aiStack_50[0] == 0) {
        pcVar8 = FUN_71001031f0;
        uVar6 = 5;
        pcVar7 = "NexMatchJointSessionJob::WaitLeaveMesh";
      }
      else {
        (**(code **)(**(long **)(DAT_71052adb38 + 8) + 0x28))();
        pcVar8 = FUN_7100102fc0;
        uVar6 = 0;
        pcVar7 = "NexMatchJointSessionJob::StartLeaveCurrentMatchmakeSession";
      }
      *(code **)(param_1 + 0x30) = pcVar8;
      *(undefined8 *)(param_1 + 0x38) = 0;
      *(char **)(param_1 + 0x40) = pcVar7;
      return uVar6;
    }
    (**(code **)(**(long **)(DAT_71052adb38 + 8) + 0x28))();
    *(code **)(param_1 + 0x30) = FUN_7100102fc0;
    *(undefined8 *)(param_1 + 0x38) = 0;
    pcVar7 = "NexMatchJointSessionJob::StartLeaveCurrentMatchmakeSession";
    goto LAB_71000f7308;
  }
  *(undefined1 *)(param_1 + 0xfa) = 1;
  *(undefined1 *)(param_1 + 0x130) = 3;
  nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)aiStack_50 | 4));
  aiStack_60[0] = 0;
  nn::err::ErrorResultVariant::operator=
            ((ErrorResultVariant *)((ulong)aiStack_50 | 4),(Result *)aiStack_60);
  FUN_71000bcf30((int *)(param_1 + 0x220),aiStack_50);
  (**(code **)(**(long **)(DAT_71052adb38 + 8) + 0x28))();
  *(code **)(param_1 + 0x30) = FUN_71000f70d0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  pcVar7 = "NexMatchJointSessionJob::ProcessFailure";
LAB_71000f7308:
  *(char **)(param_1 + 0x40) = pcVar7;
  return 0;
}

