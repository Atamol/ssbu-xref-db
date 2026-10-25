// addr:      71026aeba0
// offset:    0x26aeba0
// name:      FUN_71026aeba0
// mangled:   
// signature: undefined __cdecl FUN_71026aeba0(undefined8 * param_1)


void FUN_71026aeba0(undefined8 *param_1)

{
  long *plVar1;
  
  *param_1 = &PTR_FUN_71050cd9e0;
  plVar1 = (long *)param_1[0x14];
  param_1[0x14] = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  param_1[6] = 0;
  return;
}

