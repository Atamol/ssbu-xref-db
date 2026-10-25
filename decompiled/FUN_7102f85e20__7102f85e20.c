// addr:      7102f85e20
// offset:    0x2f85e20
// name:      FUN_7102f85e20
// mangled:   
// signature: undefined __cdecl FUN_7102f85e20(long param_1, undefined8 param_2, undefined8 param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7102f85e20(long param_1,undefined8 param_2,undefined8 param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  bool bVar1;
  ushort *puVar2;
  undefined4 *puVar3;
  undefined8 *puVar4;
  uint uVar5;
  void *pvVar6;
  uint uVar7;
  char cVar8;
  short sVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [12];
  undefined1 auVar23 [16];
  undefined1 auVar24 [12];
  undefined1 auVar25 [16];
  undefined1 auVar26 [12];
  undefined1 auVar27 [16];
  undefined1 auVar28 [12];
  undefined1 auVar29 [16];
  undefined1 auVar30 [12];
  undefined1 auVar31 [16];
  undefined1 auVar32 [12];
  undefined8 uVar33;
  uint uVar34;
  undefined4 uVar35;
  uint uVar36;
  uint uVar37;
  long lVar38;
  long *plVar39;
  long lVar40;
  long ********pppppppplVar41;
  long ******pppppplVar42;
  long *******ppppppplVar43;
  ulong uVar44;
  long *plVar45;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 extraout_x1_02;
  undefined8 extraout_x1_03;
  undefined8 extraout_x1_04;
  undefined8 extraout_x1_05;
  undefined8 uVar46;
  uint uVar47;
  long **********pppppppppplVar48;
  size_t __n;
  byte ****ppppbVar49;
  uint *puVar50;
  long *plVar51;
  undefined8 *puVar52;
  long *******ppppppplVar53;
  ulong uVar54;
  undefined4 *puVar55;
  int *piVar56;
  ulong uVar57;
  uint uVar58;
  long *********ppppppppplVar59;
  byte *pbVar60;
  long **********pppppppppplVar61;
  long **********pppppppppplVar62;
  long **********pppppppppplVar63;
  void *pvVar64;
  long lVar65;
  ulong uVar66;
  long **********pppppppppplVar67;
  int iVar68;
  undefined4 uVar69;
  undefined4 uVar70;
  undefined4 uVar73;
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  undefined1 auVar74 [16];
  long local_1b0;
  long *local_1a8;
  undefined8 local_190;
  undefined8 uStack_188;
  long *********local_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined4 local_160;
  undefined4 uStack_15c;
  long *********local_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined4 local_130;
  undefined4 uStack_12c;
  long *********local_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined4 local_100;
  undefined4 uStack_fc;
  long **********local_f0;
  long **********pppppppppplStack_e8;
  long **********local_e0;
  long lStack_d8;
  long local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  long **********local_b0;
  long **********local_a8;
  long **********local_a0;
  long local_98;
  long local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  
  uStack_170 = CONCAT44(_DAT_7107521004,_ConstantZero);
  auVar74._8_4_ = _DAT_7107521008;
  auVar74._0_8_ = uStack_170;
  auVar74._12_4_ = uRam000000710752100c;
  local_120 = *(long **********)(param_1 + 2000);
  local_100 = *(undefined4 *)(param_1 + 0x7d8);
  cVar8 = *(char *)(param_1 + 0x770);
  uStack_fc = 0;
  uStack_118 = 0;
  uStack_168 = auVar74._8_8_;
  local_150 = *(long **********)(param_1 + 0x7dc);
  local_130 = *(undefined4 *)(param_1 + 0x7e4);
  uStack_148 = 0;
  uStack_12c = 0;
  local_160 = *(undefined4 *)(param_1 + 0x7f0);
  local_180 = *(long **********)(param_1 + 0x7e8);
  plVar45 = (long *)(param_1 + 0xcea8);
  pppppppppplVar48 = (long **********)(param_1 + 0x738);
  uStack_15c = 0;
  uStack_178 = 0;
  uStack_140 = uStack_170;
  uStack_138 = uStack_168;
  uStack_110 = uStack_170;
  uStack_108 = uStack_168;
  FUN_7102f8d1d0((long *)(param_1 + 0xf10),param_1,(long ****)pppppppppplVar48,param_4,param_5,
                 param_6,param_7,param_8);
  puVar50 = *(uint **)(param_1 + 0x340);
  uVar34 = *puVar50;
  *puVar50 = puVar50[1];
  uVar37 = puVar50[3];
  uVar34 = uVar34 ^ uVar34 << 0xb;
  uVar34 = uVar34 ^ uVar34 >> 8 ^ uVar37 ^ uVar37 >> 0x13;
  puVar50[1] = puVar50[2];
  puVar50[2] = uVar37;
  puVar50[3] = uVar34;
  lVar65 = 0;
  *(uint *)(param_1 + 0xcc08) = uVar34 % 3;
  do {
    uVar34 = (uint)lVar65 & 0x7fffffff;
    if (uVar34 == 8) {
      *(undefined8 *)(param_1 + 0xca98) = 0;
      *(ulong *)(param_1 + 0xca90) =
           CONCAT44(*(float *)(param_1 + 0xeec) + *(float *)(param_1 + 0xef4),
                    *(float *)(param_1 + 0xee8) + *(float *)(param_1 + 0xef0));
      *(undefined8 *)(param_1 + 0xcaa8) = 0;
      *(ulong *)(param_1 + 0xcaa0) =
           CONCAT44(*(float *)(param_1 + 0xeec) + *(float *)(param_1 + 0xefc),
                    *(float *)(param_1 + 0xee8) + *(float *)(param_1 + 0xef8));
    }
    else if (uVar34 == 7) {
      *(undefined8 *)(param_1 + 0xca78) = 0;
      *(ulong *)(param_1 + 0xca70) =
           CONCAT44(*(float *)(param_1 + 0xed4) + *(float *)(param_1 + 0xedc),
                    *(float *)(param_1 + 0xed0) + *(float *)(param_1 + 0xed8));
      *(undefined8 *)(param_1 + 0xca88) = 0;
      *(ulong *)(param_1 + 0xca80) =
           CONCAT44(*(float *)(param_1 + 0xed4) + *(float *)(param_1 + 0xee4),
                    *(float *)(param_1 + 0xed0) + *(float *)(param_1 + 0xee0));
    }
    else {
      local_f0 = (long **********)0x0;
      pppppppppplStack_e8 = (long **********)0x0;
      local_e0 = (long **********)0x0;
      std::string::assign((char *)&local_f0);
      std::string::push_back((char)&local_f0);
      std::string::append((char *)&local_f0);
      lVar40 = *(long *)(param_1 + 0x300);
      pppppppppplVar48 = (long **********)((ulong)&local_f0 | 1);
      if (((ulong)local_f0 & 1) != 0) {
        pppppppppplVar48 = local_e0;
      }
      uVar34 = FUN_7103151710((byte *)pppppppppplVar48);
      pppppppppplVar48 = (long **********)(ulong)uVar34;
      FUN_710262cbe0((long *)&local_b0,*(long *)(lVar40 + 8),uVar34);
      while (local_b0 != (long **********)0x0) {
        if ((ulong)((long)local_b0[0x36] - (long)local_b0[0x35] >> 3) <=
            ((ulong)local_a8 & 0xffffffff)) {
                    /* WARNING: Subroutine does not return */
          std::__vector_base_common<true>::__throw_out_of_range();
        }
        ppppppplVar43 = local_b0[0x35][(ulong)local_a8 & 0xffffffff][2];
        if ((uint)local_a0 < *(uint *)(ppppppplVar43 + 0x1f)) {
          pppppplVar42 = ppppppplVar43[0x20] + ((ulong)local_a0 & 0xffffffff) * 0x28;
        }
        else {
          pppppplVar42 = (long ******)0x0;
        }
        if (*(int *)(pppppplVar42 + 0x21) == 3) {
          uVar35 = *(undefined4 *)(pppppplVar42 + 0x22);
          uVar70 = *(undefined4 *)((long)pppppplVar42 + 0x10c);
          uVar73 = *(undefined4 *)((long)pppppplVar42 + 0x114);
          uVar69 = *(undefined4 *)(pppppplVar42 + 0x23);
          lVar40 = param_1 + lVar65 * 0x20;
          *(undefined8 *)(lVar40 + 0xc998) = 0;
          *(ulong *)(lVar40 + 0xc990) = CONCAT44(uVar73,uVar70);
          *(undefined8 *)(lVar40 + 0xc9a8) = 0;
          *(ulong *)(lVar40 + 0xc9a0) = CONCAT44(uVar69,uVar35);
          break;
        }
        FUN_7102927ba0((long *)&local_b0);
      }
      if ((((ulong)local_f0 & 1) != 0) && (local_e0 != (long **********)0x0)) {
        FUN_710392eb40((ulong)local_e0);
      }
    }
    lVar65 = lVar65 + 1;
  } while (lVar65 != 9);
  lVar65 = 0;
  uVar66 = 0;
  *(undefined8 *)(param_1 + 0xcdb8) = *(undefined8 *)(param_1 + 0x338);
  uVar34 = 2;
  if (cVar8 != '\0') {
    uVar34 = 6;
  }
  *(undefined8 *)(param_1 + 0xcae0) = *(undefined8 *)(param_1 + 0x338);
  do {
    if ((ulong)(*(long *)(param_1 + 0xcaf0) - *(long *)(param_1 + 0xcae8) >> 5) <= uVar66) {
LAB_7102f885b0:
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_out_of_range();
    }
    plVar51 = (long *)(*(long *)(param_1 + 0xcae8) + lVar65);
    *plVar51 = (long)(plVar51 + 2);
    if ((ulong)(*(long *)(param_1 + 0xcaf0) - *(long *)(param_1 + 0xcae8) >> 5) <= uVar66)
    goto LAB_7102f885b0;
    auVar74 = *(undefined1 (*) [16])(&DAT_710455beb0 + uVar66 * 0x10);
    auVar71 = NEON_ext(auVar74,auVar74,8,1);
    lVar40 = *(long *)(param_1 + 0xcae8) + lVar65;
    *(ulong *)(lVar40 + 0x18) = (ulong)auVar71._0_4_;
    *(long *)(lVar40 + 0x10) = auVar74._0_8_;
    lVar40 = *(long *)(param_1 + 0xcae8);
    uVar57 = *(long *)(param_1 + 0xcaf0) - lVar40 >> 5;
    if (uVar57 <= uVar66) goto LAB_7102f885b0;
    lVar38 = *(long *)(**(long **)(param_1 + 0xcae0) + 8);
    if (lVar38 == 0) {
      uVar35 = 0xffffffff;
    }
    else {
      pppppppppplVar48 = (long **********)0x0;
      uVar35 = FUN_7102405040(lVar38,(undefined8 *)(lVar40 + lVar65),0,param_4,param_5,param_6,
                              param_7,param_8);
      lVar40 = *(long *)(param_1 + 0xcae8);
      uVar57 = *(long *)(param_1 + 0xcaf0) - lVar40 >> 5;
    }
    if (uVar57 <= uVar66) goto LAB_7102f885b0;
    uVar66 = uVar66 + 1;
    lVar40 = lVar40 + lVar65;
    lVar65 = lVar65 + 0x20;
    *(undefined4 *)(lVar40 + 8) = uVar35;
  } while (uVar66 < 0xf);
  if (*(long **)(param_1 + 0xcdb8) != (long *)0x0) {
    *(long *)(param_1 + 0xcdc0) = param_1 + 0xcdd0;
    lVar65 = *(long *)(**(long **)(param_1 + 0xcdb8) + 8);
    if (lVar65 == 0) {
      uVar35 = 0xffffffff;
    }
    else {
      pppppppppplVar48 = (long **********)0x0;
      uVar35 = FUN_7102405040(lVar65,(long *)(param_1 + 0xcdc0),0,param_4,param_5,param_6,param_7,
                              param_8);
    }
    *(undefined4 *)(param_1 + 0xcdc8) = uVar35;
  }
  *(undefined4 *)(param_1 + 0xcf10) = *(undefined4 *)(param_1 + 0x7c4);
  *(undefined4 *)(param_1 + 0xcf14) = *(undefined4 *)(param_1 + 0x7c8);
  plVar51 = *(long **)(*(long *)(param_1 + 0x300) + 0x18);
  plVar39 = (long *)plVar51[1];
  for (plVar51 = (long *)*plVar51; plVar51 != plVar39; plVar51 = plVar51 + 1) {
    puVar52 = *(undefined8 **)(*plVar51 + 0x110);
    if (puVar52 != (undefined8 *)0x0) {
      if ((long *)*puVar52 != (long *)puVar52[1]) {
        pppppppppplVar48 = (long **********)0x1;
        FUN_71025f4d80((long *)*puVar52,(long *)puVar52[1],1);
      }
    }
  }
  uVar37 = *(byte *)(param_1 + 99) - 1;
  if (3 < uVar37) {
    lVar65 = *(long *)(param_1 + 0x798);
    lVar40 = *(long *)(param_1 + 0x790);
    local_b0 = (long **********)0x0;
    local_a8 = (long **********)0x0;
    local_a0 = (long **********)0x0;
    uVar66 = lVar65 - lVar40;
    if (uVar66 == 0) goto LAB_7102f863a4;
    if ((long)uVar66 < 0) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    pppppppppplVar67 = (long **********)((long)uVar66 >> 3);
    pppppppppplVar61 = (long **********)(((ulong)((long)pppppppppplVar67 + -1) >> 6) + 1);
    pppppppppplVar62 = (long **********)((long)pppppppppplVar61 * 8);
    pppppppppplVar63 =
         (long **********)
         FUN_710392e290(0x10,pppppppppplVar62,(long ****)pppppppppplVar48,param_4,param_5,param_6,
                        param_7,param_8);
    if (pppppppppplVar63 == (long **********)0x0) {
      if (DAT_7105332f00 != (long *)0x0) {
        local_190 = local_190 & 0xffffffff00000000;
        pppppppppplVar48 = (long **********)&local_f0;
        local_f0 = pppppppppplVar62;
        uVar57 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_190);
        if (((uVar57 & 1) != 0) &&
           (pppppppppplVar63 =
                 (long **********)
                 FUN_710392e290(0x10,pppppppppplVar62,(long ****)pppppppppplVar48,param_4,param_5,
                                param_6,param_7,param_8), pppppppppplVar63 != (long **********)0x0))
        goto LAB_7102f86364;
      }
      pppppppppplVar63 = (long **********)0x0;
    }
