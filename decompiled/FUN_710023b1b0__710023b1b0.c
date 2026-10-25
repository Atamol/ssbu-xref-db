// addr:      710023b1b0
// offset:    0x23b1b0
// name:      FUN_710023b1b0
// mangled:   
// signature: long __cdecl FUN_710023b1b0(long param_1, ushort param_2)


long FUN_710023b1b0(long param_1,ushort param_2)

{
  uint uVar1;
  uint *puVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  
  plVar4 = &DAT_71052af138;
  if (DAT_71052af1d8 == '\0') {
LAB_710023b21c:
    if ((*plVar4 == 0) || (lVar3 = *(long *)(*plVar4 + 0x10), lVar3 == 0)) goto LAB_710023b24c;
    lVar3 = *(long *)(lVar3 + 0x10);
  }
  else {
    puVar2 = (uint *)FUN_7101717960(DAT_71052af1d0);
    uVar1 = *puVar2;
    if (uVar1 == 0) goto LAB_710023b21c;
    if ((ulong)uVar1 < (ulong)(DAT_71052af1b0[1] - *DAT_71052af1b0 >> 3)) {
      plVar4 = (long *)(*(long *)(*DAT_71052af1b0 + (ulong)uVar1 * 8) + 0x20);
      goto LAB_710023b21c;
    }
    FUN_71001b1300("..\\..\\..\\..\\.\\OnlineCore/src/Core/InstanceTable.h",0x47,0xe0000003,0);
LAB_710023b24c:
    lVar3 = 0;
  }
  plVar7 = (long *)(lVar3 + 0x78);
  (**(code **)(*plVar7 + 0x10))(plVar7);
  plVar6 = (long *)(param_1 + 0x48);
  plVar5 = (long *)*plVar6;
  plVar4 = plVar6;
  if (plVar5 != (long *)0x0) {
    do {
      if (*(ushort *)(plVar5 + 4) >= param_2) {
        plVar4 = plVar5;
      }
      plVar5 = (long *)plVar5[*(ushort *)(plVar5 + 4) < param_2];
    } while (plVar5 != (long *)0x0);
    if ((plVar4 != plVar6) && (*(ushort *)(plVar4 + 4) <= param_2)) {
      lVar3 = plVar4[5];
      goto LAB_710023b2a4;
    }
  }
  lVar3 = 0;
LAB_710023b2a4:
  (**(code **)(*plVar7 + 0x20))(plVar7);
  return lVar3;
}

