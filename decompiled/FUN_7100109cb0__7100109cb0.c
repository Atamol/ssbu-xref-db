// addr:      7100109cb0
// offset:    0x109cb0
// name:      FUN_7100109cb0
// mangled:   
// signature: undefined FUN_7100109cb0(void)


undefined8 FUN_7100109cb0(long param_1)

{
  int *piVar1;
  long lVar2;
  int iVar3;
  long *plVar4;
  ulong uVar5;
  ErrorResultVariant *this;
  int aiStack_60 [4];
  int aiStack_50 [4];
  undefined4 auStack_38 [2];
  
  iVar3 = FUN_7100146ba0(DAT_71052adb38);
  lVar2 = DAT_71052adb38;
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
    plVar4 = *(long **)(DAT_71052adb38 + (ulong)*(byte *)(DAT_71052adb38 + 0x162) * 8 + 0x168);
    if (*(char *)(param_1 + 0x68) == '\0') {
      uVar5 = (**(code **)(*plVar4 + 0x68))();
    }
    else {
      uVar5 = (**(code **)(*plVar4 + 0x78))();
    }
    if ((uVar5 & 1) == 0) {
      return 5;
    }
    if (*(int *)(param_1 + 0x110) == 3) {
      piVar1 = (int *)(param_1 + 0x114);
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
        if (aiStack_50[0] != aiStack_60[0]) goto LAB_7100109e88;
        aiStack_50[0] = 0xe437;
        nn::err::ErrorResultVariant::ErrorResultVariant
                  ((ErrorResultVariant *)((ulong)aiStack_50 | 4));
        aiStack_60[0] = 0;
        nn::err::ErrorResultVariant::operator=
                  ((ErrorResultVariant *)((ulong)aiStack_50 | 4),(Result *)aiStack_60);
      }
      FUN_71000bcf30((int *)(param_1 + 0x6c),aiStack_50);
    }
LAB_7100109e88:
    FUN_7100149270(lVar2,0);
    *(char **)(param_1 + 0x40) = "NexMatchRandomMatchmakeJob::LeaveMatchmakeSession";
    *(code **)(param_1 + 0x30) = FUN_71001082f0;
    *(undefined8 *)(param_1 + 0x38) = 0;
    return 5;
  }
  nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)aiStack_50 | 4));
  aiStack_60[0] = 0;
  nn::err::ErrorResultVariant::operator=
            ((ErrorResultVariant *)((ulong)aiStack_50 | 4),(Result *)aiStack_60);
  FUN_71000bcf30((int *)(param_1 + 0x6c),aiStack_50);
  *(code **)(param_1 + 0x30) = FUN_71001429b0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(char **)(param_1 + 0x40) = "nex::NexMatchRandomMatchmakeJob::CompleteFailure";
  return 0;
}