LAB_7102f86364:
    uVar57 = (ulong)pppppppppplVar67 >> 6;
    pppppppppplVar48 = (long **********)(uVar57 * 8);
    local_b0 = pppppppppplVar63;
    local_a8 = pppppppppplVar67;
    local_a0 = pppppppppplVar61;
    memset(pppppppppplVar63,0xff,(size_t)pppppppppplVar48);
    uVar66 = uVar66 >> 3 & 0x3f;
    if (uVar66 != 0) {
      pppppppppplVar63[uVar57] =
           (long *********)
           ((ulong)pppppppppplVar63[uVar57] | 0xffffffffffffffffU >> (-uVar66 & 0x3f));
    }
LAB_7102f863a4:
    uVar37 = 0;
    lVar65 = lVar65 - lVar40;
    if (lVar65 != 0) goto LAB_7102f863d4;
LAB_7102f863cc:
    uVar36 = 0;
LAB_7102f86438:
    puVar50 = *(uint **)(param_1 + 0x340);
    uVar7 = *puVar50;
    *puVar50 = puVar50[1];
    uVar5 = puVar50[3];
    uVar7 = uVar7 ^ uVar7 << 0xb;
    puVar50[1] = puVar50[2];
    puVar50[2] = uVar5;
    uVar7 = uVar7 ^ uVar7 >> 8 ^ uVar5 ^ uVar5 >> 0x13;
    puVar50[3] = uVar7;
    lVar40 = *(long *)(param_1 + 0x790);
    lVar65 = *(long *)(param_1 + 0x798) - lVar40;
    if (lVar65 != 0) {
      uVar5 = 0;
      if (uVar36 != 0) {
        uVar5 = uVar7 / uVar36;
      }
      pppppppppplVar48 = (long **********)0x0;
      uVar58 = 0;
      do {
        uVar47 = (uint)pppppppppplVar48;
        if (uVar47 == 0) {
LAB_7102f864a4:
          if (local_a8 <= pppppppppplVar48) goto LAB_7102f885a8;
          uVar66 = 1L << ((ulong)pppppppppplVar48 & 0x3f);
          if ((((ulong)local_b0[(ulong)pppppppppplVar48 >> 6] & uVar66) != 0) &&
             (uVar58 = uVar58 + *(ushort *)(lVar40 + (long)pppppppppplVar48 * 8),
             uVar7 - uVar5 * uVar36 < uVar58)) {
            local_b0[(ulong)pppppppppplVar48 >> 6] =
                 (long *********)
                 ((ulong)local_b0[(ulong)pppppppppplVar48 >> 6] & (uVar66 ^ 0xffffffffffffffff));
            lVar65 = *(long *)(param_1 + 0x798);
            lVar40 = *(long *)(param_1 + 0x790);
            if (lVar65 - lVar40 == 0) goto LAB_7102f86574;
            pppppppppplVar62 = (long **********)(lVar65 - lVar40 >> 3);
            pppppppppplVar61 = (long **********)0x1;
            pppppppppplVar63 = (long **********)0x0;
            goto LAB_7102f86508;
          }
        }
        else if (uVar37 == (int)*(short *)(lVar40 + (long)pppppppppplVar48 * 8 + 6)) {
          if (uVar47 < 0xe) goto LAB_7102f864a4;
          break;
        }
        pppppppppplVar48 = (long **********)(ulong)(uVar47 + 1);
      } while (pppppppppplVar48 < (long **********)(lVar65 >> 3));
    }
    goto LAB_7102f865ec;
  }
  uVar36 = 0;
  do {
    pppppppppplVar48 =
         (long **********)
         (ulong)*(uint *)(&DAT_710455b450 + (ulong)uVar36 * 4 + ((ulong)uVar37 & 0xff) * 0xc);
    if (*(uint *)(&DAT_710455b450 + (ulong)uVar36 * 4 + ((ulong)uVar37 & 0xff) * 0xc) != 0) {
      uVar36 = FUN_7102f8c380(param_1,uVar36,(long ****)pppppppppplVar48,param_4,param_5,param_6,
                              param_7,param_8);
    }
    uVar36 = uVar36 + 1;
  } while (uVar36 < 3);
LAB_7102f86604:
  if (*(long **)(param_1 + 0x1b0) == *(long **)(param_1 + 0x1a8)) {
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_out_of_range();
  }
  lVar65 = **(long **)(param_1 + 0x1a8);
  puVar52 = *(undefined8 **)(lVar65 + 0x20);
  uVar66 = *(long *)(lVar65 + 0x28) - (long)puVar52;
  uVar37 = FUN_7103151710((byte *)"IPP0001");
  if ((int)(uVar66 >> 3) != 0) {
    uVar57 = 0;
    plVar51 = (long *)*puVar52;
    do {
      if (plVar51 != (long *)0x0) {
        if ((char)plVar51[4] != '\0') {
          plVar39 = (long *)plVar51[1];
          lVar40 = plVar51[2];
          lVar38 = *plVar51;
          *(undefined1 *)(plVar51 + 4) = 0;
          *plVar39 = lVar38;
          *(long **)(lVar38 + 8) = plVar39;
          *(long *)(lVar40 + 0x18) = *(long *)(lVar40 + 0x18) + -1;
          *plVar51 = 0;
          plVar51[1] = 0;
          puVar52 = *(undefined8 **)(lVar40 + 0x40);
          *plVar51 = lVar40 + 0x38;
          plVar51[1] = (long)puVar52;
          *(long **)(lVar40 + 0x40) = plVar51;
          *puVar52 = plVar51;
          *(long *)(lVar40 + 0x30) = *(long *)(lVar40 + 0x30) + 1;
          iVar68 = 0;
          if (plVar51[3] != 0) {
            iVar68 = *(int *)(plVar51[3] + 0x110);
          }
          *(int *)(lVar40 + 0x48) = *(int *)(lVar40 + 0x48) - iVar68;
        }
        uVar36 = *(uint *)(plVar51[3] + 0x100);
        if (uVar37 == uVar36) {
LAB_7102f8674c:
          if ((char)plVar51[4] == '\0') {
            plVar39 = (long *)plVar51[1];
            lVar40 = plVar51[2];
            lVar38 = *plVar51;
            *(undefined1 *)(plVar51 + 4) = 1;
            *plVar39 = lVar38;
            *(long **)(lVar38 + 8) = plVar39;
            *(long *)(lVar40 + 0x30) = *(long *)(lVar40 + 0x30) + -1;
            *plVar51 = 0;
            plVar51[1] = 0;
            puVar52 = *(undefined8 **)(lVar40 + 0x28);
            *plVar51 = lVar40 + 0x20;
            plVar51[1] = (long)puVar52;
            *(long **)(lVar40 + 0x28) = plVar51;
            *puVar52 = plVar51;
            *(long *)(lVar40 + 0x18) = *(long *)(lVar40 + 0x18) + 1;
            iVar68 = 0;
            if (plVar51[3] != 0) {
              iVar68 = *(int *)(plVar51[3] + 0x110);
            }
            *(int *)(lVar40 + 0x48) = *(int *)(lVar40 + 0x48) + iVar68;
          }
        }
        else {
          lVar40 = *(long *)(param_1 + 0xce90);
          if (lVar40 != 0) {
            uVar7 = *(uint *)(lVar40 + 0xe0);
            if (0xd < uVar7) goto LAB_7102f87ed8;
            if (*(uint *)((long)&DAT_710532ea28 + (ulong)uVar7 * 0x20 + 4) == uVar36)
            goto LAB_7102f8674c;
          }
          if (*(long *)(param_1 + 0xce98) != 0) {
            uVar7 = *(uint *)(*(long *)(param_1 + 0xce98) + 0xe0);
            if (0xd < uVar7) goto LAB_7102f87ed8;
            if (*(uint *)((long)&DAT_710532ea28 + (ulong)uVar7 * 0x20 + 4) == uVar36)
            goto LAB_7102f8674c;
          }
          if (*(long *)(param_1 + 0xcea0) != 0) {
            uVar7 = *(uint *)(*(long *)(param_1 + 0xcea0) + 0xe0);
            if (0xd < uVar7) goto LAB_7102f87ed8;
            if (*(uint *)((long)&DAT_710532ea28 + (ulong)uVar7 * 0x20 + 4) == uVar36)
            goto LAB_7102f8674c;
          }
        }
      }
      uVar57 = uVar57 + 1;
      if ((uVar66 >> 3 & 0xffffffff) <= uVar57) goto code_r0x007102f867bc;
      plVar51 = *(long **)(*(long *)(lVar65 + 0x20) + uVar57 * 8);
    } while( true );
  }
  plVar51 = *(long **)(param_1 + 0xce90);
  if (plVar51 != (long *)0x0) goto LAB_7102f867e4;
LAB_7102f867c4:
  plVar51 = *(long **)(param_1 + 0xce98);
  if (plVar51 != (long *)0x0) goto LAB_7102f86c20;
LAB_7102f867cc:
  plVar51 = *(long **)(param_1 + 0xcea0);
