// addr:      7102fdcb20
// offset:    0x2fdcb20
// name:      FUN_7102fdcb20
// mangled:   
// signature: undefined __cdecl FUN_7102fdcb20(long * param_1, undefined8 param_2, char * param_3, undefined1[16] * param_4, undefined1[16] * param_5, undefined1[16] * param_6, long * * * * * * param_7, long * * * param_8)


void FUN_7102fdcb20(long *param_1,undefined8 param_2,char *param_3,undefined1 (*param_4) [16],
                   undefined1 (*param_5) [16],undefined1 (*param_6) [16],long ******param_7,
                   long ***param_8)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  long *plVar5;
  undefined4 *puVar6;
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
  undefined8 uVar7;
  undefined8 extraout_x1_11;
  undefined8 extraout_x1_12;
  undefined8 extraout_x1_13;
  undefined8 extraout_x1_14;
  undefined8 extraout_x1_15;
  bool bVar8;
  ulong uVar9;
  code *pcVar10;
  long *plVar11;
  long *plVar12;
  uint uVar13;
  long *plVar14;
  long lVar15;
  uint *puVar16;
  ulong uVar17;
  ulong uVar18;
  long ****pppplVar19;
  undefined8 *puVar20;
  long lVar21;
  undefined4 uVar22;
  float fVar23;
  ulong local_c0;
  ulong uStack_b8;
  undefined8 local_b0;
  ulong local_a8;
  undefined8 local_a0;
  ulong uStack_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  ulong local_68;
  undefined8 local_60;
  ulong local_58;
  undefined8 local_50;
  undefined8 local_48;
  
  FUN_71025d9250(param_1,param_2,(long *********)param_3,param_4,param_5,param_6,param_7,param_8);
  lVar21 = param_1[0x68];
  plVar5 = (long *)FUN_710392e290(0x10,0x50,(long ****)param_3,(byte ****)param_4,(long ****)param_5
                                  ,param_6,param_7,param_8);
  if (plVar5 == (long *)0x0) {
    local_c0 = local_c0 & 0xffffffff00000000;
    local_80 = 0x50;
    param_3 = (char *)&local_80;
    (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_c0);
    plVar5 = (long *)FUN_710392e290(0x10,0x50,(long ****)param_3,(byte ****)param_4,
                                    (long ****)param_5,param_6,param_7,param_8);
  }
  *(undefined4 *)(plVar5 + 4) = 0xffffffff;
  *(undefined1 *)((long)plVar5 + 0x24) = 0;
  plVar5[2] = -1;
  plVar5[3] = -1;
  *(undefined4 *)(plVar5 + 9) = 0;
  plVar5[6] = 0;
  *plVar5 = lVar21;
  plVar5[1] = -1;
  plVar5[7] = 0;
  plVar5[8] = 0;
  uVar9 = param_1[0x120];
  param_1[0x120] = (long)plVar5;
  if (uVar9 != 0) {
    FUN_710392eb40(uVar9);
    plVar5 = (long *)param_1[0x120];
  }
  *(undefined4 *)(plVar5 + 6) = 0;
  *(undefined4 *)(param_1[0x120] + 0x34) = 1;
  *(undefined4 *)(param_1[0x120] + 0x38) = 2;
  *(undefined4 *)(param_1[0x120] + 0x3c) = 3;
  *(undefined4 *)(param_1[0x120] + 0x40) = 4;
  *(undefined4 *)(param_1[0x120] + 0x44) = 5;
  *(undefined4 *)(param_1[0x120] + 0x48) = 6;
  *(long *)((long)param_1 + 0x884) = param_1[0xed];
  *(long *)((long)param_1 + 0x88c) = param_1[0xee];
  *(int *)((long)param_1 + 0x894) = (int)param_1[0xef];
  *(undefined4 *)(param_1 + 0x113) = *(undefined4 *)((long)param_1 + 0x77c);
  *(undefined4 *)(param_1 + 0x114) = *(undefined4 *)((long)param_1 + 0x784);
  *(int *)((long)param_1 + 0x89c) = (int)param_1[0xf0];
  *(int *)((long)param_1 + 0x8a4) = (int)param_1[0xf0];
  *(undefined1 *)(param_1 + 0x117) = 0;
  FUN_7103177310((int)param_1[0xe8],*(undefined4 *)((long)param_1 + 0x744),(int)param_1[0xe9],
                 *(undefined4 *)((long)param_1 + 0x74c),(int)param_1[0xea],
                 *(long *)(*lib::Singleton<app::StageManager>::instance_ + 0x1d0),(ulong)param_1);
  lVar21 = *(long *)(*lib::Singleton<app::StageManager>::instance_ + 0x1d0);
  plVar5 = (long *)(lVar21 + 0x58);
  plVar14 = (long *)*plVar5;
  uVar7 = extraout_x1;
  if ((char)param_1[0x117] == '\0') {
    plVar12 = plVar5;
    if (plVar14 != (long *)0x0) {
      plVar12 = (long *)(lVar21 + 0x58);
      do {
        while (plVar11 = plVar14, (long *)plVar11[4] <= param_1) {
          if (param_1 <= (long *)plVar11[4]) goto LAB_7102fdcd98;
          plVar12 = plVar11 + 1;
          plVar14 = (long *)*plVar12;
          if ((long *)*plVar12 == (long *)0x0) goto LAB_7102fdcd98;
        }
        plVar14 = (long *)*plVar11;
        plVar12 = plVar11;
      } while ((long *)*plVar11 != (long *)0x0);
    }
LAB_7102fdcd98:
    *(undefined4 *)(*(long *)(*plVar12 + 0x28) + 0x380) = 0;
    if ((*(long **)(lVar21 + 0x20) == param_1) && (*(int *)(lVar21 + 0x38) < 3)) {
      if ((long *)*plVar5 != (long *)0x0) {
        plVar14 = (long *)(lVar21 + 0x58);
        plVar12 = (long *)*plVar5;
        do {
          while ((long *)plVar12[4] <= param_1) {
            plVar5 = plVar14;
            if (param_1 <= (long *)plVar12[4]) goto LAB_7102fdce00;
            plVar14 = plVar12 + 1;
            plVar12 = (long *)*plVar14;
            plVar5 = plVar14;
            if (plVar12 == (long *)0x0) goto LAB_7102fdce00;
          }
          plVar11 = (long *)*plVar12;
          plVar5 = plVar12;
          plVar14 = plVar12;
          plVar12 = plVar11;
        } while (plVar11 != (long *)0x0);
      }
      goto LAB_7102fdce00;
    }
  }
  else {
    plVar12 = plVar5;
    if (plVar14 != (long *)0x0) {
      plVar12 = (long *)(lVar21 + 0x58);
      do {
        while (plVar11 = plVar14, (long *)plVar11[4] <= param_1) {
          if (param_1 <= (long *)plVar11[4]) goto LAB_7102fdcd24;
          plVar12 = plVar11 + 1;
          plVar14 = (long *)*plVar12;
          if ((long *)*plVar12 == (long *)0x0) goto LAB_7102fdcd24;
        }
        plVar14 = (long *)*plVar11;
        plVar12 = plVar11;
      } while ((long *)*plVar11 != (long *)0x0);
    }
LAB_7102fdcd24:
    *(undefined4 *)(*(long *)(*plVar12 + 0x28) + 0x380) = 1;
    if ((*(long **)(lVar21 + 0x20) == param_1) && (*(int *)(lVar21 + 0x38) < 3)) {
      if ((long *)*plVar5 != (long *)0x0) {
        plVar14 = (long *)(lVar21 + 0x58);
        plVar12 = (long *)*plVar5;
        do {
          while ((long *)plVar12[4] <= param_1) {
            plVar5 = plVar14;
            if (param_1 <= (long *)plVar12[4]) goto LAB_7102fdce00;
            plVar14 = plVar12 + 1;
            plVar12 = (long *)*plVar14;
            plVar5 = plVar14;
            if (plVar12 == (long *)0x0) goto LAB_7102fdce00;
          }
          plVar11 = (long *)*plVar12;
          plVar5 = plVar12;
          plVar14 = plVar12;
          plVar12 = plVar11;
        } while (plVar11 != (long *)0x0);
      }
LAB_7102fdce00:
      plVar14 = *(long **)(*(long *)(*plVar5 + 0x28) + 0x3b0);
      if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      (**(code **)(*plVar14 + 0x30))(plVar14,*(long *)(*plVar5 + 0x28) + 0x380);
      uVar7 = extraout_x1_00;
    }
  }
  lVar21 = param_1[0x62];
  plVar14 = *(long **)(lVar21 + 0xd0);
  for (plVar5 = plVar14; plVar5 != *(long **)(lVar21 + 0xd8); plVar5 = plVar5 + 2) {
    if ((*(uint *)(plVar5 + 1) < 2) && (lVar15 = *plVar5, *(long *)(lVar15 + 0x68) == 0xc7071c266))
    goto LAB_7102fdce6c;
  }
  lVar15 = 0;
