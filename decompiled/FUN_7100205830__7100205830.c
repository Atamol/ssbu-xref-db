// addr:      7100205830
// offset:    0x205830
// name:      FUN_7100205830
// mangled:   
// signature: long __cdecl FUN_7100205830(long param_1)


long FUN_7100205830(long param_1)

{
  uint uVar1;
  short sVar2;
  short sVar3;
  uint *puVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  
  plVar9 = &DAT_71052af138;
  if (DAT_71052af1d8 == '\0') {
LAB_7100205898:
    if ((*plVar9 == 0) || (lVar5 = *(long *)(*plVar9 + 0x10), lVar5 == 0)) goto LAB_71002058c8;
    lVar5 = *(long *)(lVar5 + 0x10);
  }
  else {
    puVar4 = (uint *)FUN_7101717960(DAT_71052af1d0);
    uVar1 = *puVar4;
    if (uVar1 == 0) goto LAB_7100205898;
    if ((ulong)uVar1 < (ulong)(DAT_71052af1b0[1] - *DAT_71052af1b0 >> 3)) {
      plVar9 = (long *)(*(long *)(*DAT_71052af1b0 + (ulong)uVar1 * 8) + 0x20);
      goto LAB_7100205898;
    }
    FUN_71001b1300("..\\..\\..\\..\\.\\OnlineCore/src/Core/InstanceTable.h",0x47,0xe0000003,0);
LAB_71002058c8:
    lVar5 = 0;
  }
  plVar9 = (long *)(lVar5 + 0x78);
  (**(code **)(*plVar9 + 0x10))(plVar9);
  sVar2 = *(short *)(param_1 + 0x40);
  if ((int)(short)(sVar2 - *(short *)(param_1 + 0x50)) < (int)(uint)*(ushort *)(param_1 + 0x20)) {
    plVar7 = (long *)(param_1 + 0x10);
    plVar8 = (long *)*plVar7;
    plVar6 = plVar7;
    if (plVar8 != (long *)0x0) {
      do {
        sVar3 = sVar2 - (short)plVar8[5];
        if (sVar3 < 1) {
          plVar6 = plVar8;
        }
        plVar8 = (long *)plVar8[0 < sVar3];
      } while (plVar8 != (long *)0x0);
      if ((plVar6 != plVar7) && ((short)((short)plVar6[5] - sVar2) < 1)) {
        *(short *)(param_1 + 0x40) = sVar2 + 1;
        lVar5 = plVar6[6];
        goto LAB_7100205948;
      }
    }
  }
  lVar5 = 0;
LAB_7100205948:
  (**(code **)(*plVar9 + 0x20))(plVar9);
  return lVar5;
}

