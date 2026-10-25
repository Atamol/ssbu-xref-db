// addr:      71030fa3c0
// offset:    0x30fa3c0
// name:      FUN_71030fa3c0
// mangled:   
// signature: undefined __cdecl FUN_71030fa3c0(undefined8 param_1, long * param_2)


void FUN_71030fa3c0(undefined8 param_1,long *param_2)

{
  bool bVar1;
  char cVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined2 uVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined8 uVar14;
  ulong uVar15;
  long lVar16;
  long *plVar17;
  long *plVar18;
  ulong uVar19;
  long *plVar20;
  long *plVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  undefined1 auVar26 [12];
  undefined1 auVar27 [12];
  float fVar32;
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar33 [12];
  undefined1 auVar34 [12];
  undefined1 auVar35 [16];
  undefined1 auVar37 [16];
  undefined1 uVar39;
  undefined1 uVar40;
  undefined1 uVar41;
  undefined1 uVar42;
  undefined1 uVar43;
  undefined1 uVar44;
  byte bVar45;
  byte bVar46;
  byte bVar47;
  byte bVar48;
  int iVar49;
  float fVar50;
  undefined1 auVar51 [12];
  int iVar63;
  int iVar64;
  undefined1 auVar52 [12];
  float fVar62;
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  int iVar65;
  float fVar71;
  float fVar72;
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  float fVar73;
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  undefined1 auVar77 [16];
  undefined1 auVar78 [16];
  undefined1 auVar79 [16];
  undefined1 auVar80 [16];
  undefined1 auVar81 [16];
  undefined1 auVar82 [16];
  undefined1 auVar83 [16];
  undefined1 auVar84 [16];
  undefined1 auVar85 [16];
  float local_f0;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined1 auVar36 [16];
  undefined1 auVar38 [16];
  undefined1 auVar56 [16];
  undefined1 auVar61 [16];
  
  plVar18 = (long *)param_2[0x92c];
  fVar23 = (float)param_1;
  if (plVar18 == (long *)0x0) goto LAB_71030fa4f4;
  if ((char)plVar18[3] == '\0') {
    if (*(char *)((long)plVar18 + 0x19) != '\0') {
      *(undefined1 *)((long)plVar18 + 0x19) = 0;
    }
LAB_71030fa438:
    if (*(char *)((long)plVar18 + 0x24) == '\0') goto LAB_71030fa46c;
LAB_71030fa440:
    fVar24 = *(float *)(plVar18 + 4);
    *(float *)(plVar18 + 4) = fVar24 - fVar23;
    if (0.0 <= fVar24 - fVar23) goto LAB_71030fa478;
    *(undefined4 *)(plVar18 + 4) = 0;
    *(undefined2 *)((long)plVar18 + 0x24) = 0x100;
    cVar2 = (char)plVar18[1];
  }
  else {
    fVar24 = *(float *)((long)plVar18 + 0x14) - fVar23;
    *(float *)((long)plVar18 + 0x14) = fVar24;
    if (0.0 <= fVar24) goto LAB_71030fa438;
    *(undefined4 *)((long)plVar18 + 0x14) = 0;
    *(undefined2 *)(plVar18 + 3) = 0x100;
    if (*(char *)((long)plVar18 + 0x24) != '\0') goto LAB_71030fa440;
LAB_71030fa46c:
    if (*(char *)((long)plVar18 + 0x25) != '\0') {
      *(undefined1 *)((long)plVar18 + 0x25) = 0;
    }
LAB_71030fa478:
    cVar2 = (char)plVar18[1];
  }
  if (cVar2 != '\0') {
    *(float *)((long)plVar18 + 0xc) = *(float *)((long)plVar18 + 0xc) + fVar23;
    if ((*(float *)((long)plVar18 + 0x14) == 0.0) && (*(char *)((long)plVar18 + 0x19) != '\0')) {
      FUN_71025f74f0(*(float *)(*(long *)(*plVar18 + 0x10) + 0x148),
                     *(long *)(*(long *)(*(long *)(*plVar18 + 8) + 0x318) + 0x10),(byte *)"light01")
      ;
    }
    if ((*(float *)(plVar18 + 4) == 0.0) && (*(char *)((long)plVar18 + 0x25) != '\0')) {
      FUN_71025f74f0(*(float *)(*(long *)(*plVar18 + 0x10) + 0x150),
                     *(long *)(*(long *)(*(long *)(*plVar18 + 8) + 0x318) + 0x10),(byte *)"light00")
      ;
    }
  }
LAB_71030fa4f4:
  FUN_71030eff80(fVar23,(long)(param_2 + 0x5e));
  FUN_71026249a0(*(long *)(param_2[1] + 0x308),(undefined8 *)((long)param_2 + 0x1c));
  FUN_7102625190(0,*(long *)(param_2[1] + 0x308));
  lVar16 = param_2[0x878];
  if (param_2[0x879] != lVar16) {
    uVar15 = 0;
    uVar19 = 1;
    do {
      (**(code **)(**(long **)(lVar16 + uVar15 * 8) + 0x10))();
      lVar16 = param_2[0x878];
      bVar1 = uVar19 < (ulong)(param_2[0x879] - lVar16 >> 3);
      uVar15 = uVar19;
      uVar19 = (ulong)((int)uVar19 + 1);
    } while (bVar1);
  }
  (**(code **)(*param_2 + 0xa8))(param_1,param_2);
  lVar16 = param_2[0x878];
  if (param_2[0x879] != lVar16) {
    uVar15 = 0;
    uVar19 = 1;
    do {
      (**(code **)(**(long **)(lVar16 + uVar15 * 8) + 0x18))(param_1);
      lVar16 = param_2[0x878];
      bVar1 = uVar19 < (ulong)(param_2[0x879] - lVar16 >> 3);
      uVar15 = uVar19;
      uVar19 = (ulong)((int)uVar19 + 1);
    } while (bVar1);
  }
  plVar18 = (long *)param_2[0x92c];
  if ((((plVar18 != (long *)0x0) && ((char)plVar18[1] != '\0')) && ((char)plVar18[3] == '\0')) &&
     (*(char *)((long)plVar18 + 0x24) != '\0')) {
    *(float *)(*(long *)(*(long *)(*(long *)(*plVar18 + 8) + 0x318) + 0x10) + 0x48) =
         *(float *)((long)plVar18 + 0xc) - *(float *)(plVar18 + 2);
  }
  plVar17 = *(long **)(*(long *)(param_2[1] + 0x300) + 0x18);
  plVar18 = (long *)*plVar17;
  do {
    if (plVar18 == (long *)plVar17[1]) goto LAB_71030fa9a0;
    lVar16 = *plVar18;
    plVar18 = plVar18 + 1;
  } while ((*(ulong *)(lVar16 + 0xa0) & 0xffffffffff) != 0x15b5ac5511);
  plVar18 = *(long **)(lVar16 + 0x130);
  if (plVar18 != (long *)0x0) {
    if ((param_2[0x24f] == 0) || (*(char *)(param_2[0x24f] + 0x110) == '\0')) {
      FUN_71025f55b0((undefined8 *)*plVar18,(undefined8 *)plVar18[1],"IPP0001");
    }
    else {
      uStack_c8 = 0;
      local_d0 = 0x3f800000;
      uStack_b8 = 0;
      uStack_c0 = 0x3f80000000000000;
      uStack_a8 = 0x3f800000;
      local_b0 = 0;
      uStack_98 = 0x3f80000000000000;
      local_a0 = 0;
      uVar15 = FUN_71030ef790((long)(param_2 + 0x24d),&local_d0,(char *)(lVar16 + 0xcc));
      uVar14 = local_a0;
      if ((uVar15 & 1) != 0) {
        auVar84._8_8_ = uStack_c8;
        auVar84._0_8_ = local_d0;
        auVar12._8_8_ = uStack_b8;
        auVar12._0_8_ = uStack_c0;
        fVar25 = (float)local_d0;
        fVar23 = fVar25 * fVar25;
        fVar24 = (float)uStack_c0 * (float)uStack_c0;
        uVar39 = (undefined1)((uint)fVar24 >> 8);
        uVar40 = (undefined1)((uint)fVar24 >> 0x10);
        uVar41 = (undefined1)((uint)fVar24 >> 0x18);
        fVar22 = (float)local_b0 * (float)local_b0;
        uVar42 = (undefined1)((uint)fVar22 >> 8);
        uVar43 = (undefined1)((uint)fVar22 >> 0x10);
        uVar44 = (undefined1)((uint)fVar22 >> 0x18);
        auVar57[4] = SUB41(fVar24,0);
        auVar57._0_4_ = fVar23;
        auVar57[5] = uVar39;
        auVar57[6] = uVar40;
        auVar57[7] = uVar41;
        auVar57[8] = SUB41(fVar22,0);
        auVar57[9] = uVar42;
        auVar57[10] = uVar43;
        auVar57[0xb] = uVar44;
        auVar57._12_4_ = 0;
        auVar69[4] = SUB41(fVar24,0);
        auVar69._0_4_ = fVar23;
        auVar69[5] = uVar39;
        auVar69[6] = uVar40;
        auVar69[7] = uVar41;
        auVar69[8] = SUB41(fVar22,0);
        auVar69[9] = uVar42;
        auVar69[10] = uVar43;
        auVar69[0xb] = uVar44;
        auVar69._12_4_ = 0;
        auVar57 = NEON_ext(auVar57,auVar69,8,1);
        fVar23 = auVar57._0_4_ + fVar23;
        fVar24 = auVar57._4_4_ + fVar24;
        fVar22 = fVar23 + fVar24;
        fVar23 = fVar23 + fVar24;
        uVar39 = SUB41(fVar23,0);
        uVar40 = (undefined1)((uint)fVar23 >> 8);
        uVar41 = (undefined1)((uint)fVar23 >> 0x10);
        uVar42 = (undefined1)((uint)fVar23 >> 0x18);
        auVar77[4] = uVar39;
        auVar77._0_4_ = fVar22;
        auVar77[5] = uVar40;
        auVar77[6] = uVar41;
        auVar77[7] = uVar42;
        auVar77[8] = SUB41(fVar22,0);
        auVar77[9] = (char)((uint)fVar22 >> 8);
        auVar77[10] = (char)((uint)fVar22 >> 0x10);
        auVar77[0xb] = (char)((uint)fVar22 >> 0x18);
        auVar77[0xc] = uVar39;
        auVar77[0xd] = uVar40;
        auVar77[0xe] = uVar41;
        auVar77[0xf] = uVar42;
        auVar57 = NEON_frsqrte(auVar77,4);
        auVar66._0_4_ = auVar57._0_4_ * fVar22;
        auVar66._4_4_ = auVar57._4_4_ * fVar23;
        auVar66._8_4_ = auVar57._8_4_ * fVar22;
        uVar6 = (undefined2)(CONCAT15(uVar40,CONCAT14(uVar39,fVar22)) >> 0x20);
        auVar66._12_4_ = auVar57._12_4_ * (float)CONCAT13(uVar42,CONCAT12(uVar41,uVar6));
        auVar69 = NEON_frsqrts(auVar57,auVar66,4);
        auVar53._0_4_ = auVar57._0_4_ * auVar69._0_4_;
        auVar53._4_4_ = auVar57._4_4_ * auVar69._4_4_;
        auVar53._8_4_ = auVar57._8_4_ * auVar69._8_4_;
        auVar53._12_4_ = auVar57._12_4_ * auVar69._12_4_;
        auVar67._0_4_ = fVar22 * auVar53._0_4_;
        auVar67._4_4_ = fVar23 * auVar53._4_4_;
        auVar67._8_4_ = fVar22 * auVar53._8_4_;
        auVar67._12_4_ = (float)CONCAT13(uVar42,CONCAT12(uVar41,uVar6)) * auVar53._12_4_;
        iVar49 = -(uint)(fVar22 == 0.0);
        auVar57 = NEON_frsqrts(auVar53,auVar67,4);
        fVar22 = (float)((ulong)local_d0 >> 0x20);
        fVar71 = (float)((ulong)uStack_c0 >> 0x20);
        fVar25 = fVar25 * auVar53._0_4_ * auVar57._0_4_;
        fVar72 = (float)((ulong)local_b0 >> 0x20);
        auVar69 = NEON_ext(auVar12,auVar12,8,1);
        auVar57 = NEON_ext(auVar84,auVar84,8,1);
        auVar54._0_4_ = fVar22 * fVar22;
        auVar54._4_4_ = fVar71 * fVar71;
        auVar54._8_4_ = fVar72 * fVar72;
        auVar54._12_4_ = 0;
        auVar77 = NEON_ext(auVar54,auVar54,8,1);
        fVar24 = auVar77._0_4_ + auVar54._0_4_;
        fVar62 = auVar77._4_4_ + auVar54._4_4_;
        fVar23 = fVar24 + fVar62;
        fVar24 = fVar24 + fVar62;
        bVar45 = SUB41(fVar25,0) & ~(byte)iVar49;
        bVar46 = (byte)((uint)fVar25 >> 8) & ~(byte)((uint)iVar49 >> 8);
        bVar47 = (byte)((uint)fVar25 >> 0x10) & ~(byte)((uint)iVar49 >> 0x10);
        bVar48 = (byte)((uint)fVar25 >> 0x18) & ~(byte)((uint)iVar49 >> 0x18);
        auVar55._8_8_ = CONCAT44(fVar24,fVar23);
        auVar55._0_8_ = CONCAT44(fVar24,fVar23);
        auVar77 = NEON_frsqrte(auVar55,4);
        auVar81._0_4_ = auVar77._0_4_ * fVar23;
        auVar81._4_4_ = auVar77._4_4_ * fVar24;
        auVar81._8_4_ = auVar77._8_4_ * fVar23;
        auVar81._12_4_ = auVar77._12_4_ * fVar24;
        auVar84 = NEON_frsqrts(auVar77,auVar81,4);
        auVar74._0_4_ = auVar77._0_4_ * auVar84._0_4_;
        auVar74._4_4_ = auVar77._4_4_ * auVar84._4_4_;
        auVar74._8_4_ = auVar77._8_4_ * auVar84._8_4_;
        auVar74._12_4_ = auVar77._12_4_ * auVar84._12_4_;
        auVar82._0_4_ = fVar23 * auVar74._0_4_;
        auVar82._4_4_ = fVar24 * auVar74._4_4_;
        auVar82._8_4_ = fVar23 * auVar74._8_4_;
        auVar82._12_4_ = fVar24 * auVar74._12_4_;
        iVar49 = -(uint)(fVar23 == 0.0);
        iVar63 = -(uint)(fVar24 == 0.0);
        iVar64 = -(uint)(fVar23 == 0.0);
        iVar65 = -(uint)(fVar24 == 0.0);
        auVar77 = NEON_frsqrts(auVar74,auVar82,4);
        fVar22 = fVar22 * auVar74._0_4_ * auVar77._0_4_;
        fVar71 = fVar71 * auVar74._4_4_ * auVar77._4_4_;
        fVar72 = fVar72 * auVar74._8_4_ * auVar77._8_4_;
        fVar73 = auVar74._12_4_ * auVar77._12_4_ * 0.0;
        fVar50 = (float)uStack_a8;
        fVar23 = auVar57._0_4_;
        fVar62 = auVar69._0_4_;
        auVar28._0_4_ = fVar23 * fVar23;
        auVar28._4_4_ = fVar62 * fVar62;
        auVar28._8_4_ = fVar50 * fVar50;
        auVar28._12_4_ = 0;
        auVar57 = NEON_ext(auVar28,auVar28,8,1);
        fVar25 = auVar57._0_4_ + auVar28._0_4_;
        fVar32 = auVar57._4_4_ + auVar28._4_4_;
        fVar24 = fVar25 + fVar32;
        fVar25 = fVar25 + fVar32;
        auVar29._8_8_ = CONCAT44(fVar25,fVar24);
        auVar29._0_8_ = CONCAT44(fVar25,fVar24);
        auVar57 = NEON_frsqrte(auVar29,4);
        auVar75._0_4_ = auVar57._0_4_ * fVar24;
        auVar75._4_4_ = auVar57._4_4_ * fVar25;
        auVar75._8_4_ = auVar57._8_4_ * fVar24;
        auVar75._12_4_ = auVar57._12_4_ * fVar25;
        auVar69 = NEON_frsqrts(auVar57,auVar75,4);
        auVar35._0_4_ = auVar57._0_4_ * auVar69._0_4_;
        auVar35._4_4_ = auVar57._4_4_ * auVar69._4_4_;
        auVar35._8_4_ = auVar57._8_4_ * auVar69._8_4_;
        auVar35._12_4_ = auVar57._12_4_ * auVar69._12_4_;
        auVar76._0_4_ = fVar24 * auVar35._0_4_;
        auVar76._4_4_ = fVar25 * auVar35._4_4_;
        auVar76._8_4_ = fVar24 * auVar35._8_4_;
        auVar76._12_4_ = fVar25 * auVar35._12_4_;
        auVar57 = NEON_frsqrts(auVar35,auVar76,4);
        auVar51._0_8_ =
             CONCAT44(fVar62 * auVar35._4_4_ * auVar57._4_4_,fVar23 * auVar35._0_4_ * auVar57._0_4_)
        ;
        auVar51._8_4_ = fVar50 * auVar35._8_4_ * auVar57._8_4_;
        auVar56._12_4_ = auVar35._12_4_ * auVar57._12_4_ * 0.0;
        auVar56._0_12_ = auVar51;
        fVar23 = (float)CONCAT13((byte)((uint)fVar22 >> 0x18) & ~(byte)((uint)iVar49 >> 0x18),
                                 CONCAT12((byte)((uint)fVar22 >> 0x10) &
                                          ~(byte)((uint)iVar49 >> 0x10),
                                          CONCAT11((byte)((uint)fVar22 >> 8) &
                                                   ~(byte)((uint)iVar49 >> 8),
                                                   SUB41(fVar22,0) & ~(byte)iVar49)));
        auVar33._0_8_ =
             CONCAT17((byte)((uint)fVar71 >> 0x18) & ~(byte)((uint)iVar63 >> 0x18),
                      CONCAT16((byte)((uint)fVar71 >> 0x10) & ~(byte)((uint)iVar63 >> 0x10),
                               CONCAT15((byte)((uint)fVar71 >> 8) & ~(byte)((uint)iVar63 >> 8),
                                        CONCAT14(SUB41(fVar71,0) & ~(byte)iVar63,fVar23))));
        auVar33[8] = SUB41(fVar72,0) & ~(byte)iVar64;
        auVar33[9] = (byte)((uint)fVar72 >> 8) & ~(byte)((uint)iVar64 >> 8);
        auVar33[10] = (byte)((uint)fVar72 >> 0x10) & ~(byte)((uint)iVar64 >> 0x10);
        auVar33[0xb] = (byte)((uint)fVar72 >> 0x18) & ~(byte)((uint)iVar64 >> 0x18);
        auVar36[0xc] = SUB41(fVar73,0) & ~(byte)iVar65;
        auVar36._0_12_ = auVar33;
        auVar36[0xd] = (byte)((uint)fVar73 >> 8) & ~(byte)((uint)iVar65 >> 8);
        auVar36[0xe] = (byte)((uint)fVar73 >> 0x10) & ~(byte)((uint)iVar65 >> 0x10);
        auVar36[0xf] = (byte)((uint)fVar73 >> 0x18) & ~(byte)((uint)iVar65 >> 0x18);
        iVar49 = -(uint)(fVar24 == 0.0);
        iVar63 = -(uint)(fVar25 == 0.0);
        iVar64 = -(uint)(fVar24 == 0.0);
        fVar23 = (float)CONCAT13(bVar48,CONCAT12(bVar47,CONCAT11(bVar46,bVar45))) *
                 (float)CONCAT13(bVar48,CONCAT12(bVar47,CONCAT11(bVar46,bVar45))) + fVar23 * fVar23;
        fVar24 = SQRT(fVar23);
        if (NAN(fVar24)) {
          fVar24 = sqrtf(fVar23);
          auVar9._8_8_ = auVar56._8_8_;
          auVar9._0_8_ = auVar51._0_8_;
          auVar51 = auVar9._0_12_;
          auVar7._8_8_ = auVar36._8_8_;
          auVar7._0_8_ = auVar33._0_8_;
          auVar33 = auVar7._0_12_;
        }
        fVar23 = (float)CONCAT13(auVar51[3] & ~(byte)((uint)iVar49 >> 0x18),
                                 CONCAT12(auVar51[2] & ~(byte)((uint)iVar49 >> 0x10),
                                          CONCAT11(auVar51[1] & ~(byte)((uint)iVar49 >> 8),
                                                   auVar51[0] & ~(byte)iVar49)));
        auVar26._0_8_ =
             CONCAT17(auVar51[7] & ~(byte)((uint)iVar63 >> 0x18),
                      CONCAT16(auVar51[6] & ~(byte)((uint)iVar63 >> 0x10),
                               CONCAT15(auVar51[5] & ~(byte)((uint)iVar63 >> 8),
                                        CONCAT14(auVar51[4] & ~(byte)iVar63,fVar23))));
        auVar26[8] = auVar51[8] & ~(byte)iVar64;
        auVar26[9] = auVar51[9] & ~(byte)((uint)iVar64 >> 8);
        auVar26[10] = auVar51[10] & ~(byte)((uint)iVar64 >> 0x10);
        auVar26[0xb] = auVar51[0xb] & ~(byte)((uint)iVar64 >> 0x18);
        if (fVar24 <= 0.0001) {
          atan2f(-auVar33._8_4_,auVar33._4_4_);
          atan2f(-fVar23,fVar24);
          fVar23 = 0.0;
        }
        else {
          atan2f((float)((ulong)auVar26._0_8_ >> 0x20),auVar26._8_4_);
          atan2f(-fVar23,fVar24);
          fVar23 = atan2f(auVar33._0_4_,
                          (float)CONCAT13(bVar48,CONCAT12(bVar47,CONCAT11(bVar46,bVar45))));
        }
        plVar17 = (long *)plVar18[1];
        if ((long *)*plVar18 != plVar17) {
          plVar20 = (long *)*plVar18;
          do {
            plVar21 = plVar20 + 1;
            lVar16 = *plVar20;
            *(undefined8 *)(lVar16 + 0x40) = 0x3f800000;
            *(undefined8 *)(lVar16 + 0x48) = 0;
            *(float *)(lVar16 + 0x54) = -(float)((ulong)*(undefined8 *)(lVar16 + 0x30) >> 0x20);
            *(undefined4 *)(lVar16 + 0x50) = 0x3f800000;
            *(float *)(lVar16 + 0x48) = -(float)*(undefined8 *)(lVar16 + 0x30);
            fVar25 = cosf(fVar23);
            fVar62 = sinf(fVar23);
            fVar71 = fVar62 * *(float *)(lVar16 + 0x44) + fVar25 * *(float *)(lVar16 + 0x50);
            fVar24 = fVar62 * *(float *)(lVar16 + 0x48) + fVar25 * *(float *)(lVar16 + 0x54) + 0.0;
            fVar22 = fVar25 * *(float *)(lVar16 + 0x40) - *(float *)(lVar16 + 0x4c) * fVar62;
            fVar50 = fVar25 * *(float *)(lVar16 + 0x44) - *(float *)(lVar16 + 0x50) * fVar62;
            fVar72 = fVar62 * *(float *)(lVar16 + 0x40) + fVar25 * *(float *)(lVar16 + 0x4c);
            fVar25 = (fVar25 * *(float *)(lVar16 + 0x48) - *(float *)(lVar16 + 0x54) * fVar62) + 0.0
            ;
            *(float *)(lVar16 + 0x40) = fVar22 + fVar72 * 0.0;
            *(float *)(lVar16 + 0x44) = fVar50 + fVar71 * 0.0;
            *(float *)(lVar16 + 0x4c) = fVar22 * 0.0 + fVar72;
            *(float *)(lVar16 + 0x50) = fVar50 * 0.0 + fVar71;
            local_f0 = (float)uVar14;
            *(float *)(lVar16 + 0x48) = local_f0 + fVar25 + fVar24 * 0.0;
            *(float *)(lVar16 + 0x54) = (float)((ulong)uVar14 >> 0x20) + fVar25 * 0.0 + fVar24;
            plVar20 = plVar21;
          } while (plVar17 != plVar21);
        }
      }
      FUN_71025f5420((undefined8 *)*plVar18,(undefined8 *)plVar18[1],"IPP0001");
    }
  }
LAB_71030fa9a0:
  plVar17 = *(long **)(*(long *)(param_2[1] + 0x300) + 0x18);
  plVar18 = (long *)*plVar17;
  do {
    if (plVar18 == (long *)plVar17[1]) {
      return;
    }
    lVar16 = *plVar18;
    plVar18 = plVar18 + 1;
  } while ((*(ulong *)(lVar16 + 0x98) & 0xffffffffff) != 0x1a53d50963);
  plVar18 = *(long **)(lVar16 + 0x130);
  if (plVar18 != (long *)0x0) {
    if ((param_2[0x203] == 0) || (*(char *)(param_2[0x203] + 0x110) == '\0')) {
      FUN_71025f55b0((undefined8 *)*plVar18,(undefined8 *)plVar18[1],"IPP0001");
    }
    else {
      uStack_c8 = 0;
      local_d0 = 0x3f800000;
      uStack_b8 = 0;
      uStack_c0 = 0x3f80000000000000;
      uStack_a8 = 0x3f800000;
      local_b0 = 0;
      uStack_98 = 0x3f80000000000000;
      local_a0 = 0;
      uVar15 = FUN_71030ef790((long)(param_2 + 0x201),&local_d0,(char *)(lVar16 + 0xcc));
      uVar14 = local_a0;
      if ((uVar15 & 1) != 0) {
        auVar11._8_8_ = uStack_c8;
        auVar11._0_8_ = local_d0;
        auVar13._8_8_ = uStack_b8;
        auVar13._0_8_ = uStack_c0;
        fVar25 = (float)local_d0;
        fVar23 = fVar25 * fVar25;
        fVar24 = (float)uStack_c0 * (float)uStack_c0;
        uVar39 = (undefined1)((uint)fVar24 >> 8);
        uVar40 = (undefined1)((uint)fVar24 >> 0x10);
        uVar41 = (undefined1)((uint)fVar24 >> 0x18);
        fVar22 = (float)local_b0 * (float)local_b0;
        uVar42 = (undefined1)((uint)fVar22 >> 8);
        uVar43 = (undefined1)((uint)fVar22 >> 0x10);
        uVar44 = (undefined1)((uint)fVar22 >> 0x18);
        auVar3[4] = SUB41(fVar24,0);
        auVar3._0_4_ = fVar23;
        auVar3[5] = uVar39;
        auVar3[6] = uVar40;
        auVar3[7] = uVar41;
        auVar3[8] = SUB41(fVar22,0);
        auVar3[9] = uVar42;
        auVar3[10] = uVar43;
        auVar3[0xb] = uVar44;
        auVar3._12_4_ = 0;
        auVar4[4] = SUB41(fVar24,0);
        auVar4._0_4_ = fVar23;
        auVar4[5] = uVar39;
        auVar4[6] = uVar40;
        auVar4[7] = uVar41;
        auVar4[8] = SUB41(fVar22,0);
        auVar4[9] = uVar42;
        auVar4[10] = uVar43;
        auVar4[0xb] = uVar44;
        auVar4._12_4_ = 0;
        auVar57 = NEON_ext(auVar3,auVar4,8,1);
        fVar23 = auVar57._0_4_ + fVar23;
        fVar24 = auVar57._4_4_ + fVar24;
        fVar22 = fVar23 + fVar24;
        fVar23 = fVar23 + fVar24;
        uVar39 = SUB41(fVar23,0);
        uVar40 = (undefined1)((uint)fVar23 >> 8);
        uVar41 = (undefined1)((uint)fVar23 >> 0x10);
        uVar42 = (undefined1)((uint)fVar23 >> 0x18);
        auVar5[4] = uVar39;
        auVar5._0_4_ = fVar22;
        auVar5[5] = uVar40;
        auVar5[6] = uVar41;
        auVar5[7] = uVar42;
        auVar5[8] = SUB41(fVar22,0);
        auVar5[9] = (char)((uint)fVar22 >> 8);
        auVar5[10] = (char)((uint)fVar22 >> 0x10);
        auVar5[0xb] = (char)((uint)fVar22 >> 0x18);
        auVar5[0xc] = uVar39;
        auVar5[0xd] = uVar40;
        auVar5[0xe] = uVar41;
        auVar5[0xf] = uVar42;
        auVar57 = NEON_frsqrte(auVar5,4);
        auVar68._0_4_ = auVar57._0_4_ * fVar22;
        auVar68._4_4_ = auVar57._4_4_ * fVar23;
        auVar68._8_4_ = auVar57._8_4_ * fVar22;
        uVar6 = (undefined2)(CONCAT15(uVar40,CONCAT14(uVar39,fVar22)) >> 0x20);
        auVar68._12_4_ = auVar57._12_4_ * (float)CONCAT13(uVar42,CONCAT12(uVar41,uVar6));
        auVar69 = NEON_frsqrts(auVar57,auVar68,4);
        auVar58._0_4_ = auVar57._0_4_ * auVar69._0_4_;
        auVar58._4_4_ = auVar57._4_4_ * auVar69._4_4_;
        auVar58._8_4_ = auVar57._8_4_ * auVar69._8_4_;
        auVar58._12_4_ = auVar57._12_4_ * auVar69._12_4_;
        auVar70._0_4_ = fVar22 * auVar58._0_4_;
        auVar70._4_4_ = fVar23 * auVar58._4_4_;
        auVar70._8_4_ = fVar22 * auVar58._8_4_;
        auVar70._12_4_ = (float)CONCAT13(uVar42,CONCAT12(uVar41,uVar6)) * auVar58._12_4_;
        iVar49 = -(uint)(fVar22 == 0.0);
        auVar57 = NEON_frsqrts(auVar58,auVar70,4);
        fVar22 = (float)((ulong)local_d0 >> 0x20);
        fVar71 = (float)((ulong)uStack_c0 >> 0x20);
        fVar25 = fVar25 * auVar58._0_4_ * auVar57._0_4_;
        fVar72 = (float)((ulong)local_b0 >> 0x20);
        auVar69 = NEON_ext(auVar13,auVar13,8,1);
        auVar57 = NEON_ext(auVar11,auVar11,8,1);
        auVar59._0_4_ = fVar22 * fVar22;
        auVar59._4_4_ = fVar71 * fVar71;
        auVar59._8_4_ = fVar72 * fVar72;
        auVar59._12_4_ = 0;
        auVar77 = NEON_ext(auVar59,auVar59,8,1);
        fVar24 = auVar77._0_4_ + auVar59._0_4_;
        fVar62 = auVar77._4_4_ + auVar59._4_4_;
        fVar23 = fVar24 + fVar62;
        fVar24 = fVar24 + fVar62;
        bVar45 = SUB41(fVar25,0) & ~(byte)iVar49;
        bVar46 = (byte)((uint)fVar25 >> 8) & ~(byte)((uint)iVar49 >> 8);
        bVar47 = (byte)((uint)fVar25 >> 0x10) & ~(byte)((uint)iVar49 >> 0x10);
        bVar48 = (byte)((uint)fVar25 >> 0x18) & ~(byte)((uint)iVar49 >> 0x18);
        auVar60._8_8_ = CONCAT44(fVar24,fVar23);
        auVar60._0_8_ = CONCAT44(fVar24,fVar23);
        auVar77 = NEON_frsqrte(auVar60,4);
        auVar83._0_4_ = auVar77._0_4_ * fVar23;
        auVar83._4_4_ = auVar77._4_4_ * fVar24;
        auVar83._8_4_ = auVar77._8_4_ * fVar23;
        auVar83._12_4_ = auVar77._12_4_ * fVar24;
        auVar84 = NEON_frsqrts(auVar77,auVar83,4);
        auVar78._0_4_ = auVar77._0_4_ * auVar84._0_4_;
        auVar78._4_4_ = auVar77._4_4_ * auVar84._4_4_;
        auVar78._8_4_ = auVar77._8_4_ * auVar84._8_4_;
        auVar78._12_4_ = auVar77._12_4_ * auVar84._12_4_;
        auVar85._0_4_ = fVar23 * auVar78._0_4_;
        auVar85._4_4_ = fVar24 * auVar78._4_4_;
        auVar85._8_4_ = fVar23 * auVar78._8_4_;
        auVar85._12_4_ = fVar24 * auVar78._12_4_;
        iVar49 = -(uint)(fVar23 == 0.0);
        iVar63 = -(uint)(fVar24 == 0.0);
        iVar64 = -(uint)(fVar23 == 0.0);
        iVar65 = -(uint)(fVar24 == 0.0);
        auVar77 = NEON_frsqrts(auVar78,auVar85,4);
        fVar22 = fVar22 * auVar78._0_4_ * auVar77._0_4_;
        fVar71 = fVar71 * auVar78._4_4_ * auVar77._4_4_;
        fVar72 = fVar72 * auVar78._8_4_ * auVar77._8_4_;
        fVar73 = auVar78._12_4_ * auVar77._12_4_ * 0.0;
        fVar50 = (float)uStack_a8;
        fVar23 = auVar57._0_4_;
        fVar62 = auVar69._0_4_;
        auVar30._0_4_ = fVar23 * fVar23;
        auVar30._4_4_ = fVar62 * fVar62;
        auVar30._8_4_ = fVar50 * fVar50;
        auVar30._12_4_ = 0;
        auVar57 = NEON_ext(auVar30,auVar30,8,1);
        fVar25 = auVar57._0_4_ + auVar30._0_4_;
        fVar32 = auVar57._4_4_ + auVar30._4_4_;
        fVar24 = fVar25 + fVar32;
        fVar25 = fVar25 + fVar32;
        auVar31._8_8_ = CONCAT44(fVar25,fVar24);
        auVar31._0_8_ = CONCAT44(fVar25,fVar24);
        auVar57 = NEON_frsqrte(auVar31,4);
        auVar79._0_4_ = auVar57._0_4_ * fVar24;
        auVar79._4_4_ = auVar57._4_4_ * fVar25;
        auVar79._8_4_ = auVar57._8_4_ * fVar24;
        auVar79._12_4_ = auVar57._12_4_ * fVar25;
        auVar69 = NEON_frsqrts(auVar57,auVar79,4);
        auVar37._0_4_ = auVar57._0_4_ * auVar69._0_4_;
        auVar37._4_4_ = auVar57._4_4_ * auVar69._4_4_;
        auVar37._8_4_ = auVar57._8_4_ * auVar69._8_4_;
        auVar37._12_4_ = auVar57._12_4_ * auVar69._12_4_;
        auVar80._0_4_ = fVar24 * auVar37._0_4_;
        auVar80._4_4_ = fVar25 * auVar37._4_4_;
        auVar80._8_4_ = fVar24 * auVar37._8_4_;
        auVar80._12_4_ = fVar25 * auVar37._12_4_;
        auVar57 = NEON_frsqrts(auVar37,auVar80,4);
        auVar52._0_8_ =
             CONCAT44(fVar62 * auVar37._4_4_ * auVar57._4_4_,fVar23 * auVar37._0_4_ * auVar57._0_4_)
        ;
        auVar52._8_4_ = fVar50 * auVar37._8_4_ * auVar57._8_4_;
        auVar61._12_4_ = auVar37._12_4_ * auVar57._12_4_ * 0.0;
        auVar61._0_12_ = auVar52;
        fVar23 = (float)CONCAT13((byte)((uint)fVar22 >> 0x18) & ~(byte)((uint)iVar49 >> 0x18),
                                 CONCAT12((byte)((uint)fVar22 >> 0x10) &
                                          ~(byte)((uint)iVar49 >> 0x10),
                                          CONCAT11((byte)((uint)fVar22 >> 8) &
                                                   ~(byte)((uint)iVar49 >> 8),
                                                   SUB41(fVar22,0) & ~(byte)iVar49)));
        auVar34._0_8_ =
             CONCAT17((byte)((uint)fVar71 >> 0x18) & ~(byte)((uint)iVar63 >> 0x18),
                      CONCAT16((byte)((uint)fVar71 >> 0x10) & ~(byte)((uint)iVar63 >> 0x10),
                               CONCAT15((byte)((uint)fVar71 >> 8) & ~(byte)((uint)iVar63 >> 8),
                                        CONCAT14(SUB41(fVar71,0) & ~(byte)iVar63,fVar23))));
        auVar34[8] = SUB41(fVar72,0) & ~(byte)iVar64;
        auVar34[9] = (byte)((uint)fVar72 >> 8) & ~(byte)((uint)iVar64 >> 8);
        auVar34[10] = (byte)((uint)fVar72 >> 0x10) & ~(byte)((uint)iVar64 >> 0x10);
        auVar34[0xb] = (byte)((uint)fVar72 >> 0x18) & ~(byte)((uint)iVar64 >> 0x18);
        auVar38[0xc] = SUB41(fVar73,0) & ~(byte)iVar65;
        auVar38._0_12_ = auVar34;
        auVar38[0xd] = (byte)((uint)fVar73 >> 8) & ~(byte)((uint)iVar65 >> 8);
        auVar38[0xe] = (byte)((uint)fVar73 >> 0x10) & ~(byte)((uint)iVar65 >> 0x10);
        auVar38[0xf] = (byte)((uint)fVar73 >> 0x18) & ~(byte)((uint)iVar65 >> 0x18);
        iVar49 = -(uint)(fVar24 == 0.0);
        iVar63 = -(uint)(fVar25 == 0.0);
        iVar64 = -(uint)(fVar24 == 0.0);
        fVar23 = (float)CONCAT13(bVar48,CONCAT12(bVar47,CONCAT11(bVar46,bVar45))) *
                 (float)CONCAT13(bVar48,CONCAT12(bVar47,CONCAT11(bVar46,bVar45))) + fVar23 * fVar23;
        fVar24 = SQRT(fVar23);
        if (NAN(fVar24)) {
          fVar24 = sqrtf(fVar23);
          auVar10._8_8_ = auVar61._8_8_;
          auVar10._0_8_ = auVar52._0_8_;
          auVar52 = auVar10._0_12_;
          auVar8._8_8_ = auVar38._8_8_;
          auVar8._0_8_ = auVar34._0_8_;
          auVar34 = auVar8._0_12_;
        }
        fVar23 = (float)CONCAT13(auVar52[3] & ~(byte)((uint)iVar49 >> 0x18),
                                 CONCAT12(auVar52[2] & ~(byte)((uint)iVar49 >> 0x10),
                                          CONCAT11(auVar52[1] & ~(byte)((uint)iVar49 >> 8),
                                                   auVar52[0] & ~(byte)iVar49)));
        auVar27._0_8_ =
             CONCAT17(auVar52[7] & ~(byte)((uint)iVar63 >> 0x18),
                      CONCAT16(auVar52[6] & ~(byte)((uint)iVar63 >> 0x10),
                               CONCAT15(auVar52[5] & ~(byte)((uint)iVar63 >> 8),
                                        CONCAT14(auVar52[4] & ~(byte)iVar63,fVar23))));
        auVar27[8] = auVar52[8] & ~(byte)iVar64;
        auVar27[9] = auVar52[9] & ~(byte)((uint)iVar64 >> 8);
        auVar27[10] = auVar52[10] & ~(byte)((uint)iVar64 >> 0x10);
        auVar27[0xb] = auVar52[0xb] & ~(byte)((uint)iVar64 >> 0x18);
        if (fVar24 <= 0.0001) {
          atan2f(-auVar34._8_4_,auVar34._4_4_);
          atan2f(-fVar23,fVar24);
          fVar23 = 0.0;
        }
        else {
          atan2f((float)((ulong)auVar27._0_8_ >> 0x20),auVar27._8_4_);
          atan2f(-fVar23,fVar24);
          fVar23 = atan2f(auVar34._0_4_,
                          (float)CONCAT13(bVar48,CONCAT12(bVar47,CONCAT11(bVar46,bVar45))));
        }
        plVar17 = (long *)plVar18[1];
        if ((long *)*plVar18 != plVar17) {
          plVar20 = (long *)*plVar18;
          do {
            plVar21 = plVar20 + 1;
            lVar16 = *plVar20;
            *(undefined8 *)(lVar16 + 0x40) = 0x3f800000;
            *(undefined8 *)(lVar16 + 0x48) = 0;
            *(float *)(lVar16 + 0x54) = -(float)((ulong)*(undefined8 *)(lVar16 + 0x30) >> 0x20);
            *(undefined4 *)(lVar16 + 0x50) = 0x3f800000;
            *(float *)(lVar16 + 0x48) = -(float)*(undefined8 *)(lVar16 + 0x30);
            fVar25 = cosf(fVar23);
            fVar62 = sinf(fVar23);
            fVar71 = fVar62 * *(float *)(lVar16 + 0x44) + fVar25 * *(float *)(lVar16 + 0x50);
            fVar24 = fVar62 * *(float *)(lVar16 + 0x48) + fVar25 * *(float *)(lVar16 + 0x54) + 0.0;
            fVar22 = fVar25 * *(float *)(lVar16 + 0x40) - *(float *)(lVar16 + 0x4c) * fVar62;
            fVar50 = fVar25 * *(float *)(lVar16 + 0x44) - *(float *)(lVar16 + 0x50) * fVar62;
            fVar72 = fVar62 * *(float *)(lVar16 + 0x40) + fVar25 * *(float *)(lVar16 + 0x4c);
            fVar25 = (fVar25 * *(float *)(lVar16 + 0x48) - *(float *)(lVar16 + 0x54) * fVar62) + 0.0
            ;
            *(float *)(lVar16 + 0x40) = fVar22 + fVar72 * 0.0;
            *(float *)(lVar16 + 0x44) = fVar50 + fVar71 * 0.0;
            *(float *)(lVar16 + 0x4c) = fVar22 * 0.0 + fVar72;
            *(float *)(lVar16 + 0x50) = fVar50 * 0.0 + fVar71;
            local_f0 = (float)uVar14;
            *(float *)(lVar16 + 0x48) = local_f0 + fVar25 + fVar24 * 0.0;
            *(float *)(lVar16 + 0x54) = (float)((ulong)uVar14 >> 0x20) + fVar25 * 0.0 + fVar24;
            plVar20 = plVar21;
          } while (plVar17 != plVar21);
        }
      }
      FUN_71025f5420((undefined8 *)*plVar18,(undefined8 *)plVar18[1],"IPP0001");
    }
  }
  return;
}

