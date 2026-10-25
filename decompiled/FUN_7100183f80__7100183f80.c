// addr:      7100183f80
// offset:    0x183f80
// name:      FUN_7100183f80
// mangled:   
// signature: undefined FUN_7100183f80(void)


undefined8 FUN_7100183f80(long param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  undefined8 uVar3;
  int *piVar4;
  int aiStack_50 [4];
  int aiStack_40 [4];
  int aiStack_30 [4];
  
  piVar4 = aiStack_50;
  puVar1 = *(undefined4 **)(param_1 + 0x58);
  piVar2 = *(int **)(param_1 + 0x60);
  if (*(char *)(puVar1 + 10) != '\0') {
    if (*piVar2 == 1) {
      FUN_71000b4300((long)piVar2);
    }
    if (*(char *)(param_1 + 0x80) != '\0') {
      *(undefined4 *)(*(long *)(param_1 + 0x88) + 0x418) = 0;
    }
    *(code **)(param_1 + 0x30) = FUN_7100183b90;
    *(undefined8 *)(param_1 + 0x38) = 0;
    *(char **)(param_1 + 0x40) = "LocalDestroyNetworkJob::WaitForCancel";
    return 0;
  }
  uVar3 = 5;
  switch(*piVar2) {
  case 1:
    goto switchD_7100184010_caseD_1;
  case 2:
    FUN_71000bce50(aiStack_30,piVar2 + 1);
    FUN_71000b4180(puVar1,aiStack_30);
    *(undefined8 *)(param_1 + 0x58) = 0;
    FUN_710017dcc0(*(long *)(param_1 + 0x88));
    if (*(char *)(param_1 + 0x80) == '\0') goto switchD_7100184010_default;
    goto LAB_710018407c;
  case 3:
    FUN_71000bce50(aiStack_40,piVar2 + 1);
    piVar4 = aiStack_40;
    break;
  case 4:
    FUN_71000bce50(aiStack_50,piVar2 + 1);
    break;
  default:
    goto switchD_7100184010_default;
  }
  FUN_71000b41f0(puVar1,piVar4);
  *(undefined8 *)(param_1 + 0x58) = 0;
  if (*(char *)(param_1 + 0x80) != '\0') {
LAB_710018407c:
    *(undefined4 *)(*(long *)(param_1 + 0x88) + 0x418) = 0;
  }
switchD_7100184010_default:
  uVar3 = 1;
switchD_7100184010_caseD_1:
  return uVar3;
}

