// addr:      7100179fc0
// offset:    0x179fc0
// name:      FUN_7100179fc0
// mangled:   
// signature: undefined FUN_7100179fc0(void)


undefined8 FUN_7100179fc0(long *param_1)

{
  ulong uVar1;
  long *plVar2;
  undefined4 *puVar3;
  int aiStack_40 [4];
  int aiStack_30 [4];
  
  uVar1 = (**(code **)(*param_1 + 0x48))();
  if ((uVar1 & 1) == 0) {
    plVar2 = *(long **)(DAT_71052adb38 + (ulong)*(byte *)(DAT_71052adb38 + 0x162) * 8 + 0x168);
    (**(code **)(*plVar2 + 0x50))
              (aiStack_30,plVar2,param_1 + 0xc,*(undefined4 *)((long)param_1 + 0x114));
    if (aiStack_30[0] == 0) {
      param_1[8] = (long)"LocalMatchJoinSessionJob::WaitJoinMatchmake";
      param_1[6] = (long)FUN_710017a0a0;
      param_1[7] = 0;
      return 5;
    }
    puVar3 = (undefined4 *)param_1[0xb];
    FUN_71000bce50(aiStack_40,aiStack_30);
    FUN_71000b41f0(puVar3,aiStack_40);
  }
  else {
    FUN_71000b4260((undefined4 *)param_1[0xb]);
  }
  param_1[0xb] = 0;
  (**(code **)(*param_1 + 0x50))(param_1);
  return 1;
}

