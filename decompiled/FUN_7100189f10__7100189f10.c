// addr:      7100189f10
// offset:    0x189f10
// name:      FUN_7100189f10
// mangled:   
// signature: undefined FUN_7100189f10(void)


undefined8 FUN_7100189f10(long *param_1)

{
  int aiStack_30 [4];
  
  FUN_71001937b0(aiStack_30,DAT_71052adfc0);
  if (aiStack_30[0] == 0) {
    (**(code **)(*param_1 + 0x40))(param_1);
  }
  else {
    param_1[6] = (long)FUN_7100189f80;
    param_1[7] = 0;
    param_1[8] = (long)"JoinMeshJob::SetupLocalPlayerInfoFailure";
  }
  return 6;
}

