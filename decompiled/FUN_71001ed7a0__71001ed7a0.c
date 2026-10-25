// addr:      71001ed7a0
// offset:    0x1ed7a0
// name:      FUN_71001ed7a0
// mangled:   
// signature: undefined __cdecl FUN_71001ed7a0(long param_1)


void FUN_71001ed7a0(long param_1)

{
  uint uVar1;
  uint *puVar2;
  long lVar3;
  long *plVar4;
  undefined **local_d0;
  code *pcStack_c8;
  undefined8 local_c0;
  undefined1 *puStack_b8;
  
  plVar4 = &DAT_71052af128;
  if (DAT_71052af1d8 != '\0') {
    puVar2 = (uint *)FUN_7101717960(DAT_71052af1d0);
    uVar1 = *puVar2;
    if (uVar1 != 0) {
      if ((ulong)(DAT_71052af1b0[1] - *DAT_71052af1b0 >> 3) <= (ulong)uVar1) {
        FUN_71001b1300("..\\..\\..\\..\\.\\OnlineCore/src/Core/InstanceTable.h",0x47,0xe0000003,0);
        goto LAB_71001ed9c4;
      }
      plVar4 = (long *)(*(long *)(*DAT_71052af1b0 + (ulong)uVar1 * 8) + 0x10);
    }
  }
  if ((*plVar4 != 0) && (*(long *)(*plVar4 + 0x10) != 0)) {
    plVar4 = &DAT_71052af138;
    if (DAT_71052af1d8 != '\0') {
      puVar2 = (uint *)FUN_7101717960(DAT_71052af1d0);
      uVar1 = *puVar2;
      if (uVar1 != 0) {
        if ((ulong)(DAT_71052af1b0[1] - *DAT_71052af1b0 >> 3) <= (ulong)uVar1) goto LAB_71001eda0c;
        plVar4 = (long *)(*(long *)(*DAT_71052af1b0 + (ulong)uVar1 * 8) + 0x20);
      }
    }
    lVar3 = FUN_71001cd7d0(*(long *)(*(long *)(*plVar4 + 0x10) + 0x18),*(uint *)(param_1 + 0xa0));
    if (lVar3 == 0) goto LAB_71001ed9c4;
    plVar4 = &DAT_71052af128;
    if (DAT_71052af1d8 != '\0') {
      puVar2 = (uint *)FUN_7101717960(DAT_71052af1d0);
      uVar1 = *puVar2;
      if (uVar1 != 0) {
        if ((ulong)(DAT_71052af1b0[1] - *DAT_71052af1b0 >> 3) <= (ulong)uVar1) goto LAB_71001eda0c;
        plVar4 = (long *)(*(long *)(*DAT_71052af1b0 + (ulong)uVar1 * 8) + 0x10);
      }
    }
    plVar4 = *(long **)(*(long *)(*(long *)(*plVar4 + 0x10) + 0x198) + 0x10);
    if (plVar4 != (long *)0x0) {
      FUN_71001beb40(&local_d0);
      (**(code **)(*plVar4 + 0x30))(plVar4,param_1 + 0xa8,&local_d0,1);
      FUN_71001bef00();
      plVar4 = &DAT_71052af138;
      if (DAT_71052af1d8 != '\0') {
        puVar2 = (uint *)FUN_7101717960(DAT_71052af1d0);
        uVar1 = *puVar2;
        if (uVar1 != 0) {
          if ((ulong)(DAT_71052af1b0[1] - *DAT_71052af1b0 >> 3) <= (ulong)uVar1) {
LAB_71001eda0c:
            FUN_71001b1300("..\\..\\..\\..\\.\\OnlineCore/src/Core/InstanceTable.h",0x47,0xe0000003,
                           0);
            return;
          }
          plVar4 = (long *)(*(long *)(*DAT_71052af1b0 + (ulong)uVar1 * 8) + 0x20);
        }
      }
      FUN_71001d3780(*(long *)(*(long *)(*plVar4 + 0x10) + 0x18),*(uint *)(param_1 + 0xa0),
                     *(undefined4 *)(param_1 + 0xc0));
      local_d0 = &PTR_FUN_7104f56e28;
      pcStack_c8 = FUN_71001edc60;
      local_c0 = 0;
      puStack_b8 = &DAT_71044114cc;
      FUN_71001d3d60(param_1,(long)&local_d0);
      FUN_71001b12a0((ulong *)&local_d0);
      *(undefined ***)(param_1 + 0x138) = local_d0 + 0x271;
      return;
    }
  }
LAB_71001ed9c4:
  local_d0 = &PTR_FUN_7104f56e28;
  pcStack_c8 = FUN_71001edb60;
  local_c0 = 0;
  puStack_b8 = &DAT_71044114cc;
  FUN_71001d3d60(param_1,(long)&local_d0);
  return;
}

