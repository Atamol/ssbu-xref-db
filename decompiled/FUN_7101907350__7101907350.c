// addr:      7101907350
// offset:    0x1907350
// name:      FUN_7101907350
// mangled:   
// signature: undefined __cdecl FUN_7101907350(long param_1, undefined8 param_2, long * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_7101907350(long param_1,undefined8 param_2,long ****param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  ushort uVar6;
  char cVar7;
  bool bVar8;
  int iVar9;
  uint uVar10;
  long *plVar11;
  long *plVar12;
  ulong uVar13;
  char *pcVar14;
  undefined8 uVar15;
  long ****pppplVar16;
  byte ****ppppbVar17;
  undefined8 uVar18;
  long ****pppplVar19;
  undefined2 *puVar20;
  ulong uVar21;
  int *piVar22;
  undefined1 uVar23;
  undefined4 uVar24;
  ulong uVar25;
  int iVar26;
  long lVar27;
  long lVar28;
  long lVar29;
  long lVar30;
  undefined1 auVar31 [16];
  undefined4 local_e0 [2];
  undefined **local_d8;
  long local_d0;
  undefined8 local_c8;
  undefined1 local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  ulong local_98;
  long ***local_90;
  ulong local_88;
  undefined **local_80;
  ulong local_78;
  undefined4 local_64;
  
  if (*(int *)(param_1 + 0x21c) == 0) {
    uVar6 = *(ushort *)(param_1 + 0x264);
    if (uVar6 >> 4 < 0x177) {
      puVar20 = (undefined2 *)(*(long *)(*DAT_7105329f98 + 0x30) + (ulong)uVar6 * 0x50 + 72000);
    }
    else {
      puVar20 = &DAT_710532a878;
      if (((ushort)(uVar6 + 0xe890) < 100) &&
         (lVar27 = *(long *)(*DAT_7105329f98 + 0x30) + (ulong)(ushort)(uVar6 + 0xe890) * 0x50,
         *(short *)(lVar27 + 0x88cc8) != -1)) {
        puVar20 = (undefined2 *)(lVar27 + 0x88cc0);
      }
    }
    uVar21 = (ulong)(short)puVar20[4];
    lVar27 = *(long *)(*(long *)(DAT_710532f730 + 8) + 0x1d8);
    if (uVar21 != 0xffffffffffffffff) {
      uVar21 = (ulong)*(ushort *)(lVar27 + uVar21 * 2 + 0x60);
    }
    lVar29 = *(long *)(param_1 + 0x240);
    lVar30 = *(long *)(lVar29 + 0x80);
    uVar15 = 0x10fff;
    uVar25 = (*(long *)(lVar27 + 0x28) - *(long *)(lVar27 + 0x20) >> 6) * -0x3333333333333333;
    puVar20 = (undefined2 *)(*(long *)(lVar27 + 0x20) + uVar21 * 0x140);
    if (uVar25 < uVar21 || uVar25 - uVar21 == 0) {
      puVar20 = &DAT_7105182b08;
    }
    uVar23 = *(undefined1 *)(puVar20 + 0x36);
    FUN_7103775dc0((long *)**(undefined8 **)(lVar30 + 8),1,(long ****)0x10fff,param_4,param_5,
                   param_6,param_7,param_8);
    lVar27 = lVar30 + 0x10;
    FUN_7103778300(0x3f800000,*(long *)(lVar30 + 0x18),0x7104421055);
    *(undefined1 *)(lVar30 + 0x54) = uVar23;
    plVar11 = DAT_7105314510;
    *(uint *)(lVar30 + 0x2c) =
         (uint)*(ushort *)(*(long *)**(undefined8 **)(*DAT_7105314510 + 0xd8) + 0xe);
    *(uint *)(lVar30 + 0x30) = (uint)*(ushort *)(*(long *)**(undefined8 **)(*plVar11 + 0xd8) + 0x10)
    ;
    *(uint *)(lVar30 + 0x34) = (uint)*(ushort *)(*(long *)**(undefined8 **)(*plVar11 + 0xd8) + 0x12)
    ;
    lVar28 = *DAT_7105329f98;
    iVar9 = FUN_7102528ac0(*(byte **)(lVar28 + 0x30),0);
    *(int *)(lVar30 + 0x38) = iVar9;
    iVar9 = FUN_7102528ac0(*(byte **)(lVar28 + 0x30),1);
    *(int *)(lVar30 + 0x3c) = iVar9;
    iVar9 = FUN_7102528ac0(*(byte **)(lVar28 + 0x30),2);
    *(int *)(lVar30 + 0x40) = iVar9;
    iVar9 = FUN_7102528ac0(*(byte **)(lVar28 + 0x30),3);
    *(int *)(lVar30 + 0x44) = iVar9;
    iVar9 = FUN_7102528ac0(*(byte **)(lVar28 + 0x30),4);
    *(int *)(lVar30 + 0x48) = iVar9;
    FUN_7103776640(&local_80,lVar27,(byte ****)"set_parts_btn_00",uVar15,param_4,param_5,param_6,
                   param_7,param_8);
    FUN_7103776640(&local_90,(long)&local_80,(byte ****)"set_parts_icon_energy_l",uVar15,param_4,
                   param_5,param_6,param_7,param_8);
    uVar21 = local_88;
    FUN_7103778300(0x3f800000,local_88,0x71042920c0);
    local_90 = (long ***)&PTR_FUN_710523d988;
    local_88 = 0;
    if (uVar21 != 0) {
      uVar25 = *(ulong *)(uVar21 + 0x18);
      *(undefined ***)(uVar21 + 0x10) = &PTR_FUN_710523d9a8;
      *(undefined8 *)(uVar21 + 0x18) = 0;
      if (uVar25 != 0) {
        FUN_710392eb40(uVar25);
      }
      FUN_710392eb40(uVar21);
    }
    FUN_7103776640(&local_90,(long)&local_80,(byte ****)"set_parts_icon_energy_m",uVar15,param_4,
                   param_5,param_6,param_7,param_8);
    uVar21 = local_88;
    FUN_7103778300(0x3f800000,local_88,0x710434a86d);
    local_90 = (long ***)&PTR_FUN_710523d988;
    local_88 = 0;
    if (uVar21 != 0) {
      uVar25 = *(ulong *)(uVar21 + 0x18);
      *(undefined ***)(uVar21 + 0x10) = &PTR_FUN_710523d9a8;
      *(undefined8 *)(uVar21 + 0x18) = 0;
      if (uVar25 != 0) {
        FUN_710392eb40(uVar25);
      }
      FUN_710392eb40(uVar21);
    }
    FUN_7103776640(&local_90,(long)&local_80,(byte ****)"set_parts_icon_energy_s",uVar15,param_4,
                   param_5,param_6,param_7,param_8);
    uVar21 = local_88;
    FUN_7103778300(0x3f800000,local_88,0x710437ca5d);
    local_90 = (long ***)&PTR_FUN_710523d988;
    local_88 = 0;
    if (uVar21 != 0) {
      uVar25 = *(ulong *)(uVar21 + 0x18);
      *(undefined ***)(uVar21 + 0x10) = &PTR_FUN_710523d9a8;
      *(undefined8 *)(uVar21 + 0x18) = 0;
      if (uVar25 != 0) {
        FUN_710392eb40(uVar25);
      }
      FUN_710392eb40(uVar21);
    }
    FUN_7103776910(&local_90,(long)&local_80,(long ****)"set_txt_num_l",uVar15,param_4,param_5,
                   param_6,param_7,param_8);
    uVar25 = (ulong)*(uint *)(lVar30 + 0x34);
    uVar15 = 1;
    FUN_710377a280((long)&local_90,(byte *)"mnu_spirits_raise_energy_l_n",1);
    uVar21 = local_88;
    local_90 = (long ***)&PTR_FUN_710523d9a8;
    local_88 = 0;
    if (uVar21 != 0) {
      FUN_710392eb40(uVar21);
    }
    FUN_7103776910(&local_90,(long)&local_80,(long ****)"set_txt_num_m",uVar15,uVar25,param_5,
                   param_6,param_7,param_8);
    uVar25 = (ulong)*(uint *)(lVar30 + 0x30);
    uVar15 = 1;
    FUN_710377a280((long)&local_90,(byte *)"mnu_spirits_raise_energy_m_n",1);
    uVar21 = local_88;
    local_90 = (long ***)&PTR_FUN_710523d9a8;
    local_88 = 0;
    if (uVar21 != 0) {
      FUN_710392eb40(uVar21);
    }
    FUN_7103776910(&local_90,(long)&local_80,(long ****)"set_txt_num_s",uVar15,uVar25,param_5,
                   param_6,param_7,param_8);
    ppppbVar17 = (byte ****)(ulong)*(uint *)(lVar30 + 0x2c);
    pppplVar16 = (long ****)0x1;
    FUN_710377a280((long)&local_90,(byte *)"mnu_spirits_raise_energy_s_n",1);
    uVar21 = local_88;
    local_90 = (long ***)&PTR_FUN_710523d9a8;
    local_88 = 0;
    if (uVar21 != 0) {
      FUN_710392eb40(uVar21);
    }
    iVar9 = *(int *)(lVar30 + 0x30);
    iVar26 = *(int *)(lVar30 + 0x34);
    iVar4 = *(int *)(lVar30 + 0x2c);
    plVar11 = (long *)FUN_710392e290(0x10,8,pppplVar16,ppppbVar17,param_5,param_6,param_7,param_8);
    if (iVar9 + iVar26 + iVar4 == 0) {
      if (plVar11 == (long *)0x0) {
        if (DAT_7105332f00 != (long *)0x0) {
          local_a0 = (undefined **)((ulong)local_a0._4_4_ << 0x20);
          local_90 = (long ***)&DAT_00000008;
          pppplVar16 = &local_90;
          uVar21 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_a0);
          if (((uVar21 & 1) != 0) &&
             (plVar11 = (long *)FUN_710392e290(0x10,8,pppplVar16,ppppbVar17,param_5,param_6,param_7,
                                               param_8), plVar11 != (long *)0x0))
          goto LAB_7101907844;
        }
        plVar11 = (long *)0x0;
      }
LAB_7101907844:
      *plVar11 = 0;
      lVar28 = *(long *)(local_78 + 8);
      if ((lVar28 == 0) || (*(long *)(lVar28 + 0x60) == 0)) {
LAB_7101907984:
        *plVar11 = 0;
        uVar21 = local_78;
      }
      else {
        plVar12 = (long *)FUN_7103796f20(*(long *)(lVar28 + 0x60),*(long *)(lVar28 + 0x18) + 0xb0);
        *plVar11 = (long)plVar12;
        uVar21 = local_78;
        if (plVar12 != (long *)0x0) {
          (**(code **)(*plVar12 + 0x1f8))(plVar12,0);
          uVar25 = (**(code **)(*plVar12 + 0x200))(plVar12);
          if ((uVar25 & 1) == 0) {
            uVar10 = 1;
          }
          else {
            uVar10 = (**(code **)(*plVar12 + 0x210))(plVar12);
            uVar10 = uVar10 ^ 1;
          }
          pppplVar16 = (long ****)0x0;
          (**(code **)(*plVar12 + 0x388))(plVar12,uVar10 & 1);
        }
      }
    }
    else {
      if (plVar11 == (long *)0x0) {
        if (DAT_7105332f00 != (long *)0x0) {
          local_a0 = (undefined **)((ulong)local_a0._4_4_ << 0x20);
          local_90 = (long ***)&DAT_00000008;
          pppplVar16 = &local_90;
          uVar21 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_a0);
          if (((uVar21 & 1) != 0) &&
             (plVar11 = (long *)FUN_710392e290(0x10,8,pppplVar16,ppppbVar17,param_5,param_6,param_7,
                                               param_8), plVar11 != (long *)0x0))
          goto LAB_71019078fc;
        }
        plVar11 = (long *)0x0;
      }
