// addr:      7101d19ad0
// offset:    0x1d19ad0
// name:      FUN_7101d19ad0
// mangled:   
// signature: undefined __cdecl FUN_7101d19ad0(long param_1)


void FUN_7101d19ad0(long param_1)

{
  long lVar1;
  
  if (*(int *)(param_1 + 0xcc) == 0) {
    FUN_7103778300(0x3f800000,*(long *)(*(long *)(param_1 + 0xd8) + 8),0x71042d64cd);
  }
  if (*(int *)(param_1 + 0xf8) < 10) {
    FUN_7103778300(0x3f800000,*(long *)(*(long *)(param_1 + 0xd8) + 8),0x710439d677);
    if (0x12 < *(uint *)(param_1 + 0xc4)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    lVar1 = param_1 + (long)(int)*(uint *)(param_1 + 0xc4) * 4;
    *(int *)(lVar1 + 0x78) = *(int *)(lVar1 + 0x78) + 1;
  }
  return;
}

