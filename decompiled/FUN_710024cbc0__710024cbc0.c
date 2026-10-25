// addr:      710024cbc0
// offset:    0x24cbc0
// name:      FUN_710024cbc0
// mangled:   
// signature: undefined FUN_710024cbc0(void)


bool FUN_710024cbc0(undefined8 param_1,long param_2)

{
  bool bVar1;
  
  bVar1 = FUN_71001b4e00(*(char **)(param_2 + 0x18),"DynamicGathering");
  if (bVar1) {
    return true;
  }
  bVar1 = FUN_71001b4e00(*(char **)(param_2 + 0x18),"Gathering");
  return bVar1;
}