LAB_7102fdce6c:
  uVar9 = (long)*(long **)(lVar21 + 0xd8) - (long)plVar14;
  if ((int)(uVar9 >> 4) == 0) {
    uVar17 = 0xffffffff;
  }
  else {
    uVar17 = 0;
    do {
      if (*plVar14 == lVar15) goto LAB_7102fdceac;
      uVar17 = uVar17 + 1;
      plVar14 = plVar14 + 2;
    } while (uVar17 < (uVar9 >> 4 & 0xffffffff));
    uVar17 = 0xffffffff;
  }
LAB_7102fdceac:
  *(int *)(param_1 + 0x107) = (int)uVar17;
  plVar14 = *(long **)(lVar21 + 0xd0);
  for (plVar5 = plVar14; plVar5 != *(long **)(lVar21 + 0xd8); plVar5 = plVar5 + 2) {
    if ((*(uint *)(plVar5 + 1) < 2) && (lVar15 = *plVar5, *(long *)(lVar15 + 0x68) == 0xd8b675d73))
    goto LAB_7102fdcef8;
  }
  lVar15 = 0;
LAB_7102fdcef8:
  uVar9 = (long)*(long **)(lVar21 + 0xd8) - (long)plVar14;
  if ((int)(uVar9 >> 4) == 0) {
    uVar17 = 0xffffffff;
  }
  else {
    uVar17 = 0;
    do {
      if (*plVar14 == lVar15) goto LAB_7102fdcf38;
      uVar17 = uVar17 + 1;
      plVar14 = plVar14 + 2;
    } while (uVar17 < (uVar9 >> 4 & 0xffffffff));
    uVar17 = 0xffffffff;
  }
LAB_7102fdcf38:
  *(int *)((long)param_1 + 0x83c) = (int)uVar17;
  plVar14 = *(long **)(lVar21 + 0xd0);
  for (plVar5 = plVar14; plVar5 != *(long **)(lVar21 + 0xd8); plVar5 = plVar5 + 2) {
    if ((*(uint *)(plVar5 + 1) < 2) && (lVar15 = *plVar5, *(long *)(lVar15 + 0x68) == 0xcd35aec41))
    goto LAB_7102fdcf84;
  }
  lVar15 = 0;
LAB_7102fdcf84:
  uVar9 = (long)*(long **)(lVar21 + 0xd8) - (long)plVar14;
  if ((int)(uVar9 >> 4) == 0) {
    uVar17 = 0xffffffff;
  }
  else {
    uVar17 = 0;
    do {
      if (*plVar14 == lVar15) goto LAB_7102fdcfc4;
      uVar17 = uVar17 + 1;
      plVar14 = plVar14 + 2;
    } while (uVar17 < (uVar9 >> 4 & 0xffffffff));
    uVar17 = 0xffffffff;
  }
