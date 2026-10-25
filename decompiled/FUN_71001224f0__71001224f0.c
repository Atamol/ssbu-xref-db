// addr:      71001224f0
// offset:    0x1224f0
// name:      FUN_71001224f0
// mangled:   
// signature: undefined FUN_71001224f0(void)


undefined8 FUN_71001224f0(long *param_1)

{
  int iVar1;
  undefined8 uVar2;
  ulong uVar3;
  int *piVar4;
  undefined4 *puVar5;
  int aiStack_70 [4];
  int aiStack_60 [4];
  int aiStack_50 [4];
  int aiStack_40 [4];
  undefined4 auStack_28 [2];
  
  piVar4 = aiStack_70;
  iVar1 = FUN_7100146ba0(DAT_71052adb38);
  if (iVar1 == 5) {
    puVar5 = (undefined4 *)param_1[0xb];
    aiStack_50[0] = 0xc406;
    nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)aiStack_50 | 4));
    auStack_28[0] = 0;
    nn::err::ErrorResultVariant::operator=
              ((ErrorResultVariant *)((ulong)aiStack_50 | 4),(Result *)auStack_28);
    FUN_71000bce50(aiStack_40,aiStack_50);
    piVar4 = aiStack_40;
LAB_710012255c:
    FUN_71000b41f0(puVar5,piVar4);
    param_1[0xb] = 0;
    uVar2 = 1;
  }
  else {
    puVar5 = (undefined4 *)param_1[0xb];
    if ((puVar5 != (undefined4 *)0x0) && (*(char *)(puVar5 + 10) != '\0')) {
      aiStack_50[0] = 0x6c05;
      nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)aiStack_50 | 4))
      ;
      auStack_28[0] = 0;
      nn::err::ErrorResultVariant::operator=
                ((ErrorResultVariant *)((ulong)aiStack_50 | 4),(Result *)auStack_28);
      FUN_71000bce50(aiStack_60,aiStack_50);
      FUN_71000b41f0(puVar5,aiStack_60);
      param_1[0xb] = 0;
      (**(code **)(*param_1 + 0x30))(param_1);
      return 1;
    }
    uVar3 = FUN_710011af80(param_1[0x13]);
    if ((uVar3 & 1) != 0) {
      if ((int)param_1[0xc] == 2) {
        if (((char)param_1[0x14] != '\0') &&
           ((int)param_1[0x12] ==
            *(int *)(DAT_71052adb38 + (ulong)*(byte *)(DAT_71052adb38 + 0x162) * 4 + 0x180))) {
          (**(code **)(*param_1 + 0x40))(param_1,1);
        }
        param_1[6] = (long)FUN_71001512e0;
        param_1[7] = 0;
        param_1[8] = (long)"UpdateSessionSettingJob::CompleteProcess";
        return 0;
      }
      if ((int)param_1[0xc] == 3) {
        puVar5 = (undefined4 *)param_1[0xb];
        FUN_71000bce50(aiStack_70,(int *)((long)param_1 + 100));
        goto LAB_710012255c;
      }
    }
    uVar2 = 5;
  }
  return uVar2;
}

