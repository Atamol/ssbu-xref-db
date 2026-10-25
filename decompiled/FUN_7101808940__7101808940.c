// addr:      7101808940
// offset:    0x1808940
// name:      FUN_7101808940
// mangled:   
// signature: undefined __cdecl FUN_7101808940(long param_1, undefined8 param_2, undefined * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_7101808940(long param_1,undefined8 param_2,undefined **param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  int *piVar1;
  long *plVar2;
  char *pcVar3;
  char cVar4;
  long *********ppppppppplVar5;
  long ********pppppppplVar6;
  bool bVar7;
  int iVar8;
  ulong uVar9;
  undefined8 *puVar10;
  long ********pppppppplVar11;
  long *******ppppppplVar12;
  long *********ppppppppplVar13;
  undefined1 *puVar14;
  undefined8 *puVar15;
  undefined8 uVar16;
  undefined8 extraout_x1;
  long **pplVar17;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 extraout_x1_02;
  undefined8 extraout_x1_03;
  undefined8 extraout_x1_04;
  undefined8 extraout_x1_05;
  undefined8 extraout_x1_06;
  undefined8 extraout_x1_07;
  undefined8 extraout_x1_08;
  undefined8 extraout_x1_09;
  undefined8 extraout_x1_10;
  undefined8 extraout_x1_11;
  long **********pppppppppplVar18;
  undefined **ppuVar19;
  char *pcVar20;
  CharInfo *pCVar21;
  byte ****ppppbVar22;
  long ****pppplVar23;
  uint uVar24;
  long **pplVar25;
  long lVar26;
  undefined8 *puVar27;
  ulong uVar28;
  uint uVar29;
  long ***ppplVar30;
  long *****ppppplVar31;
  ulong *puVar32;
  byte ****ppppbVar33;
  long *****ppppplVar34;
  long ******pppppplVar35;
  long ****pppplVar36;
  long ****pppplVar37;
  undefined8 local_188;
  undefined8 local_180;
  undefined8 local_178;
  undefined2 local_170;
  undefined4 local_16e;
  undefined1 local_16a;
  long *********local_140;
  long ********local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  long *********local_e0;
  long ********local_d8;
  ulong local_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  long *********local_80;
  undefined8 local_78;
  undefined8 local_70;
  
  uVar9 = FUN_710323cb80(*(long *)(param_1 + 0x158),param_2,(long *********)param_3,param_4,param_5,
                         param_6,param_7,param_8);
  if ((uVar9 & 1) == 0) {
    return;
  }
  plVar2 = (long *)(param_1 + 0x158);
  if (((DAT_71053144d8 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_71053144d8), iVar8 != 0)) {
    FUN_7101764000();
    param_3 = &PTR_LOOP_7104f17000;
    FUN_71000001c0();
    __cxa_guard_release(&DAT_71053144d8);
  }
  puVar10 = (undefined8 *)
            FUN_710392e290(0x10,0x88,(long ****)param_3,param_4,param_5,param_6,param_7,param_8);
  if (puVar10 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_d8 = (long ********)((ulong)local_d8 & 0xffffffff00000000);
      local_140 = (long *********)&DAT_00000088;
      param_3 = (undefined **)&local_140;
      uVar9 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_d8);
      if (((uVar9 & 1) != 0) &&
         (puVar10 = (undefined8 *)
                    FUN_710392e290(0x10,0x88,(long ****)param_3,param_4,param_5,param_6,param_7,
                                   param_8), puVar10 != (undefined8 *)0x0)) goto LAB_71018089e0;
    }
    puVar10 = (undefined8 *)0x0;
  }
LAB_71018089e0:
  ppppppppplVar5 = DAT_7105307d18;
  ppppbVar33 = (byte ****)(ulong)*(byte *)(param_1 + 0x160);
  *puVar10 = &PTR_FUN_71050a7aa8;
  puVar10[1] = 0;
  puVar10[0xc] = 0;
  puVar10[0xd] = 0x1ffffffff;
  puVar10[2] = 0;
  puVar10[3] = 0;
  *(undefined1 *)(puVar10 + 0xb) = 0;
  puVar10[0xf] = plVar2;
  *(undefined1 *)(puVar10 + 0xe) = 1;
  puVar10[9] = 0;
  puVar10[10] = 0;
  pppppppplVar11 =
       (long ********)
       FUN_710392e290(0x10,0x138,(long ****)param_3,param_4,param_5,param_6,param_7,param_8);
  if (pppppppplVar11 == (long ********)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_d8 = (long ********)((ulong)local_d8 & 0xffffffff00000000);
      local_140 = (long *********)&DAT_00000138;
      param_3 = (undefined **)&local_140;
      uVar9 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_d8);
      if (((uVar9 & 1) != 0) &&
         (pppppppplVar11 =
               (long ********)
               FUN_710392e290(0x10,0x138,(long ****)param_3,param_4,param_5,param_6,param_7,param_8)
         , pppppppplVar11 != (long ********)0x0)) goto LAB_7101808a74;
    }
    pppppppplVar11 = (long ********)0x0;
  }
LAB_7101808a74:
  *(undefined4 *)(pppppppplVar11 + 1) = 0x1000;
  pppppppplVar11[2] = (long *******)0x0;
  pppppppplVar11[3] = (long *******)0x0;
  pppppppplVar11[4] = (long *******)0x0;
  pppppppplVar11[6] = (long *******)0x0;
  pppppppplVar11[5] = (long *******)(pppppppplVar11 + 6);
  *pppppppplVar11 = (long *******)&DAT_71050a7a10;
  pppppppplVar11[9] = (long *******)pppppppplVar11;
  pppppppplVar11[7] = (long *******)0x0;
  pppppppplVar11[8] = (long *******)0x0;
  pppppppplVar11[10] = (long *******)0x0;
  *(undefined8 *)((long)pppppppplVar11 + 0xdc) = 0xffffffff00000000;
  *(undefined8 *)((long)pppppppplVar11 + 0xe4) = 0xffffffff00000000;
  *(undefined1 *)((long)pppppppplVar11 + 0xec) = 0;
  *(undefined4 *)(pppppppplVar11 + 0x1b) = 0;
  *(undefined4 *)(pppppppplVar11 + 0x24) = 10;
  pppppppplVar11[0xb] = (long *******)0x0;
  pppppppplVar11[0xc] = (long *******)0x0;
  pppppppplVar11[0xd] = (long *******)0x0;
  pppppppplVar11[0xe] = (long *******)0x0;
  pppppppplVar11[0x19] = (long *******)0x0;
  pppppppplVar11[0x1a] = (long *******)0x0;
  pppppppplVar11[0x17] = (long *******)0x0;
  pppppppplVar11[0x18] = (long *******)0x0;
  pppppppplVar11[0x15] = (long *******)0x0;
  pppppppplVar11[0x16] = (long *******)0x0;
  pppppppplVar11[0x13] = (long *******)0x0;
  pppppppplVar11[0x14] = (long *******)0x0;
  pppppppplVar11[0x11] = (long *******)0x0;
  pppppppplVar11[0x12] = (long *******)0x0;
  pppppppplVar11[0xf] = (long *******)0x0;
  pppppppplVar11[0x10] = (long *******)0x0;
  ppppppplVar12 =
       (long *******)
       FUN_710392e290(0x10,0x50,(long ****)param_3,param_4,param_5,param_6,param_7,param_8);
  if (ppppppplVar12 == (long *******)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_d8 = (long ********)((ulong)local_d8 & 0xffffffff00000000);
      local_140 = (long *********)&DAT_00000050;
      param_3 = (undefined **)&local_140;
      uVar9 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_d8);
      if (((uVar9 & 1) != 0) &&
         (ppppppplVar12 =
               (long *******)
               FUN_710392e290(0x10,0x50,(long ****)param_3,param_4,param_5,param_6,param_7,param_8),
         ppppppplVar12 != (long *******)0x0)) goto LAB_7101808b44;
    }
    ppppppplVar12 = (long *******)0x0;
  }
