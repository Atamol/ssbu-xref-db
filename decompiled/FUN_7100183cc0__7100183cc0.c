// addr:      7100183cc0
// offset:    0x183cc0
// name:      FUN_7100183cc0
// mangled:   
// signature: undefined FUN_7100183cc0(void)


undefined8 FUN_7100183cc0(long param_1)

{
  undefined8 uVar1;
  ulong uVar2;
  long lVar3;
  char *pcVar4;
  code *pcVar5;
  
  if (*(char *)(*(long *)(param_1 + 0x58) + 0x28) == '\0') {
    uVar2 = FUN_71001800a0(*(long *)(param_1 + 0x88));
    if ((uVar2 & 1) == 0) {
      pcVar5 = FUN_7100183d90;
      uVar1 = 0;
      pcVar4 = "LocalDestroyNetworkJob::StartDestroyNetwork";
    }
    else {
      lVar3 = *(long *)(param_1 + 0x88);
      if (*(char *)(param_1 + 0x80) == '\0') {
        FUN_710017fc00(lVar3);
      }
      else {
        *(undefined1 *)(lVar3 + 0x468) = 0;
        FUN_710017fce0(lVar3);
      }
      FUN_71000bb5d0((undefined8 *)(param_1 + 0x68));
      pcVar5 = FUN_7100183e60;
      uVar1 = 5;
      pcVar4 = "LocalDestroyNetworkJob::WaitUntilAllClientsDisconnection";
    }
  }
  else {
    if (**(int **)(param_1 + 0x60) == 1) {
      FUN_71000b4300((long)*(int **)(param_1 + 0x60));
    }
    if (*(char *)(param_1 + 0x80) != '\0') {
      *(undefined4 *)(*(long *)(param_1 + 0x88) + 0x418) = 0;
    }
    pcVar5 = FUN_7100183b90;
    uVar1 = 0;
    pcVar4 = "LocalDestroyNetworkJob::WaitForCancel";
  }
  *(code **)(param_1 + 0x30) = pcVar5;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(char **)(param_1 + 0x40) = pcVar4;
  return uVar1;
}

