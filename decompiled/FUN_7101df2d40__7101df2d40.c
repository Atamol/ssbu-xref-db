// addr:      7101df2d40
// offset:    0x1df2d40
// name:      FUN_7101df2d40
// mangled:   
// signature: undefined __cdecl FUN_7101df2d40(long param_1, char param_2, long * * * * * * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_7101df2d40(long param_1,char param_2,long *********param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  ushort *puVar1;
  char *pcVar2;
  byte bVar3;
  byte bVar4;
  ulong uVar5;
  bool bVar6;
  undefined8 *puVar7;
  ulong uVar8;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  ulong *puVar9;
  undefined8 extraout_x1_02;
  undefined8 extraout_x1_03;
  undefined8 extraout_x1_04;
  undefined8 extraout_x1_05;
  undefined8 extraout_x1_06;
  undefined8 uVar10;
  undefined8 *puVar11;
  long lVar12;
  ulong uVar13;
  undefined8 uVar14;
  long lVar15;
  undefined8 uVar16;
  long lVar17;
  long lVar18;
  undefined8 *puVar19;
  long *plVar20;
  ushort uVar21;
  int iVar22;
  ulong uVar23;
  undefined **local_d8;
  ulong local_d0;
  undefined **local_c8;
  ulong local_c0;
  long ********local_b8;
  ulong local_b0 [8];
  
  pcVar2 = "attacker";
  if (param_2 != '\0') {
    pcVar2 = "supporter";
  }
  FUN_7103778300(0x3f800000,*(long *)(param_1 + 0x240),(long)pcVar2);
  if (param_2 == '\x02') {
    puVar7 = (undefined8 *)
             FUN_710392e290(0x10,0x20,(long ****)param_3,param_4,param_5,param_6,param_7,param_8);
    if (puVar7 == (undefined8 *)0x0) {
      if (DAT_7105332f00 != (long *)0x0) {
        local_c8 = (undefined **)((ulong)local_c8 & 0xffffffff00000000);
        local_b8 = (long ********)&SUB_00000020;
        param_3 = &local_b8;
        uVar8 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_c8);
        if (((uVar8 & 1) != 0) &&
           (puVar7 = (undefined8 *)
                     FUN_710392e290(0x10,0x20,(long ****)param_3,param_4,param_5,param_6,param_7,
                                    param_8), puVar7 != (undefined8 *)0x0)) goto LAB_7101df2e90;
      }
      puVar7 = (undefined8 *)0x0;
    }
LAB_7101df2e90:
    uVar10 = 0xd010c010b011601;
    uVar14 = 0x110110010f010e01;
    uVar16 = 0x1501140113011201;
LAB_7101df2f54:
    puVar19 = puVar7 + 4;
    *puVar7 = uVar10;
    puVar7[1] = uVar14;
    *(undefined4 *)(puVar7 + 3) = 0x9010801;
    puVar11 = (undefined8 *)((long)puVar7 + 0x1e);
    puVar7[2] = uVar16;
    *(undefined2 *)((long)puVar7 + 0x1c) = 0xa01;
  }
  else {
    if (param_2 == '\x01') {
      puVar7 = (undefined8 *)
               FUN_710392e290(0x10,0x20,(long ****)param_3,param_4,param_5,param_6,param_7,param_8);
      if (puVar7 == (undefined8 *)0x0) {
        if (DAT_7105332f00 != (long *)0x0) {
          local_c8 = (undefined **)((ulong)local_c8 & 0xffffffff00000000);
          local_b8 = (long ********)&SUB_00000020;
          param_3 = &local_b8;
          uVar8 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_c8);
          if (((uVar8 & 1) != 0) &&
             (puVar7 = (undefined8 *)
                       FUN_710392e290(0x10,0x20,(long ****)param_3,param_4,param_5,param_6,param_7,
                                      param_8), puVar7 != (undefined8 *)0x0)) goto LAB_7101df2f24;
        }
        puVar7 = (undefined8 *)0x0;
      }
LAB_7101df2f24:
      uVar10 = 0xe010d010c010b01;
      uVar14 = 0x1201110110010f01;
      uVar16 = 0x150114011301;
      goto LAB_7101df2f54;
    }
    if (param_2 != '\0') {
      puVar7 = (undefined8 *)0x0;
      puVar19 = (undefined8 *)0x0;
      goto LAB_7101df2f88;
    }
    puVar7 = (undefined8 *)
             FUN_710392e290(0x10,0x12,(long ****)param_3,param_4,param_5,param_6,param_7,param_8);
    if (puVar7 == (undefined8 *)0x0) {
      if (DAT_7105332f00 != (long *)0x0) {
        local_c8 = (undefined **)((ulong)local_c8 & 0xffffffff00000000);
        local_b8 = (long ********)&DAT_00000012;
        param_3 = &local_b8;
        uVar8 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_c8);
        if (((uVar8 & 1) != 0) &&
           (puVar7 = (undefined8 *)
                     FUN_710392e290(0x10,0x12,(long ****)param_3,param_4,param_5,param_6,param_7,
                                    param_8), puVar7 != (undefined8 *)0x0)) goto LAB_7101df2e04;
      }
      puVar7 = (undefined8 *)0x0;
    }