LAB_7101808b44:
  pppppppplVar11[0x1e] = ppppppplVar12;
  pppppppplVar11[0x1f] = ppppppplVar12;
  pppppppplVar11[0x20] = ppppppplVar12 + 10;
  ppppppplVar12 =
       (long *******)
       FUN_710392e290(0x10,0x50,(long ****)param_3,param_4,param_5,param_6,param_7,param_8);
  if (ppppppplVar12 == (long *******)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_d8 = (long ********)((ulong)local_d8 & 0xffffffff00000000);
      local_140 = (long *********)&DAT_00000050;
      pppppppppplVar18 = &local_140;
      uVar9 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_d8);
      if (((uVar9 & 1) != 0) &&
         (ppppppplVar12 =
               (long *******)
               FUN_710392e290(0x10,0x50,(long ****)pppppppppplVar18,param_4,param_5,param_6,param_7,
                              param_8), ppppppplVar12 != (long *******)0x0)) goto LAB_7101808ba4;
    }
    ppppppplVar12 = (long *******)0x0;
  }
LAB_7101808ba4:
  pppppppplVar11[0x23] = ppppppplVar12 + 10;
  pppppppplVar11[0x21] = ppppppplVar12;
  pppppppplVar11[0x22] = ppppppplVar12;
  pppppppplVar11[0x25] = (long *******)0xfffffffe;
  pppppppplVar11[0xe] = (long *******)FUN_71019ca580;
  pppppppplVar11[0xf] = (long *******)0x0;
  *(undefined2 *)(pppppppplVar11 + 0x26) = 1;
  *(undefined1 *)((long)pppppppplVar11 + 0x132) = 0;
  pppppppplVar11[0x10] = (long *******)FUN_71019ca590;
  pppppppplVar11[0x11] = (long *******)0x0;
  pppppppplVar11[10] = (long *******)0x0;
  pppppppplVar11[0xb] = (long *******)0x0;
  *(undefined8 *)((long)pppppppplVar11 + 0xd4) = 0;
  *(undefined8 *)((long)pppppppplVar11 + 0xcc) = 0;
  *(undefined8 *)((long)pppppppplVar11 + 0xc4) = 0;
  *(undefined8 *)((long)pppppppplVar11 + 0xbc) = 0;
  *(undefined8 *)((long)pppppppplVar11 + 0xb4) = 0;
  *(undefined8 *)((long)pppppppplVar11 + 0xac) = 0;
  *(undefined8 *)((long)pppppppplVar11 + 0xa4) = 0;
  *(undefined8 *)((long)pppppppplVar11 + 0x9c) = 0;
  *(undefined8 *)((long)pppppppplVar11 + 0x94) = 0;
  *(undefined8 *)((long)pppppppplVar11 + 0xdc) = 0xffffffff00000000;
  *(undefined8 *)((long)pppppppplVar11 + 0xe4) = 0xffffffff00000000;
  *(undefined1 *)((long)pppppppplVar11 + 0xec) = 0;
  *(undefined4 *)(pppppppplVar11 + 0x12) = 0;
  FUN_71019cacd0((long *)(pppppppplVar11 + 9));
  puVar10[0x10] = pppppppplVar11;
  local_d8 = (long ********)0x350c3e4c44;
  local_140 = &local_d8;
  ppppbVar22 = (byte ****)0x314b141360;
  ppuVar19 = (undefined **)&local_140;
  pppplVar23 = (long ****)0x1;
  local_138 = (long ********)0x1;
  FUN_71032cb040((long)pppppppplVar11,plVar2,(long ****)ppuVar19,(byte ****)0x314b141360,
                 (long ****)0x1,param_6,param_7,param_8);
  if (pppppppplVar11[3] == pppppppplVar11[2]) {
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_out_of_range();
  }
  pppppplVar35 = *pppppppplVar11[2];
  if (((DAT_71053144d8 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_71053144d8), iVar8 != 0)) {
    FUN_7101764000();
    ppuVar19 = &PTR_LOOP_7104f17000;
    FUN_71000001c0();
    __cxa_guard_release(&DAT_71053144d8);
  }
  pppplVar36 = **pppppplVar35;
  uVar24 = DAT_7105307b68._4_4_ - 3;
  pppplVar37 = pppplVar36 + 1;
  ppplVar30 = *pppplVar36;
  *(undefined4 *)(ppplVar30[0xc0] + 3) = 0x40000;
  pplVar25 = ppplVar30[0xc0];
  if ((uVar24 < 4) && ((0xbU >> (ulong)(uVar24 & 0xf) & 1) != 0)) {
    *(undefined4 *)((long)pplVar25 + 0x1c) = 0;
    FUN_7103776640(&local_140,(long)pppplVar37,(byte ****)"set_btn_keyhelp_00",ppuVar19,ppppbVar22,
                   pppplVar23,param_6,param_7,param_8);
    pppppppplVar6 = local_138;
    if ((*(long *)((long)local_138 + 8) != 0) &&
       (lVar26 = *(long *)(*(long *)((long)local_138 + 8) + 0x18), lVar26 != 0)) {
      *(byte *)(lVar26 + 0x58) = *(byte *)(lVar26 + 0x58) & 0xfe;
    }
    local_140 = (long *********)&PTR_FUN_710523d988;
    local_138 = (long ********)0x0;
    if (pppppppplVar6 != (long ********)0x0) {
      uVar9 = *(ulong *)((long)pppppppplVar6 + 0x18);
      *(undefined ***)((long)pppppppplVar6 + 0x10) = &PTR_FUN_710523d9a8;
      *(undefined8 *)((long)pppppppplVar6 + 0x18) = 0;
      if (uVar9 != 0) {
        FUN_710392eb40(uVar9);
      }
      FUN_710392eb40((ulong)pppppppplVar6);
    }
  }
  else {
    *(undefined4 *)((long)pplVar25 + 0x1c) = 0x400;
  }
  FUN_7103776640(&local_140,(long)pppplVar37,(byte ****)"set_parts_stick",ppuVar19,ppppbVar22,
                 pppplVar23,param_6,param_7,param_8);
  FUN_71019e0b00((long)&local_140);
  ppppppplVar12 = pppppppplVar11[8];
  ppppppppplVar13 =
       (long *********)
       FUN_710392e290(0x10,0x38,(long ****)ppuVar19,ppppbVar22,pppplVar23,param_6,param_7,param_8);
  if (ppppppppplVar13 == (long *********)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_188 = (long *********)((ulong)local_188._4_4_ << 0x20);
      local_d8 = (long ********)&DAT_00000038;
      ppppppppplVar13 = &local_d8;
      uVar9 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_188);
      if (((uVar9 & 1) != 0) &&
         (ppppppppplVar13 =
               (long *********)
               FUN_710392e290(0x10,0x38,(long ****)ppppppppplVar13,ppppbVar22,pppplVar23,param_6,
                              param_7,param_8), ppppppppplVar13 != (long *********)0x0))
      goto LAB_7101808da4;
    }
    ppppppppplVar13 = (long *********)0x0;
  }
