// addr:      71001d11f0
// offset:    0x1d11f0
// name:      FUN_71001d11f0
// mangled:   
// signature: undefined __cdecl FUN_71001d11f0(long param_1)


void FUN_71001d11f0(long param_1)

{
  uint uVar1;
  uint uVar2;
  long *plVar3;
  uint *puVar4;
  long *plVar5;
  int iVar6;
  long lVar7;
  long *plVar8;
  long *plVar9;
  
  plVar5 = &DAT_71052af138;
  if (DAT_71052af1d8 != '\0') {
    puVar4 = (uint *)FUN_7101717960(DAT_71052af1d0);
    uVar1 = *puVar4;
    if (uVar1 != 0) {
      if ((ulong)(DAT_71052af1b0[1] - *DAT_71052af1b0 >> 3) <= (ulong)uVar1) {
        FUN_71001b1300("..\\..\\..\\..\\.\\OnlineCore/src/Core/InstanceTable.h",0x47,0xe0000003,0);
        return;
      }
      plVar5 = (long *)(*(long *)(*DAT_71052af1b0 + (ulong)uVar1 * 8) + 0x20);
    }
  }
  lVar7 = *(long *)(*(long *)(*plVar5 + 0x10) + 0x18);
  uVar1 = *(uint *)(lVar7 + 0x78);
  iVar6 = 1;
  if (uVar1 != 0xffffffff) {
    iVar6 = uVar1 + 1;
  }
  *(int *)(lVar7 + 0x78) = iVar6;
  plVar8 = (long *)(lVar7 + 0x50);
  plVar9 = (long *)*plVar8;
  plVar5 = plVar8;
  if (plVar9 != (long *)0x0) {
    uVar2 = *(uint *)(plVar9 + 4);
    plVar8 = (long *)(lVar7 + 0x50);
    while( true ) {
      while (plVar3 = plVar9, plVar5 = plVar3, uVar1 < uVar2) {
        plVar9 = (long *)*plVar3;
        if (plVar9 == (long *)0x0) {
          plVar9 = (long *)*plVar3;
          goto joined_r0x0071001d12ec;
        }
        uVar2 = *(uint *)(plVar9 + 4);
        plVar8 = plVar3;
      }
      if (uVar1 <= uVar2) break;
      plVar8 = plVar3 + 1;
      plVar9 = (long *)*plVar8;
      if (plVar9 == (long *)0x0) break;
      uVar2 = *(uint *)(plVar9 + 4);
    }
  }
  plVar9 = (long *)*plVar8;
  plVar3 = plVar8;
joined_r0x0071001d12ec:
  if (plVar9 == (long *)0x0) {
    plVar9 = FUN_71001b1820(0x30);
    *(uint *)(plVar9 + 4) = uVar1;
    plVar9[5] = 0;
    *plVar9 = 0;
    plVar9[1] = 0;
    plVar9[2] = (long)plVar5;
    *plVar3 = (long)plVar9;
    plVar5 = plVar9;
    if (**(long **)(lVar7 + 0x48) != 0) {
      *(long *)(lVar7 + 0x48) = **(long **)(lVar7 + 0x48);
      plVar5 = (long *)*plVar3;
    }
    std::__tree_balance_after_insert<std::__tree_node_base<void*>*>(*(long **)(lVar7 + 0x50),plVar5)
    ;
    *(long *)(lVar7 + 0x58) = *(long *)(lVar7 + 0x58) + 1;
  }
  plVar9[5] = param_1;
  *(uint *)(param_1 + 0x18) = uVar1;
  return;
}

