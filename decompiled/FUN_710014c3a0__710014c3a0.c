// addr:      710014c3a0
// offset:    0x14c3a0
// name:      FUN_710014c3a0
// mangled:   
// signature: undefined FUN_710014c3a0(void)


undefined8 FUN_710014c3a0(long param_1)

{
  int iVar1;
  ulong uVar2;
  int *piVar3;
  undefined4 *puVar4;
  int aiStack_90 [4];
  int aiStack_80 [4];
  int aiStack_70 [4];
  int aiStack_60 [4];
  int aiStack_50 [4];
  int aiStack_40 [4];
  undefined4 auStack_28 [2];
  
  iVar1 = FUN_7100146ba0(DAT_71052adb38);
  switch(iVar1) {
  case 5:
    puVar4 = *(undefined4 **)(param_1 + 0x58);
    aiStack_50[0] = 0xc406;
    nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)aiStack_50 | 4));
    auStack_28[0] = 0;
    nn::err::ErrorResultVariant::operator=
              ((ErrorResultVariant *)((ulong)aiStack_50 | 4),(Result *)auStack_28);
    FUN_71000bce50(aiStack_40,aiStack_50);
    piVar3 = aiStack_40;
    break;
  case 6:
    puVar4 = *(undefined4 **)(param_1 + 0x58);
    aiStack_50[0] = 0xa471;
    nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)aiStack_50 | 4));
    auStack_28[0] = 0;
    nn::err::ErrorResultVariant::operator=
              ((ErrorResultVariant *)((ulong)aiStack_50 | 4),(Result *)auStack_28);
    FUN_71000bce50(aiStack_60,aiStack_50);
    piVar3 = aiStack_60;
    break;
  case 7:
    puVar4 = *(undefined4 **)(param_1 + 0x58);
    aiStack_50[0] = 0xc420;
    nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)aiStack_50 | 4));
    auStack_28[0] = 0;
    nn::err::ErrorResultVariant::operator=
              ((ErrorResultVariant *)((ulong)aiStack_50 | 4),(Result *)auStack_28);
    FUN_71000bce50(aiStack_70,aiStack_50);
    piVar3 = aiStack_70;
    break;
  case 8:
    puVar4 = *(undefined4 **)(param_1 + 0x58);
    aiStack_50[0] = 0xc421;
    nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)aiStack_50 | 4));
    auStack_28[0] = 0;
    nn::err::ErrorResultVariant::operator=
              ((ErrorResultVariant *)((ulong)aiStack_50 | 4),(Result *)auStack_28);
    FUN_71000bce50(aiStack_80,aiStack_50);
    piVar3 = aiStack_80;
    break;
  default:
    uVar2 = (**(code **)(**(long **)(param_1 + 0x98) + 0x98))();
    if ((uVar2 & 1) == 0) {
      return 5;
    }
    if (*(int *)(param_1 + 0x60) != 2) {
      if (*(int *)(param_1 + 0x60) == 3) {
        puVar4 = *(undefined4 **)(param_1 + 0x58);
        FUN_71000bce50(aiStack_90,(int *)(param_1 + 100));
        FUN_71000b41f0(puVar4,aiStack_90);
      }
      *(undefined8 *)(param_1 + 0x58) = 0;
      return 1;
    }
    *(char **)(param_1 + 0x40) = "CloseParticipationJob::WaitP2pStable";
    *(code **)(param_1 + 0x30) = FUN_710014c590;
    *(undefined8 *)(param_1 + 0x38) = 0;
    FUN_71000bb5d0((undefined8 *)(param_1 + 0xa0));
    return 0;
  }
  FUN_71000b41f0(puVar4,piVar3);
  *(undefined8 *)(param_1 + 0x58) = 0;
  return 1;
}

