// addr:      71019ceb30
// offset:    0x19ceb30
// name:      FUN_71019ceb30
// mangled:   
// signature: undefined __cdecl FUN_71019ceb30(undefined8 * param_1, long * param_2, CharInfo * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_71019ceb30(undefined8 *param_1,long *param_2,CharInfo *param_3,byte ****param_4,
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
  long ***ppplVar13;
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
  CharInfo *pCVar17;
  undefined **ppuVar18;
  long ****pppplVar19;
  char *pcVar20;
  long ****pppplVar21;
  long ****pppplVar22;
  byte ****ppppbVar23;
  byte ****ppppbVar24;
  long ****pppplVar25;
  long ****pppplVar26;
  long **pplVar27;
  byte ***pppbVar28;
  long lVar29;
  undefined8 *puVar30;
  code *pcVar31;
  uint uVar32;
  uint uVar33;
  byte *pbVar34;
  ulong *__src;
  long lVar35;
  ulong *puVar36;
  ulong *puVar37;
  long *plVar38;
  ulong uVar39;
  long lVar40;
  ulong uVar41;
  undefined1 auVar42 [16];
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
  ulong *local_190;
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
  
  *param_1 = &PTR_FUN_71050a7c00;
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
  pCVar17 = param_3;
  pplVar10 = (long **)FUN_710392e290(0x10,0x170,(long ****)param_3,param_4,param_5,param_6,param_7,
                                     param_8);
  uVar15 = extraout_x1;
  if (pplVar10 == (long **)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_200._0_4_ = 0;
      local_1a0 = (byte ***)&DAT_00000170;
      pCVar17 = (CharInfo *)&local_1a0;
      auVar42 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_200);
      uVar15 = auVar42._8_8_;
      if (((auVar42._0_8_ & 1) != 0) &&
         (pplVar10 = (long **)FUN_710392e290(0x10,0x170,(long ****)pCVar17,param_4,param_5,param_6,
                                             param_7,param_8), uVar15 = extraout_x1_00,
         pplVar10 != (long **)0x0)) goto LAB_71019cebe4;
    }
    pplVar10 = (long **)0x0;
  }
