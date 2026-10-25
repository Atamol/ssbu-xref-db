// addr:      7100186040
// offset:    0x186040
// name:      FUN_7100186040
// mangled:   
// signature: undefined8 __cdecl FUN_7100186040(long param_1)


undefined8 FUN_7100186040(long param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  int *piVar3;
  int aiStack_60 [4];
  int aiStack_50 [4];
  int aiStack_40 [4];
  
  piVar3 = aiStack_60;
  puVar1 = *(undefined4 **)(param_1 + 0x58);
  piVar2 = *(int **)(param_1 + 0x60);
  if (*(char *)(puVar1 + 10) != '\0') {
    if (*piVar2 == 1) {
      FUN_71000b4300((long)piVar2);
    }
    *(code **)(param_1 + 0x30) = FUN_71001861c0;
    *(undefined8 *)(param_1 + 0x38) = 0;
    *(char **)(param_1 + 0x40) = "LocalScanNetworkJob::WaitForCancel";
    return 0;
  }
  switch(*piVar2) {
  case 1:
    return 5;
  case 2:
    *(undefined1 *)(*(long *)(param_1 + 0x68) + 0x47d) = 1;
    FUN_71000bce50(aiStack_40,piVar2 + 1);
    FUN_71000b4180(puVar1,aiStack_40);
    *(undefined8 *)(param_1 + 0x58) = 0;
    return 1;
  case 3:
    FUN_71000bce50(aiStack_50,piVar2 + 1);
    piVar3 = aiStack_50;
    break;
  case 4:
    FUN_71000bce50(aiStack_60,piVar2 + 1);
    break;
  default:
    goto switchD_71001860b4_caseD_1;
  }
  FUN_71000b41f0(puVar1,piVar3);
  *(undefined8 *)(param_1 + 0x58) = 0;
switchD_71001860b4_caseD_1:
  return 1;
}

