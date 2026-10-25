// addr:      71002a03c0
// offset:    0x2a03c0
// name:      FUN_71002a03c0
// mangled:   
// signature: undefined FUN_71002a03c0(void)


void FUN_71002a03c0(long param_1)

{
  uint uVar1;
  bool bVar2;
  uint *puVar3;
  long lVar4;
  undefined8 *puVar5;
  long *plVar6;
  long *plVar7;
  undefined **ppuStack_78;
  undefined1 auStack_70 [16];
  undefined1 *puStack_60;
  undefined8 uStack_58;
  undefined4 uStack_44;
  
  plVar6 = &DAT_71052af138;
  if (DAT_71052af1d8 != '\0') {
    puVar3 = (uint *)FUN_7101717960(DAT_71052af1d0);
    uVar1 = *puVar3;
    if (uVar1 != 0) {
      if ((ulong)(DAT_71052af1b0[1] - *DAT_71052af1b0 >> 3) <= (ulong)uVar1) goto LAB_71002a05e8;
      plVar6 = (long *)(*(long *)(*DAT_71052af1b0 + (ulong)uVar1 * 8) + 0x20);
    }
  }
  lVar4 = FUN_71001cd7d0(*(long *)(*(long *)(*plVar6 + 0x10) + 0x18),*(uint *)(param_1 + 0xa0));
  if (lVar4 == 0) {
    uStack_44 = 0x80010004;
  }
  else {
    plVar6 = (long *)(param_1 + 0xa8);
    FUN_71001d1590(plVar6);
    lVar4 = *(long *)(*(long *)(param_1 + 0x148) + 0x10);
    plVar7 = (long *)(lVar4 + 0x30);
    (**(code **)(*plVar7 + 0x10))(plVar7);
    auStack_70[0] = 0;
    puStack_60 = auStack_70;
    uStack_58 = 0x10;
    ppuStack_78 = &PTR_FUN_710509cc08;
    FUN_71001b47e0((long)&ppuStack_78,*(char **)(lVar4 + 0x20),-1);
    (**(code **)(*plVar7 + 0x20))(plVar7);
    bVar2 = FUN_710029c6c0(param_1 + 0x150,plVar6,(long)&ppuStack_78,param_1 + 0x228,
                           *(undefined8 *)(param_1 + 0x238),*(undefined4 *)(param_1 + 0xa4));
    ppuStack_78 = &PTR_FUN_710509cc08;
    FUN_71001b4910((long)&ppuStack_78);
    if (bVar2) {
      plVar7 = &DAT_71052af138;
      if (DAT_71052af1d8 != '\0') {
        puVar3 = (uint *)FUN_7101717960(DAT_71052af1d0);
        uVar1 = *puVar3;
        if (uVar1 != 0) {
          if ((ulong)(DAT_71052af1b0[1] - *DAT_71052af1b0 >> 3) <= (ulong)uVar1) {
LAB_71002a05e8:
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
        puVar5[1] = FUN_71002a0860;
      }
      FUN_71001d4200(param_1,(long)plVar6,puVar5);
      return;
    }
    uStack_44 = 0x8001000d;
  }
  FUN_71001b4200((undefined4 *)&ppuStack_78,&uStack_44);
  FUN_71002a0600(param_1,(int *)&ppuStack_78);
  return;
}

