// addr:      71019c7830
// offset:    0x19c7830
// name:      FUN_71019c7830
// mangled:   
// signature: undefined __cdecl FUN_71019c7830(undefined8 * param_1, long * param_2, long * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_71019c7830(undefined8 *param_1,long *param_2,long ****param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  int *piVar1;
  long **pplVar2;
  uint *puVar3;
  ulong *puVar4;
  char cVar5;
  uint uVar6;
  uint *puVar7;
  bool bVar8;
  bool bVar9;
  long **pplVar10;
  long *plVar11;
  ulong uVar12;
  ulong uVar13;
  long ***ppplVar14;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 extraout_x1_02;
  undefined8 extraout_x1_03;
  undefined8 extraout_x1_04;
  undefined8 extraout_x1_05;
  undefined8 extraout_x1_06;
  undefined8 extraout_x1_07;
  undefined8 uVar15;
  long *plVar16;
  long ****pppplVar17;
  char *pcVar18;
  long ****pppplVar19;
  long ****pppplVar20;
  byte ****ppppbVar21;
  byte ****ppppbVar22;
  long ****pppplVar23;
  long ****pppplVar24;
  long **pplVar25;
  byte ***pppbVar26;
  long lVar27;
  undefined8 *puVar28;
  code *pcVar29;
  uint uVar30;
  uint uVar31;
  ulong uVar32;
  byte *pbVar33;
  ulong *__src;
  long lVar34;
  ulong *puVar35;
  ulong *puVar36;
  long *plVar37;
  long ***ppplVar38;
  long lVar39;
  undefined1 auVar40 [16];
  undefined8 local_240;
  undefined8 local_238;
  undefined8 local_230;
  long ***local_228;
  ulong local_220;
  long ***local_218;
  long ***local_210;
  long ***local_208;
  undefined8 local_200;
  char local_1f8 [8];
  undefined8 local_1f0;
  ulong uStack_1e8;
  undefined **local_1e0;
  ulong local_1d8;
  uint *local_1b8;
  uint *local_1b0;
  uint *puStack_1a8;
  undefined8 local_1a0;
  long *local_198;
  long *local_190;
  undefined2 local_188;
  undefined1 local_186;
  undefined4 local_185;
  undefined2 local_181;
  undefined1 local_17f;
  long alStack_170 [4];
  long *local_150;
  long alStack_140 [4];
  long *local_120;
  long alStack_110 [4];
  long *local_f0;
  long alStack_e0 [4];
  long *local_c0;
  long alStack_b0 [4];
  long *local_90;
  long ***local_80;
  undefined4 local_74 [5];
  
  *param_1 = &PTR_FUN_71050a79a0;
  param_1[1] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0x1ffffffff;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined1 *)(param_1 + 0xb) = 0;
  param_1[0xf] = param_2;
  *(undefined1 *)(param_1 + 0xe) = 1;
  param_1[9] = 0;
  param_1[10] = 0;
  pppplVar23 = param_3;
  pplVar10 = (long **)FUN_710392e290(0x10,0x170,param_3,param_4,param_5,param_6,param_7,param_8);
  uVar15 = extraout_x1;
  if (pplVar10 == (long **)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_200._0_4_ = 0;
      local_1a0 = (byte ***)&DAT_00000170;
      pppplVar23 = (long ****)&local_1a0;
      auVar40 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_200);
      uVar15 = auVar40._8_8_;
      if (((auVar40._0_8_ & 1) != 0) &&
         (pplVar10 = (long **)FUN_710392e290(0x10,0x170,pppplVar23,param_4,param_5,param_6,param_7,
                                             param_8), uVar15 = extraout_x1_00,
         pplVar10 != (long **)0x0)) goto LAB_71019c78e4;
    }
    pplVar10 = (long **)0x0;
  }
