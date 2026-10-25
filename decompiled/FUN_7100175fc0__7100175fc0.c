// addr:      7100175fc0
// offset:    0x175fc0
// name:      FUN_7100175fc0
// mangled:   
// signature: undefined FUN_7100175fc0(void)


undefined8 FUN_7100175fc0(long *param_1)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  int *piVar3;
  int aiStack_70 [4];
  int aiStack_60 [4];
  int aiStack_50 [4];
  int aiStack_40 [4];
  undefined4 auStack_28 [2];
  
  puVar1 = (undefined4 *)param_1[0xb];
  piVar3 = (int *)param_1[0xc];
  if (*(char *)(puVar1 + 10) != '\0') {
    if (*piVar3 == 1) {
      FUN_71000b4300((long)piVar3);
    }
    param_1[6] = (long)FUN_7100175f70;
    param_1[7] = 0;
    param_1[8] = (long)"LocalHostMigrationJob::WaitForCancel";
    return 0;
  }
  uVar2 = 5;
  switch(*piVar3) {
  case 1:
    goto switchD_7100176038_caseD_1;
  case 2:
    (**(code **)(*(long *)param_1[0xf] + 0x188))();
    if ((char)param_1[0xd] != '\0') {
      param_1[6] = 0x38;
      param_1[7] = 1;
      param_1[8] = (long)"LocalHostMigrationJob::CreateNetwork";
      return 0;
    }
    FUN_71000bb5d0(param_1 + 0x10);
    (**(code **)(*param_1 + 0x48))(param_1);
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
  param_1[0xb] = 0;
  FUN_7100176130((long)param_1);
  uVar2 = 1;
switchD_7100176038_caseD_1:
  return uVar2;
}

