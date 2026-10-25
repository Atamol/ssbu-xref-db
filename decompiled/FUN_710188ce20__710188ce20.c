// addr:      710188ce20
// offset:    0x188ce20
// name:      FUN_710188ce20
// mangled:   
// signature: undefined FUN_710188ce20(void)


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1
FUN_710188ce20(ulong param_1,uint param_2,long ****param_3,byte ****param_4,long ****param_5,
              undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  char *pcVar1;
  byte bVar2;
  char cVar3;
  char cVar4;
  byte bVar5;
  undefined1 uVar6;
  char cVar7;
  short sVar8;
  char cVar9;
  long ***ppplVar10;
  long ***ppplVar11;
  undefined8 uVar12;
  bool bVar13;
  bool bVar14;
  uint uVar15;
  uint uVar16;
  int iVar17;
  long lVar18;
  undefined8 uVar19;
  long ****pppplVar20;
  byte ****ppppbVar21;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  long *********ppppppppplVar22;
  long *********ppppppppplVar23;
  byte ****ppppbVar24;
  long ****pppplVar25;
  undefined1 uVar26;
  long lVar27;
  int *piVar28;
  long *plVar29;
  undefined2 *puVar30;
  undefined4 uVar31;
  uint uVar32;
  long lVar33;
  byte *pbVar34;
  ushort *puVar35;
  uint uVar36;
  ulong uVar37;
  ushort uVar38;
  char cVar39;
  long lVar40;
  long lVar41;
  undefined8 *puVar42;
  ulong uVar43;
  undefined1 uVar44;
  byte ***pppbVar45;
  long *plVar46;
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
  undefined8 local_548;
  undefined8 local_540;
  undefined8 local_538;
  short local_530;
  undefined8 local_52e;
  undefined2 local_526;
  undefined2 uStack_524;
  undefined2 local_522;
  undefined8 local_520;
  undefined2 local_518;
  undefined1 uStack_516;
  undefined1 uStack_515;
  undefined2 uStack_514;
  ushort local_512;
  undefined1 local_510;
  undefined2 local_50f;
  undefined1 local_50d;
  undefined2 local_4fe;
  undefined2 local_4fa;
  undefined8 local_380;
  undefined8 local_378;
  long local_370;
  undefined2 local_368;
  undefined2 uStack_366;
  undefined4 uStack_364;
  undefined1 uStack_360;
  undefined1 uStack_35f;
  undefined1 uStack_35e;
  undefined1 uStack_35d;
  undefined1 uStack_35c;
  undefined1 uStack_35b;
  undefined2 uStack_35a;
  ulong local_358;
  ulong local_350;
  undefined8 local_348;
  undefined8 local_340;
  undefined8 local_338;
  undefined8 local_330;
  undefined8 local_328;
  undefined8 local_320;
  undefined8 local_318;
  undefined8 local_310;
  undefined8 local_308;
  undefined8 local_1e0;
  undefined4 local_1d8;
  byte local_1d0 [4];
  undefined4 uStack_1cc;
  undefined4 local_1c8;
  undefined2 uStack_1c4;
  undefined2 uStack_1c2;
  byte ***apppbStack_1b8 [4];
  undefined8 local_194;
  undefined2 local_18c;
  undefined8 local_178;
  undefined2 local_170;
  undefined2 local_164;
  undefined1 local_162;
  undefined2 local_160;
  undefined8 local_15e;
  undefined2 local_156;
  undefined4 local_154;
  undefined2 local_150;
  undefined4 local_14e;
  undefined2 local_14a;
  undefined4 local_148;
  char local_140 [4];
  undefined8 local_13c;
  undefined4 local_134;
  undefined8 local_130;
  undefined8 local_128;
  undefined8 local_120;
  undefined2 local_118;
  undefined6 uStack_116;
  undefined2 uStack_110;
  undefined4 local_10e;
  undefined1 uStack_10a;
  undefined1 uStack_109;
  undefined2 uStack_108;
  undefined1 uStack_106;
  undefined5 uStack_105;
  undefined8 local_100;
  undefined8 local_f8;
  byte ****local_f0;
  uint local_e8;
  undefined8 local_e0;
  byte local_d8 [18];
  undefined8 local_c6;
  ulong local_be;
  undefined1 local_b6;
  undefined8 local_98;
  undefined4 local_8c [3];
  
  if (*(long *)(param_1 + 0x1e8) == 0) {
    return 0;
  }
  plVar46 = (long *)(*(long *)(DAT_71052c4c58 + 8) + 0x88);
  lVar40 = *plVar46;
  if (*(long *)(lVar40 + 0x26b58) != 0) {
    fVar56 = 0.0;
LAB_710188cecc:
    FUN_71016bade0((undefined8 *)local_1d0,plVar46);
    lVar40 = *(long *)(*(long *)(param_1 + 0x1e8) + 0x80);
    bVar2 = local_1d0[0];
    uVar43 = (ulong)local_1d0[0];
    FUN_7101c79160((uint *)&local_548,*(undefined8 **)(lVar40 + 0x1b68),
                   CONCAT26(uStack_1c2,CONCAT24(uStack_1c4,local_1c8)));
    uVar26 = 0x67;
    if ((uint)*(byte *)(lVar40 + 0x1920) != (uint)bVar2) {
      uVar26 = 0x68;
    }
    param_3 = (long ****)0x2;
    param_4 = apppbStack_1b8;
    param_5 = (long ****)&local_540;
    FUN_7101c74c10((long *)(lVar40 + 0x480),uVar26,2,apppbStack_1b8,&local_540,param_6,param_7,
                   param_8);
    if (bVar2 < 8) {
      lVar41 = *(long *)(lVar40 + 0x450);
      iVar17 = 0;
      piVar28 = (int *)&local_130;
      lVar33 = lVar41 + uVar43 * 0x1e0;
      local_128 = (undefined1 *)CONCAT44(local_128._4_4_,2);
      local_130 = (byte ***)&DAT_100000000;
      lVar18 = lVar33 + 0x10;
      do {
        FUN_7101c75f90(lVar18,(char *)&local_540,param_3,param_4,param_5,param_6,param_7,param_8);
        FUN_7101c761a0(lVar18,iVar17,param_3,param_4,param_5,param_6,param_7,param_8);
        fVar55 = (float)(_ConstantZero >> 0x20);
        fVar50 = fVar56;
        fVar48 = fVar56;
        fVar47 = fVar56;
        fVar51 = fVar56;
        if (-1 < *(int *)(lVar33 + 0x1c8)) {
          lVar27 = **(long **)(lVar33 + 0x1d8);
          if (lVar27 == 0) {
            fVar47 = 0.0;
            fVar49 = 0.0;
            uVar43 = _ConstantZero;
            fVar51 = fVar55;
          }
          else {
            fVar50 = *(float *)(lVar27 + 0x30);
            fVar49 = ABS(*(float *)(lVar27 + 0x54) * *(float *)(lVar27 + 0x4c));
            fVar47 = ABS(*(float *)(lVar27 + 0x50) * *(float *)(lVar27 + 0x48));
            uVar37 = *(ulong *)(lVar27 + 0x30);
            bVar5 = *(byte *)(lVar27 + 0x5b) & 3;
            if (bVar5 == 2) {
              fVar50 = fVar50 - fVar47 * 0.5;
LAB_710188d040:
              uVar37 = CONCAT44((int)(uVar37 >> 0x20),fVar50);
            }
            else if (bVar5 == 1) {
              fVar50 = fVar50 + fVar47 * 0.5;
              goto LAB_710188d040;
            }
            bVar5 = *(byte *)(lVar27 + 0x5b) >> 2 & 3;
            fVar50 = (float)(uVar37 >> 0x20);
            if (bVar5 == 2) {
              fVar50 = fVar49 * 0.5 + fVar50;
LAB_710188d070:
              uVar37 = CONCAT44(fVar50,(int)uVar37);
            }
            else if (bVar5 == 1) {
              fVar50 = fVar50 - fVar49 * 0.5;
              goto LAB_710188d070;
            }
            lVar27 = *(long *)(lVar27 + 0x18);
            if (lVar27 == 0) {
              uVar43 = uVar37;
              fVar51 = (float)(uVar37 >> 0x20);
            }
            else {
              do {
                fVar50 = (float)uVar37 + *(float *)(lVar27 + 0x30);
                uVar43 = (ulong)(uint)fVar50;
                fVar51 = (float)(uVar37 >> 0x20) + *(float *)(lVar27 + 0x34);
                uVar37 = CONCAT44(fVar51,fVar50);
                lVar27 = *(long *)(lVar27 + 0x18);
              } while (lVar27 != 0);
            }
          }
          fVar48 = (float)uVar43 + 960.0;
          fVar50 = fVar48 - fVar47 * 0.5;
          fVar48 = fVar48 + fVar47 * 0.5;
          fVar47 = (540.0 - fVar51) - fVar49 * 0.5;
          fVar51 = (540.0 - fVar51) + fVar49 * 0.5;
        }
        if (bVar2 == 0) {
LAB_710188d254:
          fVar49 = fVar56;
          fVar57 = fVar56;
          fVar52 = fVar56;
          fVar54 = fVar56;
          if (-1 < *(int *)(lVar41 + 0x3a8)) {
            lVar27 = **(long **)(lVar41 + 0x3b8);
            if (lVar27 == 0) {
              fVar52 = 0.0;
              fVar53 = 0.0;
              uVar43 = _ConstantZero;
              fVar54 = fVar55;
            }
            else {
              fVar49 = *(float *)(lVar27 + 0x30);
              fVar53 = ABS(*(float *)(lVar27 + 0x54) * *(float *)(lVar27 + 0x4c));
              fVar52 = ABS(*(float *)(lVar27 + 0x50) * *(float *)(lVar27 + 0x48));
              uVar37 = *(ulong *)(lVar27 + 0x30);
              bVar5 = *(byte *)(lVar27 + 0x5b) & 3;
              if (bVar5 == 2) {
                fVar49 = fVar49 - fVar52 * 0.5;
LAB_710188d334:
                uVar37 = CONCAT44((int)(uVar37 >> 0x20),fVar49);
              }
              else if (bVar5 == 1) {
                fVar49 = fVar49 + fVar52 * 0.5;
                goto LAB_710188d334;
              }
              bVar5 = *(byte *)(lVar27 + 0x5b) >> 2 & 3;
              fVar49 = (float)(uVar37 >> 0x20);
              if (bVar5 == 2) {
                fVar49 = fVar53 * 0.5 + fVar49;
LAB_710188d364:
                uVar37 = CONCAT44(fVar49,(int)uVar37);
              }
              else if (bVar5 == 1) {
                fVar49 = fVar49 - fVar53 * 0.5;
                goto LAB_710188d364;
              }
              lVar27 = *(long *)(lVar27 + 0x18);
              if (lVar27 == 0) {
                uVar43 = uVar37;
                fVar54 = (float)(uVar37 >> 0x20);
              }
              else {
                do {
                  fVar49 = (float)uVar37 + *(float *)(lVar27 + 0x30);
                  uVar43 = (ulong)(uint)fVar49;
                  fVar54 = (float)(uVar37 >> 0x20) + *(float *)(lVar27 + 0x34);
                  uVar37 = CONCAT44(fVar54,fVar49);
                  lVar27 = *(long *)(lVar27 + 0x18);
                } while (lVar27 != 0);
              }
            }
            fVar57 = (float)uVar43 + 960.0;
            fVar49 = fVar57 - fVar52 * 0.5;
            fVar57 = fVar57 + fVar52 * 0.5;
            fVar52 = (540.0 - fVar54) - fVar53 * 0.5;
            fVar54 = (540.0 - fVar54) + fVar53 * 0.5;
          }
          if ((fVar57 - fVar49 <= -1e-05) || (1e-05 <= fVar57 - fVar49)) {
            if ((((fVar47 <= fVar54) && ((fVar52 <= fVar51 && (fVar50 <= fVar57)))) &&
                (fVar54 - fVar52 <= -1e-05 || 1e-05 <= fVar54 - fVar52)) && (fVar49 <= fVar48))
            goto LAB_710188dde4;
          }
          if (bVar2 == 2) {
LAB_710188d5e0:
            fVar49 = fVar56;
            fVar57 = fVar56;
            fVar52 = fVar56;
            fVar54 = fVar56;
            if (-1 < *(int *)(lVar41 + 0x768)) {
              lVar27 = **(long **)(lVar41 + 0x778);
              if (lVar27 == 0) {
                fVar52 = 0.0;
                fVar53 = 0.0;
                uVar43 = _ConstantZero;
                fVar54 = fVar55;
              }
              else {
                fVar49 = *(float *)(lVar27 + 0x30);
                fVar53 = ABS(*(float *)(lVar27 + 0x54) * *(float *)(lVar27 + 0x4c));
                fVar52 = ABS(*(float *)(lVar27 + 0x50) * *(float *)(lVar27 + 0x48));
                uVar37 = *(ulong *)(lVar27 + 0x30);
                bVar5 = *(byte *)(lVar27 + 0x5b) & 3;
                if (bVar5 == 2) {
                  fVar49 = fVar49 - fVar52 * 0.5;
LAB_710188d67c:
                  uVar37 = CONCAT44((int)(uVar37 >> 0x20),fVar49);
                }
                else if (bVar5 == 1) {
                  fVar49 = fVar49 + fVar52 * 0.5;
                  goto LAB_710188d67c;
                }
                bVar5 = *(byte *)(lVar27 + 0x5b) >> 2 & 3;
                fVar49 = (float)(uVar37 >> 0x20);
                if (bVar5 == 2) {
                  fVar49 = fVar53 * 0.5 + fVar49;
LAB_710188d6ac:
                  uVar37 = CONCAT44(fVar49,(int)uVar37);
                }
                else if (bVar5 == 1) {
                  fVar49 = fVar49 - fVar53 * 0.5;
                  goto LAB_710188d6ac;
                }
                lVar27 = *(long *)(lVar27 + 0x18);
                if (lVar27 == 0) {
                  uVar43 = uVar37;
                  fVar54 = (float)(uVar37 >> 0x20);
                }
                else {
                  do {
                    fVar49 = (float)uVar37 + *(float *)(lVar27 + 0x30);
                    uVar43 = (ulong)(uint)fVar49;
                    fVar54 = (float)(uVar37 >> 0x20) + *(float *)(lVar27 + 0x34);
                    uVar37 = CONCAT44(fVar54,fVar49);
                    lVar27 = *(long *)(lVar27 + 0x18);
                  } while (lVar27 != 0);
                }
              }
              fVar57 = (float)uVar43 + 960.0;
              fVar49 = fVar57 - fVar52 * 0.5;
              fVar57 = fVar57 + fVar52 * 0.5;
              fVar52 = (540.0 - fVar54) - fVar53 * 0.5;
              fVar54 = (540.0 - fVar54) + fVar53 * 0.5;
            }
            if ((fVar57 - fVar49 <= -1e-05) || (1e-05 <= fVar57 - fVar49)) {
              bVar13 = true;
              if ((fVar47 <= fVar54) && (bVar13 = false, !NAN(fVar51) && !NAN(fVar52))) {
                bVar13 = fVar51 < fVar52;
              }
              bVar14 = true;
              if ((!bVar13) && (bVar14 = false, !NAN(fVar57) && !NAN(fVar50))) {
                bVar14 = fVar57 < fVar50;
              }
              bVar13 = true;
              if ((!bVar14 && (fVar54 - fVar52 <= -1e-05 || 1e-05 <= fVar54 - fVar52)) &&
                 (bVar13 = false, !NAN(fVar48) && !NAN(fVar49))) {
                bVar13 = fVar48 < fVar49;
              }
              if (!bVar13) goto LAB_710188dde4;
            }
            if (bVar2 != 4) goto LAB_710188d77c;
LAB_710188d918:
            fVar49 = fVar56;
            fVar57 = fVar56;
            fVar52 = fVar56;
            fVar54 = fVar56;
            if (-1 < *(int *)(lVar41 + 0xb28)) {
              lVar27 = **(long **)(lVar41 + 0xb38);
              if (lVar27 == 0) {
                fVar52 = 0.0;
                fVar53 = 0.0;
                uVar43 = _ConstantZero;
                fVar54 = fVar55;
              }
              else {
                fVar49 = *(float *)(lVar27 + 0x30);
                fVar53 = ABS(*(float *)(lVar27 + 0x54) * *(float *)(lVar27 + 0x4c));
                fVar52 = ABS(*(float *)(lVar27 + 0x50) * *(float *)(lVar27 + 0x48));
                uVar37 = *(ulong *)(lVar27 + 0x30);
                bVar5 = *(byte *)(lVar27 + 0x5b) & 3;
                if (bVar5 == 2) {
                  fVar49 = fVar49 - fVar52 * 0.5;
LAB_710188d9b4:
                  uVar37 = CONCAT44((int)(uVar37 >> 0x20),fVar49);
                }
                else if (bVar5 == 1) {
                  fVar49 = fVar49 + fVar52 * 0.5;
                  goto LAB_710188d9b4;
                }
                bVar5 = *(byte *)(lVar27 + 0x5b) >> 2 & 3;
                fVar49 = (float)(uVar37 >> 0x20);
                if (bVar5 == 2) {
                  fVar49 = fVar53 * 0.5 + fVar49;
LAB_710188d9e4:
                  uVar37 = CONCAT44(fVar49,(int)uVar37);
                }
                else if (bVar5 == 1) {
                  fVar49 = fVar49 - fVar53 * 0.5;
                  goto LAB_710188d9e4;
                }
                lVar27 = *(long *)(lVar27 + 0x18);
                if (lVar27 == 0) {
                  uVar43 = uVar37;
                  fVar54 = (float)(uVar37 >> 0x20);
                }
                else {
                  do {
                    fVar49 = (float)uVar37 + *(float *)(lVar27 + 0x30);
                    uVar43 = (ulong)(uint)fVar49;
                    fVar54 = (float)(uVar37 >> 0x20) + *(float *)(lVar27 + 0x34);
                    uVar37 = CONCAT44(fVar54,fVar49);
                    lVar27 = *(long *)(lVar27 + 0x18);
                  } while (lVar27 != 0);
                }
              }
              fVar57 = (float)uVar43 + 960.0;
              fVar49 = fVar57 - fVar52 * 0.5;
              fVar57 = fVar57 + fVar52 * 0.5;
              fVar52 = (540.0 - fVar54) - fVar53 * 0.5;
              fVar54 = (540.0 - fVar54) + fVar53 * 0.5;
            }
            if ((fVar57 - fVar49 <= -1e-05) || (1e-05 <= fVar57 - fVar49)) {
              bVar13 = true;
              if ((fVar47 <= fVar54) && (bVar13 = false, !NAN(fVar51) && !NAN(fVar52))) {
                bVar13 = fVar51 < fVar52;
              }
              bVar14 = true;
              if ((!bVar13) && (bVar14 = false, !NAN(fVar57) && !NAN(fVar50))) {
                bVar14 = fVar57 < fVar50;
              }
              bVar13 = true;
              if ((!bVar14 && (fVar54 - fVar52 <= -1e-05 || 1e-05 <= fVar54 - fVar52)) &&
                 (bVar13 = false, !NAN(fVar48) && !NAN(fVar49))) {
                bVar13 = fVar48 < fVar49;
              }
              if (!bVar13) goto LAB_710188dde4;
            }
            if (bVar2 != 6) goto LAB_710188dab4;
          }
          else {
LAB_710188d400:
            fVar49 = fVar56;
            fVar57 = fVar56;
            fVar52 = fVar56;
            fVar54 = fVar56;
            if (-1 < *(int *)(lVar41 + 0x588)) {
              lVar27 = **(long **)(lVar41 + 0x598);
              if (lVar27 == 0) {
                fVar52 = 0.0;
                fVar53 = 0.0;
                uVar43 = _ConstantZero;
                fVar54 = fVar55;
              }
              else {
                fVar49 = *(float *)(lVar27 + 0x30);
                fVar53 = ABS(*(float *)(lVar27 + 0x54) * *(float *)(lVar27 + 0x4c));
                fVar52 = ABS(*(float *)(lVar27 + 0x50) * *(float *)(lVar27 + 0x48));
                uVar37 = *(ulong *)(lVar27 + 0x30);
                bVar5 = *(byte *)(lVar27 + 0x5b) & 3;
                if (bVar5 == 2) {
                  fVar49 = fVar49 - fVar52 * 0.5;
LAB_710188d4e0:
                  uVar37 = CONCAT44((int)(uVar37 >> 0x20),fVar49);
                }
                else if (bVar5 == 1) {
                  fVar49 = fVar49 + fVar52 * 0.5;
                  goto LAB_710188d4e0;
                }
                bVar5 = *(byte *)(lVar27 + 0x5b) >> 2 & 3;
                fVar49 = (float)(uVar37 >> 0x20);
                if (bVar5 == 2) {
                  fVar49 = fVar53 * 0.5 + fVar49;
LAB_710188d510:
                  uVar37 = CONCAT44(fVar49,(int)uVar37);
                }
                else if (bVar5 == 1) {
                  fVar49 = fVar49 - fVar53 * 0.5;
                  goto LAB_710188d510;
                }
                lVar27 = *(long *)(lVar27 + 0x18);
                if (lVar27 == 0) {
                  uVar43 = uVar37;
                  fVar54 = (float)(uVar37 >> 0x20);
                }
                else {
                  do {
                    fVar49 = (float)uVar37 + *(float *)(lVar27 + 0x30);
                    uVar43 = (ulong)(uint)fVar49;
                    fVar54 = (float)(uVar37 >> 0x20) + *(float *)(lVar27 + 0x34);
                    uVar37 = CONCAT44(fVar54,fVar49);
                    lVar27 = *(long *)(lVar27 + 0x18);
                  } while (lVar27 != 0);
                }
              }
              fVar57 = (float)uVar43 + 960.0;
              fVar49 = fVar57 - fVar52 * 0.5;
              fVar57 = fVar57 + fVar52 * 0.5;
              fVar52 = (540.0 - fVar54) - fVar53 * 0.5;
              fVar54 = (540.0 - fVar54) + fVar53 * 0.5;
            }
            if ((fVar57 - fVar49 <= -1e-05) || (1e-05 <= fVar57 - fVar49)) {
              bVar13 = true;
              if ((fVar47 <= fVar54) && (bVar13 = false, !NAN(fVar51) && !NAN(fVar52))) {
                bVar13 = fVar51 < fVar52;
              }
              bVar14 = true;
              if ((!bVar13) && (bVar14 = false, !NAN(fVar57) && !NAN(fVar50))) {
                bVar14 = fVar57 < fVar50;
              }
              bVar13 = true;
              if ((!bVar14 && (fVar54 - fVar52 <= -1e-05 || 1e-05 <= fVar54 - fVar52)) &&
                 (bVar13 = false, !NAN(fVar48) && !NAN(fVar49))) {
                bVar13 = fVar48 < fVar49;
              }
              if (!bVar13) goto LAB_710188dde4;
            }
            if (bVar2 != 3) goto LAB_710188d5e0;
LAB_710188d77c:
            fVar49 = fVar56;
            fVar57 = fVar56;
            fVar52 = fVar56;
            fVar54 = fVar56;
            if (-1 < *(int *)(lVar41 + 0x948)) {
              lVar27 = **(long **)(lVar41 + 0x958);
              if (lVar27 == 0) {
                fVar52 = 0.0;
                fVar53 = 0.0;
                uVar43 = _ConstantZero;
                fVar54 = fVar55;
              }
              else {
                fVar49 = *(float *)(lVar27 + 0x30);
                fVar53 = ABS(*(float *)(lVar27 + 0x54) * *(float *)(lVar27 + 0x4c));
                fVar52 = ABS(*(float *)(lVar27 + 0x50) * *(float *)(lVar27 + 0x48));
                uVar37 = *(ulong *)(lVar27 + 0x30);
                bVar5 = *(byte *)(lVar27 + 0x5b) & 3;
                if (bVar5 == 2) {
                  fVar49 = fVar49 - fVar52 * 0.5;
LAB_710188d818:
                  uVar37 = CONCAT44((int)(uVar37 >> 0x20),fVar49);
                }
                else if (bVar5 == 1) {
                  fVar49 = fVar49 + fVar52 * 0.5;
                  goto LAB_710188d818;
                }
                bVar5 = *(byte *)(lVar27 + 0x5b) >> 2 & 3;
                fVar49 = (float)(uVar37 >> 0x20);
                if (bVar5 == 2) {
                  fVar49 = fVar53 * 0.5 + fVar49;
LAB_710188d848:
                  uVar37 = CONCAT44(fVar49,(int)uVar37);
                }
                else if (bVar5 == 1) {
                  fVar49 = fVar49 - fVar53 * 0.5;
                  goto LAB_710188d848;
                }
                lVar27 = *(long *)(lVar27 + 0x18);
                if (lVar27 == 0) {
                  uVar43 = uVar37;
                  fVar54 = (float)(uVar37 >> 0x20);
                }
                else {
                  do {
                    fVar49 = (float)uVar37 + *(float *)(lVar27 + 0x30);
                    uVar43 = (ulong)(uint)fVar49;
                    fVar54 = (float)(uVar37 >> 0x20) + *(float *)(lVar27 + 0x34);
                    uVar37 = CONCAT44(fVar54,fVar49);
                    lVar27 = *(long *)(lVar27 + 0x18);
                  } while (lVar27 != 0);
                }
              }
              fVar57 = (float)uVar43 + 960.0;
              fVar49 = fVar57 - fVar52 * 0.5;
              fVar57 = fVar57 + fVar52 * 0.5;
              fVar52 = (540.0 - fVar54) - fVar53 * 0.5;
              fVar54 = (540.0 - fVar54) + fVar53 * 0.5;
            }
            if ((fVar57 - fVar49 <= -1e-05) || (1e-05 <= fVar57 - fVar49)) {
              bVar13 = true;
              if ((fVar47 <= fVar54) && (bVar13 = false, !NAN(fVar51) && !NAN(fVar52))) {
                bVar13 = fVar51 < fVar52;
              }
              bVar14 = true;
              if ((!bVar13) && (bVar14 = false, !NAN(fVar57) && !NAN(fVar50))) {
                bVar14 = fVar57 < fVar50;
              }
              bVar13 = true;
              if ((!bVar14 && (fVar54 - fVar52 <= -1e-05 || 1e-05 <= fVar54 - fVar52)) &&
                 (bVar13 = false, !NAN(fVar48) && !NAN(fVar49))) {
                bVar13 = fVar48 < fVar49;
              }
              if (!bVar13) goto LAB_710188dde4;
            }
            if (bVar2 != 5) goto LAB_710188d918;
LAB_710188dab4:
            fVar49 = fVar56;
            fVar57 = fVar56;
            fVar52 = fVar56;
            fVar54 = fVar56;
            if (-1 < *(int *)(lVar41 + 0xd08)) {
              lVar27 = **(long **)(lVar41 + 0xd18);
              if (lVar27 == 0) {
                fVar52 = 0.0;
                fVar53 = 0.0;
                uVar43 = _ConstantZero;
                fVar54 = fVar55;
              }
              else {
                fVar49 = *(float *)(lVar27 + 0x30);
                fVar53 = ABS(*(float *)(lVar27 + 0x54) * *(float *)(lVar27 + 0x4c));
                fVar52 = ABS(*(float *)(lVar27 + 0x50) * *(float *)(lVar27 + 0x48));
                uVar37 = *(ulong *)(lVar27 + 0x30);
                bVar5 = *(byte *)(lVar27 + 0x5b) & 3;
                if (bVar5 == 2) {
                  fVar49 = fVar49 - fVar52 * 0.5;
LAB_710188db50:
                  uVar37 = CONCAT44((int)(uVar37 >> 0x20),fVar49);
                }
                else if (bVar5 == 1) {
                  fVar49 = fVar49 + fVar52 * 0.5;
                  goto LAB_710188db50;
                }
                bVar5 = *(byte *)(lVar27 + 0x5b) >> 2 & 3;
                fVar49 = (float)(uVar37 >> 0x20);
                if (bVar5 == 2) {
                  fVar49 = fVar53 * 0.5 + fVar49;
LAB_710188db80:
                  uVar37 = CONCAT44(fVar49,(int)uVar37);
                }
                else if (bVar5 == 1) {
                  fVar49 = fVar49 - fVar53 * 0.5;
                  goto LAB_710188db80;
                }
                lVar27 = *(long *)(lVar27 + 0x18);
                if (lVar27 == 0) {
                  uVar43 = uVar37;
                  fVar54 = (float)(uVar37 >> 0x20);
                }
                else {
                  do {
                    fVar49 = (float)uVar37 + *(float *)(lVar27 + 0x30);
                    uVar43 = (ulong)(uint)fVar49;
                    fVar54 = (float)(uVar37 >> 0x20) + *(float *)(lVar27 + 0x34);
                    uVar37 = CONCAT44(fVar54,fVar49);
                    lVar27 = *(long *)(lVar27 + 0x18);
                  } while (lVar27 != 0);
                }
              }
              fVar57 = (float)uVar43 + 960.0;
              fVar49 = fVar57 - fVar52 * 0.5;
              fVar57 = fVar57 + fVar52 * 0.5;
              fVar52 = (540.0 - fVar54) - fVar53 * 0.5;
              fVar54 = (540.0 - fVar54) + fVar53 * 0.5;
            }
            if ((fVar57 - fVar49 <= -1e-05) || (1e-05 <= fVar57 - fVar49)) {
              bVar13 = true;
              if ((fVar47 <= fVar54) && (bVar13 = false, !NAN(fVar51) && !NAN(fVar52))) {
                bVar13 = fVar51 < fVar52;
              }
              bVar14 = true;
              if ((!bVar13) && (bVar14 = false, !NAN(fVar57) && !NAN(fVar50))) {
                bVar14 = fVar57 < fVar50;
              }
              bVar13 = true;
              if ((!bVar14 && (fVar54 - fVar52 <= -1e-05 || 1e-05 <= fVar54 - fVar52)) &&
                 (bVar13 = false, !NAN(fVar48) && !NAN(fVar49))) {
                bVar13 = fVar48 < fVar49;
              }
              if (!bVar13) goto LAB_710188dde4;
            }
            if (bVar2 == 7) goto LAB_710188ddf4;
          }
          fVar49 = fVar56;
          fVar57 = fVar56;
          fVar52 = fVar56;
          fVar54 = fVar56;
          if (-1 < *(int *)(lVar41 + 0xee8)) {
            lVar27 = **(long **)(lVar41 + 0xef8);
            if (lVar27 == 0) {
              fVar52 = 0.0;
              fVar54 = 0.0;
              uVar43 = _ConstantZero;
            }
            else {
              fVar55 = *(float *)(lVar27 + 0x30);
              fVar54 = ABS(*(float *)(lVar27 + 0x54) * *(float *)(lVar27 + 0x4c));
              fVar52 = ABS(*(float *)(lVar27 + 0x50) * *(float *)(lVar27 + 0x48));
              uVar37 = *(ulong *)(lVar27 + 0x30);
              bVar5 = *(byte *)(lVar27 + 0x5b) & 3;
              if (bVar5 == 2) {
                fVar55 = fVar55 - fVar52 * 0.5;
LAB_710188dcec:
                uVar37 = CONCAT44((int)(uVar37 >> 0x20),fVar55);
              }
              else if (bVar5 == 1) {
                fVar55 = fVar55 + fVar52 * 0.5;
                goto LAB_710188dcec;
              }
              bVar5 = *(byte *)(lVar27 + 0x5b) >> 2 & 3;
              fVar55 = (float)(uVar37 >> 0x20);
              if (bVar5 == 2) {
                fVar55 = fVar54 * 0.5 + fVar55;
LAB_710188dd1c:
                uVar37 = CONCAT44(fVar55,(int)uVar37);
              }
              else if (bVar5 == 1) {
                fVar55 = fVar55 - fVar54 * 0.5;
                goto LAB_710188dd1c;
              }
              lVar27 = *(long *)(lVar27 + 0x18);
              if (lVar27 == 0) {
                fVar55 = (float)(uVar37 >> 0x20);
                uVar43 = uVar37;
              }
              else {
                do {
                  fVar49 = (float)uVar37 + *(float *)(lVar27 + 0x30);
                  uVar43 = (ulong)(uint)fVar49;
                  fVar55 = (float)(uVar37 >> 0x20) + *(float *)(lVar27 + 0x34);
                  uVar37 = CONCAT44(fVar55,fVar49);
                  lVar27 = *(long *)(lVar27 + 0x18);
                } while (lVar27 != 0);
              }
            }
            fVar57 = (float)uVar43 + 960.0;
            fVar49 = fVar57 - fVar52 * 0.5;
            fVar57 = fVar57 + fVar52 * 0.5;
            fVar52 = (540.0 - fVar55) - fVar54 * 0.5;
            fVar54 = (540.0 - fVar55) + fVar54 * 0.5;
          }
          if ((-1e-05 < fVar57 - fVar49) && (fVar57 - fVar49 < 1e-05)) goto LAB_710188ddf4;
          bVar13 = true;
          if ((fVar47 <= fVar54) && (bVar13 = false, !NAN(fVar51) && !NAN(fVar52))) {
            bVar13 = fVar51 < fVar52;
          }
          bVar14 = true;
          if ((!bVar13) && (bVar14 = false, !NAN(fVar57) && !NAN(fVar50))) {
            bVar14 = fVar57 < fVar50;
          }
          bVar13 = true;
          if ((!bVar14 && (fVar54 - fVar52 <= -1e-05 || 1e-05 <= fVar54 - fVar52)) &&
             (bVar13 = false, !NAN(fVar48) && !NAN(fVar49))) {
            bVar13 = fVar48 < fVar49;
          }
          if (bVar13) goto LAB_710188ddf4;
        }
        else {
          fVar49 = fVar56;
          fVar57 = fVar56;
          fVar52 = fVar56;
          fVar54 = fVar56;
          if (-1 < *(int *)(lVar41 + 0x1c8)) {
            lVar27 = **(long **)(lVar41 + 0x1d8);
            if (lVar27 == 0) {
              fVar52 = 0.0;
              fVar53 = 0.0;
              uVar43 = _ConstantZero;
              fVar54 = fVar55;
            }
            else {
              fVar49 = *(float *)(lVar27 + 0x30);
              fVar53 = ABS(*(float *)(lVar27 + 0x54) * *(float *)(lVar27 + 0x4c));
              fVar52 = ABS(*(float *)(lVar27 + 0x50) * *(float *)(lVar27 + 0x48));
              uVar37 = *(ulong *)(lVar27 + 0x30);
              bVar5 = *(byte *)(lVar27 + 0x5b) & 3;
              if (bVar5 == 2) {
                fVar49 = fVar49 - fVar52 * 0.5;
LAB_710188d188:
                uVar37 = CONCAT44((int)(uVar37 >> 0x20),fVar49);
              }
              else if (bVar5 == 1) {
                fVar49 = fVar49 + fVar52 * 0.5;
                goto LAB_710188d188;
              }
              bVar5 = *(byte *)(lVar27 + 0x5b) >> 2 & 3;
              fVar49 = (float)(uVar37 >> 0x20);
              if (bVar5 == 2) {
                fVar49 = fVar53 * 0.5 + fVar49;
LAB_710188d1b8:
                uVar37 = CONCAT44(fVar49,(int)uVar37);
              }
              else if (bVar5 == 1) {
                fVar49 = fVar49 - fVar53 * 0.5;
                goto LAB_710188d1b8;
              }
              lVar27 = *(long *)(lVar27 + 0x18);
              if (lVar27 == 0) {
                uVar43 = uVar37;
                fVar54 = (float)(uVar37 >> 0x20);
              }
              else {
                do {
                  fVar49 = (float)uVar37 + *(float *)(lVar27 + 0x30);
                  uVar43 = (ulong)(uint)fVar49;
                  fVar54 = (float)(uVar37 >> 0x20) + *(float *)(lVar27 + 0x34);
                  uVar37 = CONCAT44(fVar54,fVar49);
                  lVar27 = *(long *)(lVar27 + 0x18);
                } while (lVar27 != 0);
              }
            }
            fVar57 = (float)uVar43 + 960.0;
            fVar49 = fVar57 - fVar52 * 0.5;
            fVar57 = fVar57 + fVar52 * 0.5;
            fVar52 = (540.0 - fVar54) - fVar53 * 0.5;
            fVar54 = (540.0 - fVar54) + fVar53 * 0.5;
          }
          if ((-1e-05 < fVar57 - fVar49) && (fVar57 - fVar49 < 1e-05)) {
LAB_710188d24c:
            if (bVar2 != 1) goto LAB_710188d254;
            goto LAB_710188d400;
          }
          if ((fVar54 < fVar47) ||
             ((((fVar51 < fVar52 || (fVar57 < fVar50)) ||
               (-1e-05 < fVar54 - fVar52 && fVar54 - fVar52 < 1e-05)) || (fVar48 < fVar49))))
          goto LAB_710188d24c;
        }
LAB_710188dde4:
        piVar28 = piVar28 + 1;
        if (piVar28 == (int *)((long)&local_128 + 4)) goto code_r0x00710188ddf0;
        iVar17 = *piVar28;
      } while( true );
    }
    goto LAB_710188def8;
  }
LAB_710188df10:
  if (*(char *)(param_1 + 0x252) == '\0') {
    if ((param_2 & 1) == 0) {
      return 0;
    }
  }
  else {
    if (*(long *)(lVar40 + 0x9ff8) == 0) {
      return 0;
    }
    uVar15 = FUN_71016f6340(lVar40 + 0xa010,*(long *)(lVar40 + 0x9ff8));
    if ((~uVar15 & 0xff) == 0) {
      return 0;
    }
    if ((*(uint *)(lVar40 + 0xa000) & 1 << (ulong)(uVar15 & 0x1f)) == 0) {
      return 0;
    }
    if (*(long *)(lVar40 + 0x9ff0) == 0) {
      uVar16 = 0xff;
    }
    else {
      uVar16 = FUN_71016f6340(lVar40 + 0xa010,*(long *)(lVar40 + 0x9ff0));
    }
    if ((uVar16 & 0xff) != (uVar15 & 0xff)) {
      return 0;
    }
    if ((param_2 & 1) == 0) {
      return 0;
    }
  }
  if (*(char *)(lVar40 + 0x26b2d) == '\0') {
    if (*(long *)(lVar40 + 0x9ff0) != 0) {
      uVar15 = FUN_71016f6340(lVar40 + 0xa010,*(long *)(lVar40 + 0x9ff0));
      if (((uVar15 & 0xff) < 8) &&
         (uVar43 = (ulong)uVar15 & 0xff,
         *(char *)(*(long *)(*(long *)(param_1 + 0x1e8) + 0x80) + uVar43 * 0x1e8 + 0xafc) != '\0'))
      {
        if (uVar43 == 0xff) {
          if ((DAT_71052c4cf8 & 1) == 0) {
            iVar17 = __cxa_guard_acquire(&DAT_71052c4cf8);
            puVar42 = &DAT_71052c4c80;
            if (iVar17 != 0) {
              DAT_71052c4ccc = 0xffffff;
              DAT_71052c4ca0 = 0;
              DAT_71052c4ca8 = 0;
              DAT_71052c4cd0 = 1;
              DAT_71052c4cda = 0xff0000;
              DAT_71052c4cca = 0;
              DAT_71052c4cc8 = 0;
              DAT_71052c4cb0 = 0;
              DAT_71052c4cd4 = 0;
              DAT_71052c4cd8 = 0;
              DAT_71052c4cf0 = 0;
              DAT_71052c4c90 = 0;
              DAT_71052c4c98 = 0;
              DAT_71052c4c80 = 0;
              DAT_71052c4c88 = 0;
              DAT_71052c4ce0 = 0xffffffffffffffff;
              DAT_71052c4ce8 = 0;
              __cxa_guard_release(&DAT_71052c4cf8);
            }
          }
          else {
            puVar42 = &DAT_71052c4c80;
          }
        }
        else {
          if (0xf < uVar43) goto LAB_7101890334;
          puVar42 = (undefined8 *)(lVar40 + uVar43 * 0x78 + 0xa018);
        }
        if (*(int *)(puVar42 + 0xd) != 2) {
          *(char *)(*plVar46 + 0x26b2c) = '\0';
          return 0;
        }
        if (*(char *)(*plVar46 + 0x26b2c) == '\0') {
          lVar40 = *(long *)(*(long *)(param_1 + 0x1e8) + 0x80);
          if (7 < (ulong)*(byte *)(lVar40 + 0x1861)) goto LAB_7101890334;
          ppppbVar24 = (byte ****)(lVar40 + (ulong)*(byte *)(lVar40 + 0x1861) * 0x1e8 + 0x924);
          FUN_7101c74c10((long *)(lVar40 + 0x480),0x69,1,ppppbVar24,param_5,param_6,param_7,param_8)
          ;
          *(undefined1 *)(*plVar46 + 0x26b2c) = 1;
          if ((*(char *)(param_1 + 0x24d) != '\0') ||
             ((*(long *)(param_1 + 0x1e8) != 0 &&
              (*(int *)(*(long *)(*(long *)(param_1 + 0x1e8) + 0x80) + 0x2c0) - 2U < 3)))) {
            lVar40 = *(long *)(*plVar46 + 0x9ff8);
            if (lVar40 == 0) {
              uVar15 = 0xff;
            }
            else {
              uVar15 = FUN_71016f6340(*plVar46 + 0xa010,lVar40);
              uVar15 = uVar15 & 0xff;
            }
            uVar15 = 1 << (ulong)(uVar15 & 0x1f);
            uVar19 = 1;
            local_548 = (undefined **)CONCAT44(local_548._4_4_,uVar15);
            FUN_7101891fd0(param_1,uVar15,(undefined ***)0x1,ppppbVar24,param_5,param_6,param_7,
                           param_8);
            FUN_71018924f0(param_1,1,uVar19,ppppbVar24,param_5,param_6,param_7,param_8);
            lVar40 = *(long *)(*plVar46 + 0x9ff8);
            if ((((lVar40 != 0) &&
                 (uVar15 = FUN_71016f6340(*plVar46 + 0xa010,lVar40), (~uVar15 & 0xff) != 0)) &&
                (*(long *)(DAT_710533a0a0 + 0x30) != 0)) &&
               (lVar40 = *(long *)(*(long *)(DAT_710533a0a0 + 0x30) + 0x2108), lVar40 != 0)) {
              FUN_7103701910(lVar40,0x191,&local_548,4,1);
            }
          }
        }
      }
    }
    return 0;
  }
  if ((*(char *)(lVar40 + 0x26a62) == '\0') && (*(int *)(lVar40 + 0x26a34) != 0)) {
    return 0;
  }
  if (*(char *)(lVar40 + 0x26b2f) == '\0') {
    if (*(long *)(lVar40 + 0x9ff8) == 0) {
LAB_710188fe0c:
      FUN_7101c73ca0((long *)(*(long *)(*(long *)(param_1 + 0x1e8) + 0x80) + 0x480),0x71,param_3,
                     param_4,param_5,param_6,param_7,param_8);
    }
    else {
      uVar15 = FUN_71016f6340(lVar40 + 0xa010,*(long *)(lVar40 + 0x9ff8));
      if (((~uVar15 & 0xff) == 0) ||
         ((*(uint *)(lVar40 + 0xa000) & 1 << (ulong)(uVar15 & 0x1f)) == 0)) goto LAB_710188fe0c;
      if (*(long *)(lVar40 + 0x9ff0) == 0) {
        uVar16 = 0xff;
      }
      else {
        uVar16 = FUN_71016f6340(lVar40 + 0xa010,*(long *)(lVar40 + 0x9ff0));
      }
      if ((uVar16 & 0xff) != (uVar15 & 0xff)) goto LAB_710188fe0c;
    }
    uVar26 = 0;
    goto LAB_7101890218;
  }
  local_1d0[0] = 8;
  local_1d0[1] = 0;
  uStack_1cc = 0;
  local_1c8 = 0;
  uStack_1c4 = 0;
  local_194 = 0;
  local_160 = 0x3c;
  local_18c = 0;
  local_178 = 0;
  local_170 = 0;
  local_164 = 0;
  local_162 = 0;
  local_15e = 0x200000503;
  local_156 = 10;
  local_154 = 0x10100;
  local_150 = 0x103;
  local_14e = 0x1000100;
  local_14a = 0x101;
  local_148 = 0;
  FUN_71018918d0(local_1d0);
  cVar9 = (char)local_14a;
  uVar26 = 0;
  if ((char)local_14a != *(char *)(*(long *)(*(long *)(param_1 + 0x1e8) + 0x80) + 0x18e6)) {
    if (*(int *)(param_1 + 0x1c8) == 6) {
      iVar17 = *(int *)(param_1 + 0x1c4);
      if ((0 < iVar17) &&
         (*(int *)(param_1 + 0x1c4) = iVar17 + -1, bVar13 = 0x12 < iVar17, iVar17 = iVar17 + -1,
         bVar13)) goto LAB_710188e1d8;
      lVar40 = (long)iVar17 + 1;
      *(uint *)(param_1 + 0x1c4) = (uint)lVar40;
      if (0x12 < (uint)lVar40) goto LAB_7101890334;
      uVar31 = 6;
LAB_710188e2e8:
      bVar2 = 0;
      *(undefined4 *)(param_1 + lVar40 * 4 + 0x178) = uVar31;
    }
    else if (*(int *)(param_1 + 0x1c8) == 9) {
      iVar17 = *(int *)(param_1 + 0x1c4);
      if ((iVar17 < 1) ||
         (*(int *)(param_1 + 0x1c4) = iVar17 + -1, bVar13 = iVar17 < 0x13, iVar17 = iVar17 + -1,
         bVar13)) {
        uVar15 = (uint)((long)iVar17 + 1);
        *(uint *)(param_1 + 0x1c4) = uVar15;
        if (0x12 < uVar15) goto LAB_7101890334;
        *(undefined4 *)(param_1 + ((long)iVar17 + 1) * 4 + 0x178) = 0x13;
        bVar2 = 1;
      }
      else {
        bVar2 = 1;
      }
    }
    else {
      if (*(int *)(param_1 + 0x1c4) < 0x12) {
        uVar15 = *(int *)(param_1 + 0x1c4) + 1;
        *(uint *)(param_1 + 0x1c4) = uVar15;
        if (0x12 < uVar15) goto LAB_7101890334;
        lVar40 = (long)(int)uVar15;
        uVar31 = 0x13;
        goto LAB_710188e2e8;
      }
LAB_710188e1d8:
      bVar2 = 0;
    }
    lVar40 = *(long *)(*plVar46 + 0x9ff8);
    if (lVar40 == 0) {
LAB_710188e334:
      uVar15 = 0;
    }
    else {
      uVar15 = FUN_71016f6340(*plVar46 + 0xa010,lVar40);
      if (7 < (uVar15 & 0xff)) goto LAB_710188e334;
      uVar15 = (uint)*(byte *)(*(long *)(*(long *)(param_1 + 0x1e8) + 0x80) +
                               ((ulong)uVar15 & 0xff) * 0x1e8 + 0xaf8);
    }
    if ((((!(bool)(1 < uVar15 - 1 & (bVar2 ^ 1))) && (*(int *)(param_1 + 0x1c8) != 0xb)) &&
        (*(int *)(param_1 + 0x1c8) != 0xd)) && (*(int *)(param_1 + 0x1c4) < 0x12)) {
      uVar15 = *(int *)(param_1 + 0x1c4) + 1;
      *(uint *)(param_1 + 0x1c4) = uVar15;
      if (0x12 < uVar15) goto LAB_7101890334;
      *(undefined4 *)(param_1 + (long)(int)uVar15 * 4 + 0x178) = 0xb;
      if (*(int *)(param_1 + 0x1c4) < 0x12) {
        uVar15 = *(int *)(param_1 + 0x1c4) + 1;
        *(uint *)(param_1 + 0x1c4) = uVar15;
        if (0x12 < uVar15) goto LAB_7101890334;
        *(undefined4 *)(param_1 + (long)(int)uVar15 * 4 + 0x178) = 0xd;
      }
    }
    uVar15 = 2;
    if (cVar9 != '\x03') {
      uVar15 = 4;
    }
    lVar40 = *plVar46;
    uVar16 = 3;
    if (cVar9 != '\x02') {
      uVar16 = uVar15;
    }
    local_548 = (undefined **)CONCAT44(local_548._4_4_,uVar16);
    if (((*(long *)(lVar40 + 0x9ff8) != 0) &&
        (uVar15 = FUN_71016f6340(lVar40 + 0xa010,*(long *)(lVar40 + 0x9ff8)), (~uVar15 & 0xff) != 0)
        ) && ((*(long *)(DAT_710533a0a0 + 0x30) != 0 &&
              (lVar18 = *(long *)(*(long *)(DAT_710533a0a0 + 0x30) + 0x2108), lVar18 != 0)))) {
      param_3 = (long ****)&local_548;
      param_4 = (byte ****)&DAT_00000004;
      param_5 = (long ****)0x1;
      FUN_7103701910(lVar18,0xc9,param_3,4,1);
      uVar16 = (uint)local_548;
    }
    *(char *)(lVar40 + 0x26071) = (char)uVar16;
    lVar40 = *(long *)(*(long *)(param_1 + 600) + 8);
    uVar19 = FUN_7101eefe30(*(long *)(*(long *)(lVar40 + 0x110) + 0x80));
    if ((*(int *)(lVar40 + 0xf8) == 0 && (((uint)uVar19 ^ 0xffffffff) & 1) == 0) &&
        *(char *)(lVar40 + 0x142) == '\0') {
      lVar40 = *(long *)(param_1 + 600);
      bVar13 = FUN_7103291150(*(long *)(*(long *)(DAT_710532f730 + 8) + 0x1c8),0x58ffff26dc61ca83);
      if (bVar13) {
        FUN_71032edf70(*(uint **)(lVar40 + 0x10),0x58ffff26dc61ca83);
        FUN_71032f1bb0(*(long *)(lVar40 + 8),*(uint **)(lVar40 + 0x10),param_3,param_4,param_5,
                       param_6,param_7,param_8);
      }
      else {
        *(undefined4 *)(*(long *)(lVar40 + 8) + 0x118) = 0;
      }
    }
    uVar26 = 1;
  }
  ppppbVar24 = (byte ****)&uStack_1c4;
  lVar18 = *(long *)(*(long *)(param_1 + 0x1e8) + 0x80);
  lVar40 = lVar18 + 0x2d0;
  FUN_7103776910(&local_548,lVar40,(long ****)"set_txt_01",param_3,param_4,param_5,param_6,param_7,
                 param_8);
  ppppppppplVar22 = (long *********)0x1;
  FUN_710377a280((long)&local_548,(byte *)"mnu_online_room_inside_room_nam",1);
  ppplVar10 = local_540;
  local_548 = &PTR_FUN_710523d9a8;
  local_540 = (long ***)0x0;
  if (ppplVar10 != (long ***)0x0) {
    FUN_710392eb40((ulong)ppplVar10);
  }
  ppppppppplVar23 = ppppppppplVar22;
  if (*(long *)(lVar18 + 0x478) != 0) {
    ppppppppplVar23 = (long *********)(lVar18 + 0x1860);
    FUN_7101c6a730((undefined2 *)ppppppppplVar23,(undefined2 *)local_1d0);
    if ((ulong)*(byte *)(lVar18 + 0x1861) < 8) {
      ppppppppplVar22 = (long *********)(lVar18 + (ulong)*(byte *)(lVar18 + 0x1861) * 0x1e8 + 0x918)
      ;
      FUN_7101c6c030(*(long *)(lVar18 + 0x478),local_1d0,(long ****)ppppppppplVar22,ppppbVar24,
                     param_5,param_6,param_7,param_8);
    }
    FUN_7101c689c0(*(long *)(lVar18 + 0x478),(long)ppppppppplVar23,ppppppppplVar22,ppppbVar24,
                   param_5,param_6,param_7,param_8);
    FUN_7101c69330(lVar18 + 0x800,lVar40,(long)ppppppppplVar23,ppppbVar24,param_5,param_6,param_7,
                   param_8);
    FUN_7101c698d0(lVar18 + 0x658,lVar40,ppppppppplVar23,ppppbVar24,param_5,param_6,param_7,param_8)
    ;
  }
  lVar18 = *plVar46;
  cVar9 = *(char *)(lVar18 + 0x9cdb);
  uVar38 = *(ushort *)(lVar18 + 0x9cde);
  bVar5 = *(byte *)(lVar18 + 0x9ce0);
  bVar2 = *(byte *)(lVar18 + 0x9ce1);
  pcVar1 = (char *)(lVar18 + 0x9ce5);
  cVar3 = *pcVar1;
  uVar6 = *(undefined1 *)(lVar18 + 0x9ce6);
  cVar7 = *(char *)(lVar18 + 0x9ce9);
  local_1d8 = *(undefined4 *)(lVar18 + 0x9d14);
  cVar4 = *(char *)(lVar18 + 0x9d08);
  local_1e0 = *(undefined8 *)(lVar18 + 0x9d0c);
  lVar40 = *(long *)(*(long *)(param_1 + 0x1e8) + 0x80);
  cVar39 = (char)local_14a;
  uVar44 = local_14a._1_1_;
  local_140[0] = cVar4;
  local_13c = local_1e0;
  local_134 = local_1d8;
  if (0x12 < *(uint *)(lVar40 + 0x1c2c)) goto LAB_7101890334;
  plVar29 = (long *)(lVar40 + 0x480);
  uVar16 = 0x811c9dc5;
  *(undefined4 *)(lVar40 + (long)(int)*(uint *)(lVar40 + 0x1c2c) * 4 + 0x1be0) = 1;
  FUN_7101c73ca0(plVar29,0x6a,(long ****)ppppppppplVar23,ppppbVar24,param_5,param_6,param_7,param_8)
  ;
  local_540 = (long ***)((ulong)local_540 & 0xffffffffffffff00);
  local_548 = (undefined **)0x0;
  uVar15 = uVar16;
  if (cVar39 == '\x02') {
    local_380 = (long ***)0x1a00000000;
    local_370 = 0x5f6d6f6f725f656e;
    local_368 = 0x6f66;
    local_378 = (undefined **)&DAT_696c6e6f5f756e6d;
    uStack_366 = 0x6d72;
    uStack_364 = 0x7268745f;
    uStack_360 = 0x65;
    uStack_35f = 0x65;
    uStack_35e = 0;
    uVar32 = 0x6d;
    pbVar34 = (byte *)((long)&local_378 + 1);
    do {
      uVar15 = uVar15 * 0x89 ^ uVar32;
      uVar32 = (uint)*pbVar34;
      pbVar34 = pbVar34 + 1;
    } while (uVar32 != 0);
    local_380 = (long ***)CONCAT44(0x1a,uVar15);
    uVar43 = 0;
    cVar39 = 'm';
    do {
      *(char *)((long)&local_540 + uVar43) = cVar39;
      if (0x3e < (int)uVar43 + 1U) {
        uVar43 = (ulong)((int)uVar43 + 1);
        break;
      }
      cVar39 = *(char *)((long)&local_378 + uVar43 + 1);
      uVar43 = uVar43 + 1;
    } while (cVar39 != '\0');
    uVar15 = 0x811c9dc5;
    *(undefined1 *)((long)&local_540 + (uVar43 & 0xffffffff)) = 0;
    uVar32 = (uint)(byte)local_540;
    local_548._0_4_ = 0;
    local_548._4_4_ = (int)uVar43;
    if ((byte)local_540 != 0) {
      pbVar34 = (byte *)((long)&local_540 + 1);
      uVar15 = uVar16;
      do {
        uVar15 = uVar15 * 0x89 ^ uVar32;
        uVar32 = (uint)*pbVar34;
        pbVar34 = pbVar34 + 1;
      } while (uVar32 != 0);
    }
  }
  else if (cVar39 == '\x03') {
    local_380 = (long ***)0x1c00000000;
    local_378 = (undefined **)&DAT_696c6e6f5f756e6d;
    local_370 = 0x5f6d6f6f725f656e;
    local_368 = 0x6f66;
    uStack_366 = 0x6d72;
    uStack_364 = 0x656e6f5f;
    uStack_360 = 0x5f;
    uStack_35f = 0x6f;
    uStack_35e = 0x6e;
    uStack_35d = 0x65;
    uVar32 = 0x6d;
    uStack_35c = 0;
    pbVar34 = (byte *)((long)&local_378 + 1);
    do {
      uVar15 = uVar15 * 0x89 ^ uVar32;
      uVar32 = (uint)*pbVar34;
      pbVar34 = pbVar34 + 1;
    } while (uVar32 != 0);
    local_380 = (long ***)CONCAT44(0x1c,uVar15);
    uVar43 = 0;
    cVar39 = 'm';
    do {
      *(char *)((long)&local_540 + uVar43) = cVar39;
      if (0x3e < (int)uVar43 + 1U) {
        uVar43 = (ulong)((int)uVar43 + 1);
        break;
      }
      cVar39 = *(char *)((long)&local_378 + uVar43 + 1);
      uVar43 = uVar43 + 1;
    } while (cVar39 != '\0');
    uVar15 = 0x811c9dc5;
    *(undefined1 *)((long)&local_540 + (uVar43 & 0xffffffff)) = 0;
    uVar32 = (uint)(byte)local_540;
    local_548._0_4_ = 0;
    local_548._4_4_ = (int)uVar43;
    if ((byte)local_540 != 0) {
      pbVar34 = (byte *)((long)&local_540 + 1);
      uVar15 = uVar16;
      do {
        uVar15 = uVar15 * 0x89 ^ uVar32;
        uVar32 = (uint)*pbVar34;
        pbVar34 = pbVar34 + 1;
      } while (uVar32 != 0);
    }
  }
  else if (cVar39 == '\x04') {
    local_380 = (long ***)0x1900000000;
    local_370 = 0x5f6d6f6f725f656e;
    local_378 = (undefined **)&DAT_696c6e6f5f756e6d;
    local_368 = 0x6f66;
    uVar36 = 0x6d;
    uStack_366 = 0x6d72;
    uStack_364 = 0x6165745f;
    uStack_360 = 0x6d;
    uStack_35f = 0;
    pbVar34 = (byte *)((long)&local_378 + 1);
    uVar32 = uVar16;
    do {
      uVar32 = uVar32 * 0x89 ^ uVar36;
      uVar36 = (uint)*pbVar34;
      pbVar34 = pbVar34 + 1;
    } while (uVar36 != 0);
    local_380 = (long ***)CONCAT44(0x19,uVar32);
    uVar43 = 0;
    cVar39 = 'm';
    do {
      *(char *)((long)&local_540 + uVar43) = cVar39;
      if (0x3e < (int)uVar43 + 1U) {
        uVar43 = (ulong)((int)uVar43 + 1);
        break;
      }
      cVar39 = *(char *)((long)&local_378 + uVar43 + 1);
      uVar43 = uVar43 + 1;
    } while (cVar39 != '\0');
    *(undefined1 *)((long)&local_540 + (uVar43 & 0xffffffff)) = 0;
    uVar32 = (uint)(byte)local_540;
    local_548._0_4_ = 0;
    local_548._4_4_ = (int)uVar43;
    if ((byte)local_540 != 0) {
      pbVar34 = (byte *)((long)&local_540 + 1);
      do {
        uVar15 = uVar15 * 0x89 ^ uVar32;
        uVar32 = (uint)*pbVar34;
        pbVar34 = pbVar34 + 1;
      } while (uVar32 != 0);
    }
  }
  else {
    local_380 = (long ***)0x1900000000;
    local_370 = 0x5f6d6f6f725f656e;
    local_378 = (undefined **)&DAT_696c6e6f5f756e6d;
    local_368 = 0x6f66;
    uVar32 = 0x6d;
    uStack_366 = 0x6d72;
    uStack_364 = 0x756f665f;
    uStack_360 = 0x72;
    uStack_35f = 0;
    pbVar34 = (byte *)((long)&local_378 + 1);
    do {
      uVar15 = uVar15 * 0x89 ^ uVar32;
      uVar32 = (uint)*pbVar34;
      pbVar34 = pbVar34 + 1;
    } while (uVar32 != 0);
    local_380 = (long ***)CONCAT44(0x19,uVar15);
    uVar43 = 0;
    cVar39 = 'm';
    do {
      *(char *)((long)&local_540 + uVar43) = cVar39;
      if (0x3e < (int)uVar43 + 1U) {
        uVar43 = (ulong)((int)uVar43 + 1);
        break;
      }
      cVar39 = *(char *)((long)&local_378 + uVar43 + 1);
      uVar43 = uVar43 + 1;
    } while (cVar39 != '\0');
    uVar15 = 0x811c9dc5;
    *(undefined1 *)((long)&local_540 + (uVar43 & 0xffffffff)) = 0;
    uVar32 = (uint)(byte)local_540;
    local_548._0_4_ = 0;
    local_548._4_4_ = (int)uVar43;
    if ((byte)local_540 != 0) {
      pbVar34 = (byte *)((long)&local_540 + 1);
      uVar15 = uVar16;
      do {
        uVar15 = uVar15 * 0x89 ^ uVar32;
        uVar32 = (uint)*pbVar34;
        pbVar34 = pbVar34 + 1;
      } while (uVar32 != 0);
    }
  }
  local_548 = (undefined **)CONCAT44(local_548._4_4_,uVar15);
  local_378 = (undefined **)((ulong)local_378 & 0xffffffffffffff00);
  local_380 = (long ***)0x0;
  uVar15 = uVar16;
  switch(uVar44) {
  case 1:
    local_130 = (byte ***)0x2100000000;
    local_120 = 0x5f6d6f6f725f656e;
    local_118 = 0x6572;
    local_128 = &DAT_696c6e6f5f756e6d;
    uStack_116 = 0x5f6563616c70;
    uStack_110 = 0x6f6c;
    local_10e = 0x5f726573;
    uStack_10a = 0x74;
    uStack_109 = 0x77;
    uStack_108 = 0x6f;
    uVar32 = 0x6d;
    pbVar34 = (byte *)((long)&local_128 + 1);
    do {
      uVar15 = uVar15 * 0x89 ^ uVar32;
      uVar32 = (uint)*pbVar34;
      pbVar34 = pbVar34 + 1;
    } while (uVar32 != 0);
    local_130 = (byte ***)CONCAT44(0x21,uVar15);
    uVar43 = 0;
    cVar39 = 'm';
    do {
      *(char *)((long)&local_378 + uVar43) = cVar39;
      if (0x3e < (int)uVar43 + 1U) {
        uVar43 = (ulong)((int)uVar43 + 1);
        break;
      }
      cVar39 = *(char *)((long)&local_128 + uVar43 + 1);
      uVar43 = uVar43 + 1;
    } while (cVar39 != '\0');
    uVar15 = 0x811c9dc5;
    *(undefined1 *)((long)&local_378 + (uVar43 & 0xffffffff)) = 0;
    uVar32 = (uint)(byte)local_378;
    local_380._0_4_ = 0;
    local_380._4_4_ = (int)uVar43;
    if ((byte)local_378 != 0) {
      pbVar34 = (byte *)((long)&local_378 + 1);
      uVar15 = uVar16;
      do {
        uVar15 = uVar15 * 0x89 ^ uVar32;
        uVar32 = (uint)*pbVar34;
        pbVar34 = pbVar34 + 1;
      } while (uVar32 != 0);
    }
    break;
  case 2:
    local_130 = (byte ***)0x2100000000;
    local_120 = 0x5f6d6f6f725f656e;
    local_118 = 0x6572;
    local_128 = &DAT_696c6e6f5f756e6d;
    uStack_116 = 0x5f6563616c70;
    uStack_110 = 0x6f6c;
    local_10e = 0x5f726573;
    uStack_10a = 0x6f;
    uStack_109 = 0x6e;
    uStack_108 = 0x65;
    uVar32 = 0x6d;
    pbVar34 = (byte *)((long)&local_128 + 1);
    do {
      uVar15 = uVar15 * 0x89 ^ uVar32;
      uVar32 = (uint)*pbVar34;
      pbVar34 = pbVar34 + 1;
    } while (uVar32 != 0);
    local_130 = (byte ***)CONCAT44(0x21,uVar15);
    uVar43 = 0;
    cVar39 = 'm';
    do {
      *(char *)((long)&local_378 + uVar43) = cVar39;
      if (0x3e < (int)uVar43 + 1U) {
        uVar43 = (ulong)((int)uVar43 + 1);
        break;
      }
      cVar39 = *(char *)((long)&local_128 + uVar43 + 1);
      uVar43 = uVar43 + 1;
    } while (cVar39 != '\0');
    uVar15 = 0x811c9dc5;
    *(undefined1 *)((long)&local_378 + (uVar43 & 0xffffffff)) = 0;
    uVar32 = (uint)(byte)local_378;
    local_380._0_4_ = 0;
    local_380._4_4_ = (int)uVar43;
    if ((byte)local_378 != 0) {
      pbVar34 = (byte *)((long)&local_378 + 1);
      uVar15 = uVar16;
      do {
        uVar15 = uVar15 * 0x89 ^ uVar32;
        uVar32 = (uint)*pbVar34;
        pbVar34 = pbVar34 + 1;
      } while (uVar32 != 0);
    }
    break;
  default:
    local_130 = (byte ***)0x1d00000000;
    local_120 = 0x5f6d6f6f725f656e;
    local_118 = 0x6572;
    local_128 = &DAT_696c6e6f5f756e6d;
    uStack_116 = 0x5f6563616c70;
    uStack_110 = 0x6f6c;
    local_10e = 0x726573;
    uVar36 = 0x6d;
    pbVar34 = (byte *)((long)&local_128 + 1);
    uVar32 = uVar16;
    do {
      uVar32 = uVar32 * 0x89 ^ uVar36;
      uVar36 = (uint)*pbVar34;
      pbVar34 = pbVar34 + 1;
    } while (uVar36 != 0);
    local_130 = (byte ***)CONCAT44(0x1d,uVar32);
    uVar43 = 0;
    cVar39 = 'm';
    do {
      *(char *)((long)&local_378 + uVar43) = cVar39;
      if (0x3e < (int)uVar43 + 1U) {
        uVar43 = (ulong)((int)uVar43 + 1);
        break;
      }
      cVar39 = *(char *)((long)&local_128 + uVar43 + 1);
      uVar43 = uVar43 + 1;
    } while (cVar39 != '\0');
    *(undefined1 *)((long)&local_378 + (uVar43 & 0xffffffff)) = 0;
    uVar32 = (uint)(byte)local_378;
    local_380._0_4_ = 0;
    local_380._4_4_ = (int)uVar43;
    if ((byte)local_378 != 0) {
      pbVar34 = (byte *)((long)&local_378 + 1);
      do {
        uVar15 = uVar15 * 0x89 ^ uVar32;
        uVar32 = (uint)*pbVar34;
        pbVar34 = pbVar34 + 1;
      } while (uVar32 != 0);
    }
    break;
  case 4:
    local_130 = (byte ***)0x2200000000;
    local_128 = &DAT_696c6e6f5f756e6d;
    local_120 = 0x5f6d6f6f725f656e;
    local_118 = 0x6572;
    uStack_116 = 0x5f6563616c70;
    uStack_110 = 26999;
    local_10e = 0x72656e6e;
    uStack_10a = 0x5f;
    uStack_109 = 0x74;
    uStack_108 = 0x6f77;
    uVar32 = 0x6d;
    uStack_106 = 0;
    pbVar34 = (byte *)((long)&local_128 + 1);
    do {
      uVar15 = uVar15 * 0x89 ^ uVar32;
      uVar32 = (uint)*pbVar34;
      pbVar34 = pbVar34 + 1;
    } while (uVar32 != 0);
    local_130 = (byte ***)CONCAT44(0x22,uVar15);
    uVar43 = 0;
    cVar39 = 'm';
    do {
      *(char *)((long)&local_378 + uVar43) = cVar39;
      if (0x3e < (int)uVar43 + 1U) {
        uVar43 = (ulong)((int)uVar43 + 1);
        break;
      }
      cVar39 = *(char *)((long)&local_128 + uVar43 + 1);
      uVar43 = uVar43 + 1;
    } while (cVar39 != '\0');
    uVar15 = 0x811c9dc5;
    *(undefined1 *)((long)&local_378 + (uVar43 & 0xffffffff)) = 0;
    uVar32 = (uint)(byte)local_378;
    local_380._0_4_ = 0;
    local_380._4_4_ = (int)uVar43;
    if ((byte)local_378 != 0) {
      pbVar34 = (byte *)((long)&local_378 + 1);
      uVar15 = uVar16;
      do {
        uVar15 = uVar15 * 0x89 ^ uVar32;
        uVar32 = (uint)*pbVar34;
        pbVar34 = pbVar34 + 1;
      } while (uVar32 != 0);
    }
    break;
  case 5:
    local_130 = (byte ***)0x2200000000;
    local_128 = &DAT_696c6e6f5f756e6d;
    local_120 = 0x5f6d6f6f725f656e;
    local_118 = 0x6572;
    uStack_116 = 0x5f6563616c70;
    uStack_110 = 26999;
    local_10e = 0x72656e6e;
    uStack_10a = 0x5f;
    uStack_109 = 0x6f;
    uStack_108 = 0x656e;
    uVar32 = 0x6d;
    uStack_106 = 0;
    pbVar34 = (byte *)((long)&local_128 + 1);
    do {
      uVar15 = uVar15 * 0x89 ^ uVar32;
      uVar32 = (uint)*pbVar34;
      pbVar34 = pbVar34 + 1;
    } while (uVar32 != 0);
    local_130 = (byte ***)CONCAT44(0x22,uVar15);
    uVar43 = 0;
    cVar39 = 'm';
    do {
      *(char *)((long)&local_378 + uVar43) = cVar39;
      if (0x3e < (int)uVar43 + 1U) {
        uVar43 = (ulong)((int)uVar43 + 1);
        break;
      }
      cVar39 = *(char *)((long)&local_128 + uVar43 + 1);
      uVar43 = uVar43 + 1;
    } while (cVar39 != '\0');
    uVar15 = 0x811c9dc5;
    *(undefined1 *)((long)&local_378 + (uVar43 & 0xffffffff)) = 0;
    uVar32 = (uint)(byte)local_378;
    local_380._0_4_ = 0;
    local_380._4_4_ = (int)uVar43;
    if ((byte)local_378 != 0) {
      pbVar34 = (byte *)((long)&local_378 + 1);
      uVar15 = uVar16;
      do {
        uVar15 = uVar15 * 0x89 ^ uVar32;
        uVar32 = (uint)*pbVar34;
        pbVar34 = pbVar34 + 1;
      } while (uVar32 != 0);
    }
    break;
  case 6:
    local_130 = (byte ***)0x1e00000000;
    local_128 = &DAT_696c6e6f5f756e6d;
    local_120 = 0x5f6d6f6f725f656e;
    local_118 = 0x6572;
    uStack_116 = 0x5f6563616c70;
    uStack_110 = 26999;
    local_10e = 0x72656e6e;
    uVar32 = 0x6d;
    uStack_10a = 0;
    pbVar34 = (byte *)((long)&local_128 + 1);
    do {
      uVar15 = uVar15 * 0x89 ^ uVar32;
      uVar32 = (uint)*pbVar34;
      pbVar34 = pbVar34 + 1;
    } while (uVar32 != 0);
    local_130 = (byte ***)CONCAT44(0x1e,uVar15);
    uVar43 = 0;
    cVar39 = 'm';
    do {
      *(char *)((long)&local_378 + uVar43) = cVar39;
      if (0x3e < (int)uVar43 + 1U) {
        uVar43 = (ulong)((int)uVar43 + 1);
        break;
      }
      cVar39 = *(char *)((long)&local_128 + uVar43 + 1);
      uVar43 = uVar43 + 1;
    } while (cVar39 != '\0');
    uVar15 = 0x811c9dc5;
    *(undefined1 *)((long)&local_378 + (uVar43 & 0xffffffff)) = 0;
    uVar32 = (uint)(byte)local_378;
    local_380._0_4_ = 0;
    local_380._4_4_ = (int)uVar43;
    if ((byte)local_378 != 0) {
      pbVar34 = (byte *)((long)&local_378 + 1);
      uVar15 = uVar16;
      do {
        uVar15 = uVar15 * 0x89 ^ uVar32;
        uVar32 = (uint)*pbVar34;
        pbVar34 = pbVar34 + 1;
      } while (uVar32 != 0);
    }
  }
  local_380 = (long ***)CONCAT44(local_380._4_4_,uVar15);
  FUN_7101c74c10(plVar29,0x6b,2,&local_540,&local_378,param_6,param_7,param_8);
  local_f8 = 0;
  local_100 = 0;
  uStack_108 = 0;
  uStack_106 = 0;
  uStack_105 = 0;
  uStack_110 = 0;
  local_10e = 0;
  uStack_10a = 0;
  uStack_109 = 0;
  local_118 = 0;
  uStack_116 = 0;
  local_120 = 0;
  local_128 = (undefined1 *)0x0;
  local_130 = (byte ***)0x0;
  local_f0 = (byte ****)&local_130;
  local_e8 = 0;
  local_308 = 0;
  local_310 = 0;
  local_318 = 0;
  local_320 = 0;
  local_328 = 0;
  local_330 = 0;
  local_338 = 0;
  local_340 = 0;
  local_348 = 0;
  local_350 = 0;
  local_358 = 0;
  uStack_360 = 0;
  uStack_35f = 0;
  uStack_35e = 0;
  uStack_35d = 0;
  uStack_35c = 0;
  uStack_35b = 0;
  uStack_35a = 0;
  local_368 = 0;
  uStack_366 = 0;
  uStack_364 = 0;
  local_370 = 0;
  local_378 = (undefined **)0x0;
  local_380 = (long ***)0x0;
  if (bVar2 < 0xc) {
    uVar19 = *(undefined8 *)(&DAT_7104ada4f0 + (long)(char)bVar2 * 8);
  }
  else {
    uVar19 = 0x96;
  }
  uVar43 = (ulong)uVar38 / 0x3c;
  uVar15 = (uint)uVar38 + (uVar38 / 0x3c) * -0x3c;
  if (0x3e6 < uVar38 / 0x3c) {
    uVar43 = 999;
  }
  uVar37 = (ulong)uVar15 & 0xffff;
  if (0x3e6 < (uVar15 & 0xffff)) {
    uVar37 = 999;
  }
  local_380 = (long ***)(((ulong)uVar38 / 0xe10) * 1000000 + uVar43 * 1000 + uVar37);
  if (cVar9 == '\x01') {
    local_d8[0] = 0x6d;
    local_d8[1] = 0x65;
    local_d8[2] = 0x6c;
    local_d8[3] = 0x5f;
    local_d8[4] = 0x72;
    local_d8[5] = 0x75;
    local_d8[6] = 0x6c;
    local_d8[7] = 0x65;
    local_d8[8] = 0x5f;
    local_d8[9] = 0x73;
    local_d8[10] = 0x65;
    local_d8[0xb] = 0x6c;
    local_d8[0xc] = 0x65;
    local_d8[0xd] = 99;
    local_d8[0xe] = 0x74;
    local_d8[0xf] = 0x5f;
    local_d8[0x10] = 0x74;
    local_d8[0x11] = 0x69;
    local_c6 = 0x6b636f74735f656d;
    local_e0 = 0x1a00000000;
    local_be = local_be & 0xffffffffffffff00;
    pbVar34 = local_d8;
    uVar32 = 0x6d;
    uVar15 = uVar16;
    do {
      pbVar34 = pbVar34 + 1;
      uVar15 = uVar15 * 0x89 ^ uVar32;
      uVar32 = (uint)*pbVar34;
    } while (uVar32 != 0);
    local_e0 = CONCAT44(0x1a,uVar15);
    uVar44 = 0x6d;
    local_378 = (undefined **)(ulong)bVar5;
  }
  else if (cVar9 == '\x02') {
    local_d8[0] = 0x6d;
    local_d8[1] = 0x65;
    local_d8[2] = 0x6c;
    local_d8[3] = 0x5f;
    local_d8[4] = 0x72;
    local_d8[5] = 0x75;
    local_d8[6] = 0x6c;
    local_d8[7] = 0x65;
    local_d8[8] = 0x5f;
    local_d8[9] = 0x73;
    local_d8[10] = 0x65;
    local_d8[0xb] = 0x6c;
    local_d8[0xc] = 0x65;
    local_d8[0xd] = 99;
    local_d8[0xe] = 0x74;
    local_d8[0xf] = 0x5f;
    local_d8[0x10] = 0x74;
    local_d8[0x11] = 0x69;
    local_c6 = 0x6b636f74735f656d;
    local_be = 0x616e696d6174735f;
    local_b6 = 0;
    local_e0 = 0x2200000000;
    pbVar34 = local_d8;
    uVar32 = 0x6d;
    uVar15 = uVar16;
    do {
      pbVar34 = pbVar34 + 1;
      uVar15 = uVar15 * 0x89 ^ uVar32;
      uVar32 = (uint)*pbVar34;
    } while (uVar32 != 0);
    uVar44 = 0x6e;
    local_e0 = CONCAT44(0x22,uVar15);
    local_378 = (undefined **)(ulong)bVar5;
    local_370 = uVar19;
  }
  else {
    local_d8[0] = 0x6d;
    local_d8[1] = 0x65;
    local_d8[2] = 0x6c;
    local_d8[3] = 0x5f;
    local_d8[4] = 0x72;
    local_d8[5] = 0x75;
    local_d8[6] = 0x6c;
    local_d8[7] = 0x65;
    local_d8[8] = 0x5f;
    local_d8[9] = 0x74;
    local_d8[10] = 0x69;
    local_d8[0xb] = 0x6d;
    local_d8[0xc] = 0x65;
    local_d8[0xd] = 0x6c;
    local_d8[0xe] = 0x69;
    local_d8[0xf] = 0x6d;
    local_d8[0x10] = 0x69;
    local_d8[0x11] = 0x74;
    local_c6 = CONCAT26(local_c6._6_2_,0x656d69745f);
    local_e0 = 0x1700000000;
    pbVar34 = local_d8;
    uVar32 = 0x6d;
    uVar15 = uVar16;
    do {
      pbVar34 = pbVar34 + 1;
      uVar15 = uVar15 * 0x89 ^ uVar32;
      uVar32 = (uint)*pbVar34;
    } while (uVar32 != 0);
    local_e0 = CONCAT44(0x17,uVar15);
    uVar44 = 0x6c;
  }
  local_d8[0] = 0x6d;
  local_d8[1] = 0x65;
  local_d8[2] = 0x6c;
  local_d8[3] = 0x5f;
  local_d8[4] = 0x72;
  local_d8[5] = 0x75;
  local_d8[6] = 0x6c;
  local_d8[7] = 0x65;
  pppplVar20 = (long ****)FUN_71037a4450((long *)*DAT_710593bc60,local_d8);
  ppppbVar24 = (byte ****)&local_98;
  pppplVar25 = (long ****)&local_380;
  local_98 = (byte ***)((ulong)local_98._4_4_ << 0x20);
  FUN_71037ab750((long)&local_548,200,(ushort *)pppplVar20,ppppbVar24,pppplVar25);
  if (((byte ****)&local_130 != local_f0) && (local_f0 != (byte ****)0x0)) {
    FUN_710392eb40((ulong)local_f0);
  }
  local_130 = (byte ***)((ulong)local_130 & 0xffffffffffff0000);
  local_f0 = (byte ****)&local_130;
  local_e8 = 0;
  ppppbVar21 = local_f0;
  if ((ushort)local_548 == 0) {
    uVar43 = 0;
    local_e8 = 0;
  }
  else {
    uVar37 = 0;
    uVar15 = 0;
    uVar43 = 0;
    uVar38 = (ushort)local_548;
    do {
      if ((uVar38 | 1) == 0xf) {
        if (uVar38 == 0xe) {
          iVar17 = (*(ushort *)((long)&local_548 + uVar37 * 2 + 6) >> 1) + 4;
        }
        else {
          iVar17 = 3;
          if (uVar38 != 0xf) {
            iVar17 = 0;
          }
        }
      }
      else {
        iVar17 = 1;
      }
      uVar15 = iVar17 + uVar15;
      uVar37 = (ulong)uVar15;
      local_e8 = iVar17 + (int)uVar43;
      uVar43 = (ulong)local_e8;
      uVar38 = *(ushort *)((long)&local_548 + (ulong)uVar15 * 2);
    } while (uVar38 != 0);
    if (0x1f < local_e8) {
      uVar15 = local_e8 * 2 + 2;
      if (uVar15 == 0) {
        uVar15 = 1;
      }
      pppbVar45 = (byte ***)(ulong)uVar15;
      ppppbVar21 = (byte ****)
                   FUN_710392e290(0x10,pppbVar45,pppplVar20,ppppbVar24,pppplVar25,param_6,param_7,
                                  param_8);
      if (ppppbVar21 == (byte ****)0x0) {
        if (DAT_7105332f00 != (long *)0x0) {
          local_8c[0] = 0;
          pppplVar20 = (long ****)&local_98;
          local_98 = pppbVar45;
          uVar37 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,local_8c);
          if (((uVar37 & 1) != 0) &&
             (ppppbVar21 = (byte ****)
                           FUN_710392e290(0x10,pppbVar45,pppplVar20,ppppbVar24,pppplVar25,param_6,
                                          param_7,param_8), ppppbVar21 != (byte ****)0x0))
          goto LAB_710188f4e4;
        }
        ppppbVar21 = (byte ****)0x0;
      }
    }
  }