LAB_71019cebe4:
  *(undefined4 *)(pplVar10 + 1) = 0x1000;
  pplVar10[2] = (long *)0x0;
  pplVar10[3] = (long *)0x0;
  pplVar10[4] = (long *)0x0;
  pplVar10[7] = (long *)0x0;
  pplVar10[8] = (long *)0x0;
  pppplVar21 = (long ****)(pplVar10 + 0x20);
  pplVar10[6] = (long *)0x0;
  pplVar10[5] = (long *)(pplVar10 + 6);
  pppplVar26 = (long ****)(pplVar10 + 9);
  *pppplVar26 = (long ***)&PTR_FUN_71050a7b38;
  *pplVar10 = (long *)&DAT_71050a7ae0;
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
  pplVar27 = pplVar10 + 0x1f;
  *pplVar27 = (long *)0x0;
  FUN_71032cc410(pppplVar21,uVar15,(long ****)pCVar17,param_4,param_5,param_6,param_7,param_8);
  pplVar10[0x27] = (long *)0x0;
  pplVar10[0x28] = (long *)0x5affff0000000000;
  *(undefined2 *)(pplVar10 + 0x2d) = 0x100;
  pplVar10[0x29] = (long *)0x5affff0000000000;
  pplVar10[0x2a] = (long *)0x5affff0000000000;
  pplVar2 = pplVar10 + 0x25;
  pplVar10[0x2b] = (long *)0x5affff0000000000;
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
  pplVar10[0xf] = (long *)FUN_71019cc3e0;
  pplVar10[0x10] = (long *)0x0;
  pplVar10[0x11] = (long *)FUN_71019cc3f0;
  pplVar10[0x12] = (long *)0x0;
  pplVar10[0xb] = (long *)0x0;
  pplVar10[0xc] = (long *)0x0;
  FUN_71019cc910((long *)(pplVar10 + 10));
  ppuVar18 = &PTR_DAT_71050a7b68;
  ppppbVar23 = (byte ****)0x2fa5c13fc6;
  param_1[0x10] = pplVar10;
  pppplVar25 = (long ****)0x1;
  FUN_71032cb040((long)pplVar10,param_2,(long ****)&PTR_DAT_71050a7b68,(byte ****)0x2fa5c13fc6,
                 (long ****)0x1,param_6,param_7,param_8);
  FUN_7103275200(&local_1a0,param_3,(long ****)ppuVar18,ppppbVar23,pppplVar25,param_6,param_7,
                 param_8);
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
  pplVar10[0x27] = (long *)local_190;
  uVar39 = *(ulong *)(param_3 + 0x58);
  bVar9 = FUN_710328bb80(*(long *)(DAT_710532f730 + 8) + 0x230,uVar39);
  if (bVar9) {
    if ((ulong *)pplVar10[0x26] == local_190) {
      __src = (ulong *)*pplVar2;
      pppplVar19 = (long ****)((long)local_190 - (long)__src);
      uVar41 = (long)pppplVar19 >> 3;
      uVar12 = uVar41 + 1;
      if (uVar12 >> 0x3d != 0) goto LAB_71019cfc20;
      if (uVar41 < 0xfffffffffffffff) {
        if (uVar12 <= (ulong)((long)pppplVar19 >> 2)) {
          uVar12 = (long)pppplVar19 >> 2;
        }
        if (uVar12 != 0) {
          if (uVar12 >> 0x3d != 0) goto LAB_71019cee8c;
          goto LAB_71019cee98;
        }
        plVar11 = (long *)0x0;
      }
      else {
        uVar12 = 0x1fffffffffffffff;
LAB_71019cee98:
        pppbVar28 = (byte ***)(uVar12 * 8);
        if (pppbVar28 == (byte ***)0x0) {
          pppbVar28 = (byte ***)0x1;
        }
        plVar11 = (long *)FUN_710392e290(0x10,pppbVar28,pppplVar19,ppppbVar23,pppplVar25,param_6,
                                         param_7,param_8);
        if (plVar11 == (long *)0x0) {
          if (DAT_7105332f00 != (long *)0x0) {
            local_200._0_4_ = 0;
            pppplVar22 = (long ****)&local_1a0;
            local_1a0 = pppbVar28;
            uVar39 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_200);
            if (((uVar39 & 1) != 0) &&
               (plVar11 = (long *)FUN_710392e290(0x10,pppbVar28,pppplVar22,ppppbVar23,pppplVar25,
                                                 param_6,param_7,param_8), plVar11 != (long *)0x0))
            goto LAB_71019ceefc;
          }
          plVar11 = (long *)0x0;
        }
LAB_71019ceefc:
        uVar39 = *(ulong *)(param_3 + 0x58);
      }
      plVar11[uVar41] = uVar39;
      if (0 < (long)pppplVar19) {
        memcpy(plVar11,__src,(size_t)pppplVar19);
      }
      pplVar10[0x25] = plVar11;
      pplVar10[0x26] = plVar11 + uVar41 + 1;
      pplVar10[0x27] = plVar11 + uVar12;
      if (__src != (ulong *)0x0) goto LAB_71019cef34;
    }
    else {
      *pplVar10[0x26] = uVar39;
LAB_71019cee38:
      pplVar10[0x26] = pplVar10[0x26] + 1;
    }
  }
  else {
    uVar39 = FUN_71017979d0(uVar39);
    if ((uVar39 & 1) != 0) goto LAB_71019cef3c;
    __src = (ulong *)pplVar10[0x25];
    puVar4 = (ulong *)pplVar10[0x26];
    if (__src != puVar4) {
      uVar39 = *(ulong *)(param_3 + 0x58);
      bVar9 = (uVar39 & 0xffffffffff) == 0;
      bVar8 = (uVar39 & 0xff00000000000000) != 0x5a00000000000000;
      puVar36 = __src;
      do {
        uVar12 = *puVar36;
        puVar37 = puVar36;
        if ((uVar12 & 0xff00000000000000) == 0x5a00000000000000 && (uVar12 & 0xffffffffff) != 0) {
          if ((!bVar8 && !bVar9) && (((uVar39 ^ uVar12) & 0xffffffffff) == 0)) break;
        }
        else if (bVar8 || bVar9) break;
        puVar36 = puVar36 + 1;
        puVar37 = puVar4;
      } while (puVar4 != puVar36);
      if (puVar37 != puVar4) goto LAB_71019cef3c;
    }
    if ((ulong *)pplVar10[0x27] != puVar4) {
      *puVar4 = *(ulong *)(param_3 + 0x58);
      goto LAB_71019cee38;
    }
    pppplVar19 = (long ****)((long)puVar4 - (long)__src);
    uVar12 = (long)pppplVar19 >> 3;
    uVar39 = uVar12 + 1;
    if (uVar39 >> 0x3d != 0) {
LAB_71019cfc20:
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    if (uVar12 < 0xfffffffffffffff) {
      if (uVar39 <= (ulong)((long)pppplVar19 >> 2)) {
        uVar39 = (long)pppplVar19 >> 2;
      }
      if (uVar39 != 0) {
        if (uVar39 >> 0x3d != 0) {
LAB_71019cee8c:
                    /* WARNING: Subroutine does not return */
          abort();
        }
        goto LAB_71019cfb68;
      }
      plVar11 = (long *)0x0;
    }
    else {
      uVar39 = 0x1fffffffffffffff;
LAB_71019cfb68:
      pppbVar28 = (byte ***)(uVar39 * 8);
      if (pppbVar28 == (byte ***)0x0) {
        pppbVar28 = (byte ***)0x1;
      }
      plVar11 = (long *)FUN_710392e290(0x10,pppbVar28,pppplVar19,ppppbVar23,pppplVar25,param_6,
                                       param_7,param_8);
      if (plVar11 == (long *)0x0) {
        if (DAT_7105332f00 != (long *)0x0) {
          local_200._0_4_ = 0;
          pppplVar22 = (long ****)&local_1a0;
          local_1a0 = pppbVar28;
          uVar41 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_200);
          if (((uVar41 & 1) != 0) &&
             (plVar11 = (long *)FUN_710392e290(0x10,pppbVar28,pppplVar22,ppppbVar23,pppplVar25,
                                               param_6,param_7,param_8), plVar11 != (long *)0x0))
          goto LAB_71019cfbd4;
        }
        plVar11 = (long *)0x0;
      }
    }
LAB_71019cfbd4:
    plVar11[uVar12] = *(long *)(param_3 + 0x58);
    if (0 < (long)pppplVar19) {
      memcpy(plVar11,__src,(size_t)pppplVar19);
    }
    pplVar10[0x25] = plVar11;
    pplVar10[0x26] = plVar11 + uVar12 + 1;
    pplVar10[0x27] = plVar11 + uVar39;
    if (__src == (ulong *)0x0) goto LAB_71019cef3c;
LAB_71019cef34:
    FUN_710392eb40((ulong)__src);
  }