LAB_71019078fc:
      *plVar11 = 0;
      lVar28 = *(long *)(local_78 + 8);
      if ((lVar28 == 0) || (*(long *)(lVar28 + 0x60) == 0)) goto LAB_7101907984;
      plVar12 = (long *)FUN_7103796f20(*(long *)(lVar28 + 0x60),*(long *)(lVar28 + 0x18) + 0xb0);
      *plVar11 = (long)plVar12;
      uVar21 = local_78;
      if (plVar12 != (long *)0x0) {
        uVar10 = 1;
        (**(code **)(*plVar12 + 0x1f8))(plVar12,1);
        uVar25 = (**(code **)(*plVar12 + 0x200))(plVar12);
        if ((uVar25 & 1) != 0) {
          uVar10 = (**(code **)(*plVar12 + 0x210))(plVar12);
          uVar10 = uVar10 ^ 1;
        }
        pppplVar16 = (long ****)0x0;
        (**(code **)(*plVar12 + 0x388))(plVar12,uVar10 & 1);
      }
    }
    FUN_710392eb40((ulong)plVar11);
    local_80 = &PTR_FUN_710523d988;
    local_78 = 0;
    if (uVar21 != 0) {
      uVar25 = *(ulong *)(uVar21 + 0x18);
      *(undefined ***)(uVar21 + 0x10) = &PTR_FUN_710523d9a8;
      *(undefined8 *)(uVar21 + 0x18) = 0;
      if (uVar25 != 0) {
        FUN_710392eb40(uVar25);
      }
      FUN_710392eb40(uVar21);
    }
    FUN_7103776640(&local_80,lVar27,(byte ****)"set_parts_btn_01",pppplVar16,ppppbVar17,param_5,
                   param_6,param_7,param_8);
    FUN_7103776640(&local_90,(long)&local_80,(byte ****)"set_parts_icon_base",pppplVar16,ppppbVar17,
                   param_5,param_6,param_7,param_8);
    uVar15 = 0xffffffff;
    uVar18 = 0;
    pppplVar19 = (long ****)0x0;
    FUN_71025b12c0((long)&local_90,1,-1,0,0,param_6,param_7,param_8);
    FUN_7103776910(&local_a0,(long)&local_80,(long ****)"set_txt_num_base",uVar15,uVar18,pppplVar19,
                   param_6,param_7,param_8);
    ppppbVar17 = (byte ****)(ulong)*(uint *)(lVar30 + 0x38);
    pppplVar16 = (long ****)0x1;
    FUN_710377a280((long)&local_a0,(byte *)"mnu_spirits_raise_pedestal_blow_n",1);
    uVar21 = local_98;
    local_a0 = &PTR_FUN_710523d9a8;
    local_98 = 0;
    if (uVar21 != 0) {
      FUN_710392eb40(uVar21);
    }
    iVar9 = *(int *)(lVar30 + 0x38);
    plVar11 = (long *)FUN_710392e290(0x10,8,pppplVar16,ppppbVar17,pppplVar19,param_6,param_7,param_8
                                    );
    if (iVar9 == 0) {
      if (plVar11 == (long *)0x0) {
        if (DAT_7105332f00 != (long *)0x0) {
          local_64 = 0;
          local_a0 = (undefined **)&DAT_00000008;
          pppplVar16 = (long ****)&local_a0;
          uVar21 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_64);
          if (((uVar21 & 1) != 0) &&
             (plVar11 = (long *)FUN_710392e290(0x10,8,pppplVar16,ppppbVar17,pppplVar19,param_6,
                                               param_7,param_8), plVar11 != (long *)0x0))
          goto LAB_7101907b88;
        }
        plVar11 = (long *)0x0;
      }
