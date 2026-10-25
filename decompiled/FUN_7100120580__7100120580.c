// addr:      7100120580
// offset:    0x120580
// name:      FUN_7100120580
// mangled:   
// signature: undefined FUN_7100120580(void)


void FUN_7100120580(long param_1)

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
    pcVar2 = "LanMatchRandomMatchmakeJob::CompleteFailure";
  }
  else {
    (**(code **)(**(long **)(param_1 + 0x178) + 0x110))();
    FUN_710011bfa0(*(long *)(param_1 + 0x178));
    pcVar3 = FUN_71001438f0;
    pcVar2 = "RandomMatchmakeJob::CompleteProcess";
  }
  *(code **)(param_1 + 0x30) = pcVar3;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(char **)(param_1 + 0x40) = pcVar2;
  return;
}

