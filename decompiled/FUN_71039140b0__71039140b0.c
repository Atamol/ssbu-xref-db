// addr:      71039140b0
// offset:    0x39140b0
// name:      FUN_71039140b0
// mangled:   
// signature: uint __cdecl FUN_71039140b0(long * param_1, int * param_2)


uint FUN_71039140b0(long *param_1,int *param_2)

{
  uint uVar1;
  byte bVar2;
  byte bVar3;
  
  FUN_7103913650(param_1,param_2);
  if (*param_2 == 7) {
    uVar1 = param_2[2];
    if (param_2[4] == param_2[5]) {
      return uVar1;
    }
    if ((int)(uint)*(byte *)((long)param_1 + 0x3a) <= (int)uVar1) {
      FUN_7103913810(param_1,param_2,uVar1);
      goto LAB_7103914178;
    }
  }
  FUN_7103913650(param_1,param_2);
  if (((*param_2 == 7) && (((uint)param_2[2] >> 8 & 1) == 0)) &&
     ((int)(uint)*(byte *)((long)param_1 + 0x3a) <= param_2[2])) {
    *(char *)((long)param_1 + 0x3c) = *(char *)((long)param_1 + 0x3c) + -1;
  }
  bVar2 = *(byte *)((long)param_1 + 0x3c);
  bVar3 = bVar2 + 1;
  if (*(byte *)(*param_1 + 0xc) <= bVar2) {
    if (0xfd < bVar2) {
                    /* WARNING: Subroutine does not return */
      FUN_710390eb80(param_1[2],"function or expression needs too many registers");
    }
    *(byte *)(*param_1 + 0xc) = bVar3;
    bVar3 = *(char *)((long)param_1 + 0x3c) + 1;
  }
  *(byte *)((long)param_1 + 0x3c) = bVar3;
  FUN_7103913810(param_1,param_2,bVar3 - 1);
LAB_7103914178:
  return param_2[2];
}