LAB_71019cef3c:
  plVar11 = pplVar10[2];
  if (((long)pplVar10[3] - (long)plVar11 == 0) ||
     ((ulong)((long)pplVar10[3] - (long)plVar11 >> 3) < 2)) {
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_out_of_range();
  }
  puVar30 = (undefined8 *)*plVar11;
  ppppbVar24 = (byte ****)plVar11[1];
  plVar11 = *(long **)*puVar30;
  plVar38 = plVar11 + 1;
  lVar29 = *plVar11;
  *(undefined4 *)(*(long *)(lVar29 + 0x600) + 0x14) = 0x40;
  *(undefined4 *)(*(long *)(lVar29 + 0x600) + 0x18) = 0xf0000f;
  *(undefined4 *)(*(long *)(lVar29 + 0x600) + 0x1c) = 0x80;
  local_1a0 = (byte ***)0x0;
  local_198 = (long *)0x4248000041800000;
  local_190 = (ulong *)0x101013f800000;
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
  local_185._0_3_ = CONCAT21(0x101,(undefined1)local_185);
  pcVar20 = "scroll";
  ppppbVar23 = (byte ****)&local_1a0;
  FUN_7103781a20((long *)pplVar27,(undefined8 *)(*(long *)*puVar30 + 8),(byte ****)"scroll",
                 ppppbVar23,pppplVar26,param_6,param_7,param_8);
  local_1b8 = (uint *)0x0;
  uStack_1e8 = uStack_1e8 & 0xffffffffffffff00;
  local_1f0 = 0x315f74726f735f66;
  local_200._4_4_ = 0x10;
  builtin_strncpy(local_1f8,"mnu_mmii",8);
  uVar32 = 0x6d;
  lVar29 = 9;
  local_1b0 = (uint *)0x0;
  puStack_1a8 = (uint *)0x0;
  local_200._0_4_ = uVar6;
  do {
    local_200._0_4_ = (uint)local_200 * 0x89 ^ uVar32;
    uVar32 = (uint)*(byte *)((long)&local_200 + lVar29);
    lVar29 = lVar29 + 1;
  } while (uVar32 != 0);
  FUN_71019c1c50((ulong *)&local_1b8,(long)&local_200,(long ****)pcVar20,ppppbVar23,pppplVar26,
                 param_6,param_7,param_8);
  uStack_1e8 = uStack_1e8 & 0xffffffffffffff00;
  local_200._4_4_ = 0x10;
  builtin_strncpy(local_1f8,"mnu_mmii",8);
  local_1f0 = 0x335f74726f735f66;
  uVar32 = 0x6d;
  lVar29 = 9;
  local_200._0_4_ = uVar6;
  do {
    local_200._0_4_ = (uint)local_200 * 0x89 ^ uVar32;
    uVar32 = (uint)*(byte *)((long)&local_200 + lVar29);
    lVar29 = lVar29 + 1;
  } while (uVar32 != 0);
  if (local_1b0 < puStack_1a8) {
    *local_1b0 = 0;
    for (uVar39 = 0; local_1f8[uVar39] != '\0'; uVar39 = uVar39 + 2) {
      *(char *)((long)local_1b0 + uVar39 + 8) = local_1f8[uVar39];
      if (0x3e < (int)uVar39 + 1U) {
        uVar39 = (ulong)((int)uVar39 + 1);
        break;
      }
      if (local_1f8[uVar39 + 1] == '\0') {
        uVar39 = uVar39 + 1;
        break;
      }
      *(char *)((long)local_1b0 + uVar39 + 9) = local_1f8[uVar39 + 1];
    }
    *(undefined1 *)((long)local_1b0 + (uVar39 & 0xffffffff) + 8) = 0;
    local_1b0[1] = (uint)uVar39;
    uVar33 = (uint)(byte)local_1b0[2];
    uVar32 = uVar6;
    if ((byte)local_1b0[2] != 0) {
      pbVar34 = (byte *)((long)local_1b0 + 9);
      do {
        uVar32 = uVar32 * 0x89 ^ uVar33;
        uVar33 = (uint)*pbVar34;
        pbVar34 = pbVar34 + 1;
      } while (uVar33 != 0);
    }
    *local_1b0 = uVar32;
    local_1b0 = local_1b0 + 0x12;
    uVar15 = extraout_x1_01;
  }
  else {
    FUN_71019c1c50((ulong *)&local_1b8,(long)&local_200,(long ****)pcVar20,ppppbVar23,pppplVar26,
                   param_6,param_7,param_8);
    uVar15 = extraout_x1_02;
  }
  uStack_1e8 = uStack_1e8 & 0xffffffffffffff00;
  uVar32 = 0x6d;
  local_200._4_4_ = 0x10;
  builtin_strncpy(local_1f8,"mnu_mmii",8);
  local_1f0 = 0x345f74726f735f66;
  lVar29 = 9;
  local_200._0_4_ = uVar6;
  do {
    local_200._0_4_ = (uint)local_200 * 0x89 ^ uVar32;
    uVar32 = (uint)*(byte *)((long)&local_200 + lVar29);
    lVar29 = lVar29 + 1;
  } while (uVar32 != 0);
  if (local_1b0 < puStack_1a8) {
    *local_1b0 = 0;
    for (uVar39 = 0; local_1f8[uVar39] != '\0'; uVar39 = uVar39 + 2) {
      *(char *)((long)local_1b0 + uVar39 + 8) = local_1f8[uVar39];
      if (0x3e < (int)uVar39 + 1U) {
        uVar39 = (ulong)((int)uVar39 + 1);
        break;
      }
      if (local_1f8[uVar39 + 1] == '\0') {
        uVar39 = uVar39 + 1;
        break;
      }
      *(char *)((long)local_1b0 + uVar39 + 9) = local_1f8[uVar39 + 1];
    }
    *(undefined1 *)((long)local_1b0 + (uVar39 & 0xffffffff) + 8) = 0;
    local_1b0[1] = (uint)uVar39;
    uVar33 = (uint)(byte)local_1b0[2];
    uVar32 = uVar6;
    if ((byte)local_1b0[2] != 0) {
      pbVar34 = (byte *)((long)local_1b0 + 9);
      do {
        uVar32 = uVar32 * 0x89 ^ uVar33;
        uVar33 = (uint)*pbVar34;
        pbVar34 = pbVar34 + 1;
      } while (uVar33 != 0);
    }
    *local_1b0 = uVar32;
    local_1b0 = local_1b0 + 0x12;
  }
  else {
    FUN_71019c1c50((ulong *)&local_1b8,(long)&local_200,(long ****)pcVar20,ppppbVar23,pppplVar26,
                   param_6,param_7,param_8);
    uVar15 = extraout_x1_03;
  }
  local_1f0 = 0;
  uStack_1e8 = 0;
  FUN_7103776290(&local_1e0,uVar15,(long ****)pcVar20,ppppbVar23,pppplVar26,param_6,param_7,param_8)
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
  FUN_7103776640(&local_218,(long)plVar38,(byte ****)"scr_sort",pcVar20,ppppbVar23,pppplVar26,
                 param_6,param_7,param_8);
  uVar39 = local_1d8;
  local_1d8 = (ulong)local_210;
  local_210 = (long ***)0x0;
  uVar15 = extraout_x1_04;
  if (uVar39 != 0) {
    uVar12 = *(ulong *)(uVar39 + 0x18);
    *(undefined ***)(uVar39 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar39 + 0x18) = 0;
    if (uVar12 != 0) {
      FUN_710392eb40(uVar12);
    }
    FUN_710392eb40(uVar39);
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
  ppplVar14 = (long ***)((long)local_1b0 - (long)local_1b8);
  if (ppplVar14 != (long ***)0x0) {
    if (0x38e38e38e38e38e < (ulong)(((long)ppplVar14 >> 3) * -0x71c71c71c71c71c7)) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    ppplVar13 = (long ***)
                FUN_710392e290(0x10,ppplVar14,(long ****)pcVar20,ppppbVar23,pppplVar26,param_6,
                               param_7,param_8);
    uVar15 = extraout_x1_06;
    if (ppplVar13 == (long ***)0x0) {
      if (DAT_7105332f00 != (long *)0x0) {
        local_80 = (long ***)((ulong)local_80 & 0xffffffff00000000);
        pcVar20 = (char *)&local_228;
        local_228 = ppplVar14;
        auVar42 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_80);
        uVar15 = auVar42._8_8_;
        if (((auVar42._0_8_ & 1) != 0) &&
           (ppplVar13 = (long ***)
                        FUN_710392e290(0x10,ppplVar14,(long ****)pcVar20,ppppbVar23,pppplVar26,
                                       param_6,param_7,param_8), uVar15 = extraout_x1_07,
           ppplVar13 != (long ***)0x0)) goto LAB_71019cf3e8;
      }
      ppplVar13 = (long ***)0x0;
    }
LAB_71019cf3e8:
    local_208 = ppplVar13 + ((long)ppplVar14 >> 3);
    local_210 = ppplVar13;
    for (; local_218 = ppplVar13, puVar3 != puVar7; puVar3 = puVar3 + 0x12) {
      *(uint *)local_210 = 0;
      uVar39 = 0;
      do {
        cVar5 = *(char *)((long)puVar3 + uVar39 + 8);
        uVar12 = uVar39;
        if (cVar5 == '\0') break;
        *(char *)((long)local_210 + uVar39 + 8) = cVar5;
        cVar5 = *(char *)((long)puVar3 + uVar39 + 9);
        if (cVar5 == '\0') {
          uVar12 = uVar39 + 1;
          break;
        }
        *(char *)((long)local_210 + uVar39 + 9) = cVar5;
        cVar5 = *(char *)((long)puVar3 + uVar39 + 10);
        if (cVar5 == '\0') {
          uVar12 = uVar39 + 2;
          break;
        }
        uVar12 = uVar39 + 3;
        *(char *)((long)local_210 + uVar39 + 10) = cVar5;
        uVar39 = uVar12;
      } while ((uint)uVar12 < 0x3f);
      *(undefined1 *)((long)local_210 + (uVar12 & 0xffffffff) + 8) = 0;
      *(uint *)((long)local_210 + 4) = (uint)uVar12;
      uVar33 = (uint)*(byte *)(local_210 + 1);
      uVar32 = uVar6;
      if (*(byte *)(local_210 + 1) != 0) {
        pbVar34 = (byte *)((long)local_210 + 9);
        do {
          uVar32 = uVar32 * 0x89 ^ uVar33;
          uVar33 = (uint)*pbVar34;
          pbVar34 = pbVar34 + 1;
        } while (uVar33 != 0);
      }
      *(uint *)local_210 = uVar32;
      local_210 = local_210 + 9;
    }
  }
  FUN_7103776290(&local_228,uVar15,(long ****)pcVar20,ppppbVar23,pppplVar26,param_6,param_7,param_8)
  ;
  pppplVar25 = &local_218;
  ppppbVar23 = (byte ****)&local_200;
  pppplVar26 = &local_228;
  FUN_71032ccb70((long)pppplVar21,ppppbVar24,pppplVar25,ppppbVar23,pppplVar26,param_6,param_7,
                 param_8);
  uVar39 = local_220;
  local_228 = (long ***)&PTR_FUN_710523d988;
  local_220 = 0;
  if (uVar39 != 0) {
    uVar12 = *(ulong *)(uVar39 + 0x18);
    *(undefined ***)(uVar39 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar39 + 0x18) = 0;
    if (uVar12 != 0) {
      FUN_710392eb40(uVar12);
    }
    FUN_710392eb40(uVar39);
  }
  if (local_218 != (long ***)0x0) {
    local_210 = local_218;
    FUN_710392eb40((ulong)local_218);
  }
  FUN_7103776640(&local_228,(long)plVar38,(byte ****)"set_parts_stick",pppplVar25,ppppbVar23,
                 pppplVar26,param_6,param_7,param_8);
  FUN_71019e0b00((long)&local_228);
  if ((long *)*pplVar10[8] == (long *)0x0) {
    lVar29 = 0;
  }
  else {
    lVar29 = *(long *)*pplVar10[8];
  }
  FUN_71033744b0(lVar29,"scroller",pplVar27);
  FUN_71033745a0(lVar29,"sub_list_window",pppplVar21);
  plVar11 = pplVar10[8];
  if ((long *)*plVar11 != (long *)0x0) {
    pppplVar21 = (long ****)&DAT_710439b9ac;
    FUN_7103375650((long *)*plVar11,"sub_list_window_facade",&DAT_710439b9ac);
    plVar11 = pplVar10[8];
    ppppbVar23 = ppppbVar24;
  }
  ppplVar14 = (long ***)
              FUN_710392e290(0x10,0x38,pppplVar21,ppppbVar23,pppplVar26,param_6,param_7,param_8);
  if (ppplVar14 == (long ***)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_230 = (long ***)((ulong)local_230._4_4_ << 0x20);
      local_80 = (long ***)&DAT_00000038;
      pppplVar21 = &local_80;
      uVar39 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_230);
      if (((uVar39 & 1) != 0) &&
         (ppplVar14 = (long ***)
                      FUN_710392e290(0x10,0x38,pppplVar21,ppppbVar23,pppplVar26,param_6,param_7,
                                     param_8), ppplVar14 != (long ***)0x0)) goto LAB_71019cf5e0;
    }
    ppplVar14 = (long ***)0x0;
  }
