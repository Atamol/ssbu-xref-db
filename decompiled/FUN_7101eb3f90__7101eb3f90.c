// addr:      7101eb3f90
// offset:    0x1eb3f90
// name:      FUN_7101eb3f90
// mangled:   
// signature: undefined __cdecl FUN_7101eb3f90(long param_1)


void FUN_7101eb3f90(long param_1)

{
  long *plVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  
  lVar4 = **(long **)(param_1 + 8);
  if (*(int *)(param_1 + 0x270) != 1) {
    FUN_7103778300(0x3f800000,*(long *)(lVar4 + 0x10),0x71044130ab);
    FUN_7103778300(0x3f800000,*(long *)(lVar4 + 0x10),0x71043adf48);
    plVar1 = *(long **)(param_1 + 0x378);
    if ((char)plVar1[0xb] == '\0') {
      *(undefined4 *)(plVar1 + 6) = 0xffffffff;
      FUN_710376b960(plVar1[2]);
      (**(code **)(*plVar1 + 0x40))(plVar1);
      FUN_710377aee0(0x3f800000,(long)(plVar1 + 7));
      *(undefined1 *)(plVar1 + 0xb) = 1;
    }
    *(undefined4 *)(param_1 + 0x270) = 1;
    return;
  }
  lVar3 = *(long *)(*(long *)(lVar4 + 0x10) + 8);
  if (lVar3 != 0) {
    plVar1 = (long *)FUN_71037964b0(lVar3,0x71044130ab);
    if (plVar1 != (long *)0x0) {
      uVar2 = (**(code **)(*plVar1 + 0x138))();
      if ((uVar2 & 1) == 0) {
        return;
      }
      lVar3 = *(long *)(*(long *)(lVar4 + 0x10) + 8);
      if (lVar3 == 0) goto LAB_7101eb401c;
    }
    plVar1 = (long *)FUN_71037964b0(lVar3,0x71043adf48);
    if ((plVar1 != (long *)0x0) && (uVar2 = (**(code **)(*plVar1 + 0x138))(), (uVar2 & 1) == 0)) {
      return;
    }
  }
LAB_7101eb401c:
  plVar1 = *(long **)(*(long *)(*(long *)(param_1 + 0x378) + 0x40) + 8);
  if ((plVar1 == (long *)0x0) || (uVar2 = (**(code **)(*plVar1 + 0x138))(), (uVar2 & 1) != 0)) {
    *(undefined8 *)(param_1 + 0x10) = 0;
    *(undefined8 *)(param_1 + 0x18) = 0;
  }
  return;
}

