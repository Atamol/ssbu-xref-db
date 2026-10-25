// addr:      710011fd50
// offset:    0x11fd50
// name:      FUN_710011fd50
// mangled:   
// signature: undefined FUN_710011fd50(void)


undefined8 FUN_710011fd50(long *param_1)

{
  ulong uVar1;
  undefined4 *puVar2;
  int aiStack_60 [4];
  int aiStack_50 [4];
  int aiStack_40 [4];
  undefined4 auStack_28 [2];
  
  puVar2 = (undefined4 *)param_1[0xb];
  if ((puVar2 != (undefined4 *)0x0) && (*(char *)(puVar2 + 10) != '\0')) {
    aiStack_50[0] = 0x6c05;
    nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)aiStack_50 | 4));
    auStack_28[0] = 0;
    nn::err::ErrorResultVariant::operator=
              ((ErrorResultVariant *)((ulong)aiStack_50 | 4),(Result *)auStack_28);
    FUN_71000bce50(aiStack_40,aiStack_50);
    FUN_71000b41f0(puVar2,aiStack_40);
    param_1[0xb] = 0;
    (**(code **)(*param_1 + 0x30))(param_1);
    return 1;
  }
  uVar1 = (**(code **)(*(long *)param_1[0x12] + 0x30))();
  if ((uVar1 & 1) != 0) {
    FUN_710011bb20(param_1[0x12]);
    if ((int)param_1[0xc] == 2) {
      param_1[6] = (long)FUN_710013cda0;
      param_1[7] = 0;
      param_1[8] = (long)"session::BrowseMatchmakeJob::CompleteProcess";
      return 0;
    }
    if ((int)param_1[0xc] == 3) {
      puVar2 = (undefined4 *)param_1[0xb];
      FUN_71000bce50(aiStack_60,(int *)((long)param_1 + 100));
      FUN_71000b41f0(puVar2,aiStack_60);
      param_1[0xb] = 0;
      return 1;
    }
  }
  return 5;
}

