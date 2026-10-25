// addr:      71031a80d0
// offset:    0x31a80d0
// name:      FUN_71031a80d0
// mangled:   
// signature: undefined __cdecl FUN_71031a80d0(undefined1[16] param_1, undefined1[16] param_2, undefined1[16] param_3, undefined1[16] param_4, long * param_5, undefined8 param_6, long param_7, byte * * * * param_8, long * * * * param_9, undefined8 param_10, long * * * param_11, long * * * param_12)


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_71031a80d0(undefined1 param_1 [16],undefined1 param_2 [16],undefined1 param_3 [16],
                   undefined1 param_4 [16],long *param_5,undefined8 param_6,long param_7,
                   byte ****param_8,long ****param_9,undefined8 param_10,long ***param_11,
                   long ***param_12)

{
  undefined1 (*pauVar1) [16];
  int iVar2;
  char cVar3;
  bool bVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  byte ***pppbVar7;
  long *plVar8;
  uint uVar9;
  undefined8 extraout_x1;
  long ****pppplVar10;
  byte ****ppppbVar11;
  long lVar12;
  undefined8 *puVar13;
  long *plVar14;
  float *pfVar15;
  long lVar16;
  undefined8 *puVar17;
  float extraout_s0;
  float extraout_var;
  float extraout_var_00;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 extraout_q0 [16];
  float extraout_var_01;
  undefined1 auVar20 [16];
  float fVar21;
  float fVar22;
  undefined1 auVar23 [16];
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  undefined1 local_80 [8];
  ulong uStack_78;
  byte ****local_70;
  long *local_68;
  byte ***local_60;
  long *plStack_58;
  byte ***local_50;
  long *plStack_48;
  undefined8 local_38;
  
  if ((int)param_6 == 1) {
    if (*(int *)(param_5[0x26] + 0x140) == 0) {
      pauVar1 = (undefined1 (*) [16])(param_7 + 0x10);
      FUN_71031a5970((long *)&local_50,param_5,pauVar1);
      plVar8 = plStack_48;
      pppbVar7 = local_50;
      if (plStack_48 != (long *)0x0) {
        plVar14 = plStack_48 + 1;
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar14,0x10);
          if (bVar4) {
            *plVar14 = *plVar14 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        do {
          lVar12 = *plVar14;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar14,0x10);
          if (bVar4) {
            *plVar14 = lVar12 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (lVar12 == 0) {
          (**(code **)(*plStack_48 + 0x10))(plStack_48);
          std::__shared_weak_count::__release_weak();
        }
      }
      if (pppbVar7 == (byte ***)0x0) {
        if (*(uint *)(*param_5 + 0x50) >> 0x1c == 0) {
          *(undefined4 *)(*param_5 + 0x50) = 0x1000010;
        }
      }
      else {
        local_60 = pppbVar7;
        plStack_58 = plVar8;
        if (plVar8 == (long *)0x0) {
          FUN_71031a4d90((long)param_5,&local_60);
        }
        else {
          plVar14 = plVar8 + 1;
          do {
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar14,0x10);
            if (bVar4) {
              *plVar14 = *plVar14 + 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          FUN_71031a4d90((long)param_5,&local_60);
          do {
            lVar12 = *plVar14;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar14,0x10);
            if (bVar4) {
              *plVar14 = lVar12 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (lVar12 == 0) {
            (**(code **)(*plVar8 + 0x10))(plVar8);
            std::__shared_weak_count::__release_weak();
          }
        }
        puVar17 = *(undefined8 **)(*param_5 + 0x60);
        if (*(char *)((long)puVar17 + 0xc) == '\0') {
          pfVar15 = (float *)(*DAT_71052b8f00 + 0xf40);
          puVar13 = (undefined8 *)*puVar17;
        }
        else {
          puVar13 = (undefined8 *)*puVar17;
          pfVar15 = (float *)(puVar13[0xb] + 0x38);
        }
        auVar18 = FUN_7103192030(*pauVar1,*pfVar15,*puVar13,*(char *)((long)puVar17 + 0xc));
        if (*(char *)((long)puVar17 + 0xc) == '\0') {
          pfVar15 = (float *)(*DAT_71052b8f00 + 0xf48);
          puVar13 = (undefined8 *)*puVar17;
        }
        else {
          puVar13 = (undefined8 *)*puVar17;
          pfVar15 = (float *)(puVar13[0xb] + 0x3c);
        }
        auVar19 = FUN_7103192030(*pauVar1,*pfVar15,*puVar13,*(char *)((long)puVar17 + 0xc));
        fVar29 = auVar18._8_4_;
        fVar24 = fVar29 - auVar19._8_4_;
        if (fVar24 == 0.0) {
          fVar29 = (float)_DAT_7107521008;
          fVar21 = (float)((ulong)_DAT_7107521008 >> 0x20);
          fVar27 = (float)_ConstantZero;
          fVar28 = (float)((ulong)_ConstantZero >> 0x20);
        }
        else {
          fVar21 = fVar29 / fVar24;
          fVar27 = auVar18._0_4_ + (auVar19._0_4_ - auVar18._0_4_) * fVar21;
          fVar28 = auVar18._4_4_ + (auVar19._4_4_ - auVar18._4_4_) * fVar21;
          fVar29 = fVar29 + (auVar19._8_4_ - fVar29) * fVar21;
          fVar21 = auVar18._12_4_ + (auVar19._12_4_ - auVar18._12_4_) * fVar21;
        }
        lVar16 = *(long *)(*param_5 + 0x68);
        iVar2 = *(int *)(lVar16 + 0x290);
        lVar12 = lVar16 + 0x10;
        if (*(int *)(lVar16 + 0x14) != iVar2) {
          if (*(int *)(lVar16 + 0xb4) == iVar2) {
            lVar12 = lVar16 + 0xb0;
          }
          else if (*(int *)(lVar16 + 0x154) == iVar2) {
            lVar12 = lVar16 + 0x150;
          }
          else {
            lVar12 = lVar16 + 0x1f0;
            if (*(int *)(lVar16 + 500) != iVar2) {
              lVar12 = lVar16 + 0x10;
            }
          }
        }
        plVar14 = *(long **)(*param_5 + 0x60);
        plStack_48 = (long *)CONCAT44(0,*(uint *)(lVar12 + 8));
        auVar18._8_8_ = 0;
        auVar18._0_8_ = plStack_48;
        if (*(char *)((long)plVar14 + 0xd) == '\0') {
          local_50 = (byte ***)CONCAT44(fVar28,fVar27);
        }
        else {
          fVar25 = *(float *)(*(long *)(*plVar14 + 0x30) + 0x10);
          fVar22 = fVar27 / fVar25;
          fVar27 = (float)(int)(fVar28 / fVar25);
          fVar28 = 0.0;
          fVar29 = 0.0;
          fVar21 = 0.0;
          fVar24 = fVar25 * fVar27;
          local_50 = (byte ***)CONCAT44(fVar24,fVar25 * (float)(int)fVar22);
        }
        fVar26 = 0.0;
        fVar25 = 0.0;
        fVar22 = 0.0;
        auVar23._8_4_ = *(uint *)(lVar12 + 8);
        auVar23._0_8_ = local_50;
        auVar23._12_4_ = 0;
        pppplVar10 = (long ****)0x66fe94b18;
        ppppbVar11 = &local_50;
        auVar19._4_4_ = fVar28;
        auVar19._0_4_ = fVar27;
        auVar19._8_4_ = fVar29;
        auVar19._12_4_ = fVar21;
        FUN_71031a20e0(auVar18,auVar23,ZEXT416((uint)fVar24),auVar19,(ulong *)&local_70,param_5,
                       0x66fe94b18,ppppbVar11,param_9,param_10,param_11,param_12);
        FUN_71031d0ce0((ulong *)param_5[1],extraout_x1,pppplVar10,ppppbVar11,param_9,param_10,
                       param_11,param_12);
        if (local_70 != (byte ****)0x0) {
          auVar5._4_4_ = fVar22;
          auVar5._0_4_ = fVar24;
          ppppbVar11 = local_70;
          auVar5._8_4_ = fVar25;
          auVar5._12_4_ = fVar26;
          auVar6._4_4_ = fVar28;
          auVar6._0_4_ = fVar27;
          auVar6._8_4_ = fVar29;
          auVar6._12_4_ = fVar21;
          FUN_71031dac60(extraout_q0,auVar23,auVar5,auVar6,(long *)param_5[0x26],pauVar1,
                         (ulong)*(byte *)(param_7 + 0x30),local_70,param_9,param_10,param_11,
                         param_12);
          puVar17 = *(undefined8 **)(*param_5 + 0xa0);
          (*(code *)(*local_70)[8])(local_70);
          fVar30 = SUB84(local_70[0x14],0);
          fVar31 = (float)((ulong)local_70[0x14] >> 0x20);
          fVar32 = SUB84(local_70[0x15],0);
          fVar33 = (float)((ulong)local_70[0x15] >> 0x20);
          local_80._0_4_ =
               extraout_s0 * fVar30 + auVar23._0_4_ * fVar31 + fVar24 * fVar32 + fVar27 * fVar33;
          local_80._4_4_ =
               extraout_var * fVar30 + auVar23._4_4_ * fVar31 + fVar22 * fVar32 + fVar28 * fVar33;
          auVar20._8_4_ =
               extraout_var_00 * fVar30 + auVar23._8_4_ * fVar31 + fVar25 * fVar32 + fVar29 * fVar33
          ;
          auVar20._0_8_ = local_80;
          auVar20._12_4_ =
               extraout_var_01 * fVar30 + auVar23._12_4_ * fVar31 + fVar26 * fVar32 +
               fVar21 * fVar33;
          auVar18 = NEON_ext(auVar20,auVar20,8,1);
          uStack_78 = (ulong)auVar18._0_4_;
          lVar12 = **(long **)(*(long *)*puVar17 + 0x338);
          if (*(long *)(lVar12 + 8) != 0) {
            local_38 = 0;
            uVar9 = FUN_7102405040(*(long *)(lVar12 + 8),&local_38,1,ppppbVar11,param_9,param_10,
                                   param_11,param_12);
            if (uVar9 != 0xffffffff) {
              if (uVar9 < 0x19) {
                plVar14 = *(long **)(*(long *)(lVar12 + 8) + (long)(int)uVar9 * 0x50 + 0x68);
                if (((*plVar14 != 0) && ((int)plVar14[1] != -1)) &&
                   ((int)plVar14[1] == *(int *)(*plVar14 + 0x20))) {
                  FUN_7103736cf0(plVar14,(undefined1 (*) [12])local_80);
                }
              }
              (**(code **)(**(long **)(lVar12 + 8) + 0x58))(*(long **)(lVar12 + 8),0x48,uVar9);
            }
          }
        }
        if (local_68 != (long *)0x0) {
          plVar14 = local_68 + 1;
          do {
            lVar12 = *plVar14;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar14,0x10);
            if (bVar4) {
              *plVar14 = lVar12 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (lVar12 == 0) {
            (**(code **)(*local_68 + 0x10))(local_68);
            std::__shared_weak_count::__release_weak();
          }
        }
      }
      if (plVar8 != (long *)0x0) {
        plVar14 = plVar8 + 1;
        do {
          lVar12 = *plVar14;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar14,0x10);
          if (bVar4) {
            *plVar14 = lVar12 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (lVar12 == 0) {
          (**(code **)(*plVar8 + 0x10))(plVar8);
          std::__shared_weak_count::__release_weak();
        }
      }
    }
  }
  else if ((int)param_6 == 0) {
    lVar12 = param_5[0x26];
    *(undefined8 *)(lVar12 + 0x14c) = 0x800;
    *(undefined1 *)(lVar12 + 0x11) = 0;
    *(undefined1 *)(param_5[0x26] + 0xd) = 1;
    *(undefined1 *)(param_5[0x26] + 0xe) = 0;
    *(undefined1 *)(param_5[0x26] + 0xf) = 1;
    FUN_71031d71c0(param_1,param_2,param_3,param_4,(long *)param_5[0x26],param_6,param_7,param_8,
                   param_9,param_10,param_11,param_12);
    return;
  }
  return;
}

