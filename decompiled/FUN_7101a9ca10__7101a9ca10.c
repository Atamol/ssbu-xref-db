// addr:      7101a9ca10
// offset:    0x1a9ca10
// name:      FUN_7101a9ca10
// mangled:   
// signature: undefined __cdecl FUN_7101a9ca10(long param_1)


void FUN_7101a9ca10(long param_1)

{
  if (*(int *)(param_1 + 0x1dc) == 0) {
    FUN_7103778300(0x3f800000,*(long *)(**(long **)(param_1 + 0x1f0) + 0x10),0x71042b4521);
    if (0x12 < *(uint *)(param_1 + 0x1d4)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(undefined4 *)(param_1 + (long)(int)*(uint *)(param_1 + 0x1d4) * 4 + 0x188) = 3;
  }
  return;
}

