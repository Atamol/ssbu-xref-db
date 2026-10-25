// addr:      71001fa4e0
// offset:    0x1fa4e0
// name:      FUN_71001fa4e0
// mangled:   
// signature: undefined FUN_71001fa4e0(void)


uint FUN_71001fa4e0(long param_1,long param_2,undefined4 param_3,undefined2 param_4)

{
  uint *puVar1;
  long lVar2;
  long *plVar3;
  undefined8 uVar4;
  long lVar5;
  uint uVar6;
  long *plVar7;
  undefined8 uStack_68;
  
  plVar7 = &DAT_71052af138;
  if (DAT_71052af1d8 == '\0') {
LAB_71001fa55c:
    if ((*plVar7 != 0) && (lVar5 = *(long *)(*plVar7 + 0x10), lVar5 != 0)) {
      lVar5 = *(long *)(lVar5 + 0x10);
      goto LAB_71001fa590;
    }
  }
  else {
    puVar1 = (uint *)FUN_7101717960(DAT_71052af1d0);
    uVar6 = *puVar1;
    if (uVar6 == 0) goto LAB_71001fa55c;
    if ((ulong)uVar6 < (ulong)(DAT_71052af1b0[1] - *DAT_71052af1b0 >> 3)) {
      plVar7 = (long *)(*(long *)(*DAT_71052af1b0 + (ulong)uVar6 * 8) + 0x20);
      goto LAB_71001fa55c;
    }
    FUN_71001b1300("..\\..\\..\\..\\.\\OnlineCore/src/Core/InstanceTable.h",0x47,0xe0000003,0);
  }
  lVar5 = 0;
LAB_71001fa590:
  plVar7 = (long *)(lVar5 + 0x78);
  (**(code **)(*plVar7 + 0x10))(plVar7);
  uStack_68._0_6_ = CONCAT24(param_4,param_3);
  lVar5 = FUN_71001fa660(param_1,(uint *)&uStack_68);
  if (lVar5 == 0) {
    uVar6 = 0;
  }
  else {
    FUN_71001f2f60(&uStack_68,param_2);
    lVar2 = FUN_71001b52a0((long)&uStack_68);
    if (lVar2 != 0) {
      plVar3 = *(long **)(*(long *)(lVar5 + 0xb0) + 0x10);
      (**(code **)(*plVar3 + 0xa0))(plVar3,&uStack_68);
    }
    if (*(char *)(param_2 + 0x68) == '\0') {
      FUN_71001f2180(param_2);
    }
    uVar4 = FUN_71001c0740(lVar5,*(long *)(param_2 + 8));
    uVar6 = (uint)uVar4;
    uStack_68 = &PTR_FUN_710509cc08;
    FUN_71001b4910((long)&uStack_68);
  }
  (**(code **)(*plVar7 + 0x20))(plVar7);
  return uVar6 & 1;
}

