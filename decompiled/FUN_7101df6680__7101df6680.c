// addr:      7101df6680
// offset:    0x1df6680
// name:      FUN_7101df6680
// mangled:   
// signature: undefined __cdecl FUN_7101df6680(long param_1, ulong param_2, long * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7101df6680(long param_1,ulong param_2,long ****param_3,byte ****param_4,long ****param_5,
                   undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  short sVar1;
  undefined8 uVar2;
  bool bVar3;
  ulong uVar4;
  ulong uVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  int iVar10;
  ulong extraout_x1;
  ulong extraout_x1_00;
  undefined8 extraout_x1_01;
  long ****pppplVar11;
  int iVar12;
  int iVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  code *pcVar17;
  long lVar18;
  long lVar19;
  undefined8 uVar20;
  undefined **local_78;
  long *local_70;
  long ***local_68;
  ulong local_60;
  undefined4 local_54;
  
  iVar10 = (int)param_2;
  uVar5 = param_2;
  if (*(int *)(param_1 + 0x638) == 4 || *(int *)(param_1 + 0x638) == 0xd) {
    if ((iVar10 - 5U < 2) || (*(int *)(param_1 + 0x65c) != 5)) {
      if (iVar10 == 6) {
        *(undefined1 *)(param_1 + 0x6cc) = 1;
      }
    }
    else {
      FUN_7103776640(&local_68,param_1 + 0x18,(byte ****)"set_parts_dialog_base",param_3,param_4,
                     param_5,param_6,param_7,param_8);
      uVar5 = local_60;
      FUN_7103778300(0x3f800000,local_60,0x710428ff7d);
      local_68 = (long ***)&PTR_FUN_710523d988;
      local_60 = 0;
      if (uVar5 != 0) {
        uVar4 = *(ulong *)(uVar5 + 0x18);
        *(undefined ***)(uVar5 + 0x10) = &PTR_FUN_710523d9a8;
        *(undefined8 *)(uVar5 + 0x18) = 0;
        if (uVar4 != 0) {
          FUN_710392eb40(uVar4);
        }
        FUN_710392eb40(uVar5);
      }
      FUN_7103776640(&local_68,param_1 + 0x18,(byte ****)"set_parts_det_key",param_3,param_4,param_5
                     ,param_6,param_7,param_8);
      uVar4 = local_60;
      if ((*(long *)(local_60 + 8) != 0) &&
         (lVar14 = *(long *)(*(long *)(local_60 + 8) + 0x18), lVar14 != 0)) {
        *(byte *)(lVar14 + 0x58) = *(byte *)(lVar14 + 0x58) | 1;
      }
      local_68 = (long ***)&PTR_FUN_710523d988;
      local_60 = 0;
      uVar5 = extraout_x1;
      if (uVar4 != 0) {
        uVar5 = *(ulong *)(uVar4 + 0x18);
        *(undefined ***)(uVar4 + 0x10) = &PTR_FUN_710523d9a8;
        *(undefined8 *)(uVar4 + 0x18) = 0;
        if (uVar5 != 0) {
          FUN_710392eb40(uVar5);
        }
        FUN_710392eb40(uVar4);
        uVar5 = extraout_x1_00;
      }
      *(undefined4 *)(param_1 + 0x6ec) = 2;
    }
  }
  lVar14 = DAT_710532f820;
  iVar13 = *(int *)(param_1 + 0x65c);
  if (iVar13 == iVar10) {
    return;
  }
  switch(param_2 & 0xffffffff) {
  case 0:
    plVar7 = (long *)(param_1 + 0x28);
    plVar6 = (long *)*plVar7;
    if (*(int *)((long)plVar6 + 0x254) != 0x66) {
      param_3 = (long ****)0x0;
      FUN_7103771a80(plVar7,0x66,0);
      plVar6 = (long *)*plVar7;
    }
    (**(code **)(*plVar6 + 0x70))(plVar6,0);
    (**(code **)(**(long **)(param_1 + 0x28) + 0x60))(*(long **)(param_1 + 0x28),1);
    (**(code **)(**(long **)(param_1 + 0x30) + 0x70))(*(long **)(param_1 + 0x30),0);
    (**(code **)(**(long **)(param_1 + 0x30) + 0x60))(*(long **)(param_1 + 0x30),1);
    plVar6 = (long *)(param_1 + 0x38);
    uVar5 = (**(code **)(*(long *)*plVar6 + 0x78))();
    if ((uVar5 & 1) == 0) {
      (**(code **)(**(long **)(param_1 + 0x38) + 0x70))(*(long **)(param_1 + 0x38),1);
      (**(code **)(**(long **)(param_1 + 0x38) + 0x60))(*(long **)(param_1 + 0x38),1);
      iVar13 = *(int *)(param_1 + 0x668);
      FUN_7101e02dc0(param_1 + 0x60,iVar13,param_3,param_4,param_5,param_6,param_7,param_8);
      if (iVar13 == -1) {
        FUN_7103783c10(plVar6,0,0,1,param_5,param_6,param_7,param_8);
      }
      else {
        FUN_7103783c10(plVar6,*(int *)(param_1 + 0x668),0,1,param_5,param_6,param_7,param_8);
        lVar14 = *(long *)(param_1 + 0x38);
        if (*(long **)(lVar14 + 0x160) != (long *)0x0) {
          iVar13 = *(int *)(param_1 + 0x668);
          (**(code **)(**(long **)(lVar14 + 0x160) + 0x18))();
          iVar12 = *(int *)(lVar14 + 0x2c4);
          if (0 < iVar12) {
            lVar16 = 0;
            do {
              if ((iVar13 - *(int *)(lVar14 + 0x29c) == (int)lVar16) &&
                 (iVar13 < *(int *)(lVar14 + 0x288))) {
                lVar15 = *(long *)(lVar14 + 0x168);
                lVar18 = *(long *)(lVar15 + lVar16 * 8);
                lVar19 = **(long **)(lVar18 + 0x20);
                if (lVar19 != 0) {
                  *(byte *)(lVar19 + 0x58) = *(byte *)(lVar19 + 0x58) | 1;
                  lVar18 = *(long *)(lVar15 + lVar16 * 8);
                }
                *(int *)(lVar18 + 0x30) = iVar13;
                lVar15 = *(long *)(lVar15 + lVar16 * 8);
                (**(code **)(**(long **)(lVar14 + 0x160) + 0x10))
                          (*(long **)(lVar14 + 0x160),*(undefined4 *)(lVar15 + 0x30),lVar15 + 8,
                           lVar15 + 0x18);
                iVar12 = *(int *)(lVar14 + 0x2c4);
              }
              lVar16 = lVar16 + 1;
            } while (lVar16 < iVar12);
          }
          (**(code **)(**(long **)(lVar14 + 0x160) + 0x20))();
        }
      }
    }
    break;
  case 1:
    plVar6 = (long *)(param_1 + 0x28);
    (**(code **)(*(long *)*plVar6 + 0x70))((long *)*plVar6,1);
    (**(code **)(*(long *)*plVar6 + 0x60))((long *)*plVar6,1);
    if ((*(char *)(param_1 + 0x660) == '\0') || (*(int *)(param_1 + 0x664) != 3)) {
      lVar14 = *(long *)(*plVar6 + 0x1b8);
      if (lVar14 != 0) {
        lVar16 = *plVar6 + 0x1b8;
        lVar15 = lVar16;
        do {
          if (99 < *(int *)(lVar14 + 0x20)) {
            lVar15 = lVar14;
          }
          lVar14 = *(long *)(lVar14 + (ulong)(*(int *)(lVar14 + 0x20) < 100) * 8);
        } while (lVar14 != 0);
        if ((((lVar15 != lVar16) && (*(int *)(lVar15 + 0x20) < 0x65)) &&
            (*(long **)(lVar15 + 0x28) != (long *)0x0)) &&
           (uVar5 = (**(code **)(**(long **)(lVar15 + 0x28) + 0x200))(), (uVar5 & 1) != 0)) {
          iVar13 = 100;
          goto LAB_7101df6f84;
        }
      }
    }
    else {
      *(undefined1 *)(param_1 + 0x660) = 0;
      lVar14 = *(long *)(*(long *)(param_1 + 0x28) + 0x1b8);
      if (lVar14 != 0) {
        lVar16 = *(long *)(param_1 + 0x28) + 0x1b8;
        lVar15 = lVar16;
        do {
          if (100 < *(int *)(lVar14 + 0x20)) {
            lVar15 = lVar14;
          }
          lVar14 = *(long *)(lVar14 + (ulong)(*(int *)(lVar14 + 0x20) < 0x65) * 8);
        } while (lVar14 != 0);
        if (((lVar15 != lVar16) && (*(int *)(lVar15 + 0x20) < 0x66)) &&
           ((*(long **)(lVar15 + 0x28) != (long *)0x0 &&
            (uVar5 = (**(code **)(**(long **)(lVar15 + 0x28) + 0x200))(), (uVar5 & 1) != 0)))) {
          iVar13 = 0x65;
LAB_7101df6f84:
          FUN_7103771a80(plVar6,iVar13,0);
        }
      }
    }
    (**(code **)(**(long **)(param_1 + 0x30) + 0x70))(*(long **)(param_1 + 0x30),1);
    (**(code **)(**(long **)(param_1 + 0x30) + 0x60))(*(long **)(param_1 + 0x30),1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x70))(*(long **)(param_1 + 0x38),0);
    break;
  case 2:
    (**(code **)(**(long **)(param_1 + 0x28) + 0x70))(*(long **)(param_1 + 0x28),0);
    (**(code **)(**(long **)(param_1 + 0x28) + 0x60))(*(long **)(param_1 + 0x28),0);
    (**(code **)(**(long **)(param_1 + 0x30) + 0x70))(*(long **)(param_1 + 0x30),0);
    (**(code **)(**(long **)(param_1 + 0x30) + 0x60))(*(long **)(param_1 + 0x30),0);
    pppplVar11 = (long ****)0x10003;
    FUN_7103775dc0((long *)**(undefined8 **)(param_1 + 0x10),1,(long ****)0x10003,param_4,param_5,
                   param_6,param_7,param_8);
    FUN_7103778ab0(&local_78,(undefined8 *)(*(long *)(param_1 + 0x48) + 0x10),pppplVar11,param_4,
                   param_5,param_6,param_7,param_8);
    lVar14 = *local_70;
    if (lVar14 == 0) {
      plVar6 = (long *)0x0;
      uVar20 = _ConstantZero;
    }
    else {
      plVar6 = *(long **)(lVar14 + 0x18);
      uVar20 = *(undefined8 *)(lVar14 + 0x30);
    }
    plVar7 = (long *)FUN_710392e290(0x10,0x20,pppplVar11,param_4,param_5,param_6,param_7,param_8);
    if (plVar7 == (long *)0x0) {
      if (DAT_7105332f00 != (long *)0x0) {
        local_54 = 0;
        local_68 = (long ***)&SUB_00000020;
        pppplVar11 = &local_68;
        uVar5 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_54);
        if (((uVar5 & 1) != 0) &&
           (plVar7 = (long *)FUN_710392e290(0x10,0x20,pppplVar11,param_4,param_5,param_6,param_7,
                                            param_8), plVar7 != (long *)0x0)) goto LAB_7101df70cc;
      }
      plVar7 = (long *)0x0;
    }
