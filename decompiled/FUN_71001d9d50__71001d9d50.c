// addr:      71001d9d50
// offset:    0x1d9d50
// name:      FUN_71001d9d50
// mangled:   
// signature: undefined __cdecl FUN_71001d9d50(int param_1)


void FUN_71001d9d50(int param_1)

{
  bool bVar1;
  uint *puVar2;
  long lVar3;
  long *plVar4;
  uint uVar5;
  
  (**(code **)(DAT_71052af1e0 + 0x10))(&DAT_71052af1e0);
  if (DAT_71052af1d8 == '\0') {
    uVar5 = 0;
  }
  else {
    puVar2 = (uint *)FUN_7101717960(DAT_71052af1d0);
    uVar5 = *puVar2;
  }
  (**(code **)(DAT_71052af1e0 + 0x10))(&DAT_71052af1e0);
  if (uVar5 == 0) {
LAB_71001d9de8:
    (**(code **)(DAT_71052af1e0 + 0x20))(&DAT_71052af1e0);
    plVar4 = &DAT_71052af138;
    if (DAT_71052af1d8 != '\0') {
      puVar2 = (uint *)FUN_7101717960(DAT_71052af1d0);
      uVar5 = *puVar2;
      if (uVar5 != 0) {
        if ((ulong)(DAT_71052af1b0[1] - *DAT_71052af1b0 >> 3) <= (ulong)uVar5) {
          FUN_71001b1300("..\\..\\..\\..\\.\\OnlineCore/src/Core/InstanceTable.h",0x47,0xe0000003,0)
          ;
          goto LAB_71001d9e88;
        }
        plVar4 = (long *)(*(long *)(*DAT_71052af1b0 + (ulong)uVar5 * 8) + 0x20);
      }
    }
    if ((*plVar4 == 0) || (lVar3 = *(long *)(*plVar4 + 0x10), lVar3 == 0)) goto LAB_71001d9e88;
    lVar3 = *(long *)(lVar3 + 0x10);
    if ((lVar3 != 0) &&
       (*(long *)(*(long *)(lVar3 + 0x18) + 0x60) == *(long *)(*(long *)(lVar3 + 0x18) + 0x58))) {
      FUN_71001d5a90();
      bVar1 = true;
      goto LAB_71001d9e90;
    }
  }
  else {
    if (((ulong)uVar5 < (ulong)(DAT_71052af1b0[1] - *DAT_71052af1b0 >> 3)) &&
       (*(long *)(*DAT_71052af1b0 + (ulong)uVar5 * 8) != 0)) goto LAB_71001d9de8;
    (**(code **)(DAT_71052af1e0 + 0x20))(&DAT_71052af1e0);
LAB_71001d9e88:
    lVar3 = 0;
  }
  bVar1 = false;
LAB_71001d9e90:
  (**(code **)(DAT_71052af1e0 + 0x20))(&DAT_71052af1e0);
  if (bVar1) {
    FUN_71001d90c0(lVar3,param_1,0);
    FUN_71001d5c40();
    return;
  }
  return;
}

