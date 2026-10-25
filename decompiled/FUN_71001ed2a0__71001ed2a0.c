// addr:      71001ed2a0
// offset:    0x1ed2a0
// name:      FUN_71001ed2a0
// mangled:   
// signature: undefined8 __cdecl FUN_71001ed2a0(undefined8 param_1, undefined8 param_2)


undefined8 FUN_71001ed2a0(undefined8 param_1,undefined8 param_2)

{
  uint uVar1;
  uint *puVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  
  plVar6 = &DAT_71052af128;
  if (DAT_71052af1d8 != '\0') {
    puVar2 = (uint *)FUN_7101717960(DAT_71052af1d0);
    uVar1 = *puVar2;
    if (uVar1 != 0) {
      if ((ulong)(DAT_71052af1b0[1] - *DAT_71052af1b0 >> 3) <= (ulong)uVar1) {
        FUN_71001b1300("..\\..\\..\\..\\.\\OnlineCore/src/Core/InstanceTable.h",0x47,0xe0000003,0);
        return 0;
      }
      plVar6 = (long *)(*(long *)(*DAT_71052af1b0 + (ulong)uVar1 * 8) + 0x10);
    }
  }
  if (*plVar6 == 0) {
    return 0;
  }
  if (*(long *)(*plVar6 + 0x10) == 0) {
    return 0;
  }
  if (DAT_71052af1d8 == '\0') {
    lVar4 = *(long *)(DAT_71052af128 + 0x10);
    lVar5 = *(long *)(lVar4 + 0x180);
  }
  else {
    puVar2 = (uint *)FUN_7101717960(DAT_71052af1d0);
    if ((*puVar2 != 0) && ((ulong)(DAT_71052af1b0[1] - *DAT_71052af1b0 >> 3) <= (ulong)*puVar2)) {
      FUN_71001b1300("..\\..\\..\\..\\.\\OnlineCore/src/Core/InstanceTable.h",0x47,0xe0000003,0);
    }
    plVar6 = &DAT_71052af128;
    if (DAT_71052af1d8 != '\0') {
      puVar2 = (uint *)FUN_7101717960(DAT_71052af1d0);
      uVar1 = *puVar2;
      if (uVar1 != 0) {
        if ((ulong)(DAT_71052af1b0[1] - *DAT_71052af1b0 >> 3) <= (ulong)uVar1) {
          uVar3 = FUN_71001b1300("..\\..\\..\\..\\.\\OnlineCore/src/Core/InstanceTable.h",0x47,
                                 0xe0000003,0);
          return uVar3;
        }
        plVar6 = (long *)(*(long *)(*DAT_71052af1b0 + (ulong)uVar1 * 8) + 0x10);
      }
    }
    lVar4 = *(long *)(*plVar6 + 0x10);
    lVar5 = *(long *)(lVar4 + 0x180);
  }
  if (lVar5 != 0) {
    return 0;
  }
  *(undefined8 *)(lVar4 + 0x180) = param_2;
  return 1;
}