LAB_7101df70cc:
    plVar7[2] = 0;
    plVar7[3] = 0;
    *plVar7 = 0;
    plVar7[1] = 0;
    if (plVar6 != (long *)0x0) {
      *plVar7 = (long)plVar6;
      plVar8 = FUN_7103772ed0(plVar6);
      plVar7[1] = (long)plVar8;
      plVar8 = FUN_7103772fe0(plVar6);
      plVar7[2] = (long)plVar8;
      plVar6 = FUN_71037730f0(plVar6);
      plVar7[3] = (long)plVar6;
    }
    lVar14 = *plVar7;
    while (lVar14 != 0) {
      plVar8 = *(long **)(lVar14 + 0x18);
      uVar2 = *(undefined8 *)(lVar14 + 0x30);
      plVar6 = (long *)FUN_710392e290(0x10,0x20,pppplVar11,param_4,param_5,param_6,param_7,param_8);
      if (plVar6 == (long *)0x0) {
        if (DAT_7105332f00 != (long *)0x0) {
          local_54 = 0;
          local_68 = (long ***)&SUB_00000020;
          pppplVar11 = &local_68;
          uVar5 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_54);
          if (((uVar5 & 1) != 0) &&
             (plVar6 = (long *)FUN_710392e290(0x10,0x20,pppplVar11,param_4,param_5,param_6,param_7,
                                              param_8), plVar6 != (long *)0x0)) goto LAB_7101df7180;
        }
        plVar6 = (long *)0x0;
      }
