// addr:      71001ce780
// offset:    0x1ce780
// name:      FUN_71001ce780
// mangled:   
// signature: undefined8 __cdecl FUN_71001ce780(undefined8 param_1, undefined8 param_2, char * param_3, ulong param_4)


undefined8 FUN_71001ce780(undefined8 param_1,undefined8 param_2,char *param_3,ulong param_4)

{
  size_t sVar1;
  
  sVar1 = strlen("Encryption Error");
  if (sVar1 < param_4) {
    strcpy(param_3,"Encryption Error");
    return 1;
  }
  return 0;
}

