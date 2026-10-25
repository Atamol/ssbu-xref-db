// addr:      71000d5250
// offset:    0xd5250
// name:      FUN_71000d5250
// mangled:   
// signature: undefined FUN_71000d5250(void)


undefined8 FUN_71000d5250(long *param_1)

{
  ulong uVar1;
  
  (**(code **)(*param_1 + 0x10))(param_1,1);
  param_1[6] = (long)FUN_7100189f10;
  param_1[7] = 0;
  param_1[8] = (long)"NexJoinMeshJob::SetupLocalPlayerInfo";
  uVar1 = (**(code **)(*DAT_71052acd90 + 0x58))();
  if ((uVar1 & 1) != 0) {
    DAT_71052ac680 = 0xffffffff;
    DAT_71052ac608 = 0xffffffffffffffff;
    DAT_71052ac610 = 0xffffffff;
    DAT_71052ac614 = 0xffffffffffffffff;
    DAT_71052ac61c = 0xffffffffffffffff;
  }
  return 1;
}

