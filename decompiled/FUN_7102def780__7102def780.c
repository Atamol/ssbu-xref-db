// addr:      7102def780
// offset:    0x2def780
// name:      FUN_7102def780
// mangled:   
// signature: undefined __cdecl FUN_7102def780(undefined1[16] param_1, long param_2, undefined8 param_3, long * * * * param_4, byte * * * * param_5, long * * * * param_6, undefined8 param_7, undefined8 param_8, undefined1 * param_9)


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7102def780(undefined1 param_1 [16],long param_2,undefined8 param_3,long ****param_4,
                   byte ****param_5,long ****param_6,undefined8 param_7,undefined8 param_8,
                   undefined1 *param_9)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  char cVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined8 uVar8;
  undefined8 uVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined2 uVar13;
  int iVar14;
  uint uVar15;
  uint uVar16;
  long *plVar17;
  void *extraout_x1;
  void *extraout_x1_00;
  void *extraout_x1_01;
  long extraout_x1_02;
  long extraout_x1_03;
  void *extraout_x1_04;
  void *extraout_x1_05;
  void *extraout_x1_06;
  void *pvVar18;
  undefined8 extraout_x1_07;
  undefined8 extraout_x1_08;
  undefined8 extraout_x1_09;
  undefined8 extraout_x1_10;
  undefined8 extraout_x1_11;
  undefined8 extraout_x1_12;
  undefined8 extraout_x1_13;
  undefined8 extraout_x1_14;
  undefined8 extraout_x1_15;
  undefined8 extraout_x1_16;
  undefined8 extraout_x1_17;
  undefined8 extraout_x1_18;
  undefined8 extraout_x1_19;
  undefined8 extraout_x1_20;
  undefined8 extraout_x1_21;
  undefined8 extraout_x1_22;
  undefined8 extraout_x1_23;
  undefined8 extraout_x1_24;
  undefined8 extraout_x1_25;
  undefined8 extraout_x1_26;
  undefined8 extraout_x1_27;
  undefined8 extraout_x1_28;
  undefined8 extraout_x1_29;
  undefined8 extraout_x1_30;
  undefined8 extraout_x1_31;
  undefined8 extraout_x1_32;
  undefined8 extraout_x1_33;
  undefined8 extraout_x1_34;
  undefined8 extraout_x1_35;
  undefined8 extraout_x1_36;
  undefined8 extraout_x1_37;
  undefined8 extraout_x1_38;
  undefined8 extraout_x1_39;
  undefined8 extraout_x1_40;
  undefined8 extraout_x1_41;
  undefined8 extraout_x1_42;
  long lVar19;
  uint *puVar20;
  undefined1 (*pauVar21) [12];
  long lVar22;
  int iVar23;
  ulong uVar24;
  ulong uVar25;
  float *pfVar26;
  ulong uVar27;
  uint *puVar28;
  char *pcVar29;
  long lVar30;
  float fVar31;
  undefined4 uVar32;
  float fVar33;
  float fVar34;
  undefined4 uVar35;
  undefined4 uVar36;
  undefined4 uVar37;
  float fVar38;
  float fVar40;
  float fVar41;
  undefined1 auVar39 [16];
  float fVar42;
  undefined1 uVar43;
  undefined1 uVar44;
  undefined1 uVar45;
  undefined1 uVar46;
  undefined1 uVar47;
  undefined1 uVar48;
  undefined1 uVar49;
  undefined1 uVar50;
  undefined1 uVar51;
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  float fVar56;
  undefined1 auVar57 [16];
  undefined1 local_c0 [8];
  undefined8 uStack_b8;
  undefined8 local_a8;
  
  FUN_71025de7b0(param_1._0_8_,param_2,param_3,(undefined **)param_4,param_5,param_6,param_7,param_8
                 ,param_9);
  pvVar18 = extraout_x1;
  if (*(char *)(param_2 + 0x9b0) == '\0') {
    uStack_b8 = _DAT_7107521008;
    local_c0 = (undefined1  [8])_ConstantZero;
    lVar30 = **(long **)(param_2 + 0x338);
    if (*(long *)(lVar30 + 8) != 0) {
      param_4 = (long ****)0x1;
      local_a8 = 0;
      uVar15 = FUN_7102405040(*(long *)(lVar30 + 8),&local_a8,1,param_5,param_6,param_7,param_8,
                              param_9);
      pvVar18 = extraout_x1_00;
      if (uVar15 != 0xffffffff) {
        param_4 = (long ****)(ulong)uVar15;
        if (uVar15 < 0x19) {
          plVar17 = *(long **)(*(long *)(lVar30 + 8) + (long)(int)uVar15 * 0x50 + 0x68);
          if (((*plVar17 != 0) && ((int)plVar17[1] != -1)) &&
             ((int)plVar17[1] == *(int *)(*plVar17 + 0x20))) {
            FUN_7103736cf0(plVar17,(undefined1 (*) [12])local_c0);
          }
        }
        (**(code **)(**(long **)(lVar30 + 8) + 0x58))(*(long **)(lVar30 + 8),0);
        pvVar18 = extraout_x1_01;
      }
    }
    *(undefined1 *)(param_2 + 0x9b0) = 1;
  }
  uVar32 = *(undefined4 *)(*(long *)(param_2 + 0x308) + 0x11c);
  uVar35 = *(undefined4 *)(*(long *)(param_2 + 0x308) + 0x124);
  *(undefined8 *)(param_2 + 0xc88) = 0;
  *(ulong *)(param_2 + 0xc80) = CONCAT44(uVar35,uVar32);
  for (plVar17 = *(long **)(*(long *)(param_2 + 0x310) + 0xd0);
      plVar17 != *(long **)(*(long *)(param_2 + 0x310) + 0xd8); plVar17 = plVar17 + 2) {
    if ((*(uint *)(plVar17 + 1) < 2) && (lVar30 = *plVar17, *(long *)(lVar30 + 0x68) == 0xe5a946bf7)
       ) {
      if (lVar30 != 0) {
        if (*(long *)(lVar30 + 0xd8) == 0) {
          uVar15 = 0xffffffff;
          lVar19 = *(long *)(lVar30 + 0xd8);
          if (lVar19 != 0) goto LAB_7102defa0c;
LAB_7102defa54:
          lVar19 = (**(code **)(**(long **)(lVar30 + 0x90) + 0x158))();
        }
        else {
          plVar17 = *(long **)(*(long *)(*(long *)(lVar30 + 0xd8) + 8) + 8);
          uVar15 = (**(code **)(*plVar17 + 0x18))(plVar17,"AshibaLeft_Loc");
          lVar19 = *(long *)(lVar30 + 0xd8);
          if (lVar19 == 0) goto LAB_7102defa54;
LAB_7102defa0c:
          uVar16 = (**(code **)(**(long **)(*(long *)(lVar19 + 8) + 8) + 0x10))();
          if (uVar16 <= uVar15) goto LAB_7102defa54;
          plVar17 = *(long **)(*(long *)(*(long *)(lVar30 + 0xd8) + 8) + 0x48);
          (**(code **)(*plVar17 + 0x38))(plVar17,0);
          lVar19 = extraout_x1_02 + (ulong)uVar15 * 0x40;
        }
        pauVar21 = (undefined1 (*) [12])(lVar19 + 0x30);
        uVar32 = (undefined4)((ulong)*(undefined8 *)(lVar19 + 0x38) >> 0x20);
        uVar8 = *(undefined8 *)*pauVar21;
        auVar39._12_4_ = uVar32;
        auVar39._0_12_ = *pauVar21;
        auVar54._12_4_ = uVar32;
        auVar54._0_12_ = *pauVar21;
        auVar39 = NEON_ext(auVar39,auVar54,8,1);
        *(ulong *)(param_2 + 0xc48) = (ulong)auVar39._0_4_;
        *(undefined8 *)(param_2 + 0xc40) = uVar8;
        if (*(long *)(lVar30 + 0xd8) == 0) {
          uVar15 = 0xffffffff;
          lVar19 = *(long *)(lVar30 + 0xd8);
          if (lVar19 != 0) goto LAB_7102defac0;
LAB_7102defb08:
          auVar57 = (**(code **)(**(long **)(lVar30 + 0x90) + 0x158))();
        }
        else {
          plVar17 = *(long **)(*(long *)(*(long *)(lVar30 + 0xd8) + 8) + 8);
          uVar15 = (**(code **)(*plVar17 + 0x18))(plVar17,"StgPlanktonAshibaLeft");
          lVar19 = *(long *)(lVar30 + 0xd8);
          if (lVar19 == 0) goto LAB_7102defb08;
LAB_7102defac0:
          uVar16 = (**(code **)(**(long **)(*(long *)(lVar19 + 8) + 8) + 0x10))();
          if (uVar16 <= uVar15) goto LAB_7102defb08;
          plVar17 = *(long **)(*(long *)(*(long *)(lVar30 + 0xd8) + 8) + 0x48);
          (**(code **)(*plVar17 + 0x38))(plVar17,0);
          auVar57._8_8_ = extraout_x1_03;
          auVar57._0_8_ = extraout_x1_03 + (ulong)uVar15 * 0x40;
        }
        pvVar18 = auVar57._8_8_;
        uVar8 = *(undefined8 *)(auVar57._0_8_ + 0x38);
        uVar36 = (undefined4)uVar8;
        uVar37 = (undefined4)((ulong)uVar8 >> 0x20);
        uVar8 = *(undefined8 *)(auVar57._0_8_ + 0x30);
        uVar32 = (undefined4)uVar8;
        uVar35 = (undefined4)((ulong)uVar8 >> 0x20);
        goto LAB_7102def8d0;
      }
      break;
    }
  }
  uVar36 = 0;
  uVar37 = 0x3f800000;
  uVar32 = 0;
  uVar35 = 0;
  *(undefined8 *)(param_2 + 0xc48) = 0;
  *(undefined8 *)(param_2 + 0xc40) = 0;
