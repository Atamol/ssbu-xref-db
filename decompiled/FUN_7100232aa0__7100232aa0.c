// addr:      7100232aa0
// offset:    0x232aa0
// name:      FUN_7100232aa0
// mangled:   
// signature: undefined FUN_7100232aa0(void)


bool FUN_7100232aa0(undefined8 param_1,char *param_2)

{
  int iVar1;
  
  iVar1 = strcmp("ClientProtocol",param_2);
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