LAB_7101808da4:
  ppppppppplVar13[5] = (long ********)0x0;
  ppppppppplVar13[6] = (long ********)0x0;
  *ppppppppplVar13 = (long ********)&PTR_FUN_71050a7a58;
  ppppppppplVar13[2] = pppppppplVar11;
  ppppppppplVar13[3] = (long ********)FUN_71019cada0;
  ppppppppplVar13[4] = (long ********)0x0;
  pppplVar36 = (long ****)&local_188;
  *(undefined4 *)(ppppppppplVar13 + 1) = 0;
  local_188 = ppppppppplVar13;
  FUN_7103376af0((long)ppppppplVar12,(byte *)"set_random",pppplVar36,ppppbVar22,pppplVar23,param_6,
                 param_7,param_8);
  ppppppppplVar13 = local_188;
  local_188 = (long *********)0x0;
  if (ppppppppplVar13 != (long *********)0x0) {
    (*(code *)(*ppppppppplVar13)[1])();
  }
  ppppppplVar12 = pppppppplVar11[8];
  ppplVar30 = (long ***)
              FUN_710392e290(0x10,0x38,pppplVar36,ppppbVar22,pppplVar23,param_6,param_7,param_8);
  if (ppplVar30 == (long ***)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_70 = (long ***)((ulong)local_70._4_4_ << 0x20);
      local_d8 = (long ********)&DAT_00000038;
      ppppppppplVar13 = &local_d8;
      uVar9 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_70);
      if (((uVar9 & 1) != 0) &&
         (ppplVar30 = (long ***)
                      FUN_710392e290(0x10,0x38,(long ****)ppppppppplVar13,ppppbVar22,pppplVar23,
                                     param_6,param_7,param_8), ppplVar30 != (long ***)0x0))
      goto LAB_7101808e50;
    }
    ppplVar30 = (long ***)0x0;
  }
LAB_7101808e50:
  *ppplVar30 = (long **)&PTR_FUN_71050a7a58;
  ppplVar30[5] = (long **)0x0;
  ppplVar30[6] = (long **)0x0;
  ppplVar30[2] = (long **)pppppppplVar11;
  pppplVar36 = (long ****)&local_70;
  ppplVar30[3] = (long **)FUN_71019cae30;
  ppplVar30[4] = (long **)0x0;
  *(undefined4 *)(ppplVar30 + 1) = 0;
  local_70 = ppplVar30;
  FUN_7103376af0((long)ppppppplVar12,(byte *)"switch_favorite",pppplVar36,ppppbVar22,pppplVar23,
                 param_6,param_7,param_8);
  ppplVar30 = local_70;
  local_70 = (long ***)0x0;
  if (ppplVar30 != (long ***)0x0) {
    (*(code *)(*ppplVar30)[1])();
  }
  ppppppplVar12 = pppppppplVar11[8];
  ppplVar30 = (long ***)
              FUN_710392e290(0x10,0x38,pppplVar36,ppppbVar22,pppplVar23,param_6,param_7,param_8);
  if (ppplVar30 == (long ***)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_78 = (long ***)((ulong)local_78._4_4_ << 0x20);
      local_d8 = (long ********)&DAT_00000038;
      ppppppppplVar13 = &local_d8;
      uVar9 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_78);
      if (((uVar9 & 1) != 0) &&
         (ppplVar30 = (long ***)
                      FUN_710392e290(0x10,0x38,(long ****)ppppppppplVar13,ppppbVar22,pppplVar23,
                                     param_6,param_7,param_8), ppplVar30 != (long ***)0x0))
      goto LAB_7101808ef4;
    }
    ppplVar30 = (long ***)0x0;
  }
