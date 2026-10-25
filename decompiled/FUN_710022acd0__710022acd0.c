// addr:      710022acd0
// offset:    0x22acd0
// name:      FUN_710022acd0
// mangled:   
// signature: undefined __cdecl FUN_710022acd0(long param_1)


void FUN_710022acd0(long param_1)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  uint *puVar4;
  uint uVar5;
  long *plVar6;
  
  lVar1 = *(long *)(param_1 + 0x10);
  lVar2 = *(long *)(param_1 + 0x18);
  if ((ulong)(*(long *)(lVar1 + 0x18) - lVar2) < 4) {
    uVar5 = 0;
    *(undefined1 *)(param_1 + 8) = 1;
  }
  else {
    uVar5 = *(uint *)(*(long *)(lVar1 + 0x10) + *(long *)(lVar1 + 0x28) + lVar2);
    *(long *)(param_1 + 0x18) = lVar2 + 4;
  }
  plVar6 = &DAT_71052af138;
  if (DAT_71052af1d8 != '\0') {
    puVar4 = (uint *)FUN_7101717960(DAT_71052af1d0);
    uVar3 = *puVar4;
    if (uVar3 != 0) {
      if ((ulong)(DAT_71052af1b0[1] - *DAT_71052af1b0 >> 3) <= (ulong)uVar3) {
        FUN_71001b1300("..\\..\\..\\..\\.\\OnlineCore/src/Core/InstanceTable.h",0x47,0xe0000003,0);
        return;
      }
      plVar6 = (long *)(*(long *)(*DAT_71052af1b0 + (ulong)uVar3 * 8) + 0x20);
    }
  }
  FUN_71001cd7d0(*(long *)(*(long *)(*plVar6 + 0x10) + 0x18),uVar5);
  return;
}

