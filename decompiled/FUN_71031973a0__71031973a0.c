// addr:      71031973a0
// offset:    0x31973a0
// name:      FUN_71031973a0
// mangled:   
// signature: undefined __cdecl FUN_71031973a0(undefined1[16] param_1, undefined1[16] param_2, undefined1[16] param_3, undefined1[16] param_4, long * param_5, ulong param_6, undefined1[16] * param_7, undefined1[16] * * param_8, undefined1[16] * * param_9, undefined8 param_10, byte * * * * param_11, long * * * param_12)


/* WARNING: Type propagation algorithm not settling */

void FUN_71031973a0(undefined1 param_1 [16],undefined1 param_2 [16],undefined1 param_3 [16],
                   undefined1 param_4 [16],long *param_5,ulong param_6,undefined1 (*param_7) [16],
                   undefined1 (**param_8) [16],undefined1 (**param_9) [16],undefined8 param_10,
                   byte ****param_11,long ***param_12)

{
  uint uVar1;
  long *plVar2;
  undefined1 (*pauVar3) [16];
  char *pcVar4;
  char cVar5;
  bool bVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  undefined1 auVar22 [16];
  undefined4 uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  long lVar26;
  long *plVar27;
  undefined8 *puVar28;
  long lVar29;
  long extraout_x1;
  long extraout_x1_00;
  long extraout_x1_01;
  long extraout_x1_02;
  long extraout_x1_03;
  long extraout_x1_04;
  long extraout_x1_05;
  long extraout_x1_06;
  long extraout_x1_07;
  ulong extraout_x1_08;
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
  undefined8 extraout_x1_20;
  undefined8 extraout_x1_21;
  code *pcVar30;
  ulong uVar31;
  long lVar32;
  char *pcVar33;
  undefined1 (*pauVar34) [16];
  undefined1 (*pauVar35) [16];
  ulong uVar36;
  ulong uVar37;
  undefined1 (*pauVar38) [16];
  long lVar39;
  undefined8 uVar40;
  undefined1 (*pauVar41) [16];
  int iVar42;
  long *plVar43;
  undefined1 (*pauVar44) [16];
  float fVar45;
  float fVar46;
  float fVar47;
  undefined4 extraout_s0;
  float extraout_s0_00;
  undefined4 extraout_s0_01;
  float extraout_s0_02;
  float fVar48;
  undefined4 extraout_var;
  float extraout_var_00;
  undefined4 extraout_var_01;
  float extraout_var_02;
  float fVar49;
  undefined4 extraout_var_03;
  float extraout_var_04;
  undefined4 extraout_var_05;
  float extraout_var_06;
  float fVar50;
  undefined4 extraout_var_07;
  float extraout_var_08;
  undefined4 extraout_var_09;
  float extraout_var_10;
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  float fVar55;
  float fVar56;
  float fVar57;
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  float fVar60;
  float fVar61;
  undefined4 uVar62;
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  long local_1c0;
  ulong uStack_1b8;
  undefined1 (*local_1b0) [16];
  undefined1 (*local_1a8) [16];
  long local_1a0 [2];
  undefined1 (**local_190) [16];
  long *local_180;
  undefined1 (*local_170) [16];
  undefined1 (*pauStack_168) [16];
  long local_160 [4];
  long *local_140;
  undefined1 (*local_130) [16];
  undefined1 (*local_128) [16];
  undefined1 (*local_120 [4]) [16];
  undefined1 (**local_100) [16];
  undefined1 (*local_f0) [16];
  undefined1 (*pauStack_e8) [16];
  undefined **local_e0 [2];
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined **local_b0 [4];
  undefined ***local_90;
  undefined4 local_7c [3];
  
  fVar45 = param_4._0_4_;
  fVar55 = param_4._4_4_;
  fVar56 = param_4._8_4_;
  fVar57 = param_4._12_4_;
  switch(param_6 & 0xffffffff) {
  case 0:
    lVar29 = param_5[0x26];
    *(undefined8 *)(lVar29 + 0x14c) = 1;
    *(undefined1 *)(lVar29 + 0x11) = 0;
    *(bool *)(param_5[0x26] + 0xd) = (int)param_5[3] == 3;
    *(undefined1 *)(param_5[0x26] + 0xe) = 0;
    *(undefined1 *)(param_5[0x26] + 0xf) = 0;
    FUN_71031d71c0(param_1,param_2,param_3,param_4,(long *)param_5[0x26],param_6,param_7,
                   (byte ****)param_8,(long ****)param_9,param_10,param_11,param_12);
    iVar42 = (int)param_5[3];
    if (iVar42 == 2) {
      lVar39 = param_5[0x25];
      *(undefined1 *)(lVar39 + 9) = 0;
      *(undefined8 *)(lVar39 + 0x28) = *(undefined8 *)(lVar39 + 0x20);
      *(undefined8 *)(lVar39 + 0x48) = 0;
      *(undefined8 *)(lVar39 + 0x40) = 0x7f7fffff7f7fffff;
      *(undefined8 *)(lVar39 + 0x58) = 0;
      *(undefined8 *)(lVar39 + 0x50) = 0xff7fffffff7fffff;
      *(undefined2 *)(lVar39 + 0x38) = 0;
      FUN_71031d53c0(lVar39 + 0x60);
      *(undefined4 *)(*(long *)(lVar39 + 0x90) + 0x88) = 0;
      lVar29 = lVar39 + 0xd0;
    }
    else if (iVar42 == 1) {
      lVar39 = param_5[0x25];
      *(undefined1 *)(lVar39 + 9) = 0;
      *(undefined8 *)(lVar39 + 0x28) = *(undefined8 *)(lVar39 + 0x20);
      *(undefined8 *)(lVar39 + 0x48) = 0;
      *(undefined8 *)(lVar39 + 0x40) = 0x7f7fffff7f7fffff;
      *(undefined8 *)(lVar39 + 0x58) = 0;
      *(undefined8 *)(lVar39 + 0x50) = 0xff7fffffff7fffff;
      *(undefined2 *)(lVar39 + 0x38) = 0;
      FUN_71031d53c0(lVar39 + 0x60);
      *(undefined4 *)(*(long *)(lVar39 + 0x90) + 0x88) = 0;
      lVar29 = lVar39 + 0x100;
    }
    else {
      if (iVar42 != 0) {
        return;
      }
      lVar39 = param_5[0x25];
      *(undefined1 *)(lVar39 + 9) = 0;
      *(undefined8 *)(lVar39 + 0x28) = *(undefined8 *)(lVar39 + 0x20);
      *(undefined8 *)(lVar39 + 0x48) = 0;
      *(undefined8 *)(lVar39 + 0x40) = 0x7f7fffff7f7fffff;
      *(undefined8 *)(lVar39 + 0x58) = 0;
      *(undefined8 *)(lVar39 + 0x50) = 0xff7fffffff7fffff;
      *(undefined2 *)(lVar39 + 0x38) = 0;
      FUN_71031d53c0(lVar39 + 0x60);
      *(undefined4 *)(*(long *)(lVar39 + 0x90) + 0x88) = 0;
      lVar29 = lVar39 + 0xb0;
    }
    *(long *)(lVar39 + 0xa8) = lVar29;
    *(undefined1 *)(lVar39 + 0x98) = 0;
    *(undefined1 *)(lVar39 + 0xa0) = 0;
    *(undefined8 *)(lVar39 + 0x130) = 0x6a7ff8368;
    return;
  case 1:
    if ((int)param_5[3] == 3) {
      return;
    }
    lVar29 = *param_5;
    lVar39 = *(long *)(lVar29 + 0x68);
    iVar42 = *(int *)(lVar39 + 0x290);
    pcVar33 = (char *)(lVar39 + 0x10);
    if (*(int *)(lVar39 + 0x14) != iVar42) {
      if (*(int *)(lVar39 + 0xb4) != iVar42) {
        if (*(int *)(lVar39 + 0x154) == iVar42) {
          cVar5 = *(char *)(lVar39 + 0x150);
        }
        else {
          pcVar4 = (char *)(lVar39 + 0x1f0);
          if (*(int *)(lVar39 + 500) != iVar42) {
            pcVar4 = pcVar33;
          }
          cVar5 = *pcVar4;
        }
        goto joined_r0x00710319752c;
      }
      pcVar33 = (char *)(lVar39 + 0xb0);
    }
    cVar5 = *pcVar33;
joined_r0x00710319752c:
    if (cVar5 != '\0') {
      FUN_71031d71c0(param_1,param_2,param_3,param_4,(long *)param_5[0x26],param_6,param_7,
                     (byte ****)param_8,(long ****)param_9,param_10,param_11,param_12);
      uVar62 = *(undefined4 *)(*(long *)(*param_5 + 0x30) + 0x120);
      fVar45 = FUN_7103198780((long)param_5);
      FUN_71031d6960(uVar62,0,100.0 - fVar45,param_5[0x25],1);
      return;
    }
    if (*(uint *)(lVar29 + 0x50) >> 0x1c != 0) {
      return;
    }
    *(undefined4 *)(lVar29 + 0x50) = 0x1000013;
    return;
  default:
    return;
  case 3:
    goto switchD_71031973e4_caseD_3;
  case 4:
    if (*(char *)(param_5[0x25] + 9) == '\0') {
      return;
    }
    local_128 = (undefined1 (*) [16])0x0;
    local_120[0] = (undefined1 (*) [16])0x0;
    local_130 = (undefined1 (*) [16])0x0;
    fVar46 = FUN_7103198780((long)param_5);
    do {
      lVar29 = param_5[0x25];
      if (*(long *)(lVar29 + 0x88) == 0) break;
      FUN_71031d6840(&local_f0,lVar29);
      lVar29 = extraout_x1;
      if ((ulong)((long)pauStack_e8 - (long)local_f0 >> 4) < 2) {
LAB_7103197aa8:
        iVar42 = 0;
      }
      else {
        lVar39 = *(long *)(*param_5 + 0x68);
        iVar42 = *(int *)(lVar39 + 0x290);
        fVar47 = ((float)local_d0 + (float)local_c0) * 0.5;
        fVar48 = ((float)((ulong)local_d0 >> 0x20) + local_c0._4_4_) * 0.5;
        fVar49 = ((float)uStack_c8 + (float)uStack_b8) * 0.5;
        fVar50 = ((float)((ulong)uStack_c8 >> 0x20) + uStack_b8._4_4_) * 0.5;
        lVar29 = lVar39 + 0x10;
        if (*(int *)(lVar39 + 0x14) != iVar42) {
          if (*(int *)(lVar39 + 0xb4) == iVar42) {
            lVar29 = lVar39 + 0xb0;
          }
          else if (*(int *)(lVar39 + 0x154) == iVar42) {
            lVar29 = lVar39 + 0x150;
          }
          else {
            lVar29 = lVar39 + 0x1f0;
            if (*(int *)(lVar39 + 500) != iVar42) {
              lVar29 = lVar39 + 0x10;
            }
          }
        }
        local_170 = (undefined1 (*) [16])CONCAT44(fVar48,fVar47);
        pauStack_168 = (undefined1 (*) [16])(ulong)*(uint *)(lVar29 + 8);
        param_2 = ZEXT816(0x7f7fffff7f7fffff);
        param_3 = ZEXT816(0xff7fffffff7fffff);
        if (local_f0 != pauStack_e8) {
          uVar37 = (long)pauStack_e8 + (-0x10 - (long)local_f0);
          pauVar35 = local_f0;
          if (((uint)uVar37 >> 4 & 1) == 0) {
            pauVar35 = local_f0 + 1;
            fVar60 = *(float *)*local_f0;
            fVar61 = *(float *)(*local_f0 + 4);
            *(float *)(*local_f0 + 8) = *(float *)(*local_f0 + 8) - fVar49;
            *(float *)(*local_f0 + 0xc) = *(float *)(*local_f0 + 0xc) - fVar50;
            *(float *)*local_f0 = fVar60 - fVar47;
            *(float *)(*local_f0 + 4) = fVar61 - fVar48;
          }
          if (0xf < uVar37) {
            uVar37 = (long)pauStack_e8 + (-0x20 - (long)pauVar35);
            uVar1 = ((uint)(uVar37 >> 5) & 0x7ffffff) + 1;
            if ((uVar1 & 3) != 0) {
              lVar29 = -((ulong)uVar1 & 3);
              pauVar34 = pauVar35;
              do {
                fVar60 = *(float *)*pauVar34;
                fVar61 = *(float *)(*pauVar34 + 4);
                fVar17 = *(float *)pauVar34[1];
                fVar18 = *(float *)(pauVar34[1] + 4);
                fVar19 = *(float *)(pauVar34[1] + 8);
                fVar20 = *(float *)(pauVar34[1] + 0xc);
                lVar29 = lVar29 + 1;
                pauVar35 = pauVar34 + 2;
                *(float *)(*pauVar34 + 8) = *(float *)(*pauVar34 + 8) - fVar49;
                *(float *)(*pauVar34 + 0xc) = *(float *)(*pauVar34 + 0xc) - fVar50;
                *(float *)*pauVar34 = fVar60 - fVar47;
                *(float *)(*pauVar34 + 4) = fVar61 - fVar48;
                *(float *)(pauVar34[1] + 8) = fVar19 - fVar49;
                *(float *)(pauVar34[1] + 0xc) = fVar20 - fVar50;
                *(float *)pauVar34[1] = fVar17 - fVar47;
                *(float *)(pauVar34[1] + 4) = fVar18 - fVar48;
                pauVar34 = pauVar35;
              } while (lVar29 != 0);
            }
            if (0x5f < uVar37) {
              do {
                fVar60 = *(float *)*pauVar35;
                fVar61 = *(float *)(*pauVar35 + 4);
                fVar17 = *(float *)pauVar35[1];
                fVar18 = *(float *)(pauVar35[1] + 4);
                fVar19 = *(float *)(pauVar35[1] + 8);
                fVar20 = *(float *)(pauVar35[1] + 0xc);
                *(float *)(*pauVar35 + 8) = *(float *)(*pauVar35 + 8) - fVar49;
                *(float *)(*pauVar35 + 0xc) = *(float *)(*pauVar35 + 0xc) - fVar50;
                *(float *)*pauVar35 = fVar60 - fVar47;
                *(float *)(*pauVar35 + 4) = fVar61 - fVar48;
                *(float *)(pauVar35[1] + 8) = fVar19 - fVar49;
                *(float *)(pauVar35[1] + 0xc) = fVar20 - fVar50;
                *(float *)pauVar35[1] = fVar17 - fVar47;
                *(float *)(pauVar35[1] + 4) = fVar18 - fVar48;
                fVar60 = *(float *)pauVar35[2];
                fVar61 = *(float *)(pauVar35[2] + 4);
                fVar17 = *(float *)(pauVar35[2] + 0xc);
                fVar18 = *(float *)pauVar35[3];
                fVar19 = *(float *)(pauVar35[3] + 4);
                fVar20 = *(float *)(pauVar35[3] + 8);
                fVar21 = *(float *)(pauVar35[3] + 0xc);
                *(float *)(pauVar35[2] + 8) = *(float *)(pauVar35[2] + 8) - fVar49;
                *(float *)(pauVar35[2] + 0xc) = fVar17 - fVar50;
                *(float *)pauVar35[2] = fVar60 - fVar47;
                *(float *)(pauVar35[2] + 4) = fVar61 - fVar48;
                *(float *)(pauVar35[3] + 8) = fVar20 - fVar49;
                *(float *)(pauVar35[3] + 0xc) = fVar21 - fVar50;
                *(float *)pauVar35[3] = fVar18 - fVar47;
                *(float *)(pauVar35[3] + 4) = fVar19 - fVar48;
                fVar60 = *(float *)pauVar35[4];
                fVar61 = *(float *)(pauVar35[4] + 4);
                fVar17 = *(float *)(pauVar35[4] + 0xc);
                fVar18 = *(float *)pauVar35[5];
                fVar19 = *(float *)(pauVar35[5] + 4);
                fVar20 = *(float *)(pauVar35[5] + 8);
                fVar21 = *(float *)(pauVar35[5] + 0xc);
                *(float *)(pauVar35[4] + 8) = *(float *)(pauVar35[4] + 8) - fVar49;
                *(float *)(pauVar35[4] + 0xc) = fVar17 - fVar50;
                *(float *)pauVar35[4] = fVar60 - fVar47;
                *(float *)(pauVar35[4] + 4) = fVar61 - fVar48;
                *(float *)(pauVar35[5] + 8) = fVar20 - fVar49;
                *(float *)(pauVar35[5] + 0xc) = fVar21 - fVar50;
                *(float *)pauVar35[5] = fVar18 - fVar47;
                *(float *)(pauVar35[5] + 4) = fVar19 - fVar48;
                fVar60 = *(float *)pauVar35[6];
                fVar61 = *(float *)(pauVar35[6] + 4);
                fVar17 = *(float *)(pauVar35[6] + 0xc);
                fVar18 = *(float *)pauVar35[7];
                fVar19 = *(float *)(pauVar35[7] + 4);
                fVar20 = *(float *)(pauVar35[7] + 8);
                fVar21 = *(float *)(pauVar35[7] + 0xc);
                *(float *)(pauVar35[6] + 8) = *(float *)(pauVar35[6] + 8) - fVar49;
                *(float *)(pauVar35[6] + 0xc) = fVar17 - fVar50;
                *(float *)pauVar35[6] = fVar60 - fVar47;
                *(float *)(pauVar35[6] + 4) = fVar61 - fVar48;
                *(float *)(pauVar35[7] + 8) = fVar20 - fVar49;
                *(float *)(pauVar35[7] + 0xc) = fVar21 - fVar50;
                *(float *)pauVar35[7] = fVar18 - fVar47;
                *(float *)(pauVar35[7] + 4) = fVar19 - fVar48;
                pauVar35 = pauVar35 + 8;
              } while (pauVar35 != pauStack_e8);
            }
          }
          param_2 = ZEXT816(0x7f7fffff7f7fffff);
          param_3 = ZEXT816(0xff7fffffff7fffff);
          if (local_f0 != pauStack_e8) {
            fVar49 = (float)*(undefined8 *)(*local_f0 + 8);
            fVar50 = (float)((ulong)*(undefined8 *)(*local_f0 + 8) >> 0x20);
            param_2 = *local_f0;
            param_3 = *local_f0;
            fVar47 = (float)*(undefined8 *)*local_f0;
            fVar48 = (float)((ulong)*(undefined8 *)*local_f0 >> 0x20);
            pauVar35 = local_f0;
            while( true ) {
              pauVar34 = pauVar35 + 1;
              auVar58._0_4_ = -(uint)(param_3._0_4_ < fVar47);
              auVar58._4_4_ = auVar58._0_4_;
              auVar58._8_4_ = auVar58._0_4_;
              auVar58._12_4_ = auVar58._0_4_;
              auVar59._4_4_ = param_3._4_4_;
              auVar59._0_4_ = fVar47;
              auVar59._8_4_ = param_3._8_4_;
              auVar59._12_4_ = param_3._12_4_;
              auVar59 = param_3 ^ (param_3 ^ auVar59) & auVar58;
              auVar52._0_4_ = -(uint)(fVar47 < param_2._0_4_);
              auVar52._4_4_ = auVar52._0_4_;
              auVar52._8_4_ = auVar52._0_4_;
              auVar52._12_4_ = auVar52._0_4_;
              auVar53._4_4_ = param_2._4_4_;
              auVar53._0_4_ = fVar47;
              auVar53._8_4_ = param_2._8_4_;
              auVar53._12_4_ = param_2._12_4_;
              auVar53 = param_2 ^ (param_2 ^ auVar53) & auVar52;
              auVar51._0_4_ = -(uint)(fVar48 < auVar53._4_4_);
              auVar51._4_4_ = auVar51._0_4_;
              auVar51._8_4_ = auVar51._0_4_;
              auVar51._12_4_ = auVar51._0_4_;
              auVar9._4_4_ = fVar48;
              auVar9._0_4_ = auVar53._0_4_;
              auVar9._8_4_ = auVar53._8_4_;
              auVar9._12_4_ = auVar53._12_4_;
              param_2 = auVar53 ^ (auVar53 ^ auVar9) & auVar51;
              fVar56 = auVar59._8_4_;
              fVar57 = auVar59._12_4_;
              fVar45 = auVar59._0_4_;
              auVar54._0_4_ = -(uint)(auVar59._4_4_ < fVar48);
              auVar54._4_4_ = auVar54._0_4_;
              auVar54._8_4_ = auVar54._0_4_;
              auVar54._12_4_ = auVar54._0_4_;
              auVar10._4_4_ = fVar48;
              auVar10._0_4_ = fVar45;
              auVar10._8_4_ = fVar56;
              auVar10._12_4_ = fVar57;
              param_3 = auVar59 ^ (auVar59 ^ auVar10) & auVar54;
              fVar55 = fVar48;
              if (pauStack_e8 == pauVar34) break;
              fVar49 = (float)*(undefined8 *)(pauVar35[1] + 8);
              fVar50 = (float)((ulong)*(undefined8 *)(pauVar35[1] + 8) >> 0x20);
              fVar47 = (float)*(undefined8 *)*pauVar34;
              fVar48 = (float)((ulong)*(undefined8 *)*pauVar34 >> 0x20);
              pauVar35 = pauVar34;
            }
          }
        }
        param_8 = &local_170;
        param_9 = &local_f0;
        uStack_c8 = param_2._8_8_;
        local_d0 = param_2._0_8_;
        uStack_b8 = param_3._8_8_;
        local_c0 = param_3._0_8_;
        auVar7._4_4_ = fVar48;
        auVar7._0_4_ = fVar47;
        param_7 = (undefined1 (*) [16])0x6a7ff8368;
        auVar7._8_4_ = fVar49;
        auVar7._12_4_ = fVar50;
        auVar11._4_4_ = fVar55;
        auVar11._0_4_ = fVar45;
        auVar11._8_4_ = fVar56;
        auVar11._12_4_ = fVar57;
        FUN_7103198b90(auVar7,param_2,param_3,auVar11,&local_1b0,param_5,0x6a7ff8368,
                       (long ****)param_8,(byte ****)param_9,param_10,param_11,param_12);
        pauVar35 = local_128;
        pauVar41 = local_130;
        pauVar34 = local_1b0;
        lVar29 = extraout_x1_00;
        if (local_1b0 == (undefined1 (*) [16])0x0) goto LAB_7103197a80;
        if (local_128 == local_120[0]) {
          lVar39 = (long)local_128 - (long)local_130 >> 4;
          uVar37 = lVar39 + 1;
          if (uVar37 >> 0x3c != 0) {
                    /* WARNING: Subroutine does not return */
            std::__vector_base_common<true>::__throw_length_error();
          }
          if ((ulong)((long)local_120[0] - (long)local_130 >> 4) < 0x7ffffffffffffff) {
            uVar31 = (long)local_120[0] - (long)local_130 >> 3;
            if (uVar37 <= uVar31) {
              uVar37 = uVar31;
            }
            if (uVar37 != 0) {
              if (uVar37 >> 0x3c != 0) {
                    /* WARNING: Subroutine does not return */
                abort();
              }
              goto LAB_7103197880;
            }
          }
          else {
            uVar37 = 0xfffffffffffffff;
LAB_7103197880:
            lVar32 = uVar37 * 0x10;
            if (lVar32 == 0) {
              lVar32 = 1;
            }
            lVar26 = FUN_710392e290(0x10,lVar32,(long ****)param_7,(byte ****)param_8,
                                    (long ****)param_9,param_10,param_11,param_12);
            lVar29 = extraout_x1_01;
            if (lVar26 != 0) goto LAB_71031978dc;
            if (DAT_7105332f00 != (long *)0x0) {
              local_7c[0] = 0;
              param_7 = (undefined1 (*) [16])&local_1c0;
              local_1c0 = lVar32;
              auVar53 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,local_7c);
              lVar29 = auVar53._8_8_;
              if (((auVar53._0_8_ & 1) != 0) &&
                 (lVar26 = FUN_710392e290(0x10,lVar32,(long ****)param_7,(byte ****)param_8,
                                          (long ****)param_9,param_10,param_11,param_12),
                 lVar29 = extraout_x1_02, lVar26 != 0)) goto LAB_71031978dc;
            }
          }
          lVar26 = 0;
LAB_71031978dc:
          pauVar3 = (undefined1 (*) [16])(lVar26 + lVar39 * 0x10);
          *(undefined1 (**) [16])*pauVar3 = pauVar34;
          *(undefined1 (**) [16])(*pauVar3 + 8) = local_1a8;
          if (local_1a8 != (undefined1 (*) [16])0x0) {
            plVar27 = (long *)((long)local_1a8 + 8);
            do {
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(plVar27,0x10);
              if (bVar6) {
                *plVar27 = *plVar27 + 1;
                cVar5 = ExclusiveMonitorsStatus();
              }
              pauVar41 = local_130;
              pauVar35 = local_128;
            } while (cVar5 != '\0');
          }
          local_120[0] = (undefined1 (*) [16])(lVar26 + uVar37 * 0x10);
          pauVar34 = pauVar3 + 1;
          if (pauVar35 != pauVar41) {
            uVar37 = (long)pauVar35 + (-0x10 - (long)pauVar41);
            pauVar38 = pauVar3;
            pauVar44 = pauVar35;
            if (((uint)uVar37 >> 4 & 1) == 0) {
              pauVar44 = pauVar35 + -1;
              pauVar38 = pauVar3 + -1;
              *(undefined8 *)*pauVar38 = *(undefined8 *)*pauVar44;
              *(undefined8 *)(pauVar3[-1] + 8) = *(undefined8 *)(pauVar35[-1] + 8);
              *(undefined8 *)*pauVar44 = 0;
              *(undefined8 *)(pauVar35[-1] + 8) = 0;
            }
            if (0xf < uVar37) {
              uVar31 = (long)pauVar44 + (-0x20 - (long)pauVar41);
              pauVar35 = pauVar44;
              if (((uint)uVar31 >> 5 & 1) == 0) {
                *(undefined8 *)pauVar38[-1] = *(undefined8 *)pauVar44[-1];
                *(undefined8 *)(pauVar38[-1] + 8) = *(undefined8 *)(pauVar44[-1] + 8);
                *(undefined8 *)pauVar44[-1] = 0;
                *(undefined8 *)(pauVar44[-1] + 8) = 0;
                pauVar35 = pauVar44 + -2;
                *(undefined8 *)pauVar38[-2] = *(undefined8 *)*pauVar35;
                *(undefined8 *)(pauVar38[-2] + 8) = *(undefined8 *)(pauVar44[-2] + 8);
                pauVar38 = pauVar38 + -2;
                *(undefined8 *)*pauVar35 = 0;
                *(undefined8 *)(pauVar44[-2] + 8) = 0;
              }
              if (0x1f < uVar31) {
                pauVar38 = pauVar38 + -2;
                do {
                  *(undefined8 *)pauVar38[1] = *(undefined8 *)pauVar35[-1];
                  *(undefined8 *)(pauVar38[1] + 8) = *(undefined8 *)(pauVar35[-1] + 8);
                  uVar40 = *(undefined8 *)pauVar35[-2];
                  *(undefined8 *)pauVar35[-1] = 0;
                  *(undefined8 *)(pauVar35[-1] + 8) = 0;
                  *(undefined8 *)*pauVar38 = uVar40;
                  *(undefined8 *)(*pauVar38 + 8) = *(undefined8 *)(pauVar35[-2] + 8);
                  uVar40 = *(undefined8 *)pauVar35[-3];
                  *(undefined8 *)pauVar35[-2] = 0;
                  *(undefined8 *)(pauVar35[-2] + 8) = 0;
                  *(undefined8 *)pauVar38[-1] = uVar40;
                  *(undefined8 *)(pauVar38[-1] + 8) = *(undefined8 *)(pauVar35[-3] + 8);
                  *(undefined8 *)pauVar35[-3] = 0;
                  *(undefined8 *)(pauVar35[-3] + 8) = 0;
                  pauVar44 = pauVar35 + -4;
                  *(undefined8 *)pauVar38[-2] = *(undefined8 *)*pauVar44;
                  *(undefined8 *)(pauVar38[-2] + 8) = *(undefined8 *)(pauVar35[-4] + 8);
                  pauVar38 = pauVar38 + -4;
                  *(undefined8 *)*pauVar44 = 0;
                  *(undefined8 *)(pauVar35[-4] + 8) = 0;
                  pauVar35 = pauVar44;
                } while (pauVar41 != pauVar44);
              }
            }
            pauVar3 = (undefined1 (*) [16])
                      (lVar26 + (lVar39 + (uVar37 >> 4 ^ 0xffffffffffffffff)) * 0x10);
            pauVar35 = local_128;
            pauVar41 = local_130;
          }
joined_r0x0071031979fc:
          local_130 = pauVar3;
          local_128 = pauVar34;
          if (pauVar35 != pauVar41) {
            do {
              plVar27 = *(long **)(pauVar35[-1] + 8);
              pauVar35 = pauVar35 + -1;
              if (plVar27 != (long *)0x0) {
                plVar43 = plVar27 + 1;
                do {
                  lVar39 = *plVar43;
                  cVar5 = '\x01';
                  bVar6 = (bool)ExclusiveMonitorPass(plVar43,0x10);
                  if (bVar6) {
                    *plVar43 = lVar39 + -1;
                    cVar5 = ExclusiveMonitorsStatus();
                  }
                } while (cVar5 != '\0');
                if (lVar39 == 0) goto LAB_7103197a30;
              }
              if (pauVar35 == pauVar41) break;
            } while( true );
          }
          if (pauVar41 != (undefined1 (*) [16])0x0) {
            FUN_710392eb40((ulong)pauVar41);
            lVar29 = extraout_x1_04;
          }
          if (local_1b0 != (undefined1 (*) [16])0x0) goto LAB_7103197a64;
          goto LAB_7103197a80;
        }
        *(undefined1 (**) [16])*local_128 = local_1b0;
        *(undefined1 (**) [16])(*local_128 + 8) = local_1a8;
        if (local_1a8 != (undefined1 (*) [16])0x0) {
          plVar27 = (long *)((long)local_1a8 + 8);
          do {
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(plVar27,0x10);
            if (bVar6) {
              *plVar27 = *plVar27 + 1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
        }
        local_128 = local_128 + 1;
        if (local_1b0 == (undefined1 (*) [16])0x0) {
LAB_7103197a80:
          iVar42 = 0;
        }
        else {
LAB_7103197a64:
          fVar47 = (float)(**(code **)(*(long *)*local_1b0 + 0x10))();
          fVar46 = fVar46 + fVar47;
          iVar42 = 5;
          lVar29 = extraout_x1_05;
          if (fVar46 < 100.0) goto LAB_7103197a80;
        }
        if (local_1a8 != (undefined1 (*) [16])0x0) {
          plVar27 = (long *)((long)local_1a8 + 8);
          do {
            lVar39 = *plVar27;
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(plVar27,0x10);
            if (bVar6) {
              *plVar27 = lVar39 + -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (lVar39 == 0) {
            (**(code **)(*(long *)local_1a8 + 0x10))(local_1a8);
            std::__shared_weak_count::__release_weak();
            lVar29 = extraout_x1_07;
          }
        }
        if (iVar42 == 0) goto LAB_7103197aa8;
      }
      if (local_f0 != (undefined1 (*) [16])0x0) {
        pauStack_e8 = local_f0;
        FUN_710392eb40((ulong)local_f0);
        lVar29 = extraout_x1_06;
      }
    } while (iVar42 == 0);
    FUN_71031d0ce0((ulong *)param_5[1],lVar29,(long ****)param_7,(byte ****)param_8,
                   (long ****)param_9,param_10,param_11,param_12);
    FUN_71031d6ab0(param_5[0x25]);
    pauVar34 = local_128;
    uVar62 = extraout_s0;
    uVar23 = extraout_var;
    uVar24 = extraout_var_03;
    uVar25 = extraout_var_07;
    pauVar35 = local_130;
    do {
      if (pauVar35 == pauVar34) {
        auVar8._4_4_ = uVar23;
        auVar8._0_4_ = uVar62;
        auVar8._8_4_ = uVar24;
        auVar8._12_4_ = uVar25;
        auVar12._4_4_ = fVar55;
        auVar12._0_4_ = fVar45;
        auVar12._8_4_ = fVar56;
        auVar12._12_4_ = fVar57;
        FUN_71031d8780(auVar8,param_2,param_3,auVar12,(long *)param_5[0x26]);
        pauVar34 = local_130;
        pauVar35 = local_128;
        if (local_130 == (undefined1 (*) [16])0x0) {
          return;
        }
        while (pauVar35 != pauVar34) {
          plVar27 = *(long **)(*(undefined1 (*) [16])((long)pauVar35 + 0xfffffffffffffff0) + 8);
          pauVar35 = (undefined1 (*) [16])((long)pauVar35 + 0xfffffffffffffff0);
          if (plVar27 != (long *)0x0) {
            plVar43 = plVar27 + 1;
            do {
              lVar29 = *plVar43;
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(plVar43,0x10);
              if (bVar6) {
                *plVar43 = lVar29 + -1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            if (lVar29 == 0) {
              (**(code **)(*plVar27 + 0x10))(plVar27);
              std::__shared_weak_count::__release_weak();
            }
          }
        }
        if (local_130 == (undefined1 (*) [16])0x0) {
          return;
        }
        local_128 = pauVar34;
        FUN_710392eb40((ulong)local_130);
        return;
      }
      plVar27 = *(long **)*pauVar35;
      if (*(char *)((long)plVar27 + 0x131) != '\x01') {
        *(undefined1 *)((long)plVar27 + 0x131) = 1;
        (**(code **)(*plVar27 + 0x118))(plVar27,1);
      }
      plVar27 = *(long **)(*param_5 + 0xa0);
      uVar37 = param_5[5] & 0xffffffffff;
      if (uVar37 < 0x54e1a6016) {
        if (uVar37 < 0x43c9d190d) {
          if (uVar37 == 0x3cb4f840e) {
            iVar42 = 0x2a;
          }
          else if (uVar37 == 0x3d39294e1) {
            iVar42 = 0x23;
          }
          else {
            if (uVar37 != 0x43246913f) goto LAB_7103197d20;
            iVar42 = 0x27;
          }
        }
        else if (uVar37 < 0x47870e09c) {
          if (uVar37 == 0x43c9d190d) {
            iVar42 = 0x20;
          }
          else if (uVar37 == 0x45a71b90e) {
            iVar42 = 0x2b;
          }
          else {
LAB_7103197d20:
            iVar42 = 0x1d;
          }
        }
        else if (uVar37 == 0x47870e09c) {
          iVar42 = 0x21;
        }
        else {
          if (uVar37 != 0x4a07a9211) goto LAB_7103197d20;
          iVar42 = 0x1f;
        }
      }
      else if (uVar37 < 0x641d5a82a) {
        if (uVar37 == 0x54e1a6016) {
          iVar42 = 0x26;
        }
        else if (uVar37 == 0x5631d0a80) {
          iVar42 = 0x24;
        }
        else {
          if (uVar37 != 0x5a80d9ff3) goto LAB_7103197d20;
          iVar42 = 0x1e;
        }
      }
      else if (uVar37 < 0x6df0f25ff) {
        if (uVar37 == 0x641d5a82a) {
          iVar42 = 0x25;
        }
        else {
          if (uVar37 != 0x6bae7cde2) goto LAB_7103197d20;
          iVar42 = 0x29;
        }
      }
      else {
        iVar42 = 0x22;
        if (uVar37 != 0x6df0f25ff) {
          if (uVar37 != 0x6f3ce57cb) goto LAB_7103197d20;
          iVar42 = 0x28;
        }
      }
      plVar43 = *(long **)*pauVar35;
      (**(code **)(*plVar43 + 0x40))(plVar43);
      fVar46 = *(float *)(plVar43 + 0x14);
      fVar47 = *(float *)((long)plVar43 + 0xa4);
      fVar48 = *(float *)(plVar43 + 0x15);
      fVar49 = *(float *)((long)plVar43 + 0xac);
      fVar50 = extraout_s0_00 * fVar46 + param_2._0_4_ * fVar47 + param_3._0_4_ * fVar48 +
               fVar45 * fVar49;
      fVar60 = extraout_var_00 * fVar46 + param_2._4_4_ * fVar47 + param_3._4_4_ * fVar48 +
               fVar55 * fVar49;
      fVar61 = extraout_var_04 * fVar46 + param_2._8_4_ * fVar47 + param_3._8_4_ * fVar48 +
               fVar56 * fVar49;
      fVar46 = extraout_var_08 * fVar46 + param_2._12_4_ * fVar47 + param_3._12_4_ * fVar48 +
               fVar57 * fVar49;
      auVar13._4_4_ = fVar60;
      auVar13._0_4_ = fVar50;
      auVar13._8_4_ = fVar61;
      auVar13._12_4_ = fVar46;
      auVar14._4_4_ = fVar60;
      auVar14._0_4_ = fVar50;
      auVar14._8_4_ = fVar61;
      auVar14._12_4_ = fVar46;
      auVar53 = NEON_ext(auVar13,auVar14,8,1);
      param_2._8_8_ = auVar53._8_8_;
      param_2._0_8_ = (undefined1 (*) [16])CONCAT44(0,auVar53._0_4_);
      local_f0 = (undefined1 (*) [16])CONCAT44(fVar60,fVar50);
      pauStack_e8 = param_2._0_8_;
      FUN_71031b7a30(0.0,plVar27,iVar42,(undefined1 (*) [16])&local_f0,(byte ****)param_8,
                     (long ****)param_9,param_10,param_11,param_12);
      uVar62 = extraout_s0_01;
      uVar23 = extraout_var_01;
      uVar24 = extraout_var_05;
      uVar25 = extraout_var_09;
      pauVar35 = pauVar35 + 1;
    } while( true );
  }
LAB_7103197a30:
  (**(code **)(*plVar27 + 0x10))(plVar27);
  std::__shared_weak_count::__release_weak();
  pauVar34 = local_128;
  lVar29 = extraout_x1_03;
  pauVar3 = local_130;
  goto joined_r0x0071031979fc;
switchD_71031973e4_caseD_3:
  if (param_7[3][1] == '\0') {
    return;
  }
  if ((int)param_5[3] != 3) {
    return;
  }
  local_c0 = local_e0;
  local_e0[0] = &PTR_FUN_710517d938;
  local_b0[0] = &PTR_FUN_710517d980;
  local_f0 = (undefined1 (*) [16])(param_5 + 0x1d);
  local_90 = local_b0;
  lVar29 = FUN_7103198a80((long *)&local_f0);
  if (local_b0 == local_90) {
    pcVar30 = (code *)(*local_90)[4];
LAB_7103197ec8:
    (*pcVar30)();
  }
  else if (local_90 != (undefined ***)0x0) {
    pcVar30 = (code *)(*local_90)[5];
    goto LAB_7103197ec8;
  }
  if (local_e0 == local_c0) {
    pcVar30 = (code *)(*local_c0)[4];
LAB_7103197ef8:
    (*pcVar30)();
  }
  else if (local_c0 != (undefined ***)0x0) {
    pcVar30 = (code *)(*local_c0)[5];
    goto LAB_7103197ef8;
  }
  if (lVar29 == 0) {
    if (*(uint *)(*param_5 + 0x50) >> 0x1c != 0) {
      return;
    }
    *(undefined4 *)(*param_5 + 0x50) = 0x1000015;
    return;
  }
  uVar31 = param_5[5];
  uVar37 = uVar31 & 0xffffffffff;
  if (uVar37 < 0x54e1a6016) {
    if (uVar37 < 0x43c9d190d) {
      if (uVar37 == 0x3cb4f840e) {
        iVar42 = 0x2a;
      }
      else if (uVar37 == 0x3d39294e1) {
        iVar42 = 0x23;
      }
      else {
        if (uVar37 != 0x43246913f) goto LAB_710319814c;
        iVar42 = 0x27;
      }
    }
    else if (uVar37 < 0x47870e09c) {
      if (uVar37 == 0x43c9d190d) {
        iVar42 = 0x20;
      }
      else if (uVar37 == 0x45a71b90e) {
        iVar42 = 0x2b;
      }
      else {
LAB_710319814c:
        iVar42 = 0x1d;
      }
    }
    else if (uVar37 == 0x47870e09c) {
      iVar42 = 0x21;
    }
    else {
      if (uVar37 != 0x4a07a9211) goto LAB_710319814c;
      iVar42 = 0x1f;
    }
  }
  else if (uVar37 < 0x641d5a82a) {
    if (uVar37 == 0x54e1a6016) {
      iVar42 = 0x26;
    }
    else if (uVar37 == 0x5631d0a80) {
      iVar42 = 0x24;
    }
    else {
      if (uVar37 != 0x5a80d9ff3) goto LAB_710319814c;
      iVar42 = 0x1e;
    }
  }
  else if (uVar37 < 0x6df0f25ff) {
    if (uVar37 == 0x641d5a82a) {
      iVar42 = 0x25;
    }
    else {
      if (uVar37 != 0x6bae7cde2) goto LAB_710319814c;
      iVar42 = 0x29;
    }
  }
  else if (uVar37 == 0x6df0f25ff) {
    iVar42 = 0x22;
  }
  else {
    if (uVar37 != 0x6f3ce57cb) goto LAB_710319814c;
    iVar42 = 0x28;
  }
  local_90 = local_b0;
  local_e0[0] = &PTR_FUN_710517d938;
  local_b0[0] = &PTR_FUN_710517d980;
  local_f0 = (undefined1 (*) [16])(param_5 + 0x1d);
  local_c0 = local_e0;
  FUN_7103199750((long *)&local_130,(long *)&local_f0);
  pauVar35 = local_f0;
  if (local_c0 == (undefined ***)0x0) {
    auVar22._8_8_ = 0;
    auVar22._0_8_ = extraout_x1_08;
    auVar63 = auVar22 << 0x40;
    local_170 = local_f0;
    pauStack_168 = local_f0;
    local_140 = (long *)0x0;
  }
  else {
    if (local_e0 == local_c0) {
      local_190 = &local_1b0;
      (*(code *)(*local_c0)[3])(local_c0,&local_1b0);
      auVar63._8_8_ = extraout_x1_09;
      auVar63._0_8_ = local_190;
    }
    else {
      auVar63 = (*(code *)(*local_c0)[2])();
      local_190 = auVar63._0_8_;
    }
    if (local_190 == (undefined1 (**) [16])0x0) {
      local_170 = pauVar35;
      local_140 = (long *)0x0;
      pauStack_168 = local_170;
    }
    else {
      local_170 = pauVar35;
      pauStack_168 = local_170;
      if (&local_1b0 == local_190) {
        local_140 = local_160;
        (**(code **)((*local_190)[1] + 8))();
        auVar64._8_8_ = extraout_x1_10;
        auVar64._0_8_ = local_140;
      }
      else {
        auVar64 = (**(code **)(*local_190)[1])();
      }
      auVar63._8_8_ = auVar64._8_8_;
      auVar63._0_8_ = local_190;
      local_140 = auVar64._0_8_;
      if (&local_1b0 == local_190) {
        pcVar30 = *(code **)(*local_190)[2];
      }
      else {
        if (local_190 == (undefined1 (**) [16])0x0) goto LAB_710319824c;
        pcVar30 = *(code **)((*local_190)[2] + 8);
      }
      (*pcVar30)();
      auVar63._8_8_ = extraout_x1_11;
      auVar63._0_8_ = local_190;
    }
  }
LAB_710319824c:
  do {
    local_190 = auVar63._0_8_;
    local_1a8 = pauStack_168;
    local_1b0 = local_170;
    if (local_140 == (long *)0x0) {
      local_180 = (long *)0x0;
    }
    else if (local_160 == local_140) {
      local_180 = local_1a0;
      (**(code **)(*local_140 + 0x18))(local_140,local_1a0);
      auVar63._8_8_ = extraout_x1_13;
      auVar63._0_8_ = local_190;
    }
    else {
      auVar53 = (**(code **)(*local_140 + 0x10))();
      auVar63._8_8_ = auVar53._8_8_;
      auVar63._0_8_ = local_190;
      local_180 = auVar53._0_8_;
    }
    pauVar34 = local_130;
    pauVar35 = local_1b0;
    local_190 = auVar63._0_8_;
    if (local_1a0 == local_180) {
      pcVar30 = *(code **)(*local_180 + 0x20);
LAB_71031982f0:
      (*pcVar30)();
      auVar63._8_8_ = extraout_x1_14;
      auVar63._0_8_ = local_190;
    }
    else if (local_180 != (long *)0x0) {
      pcVar30 = *(code **)(*local_180 + 0x28);
      goto LAB_71031982f0;
    }
    local_190 = auVar63._0_8_;
    if (pauVar34 == pauVar35) break;
    plVar43 = *(long **)local_130[1];
    plVar27 = *(long **)(*param_5 + 0xa0);
    (**(code **)(*plVar43 + 0x40))(plVar43);
    fVar46 = *(float *)(plVar43 + 0x14);
    fVar47 = *(float *)((long)plVar43 + 0xa4);
    fVar48 = *(float *)(plVar43 + 0x15);
    fVar49 = *(float *)((long)plVar43 + 0xac);
    fVar50 = extraout_s0_02 * fVar46 + param_2._0_4_ * fVar47 + param_3._0_4_ * fVar48 +
             fVar45 * fVar49;
    fVar60 = extraout_var_02 * fVar46 + param_2._4_4_ * fVar47 + param_3._4_4_ * fVar48 +
             fVar55 * fVar49;
    fVar61 = extraout_var_06 * fVar46 + param_2._8_4_ * fVar47 + param_3._8_4_ * fVar48 +
             fVar56 * fVar49;
    fVar46 = extraout_var_10 * fVar46 + param_2._12_4_ * fVar47 + param_3._12_4_ * fVar48 +
             fVar57 * fVar49;
    auVar15._4_4_ = fVar60;
    auVar15._0_4_ = fVar50;
    auVar15._8_4_ = fVar61;
    auVar15._12_4_ = fVar46;
    auVar16._4_4_ = fVar60;
    auVar16._0_4_ = fVar50;
    auVar16._8_4_ = fVar61;
    auVar16._12_4_ = fVar46;
    auVar53 = NEON_ext(auVar15,auVar16,8,1);
    param_7 = (undefined1 (*) [16])&local_1c0;
    param_2._8_8_ = auVar53._8_8_;
    param_2._0_8_ = (undefined1 (*) [16])CONCAT44(0,auVar53._0_4_);
    local_1c0 = CONCAT44(fVar60,fVar50);
    uStack_1b8 = (ulong)param_2._0_8_;
    FUN_71031b7a30(0.0,plVar27,iVar42,param_7,(byte ****)param_8,(long ****)param_9,param_10,
                   param_11,param_12);
    uVar37 = (**(code **)(*plVar43 + 0xa0))(plVar43);
    lVar29 = param_5[1];
    if (plVar43 == (long *)0x0) {
      plVar27 = (long *)0x0;
    }
    else {
      for (plVar27 = (long *)param_5[0x1b]; param_5 + 0x1a != plVar27; plVar27 = (long *)plVar27[1])
      {
        if ((long *)plVar27[2] == plVar43) {
          plVar27 = (long *)plVar27[3];
          if (plVar27 != (long *)0x0) {
            plVar2 = plVar27 + 1;
            do {
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(plVar2,0x10);
              if (bVar6) {
                *plVar2 = *plVar2 + 1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
          }
          goto LAB_71031983c8;
        }
      }
      plVar27 = (long *)0x0;
      plVar43 = (long *)0x0;
    }
LAB_71031983c8:
    if (((uVar31 ^ uVar37) & 0xffffffffff) != 0) {
      puVar28 = (undefined8 *)
                FUN_710392e290(0x10,0x28,(long ****)param_7,(byte ****)param_8,(long ****)param_9,
                               param_10,param_11,param_12);
      uVar40 = extraout_x1_15;
      if (puVar28 == (undefined8 *)0x0) {
        if (DAT_7105332f00 != (long *)0x0) {
          local_7c[0] = 0;
          local_1c0 = 0x28;
          param_7 = (undefined1 (*) [16])&local_1c0;
          auVar53 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,local_7c);
          uVar40 = auVar53._8_8_;
          if (((auVar53._0_8_ & 1) != 0) &&
             (puVar28 = (undefined8 *)
                        FUN_710392e290(0x10,0x28,(long ****)param_7,(byte ****)param_8,
                                       (long ****)param_9,param_10,param_11,param_12),
             uVar40 = extraout_x1_16, puVar28 != (undefined8 *)0x0)) goto LAB_7103198430;
        }
        puVar28 = (undefined8 *)0x0;
      }
LAB_7103198430:
      if (plVar27 == (long *)0x0) {
        puVar28[4] = uVar31;
        *puVar28 = &PTR_FUN_710517ea00;
        puVar28[1] = plVar43;
        puVar28[2] = 0;
        puVar28[3] = uVar37;
      }
      else {
        plVar2 = plVar27 + 1;
        do {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar6) {
            *plVar2 = *plVar2 + 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        puVar28[2] = plVar27;
        *puVar28 = &PTR_FUN_710517ea00;
        puVar28[1] = plVar43;
        do {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar6) {
            *plVar2 = *plVar2 + 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        puVar28[3] = uVar37;
        puVar28[4] = uVar31;
        do {
          lVar39 = *plVar2;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar6) {
            *plVar2 = lVar39 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (lVar39 == 0) {
          (**(code **)(*plVar27 + 0x10))(plVar27);
          std::__shared_weak_count::__release_weak();
          uVar40 = extraout_x1_17;
        }
      }
      lVar39 = *(long *)(lVar29 + 0x38);
      lVar32 = *(long *)(lVar29 + 0x40) - lVar39;
      uVar37 = 0;
      if (lVar32 != 0) {
        uVar37 = lVar32 * 0x40 - 1;
      }
      uVar36 = *(long *)(lVar29 + 0x58) + *(long *)(lVar29 + 0x50);
      if (uVar37 == uVar36) {
        FUN_710319a4d0((ulong *)(lVar29 + 0x30),uVar40,(long ****)param_7,(byte ****)param_8,
                       (long ****)param_9,param_10,param_11,param_12);
        lVar39 = *(long *)(lVar29 + 0x38);
        uVar36 = *(long *)(lVar29 + 0x50) + *(long *)(lVar29 + 0x58);
      }
      *(undefined8 **)(*(long *)(lVar39 + (uVar36 >> 6 & 0x3fffffffffffff8)) + (uVar36 & 0x1ff) * 8)
           = puVar28;
      *(long *)(lVar29 + 0x58) = *(long *)(lVar29 + 0x58) + 1;
    }
    if (plVar27 != (long *)0x0) {
      plVar43 = plVar27 + 1;
      do {
        lVar29 = *plVar43;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar43,0x10);
        if (bVar6) {
          *plVar43 = lVar29 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (lVar29 == 0) {
        (**(code **)(*plVar27 + 0x10))(plVar27);
        std::__shared_weak_count::__release_weak();
      }
    }
    FUN_7103199920((long *)&local_130);
    auVar63._8_8_ = extraout_x1_12;
    auVar63._0_8_ = local_190;
  } while( true );
  if (local_160 == local_140) {
    pcVar30 = *(code **)(*local_140 + 0x20);
LAB_7103198568:
    (*pcVar30)();
    auVar63._8_8_ = extraout_x1_18;
    auVar63._0_8_ = local_190;
  }
  else if (local_140 != (long *)0x0) {
    pcVar30 = *(code **)(*local_140 + 0x28);
    goto LAB_7103198568;
  }
  local_190 = auVar63._0_8_;
  if (local_120 == local_100) {
    pcVar30 = *(code **)(*local_100)[2];
LAB_7103198598:
    (*pcVar30)();
    auVar63._8_8_ = extraout_x1_19;
    auVar63._0_8_ = local_190;
  }
  else if (local_100 != (undefined1 (**) [16])0x0) {
    pcVar30 = *(code **)((*local_100)[2] + 8);
    goto LAB_7103198598;
  }
  local_190 = auVar63._0_8_;
  if (local_b0 == local_90) {
    pcVar30 = (code *)(*local_90)[4];
LAB_71031985c8:
    (*pcVar30)();
    auVar63._8_8_ = extraout_x1_20;
    auVar63._0_8_ = local_190;
  }
  else if (local_90 != (undefined ***)0x0) {
    pcVar30 = (code *)(*local_90)[5];
    goto LAB_71031985c8;
  }
  local_190 = auVar63._0_8_;
  if (local_e0 == local_c0) {
    pcVar30 = (code *)(*local_c0)[4];
  }
  else {
    if (local_c0 == (undefined ***)0x0) goto LAB_71031985fc;
    pcVar30 = (code *)(*local_c0)[5];
  }
  (*pcVar30)();
  auVar63._8_8_ = extraout_x1_21;
  auVar63._0_8_ = local_190;
LAB_71031985fc:
  local_190 = auVar63._0_8_;
  FUN_71031d0ce0((ulong *)param_5[1],auVar63._8_8_,(long ****)param_7,(byte ****)param_8,
                 (long ****)param_9,param_10,param_11,param_12);
  return;
}

