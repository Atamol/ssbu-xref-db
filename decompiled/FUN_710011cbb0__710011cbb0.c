// addr:      710011cbb0
// offset:    0x11cbb0
// name:      FUN_710011cbb0
// mangled:   
// signature: undefined FUN_710011cbb0(void)


undefined8 FUN_710011cbb0(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  char *pcVar3;
  code *pcVar4;
  int aiStack_40 [4];
  int aiStack_30 [4];
  
  iVar1 = FUN_7100146ba0(DAT_71052adb38);
  if (iVar1 == 5) {
    aiStack_30[0] = 0xc406;
    nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)aiStack_30 | 4));
    aiStack_40[0] = 0;
    nn::err::ErrorResultVariant::operator=
              ((ErrorResultVariant *)((ulong)aiStack_30 | 4),(Result *)aiStack_40);
    FUN_71000bcf30((int *)(param_1 + 0x120),aiStack_30);
    uVar2 = 0;
    *(code **)(param_1 + 0x30) = FUN_710013e970;
    *(undefined8 *)(param_1 + 0x38) = 0;
    pcVar3 = "nn::pia::lan::LanMatchJoinSessionJob::CompleteFailure";
  }
  else {
    if ((*(long *)(param_1 + 0x58) != 0) && (*(char *)(*(long *)(param_1 + 0x58) + 0x28) != '\0')) {
      aiStack_30[0] = 0x6c05;
      nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)aiStack_30 | 4))
      ;
      aiStack_40[0] = 0;
      nn::err::ErrorResultVariant::operator=
                ((ErrorResultVariant *)((ulong)aiStack_30 | 4),(Result *)aiStack_40);
      FUN_71000bcf30((int *)(param_1 + 0x120),aiStack_30);
      *(char **)(param_1 + 0x40) = "LanMatchJoinSessionJob::LeaveMatchmakeSession";
      *(code **)(param_1 + 0x30) = FUN_710011cd30;
      *(undefined8 *)(param_1 + 0x38) = 0;
      return 5;
    }
    (**(code **)(**(long **)(param_1 + 0x138) + 0xa0))
              (aiStack_30,*(long **)(param_1 + 0x138),param_1 + 0x60,
               *(undefined4 *)
                (DAT_71052adb38 + (ulong)*(byte *)(DAT_71052adb38 + 0x162) * 4 + 0x180));
    if (aiStack_30[0] == 0) {
      pcVar4 = FUN_710011ce30;
      pcVar3 = "LanMatchJoinSessionJob::WaitGetStationLocation";
    }
    else {
      FUN_71000bce50(aiStack_40,(int *)(param_1 + 100));
      FUN_71000bcf30((int *)(param_1 + 0x120),aiStack_40);
      pcVar4 = FUN_710011cd30;
      pcVar3 = "LanMatchJoinSessionJob::LeaveMatchmakeSession";
    }
    uVar2 = 5;
    *(code **)(param_1 + 0x30) = pcVar4;
    *(undefined8 *)(param_1 + 0x38) = 0;
  }
  *(char **)(param_1 + 0x40) = pcVar3;
  return uVar2;
}

