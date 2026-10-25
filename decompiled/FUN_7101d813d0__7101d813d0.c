// addr:      7101d813d0
// offset:    0x1d813d0
// name:      FUN_7101d813d0
// mangled:   
// signature: undefined __cdecl FUN_7101d813d0(long param_1)


void FUN_7101d813d0(long param_1)

{
  long lVar1;
  
  lVar1 = **(long **)(param_1 + 0x1e8);
  FUN_7103778300(0x3f800000,*(long *)(lVar1 + 0x10),0x710439d7d9);
  FUN_7103778300(0x3f800000,*(long *)(lVar1 + 0x10),0x7104421055);
  if (*(uint *)(param_1 + 0x1d4) < 0x13) {
    *(undefined4 *)(param_1 + (long)(int)*(uint *)(param_1 + 0x1d4) * 4 + 0x188) = 0x13;
    return;
  }
                    /* WARNING: Subroutine does not return */
  abort();
}