joined_r0x007102f867d0:
  if (plVar51 != (long *)0x0) {
    uVar37 = *(uint *)(plVar51 + 0x1c);
    local_190 = DAT_710532e990;
    uStack_188 = DAT_710532e998;
    if ((ulong)(*(long *)(param_1 + 0x798) - *(long *)(param_1 + 0x790) >> 3) <= (ulong)uVar37) {
LAB_7102f885e0:
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_out_of_range();
    }
    if (*(short *)(*(long *)(param_1 + 0x790) + (ulong)uVar37 * 8 + 2) != 0) {
      local_190._0_4_ = (float)DAT_710532e990;
      local_190._4_4_ = (float)(DAT_710532e990 >> 0x20);
      uStack_188._0_4_ = (float)DAT_710532e998;
      uStack_188._4_4_ = (float)((ulong)DAT_710532e998 >> 0x20);
      uStack_188 = CONCAT44(uStack_188._4_4_ + DAT_710532e9a0._12_4_,
                            (float)uStack_188 + DAT_710532e9a0._8_4_);
      local_190 = CONCAT44(local_190._4_4_ + DAT_710532e9a0._4_4_,
                           (float)local_190 + (float)DAT_710532e9a0);
    }
    if (uVar37 == 9) {
      auVar30._4_4_ = _DAT_7107521004;
      auVar30._0_4_ = _ConstantZero;
      auVar30._8_4_ = _DAT_7107521008;
      auVar29._12_4_ = uRam000000710752100c;
      auVar29._0_12_ = auVar30;
      *(undefined1 *)(param_1 + 0xcd9c) = 1;
      lVar65 = 0;
      pppppppppplStack_e8 = (long **********)0x0;
      local_f0 = (long **********)&DAT_3f800000;
      auVar10._12_4_ = 0x3f800000;
      auVar10._0_12_ = auVar30;
      auVar74 = NEON_ext(auVar10,auVar29,0xc,1);
      lStack_d8 = 0;
      local_e0 = (long **********)&DAT_3f80000000000000;
      auVar11._12_4_ = 0x3f800000;
      auVar11._0_12_ = auVar30;
      auVar71 = NEON_ext(auVar74,auVar11,4,1);
      auVar74 = NEON_ext(auVar74,auVar74,8,1);
      lVar40 = param_1 + 0xa820;
      auVar74 = NEON_ext(auVar71,auVar74,0xc,1);
      uStack_c8 = 0x3f800000;
      local_d0 = 0;
      local_b8 = auVar74._8_8_;
      local_c0 = auVar74._0_8_;
      do {
        uVar66 = 0;
        do {
          plVar39 = *(long **)(lVar40 + uVar66 * 8);
          if (plVar39 == (long *)0x0) break;
          plVar39 = (long *)(**(code **)(*plVar39 + 0x38))();
          lVar38 = *plVar39;
          if (lVar38 != 0) {
            (**(code **)(**(long **)(lVar38 + 0x90) + 0x148))(*(long **)(lVar38 + 0x90),&local_f0);
            lVar38 = *(long *)(lVar38 + 0xd8);
            if (lVar38 != 0) {
              local_98 = lStack_d8;
              local_a0 = local_e0;
              local_a8 = pppppppppplStack_e8;
              local_b0 = local_f0;
              local_78 = local_b8;
              local_80 = local_c0;
              local_88 = uStack_c8;
              local_90 = local_d0;
              if (*(char *)(*(long *)(lVar38 + 8) + 0xa8) != '\0') {
                plVar39 = *(long **)(*(long *)(lVar38 + 8) + 0x48);
                (**(code **)(*plVar39 + 0x20))(plVar39,&local_b0);
              }
              *(undefined1 *)(lVar38 + 0x20) = 1;
            }
          }
          uVar66 = uVar66 + 1;
        } while (uVar66 < 0x20);
        lVar65 = lVar65 + 1;
        lVar40 = lVar40 + 0x108;
      } while (lVar65 != 0x10);
      lVar65 = *(long *)(param_1 + 0xc980);
      if (lVar65 != 0) {
        (**(code **)(**(long **)(lVar65 + 0x90) + 0x148))(*(long **)(lVar65 + 0x90),&local_f0);
        lVar65 = *(long *)(lVar65 + 0xd8);
        if (lVar65 != 0) {
          local_98 = lStack_d8;
          local_a0 = local_e0;
          local_a8 = pppppppppplStack_e8;
          local_b0 = local_f0;
          local_78 = local_b8;
          local_80 = local_c0;
          local_88 = uStack_c8;
          local_90 = local_d0;
          if (*(char *)(*(long *)(lVar65 + 8) + 0xa8) != '\0') {
            plVar39 = *(long **)(*(long *)(lVar65 + 8) + 0x48);
            (**(code **)(*plVar39 + 0x20))(plVar39,&local_b0);
          }
          *(undefined1 *)(lVar65 + 0x20) = 1;
        }
      }
      if (plVar51[7] != 0) {
        plVar39 = *(long **)(plVar51[7] + 0x130);
        param_5 = (long ****)(ulong)uVar34;
        pppppppppplVar48 = &local_120;
        param_6 = 1;
        param_4 = (byte ****)0x0;
        (**(code **)(*plVar39 + 0x100))(plVar39,0);
      }
      uVar37 = *(uint *)(plVar51 + 0x1c);
    }
    if (uVar37 == 10) {
      auVar32._4_4_ = _DAT_7107521004;
      auVar32._0_4_ = _ConstantZero;
      auVar32._8_4_ = _DAT_7107521008;
      auVar31._12_4_ = uRam000000710752100c;
      auVar31._0_12_ = auVar32;
      *(undefined1 *)(param_1 + 0xcd9d) = 1;
      *(undefined4 *)(param_1 + 0xcda0) = 0;
      lVar65 = 0;
      pppppppppplStack_e8 = (long **********)0x0;
      local_f0 = (long **********)&DAT_3f800000;
      auVar12._12_4_ = 0x3f800000;
      auVar12._0_12_ = auVar32;
      auVar74 = NEON_ext(auVar12,auVar31,0xc,1);
      lStack_d8 = 0;
      local_e0 = (long **********)&DAT_3f80000000000000;
      auVar13._12_4_ = 0x3f800000;
      auVar13._0_12_ = auVar32;
      auVar71 = NEON_ext(auVar74,auVar13,4,1);
      auVar74 = NEON_ext(auVar74,auVar74,8,1);
      lVar40 = param_1 + 0xb8a0;
      auVar74 = NEON_ext(auVar71,auVar74,0xc,1);
      uStack_c8 = 0x3f800000;
      local_d0 = 0;
      local_b8 = auVar74._8_8_;
      local_c0 = auVar74._0_8_;
      do {
        uVar66 = 0;
        do {
          plVar39 = *(long **)(lVar40 + uVar66 * 8);
          if (plVar39 == (long *)0x0) break;
          plVar39 = (long *)(**(code **)(*plVar39 + 0x38))();
          lVar38 = *plVar39;
          if (lVar38 != 0) {
            (**(code **)(**(long **)(lVar38 + 0x90) + 0x148))(*(long **)(lVar38 + 0x90),&local_f0);
            lVar38 = *(long *)(lVar38 + 0xd8);
            if (lVar38 != 0) {
              local_98 = lStack_d8;
              local_a0 = local_e0;
              local_a8 = pppppppppplStack_e8;
              local_b0 = local_f0;
              local_78 = local_b8;
              local_80 = local_c0;
              local_88 = uStack_c8;
              local_90 = local_d0;
              if (*(char *)(*(long *)(lVar38 + 8) + 0xa8) != '\0') {
                plVar39 = *(long **)(*(long *)(lVar38 + 8) + 0x48);
                (**(code **)(*plVar39 + 0x20))(plVar39,&local_b0);
              }
              *(undefined1 *)(lVar38 + 0x20) = 1;
            }
          }
          uVar66 = uVar66 + 1;
        } while (uVar66 < 0x20);
        lVar65 = lVar65 + 1;
        lVar40 = lVar40 + 0x108;
      } while (lVar65 != 0x10);
      lVar65 = *(long *)(param_1 + 0xc988);
      if (lVar65 != 0) {
        (**(code **)(**(long **)(lVar65 + 0x90) + 0x148))(*(long **)(lVar65 + 0x90),&local_f0);
        lVar65 = *(long *)(lVar65 + 0xd8);
        if (lVar65 != 0) {
          local_98 = lStack_d8;
          local_a0 = local_e0;
          local_a8 = pppppppppplStack_e8;
          local_b0 = local_f0;
          local_78 = local_b8;
          local_80 = local_c0;
          local_88 = uStack_c8;
          local_90 = local_d0;
          if (*(char *)(*(long *)(lVar65 + 8) + 0xa8) != '\0') {
            plVar39 = *(long **)(*(long *)(lVar65 + 8) + 0x48);
            (**(code **)(*plVar39 + 0x20))(plVar39,&local_b0);
          }
          *(undefined1 *)(lVar65 + 0x20) = 1;
        }
      }
      if (plVar51[7] != 0) {
        plVar39 = *(long **)(plVar51[7] + 0x130);
        param_5 = (long ****)(ulong)uVar34;
        pppppppppplVar48 = &local_150;
        param_6 = 1;
        param_4 = (byte ****)0x0;
        (**(code **)(*plVar39 + 0x100))(plVar39,0);
      }
    }
    (**(code **)(*plVar51 + 0x98))(plVar51,&local_190);
  }
  lVar65 = *(long *)(param_1 + 0xceb8);
  pppppppppplVar61 = (long **********)*plVar45;
  if ((ulong)(lVar65 - (long)pppppppppplVar61 >> 3) < 8) {
    local_90 = param_1 + 0xceb8;
    pppppppppplVar63 = *(long ***********)(param_1 + 0xceb0);
    lVar40 = FUN_710392e290(0x10,0x40,(long ****)pppppppppplVar48,param_4,param_5,param_6,param_7,
                            param_8);
    uVar46 = extraout_x1;
    if (lVar40 == 0) {
      if (DAT_7105332f00 != (long *)0x0) {
        local_190 = local_190 & 0xffffffff00000000;
        local_f0 = (long **********)&DAT_00000040;
        pppppppppplVar48 = (long **********)&local_f0;
        auVar74 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_190);
        uVar46 = auVar74._8_8_;
        if (((auVar74._0_8_ & 1) != 0) &&
           (lVar40 = FUN_710392e290(0x10,0x40,(long ****)pppppppppplVar48,param_4,param_5,param_6,
                                    param_7,param_8), uVar46 = extraout_x1_00, lVar40 != 0))
        goto LAB_7102f87520;
      }
      lVar40 = 0;
    }
LAB_7102f87520:
    lVar38 = lVar40 + ((long)pppppppppplVar63 - (long)pppppppppplVar61 >> 3) * 8;
    local_a8 = (long **********)lVar38;
    if ((long)pppppppppplVar63 - (long)pppppppppplVar61 != 0) {
      uVar66 = ((long)pppppppppplVar63 - (long)pppppppppplVar61) - 8;
      if (((uint)uVar66 >> 3 & 1) == 0) {
        pppppppppplVar63 = pppppppppplVar63 + -1;
        ppppppppplVar59 = *pppppppppplVar63;
        *pppppppppplVar63 = (long *********)0x0;
        *(long **********)(lVar38 + -8) = ppppppppplVar59;
        local_a8 = (long **********)(lVar38 + -8);
      }
      if (7 < uVar66) {
        do {
          ppppppppplVar59 = pppppppppplVar63[-1];
          pppppppppplVar63[-1] = (long *********)0x0;
          *(long **********)((long)local_a8 + -8) = ppppppppplVar59;
          pppppppppplVar63 = pppppppppplVar63 + -2;
          ppppppppplVar59 = *pppppppppplVar63;
          *pppppppppplVar63 = (long *********)0x0;
          *(long **********)((long)local_a8 + -0x10) = ppppppppplVar59;
          local_a8 = (long **********)((long)local_a8 + -0x10);
        } while (pppppppppplVar61 != pppppppppplVar63);
      }
      pppppppppplVar61 = (long **********)*plVar45;
      pppppppppplVar63 = *(long ***********)(param_1 + 0xceb0);
      lVar65 = *(long *)(param_1 + 0xceb8);
    }
    *plVar45 = (long)local_a8;
    *(long *)(param_1 + 0xceb0) = lVar38;
    *(long *)(param_1 + 0xceb8) = lVar40 + 0x40;
    local_b0 = pppppppppplVar61;
    local_a8 = pppppppppplVar61;
    local_a0 = pppppppppplVar63;
    local_98 = lVar65;
    FUN_7102f8c240((ulong *)&local_b0,uVar46,pppppppppplVar48,param_4,param_5,param_6,param_7,
                   param_8);
  }
  local_1a8 = (long *)(param_1 + 0xceb0);
  local_1b0 = param_1 + 0xceb8;
  iVar68 = 0;
  do {
    ppppppppplVar59 =
         (long *********)
         FUN_710392e290(0x10,0x20,(long ****)pppppppppplVar48,param_4,param_5,param_6,param_7,
                        param_8);
    if (ppppppppplVar59 == (long *********)0x0) {
      if (DAT_7105332f00 != (long *)0x0) {
        local_f0 = (long **********)((ulong)local_f0 & 0xffffffff00000000);
        local_b0 = (long **********)&SUB_00000020;
        pppppppppplVar48 = (long **********)&local_b0;
        uVar66 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_f0);
        if (((uVar66 & 1) != 0) &&
           (ppppppppplVar59 =
                 (long *********)
                 FUN_710392e290(0x10,0x20,(long ****)pppppppppplVar48,param_4,param_5,param_6,
                                param_7,param_8), ppppppppplVar59 != (long *********)0x0))
        goto LAB_7102f87658;
      }
      ppppppppplVar59 = (long *********)0x0;
    }
