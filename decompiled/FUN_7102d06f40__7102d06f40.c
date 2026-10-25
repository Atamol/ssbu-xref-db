// addr:      7102d06f40
// offset:    0x2d06f40
// name:      FUN_7102d06f40
// mangled:   
// signature: undefined8 * __cdecl FUN_7102d06f40(undefined1[16] param_1, long param_2, undefined8 param_3, long * * * * param_4, undefined1[16] * param_5, undefined1[16] * param_6, undefined1[16] * param_7, undefined8 param_8, undefined8 param_9)


/* WARNING: Removing unreachable block (ram,0x007102d08e90) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_7102d06f40(undefined1 param_1 [16],long param_2,undefined8 param_3,long ****param_4,
              undefined1 (*param_5) [16],undefined1 (*param_6) [16],undefined1 (*param_7) [16],
              undefined8 param_8,undefined8 param_9)

{
  char *pcVar1;
  uint uVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined8 uVar9;
  undefined8 uVar10;
  bool bVar11;
  long *plVar12;
  ulong uVar13;
  long *plVar14;
  undefined8 *puVar15;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 extraout_x1_02;
  undefined8 extraout_x1_03;
  undefined8 extraout_x1_04;
  undefined8 extraout_x1_05;
  undefined8 extraout_x1_06;
  undefined8 extraout_x1_07;
  undefined8 extraout_x1_08;
  undefined8 extraout_x1_09;
  undefined8 extraout_x1_10;
  int iVar16;
  long lVar17;
  code *pcVar18;
  uint uVar19;
  long lVar20;
  undefined4 *puVar21;
  uint *puVar22;
  int *piVar23;
  int iVar24;
  uint uVar25;
  int iVar26;
  ulong uVar27;
  undefined8 uVar28;
  float *pfVar29;
  long lVar30;
  long *plVar31;
  undefined8 *puVar32;
  undefined4 uVar33;
  undefined4 uVar34;
  undefined4 uVar35;
  undefined4 uVar40;
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  undefined1 auVar45 [16];
  float local_b0;
  undefined8 local_98;
  long local_90;
  undefined8 local_88;
  
  local_b0 = (float)param_1._0_8_;
  auVar45 = FUN_71025dd540(param_1._0_8_,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                           param_9);
  if (*(char *)(param_2 + 0xa08) == '\0') {
    fVar43 = 0.0;
  }
  else {
    lVar17 = *lib::Singleton<app::FighterManager>::instance_;
    fVar43 = *(float *)(param_2 + 0x744);
    fVar42 = *(float *)(param_2 + 0x77c);
    iVar26 = *(int *)(lVar17 + 0xa0);
    fVar44 = 0.0;
    if (0 < iVar26) {
      fVar44 = 0.0;
      iVar16 = 0;
      do {
        iVar4 = iVar16;
        if (*(long *)(lVar17 + 0x20) == 0) {
LAB_7102d06fe4:
          if (*(long *)(lVar17 + 0x28) != 0) {
            if (iVar4 == 0) {
              lVar20 = 0x100000000;
              goto LAB_7102d07098;
            }
            iVar4 = iVar4 + -1;
          }
          if (*(long *)(lVar17 + 0x30) != 0) {
            if (iVar4 == 0) {
              lVar20 = 0x200000000;
              goto LAB_7102d07098;
            }
            iVar4 = iVar4 + -1;
          }
          if (*(long *)(lVar17 + 0x38) != 0) {
            if (iVar4 == 0) {
              lVar20 = 0x300000000;
              goto LAB_7102d07098;
            }
            iVar4 = iVar4 + -1;
          }
          if (*(long *)(lVar17 + 0x40) != 0) {
            if (iVar4 == 0) {
              lVar20 = 0x400000000;
              goto LAB_7102d07098;
            }
            iVar4 = iVar4 + -1;
          }
          if (*(long *)(lVar17 + 0x48) != 0) {
            if (iVar4 == 0) {
              lVar20 = 0x500000000;
              goto LAB_7102d07098;
            }
            iVar4 = iVar4 + -1;
          }
          if (*(long *)(lVar17 + 0x50) != 0) {
            if (iVar4 == 0) {
              lVar20 = 0x600000000;
              goto LAB_7102d07098;
            }
            iVar4 = iVar4 + -1;
          }
          lVar20 = 0x700000000;
          if (*(long *)(lVar17 + 0x58) == 0 || iVar4 != 0) {
            lVar20 = -0x100000000;
          }
          if ((iVar4 != 0) || (*(long *)(lVar17 + 0x58) == 0)) goto LAB_7102d0936c;
        }
        else {
          if (iVar16 != 0) {
            iVar4 = iVar16 + -1;
            goto LAB_7102d06fe4;
          }
          lVar20 = 0;
        }
LAB_7102d07098:
        lVar17 = *(long *)(lVar17 + (lVar20 >> 0x1d) + 0x20);
        if ((lVar17 == 0) || (*(char *)(lVar17 + 0x5920) != '\x06')) {
          fVar41 = (float)_ConstantZero;
        }
        else {
          if ((ulong)*(byte *)(lVar17 + 0x5918) < *(ulong *)(lVar17 + 0x4150)) {
            lVar17 = lVar17 + (ulong)*(byte *)(lVar17 + 0x5918) * 8;
            plVar12 = *(long **)(lVar17 + 0x4160);
            if ((plVar12 == (long *)0x0) ||
               (uVar13 = (**(code **)(*plVar12 + 0x518))(), (uVar13 & 1) == 0)) goto LAB_7102d070f8;
            lVar17 = *(long *)(lVar17 + 0x4160);
          }
          else {
LAB_7102d070f8:
            lVar17 = 0;
          }
          FUN_71003a9ab0(&local_98,lVar17);
          auVar45 = (**(code **)(**(long **)(*(long *)(local_90 + 0x20) + 0x38) + 0x60))();
          fVar41 = (float)*auVar45._0_8_;
        }
        fVar44 = fVar44 + fVar41;
        if (iVar26 + -1 == iVar16) break;
        lVar17 = *lib::Singleton<app::FighterManager>::instance_;
        iVar16 = iVar16 + 1;
      } while( true );
    }
    fVar44 = fVar44 / (float)iVar26;
    if (*(int *)(param_2 + 0xb98) == 1) {
      fVar42 = -fVar43 / (float)*(int *)(param_2 + 0x740);
      if (*(float *)(param_2 + 0x750) <= fVar44) {
        fVar43 = *(float *)(param_2 + 0x754);
        if (fVar43 <= fVar44) {
          fVar43 = *(float *)(param_2 + 0x758);
          if (fVar43 <= fVar44) {
            if (fVar44 < *(float *)(param_2 + 0x75c)) {
              fVar41 = *(float *)(param_2 + 0x74c);
              fVar43 = (fVar44 - fVar43) / (*(float *)(param_2 + 0x75c) - fVar43);
              goto LAB_7102d07240;
            }
            fVar43 = *(float *)(param_2 + 0x74c);
          }
          else {
LAB_7102d0721c:
            fVar43 = 1.0;
          }
        }
        else {
          fVar43 = (fVar43 - fVar44) / (fVar43 - *(float *)(param_2 + 0x750));
          fVar41 = *(float *)(param_2 + 0x748);
LAB_7102d071fc:
          fVar43 = 1.0 - fVar43 * (1.0 - fVar41);
        }
      }
      else {
        fVar43 = *(float *)(param_2 + 0x748);
      }
    }
    else {
      fVar43 = 0.0;
      if (*(int *)(param_2 + 0xb98) != 3) goto LAB_7102d07260;
      fVar42 = fVar42 / *(float *)(param_2 + 0x778);
      if (*(float *)(param_2 + 0x788) <= fVar44) {
        fVar43 = *(float *)(param_2 + 0x78c);
        fVar41 = *(float *)(param_2 + 0x790);
        if (fVar43 <= fVar44) {
          if (fVar44 < fVar41) goto LAB_7102d0721c;
          if (fVar44 < *(float *)(param_2 + 0x794)) {
            fVar41 = *(float *)(param_2 + 0x780);
            fVar43 = (fVar43 - fVar44) / (fVar43 - *(float *)(param_2 + 0x794));
            goto LAB_7102d071fc;
          }
          fVar43 = *(float *)(param_2 + 0x780);
        }
        else {
          fVar43 = (fVar44 - fVar41) / (*(float *)(param_2 + 0x788) - fVar41);
          fVar41 = *(float *)(param_2 + 0x784);
LAB_7102d07240:
          fVar43 = fVar43 * (fVar41 + -1.0) + 1.0;
        }
      }
      else {
        fVar43 = *(float *)(param_2 + 0x784);
      }
    }
    fVar43 = fVar42 * fVar43 * local_b0;
  }
LAB_7102d07260:
  lVar17 = *(long *)(param_2 + 0xb58);
  lVar20 = *(long *)(param_2 + 0xb50);
  *(undefined4 *)(param_2 + 3000) = *(undefined4 *)(param_2 + 3000);
  *(undefined4 *)(param_2 + 0xbbc) = *(undefined4 *)(param_2 + 0xbbc);
  *(float *)(param_2 + 0xbb0) = fVar43;
  *(undefined4 *)(param_2 + 0xbb4) = *(undefined4 *)(param_2 + 0xbb4);
  *(undefined8 *)(param_2 + 0xbc8) = *(undefined8 *)(param_2 + 0xbc8);
  *(ulong *)(param_2 + 0xbc0) =
       CONCAT44((int)((ulong)*(undefined8 *)(param_2 + 0xbc0) >> 0x20),
                fVar43 + (float)*(undefined8 *)(param_2 + 0xbc0));
  if (lVar17 != lVar20) {
    uVar13 = 0;
    do {
      plVar12 = *(long **)(lVar20 + uVar13 * 8);
      if ((char)plVar12[6] != '\0') {
        (**(code **)(*plVar12 + 0x28))(local_b0,plVar12);
        (**(code **)(*plVar12 + 0x30))(local_b0,plVar12);
        auVar45 = (**(code **)(*plVar12 + 0x38))(plVar12);
        lVar17 = *(long *)(param_2 + 0xb58);
        lVar20 = *(long *)(param_2 + 0xb50);
      }
      uVar13 = uVar13 + 1;
    } while (uVar13 < (ulong)(lVar17 - lVar20 >> 3));
  }
  lVar17 = *(long *)(param_2 + 0xb40);
  lVar20 = *(long *)(param_2 + 0xb38);
  if (lVar17 != lVar20) {
    uVar13 = 0;
    do {
      plVar12 = *(long **)(lVar20 + uVar13 * 8);
      if ((char)plVar12[6] != '\0') {
        (**(code **)(*plVar12 + 0x28))(local_b0,plVar12);
        (**(code **)(*plVar12 + 0x30))(local_b0,plVar12);
        auVar45 = (**(code **)(*plVar12 + 0x38))(plVar12);
        lVar17 = *(long *)(param_2 + 0xb40);
        lVar20 = *(long *)(param_2 + 0xb38);
      }
      uVar13 = uVar13 + 1;
    } while (uVar13 < (ulong)(lVar17 - lVar20 >> 3));
  }
  lVar17 = *(long *)(param_2 + 0xa50);
  lVar20 = *(long *)(param_2 + 0xa48);
  if (lVar17 != lVar20) {
    uVar13 = 0;
    do {
      plVar12 = *(long **)(lVar20 + uVar13 * 8);
      if ((char)plVar12[6] != '\0') {
        (**(code **)(*plVar12 + 0x28))(local_b0,plVar12);
        (**(code **)(*plVar12 + 0x30))(local_b0,plVar12);
        auVar45 = (**(code **)(*plVar12 + 0x38))(plVar12);
        lVar17 = *(long *)(param_2 + 0xa50);
        lVar20 = *(long *)(param_2 + 0xa48);
      }
      uVar13 = uVar13 + 1;
    } while (uVar13 < (ulong)(lVar17 - lVar20 >> 3));
  }
  plVar12 = *(long **)(param_2 + 0xb70);
  if ((char)plVar12[6] != '\0') {
    (**(code **)(*plVar12 + 0x28))(local_b0,plVar12);
    (**(code **)(*plVar12 + 0x30))(local_b0,plVar12);
    auVar45 = (**(code **)(*plVar12 + 0x38))(plVar12);
  }
  plVar12 = *(long **)(param_2 + 0xb80);
  if ((char)plVar12[6] != '\0') {
    (**(code **)(*plVar12 + 0x28))(local_b0,plVar12);
    (**(code **)(*plVar12 + 0x30))(local_b0,plVar12);
    auVar45 = (**(code **)(*plVar12 + 0x38))(plVar12);
  }
  uVar28 = auVar45._8_8_;
  if (*(int *)(param_2 + 0xdc) == 2) {
    lVar17 = *(long *)(param_2 + 0xb90);
    auVar45._8_8_ = uVar28;
    auVar45._0_8_ = lVar17;
    bVar11 = false;
    if (*(long *)(lVar17 + 0x30) != 0) {
      bVar11 = *(char *)(*(long *)(lVar17 + 0x30) + 0x10) != '\0';
    }
    if ((bVar11) || (*(char *)(lVar17 + 0x40) != '\0')) {
      auVar45 = FUN_71031446b0(lVar17,uVar28,param_4,(byte ****)param_5,(long ****)param_6,param_7,
                               param_8,param_9);
      plVar12 = *(long **)(param_2 + 0xb90);
      if ((char)plVar12[8] != '\0') {
        plVar31 = (long *)plVar12[6];
        if (((plVar31 != (long *)0x0) && ((char)plVar31[2] != '\0')) &&
           (*(undefined1 *)(plVar31 + 2) = 0, (char)plVar31[10] != '\0')) {
          plVar14 = (long *)FUN_71003ac560((ulong)*(uint *)(*plVar31 + 8));
          (**(code **)(*plVar14 + 0x48))(plVar14,0);
          *(undefined1 *)(plVar31 + 10) = 0;
        }
        auVar45 = (**(code **)(*plVar12 + 0x30))(plVar12);
      }
      *(undefined1 *)(plVar12 + 8) = 0;
    }
  }
  lVar17 = *(long *)(param_2 + 0xb90);
  if ((*(long *)(lVar17 + 0xb8) != 0) && (*(char *)(*(long *)(lVar17 + 0xb8) + 0x110) != '\0')) {
    fVar43 = *(float *)(param_2 + 0x8f8);
    fVar44 = *(float *)(param_2 + 0xbc0);
    uVar40 = *(undefined4 *)(param_2 + 0x8fc);
    *(ulong *)(lVar17 + 0x78) = (ulong)*(uint *)(param_2 + 0x900);
    *(ulong *)(lVar17 + 0x70) = CONCAT44(uVar40,fVar43 + fVar44);
  }
  plVar12 = *(long **)(param_2 + 0xb88);
  if ((char)plVar12[6] != '\0') {
    (**(code **)(*plVar12 + 0x28))(local_b0,plVar12);
    (**(code **)(*plVar12 + 0x30))(local_b0,plVar12);
    auVar45 = (**(code **)(*plVar12 + 0x38))(plVar12);
  }
  puVar15 = auVar45._0_8_;
  switch(*(undefined4 *)(param_2 + 0xb98)) {
  case 1:
    fVar43 = *(float *)(param_2 + 0x744);
    if (*(char *)(param_2 + 0xb78) == '\0') {
      if (ABS(**(float **)(param_2 + 0x808)) < ABS(*(float *)(param_2 + 0xbc0))) {
        *(undefined1 *)(param_2 + 0xb78) = 1;
        *(float *)(param_2 + 0xba0) = (*(float **)(param_2 + 0x808))[1];
        FUN_7102d12a40(*(long *)(param_2 + 0xb70),-1);
        lVar17 = *(long *)(param_2 + 0x808);
        uVar40 = *(undefined4 *)(lVar17 + 8);
        puVar21 = (undefined4 *)(lVar17 + 0xc);
        puVar22 = (uint *)(lVar17 + 0x10);
        goto LAB_7102d0785c;
      }
    }
    else if ((*(char *)(param_2 + 0xb79) == '\0') &&
            (ABS(*(float *)(*(long *)(param_2 + 0x808) + 0x14)) < ABS(*(float *)(param_2 + 0xbc0))))
    {
      *(undefined1 *)(param_2 + 0xb79) = 1;
      *(undefined4 *)(param_2 + 0xba0) = *(undefined4 *)(*(long *)(param_2 + 0x808) + 0x18);
      FUN_7102d12a40(*(long *)(param_2 + 0xb70),-1);
      lVar17 = *(long *)(param_2 + 0x808);
      uVar40 = *(undefined4 *)(lVar17 + 0x1c);
      puVar21 = (undefined4 *)(lVar17 + 0x20);
      puVar22 = (uint *)(lVar17 + 0x24);
LAB_7102d0785c:
      uVar33 = *puVar21;
      plVar12 = *(long **)(param_2 + 0xb70);
      plVar12[5] = (ulong)*puVar22;
      plVar12[4] = CONCAT44(uVar33,uVar40);
      auVar45 = (**(code **)(*plVar12 + 0x10))(plVar12,1);
    }
    if ((*(char *)(param_2 + 0xbf0) != '\0') &&
       (*(float *)(param_2 + 0xbc0) < *(float *)(param_2 + 0x760))) {
      plVar31 = *(long **)(*(long *)(param_2 + 0x300) + 0x18);
      plVar12 = (long *)*plVar31;
      plVar31 = (long *)plVar31[1];
      if (plVar12 != plVar31) {
        do {
          if ((*(ulong *)(*plVar12 + 0xa0) & 0xffffffffff) == 0x7b569df99) {
            puVar15 = *(undefined8 **)(*plVar12 + 0x130);
            FUN_71025f55b0((undefined8 *)*puVar15,(undefined8 *)puVar15[1],"IPP0001");
            param_4 = (long ****)"IPP0002";
            auVar45 = FUN_71025f5420((undefined8 *)*puVar15,(undefined8 *)puVar15[1],"IPP0002");
          }
          plVar12 = plVar12 + 1;
        } while (plVar31 != plVar12);
      }
      *(undefined2 *)(param_2 + 0xbf0) = 0x100;
    }
    if ((*(char *)(param_2 + 0xbf1) != '\0') &&
       (*(float *)(param_2 + 0xbc0) < *(float *)(param_2 + 0x764))) {
      plVar31 = *(long **)(*(long *)(param_2 + 0x300) + 0x18);
      plVar12 = (long *)*plVar31;
      plVar31 = (long *)plVar31[1];
      if (plVar12 != plVar31) {
        do {
          if ((*(ulong *)(*plVar12 + 0xa0) & 0xffffffffff) == 0x7b569df99) {
            puVar15 = *(undefined8 **)(*plVar12 + 0x130);
            param_4 = (long ****)"IPP0003";
            auVar45 = FUN_71025f5420((undefined8 *)*puVar15,(undefined8 *)puVar15[1],"IPP0003");
          }
          plVar12 = plVar12 + 1;
        } while (plVar31 != plVar12);
      }
      *(undefined1 *)(param_2 + 0xbf1) = 0;
    }
    uVar28 = auVar45._8_8_;
    puVar15 = auVar45._0_8_;
    if ((float)*(ulong *)(param_2 + 0xbc0) < -fVar43) {
      lVar17 = *(long *)(param_2 + 0xa48);
      *(undefined8 *)(param_2 + 0xbc8) = *(undefined8 *)(param_2 + 0xbc8);
      *(ulong *)(param_2 + 0xbc0) = *(ulong *)(param_2 + 0xbc0) & 0xffffffff00000000;
      if (*(long *)(param_2 + 0xa50) != lVar17) {
        uVar13 = 0;
        do {
          plVar12 = *(long **)(lVar17 + uVar13 * 8);
          (**(code **)(*plVar12 + 0x18))(plVar12,2);
          lVar17 = *(long *)(param_2 + 0xa48);
          uVar13 = uVar13 + 1;
          uVar28 = extraout_x1;
        } while (uVar13 < (ulong)(*(long *)(param_2 + 0xa50) - lVar17 >> 3));
      }
      lVar17 = *(long *)(param_2 + 0xb38);
      if (*(long *)(param_2 + 0xb40) != lVar17) {
        uVar13 = 0;
        do {
          plVar12 = *(long **)(lVar17 + uVar13 * 8);
          (**(code **)(*plVar12 + 0x18))(plVar12,2);
          lVar17 = *(long *)(param_2 + 0xb38);
          uVar13 = uVar13 + 1;
          uVar28 = extraout_x1_00;
        } while (uVar13 < (ulong)(*(long *)(param_2 + 0xb40) - lVar17 >> 3));
      }
      lVar17 = *(long *)(param_2 + 0xb50);
      if (*(long *)(param_2 + 0xb58) != lVar17) {
        uVar13 = 0;
        do {
          plVar12 = *(long **)(lVar17 + uVar13 * 8);
          (**(code **)(*plVar12 + 0x18))(plVar12,2);
          lVar17 = *(long *)(param_2 + 0xb50);
          uVar13 = uVar13 + 1;
          uVar28 = extraout_x1_01;
        } while (uVar13 < (ulong)(*(long *)(param_2 + 0xb58) - lVar17 >> 3));
      }
      plVar12 = *(long **)(param_2 + 0xb68);
      lVar17 = *plVar12;
      if (plVar12[1] != lVar17) {
        uVar13 = 0;
        do {
          lVar20 = *(long *)(lVar17 + uVar13 * 8);
          if (lVar20 != 0) {
            *(undefined1 *)(lVar20 + 0x110) = 0;
            FUN_71025e9d50((long *)(lVar20 + 0x108),uVar28,param_4,(byte ****)param_5,
                           (long ****)param_6,param_7,param_8,param_9);
            lVar17 = *plVar12;
            uVar28 = extraout_x1_02;
          }
          lVar20 = *(long *)(lVar17 + uVar13 * 8);
          if (lVar20 != 0) {
            *(byte *)(lVar20 + 0x118) = *(byte *)(lVar20 + 0x118) | 1;
            lVar17 = *plVar12;
          }
          uVar13 = uVar13 + 1;
        } while (uVar13 < (ulong)(plVar12[1] - lVar17 >> 3));
      }
      (**(code **)(**(long **)(param_2 + 0xb80) + 0x18))(*(long **)(param_2 + 0xb80),2);
      (**(code **)(**(long **)(param_2 + 0xb88) + 0x18))(*(long **)(param_2 + 0xb88),2);
      plVar12 = *(long **)(param_2 + 0xb90);
      uVar28 = extraout_x1_03;
      if ((char)plVar12[8] != '\0') {
        plVar31 = (long *)plVar12[6];
        if (((plVar31 != (long *)0x0) && ((char)plVar31[2] != '\0')) &&
           (*(undefined1 *)(plVar31 + 2) = 0, (char)plVar31[10] != '\0')) {
          plVar14 = (long *)FUN_71003ac560((ulong)*(uint *)(*plVar31 + 8));
          (**(code **)(*plVar14 + 0x48))(plVar14,0);
          *(undefined1 *)(plVar31 + 10) = 0;
        }
        (**(code **)(*plVar12 + 0x30))(plVar12);
        uVar28 = extraout_x1_04;
      }
      *(undefined1 *)(plVar12 + 8) = 0;
      lVar20 = *(long *)(param_2 + 0xb90);
      lVar17 = *(long *)(lVar20 + 0xb8);
      if (lVar17 != 0) {
        *(undefined1 *)(lVar17 + 0x110) = 0;
        FUN_71025e9d50((long *)(lVar17 + 0x108),uVar28,param_4,(byte ****)param_5,(long ****)param_6
                       ,param_7,param_8,param_9);
        uVar28 = extraout_x1_05;
      }
      FUN_7103140b20(lVar20,uVar28,param_4,(byte ****)param_5,(long ****)param_6,param_7,param_8,
                     param_9);
      *(float *)(param_2 + 0xba0) =
           *(float *)(param_2 + 0x76c) + *(float *)(*(long *)(param_2 + 0x808) + 0x2c);
      FUN_7102d12a40(*(long *)(param_2 + 0xb70),4);
      lVar17 = *(long *)(param_2 + 0xad8);
      *(undefined1 *)(param_2 + 0xb78) = 0;
      if (*(long *)(param_2 + 0xae0) != lVar17) {
        uVar13 = 0;
        do {
          FUN_710313ef20(*(long **)(lVar17 + uVar13 * 8));
          (**(code **)(**(long **)(*(long *)(param_2 + 0xad8) + uVar13 * 8) + 0x10))(0);
          lVar17 = *(long *)(param_2 + 0xad8);
          uVar13 = uVar13 + 1;
        } while (uVar13 < (ulong)(*(long *)(param_2 + 0xae0) - lVar17 >> 3));
      }
      lVar17 = *(long *)(param_2 + 0xac0);
      if (*(long *)(param_2 + 0xac8) != lVar17) {
        uVar13 = 0;
        do {
          plVar12 = *(long **)(lVar17 + uVar13 * 8);
          if ((char)plVar12[8] != '\0') {
            plVar31 = (long *)plVar12[6];
            if (((plVar31 != (long *)0x0) && ((char)plVar31[2] != '\0')) &&
               (*(undefined1 *)(plVar31 + 2) = 0, (char)plVar31[10] != '\0')) {
              plVar14 = (long *)FUN_71003ac560((ulong)*(uint *)(*plVar31 + 8));
              (**(code **)(*plVar14 + 0x48))(plVar14,0);
              *(undefined1 *)(plVar31 + 10) = 0;
            }
            (**(code **)(*plVar12 + 0x30))(plVar12);
          }
          *(undefined1 *)(plVar12 + 8) = 0;
          lVar17 = *(long *)(param_2 + 0xac0);
          uVar13 = uVar13 + 1;
        } while (uVar13 < (ulong)(*(long *)(param_2 + 0xac8) - lVar17 >> 3));
      }
      lVar17 = *(long *)(param_2 + 0xaf0);
      if (*(long *)(param_2 + 0xaf8) != lVar17) {
        uVar13 = 0;
        do {
          plVar12 = *(long **)(lVar17 + uVar13 * 8);
          if ((char)plVar12[8] != '\0') {
            plVar31 = (long *)plVar12[6];
            if (((plVar31 != (long *)0x0) && ((char)plVar31[2] != '\0')) &&
               (*(undefined1 *)(plVar31 + 2) = 0, (char)plVar31[10] != '\0')) {
              plVar14 = (long *)FUN_71003ac560((ulong)*(uint *)(*plVar31 + 8));
              (**(code **)(*plVar14 + 0x48))(plVar14,0);
              *(undefined1 *)(plVar31 + 10) = 0;
            }
            (**(code **)(*plVar12 + 0x30))(plVar12);
          }
          *(undefined1 *)(plVar12 + 8) = 0;
          lVar17 = *(long *)(param_2 + 0xaf0);
          uVar13 = uVar13 + 1;
        } while (uVar13 < (ulong)(*(long *)(param_2 + 0xaf8) - lVar17 >> 3));
      }
      lVar17 = *(long *)(param_2 + 0xb08);
      if (*(long *)(param_2 + 0xb10) != lVar17) {
        uVar13 = 0;
        do {
          plVar12 = *(long **)(lVar17 + uVar13 * 8);
          if ((char)plVar12[8] != '\0') {
            plVar31 = (long *)plVar12[6];
            if (((plVar31 != (long *)0x0) && ((char)plVar31[2] != '\0')) &&
               (*(undefined1 *)(plVar31 + 2) = 0, (char)plVar31[10] != '\0')) {
              plVar14 = (long *)FUN_71003ac560((ulong)*(uint *)(*plVar31 + 8));
              (**(code **)(*plVar14 + 0x48))(plVar14,0);
              *(undefined1 *)(plVar31 + 10) = 0;
            }
            (**(code **)(*plVar12 + 0x30))(plVar12);
          }
          *(undefined1 *)(plVar12 + 8) = 0;
          lVar17 = *(long *)(param_2 + 0xb08);
          uVar13 = uVar13 + 1;
        } while (uVar13 < (ulong)(*(long *)(param_2 + 0xb10) - lVar17 >> 3));
      }
      lVar17 = *(long *)(param_2 + 0x300);
      FUN_710262bb40(lVar17,2);
      FUN_710262beb0(lVar17,0xfffffffd);
      puVar15 = (undefined8 *)FUN_710262c200(*(long *)(param_2 + 0x300),1);
      if (((DAT_71053144d8 & 1) == 0) &&
         (puVar15 = (undefined8 *)__cxa_guard_acquire(&DAT_71053144d8), (int)puVar15 != 0)) {
        FUN_7101764000();
        FUN_71000001c0();
        puVar15 = (undefined8 *)__cxa_guard_release(&DAT_71053144d8);
      }
      *(undefined4 *)(param_2 + 0xb9c) = *(undefined4 *)(param_2 + 0x768);
      *(undefined4 *)(param_2 + 0xb98) = 2;
      if (*(char *)(param_2 + 0xbf2) != '\0') {
        *(undefined1 *)(param_2 + 0xbf3) = 1;
      }
    }
    break;
  case 2:
    *(float *)(param_2 + 0xb9c) = *(float *)(param_2 + 0xb9c) - local_b0;
    if ((*(char *)(param_2 + 0xb78) == '\0') &&
       (lVar17 = *(long *)(param_2 + 0x808), *(float *)(param_2 + 0xba0) < *(float *)(lVar17 + 0x2c)
       )) {
      *(undefined1 *)(param_2 + 0xb78) = 1;
      plVar12 = *(long **)(param_2 + 0xb70);
      lVar20 = *(long *)(lVar17 + 0x30);
      plVar12[5] = (ulong)*(uint *)(lVar17 + 0x38);
      plVar12[4] = lVar20;
      auVar45 = (**(code **)(*plVar12 + 0x10))(plVar12,1);
    }
    plVar31 = *(long **)(*(long *)(param_2 + 0x300) + 0x18);
    plVar12 = (long *)*plVar31;
    plVar31 = (long *)plVar31[1];
    if (plVar12 != plVar31) {
      do {
        if ((*(ulong *)(*plVar12 + 0xa0) & 0xffffffffff) == 0x77e350c3c) {
          puVar15 = *(undefined8 **)(*plVar12 + 0x130);
          if (((DAT_71053144d8 & 1) == 0) &&
             (auVar45 = __cxa_guard_acquire(&DAT_71053144d8), auVar45._0_4_ != 0)) {
            FUN_7101764000();
            param_4 = (long ****)&PTR_LOOP_7104f17000;
            FUN_71000001c0();
            auVar45 = __cxa_guard_release(&DAT_71053144d8);
          }
          if (DAT_71052c51ba == '\0') {
            param_4 = (long ****)"IPP0102";
            auVar45 = FUN_71025f55b0((undefined8 *)*puVar15,(undefined8 *)puVar15[1],"IPP0102");
          }
        }
        plVar12 = plVar12 + 1;
      } while (plVar31 != plVar12);
    }
    uVar28 = auVar45._8_8_;
    puVar15 = auVar45._0_8_;
    if (*(float *)(param_2 + 0xb9c) < 0.0) {
      lVar17 = *(long *)(param_2 + 0xa48);
      *(undefined8 *)(param_2 + 0xbc8) = *(undefined8 *)(param_2 + 0xbc8);
      *(ulong *)(param_2 + 0xbc0) = *(ulong *)(param_2 + 0xbc0) & 0xffffffff00000000;
      if (*(long *)(param_2 + 0xa50) != lVar17) {
        uVar13 = 0;
        do {
          plVar12 = *(long **)(lVar17 + uVar13 * 8);
          (**(code **)(*plVar12 + 0x18))(plVar12,3);
          lVar17 = *(long *)(param_2 + 0xa48);
          uVar13 = uVar13 + 1;
          uVar28 = extraout_x1_06;
        } while (uVar13 < (ulong)(*(long *)(param_2 + 0xa50) - lVar17 >> 3));
      }
      lVar17 = *(long *)(param_2 + 0xb38);
      if (*(long *)(param_2 + 0xb40) != lVar17) {
        uVar13 = 0;
        do {
          plVar12 = *(long **)(lVar17 + uVar13 * 8);
          (**(code **)(*plVar12 + 0x18))(plVar12,3);
          lVar17 = *(long *)(param_2 + 0xb38);
          uVar13 = uVar13 + 1;
          uVar28 = extraout_x1_07;
        } while (uVar13 < (ulong)(*(long *)(param_2 + 0xb40) - lVar17 >> 3));
      }
      lVar17 = *(long *)(param_2 + 0xb50);
      if (*(long *)(param_2 + 0xb58) != lVar17) {
        uVar13 = 0;
        do {
          plVar12 = *(long **)(lVar17 + uVar13 * 8);
          (**(code **)(*plVar12 + 0x18))(plVar12,3);
          lVar17 = *(long *)(param_2 + 0xb50);
          uVar13 = uVar13 + 1;
          uVar28 = extraout_x1_08;
        } while (uVar13 < (ulong)(*(long *)(param_2 + 0xb58) - lVar17 >> 3));
      }
      plVar12 = *(long **)(param_2 + 0xb68);
      lVar17 = *plVar12;
      if (plVar12[1] != lVar17) {
        uVar13 = 0;
        do {
          lVar20 = *(long *)(lVar17 + uVar13 * 8);
          if (lVar20 != 0) {
            *(undefined1 *)(lVar20 + 0x110) = 0;
            FUN_71025e9d50((long *)(lVar20 + 0x108),uVar28,param_4,(byte ****)param_5,
                           (long ****)param_6,param_7,param_8,param_9);
            lVar17 = *plVar12;
            uVar28 = extraout_x1_09;
          }
          lVar20 = *(long *)(lVar17 + uVar13 * 8);
          if (lVar20 != 0) {
            *(byte *)(lVar20 + 0x118) = *(byte *)(lVar20 + 0x118) | 1;
            lVar17 = *plVar12;
          }
          uVar13 = uVar13 + 1;
        } while (uVar13 < (ulong)(plVar12[1] - lVar17 >> 3));
      }
      (**(code **)(**(long **)(param_2 + 0xb80) + 0x18))(*(long **)(param_2 + 0xb80),3);
      (**(code **)(**(long **)(param_2 + 0xb88) + 0x18))(*(long **)(param_2 + 0xb88),3);
      plVar12 = *(long **)(param_2 + 0xb90);
      if (*(char *)(param_2 + 0x18) == '\0') {
        if ((char)plVar12[8] != '\0') {
          plVar31 = (long *)plVar12[6];
          if (((plVar31 != (long *)0x0) && ((char)plVar31[2] != '\0')) &&
             (*(undefined1 *)(plVar31 + 2) = 0, (char)plVar31[10] != '\0')) {
            plVar14 = (long *)FUN_71003ac560((ulong)*(uint *)(*plVar31 + 8));
            (**(code **)(*plVar14 + 0x48))(plVar14,0);
            *(undefined1 *)(plVar31 + 10) = 0;
          }
          (**(code **)(*plVar12 + 0x30))(plVar12);
        }
        *(undefined1 *)(plVar12 + 8) = 0;
        pcVar18 = *(code **)(**(long **)(param_2 + 0xb90) + 0x80);
      }
      else {
        FUN_710313ef20(plVar12);
        pcVar18 = *(code **)(**(long **)(param_2 + 0xb90) + 0x88);
      }
      (*pcVar18)();
      lVar17 = *(long *)(*(long *)(param_2 + 0xb90) + 0xb8);
      if (lVar17 != 0) {
        *(undefined1 *)(lVar17 + 0x110) = 1;
        FUN_71025e9d50((long *)(lVar17 + 0x108),extraout_x1_10,param_4,(byte ****)param_5,
                       (long ****)param_6,param_7,param_8,param_9);
      }
      iVar16 = (int)((ulong)(*(long *)(param_2 + 0xa80) - *(long *)(param_2 + 0xa78)) >> 3);
      iVar26 = (iVar16 + -1) * iVar16;
      if (iVar26 < 0) {
        iVar26 = iVar26 + 1;
      }
      puVar22 = *(uint **)(param_2 + 0x340);
      *(undefined1 *)(param_2 + 0xb78) = 0;
      uVar25 = *puVar22 ^ *puVar22 << 0xb;
      uVar2 = puVar22[3];
      *puVar22 = puVar22[1];
      puVar22[1] = puVar22[2];
      uVar25 = uVar25 ^ uVar25 >> 8 ^ uVar2 ^ uVar2 >> 0x13;
      puVar22[2] = uVar2;
      puVar22[3] = uVar25;
      if (0 < iVar16) {
        uVar2 = iVar26 >> 1;
        uVar6 = 0;
        if (uVar2 != 0) {
          uVar6 = uVar25 / uVar2;
        }
        uVar19 = 0;
        iVar26 = 0;
        iVar4 = uVar25 - uVar6 * uVar2;
        iVar5 = iVar4;
        iVar24 = iVar16;
        do {
          iVar24 = iVar24 + -1;
          iVar26 = iVar24 + iVar26;
          if (iVar4 < iVar26) {
            uVar13 = (ulong)(int)(uVar19 + iVar5 + 1);
            goto LAB_7102d081ac;
          }
          uVar19 = uVar19 + 1;
          iVar5 = iVar5 - iVar24;
        } while ((int)uVar19 < iVar16);
      }
      uVar13 = 0;
      uVar19 = 0;
LAB_7102d081ac:
      plVar12 = *(long **)(*(long *)(param_2 + 0xa78) + (ulong)uVar19 * 8);
      (**(code **)(*plVar12 + 0x20))(plVar12,0,1);
      plVar12 = *(long **)(*(long *)(param_2 + 0xa78) + uVar13 * 8);
      (**(code **)(*plVar12 + 0x20))(plVar12,0,1);
      iVar26 = -2;
      uVar27 = *(long *)(param_2 + 0xab0) - *(long *)(param_2 + 0xaa8) >> 3;
      if (uVar27 <= uVar13) {
        iVar26 = -1;
      }
      uVar25 = (uint)uVar27;
      if (uVar19 < uVar27) {
        uVar25 = iVar26 + (uint)uVar27;
      }
      puVar22 = *(uint **)(param_2 + 0x340);
      uVar2 = *puVar22;
      *puVar22 = puVar22[1];
      uVar6 = puVar22[3];
      uVar2 = uVar2 ^ uVar2 << 0xb;
      puVar22[1] = puVar22[2];
      puVar22[2] = uVar6;
      uVar2 = uVar2 ^ uVar2 >> 8 ^ uVar6 ^ uVar6 >> 0x13;
      puVar22[3] = uVar2;
      lVar17 = *(long *)(param_2 + 0xab0) - *(long *)(param_2 + 0xaa8);
      if (lVar17 != 0) {
        uVar6 = 0;
        if (uVar25 != 0) {
          uVar6 = uVar2 / uVar25;
        }
        uVar13 = 0;
        uVar27 = lVar17 >> 3;
        iVar26 = uVar2 - uVar6 * uVar25;
        do {
          lVar17 = *(long *)(*(long *)(param_2 + 0xaa8) + (long)iVar26 * 8);
          if (*(char *)(lVar17 + 0x65) != '\0') {
            *(undefined1 *)(lVar17 + 0x65) = 0;
            break;
          }
          if (*(char *)(lVar17 + 0x66) == '\0') {
            *(undefined1 *)(lVar17 + 0x65) = 1;
            break;
          }
          uVar13 = uVar13 + 1;
          iVar16 = 0;
          if ((ulong)(long)(iVar26 + 1) < uVar27) {
            iVar16 = iVar26 + 1;
          }
          iVar26 = iVar16;
        } while (uVar13 < uVar27);
      }
      lVar17 = *(long *)(param_2 + 0xaf0);
      if (*(long *)(param_2 + 0xaf8) != lVar17) {
        uVar13 = 0;
        do {
          FUN_710313ef20(*(long **)(lVar17 + uVar13 * 8));
          (**(code **)(**(long **)(*(long *)(param_2 + 0xaf0) + uVar13 * 8) + 0x10))(0);
          lVar17 = *(long *)(param_2 + 0xaf0);
          uVar13 = uVar13 + 1;
        } while (uVar13 < (ulong)(*(long *)(param_2 + 0xaf8) - lVar17 >> 3));
      }
      lVar17 = *(long *)(param_2 + 0xac0);
      if (*(long *)(param_2 + 0xac8) != lVar17) {
        uVar13 = 0;
        do {
          plVar12 = *(long **)(lVar17 + uVar13 * 8);
          if ((char)plVar12[8] != '\0') {
            plVar31 = (long *)plVar12[6];
            if (((plVar31 != (long *)0x0) && ((char)plVar31[2] != '\0')) &&
               (*(undefined1 *)(plVar31 + 2) = 0, (char)plVar31[10] != '\0')) {
              plVar14 = (long *)FUN_71003ac560((ulong)*(uint *)(*plVar31 + 8));
              (**(code **)(*plVar14 + 0x48))(plVar14,0);
              *(undefined1 *)(plVar31 + 10) = 0;
            }
            (**(code **)(*plVar12 + 0x30))(plVar12);
          }
          *(undefined1 *)(plVar12 + 8) = 0;
          lVar17 = *(long *)(param_2 + 0xac0);
          uVar13 = uVar13 + 1;
        } while (uVar13 < (ulong)(*(long *)(param_2 + 0xac8) - lVar17 >> 3));
      }
      lVar17 = *(long *)(param_2 + 0xad8);
      if (*(long *)(param_2 + 0xae0) != lVar17) {
        uVar13 = 0;
        do {
          plVar12 = *(long **)(lVar17 + uVar13 * 8);
          if ((char)plVar12[8] != '\0') {
            plVar31 = (long *)plVar12[6];
            if (((plVar31 != (long *)0x0) && ((char)plVar31[2] != '\0')) &&
               (*(undefined1 *)(plVar31 + 2) = 0, (char)plVar31[10] != '\0')) {
              plVar14 = (long *)FUN_71003ac560((ulong)*(uint *)(*plVar31 + 8));
              (**(code **)(*plVar14 + 0x48))(plVar14,0);
              *(undefined1 *)(plVar31 + 10) = 0;
            }
            (**(code **)(*plVar12 + 0x30))(plVar12);
          }
          *(undefined1 *)(plVar12 + 8) = 0;
          lVar17 = *(long *)(param_2 + 0xad8);
          uVar13 = uVar13 + 1;
        } while (uVar13 < (ulong)(*(long *)(param_2 + 0xae0) - lVar17 >> 3));
      }
      lVar17 = *(long *)(param_2 + 0xb08);
      if (*(long *)(param_2 + 0xb10) != lVar17) {
        uVar13 = 0;
        do {
          plVar12 = *(long **)(lVar17 + uVar13 * 8);
          if ((char)plVar12[8] != '\0') {
            plVar31 = (long *)plVar12[6];
            if (((plVar31 != (long *)0x0) && ((char)plVar31[2] != '\0')) &&
               (*(undefined1 *)(plVar31 + 2) = 0, (char)plVar31[10] != '\0')) {
              plVar14 = (long *)FUN_71003ac560((ulong)*(uint *)(*plVar31 + 8));
              (**(code **)(*plVar14 + 0x48))(plVar14,0);
              *(undefined1 *)(plVar31 + 10) = 0;
            }
            (**(code **)(*plVar12 + 0x30))(plVar12);
          }
          *(undefined1 *)(plVar12 + 8) = 0;
          lVar17 = *(long *)(param_2 + 0xb08);
          uVar13 = uVar13 + 1;
        } while (uVar13 < (ulong)(*(long *)(param_2 + 0xb10) - lVar17 >> 3));
      }
      lVar17 = *(long *)(param_2 + 0x300);
      FUN_710262bb40(lVar17,4);
      FUN_710262beb0(lVar17,0xfffffffb);
      puVar15 = (undefined8 *)FUN_710262c200(*(long *)(param_2 + 0x300),2);
      if (((DAT_71053144d8 & 1) == 0) &&
         (puVar15 = (undefined8 *)__cxa_guard_acquire(&DAT_71053144d8), (int)puVar15 != 0)) {
        FUN_7101764000();
        FUN_71000001c0();
        puVar15 = (undefined8 *)__cxa_guard_release(&DAT_71053144d8);
      }
      plVar12 = *(long **)(*(long *)(param_2 + 0x300) + 0x18);
      plVar31 = (long *)plVar12[1];
      for (plVar12 = (long *)*plVar12; plVar12 != plVar31; plVar12 = plVar12 + 1) {
        if ((*(ulong *)(*plVar12 + 0xa0) & 0xffffffffff) == 0x7f8a17e92) {
          puVar32 = *(undefined8 **)(*plVar12 + 0x130);
          FUN_71025f55b0((undefined8 *)*puVar32,(undefined8 *)puVar32[1],"IPP0202");
          puVar15 = (undefined8 *)
                    FUN_71025f55b0((undefined8 *)*puVar32,(undefined8 *)puVar32[1],"IPP0204");
          if (((DAT_71053144d8 & 1) == 0) &&
             (puVar15 = (undefined8 *)__cxa_guard_acquire(&DAT_71053144d8), (int)puVar15 != 0)) {
            FUN_7101764000();
            FUN_71000001c0();
            puVar15 = (undefined8 *)__cxa_guard_release(&DAT_71053144d8);
          }
          if (DAT_71052c51ba == '\0') {
            puVar15 = (undefined8 *)
                      FUN_71025f55b0((undefined8 *)*puVar32,(undefined8 *)puVar32[1],"IPP0203");
          }
        }
      }
      *(undefined1 *)(param_2 + 0xbf0) = 1;
      plVar12 = DAT_71052b6fd8;
      uVar25 = *(uint *)(param_2 + 0xa3c);
      uVar28 = *(undefined8 *)(param_2 + 0xa14);
      piVar23 = *(int **)(*DAT_71052b6fd8 + 0xc0);
      if (uVar25 == 0xffffffff) {
        uVar25 = 0;
        if ((char)piVar23[0x119] != '\0') {
          if (*(char *)((long)piVar23 + 0x465) == '\0') {
            uVar25 = 1;
          }
          else if (*(char *)((long)piVar23 + 0x466) == '\0') {
            uVar25 = 2;
          }
          else if (*(char *)((long)piVar23 + 0x467) == '\0') {
            uVar25 = 3;
          }
          else if ((char)piVar23[0x11a] == '\0') {
            uVar25 = 4;
          }
          else if (*(char *)((long)piVar23 + 0x469) == '\0') {
            uVar25 = 5;
          }
          else if (*(char *)((long)piVar23 + 0x46a) == '\0') {
            uVar25 = 6;
          }
          else {
            if (*(char *)((long)piVar23 + 0x46b) != '\0') goto LAB_7102d085e4;
            uVar25 = 7;
          }
        }
LAB_7102d08660:
        *(undefined8 *)(piVar23 + (long)(int)uVar25 * 5 + 1) = *(undefined8 *)(param_2 + 0xa0c);
        *(undefined8 *)(piVar23 + (long)(int)uVar25 * 5 + 3) = uVar28;
        piVar23[(long)(int)uVar25 * 5 + 5] = -1;
        cVar3 = *(char *)((long)piVar23 + (long)(int)uVar25 + 0x464);
        if (cVar3 != 'A') {
          if (cVar3 == '\0') {
            *piVar23 = *piVar23 + 1;
          }
          *(undefined1 *)((long)piVar23 + (long)(int)uVar25 + 0x464) = 0x41;
        }
      }
      else {
        if (uVar25 < 8) goto LAB_7102d08660;
LAB_7102d085e4:
        uVar25 = 0xffffffff;
      }
      *(uint *)(param_2 + 0xa3c) = uVar25;
      uVar25 = *(uint *)(param_2 + 0xa40);
      uVar28 = *(undefined8 *)(param_2 + 0xa24);
      piVar23 = *(int **)(*plVar12 + 0xc0);
      if (uVar25 == 0xffffffff) {
        uVar25 = 0;
        if ((char)piVar23[0x119] != '\0') {
          if (*(char *)((long)piVar23 + 0x465) == '\0') {
            uVar25 = 1;
          }
          else if (*(char *)((long)piVar23 + 0x466) == '\0') {
            uVar25 = 2;
          }
          else if (*(char *)((long)piVar23 + 0x467) == '\0') {
            uVar25 = 3;
          }
          else if ((char)piVar23[0x11a] == '\0') {
            uVar25 = 4;
          }
          else if (*(char *)((long)piVar23 + 0x469) == '\0') {
            uVar25 = 5;
          }
          else if (*(char *)((long)piVar23 + 0x46a) == '\0') {
            uVar25 = 6;
          }
          else {
            if (*(char *)((long)piVar23 + 0x46b) != '\0') goto LAB_7102d086dc;
            uVar25 = 7;
          }
        }
LAB_7102d08758:
        *(undefined8 *)(piVar23 + (long)(int)uVar25 * 5 + 1) = *(undefined8 *)(param_2 + 0xa1c);
        *(undefined8 *)(piVar23 + (long)(int)uVar25 * 5 + 3) = uVar28;
        piVar23[(long)(int)uVar25 * 5 + 5] = -1;
        cVar3 = *(char *)((long)piVar23 + (long)(int)uVar25 + 0x464);
        if (cVar3 != 'A') {
          if (cVar3 == '\0') {
            *piVar23 = *piVar23 + 1;
          }
          *(undefined1 *)((long)piVar23 + (long)(int)uVar25 + 0x464) = 0x41;
        }
      }
      else {
        if (uVar25 < 8) goto LAB_7102d08758;
LAB_7102d086dc:
        uVar25 = 0xffffffff;
      }
      *(uint *)(param_2 + 0xa40) = uVar25;
      uVar25 = *(uint *)(param_2 + 0xa44);
      local_90 = *(long *)(param_2 + 0xa34);
      piVar23 = *(int **)(*plVar12 + 0xc0);
      local_98 = *(undefined8 *)(param_2 + 0xa2c);
      if (uVar25 == 0xffffffff) {
        uVar25 = 0;
        if ((char)piVar23[0x119] != '\0') {
          if (*(char *)((long)piVar23 + 0x465) == '\0') {
            uVar25 = 1;
          }
          else if (*(char *)((long)piVar23 + 0x466) == '\0') {
            uVar25 = 2;
          }
          else if (*(char *)((long)piVar23 + 0x467) == '\0') {
            uVar25 = 3;
          }
          else if ((char)piVar23[0x11a] == '\0') {
            uVar25 = 4;
          }
          else if (*(char *)((long)piVar23 + 0x469) == '\0') {
            uVar25 = 5;
          }
          else if (*(char *)((long)piVar23 + 0x46a) == '\0') {
            uVar25 = 6;
          }
          else {
            if (*(char *)((long)piVar23 + 0x46b) != '\0') goto LAB_7102d087d4;
            uVar25 = 7;
          }
        }
LAB_7102d08850:
        *(undefined8 *)(piVar23 + (long)(int)uVar25 * 5 + 1) = local_98;
        *(long *)(piVar23 + (long)(int)uVar25 * 5 + 3) = local_90;
        piVar23[(long)(int)uVar25 * 5 + 5] = -1;
        cVar3 = *(char *)((long)piVar23 + (long)(int)uVar25 + 0x464);
        if (cVar3 != '\t') {
          if (cVar3 == '\0') {
            *piVar23 = *piVar23 + 1;
          }
          *(undefined1 *)((long)piVar23 + (long)(int)uVar25 + 0x464) = 9;
        }
      }
      else {
        if (uVar25 < 8) goto LAB_7102d08850;
LAB_7102d087d4:
        uVar25 = 0xffffffff;
      }
      uVar40 = 3;
      *(uint *)(param_2 + 0xa44) = uVar25;
LAB_7102d08a54:
      *(undefined4 *)(param_2 + 0xb98) = uVar40;
    }
    break;
  case 3:
    fVar43 = *(float *)(param_2 + 0x77c);
    if ((*(char *)(param_2 + 0xb78) == '\0') &&
       (ABS(*(float *)(*(long *)(param_2 + 0x808) + 0x3c)) < ABS(*(float *)(param_2 + 0xbc0)))) {
      *(undefined1 *)(param_2 + 0xb78) = 1;
      *(undefined4 *)(param_2 + 0xba0) = *(undefined4 *)(*(long *)(param_2 + 0x808) + 0x40);
      FUN_7102d12a40(*(long *)(param_2 + 0xb70),-1);
      lVar17 = *(long *)(*(long *)(param_2 + 0x808) + 0x44);
      plVar12 = *(long **)(param_2 + 0xb70);
      plVar12[5] = (ulong)*(uint *)(*(long *)(param_2 + 0x808) + 0x4c);
      plVar12[4] = lVar17;
      puVar15 = (undefined8 *)(**(code **)(*plVar12 + 0x10))(plVar12,1);
    }
    if ((*(char *)(param_2 + 0xbf0) != '\0') &&
       (*(float *)(param_2 + 0x798) < *(float *)(param_2 + 0xbc0))) {
      plVar12 = *(long **)(*(long *)(param_2 + 0x300) + 0x18);
      plVar31 = (long *)plVar12[1];
      for (plVar12 = (long *)*plVar12; plVar12 != plVar31; plVar12 = plVar12 + 1) {
        if ((*(ulong *)(*plVar12 + 0xa0) & 0xffffffffff) == 0x7f8a17e92) {
          puVar32 = *(undefined8 **)(*plVar12 + 0x130);
          FUN_71025f55b0((undefined8 *)*puVar32,(undefined8 *)puVar32[1],"IPP0201");
          puVar15 = (undefined8 *)
                    FUN_71025f5420((undefined8 *)*puVar32,(undefined8 *)puVar32[1],"IPP0202");
          if (((DAT_71053144d8 & 1) == 0) &&
             (puVar15 = (undefined8 *)__cxa_guard_acquire(&DAT_71053144d8), (int)puVar15 != 0)) {
            FUN_7101764000();
            FUN_71000001c0();
            puVar15 = (undefined8 *)__cxa_guard_release(&DAT_71053144d8);
          }
          if (DAT_71052c51ba != '\0') {
            FUN_71025f55b0((undefined8 *)*puVar32,(undefined8 *)puVar32[1],"IPP0203");
            puVar15 = (undefined8 *)
                      FUN_71025f5420((undefined8 *)*puVar32,(undefined8 *)puVar32[1],"IPP0204");
          }
        }
      }
      *(undefined1 *)(param_2 + 0xbf0) = 0;
    }
    if (fVar43 < (float)*(undefined8 *)(param_2 + 0xbc0)) {
      *(undefined4 *)(param_2 + 0xb9c) = *(undefined4 *)(param_2 + 0xba0);
      uVar25 = *(uint *)(param_2 + 0xa3c);
      *(undefined8 *)(param_2 + 0xbc8) = *(undefined8 *)(param_2 + 0xbc8);
      *(ulong *)(param_2 + 0xbc0) =
           CONCAT44((int)((ulong)*(undefined8 *)(param_2 + 0xbc0) >> 0x20),fVar43);
      if (uVar25 != 0xffffffff) {
        if ((uVar25 < 0x38) &&
           (piVar23 = *(int **)(*DAT_71052b6fd8 + 0xc0),
           *(char *)((long)piVar23 + (long)(int)uVar25 + 0x464) != '\0')) {
          *(undefined1 *)((long)piVar23 + (long)(int)uVar25 + 0x464) = 0;
          *piVar23 = *piVar23 + -1;
        }
        *(undefined4 *)(param_2 + 0xa3c) = 0xffffffff;
      }
      uVar25 = *(uint *)(param_2 + 0xa40);
      if (uVar25 != 0xffffffff) {
        if ((uVar25 < 0x38) &&
           (piVar23 = *(int **)(*DAT_71052b6fd8 + 0xc0),
           *(char *)((long)piVar23 + (long)(int)uVar25 + 0x464) != '\0')) {
          *(undefined1 *)((long)piVar23 + (long)(int)uVar25 + 0x464) = 0;
          *piVar23 = *piVar23 + -1;
        }
        *(undefined4 *)(param_2 + 0xa40) = 0xffffffff;
      }
      uVar25 = *(uint *)(param_2 + 0xa44);
      if (uVar25 != 0xffffffff) {
        if ((uVar25 < 0x38) &&
           (piVar23 = *(int **)(*DAT_71052b6fd8 + 0xc0),
           *(char *)((long)piVar23 + (long)(int)uVar25 + 0x464) != '\0')) {
          *(undefined1 *)((long)piVar23 + (long)(int)uVar25 + 0x464) = 0;
          *piVar23 = *piVar23 + -1;
        }
        *(undefined4 *)(param_2 + 0xa44) = 0xffffffff;
      }
      uVar40 = 4;
      goto LAB_7102d08a54;
    }
    break;
  case 4:
    fVar43 = *(float *)(param_2 + 0xb9c) - local_b0;
    *(float *)(param_2 + 0xb9c) = fVar43;
    if (fVar43 < 0.0) {
      puVar15 = (undefined8 *)
                FUN_7102d093c0(param_2,auVar45._8_8_,param_4,(byte ****)param_5,(long ****)param_6,
                               param_7,param_8,param_9);
    }
    break;
  case 5:
    fVar43 = *(float *)(param_2 + 0xb9c) - local_b0;
    *(float *)(param_2 + 0xb9c) = fVar43;
    plVar31 = *(long **)(*(long *)(param_2 + 0x300) + 0x18);
    plVar12 = (long *)*plVar31;
    plVar31 = (long *)plVar31[1];
    if (plVar12 != plVar31) {
      do {
        if ((*(ulong *)(*plVar12 + 0xa0) & 0xffffffffff) == 0x733fdad37) {
          puVar15 = *(undefined8 **)(*plVar12 + 0x130);
          if (((DAT_71053144d8 & 1) == 0) &&
             (auVar45 = __cxa_guard_acquire(&DAT_71053144d8), auVar45._0_4_ != 0)) {
            FUN_7101764000();
            param_4 = (long ****)&PTR_LOOP_7104f17000;
            FUN_71000001c0();
            auVar45 = __cxa_guard_release(&DAT_71053144d8);
          }
          if (DAT_71052c51ba == '\0') {
            param_4 = (long ****)"IPP0302";
            auVar45 = FUN_71025f55b0((undefined8 *)*puVar15,(undefined8 *)puVar15[1],"IPP0302");
          }
        }
        plVar12 = plVar12 + 1;
      } while (plVar31 != plVar12);
      fVar43 = *(float *)(param_2 + 0xb9c);
    }
    puVar15 = auVar45._0_8_;
    if (fVar43 < 0.0) {
      puVar15 = (undefined8 *)
                FUN_7102d097a0(param_2,auVar45._8_8_,param_4,(byte ****)param_5,(long ****)param_6,
                               param_7,param_8,param_9);
    }
  }
  if ((0.0 < *(float *)(param_2 + 0xba0)) &&
     (fVar43 = *(float *)(param_2 + 0xba0) - local_b0, *(float *)(param_2 + 0xba0) = fVar43,
     fVar43 <= 0.0)) {
    *(undefined4 *)(param_2 + 0xba0) = 0;
    puVar15 = (undefined8 *)
              (**(code **)(**(long **)(param_2 + 0xb70) + 0x10))(*(long **)(param_2 + 0xb70),0);
  }
  if (*(int *)(param_2 + 0xb98) == 3) {
    fVar43 = *(float *)(param_2 + 0xbb0);
    uVar25 = *(uint *)(param_2 + 0xa3c);
    if (((uVar25 != 0xffffffff) && (uVar25 < 0x38)) &&
       (*(char *)(*(long *)(*DAT_71052b6fd8 + 0xc0) + (long)(int)uVar25 + 0x464) != '\0')) {
      lVar17 = *(long *)(*DAT_71052b6fd8 + 0xc0) + (long)(int)uVar25 * 0x14;
      *(float *)(lVar17 + 4) = *(float *)(lVar17 + 4) + fVar43;
      *(float *)(lVar17 + 8) = *(float *)(lVar17 + 8) + fVar43;
      *(float *)(lVar17 + 0xc) = *(float *)(lVar17 + 0xc) + 0.0;
      *(float *)(lVar17 + 0x10) = *(float *)(lVar17 + 0x10) + 0.0;
    }
    uVar25 = *(uint *)(param_2 + 0xa40);
    if (((uVar25 != 0xffffffff) && (uVar25 < 0x38)) &&
       (*(char *)(*(long *)(*DAT_71052b6fd8 + 0xc0) + (long)(int)uVar25 + 0x464) != '\0')) {
      lVar17 = *(long *)(*DAT_71052b6fd8 + 0xc0) + (long)(int)uVar25 * 0x14;
      *(float *)(lVar17 + 4) = *(float *)(lVar17 + 4) + fVar43;
      *(float *)(lVar17 + 8) = *(float *)(lVar17 + 8) + fVar43;
      *(float *)(lVar17 + 0xc) = *(float *)(lVar17 + 0xc) + 0.0;
      *(float *)(lVar17 + 0x10) = *(float *)(lVar17 + 0x10) + 0.0;
    }
    uVar25 = *(uint *)(param_2 + 0xa44);
    if (((uVar25 != 0xffffffff) && (uVar25 < 0x38)) &&
       (*(char *)(*(long *)(*DAT_71052b6fd8 + 0xc0) + (long)(int)uVar25 + 0x464) != '\0')) {
      lVar17 = *(long *)(*DAT_71052b6fd8 + 0xc0) + (long)(int)uVar25 * 0x14;
      *(float *)(lVar17 + 4) = *(float *)(lVar17 + 4) + fVar43;
      *(float *)(lVar17 + 8) = *(float *)(lVar17 + 8) + fVar43;
      *(float *)(lVar17 + 0xc) = *(float *)(lVar17 + 0xc) + 0.0;
      *(float *)(lVar17 + 0x10) = *(float *)(lVar17 + 0x10) + 0.0;
    }
    plVar31 = *(long **)(*(long *)(param_2 + 0x300) + 0x18);
    plVar12 = (long *)*plVar31;
    do {
      if (plVar12 == (long *)plVar31[1]) goto LAB_7102d08c7c;
      lVar17 = *plVar12;
      plVar12 = plVar12 + 1;
    } while ((*(ulong *)(lVar17 + 0xa0) & 0xffffffffff) != 0xb922d3930);
    if (((lVar17 != 0) && (plVar12 = *(long **)(lVar17 + 0x110), plVar12 != (long *)0x0)) &&
       (*(char *)(param_2 + 0x18) != '\0')) {
      fVar43 = *(float *)(param_2 + 0x850) * local_b0;
      fVar44 = local_b0 * 0.0;
      fVar42 = local_b0 * 0.0;
      local_b0 = local_b0 * 0.0;
      lVar20 = *(long *)(*(long *)(*plVar12 + 0x38) + 8);
      lVar17 = 0;
      *(ulong *)(lVar20 + 0xb8) = CONCAT44(local_b0,fVar42);
      *(ulong *)(lVar20 + 0xb0) = CONCAT44(fVar44,fVar43);
      do {
        lVar17 = lVar17 + 8;
      } while ((int)lVar17 != 0x40);
      lVar17 = *(long *)(*(long *)(*plVar12 + lVar17) + 8);
      *(ulong *)(lVar17 + 0xb8) = CONCAT44(local_b0,fVar42);
      *(ulong *)(lVar17 + 0xb0) = CONCAT44(fVar44,fVar43);
      lVar17 = 0;
      do {
        lVar17 = lVar17 + 8;
      } while ((int)lVar17 != 0x48);
      lVar17 = *(long *)(*(long *)(*plVar12 + lVar17) + 8);
      *(ulong *)(lVar17 + 0xb8) = CONCAT44(local_b0,fVar42);
      *(ulong *)(lVar17 + 0xb0) = CONCAT44(fVar44,fVar43);
    }
  }
LAB_7102d08c7c:
  plVar12 = lib::Singleton<app::FighterManager>::instance_;
  uVar25 = *(uint *)(param_2 + 0xbd0);
  if ((uVar25 == 0xffffffff) || (*(long *)(param_2 + 0xbe8) == 0)) goto LAB_7102d08ebc;
  if (7 < uVar25) goto LAB_7102d0936c;
  lVar17 = *(long *)(*lib::Singleton<app::FighterManager>::instance_ + (long)(int)uVar25 * 8 + 0x20)
  ;
  if (lVar17 == 0) {
LAB_7102d08dd8:
    lVar17 = *(long *)(param_2 + 0xbe8);
    if (lVar17 == 0) {
      *(undefined4 *)(param_2 + 0xbd0) = 0xffffffff;
      local_90 = 0;
      local_88 = 0;
      local_98 = 0;
    }
    else {
      if (*(char *)(lVar17 + 0x35) != '\0') {
        uVar25 = *(uint *)(lVar17 + 0x3c);
        lVar17 = *lib::Singleton<lib::EffectManager>::instance_;
        std::mutex::lock();
        if (((0 < (int)uVar25) && (lVar17 = lVar17 + (ulong)(uVar25 >> 0x18) * 0x300, lVar17 != 0))
           && (*(uint *)(lVar17 + 4) == uVar25)) {
          FUN_71035707d0(lVar17,0,(long ****)0x0,0,(long ****)param_6,param_7,param_8,param_9);
        }
        puVar15 = (undefined8 *)std::mutex::unlock();
      }
      *(undefined4 *)(param_2 + 0xbd0) = 0xffffffff;
      lVar17 = *(long *)(param_2 + 0xbe8);
      local_90 = 0;
      local_88 = 0;
      local_98 = 0;
      if (lVar17 != 0) {
        lVar20 = *(long *)(param_2 + 0xbd8);
        plVar12 = *(long **)(param_2 + 0xbe0);
        *plVar12 = lVar20;
        *(long **)(lVar20 + 8) = plVar12;
        *(long *)(lVar17 + 0x10) = *(long *)(lVar17 + 0x10) + -1;
        *(undefined8 *)(param_2 + 0xbd8) = 0;
        *(undefined8 *)(param_2 + 0xbe0) = 0;
        *(undefined8 *)(param_2 + 0xbe8) = 0;
      }
    }
  }
  else {
    pcVar1 = (char *)(lVar17 + 0x5920);
    if (*pcVar1 != '\x03') {
      if (*pcVar1 != '\x06') goto LAB_7102d08dd8;
      if ((ulong)*(byte *)(lVar17 + 0x5918) < *(ulong *)(lVar17 + 0x4150)) {
        lVar20 = lVar17 + (ulong)*(byte *)(lVar17 + 0x5918) * 8;
        plVar31 = *(long **)(lVar20 + 0x4160);
        if ((plVar31 == (long *)0x0) ||
           (uVar13 = (**(code **)(*plVar31 + 0x518))(), (uVar13 & 1) == 0)) goto LAB_7102d08d10;
        lVar20 = *(long *)(lVar20 + 0x4160);
      }
      else {
LAB_7102d08d10:
        lVar20 = 0;
      }
      puVar15 = (undefined8 *)FUN_71003a9ab0(&local_98,lVar20);
      if (((*(byte *)(local_90 + 0x3a) < 4) ||
          (puVar15 = (undefined8 *)
                     (**(code **)(**(long **)(*(long *)(local_90 + 0x20) + 0x40) + 0x168))(),
          (int)puVar15 == 5)) && (*pcVar1 != '\x03')) goto LAB_7102d08dd8;
    }
    if ((*(char *)(lVar17 + 0x5955) == '\0') || (*(int *)(lVar17 + 0x5ab4) == 0))
    goto LAB_7102d08dd8;
    lVar17 = *(long *)(param_2 + 0xbe8);
    if (*pcVar1 == '\x03') {
      if (lVar17 != 0) {
        *(ulong *)(lVar17 + 0xa8) = *(ulong *)(lVar17 + 0xa8) & 0xfffffffffffffffe;
        if (*(char *)(lVar17 + 0x35) == '\0') {
          uVar13 = *(ulong *)(lVar17 + 0x48) | 0x40;
LAB_7102d092a8:
          *(ulong *)(lVar17 + 0x48) = uVar13;
        }
        else {
          uVar25 = *(uint *)(lVar17 + 0x3c);
          if (0 < (int)uVar25) {
            lVar17 = *lib::Singleton<lib::EffectManager>::instance_ +
                     (ulong)(uVar25 >> 0x18) * 0x300;
            if ((lVar17 != 0) && (*(uint *)(lVar17 + 4) == uVar25)) {
              *(undefined1 *)
               (*lib::Singleton<lib::EffectManager>::instance_ + (ulong)(uVar25 >> 0x18) * 0x300 +
               0x2d4) = 0;
            }
          }
        }
      }
    }
    else {
      if (lVar17 != 0) {
        uVar13 = *(ulong *)(lVar17 + 0xa8) | 1;
        *(ulong *)(lVar17 + 0xa8) = uVar13;
        if (*(char *)(lVar17 + 0x35) == '\0') {
          *(ulong *)(lVar17 + 0x48) = *(ulong *)(lVar17 + 0x48) | 0x40;
        }
        else {
          uVar25 = *(uint *)(lVar17 + 0x3c);
          if (0 < (int)uVar25) {
            lVar17 = *lib::Singleton<lib::EffectManager>::instance_ +
                     (ulong)(uVar25 >> 0x18) * 0x300;
            if ((lVar17 != 0) && (*(uint *)(lVar17 + 4) == uVar25)) {
              *(bool *)(*lib::Singleton<lib::EffectManager>::instance_ +
                        (ulong)(uVar25 >> 0x18) * 0x300 + 0x2d4) = uVar13 == 0x1f;
            }
          }
        }
      }
      if (7 < *(uint *)(param_2 + 0xbd0)) {
LAB_7102d0936c:
                    /* WARNING: Subroutine does not return */
        abort();
      }
      lVar17 = *(long *)(*plVar12 + (long)(int)*(uint *)(param_2 + 0xbd0) * 8 + 0x20);
      if ((lVar17 == 0) || (*(char *)(lVar17 + 0x5920) != '\x06')) {
        uVar34 = (undefined4)_DAT_7107521008;
        uVar35 = (undefined4)((ulong)_DAT_7107521008 >> 0x20);
        uVar40 = (undefined4)_ConstantZero;
        uVar33 = (undefined4)((ulong)_ConstantZero >> 0x20);
        lVar17 = *(long *)(param_2 + 0xbe8);
      }
      else {
        if ((ulong)*(byte *)(lVar17 + 0x5918) < *(ulong *)(lVar17 + 0x4150)) {
          lVar17 = lVar17 + (ulong)*(byte *)(lVar17 + 0x5918) * 8;
          plVar12 = *(long **)(lVar17 + 0x4160);
          if ((plVar12 == (long *)0x0) ||
             (uVar13 = (**(code **)(*plVar12 + 0x518))(), (uVar13 & 1) == 0)) goto LAB_7102d091dc;
          lVar17 = *(long *)(lVar17 + 0x4160);
        }
        else {
LAB_7102d091dc:
          lVar17 = 0;
        }
        FUN_71003a9ab0(&local_98,lVar17);
        puVar15 = (undefined8 *)
                  (**(code **)(**(long **)(*(long *)(local_90 + 0x20) + 0x38) + 0x60))();
        uVar34 = (undefined4)puVar15[1];
        uVar35 = (undefined4)((ulong)puVar15[1] >> 0x20);
        uVar40 = (undefined4)*puVar15;
        uVar33 = (undefined4)((ulong)*puVar15 >> 0x20);
        lVar17 = *(long *)(param_2 + 0xbe8);
      }
      if (lVar17 != 0) {
        auVar7._4_4_ = uVar33;
        auVar7._0_4_ = uVar40;
        auVar7._8_4_ = uVar34;
        auVar7._12_4_ = uVar35;
        auVar8._4_4_ = uVar33;
        auVar8._0_4_ = uVar40;
        auVar8._8_4_ = uVar34;
        auVar8._12_4_ = uVar35;
        auVar45 = NEON_ext(auVar7,auVar8,8,1);
        *(ulong *)(lVar17 + 0x58) = (ulong)auVar45._0_4_;
        *(ulong *)(lVar17 + 0x50) = CONCAT44(uVar33,uVar40);
        if (*(char *)(lVar17 + 0x35) == '\0') {
          uVar13 = *(ulong *)(lVar17 + 0x48) | 1;
          goto LAB_7102d092a8;
        }
        uVar25 = *(uint *)(lVar17 + 0x3c);
        if (0 < (int)uVar25) {
          lVar20 = *lib::Singleton<lib::EffectManager>::instance_;
          uVar13 = (ulong)(uVar25 >> 0x18);
          lVar30 = lVar20 + uVar13 * 0x300;
          if ((lVar30 != 0) && (*(uint *)(lVar30 + 4) == uVar25)) {
            if (*(char *)(lVar20 + uVar13 * 0x300 + 0x2d6) == '\0') {
              lVar17 = lVar20 + uVar13 * 0x300;
              *(undefined1 *)(lVar17 + 0x2da) = 1;
              *(ulong *)(lVar17 + 0x128) = (ulong)auVar45._0_4_;
              *(ulong *)(lVar17 + 0x120) = CONCAT44(uVar33,uVar40);
            }
            else {
              lVar30 = lVar20 + uVar13 * 0x300;
              uVar28 = *(undefined8 *)(lVar30 + 0xf8);
              *(undefined8 *)(lVar30 + 0xf8) = uVar28;
              *(ulong *)(lVar30 + 0xf0) =
                   CONCAT44((int)((ulong)*(undefined8 *)(lVar30 + 0xf0) >> 0x20),uVar40);
              uVar33 = *(undefined4 *)(lVar17 + 0x54);
              *(undefined8 *)(lVar30 + 0xf8) = uVar28;
              *(ulong *)(lVar30 + 0xf0) = CONCAT44(uVar33,uVar40);
              *(ulong *)(lVar30 + 0xf8) =
                   CONCAT44((int)((ulong)uVar28 >> 0x20),*(undefined4 *)(lVar17 + 0x58));
              *(ulong *)(lVar30 + 0xf0) = CONCAT44(uVar33,uVar40);
            }
            if (*(long *)(lVar20 + uVar13 * 0x300 + 0x58) == 0) {
              lVar20 = lVar20 + uVar13 * 0x300;
              *(undefined8 *)(lVar20 + 0x130) = 0;
              *(undefined8 *)(lVar20 + 0x138) = 0;
            }
          }
        }
      }
    }
  }
