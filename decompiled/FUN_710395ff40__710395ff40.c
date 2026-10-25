// addr:      710395ff40
// offset:    0x395ff40
// name:      FUN_710395ff40
// mangled:   
// signature: undefined __cdecl FUN_710395ff40(void)


void FUN_710395ff40(void)

{
  undefined1 local_1838 [6160];
  undefined1 *local_28;
  
  local_28 = (undefined1 *)FUN_710395f790();
  if (local_28 == (undefined1 *)0x0) {
    FUN_71039545b0("<jemalloc>: Error allocating TSD\n");
                    /* WARNING: Subroutine does not return */
    abort();
  }
  DAT_7105297238 = 0;
  FUN_710395fb40(&DAT_7105297240);
  *local_28 = 0;
  memset(local_1838,0,0x1810);
  local_1838[0] = 5;
  memcpy(local_28 + 8,local_1838,0x1810);
  FUN_710395f7c0(local_28);
  return;
}

