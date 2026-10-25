// addr:      710023a970
// offset:    0x23a970
// name:      FUN_710023a970
// mangled:   
// signature: undefined FUN_710023a970(void)


void FUN_710023a970(long param_1)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  uint *puVar4;
  long *plVar5;
  
  lVar1 = *(long *)(param_1 + 0xc0);
  lVar2 = *(long *)(param_1 + 200);
  *(undefined8 *)(lVar2 + 0xc0) = *(undefined8 *)(lVar1 + 0x10);
  *(undefined4 *)(lVar2 + 200) = *(undefined4 *)(lVar1 + 0x18);
  plVar5 = &DAT_71052af180;
  if (DAT_71052af1d8 != '\0') {
    puVar4 = (uint *)FUN_7101717960(DAT_71052af1d0);
    uVar3 = *puVar4;
    if (uVar3 != 0) {
      if ((ulong)(DAT_71052af1b0[1] - *DAT_71052af1b0 >> 3) <= (ulong)uVar3) {
        FUN_71001b1300("..\\..\\..\\..\\.\\OnlineCore/src/Core/InstanceTable.h",0x47,0xe0000003,0);
        return;
      }
      plVar5 = (long *)(*(long *)(*DAT_71052af1b0 + (ulong)uVar3 * 8) + 0x68);
    }
  }
  FUN_710023c920(*(long *)(*(long *)(*plVar5 + 0x10) + 0x38),*(ulong *)(param_1 + 200));
  plVar5 = *(long **)(*(long *)(*(long *)(param_1 + 0xc0) + 0x78) + 0x28);
                    /* WARNING: Could not recover jumptable at 0x00710023aa28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar5 + 0x50))(plVar5,100,*(undefined8 *)(param_1 + 0xd0));
  return;
}

