// addr:      7103913770
// offset:    0x3913770
// name:      FUN_7103913770
// mangled:   
// signature: undefined __cdecl FUN_7103913770(long * param_1, int * param_2)


void FUN_7103913770(long *param_1,int *param_2)

{
  byte bVar1;
  byte bVar2;
  
  FUN_7103913650(param_1,param_2);
  if (((*param_2 == 7) && (((uint)param_2[2] >> 8 & 1) == 0)) &&
     ((int)(uint)*(byte *)((long)param_1 + 0x3a) <= param_2[2])) {
    *(char *)((long)param_1 + 0x3c) = *(char *)((long)param_1 + 0x3c) + -1;
  }
  bVar1 = *(byte *)((long)param_1 + 0x3c);
  bVar2 = bVar1 + 1;
  if (*(byte *)(*param_1 + 0xc) <= bVar1) {
    if (0xfd < bVar1) {
                    /* WARNING: Subroutine does not return */
      FUN_710390eb80(param_1[2],"function or expression needs too many registers");
    }
    *(byte *)(*param_1 + 0xc) = bVar2;
    bVar2 = *(char *)((long)param_1 + 0x3c) + 1;
  }
  *(byte *)((long)param_1 + 0x3c) = bVar2;
  FUN_7103913810(param_1,param_2,bVar2 - 1);
  return;
}

