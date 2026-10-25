// addr:      710013e1d0
// offset:    0x13e1d0
// name:      FUN_710013e1d0
// mangled:   
// signature: undefined8 __cdecl FUN_710013e1d0(long * param_1)


undefined8 FUN_710013e1d0(long *param_1)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = FUN_7100146ba0(DAT_71052adb38);
  if ((9 < uVar1 || (1 << (ulong)(uVar1 & 0x1f) & 0x3a0U) == 0) &&
     (iVar2 = FUN_7100146ba0(DAT_71052adb38), iVar2 != 6)) {
    if ((int)param_1[0xc] - 2U < 3) {
      (**(code **)(*param_1 + 0x40))(param_1);
      return 0;
    }
    return 5;
  }
  (**(code **)(**(long **)(DAT_71052adb38 + 8) + 0x28))();
  param_1[6] = (long)FUN_710013e030;
  param_1[7] = 0;
  param_1[8] = (long)"nn::pia::session::DestroySessionJob::SendMonitoringData";
  return 0;
}

