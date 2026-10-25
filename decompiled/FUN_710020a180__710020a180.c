// addr:      710020a180
// offset:    0x20a180
// name:      FUN_710020a180
// mangled:   
// signature: undefined FUN_710020a180(void)


void FUN_710020a180(long param_1)

{
  uint uVar1;
  uint *puVar2;
  long *plVar3;
  ulong uStack_28;
  
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
  uStack_28 = *(long *)(*(long *)(*plVar3 + 0x10) + 0x58) + (long)DAT_7104f577b0;
  FUN_710020eb30(param_1 + 0x40,&uStack_28);
  return;
}

