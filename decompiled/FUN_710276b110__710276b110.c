// addr:      710276b110
// offset:    0x276b110
// name:      FUN_710276b110
// mangled:   
// signature: undefined __cdecl FUN_710276b110(float param_1, long * param_2, long param_3, long * * * * param_4, byte * * * * param_5, long * * * * param_6, undefined8 param_7, undefined8 param_8, undefined8 param_9)


void FUN_710276b110(float param_1,long *param_2,long param_3,long ****param_4,byte ****param_5,
                   long ****param_6,undefined8 param_7,undefined8 param_8,undefined8 param_9)

{
  int *piVar1;
  byte *pbVar2;
  undefined4 uVar3;
  uint uVar4;
  char cVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  float fVar10;
  undefined8 uVar11;
  float fVar12;
  float fVar13;
  bool bVar14;
  bool bVar15;
  bool bVar16;
  uint uVar17;
  long lVar18;
  long *plVar19;
  undefined8 extraout_x1;
  long extraout_x1_00;
  long lVar20;
  char *pcVar21;
  undefined1 *puVar22;
  char cVar23;
  ulong uVar24;
  undefined1 uVar25;
  undefined1 uVar26;
  undefined1 uVar27;
  undefined1 uVar28;
  undefined1 uVar29;
  undefined1 uVar30;
  undefined1 uVar31;
  undefined1 uVar32;
  undefined1 uVar33;
  undefined1 uVar34;
  undefined1 uVar35;
  undefined1 uVar36;
  undefined1 uVar37;
  undefined1 uVar38;
  undefined1 uVar39;
  undefined1 uVar40;
  float fVar41;
  undefined1 auVar42 [16];
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
  float fVar57;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  
  if (param_2 == (long *)0x0) {
    return;
  }
  lVar18 = param_2[1];
  if (lVar18 == 0) {
    return;
  }
  if ((char)param_2[2] == '\0') {
    uVar4 = *(uint *)(param_3 + 0x28) & 0xfffffffe;
    lVar20 = *(long *)(*(long *)(*param_2 + 8) + 8);
    piVar1 = (int *)(lVar20 + 0xd8);
    if (uVar4 == 2) {
      piVar1 = (int *)(lVar20 + 0xdc);
    }
    if (*(float *)(param_3 + 0x2c) <= (float)*piVar1) {
      if (uVar4 == 2) {
        *(undefined1 *)((long)param_2 + 0x19) = 0;
        cVar5 = (char)param_2[2];
        goto joined_r0x00710276b344;
      }
    }
    else {
      plVar19 = param_2;
      if (uVar4 == 2) {
        plVar19 = (long *)((long)param_2 + 1);
      }
      if ((char)plVar19[3] == '\0') {
        *(char *)(plVar19 + 3) = '\x01';
        *(undefined1 *)(lVar18 + 0x110) = 1;
        FUN_71025e9d50((long *)(lVar18 + 0x108),param_3,param_4,param_5,param_6,param_7,param_8,
                       param_9);
        lVar18 = param_2[1];
        if (lVar18 == 0) {
LAB_710276b25c:
          lVar18 = 0;
        }
        else {
          if (*(char *)(lVar18 + 0xe0) == '\0') {
LAB_710276b200:
            if (*(char *)(lVar18 + 0xe0) != '\0') {
              (**(code **)(**(long **)(lVar18 + 0x90) + 0x180))
                        (*(long **)(lVar18 + 0x90),0x5d79572d9,1);
            }
          }
          else {
            uVar24 = (**(code **)(**(long **)(lVar18 + 0x90) + 0x198))
                               (*(long **)(lVar18 + 0x90),"Model");
            if ((uVar24 & 1) == 0) {
              lVar18 = param_2[1];
              if (lVar18 == 0) goto LAB_710276b25c;
              goto LAB_710276b200;
            }
          }
          lVar18 = param_2[1];
          if (lVar18 == 0) goto LAB_710276b25c;
          *(byte *)(lVar18 + 0x118) = *(byte *)(lVar18 + 0x118) & 0xfe;
          lVar18 = param_2[1];
        }
        pbVar2 = (byte *)"Brave_Cetacea_WalkA";
        if (uVar4 == 2) {
          pbVar2 = (byte *)"Brave_Cetacea_WalkB";
        }
        FUN_7102610070(lVar18,pbVar2);
        lVar18 = param_2[1];
        if (lVar18 != 0) {
          if (*(long *)(lVar18 + 200) != 0) {
            FUN_71025ee080(lVar18 + 0x60,pbVar2,0);
            lVar18 = param_2[1];
            if (lVar18 == 0) goto LAB_710276b2c8;
          }
          if ((*(char *)(lVar18 + 0xe0) != '\0') && (*(long *)(lVar18 + 200) != 0)) {
            *(undefined2 *)(*(long *)(lVar18 + 200) + 0x32) = 0;
          }
          if (*(long *)(lVar18 + 0xd8) != 0) {
            *(undefined1 *)(*(long *)(lVar18 + 0xd8) + 0x22) = 0;
          }
        }
LAB_710276b2c8:
        FUN_710260fdd0(0,param_2[1],1);
        lVar18 = param_2[1];
        if (lVar18 != 0) {
          if ((*(char *)(lVar18 + 0xe0) != '\0') && (*(long *)(lVar18 + 200) != 0)) {
            *(undefined2 *)(*(long *)(lVar18 + 200) + 0x30) = 0;
          }
          if (*(long *)(lVar18 + 0xd8) != 0) {
            *(undefined1 *)(*(long *)(lVar18 + 0xd8) + 0x21) = 0;
          }
          if (*(char *)(lVar18 + 0xe0) != '\0') {
            *(undefined1 *)(*(long *)(lVar18 + 0xb0) + 0x10) = 1;
          }
        }
        *(undefined1 *)(param_2 + 2) = 1;
        if (uVar4 == 2) {
          *(undefined2 *)((long)param_2 + 0x2c) = 0;
          *(undefined2 *)((long)param_2 + 0x44) = 0;
        }
        param_2[0xc] = 0;
        *(undefined8 *)((long)param_2 + 0x6c) = 0;
        *(undefined2 *)(param_2 + 0xd) = 1;
        *(undefined2 *)((long)param_2 + 0x74) = 1;
      }
    }
LAB_710276b340:
    cVar5 = (char)param_2[2];
joined_r0x00710276b344:
    if (cVar5 != '\0') {
      lVar18 = param_2[1];
      fVar57 = *(float *)(*(long *)(*(long *)(*param_2 + 8) + 8) + 0xd4);
      fVar43 = *(float *)(param_3 + 0x30);
      fVar41 = *(float *)(param_3 + 0x34);
      fVar12 = *(float *)(param_3 + 0x38);
      fVar13 = *(float *)(param_3 + 0x3c);
      fVar44 = (float)*(undefined8 *)(param_3 + 0x40);
      fVar46 = (float)((ulong)*(undefined8 *)(param_3 + 0x40) >> 0x20);
      fVar48 = (float)*(undefined8 *)(param_3 + 0x48);
      fVar50 = (float)((ulong)*(undefined8 *)(param_3 + 0x48) >> 0x20);
      fVar52 = (float)*(undefined8 *)(param_3 + 0x50);
      fVar53 = (float)((ulong)*(undefined8 *)(param_3 + 0x50) >> 0x20);
      fVar54 = (float)*(undefined8 *)(param_3 + 0x58);
      fVar55 = (float)((ulong)*(undefined8 *)(param_3 + 0x58) >> 0x20);
      fVar45 = (float)*(undefined8 *)(param_3 + 0x60);
      fVar47 = (float)((ulong)*(undefined8 *)(param_3 + 0x60) >> 0x20);
      fVar49 = (float)*(undefined8 *)(param_3 + 0x68);
      fVar51 = (float)((ulong)*(undefined8 *)(param_3 + 0x68) >> 0x20);
      uStack_b8 = CONCAT44(fVar13 * fVar57 + fVar50 * 0.0 + fVar55 * 0.0 + fVar51 * 0.0,
                           fVar12 * fVar57 + fVar48 * 0.0 + fVar54 * 0.0 + fVar49 * 0.0);
      auVar42._0_8_ =
           CONCAT44(fVar41 * 0.0 + fVar46 * 0.0 + fVar53 * fVar57 + fVar47 * 0.0,
                    fVar43 * 0.0 + fVar44 * 0.0 + fVar52 * fVar57 + fVar45 * 0.0);
      auVar42._8_4_ = fVar12 * 0.0 + fVar48 * 0.0 + fVar54 * fVar57 + fVar49 * 0.0;
      auVar42._12_4_ = fVar13 * 0.0 + fVar50 * 0.0 + fVar55 * fVar57 + fVar51 * 0.0;
      fVar10 = fVar47 + fVar41 * 0.0 + fVar46 * 0.0 + fVar53 * 0.0;
      fVar56 = fVar51 + fVar13 * 0.0 + fVar50 * 0.0 + fVar55 * 0.0;
      local_c0 = CONCAT44(fVar41 * fVar57 + fVar46 * 0.0 + fVar53 * 0.0 + fVar47 * 0.0,
                          fVar43 * fVar57 + fVar44 * 0.0 + fVar52 * 0.0 + fVar45 * 0.0);
      local_a8 = CONCAT44(fVar13 * 0.0 + fVar50 * fVar57 + fVar55 * 0.0 + fVar51 * 0.0,
                          fVar12 * 0.0 + fVar48 * fVar57 + fVar54 * 0.0 + fVar49 * 0.0);
      local_b0 = CONCAT44(fVar41 * 0.0 + fVar46 * fVar57 + fVar53 * 0.0 + fVar47 * 0.0,
                          fVar43 * 0.0 + fVar44 * fVar57 + fVar52 * 0.0 + fVar45 * 0.0);
      uStack_98 = auVar42._8_8_;
      local_88 = CONCAT17((char)((uint)fVar56 >> 0x18),
                          CONCAT16((char)((uint)fVar56 >> 0x10),
                                   CONCAT15((char)((uint)fVar56 >> 8),
                                            CONCAT14(SUB41(fVar56,0),
                                                     fVar49 + fVar12 * 0.0 + fVar48 * 0.0 +
                                                              fVar54 * 0.0))));
      local_90 = CONCAT17((char)((uint)fVar10 >> 0x18),
                          CONCAT16((char)((uint)fVar10 >> 0x10),
                                   CONCAT15((char)((uint)fVar10 >> 8),
                                            CONCAT14(SUB41(fVar10,0),
                                                     fVar45 + fVar43 * 0.0 + fVar44 * 0.0 +
                                                              fVar52 * 0.0))));
      local_a0 = auVar42._0_8_;
      if (lVar18 != 0) {
        (**(code **)(**(long **)(lVar18 + 0x90) + 0x148))(*(long **)(lVar18 + 0x90),&local_c0);
        lVar18 = *(long *)(lVar18 + 0xd8);
        if (lVar18 != 0) {
          local_68 = local_a8;
          local_70 = local_b0;
          local_78 = uStack_b8;
          local_80 = local_c0;
          local_48 = local_88;
          local_50 = local_90;
          local_58 = uStack_98;
          local_60 = local_a0;
          if (*(char *)(*(long *)(lVar18 + 8) + 0xa8) != '\0') {
            plVar19 = *(long **)(*(long *)(lVar18 + 8) + 0x48);
            (**(code **)(*plVar19 + 0x20))(plVar19,&local_80);
          }
          *(undefined1 *)(lVar18 + 0x20) = 1;
        }
      }
      if (param_2[1] != 0) {
        (**(code **)(**(long **)(param_2[1] + 0x90) + 0x430))(SUB41(fVar57,0));
      }
      lVar18 = *(long *)(param_3 + 0x38);
      param_2[0x19] = *(long *)(param_3 + 0x48);
      param_2[0x17] = lVar18;
      lVar18 = *(long *)(param_3 + 0x58);
      param_2[0x1d] = *(long *)(param_3 + 0x68);
      param_2[0x1b] = lVar18;
      lVar18 = *(long *)(param_3 + 0x30);
      param_2[0x18] = *(long *)(param_3 + 0x40);
      param_2[0x16] = lVar18;
      lVar18 = *(long *)(param_3 + 0x50);
      param_2[0x1c] = *(long *)(param_3 + 0x60);
      param_2[0x1a] = lVar18;
    }
  }
  else {
    bVar16 = FUN_710260ffb0(lVar18);
    if (!bVar16) goto LAB_710276b340;
    if ((char)param_2[2] != '\0') {
      FUN_710276ae10((long)param_2,extraout_x1,param_4,param_5,param_6,param_7,param_8,param_9);
      cVar5 = (char)param_2[2];
      goto joined_r0x00710276b344;
    }
  }
  uVar24 = (ulong)((*(uint *)(param_3 + 0x28) & 0xfffffffe) == 2);
  fVar56 = *(float *)(param_3 + 0x2c);
  pcVar21 = (char *)((long)param_2 + uVar24 * 0xc + 0x20);
  cVar5 = *pcVar21;
  fVar10 = *(float *)((long)param_2 + uVar24 * 0xc + 0x28);
  bVar16 = false;
  bVar14 = true;
  bVar15 = false;
  if (*(float *)((long)param_2 + uVar24 * 0xc + 0x24) <= fVar56) {
    bVar16 = false;
    bVar14 = false;
    bVar15 = true;
    if (!NAN(fVar10) && !NAN(fVar56)) {
      bVar16 = fVar10 < fVar56;
      bVar14 = fVar10 == fVar56;
      bVar15 = false;
    }
  }
  if (bVar14 || bVar16 != bVar15) {
    if (fVar10 <= fVar56) {
      cVar23 = '\x02';
      goto LAB_710276b520;
    }
    puVar22 = (undefined1 *)((long)param_2 + uVar24 * 0xc + 0x21);
LAB_710276b590:
    *puVar22 = 0;
  }
  else {
    cVar23 = '\x01';
LAB_710276b520:
    *pcVar21 = cVar23;
    puVar22 = (undefined1 *)((long)param_2 + uVar24 * 0xc + 0x21);
    if (cVar5 == cVar23) goto LAB_710276b590;
    *puVar22 = cVar23 == '\x01';
    if (cVar23 == '\x01') {
      plVar19 = *(long **)(**(long **)(**(long **)(*param_2 + 8) + 0x338) + 8);
      if (plVar19 != (long *)0x0) {
        (**(code **)(*plVar19 + 0x58))(plVar19,0x15,*(undefined4 *)((long)param_2 + 0x1c));
      }
      uVar3 = *(undefined4 *)((long)param_2 + uVar24 * 4 + 0x50);
      *(undefined4 *)(param_2 + 0xc) = uVar3;
      *(undefined4 *)((long)param_2 + 100) = uVar3;
      puVar22 = (undefined1 *)((long)param_2 + 0x69);
      *(undefined1 *)(param_2 + 0xd) = 1;
      goto LAB_710276b590;
    }
  }
  pcVar21 = (char *)((long)param_2 + uVar24 * 0xc + 0x38);
  cVar5 = *pcVar21;
  fVar10 = *(float *)((long)param_2 + uVar24 * 0xc + 0x40);
  bVar16 = false;
  bVar14 = true;
  bVar15 = false;
  if (*(float *)((long)param_2 + uVar24 * 0xc + 0x3c) <= fVar56) {
    bVar16 = false;
    bVar14 = false;
    bVar15 = true;
    if (!NAN(fVar10) && !NAN(fVar56)) {
      bVar16 = fVar10 < fVar56;
      bVar14 = fVar10 == fVar56;
      bVar15 = false;
    }
  }
  if (bVar14 || bVar16 != bVar15) {
    if (fVar10 <= fVar56) {
      cVar23 = '\x02';
      goto LAB_710276b5d4;
    }
    puVar22 = (undefined1 *)((long)param_2 + uVar24 * 0xc + 0x39);
LAB_710276b644:
    *puVar22 = 0;
  }
  else {
    cVar23 = '\x01';
LAB_710276b5d4:
    *pcVar21 = cVar23;
    puVar22 = (undefined1 *)((long)param_2 + uVar24 * 0xc + 0x39);
    if (cVar5 == cVar23) goto LAB_710276b644;
    *puVar22 = cVar23 == '\x01';
    if (cVar23 == '\x01') {
      plVar19 = *(long **)(**(long **)(**(long **)(*param_2 + 8) + 0x338) + 8);
      if (plVar19 != (long *)0x0) {
        (**(code **)(*plVar19 + 0x58))(plVar19,0x14,*(undefined4 *)((long)param_2 + 0x1c));
      }
      uVar3 = *(undefined4 *)((long)param_2 + uVar24 * 4 + 0x58);
      *(undefined4 *)((long)param_2 + 0x6c) = uVar3;
      *(undefined4 *)(param_2 + 0xe) = uVar3;
      puVar22 = (undefined1 *)((long)param_2 + 0x75);
      *(undefined1 *)((long)param_2 + 0x74) = 1;
      goto LAB_710276b644;
    }
  }
  if ((char)param_2[0xd] == '\0') {
    if (*(char *)((long)param_2 + 0x69) != '\0') {
      *(undefined1 *)((long)param_2 + 0x69) = 0;
    }
LAB_710276b694:
    if (*(char *)((long)param_2 + 0x74) == '\0') goto LAB_710276b678;
LAB_710276b69c:
    fVar10 = *(float *)(param_2 + 0xe);
    *(float *)(param_2 + 0xe) = fVar10 - param_1;
    if (fVar10 - param_1 < 0.0) {
      *(undefined4 *)(param_2 + 0xe) = 0;
      *(undefined2 *)((long)param_2 + 0x74) = 0x100;
    }
  }
  else {
    fVar10 = *(float *)((long)param_2 + 100) - param_1;
    *(float *)((long)param_2 + 100) = fVar10;
    if (0.0 <= fVar10) goto LAB_710276b694;
    *(undefined4 *)((long)param_2 + 100) = 0;
    *(undefined2 *)(param_2 + 0xd) = 0x100;
    if (*(char *)((long)param_2 + 0x74) != '\0') goto LAB_710276b69c;
LAB_710276b678:
    if (*(char *)((long)param_2 + 0x75) != '\0') {
      *(undefined1 *)((long)param_2 + 0x75) = 0;
    }
  }
  if ((*(float *)((long)param_2 + 100) == 0.0) && (*(float *)(param_2 + 0xe) == 0.0)) {
    return;
  }
  if ((char)param_2[2] == '\0') {
    fVar41 = *(float *)(param_2 + 0x12);
    fVar12 = *(float *)((long)param_2 + 0x94);
    fVar13 = *(float *)(param_2 + 0x13);
    fVar10 = (float)*(undefined8 *)(param_3 + 0x60) +
             fVar41 * (float)*(undefined8 *)(param_3 + 0x30) +
             fVar12 * (float)*(undefined8 *)(param_3 + 0x40) +
             fVar13 * (float)*(undefined8 *)(param_3 + 0x50);
    uVar25 = SUB41(fVar10,0);
    uVar26 = (undefined1)((uint)fVar10 >> 8);
    uVar27 = (undefined1)((uint)fVar10 >> 0x10);
    uVar28 = (undefined1)((uint)fVar10 >> 0x18);
    fVar56 = (float)((ulong)*(undefined8 *)(param_3 + 0x60) >> 0x20) +
             fVar41 * (float)((ulong)*(undefined8 *)(param_3 + 0x30) >> 0x20) +
             fVar12 * (float)((ulong)*(undefined8 *)(param_3 + 0x40) >> 0x20) +
             fVar13 * (float)((ulong)*(undefined8 *)(param_3 + 0x50) >> 0x20);
    uVar29 = SUB41(fVar56,0);
    uVar30 = (undefined1)((uint)fVar56 >> 8);
    uVar31 = (undefined1)((uint)fVar56 >> 0x10);
    uVar32 = (undefined1)((uint)fVar56 >> 0x18);
    fVar43 = (float)*(undefined8 *)(param_3 + 0x68) +
             fVar41 * (float)*(undefined8 *)(param_3 + 0x38) +
             fVar12 * (float)*(undefined8 *)(param_3 + 0x48) +
             fVar13 * (float)*(undefined8 *)(param_3 + 0x58);
    uVar33 = SUB41(fVar43,0);
    uVar34 = (undefined1)((uint)fVar43 >> 8);
    uVar35 = (undefined1)((uint)fVar43 >> 0x10);
    uVar36 = (undefined1)((uint)fVar43 >> 0x18);
    uVar37 = 0;
    uVar38 = 0;
    uVar39 = 0;
    uVar40 = 0;
    fVar41 = (float)((ulong)*(undefined8 *)(param_3 + 0x68) >> 0x20) +
             fVar41 * (float)((ulong)*(undefined8 *)(param_3 + 0x38) >> 0x20) +
             fVar12 * (float)((ulong)*(undefined8 *)(param_3 + 0x48) >> 0x20) +
             fVar13 * (float)((ulong)*(undefined8 *)(param_3 + 0x58) >> 0x20);
    if (fVar41 != 0.0) {
      fVar10 = fVar10 / fVar41;
      uVar25 = SUB41(fVar10,0);
      uVar26 = (undefined1)((uint)fVar10 >> 8);
      uVar27 = (undefined1)((uint)fVar10 >> 0x10);
      uVar28 = (undefined1)((uint)fVar10 >> 0x18);
      fVar56 = fVar56 / fVar41;
      uVar29 = SUB41(fVar56,0);
      uVar30 = (undefined1)((uint)fVar56 >> 8);
      uVar31 = (undefined1)((uint)fVar56 >> 0x10);
      uVar32 = (undefined1)((uint)fVar56 >> 0x18);
      fVar43 = fVar43 / fVar41;
      uVar33 = SUB41(fVar43,0);
      uVar34 = (undefined1)((uint)fVar43 >> 8);
      uVar35 = (undefined1)((uint)fVar43 >> 0x10);
      uVar36 = (undefined1)((uint)fVar43 >> 0x18);
      fVar41 = 0.0 / fVar41;
      uVar37 = SUB41(fVar41,0);
      uVar38 = (undefined1)((uint)fVar41 >> 8);
      uVar39 = (undefined1)((uint)fVar41 >> 0x10);
      uVar40 = (undefined1)((uint)fVar41 >> 0x18);
    }
    auVar8[1] = uVar26;
    auVar8[0] = uVar25;
    auVar8[2] = uVar27;
    auVar8[3] = uVar28;
    auVar8[4] = uVar29;
    auVar8[5] = uVar30;
    auVar8[6] = uVar31;
    auVar8[7] = uVar32;
    auVar8[8] = uVar33;
    auVar8[9] = uVar34;
    auVar8[10] = uVar35;
    auVar8[0xb] = uVar36;
    auVar8[0xc] = uVar37;
    auVar8[0xd] = uVar38;
    auVar8[0xe] = uVar39;
    auVar8[0xf] = uVar40;
    auVar9[1] = uVar26;
    auVar9[0] = uVar25;
    auVar9[2] = uVar27;
    auVar9[3] = uVar28;
    auVar9[4] = uVar29;
    auVar9[5] = uVar30;
    auVar9[6] = uVar31;
    auVar9[7] = uVar32;
    auVar9[8] = uVar33;
    auVar9[9] = uVar34;
    auVar9[10] = uVar35;
    auVar9[0xb] = uVar36;
    auVar9[0xc] = uVar37;
    auVar9[0xd] = uVar38;
    auVar9[0xe] = uVar39;
    auVar9[0xf] = uVar40;
    auVar42 = NEON_ext(auVar8,auVar9,8,1);
    uVar33 = auVar42[0];
    uVar34 = auVar42[1];
    uVar35 = auVar42[2];
    uVar36 = auVar42[3];
    goto LAB_710276b838;
  }
  lVar18 = param_2[1];
  if (lVar18 == 0) {
    uVar33 = 0;
    uVar34 = 0;
    uVar35 = 0;
    uVar36 = 0;
    uVar37 = 0;
    uVar38 = 0;
    uVar39 = 0x80;
    uVar40 = 0x3f;
    uVar25 = 0;
    uVar26 = 0;
    uVar27 = 0;
    uVar28 = 0;
    uVar29 = 0;
    uVar30 = 0;
    uVar31 = 0;
    uVar32 = 0;
  }
  else {
    if (*(long *)(lVar18 + 0xd8) == 0) {
LAB_710276b800:
      lVar18 = (**(code **)(**(long **)(lVar18 + 0x90) + 0x158))();
    }
    else {
      uVar4 = *(uint *)((long)param_2 + 0x14);
      uVar17 = (**(code **)(**(long **)(*(long *)(*(long *)(lVar18 + 0xd8) + 8) + 8) + 0x10))();
      if (uVar17 <= uVar4) goto LAB_710276b800;
      plVar19 = *(long **)(*(long *)(*(long *)(lVar18 + 0xd8) + 8) + 0x48);
      (**(code **)(*plVar19 + 0x38))(plVar19,0);
      lVar18 = extraout_x1_00 + (ulong)uVar4 * 0x40;
    }
    uVar11 = *(undefined8 *)(lVar18 + 0x38);
    uVar33 = (undefined1)uVar11;
    uVar34 = (undefined1)((ulong)uVar11 >> 8);
    uVar35 = (undefined1)((ulong)uVar11 >> 0x10);
    uVar36 = (undefined1)((ulong)uVar11 >> 0x18);
    uVar37 = (undefined1)((ulong)uVar11 >> 0x20);
    uVar38 = (undefined1)((ulong)uVar11 >> 0x28);
    uVar39 = (undefined1)((ulong)uVar11 >> 0x30);
    uVar40 = (undefined1)((ulong)uVar11 >> 0x38);
    uVar11 = *(undefined8 *)(lVar18 + 0x30);
    uVar25 = (undefined1)uVar11;
    uVar26 = (undefined1)((ulong)uVar11 >> 8);
    uVar27 = (undefined1)((ulong)uVar11 >> 0x10);
    uVar28 = (undefined1)((ulong)uVar11 >> 0x18);
    uVar29 = (undefined1)((ulong)uVar11 >> 0x20);
    uVar30 = (undefined1)((ulong)uVar11 >> 0x28);
    uVar31 = (undefined1)((ulong)uVar11 >> 0x30);
    uVar32 = (undefined1)((ulong)uVar11 >> 0x38);
  }
  auVar6[1] = uVar26;
  auVar6[0] = uVar25;
  auVar6[2] = uVar27;
  auVar6[3] = uVar28;
  auVar6[4] = uVar29;
  auVar6[5] = uVar30;
  auVar6[6] = uVar31;
  auVar6[7] = uVar32;
  auVar6[8] = uVar33;
  auVar6[9] = uVar34;
  auVar6[10] = uVar35;
  auVar6[0xb] = uVar36;
  auVar6[0xc] = uVar37;
  auVar6[0xd] = uVar38;
  auVar6[0xe] = uVar39;
  auVar6[0xf] = uVar40;
  auVar7[1] = uVar26;
  auVar7[0] = uVar25;
  auVar7[2] = uVar27;
  auVar7[3] = uVar28;
  auVar7[4] = uVar29;
  auVar7[5] = uVar30;
  auVar7[6] = uVar31;
  auVar7[7] = uVar32;
  auVar7[8] = uVar33;
  auVar7[9] = uVar34;
  auVar7[10] = uVar35;
  auVar7[0xb] = uVar36;
  auVar7[0xc] = uVar37;
  auVar7[0xd] = uVar38;
  auVar7[0xe] = uVar39;
  auVar7[0xf] = uVar40;
  auVar42 = NEON_ext(auVar6,auVar7,8,1);
  uVar33 = auVar42[0];
  uVar34 = auVar42[1];
  uVar35 = auVar42[2];
  uVar36 = auVar42[3];
  param_2[0x11] = (ulong)auVar42._0_4_;
  param_2[0x10] =
       CONCAT17(uVar32,CONCAT16(uVar31,CONCAT15(uVar30,CONCAT14(uVar29,CONCAT13(uVar28,CONCAT12(
                                                  uVar27,CONCAT11(uVar26,uVar25)))))));
LAB_710276b838:
  param_2[0x15] = (ulong)CONCAT13(uVar36,CONCAT12(uVar35,CONCAT11(uVar34,uVar33)));
  *(ulong *)*(undefined1 (*) [12])(param_2 + 0x14) =
       CONCAT17(uVar32,CONCAT16(uVar31,CONCAT15(uVar30,CONCAT14(uVar29,CONCAT13(uVar28,CONCAT12(
                                                  uVar27,CONCAT11(uVar26,uVar25)))))));
  lVar18 = *(long *)(**(long **)(**(long **)(*param_2 + 8) + 0x338) + 8);
  if ((lVar18 != 0) && (*(uint *)((long)param_2 + 0x1c) < 0x19)) {
    plVar19 = *(long **)(lVar18 + (long)(int)*(uint *)((long)param_2 + 0x1c) * 0x50 + 0x68);
    if ((*plVar19 != 0) &&
       (((int)plVar19[1] != -1 && ((int)plVar19[1] == *(int *)(*plVar19 + 0x20))))) {
      FUN_7103736cf0(plVar19,(undefined1 (*) [12])(param_2 + 0x14));
    }
  }
  return;
}

