// addr:      71002aa710
// offset:    0x2aa710
// name:      FUN_71002aa710
// mangled:   
// signature: bool __cdecl FUN_71002aa710(long param_1)


bool FUN_71002aa710(long param_1)

{
  uint uVar1;
  undefined1 uVar2;
  uint *puVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  
  plVar4 = &DAT_71052af138;
  if (DAT_71052af1d8 == '\0') {
LAB_71002aa778:
    if ((*plVar4 != 0) && (lVar5 = *(long *)(*plVar4 + 0x10), lVar5 != 0)) {
      lVar5 = *(long *)(lVar5 + 0x10);
      goto LAB_71002aa7ac;
    }
  }
  else {
    puVar3 = (uint *)FUN_7101717960(DAT_71052af1d0);
    uVar1 = *puVar3;
    if (uVar1 == 0) goto LAB_71002aa778;
    if ((ulong)uVar1 < (ulong)(DAT_71052af1b0[1] - *DAT_71052af1b0 >> 3)) {
      plVar4 = (long *)(*(long *)(*DAT_71052af1b0 + (ulong)uVar1 * 8) + 0x20);
      goto LAB_71002aa778;
    }
    FUN_71001b1300("..\\..\\..\\..\\.\\OnlineCore/src/Core/InstanceTable.h",0x47,0xe0000003,0);
  }
  lVar5 = 0;
LAB_71002aa7ac:
  plVar6 = (long *)(lVar5 + 0x78);
  (**(code **)(*plVar6 + 0x10))(plVar6);
  plVar4 = &DAT_71052af138;
  if (DAT_71052af1d8 != '\0') {
    puVar3 = (uint *)FUN_7101717960(DAT_71052af1d0);
    uVar1 = *puVar3;
    if (uVar1 != 0) {
      if ((ulong)(DAT_71052af1b0[1] - *DAT_71052af1b0 >> 3) <= (ulong)uVar1) {
        uVar2 = FUN_71001b1300("..\\..\\..\\..\\.\\OnlineCore/src/Core/InstanceTable.h",0x47,
                               0xe0000003,0);
        return (bool)uVar2;
      }
      plVar4 = (long *)(*(long *)(*DAT_71052af1b0 + (ulong)uVar1 * 8) + 0x20);
    }
  }
  plVar4 = (long *)FUN_71001cd7d0(*(long *)(*(long *)(*plVar4 + 0x10) + 0x18),
                                  *(uint *)(param_1 + 0x40));
  if (plVar4 != (long *)0x0) {
    FUN_71001d0a10(plVar4);
    *(undefined4 *)(param_1 + 0x40) = 0;
  }
  (**(code **)(*plVar6 + 0x20))(plVar6);
  return plVar4 != (long *)0x0;
}

