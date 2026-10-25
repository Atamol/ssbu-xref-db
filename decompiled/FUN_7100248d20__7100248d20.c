// addr:      7100248d20
// offset:    0x248d20
// name:      FUN_7100248d20
// mangled:   
// signature: undefined FUN_7100248d20(void)


void FUN_7100248d20(long param_1)

{
  uint uVar1;
  uint *puVar2;
  long *plVar3;
  long lVar4;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined4 uStack_24;
  
  lVar4 = *(long *)(*(long *)(param_1 + 0xa0) + 0x1f8);
  if ((lVar4 == 0) || (*(int *)(lVar4 + 0x40) == 5)) {
    plVar3 = &DAT_71052af138;
    if (DAT_71052af1d8 != '\0') {
      puVar2 = (uint *)FUN_7101717960(DAT_71052af1d0);
      uVar1 = *puVar2;
      if (uVar1 != 0) {
        if ((ulong)(DAT_71052af1b0[1] - *DAT_71052af1b0 >> 3) <= (ulong)uVar1) {
          FUN_71001b1300("..\\..\\..\\..\\.\\OnlineCore/src/Core/InstanceTable.h",0x47,0xe0000003,0)
          ;
          return;
        }
        plVar3 = (long *)(*(long *)(*DAT_71052af1b0 + (ulong)uVar1 * 8) + 0x20);
      }
    }
    plVar3 = (long *)FUN_71001cd7d0(*(long *)(*(long *)(*plVar3 + 0x10) + 0x18),
                                    *(uint *)(param_1 + 0xa8));
    if (plVar3 != (long *)0x0) {
      uStack_24 = 0x10001;
      FUN_71001b4200((undefined4 *)&uStack_60,&uStack_24);
      uStack_40 = uStack_58;
      uStack_38 = uStack_50;
      uStack_48 = uStack_60;
      FUN_71001d0f00(plVar3,2,&uStack_48,1);
    }
    FUN_71001cd870(param_1);
  }
  else {
    FUN_71001d6410(param_1,1);
    *(undefined4 *)(param_1 + 0x44) = 100;
  }
  return;
}