LAB_71019c78e4:
  *(undefined4 *)(pplVar10 + 1) = 0x1000;
  pplVar10[2] = (long *)0x0;
  pplVar10[3] = (long *)0x0;
  pplVar10[4] = (long *)0x0;
  pplVar10[7] = (long *)0x0;
  pplVar10[8] = (long *)0x0;
  pppplVar19 = (long ****)(pplVar10 + 0x20);
  pplVar10[6] = (long *)0x0;
  pplVar10[5] = (long *)(pplVar10 + 6);
  pppplVar24 = (long ****)(pplVar10 + 9);
  *pppplVar24 = (long ***)&PTR_FUN_71050a78d8;
  *pplVar10 = (long *)&DAT_71050a7880;
  *(undefined8 *)((long)pplVar10 + 0xe4) = 0xffffffff00000000;
  pplVar10[0xc] = (long *)0x0;
  pplVar10[0xd] = (long *)0x0;
  *(undefined4 *)((long)pplVar10 + 0xec) = 0;
  *(undefined4 *)(pplVar10 + 0x1e) = 0xffffffff;
  *(undefined1 *)((long)pplVar10 + 0xf4) = 0;
  *(undefined4 *)(pplVar10 + 0x1c) = 0;
  pplVar10[10] = (long *)pplVar10;
  pplVar10[0xb] = (long *)0x0;
  pplVar10[0x1a] = (long *)0x0;
  pplVar10[0x1b] = (long *)0x0;
  pplVar10[0x18] = (long *)0x0;
  pplVar10[0x19] = (long *)0x0;
  pplVar10[0x16] = (long *)0x0;
  pplVar10[0x17] = (long *)0x0;
  pplVar10[0x14] = (long *)0x0;
  pplVar10[0x15] = (long *)0x0;
  pplVar10[0x12] = (long *)0x0;
  pplVar10[0x13] = (long *)0x0;
  pplVar10[0x10] = (long *)0x0;
  pplVar10[0x11] = (long *)0x0;
  pplVar10[0xe] = (long *)0x0;
  pplVar10[0xf] = (long *)0x0;
  pplVar25 = pplVar10 + 0x1f;
  *pplVar25 = (long *)0x0;
  FUN_71032cc410(pppplVar19,uVar15,pppplVar23,param_4,param_5,param_6,param_7,param_8);
  pplVar10[0x27] = (long *)0x0;
  pplVar10[0x28] = (long *)0x13ffff0000000000;
  *(undefined2 *)(pplVar10 + 0x2d) = 0x100;
  pplVar10[0x29] = (long *)0x13ffff0000000000;
  pplVar10[0x2a] = (long *)0x13ffff0000000000;
  pplVar2 = pplVar10 + 0x25;
  pplVar10[0x2b] = (long *)0x13ffff0000000000;
  pplVar10[0x2c] = (long *)0x0;
  *(undefined8 *)((long)pplVar10 + 0xdc) = 0;
  *(undefined8 *)((long)pplVar10 + 0xd4) = 0;
  *(undefined8 *)((long)pplVar10 + 0xcc) = 0;
  *(undefined8 *)((long)pplVar10 + 0xc4) = 0;
  *(undefined8 *)((long)pplVar10 + 0xbc) = 0;
  *(undefined8 *)((long)pplVar10 + 0xb4) = 0;
  *(undefined8 *)((long)pplVar10 + 0xac) = 0;
  *(undefined8 *)((long)pplVar10 + 0xa4) = 0;
  *(undefined8 *)((long)pplVar10 + 0x9c) = 0;
  *(undefined4 *)((long)pplVar10 + 0xe4) = 0;
  *(undefined4 *)(pplVar10 + 0x1d) = 0xffffffff;
  *(undefined4 *)((long)pplVar10 + 0xec) = 0;
  *(undefined4 *)(pplVar10 + 0x1e) = 0xffffffff;
  *(undefined1 *)((long)pplVar10 + 0xf4) = 0;
  *(undefined4 *)(pplVar10 + 0x13) = 0;
  pplVar10[0x25] = (long *)0x0;
  pplVar10[0x26] = (long *)0x0;
  pplVar10[0xf] = (long *)FUN_71019c0f80;
  pplVar10[0x10] = (long *)0x0;
  pplVar10[0x11] = (long *)FUN_71019c0f90;
  pplVar10[0x12] = (long *)0x0;
  pplVar10[0xb] = (long *)0x0;
  pplVar10[0xc] = (long *)0x0;
  FUN_71019c14b0((long *)(pplVar10 + 10));
  ppppbVar21 = (byte ****)0x30c95391dc;
  param_1[0x10] = pplVar10;
  pppplVar23 = (long ****)0x1;
  FUN_71032cb040((long)pplVar10,param_2,(long ****)&PTR_DAT_71050a7908,(byte ****)0x30c95391dc,
                 (long ****)0x1,param_6,param_7,param_8);
  FUN_71032769f0(&local_1a0,(ulong)*param_3,(CharInfo *)(param_3 + 1),ppppbVar21,pppplVar23,param_6,
                 param_7,param_8);
  plVar11 = pplVar10[0x25];
  if (plVar11 != (long *)0x0) {
    pplVar10[0x26] = plVar11;
    FUN_710392eb40((ulong)plVar11);
    pplVar10[0x26] = (long *)0x0;
    pplVar10[0x27] = (long *)0x0;
    *pplVar2 = (long *)0x0;
  }
  pplVar10[0x25] = (long *)local_1a0;
  pplVar10[0x26] = local_198;
  pplVar10[0x27] = local_190;
  ppplVar38 = param_3[0xc];
  bVar9 = FUN_71032868d0(*(long *)(DAT_710532f730 + 8) + 0x240,(ulong)ppplVar38);
  if (bVar9) {
    if (pplVar10[0x26] == local_190) {
      __src = (ulong *)*pplVar2;
      pppplVar17 = (long ****)((long)local_190 - (long)__src);
      uVar13 = (long)pppplVar17 >> 3;
      uVar32 = uVar13 + 1;
      if (uVar32 >> 0x3d != 0) goto LAB_71019c891c;
      if (uVar13 < 0xfffffffffffffff) {
        if (uVar32 <= (ulong)((long)pppplVar17 >> 2)) {
          uVar32 = (long)pppplVar17 >> 2;
        }
        if (uVar32 != 0) {
          if (uVar32 >> 0x3d != 0) goto LAB_71019c7b90;
          goto LAB_71019c7b9c;
        }
        plVar11 = (long *)0x0;
      }
      else {
        uVar32 = 0x1fffffffffffffff;
LAB_71019c7b9c:
        pppbVar26 = (byte ***)(uVar32 * 8);
        if (pppbVar26 == (byte ***)0x0) {
          pppbVar26 = (byte ***)0x1;
        }
        plVar11 = (long *)FUN_710392e290(0x10,pppbVar26,pppplVar17,ppppbVar21,pppplVar23,param_6,
                                         param_7,param_8);
        if (plVar11 == (long *)0x0) {
          if (DAT_7105332f00 != (long *)0x0) {
            local_200._0_4_ = 0;
            pppplVar20 = (long ****)&local_1a0;
            local_1a0 = pppbVar26;
            uVar12 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_200);
            if (((uVar12 & 1) != 0) &&
               (plVar11 = (long *)FUN_710392e290(0x10,pppbVar26,pppplVar20,ppppbVar21,pppplVar23,
                                                 param_6,param_7,param_8), plVar11 != (long *)0x0))
            goto LAB_71019c7c00;
          }
          plVar11 = (long *)0x0;
        }
LAB_71019c7c00:
        ppplVar38 = param_3[0xc];
      }
      plVar11[uVar13] = (long)ppplVar38;
      if (0 < (long)pppplVar17) {
        memcpy(plVar11,__src,(size_t)pppplVar17);
      }
      pplVar10[0x25] = plVar11;
      pplVar10[0x26] = plVar11 + uVar13 + 1;
      pplVar10[0x27] = plVar11 + uVar32;
      if (__src != (ulong *)0x0) goto LAB_71019c7c38;
    }
    else {
      *pplVar10[0x26] = (long)ppplVar38;
LAB_71019c7b3c:
      pplVar10[0x26] = pplVar10[0x26] + 1;
    }
  }
  else {
    uVar32 = FUN_7101797ac0((ulong)ppplVar38);
    if ((uVar32 & 1) != 0) goto LAB_71019c7c40;
    __src = (ulong *)pplVar10[0x25];
    puVar4 = (ulong *)pplVar10[0x26];
    if (__src != puVar4) {
      ppplVar38 = param_3[0xc];
      bVar9 = ((ulong)ppplVar38 & 0xffffffffff) == 0;
      bVar8 = ((ulong)ppplVar38 & 0xff00000000000000) != 0x1300000000000000;
      puVar35 = __src;
      do {
        uVar32 = *puVar35;
        puVar36 = puVar35;
        if ((uVar32 & 0xff00000000000000) == 0x1300000000000000 && (uVar32 & 0xffffffffff) != 0) {
          if ((!bVar8 && !bVar9) && ((((ulong)ppplVar38 ^ uVar32) & 0xffffffffff) == 0)) break;
        }
        else if (bVar8 || bVar9) break;
        puVar35 = puVar35 + 1;
        puVar36 = puVar4;
      } while (puVar4 != puVar35);
      if (puVar36 != puVar4) goto LAB_71019c7c40;
    }
    if ((ulong *)pplVar10[0x27] != puVar4) {
      *puVar4 = (ulong)param_3[0xc];
      goto LAB_71019c7b3c;
    }
    pppplVar17 = (long ****)((long)puVar4 - (long)__src);
    uVar13 = (long)pppplVar17 >> 3;
    uVar32 = uVar13 + 1;
    if (uVar32 >> 0x3d != 0) {
LAB_71019c891c:
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    if (uVar13 < 0xfffffffffffffff) {
      if (uVar32 <= (ulong)((long)pppplVar17 >> 2)) {
        uVar32 = (long)pppplVar17 >> 2;
      }
      if (uVar32 != 0) {
        if (uVar32 >> 0x3d != 0) {
LAB_71019c7b90:
                    /* WARNING: Subroutine does not return */
          abort();
        }
        goto LAB_71019c8864;
      }
      plVar11 = (long *)0x0;
    }
    else {
      uVar32 = 0x1fffffffffffffff;
LAB_71019c8864:
      pppbVar26 = (byte ***)(uVar32 * 8);
      if (pppbVar26 == (byte ***)0x0) {
        pppbVar26 = (byte ***)0x1;
      }
      plVar11 = (long *)FUN_710392e290(0x10,pppbVar26,pppplVar17,ppppbVar21,pppplVar23,param_6,
                                       param_7,param_8);
      if (plVar11 == (long *)0x0) {
        if (DAT_7105332f00 != (long *)0x0) {
          local_200._0_4_ = 0;
          pppplVar20 = (long ****)&local_1a0;
          local_1a0 = pppbVar26;
          uVar12 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_200);
          if (((uVar12 & 1) != 0) &&
             (plVar11 = (long *)FUN_710392e290(0x10,pppbVar26,pppplVar20,ppppbVar21,pppplVar23,
                                               param_6,param_7,param_8), plVar11 != (long *)0x0))
          goto LAB_71019c88d0;
        }
        plVar11 = (long *)0x0;
      }
    }
LAB_71019c88d0:
    plVar11[uVar13] = (long)param_3[0xc];
    if (0 < (long)pppplVar17) {
      memcpy(plVar11,__src,(size_t)pppplVar17);
    }
    pplVar10[0x25] = plVar11;
    pplVar10[0x26] = plVar11 + uVar13 + 1;
    pplVar10[0x27] = plVar11 + uVar32;
    if (__src == (ulong *)0x0) goto LAB_71019c7c40;
LAB_71019c7c38:
    FUN_710392eb40((ulong)__src);
  }
