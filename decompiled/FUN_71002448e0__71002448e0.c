// addr:      71002448e0
// offset:    0x2448e0
// name:      FUN_71002448e0
// mangled:   
// signature: undefined FUN_71002448e0(void)


void FUN_71002448e0(long param_1,long param_2)

{
  uint uVar1;
  uint *puVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  undefined4 uStack_4c;
  undefined4 auStack_48 [6];
  
  plVar5 = &DAT_71052af138;
  if (DAT_71052af1d8 == '\0') {
LAB_7100244950:
    if ((*plVar5 != 0) && (lVar3 = *(long *)(*plVar5 + 0x10), lVar3 != 0)) {
      lVar3 = *(long *)(lVar3 + 0x10);
      goto LAB_7100244984;
    }
  }
  else {
    puVar2 = (uint *)FUN_7101717960(DAT_71052af1d0);
    uVar1 = *puVar2;
    if (uVar1 == 0) goto LAB_7100244950;
    if ((ulong)uVar1 < (ulong)(DAT_71052af1b0[1] - *DAT_71052af1b0 >> 3)) {
      plVar5 = (long *)(*(long *)(*DAT_71052af1b0 + (ulong)uVar1 * 8) + 0x20);
      goto LAB_7100244950;
    }
    FUN_71001b1300("..\\..\\..\\..\\.\\OnlineCore/src/Core/InstanceTable.h",0x47,0xe0000003,0);
  }
  lVar3 = 0;
LAB_7100244984:
  plVar5 = (long *)(lVar3 + 0x78);
  (**(code **)(*plVar5 + 0x10))(plVar5);
  if (*(int *)(param_2 + 0x14) == 2) {
    lVar3 = *(long *)(param_1 + 0x2a0);
    lVar4 = *(long *)(param_1 + 0x2a8);
    *(long *)(lVar3 + 0xc0) = lVar4;
    *(long *)(lVar4 + 0x88) = lVar3;
    *(long *)(lVar4 + 0xb8) = lVar3;
    (**(code **)(**(long **)(lVar3 + 0xc0) + 0xb8))
              (auStack_48,*(long **)(lVar3 + 0xc0),*(undefined8 *)(lVar3 + 0x80));
    FUN_71001e1680(*(long *)(param_1 + 0x2a8),*(long *)(param_1 + 0x3e0));
    FUN_71001e1680(*(long *)(param_1 + 0x2a0),*(long *)(param_1 + 0x3e0));
    FUN_71001e1620(*(long *)(param_1 + 0x2a0),*(int *)(*(long *)(param_1 + 0x2a8) + 0x90));
  }
  else {
    uStack_4c = 0x80050001;
    FUN_71001b4200(auStack_48,&uStack_4c);
    FUN_71001b4300((undefined4 *)(param_1 + 0x338),auStack_48);
  }
  FUN_71001d6410(param_1,3);
  (**(code **)(*plVar5 + 0x20))(plVar5);
  return;
}

