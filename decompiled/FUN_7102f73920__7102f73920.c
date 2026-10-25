// addr:      7102f73920
// offset:    0x2f73920
// name:      FUN_7102f73920
// mangled:   
// signature: undefined __cdecl FUN_7102f73920(undefined8 param_1, long param_2, undefined8 param_3, long * * * * param_4, byte * * * * param_5, long * * * * param_6, undefined8 param_7, undefined8 param_8, undefined8 param_9)


void FUN_7102f73920(undefined8 param_1,long param_2,undefined8 param_3,long ****param_4,
                   byte ****param_5,long ****param_6,undefined8 param_7,undefined8 param_8,
                   undefined8 param_9)

{
  uint *puVar1;
  undefined4 uVar2;
  ulong *puVar3;
  ulong *puVar4;
  undefined8 *puVar5;
  int iVar6;
  uint uVar7;
  undefined4 uVar8;
  char cVar9;
  byte bVar10;
  int iVar11;
  ulong uVar12;
  long ***ppplVar13;
  bool bVar14;
  bool bVar15;
  bool bVar16;
  uint uVar17;
  long *plVar18;
  long *plVar19;
  ulong uVar20;
  long *plVar21;
  ulong uVar22;
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
  undefined8 uVar23;
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
  long ****pppplVar24;
  undefined4 uVar25;
  code *pcVar26;
  long lVar27;
  undefined **ppuVar28;
  uint uVar29;
  ulong uVar30;
  uint *puVar31;
  long *plVar32;
  undefined8 *puVar33;
  char *pcVar34;
  uint uVar35;
  long lVar36;
  long **pplVar37;
  undefined1 *puVar38;
  char *pcVar39;
  long lVar40;
  int iVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  undefined1 auVar47 [16];
  undefined8 local_e0;
  long lStack_d8;
  ulong local_d0;
  long *local_c0;
  long ***local_b0;
  undefined8 *local_a8;
  long ****local_90;
  
  puVar38 = *(undefined1 **)(param_2 + 0x38);
  fVar42 = *(float *)(puVar38 + 0x14);
  fVar46 = (float)param_1;
  *(float *)(puVar38 + 0x18) = fVar42;
  local_b0 = (long ***)((ulong)local_b0 & 0xffffffff00000000);
  local_e0 = (long ***)CONCAT44(local_e0._4_4_,fVar42 - fVar46);
  pppplVar24 = (long ****)&local_e0;
  if (fVar42 - fVar46 <= 0.0) {
    pppplVar24 = &local_b0;
  }
  fVar43 = *(float *)pppplVar24;
  bVar14 = false;
  bVar15 = true;
  bVar16 = false;
  if (fVar43 == 0.0) {
    bVar14 = false;
    bVar15 = false;
    bVar16 = true;
    if (!NAN(fVar42) && !NAN(fVar43)) {
      bVar14 = fVar42 < fVar43;
      bVar15 = fVar42 == fVar43;
      bVar16 = false;
    }
  }
  *(float *)(puVar38 + 0x14) = fVar43;
  if ((!bVar15 && bVar14 == bVar16) && (*(long **)(puVar38 + 0x40) != (long *)0x0)) {
    (**(code **)(**(long **)(puVar38 + 0x40) + 0x30))();
    plVar18 = *(long **)(puVar38 + 0x40);
    *(undefined8 *)(puVar38 + 0x40) = 0;
    if ((long *)(puVar38 + 0x20) == plVar18) {
      pcVar26 = *(code **)(*plVar18 + 0x20);
    }
    else {
      param_3 = extraout_x1;
      if (plVar18 == (long *)0x0) goto LAB_7102f739d4;
      pcVar26 = *(code **)(*plVar18 + 0x28);
    }
    (*pcVar26)();
    param_3 = extraout_x1_00;
  }
LAB_7102f739d4:
  pcVar39 = *(char **)(puVar38 + 0x50);
  if (pcVar39 != (char *)0x0) {
    lVar40 = *(long *)(pcVar39 + 8);
    *(undefined8 *)(lVar40 + 0x110) = 0;
    *(undefined8 *)(lVar40 + 0x1b8) = 0;
    plVar18 = lib::Singleton<app::FighterManager>::instance_;
    lVar27 = *lib::Singleton<app::FighterManager>::instance_;
    iVar6 = *(int *)(lVar27 + 0xa0);
    puVar1 = (uint *)(lVar40 + 0x10);
    if (0 < iVar6) {
      iVar41 = 0;
      do {
        iVar11 = iVar41;
        if (*(long *)(lVar27 + 0x20) == 0) {
LAB_7102f73a34:
          if (*(long *)(lVar27 + 0x28) != 0) {
            if (iVar11 == 0) {
              uVar35 = 1;
              goto LAB_7102f73aec;
            }
            iVar11 = iVar11 + -1;
          }
          if (*(long *)(lVar27 + 0x30) != 0) {
            if (iVar11 == 0) {
              uVar35 = 2;
              goto LAB_7102f73aec;
            }
            iVar11 = iVar11 + -1;
          }
          if (*(long *)(lVar27 + 0x38) != 0) {
            if (iVar11 == 0) {
              uVar35 = 3;
              goto LAB_7102f73aec;
            }
            iVar11 = iVar11 + -1;
          }
          if (*(long *)(lVar27 + 0x40) != 0) {
            if (iVar11 == 0) {
              uVar35 = 4;
              goto LAB_7102f73aec;
            }
            iVar11 = iVar11 + -1;
          }
          if (*(long *)(lVar27 + 0x48) != 0) {
            if (iVar11 == 0) {
              uVar35 = 5;
              goto LAB_7102f73aec;
            }
            iVar11 = iVar11 + -1;
          }
          if (*(long *)(lVar27 + 0x50) != 0) {
            if (iVar11 == 0) {
              uVar35 = 6;
              goto LAB_7102f73aec;
            }
            iVar11 = iVar11 + -1;
          }
          uVar35 = 7;
          if (*(long *)(lVar27 + 0x58) == 0 || iVar11 != 0) {
            uVar35 = 0xffffffff;
          }
          if ((iVar11 != 0) || (*(long *)(lVar27 + 0x58) == 0)) goto LAB_7102f74774;
        }
        else {
          if (iVar41 != 0) {
            iVar11 = iVar41 + -1;
            goto LAB_7102f73a34;
          }
          uVar35 = 0;
        }
LAB_7102f73aec:
        lVar27 = *(long *)(lVar27 + ((long)((ulong)uVar35 << 0x20) >> 0x1d) + 0x20);
        if (lVar27 != 0) {
          if ((ulong)*(byte *)(lVar27 + 0x5918) < *(ulong *)(lVar27 + 0x4150)) {
            lVar27 = lVar27 + (ulong)*(byte *)(lVar27 + 0x5918) * 8;
            plVar19 = *(long **)(lVar27 + 0x4160);
            if ((plVar19 == (long *)0x0) ||
               (uVar20 = (**(code **)(*plVar19 + 0x518))(), (uVar20 & 1) == 0)) goto LAB_7102f73b40;
            lVar27 = *(long *)(lVar27 + 0x4160);
          }
          else {
LAB_7102f73b40:
            lVar27 = 0;
          }
          FUN_71003a9ab0(&local_b0,lVar27);
          puVar33 = local_a8;
          if (((local_a8 == (undefined8 *)0x0) ||
              (uVar20 = (**(code **)*local_a8)(local_a8), (uVar20 & 1) != 0)) ||
             (*(byte *)((long)puVar33 + 0x3a) < 4)) {
LAB_7102f73b8c:
            bVar14 = false;
            uVar17 = 0xffffffff;
          }
          else {
            puVar33 = (undefined8 *)puVar33[4];
            uVar20 = (**(code **)*puVar33)(puVar33);
            if ((uVar20 & 1) != 0) goto LAB_7102f73b8c;
            uVar17 = (**(code **)(*(long *)puVar33[8] + 0x110))();
            bVar14 = uVar17 == 0x1d6;
          }
          if (7 < uVar35) goto LAB_7102f74774;
          lVar36 = *(long *)(*plVar18 + (long)(int)uVar35 * 8 + 0x20);
          lVar27 = *(long *)(lVar36 + 0xf8);
          uVar7 = *(uint *)(lVar27 + 0xd8);
          fVar43 = *(float *)(lVar27 + 0x38);
          fVar44 = *(float *)(lVar27 + 0x3c);
          uVar35 = *(uint *)(lVar27 + 0x28);
          uVar29 = *(uint *)(lVar27 + 0x2c);
          fVar42 = (float)(**(code **)(*(long *)(lVar36 + 0xf0) + 0x20))((long *)(lVar36 + 0xf0));
          fVar42 = (fVar43 + fVar44) - fVar42;
          fVar43 = *(float *)(*(long *)(lVar36 + 0xf8) + 0x38) +
                   *(float *)(*(long *)(lVar36 + 0xf8) + 0x3c);
          if (fVar42 <= 0.0) {
            fVar42 = 0.0;
          }
          fVar44 = fVar43;
          if (!bVar14) {
            fVar44 = fVar42;
          }
          fVar45 = 0.0;
          if (0.0 < fVar43) {
            fVar45 = fVar44 / fVar43;
          }
          param_3 = extraout_x1_01;
          if (0 < (int)uVar7) {
            if (7 < *(ulong *)(lVar40 + 0x110)) goto LAB_7102f74774;
            puVar31 = puVar1 + *(ulong *)(lVar40 + 0x110) * 8;
            *puVar31 = uVar29;
            puVar31[1] = uVar35;
            puVar31[2] = uVar17;
            puVar31[3] = uVar7;
            puVar31[4] = (uint)fVar44;
            puVar31[5] = (uint)fVar42;
            puVar31[6] = (uint)fVar43;
            puVar31[7] = (uint)fVar45;
            *(long *)(lVar40 + 0x110) = *(long *)(lVar40 + 0x110) + 1;
          }
        }
        iVar41 = iVar41 + 1;
        if (iVar6 <= iVar41) break;
        lVar27 = *plVar18;
      } while( true );
    }
    uVar35 = 0;
    do {
      if (*(long *)(lVar40 + 0x110) != 0) {
        uVar12 = *(long *)(lVar40 + 0x110) * 0x20 - 0x20;
        uVar20 = (uVar12 >> 5) + 1;
        uVar29 = 0;
        uVar30 = uVar20 & 1;
        uVar17 = 0;
        puVar31 = puVar1;
        fVar42 = 3.4028235e+38;
        fVar43 = 3.4028235e+38;
        if (uVar12 == 0) {
LAB_7102f73d68:
          if ((uVar35 == *puVar31) && (0 < (int)puVar31[3])) {
            fVar44 = (float)puVar31[4];
            if (fVar43 <= (float)puVar31[4]) {
              fVar44 = fVar43;
            }
            fVar43 = fVar44;
            fVar44 = (float)puVar31[7];
            if (fVar42 <= (float)puVar31[7]) {
              fVar44 = fVar42;
            }
            fVar42 = fVar44;
            uVar17 = uVar17 + 1;
            uVar29 = puVar31[3] + uVar29;
          }
        }
        else {
          lVar27 = uVar30 - uVar20;
          fVar42 = 3.4028235e+38;
          fVar43 = 3.4028235e+38;
          do {
            if ((uVar35 == *puVar31) && (0 < (int)puVar31[3])) {
              fVar44 = (float)puVar31[4];
              if (fVar43 <= (float)puVar31[4]) {
                fVar44 = fVar43;
              }
              fVar43 = fVar44;
              fVar44 = (float)puVar31[7];
              if (fVar42 <= (float)puVar31[7]) {
                fVar44 = fVar42;
              }
              fVar42 = fVar44;
              uVar17 = uVar17 + 1;
              uVar29 = puVar31[3] + uVar29;
            }
            if ((uVar35 == puVar31[8]) && (0 < (int)puVar31[0xb])) {
              fVar44 = (float)puVar31[0xc];
              if (fVar43 <= (float)puVar31[0xc]) {
                fVar44 = fVar43;
              }
              fVar45 = (float)puVar31[0xf];
              if (fVar42 <= (float)puVar31[0xf]) {
                fVar45 = fVar42;
              }
              uVar17 = uVar17 + 1;
              uVar29 = puVar31[0xb] + uVar29;
              fVar43 = fVar44;
              fVar42 = fVar45;
            }
            puVar31 = puVar31 + 0x10;
            lVar27 = lVar27 + 2;
          } while (lVar27 != 0);
          if (uVar30 != 0) goto LAB_7102f73d68;
        }
        if (0 < (int)uVar17) {
          if (7 < *(ulong *)(lVar40 + 0x1b8)) {
LAB_7102f74774:
                    /* WARNING: Subroutine does not return */
            abort();
          }
          puVar31 = (uint *)(lVar40 + 0x118 + *(ulong *)(lVar40 + 0x1b8) * 0x14);
          *puVar31 = uVar35;
          puVar31[1] = uVar17;
          puVar31[2] = uVar29;
          puVar31[3] = (uint)fVar43;
          puVar31[4] = (uint)fVar42;
          *(long *)(lVar40 + 0x1b8) = *(long *)(lVar40 + 0x1b8) + 1;
        }
      }
      uVar35 = uVar35 + 1;
    } while (uVar35 < 8);
    if ((*pcVar39 == '\0') && (lVar27 = *(long *)(pcVar39 + 0x40) << 3, lVar27 != 0)) {
      pcVar34 = pcVar39 + 0x10;
      do {
        auVar47 = (**(code **)(**(long **)pcVar34 + 0x10))
                            (*(long **)pcVar34,*(undefined8 *)(pcVar39 + 8));
        param_3 = auVar47._8_8_;
        if ((auVar47._0_8_ & 1) != 0) {
          *pcVar39 = '\x01';
        }
        pcVar34 = pcVar34 + 8;
        lVar27 = lVar27 + -8;
      } while (lVar27 != 0);
    }
    *puVar38 = **(undefined1 **)(puVar38 + 0x50);
  }
  if (*(int *)(param_2 + 0x2c) - 1U < 2) {
    if ((*(float *)(param_2 + 0x94) == 0.0) &&
       (*(float *)(param_2 + 0x94) < *(float *)(param_2 + 0x98))) {
      param_4 = (long ****)0x1;
      FUN_7102f6eb30(*(long *)(param_2 + 0x10),*(long *)(param_2 + 8),1);
      puVar4 = *(ulong **)(*(long *)(param_2 + 0x20) + 200);
      uVar23 = extraout_x1_02;
      for (puVar3 = *(ulong **)(*(long *)(param_2 + 0x20) + 0xc0); puVar3 != puVar4;
          puVar3 = puVar3 + 5) {
        if (((*(char *)((long)puVar3 + 9) != '\0') || (*(char *)((long)puVar3 + 0xc) != '\0')) &&
           ((*puVar3 & 0xffffffffff) != 0)) {
          lVar27 = *(long *)(*(long *)(param_2 + 8) + 0x310);
          for (plVar18 = *(long **)(lVar27 + 0xd0); plVar18 != *(long **)(lVar27 + 0xd8);
              plVar18 = plVar18 + 2) {
            if ((*(uint *)(plVar18 + 1) < 2) &&
               (lVar40 = *plVar18, (*puVar3 & 0xffffffffff) == *(ulong *)(lVar40 + 0x68))) {
              if (lVar40 != 0) {
                *(undefined1 *)(lVar40 + 0x110) = 0;
                FUN_71025e9d50((long *)(lVar40 + 0x108),uVar23,param_4,param_5,param_6,param_7,
                               param_8,param_9);
                uVar23 = extraout_x1_03;
              }
              break;
            }
          }
        }
      }
      FUN_7102f775b0(*(long *)(param_2 + 0x50),uVar23,param_4,param_5,param_6,param_7,param_8,
                     param_9);
      lVar27 = *(long *)(param_2 + 0x40);
      plVar18 = *(long **)(lVar27 + 8);
      plVar19 = *(long **)(lVar27 + 0x10);
      *(undefined1 *)(lVar27 + 1) = 0;
      param_3 = extraout_x1_04;
      for (; plVar18 != plVar19; plVar18 = plVar18 + 1) {
        (**(code **)(**(long **)(*plVar18 + 8) + 0x20))();
        param_3 = extraout_x1_05;
      }
      uVar25 = 2;
      goto LAB_7102f744d0;
    }
  }
  else {
    if (((*(int *)(param_2 + 0x2c) != 0) || (*(float *)(*(char **)(param_2 + 0x38) + 0x14) != 0.0))
       || (**(char **)(param_2 + 0x38) == '\0')) goto LAB_7102f744d4;
    pppplVar24 = (long ****)0x1;
    FUN_7102f6e9d0(*(long *)(param_2 + 0x10),*(long *)(param_2 + 8),1);
    plVar19 = (long *)(param_2 + 0x58);
    plVar32 = (long *)*plVar19;
    plVar18 = *(long **)(param_2 + 0x60);
    while (plVar18 != plVar32) {
      plVar18 = plVar18 + -1;
      plVar21 = (long *)*plVar18;
      *plVar18 = 0;
      if (plVar21 != (long *)0x0) {
        (**(code **)(*plVar21 + 8))();
      }
    }
    *(long **)(param_2 + 0x60) = plVar32;
    puVar4 = *(ulong **)(*(long *)(param_2 + 0x20) + 200);
    for (puVar3 = *(ulong **)(*(long *)(param_2 + 0x20) + 0xc0); puVar3 != puVar4;
        puVar3 = puVar3 + 5) {
      if ((long *)(*puVar3 & 0xffffffffff) != (long *)0x0) {
        lVar27 = *(long *)(*(long *)(param_2 + 8) + 0x310);
        for (plVar18 = *(long **)(lVar27 + 0xd0); plVar18 != *(long **)(lVar27 + 0xd8);
            plVar18 = plVar18 + 2) {
          if ((*(uint *)(plVar18 + 1) < 2) &&
             (pplVar37 = (long **)*plVar18, (long *)(*puVar3 & 0xffffffffff) == pplVar37[0xd])) {
            if (pplVar37 != (long **)0x0) {
              uVar20 = puVar3[2];
              uVar25 = *(undefined4 *)((long)puVar3 + 0x14);
              bVar10 = *(byte *)((long)puVar3 + 0xc);
              uVar12 = puVar3[3];
              uVar2 = *(undefined4 *)((long)puVar3 + 0x1c);
              uVar30 = puVar3[4];
              uVar8 = *(undefined4 *)(*(long *)(param_2 + 0x20) + 0xac);
              local_b0 = (long ***)
                         FUN_710392e290(0x10,0x38,pppplVar24,param_5,param_6,param_7,param_8,param_9
                                       );
              if (local_b0 == (long ***)0x0) {
                if (DAT_7105332f00 != (long *)0x0) {
                  local_e0 = (long ***)((ulong)local_e0 & 0xffffffff00000000);
                  local_b0 = (long ***)&DAT_00000038;
                  pppplVar24 = &local_b0;
                  uVar22 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_e0);
                  if (((uVar22 & 1) != 0) &&
                     (local_b0 = (long ***)
                                 FUN_710392e290(0x10,0x38,pppplVar24,param_5,param_6,param_7,param_8
                                                ,param_9), local_b0 != (long ***)0x0))
                  goto LAB_7102f74018;
                }
                local_b0 = (long ***)0x0;
              }
LAB_7102f74018:
              *(uint *)(local_b0 + 2) = (uint)bVar10;
              *(int *)((long)local_b0 + 0x14) = (int)uVar20;
              *local_b0 = (long **)&PTR_FUN_7105158668;
              local_b0[1] = pplVar37;
              *(undefined4 *)(local_b0 + 3) = uVar25;
              *(undefined4 *)((long)local_b0 + 0x1c) = uVar8;
              *(int *)(local_b0 + 4) = (int)uVar12;
              *(undefined4 *)((long)local_b0 + 0x24) = uVar2;
              *(int *)(local_b0 + 5) = (int)uVar30;
              *(undefined4 *)(local_b0 + 6) = 0;
              if (*(undefined8 **)(param_2 + 0x60) < *(undefined8 **)(param_2 + 0x68)) {
                **(undefined8 **)(param_2 + 0x60) = local_b0;
                *(long *)(param_2 + 0x60) = *(long *)(param_2 + 0x60) + 8;
                local_b0 = (long ***)0x0;
                cVar9 = *(char *)((long)puVar3 + 0xb);
              }
              else {
                FUN_7102f74b00(plVar19,(long *)&local_b0,pppplVar24,param_5,param_6,param_7,param_8,
                               param_9);
                ppplVar13 = local_b0;
                local_b0 = (long ***)0x0;
                if (ppplVar13 != (long ***)0x0) {
                  (*(code *)(*ppplVar13)[1])();
                }
                cVar9 = *(char *)((long)puVar3 + 0xb);
              }
              if ((cVar9 != '\0') && (*(char *)(pplVar37 + 0x1c) != '\0')) {
                (**(code **)(*pplVar37[0x12] + 0x140))(pplVar37[0x12],3);
              }
            }
            break;
          }
        }
      }
    }
    lVar27 = *(long *)(*(long *)(param_2 + 8) + 0x310);
    for (plVar18 = *(long **)(lVar27 + 0xd0); plVar18 != *(long **)(lVar27 + 0xd8);
        plVar18 = plVar18 + 2) {
      if ((*(uint *)(plVar18 + 1) < 2) &&
         (pplVar37 = (long **)*plVar18, pplVar37[0xd] == (long *)0xd9ee07b24)) {
        if (pplVar37 != (long **)0x0) {
          uVar25 = *(undefined4 *)(*(long *)(param_2 + 0x20) + 0xb8);
          uVar2 = *(undefined4 *)(*(long *)(param_2 + 0x20) + 0xbc);
          local_b0 = (long ***)
                     FUN_710392e290(0x10,0x20,pppplVar24,param_5,param_6,param_7,param_8,param_9);
          if (local_b0 == (long ***)0x0) {
            if (DAT_7105332f00 != (long *)0x0) {
              local_e0 = (long ***)((ulong)local_e0 & 0xffffffff00000000);
              local_b0 = (long ***)&SUB_00000020;
              pppplVar24 = &local_b0;
              uVar20 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_e0);
              if (((uVar20 & 1) != 0) &&
                 (local_b0 = (long ***)
                             FUN_710392e290(0x10,0x20,pppplVar24,param_5,param_6,param_7,param_8,
                                            param_9), local_b0 != (long ***)0x0))
              goto LAB_7102f742b8;
            }
            local_b0 = (long ***)0x0;
          }
LAB_7102f742b8:
          *(undefined4 *)(local_b0 + 2) = uVar25;
          *(undefined4 *)((long)local_b0 + 0x14) = uVar2;
          *local_b0 = (long **)&PTR_FUN_7105158698;
          local_b0[1] = pplVar37;
          *(undefined4 *)(local_b0 + 3) = 0;
          if (*(undefined8 **)(param_2 + 0x60) < *(undefined8 **)(param_2 + 0x68)) {
            **(undefined8 **)(param_2 + 0x60) = local_b0;
            *(long *)(param_2 + 0x60) = *(long *)(param_2 + 0x60) + 8;
            local_b0 = (long ***)0x0;
          }
          else {
            FUN_7102f74b00(plVar19,(long *)&local_b0,pppplVar24,param_5,param_6,param_7,param_8,
                           param_9);
            ppplVar13 = local_b0;
            local_b0 = (long ***)0x0;
            if (ppplVar13 != (long ***)0x0) {
              (*(code *)(*ppplVar13)[1])();
            }
          }
        }
        break;
      }
    }
    if (*(char *)(*(long *)(param_2 + 0x10) + 0x10) == '\0') {
LAB_7102f741a8:
      uVar20 = 1;
    }
    else {
      bVar10 = *(byte *)(*(long *)(param_2 + 0x10) + 0xa4);
      if (6 < bVar10 - 1) goto LAB_7102f741a8;
      uVar35 = (uint)bVar10 + (bVar10 / 10) * -10;
      if (6 < uVar35) {
        uVar35 = 7;
      }
      if ((int)uVar35 < 2) {
        uVar35 = 1;
      }
      uVar20 = (ulong)uVar35;
    }
    lVar27 = (uVar20 & 0xff) - 1;
    uVar35 = (uint)lVar27;
    if (uVar35 < 7) {
      pcVar39 = (&PTR_s_light00_trans_sora_7105158520)[lVar27];
    }
    else {
      pcVar39 = "light00_set";
    }
    FUN_71025f74f0(*(float *)(*(long *)(param_2 + 0x20) + 0xb0),
                   *(long *)(*(long *)(*(long *)(param_2 + 8) + 0x318) + 0x10),(byte *)pcVar39);
    *(undefined1 *)(*(long *)(*(long *)(*(long *)(param_2 + 8) + 0x318) + 0x10) + 0x4c) = 0;
    iVar6 = *(int *)(*(long *)(param_2 + 8) + 8);
    if (iVar6 == 0x16a) {
      if (uVar35 < 7) {
        ppuVar28 = &PTR_s_E_chara_dth_sora_71051585a0;
        goto LAB_7102f74250;
      }
      pcVar39 = "E_chara";
    }
    else if (iVar6 == 0x16b) {
      if (uVar35 < 7) {
        ppuVar28 = &PTR_s_B_chara_dth_sora_7105158560;
LAB_7102f74250:
        pcVar39 = ppuVar28[(int)uVar35];
      }
      else {
        pcVar39 = "B_chara";
      }
    }
    else {
      if (uVar35 < 7) {
        ppuVar28 = &PTR_s_chara_dth_sora_71051585e0;
        goto LAB_7102f74250;
      }
      pcVar39 = "chara";
    }
    FUN_7102633a10(*(long *)(*(long *)(param_2 + 8) + 0x318),(long *********)pcVar39,0,param_5,
                   param_6,param_7,param_8,param_9);
    if (uVar35 < 7) {
      pcVar39 = (&PTR_s_stage_dth_sora_7105158620)[(int)uVar35];
    }
    else {
      pcVar39 = "stage";
    }
    param_4 = (long ****)0x0;
    FUN_7102633b90(*(long *)(*(long *)(param_2 + 8) + 0x318),(long *********)pcVar39,0,param_5,
                   param_6,param_7,param_8,param_9);
    plVar18 = *(long **)(param_2 + 0xc0);
    uVar25 = *(undefined4 *)(*(long *)(param_2 + 0x20) + 0xa8);
    *(undefined4 *)(param_2 + 0x98) = uVar25;
    *(undefined4 *)(param_2 + 0x90) = uVar25;
    *(undefined4 *)(param_2 + 0x94) = uVar25;
    *(undefined8 *)(param_2 + 0xc0) = 0;
    if ((long *)(param_2 + 0xa0) == plVar18) {
      pcVar26 = *(code **)(*plVar18 + 0x20);
LAB_7102f7438c:
      (*pcVar26)();
    }
    else if (plVar18 != (long *)0x0) {
      pcVar26 = *(code **)(*plVar18 + 0x28);
      goto LAB_7102f7438c;
    }
    plVar18 = *(long **)(param_2 + 0x100);
    uVar25 = *(undefined4 *)(*(long *)(param_2 + 0x20) + 0xac);
    *(undefined4 *)(param_2 + 0xd8) = uVar25;
    *(undefined4 *)(param_2 + 0xd0) = uVar25;
    *(undefined4 *)(param_2 + 0xd4) = uVar25;
    *(undefined8 *)(param_2 + 0x100) = 0;
    if ((long *)(param_2 + 0xe0) == plVar18) {
      pcVar26 = *(code **)(*plVar18 + 0x20);
LAB_7102f743cc:
      (*pcVar26)();
    }
    else if (plVar18 != (long *)0x0) {
      pcVar26 = *(code **)(*plVar18 + 0x28);
      goto LAB_7102f743cc;
    }
    plVar18 = *(long **)(param_2 + 0x140);
    uVar25 = *(undefined4 *)(*(long *)(param_2 + 0x20) + 0xb4);
    *(undefined4 *)(param_2 + 0x114) = uVar25;
    *(undefined4 *)(param_2 + 0x110) = uVar25;
    *(undefined4 *)(param_2 + 0x118) = uVar25;
    *(undefined8 *)(param_2 + 0x140) = 0;
    if ((long *)(param_2 + 0x120) == plVar18) {
      pcVar26 = *(code **)(*plVar18 + 0x20);
LAB_7102f74410:
      (*pcVar26)();
    }
    else if (plVar18 != (long *)0x0) {
      pcVar26 = *(code **)(*plVar18 + 0x28);
      goto LAB_7102f74410;
    }
    fVar42 = *(float *)(*(long *)(param_2 + 0x20) + 0xb0) + 1.0;
    local_e0 = (long ***)&DAT_7105158768;
    local_d0 = uVar20 & 0xff;
    local_c0 = &local_e0;
    *(float *)(param_2 + 0x150) = fVar42;
    *(float *)(param_2 + 0x154) = fVar42;
    *(float *)(param_2 + 0x158) = fVar42;
    lStack_d8 = param_2;
    local_90 = &local_b0;
    FUN_7102f74da0((long)&local_e0,&local_b0);
    FUN_71003cb050((long *)&local_b0,(long *)(param_2 + 0x160));
    if (&local_b0 == local_90) {
      pplVar37 = (*local_90)[4];
LAB_7102f74494:
      (*(code *)pplVar37)();
      uVar23 = extraout_x1_07;
    }
    else {
      uVar23 = extraout_x1_06;
      if (local_90 != (long ****)0x0) {
        pplVar37 = (*local_90)[5];
        goto LAB_7102f74494;
      }
    }
    if (&local_e0 == local_c0) {
      pcVar26 = *(code **)(*local_c0 + 0x20);
LAB_7102f744c0:
      (*pcVar26)();
      uVar23 = extraout_x1_08;
    }
    else if (local_c0 != (long *)0x0) {
      pcVar26 = *(code **)(*local_c0 + 0x28);
      goto LAB_7102f744c0;
    }
    FUN_7102f775b0(*(long *)(param_2 + 0x48),uVar23,param_4,param_5,param_6,param_7,param_8,param_9)
    ;
    uVar25 = 1;
    param_3 = extraout_x1_09;
