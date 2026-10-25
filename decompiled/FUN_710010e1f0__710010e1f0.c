// addr:      710010e1f0
// offset:    0x10e1f0
// name:      FUN_710010e1f0
// mangled:   
// signature: undefined FUN_710010e1f0(void)


undefined8 FUN_710010e1f0(long *param_1)

{
  int iVar1;
  ulong uVar2;
  int *piVar3;
  code *pcVar4;
  undefined4 *puVar5;
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
    puVar5 = (undefined4 *)param_1[0xb];
    aiStack_50[0] = 0xc406;
    nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)aiStack_50 | 4));
    auStack_28[0] = 0;
    nn::err::ErrorResultVariant::operator=
              ((ErrorResultVariant *)((ulong)aiStack_50 | 4),(Result *)auStack_28);
    FUN_71000bce50(aiStack_40,aiStack_50);
    piVar3 = aiStack_40;
    break;
  case 6:
    puVar5 = (undefined4 *)param_1[0xb];
    aiStack_50[0] = 0xa471;
    nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)aiStack_50 | 4));
    auStack_28[0] = 0;
    nn::err::ErrorResultVariant::operator=
              ((ErrorResultVariant *)((ulong)aiStack_50 | 4),(Result *)auStack_28);
    FUN_71000bce50(aiStack_60,aiStack_50);
    piVar3 = aiStack_60;
    break;
  case 7:
    puVar5 = (undefined4 *)param_1[0xb];
    aiStack_50[0] = 0xc420;
    nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)aiStack_50 | 4));
    auStack_28[0] = 0;
    nn::err::ErrorResultVariant::operator=
              ((ErrorResultVariant *)((ulong)aiStack_50 | 4),(Result *)auStack_28);
    FUN_71000bce50(aiStack_70,aiStack_50);
    piVar3 = aiStack_70;
    break;
  case 8:
    puVar5 = (undefined4 *)param_1[0xb];
    aiStack_50[0] = 0xc421;
    nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)aiStack_50 | 4));
    auStack_28[0] = 0;
    nn::err::ErrorResultVariant::operator=
              ((ErrorResultVariant *)((ulong)aiStack_50 | 4),(Result *)auStack_28);
    FUN_71000bce50(aiStack_80,aiStack_50);
    piVar3 = aiStack_80;
    break;
  default:
    puVar5 = (undefined4 *)param_1[0xb];
    if ((puVar5 == (undefined4 *)0x0) || (*(char *)(puVar5 + 10) == '\0')) {
      uVar2 = FUN_71000e64a0(param_1[0x13]);
      if ((uVar2 & 1) != 0) {
        if ((int)param_1[0xc] == 2) {
          if (*(char *)((long)param_1 + 0x2c4) != '\0') {
            if ((int)param_1[0x12] ==
                *(int *)(DAT_71052adb38 + (ulong)*(byte *)(DAT_71052adb38 + 0x162) * 4 + 0x180)) {
              pcVar4 = *(code **)(*param_1 + 0x40);
            }
            else {
              if ((int)param_1[0x12] !=
                  *(int *)(DAT_71052adb38 + (ulong)(*(byte *)(DAT_71052adb38 + 0x162) == 0) * 4 +
                          0x180)) goto LAB_710010e440;
              pcVar4 = *(code **)(*param_1 + 0x48);
            }
            (*pcVar4)(param_1,1);
          }
LAB_710010e440:
          param_1[6] = (long)FUN_71001512e0;
          param_1[7] = 0;
          param_1[8] = (long)"UpdateSessionSettingJob::CompleteProcess";
          return 0;
        }
        if ((int)param_1[0xc] == 3) {
          puVar5 = (undefined4 *)param_1[0xb];
          FUN_71000bce50(aiStack_a0,(int *)((long)param_1 + 100));
          break;
        }
      }
      return 5;
    }
    aiStack_50[0] = 0x6c05;
    nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)aiStack_50 | 4));
    auStack_28[0] = 0;
    nn::err::ErrorResultVariant::operator=
              ((ErrorResultVariant *)((ulong)aiStack_50 | 4),(Result *)auStack_28);
    FUN_71000bce50(aiStack_90,aiStack_50);
    piVar3 = aiStack_90;
  }
  FUN_71000b41f0(puVar5,piVar3);
  param_1[0xb] = 0;
  return 1;
}

