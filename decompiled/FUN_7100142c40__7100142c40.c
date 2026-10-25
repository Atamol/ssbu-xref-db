// addr:      7100142c40
// offset:    0x142c40
// name:      FUN_7100142c40
// mangled:   
// signature: undefined FUN_7100142c40(void)


ulong FUN_7100142c40(long *param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  int aiStack_40 [4];
  int aiStack_30 [4];
  
  FUN_71001918f0(aiStack_30,DAT_71052adfc0);
  if (aiStack_30[0] == 0) {
    FUN_7100193380((long)DAT_71052adfc0,1);
    param_1[7] = 0;
    uVar2 = 0;
    uVar3 = 0;
    param_1[8] = (long)"RandomMatchmakeJob::WaitCreateMesh";
    param_1[6] = (long)FUN_7100142d10;
    uVar1 = 5;
  }
  else {
    (**(code **)(**(long **)(DAT_71052adb38 + 8) + 0x28))();
    FUN_71000bce50(aiStack_40,aiStack_30);
    uVar1 = (**(code **)(*param_1 + 0x78))(param_1,aiStack_40);
    uVar2 = uVar1 & 0xffff0000;
    uVar3 = uVar1 & 0xff00;
    uVar1 = uVar1 & 0xff;
  }
  return uVar2 | uVar1 | uVar3;
}

