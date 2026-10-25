// addr:      710017a950
// offset:    0x17a950
// name:      FUN_710017a950
// mangled:   
// signature: undefined FUN_710017a950(void)


undefined8 FUN_710017a950(long *param_1)

{
  ulong uVar1;
  undefined4 *puVar2;
  int aiStack_38 [5];
  int iStack_24;
  
  if ((param_1[0xb] != 0) && (*(char *)(param_1[0xb] + 0x28) != '\0')) {
    (**(code **)(*param_1 + 0x30))(param_1);
    return 1;
  }
  iStack_24 = 0;
  uVar1 = (**(code **)(*(long *)param_1[0x14] + 0x48))((long *)param_1[0x14],&iStack_24);
  if ((uVar1 & 1) == 0) {
    return 5;
  }
  if ((int)param_1[0xc] != 2) {
    if ((int)param_1[0xc] == 3) {
      puVar2 = (undefined4 *)param_1[0xb];
      FUN_71000bce50(aiStack_38,(int *)((long)param_1 + 100));
      FUN_71000b41f0(puVar2,aiStack_38);
      param_1[0xb] = 0;
      return 1;
    }
    return 5;
  }
  FUN_7100149270(DAT_71052adb38,iStack_24);
  FUN_7100149240(DAT_71052adb38,1);
  FUN_710013dac0(param_1,1);
  param_1[6] = (long)FUN_710017aa80;
  param_1[7] = 0;
  param_1[8] = (long)"LocalMatchCreateSessionJob::StartLocalSession";
  return 0;
}

