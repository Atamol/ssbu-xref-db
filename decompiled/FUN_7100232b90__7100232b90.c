// addr:      7100232b90
// offset:    0x232b90
// name:      FUN_7100232b90
// mangled:   
// signature: undefined FUN_7100232b90(void)


bool FUN_7100232b90(undefined8 param_1,char *param_2)

{
  int iVar1;
  
  iVar1 = strcmp("ServerProtocol",param_2);
  if (iVar1 == 0) {
    return true;
  }
  iVar1 = strcmp("Protocol",param_2);
  if (iVar1 != 0) {
    iVar1 = strcmp("SystemComponent",param_2);
    return iVar1 == 0;
  }
  return true;
}

