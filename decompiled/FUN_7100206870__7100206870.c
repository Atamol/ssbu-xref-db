// addr:      7100206870
// offset:    0x206870
// name:      FUN_7100206870
// mangled:   
// signature: undefined __cdecl FUN_7100206870(long param_1, long * param_2)


void FUN_7100206870(long param_1,long *param_2)

{
  uint uVar1;
  uint *puVar2;
  long lVar3;
  long *plVar4;
  
  if (DAT_7104f561d1 == '\0') {
    FUN_710020b6f0(param_1,param_2);
    return;
  }
  plVar4 = &DAT_71052af138;
  if (DAT_71052af1d8 == '\0') {
LAB_71002068ec:
    if ((*plVar4 != 0) && (lVar3 = *(long *)(*plVar4 + 0x10), lVar3 != 0)) {
      lVar3 = *(long *)(lVar3 + 0x10);
      goto LAB_7100206938;
    }
  }
  else {
    puVar2 = (uint *)FUN_7101717960(DAT_71052af1d0);
    uVar1 = *puVar2;
    if (uVar1 == 0) goto LAB_71002068ec;
    if ((ulong)uVar1 < (ulong)(DAT_71052af1b0[1] - *DAT_71052af1b0 >> 3)) {
      plVar4 = (long *)(*(long *)(*DAT_71052af1b0 + (ulong)uVar1 * 8) + 0x20);
      goto LAB_71002068ec;
    }
    FUN_71001b1300("..\\..\\..\\..\\.\\OnlineCore/src/Core/InstanceTable.h",0x47,0xe0000003,0);
  }
  lVar3 = 0;
LAB_7100206938:
  plVar4 = (long *)(lVar3 + 0x78);
  (**(code **)(*plVar4 + 0x10))(plVar4);
  FUN_710020b6f0(param_1,param_2);
                    /* WARNING: Could not recover jumptable at 0x00710020696c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar4 + 0x20))(plVar4);
  return;
}