LAB_7102f744d0:
    *(undefined4 *)(param_2 + 0x2c) = uVar25;
  }
LAB_7102f744d4:
  fVar42 = *(float *)(param_2 + 0x94);
  *(float *)(param_2 + 0x98) = fVar42;
  local_b0 = (long ***)((ulong)local_b0 & 0xffffffff00000000);
  local_e0._0_4_ = fVar42 - fVar46;
  pppplVar24 = (long ****)&local_e0;
  if (fVar42 - fVar46 <= 0.0) {
    pppplVar24 = &local_b0;
  }
  fVar43 = *(float *)pppplVar24;
  bVar14 = false;
  bVar15 = true;
  bVar16 = false;
  if (fVar43 == 0.0) {
    bVar14 = false;
    bVar15 = false;
    bVar16 = true;
    if (!NAN(fVar42) && !NAN(fVar43)) {
      bVar14 = fVar42 < fVar43;
      bVar15 = fVar42 == fVar43;
      bVar16 = false;
    }
  }
  *(float *)(param_2 + 0x94) = fVar43;
  if ((!bVar15 && bVar14 == bVar16) && (*(long **)(param_2 + 0xc0) != (long *)0x0)) {
    (**(code **)(**(long **)(param_2 + 0xc0) + 0x30))();
    plVar18 = *(long **)(param_2 + 0xc0);
    *(undefined8 *)(param_2 + 0xc0) = 0;
    if ((long *)(param_2 + 0xa0) == plVar18) {
      pcVar26 = *(code **)(*plVar18 + 0x20);
    }
    else {
      param_3 = extraout_x1_10;
      if (plVar18 == (long *)0x0) goto LAB_7102f74558;
      pcVar26 = *(code **)(*plVar18 + 0x28);
    }
    (*pcVar26)();
    param_3 = extraout_x1_11;
  }
