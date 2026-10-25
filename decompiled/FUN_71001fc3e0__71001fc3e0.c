// addr:      71001fc3e0
// offset:    0x1fc3e0
// name:      FUN_71001fc3e0
// mangled:   
// signature: undefined __cdecl FUN_71001fc3e0(long param_1, ulong * param_2)


void FUN_71001fc3e0(long param_1,ulong *param_2)

{
  uint uVar1;
  uint *puVar2;
  long *plVar3;
  long lVar4;
  
  DAT_71052aeba8 = *param_2;
  plVar3 = &DAT_71052af138;
  if (DAT_71052af1d8 != '\0') {
    puVar2 = (uint *)FUN_7101717960(DAT_71052af1d0);
    uVar1 = *puVar2;
    if (uVar1 != 0) {
      if ((ulong)(DAT_71052af1b0[1] - *DAT_71052af1b0 >> 3) <= (ulong)uVar1) {
        FUN_71001b1300("..\\..\\..\\..\\.\\OnlineCore/src/Core/InstanceTable.h",0x47,0xe0000003,0);
        return;
      }
      plVar3 = (long *)(*(long *)(*DAT_71052af1b0 + (ulong)uVar1 * 8) + 0x20);
    }
  }
  if (*(int *)(*(long *)(*(long *)(*plVar3 + 0x10) + 0x10) + 0x1cc) == 3) {
    lVar4 = *(long *)(param_1 + 0x100);
    if (lVar4 != *(long *)(param_1 + 0x108)) {
      do {
        (**(code **)(**(long **)(lVar4 + 8) + 0x18))(*(long **)(lVar4 + 8),param_2);
        lVar4 = lVar4 + 0x10;
      } while (lVar4 != *(long *)(param_1 + 0x108));
    }
    FUN_71001fc710(param_1,param_2);
    lVar4 = *(long *)(param_1 + 0x2c8);
    if (lVar4 != *(long *)(param_1 + 0x2d0)) {
      do {
        FUN_71001c3590(*(long *)(lVar4 + 8));
        lVar4 = lVar4 + 0x10;
      } while (lVar4 != *(long *)(param_1 + 0x2d0));
    }
    return;
  }
  lVar4 = *(long *)(param_1 + 0x2c8);
  if (lVar4 != *(long *)(param_1 + 0x2d0)) {
    do {
      FUN_71001c3590(*(long *)(lVar4 + 8));
      lVar4 = lVar4 + 0x10;
    } while (lVar4 != *(long *)(param_1 + 0x2d0));
  }
  FUN_71001fc590(param_1,(long *)param_2);
  lVar4 = *(long *)(param_1 + 0x100);
  if (lVar4 != *(long *)(param_1 + 0x108)) {
    do {
      (**(code **)(**(long **)(lVar4 + 8) + 0x18))(*(long **)(lVar4 + 8),param_2);
      lVar4 = lVar4 + 0x10;
    } while (lVar4 != *(long *)(param_1 + 0x108));
  }
  FUN_71001fc710(param_1,param_2);
  return;
}

