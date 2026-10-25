// addr:      7100109ab0
// offset:    0x109ab0
// name:      FUN_7100109ab0
// mangled:   
// signature: undefined FUN_7100109ab0(void)


undefined8 FUN_7100109ab0(long param_1)

{
  int *piVar1;
  int iVar2;
  ulong uVar3;
  undefined8 uVar4;
  code *pcVar5;
  char *pcVar6;
  ErrorResultVariant *this;
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
    uVar3 = (**(code **)(**(long **)(DAT_71052adb38 +
                                     (ulong)(*(char *)(DAT_71052adb38 + 0x162) == '\0') * 8 + 0x168)
                        + 0x68))();
    if ((uVar3 & 1) == 0) {
      return 5;
    }
    if (*(int *)(param_1 + 0x110) == 3) {
      piVar1 = (int *)(param_1 + 0x114);
      FUN_71000bce50(aiStack_50,piVar1);
      FUN_71000bce50(aiStack_50,piVar1);
      aiStack_60[0] = 0xc406;
      this = (ErrorResultVariant *)((ulong)aiStack_60 | 4);
      nn::err::ErrorResultVariant::ErrorResultVariant(this);
      auStack_38[0] = 0;
      nn::err::ErrorResultVariant::operator=(this,(Result *)auStack_38);
      if (aiStack_50[0] == aiStack_60[0]) {
        FUN_71000bce50(aiStack_50,piVar1);
      }
      else {
        FUN_71000bce50(aiStack_50,piVar1);
        aiStack_60[0] = 0xe437;
        nn::err::ErrorResultVariant::ErrorResultVariant(this);
        auStack_38[0] = 0;
        nn::err::ErrorResultVariant::operator=(this,(Result *)auStack_38);
        if (aiStack_50[0] != aiStack_60[0]) goto LAB_7100109c88;
        aiStack_50[0] = 0xe437;
        nn::err::ErrorResultVariant::ErrorResultVariant
                  ((ErrorResultVariant *)((ulong)aiStack_50 | 4));
        aiStack_60[0] = 0;
        nn::err::ErrorResultVariant::operator=
                  ((ErrorResultVariant *)((ulong)aiStack_50 | 4),(Result *)aiStack_60);
      }
      FUN_71000bcf30((int *)(param_1 + 0x6c),aiStack_50);
    }
LAB_7100109c88:
    FUN_7100149290(DAT_71052adb38,0);
    pcVar5 = FUN_71001082f0;
    uVar4 = 5;
    pcVar6 = "NexMatchRandomMatchmakeJob::LeaveMatchmakeSession";
    goto LAB_7100109b5c;
  }
  nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)aiStack_50 | 4));
  aiStack_60[0] = 0;
  nn::err::ErrorResultVariant::operator=
            ((ErrorResultVariant *)((ulong)aiStack_50 | 4),(Result *)aiStack_60);
  FUN_71000bcf30((int *)(param_1 + 0x6c),aiStack_50);
  pcVar5 = FUN_71001429b0;
  uVar4 = 0;
  pcVar6 = "nex::NexMatchRandomMatchmakeJob::CompleteFailure";
LAB_7100109b5c:
  *(code **)(param_1 + 0x30) = pcVar5;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(char **)(param_1 + 0x40) = pcVar6;
  return uVar4;
}

