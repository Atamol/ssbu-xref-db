// addr:      71026644d0
// offset:    0x26644d0
// name:      FUN_71026644d0
// mangled:   
// signature: undefined __cdecl FUN_71026644d0(undefined8 param_1, long param_2, undefined8 param_3, undefined * * param_4, undefined1[16] * param_5, undefined1[16] * param_6, undefined1[16] * param_7, long * * * param_8, long * * * param_9)


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_71026644d0(undefined8 param_1,long param_2,undefined8 param_3,undefined **param_4,
                   undefined1 (*param_5) [16],undefined1 (*param_6) [16],undefined1 (*param_7) [16],
                   long ***param_8,long ***param_9)

{
  byte bVar1;
  undefined4 *puVar2;
  undefined1 auVar3 [16];
  long *plVar4;
  long **pplVar5;
  bool bVar6;
  bool bVar7;
  undefined1 uVar8;
  uint uVar9;
  int iVar10;
  void *__dest;
  undefined8 *puVar11;
  long *plVar12;
  long ****pppplVar13;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 uVar14;
  undefined8 extraout_x1_02;
  undefined8 extraout_x1_03;
  long extraout_x1_04;
  long extraout_x1_05;
  char cVar15;
  uint uVar16;
  long lVar17;
  undefined **ppuVar18;
  ulong uVar19;
  undefined1 (*pauVar20) [12];
  uint *puVar21;
  long ***ppplVar22;
  long ***ppplVar23;
  long **pplVar24;
  long *plVar25;
  long lVar26;
  long lVar27;
  void *__src;
  size_t __n;
  undefined8 *puVar28;
  undefined8 *puVar29;
  long lVar30;
  long *plVar31;
  int *piVar32;
  int *piVar33;
  ulong uVar34;
  float fVar35;
  float fVar36;
  undefined4 uVar37;
  float fVar38;
  float fVar39;
  int iVar40;
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined4 uVar43;
  long ***local_130;
  long **pplStack_128;
  long ***local_120;
  long **local_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  long ***local_f0;
  long **pplStack_e8;
  long ***local_e0;
  long **pplStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined4 local_c0;
  float fStack_bc;
  undefined4 uStack_b8;
  undefined4 local_b4;
  undefined4 uStack_b0;
  undefined8 local_ac;
  undefined1 local_a0 [16];
  long ***local_90 [4];
  
  FUN_71025dd540(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9);
  fVar38 = (float)param_1;
  FUN_7102665b80(fVar38,param_2);
  plVar25 = *(long **)(*(long *)(param_2 + 0x9d8) + 8);
  uVar14 = extraout_x1;
  if (plVar25 != (long *)0x0) {
    lVar17 = plVar25[1];
    fVar35 = *(float *)(param_2 + 0x9b8);
    if ((fVar35 < 0.0) || (*(float *)(lVar17 + 0xf0) < fVar35)) {
      fVar36 = *(float *)(lVar17 + 0xf4);
      bVar6 = true;
      bVar7 = false;
      if (*(float *)(lVar17 + 0xf0) < fVar35) {
        bVar6 = false;
        bVar7 = true;
        if (!NAN(fVar36) && !NAN(fVar35)) {
          bVar6 = fVar36 < fVar35;
          bVar7 = false;
        }
      }
      if (bVar6 == bVar7) {
        if (*(char *)((long)plVar25 + 0x14) != '\0') {
          ppuVar18 = &PTR_s_stage_morning_village_city_71050c9f50;
LAB_71026645c4:
          param_4 = (undefined **)0x1;
          FUN_7102633b90(*(long *)(*plVar25 + 0x318),
                         (long *********)ppuVar18[*(uint *)(plVar25 + 2)],1,param_5,
                         (long ****)param_6,param_7,param_8,param_9);
          *(undefined1 *)((long)plVar25 + 0x14) = 0;
          uVar14 = extraout_x1_01;
        }
      }
      else {
        fVar39 = *(float *)(lVar17 + 0xf8);
        bVar6 = true;
        bVar7 = false;
        if (fVar36 < fVar35) {
          bVar6 = false;
          bVar7 = true;
          if (!NAN(fVar39) && !NAN(fVar35)) {
            bVar6 = fVar39 < fVar35;
            bVar7 = false;
          }
        }
        if (bVar6 == bVar7) {
          if (*(char *)((long)plVar25 + 0x14) == '\0') {
            ppuVar18 = &PTR_s_stage_morning_city_71050c9f78;
            goto LAB_7102664544;
          }
        }
        else {
          fVar36 = *(float *)(lVar17 + 0xfc);
          bVar6 = true;
          bVar7 = false;
          if (fVar39 < fVar35) {
            bVar6 = false;
            bVar7 = true;
            if (!NAN(fVar36) && !NAN(fVar35)) {
              bVar6 = fVar36 < fVar35;
              bVar7 = false;
            }
          }
          if (bVar6 == bVar7) {
            if (*(char *)((long)plVar25 + 0x14) != '\0') {
              ppuVar18 = &PTR_s_stage_morning_city_village_71050c9fa0;
              goto LAB_71026645c4;
            }
          }
          else if ((fVar36 < fVar35) && (fVar35 <= 6000.0)) goto LAB_7102664534;
        }
      }
    }
    else {
LAB_7102664534:
      if (*(char *)((long)plVar25 + 0x14) == '\0') {
        ppuVar18 = &PTR_s_stage_morning_village_71050c9f28;
LAB_7102664544:
        param_4 = (undefined **)0x1;
        FUN_7102633b90(*(long *)(*plVar25 + 0x318),(long *********)ppuVar18[*(uint *)(plVar25 + 2)],
                       1,param_5,(long ****)param_6,param_7,param_8,param_9);
        *(undefined1 *)((long)plVar25 + 0x14) = 1;
        uVar14 = extraout_x1_00;
      }
    }
  }
  FUN_7102666160(param_1,param_2,uVar14,(long ****)param_4,(byte ****)param_5,(long ****)param_6,
                 param_7,param_8,param_9);
  FUN_71026673b0(*(long *)(param_2 + 0x988),extraout_x1_02,(long ****)param_4,(byte ****)param_5,
                 (long ****)param_6,param_7,param_8,param_9);
  FUN_71026673b0(*(long *)(param_2 + 0x990),extraout_x1_03,(long ****)param_4,(byte ****)param_5,
                 (long ****)param_6,param_7,param_8,param_9);
  fVar35 = *(float *)(param_2 + 0x9b8);
  if (5700.0 < fVar35) {
LAB_710266463c:
    if (*(char *)(param_2 + 0x9e0) != '\0') goto LAB_7102664794;
    bVar6 = true;
    *(undefined1 *)(param_2 + 0x9e0) = 1;
    lVar17 = *(long *)(param_2 + 0x998);
    if (lVar17 == 0) goto LAB_7102664794;
LAB_7102664688:
    if ((*(char *)(*(long *)(lVar17 + 8) + 0x18) == '\0') ||
       (*(bool *)(lVar17 + 0x89) = bVar6, !bVar6)) goto LAB_7102664794;
    *(undefined1 *)(lVar17 + 0x44) = 0;
    lVar17 = *(long *)(param_2 + 0x998);
    if (lVar17 != 0) goto LAB_71026646a8;
    goto LAB_710266555c;
  }
  if (fVar35 <= 5100.0 - *(float *)(param_2 + 0x7a4)) {
    if (2700.0 < fVar35) goto LAB_710266463c;
    if (2100.0 - *(float *)(param_2 + 0x7a4) < fVar35) goto LAB_7102664670;
  }
  else {
LAB_7102664670:
    if (*(char *)(param_2 + 0x9e0) != '\0') {
      bVar6 = false;
      *(undefined1 *)(param_2 + 0x9e0) = 0;
      lVar17 = *(long *)(param_2 + 0x998);
      if (lVar17 != 0) goto LAB_7102664688;
    }
  }
LAB_7102664794:
  lVar17 = *(long *)(param_2 + 0x998);
  if (lVar17 == 0) goto LAB_710266555c;
LAB_71026646a8:
  lVar26 = *(long *)(lVar17 + 0x18);
  if (lVar26 != 0) {
    fVar35 = 0.0;
    if (*(long *)(lVar26 + 0x38) != 0) {
      if (((DAT_71053144d8 & 1) == 0) &&
         (iVar10 = __cxa_guard_acquire(&DAT_71053144d8), iVar10 != 0)) {
        FUN_7101764000();
        param_4 = &PTR_LOOP_7104f17000;
        FUN_71000001c0();
        __cxa_guard_release(&DAT_71053144d8);
      }
      fVar35 = 0.0;
      if (DAT_71052c518a == '\0') {
        plVar25 = *(long **)(*(long *)(lVar26 + 0x38) + 0x130);
        fVar35 = (float)(**(code **)(*plVar25 + 0xb0))(plVar25,0);
      }
    }
    fVar35 = *(float *)(lVar17 + 0x68) - fVar35;
    fVar36 = 0.0;
    if (0.0 < fVar35) {
      fVar36 = fVar35;
    }
    *(float *)(lVar17 + 0x68) = fVar36;
  }
  fVar36 = *(float *)(lVar17 + 0x48) - fVar38;
  uVar43 = 0;
  fVar35 = fVar36;
  if (fVar36 <= 0.0) {
    fVar35 = 0.0;
  }
  *(float *)(lVar17 + 0x48) = fVar35;
  switch(*(undefined1 *)(lVar17 + 0x44)) {
  case 0:
    FUN_71026668e0(lVar17,0,(long ****)param_4,(byte ****)param_5,(long ****)param_6,param_7,param_8
                   ,param_9);
    *(undefined4 *)(lVar17 + 0x5c) = 0xffffffff;
    lVar26 = *(long *)(lVar17 + 0x20);
    *(undefined4 *)(lVar17 + 0x50) = 0;
    if (*(char *)(lVar17 + 100) == '\0') {
      iVar10 = *(int *)(lVar26 + 0x50);
      iVar40 = *(int *)(lVar26 + 0x54);
      puVar21 = *(uint **)(*(long *)(lVar17 + 8) + 0x340);
      uVar16 = *puVar21;
      *puVar21 = puVar21[1];
      uVar9 = puVar21[3];
      uVar16 = uVar16 ^ uVar16 << 0xb;
      uVar16 = uVar16 ^ uVar16 >> 8 ^ uVar9 ^ uVar9 >> 0x13;
      puVar21[1] = puVar21[2];
      puVar21[2] = uVar9;
      puVar21[3] = uVar16;
      lVar26 = *(long *)(lVar17 + 0x20);
      fVar35 = ((float)iVar40 - (float)iVar10) * (float)uVar16 * 2.3283064e-10 + (float)iVar10;
    }
    else {
      fVar35 = (float)*(int *)(lVar26 + 0x4c);
    }
    *(float *)(lVar17 + 0x48) = fVar35;
    *(undefined1 *)(lVar17 + 100) = 0;
    puVar21 = *(uint **)(*(long *)(lVar17 + 8) + 0x340);
    fVar35 = *(float *)(lVar26 + 0x5c);
    fVar36 = *(float *)(lVar26 + 0x60);
    uVar16 = *puVar21;
    *puVar21 = puVar21[1];
    uVar9 = puVar21[3];
    uVar16 = uVar16 ^ uVar16 << 0xb;
    uVar16 = uVar16 ^ uVar16 >> 8 ^ uVar9 ^ uVar9 >> 0x13;
    puVar21[3] = uVar16;
    puVar21[1] = puVar21[2];
    puVar21[2] = uVar9;
    *(float *)(lVar17 + 0x58) = fVar35 + (fVar36 - fVar35) * (float)uVar16 * 2.3283064e-10;
    *(float *)(lVar17 + 0x68) = (float)*(int *)(*(long *)(lVar17 + 0x20) + 100);
    lVar26 = *(long *)(*(long *)(lVar17 + 0x80) + 8);
    if ((lVar26 != 0) && (*(int *)(lVar26 + 0x14) != 0x50000000)) {
      if (lib::Singleton<app::ItemManager>::instance_ != (long *)0x0) {
        plVar25 = (long *)lib::Singleton<app::ItemManager>::instance_[2];
        do {
          if (plVar25 == (long *)lib::Singleton<app::ItemManager>::instance_[3])
          goto LAB_7102664ce0;
          plVar31 = (long *)*plVar25;
          plVar25 = plVar25 + 1;
        } while ((int)plVar31[1] != *(int *)(lVar26 + 0x14));
        if (plVar31 != (long *)0x0) {
          (**(code **)(*plVar31 + 0x520))(plVar31,0);
        }
      }
LAB_7102664ce0:
      *(undefined4 *)(lVar26 + 0x14) = 0x50000000;
    }
    uVar8 = 5;
    if (*(char *)(lVar17 + 0x89) != '\0') {
      uVar8 = 1;
    }
    break;
  case 1:
    if (0.0 < fVar36) goto switchD_710266473c_default;
    uVar8 = 2;
    break;
  case 2:
    puVar21 = *(uint **)(*(long *)(lVar17 + 8) + 0x340);
    uVar16 = *puVar21;
    *puVar21 = puVar21[1];
    uVar9 = puVar21[3];
    uVar16 = uVar16 ^ uVar16 << 0xb;
    uVar16 = uVar16 ^ uVar16 >> 8 ^ uVar9 ^ uVar9 >> 0x13;
    puVar21[1] = puVar21[2];
    puVar21[2] = uVar9;
    puVar21[3] = uVar16;
    *(bool *)(lVar17 + 0x41) =
         (float)uVar16 * 2.3283064e-10 < *(float *)(*(long *)(lVar17 + 0x20) + 0x68);
    iVar10 = *(int *)(lVar17 + 0xb8);
    if (iVar10 == -1) {
      FUN_7102666d40((undefined8 *)(lVar17 + 0xb0));
      iVar10 = *(int *)(lVar17 + 0xb8);
    }
    *(undefined4 *)(lVar17 + 0xb8) = *(undefined4 *)(lVar17 + 0xbc);
    *(undefined8 *)(lVar17 + 0xbc) = *(undefined8 *)(lVar17 + 0xc0);
    *(undefined4 *)(lVar17 + 0xc4) = *(undefined4 *)(lVar17 + 200);
    *(undefined8 *)(lVar17 + 200) = *(undefined8 *)(lVar17 + 0xcc);
    *(int *)(lVar17 + 0xdc) = iVar10;
    *(char *)(lVar17 + 0x42) = (char)iVar10;
    *(undefined4 *)(lVar17 + 0xd0) = *(undefined4 *)(lVar17 + 0xd4);
    *(undefined4 *)(lVar17 + 0xd4) = 0xffffffff;
    *(undefined1 *)(lVar17 + 0xd8) = 1;
    *(undefined1 *)(lVar17 + 0x55) = 0;
    puVar21 = *(uint **)(*(long *)(lVar17 + 8) + 0x340);
    uVar16 = *puVar21;
    *puVar21 = puVar21[1];
    uVar9 = puVar21[3];
    uVar16 = uVar16 ^ uVar16 << 0xb;
    uVar16 = uVar16 ^ uVar16 >> 8 ^ uVar9 ^ uVar9 >> 0x13;
    puVar21[1] = puVar21[2];
    puVar21[2] = uVar9;
    puVar21[3] = uVar16;
    fVar35 = *(float *)(lVar17 + 0x58);
    if (*(float *)(*(long *)(lVar17 + 0x20) + 0x58) <= (float)uVar16 * 2.3283064e-10) {
      if (fVar35 < 0.0) {
        *(float *)(lVar17 + 0x58) = -fVar35;
      }
      lVar26 = *(long *)(lVar17 + 0x10);
    }
    else {
      if (0.0 < fVar35) {
        *(float *)(lVar17 + 0x58) = -fVar35;
      }
      *(undefined1 *)(lVar17 + 0x55) = 1;
      lVar26 = *(long *)(lVar17 + 0x10);
    }
    if (lVar26 != 0) {
      pplStack_128 = (long **)0x0;
      local_130 = (long ***)&DAT_3f800000;
      local_118 = DAT_710446a360._8_8_;
      local_120 = DAT_710446a360;
      uStack_108 = 0x3f800000;
      local_110 = 0;
      uStack_f8 = DAT_710446a350._8_8_;
      local_100 = DAT_710446a350;
      lVar26 = *(long *)(lVar17 + 0x10);
      if (lVar26 != 0) {
        (**(code **)(**(long **)(lVar26 + 0x90) + 0x148))(*(long **)(lVar26 + 0x90),&local_130);
        lVar26 = *(long *)(lVar26 + 0xd8);
        if (lVar26 != 0) {
          pplStack_d8 = local_118;
          local_e0 = local_120;
          pplStack_e8 = pplStack_128;
          local_f0 = local_130;
          uStack_b8 = (undefined4)uStack_f8;
          local_b4 = (undefined4)((ulong)uStack_f8 >> 0x20);
          local_c0 = (undefined4)local_100;
          fStack_bc = (float)((ulong)local_100 >> 0x20);
          uStack_c8 = uStack_108;
          local_d0 = local_110;
          if (*(char *)(*(long *)(lVar26 + 8) + 0xa8) != '\0') {
            plVar25 = *(long **)(*(long *)(lVar26 + 8) + 0x48);
            (**(code **)(*plVar25 + 0x20))(plVar25,&local_f0);
          }
          *(undefined1 *)(lVar26 + 0x20) = 1;
        }
      }
    }
    uVar16 = *(uint *)(lVar17 + 0x98);
    if (uVar16 == 0xffffffff) {
      FUN_7102666c30((undefined8 *)(lVar17 + 0x90));
      uVar16 = *(uint *)(lVar17 + 0x98);
    }
    *(undefined4 *)(lVar17 + 0x98) = *(undefined4 *)(lVar17 + 0x9c);
    *(undefined4 *)(lVar17 + 0x9c) = *(undefined4 *)(lVar17 + 0xa0);
    *(undefined4 *)(lVar17 + 0xa0) = 0xffffffff;
    *(undefined1 *)(lVar17 + 0xa4) = 1;
    *(uint *)(lVar17 + 0xa8) = uVar16;
    *(char *)(lVar17 + 0x4c) = (char)uVar16;
    if (((2 < (uVar16 & 0xff)) ||
        (lVar26 = *(long *)(lVar17 + (ulong)(uVar16 & 0xff) * 8 + 0x28), lVar26 == 0)) ||
       (lVar30 = *(long *)(lVar17 + 0x10), lVar30 == 0)) goto switchD_710266473c_default;
    lVar27 = *(long *)(lVar30 + 0xd8);
    if (((lVar27 != 0) && (*(long *)(lVar30 + 0xd0) != 0)) &&
       (bVar6 = FUN_710367c160(0,*(long *)(lVar27 + 8),lVar26), bVar6)) {
      *(undefined4 *)(lVar27 + 0x10) = 0;
    }
    uVar43 = 0;
    if (*(long *)(lVar17 + 0x10) != 0) {
      lVar26 = *(long *)(*(long *)(lVar17 + 0x10) + 0xd8);
      uVar43 = 0;
      if (lVar26 != 0) {
        lVar26 = *(long *)(lVar26 + 8);
        plVar25 = *(long **)(lVar26 + 0x10);
        iVar10 = *(int *)(lVar26 + 0xac);
        if (iVar10 == 1) {
          plVar25 = (long *)(**(code **)(*plVar25 + 0x38))(plVar25,1);
          if (plVar25 == (long *)0x0) {
            plVar31 = (long *)0x0;
          }
          else {
LAB_7102664b50:
            plVar31 = (long *)(**(code **)(*plVar25 + 0x40))(plVar25,0);
          }
        }
        else {
          uVar43 = 0;
          if (iVar10 != 0) goto LAB_7102664b6c;
          plVar25 = (long *)(**(code **)(*plVar25 + 0x38))(plVar25,0);
          plVar31 = (long *)0x0;
          if (plVar25 != (long *)0x0) goto LAB_7102664b50;
        }
        uVar43 = (**(code **)(*plVar31 + 0x88))();
      }
    }
LAB_7102664b6c:
    *(undefined4 *)(lVar17 + 0x60) = uVar43;
    uVar37 = 0;
    if (*(char *)(lVar17 + 0x55) != '\0') {
      uVar37 = uVar43;
    }
    *(undefined4 *)(lVar17 + 0x50) = uVar37;
    if (*(long *)(lVar17 + 0x10) == 0) {
      uVar43 = 0xffffffff;
    }
    else {
      lVar26 = *(long *)(*(long *)(lVar17 + 0x10) + 0xd8);
      if (lVar26 == 0) {
        uVar43 = 0xffffffff;
      }
      else {
        plVar25 = *(long **)(*(long *)(lVar26 + 8) + 8);
        uVar43 = (**(code **)(*plVar25 + 0x18))(plVar25,"ItemPoint_O_OBJ_O_HIR");
      }
    }
    *(undefined4 *)(lVar17 + 0x5c) = uVar43;
    FUN_71026668e0(lVar17,1,(long ****)param_4,(byte ****)param_5,(long ****)param_6,param_7,param_8
                   ,param_9);
    uVar16 = *(uint *)(lVar17 + 0x5c);
    if ((uVar16 != 0xffffffff) && (lVar26 = *(long *)(lVar17 + 0x10), lVar26 != 0)) {
      if ((*(long *)(lVar26 + 0xd8) == 0) ||
         (uVar9 = (**(code **)(**(long **)(*(long *)(*(long *)(lVar26 + 0xd8) + 8) + 8) + 0x10))(),
         uVar9 <= uVar16)) {
        lVar26 = (**(code **)(**(long **)(lVar26 + 0x90) + 0x158))();
      }
      else {
        plVar25 = *(long **)(*(long *)(*(long *)(lVar26 + 0xd8) + 8) + 0x48);
        (**(code **)(*plVar25 + 0x38))(plVar25,0);
        lVar26 = extraout_x1_04 + (ulong)uVar16 * 0x40;
      }
      auVar42 = *(undefined1 (*) [16])(lVar26 + 0x30);
      auVar41 = NEON_ext(auVar42,auVar42,8,1);
      *(ulong *)(lVar17 + 0x78) = (ulong)auVar41._0_4_;
      *(long *)(lVar17 + 0x70) = auVar42._0_8_;
      lVar26 = *(long *)(*(long *)(lVar17 + 0x80) + 8);
      if (lVar26 != 0) {
        if (((DAT_71053144d8 & 1) == 0) &&
           (iVar10 = __cxa_guard_acquire(&DAT_71053144d8), iVar10 != 0)) {
          FUN_7101764000();
          FUN_71000001c0();
          __cxa_guard_release(&DAT_71053144d8);
        }
        if ((*(char *)(*(long *)(lVar26 + 8) + 0x70) != '\0' || DAT_71052c5204 != '\0') &&
           (bVar6 = FUN_710177a6e0(0xc), bVar6)) {
          if (*(int *)(lVar26 + 0x14) != 0x50000000) {
            if (lib::Singleton<app::ItemManager>::instance_ != (long *)0x0) {
              plVar25 = (long *)lib::Singleton<app::ItemManager>::instance_[2];
              do {
                if (plVar25 == (long *)lib::Singleton<app::ItemManager>::instance_[3])
                goto LAB_71026657f4;
                plVar31 = (long *)*plVar25;
                plVar25 = plVar25 + 1;
              } while ((int)plVar31[1] != *(int *)(lVar26 + 0x14));
              if (plVar31 != (long *)0x0) {
                (**(code **)(*plVar31 + 0x520))(plVar31,0);
              }
            }
LAB_71026657f4:
            *(undefined4 *)(lVar26 + 0x14) = 0x50000000;
          }
          auVar42._8_8_ = _DAT_7107521008;
          auVar42._0_8_ = _ConstantZero;
          local_ac = 0x3f80000000000000;
          auVar42 = NEON_ext(auVar42,auVar42,8,1);
          pplStack_e8 = (long **)(ulong)auVar42._0_4_;
          local_b4 = 0;
          uStack_b0 = 0;
          uStack_c8 = CONCAT44(*(undefined4 *)
                                (*lib::Singleton<app::ItemParamAccessor>::instance_ + 0x58b4),
                               0xffffffff);
          local_f0 = _ConstantZero;
          local_d0 = 0x500000000000000c;
          param_6 = (undefined1 (*) [16])0x0;
          local_c0 = 0x50000000;
          fStack_bc = 2.8026e-44;
          uStack_b8 = 0xffffffff;
          local_e0 = local_f0;
          pplStack_d8 = pplStack_e8;
          pppplVar13 = FUN_71015db0b0(lib::Singleton<app::ItemManager>::instance_,&local_f0,0,
                                      (byte ****)0x1,(long ****)0x0,(ulong)param_7,param_8,param_9);
          if (pppplVar13 != (long ****)0x0) {
            iVar10 = (*(code *)(*pppplVar13)[0xa5])();
            *(int *)(lVar26 + 0x14) = iVar10;
            if (iVar10 != 0x50000000) {
              auVar42 = *(undefined1 (*) [16])(lVar17 + 0x70);
              auVar41 = NEON_ext(auVar42,auVar42,8,1);
              puVar11 = (undefined8 *)(lVar26 + 0x30);
              *(ulong *)(lVar26 + 0x38) = (ulong)auVar41._0_4_;
              *puVar11 = auVar42._0_8_;
              if (*(int *)((long)pppplVar13 + 0x274) != 0x50000000) {
                (*(code *)(*pppplVar13)[0x14])(pppplVar13);
              }
              ppplVar22 = pppplVar13[0x12];
              *(undefined2 *)(ppplVar22 + 0x2a) = 1;
              *(undefined1 *)((long)ppplVar22 + 0x152) = 0;
              (*(code *)(*pppplVar13)[0xa8])(pppplVar13,1);
              ppplVar22 = pppplVar13[0x12];
              plVar25 = (*ppplVar22)[10];
              iVar10 = (**(code **)(*plVar25 + 0x98))(plVar25,0x1000002d);
              if (iVar10 < 1000) {
                plVar25 = (*ppplVar22)[10];
                (**(code **)(*plVar25 + 0xa0))(plVar25,iVar10 + 1,0x1000002d);
              }
              (*(code *)(*pppplVar13[0x27])[0x4a])();
              (*(code *)(*pppplVar13[0x1b])[9])(pppplVar13[0x1b],2,0);
              local_130 = (long ***)*puVar11;
              pplStack_128 = (long **)0x0;
              (*(code *)(*pppplVar13[0x1e])[0xd])(pppplVar13[0x1e],&local_130);
              (*(code *)(*pppplVar13[0x1a])[0xb])(pppplVar13[0x1a],puVar11,1,1);
              (*(code *)(*pppplVar13[0x3b])[0x78])(pppplVar13[0x3b],0x8000000);
              (*(code *)(*pppplVar13[0x1e])[0x10])();
            }
          }
        }
      }
    }
    uVar8 = 3;
    break;
  case 3:
    if (*(float *)(lVar17 + 0x68) <= 0.0) {
      lVar26 = *(long *)(*(long *)(lVar17 + 0x80) + 8);
      if ((lVar26 != 0) && (*(int *)(lVar26 + 0x14) != 0x50000000)) {
        plVar25 = (long *)lib::Singleton<app::ItemManager>::instance_[2];
        do {
          if (plVar25 == (long *)lib::Singleton<app::ItemManager>::instance_[3])
          goto LAB_7102664d28;
          lVar30 = *plVar25;
          plVar25 = plVar25 + 1;
        } while (*(int *)(lVar30 + 8) != *(int *)(lVar26 + 0x14));
        if (lVar30 != 0) {
          local_f0 = (long ***)0x0;
          pplStack_e8 = (long **)0x0;
          uVar34 = (**(code **)(**(long **)(lVar30 + 0xd0) + 0xb0))();
          FUN_71015b0590(uVar34,lVar30,&local_f0);
        }
LAB_7102664d28:
        puVar2 = *(undefined4 **)(lVar26 + 0x20);
        if (puVar2 < *(undefined4 **)(lVar26 + 0x28)) {
          *puVar2 = *(undefined4 *)(lVar26 + 0x14);
          *(long *)(lVar26 + 0x20) = *(long *)(lVar26 + 0x20) + 4;
        }
        else {
          __src = *(void **)(lVar26 + 0x18);
          __n = (long)puVar2 - (long)__src;
          uVar34 = ((long)__n >> 2) + 1;
          if (uVar34 >> 0x3e != 0) {
                    /* WARNING: Subroutine does not return */
            std::__vector_base_common<true>::__throw_length_error();
          }
          lVar30 = (long)*(undefined4 **)(lVar26 + 0x28) - (long)__src;
          if ((ulong)(lVar30 >> 2) < 0x1fffffffffffffff) {
            uVar19 = lVar30 >> 1;
            if (uVar34 <= uVar19) {
              uVar34 = uVar19;
            }
            if (uVar34 != 0) {
              if (uVar34 >> 0x3e != 0) {
                    /* WARNING: Subroutine does not return */
                abort();
              }
              goto LAB_7102664ec4;
            }
LAB_7102664f24:
            __dest = (void *)0x0;
          }
          else {
            uVar34 = 0x3fffffffffffffff;
LAB_7102664ec4:
            ppplVar22 = (long ***)(uVar34 * 4);
            if (ppplVar22 == (long ***)0x0) {
              ppplVar22 = (long ***)0x1;
            }
            __dest = (void *)FUN_710392e290(0x10,ppplVar22,(long ****)param_4,(byte ****)param_5,
                                            (long ****)param_6,param_7,param_8,param_9);
            if (__dest == (void *)0x0) {
              if (DAT_7105332f00 != (long *)0x0) {
                local_130 = (long ***)((ulong)local_130 & 0xffffffff00000000);
                pppplVar13 = &local_f0;
                local_f0 = ppplVar22;
                uVar19 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_130);
                if (((uVar19 & 1) != 0) &&
                   (__dest = (void *)FUN_710392e290(0x10,ppplVar22,pppplVar13,(byte ****)param_5,
                                                    (long ****)param_6,param_7,param_8,param_9),
                   __dest != (void *)0x0)) goto LAB_7102664f28;
              }
              goto LAB_7102664f24;
            }
          }
LAB_7102664f28:
          puVar2 = (undefined4 *)((long)__dest + ((long)__n >> 2) * 4);
          *puVar2 = *(undefined4 *)(lVar26 + 0x14);
          if (0 < (long)__n) {
            memcpy(__dest,__src,__n);
          }
          *(void **)(lVar26 + 0x18) = __dest;
          *(undefined4 **)(lVar26 + 0x20) = puVar2 + 1;
          *(void **)(lVar26 + 0x28) = (void *)((long)__dest + uVar34 * 4);
          if (__src != (void *)0x0) {
            FUN_710392eb40((ulong)__src);
          }
        }
        *(undefined4 *)(lVar26 + 0x14) = 0x50000000;
      }
      bVar1 = *(char *)(lVar17 + 0x42) + 0x10;
      *(byte *)(lVar17 + 0x43) = bVar1;
      if (bVar1 < 0x18) {
        uVar43 = *(undefined4 *)(&DAT_7104551228 + (ulong)bVar1 * 4);
      }
      lVar26 = *(long *)(lVar17 + 0x10);
      if (lVar26 != 0) {
        if ((*(char *)(lVar26 + 0xe0) != '\0') && (lVar26 = *(long *)(lVar26 + 200), lVar26 != 0)) {
          puVar11 = *(undefined8 **)(lVar26 + 0x20);
          *(undefined4 *)(lVar26 + 0x3c) = uVar43;
          puVar29 = *(undefined8 **)(lVar26 + 0x18);
          if (*(undefined8 **)(lVar26 + 0x18) == puVar11) {
            *(undefined4 *)(lVar26 + 0x40) = uVar43;
          }
          else {
            do {
              puVar28 = puVar29 + 1;
              (**(code **)(*(long *)*puVar29 + 0x18))(uVar43,(long *)*puVar29,0);
              puVar29 = puVar28;
            } while (puVar11 != puVar28);
            puVar11 = *(undefined8 **)(lVar26 + 0x20);
            *(undefined4 *)(lVar26 + 0x40) = uVar43;
            puVar29 = *(undefined8 **)(lVar26 + 0x18);
            if (*(undefined8 **)(lVar26 + 0x18) != puVar11) {
              do {
                puVar28 = puVar29 + 1;
                (**(code **)(*(long *)*puVar29 + 0x18))(uVar43,(long *)*puVar29,1);
                puVar29 = puVar28;
              } while (puVar11 != puVar28);
              puVar29 = *(undefined8 **)(lVar26 + 0x20);
              for (puVar11 = *(undefined8 **)(lVar26 + 0x18); puVar11 != puVar29;
                  puVar11 = puVar11 + 1) {
                (**(code **)(*(long *)*puVar11 + 0x38))();
              }
            }
          }
        }
        lVar26 = *(long *)(lVar17 + 0x10);
        if (((lVar26 != 0) && (*(char *)(lVar26 + 0xe0) != '\0')) && (*(long *)(lVar26 + 200) != 0))
        {
          *(undefined2 *)(*(long *)(lVar26 + 200) + 0x30) = 0x101;
        }
      }
      uVar43 = *(undefined4 *)(*(long *)(lVar17 + 0x20) + 0x78);
      *(undefined1 *)(lVar17 + 0x44) = 4;
      *(undefined4 *)(lVar17 + 0x48) = uVar43;
      *(undefined1 *)(lVar17 + 0xf4) = 1;
    }
    if (*(char *)(lVar17 + 0x54) != '\0') {
      *(undefined1 *)(lVar17 + 0x44) = 0;
    }
  default:
switchD_710266473c_default:
    cVar15 = *(char *)(lVar17 + 0x54);
    goto joined_r0x007102664838;
  case 4:
    if (fVar36 <= 0.0) {
      *(undefined1 *)(lVar17 + 0x44) = 0;
    }
    if ((*(long **)(lVar17 + 0xe8) == (long *)0x0) || (*(char *)(lVar17 + 0xf4) == '\0'))
    goto switchD_710266473c_default;
    plVar25 = *(long **)(**(long **)(lVar17 + 0xe8) + 8);
    if (plVar25 != (long *)0x0) {
      if (*(uint *)(lVar17 + 0xf0) < 0x19) {
        plVar31 = (long *)plVar25[(long)(int)*(uint *)(lVar17 + 0xf0) * 10 + 0xd];
        if (((*plVar31 != 0) && ((int)plVar31[1] != -1)) &&
           ((int)plVar31[1] == *(int *)(*plVar31 + 0x20))) {
          FUN_7103736cf0(plVar31,(undefined1 (*) [12])(lVar17 + 0x70));
          plVar25 = *(long **)(**(long **)(lVar17 + 0xe8) + 8);
          if (plVar25 == (long *)0x0) goto LAB_7102664830;
        }
      }
      (**(code **)(*plVar25 + 0x58))(plVar25,0xb,*(undefined4 *)(lVar17 + 0xf0));
    }
LAB_7102664830:
    *(undefined1 *)(lVar17 + 0xf4) = 0;
    cVar15 = *(char *)(lVar17 + 0x54);
    goto joined_r0x007102664838;
  }
  *(undefined1 *)(lVar17 + 0x44) = uVar8;
  cVar15 = *(char *)(lVar17 + 0x54);
