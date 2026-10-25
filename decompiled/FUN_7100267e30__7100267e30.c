// addr:      7100267e30
// offset:    0x267e30
// name:      FUN_7100267e30
// mangled:   
// signature: uint __cdecl FUN_7100267e30(long param_1, long * param_2, long * param_3, long * param_4, undefined1 * param_5, ulong param_6)


uint FUN_7100267e30(long param_1,long *param_2,long *param_3,long *param_4,undefined1 *param_5,
                   ulong param_6)

{
  void *pvVar1;
  void *pvVar2;
  long lVar3;
  bool bVar4;
  uint *puVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  long lVar9;
  long *plVar10;
  uint uVar11;
  undefined8 auStack_118 [3];
  undefined8 auStack_100 [3];
  undefined8 auStack_e8 [3];
  undefined8 uStack_d0;
  char local_c8;
  int local_54;
  
  FUN_71001e6720(&uStack_d0);
  plVar10 = &DAT_71052af138;
  if (DAT_71052af1d8 == '\0') {
LAB_7100267ec4:
    if ((*plVar10 == 0) || (lVar9 = *(long *)(*plVar10 + 0x10), lVar9 == 0)) goto LAB_7100267ef4;
    lVar9 = *(long *)(lVar9 + 0x10);
  }
  else {
    puVar5 = (uint *)FUN_7101717960(DAT_71052af1d0);
    uVar11 = *puVar5;
    if (uVar11 == 0) goto LAB_7100267ec4;
    if ((ulong)uVar11 < (ulong)(DAT_71052af1b0[1] - *DAT_71052af1b0 >> 3)) {
      plVar10 = (long *)(*(long *)(*DAT_71052af1b0 + (ulong)uVar11 * 8) + 0x20);
      goto LAB_7100267ec4;
    }
    FUN_71001b1300("..\\..\\..\\..\\.\\OnlineCore/src/Core/InstanceTable.h",0x47,0xe0000003,0);
LAB_7100267ef4:
    lVar9 = 0;
  }
  plVar10 = (long *)(lVar9 + 0x78);
  (**(code **)(*plVar10 + 0x10))(plVar10);
  FUN_710022b480((long)&uStack_d0,*(ushort *)(param_1 + 0x48),1);
  uVar6 = FUN_710022b390((long)&uStack_d0,param_2);
  if ((uVar6 & 1) == 0) {
    param_6 = 0;
LAB_7100267fa8:
    bVar4 = false;
  }
  else {
    FUN_710022b400((long)&uStack_d0,0x2a);
    local_54 = (int)((ulong)(param_3[1] - *param_3) >> 3);
    FUN_71001d0460((long)&uStack_d0,&local_54,4);
    pvVar2 = (void *)param_3[1];
    for (pvVar1 = (void *)*param_3; pvVar1 != pvVar2; pvVar1 = (void *)((long)pvVar1 + 8)) {
      FUN_71001d0460((long)&uStack_d0,pvVar1,8);
    }
    if (local_c8 == '\0') {
      local_54 = (int)((ulong)(param_4[1] - *param_4) >> 4) * 0x286bca1b;
      FUN_71001d0460((long)&uStack_d0,&local_54,4);
      lVar3 = param_4[1];
      for (lVar9 = *param_4; lVar9 != lVar3; lVar9 = lVar9 + 0x130) {
        FUN_710028b9b0((long)&uStack_d0,lVar9);
      }
      if (local_c8 == '\0') {
        FUN_71001d0630((long)&uStack_d0,param_5);
        if (local_c8 == '\0') {
          if (param_2 != (long *)0x0) {
            FUN_710022b430((long)param_2,param_6);
          }
          DAT_71052b62e0 = FUN_710028d970;
          if ((*(char *)(param_1 + 0x70) != '\0') && (bVar4 = FUN_710022b500(param_1,0x10), bVar4))
          {
            bVar4 = true;
            goto LAB_7100268068;
          }
          uVar6 = FUN_710022a7f0(param_1,(long)param_2,(long)&uStack_d0);
          param_6 = uVar6 & 0xffffffff;
          goto LAB_7100267fa8;
        }
        local_54 = -0x7ffefff6;
        FUN_71001b4200((undefined4 *)auStack_118,&local_54);
        puVar8 = auStack_118;
      }
      else {
        local_54 = -0x7ffefff6;
        FUN_71001b4200((undefined4 *)auStack_100,&local_54);
        puVar8 = auStack_100;
      }
    }
    else {
      local_54 = -0x7ffefff6;
      FUN_71001b4200((undefined4 *)auStack_e8,&local_54);
      puVar8 = auStack_e8;
    }
    FUN_71001d0c90((long)param_2,puVar8);
    bVar4 = false;
    param_6 = 1;
  }
LAB_7100268068:
  uVar11 = (uint)param_6;
  (**(code **)(*plVar10 + 0x20))(plVar10);
  if (bVar4) {
    uVar7 = FUN_710022a7f0(param_1,(long)param_2,(long)&uStack_d0);
    uVar11 = (uint)uVar7;
  }
  FUN_71001e6910(&uStack_d0);
  return uVar11 & 1;
}

