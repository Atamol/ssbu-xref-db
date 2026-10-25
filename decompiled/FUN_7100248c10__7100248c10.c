// addr:      7100248c10
// offset:    0x248c10
// name:      FUN_7100248c10
// mangled:   
// signature: undefined FUN_7100248c10(void)


void FUN_7100248c10(long param_1)

{
  uint uVar1;
  uint *puVar2;
  long lVar3;
  long *plVar4;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
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
  lVar3 = FUN_71001cd7d0(*(long *)(*(long *)(*plVar4 + 0x10) + 0x18),*(uint *)(param_1 + 0x160));
  if (lVar3 != 0) {
    if (*(int *)(param_1 + 0xb4) - 2U < 3) {
      uStack_48 = *(undefined8 *)(param_1 + 0xf8);
      uStack_40 = *(undefined8 *)(param_1 + 0x100);
      uStack_38 = *(undefined8 *)(param_1 + 0x108);
      FUN_7100248800(param_1,(int *)&uStack_48);
    }
    else {
      FUN_71001d6410(param_1,1);
      *(undefined4 *)(param_1 + 0x44) = 0x10;
    }
    return;
  }
  FUN_71001cd870(param_1);
  return;
}