LAB_7102fdcfc4:
  *(int *)(param_1 + 0x108) = (int)uVar17;
  plVar14 = *(long **)(lVar21 + 0xd0);
  for (plVar5 = plVar14; plVar5 != *(long **)(lVar21 + 0xd8); plVar5 = plVar5 + 2) {
    if ((*(uint *)(plVar5 + 1) < 2) && (lVar15 = *plVar5, *(long *)(lVar15 + 0x68) == 0xd1ca2e5a4))
    goto LAB_7102fdd010;
  }
  lVar15 = 0;
LAB_7102fdd010:
  uVar9 = (long)*(long **)(lVar21 + 0xd8) - (long)plVar14;
  if ((int)(uVar9 >> 4) == 0) {
    uVar17 = 0xffffffff;
  }
  else {
    uVar17 = 0;
    do {
      if (*plVar14 == lVar15) goto LAB_7102fdd050;
      uVar17 = uVar17 + 1;
      plVar14 = plVar14 + 2;
    } while (uVar17 < (uVar9 >> 4 & 0xffffffff));
    uVar17 = 0xffffffff;
  }
LAB_7102fdd050:
  *(int *)((long)param_1 + 0x844) = (int)uVar17;
  plVar14 = *(long **)(lVar21 + 0xd0);
  for (plVar5 = plVar14; plVar5 != *(long **)(lVar21 + 0xd8); plVar5 = plVar5 + 2) {
    if ((*(uint *)(plVar5 + 1) < 2) && (lVar15 = *plVar5, *(long *)(lVar15 + 0x68) == 0xb81671225))
    goto LAB_7102fdd09c;
  }
  lVar15 = 0;
LAB_7102fdd09c:
  uVar9 = (long)*(long **)(lVar21 + 0xd8) - (long)plVar14;
  if ((int)(uVar9 >> 4) == 0) {
    uVar17 = 0xffffffff;
  }
  else {
    uVar17 = 0;
    do {
      if (*plVar14 == lVar15) goto LAB_7102fdd0dc;
      uVar17 = uVar17 + 1;
      plVar14 = plVar14 + 2;
    } while (uVar17 < (uVar9 >> 4 & 0xffffffff));
    uVar17 = 0xffffffff;
  }
LAB_7102fdd0dc:
  *(int *)(param_1 + 0x109) = (int)uVar17;
  plVar14 = *(long **)(lVar21 + 0xd0);
  for (plVar5 = plVar14; plVar5 != *(long **)(lVar21 + 0xd8); plVar5 = plVar5 + 2) {
    if ((*(uint *)(plVar5 + 1) < 2) && (lVar15 = *plVar5, *(long *)(lVar15 + 0x68) == 0x1032ced3b7))
    goto LAB_7102fdd128;
  }
  lVar15 = 0;
LAB_7102fdd128:
  uVar9 = (long)*(long **)(lVar21 + 0xd8) - (long)plVar14;
  if ((int)(uVar9 >> 4) == 0) {
    uVar17 = 0xffffffff;
  }
  else {
    uVar17 = 0;
    do {
      if (*plVar14 == lVar15) goto LAB_7102fdd168;
      uVar17 = uVar17 + 1;
      plVar14 = plVar14 + 2;
    } while (uVar17 < (uVar9 >> 4 & 0xffffffff));
    uVar17 = 0xffffffff;
  }
LAB_7102fdd168:
  *(int *)((long)param_1 + 0x84c) = (int)uVar17;
  plVar14 = *(long **)(lVar21 + 0xd0);
  for (plVar5 = plVar14; plVar5 != *(long **)(lVar21 + 0xd8); plVar5 = plVar5 + 2) {
    if ((*(uint *)(plVar5 + 1) < 2) && (lVar15 = *plVar5, *(long *)(lVar15 + 0x68) == 0xffa5b3284))
    goto LAB_7102fdd1b4;
  }
  lVar15 = 0;
LAB_7102fdd1b4:
  uVar9 = (long)*(long **)(lVar21 + 0xd8) - (long)plVar14;
  if ((int)(uVar9 >> 4) == 0) {
    uVar17 = 0xffffffff;
  }
  else {
    uVar17 = 0;
    do {
      if (*plVar14 == lVar15) goto LAB_7102fdd1f4;
      uVar17 = uVar17 + 1;
      plVar14 = plVar14 + 2;
    } while (uVar17 < (uVar9 >> 4 & 0xffffffff));
    uVar17 = 0xffffffff;
  }
LAB_7102fdd1f4:
  *(int *)(param_1 + 0x10a) = (int)uVar17;
  plVar14 = *(long **)(lVar21 + 0xd0);
  for (plVar5 = plVar14; plVar5 != *(long **)(lVar21 + 0xd8); plVar5 = plVar5 + 2) {
    if ((*(uint *)(plVar5 + 1) < 2) && (lVar15 = *plVar5, *(long *)(lVar15 + 0x68) == 0xfa01b1932))
    goto LAB_7102fdd240;
  }
  lVar15 = 0;
LAB_7102fdd240:
  uVar9 = (long)*(long **)(lVar21 + 0xd8) - (long)plVar14;
  if ((int)(uVar9 >> 4) == 0) {
    uVar17 = 0xffffffff;
  }
  else {
    uVar17 = 0;
    do {
      if (*plVar14 == lVar15) goto LAB_7102fdd280;
      uVar17 = uVar17 + 1;
      plVar14 = plVar14 + 2;
    } while (uVar17 < (uVar9 >> 4 & 0xffffffff));
    uVar17 = 0xffffffff;
  }
LAB_7102fdd280:
  iVar4 = (int)uVar17;
  *(int *)((long)param_1 + 0x854) = iVar4;
  plVar14 = *(long **)(lVar21 + 0xd0);
  for (plVar5 = plVar14; plVar5 != *(long **)(lVar21 + 0xd8); plVar5 = plVar5 + 2) {
    if ((*(uint *)(plVar5 + 1) < 2) && (lVar15 = *plVar5, *(long *)(lVar15 + 0x68) == 0x10376a1783))
    goto LAB_7102fdd2cc;
  }
  lVar15 = 0;
