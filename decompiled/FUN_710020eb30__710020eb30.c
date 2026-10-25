// addr:      710020eb30
// offset:    0x20eb30
// name:      FUN_710020eb30
// mangled:   
// signature: undefined __cdecl FUN_710020eb30(long param_1, ulong * param_2)


void FUN_710020eb30(long param_1,ulong *param_2)

{
  uint uVar1;
  bool bVar2;
  uint *puVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  ulong uVar7;
  long *plVar8;
  
  plVar5 = &DAT_71052af138;
  if (DAT_71052af1d8 == '\0') {
LAB_710020eb9c:
    if ((*plVar5 != 0) && (lVar4 = *(long *)(*plVar5 + 0x10), lVar4 != 0)) {
      lVar4 = *(long *)(lVar4 + 0x10);
      goto LAB_710020ebd0;
    }
  }
  else {
    puVar3 = (uint *)FUN_7101717960(DAT_71052af1d0);
    uVar1 = *puVar3;
    if (uVar1 == 0) goto LAB_710020eb9c;
    if ((ulong)uVar1 < (ulong)(DAT_71052af1b0[1] - *DAT_71052af1b0 >> 3)) {
      plVar5 = (long *)(*(long *)(*DAT_71052af1b0 + (ulong)uVar1 * 8) + 0x20);
      goto LAB_710020eb9c;
    }
    FUN_71001b1300("..\\..\\..\\..\\.\\OnlineCore/src/Core/InstanceTable.h",0x47,0xe0000003,0);
  }
  lVar4 = 0;
LAB_710020ebd0:
  plVar8 = (long *)(lVar4 + 0x78);
  (**(code **)(*plVar8 + 0x10))(plVar8);
  plVar5 = *(long **)(param_1 + 0x20);
  while (plVar5 != (long *)(param_1 + 0x28)) {
    uVar7 = *(ulong *)(*(long *)(plVar5[5] + 0x1f0) + 0x18);
    if ((uVar7 != 0) && (*param_2 < uVar7)) {
      *(ulong *)(*(long *)(plVar5[5] + 0x1f0) + 0x18) = *param_2;
    }
    plVar6 = (long *)plVar5[1];
    if ((long *)plVar5[1] == (long *)0x0) {
      plVar6 = plVar5 + 2;
      bVar2 = *(long **)*plVar6 != plVar5;
      plVar5 = (long *)*plVar6;
      if (bVar2) {
        do {
          lVar4 = *plVar6;
          plVar6 = (long *)(lVar4 + 0x10);
          plVar5 = (long *)*plVar6;
        } while (*plVar5 != lVar4);
      }
    }
    else {
      do {
        plVar5 = plVar6;
        plVar6 = (long *)*plVar5;
      } while ((long *)*plVar5 != (long *)0x0);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00710020ec78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar8 + 0x20))(plVar8);
  return;
}

