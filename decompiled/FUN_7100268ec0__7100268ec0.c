// addr:      7100268ec0
// offset:    0x268ec0
// name:      FUN_7100268ec0
// mangled:   
// signature: undefined FUN_7100268ec0(void)


uint FUN_7100268ec0(long param_1,long *param_2,ulong param_3)

{
  bool bVar1;
  uint *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  uint uVar6;
  long *plVar7;
  undefined8 auStack_c8 [3];
  undefined8 uStack_b0;
  char cStack_a8;
  undefined4 uStack_34;
  
  FUN_71001e6720(&uStack_b0);
  plVar7 = &DAT_71052af138;
  if (DAT_71052af1d8 == '\0') {
LAB_7100268f40:
    if ((*plVar7 == 0) || (lVar5 = *(long *)(*plVar7 + 0x10), lVar5 == 0)) goto LAB_7100268f70;
    lVar5 = *(long *)(lVar5 + 0x10);
  }
  else {
    puVar2 = (uint *)FUN_7101717960(DAT_71052af1d0);
    uVar6 = *puVar2;
    if (uVar6 == 0) goto LAB_7100268f40;
    if ((ulong)uVar6 < (ulong)(DAT_71052af1b0[1] - *DAT_71052af1b0 >> 3)) {
      plVar7 = (long *)(*(long *)(*DAT_71052af1b0 + (ulong)uVar6 * 8) + 0x20);
      goto LAB_7100268f40;
    }
    FUN_71001b1300("..\\..\\..\\..\\.\\OnlineCore/src/Core/InstanceTable.h",0x47,0xe0000003,0);
LAB_7100268f70:
    lVar5 = 0;
  }
  plVar7 = (long *)(lVar5 + 0x78);
  (**(code **)(*plVar7 + 0x10))(plVar7);
  FUN_710022b480((long)&uStack_b0,*(ushort *)(param_1 + 0x48),1);
  uVar3 = FUN_710022b390((long)&uStack_b0,param_2);
  if ((uVar3 & 1) == 0) {
    param_3 = 0;
  }
  else {
    FUN_710022b400((long)&uStack_b0,6);
    FUN_71002896e0((long)&uStack_b0,param_3);
    if (cStack_a8 != '\0') {
      uStack_34 = 0x8001000a;
      FUN_71001b4200((undefined4 *)auStack_c8,&uStack_34);
      FUN_71001d0c90((long)param_2,auStack_c8);
      bVar1 = false;
      param_3 = 1;
      goto LAB_7100269048;
    }
    DAT_71052b61c0 = FUN_710028c370;
    if ((*(char *)(param_1 + 0x70) != '\0') && (bVar1 = FUN_710022b500(param_1,0x10), bVar1)) {
      bVar1 = true;
      goto LAB_7100269048;
    }
    param_3 = FUN_710022a7f0(param_1,(long)param_2,(long)&uStack_b0);
    param_3 = param_3 & 0xffffffff;
  }
  bVar1 = false;
LAB_7100269048:
  uVar6 = (uint)param_3;
  (**(code **)(*plVar7 + 0x20))(plVar7);
  if (bVar1) {
    uVar4 = FUN_710022a7f0(param_1,(long)param_2,(long)&uStack_b0);
    uVar6 = (uint)uVar4;
  }
  FUN_71001e6910(&uStack_b0);
  return uVar6 & 1;
}

