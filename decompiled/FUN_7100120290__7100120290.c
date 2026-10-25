// addr:      7100120290
// offset:    0x120290
// name:      FUN_7100120290
// mangled:   
// signature: undefined FUN_7100120290(void)


ulong FUN_7100120290(long *param_1)

{
  int iVar1;
  ulong uVar2;
  ulong uVar3;
  char *pcVar4;
  undefined4 *puVar5;
  int aiStack_60 [4];
  int aiStack_50 [4];
  int aiStack_40 [4];
  undefined4 auStack_28 [2];
  
  iVar1 = FUN_7100146ba0(DAT_71052adb38);
  if (iVar1 == 5) {
    aiStack_40[0] = 0xc406;
    nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)aiStack_40 | 4));
    auStack_28[0] = 0;
    nn::err::ErrorResultVariant::operator=
              ((ErrorResultVariant *)((ulong)aiStack_40 | 4),(Result *)auStack_28);
    FUN_71000bcf30((int *)((long)param_1 + 0x6c),aiStack_40);
    param_1[7] = 0;
    param_1[6] = (long)FUN_71001429b0;
    pcVar4 = "nn::pia::lan::LanMatchRandomMatchmakeJob::CompleteFailure";
    uVar3 = 0;
    uVar2 = 0;
LAB_7100120314:
    param_1[8] = (long)pcVar4;
  }
  else {
    puVar5 = (undefined4 *)param_1[0xb];
    if ((puVar5 == (undefined4 *)0x0) || (*(char *)(puVar5 + 10) == '\0')) {
      (**(code **)(*(long *)param_1[0x2f] + 0x18))(aiStack_40,(long *)param_1[0x2f],param_1 + 0x22);
      if (aiStack_40[0] == 0) {
        pcVar4 = "LanMatchRandomMatchmakeJob::WaitRandomMatchmake";
        *(undefined4 *)(param_1 + 0xc) = 2;
        param_1[6] = (long)FUN_7100120420;
        param_1[7] = 0;
        uVar2 = 0x1f40000;
        uVar3 = 4;
        goto LAB_7100120314;
      }
      puVar5 = (undefined4 *)param_1[0xb];
      if (puVar5 != (undefined4 *)0x0) {
        FUN_71000bce50(aiStack_60,aiStack_40);
        FUN_71000b41f0(puVar5,aiStack_60);
        param_1[0xb] = 0;
      }
      FUN_710011bb20(param_1[0x2f]);
    }
    else {
      aiStack_40[0] = 0x6c05;
      nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)aiStack_40 | 4))
      ;
      auStack_28[0] = 0;
      nn::err::ErrorResultVariant::operator=
                ((ErrorResultVariant *)((ulong)aiStack_40 | 4),(Result *)auStack_28);
      FUN_71000bce50(aiStack_50,aiStack_40);
      FUN_71000b41f0(puVar5,aiStack_50);
      param_1[0xb] = 0;
      (**(code **)(*param_1 + 0x30))(param_1);
    }
    uVar2 = 0;
    uVar3 = 1;
  }
  return uVar2 | uVar3;
}

