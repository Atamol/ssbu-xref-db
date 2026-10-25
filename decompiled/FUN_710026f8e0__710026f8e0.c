// addr:      710026f8e0
// offset:    0x26f8e0
// name:      FUN_710026f8e0
// mangled:   
// signature: undefined FUN_710026f8e0(void)


uint FUN_710026f8e0(long param_1,long *param_2,ulong *param_3)

{
  ulong uVar1;
  bool bVar2;
  uint *puVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  long *plVar7;
  uint uVar8;
  undefined8 auStack_c8 [3];
  undefined8 uStack_b0;
  char cStack_a8;
  int iStack_34;
  
  FUN_71001e6720(&uStack_b0);
  plVar7 = &DAT_71052af138;
  if (DAT_71052af1d8 == '\0') {
LAB_710026f960:
    if ((*plVar7 == 0) || (lVar6 = *(long *)(*plVar7 + 0x10), lVar6 == 0)) goto LAB_710026f990;
    lVar6 = *(long *)(lVar6 + 0x10);
  }
  else {
    puVar3 = (uint *)FUN_7101717960(DAT_71052af1d0);
    uVar8 = *puVar3;
    if (uVar8 == 0) goto LAB_710026f960;
    if ((ulong)uVar8 < (ulong)(DAT_71052af1b0[1] - *DAT_71052af1b0 >> 3)) {
      plVar7 = (long *)(*(long *)(*DAT_71052af1b0 + (ulong)uVar8 * 8) + 0x20);
      goto LAB_710026f960;
    }
    FUN_71001b1300("..\\..\\..\\..\\.\\OnlineCore/src/Core/InstanceTable.h",0x47,0xe0000003,0);
LAB_710026f990:
    lVar6 = 0;
  }
  plVar7 = (long *)(lVar6 + 0x78);
  (**(code **)(*plVar7 + 0x10))(plVar7);
  FUN_710022b480((long)&uStack_b0,*(ushort *)(param_1 + 0x48),1);
  uVar4 = FUN_710022b390((long)&uStack_b0,param_2);
  if ((uVar4 & 1) == 0) {
    uVar4 = 0;
  }
  else {
    FUN_710022b400((long)&uStack_b0,0x3a);
    iStack_34 = (int)(param_3[1] - *param_3 >> 3) * -0x55555555;
    FUN_71001d0460((long)&uStack_b0,&iStack_34,4);
    uVar4 = param_3[1];
    for (uVar1 = *param_3; uVar1 != uVar4; uVar1 = uVar1 + 0x18) {
      FUN_7100284bb0((long)&uStack_b0,uVar1);
    }
    if (cStack_a8 != '\0') {
      iStack_34 = -0x7ffefff6;
      FUN_71001b4200((undefined4 *)auStack_c8,&iStack_34);
      FUN_71001d0c90((long)param_2,auStack_c8);
      bVar2 = false;
      uVar4 = 1;
      goto LAB_710026faac;
    }
    DAT_71052b6360 = FUN_710028e3b0;
    if ((*(char *)(param_1 + 0x70) != '\0') && (bVar2 = FUN_710022b500(param_1,0x10), bVar2)) {
      bVar2 = true;
      goto LAB_710026faac;
    }
    uVar4 = FUN_710022a7f0(param_1,(long)param_2,(long)&uStack_b0);
    uVar4 = uVar4 & 0xffffffff;
  }
  bVar2 = false;
LAB_710026faac:
  uVar8 = (uint)uVar4;
  (**(code **)(*plVar7 + 0x20))(plVar7);
  if (bVar2) {
    uVar5 = FUN_710022a7f0(param_1,(long)param_2,(long)&uStack_b0);
    uVar8 = (uint)uVar5;
  }
  FUN_71001e6910(&uStack_b0);
  return uVar8 & 1;
}

