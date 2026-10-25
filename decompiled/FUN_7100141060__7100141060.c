// addr:      7100141060
// offset:    0x141060
// name:      FUN_7100141060
// mangled:   
// signature: undefined8 __cdecl FUN_7100141060(long * param_1)


undefined8 FUN_7100141060(long *param_1)

{
  long lVar1;
  uint uVar2;
  int iVar3;
  ulong uVar4;
  
  uVar2 = FUN_7100146ba0(DAT_71052adb38);
  lVar1 = DAT_71052adb38;
  if (uVar2 < 10 && (1 << (ulong)(uVar2 & 0x1f) & 0x3a0U) != 0) {
    (**(code **)(**(long **)(DAT_71052adb38 + 8) + 0x28))();
    param_1[6] = (long)FUN_71001411a0;
    param_1[7] = 0;
    param_1[8] = (long)"nn::pia::session::LeaveSessionJob::SendMonitoringData";
    return 0;
  }
  if ((*(long *)(DAT_71052adb38 + 0x70) != 0) &&
     (uVar2 = FUN_71000b4990(*(long *)(DAT_71052adb38 + 0x70)), (uVar2 & 1) != 0)) {
    return 5;
  }
  if (*(long *)(lVar1 + 0x10) != 0) {
    uVar2 = FUN_71000b4990(*(long *)(lVar1 + 0x10));
    if (((uVar2 & 1) != 0) && (iVar3 = FUN_71000b4920(*(long *)(lVar1 + 0x10)), iVar3 != 2)) {
      return 5;
    }
    FUN_710014fde0(*(long **)(lVar1 + 0x10));
  }
  uVar4 = FUN_7100146ed0(lVar1);
  if ((((uVar4 & 1) != 0) && (uVar4 = FUN_7100146e20(lVar1), (uVar4 & 1) != 0)) &&
     (*(int *)(lVar1 + 0xd4) == 4)) {
    (**(code **)(*param_1 + 0x30))(param_1);
    return 0;
  }
  param_1[6] = (long)FUN_7100141230;
  param_1[7] = 0;
  param_1[8] = (long)"LeaveSessionJob::LeaveMesh";
  return 0;
}

