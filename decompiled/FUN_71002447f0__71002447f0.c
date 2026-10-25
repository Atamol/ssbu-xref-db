// addr:      71002447f0
// offset:    0x2447f0
// name:      FUN_71002447f0
// mangled:   
// signature: undefined FUN_71002447f0(void)


void FUN_71002447f0(undefined8 param_1,long *param_2)

{
  uint uVar1;
  uint *puVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  
  lVar4 = *param_2;
  plVar5 = &DAT_71052af138;
  if (DAT_71052af1d8 == '\0') {
LAB_7100244858:
    if ((*plVar5 != 0) && (lVar3 = *(long *)(*plVar5 + 0x10), lVar3 != 0)) {
      lVar3 = *(long *)(lVar3 + 0x10);
      goto LAB_710024488c;
    }
  }
  else {
    puVar2 = (uint *)FUN_7101717960(DAT_71052af1d0);
    uVar1 = *puVar2;
    if (uVar1 == 0) goto LAB_7100244858;
    if ((ulong)uVar1 < (ulong)(DAT_71052af1b0[1] - *DAT_71052af1b0 >> 3)) {
      plVar5 = (long *)(*(long *)(*DAT_71052af1b0 + (ulong)uVar1 * 8) + 0x20);
      goto LAB_7100244858;
    }
    FUN_71001b1300("..\\..\\..\\..\\.\\OnlineCore/src/Core/InstanceTable.h",0x47,0xe0000003,0);
  }
  lVar3 = 0;
LAB_710024488c:
  plVar5 = (long *)(lVar3 + 0x78);
  (**(code **)(*plVar5 + 0x10))(plVar5);
  if (*(int *)(lVar4 + 0x40) == 2) {
    FUN_71001d6410(lVar4,3);
  }
                    /* WARNING: Could not recover jumptable at 0x0071002448cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar5 + 0x20))(plVar5);
  return;
}

