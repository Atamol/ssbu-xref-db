// addr:      71000f4630
// offset:    0xf4630
// name:      FUN_71000f4630
// mangled:   
// signature: undefined FUN_71000f4630(void)


undefined8 FUN_71000f4630(long param_1)

{
  int *piVar1;
  int iVar2;
  ulong uVar3;
  undefined8 uVar4;
  code *pcVar5;
  char *pcVar6;
  ErrorResultVariant *this;
  int aiStack_58 [4];
  int aiStack_48 [4];
  undefined4 auStack_38 [2];
  
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
    uVar3 = (**(code **)(**(long **)(DAT_71052adb38 +
                                     (ulong)(*(char *)(DAT_71052adb38 + 0x162) == '\0') * 8 + 0x168)
                        + 0x68))();
    if ((uVar3 & 1) == 0) {
      return 5;
    }
    FUN_7100149290(DAT_71052adb38,0);
    if (*(int *)(param_1 + 0x60) == 3) {
      piVar1 = (int *)(param_1 + 100);
      FUN_71000bce50(aiStack_48,piVar1);
      aiStack_58[0] = 0xc406;
      this = (ErrorResultVariant *)((ulong)aiStack_58 | 4);
      nn::err::ErrorResultVariant::ErrorResultVariant(this);
      auStack_38[0] = 0;
      nn::err::ErrorResultVariant::operator=(this,(Result *)auStack_38);
      if (aiStack_48[0] == aiStack_58[0]) {
        FUN_71000bce50(aiStack_48,piVar1);
      }
      else {
        FUN_71000bce50(aiStack_48,piVar1);
        aiStack_58[0] = 0xe437;
        nn::err::ErrorResultVariant::ErrorResultVariant(this);
        auStack_38[0] = 0;
        nn::err::ErrorResultVariant::operator=(this,(Result *)auStack_38);
        if (aiStack_48[0] != aiStack_58[0]) goto LAB_71000f4800;
        aiStack_48[0] = 0xe437;
        nn::err::ErrorResultVariant::ErrorResultVariant
                  ((ErrorResultVariant *)((ulong)aiStack_48 | 4));
        aiStack_58[0] = 0;
        nn::err::ErrorResultVariant::operator=
                  ((ErrorResultVariant *)((ulong)aiStack_48 | 4),(Result *)aiStack_58);
      }
      FUN_71000bcf30((int *)(param_1 + 0x120),aiStack_48);
    }
LAB_71000f4800:
    pcVar5 = FUN_71000f2880;
    uVar4 = 5;
    pcVar6 = "NexMatchJoinSessionJob::LeaveMatchmakeSession";
    goto LAB_71000f46d8;
  }
  nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)aiStack_48 | 4));
  aiStack_58[0] = 0;
  nn::err::ErrorResultVariant::operator=
            ((ErrorResultVariant *)((ulong)aiStack_48 | 4),(Result *)aiStack_58);
  FUN_71000bcf30((int *)(param_1 + 0x120),aiStack_48);
  pcVar5 = FUN_710013e970;
  uVar4 = 0;
  pcVar6 = "nex::NexMatchJoinSessionJob::CompleteFailure";
LAB_71000f46d8:
  *(code **)(param_1 + 0x30) = pcVar5;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(char **)(param_1 + 0x40) = pcVar6;
  return uVar4;
}

