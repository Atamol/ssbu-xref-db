// addr:      7100141230
// offset:    0x141230
// name:      FUN_7100141230
// mangled:   
// signature: undefined8 __cdecl FUN_7100141230(long * param_1)


undefined8 FUN_7100141230(long *param_1)

{
  bool bVar1;
  uint uVar2;
  ulong uVar3;
  code *pcVar4;
  char *pcVar5;
  int local_40 [4];
  
  uVar2 = FUN_7100146ba0(DAT_71052adb38);
  if (uVar2 < 10 && (1 << (ulong)(uVar2 & 0x1f) & 0x3a0U) != 0) {
    (**(code **)(**(long **)(DAT_71052adb38 + 8) + 0x28))();
    param_1[6] = (long)FUN_71001411a0;
    param_1[7] = 0;
    param_1[8] = (long)"nn::pia::session::LeaveSessionJob::SendMonitoringData";
    return 0;
  }
  FUN_7100193380((long)DAT_71052adfc0,1);
  bVar1 = FUN_71001931d0((long)DAT_71052adfc0);
  if ((bVar1) && (uVar3 = FUN_7100146ed0(DAT_71052adb38), (uVar3 & 1) != 0)) {
    uVar2 = FUN_7100146be0(DAT_71052adb38);
    if ((uVar2 & 0xffff) == 1) {
      *(undefined1 *)(param_1 + 0x13) = 1;
    }
    FUN_7100192050(local_40,DAT_71052adfc0,(int *)(param_1 + 0xc));
    if (local_40[0] != 0) {
LAB_7100141350:
      (**(code **)(*param_1 + 0x38))(param_1);
      return 0;
    }
    pcVar4 = FUN_71001413b0;
    pcVar5 = "LeaveSessionJob::WaitLeaveMeshWithHostMigration";
  }
  else {
    FUN_7100192af0(local_40,(long)DAT_71052adfc0,(int *)(param_1 + 0xc));
    if (*(char *)(DAT_71052adb38 + 0x15d) != '\0') {
      *(undefined1 *)(DAT_71052adb38 + 0x15d) = 0;
    }
    if (local_40[0] != 0) goto LAB_7100141350;
    pcVar4 = FUN_71001414e0;
    pcVar5 = "LeaveSessionJob::WaitLeaveMesh";
  }
  param_1[6] = (long)pcVar4;
  param_1[7] = 0;
  param_1[8] = (long)pcVar5;
  return 5;
}

