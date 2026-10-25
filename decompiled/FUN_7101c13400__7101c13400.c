// addr:      7101c13400
// offset:    0x1c13400
// name:      FUN_7101c13400
// mangled:   
// signature: undefined __cdecl FUN_7101c13400(long param_1, int param_2, long * * * * * * * * * param_3, byte * * * * param_4, long * * * * param_5, ulong param_6, undefined8 param_7, undefined8 param_8)


void FUN_7101c13400(long param_1,int param_2,long *********param_3,byte ****param_4,long ****param_5
                   ,ulong param_6,undefined8 param_7,undefined8 param_8)

{
  byte bVar1;
  char cVar2;
  byte bVar3;
  uint uVar4;
  int iVar5;
  long *plVar6;
  ulong uVar7;
  long lVar8;
  long *plVar9;
  undefined8 uVar10;
  bool bVar11;
  char *pcVar12;
  undefined **ppuVar13;
  long *******ppppppplVar14;
  byte *pbVar15;
  long lVar16;
  byte *pbVar17;
  byte *pbVar18;
  byte *pbVar19;
  byte *pbVar20;
  uint uVar21;
  long ********pppppppplVar22;
  long *plVar23;
  long *********ppppppppplVar24;
  uint uVar25;
  uint uVar26;
  byte ****ppppbVar27;
  uint uVar28;
  undefined **local_e8;
  ulong local_e0;
  undefined **local_d8;
  long *local_d0;
  undefined **local_c8;
  ulong local_c0;
  undefined **local_b8;
  ulong local_b0;
  long ********local_a8;
  ulong local_a0 [8];
  
  if (param_2 < 0) {
    return;
  }
  if ((ulong)(*(long *)(param_1 + 0x648) - *(long *)(param_1 + 0x640)) <= (ulong)(long)param_2) {
    return;
  }
  bVar3 = *(byte *)(*(long *)(param_1 + 0x640) + (long)param_2);
  ppuVar13 = (undefined **)param_3;
  plVar6 = (long *)FUN_710392e290(0x10,8,(long ****)param_3,param_4,param_5,param_6,param_7,param_8)
  ;
  if (plVar6 == (long *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_b8 = (undefined **)((ulong)local_b8 & 0xffffffff00000000);
      local_a8 = (long ********)&DAT_00000008;
      ppuVar13 = (undefined **)&local_a8;
      uVar7 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_b8);
      if (((uVar7 & 1) != 0) &&
         (plVar6 = (long *)FUN_710392e290(0x10,8,(long ****)ppuVar13,param_4,param_5,param_6,param_7
                                          ,param_8), plVar6 != (long *)0x0)) goto LAB_7101c134a4;
    }
    plVar6 = (long *)0x0;
  }
