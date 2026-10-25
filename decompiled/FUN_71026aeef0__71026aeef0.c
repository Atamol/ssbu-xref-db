// addr:      71026aeef0
// offset:    0x26aeef0
// name:      FUN_71026aeef0
// mangled:   
// signature: undefined __cdecl FUN_71026aeef0(undefined8 * param_1)


void FUN_71026aeef0(undefined8 *param_1)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar2 = param_1[1];
  *param_1 = &PTR_FUN_71050cda00;
  param_1[1] = 0;
  if (uVar2 != 0) {
    uVar1 = *(ulong *)(uVar2 + 0x18);
    if (uVar1 != 0) {
      *(ulong *)(uVar2 + 0x20) = uVar1;
      FUN_710392eb40(uVar1);
    }
    FUN_710392eb40(uVar2);
  }
  FUN_710392eb40((ulong)param_1);
  return;
}

