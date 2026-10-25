// addr:      71002720f0
// offset:    0x2720f0
// name:      FUN_71002720f0
// mangled:   
// signature: undefined FUN_71002720f0(void)


uint FUN_71002720f0(long param_1,long *param_2,ulong param_3)

{
  bool bVar1;
  uint *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  uint uVar6;
  long *plVar7;
  undefined8 auStack_b0 [14];
  
  FUN_71001e6720(auStack_b0);
  plVar7 = &DAT_71052af138;
  if (DAT_71052af1d8 == '\0') {
LAB_7100272170:
    if ((*plVar7 == 0) || (lVar5 = *(long *)(*plVar7 + 0x10), lVar5 == 0)) goto LAB_71002721a0;
    lVar5 = *(long *)(lVar5 + 0x10);
  }
  else {
    puVar2 = (uint *)FUN_7101717960(DAT_71052af1d0);
    uVar6 = *puVar2;
    if (uVar6 == 0) goto LAB_7100272170;
    if ((ulong)uVar6 < (ulong)(DAT_71052af1b0[1] - *DAT_71052af1b0 >> 3)) {
      plVar7 = (long *)(*(long *)(*DAT_71052af1b0 + (ulong)uVar6 * 8) + 0x20);
      goto LAB_7100272170;
    }
    FUN_71001b1300("..\\..\\..\\..\\.\\OnlineCore/src/Core/InstanceTable.h",0x47,0xe0000003,0);
LAB_71002721a0:
    lVar5 = 0;
  }
  plVar7 = (long *)(lVar5 + 0x78);
  (**(code **)(*plVar7 + 0x10))(plVar7);
  FUN_710022b480((long)auStack_b0,*(ushort *)(param_1 + 0x48),1);
  uVar3 = FUN_710022b390((long)auStack_b0,param_2);
  if ((uVar3 & 1) == 0) {
    param_3 = 0;
  }
  else {
    FUN_710022b400((long)auStack_b0,0x50);
    if (param_2 != (long *)0x0) {
      FUN_710022b430((long)param_2,param_3);
    }
    DAT_71052b6410 = FUN_710028ee00;
    if ((*(char *)(param_1 + 0x70) != '\0') && (bVar1 = FUN_710022b500(param_1,0x10), bVar1)) {
      bVar1 = true;
      goto LAB_7100272244;
    }
    param_3 = FUN_710022a7f0(param_1,(long)param_2,(long)auStack_b0);
    param_3 = param_3 & 0xffffffff;
  }
  bVar1 = false;
LAB_7100272244:
  uVar6 = (uint)param_3;
  (**(code **)(*plVar7 + 0x20))(plVar7);
  if (bVar1) {
    uVar4 = FUN_710022a7f0(param_1,(long)param_2,(long)auStack_b0);
    uVar6 = (uint)uVar4;
  }
  FUN_71001e6910(auStack_b0);
  return uVar6 & 1;
}

