// addr:      7101e53b60
// offset:    0x1e53b60
// name:      FUN_7101e53b60
// mangled:   
// signature: undefined __cdecl FUN_7101e53b60(long param_1)


void FUN_7101e53b60(long param_1)

{
  FUN_7103771a80((long *)(param_1 + 0x38),0,1);
  FUN_7103778300(0x3f800000,*(long *)(param_1 + 0x20),0x71042a365e);
  if (*(uint *)(param_1 + 0x16c) < 0x13) {
    *(undefined4 *)(param_1 + (long)(int)*(uint *)(param_1 + 0x16c) * 4 + 0x120) = 4;
    return;
  }
                    /* WARNING: Subroutine does not return */
  abort();
}

