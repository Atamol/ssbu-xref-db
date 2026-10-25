// addr:      710013e0c0
// offset:    0x13e0c0
// name:      FUN_710013e0c0
// mangled:   
// signature: undefined8 __cdecl FUN_710013e0c0(long * param_1)


undefined8 FUN_710013e0c0(long *param_1)

{
  uint uVar1;
  int local_30 [4];
  
  uVar1 = FUN_7100146ba0(DAT_71052adb38);
  if (uVar1 < 10 && (1 << (ulong)(uVar1 & 0x1f) & 0x3a0U) != 0) {
    (**(code **)(**(long **)(DAT_71052adb38 + 8) + 0x28))();
    param_1[6] = (long)FUN_710013e030;
    param_1[7] = 0;
    param_1[8] = (long)"nn::pia::session::DestroySessionJob::SendMonitoringData";
    return 0;
  }
  FUN_7100193380((long)DAT_71052adfc0,1);
  if (((char)param_1[0x13] == '\0') &&
     (FUN_7100191a60(local_30,DAT_71052adfc0,(int *)(param_1 + 0xc)), local_30[0] == 0)) {
    param_1[8] = (long)"DestroySessionJob::WaitDestroyMesh";
    param_1[6] = (long)FUN_710013e1d0;
    param_1[7] = 0;
    return 5;
  }
  (**(code **)(*param_1 + 0x40))(param_1);
  return 0;
}