LAB_71019cf5e0:
  *ppplVar14 = (long **)&PTR_FUN_71050a7b88;
  ppplVar14[2] = pplVar10;
  ppplVar14[3] = (long **)0x0;
  ppplVar14[6] = (long **)0x0;
  ppplVar14[4] = (long **)0x0;
  ppplVar14[5] = (long **)FUN_71019cd0b0;
  pppplVar21 = (long ****)&local_230;
  *(undefined4 *)(ppplVar14 + 1) = 1;
  local_230 = ppplVar14;
  FUN_7103376af0((long)plVar11,(byte *)"get_top_index",pppplVar21,ppppbVar23,pppplVar26,param_6,
                 param_7,param_8);
  ppplVar14 = local_230;
  local_230 = (long ***)0x0;
  if (ppplVar14 != (long ***)0x0) {
    (*(code *)(*ppplVar14)[1])();
  }
  plVar11 = pplVar10[8];
  ppplVar14 = (long ***)
              FUN_710392e290(0x10,0x28,pppplVar21,ppppbVar23,pppplVar26,param_6,param_7,param_8);
  if (ppplVar14 == (long ***)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_238 = (long ***)((ulong)local_238._4_4_ << 0x20);
      local_80 = (long ***)&DAT_00000028;
      pppplVar21 = &local_80;
      uVar39 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_238);
      if (((uVar39 & 1) != 0) &&
         (ppplVar14 = (long ***)
                      FUN_710392e290(0x10,0x28,pppplVar21,ppppbVar23,pppplVar26,param_6,param_7,
                                     param_8), ppplVar14 != (long ***)0x0)) goto LAB_71019cf690;
    }
    ppplVar14 = (long ***)0x0;
  }