LAB_7102f74558:
  fVar42 = *(float *)(param_2 + 0xd4);
  *(float *)(param_2 + 0xd8) = fVar42;
  local_b0 = (long ***)((ulong)local_b0 & 0xffffffff00000000);
  local_e0._0_4_ = fVar42 - fVar46;
  pppplVar24 = (long ****)&local_e0;
  if (fVar42 - fVar46 <= 0.0) {
    pppplVar24 = &local_b0;
  }
  fVar43 = *(float *)pppplVar24;
  bVar14 = false;
  bVar15 = true;
  bVar16 = false;
  if (fVar43 == 0.0) {
    bVar14 = false;
    bVar15 = false;
    bVar16 = true;
    if (!NAN(fVar42) && !NAN(fVar43)) {
      bVar14 = fVar42 < fVar43;
      bVar15 = fVar42 == fVar43;
      bVar16 = false;
    }
  }
  *(float *)(param_2 + 0xd4) = fVar43;
  if ((!bVar15 && bVar14 == bVar16) && (*(long **)(param_2 + 0x100) != (long *)0x0)) {
    (**(code **)(**(long **)(param_2 + 0x100) + 0x30))();
    plVar18 = *(long **)(param_2 + 0x100);
    *(undefined8 *)(param_2 + 0x100) = 0;
    if ((long *)(param_2 + 0xe0) == plVar18) {
      pcVar26 = *(code **)(*plVar18 + 0x20);
    }
    else {
      param_3 = extraout_x1_12;
      if (plVar18 == (long *)0x0) goto LAB_7102f745d4;
      pcVar26 = *(code **)(*plVar18 + 0x28);
    }
    (*pcVar26)();
    param_3 = extraout_x1_13;
  }
