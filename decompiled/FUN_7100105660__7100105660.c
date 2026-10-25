// addr:      7100105660
// offset:    0x105660
// name:      FUN_7100105660
// mangled:   
// signature: undefined FUN_7100105660(void)


undefined8 FUN_7100105660(long param_1)

{
  int iVar1;
  long *plVar2;
  undefined8 uVar3;
  code *pcVar4;
  char *pcVar5;
  int aiStack_38 [4];
  undefined4 auStack_28 [2];
  
  iVar1 = FUN_7100146ba0(DAT_71052adb38);
  switch(iVar1) {
  case 5:
    aiStack_38[0] = 0xc406;
    break;
  case 6:
    aiStack_38[0] = 0xa471;
    break;
  case 7:
    aiStack_38[0] = 0xc420;
    break;
  case 8:
    aiStack_38[0] = 0xc421;
    break;
  default:
    plVar2 = *(long **)(DAT_71052adb38 + (ulong)*(byte *)(DAT_71052adb38 + 0x162) * 8 + 0x168);
    (**(code **)(*plVar2 + 0x70))
              (aiStack_38,plVar2,param_1 + 0x60,
               *(undefined4 *)
                (DAT_71052adb38 + (ulong)*(byte *)(DAT_71052adb38 + 0x162) * 4 + 0x180));
    if (aiStack_38[0] == 0) {
      pcVar4 = FUN_7100106010;
      uVar3 = 5;
      pcVar5 = "NexMatchCreateSessionJob::WaitUnregisterGathering";
    }
    else {
      FUN_71000bcf30((int *)(param_1 + 0x90),aiStack_38);
      pcVar4 = FUN_710013d590;
      uVar3 = 0;
      pcVar5 = "NexMatchCreateSessionJob::CompleteFailure";
    }
    *(code **)(param_1 + 0x30) = pcVar4;
    *(undefined8 *)(param_1 + 0x38) = 0;
    *(char **)(param_1 + 0x40) = pcVar5;
    return uVar3;
  }
  nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)aiStack_38 | 4));
  auStack_28[0] = 0;
  nn::err::ErrorResultVariant::operator=
            ((ErrorResultVariant *)((ulong)aiStack_38 | 4),(Result *)auStack_28);
  FUN_71000bcf30((int *)(param_1 + 0x90),aiStack_38);
  *(code **)(param_1 + 0x30) = FUN_710013d590;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(char **)(param_1 + 0x40) = "nex::NexMatchCreateSessionJob::CompleteFailure";
  return 0;
}

