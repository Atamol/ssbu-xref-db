// addr:      710024fd10
// offset:    0x24fd10
// name:      FUN_710024fd10
// mangled:   
// signature: uint __cdecl FUN_710024fd10(long param_1, long * param_2, long param_3, ulong param_4)


uint FUN_710024fd10(long param_1,long *param_2,long param_3,ulong param_4)

{
  bool bVar1;
  uint *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  uint uVar6;
  long *plVar7;
  undefined8 auStack_d0 [3];
  undefined8 uStack_b8;
  char local_b0;
  undefined4 local_44;
  
  FUN_71001e6720(&uStack_b8);
  plVar7 = &DAT_71052af138;
  if (DAT_71052af1d8 == '\0') {
LAB_710024fd94:
    if ((*plVar7 == 0) || (lVar5 = *(long *)(*plVar7 + 0x10), lVar5 == 0)) goto LAB_710024fdc4;
    lVar5 = *(long *)(lVar5 + 0x10);
  }
  else {
    puVar2 = (uint *)FUN_7101717960(DAT_71052af1d0);
    uVar6 = *puVar2;
    if (uVar6 == 0) goto LAB_710024fd94;
    if ((ulong)uVar6 < (ulong)(DAT_71052af1b0[1] - *DAT_71052af1b0 >> 3)) {
      plVar7 = (long *)(*(long *)(*DAT_71052af1b0 + (ulong)uVar6 * 8) + 0x20);
      goto LAB_710024fd94;
    }
    FUN_71001b1300("..\\..\\..\\..\\.\\OnlineCore/src/Core/InstanceTable.h",0x47,0xe0000003,0);
LAB_710024fdc4:
    lVar5 = 0;
  }
  plVar7 = (long *)(lVar5 + 0x78);
  (**(code **)(*plVar7 + 0x10))(plVar7);
  FUN_710022b480((long)&uStack_b8,*(ushort *)(param_1 + 0x48),1);
  uVar3 = FUN_710022b390((long)&uStack_b8,param_2);
  if ((uVar3 & 1) == 0) {
    param_4 = 0;
  }
  else {
    FUN_710022b400((long)&uStack_b8,0x30);
    local_44 = (undefined4)*(undefined8 *)(param_3 + 0x10);
    FUN_71001d0460((long)&uStack_b8,&local_44,4);
    for (lVar5 = *(long *)(param_3 + 8); param_3 != lVar5; lVar5 = *(long *)(lVar5 + 8)) {
      FUN_71001d0460((long)&uStack_b8,(void *)(lVar5 + 0x10),4);
    }
    if (local_b0 != '\0') {
      local_44 = 0x8001000a;
      FUN_71001b4200((undefined4 *)auStack_d0,&local_44);
      FUN_71001d0c90((long)param_2,auStack_d0);
      bVar1 = false;
      param_4 = 1;
      goto LAB_710024fee0;
    }
    if (param_2 != (long *)0x0) {
      FUN_710022b430((long)param_2,param_4);
    }
    DAT_71052b5e30 = FUN_7100253820;
    if ((*(char *)(param_1 + 0x70) != '\0') && (bVar1 = FUN_710022b500(param_1,0x10), bVar1)) {
      bVar1 = true;
      goto LAB_710024fee0;
    }
    uVar3 = FUN_710022a7f0(param_1,(long)param_2,(long)&uStack_b8);
    param_4 = uVar3 & 0xffffffff;
  }
  bVar1 = false;
LAB_710024fee0:
  uVar6 = (uint)param_4;
  (**(code **)(*plVar7 + 0x20))(plVar7);
  if (bVar1) {
    uVar4 = FUN_710022a7f0(param_1,(long)param_2,(long)&uStack_b8);
    uVar6 = (uint)uVar4;
  }
  FUN_71001e6910(&uStack_b8);
  return uVar6 & 1;
}