LAB_7101808ef4:
  *ppplVar30 = (long **)&PTR_FUN_71050a7a80;
  ppplVar30[2] = (long **)pppppppplVar11;
  ppplVar30[3] = (long **)0x0;
  ppplVar30[6] = (long **)0x0;
  ppplVar30[4] = (long **)0x0;
  ppplVar30[5] = (long **)FUN_71019cb110;
  pcVar20 = (char *)&local_78;
  *(undefined4 *)(ppplVar30 + 1) = 1;
  local_78 = ppplVar30;
  FUN_7103376af0((long)ppppppplVar12,(byte *)"is_empty_name",(long ****)pcVar20,ppppbVar22,
                 pppplVar23,param_6,param_7,param_8);
  ppplVar30 = local_78;
  local_78 = (long ***)0x0;
  if (ppplVar30 != (long ***)0x0) {
    (*(code *)(*ppplVar30)[1])();
  }
  if (*pppppppplVar11[8] == (long ******)0x0) {
LAB_7101809110:
    uVar24 = (uint)(DAT_7105307b8c == '\0' || DAT_7105307b9c != 0);
  }
  else {
    pcVar20 = &DAT_71042b2a84;
    ppppbVar22 = (byte ****)0xfffffffe;
    FUN_7103375650((long *)*pppppppplVar11[8],"EXIT_VALUE_CANCEL",&DAT_71042b2a84);
    if (*pppppppplVar11[8] == (long ******)0x0) goto LAB_7101809110;
    pcVar20 = &DAT_71042b2a84;
    ppppbVar22 = (byte ****)&DAT_ffffffff;
    FUN_7103375650((long *)*pppppppplVar11[8],"EXIT_VALUE_DECIDE",&DAT_71042b2a84);
    if (*pppppppplVar11[8] == (long ******)0x0) goto LAB_7101809110;
    pcVar20 = &DAT_71042b2a84;
    ppppbVar22 = (byte ****)0x6;
    FUN_7103375650((long *)*pppppppplVar11[8],"INPUT_COMMON_BUTTON",&DAT_71042b2a84);
    if (*pppppppplVar11[8] == (long ******)0x0) goto LAB_7101809110;
    pcVar20 = &DAT_71042b2a84;
    ppppbVar22 = (byte ****)&DAT_00000007;
    FUN_7103375650((long *)*pppppppplVar11[8],"INPUT_FAVORITE",&DAT_71042b2a84);
    if (*pppppppplVar11[8] == (long ******)0x0) goto LAB_7101809110;
    pcVar20 = &DAT_71043cdb7b;
    FUN_7103375650((long *)*pppppppplVar11[8],"IS_NEED_SAVE",&DAT_71043cdb7b);
    ppppbVar22 = ppppbVar33;
    if (*pppppppplVar11[8] == (long ******)0x0) goto LAB_7101809110;
    ppppbVar22 = (byte ****)(ulong)(byte)DAT_7105307d3c;
    pcVar20 = &DAT_71043cdb7b;
    FUN_7103375650((long *)*pppppppplVar11[8],"FROM_AMIIBO",&DAT_71043cdb7b);
    if (*pppppppplVar11[8] == (long ******)0x0) goto LAB_7101809110;
    ppppbVar22 = (byte ****)(ulong)DAT_7105307d3c._1_1_;
    pcVar20 = &DAT_71043cdb7b;
    FUN_7103375650((long *)*pppppppplVar11[8],"IS_NEW_CREATE_AMIIBO",&DAT_71043cdb7b);
    if (*pppppppplVar11[8] == (long ******)0x0) goto LAB_7101809110;
    pcVar20 = &DAT_71042b2a84;
    ppppbVar22 = (byte ****)0x0;
    FUN_7103375650((long *)*pppppppplVar11[8],"AMIIBO_CONFIRM_RESULT_DECIDE",&DAT_71042b2a84);
    if (*pppppppplVar11[8] == (long ******)0x0) goto LAB_7101809110;
    pcVar20 = &DAT_71042b2a84;
    ppppbVar22 = (byte ****)0x1;
    FUN_7103375650((long *)*pppppppplVar11[8],"AMIIBO_CONFIRM_RESULT_CANCEL",&DAT_71042b2a84);
    if (*pppppppplVar11[8] == (long ******)0x0) goto LAB_7101809110;
    ppppbVar22 = (byte ****)(ulong)(DAT_7105307b8c != '\0');
    pcVar20 = &DAT_71043cdb7b;
    FUN_7103375650((long *)*pppppppplVar11[8],"IS_READ_ONLY",&DAT_71043cdb7b);
    uVar24 = (uint)(DAT_7105307b8c == '\0' || DAT_7105307b9c != 0);
    if (*pppppppplVar11[8] != (long ******)0x0) {
      pcVar20 = &DAT_71043cdb7b;
      ppppbVar22 = (byte ****)(ulong)uVar24;
      FUN_7103375650((long *)*pppppppplVar11[8],"IS_SKILL_EDITABLE",&DAT_71043cdb7b);
    }
  }
  FUN_7103776910(&local_d8,(long)pppplVar37,(long ****)"set_txt_unedit",pcVar20,ppppbVar22,
                 pppplVar23,param_6,param_7,param_8);
  pcVar3 = "mnu_mmiif_setup_miifighter_limit_edit";
  if (uVar24 == 0) {
    pcVar3 = "mnu_mmiif_setup_miifighter_no_edit";
  }
  FUN_710377a120((long)&local_d8,pcVar3,pcVar20,ppppbVar22,pppplVar23,param_6,param_7,param_8);
  uVar9 = local_d0;
  local_d8 = (long ********)&PTR_FUN_710523d9a8;
  local_d0 = 0;
  if (uVar9 != 0) {
    FUN_710392eb40(uVar9);
  }
  lVar26 = *(long *)(*(long *)(DAT_710532f730 + 8) + 0x168);
  puVar14 = FUN_71032631a0(lVar26,0x15d7061f77);
  if ((((ulong)ppppppppplVar5 & 0xff00000000000000) == 0xc100000000000000) &&
     (((ulong)ppppppppplVar5 & 0xffffffffff) != 0)) {
    if (((((ulong)puVar14 & 0xff00000000000000) == 0xc100000000000000) &&
        (((ulong)puVar14 & 0xffffffffff) != 0)) &&
       ((((ulong)puVar14 ^ (ulong)ppppppppplVar5) & 0xffffffffff) == 0)) {
      ppppbVar33 = (byte ****)0x2;
    }
    else {
      puVar14 = FUN_71032631a0(lVar26,0x1257ab1d87);
      uVar28 = (ulong)puVar14 & 0xff00000000000000;
      uVar9 = (ulong)puVar14 & 0xffffffffff;
      if ((uVar28 != 0xc100000000000000) || (uVar9 == 0)) goto LAB_7101809244;
      bVar7 = (((ulong)puVar14 ^ (ulong)ppppppppplVar5) & 0xffffffffff) == 0;
LAB_7101809274:
      uVar24 = 3;
      if (!bVar7) {
        uVar24 = 1;
      }
      ppppbVar33 = (byte ****)(ulong)uVar24;
    }
  }
  else {
    ppppbVar33 = (byte ****)0x2;
    if ((((ulong)puVar14 & 0xff00000000000000) == 0xc100000000000000) &&
       (((ulong)puVar14 & 0xffffffffff) != 0)) {
      puVar14 = FUN_71032631a0(lVar26,0x1257ab1d87);
      uVar9 = (ulong)puVar14 & 0xffffffffff;
      uVar28 = (ulong)puVar14 & 0xff00000000000000;
LAB_7101809244:
      bVar7 = (uVar9 != 0 && uVar28 == 0xc100000000000000) ==
              (((ulong)ppppppppplVar5 & 0xff00000000000000) == 0xc100000000000000 &&
              ((ulong)ppppppppplVar5 & 0xffffffffff) != 0);
      goto LAB_7101809274;
    }
  }
  ppppppplVar12 = pppppppplVar11[8];
  if (*ppppppplVar12 != (long ******)0x0) {
    pcVar20 = &DAT_71042b2a84;
    FUN_7103375650((long *)*ppppppplVar12,"EDIT_MII_TYPE",&DAT_71042b2a84);
    ppppppplVar12 = pppppppplVar11[8];
  }
  FUN_71019e0910(ppppppplVar12);
  ppppppplVar12 = pppppppplVar11[8];
  pppppplVar35 = *ppppppplVar12;
  ppppplVar34 = *pppppplVar35;
  *(undefined4 *)(pppppplVar35 + 2) = 0;
  pppplVar36 = ppppplVar34[2];
  *pppplVar36 = (long ***)ppppplVar34;
  *(undefined4 *)(pppplVar36 + 1) = 0x48;
  pppplVar36 = ppppplVar34[2];
  ppppplVar34[2] = pppplVar36 + 2;
  ppppplVar31 = (long *****)ppppplVar34[3][0x19];
  ppppplVar34[2] = pppplVar36;
  if (ppppplVar31 == ppppplVar34) {
    ppplVar30 = ppppplVar34[3][8];
    if (*(uint *)((long)ppplVar30 + 0xc) < 2) {
      pplVar25 = ppplVar30[3] +
                 ((ulong)~(uint)(0xffffffffL << ((ulong)*(byte *)((long)ppplVar30 + 0xb) & 0x3f)) &
                 2) * 4;
      do {
        if ((*(int *)(pplVar25 + 3) == 0x13) && (pplVar17 = pplVar25, pplVar25[2] == (long *)0x2))
        break;
        piVar1 = (int *)((long)pplVar25 + 0x1c);
        pplVar25 = pplVar25 + (long)*piVar1 * 4;
        pplVar17 = (long **)&DAT_7104862960;
      } while (*piVar1 != 0);
    }
    else {
      pplVar17 = ppplVar30[2] + 2;
    }
    pcVar20 = "initialize";
    FUN_71038f4d40((long)ppppplVar34,(long *)pplVar17,"initialize");
    uVar16 = extraout_x1_00;
  }
  else {
    FUN_71038f4b20((long)ppppplVar34,"initialize");
    FUN_71038f4fc0((long)ppppplVar34,-2);
    uVar16 = extraout_x1;
  }
  pppplVar36 = ppppplVar34[2] + -2;
  if ((pppplVar36 == (long ****)&DAT_7104862960) || (((ulong)ppppplVar34[2][-1] & 0xf) != 6)) {
    ppppplVar34[2] = pppplVar36;
  }
  else {
    FUN_7103377130(ppppppplVar12,0,(long ****)pcVar20,ppppbVar33,pppplVar23,param_6,param_7,param_8)
    ;
    uVar16 = extraout_x1_01;
  }
  pppppppplVar11 = local_138;
  local_140 = (long *********)&PTR_FUN_710523d988;
  local_138 = (long ********)0x0;
  if (pppppppplVar11 != (long ********)0x0) {
    uVar9 = *(ulong *)((long)pppppppplVar11 + 0x18);
    *(undefined ***)((long)pppppppplVar11 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)((long)pppppppplVar11 + 0x18) = 0;
    if (uVar9 != 0) {
      FUN_710392eb40(uVar9);
    }
    FUN_710392eb40((ulong)pppppppplVar11);
    uVar16 = extraout_x1_02;
  }
  *(undefined1 *)(puVar10 + 0xe) = 1;
  puVar10[2] = &DAT_7105333600;
  *(undefined4 *)(puVar10 + 0xd) = DAT_7105333660;
  *(undefined4 *)((long)puVar10 + 0x6c) = DAT_7105333664;
  do {
    uVar24 = DAT_7105333650;
    cVar4 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(0x7105333650,0x10);
    if (bVar7) {
      DAT_7105333650 = 1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0' || (uVar24 & 1) != 0);
  puVar10[9] = DAT_7105333648;
  DAT_7105333650 = 0;
  DAT_7105333648 = puVar10;
  FUN_71032caea0((long)puVar10,uVar16,(long ****)pcVar20,ppppbVar33,pppplVar23,param_6,param_7,
                 param_8);
  lVar26 = *(long *)(param_1 + 0x178);
  *(undefined8 **)(param_1 + 0x178) = puVar10;
  if (lVar26 != 0) {
    FUN_71032cad20(lVar26);
    puVar10 = *(undefined8 **)(param_1 + 0x178);
  }
  *(undefined1 *)(puVar10 + 0xe) = 1;
  local_c8 = DAT_7105307cd0;
  uStack_c0 = DAT_7105307cd8;
  local_d8 = DAT_7105307cc0;
  local_d0 = DAT_7105307cc8;
  local_a8 = DAT_7105307cf0;
  uStack_a0 = DAT_7105307cf8;
  local_b8 = DAT_7105307ce0;
  uStack_b0 = DAT_7105307ce8;
  local_90 = DAT_7105307d08;
  uStack_88 = DAT_7105307d10;
  local_98 = DAT_7105307d00;
  local_80 = DAT_7105307cb0;
  puVar10 = (undefined8 *)
            FUN_710392e290(0x10,0x88,(long ****)pcVar20,ppppbVar33,pppplVar23,param_6,param_7,
                           param_8);
  if (puVar10 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_188 = (long *********)((ulong)local_188 & 0xffffffff00000000);
      local_140 = (long *********)&DAT_00000088;
      pppppppppplVar18 = &local_140;
      uVar9 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_188);
      if (((uVar9 & 1) != 0) &&
         (puVar10 = (undefined8 *)
                    FUN_710392e290(0x10,0x88,(long ****)pppppppppplVar18,ppppbVar33,pppplVar23,
                                   param_6,param_7,param_8), puVar10 != (undefined8 *)0x0))
      goto LAB_710180950c;
    }
    puVar10 = (undefined8 *)0x0;
  }
