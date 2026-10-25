// addr:      71001e3a10
// offset:    0x1e3a10
// name:      FUN_71001e3a10
// mangled:   
// signature: bool __cdecl FUN_71001e3a10(undefined8 param_1, long param_2)


bool FUN_71001e3a10(undefined8 param_1,long param_2)

{
  uint uVar1;
  bool bVar2;
  undefined1 uVar3;
  uint *puVar4;
  long lVar5;
  long *plVar6;
  undefined8 auStack_c0 [18];
  
  FUN_71001beb40(auStack_c0);
  plVar6 = &DAT_71052af128;
  if (DAT_71052af1d8 != '\0') {
    puVar4 = (uint *)FUN_7101717960(DAT_71052af1d0);
    uVar1 = *puVar4;
    if (uVar1 != 0) {
      if ((ulong)(DAT_71052af1b0[1] - *DAT_71052af1b0 >> 3) <= (ulong)uVar1) {
        uVar3 = FUN_71001b1300("..\\..\\..\\..\\.\\OnlineCore/src/Core/InstanceTable.h",0x47,
                               0xe0000003,0);
        return (bool)uVar3;
      }
      plVar6 = (long *)(*(long *)(*DAT_71052af1b0 + (ulong)uVar1 * 8) + 0x10);
    }
  }
  lVar5 = (**(code **)(**(long **)(*(long *)(*plVar6 + 0x10) + 0xe8) + 0x78))();
  lVar5 = *(long *)(lVar5 + 0x18);
  if (*(char *)(param_2 + 0x68) == '\0') {
    FUN_71001f2180(param_2);
  }
  plVar6 = FUN_710021efd0(lVar5 + 0x98,*(long *)(param_2 + 8));
  bVar2 = (long *)(lVar5 + 0xa0) != plVar6;
  if (bVar2) {
    *(undefined4 *)(plVar6 + 0x28) = *(undefined4 *)(lVar5 + 0xb0);
    FUN_71001bec20((long)auStack_c0,(long)(plVar6 + 0x16));
  }
  FUN_71001bef00();
  return bVar2;
}

