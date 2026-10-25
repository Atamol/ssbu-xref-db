// addr:      71001e9a60
// offset:    0x1e9a60
// name:      FUN_71001e9a60
// mangled:   
// signature: undefined8 __cdecl FUN_71001e9a60(long param_1, long param_2, ulong param_3)


undefined8 FUN_71001e9a60(long param_1,long param_2,ulong param_3)

{
  uint uVar1;
  bool bVar2;
  uint *puVar3;
  long lVar4;
  ulonglong uVar5;
  undefined8 uVar6;
  long *plVar7;
  
  plVar7 = &DAT_71052af128;
  if (DAT_71052af1d8 != '\0') {
    puVar3 = (uint *)FUN_7101717960(DAT_71052af1d0);
    uVar1 = *puVar3;
    if (uVar1 != 0) {
      if ((ulong)(DAT_71052af1b0[1] - *DAT_71052af1b0 >> 3) <= (ulong)uVar1) {
        uVar6 = FUN_71001b1300("..\\..\\..\\..\\.\\OnlineCore/src/Core/InstanceTable.h",0x47,
                               0xe0000003,0);
        return uVar6;
      }
      plVar7 = (long *)(*(long *)(*DAT_71052af1b0 + (ulong)uVar1 * 8) + 0x10);
    }
  }
  lVar4 = (**(code **)(**(long **)(*(long *)(*plVar7 + 0x10) + 0xe8) + 0x80))();
  if ((((*(char *)(lVar4 + 0x10) == '\0') ||
       (bVar2 = FUN_71001b4e00(*(char **)(param_1 + 0x180),""), bVar2)) ||
      (*(short *)(param_1 + 400) == 0)) ||
     (((param_3 & 1) != 0 &&
      ((uVar5 = FUN_71001f2ba0(param_2,"R",0), uVar5 != 0 ||
       (uVar5 = FUN_71001f2ba0(param_2,"type",0), ((uint)uVar5 >> 1 & 1) == 0)))))) {
    uVar6 = 0;
  }
  else {
    uVar6 = 1;
  }
  return uVar6;
}

