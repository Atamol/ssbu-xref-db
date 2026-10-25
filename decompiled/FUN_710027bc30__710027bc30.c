// addr:      710027bc30
// offset:    0x27bc30
// name:      FUN_710027bc30
// mangled:   
// signature: undefined FUN_710027bc30(void)


void FUN_710027bc30(long param_1)

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
  undefined **ppuStack_78;
  ulong uStack_70;
  undefined8 uStack_68;
  undefined1 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined4 uStack_48;
  undefined4 uStack_34;
  
  plVar9 = &DAT_71052af138;
  if (DAT_71052af1d8 != '\0') {
    puVar4 = (uint *)FUN_7101717960(DAT_71052af1d0);
    uVar2 = *puVar4;
    if (uVar2 != 0) {
      if ((ulong)(DAT_71052af1b0[1] - *DAT_71052af1b0 >> 3) <= (ulong)uVar2) goto LAB_710027bef8;
      plVar9 = (long *)(*(long *)(*DAT_71052af1b0 + (ulong)uVar2 * 8) + 0x20);
    }
  }
  lVar5 = FUN_71001cd7d0(*(long *)(*(long *)(*plVar9 + 0x10) + 0x18),*(uint *)(param_1 + 0xa0));
  if (lVar5 == 0) {
    uStack_58 = (undefined **)CONCAT44(uStack_58._4_4_,0x80010004);
    FUN_71001b4200((undefined4 *)&ppuStack_78,(undefined4 *)&uStack_58);
    pppuVar8 = &ppuStack_78;
    goto LAB_710027bed8;
  }
  if (*(int *)(param_1 + 0x10c) != 2) {
    ppuStack_78 = *(undefined ***)(param_1 + 0x150);
    uStack_70 = *(ulong *)(param_1 + 0x158);
    uStack_68 = *(undefined8 *)(param_1 + 0x160);
    uStack_58 = (undefined **)CONCAT44(uStack_58._4_4_,0x80050018);
    bVar3 = FUN_71001b4260((int *)&ppuStack_78,(int *)&uStack_58);
    if (bVar3) {
      uStack_34 = 0x80690004;
LAB_710027bd48:
      FUN_71001b4200((undefined4 *)&uStack_58,&uStack_34);
      FUN_71001b4300((undefined4 *)&ppuStack_78,(undefined4 *)&uStack_58);
    }
    else {
      uStack_58 = (undefined **)CONCAT44(uStack_58._4_4_,0x80010012);
      bVar3 = FUN_71001b4260((int *)&ppuStack_78,(int *)&uStack_58);
      if (bVar3) {
        uStack_34 = 0x80690009;
        goto LAB_710027bd48;
      }
    }
    FUN_71001b4300((undefined4 *)(param_1 + 0x388),(undefined4 *)&ppuStack_78);
  }
  if ((*(byte *)(param_1 + 0x280) >> 6 & 1) == 0) {
    plVar9 = (long *)(param_1 + 0xf8);
    FUN_71001d1590(plVar9);
    uStack_70 = uStack_70 & 0xffffffffffffff00;
    ppuStack_78 = &PTR_FUN_7104f60078;
    uStack_68 = *(undefined8 *)(param_1 + 0x300);
    pcVar11 = FUN_710170d030;
    pcVar1 = pcVar11;
    if (*(int *)(param_1 + 0x388) < 0) {
      pcVar1 = (code *)0x0;
    }
    uStack_60 = pcVar1 != (code *)0x0;
    uVar6 = (**(code **)(**(long **)(param_1 + 0xa8) + 0x40))
                      (*(long **)(param_1 + 0xa8),plVar9,&ppuStack_78);
    if ((uVar6 & 1) != 0) {
      plVar10 = &DAT_71052af138;
      if (DAT_71052af1d8 != '\0') {
        puVar4 = (uint *)FUN_7101717960(DAT_71052af1d0);
        uVar2 = *puVar4;
        if (uVar2 != 0) {
          if ((ulong)(DAT_71052af1b0[1] - *DAT_71052af1b0 >> 3) <= (ulong)uVar2) {
LAB_710027bef8:
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
        puVar7[1] = FUN_710027bf10;
      }
      FUN_71001d4200(param_1,(long)plVar9,puVar7);
      return;
    }
    if (*(int *)(param_1 + 0x388) < 0) {
      pcVar11 = (code *)0x0;
    }
    if (pcVar11 == (code *)0x0) {
      uStack_58 = *(undefined ***)(param_1 + 0x388);
      uStack_50 = *(undefined8 *)(param_1 + 0x390);
      uStack_48 = *(undefined4 *)(param_1 + 0x398);
    }
    else {
      uStack_34 = 0x8001000d;
      FUN_71001b4200((undefined4 *)&uStack_58,&uStack_34);
    }
    pppuVar8 = (undefined ***)&uStack_58;
  }
  else {
    pppuVar8 = (undefined ***)(param_1 + 0x388);
  }
LAB_710027bed8:
  FUN_710027b760(param_1,(int *)pppuVar8);
  return;
}