LAB_7101df7180:
      plVar6[2] = 0;
      plVar6[3] = 0;
      *plVar6 = 0;
      plVar6[1] = 0;
      if (plVar8 != (long *)0x0) {
        *plVar6 = (long)plVar8;
        plVar9 = FUN_7103772ed0(plVar8);
        plVar6[1] = (long)plVar9;
        plVar9 = FUN_7103772fe0(plVar8);
        plVar6[2] = (long)plVar9;
        plVar8 = FUN_71037730f0(plVar8);
        plVar6[3] = (long)plVar8;
      }
      uVar20 = CONCAT44((float)((ulong)uVar20 >> 0x20) + (float)((ulong)uVar2 >> 0x20),
                        (float)uVar20 + (float)uVar2);
      FUN_710392eb40((ulong)plVar7);
      plVar7 = plVar6;
      lVar14 = *plVar6;
    }
    FUN_710392eb40((ulong)plVar7);
    plVar6 = local_70;
    lVar14 = *(long *)(*(long *)(param_1 + 0x630) + 0xd8);
    if (*(long *)(lVar14 + 8) == 0) {
      lVar14 = **(long **)(*(long *)(*(long *)(param_1 + 0x630) + 0xe8) + 0x18);
    }
    else {
      lVar14 = **(long **)(lVar14 + 0x18);
    }
    if (lVar14 != 0) {
      *(undefined8 *)(lVar14 + 0x30) = uVar20;
      *(byte *)(lVar14 + 0x58) = *(byte *)(lVar14 + 0x58) | 0x10;
    }
    local_78 = &PTR_FUN_710523d9a8;
    local_70 = (long *)0x0;
    if (plVar6 != (long *)0x0) {
      FUN_710392eb40((ulong)plVar6);
    }
    FUN_71032cc8f0(param_1 + 0x610,*(int *)(param_1 + 0x688),pppplVar11,param_4,param_5,param_6,
                   param_7,param_8);
    FUN_7103778300(0x3f800000,*(long *)(**(long **)(param_1 + 0x10) + 0x10),0x710438d042);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x70))(*(long **)(param_1 + 0x38),0);
    plVar6 = *(long **)(param_1 + 0x38);
    goto LAB_7101df7270;
  case 3:
    (**(code **)(**(long **)(param_1 + 0x28) + 0x70))(*(long **)(param_1 + 0x28),0);
    (**(code **)(**(long **)(param_1 + 0x28) + 0x60))(*(long **)(param_1 + 0x28),0);
    (**(code **)(**(long **)(param_1 + 0x30) + 0x70))(*(long **)(param_1 + 0x30),0);
    (**(code **)(**(long **)(param_1 + 0x30) + 0x60))(*(long **)(param_1 + 0x30),0);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x70))(*(long **)(param_1 + 0x38),0);
    plVar6 = *(long **)(param_1 + 0x38);
    pcVar17 = *(code **)(*plVar6 + 0x60);
    goto LAB_7101df6d84;
  case 4:
    bVar3 = FUN_7103291150(*(long *)(*(long *)(DAT_710532f730 + 8) + 0x1c8),0x58ffff2880d916a4);
    if (bVar3) {
      FUN_71032edf70(*(uint **)(lVar14 + 0x10),0x58ffff2880d916a4);
      FUN_71032f1bb0(*(long *)(lVar14 + 8),*(uint **)(lVar14 + 0x10),param_3,param_4,param_5,param_6
                     ,param_7,param_8);
    }
    else {
      *(undefined4 *)(*(long *)(lVar14 + 8) + 0x118) = 0;
    }
    (**(code **)(**(long **)(param_1 + 0x28) + 0x60))(*(long **)(param_1 + 0x28),0);
    plVar6 = *(long **)(param_1 + 0x30);