LAB_7102fdd2cc:
  uVar9 = (long)*(long **)(lVar21 + 0xd8) - (long)plVar14;
  if ((int)(uVar9 >> 4) == 0) {
    uVar13 = 0xffffffff;
  }
  else {
    uVar18 = 0;
    uVar13 = 0xffffffff;
    do {
      if (*plVar14 == lVar15) {
        uVar13 = (uint)uVar18;
        break;
      }
      uVar18 = uVar18 + 1;
      plVar14 = plVar14 + 2;
    } while (uVar18 < (uVar9 >> 4 & 0xffffffff));
  }
  *(uint *)(param_1 + 0x10b) = uVar13;
  for (puVar20 = *(undefined8 **)(lVar21 + 0x100); puVar20 != *(undefined8 **)(lVar21 + 0x108);
      puVar20 = puVar20 + 2) {
    if ((*(int *)(puVar20 + 1) == 0) &&
       (pppplVar19 = (long ****)*puVar20, pppplVar19[1] == (long ***)0x12a5dce9d3)) {
      if (pppplVar19 != (long ****)0x0) {
        if (-1 < iVar4) {
          lVar21 = *(long *)(*(long *)(lVar21 + 0xd0) + (uVar17 & 0xffffffff) * 0x10);
          if (lVar21 == 0) {
            bVar8 = true;
          }
          else {
            FUN_71025eaba0(lVar21 + 0x60,pppplVar19,(long ****)param_3,(byte ****)param_4,
                           (long ****)param_5,param_6,(long ***)param_7,param_8);
            *(undefined1 *)(lVar21 + 0x110) = 0;
            FUN_71025e9d50((long *)(lVar21 + 0x108),extraout_x1_01,(long ****)param_3,
                           (byte ****)param_4,(long ****)param_5,param_6,param_7,param_8);
            if ((*(char *)(lVar21 + 0xe0) != '\0') && (*(long *)(lVar21 + 200) != 0)) {
              *(undefined2 *)(*(long *)(lVar21 + 200) + 0x30) = 0x101;
            }
            if (*(long *)(lVar21 + 0xd8) != 0) {
              *(undefined1 *)(*(long *)(lVar21 + 0xd8) + 0x21) = 1;
            }
            bVar8 = false;
            uVar7 = extraout_x1_02;
            if (*(char *)(lVar21 + 0xe0) != '\0') {
              bVar8 = false;
              *(undefined1 *)(*(long *)(lVar21 + 0xb0) + 0x10) = 0;
            }
          }
          fVar23 = *(float *)(param_1 + 0xf6);
          local_c0 = 0x3f800000;
          uStack_b8 = (ulong)(uint)(fVar23 * 0.0 + 0.0);
          local_b0 = 0x3f80000000000000;
          local_a8 = (ulong)(uint)(fVar23 * 0.0 + 0.0);
          local_a0 = 0;
          uStack_98 = (ulong)(uint)(fVar23 * 0.0 + 0.0001);
          local_88 = CONCAT44(0x3f800000,fVar23 + 0.0);
          local_90 = 0x4140000000000000;
          if (!bVar8) {
            (**(code **)(**(long **)(lVar21 + 0x90) + 0x148))(*(long **)(lVar21 + 0x90),&local_c0);
            lVar21 = *(long *)(lVar21 + 0xd8);
            uVar7 = extraout_x1_04;
            if (lVar21 != 0) {
              local_68 = local_a8;
              local_70 = local_b0;
              uStack_78 = uStack_b8;
              local_80 = local_c0;
              local_48 = local_88;
              local_50 = local_90;
              local_58 = uStack_98;
              local_60 = local_a0;
              if (*(char *)(*(long *)(lVar21 + 8) + 0xa8) != '\0') {
                plVar5 = *(long **)(*(long *)(lVar21 + 8) + 0x48);
                (**(code **)(*plVar5 + 0x20))(plVar5,&local_80);
                uVar7 = extraout_x1_05;
              }
              *(undefined1 *)(lVar21 + 0x20) = 1;
            }
          }
          uVar13 = *(uint *)(param_1 + 0x10b);
        }
        if ((int)uVar13 < 0) goto LAB_7102fdd838;
        lVar21 = *(long *)(*(long *)(param_1[0x62] + 0xd0) + (ulong)uVar13 * 0x10);
        if (lVar21 == 0) {
          bVar8 = true;
        }
        else {
          FUN_71025eaba0(lVar21 + 0x60,pppplVar19,(long ****)param_3,(byte ****)param_4,
                         (long ****)param_5,param_6,(long ***)param_7,param_8);
          *(undefined1 *)(lVar21 + 0x110) = 0;
          FUN_71025e9d50((long *)(lVar21 + 0x108),extraout_x1_06,(long ****)param_3,
                         (byte ****)param_4,(long ****)param_5,param_6,param_7,param_8);
          if ((*(char *)(lVar21 + 0xe0) != '\0') && (*(long *)(lVar21 + 200) != 0)) {
            *(undefined2 *)(*(long *)(lVar21 + 200) + 0x30) = 0x101;
          }
          if (*(long *)(lVar21 + 0xd8) != 0) {
            *(undefined1 *)(*(long *)(lVar21 + 0xd8) + 0x21) = 1;
          }
          bVar8 = false;
          uVar7 = extraout_x1_07;
          if (*(char *)(lVar21 + 0xe0) != '\0') {
            bVar8 = false;
            *(undefined1 *)(*(long *)(lVar21 + 0xb0) + 0x10) = 0;
          }
        }
        fVar23 = *(float *)(param_1 + 0xf6);
        local_c0 = 0x3f800000;
        uStack_b8 = (ulong)(uint)(fVar23 * 0.0 + 0.0);
        local_b0 = 0x3f80000000000000;
        local_a8 = (ulong)(uint)(fVar23 * 0.0 + 0.0);
        local_a0 = 0;
        uStack_98 = (ulong)(uint)(fVar23 * 0.0 + 0.0001);
        local_88 = CONCAT44(0x3f800000,fVar23 + 0.0);
        local_90 = 0x4140000000000000;
        if (bVar8) goto LAB_7102fdd838;
        (**(code **)(**(long **)(lVar21 + 0x90) + 0x148))(*(long **)(lVar21 + 0x90),&local_c0);
        lVar21 = *(long *)(lVar21 + 0xd8);
        uVar7 = extraout_x1_08;
        goto joined_r0x007102fdd604;
      }
      break;
    }
  }
  if (-1 < iVar4) {
    lVar21 = *(long *)(*(long *)(lVar21 + 0xd0) + (uVar17 & 0xffffffff) * 0x10);
    if (lVar21 == 0) {
      bVar8 = true;
    }
    else {
      *(undefined1 *)(lVar21 + 0x110) = 0;
      FUN_71025e9d50((long *)(lVar21 + 0x108),uVar7,(long ****)param_3,(byte ****)param_4,
                     (long ****)param_5,param_6,param_7,param_8);
      if ((*(char *)(lVar21 + 0xe0) != '\0') && (*(long *)(lVar21 + 200) != 0)) {
        *(undefined2 *)(*(long *)(lVar21 + 200) + 0x30) = 0x101;
      }
      if (*(long *)(lVar21 + 0xd8) != 0) {
        *(undefined1 *)(*(long *)(lVar21 + 0xd8) + 0x21) = 1;
      }
      bVar8 = false;
      uVar7 = extraout_x1_03;
      if (*(char *)(lVar21 + 0xe0) != '\0') {
        bVar8 = false;
        *(undefined1 *)(*(long *)(lVar21 + 0xb0) + 0x10) = 0;
      }
    }
    fVar23 = *(float *)(param_1 + 0xf6);
    local_c0 = 0x3f800000;
    uStack_b8 = (ulong)(uint)(fVar23 * 0.0 + 0.0);
    local_b0 = 0x3f80000000000000;
    local_a8 = (ulong)(uint)(fVar23 * 0.0 + 0.0);
    local_a0 = 0;
    uStack_98 = (ulong)(uint)(fVar23 * 0.0 + 0.0001);
    local_88 = CONCAT44(0x3f800000,fVar23 + 0.0);
    local_90 = 0x4140000000000000;
    if (!bVar8) {
      (**(code **)(**(long **)(lVar21 + 0x90) + 0x148))(*(long **)(lVar21 + 0x90),&local_c0);
      lVar21 = *(long *)(lVar21 + 0xd8);
      uVar7 = extraout_x1_09;
      if (lVar21 != 0) {
        local_68 = local_a8;
        local_70 = local_b0;
        uStack_78 = uStack_b8;
        local_80 = local_c0;
        local_48 = local_88;
        local_50 = local_90;
        local_58 = uStack_98;
        local_60 = local_a0;
        if (*(char *)(*(long *)(lVar21 + 8) + 0xa8) != '\0') {
          plVar5 = *(long **)(*(long *)(lVar21 + 8) + 0x48);
          (**(code **)(*plVar5 + 0x20))(plVar5,&local_80);
          uVar7 = extraout_x1_10;
        }
        *(undefined1 *)(lVar21 + 0x20) = 1;
      }
    }
    uVar13 = *(uint *)(param_1 + 0x10b);
  }
  if (-1 < (int)uVar13) {
    lVar21 = *(long *)(*(long *)(param_1[0x62] + 0xd0) + (ulong)uVar13 * 0x10);
    if (lVar21 == 0) {
      bVar8 = true;
    }
    else {
      *(undefined1 *)(lVar21 + 0x110) = 0;
      FUN_71025e9d50((long *)(lVar21 + 0x108),uVar7,(long ****)param_3,(byte ****)param_4,
                     (long ****)param_5,param_6,param_7,param_8);
      if ((*(char *)(lVar21 + 0xe0) != '\0') && (*(long *)(lVar21 + 200) != 0)) {
        *(undefined2 *)(*(long *)(lVar21 + 200) + 0x30) = 0x101;
      }
      if (*(long *)(lVar21 + 0xd8) != 0) {
        *(undefined1 *)(*(long *)(lVar21 + 0xd8) + 0x21) = 1;
      }
      bVar8 = false;
      uVar7 = extraout_x1_11;
      if (*(char *)(lVar21 + 0xe0) != '\0') {
        bVar8 = false;
        *(undefined1 *)(*(long *)(lVar21 + 0xb0) + 0x10) = 0;
      }
    }
    fVar23 = *(float *)(param_1 + 0xf6);
    local_c0 = 0x3f800000;
    uStack_b8 = (ulong)(uint)(fVar23 * 0.0 + 0.0);
    local_b0 = 0x3f80000000000000;
    local_a8 = (ulong)(uint)(fVar23 * 0.0 + 0.0);
    local_a0 = 0;
    uStack_98 = (ulong)(uint)(fVar23 * 0.0 + 0.0001);
    local_88 = CONCAT44(0x3f800000,fVar23 + 0.0);
    local_90 = 0x4140000000000000;
    if (!bVar8) {
      (**(code **)(**(long **)(lVar21 + 0x90) + 0x148))(*(long **)(lVar21 + 0x90),&local_c0);
      lVar21 = *(long *)(lVar21 + 0xd8);
      uVar7 = extraout_x1_12;
joined_r0x007102fdd604:
      if (lVar21 != 0) {
        local_68 = local_a8;
        local_70 = local_b0;
        local_48 = local_88;
        local_50 = local_90;
        local_58 = uStack_98;
        local_60 = local_a0;
        local_80 = local_c0;
        uStack_78 = uStack_b8;
        if (*(char *)(*(long *)(lVar21 + 8) + 0xa8) != '\0') {
          plVar5 = *(long **)(*(long *)(lVar21 + 8) + 0x48);
          (**(code **)(*plVar5 + 0x20))(plVar5,&local_80);
          uVar7 = extraout_x1_13;
        }
        *(undefined1 *)(lVar21 + 0x20) = 1;
      }
    }
  }
