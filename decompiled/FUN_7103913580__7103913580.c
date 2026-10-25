// addr:      7103913580
// offset:    0x3913580
// name:      FUN_7103913580
// mangled:   
// signature: undefined __cdecl FUN_7103913580(long * param_1, int * param_2, int param_3)


void FUN_7103913580(long *param_1,int *param_2,int param_3)

{
  uint uVar1;
  byte bVar2;
  char cVar3;
  
  if (*param_2 == 0xe) {
    *(uint *)(*(long *)(*param_1 + 0x38) + (long)param_2[2] * 4) =
         param_3 * 0x800000 + 0x800000U |
         *(uint *)(*(long *)(*param_1 + 0x38) + (long)param_2[2] * 4) & 0x7fffff;
    uVar1 = *(uint *)(*(long *)(*param_1 + 0x38) + (long)param_2[2] * 4);
    *(uint *)(*(long *)(*param_1 + 0x38) + (long)param_2[2] * 4) =
         uVar1 & 0xffffc000 | uVar1 & 0x3f | (uint)*(byte *)((long)param_1 + 0x3c) << 6;
    bVar2 = *(byte *)((long)param_1 + 0x3c);
    cVar3 = bVar2 + 1;
    if (*(byte *)(*param_1 + 0xc) <= bVar2) {
      if (0xfd < bVar2) {
                    /* WARNING: Subroutine does not return */
        FUN_710390eb80(param_1[2],"function or expression needs too many registers");
      }
      *(char *)(*param_1 + 0xc) = cVar3;
      cVar3 = *(char *)((long)param_1 + 0x3c) + '\x01';
    }
    *(char *)((long)param_1 + 0x3c) = cVar3;
  }
  else if (*param_2 == 0xd) {
    uVar1 = *(uint *)(*(long *)(*param_1 + 0x38) + (long)param_2[2] * 4);
    *(uint *)(*(long *)(*param_1 + 0x38) + (long)param_2[2] * 4) =
         uVar1 & 0xff800000 | uVar1 & 0x3fff | (param_3 * 0x4000 + 0x4000U >> 0xe & 0x1ff) << 0xe;
    return;
  }
  return;
}