LAB_710180950c:
  pCVar21 = (CharInfo *)&local_d8;
  FUN_71019ceb30(puVar10,plVar2,pCVar21,ppppbVar33,pppplVar23,param_6,param_7,param_8);
  puVar10[2] = &DAT_7105333600;
  *(undefined4 *)(puVar10 + 0xd) = DAT_7105333660;
  *(undefined4 *)((long)puVar10 + 0x6c) = DAT_7105333664;
  do {
    uVar24 = DAT_7105333650;
    cVar4 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(0x7105333650,0x10);
    if (bVar7) {
      DAT_7105333650 = 1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0' || (uVar24 & 1) != 0);
  puVar10[9] = DAT_7105333648;
  DAT_7105333650 = 0;
  DAT_7105333648 = puVar10;
  FUN_71032caea0((long)puVar10,extraout_x1_03,(long ****)pCVar21,ppppbVar33,pppplVar23,param_6,
                 param_7,param_8);
  lVar26 = *(long *)(param_1 + 0x180);
  *(undefined8 **)(param_1 + 0x180) = puVar10;
  if (lVar26 != 0) {
    FUN_71032cad20(lVar26);
    puVar10 = *(undefined8 **)(param_1 + 0x180);
  }
  *(undefined1 *)(puVar10 + 0xe) = 1;
  local_140 = DAT_7105307d18;
  local_128 = DAT_7105307cd0;
  uStack_120 = DAT_7105307cd8;
  local_e8 = DAT_7105307d10;
  local_138 = DAT_7105307cc0;
  uStack_130 = DAT_7105307cc8;
  local_108 = DAT_7105307cf0;
  uStack_100 = DAT_7105307cf8;
  local_118 = DAT_7105307ce0;
  uStack_110 = DAT_7105307ce8;
  local_f8 = DAT_7105307d00;
  uStack_f0 = DAT_7105307d08;
  local_e0 = DAT_7105307ca8;
  puVar10 = (undefined8 *)
            FUN_710392e290(0x10,0x88,(long ****)pCVar21,ppppbVar33,pppplVar23,param_6,param_7,
                           param_8);
  if (puVar10 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_70 = (long ***)((ulong)local_70 & 0xffffffff00000000);
      local_188 = (long *********)&DAT_00000088;
      pppplVar36 = (long ****)&local_188;
      uVar9 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_70);
      if (((uVar9 & 1) != 0) &&
         (puVar10 = (undefined8 *)
                    FUN_710392e290(0x10,0x88,pppplVar36,ppppbVar33,pppplVar23,param_6,param_7,
                                   param_8), puVar10 != (undefined8 *)0x0)) goto LAB_7101809624;
    }
    puVar10 = (undefined8 *)0x0;
  }
