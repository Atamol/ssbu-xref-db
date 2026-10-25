// addr:      7100269d60
// offset:    0x269d60
// name:      FUN_7100269d60
// mangled:   
// signature: undefined FUN_7100269d60(void)


uint FUN_7100269d60(long param_1,long *param_2,long *param_3,undefined8 param_4,ulong param_5)

{
  long lVar1;
  bool bVar2;
  uint *puVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  uint uVar7;
  long *plVar8;
  undefined8 auStack_d8 [3];
  undefined8 uStack_c0;
  char cStack_b8;
  int iStack_44;
  
  FUN_71001e6720(&uStack_c0);
  plVar8 = &DAT_71052af138;
  if (DAT_71052af1d8 == '\0') {
LAB_7100269dec:
    if ((*plVar8 == 0) || (lVar6 = *(long *)(*plVar8 + 0x10), lVar6 == 0)) goto LAB_7100269e1c;
    lVar6 = *(long *)(lVar6 + 0x10);
  }
  else {
    puVar3 = (uint *)FUN_7101717960(DAT_71052af1d0);
    uVar7 = *puVar3;
    if (uVar7 == 0) goto LAB_7100269dec;
    if ((ulong)uVar7 < (ulong)(DAT_71052af1b0[1] - *DAT_71052af1b0 >> 3)) {
      plVar8 = (long *)(*(long *)(*DAT_71052af1b0 + (ulong)uVar7 * 8) + 0x20);
      goto LAB_7100269dec;
    }
    FUN_71001b1300("..\\..\\..\\..\\.\\OnlineCore/src/Core/InstanceTable.h",0x47,0xe0000003,0);
LAB_7100269e1c:
    lVar6 = 0;
  }
  plVar8 = (long *)(lVar6 + 0x78);
  (**(code **)(*plVar8 + 0x10))(plVar8);
  FUN_710022b480((long)&uStack_c0,*(ushort *)(param_1 + 0x48),1);
  uVar4 = FUN_710022b390((long)&uStack_c0,param_2);
  if ((uVar4 & 1) == 0) {
    param_5 = 0;
  }
  else {
    FUN_710022b400((long)&uStack_c0,0x24);
    iStack_44 = (int)((ulong)(param_3[1] - *param_3) >> 3) * 0x38e38e39;
    FUN_71001d0460((long)&uStack_c0,&iStack_44,4);
    lVar1 = param_3[1];
    for (lVar6 = *param_3; lVar6 != lVar1; lVar6 = lVar6 + 0x48) {
      FUN_7100289c90((long)&uStack_c0,lVar6);
    }
    if (cStack_b8 != '\0') {
      iStack_44 = -0x7ffefff6;
      FUN_71001b4200((undefined4 *)auStack_d8,&iStack_44);
      FUN_71001d0c90((long)param_2,auStack_d8);
      bVar2 = false;
      param_5 = 1;
      goto LAB_7100269f54;
    }
    if (param_2 != (long *)0x0) {
      FUN_710022b430((long)param_2,param_4);
      FUN_710022b430((long)param_2,param_5);
    }
    DAT_71052b62b0 = FUN_710028d6c0;
    if ((*(char *)(param_1 + 0x70) != '\0') && (bVar2 = FUN_710022b500(param_1,0x10), bVar2)) {
      bVar2 = true;
      goto LAB_7100269f54;
    }
    param_5 = FUN_710022a7f0(param_1,(long)param_2,(long)&uStack_c0);
    param_5 = param_5 & 0xffffffff;
  }
  bVar2 = false;
LAB_7100269f54:
  uVar7 = (uint)param_5;
  (**(code **)(*plVar8 + 0x20))(plVar8);
  if (bVar2) {
    uVar5 = FUN_710022a7f0(param_1,(long)param_2,(long)&uStack_c0);
    uVar7 = (uint)uVar5;
  }
  FUN_71001e6910(&uStack_c0);
  return uVar7 & 1;
}

