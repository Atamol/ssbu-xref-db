// addr:      7100223000
// offset:    0x223000
// name:      FUN_7100223000
// mangled:   
// signature: undefined FUN_7100223000(void)


undefined8 FUN_7100223000(long param_1,undefined1 *param_2,long param_3)

{
  uint uVar1;
  uint *puVar2;
  long *plVar3;
  undefined8 uVar4;
  long *plVar5;
  
  plVar3 = &DAT_71052af138;
  if (DAT_71052af1d8 != '\0') {
    puVar2 = (uint *)FUN_7101717960(DAT_71052af1d0);
    uVar1 = *puVar2;
    if (uVar1 != 0) {
      if ((ulong)(DAT_71052af1b0[1] - *DAT_71052af1b0 >> 3) <= (ulong)uVar1) {
        uVar4 = FUN_71001b1300("..\\..\\..\\..\\.\\OnlineCore/src/Core/InstanceTable.h",0x47,
                               0xe0000003,0);
        return uVar4;
      }
      plVar3 = (long *)(*(long *)(*DAT_71052af1b0 + (ulong)uVar1 * 8) + 0x20);
    }
  }
  plVar3 = (long *)FUN_71001cd7d0(*(long *)(*(long *)(*plVar3 + 0x10) + 0x18),
                                  *(uint *)(param_1 + 0xa0));
  if (plVar3 != (long *)0x0) {
    plVar5 = *(long **)(param_1 + 0x128);
    if ((undefined1 *)plVar5[1] + (param_3 - *plVar5) <= *(undefined1 **)(param_1 + 400)) {
      FUN_7100223100(plVar5,(undefined1 *)plVar5[1],param_2,param_2 + param_3);
      return 1;
    }
  }
  FUN_71001d0a10(plVar3);
  return 0;
}

