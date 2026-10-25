// addr:      7101eb4a80
// offset:    0x1eb4a80
// name:      FUN_7101eb4a80
// mangled:   
// signature: undefined __cdecl FUN_7101eb4a80(long param_1)


void FUN_7101eb4a80(long param_1)

{
  long *plVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  
  lVar4 = **(long **)(param_1 + 8);
  if (*(int *)(param_1 + 0x270) != 1) {
    FUN_7103778300(0x3f800000,*(long *)(lVar4 + 0x10),0x710435bee2);
    FUN_7103778300(0x3f800000,*(long *)(lVar4 + 0x10),0x71044130ab);
    *(undefined4 *)(param_1 + 0x270) = 1;
    return;
  }
  lVar3 = *(long *)(*(long *)(lVar4 + 0x10) + 8);
  if (lVar3 != 0) {
    plVar1 = (long *)FUN_71037964b0(lVar3,0x710435bee2);
    if (plVar1 != (long *)0x0) {
      uVar2 = (**(code **)(*plVar1 + 0x138))();
      if ((uVar2 & 1) == 0) {
        return;
      }
      lVar3 = *(long *)(*(long *)(lVar4 + 0x10) + 8);
      if (lVar3 == 0) goto LAB_7101eb4b0c;
    }
    plVar1 = (long *)FUN_71037964b0(lVar3,0x71044130ab);
    if ((plVar1 != (long *)0x0) && (uVar2 = (**(code **)(*plVar1 + 0x138))(), (uVar2 & 1) == 0)) {
      return;
    }
  }
LAB_7101eb4b0c:
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  return;
}

