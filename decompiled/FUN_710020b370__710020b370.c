// addr:      710020b370
// offset:    0x20b370
// name:      FUN_710020b370
// mangled:   
// signature: undefined __cdecl FUN_710020b370(long param_1, long * param_2)


void FUN_710020b370(long param_1,long *param_2)

{
  uint uVar1;
  uint *puVar2;
  long lVar3;
  long *plVar4;
  
  if (DAT_7104f561d1 == '\0') {
    if ((int)param_2[0x14] != 0) {
      *(int *)(param_2 + 0x14) = (int)param_2[0x14] + -1;
    }
    FUN_7100206870(param_1,param_2);
    return;
  }
  plVar4 = &DAT_71052af138;
  if (DAT_71052af1d8 == '\0') {
LAB_710020b3ec:
    if ((*plVar4 != 0) && (lVar3 = *(long *)(*plVar4 + 0x10), lVar3 != 0)) {
      lVar3 = *(long *)(lVar3 + 0x10);
      goto LAB_710020b448;
    }
  }
  else {
    puVar2 = (uint *)FUN_7101717960(DAT_71052af1d0);
    uVar1 = *puVar2;
    if (uVar1 == 0) goto LAB_710020b3ec;
    if ((ulong)uVar1 < (ulong)(DAT_71052af1b0[1] - *DAT_71052af1b0 >> 3)) {
      plVar4 = (long *)(*(long *)(*DAT_71052af1b0 + (ulong)uVar1 * 8) + 0x20);
      goto LAB_710020b3ec;
    }
    FUN_71001b1300("..\\..\\..\\..\\.\\OnlineCore/src/Core/InstanceTable.h",0x47,0xe0000003,0);
  }
  lVar3 = 0;
LAB_710020b448:
  plVar4 = (long *)(lVar3 + 0x78);
  (**(code **)(*plVar4 + 0x10))(plVar4);
  if ((int)param_2[0x14] != 0) {
    *(int *)(param_2 + 0x14) = (int)param_2[0x14] + -1;
  }
  FUN_7100206870(param_1,param_2);
                    /* WARNING: Could not recover jumptable at 0x00710020b48c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar4 + 0x20))(plVar4);
  return;
}

