// addr:      7100120850
// offset:    0x120850
// name:      FUN_7100120850
// mangled:   
// signature: undefined FUN_7100120850(void)


void FUN_7100120850(long param_1)

{
  int iVar1;
  char *pcVar2;
  code *pcVar3;
  int aiStack_48 [4];
  int aiStack_38 [4];
  undefined4 auStack_28 [2];
  
  if (*(int *)(param_1 + 0x110) == 1) {
    aiStack_38[0] = 0x6439;
    nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)aiStack_38 | 4));
    aiStack_48[0] = 0;
    nn::err::ErrorResultVariant::operator=
              ((ErrorResultVariant *)((ulong)aiStack_38 | 4),(Result *)aiStack_48);
    FUN_71000bcf30((int *)(param_1 + 0x6c),aiStack_38);
    *(code **)(param_1 + 0x30) = FUN_7100143750;
    *(undefined8 *)(param_1 + 0x38) = 0;
    pcVar2 = "LanMatchRandomMatchmakeJob::LeaveMesh";
  }
  else {
    iVar1 = FUN_7100146ba0(DAT_71052adb38);
    if (iVar1 == 5) {
      aiStack_38[0] = 0xc406;
      nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)aiStack_38 | 4))
      ;
      aiStack_48[0] = 0;
      nn::err::ErrorResultVariant::operator=
                ((ErrorResultVariant *)((ulong)aiStack_38 | 4),(Result *)aiStack_48);
      FUN_71000bcf30((int *)(param_1 + 0x6c),aiStack_38);
      *(code **)(param_1 + 0x30) = FUN_71001429b0;
      *(undefined8 *)(param_1 + 0x38) = 0;
      pcVar2 = "LanMatchRandomMatchmakeJob::CompleteFailure";
    }
    else {
      (**(code **)(**(long **)(param_1 + 0x178) + 0xb0))
                (aiStack_38,*(long **)(param_1 + 0x178),param_1 + 0x110,
                 *(undefined4 *)(param_1 + 100));
      if (aiStack_38[0] == 0) {
        pcVar3 = FUN_71001209c0;
        pcVar2 = "LanMatchRandomMatchmakeJob::WaitRequestSessionInfo";
      }
      else {
        aiStack_48[0] = 0x6439;
        nn::err::ErrorResultVariant::ErrorResultVariant
                  ((ErrorResultVariant *)((ulong)aiStack_48 | 4));
        auStack_28[0] = 0;
        nn::err::ErrorResultVariant::operator=
                  ((ErrorResultVariant *)((ulong)aiStack_48 | 4),(Result *)auStack_28);
        FUN_71000bcf30((int *)(param_1 + 0x6c),aiStack_48);
        pcVar3 = FUN_7100143750;
        pcVar2 = "LanMatchRandomMatchmakeJob::LeaveMesh";
      }
      *(code **)(param_1 + 0x30) = pcVar3;
      *(undefined8 *)(param_1 + 0x38) = 0;
    }
  }
  *(char **)(param_1 + 0x40) = pcVar2;
  return;
}

