// addr:      7100170900
// offset:    0x170900
// name:      FUN_7100170900
// mangled:   
// signature: undefined FUN_7100170900(void)


undefined8 FUN_7100170900(long param_1)

{
  int *piVar1;
  undefined8 uVar2;
  int *piVar3;
  ErrorResultVariant *this;
  undefined4 *puVar4;
  int aiStack_b0 [4];
  int aiStack_a0 [4];
  int aiStack_90 [4];
  int aiStack_80 [4];
  int aiStack_70 [4];
  int aiStack_60 [4];
  undefined8 uStack_50;
  undefined4 uStack_48;
  int aiStack_40 [4];
  undefined4 auStack_28 [2];
  
  piVar3 = aiStack_b0;
  puVar4 = *(undefined4 **)(param_1 + 0x58);
  piVar1 = *(int **)(param_1 + 0x60);
  if (*(char *)(puVar4 + 10) != '\0') {
    if (*piVar1 == 1) {
      FUN_71000b4300((long)piVar1);
    }
    *(code **)(param_1 + 0x30) = FUN_7100175f70;
    *(undefined8 *)(param_1 + 0x38) = 0;
    *(char **)(param_1 + 0x40) = "LdnHostMigrationJob::WaitForCancel";
    return 0;
  }
  uVar2 = 5;
  switch(*piVar1) {
  case 1:
    goto switchD_7100170978_caseD_1;
  case 2:
    uStack_50 = (ulong)uStack_50._4_4_ << 0x20;
    nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)&uStack_50 | 4));
    aiStack_60[0] = 0;
    nn::err::ErrorResultVariant::operator=
              ((ErrorResultVariant *)((ulong)&uStack_50 | 4),(Result *)aiStack_60);
    FUN_71000bce50(aiStack_40,(int *)&uStack_50);
    FUN_71000b4180(puVar4,aiStack_40);
    *(undefined8 *)(param_1 + 0x58) = 0;
    *(undefined8 *)(*(long *)(param_1 + 0x78) + 0x418) = 0x300000000;
    uStack_48 = 0;
    uStack_50 = 0x10;
    FUN_71000b2b70();
    goto LAB_7100170b54;
  case 3:
    FUN_71000bce50((int *)&uStack_50,piVar1 + 1);
    aiStack_60[0] = 0x6c1c;
    this = (ErrorResultVariant *)((ulong)aiStack_60 | 4);
    nn::err::ErrorResultVariant::ErrorResultVariant(this);
    aiStack_80[0] = 0;
    nn::err::ErrorResultVariant::operator=(this,(Result *)aiStack_80);
    if ((int)uStack_50 == aiStack_60[0]) {
      if (*(byte *)(param_1 + 0xa0) < *(byte *)(param_1 + 0x90)) {
        FUN_710016c090(aiStack_60);
        if (aiStack_60[0] == 0) {
          FUN_710017ddf0(*(long *)(param_1 + 0x78),0);
          FUN_71000bb5d0((undefined8 *)(param_1 + 0x98));
          *(char *)(param_1 + 0xa0) = *(char *)(param_1 + 0xa0) + '\x01';
          *(code **)(param_1 + 0x30) = FUN_7100170bb0;
          *(undefined8 *)(param_1 + 0x38) = 0;
          *(char **)(param_1 + 0x40) = "LdnHostMigrationJob::WaitRetry";
          return 5;
        }
        puVar4 = *(undefined4 **)(param_1 + 0x58);
        FUN_71000bce50(aiStack_70,(int *)(*(long *)(param_1 + 0x60) + 4));
        piVar3 = aiStack_70;
        break;
      }
    }
    else {
      aiStack_60[0] = 0xc420;
      nn::err::ErrorResultVariant::ErrorResultVariant(this);
      aiStack_80[0] = 0;
      nn::err::ErrorResultVariant::operator=(this,(Result *)aiStack_80);
      if ((int)uStack_50 != aiStack_60[0]) {
        aiStack_80[0] = 0xc421;
        nn::err::ErrorResultVariant::ErrorResultVariant
                  ((ErrorResultVariant *)((ulong)aiStack_80 | 4));
        auStack_28[0] = 0;
        nn::err::ErrorResultVariant::operator=
                  ((ErrorResultVariant *)((ulong)aiStack_80 | 4),(Result *)auStack_28);
        if ((int)uStack_50 != aiStack_80[0]) goto LAB_7100170b2c;
      }
      FUN_710017f1c0(*(long *)(param_1 + 0x78),1);
    }
LAB_7100170b2c:
    puVar4 = *(undefined4 **)(param_1 + 0x58);
    FUN_71000bce50(aiStack_90,(int *)(*(long *)(param_1 + 0x60) + 4));
    piVar3 = aiStack_90;
    break;
  case 4:
    FUN_71000bce50(aiStack_a0,piVar1 + 1);
    piVar3 = aiStack_a0;
    break;
  default:
    uStack_50 = CONCAT44(uStack_50._4_4_,0x10c08);
    nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)&uStack_50 | 4));
    aiStack_60[0] = 0;
    nn::err::ErrorResultVariant::operator=
              ((ErrorResultVariant *)((ulong)&uStack_50 | 4),(Result *)aiStack_60);
    FUN_71000bce50(aiStack_b0,(int *)&uStack_50);
  }
  FUN_71000b41f0(puVar4,piVar3);
  *(undefined8 *)(param_1 + 0x58) = 0;
  FUN_7100176130(param_1);
LAB_7100170b54:
  uVar2 = 1;
switchD_7100170978_caseD_1:
  return uVar2;
}

