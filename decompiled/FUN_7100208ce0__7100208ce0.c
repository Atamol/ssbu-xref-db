// addr:      7100208ce0
// offset:    0x208ce0
// name:      FUN_7100208ce0
// mangled:   
// signature: long __cdecl FUN_7100208ce0(long param_1, long param_2)


long FUN_7100208ce0(long param_1,long param_2)

{
  uint uVar1;
  short sVar2;
  uint *puVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  
  plVar6 = &DAT_71052af138;
  if (DAT_71052af1d8 == '\0') {
LAB_7100208d4c:
    if ((*plVar6 == 0) || (lVar4 = *(long *)(*plVar6 + 0x10), lVar4 == 0)) goto LAB_7100208d7c;
    lVar4 = *(long *)(lVar4 + 0x10);
  }
  else {
    puVar3 = (uint *)FUN_7101717960(DAT_71052af1d0);
    uVar1 = *puVar3;
    if (uVar1 == 0) goto LAB_7100208d4c;
    if ((ulong)uVar1 < (ulong)(DAT_71052af1b0[1] - *DAT_71052af1b0 >> 3)) {
      plVar6 = (long *)(*(long *)(*DAT_71052af1b0 + (ulong)uVar1 * 8) + 0x20);
      goto LAB_7100208d4c;
    }
    FUN_71001b1300("..\\..\\..\\..\\.\\OnlineCore/src/Core/InstanceTable.h",0x47,0xe0000003,0);
LAB_7100208d7c:
    lVar4 = 0;
  }
  plVar8 = (long *)(lVar4 + 0x78);
  (**(code **)(*plVar8 + 0x10))(plVar8);
  plVar7 = (long *)(param_1 + 0x10);
  plVar6 = (long *)*plVar7;
  if (plVar6 != (long *)0x0) {
    plVar5 = plVar7;
    do {
      sVar2 = *(short *)(param_2 + 8) - (short)plVar6[5];
      if (sVar2 < 1) {
        plVar5 = plVar6;
      }
      plVar6 = (long *)plVar6[0 < sVar2];
    } while (plVar6 != (long *)0x0);
    if ((plVar5 != plVar7) && ((short)((short)plVar5[5] - *(short *)(param_2 + 8)) < 1)) {
      lVar4 = plVar5[6];
      goto LAB_7100208de0;
    }
  }
  lVar4 = 0;
LAB_7100208de0:
  (**(code **)(*plVar8 + 0x20))(plVar8);
  return lVar4;
}

