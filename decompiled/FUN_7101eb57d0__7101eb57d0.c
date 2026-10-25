// addr:      7101eb57d0
// offset:    0x1eb57d0
// name:      FUN_7101eb57d0
// mangled:   
// signature: undefined __cdecl FUN_7101eb57d0(long param_1)


void FUN_7101eb57d0(long param_1)

{
  long lVar1;
  long *plVar2;
  ulong uVar3;
  
  lVar1 = *(long *)(**(long **)(param_1 + 8) + 0x10);
  if (*(int *)(param_1 + 0x270) == 1) {
    lVar1 = *(long *)(lVar1 + 8);
    if (((lVar1 == 0) ||
        (plVar2 = (long *)FUN_71037964b0(lVar1,0x71043cfc04), plVar2 == (long *)0x0)) ||
       (uVar3 = (**(code **)(*plVar2 + 0x138))(), (uVar3 & 1) != 0)) {
      *(undefined8 *)(param_1 + 0x10) = 0;
      *(undefined8 *)(param_1 + 0x18) = 0;
    }
  }
  else {
    FUN_7103778300(0xbf800000,lVar1,0x71043cfc04);
    *(undefined4 *)(param_1 + 0x270) = 1;
  }
  return;
}

