// addr:      71002c55e0
// offset:    0x2c55e0
// name:      nninitStartup
// mangled:   
// signature: undefined __cdecl nninitStartup(void)


void nninitStartup(void)

{
  DAT_71052b6f18 = "percpu_arena:percpu,dirty_decay_ms:1";
  nn::os::GetHostArgc();
  nn::os::GetHostArgv();
  nn::fs::SetAllocator(FUN_710353c150,FUN_710353c1c0);
  return;
}