LAB_71019cf690:
  *ppplVar14 = (long **)&PTR_FUN_71050a7bb0;
  ppplVar14[4] = (long **)0x0;
  ppplVar14[2] = pplVar10;
  ppplVar14[3] = (long **)FUN_71019cd100;
  *(undefined4 *)(ppplVar14 + 1) = 0;
  pppplVar21 = (long ****)&local_238;
  local_238 = ppplVar14;
  FUN_7103376af0((long)plVar11,(byte *)"sort_id_list",pppplVar21,ppppbVar23,pppplVar26,param_6,
                 param_7,param_8);
  ppplVar14 = local_238;
  local_238 = (long ***)0x0;
  if (ppplVar14 != (long ***)0x0) {
    (*(code *)(*ppplVar14)[1])();
  }
  plVar11 = pplVar10[8];
  ppplVar14 = (long ***)
              FUN_710392e290(0x10,0x38,pppplVar21,ppppbVar23,pppplVar26,param_6,param_7,param_8);
  if (ppplVar14 == (long ***)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_240 = (long ***)((ulong)local_240._4_4_ << 0x20);
      local_80 = (long ***)&DAT_00000038;
      pppplVar21 = &local_80;
      uVar39 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_240);
      if (((uVar39 & 1) != 0) &&
         (ppplVar14 = (long ***)
                      FUN_710392e290(0x10,0x38,pppplVar21,ppppbVar23,pppplVar26,param_6,param_7,
                                     param_8), ppplVar14 != (long ***)0x0)) goto LAB_71019cf738;
    }
    ppplVar14 = (long ***)0x0;
  }
