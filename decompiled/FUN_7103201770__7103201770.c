// addr:      7103201770
// offset:    0x3201770
// name:      FUN_7103201770
// mangled:   
// signature: undefined __cdecl FUN_7103201770(long * param_1, long * param_2, undefined8 param_3, undefined8 param_4, long * * * * param_5, undefined8 param_6, byte * * * * param_7, long * * * param_8)


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7103201770(long *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                   long ****param_5,undefined8 param_6,byte ****param_7,long ***param_8)

{
  long lVar1;
  char cVar2;
  byte ***pppbVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  bool bVar7;
  bool bVar8;
  ulong uVar9;
  undefined8 *puVar10;
  void *__dest;
  ulong uVar11;
  void *extraout_x1;
  void *extraout_x1_00;
  void *__src;
  undefined1 (*pauVar12) [16];
  byte ****ppppbVar13;
  byte ****ppppbVar14;
  byte ****ppppbVar15;
  long lVar16;
  long lVar17;
  int iVar18;
  long *plVar19;
  long *plVar20;
  long *plVar21;
  long lVar22;
  undefined1 (*pauVar23) [16];
  float fVar24;
  float fVar25;
  undefined4 extraout_s0;
  undefined4 extraout_s0_00;
  undefined4 extraout_s0_01;
  undefined4 extraout_s0_02;
  undefined4 extraout_s0_03;
  undefined4 extraout_s0_04;
  undefined4 extraout_s0_05;
  undefined4 extraout_s0_06;
  undefined4 extraout_s0_07;
  undefined4 extraout_s0_08;
  undefined4 extraout_s0_09;
  undefined4 uVar26;
  float fVar27;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  undefined4 extraout_var_01;
  undefined4 extraout_var_02;
  undefined4 extraout_var_03;
  undefined4 extraout_var_04;
  undefined4 extraout_var_05;
  undefined4 extraout_var_06;
  undefined4 extraout_var_07;
  undefined4 extraout_var_08;
  undefined4 extraout_var_09;
  undefined4 uVar28;
  undefined4 extraout_var_10;
  undefined4 extraout_var_11;
  undefined4 extraout_var_12;
  undefined4 extraout_var_13;
  undefined4 extraout_var_14;
  undefined4 extraout_var_15;
  undefined4 extraout_var_16;
  undefined4 extraout_var_17;
  undefined4 extraout_var_18;
  undefined4 extraout_var_19;
  undefined4 extraout_var_20;
  undefined4 uVar29;
  float fVar30;
  undefined4 extraout_var_21;
  undefined4 extraout_var_22;
  undefined4 extraout_var_23;
  undefined4 extraout_var_24;
  undefined4 extraout_var_25;
  undefined4 extraout_var_26;
  undefined4 extraout_var_27;
  undefined4 extraout_var_28;
  undefined4 extraout_var_29;
  undefined4 extraout_var_30;
  undefined4 extraout_var_31;
  undefined4 uVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  undefined4 uVar35;
  float fVar36;
  undefined4 uVar37;
  float fVar38;
  undefined4 uVar39;
  float fVar48;
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  float fVar46;
  undefined8 uVar47;
  long *local_d8;
  byte ***local_d0;
  long local_c8;
  long local_c0;
  undefined1 local_b8;
  undefined1 local_b7;
  undefined4 local_b4;
  long local_b0;
  long local_a8;
  long local_a0;
  long local_98;
  byte ***local_90;
  ulong uStack_88;
  undefined4 local_54;
  undefined1 auVar43 [16];
  
  lVar17 = *(long *)(param_1[8] + 0x68);
  fVar32 = *(float *)(lVar17 + 0x1c) * 0.5;
  fVar46 = *(float *)(param_2 + 7);
  lVar16 = lVar17 + 0x10;
  fVar24 = fVar32 + *(float *)(lVar17 + 0x18);
  bVar7 = false;
  bVar8 = true;
  if (*(float *)(lVar17 + 0x18) - fVar32 <= fVar46) {
    bVar7 = false;
    bVar8 = true;
    if (!NAN(fVar46) && !NAN(fVar24)) {
      bVar7 = fVar46 == fVar24;
      bVar8 = fVar24 <= fVar46;
    }
  }
  lVar22 = lVar16;
  if (!bVar8 || bVar7) {
LAB_710320184c:
    iVar18 = *(int *)(lVar22 + 4);
  }
  else {
    fVar32 = *(float *)(lVar17 + 0xbc) * 0.5;
    fVar24 = fVar32 + *(float *)(lVar17 + 0xb8);
    bVar7 = false;
    bVar8 = true;
    if (*(float *)(lVar17 + 0xb8) - fVar32 <= fVar46) {
      bVar7 = false;
      bVar8 = true;
      if (!NAN(fVar46) && !NAN(fVar24)) {
        bVar7 = fVar46 == fVar24;
        bVar8 = fVar24 <= fVar46;
      }
    }
    if (!bVar8 || bVar7) {
      lVar22 = lVar17 + 0xb0;
      goto LAB_710320184c;
    }
    fVar24 = *(float *)(lVar17 + 0x15c) * 0.5;
    fVar32 = fVar24 + *(float *)(lVar17 + 0x158);
    bVar7 = false;
    bVar8 = true;
    if (*(float *)(lVar17 + 0x158) - fVar24 <= fVar46) {
      bVar7 = false;
      bVar8 = true;
      if (!NAN(fVar46) && !NAN(fVar32)) {
        bVar7 = fVar46 == fVar32;
        bVar8 = fVar32 <= fVar46;
      }
    }
    if (!bVar8 || bVar7) {
      lVar22 = lVar17 + 0x150;
      goto LAB_710320184c;
    }
    fVar24 = *(float *)(lVar17 + 0x1fc) * 0.5;
    fVar32 = fVar24 + *(float *)(lVar17 + 0x1f8);
    bVar7 = false;
    bVar8 = true;
    if (*(float *)(lVar17 + 0x1f8) - fVar24 <= fVar46) {
      bVar7 = false;
      bVar8 = true;
      if (!NAN(fVar46) && !NAN(fVar32)) {
        bVar7 = fVar46 == fVar32;
        bVar8 = fVar32 <= fVar46;
      }
    }
    if (!bVar8 || bVar7) {
      lVar22 = lVar17 + 0x1f0;
      goto LAB_710320184c;
    }
    iVar18 = 0;
  }
  lVar22 = lVar16;
  if (*(int *)(lVar17 + 0x14) != iVar18) {
    if (*(int *)(lVar17 + 0xb4) == iVar18) {
      lVar22 = lVar17 + 0xb0;
    }
    else if (*(int *)(lVar17 + 0x154) == iVar18) {
      lVar22 = lVar17 + 0x150;
    }
    else {
      lVar22 = lVar17 + 0x1f0;
      if (*(int *)(lVar17 + 500) != iVar18) {
        lVar22 = lVar16;
      }
    }
  }
  fVar32 = (float)param_2[1];
  fVar30 = (float)((ulong)param_2[1] >> 0x20);
  fVar25 = (float)*param_2;
  fVar27 = (float)((ulong)*param_2 >> 0x20);
  fVar36 = (float)param_2[3];
  fVar38 = (float)((ulong)param_2[3] >> 0x20);
  fVar33 = (float)param_2[2];
  fVar34 = (float)((ulong)param_2[2] >> 0x20);
  fVar33 = fVar33 * fVar33;
  fVar34 = fVar34 * fVar34;
  fVar36 = fVar36 * fVar36;
  fVar38 = fVar38 * fVar38;
  fVar24 = *(float *)(lVar22 + 0xc);
  uVar47 = 0;
  fVar25 = fVar25 * fVar25;
  fVar27 = fVar27 * fVar27;
  fVar32 = fVar32 * fVar32;
  fVar30 = fVar30 * fVar30;
  auVar45._4_4_ = fVar27;
  auVar45._0_4_ = fVar25;
  auVar45._8_4_ = fVar32;
  auVar45._12_4_ = fVar30;
  auVar40._4_4_ = fVar27;
  auVar40._0_4_ = fVar25;
  auVar40._8_4_ = fVar32;
  auVar40._12_4_ = fVar30;
  auVar40 = NEON_ext(auVar45,auVar40,8,1);
  auVar41._4_4_ = fVar34;
  auVar41._0_4_ = fVar33;
  auVar41._8_4_ = fVar36;
  auVar41._12_4_ = fVar38;
  auVar5._4_4_ = fVar34;
  auVar5._0_4_ = fVar33;
  auVar5._8_4_ = fVar36;
  auVar5._12_4_ = fVar38;
  auVar41 = NEON_ext(auVar41,auVar5,8,1);
  auVar42._0_4_ = *(float *)(param_2 + 4) * *(float *)(param_2 + 4);
  auVar42._4_4_ = *(float *)((long)param_2 + 0x24) * *(float *)((long)param_2 + 0x24);
  auVar42._8_4_ = *(float *)(param_2 + 5) * *(float *)(param_2 + 5);
  auVar42._12_4_ = *(float *)((long)param_2 + 0x2c) * *(float *)((long)param_2 + 0x2c);
  auVar45 = NEON_ext(auVar42,auVar42,8,1);
  fVar30 = auVar45._0_4_ + auVar42._0_4_;
  fVar36 = auVar45._4_4_ + auVar42._4_4_;
  fVar32 = fVar30 + fVar36;
  fVar30 = fVar30 + fVar36;
  auVar45 = ZEXT816(0);
  pauVar12 = (undefined1 (*) [16])(param_1 + 0x3a);
  fVar48 = SQRT(fVar32);
  auVar43._4_4_ = SQRT(fVar30);
  auVar43._8_4_ = SQRT(fVar32);
  auVar43._12_4_ = SQRT(fVar30);
  auVar44._8_8_ = auVar43._8_8_;
  auVar44._0_8_ = CONCAT44(0,fVar48);
  ppppbVar14 = &local_90;
  local_90 = (byte ***)
             CONCAT44(SQRT(auVar41._0_4_ + fVar33 + auVar41._4_4_ + fVar34),
                      SQRT(auVar40._0_4_ + fVar25 + auVar40._4_4_ + fVar27));
  fVar32 = *(float *)(*(long *)(param_1[8] + 0x30) + 300);
  uStack_88 = auVar44._0_8_;
  FUN_7103200170((size_t *)&local_d0,(long)param_1,pauVar12,ppppbVar14,param_5,param_6,param_7,
                 param_8);
  uVar9 = param_1[0x42];
  ppppbVar15 = (byte ****)(param_1 + 0x42);
  if (uVar9 != 0) {
    param_1[0x43] = uVar9;
    FUN_710392eb40(uVar9);
    param_1[0x43] = 0;
    param_1[0x44] = 0;
    *ppppbVar15 = (byte ***)0x0;
  }
  param_1[0x42] = (long)local_d0;
  param_1[0x43] = local_c8;
  param_1[0x44] = local_c0;
  local_c8 = 0;
  local_c0 = 0;
  local_d0 = (byte ***)0x0;
  *(undefined1 *)(param_1 + 0x45) = local_b8;
  *(undefined1 *)((long)param_1 + 0x229) = local_b7;
  *(undefined4 *)((long)param_1 + 0x22c) = local_b4;
  param_1[0x47] = local_a8;
  param_1[0x46] = local_b0;
  param_1[0x49] = local_98;
  param_1[0x48] = local_a0;
  if ((char)param_1[0x3d] == '\0') {
    lVar16 = param_1[8];
    plVar20 = (long *)FUN_710392e290(0x10,400,(long ****)pauVar12,ppppbVar14,param_5,param_6,param_7
                                     ,param_8);
    if (plVar20 == (long *)0x0) {
      if (DAT_7105332f00 != (long *)0x0) {
        local_d8 = (long *)((ulong)local_d8 & 0xffffffff00000000);
        local_d0 = (byte ***)&DAT_00000190;
        pauVar12 = (undefined1 (*) [16])&local_d0;
        uVar9 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_d8);
        if (((uVar9 & 1) != 0) &&
           (plVar20 = (long *)FUN_710392e290(0x10,400,(long ****)pauVar12,ppppbVar14,param_5,param_6
                                             ,param_7,param_8), plVar20 != (long *)0x0))
        goto LAB_7103201a7c;
      }
      plVar20 = (long *)0x0;
    }
LAB_7103201a7c:
    FUN_71031e1ad0(plVar20,lVar16,(long ****)pauVar12,ppppbVar14,param_5,param_6,param_7,param_8);
    *plVar20 = (long)&PTR_FUN_710517ec90;
    *(float *)(plVar20 + 0xc) = fVar32 * 0.5;
    *(float *)((long)plVar20 + 100) = fVar24 * 0.5;
    plVar20[0xe] = 0;
    plVar20[0xf] = 0;
    plVar20[0x10] = 0;
    pppbVar3 = (byte ***)(param_1[0x3b] - param_1[0x3a]);
    __src = extraout_x1;
    if (pppbVar3 != (byte ***)0x0) {
      if ((ulong)((long)pppbVar3 >> 4) >> 0x3c != 0) {
                    /* WARNING: Subroutine does not return */
        std::__vector_base_common<true>::__throw_length_error();
      }
      __dest = (void *)FUN_710392e290(0x10,pppbVar3,(long ****)pauVar12,ppppbVar14,param_5,param_6,
                                      param_7,param_8);
      if (__dest == (void *)0x0) {
        if (DAT_7105332f00 != (long *)0x0) {
          local_d8 = (long *)((ulong)local_d8 & 0xffffffff00000000);
          pauVar12 = (undefined1 (*) [16])&local_d0;
          local_d0 = pppbVar3;
          uVar9 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_d8);
          if (((uVar9 & 1) != 0) &&
             (__dest = (void *)FUN_710392e290(0x10,pppbVar3,(long ****)pauVar12,ppppbVar14,param_5,
                                              param_6,param_7,param_8), __dest != (void *)0x0))
          goto LAB_7103201b18;
        }
        __dest = (void *)0x0;
      }
LAB_7103201b18:
      plVar20[0xe] = (long)__dest;
      plVar20[0xf] = (long)__dest;
      plVar20[0x10] = (long)((long)__dest + ((long)pppbVar3 >> 4) * 0x10);
      __src = (void *)param_1[0x3a];
      pauVar23 = (undefined1 (*) [16])(param_1[0x3b] - (long)__src);
      if (0 < (long)pauVar23) {
        pauVar12 = pauVar23;
        memcpy(__dest,__src,(size_t)pauVar23);
        plVar20[0xf] = (long)__dest + (long)pauVar23;
        __src = extraout_x1_00;
      }
    }
    plVar20[0x11] = param_1[0x3d];
    lVar16 = param_1[0x3e];
    lVar22 = param_1[0x3f];
    lVar17 = param_1[0x40];
    lVar1 = param_1[0x41];
    *(undefined4 *)((long)plVar20 + 0xcc) = 0;
    plVar20[0x17] = 0;
    plVar20[0x18] = 0;
    *(undefined2 *)(plVar20 + 0x19) = 0;
    plVar20[0x14] = lVar17;
    plVar20[0x15] = lVar1;
    plVar20[0x12] = lVar16;
    plVar20[0x13] = lVar22;
    plVar20[0x1b] = 0;
    plVar20[0x1a] = 0x7f7fffff7f7fffff;
    plVar20[0x1d] = 0;
    plVar20[0x1c] = -0x80000000800001;
    plVar20[0x16] = 0;
    plVar20[0x1f] = 0;
    plVar20[0x1e] = 0x7f7fffff7f7fffff;
    plVar20[0x21] = 0;
    plVar20[0x20] = -0x80000000800001;
    plVar20[0x23] = 0x7f7fffff;
    plVar20[0x22] = 0x7f7fffff7f7fffff;
    plVar20[0x25] = 0xff7fffff;
    plVar20[0x24] = -0x80000000800001;
    lVar17 = lRam0000007107459008;
    lVar16 = _ConstantZero;
    *(undefined4 *)(plVar20 + 0x28) = 0;
    plVar20[0x27] = lVar17;
    plVar20[0x26] = lVar16;
    plVar20[0x30] = 0;
    plVar20[0x31] = 0;
    plVar20[0x2e] = 0;
    plVar20[0x2f] = 0;
    plVar20[0x2c] = 0;
    plVar20[0x2d] = 0;
    plVar20[0x2b] = lVar17;
    plVar20[0x2a] = lVar16;
    FUN_71031e0820(plVar20,__src,(long ****)pauVar12,ppppbVar14,param_5,param_6,param_7,param_8);
    if (plVar20 == (long *)0x0) {
      plVar21 = (long *)0x0;
    }
    else {
      plVar21 = (long *)FUN_710392e290(0x10,0x20,(long ****)pauVar12,ppppbVar14,param_5,param_6,
                                       param_7,param_8);
      if (plVar21 == (long *)0x0) {
        if (DAT_7105332f00 != (long *)0x0) {
          local_d8 = (long *)((ulong)local_d8 & 0xffffffff00000000);
          local_d0 = (byte ***)&SUB_00000020;
          ppppbVar13 = &local_d0;
          uVar9 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_d8);
          if (((uVar9 & 1) != 0) &&
             (plVar21 = (long *)FUN_710392e290(0x10,0x20,(long ****)ppppbVar13,ppppbVar14,param_5,
                                               param_6,param_7,param_8), plVar21 != (long *)0x0))
          goto LAB_7103201c2c;
        }
        plVar21 = (long *)0x0;
      }