LAB_710188f4e4:
  local_f0 = ppppbVar21;
  memcpy(local_f0,&local_548,-(uVar43 >> 0x1f) & 0xfffffffe00000000 | uVar43 << 1);
  pppplVar20 = (long ****)0x1;
  *(undefined2 *)((long)local_f0 + (long)(int)local_e8 * 2) = 0;
  ppppbVar24 = local_f0;
  FUN_7101c74c10(plVar29,uVar44,1,local_f0,pppplVar25,param_6,param_7,param_8);
  uVar19 = extraout_x1;
  if (((byte ****)&local_130 != local_f0) && (local_f0 != (byte ****)0x0)) {
    FUN_710392eb40((ulong)local_f0);
    uVar19 = extraout_x1_00;
  }
  local_540 = (long ***)((ulong)local_540 & 0xffffffffffffff00);
  local_548 = (undefined **)0x0;
  uVar32 = FUN_71017ac100((long)local_140,uVar19,pppplVar20,ppppbVar24,pppplVar25,param_6,param_7,
                          param_8);
  uVar15 = uVar16;
  if (((uVar32 & 1) == 0) && (cVar4 != '\0')) {
    uVar32 = FUN_71017ac030((long)local_140,extraout_x1_01,pppplVar20,ppppbVar24,pppplVar25,param_6,
                            param_7,param_8);
    local_540 = (long ***)&DAT_696c6e6f5f756e6d;
    local_538 = 0x5f6d6f6f725f656e;
    local_530 = 0x6e69;
    local_52e = 0x7379735f65646973;
    local_526 = 0x736d;
    uStack_524 = 0x5f67;
    local_522 = 0x7572;
    local_520 = 0x5f6d6574695f656c;
    if ((uVar32 & 1) == 0) {
      local_548._4_4_ = 0x2e;
      local_518 = 0x7563;
      uStack_516 = 0x73;
      uStack_515 = 0x74;
      uStack_514 = 0x6d6f;
      uVar32 = 0x6d;
      local_512 = local_512 & 0xff00;
      pbVar34 = (byte *)((long)&local_540 + 1);
      do {
        uVar15 = uVar15 * 0x89 ^ uVar32;
        uVar32 = (uint)*pbVar34;
        pbVar34 = pbVar34 + 1;
      } while (uVar32 != 0);
    }
    else {
      local_518 = 0x6e6f;
      uVar32 = 0x6d;
      local_548._4_4_ = 0x2a;
      uStack_516 = 0;
      pbVar34 = (byte *)((long)&local_540 + 1);
      do {
        uVar15 = uVar15 * 0x89 ^ uVar32;
        uVar32 = (uint)*pbVar34;
        pbVar34 = pbVar34 + 1;
      } while (uVar32 != 0);
    }
  }
  else {
    local_540 = (long ***)&DAT_696c6e6f5f756e6d;
    local_538 = 0x5f6d6f6f725f656e;
    local_530 = 0x6e69;
    local_52e = 0x7379735f65646973;
    local_526 = 0x736d;
    uStack_524 = 0x5f67;
    local_522 = 0x7572;
    local_548._4_4_ = 0x2b;
    local_520 = 0x5f6d6574695f656c;
    local_518 = 0x666f;
    uStack_516 = 0x66;
    uStack_515 = 0;
    uVar32 = 0x6d;
    pbVar34 = (byte *)((long)&local_540 + 1);
    do {
      uVar15 = uVar15 * 0x89 ^ uVar32;
      uVar32 = (uint)*pbVar34;
      pbVar34 = pbVar34 + 1;
    } while (uVar32 != 0);
  }
  local_520 = 0x5f6d6574695f656c;
  local_522 = 0x7572;
  uStack_524 = 0x5f67;
  local_526 = 0x736d;
  local_52e = 0x7379735f65646973;
  local_530 = 0x6e69;
  local_538 = 0x5f6d6f6f725f656e;
  local_540 = (long ***)&DAT_696c6e6f5f756e6d;
  local_548 = (undefined **)CONCAT44(local_548._4_4_,uVar15);
  local_378 = (undefined **)&DAT_696c6e6f5f756e6d;
  local_370 = 0x5f6d6f6f725f656e;
  local_368 = 0x6e69;
  uStack_366 = 0x6973;
  uStack_364 = 0x735f6564;
  uStack_360 = 0x79;
  uStack_35f = 0x73;
  uStack_35e = 0x6d;
  uStack_35d = 0x73;
  uStack_35c = 0x67;
  uStack_35b = 0x5f;
  uStack_35a = 0x7572;
  local_358 = 0x67726168635f656c;
  uVar15 = uVar16;
  if (cVar7 == '\0') {
    uVar32 = 0x6d;
    local_350 = CONCAT26(local_350._6_2_,0x66666f5f65);
    local_380._0_4_ = 0;
    local_380._4_4_ = 0x2d;
    pbVar34 = (byte *)((long)&local_378 + 1);
    do {
      uVar15 = uVar15 * 0x89 ^ uVar32;
      uVar32 = (uint)*pbVar34;
      pbVar34 = pbVar34 + 1;
    } while (uVar32 != 0);
  }
  else {
    local_350 = CONCAT35(local_350._5_3_,0x6e6f5f65);
    local_380._0_4_ = 0;
    local_380._4_4_ = 0x2c;
    uVar32 = 0x6d;
    pbVar34 = (byte *)((long)&local_378 + 1);
    do {
      uVar15 = uVar15 * 0x89 ^ uVar32;
      uVar32 = (uint)*pbVar34;
      pbVar34 = pbVar34 + 1;
    } while (uVar32 != 0);
  }
  local_380 = (long ***)CONCAT44(local_380._4_4_,uVar15);
  FUN_7101c74c10(plVar29,0x6f,2,&local_540,&local_378,param_6,param_7,param_8);
  local_538 = 0x5f6d6f6f725f656e;
  local_530 = 0x6e69;
  local_520 = 0x69646e61685f656c;
  local_52e = 0x7379735f65646973;
  local_518 = 0x645f;
  uStack_516 = 0x61;
  uStack_515 = 0x6d;
  uStack_514 = 0x6761;
  local_526 = 0x736d;
  uStack_524 = 0x5f67;
  local_522 = 0x7572;
  local_512 = 0x5f65;
  local_510 = 0x6f;
  local_540 = (long ***)&DAT_696c6e6f5f756e6d;
  uVar15 = uVar16;
  if (cVar3 == '\0') {
    local_548._0_4_ = 0;
    local_548._4_4_ = 0x33;
    uVar32 = 0x6d;
    local_50f = 0x6666;
    local_50d = 0;
    pbVar34 = (byte *)((long)&local_540 + 1);
    do {
      uVar15 = uVar15 * 0x89 ^ uVar32;
      uVar32 = (uint)*pbVar34;
      pbVar34 = pbVar34 + 1;
    } while (uVar32 != 0);
  }
  else {
    local_50f = 0x6e;
    local_548._0_4_ = 0;
    local_548._4_4_ = 0x32;
    uVar32 = 0x6d;
    pbVar34 = (byte *)((long)&local_540 + 1);
    do {
      uVar15 = uVar15 * 0x89 ^ uVar32;
      uVar32 = (uint)*pbVar34;
      pbVar34 = pbVar34 + 1;
    } while (uVar32 != 0);
  }
  local_548 = (undefined **)CONCAT44(local_548._4_4_,uVar15);
  uVar15 = uVar16;
  switch(uVar6) {
  case 4:
    local_368 = 0x7473;
    local_378 = (undefined **)&DAT_696c6e6f5f756e6d;
    local_370 = 0x5f6d6f6f725f656e;
    uStack_366 = 0x6761;
    uStack_364 = 0x61725f65;
    uStack_360 = 0x6e;
    uStack_35f = 100;
    uStack_35e = 0x6f;
    uStack_35d = 0x6d;
    uVar32 = 0x6d;
    local_380._0_4_ = 0;
    local_380._4_4_ = 0x1c;
    uStack_35c = 0;
    pbVar34 = (byte *)((long)&local_378 + 1);
    do {
      uVar15 = uVar15 * 0x89 ^ uVar32;
      uVar32 = (uint)*pbVar34;
      pbVar34 = pbVar34 + 1;
    } while (uVar32 != 0);
    break;
  case 5:
    local_368 = 0x7473;
    local_378 = (undefined **)&DAT_696c6e6f5f756e6d;
    local_370 = 0x5f6d6f6f725f656e;
    uStack_366 = 0x6761;
    uStack_364 = 0x61725f65;
    uStack_360 = 0x6e;
    uStack_35f = 100;
    uStack_35e = 0x6f;
    uStack_35d = 0x6d;
    uStack_35c = 0x5f;
    uStack_35b = 0x62;
    uStack_35a = 0x7461;
    local_358 = 0x646c656966656c74;
    uVar32 = 0x6d;
    local_380._0_4_ = 0;
    local_380._4_4_ = 0x2c;
    local_350 = CONCAT35(local_350._5_3_,0x646e655f);
    pbVar34 = (byte *)((long)&local_378 + 1);
    do {
      uVar15 = uVar15 * 0x89 ^ uVar32;
      uVar32 = (uint)*pbVar34;
      pbVar34 = pbVar34 + 1;
    } while (uVar32 != 0);
    break;
  case 6:
    local_368 = 0x7473;
    local_378 = (undefined **)&DAT_696c6e6f5f756e6d;
    local_370 = 0x5f6d6f6f725f656e;
    uStack_366 = 0x6761;
    uStack_364 = 0x61725f65;
    uStack_360 = 0x6e;
    uStack_35f = 100;
    uStack_35e = 0x6f;
    uStack_35d = 0x6d;
    uStack_35c = 0x5f;
    uStack_35b = 0x62;
    uStack_35a = 0x7461;
    local_358 = 0x646c656966656c74;
    uVar32 = 0x6d;
    local_380._0_4_ = 0;
    local_380._4_4_ = 0x28;
    local_350 = local_350 & 0xffffffffffffff00;
    pbVar34 = (byte *)((long)&local_378 + 1);
    do {
      uVar15 = uVar15 * 0x89 ^ uVar32;
      uVar32 = (uint)*pbVar34;
      pbVar34 = pbVar34 + 1;
    } while (uVar32 != 0);
    break;
  case 7:
    local_368 = 0x7473;
    local_378 = (undefined **)&DAT_696c6e6f5f756e6d;
    local_370 = 0x5f6d6f6f725f656e;
    uStack_366 = 0x6761;
    uStack_364 = 0x61725f65;
    uStack_360 = 0x6e;
    uStack_35f = 100;
    uStack_35e = 0x6f;
    uStack_35d = 0x6d;
    uStack_35c = 0x5f;
    uStack_35b = 0x65;
    uStack_35a = 0x646e;
    uVar32 = 0x6d;
    local_380._0_4_ = 0;
    local_380._4_4_ = 0x20;
    local_358 = local_358 & 0xffffffffffffff00;
    pbVar34 = (byte *)((long)&local_378 + 1);
    do {
      uVar15 = uVar15 * 0x89 ^ uVar32;
      uVar32 = (uint)*pbVar34;
      pbVar34 = pbVar34 + 1;
    } while (uVar32 != 0);
    break;
  default:
    local_368 = 0x7473;
    local_378 = (undefined **)&DAT_696c6e6f5f756e6d;
    local_370 = 0x5f6d6f6f725f656e;
    uStack_366 = 0x6761;
    uStack_364 = 0x72705f65;
    uStack_360 = 0x65;
    uStack_35f = 0x76;
    uStack_35e = 0x69;
    uStack_35d = 0x6f;
    uStack_35c = 0x75;
    uStack_35b = 0x73;
    uStack_35a = 0x796c;
    local_358 = 0x7463656c65735f;
    uVar32 = 0x6d;
    local_380._0_4_ = 0;
    local_380._4_4_ = 0x27;
    pbVar34 = (byte *)((long)&local_378 + 1);
    do {
      uVar15 = uVar15 * 0x89 ^ uVar32;
      uVar32 = (uint)*pbVar34;
      pbVar34 = pbVar34 + 1;
    } while (uVar32 != 0);
    goto LAB_710188fb44;
  }
  uStack_35d = 0x6d;
  uStack_35e = 0x6f;
  uStack_35f = 100;
  uStack_360 = 0x6e;
  uStack_364 = 0x61725f65;
