// addr:      71001fba90
// offset:    0x1fba90
// name:      FUN_71001fba90
// mangled:   
// signature: undefined FUN_71001fba90(void)


uint FUN_71001fba90(long param_1,uint param_2,undefined2 param_3)

{
  uint *puVar1;
  long lVar2;
  uint uVar3;
  long *plVar4;
  uint uStack_38;
  undefined2 uStack_34;
  
  plVar4 = &DAT_71052af138;
  if (DAT_71052af1d8 == '\0') {
LAB_71001fbb04:
    if ((*plVar4 != 0) && (lVar2 = *(long *)(*plVar4 + 0x10), lVar2 != 0)) {
      lVar2 = *(long *)(lVar2 + 0x10);
      goto LAB_71001fbb38;
    }
  }
  else {
    puVar1 = (uint *)FUN_7101717960(DAT_71052af1d0);
    uVar3 = *puVar1;
    if (uVar3 == 0) goto LAB_71001fbb04;
    if ((ulong)uVar3 < (ulong)(DAT_71052af1b0[1] - *DAT_71052af1b0 >> 3)) {
      plVar4 = (long *)(*(long *)(*DAT_71052af1b0 + (ulong)uVar3 * 8) + 0x20);
      goto LAB_71001fbb04;
    }
    FUN_71001b1300("..\\..\\..\\..\\.\\OnlineCore/src/Core/InstanceTable.h",0x47,0xe0000003,0);
  }
  lVar2 = 0;
LAB_71001fbb38:
  plVar4 = (long *)(lVar2 + 0x78);
  (**(code **)(*plVar4 + 0x10))(plVar4);
  uStack_38 = param_2;
  uStack_34 = param_3;
  lVar2 = FUN_71001fa660(param_1,&uStack_38);
  if (lVar2 == 0) {
    uVar3 = 1;
  }
  else {
    uVar3 = *(uint *)(lVar2 + 0xc0);
    if (6 < uVar3) {
      uVar3 = 1;
    }
  }
  (**(code **)(*plVar4 + 0x20))(plVar4);
  return uVar3;
}