LAB_7101809624:
  pppppppppplVar18 = &local_140;
  FUN_71019c7830(puVar10,plVar2,(long ****)pppppppppplVar18,ppppbVar33,pppplVar23,param_6,param_7,
                 param_8);
  puVar10[2] = &DAT_7105333600;
  *(undefined4 *)(puVar10 + 0xd) = DAT_7105333660;
  *(undefined4 *)((long)puVar10 + 0x6c) = DAT_7105333664;
  do {
    uVar24 = DAT_7105333650;
    cVar4 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(0x7105333650,0x10);
    if (bVar7) {
      DAT_7105333650 = 1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0' || (uVar24 & 1) != 0);
  puVar10[9] = DAT_7105333648;
  DAT_7105333650 = 0;
  DAT_7105333648 = puVar10;
  FUN_71032caea0((long)puVar10,extraout_x1_04,(long ****)pppppppppplVar18,ppppbVar33,pppplVar23,
                 param_6,param_7,param_8);
  lVar26 = *(long *)(param_1 + 0x188);
  *(undefined8 **)(param_1 + 0x188) = puVar10;
  if (lVar26 != 0) {
    FUN_71032cad20(lVar26);
    puVar10 = *(undefined8 **)(param_1 + 0x188);
  }
  *(undefined1 *)(puVar10 + 0xe) = 1;
  puVar10 = (undefined8 *)
            FUN_710392e290(0x10,0x88,(long ****)pppppppppplVar18,ppppbVar33,pppplVar23,param_6,
                           param_7,param_8);
  if (puVar10 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_70 = (long ***)((ulong)local_70 & 0xffffffff00000000);
      local_188 = (long *********)&DAT_00000088;
      pppppppppplVar18 = (long **********)&local_188;
      uVar9 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_70);
      if (((uVar9 & 1) != 0) &&
         (puVar10 = (undefined8 *)
                    FUN_710392e290(0x10,0x88,(long ****)pppppppppplVar18,ppppbVar33,pppplVar23,
                                   param_6,param_7,param_8), puVar10 != (undefined8 *)0x0))
      goto LAB_71018096f8;
    }
    puVar10 = (undefined8 *)0x0;
  }
LAB_71018096f8:
  FUN_71019c9340(puVar10,plVar2,(byte ****)pppppppppplVar18,ppppbVar33,pppplVar23,param_6,param_7,
                 param_8);
  puVar10[2] = &DAT_7105333600;
  *(undefined4 *)(puVar10 + 0xd) = DAT_7105333660;
  *(undefined4 *)((long)puVar10 + 0x6c) = DAT_7105333664;
  do {
    uVar24 = DAT_7105333650;
    cVar4 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(0x7105333650,0x10);
    if (bVar7) {
      DAT_7105333650 = 1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0' || (uVar24 & 1) != 0);
  puVar10[9] = DAT_7105333648;
  DAT_7105333650 = 0;
  DAT_7105333648 = puVar10;
  FUN_71032caea0((long)puVar10,extraout_x1_05,(long ****)pppppppppplVar18,ppppbVar33,pppplVar23,
                 param_6,param_7,param_8);
  lVar26 = *(long *)(param_1 + 400);
  *(undefined8 **)(param_1 + 400) = puVar10;
  if (lVar26 != 0) {
    FUN_71032cad20(lVar26);
    puVar10 = *(undefined8 **)(param_1 + 400);
  }
  *(undefined1 *)(puVar10 + 0xe) = 1;
  puVar10 = (undefined8 *)
            FUN_710392e290(0x10,0x88,(long ****)pppppppppplVar18,ppppbVar33,pppplVar23,param_6,
                           param_7,param_8);
  if (puVar10 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_70 = (long ***)((ulong)local_70 & 0xffffffff00000000);
      local_188 = (long *********)&DAT_00000088;
      pppplVar36 = (long ****)&local_188;
      uVar9 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_70);
      if (((uVar9 & 1) != 0) &&
         (puVar10 = (undefined8 *)
                    FUN_710392e290(0x10,0x88,pppplVar36,ppppbVar33,pppplVar23,param_6,param_7,
                                   param_8), puVar10 != (undefined8 *)0x0)) goto LAB_71018097c8;
    }
    puVar10 = (undefined8 *)0x0;
  }