LAB_71019cf738:
  ppplVar14[5] = (long **)0x0;
  ppplVar14[6] = (long **)0x0;
  *ppplVar14 = (long **)&PTR_FUN_71050a7bd8;
  ppplVar14[2] = pplVar10;
  ppplVar14[3] = (long **)FUN_71019cd2c0;
  ppplVar14[4] = (long **)0x0;
  pppplVar21 = (long ****)&local_240;
  *(undefined4 *)(ppplVar14 + 1) = 0;
  local_240 = ppplVar14;
  FUN_7103376af0((long)plVar11,(byte *)"backup_list_selected_id",pppplVar21,ppppbVar23,pppplVar26,
                 param_6,param_7,param_8);
  ppplVar14 = local_240;
  local_240 = (long ***)0x0;
  if (ppplVar14 != (long ***)0x0) {
    (*(code *)(*ppplVar14)[1])();
  }
  plVar11 = pplVar10[8];
  local_80 = (long ***)
             FUN_710392e290(0x10,0x38,pppplVar21,ppppbVar23,pppplVar26,param_6,param_7,param_8);
  if (local_80 == (long ***)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_74[0] = 0;
      local_80 = (long ***)&DAT_00000038;
      pppplVar21 = &local_80;
      uVar39 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,local_74);
      if (((uVar39 & 1) != 0) &&
         (local_80 = (long ***)
                     FUN_710392e290(0x10,0x38,pppplVar21,ppppbVar23,pppplVar26,param_6,param_7,
                                    param_8), local_80 != (long ***)0x0)) goto LAB_71019cf7e4;
    }
    local_80 = (long ***)0x0;
  }
