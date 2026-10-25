// addr:      71035bccc0
// offset:    0x35bccc0
// name:      FUN_71035bccc0
// mangled:   
// signature: undefined __cdecl FUN_71035bccc0(undefined1[16] param_1, undefined1[16] param_2, long param_3, uint param_4, undefined8 param_5, byte * * * * param_6, long * * * * param_7, undefined8 param_8, undefined8 param_9, undefined8 param_10)


void FUN_71035bccc0(undefined1 param_1 [16],undefined1 param_2 [16],long param_3,uint param_4,
                   undefined8 param_5,byte ****param_6,long ****param_7,undefined8 param_8,
                   undefined8 param_9,undefined8 param_10)

{
  uint uVar1;
  char cVar2;
  bool bVar3;
  undefined1 auVar4 [16];
  undefined8 uVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  long *plVar8;
  void *pvVar9;
  bool bVar10;
  bool bVar11;
  bool bVar12;
  bool bVar13;
  bool bVar14;
  bool bVar15;
  long lVar16;
  long *plVar17;
  long *plVar18;
  ulong uVar19;
  undefined8 *puVar20;
  long lVar21;
  float *pfVar22;
  uint *puVar23;
  long *****ppppplVar24;
  byte ****ppppbVar25;
  long *plVar26;
  long lVar27;
  long lVar28;
  long *plVar29;
  byte bVar30;
  float fVar31;
  float fVar34;
  float fVar35;
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  float fVar52;
  float fVar53;
  float fVar54;
  float fVar55;
  float fVar56;
  undefined8 uVar57;
  undefined8 uVar58;
  undefined8 uVar59;
  undefined8 uVar60;
  float fVar61;
  undefined8 uVar62;
  undefined8 uVar63;
  float fVar64;
  float fVar65;
  float fVar66;
  undefined8 uVar67;
  float fVar68;
  undefined8 uVar69;
  undefined8 uVar70;
  undefined8 uVar71;
  undefined8 uVar72;
  undefined8 uVar73;
  undefined8 uVar74;
  float fVar75;
  float fVar76;
  float local_280;
  float fStack_27c;
  float fStack_278;
  float fStack_274;
  float local_260;
  float fStack_25c;
  float fStack_258;
  float fStack_254;
  undefined4 local_1f0;
  undefined4 uStack_1ec;
  undefined8 local_1d0;
  undefined1 auStack_1c8 [8];
  long local_1c0;
  long *local_1b8;
  long local_1b0;
  undefined **local_1a8;
  long *local_1a0;
  undefined8 *local_198;
  undefined8 local_190;
  undefined **local_188;
  long local_180;
  long *plStack_178;
  long local_170;
  undefined **local_168;
  long local_160;
  undefined8 *puStack_158;
  undefined8 local_150;
  undefined1 auStack_148 [8];
  long local_140;
  long *local_138;
  long local_130;
  undefined **local_128;
  long local_120;
  undefined8 *local_118;
  undefined8 local_110;
  undefined8 uStack_108;
  long local_100;
  undefined8 uStack_e8;
  long local_e0;
  byte local_c8 [9];
  undefined6 uStack_bf;
  undefined1 local_b9;
  void *local_b8;
  
  lVar21 = DAT_7105336e10;
  lVar16 = *(long *)(DAT_7105337ce8 + 0x598);
  if (lVar16 == 0) {
    return;
  }
  bVar30 = -(*(char *)(param_3 + 0x90) == '\x02');
  plVar17 = (long *)(lVar16 + 0x10);
  local_1f0 = (float)CONCAT13(param_2[3] ^ (param_2[3] ^ 0x41) & bVar30,
                              CONCAT12(param_2[2] ^ (param_2[2] ^ 0xa0) & bVar30,
                                       CONCAT11(param_2[1] ^ param_2[1] & bVar30,
                                                param_2[0] ^ param_2[0] & bVar30)));
  _local_1f0 = CONCAT17(param_2[7] ^ (param_2[7] ^ 0x3f) & bVar30,
                        CONCAT16(param_2[6] ^ (param_2[6] ^ 0x80) & bVar30,
                                 CONCAT15(param_2[5] ^ param_2[5] & bVar30,
                                          CONCAT14(param_2[4] ^ param_2[4] & bVar30,local_1f0))));
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar17,0x10);
    if (bVar3) {
      *plVar17 = *plVar17 + 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  lVar16 = *(long *)(lVar16 + 8);
  std::__shared_weak_count::__release_weak();
  if (lVar16 == -1) {
    return;
  }
  if (*(long *)(DAT_7105337ce8 + 0x598) == 0) {
    return;
  }
  lVar16 = *(long *)(DAT_7105337ce8 + 0x590);
  plVar17 = (long *)(*(long *)(DAT_7105337ce8 + 0x598) + 0x10);
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar17,0x10);
    if (bVar3) {
      *plVar17 = *plVar17 + 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  plVar17 = (long *)std::__shared_weak_count::lock();
  std::__shared_weak_count::__release_weak();
  if ((plVar17 == (long *)0x0) || (lVar16 == 0)) goto LAB_71035bd628;
  fVar36 = 1.0;
  if (*(char *)(param_3 + 0x90) != '\x02') {
    fVar36 = 8.0;
  }
  if (*(char *)(param_3 + 8) == '\0') goto LAB_71035bd628;
  if (*(long *)(param_3 + 0x18) == 0) {
    plVar18 = (long *)0x0;
LAB_71035bce2c:
    plVar29 = (long *)0x0;
    bVar3 = true;
  }
  else {
    plVar18 = (long *)std::__shared_weak_count::lock();
    if (plVar18 == (long *)0x0) goto LAB_71035bce2c;
    plVar29 = *(long **)(param_3 + 0x10);
    plVar26 = plVar18 + 1;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar26,0x10);
      if (bVar3) {
        *plVar26 = *plVar26 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    do {
      lVar27 = *plVar26;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar26,0x10);
      if (bVar3) {
        *plVar26 = lVar27 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar27 == 0) {
      (**(code **)(*plVar18 + 0x10))(plVar18);
      std::__shared_weak_count::__release_weak();
    }
    bVar3 = false;
  }
  uVar19 = (**(code **)(*plVar29 + 0xb0))(plVar29);
  if ((uVar19 & 1) != 0) {
    uVar19 = (**(code **)(*plVar29 + 0x18))(plVar29);
    if (((uVar19 & 1) == 0) || (plVar26 = (long *)plVar29[0x90], plVar26 == (long *)0x0)) {
      lVar27 = 0;
    }
    else {
      plVar26 = (long *)(*plVar26 + (ulong)*(uint *)(plVar26 + 3) * 0x70);
      lVar28 = *plVar26;
      plVar26 = (long *)plVar26[1];
      if (plVar26 != (long *)0x0) {
        plVar8 = plVar26 + 1;
        do {
          cVar2 = '\x01';
          bVar15 = (bool)ExclusiveMonitorPass(plVar8,0x10);
          if (bVar15) {
            *plVar8 = *plVar8 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        do {
          lVar27 = *plVar8;
          cVar2 = '\x01';
          bVar15 = (bool)ExclusiveMonitorPass(plVar8,0x10);
          if (bVar15) {
            *plVar8 = lVar27 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar27 == 0) {
          (**(code **)(*plVar26 + 0x10))(plVar26);
          std::__shared_weak_count::__release_weak();
        }
      }
      lVar27 = 0;
      if (lVar28 != 0) {
        lVar27 = *(long *)(*(long *)(lVar28 + 0x40) + 0x68);
      }
    }
    FUN_7103662550(&uStack_e8,*(uint *)(lVar27 + 0x18) ^ (int)*(uint *)(lVar27 + 0x18) >> 0x1f,
                   lVar27 + 0x20);
    lVar28 = lVar27 + 0x48;
    FUN_710388e720(&uStack_108,*(uint *)(lVar27 + 0x40) ^ (int)*(uint *)(lVar27 + 0x40) >> 0x1f,
                   lVar28);
    puVar20 = (undefined8 *)(**(code **)(*plVar29 + 0x158))(plVar29);
    uVar57 = *puVar20;
    uVar58 = puVar20[1];
    uVar59 = puVar20[2];
    uVar60 = puVar20[3];
    uVar62 = puVar20[4];
    uVar63 = puVar20[5];
    uVar74 = puVar20[6];
    uVar67 = puVar20[7];
    local_c8[0] = 0x1c;
    local_b8 = (void *)0x0;
    uStack_bf = 0x6b6e49746573;
    local_c8[1] = 0x55;
    local_c8[2] = 0x70;
    local_c8[3] = 100;
    local_c8[4] = 0x61;
    local_c8[5] = 0x74;
    local_c8[6] = 0x65;
    local_c8[7] = 0x52;
    local_c8[8] = 0x65;
    local_b9 = 0;
    FUN_71035be5e0(lVar16,(long *****)local_c8,lVar28,param_6,param_7,param_8,param_9,param_10);
    pvVar9 = local_b8;
    if ((local_c8[0] & 1) != 0) {
      nu::VirtualFreeHook(local_b8);
      FUN_710392eb40((ulong)pvVar9);
    }
    if (7 < param_4) {
LAB_71035bd68c:
                    /* WARNING: Subroutine does not return */
      abort();
    }
    fVar45 = param_1._4_4_;
    lVar21 = lVar21 + (ulong)param_4 * 0x20;
    if ((*(long **)(lVar21 + 0x300) == (long *)0x0) ||
       (**(long **)(lVar21 + 0x300) != *(long *)(lVar21 + 0x308))) {
      plVar26 = (long *)0x0;
    }
    else {
      plVar26 = *(long **)(lVar21 + 0x2f8);
    }
    fVar38 = param_1._0_4_;
    fVar64 = fVar38 - uStack_1ec;
    fVar65 = fVar45 + -1.0;
    fVar66 = fVar38 + uStack_1ec;
    (**(code **)(*plVar26 + 0x18))(local_c8,plVar26);
    plVar8 = (long *)CONCAT17(local_b9,CONCAT61(uStack_bf,local_c8[8]));
    nu::ModuleInitializer<nu::GraphicsModule,nu::GraphicsModuleDesc>::Instance();
    lVar21 = nu::ModuleInitializer<nu::GraphicsModule,nu::GraphicsModuleDesc>::Instance();
    ppppbVar25 = (byte ****)0x0;
    pfVar22 = (float *)(**(code **)(*plVar8 + 0x10))(plVar8,*(undefined8 *)(lVar21 + 0x58),0);
    if (pfVar22 != (float *)0x0) {
      *pfVar22 = fVar64;
      pfVar22[1] = fVar65;
      pfVar22[3] = 0.0;
      pfVar22[4] = fVar66;
      pfVar22[5] = fVar45 + 4.0;
      fVar40 = param_1._8_4_;
      pfVar22[2] = fVar40 - local_1f0;
      pfVar22[6] = fVar40 + local_1f0;
      pfVar22[7] = 0.0;
      pfVar22[8] = fVar38;
      pfVar22[9] = fVar45;
      pfVar22[10] = fVar40;
      pfVar22[0xb] = param_1._12_4_;
      pfVar22[0xc] = local_1f0 + fVar36;
      pfVar22[0xd] = uStack_1ec + fVar36;
      pfVar22[0xe] = local_1f0;
      pfVar22[0xf] = uStack_1ec;
      pfVar22[0x11] = 0.0;
      plVar8 = (long *)CONCAT17(local_b9,CONCAT61(uStack_bf,local_c8[8]));
      nu::ModuleInitializer<nu::GraphicsModule,nu::GraphicsModuleDesc>::Instance();
      lVar21 = nu::ModuleInitializer<nu::GraphicsModule,nu::GraphicsModuleDesc>::Instance();
      (**(code **)(*plVar8 + 0x18))(plVar8,*(undefined8 *)(lVar21 + 0x58));
    }
    (**(code **)(*plVar26 + 0x20))(auStack_148,plVar26);
    local_118 = (undefined8 *)0x0;
    local_110 = 0;
    local_128 = &PTR_FUN_7105230ac0;
    local_120 = 0;
    if ((local_138 != (long *)0x0) && (*local_138 == local_130)) {
      local_120 = local_140;
      if (local_140 == 0) {
        local_118 = (undefined8 *)0x0;
        local_110 = 0;
      }
      else {
        local_118 = *(undefined8 **)(local_140 + 8);
        local_110 = *local_118;
      }
    }
    local_1a8 = (undefined **)0x100000005;
    FUN_71035bf800(lVar16,(long)&local_128,(undefined4 *)&local_1a8,ppppbVar25,param_7,param_8,
                   param_9,param_10);
    plVar26 = *(long **)(param_3 + 0x30);
    if (plVar26 != (long *)0x0) {
      local_260 = (float)uVar57;
      fStack_25c = (float)((ulong)uVar57 >> 0x20);
      fStack_258 = (float)uVar58;
      fStack_254 = (float)((ulong)uVar58 >> 0x20);
      fVar46 = (float)uVar59;
      fVar49 = (float)((ulong)uVar59 >> 0x20);
      fVar52 = (float)uVar60;
      fVar55 = (float)((ulong)uVar60 >> 0x20);
      fVar36 = local_260 * 0.0 + fVar46 * 0.0;
      fVar38 = fStack_25c * 0.0 + fVar49 * 0.0;
      fVar40 = fStack_258 * 0.0 + fVar52 * 0.0;
      fVar43 = fStack_254 * 0.0 + fVar55 * 0.0;
      local_280 = (float)uVar62;
      fStack_27c = (float)((ulong)uVar62 >> 0x20);
      fStack_278 = (float)uVar63;
      fStack_274 = (float)((ulong)uVar63 >> 0x20);
      fVar47 = (float)uVar74;
      fVar50 = (float)((ulong)uVar74 >> 0x20);
      fVar53 = (float)uVar67;
      fVar56 = (float)((ulong)uVar67 >> 0x20);
      uVar59 = CONCAT44(fStack_25c + fVar49 * 0.0 + fStack_27c * 0.0 + fVar50 * 0.0,
                        local_260 + fVar46 * 0.0 + local_280 * 0.0 + fVar47 * 0.0);
      uVar62 = CONCAT44(fStack_254 + fVar55 * 0.0 + fStack_274 * 0.0 + fVar56 * 0.0,
                        fStack_258 + fVar52 * 0.0 + fStack_278 * 0.0 + fVar53 * 0.0);
      uVar57 = CONCAT44(fVar49 + fStack_25c * 0.0 + fStack_27c * 0.0 + fVar50 * 0.0,
                        fVar46 + local_260 * 0.0 + local_280 * 0.0 + fVar47 * 0.0);
      uVar58 = CONCAT44(fVar55 + fStack_254 * 0.0 + fStack_274 * 0.0 + fVar56 * 0.0,
                        fVar52 + fStack_258 * 0.0 + fStack_278 * 0.0 + fVar53 * 0.0);
      uVar60 = CONCAT44(fStack_27c + fVar38 + fVar50 * 0.0,local_280 + fVar36 + fVar47 * 0.0);
      uVar63 = CONCAT44(fStack_274 + fVar43 + fVar56 * 0.0,fStack_278 + fVar40 + fVar53 * 0.0);
      fVar36 = fVar47 + fVar36 + local_280 * 0.0;
      fVar38 = fVar50 + fVar38 + fStack_27c * 0.0;
      fVar40 = fVar53 + fVar40 + fStack_278 * 0.0;
      fVar43 = fVar56 + fVar43 + fStack_274 * 0.0;
      do {
        uVar19 = plVar26[2];
        lVar21 = plVar26[3];
        lVar28 = *(long *)(lVar21 + 8);
        lVar27 = FUN_710389b550(local_100,(byte *)(lVar28 + 0x30));
        uVar74 = CONCAT44(fVar38,fVar36);
        uVar67 = uVar59;
        uVar69 = uVar62;
        uVar70 = uVar57;
        uVar71 = uVar58;
        uVar72 = uVar60;
        uVar73 = uVar63;
        fVar75 = fVar40;
        fVar76 = fVar43;
        if (lVar27 != 0) {
          uVar74 = CONCAT44(fVar38,fVar36);
          if (*(int *)(lVar27 + 0x30) != -1) {
            pfVar22 = (float *)(*(long *)(local_100 + 0x18) + (long)*(int *)(lVar27 + 0x30) * 0x40);
            fVar39 = *pfVar22;
            fVar42 = pfVar22[1];
            fVar61 = pfVar22[2];
            fVar68 = pfVar22[3];
            fVar41 = (float)*(undefined8 *)(pfVar22 + 6);
            fVar44 = (float)((ulong)*(undefined8 *)(pfVar22 + 6) >> 0x20);
            fVar75 = (float)*(undefined8 *)(pfVar22 + 4);
            fVar76 = (float)((ulong)*(undefined8 *)(pfVar22 + 4) >> 0x20);
            fVar31 = pfVar22[8];
            fVar34 = pfVar22[9];
            fVar35 = pfVar22[10];
            fVar37 = pfVar22[0xb];
            fVar48 = (float)*(undefined8 *)(pfVar22 + 0xc);
            fVar51 = (float)((ulong)*(undefined8 *)(pfVar22 + 0xc) >> 0x20);
            fVar54 = (float)*(undefined8 *)(pfVar22 + 0xe);
            uVar70 = CONCAT44(fStack_25c * fVar75 + fVar49 * fVar76 + fStack_27c * fVar41 +
                              fVar50 * fVar44,
                              local_260 * fVar75 + fVar46 * fVar76 + local_280 * fVar41 +
                              fVar47 * fVar44);
            uVar71 = CONCAT44(fStack_254 * fVar75 + fVar55 * fVar76 + fStack_274 * fVar41 +
                              fVar56 * fVar44,
                              fStack_258 * fVar75 + fVar52 * fVar76 + fStack_278 * fVar41 +
                              fVar53 * fVar44);
            fVar76 = (float)((ulong)*(undefined8 *)(pfVar22 + 0xe) >> 0x20);
            uVar74 = CONCAT44(fStack_25c * fVar48 + fVar49 * fVar51 + fStack_27c * fVar54 +
                              fVar50 * fVar76,
                              local_260 * fVar48 + fVar46 * fVar51 + local_280 * fVar54 +
                              fVar47 * fVar76);
            fVar75 = fStack_258 * fVar48 + fVar52 * fVar51 + fStack_278 * fVar54 + fVar53 * fVar76;
            fVar76 = fStack_254 * fVar48 + fVar55 * fVar51 + fStack_274 * fVar54 + fVar56 * fVar76;
            uVar67 = CONCAT44(fStack_25c * fVar39 + fVar49 * fVar42 + fStack_27c * fVar61 +
                              fVar50 * fVar68,
                              local_260 * fVar39 + fVar46 * fVar42 + local_280 * fVar61 +
                              fVar47 * fVar68);
            uVar69 = CONCAT44(fStack_254 * fVar39 + fVar55 * fVar42 + fStack_274 * fVar61 +
                              fVar56 * fVar68,
                              fStack_258 * fVar39 + fVar52 * fVar42 + fStack_278 * fVar61 +
                              fVar53 * fVar68);
            uVar72 = CONCAT44(fStack_25c * fVar31 + fVar49 * fVar34 + fStack_27c * fVar35 +
                              fVar50 * fVar37,
                              local_260 * fVar31 + fVar46 * fVar34 + local_280 * fVar35 +
                              fVar47 * fVar37);
            uVar73 = CONCAT44(fStack_254 * fVar31 + fVar55 * fVar34 + fStack_274 * fVar35 +
                              fVar56 * fVar37,
                              fStack_258 * fVar31 + fVar52 * fVar34 + fStack_278 * fVar35 +
                              fVar53 * fVar37);
          }
        }
        if (*(char *)(lVar21 + 0xe8) == '\0') {
LAB_71035bd248:
          fVar68 = (float)((ulong)uVar67 >> 0x20);
          uVar5 = *(undefined8 *)*(undefined1 (*) [12])(lVar28 + 0xac);
          fVar31 = (float)uVar5;
          fVar34 = (float)((ulong)uVar5 >> 0x20);
          fVar37 = (fVar31 - *(float *)(lVar28 + 0xa0)) * 0.5;
          fVar39 = (fVar34 - *(float *)(lVar28 + 0xa4)) * 0.5;
          fVar42 = (*(float *)(lVar28 + 0xb4) - *(float *)(lVar28 + 0xa8)) * 0.5;
          fVar31 = fVar31 - fVar37;
          fVar34 = fVar34 - fVar39;
          fVar35 = SUB124(*(undefined1 (*) [12])(lVar28 + 0xac),8) - fVar42;
          fVar41 = (float)((ulong)uVar70 >> 0x20);
          fVar44 = (float)((ulong)uVar72 >> 0x20);
          fVar61 = (float)((ulong)uVar74 >> 0x20) +
                   fVar44 * fVar35 + fVar68 * fVar31 + fVar41 * fVar34;
          fVar31 = (float)uVar74 +
                   (float)uVar72 * fVar35 + (float)uVar67 * fVar31 + (float)uVar70 * fVar34;
          fVar34 = ABS((float)uVar67) * fVar37 + ABS((float)uVar70) * fVar39 +
                   ABS((float)uVar72) * fVar42;
          fVar37 = ABS(fVar68) * fVar37 + ABS(fVar41) * fVar39 + ABS(fVar44) * fVar42;
          fVar35 = fVar31 - fVar34;
          fVar34 = fVar34 + fVar31;
          fVar31 = fVar37 + fVar61;
          bVar15 = false;
          bVar11 = false;
          bVar13 = false;
          if (fVar61 - fVar37 <= fVar45 + 4.0) {
            bVar15 = false;
            bVar11 = false;
            bVar13 = true;
            if (!NAN(fVar65) && !NAN(fVar31)) {
              bVar15 = fVar65 < fVar31;
              bVar11 = fVar65 == fVar31;
              bVar13 = false;
            }
          }
          bVar10 = false;
          bVar12 = false;
          bVar14 = false;
          if (bVar11 || bVar15 != bVar13) {
            bVar10 = false;
            bVar12 = false;
            bVar14 = true;
            if (!NAN(fVar64) && !NAN(fVar34)) {
              bVar10 = fVar64 < fVar34;
              bVar12 = fVar64 == fVar34;
              bVar14 = false;
            }
          }
          bVar15 = false;
          bVar11 = false;
          bVar13 = false;
          if (bVar12 || bVar10 != bVar14) {
            bVar15 = false;
            bVar11 = false;
            bVar13 = true;
            if (!NAN(fVar35) && !NAN(fVar66)) {
              bVar15 = fVar35 < fVar66;
              bVar11 = fVar35 == fVar66;
              bVar13 = false;
            }
          }
          if (bVar11 || bVar15 != bVar13) {
            if (*(ulong *)(local_e0 + 0x360) <= (ulong)*(uint *)(lVar21 + 0x20))
            goto LAB_71035bd68c;
            puVar23 = (uint *)(*(long *)(local_e0 + 0x358) + (ulong)*(uint *)(lVar21 + 0x20) * 0x28)
            ;
            uVar1 = *puVar23;
            FUN_710359c770((undefined8 *)local_c8,uVar1 ^ (int)uVar1 >> 0x1f,(long)(puVar23 + 2));
            plVar8 = (long *)CONCAT17(local_b9,CONCAT61(uStack_bf,local_c8[8]));
            (**(code **)(*plVar8 + 0x28))(&local_128,plVar8,0);
            local_160 = local_120;
            puStack_158 = local_118;
            local_168 = &PTR_FUN_71052302c0;
            local_150 = local_110;
            FUN_71035bf0e0(lVar16,(long)&local_168,0,ppppbVar25,param_7,param_8,param_9,param_10);
            FUN_71035fd030((undefined8 *)local_c8,
                           *(uint *)(local_e0 + 0x5f0) ^ (int)*(uint *)(local_e0 + 0x5f0) >> 0x1f,
                           local_e0 + 0x5f8);
            plVar8 = (long *)CONCAT17(local_b9,CONCAT61(uStack_bf,local_c8[8]));
            (**(code **)(*plVar8 + 0x28))(auStack_148,plVar8,0);
            local_180 = local_140;
            plStack_178 = local_138;
            local_188 = &PTR_FUN_71052302c0;
            local_170 = local_130;
            FUN_71035bf0e0(lVar16,(long)&local_188,1,ppppbVar25,param_7,param_8,param_9,param_10);
            if (*(ulong *)(local_e0 + 0x360) <= (ulong)*(uint *)(lVar21 + 0x60))
            goto LAB_71035bd68c;
            puVar23 = (uint *)(*(long *)(local_e0 + 0x358) + (ulong)*(uint *)(lVar21 + 0x60) * 0x28)
            ;
            ppppplVar24 = (long *****)(puVar23 + 2);
            uVar1 = *puVar23;
            FUN_710359c770((undefined8 *)local_c8,uVar1 ^ (int)uVar1 >> 0x1f,(long)ppppplVar24);
            plVar8 = (long *)CONCAT17(local_b9,CONCAT61(uStack_bf,local_c8[8]));
            (**(code **)(*plVar8 + 0x30))(local_c8,plVar8,*(undefined4 *)(param_3 + 0x48));
            FUN_71035bf300(lVar16,(long)local_c8,ppppplVar24,ppppbVar25,param_7,param_8,param_9,
                           param_10);
            (**(code **)(**(long **)(lVar21 + 200) + 0x18))(&local_1a8);
            plVar8 = local_1a0;
            nu::ModuleInitializer<nu::GraphicsModule,nu::GraphicsModuleDesc>::Instance();
            lVar27 = nu::ModuleInitializer<nu::GraphicsModule,nu::GraphicsModuleDesc>::Instance();
            ppppbVar25 = (byte ****)0x0;
            puVar20 = (undefined8 *)
                      (**(code **)(*plVar8 + 0x10))(plVar8,*(undefined8 *)(lVar27 + 0x58),0);
            plVar8 = local_1a0;
            if (puVar20 != (undefined8 *)0x0) {
              auVar7._8_8_ = uVar69;
              auVar7._0_8_ = uVar67;
              *puVar20 = uVar67;
              auVar32 = NEON_ext(auVar7,auVar7,8,1);
              puVar20[1] = auVar32._0_8_;
              auVar6._8_8_ = uVar71;
              auVar6._0_8_ = uVar70;
              puVar20[2] = uVar70;
              auVar32 = NEON_ext(auVar6,auVar6,8,1);
              puVar20[3] = auVar32._0_8_;
              auVar4._8_4_ = fVar75;
              auVar4._0_8_ = uVar74;
              auVar32._8_4_ = fVar75;
              auVar32._0_8_ = uVar74;
              auVar33._8_8_ = uVar73;
              auVar33._0_8_ = uVar72;
              puVar20[4] = uVar72;
              auVar33 = NEON_ext(auVar33,auVar33,8,1);
              puVar20[6] = uVar74;
              puVar20[5] = auVar33._0_8_;
              auVar32._12_4_ = fVar76;
              auVar4._12_4_ = fVar76;
              auVar32 = NEON_ext(auVar32,auVar4,8,1);
              puVar20[7] = auVar32._0_8_;
              nu::ModuleInitializer<nu::GraphicsModule,nu::GraphicsModuleDesc>::Instance();
              lVar27 = nu::ModuleInitializer<nu::GraphicsModule,nu::GraphicsModuleDesc>::Instance();
              (**(code **)(*plVar8 + 0x18))(plVar8,*(undefined8 *)(lVar27 + 0x58));
            }
            (**(code **)(**(long **)(lVar21 + 200) + 0x20))(auStack_1c8);
            local_198 = (undefined8 *)0x0;
            local_190 = 0;
            local_1a0 = (long *)0x0;
            local_1a8 = &PTR_FUN_7105230ac0;
            if ((local_1b8 != (long *)0x0) && (*local_1b8 == local_1b0)) {
              local_1a0 = (long *)local_1c0;
              if (local_1c0 == 0) {
                local_198 = (undefined8 *)0x0;
                local_190 = 0;
              }
              else {
                local_198 = *(undefined8 **)(local_1c0 + 8);
                local_190 = *local_198;
              }
            }
            local_1d0 = 5;
            FUN_71035bf800(lVar16,(long)&local_1a8,(undefined4 *)&local_1d0,ppppbVar25,param_7,
                           param_8,param_9,param_10);
            local_1a0 = (long *)0x0;
            local_1a8 = (undefined **)0x24;
            builtin_strncpy((char *)((ulong)&local_1a8 | 1),"ResetInkLifetimeCS",0x12);
            local_198 = (undefined8 *)0x0;
            FUN_71035bfa20(lVar16,(byte *)&local_1a8,*(uint *)(lVar28 + 0x50) / 0x300 + 1);
          }
        }
        else {
          bVar15 = FUN_71035e2c90(plVar29,uVar19);
          if (bVar15) {
            FUN_71035e2960((long)plVar29,uVar19,1);
            goto LAB_71035bd248;
          }
        }
        plVar26 = (long *)*plVar26;
      } while (plVar26 != (long *)0x0);
    }
  }
  if (!bVar3) {
    plVar29 = plVar18 + 1;
    do {
      lVar21 = *plVar29;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar29,0x10);
      if (bVar3) {
        *plVar29 = lVar21 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar21 == 0) {
      (**(code **)(*plVar18 + 0x10))(plVar18);
      std::__shared_weak_count::__release_weak();
    }
  }
LAB_71035bd628:
  if (plVar17 != (long *)0x0) {
    plVar18 = plVar17 + 1;
    do {
      lVar21 = *plVar18;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar18,0x10);
      if (bVar3) {
        *plVar18 = lVar21 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar21 == 0) {
      (**(code **)(*plVar17 + 0x10))(plVar17);
      std::__shared_weak_count::__release_weak();
    }
  }
  return;
}