LAB_7101907b88:
      uVar21 = local_78;
      *plVar11 = 0;
      lVar28 = *(long *)(local_78 + 8);
      if ((lVar28 == 0) || (*(long *)(lVar28 + 0x60) == 0)) {
        *plVar11 = 0;
      }
      else {
        plVar12 = (long *)FUN_7103796f20(*(long *)(lVar28 + 0x60),*(long *)(lVar28 + 0x18) + 0xb0);
        *plVar11 = (long)plVar12;
        if (plVar12 != (long *)0x0) {
          (**(code **)(*plVar12 + 0x1f8))(plVar12,0);
          uVar25 = (**(code **)(*plVar12 + 0x200))(plVar12);
          if ((uVar25 & 1) == 0) {
            uVar10 = 1;
          }
          else {
            uVar10 = (**(code **)(*plVar12 + 0x210))(plVar12);
            uVar10 = uVar10 ^ 1;
          }
          pppplVar16 = (long ****)0x0;
          (**(code **)(*plVar12 + 0x388))(plVar12,uVar10 & 1);
        }
      }
      FUN_710392eb40((ulong)plVar11);
LAB_7101907e30:
      pcVar14 = "anim_off_atr_bonus";
    }
    else {
      if (plVar11 == (long *)0x0) {
        if (DAT_7105332f00 != (long *)0x0) {
          local_64 = 0;
          local_a0 = (undefined **)&DAT_00000008;
          pppplVar16 = (long ****)&local_a0;
          uVar21 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_64);
          if (((uVar21 & 1) != 0) &&
             (plVar11 = (long *)FUN_710392e290(0x10,8,pppplVar16,ppppbVar17,pppplVar19,param_6,
                                               param_7,param_8), plVar11 != (long *)0x0))
          goto LAB_7101907a90;
        }
        plVar11 = (long *)0x0;
      }
LAB_7101907a90:
      uVar21 = local_78;
      *plVar11 = 0;
      lVar28 = *(long *)(local_78 + 8);
      if ((lVar28 == 0) || (*(long *)(lVar28 + 0x60) == 0)) {
        *plVar11 = 0;
      }
      else {
        plVar12 = (long *)FUN_7103796f20(*(long *)(lVar28 + 0x60),*(long *)(lVar28 + 0x18) + 0xb0);
        *plVar11 = (long)plVar12;
        if (plVar12 != (long *)0x0) {
          uVar10 = 1;
          (**(code **)(*plVar12 + 0x1f8))(plVar12,1);
          uVar25 = (**(code **)(*plVar12 + 0x200))(plVar12);
          if ((uVar25 & 1) != 0) {
            uVar10 = (**(code **)(*plVar12 + 0x210))(plVar12);
            uVar10 = uVar10 ^ 1;
          }
          pppplVar16 = (long ****)0x0;
          (**(code **)(*plVar12 + 0x388))(plVar12,uVar10 & 1);
        }
      }
      FUN_710392eb40((ulong)plVar11);
      if (*(char *)(lVar30 + 0x54) != '\x01') goto LAB_7101907e30;
      pcVar14 = "anim_on_atr_bonus";
    }
    FUN_7103778300(0x3f800000,uVar21,(long)pcVar14);
    uVar25 = local_88;
    local_90 = (long ***)&PTR_FUN_710523d988;
    local_88 = 0;
    if (uVar25 != 0) {
      uVar13 = *(ulong *)(uVar25 + 0x18);
      *(undefined ***)(uVar25 + 0x10) = &PTR_FUN_710523d9a8;
      *(undefined8 *)(uVar25 + 0x18) = 0;
      if (uVar13 != 0) {
        FUN_710392eb40(uVar13);
      }
      FUN_710392eb40(uVar25);
    }
    local_80 = &PTR_FUN_710523d988;
    local_78 = 0;
    if (uVar21 != 0) {
      uVar25 = *(ulong *)(uVar21 + 0x18);
      *(undefined ***)(uVar21 + 0x10) = &PTR_FUN_710523d9a8;
      *(undefined8 *)(uVar21 + 0x18) = 0;
      if (uVar25 != 0) {
        FUN_710392eb40(uVar25);
      }
      FUN_710392eb40(uVar21);
    }
    FUN_7103776640(&local_80,lVar27,(byte ****)"set_parts_btn_02",pppplVar16,ppppbVar17,pppplVar19,
                   param_6,param_7,param_8);
    FUN_7103776640(&local_90,(long)&local_80,(byte ****)"set_parts_icon_base",pppplVar16,ppppbVar17,
                   pppplVar19,param_6,param_7,param_8);
    uVar15 = 0xffffffff;
    uVar18 = 0;
    pppplVar19 = (long ****)0x0;
    FUN_71025b12c0((long)&local_90,2,-1,0,0,param_6,param_7,param_8);
    FUN_7103776910(&local_a0,(long)&local_80,(long ****)"set_txt_num_base",uVar15,uVar18,pppplVar19,
                   param_6,param_7,param_8);
    ppppbVar17 = (byte ****)(ulong)*(uint *)(lVar30 + 0x3c);
    pppplVar16 = (long ****)0x1;
    FUN_710377a280((long)&local_a0,(byte *)"mnu_spirits_raise_pedestal_def_n",1);
    uVar21 = local_98;
    local_a0 = &PTR_FUN_710523d9a8;
    local_98 = 0;
    if (uVar21 != 0) {
      FUN_710392eb40(uVar21);
    }
    iVar9 = *(int *)(lVar30 + 0x3c);
    plVar11 = (long *)FUN_710392e290(0x10,8,pppplVar16,ppppbVar17,pppplVar19,param_6,param_7,param_8
                                    );
    if (iVar9 == 0) {
      if (plVar11 == (long *)0x0) {
        if (DAT_7105332f00 != (long *)0x0) {
          local_64 = 0;
          local_a0 = (undefined **)&DAT_00000008;
          pppplVar16 = (long ****)&local_a0;
          uVar21 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_64);
          if (((uVar21 & 1) != 0) &&
             (plVar11 = (long *)FUN_710392e290(0x10,8,pppplVar16,ppppbVar17,pppplVar19,param_6,
                                               param_7,param_8), plVar11 != (long *)0x0))
          goto LAB_7101908060;
        }
        plVar11 = (long *)0x0;
      }
LAB_7101908060:
      uVar21 = local_78;
      *plVar11 = 0;
      lVar28 = *(long *)(local_78 + 8);
      if ((lVar28 == 0) || (*(long *)(lVar28 + 0x60) == 0)) {
        *plVar11 = 0;
      }
      else {
        plVar12 = (long *)FUN_7103796f20(*(long *)(lVar28 + 0x60),*(long *)(lVar28 + 0x18) + 0xb0);
        *plVar11 = (long)plVar12;
        if (plVar12 != (long *)0x0) {
          (**(code **)(*plVar12 + 0x1f8))(plVar12,0);
          uVar25 = (**(code **)(*plVar12 + 0x200))(plVar12);
          if ((uVar25 & 1) == 0) {
            uVar10 = 1;
          }
          else {
            uVar10 = (**(code **)(*plVar12 + 0x210))(plVar12);
            uVar10 = uVar10 ^ 1;
          }
          pppplVar16 = (long ****)0x0;
          (**(code **)(*plVar12 + 0x388))(plVar12,uVar10 & 1);
        }
      }
      FUN_710392eb40((ulong)plVar11);
LAB_71019080f8:
      pcVar14 = "anim_off_atr_bonus";
    }
    else {
      if (plVar11 == (long *)0x0) {
        if (DAT_7105332f00 != (long *)0x0) {
          local_64 = 0;
          local_a0 = (undefined **)&DAT_00000008;
          pppplVar16 = (long ****)&local_a0;
          uVar21 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_64);
          if (((uVar21 & 1) != 0) &&
             (plVar11 = (long *)FUN_710392e290(0x10,8,pppplVar16,ppppbVar17,pppplVar19,param_6,
                                               param_7,param_8), plVar11 != (long *)0x0))
          goto LAB_7101907f68;
        }
        plVar11 = (long *)0x0;
      }
