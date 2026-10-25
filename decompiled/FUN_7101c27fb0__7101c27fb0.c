// addr:      7101c27fb0
// offset:    0x1c27fb0
// name:      FUN_7101c27fb0
// mangled:   
// signature: undefined FUN_7101c27fb0(void)


void FUN_7101c27fb0(long param_1,int param_2,long *********param_3,byte ****param_4,long ****param_5
                   ,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  int iVar1;
  char cVar2;
  uint uVar3;
  long *plVar4;
  long *plVar5;
  long ********pppppppplVar6;
  ulong uVar7;
  char *pcVar8;
  long *********ppppppppplVar9;
  ulong uVar10;
  long *******ppppppplVar11;
  long lVar12;
  ulong uVar13;
  int *piVar14;
  long lVar15;
  undefined **ppuStack_90;
  ulong uStack_88;
  undefined8 uStack_80;
  ulong uStack_78;
  long ********pppppppplStack_70;
  ulong uStack_68;
  
  if (param_2 < 0) {
    return;
  }
  lVar12 = *(long *)(param_1 + 0x180);
  uVar10 = (*(long *)(param_1 + 0x188) - lVar12 >> 3) * 0x2fe592fe592fe593;
  uVar13 = (ulong)param_2;
  if (uVar10 < uVar13 || uVar10 - uVar13 == 0) {
    return;
  }
  piVar14 = (int *)(lVar12 + uVar13 * 0x4d8 + 8);
  iVar1 = *piVar14;
  ppppppppplVar9 = param_3;
  plVar4 = (long *)FUN_710392e290(0x10,8,(long ****)param_3,param_4,param_5,param_6,param_7,param_8)
  ;
  if (iVar1 == 0) {
    if (plVar4 == (long *)0x0) {
      if (DAT_7105332f00 != (long *)0x0) {
        uStack_80 = (undefined **)((ulong)uStack_80._4_4_ << 0x20);
        pppppppplStack_70 = (long ********)&DAT_00000008;
        ppppppppplVar9 = &pppppppplStack_70;
        uVar10 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&uStack_80);
        if (((uVar10 & 1) != 0) &&
           (plVar4 = (long *)FUN_710392e290(0x10,8,(long ****)ppppppppplVar9,param_4,param_5,param_6
                                            ,param_7,param_8), plVar4 != (long *)0x0))
        goto LAB_7101c28134;
      }
      plVar4 = (long *)0x0;
    }
LAB_7101c28134:
    *plVar4 = 0;
    ppppppplVar11 = param_3[1][1];
    if ((ppppppplVar11 == (long *******)0x0) || (ppppppplVar11[0xc] == (long ******)0x0))
    goto LAB_7101c281bc;
    plVar5 = (long *)FUN_7103796f20((long)ppppppplVar11[0xc],(long)(ppppppplVar11[3] + 0x16));
    *plVar4 = (long)plVar5;
    if (plVar5 != (long *)0x0) {
      uVar3 = 1;
      (**(code **)(*plVar5 + 0x208))(plVar5,1);
      uVar10 = (**(code **)(*plVar5 + 0x200))(plVar5);
      if ((uVar10 & 1) != 0) {
        uVar3 = (**(code **)(*plVar5 + 0x210))(plVar5);
        uVar3 = uVar3 ^ 1;
      }
      ppppppppplVar9 = (long *********)0x0;
      (**(code **)(*plVar5 + 0x388))(plVar5,uVar3 & 1);
    }
  }
  else {
    if (plVar4 == (long *)0x0) {
      if (DAT_7105332f00 != (long *)0x0) {
        uStack_80 = (undefined **)((ulong)uStack_80._4_4_ << 0x20);
        pppppppplStack_70 = (long ********)&DAT_00000008;
        ppppppppplVar9 = &pppppppplStack_70;
        uVar10 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&uStack_80);
        if (((uVar10 & 1) != 0) &&
           (plVar4 = (long *)FUN_710392e290(0x10,8,(long ****)ppppppppplVar9,param_4,param_5,param_6
                                            ,param_7,param_8), plVar4 != (long *)0x0))
        goto LAB_7101c28074;
      }
      plVar4 = (long *)0x0;
    }
