// addr:      7103946710
// offset:    0x3946710
// name:      FUN_7103946710
// mangled:   
// signature: bool __cdecl FUN_7103946710(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


bool FUN_7103946710(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                   undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  bool bVar1;
  
  bVar1 = DAT_7106dd4f1d == '\x01';
  if (bVar1) {
    FUN_7103957550((byte *)"<jemalloc>: option background_thread currently supports pthread only\n",
                   param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  }
  return bVar1;
}