LAB_710188fb44:
  uStack_366 = 0x6761;
  local_368 = 0x7473;
  local_370 = 0x5f6d6f6f725f656e;
  local_378 = (undefined **)&DAT_696c6e6f5f756e6d;
  local_380 = (long ***)CONCAT44(local_380._4_4_,uVar15);
  FUN_7101c74c10(plVar29,0x70,2,&local_540,&local_378,param_6,param_7,param_8);
  if (((DAT_71053144d8 & 1) == 0) && (iVar17 = __cxa_guard_acquire(&DAT_71053144d8), iVar17 != 0)) {
    FUN_7101764000();
    FUN_71000001c0();
    __cxa_guard_release(&DAT_71053144d8);
  }
  lVar40 = DAT_71052c4c58;
  if ((bool)DAT_710530a9c0 != (*(char *)(lVar18 + 0x9dc7) == '\x04')) {
    DAT_710530a9c0 = *(char *)(lVar18 + 0x9dc7) == '\x04';
    lVar33 = *(long *)(*(long *)(DAT_71052c4c58 + 8) + 0x88);
    if (*(char *)(lVar33 + 0x26a62) == '\0') {
      *(ulong *)(lVar33 + 0x26a90) = *(ulong *)(lVar33 + 0x26a90) | 1;
    }
  }
  plVar29 = (long *)(lVar40 + 8);
  _DAT_710530a974 = *(undefined8 *)(lVar18 + 0x9cda);
  _DAT_710530a97c = *(undefined8 *)(lVar18 + 0x9ce2);
  _DAT_710530a984 = *(undefined8 *)(lVar18 + 0x9cea);
  lVar40 = *(long *)(*plVar29 + 0x88);
  if (*(char *)(lVar40 + 0x26a62) == '\0') {
    *(ulong *)(lVar40 + 0x26a90) = *(ulong *)(lVar40 + 0x26a90) | 1;
  }
  DAT_710530a9a0 = *(char *)(lVar18 + 0x9d08);
  DAT_710530a9a4 = *(undefined8 *)(lVar18 + 0x9d0c);
  DAT_710530a9ac = *(undefined4 *)(lVar18 + 0x9d14);
  lVar40 = *(long *)(*plVar29 + 0x88);
  if (*(char *)(lVar40 + 0x26a62) == '\0') {
    *(ulong *)(lVar40 + 0x26a90) = *(ulong *)(lVar40 + 0x26a90) | 1;
  }
  DAT_710530a9b0 = *(undefined8 *)(lVar18 + 0x9d18);
  DAT_710530a9b8 = *(undefined8 *)(lVar18 + 0x9d20);
  lVar40 = *(long *)(*plVar29 + 0x88);
  if (*(char *)(lVar40 + 0x26a62) == '\0') {
    *(ulong *)(lVar40 + 0x26a90) = *(ulong *)(lVar40 + 0x26a90) | 1;
  }
  lVar40 = *(long *)(*plVar46 + 0x9ff8);
  if (lVar40 == 0) {
    uVar43 = 0xff;
  }
  else {
    uVar15 = FUN_71016f6340(*plVar46 + 0xa010,lVar40);
    uVar43 = (ulong)uVar15 & 0xff;
  }
  FUN_71017abd00(&local_380);
  if (uVar43 == 0xff) goto LAB_7101890218;
  if (0xf < uVar43) goto LAB_7101890334;
  FUN_71016b6a10(&local_380,(undefined8 *)(*plVar46 + uVar43 * 0x340 + 0x1dc98));
  if (*(char *)(lVar18 + 0x9cdb) == '\x02') {
    uStack_35a = 10;
    switch(*(byte *)(lVar18 + 0x9ce1)) {
    case 0:
      break;
    case 1:
      uStack_35a = 0x1e;
      break;
    case 2:
      uStack_35a = 0x32;
      break;
    case 3:
      uStack_35a = 0x50;
      break;
    case 4:
      uStack_35a = 100;
      break;
    default:
      uStack_35a = 0x96;
      break;
    case 6:
      uStack_35a = 200;
      break;
    case 7:
      uStack_35a = 0xfa;
      break;
    case 8:
      uStack_35a = 300;
      break;
    case 9:
      uStack_35a = 500;
      break;
    case 10:
      uStack_35a = 0x2ee;
      break;
    case 0xb:
      uStack_35a = 999;
    }
    if (*pcVar1 == '\0') {
      puVar30 = (undefined2 *)&uStack_35e;
      goto LAB_710188fe8c;
    }
  }
  else {
    puVar30 = &uStack_35a;
LAB_710188fe8c:
    *puVar30 = 0;
  }
  lVar33 = *plVar46;
  puVar42 = (undefined8 *)(lVar33 + 0xa010);
  lVar18 = *(long *)*puVar42;
  lVar40 = *(long *)(lVar18 + 0x9ff8);
  if (lVar40 != 0) {
    uVar15 = FUN_71016f6340(lVar18 + 0xa010,lVar40);
    uVar37 = (ulong)uVar15 & 0xff;
    if (uVar37 != 0xff) {
      if (0xf < uVar37) goto LAB_7101890334;
      FUN_71016b6a10((undefined8 *)(lVar33 + uVar37 * 0x340 + 0x1dc98),&local_380);
      FUN_71016e4880(puVar42,(byte)uVar15,0,0xff);
    }
  }
  uVar12 = local_52e;
  uVar19 = local_538;
  if ((uint)uVar43 < 8) {
    local_548 = (undefined **)CONCAT71(local_548._1_7_,(&DAT_7105308770)[uVar43 * 0x1c8]);
    if ((&DAT_710530877c)[uVar43 * 0xe4] == 0) {
      uVar15 = 0;
    }
    else {
      local_540 = (long ***)
                  ((ulong)CONCAT22(local_540._6_2_,(&DAT_710530877c)[uVar43 * 0xe4]) << 0x20);
      if ((&DAT_710530877e)[uVar43 * 0xe4] == 0) {
        uVar15 = 1;
      }
      else {
        local_540 = (long ***)CONCAT26((&DAT_710530877e)[uVar43 * 0xe4],(undefined6)local_540);
        sVar8 = (&DAT_7105308780)[uVar43 * 0xe4];
        if (sVar8 == 0) {
          uVar15 = 2;
        }
        else {
          local_538 = CONCAT62(local_538._2_6_,sVar8);
          if ((&DAT_7105308782)[uVar43 * 0xe4] == 0) {
            uVar15 = 3;
          }
          else {
            local_538._4_4_ = SUB84(uVar19,4);
            local_538._0_4_ = CONCAT22((&DAT_7105308782)[uVar43 * 0xe4],sVar8);
            if ((&DAT_7105308784)[uVar43 * 0xe4] == 0) {
              uVar15 = 4;
            }
            else {
              local_538._6_2_ = SUB82(uVar19,6);
              local_538._0_6_ = CONCAT24((&DAT_7105308784)[uVar43 * 0xe4],(undefined4)local_538);
              if ((&DAT_7105308786)[uVar43 * 0xe4] == 0) {
                uVar15 = 5;
              }
              else {
                local_538 = CONCAT26((&DAT_7105308786)[uVar43 * 0xe4],(undefined6)local_538);
                if ((&DAT_7105308788)[uVar43 * 0xe4] == 0) {
                  uVar15 = 6;
                }
                else {
                  local_530 = (&DAT_7105308788)[uVar43 * 0xe4];
                  sVar8 = (&DAT_710530878a)[uVar43 * 0xe4];
                  if (sVar8 == 0) {
                    uVar15 = 7;
                  }
                  else {
                    local_52e = CONCAT62(local_52e._2_6_,sVar8);
                    if ((&DAT_710530878c)[uVar43 * 0xe4] == 0) {
                      uVar15 = 8;
                    }
                    else {
                      local_52e._4_4_ = SUB84(uVar12,4);
                      local_52e._0_4_ = CONCAT22((&DAT_710530878c)[uVar43 * 0xe4],sVar8);
                      if ((&DAT_710530878e)[uVar43 * 0xe4] == 0) {
                        uVar15 = 9;
                      }
                      else {
                        local_52e._6_2_ = SUB82(uVar12,6);
                        local_52e._0_6_ =
                             CONCAT24((&DAT_710530878e)[uVar43 * 0xe4],(undefined4)local_52e);
                        if ((&DAT_7105308790)[uVar43 * 0xe4] == 0) {
                          uVar15 = 10;
                        }
                        else {
                          local_52e = CONCAT26((&DAT_7105308790)[uVar43 * 0xe4],
                                               (undefined6)local_52e);
                          uVar15 = 0xb;
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    ppplVar10 = local_540;
    *(undefined2 *)((long)&local_540 + (ulong)uVar15 * 2 + 4) = 0;
    uVar32 = local_540._4_4_;
    local_540 = (long ***)CONCAT44(local_540._4_4_,uVar15);
    ppplVar11 = local_540;
    puVar35 = (ushort *)((long)&local_540 + 4);
    local_540._4_2_ = SUB82(ppplVar10,4);
    uVar32 = uVar32 & 0xffff;
    if (local_540._4_2_ != 0) {
      do {
        puVar35 = puVar35 + 1;
        uVar16 = uVar16 * 0x89 ^ uVar32;
        uVar32 = (uint)*puVar35;
      } while (uVar32 != 0);
    }
    uStack_524 = (undefined2)(&DAT_7105308794)[uVar43 * 0x72];
    local_522 = (undefined2)((uint)(&DAT_7105308794)[uVar43 * 0x72] >> 0x10);
    local_548 = (undefined **)CONCAT44(uVar16,(int)local_548);
    local_540 = ppplVar11;
    FUN_71015547e0(&local_520,(undefined8 *)(&DAT_7105308798 + uVar43 * 0x72));
    local_4fa = uStack_35a;
    if (*pcVar1 == '\0') {
      local_4fe = 0;
    }
    FUN_710179e400(0x7105308760,(uint)uVar43,(undefined1 *)&local_548);
    if (((DAT_71053144d8 & 1) == 0) && (iVar17 = __cxa_guard_acquire(&DAT_71053144d8), iVar17 != 0))
    {
      FUN_7101764000();
      FUN_71000001c0();
      __cxa_guard_release(&DAT_71053144d8);
    }
    DAT_7105306f7e = local_4fa;
    DAT_7105306f7a._0_2_ = local_4fe;
LAB_7101890218:
    FUN_71016ba6b0(*plVar46);
    if (*(int *)(param_1 + 0x1c8) == 0) {
      *(undefined1 *)(*plVar46 + 0x26b2c) = 0;
    }
    return uVar26;
  }
LAB_7101890334:
                    /* WARNING: Subroutine does not return */
  abort();
code_r0x00710188ddf0:
  iVar17 = 0;
LAB_710188ddf4:
  FUN_7101c75f90(lVar18,(char *)&local_540,param_3,param_4,param_5,param_6,param_7,param_8);
  FUN_7101c761a0(lVar18,iVar17,param_3,param_4,param_5,param_6,param_7,param_8);
  if (*(char *)(lVar40 + (ulong)(uint)bVar2 * 0x1e8 + 0xafa) != '\0') goto LAB_710188def8;
  if (*(char *)(*(long *)(DAT_710532f8d0 + 8) + 0x191) == '\0') {
    param_3 = (long ****)&DAT_00000004;
    uVar43 = FUN_7103313f20(*(long *)(DAT_710532f8d0 + 8),0x19bdc130c1,(long ****)&DAT_00000004,
                            param_4,param_5,param_6,param_7,param_8);
    if ((uVar43 & 1) == 0) goto LAB_710188deb0;
    FUN_71024076d0((undefined4 *)&local_380,0x19bdc130c1);
    if (((local_370 != 0) && (DAT_7106dd53a8 == '\x01')) &&
       (CONCAT22(uStack_366,local_368) == DAT_7106dd53ac)) {
      piVar28 = (int *)(local_370 + 0x38);
      do {
        cVar9 = '\x01';
        bVar13 = (bool)ExclusiveMonitorPass(piVar28,0x10);
        if (bVar13) {
          *piVar28 = *piVar28 + -1;
          cVar9 = ExclusiveMonitorsStatus();
        }
      } while (cVar9 != '\0');
    }
  }
  else {
LAB_710188deb0:
    local_368 = 0;
    uStack_366 = 0;
    uStack_364 = 0x876500;
    local_358 = 0xffffffffffffffff;
    local_380 = (long ***)((ulong)local_380 & 0xffffffff00000000);
    local_350 = 0;
    local_348 = 0;
  }
  local_378 = &PTR_FUN_7104f73d50;
  local_370 = 0;
  uStack_360 = 0;
LAB_710188def8:
  lVar40 = *plVar46;
  if (*(long *)(lVar40 + 0x26b58) == 0) goto LAB_710188df10;
  goto LAB_710188cecc;
}

