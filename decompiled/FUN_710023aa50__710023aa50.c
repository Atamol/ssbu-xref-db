// addr:      710023aa50
// offset:    0x23aa50
// name:      FUN_710023aa50
// mangled:   
// signature: undefined FUN_710023aa50(void)


void FUN_710023aa50(long param_1)

{
  uint uVar1;
  uint *puVar2;
  long *plVar3;
  
  plVar3 = &DAT_71052af180;
  if (DAT_71052af1d8 != '\0') {
    puVar2 = (uint *)FUN_7101717960(DAT_71052af1d0);
    uVar1 = *puVar2;
    if (uVar1 != 0) {
      if ((ulong)(DAT_71052af1b0[1] - *DAT_71052af1b0 >> 3) <= (ulong)uVar1) {
        FUN_71001b1300("..\\..\\..\\..\\.\\OnlineCore/src/Core/InstanceTable.h",0x47,0xe0000003,0);
        return;
      }
      plVar3 = (long *)(*(long *)(*DAT_71052af1b0 + (ulong)uVar1 * 8) + 0x68);
    }
  }
  FUN_710023cb10(*(long *)(*(long *)(*plVar3 + 0x10) + 0x38),*(ulong *)(param_1 + 200));
  plVar3 = *(long **)(*(long *)(*(long *)(param_1 + 0xc0) + 0x78) + 0x28);
                    /* WARNING: Could not recover jumptable at 0x00710023aaf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar3 + 0x58))(plVar3,100);
  return;
}