LAB_7103201c2c:
      *plVar21 = (long)&DAT_710517fcd8;
      plVar21[1] = 0;
      plVar21[2] = 0;
      plVar21[3] = (long)plVar20;
    }
    param_1[0x4c] = (long)plVar20;
    plVar20 = (long *)param_1[0x4d];
    param_1[0x4d] = (long)plVar21;
    if (plVar20 != (long *)0x0) {
      plVar21 = plVar20 + 1;
      do {
        lVar16 = *plVar21;
        cVar2 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(plVar21,0x10);
        if (bVar7) {
          *plVar21 = lVar16 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar16 == 0) {
        (**(code **)(*plVar20 + 0x10))(plVar20);
        std::__shared_weak_count::__release_weak();
      }
      plVar21 = (long *)param_1[0x4d];
    }
    lVar16 = param_1[0x4c];
    if (plVar21 != (long *)0x0) {
      plVar20 = plVar21 + 1;
      do {
        cVar2 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(plVar20,0x10);
        if (bVar7) {
          *plVar20 = *plVar20 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
  }
  else {
    ppppbVar13 = ppppbVar15;
    FUN_71031decb0(fVar24,&local_d8,param_1[8],(long ****)ppppbVar15,ppppbVar14,param_5,param_6,
                   param_7,param_8);
    plVar20 = local_d8;
    if (local_d8 == (long *)0x0) {
      puVar10 = (undefined8 *)0x0;
    }
    else {
      puVar10 = (undefined8 *)
                FUN_710392e290(0x10,0x20,(long ****)ppppbVar13,ppppbVar14,param_5,param_6,param_7,
                               param_8);
      if (puVar10 == (undefined8 *)0x0) {
        if (DAT_7105332f00 != (long *)0x0) {
          local_54 = 0;
          local_d0 = (byte ***)&SUB_00000020;
          ppppbVar13 = &local_d0;
          uVar9 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_54);
          if (((uVar9 & 1) != 0) &&
             (puVar10 = (undefined8 *)
                        FUN_710392e290(0x10,0x20,(long ****)ppppbVar13,ppppbVar14,param_5,param_6,
                                       param_7,param_8), puVar10 != (undefined8 *)0x0))
          goto LAB_7103201a04;
        }
        puVar10 = (undefined8 *)0x0;
      }
LAB_7103201a04:
      *puVar10 = &DAT_710517f478;
      puVar10[1] = 0;
      puVar10[2] = 0;
      puVar10[3] = local_d8;
    }
    local_d8 = (long *)0x0;
    param_1[0x4a] = (long)plVar20;
    plVar20 = (long *)param_1[0x4b];
    param_1[0x4b] = (long)puVar10;
    if (plVar20 != (long *)0x0) {
      plVar21 = plVar20 + 1;
      do {
        lVar16 = *plVar21;
        cVar2 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(plVar21,0x10);
        if (bVar7) {
          *plVar21 = lVar16 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar16 == 0) {
        (**(code **)(*plVar20 + 0x10))(plVar20);
        std::__shared_weak_count::__release_weak();
      }
    }
    plVar20 = local_d8;
    local_d8 = (long *)0x0;
    if (plVar20 != (long *)0x0) {
      (**(code **)(*plVar20 + 8))();
    }
    lVar16 = param_1[0x4a];
    plVar21 = (long *)param_1[0x4b];
    if (plVar21 != (long *)0x0) {
      plVar20 = plVar21 + 1;
      do {
        cVar2 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(plVar20,0x10);
        if (bVar7) {
          *plVar20 = *plVar20 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
  }
  ppppbVar13 = ppppbVar15;
  FUN_71031c5820(fVar24,&local_d8,param_1[8],(long ****)ppppbVar15,ppppbVar14,param_5,param_6,
                 param_7,param_8);
  plVar20 = local_d8;
  if (local_d8 == (long *)0x0) {
    puVar10 = (undefined8 *)0x0;
  }
  else {
    puVar10 = (undefined8 *)
              FUN_710392e290(0x10,0x20,(long ****)ppppbVar13,ppppbVar14,param_5,param_6,param_7,
                             param_8);
    if (puVar10 == (undefined8 *)0x0) {
      if (DAT_7105332f00 != (long *)0x0) {
        local_54 = 0;
        local_d0 = (byte ***)&SUB_00000020;
        ppppbVar13 = &local_d0;
        uVar9 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_54);
        if (((uVar9 & 1) != 0) &&
           (puVar10 = (undefined8 *)
                      FUN_710392e290(0x10,0x20,(long ****)ppppbVar13,ppppbVar14,param_5,param_6,
                                     param_7,param_8), puVar10 != (undefined8 *)0x0))
        goto LAB_7103201d98;
      }
      puVar10 = (undefined8 *)0x0;
    }
LAB_7103201d98:
    *puVar10 = &DAT_710517f4b0;
    puVar10[1] = 0;
    puVar10[2] = 0;
    puVar10[3] = plVar20;
  }
  local_d8 = (long *)0x0;
  param_1[0x4e] = (long)plVar20;
  plVar20 = (long *)param_1[0x4f];
  param_1[0x4f] = (long)puVar10;
  if (plVar20 != (long *)0x0) {
    plVar19 = plVar20 + 1;
    do {
      lVar17 = *plVar19;
      cVar2 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar19,0x10);
      if (bVar7) {
        *plVar19 = lVar17 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar17 == 0) {
      (**(code **)(*plVar20 + 0x10))(plVar20);
      std::__shared_weak_count::__release_weak();
    }
  }
  plVar20 = local_d8;
  local_d8 = (long *)0x0;
  if (plVar20 != (long *)0x0) {
    (**(code **)(*plVar20 + 8))();
  }
  lVar22 = param_1[8];
  uVar9 = param_1[0x39];
  lVar17 = param_1[0x3d];
  plVar20 = (long *)FUN_710392e290(0x10,0x160,(long ****)ppppbVar13,ppppbVar14,param_5,param_6,
                                   param_7,param_8);
  if (plVar20 == (long *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_d8 = (long *)((ulong)local_d8 & 0xffffffff00000000);
      local_d0 = (byte ***)&DAT_00000160;
      ppppbVar13 = &local_d0;
      uVar11 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_d8);
      if (((uVar11 & 1) != 0) &&
         (plVar20 = (long *)FUN_710392e290(0x10,0x160,(long ****)ppppbVar13,ppppbVar14,param_5,
                                           param_6,param_7,param_8), plVar20 != (long *)0x0))
      goto LAB_7103201e74;
    }
    plVar20 = (long *)0x0;
  }
LAB_7103201e74:
  pauVar23 = (undefined1 (*) [16])(ulong)((char)lVar17 != '\0');
  FUN_71031ef4c0(plVar20,lVar22,(long ****)ppppbVar13,ppppbVar14,param_5,param_6,param_7,param_8);
  plVar20[0x17] = 0;
  plVar20[0x18] = 0;
  plVar20[0x14] = 0;
  *(undefined1 *)(plVar20 + 0x15) = 0;
  *(undefined4 *)((long)plVar20 + 0xcc) = 0;
  pauVar12 = (undefined1 (*) [16])&local_90;
  *(undefined2 *)(plVar20 + 0x19) = 0;
  plVar20[0x16] = 0;
  *plVar20 = (long)&PTR_FUN_710517eee0;
  plVar20[0x1e] = 0;
  plVar20[0x1b] = 0;
  plVar20[0x1a] = 0x7f7fffff7f7fffff;
  plVar20[0x1d] = 0;
  plVar20[0x1c] = -0x80000000800001;
  lVar22 = lRam0000007107558008;
  lVar17 = _ConstantOne;
  plVar20[0x2a] = 0;
  plVar20[0x2b] = 0;
  plVar20[0x21] = lVar22;
  plVar20[0x20] = lVar17;
  plVar20[0x23] = 0;
  plVar20[0x22] = 0x3f800000;
  plVar20[0x25] = 0;
  plVar20[0x24] = 0x3f80000000000000;
  plVar20[0x27] = 0x3f800000;
  plVar20[0x26] = 0;
  plVar20[0x29] = 0x3f80000000000000;
  plVar20[0x28] = 0;
  uVar37 = (undefined4)uVar47;
  uVar39 = (undefined4)((ulong)uVar47 >> 0x20);
  uVar35 = 0;
  FUN_71031e8d80(fVar46,fVar24,(long)plVar20,uVar9,pauVar23,ppppbVar15,pauVar12,param_6,param_7,
                 param_8);
  if (plVar20 == (long *)0x0) {
    puVar10 = (undefined8 *)0x0;
    uVar26 = extraout_s0;
    uVar28 = extraout_var;
    uVar29 = extraout_var_10;
    uVar31 = extraout_var_21;
    goto LAB_7103201f90;
  }
  puVar10 = (undefined8 *)
            FUN_710392e290(0x10,0x20,(long ****)pauVar23,ppppbVar15,(long ****)pauVar12,param_6,
                           param_7,param_8);
  uVar26 = extraout_s0_00;
  uVar28 = extraout_var_00;
  uVar29 = extraout_var_11;
  uVar31 = extraout_var_22;
  if (puVar10 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_d8 = (long *)((ulong)local_d8 & 0xffffffff00000000);
      local_d0 = (byte ***)&SUB_00000020;
      ppppbVar14 = &local_d0;
      uVar9 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_d8);
      uVar26 = extraout_s0_01;
      uVar28 = extraout_var_01;
      uVar29 = extraout_var_12;
      uVar31 = extraout_var_23;
      if (((uVar9 & 1) != 0) &&
         (puVar10 = (undefined8 *)
                    FUN_710392e290(0x10,0x20,(long ****)ppppbVar14,ppppbVar15,(long ****)pauVar12,
                                   param_6,param_7,param_8), uVar26 = extraout_s0_02,
         uVar28 = extraout_var_02, uVar29 = extraout_var_13, uVar31 = extraout_var_24,
         puVar10 != (undefined8 *)0x0)) goto LAB_7103201f78;
    }
    puVar10 = (undefined8 *)0x0;
  }
LAB_7103201f78:
  *puVar10 = &DAT_710517fd10;
  puVar10[1] = 0;
  puVar10[2] = 0;
  puVar10[3] = plVar20;
LAB_7103201f90:
  plVar19 = (long *)param_1[0x51];
  param_1[0x50] = (long)plVar20;
  param_1[0x51] = (long)puVar10;
  if (plVar19 != (long *)0x0) {
    plVar20 = plVar19 + 1;
    do {
      lVar17 = *plVar20;
      cVar2 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar20,0x10);
      if (bVar7) {
        *plVar20 = lVar17 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar17 == 0) {
      (**(code **)(*plVar19 + 0x10))(plVar19);
      std::__shared_weak_count::__release_weak();
      uVar26 = extraout_s0_03;
      uVar28 = extraout_var_03;
      uVar29 = extraout_var_14;
      uVar31 = extraout_var_25;
    }
  }
  if (plVar21 != (long *)0x0) {
    plVar20 = plVar21 + 2;
    do {
      cVar2 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar20,0x10);
      if (bVar7) {
        *plVar20 = *plVar20 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    plVar20 = plVar21 + 2;
    do {
      cVar2 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar20,0x10);
      if (bVar7) {
        *plVar20 = *plVar20 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  param_1[0x2d] = lVar16;
  lVar17 = param_1[0x2e];
  param_1[0x2e] = (long)plVar21;
  if (lVar17 != 0) {
    std::__shared_weak_count::__release_weak();
    uVar26 = extraout_s0_04;
    uVar28 = extraout_var_04;
    uVar29 = extraout_var_15;
    uVar31 = extraout_var_26;
  }
  if (plVar21 != (long *)0x0) {
    plVar20 = (long *)std::__shared_weak_count::lock();
    if (plVar20 != (long *)0x0) {
      if (lVar16 != 0) {
        *(int *)(lVar16 + 0x18) = (int)param_1[10];
      }
      plVar19 = plVar20 + 1;
      do {
        lVar16 = *plVar19;
        cVar2 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(plVar19,0x10);
        if (bVar7) {
          *plVar19 = lVar16 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar16 == 0) {
        (**(code **)(*plVar20 + 0x10))(plVar20);
        std::__shared_weak_count::__release_weak();
      }
    }
    std::__shared_weak_count::__release_weak();
    uVar26 = extraout_s0_05;
    uVar28 = extraout_var_05;
    uVar29 = extraout_var_16;
    uVar31 = extraout_var_27;
  }
  lVar17 = param_1[0x4e];
  lVar16 = param_1[0x4f];
  if (lVar16 != 0) {
    plVar20 = (long *)(lVar16 + 0x10);
    do {
      cVar2 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar20,0x10);
      if (bVar7) {
        *plVar20 = *plVar20 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    plVar20 = (long *)(lVar16 + 0x10);
    do {
      cVar2 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar20,0x10);
      if (bVar7) {
        *plVar20 = *plVar20 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  param_1[0x2f] = lVar17;
  lVar22 = param_1[0x30];
  param_1[0x30] = lVar16;
  if (lVar22 != 0) {
    std::__shared_weak_count::__release_weak();
    uVar26 = extraout_s0_06;
    uVar28 = extraout_var_06;
    uVar29 = extraout_var_17;
    uVar31 = extraout_var_28;
  }
  if (lVar16 != 0) {
    plVar20 = (long *)std::__shared_weak_count::lock();
    if (plVar20 != (long *)0x0) {
      if (lVar17 != 0) {
        *(int *)(lVar17 + 0x28) = (int)param_1[10];
      }
      plVar19 = plVar20 + 1;
      do {
        lVar16 = *plVar19;
        cVar2 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(plVar19,0x10);
        if (bVar7) {
          *plVar19 = lVar16 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar16 == 0) {
        (**(code **)(*plVar20 + 0x10))(plVar20);
        std::__shared_weak_count::__release_weak();
      }
    }
    std::__shared_weak_count::__release_weak();
    uVar26 = extraout_s0_07;
    uVar28 = extraout_var_07;
    uVar29 = extraout_var_18;
    uVar31 = extraout_var_29;
  }
  lVar17 = param_1[0x50];
  lVar16 = param_1[0x51];
  if (lVar16 != 0) {
    plVar20 = (long *)(lVar16 + 0x10);
    do {
      cVar2 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar20,0x10);
      if (bVar7) {
        *plVar20 = *plVar20 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    plVar20 = (long *)(lVar16 + 0x10);
    do {
      cVar2 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar20,0x10);
      if (bVar7) {
        *plVar20 = *plVar20 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  param_1[0x31] = lVar17;
  lVar22 = param_1[0x32];
  param_1[0x32] = lVar16;
  if (lVar22 != 0) {
    std::__shared_weak_count::__release_weak();
    uVar26 = extraout_s0_08;
    uVar28 = extraout_var_08;
    uVar29 = extraout_var_19;
    uVar31 = extraout_var_30;
  }
  if (lVar16 != 0) {
    plVar20 = (long *)std::__shared_weak_count::lock();
    if (plVar20 != (long *)0x0) {
      if (lVar17 != 0) {
        *(int *)(lVar17 + 0x18) = (int)param_1[10];
      }
      plVar19 = plVar20 + 1;
      do {
        lVar16 = *plVar19;
        cVar2 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(plVar19,0x10);
        if (bVar7) {
          *plVar19 = lVar16 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar16 == 0) {
        (**(code **)(*plVar20 + 0x10))(plVar20);
        std::__shared_weak_count::__release_weak();
      }
    }
    std::__shared_weak_count::__release_weak();
    uVar26 = extraout_s0_09;
    uVar28 = extraout_var_09;
    uVar29 = extraout_var_20;
    uVar31 = extraout_var_31;
  }
  auVar4._4_4_ = uVar28;
  auVar4._0_4_ = uVar26;
  auVar4._8_4_ = uVar29;
  auVar4._12_4_ = uVar31;
  auVar6._4_4_ = uVar35;
  auVar6._0_4_ = fVar24;
  auVar6._8_4_ = uVar37;
  auVar6._12_4_ = uVar39;
  FUN_71031f5f80(auVar4,auVar6,auVar44,auVar45,param_1,param_2);
  if (plVar21 != (long *)0x0) {
    plVar20 = plVar21 + 1;
    do {
      lVar16 = *plVar20;
      cVar2 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar20,0x10);
      if (bVar7) {
        *plVar20 = lVar16 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar16 == 0) {
      (**(code **)(*plVar21 + 0x10))(plVar21);
      std::__shared_weak_count::__release_weak();
    }
  }
  return;
}

