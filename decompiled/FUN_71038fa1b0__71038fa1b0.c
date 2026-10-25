// addr:      71038fa1b0
// offset:    0x38fa1b0
// name:      FUN_71038fa1b0
// mangled:   
// signature: undefined8 __cdecl FUN_71038fa1b0(long param_1)


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_71038fa1b0(long param_1)

{
  uint uVar1;
  FILE *param0;
  char *param2;
  float *pfVar2;
  
  param0 = _stderr;
  pfVar2 = (float *)(*(long *)(param_1 + 0x10) + -0x10);
  uVar1 = *(uint *)(*(long *)(param_1 + 0x10) + -8) & 0xf;
  if (uVar1 != 4) {
    if (uVar1 != 3) {
      param2 = (char *)0x0;
      goto LAB_71038fa22c;
    }
    if (0 < *(long *)(*(long *)(param_1 + 0x18) + 0x18)) {
      FUN_71038fec40(param_1);
      pfVar2 = (float *)(*(long *)(param_1 + 0x10) + -0x10);
    }
    FUN_71039080b0(param_1,pfVar2);
  }
  param2 = (char *)(*(long *)pfVar2 + 0x18);
LAB_71038fa22c:
  fprintf(param0,"PANIC: unprotected error in call to Lua API (%s)\n",param2);
  fflush(param0);
  return 0;
}

