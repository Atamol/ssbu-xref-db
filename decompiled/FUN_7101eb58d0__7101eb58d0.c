// addr:      7101eb58d0
// offset:    0x1eb58d0
// name:      FUN_7101eb58d0
// mangled:   
// signature: undefined __cdecl FUN_7101eb58d0(long param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_7101eb58d0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  long lVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  
  lVar4 = *(long *)(param_1 + 0x318);
  lVar7 = **(long **)(param_1 + 8);
  if (*(char *)(lVar4 + 0x161) == '\0') {
    if (*(int *)(param_1 + 0x270) != 1) {
      if (*(char *)(lVar4 + 0x162) == '\0') {
        FUN_7103778300(0x3f800000,*(long *)(lVar7 + 0x10),0x71043cfc04);
        *(undefined4 *)(param_1 + 0x270) = 1;
        return;
      }
      FUN_7101ec56c0(lVar4,1,param_3,param_4,param_5,param_6,param_7,param_8);
      goto LAB_7101eb5c28;
    }
  }
  else {
    if (*(int *)(param_1 + 0x270) != 1) {
      FUN_7103778300(0x3f800000,*(long *)(lVar7 + 0x10),0x710424fc1e);
      FUN_7103778300(0x3f800000,*(long *)(lVar7 + 0x10),0x710438d27d);
      FUN_7103778300(0x3f800000,*(long *)(lVar7 + 0x10),0x71043bed92);
      FUN_7103778300(0x3f800000,*(long *)(lVar7 + 0x10),0x7104433811);
      FUN_7103778300(0x3f800000,*(long *)(lVar7 + 0x10),0x71042b4b57);
      FUN_7103778300(0x3f800000,*(long *)(lVar7 + 0x10),0x71042f8ad9);
      FUN_7103778300(0x3f800000,*(long *)(lVar7 + 0x10),0x710425fc28);
      lVar4 = *(long *)(param_1 + 0x318);
      bVar3 = *(int *)(lVar4 + 0xb8) != 0;
      puVar1 = (undefined8 *)(lVar4 + 0xe8);
      if (bVar3) {
        puVar1 = (undefined8 *)(lVar4 + 0x118);
      }
      lVar2 = 0xe8;
      if (bVar3) {
        lVar2 = 0x118;
      }
      **(undefined8 **)(lVar4 + 0x128) = *(undefined8 *)*puVar1;
      *(undefined8 *)(*(long *)(lVar4 + 0x128) + 8) = *(undefined8 *)(*(long *)(lVar4 + lVar2) + 8);
      *(undefined1 *)(*(long *)(lVar4 + 0x128) + 0x10) =
           *(undefined1 *)(*(long *)(lVar4 + lVar2) + 0x10);
      FUN_710377aee0(0x3f800000,lVar4 + 0x120);
      if (*(char *)(*(long *)(param_1 + 0x358) + 0x1ec) != '\0') {
        FUN_710377aee0(0x3f800000,*(long *)(param_1 + 0x358) + 0x1c8);
      }
      *(undefined4 *)(param_1 + 0x270) = 1;
      if (*(char *)(*(long *)(param_1 + 0x318) + 0x162) != '\0') {
        FUN_7101ec56c0(*(long *)(param_1 + 0x318),1,param_3,param_4,param_5,param_6,param_7,param_8)
        ;
        return;
      }
      FUN_7103778300(0x3f800000,*(long *)(lVar7 + 0x10),0x71043cfc04);
      return;
    }
    lVar4 = *(long *)(*(long *)(lVar7 + 0x10) + 8);
    if (lVar4 != 0) {
      plVar5 = (long *)FUN_71037964b0(lVar4,0x710424fc1e);
      if (plVar5 != (long *)0x0) {
        uVar6 = (**(code **)(*plVar5 + 0x138))();
        if ((uVar6 & 1) == 0) {
          return;
        }
        lVar4 = *(long *)(*(long *)(lVar7 + 0x10) + 8);
        if (lVar4 == 0) goto LAB_7101eb5a58;
      }
      plVar5 = (long *)FUN_71037964b0(lVar4,0x710438d27d);
      if (plVar5 != (long *)0x0) {
        uVar6 = (**(code **)(*plVar5 + 0x138))();
        if ((uVar6 & 1) == 0) {
          return;
        }
        lVar4 = *(long *)(*(long *)(lVar7 + 0x10) + 8);
        if (lVar4 == 0) goto LAB_7101eb5a58;
      }
      plVar5 = (long *)FUN_71037964b0(lVar4,0x71043bed92);
      if (plVar5 != (long *)0x0) {
        uVar6 = (**(code **)(*plVar5 + 0x138))();
        if ((uVar6 & 1) == 0) {
          return;
        }
        lVar4 = *(long *)(*(long *)(lVar7 + 0x10) + 8);
        if (lVar4 == 0) goto LAB_7101eb5a58;
      }
      plVar5 = (long *)FUN_71037964b0(lVar4,0x7104433811);
      if (plVar5 != (long *)0x0) {
        uVar6 = (**(code **)(*plVar5 + 0x138))();
        if ((uVar6 & 1) == 0) {
          return;
        }
        lVar4 = *(long *)(*(long *)(lVar7 + 0x10) + 8);
        if (lVar4 == 0) goto LAB_7101eb5a58;
      }
      plVar5 = (long *)FUN_71037964b0(lVar4,0x71042b4b57);
      if (plVar5 != (long *)0x0) {
        uVar6 = (**(code **)(*plVar5 + 0x138))();
        if ((uVar6 & 1) == 0) {
          return;
        }
        lVar4 = *(long *)(*(long *)(lVar7 + 0x10) + 8);
        if (lVar4 == 0) goto LAB_7101eb5a58;
      }
      plVar5 = (long *)FUN_71037964b0(lVar4,0x71042f8ad9);
      if (plVar5 != (long *)0x0) {
        uVar6 = (**(code **)(*plVar5 + 0x138))();
        if ((uVar6 & 1) == 0) {
          return;
        }
        lVar4 = *(long *)(*(long *)(lVar7 + 0x10) + 8);
        if (lVar4 == 0) goto LAB_7101eb5a58;
      }
      plVar5 = (long *)FUN_71037964b0(lVar4,0x710425fc28);
      if ((plVar5 != (long *)0x0) && (uVar6 = (**(code **)(*plVar5 + 0x138))(), (uVar6 & 1) == 0)) {
        return;
      }
    }
LAB_7101eb5a58:
    plVar5 = *(long **)(*(long *)(*(long *)(param_1 + 0x318) + 0x128) + 8);
    if ((plVar5 != (long *)0x0) && (uVar6 = (**(code **)(*plVar5 + 0x138))(), (uVar6 & 1) == 0)) {
      return;
    }
    if (((*(char *)(*(long *)(param_1 + 0x358) + 0x1ec) != '\0') &&
        (plVar5 = *(long **)(*(long *)(*(long *)(param_1 + 0x358) + 0x1d0) + 8),
        plVar5 != (long *)0x0)) && (uVar6 = (**(code **)(*plVar5 + 0x138))(), (uVar6 & 1) == 0)) {
      return;
    }
    if (*(char *)(*(long *)(param_1 + 0x318) + 0x162) != '\0') goto LAB_7101eb5c28;
  }
  lVar4 = *(long *)(*(long *)(lVar7 + 0x10) + 8);
  if (((lVar4 != 0) && (plVar5 = (long *)FUN_71037964b0(lVar4,0x71043cfc04), plVar5 != (long *)0x0))
     && (uVar6 = (**(code **)(*plVar5 + 0x138))(), (uVar6 & 1) == 0)) {
    return;
  }
LAB_7101eb5c28:
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  return;
}