LAB_7101c28074:
    *plVar4 = 0;
    ppppppplVar11 = param_3[1][1];
    if ((ppppppplVar11 == (long *******)0x0) || (ppppppplVar11[0xc] == (long ******)0x0)) {
LAB_7101c281bc:
      *plVar4 = 0;
    }
    else {
      plVar5 = (long *)FUN_7103796f20((long)ppppppplVar11[0xc],(long)(ppppppplVar11[3] + 0x16));
      *plVar4 = (long)plVar5;
      if (plVar5 != (long *)0x0) {
        (**(code **)(*plVar5 + 0x208))(plVar5,*(undefined1 *)(lVar12 + uVar13 * 0x4d8 + 0x45c));
        uVar10 = (**(code **)(*plVar5 + 0x200))(plVar5);
        if ((uVar10 & 1) == 0) {
          uVar3 = 1;
        }
        else {
          uVar3 = (**(code **)(*plVar5 + 0x210))(plVar5);
          uVar3 = uVar3 ^ 1;
        }
        ppppppppplVar9 = (long *********)0x0;
        (**(code **)(*plVar5 + 0x388))(plVar5,uVar3 & 1);
      }
    }
  }
  FUN_710392eb40((ulong)plVar4);
  switch(*piVar14) {
  case 0:
    pppppppplVar6 = param_3[1];
    pcVar8 = "rule_new";
    break;
  case 1:
    FUN_7103776910(&pppppppplStack_70,(long)param_3,(long ****)"set_icn_preset",ppppppppplVar9,
                   param_4,param_5,param_6,param_7,param_8);
    uVar10 = FUN_71032821b0(*(long *)(*(long *)(DAT_710532f730 + 8) + 0x198),0x13b479d9f1);
    plVar4 = FUN_710323f760(*(long **)(param_1 + 0x160),uVar10,(long ****)ppppppppplVar9,param_4,
                            param_5,param_6,param_7,param_8);
    FUN_7103778b80(uStack_68,(long)plVar4,ppppppppplVar9,param_4,param_5,param_6,param_7,param_8);
    pppppppplVar6 = param_3[1];
    pcVar8 = "rule_preset";
    uVar10 = uStack_68;
    goto LAB_7101c282b4;
  case 2:
    FUN_7103776910(&pppppppplStack_70,(long)param_3,(long ****)"set_icn_etc",ppppppppplVar9,param_4,
                   param_5,param_6,param_7,param_8);
    uVar10 = FUN_71032821b0(*(long *)(*(long *)(DAT_710532f730 + 8) + 0x198),0x1520c862b7);
    plVar4 = FUN_710323f760(*(long **)(param_1 + 0x160),uVar10,(long ****)ppppppppplVar9,param_4,
                            param_5,param_6,param_7,param_8);
    FUN_7103778b80(uStack_68,(long)plVar4,ppppppppplVar9,param_4,param_5,param_6,param_7,param_8);
    pppppppplVar6 = param_3[1];
    pcVar8 = "rule_etc";
    uVar10 = uStack_68;
LAB_7101c282b4:
    FUN_7103778300(0x3f800000,(long)pppppppplVar6,(long)pcVar8);
    pppppppplStack_70 = (long ********)&PTR_FUN_710523d9a8;
    uStack_68 = 0;
    if (uVar10 != 0) {
      FUN_710392eb40(uVar10);
    }
    goto LAB_7101c282ec;
  case 3:
    pppppppplVar6 = param_3[1];
    pcVar8 = "rule_make";
    break;
  default:
    goto switchD_7101c281e4_default;
  }
  FUN_7103778300(0x3f800000,(long)pppppppplVar6,(long)pcVar8);
