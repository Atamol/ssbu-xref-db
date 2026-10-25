// addr:      710029e2e0
// offset:    0x29e2e0
// name:      FUN_710029e2e0
// mangled:   
// signature: undefined FUN_710029e2e0(void)


void FUN_710029e2e0(long param_1)

{
  uint uVar1;
  uint *puVar2;
  long lVar3;
  long *plVar4;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined4 uStack_24;
  
  plVar4 = &DAT_71052af138;
  if (DAT_71052af1d8 != '\0') {
    puVar2 = (uint *)FUN_7101717960(DAT_71052af1d0);
    uVar1 = *puVar2;
    if (uVar1 != 0) {
      if ((ulong)(DAT_71052af1b0[1] - *DAT_71052af1b0 >> 3) <= (ulong)uVar1) {
        FUN_71001b1300("..\\..\\..\\..\\.\\OnlineCore/src/Core/InstanceTable.h",0x47,0xe0000003,0);
        return;
      }
      plVar4 = (long *)(*(long *)(*DAT_71052af1b0 + (ulong)uVar1 * 8) + 0x20);
    }
  }
  lVar3 = FUN_71001cd7d0(*(long *)(*(long *)(*plVar4 + 0x10) + 0x18),*(uint *)(param_1 + 0xa0));
  if (lVar3 == 0) {
    uStack_24 = 0x80010004;
  }
  else {
    if (*(int *)(param_1 + 0xbc) != 2) {
      uStack_48 = *(undefined8 *)(param_1 + 0x100);
      uStack_40 = *(undefined8 *)(param_1 + 0x108);
      uStack_38 = *(undefined8 *)(param_1 + 0x110);
      goto LAB_710029e3dc;
    }
    lVar3 = *(long *)(*(long *)(param_1 + 0x140) + 0x10);
    plVar4 = (long *)(lVar3 + 0x30);
    (**(code **)(*plVar4 + 0x10))(plVar4);
    FUN_71001b2f70(lVar3 + 8,param_1 + 0x208);
    (**(code **)(*plVar4 + 0x20))(plVar4);
    uStack_24 = 0x10001;
  }
  FUN_71001b4200((undefined4 *)&uStack_48,&uStack_24);
LAB_710029e3dc:
  FUN_710029dda0(param_1,(int *)&uStack_48);
  return;
}

