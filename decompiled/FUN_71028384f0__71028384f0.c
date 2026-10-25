// addr:      71028384f0
// offset:    0x28384f0
// name:      FUN_71028384f0
// mangled:   
// signature: undefined __cdecl FUN_71028384f0(float param_1, int * param_2, undefined8 param_3, long * * * * param_4, byte * * * * param_5, long * * * * param_6, undefined8 param_7, undefined8 param_8, undefined8 param_9)


void FUN_71028384f0(float param_1,int *param_2,undefined8 param_3,long ****param_4,byte ****param_5,
                   long ****param_6,undefined8 param_7,undefined8 param_8,undefined8 param_9)

{
  byte *pbVar1;
  undefined8 *puVar2;
  byte *pbVar3;
  char cVar4;
  undefined1 auVar5 [16];
  bool bVar6;
  bool bVar7;
  uint uVar8;
  uint uVar9;
  long lVar10;
  float *pfVar11;
  undefined8 *puVar12;
  long *plVar13;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 extraout_x1_02;
  undefined8 extraout_x1_03;
  undefined8 extraout_x1_04;
  long extraout_x1_05;
  long extraout_x1_06;
  undefined8 uVar14;
  byte *pbVar15;
  int *piVar16;
  long *plVar17;
  code *pcVar18;
  long *plVar19;
  int iVar20;
  long lVar21;
  undefined8 *puVar22;
  long lVar23;
  uint *puVar24;
  char *pcVar25;
  undefined1 *puVar26;
  float fVar27;
  int iVar28;
  undefined4 uVar29;
  undefined4 uVar30;
  float fVar31;
  undefined1 auVar32 [16];
  long **pplVar33;
  float fVar34;
  undefined8 uVar35;
  undefined8 uVar36;
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
  long **local_130;
  long *plStack_128;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  long **local_100;
  long *plStack_f8;
  long local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  long **local_c0;
  long *plStack_b8;
  long local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  
  if (param_2[1] != 1) {
    if (param_2[1] == 0) {
      if ((char)param_2[5] == '\0') {
        if (*(char *)((long)param_2 + 0x15) != '\0') {
          *(undefined1 *)((long)param_2 + 0x15) = 0;
        }
      }
      else {
        fVar27 = (float)param_2[4];
        param_2[4] = (int)(fVar27 - param_1);
        if (fVar27 - param_1 < 0.0) {
          param_2[4] = 0;
          *(undefined2 *)(param_2 + 5) = 0x100;
        }
      }
      if (((float)param_2[4] == 0.0) && (*param_2 != 1)) {
        iVar20 = *(int *)(&DAT_7104470490 + (long)param_2[2] * 4);
        plVar13 = *(long **)(param_2 + (long)iVar20 * 6 + 0x2a);
        for (plVar17 = *(long **)(param_2 + (long)iVar20 * 6 + 0x28); plVar17 != plVar13;
            plVar17 = plVar17 + 1) {
          pcVar25 = (char *)*plVar17;
          if (*pcVar25 == '\0') {
            if (*(long *)(pcVar25 + 0x28) != 0) {
              FUN_710260fdd0(0,*(long *)(pcVar25 + 0x28),1);
              lVar10 = *(long *)(pcVar25 + 0x28);
              if (lVar10 != 0) {
                if ((*(char *)(lVar10 + 0xe0) != '\0') && (*(long *)(lVar10 + 200) != 0)) {
                  *(undefined2 *)(*(long *)(lVar10 + 200) + 0x30) = 0;
                }
                if (*(long *)(lVar10 + 0xd8) != 0) {
                  *(undefined1 *)(*(long *)(lVar10 + 0xd8) + 0x21) = 0;
                }
                if (*(char *)(lVar10 + 0xe0) != '\0') {
                  *(undefined1 *)(*(long *)(lVar10 + 0xb0) + 0x10) = 1;
                }
                lVar10 = *(long *)(pcVar25 + 0x28);
                if (lVar10 != 0) {
                  *(undefined1 *)(lVar10 + 0x110) = 1;
                  FUN_71025e9d50((long *)(lVar10 + 0x108),extraout_x1,param_4,param_5,param_6,
                                 param_7,param_8,param_9);
                }
              }
            }
            *pcVar25 = '\x01';
            lVar10 = *(long *)(*plVar17 + 0x28);
          }
          else {
            lVar10 = *(long *)(pcVar25 + 0x28);
          }
          if (lVar10 != 0) {
            FUN_710260fdd0(0,lVar10,1);
          }
        }
        lVar10 = *(long *)(param_2 + 0x3a);
        *(undefined1 *)(lVar10 + 0x58) = 1;
        *(int *)(lVar10 + 0x5c) = iVar20;
        *(undefined4 *)(lVar10 + 0x60) = 0;
        lVar23 = *(long *)(**(long **)(param_2 + 0x3c) + 0x318);
        lVar10 = *(long *)(lVar23 + 0x10);
        if (iVar20 == 2) {
          FUN_7102633a10(lVar23,(long *********)"chara_Light_Dark",0,param_5,param_6,param_7,param_8
                         ,param_9);
          uVar14 = 0;
          FUN_7102633b90(lVar23,(long *********)"stage_Light_Dark",0,param_5,param_6,param_7,param_8
                         ,param_9);
          FUN_7102633800(lVar23,(long *********)"reflection_cubemap_Light_Dark",uVar14,param_5,
                         param_6,param_7,param_8,param_9);
          FUN_71025f74f0(60.0,lVar10,(byte *)"light_light_dark");
          piVar16 = *(int **)(param_2 + 0x3e);
          lVar10 = 3;
          *piVar16 = 3;
        }
        else if (iVar20 == 1) {
          FUN_7102633a10(lVar23,(long *********)"chara_Median_Light",0,param_5,param_6,param_7,
                         param_8,param_9);
          uVar14 = 0;
          FUN_7102633b90(lVar23,(long *********)"stage_Median_Light",0,param_5,param_6,param_7,
                         param_8,param_9);
          FUN_7102633800(lVar23,(long *********)"reflection_cubemap_Median_Light",uVar14,param_5,
                         param_6,param_7,param_8,param_9);
          FUN_71025f74f0(60.0,lVar10,(byte *)"light_median_light");
          piVar16 = *(int **)(param_2 + 0x3e);
          lVar10 = 1;
          *piVar16 = 1;
        }
        else if (iVar20 == 0) {
          FUN_7102633a10(lVar23,(long *********)"chara_Dark_Median",0,param_5,param_6,param_7,
                         param_8,param_9);
          uVar14 = 0;
          FUN_7102633b90(lVar23,(long *********)"stage_Dark_Median",0,param_5,param_6,param_7,
                         param_8,param_9);
          FUN_7102633800(lVar23,(long *********)"reflection_cubemap_Dark_Median",uVar14,param_5,
                         param_6,param_7,param_8,param_9);
          FUN_71025f74f0(60.0,lVar10,(byte *)"light_dark_median");
          piVar16 = *(int **)(param_2 + 0x3e);
          lVar10 = 5;
          *piVar16 = 5;
        }
        else {
          piVar16 = *(int **)(param_2 + 0x3e);
          lVar10 = (long)*piVar16;
        }
        piVar16[1] = 0x42700000;
        piVar16[2] = 0x42700000;
        *(undefined2 *)(piVar16 + 3) = 1;
        pfVar11 = *(float **)(piVar16 + lVar10 * 2 + 6);
        *pfVar11 = 0.0;
        FUN_7102839770(pfVar11);
        plVar17 = *(long **)(param_2 + 0x40);
        if (iVar20 == 0) {
          plVar17 = *(long **)(**(long **)(*plVar17 + 0x338) + 8);
          if (plVar17 != (long *)0x0) {
            (**(code **)(*plVar17 + 0x58))(plVar17,5,0xffffffff);
          }
          iVar28 = *(int *)(*(long *)(param_2 + 0xe) + 0x138);
          param_2[6] = iVar28;
          param_2[7] = iVar28;
          *(undefined2 *)(param_2 + 8) = 1;
          iVar28 = *(int *)(*(long *)(param_2 + 0xe) + 0x13c);
        }
        else if (iVar20 == 2) {
          plVar17 = *(long **)(**(long **)(*plVar17 + 0x338) + 8);
          if (plVar17 != (long *)0x0) {
            (**(code **)(*plVar17 + 0x58))(plVar17,4,0xffffffff);
          }
          iVar28 = *(int *)(*(long *)(param_2 + 0xe) + 0xb0);
          param_2[6] = iVar28;
          param_2[7] = iVar28;
          *(undefined2 *)(param_2 + 8) = 1;
          iVar28 = *(int *)(*(long *)(param_2 + 0xe) + 0xb4);
        }
        else if (iVar20 == 1) {
          plVar17 = *(long **)(**(long **)(*plVar17 + 0x338) + 8);
          if (plVar17 != (long *)0x0) {
            (**(code **)(*plVar17 + 0x58))(plVar17,3,0xffffffff);
          }
          iVar28 = *(int *)(*(long *)(param_2 + 0xe) + 0x40);
          param_2[6] = iVar28;
          param_2[7] = iVar28;
          *(undefined2 *)(param_2 + 8) = 1;
          iVar28 = *(int *)(*(long *)(param_2 + 0xe) + 0x44);
        }
        else {
          iVar28 = 0;
          param_2[6] = 0;
          param_2[7] = 0;
          *(undefined2 *)(param_2 + 8) = 1;
        }
        param_2[9] = iVar28;
        param_2[10] = iVar28;
        param_2[0xc] = 0;
        *(undefined2 *)(param_2 + 0xb) = 1;
        param_2[1] = 1;
        param_2[2] = iVar20;
      }
    }
    goto LAB_7102838d48;
  }
  if ((char)param_2[8] == '\0') {
    if (*(char *)((long)param_2 + 0x21) != '\0') {
      *(undefined1 *)((long)param_2 + 0x21) = 0;
    }
  }
  else {
    fVar27 = (float)param_2[7];
    param_2[7] = (int)(fVar27 - param_1);
    if (fVar27 - param_1 < 0.0) {
      param_2[7] = 0;
      *(undefined2 *)(param_2 + 8) = 0x100;
    }
  }
  if (((float)param_2[7] == 0.0) && (*(char *)((long)param_2 + 0x21) != '\0')) {
    lVar10 = (long)*(int *)(&DAT_7104552618 + (long)param_2[2] * 4);
    puVar2 = *(undefined8 **)(param_2 + lVar10 * 6 + 0x18);
    for (puVar22 = *(undefined8 **)(param_2 + lVar10 * 6 + 0x16); puVar22 != puVar2;
        puVar22 = puVar22 + 1) {
      puVar26 = (undefined1 *)*puVar22;
      lVar23 = *(long *)(puVar26 + 0x28);
      if (lVar23 != 0) {
        *(undefined1 *)(lVar23 + 0x110) = 0;
        FUN_71025e9d50((long *)(lVar23 + 0x108),param_3,param_4,param_5,param_6,param_7,param_8,
                       param_9);
        lVar23 = *(long *)(puVar26 + 0x28);
        param_3 = extraout_x1_00;
        if (lVar23 != 0) {
          if ((*(char *)(lVar23 + 0xe0) != '\0') && (*(long *)(lVar23 + 200) != 0)) {
            *(undefined2 *)(*(long *)(lVar23 + 200) + 0x30) = 0x101;
          }
          if (*(long *)(lVar23 + 0xd8) != 0) {
            *(undefined1 *)(*(long *)(lVar23 + 0xd8) + 0x21) = 1;
          }
          if (*(char *)(lVar23 + 0xe0) != '\0') {
            *(undefined1 *)(*(long *)(lVar23 + 0xb0) + 0x10) = 0;
          }
        }
      }
      *puVar26 = 0;
    }
    lVar10 = *(long *)(*(long *)(param_2 + 0x3a) + lVar10 * 0x18 + 0x20);
    if ((lVar10 != 0) && (*(char *)(lVar10 + 0x35) != '\0')) {
      uVar9 = *(uint *)(lVar10 + 0x3c);
      lVar10 = *lib::Singleton<lib::EffectManager>::instance_;
      std::mutex::lock();
      if ((0 < (int)uVar9) &&
         (lVar10 = lVar10 + (ulong)(uVar9 >> 0x18) * 0x300,
         lVar10 != 0 && *(uint *)(lVar10 + 4) == uVar9)) {
        param_4 = (long ****)0x0;
        param_5 = (byte ****)0x0;
        FUN_71035707d0(lVar10,0,(long ****)0x0,0,param_6,param_7,param_8,param_9);
      }
      std::mutex::unlock();
      param_3 = extraout_x1_01;
    }
  }
  if ((char)param_2[0xb] == '\0') {
    if (*(char *)((long)param_2 + 0x2d) != '\0') {
      *(undefined1 *)((long)param_2 + 0x2d) = 0;
    }
  }
  else {
    fVar27 = (float)param_2[10];
    param_2[10] = (int)(fVar27 - param_1);
    if (fVar27 - param_1 < 0.0) {
      param_2[10] = 0;
      *(undefined2 *)(param_2 + 0xb) = 0x100;
    }
  }
  fVar27 = (float)param_2[10];
  if (fVar27 == 0.0) {
    if (*(char *)((long)param_2 + 0x2d) == '\0') {
      param_2[0xc] = (int)((float)param_2[0xc] + param_1);
    }
    else {
      iVar20 = param_2[2];
      plVar13 = *(long **)(param_2 + (long)iVar20 * 6 + 0x18);
      for (plVar17 = *(long **)(param_2 + (long)iVar20 * 6 + 0x16); plVar17 != plVar13;
          plVar17 = plVar17 + 1) {
        FUN_71028367e0(0,(char *)*plVar17,1,param_4,param_5,param_6,param_7,param_8,param_9);
        if (*(long *)(*plVar17 + 0x28) != 0) {
          FUN_710260fdd0(0,*(long *)(*plVar17 + 0x28),1);
        }
      }
      FUN_7102837f80(*(long **)(param_2 + 0x3a),iVar20,param_4,param_5,param_6,param_7,param_8,
                     param_9);
      fVar27 = (float)param_2[10];
      param_3 = extraout_x1_02;
    }
  }
  bVar6 = (float)param_2[7] == 0.0 && fVar27 == 0.0;
  plVar13 = *(long **)(param_2 + (long)param_2[2] * 6 + 0x2a);
  for (plVar17 = *(long **)(param_2 + (long)param_2[2] * 6 + 0x28); plVar17 != plVar13;
      plVar17 = plVar17 + 1) {
    if (*(long *)(*plVar17 + 0x28) == 0) {
      bVar7 = true;
    }
    else {
      bVar7 = FUN_710260ffb0(*(long *)(*plVar17 + 0x28));
      param_3 = extraout_x1_03;
    }
    bVar6 = (bool)(bVar6 & bVar7);
  }
  if (bVar6 == false) goto LAB_7102838d48;
  puVar2 = *(undefined8 **)(param_2 + (long)param_2[2] * 6 + 0x2a);
  for (puVar22 = *(undefined8 **)(param_2 + (long)param_2[2] * 6 + 0x28); puVar22 != puVar2;
      puVar22 = puVar22 + 1) {
    puVar26 = (undefined1 *)*puVar22;
    lVar10 = *(long *)(puVar26 + 0x28);
    if (lVar10 != 0) {
      *(undefined1 *)(lVar10 + 0x110) = 0;
      FUN_71025e9d50((long *)(lVar10 + 0x108),param_3,param_4,param_5,param_6,param_7,param_8,
                     param_9);
      lVar10 = *(long *)(puVar26 + 0x28);
      param_3 = extraout_x1_04;
      if (lVar10 != 0) {
        if ((*(char *)(lVar10 + 0xe0) != '\0') && (*(long *)(lVar10 + 200) != 0)) {
          *(undefined2 *)(*(long *)(lVar10 + 200) + 0x30) = 0x101;
        }
        if (*(long *)(lVar10 + 0xd8) != 0) {
          *(undefined1 *)(*(long *)(lVar10 + 0xd8) + 0x21) = 1;
        }
        if (*(char *)(lVar10 + 0xe0) != '\0') {
          *(undefined1 *)(*(long *)(lVar10 + 0xb0) + 0x10) = 0;
        }
      }
    }
    *puVar26 = 0;
  }
  *(undefined1 *)(*(long *)(param_2 + 0x3a) + 0x58) = 0;
  FUN_7102838140(*(long *)(**(long **)(param_2 + 0x3c) + 0x318),param_2[2],(ulong)(*param_2 == 1),
                 param_5,param_6,param_7,param_8,param_9);
  piVar16 = *(int **)(param_2 + 0x3e);
  iVar20 = *piVar16;
  if (iVar20 == 1) {
    iVar20 = 2;
    lVar10 = 2;
LAB_7102838b7c:
    *piVar16 = iVar20;
    piVar16[1] = 0x42700000;
    piVar16[2] = 0x42700000;
    *(undefined2 *)(piVar16 + 3) = 1;
    pfVar11 = *(float **)(piVar16 + lVar10 * 2 + 6);
    *pfVar11 = 0.0;
    FUN_7102839770(pfVar11);
  }
  else {
    if (iVar20 == 5) {
      iVar20 = 0;
      lVar10 = 0;
      goto LAB_7102838b7c;
    }
    if (iVar20 == 3) {
      iVar20 = 4;
      lVar10 = 4;
      goto LAB_7102838b7c;
    }
  }
  plVar17 = *(long **)(param_2 + 0x40);
  iVar20 = param_2[2];
  if (iVar20 == 0) {
    plVar17 = *(long **)(**(long **)(*plVar17 + 0x338) + 8);
    if (plVar17 != (long *)0x0) {
      pcVar18 = *(code **)(*plVar17 + 0x58);
      uVar14 = 2;
LAB_7102838ce4:
      (*pcVar18)(plVar17,uVar14,0xffffffff);
    }
LAB_7102838ce8:
    param_2[1] = 0;
    if (2 < (uint)param_2[2]) goto LAB_7102838d18;
    fVar27 = (float)*(int *)(*(long *)(param_2 + 0xe) +
                            *(long *)(&DAT_7104552600 + (long)param_2[2] * 8));
  }
  else {
    if (iVar20 == 1) {
      plVar17 = *(long **)(**(long **)(*plVar17 + 0x338) + 8);
      if (plVar17 != (long *)0x0) {
        pcVar18 = *(code **)(*plVar17 + 0x58);
        uVar14 = 0;
        goto LAB_7102838ce4;
      }
      goto LAB_7102838ce8;
    }
    if (iVar20 == 2) {
      plVar17 = *(long **)(**(long **)(*plVar17 + 0x338) + 8);
      if (plVar17 != (long *)0x0) {
        pcVar18 = *(code **)(*plVar17 + 0x58);
        uVar14 = 1;
        goto LAB_7102838ce4;
      }
      goto LAB_7102838ce8;
    }
    param_2[1] = 0;
LAB_7102838d18:
    fVar27 = 0.0;
  }
  *(undefined2 *)(param_2 + 5) = 1;
  param_2[3] = (int)fVar27;
  param_2[4] = (int)(fVar27 - (float)param_2[0xc]);
  if (fVar27 - (float)param_2[0xc] < 0.0) {
    param_2[4] = 0;
    *(undefined2 *)(param_2 + 5) = 0x100;
  }
  param_2[0xc] = 0;
LAB_7102838d48:
  puVar22 = *(undefined8 **)(param_2 + 0x10);
  puVar2 = *(undefined8 **)(param_2 + 0x12);
  if (puVar22 != puVar2) {
    uStack_108 = 0x3f80000000000000;
    local_110 = 0;
    uStack_118 = 0x3f800000;
    plStack_128 = (long *)0x0;
    local_130 = (long **)&DAT_3f800000;
    do {
      pcVar25 = (char *)*puVar22;
      if ((*pcVar25 != '\0') && (lVar10 = *(long *)(pcVar25 + 0x28), lVar10 != 0)) {
        if (*(long *)(pcVar25 + 0x98) != 0) {
          auVar32 = ZEXT816(0x3f80000000000000);
          uVar29 = 0;
          uVar30 = 0;
          lVar10 = *(long *)(*(long *)(pcVar25 + 0x98) + 0x28);
          uVar14 = uStack_118;
          pplVar33 = local_130;
          plVar17 = plStack_128;
          uVar35 = local_110;
          uVar36 = uStack_108;
          if (lVar10 != 0) {
            if (*(long *)(lVar10 + 0xd8) == 0) {
LAB_7102838e00:
              puVar12 = (undefined8 *)(**(code **)(**(long **)(lVar10 + 0x90) + 0x158))();
            }
            else {
              uVar9 = *(uint *)(pcVar25 + 0xa0);
              uVar8 = (**(code **)(**(long **)(*(long *)(*(long *)(lVar10 + 0xd8) + 8) + 8) + 0x10))
                                ();
              if (uVar8 <= uVar9) goto LAB_7102838e00;
              plVar17 = *(long **)(*(long *)(*(long *)(lVar10 + 0xd8) + 8) + 0x48);
              (**(code **)(*plVar17 + 0x38))(plVar17,0);
              puVar12 = (undefined8 *)(extraout_x1_05 + (ulong)uVar9 * 0x40);
            }
            uVar14 = puVar12[5];
            uVar29 = (undefined4)puVar12[4];
            uVar30 = (undefined4)((ulong)puVar12[4] >> 0x20);
            plVar17 = (long *)puVar12[1];
            pplVar33 = (long **)*puVar12;
            auVar32 = *(undefined1 (*) [16])(puVar12 + 2);
            uVar36 = puVar12[7];
            uVar35 = puVar12[6];
          }
          local_e8 = auVar32._8_8_;
          local_f0 = auVar32._0_8_;
          local_e0 = CONCAT44(uVar30,uVar29);
          lVar10 = *(long *)(pcVar25 + 0x28);
          local_100 = pplVar33;
          plStack_f8 = plVar17;
          uStack_d8 = uVar14;
          local_d0 = uVar35;
          local_c8 = uVar36;
          if (lVar10 != 0) {
            (**(code **)(**(long **)(lVar10 + 0x90) + 0x148))(*(long **)(lVar10 + 0x90),&local_100);
            lVar10 = *(long *)(lVar10 + 0xd8);
            if (lVar10 != 0) {
              local_a8 = local_e8;
              local_b0 = local_f0;
              plStack_b8 = plStack_f8;
              local_c0 = local_100;
              local_88 = local_c8;
              local_90 = local_d0;
              local_98 = uStack_d8;
              local_a0 = local_e0;
              if (*(char *)(*(long *)(lVar10 + 8) + 0xa8) != '\0') {
                plVar17 = *(long **)(*(long *)(lVar10 + 8) + 0x48);
                (**(code **)(*plVar17 + 0x20))(plVar17,&local_c0);
              }
              *(undefined1 *)(lVar10 + 0x20) = 1;
            }
          }
          lVar10 = *(long *)(pcVar25 + 0x28);
          if (lVar10 == 0) goto LAB_7102838ed0;
        }
        FUN_71025ed6c0(param_1,lVar10 + 0x60);
      }
LAB_7102838ed0:
      puVar22 = puVar22 + 1;
    } while (puVar2 != puVar22);
  }
  plVar17 = *(long **)(param_2 + 0x3a);
  if (((char)plVar17[0xb] != '\0') && (*(int *)((long)plVar17 + 0x5c) == 2)) {
    fVar27 = *(float *)(plVar17 + 0xc);
    *(float *)(plVar17 + 0xc) = fVar27 + param_1;
    pbVar3 = *(byte **)(plVar17[1] + 0xd8);
    for (pbVar1 = *(byte **)(plVar17[1] + 0xd0); pbVar1 != pbVar3; pbVar1 = pbVar1 + 0x20) {
      if ((fVar27 < (float)*(int *)(pbVar1 + 0x18)) &&
         ((float)*(int *)(pbVar1 + 0x18) <= *(float *)(plVar17 + 0xc))) {
        if ((*pbVar1 & 1) == 0) {
          pbVar15 = pbVar1 + 1;
        }
        else {
          pbVar15 = *(byte **)(pbVar1 + 0x10);
        }
        param_5 = (byte ****)0x0;
        FUN_7102627d90(&local_c0,*(ulong **)(*plVar17 + 800),pbVar15,0,param_6,param_7,param_8,
                       param_9);
        if (local_b0 != 0) {
          *plStack_b8 = (long)local_c0;
          local_c0[1] = plStack_b8;
          *(long *)(local_b0 + 0x10) = *(long *)(local_b0 + 0x10) + -1;
          plStack_b8 = (long *)0x0;
          local_b0 = 0;
          local_c0 = (long **)0x0;
        }
      }
    }
  }
  puVar24 = *(uint **)(param_2 + 0x3e);
  pfVar11 = *(float **)(puVar24 + 6);
  plVar17 = *(long **)(pfVar11 + 2);
  if (*plVar17 != plVar17[1]) {
    if (plVar17[1] - *plVar17 != 0x24) {
      fVar27 = *pfVar11 + param_1;
      *pfVar11 = fVar27;
      if ((float)*(int *)(plVar17[1] + -0x24) <= fVar27) {
        fVar27 = fmodf(fVar27,(float)*(int *)(plVar17[1] + -0x24));
        *pfVar11 = fVar27;
      }
    }
    FUN_7102839770(pfVar11);
  }
  pfVar11 = *(float **)(puVar24 + 8);
  plVar17 = *(long **)(pfVar11 + 2);
  if (*plVar17 != plVar17[1]) {
    if (plVar17[1] - *plVar17 != 0x24) {
      fVar27 = *pfVar11 + param_1;
      *pfVar11 = fVar27;
      if ((float)*(int *)(plVar17[1] + -0x24) <= fVar27) {
        fVar27 = fmodf(fVar27,(float)*(int *)(plVar17[1] + -0x24));
        *pfVar11 = fVar27;
      }
    }
    FUN_7102839770(pfVar11);
  }
  pfVar11 = *(float **)(puVar24 + 10);
  plVar17 = *(long **)(pfVar11 + 2);
  if (*plVar17 != plVar17[1]) {
    if (plVar17[1] - *plVar17 != 0x24) {
      fVar27 = *pfVar11 + param_1;
      *pfVar11 = fVar27;
      if ((float)*(int *)(plVar17[1] + -0x24) <= fVar27) {
        fVar27 = fmodf(fVar27,(float)*(int *)(plVar17[1] + -0x24));
        *pfVar11 = fVar27;
      }
    }
    FUN_7102839770(pfVar11);
  }
  pfVar11 = *(float **)(puVar24 + 0xc);
  plVar17 = *(long **)(pfVar11 + 2);
  if (*plVar17 != plVar17[1]) {
    if (plVar17[1] - *plVar17 != 0x24) {
      fVar27 = *pfVar11 + param_1;
      *pfVar11 = fVar27;
      if ((float)*(int *)(plVar17[1] + -0x24) <= fVar27) {
        fVar27 = fmodf(fVar27,(float)*(int *)(plVar17[1] + -0x24));
        *pfVar11 = fVar27;
      }
    }
    FUN_7102839770(pfVar11);
  }
  pfVar11 = *(float **)(puVar24 + 0xe);
  plVar17 = *(long **)(pfVar11 + 2);
  if (*plVar17 != plVar17[1]) {
    if (plVar17[1] - *plVar17 != 0x24) {
      fVar27 = *pfVar11 + param_1;
      *pfVar11 = fVar27;
      if ((float)*(int *)(plVar17[1] + -0x24) <= fVar27) {
        fVar27 = fmodf(fVar27,(float)*(int *)(plVar17[1] + -0x24));
        *pfVar11 = fVar27;
      }
    }
    FUN_7102839770(pfVar11);
  }
  pfVar11 = *(float **)(puVar24 + 0x10);
  plVar17 = *(long **)(pfVar11 + 2);
  if (*plVar17 != plVar17[1]) {
    if (plVar17[1] - *plVar17 != 0x24) {
      fVar27 = *pfVar11 + param_1;
      *pfVar11 = fVar27;
      if ((float)*(int *)(plVar17[1] + -0x24) <= fVar27) {
        fVar27 = fmodf(fVar27,(float)*(int *)(plVar17[1] + -0x24));
        *pfVar11 = fVar27;
      }
    }
    FUN_7102839770(pfVar11);
  }
  if ((char)puVar24[3] == '\0') {
    if (*(char *)((long)puVar24 + 0xd) != '\0') {
      *(undefined1 *)((long)puVar24 + 0xd) = 0;
    }
  }
  else {
    fVar27 = (float)puVar24[2];
    puVar24[2] = (uint)(fVar27 - param_1);
    if (fVar27 - param_1 < 0.0) {
      puVar24[2] = 0;
      *(undefined2 *)(puVar24 + 3) = 0x100;
    }
  }
  if ((float)puVar24[2] == 0.0) {
    lVar10 = *(long *)(puVar24 + (long)(int)*puVar24 * 2 + 6);
    local_f0 = *(long *)(lVar10 + 0x20);
    local_e8 = *(undefined8 *)(lVar10 + 0x28);
    uVar29 = *(undefined4 *)(lVar10 + 0x34);
    local_100 = *(long ***)(lVar10 + 0x10);
    plStack_f8 = *(long **)(lVar10 + 0x18);
    lVar23 = *(long *)(*(long *)(puVar24 + 4) + 0x358);
    *(undefined4 *)(lVar23 + 0x80) = *(undefined4 *)(lVar10 + 0x30);
    *(undefined4 *)(lVar23 + 0x84) = uVar29;
    *(long ***)(lVar23 + 0x60) = local_100;
    *(long **)(lVar23 + 0x68) = plStack_f8;
    cVar4 = *(char *)(lVar23 + 0x50);
    *(long *)(lVar23 + 0x70) = local_f0;
    *(undefined8 *)(lVar23 + 0x78) = local_e8;
    local_b0 = local_f0;
    local_a8 = local_e8;
  }
  else {
    lVar23 = (long)(int)*puVar24;
    lVar10 = lVar23;
    if (*puVar24 < 6) {
      lVar10 = *(long *)(&DAT_7104552630 + lVar23 * 8);
    }
    lVar21 = *(long *)(puVar24 + lVar10 * 2 + 6);
    lVar10 = *(long *)(puVar24 + lVar23 * 2 + 6);
    fVar52 = (float)puVar24[1];
    fVar27 = *(float *)(lVar21 + 0x14);
    fVar31 = *(float *)(lVar21 + 0x18);
    fVar34 = *(float *)(lVar21 + 0x1c);
    fVar37 = *(float *)(lVar21 + 0x20);
    fVar39 = *(float *)(lVar21 + 0x24);
    fVar40 = *(float *)(lVar21 + 0x28);
    fVar41 = *(float *)(lVar21 + 0x2c);
    fVar42 = *(float *)(lVar21 + 0x30);
    fVar38 = *(float *)(lVar21 + 0x34);
    fVar43 = *(float *)(lVar10 + 0x14);
    fVar45 = *(float *)(lVar10 + 0x18);
    fVar51 = *(float *)(lVar10 + 0x1c);
    fVar47 = *(float *)(lVar10 + 0x20);
    fVar50 = *(float *)(lVar10 + 0x24);
    fVar48 = *(float *)(lVar10 + 0x28);
    fVar46 = *(float *)(lVar10 + 0x2c);
    fVar49 = *(float *)(lVar10 + 0x30);
    fVar44 = *(float *)(lVar10 + 0x34);
    if (fVar52 == 0.0) {
      fVar52 = 0.0;
    }
    else {
      fVar52 = (fVar52 - (float)puVar24[2]) / fVar52;
    }
    fVar53 = 1.0 - fVar52;
    lVar23 = *(long *)(*(long *)(puVar24 + 4) + 0x358);
    cVar4 = *(char *)(lVar23 + 0x50);
    *(float *)(lVar23 + 0x60) =
         *(float *)(lVar10 + 0x10) * fVar52 + fVar53 * *(float *)(lVar21 + 0x10);
    *(float *)(lVar23 + 100) = fVar43 * fVar52 + fVar53 * fVar27;
    *(float *)(lVar23 + 0x68) = fVar45 * fVar52 + fVar53 * fVar31;
    *(float *)(lVar23 + 0x6c) = fVar51 * fVar52 + fVar53 * fVar34;
    *(float *)(lVar23 + 0x70) = fVar47 * fVar52 + fVar53 * fVar37;
    *(float *)(lVar23 + 0x74) = fVar50 * fVar52 + fVar53 * fVar39;
    *(float *)(lVar23 + 0x78) = fVar48 * fVar52 + fVar53 * fVar40;
    *(float *)(lVar23 + 0x7c) = fVar46 * fVar52 + fVar53 * fVar41;
    *(float *)(lVar23 + 0x80) = fVar49 * fVar52 + fVar53 * fVar42;
    *(float *)(lVar23 + 0x84) = fVar44 * fVar52 + fVar53 * fVar38;
  }
  if (cVar4 == '\0') {
    *(undefined1 *)(lVar23 + 0x50) = 1;
  }
  puVar22 = *(undefined8 **)(*(long *)(param_2 + 0x40) + 0x18);
  puVar2 = *(undefined8 **)(*(long *)(param_2 + 0x40) + 0x20);
  if (puVar22 != puVar2) {
    uStack_108 = 0x3f80000000000000;
    do {
      fVar27 = 0.0;
      plVar17 = (long *)*puVar22;
      pcVar25 = (char *)plVar17[1];
      lVar10 = *(long *)(pcVar25 + 0x28);
      if ((lVar10 != 0) && (*(long *)(lVar10 + 0xd8) != 0)) {
        fVar27 = *(float *)(*(long *)(lVar10 + 0xd8) + 0x10);
      }
      if ((*pcVar25 == '\0') || (*(int *)((long)plVar17 + 0x14) != *(int *)(pcVar25 + 0x30))) {
LAB_7102839310:
        plStack_b8 = (long *)0x0;
        local_c0 = (long **)0x0;
        bVar6 = false;
        if (*(char *)((long)plVar17 + 0x24) == '\0') goto LAB_7102839430;
LAB_7102839318:
        uVar9 = *(uint *)((long)plVar17 + 0x2c);
        plVar13 = *(long **)(**(long **)(*plVar17 + 0x338) + 8);
        if (bVar6) {
          if ((uVar9 < 0x19) && (plVar13 != (long *)0x0)) {
            plVar13 = (long *)plVar13[(long)(int)uVar9 * 10 + 0xd];
            if ((*plVar13 != 0) &&
               (((int)plVar13[1] != -1 && ((int)plVar13[1] == *(int *)(*plVar13 + 0x20))))) {
              FUN_7103736cf0(plVar13,(undefined1 (*) [12])&local_c0);
            }
          }
        }
        else {
          lVar10 = 0;
          if (plVar13 != (long *)0x0) {
            (**(code **)(*plVar13 + 0x58))(plVar13,10);
            uVar9 = *(uint *)((long)plVar17 + 0x2c);
            lVar10 = *(long *)(**(long **)(*plVar17 + 0x338) + 8);
          }
          FUN_7102414190(lVar10,uVar9);
          *(undefined4 *)((long)plVar17 + 0x2c) = 0xffffffff;
          *(undefined1 *)((long)plVar17 + 0x24) = 0;
        }
      }
      else {
        uVar9 = *(uint *)(plVar17 + 3);
        uVar8 = *(uint *)((long)plVar17 + 0x1c);
        if (uVar9 == uVar8) {
          fVar31 = (float)uVar9;
          bVar6 = false;
          if ((fVar31 <= fVar27) && (bVar6 = false, !NAN(*(float *)(plVar17 + 5)) && !NAN(fVar31)))
          {
            bVar6 = *(float *)(plVar17 + 5) < fVar31;
          }
          if (bVar6) goto LAB_71028392b0;
          goto LAB_7102839310;
        }
        if (uVar9 < uVar8) {
          bVar6 = false;
          bVar7 = false;
          if ((float)uVar9 <= fVar27) {
            bVar6 = false;
            bVar7 = true;
            if (!NAN(fVar27) && !NAN((float)uVar8)) {
              bVar6 = fVar27 < (float)uVar8;
              bVar7 = false;
            }
          }
          if (bVar6 == bVar7) goto LAB_7102839310;
        }
        else {
          bVar6 = true;
          bVar7 = false;
          if (fVar27 < (float)uVar9) {
            bVar6 = false;
            bVar7 = true;
            if (!NAN(fVar27) && !NAN((float)uVar8)) {
              bVar6 = fVar27 < (float)uVar8;
              bVar7 = false;
            }
          }
          if (bVar6 == bVar7) goto LAB_7102839310;
        }
LAB_71028392b0:
        plStack_b8 = (long *)0x0;
        local_c0 = (long **)0x0;
        uVar29 = 0;
        uVar30 = 0;
        uVar14 = uStack_108;
        if (lVar10 != 0) {
          if (*(long *)(lVar10 + 0xd8) == 0) {
LAB_71028393f8:
            lVar10 = (**(code **)(**(long **)(lVar10 + 0x90) + 0x158))();
          }
          else {
            uVar9 = *(uint *)(plVar17 + 2);
            uVar8 = (**(code **)(**(long **)(*(long *)(*(long *)(lVar10 + 0xd8) + 8) + 8) + 0x10))()
            ;
            if (uVar8 <= uVar9) goto LAB_71028393f8;
            plVar13 = *(long **)(*(long *)(*(long *)(lVar10 + 0xd8) + 8) + 0x48);
            (**(code **)(*plVar13 + 0x38))(plVar13,0);
            lVar10 = extraout_x1_06 + (ulong)uVar9 * 0x40;
          }
          uVar14 = *(undefined8 *)(lVar10 + 0x38);
          uVar29 = (undefined4)*(undefined8 *)(lVar10 + 0x30);
          uVar30 = (undefined4)((ulong)*(undefined8 *)(lVar10 + 0x30) >> 0x20);
        }
        auVar32._4_4_ = uVar30;
        auVar32._0_4_ = uVar29;
        auVar32._8_8_ = uVar14;
        auVar5._4_4_ = uVar30;
        auVar5._0_4_ = uVar29;
        auVar5._8_8_ = uVar14;
        auVar32 = NEON_ext(auVar32,auVar5,8,1);
        plStack_b8 = (long *)(ulong)auVar32._0_4_;
        bVar6 = true;
        local_c0 = (long **)CONCAT44(uVar30,uVar29);
        if (*(char *)((long)plVar17 + 0x24) != '\0') goto LAB_7102839318;
LAB_7102839430:
        if (bVar6) {
          if ((int)plVar17[3] == *(int *)((long)plVar17 + 0x1c)) {
            lVar10 = **(long **)(*plVar17 + 0x338);
            if (*(long *)(lVar10 + 8) != 0) {
              lVar23 = plVar17[4];
              local_100 = (long **)0x0;
              uVar9 = FUN_7102405040(*(long *)(lVar10 + 8),&local_100,1,param_5,param_6,param_7,
                                     param_8,param_9);
              if (uVar9 != 0xffffffff) {
                if (uVar9 < 0x19) {
                  plVar13 = *(long **)(*(long *)(lVar10 + 8) + (long)(int)uVar9 * 0x50 + 0x68);
                  if (((*plVar13 != 0) && ((int)plVar13[1] != -1)) &&
                     ((int)plVar13[1] == *(int *)(*plVar13 + 0x20))) {
                    FUN_7103736cf0(plVar13,(undefined1 (*) [12])&local_c0);
                  }
                }
                (**(code **)(**(long **)(lVar10 + 8) + 0x58))
                          (*(long **)(lVar10 + 8),(int)lVar23,uVar9);
              }
            }
          }
          else {
            local_100 = (long **)0x0;
            lVar10 = *(long *)(**(long **)(*plVar17 + 0x338) + 8);
            if (lVar10 == 0) {
              *(undefined4 *)((long)plVar17 + 0x2c) = 0xffffffff;
            }
            else {
              uVar9 = FUN_7102405040(lVar10,&local_100,0,param_5,param_6,param_7,param_8,param_9);
              *(uint *)((long)plVar17 + 0x2c) = uVar9;
              if (uVar9 != 0xffffffff) {
                plVar13 = *(long **)(**(long **)(*plVar17 + 0x338) + 8);
                if (plVar13 != (long *)0x0) {
                  if (uVar9 < 0x19) {
                    plVar19 = (long *)plVar13[(long)(int)uVar9 * 10 + 0xd];
                    if (((*plVar19 != 0) && ((int)plVar19[1] != -1)) &&
                       ((int)plVar19[1] == *(int *)(*plVar19 + 0x20))) {
                      FUN_7103736cf0(plVar19,(undefined1 (*) [12])&local_c0);
                      plVar13 = *(long **)(**(long **)(*plVar17 + 0x338) + 8);
                      if (plVar13 == (long *)0x0) goto LAB_7102839588;
                    }
                  }
                  (**(code **)(*plVar13 + 0x58))
                            (plVar13,(int)plVar17[4],*(undefined4 *)((long)plVar17 + 0x2c));
                }
LAB_7102839588:
                *(undefined1 *)((long)plVar17 + 0x24) = 1;
              }
            }
          }
        }
      }
      puVar22 = puVar22 + 1;
      *(float *)(plVar17 + 5) = fVar27;
    } while (puVar2 != puVar22);
  }
  return;
}

