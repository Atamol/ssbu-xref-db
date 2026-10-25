// addr:      710011f3a0
// offset:    0x11f3a0
// name:      FUN_710011f3a0
// mangled:   
// signature: undefined FUN_710011f3a0(void)


undefined8 FUN_710011f3a0(long *param_1)

{
  int iVar1;
  ulong uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  int aiStack_60 [4];
  int aiStack_50 [4];
  int aiStack_40 [4];
  undefined4 auStack_28 [2];
  
  puVar4 = (undefined4 *)param_1[0xb];
  if ((puVar4 != (undefined4 *)0x0) && (*(char *)(puVar4 + 10) != '\0')) {
    aiStack_50[0] = 0x6c05;
    nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)aiStack_50 | 4));
    auStack_28[0] = 0;
    nn::err::ErrorResultVariant::operator=
              ((ErrorResultVariant *)((ulong)aiStack_50 | 4),(Result *)auStack_28);
    FUN_71000bce50(aiStack_40,aiStack_50);
    FUN_71000b41f0(puVar4,aiStack_40);
    param_1[0xb] = 0;
    (**(code **)(*param_1 + 0x30))(param_1);
    return 1;
  }
  aiStack_50[0] = 0;
  uVar2 = (**(code **)(*(long *)param_1[0x16] + 0x48))((long *)param_1[0x16],aiStack_50);
  if ((uVar2 & 1) != 0) {
    if ((int)param_1[0xc] == 2) {
      FUN_7100149270(DAT_71052adb38,aiStack_50[0]);
      FUN_710013dac0(param_1,1);
      if (*(int *)(DAT_71052adb38 + (ulong)*(byte *)(DAT_71052adb38 + 0x162) * 4 + 0x180) ==
          aiStack_50[0]) {
        uVar3 = 1;
        if ((char)param_1[0x17] == '\0') {
          uVar3 = 2;
        }
        FUN_7100149240(DAT_71052adb38,uVar3);
      }
      else {
        iVar1 = FUN_7100146f20(DAT_71052adb38);
        if (iVar1 == aiStack_50[0]) {
          uVar3 = 1;
          if ((char)param_1[0x17] == '\0') {
            uVar3 = 2;
          }
          FUN_7100149250(DAT_71052adb38,uVar3);
        }
      }
      param_1[6] = (long)FUN_710013d410;
      param_1[7] = 0;
      param_1[8] = (long)"CreateSessionJob::MeshStartup";
      return 0;
    }
    if ((int)param_1[0xc] == 3) {
      puVar4 = (undefined4 *)param_1[0xb];
      FUN_71000bce50(aiStack_60,(int *)((long)param_1 + 100));
      FUN_71000b41f0(puVar4,aiStack_60);
      param_1[0xb] = 0;
      return 1;
    }
  }
  return 5;
}

