// addr:      7100176f30
// offset:    0x176f30
// name:      FUN_7100176f30
// mangled:   
// signature: undefined FUN_7100176f30(void)


undefined8 FUN_7100176f30(long param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  undefined8 uVar3;
  int *piVar4;
  int aiStack_80 [4];
  int aiStack_70 [4];
  int aiStack_60 [4];
  undefined8 uStack_50;
  undefined4 uStack_48;
  int aiStack_40 [4];
  undefined4 auStack_28 [2];
  
  piVar4 = aiStack_80;
  puVar1 = *(undefined4 **)(param_1 + 0x58);
  piVar2 = *(int **)(param_1 + 0x60);
  if (*(char *)(puVar1 + 10) != '\0') {
    if (*piVar2 == 1) {
      FUN_71000b4300((long)piVar2);
    }
    *(code **)(param_1 + 0x30) = FUN_7100175f70;
    *(undefined8 *)(param_1 + 0x38) = 0;
    *(char **)(param_1 + 0x40) = "LocalHostMigrationJob::WaitForCancel";
    return 0;
  }
  uVar3 = 5;
  switch(*piVar2) {
  case 1:
    goto switchD_7100176fa8_caseD_1;
  case 2:
    uStack_50 = (ulong)uStack_50._4_4_ << 0x20;
    nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)&uStack_50 | 4));
    auStack_28[0] = 0;
    nn::err::ErrorResultVariant::operator=
              ((ErrorResultVariant *)((ulong)&uStack_50 | 4),(Result *)auStack_28);
    FUN_71000bce50(aiStack_40,(int *)&uStack_50);
    FUN_71000b4180(puVar1,aiStack_40);
    *(undefined8 *)(param_1 + 0x58) = 0;
    *(undefined8 *)(*(long *)(param_1 + 0x78) + 0x418) = 0x300000000;
    uStack_48 = 0;
    uStack_50 = 0x10;
    FUN_71000b2b70();
    goto LAB_710017708c;
  case 3:
    FUN_71000bce50(aiStack_60,piVar2 + 1);
    piVar4 = aiStack_60;
    break;
  case 4:
    FUN_71000bce50(aiStack_70,piVar2 + 1);
    piVar4 = aiStack_70;
    break;
  default:
    uStack_50 = CONCAT44(uStack_50._4_4_,0x10c08);
    nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)&uStack_50 | 4));
    auStack_28[0] = 0;
    nn::err::ErrorResultVariant::operator=
              ((ErrorResultVariant *)((ulong)&uStack_50 | 4),(Result *)auStack_28);
    FUN_71000bce50(aiStack_80,(int *)&uStack_50);
  }
  FUN_71000b41f0(puVar1,piVar4);
  *(undefined8 *)(param_1 + 0x58) = 0;
  FUN_7100176130(param_1);
LAB_710017708c:
  uVar3 = 1;
switchD_7100176fa8_caseD_1:
  return uVar3;
}

