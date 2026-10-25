// addr:      71001839f0
// offset:    0x1839f0
// name:      FUN_71001839f0
// mangled:   
// signature: undefined FUN_71001839f0(void)


undefined8 FUN_71001839f0(long param_1)

{
  char *pcVar1;
  code *pcVar2;
  int aiStack_30 [4];
  
  if (*(char *)(*(long *)(param_1 + 0x58) + 0x28) == '\0') {
    FUN_7100172bb0(aiStack_30,*(long **)(*(long *)(param_1 + 0x88) + 0x400));
    if (aiStack_30[0] != 0) {
      return 5;
    }
    if (*(char *)(param_1 + 0x80) == '\0') {
      FUN_71000bb5d0((undefined8 *)(param_1 + 0x70));
      pcVar2 = FUN_7100183cc0;
      pcVar1 = "LocalDestroyNetworkJob::SendDestroyNetworkMessage";
    }
    else {
      FUN_710017eae0(*(long **)(param_1 + 0x88));
      FUN_71000bb5d0((undefined8 *)(param_1 + 0x78));
      pcVar2 = FUN_7100183be0;
      pcVar1 = "LocalDestroyNetworkJob::WaitUntilAllClientsReceiveUpdateSessionMessage";
    }
    *(code **)(param_1 + 0x30) = pcVar2;
    *(undefined8 *)(param_1 + 0x38) = 0;
  }
  else {
    if (**(int **)(param_1 + 0x60) == 1) {
      FUN_71000b4300((long)*(int **)(param_1 + 0x60));
    }
    if (*(char *)(param_1 + 0x80) != '\0') {
      *(undefined4 *)(*(long *)(param_1 + 0x88) + 0x418) = 0;
    }
    *(code **)(param_1 + 0x30) = FUN_7100183b90;
    *(undefined8 *)(param_1 + 0x38) = 0;
    pcVar1 = "LocalDestroyNetworkJob::WaitForCancel";
  }
  *(char **)(param_1 + 0x40) = pcVar1;
  return 0;
}