LAB_7102def8d0:
  auVar6._4_4_ = uVar35;
  auVar6._0_4_ = uVar32;
  auVar6._8_4_ = uVar36;
  auVar6._12_4_ = uVar37;
  auVar7._4_4_ = uVar35;
  auVar7._0_4_ = uVar32;
  auVar7._8_4_ = uVar36;
  auVar7._12_4_ = uVar37;
  auVar39 = NEON_ext(auVar6,auVar7,8,1);
  *(ulong *)(param_2 + 0xc58) = (ulong)auVar39._0_4_;
  *(ulong *)(param_2 + 0xc50) = CONCAT44(uVar35,uVar32);
  fVar56 = (float)param_1._0_8_;
  if (*(char *)(param_2 + 0x18) == '\0') goto LAB_7102defd1c;
  fVar33 = *(float *)(param_2 + 0x9b8) - fVar56;
  if (fVar33 <= 0.0) {
    fVar33 = 0.0;
  }
  *(float *)(param_2 + 0x9b8) = fVar33;
  if (*(char *)(param_2 + 0x9b2) != '\x01') {
    if (*(char *)(param_2 + 0x9b2) != '\0') goto LAB_7102defd1c;
    cVar5 = *(char *)(param_2 + 0x9bc);
    if (cVar5 == '\0') {
      puVar20 = *(uint **)(param_2 + 0x820);
      lVar30 = *(long *)(param_2 + 0x828) - (long)puVar20;
      if (((lVar30 == 0) || ((ulong)(lVar30 >> 2) < 2)) ||
         ((lVar30 == 8 || ((ulong)(lVar30 >> 2) < 4)))) {
                    /* WARNING: Subroutine does not return */
        std::__vector_base_common<true>::__throw_out_of_range();
      }
      puVar28 = *(uint **)(param_2 + 0x340);
      uVar1 = *puVar28;
      uVar2 = *puVar20;
      uVar15 = puVar20[1];
      uVar16 = puVar20[2];
      uVar3 = puVar20[3];
      *puVar28 = puVar28[1];
      uVar4 = puVar28[3];
      puVar28[1] = puVar28[2];
      puVar28[2] = uVar4;
      uVar15 = uVar2 + uVar15;
      uVar16 = uVar15 + uVar16;
      uVar1 = uVar1 ^ uVar1 << 0xb;
      uVar3 = uVar16 + uVar3;
      uVar1 = uVar1 ^ uVar1 >> 8 ^ uVar4 ^ uVar4 >> 0x13;
      puVar28[3] = uVar1;
      uVar4 = 0;
      if (uVar3 != 0) {
        uVar4 = uVar1 / uVar3;
      }
      *(undefined1 *)(param_2 + 0x9bc) = 3;
      uVar1 = (uVar1 - uVar4 * uVar3) + 1;
      if (uVar2 < uVar1) {
        if (uVar1 <= uVar15) {
          uVar43 = 2;
          goto LAB_7102defb3c;
        }
        if (uVar1 <= uVar16) {
          uVar43 = 3;
          goto LAB_7102defb3c;
        }
        if (uVar1 <= uVar3) {
          uVar43 = 4;
          goto LAB_7102defb3c;
        }
      }
      else {
        uVar43 = 1;
LAB_7102defb3c:
        *(undefined1 *)(param_2 + 0x9bc) = uVar43;
      }
      iVar23 = *(int *)(param_2 + 0x818);
      puVar20 = *(uint **)(param_2 + 0x340);
      uVar15 = (1 - iVar23) + *(int *)(param_2 + 0x81c);
      uVar16 = *puVar20;
      *puVar20 = puVar20[1];
      uVar3 = puVar20[3];
      uVar16 = uVar16 ^ uVar16 << 0xb;
      uVar16 = uVar16 ^ uVar16 >> 8 ^ uVar3 ^ uVar3 >> 0x13;
      puVar20[1] = puVar20[2];
      puVar20[2] = uVar3;
      puVar20[3] = uVar16;
      uVar3 = 0;
      if (uVar15 != 0) {
        uVar3 = uVar16 / uVar15;
      }
      cVar5 = *(char *)(param_2 + 0x9bc);
      fVar33 = (float)((uVar16 - uVar3 * uVar15) + iVar23) * 30.0;
      *(float *)(param_2 + 0x9b8) = fVar33;
    }
    else {
      *(undefined4 *)(param_2 + 0x9b8) = 0x41f00000;
      fVar33 = 30.0;
    }
    *(char *)(param_2 + 0x9bc) = cVar5 + -1;
    *(undefined1 *)(param_2 + 0x9b2) = 1;
  }
  if (fVar33 != 0.0) goto LAB_7102defd1c;
  fVar33 = *(float *)(param_2 + 0x794);
  if (*(char *)(param_2 + 0xee4) == '\x03') {
    lVar30 = 0;
    pcVar29 = (char *)(param_2 + 0xee4);
LAB_7102defc78:
    uVar9 = *(undefined8 *)(param_2 + 0xc58);
    uVar8 = *(undefined8 *)(param_2 + 0xc50);
    fVar38 = *(float *)(param_2 + 0xc40);
    fVar40 = *(float *)(param_2 + 0xc44);
    fVar41 = *(float *)(param_2 + 0xc48);
    fVar42 = *(float *)(param_2 + 0xc4c);
    lVar30 = param_2 + lVar30 * 0x40;
    *(undefined8 *)(lVar30 + 0xec8) = 0;
    *(undefined8 *)(lVar30 + 0xec0) = 0;
    fVar38 = fVar38 - (float)uVar8;
    fVar40 = fVar40 - (float)((ulong)uVar8 >> 0x20);
    fVar41 = fVar41 - (float)uVar9;
    fVar42 = fVar42 - (float)((ulong)uVar9 >> 0x20);
    fVar31 = fVar38 * fVar38;
    fVar34 = fVar40 * fVar40;
    uVar43 = (undefined1)((uint)fVar34 >> 8);
    uVar44 = (undefined1)((uint)fVar34 >> 0x10);
    uVar45 = (undefined1)((uint)fVar34 >> 0x18);
    fVar41 = fVar41 * fVar41;
    uVar46 = (undefined1)((uint)fVar41 >> 8);
    uVar47 = (undefined1)((uint)fVar41 >> 0x10);
    uVar48 = (undefined1)((uint)fVar41 >> 0x18);
    fVar42 = fVar42 * fVar42;
    uVar49 = (undefined1)((uint)fVar42 >> 8);
    uVar50 = (undefined1)((uint)fVar42 >> 0x10);
    uVar51 = (undefined1)((uint)fVar42 >> 0x18);
    auVar10[4] = SUB41(fVar34,0);
    auVar10._0_4_ = fVar31;
    auVar10[5] = uVar43;
    auVar10[6] = uVar44;
    auVar10[7] = uVar45;
    auVar10[8] = SUB41(fVar41,0);
    auVar10[9] = uVar46;
    auVar10[10] = uVar47;
    auVar10[0xb] = uVar48;
    auVar10[0xc] = SUB41(fVar42,0);
    auVar10[0xd] = uVar49;
    auVar10[0xe] = uVar50;
    auVar10[0xf] = uVar51;
    auVar11[4] = SUB41(fVar34,0);
    auVar11._0_4_ = fVar31;
    auVar11[5] = uVar43;
    auVar11[6] = uVar44;
    auVar11[7] = uVar45;
    auVar11[8] = SUB41(fVar41,0);
    auVar11[9] = uVar46;
    auVar11[10] = uVar47;
    auVar11[0xb] = uVar48;
    auVar11[0xc] = SUB41(fVar42,0);
    auVar11[0xd] = uVar49;
    auVar11[0xe] = uVar50;
    auVar11[0xf] = uVar51;
    auVar39 = NEON_ext(auVar10,auVar11,8,1);
    fVar31 = auVar39._0_4_ + fVar31;
    fVar34 = auVar39._4_4_ + fVar34;
    fVar41 = fVar31 + fVar34;
    fVar31 = fVar31 + fVar34;
    uVar43 = SUB41(fVar31,0);
    uVar44 = (undefined1)((uint)fVar31 >> 8);
    uVar45 = (undefined1)((uint)fVar31 >> 0x10);
    uVar46 = (undefined1)((uint)fVar31 >> 0x18);
    auVar12[4] = uVar43;
    auVar12._0_4_ = fVar41;
    auVar12[5] = uVar44;
    auVar12[6] = uVar45;
    auVar12[7] = uVar46;
    auVar12[8] = SUB41(fVar41,0);
    auVar12[9] = (char)((uint)fVar41 >> 8);
    auVar12[10] = (char)((uint)fVar41 >> 0x10);
    auVar12[0xb] = (char)((uint)fVar41 >> 0x18);
    auVar12[0xc] = uVar43;
    auVar12[0xd] = uVar44;
    auVar12[0xe] = uVar45;
    auVar12[0xf] = uVar46;
    auVar39 = NEON_frsqrte(auVar12,4);
    auVar53._0_4_ = auVar39._0_4_ * fVar41;
    auVar53._4_4_ = auVar39._4_4_ * fVar31;
    auVar53._8_4_ = auVar39._8_4_ * fVar41;
    uVar13 = (undefined2)(CONCAT15(uVar44,CONCAT14(uVar43,fVar41)) >> 0x20);
    auVar53._12_4_ = auVar39._12_4_ * (float)CONCAT13(uVar46,CONCAT12(uVar45,uVar13));
    auVar54 = NEON_frsqrts(auVar39,auVar53,4);
    auVar52._0_4_ = auVar39._0_4_ * auVar54._0_4_;
    auVar52._4_4_ = auVar39._4_4_ * auVar54._4_4_;
    auVar52._8_4_ = auVar39._8_4_ * auVar54._8_4_;
    auVar52._12_4_ = auVar39._12_4_ * auVar54._12_4_;
    auVar55._0_4_ = fVar41 * auVar52._0_4_;
    auVar55._4_4_ = fVar31 * auVar52._4_4_;
    auVar55._8_4_ = fVar41 * auVar52._8_4_;
    auVar55._12_4_ = (float)CONCAT13(uVar46,CONCAT12(uVar45,uVar13)) * auVar52._12_4_;
    iVar23 = -(uint)(fVar41 == 0.0);
    iVar14 = -(uint)(fVar31 == 0.0);
    auVar39 = NEON_frsqrts(auVar52,auVar55,4);
    fVar38 = fVar38 * auVar52._0_4_ * auVar39._0_4_;
    fVar40 = fVar40 * auVar52._4_4_ * auVar39._4_4_;
    fVar31 = (float)CONCAT13((byte)((uint)fVar38 >> 0x18) & ~(byte)((uint)iVar23 >> 0x18),
                             CONCAT12((byte)((uint)fVar38 >> 0x10) & ~(byte)((uint)iVar23 >> 0x10),
                                      CONCAT11((byte)((uint)fVar38 >> 8) &
                                               ~(byte)((uint)iVar23 >> 8),
                                               SUB41(fVar38,0) & ~(byte)iVar23)));
    fVar34 = (float)(CONCAT17((byte)((uint)fVar40 >> 0x18) & ~(byte)((uint)iVar14 >> 0x18),
                              CONCAT16((byte)((uint)fVar40 >> 0x10) & ~(byte)((uint)iVar14 >> 0x10),
                                       CONCAT15((byte)((uint)fVar40 >> 8) &
                                                ~(byte)((uint)iVar14 >> 8),
                                                CONCAT14(SUB41(fVar40,0) & ~(byte)iVar14,fVar31))))
                    >> 0x20);
    *(undefined8 *)(lVar30 + 0xeb8) = 0;
    *(undefined8 *)(lVar30 + 0xeb0) = uVar8;
    *(undefined8 *)(lVar30 + 0xed8) = 0;
    *(ulong *)(lVar30 + 0xed0) = CONCAT44(fVar33 * fVar34,fVar33 * fVar31);
    fVar33 = atan2f(fVar34,fVar31);
    *(float *)(lVar30 + 0xee0) = (fVar33 * 180.0) / 3.1415927;
    *pcVar29 = '\0';
    pvVar18 = extraout_x1_04;
  }
  else {
    if (*(char *)(param_2 + 0xf24) == '\x03') {
      pcVar29 = (char *)(param_2 + 0xf24);
      lVar30 = 1;
      goto LAB_7102defc78;
    }
    if (*(char *)(param_2 + 0xf64) == '\x03') {
      pcVar29 = (char *)(param_2 + 0xf64);
      lVar30 = 2;
      goto LAB_7102defc78;
    }
    if (*(char *)(param_2 + 0xfa4) == '\x03') {
      pcVar29 = (char *)(param_2 + 0xfa4);
      lVar30 = 3;
      goto LAB_7102defc78;
    }
    if (*(char *)(param_2 + 0xfe4) == '\x03') {
      pcVar29 = (char *)(param_2 + 0xfe4);
      lVar30 = 4;
      goto LAB_7102defc78;
    }
    pcVar29 = (char *)(param_2 + 0x1024);
    if (*pcVar29 == '\x03') {
      lVar30 = 5;
      goto LAB_7102defc78;
    }
    pcVar29 = (char *)(param_2 + 0x1064);
    if (*pcVar29 == '\x03') {
      lVar30 = 6;
      goto LAB_7102defc78;
    }
    pcVar29 = (char *)(param_2 + 0x10a4);
    if (*pcVar29 == '\x03') {
      lVar30 = 7;
      goto LAB_7102defc78;
    }
  }
  *(undefined1 *)(param_2 + 0x9b2) = 0;