LAB_71019c7c40:
  plVar11 = pplVar10[2];
  if (((long)pplVar10[3] - (long)plVar11 == 0) ||
     ((ulong)((long)pplVar10[3] - (long)plVar11 >> 3) < 2)) {
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_out_of_range();
  }
  ppppbVar22 = (byte ****)plVar11[1];
  plVar37 = (long *)**(undefined8 **)*plVar11 + 1;
  lVar27 = *(long *)**(undefined8 **)*plVar11;
  *(undefined4 *)(*(long *)(lVar27 + 0x600) + 0x14) = 0x40;
  *(undefined4 *)(*(long *)(lVar27 + 0x600) + 0x18) = 0xf0000f;
  *(undefined4 *)(*(long *)(lVar27 + 0x600) + 0x1c) = 0x80;
  local_1a0 = (byte ***)0x0;
  local_198 = (long *)0x4248000041800000;
  local_190 = (long *)0x101013f800000;
  local_186 = 1;
  local_188 = 0;
  uVar6 = 0x811c9dc5;
  local_150 = (long *)0x0;
  local_120 = (long *)0x0;
  local_f0 = (long *)0x0;
  local_c0 = (long *)0x0;
  local_90 = (long *)0x0;
  local_17f = 0;
  local_181 = 0;
  local_185 = 0;
  FUN_710337e790((long)&local_1a0);
  local_1a0 = (byte ***)
              CONCAT44((int)((ulong)((long)pplVar10[0x26] - (long)*pplVar2) >> 3),
                       (undefined4)local_1a0);
  pcVar18 = "scroll";
  ppppbVar21 = (byte ****)&local_1a0;
  local_185._0_3_ = CONCAT21(0x101,(undefined1)local_185);
  FUN_7103781a20((long *)pplVar25,plVar37,(byte ****)"scroll",ppppbVar21,pppplVar24,param_6,param_7,
                 param_8);
  local_1b8 = (uint *)0x0;
  uStack_1e8 = uStack_1e8 & 0xffffffffffffff00;
  local_1f0 = 0x315f74726f735f66;
  local_200._4_4_ = 0x10;
  builtin_strncpy(local_1f8,"mnu_mmii",8);
  uVar30 = 0x6d;
  lVar27 = 9;
  local_1b0 = (uint *)0x0;
  puStack_1a8 = (uint *)0x0;
  local_200._0_4_ = uVar6;
  do {
    local_200._0_4_ = (uint)local_200 * 0x89 ^ uVar30;
    uVar30 = (uint)*(byte *)((long)&local_200 + lVar27);
    lVar27 = lVar27 + 1;
  } while (uVar30 != 0);
  FUN_71019c1c50((ulong *)&local_1b8,(long)&local_200,(long ****)pcVar18,ppppbVar21,pppplVar24,
                 param_6,param_7,param_8);
  uStack_1e8 = uStack_1e8 & 0xffffffffffffff00;
  local_200._4_4_ = 0x10;
  builtin_strncpy(local_1f8,"mnu_mmii",8);
  local_1f0 = 0x335f74726f735f66;
  uVar30 = 0x6d;
  lVar27 = 9;
  local_200._0_4_ = uVar6;
  do {
    local_200._0_4_ = (uint)local_200 * 0x89 ^ uVar30;
    uVar30 = (uint)*(byte *)((long)&local_200 + lVar27);
    lVar27 = lVar27 + 1;
  } while (uVar30 != 0);
  if (local_1b0 < puStack_1a8) {
    *local_1b0 = 0;
    for (uVar32 = 0; local_1f8[uVar32] != '\0'; uVar32 = uVar32 + 2) {
      *(char *)((long)local_1b0 + uVar32 + 8) = local_1f8[uVar32];
      if (0x3e < (int)uVar32 + 1U) {
        uVar32 = (ulong)((int)uVar32 + 1);
        break;
      }
      if (local_1f8[uVar32 + 1] == '\0') {
        uVar32 = uVar32 + 1;
        break;
      }
      *(char *)((long)local_1b0 + uVar32 + 9) = local_1f8[uVar32 + 1];
    }
    *(undefined1 *)((long)local_1b0 + (uVar32 & 0xffffffff) + 8) = 0;
    local_1b0[1] = (uint)uVar32;
    uVar31 = (uint)(byte)local_1b0[2];
    uVar30 = uVar6;
    if ((byte)local_1b0[2] != 0) {
      pbVar33 = (byte *)((long)local_1b0 + 9);
      do {
        uVar30 = uVar30 * 0x89 ^ uVar31;
        uVar31 = (uint)*pbVar33;
        pbVar33 = pbVar33 + 1;
      } while (uVar31 != 0);
    }
    *local_1b0 = uVar30;
    local_1b0 = local_1b0 + 0x12;
    uVar15 = extraout_x1_01;
  }
  else {
    FUN_71019c1c50((ulong *)&local_1b8,(long)&local_200,(long ****)pcVar18,ppppbVar21,pppplVar24,
                   param_6,param_7,param_8);
    uVar15 = extraout_x1_02;
  }
  uStack_1e8 = uStack_1e8 & 0xffffffffffffff00;
  uVar30 = 0x6d;
  local_200._4_4_ = 0x10;
  builtin_strncpy(local_1f8,"mnu_mmii",8);
  local_1f0 = 0x345f74726f735f66;
  lVar27 = 9;
  local_200._0_4_ = uVar6;
  do {
    local_200._0_4_ = (uint)local_200 * 0x89 ^ uVar30;
    uVar30 = (uint)*(byte *)((long)&local_200 + lVar27);
    lVar27 = lVar27 + 1;
  } while (uVar30 != 0);
  if (local_1b0 < puStack_1a8) {
    *local_1b0 = 0;
    for (uVar32 = 0; local_1f8[uVar32] != '\0'; uVar32 = uVar32 + 2) {
      *(char *)((long)local_1b0 + uVar32 + 8) = local_1f8[uVar32];
      if (0x3e < (int)uVar32 + 1U) {
        uVar32 = (ulong)((int)uVar32 + 1);
        break;
      }
      if (local_1f8[uVar32 + 1] == '\0') {
        uVar32 = uVar32 + 1;
        break;
      }
      *(char *)((long)local_1b0 + uVar32 + 9) = local_1f8[uVar32 + 1];
    }
    *(undefined1 *)((long)local_1b0 + (uVar32 & 0xffffffff) + 8) = 0;
    local_1b0[1] = (uint)uVar32;
    uVar31 = (uint)(byte)local_1b0[2];
    uVar30 = uVar6;
    if ((byte)local_1b0[2] != 0) {
      pbVar33 = (byte *)((long)local_1b0 + 9);
      do {
        uVar30 = uVar30 * 0x89 ^ uVar31;
        uVar31 = (uint)*pbVar33;
        pbVar33 = pbVar33 + 1;
      } while (uVar31 != 0);
    }
    *local_1b0 = uVar30;
    local_1b0 = local_1b0 + 0x12;
  }
  else {
    FUN_71019c1c50((ulong *)&local_1b8,(long)&local_200,(long ****)pcVar18,ppppbVar21,pppplVar24,
                   param_6,param_7,param_8);
    uVar15 = extraout_x1_03;
  }
  local_1f0 = 0;
  uStack_1e8 = 0;
  FUN_7103776290(&local_1e0,uVar15,(long ****)pcVar18,ppppbVar21,pppplVar24,param_6,param_7,param_8)
  ;
  local_200._4_4_ = 0;
  local_1f8[0] = '\0';
  local_1f8[1] = '\0';
  local_1f8[2] = '\0';
  local_1f8[3] = '\0';
  uStack_1e8 = uRam0000007107459008;
  local_1f0 = _ConstantZero;
  *(undefined8 *)(local_1d8 + 8) = 0;
  local_200._0_4_ = 2;
  FUN_7103776640(&local_218,(long)plVar37,(byte ****)"scr_sort",pcVar18,ppppbVar21,pppplVar24,
                 param_6,param_7,param_8);
  uVar32 = local_1d8;
  local_1d8 = (ulong)local_210;
  local_210 = (long ***)0x0;
  uVar15 = extraout_x1_04;
  if (uVar32 != 0) {
    uVar13 = *(ulong *)(uVar32 + 0x18);
    *(undefined ***)(uVar32 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar32 + 0x18) = 0;
    if (uVar13 != 0) {
      FUN_710392eb40(uVar13);
    }
    FUN_710392eb40(uVar32);
    uVar15 = extraout_x1_05;
  }
  puVar7 = local_1b0;
  puVar3 = local_1b8;
  local_1f0 = _ConstantZero;
  uStack_1e8 = uRam0000007107459008;
  if (**(long **)(local_1d8 + 0x18) != 0) {
    local_1f0 = *(undefined8 *)(**(long **)(local_1d8 + 0x18) + 0x30);
    uStack_1e8 = 0;
  }
  local_218 = (long ***)0x0;
  local_210 = (long ***)0x0;
  local_208 = (long ***)0x0;
  ppplVar38 = (long ***)((long)local_1b0 - (long)local_1b8);
  if (ppplVar38 != (long ***)0x0) {
    if (0x38e38e38e38e38e < (ulong)(((long)ppplVar38 >> 3) * -0x71c71c71c71c71c7)) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    ppplVar14 = (long ***)
                FUN_710392e290(0x10,ppplVar38,(long ****)pcVar18,ppppbVar21,pppplVar24,param_6,
                               param_7,param_8);
    uVar15 = extraout_x1_06;
    if (ppplVar14 == (long ***)0x0) {
      if (DAT_7105332f00 != (long *)0x0) {
        local_80 = (long ***)((ulong)local_80 & 0xffffffff00000000);
        pcVar18 = (char *)&local_228;
        local_228 = ppplVar38;
        auVar40 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_80);
        uVar15 = auVar40._8_8_;
        if (((auVar40._0_8_ & 1) != 0) &&
           (ppplVar14 = (long ***)
                        FUN_710392e290(0x10,ppplVar38,(long ****)pcVar18,ppppbVar21,pppplVar24,
                                       param_6,param_7,param_8), uVar15 = extraout_x1_07,
           ppplVar14 != (long ***)0x0)) goto LAB_71019c80e4;
      }
      ppplVar14 = (long ***)0x0;
    }
