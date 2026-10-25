// addr:      71039584f0
// offset:    0x39584f0
// name:      FUN_71039584f0
// mangled:   
// signature: undefined __cdecl FUN_71039584f0(void)


void FUN_71039584f0(void)

{
  bool bVar1;
  
  bVar1 = FUN_7103958560();
  if ((bVar1) && (DAT_7106d4b579 == '\x01')) {
    FUN_71039545b0("<jemalloc>: no MADV_HUGEPAGE support\n");
                    /* WARNING: Subroutine does not return */
    abort();
  }
  DAT_7106dd4fcc = 1;
  DAT_7106dd4fd0 = 3;
  return;
}

