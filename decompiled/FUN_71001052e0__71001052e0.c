// addr:      71001052e0
// offset:    0x1052e0
// name:      FUN_71001052e0
// mangled:   
// signature: undefined FUN_71001052e0(void)


undefined8 FUN_71001052e0(long param_1)

{
  int *piVar1;
  int iVar2;
  ulong uVar3;
  undefined8 uVar4;
  code *pcVar5;
  char *pcVar6;
  ErrorResultVariant *this;
  int aiStack_50 [4];
  int aiStack_40 [4];
  undefined4 auStack_28 [2];
  
  iVar2 = FUN_7100146ba0(DAT_71052adb38);
  switch(iVar2) {
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
    uVar3 = (**(code **)(**(long **)(DAT_71052adb38 + (ulong)*(byte *)(DAT_71052adb38 + 0x162) * 8 +
                                    0x168) + 0x68))();
    if ((uVar3 & 1) == 0) {
      return 5;
    }
    if (*(int *)(param_1 + 0x60) == 3) {
      piVar1 = (int *)(param_1 + 100);
      FUN_71000bce50(aiStack_40,piVar1);
      aiStack_50[0] = 0x6c4b;
      this = (ErrorResultVariant *)((ulong)aiStack_50 | 4);
      nn::err::ErrorResultVariant::ErrorResultVariant(this);
      auStack_28[0] = 0;
      nn::err::ErrorResultVariant::operator=(this,(Result *)auStack_28);
      if (aiStack_40[0] != aiStack_50[0]) {
        FUN_71000bce50(aiStack_40,piVar1);
        FUN_71000bce50(aiStack_40,piVar1);
        aiStack_50[0] = 0xc406;
        nn::err::ErrorResultVariant::ErrorResultVariant(this);
        auStack_28[0] = 0;
        nn::err::ErrorResultVariant::operator=(this,(Result *)auStack_28);
        if (aiStack_40[0] == aiStack_50[0]) {
          FUN_71000bce50(aiStack_40,piVar1);
          FUN_71000bcf30((int *)(param_1 + 0x90),aiStack_40);
        }
      }
    }
    if (*(int *)(param_1 + 0xb8) != 0) {
      *(int *)(param_1 + 0xb8) = *(int *)(param_1 + 0xb8) + -1;
    }
    pcVar5 = FUN_7100104f30;
    uVar4 = 5;
    pcVar6 = "NexMatchCreateSessionJob::LeaveJoinedMatchmakeSession";
    goto LAB_7100105388;
  }
  nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)aiStack_40 | 4));
  aiStack_50[0] = 0;
  nn::err::ErrorResultVariant::operator=
            ((ErrorResultVariant *)((ulong)aiStack_40 | 4),(Result *)aiStack_50);
  FUN_71000bcf30((int *)(param_1 + 0x90),aiStack_40);
  pcVar5 = FUN_710013d590;
  uVar4 = 0;
  pcVar6 = "nex::NexMatchCreateSessionJob::CompleteFailure";
LAB_7100105388:
  *(code **)(param_1 + 0x30) = pcVar5;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(char **)(param_1 + 0x40) = pcVar6;
  return uVar4;
}

