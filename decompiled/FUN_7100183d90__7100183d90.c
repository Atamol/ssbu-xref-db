// addr:      7100183d90
// offset:    0x183d90
// name:      FUN_7100183d90
// mangled:   
// signature: undefined FUN_7100183d90(void)


undefined8 FUN_7100183d90(long param_1)

{
  undefined4 *puVar1;
  int aiStack_40 [4];
  int aiStack_30 [4];
  
  FUN_7100172c60(aiStack_30,*(long **)(*(long *)(param_1 + 0x88) + 0x400),
                 *(undefined4 **)(param_1 + 0x60));
  if (aiStack_30[0] == 0) {
    FUN_71000b4820(*(long *)(*(long *)(param_1 + 0x88) + 0x400),1);
    *(char **)(param_1 + 0x40) = "LocalDestroyNetworkJob::WaitDestroyNetwork";
    *(code **)(param_1 + 0x30) = FUN_7100183f80;
    *(undefined8 *)(param_1 + 0x38) = 0;
    return 5;
  }
  puVar1 = *(undefined4 **)(param_1 + 0x58);
  FUN_71000bce50(aiStack_40,(int *)(*(long *)(param_1 + 0x60) + 4));
  FUN_71000b41f0(puVar1,aiStack_40);
  *(undefined8 *)(param_1 + 0x58) = 0;
  if (*(char *)(param_1 + 0x80) != '\0') {
    *(undefined4 *)(*(long *)(param_1 + 0x88) + 0x418) = 0;
    return 1;
  }
  return 1;
}