LAB_7101907f68:
      uVar21 = local_78;
      *plVar11 = 0;
      lVar28 = *(long *)(local_78 + 8);
      if ((lVar28 == 0) || (*(long *)(lVar28 + 0x60) == 0)) {
        *plVar11 = 0;
      }
      else {
        plVar12 = (long *)FUN_7103796f20(*(long *)(lVar28 + 0x60),*(long *)(lVar28 + 0x18) + 0xb0);
        *plVar11 = (long)plVar12;
        if (plVar12 != (long *)0x0) {
          uVar10 = 1;
          (**(code **)(*plVar12 + 0x1f8))(plVar12,1);
          uVar25 = (**(code **)(*plVar12 + 0x200))(plVar12);
          if ((uVar25 & 1) != 0) {
            uVar10 = (**(code **)(*plVar12 + 0x210))(plVar12);
            uVar10 = uVar10 ^ 1;
          }
          pppplVar16 = (long ****)0x0;
          (**(code **)(*plVar12 + 0x388))(plVar12,uVar10 & 1);
        }
      }
      FUN_710392eb40((ulong)plVar11);
      if (*(char *)(lVar30 + 0x54) != '\x03') goto LAB_71019080f8;
      pcVar14 = "anim_on_atr_bonus";
    }
    FUN_7103778300(0x3f800000,uVar21,(long)pcVar14);
    uVar25 = local_88;
    local_90 = (long ***)&PTR_FUN_710523d988;
    local_88 = 0;
    if (uVar25 != 0) {
      uVar13 = *(ulong *)(uVar25 + 0x18);
      *(undefined ***)(uVar25 + 0x10) = &PTR_FUN_710523d9a8;
      *(undefined8 *)(uVar25 + 0x18) = 0;
      if (uVar13 != 0) {
        FUN_710392eb40(uVar13);
      }
      FUN_710392eb40(uVar25);
    }
    local_80 = &PTR_FUN_710523d988;
    local_78 = 0;
    if (uVar21 != 0) {
      uVar25 = *(ulong *)(uVar21 + 0x18);
      *(undefined ***)(uVar21 + 0x10) = &PTR_FUN_710523d9a8;
      *(undefined8 *)(uVar21 + 0x18) = 0;
      if (uVar25 != 0) {
        FUN_710392eb40(uVar25);
      }
      FUN_710392eb40(uVar21);
    }
    FUN_7103776640(&local_80,lVar27,(byte ****)"set_parts_btn_03",pppplVar16,ppppbVar17,pppplVar19,
                   param_6,param_7,param_8);
    FUN_7103776640(&local_90,(long)&local_80,(byte ****)"set_parts_icon_base",pppplVar16,ppppbVar17,
                   pppplVar19,param_6,param_7,param_8);
    uVar15 = 0xffffffff;
    uVar18 = 0;
    pppplVar19 = (long ****)0x0;
    FUN_71025b12c0((long)&local_90,3,-1,0,0,param_6,param_7,param_8);
    FUN_7103776910(&local_a0,(long)&local_80,(long ****)"set_txt_num_base",uVar15,uVar18,pppplVar19,
                   param_6,param_7,param_8);
    ppppbVar17 = (byte ****)(ulong)*(uint *)(lVar30 + 0x40);
    pppplVar16 = (long ****)0x1;
    FUN_710377a280((long)&local_a0,(byte *)"mnu_spirits_raise_pedestal_throw_n",1);
    uVar21 = local_98;
    local_a0 = &PTR_FUN_710523d9a8;
    local_98 = 0;
    if (uVar21 != 0) {
      FUN_710392eb40(uVar21);
    }
    iVar9 = *(int *)(lVar30 + 0x40);
    plVar11 = (long *)FUN_710392e290(0x10,8,pppplVar16,ppppbVar17,pppplVar19,param_6,param_7,param_8
                                    );
    if (iVar9 == 0) {
      if (plVar11 == (long *)0x0) {
        if (DAT_7105332f00 != (long *)0x0) {
          local_64 = 0;
          local_a0 = (undefined **)&DAT_00000008;
          pppplVar16 = (long ****)&local_a0;
          uVar21 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_64);
          if (((uVar21 & 1) != 0) &&
             (plVar11 = (long *)FUN_710392e290(0x10,8,pppplVar16,ppppbVar17,pppplVar19,param_6,
                                               param_7,param_8), plVar11 != (long *)0x0))
          goto LAB_7101908328;
        }
        plVar11 = (long *)0x0;
      }
LAB_7101908328:
      uVar21 = local_78;
      *plVar11 = 0;
      lVar28 = *(long *)(local_78 + 8);
      if ((lVar28 == 0) || (*(long *)(lVar28 + 0x60) == 0)) {
        *plVar11 = 0;
      }
      else {
        plVar12 = (long *)FUN_7103796f20(*(long *)(lVar28 + 0x60),*(long *)(lVar28 + 0x18) + 0xb0);
        *plVar11 = (long)plVar12;
        if (plVar12 != (long *)0x0) {
          (**(code **)(*plVar12 + 0x1f8))(plVar12,0);
          uVar25 = (**(code **)(*plVar12 + 0x200))(plVar12);
          if ((uVar25 & 1) == 0) {
            uVar10 = 1;
          }
          else {
            uVar10 = (**(code **)(*plVar12 + 0x210))(plVar12);
            uVar10 = uVar10 ^ 1;
          }
          pppplVar16 = (long ****)0x0;
          (**(code **)(*plVar12 + 0x388))(plVar12,uVar10 & 1);
        }
      }
      FUN_710392eb40((ulong)plVar11);
LAB_71019083c0:
      pcVar14 = "anim_off_atr_bonus";
    }
    else {
      if (plVar11 == (long *)0x0) {
        if (DAT_7105332f00 != (long *)0x0) {
          local_64 = 0;
          local_a0 = (undefined **)&DAT_00000008;
          pppplVar16 = (long ****)&local_a0;
          uVar21 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_64);
          if (((uVar21 & 1) != 0) &&
             (plVar11 = (long *)FUN_710392e290(0x10,8,pppplVar16,ppppbVar17,pppplVar19,param_6,
                                               param_7,param_8), plVar11 != (long *)0x0))
          goto LAB_7101908230;
        }
        plVar11 = (long *)0x0;
      }