LAB_7102f87658:
    *(undefined2 *)(ppppppppplVar59 + 3) = 0;
    *ppppppppplVar59 = (long ********)0x0;
    ppppppppplVar59[1] = (long ********)0x0;
    ppppppppplVar59[2] = (long ********)0x0;
    local_b0 = (long **********)&DAT_00000004;
    local_a8 = (long **********)&DAT_100000001;
    local_a0 = (long **********)0x1000000001;
    pppppppplVar41 =
         (long ********)
         FUN_710392e290(0x10,0x48,(long ****)pppppppppplVar48,param_4,param_5,param_6,param_7,
                        param_8);
    if (pppppppplVar41 == (long ********)0x0) {
      if (DAT_7105332f00 != (long *)0x0) {
        local_190 = local_190 & 0xffffffff00000000;
        local_f0 = (long **********)&DAT_00000048;
        pppppppppplVar48 = (long **********)&local_f0;
        uVar66 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_190);
        if (((uVar66 & 1) != 0) &&
           (pppppppplVar41 =
                 (long ********)
                 FUN_710392e290(0x10,0x48,(long ****)pppppppppplVar48,param_4,param_5,param_6,
                                param_7,param_8), pppppppplVar41 != (long ********)0x0))
        goto LAB_7102f876dc;
      }
      pppppppplVar41 = (long ********)0x0;
    }
LAB_7102f876dc:
    pppppppppplVar48 = (long **********)&local_b0;
    FUN_710313e6a0(pppppppplVar41,param_1,(long ****)pppppppppplVar48,param_4,param_5,param_6,
                   param_7,param_8);
    *ppppppppplVar59 = pppppppplVar41;
    if (pppppppplVar41[7] != (long *******)0x0) {
      pppppplVar42 = pppppppplVar41[7][0x26];
      param_5 = (long ****)(ulong)uVar34;
      pppppppppplVar48 = &local_180;
      param_6 = 1;
      param_4 = (byte ****)0x0;
      (*(code *)(*pppppplVar42)[0x20])(pppppplVar42,0);
      pppppppplVar41 = *ppppppppplVar59;
    }
    if (pppppppplVar41[7] != (long *******)0x0) {
      pppppplVar42 = pppppppplVar41[7][0x26];
      (*(code *)(*pppppplVar42)[0x24])(pppppplVar42,1);
    }
    lVar65 = *lib::Singleton<app::FighterManager>::instance_;
    ppppppplVar43 =
         (long *******)
         FUN_710392e290(0x10,0x28,(long ****)pppppppppplVar48,param_4,param_5,param_6,param_7,
                        param_8);
    if (ppppppplVar43 == (long *******)0x0) {
      if (DAT_7105332f00 != (long *)0x0) {
        local_f0 = (long **********)((ulong)local_f0 & 0xffffffff00000000);
        local_b0 = (long **********)&DAT_00000028;
        pppppppppplVar48 = (long **********)&local_b0;
        uVar66 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_f0);
        if (((uVar66 & 1) != 0) &&
           (ppppppplVar43 =
                 (long *******)
                 FUN_710392e290(0x10,0x28,(long ****)pppppppppplVar48,param_4,param_5,param_6,
                                param_7,param_8), ppppppplVar43 != (long *******)0x0))
        goto LAB_7102f877a0;
      }
      ppppppplVar43 = (long *******)0x0;
    }
LAB_7102f877a0:
    *(undefined4 *)(ppppppplVar43 + 1) = 1;
    *ppppppplVar43 = (long ******)&DAT_710515b1f0;
    ppppppplVar43[4] = (long ******)0x0;
    ppppppplVar43[2] = (long ******)ppppppppplVar59;
    ppppppplVar43[3] = (long ******)FUN_7102f8c2e0;
    lVar65 = *(long *)(lVar65 + 8);
    pppppppplVar41 =
         (long ********)
         FUN_710392e290(0x10,0x18,(long ****)pppppppppplVar48,param_4,param_5,param_6,param_7,
                        param_8);
    if (pppppppplVar41 == (long ********)0x0) {
      if (DAT_7105332f00 != (long *)0x0) {
        local_f0 = (long **********)((ulong)local_f0 & 0xffffffff00000000);
        local_b0 = (long **********)&SUB_00000018;
        pppppppppplVar48 = (long **********)&local_b0;
        uVar66 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_f0);
        if (((uVar66 & 1) != 0) &&
           (pppppppplVar41 =
                 (long ********)
                 FUN_710392e290(0x10,0x18,(long ****)pppppppppplVar48,param_4,param_5,param_6,
                                param_7,param_8), pppppppplVar41 != (long ********)0x0))
        goto LAB_7102f87818;
      }
      pppppppplVar41 = (long ********)0x0;
    }
LAB_7102f87818:
    pppppppplVar41[2] = ppppppplVar43;
    *(short *)(ppppppplVar43 + 1) = *(short *)(ppppppplVar43 + 1) + 1;
    ppppppplVar53 = *(long ********)(lVar65 + 0x58);
    *pppppppplVar41 = (long *******)(lVar65 + 0x50);
    pppppppplVar41[1] = ppppppplVar53;
    *(long *********)(lVar65 + 0x58) = pppppppplVar41;
    *ppppppplVar53 = (long ******)pppppppplVar41;
    *(long *)(lVar65 + 0x48) = *(long *)(lVar65 + 0x48) + 1;
    ppppppppplVar59[1] = pppppppplVar41;
    sVar9 = *(short *)(ppppppplVar43 + 1);
    *(short *)(ppppppplVar43 + 1) = sVar9 + -1;
    if ((short)(sVar9 + -1) < 1) {
      (*(code *)(*ppppppplVar43)[1])(ppppppplVar43);
    }
    lVar65 = *lib::Singleton<app::FighterManager>::instance_;
    ppppppplVar43 =
         (long *******)
         FUN_710392e290(0x10,0x28,(long ****)pppppppppplVar48,param_4,param_5,param_6,param_7,
                        param_8);
    if (ppppppplVar43 == (long *******)0x0) {
      if (DAT_7105332f00 != (long *)0x0) {
        local_f0 = (long **********)((ulong)local_f0 & 0xffffffff00000000);
        local_b0 = (long **********)&DAT_00000028;
        pppppppppplVar48 = (long **********)&local_b0;
        uVar66 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_f0);
        if (((uVar66 & 1) != 0) &&
           (ppppppplVar43 =
                 (long *******)
                 FUN_710392e290(0x10,0x28,(long ****)pppppppppplVar48,param_4,param_5,param_6,
                                param_7,param_8), ppppppplVar43 != (long *******)0x0))
        goto LAB_7102f878d4;
      }
      ppppppplVar43 = (long *******)0x0;
    }
LAB_7102f878d4:
    *(undefined4 *)(ppppppplVar43 + 1) = 1;
    *ppppppplVar43 = (long ******)&DAT_710515b1f0;
    ppppppplVar43[4] = (long ******)0x0;
    ppppppplVar43[2] = (long ******)ppppppppplVar59;
    ppppppplVar43[3] = (long ******)FUN_7102f8c2f0;
    lVar65 = *(long *)(lVar65 + 8);
    pppppppplVar41 =
         (long ********)
         FUN_710392e290(0x10,0x18,(long ****)pppppppppplVar48,param_4,param_5,param_6,param_7,
                        param_8);
    uVar46 = extraout_x1_01;
    if (pppppppplVar41 == (long ********)0x0) {
      if (DAT_7105332f00 != (long *)0x0) {
        local_f0 = (long **********)((ulong)local_f0 & 0xffffffff00000000);
        local_b0 = (long **********)&SUB_00000018;
        pppppppppplVar48 = (long **********)&local_b0;
        auVar74 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_f0);
        uVar46 = auVar74._8_8_;
        if (((auVar74._0_8_ & 1) != 0) &&
           (pppppppplVar41 =
                 (long ********)
                 FUN_710392e290(0x10,0x18,(long ****)pppppppppplVar48,param_4,param_5,param_6,
                                param_7,param_8), uVar46 = extraout_x1_02,
           pppppppplVar41 != (long ********)0x0)) goto LAB_7102f8794c;
      }
      pppppppplVar41 = (long ********)0x0;
    }
