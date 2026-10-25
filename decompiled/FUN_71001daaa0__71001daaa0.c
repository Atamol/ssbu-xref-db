// addr:      71001daaa0
// offset:    0x1daaa0
// name:      FUN_71001daaa0
// mangled:   
// signature: undefined8 __cdecl FUN_71001daaa0(void)


undefined8 FUN_71001daaa0(void)

{
  uint uVar1;
  uint *puVar2;
  long *plVar3;
  long lVar4;
  
  plVar3 = &DAT_71052af138;
  if (DAT_71052af1d8 != '\0') {
    puVar2 = (uint *)FUN_7101717960(DAT_71052af1d0);
    uVar1 = *puVar2;
    if (uVar1 != 0) {
      if ((ulong)(DAT_71052af1b0[1] - *DAT_71052af1b0 >> 3) <= (ulong)uVar1) {
        FUN_71001b1300("..\\..\\..\\..\\.\\OnlineCore/src/Core/InstanceTable.h",0x47,0xe0000003,0);
        return 0;
      }
      plVar3 = (long *)(*(long *)(*DAT_71052af1b0 + (ulong)uVar1 * 8) + 0x20);
    }
  }
  if (*plVar3 == 0) {
    return 0;
  }
  lVar4 = *(long *)(*plVar3 + 0x10);
  if (lVar4 == 0) {
    return 0;
  }
  lVar4 = *(long *)(lVar4 + 0x28);
  if (lVar4 != 0) {
    lVar4 = lVar4 + 8;
    plVar3 = FUN_71001dacc0(lVar4);
    if (plVar3[2] != 0) {
      plVar3 = FUN_71001dacc0(lVar4);
      return *(undefined8 *)(plVar3[1] + 0x18);
    }
    return 0;
  }
  return 0;
}

