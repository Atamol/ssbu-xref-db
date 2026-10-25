// addr:      710011cf50
// offset:    0x11cf50
// name:      FUN_710011cf50
// mangled:   
// signature: undefined FUN_710011cf50(void)


void FUN_710011cf50(long param_1)

{
  int iVar1;
  char *pcVar2;
  code *pcVar3;
  int aiStack_50 [4];
  int aiStack_40 [4];
  undefined4 auStack_28 [2];
  
  if (*(int *)(param_1 + 0x60) == 1) {
    aiStack_40[0] = 0x6439;
    nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)aiStack_40 | 4));
    aiStack_50[0] = 0;
    nn::err::ErrorResultVariant::operator=
              ((ErrorResultVariant *)((ulong)aiStack_40 | 4),(Result *)aiStack_50);
    FUN_71000bcf30((int *)(param_1 + 0x120),aiStack_40);
    *(code **)(param_1 + 0x30) = FUN_710013f090;
    *(undefined8 *)(param_1 + 0x38) = 0;
    pcVar2 = "LanMatchJoinSessionJob::LeaveMesh";
  }
  else {
    iVar1 = FUN_7100146ba0(DAT_71052adb38);
    if (iVar1 == 5) {
      aiStack_40[0] = 0xc406;
      nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)aiStack_40 | 4))
      ;
      aiStack_50[0] = 0;
      nn::err::ErrorResultVariant::operator=
                ((ErrorResultVariant *)((ulong)aiStack_40 | 4),(Result *)aiStack_50);
      FUN_71000bcf30((int *)(param_1 + 0x120),aiStack_40);
      (**(code **)(**(long **)(DAT_71052adb38 + 8) + 0x28))();
      *(code **)(param_1 + 0x30) = FUN_710013e970;
      *(undefined8 *)(param_1 + 0x38) = 0;
      pcVar2 = "lan::LanMatchJoinSessionJob::CompleteFailure";
    }
    else {
      (**(code **)(**(long **)(param_1 + 0x138) + 0xb0))
                (aiStack_40,*(long **)(param_1 + 0x138),(int *)(param_1 + 0x60),
                 *(undefined4 *)(param_1 + 0x114));
      if (aiStack_40[0] == 0) {
        pcVar3 = FUN_710011d0e0;
        pcVar2 = "LanMatchJoinSessionJob::WaitRequestSessionInfo";
      }
      else {
        aiStack_50[0] = 0x6439;
        nn::err::ErrorResultVariant::ErrorResultVariant
                  ((ErrorResultVariant *)((ulong)aiStack_50 | 4));
        auStack_28[0] = 0;
        nn::err::ErrorResultVariant::operator=
                  ((ErrorResultVariant *)((ulong)aiStack_50 | 4),(Result *)auStack_28);
        FUN_71000bcf30((int *)(param_1 + 0x120),aiStack_50);
        pcVar3 = FUN_710013f090;
        pcVar2 = "LanMatchJoinSessionJob::LeaveMesh";
      }
      *(code **)(param_1 + 0x30) = pcVar3;
      *(undefined8 *)(param_1 + 0x38) = 0;
    }
  }
  *(char **)(param_1 + 0x40) = pcVar2;
  return;
}

