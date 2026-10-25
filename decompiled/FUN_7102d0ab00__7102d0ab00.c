// addr:      7102d0ab00
// offset:    0x2d0ab00
// name:      FUN_7102d0ab00
// mangled:   
// signature: undefined __cdecl FUN_7102d0ab00(long * param_1, undefined8 param_2, undefined8 param_3)


void FUN_7102d0ab00(long *param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x007102d0ab10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x20))(param_1,param_3,0);
  return;
}

