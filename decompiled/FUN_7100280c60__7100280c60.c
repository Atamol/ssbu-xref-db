// addr:      7100280c60
// offset:    0x280c60
// name:      FUN_7100280c60
// mangled:   
// signature: undefined FUN_7100280c60(void)


void FUN_7100280c60(long param_1)

{
  uint uVar1;
  uint *puVar2;
  long lVar3;
  ulong uVar4;
  undefined8 *puVar5;
  undefined ***pppuVar6;
  code *pcVar7;
  long *plVar8;
  long *plVar9;
  undefined4 uStack_6c;
  int aiStack_68 [6];
  undefined **ppuStack_50;
  ulong uStack_48;
  undefined8 uStack_40;
  undefined4 uStack_38;
  undefined1 uStack_34;
  
  plVar8 = &DAT_71052af138;
  if (DAT_71052af1d8 != '\0') {
    puVar2 = (uint *)FUN_7101717960(DAT_71052af1d0);
    uVar1 = *puVar2;
    if (uVar1 != 0) {
      if ((ulong)(DAT_71052af1b0[1] - *DAT_71052af1b0 >> 3) <= (ulong)uVar1) goto LAB_7100280e80;
      plVar8 = (long *)(*(long *)(*DAT_71052af1b0 + (ulong)uVar1 * 8) + 0x20);
    }
  }
  lVar3 = FUN_71001cd7d0(*(long *)(*(long *)(*plVar8 + 0x10) + 0x18),*(uint *)(param_1 + 0xa0));
  if (lVar3 == 0) {
    aiStack_68[0] = -0x7ffefffc;
    FUN_71001b4200((undefined4 *)&ppuStack_50,aiStack_68);
    pppuVar6 = &ppuStack_50;
  }
  else {
    plVar8 = (long *)(param_1 + 0xf8);
    if (*(int *)(param_1 + 0x10c) != 2) {
      ppuStack_50 = *(undefined ***)(param_1 + 0x150);
      uStack_48 = *(ulong *)(param_1 + 0x158);
      uStack_40 = *(undefined8 *)(param_1 + 0x160);
      FUN_71001b4300((undefined4 *)(param_1 + 0x288),(undefined4 *)&ppuStack_50);
    }
    FUN_71001d1590(plVar8);
    uStack_48 = uStack_48 & 0xffffffffffffff00;
    ppuStack_50 = &PTR_FUN_7104f60378;
    uStack_38 = *(undefined4 *)(param_1 + 0x204);
    uStack_40 = *(undefined8 *)(param_1 + 0x1c8);
    pcVar7 = FUN_710170d030;
    if (*(int *)(param_1 + 0x288) < 0) {
      pcVar7 = (code *)0x0;
    }
    uStack_34 = pcVar7 != (code *)0x0;
    uVar4 = (**(code **)(**(long **)(param_1 + 0xa8) + 0x60))
                      (*(long **)(param_1 + 0xa8),plVar8,&ppuStack_50);
    if ((uVar4 & 1) != 0) {
      plVar9 = &DAT_71052af138;
      if (DAT_71052af1d8 != '\0') {
        puVar2 = (uint *)FUN_7101717960(DAT_71052af1d0);
        uVar1 = *puVar2;
        if (uVar1 != 0) {
          if ((ulong)(DAT_71052af1b0[1] - *DAT_71052af1b0 >> 3) <= (ulong)uVar1) {
LAB_7100280e80:
            FUN_71001b1300("..\\..\\..\\..\\.\\OnlineCore/src/Core/InstanceTable.h",0x47,0xe0000003,
                           0);
            return;
          }
          plVar9 = (long *)(*(long *)(*DAT_71052af1b0 + (ulong)uVar1 * 8) + 0x20);
        }
      }
      FUN_71001d3780(*(long *)(*(long *)(*plVar9 + 0x10) + 0x18),*(uint *)(param_1 + 0xa0),
                     *(undefined4 *)(param_1 + 0x110));
      FUN_71001d6410(param_1,2);
      puVar5 = FUN_71001af850(0x20);
      if (puVar5 != (undefined8 *)0x0) {
        puVar5[2] = 0;
        puVar5[3] = &DAT_71044114cc;
        *puVar5 = &PTR_FUN_7104f56e28;
        puVar5[1] = FUN_7100280ea0;
      }
      FUN_71001d4200(param_1,(long)plVar8,puVar5);
      return;
    }
    uStack_6c = 0x8001000d;
    FUN_71001b4200(aiStack_68,&uStack_6c);
    pppuVar6 = (undefined ***)aiStack_68;
  }
  FUN_71002807a0(param_1,(int *)pppuVar6);
  return;
}