LAB_71019c80e4:
    local_208 = ppplVar14 + ((long)ppplVar38 >> 3);
    local_210 = ppplVar14;
    for (; local_218 = ppplVar14, puVar3 != puVar7; puVar3 = puVar3 + 0x12) {
      *(uint *)local_210 = 0;
      uVar32 = 0;
      do {
        cVar5 = *(char *)((long)puVar3 + uVar32 + 8);
        uVar13 = uVar32;
        if (cVar5 == '\0') break;
        *(char *)((long)local_210 + uVar32 + 8) = cVar5;
        cVar5 = *(char *)((long)puVar3 + uVar32 + 9);
        if (cVar5 == '\0') {
          uVar13 = uVar32 + 1;
          break;
        }
        *(char *)((long)local_210 + uVar32 + 9) = cVar5;
        cVar5 = *(char *)((long)puVar3 + uVar32 + 10);
        if (cVar5 == '\0') {
          uVar13 = uVar32 + 2;
          break;
        }
        uVar13 = uVar32 + 3;
        *(char *)((long)local_210 + uVar32 + 10) = cVar5;
        uVar32 = uVar13;
      } while ((uint)uVar13 < 0x3f);
      *(undefined1 *)((long)local_210 + (uVar13 & 0xffffffff) + 8) = 0;
      *(uint *)((long)local_210 + 4) = (uint)uVar13;
      uVar31 = (uint)*(byte *)(local_210 + 1);
      uVar30 = uVar6;
      if (*(byte *)(local_210 + 1) != 0) {
        pbVar33 = (byte *)((long)local_210 + 9);
        do {
          uVar30 = uVar30 * 0x89 ^ uVar31;
          uVar31 = (uint)*pbVar33;
          pbVar33 = pbVar33 + 1;
        } while (uVar31 != 0);
      }
      *(uint *)local_210 = uVar30;
      local_210 = local_210 + 9;
    }
  }
  FUN_7103776290(&local_228,uVar15,(long ****)pcVar18,ppppbVar21,pppplVar24,param_6,param_7,param_8)
  ;
  pppplVar23 = &local_218;
  ppppbVar21 = (byte ****)&local_200;
  pppplVar24 = &local_228;
  FUN_71032ccb70((long)pppplVar19,ppppbVar22,pppplVar23,ppppbVar21,pppplVar24,param_6,param_7,
                 param_8);
  uVar32 = local_220;
  local_228 = (long ***)&PTR_FUN_710523d988;
  local_220 = 0;
  if (uVar32 != 0) {
    uVar13 = *(ulong *)(uVar32 + 0x18);
    *(undefined ***)(uVar32 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar32 + 0x18) = 0;
    if (uVar13 != 0) {
      FUN_710392eb40(uVar13);
    }
    FUN_710392eb40(uVar32);
  }
  if (local_218 != (long ***)0x0) {
    local_210 = local_218;
    FUN_710392eb40((ulong)local_218);
  }
  FUN_7103776640(&local_228,(long)plVar37,(byte ****)"set_parts_stick",pppplVar23,ppppbVar21,
                 pppplVar24,param_6,param_7,param_8);
  FUN_71019e0b00((long)&local_228);
  if ((long *)*pplVar10[8] == (long *)0x0) {
    lVar27 = 0;
  }
  else {
    lVar27 = *(long *)*pplVar10[8];
  }
  FUN_71033744b0(lVar27,"scroller",pplVar25);
  FUN_71033745a0(lVar27,"sub_list_window",pppplVar19);
  plVar11 = pplVar10[8];
  if ((long *)*plVar11 != (long *)0x0) {
    pppplVar19 = (long ****)&DAT_710439b9ac;
    FUN_7103375650((long *)*plVar11,"sub_list_window_facade",&DAT_710439b9ac);
    plVar11 = pplVar10[8];
    ppppbVar21 = ppppbVar22;
  }
  ppplVar38 = (long ***)
              FUN_710392e290(0x10,0x38,pppplVar19,ppppbVar21,pppplVar24,param_6,param_7,param_8);
  if (ppplVar38 == (long ***)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_230 = (long ***)((ulong)local_230._4_4_ << 0x20);
      local_80 = (long ***)&DAT_00000038;
      pppplVar23 = &local_80;
      uVar32 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_230);
      if (((uVar32 & 1) != 0) &&
         (ppplVar38 = (long ***)
                      FUN_710392e290(0x10,0x38,pppplVar23,ppppbVar21,pppplVar24,param_6,param_7,
                                     param_8), ppplVar38 != (long ***)0x0)) goto LAB_71019c82dc;
    }
    ppplVar38 = (long ***)0x0;
  }
