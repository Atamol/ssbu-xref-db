// addr:      71031a6df0
// offset:    0x31a6df0
// name:      FUN_71031a6df0
// mangled:   
// signature: undefined __cdecl FUN_71031a6df0(undefined1[16] param_1, undefined1[16] param_2, undefined1[16] param_3, undefined1[16] param_4, long * param_5, undefined8 param_6, long param_7, byte * * * * param_8, long * * * * param_9, undefined8 param_10, long * * * param_11, long * * * param_12)


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_71031a6df0(undefined1 param_1 [16],undefined1 param_2 [16],undefined1 param_3 [16],
                   undefined1 param_4 [16],long *param_5,undefined8 param_6,long param_7,
                   byte ****param_8,long ****param_9,undefined8 param_10,long ***param_11,
                   long ***param_12)

{
  undefined1 (*pauVar1) [16];
  char *pcVar2;
  char cVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  bool bVar6;
  bool bVar7;
  uint uVar8;
  long *plVar9;
  undefined8 extraout_x1;
  long ****pppplVar10;
  byte ****ppppbVar11;
  long lVar12;
  char *pcVar13;
  undefined8 *puVar14;
  int iVar15;
  float *pfVar16;
  long lVar17;
  long *plVar18;
  undefined8 *puVar19;
  float extraout_s0;
  float extraout_var;
  float extraout_var_00;
  float fVar23;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 extraout_q0 [16];
  float extraout_var_01;
  float extraout_var_02;
  undefined1 auVar22 [16];
  float fVar24;
  float fVar25;
  undefined1 auVar26 [16];
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  undefined1 local_90 [8];
  ulong uStack_88;
  byte ****local_80;
  long *local_78;
  byte ***local_70;
  long *plStack_68;
  byte ***local_60;
  long *plStack_58;
  undefined8 local_48;
  
  fVar27 = param_4._8_4_;
  fVar23 = param_3._8_4_;
  if ((int)param_6 != 1) {
    if ((int)param_6 != 0) {
      return;
    }
    lVar12 = param_5[0x26];
    *(undefined8 *)(lVar12 + 0x14c) = 2;
    *(undefined1 *)(lVar12 + 0x11) = 0;
    *(undefined1 *)(param_5[0x26] + 0xd) = 1;
    *(undefined1 *)(param_5[0x26] + 0xe) = 0;
    *(undefined1 *)(param_5[0x26] + 0xf) = 1;
    FUN_71031d71c0(param_1,param_2,param_3,param_4,(long *)param_5[0x26],param_6,param_7,param_8,
                   param_9,param_10,param_11,param_12);
    return;
  }
  if (*(int *)(param_5[0x26] + 0x140) != 0) {
    return;
  }
  pauVar1 = (undefined1 (*) [16])(param_7 + 0x10);
  FUN_71031a5970((long *)&local_60,param_5,pauVar1);
  if (plStack_58 != (long *)0x0) {
    plVar9 = plStack_58 + 1;
    do {
      cVar3 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar6) {
        *plVar9 = *plVar9 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    do {
      lVar12 = *plVar9;
      cVar3 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar6) {
        *plVar9 = lVar12 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar12 == 0) {
      (**(code **)(*plStack_58 + 0x10))(plStack_58);
      std::__shared_weak_count::__release_weak();
    }
  }
  if (local_60 == (byte ***)0x0) {
    if (plStack_58 != (long *)0x0) goto LAB_71031a6f34;
LAB_71031a6f60:
    lVar12 = param_5[0x21];
  }
  else {
    local_70 = local_60;
    plStack_68 = plStack_58;
    if (plStack_58 != (long *)0x0) {
      plVar9 = plStack_58 + 1;
      do {
        cVar3 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar9,0x10);
        if (bVar6) {
          *plVar9 = *plVar9 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      FUN_71031a4d90((long)param_5,&local_70);
      do {
        lVar12 = *plVar9;
        cVar3 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar9,0x10);
        if (bVar6) {
          *plVar9 = lVar12 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar12 == 0) {
        (**(code **)(*plStack_58 + 0x10))(plStack_58);
        std::__shared_weak_count::__release_weak();
      }
LAB_71031a6f34:
      do {
        plVar9 = plStack_58 + 1;
        lVar12 = *plVar9;
        cVar3 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar9,0x10);
        if (bVar6) {
          *plVar9 = lVar12 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar12 == 0) {
        (**(code **)(*plStack_58 + 0x10))(plStack_58);
        std::__shared_weak_count::__release_weak();
      }
      goto LAB_71031a6f60;
    }
    FUN_71031a4d90((long)param_5,&local_70);
    lVar12 = param_5[0x21];
  }
  if ((lVar12 == 0) || (plVar9 = (long *)std::__shared_weak_count::lock(), plVar9 == (long *)0x0))
  goto LAB_71031a70c4;
  plVar18 = (long *)param_5[0x20];
  if ((plVar18 != (long *)0x0) && ((char)plVar18[0x26] != '\0')) {
    lVar12 = *(long *)(plVar18[8] + 0x68);
    (**(code **)(*plVar18 + 0x40))(plVar18);
    fVar23 = extraout_var_00 * (float)plVar18[0x14] +
             param_2._8_4_ * (float)((ulong)plVar18[0x14] >> 0x20) + fVar23 * (float)plVar18[0x15] +
             fVar27 * (float)((ulong)plVar18[0x15] >> 0x20);
    fVar30 = *(float *)(lVar12 + 0x1c) * 0.5;
    fVar27 = fVar30 + *(float *)(lVar12 + 0x18);
    bVar6 = false;
    bVar7 = true;
    if (*(float *)(lVar12 + 0x18) - fVar30 <= fVar23) {
      bVar6 = false;
      bVar7 = true;
      if (!NAN(fVar23) && !NAN(fVar27)) {
        bVar6 = fVar23 == fVar27;
        bVar7 = fVar27 <= fVar23;
      }
    }
    pcVar2 = (char *)(lVar12 + 0x10);
    pcVar13 = pcVar2;
    if (!bVar7 || bVar6) {
LAB_71031a706c:
      iVar15 = *(int *)(pcVar13 + 4);
    }
    else {
      fVar30 = *(float *)(lVar12 + 0xbc) * 0.5;
      fVar27 = fVar30 + *(float *)(lVar12 + 0xb8);
      bVar6 = false;
      bVar7 = true;
      if (*(float *)(lVar12 + 0xb8) - fVar30 <= fVar23) {
        bVar6 = false;
        bVar7 = true;
        if (!NAN(fVar23) && !NAN(fVar27)) {
          bVar6 = fVar23 == fVar27;
          bVar7 = fVar27 <= fVar23;
        }
      }
      if (!bVar7 || bVar6) {
        pcVar13 = (char *)(lVar12 + 0xb0);
        goto LAB_71031a706c;
      }
      fVar27 = *(float *)(lVar12 + 0x15c) * 0.5;
      fVar30 = fVar27 + *(float *)(lVar12 + 0x158);
      bVar6 = false;
      bVar7 = true;
      if (*(float *)(lVar12 + 0x158) - fVar27 <= fVar23) {
        bVar6 = false;
        bVar7 = true;
        if (!NAN(fVar23) && !NAN(fVar30)) {
          bVar6 = fVar23 == fVar30;
          bVar7 = fVar30 <= fVar23;
        }
      }
      if (!bVar7 || bVar6) {
        pcVar13 = (char *)(lVar12 + 0x150);
        goto LAB_71031a706c;
      }
      fVar27 = *(float *)(lVar12 + 0x1fc) * 0.5;
      fVar30 = fVar27 + *(float *)(lVar12 + 0x1f8);
      bVar6 = false;
      bVar7 = true;
      if (*(float *)(lVar12 + 0x1f8) - fVar27 <= fVar23) {
        bVar6 = false;
        bVar7 = true;
        if (!NAN(fVar23) && !NAN(fVar30)) {
          bVar6 = fVar23 == fVar30;
          bVar7 = fVar30 <= fVar23;
        }
      }
      if (!bVar7 || bVar6) {
        pcVar13 = (char *)(lVar12 + 0x1f0);
        goto LAB_71031a706c;
      }
      iVar15 = 0;
    }
    pcVar13 = pcVar2;
    if (*(int *)(lVar12 + 0x14) == iVar15) {
LAB_71031a7124:
      cVar3 = *pcVar13;
    }
    else if (*(int *)(lVar12 + 0xb4) == iVar15) {
      cVar3 = *(char *)(lVar12 + 0xb0);
    }
    else {
      if (*(int *)(lVar12 + 0x154) != iVar15) {
        pcVar13 = (char *)(lVar12 + 0x1f0);
        if (*(int *)(lVar12 + 500) != iVar15) {
          pcVar13 = pcVar2;
        }
        goto LAB_71031a7124;
      }
      cVar3 = *(char *)(lVar12 + 0x150);
    }
    if (cVar3 != '\0') {
      puVar19 = *(undefined8 **)(*param_5 + 0x60);
      if (*(char *)((long)puVar19 + 0xc) == '\0') {
        pfVar16 = (float *)(*DAT_71052b8f00 + 0xf40);
        puVar14 = (undefined8 *)*puVar19;
      }
      else {
        puVar14 = (undefined8 *)*puVar19;
        pfVar16 = (float *)(puVar14[0xb] + 0x38);
      }
      auVar20 = FUN_7103192030(*pauVar1,*pfVar16,*puVar14,*(char *)((long)puVar19 + 0xc));
      if (*(char *)((long)puVar19 + 0xc) == '\0') {
        pfVar16 = (float *)(*DAT_71052b8f00 + 0xf48);
        puVar14 = (undefined8 *)*puVar19;
      }
      else {
        puVar14 = (undefined8 *)*puVar19;
        pfVar16 = (float *)(puVar14[0xb] + 0x3c);
      }
      auVar21 = FUN_7103192030(*pauVar1,*pfVar16,*puVar14,*(char *)((long)puVar19 + 0xc));
      fVar27 = auVar20._8_4_;
      fVar23 = fVar27 - auVar21._8_4_;
      if (fVar23 == 0.0) {
        fVar27 = (float)_DAT_7107521008;
        fVar24 = (float)((ulong)_DAT_7107521008 >> 0x20);
        fVar30 = (float)_ConstantZero;
        fVar31 = (float)((ulong)_ConstantZero >> 0x20);
      }
      else {
        fVar24 = fVar27 / fVar23;
        fVar30 = auVar20._0_4_ + (auVar21._0_4_ - auVar20._0_4_) * fVar24;
        fVar31 = auVar20._4_4_ + (auVar21._4_4_ - auVar20._4_4_) * fVar24;
        fVar27 = fVar27 + (auVar21._8_4_ - fVar27) * fVar24;
        fVar24 = auVar20._12_4_ + (auVar21._12_4_ - auVar20._12_4_) * fVar24;
      }
      lVar17 = *(long *)(*param_5 + 0x68);
      iVar15 = *(int *)(lVar17 + 0x290);
      lVar12 = lVar17 + 0x10;
      if (*(int *)(lVar17 + 0x14) != iVar15) {
        if (*(int *)(lVar17 + 0xb4) == iVar15) {
          lVar12 = lVar17 + 0xb0;
        }
        else if (*(int *)(lVar17 + 0x154) == iVar15) {
          lVar12 = lVar17 + 0x150;
        }
        else {
          lVar12 = lVar17 + 0x1f0;
          if (*(int *)(lVar17 + 500) != iVar15) {
            lVar12 = lVar17 + 0x10;
          }
        }
      }
      plVar18 = *(long **)(*param_5 + 0x60);
      plStack_58 = (long *)CONCAT44(0,*(uint *)(lVar12 + 8));
      auVar20._8_8_ = 0;
      auVar20._0_8_ = plStack_58;
      if (*(char *)((long)plVar18 + 0xd) == '\0') {
        local_60 = (byte ***)CONCAT44(fVar31,fVar30);
      }
      else {
        fVar28 = *(float *)(*(long *)(*plVar18 + 0x30) + 0x10);
        fVar25 = fVar30 / fVar28;
        fVar30 = (float)(int)(fVar31 / fVar28);
        fVar31 = 0.0;
        fVar27 = 0.0;
        fVar24 = 0.0;
        fVar23 = fVar28 * fVar30;
        local_60 = (byte ***)CONCAT44(fVar23,fVar28 * (float)(int)fVar25);
      }
      fVar29 = 0.0;
      fVar28 = 0.0;
      fVar25 = 0.0;
      auVar26._8_4_ = *(uint *)(lVar12 + 8);
      auVar26._0_8_ = local_60;
      auVar26._12_4_ = 0;
      pppplVar10 = (long ****)0x40b44539b;
      ppppbVar11 = &local_60;
      auVar21._4_4_ = fVar31;
      auVar21._0_4_ = fVar30;
      auVar21._8_4_ = fVar27;
      auVar21._12_4_ = fVar24;
      FUN_71031a20e0(auVar20,auVar26,ZEXT416((uint)fVar23),auVar21,(ulong *)&local_80,param_5,
                     0x40b44539b,ppppbVar11,param_9,param_10,param_11,param_12);
      FUN_71031d0ce0((ulong *)param_5[1],extraout_x1,pppplVar10,ppppbVar11,param_9,param_10,param_11
                     ,param_12);
      if (local_80 != (byte ****)0x0) {
        auVar4._4_4_ = fVar25;
        auVar4._0_4_ = fVar23;
        ppppbVar11 = local_80;
        auVar4._8_4_ = fVar28;
        auVar4._12_4_ = fVar29;
        auVar5._4_4_ = fVar31;
        auVar5._0_4_ = fVar30;
        auVar5._8_4_ = fVar27;
        auVar5._12_4_ = fVar24;
        FUN_71031dac60(extraout_q0,auVar26,auVar4,auVar5,(long *)param_5[0x26],pauVar1,
                       (ulong)*(byte *)(param_7 + 0x30),local_80,param_9,param_10,param_11,param_12)
        ;
        puVar19 = *(undefined8 **)(*param_5 + 0xa0);
        (*(code *)(*local_80)[8])(local_80);
        fVar32 = SUB84(local_80[0x14],0);
        fVar33 = (float)((ulong)local_80[0x14] >> 0x20);
        fVar34 = SUB84(local_80[0x15],0);
        fVar35 = (float)((ulong)local_80[0x15] >> 0x20);
        local_90._0_4_ =
             extraout_s0 * fVar32 + auVar26._0_4_ * fVar33 + fVar23 * fVar34 + fVar30 * fVar35;
        local_90._4_4_ =
             extraout_var * fVar32 + auVar26._4_4_ * fVar33 + fVar25 * fVar34 + fVar31 * fVar35;
        auVar22._8_4_ =
             extraout_var_01 * fVar32 + auVar26._8_4_ * fVar33 + fVar28 * fVar34 + fVar27 * fVar35;
        auVar22._0_8_ = local_90;
        auVar22._12_4_ =
             extraout_var_02 * fVar32 + auVar26._12_4_ * fVar33 + fVar29 * fVar34 + fVar24 * fVar35;
        auVar20 = NEON_ext(auVar22,auVar22,8,1);
        uStack_88 = (ulong)auVar20._0_4_;
        lVar12 = **(long **)(*(long *)*puVar19 + 0x338);
        if (*(long *)(lVar12 + 8) != 0) {
          local_48 = 0;
          uVar8 = FUN_7102405040(*(long *)(lVar12 + 8),&local_48,1,ppppbVar11,param_9,param_10,
                                 param_11,param_12);
          if (uVar8 != 0xffffffff) {
            if (uVar8 < 0x19) {
              plVar18 = *(long **)(*(long *)(lVar12 + 8) + (long)(int)uVar8 * 0x50 + 0x68);
              if (((*plVar18 != 0) && ((int)plVar18[1] != -1)) &&
                 ((int)plVar18[1] == *(int *)(*plVar18 + 0x20))) {
                FUN_7103736cf0(plVar18,(undefined1 (*) [12])local_90);
              }
            }
            (**(code **)(**(long **)(lVar12 + 8) + 0x58))(*(long **)(lVar12 + 8),0x46,uVar8);
          }
        }
      }
      if (local_78 != (long *)0x0) {
        plVar18 = local_78 + 1;
        do {
          lVar12 = *plVar18;
          cVar3 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar18,0x10);
          if (bVar6) {
            *plVar18 = lVar12 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (lVar12 == 0) {
          (**(code **)(*local_78 + 0x10))(local_78);
          std::__shared_weak_count::__release_weak();
        }
      }
      plVar18 = plVar9 + 1;
      do {
        lVar12 = *plVar18;
        cVar3 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar18,0x10);
        if (bVar6) {
          *plVar18 = lVar12 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar12 != 0) {
        return;
      }
      (**(code **)(*plVar9 + 0x10))(plVar9);
      std::__shared_weak_count::__release_weak();
      return;
    }
  }
  plVar18 = plVar9 + 1;
  do {
    lVar12 = *plVar18;
    cVar3 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(plVar18,0x10);
    if (bVar6) {
      *plVar18 = lVar12 + -1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (lVar12 == 0) {
    (**(code **)(*plVar9 + 0x10))(plVar9);
    std::__shared_weak_count::__release_weak();
  }
LAB_71031a70c4:
  if (*(uint *)(*param_5 + 0x50) >> 0x1c == 0) {
    *(undefined4 *)(*param_5 + 0x50) = 0x100000e;
  }
  return;
}

