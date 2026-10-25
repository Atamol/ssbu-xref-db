// addr:      71001054b0
// offset:    0x1054b0
// name:      FUN_71001054b0
// mangled:   
// signature: undefined FUN_71001054b0(void)


undefined8 FUN_71001054b0(long param_1)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  long *plVar4;
  char *pcVar5;
  undefined4 uVar6;
  int aiStack_40 [4];
  int aiStack_28 [2];
  
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
    aiStack_28[0] = 0;
    uVar3 = (**(code **)(**(long **)(param_1 + 0xa0) + 0x48))(*(long **)(param_1 + 0xa0),aiStack_28)
    ;
    if ((uVar3 & 1) == 0) {
      return 5;
    }
    if (*(int *)(param_1 + 0x60) != 2) {
      if (*(int *)(param_1 + 0x60) != 3) {
        return 5;
      }
      FUN_71000bce50(aiStack_40,(int *)(param_1 + 100));
      FUN_71000bcf30((int *)(param_1 + 0x90),aiStack_40);
      *(char **)(param_1 + 0x40) = "NexMatchCreateSessionJob::UnregisterGathering";
      *(code **)(param_1 + 0x30) = FUN_7100105660;
      *(undefined8 *)(param_1 + 0x38) = 0;
      return 5;
    }
    FUN_7100149270(DAT_71052adb38,aiStack_28[0]);
    FUN_710013dac0(param_1,1);
    uVar6 = 1;
    if (*(char *)(param_1 + 200) == '\0') {
      uVar6 = 2;
    }
    FUN_7100149240(DAT_71052adb38,uVar6);
    lVar1 = DAT_71052ac580;
    plVar4 = FUN_71000bb680();
    *(long *)(param_1 + 0xc0) = *(long *)(lVar1 + 0x30) + *plVar4 * 10000;
    pcVar5 = "NexMatchCreateSessionJob::WaitNotification";
    *(code **)(param_1 + 0x30) = FUN_71001057a0;
    *(undefined8 *)(param_1 + 0x38) = 0;
    goto LAB_71001055c4;
  }
  nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)aiStack_40 | 4));
  aiStack_28[0] = 0;
  nn::err::ErrorResultVariant::operator=
            ((ErrorResultVariant *)((ulong)aiStack_40 | 4),(Result *)aiStack_28);
  FUN_71000bcf30((int *)(param_1 + 0x90),aiStack_40);
  *(code **)(param_1 + 0x30) = FUN_710013d590;
  *(undefined8 *)(param_1 + 0x38) = 0;
  pcVar5 = "nex::NexMatchCreateSessionJob::CompleteFailure";
LAB_71001055c4:
  *(char **)(param_1 + 0x40) = pcVar5;
  return 0;
}

