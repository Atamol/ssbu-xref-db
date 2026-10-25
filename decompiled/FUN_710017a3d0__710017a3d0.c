// addr:      710017a3d0
// offset:    0x17a3d0
// name:      FUN_710017a3d0
// mangled:   
// signature: undefined FUN_710017a3d0(void)


undefined8 FUN_710017a3d0(long param_1)

{
  ulong uVar1;
  
  uVar1 = (**(code **)(**(long **)(DAT_71052adb38 + (ulong)*(byte *)(DAT_71052adb38 + 0x162) * 8 +
                                  0x168) + 0x68))();
  if ((uVar1 & 1) != 0) {
    FUN_71000b40e0((undefined4 *)(param_1 + 0x60));
    *(code **)(param_1 + 0x30) = FUN_710013e970;
    *(undefined8 *)(param_1 + 0x38) = 0;
    *(char **)(param_1 + 0x40) = "LocalMatchJoinSessionJob::CompleteFailure";
    return 0;
  }
  return 5;
}

