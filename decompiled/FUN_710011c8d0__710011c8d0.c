// addr:      710011c8d0
// offset:    0x11c8d0
// name:      FUN_710011c8d0
// mangled:   
// signature: undefined FUN_710011c8d0(void)


undefined8 FUN_710011c8d0(long *param_1)

{
  int iVar1;
  undefined8 uVar2;
  int *piVar3;
  undefined4 *puVar4;
  int aiStack_80 [4];
  int aiStack_70 [4];
  int aiStack_60 [4];
  int aiStack_50 [4];
  int aiStack_40 [4];
  
  piVar3 = aiStack_80;
  iVar1 = FUN_7100146ba0(DAT_71052adb38);
  if (iVar1 == 5) {
    aiStack_40[0] = 0xc406;
    nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)aiStack_40 | 4));
    aiStack_70[0] = 0;
    nn::err::ErrorResultVariant::operator=
              ((ErrorResultVariant *)((ulong)aiStack_40 | 4),(Result *)aiStack_70);
    FUN_71000bcf30((int *)(param_1 + 0x24),aiStack_40);
    uVar2 = 0;
    param_1[6] = (long)FUN_710013e970;
    param_1[7] = 0;
    param_1[8] = (long)"nn::pia::lan::LanMatchJoinSessionJob::CompleteFailure";
  }
  else {
    puVar4 = (undefined4 *)param_1[0xb];
    if ((puVar4 == (undefined4 *)0x0) || (*(char *)(puVar4 + 10) == '\0')) {
      if ((int)param_1[0x29] == 0) {
        aiStack_40[0] = 0;
        nn::err::ErrorResultVariant::ErrorResultVariant
                  ((ErrorResultVariant *)((ulong)aiStack_40 | 4));
        aiStack_70[0] = 0;
        nn::err::ErrorResultVariant::operator=
                  ((ErrorResultVariant *)((ulong)aiStack_40 | 4),(Result *)aiStack_70);
        (**(code **)(*(long *)param_1[0x27] + 0x50))
                  (aiStack_70,(long *)param_1[0x27],param_1 + 0xc,
                   *(undefined4 *)((long)param_1 + 0x114));
        FUN_71000bcf30(aiStack_40,aiStack_70);
        if (aiStack_40[0] == 0) {
          *(undefined4 *)(param_1 + 0x22) = 2;
          param_1[8] = (long)"LanMatchJoinSessionJob::WaitJoinMatchmake";
          param_1[6] = (long)FUN_710011ca80;
          param_1[7] = 0;
          return 5;
        }
        puVar4 = (undefined4 *)param_1[0xb];
        FUN_71000bce50(aiStack_80,aiStack_40);
      }
      else {
        FUN_71000bce50(aiStack_60,(int *)(param_1 + 0x29));
        piVar3 = aiStack_60;
      }
    }
    else {
      aiStack_40[0] = 0x6c05;
      nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)aiStack_40 | 4))
      ;
      aiStack_70[0] = 0;
      nn::err::ErrorResultVariant::operator=
                ((ErrorResultVariant *)((ulong)aiStack_40 | 4),(Result *)aiStack_70);
      FUN_71000bce50(aiStack_50,aiStack_40);
      piVar3 = aiStack_50;
    }
    FUN_71000b41f0(puVar4,piVar3);
    param_1[0xb] = 0;
    (**(code **)(*param_1 + 0x50))(param_1);
    uVar2 = 1;
  }
  return uVar2;
}

