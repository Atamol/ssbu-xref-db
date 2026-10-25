// addr:      71002234a0
// offset:    0x2234a0
// name:      FUN_71002234a0
// mangled:   
// signature: undefined FUN_71002234a0(void)


void FUN_71002234a0(long param_1,long *param_2)

{
  uint uVar1;
  bool bVar2;
  uint *puVar3;
  long lVar4;
  long *plVar5;
  ulong uVar6;
  long *plVar7;
  undefined **ppuStack_a0;
  undefined1 auStack_98 [16];
  undefined1 *puStack_88;
  undefined8 uStack_80;
  undefined1 auStack_78 [24];
  char *pcStack_60;
  char *pcStack_58;
  undefined8 uStack_50;
  undefined1 auStack_48 [24];
  
  plVar7 = &DAT_71052af138;
  if (DAT_71052af1d8 != '\0') {
    puVar3 = (uint *)FUN_7101717960(DAT_71052af1d0);
    uVar1 = *puVar3;
    if (uVar1 != 0) {
      if ((ulong)(DAT_71052af1b0[1] - *DAT_71052af1b0 >> 3) <= (ulong)uVar1) {
        FUN_71001b1300("..\\..\\..\\..\\.\\OnlineCore/src/Core/InstanceTable.h",0x47,0xe0000003,0);
        return;
      }
      plVar7 = (long *)(*(long *)(*DAT_71052af1b0 + (ulong)uVar1 * 8) + 0x20);
    }
  }
  lVar4 = FUN_71001cd7d0(*(long *)(*(long *)(*plVar7 + 0x10) + 0x18),*(uint *)(param_1 + 0xa0));
  if (lVar4 != 0) {
    *(undefined4 *)((long)param_2 + 0xc) = *(undefined4 *)(param_1 + 0x120);
    plVar7 = *(long **)(param_1 + 0x170);
    while (plVar7 != (long *)(param_1 + 0x178)) {
      FUN_71001b2b10((long)(plVar7 + 4),&ppuStack_a0);
      FUN_71001b2b10((long)(plVar7 + 9),&pcStack_60);
      (**(code **)(*param_2 + 0x18))(auStack_48,param_2,ppuStack_a0,pcStack_60);
      FUN_71001b2bf0((long)ppuStack_a0);
      FUN_71001b2bf0((long)pcStack_60);
      plVar5 = (long *)plVar7[1];
      if ((long *)plVar7[1] == (long *)0x0) {
        plVar5 = plVar7 + 2;
        bVar2 = *(long **)*plVar5 != plVar7;
        plVar7 = (long *)*plVar5;
        if (bVar2) {
          do {
            lVar4 = *plVar5;
            plVar5 = (long *)(lVar4 + 0x10);
            plVar7 = (long *)*plVar5;
          } while (*plVar7 != lVar4);
        }
      }
      else {
        do {
          plVar7 = plVar5;
          plVar5 = (long *)*plVar7;
        } while ((long *)*plVar7 != (long *)0x0);
      }
    }
    uVar6 = *(ulong *)(param_1 + 0x160);
    if (*(char *)(param_1 + 0x198) == '\0') {
      uStack_50 = 0;
      pcStack_60 = (char *)0x0;
      pcStack_58 = (char *)0x0;
      if (uVar6 + 1 != 0) {
        FUN_71001dd4a0((long *)&pcStack_60,uVar6 + 1);
      }
      FUN_71001b3db0(param_1 + 0x130,pcStack_60,uVar6);
      FUN_71001b3e40(param_1 + 0x130,uVar6);
      pcStack_60[uVar6] = '\0';
      auStack_98[0] = 0;
      puStack_88 = auStack_98;
      uStack_80 = 0x10;
      ppuStack_a0 = &PTR_FUN_710509cc08;
      FUN_71001b47e0((long)&ppuStack_a0,pcStack_60,-1);
      (**(code **)(*param_2 + 0x28))(auStack_78,param_2,&ppuStack_a0);
      ppuStack_a0 = &PTR_FUN_710509cc08;
      FUN_71001b4910((long)&ppuStack_a0);
      if (pcStack_60 != (char *)0x0) {
        pcStack_58 = pcStack_60;
        FUN_71001b1870((long)pcStack_60);
      }
    }
    else {
      (**(code **)(*param_2 + 0x30))(param_2,uVar6);
    }
  }
  return;
}