LAB_71018097c8:
  ppuVar19 = (undefined **)DAT_7105307d18;
  FUN_71019ddb30(puVar10,plVar2,(long ****)DAT_7105307d18,ppppbVar33,pppplVar23,param_6,param_7,
                 param_8);
  puVar10[2] = &DAT_7105333600;
  *(undefined4 *)(puVar10 + 0xd) = DAT_7105333660;
  *(undefined4 *)((long)puVar10 + 0x6c) = DAT_7105333664;
  do {
    uVar24 = DAT_7105333650;
    cVar4 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(0x7105333650,0x10);
    if (bVar7) {
      DAT_7105333650 = 1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0' || (uVar24 & 1) != 0);
  puVar10[9] = DAT_7105333648;
  DAT_7105333650 = 0;
  DAT_7105333648 = puVar10;
  FUN_71032caea0((long)puVar10,extraout_x1_06,(long ****)ppuVar19,ppppbVar33,pppplVar23,param_6,
                 param_7,param_8);
  lVar26 = *(long *)(param_1 + 0x198);
  *(undefined8 **)(param_1 + 0x198) = puVar10;
  if (lVar26 != 0) {
    FUN_71032cad20(lVar26);
    puVar10 = *(undefined8 **)(param_1 + 0x198);
  }
  *(undefined1 *)(puVar10 + 0xe) = 1;
  puVar10 = (undefined8 *)
            FUN_710392e290(0x10,0x88,(long ****)ppuVar19,ppppbVar33,pppplVar23,param_6,param_7,
                           param_8);
  if (puVar10 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_70 = (long ***)((ulong)local_70 & 0xffffffff00000000);
      local_188 = (long *********)&DAT_00000088;
      ppuVar19 = (undefined **)&local_188;
      uVar9 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_70);
      if (((uVar9 & 1) != 0) &&
         (puVar10 = (undefined8 *)
                    FUN_710392e290(0x10,0x88,(long ****)ppuVar19,ppppbVar33,pppplVar23,param_6,
                                   param_7,param_8), puVar10 != (undefined8 *)0x0))
      goto LAB_710180989c;
    }
    puVar10 = (undefined8 *)0x0;
  }
LAB_710180989c:
  FUN_71019e33e0(puVar10,plVar2,(long ****)ppuVar19,ppppbVar33,pppplVar23,param_6,param_7,param_8);
  puVar10[2] = &DAT_7105333600;
  *(undefined4 *)(puVar10 + 0xd) = DAT_7105333660;
  *(undefined4 *)((long)puVar10 + 0x6c) = DAT_7105333664;
  do {
    uVar24 = DAT_7105333650;
    cVar4 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(0x7105333650,0x10);
    if (bVar7) {
      DAT_7105333650 = 1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0' || (uVar24 & 1) != 0);
  puVar10[9] = DAT_7105333648;
  DAT_7105333650 = 0;
  DAT_7105333648 = puVar10;
  FUN_71032caea0((long)puVar10,extraout_x1_07,(long ****)ppuVar19,ppppbVar33,pppplVar23,param_6,
                 param_7,param_8);
  lVar26 = *(long *)(param_1 + 0x1a0);
  *(undefined8 **)(param_1 + 0x1a0) = puVar10;
  if (lVar26 != 0) {
    FUN_71032cad20(lVar26);
    puVar10 = *(undefined8 **)(param_1 + 0x1a0);
  }
  *(undefined1 *)(puVar10 + 0xe) = 1;
  if ((byte)DAT_7105307d3c == 0) {
    FUN_71033093b0(*(long *)(DAT_710532f8b0 + 8),plVar2,ppuVar19,ppppbVar33,pppplVar23,param_6,
                   param_7,param_8);
  }
  puVar10 = (undefined8 *)
            FUN_710392e290(0x10,0x301c,(long ****)ppuVar19,ppppbVar33,pppplVar23,param_6,param_7,
                           param_8);
  if (puVar10 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_70 = (long ***)((ulong)local_70 & 0xffffffff00000000);
      local_188 = (long *********)0x301c;
      ppuVar19 = (undefined **)&local_188;
      uVar9 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_70);
      if (((uVar9 & 1) != 0) &&
         (puVar10 = (undefined8 *)
                    FUN_710392e290(0x10,0x301c,(long ****)ppuVar19,ppppbVar33,pppplVar23,param_6,
                                   param_7,param_8), puVar10 != (undefined8 *)0x0))
      goto LAB_7101809988;
    }
    puVar10 = (undefined8 *)0x0;
  }
LAB_7101809988:
  *(undefined4 *)(puVar10 + 1) = 0;
  *(undefined2 *)((long)puVar10 + 0xc) = 0;
  *(undefined8 *)((long)puVar10 + 0x100c) = 0;
  *(undefined2 *)((long)puVar10 + 0x1014) = 0;
  *(undefined8 *)((long)puVar10 + 0x2014) = 0;
  *(undefined2 *)((long)puVar10 + 0x201c) = 0;
  *puVar10 = 2;
  uVar29 = 0x6d;
  local_180 = 0x69696d6d5f756e6d;
  local_178 = 0x616f6279656b5f66;
  local_170 = 0x5f64;
  uVar24 = 0x811c9dc5;
  local_16e = 0x706c6568;
  lVar26 = 9;
  local_16a = 0;
  do {
    uVar24 = uVar24 * 0x89 ^ uVar29;
    uVar29 = (uint)*(byte *)((long)&local_188 + lVar26);
    lVar26 = lVar26 + 1;
  } while (uVar29 != 0);
  local_188 = (long *********)CONCAT44(0x16,uVar24);
  FUN_7103391610((long)puVar10,(long)&local_188);
  FUN_7103391f40(*(long **)(param_1 + 0x170),(undefined4 *)puVar10);
  FUN_71019e1d60(*DAT_7105324ad8,0x7105307b78,(long ****)ppuVar19,ppppbVar33,pppplVar23,param_6,
                 param_7,param_8);
  FUN_71019e27c0(*DAT_7105324ad8,0x7105307b78,ppuVar19,ppppbVar33,pppplVar23,param_6,param_7,param_8
                );
  puVar15 = (undefined8 *)
            FUN_710392e290(0x10,8,(long ****)ppuVar19,ppppbVar33,pppplVar23,param_6,param_7,param_8)
  ;
  if (puVar15 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_70 = (long ***)((ulong)local_70 & 0xffffffff00000000);
      local_188 = (long *********)&DAT_00000008;
      ppuVar19 = (undefined **)&local_188;
      uVar9 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_70);
      if (((uVar9 & 1) != 0) &&
         (puVar15 = (undefined8 *)
                    FUN_710392e290(0x10,8,(long ****)ppuVar19,ppppbVar33,pppplVar23,param_6,param_7,
                                   param_8), puVar15 != (undefined8 *)0x0)) goto LAB_7101809ad0;
    }
    puVar15 = (undefined8 *)0x0;
  }
