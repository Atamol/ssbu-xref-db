// addr:      71001f4150
// offset:    0x1f4150
// name:      FUN_71001f4150
// mangled:   
// signature: undefined __cdecl FUN_71001f4150(long param_1)


void FUN_71001f4150(long param_1)

{
  uint uVar1;
  uint *puVar2;
  long lVar3;
  long *plVar4;
  ulong local_28;
  
  plVar4 = &DAT_71052af138;
  if (DAT_71052af1d8 == '\0') {
LAB_71001f41b8:
    if ((*plVar4 != 0) && (lVar3 = *(long *)(*plVar4 + 0x10), lVar3 != 0)) {
      lVar3 = *(long *)(lVar3 + 0x10);
      goto LAB_71001f41ec;
    }
  }
  else {
    puVar2 = (uint *)FUN_7101717960(DAT_71052af1d0);
    uVar1 = *puVar2;
    if (uVar1 == 0) goto LAB_71001f41b8;
    if ((ulong)uVar1 < (ulong)(DAT_71052af1b0[1] - *DAT_71052af1b0 >> 3)) {
      plVar4 = (long *)(*(long *)(*DAT_71052af1b0 + (ulong)uVar1 * 8) + 0x20);
      goto LAB_71001f41b8;
    }
    FUN_71001b1300("..\\..\\..\\..\\.\\OnlineCore/src/Core/InstanceTable.h",0x47,0xe0000003,0);
  }
  lVar3 = 0;
LAB_71001f41ec:
  plVar4 = (long *)(lVar3 + 0x78);
  (**(code **)(*plVar4 + 0x10))(plVar4);
  FUN_71001b12a0(&local_28);
  if ((long)*(int *)(param_1 + 0xc) < (long)(local_28 - *(long *)(param_1 + 0x10))) {
    *(ulong *)(param_1 + 0x10) = local_28;
  }
  (**(code **)(*plVar4 + 0x20))(plVar4);
  return;
}

