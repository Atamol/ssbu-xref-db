// addr:      71026b0300
// offset:    0x26b0300
// name:      FUN_71026b0300
// mangled:   
// signature: undefined __cdecl FUN_71026b0300(undefined8 * param_1)


void FUN_71026b0300(undefined8 *param_1)

{
  ulong uVar1;
  
  *param_1 = &PTR_FUN_71050cdb80;
  uVar1 = param_1[1];
  param_1[1] = 0;
  if (uVar1 != 0) {
    FUN_710392eb40(uVar1);
    return;
  }
  return;
}