LAB_7101809ad0:
  FUN_7103392770(puVar15,plVar2,ppuVar19,ppppbVar33,pppplVar23,param_6,param_7,param_8);
  puVar32 = *(ulong **)(param_1 + 0x1a8);
  *(undefined8 **)(param_1 + 0x1a8) = puVar15;
  uVar16 = extraout_x1_08;
  if (puVar32 != (ulong *)0x0) {
    uVar9 = *puVar32;
    *puVar32 = 0;
    if (uVar9 != 0) {
      if (*(uint *)(uVar9 + 0x10) != 0xffffff) {
        FUN_7103540b10(DAT_7105332f20,*(uint *)(uVar9 + 0x10),(long *********)ppuVar19,ppppbVar33,
                       pppplVar23,param_6,param_7,param_8);
        *(undefined4 *)(uVar9 + 0x10) = 0xffffff;
      }
      FUN_710392eb40(uVar9);
    }
    FUN_710392eb40((ulong)puVar32);
    uVar16 = extraout_x1_09;
  }
  *(long **********)(param_1 + 0x1b8) = DAT_7105307cb0;
  *(long **********)(param_1 + 0x1c0) = DAT_7105307ca8;
  puVar15 = DAT_7105314510;
  puVar27 = *(undefined8 **)((char *)*DAT_7105314510 + 0x98);
  if (*(char *)*DAT_7105314510 == '\0') {
    uVar24 = (uint)*(byte *)(*(long *)*puVar27 + 1);
  }
  else {
    uVar24 = 0;
  }
  *(uint *)(param_1 + 0x1c8) = uVar24;
  if (*(char *)*puVar15 == '\0') {
    uVar24 = (uint)*(byte *)(*(long *)*puVar27 + 2);
  }
  else {
    uVar24 = 0;
  }
  *(uint *)(param_1 + 0x1cc) = uVar24;
  lVar26 = *(long *)(param_1 + 0x178);
  if (((DAT_71053144d8 & 1) == 0) &&
     (iVar8 = __cxa_guard_acquire(&DAT_71053144d8), uVar16 = extraout_x1_10, iVar8 != 0)) {
    FUN_7101764000();
    ppuVar19 = &PTR_LOOP_7104f17000;
    FUN_71000001c0();
    __cxa_guard_release(&DAT_71053144d8);
    uVar16 = extraout_x1_11;
  }
  FUN_71019cb2e0(*(long *)(lVar26 + 0x80),uVar16,ppuVar19,ppppbVar33,pppplVar23,param_6,param_7,
                 param_8);
  *(undefined2 *)(param_1 + 0x161) = 0;
  if (0x12 < *(uint *)(param_1 + 0x144)) {
LAB_7101809e14:
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(undefined4 *)(param_1 + (long)(int)*(uint *)(param_1 + 0x144) * 4 + 0xf8) = 3;
  if ((byte)DAT_7105307d3c == 0) {
    lVar26 = *(long *)(param_1 + 0x1d8);
    *(undefined8 *)(lVar26 + 0xd8) = *(undefined8 *)(lVar26 + 0xd0);
    *(undefined8 *)(lVar26 + 0xf0) = *(undefined8 *)(lVar26 + 0xe8);
    *(undefined8 *)(lVar26 + 0x108) = *(undefined8 *)(lVar26 + 0x100);
    ppppppppplVar5 = DAT_7105307cb0;
    if (((((ulong)DAT_7105307cb0 >> 0x38 == 0x5a) && (((ulong)DAT_7105307cb0 & 0xffffffffff) != 0))
        && (uVar16 = FUN_71032871b0(*(long *)(*(long *)(DAT_710532f730 + 8) + 0x238),
                                    (ulong)DAT_7105307cb0), (int)uVar16 != 0)) &&
       (uVar9 = FUN_71017979d0((ulong)ppppppppplVar5), (uVar9 & 1) == 0)) {
      local_188 = DAT_7105307cb0;
      if ((((ulong)DAT_7105307cb0 & 0xff00000000000000) == 0x5a00000000000000) &&
         (((ulong)DAT_7105307cb0 & 0xffffffffff) != 0)) {
        FUN_7103383e20((undefined8 *)(*(long *)(param_1 + 0x1d8) + 0xe8),&local_188,
                       (long ****)ppuVar19,ppppbVar33,pppplVar23,param_6,param_7,param_8);
      }
    }
    ppppppppplVar5 = DAT_7105307ca8;
    if (((((ulong)DAT_7105307ca8 & 0xff00000000000000) == 0x1300000000000000) &&
        (((ulong)DAT_7105307ca8 & 0xffffffffff) != 0)) &&
       ((uVar16 = FUN_7103282c70(*(long *)(*(long *)(DAT_710532f730 + 8) + 0x248),
                                 (ulong)DAT_7105307ca8), (int)uVar16 != 0 &&
        (uVar9 = FUN_7101797ac0((ulong)ppppppppplVar5), (uVar9 & 1) == 0)))) {
      local_188 = DAT_7105307ca8;
      if ((((ulong)DAT_7105307ca8 & 0xff00000000000000) == 0x1300000000000000) &&
         (((ulong)DAT_7105307ca8 & 0xffffffffff) != 0)) {
        FUN_7103383ff0((undefined8 *)(*(long *)(param_1 + 0x1d8) + 0x100),&local_188,
                       (long ****)ppuVar19,ppppbVar33,pppplVar23,param_6,param_7,param_8);
      }
    }
    lVar26 = *(long *)(param_1 + 0x1d8);
    if ((((*(long *)(lVar26 + 0xd0) != *(long *)(lVar26 + 0xd8)) ||
         (*(long *)(lVar26 + 0xe8) != *(long *)(lVar26 + 0xf0))) ||
        (*(long *)(lVar26 + 0x100) != *(long *)(lVar26 + 0x108))) &&
       (*(int *)(param_1 + 0x144) < 0x12)) {
      uVar24 = *(int *)(param_1 + 0x144) + 1;
      *(uint *)(param_1 + 0x144) = uVar24;
      if (0x12 < uVar24) goto LAB_7101809e14;
      *(undefined4 *)(param_1 + (long)(int)uVar24 * 4 + 0xf8) = 2;
    }
  }
  if (puVar10 != (undefined8 *)0x0) {
    FUN_710392eb40((ulong)puVar10);
  }
  return;
}

