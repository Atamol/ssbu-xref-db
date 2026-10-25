// addr:      7100186f80
// offset:    0x186f80
// name:      FUN_7100186f80
// mangled:   
// signature: undefined FUN_7100186f80(void)


undefined8 FUN_7100186f80(long *param_1)

{
  int *piVar1;
  ulong uVar2;
  int aiStack_50 [4];
  int aiStack_40 [4];
  undefined4 auStack_28 [2];
  
  piVar1 = (int *)param_1[0xd];
  if ((piVar1 == (int *)0x0) || ((char)piVar1[10] == '\0')) {
    uVar2 = (**(code **)(*param_1 + 0x40))(param_1);
    if ((uVar2 & 1) != 0) {
      param_1[6] = (long)FUN_7100186ed0;
      param_1[7] = 0;
      param_1[8] = (long)"ConnectStationJob::ConnectionFailed";
      return 0;
    }
    if (*(byte *)(param_1[0xe] + 0x38) < 0x20) {
      FUN_7100162430(DAT_71052add68);
      FUN_710015e7d0(aiStack_40,param_1[0xe]);
    }
    piVar1 = (int *)param_1[0xd];
    if ((piVar1 != (int *)0x0) && (2 < *piVar1 - 2U)) {
      aiStack_40[0] = 0;
      nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)aiStack_40 | 4))
      ;
      auStack_28[0] = 0;
      nn::err::ErrorResultVariant::operator=
                ((ErrorResultVariant *)((ulong)aiStack_40 | 4),(Result *)auStack_28);
      FUN_71000bce50(aiStack_50,aiStack_40);
      FUN_71000b4180(piVar1,aiStack_50);
    }
  }
  else if (2 < *piVar1 - 2U) {
    FUN_71000b4260(piVar1);
  }
  param_1[0xd] = 0;
  return 1;
}