LAB_7101c134a4:
  *plVar6 = 0;
  pppppppplVar22 = param_3[1];
  ppppppplVar14 = pppppppplVar22[1];
  if (ppppppplVar14 == (long *******)0x0) {
    lVar8 = 0;
  }
  else {
    lVar8 = 0;
    if (ppppppplVar14[0xc] != (long ******)0x0) {
      lVar8 = FUN_7103796f20((long)ppppppplVar14[0xc],(long)(ppppppplVar14[3] + 0x16));
    }
  }
  *plVar6 = lVar8;
  pbVar17 = *(byte **)(param_1 + 0x640);
  pbVar15 = *(byte **)(param_1 + 0x648);
  pbVar19 = pbVar17;
  if (pbVar17 != pbVar15) {
    bVar1 = *pbVar17;
    while (bVar1 != 0x1a) {
      pbVar19 = pbVar19 + 1;
      if (pbVar15 == pbVar19) goto LAB_7101c1351c;
      bVar1 = *pbVar19;
    }
  }
  if (pbVar15 == pbVar19) {
LAB_7101c1351c:
    uVar25 = 1;
  }
  else {
    pbVar18 = pbVar17;
    if (pbVar17 != pbVar15) {
      bVar1 = *pbVar17;
      pbVar20 = pbVar17;
      while ((pbVar18 = pbVar20, bVar1 != bVar3 &&
             (pbVar20 = pbVar20 + 1, pbVar18 = pbVar15, pbVar15 != pbVar20))) {
        bVar1 = *pbVar20;
      }
    }
    uVar25 = (uint)((ulong)((long)pbVar19 - (long)pbVar18) >> 0x3f) ^ 1;
  }
  uVar4 = (uint)bVar3;
  uVar21 = (uint)bVar3;
  if (uVar4 - 0x19 < 2) {
    uVar26 = 1;
LAB_7101c1361c:
    if ((0xf050001U >> (ulong)(uVar21 - 3 & 0x1f) & 1) == 0) goto LAB_7101c1362c;
    pcVar12 = "rule_icon_on";
  }
  else {
    pbVar19 = pbVar17;
    if (pbVar17 != pbVar15) {
      bVar1 = *pbVar17;
      while (bVar1 != 0x1a) {
        pbVar19 = pbVar19 + 1;
        if (pbVar15 == pbVar19) goto LAB_7101c135c8;
        bVar1 = *pbVar19;
      }
    }
    if (pbVar15 == pbVar19) {
LAB_7101c135c8:
      uVar26 = 0;
    }
    else {
      pbVar18 = pbVar17;
      if ((pbVar17 != pbVar15) && (*pbVar17 != uVar4)) {
        do {
          pbVar17 = pbVar17 + 1;
          pbVar18 = pbVar15;
          if (pbVar15 == pbVar17) break;
          pbVar18 = pbVar17;
        } while (*pbVar17 != uVar21);
      }
      uVar26 = (uint)((ulong)((long)pbVar19 - (long)pbVar18) >> 0x3f);
    }
    if (uVar21 - 3 < 0x1c) goto LAB_7101c1361c;
LAB_7101c1362c:
    pcVar12 = "rule_icon_off";
  }
  FUN_7103778300(0x3f800000,(long)pppppppplVar22,(long)pcVar12);
  if (uVar25 == 0) {
    pppppppplVar22 = param_3[1];
    pcVar12 = "indent_on";
  }
  else {
    local_a0[0] = local_a0[0] & 0xffffffffffffff00;
    local_a8 = (long ********)0x0;
    if (uVar26 == 0) {
      cVar2 = *(char *)(param_1 + 0x659);
      if (cVar2 == '\x02') {
        pcVar12 = "rule_stamina";
        goto LAB_7101c13664;
      }
      if (cVar2 == '\x01') {
        pcVar12 = "rule_stock";
        goto LAB_7101c13664;
      }
      if (cVar2 == '\0') {
        pcVar12 = "rule_time";
        goto LAB_7101c13664;
      }
    }
    else {
      pcVar12 = "rule_detail";
LAB_7101c13664:
      FUN_710062dc20((uint *)&local_a8,pcVar12);
    }
    pppppppplVar22 = param_3[1];
    pcVar12 = (char *)local_a0;
  }
  FUN_7103778300(0x3f800000,(long)pppppppplVar22,(long)pcVar12);
  uVar25 = (uint)bVar3;
  if ((uVar21 < 0x1b) && ((1 << (ulong)(uVar4 & 0x1f) & 0x6003000U) != 0)) {
    FUN_7103778300(0x3f800000,(long)param_3[1],0x71042e707e);
    plVar23 = (long *)*plVar6;
    if (plVar23 != (long *)0x0) {
      uVar4 = 1;
      (**(code **)(*plVar23 + 0x208))(plVar23,1);
      uVar7 = (**(code **)(*plVar23 + 0x200))(plVar23);
      if ((uVar7 & 1) != 0) {
        uVar4 = (**(code **)(*plVar23 + 0x210))(plVar23);
        uVar4 = uVar4 ^ 1;
      }
      ppuVar13 = (undefined **)0x0;
      (**(code **)(*plVar23 + 0x388))(plVar23,uVar4 & 1);
    }
  }
  else {
    FUN_7103778300(0x3f800000,(long)param_3[1],0x71042e708a);
    uVar7 = (ulong)uVar25;
    uVar4 = FUN_7101c043c0(param_1 + 0x658,param_1 + 0x690,bVar3);
    cVar2 = *(char *)(param_1 + 0x658);
    ppppppppplVar24 = (long *********)(ulong)uVar4;
    ppppbVar27 = (byte ****)(ulong)(cVar2 == '\x01');
    FUN_7103776910(&local_a8,(long)param_3,(long ****)"set_txt_rule_00",uVar7,param_4,param_5,
                   param_6,param_7,param_8);
    ppuVar13 = (undefined **)ppppppppplVar24;
    FUN_7101c09380((long)&local_a8,bVar3,(ulong)ppppppppplVar24,(ulong)ppppbVar27,param_5,param_6,
                   param_7,param_8);
    param_4 = ppppbVar27;
    if (uVar26 != 0) {
      param_4 = (byte ****)(ulong)(cVar2 == '\x01');
      FUN_7103776910(&local_b8,(long)param_3,(long ****)"set_txt_rule_01",ppuVar13,ppppbVar27,
                     param_5,param_6,param_7,param_8);
      FUN_7101c09380((long)&local_b8,bVar3,(ulong)ppppppppplVar24,(ulong)param_4,param_5,param_6,
                     param_7,param_8);
      uVar7 = local_b0;
      local_b8 = &PTR_FUN_710523d9a8;
      local_b0 = 0;
      ppuVar13 = (undefined **)ppppppppplVar24;
      if (uVar7 != 0) {
        FUN_710392eb40(uVar7);
        ppuVar13 = (undefined **)ppppppppplVar24;
      }
    }
    if ((uVar21 & 0xfe) == 0xc) {
LAB_7101c13a18:
      uVar4 = FUN_7101c045a0(bVar3);
      if ((int)uVar4 < 2) goto LAB_7101c13af0;
      uVar26 = 0;
      uVar28 = 0;
      do {
        if (((DAT_71053144d8 & 1) == 0) &&
           (iVar5 = __cxa_guard_acquire(&DAT_71053144d8), iVar5 != 0)) {
          FUN_7101764000();
          FUN_71000001c0();
          __cxa_guard_release(&DAT_71053144d8);
        }
        param_4 = (byte ****)(ulong)*(byte *)(param_1 + 0x693);
        param_5 = (long ****)(ulong)uVar21;
        ppuVar13 = (undefined **)(ulong)*(byte *)(param_1 + 0x659);
        param_6 = (ulong)uVar26;
        uVar10 = FUN_7101c08ff0(DAT_71053050f0,*(char *)(param_1 + 0x658),*(byte *)(param_1 + 0x659)
                                ,(uint)*(byte *)(param_1 + 0x693),bVar3,uVar26);
        uVar26 = uVar26 + 1;
        uVar28 = uVar28 + ((uint)uVar10 & 1);
      } while (uVar4 != uVar26);
      bVar11 = 1 < uVar28;
      plVar23 = (long *)*plVar6;
    }
    else {
      if (uVar25 - 0x1b < 4) {
        if (*(char *)(param_1 + 0x732) == '\0') goto LAB_7101c13a18;
      }
      else if ((*(char *)(param_1 + 0x732) == '\0') && (1 < *(int *)(param_1 + 0x164) - 1U)) {
        if (((DAT_71053144d8 & 1) == 0) &&
           (iVar5 = __cxa_guard_acquire(&DAT_71053144d8), iVar5 != 0)) {
          FUN_7101764000();
          ppuVar13 = &PTR_LOOP_7104f17000;
          FUN_71000001c0();
          __cxa_guard_release(&DAT_71053144d8);
        }
        if (DAT_71053050f0 == 0x2030300) {
          if (1 < uVar25 - 7) goto LAB_7101c13a18;
        }
        else if (((DAT_71053050f0 != 0x2030200) || (0xf < uVar21 - 2)) ||
                ((0xc151U >> (ulong)(uVar21 - 2 & 0x1f) & 1) == 0)) goto LAB_7101c13a18;
      }
LAB_7101c13af0:
      bVar11 = false;
      plVar23 = (long *)*plVar6;
    }
    if (plVar23 != (long *)0x0) {
      (**(code **)(*plVar23 + 0x208))(plVar23,bVar11);
      uVar7 = (**(code **)(*plVar23 + 0x200))(plVar23);
      if ((uVar7 & 1) == 0) {
        uVar4 = 1;
      }
      else {
        uVar4 = (**(code **)(*plVar23 + 0x210))(plVar23);
        uVar4 = uVar4 ^ 1;
      }
      ppuVar13 = (undefined **)0x0;
      (**(code **)(*plVar23 + 0x388))(plVar23,uVar4 & 1);
    }
    uVar7 = local_a0[0];
    local_a8 = (long ********)&PTR_FUN_710523d9a8;
    local_a0[0] = 0;
    if (uVar7 != 0) {
      FUN_710392eb40(uVar7);
    }
  }
  FUN_7103396910((uint *)&local_a8,bVar3);
  FUN_7103776910(&local_b8,(long)param_3,(long ****)"set_txt_title",ppuVar13,param_4,param_5,param_6
                 ,param_7,param_8);
  FUN_7103776910(&local_c8,(long)param_3,(long ****)"set_txt_title_sel",ppuVar13,param_4,param_5,
                 param_6,param_7,param_8);
  FUN_710377a120((long)&local_b8,(char *)local_a0,ppuVar13,param_4,param_5,param_6,param_7,param_8);
  FUN_710377a120((long)&local_c8,(char *)local_a0,ppuVar13,param_4,param_5,param_6,param_7,param_8);
  uVar7 = FUN_7101c0c470(bVar3);
  if (((uVar7 & 0xff00000000000000) == 0x7100000000000000) && ((uVar7 & 0xffffffffff) != 0)) {
    FUN_7103776910(&local_d8,(long)param_3,(long ****)"set_icn_rule",ppuVar13,param_4,param_5,
                   param_6,param_7,param_8);
    FUN_7103776910(&local_e8,(long)param_3,(long ****)"set_icn_rule_sel",ppuVar13,param_4,param_5,
                   param_6,param_7,param_8);
    plVar9 = FUN_710323f760(*(long **)(param_1 + 0x150),uVar7,(long ****)ppuVar13,param_4,param_5,
                            param_6,param_7,param_8);
    plVar23 = local_d0;
    FUN_7103778b80((long)local_d0,(long)plVar9,(long *********)ppuVar13,param_4,param_5,param_6,
                   param_7,param_8);
    plVar9 = FUN_710323f760(*(long **)(param_1 + 0x150),uVar7,(long ****)ppuVar13,param_4,param_5,
                            param_6,param_7,param_8);
    uVar7 = local_e0;
    FUN_7103778b80(local_e0,(long)plVar9,(long *********)ppuVar13,param_4,param_5,param_6,param_7,
                   param_8);
    local_e8 = &PTR_FUN_710523d9a8;
    local_e0 = 0;
    if (uVar7 != 0) {
      FUN_710392eb40(uVar7);
    }
    local_d8 = &PTR_FUN_710523d9a8;
    local_d0 = (long *)0x0;
    if (plVar23 != (long *)0x0) {
      FUN_710392eb40((ulong)plVar23);
    }
  }
  lVar8 = *(long *)(DAT_710532f730 + 8);
  FUN_7103776910(&local_d8,(long)param_3,(long ****)"set_icn_rule_det_pl",ppuVar13,param_4,param_5,
                 param_6,param_7,param_8);
  plVar23 = local_d0;
  if (uVar25 == 0x1a) {
    lVar16 = *local_d0;
    if (lVar16 != 0) {
      *(byte *)(lVar16 + 0x58) = *(byte *)(lVar16 + 0x58) | 1;
    }
    lVar8 = *(long *)(lVar8 + 0x198);
    uVar7 = 0xf964a71e9;
  }
  else {
    if (uVar25 != 0x19) {
      lVar8 = *local_d0;
      if (lVar8 != 0) {
        *(byte *)(lVar8 + 0x58) = *(byte *)(lVar8 + 0x58) & 0xfe;
      }
      goto LAB_7101c138e0;
    }
    lVar16 = *local_d0;
    if (lVar16 != 0) {
      *(byte *)(lVar16 + 0x58) = *(byte *)(lVar16 + 0x58) | 1;
    }
    lVar8 = *(long *)(lVar8 + 0x198);
    uVar7 = 0x11dcccfa63;
  }
  uVar7 = FUN_71032821b0(lVar8,uVar7);
  plVar9 = FUN_710323f760(*(long **)(param_1 + 0x150),uVar7,(long ****)ppuVar13,param_4,param_5,
                          param_6,param_7,param_8);
  FUN_7103778b80((long)plVar23,(long)plVar9,(long *********)ppuVar13,param_4,param_5,param_6,param_7
                 ,param_8);
LAB_7101c138e0:
  local_d8 = &PTR_FUN_710523d9a8;
  local_d0 = (long *)0x0;
  if (plVar23 != (long *)0x0) {
    FUN_710392eb40((ulong)plVar23);
  }
  uVar7 = local_c0;
  local_c8 = &PTR_FUN_710523d9a8;
  local_c0 = 0;
  if (uVar7 != 0) {
    FUN_710392eb40(uVar7);
  }
  uVar7 = local_b0;
  local_b8 = &PTR_FUN_710523d9a8;
  local_b0 = 0;
  if (uVar7 != 0) {
    FUN_710392eb40(uVar7);
  }
  FUN_710392eb40((ulong)plVar6);
  return;
}

