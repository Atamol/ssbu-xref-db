// addr:      710013d6f0
// offset:    0x13d6f0
// name:      FUN_710013d6f0
// mangled:   
// signature: ulong __cdecl FUN_710013d6f0(long * param_1)


ulong FUN_710013d6f0(long *param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  int aiStack_40 [4];
  int local_30 [4];
  
  FUN_71001917d0(local_30,DAT_71052adfc0,(int *)(param_1 + 0xc));
  if (local_30[0] == 0) {
    FUN_7100193380((long)DAT_71052adfc0,1);
    param_1[7] = 0;
    uVar2 = 0;
    uVar3 = 0;
    param_1[8] = (long)"CreateSessionJob::WaitCreateMesh";
    param_1[6] = (long)FUN_710013d7c0;
    uVar1 = 5;
  }
  else {
    (**(code **)(**(long **)(DAT_71052adb38 + 8) + 0x28))();
    FUN_71000bce50(aiStack_40,local_30);
    uVar1 = (**(code **)(*param_1 + 0x48))(param_1,aiStack_40);
    uVar2 = uVar1 & 0xffff0000;
    uVar3 = uVar1 & 0xff00;
    uVar1 = uVar1 & 0xff;
  }
  return uVar2 | uVar1 | uVar3;
}

