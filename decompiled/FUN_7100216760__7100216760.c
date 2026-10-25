// addr:      7100216760
// offset:    0x216760
// name:      FUN_7100216760
// mangled:   
// signature: bool __cdecl FUN_7100216760(long param_1)


bool FUN_7100216760(long param_1)

{
  uint uVar1;
  char cVar2;
  uint *puVar3;
  long lVar4;
  long *plVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  
  if ((*(ushort *)(param_1 + 0x60) & 0xf) == 7) {
    return true;
  }
  if (*(char *)(param_1 + 0x210) != '\0') {
    return true;
  }
  uVar7 = (ulong)*(byte *)(param_1 + 0x42);
  if (DAT_71052af1d8 == '\0') {
LAB_710021683c:
    cVar2 = (&DAT_71052af530)[uVar7 * 0x2e8];
  }
  else {
    puVar3 = (uint *)FUN_7101717960(DAT_71052af1d0);
    if (*puVar3 == 0) goto LAB_710021683c;
    cVar2 = *(char *)(*(long *)(&DAT_71052af4e8 + uVar7 * 0x2e8) + (ulong)*puVar3 * 0x168 + 0x40);
  }
  if (cVar2 == '\0') {
    return true;
  }
  uVar6 = *(ulong *)(param_1 + 0x1d8);
  if (DAT_71052af1d8 == '\0') {
LAB_710021685c:
    lVar8 = uVar7 * 0x2e8 + 0x71052af4f0;
  }
  else {
    puVar3 = (uint *)FUN_7101717960(DAT_71052af1d0);
    if (*puVar3 == 0) goto LAB_710021685c;
    lVar8 = *(long *)(&DAT_71052af4e8 + uVar7 * 0x2e8) + (ulong)*puVar3 * 0x168;
  }
  plVar5 = &DAT_71052af138;
  if (DAT_71052af1d8 == '\0') {
LAB_71002168c0:
    if ((*plVar5 != 0) && (lVar4 = *(long *)(*plVar5 + 0x10), lVar4 != 0)) {
      lVar4 = *(long *)(lVar4 + 0x10);
      goto LAB_71002168f4;
    }
  }
  else {
    puVar3 = (uint *)FUN_7101717960(DAT_71052af1d0);
    uVar1 = *puVar3;
    if (uVar1 == 0) goto LAB_71002168c0;
    if ((ulong)uVar1 < (ulong)(DAT_71052af1b0[1] - *DAT_71052af1b0 >> 3)) {
      plVar5 = (long *)(*(long *)(*DAT_71052af1b0 + (ulong)uVar1 * 8) + 0x20);
      goto LAB_71002168c0;
    }
    FUN_71001b1300("..\\..\\..\\..\\.\\OnlineCore/src/Core/InstanceTable.h",0x47,0xe0000003,0);
  }
  lVar4 = 0;
LAB_71002168f4:
  plVar5 = (long *)(lVar4 + 0x78);
  (**(code **)(*plVar5 + 0x10))(plVar5);
  FUN_71001f4150(lVar8 + 0x38);
  uVar7 = *(ulong *)(lVar8 + 0x48);
  (**(code **)(*plVar5 + 0x20))(plVar5);
  return uVar6 <= uVar7;
}

