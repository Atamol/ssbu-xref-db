// addr:      710011ca80
// offset:    0x11ca80
// name:      FUN_710011ca80
// mangled:   
// signature: undefined FUN_710011ca80(void)


undefined8 FUN_710011ca80(long *param_1)

{
  int iVar1;
  ulong uVar2;
  undefined8 uVar3;
  int *piVar4;
  undefined4 *puVar5;
  int aiStack_60 [4];
  int aiStack_50 [4];
  int aiStack_40 [4];
  undefined4 auStack_28 [2];
  
  piVar4 = aiStack_60;
  puVar5 = (undefined4 *)param_1[0xb];
  if ((puVar5 == (undefined4 *)0x0) || (*(char *)(puVar5 + 10) == '\0')) {
    uVar2 = (**(code **)(*(long *)param_1[0x27] + 0x58))();
    if ((uVar2 & 1) != 0) {
      iVar1 = (int)param_1[0xc];
      if (iVar1 == 2) {
        FUN_7100149270(DAT_71052adb38,*(int *)((long)param_1 + 0x114));
        FUN_710013f6f0(param_1,1);
        FUN_71000b40e0((undefined4 *)(param_1 + 0xc));
        param_1[6] = (long)FUN_710011cbb0;
        param_1[7] = 0;
        param_1[8] = (long)"LanMatchJoinSessionJob::GetStationLocation";
        return 0;
      }
      if (iVar1 == 3) {
        puVar5 = (undefined4 *)param_1[0xb];
        FUN_71000bce50(aiStack_60,(int *)((long)param_1 + 100));
        goto LAB_710011cb24;
      }
    }
    uVar3 = 5;
  }
  else {
    aiStack_50[0] = 0x6c05;
    nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)aiStack_50 | 4));
    auStack_28[0] = 0;
    nn::err::ErrorResultVariant::operator=
              ((ErrorResultVariant *)((ulong)aiStack_50 | 4),(Result *)auStack_28);
    FUN_71000bce50(aiStack_40,aiStack_50);
    piVar4 = aiStack_40;
LAB_710011cb24:
    FUN_71000b41f0(puVar5,piVar4);
    param_1[0xb] = 0;
    (**(code **)(*param_1 + 0x50))(param_1);
    uVar3 = 1;
  }
  return uVar3;
}

