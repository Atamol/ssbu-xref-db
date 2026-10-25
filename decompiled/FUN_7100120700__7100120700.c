// addr:      7100120700
// offset:    0x120700
// name:      FUN_7100120700
// mangled:   
// signature: undefined FUN_7100120700(void)


undefined8 FUN_7100120700(long *param_1)

{
  int iVar1;
  long *plVar2;
  undefined4 *puVar3;
  int aiStack_48 [4];
  int aiStack_38 [4];
  undefined4 auStack_28 [2];
  
  iVar1 = FUN_7100146ba0(DAT_71052adb38);
  if (iVar1 == 5) {
    aiStack_38[0] = 0xc406;
    nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)aiStack_38 | 4));
    auStack_28[0] = 0;
    nn::err::ErrorResultVariant::operator=
              ((ErrorResultVariant *)((ulong)aiStack_38 | 4),(Result *)auStack_28);
    FUN_71000bcf30((int *)((long)param_1 + 0x6c),aiStack_38);
    param_1[6] = (long)FUN_71001429b0;
    param_1[7] = 0;
    param_1[8] = (long)"nn::pia::lan::LanMatchRandomMatchmakeJob::CompleteFailure";
    return 0;
  }
  plVar2 = *(long **)(DAT_71052adb38 + (ulong)*(byte *)(DAT_71052adb38 + 0x162) * 8 + 0x168);
  (**(code **)(*plVar2 + 0x70))
            (aiStack_38,plVar2,param_1 + 0x22,
             *(undefined4 *)(DAT_71052adb38 + (ulong)*(byte *)(DAT_71052adb38 + 0x162) * 4 + 0x180))
  ;
  if (aiStack_38[0] != 0) {
    (**(code **)(**(long **)(DAT_71052adb38 + 8) + 0x28))();
    puVar3 = (undefined4 *)param_1[0xb];
    FUN_71000bce50(aiStack_48,(int *)((long)param_1 + 0x6c));
    FUN_71000b41f0(puVar3,aiStack_48);
    param_1[0xb] = 0;
    (**(code **)(*param_1 + 0x30))(param_1);
    return 1;
  }
  param_1[8] = (long)"LanMatchRandomMatchmakeJob::WaitUnregisterGathering";
  param_1[6] = (long)FUN_71001211d0;
  param_1[7] = 0;
  return 5;
}

