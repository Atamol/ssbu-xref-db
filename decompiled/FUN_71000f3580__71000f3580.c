// addr:      71000f3580
// offset:    0xf3580
// name:      FUN_71000f3580
// mangled:   
// signature: undefined FUN_71000f3580(void)


undefined8 FUN_71000f3580(long *param_1)

{
  undefined4 uVar1;
  ulong uVar2;
  code *pcVar3;
  char *pcVar4;
  long *plVar5;
  undefined8 uVar6;
  int aiStack_f0 [4];
  int aiStack_e0 [4];
  int aiStack_d0 [4];
  int aiStack_c0 [4];
  int aiStack_b0 [32];
  undefined4 auStack_28 [2];
  
  uVar2 = (**(code **)(*param_1 + 0x48))();
  if ((uVar2 & 1) != 0) {
    aiStack_b0[0] = 0x6c05;
    nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)aiStack_b0 | 4));
    aiStack_c0[0] = 0;
    nn::err::ErrorResultVariant::operator=
              ((ErrorResultVariant *)((ulong)aiStack_b0 | 4),(Result *)aiStack_c0);
    FUN_71000bcf30((int *)(param_1 + 0x24),aiStack_b0);
    param_1[8] = (long)"NexMatchJoinSessionJob::LeaveMatchmakeSession";
    param_1[6] = (long)FUN_71000f2880;
    param_1[7] = 0;
    return 5;
  }
  plVar5 = *(long **)(DAT_71052adb38 + (ulong)*(byte *)(DAT_71052adb38 + 0x162) * 8 + 0x168);
  uVar1 = *(undefined4 *)(DAT_71052adb38 + (ulong)*(byte *)(DAT_71052adb38 + 0x162) * 4 + 0x180);
  FUN_710015fd60((undefined8 *)aiStack_b0);
  FUN_710015fea0((long)(param_1 + 0x12),(long)aiStack_b0);
  (**(code **)(*plVar5 + 0xa0))(aiStack_c0,plVar5,param_1 + 0xc,uVar1);
  if (aiStack_c0[0] == 0) {
    pcVar3 = FUN_71000f37c0;
    uVar6 = 5;
    pcVar4 = "NexMatchJoinSessionJob::WaitGetStationLocation";
  }
  else {
    aiStack_d0[0] = 0xc406;
    nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)aiStack_d0 | 4));
    aiStack_e0[0] = 0;
    nn::err::ErrorResultVariant::operator=
              ((ErrorResultVariant *)((ulong)aiStack_d0 | 4),(Result *)aiStack_e0);
    if (aiStack_c0[0] != aiStack_d0[0]) {
      aiStack_e0[0] = 0xa471;
      nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)aiStack_e0 | 4))
      ;
      aiStack_f0[0] = 0;
      nn::err::ErrorResultVariant::operator=
                ((ErrorResultVariant *)((ulong)aiStack_e0 | 4),(Result *)aiStack_f0);
      if (aiStack_c0[0] != aiStack_e0[0]) {
        aiStack_f0[0] = 0xac5a;
        nn::err::ErrorResultVariant::ErrorResultVariant
                  ((ErrorResultVariant *)((ulong)aiStack_f0 | 4));
        auStack_28[0] = 0;
        nn::err::ErrorResultVariant::operator=
                  ((ErrorResultVariant *)((ulong)aiStack_f0 | 4),(Result *)auStack_28);
        if (aiStack_c0[0] != aiStack_f0[0]) {
          FUN_71000bce50(aiStack_d0,(int *)((long)param_1 + 100));
          FUN_71000bcf30((int *)(param_1 + 0x24),aiStack_d0);
          pcVar3 = FUN_71000f2880;
          uVar6 = 5;
          pcVar4 = "NexMatchJoinSessionJob::LeaveMatchmakeSession";
          goto LAB_71000f375c;
        }
      }
    }
    aiStack_d0[0] = 0xa471;
    nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)aiStack_d0 | 4));
    aiStack_e0[0] = 0;
    nn::err::ErrorResultVariant::operator=
              ((ErrorResultVariant *)((ulong)aiStack_d0 | 4),(Result *)aiStack_e0);
    FUN_71000bcf30((int *)(param_1 + 0x24),aiStack_d0);
    pcVar3 = FUN_710013e970;
    uVar6 = 0;
    pcVar4 = "nex::NexMatchJoinSessionJob::CompleteFailure";
  }
LAB_71000f375c:
  param_1[6] = (long)pcVar3;
  param_1[7] = 0;
  param_1[8] = (long)pcVar4;
  FUN_710015ff20((undefined8 *)aiStack_b0);
  return uVar6;
}