LAB_7101df2e04:
    puVar19 = (undefined8 *)((long)puVar7 + 0x12);
    *puVar7 = 0x301020101010001;
    puVar7[1] = 0x701060105010401;
    puVar11 = puVar7 + 2;
  }
  *(undefined2 *)puVar11 = 0x1701;
LAB_7101df2f88:
  puVar11 = (undefined8 *)(param_1 + 0x100);
  if (*(char *)(param_1 + 0x248) != '\0') {
    puVar11 = (undefined8 *)(param_1 + 400);
  }
  (**(code **)(*(long *)puVar11[2] + 0x60))((long *)puVar11[2],0);
  *(char *)(param_1 + 0x248) = param_2;
  puVar11 = (undefined8 *)(param_1 + 0x100);
  if (param_2 != '\0') {
    puVar11 = (undefined8 *)(param_1 + 400);
  }
  uVar10 = extraout_x1;
  if (*(char *)((long)puVar11 + 9) == '\0') {
    uVar8 = (long)puVar19 - (long)puVar7;
  }
  else {
    uVar8 = (long)puVar19 - (long)puVar7;
    uVar23 = 0;
    do {
      if ((ulong)((long)(puVar11[4] - puVar11[3]) >> 1) <= uVar23) {
                    /* WARNING: Subroutine does not return */
        std::__vector_base_common<true>::__throw_out_of_range();
      }
      puVar1 = (ushort *)(puVar11[3] + uVar23 * 2);
      if (uVar23 < (ulong)((long)uVar8 >> 1)) {
        uVar21 = *(ushort *)((long)puVar7 + uVar23 * 2);
        *puVar1 = uVar21;
      }
      else {
        uVar21 = 0;
        *(undefined1 *)puVar1 = 0;
      }
      lVar12 = *(long *)(puVar11[2] + 0x1b8);
      if (lVar12 != 0) {
        lVar15 = puVar11[2] + 0x1b8;
        lVar17 = lVar15;
        lVar18 = lVar12;
        do {
          iVar22 = (int)uVar23;
          if (iVar22 <= *(int *)(lVar18 + 0x20)) {
            lVar17 = lVar18;
          }
          lVar18 = *(long *)(lVar18 + (ulong)(*(int *)(lVar18 + 0x20) < iVar22) * 8);
        } while (lVar18 != 0);
        if (((lVar17 != lVar15) && (*(int *)(lVar17 + 0x20) <= iVar22)) &&
           (plVar20 = *(long **)(lVar17 + 0x28), plVar20 != (long *)0x0)) {
          bVar6 = (uVar21 & 0xff) == 0;
          (**(code **)(*plVar20 + 0x208))(plVar20,!bVar6);
          param_3 = (long *********)0x0;
          (**(code **)(*plVar20 + 0x388))(plVar20,bVar6);
          lVar15 = puVar11[2] + 0x1b8;
          lVar12 = *(long *)(puVar11[2] + 0x1b8);
          uVar10 = extraout_x1_00;
        }
        lVar17 = lVar15;
        if (lVar12 != 0) {
          do {
            if (iVar22 <= *(int *)(lVar12 + 0x20)) {
              lVar17 = lVar12;
            }
            lVar12 = *(long *)(lVar12 + (ulong)(*(int *)(lVar12 + 0x20) < iVar22) * 8);
          } while (lVar12 != 0);
          if (((lVar17 != lVar15) && (*(int *)(lVar17 + 0x20) <= iVar22)) &&
             (plVar20 = *(long **)(lVar17 + 0x28), plVar20 != (long *)0x0)) {
            bVar6 = (uVar21 & 0xff) == 0;
            (**(code **)(*plVar20 + 0x1f8))(plVar20,!bVar6);
            param_3 = (long *********)0x0;
            (**(code **)(*plVar20 + 0x388))(plVar20,bVar6);
            uVar10 = extraout_x1_01;
          }
        }
      }
      if ((ulong)((long)(puVar11[7] - puVar11[6]) >> 4) <= uVar23) {
LAB_7101df35c0:
                    /* WARNING: Subroutine does not return */
        std::__vector_base_common<true>::__throw_out_of_range();
      }
      lVar12 = *(long *)(*(long *)(puVar11[6] + uVar23 * 0x10 + 8) + 8);
      if ((lVar12 != 0) && (lVar12 = *(long *)(lVar12 + 0x18), lVar12 != 0)) {
        *(byte *)(lVar12 + 0x58) = *(byte *)(lVar12 + 0x58) & 0xfe | (uVar21 & 0xff) != 0;
      }
      if ((uVar21 & 0xff) == 0) goto LAB_7101df3544;
      if ((ulong)((long)(puVar11[7] - puVar11[6]) >> 4) <= uVar23) goto LAB_7101df35c0;
      bVar3 = *(byte *)((long)puVar1 + 1);
      lVar12 = puVar11[6] + uVar23 * 0x10;
      bVar4 = bVar3 - 0xb;
      pcVar2 = "icon_text";
      if (10 < bVar4) {
        pcVar2 = "center_text";
      }
      FUN_7103778300(0x3f800000,*(long *)(lVar12 + 8),(long)pcVar2);
      FUN_7103776910(&local_c8,lVar12,(long ****)"set_txt_title_00",param_3,param_4,param_5,param_6,
                     param_7,param_8);
      switch(bVar3) {
      case 0:
      case 1:
      case 2:
      case 3:
        FUN_71003a4ca0((uint *)&local_b8,"mnu_spirits_select_refine_sort_%02d",
                       (ulong)(bVar3 + 1 & 0xff),param_3,param_4,param_5,param_6,param_7,param_8);
        puVar9 = local_b0;
        break;
      case 4:
      case 5:
      case 6:
      case 7:
        if ((bVar3 & 0xfc) == 4) {
          param_4 = (byte ****)(ulong)(byte)(bVar3 - 4);
          param_3 = (long *********)0x1;
          FUN_710377a280((long)&local_c8,(byte *)"mnu_spirits_select_refine_slot_n",1);
        }
        goto LAB_7101df33a4;
      case 8:
      case 9:
      case 10:
        param_4 = (byte ****)(ulong)(byte)(bVar3 - 7);
        param_3 = (long *********)0x1;
        FUN_710377a280((long)&local_c8,(byte *)"mnu_spirits_select_refine_cost_n",1);
        goto LAB_7101df33a4;
      default:
        if (bVar4 < 0xb) {
          uVar13 = (&DAT_7104549048)[bVar4] & 0xffffffffff;
          if (uVar13 < 0x16a40aee0d) {
            if (uVar13 < 0x14a182eb21) {
              if (uVar13 == 0x132797909b) {
                puVar9 = (ulong *)"mnu_spirits_select_refine_ice_floor";
              }
              else if (uVar13 == 0x136e70f986) {
                puVar9 = (ulong *)"mnu_spirits_select_refine_mist";
              }
              else {
LAB_7101df313c:
                puVar9 = (ulong *)&DAT_7104867c2e;
              }
            }
            else if (uVar13 == 0x14a182eb21) {
              puVar9 = (ulong *)"mnu_spirits_select_refine_wind";
            }
            else if (uVar13 == 0x1519df8456) {
              puVar9 = (ulong *)"mnu_spirits_select_refine_sleep_floor";
            }
            else {
              puVar9 = (ulong *)"mnu_spirits_select_refine_damage_floor";
              if (uVar13 != 0x164cb6a328) goto LAB_7101df313c;
            }
          }
          else if (uVar13 < 0x1872c0169a) {
            if (uVar13 == 0x16a40aee0d) {
              puVar9 = (ulong *)"mnu_spirits_select_refine_poison";
            }
            else if (uVar13 == 0x1713945e8e) {
              puVar9 = (ulong *)"mnu_spirits_select_refine_electric_floor";
            }
            else {
              if (uVar13 != 0x172bf1ded9) goto LAB_7101df313c;
              puVar9 = (ulong *)"mnu_spirits_select_refine_gravity_change";
            }
          }
          else if (uVar13 == 0x1872c0169a) {
            puVar9 = (ulong *)"mnu_spirits_select_refine_sticky_floor";
          }
          else if (uVar13 == 0x1d7837f9cd) {
            puVar9 = (ulong *)"mnu_spirits_select_refine_con_reverse";
          }
          else {
            if (uVar13 != 0x1ef8a9e952) goto LAB_7101df313c;
            puVar9 = (ulong *)"mnu_spirits_select_refine_screen_inversion";
          }
          break;
        }
        FUN_7103776910(&local_b8,lVar12,(long ****)"set_icon_skill_00",param_3,param_4,param_5,
                       param_6,param_7,param_8);
        FUN_7103776910(&local_d8,lVar12,(long ****)"set_icon_skill_01",param_3,param_4,param_5,
                       param_6,param_7,param_8);
        goto LAB_7101df34f4;
      case 0x16:
        puVar9 = (ulong *)"mnu_spirits_select_refine_auto";
        break;
      case 0x17:
        puVar9 = (ulong *)"mnu_spirits_select_refine_favorite";
      }
      FUN_710377a120((long)&local_c8,(char *)puVar9,param_3,param_4,param_5,param_6,param_7,param_8)
      ;
LAB_7101df33a4:
      FUN_7103776910(&local_b8,lVar12,(long ****)"set_icon_skill_00",param_3,param_4,param_5,param_6
                     ,param_7,param_8);
      FUN_7103776910(&local_d8,lVar12,(long ****)"set_icon_skill_01",param_3,param_4,param_5,param_6
                     ,param_7,param_8);
      if (bVar4 < 0xb) {
        plVar20 = FUN_710323f760((long *)*puVar11,(&DAT_7104549048)[bVar4],(long ****)param_3,
                                 param_4,param_5,param_6,param_7,param_8);
        uVar5 = local_b0[0];
        FUN_7103778b80(local_b0[0],(long)plVar20,param_3,param_4,param_5,param_6,param_7,param_8);
        uVar13 = local_d0;
        FUN_7103778b80(local_d0,(long)plVar20,param_3,param_4,param_5,param_6,param_7,param_8);
        uVar10 = extraout_x1_02;
      }
      else {
LAB_7101df34f4:
        uVar5 = local_b0[0];
        FUN_71037790a0(local_b0[0],1,param_3,param_4,param_5,param_6,param_7,param_8);
        uVar13 = local_d0;
        FUN_71037790a0(local_d0,1,param_3,param_4,param_5,param_6,param_7,param_8);
        uVar10 = extraout_x1_03;
      }
      local_d0 = 0;
      local_d8 = &PTR_FUN_710523d9a8;
      if (uVar13 != 0) {
        local_d0 = 0;
        local_d8 = &PTR_FUN_710523d9a8;
        FUN_710392eb40(uVar13);
        uVar10 = extraout_x1_04;
      }
      local_b8 = (long ********)&PTR_FUN_710523d9a8;
      local_b0[0] = 0;
      if (uVar5 != 0) {
        FUN_710392eb40(uVar5);
        uVar10 = extraout_x1_05;
      }
      uVar13 = local_c0;
      local_c8 = &PTR_FUN_710523d9a8;
      local_c0 = 0;
      if (uVar13 != 0) {
        FUN_710392eb40(uVar13);
        uVar10 = extraout_x1_06;
      }
LAB_7101df3544:
      uVar23 = uVar23 + 1;
    } while (uVar23 < *(byte *)((long)puVar11 + 9));
  }
  *(char *)((long)puVar11 + 0x49) = (char)(uVar8 >> 1) + -1;
  *(undefined1 *)((long)puVar11 + 0x4a) = 0;
  puVar11[0xb] = puVar11[0xb] & 0xffffffffff000000;
  FUN_7101df2450((long)puVar11,uVar10,param_3,param_4,param_5,param_6,param_7,param_8);
  (**(code **)(*(long *)puVar11[2] + 0x60))((long *)puVar11[2],1);
  if (puVar7 != (undefined8 *)0x0) {
    FUN_710392eb40((ulong)puVar7);
  }
  return;
}

