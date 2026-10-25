// addr:      7100183540
// offset:    0x183540
// name:      FUN_7100183540
// mangled:   
// signature: undefined FUN_7100183540(void)


undefined8 FUN_7100183540(long param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  uint uVar3;
  int *piVar4;
  int aiStack_40 [4];
  int aiStack_30 [4];
  
  piVar4 = aiStack_40;
  puVar1 = *(undefined4 **)(param_1 + 0x58);
  piVar2 = *(int **)(param_1 + 0x60);
  if (*(char *)(puVar1 + 10) != '\0') {
    if (*piVar2 == 1) {
      FUN_71000b4300((long)piVar2);
    }
    *(code **)(param_1 + 0x30) = FUN_71001836f0;
    *(undefined8 *)(param_1 + 0x38) = 0;
    *(char **)(param_1 + 0x40) = "LocalConnectNetworkJob::WaitForCancel";
    return 0;
  }
  switch(*piVar2) {
  case 1:
    return 5;
  case 2:
    uVar3 = FUN_71000b4990(*(long *)(*(long *)(param_1 + 0x68) + 0x400));
    if ((uVar3 & 1) != 0) {
      return 5;
    }
    *(code **)(param_1 + 0x30) = FUN_7100183740;
    *(undefined8 *)(param_1 + 0x38) = 0;
    *(char **)(param_1 + 0x40) = "LocalConnectNetworkJob::ProcessSucceeded";
    return 0;
  case 3:
    FUN_71000bce50(aiStack_30,piVar2 + 1);
    piVar4 = aiStack_30;
    break;
  case 4:
    FUN_71000bce50(aiStack_40,piVar2 + 1);
    break;
  default:
    goto switchD_71001835c0_default;
  }
  FUN_71000b41f0(puVar1,piVar4);
  *(undefined8 *)(param_1 + 0x58) = 0;
switchD_71001835c0_default:
  return 1;
}

