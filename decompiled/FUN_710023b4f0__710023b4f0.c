// addr:      710023b4f0
// offset:    0x23b4f0
// name:      FUN_710023b4f0
// mangled:   
// signature: undefined FUN_710023b4f0(void)


void FUN_710023b4f0(undefined8 param_1,long param_2)

{
  uint uVar1;
  uint *puVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  undefined4 uStack_4c;
  undefined8 auStack_48 [3];
  
  plVar4 = &DAT_71052af138;
  if (DAT_71052af1d8 == '\0') {
LAB_710023b55c:
    if ((*plVar4 != 0) && (lVar3 = *(long *)(*plVar4 + 0x10), lVar3 != 0)) {
      lVar3 = *(long *)(lVar3 + 0x10);
      goto LAB_710023b590;
    }
  }
  else {
    puVar2 = (uint *)FUN_7101717960(DAT_71052af1d0);
    uVar1 = *puVar2;
    if (uVar1 == 0) goto LAB_710023b55c;
    if ((ulong)uVar1 < (ulong)(DAT_71052af1b0[1] - *DAT_71052af1b0 >> 3)) {
      plVar4 = (long *)(*(long *)(*DAT_71052af1b0 + (ulong)uVar1 * 8) + 0x20);
      goto LAB_710023b55c;
    }
    FUN_71001b1300("..\\..\\..\\..\\.\\OnlineCore/src/Core/InstanceTable.h",0x47,0xe0000003,0);
  }
  lVar3 = 0;
LAB_710023b590:
  plVar5 = (long *)(lVar3 + 0x78);
  (**(code **)(*plVar5 + 0x10))(plVar5);
  plVar4 = &DAT_71052af138;
  if (DAT_71052af1d8 != '\0') {
    puVar2 = (uint *)FUN_7101717960(DAT_71052af1d0);
    uVar1 = *puVar2;
    if (uVar1 != 0) {
      if ((ulong)(DAT_71052af1b0[1] - *DAT_71052af1b0 >> 3) <= (ulong)uVar1) {
        FUN_71001b1300("..\\..\\..\\..\\.\\OnlineCore/src/Core/InstanceTable.h",0x47,0xe0000003,0);
        return;
      }
      plVar4 = (long *)(*(long *)(*DAT_71052af1b0 + (ulong)uVar1 * 8) + 0x20);
    }
  }
  lVar3 = *(long *)(*(long *)(*plVar4 + 0x10) + 0x18);
  uStack_4c = 0x800300d2;
  FUN_71001b4200((undefined4 *)auStack_48,&uStack_4c);
  FUN_71001d3480(lVar3,param_2,0,auStack_48);
  (**(code **)(*plVar5 + 0x20))(plVar5);
  return;
}

