// addr:      710010a210
// offset:    0x10a210
// name:      FUN_710010a210
// mangled:   
// signature: undefined FUN_710010a210(void)


undefined8 FUN_710010a210(long param_1)

{
  undefined4 uVar1;
  int iVar2;
  ulong uVar3;
  long *plVar4;
  undefined8 uVar5;
  char *pcVar6;
  code *pcVar7;
  int aiStack_50 [4];
  int aiStack_40 [4];
  
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
    uVar3 = FUN_7100143730(param_1);
    if ((uVar3 & 1) != 0) {
      aiStack_40[0] = 0x6c05;
      nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)aiStack_40 | 4))
      ;
      aiStack_50[0] = 0;
      nn::err::ErrorResultVariant::operator=
                ((ErrorResultVariant *)((ulong)aiStack_40 | 4),(Result *)aiStack_50);
      FUN_71000bcf30((int *)(param_1 + 0x6c),aiStack_40);
      *(char **)(param_1 + 0x40) = "NexMatchRandomMatchmakeJob::LeaveMatchmakeSession";
      *(code **)(param_1 + 0x30) = FUN_71001082f0;
      *(undefined8 *)(param_1 + 0x38) = 0;
      return 5;
    }
    aiStack_40[0] = 0;
    nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)aiStack_40 | 4));
    aiStack_50[0] = 0;
    nn::err::ErrorResultVariant::operator=
              ((ErrorResultVariant *)((ulong)aiStack_40 | 4),(Result *)aiStack_50);
    plVar4 = *(long **)(DAT_71052adb38 + (ulong)*(byte *)(DAT_71052adb38 + 0x162) * 8 + 0x168);
    if (*(char *)(param_1 + 0x185) == '\0') {
      uVar1 = *(undefined4 *)(param_1 + 100);
      pcVar7 = *(code **)(*plVar4 + 0x90);
    }
    else {
      uVar1 = *(undefined4 *)(param_1 + 100);
      pcVar7 = *(code **)(*plVar4 + 0x80);
    }
    (*pcVar7)(aiStack_50,plVar4,param_1 + 0x110,uVar1);
    FUN_71000bcf30(aiStack_40,aiStack_50);
    if (aiStack_40[0] == 0) {
      pcVar7 = FUN_710010a3f0;
      pcVar6 = "NexMatchRandomMatchmakeJob::WaitChangeParticipation";
    }
    else {
      FUN_71000bcf30((int *)(param_1 + 0x6c),aiStack_40);
      pcVar7 = FUN_71001082f0;
      pcVar6 = "NexMatchRandomMatchmakeJob::LeaveMatchmakeSession";
    }
    uVar5 = 5;
    *(code **)(param_1 + 0x30) = pcVar7;
    *(undefined8 *)(param_1 + 0x38) = 0;
    goto LAB_710010a31c;
  }
  nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)aiStack_40 | 4));
  aiStack_50[0] = 0;
  nn::err::ErrorResultVariant::operator=
            ((ErrorResultVariant *)((ulong)aiStack_40 | 4),(Result *)aiStack_50);
  FUN_71000bcf30((int *)(param_1 + 0x6c),aiStack_40);
  uVar5 = 0;
  *(code **)(param_1 + 0x30) = FUN_71001429b0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  pcVar6 = "nex::NexMatchRandomMatchmakeJob::CompleteFailure";
LAB_710010a31c:
  *(char **)(param_1 + 0x40) = pcVar6;
  return uVar5;
}

