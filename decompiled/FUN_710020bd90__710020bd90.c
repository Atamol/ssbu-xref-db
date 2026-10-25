// addr:      710020bd90
// offset:    0x20bd90
// name:      FUN_710020bd90
// mangled:   
// signature: undefined8 __cdecl FUN_710020bd90(long param_1, ulong param_2)


undefined8 FUN_710020bd90(long param_1,ulong param_2)

{
  uint uVar1;
  bool bVar2;
  uint *puVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long *plVar7;
  
  plVar7 = &DAT_71052af138;
  if (DAT_71052af1d8 == '\0') {
LAB_710020bdfc:
    if ((*plVar7 == 0) || (lVar4 = *(long *)(*plVar7 + 0x10), lVar4 == 0)) goto LAB_710020be2c;
    lVar4 = *(long *)(lVar4 + 0x10);
  }
  else {
    puVar3 = (uint *)FUN_7101717960(DAT_71052af1d0);
    uVar1 = *puVar3;
    if (uVar1 == 0) goto LAB_710020bdfc;
    if ((ulong)uVar1 < (ulong)(DAT_71052af1b0[1] - *DAT_71052af1b0 >> 3)) {
      plVar7 = (long *)(*(long *)(*DAT_71052af1b0 + (ulong)uVar1 * 8) + 0x20);
      goto LAB_710020bdfc;
    }
    FUN_71001b1300("..\\..\\..\\..\\.\\OnlineCore/src/Core/InstanceTable.h",0x47,0xe0000003,0);
LAB_710020be2c:
    lVar4 = 0;
  }
  plVar7 = (long *)(lVar4 + 0x78);
  (**(code **)(*plVar7 + 0x10))(plVar7);
  lVar4 = *(long *)(param_1 + 0x110);
  if (lVar4 != 0) {
    lVar5 = param_1 + 0x110;
    do {
      bVar2 = *(ulong *)(lVar4 + 0x20) < param_2;
      if (!bVar2) {
        lVar5 = lVar4;
      }
      lVar4 = *(long *)(lVar4 + (ulong)bVar2 * 8);
    } while (lVar4 != 0);
    if ((lVar5 != param_1 + 0x110) && (*(ulong *)(lVar5 + 0x20) <= param_2)) {
      uVar6 = *(undefined8 *)(lVar5 + 0x28);
      goto LAB_710020be88;
    }
  }
  uVar6 = 0;
LAB_710020be88:
  (**(code **)(*plVar7 + 0x20))(plVar7);
  return uVar6;
}

