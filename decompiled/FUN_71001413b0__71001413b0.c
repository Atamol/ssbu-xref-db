// addr:      71001413b0
// offset:    0x1413b0
// name:      FUN_71001413b0
// mangled:   
// signature: undefined FUN_71001413b0(void)


undefined8 FUN_71001413b0(long *param_1)

{
  long lVar1;
  uint uVar2;
  int iVar3;
  long *plVar4;
  char *pcVar5;
  
  uVar2 = FUN_7100146ba0(DAT_71052adb38);
  lVar1 = DAT_71052ac580;
  if (uVar2 < 10 && (1 << (ulong)(uVar2 & 0x1f) & 0x3a0U) != 0) {
    (**(code **)(**(long **)(DAT_71052adb38 + 8) + 0x28))();
    param_1[6] = (long)FUN_71001411a0;
    param_1[7] = 0;
    pcVar5 = "nn::pia::session::LeaveSessionJob::SendMonitoringData";
  }
  else {
    if (2 < (int)param_1[0xc] - 2U) {
      return 5;
    }
    if ((char)param_1[0x13] != '\0') {
      (**(code **)(*param_1 + 0x38))(param_1);
      return 0;
    }
    iVar3 = (**(code **)(*param_1 + 0x70))(param_1);
    plVar4 = FUN_71000bb680();
    param_1[0x12] = *(long *)(lVar1 + 0x30) + *plVar4 * (long)iVar3;
    pcVar5 = "LeaveSessionJob::WaitHostMigrated";
    param_1[6] = (long)FUN_71001415a0;
    param_1[7] = 0;
  }
  param_1[8] = (long)pcVar5;
  return 0;
}

