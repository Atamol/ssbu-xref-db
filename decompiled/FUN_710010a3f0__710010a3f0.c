// addr:      710010a3f0
// offset:    0x10a3f0
// name:      FUN_710010a3f0
// mangled:   
// signature: undefined FUN_710010a3f0(void)


undefined8 FUN_710010a3f0(long param_1)

{
  int iVar1;
  ulong uVar2;
  char *pcVar3;
  long *plVar4;
  int aiStack_50 [4];
  int aiStack_40 [4];
  
  iVar1 = FUN_7100146ba0(DAT_71052adb38);
  switch(iVar1) {
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
    aiStack_40[0] = 0;
    nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)aiStack_40 | 4));
    aiStack_50[0] = 0;
    nn::err::ErrorResultVariant::operator=
              ((ErrorResultVariant *)((ulong)aiStack_40 | 4),(Result *)aiStack_50);
    plVar4 = *(long **)(DAT_71052adb38 + (ulong)*(byte *)(DAT_71052adb38 + 0x162) * 8 + 0x168);
    if (*(char *)(param_1 + 0x185) == '\0') {
      uVar2 = (**(code **)(*plVar4 + 0x98))(plVar4);
      if ((uVar2 & 1) == 0) {
        return 5;
      }
      iVar1 = *(int *)(param_1 + 0x110);
      if (iVar1 == 2) {
        FUN_7100149240(DAT_71052adb38,2);
        (**(code **)(*plVar4 + 0xd8))(aiStack_50,plVar4,*(undefined4 *)(param_1 + 100));
        *(undefined1 *)(param_1 + 0x68) = 1;
        *(code **)(param_1 + 0x30) = FUN_7100108de0;
        goto LAB_710010a5d8;
      }
    }
    else {
      uVar2 = (**(code **)(*plVar4 + 0x88))(plVar4);
      if ((uVar2 & 1) == 0) {
        return 5;
      }
      iVar1 = *(int *)(param_1 + 0x110);
      if (iVar1 == 2) {
        FUN_7100149240(DAT_71052adb38,1);
        (**(code **)(*plVar4 + 0xd8))(aiStack_50,plVar4,*(undefined4 *)(param_1 + 100));
        *(undefined1 *)(param_1 + 0x68) = 1;
        *(code **)(param_1 + 0x30) = FUN_7100108de0;
LAB_710010a5d8:
        pcVar3 = "NexMatchRandomMatchmakeJob::StartNatSession";
        *(undefined8 *)(param_1 + 0x38) = 0;
        goto LAB_710010a5e4;
      }
    }
    if (iVar1 != 3) {
      return 5;
    }
    FUN_71000bce50(aiStack_50,(int *)(param_1 + 0x114));
    FUN_71000bcf30((int *)(param_1 + 0x6c),aiStack_50);
    *(code **)(param_1 + 0x30) = FUN_71001082f0;
    *(undefined8 *)(param_1 + 0x38) = 0;
    pcVar3 = "NexMatchRandomMatchmakeJob::LeaveMatchmakeSession";
LAB_710010a5e4:
    *(char **)(param_1 + 0x40) = pcVar3;
    return 5;
  }
  nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)aiStack_40 | 4));
  aiStack_50[0] = 0;
  nn::err::ErrorResultVariant::operator=
            ((ErrorResultVariant *)((ulong)aiStack_40 | 4),(Result *)aiStack_50);
  FUN_71000bcf30((int *)(param_1 + 0x6c),aiStack_40);
  *(code **)(param_1 + 0x30) = FUN_71001429b0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(char **)(param_1 + 0x40) = "nex::NexMatchRandomMatchmakeJob::CompleteFailure";
  return 0;
}

