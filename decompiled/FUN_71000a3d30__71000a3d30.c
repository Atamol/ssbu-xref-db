// addr:      71000a3d30
// offset:    0xa3d30
// name:      FUN_71000a3d30
// mangled:   
// signature: undefined __cdecl FUN_71000a3d30(long * param_1, long param_2)


void FUN_71000a3d30(long *param_1,long param_2)

{
  *(undefined4 *)(param_1 + 0xb) = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  *param_1 = (long)&PTR_FUN_7104f4a130;
  param_1[8] = (long)&DAT_7104f49d08;
  memset(param_1 + 0x11c,0,0x898);
  FUN_7100031850(param_1 + 0x263);
  *(undefined1 *)(param_1 + 0x26d) = 0;
  FUN_71000338f0(param_1 + 0x26e);
  param_1[0x298] = 0;
  param_1[0x297] = 0;
  param_1[0x296] = 0;
  param_1[0x295] = 0;
  param_1[0x299] = (long)&PTR_FUN_7104f49c08;
  FUN_7100031850(param_1 + 0x29a);
  FUN_71000338f0(param_1 + 0x2a3);
  param_1[0x2c9] = (long)(param_1 + 0x2c9);
  param_1[0x2ca] = (long)(param_1 + 0x2c9);
  param_1[0x2cb] = (long)(param_1 + 0x2cb);
  param_1[0x2cc] = (long)(param_1 + 0x2cb);
  param_1[0x2ce] = 0;
  param_1[0x2c7] = 0;
  *(undefined4 *)(param_1 + 0x2cf) = 0;
  param_1[0x2d5] = 0;
  param_1[0x2d4] = 0;
  param_1[0x2d3] = 0;
  nn::os::InitializeMutex((MutexType *)(param_1 + 0x2d8),false,0);
  nn::os::InitializeMutex((MutexType *)(param_1 + 0x2dc),false,0);
  nn::util::ReferSymbol("SDK MW+Nintendo+NintendoWare_Vfx-8_2_1-Release");
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x13] = 0;
  param_1[0x256] = 0;
  param_1[0x255] = 0;
                    /* WARNING: Could not recover jumptable at 0x0071000a3e78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x10))
            (param_1,*(undefined8 *)(param_2 + 0x10),*(undefined8 *)(param_2 + 0x18),param_2);
  return;
}

