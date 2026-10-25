// addr:      710017b180
// offset:    0x17b180
// name:      FUN_710017b180
// mangled:   
// signature: undefined FUN_710017b180(void)


undefined8 FUN_710017b180(long *param_1)

{
  undefined4 *puVar1;
  int aiStack_40 [4];
  int aiStack_30 [4];
  
  if (*(int *)param_1[0xb] == 4) {
    (**(code **)(*param_1 + 0x30))(param_1);
    return 1;
  }
  (**(code **)(*(long *)param_1[0x13] + 0x28))(aiStack_30,(long *)param_1[0x13],param_1 + 0xd);
  if (aiStack_30[0] != 0) {
    puVar1 = (undefined4 *)param_1[0xb];
    if (puVar1 != (undefined4 *)0x0) {
      FUN_71000bce50(aiStack_40,aiStack_30);
      FUN_71000b41f0(puVar1,aiStack_40);
      param_1[0xb] = 0;
      return 1;
    }
    return 1;
  }
  param_1[6] = (long)FUN_710017b260;
  param_1[7] = 0;
  param_1[8] = (long)"LocalMatchBrowseMatchmakeJob::WaitBrowseMatchmake";
  return 0;
}

