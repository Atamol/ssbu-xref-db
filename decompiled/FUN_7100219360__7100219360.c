// addr:      7100219360
// offset:    0x219360
// name:      FUN_7100219360
// mangled:   
// signature: undefined FUN_7100219360(void)


bool FUN_7100219360(undefined8 param_1,char *param_2)

{
  int iVar1;
  
  iVar1 = strcmp("ComponentState",param_2);
  if (iVar1 != 0) {
    iVar1 = strcmp("SystemComponent",param_2);
    return iVar1 == 0;
  }
  return true;
}

