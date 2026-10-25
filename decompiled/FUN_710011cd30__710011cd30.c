// addr:      710011cd30
// offset:    0x11cd30
// name:      FUN_710011cd30
// mangled:   
// signature: undefined FUN_710011cd30(void)


undefined8 FUN_710011cd30(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  char *pcVar3;
  code *pcVar4;
  int aiStack_38 [4];
  undefined4 auStack_28 [2];
  
  iVar1 = FUN_7100146ba0(DAT_71052adb38);
  if (iVar1 == 5) {
    aiStack_38[0] = 0xc406;
    nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)aiStack_38 | 4));
    auStack_28[0] = 0;
    nn::err::ErrorResultVariant::operator=
              ((ErrorResultVariant *)((ulong)aiStack_38 | 4),(Result *)auStack_28);
    FUN_71000bcf30((int *)(param_1 + 0x120),aiStack_38);
    uVar2 = 0;
    *(code **)(param_1 + 0x30) = FUN_710013e970;
    *(undefined8 *)(param_1 + 0x38) = 0;
    pcVar3 = "nn::pia::lan::LanMatchJoinSessionJob::CompleteFailure";
  }
  else {
    (**(code **)(**(long **)(param_1 + 0x138) + 0x60))
              (aiStack_38,*(long **)(param_1 + 0x138),param_1 + 0x60,
               *(undefined4 *)
                (DAT_71052adb38 + (ulong)*(byte *)(DAT_71052adb38 + 0x162) * 4 + 0x180));
    if (aiStack_38[0] == 0) {
      pcVar4 = FUN_710011d750;
      pcVar3 = "LanMatchJoinSessionJob::WaitLeaveMatchmakeSession";
    }
    else {
      FUN_7100149270(DAT_71052adb38,0);
      pcVar4 = FUN_710013e970;
      pcVar3 = "LanMatchJoinSessionJob::CompleteFailure";
    }
    uVar2 = 5;
    *(code **)(param_1 + 0x30) = pcVar4;
    *(undefined8 *)(param_1 + 0x38) = 0;
  }
  *(char **)(param_1 + 0x40) = pcVar3;
  return uVar2;
}

