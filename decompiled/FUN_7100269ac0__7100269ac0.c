// addr:      7100269ac0
// offset:    0x269ac0
// name:      FUN_7100269ac0
// mangled:   
// signature: undefined FUN_7100269ac0(void)


uint FUN_7100269ac0(long param_1,long *param_2,long *param_3,long param_4,undefined8 param_5,
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
  char cStack_c8;
  undefined4 uStack_54;
  
  puVar7 = auStack_100;
  FUN_71001e6720(&uStack_d0);
  plVar9 = &DAT_71052af138;
  if (DAT_71052af1d8 == '\0') {
LAB_7100269b54:
    if ((*plVar9 == 0) || (lVar8 = *(long *)(*plVar9 + 0x10), lVar8 == 0)) goto LAB_7100269b84;
    lVar8 = *(long *)(lVar8 + 0x10);
  }
  else {
    puVar4 = (uint *)FUN_7101717960(DAT_71052af1d0);
    uVar10 = *puVar4;
    if (uVar10 == 0) goto LAB_7100269b54;
    if ((ulong)uVar10 < (ulong)(DAT_71052af1b0[1] - *DAT_71052af1b0 >> 3)) {
      plVar9 = (long *)(*(long *)(*DAT_71052af1b0 + (ulong)uVar10 * 8) + 0x20);
      goto LAB_7100269b54;
    }
    FUN_71001b1300("..\\..\\..\\..\\.\\OnlineCore/src/Core/InstanceTable.h",0x47,0xe0000003,0);
LAB_7100269b84:
    lVar8 = 0;
  }
  plVar9 = (long *)(lVar8 + 0x78);
  (**(code **)(*plVar9 + 0x10))(plVar9);
  FUN_710022b480((long)&uStack_d0,*(ushort *)(param_1 + 0x48),1);
  uVar5 = FUN_710022b390((long)&uStack_d0,param_2);
  if ((uVar5 & 1) == 0) {
    param_6 = 0;
LAB_7100269c38:
    bVar3 = false;
  }
  else {
    FUN_710022b400((long)&uStack_d0,9);
    uStack_54 = (undefined4)((ulong)(param_3[1] - *param_3) >> 3);
    FUN_71001d0460((long)&uStack_d0,&uStack_54,4);
    pvVar2 = (void *)param_3[1];
    for (pvVar1 = (void *)*param_3; pvVar1 != pvVar2; pvVar1 = (void *)((long)pvVar1 + 8)) {
      FUN_71001d0460((long)&uStack_d0,pvVar1,8);
    }
    if (cStack_c8 == '\0') {
      FUN_7100289c90((long)&uStack_d0,param_4);
      if (cStack_c8 == '\0') {
        if (param_2 != (long *)0x0) {
          FUN_710022b430((long)param_2,param_5);
          FUN_710022b430((long)param_2,param_6);
        }
        DAT_71052b61d8 = FUN_710028c540;
        if ((*(char *)(param_1 + 0x70) != '\0') && (bVar3 = FUN_710022b500(param_1,0x10), bVar3)) {
          bVar3 = true;
          goto LAB_7100269c80;
        }
        param_6 = FUN_710022a7f0(param_1,(long)param_2,(long)&uStack_d0);
        param_6 = param_6 & 0xffffffff;
        goto LAB_7100269c38;
      }
      uStack_54 = 0x8001000a;
      FUN_71001b4200((undefined4 *)auStack_100,&uStack_54);
    }
    else {
      uStack_54 = 0x8001000a;
      FUN_71001b4200((undefined4 *)auStack_e8,&uStack_54);
      puVar7 = auStack_e8;
    }
    FUN_71001d0c90((long)param_2,puVar7);
    bVar3 = false;
    param_6 = 1;
  }
LAB_7100269c80:
  uVar10 = (uint)param_6;
  (**(code **)(*plVar9 + 0x20))(plVar9);
  if (bVar3) {
    uVar6 = FUN_710022a7f0(param_1,(long)param_2,(long)&uStack_d0);
    uVar10 = (uint)uVar6;
  }
  FUN_71001e6910(&uStack_d0);
  return uVar10 & 1;
}

