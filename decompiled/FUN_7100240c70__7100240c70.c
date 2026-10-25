// addr:      7100240c70
// offset:    0x240c70
// name:      FUN_7100240c70
// mangled:   
// signature: undefined FUN_7100240c70(void)


void FUN_7100240c70(long param_1)

{
  uint uVar1;
  uint *puVar2;
  long *plVar3;
  undefined8 auStack_48 [3];
  undefined4 uStack_24;
  
  (**(code **)(**(long **)(param_1 + 0xa8) + 0x10))();
  FUN_71001cd870(param_1);
  plVar3 = &DAT_71052af138;
  if (DAT_71052af1d8 != '\0') {
    puVar2 = (uint *)FUN_7101717960(DAT_71052af1d0);
    uVar1 = *puVar2;
    if (uVar1 != 0) {
      if ((ulong)(DAT_71052af1b0[1] - *DAT_71052af1b0 >> 3) <= (ulong)uVar1) {
        FUN_71001b1300("..\\..\\..\\..\\.\\OnlineCore/src/Core/InstanceTable.h",0x47,0xe0000003,0);
        return;
      }
      plVar3 = (long *)(*(long *)(*DAT_71052af1b0 + (ulong)uVar1 * 8) + 0x20);
    }
  }
  plVar3 = (long *)FUN_71001cd7d0(*(long *)(*(long *)(*plVar3 + 0x10) + 0x18),
                                  *(uint *)(param_1 + 0xa0));
  if (plVar3 != (long *)0x0) {
    uStack_24 = 0x10001;
    FUN_71001b4200((undefined4 *)auStack_48,&uStack_24);
    FUN_71001d0f00(plVar3,2,auStack_48,1);
  }
  return;
}