LAB_7101df7270:
    (**(code **)(*plVar6 + 0x60))(plVar6,0);
    goto switchD_7101df67d0_default;
  case 5:
    (**(code **)(**(long **)(param_1 + 0x28) + 0x70))(*(long **)(param_1 + 0x28),0);
    (**(code **)(**(long **)(param_1 + 0x28) + 0x60))(*(long **)(param_1 + 0x28),0);
    (**(code **)(**(long **)(param_1 + 0x30) + 0x70))(*(long **)(param_1 + 0x30),0);
    (**(code **)(**(long **)(param_1 + 0x30) + 0x60))(*(long **)(param_1 + 0x30),0);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x70))(*(long **)(param_1 + 0x38),0);
    lVar14 = param_1 + 0x18;
    FUN_7103776640(&local_68,lVar14,(byte ****)"set_parts_dialog_base",param_3,param_4,param_5,
                   param_6,param_7,param_8);
    uVar5 = local_60;
    if ((*(long *)(local_60 + 8) != 0) &&
       (lVar16 = *(long *)(*(long *)(local_60 + 8) + 0x18), lVar16 != 0)) {
      *(byte *)(lVar16 + 0x58) = *(byte *)(lVar16 + 0x58) | 1;
    }
    local_68 = (long ***)&PTR_FUN_710523d988;
    local_60 = 0;
    if (uVar5 != 0) {
      uVar4 = *(ulong *)(uVar5 + 0x18);
      *(undefined ***)(uVar5 + 0x10) = &PTR_FUN_710523d9a8;
      *(undefined8 *)(uVar5 + 0x18) = 0;
      if (uVar4 != 0) {
        FUN_710392eb40(uVar4);
      }
      FUN_710392eb40(uVar5);
    }
    FUN_7103776640(&local_68,lVar14,(byte ****)"set_parts_dialog_base",param_3,param_4,param_5,
                   param_6,param_7,param_8);
    uVar5 = local_60;
    FUN_7103778300(0x3f800000,local_60,0x7104421055);
    local_68 = (long ***)&PTR_FUN_710523d988;
    local_60 = 0;
    if (uVar5 != 0) {
      uVar4 = *(ulong *)(uVar5 + 0x18);
      *(undefined ***)(uVar5 + 0x10) = &PTR_FUN_710523d9a8;
      *(undefined8 *)(uVar5 + 0x18) = 0;
      if (uVar4 != 0) {
        FUN_710392eb40(uVar4);
      }
      FUN_710392eb40(uVar5);
    }
    FUN_7103776640(&local_68,lVar14,(byte ****)"set_parts_det_key",param_3,param_4,param_5,param_6,
                   param_7,param_8);
    uVar5 = local_60;
    if ((*(long *)(local_60 + 8) != 0) &&
       (lVar14 = *(long *)(*(long *)(local_60 + 8) + 0x18), lVar14 != 0)) {
      *(byte *)(lVar14 + 0x58) = *(byte *)(lVar14 + 0x58) & 0xfe;
    }
    local_68 = (long ***)&PTR_FUN_710523d988;
    local_60 = 0;
    if (uVar5 != 0) {
      uVar4 = *(ulong *)(uVar5 + 0x18);
      *(undefined ***)(uVar5 + 0x10) = &PTR_FUN_710523d9a8;
      *(undefined8 *)(uVar5 + 0x18) = 0;
      if (uVar4 != 0) {
        FUN_710392eb40(uVar4);
      }
      FUN_710392eb40(uVar5);
    }
    *(undefined4 *)(param_1 + 0x6ec) = 1;
    lVar14 = *(long *)(*(long *)(param_1 + 0x6b8) + 0x80);
    plVar6 = (long *)(lVar14 + 0x2268);
    (**(code **)(**(long **)(lVar14 + 0x2268) + 0x70))(*(long **)(lVar14 + 0x2268),1);
    if (*(int *)(lVar14 + 0x11b0) < 6) {
      iVar13 = -1;
      if (*(int *)(lVar14 + 0x11b0) - 1U < 5) {
        iVar13 = 1;
      }
    }
    else {
      iVar13 = 2;
    }
    goto LAB_7101df704c;
  case 6:
    (**(code **)(**(long **)(param_1 + 0x28) + 0x70))(*(long **)(param_1 + 0x28),0);
    (**(code **)(**(long **)(param_1 + 0x28) + 0x60))(*(long **)(param_1 + 0x28),0);
    (**(code **)(**(long **)(param_1 + 0x30) + 0x70))(*(long **)(param_1 + 0x30),0);
    (**(code **)(**(long **)(param_1 + 0x30) + 0x60))(*(long **)(param_1 + 0x30),0);
    plVar6 = *(long **)(param_1 + 0x38);
    pcVar17 = *(code **)(*plVar6 + 0x70);
