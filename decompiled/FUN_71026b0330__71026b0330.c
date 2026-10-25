// addr:      71026b0330
// offset:    0x26b0330
// name:      FUN_71026b0330
// mangled:   
// signature: undefined __cdecl FUN_71026b0330(undefined8 * param_1)


void FUN_71026b0330(undefined8 *param_1)

{
  ulong uVar1;
  
  *param_1 = &PTR_FUN_71050cdb80;
  uVar1 = param_1[1];
  param_1[1] = 0;
  if (uVar1 != 0) {
    FUN_710392eb40(uVar1);
  }
  FUN_710392eb40((ulong)param_1);
  return;
}

