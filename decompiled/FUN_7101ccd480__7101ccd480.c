// addr:      7101ccd480
// offset:    0x1ccd480
// name:      FUN_7101ccd480
// mangled:   
// signature: undefined __cdecl FUN_7101ccd480(long param_1, undefined8 param_2, undefined8 param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_7101ccd480(long param_1,undefined8 param_2,undefined8 param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  uint uVar1;
  ulong *puVar2;
  bool bVar3;
  long lVar4;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 extraout_x1_02;
  undefined8 extraout_x1_03;
  undefined8 uVar5;
  long *********ppppppppplVar6;
  ulong uVar7;
  uint uVar8;
  ulong uVar9;
  long lVar10;
  long *plVar11;
  long lVar12;
  undefined1 *puVar13;
  long lVar14;
  undefined **local_70;
  ulong local_68;
  
  if (*(int *)(param_1 + 0xdc) == 0) {
    ppppppppplVar6 = (long *********)0x33000;
    FUN_7103775dc0((long *)**(undefined8 **)(param_1 + 0xf0),1,(long ****)0x33000,param_4,param_5,
                   param_6,param_7,param_8);
    lVar4 = **(long **)(param_1 + 0xf0) + 8;
    lVar12 = *(long *)(param_1 + 0x110);
    uVar5 = extraout_x1;
    if (*(long *)(param_1 + 0x118) != lVar12) {
      lVar14 = 0;
      uVar9 = 0;
      do {
        FUN_7103776910(&local_70,lVar4,(long ****)"set_rep_stockicon_%02d",uVar9 & 0xffffffff,
                       param_4,param_5,param_6,param_7,param_8);
        puVar13 = *(undefined1 **)(lVar12 + lVar14 + 8);
        lVar10 = *(long *)(DAT_710532f730 + 8);
        plVar11 = *(long **)(param_1 + 0xe8);
        bVar3 = FUN_71032648e0(lVar10 + 0x160,(ulong)puVar13);
        if (bVar3) {
          puVar13 = FUN_71032631a0(*(long *)(lVar10 + 0x168),0x143829f67e);
        }
        ppppppppplVar6 = (long *********)(ulong)*(uint *)(lVar12 + lVar14 + 0x10);
        param_4 = (byte ****)0x2;
        plVar11 = FUN_710323f330(plVar11,(ulong)puVar13,(ulong)ppppppppplVar6,2,param_5,param_6,
                                 param_7,param_8);
        uVar7 = local_68;
        FUN_7103778b80(local_68,(long)plVar11,ppppppppplVar6,param_4,param_5,param_6,param_7,param_8
                      );
        local_70 = &PTR_FUN_710523d9a8;
        local_68 = 0;
        uVar5 = extraout_x1_00;
        if (uVar7 != 0) {
          FUN_710392eb40(uVar7);
          uVar5 = extraout_x1_01;
        }
        lVar12 = *(long *)(param_1 + 0x110);
        uVar7 = (*(long *)(param_1 + 0x118) - lVar12 >> 3) * -0x5555555555555555;
        uVar9 = uVar9 + 1;
        lVar14 = lVar14 + 0x18;
      } while (uVar9 <= uVar7 && uVar7 - uVar9 != 0);
    }
    puVar2 = *(ulong **)(param_1 + 0x128);
    if (puVar2 != *(ulong **)(param_1 + 0x130)) {
      FUN_7103776910(&local_70,lVar4,(long ****)"set_rep_pic_stage_l",ppppppppplVar6,param_4,param_5
                     ,param_6,param_7,param_8);
      uVar8 = 0x10;
      if ((int)puVar2[1] != 1) {
        uVar8 = 0xe;
      }
      uVar1 = 0xf;
      if ((int)puVar2[1] != 2) {
        uVar1 = uVar8;
      }
      ppppppppplVar6 = (long *********)(ulong)uVar1;
      plVar11 = FUN_710323f4a0(*(long **)(param_1 + 0xe8),*puVar2,(long ****)ppppppppplVar6,param_4,
                               param_5,param_6,param_7,param_8);
      uVar9 = local_68;
      FUN_7103778b80(local_68,(long)plVar11,ppppppppplVar6,param_4,param_5,param_6,param_7,param_8);
      local_70 = &PTR_FUN_710523d9a8;
      local_68 = 0;
      uVar5 = extraout_x1_02;
      if (uVar9 != 0) {
        FUN_710392eb40(uVar9);
        uVar5 = extraout_x1_03;
      }
    }
    FUN_710323b9e0(**(long **)(param_1 + 0xe8),uVar5,ppppppppplVar6,param_4,param_5,param_6,param_7,
                   param_8);
    *(undefined8 *)(param_1 + 0x118) = *(undefined8 *)(param_1 + 0x110);
    *(undefined8 *)(param_1 + 0x130) = *(undefined8 *)(param_1 + 0x128);
  }
  lVar4 = *(long *)(*(long *)(**(long **)(param_1 + 0x100) + 0x10) + 8);
  if ((((lVar4 == 0) ||
       (plVar11 = (long *)FUN_71037964b0(lVar4,0x710428ff7d), plVar11 == (long *)0x0)) ||
      (uVar9 = (**(code **)(*plVar11 + 0x138))(), (uVar9 & 1) != 0)) &&
     (4 < *(int *)(param_1 + 0xdc))) {
    plVar11 = *(long **)*DAT_710593b8d8;
    do {
      if (plVar11 == (long *)((long *)*DAT_710593b8d8)[1]) {
        if (*(uint *)(param_1 + 0xd4) < 0x13) {
          lVar4 = param_1 + (long)(int)*(uint *)(param_1 + 0xd4) * 4;
          *(int *)(lVar4 + 0x88) = *(int *)(lVar4 + 0x88) + 1;
          return;
        }
                    /* WARNING: Subroutine does not return */
        abort();
      }
      lVar4 = *plVar11;
      plVar11 = plVar11 + 1;
    } while (*(char *)(*(long *)(lVar4 + 8) + 0x518) == '\0');
  }
  return;
}

