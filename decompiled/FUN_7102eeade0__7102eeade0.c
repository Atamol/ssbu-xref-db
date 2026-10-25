// addr:      7102eeade0
// offset:    0x2eeade0
// name:      FUN_7102eeade0
// mangled:   
// signature: undefined __cdecl FUN_7102eeade0(undefined8 param_1, long param_2, undefined8 param_3, undefined * * param_4, undefined1[16] * param_5, undefined1[16] * param_6, undefined1[16] * param_7, undefined8 param_8, undefined8 param_9)


void FUN_7102eeade0(undefined8 param_1,long param_2,undefined8 param_3,undefined **param_4,
                   undefined1 (*param_5) [16],undefined1 (*param_6) [16],undefined1 (*param_7) [16],
                   undefined8 param_8,undefined8 param_9)

{
  undefined1 auVar1 [16];
  uint uVar2;
  long *plVar3;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 extraout_x1_02;
  undefined8 extraout_x1_03;
  undefined8 extraout_x1_04;
  undefined8 uVar4;
  undefined8 extraout_x1_05;
  undefined8 extraout_x1_06;
  undefined8 extraout_x1_07;
  byte ****ppppbVar5;
  long lVar6;
  long lVar7;
  undefined8 *puVar8;
  ulong uVar9;
  long *plVar10;
  float fVar11;
  float fVar12;
  int iVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  float fVar16;
  long **local_60;
  long *plStack_58;
  long local_50;
  
  FUN_71025dd540(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9);
  fVar12 = *(float *)(param_2 + 0x8bc);
  *(float *)(param_2 + 0x8c0) = fVar12;
  fVar16 = 1.0;
  fVar11 = (*(float *)(*DAT_71052b8f00 + 0xd38) - *(float *)(param_2 + 0x744)) /
           (*(float *)(param_2 + 0x740) - *(float *)(param_2 + 0x744));
  *(float *)(param_2 + 0x8bc) = fVar11;
  if (1.0 < fVar11) {
LAB_7102eeae54:
    *(float *)(param_2 + 0x8bc) = fVar16;
  }
  else {
    fVar16 = fVar11;
    if (fVar11 < 0.0) {
      fVar16 = 0.0;
      goto LAB_7102eeae54;
    }
  }
  uVar4 = extraout_x1;
  if ((fVar16 != fVar12) && (lVar6 = *(long *)(param_2 + 0x868), lVar6 != 0)) {
    *(float *)(lVar6 + 0x40) = fVar16;
    (**(code **)(**(long **)(lVar6 + 0x90) + 0x368))();
    uVar4 = extraout_x1_00;
  }
  fVar12 = (float)param_1;
  FUN_7102eebff0(fVar12,*(long *)(param_2 + 0x8b0),uVar4,param_4,(byte ****)param_5,
                 (long ****)param_6,param_7,param_8,param_9);
  uVar4 = extraout_x1_01;
  if (*(char *)(param_2 + 0x8c6) == '\x01') {
    if (*(char *)(param_2 + 0x8c7) == '\0') {
      fVar16 = *(float *)(param_2 + 0x8c8);
    }
    else {
      fVar16 = *(float *)(param_2 + 0x7c8);
      *(undefined1 *)(param_2 + 0x8c7) = 0;
      *(float *)(param_2 + 0x8c8) = fVar16;
    }
    *(float *)(param_2 + 0x8c8) = fVar16 - fVar12;
    if (fVar16 - fVar12 <= 0.0) {
      *(undefined2 *)(param_2 + 0x8c6) = 0x102;
      *(undefined4 *)(param_2 + 0x8c8) = 0;
    }
  }
  else if (*(char *)(param_2 + 0x8c6) == '\x02') {
    lVar6 = *(long *)(param_2 + 0x8e8);
    plVar3 = (long *)(param_2 + 0x8d8);
    if ((lVar6 != 0) && (*(char *)(lVar6 + 0x35) != '\0')) {
      uVar2 = *(uint *)(lVar6 + 0x3c);
      lVar6 = *lib::Singleton<lib::EffectManager>::instance_;
      std::mutex::lock();
      if ((0 < (int)uVar2) &&
         ((lVar6 = lVar6 + (ulong)(uVar2 >> 0x18) * 0x300, lVar6 != 0 &&
          (*(uint *)(lVar6 + 4) == uVar2)))) {
        FUN_71035707d0(lVar6,0,(long ****)0x0,0,(long ****)param_6,param_7,param_8,param_9);
      }
      std::mutex::unlock();
    }
    ppppbVar5 = (byte ****)0x0;
    FUN_71025efd10(&local_60,(long *)(*(long *)(param_2 + 800) + 0x48),*(uint *)(param_2 + 0x8cc),
                   (byte ****)0x0,(long ****)param_6,param_7,param_8,param_9);
    if (((long ***)plVar3 != &local_60) && (lVar6 = *(long *)(param_2 + 0x8e8), lVar6 != local_50))
    {
      if (local_50 == 0) {
        if (lVar6 != 0) {
          lVar7 = *(long *)(param_2 + 0x8d8);
          plVar10 = *(long **)(param_2 + 0x8e0);
          *plVar10 = lVar7;
          *(long **)(lVar7 + 8) = plVar10;
          *(long *)(lVar6 + 0x10) = *(long *)(lVar6 + 0x10) + -1;
          *(undefined8 *)(param_2 + 0x8e0) = 0;
          *(undefined8 *)(param_2 + 0x8e8) = 0;
          *plVar3 = 0;
        }
      }
      else {
        if (lVar6 != 0) {
          lVar7 = *plVar3;
          plVar10 = *(long **)(param_2 + 0x8e0);
          *plVar10 = lVar7;
          *(long **)(lVar7 + 8) = plVar10;
          *(long *)(lVar6 + 0x10) = *(long *)(lVar6 + 0x10) + -1;
          *(undefined8 *)(param_2 + 0x8e0) = 0;
          *(undefined8 *)(param_2 + 0x8e8) = 0;
          *plVar3 = 0;
        }
        puVar8 = *(undefined8 **)(local_50 + 0x20);
        *(long *)(param_2 + 0x8d8) = local_50 + 0x18;
        *(undefined8 **)(param_2 + 0x8e0) = puVar8;
        *(long **)(local_50 + 0x20) = plVar3;
        *puVar8 = plVar3;
        *(long *)(local_50 + 0x10) = *(long *)(local_50 + 0x10) + 1;
        *(long *)(param_2 + 0x8e8) = local_50;
      }
    }
    if (local_50 != 0) {
      *plStack_58 = (long)local_60;
      local_60[1] = plStack_58;
      *(long *)(local_50 + 0x10) = *(long *)(local_50 + 0x10) + -1;
      plStack_58 = (long *)0x0;
      local_50 = 0;
      local_60 = (long **)0x0;
    }
    lVar6 = **(long **)(param_2 + 0x338);
    if (*(long *)(lVar6 + 8) != 0) {
      local_60 = (long **)0x0;
      uVar2 = FUN_7102405040(*(long *)(lVar6 + 8),&local_60,1,ppppbVar5,(long ****)param_6,param_7,
                             param_8,param_9);
      if (uVar2 != 0xffffffff) {
        if (uVar2 < 0x19) {
          plVar3 = *(long **)(*(long *)(lVar6 + 8) + (long)(int)uVar2 * 0x50 + 0x68);
          if (((*plVar3 != 0) && ((int)plVar3[1] != -1)) &&
             ((int)plVar3[1] == *(int *)(*plVar3 + 0x20))) {
            FUN_7103736cf0(plVar3,(undefined1 (*) [12])&DAT_710455ab50);
          }
        }
        (**(code **)(**(long **)(lVar6 + 8) + 0x58))(*(long **)(lVar6 + 8),4,uVar2);
      }
    }
    lVar6 = *(long *)(param_2 + 0x900);
    plVar3 = (long *)(param_2 + 0x8f0);
    if ((lVar6 != 0) && (*(char *)(lVar6 + 0x35) != '\0')) {
      uVar2 = *(uint *)(lVar6 + 0x3c);
      lVar6 = *lib::Singleton<lib::EffectManager>::instance_;
      std::mutex::lock();
      if ((0 < (int)uVar2) &&
         ((lVar6 = lVar6 + (ulong)(uVar2 >> 0x18) * 0x300, lVar6 != 0 &&
          (*(uint *)(lVar6 + 4) == uVar2)))) {
        FUN_71035707d0(lVar6,0,(long ****)0x0,0,(long ****)param_6,param_7,param_8,param_9);
      }
      std::mutex::unlock();
    }
    param_4 = (undefined **)(ulong)*(uint *)(param_2 + 0x8d0);
    param_5 = (undefined1 (*) [16])0x0;
    FUN_71025efd10(&local_60,(long *)(*(long *)(param_2 + 800) + 0x48),*(uint *)(param_2 + 0x8d0),
                   (byte ****)0x0,(long ****)param_6,param_7,param_8,param_9);
    if (((long ***)plVar3 != &local_60) && (lVar6 = *(long *)(param_2 + 0x900), lVar6 != local_50))
    {
      if (local_50 == 0) {
        if (lVar6 != 0) {
          lVar7 = *(long *)(param_2 + 0x8f0);
          plVar10 = *(long **)(param_2 + 0x8f8);
          *plVar10 = lVar7;
          *(long **)(lVar7 + 8) = plVar10;
          *(long *)(lVar6 + 0x10) = *(long *)(lVar6 + 0x10) + -1;
          *(undefined8 *)(param_2 + 0x8f8) = 0;
          *(undefined8 *)(param_2 + 0x900) = 0;
          *plVar3 = 0;
        }
      }
      else {
        if (lVar6 != 0) {
          lVar7 = *plVar3;
          plVar10 = *(long **)(param_2 + 0x8f8);
          *plVar10 = lVar7;
          *(long **)(lVar7 + 8) = plVar10;
          *(long *)(lVar6 + 0x10) = *(long *)(lVar6 + 0x10) + -1;
          *(undefined8 *)(param_2 + 0x8f8) = 0;
          *(undefined8 *)(param_2 + 0x900) = 0;
          *plVar3 = 0;
        }
        puVar8 = *(undefined8 **)(local_50 + 0x20);
        *(long *)(param_2 + 0x8f0) = local_50 + 0x18;
        *(undefined8 **)(param_2 + 0x8f8) = puVar8;
        *(long **)(local_50 + 0x20) = plVar3;
        *puVar8 = plVar3;
        *(long *)(local_50 + 0x10) = *(long *)(local_50 + 0x10) + 1;
        *(long *)(param_2 + 0x900) = local_50;
      }
    }
    if (local_50 != 0) {
      *plStack_58 = (long)local_60;
      local_60[1] = plStack_58;
      *(long *)(local_50 + 0x10) = *(long *)(local_50 + 0x10) + -1;
      plStack_58 = (long *)0x0;
      local_50 = 0;
      local_60 = (long **)0x0;
    }
    lVar6 = **(long **)(param_2 + 0x338);
    uVar4 = extraout_x1_02;
    if (*(long *)(lVar6 + 8) != 0) {
      param_4 = (undefined **)0x1;
      local_60 = (long **)0x0;
      uVar2 = FUN_7102405040(*(long *)(lVar6 + 8),&local_60,1,(byte ****)param_5,(long ****)param_6,
                             param_7,param_8,param_9);
      uVar4 = extraout_x1_03;
      if (uVar2 != 0xffffffff) {
        param_4 = (undefined **)(ulong)uVar2;
        if (uVar2 < 0x19) {
          plVar3 = *(long **)(*(long *)(lVar6 + 8) + (long)(int)uVar2 * 0x50 + 0x68);
          if (((*plVar3 != 0) && ((int)plVar3[1] != -1)) &&
             ((int)plVar3[1] == *(int *)(*plVar3 + 0x20))) {
            FUN_7103736cf0(plVar3,(undefined1 (*) [12])&DAT_710455ab60);
          }
        }
        (**(code **)(**(long **)(lVar6 + 8) + 0x58))(*(long **)(lVar6 + 8),4);
        uVar4 = extraout_x1_04;
      }
    }
    *(undefined1 *)(param_2 + 0x8c6) = 0;
  }
  if (*(uint *)(*(long *)(param_2 + 0x8a0) + 0x1b8) < 2) {
    if (*(char *)(param_2 + 0x8c5) == '\x01') {
      *(undefined1 *)(param_2 + 0x8c5) = 0;
      FUN_7102633910(*(long *)(param_2 + 0x318),(long *********)"render_param",param_4,param_5,
                     (long ****)param_6,param_7,param_8,param_9);
      FUN_7102633b90(*(long *)(param_2 + 0x318),(long *********)"stage_light_on",1,param_5,
                     (long ****)param_6,param_7,param_8,param_9);
      param_4 = (undefined **)0x1;
      FUN_7102633a10(*(long *)(param_2 + 0x318),(long *********)"chara_light_on",1,param_5,
                     (long ****)param_6,param_7,param_8,param_9);
      FUN_7102633800(*(long *)(param_2 + 0x318),(long *********)"reflection_cubemap_light_on",
                     param_4,param_5,(long ****)param_6,param_7,param_8,param_9);
      FUN_71025f7350(*(long *)(*(long *)(param_2 + 0x318) + 0x10),(byte *)"light_00");
      lVar6 = *(long *)(param_2 + 0x8a8);
      uVar4 = extraout_x1_05;
      goto joined_r0x007102eeb4c8;
    }
  }
  else {
    lVar6 = *(long *)(param_2 + 0x878);
    fVar16 = 0.0;
    if (((lVar6 != 0) && (*(char *)(lVar6 + 0xe0) != '\0')) && (*(long *)(lVar6 + 200) != 0)) {
      fVar16 = *(float *)(*(long *)(lVar6 + 200) + 0x3c);
    }
    lVar7 = *(long *)(param_2 + 2000);
    lVar6 = *(long *)(param_2 + 0x7d8) - lVar7;
    if (lVar6 != 0) {
      uVar9 = 0;
      do {
        if ((*(float *)(lVar7 + uVar9 * 8) <= fVar16) &&
           (fVar16 <= *(float *)(lVar7 + uVar9 * 8 + 4))) {
          if (*(char *)(param_2 + 0x8c5) == '\0') {
            *(undefined1 *)(param_2 + 0x8c5) = 1;
            FUN_7102633910(*(long *)(param_2 + 0x318),(long *********)"render_param_1",param_4,
                           param_5,(long ****)param_6,param_7,param_8,param_9);
            FUN_7102633b90(*(long *)(param_2 + 0x318),(long *********)"stage_light_off",1,param_5,
                           (long ****)param_6,param_7,param_8,param_9);
            param_4 = (undefined **)0x1;
            FUN_7102633a10(*(long *)(param_2 + 0x318),(long *********)"chara_light_off",1,param_5,
                           (long ****)param_6,param_7,param_8,param_9);
            FUN_7102633800(*(long *)(param_2 + 0x318),(long *********)"reflection_cubemap_light_off"
                           ,param_4,param_5,(long ****)param_6,param_7,param_8,param_9);
            FUN_71025f7350(*(long *)(*(long *)(param_2 + 0x318) + 0x10),(byte *)"light_01");
            lVar6 = *(long *)(param_2 + 0x920);
            uVar4 = extraout_x1_07;
            if (lVar6 != 0) {
              auVar15 = NEON_fmov(0x3f800000,4);
              *(undefined2 *)(lVar6 + 0x78) = 1;
              *(undefined4 *)(lVar6 + 0x70) = *(undefined4 *)(lVar6 + 0x50);
              *(undefined4 *)(lVar6 + 0x74) = *(undefined4 *)(lVar6 + 0x50);
              *(undefined8 *)(lVar6 + 0x30) = *(undefined8 *)(lVar6 + 0x10);
              *(undefined8 *)(lVar6 + 0x38) = *(undefined8 *)(lVar6 + 0x18);
              *(long *)(lVar6 + 0x28) = auVar15._8_8_;
              *(long *)(lVar6 + 0x20) = auVar15._0_8_;
            }
          }
          goto LAB_7102eeb4c4;
        }
        uVar9 = (ulong)((int)uVar9 + 1) & 0xff;
      } while (uVar9 < (ulong)(lVar6 >> 3));
    }
    if (*(char *)(param_2 + 0x8c5) == '\x01') {
      *(undefined1 *)(param_2 + 0x8c5) = 0;
      FUN_7102633910(*(long *)(param_2 + 0x318),(long *********)"render_param",param_4,param_5,
                     (long ****)param_6,param_7,param_8,param_9);
      FUN_7102633b90(*(long *)(param_2 + 0x318),(long *********)"stage_light_on",1,param_5,
                     (long ****)param_6,param_7,param_8,param_9);
      param_4 = (undefined **)0x1;
      FUN_7102633a10(*(long *)(param_2 + 0x318),(long *********)"chara_light_on",1,param_5,
                     (long ****)param_6,param_7,param_8,param_9);
      FUN_7102633800(*(long *)(param_2 + 0x318),(long *********)"reflection_cubemap_light_on",
                     param_4,param_5,(long ****)param_6,param_7,param_8,param_9);
      FUN_71025f7350(*(long *)(*(long *)(param_2 + 0x318) + 0x10),(byte *)"light_00");
      lVar6 = *(long *)(param_2 + 0x920);
      uVar4 = extraout_x1_06;
      if (lVar6 != 0) {
        auVar15 = NEON_fmov(0x3f800000,4);
        *(undefined2 *)(lVar6 + 0x78) = 1;
        *(undefined4 *)(lVar6 + 0x70) = *(undefined4 *)(lVar6 + 0x54);
        *(undefined4 *)(lVar6 + 0x74) = *(undefined4 *)(lVar6 + 0x54);
        *(undefined8 *)(lVar6 + 0x20) = *(undefined8 *)(lVar6 + 0x10);
        *(undefined8 *)(lVar6 + 0x28) = *(undefined8 *)(lVar6 + 0x18);
        *(long *)(lVar6 + 0x38) = auVar15._8_8_;
        *(long *)(lVar6 + 0x30) = auVar15._0_8_;
        lVar6 = *(long *)(param_2 + 0x8a8);
        goto joined_r0x007102eeb4c8;
      }
    }
  }
LAB_7102eeb4c4:
  lVar6 = *(long *)(param_2 + 0x8a8);
joined_r0x007102eeb4c8:
  if (lVar6 != 0) {
    FUN_7102eed1e0(fVar12,lVar6,uVar4,param_4,param_5,(long ****)param_6,param_7,param_8,param_9);
  }
  lVar6 = *(long *)(param_2 + 0x920);
  if (lVar6 != 0) {
    if (*(char *)(lVar6 + 0x78) == '\0') {
      if (*(char *)(lVar6 + 0x79) != '\0') {
        *(undefined1 *)(lVar6 + 0x79) = 0;
      }
    }
    else {
      fVar12 = *(float *)(lVar6 + 0x74) - fVar12;
      *(float *)(lVar6 + 0x74) = fVar12;
      if (0.0 <= fVar12) {
        plVar10 = *(long **)(lVar6 + 0x60);
        for (plVar3 = *(long **)(lVar6 + 0x58); plVar3 != plVar10; plVar3 = plVar3 + 1) {
          fVar12 = *(float *)(lVar6 + 0x70);
          lVar7 = *plVar3;
          fVar16 = 0.0;
          if (fVar12 != 0.0) {
            fVar16 = (fVar12 - *(float *)(lVar6 + 0x74)) / fVar12;
          }
          auVar15._0_8_ =
               CONCAT44(*(float *)(lVar6 + 0x24) +
                        ((float)((ulong)*(undefined8 *)(lVar6 + 0x30) >> 0x20) -
                        *(float *)(lVar6 + 0x24)) * fVar16,
                        *(float *)(lVar6 + 0x20) +
                        ((float)*(undefined8 *)(lVar6 + 0x30) - *(float *)(lVar6 + 0x20)) * fVar16);
          auVar15._8_4_ =
               *(float *)(lVar6 + 0x28) +
               ((float)*(undefined8 *)(lVar6 + 0x38) - *(float *)(lVar6 + 0x28)) * fVar16;
          auVar15._12_4_ =
               *(float *)(lVar6 + 0x2c) +
               ((float)((ulong)*(undefined8 *)(lVar6 + 0x38) >> 0x20) - *(float *)(lVar6 + 0x2c)) *
               fVar16;
          *(long *)(lVar6 + 0x48) = auVar15._8_8_;
          *(undefined8 *)(lVar6 + 0x40) = auVar15._0_8_;
          if ((lVar7 != 0) && (*(char *)(lVar7 + 0xe0) != '\0')) {
            iVar13 = -(uint)(auVar15._12_4_ == 1.0);
            auVar14._0_4_ =
                 CONCAT13(~(byte)((uint)iVar13 >> 0x18),
                          CONCAT12(~(byte)((uint)iVar13 >> 0x10),
                                   CONCAT11(~(byte)((uint)iVar13 >> 8),~(byte)iVar13)));
            auVar14._4_4_ = auVar14._0_4_;
            auVar14._8_4_ = auVar14._0_4_;
            auVar14._12_4_ = auVar14._0_4_;
            auVar1._8_4_ = auVar15._8_4_;
            auVar1._0_8_ = auVar15._0_8_;
            auVar1._12_4_ = 0x3f800000;
            auVar15 = auVar15 ^ (auVar15 ^ auVar1) & auVar14;
            plStack_58 = auVar15._8_8_;
            local_60 = auVar15._0_8_;
            (**(code **)(**(long **)(lVar7 + 0x90) + 0x260))(*(long **)(lVar7 + 0x90),8,&local_60);
          }
        }
      }
      else {
        *(undefined4 *)(lVar6 + 0x74) = 0;
        *(undefined2 *)(lVar6 + 0x78) = 0x100;
      }
    }
  }
  return;
}