LAB_7102d08ebc:
  if (*(int *)(param_2 + 0xb98) == 1) {
    lVar17 = *(long *)(param_2 + 0x9d8);
    uVar13 = (*(long *)(param_2 + 0x9e0) - lVar17 >> 2) * -0x3333333333333333;
    if ((uint)uVar13 != 0) {
      uVar25 = 0;
      puVar15 = (undefined8 *)(param_2 + 0x9d8);
      do {
        uVar27 = (ulong)uVar25;
        if (uVar13 < uVar27 || uVar13 - uVar27 == 0) goto LAB_7102d09368;
        pfVar29 = (float *)(lVar17 + uVar27 * 0x14);
        fVar43 = pfVar29[1];
        fVar44 = *(float *)(param_2 + 0xbc0);
        bVar11 = false;
        if ((*pfVar29 <= fVar44) && (bVar11 = false, !NAN(fVar44) && !NAN(fVar43))) {
          bVar11 = fVar44 < fVar43;
        }
        if (bVar11) goto LAB_7102d0902c;
        uVar25 = uVar25 + 1;
      } while (uVar25 < (uint)uVar13);
    }
  }
  else if (*(int *)(param_2 + 0xb98) == 3) {
    lVar17 = *(long *)(param_2 + 0x9f0);
    uVar13 = (*(long *)(param_2 + 0x9f8) - lVar17 >> 2) * -0x3333333333333333;
    if ((uint)uVar13 != 0) {
      uVar25 = 0;
      puVar15 = (undefined8 *)(param_2 + 0x9f0);
      do {
        uVar27 = (ulong)uVar25;
        if (uVar13 < uVar27 || uVar13 - uVar27 == 0) {
LAB_7102d09368:
                    /* WARNING: Subroutine does not return */
          std::__vector_base_common<true>::__throw_out_of_range();
        }
        pfVar29 = (float *)(lVar17 + uVar27 * 0x14);
        fVar43 = pfVar29[1];
        fVar44 = *(float *)(param_2 + 0xbc0);
        bVar11 = false;
        if ((*pfVar29 <= fVar44) && (bVar11 = false, !NAN(fVar44) && !NAN(fVar43))) {
          bVar11 = fVar44 < fVar43;
        }
        if (bVar11) goto LAB_7102d0902c;
        uVar25 = uVar25 + 1;
      } while (uVar25 < (uint)uVar13);
    }
  }
  fVar43 = (float)*(undefined8 *)(param_2 + 0xc08);
  uVar28 = *(undefined8 *)(param_2 + 0xc00);
  auVar36._0_8_ =
       CONCAT44(-(uint)(*(float *)(param_2 + 0xc24) == (float)((ulong)uVar28 >> 0x20)),
                -(uint)(*(float *)(param_2 + 0xc20) == (float)uVar28));
  auVar36._8_4_ = -(uint)(*(float *)(param_2 + 0xc28) == fVar43);
  auVar36._12_4_ =
       -(uint)(*(float *)(param_2 + 0xc2c) ==
              (float)((ulong)*(undefined8 *)(param_2 + 0xc08) >> 0x20));
  auVar45 = NEON_ext(auVar36,auVar36,8,1);
  uVar13 = auVar36._0_8_ & auVar45._0_8_;
  if (((uint)uVar13 & (uint)(uVar13 >> 0x20)) == 0) {
    lVar17 = *(long *)(*(long *)(param_2 + 0x300) + 0x60);
    *(float *)(lVar17 + 0x58) = fVar43;
    *(undefined4 *)(lVar17 + 0x5c) = 0;
    *(undefined8 *)(lVar17 + 0x50) = uVar28;
    *(int *)(param_2 + 0xc28) = (int)*(undefined8 *)(param_2 + 0xc08);
    *(undefined4 *)(param_2 + 0xc2c) = 0;
    *(undefined8 *)(param_2 + 0xc20) = *(undefined8 *)(param_2 + 0xc00);
  }
  fVar43 = (float)*(undefined8 *)(param_2 + 0xc18);
  uVar28 = *(undefined8 *)(param_2 + 0xc10);
  auVar37._0_8_ =
       CONCAT44(-(uint)(*(float *)(param_2 + 0xc34) == (float)((ulong)uVar28 >> 0x20)),
                -(uint)(*(float *)(param_2 + 0xc30) == (float)uVar28));
  auVar37._8_4_ = -(uint)(*(float *)(param_2 + 0xc38) == fVar43);
  auVar37._12_4_ =
       -(uint)(*(float *)(param_2 + 0xc3c) ==
              (float)((ulong)*(undefined8 *)(param_2 + 0xc18) >> 0x20));
  auVar45 = NEON_ext(auVar37,auVar37,8,1);
  uVar13 = auVar37._0_8_ & auVar45._0_8_;
  if (((uint)uVar13 & (uint)(uVar13 >> 0x20)) != 0) {
    return puVar15;
  }
  lVar17 = *(long *)(*(long *)(param_2 + 0x300) + 0x60);
  *(float *)(lVar17 + 0x68) = fVar43;
  *(undefined4 *)(lVar17 + 0x6c) = 0;
  *(undefined8 *)(lVar17 + 0x60) = uVar28;
  fVar42 = (float)*(undefined8 *)(param_2 + 0xc18);
  fVar43 = (float)*(undefined8 *)(param_2 + 0xc10);
  fVar44 = (float)((ulong)*(undefined8 *)(param_2 + 0xc10) >> 0x20);