joined_r0x007102664838:
  if (cVar15 == '\0') {
    fVar35 = *(float *)(lVar17 + 0x50) + *(float *)(lVar17 + 0x58) * fVar38;
    uVar34 = (ulong)(uint)fVar35;
    cVar15 = *(char *)(lVar17 + 0x55);
    *(float *)(lVar17 + 0x50) = fVar35;
    if (cVar15 == '\0') {
      fVar36 = *(float *)(lVar17 + 0x60);
      if (fVar36 <= fVar35) {
        *(float *)(lVar17 + 0x50) = fVar36;
        uVar34 = (ulong)(uint)fVar36;
      }
LAB_71026650d0:
      lVar26 = *(long *)(lVar17 + 0x10);
    }
    else {
      if (0.0 < fVar35) goto LAB_71026650d0;
      uVar34 = 0;
      *(undefined4 *)(lVar17 + 0x50) = 0;
      lVar26 = *(long *)(lVar17 + 0x10);
    }
    if (lVar26 != 0) {
      FUN_71025ee450(uVar34,*(long **)(lVar26 + 0xd8),1);
      cVar15 = *(char *)(lVar17 + 0x55);
    }
    if (cVar15 == '\0') {
      if (*(long *)(lVar17 + 0x10) != 0) {
        fVar36 = 0.0;
        lVar26 = *(long *)(*(long *)(lVar17 + 0x10) + 0xd8);
        fVar35 = 0.0;
        if (lVar26 != 0) {
          lVar26 = *(long *)(lVar26 + 8);
          plVar25 = *(long **)(lVar26 + 0x10);
          iVar10 = *(int *)(lVar26 + 0xac);
          if (iVar10 == 1) {
            plVar25 = (long *)(**(code **)(*plVar25 + 0x38))(plVar25,1);
            if (plVar25 == (long *)0x0) {
              plVar31 = (long *)0x0;
            }
            else {
LAB_7102665144:
              plVar31 = (long *)(**(code **)(*plVar25 + 0x40))(plVar25,0);
            }
          }
          else {
            fVar35 = 0.0;
            if (iVar10 != 0) goto LAB_7102665160;
            plVar25 = (long *)(**(code **)(*plVar25 + 0x38))(plVar25,0);
            plVar31 = (long *)0x0;
            if (plVar25 != (long *)0x0) goto LAB_7102665144;
          }
          fVar35 = (float)(**(code **)(*plVar31 + 0x88))();
        }
LAB_7102665160:
        if ((*(long *)(lVar17 + 0x10) != 0) &&
           (lVar26 = *(long *)(*(long *)(lVar17 + 0x10) + 0xd8), lVar26 != 0)) {
          fVar36 = *(float *)(lVar26 + 0x10);
        }
        if (fVar36 < fVar35) goto LAB_7102665184;
      }
    }
    else if (0.0 < *(float *)(lVar17 + 0x50)) goto LAB_7102665184;
    *(undefined1 *)(lVar17 + 0x54) = 1;
  }