LAB_7101908230:
      uVar21 = local_78;
      *plVar11 = 0;
      lVar28 = *(long *)(local_78 + 8);
      if ((lVar28 == 0) || (*(long *)(lVar28 + 0x60) == 0)) {
        *plVar11 = 0;
      }
      else {
        plVar12 = (long *)FUN_7103796f20(*(long *)(lVar28 + 0x60),*(long *)(lVar28 + 0x18) + 0xb0);
        *plVar11 = (long)plVar12;
        if (plVar12 != (long *)0x0) {
          uVar10 = 1;
          (**(code **)(*plVar12 + 0x1f8))(plVar12,1);
          uVar25 = (**(code **)(*plVar12 + 0x200))(plVar12);
          if ((uVar25 & 1) != 0) {
            uVar10 = (**(code **)(*plVar12 + 0x210))(plVar12);
            uVar10 = uVar10 ^ 1;
          }
          pppplVar16 = (long ****)0x0;
          (**(code **)(*plVar12 + 0x388))(plVar12,uVar10 & 1);
        }
      }
      FUN_710392eb40((ulong)plVar11);
      if (*(char *)(lVar30 + 0x54) != '\x02') goto LAB_71019083c0;
      pcVar14 = "anim_on_atr_bonus";
    }
    FUN_7103778300(0x3f800000,uVar21,(long)pcVar14);
    uVar25 = local_88;
    local_90 = (long ***)&PTR_FUN_710523d988;
    local_88 = 0;
    if (uVar25 != 0) {
      uVar13 = *(ulong *)(uVar25 + 0x18);
      *(undefined ***)(uVar25 + 0x10) = &PTR_FUN_710523d9a8;
      *(undefined8 *)(uVar25 + 0x18) = 0;
      if (uVar13 != 0) {
        FUN_710392eb40(uVar13);
      }
      FUN_710392eb40(uVar25);
    }
    local_80 = &PTR_FUN_710523d988;
    local_78 = 0;
    if (uVar21 != 0) {
      uVar25 = *(ulong *)(uVar21 + 0x18);
      *(undefined ***)(uVar21 + 0x10) = &PTR_FUN_710523d9a8;
      *(undefined8 *)(uVar21 + 0x18) = 0;
      if (uVar25 != 0) {
        FUN_710392eb40(uVar25);
      }
      FUN_710392eb40(uVar21);
    }
    FUN_7103776640(&local_80,lVar27,(byte ****)"set_parts_btn_04",pppplVar16,ppppbVar17,pppplVar19,
                   param_6,param_7,param_8);
    FUN_7103776640(&local_90,(long)&local_80,(byte ****)"set_parts_icon_base",pppplVar16,ppppbVar17,
                   pppplVar19,param_6,param_7,param_8);
    uVar15 = 0xffffffff;
    uVar18 = 0;
    pppplVar19 = (long ****)0x0;
    FUN_71025b12c0((long)&local_90,0,-1,0,0,param_6,param_7,param_8);
    FUN_7103776910(&local_a0,(long)&local_80,(long ****)"set_txt_num_base",uVar15,uVar18,pppplVar19,
                   param_6,param_7,param_8);
    ppppbVar17 = (byte ****)(ulong)*(uint *)(lVar30 + 0x44);
    pppplVar16 = (long ****)0x1;
    FUN_710377a280((long)&local_a0,(byte *)"mnu_spirits_raise_pedestal_non_n",1);
    uVar21 = local_98;
    local_a0 = &PTR_FUN_710523d9a8;
    local_98 = 0;
    if (uVar21 != 0) {
      FUN_710392eb40(uVar21);
    }
    uVar21 = local_78;
    if (*(int *)(lVar30 + 0x44) == 0) {
      plVar11 = (long *)FUN_710392e290(0x10,8,pppplVar16,ppppbVar17,pppplVar19,param_6,param_7,
                                       param_8);
      if (plVar11 == (long *)0x0) {
        if (DAT_7105332f00 != (long *)0x0) {
          local_64 = 0;
          local_a0 = (undefined **)&DAT_00000008;
          pppplVar16 = (long ****)&local_a0;
          uVar21 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_64);
          if (((uVar21 & 1) != 0) &&
             (plVar11 = (long *)FUN_710392e290(0x10,8,pppplVar16,ppppbVar17,pppplVar19,param_6,
                                               param_7,param_8), plVar11 != (long *)0x0))
          goto LAB_7101908510;
        }
        plVar11 = (long *)0x0;
      }
LAB_7101908510:
      uVar21 = local_78;
      *plVar11 = 0;
      lVar28 = *(long *)(local_78 + 8);
      if ((lVar28 == 0) || (*(long *)(lVar28 + 0x60) == 0)) {
        *plVar11 = 0;
      }
      else {
        plVar12 = (long *)FUN_7103796f20(*(long *)(lVar28 + 0x60),*(long *)(lVar28 + 0x18) + 0xb0);
        *plVar11 = (long)plVar12;
        if (plVar12 != (long *)0x0) {
          (**(code **)(*plVar12 + 0x1f8))(plVar12,0);
          uVar25 = (**(code **)(*plVar12 + 0x200))(plVar12);
          if ((uVar25 & 1) == 0) {
            uVar10 = 1;
          }
          else {
            uVar10 = (**(code **)(*plVar12 + 0x210))(plVar12);
            uVar10 = uVar10 ^ 1;
          }
          pppplVar16 = (long ****)0x0;
          (**(code **)(*plVar12 + 0x388))(plVar12,uVar10 & 1);
        }
      }
      FUN_710392eb40((ulong)plVar11);
      FUN_7103778300(0x3f800000,uVar21,0x710437ca4a);
    }
    else {
      if (*(char *)(lVar30 + 0x54) == '\0') {
        pcVar14 = "anim_on_atr_bonus";
      }
      else {
        pcVar14 = "anim_off_atr_bonus";
      }
      FUN_7103778300(0x3f800000,local_78,(long)pcVar14);
      plVar11 = (long *)FUN_710392e290(0x10,8,pppplVar16,ppppbVar17,pppplVar19,param_6,param_7,
                                       param_8);
      if (plVar11 == (long *)0x0) {
        if (DAT_7105332f00 != (long *)0x0) {
          local_64 = 0;
          local_a0 = (undefined **)&DAT_00000008;
          pppplVar16 = (long ****)&local_a0;
          uVar25 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_64);
          if (((uVar25 & 1) != 0) &&
             (plVar11 = (long *)FUN_710392e290(0x10,8,pppplVar16,ppppbVar17,pppplVar19,param_6,
                                               param_7,param_8), plVar11 != (long *)0x0))
          goto LAB_71019085ec;
        }
        plVar11 = (long *)0x0;
      }
LAB_71019085ec:
      *plVar11 = 0;
      lVar28 = *(long *)(uVar21 + 8);
      if ((lVar28 == 0) || (*(long *)(lVar28 + 0x60) == 0)) {
        *plVar11 = 0;
      }
      else {
        plVar12 = (long *)FUN_7103796f20(*(long *)(lVar28 + 0x60),*(long *)(lVar28 + 0x18) + 0xb0);
        *plVar11 = (long)plVar12;
        if (plVar12 != (long *)0x0) {
          uVar10 = 1;
          (**(code **)(*plVar12 + 0x1f8))(plVar12,1);
          uVar25 = (**(code **)(*plVar12 + 0x200))(plVar12);
          if ((uVar25 & 1) != 0) {
            uVar10 = (**(code **)(*plVar12 + 0x210))(plVar12);
            uVar10 = uVar10 ^ 1;
          }
          pppplVar16 = (long ****)0x0;
          (**(code **)(*plVar12 + 0x388))(plVar12,uVar10 & 1);
        }
      }
      FUN_710392eb40((ulong)plVar11);
    }
    uVar25 = local_88;
    local_90 = (long ***)&PTR_FUN_710523d988;
    local_88 = 0;
    if (uVar25 != 0) {
      uVar13 = *(ulong *)(uVar25 + 0x18);
      *(undefined ***)(uVar25 + 0x10) = &PTR_FUN_710523d9a8;
      *(undefined8 *)(uVar25 + 0x18) = 0;
      if (uVar13 != 0) {
        FUN_710392eb40(uVar13);
      }
      FUN_710392eb40(uVar25);
    }
    local_80 = &PTR_FUN_710523d988;
    local_78 = 0;
    if (uVar21 != 0) {
      uVar25 = *(ulong *)(uVar21 + 0x18);
      *(undefined ***)(uVar21 + 0x10) = &PTR_FUN_710523d9a8;
      *(undefined8 *)(uVar21 + 0x18) = 0;
      if (uVar25 != 0) {
        FUN_710392eb40(uVar25);
      }
      FUN_710392eb40(uVar21);
    }
    FUN_7103776640(&local_80,lVar27,(byte ****)"set_parts_btn_05",pppplVar16,ppppbVar17,pppplVar19,
                   param_6,param_7,param_8);
    FUN_7103776640(&local_90,(long)&local_80,(byte ****)"set_parts_icon_base",pppplVar16,ppppbVar17,
                   pppplVar19,param_6,param_7,param_8);
    uVar15 = 0xffffffff;
    uVar18 = 0;
    pppplVar19 = (long ****)0x0;
    FUN_71025b12c0((long)&local_90,4,-1,0,0,param_6,param_7,param_8);
    FUN_7103776910(&local_a0,(long)&local_80,(long ****)"set_txt_num_base",uVar15,uVar18,pppplVar19,
                   param_6,param_7,param_8);
    ppppbVar17 = (byte ****)(ulong)*(uint *)(lVar30 + 0x48);
    pppplVar16 = (long ****)0x1;
    FUN_710377a280((long)&local_a0,(byte *)"mnu_spirits_raise_pedestal_support_n",1);
    uVar21 = local_98;
    local_a0 = &PTR_FUN_710523d9a8;
    local_98 = 0;
    if (uVar21 != 0) {
      FUN_710392eb40(uVar21);
    }
    iVar9 = *(int *)(lVar30 + 0x48);
    plVar11 = (long *)FUN_710392e290(0x10,8,pppplVar16,ppppbVar17,pppplVar19,param_6,param_7,param_8
                                    );
    if (iVar9 == 0) {
      if (plVar11 == (long *)0x0) {
        if (DAT_7105332f00 != (long *)0x0) {
          local_64 = 0;
          local_a0 = (undefined **)&DAT_00000008;
          pppplVar16 = (long ****)&local_a0;
          uVar21 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_64);
          if (((uVar21 & 1) != 0) &&
             (plVar11 = (long *)FUN_710392e290(0x10,8,pppplVar16,ppppbVar17,pppplVar19,param_6,
                                               param_7,param_8), plVar11 != (long *)0x0))
          goto LAB_71019088b8;
        }
        plVar11 = (long *)0x0;
      }
