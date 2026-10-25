// addr:      7101986cb0
// offset:    0x1986cb0
// name:      FUN_7101986cb0
// mangled:   
// signature: undefined __cdecl FUN_7101986cb0(long param_1)


void FUN_7101986cb0(long param_1)

{
  FUN_7103778300(0x3f800000,*(long *)(param_1 + 0x18),0x710438c1a5);
  if (*(uint *)(param_1 + 0x43c) < 0x13) {
    *(undefined4 *)(param_1 + (long)(int)*(uint *)(param_1 + 0x43c) * 4 + 0x3f0) = 6;
    return;
  }
                    /* WARNING: Subroutine does not return */
  abort();
}

