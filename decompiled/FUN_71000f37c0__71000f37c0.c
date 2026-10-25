// addr:      71000f37c0
// offset:    0xf37c0
// name:      FUN_71000f37c0
// mangled:   
// signature: undefined FUN_71000f37c0(void)


undefined8 FUN_71000f37c0(long *param_1)

{
  int iVar1;
  long *plVar2;
  ulong uVar3;
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
    uVar3 = (**(code **)(*plVar2 + 0xa8))(plVar2,param_1 + 0x12);
    if ((uVar3 & 1) == 0) {
      (**(code **)(*param_1 + 0x48))(param_1);
    }
    else {
      iVar1 = (int)param_1[0xc];
      if (iVar1 == 2) {
        param_1[6] = (long)FUN_71000f3970;
        param_1[7] = 0;
        param_1[8] = (long)"NexMatchJoinSessionJob::StartNatSession";
        return 0;
      }
      if (iVar1 == 4) {
        aiStack_38[0] = 0x6c05;
        nn::err::ErrorResultVariant::ErrorResultVariant
                  ((ErrorResultVariant *)((ulong)aiStack_38 | 4));
        auStack_28[0] = 0;
        nn::err::ErrorResultVariant::operator=
                  ((ErrorResultVariant *)((ulong)aiStack_38 | 4),(Result *)auStack_28);
      }
      else {
        if (iVar1 != 3) {
          return 5;
        }
        FUN_71000bce50(aiStack_38,(int *)((long)param_1 + 100));
      }
      FUN_71000bcf30((int *)(param_1 + 0x24),aiStack_38);
      param_1[8] = (long)"NexMatchJoinSessionJob::LeaveMatchmakeSession";
      param_1[6] = (long)FUN_71000f2880;
      param_1[7] = 0;
    }
    return 5;
  }
  nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)aiStack_38 | 4));
  auStack_28[0] = 0;
  nn::err::ErrorResultVariant::operator=
            ((ErrorResultVariant *)((ulong)aiStack_38 | 4),(Result *)auStack_28);
  FUN_71000bcf30((int *)(param_1 + 0x24),aiStack_38);
  param_1[6] = (long)FUN_710013e970;
  param_1[7] = 0;
  param_1[8] = (long)"nex::NexMatchJoinSessionJob::CompleteFailure";
  return 0;
}

