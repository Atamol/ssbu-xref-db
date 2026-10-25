// addr:      71024f9120
// offset:    0x24f9120
// name:      FUN_71024f9120
// mangled:   
// signature: undefined __cdecl FUN_71024f9120(undefined1[16] param_1, long param_2, long param_3, long * * * * * * * * * param_4, byte * * * * param_5, long * * * * param_6, long param_7, ulong param_8, ulong param_9)


void FUN_71024f9120(undefined1 param_1 [16],long param_2,long param_3,long *********param_4,
                   byte ****param_5,long ****param_6,long param_7,ulong param_8,ulong param_9)

{
  int iVar1;
  uint *puVar2;
  undefined2 *puVar3;
  long *plVar4;
  short sVar5;
  undefined **ppuVar6;
  long ********pppppppplVar7;
  bool bVar8;
  bool bVar9;
  uint uVar10;
  uint uVar11;
  ulong uVar12;
  ulong uVar13;
  undefined1 *puVar14;
  ulong uVar15;
  undefined8 uVar16;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  char *pcVar17;
  long lVar18;
  undefined *puVar19;
  long *******ppppppplVar20;
  int *piVar21;
  long lVar22;
  int *piVar23;
  ulong uVar24;
  ulong *puVar25;
  uint *puVar26;
  long *********ppppppppplVar27;
  char cVar28;
  ushort uVar29;
  byte ****ppppbVar30;
  char cVar31;
  undefined8 *puVar32;
  long lVar33;
  undefined8 *puVar34;
  uint *puVar35;
  long lVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  undefined8 uVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  undefined8 uVar45;
  undefined **local_1d0;
  ulong local_1c8;
  undefined4 uStack_1c0;
  undefined2 uStack_1bc;
  char cStack_1b0;
  short asStack_180 [2];
  undefined4 uStack_17c;
  undefined8 uStack_178;
  undefined4 uStack_170;
  undefined2 uStack_16c;
  undefined8 local_168;
  undefined2 local_160;
  undefined2 uStack_15e;
  undefined4 uStack_15c;
  undefined4 local_158;
  undefined2 uStack_154;
  undefined2 uStack_152;
  int local_150;
  undefined1 local_148;
  undefined4 uStack_124;
  undefined1 uStack_120;
  undefined4 uStack_11c;
  undefined1 uStack_118;
  uint auStack_110 [2];
  char acStack_108 [64];
  long *plStack_c8;
  undefined **local_c0;
  long ********local_b8 [9];
  
  uVar16 = *(undefined8 *)(param_3 + 0xb0);
  lVar22 = *(long *)(*(long *)(param_2 + 0x558) + 0x80);
  fVar42 = (float)((ulong)uVar16 >> 0x20);
  fVar43 = (*(float *)(param_3 + 0x16c) + *(float *)(param_3 + 0x968)) * *(float *)(param_3 + 0x170)
  ;
  fVar44 = (float)*(undefined8 *)(param_3 + 0xb8);
  fVar37 = *(float *)(param_3 + 0x1a0);
  fVar41 = *(float *)(param_3 + 0x19c);
  fVar39 = *(float *)(param_3 + 0x1b4);
  fVar38 = *(float *)(param_3 + 0x1b0);
  lVar18 = **(long **)(lVar22 + 0x100);
  if (lVar18 != 0) {
    fVar44 = param_1._8_4_ - fVar44;
    fVar42 = fVar44 * fVar41 + (fVar43 - fVar37 * (param_1._4_4_ - fVar42));
    *(float *)(lVar18 + 0x30) =
         ((param_1._0_4_ - (float)uVar16) / (fVar39 * fVar42) + 0.5) * 1920.0 + -960.0;
    *(float *)(lVar18 + 0x34) = ((fVar37 * fVar44) / (fVar42 * fVar38) + 0.5) * -1080.0 + 540.0;
    *(byte *)(lVar18 + 0x58) = *(byte *)(lVar18 + 0x58) | 0x10;
    uVar16 = *(undefined8 *)(param_3 + 0xb0);
    lVar22 = *(long *)(*(long *)(param_2 + 0x558) + 0x80);
    fVar42 = (float)((ulong)uVar16 >> 0x20);
    fVar43 = (*(float *)(param_3 + 0x16c) + *(float *)(param_3 + 0x968)) *
             *(float *)(param_3 + 0x170);
    fVar44 = (float)*(undefined8 *)(param_3 + 0xb8);
    fVar37 = *(float *)(param_3 + 0x1a0);
    fVar41 = *(float *)(param_3 + 0x19c);
    fVar39 = *(float *)(param_3 + 0x1b4);
    fVar38 = *(float *)(param_3 + 0x1b0);
  }
  plVar4 = DAT_710532a868;
  lVar18 = **(long **)(lVar22 + 0x110);
  if (lVar18 != 0) {
    uVar45 = *(undefined8 *)(param_2 + 0x5b0);
    fVar44 = ((float)*(undefined8 *)(param_2 + 0x5b8) + *(float *)(*DAT_710532a868 + 0x1e0)) -
             fVar44;
    fVar42 = fVar44 * fVar41 +
             (fVar43 - fVar37 * (((float)((ulong)uVar45 >> 0x20) +
                                 *(float *)(*DAT_710532a868 + 0x1dc)) - fVar42));
    *(byte *)(lVar18 + 0x58) = *(byte *)(lVar18 + 0x58) | 0x10;
    *(float *)(lVar18 + 0x30) =
         ((((float)uVar45 + 0.0) - (float)uVar16) / (fVar39 * fVar42) + 0.5) * 1920.0 + -960.0;
    *(float *)(lVar18 + 0x34) = ((fVar37 * fVar44) / (fVar42 * fVar38) + 0.5) * -1080.0 + 540.0;
  }
  if (((*(char *)(param_2 + 0x5d9) != '\0') &&
      (*(uint *)(param_2 + 0x5c8) < *(uint *)(*plVar4 + 0x1d8))) &&
     (iVar1 = *(uint *)(param_2 + 0x5c8) + 1, *(int *)(param_2 + 0x5c8) = iVar1,
     iVar1 == *(int *)(*plVar4 + 0x1d8))) {
    *(undefined1 *)(param_2 + 0x5d9) = 0;
    *(undefined4 *)(param_2 + 0x5c8) = 0;
    FUN_7103776910(&local_168,*(long *)(*(long *)(param_2 + 0x558) + 0x80) + 0x30,
                   (long ****)"keyhelp",param_4,param_5,param_6,param_7,param_8,param_9);
    plVar4 = (long *)CONCAT44(uStack_15c,CONCAT22(uStack_15e,local_160));
    lVar18 = *plVar4;
    if (lVar18 != 0) {
      *(byte *)(lVar18 + 0x58) = *(byte *)(lVar18 + 0x58) & 0xfe;
    }
    local_168 = &PTR_FUN_710523d9a8;
    local_160 = 0;
    uStack_15e = 0;
    uStack_15c = 0;
    if (plVar4 != (long *)0x0) {
      FUN_710392eb40((ulong)plVar4);
    }
  }
  plVar4 = DAT_710532a868;
  if (((*(int *)(param_2 + 0x5a8) != -1) && (*(int *)(param_2 + 0x5a8) < 0xe)) &&
     ((*(uint *)(param_2 + 0x5c4) < *(uint *)(*DAT_710532a868 + 0x1d4) &&
      (iVar1 = *(uint *)(param_2 + 0x5c4) + 1, *(int *)(param_2 + 0x5c4) = iVar1,
      iVar1 == *(int *)(*plVar4 + 0x1d4))))) {
    FUN_7103778300(0x3f800000,*(long *)(*(long *)(*(long *)(param_2 + 0x558) + 0x80) + 0x38),
                   0x710434a96f);
  }
  uVar11 = *(uint *)(*DAT_710532a860 + 0x1c);
  uVar24 = (ulong)uVar11;
  lVar18 = *(long *)(param_2 + 0x558);
  uVar10 = FUN_7102513ce0(uVar11);
  FUN_7103776640(&local_168,*(long *)(lVar18 + 0x80) + 0x30,(byte ****)"set_parts_other",param_4,
                 param_5,param_6,param_7,param_8,param_9);
  if ((uVar10 & 0xff) == 0) {
    uVar15 = CONCAT44(uStack_15c,CONCAT22(uStack_15e,local_160));
    FUN_7103778300(0x3f800000,uVar15,0x710424fb39);
  }
  else {
    uVar15 = CONCAT44(uStack_15c,CONCAT22(uStack_15e,local_160));
    FUN_7103778300(0x3f800000,uVar15,0x7104412f04);
    FUN_7103776640(&local_1d0,(long)&local_168,(byte ****)"set_parts_facility_badge",param_4,param_5
                   ,param_6,param_7,param_8,param_9);
    FUN_7103776910(&local_c0,(long)&local_1d0,(long ****)"set_txt_count",param_4,param_5,param_6,
                   param_7,param_8,param_9);
    param_4 = (long *********)0x1;
    param_5 = (byte ****)(ulong)(uVar10 & 0xff);
    FUN_710377a280((long)&local_c0,(byte *)"cam_info_menu_new_n",1);
    pppppppplVar7 = local_b8[0];
    local_c0 = &PTR_FUN_710523d9a8;
    local_b8[0] = (long ********)0x0;
    if (pppppppplVar7 != (long ********)0x0) {
      FUN_710392eb40((ulong)pppppppplVar7);
    }
    uVar13 = local_1c8;
    local_1d0 = &PTR_FUN_710523d988;
    local_1c8 = 0;
    if (uVar13 != 0) {
      uVar12 = *(ulong *)(uVar13 + 0x18);
      *(undefined ***)(uVar13 + 0x10) = &PTR_FUN_710523d9a8;
      *(undefined8 *)(uVar13 + 0x18) = 0;
      if (uVar12 != 0) {
        FUN_710392eb40(uVar12);
      }
      FUN_710392eb40(uVar13);
    }
  }
  local_168 = &PTR_FUN_710523d988;
  local_160 = 0;
  uStack_15e = 0;
  uStack_15c = 0;
  if (uVar15 != 0) {
    uVar13 = *(ulong *)(uVar15 + 0x18);
    *(undefined ***)(uVar15 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar15 + 0x18) = 0;
    if (uVar13 != 0) {
      FUN_710392eb40(uVar13);
    }
    FUN_710392eb40(uVar15);
  }
  if (2 < uVar11) goto LAB_71024fba64;
  lVar18 = *DAT_7105329f98;
  puVar34 = *(undefined8 **)(*DAT_7105314510 + 0x158);
  if ((*(byte *)(*(long *)*puVar34 + uVar24 * 0x3d700 + 0x3d6fa) >> 3 & 1) == 0)
  goto LAB_71024f9558;
  puVar32 = *(undefined8 **)(*(long *)(lVar18 + 0x40) + 0x90);
  lVar22 = *(long *)(*(long *)(*(long *)(DAT_710532f730 + 8) + 0x2f8) + 8);
  puVar25 = (ulong *)*puVar32;
  puVar14 = FUN_71032817a0(lVar22,0x169337cd2e);
  uVar15 = puVar25[2];
  if ((((uVar15 & 0xff00000000000000) == 0xc100000000000000) && ((uVar15 & 0xffffffffff) != 0)) &&
     ((((ulong)puVar14 & 0xff00000000000000) == 0xc100000000000000 &&
      (((ulong)puVar14 & 0xffffffffff) != 0)))) {
    if ((((ulong)puVar14 ^ uVar15) & 0xffffffffff) != 0) goto LAB_71024f9730;
LAB_71024f970c:
    uVar15 = FUN_71025128e0(puVar25,(long)(puVar25 + 2),param_4,param_5,param_6,param_7,param_8,
                            param_9);
    if ((uVar15 & 1) != 0) {
      puVar25 = (ulong *)*puVar32;
      lVar22 = *(long *)(*(long *)(*(long *)(DAT_710532f730 + 8) + 0x2f8) + 8);
      goto LAB_71024f9730;
    }
LAB_71024fa2b8:
    bVar9 = true;
  }
  else {
    if ((((ulong)puVar14 & 0xffffffffff) != 0 &&
        ((ulong)puVar14 & 0xff00000000000000) == 0xc100000000000000) ==
        ((uVar15 & 0xff00000000000000) == 0xc100000000000000 && (uVar15 & 0xffffffffff) != 0))
    goto LAB_71024f970c;
LAB_71024f9730:
    puVar14 = FUN_71032817a0(lVar22,0x169337cd2e);
    uVar15 = puVar25[8];
    if (((((uVar15 & 0xff00000000000000) == 0xc100000000000000) && ((uVar15 & 0xffffffffff) != 0))
        && (((ulong)puVar14 & 0xff00000000000000) == 0xc100000000000000)) &&
       (((ulong)puVar14 & 0xffffffffff) != 0)) {
      if ((((ulong)puVar14 ^ uVar15) & 0xffffffffff) == 0) {
LAB_71024f9828:
        uVar15 = FUN_71025128e0(puVar25,(long)(puVar25 + 8),param_4,param_5,param_6,param_7,param_8,
                                param_9);
        if ((uVar15 & 1) == 0) goto LAB_71024fa2b8;
        puVar25 = (ulong *)*puVar32;
        lVar22 = *(long *)(*(long *)(*(long *)(DAT_710532f730 + 8) + 0x2f8) + 8);
      }
    }
    else if ((((ulong)puVar14 & 0xffffffffff) != 0 &&
             ((ulong)puVar14 & 0xff00000000000000) == 0xc100000000000000) ==
             ((uVar15 & 0xff00000000000000) == 0xc100000000000000 && (uVar15 & 0xffffffffff) != 0))
    goto LAB_71024f9828;
    puVar14 = FUN_71032817a0(lVar22,0x169337cd2e);
    uVar15 = puVar25[0xe];
    if ((((uVar15 & 0xff00000000000000) == 0xc100000000000000) && ((uVar15 & 0xffffffffff) != 0)) &&
       ((((ulong)puVar14 & 0xff00000000000000) == 0xc100000000000000 &&
        (((ulong)puVar14 & 0xffffffffff) != 0)))) {
      if ((((ulong)puVar14 ^ uVar15) & 0xffffffffff) == 0) {
LAB_71024f99f0:
        uVar15 = FUN_71025128e0(puVar25,(long)(puVar25 + 0xe),param_4,param_5,param_6,param_7,
                                param_8,param_9);
        if ((uVar15 & 1) == 0) goto LAB_71024fa2b8;
        puVar25 = (ulong *)*puVar32;
        lVar22 = *(long *)(*(long *)(*(long *)(DAT_710532f730 + 8) + 0x2f8) + 8);
      }
    }
    else if ((((ulong)puVar14 & 0xffffffffff) != 0 &&
             ((ulong)puVar14 & 0xff00000000000000) == 0xc100000000000000) ==
             ((uVar15 & 0xff00000000000000) == 0xc100000000000000 && (uVar15 & 0xffffffffff) != 0))
    goto LAB_71024f99f0;
    puVar14 = FUN_71032817a0(lVar22,0x169337cd2e);
    uVar15 = puVar25[0x14];
    if ((((uVar15 & 0xff00000000000000) == 0xc100000000000000) && ((uVar15 & 0xffffffffff) != 0)) &&
       ((((ulong)puVar14 & 0xff00000000000000) == 0xc100000000000000 &&
        (((ulong)puVar14 & 0xffffffffff) != 0)))) {
      if ((((ulong)puVar14 ^ uVar15) & 0xffffffffff) == 0) {
LAB_71024f9bf4:
        uVar15 = FUN_71025128e0(puVar25,(long)(puVar25 + 0x14),param_4,param_5,param_6,param_7,
                                param_8,param_9);
        if ((uVar15 & 1) == 0) goto LAB_71024fa2b8;
      }
    }
    else if ((((ulong)puVar14 & 0xffffffffff) != 0 &&
             ((ulong)puVar14 & 0xff00000000000000) == 0xc100000000000000) ==
             ((uVar15 & 0xff00000000000000) == 0xc100000000000000 && (uVar15 & 0xffffffffff) != 0))
    goto LAB_71024f9bf4;
LAB_71024f9558:
    if ((*(byte *)(*(long *)*puVar34 + uVar24 * 0x3d700 + 0x3d6fa) >> 4 & 1) != 0) {
      puVar32 = *(undefined8 **)(*(long *)(lVar18 + 0x40) + 0x98);
      lVar22 = *(long *)(*(long *)(*(long *)(DAT_710532f730 + 8) + 0x2f8) + 8);
      puVar25 = (ulong *)*puVar32;
      puVar14 = FUN_71032817a0(lVar22,0x169337cd2e);
      uVar15 = puVar25[2];
      if (((((uVar15 & 0xff00000000000000) == 0xc100000000000000) && ((uVar15 & 0xffffffffff) != 0))
          && (((ulong)puVar14 & 0xff00000000000000) == 0xc100000000000000)) &&
         (((ulong)puVar14 & 0xffffffffff) != 0)) {
        if ((((ulong)puVar14 ^ uVar15) & 0xffffffffff) == 0) {
LAB_71024f98d4:
          uVar15 = FUN_71025128e0(puVar25,(long)(puVar25 + 2),param_4,param_5,param_6,param_7,
                                  param_8,param_9);
          if ((uVar15 & 1) == 0) goto LAB_71024fa2b8;
          puVar25 = (ulong *)*puVar32;
          lVar22 = *(long *)(*(long *)(*(long *)(DAT_710532f730 + 8) + 0x2f8) + 8);
        }
      }
      else if ((((ulong)puVar14 & 0xffffffffff) != 0 &&
               ((ulong)puVar14 & 0xff00000000000000) == 0xc100000000000000) ==
               ((uVar15 & 0xff00000000000000) == 0xc100000000000000 && (uVar15 & 0xffffffffff) != 0)
              ) goto LAB_71024f98d4;
      puVar14 = FUN_71032817a0(lVar22,0x169337cd2e);
      uVar15 = puVar25[8];
      if ((((uVar15 & 0xff00000000000000) == 0xc100000000000000) && ((uVar15 & 0xffffffffff) != 0))
         && ((((ulong)puVar14 & 0xff00000000000000) == 0xc100000000000000 &&
             (((ulong)puVar14 & 0xffffffffff) != 0)))) {
        if ((((ulong)puVar14 ^ uVar15) & 0xffffffffff) == 0) {
LAB_71024f9a9c:
          uVar15 = FUN_71025128e0(puVar25,(long)(puVar25 + 8),param_4,param_5,param_6,param_7,
                                  param_8,param_9);
          if ((uVar15 & 1) == 0) goto LAB_71024fa2b8;
          puVar25 = (ulong *)*puVar32;
          lVar22 = *(long *)(*(long *)(*(long *)(DAT_710532f730 + 8) + 0x2f8) + 8);
        }
      }
      else if ((((ulong)puVar14 & 0xffffffffff) != 0 &&
               ((ulong)puVar14 & 0xff00000000000000) == 0xc100000000000000) ==
               ((uVar15 & 0xff00000000000000) == 0xc100000000000000 && (uVar15 & 0xffffffffff) != 0)
              ) goto LAB_71024f9a9c;
      puVar14 = FUN_71032817a0(lVar22,0x169337cd2e);
      uVar15 = puVar25[0xe];
      if ((((uVar15 & 0xff00000000000000) == 0xc100000000000000) && ((uVar15 & 0xffffffffff) != 0))
         && ((((ulong)puVar14 & 0xff00000000000000) == 0xc100000000000000 &&
             (((ulong)puVar14 & 0xffffffffff) != 0)))) {
        if ((((ulong)puVar14 ^ uVar15) & 0xffffffffff) == 0) {
LAB_71024f9cb0:
          uVar15 = FUN_71025128e0(puVar25,(long)(puVar25 + 0xe),param_4,param_5,param_6,param_7,
                                  param_8,param_9);
          if ((uVar15 & 1) == 0) goto LAB_71024fa2b8;
          puVar25 = (ulong *)*puVar32;
          lVar22 = *(long *)(*(long *)(*(long *)(DAT_710532f730 + 8) + 0x2f8) + 8);
        }
      }
      else if ((((ulong)puVar14 & 0xffffffffff) != 0 &&
               ((ulong)puVar14 & 0xff00000000000000) == 0xc100000000000000) ==
               ((uVar15 & 0xff00000000000000) == 0xc100000000000000 && (uVar15 & 0xffffffffff) != 0)
              ) goto LAB_71024f9cb0;
      puVar14 = FUN_71032817a0(lVar22,0x169337cd2e);
      uVar15 = puVar25[0x14];
      if (((((uVar15 & 0xff00000000000000) == 0xc100000000000000) && ((uVar15 & 0xffffffffff) != 0))
          && (((ulong)puVar14 & 0xff00000000000000) == 0xc100000000000000)) &&
         (((ulong)puVar14 & 0xffffffffff) != 0)) {
        if ((((ulong)puVar14 ^ uVar15) & 0xffffffffff) == 0) {
LAB_71024f9eb4:
          uVar15 = FUN_71025128e0(puVar25,(long)(puVar25 + 0x14),param_4,param_5,param_6,param_7,
                                  param_8,param_9);
          if ((uVar15 & 1) == 0) goto LAB_71024fa2b8;
        }
      }
      else if ((((ulong)puVar14 & 0xffffffffff) != 0 &&
               ((ulong)puVar14 & 0xff00000000000000) == 0xc100000000000000) ==
               ((uVar15 & 0xff00000000000000) == 0xc100000000000000 && (uVar15 & 0xffffffffff) != 0)
              ) goto LAB_71024f9eb4;
    }
    if ((*(byte *)(*(long *)*puVar34 + uVar24 * 0x3d700 + 0x3d6fa) >> 5 & 1) != 0) {
      puVar32 = *(undefined8 **)(*(long *)(lVar18 + 0x40) + 0xa0);
      lVar22 = *(long *)(*(long *)(*(long *)(DAT_710532f730 + 8) + 0x2f8) + 8);
      puVar25 = (ulong *)*puVar32;
      puVar14 = FUN_71032817a0(lVar22,0x169337cd2e);
      uVar15 = puVar25[2];
      if ((((uVar15 & 0xff00000000000000) == 0xc100000000000000) && ((uVar15 & 0xffffffffff) != 0))
         && ((((ulong)puVar14 & 0xff00000000000000) == 0xc100000000000000 &&
             (((ulong)puVar14 & 0xffffffffff) != 0)))) {
        if ((((ulong)puVar14 ^ uVar15) & 0xffffffffff) == 0) {
LAB_71024f9b48:
          uVar15 = FUN_71025128e0(puVar25,(long)(puVar25 + 2),param_4,param_5,param_6,param_7,
                                  param_8,param_9);
          if ((uVar15 & 1) == 0) goto LAB_71024fa2b8;
          puVar25 = (ulong *)*puVar32;
          lVar22 = *(long *)(*(long *)(*(long *)(DAT_710532f730 + 8) + 0x2f8) + 8);
        }
      }
      else if ((((ulong)puVar14 & 0xffffffffff) != 0 &&
               ((ulong)puVar14 & 0xff00000000000000) == 0xc100000000000000) ==
               ((uVar15 & 0xff00000000000000) == 0xc100000000000000 && (uVar15 & 0xffffffffff) != 0)
              ) goto LAB_71024f9b48;
      puVar14 = FUN_71032817a0(lVar22,0x169337cd2e);
      uVar15 = puVar25[8];
      if ((((uVar15 & 0xff00000000000000) == 0xc100000000000000) && ((uVar15 & 0xffffffffff) != 0))
         && ((((ulong)puVar14 & 0xff00000000000000) == 0xc100000000000000 &&
             (((ulong)puVar14 & 0xffffffffff) != 0)))) {
        if ((((ulong)puVar14 ^ uVar15) & 0xffffffffff) == 0) {
LAB_71024f9d5c:
          uVar15 = FUN_71025128e0(puVar25,(long)(puVar25 + 8),param_4,param_5,param_6,param_7,
                                  param_8,param_9);
          if ((uVar15 & 1) == 0) goto LAB_71024fa2b8;
          puVar25 = (ulong *)*puVar32;
          lVar22 = *(long *)(*(long *)(*(long *)(DAT_710532f730 + 8) + 0x2f8) + 8);
        }
      }
      else if ((((ulong)puVar14 & 0xffffffffff) != 0 &&
               ((ulong)puVar14 & 0xff00000000000000) == 0xc100000000000000) ==
               ((uVar15 & 0xff00000000000000) == 0xc100000000000000 && (uVar15 & 0xffffffffff) != 0)
              ) goto LAB_71024f9d5c;
      puVar14 = FUN_71032817a0(lVar22,0x169337cd2e);
      uVar15 = puVar25[0xe];
      if (((((uVar15 & 0xff00000000000000) == 0xc100000000000000) && ((uVar15 & 0xffffffffff) != 0))
          && (((ulong)puVar14 & 0xff00000000000000) == 0xc100000000000000)) &&
         (((ulong)puVar14 & 0xffffffffff) != 0)) {
        if ((((ulong)puVar14 ^ uVar15) & 0xffffffffff) == 0) {
LAB_71024f9f00:
          uVar15 = FUN_71025128e0(puVar25,(long)(puVar25 + 0xe),param_4,param_5,param_6,param_7,
                                  param_8,param_9);
          if ((uVar15 & 1) == 0) goto LAB_71024fa2b8;
          puVar25 = (ulong *)*puVar32;
          lVar22 = *(long *)(*(long *)(*(long *)(DAT_710532f730 + 8) + 0x2f8) + 8);
        }
      }
      else if ((((ulong)puVar14 & 0xffffffffff) != 0 &&
               ((ulong)puVar14 & 0xff00000000000000) == 0xc100000000000000) ==
               ((uVar15 & 0xff00000000000000) == 0xc100000000000000 && (uVar15 & 0xffffffffff) != 0)
              ) goto LAB_71024f9f00;
      puVar14 = FUN_71032817a0(lVar22,0x169337cd2e);
      uVar15 = puVar25[0x14];
      if ((((uVar15 & 0xff00000000000000) == 0xc100000000000000) && ((uVar15 & 0xffffffffff) != 0))
         && ((((ulong)puVar14 & 0xff00000000000000) == 0xc100000000000000 &&
             (((ulong)puVar14 & 0xffffffffff) != 0)))) {
        if ((((ulong)puVar14 ^ uVar15) & 0xffffffffff) == 0) {
LAB_71024fa104:
          uVar15 = FUN_71025128e0(puVar25,(long)(puVar25 + 0x14),param_4,param_5,param_6,param_7,
                                  param_8,param_9);
          if ((uVar15 & 1) == 0) goto LAB_71024fa2b8;
        }
      }
      else if ((((ulong)puVar14 & 0xffffffffff) != 0 &&
               ((ulong)puVar14 & 0xff00000000000000) == 0xc100000000000000) ==
               ((uVar15 & 0xff00000000000000) == 0xc100000000000000 && (uVar15 & 0xffffffffff) != 0)
              ) goto LAB_71024fa104;
    }
    if ((*(byte *)(*(long *)*puVar34 + uVar24 * 0x3d700 + 0x3d6fa) >> 6 & 1) != 0) {
      puVar32 = *(undefined8 **)(*(long *)(lVar18 + 0x40) + 0xa8);
      lVar22 = *(long *)(*(long *)(*(long *)(DAT_710532f730 + 8) + 0x2f8) + 8);
      puVar25 = (ulong *)*puVar32;
      puVar14 = FUN_71032817a0(lVar22,0x169337cd2e);
      uVar15 = puVar25[2];
      if ((((uVar15 & 0xff00000000000000) == 0xc100000000000000) && ((uVar15 & 0xffffffffff) != 0))
         && ((((ulong)puVar14 & 0xff00000000000000) == 0xc100000000000000 &&
             (((ulong)puVar14 & 0xffffffffff) != 0)))) {
        if ((((ulong)puVar14 ^ uVar15) & 0xffffffffff) == 0) {
LAB_71024f9e08:
          uVar15 = FUN_71025128e0(puVar25,(long)(puVar25 + 2),param_4,param_5,param_6,param_7,
                                  param_8,param_9);
          if ((uVar15 & 1) == 0) goto LAB_71024fa2b8;
          puVar25 = (ulong *)*puVar32;
          lVar22 = *(long *)(*(long *)(*(long *)(DAT_710532f730 + 8) + 0x2f8) + 8);
        }
      }
      else if ((((ulong)puVar14 & 0xffffffffff) != 0 &&
               ((ulong)puVar14 & 0xff00000000000000) == 0xc100000000000000) ==
               ((uVar15 & 0xff00000000000000) == 0xc100000000000000 && (uVar15 & 0xffffffffff) != 0)
              ) goto LAB_71024f9e08;
      puVar14 = FUN_71032817a0(lVar22,0x169337cd2e);
      uVar15 = puVar25[8];
      if (((((uVar15 & 0xff00000000000000) == 0xc100000000000000) && ((uVar15 & 0xffffffffff) != 0))
          && (((ulong)puVar14 & 0xff00000000000000) == 0xc100000000000000)) &&
         (((ulong)puVar14 & 0xffffffffff) != 0)) {
        if ((((ulong)puVar14 ^ uVar15) & 0xffffffffff) == 0) {
LAB_71024f9fac:
          uVar15 = FUN_71025128e0(puVar25,(long)(puVar25 + 8),param_4,param_5,param_6,param_7,
                                  param_8,param_9);
          if ((uVar15 & 1) == 0) goto LAB_71024fa2b8;
          puVar25 = (ulong *)*puVar32;
          lVar22 = *(long *)(*(long *)(*(long *)(DAT_710532f730 + 8) + 0x2f8) + 8);
        }
      }
      else if ((((ulong)puVar14 & 0xffffffffff) != 0 &&
               ((ulong)puVar14 & 0xff00000000000000) == 0xc100000000000000) ==
               ((uVar15 & 0xff00000000000000) == 0xc100000000000000 && (uVar15 & 0xffffffffff) != 0)
              ) goto LAB_71024f9fac;
      puVar14 = FUN_71032817a0(lVar22,0x169337cd2e);
      uVar15 = puVar25[0xe];
      if ((((uVar15 & 0xff00000000000000) == 0xc100000000000000) && ((uVar15 & 0xffffffffff) != 0))
         && ((((ulong)puVar14 & 0xff00000000000000) == 0xc100000000000000 &&
             (((ulong)puVar14 & 0xffffffffff) != 0)))) {
        if ((((ulong)puVar14 ^ uVar15) & 0xffffffffff) == 0) {
LAB_71024fa150:
          uVar15 = FUN_71025128e0(puVar25,(long)(puVar25 + 0xe),param_4,param_5,param_6,param_7,
                                  param_8,param_9);
          if ((uVar15 & 1) == 0) goto LAB_71024fa2b8;
          puVar25 = (ulong *)*puVar32;
          lVar22 = *(long *)(*(long *)(*(long *)(DAT_710532f730 + 8) + 0x2f8) + 8);
        }
      }
      else if ((((ulong)puVar14 & 0xffffffffff) != 0 &&
               ((ulong)puVar14 & 0xff00000000000000) == 0xc100000000000000) ==
               ((uVar15 & 0xff00000000000000) == 0xc100000000000000 && (uVar15 & 0xffffffffff) != 0)
              ) goto LAB_71024fa150;
      puVar14 = FUN_71032817a0(lVar22,0x169337cd2e);
      uVar15 = puVar25[0x14];
      if ((((uVar15 & 0xff00000000000000) == 0xc100000000000000) && ((uVar15 & 0xffffffffff) != 0))
         && ((((ulong)puVar14 & 0xff00000000000000) == 0xc100000000000000 &&
             (((ulong)puVar14 & 0xffffffffff) != 0)))) {
        if ((((ulong)puVar14 ^ uVar15) & 0xffffffffff) == 0) {
LAB_71024fa2a8:
          uVar15 = FUN_71025128e0(puVar25,(long)(puVar25 + 0x14),param_4,param_5,param_6,param_7,
                                  param_8,param_9);
          if ((uVar15 & 1) == 0) goto LAB_71024fa2b8;
        }
      }
      else if ((((ulong)puVar14 & 0xffffffffff) != 0 &&
               ((ulong)puVar14 & 0xff00000000000000) == 0xc100000000000000) ==
               ((uVar15 & 0xff00000000000000) == 0xc100000000000000 && (uVar15 & 0xffffffffff) != 0)
              ) goto LAB_71024fa2a8;
    }
    if (-1 < *(char *)(*(long *)*puVar34 + uVar24 * 0x3d700 + 0x3d6fa)) goto LAB_71024f95ec;
    puVar34 = *(undefined8 **)(*(long *)(lVar18 + 0x40) + 0xb0);
    lVar18 = *(long *)(*(long *)(*(long *)(DAT_710532f730 + 8) + 0x2f8) + 8);
    puVar25 = (ulong *)*puVar34;
    puVar14 = FUN_71032817a0(lVar18,0x169337cd2e);
    uVar24 = puVar25[2];
    if (((((uVar24 & 0xff00000000000000) == 0xc100000000000000) && ((uVar24 & 0xffffffffff) != 0))
        && (((ulong)puVar14 & 0xff00000000000000) == 0xc100000000000000)) &&
       (((ulong)puVar14 & 0xffffffffff) != 0)) {
      if ((((ulong)puVar14 ^ uVar24) & 0xffffffffff) != 0) goto LAB_71024fa07c;
LAB_71024fa058:
      uVar24 = FUN_71025128e0(puVar25,(long)(puVar25 + 2),param_4,param_5,param_6,param_7,param_8,
                              param_9);
      if ((uVar24 & 1) != 0) {
        puVar25 = (ulong *)*puVar34;
        lVar18 = *(long *)(*(long *)(*(long *)(DAT_710532f730 + 8) + 0x2f8) + 8);
        goto LAB_71024fa07c;
      }
LAB_71024fae10:
      bVar9 = true;
    }
    else {
      if ((((ulong)puVar14 & 0xffffffffff) != 0 &&
          ((ulong)puVar14 & 0xff00000000000000) == 0xc100000000000000) ==
          ((uVar24 & 0xff00000000000000) == 0xc100000000000000 && (uVar24 & 0xffffffffff) != 0))
      goto LAB_71024fa058;
LAB_71024fa07c:
      puVar14 = FUN_71032817a0(lVar18,0x169337cd2e);
      uVar24 = puVar25[8];
      if ((((uVar24 & 0xff00000000000000) == 0xc100000000000000) && ((uVar24 & 0xffffffffff) != 0))
         && ((((ulong)puVar14 & 0xff00000000000000) == 0xc100000000000000 &&
             (((ulong)puVar14 & 0xffffffffff) != 0)))) {
        if ((((ulong)puVar14 ^ uVar24) & 0xffffffffff) == 0) {
LAB_71024fa1fc:
          uVar24 = FUN_71025128e0(puVar25,(long)(puVar25 + 8),param_4,param_5,param_6,param_7,
                                  param_8,param_9);
          if ((uVar24 & 1) == 0) goto LAB_71024fae10;
          puVar25 = (ulong *)*puVar34;
          lVar18 = *(long *)(*(long *)(*(long *)(DAT_710532f730 + 8) + 0x2f8) + 8);
        }
      }
      else if ((((ulong)puVar14 & 0xffffffffff) != 0 &&
               ((ulong)puVar14 & 0xff00000000000000) == 0xc100000000000000) ==
               ((uVar24 & 0xff00000000000000) == 0xc100000000000000 && (uVar24 & 0xffffffffff) != 0)
              ) goto LAB_71024fa1fc;
      puVar14 = FUN_71032817a0(lVar18,0x169337cd2e);
      uVar24 = puVar25[0xe];
      if ((((uVar24 & 0xff00000000000000) == 0xc100000000000000) && ((uVar24 & 0xffffffffff) != 0))
         && ((((ulong)puVar14 & 0xff00000000000000) == 0xc100000000000000 &&
             (((ulong)puVar14 & 0xffffffffff) != 0)))) {
        if ((((ulong)puVar14 ^ uVar24) & 0xffffffffff) == 0) {
LAB_71024fad54:
          uVar24 = FUN_71025128e0(puVar25,(long)(puVar25 + 0xe),param_4,param_5,param_6,param_7,
                                  param_8,param_9);
          if ((uVar24 & 1) == 0) goto LAB_71024fae10;
          puVar25 = (ulong *)*puVar34;
          lVar18 = *(long *)(*(long *)(*(long *)(DAT_710532f730 + 8) + 0x2f8) + 8);
        }
      }
      else if ((((ulong)puVar14 & 0xffffffffff) != 0 &&
               ((ulong)puVar14 & 0xff00000000000000) == 0xc100000000000000) ==
               ((uVar24 & 0xff00000000000000) == 0xc100000000000000 && (uVar24 & 0xffffffffff) != 0)
              ) goto LAB_71024fad54;
      puVar14 = FUN_71032817a0(lVar18,0x169337cd2e);
      uVar24 = puVar25[0x14];
      if (((((uVar24 & 0xff00000000000000) == 0xc100000000000000) && ((uVar24 & 0xffffffffff) != 0))
          && (((ulong)puVar14 & 0xff00000000000000) == 0xc100000000000000)) &&
         (((ulong)puVar14 & 0xffffffffff) != 0)) {
        if ((((ulong)puVar14 ^ uVar24) & 0xffffffffff) == 0) {
LAB_71024fae00:
          uVar24 = FUN_71025128e0(puVar25,(long)(puVar25 + 0x14),param_4,param_5,param_6,param_7,
                                  param_8,param_9);
          if ((uVar24 & 1) == 0) goto LAB_71024fae10;
        }
      }
      else if ((((ulong)puVar14 & 0xffffffffff) != 0 &&
               ((ulong)puVar14 & 0xff00000000000000) == 0xc100000000000000) ==
               ((uVar24 & 0xff00000000000000) == 0xc100000000000000 && (uVar24 & 0xffffffffff) != 0)
              ) goto LAB_71024fae00;
LAB_71024f95ec:
      bVar9 = false;
    }
  }
  FUN_7103776640(&local_168,*(long *)(*(long *)(param_2 + 0x558) + 0x80) + 0x30,
                 (byte ****)"set_parts_shop",param_4,param_5,param_6,param_7,param_8,param_9);
  uVar24 = CONCAT44(uStack_15c,CONCAT22(uStack_15e,local_160));
  if (bVar9) {
    pcVar17 = "special_on";
  }
  else {
    pcVar17 = "special_off";
  }
  FUN_7103778300(0x3f800000,uVar24,(long)pcVar17);
  local_168 = &PTR_FUN_710523d988;
  local_160 = 0;
  uStack_15e = 0;
  uStack_15c = 0;
  if (uVar24 != 0) {
    uVar15 = *(ulong *)(uVar24 + 0x18);
    *(undefined ***)(uVar24 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar24 + 0x18) = 0;
    if (uVar15 != 0) {
      FUN_710392eb40(uVar15);
    }
    FUN_710392eb40(uVar24);
  }
  lVar18 = *(long *)(param_2 + 0x558);
  bVar9 = FUN_71024dab40((long *)(*DAT_710532a860 + 0x5f390));
  if (bVar9) {
    pcVar17 = "badge_exc_on";
  }
  else {
    pcVar17 = "badge_exc_off";
  }
  FUN_7103778300(0x3f800000,*(long *)(*(long *)(lVar18 + 0x80) + 0xa0),(long)pcVar17);
  plVar4 = DAT_710532a868;
  lVar18 = *(long *)(param_2 + 0x568);
  fVar44 = 0.0;
  uVar16 = extraout_x1;
  if (lVar18 == 0) {
LAB_71024fa4a8:
    uVar24 = 0;
    uVar11 = 0;
    uVar29 = 0xffff;
    goto switchD_71024fa3b4_caseD_6;
  }
  uVar11 = 0;
  uVar24 = 0;
  uVar29 = 0xffff;
  switch(*(undefined4 *)(lVar18 + 0x88)) {
  case 1:
    if (*(char *)(lVar18 + 0x25b) == '\0') {
      uVar29 = 0x3ff;
      if (*(ushort *)(lVar18 + 0x7c) != 0xffff) {
        uVar29 = *(ushort *)(lVar18 + 0x7c);
      }
      uVar11 = 1;
      break;
    }
LAB_71024fa474:
    uVar29 = 0xffff;
    uVar24 = 0;
    uVar11 = 0;
    goto switchD_71024fa3b4_caseD_6;
  case 2:
    if (*(char *)(lVar18 + 0x25b) != '\0') goto LAB_71024fa474;
    uVar29 = 0;
    if (*(ushort *)(lVar18 + 0x7c) != 0xffff) {
      uVar29 = *(ushort *)(lVar18 + 0x7c);
    }
    uVar11 = 2;
    break;
  case 3:
    if ((*(char *)(lVar18 + 0x25b) != '\0') &&
       (((*(ulong *)(*DAT_710532a868 + 0x1c8) ^ *(ulong *)(lVar18 + 0x70)) & 0xffffffffff) != 0))
    goto LAB_71024fa4a8;
    uVar29 = 0x3ff;
    if (*(ushort *)(lVar18 + 0x7c) != 0xffff) {
      uVar29 = *(ushort *)(lVar18 + 0x7c);
    }
    uVar11 = 3;
    break;
  case 4:
    if (*(char *)(lVar18 + 0x25b) != '\0') goto LAB_71024fa474;
    uVar29 = 0x3ff;
    if (*(ushort *)(lVar18 + 0x7c) != 0xffff) {
      uVar29 = *(ushort *)(lVar18 + 0x7c);
    }
    uVar11 = 4;
    break;
  case 5:
    if (*(char *)(lVar18 + 0x25b) == '\0') {
      param_4 = (long *********)(ulong)*(uint *)(lVar18 + 0x8c);
      bVar9 = FUN_71024d74a0(*(int **)(*DAT_710532a868 + 0x340),*(int **)(*DAT_710532a868 + 0x348),
                             *(uint *)(lVar18 + 0x8c));
      uVar16 = extraout_x1_00;
      if (!bVar9) {
        piVar21 = *(int **)(*plVar4 + 0x340);
        piVar23 = *(int **)(*plVar4 + 0x348);
        if (piVar21 != piVar23) {
          do {
            if (*piVar21 == *(int *)(*(long *)(param_2 + 0x568) + 0x8c)) {
              uVar24 = *(ulong *)(piVar21 + 6);
              uVar10 = piVar21[8];
              goto LAB_71024fba14;
            }
            piVar21 = piVar21 + 0x20;
          } while (piVar23 != piVar21);
        }
        uVar10 = 0;
        uVar24 = 0;
LAB_71024fba14:
        uVar11 = 0;
        fVar44 = (float)uVar10;
        uVar29 = 0xffff;
        goto switchD_71024fa3b4_caseD_6;
      }
    }
    goto LAB_71024fa4a8;
  default:
    goto switchD_71024fa3b4_caseD_6;
  case 10:
    uVar11 = 4;
    if (*(char *)(lVar18 + 0x25b) != '\0') {
      uVar11 = 5;
    }
    uVar29 = 0x3ff;
    if (*(ushort *)(lVar18 + 0x7c) != 0xffff) {
      uVar29 = *(ushort *)(lVar18 + 0x7c);
    }
  }
  uVar45 = *(undefined8 *)(lVar18 + 0xa0);
  uVar40 = *(undefined8 *)(param_3 + 0xb0);
  uVar24 = 0;
  fVar39 = *(float *)(param_3 + 0x1a0);
  fVar38 = (float)*(undefined8 *)(lVar18 + 0xa8) - (float)*(undefined8 *)(param_3 + 0xb8);
  fVar42 = *(float *)(param_3 + 0x1b4);
  fVar37 = fVar38 * *(float *)(param_3 + 0x19c) +
           ((*(float *)(param_3 + 0x16c) + *(float *)(param_3 + 0x968)) *
            *(float *)(param_3 + 0x170) -
           fVar39 * ((float)((ulong)uVar45 >> 0x20) - (float)((ulong)uVar40 >> 0x20)));
  fVar41 = *(float *)(param_3 + 0x1b0);
  lVar18 = *(long *)(*(long *)(param_2 + 0x558) + 0x80);
  *(undefined8 *)(lVar18 + 0x238) = 0;
  *(ulong *)(lVar18 + 0x230) =
       CONCAT44(((fVar39 * fVar38) / (fVar37 * fVar41) + 0.5) * -1080.0 + 540.0,
                (((float)uVar45 - (float)uVar40) / (fVar42 * fVar37) + 0.5) * 1920.0 + -960.0);
switchD_71024fa3b4_caseD_6:
  lVar18 = *(long *)(param_2 + 0x558);
  bVar9 = *(int *)(param_3 + 0x158) != 1;
  puVar26 = *(uint **)(lVar18 + 0x80);
  uVar15 = 0;
  if (bVar9) {
    uVar15 = uVar24;
  }
  uVar10 = 0;
  if (bVar9) {
    uVar10 = uVar11;
  }
  if ((uVar10 == puVar26[0x85]) && (uVar29 == (ushort)puVar26[0x86])) goto LAB_71024fb7cc;
  if (4 < uVar10 - 1) {
    if ((puVar26[0x84] & 0xfffffffe) == 2) {
      if ((*(long *)(puVar26 + 0x10) != 0) &&
         (FUN_7103778300(0x3f800000,*(long *)(*(long *)(puVar26 + 0x10) + 8),0x710428ff7d),
         *(uint **)(puVar26 + 0x10) == puVar26 + 0x12)) {
        FUN_7103778300(0x3f800000,*(long *)(puVar26 + 0xe),0x71042a3638);
      }
      puVar26[0x84] = 4;
    }
    goto LAB_71024fb7cc;
  }
                    /* WARNING: Switch is manually overridden */
  switch(*(undefined4 *)(&UNK_71045022f4 + (ulong)(uVar10 - 1) * 4)) {
  case 0xfdff82ec:
    local_168 = (undefined **)0xffffffffffffffff;
    uStack_15c = 0;
    local_158 = 0;
    uStack_154 = 0;
    uStack_124 = 0xffffffff;
    uStack_120 = 0;
    uStack_11c = 0;
    uStack_118 = 0;
    local_1d0 = (undefined **)CONCAT62(local_1d0._2_6_,0xffff);
    local_1d0 = (undefined **)((ulong)local_1d0 & 0xffffffff);
    local_1c8 = 0x52ffff0000000000;
    uStack_1c0 = 0xffffffff;
    uStack_1bc = 0xffff;
    local_160 = 0xffff;
    if (2 < *(uint *)(*DAT_710532a860 + 0x1c)) {
LAB_71024fba64:
                    /* WARNING: Subroutine does not return */
      abort();
    }
    lVar18 = *(long *)**(undefined8 **)(*DAT_7105314510 + 0x158) +
             (ulong)*(uint *)(*DAT_710532a860 + 0x1c) * 0x3d700;
    local_168._0_4_ = CONCAT22(*(undefined2 *)(lVar18 + 0x3d6e0),0xffff);
    local_168._0_6_ = CONCAT24(*(undefined2 *)(lVar18 + 0x3d6e2),(uint)local_168);
    local_168 = (undefined **)CONCAT26(*(undefined2 *)(lVar18 + 0x3d6e4),(undefined6)local_168);
    local_160 = *(undefined2 *)(lVar18 + 0x3d6e6);
    FUN_71025cae70((undefined2 *)&local_1d0,(long)&local_168);
    ppppbVar30 = (byte ****)((ulong)local_1d0 & 0xffff);
    puVar26 = *(uint **)(*(long *)(param_2 + 0x558) + 0x80);
    ppppppppplVar27 = *(long **********)(*(long *)(param_2 + 0x568) + 0x80);
    FUN_7101e4e050(puVar26,1,param_4,param_5,param_6,param_7,param_8,param_9);
    param_6 = (long ****)0x0;
    FUN_7101e4d620((long)puVar26,uVar29,ppppppppplVar27,ppppbVar30,(long ****)0x0,param_7,param_8,
                   param_9);
    param_4 = ppppppppplVar27;
    param_5 = ppppbVar30;
    break;
  case 0xfdff83f4:
    FUN_7101e4e150(puVar26,*(uint *)(*(long *)(param_2 + 0x568) + 0x8c),param_4,param_5,param_6,
                   param_7,param_8,param_9);
    break;
  case 0xfdff8408:
    uVar24 = *(ulong *)(*(long *)(param_2 + 0x568) + 0x80);
    uVar11 = FUN_7102510850(uVar24,uVar16,(long ****)param_4,param_5,param_6,param_7,param_8,param_9
                           );
    puVar26 = *(uint **)(lVar18 + 0x80);
    if (uVar29 != 0xffff) {
      lVar18 = *(long *)(*(long *)(DAT_710532f730 + 8) + 0x1d8);
      uVar12 = (ulong)*(ushort *)(lVar18 + (long)(short)uVar29 * 2 + 0x60);
      uVar13 = (*(long *)(lVar18 + 0x28) - *(long *)(lVar18 + 0x20) >> 6) * -0x3333333333333333;
      puVar3 = (undefined2 *)(*(long *)(lVar18 + 0x20) + uVar12 * 0x140);
      if (uVar13 < uVar12 || uVar13 - uVar12 == 0) {
        puVar3 = &DAT_7105182b08;
      }
      uVar13 = *(ulong *)(puVar3 + 4);
      if ((uVar24 & 0xffffffffff) != 0) {
        uVar13 = uVar24;
      }
      FUN_7102499b60((long *)&local_c0,uVar13,(long ****)param_4,param_5,param_6,param_7,param_8,
                     param_9);
      puVar19 = local_c0[0x1e];
      *(undefined **)(puVar26 + 0x88) = puVar19;
      puVar26[0x8a] = 0;
      if ((((ulong)puVar19 & 0xff00000000000000) == 0xc100000000000000) &&
         (((ulong)puVar19 & 0xffffffffff) != 0)) {
        *(ushort *)(puVar26 + 0x86) = uVar29;
        FUN_7101e4e050(puVar26,3,param_4,param_5,param_6,param_7,param_8,param_9);
        puVar2 = puVar26 + 0x12;
        *(uint **)(puVar26 + 0x10) = puVar2;
        FUN_7103776910(&local_168,(long)puVar2,(long ****)"set_rep_boss",param_4,param_5,param_6,
                       param_7,param_8,param_9);
        if (puVar26 + 0x32 != (uint *)&local_168) {
          uVar16 = CONCAT44(uStack_15c,CONCAT22(uStack_15e,local_160));
          local_160 = 0;
          uStack_15e = 0;
          uStack_15c = 0;
          uVar24 = *(ulong *)(puVar26 + 0x34);
          *(undefined8 *)(puVar26 + 0x34) = uVar16;
          if (uVar24 != 0) {
            FUN_710392eb40(uVar24);
          }
        }
        uVar24 = CONCAT44(uStack_15c,CONCAT22(uStack_15e,local_160));
        local_168 = &PTR_FUN_710523d9a8;
        local_160 = 0;
        uStack_15e = 0;
        uStack_15c = 0;
        if (uVar24 != 0) {
          FUN_710392eb40(uVar24);
        }
        FUN_7103776910(&local_168,(long)puVar2,(long ****)"set_rep_boss_shadow",param_4,param_5,
                       param_6,param_7,param_8,param_9);
        if (puVar26 + 0x36 != (uint *)&local_168) {
          uVar16 = CONCAT44(uStack_15c,CONCAT22(uStack_15e,local_160));
          local_160 = 0;
          uStack_15e = 0;
          uStack_15c = 0;
          uVar24 = *(ulong *)(puVar26 + 0x38);
          *(undefined8 *)(puVar26 + 0x38) = uVar16;
          if (uVar24 != 0) {
            FUN_710392eb40(uVar24);
          }
        }
        uVar24 = CONCAT44(uStack_15c,CONCAT22(uStack_15e,local_160));
        local_168 = &PTR_FUN_710523d9a8;
        local_160 = 0;
        uStack_15e = 0;
        uStack_15c = 0;
        if (uVar24 != 0) {
          FUN_710392eb40(uVar24);
        }
        FUN_7103776910(&local_168,(long)puVar2,(long ****)"set_rep_eff_aura_00",param_4,param_5,
                       param_6,param_7,param_8,param_9);
        if (puVar26 + 0x3a != (uint *)&local_168) {
          uVar16 = CONCAT44(uStack_15c,CONCAT22(uStack_15e,local_160));
          local_160 = 0;
          uStack_15e = 0;
          uStack_15c = 0;
          uVar24 = *(ulong *)(puVar26 + 0x3c);
          *(undefined8 *)(puVar26 + 0x3c) = uVar16;
          if (uVar24 != 0) {
            FUN_710392eb40(uVar24);
          }
        }
        uVar24 = CONCAT44(uStack_15c,CONCAT22(uStack_15e,local_160));
        local_168 = &PTR_FUN_710523d9a8;
        local_160 = 0;
        uStack_15e = 0;
        uStack_15c = 0;
        if (uVar24 != 0) {
          FUN_710392eb40(uVar24);
        }
        lVar18 = *(long *)(*(long *)(*(long *)(puVar26 + 0x10) + 8) + 8);
        if ((lVar18 != 0) && (lVar18 = *(long *)(lVar18 + 0x18), lVar18 != 0)) {
          *(byte *)(lVar18 + 0x58) = *(byte *)(lVar18 + 0x58) | 1;
        }
        puVar35 = puVar26 + 0x14;
        FUN_7103778300(0x3f800000,*(long *)puVar35,0x710436c9ac);
        FUN_7103776910(&local_168,(long)puVar2,(long ****)"com_attribute",param_4,param_5,param_6,
                       param_7,param_8,param_9);
        plVar4 = (long *)CONCAT44(uStack_15c,CONCAT22(uStack_15e,local_160));
        lVar18 = *plVar4;
        if (lVar18 != 0) {
          *(byte *)(lVar18 + 0x58) = *(byte *)(lVar18 + 0x58) | 1;
        }
        local_168 = &PTR_FUN_710523d9a8;
        local_160 = 0;
        uStack_15e = 0;
        uStack_15c = 0;
        if (plVar4 != (long *)0x0) {
          FUN_710392eb40((ulong)plVar4);
        }
        FUN_7103778300(0x3f800000,*(long *)puVar35,0x71042810bc);
        FUN_7103778300(0x3f800000,*(long *)puVar35,0x710437cb38);
        if ((uVar11 & 1) == 0) {
          FUN_7103778300(0x3f800000,*(long *)puVar35,0x71042705a5);
          FUN_7103778300(0x3f800000,*(long *)(puVar26 + 0x14),0x710434a8ff);
          lVar18 = *(long *)(DAT_710532f730 + 8);
          uVar24 = *(ulong *)(puVar26 + 0x88);
          uVar11 = FUN_7103263540(*(long *)(lVar18 + 0x168),uVar24,0,param_5,param_6,param_7,param_8
                                  ,param_9);
          FUN_7103262310((uint *)&local_168,*(long *)(lVar18 + 0x168),uVar24);
          param_4 = (long *********)&local_160;
          FUN_71003a4ca0((uint *)&local_1d0,"nam_chr1_%02d_%s",(ulong)uVar11,param_4,param_5,param_6
                         ,param_7,param_8,param_9);
          FUN_7103776910(&local_168,(long)puVar2,(long ****)"set_txt_name_00",param_4,param_5,
                         param_6,param_7,param_8,param_9);
          pcVar17 = (char *)&local_1c8;
          FUN_710377a120((long)&local_168,pcVar17,param_4,param_5,param_6,param_7,param_8,param_9);
          uVar24 = CONCAT44(uStack_15c,CONCAT22(uStack_15e,local_160));
          local_168 = &PTR_FUN_710523d9a8;
          local_160 = 0;
          uStack_15e = 0;
          uStack_15c = 0;
          if (uVar24 != 0) {
            FUN_710392eb40(uVar24);
          }
          FUN_7103776910(&local_168,(long)puVar2,(long ****)"set_txt_name_00_edge",param_4,param_5,
                         param_6,param_7,param_8,param_9);
        }
        else {
          FUN_7103778300(0x3f800000,*(long *)puVar35,0x710434a907);
          FUN_7103778300(0x3f800000,*(long *)puVar35,0x710434a8ff);
          FUN_7103776910(&local_168,(long)puVar2,(long ****)"set_txt_name_00",param_4,param_5,
                         param_6,param_7,param_8,param_9);
          FUN_710377a120((long)&local_168,"cam_info_piece_boss_unknown",param_4,param_5,param_6,
                         param_7,param_8,param_9);
          uVar24 = CONCAT44(uStack_15c,CONCAT22(uStack_15e,local_160));
          local_168 = &PTR_FUN_710523d9a8;
          local_160 = 0;
          uStack_15e = 0;
          uStack_15c = 0;
          if (uVar24 != 0) {
            FUN_710392eb40(uVar24);
          }
          FUN_7103776910(&local_168,(long)puVar2,(long ****)"set_txt_name_00_edge",param_4,param_5,
                         param_6,param_7,param_8,param_9);
          pcVar17 = "cam_info_piece_boss_unknown";
        }
        FUN_710377a120((long)&local_168,pcVar17,param_4,param_5,param_6,param_7,param_8,param_9);
        uVar24 = CONCAT44(uStack_15c,CONCAT22(uStack_15e,local_160));
        local_168 = &PTR_FUN_710523d9a8;
        local_160 = 0;
        uStack_15e = 0;
        uStack_15c = 0;
        if (uVar24 != 0) {
          FUN_710392eb40(uVar24);
        }
        uVar24 = *(ulong *)(puVar26 + 0x88);
        *(undefined2 *)(puVar26 + 0x91) = 0;
        if (((uVar24 & 0xff00000000000000) == 0xc100000000000000) && ((uVar24 & 0xffffffffff) != 0))
        {
          param_4 = (long *********)0x1;
          local_168 = (undefined **)FUN_7103238a70(uVar24,(ulong)puVar26[0x8a],1);
          if (((ulong)local_168 & 0xffffffffff) != 0) {
            lVar18 = *(long *)(puVar26 + 8);
            param_4 = (long *********)(long)*(int *)(lVar18 + 0x70);
            param_5 = (byte ****)(ulong)*(uint *)(lVar18 + 0x68);
            FUN_710323c4e0(lVar18,&local_168,param_4,param_5,param_6,param_7,param_8,param_9);
          }
          *(undefined1 *)((long)puVar26 + 0x245) = 1;
          FUN_71037790a0(*(long *)(puVar26 + 0x34),1,param_4,param_5,param_6,param_7,param_8,param_9
                        );
          FUN_71037790a0(*(long *)(puVar26 + 0x38),1,param_4,param_5,param_6,param_7,param_8,param_9
                        );
          FUN_71037790a0(*(long *)(puVar26 + 0x3c),1,param_4,param_5,param_6,param_7,param_8,param_9
                        );
          FUN_7103778300(0x3f800000,*(long *)(puVar26 + 0x14),0x710436c9ac);
        }
      }
      FUN_7103778300(0x3f800000,*(long *)(puVar26 + 0x14),0x7104443d62);
      ppuVar6 = local_c0;
      local_c0 = (undefined **)0x0;
      if (ppuVar6 != (undefined **)0x0) {
        (**(code **)(*ppuVar6 + 8))();
      }
    }
    if ((*(long *)(*(long *)(puVar26 + 0x1c) + 8) != 0) &&
       (lVar18 = *(long *)(*(long *)(*(long *)(puVar26 + 0x1c) + 8) + 0x18), lVar18 != 0)) {
      *(byte *)(lVar18 + 0x58) = *(byte *)(lVar18 + 0x58) & 0xfe;
    }
    if ((*(long *)(*(long *)(puVar26 + 0x18) + 8) != 0) &&
       (lVar18 = *(long *)(*(long *)(*(long *)(puVar26 + 0x18) + 8) + 0x18), lVar18 != 0)) {
      *(byte *)(lVar18 + 0x58) = *(byte *)(lVar18 + 0x58) & 0xfe;
    }
    break;
  case 0xfdff86d8:
    local_168 = (undefined **)0xffffffffffffffff;
    uStack_15c = 0;
    local_158 = 0;
    uStack_154 = 0;
    uStack_124 = 0xffffffff;
    uStack_120 = 0;
    uStack_11c = 0;
    uStack_118 = 0;
    asStack_180[0] = -1;
    uStack_17c = 0;
    uStack_178 = 0x52ffff0000000000;
    uStack_170 = 0xffffffff;
    uStack_16c = 0xffff;
    local_160 = 0xffff;
    if (2 < *(uint *)(*DAT_710532a860 + 0x1c)) goto LAB_71024fba64;
    lVar18 = *(long *)**(undefined8 **)(*DAT_7105314510 + 0x158) +
             (ulong)*(uint *)(*DAT_710532a860 + 0x1c) * 0x3d700;
    local_168._0_4_ = CONCAT22(*(undefined2 *)(lVar18 + 0x3d6e0),0xffff);
    local_168._0_6_ = CONCAT24(*(undefined2 *)(lVar18 + 0x3d6e2),(uint)local_168);
    local_168 = (undefined **)CONCAT26(*(undefined2 *)(lVar18 + 0x3d6e4),(undefined6)local_168);
    local_160 = *(undefined2 *)(lVar18 + 0x3d6e6);
    FUN_71025cae70(asStack_180,(long)&local_168);
    sVar5 = asStack_180[0];
    lVar18 = (long)asStack_180[0];
    lVar22 = *(long *)(param_2 + 0x558);
    uVar24 = *(ulong *)(*(long *)(param_2 + 0x568) + 0x80);
    FUN_710250ad70(&local_1d0,*(long *)(param_2 + 0x568));
    if (uVar29 == 0xffff) break;
    puVar26 = *(uint **)(lVar22 + 0x80);
    lVar33 = *(long *)(DAT_710532f730 + 8);
    lVar22 = *(long *)(lVar33 + 0x1d8);
    uVar12 = (ulong)*(ushort *)(lVar22 + (long)(short)uVar29 * 2 + 0x60);
    uVar13 = (*(long *)(lVar22 + 0x28) - *(long *)(lVar22 + 0x20) >> 6) * -0x3333333333333333;
    puVar3 = (undefined2 *)(*(long *)(lVar22 + 0x20) + uVar12 * 0x140);
    if (uVar13 < uVar12 || uVar13 - uVar12 == 0) {
      puVar3 = &DAT_7105182b08;
    }
    uVar13 = *(ulong *)(puVar3 + 4);
    if ((uVar24 & 0xffffffffff) != 0) {
      uVar13 = uVar24;
    }
    FUN_7102499b60((long *)&plStack_c8,uVar13,(long ****)param_4,param_5,param_6,param_7,param_8,
                   param_9);
    lVar36 = *(long *)(DAT_710532f730 + 8);
    lVar22 = lVar36 + 0x160;
    uVar16 = FUN_71024989a0((long)plStack_c8);
    puVar14 = FUN_7103263e20(lVar22,(int)uVar16);
    *(undefined1 **)(puVar26 + 0x88) = puVar14;
    puVar26[0x8a] = 0;
    if ((((ulong)puVar14 & 0xff00000000000000) == 0xc100000000000000) &&
       (((ulong)puVar14 & 0xffffffffff) != 0)) {
      puVar14 = FUN_7103263e20(lVar22,0x24);
      uVar24 = *(ulong *)(puVar26 + 0x88);
      if (((uVar24 & 0xff00000000000000) == 0xc100000000000000) && ((uVar24 & 0xffffffffff) != 0)) {
        if ((((ulong)puVar14 & 0xff00000000000000) == 0xc100000000000000) &&
           ((((ulong)puVar14 & 0xffffffffff) != 0 &&
            ((((ulong)puVar14 ^ uVar24) & 0xffffffffff) == 0)))) goto LAB_71024fb0fc;
LAB_71024fb00c:
        puVar14 = FUN_7103263e20(lVar22,0x25);
        uVar24 = *(ulong *)(puVar26 + 0x88);
        if (((uVar24 & 0xff00000000000000) != 0xc100000000000000) || ((uVar24 & 0xffffffffff) == 0))
        {
          if ((((ulong)puVar14 & 0xff00000000000000) == 0xc100000000000000) &&
             (((ulong)puVar14 & 0xffffffffff) != 0)) goto LAB_71024fb0a4;
          goto LAB_71024fb0fc;
        }
        if ((((ulong)puVar14 & 0xff00000000000000) == 0xc100000000000000) &&
           ((((ulong)puVar14 & 0xffffffffff) != 0 &&
            ((((ulong)puVar14 ^ uVar24) & 0xffffffffff) == 0)))) goto LAB_71024fb0fc;
LAB_71024fb0a4:
        puVar14 = FUN_7103263e20(lVar22,0x26);
        uVar13 = *(ulong *)(puVar26 + 0x88);
        uVar24 = (ulong)puVar14 & 0xffffffffff;
        if (((uVar13 & 0xff00000000000000) != 0xc100000000000000) || ((uVar13 & 0xffffffffff) == 0))
        {
          if (((ulong)puVar14 & 0xff00000000000000) == 0xc100000000000000)
          goto joined_r0x0071024fb0f8;
          goto LAB_71024fb0fc;
        }
        if ((((ulong)puVar14 & 0xff00000000000000) == 0xc100000000000000) && (uVar24 != 0)) {
          uVar24 = ((ulong)puVar14 ^ uVar13) & 0xffffffffff;
joined_r0x0071024fb0f8:
          if (uVar24 == 0) goto LAB_71024fb0fc;
        }
      }
      else {
        if ((((ulong)puVar14 & 0xff00000000000000) == 0xc100000000000000) &&
           (((ulong)puVar14 & 0xffffffffff) != 0)) goto LAB_71024fb00c;
LAB_71024fb0fc:
        puVar14 = FUN_71032631a0(*(long *)(lVar36 + 0x168),0x11b1ccb807);
        *(undefined1 **)(puVar26 + 0x88) = puVar14;
      }
      *(ushort *)(puVar26 + 0x86) = uVar29;
      FUN_7101e4e050(puVar26,2,param_4,param_5,param_6,param_7,param_8,param_9);
      puVar2 = puVar26 + 0x12;
      *(uint **)(puVar26 + 0x10) = puVar2;
      FUN_7103776910(&local_c0,(long)puVar2,(long ****)"set_rep_fighter",param_4,param_5,param_6,
                     param_7,param_8,param_9);
      pppppppplVar7 = local_b8[0];
      if ((undefined ***)(puVar26 + 0x32) != &local_c0) {
        local_b8[0] = (long ********)0x0;
        uVar24 = *(ulong *)(puVar26 + 0x34);
        *(long *********)(puVar26 + 0x34) = pppppppplVar7;
        if (uVar24 != 0) {
          FUN_710392eb40(uVar24);
        }
      }
      pppppppplVar7 = local_b8[0];
      local_c0 = &PTR_FUN_710523d9a8;
      local_b8[0] = (long ********)0x0;
      if (pppppppplVar7 != (long ********)0x0) {
        FUN_710392eb40((ulong)pppppppplVar7);
      }
      FUN_7103776910(&local_c0,(long)puVar2,(long ****)"set_rep_fighter_shadow",param_4,param_5,
                     param_6,param_7,param_8,param_9);
      pppppppplVar7 = local_b8[0];
      if ((undefined ***)(puVar26 + 0x36) != &local_c0) {
        local_b8[0] = (long ********)0x0;
        uVar24 = *(ulong *)(puVar26 + 0x38);
        *(long *********)(puVar26 + 0x38) = pppppppplVar7;
        if (uVar24 != 0) {
          FUN_710392eb40(uVar24);
        }
      }
      pppppppplVar7 = local_b8[0];
      local_c0 = &PTR_FUN_710523d9a8;
      local_b8[0] = (long ********)0x0;
      if (pppppppplVar7 != (long ********)0x0) {
        FUN_710392eb40((ulong)pppppppplVar7);
      }
      FUN_7103776910(&local_c0,(long)puVar2,(long ****)"set_rep_eff_aura_00",param_4,param_5,param_6
                     ,param_7,param_8,param_9);
      pppppppplVar7 = local_b8[0];
      if ((undefined ***)(puVar26 + 0x3a) != &local_c0) {
        local_b8[0] = (long ********)0x0;
        uVar24 = *(ulong *)(puVar26 + 0x3c);
        *(long *********)(puVar26 + 0x3c) = pppppppplVar7;
        if (uVar24 != 0) {
          FUN_710392eb40(uVar24);
        }
      }
      pppppppplVar7 = local_b8[0];
      local_c0 = &PTR_FUN_710523d9a8;
      local_b8[0] = (long ********)0x0;
      if (pppppppplVar7 != (long ********)0x0) {
        FUN_710392eb40((ulong)pppppppplVar7);
      }
      lVar22 = *(long *)(*(long *)(*(long *)(puVar26 + 0x10) + 8) + 8);
      if ((lVar22 != 0) && (lVar22 = *(long *)(lVar22 + 0x18), lVar22 != 0)) {
        *(byte *)(lVar22 + 0x58) = *(byte *)(lVar22 + 0x58) | 1;
      }
      FUN_7103776910(&local_c0,(long)puVar2,(long ****)"com_attribute",param_4,param_5,param_6,
                     param_7,param_8,param_9);
      pppppppplVar7 = local_b8[0];
      ppppppplVar20 = *local_b8[0];
      if (ppppppplVar20 != (long *******)0x0) {
        *(byte *)(ppppppplVar20 + 0xb) = *(byte *)(ppppppplVar20 + 0xb) | 1;
      }
      local_c0 = &PTR_FUN_710523d9a8;
      local_b8[0] = (long ********)0x0;
      if (pppppppplVar7 != (long ********)0x0) {
        FUN_710392eb40((ulong)pppppppplVar7);
      }
      puVar35 = puVar26 + 0x14;
      FUN_7103778300(0x3f800000,*(long *)puVar35,0x7104443d6d);
      FUN_7103778300(0x3f800000,*(long *)puVar35,0x710434a8ff);
      lVar22 = *(long *)(DAT_710532f730 + 8);
      uVar24 = *(ulong *)(puVar26 + 0x88);
      uVar11 = FUN_7103263540(*(long *)(lVar22 + 0x168),uVar24,0,param_5,param_6,param_7,param_8,
                              param_9);
      FUN_7103262310((uint *)&local_c0,*(long *)(lVar22 + 0x168),uVar24);
      param_4 = local_b8;
      FUN_71003a4ca0(auStack_110,"nam_chr1_%02d_%s",(ulong)uVar11,param_4,param_5,param_6,param_7,
                     param_8,param_9);
      FUN_7103776910(&local_c0,(long)puVar2,(long ****)"set_txt_name_00",param_4,param_5,param_6,
                     param_7,param_8,param_9);
      FUN_710377a120((long)&local_c0,acStack_108,param_4,param_5,param_6,param_7,param_8,param_9);
      pppppppplVar7 = local_b8[0];
      local_c0 = &PTR_FUN_710523d9a8;
      local_b8[0] = (long ********)0x0;
      if (pppppppplVar7 != (long ********)0x0) {
        FUN_710392eb40((ulong)pppppppplVar7);
      }
      FUN_7103776910(&local_c0,(long)puVar2,(long ****)"set_txt_name_00_edge",param_4,param_5,
                     param_6,param_7,param_8,param_9);
      FUN_710377a120((long)&local_c0,acStack_108,param_4,param_5,param_6,param_7,param_8,param_9);
      pppppppplVar7 = local_b8[0];
      local_c0 = &PTR_FUN_710523d9a8;
      local_b8[0] = (long ********)0x0;
      if (pppppppplVar7 != (long ********)0x0) {
        FUN_710392eb40((ulong)pppppppplVar7);
      }
      if (cStack_1b0 == '\x02') {
        pcVar17 = "side_shadow";
      }
      else {
        pcVar17 = "side_light";
      }
      FUN_7103778300(0x3f800000,*(long *)puVar35,(long)pcVar17);
      lVar22 = *(long *)(puVar26 + 0x1c);
      if ((*(long *)(lVar22 + 8) != 0) &&
         (lVar36 = *(long *)(*(long *)(lVar22 + 8) + 0x18), lVar36 != 0)) {
        *(byte *)(lVar36 + 0x58) = *(byte *)(lVar36 + 0x58) | 1;
        lVar22 = *(long *)(puVar26 + 0x1c);
      }
      FUN_7103778300(0x3f800000,lVar22,0x710432a66a);
      if ((*(long *)(*(long *)(puVar26 + 0x18) + 8) != 0) &&
         (lVar22 = *(long *)(*(long *)(*(long *)(puVar26 + 0x18) + 8) + 0x18), lVar22 != 0)) {
        *(byte *)(lVar22 + 0x58) = *(byte *)(lVar22 + 0x58) & 0xfe;
      }
      if ((char)plStack_c8[1] != '\0') {
        if (*(char *)((long)plStack_c8 + 0xec) == '\0') {
          lVar22 = plStack_c8[0xe];
          lVar36 = plStack_c8[0xf];
          if (lVar36 == lVar22) goto LAB_71024fb438;
        }
        else {
          lVar22 = plStack_c8[0xe];
          lVar36 = plStack_c8[0xf];
        }
        uVar11 = (uint)((ulong)(lVar36 - lVar22) >> 3);
        if (uVar11 != 0) {
          uVar10 = 0;
          do {
            lVar36 = *(long *)(lVar22 + (ulong)uVar10 * 8);
            if (*(char *)(lVar36 + 0x10) == '\x01') {
              cVar31 = *(char *)(lVar36 + 0x48);
              if (cVar31 == '\x03') {
                lVar22 = *(long *)(puVar26 + 0x1c);
                pcVar17 = "spirit_attacker_defense";
                goto LAB_71024fb448;
              }
              if (cVar31 == '\x02') {
                lVar22 = *(long *)(puVar26 + 0x1c);
                pcVar17 = "spirit_attacker_throw";
              }
              else {
                if (cVar31 != '\x01') goto LAB_71024fb43c;
                lVar22 = *(long *)(puVar26 + 0x1c);
                pcVar17 = "spirit_attacker_offense";
              }
              goto LAB_71024fb448;
            }
            uVar10 = uVar10 + 1;
          } while (uVar10 < uVar11);
        }
      }
LAB_71024fb438:
      cVar31 = '\0';
LAB_71024fb43c:
      lVar22 = *(long *)(puVar26 + 0x1c);
      pcVar17 = "spirit_attacker_non";
LAB_71024fb448:
      FUN_7103778300(0x3f800000,lVar22,(long)pcVar17);
      cVar28 = '\0';
      puVar2 = puVar26 + 0x1a;
      puVar35 = puVar26 + 0x16;
      if ((sVar5 == -1) || (1999 < sVar5)) {
LAB_71024fb4e8:
        lVar18 = *(long *)(puVar26 + 0x18);
        pcVar17 = "spirit_attacker_non";
      }
      else {
        lVar22 = *(long *)(lVar33 + 0x1d8);
        uVar29 = *(ushort *)(lVar22 + lVar18 * 2 + 0x60);
        uVar24 = (ulong)uVar29;
        uVar13 = (*(long *)(lVar22 + 0x28) - *(long *)(lVar22 + 0x20) >> 6) * -0x3333333333333333;
        if ((uint)uVar13 <= (uint)uVar29) {
          cVar28 = '\0';
          goto LAB_71024fb4e8;
        }
        puVar3 = (undefined2 *)(*(long *)(lVar22 + 0x20) + uVar24 * 0x140);
        if (uVar13 < uVar24 || uVar13 - uVar24 == 0) {
          puVar3 = &DAT_7105182b08;
        }
        cVar28 = *(char *)(puVar3 + 0x36);
        if (cVar28 == '\x03') {
          lVar18 = *(long *)(puVar26 + 0x18);
          pcVar17 = "spirit_attacker_defense";
        }
        else if (cVar28 == '\x02') {
          lVar18 = *(long *)(puVar26 + 0x18);
          pcVar17 = "spirit_attacker_throw";
        }
        else {
          if (cVar28 != '\x01') goto LAB_71024fb4e8;
          lVar18 = *(long *)(puVar26 + 0x18);
          pcVar17 = "spirit_attacker_offense";
        }
      }
      FUN_7103778300(0x3f800000,lVar18,(long)pcVar17);
      if (cVar31 == '\x03') {
        bVar9 = cVar28 == '\x01';
        bVar8 = cVar28 == '\x02';
LAB_71024fb65c:
        if (bVar8) {
LAB_71024fb668:
          FUN_7103776910(&local_c0,(long)puVar2,(long ****)"arrow",param_4,param_5,param_6,param_7,
                         param_8,param_9);
          pppppppplVar7 = local_b8[0];
          ppppppplVar20 = *local_b8[0];
          if (ppppppplVar20 != (long *******)0x0) {
            *(byte *)(ppppppplVar20 + 0xb) = *(byte *)(ppppppplVar20 + 0xb) | 1;
          }
          local_c0 = &PTR_FUN_710523d9a8;
          local_b8[0] = (long ********)0x0;
          if (pppppppplVar7 != (long ********)0x0) {
            FUN_710392eb40((ulong)pppppppplVar7);
          }
          FUN_7103778300(0x3f800000,*(long *)(puVar26 + 0x1c),0x7104308a6f);
          *(undefined1 *)((long)puVar26 + 0x249) = 1;
          FUN_7103776910(&local_c0,(long)puVar35,(long ****)"arrow",param_4,param_5,param_6,param_7,
                         param_8,param_9);
          pppppppplVar7 = local_b8[0];
          ppppppplVar20 = *local_b8[0];
          if (ppppppplVar20 != (long *******)0x0) {
            *(byte *)(ppppppplVar20 + 0xb) = *(byte *)(ppppppplVar20 + 0xb) | 1;
          }
          local_c0 = &PTR_FUN_710523d9a8;
          local_b8[0] = (long ********)0x0;
          if (pppppppplVar7 != (long ********)0x0) {
            FUN_710392eb40((ulong)pppppppplVar7);
          }
          lVar18 = *(long *)(puVar26 + 0x18);
          pcVar17 = "arrow_up_in_own";
        }
        else {
LAB_71024fb52c:
          if (!bVar9) goto LAB_71024fb5cc;
          FUN_7103776910(&local_c0,(long)puVar2,(long ****)"arrow",param_4,param_5,param_6,param_7,
                         param_8,param_9);
          pppppppplVar7 = local_b8[0];
          ppppppplVar20 = *local_b8[0];
          if (ppppppplVar20 != (long *******)0x0) {
            *(byte *)(ppppppplVar20 + 0xb) = *(byte *)(ppppppplVar20 + 0xb) | 1;
          }
          local_c0 = &PTR_FUN_710523d9a8;
          local_b8[0] = (long ********)0x0;
          if (pppppppplVar7 != (long ********)0x0) {
            FUN_710392eb40((ulong)pppppppplVar7);
          }
          FUN_7103778300(0x3f800000,*(long *)(puVar26 + 0x1c),0x710425fa9b);
          *(undefined1 *)(puVar26 + 0x92) = 1;
          FUN_7103776910(&local_c0,(long)puVar35,(long ****)"arrow",param_4,param_5,param_6,param_7,
                         param_8,param_9);
          pppppppplVar7 = local_b8[0];
          ppppppplVar20 = *local_b8[0];
          if (ppppppplVar20 != (long *******)0x0) {
            *(byte *)(ppppppplVar20 + 0xb) = *(byte *)(ppppppplVar20 + 0xb) | 1;
          }
          local_c0 = &PTR_FUN_710523d9a8;
          local_b8[0] = (long ********)0x0;
          if (pppppppplVar7 != (long ********)0x0) {
            FUN_710392eb40((ulong)pppppppplVar7);
          }
          lVar18 = *(long *)(puVar26 + 0x18);
          pcVar17 = "arrow_down_in_own";
        }
        FUN_7103778300(0x3f800000,lVar18,(long)pcVar17);
      }
      else {
        if (cVar31 == '\x02') {
          bVar9 = cVar28 == '\x03';
          bVar8 = cVar28 == '\x01';
          goto LAB_71024fb65c;
        }
        if (cVar31 == '\x01') {
          bVar9 = cVar28 == '\x02';
          if (cVar28 == '\x03') goto LAB_71024fb668;
          goto LAB_71024fb52c;
        }
LAB_71024fb5cc:
        FUN_7103776910(&local_c0,(long)puVar2,(long ****)"arrow",param_4,param_5,param_6,param_7,
                       param_8,param_9);
        pppppppplVar7 = local_b8[0];
        ppppppplVar20 = *local_b8[0];
        if (ppppppplVar20 != (long *******)0x0) {
          *(byte *)(ppppppplVar20 + 0xb) = *(byte *)(ppppppplVar20 + 0xb) & 0xfe;
        }
        local_c0 = &PTR_FUN_710523d9a8;
        local_b8[0] = (long ********)0x0;
        if (pppppppplVar7 != (long ********)0x0) {
          FUN_710392eb40((ulong)pppppppplVar7);
        }
        FUN_7103776910(&local_c0,(long)puVar35,(long ****)"arrow",param_4,param_5,param_6,param_7,
                       param_8,param_9);
        pppppppplVar7 = local_b8[0];
        ppppppplVar20 = *local_b8[0];
        if (ppppppplVar20 != (long *******)0x0) {
          *(byte *)(ppppppplVar20 + 0xb) = *(byte *)(ppppppplVar20 + 0xb) & 0xfe;
        }
        local_c0 = &PTR_FUN_710523d9a8;
        local_b8[0] = (long ********)0x0;
        if (pppppppplVar7 != (long ********)0x0) {
          FUN_710392eb40((ulong)pppppppplVar7);
        }
      }
      uVar24 = *(ulong *)(puVar26 + 0x88);
      *(undefined2 *)(puVar26 + 0x91) = 0;
      if (((uVar24 & 0xff00000000000000) == 0xc100000000000000) && ((uVar24 & 0xffffffffff) != 0)) {
        param_4 = (long *********)0x1;
        local_c0 = (undefined **)FUN_7103238a70(uVar24,(ulong)puVar26[0x8a],1);
        if (((ulong)local_c0 & 0xffffffffff) != 0) {
          lVar18 = *(long *)(puVar26 + 8);
          param_4 = (long *********)(long)*(int *)(lVar18 + 0x70);
          param_5 = (byte ****)(ulong)*(uint *)(lVar18 + 0x68);
          FUN_710323c4e0(lVar18,(ulong *)&local_c0,param_4,param_5,param_6,param_7,param_8,param_9);
        }
        *(undefined1 *)((long)puVar26 + 0x245) = 1;
        FUN_71037790a0(*(long *)(puVar26 + 0x34),1,param_4,param_5,param_6,param_7,param_8,param_9);
        FUN_71037790a0(*(long *)(puVar26 + 0x38),1,param_4,param_5,param_6,param_7,param_8,param_9);
        FUN_71037790a0(*(long *)(puVar26 + 0x3c),1,param_4,param_5,param_6,param_7,param_8,param_9);
        FUN_7103778300(0x3f800000,*(long *)(puVar26 + 0x14),0x710436c9ac);
      }
    }
    FUN_7103778300(0x3f800000,*(long *)(puVar26 + 0x14),0x7104443d62);
    plVar4 = plStack_c8;
    plStack_c8 = (long *)0x0;
    if (plVar4 != (long *)0x0) {
      (**(code **)(*plVar4 + 8))();
    }
    break;
  case 0xfdff88b4:
    local_168 = (undefined **)0xffffffffffffffff;
    uStack_15c = 0;
    local_158 = 0;
    uStack_154 = 0;
    uStack_124 = 0xffffffff;
    uStack_120 = 0;
    uStack_11c = 0;
    uStack_118 = 0;
    local_1d0 = (undefined **)CONCAT62(local_1d0._2_6_,0xffff);
    local_1d0 = (undefined **)((ulong)local_1d0 & 0xffffffff);
    local_1c8 = 0x52ffff0000000000;
    uStack_1c0 = 0xffffffff;
    uStack_1bc = 0xffff;
    local_160 = 0xffff;
    if (2 < *(uint *)(*DAT_710532a860 + 0x1c)) goto LAB_71024fba64;
    lVar18 = *(long *)**(undefined8 **)(*DAT_7105314510 + 0x158) +
             (ulong)*(uint *)(*DAT_710532a860 + 0x1c) * 0x3d700;
    local_168._0_4_ = CONCAT22(*(undefined2 *)(lVar18 + 0x3d6e0),0xffff);
    local_168._0_6_ = CONCAT24(*(undefined2 *)(lVar18 + 0x3d6e2),(uint)local_168);
    local_168 = (undefined **)CONCAT26(*(undefined2 *)(lVar18 + 0x3d6e4),(undefined6)local_168);
    local_160 = *(undefined2 *)(lVar18 + 0x3d6e6);
    FUN_71025cae70((undefined2 *)&local_1d0,(long)&local_168);
    ppppbVar30 = (byte ****)((ulong)local_1d0 & 0xffff);
    puVar26 = *(uint **)(*(long *)(param_2 + 0x558) + 0x80);
    ppppppppplVar27 = *(long **********)(*(long *)(param_2 + 0x568) + 0x80);
    FUN_7101e4e050(puVar26,4,param_4,param_5,param_6,param_7,param_8,param_9);
    param_6 = (long ****)0x1;
    FUN_7101e4d620((long)puVar26,uVar29,ppppppppplVar27,ppppbVar30,(long ****)0x1,param_7,param_8,
                   param_9);
    param_4 = ppppppppplVar27;
    param_5 = ppppbVar30;
  }
  FUN_7101e52e00(*(long *)(*(long *)(param_2 + 0x558) + 0x80));
LAB_71024fb7cc:
  if ((uVar15 & 0xffffffffff) == 0) {
    if (((*(ulong *)(param_2 + 0x588) & 0xffffffffff) != 0) &&
       (*(ulong *)(param_2 + 0x588) = uVar15, (*(ulong *)(param_2 + 0x598) & 0xffffffffff) != 0)) {
      *(undefined8 *)(param_2 + 0x598) = 0;
      lVar18 = *(long *)(*(long *)(param_2 + 0x558) + 0x80);
      FUN_7103778300(0x3f800000,*(long *)(lVar18 + 0x38),0x71042b4947);
      if ((DAT_710532a860 != (long *)0x0) && (*(char *)(lVar18 + 0x24a) == '\0')) {
        FUN_71024d1440((undefined4 *)&local_168,*DAT_710532a860,0x1f89ba5d0f);
        local_160 = 0x3d50;
        uStack_15e = 0x4f7;
        uStack_15c = 0x71;
        lVar18 = CONCAT26(uStack_152,CONCAT24(uStack_154,local_158));
        if (((lVar18 != 0) && (DAT_7106dd53a8 == '\x01')) && (local_150 == DAT_7106dd53ac)) {
          piVar21 = (int *)(lVar18 + 0x38);
          do {
            cVar31 = '\x01';
            bVar9 = (bool)ExclusiveMonitorPass(piVar21,0x10);
            if (bVar9) {
              *piVar21 = *piVar21 + -1;
              cVar31 = ExclusiveMonitorsStatus();
            }
          } while (cVar31 != '\0');
        }
        local_158 = 0;
        uStack_154 = 0;
        uStack_152 = 0;
        local_148 = 0;
      }
    }
  }
  else if (((*(ulong *)(param_2 + 0x588) ^ uVar15) & 0xffffffffff) != 0) {
    *(ulong *)(param_2 + 0x588) = uVar15;
    FUN_71024fba70(param_2,uVar15,param_4,param_5,param_6,param_7,param_8,param_9);
    *(undefined4 *)(param_2 + 0x590) = 0;
  }
  if (((0.0 < fVar44) && ((*(ulong *)(param_2 + 0x588) & 0xffffffffff) != 0)) &&
     (((float)*(uint *)(param_2 + 0x590) < fVar44 &&
      ((uVar11 = *(uint *)(param_2 + 0x590) + 1, *(uint *)(param_2 + 0x590) = uVar11,
       fVar44 <= (float)uVar11 && ((*(ulong *)(param_2 + 0x598) & 0xffffffffff) != 0)))))) {
    *(undefined8 *)(param_2 + 0x598) = 0;
    lVar18 = *(long *)(*(long *)(param_2 + 0x558) + 0x80);
    FUN_7103778300(0x3f800000,*(long *)(lVar18 + 0x38),0x71042b4947);
    if ((DAT_710532a860 != (long *)0x0) && (*(char *)(lVar18 + 0x24a) == '\0')) {
      FUN_71024d1440((undefined4 *)&local_168,*DAT_710532a860,0x1f89ba5d0f);
      local_160 = 0x3d50;
      uStack_15e = 0x4f7;
      uStack_15c = 0x71;
      lVar18 = CONCAT26(uStack_152,CONCAT24(uStack_154,local_158));
      if (((lVar18 != 0) && (DAT_7106dd53a8 == '\x01')) && (local_150 == DAT_7106dd53ac)) {
        piVar21 = (int *)(lVar18 + 0x38);
        do {
          cVar31 = '\x01';
          bVar9 = (bool)ExclusiveMonitorPass(piVar21,0x10);
          if (bVar9) {
            *piVar21 = *piVar21 + -1;
            cVar31 = ExclusiveMonitorsStatus();
          }
        } while (cVar31 != '\0');
      }
      local_158 = 0;
      uStack_154 = 0;
      uStack_152 = 0;
      local_148 = 0;
    }
  }
  *(long *)(*(long *)(*(long *)(param_2 + 0x560) + 0x80) + 0x1158) = param_3;
  (**(code **)(**(long **)(param_2 + 0x560) + 0x18))();
  return;
}

