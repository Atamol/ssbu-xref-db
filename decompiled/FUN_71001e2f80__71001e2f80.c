// addr:      71001e2f80
// offset:    0x1e2f80
// name:      FUN_71001e2f80
// mangled:   
// signature: undefined1 __cdecl FUN_71001e2f80(long param_1)


undefined1 FUN_71001e2f80(long param_1)

{
  uint uVar1;
  undefined1 uVar2;
  uint *puVar3;
  long lVar4;
  long *plVar5;
  
  plVar5 = &DAT_71052af138;
  if (DAT_71052af1d8 != '\0') {
    puVar3 = (uint *)FUN_7101717960(DAT_71052af1d0);
    uVar1 = *puVar3;
    if (uVar1 != 0) {
      if ((ulong)(DAT_71052af1b0[1] - *DAT_71052af1b0 >> 3) <= (ulong)uVar1) goto LAB_71001e307c;
      plVar5 = (long *)(*(long *)(*DAT_71052af1b0 + (ulong)uVar1 * 8) + 0x20);
    }
  }
  lVar4 = FUN_71001cd7d0(*(long *)(*(long *)(*plVar5 + 0x10) + 0x18),*(uint *)(param_1 + 0x238));
  if (lVar4 != 0) {
    plVar5 = &DAT_71052af138;
    if (DAT_71052af1d8 != '\0') {
      puVar3 = (uint *)FUN_7101717960(DAT_71052af1d0);
      uVar1 = *puVar3;
      if (uVar1 != 0) {
        if ((ulong)(DAT_71052af1b0[1] - *DAT_71052af1b0 >> 3) <= (ulong)uVar1) {
LAB_71001e307c:
          uVar2 = FUN_71001b1300("..\\..\\..\\..\\.\\OnlineCore/src/Core/InstanceTable.h",0x47,
                                 0xe0000003,0);
          return uVar2;
        }
        plVar5 = (long *)(*(long *)(*DAT_71052af1b0 + (ulong)uVar1 * 8) + 0x20);
      }
    }
    if (*(char *)(*(long *)(*plVar5 + 0x10) + 0x50) == '\0') {
      return *(undefined1 *)(param_1 + 0x321);
    }
  }
  return 1;
}

