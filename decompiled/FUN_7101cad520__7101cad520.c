// addr:      7101cad520
// offset:    0x1cad520
// name:      FUN_7101cad520
// mangled:   
// signature: undefined __cdecl FUN_7101cad520(long param_1, undefined8 param_2, ulong param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_7101cad520(long param_1,undefined8 param_2,ulong param_3,byte ****param_4,long ****param_5,
                   undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long *plVar1;
  long lVar2;
  undefined2 uVar3;
  uint uVar4;
  long lVar5;
  ulong extraout_x1;
  undefined ***pppuVar7;
  long *********ppppppppplVar8;
  undefined8 uVar9;
  byte ****ppppbVar10;
  int iVar11;
  ulong uVar12;
  byte ****ppppbVar13;
  long lVar14;
  long lVar15;
  long ********local_b90;
  ulong local_b88;
  undefined **local_b80;
  ulong local_b78;
  undefined2 local_b70;
  undefined4 local_b6c;
  ushort local_b68 [32];
  undefined8 local_b28;
  undefined8 local_b20;
  undefined5 uStack_b18;
  undefined3 local_b13;
  undefined5 uStack_b10;
  undefined8 local_b00;
  undefined8 local_af8;
  undefined8 uStack_af0;
  undefined8 local_ae8;
  undefined8 uStack_ae0;
  undefined8 local_ad8;
  undefined8 uStack_ad0;
  undefined8 local_ac8;
  undefined8 uStack_ac0;
  undefined8 local_ab8;
  undefined6 uStack_ab0;
  undefined2 local_aaa;
  undefined6 uStack_aa8;
  undefined8 local_aa0;
  undefined8 local_a98;
  undefined8 uStack_a90;
  undefined8 local_a88;
  undefined8 uStack_a80;
  undefined8 local_a78;
  undefined8 uStack_a70;
  undefined8 local_a68;
  undefined8 uStack_a60;
  undefined8 local_a58;
  undefined8 uStack_a50;
  undefined8 local_a48;
  undefined8 uStack_a40;
  undefined8 local_a38;
  undefined8 uStack_a30;
  undefined8 local_a28;
  undefined8 uStack_a20;
  undefined8 local_a18;
  undefined8 uStack_a10;
  undefined8 local_a08;
  undefined8 local_a00;
  ulong local_9f8;
  ulong local_9f0;
  undefined8 local_9e8;
  undefined8 uStack_9e0;
  undefined8 local_9d8;
  undefined8 local_9d0;
  undefined8 local_9c8;
  undefined8 local_9c0;
  undefined6 uStack_9b8;
  undefined2 local_9b2;
  undefined6 uStack_9b0;
  undefined4 local_9a8;
  undefined8 local_9a0;
  undefined8 local_998;
  undefined8 uStack_990;
  undefined8 local_988;
  undefined8 local_980;
  undefined8 local_978;
  undefined8 local_970;
  undefined1 *local_968;
  undefined8 local_960;
  undefined8 local_958;
  undefined8 local_950;
  undefined8 local_948;
  undefined8 local_940;
  undefined8 local_938;
  undefined8 local_930;
  undefined8 local_928;
  undefined8 local_920;
  undefined8 local_918;
  undefined8 local_910;
  undefined8 local_908;
  undefined8 local_8d8;
  undefined1 local_8d0;
  undefined1 *local_7f0;
  undefined1 *local_7e0;
  undefined1 *local_7d0;
  undefined1 *local_7c0;
  undefined1 *local_7b0;
  undefined1 *local_7a0;
  undefined1 *local_790;
  undefined1 *local_780;
  undefined1 *local_770;
  undefined1 *local_760;
  uint local_d0;
  undefined2 local_cc;
  ulong local_88 [3];
  ulong uVar6;
  
  ppppppppplVar8 = &local_b90;
  lVar14 = *(long *)(param_1 + 0x1a0);
  if (*(int *)(param_1 + 0x18c) != 0) {
    lVar5 = *(long *)(lVar14 + 0x80);
    if ((*(uint *)(lVar5 + 0xe8) | 4) != 5) {
      return;
    }
    if (*(char *)(lVar5 + 0x130) == '\0') {
      FUN_7101cd0bc0(lVar5,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
      *(undefined1 *)(lVar14 + 0x70) = 1;
      if (0x12 < *(uint *)(param_1 + 0x184)) goto LAB_7101cadb20;
      lVar14 = param_1 + (long)(int)*(uint *)(param_1 + 0x184) * 4;
      iVar11 = 3;
    }
    else {
      if (0x12 < *(uint *)(param_1 + 0x184)) {
LAB_7101cadb20:
                    /* WARNING: Subroutine does not return */
        abort();
      }
      lVar14 = param_1 + (long)(int)*(uint *)(param_1 + 0x184) * 4;
      iVar11 = *(int *)(lVar14 + 0x138) + 1;
    }
    *(int *)(lVar14 + 0x138) = iVar11;
    return;
  }
  uVar12 = *(ulong *)(param_1 + 0x1a8);
  lVar15 = *(long *)(lVar14 + 0x80);
  lVar5 = *(long *)(DAT_710532f8f8 + 8);
  uVar4 = FUN_710334fdc0(lVar5,uVar12);
  uVar6 = (ulong)uVar4;
  local_88[0] = uVar6;
  if (extraout_x1 == 0) {
    uVar3 = 0xffff;
  }
  else {
    uVar3 = FUN_710334c7d0(lVar5,extraout_x1,uVar4);
    param_3 = uVar6;
  }
  *(undefined2 *)(lVar15 + 0x120) = uVar3;
  lVar5 = **(long **)(lVar15 + 0x100);
  plVar1 = (long *)(lVar15 + 0x108);
  FUN_7103771e50(&local_b80,plVar1,0,param_3,param_4,param_5,param_6,param_7,param_8);
  FUN_710377a120((long)&local_b80,"pop_btn_no",param_3,param_4,param_5,param_6,param_7,param_8);
  uVar6 = local_b78;
  local_b80 = &PTR_FUN_710523d9a8;
  local_b78 = 0;
  if (uVar6 != 0) {
    FUN_710392eb40(uVar6);
  }
  lVar2 = lVar5 + 8;
  FUN_7103771e50(&local_b80,plVar1,1,param_3,param_4,param_5,param_6,param_7,param_8);
  FUN_710377a120((long)&local_b80,"pop_btn_yes",param_3,param_4,param_5,param_6,param_7,param_8);
  uVar6 = local_b78;
  local_b80 = &PTR_FUN_710523d9a8;
  local_b78 = 0;
  if (uVar6 != 0) {
    FUN_710392eb40(uVar6);
  }
  pppuVar7 = (undefined ***)0x1;
  FUN_7103771a80(plVar1,0,1);
  FUN_7103778760(*(long *)(lVar5 + 0x10),0x710438cbd1);
  local_d0 = 0;
  local_cc = 0;
  ppppbVar13 = (byte ****)((ulong)&local_d0 | 4);
  switch(*(undefined2 *)(lVar15 + 0x120)) {
  case 0:
    FUN_7103778300(0x3f800000,*(long *)(lVar5 + 0x10),0x710425f56d);
    FUN_7103778300(0x3f800000,*(long *)(lVar5 + 0x10),0x7104318fef);
    local_b80 = (undefined **)0x0;
    local_b78 = 0;
    local_9d8 = 0x13ffff0000000000;
    local_9d0 = 0x5affff0000000000;
    local_b6c = 0;
    local_b68[0] = 0;
    local_b70 = 0;
    uStack_b10 = 0;
    local_b28 = 0;
    local_9f8 = 0;
    local_9f0 = local_9f0 & 0xffffffffffff0000;
    local_9c8 = (ulong)local_9c8._6_2_ << 0x30;
    local_968 = &DAT_c1ffff0000000000;
    local_b20 = 0;
    uStack_b18 = 0;
    local_b13 = 0;
    FUN_710334f120(*(long *)(DAT_710532f8f8 + 8),(int *)local_88,&local_b80);
    FUN_71016bc6e0(&local_d0,local_b68);
    uVar4 = (uint)(byte)local_9c8;
    if (0xb < uVar4) {
      uVar4 = 0xc;
    }
    pppuVar7 = (undefined ***)(ulong)uVar4;
    FUN_7103778430(lVar2,"mf_clr_%02d",pppuVar7,param_4,param_5,param_6,param_7,param_8);
    break;
  case 1:
    FUN_7103778300(0x3f800000,*(long *)(lVar5 + 0x10),0x710434a491);
    local_9f8 = local_9f8 & 0xffffffffffff0000;
    local_b6c = 0;
    local_b68[0] = 0;
    local_b70 = 0;
    local_b80 = (undefined **)0x0;
    local_b78 = 0;
    pppuVar7 = &local_b80;
    uStack_b10 = 0;
    local_b28 = 0;
    local_a00 = 0;
    local_9c8 = -0x2600010000000000;
    local_b20 = 0;
    uStack_b18 = 0;
    local_b13 = 0;
    FUN_710334f710(*(long *)(DAT_710532f8f8 + 8),(int *)local_88,pppuVar7);
    goto LAB_7101cad870;
  case 2:
    FUN_7103778300(0x3f800000,*(long *)(lVar5 + 0x10),0x71043f0ab9);
    local_b6c = 0;
    local_b68[0] = 0;
    local_b70 = 0;
    local_b80 = (undefined **)0x0;
    local_b78 = 0;
    uStack_b10 = 0;
    local_b28 = 0;
    local_b00 = 0;
    local_b20 = 0;
    uStack_b18 = 0;
    local_b13 = 0;
    FUN_710143c4d0(&local_a88);
    local_7f0 = &DAT_c1ffff0000000000;
    local_7e0 = &DAT_c1ffff0000000000;
    local_7d0 = &DAT_c1ffff0000000000;
    local_7c0 = &DAT_c1ffff0000000000;
    pppuVar7 = &local_b80;
    local_7b0 = &DAT_c1ffff0000000000;
    local_7a0 = &DAT_c1ffff0000000000;
    local_790 = &DAT_c1ffff0000000000;
    local_780 = &DAT_c1ffff0000000000;
    local_770 = &DAT_c1ffff0000000000;
    local_760 = &DAT_c1ffff0000000000;
    FUN_710334e9e0(*(long *)(DAT_710532f8f8 + 8),(int *)local_88,pppuVar7);
LAB_7101cad870:
    FUN_71016bc6e0(&local_d0,local_b68);
    break;
  case 4:
    FUN_7103778300(0x3f800000,*(long *)(lVar5 + 0x10),0x710436c500);
    local_b6c = 0;
    local_b68[0] = 0;
    local_b70 = 0;
    local_b80 = (undefined **)0x0;
    local_b78 = 0;
    uStack_b10 = 0;
    local_b28 = 0;
    uStack_aa8 = 0;
    local_b00 = 0;
    local_aa0 = 0;
    local_b20 = 0;
    uStack_b18 = 0;
    local_b13 = 0;
    local_ab8 = 0;
    uStack_ab0 = 0;
    local_aaa = 0;
    local_ac8 = 0;
    uStack_ac0 = 0;
    local_ad8 = 0;
    uStack_ad0 = 0;
    local_ae8 = 0;
    uStack_ae0 = 0;
    local_af8 = 0;
    uStack_af0 = 0;
    local_9e8 = 0;
    uStack_9e0 = 0;
    local_9f8 = 0;
    local_9f0 = 0;
    local_a08 = 0;
    local_a00 = 0;
    local_a18 = 0;
    uStack_a10 = 0;
    local_a28 = 0;
    uStack_a20 = 0;
    local_a38 = 0;
    uStack_a30 = 0;
    local_a48 = 0;
    uStack_a40 = 0;
    local_a58 = 0;
    uStack_a50 = 0;
    local_a68 = 0;
    uStack_a60 = 0;
    local_a78 = 0;
    uStack_a70 = 0;
    local_a88 = 0;
    uStack_a80 = 0;
    local_a98 = 0;
    uStack_a90 = 0;
    FUN_71004f5770(&local_a98);
    local_9a8 = 0;
    uStack_9b0 = 0;
    local_9c0 = 0;
    uStack_9b8 = 0;
    local_9b2 = 0;
    pppuVar7 = &local_b80;
    local_9d8 = 0;
    local_908 = 0;
    local_910 = 0;
    local_918 = 0;
    local_920 = 0;
    local_928 = 0;
    local_930 = 0;
    local_938 = 0;
    local_940 = 0;
    local_948 = 0;
    local_950 = 0;
    local_958 = 0;
    local_960 = 0;
    local_968 = (undefined1 *)0x0;
    local_970 = 0;
    local_978 = 0;
    local_980 = 0;
    local_988 = 0;
    local_9a0 = 0;
    local_8d0 = 0;
    local_8d8 = 0;
    local_9d0 = 0;
    local_9c8 = 0;
    local_998 = 0;
    uStack_990 = 0;
    FUN_710334e6a0(*(long *)(DAT_710532f8f8 + 8),(int *)local_88,pppuVar7);
    FUN_71016bc6e0(&local_d0,local_b68);
    FUN_7103776910(&local_b90,lVar2,(long ****)"set_rep_movie",pppuVar7,param_4,param_5,param_6,
                   param_7,param_8);
    FUN_7101cedc80(*(long *)(DAT_7105325cd0 + 8),uVar12,&local_b90,param_4,param_5,param_6,param_7,
                   param_8);
    uVar6 = local_b88;
    local_b90 = (long ********)&PTR_FUN_710523d9a8;
    local_b88 = 0;
    pppuVar7 = (undefined ***)ppppppppplVar8;
    if (uVar6 != 0) {
      FUN_710392eb40(uVar6);
      pppuVar7 = (undefined ***)ppppppppplVar8;
    }
  }
  FUN_7103776910(&local_b80,lVar2,(long ****)"set_txt_00",pppuVar7,param_4,param_5,param_6,param_7,
                 param_8);
  uVar9 = 1;
  ppppbVar10 = ppppbVar13;
  FUN_710377a280((long)&local_b80,(byte *)"mnu_share_download_confirm",1);
  uVar6 = local_b78;
  local_b80 = &PTR_FUN_710523d9a8;
  local_b78 = 0;
  if (uVar6 != 0) {
    FUN_710392eb40(uVar6);
  }
  FUN_7103776910(&local_b80,lVar2,(long ****)"set_txt_progress",uVar9,ppppbVar10,param_5,param_6,
                 param_7,param_8);
  uVar9 = 1;
  FUN_710377a280((long)&local_b80,(byte *)"mnu_share_detail_saving",1);
  uVar6 = local_b78;
  local_b80 = &PTR_FUN_710523d9a8;
  local_b78 = 0;
  if (uVar6 != 0) {
    FUN_710392eb40(uVar6);
  }
  *(undefined2 *)(lVar15 + 0x134) = 0;
  FUN_7101cd12c0(*(long *)(lVar14 + 0x80),uVar12,uVar9,ppppbVar13,param_5,param_6,param_7,param_8);
  *(undefined2 *)(param_1 + 0x1b0) =
       *(undefined2 *)(*(long *)(*(long *)(param_1 + 0x1a0) + 0x80) + 0x120);
  *(undefined1 *)(*(long *)(param_1 + 0x1a0) + 0x70) = 0;
  lVar14 = *(long *)(*(long *)(param_1 + 0x1a0) + 0x80);
  if (*(int *)(lVar14 + 0xe8) == 1) {
    FUN_7103775dc0((long *)**(undefined8 **)(lVar14 + 0x100),1,(long ****)0x16fff,ppppbVar13,param_5
                   ,param_6,param_7,param_8);
    FUN_7103778300(0x3f800000,*(long *)(**(long **)(lVar14 + 0x100) + 0x10),0x7104291d6e);
    *(undefined1 *)(lVar14 + 0xf4) = 0;
    *(undefined8 *)(lVar14 + 0xe0) = 0x100000000;
    *(undefined8 *)(lVar14 + 0xe8) = 0xffffffff;
    *(undefined4 *)(lVar14 + 0xf0) = 0xffffffff;
    *(undefined2 *)(lVar14 + 0x130) = 0;
    *(undefined1 *)(lVar14 + 0x132) = 1;
    *(undefined4 *)(lVar14 + 0x98) = 4;
    *(undefined4 *)(lVar14 + 0x9c) = 2;
    *(undefined8 *)(lVar14 + 8) = 0;
    *(undefined8 *)(lVar14 + 0x10) = 0;
    *(undefined8 *)(lVar14 + 0xd0) = 0;
    *(undefined8 *)(lVar14 + 0xd8) = 0;
    *(undefined8 *)(lVar14 + 0xc0) = 0;
    *(undefined8 *)(lVar14 + 200) = 0;
    *(undefined8 *)(lVar14 + 0xb0) = 0;
    *(undefined8 *)(lVar14 + 0xb8) = 0;
    *(undefined8 *)(lVar14 + 0xa0) = 0;
    *(undefined8 *)(lVar14 + 0xa8) = 0;
  }
  return;
}

