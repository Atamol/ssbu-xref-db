// addr:      710026bff0
// offset:    0x26bff0
// name:      FUN_710026bff0
// mangled:   
// signature: uint __cdecl FUN_710026bff0(long param_1, long * param_2, long param_3, void * param_4)


uint FUN_710026bff0(long param_1,long *param_2,long param_3,void *param_4)

{
  bool bVar1;
  uint *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  long lVar6;
  long *plVar7;
  uint uVar8;
  undefined8 auStack_e8 [3];
  undefined4 local_cc;
  undefined8 auStack_c8 [3];
  undefined8 uStack_b0;
  char local_a8;
  
  FUN_71001e6720(&uStack_b0);
  plVar7 = &DAT_71052af138;
  if (DAT_71052af1d8 == '\0') {
LAB_710026c074:
    if ((*plVar7 == 0) || (lVar6 = *(long *)(*plVar7 + 0x10), lVar6 == 0)) goto LAB_710026c0a4;
    lVar6 = *(long *)(lVar6 + 0x10);
  }
  else {
    puVar2 = (uint *)FUN_7101717960(DAT_71052af1d0);
    uVar8 = *puVar2;
    if (uVar8 == 0) goto LAB_710026c074;
    if ((ulong)uVar8 < (ulong)(DAT_71052af1b0[1] - *DAT_71052af1b0 >> 3)) {
      plVar7 = (long *)(*(long *)(*DAT_71052af1b0 + (ulong)uVar8 * 8) + 0x20);
      goto LAB_710026c074;
    }
    FUN_71001b1300("..\\..\\..\\..\\.\\OnlineCore/src/Core/InstanceTable.h",0x47,0xe0000003,0);
LAB_710026c0a4:
    lVar6 = 0;
  }
  plVar7 = (long *)(lVar6 + 0x78);
  (**(code **)(*plVar7 + 0x10))(plVar7);
  FUN_710022b480((long)&uStack_b0,*(ushort *)(param_1 + 0x48),1);
  uVar3 = FUN_710022b390((long)&uStack_b0,param_2);
  if ((uVar3 & 1) == 0) {
    param_4 = (void *)0x0;
LAB_710026c11c:
    bVar1 = false;
  }
  else {
    FUN_710022b400((long)&uStack_b0,0x12);
    FUN_710028fdb0((long)&uStack_b0,param_3);
    if (local_a8 == '\0') {
      FUN_71001d0460((long)&uStack_b0,param_4,8);
      if (local_a8 == '\0') {
        DAT_71052b6220 = FUN_710028cbf0;
        if ((*(char *)(param_1 + 0x70) != '\0') && (bVar1 = FUN_710022b500(param_1,0x10), bVar1)) {
          bVar1 = true;
          goto LAB_710026c168;
        }
        uVar3 = FUN_710022a7f0(param_1,(long)param_2,(long)&uStack_b0);
        param_4 = (void *)(uVar3 & 0xffffffff);
        goto LAB_710026c11c;
      }
      local_cc = 0x8001000a;
      FUN_71001b4200((undefined4 *)auStack_e8,&local_cc);
      puVar5 = auStack_e8;
    }
    else {
      local_cc = 0x8001000a;
      FUN_71001b4200((undefined4 *)auStack_c8,&local_cc);
      puVar5 = auStack_c8;
    }
    FUN_71001d0c90((long)param_2,puVar5);
    bVar1 = false;
    param_4 = (void *)0x1;
  }
LAB_710026c168:
  uVar8 = (uint)param_4;
  (**(code **)(*plVar7 + 0x20))(plVar7);
  if (bVar1) {
    uVar4 = FUN_710022a7f0(param_1,(long)param_2,(long)&uStack_b0);
    uVar8 = (uint)uVar4;
  }
  FUN_71001e6910(&uStack_b0);
  return uVar8 & 1;
}

