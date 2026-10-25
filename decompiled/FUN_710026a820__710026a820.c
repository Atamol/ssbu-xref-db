// addr:      710026a820
// offset:    0x26a820
// name:      FUN_710026a820
// mangled:   
// signature: undefined FUN_710026a820(void)


uint FUN_710026a820(long param_1,long *param_2,long param_3,undefined8 param_4,ulong param_5)

{
  bool bVar1;
  uint *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  uint uVar6;
  long *plVar7;
  undefined8 auStack_d8 [3];
  undefined8 uStack_c0;
  char cStack_b8;
  undefined4 uStack_44;
  
  FUN_71001e6720(&uStack_c0);
  plVar7 = &DAT_71052af138;
  if (DAT_71052af1d8 == '\0') {
LAB_710026a8ac:
    if ((*plVar7 == 0) || (lVar5 = *(long *)(*plVar7 + 0x10), lVar5 == 0)) goto LAB_710026a8dc;
    lVar5 = *(long *)(lVar5 + 0x10);
  }
  else {
    puVar2 = (uint *)FUN_7101717960(DAT_71052af1d0);
    uVar6 = *puVar2;
    if (uVar6 == 0) goto LAB_710026a8ac;
    if ((ulong)uVar6 < (ulong)(DAT_71052af1b0[1] - *DAT_71052af1b0 >> 3)) {
      plVar7 = (long *)(*(long *)(*DAT_71052af1b0 + (ulong)uVar6 * 8) + 0x20);
      goto LAB_710026a8ac;
    }
    FUN_71001b1300("..\\..\\..\\..\\.\\OnlineCore/src/Core/InstanceTable.h",0x47,0xe0000003,0);
LAB_710026a8dc:
    lVar5 = 0;
  }
  plVar7 = (long *)(lVar5 + 0x78);
  (**(code **)(*plVar7 + 0x10))(plVar7);
  FUN_710022b480((long)&uStack_c0,*(ushort *)(param_1 + 0x48),1);
  uVar3 = FUN_710022b390((long)&uStack_c0,param_2);
  if ((uVar3 & 1) == 0) {
    param_5 = 0;
  }
  else {
    FUN_710022b400((long)&uStack_c0,0xe);
    FUN_7100289d90((long)&uStack_c0,param_3);
    if (cStack_b8 != '\0') {
      uStack_44 = 0x8001000a;
      FUN_71001b4200((undefined4 *)auStack_d8,&uStack_44);
      FUN_71001d0c90((long)param_2,auStack_d8);
      bVar1 = false;
      param_5 = 1;
      goto LAB_710026a9d0;
    }
    if (param_2 != (long *)0x0) {
      FUN_710022b430((long)param_2,param_4);
      FUN_710022b430((long)param_2,param_5);
    }
    DAT_71052b6200 = FUN_710028c8f0;
    if ((*(char *)(param_1 + 0x70) != '\0') && (bVar1 = FUN_710022b500(param_1,0x10), bVar1)) {
      bVar1 = true;
      goto LAB_710026a9d0;
    }
    param_5 = FUN_710022a7f0(param_1,(long)param_2,(long)&uStack_c0);
    param_5 = param_5 & 0xffffffff;
  }
  bVar1 = false;
LAB_710026a9d0:
  uVar6 = (uint)param_5;
  (**(code **)(*plVar7 + 0x20))(plVar7);
  if (bVar1) {
    uVar4 = FUN_710022a7f0(param_1,(long)param_2,(long)&uStack_c0);
    uVar6 = (uint)uVar4;
  }
  FUN_71001e6910(&uStack_c0);
  return uVar6 & 1;
}

