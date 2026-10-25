// addr:      7100120d70
// offset:    0x120d70
// name:      FUN_7100120d70
// mangled:   
// signature: undefined FUN_7100120d70(void)


undefined8 FUN_7100120d70(long param_1)

{
  int iVar1;
  char *pcVar2;
  code *pcVar3;
  int aiStack_38 [4];
  undefined4 auStack_28 [2];
  
  iVar1 = FUN_7100146ba0(DAT_71052adb38);
  if (iVar1 == 5) {
    aiStack_38[0] = 0xc406;
    nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)aiStack_38 | 4));
    auStack_28[0] = 0;
    nn::err::ErrorResultVariant::operator=
              ((ErrorResultVariant *)((ulong)aiStack_38 | 4),(Result *)auStack_28);
    FUN_71000bcf30((int *)(param_1 + 0x6c),aiStack_38);
    pcVar3 = FUN_71001429b0;
    pcVar2 = "nn::pia::lan::LanMatchRandomMatchmakeJob::CompleteFailure";
  }
  else {
    *(undefined4 *)(param_1 + 0x60) = 8;
    if ((*(long *)(param_1 + 0x58) == 0) || (*(char *)(*(long *)(param_1 + 0x58) + 0x28) == '\0')) {
      if (*(ulong *)(DAT_71052ac580 + 0x30) <= *(ulong *)(param_1 + 0x180)) {
        return 5;
      }
      pcVar3 = FUN_7100120290;
      pcVar2 = "LanMatchRandomMatchmakeJob::RandomMatchmake";
    }
    else {
      aiStack_38[0] = 0x6c05;
      nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)aiStack_38 | 4))
      ;
      auStack_28[0] = 0;
      nn::err::ErrorResultVariant::operator=
                ((ErrorResultVariant *)((ulong)aiStack_38 | 4),(Result *)auStack_28);
      FUN_71000bcf30((int *)(param_1 + 0x6c),aiStack_38);
      FUN_710011bb20(*(long *)(param_1 + 0x178));
      pcVar3 = FUN_7100120eb0;
      pcVar2 = "LanMatchRandomMatchmakeJob::LeaveMatchmakeSession";
    }
  }
  *(code **)(param_1 + 0x30) = pcVar3;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(char **)(param_1 + 0x40) = pcVar2;
  return 0;
}