LAB_7101df6d84:
    (*pcVar17)(plVar6,0);
    *(undefined4 *)(param_1 + 0x664) = *(undefined4 *)(param_1 + 0x65c);
    *(undefined1 *)(param_1 + 0x660) = 1;
LAB_7101df6ea8:
    *(undefined4 *)(param_1 + 0x668) = *(undefined4 *)(*(long *)(param_1 + 0x38) + 0x2a4);
    goto switchD_7101df67d0_default;
  case 7:
    if (iVar13 != 6) goto switchD_7101df67d0_default;
    if (*(char *)(param_1 + 0x6b1) == '\0') goto LAB_7101df72f0;
    iVar10 = *(int *)(*(long *)(param_1 + 0x38) + 0x2a4);
    if (iVar10 < 0) {
LAB_7101df72e4:
      FUN_7101df6590(param_1,uVar5,param_3,param_4,param_5,param_6,param_7,param_8);
    }
    else {
      if ((*(uint *)(param_1 + 0x2c8) & 0xffffff) == 0) {
        iVar13 = (int)((ulong)(*(long *)(param_1 + 0x248) - *(long *)(param_1 + 0x240)) >> 3);
      }
      else {
        iVar13 = *(int *)(param_1 + 0x308);
      }
      if (iVar13 <= iVar10) goto LAB_7101df72e4;
      sVar1 = **(short **)(*(long *)(param_1 + 0x240) + (long)iVar10 * 8);
      FUN_7101df6590(param_1,uVar5,param_3,param_4,param_5,param_6,param_7,param_8);
      if (sVar1 != -1) {
        lVar14 = 0;
        iVar10 = -1;
        uVar5 = *(ulong *)(param_1 + 0x2c8) & 0xffffff;
        if (uVar5 != 0) goto LAB_7101df6ed0;
        while (lVar14 < (int)((ulong)(*(long *)(param_1 + 0x248) - *(long *)(param_1 + 0x240)) >> 3)
              ) {
          while( true ) {
            if (**(short **)(*(long *)(param_1 + 0x240) + lVar14 * 8) == sVar1) {
              iVar10 = (int)lVar14;
              goto LAB_7101df6f10;
            }
            lVar14 = lVar14 + 1;
            if (uVar5 == 0) break;
LAB_7101df6ed0:
            if (*(int *)(param_1 + 0x308) <= lVar14) goto LAB_7101df6f10;
          }
        }
LAB_7101df6f10:
        *(int *)(param_1 + 0x668) = iVar10;
        if (uVar5 == 0) {
          iVar13 = (int)((ulong)(*(long *)(param_1 + 0x248) - *(long *)(param_1 + 0x240)) >> 3);
          if (0 < iVar13) goto LAB_7101df734c;
LAB_7101df7360:
          if (iVar10 == -1) goto LAB_7101df72ec;
        }
        else {
          iVar13 = *(int *)(param_1 + 0x308);
          if (iVar13 < 1) goto LAB_7101df7360;
LAB_7101df734c:
          if (iVar10 < iVar13) goto LAB_7101df7360;
          iVar10 = 0;
          *(undefined4 *)(param_1 + 0x668) = 0;
        }
        FUN_7101e02dc0(param_1 + 0x60,iVar10,param_3,param_4,param_5,param_6,param_7,param_8);
        param_4 = (byte ****)0x1;
        param_3 = (long ****)0x0;
        FUN_7103783c10((long *)(param_1 + 0x38),*(int *)(param_1 + 0x668),0,1,param_5,param_6,
                       param_7,param_8);
      }
    }
