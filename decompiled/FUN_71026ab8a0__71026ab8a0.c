// addr:      71026ab8a0
// offset:    0x26ab8a0
// name:      FUN_71026ab8a0
// mangled:   
// signature: undefined __cdecl FUN_71026ab8a0(undefined8 * param_1)


void FUN_71026ab8a0(undefined8 *param_1)

{
  ulong uVar1;
  
  *param_1 = &PTR_FUN_71050cd048;
  uVar1 = param_1[1];
  param_1[1] = 0;
  if (uVar1 != 0) {
    FUN_710392eb40(uVar1);
  }
  FUN_710392eb40((ulong)param_1);
  return;
}

