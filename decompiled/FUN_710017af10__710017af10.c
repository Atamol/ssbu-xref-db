// addr:      710017af10
// offset:    0x17af10
// name:      FUN_710017af10
// mangled:   
// signature: undefined8 __cdecl FUN_710017af10(long param_1)


undefined8 FUN_710017af10(long param_1)

{
  ulong uVar1;
  
  uVar1 = (**(code **)(**(long **)(DAT_71052adb38 + (ulong)*(byte *)(DAT_71052adb38 + 0x162) * 8 +
                                  0x168) + 0x78))();
  if ((uVar1 & 1) == 0) {
    return 5;
  }
  FUN_7100149270(DAT_71052adb38,0);
  if ((*(int *)(param_1 + 0x60) != 2) && (*(int *)(param_1 + 0x60) != 3)) {
    return 5;
  }
  *(code **)(param_1 + 0x30) = FUN_710013e030;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(char **)(param_1 + 0x40) = "LocalMatchDestroySessionJob::SendMonitoringData";
  return 0;
}

