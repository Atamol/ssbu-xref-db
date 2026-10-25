// addr:      7101eb51f0
// offset:    0x1eb51f0
// name:      FUN_7101eb51f0
// mangled:   
// signature: undefined __cdecl FUN_7101eb51f0(long param_1)


void FUN_7101eb51f0(long param_1)

{
  undefined8 *puVar1;
  bool bVar2;
  long *plVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  
  lVar6 = **(long **)(param_1 + 8);
  if (*(int *)(param_1 + 0x270) != 1) {
    FUN_7103778300(0x3f800000,*(long *)(lVar6 + 0x10),0x71043f1012);
    FUN_7103778300(0x3f800000,*(long *)(lVar6 + 0x10),0x7104422aec);
    FUN_7103778300(0xbf800000,*(long *)(lVar6 + 0x10),0x71043bed92);
    FUN_7103778300(0xbf800000,*(long *)(lVar6 + 0x10),0x7104433811);
    FUN_7103778300(0xbf800000,*(long *)(lVar6 + 0x10),0x71042b4b57);
    FUN_7103778300(0x3f800000,*(long *)(lVar6 + 0x10),0x710436caa8);
    FUN_7103778300(0x3f800000,*(long *)(lVar6 + 0x10),0x7104401c9e);
    lVar6 = *(long *)(param_1 + 0x318);
    bVar2 = *(int *)(lVar6 + 0xb8) != 0;
    puVar1 = (undefined8 *)(lVar6 + 0xd8);
    if (bVar2) {
      puVar1 = (undefined8 *)(lVar6 + 0x108);
    }
    lVar5 = 0xd8;
    if (bVar2) {
      lVar5 = 0x108;
    }
    **(undefined8 **)(lVar6 + 0x128) = *(undefined8 *)*puVar1;
    *(undefined8 *)(*(long *)(lVar6 + 0x128) + 8) = *(undefined8 *)(*(long *)(lVar6 + lVar5) + 8);
    *(undefined1 *)(*(long *)(lVar6 + 0x128) + 0x10) =
         *(undefined1 *)(*(long *)(lVar6 + lVar5) + 0x10);
    FUN_710377aee0(0x3f800000,lVar6 + 0x120);
    if (*(char *)(*(long *)(param_1 + 0x358) + 0x1ec) != '\0') {
      FUN_710377aee0(0x3f800000,*(long *)(param_1 + 0x358) + 0x1b8);
    }
    *(undefined4 *)(param_1 + 0x270) = 1;
    return;
  }
  lVar5 = *(long *)(*(long *)(lVar6 + 0x10) + 8);
  if (lVar5 != 0) {
    plVar3 = (long *)FUN_71037964b0(lVar5,0x71043f1012);
    if (plVar3 != (long *)0x0) {
      uVar4 = (**(code **)(*plVar3 + 0x138))();
      if ((uVar4 & 1) == 0) {
        return;
      }
      lVar5 = *(long *)(*(long *)(lVar6 + 0x10) + 8);
      if (lVar5 == 0) goto LAB_7101eb536c;
    }
    plVar3 = (long *)FUN_71037964b0(lVar5,0x7104422aec);
    if (plVar3 != (long *)0x0) {
      uVar4 = (**(code **)(*plVar3 + 0x138))();
      if ((uVar4 & 1) == 0) {
        return;
      }
      lVar5 = *(long *)(*(long *)(lVar6 + 0x10) + 8);
      if (lVar5 == 0) goto LAB_7101eb536c;
    }
    plVar3 = (long *)FUN_71037964b0(lVar5,0x71043bed92);
    if (plVar3 != (long *)0x0) {
      uVar4 = (**(code **)(*plVar3 + 0x138))();
      if ((uVar4 & 1) == 0) {
        return;
      }
      lVar5 = *(long *)(*(long *)(lVar6 + 0x10) + 8);
      if (lVar5 == 0) goto LAB_7101eb536c;
    }
    plVar3 = (long *)FUN_71037964b0(lVar5,0x7104433811);
    if (plVar3 != (long *)0x0) {
      uVar4 = (**(code **)(*plVar3 + 0x138))();
      if ((uVar4 & 1) == 0) {
        return;
      }
      lVar5 = *(long *)(*(long *)(lVar6 + 0x10) + 8);
      if (lVar5 == 0) goto LAB_7101eb536c;
    }
    plVar3 = (long *)FUN_71037964b0(lVar5,0x71042b4b57);
    if (plVar3 != (long *)0x0) {
      uVar4 = (**(code **)(*plVar3 + 0x138))();
      if ((uVar4 & 1) == 0) {
        return;
      }
      lVar5 = *(long *)(*(long *)(lVar6 + 0x10) + 8);
      if (lVar5 == 0) goto LAB_7101eb536c;
    }
    plVar3 = (long *)FUN_71037964b0(lVar5,0x710436caa8);
    if (plVar3 != (long *)0x0) {
      uVar4 = (**(code **)(*plVar3 + 0x138))();
      if ((uVar4 & 1) == 0) {
        return;
      }
      lVar5 = *(long *)(*(long *)(lVar6 + 0x10) + 8);
      if (lVar5 == 0) goto LAB_7101eb536c;
    }
    plVar3 = (long *)FUN_71037964b0(lVar5,0x7104401c9e);
    if ((plVar3 != (long *)0x0) && (uVar4 = (**(code **)(*plVar3 + 0x138))(), (uVar4 & 1) == 0)) {
      return;
    }
  }
LAB_7101eb536c:
  plVar3 = *(long **)(*(long *)(*(long *)(param_1 + 0x318) + 0x128) + 8);
  if (((plVar3 == (long *)0x0) || (uVar4 = (**(code **)(*plVar3 + 0x138))(), (uVar4 & 1) != 0)) &&
     ((*(char *)(*(long *)(param_1 + 0x358) + 0x1ec) == '\0' ||
      ((plVar3 = *(long **)(*(long *)(*(long *)(param_1 + 0x358) + 0x1c0) + 8),
       plVar3 == (long *)0x0 || (uVar4 = (**(code **)(*plVar3 + 0x138))(), (uVar4 & 1) != 0)))))) {
    *(undefined8 *)(param_1 + 0x10) = 0;
    *(undefined8 *)(param_1 + 0x18) = 0;
  }
  return;
}

