// addr:      71002aa1f0
// offset:    0x2aa1f0
// name:      FUN_71002aa1f0
// mangled:   
// signature: undefined __cdecl FUN_71002aa1f0(undefined8 * param_1)


void FUN_71002aa1f0(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  param_1[2] = 0;
  *param_1 = &PTR_FUN_7104f60fa0;
  param_1[1] = &PTR_FUN_7104f61718;
  puVar1 = FUN_71001b1820(4);
  param_1[3] = &PTR_FUN_7104f61758;
  puVar2 = FUN_71001af850(0x20);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &PTR_FUN_7104f55998;
    *(undefined4 *)(puVar2 + 1) = 1;
    *(undefined4 *)((long)puVar2 + 0xc) = 1;
    puVar2[2] = puVar1;
    *puVar2 = &PTR_FUN_7104f61798;
  }
  param_1[4] = puVar2;
  puVar1 = FUN_71001af850(8);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_7104f60968;
  }
  param_1[5] = puVar1;
  *(undefined4 *)(param_1 + 6) = 0x10;
  param_1[9] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 10) = 0;
  nn::util::ReferSymbol("SDK MW+Nintendo+NEX_CO-4_6_13");
  FUN_71001d5a90();
  **(undefined4 **)(param_1[4] + 0x10) = 0;
  return;
}

