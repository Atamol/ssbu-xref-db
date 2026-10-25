// addr:      710023c070
// offset:    0x23c070
// name:      FUN_710023c070
// mangled:   
// signature: undefined FUN_710023c070(void)


void FUN_710023c070(long param_1,long param_2,long param_3)

{
  uint uVar1;
  uint *puVar2;
  undefined8 *puVar3;
  long lVar4;
  long *plVar5;
  
  plVar5 = &DAT_71052af138;
  if (DAT_71052af1d8 == '\0') {
LAB_710023c0e4:
    if ((*plVar5 != 0) && (lVar4 = *(long *)(*plVar5 + 0x10), lVar4 != 0)) {
      lVar4 = *(long *)(lVar4 + 0x10);
      puVar3 = FUN_71001af850(0xe8);
      goto joined_r0x00710023c104;
    }
  }
  else {
    puVar2 = (uint *)FUN_7101717960(DAT_71052af1d0);
    uVar1 = *puVar2;
    if (uVar1 == 0) goto LAB_710023c0e4;
    if ((ulong)uVar1 < (ulong)(DAT_71052af1b0[1] - *DAT_71052af1b0 >> 3)) {
      plVar5 = (long *)(*(long *)(*DAT_71052af1b0 + (ulong)uVar1 * 8) + 0x20);
      goto LAB_710023c0e4;
    }
    FUN_71001b1300("..\\..\\..\\..\\.\\OnlineCore/src/Core/InstanceTable.h",0x47,0xe0000003,0);
  }
  lVar4 = 0;
  puVar3 = FUN_71001af850(0xe8);
joined_r0x00710023c104:
  if (puVar3 != (undefined8 *)0x0) {
    FUN_710022b6a0(puVar3,*(undefined8 *)(param_1 + 0x28),param_2,param_3);
  }
  FUN_71001ccdf0(lVar4,(long)puVar3,0);
  return;
}

