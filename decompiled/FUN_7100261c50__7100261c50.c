// addr:      7100261c50
// offset:    0x261c50
// name:      FUN_7100261c50
// mangled:   
// signature: undefined __cdecl FUN_7100261c50(undefined8 * param_1)


void FUN_7100261c50(undefined8 *param_1)

{
  FUN_7100234fb0(param_1,0x73);
  *param_1 = &PTR_FUN_7104f5e8c0;
  param_1[4] = &PTR_FUN_7104f5ec68;
  FUN_710028c010(param_1 + 5,0x73);
  *(undefined4 *)(param_1 + 0x18) = 0x10;
  *(undefined1 *)((long)param_1 + 0xc4) = 1;
  param_1[0x19] = 0xea60000000a7;
  param_1[0x1a] = 0x4000;
  *param_1 = &DAT_7104f5e1a8;
  param_1[0x17] = &DAT_7104f5e7f0;
  param_1[4] = &DAT_7104f5e650;
  param_1[0x1b] = 0x8000;
  param_1[0x1c] = 0x10000;
  param_1[0x1d] = 0x10000;
  nn::util::ReferSymbol("SDK MW+Nintendo+NEX_DS-4_6_13");
  return;
}

