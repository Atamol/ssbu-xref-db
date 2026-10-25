// addr:      7101dcfc60
// offset:    0x1dcfc60
// name:      FUN_7101dcfc60
// mangled:   
// signature: undefined __cdecl FUN_7101dcfc60(long param_1, uint param_2, long param_3, undefined8 param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_7101dcfc60(long param_1,uint param_2,long param_3,undefined8 param_4,long ****param_5,
                   undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  ushort *puVar1;
  ushort uVar2;
  ulong uVar3;
  bool bVar4;
  uint uVar5;
  long *plVar6;
  long ****pppplVar7;
  long ****pppplVar8;
  long ****pppplVar9;
  byte ****ppppbVar10;
  long *plVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  long lVar17;
  ulong uVar18;
  byte *pbVar19;
  long ***local_60;
  ulong local_58;
  undefined **local_50;
  ulong local_48;
  undefined4 local_34;
  
  pppplVar8 = &local_60;
  pppplVar9 = &local_60;
  if ((int)param_2 < 0) {
    return;
  }
  lVar17 = *(long *)(param_1 + 8);
  plVar11 = (long *)**(undefined8 **)(lVar17 + 0x20);
  lVar13 = *plVar11;
  uVar18 = (ulong)(param_2 & 0xffff);
  puVar1 = (ushort *)(lVar13 + uVar18 * 4);
  lVar12 = *(long *)(*(long *)(param_3 + 8) + 8);
  if (puVar1 == (ushort *)0x0 || (ulong)(plVar11[1] - lVar13 >> 2) <= uVar18) {
    if (lVar12 == 0) {
      return;
    }
    lVar13 = *(long *)(lVar12 + 0x18);
    if (lVar13 == 0) {
      return;
    }
    *(byte *)(lVar13 + 0x58) = *(byte *)(lVar13 + 0x58) & 0xfe;
    return;
  }
  if ((lVar12 != 0) && (lVar12 = *(long *)(lVar12 + 0x18), lVar12 != 0)) {
    *(byte *)(lVar12 + 0x58) = *(byte *)(lVar12 + 0x58) | 1;
  }
  lVar12 = param_3;
  FUN_7103776640(&local_50,param_3,(byte ****)"set_parts_icon_base",param_3,param_4,param_5,param_6,
                 param_7,param_8);
  FUN_7101dcf780((long)&local_50,*puVar1);
  FUN_7103776910(&local_60,param_3,(long ****)"set_txt_num_base",lVar12,param_4,param_5,param_6,
                 param_7,param_8);
  pbVar19 = (byte *)(lVar13 + uVar18 * 4 + 2);
  ppppbVar10 = (byte ****)(ulong)*pbVar19;
  pppplVar7 = (long ****)0x1;
  FUN_710377a280((long)&local_60,(byte *)"mnu_spirits_itemview__item_n",1);
  uVar18 = local_58;
  local_60 = (long ***)&PTR_FUN_710523d9a8;
  local_58 = 0;
  if (uVar18 != 0) {
    FUN_710392eb40(uVar18);
  }
  if (*pbVar19 == 0) {
    FUN_7103778300(0x3f800000,*(long *)(param_3 + 8),0x71044228f0);
    plVar11 = (long *)FUN_710392e290(0x10,8,pppplVar7,ppppbVar10,param_5,param_6,param_7,param_8);
    if (plVar11 == (long *)0x0) {
      if (DAT_7105332f00 != (long *)0x0) {
        local_34 = 0;
        local_60 = (long ***)&DAT_00000008;
        uVar18 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_34);
        if (((uVar18 & 1) != 0) &&
           (plVar11 = (long *)FUN_710392e290(0x10,8,pppplVar8,ppppbVar10,param_5,param_6,param_7,
                                             param_8), plVar11 != (long *)0x0)) goto LAB_7101dcfe2c;
      }
      plVar11 = (long *)0x0;
    }
