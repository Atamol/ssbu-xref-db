// addr:      71001417f0
// offset:    0x1417f0
// name:      FUN_71001417f0
// mangled:   
// signature: undefined FUN_71001417f0(void)


undefined8 FUN_71001417f0(long *param_1)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  code *pcVar4;
  long *plVar5;
  int aiStack_40 [4];
  
  uVar1 = FUN_7100146ba0(DAT_71052adb38);
  if ((uVar1 < 10 && (1 << (ulong)(uVar1 & 0x1f) & 0x3a0U) != 0) ||
     (iVar2 = FUN_7100146ba0(DAT_71052adb38), iVar2 == 6)) {
    (**(code **)(**(long **)(DAT_71052adb38 + 8) + 0x28))();
    param_1[6] = (long)FUN_71001411a0;
    param_1[7] = 0;
    param_1[8] = (long)"nn::pia::session::LeaveSessionJob::SendMonitoringData";
  }
  else {
    plVar5 = *(long **)(DAT_71052adb38 + (ulong)*(byte *)(DAT_71052adb38 + 0x162) * 8 + 0x168);
    uVar3 = (**(code **)(*param_1 + 0x58))(param_1);
    if ((uVar3 & 1) == 0) {
      (**(code **)(*plVar5 + 0x60))
                (aiStack_40,plVar5,param_1 + 0xc,
                 *(undefined4 *)
                  (DAT_71052adb38 + (ulong)*(byte *)(DAT_71052adb38 + 0x162) * 4 + 0x180));
      if (aiStack_40[0] == 0) {
        param_1[8] = (long)"LeaveSessionJob::WaitLeaveCurrentMatchmakeSession";
        param_1[6] = (long)FUN_7100141920;
        param_1[7] = 0;
        return 5;
      }
      pcVar4 = *(code **)(*param_1 + 0x50);
    }
    else {
      pcVar4 = *(code **)(*param_1 + 0x48);
    }
    (*pcVar4)(param_1);
  }
  return 0;
}