LAB_7101df72ec:
    *(undefined1 *)(param_1 + 0x6b1) = 0;
LAB_7101df72f0:
    *(undefined4 *)(param_1 + 0x65c) = 7;
    if (*(char *)(param_1 + 0x660) == '\0') {
      uVar5 = 0;
    }
    else {
      uVar5 = (ulong)*(uint *)(param_1 + 0x664);
    }
    FUN_7101df6680(param_1,uVar5,param_3,param_4,param_5,param_6,param_7,param_8);
    *(undefined4 *)(param_1 + 0x668) = 0xffffffff;
    *(undefined1 *)(param_1 + 0x660) = 0;
    *(undefined4 *)(param_1 + 0x6c8) = *(undefined4 *)(*(long *)(param_1 + 0x38) + 0x2a4);
    return;
  case 8:
    (**(code **)(**(long **)(param_1 + 0x28) + 0x70))(*(long **)(param_1 + 0x28),0);
    (**(code **)(**(long **)(param_1 + 0x28) + 0x60))(*(long **)(param_1 + 0x28),0);
    (**(code **)(**(long **)(param_1 + 0x30) + 0x70))(*(long **)(param_1 + 0x30),0);
    (**(code **)(**(long **)(param_1 + 0x30) + 0x60))(*(long **)(param_1 + 0x30),0);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x70))(*(long **)(param_1 + 0x38),0);
    FUN_7103775fa0((long *)**(undefined8 **)(param_1 + 0x10),extraout_x1_01,param_3,param_4,param_5,
                   param_6,param_7,param_8);
    **(uint **)(DAT_710593b988 + 8) =
         **(uint **)(DAT_710593b988 + 8) &
         (1 << (ulong)(*(uint *)(param_1 + 0x624) & 0x1f) ^ 0xffffffffU);
    goto LAB_7101df6ea8;
  case 9:
    FUN_7101df6680(param_1,0,param_3,param_4,param_5,param_6,param_7,param_8);
    return;
  default:
    goto switchD_7101df67d0_default;
  }
  lVar14 = *(long *)(*(long *)(param_1 + 0x6b8) + 0x80);
  plVar6 = (long *)(lVar14 + 0x2268);
  (**(code **)(**(long **)(lVar14 + 0x2268) + 0x70))(*(long **)(lVar14 + 0x2268),0);
  if (*(char *)(lVar14 + 0x11b4) == '\0') {
    iVar13 = 3;
LAB_7101df704c:
    FUN_7103771a80(plVar6,iVar13,0);
  }
  else if (*(int *)(*plVar6 + 0x254) == 3) {
    FUN_710376b960(*plVar6);
  }
switchD_7101df67d0_default:
  *(int *)(param_1 + 0x65c) = iVar10;
  return;
}

