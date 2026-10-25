// addr:      710017a880
// offset:    0x17a880
// name:      FUN_710017a880
// mangled:   
// signature: undefined FUN_710017a880(void)


undefined8 FUN_710017a880(long *param_1)

{
  undefined4 *puVar1;
  int aiStack_40 [4];
  int aiStack_30 [4];
  
  if ((param_1[0xb] != 0) && (*(char *)(param_1[0xb] + 0x28) != '\0')) {
    (**(code **)(*param_1 + 0x30))(param_1);
    return 1;
  }
  (**(code **)(*(long *)param_1[0x14] + 0x40))(aiStack_30,(long *)param_1[0x14],param_1 + 0xc);
  if (aiStack_30[0] != 0) {
    puVar1 = (undefined4 *)param_1[0xb];
    FUN_71000bce50(aiStack_40,aiStack_30);
    FUN_71000b41f0(puVar1,aiStack_40);
    param_1[0xb] = 0;
    return 1;
  }
  param_1[8] = (long)"LocalMatchCreateSessionJob::WaitCreateLocalNetwork";
  param_1[6] = (long)FUN_710017a950;
  param_1[7] = 0;
  return 5;
}

