// addr:      7100141b50
// offset:    0x141b50
// name:      FUN_7100141b50
// mangled:   
// signature: undefined8 __cdecl FUN_7100141b50(long * param_1)


undefined8 FUN_7100141b50(long *param_1)

{
  uint uVar1;
  int iVar2;
  long *plVar3;
  ulong uVar4;
  int local_30 [4];
  
  uVar1 = FUN_7100146ba0(DAT_71052adb38);
  if ((9 < uVar1 || (1 << (ulong)(uVar1 & 0x1f) & 0x3a0U) == 0) &&
     (iVar2 = FUN_7100146ba0(DAT_71052adb38), iVar2 != 6)) {
    uVar4 = (ulong)(*(char *)(DAT_71052adb38 + 0x162) == '\0');
    if (*(int *)(DAT_71052adb38 + uVar4 * 4 + 0x180) != 0) {
      plVar3 = *(long **)(DAT_71052adb38 + uVar4 * 8 + 0x168);
      (**(code **)(*plVar3 + 0x60))(local_30,plVar3,param_1 + 0xc);
      if (local_30[0] == 0) {
        param_1[8] = (long)"LeaveSessionJob::WaitLeaveBufferMatchmakeSession";
        param_1[6] = (long)FUN_7100141c80;
        param_1[7] = 0;
        return 5;
      }
      FUN_7100149290(DAT_71052adb38,0);
    }
    (**(code **)(*param_1 + 0x68))(param_1);
    return 0;
  }
  (**(code **)(**(long **)(DAT_71052adb38 + 8) + 0x28))();
  param_1[6] = (long)FUN_71001411a0;
  param_1[7] = 0;
  param_1[8] = (long)"nn::pia::session::LeaveSessionJob::SendMonitoringData";
  return 0;
}

