// addr:      710029e0d0
// offset:    0x29e0d0
// name:      FUN_710029e0d0
// mangled:   
// signature: undefined FUN_710029e0d0(void)


void FUN_710029e0d0(long param_1)

{
  uint uVar1;
  uint *puVar2;
  long lVar3;
  ulong uVar4;
  undefined8 *puVar5;
  long *plVar6;
  long *plVar7;
  undefined **ppuStack_70;
  undefined1 auStack_68 [16];
  undefined1 *puStack_58;
  undefined8 uStack_50;
  undefined4 uStack_44;
  
  plVar6 = &DAT_71052af138;
  if (DAT_71052af1d8 != '\0') {
    puVar2 = (uint *)FUN_7101717960(DAT_71052af1d0);
    uVar1 = *puVar2;
    if (uVar1 != 0) {
      if ((ulong)(DAT_71052af1b0[1] - *DAT_71052af1b0 >> 3) <= (ulong)uVar1) goto LAB_710029e2bc;
      plVar6 = (long *)(*(long *)(*DAT_71052af1b0 + (ulong)uVar1 * 8) + 0x20);
    }
  }
  lVar3 = FUN_71001cd7d0(*(long *)(*(long *)(*plVar6 + 0x10) + 0x18),*(uint *)(param_1 + 0xa0));
  if (lVar3 == 0) {
    uStack_44 = 0x80010004;
  }
  else {
    plVar6 = (long *)(param_1 + 0xa8);
    FUN_71001d1590(plVar6);
    auStack_68[0] = 0;
    puStack_58 = auStack_68;
    uStack_50 = 0x10;
    ppuStack_70 = &PTR_FUN_710509cc08;
    uVar4 = (**(code **)(**(long **)(param_1 + 0x150) + 0x10))
                      (*(long **)(param_1 + 0x150),plVar6,&ppuStack_70,param_1 + 0x1a0,
                       param_1 + 0x1d0,*(undefined4 *)(param_1 + 0xa4));
    ppuStack_70 = &PTR_FUN_710509cc08;
    FUN_71001b4910((long)&ppuStack_70);
    if ((uVar4 & 1) != 0) {
      plVar7 = &DAT_71052af138;
      if (DAT_71052af1d8 != '\0') {
        puVar2 = (uint *)FUN_7101717960(DAT_71052af1d0);
        uVar1 = *puVar2;
        if (uVar1 != 0) {
          if ((ulong)(DAT_71052af1b0[1] - *DAT_71052af1b0 >> 3) <= (ulong)uVar1) {
LAB_710029e2bc:
            FUN_71001b1300("..\\..\\..\\..\\.\\OnlineCore/src/Core/InstanceTable.h",0x47,0xe0000003,
                           0);
            return;
          }
          plVar7 = (long *)(*(long *)(*DAT_71052af1b0 + (ulong)uVar1 * 8) + 0x20);
        }
      }
      FUN_71001d3780(*(long *)(*(long *)(*plVar7 + 0x10) + 0x18),*(uint *)(param_1 + 0xa0),
                     *(undefined4 *)(param_1 + 0xc0));
      FUN_71001d6410(param_1,2);
      puVar5 = FUN_71001af850(0x20);
      if (puVar5 != (undefined8 *)0x0) {
        puVar5[2] = 0;
        puVar5[3] = &DAT_71044114cc;
        *puVar5 = &PTR_FUN_7104f56e28;
        puVar5[1] = FUN_710029e2e0;
      }
      FUN_71001d4200(param_1,(long)plVar6,puVar5);
      return;
    }
    uStack_44 = 0x8001000d;
  }
  FUN_71001b4200((undefined4 *)&ppuStack_70,&uStack_44);
  FUN_710029dda0(param_1,(int *)&ppuStack_70);
  return;
}

