// addr:      71001e48b0
// offset:    0x1e48b0
// name:      FUN_71001e48b0
// mangled:   
// signature: undefined4 __cdecl FUN_71001e48b0(long param_1, long param_2)


undefined4 FUN_71001e48b0(long param_1,long param_2)

{
  uint uVar1;
  bool bVar2;
  uint *puVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  long lVar6;
  long *plVar7;
  undefined4 uVar8;
  long *plVar9;
  long *plVar10;
  
  plVar9 = &DAT_71052af138;
  if (DAT_71052af1d8 == '\0') {
LAB_71001e4924:
    if ((*plVar9 == 0) || (lVar6 = *(long *)(*plVar9 + 0x10), lVar6 == 0)) goto LAB_71001e4954;
    lVar6 = *(long *)(lVar6 + 0x10);
  }
  else {
    puVar3 = (uint *)FUN_7101717960(DAT_71052af1d0);
    uVar1 = *puVar3;
    if (uVar1 == 0) goto LAB_71001e4924;
    if ((ulong)uVar1 < (ulong)(DAT_71052af1b0[1] - *DAT_71052af1b0 >> 3)) {
      plVar9 = (long *)(*(long *)(*DAT_71052af1b0 + (ulong)uVar1 * 8) + 0x20);
      goto LAB_71001e4924;
    }
    FUN_71001b1300("..\\..\\..\\..\\.\\OnlineCore/src/Core/InstanceTable.h",0x47,0xe0000003,0);
LAB_71001e4954:
    lVar6 = 0;
  }
  plVar9 = (long *)(lVar6 + 0x78);
  (**(code **)(*plVar9 + 0x10))(plVar9);
  uVar4 = FUN_71001f2ba0(param_2,"RVCID",0);
  for (lVar6 = *(long *)(param_1 + 0x60); param_1 + 0x58 != lVar6; lVar6 = *(long *)(lVar6 + 8)) {
    uVar5 = FUN_71001f2ba0(lVar6 + 0x18,"RVCID",0);
    if ((int)uVar5 == (int)uVar4) goto LAB_71001e4b10;
  }
  for (lVar6 = *(long *)(param_1 + 0x40); param_1 + 0x38 != lVar6; lVar6 = *(long *)(lVar6 + 8)) {
    uVar4 = FUN_71001f2ba0(lVar6 + 0x10,"RVCID",0);
    uVar5 = FUN_71001f2ba0(param_2,"RVCID",0);
    if ((int)uVar4 == (int)uVar5) goto LAB_71001e4b10;
  }
  plVar10 = *(long **)(param_1 + 0x150);
joined_r0x0071001e4a18:
  if (plVar10 != (long *)(param_1 + 0x158)) {
    do {
      uVar4 = FUN_71001f2ba0((long)(plVar10 + 6),"RVCID",0);
      uVar5 = FUN_71001f2ba0(param_2,"RVCID",0);
      if ((int)uVar4 == (int)uVar5) goto LAB_71001e4b10;
      plVar7 = (long *)plVar10[1];
      if ((long *)plVar10[1] == (long *)0x0) {
        plVar7 = plVar10 + 2;
        bVar2 = *(long **)*plVar7 == plVar10;
        plVar10 = (long *)*plVar7;
        if (bVar2) goto joined_r0x0071001e4a18;
        do {
          lVar6 = *plVar7;
          plVar7 = (long *)(lVar6 + 0x10);
          plVar10 = (long *)*plVar7;
        } while (*plVar10 != lVar6);
      }
      else {
        do {
          plVar10 = plVar7;
          plVar7 = (long *)*plVar10;
        } while ((long *)*plVar10 != (long *)0x0);
      }
      if (plVar10 == (long *)(param_1 + 0x158)) break;
    } while( true );
  }
  for (lVar6 = *(long *)(param_1 + 0x80); param_1 + 0x78 != lVar6; lVar6 = *(long *)(lVar6 + 8)) {
    uVar4 = FUN_71001f2ba0(lVar6 + 0x18,"RVCID",0);
    uVar5 = FUN_71001f2ba0(param_2,"RVCID",0);
    if (((int)uVar4 == (int)uVar5) && (*(int *)(lVar6 + 0x90) != -1)) goto LAB_71001e4b10;
  }
  uVar8 = 1;
LAB_71001e4b14:
  (**(code **)(*plVar9 + 0x20))(plVar9);
  return uVar8;
LAB_71001e4b10:
  uVar8 = 0;
  goto LAB_71001e4b14;
}

