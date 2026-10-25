// addr:      710023b3b0
// offset:    0x23b3b0
// name:      FUN_710023b3b0
// mangled:   
// signature: long __cdecl FUN_710023b3b0(long param_1, ushort param_2, int param_3)


long FUN_710023b3b0(long param_1,ushort param_2,int param_3)

{
  uint uVar1;
  uint *puVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  
  plVar7 = &DAT_71052af138;
  if (DAT_71052af1d8 == '\0') {
LAB_710023b424:
    if ((*plVar7 == 0) || (lVar3 = *(long *)(*plVar7 + 0x10), lVar3 == 0)) goto LAB_710023b454;
    lVar3 = *(long *)(lVar3 + 0x10);
  }
  else {
    puVar2 = (uint *)FUN_7101717960(DAT_71052af1d0);
    uVar1 = *puVar2;
    if (uVar1 == 0) goto LAB_710023b424;
    if ((ulong)uVar1 < (ulong)(DAT_71052af1b0[1] - *DAT_71052af1b0 >> 3)) {
      plVar7 = (long *)(*(long *)(*DAT_71052af1b0 + (ulong)uVar1 * 8) + 0x20);
      goto LAB_710023b424;
    }
    FUN_71001b1300("..\\..\\..\\..\\.\\OnlineCore/src/Core/InstanceTable.h",0x47,0xe0000003,0);
LAB_710023b454:
    lVar3 = 0;
  }
  plVar7 = (long *)(lVar3 + 0x78);
  (**(code **)(*plVar7 + 0x10))(plVar7);
  lVar3 = param_1 + 0x20;
  if (param_3 != 1) {
    lVar3 = param_1 + 8;
  }
  plVar4 = (long *)(lVar3 + 8);
  plVar6 = (long *)*plVar4;
  plVar5 = plVar4;
  if (plVar6 != (long *)0x0) {
    do {
      if (*(ushort *)(plVar6 + 4) >= param_2) {
        plVar5 = plVar6;
      }
      plVar6 = (long *)plVar6[*(ushort *)(plVar6 + 4) < param_2];
    } while (plVar6 != (long *)0x0);
    if ((plVar5 != plVar4) && (*(ushort *)(plVar5 + 4) <= param_2)) {
      lVar3 = plVar5[5];
      goto LAB_710023b4bc;
    }
  }
  lVar3 = 0;
LAB_710023b4bc:
  (**(code **)(*plVar7 + 0x20))(plVar7);
  return lVar3;
}

