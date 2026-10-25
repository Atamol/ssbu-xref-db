// addr:      710009d530
// offset:    0x9d530
// name:      FUN_710009d530
// mangled:   
// signature: undefined FUN_710009d530(void)


void FUN_710009d530(long param_1)

{
  float *pfVar1;
  long lVar2;
  
  pfVar1 = *(float **)(param_1 + 8);
  if (pfVar1 == (float *)0x0) {
    FUN_7100093660();
    return;
  }
  if (*(char *)(pfVar1 + 0x21) == '\0') {
    FUN_7100093660();
    return;
  }
  lVar2 = *(long *)(*(long *)(param_1 + 0x10) + 0x418);
  if (lVar2 == 0) {
    FUN_7100093660();
    return;
  }
  if (*(char *)(lVar2 + 0x10) != '\0') {
    FUN_710009e160(DAT_71052ab970,param_1,pfVar1);
    return;
  }
  FUN_7100093660();
  return;
}