LAB_7102fdd838:
  if ((-1 < (int)*(uint *)((long)param_1 + 0x844)) &&
     (lVar21 = *(long *)(*(long *)(param_1[0x62] + 0xd0) +
                        (ulong)*(uint *)((long)param_1 + 0x844) * 0x10), lVar21 != 0)) {
    *(undefined1 *)(lVar21 + 0x110) = 0;
    FUN_71025e9d50((long *)(lVar21 + 0x108),uVar7,(long ****)param_3,(byte ****)param_4,
                   (long ****)param_5,param_6,param_7,param_8);
    uVar7 = extraout_x1_14;
  }
  if ((-1 < (int)*(uint *)(param_1 + 0x109)) &&
     (lVar21 = *(long *)(*(long *)(param_1[0x62] + 0xd0) + (ulong)*(uint *)(param_1 + 0x109) * 0x10)
     , lVar21 != 0)) {
    *(undefined1 *)(lVar21 + 0x110) = 0;
    FUN_71025e9d50((long *)(lVar21 + 0x108),uVar7,(long ****)param_3,(byte ****)param_4,
                   (long ****)param_5,param_6,param_7,param_8);
    if ((*(char *)(lVar21 + 0xe0) != '\0') && (*(long *)(lVar21 + 200) != 0)) {
      *(undefined2 *)(*(long *)(lVar21 + 200) + 0x30) = 0x101;
    }
    if (*(long *)(lVar21 + 0xd8) != 0) {
      *(undefined1 *)(*(long *)(lVar21 + 0xd8) + 0x21) = 1;
    }
    if (*(char *)(lVar21 + 0xe0) != '\0') {
      *(undefined1 *)(*(long *)(lVar21 + 0xb0) + 0x10) = 0;
    }
  }
  plVar12 = *(long **)(param_1[0x62] + 0xd8);
  plVar14 = *(long **)(param_1[0x62] + 0xd0);
  for (plVar5 = plVar14; plVar5 != plVar12; plVar5 = plVar5 + 2) {
    if ((*(uint *)(plVar5 + 1) < 2) && (lVar21 = *plVar5, *(long *)(lVar21 + 0x68) == 0x146ea2dc64))
    goto LAB_7102fdd90c;
  }
  lVar21 = 0;
