// addr:      7100273460
// offset:    0x273460
// name:      FUN_7100273460
// mangled:   
// signature: uint __cdecl FUN_7100273460(long param_1, long * param_2, void * param_3)


uint FUN_7100273460(long param_1,long *param_2,void *param_3)

{
  bool bVar1;
  uint *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  uint uVar6;
  long *plVar7;
  undefined8 auStack_c8 [3];
  undefined8 uStack_b0;
  char local_a8;
  undefined4 local_34;
  
  FUN_71001e6720(&uStack_b0);
  plVar7 = &DAT_71052af138;
  if (DAT_71052af1d8 == '\0') {
LAB_71002734e0:
    if ((*plVar7 == 0) || (lVar5 = *(long *)(*plVar7 + 0x10), lVar5 == 0)) goto LAB_7100273510;
    lVar5 = *(long *)(lVar5 + 0x10);
  }
  else {
    puVar2 = (uint *)FUN_7101717960(DAT_71052af1d0);
    uVar6 = *puVar2;
    if (uVar6 == 0) goto LAB_71002734e0;
    if ((ulong)uVar6 < (ulong)(DAT_71052af1b0[1] - *DAT_71052af1b0 >> 3)) {
      plVar7 = (long *)(*(long *)(*DAT_71052af1b0 + (ulong)uVar6 * 8) + 0x20);
      goto LAB_71002734e0;
    }
    FUN_71001b1300("..\\..\\..\\..\\.\\OnlineCore/src/Core/InstanceTable.h",0x47,0xe0000003,0);
LAB_7100273510:
    lVar5 = 0;
  }
  plVar7 = (long *)(lVar5 + 0x78);
  (**(code **)(*plVar7 + 0x10))(plVar7);
  FUN_710022b480((long)&uStack_b0,*(ushort *)(param_1 + 0x48),1);
  uVar3 = FUN_710022b390((long)&uStack_b0,param_2);
  if ((uVar3 & 1) == 0) {
    param_3 = (void *)0x0;
  }
  else {
    FUN_710022b400((long)&uStack_b0,0x59);
    FUN_71001d0460((long)&uStack_b0,param_3,8);
    if (local_a8 != '\0') {
      local_34 = 0x8001000a;
      FUN_71001b4200((undefined4 *)auStack_c8,&local_34);
      FUN_71001d0c90((long)param_2,auStack_c8);
      bVar1 = false;
      param_3 = (void *)0x1;
      goto LAB_71002735ec;
    }
    DAT_71052b6458 = FUN_710028f190;
    if ((*(char *)(param_1 + 0x70) != '\0') && (bVar1 = FUN_710022b500(param_1,0x10), bVar1)) {
      bVar1 = true;
      goto LAB_71002735ec;
    }
    uVar3 = FUN_710022a7f0(param_1,(long)param_2,(long)&uStack_b0);
    param_3 = (void *)(uVar3 & 0xffffffff);
  }
  bVar1 = false;
LAB_71002735ec:
  uVar6 = (uint)param_3;
  (**(code **)(*plVar7 + 0x20))(plVar7);
  if (bVar1) {
    uVar4 = FUN_710022a7f0(param_1,(long)param_2,(long)&uStack_b0);
    uVar6 = (uint)uVar4;
  }
  FUN_71001e6910(&uStack_b0);
  return uVar6 & 1;
}

