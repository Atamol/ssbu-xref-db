// addr:      710027aaf0
// offset:    0x27aaf0
// name:      FUN_710027aaf0
// mangled:   
// signature: undefined FUN_710027aaf0(void)


void FUN_710027aaf0(long param_1)

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
  undefined **ppuStack_70;
  undefined8 uStack_68;
  undefined4 uStack_60;
  undefined **ppuStack_58;
  ulong uStack_50;
  undefined8 uStack_48;
  undefined4 uStack_34;
  
  pppuVar8 = &ppuStack_70;
  plVar9 = &DAT_71052af138;
  if (DAT_71052af1d8 != '\0') {
    puVar4 = (uint *)FUN_7101717960(DAT_71052af1d0);
    uVar2 = *puVar4;
    if (uVar2 != 0) {
      if ((ulong)(DAT_71052af1b0[1] - *DAT_71052af1b0 >> 3) <= (ulong)uVar2) goto LAB_710027adb8;
      plVar9 = (long *)(*(long *)(*DAT_71052af1b0 + (ulong)uVar2 * 8) + 0x20);
    }
  }
  lVar5 = FUN_71001cd7d0(*(long *)(*(long *)(*plVar9 + 0x10) + 0x18),*(uint *)(param_1 + 0xa0));
  if (lVar5 == 0) {
    ppuStack_70 = (undefined **)CONCAT44(ppuStack_70._4_4_,0x80010004);
    FUN_71001b4200((undefined4 *)&ppuStack_58,(undefined4 *)&ppuStack_70);
    pppuVar8 = &ppuStack_58;
    goto LAB_710027ad98;
  }
  if (*(int *)(param_1 + 0x10c) != 2) {
    ppuStack_58 = *(undefined ***)(param_1 + 0x150);
    uStack_50 = *(ulong *)(param_1 + 0x158);
    uStack_48 = *(undefined8 *)(param_1 + 0x160);
    ppuStack_70 = (undefined **)CONCAT44(ppuStack_70._4_4_,0x80050018);
    bVar3 = FUN_71001b4260((int *)&ppuStack_58,(int *)&ppuStack_70);
    if (bVar3) {
      uStack_34 = 0x80690004;
LAB_710027ac08:
      FUN_71001b4200((undefined4 *)&ppuStack_70,&uStack_34);
      FUN_71001b4300((undefined4 *)&ppuStack_58,(undefined4 *)&ppuStack_70);
    }
    else {
      ppuStack_70 = (undefined **)CONCAT44(ppuStack_70._4_4_,0x80010012);
      bVar3 = FUN_71001b4260((int *)&ppuStack_58,(int *)&ppuStack_70);
      if (bVar3) {
        uStack_34 = 0x80690009;
        goto LAB_710027ac08;
      }
    }
    FUN_71001b4300((undefined4 *)(param_1 + 0x358),(undefined4 *)&ppuStack_58);
  }
  if ((*(byte *)(param_1 + 0x280) >> 6 & 1) == 0) {
    plVar9 = (long *)(param_1 + 0xf8);
    FUN_71001d1590(plVar9);
    ppuStack_58 = &PTR_FUN_7104f5ff98;
    uStack_50 = CONCAT44(*(undefined4 *)(param_1 + 0x2d4),(int)uStack_50) & 0xffffffffffffff00;
    pcVar11 = FUN_710170d030;
    pcVar1 = pcVar11;
    if (*(int *)(param_1 + 0x358) < 0) {
      pcVar1 = (code *)0x0;
    }
    uStack_48 = CONCAT71(uStack_48._1_7_,pcVar1 != (code *)0x0);
    uVar6 = (**(code **)(**(long **)(param_1 + 0xa8) + 0x48))
                      (*(long **)(param_1 + 0xa8),plVar9,&ppuStack_58);
    if ((uVar6 & 1) != 0) {
      plVar10 = &DAT_71052af138;
      if (DAT_71052af1d8 != '\0') {
        puVar4 = (uint *)FUN_7101717960(DAT_71052af1d0);
        uVar2 = *puVar4;
        if (uVar2 != 0) {
          if ((ulong)(DAT_71052af1b0[1] - *DAT_71052af1b0 >> 3) <= (ulong)uVar2) {
LAB_710027adb8:
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
        puVar7[1] = FUN_710027add0;
      }
      FUN_71001d4200(param_1,(long)plVar9,puVar7);
      return;
    }
    if (*(int *)(param_1 + 0x358) < 0) {
      pcVar11 = (code *)0x0;
    }
    if (pcVar11 == (code *)0x0) {
      ppuStack_70 = *(undefined ***)(param_1 + 0x358);
      uStack_68 = *(undefined8 *)(param_1 + 0x360);
      uStack_60 = *(undefined4 *)(param_1 + 0x368);
    }
    else {
      uStack_34 = 0x8001000d;
      FUN_71001b4200((undefined4 *)&ppuStack_70,&uStack_34);
      pppuVar8 = &ppuStack_70;
    }
  }
  else {
    pppuVar8 = (undefined ***)(param_1 + 0x358);
  }
LAB_710027ad98:
  FUN_710027a620(param_1,(int *)pppuVar8);
  return;
}