LAB_7102665184:
  uVar16 = *(uint *)(lVar17 + 0x5c);
  ppplVar22 = local_f0;
  pplVar24 = pplStack_e8;
  ppplVar23 = local_e0;
  pplVar5 = pplStack_d8;
  if ((uVar16 != 0xffffffff) && (lVar26 = *(long *)(lVar17 + 0x10), lVar26 != 0)) {
    if ((*(long *)(lVar26 + 0xd8) == 0) ||
       (uVar9 = (**(code **)(**(long **)(*(long *)(*(long *)(lVar26 + 0xd8) + 8) + 8) + 0x10))(),
       uVar9 <= uVar16)) {
      lVar26 = (**(code **)(**(long **)(lVar26 + 0x90) + 0x158))();
    }
    else {
      plVar25 = *(long **)(*(long *)(*(long *)(lVar26 + 0xd8) + 8) + 0x48);
      (**(code **)(*plVar25 + 0x38))(plVar25,0);
      lVar26 = extraout_x1_05 + (ulong)uVar16 * 0x40;
    }
    pauVar20 = (undefined1 (*) [12])(lVar26 + 0x30);
    uVar43 = (undefined4)((ulong)*(undefined8 *)(lVar26 + 0x38) >> 0x20);
    uVar14 = *(undefined8 *)*pauVar20;
    auVar41._12_4_ = uVar43;
    auVar41._0_12_ = *pauVar20;
    auVar3._12_4_ = uVar43;
    auVar3._0_12_ = *pauVar20;
    auVar42 = NEON_ext(auVar41,auVar3,8,1);
    fVar35 = auVar42._0_4_;
    *(ulong *)(lVar17 + 0x78) = (ulong)(uint)fVar35;
    *(undefined8 *)(lVar17 + 0x70) = uVar14;
    ppplVar22 = local_f0;
    pplVar24 = pplStack_e8;
    ppplVar23 = local_e0;
    pplVar5 = pplStack_d8;
    if (*(int *)(lVar17 + 0x5c) != -1) {
      lVar26 = *(long *)(*(long *)(lVar17 + 0x80) + 8);
      if (lVar26 != 0) {
        fVar36 = *(float *)(*(long *)(lVar17 + 0x20) + 0x74);
        *(undefined1 *)(lVar26 + 0x10) = 0;
        if (*(int *)(lVar26 + 0x14) != 0x50000000) {
          plVar25 = (long *)lib::Singleton<app::ItemManager>::instance_[5];
          if (plVar25 != (long *)lib::Singleton<app::ItemManager>::instance_[6]) {
            fVar36 = (float)((ulong)uVar14 >> 0x20) + fVar36;
            do {
              lVar30 = *plVar25;
              if ((*(char *)(*(long *)(lVar30 + 0x90) + 0x18) == '\0') &&
                 (*(int *)(lVar30 + 8) == *(int *)(lVar26 + 0x14))) {
                puVar11 = (undefined8 *)(lVar26 + 0x30);
                *(ulong *)(lVar26 + 0x38) = (ulong)(uint)fVar35;
                *puVar11 = CONCAT44(fVar36,(float)uVar14);
                local_f0 = (long ***)
                           CONCAT44(fVar36 + *(float *)(*(long *)(lVar26 + 8) + 0x74),
                                    (float)uVar14 + 0.0);
                *(ulong *)(lVar26 + 0x38) = (ulong)(uint)(fVar35 + 0.0);
                *puVar11 = local_f0;
                pplStack_e8 = (long **)0x0;
                (**(code **)(**(long **)(lVar30 + 0xf0) + 0x68))
                          (*(long **)(lVar30 + 0xf0),&local_f0);
                (**(code **)(**(long **)(lVar30 + 0xd0) + 0x58))
                          (*(long **)(lVar30 + 0xd0),puVar11,1,1);
                (**(code **)(**(long **)(lVar30 + 0x1d8) + 0x3c0))
                          (*(long **)(lVar30 + 0x1d8),0x8000000);
                (**(code **)(**(long **)(lVar30 + 0xf0) + 0x80))();
                *(undefined1 *)(lVar26 + 0x10) = 1;
                break;
              }
              plVar25 = plVar25 + 1;
            } while ((long *)lib::Singleton<app::ItemManager>::instance_[6] != plVar25);
          }
        }
      }
      fVar35 = 0.0;
      ppplVar22 = local_f0;
      pplVar24 = pplStack_e8;
      ppplVar23 = local_e0;
      pplVar5 = pplStack_d8;
      if (((*(int *)(lVar17 + 0x5c) != -1) && (*(char *)(lVar17 + 0x54) == '\0')) &&
         (*(long *)(lVar17 + 0x18) != 0)) {
        lVar26 = *(long *)(*(long *)(lVar17 + 0x80) + 8);
        if ((lVar26 != 0) && (*(char *)(lVar26 + 0x10) != '\0')) {
          fVar35 = *(float *)(*(long *)(lVar17 + 0x20) + 0x84);
        }
        auVar42 = *(undefined1 (*) [16])(lVar17 + 0x70);
        fStack_bc = fVar35 + auVar42._4_4_;
        local_c0 = auVar42._0_4_;
        auVar42 = NEON_ext(auVar42,auVar42,8,1);
        uStack_b8 = auVar42._0_4_;
        pplStack_e8 = (long **)0x0;
        local_f0 = (long ***)&DAT_3f800000;
        pplStack_d8 = (long **)0x0;
        local_e0 = (long ***)&DAT_3f80000000000000;
        uStack_c8 = DAT_71044656b0._8_8_;
        local_d0 = (undefined8)DAT_71044656b0;
        local_b4 = 0x3f800000;
        lVar26 = *(long *)(*(long *)(lVar17 + 0x18) + 0x38);
        ppplVar22 = (long ***)&DAT_3f800000;
        pplVar24 = (long **)0x0;
        ppplVar23 = (long ***)&DAT_3f80000000000000;
        pplVar5 = (long **)0x0;
        if (lVar26 != 0) {
          plVar25 = *(long **)(lVar26 + 0x130);
          (**(code **)(*plVar25 + 0x168))(plVar25,&local_f0,&local_f0,1);
          ppplVar22 = local_f0;
          pplVar24 = pplStack_e8;
          ppplVar23 = local_e0;
          pplVar5 = pplStack_d8;
        }
      }
    }
  }
  pplStack_d8 = pplVar5;
  local_e0 = ppplVar23;
  pplStack_e8 = pplVar24;
  local_f0 = ppplVar22;
  plVar25 = lib::Singleton<app::ItemManager>::instance_;
  if ((*(int *)(*(long *)(lVar17 + 8) + 0xdc) == 2) && (*(char *)(lVar17 + 0x88) != '\0')) {
    if ((*(long *)(lVar17 + 0x80) != 0) &&
       (plVar31 = *(long **)(*(long *)(lVar17 + 0x80) + 8), plVar31 != (long *)0x0)) {
      if (lib::Singleton<app::ItemManager>::instance_ != (long *)0x0) {
        piVar32 = (int *)plVar31[4];
        for (piVar33 = (int *)plVar31[3]; piVar33 != piVar32; piVar33 = piVar33 + 1) {
          iVar10 = *piVar33;
          if (iVar10 != 0x50000000) {
            plVar4 = (long *)plVar25[2];
            do {
              if (plVar4 == (long *)plVar25[3]) goto LAB_71026654a4;
              lVar26 = *plVar4;
              plVar4 = plVar4 + 1;
            } while (*(int *)(lVar26 + 8) != iVar10);
            if (lVar26 != 0) {
              if (3 < *(byte *)(lVar26 + 0x3a)) {
                puVar11 = (undefined8 *)(**(code **)(**(long **)(lVar26 + 0xd0) + 0x60))();
                local_130 = (long ***)*puVar11;
                pplStack_128 = (long **)puVar11[1];
                local_90[0] = _ConstantZero;
                local_90[1] = (long ***)_DAT_7107521008;
                local_a0._0_8_ = _ConstantOne;
                local_a0._8_8_ = uRam0000007107558008;
                param_6 = (undefined1 (*) [16])local_90;
                param_7 = &local_a0;
                FUN_71026277a0((long ***)&local_f0,*(ulong **)(*plVar31 + 800),
                               (long ****)0xfa06bb067,(undefined1 (*) [12])&local_130,
                               (undefined1 (*) [12])param_6,(undefined1 (*) [12])param_7,param_8,
                               param_9);
                if (local_e0 != (long ***)0x0) {
                  *pplStack_e8 = (long *)local_f0;
                  local_f0[1] = pplStack_e8;
                  local_e0[2] = (long **)((long)local_e0[2] + -1);
                  pplStack_e8 = (long **)0x0;
                  local_e0 = (long ***)0x0;
                  local_f0 = (long ***)0x0;
                }
              }
              plVar4 = (long *)plVar25[2];
              do {
                if (plVar4 == (long *)plVar25[3]) goto LAB_71026654a4;
                plVar12 = (long *)*plVar4;
                plVar4 = plVar4 + 1;
              } while ((int)plVar12[1] != iVar10);
              if (plVar12 != (long *)0x0) {
                (**(code **)(*plVar12 + 0x520))(plVar12,0);
              }
            }
          }
LAB_71026654a4:
        }
      }
      plVar31[4] = plVar31[3];
    }
    *(undefined1 *)(lVar17 + 0x88) = 0;
  }
