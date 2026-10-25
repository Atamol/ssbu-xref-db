// addr:      7101e53a90
// offset:    0x1e53a90
// name:      FUN_7101e53a90
// mangled:   
// signature: undefined __cdecl FUN_7101e53a90(long param_1)


void FUN_7101e53a90(long param_1)

{
  FUN_7103771a80((long *)(param_1 + 0x30),1,1);
  FUN_7103778300(0x3f800000,*(long *)(param_1 + 0x20),0x7104412f1d);
  if (*(uint *)(param_1 + 0x16c) < 0x13) {
    *(undefined4 *)(param_1 + (long)(int)*(uint *)(param_1 + 0x16c) * 4 + 0x120) = 5;
    return;
  }
                    /* WARNING: Subroutine does not return */
  abort();
}

