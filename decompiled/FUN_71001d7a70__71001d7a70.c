// addr:      71001d7a70
// offset:    0x1d7a70
// name:      FUN_71001d7a70
// mangled:   
// signature: uint __cdecl FUN_71001d7a70(void)


uint FUN_71001d7a70(void)

{
  uint uVar1;
  uint *puVar2;
  long lVar3;
  long *plVar4;
  
  plVar4 = &DAT_71052af138;
  if (DAT_71052af1d8 != '\0') {
    puVar2 = (uint *)FUN_7101717960(DAT_71052af1d0);
    uVar1 = *puVar2;
    if (uVar1 != 0) {
      if ((ulong)(DAT_71052af1b0[1] - *DAT_71052af1b0 >> 3) <= (ulong)uVar1) goto LAB_71001d7b70;
      plVar4 = (long *)(*(long *)(*DAT_71052af1b0 + (ulong)uVar1 * 8) + 0x20);
    }
  }
  lVar3 = *(long *)(*(long *)(*(long *)(*plVar4 + 0x10) + 0x10) + 0x18);
  if (*(long *)(lVar3 + 0x60) == *(long *)(lVar3 + 0x58)) {
    uVar1 = 0;
  }
  else {
    plVar4 = &DAT_71052af138;
    if (DAT_71052af1d8 != '\0') {
      puVar2 = (uint *)FUN_7101717960(DAT_71052af1d0);
      uVar1 = *puVar2;
      if (uVar1 != 0) {
        if ((ulong)(DAT_71052af1b0[1] - *DAT_71052af1b0 >> 3) <= (ulong)uVar1) {
LAB_71001d7b70:
          uVar1 = FUN_71001b1300("..\\..\\..\\..\\.\\OnlineCore/src/Core/InstanceTable.h",0x47,
                                 0xe0000003,0);
          return uVar1;
        }
        plVar4 = (long *)(*(long *)(*DAT_71052af1b0 + (ulong)uVar1 * 8) + 0x20);
      }
    }
    uVar1 = (**(code **)(**(long **)(*(long *)(*(long *)(*plVar4 + 0x10) + 0x10) + 0x1b8) + 0x18))()
    ;
    uVar1 = uVar1 ^ 1;
  }
  return uVar1 & 1;
}