LAB_710266555c:
  lVar17 = *(long *)(param_2 + 0x9a0);
  fVar38 = *(float *)(lVar17 + 0x34) - fVar38;
  *(float *)(lVar17 + 0x34) = fVar38;
  switch(*(undefined1 *)(lVar17 + 0x38)) {
  case 1:
    puVar21 = *(uint **)(*(long *)(lVar17 + 8) + 0x340);
    fVar38 = *(float *)(*(long *)(lVar17 + 0x10) + 0xd0);
    fVar35 = *(float *)(*(long *)(lVar17 + 0x10) + 0xd4);
    uVar16 = *puVar21;
    *puVar21 = puVar21[1];
    uVar9 = puVar21[3];
    uVar16 = uVar16 ^ uVar16 << 0xb;
    uVar16 = uVar16 ^ uVar16 >> 8 ^ uVar9 ^ uVar9 >> 0x13;
    puVar21[1] = puVar21[2];
    puVar21[2] = uVar9;
    puVar21[3] = uVar16;
    uVar8 = 2;
    *(float *)(lVar17 + 0x34) = fVar38 + (fVar35 - fVar38) * (float)uVar16 * 2.3283064e-10;
    break;
  case 2:
    if (0.0 < fVar38) goto switchD_7102665594_default;
    FUN_71025efd10((long ***)&local_f0,(long *)(*(long *)(*(long *)(lVar17 + 8) + 800) + 0x48),
                   *(uint *)(lVar17 + 0x30),(byte ****)0x0,(long ****)param_6,param_7,param_8,
                   param_9);
    pppplVar13 = (long ****)(lVar17 + 0x18);
    if ((pppplVar13 != &local_f0) &&
       (ppplVar22 = *(long ****)(lVar17 + 0x28), ppplVar22 != local_e0)) {
      if (local_e0 == (long ***)0x0) {
        if (ppplVar22 != (long ***)0x0) {
          lVar26 = *(long *)(lVar17 + 0x18);
          plVar25 = *(long **)(lVar17 + 0x20);
          *plVar25 = lVar26;
          *(long **)(lVar26 + 8) = plVar25;
          ppplVar22[2] = (long **)((long)ppplVar22[2] + -1);
          *(undefined8 *)(lVar17 + 0x20) = 0;
          *(undefined8 *)(lVar17 + 0x28) = 0;
          *pppplVar13 = (long ***)0x0;
        }
      }
      else {
        if (ppplVar22 != (long ***)0x0) {
          ppplVar23 = *pppplVar13;
          pplVar24 = *(long ***)(lVar17 + 0x20);
          *pplVar24 = (long *)ppplVar23;
          ppplVar23[1] = pplVar24;
          ppplVar22[2] = (long **)((long)ppplVar22[2] + -1);
          *(undefined8 *)(lVar17 + 0x20) = 0;
          *(undefined8 *)(lVar17 + 0x28) = 0;
          *pppplVar13 = (long ***)0x0;
        }
        pplVar24 = local_e0[4];
        *(long ****)(lVar17 + 0x18) = local_e0 + 3;
        *(long ***)(lVar17 + 0x20) = pplVar24;
        local_e0[4] = (long **)pppplVar13;
        *pplVar24 = (long *)pppplVar13;
        local_e0[2] = (long **)((long)local_e0[2] + 1);
        *(long ****)(lVar17 + 0x28) = local_e0;
      }
    }
    if (local_e0 != (long ***)0x0) {
      *pplStack_e8 = (long *)local_f0;
      local_f0[1] = pplStack_e8;
      local_e0[2] = (long **)((long)local_e0[2] + -1);
      pplStack_e8 = (long **)0x0;
      local_e0 = (long ***)0x0;
      local_f0 = (long ***)0x0;
    }
    if (*(long *)(lVar17 + 0x28) == 0) {
      uVar8 = 1;
    }
    else {
      *(undefined4 *)(lVar17 + 0x34) = *(undefined4 *)(*(long *)(lVar17 + 0x10) + 0xd8);
      uVar8 = 3;
    }
    break;
  case 3:
    if (0.0 < fVar38) goto switchD_7102665594_default;
    uVar8 = 4;
    break;
  case 4:
  case 5:
    lVar26 = *(long *)(lVar17 + 0x28);
    if ((lVar26 == 0) || (*(char *)(lVar26 + 0x35) == '\0')) goto switchD_7102665594_default;
    uVar16 = *(uint *)(lVar26 + 0x3c);
    lVar26 = *lib::Singleton<lib::EffectManager>::instance_;
    std::mutex::lock();
    if ((0 < (int)uVar16) &&
       (lVar26 = lVar26 + (ulong)(uVar16 >> 0x18) * 0x300,
       lVar26 != 0 && *(uint *)(lVar26 + 4) == uVar16)) {
      FUN_71035707d0(lVar26,0,(long ****)0x0,0,(long ****)param_6,param_7,param_8,param_9);
    }
    std::mutex::unlock();
    uVar8 = *(char *)(lVar17 + 0x38) != '\x05';
    break;
  default:
    goto switchD_7102665594_default;
  }
  *(undefined1 *)(lVar17 + 0x38) = uVar8;
switchD_7102665594_default:
  FUN_710266ca90(param_1,*(long *)(param_2 + 0x9a8));
  FUN_710266d1d0(*(float *)(param_2 + 0x9b8),*(long **)(*(long *)(param_2 + 0x9b0) + 8));
  return;
}

