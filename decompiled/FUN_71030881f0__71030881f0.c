// addr:      71030881f0
// offset:    0x30881f0
// name:      FUN_71030881f0
// mangled:   
// signature: undefined __cdecl FUN_71030881f0(long param_1, uint * param_2, long * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_71030881f0(long param_1,uint *param_2,long ****param_3,byte ****param_4,long ****param_5,
                   undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  ulong *puVar2;
  int iVar3;
  char cVar4;
  uint uVar5;
  long *plVar6;
  uint *extraout_x1;
  uint *extraout_x1_00;
  ulong uVar7;
  char *pcVar8;
  uint *extraout_x1_01;
  uint *extraout_x1_02;
  uint *extraout_x1_03;
  uint *extraout_x1_04;
  uint *extraout_x1_05;
  uint *extraout_x1_06;
  uint *extraout_x1_07;
  uint *extraout_x1_08;
  uint *extraout_x1_09;
  uint *extraout_x1_10;
  uint *puVar9;
  uint uVar10;
  ulong uVar11;
  code *pcVar12;
  long lVar13;
  ulong *puVar14;
  long lVar15;
  ulong uVar16;
  ulong uVar17;
  long ****pppplVar18;
  ulong *puVar19;
  ulong *puVar20;
  int local_138 [2];
  ulong local_130 [2];
  undefined4 local_120;
  undefined8 local_118;
  char *pcStack_110;
  undefined4 local_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined4 local_f0;
  undefined8 local_e8;
  char *pcStack_e0;
  undefined4 local_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined4 local_c0;
  undefined8 local_b8;
  char *pcStack_b0;
  undefined4 local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined4 local_90;
  undefined8 local_88;
  char *pcStack_80;
  
  if (1 < *param_2) {
LAB_71030888e8:
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(uint *)(param_1 + (ulong)*param_2 * 4 + 0x8c4) = param_2[1];
  lVar13 = *(long *)(param_1 + 0x7e0);
  lVar15 = *(long *)(param_1 + 0x7d8);
  if (lVar13 != lVar15) {
    uVar7 = 1;
    uVar17 = 0;
    do {
      uVar11 = uVar7;
      if ((*param_2 == *(uint *)(lVar15 + uVar17 * 0x18 + 8)) &&
         (param_2[1] == *(uint *)(lVar15 + uVar17 * 0x18 + 0xc))) {
        if ((ulong)(*(long *)(param_1 + 0xa90) - *(long *)(param_1 + 0xa88) >> 2) <= uVar17) {
                    /* WARNING: Subroutine does not return */
          std::__vector_base_common<true>::__throw_out_of_range();
        }
        *(undefined4 *)(*(long *)(param_1 + 0xa88) + uVar17 * 4) = 0;
        lVar13 = *(long *)(param_1 + 0x7e0);
        lVar15 = *(long *)(param_1 + 0x7d8);
      }
      uVar16 = (lVar13 - lVar15 >> 3) * -0x5555555555555555;
      uVar7 = (ulong)((int)uVar11 + 1);
      uVar17 = uVar11;
    } while (uVar11 <= uVar16 && uVar16 - uVar11 != 0);
  }
  uVar5 = *param_2;
  uVar7 = (ulong)uVar5;
  uVar10 = param_2[1];
  uVar17 = (ulong)uVar10;
  local_120 = 5;
  local_118 = 0x14cc425535;
  pcStack_110 = "LHT_09_joint";
  local_e8 = 0x14cc425535;
  pcStack_e0 = "LHT_09_joint";
  local_c0 = 7;
  local_138[0] = 0xd;
  local_108 = 0xd;
  local_d8 = 0xd;
  local_a8 = 0xd;
  local_130[0] = 0;
  local_130[1] = 0;
  local_f0 = 6;
  local_90 = 8;
  local_100 = 0;
  uStack_f8 = 0;
  local_d0 = 0;
  uStack_c8 = 0;
  local_b8 = 0x1430c2baf8;
  pcStack_b0 = "RHA_04_joint";
  local_a0 = 0;
  uStack_98 = 0;
  local_88 = 0x1430c2baf8;
  pcStack_80 = "RHA_04_joint";
  if ((1 < uVar5) || (3 < uVar10)) goto LAB_71030888e8;
  iVar3 = local_138[uVar7 * 0x18 + uVar17 * 6];
  puVar9 = param_2;
  if ((iVar3 != 0xd) &&
     ((long ***)(local_130[uVar7 * 0xc + uVar17 * 3] & 0xffffffffff) != (long ***)0x0)) {
    for (puVar1 = *(undefined8 **)(*(long *)(param_1 + 0x310) + 0xd0);
        puVar1 != *(undefined8 **)(*(long *)(param_1 + 0x310) + 0xd8); puVar1 = puVar1 + 2) {
      if ((*(uint *)(puVar1 + 1) < 2) &&
         (pppplVar18 = (long ****)*puVar1,
         (long ***)(local_130[uVar7 * 0xc + uVar17 * 3] & 0xffffffffff) == pppplVar18[0xd])) {
        if ((pppplVar18 != (long ****)0x0) && (pppplVar18[0x1b] != (long ***)0x0)) {
          pcVar8 = (char *)local_130[uVar7 * 0xc + uVar17 * 3 + 1];
          uVar5 = 0;
          do {
            uVar7 = (ulong)uVar5;
            uVar5 = uVar5 + 1;
          } while (pcVar8[uVar7] != '\0');
          cVar4 = *pcVar8;
          while (cVar4 != '\0') {
            pcVar8 = pcVar8 + 1;
            cVar4 = *pcVar8;
          }
          uVar5 = (**(code **)(*pppplVar18[0x1b][1][1] + 0x18))();
          puVar9 = extraout_x1_01;
          if (uVar5 != 0xffffffff) {
            plVar6 = *(long **)(param_1 + 0x338);
            param_4 = (byte ****)(ulong)uVar5;
            uVar5 = FUN_710301d1d0(*(long **)(param_1 + 0x980),plVar6,pppplVar18,param_4,param_5,
                                   param_6,param_7,param_8);
            param_3 = (long ****)(ulong)uVar5;
            plVar6 = *(long **)(*plVar6 + 8);
            puVar9 = extraout_x1_02;
            if (plVar6 != (long *)0x0) {
              (**(code **)(*plVar6 + 0x58))(plVar6,iVar3);
              puVar9 = extraout_x1_03;
            }
          }
        }
        break;
      }
    }
    uVar5 = *param_2;
    uVar10 = param_2[1];
  }
  lVar13 = *(long *)(param_1 + 0xaa0);
  if (lVar13 == 0) {
    for (plVar6 = *(long **)(*(long *)(param_1 + 0x310) + 0xd0);
        plVar6 != *(long **)(*(long *)(param_1 + 0x310) + 0xd8); plVar6 = plVar6 + 2) {
      if ((*(uint *)(plVar6 + 1) < 2) && (lVar13 = *plVar6, *(long *)(lVar13 + 0x68) == 0x7d5651d04)
         ) {
        *(long *)(param_1 + 0xaa0) = lVar13;
        if (lVar13 != 0) goto LAB_71030883d4;
        goto LAB_710308868c;
      }
    }
    *(undefined8 *)(param_1 + 0xaa0) = 0;
    uVar5 = *param_2;
    if (uVar5 != 0) goto LAB_7103088694;
LAB_7103088464:
    if (param_2[1] != 1) goto LAB_71030886d0;
    uVar5 = *(uint *)(param_1 + 0x858);
  }
  else {
LAB_71030883d4:
    if (uVar5 == 1) {
      if (uVar10 == 0) {
        if (*(char *)(lVar13 + 0xe0) != '\0') {
          param_3 = (long ****)0x1;
          (**(code **)(**(long **)(lVar13 + 0x90) + 0x180))(*(long **)(lVar13 + 0x90),0x11e30f5907);
          lVar13 = *(long *)(param_1 + 0xaa0);
          puVar9 = extraout_x1_04;
          if (lVar13 == 0) goto LAB_710308868c;
        }
        if (*(char *)(lVar13 + 0xe0) != '\0') {
          plVar6 = *(long **)(lVar13 + 0x90);
          pcVar12 = *(code **)(*plVar6 + 0x180);
          uVar7 = 0x117a0608bd;
LAB_7103088684:
          param_3 = (long ****)0x0;
          goto LAB_7103088688;
        }
      }
      else if (uVar10 == 3) {
        if (*(char *)(lVar13 + 0xe0) != '\0') {
          param_3 = (long ****)0x0;
          (**(code **)(**(long **)(lVar13 + 0x90) + 0x180))(*(long **)(lVar13 + 0x90),0x117a0608bd);
          lVar13 = *(long *)(param_1 + 0xaa0);
          puVar9 = extraout_x1_05;
          if (lVar13 == 0) goto LAB_710308868c;
        }
        if (*(char *)(lVar13 + 0xe0) != '\0') {
          plVar6 = *(long **)(lVar13 + 0x90);
          pcVar12 = *(code **)(*plVar6 + 0x180);
          uVar7 = 0;
          goto LAB_7103088684;
        }
      }
      else if (uVar10 == 1) {
        if (*(char *)(lVar13 + 0xe0) != '\0') {
          param_3 = (long ****)0x0;
          (**(code **)(**(long **)(lVar13 + 0x90) + 0x180))(*(long **)(lVar13 + 0x90),0x11e30f5907);
          lVar13 = *(long *)(param_1 + 0xaa0);
          puVar9 = extraout_x1;
          if (lVar13 == 0) goto LAB_710308868c;
        }
        if (*(char *)(lVar13 + 0xe0) != '\0') {
          plVar6 = *(long **)(lVar13 + 0x90);
          pcVar12 = *(code **)(*plVar6 + 0x180);
          uVar7 = 0x7a0608bd;
          goto LAB_710308853c;
        }
      }
    }
    else if (uVar5 == 0) {
      if (uVar10 == 0) {
        if (*(char *)(lVar13 + 0xe0) != '\0') {
          plVar6 = *(long **)(lVar13 + 0x90);
          pcVar12 = *(code **)(*plVar6 + 0x180);
          param_3 = (long ****)0x1;
LAB_7103088514:
          (*pcVar12)(plVar6,0x11870dc0e4);
          lVar13 = *(long *)(param_1 + 0xaa0);
          puVar9 = extraout_x1_00;
          if (lVar13 == 0) goto LAB_710308868c;
        }
      }
      else {
        if (uVar10 != 1) goto LAB_710308868c;
        if (*(char *)(lVar13 + 0xe0) != '\0') {
          plVar6 = *(long **)(lVar13 + 0x90);
          pcVar12 = *(code **)(*plVar6 + 0x180);
          param_3 = (long ****)0x0;
          goto LAB_7103088514;
        }
      }
      if (*(char *)(lVar13 + 0xe0) != '\0') {
        plVar6 = *(long **)(lVar13 + 0x90);
        pcVar12 = *(code **)(*plVar6 + 0x180);
        uVar7 = 0x1e04915e;
LAB_710308853c:
        uVar7 = uVar7 | 0x1100000000;
        param_3 = (long ****)0x1;
LAB_7103088688:
        (*pcVar12)(plVar6,uVar7);
        puVar9 = extraout_x1_06;
      }
    }
LAB_710308868c:
    uVar5 = *param_2;
    if (uVar5 == 0) goto LAB_7103088464;
LAB_7103088694:
    if ((uVar5 != 1) || (param_2[1] != 1)) goto LAB_71030886d0;
    uVar5 = *(uint *)(param_1 + 0x854);
  }
  param_3 = (long ****)(ulong)uVar5;
  param_5 = (long ****)&DAT_50000000;
  param_4 = (byte ****)0x0;
  FUN_710067de90(*lib::Singleton<app::FighterManager>::instance_,0x10455d7d08,uVar5,0,0x50000000);
  puVar9 = extraout_x1_07;
LAB_71030886d0:
  puVar19 = *(ulong **)(param_1 + 0x790);
  puVar20 = *(ulong **)(param_1 + 0x798);
  do {
    if (puVar19 == puVar20) {
      return;
    }
    puVar14 = puVar19;
    if (*param_2 != 0) {
      puVar14 = puVar19 + 1;
    }
    uVar7 = *puVar14 & 0xffffffffff;
    if ((uVar7 != 0 && uVar7 != 0x425cbfc4f) && (uVar7 = *puVar14 & 0xffffffffff, uVar7 != 0)) {
      puVar14 = *(ulong **)(*(long *)(param_1 + 0x310) + 0xd0);
      puVar2 = *(ulong **)(*(long *)(param_1 + 0x310) + 0xd8);
      if (puVar14 != puVar2) {
        iVar3 = *(int *)((long)puVar19 + (ulong)param_2[1] * 4 + 0x10);
        do {
          if (((uint)puVar14[1] < 2) && (uVar17 = *puVar14, uVar7 == *(ulong *)(uVar17 + 0x68))) {
            if (uVar17 != 0) {
              *(bool *)(uVar17 + 0x110) = iVar3 != 0 && iVar3 != 3;
              FUN_71025e9d50((long *)(uVar17 + 0x108),puVar9,param_3,param_4,param_5,param_6,param_7
                             ,param_8);
              if ((*(char *)(uVar17 + 0xe0) != '\0') && (*(long *)(uVar17 + 200) != 0)) {
                *(undefined4 *)(*(long *)(uVar17 + 200) + 8) = 0x3f800000;
              }
              if (*(long *)(uVar17 + 0xd8) != 0) {
                *(undefined4 *)(*(long *)(uVar17 + 0xd8) + 0x24) = 0x3f800000;
              }
              if (*(char *)(uVar17 + 0xe0) != '\0') {
                *(undefined4 *)(*(long *)(uVar17 + 0xb0) + 0x14) = 0x3f800000;
              }
              if ((*(char *)(uVar17 + 0xe0) != '\0') && (*(long *)(uVar17 + 200) != 0)) {
                *(undefined2 *)(*(long *)(uVar17 + 200) + 0x32) = 0;
              }
              if (*(long *)(uVar17 + 0xd8) != 0) {
                *(undefined1 *)(*(long *)(uVar17 + 0xd8) + 0x22) = 0;
              }
              puVar9 = extraout_x1_08;
              if ((*(long *)(uVar17 + 0xd8) != 0) ||
                 ((*(long *)(uVar17 + 200) != 0 && (iVar3 != 3)))) {
                if (iVar3 == 2) {
                  FUN_71030888f0(uVar17,param_2[1]);
                  FUN_710260fdd0(0,uVar17,1);
                  if ((*(char *)(uVar17 + 0xe0) != '\0') && (*(long *)(uVar17 + 200) != 0)) {
                    *(undefined2 *)(*(long *)(uVar17 + 200) + 0x30) = 0;
                  }
                  if (*(long *)(uVar17 + 0xd8) != 0) {
                    *(undefined1 *)(*(long *)(uVar17 + 0xd8) + 0x21) = 0;
                  }
                  puVar9 = extraout_x1_10;
                  if (*(char *)(uVar17 + 0xe0) != '\0') {
                    *(undefined1 *)(*(long *)(uVar17 + 0xb0) + 0x10) = 1;
                  }
                }
                else if (iVar3 == 0) {
                  FUN_71030888f0(uVar17,param_2[1]);
                  FUN_710260fdd0(0,uVar17,1);
                  if ((*(char *)(uVar17 + 0xe0) != '\0') && (*(long *)(uVar17 + 200) != 0)) {
                    *(undefined2 *)(*(long *)(uVar17 + 200) + 0x30) = 0x101;
                  }
                  if (*(long *)(uVar17 + 0xd8) != 0) {
                    *(undefined1 *)(*(long *)(uVar17 + 0xd8) + 0x21) = 1;
                  }
                  puVar9 = extraout_x1_09;
                  if (*(char *)(uVar17 + 0xe0) != '\0') {
                    *(undefined1 *)(*(long *)(uVar17 + 0xb0) + 0x10) = 0;
                  }
                }
              }
            }
            break;
          }
          puVar14 = puVar14 + 2;
        } while (puVar2 != puVar14);
      }
    }
    puVar19 = puVar19 + 4;
  } while( true );
}