LAB_7102f8794c:
    pppppppplVar41[2] = ppppppplVar43;
    *(short *)(ppppppplVar43 + 1) = *(short *)(ppppppplVar43 + 1) + 1;
    ppppppplVar53 = *(long ********)(lVar65 + 0x70);
    *pppppppplVar41 = (long *******)(lVar65 + 0x68);
    pppppppplVar41[1] = ppppppplVar53;
    *(long *********)(lVar65 + 0x70) = pppppppplVar41;
    *ppppppplVar53 = (long ******)pppppppplVar41;
    *(long *)(lVar65 + 0x60) = *(long *)(lVar65 + 0x60) + 1;
    ppppppppplVar59[2] = pppppppplVar41;
    sVar9 = *(short *)(ppppppplVar43 + 1);
    *(short *)(ppppppplVar43 + 1) = sVar9 + -1;
    if ((short)(sVar9 + -1) < 1) {
      (*(code *)(*ppppppplVar43)[1])(ppppppplVar43);
      uVar46 = extraout_x1_03;
    }
    pppppppppplVar61 = *(long ***********)(param_1 + 0xceb0);
    if (pppppppppplVar61 < *(long ***********)(param_1 + 0xceb8)) {
      *pppppppppplVar61 = ppppppppplVar59;
      *local_1a8 = *local_1a8 + 8;
    }
    else {
      pppppppppplVar63 = (long **********)*plVar45;
      lVar65 = (long)pppppppppplVar61 - (long)pppppppppplVar63 >> 3;
      uVar66 = lVar65 + 1;
      if (uVar66 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
        std::__vector_base_common<true>::__throw_length_error();
      }
      lVar40 = (long)*(long ***********)(param_1 + 0xceb8) - (long)pppppppppplVar63;
      if ((ulong)(lVar40 >> 3) < 0xfffffffffffffff) {
        uVar57 = lVar40 >> 2;
        if (uVar66 <= uVar57) {
          uVar66 = uVar57;
        }
        local_98 = 0;
        local_90 = local_1b0;
        if (uVar66 != 0) {
          if (uVar66 >> 0x3d == 0) goto LAB_7102f87a24;
          goto LAB_7102f87ed8;
        }
        lVar40 = 0;
      }
      else {
        uVar66 = 0x1fffffffffffffff;
LAB_7102f87a24:
        local_90 = local_1b0;
        local_98 = 0;
        pppppppppplVar61 = (long **********)(uVar66 * 8);
        if (pppppppppplVar61 == (long **********)0x0) {
          pppppppppplVar61 = (long **********)0x1;
        }
        lVar40 = FUN_710392e290(0x10,pppppppppplVar61,(long ****)pppppppppplVar48,param_4,param_5,
                                param_6,param_7,param_8);
        uVar46 = extraout_x1_04;
        if (lVar40 == 0) {
          if (DAT_7105332f00 != (long *)0x0) {
            local_190 = local_190 & 0xffffffff00000000;
            pppppppppplVar48 = (long **********)&local_f0;
            local_f0 = pppppppppplVar61;
            auVar74 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_190);
            uVar46 = auVar74._8_8_;
            if (((auVar74._0_8_ & 1) != 0) &&
               (lVar40 = FUN_710392e290(0x10,pppppppppplVar61,(long ****)pppppppppplVar48,param_4,
                                        param_5,param_6,param_7,param_8), uVar46 = extraout_x1_05,
               lVar40 != 0)) goto LAB_7102f87a80;
          }
          lVar40 = 0;
        }
LAB_7102f87a80:
        pppppppppplVar63 = (long **********)*plVar45;
        pppppppppplVar61 = *(long ***********)(param_1 + 0xceb0);
      }
      local_a8 = (long **********)(lVar40 + lVar65 * 8);
      puVar52 = local_a8 + 1;
      *local_a8 = ppppppppplVar59;
      local_b0 = pppppppppplVar63;
      if (pppppppppplVar61 != pppppppppplVar63) {
        pbVar60 = (byte *)((long)pppppppppplVar61 + (-8 - (long)pppppppppplVar63));
        if (((uint)pbVar60 >> 3 & 1) == 0) {
          pppppppppplVar61 = pppppppppplVar61 + -1;
          ppppppppplVar59 = *pppppppppplVar61;
          *pppppppppplVar61 = (long *********)0x0;
          local_a8 = local_a8 + -1;
          *local_a8 = ppppppppplVar59;
        }
        if ((byte *)0x7 < pbVar60) {
          pbVar60 = (byte *)((long)pppppppppplVar61 + (-0x10 - (long)pppppppppplVar63));
          if (((uint)pbVar60 >> 4 & 1) == 0) {
            ppppppppplVar59 = pppppppppplVar61[-1];
            pppppppppplVar61[-1] = (long *********)0x0;
            local_a8[-1] = ppppppppplVar59;
            pppppppppplVar61 = pppppppppplVar61 + -2;
            ppppppppplVar59 = *pppppppppplVar61;
            *pppppppppplVar61 = (long *********)0x0;
            local_a8[-2] = ppppppppplVar59;
            local_a8 = local_a8 + -2;
          }
          if ((byte *)0xf < pbVar60) {
            do {
              ppppppppplVar59 = pppppppppplVar61[-1];
              pppppppppplVar61[-1] = (long *********)0x0;
              local_a8[-1] = ppppppppplVar59;
              ppppppppplVar59 = pppppppppplVar61[-2];
              pppppppppplVar61[-2] = (long *********)0x0;
              local_a8[-2] = ppppppppplVar59;
              ppppppppplVar59 = pppppppppplVar61[-3];
              pppppppppplVar61[-3] = (long *********)0x0;
              local_a8[-3] = ppppppppplVar59;
              pppppppppplVar61 = pppppppppplVar61 + -4;
              ppppppppplVar59 = *pppppppppplVar61;
              *pppppppppplVar61 = (long *********)0x0;
              local_a8[-4] = ppppppppplVar59;
              local_a8 = local_a8 + -4;
            } while (pppppppppplVar63 != pppppppppplVar61);
          }
        }
        pppppppppplVar63 = *(long ***********)(param_1 + 0xceb0);
        local_b0 = (long **********)*plVar45;
      }
      *plVar45 = (long)local_a8;
      *(undefined8 **)(param_1 + 0xceb0) = puVar52;
      local_98 = *(long *)(param_1 + 0xceb8);
      *(ulong *)(param_1 + 0xceb8) = lVar40 + uVar66 * 8;
      local_a8 = local_b0;
      local_a0 = pppppppppplVar63;
      FUN_7102f8c240((ulong *)&local_b0,uVar46,pppppppppplVar48,param_4,param_5,param_6,param_7,
                     param_8);
    }
    iVar68 = iVar68 + 1;
  } while (iVar68 != 8);
  ppppbVar49 = (byte ****)0xbf800000;
  *(undefined4 *)(param_1 + 0xcf18) = 0xbf800000;
  lVar65 = *(long *)(param_1 + 0xcec0);
  puVar55 = *(undefined4 **)(param_1 + 0xcec8);
  uVar66 = (long)puVar55 - lVar65 >> 3;
  if (uVar66 < 8) {
    lVar40 = -uVar66;
    uVar57 = lVar40 + 8;
    if ((ulong)(*(long *)(param_1 + 0xced0) - (long)puVar55 >> 3) < uVar57) {
      lVar65 = *(long *)(param_1 + 0xced0) - lVar65;
      if ((ulong)(lVar65 >> 3) < 0xfffffffffffffff) {
        uVar54 = lVar65 >> 2;
        if (uVar54 < 9) {
          uVar54 = 8;
        }
        if (uVar54 != 0) {
          if (uVar54 >> 0x3d != 0) goto LAB_7102f87ed8;
          goto LAB_7102f87c9c;
        }
LAB_7102f87cf4:
        lVar65 = 0;
      }
      else {
        uVar54 = 0x1fffffffffffffff;
LAB_7102f87c9c:
        pppppppppplVar61 = (long **********)(uVar54 * 8);
        if (pppppppppplVar61 == (long **********)0x0) {
          pppppppppplVar61 = (long **********)0x1;
        }
        lVar65 = FUN_710392e290(0x10,pppppppppplVar61,(long ****)pppppppppplVar48,
                                (byte ****)0xbf800000,param_5,param_6,param_7,param_8);
        if (lVar65 == 0) {
          if (DAT_7105332f00 != (long *)0x0) {
            local_f0 = (long **********)((ulong)local_f0 & 0xffffffff00000000);
            pppppppppplVar48 = (long **********)&local_b0;
            local_b0 = pppppppppplVar61;
            uVar44 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_f0);
            if (((uVar44 & 1) != 0) &&
               (lVar65 = FUN_710392e290(0x10,pppppppppplVar61,(long ****)pppppppppplVar48,ppppbVar49
                                        ,param_5,param_6,param_7,param_8), lVar65 != 0))
            goto LAB_7102f87cf8;
          }
          goto LAB_7102f87cf4;
        }
      }
LAB_7102f87cf8:
      puVar3 = (undefined4 *)(lVar65 + uVar66 * 8);
      uVar44 = uVar57 & 3;
      puVar55 = puVar3;
      if (uVar44 != 0) {
        lVar38 = -uVar44;
        do {
          *puVar55 = 0xffffffff;
          lVar38 = lVar38 + 1;
          *(undefined1 *)(puVar55 + 1) = 0;
          puVar55 = puVar55 + 2;
        } while (lVar38 != 0);
        uVar57 = (8 - uVar66) - uVar44;
        puVar55 = (undefined4 *)(lVar65 + (uVar66 + uVar44) * 8);
      }
      if (2 < lVar40 + 7U) {
        do {
          *puVar55 = 0xffffffff;
          *(undefined1 *)(puVar55 + 1) = 0;
          uVar57 = uVar57 - 4;
          puVar55[2] = 0xffffffff;
          *(undefined1 *)(puVar55 + 3) = 0;
          puVar55[4] = 0xffffffff;
          *(undefined1 *)(puVar55 + 5) = 0;
          puVar55[6] = 0xffffffff;
          *(undefined1 *)(puVar55 + 7) = 0;
          puVar55 = puVar55 + 8;
        } while (uVar57 != 0);
      }
      pvVar6 = *(void **)(param_1 + 0xcec0);
      pppppppppplVar48 = (long **********)(*(long *)(param_1 + 0xcec8) - (long)pvVar6);
      pvVar64 = (void *)((long)puVar3 - (long)pppppppppplVar48);
      if (0 < (long)pppppppppplVar48) {
        memcpy(pvVar64,pvVar6,(size_t)pppppppppplVar48);
      }
      *(void **)(param_1 + 0xcec0) = pvVar64;
      *(long *)(param_1 + 0xcec8) = lVar65 + 0x40;
      *(ulong *)(param_1 + 0xced0) = lVar65 + uVar54 * 8;
      if (pvVar6 != (void *)0x0) {
        FUN_710392eb40((ulong)pvVar6);
      }
    }
    else {
      uVar66 = uVar57;
      if ((uVar57 & 1) != 0) {
        *puVar55 = 0xffffffff;
        *(undefined1 *)(puVar55 + 1) = 0;
        puVar55 = (undefined4 *)(*(long *)(param_1 + 0xcec8) + 8);
        uVar66 = lVar40 + 7;
        *(undefined4 **)(param_1 + 0xcec8) = puVar55;
      }
      if (uVar57 != 1) {
        do {
          *puVar55 = 0xffffffff;
          *(undefined1 *)(puVar55 + 1) = 0;
          lVar65 = *(long *)(param_1 + 0xcec8);
          *(long *)(param_1 + 0xcec8) = lVar65 + 8;
          *(undefined4 *)(lVar65 + 8) = 0xffffffff;
          *(undefined1 *)(lVar65 + 0xc) = 0;
          puVar55 = (undefined4 *)(*(long *)(param_1 + 0xcec8) + 8);
          uVar66 = uVar66 - 2;
          *(undefined4 **)(param_1 + 0xcec8) = puVar55;
        } while (uVar66 != 0);
      }
    }
  }
  else if ((long)puVar55 - lVar65 != 0x40) {
    *(long *)(param_1 + 0xcec8) = lVar65 + 0x40;
  }
  lVar40 = *(long *)(param_1 + 0xced8);
  uVar66 = *(long *)(param_1 + 0x780) - *(long *)(param_1 + 0x778);
  lVar65 = *(long *)(param_1 + 0xcee0);
  uVar57 = lVar65 - lVar40 >> 2;
  if (uVar66 < uVar57 || uVar66 - uVar57 == 0) {
    if (uVar66 < uVar57) {
      lVar65 = lVar40 + uVar66 * 4;
      *(long *)(param_1 + 0xcee0) = lVar65;
    }
    if (lVar65 != lVar40) goto LAB_7102f87e08;
  }
  else {
    FUN_7102588b90((long *)(param_1 + 0xced8),uVar66 - uVar57,(long ****)pppppppppplVar48,
                   (byte ****)0xbf800000,param_5,param_6,param_7,param_8);
    lVar40 = *(long *)(param_1 + 0xced8);
    if (*(long *)(param_1 + 0xcee0) != lVar40) {
LAB_7102f87e08:
      uVar66 = 0;
      uVar57 = 1;
      do {
        if ((ulong)(*(long *)(param_1 + 0x780) - *(long *)(param_1 + 0x778)) <= uVar66) {
                    /* WARNING: Subroutine does not return */
          std::__vector_base_common<true>::__throw_out_of_range();
        }
        *(uint *)(lVar40 + uVar66 * 4) = (uint)*(byte *)(*(long *)(param_1 + 0x778) + uVar66);
        lVar40 = *(long *)(param_1 + 0xced8);
        bVar1 = uVar57 < (ulong)(*(long *)(param_1 + 0xcee0) - lVar40 >> 2);
        uVar66 = uVar57;
        uVar57 = (ulong)((int)uVar57 + 1);
      } while (bVar1);
    }
  }
  ppppbVar49 = (byte ****)0xbf800000;
  lVar65 = *(long *)(param_1 + 0xcef0);
  lVar40 = *(long *)(param_1 + 0x740);
  lVar38 = *(long *)(param_1 + 0x748) - lVar40 >> 3;
  uVar66 = lVar38 * 0x6db6db6db6db6db7;
  puVar52 = *(undefined8 **)(param_1 + 0xcef8);
  uVar57 = (long)puVar52 - lVar65 >> 8;
  if (uVar66 < uVar57 || uVar66 - uVar57 == 0) {
    if (uVar66 < uVar57) {
      *(long *)(param_1 + 0xcef8) = lVar65 + lVar38 * -0x4924924924924900;
    }
    if (*(long *)(param_1 + 0x748) == lVar40) {
      return;
    }
    goto LAB_7102f881b8;
  }
  if ((ulong)(*(long *)(param_1 + 0xcf00) - (long)puVar52 >> 8) < uVar66 - uVar57) {
    if (uVar66 >> 0x38 != 0) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    lVar65 = *(long *)(param_1 + 0xcf00) - lVar65;
    if ((ulong)(lVar65 >> 8) < 0x7fffffffffffff) {
      uVar54 = lVar65 >> 7;
      if (uVar66 <= uVar54) {
        uVar66 = uVar54;
      }
      if (uVar66 != 0) {
        if (uVar66 >> 0x38 != 0) {
LAB_7102f87ed8:
                    /* WARNING: Subroutine does not return */
          abort();
        }
        goto LAB_7102f87ff0;
      }
      lVar65 = 0;
    }
    else {
      uVar66 = 0xffffffffffffff;
LAB_7102f87ff0:
      pppppppppplVar61 = (long **********)(uVar66 * 0x100);
      if (pppppppppplVar61 == (long **********)0x0) {
        pppppppppplVar61 = (long **********)0x1;
      }
      lVar65 = FUN_710392e290(0x10,pppppppppplVar61,(long ****)pppppppppplVar48,
                              (byte ****)0xbf800000,param_5,param_6,param_7,param_8);
      if (lVar65 == 0) {
        if (DAT_7105332f00 != (long *)0x0) {
          local_f0 = (long **********)((ulong)local_f0 & 0xffffffff00000000);
          pppppppppplVar48 = (long **********)&local_b0;
          local_b0 = pppppppppplVar61;
          uVar54 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_f0);
          if (((uVar54 & 1) != 0) &&
             (lVar65 = FUN_710392e290(0x10,pppppppppplVar61,(long ****)pppppppppplVar48,ppppbVar49,
                                      param_5,param_6,param_7,param_8), lVar65 != 0))
          goto LAB_7102f88050;
        }
        lVar65 = 0;
      }
    }
