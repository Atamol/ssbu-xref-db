// addr:      71001e85d0
// offset:    0x1e85d0
// name:      FUN_71001e85d0
// mangled:   
// signature: int __cdecl FUN_71001e85d0(long param_1, int param_2)


int FUN_71001e85d0(long param_1,int param_2)

{
  uint uVar1;
  uint *puVar2;
  ulonglong uVar3;
  long lVar4;
  long *plVar5;
  int iVar6;
  
  plVar5 = &DAT_71052af138;
  if (DAT_71052af1d8 == '\0') {
LAB_71001e8644:
    if ((*plVar5 != 0) && (lVar4 = *(long *)(*plVar5 + 0x10), lVar4 != 0)) {
      lVar4 = *(long *)(lVar4 + 0x10);
      goto LAB_71001e8678;
    }
  }
  else {
    puVar2 = (uint *)FUN_7101717960(DAT_71052af1d0);
    uVar1 = *puVar2;
    if (uVar1 == 0) goto LAB_71001e8644;
    if ((ulong)uVar1 < (ulong)(DAT_71052af1b0[1] - *DAT_71052af1b0 >> 3)) {
      plVar5 = (long *)(*(long *)(*DAT_71052af1b0 + (ulong)uVar1 * 8) + 0x20);
      goto LAB_71001e8644;
    }
    FUN_71001b1300("..\\..\\..\\..\\.\\OnlineCore/src/Core/InstanceTable.h",0x47,0xe0000003,0);
  }
  lVar4 = 0;
LAB_71001e8678:
  plVar5 = (long *)(lVar4 + 0x78);
  (**(code **)(*plVar5 + 0x10))(plVar5);
  lVar4 = *(long *)(param_1 + 0x80);
  if (param_1 + 0x78 == lVar4) {
    iVar6 = -1;
  }
  else {
    do {
      uVar3 = FUN_71001f2ba0(lVar4 + 0x18,"RVCID",0);
      if (((int)uVar3 == param_2) && (iVar6 = *(int *)(lVar4 + 0x90), iVar6 != -1))
      goto LAB_71001e86e0;
      lVar4 = *(long *)(lVar4 + 8);
    } while (param_1 + 0x78 != lVar4);
    iVar6 = -1;
  }
LAB_71001e86e0:
  (**(code **)(*plVar5 + 0x20))(plVar5);
  return iVar6;
}

