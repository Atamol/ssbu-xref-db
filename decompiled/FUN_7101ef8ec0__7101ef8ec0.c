// addr:      7101ef8ec0
// offset:    0x1ef8ec0
// name:      FUN_7101ef8ec0
// mangled:   
// signature: undefined __cdecl FUN_7101ef8ec0(long param_1)


void FUN_7101ef8ec0(long param_1)

{
  long lVar1;
  long *plVar2;
  ulong uVar3;
  
  if (*(int *)(param_1 + 0x204) != 0) {
    lVar1 = *(long *)(*(long *)(param_1 + 0x228) + 8);
    if ((((lVar1 == 0) ||
         (plVar2 = (long *)FUN_71037964b0(lVar1,0x71042707fe), plVar2 == (long *)0x0)) ||
        (uVar3 = (**(code **)(*plVar2 + 0x138))(), (uVar3 & 1) != 0)) &&
       (0 < *(int *)(param_1 + 0x1fc))) {
      *(int *)(param_1 + 0x1fc) = *(int *)(param_1 + 0x1fc) + -1;
    }
    return;
  }
  FUN_7103778300(0x3f800000,*(long *)(param_1 + 0x228),0x71042707fe);
  return;
}