LAB_7102f88050:
    uVar33 = uRam0000007107459008;
    uVar46 = _ConstantZero;
    puVar4 = (undefined8 *)(lVar65 + uVar57 * 0x100);
    lVar40 = uVar57 + lVar38 * -0x6db6db6db6db6db7;
    puVar52 = puVar4;
    do {
      puVar52[2] = 0;
      puVar52[3] = 0;
      lVar40 = lVar40 + 1;
      *puVar52 = 0;
      puVar52[1] = 0;
      *(undefined4 *)(puVar52 + 8) = 0x3f800000;
      puVar52[9] = 0x31ed91fca;
      *(undefined2 *)((long)puVar52 + 0x71) = 0;
      *(undefined1 *)((long)puVar52 + 0x54) = 0;
      *(undefined4 *)(puVar52 + 10) = 0;
      *(undefined1 *)((long)puVar52 + 0x73) = 0;
      *(undefined2 *)((long)puVar52 + 0x74) = 0;
      *(undefined2 *)(puVar52 + 0x10) = 0;
      *(undefined1 *)(puVar52 + 0xe) = 0;
      puVar52[0xb] = 0x15a2c502b3;
      *(undefined1 *)((long)puVar52 + 0x76) = 0xe;
      puVar52[0xf] = 0;
      puVar52[0x11] = 0x31ed91fca;
      *(undefined4 *)(puVar52 + 0x14) = 0;
      *(undefined1 *)((long)puVar52 + 0xa6) = 0;
      *(undefined2 *)((long)puVar52 + 0xa4) = 0;
      puVar52[0x15] = &DAT_3f8000003f800000;
      *(undefined4 *)(puVar52 + 0x16) = 0;
      *(undefined2 *)(puVar52 + 0x19) = 0;
      *(undefined2 *)((long)puVar52 + 0xcc) = 0;
      *(undefined4 *)(puVar52 + 0x1a) = 0xbf800000;
      *(undefined8 *)((long)puVar52 + 0xe4) = 0;
      *(undefined8 *)((long)puVar52 + 0xdc) = 0;
      *(undefined8 *)((long)puVar52 + 0xd4) = 0;
      *(undefined4 *)((long)puVar52 + 0xec) = 0xffffffff;
      *(undefined2 *)(puVar52 + 0x1e) = 3;
      *(undefined4 *)((long)puVar52 + 0xf4) = 0x3f800000;
      *(undefined2 *)(puVar52 + 0x1f) = 0;
      *(undefined1 *)((long)puVar52 + 0xfa) = 0;
      puVar52[6] = 0;
      puVar52[7] = &DAT_3f8000003f800000;
      puVar52[4] = 0;
      puVar52[5] = 0;
      puVar52[0xc] = 0;
      puVar52[0xd] = 0;
      puVar52[0x13] = uVar33;
      puVar52[0x12] = uVar46;
      puVar52[0x17] = 0x425cbfc4f;
      puVar52[0x18] = 0x7fb997a80;
      puVar52 = puVar52 + 0x20;
    } while (lVar40 != 0);
    pvVar6 = *(void **)(param_1 + 0xcef0);
    __n = *(long *)(param_1 + 0xcef8) - (long)pvVar6;
    pvVar64 = (void *)((long)puVar4 - __n);
    if (0 < (long)__n) {
      memcpy(pvVar64,pvVar6,__n);
    }
    *(ulong *)(param_1 + 0xcf00) = lVar65 + uVar66 * 0x100;
    *(void **)(param_1 + 0xcef0) = pvVar64;
    *(long *)(param_1 + 0xcef8) = lVar65 + lVar38 * -0x4924924924924900;
    if (pvVar6 != (void *)0x0) {
      FUN_710392eb40((ulong)pvVar6);
    }
  }
  else {
    lVar65 = uVar57 + lVar38 * -0x6db6db6db6db6db7;
    do {
      puVar52[2] = 0;
      puVar52[3] = 0;
      lVar65 = lVar65 + 1;
      *puVar52 = 0;
      puVar52[1] = 0;
      *(undefined4 *)(puVar52 + 8) = 0x3f800000;
      puVar52[9] = 0x31ed91fca;
      *(undefined2 *)((long)puVar52 + 0x71) = 0;
      *(undefined1 *)((long)puVar52 + 0x54) = 0;
      *(undefined4 *)(puVar52 + 10) = 0;
      *(undefined1 *)((long)puVar52 + 0x73) = 0;
      *(undefined2 *)((long)puVar52 + 0x74) = 0;
      *(undefined2 *)(puVar52 + 0x10) = 0;
      *(undefined1 *)(puVar52 + 0xe) = 0;
      puVar52[0xb] = 0x15a2c502b3;
      *(undefined1 *)((long)puVar52 + 0x76) = 0xe;
      puVar52[0xf] = 0;
      puVar52[0x11] = 0x31ed91fca;
      puVar52[6] = 0;
      puVar52[7] = &DAT_3f8000003f800000;
      puVar52[4] = 0;
      puVar52[5] = 0;
      puVar52[0xc] = 0;
      puVar52[0xd] = 0;
      uVar33 = uRam0000007107459008;
      uVar46 = _ConstantZero;
      *(undefined1 *)((long)puVar52 + 0xa6) = 0;
      *(undefined2 *)((long)puVar52 + 0xa4) = 0;
      *(undefined4 *)(puVar52 + 0x14) = 0;
      puVar52[0x15] = &DAT_3f8000003f800000;
      *(undefined4 *)(puVar52 + 0x16) = 0;
      *(undefined2 *)(puVar52 + 0x19) = 0;
      *(undefined2 *)((long)puVar52 + 0xcc) = 0;
      *(undefined4 *)(puVar52 + 0x1a) = 0xbf800000;
      *(undefined8 *)((long)puVar52 + 0xe4) = 0;
      *(undefined8 *)((long)puVar52 + 0xdc) = 0;
      *(undefined8 *)((long)puVar52 + 0xd4) = 0;
      *(undefined4 *)((long)puVar52 + 0xec) = 0xffffffff;
      *(undefined2 *)(puVar52 + 0x1e) = 3;
      *(undefined4 *)((long)puVar52 + 0xf4) = 0x3f800000;
      *(undefined2 *)(puVar52 + 0x1f) = 0;
      *(undefined1 *)((long)puVar52 + 0xfa) = 0;
      puVar52[0x17] = 0x425cbfc4f;
      puVar52[0x18] = 0x7fb997a80;
      puVar52[0x13] = uVar33;
      puVar52[0x12] = uVar46;
      puVar52 = (undefined8 *)(*(long *)(param_1 + 0xcef8) + 0x100);
      *(undefined8 **)(param_1 + 0xcef8) = puVar52;
    } while (lVar65 != 0);
  }
  lVar40 = *(long *)(param_1 + 0x740);
  if (*(long *)(param_1 + 0x748) == lVar40) {
    return;
  }
LAB_7102f881b8:
  uVar66 = 0;
  uVar34 = 1;
  while( true ) {
    uVar69 = _DAT_7107521004;
    uVar35 = _ConstantZero;
    if ((ulong)(*(long *)(param_1 + 0xcef8) - *(long *)(param_1 + 0xcef0) >> 8) <= uVar66) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_out_of_range();
    }
    puVar55 = (undefined4 *)(*(long *)(param_1 + 0xcef0) + uVar66 * 0x100);
    piVar56 = (int *)(lVar40 + uVar66 * 0x38);
    puVar55[2] = _DAT_7107521008;
    puVar55[3] = 0;
    *puVar55 = uVar35;
    puVar55[1] = uVar69;
    uVar70 = _DAT_7107521008;
    uVar69 = _DAT_7107521004;
    uVar35 = _ConstantZero;
    *(undefined1 **)(puVar55 + 8) = &DAT_3f8000003f800000;
    *(undefined8 *)(puVar55 + 10) = 0x169;
    *(undefined8 *)(puVar55 + 0xc) = 0;
    *(undefined1 **)(puVar55 + 0xe) = &DAT_3f8000003f800000;
    puVar55[0x10] = 0x3f800000;
    auVar72._4_12_ = SUB1612(ZEXT816(0),4);
    auVar72._0_4_ = uVar70;
    *(undefined8 *)(puVar55 + 0x12) = 0x31ed91fca;
    puVar55[0x14] = 0x3003f;
    *(long *)(puVar55 + 6) = auVar72._0_8_;
    puVar55[4] = uVar35;
    puVar55[5] = uVar69;
    *(undefined1 *)(puVar55 + 0x15) = 0x19;
    *(undefined8 *)(puVar55 + 0x16) = 0x15a2c502b3;
    *(undefined2 *)(puVar55 + 0x18) = 0x100;
    *(undefined4 *)((long)puVar55 + 0x62) = 0x10000;
    *(undefined1 *)((long)puVar55 + 0x66) = 0;
    *(undefined2 *)(puVar55 + 0x1d) = 0;
    *(undefined1 *)((long)puVar55 + 0x81) = 0;
    *(undefined1 *)((long)puVar55 + 0x76) = 0xe;
    *(undefined8 *)(puVar55 + 0x1b) = 0;
    *(undefined8 *)((long)puVar55 + 0x67) = 0;
    *(undefined8 *)(puVar55 + 0x1e) = 0;
    *(undefined8 *)(puVar55 + 0x22) = 0x31ed91fca;
    uVar33 = uRam0000007107459008;
    uVar46 = _ConstantZero;
    puVar55[0x28] = 0;
    *(undefined1 *)(puVar55 + 0x20) = 0;
    *(undefined8 *)(puVar55 + 0x2e) = 0x425cbfc4f;
    *(undefined8 *)(puVar55 + 0x30) = 0x7fb997a80;
    *(undefined2 *)(puVar55 + 0x29) = 0;
    *(undefined8 *)(puVar55 + 0x26) = uVar33;
    *(undefined8 *)(puVar55 + 0x24) = uVar46;
    *(undefined8 *)(puVar55 + 0x2b) = 0x3f800000;
    *(undefined2 *)(puVar55 + 0x32) = 0;
    *(undefined2 *)(puVar55 + 0x33) = 0;
    puVar55[0x34] = 0xbf800000;
    *(undefined8 *)(puVar55 + 0x39) = 0;
    *(undefined8 *)(puVar55 + 0x37) = 0;
    *(undefined8 *)(puVar55 + 0x35) = 0;
    puVar55[0x3b] = 0xffffffff;
    *(undefined2 *)(puVar55 + 0x3c) = 3;
    puVar55[0x3d] = 0x3f800000;
    *(undefined1 *)(puVar55 + 0x3e) = 0;
    *(undefined2 *)((long)puVar55 + 0xf9) = 0;
    iVar68 = *piVar56;
    puVar55[8] = (float)iVar68;
    puVar55[10] = piVar56[1];
    puVar55[0xb] = piVar56[2];
    puVar55[0xc] = piVar56[3];
    puVar55[0xd] = piVar56[4];
    puVar55[0x1e] = piVar56[5];
    puVar55[0xf] = piVar56[6];
    *(char *)((long)puVar55 + 0x6d) = (char)piVar56[7];
    *(undefined8 *)(puVar55 + 0x16) = *(undefined8 *)(piVar56 + 8);
    *(char *)((long)puVar55 + 0x61) = (char)piVar56[0xb];
    *(char *)(puVar55 + 0x18) = (char)piVar56[10];
    *(undefined1 *)(puVar55 + 0x19) = *(undefined1 *)(param_1 + 0x770);
    *(short *)(puVar55 + 0x1d) = (short)piVar56[0xd];
    *(char *)((long)puVar55 + 0x6a) = (char)piVar56[0xc];
    lVar65 = *(long *)(param_1 + 0x778);
    uVar66 = *(long *)(param_1 + 0x780) - lVar65;
    if (uVar66 < 9) break;
    if (((uVar34 - 1 == (uint)*(byte *)(lVar65 + 8)) &&
        ((((lVar40 = *(long *)(param_1 + 0xce90), lVar40 != 0 && (*(int *)(lVar40 + 0xe0) == 9)) ||
          ((lVar40 = *(long *)(param_1 + 0xce98), lVar40 != 0 && (*(int *)(lVar40 + 0xe0) == 9))))
         || ((lVar40 = *(long *)(param_1 + 0xcea0), lVar40 != 0 && (*(int *)(lVar40 + 0xe0) == 9))))
        )) && (*(long *)(lVar40 + 0x38) != 0)) {
      plVar45 = *(long **)(*(long *)(lVar40 + 0x38) + 0xa0);
      (**(code **)(*plVar45 + 0x68))((float)iVar68,auVar72,0,plVar45,0,0,puVar55);
      lVar65 = *(long *)(param_1 + 0x778);
      uVar66 = *(long *)(param_1 + 0x780) - lVar65;
    }
    if (uVar66 < 10) break;
    if (((uVar34 - 1 == (uint)*(byte *)(lVar65 + 9)) &&
        ((((lVar65 = *(long *)(param_1 + 0xce90), lVar65 != 0 && (*(int *)(lVar65 + 0xe0) == 10)) ||
          ((lVar65 = *(long *)(param_1 + 0xce98), lVar65 != 0 && (*(int *)(lVar65 + 0xe0) == 10))))
         || ((lVar65 = *(long *)(param_1 + 0xcea0), lVar65 != 0 && (*(int *)(lVar65 + 0xe0) == 10)))
         ))) && (*(long *)(lVar65 + 0x38) != 0)) {
      plVar45 = *(long **)(*(long *)(lVar65 + 0x38) + 0xa0);
      (**(code **)(*plVar45 + 0x68))(plVar45,0,0,puVar55);
    }
    lVar40 = *(long *)(param_1 + 0x740);
    uVar57 = (*(long *)(param_1 + 0x748) - lVar40 >> 3) * 0x6db6db6db6db6db7;
    uVar66 = (ulong)uVar34;
    uVar34 = uVar34 + 1;
    if (uVar57 < uVar66 || uVar57 - uVar66 == 0) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  std::__vector_base_common<true>::__throw_out_of_range();
  while( true ) {
    pppppppppplVar62 = (long **********)(lVar65 - lVar40 >> 3);
    pppppppppplVar61 = (long **********)(ulong)((int)pppppppppplVar67 + 1);
    pppppppppplVar63 = pppppppppplVar67;
    if (pppppppppplVar62 <= pppppppppplVar67) break;
LAB_7102f86508:
    pppppppppplVar67 = pppppppppplVar61;
    sVar9 = *(short *)(lVar40 + (long)pppppppppplVar63 * 8 + 4);
    if (sVar9 != 0) {
      if (pppppppppplVar62 <= pppppppppplVar48) goto LAB_7102f885b0;
      if (sVar9 == *(short *)(lVar40 + (long)pppppppppplVar48 * 8 + 4)) {
        if (local_a8 <= pppppppppplVar63) goto LAB_7102f885a8;
        uVar66 = (ulong)pppppppppplVar63 >> 3 & 0x1ffffffffffffff8;
        *(ulong *)((long)local_b0 + uVar66) =
             *(ulong *)((long)local_b0 + uVar66) &
             (1L << ((ulong)pppppppppplVar63 & 0x3f) ^ 0xffffffffffffffffU);
        lVar65 = *(long *)(param_1 + 0x798);
        lVar40 = *(long *)(param_1 + 0x790);
      }
    }
  }
