// addr:      710026d1a0
// offset:    0x26d1a0
// name:      FUN_710026d1a0
// mangled:   
// signature: uint __cdecl FUN_710026d1a0(long param_1, long * param_2, void * param_3, long * param_4, undefined8 param_5, ulong param_6)


uint FUN_710026d1a0(long param_1,long *param_2,void *param_3,long *param_4,undefined8 param_5,
                   ulong param_6)

{
  void *pvVar1;
  void *pvVar2;
  bool bVar3;
  uint *puVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  long lVar8;
  long *plVar9;
  uint uVar10;
  undefined8 auStack_100 [3];
  undefined8 auStack_e8 [3];
  undefined8 uStack_d0;
  char local_c8;
  undefined4 local_54;
  
  puVar7 = auStack_100;
  FUN_71001e6720(&uStack_d0);
  plVar9 = &DAT_71052af138;
  if (DAT_71052af1d8 == '\0') {
LAB_710026d234:
    if ((*plVar9 == 0) || (lVar8 = *(long *)(*plVar9 + 0x10), lVar8 == 0)) goto LAB_710026d264;
    lVar8 = *(long *)(lVar8 + 0x10);
  }
  else {
    puVar4 = (uint *)FUN_7101717960(DAT_71052af1d0);
    uVar10 = *puVar4;
    if (uVar10 == 0) goto LAB_710026d234;
    if ((ulong)uVar10 < (ulong)(DAT_71052af1b0[1] - *DAT_71052af1b0 >> 3)) {
      plVar9 = (long *)(*(long *)(*DAT_71052af1b0 + (ulong)uVar10 * 8) + 0x20);
      goto LAB_710026d234;
    }
    FUN_71001b1300("..\\..\\..\\..\\.\\OnlineCore/src/Core/InstanceTable.h",0x47,0xe0000003,0);
LAB_710026d264:
    lVar8 = 0;
  }
  plVar9 = (long *)(lVar8 + 0x78);
  (**(code **)(*plVar9 + 0x10))(plVar9);
  FUN_710022b480((long)&uStack_d0,*(ushort *)(param_1 + 0x48),1);
  uVar5 = FUN_710022b390((long)&uStack_d0,param_2);
  if ((uVar5 & 1) == 0) {
    param_6 = 0;
LAB_710026d2e0:
    bVar3 = false;
  }
  else {
    FUN_710022b400((long)&uStack_d0,0x1e);
    FUN_71001d0460((long)&uStack_d0,param_3,8);
    if (local_c8 == '\0') {
      local_54 = (undefined4)((ulong)(param_4[1] - *param_4) >> 1);
      FUN_71001d0460((long)&uStack_d0,&local_54,4);
      pvVar2 = (void *)param_4[1];
      for (pvVar1 = (void *)*param_4; pvVar1 != pvVar2; pvVar1 = (void *)((long)pvVar1 + 2)) {
        FUN_71001d0460((long)&uStack_d0,pvVar1,2);
      }
      if (local_c8 == '\0') {
        if (param_2 != (long *)0x0) {
          FUN_710022b430((long)param_2,param_5);
          FUN_710022b430((long)param_2,param_6);
        }
        DAT_71052b6280 = FUN_710028d280;
        if ((*(char *)(param_1 + 0x70) != '\0') && (bVar3 = FUN_710022b500(param_1,0x10), bVar3)) {
          bVar3 = true;
          goto LAB_710026d364;
        }
        uVar5 = FUN_710022a7f0(param_1,(long)param_2,(long)&uStack_d0);
        param_6 = uVar5 & 0xffffffff;
        goto LAB_710026d2e0;
      }
      local_54 = 0x8001000a;
      FUN_71001b4200((undefined4 *)auStack_100,&local_54);
    }
    else {
      local_54 = 0x8001000a;
      FUN_71001b4200((undefined4 *)auStack_e8,&local_54);
      puVar7 = auStack_e8;
    }
    FUN_71001d0c90((long)param_2,puVar7);
    bVar3 = false;
    param_6 = 1;
  }
LAB_710026d364:
  uVar10 = (uint)param_6;
  (**(code **)(*plVar9 + 0x20))(plVar9);
  if (bVar3) {
    uVar6 = FUN_710022a7f0(param_1,(long)param_2,(long)&uStack_d0);
    uVar10 = (uint)uVar6;
  }
  FUN_71001e6910(&uStack_d0);
  return uVar10 & 1;
}

