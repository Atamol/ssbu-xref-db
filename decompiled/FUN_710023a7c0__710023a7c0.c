// addr:      710023a7c0
// offset:    0x23a7c0
// name:      FUN_710023a7c0
// mangled:   
// signature: undefined __cdecl FUN_710023a7c0(undefined8 param_1, long param_2, long param_3)


void FUN_710023a7c0(undefined8 param_1,long param_2,long param_3)

{
  uint uVar1;
  uint *puVar2;
  long lVar3;
  long *plVar4;
  long local_28;
  
  local_28 = param_3;
  FUN_71001d1960(param_2,0x710023a8b0,&local_28,0);
  plVar4 = &DAT_71052af138;
  if (DAT_71052af1d8 == '\0') {
LAB_710023a840:
    if ((*plVar4 != 0) && (lVar3 = *(long *)(*plVar4 + 0x10), lVar3 != 0)) {
      lVar3 = *(long *)(lVar3 + 0x10);
      goto LAB_710023a874;
    }
  }
  else {
    puVar2 = (uint *)FUN_7101717960(DAT_71052af1d0);
    uVar1 = *puVar2;
    if (uVar1 == 0) goto LAB_710023a840;
    if ((ulong)uVar1 < (ulong)(DAT_71052af1b0[1] - *DAT_71052af1b0 >> 3)) {
      plVar4 = (long *)(*(long *)(*DAT_71052af1b0 + (ulong)uVar1 * 8) + 0x20);
      goto LAB_710023a840;
    }
    FUN_71001b1300("..\\..\\..\\..\\.\\OnlineCore/src/Core/InstanceTable.h",0x47,0xe0000003,0);
  }
  lVar3 = 0;
LAB_710023a874:
  plVar4 = (long *)(lVar3 + 0x78);
  (**(code **)(*plVar4 + 0x10))(plVar4);
  (**(code **)(*plVar4 + 0x20))(plVar4);
  return;
}

