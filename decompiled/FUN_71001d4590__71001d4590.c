// addr:      71001d4590
// offset:    0x1d4590
// name:      FUN_71001d4590
// mangled:   
// signature: undefined8 __cdecl FUN_71001d4590(long param_1)


undefined8 FUN_71001d4590(long param_1)

{
  ulong local_18;
  
  if (*(int *)(param_1 + 0x28) == 2) {
    *(undefined4 *)(param_1 + 0x28) = 2;
    *(undefined8 *)(param_1 + 0x20) = 0;
    if (DAT_7104f54e20 == '\0') {
      FUN_71001b6a50((long *)&local_18);
    }
    else {
      FUN_71001b68a0(&local_18,0);
    }
    DAT_71052aeba8 = local_18;
    *(undefined4 *)(param_1 + 0x28) = 0;
    *(ulong *)(param_1 + 0x18) = local_18 - *(long *)(param_1 + 0x10);
    return 1;
  }
  FUN_71001b1300("C:/home/ws/hac-appc2/Pack/7923402a/OnlineCore/src/Core/Chrono.cpp",0x2f,0xe000000e
                 ,0);
  return 0;
}