LAB_7102fdd90c:
  uVar9 = (long)plVar12 - (long)plVar14;
  if ((int)(uVar9 >> 4) == 0) {
    uVar22 = 0xffffffff;
  }
  else {
    uVar17 = 0;
    uVar22 = 0xffffffff;
    do {
      if (*plVar14 == lVar21) {
        uVar22 = (undefined4)uVar17;
        break;
      }
      uVar17 = uVar17 + 1;
      plVar14 = plVar14 + 2;
    } while (uVar17 < (uVar9 >> 4 & 0xffffffff));
  }
  *(undefined4 *)(param_1 + 0xfe) = uVar22;
  puVar16 = (uint *)param_1[0x68];
  lVar21 = param_1[3];
  uVar13 = *puVar16 ^ *puVar16 << 0xb;
  *puVar16 = puVar16[1];
  uVar1 = puVar16[3];
  uVar13 = uVar13 ^ uVar13 >> 8 ^ uVar1 ^ uVar1 >> 0x13;
  puVar16[1] = puVar16[2];
  puVar16[2] = uVar1;
  puVar16[3] = uVar13;
  if ((char)lVar21 == '\0') {
    uStack_78 = CONCAT44(uStack_78._4_4_,2);
    local_80 = 0x100000000;
    puVar16 = (uint *)param_1[0x68];
    uVar1 = *puVar16 ^ *puVar16 << 0xb;
    *puVar16 = puVar16[1];
    uVar2 = puVar16[3];
    uVar1 = uVar1 ^ uVar1 >> 8 ^ uVar2 ^ uVar2 >> 0x13;
    puVar16[1] = puVar16[2];
    puVar16[2] = uVar2;
    puVar16[3] = uVar1;
    lVar21 = (ulong)(uVar1 % 3) * 4;
    local_80._0_4_ = *(uint *)((long)&local_80 + lVar21);
    local_80._4_4_ = 1;
    *(undefined4 *)((long)&local_80 + lVar21) = 0;
    uVar22 = local_80._4_4_;
    uVar9 = (ulong)&local_80 | 4;
    puVar16 = (uint *)param_1[0x68];
    uVar1 = *puVar16 ^ *puVar16 << 0xb;
    *puVar16 = puVar16[1];
    uVar2 = puVar16[3];
    uVar1 = uVar1 ^ uVar1 >> 8 ^ uVar2 ^ uVar2 >> 0x13;
    puVar16[1] = puVar16[2];
    puVar16[2] = uVar2;
    puVar16[3] = uVar1;
    lVar21 = (ulong)(uVar1 & 1) * 4;
    uVar3 = *(uint *)(uVar9 + lVar21);
    local_80 = CONCAT44(uVar3,(uint)local_80);
    *(undefined4 *)(uVar9 + lVar21) = uVar22;
    puVar16 = (uint *)param_1[0x68];
    uVar1 = *puVar16;
    *puVar16 = puVar16[1];
    uVar1 = uVar1 ^ uVar1 << 0xb;
    uVar2 = puVar16[3];
    puVar16[1] = puVar16[2];
    puVar16[2] = uVar2;
    uVar1 = uVar1 ^ uVar1 >> 8 ^ uVar2 ^ uVar2 >> 0x13;
    puVar16[3] = uVar1;
    *(uint *)((long)param_1 + (ulong)(uint)local_80 * 0x18 + 0x7f4) = uVar1 & 3;
    *(undefined4 *)(param_1 + (ulong)(uint)local_80 * 3 + 0xff) = 0;
    puVar16 = (uint *)param_1[0x68];
    uVar1 = *puVar16;
    *puVar16 = puVar16[1];
    uVar2 = puVar16[3];
    uVar1 = uVar1 ^ uVar1 << 0xb;
    uVar1 = uVar1 ^ uVar1 >> 8 ^ uVar2 ^ uVar2 >> 0x13;
    puVar16[1] = puVar16[2];
    puVar16[2] = uVar2;
    puVar16[3] = uVar1;
    *(uint *)((long)param_1 + (ulong)uVar3 * 0x18 + 0x7f4) = uVar1 & 3;
    *(undefined4 *)(param_1 + (ulong)uVar3 * 3 + 0xff) = 0;
    uVar9 = uStack_78 & 0xffffffff;
    if ((uVar13 & 1 | 2) == 2) {
      *(undefined4 *)((long)param_1 + uVar9 * 0x18 + 0x7f4) = 4;
      *(undefined4 *)(param_1 + uVar9 * 3 + 0xff) = *(undefined4 *)((long)param_1 + 0x75c);
    }
    else {
      puVar16 = (uint *)param_1[0x68];
      uVar13 = *puVar16;
      *puVar16 = puVar16[1];
      uVar1 = puVar16[3];
      uVar13 = uVar13 ^ uVar13 << 0xb;
      uVar13 = uVar13 ^ uVar13 >> 8 ^ uVar1 ^ uVar1 >> 0x13;
      puVar16[1] = puVar16[2];
      puVar16[2] = uVar1;
      puVar16[3] = uVar13;
      *(uint *)((long)param_1 + uVar9 * 0x18 + 0x7f4) = uVar13 & 3;
      *(undefined4 *)(param_1 + uVar9 * 3 + 0xff) = 0;
    }
  }
  else {
    *(uint *)((long)param_1 + 0x7f4) = uVar13 & 3;
    puVar16 = (uint *)param_1[0x68];
    *(undefined4 *)(param_1 + 0xff) = 0;
    uVar13 = *puVar16 ^ *puVar16 << 0xb;
    *puVar16 = puVar16[1];
    uVar1 = puVar16[3];
    uVar13 = uVar13 ^ uVar13 >> 8 ^ uVar1 ^ uVar1 >> 0x13;
    puVar16[1] = puVar16[2];
    puVar16[2] = uVar1;
    puVar16[3] = uVar13;
    *(uint *)((long)param_1 + 0x80c) = uVar13 & 3;
    puVar16 = (uint *)param_1[0x68];
    *(undefined4 *)(param_1 + 0x102) = 0;
    uVar13 = *puVar16;
    *puVar16 = puVar16[1];
    uVar1 = puVar16[3];
    uVar13 = uVar13 ^ uVar13 << 0xb;
    uVar13 = uVar13 ^ uVar13 >> 8 ^ uVar1 ^ uVar1 >> 0x13;
    puVar16[1] = puVar16[2];
    puVar16[2] = uVar1;
    puVar16[3] = uVar13;
    *(uint *)((long)param_1 + 0x824) = uVar13 & 3;
    *(undefined4 *)(param_1 + 0x105) = 0;
  }
  uVar22 = NEON_ucvtf(*(undefined4 *)((long)param_1 + 0x764));
  *(undefined4 *)(param_1 + 0x115) = 3;
  *(undefined4 *)((long)param_1 + 0x8ac) = uVar22;
  if (((char)param_1[0x19] != '\0') &&
     (plVar5 = *(long **)(param_1[0x62] + 0x118), plVar5 != (long *)0x0)) {
    if (*(uint *)((long)param_1 + 0x7f4) < 4) {
      local_80 = CONCAT44(*(undefined4 *)
                           (&DAT_710455c2e8 + (ulong)*(uint *)((long)param_1 + 0x7f4) * 4),
                          0x428c0000);
      param_3 = (char *)&local_80;
      uStack_78 = 0;
      FUN_710261f570(plVar5,(byte *)"WiiFit_board",(undefined1 (*) [16])param_3);
      if (*(char *)(*plVar5 + 0x80) != '\0') {
        plVar14 = *(long **)(*plVar5 + 0x30);
        pcVar10 = *(code **)(*plVar14 + 0x180);
        param_3 = (char *)0x1;
LAB_7102fddc54:
        (*pcVar10)(plVar14,0xcb63af8ed);
      }
    }
    else if (*(char *)(*plVar5 + 0x80) != '\0') {
      plVar14 = *(long **)(*plVar5 + 0x30);
      pcVar10 = *(code **)(*plVar14 + 0x180);
      param_3 = (char *)0x0;
      goto LAB_7102fddc54;
    }
    if (*(uint *)((long)param_1 + 0x80c) < 4) {
      local_80 = (ulong)*(uint *)(&DAT_710455c2e8 + (ulong)*(uint *)((long)param_1 + 0x80c) * 4) <<
                 0x20;
      param_3 = (char *)&local_80;
      uStack_78 = 0;
      FUN_710261f570(plVar5,(byte *)"WiiFit_board1",(undefined1 (*) [16])param_3);
      if (*(char *)(*plVar5 + 0x80) != '\0') {
        plVar14 = *(long **)(*plVar5 + 0x30);
        pcVar10 = *(code **)(*plVar14 + 0x180);
        param_3 = (char *)0x1;
LAB_7102fddce4:
        (*pcVar10)(plVar14,0xd5dd14b8a);
      }
    }
    else if (*(char *)(*plVar5 + 0x80) != '\0') {
      plVar14 = *(long **)(*plVar5 + 0x30);
      pcVar10 = *(code **)(*plVar14 + 0x180);
      param_3 = (char *)0x0;
      goto LAB_7102fddce4;
    }
    if (*(uint *)((long)param_1 + 0x824) < 4) {
      local_80 = CONCAT44(*(undefined4 *)
                           (&DAT_710455c2e8 + (ulong)*(uint *)((long)param_1 + 0x824) * 4),
                          0xc28c0000);
      param_3 = (char *)&local_80;
      uStack_78 = 0;
      FUN_710261f570(plVar5,(byte *)"WiiFit_board2",(undefined1 (*) [16])param_3);
      if (*(char *)(*plVar5 + 0x80) != '\0') {
        plVar5 = *(long **)(*plVar5 + 0x30);
        pcVar10 = *(code **)(*plVar5 + 0x180);
        param_3 = (char *)0x1;
LAB_7102fddd84:
        (*pcVar10)(plVar5,0xdc4d81a30);
      }
    }
    else if (*(char *)(*plVar5 + 0x80) != '\0') {
      plVar5 = *(long **)(*plVar5 + 0x30);
      pcVar10 = *(code **)(*plVar5 + 0x180);
      param_3 = (char *)0x0;
      goto LAB_7102fddd84;
    }
  }
  *(undefined4 *)(param_1 + 0x116) = 1;
  local_80 = 0;
  if (*(long *)(*(long *)param_1[0x67] + 8) == 0) {
    uVar22 = 0xffffffff;
  }
  else {
    param_3 = (char *)0x0;
    uVar22 = FUN_7102405040(*(long *)(*(long *)param_1[0x67] + 8),&local_80,0,(byte ****)param_4,
                            (long ****)param_5,param_6,param_7,param_8);
  }
  *(undefined4 *)(param_1 + 0x119) = uVar22;
  lVar21 = param_1[0x62];
  *(undefined4 *)((long)param_1 + 0x8bc) = 0;
  plVar5 = *(long **)(lVar21 + 0xd0);
  uVar9 = (long)*(long **)(lVar21 + 0xd8) - (long)plVar5;
  for (; plVar5 != *(long **)(lVar21 + 0xd8); plVar5 = plVar5 + 2) {
    if ((*(uint *)(plVar5 + 1) < 2) && (*(long *)(*plVar5 + 0x68) == 0x146ea2dc64)) {
      FUN_710262fb80(lVar21,plVar5,(long *********)param_3,(byte ****)param_4,(long ****)param_5,
                     param_6,(long ***)param_7,param_8);
      lVar21 = param_1[0x62];
      break;
    }
  }
  iVar4 = (int)(uVar9 >> 4);
  *(int *)(param_1 + 0x101) = iVar4;
  for (plVar5 = *(long **)(lVar21 + 0xd0); plVar5 != *(long **)(lVar21 + 0xd8); plVar5 = plVar5 + 2)
  {
    if ((*(uint *)(plVar5 + 1) < 2) && (*(long *)(*plVar5 + 0x68) == 0x146ea2dc64)) {
      FUN_710262fb80(lVar21,plVar5,(long *********)param_3,(byte ****)param_4,(long ****)param_5,
                     param_6,(long ***)param_7,param_8);
      break;
    }
  }
  *(int *)(param_1 + 0x104) = iVar4 + 1;
  plVar5 = (long *)**(long **)(param_1[0x60] + 0x18);
  do {
    if (plVar5 == (long *)(*(long **)(param_1[0x60] + 0x18))[1]) goto LAB_7102fdded4;
    lVar21 = *plVar5;
    plVar5 = plVar5 + 1;
  } while ((*(ulong *)(lVar21 + 0xa0) & 0xffffffffff) != 0x7b569df99);
  if ((lVar21 != 0) && (puVar20 = *(undefined8 **)(lVar21 + 0x130), puVar20 != (undefined8 *)0x0)) {
    if (((DAT_71053144d8 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_71053144d8), iVar4 != 0)) {
      FUN_7101764000();
      FUN_71000001c0();
      __cxa_guard_release(&DAT_71053144d8);
    }
    param_3 = "IPP0002";
    if (DAT_71052c51ba == '\0') {
      FUN_71025f55b0((undefined8 *)*puVar20,(undefined8 *)puVar20[1],"IPP0002");
    }
    else {
      FUN_71025f5420((undefined8 *)*puVar20,(undefined8 *)puVar20[1],"IPP0002");
    }
  }
