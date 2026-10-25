// addr:      71001e0c80
// offset:    0x1e0c80
// name:      FUN_71001e0c80
// mangled:   
// signature: undefined __cdecl FUN_71001e0c80(long param_1)


void FUN_71001e0c80(long param_1)

{
  uint uVar1;
  uint *puVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  undefined8 *puVar7;
  undefined **local_68;
  undefined1 local_60 [16];
  undefined1 *local_50;
  undefined8 local_48;
  
  plVar5 = &DAT_71052af138;
  if (DAT_71052af1d8 == '\0') {
LAB_71001e0cf0:
    if ((*plVar5 == 0) || (lVar3 = *(long *)(*plVar5 + 0x10), lVar3 == 0)) goto LAB_71001e0d20;
    lVar3 = *(long *)(lVar3 + 0x10);
  }
  else {
    puVar2 = (uint *)FUN_7101717960(DAT_71052af1d0);
    uVar1 = *puVar2;
    if (uVar1 == 0) goto LAB_71001e0cf0;
    if ((ulong)uVar1 < (ulong)(DAT_71052af1b0[1] - *DAT_71052af1b0 >> 3)) {
      plVar5 = (long *)(*(long *)(*DAT_71052af1b0 + (ulong)uVar1 * 8) + 0x20);
      goto LAB_71001e0cf0;
    }
    FUN_71001b1300("..\\..\\..\\..\\.\\OnlineCore/src/Core/InstanceTable.h",0x47,0xe0000003,0);
LAB_71001e0d20:
    lVar3 = 0;
  }
  plVar6 = (long *)(lVar3 + 0x78);
  (**(code **)(*plVar6 + 0x10))(plVar6);
  lVar3 = *(long *)(param_1 + 8);
  puVar7 = (undefined8 *)(lVar3 + 0x28);
  FUN_710021b310(lVar3 + 0x20,(undefined8 *)*puVar7);
  *puVar7 = 0;
  *(undefined8 *)(lVar3 + 0x30) = 0;
  *(undefined8 **)(lVar3 + 0x20) = puVar7;
  plVar5 = &DAT_71052af128;
  *(undefined8 *)(*(long *)(param_1 + 8) + 0x48) = 0xffffffffffffffff;
  if (DAT_71052af1d8 != '\0') {
    puVar2 = (uint *)FUN_7101717960(DAT_71052af1d0);
    uVar1 = *puVar2;
    if (uVar1 != 0) {
      if ((ulong)(DAT_71052af1b0[1] - *DAT_71052af1b0 >> 3) <= (ulong)uVar1) {
        FUN_71001b1300("..\\..\\..\\..\\.\\OnlineCore/src/Core/InstanceTable.h",0x47,0xe0000003,0);
        goto LAB_71001e0fc8;
      }
      plVar5 = (long *)(*(long *)(*DAT_71052af1b0 + (ulong)uVar1 * 8) + 0x10);
    }
  }
  if ((*plVar5 != 0) && (*(long *)(*plVar5 + 0x10) != 0)) {
    plVar5 = &DAT_71052af128;
    if (DAT_71052af1d8 != '\0') {
      puVar2 = (uint *)FUN_7101717960(DAT_71052af1d0);
      uVar1 = *puVar2;
      if (uVar1 != 0) {
        if ((ulong)(DAT_71052af1b0[1] - *DAT_71052af1b0 >> 3) <= (ulong)uVar1) goto LAB_71001e0ff0;
        plVar5 = (long *)(*(long *)(*DAT_71052af1b0 + (ulong)uVar1 * 8) + 0x10);
      }
    }
    if (*(long *)(*(long *)(*plVar5 + 0x10) + 0x198) != 0) {
      plVar5 = &DAT_71052af128;
      plVar4 = plVar5;
      if (DAT_71052af1d8 != '\0') {
        puVar2 = (uint *)FUN_7101717960(DAT_71052af1d0);
        uVar1 = *puVar2;
        if (uVar1 != 0) {
          if ((ulong)(DAT_71052af1b0[1] - *DAT_71052af1b0 >> 3) <= (ulong)uVar1)
          goto LAB_71001e0ff0;
          plVar4 = (long *)(*(long *)(*DAT_71052af1b0 + (ulong)uVar1 * 8) + 0x10);
        }
      }
      lVar3 = *(long *)(*(long *)(*plVar4 + 0x10) + 0x198);
      local_50 = local_60;
      local_60[0] = 0;
      local_48 = 0x10;
      local_68 = &PTR_FUN_710509cc08;
      FUN_71001b47e0((long)&local_68,"",-1);
      FUN_71001b2f70(lVar3 + 0x168,(long)&local_68);
      local_68 = &PTR_FUN_710509cc08;
      FUN_71001b4910((long)&local_68);
      if (DAT_71052af1d8 != '\0') {
        puVar2 = (uint *)FUN_7101717960(DAT_71052af1d0);
        uVar1 = *puVar2;
        if (uVar1 == 0) {
          plVar5 = &DAT_71052af128;
        }
        else {
          if ((ulong)(DAT_71052af1b0[1] - *DAT_71052af1b0 >> 3) <= (ulong)uVar1)
          goto LAB_71001e0ff0;
          plVar5 = (long *)(*(long *)(*DAT_71052af1b0 + (ulong)uVar1 * 8) + 0x10);
        }
      }
      *(undefined2 *)(*(long *)(*(long *)(*plVar5 + 0x10) + 0x198) + 400) = 0;
    }
    if (DAT_71052af1d8 == '\0') {
      plVar5 = &DAT_71052af128;
    }
    else {
      puVar2 = (uint *)FUN_7101717960(DAT_71052af1d0);
      if ((*puVar2 != 0) && ((ulong)(DAT_71052af1b0[1] - *DAT_71052af1b0 >> 3) <= (ulong)*puVar2)) {
        FUN_71001b1300("..\\..\\..\\..\\.\\OnlineCore/src/Core/InstanceTable.h",0x47,0xe0000003,0);
      }
      plVar5 = &DAT_71052af128;
      if (DAT_71052af1d8 != '\0') {
        puVar2 = (uint *)FUN_7101717960(DAT_71052af1d0);
        uVar1 = *puVar2;
        if (uVar1 != 0) {
          if ((ulong)(DAT_71052af1b0[1] - *DAT_71052af1b0 >> 3) <= (ulong)uVar1) {
LAB_71001e0ff0:
            FUN_71001b1300("..\\..\\..\\..\\.\\OnlineCore/src/Core/InstanceTable.h",0x47,0xe0000003,
                           0);
            return;
          }
          plVar5 = (long *)(*(long *)(*DAT_71052af1b0 + (ulong)uVar1 * 8) + 0x10);
        }
      }
    }
    *(undefined8 *)(*(long *)(*(long *)(*(long *)(*plVar5 + 0x10) + 0x1a8) + 0x20) + 0x10) = 0;
  }
LAB_71001e0fc8:
  (**(code **)(*plVar6 + 0x20))(plVar6);
  return;
}

