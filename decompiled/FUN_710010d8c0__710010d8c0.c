// addr:      710010d8c0
// offset:    0x10d8c0
// name:      FUN_710010d8c0
// mangled:   
// signature: undefined FUN_710010d8c0(void)


undefined8 FUN_710010d8c0(long param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  int aiStack_a0 [4];
  int aiStack_90 [4];
  int aiStack_80 [4];
  int aiStack_70 [4];
  int aiStack_60 [4];
  int aiStack_50 [4];
  int aiStack_40 [4];
  undefined4 auStack_28 [2];
  
  piVar2 = aiStack_a0;
  iVar1 = FUN_7100146ba0(DAT_71052adb38);
  switch(iVar1) {
  case 5:
    puVar3 = *(undefined4 **)(param_1 + 0x58);
    aiStack_50[0] = 0xc406;
    nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)aiStack_50 | 4));
    auStack_28[0] = 0;
    nn::err::ErrorResultVariant::operator=
              ((ErrorResultVariant *)((ulong)aiStack_50 | 4),(Result *)auStack_28);
    FUN_71000bce50(aiStack_40,aiStack_50);
    piVar2 = aiStack_40;
    break;
  case 6:
    puVar3 = *(undefined4 **)(param_1 + 0x58);
    aiStack_50[0] = 0xa471;
    nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)aiStack_50 | 4));
    auStack_28[0] = 0;
    nn::err::ErrorResultVariant::operator=
              ((ErrorResultVariant *)((ulong)aiStack_50 | 4),(Result *)auStack_28);
    FUN_71000bce50(aiStack_60,aiStack_50);
    piVar2 = aiStack_60;
    break;
  case 7:
    puVar3 = *(undefined4 **)(param_1 + 0x58);
    aiStack_50[0] = 0xc420;
    nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)aiStack_50 | 4));
    auStack_28[0] = 0;
    nn::err::ErrorResultVariant::operator=
              ((ErrorResultVariant *)((ulong)aiStack_50 | 4),(Result *)auStack_28);
    FUN_71000bce50(aiStack_70,aiStack_50);
    piVar2 = aiStack_70;
    break;
  case 8:
    puVar3 = *(undefined4 **)(param_1 + 0x58);
    aiStack_50[0] = 0xc421;
    nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)aiStack_50 | 4));
    auStack_28[0] = 0;
    nn::err::ErrorResultVariant::operator=
              ((ErrorResultVariant *)((ulong)aiStack_50 | 4),(Result *)auStack_28);
    FUN_71000bce50(aiStack_80,aiStack_50);
    piVar2 = aiStack_80;
    break;
  default:
    puVar3 = *(undefined4 **)(param_1 + 0x58);
    if ((puVar3 == (undefined4 *)0x0) || (*(char *)(puVar3 + 10) == '\0')) {
      FUN_71000e29e0(aiStack_50,*(long *)(param_1 + 0x98),(int *)(param_1 + 0x60),
                     *(undefined4 *)(param_1 + 0x90),param_1 + 0xbe,*(uint *)(param_1 + 0x2c0));
      if (aiStack_50[0] == 0) {
        *(char **)(param_1 + 0x40) = "NexMatchUpdateSessionSettingJob::WaitUpdateApplicationData";
        *(code **)(param_1 + 0x30) = FUN_710010e8a0;
        *(undefined8 *)(param_1 + 0x38) = 0;
        return 5;
      }
      puVar3 = *(undefined4 **)(param_1 + 0x58);
      FUN_71000bce50(aiStack_a0,aiStack_50);
    }
    else {
      aiStack_50[0] = 0x6c05;
      nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)aiStack_50 | 4))
      ;
      auStack_28[0] = 0;
      nn::err::ErrorResultVariant::operator=
                ((ErrorResultVariant *)((ulong)aiStack_50 | 4),(Result *)auStack_28);
      FUN_71000bce50(aiStack_90,aiStack_50);
      piVar2 = aiStack_90;
    }
  }
  FUN_71000b41f0(puVar3,piVar2);
  *(undefined8 *)(param_1 + 0x58) = 0;
  return 1;
}

