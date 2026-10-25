// addr:      7100104f30
// offset:    0x104f30
// name:      FUN_7100104f30
// mangled:   
// signature: undefined FUN_7100104f30(void)


undefined8 FUN_7100104f30(long param_1)

{
  undefined4 uVar1;
  int iVar2;
  code *pcVar3;
  char *pcVar4;
  long *plVar5;
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
    aiStack_50[0] = 0;
    nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)aiStack_50 | 4));
    aiStack_60[0] = 0;
    nn::err::ErrorResultVariant::operator=
              ((ErrorResultVariant *)((ulong)aiStack_50 | 4),(Result *)aiStack_60);
    if (*(int *)(param_1 + 0xb8) != 0) {
      uVar1 = *(undefined4 *)(param_1 + (ulong)(*(int *)(param_1 + 0xb8) - 1) * 4 + 0xa8);
      plVar5 = *(long **)(DAT_71052adb38 + (ulong)*(byte *)(DAT_71052adb38 + 0x162) * 8 + 0x168);
      FUN_71000b40e0((undefined4 *)(param_1 + 0x60));
      (**(code **)(*plVar5 + 0x60))(aiStack_60,plVar5,(undefined4 *)(param_1 + 0x60),uVar1);
      FUN_71000bcf30(aiStack_50,aiStack_60);
      if (aiStack_50[0] == 0) {
        pcVar3 = FUN_71001052e0;
        pcVar4 = "NexMatchCreateSessionJob::WaitLeaveJoinedMatchmakeSession";
      }
      else {
        aiStack_60[0] = 0xac5a;
        nn::err::ErrorResultVariant::ErrorResultVariant
                  ((ErrorResultVariant *)((ulong)aiStack_60 | 4));
        auStack_38[0] = 0;
        nn::err::ErrorResultVariant::operator=
                  ((ErrorResultVariant *)((ulong)aiStack_60 | 4),(Result *)auStack_38);
        if (aiStack_50[0] != aiStack_60[0]) {
          if (*(int *)(param_1 + 0xb8) != 0) {
            *(int *)(param_1 + 0xb8) = *(int *)(param_1 + 0xb8) + -1;
            return 0;
          }
          return 0;
        }
        FUN_71000bcf30((int *)(param_1 + 0x90),aiStack_50);
        pcVar3 = FUN_710013d590;
        pcVar4 = "NexMatchCreateSessionJob::CompleteFailure";
      }
      *(code **)(param_1 + 0x30) = pcVar3;
      *(undefined8 *)(param_1 + 0x38) = 0;
      *(char **)(param_1 + 0x40) = pcVar4;
      return 5;
    }
    *(code **)(param_1 + 0x30) = FUN_7100105140;
    *(undefined8 *)(param_1 + 0x38) = 0;
    pcVar4 = "NexMatchCreateSessionJob::CreateMatchmakeSession";
    goto LAB_71001050bc;
  }
  nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)aiStack_50 | 4));
  aiStack_60[0] = 0;
  nn::err::ErrorResultVariant::operator=
            ((ErrorResultVariant *)((ulong)aiStack_50 | 4),(Result *)aiStack_60);
  FUN_71000bcf30((int *)(param_1 + 0x90),aiStack_50);
  *(code **)(param_1 + 0x30) = FUN_710013d590;
  *(undefined8 *)(param_1 + 0x38) = 0;
  pcVar4 = "nex::NexMatchCreateSessionJob::CompleteFailure";
LAB_71001050bc:
  *(char **)(param_1 + 0x40) = pcVar4;
  return 0;
}

