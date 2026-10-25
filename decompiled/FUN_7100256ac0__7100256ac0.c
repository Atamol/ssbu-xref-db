// addr:      7100256ac0
// offset:    0x256ac0
// name:      FUN_7100256ac0
// mangled:   
// signature: bool __cdecl FUN_7100256ac0(undefined8 param_1, long param_2)


bool FUN_7100256ac0(undefined8 param_1,long param_2)

{
  bool bVar1;
  
  bVar1 = FUN_71001b4e00(*(char **)(param_2 + 0x18),"PersistentGathering");
  if (bVar1) {
    return true;
  }
  bVar1 = FUN_710024cc10(param_1,param_2);
  return bVar1;
}

