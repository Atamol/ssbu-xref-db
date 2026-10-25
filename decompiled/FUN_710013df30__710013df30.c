// addr:      710013df30
// offset:    0x13df30
// name:      FUN_710013df30
// mangled:   
// signature: undefined8 __cdecl FUN_710013df30(long param_1)


undefined8 FUN_710013df30(long param_1)

{
  long lVar1;
  uint uVar2;
  long lVar3;
  
  uVar2 = FUN_7100146ba0(DAT_71052adb38);
  lVar1 = DAT_71052adb38;
  if (uVar2 < 10 && (1 << (ulong)(uVar2 & 0x1f) & 0x3a0U) != 0) {
    (**(code **)(**(long **)(DAT_71052adb38 + 8) + 0x28))();
    *(code **)(param_1 + 0x30) = FUN_710013e030;
    *(undefined8 *)(param_1 + 0x38) = 0;
    *(char **)(param_1 + 0x40) = "nn::pia::session::DestroySessionJob::SendMonitoringData";
    return 0;
  }
  if ((*(long *)(DAT_71052adb38 + 0x70) != 0) &&
     (uVar2 = FUN_71000b4990(*(long *)(DAT_71052adb38 + 0x70)), (uVar2 & 1) != 0)) {
    *(undefined1 *)(param_1 + 0x98) = 1;
    return 5;
  }
  lVar3 = *(long *)(lVar1 + 0x10);
  if (lVar3 != 0) {
    uVar2 = FUN_71000b4990(lVar3);
    if ((uVar2 & 1) != 0) {
      return 5;
    }
    FUN_710014fde0(*(long **)(lVar1 + 0x10));
  }
  *(code **)(param_1 + 0x30) = FUN_710013e0c0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(char **)(param_1 + 0x40) = "DestroySessionJob::DestroyMesh";
  return 0;
}