LAB_7102fdded4:
  uVar7 = *(undefined8 *)(param_1[0x61] + 0xf8);
  uVar22 = *(undefined4 *)(param_1[0x61] + 0x100);
  puVar6 = (undefined4 *)
           FUN_710392e290(0x10,0x24,(long ****)param_3,(byte ****)param_4,(long ****)param_5,param_6
                          ,param_7,param_8);
  if (puVar6 == (undefined4 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_c0 = local_c0 & 0xffffffff00000000;
      local_80 = 0x24;
      param_3 = (char *)&local_80;
      uVar9 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_c0);
      if (((uVar9 & 1) != 0) &&
         (puVar6 = (undefined4 *)
                   FUN_710392e290(0x10,0x24,(long ****)param_3,(byte ****)param_4,(long ****)param_5
                                  ,param_6,param_7,param_8), puVar6 != (undefined4 *)0x0))
      goto LAB_7102fddf3c;
    }
    puVar6 = (undefined4 *)0x0;
  }
LAB_7102fddf3c:
  *(undefined8 *)(puVar6 + 7) = 0;
  *(undefined8 *)(puVar6 + 5) = 0;
  *(undefined8 *)(puVar6 + 3) = 0;
  *(undefined8 *)(puVar6 + 1) = 0;
  uStack_78._4_4_ = 0xc1800000;
  uStack_78._0_4_ = uVar22;
  local_80 = uVar7;
  FUN_710318b620(puVar6,&local_80,(long ****)param_3,(byte ****)param_4,(long ****)param_5,param_6,
                 param_7,param_8);
  uVar9 = param_1[0x11e];
  param_1[0x11e] = (long)puVar6;
  if (uVar9 != 0) {
    FUN_710318b9b0(uVar9,extraout_x1_15,(long ****)param_3,(byte ****)param_4,(long ****)param_5,
                   param_6,param_7,param_8);
    FUN_710392eb40(uVar9);
  }
  return;
}

