// addr:      71001a38a0
// offset:    0x1a38a0
// name:      FUN_71001a38a0
// mangled:   
// signature: undefined8 __cdecl FUN_71001a38a0(long * param_1)


undefined8 FUN_71001a38a0(long *param_1)

{
  long lVar1;
  
  lVar1 = FUN_7100193580(DAT_71052adfc0);
  FUN_710019b540(lVar1,param_1);
  *(undefined1 *)(param_1 + 0x17) = 0xfd;
  *(undefined8 *)((long)param_1 + 100) = 0;
  *(undefined8 *)((long)param_1 + 0x6c) = 0;
  *(undefined1 *)((long)param_1 + 0xbb) = 0;
  (**(code **)(*param_1 + 0x10))(param_1,1);
  param_1[8] = (long)"ProcessJoinRequestJob::InitialStep";
  param_1[6] = (long)FUN_71001a3920;
  param_1[7] = 0;
  return 1;
}

