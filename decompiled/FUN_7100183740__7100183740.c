// addr:      7100183740
// offset:    0x183740
// name:      FUN_7100183740
// mangled:   
// signature: undefined FUN_7100183740(void)


undefined8 FUN_7100183740(long param_1)

{
  undefined8 uVar1;
  undefined4 *puVar2;
  int aiStack_50 [4];
  int aiStack_40 [4];
  undefined4 auStack_28 [2];
  
  puVar2 = *(undefined4 **)(param_1 + 0x58);
  if (*(char *)(puVar2 + 10) == '\0') {
    aiStack_50[0] = 0;
    nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)aiStack_50 | 4));
    auStack_28[0] = 0;
    nn::err::ErrorResultVariant::operator=
              ((ErrorResultVariant *)((ulong)aiStack_50 | 4),(Result *)auStack_28);
    FUN_71000bce50(aiStack_40,aiStack_50);
    FUN_71000b4180(puVar2,aiStack_40);
    uVar1 = 1;
    *(undefined8 *)(param_1 + 0x58) = 0;
  }
  else {
    if (**(int **)(param_1 + 0x60) == 1) {
      FUN_71000b4300((long)*(int **)(param_1 + 0x60));
    }
    uVar1 = 0;
    *(code **)(param_1 + 0x30) = FUN_71001836f0;
    *(undefined8 *)(param_1 + 0x38) = 0;
    *(char **)(param_1 + 0x40) = "LocalConnectNetworkJob::WaitForCancel";
  }
  return uVar1;
}

