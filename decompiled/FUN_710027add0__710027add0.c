// addr:      710027add0
// offset:    0x27add0
// name:      FUN_710027add0
// mangled:   
// signature: undefined FUN_710027add0(void)


void FUN_710027add0(long param_1)

{
  uint uVar1;
  uint *puVar2;
  long lVar3;
  code *pcVar4;
  long *plVar5;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined4 uStack_24;
  
  plVar5 = &DAT_71052af138;
  if (DAT_71052af1d8 != '\0') {
    puVar2 = (uint *)FUN_7101717960(DAT_71052af1d0);
    uVar1 = *puVar2;
    if (uVar1 != 0) {
      if ((ulong)(DAT_71052af1b0[1] - *DAT_71052af1b0 >> 3) <= (ulong)uVar1) {
        FUN_71001b1300("..\\..\\..\\..\\.\\OnlineCore/src/Core/InstanceTable.h",0x47,0xe0000003,0);
        return;
      }
      plVar5 = (long *)(*(long *)(*DAT_71052af1b0 + (ulong)uVar1 * 8) + 0x20);
    }
  }
  lVar3 = FUN_71001cd7d0(*(long *)(*(long *)(*plVar5 + 0x10) + 0x18),*(uint *)(param_1 + 0xa0));
  if (lVar3 == 0) {
    uStack_24 = 0x80010004;
  }
  else {
    pcVar4 = FUN_710170d030;
    if (*(int *)(param_1 + 0x358) < 0) {
      pcVar4 = (code *)0x0;
    }
    if (pcVar4 == (code *)0x0) {
      FUN_710027a620(param_1,(int *)(param_1 + 0x358));
      return;
    }
    if (*(int *)(param_1 + 0x10c) != 2) {
      uStack_48 = *(undefined8 *)(param_1 + 0x150);
      uStack_40 = *(undefined8 *)(param_1 + 0x158);
      uStack_38 = *(undefined8 *)(param_1 + 0x160);
      goto LAB_710027aec8;
    }
    uStack_24 = 0x10001;
  }
  FUN_71001b4200((undefined4 *)&uStack_48,&uStack_24);
LAB_710027aec8:
  FUN_710027a620(param_1,(int *)&uStack_48);
  return;
}

