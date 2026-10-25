// addr:      710022ec10
// offset:    0x22ec10
// name:      FUN_710022ec10
// mangled:   
// signature: undefined __cdecl FUN_710022ec10(undefined8 * param_1)


void FUN_710022ec10(undefined8 *param_1)

{
  undefined **local_58;
  undefined1 local_50 [16];
  undefined1 *local_40;
  undefined8 local_38;
  
  *param_1 = &PTR_FUN_7104f5a748;
  local_40 = local_50;
  local_50[0] = 0;
  local_38 = 0x10;
  local_58 = &PTR_FUN_710509cc08;
  FUN_71001b47e0((long)&local_58,"Protocol",-1);
  FUN_71001afb30(param_1 + 1,(long)&local_58);
  local_58 = &PTR_FUN_710509cc08;
  FUN_71001b4910((long)&local_58);
  FUN_71001d69d0(param_1 + 10);
  if (DAT_71052b5708 == '\0') {
    DAT_71052ae118 = FUN_71001dabb0;
    DAT_71052ae120 = FUN_71001daaa0;
    DAT_71052b5708 = '\x01';
  }
  return;
}