LAB_7102defd1c:
  cVar5 = *(char *)(param_2 + 0x9b1);
  if (cVar5 != '\x02') {
    if (cVar5 != '\x01') {
      if (cVar5 != '\0') {
LAB_7102df006c:
        FUN_7102df41a0(fVar56,*(long *)(param_2 + 0x970),pvVar18,param_4,param_5,param_6,param_7,
                       param_8,param_9);
        FUN_7102df5070(fVar56,*(undefined8 **)(param_2 + 0x850),extraout_x1_07,param_4,param_5,
                       param_6,param_7,param_8,param_9);
        FUN_7102df35c0(fVar56,*(undefined8 **)(param_2 + 0x858),extraout_x1_08,param_4,param_5,
                       param_6,param_7,param_8,param_9);
        FUN_7102df1e70(fVar56,*(undefined8 **)(param_2 + 0x860),extraout_x1_09,param_4,param_5,
                       param_6,param_7,param_8,param_9);
        FUN_7102df1e70(fVar56,*(undefined8 **)(param_2 + 0x868),extraout_x1_10,param_4,param_5,
                       param_6,param_7,param_8,param_9);
        FUN_7102df1e70(fVar56,*(undefined8 **)(param_2 + 0x870),extraout_x1_11,param_4,param_5,
                       param_6,param_7,param_8,param_9);
        FUN_7102df1e70(fVar56,*(undefined8 **)(param_2 + 0x878),extraout_x1_12,param_4,param_5,
                       param_6,param_7,param_8,param_9);
        FUN_7102df1e70(fVar56,*(undefined8 **)(param_2 + 0x880),extraout_x1_13,param_4,param_5,
                       param_6,param_7,param_8,param_9);
        FUN_7102df1e70(fVar56,*(undefined8 **)(param_2 + 0x888),extraout_x1_14,param_4,param_5,
                       param_6,param_7,param_8,param_9);
        FUN_7102df1e70(fVar56,*(undefined8 **)(param_2 + 0x890),extraout_x1_15,param_4,param_5,
                       param_6,param_7,param_8,param_9);
        FUN_7102df1e70(fVar56,*(undefined8 **)(param_2 + 0x898),extraout_x1_16,param_4,param_5,
                       param_6,param_7,param_8,param_9);
        FUN_7102df1e70(fVar56,*(undefined8 **)(param_2 + 0x8a0),extraout_x1_17,param_4,param_5,
                       param_6,param_7,param_8,param_9);
        FUN_7102df1e70(fVar56,*(undefined8 **)(param_2 + 0x8a8),extraout_x1_18,param_4,param_5,
                       param_6,param_7,param_8,param_9);
        FUN_7102df5ed0(fVar56,*(undefined8 **)(param_2 + 0x930),extraout_x1_19,param_4,param_5,
                       param_6,param_7,param_8,param_9);
        FUN_7102df5ed0(fVar56,*(undefined8 **)(param_2 + 0x938),extraout_x1_20,param_4,param_5,
                       param_6,param_7,param_8,param_9);
        FUN_7102df5ed0(fVar56,*(undefined8 **)(param_2 + 0x940),extraout_x1_21,param_4,param_5,
                       param_6,param_7,param_8,param_9);
        FUN_7102df5ed0(fVar56,*(undefined8 **)(param_2 + 0x948),extraout_x1_22,param_4,param_5,
                       param_6,param_7,param_8,param_9);
        FUN_7102df5ed0(fVar56,*(undefined8 **)(param_2 + 0x950),extraout_x1_23,param_4,param_5,
                       param_6,param_7,param_8,param_9);
        FUN_7102df5ed0(fVar56,*(undefined8 **)(param_2 + 0x958),extraout_x1_24,param_4,param_5,
                       param_6,param_7,param_8,param_9);
        FUN_7102df5ed0(fVar56,*(undefined8 **)(param_2 + 0x960),extraout_x1_25,param_4,param_5,
                       param_6,param_7,param_8,param_9);
        FUN_7102df5ed0(fVar56,*(undefined8 **)(param_2 + 0x968),extraout_x1_26,param_4,param_5,
                       param_6,param_7,param_8,param_9);
        FUN_7102df58a0(*(long *)(param_2 + 0x8b0),extraout_x1_27,param_4,param_5,param_6,param_7,
                       param_8,param_9);
        FUN_7102df58a0(*(long *)(param_2 + 0x8b8),extraout_x1_28,param_4,param_5,param_6,param_7,
                       param_8,param_9);
        FUN_7102df58a0(*(long *)(param_2 + 0x8c0),extraout_x1_29,param_4,param_5,param_6,param_7,
                       param_8,param_9);
        FUN_7102df58a0(*(long *)(param_2 + 0x8c8),extraout_x1_30,param_4,param_5,param_6,param_7,
                       param_8,param_9);
        FUN_7102df58a0(*(long *)(param_2 + 0x8d0),extraout_x1_31,param_4,param_5,param_6,param_7,
                       param_8,param_9);
        FUN_7102df58a0(*(long *)(param_2 + 0x8d8),extraout_x1_32,param_4,param_5,param_6,param_7,
                       param_8,param_9);
        FUN_7102df58a0(*(long *)(param_2 + 0x8e0),extraout_x1_33,param_4,param_5,param_6,param_7,
                       param_8,param_9);
        FUN_7102df58a0(*(long *)(param_2 + 0x8e8),extraout_x1_34,param_4,param_5,param_6,param_7,
                       param_8,param_9);
        FUN_7102df58a0(*(long *)(param_2 + 0x8f0),extraout_x1_35,param_4,param_5,param_6,param_7,
                       param_8,param_9);
        FUN_7102df58a0(*(long *)(param_2 + 0x8f8),extraout_x1_36,param_4,param_5,param_6,param_7,
                       param_8,param_9);
        FUN_7102df58a0(*(long *)(param_2 + 0x900),extraout_x1_37,param_4,param_5,param_6,param_7,
                       param_8,param_9);
        FUN_7102df58a0(*(long *)(param_2 + 0x908),extraout_x1_38,param_4,param_5,param_6,param_7,
                       param_8,param_9);
        FUN_7102df58a0(*(long *)(param_2 + 0x910),extraout_x1_39,param_4,param_5,param_6,param_7,
                       param_8,param_9);
        FUN_7102df58a0(*(long *)(param_2 + 0x918),extraout_x1_40,param_4,param_5,param_6,param_7,
                       param_8,param_9);
        FUN_7102df58a0(*(long *)(param_2 + 0x920),extraout_x1_41,param_4,param_5,param_6,param_7,
                       param_8,param_9);
        FUN_7102df58a0(*(long *)(param_2 + 0x928),extraout_x1_42,param_4,param_5,param_6,param_7,
                       param_8,param_9);
        return;
      }
      *(undefined1 *)(param_2 + 0x9b1) = 1;
    }
    *(undefined1 *)(param_2 + 0x9b1) = 2;
  }
  lVar30 = 0;
  do {
    lVar19 = param_2 + lVar30;
    if (*(char *)(lVar19 + 0xee4) == '\x01') {
      fVar31 = *(float *)(param_2 + 0xc70) - *(float *)(param_2 + 0xc60);
      fVar33 = fVar31 * 0.0078125 * 48.0;
      fVar31 = ((*(float *)(lVar19 + 0xeb0) - *(float *)(param_2 + 0xc60)) + fVar33) /
               (fVar31 + fVar33 + fVar33);
      fVar33 = fVar31;
      if (1.0 < fVar31) {
        fVar33 = 1.0;
      }
      fVar34 = 0.0;
      if (0.0 <= fVar31) {
        fVar34 = fVar33 * 224.0;
      }
      lVar22 = (long)(int)((int)fVar34 - 2U);
      if ((int)fVar34 - 2U < 0xe0) {
        *(undefined4 *)(param_2 + lVar22 * 0xc + 0x10b4) = 0x42100000;
      }
      if ((uint)(lVar22 + 1) < 0xe0) {
        *(undefined4 *)(param_2 + (lVar22 + 1) * 0xc + 0x10b4) = 0x42900000;
      }
      if ((uint)(lVar22 + 2) < 0xe0) {
        *(undefined4 *)(param_2 + (lVar22 + 2) * 0xc + 0x10b4) = 0x42d7ffff;
      }
      if ((uint)(lVar22 + 3) < 0xe0) {
        *(undefined4 *)(param_2 + (lVar22 + 3) * 0xc + 0x10b4) = 0x42900000;
      }
      if ((uint)(lVar22 + 4) < 0xe0) {
        *(undefined4 *)(param_2 + (lVar22 + 4) * 0xc + 0x10b4) = 0x42100000;
      }
      local_c0 = *(undefined1 (*) [8])(lVar19 + 0xeb0);
      uStack_b8 = 0;
      fVar33 = (local_c0._0_4_ - *(float *)(param_2 + 0xc60)) /
               (*(float *)(param_2 + 0xc70) - *(float *)(param_2 + 0xc60));
      if (fVar33 <= 0.0) {
        fVar33 = 0.0;
      }
      if (1.0 < fVar33) {
        fVar33 = 1.0;
      }
      if (0.125 <= fVar33) {
        if (0.25 <= fVar33) {
          uVar32 = 5;
          if (0.375 <= fVar33) {
            if (0.5 <= fVar33) {
              if (0.625 <= fVar33) {
                if (0.75 <= fVar33) {
                  uVar32 = 9;
                  if (0.875 <= fVar33) {
                    uVar32 = 10;
                  }
                }
                else {
                  uVar32 = 8;
                }
              }
              else {
                uVar32 = 7;
              }
            }
            else {
              uVar32 = 6;
            }
          }
        }
        else {
          uVar32 = 4;
        }
      }
      else {
        uVar32 = 3;
      }
      lVar22 = **(long **)(param_2 + 0x338);
      if (*(long *)(lVar22 + 8) != 0) {
        param_4 = (long ****)0x1;
        local_a8 = 0;
        uVar15 = FUN_7102405040(*(long *)(lVar22 + 8),&local_a8,1,param_5,param_6,param_7,param_8,
                                param_9);
        pvVar18 = extraout_x1_05;
        if (uVar15 != 0xffffffff) {
          param_4 = (long ****)(ulong)uVar15;
          if (uVar15 < 0x19) {
            plVar17 = *(long **)(*(long *)(lVar22 + 8) + (long)(int)uVar15 * 0x50 + 0x68);
            if (((*plVar17 != 0) && ((int)plVar17[1] != -1)) &&
               ((int)plVar17[1] == *(int *)(*plVar17 + 0x20))) {
              FUN_7103736cf0(plVar17,(undefined1 (*) [12])local_c0);
            }
          }
          (**(code **)(**(long **)(lVar22 + 8) + 0x58))(*(long **)(lVar22 + 8),uVar32);
          pvVar18 = extraout_x1_06;
        }
      }
      *(undefined1 *)(lVar19 + 0xee4) = 2;
    }
    lVar30 = lVar30 + 0x40;
  } while (lVar30 != 0x200);
  uVar24 = 0;
  do {
    lVar30 = param_2 + uVar24 * 0xc;
    fVar33 = *(float *)(lVar30 + 0x10b4);
    uVar43 = SUB41(fVar33,0);
    uVar44 = (undefined1)((uint)fVar33 >> 8);
    uVar45 = (undefined1)((uint)fVar33 >> 0x10);
    uVar46 = (undefined1)((uint)fVar33 >> 0x18);
    uVar27 = uVar24 + 1;
    pfVar26 = (float *)(lVar30 + 0x10b0);
    fVar33 = fVar33 + fVar33;
    uVar25 = uVar24;
    uVar24 = uVar27;
    while( true ) {
      fVar33 = *pfVar26 + (fVar33 + *(float *)(param_2 + 0x10b0 + uVar27 * 0xc + 4)) / 3.6;
      fVar33 = fVar33 + fVar33 / -50.0;
      *pfVar26 = fVar33 - (float)CONCAT13(uVar46,CONCAT12(uVar45,CONCAT11(uVar44,uVar43)));
      uVar43 = SUB41(fVar33,0);
      uVar44 = (undefined1)((uint)fVar33 >> 8);
      uVar45 = (undefined1)((uint)fVar33 >> 0x10);
      uVar46 = (undefined1)((uint)fVar33 >> 0x18);
      if (252.0 < fVar33) {
        uVar43 = 0;
        uVar44 = 0;
        uVar45 = 0x7c;
        uVar46 = 0x43;
      }
      *(uint *)(param_2 + 0x10b0 + uVar25 * 0xc + 8) =
           CONCAT13(uVar46,CONCAT12(uVar45,CONCAT11(uVar44,uVar43)));
      iVar23 = (int)uVar24;
      if (iVar23 == 0) break;
      if (iVar23 == 0xe0) {
        lVar30 = -0xa80;
        do {
          lVar19 = param_2 + lVar30;
          lVar30 = lVar30 + 0x18;
          *(undefined4 *)(lVar19 + 0x1b34) = *(undefined4 *)(lVar19 + 0x1b38);
          *(undefined4 *)(lVar19 + 0x1b40) = *(undefined4 *)(lVar19 + 0x1b44);
        } while (lVar30 != 0);
        goto LAB_7102df006c;
      }
      uVar27 = (ulong)(iVar23 - 1);
      pfVar26 = (float *)(param_2 + uVar24 * 0xc + 0x10b0);
      uVar25 = uVar24;
      if (uVar24 == 0xdf) {
        fVar33 = *(float *)(param_2 + 0x1b28);
        uVar43 = SUB41(fVar33,0);
        uVar44 = (undefined1)((uint)fVar33 >> 8);
        uVar45 = (undefined1)((uint)fVar33 >> 0x10);
        uVar46 = (undefined1)((uint)fVar33 >> 0x18);
        fVar33 = fVar33 + fVar33;
        uVar24 = 0xe0;
      }
      else {
        lVar30 = param_2 + uVar24 * 0xc;
        fVar33 = *(float *)(lVar30 + 0x10b4);
        uVar43 = SUB41(fVar33,0);
        uVar44 = (undefined1)((uint)fVar33 >> 8);
        uVar45 = (undefined1)((uint)fVar33 >> 0x10);
        uVar46 = (undefined1)((uint)fVar33 >> 0x18);
        fVar33 = fVar33 + *(float *)(lVar30 + 0x10c0);
        uVar24 = uVar24 + 1;
      }
    }
  } while( true );
}

