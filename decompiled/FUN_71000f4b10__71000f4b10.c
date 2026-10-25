// addr:      71000f4b10
// offset:    0xf4b10
// name:      FUN_71000f4b10
// mangled:   
// signature: undefined FUN_71000f4b10(void)


undefined8 FUN_71000f4b10(long *param_1)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  int aiStack_a8 [32];
  undefined4 auStack_28 [2];
  
  iVar1 = FUN_7100146ba0(DAT_71052adb38);
  switch(iVar1) {
  case 5:
    aiStack_a8[0] = 0xc406;
    break;
  case 6:
    aiStack_a8[0] = 0xa471;
    break;
  case 7:
    aiStack_a8[0] = 0xc420;
    break;
  case 8:
    aiStack_a8[0] = 0xc421;
    break;
  default:
    *(undefined4 *)(param_1 + 0x22) = 8;
    uVar2 = (**(code **)(*param_1 + 0x48))(param_1);
    if ((uVar2 & 1) == 0) {
      if ((ulong)param_1[0x29] < *(ulong *)(DAT_71052ac580 + 0x30)) {
        FUN_710015fd60((undefined8 *)aiStack_a8);
        FUN_710015fea0((long)(param_1 + 0x12),(long)aiStack_a8);
        param_1[6] = (long)FUN_71000f3580;
        param_1[7] = 0;
        *(undefined1 *)((long)param_1 + 0x16c) = 0;
        param_1[8] = (long)"NexMatchJoinSessionJob::GetStationLocation";
        FUN_710015ff20((undefined8 *)aiStack_a8);
        return 0;
      }
      if ((*(ulong *)(DAT_71052ac580 + 0x30) <= (ulong)param_1[0x28]) &&
         ((lVar4 = param_1[0x27], lVar4 == 0 ||
          (lVar3 = FUN_71000c36b0(DAT_71052acd90), lVar4 != lVar3)))) {
        return 5;
      }
    }
    else {
      aiStack_a8[0] = 0x6c05;
      nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)aiStack_a8 | 4))
      ;
      auStack_28[0] = 0;
      nn::err::ErrorResultVariant::operator=
                ((ErrorResultVariant *)((ulong)aiStack_a8 | 4),(Result *)auStack_28);
      FUN_71000bcf30((int *)(param_1 + 0x24),aiStack_a8);
    }
    param_1[6] = (long)FUN_71000f2880;
    param_1[7] = 0;
    *(undefined1 *)((long)param_1 + 0x16c) = 0;
    param_1[8] = (long)"NexMatchJoinSessionJob::LeaveMatchmakeSession";
    return 0;
  }
  nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)aiStack_a8 | 4));
  auStack_28[0] = 0;
  nn::err::ErrorResultVariant::operator=
            ((ErrorResultVariant *)((ulong)aiStack_a8 | 4),(Result *)auStack_28);
  FUN_71000bcf30((int *)(param_1 + 0x24),aiStack_a8);
  param_1[6] = (long)FUN_710013e970;
  param_1[7] = 0;
  param_1[8] = (long)"nex::NexMatchJoinSessionJob::CompleteFailure";
  return 0;
}

