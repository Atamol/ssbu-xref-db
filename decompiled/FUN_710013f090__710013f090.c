// addr:      710013f090
// offset:    0x13f090
// name:      FUN_710013f090
// mangled:   
// signature: undefined FUN_710013f090(void)


ulong FUN_710013f090(long *param_1)

{
  bool bVar1;
  byte bVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  int aiStack_40 [4];
  int aiStack_30 [4];
  
  aiStack_30[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)aiStack_30 | 4));
  aiStack_40[0] = 0;
  nn::err::ErrorResultVariant::operator=
            ((ErrorResultVariant *)((ulong)aiStack_30 | 4),(Result *)aiStack_40);
  bVar1 = FUN_71001931d0((long)DAT_71052adfc0);
  if (bVar1) {
    bVar2 = FUN_71001921a0((long)DAT_71052adfc0);
    if ((bVar2 & 1) == 0) {
      FUN_7100191ee0(aiStack_40,DAT_71052adfc0);
      FUN_71000bcf30(aiStack_30,aiStack_40);
      param_1[6] = (long)FUN_710013f1e0;
      param_1[7] = 0;
      param_1[8] = (long)"JoinSessionJob::WaitDestroyMesh";
    }
    else {
      FUN_71001921b0(aiStack_40,DAT_71052adfc0);
      FUN_71000bcf30(aiStack_30,aiStack_40);
      param_1[6] = (long)FUN_710013f260;
      param_1[7] = 0;
      param_1[8] = (long)"JoinSessionJob::WaitLeaveMeshWithHostMigration";
    }
  }
  else {
    FUN_7100192c30(aiStack_40,(long)DAT_71052adfc0);
    FUN_71000bcf30(aiStack_30,aiStack_40);
    param_1[6] = (long)FUN_710013f2e0;
    param_1[7] = 0;
    param_1[8] = (long)"JoinSessionJob::WaitLeaveMesh";
  }
  if (aiStack_30[0] == 0) {
    uVar3 = 0;
    uVar4 = 0;
    uVar5 = 5;
  }
  else {
    uVar5 = (**(code **)(*param_1 + 0x80))(param_1);
    uVar3 = uVar5 & 0xffff0000;
    uVar4 = uVar5 & 0xff00;
    uVar5 = uVar5 & 0xff;
  }
  return uVar3 | uVar5 | uVar4;
}

