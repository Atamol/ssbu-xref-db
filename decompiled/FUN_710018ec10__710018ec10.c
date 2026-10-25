// addr:      710018ec10
// offset:    0x18ec10
// name:      FUN_710018ec10
// mangled:   
// signature: undefined8 __cdecl FUN_710018ec10(long param_1)


undefined8 FUN_710018ec10(long param_1)

{
  long lVar1;
  
  lVar1 = FUN_7100193580(DAT_71052adfc0);
  FUN_7100199b50(lVar1);
  lVar1 = FUN_7100193580(DAT_71052adfc0);
  FUN_710019b560(lVar1,param_1);
  *(undefined1 *)(param_1 + 0x78) = 1;
  *(code **)(param_1 + 0x30) = FUN_710018ec80;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(char **)(param_1 + 0x40) = "LeaveMeshJob::WaitLeaveResponse";
  return 5;
}