LAB_71019c82dc:
  *ppplVar38 = (long **)&PTR_FUN_71050a7928;
  ppplVar38[2] = pplVar10;
  ppplVar38[3] = (long **)0x0;
  ppplVar38[6] = (long **)0x0;
  ppplVar38[4] = (long **)0x0;
  ppplVar38[5] = (long **)FUN_71019c1f00;
  pppplVar23 = (long ****)&local_230;
  *(undefined4 *)(ppplVar38 + 1) = 1;
  local_230 = ppplVar38;
  FUN_7103376af0((long)plVar11,(byte *)"get_top_index",pppplVar23,ppppbVar21,pppplVar24,param_6,
                 param_7,param_8);
  ppplVar38 = local_230;
  local_230 = (long ***)0x0;
  if (ppplVar38 != (long ***)0x0) {
    (*(code *)(*ppplVar38)[1])();
  }
  plVar11 = pplVar10[8];
  ppplVar38 = (long ***)
              FUN_710392e290(0x10,0x28,pppplVar23,ppppbVar21,pppplVar24,param_6,param_7,param_8);
  if (ppplVar38 == (long ***)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_238 = (long ***)((ulong)local_238._4_4_ << 0x20);
      local_80 = (long ***)&DAT_00000028;
      pppplVar23 = &local_80;
      uVar32 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_238);
      if (((uVar32 & 1) != 0) &&
         (ppplVar38 = (long ***)
                      FUN_710392e290(0x10,0x28,pppplVar23,ppppbVar21,pppplVar24,param_6,param_7,
                                     param_8), ppplVar38 != (long ***)0x0)) goto LAB_71019c838c;
    }
    ppplVar38 = (long ***)0x0;
  }
