// addr:      7102df1190
// offset:    0x2df1190
// name:      FUN_7102df1190
// mangled:   
// signature: undefined __cdecl FUN_7102df1190(undefined8 * param_1, long param_2, long * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, long * * * param_7, long * * * param_8)


void FUN_7102df1190(undefined8 *param_1,long param_2,long ****param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,long ***param_7,long ***param_8)

{
  uint uVar1;
  undefined8 *puVar2;
  byte bVar3;
  char cVar4;
  short sVar5;
  undefined1 auVar6 [16];
  bool bVar7;
  uint uVar8;
  undefined4 uVar9;
  undefined8 *puVar10;
  char *pcVar11;
  long extraout_x1;
  byte ****ppppbVar12;
  long lVar13;
  long *plVar14;
  long *plVar15;
  long *plVar16;
  ulong uVar17;
  byte *pbVar18;
  ulong uVar19;
  uint uVar20;
  long *plVar21;
  long lVar22;
  undefined8 *puVar23;
  float fVar24;
  float fVar25;
  undefined1 auVar26 [16];
  float fVar27;
  undefined4 uVar28;
  undefined8 uVar29;
  undefined1 auVar30 [16];
  undefined8 uVar31;
  byte ***local_60;
  undefined8 uStack_58;
  undefined4 local_44;
  
  *(undefined4 *)(param_1 + 5) = 0x42f00000;
  *param_1 = param_3;
  param_1[1] = param_4;
  bVar7 = true;
  *(undefined1 *)(param_1 + 8) = 100;
  param_1[2] = param_2;
  param_1[3] = 0;
  *(int *)(param_1 + 4) = (int)param_5;
  param_1[0xb] = 0;
  *(undefined1 *)((long)param_1 + 0x24) = 0;
  *(undefined8 *)((long)param_1 + 0x44) = 0;
  *(undefined8 *)((long)param_1 + 0x4c) = 0x40a0000000000000;
  *(undefined2 *)((long)param_1 + 0x54) = 1;
  *(undefined8 *)((long)param_1 + 0x84) = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  plVar15 = *(long **)(*(long *)(param_2 + 0x310) + 0xd0);
  plVar14 = *(long **)(*(long *)(param_2 + 0x310) + 0xd8);
  if (plVar15 == plVar14) {
    lVar22 = 0;
  }
  else {
    do {
      if ((*(uint *)(plVar15 + 1) < 2) &&
         (lVar22 = *plVar15, *(long *)(lVar22 + 0x68) == 0x655d74795)) {
        if (lVar22 == 0) goto LAB_7102df123c;
        if ((*(long *)(lVar22 + 0xd8) == 0) && (*(long *)(lVar22 + 0xd8) == 0)) {
          plVar15 = FUN_71026533a0((undefined8 *)(lVar22 + 0x90),0,param_3,param_4,param_5,param_6,
                                   param_7,param_8);
          plVar14 = *(long **)(lVar22 + 0xd8);
          *(long **)(lVar22 + 0xd8) = plVar15;
          if (plVar14 != (long *)0x0) {
            (**(code **)(*plVar14 + 8))();
          }
        }
        plVar15 = *(long **)(lVar22 + 0xd8);
        bVar7 = lVar22 == 0;
        (**(code **)(*plVar15 + 0x10))(plVar15);
        if (*(char *)(plVar15[1] + 0xa8) != '\0') {
          plVar14 = *(long **)(plVar15[1] + 0x48);
          (**(code **)(*plVar14 + 0x10))(plVar14,0);
          if (*(char *)(plVar15[1] + 0xa8) != '\0') {
            plVar14 = *(long **)(plVar15[1] + 0x48);
            (**(code **)(*plVar14 + 0x10))(plVar14,1);
            (**(code **)(*plVar14 + 0x10))(plVar14,2);
          }
        }
        *(undefined1 *)(plVar15 + 4) = 0;
        goto LAB_7102df1308;
      }
      plVar15 = plVar15 + 2;
    } while (plVar14 != plVar15);
    lVar22 = 0;
LAB_7102df123c:
    bVar7 = true;
  }
LAB_7102df1308:
  if (9 < *(uint *)(param_1 + 4)) goto LAB_7102df1c88;
  uVar29 = 0x3f80000000000000;
  uVar9 = 0;
  uVar28 = 0;
  if (!bVar7) {
    if (*(long *)(lVar22 + 0xd8) == 0) {
      uVar8 = 0xffffffff;
      lVar13 = *(long *)(lVar22 + 0xd8);
      if (lVar13 != 0) goto LAB_7102df1394;
LAB_7102df13dc:
      lVar22 = (**(code **)(**(long **)(lVar22 + 0x90) + 0x158))();
    }
    else {
      uVar8 = 0;
      pcVar11 = *(char **)(&DAT_710513ea28 + (ulong)*(uint *)(param_1 + 4) * 8);
      do {
        uVar17 = (ulong)uVar8;
        uVar8 = uVar8 + 1;
      } while (pcVar11[uVar17] != '\0');
      cVar4 = *pcVar11;
      while (cVar4 != '\0') {
        pcVar11 = pcVar11 + 1;
        cVar4 = *pcVar11;
      }
      uVar8 = (**(code **)(**(long **)(*(long *)(*(long *)(lVar22 + 0xd8) + 8) + 8) + 0x18))();
      lVar13 = *(long *)(lVar22 + 0xd8);
      if (lVar13 == 0) goto LAB_7102df13dc;
LAB_7102df1394:
      uVar20 = (**(code **)(**(long **)(*(long *)(lVar13 + 8) + 8) + 0x10))();
      if (uVar20 <= uVar8) goto LAB_7102df13dc;
      plVar15 = *(long **)(*(long *)(*(long *)(lVar22 + 0xd8) + 8) + 0x48);
      (**(code **)(*plVar15 + 0x38))(plVar15,0);
      lVar22 = extraout_x1 + (ulong)uVar8 * 0x40;
    }
    uVar29 = *(undefined8 *)(lVar22 + 0x38);
    uVar9 = (undefined4)*(undefined8 *)(lVar22 + 0x30);
    uVar28 = (undefined4)((ulong)*(undefined8 *)(lVar22 + 0x30) >> 0x20);
  }
  auVar26._4_4_ = uVar28;
  auVar26._0_4_ = uVar9;
  auVar26._8_8_ = uVar29;
  auVar6._4_4_ = uVar28;
  auVar6._0_4_ = uVar9;
  auVar6._8_8_ = uVar29;
  auVar26 = NEON_ext(auVar26,auVar6,8,1);
  param_1[0xf] = (ulong)auVar26._0_4_;
  param_1[0xe] = CONCAT44(uVar28,uVar9);
  if (9 < *(uint *)(param_1 + 4)) goto LAB_7102df1c88;
  pbVar18 = (&PTR_s_ashibaa_set_710513ea78)[*(uint *)(param_1 + 4)];
  if ((pbVar18 != (byte *)0x0) && (uVar8 = (uint)*pbVar18, *pbVar18 != 0)) {
    plVar15 = *(long **)(*(long *)(param_1[2] + 0x310) + 0xd0);
    plVar14 = *(long **)(*(long *)(param_1[2] + 0x310) + 0xd8);
    if (plVar15 != plVar14) {
      uVar17 = 0;
      uVar20 = 0xffffffff;
      do {
        pbVar18 = pbVar18 + 1;
        uVar1 = uVar8 + 0x20;
        if (0x19 < uVar8 - 0x41) {
          uVar1 = uVar8;
        }
        uVar20 = (&DAT_7104754084)[(uVar1 ^ uVar20) & 0xff] ^ uVar20 >> 8;
        uVar8 = (uint)*pbVar18;
        uVar17 = uVar17 + 0x100000000;
      } while (uVar8 != 0);
      do {
        if ((*(uint *)(plVar15 + 1) < 2) &&
           (lVar22 = *plVar15, (uVar17 & 0xff00000000 | (ulong)~uVar20) == *(ulong *)(lVar22 + 0x68)
           )) {
          if (lVar22 == 0) {
            bVar7 = true;
          }
          else {
            if (*(long *)(lVar22 + 0xd8) == 0) {
              plVar15 = FUN_71026533a0((undefined8 *)(lVar22 + 0x90),0,param_3,param_4,param_5,
                                       param_6,param_7,param_8);
              plVar14 = *(long **)(lVar22 + 0xd8);
              *(long **)(lVar22 + 0xd8) = plVar15;
              if (plVar14 != (long *)0x0) {
                (**(code **)(*plVar14 + 8))();
              }
            }
            bVar7 = lVar22 == 0;
            plVar15 = *(long **)(lVar22 + 0xd8);
            (**(code **)(*plVar15 + 0x10))(plVar15);
            if (*(char *)(plVar15[1] + 0xa8) != '\0') {
              plVar14 = *(long **)(plVar15[1] + 0x48);
              (**(code **)(*plVar14 + 0x10))(plVar14,0);
              if (*(char *)(plVar15[1] + 0xa8) != '\0') {
                plVar14 = *(long **)(plVar15[1] + 0x48);
                (**(code **)(*plVar14 + 0x10))(plVar14,1);
                (**(code **)(*plVar14 + 0x10))(plVar14,2);
              }
            }
            *(undefined1 *)(plVar15 + 4) = 0;
          }
          goto LAB_7102df14c4;
        }
        plVar15 = plVar15 + 2;
      } while (plVar14 != plVar15);
    }
  }
  lVar22 = 0;
  bVar7 = true;
LAB_7102df14c4:
  uVar17 = (ulong)*(uint *)(param_1 + 4);
  if (9 < *(uint *)(param_1 + 4)) goto LAB_7102df1c88;
  if ((bVar7) || (*(long *)(lVar22 + 0xd8) == 0)) {
    *(undefined4 *)(param_1 + 7) = 0xffffffff;
    if (!bVar7) goto LAB_7102df1538;
LAB_7102df1650:
    *(undefined4 *)((long)param_1 + 0x3c) = 0xffffffff;
    *(undefined1 *)(param_1 + 0x10) = 1;
    pbVar18 = (&PTR_s_ashibaa_set_710513ea78)[uVar17];
  }
  else {
    uVar8 = 0;
    pcVar11 = (&PTR_s_AshibaA_Loc_710513eb18)[uVar17];
    do {
      uVar17 = (ulong)uVar8;
      uVar8 = uVar8 + 1;
    } while (pcVar11[uVar17] != '\0');
    cVar4 = *pcVar11;
    while (cVar4 != '\0') {
      pcVar11 = pcVar11 + 1;
      cVar4 = *pcVar11;
    }
    uVar9 = (**(code **)(**(long **)(*(long *)(*(long *)(lVar22 + 0xd8) + 8) + 8) + 0x18))();
    uVar17 = (ulong)*(uint *)(param_1 + 4);
    *(undefined4 *)(param_1 + 7) = uVar9;
    if (9 < *(uint *)(param_1 + 4)) goto LAB_7102df1c88;
LAB_7102df1538:
    if (*(long *)(lVar22 + 0xd8) == 0) goto LAB_7102df1650;
    uVar8 = 0;
    pcVar11 = (&PTR_s_StgPlanktonAshibaA_710513eb68)[uVar17];
    do {
      uVar17 = (ulong)uVar8;
      uVar8 = uVar8 + 1;
    } while (pcVar11[uVar17] != '\0');
    cVar4 = *pcVar11;
    while (cVar4 != '\0') {
      pcVar11 = pcVar11 + 1;
      cVar4 = *pcVar11;
    }
    uVar9 = (**(code **)(**(long **)(*(long *)(*(long *)(lVar22 + 0xd8) + 8) + 8) + 0x18))();
    *(undefined4 *)((long)param_1 + 0x3c) = uVar9;
    *(undefined1 *)(param_1 + 0x10) = 1;
    if (9 < *(uint *)(param_1 + 4)) goto LAB_7102df1c88;
    pbVar18 = (&PTR_s_ashibaa_set_710513ea78)[*(uint *)(param_1 + 4)];
  }
  if ((pbVar18 != (byte *)0x0) && (uVar8 = (uint)*pbVar18, *pbVar18 != 0)) {
    plVar15 = *(long **)(*(long *)(param_1[2] + 0x310) + 0xd0);
    plVar14 = *(long **)(*(long *)(param_1[2] + 0x310) + 0xd8);
    if (plVar15 != plVar14) {
      uVar17 = 0;
      uVar20 = 0xffffffff;
      do {
        pbVar18 = pbVar18 + 1;
        uVar1 = uVar8 + 0x20;
        if (0x19 < uVar8 - 0x41) {
          uVar1 = uVar8;
        }
        uVar20 = (&DAT_7104754084)[(uVar1 ^ uVar20) & 0xff] ^ uVar20 >> 8;
        uVar8 = (uint)*pbVar18;
        uVar17 = uVar17 + 0x100000000;
      } while (uVar8 != 0);
      do {
        if ((*(uint *)(plVar15 + 1) < 2) &&
           (lVar22 = *plVar15, (uVar17 & 0xff00000000 | (ulong)~uVar20) == *(ulong *)(lVar22 + 0x68)
           )) {
          param_1[3] = lVar22;
          lVar13 = 0;
          if (lVar22 != 0) {
            if ((*(char *)(lVar22 + 0xe0) != '\0') && (*(long *)(lVar22 + 200) != 0)) {
              *(undefined2 *)(*(long *)(lVar22 + 200) + 0x30) = 0x101;
            }
            if (*(long *)(lVar22 + 0xd8) != 0) {
              *(undefined1 *)(*(long *)(lVar22 + 0xd8) + 0x21) = 1;
            }
            if (*(char *)(lVar22 + 0xe0) != '\0') {
              *(undefined1 *)(*(long *)(lVar22 + 0xb0) + 0x10) = 0;
            }
            lVar13 = param_1[3];
          }
          if (lVar13 != 0) {
            if ((*(char *)(lVar13 + 0xe0) != '\0') && (*(long *)(lVar13 + 200) != 0)) {
              *(undefined2 *)(*(long *)(lVar13 + 200) + 0x32) = 0;
            }
            if (*(long *)(lVar13 + 0xd8) != 0) {
              *(undefined1 *)(*(long *)(lVar13 + 0xd8) + 0x22) = 0;
            }
          }
          lVar22 = param_1[3];
          if (lVar22 != 0) {
            if ((*(char *)(lVar22 + 0xe0) != '\0') &&
               (lVar13 = *(long *)(lVar22 + 200), lVar13 != 0)) {
              puVar10 = *(undefined8 **)(lVar13 + 0x18);
              puVar2 = *(undefined8 **)(lVar13 + 0x20);
              *(undefined4 *)(lVar13 + 0x3c) = 0x41200000;
              if (puVar10 == puVar2) {
                *(undefined4 *)(lVar13 + 0x40) = 0x41200000;
              }
              else {
                do {
                  puVar23 = puVar10 + 1;
                  param_3 = (long ****)0x0;
                  (**(code **)(*(long *)*puVar10 + 0x20))((long *)*puVar10,10);
                  puVar10 = puVar23;
                } while (puVar2 != puVar23);
                puVar10 = *(undefined8 **)(lVar13 + 0x18);
                puVar2 = *(undefined8 **)(lVar13 + 0x20);
                *(undefined4 *)(lVar13 + 0x40) = 0x41200000;
                if (puVar10 != puVar2) {
                  do {
                    puVar23 = puVar10 + 1;
                    param_3 = (long ****)0x1;
                    (**(code **)(*(long *)*puVar10 + 0x20))((long *)*puVar10,10);
                    puVar10 = puVar23;
                  } while (puVar2 != puVar23);
                  puVar2 = *(undefined8 **)(lVar13 + 0x20);
                  for (puVar10 = *(undefined8 **)(lVar13 + 0x18); puVar10 != puVar2;
                      puVar10 = puVar10 + 1) {
                    (**(code **)(*(long *)*puVar10 + 0x38))();
                  }
                }
              }
            }
            if (*(long **)(lVar22 + 0xd8) != (long *)0x0) {
              param_3 = (long ****)0x1;
              FUN_71025ee580(*(long **)(lVar22 + 0xd8),10,1);
            }
          }
          goto LAB_7102df166c;
        }
        plVar15 = plVar15 + 2;
      } while (plVar14 != plVar15);
    }
  }
  param_1[3] = 0;
LAB_7102df166c:
  uVar8 = (int)((*(float *)((long)param_1 + 0x4c) / -10.0 + 1.0) * 1.5707964 * 2670176.8) +
          0x400000U & 0xffffff;
  uVar20 = 0x1000000 - uVar8;
  if (uVar8 < 0x800001) {
    uVar20 = uVar8;
  }
  fVar24 = (float)(int)(uVar20 - 0x400000) * 3.7450704e-07;
  fVar27 = fVar24 * fVar24;
  fVar24 = fVar24 + fVar24 * fVar27 *
                    (fVar27 * (fVar27 * (fVar27 * 2.601887e-06 + -0.00019807414) + 0.0083330255) +
                    -0.16666657);
  fVar27 = fVar24;
  if (1.0 < fVar24) {
    fVar27 = 1.0;
  }
  lVar22 = param_1[3];
  fVar25 = 0.0;
  if (0.0 <= fVar24) {
    fVar25 = fVar27;
  }
  if ((lVar22 != 0) && (*(char *)(lVar22 + 0xe0) != '\0')) {
    auVar26 = NEON_fmov(0x3f800000,4);
    fVar27 = (fVar25 * -83.0 + 255.0) / 255.0;
    auVar30._0_8_ = (byte ***)CONCAT44(fVar27,fVar27);
    auVar30._12_4_ = auVar26._12_4_;
    auVar30._8_4_ = (fVar25 * -43.0 + 255.0) / 255.0;
    uStack_58 = auVar30._8_8_;
    param_3 = (long ****)0x3;
    param_4 = &local_60;
    local_60 = auVar30._0_8_;
    (**(code **)(**(long **)(lVar22 + 0x90) + 0x268))(*(long **)(lVar22 + 0x90),"leaf_centerber");
  }
  if (9 < *(uint *)(param_1 + 4)) {
LAB_7102df1c88:
                    /* WARNING: Subroutine does not return */
    abort();
  }
  plVar15 = (long *)**(long **)(*(long *)(param_1[2] + 0x300) + 0x18);
  bVar3 = *(&PTR_s_ashibaa_710513eac8)[*(uint *)(param_1 + 4)];
  lVar22 = *plVar15;
  if (bVar3 != 0) goto LAB_7102df17e4;
LAB_7102df1830:
  uVar19 = 0;
  for (uVar17 = 0; (*(ulong *)(lVar22 + 0xa0) & 0xffffffffff) != (uVar17 | uVar19);
      uVar17 = uVar17 & 0xff00000000) {
    plVar15 = plVar15 + 1;
    lVar22 = *plVar15;
    if (bVar3 == 0) goto LAB_7102df1830;
LAB_7102df17e4:
    uVar17 = 0;
    uVar8 = 0xffffffff;
    uVar20 = (uint)bVar3;
    pbVar18 = (&PTR_s_ashibaa_710513eac8)[*(uint *)(param_1 + 4)];
    do {
      pbVar18 = pbVar18 + 1;
      uVar1 = uVar20 + 0x20;
      if (0x19 < uVar20 - 0x41) {
        uVar1 = uVar20;
      }
      uVar8 = (&DAT_7104754084)[(uVar1 ^ uVar8) & 0xff] ^ uVar8 >> 8;
      uVar20 = (uint)*pbVar18;
      uVar17 = uVar17 + 0x100000000;
    } while (uVar20 != 0);
    uVar19 = (ulong)~uVar8;
  }
  plVar14 = *(long **)(lVar22 + 0x110);
  param_1[0xc] = plVar14;
  plVar16 = plVar14 + 1;
  plVar15 = (long *)*plVar14;
  plVar21 = (long *)*plVar16;
  if (plVar15 == plVar21) goto LAB_7102df18bc;
  do {
    lVar22 = *plVar15;
    *(undefined1 *)(lVar22 + 0x128) = 1;
    if (*(long *)(lVar22 + 8) != 0) {
      *(undefined8 *)(*(long *)(lVar22 + 8) + 0xd8) = 0xffffffffffffffff;
      FUN_7100532bc0(*(long *)(lVar22 + 8),0);
    }
    plVar15 = plVar15 + 1;
  } while (plVar21 != plVar15);
  plVar14 = (long *)param_1[0xc];
  plVar16 = plVar14 + 1;
  if ((long *)*plVar14 == (long *)*plVar16) {
LAB_7102df18bc:
    lVar22 = 0;
  }
  else {
    lVar22 = *(long *)*plVar14;
  }
  param_1[0xd] = lVar22;
  plVar14 = (long *)*plVar14;
  plVar16 = (long *)*plVar16;
  if (plVar14 != plVar16) {
    auVar26 = *(undefined1 (*) [16])(param_1 + 0xe);
    do {
      lVar22 = *plVar14;
      if (*(char *)(lVar22 + 0x128) == '\0' ||
          (*(char *)(*(long *)(lVar22 + 8) + 0xe8) != '\0' ||
          *(char *)(*(long *)(lVar22 + 8) + 0xe7) != '\0')) {
        *(undefined1 *)(lVar22 + 0x129) = 1;
LAB_7102df194c:
        *(undefined8 *)(lVar22 + 0x18) = 0;
        *(long *)(lVar22 + 0x10) = auVar26._0_8_;
      }
      else if ((1e-05 < ABS((float)*(undefined8 *)(lVar22 + 0x10) - auVar26._0_4_)) ||
              (1e-05 < ABS((float)((ulong)*(undefined8 *)(lVar22 + 0x10) >> 0x20) - auVar26._4_4_)))
      {
        *(undefined1 *)(lVar22 + 0x12a) = 1;
        goto LAB_7102df194c;
      }
      if (1e-05 <= ABS(*(float *)(lVar22 + 0x30))) {
        *(undefined4 *)(lVar22 + 0x30) = 0;
        *(undefined1 *)(lVar22 + 0x129) = 1;
      }
      uVar31 = *(undefined8 *)(lVar22 + 0x58);
      uVar29 = *(undefined8 *)(lVar22 + 0x50);
      if (1e-05 <= ABS((float)uVar29 + -1.0)) {
        uVar29 = CONCAT44((int)((ulong)uVar29 >> 0x20),0x3f800000);
        *(undefined8 *)(lVar22 + 0x58) = uVar31;
        *(undefined8 *)(lVar22 + 0x50) = uVar29;
        *(undefined1 *)(lVar22 + 0x129) = 1;
      }
      if (1e-05 <= ABS((float)((ulong)uVar29 >> 0x20) + -1.0)) {
        *(undefined8 *)(lVar22 + 0x58) = uVar31;
        *(ulong *)(lVar22 + 0x50) = CONCAT44(0x3f800000,(int)uVar29);
        *(undefined1 *)(lVar22 + 0x129) = 1;
      }
      plVar14 = plVar14 + 1;
    } while (plVar16 != plVar14);
    lVar22 = param_1[0xd];
  }
  lVar13 = *(long *)(lVar22 + 0x60);
  if (lVar13 != 0) {
    sVar5 = *(short *)(lVar13 + 8) + -1;
    *(short *)(lVar13 + 8) = sVar5;
    if ((sVar5 < 1) && (*(long **)(lVar22 + 0x60) != (long *)0x0)) {
      (**(code **)(**(long **)(lVar22 + 0x60) + 8))();
    }
    *(undefined8 *)(lVar22 + 0x60) = 0;
  }
  puVar10 = (undefined8 *)FUN_710392e290(0x10,0x20,param_3,param_4,param_5,param_6,param_7,param_8);
  if (puVar10 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_44 = 0;
      local_60 = (byte ***)&SUB_00000020;
      ppppbVar12 = &local_60;
      uVar17 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_44);
      if (((uVar17 & 1) != 0) &&
         (puVar10 = (undefined8 *)
                    FUN_710392e290(0x10,0x20,(long ****)ppppbVar12,param_4,param_5,param_6,param_7,
                                   param_8), puVar10 != (undefined8 *)0x0)) goto LAB_7102df1a4c;
    }
    puVar10 = (undefined8 *)0x0;
  }
LAB_7102df1a4c:
  *(undefined4 *)(puVar10 + 1) = 0x10001;
  *puVar10 = &PTR_FUN_710507f650;
  puVar10[2] = param_1;
  puVar10[3] = FUN_7102df1c90;
  *(undefined8 **)(lVar22 + 0x60) = puVar10;
  return;
}

