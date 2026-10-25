// addr:      71001da660
// offset:    0x1da660
// name:      FUN_71001da660
// mangled:   
// signature: undefined8 __cdecl FUN_71001da660(void)


undefined8 FUN_71001da660(void)

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
      if ((ulong)(DAT_71052af1b0[1] - *DAT_71052af1b0 >> 3) <= (ulong)uVar1) {
        FUN_71001b1300("..\\..\\..\\..\\.\\OnlineCore/src/Core/InstanceTable.h",0x47,0xe0000003,0);
        return 0;
      }
      plVar4 = (long *)(*(long *)(*DAT_71052af1b0 + (ulong)uVar1 * 8) + 0x20);
    }
  }
  if (*plVar4 != 0) {
    lVar3 = *(long *)(*plVar4 + 0x10);
    if (lVar3 != 0) {
      return *(undefined8 *)(lVar3 + 0x28);
    }
    return 0;
  }
  return 0;
}