LAB_71019c838c:
  *ppplVar38 = (long **)&PTR_FUN_71050a7950;
  ppplVar38[4] = (long **)0x0;
  ppplVar38[2] = pplVar10;
  ppplVar38[3] = (long **)FUN_71019c1f50;
  *(undefined4 *)(ppplVar38 + 1) = 0;
  pppplVar23 = (long ****)&local_238;
  local_238 = ppplVar38;
  FUN_7103376af0((long)plVar11,(byte *)"sort_id_list",pppplVar23,ppppbVar21,pppplVar24,param_6,
                 param_7,param_8);
  ppplVar38 = local_238;
  local_238 = (long ***)0x0;
  if (ppplVar38 != (long ***)0x0) {
    (*(code *)(*ppplVar38)[1])();
  }
  plVar11 = pplVar10[8];
  ppplVar38 = (long ***)
              FUN_710392e290(0x10,0x38,pppplVar23,ppppbVar21,pppplVar24,param_6,param_7,param_8);
  if (ppplVar38 == (long ***)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_240 = (long ***)((ulong)local_240._4_4_ << 0x20);
      local_80 = (long ***)&DAT_00000038;
      pppplVar23 = &local_80;
      uVar32 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_240);
      if (((uVar32 & 1) != 0) &&
         (ppplVar38 = (long ***)
                      FUN_710392e290(0x10,0x38,pppplVar23,ppppbVar21,pppplVar24,param_6,param_7,
                                     param_8), ppplVar38 != (long ***)0x0)) goto LAB_71019c8434;
    }
    ppplVar38 = (long ***)0x0;
  }
