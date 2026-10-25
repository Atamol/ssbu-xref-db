// addr:      710024b9e0
// offset:    0x24b9e0
// name:      FUN_710024b9e0
// mangled:   
// signature: uint __cdecl FUN_710024b9e0(long param_1, long * param_2, void * param_3, long param_4, undefined1 * param_5)


uint FUN_710024b9e0(long param_1,long *param_2,void *param_3,long param_4,undefined1 *param_5)

{
  bool bVar1;
  uint *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  long lVar6;
  long *plVar7;
  uint uVar8;
  undefined8 auStack_110 [3];
  undefined8 auStack_f8 [3];
  undefined8 auStack_e0 [3];
  undefined8 uStack_c8;
  char local_c0;
  undefined4 local_54;
  
  puVar5 = auStack_110;
  FUN_71001e6720(&uStack_c8);
  plVar7 = &DAT_71052af138;
  if (DAT_71052af1d8 == '\0') {
LAB_710024ba6c:
    if ((*plVar7 == 0) || (lVar6 = *(long *)(*plVar7 + 0x10), lVar6 == 0)) goto LAB_710024ba9c;
    lVar6 = *(long *)(lVar6 + 0x10);
  }
  else {
    puVar2 = (uint *)FUN_7101717960(DAT_71052af1d0);
    uVar8 = *puVar2;
    if (uVar8 == 0) goto LAB_710024ba6c;
    if ((ulong)uVar8 < (ulong)(DAT_71052af1b0[1] - *DAT_71052af1b0 >> 3)) {
      plVar7 = (long *)(*(long *)(*DAT_71052af1b0 + (ulong)uVar8 * 8) + 0x20);
      goto LAB_710024ba6c;
    }
    FUN_71001b1300("..\\..\\..\\..\\.\\OnlineCore/src/Core/InstanceTable.h",0x47,0xe0000003,0);
LAB_710024ba9c:
    lVar6 = 0;
  }
  plVar7 = (long *)(lVar6 + 0x78);
  (**(code **)(*plVar7 + 0x10))(plVar7);
  FUN_710022b480((long)&uStack_c8,*(ushort *)(param_1 + 0x48),1);
  uVar3 = FUN_710022b390((long)&uStack_c8,param_2);
  if ((uVar3 & 1) == 0) {
    param_5 = (undefined1 *)0x0;
LAB_710024bb18:
    bVar1 = false;
  }
  else {
    FUN_710022b400((long)&uStack_c8,0x2c);
    FUN_71001d0460((long)&uStack_c8,param_3,4);
    if (local_c0 == '\0') {
      local_54 = (undefined4)*(undefined8 *)(param_4 + 0x10);
      FUN_71001d0460((long)&uStack_c8,&local_54,4);
      for (lVar6 = *(long *)(param_4 + 8); param_4 != lVar6; lVar6 = *(long *)(lVar6 + 8)) {
        FUN_71001d0460((long)&uStack_c8,(void *)(lVar6 + 0x10),8);
      }
      if (local_c0 == '\0') {
        FUN_71001d0630((long)&uStack_c8,param_5);
        if (local_c0 == '\0') {
          DAT_71052b5bb0 = FUN_710024d450;
          if ((*(char *)(param_1 + 0x70) != '\0') && (bVar1 = FUN_710022b500(param_1,0x10), bVar1))
          {
            bVar1 = true;
            goto LAB_710024bbc8;
          }
          uVar3 = FUN_710022a7f0(param_1,(long)param_2,(long)&uStack_c8);
          param_5 = (undefined1 *)(uVar3 & 0xffffffff);
          goto LAB_710024bb18;
        }
        local_54 = 0x8001000a;
        FUN_71001b4200((undefined4 *)auStack_110,&local_54);
      }
      else {
        local_54 = 0x8001000a;
        FUN_71001b4200((undefined4 *)auStack_f8,&local_54);
        puVar5 = auStack_f8;
      }
    }
    else {
      local_54 = 0x8001000a;
      FUN_71001b4200((undefined4 *)auStack_e0,&local_54);
      puVar5 = auStack_e0;
    }
    FUN_71001d0c90((long)param_2,puVar5);
    bVar1 = false;
    param_5 = (undefined1 *)0x1;
  }
LAB_710024bbc8:
  uVar8 = (uint)param_5;
  (**(code **)(*plVar7 + 0x20))(plVar7);
  if (bVar1) {
    uVar4 = FUN_710022a7f0(param_1,(long)param_2,(long)&uStack_c8);
    uVar8 = (uint)uVar4;
  }
  FUN_71001e6910(&uStack_c8);
  return uVar8 & 1;
}

