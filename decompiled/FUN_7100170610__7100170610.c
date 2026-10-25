// addr:      7100170610
// offset:    0x170610
// name:      FUN_7100170610
// mangled:   
// signature: undefined8 __cdecl FUN_7100170610(long param_1)


undefined8 FUN_7100170610(long param_1)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  int *piVar3;
  int local_70 [4];
  int aiStack_60 [4];
  int aiStack_50 [4];
  int aiStack_40 [4];
  undefined4 local_28 [2];
  
  puVar1 = *(undefined4 **)(param_1 + 0x58);
  piVar3 = *(int **)(param_1 + 0x60);
  if (*(char *)(puVar1 + 10) != '\0') {
    if (*piVar3 == 1) {
      FUN_71000b4300((long)piVar3);
    }
    *(code **)(param_1 + 0x30) = FUN_7100175f70;
    *(undefined8 *)(param_1 + 0x38) = 0;
    *(char **)(param_1 + 0x40) = "LdnHostMigrationJob::WaitForCancel";
    return 0;
  }
  uVar2 = 5;
  switch(*piVar3) {
  case 1:
    goto switchD_7100170688_caseD_1;
  case 2:
    local_70[2] = 0;
    local_70[0] = 0x10;
    local_70[1] = 0;
    FUN_71000b2b70();
    *(char **)(param_1 + 0x40) = "LocalHostMigrationJob::WaitUntilAllClientsConnection";
    *(code **)(param_1 + 0x30) = FUN_7100176560;
    *(undefined8 *)(param_1 + 0x38) = 0;
    FUN_71000bb5d0((undefined8 *)(param_1 + 0x70));
    return 0;
  case 3:
    FUN_71000bce50(aiStack_40,piVar3 + 1);
    piVar3 = aiStack_40;
    break;
  case 4:
    FUN_71000bce50(aiStack_50,piVar3 + 1);
    piVar3 = aiStack_50;
    break;
  default:
    local_70[0] = 0x10c08;
    nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)local_70 | 4));
    local_28[0] = 0;
    nn::err::ErrorResultVariant::operator=
              ((ErrorResultVariant *)((ulong)local_70 | 4),(Result *)local_28);
    FUN_71000bce50(aiStack_60,local_70);
    piVar3 = aiStack_60;
  }
  FUN_71000b41f0(puVar1,piVar3);
  *(undefined8 *)(param_1 + 0x58) = 0;
  FUN_7100176130(param_1);
  uVar2 = 1;
switchD_7100170688_caseD_1:
  return uVar2;
}

