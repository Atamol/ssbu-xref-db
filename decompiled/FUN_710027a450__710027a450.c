// addr:      710027a450
// offset:    0x27a450
// name:      FUN_710027a450
// mangled:   
// signature: undefined FUN_710027a450(void)


void FUN_710027a450(long param_1)

{
  uint uVar1;
  uint *puVar2;
  long lVar3;
  ulong uVar4;
  undefined8 *puVar5;
  long *plVar6;
  long *plVar7;
  undefined4 uStack_4c;
  int aiStack_48 [6];
  
  plVar6 = &DAT_71052af138;
  if (DAT_71052af1d8 != '\0') {
    puVar2 = (uint *)FUN_7101717960(DAT_71052af1d0);
    uVar1 = *puVar2;
    if (uVar1 != 0) {
      if ((ulong)(DAT_71052af1b0[1] - *DAT_71052af1b0 >> 3) <= (ulong)uVar1) goto LAB_710027a600;
      plVar6 = (long *)(*(long *)(*DAT_71052af1b0 + (ulong)uVar1 * 8) + 0x20);
    }
  }
  lVar3 = FUN_71001cd7d0(*(long *)(*(long *)(*plVar6 + 0x10) + 0x18),*(uint *)(param_1 + 0xa0));
  if (lVar3 == 0) {
    uStack_4c = 0x80010004;
  }
  else {
    plVar6 = (long *)(param_1 + 0xf8);
    FUN_71001d1590(plVar6);
    uVar4 = (**(code **)(**(long **)(param_1 + 0xa8) + 0x38))
                      (*(long **)(param_1 + 0xa8),plVar6,param_1 + 0x1b8,param_1 + 0x2c8);
    if ((uVar4 & 1) != 0) {
      plVar7 = &DAT_71052af138;
      if (DAT_71052af1d8 != '\0') {
        puVar2 = (uint *)FUN_7101717960(DAT_71052af1d0);
        uVar1 = *puVar2;
        if (uVar1 != 0) {
          if ((ulong)(DAT_71052af1b0[1] - *DAT_71052af1b0 >> 3) <= (ulong)uVar1) {
LAB_710027a600:
            FUN_71001b1300("..\\..\\..\\..\\.\\OnlineCore/src/Core/InstanceTable.h",0x47,0xe0000003,
                           0);
            return;
          }
          plVar7 = (long *)(*(long *)(*DAT_71052af1b0 + (ulong)uVar1 * 8) + 0x20);
        }
      }
      FUN_71001d3780(*(long *)(*(long *)(*plVar7 + 0x10) + 0x18),*(uint *)(param_1 + 0xa0),
                     *(undefined4 *)(param_1 + 0x110));
      FUN_71001d6410(param_1,2);
      puVar5 = FUN_71001af850(0x20);
      if (puVar5 != (undefined8 *)0x0) {
        puVar5[2] = 0;
        puVar5[3] = &DAT_71044114cc;
        *puVar5 = &PTR_FUN_7104f56e28;
        puVar5[1] = FUN_710027a770;
      }
      FUN_71001d4200(param_1,(long)plVar6,puVar5);
      return;
    }
    uStack_4c = 0x8001000d;
  }
  FUN_71001b4200(aiStack_48,&uStack_4c);
  FUN_710027a620(param_1,aiStack_48);
  return;
}

