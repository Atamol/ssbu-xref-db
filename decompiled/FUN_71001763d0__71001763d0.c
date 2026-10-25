// addr:      71001763d0
// offset:    0x1763d0
// name:      FUN_71001763d0
// mangled:   
// signature: undefined FUN_71001763d0(void)


undefined8 FUN_71001763d0(long param_1)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  int *piVar3;
  long *plVar4;
  int aiStack_70 [4];
  int aiStack_60 [4];
  int aiStack_50 [4];
  int aiStack_40 [4];
  undefined4 auStack_28 [2];
  
  puVar1 = *(undefined4 **)(param_1 + 0x58);
  piVar3 = *(int **)(param_1 + 0x60);
  if (*(char *)(puVar1 + 10) != '\0') {
    if (*piVar3 == 1) {
      FUN_71000b4300((long)piVar3);
    }
    *(code **)(param_1 + 0x30) = FUN_7100175f70;
    *(undefined8 *)(param_1 + 0x38) = 0;
    *(char **)(param_1 + 0x40) = "LocalHostMigrationJob::WaitForCancel";
    return 0;
  }
  uVar2 = 5;
  switch(*piVar3) {
  case 1:
    goto switchD_7100176448_caseD_1;
  case 2:
    plVar4 = *(long **)(DAT_71052adb38 + (ulong)*(byte *)(DAT_71052adb38 + 0x162) * 8 + 0x168);
    uVar2 = (**(code **)(**(long **)(param_1 + 0x78) + 0x158))();
    (**(code **)(*plVar4 + 0x148))(plVar4,uVar2);
    aiStack_70[2] = 0;
    aiStack_70[0] = 0x10;
    aiStack_70[1] = 0;
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
    aiStack_70[0] = 0x10c08;
    nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)aiStack_70 | 4));
    auStack_28[0] = 0;
    nn::err::ErrorResultVariant::operator=
              ((ErrorResultVariant *)((ulong)aiStack_70 | 4),(Result *)auStack_28);
    FUN_71000bce50(aiStack_60,aiStack_70);
    piVar3 = aiStack_60;
  }
  FUN_71000b41f0(puVar1,piVar3);
  *(undefined8 *)(param_1 + 0x58) = 0;
  FUN_7100176130(param_1);
  uVar2 = 1;
switchD_7100176448_caseD_1:
  return uVar2;
}

