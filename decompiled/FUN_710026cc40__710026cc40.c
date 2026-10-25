// addr:      710026cc40
// offset:    0x26cc40
// name:      FUN_710026cc40
// mangled:   
// signature: uint __cdecl FUN_710026cc40(long param_1, long * param_2, long param_3, undefined8 param_4, ulong param_5, void * param_6)


uint FUN_710026cc40(long param_1,long *param_2,long param_3,undefined8 param_4,ulong param_5,
                   void *param_6)

{
  bool bVar1;
  uint *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  long lVar6;
  long *plVar7;
  uint uVar8;
  undefined8 auStack_100 [3];
  undefined8 auStack_e8 [3];
  undefined8 uStack_d0;
  char local_c8;
  undefined4 local_54;
  
  puVar5 = auStack_100;
  FUN_71001e6720(&uStack_d0);
  plVar7 = &DAT_71052af138;
  if (DAT_71052af1d8 == '\0') {
LAB_710026ccd4:
    if ((*plVar7 == 0) || (lVar6 = *(long *)(*plVar7 + 0x10), lVar6 == 0)) goto LAB_710026cd04;
    lVar6 = *(long *)(lVar6 + 0x10);
  }
  else {
    puVar2 = (uint *)FUN_7101717960(DAT_71052af1d0);
    uVar8 = *puVar2;
    if (uVar8 == 0) goto LAB_710026ccd4;
    if ((ulong)uVar8 < (ulong)(DAT_71052af1b0[1] - *DAT_71052af1b0 >> 3)) {
      plVar7 = (long *)(*(long *)(*DAT_71052af1b0 + (ulong)uVar8 * 8) + 0x20);
      goto LAB_710026ccd4;
    }
    FUN_71001b1300("..\\..\\..\\..\\.\\OnlineCore/src/Core/InstanceTable.h",0x47,0xe0000003,0);
LAB_710026cd04:
    lVar6 = 0;
  }
  plVar7 = (long *)(lVar6 + 0x78);
  (**(code **)(*plVar7 + 0x10))(plVar7);
  FUN_710022b480((long)&uStack_d0,*(ushort *)(param_1 + 0x48),1);
  uVar3 = FUN_710022b390((long)&uStack_d0,param_2);
  if ((uVar3 & 1) == 0) {
    param_5 = 0;
LAB_710026cd7c:
    bVar1 = false;
  }
  else {
    FUN_710022b400((long)&uStack_d0,0x17);
    FUN_710028fdb0((long)&uStack_d0,param_3);
    if (local_c8 == '\0') {
      FUN_71001d0460((long)&uStack_d0,param_6,8);
      if (local_c8 == '\0') {
        if (param_2 != (long *)0x0) {
          FUN_710022b430((long)param_2,param_4);
          FUN_710022b430((long)param_2,param_5);
        }
        DAT_71052b6248 = FUN_710028cdc0;
        if ((*(char *)(param_1 + 0x70) != '\0') && (bVar1 = FUN_710022b500(param_1,0x10), bVar1)) {
          bVar1 = true;
          goto LAB_710026cdc8;
        }
        uVar3 = FUN_710022a7f0(param_1,(long)param_2,(long)&uStack_d0);
        param_5 = uVar3 & 0xffffffff;
        goto LAB_710026cd7c;
      }
      local_54 = 0x8001000a;
      FUN_71001b4200((undefined4 *)auStack_100,&local_54);
    }
    else {
      local_54 = 0x8001000a;
      FUN_71001b4200((undefined4 *)auStack_e8,&local_54);
      puVar5 = auStack_e8;
    }
    FUN_71001d0c90((long)param_2,puVar5);
    bVar1 = false;
    param_5 = 1;
  }
LAB_710026cdc8:
  uVar8 = (uint)param_5;
  (**(code **)(*plVar7 + 0x20))(plVar7);
  if (bVar1) {
    uVar4 = FUN_710022a7f0(param_1,(long)param_2,(long)&uStack_d0);
    uVar8 = (uint)uVar4;
  }
  FUN_71001e6910(&uStack_d0);
  return uVar8 & 1;
}

