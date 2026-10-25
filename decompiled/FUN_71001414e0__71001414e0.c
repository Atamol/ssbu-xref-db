// addr:      71001414e0
// offset:    0x1414e0
// name:      FUN_71001414e0
// mangled:   
// signature: undefined8 __cdecl FUN_71001414e0(long * param_1)


undefined8 FUN_71001414e0(long *param_1)

{
  uint uVar1;
  
  uVar1 = FUN_7100146ba0(DAT_71052adb38);
  if (uVar1 < 10 && (1 << (ulong)(uVar1 & 0x1f) & 0x3a0U) != 0) {
    (**(code **)(**(long **)(DAT_71052adb38 + 8) + 0x28))();
    param_1[6] = (long)FUN_71001411a0;
    param_1[7] = 0;
    param_1[8] = (long)"nn::pia::session::LeaveSessionJob::SendMonitoringData";
    return 0;
  }
  if ((int)param_1[0xc] - 2U < 3) {
    (**(code **)(*param_1 + 0x38))(param_1);
    return 0;
  }
  return 5;
}

