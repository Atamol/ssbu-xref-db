// addr:      710024a610
// offset:    0x24a610
// name:      FUN_710024a610
// mangled:   
// signature: bool __cdecl FUN_710024a610(undefined8 param_1, long param_2)


bool FUN_710024a610(undefined8 param_1,long param_2)

{
  bool bVar1;
  
  bVar1 = FUN_71001b4e00(*(char **)(param_2 + 0x18),"AuthenticationInfo");
  if (bVar1) {
    return true;
  }
  bVar1 = FUN_710022b360(param_1,param_2);
  return bVar1;
}

