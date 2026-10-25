// addr:      710026e0e0
// offset:    0x26e0e0
// name:      FUN_710026e0e0
// mangled:   
// signature: undefined FUN_710026e0e0(void)


uint FUN_710026e0e0(long param_1,long *param_2,long *param_3,undefined8 param_4,ulong param_5)

{
  void *pvVar1;
  void *pvVar2;
  bool bVar3;
  uint *puVar4;
  ulong uVar5;
  undefined8 uVar6;
  long lVar7;
  uint uVar8;
  long *plVar9;
  undefined8 auStack_d8 [3];
  undefined8 uStack_c0;
  char cStack_b8;
  undefined4 uStack_44;
  
  FUN_71001e6720(&uStack_c0);
  plVar9 = &DAT_71052af138;
  if (DAT_71052af1d8 == '\0') {
LAB_710026e16c:
    if ((*plVar9 == 0) || (lVar7 = *(long *)(*plVar9 + 0x10), lVar7 == 0)) goto LAB_710026e19c;
    lVar7 = *(long *)(lVar7 + 0x10);
  }
  else {
    puVar4 = (uint *)FUN_7101717960(DAT_71052af1d0);
    uVar8 = *puVar4;
    if (uVar8 == 0) goto LAB_710026e16c;
    if ((ulong)uVar8 < (ulong)(DAT_71052af1b0[1] - *DAT_71052af1b0 >> 3)) {
      plVar9 = (long *)(*(long *)(*DAT_71052af1b0 + (ulong)uVar8 * 8) + 0x20);
      goto LAB_710026e16c;
    }
    FUN_71001b1300("..\\..\\..\\..\\.\\OnlineCore/src/Core/InstanceTable.h",0x47,0xe0000003,0);
LAB_710026e19c:
    lVar7 = 0;
  }
  plVar9 = (long *)(lVar7 + 0x78);
  (**(code **)(*plVar9 + 0x10))(plVar9);
  FUN_710022b480((long)&uStack_c0,*(ushort *)(param_1 + 0x48),1);
  uVar5 = FUN_710022b390((long)&uStack_c0,param_2);
  if ((uVar5 & 1) == 0) {
    param_5 = 0;
  }
  else {
    FUN_710022b400((long)&uStack_c0,0x2f);
    uStack_44 = (undefined4)((ulong)(param_3[1] - *param_3) >> 3);
    FUN_71001d0460((long)&uStack_c0,&uStack_44,4);
    pvVar2 = (void *)param_3[1];
    for (pvVar1 = (void *)*param_3; pvVar1 != pvVar2; pvVar1 = (void *)((long)pvVar1 + 8)) {
      FUN_71001d0460((long)&uStack_c0,pvVar1,8);
    }
    if (cStack_b8 != '\0') {
      uStack_44 = 0x8001000a;
      FUN_71001b4200((undefined4 *)auStack_d8,&uStack_44);
      FUN_71001d0c90((long)param_2,auStack_d8);
      bVar3 = false;
      param_5 = 1;
      goto LAB_710026e2cc;
    }
    if (param_2 != (long *)0x0) {
      FUN_710022b430((long)param_2,param_4);
      FUN_710022b430((long)param_2,param_5);
    }
    DAT_71052b6308 = FUN_710028dd20;
    if ((*(char *)(param_1 + 0x70) != '\0') && (bVar3 = FUN_710022b500(param_1,0x10), bVar3)) {
      bVar3 = true;
      goto LAB_710026e2cc;
    }
    param_5 = FUN_710022a7f0(param_1,(long)param_2,(long)&uStack_c0);
    param_5 = param_5 & 0xffffffff;
  }
  bVar3 = false;
LAB_710026e2cc:
  uVar8 = (uint)param_5;
  (**(code **)(*plVar9 + 0x20))(plVar9);
  if (bVar3) {
    uVar6 = FUN_710022a7f0(param_1,(long)param_2,(long)&uStack_c0);
    uVar8 = (uint)uVar6;
  }
  FUN_71001e6910(&uStack_c0);
  return uVar8 & 1;
}