LAB_7102f86574:
  if ((uVar37 == 1) && (lVar65 != lVar40)) {
    pppppppppplVar61 = (long **********)0x1;
    pppppppppplVar63 = (long **********)0x0;
    do {
      pppppppppplVar62 = pppppppppplVar61;
      if (*(short *)(lVar40 + (long)pppppppppplVar63 * 8 + 2) != 0) {
        if (local_a8 <= pppppppppplVar63) goto LAB_7102f885a8;
        uVar66 = (ulong)pppppppppplVar63 >> 3 & 0x1ffffffffffffff8;
        *(ulong *)((long)local_b0 + uVar66) =
             *(ulong *)((long)local_b0 + uVar66) &
             (1L << ((ulong)pppppppppplVar63 & 0x3f) ^ 0xffffffffffffffffU);
        lVar65 = *(long *)(param_1 + 0x798);
        lVar40 = *(long *)(param_1 + 0x790);
      }
      pppppppppplVar61 = (long **********)(ulong)((int)pppppppppplVar62 + 1);
      pppppppppplVar63 = pppppppppplVar62;
    } while (pppppppppplVar62 < (long **********)(lVar65 - lVar40 >> 3));
  }
  uVar37 = FUN_7102f8c380(param_1,uVar37,(long ****)pppppppppplVar48,param_4,param_5,param_6,param_7
                          ,param_8);
LAB_7102f865ec:
  uVar37 = uVar37 + 1;
  if (2 < uVar37) {
    if (local_b0 != (long **********)0x0) {
      FUN_710392eb40((ulong)local_b0);
    }
    goto LAB_7102f86604;
  }
  lVar40 = *(long *)(param_1 + 0x790);
  lVar65 = *(long *)(param_1 + 0x798) - lVar40;
  if (lVar65 == 0) goto LAB_7102f863cc;
LAB_7102f863d4:
  uVar36 = 0;
  pppppppppplVar61 = (long **********)0x1;
  pppppppppplVar63 = (long **********)0x0;
  do {
    pppppppppplVar62 = pppppppppplVar61;
    if (local_a8 <= pppppppppplVar63) {
LAB_7102f885a8:
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_out_of_range();
    }
    if (((*(ulong *)((long)local_b0 + ((ulong)pppppppppplVar63 >> 3 & 0x1ffffffffffffff8)) &
         1L << ((ulong)pppppppppplVar63 & 0x3f)) != 0) &&
       ((puVar2 = (ushort *)(lVar40 + (long)pppppppppplVar63 * 8), (int)pppppppppplVar62 == 1 ||
        (uVar37 == (int)(short)puVar2[3])))) {
      uVar36 = uVar36 + *puVar2;
    }
    pppppppppplVar61 = (long **********)(ulong)((int)pppppppppplVar62 + 1);
    pppppppppplVar63 = pppppppppplVar62;
  } while (pppppppppplVar62 < (long **********)(lVar65 >> 3));
  goto LAB_7102f86438;
code_r0x007102f867bc:
  plVar51 = *(long **)(param_1 + 0xce90);
  if (plVar51 == (long *)0x0) goto LAB_7102f867c4;
LAB_7102f867e4:
  local_190 = DAT_710532e970;
  uStack_188 = DAT_710532e978;
  uVar37 = *(uint *)(plVar51 + 0x1c);
  if ((ulong)(*(long *)(param_1 + 0x798) - *(long *)(param_1 + 0x790) >> 3) <= (ulong)uVar37)
  goto LAB_7102f885e0;
  if (*(short *)(*(long *)(param_1 + 0x790) + (ulong)uVar37 * 8 + 2) != 0) {
    local_190._0_4_ = (float)DAT_710532e970;
    local_190._4_4_ = (float)(DAT_710532e970 >> 0x20);
    uStack_188._0_4_ = (float)DAT_710532e978;
    uStack_188._4_4_ = (float)((ulong)DAT_710532e978 >> 0x20);
    uStack_188 = CONCAT44(uStack_188._4_4_ + DAT_710532e9a0._12_4_,
                          (float)uStack_188 + DAT_710532e9a0._8_4_);
    local_190 = CONCAT44(local_190._4_4_ + DAT_710532e9a0._4_4_,
                         (float)local_190 + (float)DAT_710532e9a0);
  }
  if (uVar37 == 9) {
    auVar22._4_4_ = _DAT_7107521004;
    auVar22._0_4_ = _ConstantZero;
    auVar22._8_4_ = _DAT_7107521008;
    auVar21._12_4_ = uRam000000710752100c;
    auVar21._0_12_ = auVar22;
    *(undefined1 *)(param_1 + 0xcd9c) = 1;
    lVar65 = 0;
    pppppppppplStack_e8 = (long **********)0x0;
    local_f0 = (long **********)&DAT_3f800000;
    auVar71._12_4_ = 0x3f800000;
    auVar71._0_12_ = auVar22;
    auVar74 = NEON_ext(auVar71,auVar21,0xc,1);
    lStack_d8 = 0;
    local_e0 = (long **********)&DAT_3f80000000000000;
    auVar18._12_4_ = 0x3f800000;
    auVar18._0_12_ = auVar22;
    auVar71 = NEON_ext(auVar74,auVar18,4,1);
    auVar74 = NEON_ext(auVar74,auVar74,8,1);
    lVar40 = param_1 + 0xa820;
    auVar74 = NEON_ext(auVar71,auVar74,0xc,1);
    uStack_c8 = 0x3f800000;
    local_d0 = 0;
    local_b8 = auVar74._8_8_;
    local_c0 = auVar74._0_8_;
    do {
      uVar66 = 0;
      do {
        plVar39 = *(long **)(lVar40 + uVar66 * 8);
        if (plVar39 == (long *)0x0) break;
        plVar39 = (long *)(**(code **)(*plVar39 + 0x38))();
        lVar38 = *plVar39;
        if (lVar38 != 0) {
          (**(code **)(**(long **)(lVar38 + 0x90) + 0x148))(*(long **)(lVar38 + 0x90),&local_f0);
          lVar38 = *(long *)(lVar38 + 0xd8);
          if (lVar38 != 0) {
            local_98 = lStack_d8;
            local_a0 = local_e0;
            local_a8 = pppppppppplStack_e8;
            local_b0 = local_f0;
            local_78 = local_b8;
            local_80 = local_c0;
            local_88 = uStack_c8;
            local_90 = local_d0;
            if (*(char *)(*(long *)(lVar38 + 8) + 0xa8) != '\0') {
              plVar39 = *(long **)(*(long *)(lVar38 + 8) + 0x48);
              (**(code **)(*plVar39 + 0x20))(plVar39,&local_b0);
            }
            *(undefined1 *)(lVar38 + 0x20) = 1;
          }
        }
        uVar66 = uVar66 + 1;
      } while (uVar66 < 0x20);
      lVar65 = lVar65 + 1;
      lVar40 = lVar40 + 0x108;
    } while (lVar65 != 0x10);
    lVar65 = *(long *)(param_1 + 0xc980);
    if (lVar65 != 0) {
      (**(code **)(**(long **)(lVar65 + 0x90) + 0x148))(*(long **)(lVar65 + 0x90),&local_f0);
      lVar65 = *(long *)(lVar65 + 0xd8);
      if (lVar65 != 0) {
        local_98 = lStack_d8;
        local_a0 = local_e0;
        local_a8 = pppppppppplStack_e8;
        local_b0 = local_f0;
        local_78 = local_b8;
        local_80 = local_c0;
        local_88 = uStack_c8;
        local_90 = local_d0;
        if (*(char *)(*(long *)(lVar65 + 8) + 0xa8) != '\0') {
          plVar39 = *(long **)(*(long *)(lVar65 + 8) + 0x48);
          (**(code **)(*plVar39 + 0x20))(plVar39,&local_b0);
        }
        *(undefined1 *)(lVar65 + 0x20) = 1;
      }
    }
    if (plVar51[7] != 0) {
      plVar39 = *(long **)(plVar51[7] + 0x130);
      param_5 = (long ****)(ulong)uVar34;
      pppppppppplVar48 = &local_120;
      param_6 = 1;
      param_4 = (byte ****)0x0;
      (**(code **)(*plVar39 + 0x100))(plVar39,0);
    }
    uVar37 = *(uint *)(plVar51 + 0x1c);
  }
  if (uVar37 == 10) {
    auVar24._4_4_ = _DAT_7107521004;
    auVar24._0_4_ = _ConstantZero;
    auVar24._8_4_ = _DAT_7107521008;
    auVar23._12_4_ = uRam000000710752100c;
    auVar23._0_12_ = auVar24;
    *(undefined1 *)(param_1 + 0xcd9d) = 1;
    *(undefined4 *)(param_1 + 0xcda0) = 0;
    lVar65 = 0;
    pppppppppplStack_e8 = (long **********)0x0;
    local_f0 = (long **********)&DAT_3f800000;
    auVar19._12_4_ = 0x3f800000;
    auVar19._0_12_ = auVar24;
    auVar74 = NEON_ext(auVar19,auVar23,0xc,1);
    lStack_d8 = 0;
    local_e0 = (long **********)&DAT_3f80000000000000;
    auVar20._12_4_ = 0x3f800000;
    auVar20._0_12_ = auVar24;
    auVar71 = NEON_ext(auVar74,auVar20,4,1);
    auVar74 = NEON_ext(auVar74,auVar74,8,1);
    lVar40 = param_1 + 0xb8a0;
    auVar74 = NEON_ext(auVar71,auVar74,0xc,1);
    uStack_c8 = 0x3f800000;
    local_d0 = 0;
    local_b8 = auVar74._8_8_;
    local_c0 = auVar74._0_8_;
    do {
      uVar66 = 0;
      do {
        plVar39 = *(long **)(lVar40 + uVar66 * 8);
        if (plVar39 == (long *)0x0) break;
        plVar39 = (long *)(**(code **)(*plVar39 + 0x38))();
        lVar38 = *plVar39;
        if (lVar38 != 0) {
          (**(code **)(**(long **)(lVar38 + 0x90) + 0x148))(*(long **)(lVar38 + 0x90),&local_f0);
          lVar38 = *(long *)(lVar38 + 0xd8);
          if (lVar38 != 0) {
            local_98 = lStack_d8;
            local_a0 = local_e0;
            local_a8 = pppppppppplStack_e8;
            local_b0 = local_f0;
            local_78 = local_b8;
            local_80 = local_c0;
            local_88 = uStack_c8;
            local_90 = local_d0;
            if (*(char *)(*(long *)(lVar38 + 8) + 0xa8) != '\0') {
              plVar39 = *(long **)(*(long *)(lVar38 + 8) + 0x48);
              (**(code **)(*plVar39 + 0x20))(plVar39,&local_b0);
            }
            *(undefined1 *)(lVar38 + 0x20) = 1;
          }
        }
        uVar66 = uVar66 + 1;
      } while (uVar66 < 0x20);
      lVar65 = lVar65 + 1;
      lVar40 = lVar40 + 0x108;
    } while (lVar65 != 0x10);
    lVar65 = *(long *)(param_1 + 0xc988);
    if (lVar65 != 0) {
      (**(code **)(**(long **)(lVar65 + 0x90) + 0x148))(*(long **)(lVar65 + 0x90),&local_f0);
      lVar65 = *(long *)(lVar65 + 0xd8);
      if (lVar65 != 0) {
        local_98 = lStack_d8;
        local_a0 = local_e0;
        local_a8 = pppppppppplStack_e8;
        local_b0 = local_f0;
        local_78 = local_b8;
        local_80 = local_c0;
        local_88 = uStack_c8;
        local_90 = local_d0;
        if (*(char *)(*(long *)(lVar65 + 8) + 0xa8) != '\0') {
          plVar39 = *(long **)(*(long *)(lVar65 + 8) + 0x48);
          (**(code **)(*plVar39 + 0x20))(plVar39,&local_b0);
        }
        *(undefined1 *)(lVar65 + 0x20) = 1;
      }
    }
    if (plVar51[7] != 0) {
      plVar39 = *(long **)(plVar51[7] + 0x130);
      param_5 = (long ****)(ulong)uVar34;
      pppppppppplVar48 = &local_150;
      param_6 = 1;
      param_4 = (byte ****)0x0;
      (**(code **)(*plVar39 + 0x100))(plVar39,0);
    }
  }
  (**(code **)(*plVar51 + 0x98))(plVar51,&local_190);
  plVar51 = *(long **)(param_1 + 0xce98);
  if (plVar51 == (long *)0x0) goto LAB_7102f867cc;
