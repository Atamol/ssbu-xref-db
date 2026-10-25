// addr:      71001e8710
// offset:    0x1e8710
// name:      FUN_71001e8710
// mangled:   
// signature: undefined4 __cdecl FUN_71001e8710(long param_1, int param_2)


undefined4 FUN_71001e8710(long param_1,int param_2)

{
  uint uVar1;
  uint *puVar2;
  ulonglong uVar3;
  undefined4 uVar4;
  long lVar5;
  long *plVar6;
  undefined4 uVar7;
  long lVar8;
  long lVar9;
  
  plVar6 = &DAT_71052af138;
  if (DAT_71052af1d8 == '\0') {
LAB_71001e8784:
    if ((*plVar6 == 0) || (lVar5 = *(long *)(*plVar6 + 0x10), lVar5 == 0)) goto LAB_71001e87b4;
    lVar5 = *(long *)(lVar5 + 0x10);
  }
  else {
    puVar2 = (uint *)FUN_7101717960(DAT_71052af1d0);
    uVar1 = *puVar2;
    if (uVar1 == 0) goto LAB_71001e8784;
    if ((ulong)uVar1 < (ulong)(DAT_71052af1b0[1] - *DAT_71052af1b0 >> 3)) {
      plVar6 = (long *)(*(long *)(*DAT_71052af1b0 + (ulong)uVar1 * 8) + 0x20);
      goto LAB_71001e8784;
    }
    FUN_71001b1300("..\\..\\..\\..\\.\\OnlineCore/src/Core/InstanceTable.h",0x47,0xe0000003,0);
LAB_71001e87b4:
    lVar5 = 0;
  }
  plVar6 = (long *)(lVar5 + 0x78);
  (**(code **)(*plVar6 + 0x10))(plVar6);
  lVar5 = param_1 + 0x78;
  for (lVar9 = *(long *)(param_1 + 0x80); uVar7 = 999, lVar5 != lVar9; lVar9 = *(long *)(lVar9 + 8))
  {
    uVar3 = FUN_71001f2ba0(lVar9 + 0x18,"RVCID",0);
    if ((int)uVar3 == param_2) {
      lVar8 = *(long *)(param_1 + 0x80);
      if (lVar5 == lVar8) goto LAB_71001e8858;
      goto LAB_71001e8824;
    }
  }
LAB_71001e88b0:
  (**(code **)(*plVar6 + 0x20))(plVar6);
  return uVar7;
  while (lVar8 = *(long *)(lVar8 + 8), lVar5 != lVar8) {
LAB_71001e8824:
    uVar3 = FUN_71001f2ba0(lVar8 + 0x18,"RVCID",0);
    if (((int)uVar3 == param_2) && (*(int *)(lVar8 + 0x90) != -1)) {
      uVar3 = FUN_71001f2ba0(lVar8 + 0x18,"R",0);
      uVar4 = 0x6e;
      uVar7 = 100;
      goto LAB_71001e88ac;
    }
  }
LAB_71001e8858:
  if (*(int *)(lVar9 + 0xa4) == 0) {
    uVar7 = 200;
  }
  else {
    uVar3 = FUN_71001f2ba0(lVar9 + 0x18,"R",0);
    uVar4 = 0xd2;
    uVar7 = 0xc9;
LAB_71001e88ac:
    if (uVar3 != 0) {
      uVar7 = uVar4;
    }
  }
  goto LAB_71001e88b0;
}

