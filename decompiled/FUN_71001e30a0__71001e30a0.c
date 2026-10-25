// addr:      71001e30a0
// offset:    0x1e30a0
// name:      FUN_71001e30a0
// mangled:   
// signature: undefined __cdecl FUN_71001e30a0(long param_1, byte param_2)


void FUN_71001e30a0(long param_1,byte param_2)

{
  uint uVar1;
  uint *puVar2;
  ulonglong uVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  undefined4 local_58;
  undefined4 local_54;
  byte local_48 [4];
  int local_44;
  
  plVar5 = &DAT_71052af128;
  if (DAT_71052af1d8 != '\0') {
    puVar2 = (uint *)FUN_7101717960(DAT_71052af1d0);
    uVar1 = *puVar2;
    if (uVar1 != 0) {
      if ((ulong)(DAT_71052af1b0[1] - *DAT_71052af1b0 >> 3) <= (ulong)uVar1) {
        FUN_71001b1300("..\\..\\..\\..\\.\\OnlineCore/src/Core/InstanceTable.h",0x47,0xe0000003,0);
        return;
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
        if ((ulong)(DAT_71052af1b0[1] - *DAT_71052af1b0 >> 3) <= (ulong)uVar1) goto LAB_71001e32cc;
        plVar5 = (long *)(*(long *)(*DAT_71052af1b0 + (ulong)uVar1 * 8) + 0x10);
      }
    }
    if ((*(long *)(*(long *)(*plVar5 + 0x10) + 0x198) != 0) && (*(char *)(param_1 + 800) == '\0')) {
      plVar5 = &DAT_71052af128;
      if (DAT_71052af1d8 != '\0') {
        puVar2 = (uint *)FUN_7101717960(DAT_71052af1d0);
        uVar1 = *puVar2;
        if (uVar1 != 0) {
          if ((ulong)(DAT_71052af1b0[1] - *DAT_71052af1b0 >> 3) <= (ulong)uVar1) {
LAB_71001e32cc:
            FUN_71001b1300("..\\..\\..\\..\\.\\OnlineCore/src/Core/InstanceTable.h",0x47,0xe0000003,
                           0);
            return;
          }
          plVar5 = (long *)(*(long *)(*DAT_71052af1b0 + (ulong)uVar1 * 8) + 0x10);
        }
      }
      lVar6 = *(long *)(param_1 + 0x268);
      if (param_1 + 0x260 != lVar6) {
        lVar4 = *(long *)(*(long *)(*plVar5 + 0x10) + 0x198);
        do {
          uVar3 = FUN_71001f2ba0(lVar6 + 0x10,"RVCID",0);
          if ((int)uVar3 != 0) {
            uVar3 = FUN_71001f2ba0(lVar6 + 0x10,"RVCID",0);
            if (lVar4 == 0) {
              return;
            }
            local_44 = (int)uVar3;
            if (local_44 == 0) {
              return;
            }
            local_54 = *(undefined4 *)(param_1 + 0x330);
            local_48[0] = param_2 & 1;
            if (*(long *)(lVar4 + 0x10) == 0) {
              return;
            }
            local_58 = FUN_71001e8710(lVar4,local_44);
            (**(code **)(**(long **)(lVar4 + 0x10) + 0x60))
                      (*(long **)(lVar4 + 0x10),&local_44,local_48,&local_58,&local_54);
            return;
          }
          lVar6 = *(long *)(lVar6 + 8);
        } while (param_1 + 0x260 != lVar6);
      }
    }
  }
  return;
}

