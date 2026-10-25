// addr:      71001dca90
// offset:    0x1dca90
// name:      FUN_71001dca90
// mangled:   
// signature: undefined FUN_71001dca90(void)


bool FUN_71001dca90(undefined8 param_1,char *param_2)

{
  int iVar1;
  
  iVar1 = strcmp("CallContextRegister",param_2);
  if (iVar1 != 0) {
    iVar1 = strcmp("SystemComponent",param_2);
    return iVar1 == 0;
  }
  return true;
}

