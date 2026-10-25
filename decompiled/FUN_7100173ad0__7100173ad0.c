// addr:      7100173ad0
// offset:    0x173ad0
// name:      FUN_7100173ad0
// mangled:   
// signature: undefined FUN_7100173ad0(void)


undefined8 FUN_7100173ad0(long param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  int *piVar3;
  int aiStack_50 [4];
  int aiStack_40 [4];
  int aiStack_30 [4];
  
  piVar3 = aiStack_50;
  puVar1 = *(undefined4 **)(param_1 + 0x58);
  piVar2 = *(int **)(param_1 + 0x60);
  if (*(char *)(puVar1 + 10) != '\0') {
    if (*piVar2 == 1) {
      FUN_71000b4300((long)piVar2);
    }
    *(code **)(param_1 + 0x30) = FUN_7100173c50;
    *(undefined8 *)(param_1 + 0x38) = 0;
    *(char **)(param_1 + 0x40) = "LocalCreateNetworkJob::WaitForCancel";
    return 0;
  }
  switch(*piVar2) {
  case 1:
    return 5;
  case 2:
    FUN_71000bce50(aiStack_30,piVar2 + 1);
    FUN_71000b4180(puVar1,aiStack_30);
    goto LAB_7100173b9c;
  case 3:
    FUN_71000bce50(aiStack_40,piVar2 + 1);
    piVar3 = aiStack_40;
    break;
  case 4:
    FUN_71000bce50(aiStack_50,piVar2 + 1);
    break;
  default:
    goto switchD_7100173b50_caseD_1;
  }
  FUN_71000b41f0(puVar1,piVar3);
LAB_7100173b9c:
  *(undefined8 *)(param_1 + 0x58) = 0;
switchD_7100173b50_caseD_1:
  return 1;
}

