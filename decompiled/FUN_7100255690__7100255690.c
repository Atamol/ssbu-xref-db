// addr:      7100255690
// offset:    0x255690
// name:      FUN_7100255690
// mangled:   
// signature: bool __cdecl FUN_7100255690(undefined8 param_1, long param_2)


bool FUN_7100255690(undefined8 param_1,long param_2)

{
  bool bVar1;
  
  bVar1 = FUN_71001b4e00(*(char **)(param_2 + 0x18),"MatchmakeSession");
  if (bVar1) {
    return true;
  }
  bVar1 = FUN_710024cc10(param_1,param_2);
  return bVar1;
}

