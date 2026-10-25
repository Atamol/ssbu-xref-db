// addr:      710392a070
// offset:    0x392a070
// name:      FUN_710392a070
// mangled:   
// signature: undefined1 __cdecl FUN_710392a070(undefined8 param_1, undefined8 param_2, long * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


undefined1
FUN_710392a070(undefined8 param_1,undefined8 param_2,long ****param_3,byte ****param_4,
              long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined1 local_11;
  
  DAT_7106d4b578 = 1;
  FUN_710392a220(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  if (((DAT_7106dd4fd4 == '\x01') && (iVar3 = atexit(FUN_710392b180), iVar3 != 0)) &&
     (FUN_71039545b0("<jemalloc>: Error in atexit()\n"), DAT_7106d4b579 == '\x01')) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  bVar1 = FUN_7103958460();
  if ((bVar1 & 1) == 0) {
    bVar2 = FUN_7103946280();
    if (bVar2) {
      local_11 = 1;
    }
    else {
      bVar1 = FUN_7103944150();
      if ((bVar1 & 1) == 0) {
        bVar2 = FUN_7103951030();
        if (bVar2) {
          local_11 = 1;
        }
        else {
          FUN_7103936550();
          bVar1 = FUN_710395eb80();
          if ((bVar1 & 1) == 0) {
            bVar1 = FUN_7103957a50((undefined8 *)&DAT_7106d434a8,"arenas",3,0);
            if ((bVar1 & 1) == 0) {
              DAT_7106d434a4 = 1;
              memset(&DAT_7106d43580,0,8);
              puVar4 = FUN_7103929e50(0,0,&PTR_FUN_71052945a0);
              if (puVar4 == (undefined4 *)0x0) {
                local_11 = 1;
              }
              else {
                DAT_7106d4b580 = FUN_7103927f10(0,0,0);
                DAT_71052944c0 = 2;
                local_11 = 0;
              }
            }
            else {
              local_11 = 1;
            }
          }
          else {
            local_11 = 1;
          }
        }
      }
      else {
        local_11 = 1;
      }
    }
  }
  else {
    local_11 = 1;
  }
  return local_11;
}

