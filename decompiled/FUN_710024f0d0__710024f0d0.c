// addr:      710024f0d0
// offset:    0x24f0d0
// name:      FUN_710024f0d0
// mangled:   
// signature: uint __cdecl FUN_710024f0d0(long param_1, long * param_2, void * param_3, long * param_4)


uint FUN_710024f0d0(long param_1,long *param_2,void *param_3,long *param_4)

{
  void *pvVar1;
  bool bVar2;
  uint *puVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  long lVar7;
  long *plVar8;
  uint uVar9;
  void *pvVar10;
  undefined8 auStack_e8 [3];
  undefined8 auStack_d0 [3];
  undefined8 uStack_b8;
  char local_b0;
  undefined4 local_44;
  
  FUN_71001e6720(&uStack_b8);
  plVar8 = &DAT_71052af138;
  if (DAT_71052af1d8 == '\0') {
LAB_710024f154:
    if ((*plVar8 == 0) || (lVar7 = *(long *)(*plVar8 + 0x10), lVar7 == 0)) goto LAB_710024f184;
    lVar7 = *(long *)(lVar7 + 0x10);
  }
  else {
    puVar3 = (uint *)FUN_7101717960(DAT_71052af1d0);
    uVar9 = *puVar3;
    if (uVar9 == 0) goto LAB_710024f154;
    if ((ulong)uVar9 < (ulong)(DAT_71052af1b0[1] - *DAT_71052af1b0 >> 3)) {
      plVar8 = (long *)(*(long *)(*DAT_71052af1b0 + (ulong)uVar9 * 8) + 0x20);
      goto LAB_710024f154;
    }
    FUN_71001b1300("..\\..\\..\\..\\.\\OnlineCore/src/Core/InstanceTable.h",0x47,0xe0000003,0);
LAB_710024f184:
    lVar7 = 0;
  }
  plVar8 = (long *)(lVar7 + 0x78);
  (**(code **)(*plVar8 + 0x10))(plVar8);
  FUN_710022b480((long)&uStack_b8,*(ushort *)(param_1 + 0x48),1);
  uVar4 = FUN_710022b390((long)&uStack_b8,param_2);
  if ((uVar4 & 1) == 0) {
    pvVar10 = (void *)0x0;
LAB_710024f200:
    bVar2 = false;
  }
  else {
    FUN_710022b400((long)&uStack_b8,0xc);
    FUN_71001d0460((long)&uStack_b8,param_3,4);
    if (local_b0 == '\0') {
      local_44 = (undefined4)((ulong)(param_4[1] - *param_4) >> 2);
      FUN_71001d0460((long)&uStack_b8,&local_44,4);
      pvVar10 = (void *)param_4[1];
      for (pvVar1 = (void *)*param_4; pvVar1 != pvVar10; pvVar1 = (void *)((long)pvVar1 + 4)) {
        FUN_71001d0460((long)&uStack_b8,pvVar1,4);
      }
      if (local_b0 == '\0') {
        DAT_71052b5d10 = FUN_7100252fa0;
        if ((*(char *)(param_1 + 0x70) != '\0') && (bVar2 = FUN_710022b500(param_1,0x10), bVar2)) {
          bVar2 = true;
          goto LAB_710024f284;
        }
        uVar4 = FUN_710022a7f0(param_1,(long)param_2,(long)&uStack_b8);
        pvVar10 = (void *)(uVar4 & 0xffffffff);
        goto LAB_710024f200;
      }
      local_44 = 0x8001000a;
      FUN_71001b4200((undefined4 *)auStack_e8,&local_44);
      puVar6 = auStack_e8;
    }
    else {
      local_44 = 0x8001000a;
      FUN_71001b4200((undefined4 *)auStack_d0,&local_44);
      puVar6 = auStack_d0;
    }
    FUN_71001d0c90((long)param_2,puVar6);
    bVar2 = false;
    pvVar10 = (void *)0x1;
  }
LAB_710024f284:
  uVar9 = (uint)pvVar10;
  (**(code **)(*plVar8 + 0x20))(plVar8);
  if (bVar2) {
    uVar5 = FUN_710022a7f0(param_1,(long)param_2,(long)&uStack_b8);
    uVar9 = (uint)uVar5;
  }
  FUN_71001e6910(&uStack_b8);
  return uVar9 & 1;
}

