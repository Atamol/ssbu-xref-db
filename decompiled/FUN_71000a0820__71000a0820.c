// addr:      71000a0820
// offset:    0xa0820
// name:      FUN_71000a0820
// mangled:   
// signature: undefined FUN_71000a0820(void)


void FUN_71000a0820(long param_1)

{
  float *pfVar1;
  long lVar2;
  
  pfVar1 = *(float **)(param_1 + 8);
  if (pfVar1 == (float *)0x0) {
    FUN_7100093660();
    return;
  }
  if (*(char *)(pfVar1 + 0x24) == '\0') {
    FUN_7100093660();
    return;
  }
  lVar2 = *(long *)(*(long *)(param_1 + 0x10) + 0x418);
  if (lVar2 == 0) {
    FUN_7100093660();
    return;
  }
  if (*(char *)(lVar2 + 0x10) != '\0') {
    FUN_71000a0ef0(DAT_71052ab978,param_1,pfVar1);
    return;
  }
  FUN_7100093660();
  return;
}

