// addr:      710017bea0
// offset:    0x17bea0
// name:      FUN_710017bea0
// mangled:   
// signature: undefined FUN_710017bea0(void)


undefined8 FUN_710017bea0(long *param_1)

{
  int iVar1;
  ulong uVar2;
  int *piVar3;
  undefined8 uVar4;
  code *pcVar5;
  undefined4 *puVar6;
  int aiStack_90 [4];
  int aiStack_80 [4];
  int aiStack_70 [4];
  int aiStack_60 [4];
  int aiStack_50 [4];
  int aiStack_40 [4];
  undefined4 auStack_28 [2];
  
  piVar3 = aiStack_90;
  iVar1 = FUN_7100146ba0(DAT_71052adb38);
  if (iVar1 == 8) {
    puVar6 = (undefined4 *)param_1[0xb];
    aiStack_50[0] = 0xc421;
    nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)aiStack_50 | 4));
    auStack_28[0] = 0;
    nn::err::ErrorResultVariant::operator=
              ((ErrorResultVariant *)((ulong)aiStack_50 | 4),(Result *)auStack_28);
    FUN_71000bce50(aiStack_70,aiStack_50);
    piVar3 = aiStack_70;
LAB_710017bf9c:
    FUN_71000b41f0(puVar6,piVar3);
    param_1[0xb] = 0;
    return 1;
  }
  if (iVar1 == 7) {
    puVar6 = (undefined4 *)param_1[0xb];
    aiStack_50[0] = 0xc420;
    nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)aiStack_50 | 4));
    auStack_28[0] = 0;
    nn::err::ErrorResultVariant::operator=
              ((ErrorResultVariant *)((ulong)aiStack_50 | 4),(Result *)auStack_28);
    FUN_71000bce50(aiStack_60,aiStack_50);
    piVar3 = aiStack_60;
    goto LAB_710017bf9c;
  }
  if (iVar1 == 5) {
    puVar6 = (undefined4 *)param_1[0xb];
    aiStack_50[0] = 0xc406;
    nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)aiStack_50 | 4));
    auStack_28[0] = 0;
    nn::err::ErrorResultVariant::operator=
              ((ErrorResultVariant *)((ulong)aiStack_50 | 4),(Result *)auStack_28);
    FUN_71000bce50(aiStack_40,aiStack_50);
    piVar3 = aiStack_40;
    goto LAB_710017bf9c;
  }
  puVar6 = (undefined4 *)param_1[0xb];
  if ((puVar6 != (undefined4 *)0x0) && (*(char *)(puVar6 + 10) != '\0')) {
    aiStack_50[0] = 0x6c05;
    nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)aiStack_50 | 4));
    auStack_28[0] = 0;
    nn::err::ErrorResultVariant::operator=
              ((ErrorResultVariant *)((ulong)aiStack_50 | 4),(Result *)auStack_28);
    FUN_71000bce50(aiStack_80,aiStack_50);
    piVar3 = aiStack_80;
    goto LAB_710017c008;
  }
  if ((int)param_1[0x14] == 1) {
    uVar2 = (**(code **)(*(long *)param_1[0x13] + 0x88))();
joined_r0x00710017c0a0:
    if ((uVar2 & 1) == 0) {
      return 5;
    }
  }
  else if ((int)param_1[0x14] == 2) {
    uVar2 = (**(code **)(*(long *)param_1[0x13] + 0x98))();
    goto joined_r0x00710017c0a0;
  }
  if ((int)param_1[0xc] == 1) {
    return 5;
  }
  if ((int)param_1[0x14] != 0) {
    FUN_71000bce50(aiStack_50,(int *)((long)param_1 + 100));
    if (aiStack_50[0] != 0) {
      puVar6 = (undefined4 *)param_1[0xb];
      FUN_71000bce50(aiStack_90,aiStack_50);
LAB_710017c008:
      FUN_71000b41f0(puVar6,piVar3);
      param_1[0xb] = 0;
      (**(code **)(*param_1 + 0x30))(param_1);
      return 1;
    }
    if ((int)param_1[0x14] == 2) {
      pcVar5 = *(code **)(*param_1 + 0x40);
      uVar4 = 2;
    }
    else {
      if ((int)param_1[0x14] != 1) goto LAB_710017c0e4;
      pcVar5 = *(code **)(*param_1 + 0x40);
      uVar4 = 1;
    }
    (*pcVar5)(param_1,uVar4);
  }
LAB_710017c0e4:
  param_1[6] = (long)FUN_71001512e0;
  param_1[7] = 0;
  param_1[8] = (long)"UpdateSessionSettingJob::CompleteProcess";
  return 0;
}

