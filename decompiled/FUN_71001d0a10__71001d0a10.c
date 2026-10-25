// addr:      71001d0a10
// offset:    0x1d0a10
// name:      FUN_71001d0a10
// mangled:   
// signature: uint __cdecl FUN_71001d0a10(long * param_1)


uint FUN_71001d0a10(long *param_1)

{
  uint uVar1;
  uint uVar2;
  uint *puVar3;
  uint *puVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  uint *local_68;
  uint *local_60;
  undefined8 local_58;
  
  plVar7 = &DAT_71052af138;
  if (DAT_71052af1d8 == '\0') {
LAB_71001d0a84:
    if ((*plVar7 != 0) && (lVar5 = *(long *)(*plVar7 + 0x10), lVar5 != 0)) {
      lVar5 = *(long *)(lVar5 + 0x10);
      goto LAB_71001d0ab8;
    }
  }
  else {
    puVar3 = (uint *)FUN_7101717960(DAT_71052af1d0);
    uVar2 = *puVar3;
    if (uVar2 == 0) goto LAB_71001d0a84;
    if ((ulong)uVar2 < (ulong)(DAT_71052af1b0[1] - *DAT_71052af1b0 >> 3)) {
      plVar7 = (long *)(*(long *)(*DAT_71052af1b0 + (ulong)uVar2 * 8) + 0x20);
      goto LAB_71001d0a84;
    }
    FUN_71001b1300("..\\..\\..\\..\\.\\OnlineCore/src/Core/InstanceTable.h",0x47,0xe0000003,0);
  }
  lVar5 = 0;
LAB_71001d0ab8:
  plVar9 = (long *)(lVar5 + 0x78);
  (**(code **)(*plVar9 + 0x10))(plVar9);
  plVar7 = &DAT_71052af138;
  local_58 = 0;
  local_68 = (uint *)0x0;
  local_60 = (uint *)0x0;
  if (DAT_71052af1d8 != '\0') {
    puVar3 = (uint *)FUN_7101717960(DAT_71052af1d0);
    uVar2 = *puVar3;
    if (uVar2 != 0) {
      if ((ulong)(DAT_71052af1b0[1] - *DAT_71052af1b0 >> 3) <= (ulong)uVar2) {
LAB_71001d0c30:
        uVar2 = FUN_71001b1300("..\\..\\..\\..\\.\\OnlineCore/src/Core/InstanceTable.h",0x47,
                               0xe0000003,0);
        return uVar2;
      }
      plVar7 = (long *)(*(long *)(*DAT_71052af1b0 + (ulong)uVar2 * 8) + 0x20);
    }
  }
  FUN_71001d19f0(*(long *)(*(long *)(*plVar7 + 0x10) + 0x18),*(uint *)(param_1 + 3),
                 (long *)&local_68);
  uVar2 = FUN_71001d1c80(param_1);
  puVar3 = local_68;
  if (local_68 != local_60) {
    do {
      plVar7 = &DAT_71052af138;
      if (DAT_71052af1d8 != '\0') {
        puVar4 = (uint *)FUN_7101717960(DAT_71052af1d0);
        uVar1 = *puVar4;
        if (uVar1 != 0) {
          if ((ulong)(DAT_71052af1b0[1] - *DAT_71052af1b0 >> 3) <= (ulong)uVar1)
          goto LAB_71001d0c30;
          plVar7 = (long *)(*(long *)(*DAT_71052af1b0 + (ulong)uVar1 * 8) + 0x20);
        }
      }
      uVar1 = *puVar3;
      plVar6 = (long *)(*(long *)(*(long *)(*plVar7 + 0x10) + 0x18) + 0x50);
      plVar8 = (long *)*plVar6;
      plVar7 = plVar6;
      if (plVar8 != (long *)0x0) {
        do {
          if (*(uint *)(plVar8 + 4) >= uVar1) {
            plVar7 = plVar8;
          }
          plVar8 = (long *)plVar8[*(uint *)(plVar8 + 4) < uVar1];
        } while (plVar8 != (long *)0x0);
        if (((plVar7 != plVar6) && (*(uint *)(plVar7 + 4) <= uVar1)) &&
           ((long *)plVar7[5] != (long *)0x0)) {
          FUN_71001d0a10((long *)plVar7[5]);
        }
      }
      puVar3 = puVar3 + 1;
    } while (puVar3 != local_60);
  }
  if (local_68 != (uint *)0x0) {
    local_60 = local_68;
    FUN_71001b1870((long)local_68);
  }
  (**(code **)(*plVar9 + 0x20))(plVar9);
  return uVar2 & 1;
}

