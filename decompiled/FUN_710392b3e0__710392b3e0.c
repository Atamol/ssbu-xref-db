// addr:      710392b3e0
// offset:    0x392b3e0
// name:      FUN_710392b3e0
// mangled:   
// signature: undefined1 * __cdecl FUN_710392b3e0(byte param_1)


undefined1 * FUN_710392b3e0(byte param_1)

{
  undefined1 local_1868 [6160];
  long alStack_58 [3];
  undefined1 *local_40;
  undefined1 *local_38;
  byte local_2c;
  
  local_2c = param_1 & 1;
  local_38 = (undefined1 *)FUN_7103960150(DAT_7106dd50b0);
  if (((local_2c & 1) != 0) && (local_38 == (undefined1 *)0x0)) {
    local_38 = (undefined1 *)FUN_710395f620((long *)&DAT_7105297198,alStack_58);
    if (local_38 != (undefined1 *)0x0) {
      return local_38;
    }
    local_40 = (undefined1 *)FUN_710395f790();
    local_38 = local_40;
    if (local_40 == (undefined1 *)0x0) {
      FUN_71039545b0("<jemalloc>: Error allocating TSD\n");
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *local_40 = 0;
    memset(local_1868,0,0x1810);
    local_1868[0] = 5;
    memcpy(local_38 + 8,local_1868,0x1810);
    FUN_710392b500(local_38);
    FUN_710395f7f0((long *)&DAT_7105297198,alStack_58);
  }
  return local_38;
}

