// addr:      7100184270
// offset:    0x184270
// name:      FUN_7100184270
// mangled:   
// signature: undefined FUN_7100184270(void)


undefined8 FUN_7100184270(long param_1)

{
  undefined4 *puVar1;
  char *pcVar2;
  int aiStack_50 [4];
  int aiStack_40 [4];
  int aiStack_30 [4];
  
  if (*(char *)(*(long *)(param_1 + 0x58) + 0x28) == '\0') {
    FUN_7100172e00(aiStack_30,*(long **)(*(long *)(param_1 + 0x68) + 0x400));
    if (aiStack_30[0] != 0) {
      return 5;
    }
    FUN_7100172eb0(aiStack_40,*(long **)(*(long *)(param_1 + 0x68) + 0x400),
                   *(undefined4 **)(param_1 + 0x60));
    FUN_71000bcf30(aiStack_30,aiStack_40);
    if (aiStack_30[0] != 0) {
      puVar1 = *(undefined4 **)(param_1 + 0x58);
      FUN_71000bce50(aiStack_50,(int *)(*(long *)(param_1 + 0x60) + 4));
      FUN_71000b41f0(puVar1,aiStack_50);
      *(undefined8 *)(param_1 + 0x58) = 0;
      return 1;
    }
    FUN_71000b4820(*(long *)(*(long *)(param_1 + 0x68) + 0x400),1);
    *(code **)(param_1 + 0x30) = FUN_7100184460;
    *(undefined8 *)(param_1 + 0x38) = 0;
    pcVar2 = "LocalDisconnectNetworkJob::WaitDisconnectNetwork";
  }
  else {
    if (**(int **)(param_1 + 0x60) == 1) {
      FUN_71000b4300((long)*(int **)(param_1 + 0x60));
    }
    *(code **)(param_1 + 0x30) = FUN_7100184410;
    *(undefined8 *)(param_1 + 0x38) = 0;
    pcVar2 = "LocalDisconnectNetworkJob::WaitForCancel";
  }
  *(char **)(param_1 + 0x40) = pcVar2;
  return 0;
}

