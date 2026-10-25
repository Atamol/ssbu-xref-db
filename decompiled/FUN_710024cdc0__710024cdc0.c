// addr:      710024cdc0
// offset:    0x24cdc0
// name:      FUN_710024cdc0
// mangled:   
// signature: undefined FUN_710024cdc0(void)


bool FUN_710024cdc0(undefined8 param_1,long param_2)

{
  bool bVar1;
  
  bVar1 = FUN_71001b4e00(*(char **)(param_2 + 0x18),"GameSession");
  if (bVar1) {
    return true;
  }
  bVar1 = FUN_71001b4e00(*(char **)(param_2 + 0x18),"Gathering");
  return bVar1;
}