LAB_7102f745d4:
  fVar42 = *(float *)(param_2 + 0x114);
  *(float *)(param_2 + 0x118) = fVar42;
  local_b0 = (long ***)((ulong)local_b0 & 0xffffffff00000000);
  local_e0._0_4_ = fVar42 - fVar46;
  pppplVar24 = (long ****)&local_e0;
  if (fVar42 - fVar46 <= 0.0) {
    pppplVar24 = &local_b0;
  }
  fVar43 = *(float *)pppplVar24;
  bVar14 = false;
  bVar15 = true;
  bVar16 = false;
  if (fVar43 == 0.0) {
    bVar14 = false;
    bVar15 = false;
    bVar16 = true;
    if (!NAN(fVar42) && !NAN(fVar43)) {
      bVar14 = fVar42 < fVar43;
      bVar15 = fVar42 == fVar43;
      bVar16 = false;
    }
  }
  *(float *)(param_2 + 0x114) = fVar43;
  if ((!bVar15 && bVar14 == bVar16) && (*(long **)(param_2 + 0x140) != (long *)0x0)) {
    (**(code **)(**(long **)(param_2 + 0x140) + 0x30))();
    plVar18 = *(long **)(param_2 + 0x140);
    *(undefined8 *)(param_2 + 0x140) = 0;
    if ((long *)(param_2 + 0x120) == plVar18) {
      pcVar26 = *(code **)(*plVar18 + 0x20);
    }
    else {
      param_3 = extraout_x1_14;
      if (plVar18 == (long *)0x0) goto LAB_7102f74658;
      pcVar26 = *(code **)(*plVar18 + 0x28);
    }
    (*pcVar26)();
    param_3 = extraout_x1_15;
  }