LAB_7102f86c20:
  local_190 = DAT_710532e980;
  uStack_188 = DAT_710532e988;
  uVar37 = *(uint *)(plVar51 + 0x1c);
  if ((ulong)(*(long *)(param_1 + 0x798) - *(long *)(param_1 + 0x790) >> 3) <= (ulong)uVar37)
  goto LAB_7102f885e0;
  if (*(short *)(*(long *)(param_1 + 0x790) + (ulong)uVar37 * 8 + 2) != 0) {
    local_190._0_4_ = (float)DAT_710532e980;
    local_190._4_4_ = (float)(DAT_710532e980 >> 0x20);
    uStack_188._0_4_ = (float)DAT_710532e988;
    uStack_188._4_4_ = (float)((ulong)DAT_710532e988 >> 0x20);
    uStack_188 = CONCAT44(uStack_188._4_4_ + DAT_710532e9a0._12_4_,
                          (float)uStack_188 + DAT_710532e9a0._8_4_);
    local_190 = CONCAT44(local_190._4_4_ + DAT_710532e9a0._4_4_,
                         (float)local_190 + (float)DAT_710532e9a0);
  }
  if (uVar37 == 9) {
    auVar26._4_4_ = _DAT_7107521004;
    auVar26._0_4_ = _ConstantZero;
    auVar26._8_4_ = _DAT_7107521008;
    auVar25._12_4_ = uRam000000710752100c;
    auVar25._0_12_ = auVar26;
    *(undefined1 *)(param_1 + 0xcd9c) = 1;
    lVar65 = 0;
    pppppppppplStack_e8 = (long **********)0x0;
    local_f0 = (long **********)&DAT_3f800000;
    auVar14._12_4_ = 0x3f800000;
    auVar14._0_12_ = auVar26;
    auVar74 = NEON_ext(auVar14,auVar25,0xc,1);
    lStack_d8 = 0;
    local_e0 = (long **********)&DAT_3f80000000000000;
    auVar15._12_4_ = 0x3f800000;
    auVar15._0_12_ = auVar26;
    auVar71 = NEON_ext(auVar74,auVar15,4,1);
    auVar74 = NEON_ext(auVar74,auVar74,8,1);
    lVar40 = param_1 + 0xa820;
    auVar74 = NEON_ext(auVar71,auVar74,0xc,1);
    uStack_c8 = 0x3f800000;
    local_d0 = 0;
    local_b8 = auVar74._8_8_;
    local_c0 = auVar74._0_8_;
    do {
      uVar66 = 0;
      do {
        plVar39 = *(long **)(lVar40 + uVar66 * 8);
        if (plVar39 == (long *)0x0) break;
        plVar39 = (long *)(**(code **)(*plVar39 + 0x38))();
        lVar38 = *plVar39;
        if (lVar38 != 0) {
          (**(code **)(**(long **)(lVar38 + 0x90) + 0x148))(*(long **)(lVar38 + 0x90),&local_f0);
          lVar38 = *(long *)(lVar38 + 0xd8);
          if (lVar38 != 0) {
            local_98 = lStack_d8;
            local_a0 = local_e0;
            local_a8 = pppppppppplStack_e8;
            local_b0 = local_f0;
            local_78 = local_b8;
            local_80 = local_c0;
            local_88 = uStack_c8;
            local_90 = local_d0;
            if (*(char *)(*(long *)(lVar38 + 8) + 0xa8) != '\0') {
              plVar39 = *(long **)(*(long *)(lVar38 + 8) + 0x48);
              (**(code **)(*plVar39 + 0x20))(plVar39,&local_b0);
            }
            *(undefined1 *)(lVar38 + 0x20) = 1;
          }
        }
        uVar66 = uVar66 + 1;
      } while (uVar66 < 0x20);
      lVar65 = lVar65 + 1;
      lVar40 = lVar40 + 0x108;
    } while (lVar65 != 0x10);
    lVar65 = *(long *)(param_1 + 0xc980);
    if (lVar65 != 0) {
      (**(code **)(**(long **)(lVar65 + 0x90) + 0x148))(*(long **)(lVar65 + 0x90),&local_f0);
      lVar65 = *(long *)(lVar65 + 0xd8);
      if (lVar65 != 0) {
        local_98 = lStack_d8;
        local_a0 = local_e0;
        local_a8 = pppppppppplStack_e8;
        local_b0 = local_f0;
        local_78 = local_b8;
        local_80 = local_c0;
        local_88 = uStack_c8;
        local_90 = local_d0;
        if (*(char *)(*(long *)(lVar65 + 8) + 0xa8) != '\0') {
          plVar39 = *(long **)(*(long *)(lVar65 + 8) + 0x48);
          (**(code **)(*plVar39 + 0x20))(plVar39,&local_b0);
        }
        *(undefined1 *)(lVar65 + 0x20) = 1;
      }
    }
    if (plVar51[7] != 0) {
      plVar39 = *(long **)(plVar51[7] + 0x130);
      param_5 = (long ****)(ulong)uVar34;
      pppppppppplVar48 = &local_120;
      param_6 = 1;
      param_4 = (byte ****)0x0;
      (**(code **)(*plVar39 + 0x100))(plVar39,0);
    }
    uVar37 = *(uint *)(plVar51 + 0x1c);
  }
  if (uVar37 == 10) {
    auVar28._4_4_ = _DAT_7107521004;
    auVar28._0_4_ = _ConstantZero;
    auVar28._8_4_ = _DAT_7107521008;
    auVar27._12_4_ = uRam000000710752100c;
    auVar27._0_12_ = auVar28;
    *(undefined1 *)(param_1 + 0xcd9d) = 1;
    *(undefined4 *)(param_1 + 0xcda0) = 0;
    lVar65 = 0;
    pppppppppplStack_e8 = (long **********)0x0;
    local_f0 = (long **********)&DAT_3f800000;
    auVar16._12_4_ = 0x3f800000;
    auVar16._0_12_ = auVar28;
    auVar74 = NEON_ext(auVar16,auVar27,0xc,1);
    lStack_d8 = 0;
    local_e0 = (long **********)&DAT_3f80000000000000;
    auVar17._12_4_ = 0x3f800000;
    auVar17._0_12_ = auVar28;
    auVar71 = NEON_ext(auVar74,auVar17,4,1);
    auVar74 = NEON_ext(auVar74,auVar74,8,1);
    lVar40 = param_1 + 0xb8a0;
    auVar74 = NEON_ext(auVar71,auVar74,0xc,1);
    uStack_c8 = 0x3f800000;
    local_d0 = 0;
    local_b8 = auVar74._8_8_;
    local_c0 = auVar74._0_8_;
    do {
      uVar66 = 0;
      do {
        plVar39 = *(long **)(lVar40 + uVar66 * 8);
        if (plVar39 == (long *)0x0) break;
        plVar39 = (long *)(**(code **)(*plVar39 + 0x38))();
        lVar38 = *plVar39;
        if (lVar38 != 0) {
          (**(code **)(**(long **)(lVar38 + 0x90) + 0x148))(*(long **)(lVar38 + 0x90),&local_f0);
          lVar38 = *(long *)(lVar38 + 0xd8);
          if (lVar38 != 0) {
            local_98 = lStack_d8;
            local_a0 = local_e0;
            local_a8 = pppppppppplStack_e8;
            local_b0 = local_f0;
            local_78 = local_b8;
            local_80 = local_c0;
            local_88 = uStack_c8;
            local_90 = local_d0;
            if (*(char *)(*(long *)(lVar38 + 8) + 0xa8) != '\0') {
              plVar39 = *(long **)(*(long *)(lVar38 + 8) + 0x48);
              (**(code **)(*plVar39 + 0x20))(plVar39,&local_b0);
            }
            *(undefined1 *)(lVar38 + 0x20) = 1;
          }
        }
        uVar66 = uVar66 + 1;
      } while (uVar66 < 0x20);
      lVar65 = lVar65 + 1;
      lVar40 = lVar40 + 0x108;
    } while (lVar65 != 0x10);
    lVar65 = *(long *)(param_1 + 0xc988);
    if (lVar65 != 0) {
      (**(code **)(**(long **)(lVar65 + 0x90) + 0x148))(*(long **)(lVar65 + 0x90),&local_f0);
      lVar65 = *(long *)(lVar65 + 0xd8);
      if (lVar65 != 0) {
        local_98 = lStack_d8;
        local_a0 = local_e0;
        local_a8 = pppppppppplStack_e8;
        local_b0 = local_f0;
        local_78 = local_b8;
        local_80 = local_c0;
        local_88 = uStack_c8;
        local_90 = local_d0;
        if (*(char *)(*(long *)(lVar65 + 8) + 0xa8) != '\0') {
          plVar39 = *(long **)(*(long *)(lVar65 + 8) + 0x48);
          (**(code **)(*plVar39 + 0x20))(plVar39,&local_b0);
        }
        *(undefined1 *)(lVar65 + 0x20) = 1;
      }
    }
    if (plVar51[7] != 0) {
      plVar39 = *(long **)(plVar51[7] + 0x130);
      param_5 = (long ****)(ulong)uVar34;
      pppppppppplVar48 = &local_150;
      param_6 = 1;
      param_4 = (byte ****)0x0;
      (**(code **)(*plVar39 + 0x100))(plVar39,0);
    }
  }
  (**(code **)(*plVar51 + 0x98))(plVar51,&local_190);
  plVar51 = *(long **)(param_1 + 0xcea0);
  goto joined_r0x007102f867d0;
}