LAB_71019c8434:
  ppplVar38[5] = (long **)0x0;
  ppplVar38[6] = (long **)0x0;
  *ppplVar38 = (long **)&PTR_FUN_71050a7978;
  ppplVar38[2] = pplVar10;
  ppplVar38[3] = (long **)FUN_71019c2110;
  ppplVar38[4] = (long **)0x0;
  pppplVar23 = (long ****)&local_240;
  *(undefined4 *)(ppplVar38 + 1) = 0;
  local_240 = ppplVar38;
  FUN_7103376af0((long)plVar11,(byte *)"backup_list_selected_id",pppplVar23,ppppbVar21,pppplVar24,
                 param_6,param_7,param_8);
  ppplVar38 = local_240;
  local_240 = (long ***)0x0;
  if (ppplVar38 != (long ***)0x0) {
    (*(code *)(*ppplVar38)[1])();
  }
  plVar11 = pplVar10[8];
  local_80 = (long ***)
             FUN_710392e290(0x10,0x38,pppplVar23,ppppbVar21,pppplVar24,param_6,param_7,param_8);
  if (local_80 == (long ***)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_74[0] = 0;
      local_80 = (long ***)&DAT_00000038;
      pppplVar23 = &local_80;
      uVar32 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,local_74);
      if (((uVar32 & 1) != 0) &&
         (local_80 = (long ***)
                     FUN_710392e290(0x10,0x38,pppplVar23,ppppbVar21,pppplVar24,param_6,param_7,
                                    param_8), local_80 != (long ***)0x0)) goto LAB_71019c84e0;
    }
    local_80 = (long ***)0x0;
  }
