// addr:      71001fb9b0
// offset:    0x1fb9b0
// name:      FUN_71001fb9b0
// mangled:   
// signature: undefined FUN_71001fb9b0(void)


long FUN_71001fb9b0(long param_1)

{
  uint uVar1;
  uint *puVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  
  plVar5 = &DAT_71052af138;
  if (DAT_71052af1d8 == '\0') {
LAB_71001fba18:
    if ((*plVar5 != 0) && (lVar3 = *(long *)(*plVar5 + 0x10), lVar3 != 0)) {
      lVar3 = *(long *)(lVar3 + 0x10);
      goto LAB_71001fba4c;
    }
  }
  else {
    puVar2 = (uint *)FUN_7101717960(DAT_71052af1d0);
    uVar1 = *puVar2;
    if (uVar1 == 0) goto LAB_71001fba18;
    if ((ulong)uVar1 < (ulong)(DAT_71052af1b0[1] - *DAT_71052af1b0 >> 3)) {
      plVar5 = (long *)(*(long *)(*DAT_71052af1b0 + (ulong)uVar1 * 8) + 0x20);
      goto LAB_71001fba18;
    }
    FUN_71001b1300("..\\..\\..\\..\\.\\OnlineCore/src/Core/InstanceTable.h",0x47,0xe0000003,0);
  }
  lVar3 = 0;
LAB_71001fba4c:
  plVar5 = (long *)(lVar3 + 0x78);
  (**(code **)(*plVar5 + 0x10))(plVar5);
  lVar3 = *(long *)(param_1 + 0x2d0);
  lVar4 = *(long *)(param_1 + 0x2c8);
  (**(code **)(*plVar5 + 0x20))(plVar5);
  return lVar3 - lVar4 >> 4;
}

