// addr:      7100238090
// offset:    0x238090
// name:      FUN_7100238090
// mangled:   
// signature: undefined4 __cdecl FUN_7100238090(long param_1, long * param_2, undefined8 param_3, undefined8 param_4, long param_5)


undefined4
FUN_7100238090(long param_1,long *param_2,undefined8 param_3,undefined8 param_4,long param_5)

{
  uint uVar1;
  bool bVar2;
  uint *puVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined4 uVar6;
  long *plVar7;
  long *plVar8;
  
  plVar7 = &DAT_71052af138;
  if (DAT_71052af1d8 == '\0') {
LAB_7100238110:
    if ((*plVar7 == 0) || (lVar5 = *(long *)(*plVar7 + 0x10), lVar5 == 0)) goto LAB_7100238140;
    lVar5 = *(long *)(lVar5 + 0x10);
  }
  else {
    puVar3 = (uint *)FUN_7101717960(DAT_71052af1d0);
    uVar1 = *puVar3;
    if (uVar1 == 0) goto LAB_7100238110;
    if ((ulong)uVar1 < (ulong)(DAT_71052af1b0[1] - *DAT_71052af1b0 >> 3)) {
      plVar7 = (long *)(*(long *)(*DAT_71052af1b0 + (ulong)uVar1 * 8) + 0x20);
      goto LAB_7100238110;
    }
    FUN_71001b1300("..\\..\\..\\..\\.\\OnlineCore/src/Core/InstanceTable.h",0x47,0xe0000003,0);
LAB_7100238140:
    lVar5 = 0;
  }
  plVar7 = (long *)(lVar5 + 0x78);
  (**(code **)(*plVar7 + 0x10))(plVar7);
  bVar2 = FUN_71001ccd00(param_2);
  if (!bVar2) {
    uVar6 = 0;
    goto LAB_710023823c;
  }
  param_2[0x11] = *(long *)(*(long *)(param_1 + 0x20) + 0x40);
  plVar8 = &DAT_71052af138;
  if (DAT_71052af1d8 == '\0') {
LAB_71002381b0:
    if ((*plVar8 == 0) || (lVar5 = *(long *)(*plVar8 + 0x10), lVar5 == 0)) goto LAB_71002381f8;
    lVar5 = *(long *)(lVar5 + 0x10);
    puVar4 = FUN_71001af850(0x1d8);
  }
  else {
    puVar3 = (uint *)FUN_7101717960(DAT_71052af1d0);
    uVar1 = *puVar3;
    if (uVar1 == 0) goto LAB_71002381b0;
    if ((ulong)uVar1 < (ulong)(DAT_71052af1b0[1] - *DAT_71052af1b0 >> 3)) {
      plVar8 = (long *)(*(long *)(*DAT_71052af1b0 + (ulong)uVar1 * 8) + 0x20);
      goto LAB_71002381b0;
    }
    FUN_71001b1300("..\\..\\..\\..\\.\\OnlineCore/src/Core/InstanceTable.h",0x47,0xe0000003,0);
LAB_71002381f8:
    lVar5 = 0;
    puVar4 = FUN_71001af850(0x1d8);
  }
  if (puVar4 != (undefined8 *)0x0) {
    FUN_7100235780(puVar4,(int)param_2[3],param_1,param_3,param_4,param_5);
  }
  FUN_71001ccdf0(lVar5,(long)puVar4,0);
  uVar6 = 1;
LAB_710023823c:
  (**(code **)(*plVar7 + 0x20))(plVar7);
  return uVar6;
}