LAB_7101c282ec:
  FUN_7103776910(&pppppppplStack_70,(long)param_3,(long ****)"set_icn_rule",ppppppppplVar9,param_4,
                 param_5,param_6,param_7,param_8);
  FUN_7103776910(&uStack_80,(long)param_3,(long ****)"set_icn_rule_sel",ppppppppplVar9,param_4,
                 param_5,param_6,param_7,param_8);
  uVar10 = uStack_68;
  if (*piVar14 == 0) {
    uVar10 = FUN_71032821b0(*(long *)(*(long *)(DAT_710532f730 + 8) + 0x198),0x10add0d436);
    plVar4 = FUN_710323f760(*(long **)(param_1 + 0x160),uVar10,(long ****)ppppppppplVar9,param_4,
                            param_5,param_6,param_7,param_8);
    uVar10 = uStack_68;
    FUN_7103778b80(uStack_68,(long)plVar4,ppppppppplVar9,param_4,param_5,param_6,param_7,param_8);
    uVar13 = FUN_71032821b0(*(long *)(*(long *)(DAT_710532f730 + 8) + 0x198),0x10add0d436);
    plVar4 = FUN_710323f760(*(long **)(param_1 + 0x160),uVar13,(long ****)ppppppppplVar9,param_4,
                            param_5,param_6,param_7,param_8);
    FUN_7103778b80(uStack_78,(long)plVar4,ppppppppplVar9,param_4,param_5,param_6,param_7,param_8);
    uVar13 = uStack_78;
  }
  else {
    lVar15 = lVar12 + uVar13 * 0x4d8;
    cVar2 = *(char *)(lVar15 + 0x4a1);
    if (cVar2 == '\0') {
      uVar10 = FUN_71032821b0(*(long *)(*(long *)(DAT_710532f730 + 8) + 0x198),0x11a65e8b53);
      plVar4 = FUN_710323f760(*(long **)(param_1 + 0x160),uVar10,(long ****)ppppppppplVar9,param_4,
                              param_5,param_6,param_7,param_8);
      uVar10 = uStack_68;
      FUN_7103778b80(uStack_68,(long)plVar4,ppppppppplVar9,param_4,param_5,param_6,param_7,param_8);
      uVar7 = FUN_71032821b0(*(long *)(*(long *)(DAT_710532f730 + 8) + 0x198),0x11a65e8b53);
      plVar4 = FUN_710323f760(*(long **)(param_1 + 0x160),uVar7,(long ****)ppppppppplVar9,param_4,
                              param_5,param_6,param_7,param_8);
      FUN_7103778b80(uStack_78,(long)plVar4,ppppppppplVar9,param_4,param_5,param_6,param_7,param_8);
      pppppppplVar6 = param_3[1];
      pcVar8 = "rule_time";
LAB_7101c28520:
      FUN_7103778300(0x3f800000,(long)pppppppplVar6,(long)pcVar8);
    }
    else {
      if (cVar2 == '\x01') {
        uVar10 = FUN_71032821b0(*(long *)(*(long *)(DAT_710532f730 + 8) + 0x198),0x12bf2b2922);
        plVar4 = FUN_710323f760(*(long **)(param_1 + 0x160),uVar10,(long ****)ppppppppplVar9,param_4
                                ,param_5,param_6,param_7,param_8);
        uVar10 = uStack_68;
        FUN_7103778b80(uStack_68,(long)plVar4,ppppppppplVar9,param_4,param_5,param_6,param_7,param_8
                      );
        uVar7 = FUN_71032821b0(*(long *)(*(long *)(DAT_710532f730 + 8) + 0x198),0x12bf2b2922);
        plVar4 = FUN_710323f760(*(long **)(param_1 + 0x160),uVar7,(long ****)ppppppppplVar9,param_4,
                                param_5,param_6,param_7,param_8);
        FUN_7103778b80(uStack_78,(long)plVar4,ppppppppplVar9,param_4,param_5,param_6,param_7,param_8
                      );
        pppppppplVar6 = param_3[1];
        pcVar8 = "rule_stock";
        goto LAB_7101c28520;
      }
      if (cVar2 == '\x02') {
        uVar10 = FUN_71032821b0(*(long *)(*(long *)(DAT_710532f730 + 8) + 0x198),0xf83b14356);
        plVar4 = FUN_710323f760(*(long **)(param_1 + 0x160),uVar10,(long ****)ppppppppplVar9,param_4
                                ,param_5,param_6,param_7,param_8);
        uVar10 = uStack_68;
        FUN_7103778b80(uStack_68,(long)plVar4,ppppppppplVar9,param_4,param_5,param_6,param_7,param_8
                      );
        uVar7 = FUN_71032821b0(*(long *)(*(long *)(DAT_710532f730 + 8) + 0x198),0xf83b14356);
        plVar4 = FUN_710323f760(*(long **)(param_1 + 0x160),uVar7,(long ****)ppppppppplVar9,param_4,
                                param_5,param_6,param_7,param_8);
        FUN_7103778b80(uStack_78,(long)plVar4,ppppppppplVar9,param_4,param_5,param_6,param_7,param_8
                      );
        pppppppplVar6 = param_3[1];
        pcVar8 = "rule_stamina";
        goto LAB_7101c28520;
      }
      FUN_71037790a0(uStack_68,1,ppppppppplVar9,param_4,param_5,param_6,param_7,param_8);
    }
    if (*(char *)(param_1 + 0x719) != '\0') {
      cVar2 = *(char *)(lVar15 + 0x4a0);
      if (cVar2 == '\x01') {
        FUN_7103778300(0x3f800000,(long)param_3[1],0x71043cf400);
        pppppppplVar6 = param_3[1];
        pcVar8 = "rule_icon_compe";
      }
      else if (cVar2 == '\x02') {
        FUN_7103778300(0x3f800000,(long)param_3[1],0x71043cf400);
        pppppppplVar6 = param_3[1];
        pcVar8 = "rule_icon_tourn";
      }
      else {
        pppppppplVar6 = param_3[1];
        pcVar8 = "rule_icon_off";
      }
      FUN_7103778300(0x3f800000,(long)pppppppplVar6,(long)pcVar8);
    }
    FUN_7103776910(&ppuStack_90,(long)param_3,(long ****)"set_txt_title",ppppppppplVar9,param_4,
                   param_5,param_6,param_7,param_8);
    if (*(int *)(lVar12 + uVar13 * 0x4d8 + 0x46c) == 0) {
      pcVar8 = (char *)(lVar12 + uVar13 * 0x4d8 + 0x14);
      if (*pcVar8 == '\0') {
        lVar12 = lVar12 + uVar13 * 0x4d8;
        FUN_7101c0a210((long)&ppuStack_90,*(char *)(lVar15 + 0x4a0),*(char *)(lVar15 + 0x4a1),
                       *(short *)(lVar12 + 0x4a4),(ulong)*(byte *)(lVar12 + 0x4a6),
                       (ulong)*(byte *)(lVar12 + 0x4a7),*(char *)(lVar12 + 0x4a2));
      }
      else {
        FUN_710377a120((long)&ppuStack_90,pcVar8,ppppppppplVar9,param_4,param_5,param_6,param_7,
                       param_8);
      }
    }
    else if (*(long **)(uStack_88 + 0x10) != (long *)0x0) {
      FUN_71037a2270(*(long **)(uStack_88 + 0x10),(ushort *)(lVar12 + uVar13 * 0x4d8 + 0x470),
                     0xffffffff,1);
    }
    uVar7 = uStack_88;
    ppuStack_90 = &PTR_FUN_710523d9a8;
    uStack_88 = 0;
    uVar13 = uStack_78;
    if (uVar7 != 0) {
      FUN_710392eb40(uVar7);
      uVar13 = uStack_78;
    }
  }
  uStack_80 = &PTR_FUN_710523d9a8;
  uStack_78 = 0;
  if (uVar13 != 0) {
    FUN_710392eb40(uVar13);
  }
  pppppppplStack_70 = (long ********)&PTR_FUN_710523d9a8;
  uStack_68 = 0;
  if (uVar10 != 0) {
    FUN_710392eb40(uVar10);
  }
switchD_7101c281e4_default:
  return;
}

