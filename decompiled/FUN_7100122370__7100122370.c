// addr:      7100122370
// offset:    0x122370
// name:      FUN_7100122370
// mangled:   
// signature: undefined FUN_7100122370(void)


undefined8 FUN_7100122370(long *param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  int aiStack_70 [4];
  int aiStack_60 [4];
  int aiStack_50 [4];
  int aiStack_40 [4];
  undefined4 auStack_28 [2];
  
  piVar2 = aiStack_70;
  iVar1 = FUN_7100146ba0(DAT_71052adb38);
  puVar3 = (undefined4 *)param_1[0xb];
  if (iVar1 == 5) {
    aiStack_50[0] = 0xc406;
    nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)aiStack_50 | 4));
    auStack_28[0] = 0;
    nn::err::ErrorResultVariant::operator=
              ((ErrorResultVariant *)((ulong)aiStack_50 | 4),(Result *)auStack_28);
    FUN_71000bce50(aiStack_40,aiStack_50);
    piVar2 = aiStack_40;
  }
  else {
    if ((puVar3 != (undefined4 *)0x0) && (*(char *)(puVar3 + 10) != '\0')) {
      aiStack_50[0] = 0x6c05;
      nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)aiStack_50 | 4))
      ;
      auStack_28[0] = 0;
      nn::err::ErrorResultVariant::operator=
                ((ErrorResultVariant *)((ulong)aiStack_50 | 4),(Result *)auStack_28);
      FUN_71000bce50(aiStack_60,aiStack_50);
      FUN_71000b41f0(puVar3,aiStack_60);
      param_1[0xb] = 0;
      (**(code **)(*param_1 + 0x30))(param_1);
      return 1;
    }
    FUN_710011aec0(aiStack_50,param_1[0x13],(int *)(param_1 + 0xc));
    if (aiStack_50[0] == 0) {
      param_1[8] = (long)"LanMatchUpdateSessionSettingJob::WaitUpdateSessionSetting";
      param_1[6] = (long)FUN_71001224f0;
      param_1[7] = 0;
      return 5;
    }
    puVar3 = (undefined4 *)param_1[0xb];
    FUN_71000bce50(aiStack_70,aiStack_50);
  }
  FUN_71000b41f0(puVar3,piVar2);
  param_1[0xb] = 0;
  return 1;
}

