// addr:      71001075b0
// offset:    0x1075b0
// name:      FUN_71001075b0
// mangled:   
// signature: undefined FUN_71001075b0(void)


undefined8 FUN_71001075b0(long param_1)

{
  int iVar1;
  ulong uVar2;
  int *piVar3;
  undefined4 *puVar4;
  int aiStack_a0 [4];
  int aiStack_90 [4];
  int aiStack_80 [4];
  int aiStack_70 [4];
  int aiStack_60 [4];
  int aiStack_50 [4];
  int aiStack_40 [4];
  undefined4 auStack_28 [2];
  
  piVar3 = aiStack_a0;
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
    if (*(int *)(param_1 + 0x98) == 0) {
      uVar2 = (**(code **)(**(long **)(param_1 + 0x90) + 0xb8))();
      if ((uVar2 & 1) != 0) {
        if (*(int *)(param_1 + 0x60) == 2) {
          *(code **)(param_1 + 0x30) = FUN_710013cda0;
          *(undefined8 *)(param_1 + 0x38) = 0;
          *(char **)(param_1 + 0x40) = "session::BrowseMatchmakeJob::CompleteProcess";
          return 0;
        }
        if (*(int *)(param_1 + 0x60) == 3) {
          puVar4 = *(undefined4 **)(param_1 + 0x58);
          FUN_71000bce50(aiStack_a0,(int *)(param_1 + 100));
          break;
        }
      }
      return 5;
    }
    puVar4 = *(undefined4 **)(param_1 + 0x58);
    FUN_71000bce50(aiStack_90,(int *)(param_1 + 0x98));
    piVar3 = aiStack_90;
  }
  FUN_71000b41f0(puVar4,piVar3);
  *(undefined8 *)(param_1 + 0x58) = 0;
  return 1;
}

