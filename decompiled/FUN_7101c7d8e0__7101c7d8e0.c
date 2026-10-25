// addr:      7101c7d8e0
// offset:    0x1c7d8e0
// name:      FUN_7101c7d8e0
// mangled:   
// signature: undefined __cdecl FUN_7101c7d8e0(long param_1, undefined8 * param_2, undefined * * param_3, undefined2 * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_7101c7d8e0(long param_1,undefined8 *param_2,undefined **param_3,undefined2 *param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long lVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long lVar5;
  long *plVar6;
  ulong uVar7;
  long *plVar8;
  ulong uVar9;
  char *pcVar10;
  long *********ppppppppplVar11;
  byte ****ppppbVar12;
  long ****pppplVar13;
  undefined8 uVar14;
  byte *pbVar15;
  uint uVar16;
  uint uVar17;
  long lVar18;
  uint uVar19;
  long lVar20;
  undefined **local_968;
  ulong local_960;
  long ********local_958;
  ulong local_950;
  undefined8 local_550;
  byte local_548;
  undefined4 uStack_547;
  undefined3 uStack_543;
  undefined5 local_540;
  undefined3 uStack_53b;
  undefined2 local_538;
  undefined8 local_536;
  undefined4 local_52e;
  undefined2 local_52a;
  ulong local_528;
  uint local_520;
  undefined1 local_51c;
  undefined8 local_4fc;
  undefined2 local_4f4;
  undefined1 local_f4;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined2 local_e0;
  undefined1 local_b0;
  char cStack_af;
  undefined1 uStack_ae;
  undefined1 uStack_ad;
  undefined2 uStack_ac;
  undefined2 uStack_aa;
  undefined6 uStack_a8;
  undefined2 uStack_a2;
  undefined6 uStack_a0;
  undefined2 local_9a;
  undefined1 local_98;
  undefined8 local_94;
  undefined8 local_8c;
  undefined8 local_84;
  undefined4 local_7c;
  
  lVar18 = *(long *)*param_2;
  lVar1 = lVar18 + 8;
  FUN_7103778300(0x3f800000,*(long *)(lVar18 + 0x10),0x710424fac6);
  bVar3 = FUN_7101704ba0(*(long *)(DAT_71052c4c58 + 8) + 0xa0);
  if ((bVar3) || (*(char *)(param_1 + 0x216) != '\x03')) {
    uVar7 = FUN_7101797350(0);
    if (((uVar7 & 1) == 0) && (*(char *)(param_1 + 0x216) == '\b')) {
      lVar5 = *(long *)(lVar18 + 0x10);
      pcVar10 = "btn_disp_off_01";
      goto LAB_7101c7d9e0;
    }
    lVar5 = *(long *)(lVar18 + 0x10);
    if ((*(byte *)(param_1 + 0x11d) & 0x3f) <= (*(byte *)(param_1 + 0x11c) & 0x3f)) {
      pcVar10 = "btn_disp_off";
      goto LAB_7101c7d9e0;
    }
    FUN_7103778300(0x3f800000,lVar5,0x710424f5cd);
    plVar6 = *(long **)(*(long *)(param_1 + 0x108) + 0x180);
    uVar7 = *(long *)(*(long *)(param_1 + 0x108) + 0x188) - (long)plVar6;
    if ((int)(uVar7 >> 3) < 1) {
      ppppbVar12 = (byte ****)0x0;
    }
    else {
      if (uVar7 == 0) goto LAB_7101c7e7e0;
      ppppbVar12 = *(byte *****)(*plVar6 + 0x88);
    }
    FUN_7103776640(&local_958,lVar1,ppppbVar12,param_3,param_4,param_5,param_6,param_7,param_8);
    FUN_7103776910(&local_550,(long)&local_958,(long ****)"set_txt_name",param_3,param_4,param_5,
                   param_6,param_7,param_8);
    FUN_710377a120((long)&local_550,"mnu_online_room_cancel_btn",param_3,param_4,param_5,param_6,
                   param_7,param_8);
    uVar7 = CONCAT35(uStack_543,CONCAT41(uStack_547,local_548));
    local_550 = &PTR_FUN_710523d9a8;
    local_548 = 0;
    uStack_547 = 0;
    uStack_543 = 0;
    if (uVar7 != 0) {
      FUN_710392eb40(uVar7);
    }
    uVar7 = local_950;
    local_958 = (long ********)&PTR_FUN_710523d988;
    local_950 = 0;
    if (uVar7 != 0) {
      uVar9 = *(ulong *)(uVar7 + 0x18);
      *(undefined ***)(uVar7 + 0x10) = &PTR_FUN_710523d9a8;
      *(undefined8 *)(uVar7 + 0x18) = 0;
      if (uVar9 != 0) {
        FUN_710392eb40(uVar9);
      }
      FUN_710392eb40(uVar7);
    }
    if (*(int *)(param_1 + 0x114) == 2) {
      lVar5 = *(long *)(*(long *)(param_1 + 0x108) + 0x180);
      uVar7 = *(long *)(*(long *)(param_1 + 0x108) + 0x188) - lVar5;
      if ((int)(uVar7 >> 3) < 2) {
        ppppbVar12 = (byte ****)0x0;
      }
      else {
        if ((ulong)((long)uVar7 >> 3) < 2) {
LAB_7101c7e7e0:
                    /* WARNING: Subroutine does not return */
          std::__vector_base_common<true>::__throw_out_of_range();
        }
        ppppbVar12 = *(byte *****)(*(long *)(lVar5 + 8) + 0x88);
      }
      FUN_7103776640(&local_958,lVar1,ppppbVar12,param_3,param_4,param_5,param_6,param_7,param_8);
      FUN_7103776910(&local_550,(long)&local_958,(long ****)"set_txt_name",param_3,param_4,param_5,
                     param_6,param_7,param_8);
      pcVar10 = "mnu_online_room_participate_btn";
    }
    else {
      lVar5 = *(long *)(*(long *)(param_1 + 0x108) + 0x180);
      uVar7 = *(long *)(*(long *)(param_1 + 0x108) + 0x188) - lVar5;
      if ((int)(uVar7 >> 3) < 2) {
        ppppbVar12 = (byte ****)0x0;
      }
      else {
        if ((ulong)((long)uVar7 >> 3) < 2) goto LAB_7101c7e7e0;
        ppppbVar12 = *(byte *****)(*(long *)(lVar5 + 8) + 0x88);
      }
      FUN_7103776640(&local_958,lVar1,ppppbVar12,param_3,param_4,param_5,param_6,param_7,param_8);
      FUN_7103776910(&local_550,(long)&local_958,(long ****)"set_txt_name",param_3,param_4,param_5,
                     param_6,param_7,param_8);
      pcVar10 = "mnu_online_room_create_make_btn";
    }
    FUN_710377a120((long)&local_550,pcVar10,param_3,param_4,param_5,param_6,param_7,param_8);
    uVar7 = CONCAT35(uStack_543,CONCAT41(uStack_547,local_548));
    local_550 = &PTR_FUN_710523d9a8;
    local_548 = 0;
    uStack_547 = 0;
    uStack_543 = 0;
    if (uVar7 != 0) {
      FUN_710392eb40(uVar7);
    }
    uVar7 = local_950;
    local_958 = (long ********)&PTR_FUN_710523d988;
    local_950 = 0;
    if (uVar7 != 0) {
      uVar9 = *(ulong *)(uVar7 + 0x18);
      *(undefined ***)(uVar7 + 0x10) = &PTR_FUN_710523d9a8;
      *(undefined8 *)(uVar7 + 0x18) = 0;
      if (uVar9 != 0) {
        FUN_710392eb40(uVar9);
      }
      FUN_710392eb40(uVar7);
    }
  }
  else {
    lVar5 = *(long *)(lVar18 + 0x10);
    pcVar10 = "btn_disp_off_00";
LAB_7101c7d9e0:
    FUN_7103778300(0x3f800000,lVar5,(long)pcVar10);
  }
  if (*(char *)(param_1 + 0x1c0) == '\x02') {
    FUN_7103778300(0x3f800000,*(long *)(lVar18 + 0x10),0x710437c611);
    lVar5 = *(long *)(lVar18 + 0x10);
    pcVar10 = "baln_tit_fri";
  }
  else {
    FUN_7103778300(0x3f800000,*(long *)(lVar18 + 0x10),0x7104422465);
    lVar5 = *(long *)(lVar18 + 0x10);
    pcVar10 = "baln_tit_any";
  }
  FUN_7103778300(0x3f800000,lVar5,(long)pcVar10);
  if (*(char *)(param_1 + 0x11f) == '\0') {
    FUN_7103776910(&local_550,lVar1,(long ****)"set_txt_00",param_3,param_4,param_5,param_6,param_7,
                   param_8);
    pcVar10 = "mnu_online_room_search_password_not";
LAB_7101c7dad8:
    FUN_710377a120((long)&local_550,pcVar10,param_3,param_4,param_5,param_6,param_7,param_8);
  }
  else {
    if (*(int *)(param_1 + 0x114) != 1) {
      FUN_7103776910(&local_550,lVar1,(long ****)"set_txt_00",param_3,param_4,param_5,param_6,
                     param_7,param_8);
      pcVar10 = "mnu_online_room_search_password";
      goto LAB_7101c7dad8;
    }
    if (((DAT_71053144d8 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_71053144d8), iVar4 != 0)) {
      FUN_7101764000();
      param_3 = &PTR_LOOP_7104f17000;
      FUN_71000001c0();
      __cxa_guard_release(&DAT_71053144d8);
    }
    FUN_7103776910(&local_550,lVar1,(long ****)"set_txt_00",param_3,param_4,param_5,param_6,param_7,
                   param_8);
    param_4 = &DAT_7105306ee4;
    param_3 = (undefined **)0x1;
    FUN_710377a280((long)&local_550,(byte *)"mnu_online_room_create_password",1);
  }
  uVar7 = CONCAT35(uStack_543,CONCAT41(uStack_547,local_548));
  local_550 = &PTR_FUN_710523d9a8;
  local_548 = 0;
  uStack_547 = 0;
  uStack_543 = 0;
  if (uVar7 != 0) {
    FUN_710392eb40(uVar7);
  }
  FUN_7103776910(&local_550,lVar1,(long ****)"set_txt_hd_title",param_3,param_4,param_5,param_6,
                 param_7,param_8);
  uVar7 = CONCAT35(uStack_543,CONCAT41(uStack_547,local_548));
  if (*(long **)(uVar7 + 0x10) != (long *)0x0) {
    param_3 = (undefined **)&DAT_ffffffff;
    param_4 = (undefined2 *)0x1;
    FUN_71037a2270(*(long **)(uVar7 + 0x10),(ushort *)(param_1 + 0x1e0),0xffffffff,1);
  }
  local_550 = &PTR_FUN_710523d9a8;
  local_548 = 0;
  uStack_547 = 0;
  uStack_543 = 0;
  if (uVar7 != 0) {
    FUN_710392eb40(uVar7);
  }
  FUN_7103776640(&local_550,lVar1,(byte ****)"set_parts_header_btn",param_3,param_4,param_5,param_6,
                 param_7,param_8);
  ppppppppplVar11 = (long *********)(ulong)*(uint *)(param_1 + 0x114);
  pppplVar13 = *(long *****)(param_1 + 0x10);
  ppppbVar12 = (byte ****)0x0;
  FUN_7101c7ebd0((long)&local_550,param_1 + 0x118,ppppppppplVar11,(byte ****)0x0,pppplVar13,param_6,
                 param_7,param_8);
  plVar6 = (long *)FUN_710392e290(0x10,8,(long ****)ppppppppplVar11,ppppbVar12,pppplVar13,param_6,
                                  param_7,param_8);
  if (plVar6 == (long *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_968 = (undefined **)((ulong)local_968 & 0xffffffff00000000);
      local_958 = (long ********)&DAT_00000008;
      ppppppppplVar11 = &local_958;
      uVar7 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_968);
      if (((uVar7 & 1) != 0) &&
         (plVar6 = (long *)FUN_710392e290(0x10,8,(long ****)ppppppppplVar11,ppppbVar12,pppplVar13,
                                          param_6,param_7,param_8), plVar6 != (long *)0x0))
      goto LAB_7101c7dbd4;
    }
    plVar6 = (long *)0x0;
  }