LAB_71019088b8:
      uVar21 = local_78;
      *plVar11 = 0;
      lVar28 = *(long *)(local_78 + 8);
      if ((lVar28 == 0) || (*(long *)(lVar28 + 0x60) == 0)) goto LAB_7101908924;
      plVar12 = (long *)FUN_7103796f20(*(long *)(lVar28 + 0x60),*(long *)(lVar28 + 0x18) + 0xb0);
      *plVar11 = (long)plVar12;
      if (plVar12 != (long *)0x0) {
        (**(code **)(*plVar12 + 0x1f8))(plVar12,0);
        uVar25 = (**(code **)(*plVar12 + 0x200))(plVar12);
        if ((uVar25 & 1) == 0) {
          uVar10 = 1;
        }
        else {
          uVar10 = (**(code **)(*plVar12 + 0x210))(plVar12);
          uVar10 = uVar10 ^ 1;
        }
        pppplVar16 = (long ****)0x0;
        (**(code **)(*plVar12 + 0x388))(plVar12,uVar10 & 1);
      }
    }
    else {
      if (plVar11 == (long *)0x0) {
        if (DAT_7105332f00 != (long *)0x0) {
          local_64 = 0;
          local_a0 = (undefined **)&DAT_00000008;
          pppplVar16 = (long ****)&local_a0;
          uVar21 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_64);
          if (((uVar21 & 1) != 0) &&
             (plVar11 = (long *)FUN_710392e290(0x10,8,pppplVar16,ppppbVar17,pppplVar19,param_6,
                                               param_7,param_8), plVar11 != (long *)0x0))
          goto LAB_71019087e4;
        }
        plVar11 = (long *)0x0;
      }
LAB_71019087e4:
      uVar21 = local_78;
      *plVar11 = 0;
      lVar28 = *(long *)(local_78 + 8);
      if ((lVar28 == 0) || (*(long *)(lVar28 + 0x60) == 0)) {
LAB_7101908924:
        *plVar11 = 0;
        uVar21 = local_78;
      }
      else {
        plVar12 = (long *)FUN_7103796f20(*(long *)(lVar28 + 0x60),*(long *)(lVar28 + 0x18) + 0xb0);
        *plVar11 = (long)plVar12;
        if (plVar12 != (long *)0x0) {
          uVar10 = 1;
          (**(code **)(*plVar12 + 0x1f8))(plVar12,1);
          uVar25 = (**(code **)(*plVar12 + 0x200))(plVar12);
          if ((uVar25 & 1) != 0) {
            uVar10 = (**(code **)(*plVar12 + 0x210))(plVar12);
            uVar10 = uVar10 ^ 1;
          }
          pppplVar16 = (long ****)0x0;
          (**(code **)(*plVar12 + 0x388))(plVar12,uVar10 & 1);
        }
      }
    }
    FUN_710392eb40((ulong)plVar11);
    FUN_7103778300(0x3f800000,uVar21,0x710437ca4a);
    uVar25 = local_88;
    local_90 = (long ***)&PTR_FUN_710523d988;
    local_88 = 0;
    if (uVar25 != 0) {
      uVar13 = *(ulong *)(uVar25 + 0x18);
      *(undefined ***)(uVar25 + 0x10) = &PTR_FUN_710523d9a8;
      *(undefined8 *)(uVar25 + 0x18) = 0;
      if (uVar13 != 0) {
        FUN_710392eb40(uVar13);
      }
      FUN_710392eb40(uVar25);
    }
    local_80 = &PTR_FUN_710523d988;
    local_78 = 0;
    if (uVar21 != 0) {
      uVar25 = *(ulong *)(uVar21 + 0x18);
      *(undefined ***)(uVar21 + 0x10) = &PTR_FUN_710523d9a8;
      *(undefined8 *)(uVar21 + 0x18) = 0;
      if (uVar25 != 0) {
        FUN_710392eb40(uVar25);
      }
      FUN_710392eb40(uVar21);
    }
    iVar1 = *(int *)(lVar30 + 0x38);
    iVar26 = *(int *)(lVar30 + 0x3c);
    iVar2 = *(int *)(lVar30 + 0x40);
    iVar9 = *(int *)(lVar30 + 0x30) + *(int *)(lVar30 + 0x34) + *(int *)(lVar30 + 0x2c);
    iVar4 = *(int *)(lVar30 + 0x44);
    iVar3 = *(int *)(lVar30 + 0x48);
    if (*(char *)(lVar30 + 0x55) == '\0') goto switchD_71019089ec_default;
    iVar5 = *(int *)(lVar30 + 0x4c);
    if ((iVar9 == 0) || (iVar5 != 0)) {
      if ((iVar1 != 0) && (iVar5 == 10)) {
        iVar9 = 10;
        goto LAB_7101908d98;
      }
      switch(iVar5) {
      case 0xb:
        if (iVar26 != 0) {
          iVar9 = 0xb;
          goto LAB_7101908d98;
        }
        break;
      case 0xc:
        if (iVar2 != 0) {
          iVar9 = 0xc;
          goto LAB_7101908d98;
        }
        break;
      case 0xd:
        if (iVar4 != 0) {
          iVar9 = 0xd;
          goto LAB_7101908d98;
        }
        break;
      case 0xe:
        if (iVar3 != 0) {
          iVar9 = 0xe;
          goto LAB_7101908d98;
        }
      }
switchD_71019089ec_default:
      if (iVar9 + iVar1 + iVar26 + iVar2 + iVar4 + iVar3 != 0) {
        if (iVar9 == 0) {
          if (iVar1 == 0) {
            if (iVar26 == 0) {
              if (iVar2 == 0) {
                if (iVar4 == 0) {
                  if (iVar3 == 0) {
                    iVar9 = *(int *)(lVar30 + 0x4c);
                    *(undefined1 *)(lVar30 + 0x55) = 1;
                    if (iVar9 != 0xf) goto LAB_7101908d98;
                    goto LAB_7101908a68;
                  }
                  iVar9 = 0xe;
                  *(undefined8 *)(lVar30 + 0x4c) = 0xe0000000e;
                }
                else {
                  *(undefined8 *)(lVar30 + 0x4c) = 0xd0000000d;
                  iVar9 = 0xd;
                }
              }
              else {
                *(undefined8 *)(lVar30 + 0x4c) = 0xc0000000c;
                iVar9 = 0xc;
              }
            }
            else {
              *(undefined8 *)(lVar30 + 0x4c) = 0xb0000000b;
              iVar9 = 0xb;
            }
          }
          else {
            *(undefined8 *)(lVar30 + 0x4c) = 0xa0000000a;
            iVar9 = 10;
          }
        }
        else {
          iVar9 = 0;
          *(undefined4 *)(lVar30 + 0x4c) = 0;
          if (*(int *)(lVar30 + 0x50) == 0xf) {
            iVar9 = 0;
            if (iVar2 == 0) {
              if (iVar26 == 0) {
                if (iVar4 == 0) {
                  if (iVar1 == 0) {
                    if (iVar3 == 0) goto LAB_7101908d90;
                    uVar24 = 0xe;
                  }
                  else {
                    uVar24 = 10;
                  }
                }
                else {
                  uVar24 = 0xd;
                }
              }
              else {
                uVar24 = 0xb;
              }
            }
            else {
              uVar24 = 0xc;
            }
            *(undefined4 *)(lVar30 + 0x50) = uVar24;
          }
        }
LAB_7101908d90:
        *(undefined1 *)(lVar30 + 0x55) = 1;
        goto LAB_7101908d98;
      }
      *(undefined8 *)(lVar30 + 0x4c) = 0xf0000000f;
      *(undefined1 *)(lVar30 + 0x55) = 1;
LAB_7101908a68:
      FUN_7103776640(&local_80,lVar27,(byte ****)"set_parts_btn_01",pppplVar16,ppppbVar17,pppplVar19
                     ,param_6,param_7,param_8);
      plVar11 = (long *)FUN_710392e290(0x10,8,pppplVar16,ppppbVar17,pppplVar19,param_6,param_7,
                                       param_8);
      if (plVar11 == (long *)0x0) {
        if (DAT_7105332f00 != (long *)0x0) {
          local_a0 = (undefined **)((ulong)local_a0 & 0xffffffff00000000);
          local_90 = (long ***)&DAT_00000008;
          pppplVar16 = &local_90;
          uVar21 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_a0);
          if (((uVar21 & 1) != 0) &&
             (plVar11 = (long *)FUN_710392e290(0x10,8,pppplVar16,ppppbVar17,pppplVar19,param_6,
                                               param_7,param_8), plVar11 != (long *)0x0))
          goto LAB_7101908ad8;
        }
        plVar11 = (long *)0x0;
      }
