// addr:      7100281df0
// offset:    0x281df0
// name:      FUN_7100281df0
// mangled:   
// signature: undefined FUN_7100281df0(void)


void FUN_7100281df0(long param_1)

{
  code *pcVar1;
  uint uVar2;
  bool bVar3;
  uint *puVar4;
  long lVar5;
  ulong uVar6;
  undefined8 *puVar7;
  undefined ***pppuVar8;
  long *plVar9;
  long *plVar10;
  code *pcVar11;
  undefined **ppuStack_80;
  ulong uStack_78;
  undefined8 uStack_70;
  undefined1 uStack_68;
  undefined4 uStack_5c;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined4 uStack_48;
  
  pppuVar8 = &ppuStack_80;
  plVar9 = &DAT_71052af138;
  if (DAT_71052af1d8 != '\0') {
    puVar4 = (uint *)FUN_7101717960(DAT_71052af1d0);
    uVar2 = *puVar4;
    if (uVar2 != 0) {
      if ((ulong)(DAT_71052af1b0[1] - *DAT_71052af1b0 >> 3) <= (ulong)uVar2) goto LAB_71002820c4;
      plVar9 = (long *)(*(long *)(*DAT_71052af1b0 + (ulong)uVar2 * 8) + 0x20);
    }
  }
  lVar5 = FUN_71001cd7d0(*(long *)(*(long *)(*plVar9 + 0x10) + 0x18),*(uint *)(param_1 + 0xa0));
  if (lVar5 == 0) {
    uStack_58 = CONCAT44(uStack_58._4_4_,0x80010004);
    FUN_71001b4200((undefined4 *)&ppuStack_80,(undefined4 *)&uStack_58);
    goto LAB_71002820a4;
  }
  if (*(int *)(param_1 + 0x10c) != 2) {
    ppuStack_80 = *(undefined ***)(param_1 + 0x150);
    uStack_78 = *(ulong *)(param_1 + 0x158);
    uStack_70 = *(undefined8 *)(param_1 + 0x160);
    uStack_58 = CONCAT44(uStack_58._4_4_,0x80050018);
    bVar3 = FUN_71001b4260((int *)&ppuStack_80,(int *)&uStack_58);
    if (bVar3) {
      uStack_5c = 0x80690004;
LAB_7100281f08:
      FUN_71001b4200((undefined4 *)&uStack_58,&uStack_5c);
      FUN_71001b4300((undefined4 *)&ppuStack_80,(undefined4 *)&uStack_58);
    }
    else {
      uStack_58 = CONCAT44(uStack_58._4_4_,0x80010012);
      bVar3 = FUN_71001b4260((int *)&ppuStack_80,(int *)&uStack_58);
      if (bVar3) {
        uStack_5c = 0x80690009;
        goto LAB_7100281f08;
      }
    }
    FUN_71001b4300((undefined4 *)(param_1 + 1000),(undefined4 *)&ppuStack_80);
  }
  if ((*(byte *)(param_1 + 0x280) >> 6 & 1) == 0) {
    plVar9 = (long *)(param_1 + 0xf8);
    FUN_71001d1590(plVar9);
    uStack_78 = uStack_78 & 0xffffffffffffff00;
    ppuStack_80 = &PTR_FUN_7104f60078;
    uStack_70 = *(undefined8 *)(param_1 + 0x360);
    pcVar11 = FUN_710170d030;
    pcVar1 = pcVar11;
    if (*(int *)(param_1 + 1000) < 0) {
      pcVar1 = (code *)0x0;
    }
    uStack_68 = pcVar1 != (code *)0x0;
    uVar6 = (**(code **)(**(long **)(param_1 + 0xa8) + 0x160))
                      (*(long **)(param_1 + 0xa8),plVar9,param_1 + 0x1b8,&ppuStack_80,
                       param_1 + 0x2e8);
    if ((uVar6 & 1) != 0) {
      plVar10 = &DAT_71052af138;
      if (DAT_71052af1d8 != '\0') {
        puVar4 = (uint *)FUN_7101717960(DAT_71052af1d0);
        uVar2 = *puVar4;
        if (uVar2 != 0) {
          if ((ulong)(DAT_71052af1b0[1] - *DAT_71052af1b0 >> 3) <= (ulong)uVar2) {
LAB_71002820c4:
            FUN_71001b1300("..\\..\\..\\..\\.\\OnlineCore/src/Core/InstanceTable.h",0x47,0xe0000003,
                           0);
            return;
          }
          plVar10 = (long *)(*(long *)(*DAT_71052af1b0 + (ulong)uVar2 * 8) + 0x20);
        }
      }
      FUN_71001d3780(*(long *)(*(long *)(*plVar10 + 0x10) + 0x18),*(uint *)(param_1 + 0xa0),
                     *(undefined4 *)(param_1 + 0x110));
      FUN_71001d6410(param_1,2);
      puVar7 = FUN_71001af850(0x20);
      if (puVar7 != (undefined8 *)0x0) {
        puVar7[2] = 0;
        puVar7[3] = &DAT_71044114cc;
        *puVar7 = &PTR_FUN_7104f56e28;
        puVar7[1] = FUN_71002820e0;
      }
      FUN_71001d4200(param_1,(long)plVar9,puVar7);
      return;
    }
    if (*(int *)(param_1 + 1000) < 0) {
      pcVar11 = (code *)0x0;
    }
    if (pcVar11 == (code *)0x0) {
      uStack_5c = 0x8001000d;
      FUN_71001b4200((undefined4 *)&uStack_58,&uStack_5c);
    }
    else {
      uStack_58 = *(undefined8 *)(param_1 + 1000);
      uStack_50 = *(undefined8 *)(param_1 + 0x3f0);
      uStack_48 = *(undefined4 *)(param_1 + 0x3f8);
    }
    pppuVar8 = (undefined ***)&uStack_58;
  }
  else {
    pppuVar8 = (undefined ***)(param_1 + 1000);
  }
LAB_71002820a4:
  FUN_7100281930(param_1,(int *)pppuVar8);
  return;
}