LAB_71019cf7e4:
  *local_80 = (long **)&PTR_FUN_71050a7bd8;
  local_80[5] = (long **)0x0;
  local_80[6] = (long **)0x0;
  local_80[2] = pplVar10;
  pcVar20 = (char *)&local_80;
  local_80[3] = (long **)FUN_71019cd310;
  local_80[4] = (long **)0x0;
  *(undefined4 *)(local_80 + 1) = 0;
  FUN_7103376af0((long)plVar11,(byte *)"select_list_from_backup_id",(long ****)pcVar20,ppppbVar23,
                 pppplVar26,param_6,param_7,param_8);
  ppplVar14 = local_80;
  local_80 = (long ***)0x0;
  if (ppplVar14 != (long ***)0x0) {
    (*(code *)(*ppplVar14)[1])();
  }
  plVar11 = pplVar10[8];
  if ((long *)*plVar11 != (long *)0x0) {
    ppppbVar23 = (byte ****)((ulong)local_1a0 >> 0x20);
    pcVar20 = &DAT_71042b2a84;
    FUN_7103375650((long *)*plVar11,"SCROLLER_ITEM_NUM",&DAT_71042b2a84);
    plVar11 = pplVar10[8];
    if ((long *)*plVar11 != (long *)0x0) {
      pcVar20 = &DAT_71042b2a84;
      ppppbVar23 = (byte ****)&DAT_00000007;
      FUN_7103375650((long *)*plVar11,"INPUT_OPEN_SORT_WINDOW",&DAT_71042b2a84);
      plVar11 = pplVar10[8];
    }
  }
  FUN_71019e0910(plVar11);
  plVar38 = pplVar10[8];
  plVar11 = (long *)*plVar38;
  lVar40 = *plVar11;
  *(undefined4 *)(plVar11 + 2) = 0;
  plVar11 = *(long **)(lVar40 + 0x10);
  *plVar11 = lVar40;
  *(undefined4 *)(plVar11 + 1) = 0x48;
  lVar29 = *(long *)(lVar40 + 0x10);
  *(long *)(lVar40 + 0x10) = lVar29 + 0x10;
  lVar35 = *(long *)(*(long *)(lVar40 + 0x18) + 200);
  *(long *)(lVar40 + 0x10) = lVar29;
  if (lVar35 == lVar40) {
    lVar29 = *(long *)(*(long *)(lVar40 + 0x18) + 0x40);
    if (*(uint *)(lVar29 + 0xc) < 2) {
      plVar11 = (long *)(*(long *)(lVar29 + 0x18) +
                        ((ulong)~(uint)(0xffffffffL << ((ulong)*(byte *)(lVar29 + 0xb) & 0x3f)) & 2)
                        * 0x20);
      do {
        if (((int)plVar11[3] == 0x13) && (plVar16 = plVar11, plVar11[2] == 2)) break;
        piVar1 = (int *)((long)plVar11 + 0x1c);
        plVar11 = plVar11 + (long)*piVar1 * 4;
        plVar16 = &DAT_7104862960;
      } while (*piVar1 != 0);
    }
    else {
      plVar16 = (long *)(*(long *)(lVar29 + 0x10) + 0x10);
    }
    pcVar20 = "initialize";
    FUN_71038f4d40(lVar40,plVar16,"initialize");
  }
  else {
    FUN_71038f4b20(lVar40,"initialize");
    FUN_71038f4fc0(lVar40,-2);
  }
  puVar30 = (undefined8 *)(*(long *)(lVar40 + 0x10) + -0x10);
  if ((puVar30 == &DAT_7104862960) || ((*(uint *)(*(long *)(lVar40 + 0x10) + -8) & 0xf) != 6)) {
    *(undefined8 **)(lVar40 + 0x10) = puVar30;
  }
  else {
    FUN_7103377130(plVar38,0,(long ****)pcVar20,ppppbVar23,pppplVar26,param_6,param_7,param_8);
  }
  uVar39 = local_220;
  local_228 = (long ***)&PTR_FUN_710523d988;
  local_220 = 0;
  if (uVar39 != 0) {
    uVar12 = *(ulong *)(uVar39 + 0x18);
    *(undefined ***)(uVar39 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar39 + 0x18) = 0;
    if (uVar12 != 0) {
      FUN_710392eb40(uVar12);
    }
    FUN_710392eb40(uVar39);
  }
  uVar39 = local_1d8;
  local_1e0 = &PTR_FUN_710523d988;
  local_1d8 = 0;
  if (uVar39 != 0) {
    uVar12 = *(ulong *)(uVar39 + 0x18);
    *(undefined ***)(uVar39 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar39 + 0x18) = 0;
    if (uVar12 != 0) {
      FUN_710392eb40(uVar12);
    }
    FUN_710392eb40(uVar39);
  }
  if (local_1b8 != (uint *)0x0) {
    local_1b0 = local_1b8;
    FUN_710392eb40((ulong)local_1b8);
  }
  if (alStack_b0 == local_90) {
    pcVar31 = *(code **)(*local_90 + 0x20);
LAB_71019cfa2c:
    (*pcVar31)();
  }
  else if (local_90 != (long *)0x0) {
    pcVar31 = *(code **)(*local_90 + 0x28);
    goto LAB_71019cfa2c;
  }
  if (alStack_e0 == local_c0) {
    pcVar31 = *(code **)(*local_c0 + 0x20);
LAB_71019cfa5c:
    (*pcVar31)();
  }
  else if (local_c0 != (long *)0x0) {
    pcVar31 = *(code **)(*local_c0 + 0x28);
    goto LAB_71019cfa5c;
  }
  if (alStack_110 == local_f0) {
    pcVar31 = *(code **)(*local_f0 + 0x20);
LAB_71019cfa8c:
    (*pcVar31)();
  }
  else if (local_f0 != (long *)0x0) {
    pcVar31 = *(code **)(*local_f0 + 0x28);
    goto LAB_71019cfa8c;
  }
  if (alStack_140 == local_120) {
    pcVar31 = *(code **)(*local_120 + 0x20);
LAB_71019cfabc:
    (*pcVar31)();
  }
  else if (local_120 != (long *)0x0) {
    pcVar31 = *(code **)(*local_120 + 0x28);
    goto LAB_71019cfabc;
  }
  if (alStack_170 == local_150) {
    pcVar31 = *(code **)(*local_150 + 0x20);
  }
  else {
    if (local_150 == (long *)0x0) goto LAB_71019cfaf0;
    pcVar31 = *(code **)(*local_150 + 0x28);
  }
  (*pcVar31)();
LAB_71019cfaf0:
  *(undefined1 *)(param_1 + 0xe) = 1;
  return;
}