LAB_7101908ad8:
      uVar21 = local_78;
      *plVar11 = 0;
      lVar28 = *(long *)(local_78 + 8);
      if ((lVar28 == 0) || (*(long *)(lVar28 + 0x60) == 0)) {
        *plVar11 = 0;
      }
      else {
        plVar12 = (long *)FUN_7103796f20(*(long *)(lVar28 + 0x60),*(long *)(lVar28 + 0x18) + 0xb0);
        *plVar11 = (long)plVar12;
        if (plVar12 != (long *)0x0) {
          uVar10 = 1;
          (**(code **)(*plVar12 + 0x1f8))(plVar12,1);
          uVar25 = (**(code **)(*plVar12 + 0x200))(plVar12);
          if ((uVar25 & 1) != 0) {
            uVar10 = (**(code **)(*plVar12 + 0x210))(plVar12);
            uVar10 = uVar10 ^ 1;
          }
          (**(code **)(*plVar12 + 0x388))(plVar12,uVar10 & 1,0);
        }
      }
      FUN_710392eb40((ulong)plVar11);
      local_80 = &PTR_FUN_710523d988;
      local_78 = 0;
      if (uVar21 != 0) {
        uVar25 = *(ulong *)(uVar21 + 0x18);
        *(undefined ***)(uVar21 + 0x10) = &PTR_FUN_710523d9a8;
        *(undefined8 *)(uVar21 + 0x18) = 0;
        if (uVar25 != 0) {
          FUN_710392eb40(uVar25);
        }
        FUN_710392eb40(uVar21);
      }
      pppplVar16 = (long ****)0x1;
      FUN_7103771a80((long *)(lVar30 + 0x20),10,1);
      FUN_7103776640(&local_80,lVar27,(byte ****)"set_parts_btn_01",pppplVar16,ppppbVar17,pppplVar19
                     ,param_6,param_7,param_8);
      plVar11 = (long *)FUN_710392e290(0x10,8,pppplVar16,ppppbVar17,pppplVar19,param_6,param_7,
                                       param_8);
      if (plVar11 == (long *)0x0) {
        if (DAT_7105332f00 != (long *)0x0) {
          local_a0 = (undefined **)((ulong)local_a0 & 0xffffffff00000000);
          local_90 = (long ***)&DAT_00000008;
          pppplVar16 = &local_90;
          uVar21 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_a0);
          if (((uVar21 & 1) != 0) &&
             (plVar11 = (long *)FUN_710392e290(0x10,8,pppplVar16,ppppbVar17,pppplVar19,param_6,
                                               param_7,param_8), plVar11 != (long *)0x0))
          goto LAB_7101908c34;
        }
        plVar11 = (long *)0x0;
      }
