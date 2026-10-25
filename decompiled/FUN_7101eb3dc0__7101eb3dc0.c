// addr:      7101eb3dc0
// offset:    0x1eb3dc0
// name:      FUN_7101eb3dc0
// mangled:   
// signature: undefined __cdecl FUN_7101eb3dc0(long param_1)


void FUN_7101eb3dc0(long param_1)

{
  bool bVar1;
  long lVar2;
  long *plVar3;
  ulong uVar4;
  long lVar5;
  
  lVar5 = **(long **)(param_1 + 8);
  lVar2 = *(long *)(lVar5 + 0x10);
  bVar1 = *(int *)(param_1 + 0x270) == 1;
  if (*(char *)(*(long *)(param_1 + 0x318) + 0x161) == '\0') {
    if (bVar1) {
      lVar2 = *(long *)(lVar2 + 8);
      if (lVar2 != 0) {
        plVar3 = (long *)FUN_71037964b0(lVar2,0x710435befc);
        if (plVar3 != (long *)0x0) {
          uVar4 = (**(code **)(*plVar3 + 0x138))();
          if ((uVar4 & 1) == 0) {
            return;
          }
          lVar2 = *(long *)(*(long *)(lVar5 + 0x10) + 8);
          if (lVar2 == 0) goto LAB_7101eb3f00;
        }
        plVar3 = (long *)FUN_71037964b0(lVar2,0x71043cfc04);
        if ((plVar3 != (long *)0x0) && (uVar4 = (**(code **)(*plVar3 + 0x138))(), (uVar4 & 1) == 0))
        {
          return;
        }
      }
LAB_7101eb3f00:
      *(undefined8 *)(param_1 + 0x10) = 0;
      *(undefined8 *)(param_1 + 0x18) = 0;
      return;
    }
    FUN_7103778300(0xbf800000,lVar2,0x710435befc);
    FUN_7103778300(0xbf800000,*(long *)(lVar5 + 0x10),0x71043cfc04);
  }
  else {
    if (bVar1) {
      lVar2 = *(long *)(lVar2 + 8);
      if (lVar2 != 0) {
        plVar3 = (long *)FUN_71037964b0(lVar2,0x710435befc);
        if (plVar3 != (long *)0x0) {
          uVar4 = (**(code **)(*plVar3 + 0x138))();
          if ((uVar4 & 1) == 0) {
            return;
          }
          lVar2 = *(long *)(*(long *)(lVar5 + 0x10) + 8);
          if (lVar2 == 0) goto LAB_7101eb3e58;
        }
        plVar3 = (long *)FUN_71037964b0(lVar2,0x7104401c9e);
        if ((plVar3 != (long *)0x0) && (uVar4 = (**(code **)(*plVar3 + 0x138))(), (uVar4 & 1) == 0))
        {
          return;
        }
      }
LAB_7101eb3e58:
      if (((*(char *)(*(long *)(param_1 + 0x358) + 0x1ec) != '\0') &&
          (plVar3 = *(long **)(*(long *)(*(long *)(param_1 + 0x358) + 0x1e0) + 8),
          plVar3 != (long *)0x0)) && (uVar4 = (**(code **)(*plVar3 + 0x138))(), (uVar4 & 1) == 0)) {
        return;
      }
      *(undefined8 *)(param_1 + 0x10) = 0;
      *(undefined8 *)(param_1 + 0x18) = 0;
      FUN_7101ec5050(*(long *)(param_1 + 0x318),0);
      return;
    }
    FUN_7103778300(0xbf800000,lVar2,0x710435befc);
    FUN_7103778300(0x3f800000,*(long *)(lVar5 + 0x10),0x7104401c9e);
    if (*(char *)(*(long *)(param_1 + 0x358) + 0x1ec) != '\0') {
      FUN_710377aee0(0xbf800000,*(long *)(param_1 + 0x358) + 0x1d8);
    }
  }
  *(undefined4 *)(param_1 + 0x270) = 1;
  return;
}