LAB_7102d090ac:
  *(ulong *)(param_2 + 0xc38) = (ulong)(uint)fVar42;
  *(ulong *)(param_2 + 0xc30) = CONCAT44(fVar44,fVar43);
  return puVar15;
LAB_7102d0902c:
  lVar17 = lVar17 + uVar27 * 0x14;
  pfVar29 = (float *)(lVar17 + 8);
  fVar43 = *pfVar29;
  fVar44 = *(float *)(lVar17 + 0xc);
  uVar10 = *(undefined8 *)pfVar29;
  uVar9 = *(undefined8 *)pfVar29;
  uVar28 = *(undefined8 *)pfVar29;
  fVar42 = *(float *)(lVar17 + 0x10);
  auVar38._0_8_ =
       CONCAT44(-(uint)(*(float *)(param_2 + 0xc24) == fVar44),
                -(uint)(*(float *)(param_2 + 0xc20) == fVar43));
  auVar38._8_4_ = -(uint)(*(float *)(param_2 + 0xc28) == fVar42);
  auVar38._12_4_ = -(uint)(*(float *)(param_2 + 0xc2c) == 0.0);
  auVar45 = NEON_ext(auVar38,auVar38,8,1);
  uVar13 = auVar38._0_8_ & auVar45._0_8_;
  if (((uint)uVar13 & (uint)(uVar13 >> 0x20)) == 0) {
    lVar17 = *(long *)(*(long *)(param_2 + 0x300) + 0x60);
    *(ulong *)(lVar17 + 0x58) = (ulong)(uint)fVar42;
    *(undefined8 *)(lVar17 + 0x50) = uVar28;
    *(ulong *)(param_2 + 0xc28) = (ulong)(uint)fVar42;
    *(undefined8 *)(param_2 + 0xc20) = uVar9;
  }
  auVar39._0_8_ =
       CONCAT44(-(uint)(*(float *)(param_2 + 0xc34) == fVar44),
                -(uint)(*(float *)(param_2 + 0xc30) == fVar43));
  auVar39._8_4_ = -(uint)(*(float *)(param_2 + 0xc38) == fVar42);
  auVar39._12_4_ = -(uint)(*(float *)(param_2 + 0xc3c) == 0.0);
  auVar45 = NEON_ext(auVar39,auVar39,8,1);
  uVar13 = auVar39._0_8_ & auVar45._0_8_;
  if (((uint)uVar13 & (uint)(uVar13 >> 0x20)) != 0) {
    return puVar15;
  }
  lVar17 = *(long *)(*(long *)(param_2 + 0x300) + 0x60);
  *(ulong *)(lVar17 + 0x68) = (ulong)(uint)fVar42;
  *(undefined8 *)(lVar17 + 0x60) = uVar10;
  goto LAB_7102d090ac;
}

