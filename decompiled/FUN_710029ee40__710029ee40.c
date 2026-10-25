// addr:      710029ee40
// offset:    0x29ee40
// name:      FUN_710029ee40
// mangled:   
// signature: undefined __cdecl FUN_710029ee40(long param_1)


void FUN_710029ee40(long param_1)

{
  long *plVar1;
  uint uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  uint *puVar6;
  long lVar7;
  long *plVar8;
  
  plVar1 = (long *)(param_1 + 0xa8);
  FUN_71001d1590(plVar1);
  FUN_71001ccd00(plVar1);
  puVar3 = FUN_71001af850(0x230);
  if (puVar3 != (undefined8 *)0x0) {
    puVar4 = FUN_71001af850(8);
    if (puVar4 != (undefined8 *)0x0) {
      FUN_71002498e0(puVar4);
    }
    puVar5 = FUN_71001af850(8);
    if (puVar5 != (undefined8 *)0x0) {
      *puVar5 = &PTR_FUN_7104f60988;
    }
    FUN_710029d3d0(puVar3,puVar4,puVar5);
  }
  FUN_710029b8f0((long)puVar3,*(undefined4 *)(param_1 + 0xc0),param_1 + 0x140,param_1 + 0x188,
                 *(undefined4 *)(param_1 + 0xa4));
  plVar8 = &DAT_71052af138;
  if (DAT_71052af1d8 == '\0') {
LAB_710029ef2c:
    if ((*plVar8 != 0) && (lVar7 = *(long *)(*plVar8 + 0x10), lVar7 != 0)) {
      lVar7 = *(long *)(lVar7 + 0x10);
      goto LAB_710029ef60;
    }
  }
  else {
    puVar6 = (uint *)FUN_7101717960(DAT_71052af1d0);
    uVar2 = *puVar6;
    if (uVar2 == 0) goto LAB_710029ef2c;
    if ((ulong)uVar2 < (ulong)(DAT_71052af1b0[1] - *DAT_71052af1b0 >> 3)) {
      plVar8 = (long *)(*(long *)(*DAT_71052af1b0 + (ulong)uVar2 * 8) + 0x20);
      goto LAB_710029ef2c;
    }
    FUN_71001b1300("..\\..\\..\\..\\.\\OnlineCore/src/Core/InstanceTable.h",0x47,0xe0000003,0);
  }
  lVar7 = 0;
LAB_710029ef60:
  FUN_71001ccdf0(lVar7,(long)puVar3,0);
  plVar8 = &DAT_71052af138;
  if (DAT_71052af1d8 != '\0') {
    puVar6 = (uint *)FUN_7101717960(DAT_71052af1d0);
    uVar2 = *puVar6;
    if (uVar2 != 0) {
      if ((ulong)(DAT_71052af1b0[1] - *DAT_71052af1b0 >> 3) <= (ulong)uVar2) {
        FUN_71001b1300("..\\..\\..\\..\\.\\OnlineCore/src/Core/InstanceTable.h",0x47,0xe0000003,0);
        return;
      }
      plVar8 = (long *)(*(long *)(*DAT_71052af1b0 + (ulong)uVar2 * 8) + 0x20);
    }
  }
  FUN_71001d3780(*(long *)(*(long *)(*plVar8 + 0x10) + 0x18),*(uint *)(param_1 + 0xa0),
                 *(undefined4 *)(param_1 + 0xc0));
  FUN_71001d6410(param_1,2);
  puVar3 = FUN_71001af850(0x20);
  if (puVar3 != (undefined8 *)0x0) {
    puVar3[2] = 0;
    puVar3[3] = &DAT_71044114cc;
    *puVar3 = &PTR_FUN_7104f56e28;
    puVar3[1] = FUN_710029f3b0;
  }
  FUN_71001d4200(param_1,(long)plVar1,puVar3);
  return;
}

