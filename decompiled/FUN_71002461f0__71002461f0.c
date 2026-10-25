// addr:      71002461f0
// offset:    0x2461f0
// name:      FUN_71002461f0
// mangled:   
// signature: undefined FUN_71002461f0(void)


uint FUN_71002461f0(long param_1)

{
  uint uVar1;
  uint *puVar2;
  long *plVar3;
  long lVar4;
  long *plVar5;
  
  plVar5 = &DAT_71052af138;
  if (DAT_71052af1d8 == '\0') {
LAB_7100246258:
    if ((*plVar5 != 0) && (lVar4 = *(long *)(*plVar5 + 0x10), lVar4 != 0)) {
      lVar4 = *(long *)(lVar4 + 0x10);
      goto LAB_710024628c;
    }
  }
  else {
    puVar2 = (uint *)FUN_7101717960(DAT_71052af1d0);
    uVar1 = *puVar2;
    if (uVar1 == 0) goto LAB_7100246258;
    if ((ulong)uVar1 < (ulong)(DAT_71052af1b0[1] - *DAT_71052af1b0 >> 3)) {
      plVar5 = (long *)(*(long *)(*DAT_71052af1b0 + (ulong)uVar1 * 8) + 0x20);
      goto LAB_7100246258;
    }
    FUN_71001b1300("..\\..\\..\\..\\.\\OnlineCore/src/Core/InstanceTable.h",0x47,0xe0000003,0);
  }
  lVar4 = 0;
LAB_710024628c:
  plVar5 = (long *)(lVar4 + 0x78);
  (**(code **)(*plVar5 + 0x10))(plVar5);
  if (((*(long *)(param_1 + 0x10) == 0) || (*(char *)(param_1 + 0x18) != '\0')) ||
     (plVar3 = *(long **)(*(long *)(param_1 + 0x10) + 0x88), plVar3 == (long *)0x0)) {
    uVar1 = 0;
  }
  else {
    uVar1 = (**(code **)(*plVar3 + 0x58))();
  }
  (**(code **)(*plVar5 + 0x20))(plVar5);
  return uVar1 & 1;
}

