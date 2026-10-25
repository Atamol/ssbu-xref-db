// addr:      71001b2360
// offset:    0x1b2360
// name:      FUN_71001b2360
// mangled:   
// signature: undefined __cdecl FUN_71001b2360(undefined8 * param_1, long param_2, undefined4 param_3)


void FUN_71001b2360(undefined8 *param_1,long param_2,undefined4 param_3)

{
  undefined8 *puVar1;
  
  *param_1 = &PTR_FUN_7104f54c58;
  FUN_71001b2400(param_1 + 1,"NEX ",param_2);
  if (DAT_71052ae0a8 == (code *)0x0) {
    puVar1 = malloc(0x28);
  }
  else {
    puVar1 = (undefined8 *)(*DAT_71052ae0a8)(0x28);
  }
  *puVar1 = DAT_71052ae0b0;
  puVar1[2] = 0;
  puVar1[3] = 0;
  *(undefined1 *)(puVar1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = param_3;
  param_1[6] = puVar1 + 2;
  param_1[7] = 0;
  param_1[9] = 0;
  *(undefined1 *)(param_1 + 10) = 0;
  *(undefined1 *)((long)param_1 + 0x52) = 0;
  *(undefined4 *)((long)param_1 + 0x54) = 0x80000000;
  return;
}

