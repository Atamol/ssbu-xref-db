// addr:      71001a41d0
// offset:    0x1a41d0
// name:      FUN_71001a41d0
// mangled:   
// signature: undefined8 __cdecl FUN_71001a41d0(long param_1)


undefined8 FUN_71001a41d0(long param_1)

{
  long *plVar1;
  
  if (*(char *)(param_1 + 0xbb) == '\0') {
    FUN_7100193180(DAT_71052adfc0,*(byte *)(param_1 + 0xb8));
    plVar1 = (long *)FUN_7100193580(DAT_71052adfc0);
    FUN_7100198450(plVar1,1,1);
  }
  *(char **)(param_1 + 0x40) = "ProcessJoinRequestJob::InitialStep";
  *(code **)(param_1 + 0x30) = FUN_71001a3920;
  *(undefined8 *)(param_1 + 0x38) = 0;
  return 0;
}

