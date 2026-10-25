// addr:      710011f240
// offset:    0x11f240
// name:      FUN_710011f240
// mangled:   
// signature: undefined FUN_710011f240(void)


undefined8 FUN_710011f240(long *param_1)

{
  int iVar1;
  undefined8 uVar2;
  int *piVar3;
  undefined4 *puVar4;
  int aiStack_60 [4];
  int aiStack_50 [4];
  int aiStack_40 [4];
  undefined4 auStack_28 [2];
  
  piVar3 = aiStack_60;
  iVar1 = FUN_7100146ba0(DAT_71052adb38);
  if (iVar1 == 5) {
    aiStack_40[0] = 0xc406;
    nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)aiStack_40 | 4));
    auStack_28[0] = 0;
    nn::err::ErrorResultVariant::operator=
              ((ErrorResultVariant *)((ulong)aiStack_40 | 4),(Result *)auStack_28);
    FUN_71000bcf30((int *)(param_1 + 0x14),aiStack_40);
    uVar2 = 0;
    param_1[6] = (long)FUN_710013d590;
    param_1[7] = 0;
    param_1[8] = (long)"nn::pia::lan::LanMatchCreateSessionJob::CompleteFailure";
  }
  else {
    puVar4 = (undefined4 *)param_1[0xb];
    if ((puVar4 == (undefined4 *)0x0) || (*(char *)(puVar4 + 10) == '\0')) {
      (**(code **)(*(long *)param_1[0x16] + 0x40))(aiStack_40,(long *)param_1[0x16],param_1 + 0xc);
      if (aiStack_40[0] == 0) {
        param_1[8] = (long)"LanMatchCreateSessionJob::WaitCreateMatchmake";
        param_1[6] = (long)FUN_710011f3a0;
        param_1[7] = 0;
        return 5;
      }
      puVar4 = (undefined4 *)param_1[0xb];
      FUN_71000bce50(aiStack_60,aiStack_40);
    }
    else {
      aiStack_40[0] = 0x6c05;
      nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)aiStack_40 | 4))
      ;
      auStack_28[0] = 0;
      nn::err::ErrorResultVariant::operator=
                ((ErrorResultVariant *)((ulong)aiStack_40 | 4),(Result *)auStack_28);
      FUN_71000bce50(aiStack_50,aiStack_40);
      piVar3 = aiStack_50;
    }
    FUN_71000b41f0(puVar4,piVar3);
    param_1[0xb] = 0;
    (**(code **)(*param_1 + 0x30))(param_1);
    uVar2 = 1;
  }
  return uVar2;
}