LAB_7102f74658:
  fVar42 = *(float *)(param_2 + 0x154);
  *(float *)(param_2 + 0x158) = fVar42;
  local_b0 = (long ***)((ulong)local_b0 & 0xffffffff00000000);
  local_e0 = (long ***)CONCAT44(local_e0._4_4_,fVar42 - fVar46);
  pppplVar24 = (long ****)&local_e0;
  if (fVar42 - fVar46 <= 0.0) {
    pppplVar24 = &local_b0;
  }
  fVar43 = *(float *)pppplVar24;
  *(float *)(param_2 + 0x154) = fVar43;
  if (((fVar43 == 0.0) && (fVar43 < fVar42)) && (*(long **)(param_2 + 0x180) != (long *)0x0)) {
    (**(code **)(**(long **)(param_2 + 0x180) + 0x30))();
    plVar18 = *(long **)(param_2 + 0x180);
    *(undefined8 *)(param_2 + 0x180) = 0;
    if ((long *)(param_2 + 0x160) == plVar18) {
      pcVar26 = *(code **)(*plVar18 + 0x20);
    }
    else {
      param_3 = extraout_x1_16;
      if (plVar18 == (long *)0x0) goto LAB_7102f746d8;
      pcVar26 = *(code **)(*plVar18 + 0x28);
    }
    (*pcVar26)();
    param_3 = extraout_x1_17;
  }
LAB_7102f746d8:
  FUN_7102f77940(fVar46,*(long *)(param_2 + 0x40),param_3,param_4,param_5,param_6,param_7,param_8,
                 param_9);
  FUN_7102f77940(fVar46,*(long *)(param_2 + 0x48),extraout_x1_18,param_4,param_5,param_6,param_7,
                 param_8,param_9);
  FUN_7102f77940(fVar46,*(long *)(param_2 + 0x50),extraout_x1_19,param_4,param_5,param_6,param_7,
                 param_8,param_9);
  puVar5 = *(undefined8 **)(param_2 + 0x60);
  for (puVar33 = *(undefined8 **)(param_2 + 0x58); puVar33 != puVar5; puVar33 = puVar33 + 1) {
    (**(code **)(*(long *)*puVar33 + 0x10))(param_1);
  }
  return;
}

