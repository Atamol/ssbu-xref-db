// addr:      71001852f0
// offset:    0x1852f0
// name:      FUN_71001852f0
// mangled:   
// signature: undefined FUN_71001852f0(void)


undefined8 FUN_71001852f0(long param_1)

{
  int iVar1;
  long lVar2;
  int aiStack_58 [4];
  undefined **appuStack_48 [5];
  
  lVar2 = *(long *)(param_1 + 0x178);
  if (0 < *(int *)(param_1 + 0x188)) {
    iVar1 = 0;
    if (*(int *)(param_1 + 0x180) <= *(int *)(param_1 + 0x184)) {
      iVar1 = *(int *)(param_1 + 0x180);
    }
    lVar2 = lVar2 + (long)(*(int *)(param_1 + 0x184) - iVar1) * 0x28;
  }
  FUN_71000be940(appuStack_48,lVar2);
  if (0 < *(int *)(param_1 + 0x188)) {
    iVar1 = 0;
    if (*(int *)(param_1 + 0x184) + 1 < *(int *)(param_1 + 0x180)) {
      iVar1 = *(int *)(param_1 + 0x184) + 1;
    }
    *(int *)(param_1 + 0x184) = iVar1;
    *(int *)(param_1 + 0x188) = *(int *)(param_1 + 0x188) + -1;
  }
  FUN_7100185590(aiStack_58,*(long **)(param_1 + 0x58),(undefined4 *)(param_1 + 400),
                 (long)appuStack_48);
  FUN_71000b4820(*(long *)(param_1 + 0x58),1);
  *(char **)(param_1 + 0x40) = "LocalEjectClientListCheckJob::WaitEjectTargetClient";
  *(code **)(param_1 + 0x30) = FUN_71001853d0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  appuStack_48[0] = &PTR_FUN_7104f4a808;
  FUN_71000b1cf0();
  return 5;
}

