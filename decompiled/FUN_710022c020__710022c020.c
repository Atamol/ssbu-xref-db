// addr:      710022c020
// offset:    0x22c020
// name:      FUN_710022c020
// mangled:   
// signature: undefined __cdecl FUN_710022c020(undefined8 param_1)


void FUN_710022c020(undefined8 param_1)

{
  uint uVar1;
  uint *puVar2;
  ulong uVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  
  plVar5 = &DAT_71052af138;
  if (DAT_71052af1d8 == '\0') {
LAB_710022c088:
    if ((*plVar5 != 0) && (lVar4 = *(long *)(*plVar5 + 0x10), lVar4 != 0)) {
      lVar4 = *(long *)(lVar4 + 0x10);
      goto LAB_710022c0bc;
    }
  }
  else {
    puVar2 = (uint *)FUN_7101717960(DAT_71052af1d0);
    uVar1 = *puVar2;
    if (uVar1 == 0) goto LAB_710022c088;
    if ((ulong)uVar1 < (ulong)(DAT_71052af1b0[1] - *DAT_71052af1b0 >> 3)) {
      plVar5 = (long *)(*(long *)(*DAT_71052af1b0 + (ulong)uVar1 * 8) + 0x20);
      goto LAB_710022c088;
    }
    FUN_71001b1300("..\\..\\..\\..\\.\\OnlineCore/src/Core/InstanceTable.h",0x47,0xe0000003,0);
  }
  lVar4 = 0;
LAB_710022c0bc:
  plVar6 = (long *)(lVar4 + 0x78);
  (**(code **)(*plVar6 + 0x10))(plVar6);
  plVar5 = DAT_71052b5650;
  if ((DAT_71052b5650 != (long *)0x0) &&
     (uVar3 = (**(code **)(*DAT_71052b5650 + 0x28))(DAT_71052b5650), (uVar3 & 1) != 0)) {
    (**(code **)(*plVar5 + 0x20))(plVar5,param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00710022c11c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar6 + 0x20))(plVar6);
  return;
}