LAB_71019c84e0:
  *local_80 = (long **)&PTR_FUN_71050a7978;
  local_80[5] = (long **)0x0;
  local_80[6] = (long **)0x0;
  local_80[2] = pplVar10;
  pcVar18 = (char *)&local_80;
  local_80[3] = (long **)FUN_71019c2160;
  local_80[4] = (long **)0x0;
  *(undefined4 *)(local_80 + 1) = 0;
  FUN_7103376af0((long)plVar11,(byte *)"select_list_from_backup_id",(long ****)pcVar18,ppppbVar21,
                 pppplVar24,param_6,param_7,param_8);
  ppplVar38 = local_80;
  local_80 = (long ***)0x0;
  if (ppplVar38 != (long ***)0x0) {
    (*(code *)(*ppplVar38)[1])();
  }
  plVar11 = pplVar10[8];
  if ((long *)*plVar11 != (long *)0x0) {
    ppppbVar21 = (byte ****)((ulong)local_1a0 >> 0x20);
    pcVar18 = &DAT_71042b2a84;
    FUN_7103375650((long *)*plVar11,"SCROLLER_ITEM_NUM",&DAT_71042b2a84);
    plVar11 = pplVar10[8];
    if ((long *)*plVar11 != (long *)0x0) {
      pcVar18 = &DAT_71042b2a84;
      ppppbVar21 = (byte ****)&DAT_00000007;
      FUN_7103375650((long *)*plVar11,"INPUT_OPEN_SORT_WINDOW",&DAT_71042b2a84);
      plVar11 = pplVar10[8];
    }
  }
  FUN_71019e0910(plVar11);
  plVar37 = pplVar10[8];
  plVar11 = (long *)*plVar37;
  lVar39 = *plVar11;
  *(undefined4 *)(plVar11 + 2) = 0;
  plVar11 = *(long **)(lVar39 + 0x10);
  *plVar11 = lVar39;
  *(undefined4 *)(plVar11 + 1) = 0x48;
  lVar27 = *(long *)(lVar39 + 0x10);
  *(long *)(lVar39 + 0x10) = lVar27 + 0x10;
  lVar34 = *(long *)(*(long *)(lVar39 + 0x18) + 200);
  *(long *)(lVar39 + 0x10) = lVar27;
  if (lVar34 == lVar39) {
    lVar27 = *(long *)(*(long *)(lVar39 + 0x18) + 0x40);
    if (*(uint *)(lVar27 + 0xc) < 2) {
      plVar11 = (long *)(*(long *)(lVar27 + 0x18) +
                        ((ulong)~(uint)(0xffffffffL << ((ulong)*(byte *)(lVar27 + 0xb) & 0x3f)) & 2)
                        * 0x20);
      do {
        if (((int)plVar11[3] == 0x13) && (plVar16 = plVar11, plVar11[2] == 2)) break;
        piVar1 = (int *)((long)plVar11 + 0x1c);
        plVar11 = plVar11 + (long)*piVar1 * 4;
        plVar16 = &DAT_7104862960;
      } while (*piVar1 != 0);
    }
    else {
      plVar16 = (long *)(*(long *)(lVar27 + 0x10) + 0x10);
    }
    pcVar18 = "initialize";
    FUN_71038f4d40(lVar39,plVar16,"initialize");
  }
  else {
    FUN_71038f4b20(lVar39,"initialize");
    FUN_71038f4fc0(lVar39,-2);
  }
  puVar28 = (undefined8 *)(*(long *)(lVar39 + 0x10) + -0x10);
  if ((puVar28 == &DAT_7104862960) || ((*(uint *)(*(long *)(lVar39 + 0x10) + -8) & 0xf) != 6)) {
    *(undefined8 **)(lVar39 + 0x10) = puVar28;
  }
  else {
    FUN_7103377130(plVar37,0,(long ****)pcVar18,ppppbVar21,pppplVar24,param_6,param_7,param_8);
  }
  uVar32 = local_220;
  local_228 = (long ***)&PTR_FUN_710523d988;
  local_220 = 0;
  if (uVar32 != 0) {
    uVar13 = *(ulong *)(uVar32 + 0x18);
    *(undefined ***)(uVar32 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar32 + 0x18) = 0;
    if (uVar13 != 0) {
      FUN_710392eb40(uVar13);
    }
    FUN_710392eb40(uVar32);
  }
  uVar32 = local_1d8;
  local_1e0 = &PTR_FUN_710523d988;
  local_1d8 = 0;
  if (uVar32 != 0) {
    uVar13 = *(ulong *)(uVar32 + 0x18);
    *(undefined ***)(uVar32 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar32 + 0x18) = 0;
    if (uVar13 != 0) {
      FUN_710392eb40(uVar13);
    }
    FUN_710392eb40(uVar32);
  }
  if (local_1b8 != (uint *)0x0) {
    local_1b0 = local_1b8;
    FUN_710392eb40((ulong)local_1b8);
  }
  if (alStack_b0 == local_90) {
    pcVar29 = *(code **)(*local_90 + 0x20);
LAB_71019c8728:
    (*pcVar29)();
  }
  else if (local_90 != (long *)0x0) {
    pcVar29 = *(code **)(*local_90 + 0x28);
    goto LAB_71019c8728;
  }
  if (alStack_e0 == local_c0) {
    pcVar29 = *(code **)(*local_c0 + 0x20);
LAB_71019c8758:
    (*pcVar29)();
  }
  else if (local_c0 != (long *)0x0) {
    pcVar29 = *(code **)(*local_c0 + 0x28);
    goto LAB_71019c8758;
  }
  if (alStack_110 == local_f0) {
    pcVar29 = *(code **)(*local_f0 + 0x20);
LAB_71019c8788:
    (*pcVar29)();
  }
  else if (local_f0 != (long *)0x0) {
    pcVar29 = *(code **)(*local_f0 + 0x28);
    goto LAB_71019c8788;
  }
  if (alStack_140 == local_120) {
    pcVar29 = *(code **)(*local_120 + 0x20);
LAB_71019c87b8:
    (*pcVar29)();
  }
  else if (local_120 != (long *)0x0) {
    pcVar29 = *(code **)(*local_120 + 0x28);
    goto LAB_71019c87b8;
  }
  if (alStack_170 == local_150) {
    pcVar29 = *(code **)(*local_150 + 0x20);
  }
  else {
    if (local_150 == (long *)0x0) goto LAB_71019c87ec;
    pcVar29 = *(code **)(*local_150 + 0x28);
  }
  (*pcVar29)();
LAB_71019c87ec:
  *(undefined1 *)(param_1 + 0xe) = 1;
  return;
}