LAB_7101908c34:
      uVar21 = local_78;
      *plVar11 = 0;
      lVar27 = *(long *)(local_78 + 8);
      if ((lVar27 == 0) || (*(long *)(lVar27 + 0x60) == 0)) {
        *plVar11 = 0;
      }
      else {
        plVar12 = (long *)FUN_7103796f20(*(long *)(lVar27 + 0x60),*(long *)(lVar27 + 0x18) + 0xb0);
        *plVar11 = (long)plVar12;
        if (plVar12 != (long *)0x0) {
          (**(code **)(*plVar12 + 0x1f8))(plVar12,0);
          uVar25 = (**(code **)(*plVar12 + 0x200))(plVar12);
          if ((uVar25 & 1) == 0) {
            uVar10 = 1;
          }
          else {
            uVar10 = (**(code **)(*plVar12 + 0x210))(plVar12);
            uVar10 = uVar10 ^ 1;
          }
          pppplVar16 = (long ****)0x0;
          (**(code **)(*plVar12 + 0x388))(plVar12,uVar10 & 1);
        }
      }
      FUN_710392eb40((ulong)plVar11);
      local_80 = &PTR_FUN_710523d988;
      local_78 = 0;
      if (uVar21 != 0) {
        uVar25 = *(ulong *)(uVar21 + 0x18);
        *(undefined ***)(uVar21 + 0x10) = &PTR_FUN_710523d9a8;
        *(undefined8 *)(uVar21 + 0x18) = 0;
        if (uVar25 != 0) {
          FUN_710392eb40(uVar25);
        }
        FUN_710392eb40(uVar21);
      }
    }
    else {
      iVar9 = 0;
LAB_7101908d98:
      pppplVar16 = (long ****)0x1;
      FUN_7103771a80((long *)(lVar30 + 0x20),iVar9,1);
    }
    *(undefined4 *)(lVar30 + 0x28) = 1;
    (**(code **)(**(long **)(lVar30 + 0x20) + 0x60))(*(long **)(lVar30 + 0x20),1);
    *(undefined1 *)(lVar29 + 0x70) = 0;
    if (*(int *)(param_1 + 0x220) != 2) goto LAB_7101908e94;
    if (*(char *)(*(long *)(DAT_710532f8d0 + 8) + 0x191) == '\0') {
      pppplVar16 = (long ****)&DAT_00000004;
      uVar21 = FUN_7103313f20(*(long *)(DAT_710532f8d0 + 8),0x19b197f89a,(long ****)&DAT_00000004,
                              ppppbVar17,pppplVar19,param_6,param_7,param_8);
      if ((uVar21 & 1) == 0) goto LAB_7101908e60;
      FUN_71024076d0(local_e0,0x19b197f89a);
      if (((local_d0 != 0) && (DAT_7106dd53a8 == '\x01')) && ((int)local_c8 == DAT_7106dd53ac)) {
        piVar22 = (int *)(local_d0 + 0x38);
        do {
          cVar7 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(piVar22,0x10);
          if (bVar8) {
            *piVar22 = *piVar22 + -1;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
      }
    }
    else {
LAB_7101908e60:
      local_c8 = 0x87650000000000;
      local_b8 = 0xffffffffffffffff;
      uStack_b0 = 0;
      local_e0[0] = 0;
      local_a8 = 0;
    }
    local_d8 = &PTR_FUN_7104f73d50;
    local_d0 = 0;
    local_c0 = 0;
LAB_7101908e94:
    lVar27 = *(long *)(*(long *)(param_1 + 0x230) + 0x80);
    auVar31 = FUN_7101df6680(*(long *)(lVar27 + 0x20),8,pppplVar16,ppppbVar17,pppplVar19,param_6,
                             param_7,param_8);
    *(undefined1 *)(lVar27 + 0x140) = 1;
    if (*(char *)(param_1 + 0x2a0) == '\0') {
      return;
    }
    *(undefined1 *)(param_1 + 0x2a0) = 0;
    FUN_71025272f0(auVar31._0_8_,auVar31._8_8_,pppplVar16,ppppbVar17,pppplVar19,param_6,param_7,
                   param_8);
    return;
  }
  lVar27 = *(long *)(*(long *)(param_1 + 0x240) + 0x80);
  iVar9 = *(int *)(*(long *)(lVar27 + 0x20) + 0x25c);
  switch(iVar9) {
  case 0:
    if (*(int *)(lVar27 + 0x30) + *(int *)(lVar27 + 0x34) + *(int *)(lVar27 + 0x2c) != 0 &&
        iVar9 != -1) goto switchD_71019073ac_caseD_1;
    goto switchD_71019073ac_caseD_ffffffff;
  default:
    goto switchD_71019073ac_caseD_1;
  case 10:
    iVar26 = *(int *)(lVar27 + 0x38);
    break;
  case 0xb:
    iVar26 = *(int *)(lVar27 + 0x3c);
    break;
  case 0xc:
    iVar26 = *(int *)(lVar27 + 0x40);
    break;
  case 0xd:
    iVar26 = *(int *)(lVar27 + 0x44);
    break;
  case 0xe:
    iVar26 = *(int *)(lVar27 + 0x48);
    break;
  case -1:
    goto switchD_71019073ac_caseD_ffffffff;
  }
  if (iVar26 == 0 || iVar9 == -1) {
switchD_71019073ac_caseD_ffffffff:
    if (*(char *)(*(long *)(lVar27 + 0x20) + 0x280) == '\0') {
      return;
    }
LAB_7101907c8c:
    lVar27 = *(long *)(*(long *)(param_1 + 0x230) + 0x80);
    FUN_7101df6680(*(long *)(lVar27 + 0x20),9,param_3,param_4,param_5,param_6,param_7,param_8);
    *(undefined1 *)(lVar27 + 0x140) = 0;
    lVar27 = *(long *)(*(long *)(param_1 + 0x240) + 0x80);
    FUN_7103778300(0x3f800000,*(long *)(lVar27 + 0x18),0x710428ff7d);
    *(undefined4 *)(lVar27 + 0x28) = 2;
    (**(code **)(**(long **)(lVar27 + 0x20) + 0x60))(*(long **)(lVar27 + 0x20),0);
    if (*(uint *)(param_1 + 0x214) < 0x13) {
      *(undefined4 *)(param_1 + (long)(int)*(uint *)(param_1 + 0x214) * 4 + 0x1c8) = 2;
      return;
    }
    goto LAB_7101908ef8;
  }
switchD_71019073ac_caseD_1:
  uVar6 = *(ushort *)(param_1 + 0x264);
  if ((ulong)uVar6 != 0xffff) {
    if (uVar6 >> 4 < 0x177) {
      puVar20 = (undefined2 *)(*(long *)(*DAT_7105329f98 + 0x30) + (ulong)uVar6 * 0x50 + 72000);
    }
    else {
      puVar20 = &DAT_710532a878;
      if (((ushort)(uVar6 + 0xe890) < 100) &&
         (lVar27 = *(long *)(*DAT_7105329f98 + 0x30) + (ulong)(ushort)(uVar6 + 0xe890) * 0x50,
         *(short *)(lVar27 + 0x88cc8) != -1)) {
        puVar20 = (undefined2 *)(lVar27 + 0x88cc0);
      }
    }
    if (puVar20[8] == 99) goto LAB_7101907c8c;
  }
  uVar23 = 0;
  switch(iVar9) {
  case 0:
    uVar10 = *(uint *)(param_1 + 0x214);
    if (0x12 < uVar10) goto LAB_7101908ef8;
    uVar24 = 4;
    goto LAB_7101907d24;
  default:
    goto switchD_7101907c34_caseD_1;
  case 10:
    break;
  case 0xb:
    uVar23 = 1;
    break;
  case 0xc:
    uVar23 = 2;
    break;
  case 0xd:
    uVar23 = 3;
    break;
  case 0xe:
    uVar23 = 4;
  }
  *(undefined1 *)(param_1 + 0x267) = uVar23;
switchD_7101907c34_caseD_1:
  uVar10 = *(uint *)(param_1 + 0x214);
  if (uVar10 < 0x13) {
    uVar24 = 5;
LAB_7101907d24:
    *(undefined4 *)(param_1 + (long)(int)uVar10 * 4 + 0x1c8) = uVar24;
    lVar27 = *(long *)(*(long *)(param_1 + 0x240) + 0x80);
    FUN_7103778300(0x3f800000,*(long *)(lVar27 + 0x18),0x710428ff7d);
    *(undefined4 *)(lVar27 + 0x28) = 2;
    (**(code **)(**(long **)(lVar27 + 0x20) + 0x60))(*(long **)(lVar27 + 0x20),0);
    lVar27 = *(long *)(*(long *)(param_1 + 0x230) + 0x80);
    FUN_7101df6680(*(long *)(lVar27 + 0x20),6,param_3,param_4,param_5,param_6,param_7,param_8);
    if (*(uint *)(lVar27 + 300) < 0x13) {
      *(undefined4 *)(lVar27 + (long)(int)*(uint *)(lVar27 + 300) * 4 + 0xe0) = 6;
      lVar27 = *(long *)(*(long *)(lVar27 + 0x28) + 0x80);
      if (*(int *)(lVar27 + 0xe0) != 5) {
        *(undefined8 *)(lVar27 + 0xe0) = 0xffffffff;
        *(undefined4 *)(lVar27 + 0xe8) = 0xffffffff;
        *(undefined8 *)(lVar27 + 0x10) = 0;
        *(undefined8 *)(lVar27 + 0x18) = 0;
        *(undefined4 *)(lVar27 + 0xdc) = 0;
        *(undefined8 *)(lVar27 + 0xd4) = 0;
        *(undefined8 *)(lVar27 + 0xcc) = 0;
        *(undefined8 *)(lVar27 + 0xc4) = 0;
        *(undefined8 *)(lVar27 + 0xbc) = 0;
        *(undefined8 *)(lVar27 + 0xb4) = 0;
        *(undefined8 *)(lVar27 + 0xac) = 0;
        *(undefined8 *)(lVar27 + 0xa4) = 0;
        *(undefined8 *)(lVar27 + 0x9c) = 0;
        *(undefined8 *)(lVar27 + 0x94) = 0;
        *(undefined1 *)(lVar27 + 0xec) = 0;
        *(undefined4 *)(lVar27 + 0x90) = 4;
      }
      return;
    }
  }
LAB_7101908ef8:
                    /* WARNING: Subroutine does not return */
  abort();
}

