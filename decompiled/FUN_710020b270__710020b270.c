// addr:      710020b270
// offset:    0x20b270
// name:      FUN_710020b270
// mangled:   
// signature: undefined FUN_710020b270(void)


undefined8 FUN_710020b270(undefined8 param_1,long param_2)

{
  uint uVar1;
  uint *puVar2;
  long lVar3;
  long *plVar4;
  
  if (DAT_7104f561d1 == '\0') {
    *(int *)(param_2 + 0xa0) = *(int *)(param_2 + 0xa0) + 1;
    return 1;
  }
  plVar4 = &DAT_71052af138;
  if (DAT_71052af1d8 == '\0') {
LAB_710020b2e8:
    if ((*plVar4 != 0) && (lVar3 = *(long *)(*plVar4 + 0x10), lVar3 != 0)) {
      lVar3 = *(long *)(lVar3 + 0x10);
      goto LAB_710020b32c;
    }
  }
  else {
    puVar2 = (uint *)FUN_7101717960(DAT_71052af1d0);
    uVar1 = *puVar2;
    if (uVar1 == 0) goto LAB_710020b2e8;
    if ((ulong)uVar1 < (ulong)(DAT_71052af1b0[1] - *DAT_71052af1b0 >> 3)) {
      plVar4 = (long *)(*(long *)(*DAT_71052af1b0 + (ulong)uVar1 * 8) + 0x20);
      goto LAB_710020b2e8;
    }
    FUN_71001b1300("..\\..\\..\\..\\.\\OnlineCore/src/Core/InstanceTable.h",0x47,0xe0000003,0);
  }
  lVar3 = 0;
LAB_710020b32c:
  plVar4 = (long *)(lVar3 + 0x78);
  (**(code **)(*plVar4 + 0x10))(plVar4);
  *(int *)(param_2 + 0xa0) = *(int *)(param_2 + 0xa0) + 1;
  (**(code **)(*plVar4 + 0x20))(plVar4);
  return 1;
}

