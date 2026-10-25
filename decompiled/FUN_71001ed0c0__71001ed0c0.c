// addr:      71001ed0c0
// offset:    0x1ed0c0
// name:      FUN_71001ed0c0
// mangled:   
// signature: bool __cdecl FUN_71001ed0c0(long param_1, undefined8 param_2)


bool FUN_71001ed0c0(long param_1,undefined8 param_2)

{
  bool bVar1;
  uint uVar2;
  uint *puVar3;
  long lVar4;
  long *plVar5;
  
  plVar5 = &DAT_71052af138;
  if (DAT_71052af1d8 == '\0') {
LAB_71001ed12c:
    if ((*plVar5 != 0) && (lVar4 = *(long *)(*plVar5 + 0x10), lVar4 != 0)) {
      lVar4 = *(long *)(lVar4 + 0x10);
      goto LAB_71001ed160;
    }
  }
  else {
    puVar3 = (uint *)FUN_7101717960(DAT_71052af1d0);
    uVar2 = *puVar3;
    if (uVar2 == 0) goto LAB_71001ed12c;
    if ((ulong)uVar2 < (ulong)(DAT_71052af1b0[1] - *DAT_71052af1b0 >> 3)) {
      plVar5 = (long *)(*(long *)(*DAT_71052af1b0 + (ulong)uVar2 * 8) + 0x20);
      goto LAB_71001ed12c;
    }
    FUN_71001b1300("..\\..\\..\\..\\.\\OnlineCore/src/Core/InstanceTable.h",0x47,0xe0000003,0);
  }
  lVar4 = 0;
LAB_71001ed160:
  plVar5 = (long *)(lVar4 + 0x78);
  (**(code **)(*plVar5 + 0x10))(plVar5);
  bVar1 = *(long *)(param_1 + 0x18) == 0;
  if (bVar1) {
    *(undefined8 *)(param_1 + 0x18) = param_2;
  }
  (**(code **)(*plVar5 + 0x20))(plVar5);
  return bVar1;
}

