// addr:      710011f530
// offset:    0x11f530
// name:      FUN_710011f530
// mangled:   
// signature: undefined FUN_710011f530(void)


void FUN_710011f530(long param_1)

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
    FUN_71000bcf30((int *)(param_1 + 0xa0),aiStack_38);
    pcVar3 = FUN_710013d590;
    pcVar2 = "LanMatchCreateSessionJob::CompleteFailure";
  }
  else {
    (**(code **)(**(long **)(param_1 + 0xb0) + 0x110))();
    FUN_710011bfa0(*(long *)(param_1 + 0xb0));
    pcVar3 = FUN_710013da20;
    pcVar2 = "CreateSessionJob::CompleteProcess";
  }
  *(code **)(param_1 + 0x30) = pcVar3;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(char **)(param_1 + 0x40) = pcVar2;
  return;
}