LAB_7101dcfe2c:
    *plVar11 = 0;
    lVar13 = *(long *)(*(long *)(param_3 + 8) + 8);
    if ((lVar13 == 0) || (*(long *)(lVar13 + 0x60) == 0)) {
      *plVar11 = 0;
    }
    else {
      plVar6 = (long *)FUN_7103796f20(*(long *)(lVar13 + 0x60),*(long *)(lVar13 + 0x18) + 0xb0);
      *plVar11 = (long)plVar6;
      if (plVar6 != (long *)0x0) {
        (**(code **)(*plVar6 + 0x208))(plVar6,0);
        uVar18 = (**(code **)(*plVar6 + 0x200))(plVar6);
        if ((uVar18 & 1) == 0) {
          uVar5 = 1;
        }
        else {
          uVar5 = (**(code **)(*plVar6 + 0x210))(plVar6);
          uVar5 = uVar5 ^ 1;
        }
        (**(code **)(*plVar6 + 0x388))(plVar6,uVar5 & 1,0);
      }
    }
    goto LAB_7101dd005c;
  }
  FUN_7103778300(0x3f800000,*(long *)(param_3 + 8),0x710438cf86);
  bVar4 = true;
  lVar13 = **(long **)(lVar17 + 0x20);
  if (((*(ushort *)(lVar13 + 0x18) & 0xff) != 0) && ((*(ushort *)(lVar13 + 0x18) & 0xff00) == 0x400)
     ) {
    uVar18 = *(ulong *)(lVar13 + 0x28);
    if (uVar18 != 0) {
      uVar2 = *puVar1;
      uVar14 = (ulong)(short)uVar2;
      uVar16 = uVar18 - 1;
      if ((uVar16 & uVar18) == 0) {
        uVar15 = uVar16 & uVar14;
      }
      else {
        uVar15 = uVar14;
        if (uVar18 <= uVar14) {
          uVar15 = 0;
          if (uVar18 != 0) {
            uVar15 = uVar14 / uVar18;
          }
          uVar15 = uVar14 - uVar15 * uVar18;
        }
      }
      plVar11 = *(long **)(*(long *)(lVar13 + 0x20) + uVar15 * 8);
      if ((plVar11 != (long *)0x0) && (plVar11 = (long *)*plVar11, plVar11 != (long *)0x0)) {
        if ((uVar16 & uVar18) == 0) {
          bVar4 = true;
          do {
            uVar18 = plVar11[1];
            if (uVar18 != uVar14 && (uVar18 & uVar16) != uVar15) goto LAB_7101dcff68;
            if ((uVar18 == uVar14) && (*(ushort *)(plVar11 + 2) == uVar2)) goto LAB_7101dcff5c;
            plVar11 = (long *)*plVar11;
          } while (plVar11 != (long *)0x0);
          goto LAB_7101dcff6c;
        }
        do {
          uVar16 = plVar11[1];
          if (uVar16 == uVar14) {
            if (*(ushort *)(plVar11 + 2) == uVar2) goto LAB_7101dcff5c;
          }
          else {
            if (uVar18 <= uVar16) {
              uVar3 = 0;
              if (uVar18 != 0) {
                uVar3 = uVar16 / uVar18;
              }
              uVar16 = uVar16 - uVar3 * uVar18;
            }
            if (uVar16 != uVar15) break;
          }
          plVar11 = (long *)*plVar11;
        } while (plVar11 != (long *)0x0);
      }
    }
LAB_7101dcff68:
    bVar4 = true;
  }
LAB_7101dcff6c:
  plVar11 = (long *)FUN_710392e290(0x10,8,pppplVar7,ppppbVar10,param_5,param_6,param_7,param_8);
  if (plVar11 == (long *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_34 = 0;
      local_60 = (long ***)&DAT_00000008;
      uVar18 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_34);
      if (((uVar18 & 1) != 0) &&
         (plVar11 = (long *)FUN_710392e290(0x10,8,pppplVar9,ppppbVar10,param_5,param_6,param_7,
                                           param_8), plVar11 != (long *)0x0)) goto LAB_7101dcffc8;
    }
    plVar11 = (long *)0x0;
  }
LAB_7101dcffc8:
  *plVar11 = 0;
  lVar13 = *(long *)(*(long *)(param_3 + 8) + 8);
  if ((lVar13 == 0) || (*(long *)(lVar13 + 0x60) == 0)) {
    *plVar11 = 0;
  }
  else {
    plVar6 = (long *)FUN_7103796f20(*(long *)(lVar13 + 0x60),*(long *)(lVar13 + 0x18) + 0xb0);
    *plVar11 = (long)plVar6;
    if (plVar6 != (long *)0x0) {
      (**(code **)(*plVar6 + 0x208))(plVar6,bVar4);
      uVar18 = (**(code **)(*plVar6 + 0x200))(plVar6);
      if ((uVar18 & 1) == 0) {
        uVar5 = 1;
      }
      else {
        uVar5 = (**(code **)(*plVar6 + 0x210))(plVar6);
        uVar5 = uVar5 ^ 1;
      }
      (**(code **)(*plVar6 + 0x388))(plVar6,uVar5 & 1,0);
    }
  }
LAB_7101dd005c:
  FUN_710392eb40((ulong)plVar11);
  uVar18 = local_48;
  local_50 = &PTR_FUN_710523d988;
  local_48 = 0;
  if (uVar18 != 0) {
    uVar14 = *(ulong *)(uVar18 + 0x18);
    *(undefined ***)(uVar18 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar18 + 0x18) = 0;
    if (uVar14 != 0) {
      FUN_710392eb40(uVar14);
    }
    FUN_710392eb40(uVar18);
  }
  return;
LAB_7101dcff5c:
  if (plVar11[4] == plVar11[3]) goto LAB_7101dcff68;
  bVar4 = plVar11[4] == plVar11[3];
  goto LAB_7101dcff6c;
}

