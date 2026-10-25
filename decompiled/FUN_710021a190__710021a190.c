// addr:      710021a190
// offset:    0x21a190
// name:      FUN_710021a190
// mangled:   
// signature: undefined __cdecl FUN_710021a190(void)


void FUN_710021a190(void)

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
        FUN_71001d8a10(0,1);
        return;
      }
      plVar4 = (long *)(*(long *)(*DAT_71052af1b0 + (ulong)uVar1 * 8) + 0x20);
    }
  }
  if (*plVar4 != 0) {
    lVar3 = *(long *)(*plVar4 + 0x10);
    if (lVar3 != 0) {
      FUN_71001d8a10(*(long *)(lVar3 + 0x10),1);
      return;
    }
    FUN_71001d8a10(0,1);
    return;
  }
  FUN_71001d8a10(0,1);
  return;
}

