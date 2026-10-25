// addr:      7100120640
// offset:    0x120640
// name:      FUN_7100120640
// mangled:   
// signature: undefined FUN_7100120640(void)


undefined8 FUN_7100120640(long param_1,int *param_2)

{
  int iVar1;
  undefined8 uVar2;
  code *pcVar3;
  char *pcVar4;
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
    uVar2 = 0;
    pcVar4 = "nn::pia::lan::LanMatchRandomMatchmakeJob::CompleteFailure";
  }
  else {
    FUN_71000bcf30((int *)(param_1 + 0x6c),param_2);
    FUN_710011bb20(*(long *)(param_1 + 0x178));
    pcVar3 = FUN_7100120700;
    uVar2 = 5;
    pcVar4 = "LanMatchRandomMatchmakeJob::UnregisterGathering";
  }
  *(code **)(param_1 + 0x30) = pcVar3;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(char **)(param_1 + 0x40) = pcVar4;
  return uVar2;
}

