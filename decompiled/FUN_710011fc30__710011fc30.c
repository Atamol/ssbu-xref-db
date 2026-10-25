// addr:      710011fc30
// offset:    0x11fc30
// name:      FUN_710011fc30
// mangled:   
// signature: undefined FUN_710011fc30(void)


ulong FUN_710011fc30(long *param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined4 *puVar3;
  int aiStack_60 [4];
  int aiStack_50 [4];
  int aiStack_40 [4];
  undefined4 auStack_28 [2];
  
  puVar3 = (undefined4 *)param_1[0xb];
  if ((puVar3 == (undefined4 *)0x0) || (*(char *)(puVar3 + 10) == '\0')) {
    (**(code **)(*(long *)param_1[0x12] + 0x28))(aiStack_50,(long *)param_1[0x12],param_1 + 0xc);
    if (aiStack_50[0] == 0) {
      param_1[8] = (long)"LanMatchBrowseMatchmakeJob::WaitBrowseMatchmake";
      uVar2 = 4;
      param_1[6] = (long)FUN_710011fd50;
      param_1[7] = 0;
      uVar1 = 0x1f40000;
      goto LAB_710011fd2c;
    }
    puVar3 = (undefined4 *)param_1[0xb];
    if (puVar3 != (undefined4 *)0x0) {
      FUN_71000bce50(aiStack_60,aiStack_50);
      FUN_71000b41f0(puVar3,aiStack_60);
      uVar1 = 0;
      param_1[0xb] = 0;
      uVar2 = 1;
      goto LAB_710011fd2c;
    }
  }
  else {
    aiStack_50[0] = 0x6c05;
    nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)aiStack_50 | 4));
    auStack_28[0] = 0;
    nn::err::ErrorResultVariant::operator=
              ((ErrorResultVariant *)((ulong)aiStack_50 | 4),(Result *)auStack_28);
    FUN_71000bce50(aiStack_40,aiStack_50);
    FUN_71000b41f0(puVar3,aiStack_40);
    param_1[0xb] = 0;
    (**(code **)(*param_1 + 0x30))(param_1);
  }
  uVar1 = 0;
  uVar2 = 1;
LAB_710011fd2c:
  return uVar1 | uVar2;
}