LAB_7101c7dbd4:
  *plVar6 = 0;
  lVar5 = *(long *)(CONCAT35(uStack_543,CONCAT41(uStack_547,local_548)) + 8);
  if ((lVar5 == 0) || (*(long *)(lVar5 + 0x60) == 0)) {
    *plVar6 = 0;
  }
  else {
    plVar8 = (long *)FUN_7103796f20(*(long *)(lVar5 + 0x60),*(long *)(lVar5 + 0x18) + 0xb0);
    *plVar6 = (long)plVar8;
    if (plVar8 != (long *)0x0) {
      (**(code **)(*plVar8 + 0x218))(plVar8,1);
      (**(code **)(*plVar8 + 0x408))(plVar8);
      (**(code **)(*plVar8 + 1000))(plVar8,1);
      iVar4 = (**(code **)(*plVar8 + 0x140))(plVar8);
      if ((iVar4 != 6) && (iVar4 = (**(code **)(*plVar8 + 0x140))(plVar8), iVar4 != 1)) {
        (**(code **)(*plVar8 + 0x3f8))(plVar8);
      }
      uVar7 = (**(code **)(*plVar8 + 0x158))(plVar8);
      if ((uVar7 & 1) == 0) {
        (**(code **)(*plVar8 + 0x360))(plVar8);
      }
    }
  }
  FUN_710392eb40((ulong)plVar6);
  uVar7 = CONCAT35(uStack_543,CONCAT41(uStack_547,local_548));
  local_550 = &PTR_FUN_710523d988;
  local_548 = 0;
  uStack_547 = 0;
  uStack_543 = 0;
  if (uVar7 != 0) {
    uVar9 = *(ulong *)(uVar7 + 0x18);
    *(undefined ***)(uVar7 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar7 + 0x18) = 0;
    if (uVar9 != 0) {
      FUN_710392eb40(uVar9);
    }
    FUN_710392eb40(uVar7);
  }
  local_550 = (undefined **)0xffffffffffffffff;
  local_4fc = 0;
  local_4f4 = 0;
  local_f4 = 0;
  local_540 = 0;
  uStack_ac = 0x3c;
  local_548 = 0;
  uStack_547 = 0;
  uStack_543 = 0;
  local_f0 = 0xffffffffffffffff;
  local_e8 = 0;
  local_e0 = 0;
  local_b0 = 0;
  cStack_af = 0;
  uStack_ae = 0;
  uStack_aa = 0x503;
  uStack_a8 = 0x20000;
  uStack_a2 = 10;
  uStack_a0 = 0x10300010100;
  local_9a = 0x100;
  local_98 = 2;
  local_84 = 0xffffffffffffffff;
  local_8c = 0xffffffffffffffff;
  local_94 = 0xffffffffffffffff;
  local_7c = 0xffffffff;
  if (DAT_710532f730 != 0) {
    lVar20 = *(long *)(DAT_710532f730 + 8);
    lVar5 = *(long *)(lVar20 + 0x178);
    uVar7 = FUN_71032b23e0(*(long *)(lVar5 + 8),0xd56784f97);
    uVar9 = FUN_71032b1e40(lVar5,uVar7);
    if (-1 < (int)uVar9) {
      uVar7 = FUN_71032b1e40(*(long *)(lVar20 + 0x178),uVar7);
      lVar5 = (uVar7 >> 5 & 0x7ffffff) * 4;
      *(uint *)((long)&local_8c + lVar5 + 4) =
           *(uint *)((long)&local_8c + lVar5 + 4) & (1 << (ulong)((uint)uVar7 & 0x1f) ^ 0xffffffffU)
      ;
    }
  }
  uVar14 = *(undefined8 *)(param_1 + 0x12a);
  local_958 = (long ********)0x0;
  uStack_a8 = (undefined6)*(undefined8 *)(param_1 + 0x132);
  uStack_a2 = (undefined2)((ulong)*(undefined8 *)(param_1 + 0x132) >> 0x30);
  uStack_a0 = (undefined6)*(undefined8 *)(param_1 + 0x13a);
  local_9a = (undefined2)((ulong)*(undefined8 *)(param_1 + 0x13a) >> 0x30);
  local_b0 = (undefined1)uVar14;
  cStack_af = (char)((ulong)uVar14 >> 8);
  uStack_ae = (undefined1)((ulong)uVar14 >> 0x10);
  uStack_ad = (undefined1)((ulong)uVar14 >> 0x18);
  uStack_ac = (undefined2)((ulong)uVar14 >> 0x20);
  uStack_aa = (undefined2)((ulong)uVar14 >> 0x30);
  local_950 = local_950 & 0xffffffffffff0000;
  FUN_71017ab0c0((long)&local_550,&local_958);
  FUN_7103776640(&local_968,lVar1,(byte ****)"set_Parts_hd_u_cont_00",ppppppppplVar11,ppppbVar12,
                 pppplVar13,param_6,param_7,param_8);
  ppppbVar12 = *(byte *****)(param_1 + 0x10);
  ppppppppplVar11 = &local_958;
  FUN_7101c6fec0((long)&local_968,cStack_af,ppppppppplVar11,ppppbVar12,pppplVar13,param_6,param_7,
                 param_8);
  FUN_7103778300(0x3f800000,*(long *)(lVar18 + 0x10),0x71043ad84a);
  uVar7 = local_960;
  local_968 = &PTR_FUN_710523d988;
  local_960 = 0;
  if (uVar7 != 0) {
    uVar9 = *(ulong *)(uVar7 + 0x18);
    *(undefined ***)(uVar7 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar7 + 0x18) = 0;
    if (uVar9 != 0) {
      FUN_710392eb40(uVar9);
    }
    FUN_710392eb40(uVar7);
  }
  FUN_7101c6f7f0((uint *)&local_550,*(undefined1 *)(param_1 + 0x218));
  FUN_7103776910(&local_958,lVar1,(long ****)"set_txt_hd_b_cont_00",ppppppppplVar11,ppppbVar12,
                 pppplVar13,param_6,param_7,param_8);
  FUN_710377a120((long)&local_958,(char *)&local_548,ppppppppplVar11,ppppbVar12,pppplVar13,param_6,
                 param_7,param_8);
  uVar7 = local_950;
  local_958 = (long ********)&PTR_FUN_710523d9a8;
  local_950 = 0;
  if (uVar7 != 0) {
    FUN_710392eb40(uVar7);
  }
  FUN_7103776910(&local_550,lVar1,(long ****)"txt_sub_hd_00",ppppppppplVar11,ppppbVar12,pppplVar13,
                 param_6,param_7,param_8);
  FUN_710377a120((long)&local_550,"mnu_online_room_setting_stage",ppppppppplVar11,ppppbVar12,
                 pppplVar13,param_6,param_7,param_8);
  uVar7 = CONCAT35(uStack_543,CONCAT41(uStack_547,local_548));
  local_550 = &PTR_FUN_710523d9a8;
  local_548 = 0;
  uStack_547 = 0;
  uStack_543 = 0;
  if (uVar7 != 0) {
    FUN_710392eb40(uVar7);
  }
  uVar19 = 0x811c9dc5;
  uVar16 = uVar19;
  switch(*(undefined1 *)(param_1 + 0x136)) {
  case 4:
    local_550._4_4_ = 0x1c;
    local_540 = 0x6f725f656e;
    uStack_53b = 0x5f6d6f;
    local_538 = 0x7473;
    uStack_547 = 0x6f5f756e;
    uStack_543 = 0x696c6e;
    local_536 = 0x646e61725f656761;
    local_52e = (uint)local_52e._3_1_ << 0x18;
    local_52e = CONCAT22(local_52e._2_2_,0x6d6f);
    uVar17 = 0x6d;
    pbVar15 = (byte *)&uStack_547;
    do {
      uVar16 = uVar16 * 0x89 ^ uVar17;
      uVar17 = (uint)*pbVar15;
      pbVar15 = pbVar15 + 1;
    } while (uVar17 != 0);
    break;
  case 5:
    uStack_547 = 0x6f5f756e;
    uStack_543 = 0x696c6e;
    local_540 = 0x6f725f656e;
    uStack_53b = 0x5f6d6f;
    local_538 = 0x7473;
    local_550._4_4_ = 0x2c;
    local_536 = 0x646e61725f656761;
    local_52e = 0x625f6d6f;
    local_52a = 0x7461;
    local_51c = 0;
    local_528 = 0x646c656966656c74;
    local_520 = 0x646e655f;
    uVar17 = 0x6d;
    pbVar15 = (byte *)&uStack_547;
    do {
      uVar16 = uVar16 * 0x89 ^ uVar17;
      uVar17 = (uint)*pbVar15;
      pbVar15 = pbVar15 + 1;
    } while (uVar17 != 0);
    break;
  case 6:
    uStack_547 = 0x6f5f756e;
    uStack_543 = 0x696c6e;
    local_540 = 0x6f725f656e;
    uStack_53b = 0x5f6d6f;
    local_538 = 0x7473;
    local_550._4_4_ = 0x28;
    local_536 = 0x646e61725f656761;
    local_52e = 0x625f6d6f;
    local_52a = 0x7461;
    local_520 = local_520 & 0xffffff00;
    local_528 = 0x646c656966656c74;
    uVar17 = 0x6d;
    pbVar15 = (byte *)&uStack_547;
    do {
      uVar16 = uVar16 * 0x89 ^ uVar17;
      uVar17 = (uint)*pbVar15;
      pbVar15 = pbVar15 + 1;
    } while (uVar17 != 0);
    break;
  case 7:
    local_550._4_4_ = 0x20;
    uStack_547 = 0x6f5f756e;
    uStack_543 = 0x696c6e;
    local_540 = 0x6f725f656e;
    uStack_53b = 0x5f6d6f;
    local_538 = 0x7473;
    local_536 = 0x646e61725f656761;
    local_52e = 0x655f6d6f;
    local_52a = 0x646e;
    uVar17 = 0x6d;
    local_528 = local_528 & 0xffffffffffffff00;
    pbVar15 = (byte *)&uStack_547;
    do {
      uVar16 = uVar16 * 0x89 ^ uVar17;
      uVar17 = (uint)*pbVar15;
      pbVar15 = pbVar15 + 1;
    } while (uVar17 != 0);
    break;
  default:
    local_550._4_4_ = 0x27;
    local_540 = 0x6f725f656e;
    uStack_53b = 0x5f6d6f;
    local_538 = 0x7473;
    uStack_547 = 0x6f5f756e;
    uStack_543 = 0x696c6e;
    local_536 = 0x766572705f656761;
    local_52e = 0x73756f69;
    local_52a = 0x796c;
    local_528 = 0x7463656c65735f;
    uVar17 = 0x6d;
    pbVar15 = (byte *)&uStack_547;
    do {
      uVar16 = uVar16 * 0x89 ^ uVar17;
      uVar17 = (uint)*pbVar15;
      pbVar15 = pbVar15 + 1;
    } while (uVar17 != 0);
  }
  local_538 = 0x7473;
  uStack_53b = 0x5f6d6f;
  local_540 = 0x6f725f656e;
  uStack_543 = 0x696c6e;
  uStack_547 = 0x6f5f756e;
  local_548 = 0x6d;
  local_550 = (undefined **)CONCAT44(local_550._4_4_,uVar16);
  FUN_7103776910(&local_958,lVar1,(long ****)"set_txt_sub_hd_00",ppppppppplVar11,ppppbVar12,
                 pppplVar13,param_6,param_7,param_8);
  FUN_710377a120((long)&local_958,(char *)&local_548,ppppppppplVar11,ppppbVar12,pppplVar13,param_6,
                 param_7,param_8);
  uVar7 = local_950;
  local_958 = (long ********)&PTR_FUN_710523d9a8;
  local_950 = 0;
  if (uVar7 != 0) {
    FUN_710392eb40(uVar7);
  }
  if (*(char *)(param_1 + 0x231) == '\0') {
    uVar7 = 1;
    cVar2 = *(char *)(param_1 + 0x133);
  }
  else {
    uVar14 = 1;
    FUN_7103776910(&local_550,lVar1,(long ****)"txt_sub_hd_%02d",1,ppppbVar12,pppplVar13,param_6,
                   param_7,param_8);
    FUN_710377a120((long)&local_550,"mnu_online_room_setting_amiibo",uVar14,ppppbVar12,pppplVar13,
                   param_6,param_7,param_8);
    uVar7 = CONCAT35(uStack_543,CONCAT41(uStack_547,local_548));
    local_550 = &PTR_FUN_710523d9a8;
    local_548 = 0;
    uStack_547 = 0;
    uStack_543 = 0;
    if (uVar7 != 0) {
      FUN_710392eb40(uVar7);
    }
    for (uVar7 = 0; "mnu_online_room_amiibo_on"[uVar7] != 0; uVar7 = uVar7 + 2) {
      cVar2 = "mnu_online_room_amiibo_on"[uVar7 + 1];
      (&local_548)[uVar7] = "mnu_online_room_amiibo_on"[uVar7];
      if (cVar2 == '\0') {
        uVar7 = uVar7 + 1;
        break;
      }
      *(char *)((long)&uStack_547 + uVar7) = cVar2;
    }
    (&local_548)[uVar7 & 0xffffffff] = 0;
    uVar17 = (uint)local_548;
    uVar16 = uVar19;
    if (local_548 != 0) {
      pbVar15 = (byte *)&uStack_547;
      do {
        uVar16 = uVar16 * 0x89 ^ uVar17;
        uVar17 = (uint)*pbVar15;
        pbVar15 = pbVar15 + 1;
      } while (uVar17 != 0);
    }
    uVar14 = 1;
    local_550 = (undefined **)CONCAT44((int)uVar7,uVar16);
    FUN_7103776910(&local_958,lVar1,(long ****)"set_txt_sub_hd_%02d",1,ppppbVar12,pppplVar13,param_6
                   ,param_7,param_8);
    FUN_710377a120((long)&local_958,(char *)&local_548,uVar14,ppppbVar12,pppplVar13,param_6,param_7,
                   param_8);
    uVar7 = local_950;
    local_958 = (long ********)&PTR_FUN_710523d9a8;
    local_950 = 0;
    if (uVar7 != 0) {
      FUN_710392eb40(uVar7);
    }
    uVar7 = 2;
    cVar2 = *(char *)(param_1 + 0x133);
  }
  if (cVar2 != '\0') {
    uVar9 = uVar7;
    FUN_7103776910(&local_550,lVar1,(long ****)"txt_sub_hd_%02d",uVar7,ppppbVar12,pppplVar13,param_6
                   ,param_7,param_8);
    FUN_710377a120((long)&local_550,"mnu_online_room_setting_spirits",uVar9,ppppbVar12,pppplVar13,
                   param_6,param_7,param_8);
    uVar9 = CONCAT35(uStack_543,CONCAT41(uStack_547,local_548));
    local_550 = &PTR_FUN_710523d9a8;
    local_548 = 0;
    uStack_547 = 0;
    uStack_543 = 0;
    if (uVar9 != 0) {
      FUN_710392eb40(uVar9);
    }
    for (uVar9 = 0; "mnu_online_room_spirits_on"[uVar9] != 0; uVar9 = uVar9 + 2) {
      cVar2 = "mnu_online_room_spirits_on"[uVar9 + 1];
      (&local_548)[uVar9] = "mnu_online_room_spirits_on"[uVar9];
      if (cVar2 == '\0') {
        uVar9 = uVar9 + 1;
        break;
      }
      *(char *)((long)&uStack_547 + uVar9) = cVar2;
    }
    (&local_548)[uVar9 & 0xffffffff] = 0;
    uVar17 = (uint)local_548;
    uVar16 = uVar19;
    if (local_548 != 0) {
      pbVar15 = (byte *)&uStack_547;
      do {
        uVar16 = uVar16 * 0x89 ^ uVar17;
        uVar17 = (uint)*pbVar15;
        pbVar15 = pbVar15 + 1;
      } while (uVar17 != 0);
    }
    local_550 = (undefined **)CONCAT44((int)uVar9,uVar16);
    uVar9 = uVar7;
    FUN_7103776910(&local_958,lVar1,(long ****)"set_txt_sub_hd_%02d",uVar7,ppppbVar12,pppplVar13,
                   param_6,param_7,param_8);
    FUN_710377a120((long)&local_958,(char *)&local_548,uVar9,ppppbVar12,pppplVar13,param_6,param_7,
                   param_8);
    uVar9 = local_950;
    local_958 = (long ********)&PTR_FUN_710523d9a8;
    local_950 = 0;
    if (uVar9 != 0) {
      FUN_710392eb40(uVar9);
    }
    uVar7 = (ulong)((int)uVar7 + 1);
  }
  if (*(char *)(param_1 + 0x230) != '\0') {
    uVar9 = uVar7;
    FUN_7103776910(&local_550,lVar1,(long ****)"txt_sub_hd_%02d",uVar7,ppppbVar12,pppplVar13,param_6
                   ,param_7,param_8);
    FUN_710377a120((long)&local_550,"mnu_online_room_setting_stgcreate",uVar9,ppppbVar12,pppplVar13,
                   param_6,param_7,param_8);
    uVar9 = CONCAT35(uStack_543,CONCAT41(uStack_547,local_548));
    local_550 = &PTR_FUN_710523d9a8;
    local_548 = 0;
    uStack_547 = 0;
    uStack_543 = 0;
    if (uVar9 != 0) {
      FUN_710392eb40(uVar9);
    }
    for (uVar9 = 0; "mnu_online_room_stgcreate_on"[uVar9] != 0; uVar9 = uVar9 + 2) {
      cVar2 = "mnu_online_room_stgcreate_on"[uVar9 + 1];
      (&local_548)[uVar9] = "mnu_online_room_stgcreate_on"[uVar9];
      if (cVar2 == '\0') {
        uVar9 = uVar9 + 1;
        break;
      }
      *(char *)((long)&uStack_547 + uVar9) = cVar2;
    }
    (&local_548)[uVar9 & 0xffffffff] = 0;
    uVar16 = (uint)local_548;
    if (local_548 != 0) {
      pbVar15 = (byte *)&uStack_547;
      do {
        uVar19 = uVar19 * 0x89 ^ uVar16;
        uVar16 = (uint)*pbVar15;
        pbVar15 = pbVar15 + 1;
      } while (uVar16 != 0);
    }
    local_550 = (undefined **)CONCAT44((int)uVar9,uVar19);
    uVar9 = uVar7;
    FUN_7103776910(&local_958,lVar1,(long ****)"set_txt_sub_hd_%02d",uVar7,ppppbVar12,pppplVar13,
                   param_6,param_7,param_8);
    FUN_710377a120((long)&local_958,(char *)&local_548,uVar9,ppppbVar12,pppplVar13,param_6,param_7,
                   param_8);
    uVar9 = local_950;
    local_958 = (long ********)&PTR_FUN_710523d9a8;
    local_950 = 0;
    if (uVar9 != 0) {
      FUN_710392eb40(uVar9);
    }
    uVar7 = (ulong)((int)uVar7 + 1);
  }
  FUN_7103778430(lVar1,"detail_disp_%02d",uVar7,ppppbVar12,pppplVar13,param_6,param_7,param_8);
  pcVar10 = "vc_disp_on";
  if (*(char *)(param_1 + 0x232) != '\0') {
    pcVar10 = "vc_disp_off";
  }
  FUN_7103778300(0x3f800000,*(long *)(lVar18 + 0x10),(long)pcVar10);
  FUN_7103771a80((long *)(param_1 + 0x108),0,1);
  (**(code **)(**(long **)(param_1 + 0x108) + 0x70))(*(long **)(param_1 + 0x108),1);
  (**(code **)(**(long **)(param_1 + 0x108) + 0x60))(*(long **)(param_1 + 0x108),1);
  *(undefined4 *)(param_1 + 0x100) = 0;
  if (*(uint *)(param_1 + 0xec) < 0x13) {
    *(undefined4 *)(param_1 + (long)(int)*(uint *)(param_1 + 0xec) * 4 + 0xa0) = 3;
    return;
  }
                    /* WARNING: Subroutine does not return */
  abort();
}

