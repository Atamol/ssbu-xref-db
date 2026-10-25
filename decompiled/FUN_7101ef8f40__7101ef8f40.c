// addr:      7101ef8f40
// offset:    0x1ef8f40
// name:      FUN_7101ef8f40
// mangled:   
// signature: undefined __cdecl FUN_7101ef8f40(long param_1)


void FUN_7101ef8f40(long param_1)

{
  long lVar1;
  long *plVar2;
  ulong uVar3;
  
  if (*(int *)(param_1 + 0x204) != 0) {
    lVar1 = *(long *)(*(long *)(param_1 + 0x228) + 8);
    if ((((lVar1 == 0) ||
         (plVar2 = (long *)FUN_71037964b0(lVar1,0x710434abb9), plVar2 == (long *)0x0)) ||
        (uVar3 = (**(code **)(*plVar2 + 0x138))(), (uVar3 & 1) != 0)) &&
       (0 < *(int *)(param_1 + 0x1fc))) {
      *(int *)(param_1 + 0x1fc) = *(int *)(param_1 + 0x1fc) + -1;
    }
    return;
  }
  FUN_7103778300(0x3f800000,*(long *)(param_1 + 0x228),0x710434abb9);
  return;
}

