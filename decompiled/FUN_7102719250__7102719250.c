// addr:      7102719250
// offset:    0x2719250
// name:      FUN_7102719250
// mangled:   
// signature: undefined __cdecl FUN_7102719250(float param_1, int * param_2, undefined8 * param_3, long * * * * param_4, byte * * * * param_5, long * * * * param_6, undefined8 param_7, undefined8 param_8, undefined8 param_9)


/* WARNING: Removing unreachable block (ram,0x007102719548) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7102719250(float param_1,int *param_2,undefined8 *param_3,long ****param_4,byte ****param_5
                   ,long ****param_6,undefined8 param_7,undefined8 param_8,undefined8 param_9)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  long ***ppplVar7;
  long lVar8;
  long *plVar9;
  long *plVar10;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 uVar11;
  long ****pppplVar12;
  undefined4 uVar13;
  float *pfVar14;
  long **pplVar15;
  undefined8 *puVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  undefined1 auVar21 [16];
  float fVar22;
  float __x;
  float fVar23;
  float fVar24;
  float fVar25;
  long **local_a0;
  long *plStack_98;
  long local_90;
  
  param_2[4] = 1;
  pppplVar12 = param_4;
  FUN_7102610070(*(long *)(param_2 + 6),(byte *)"ChopStart");
  if (*(long *)(param_2 + 6) == 0) {
    lVar8 = 0;
  }
  else {
    pppplVar12 = (long ****)0x1;
    FUN_71025ee080(*(long *)(param_2 + 6) + 0x60,(byte *)"ChopStart",1);
    lVar8 = *(long *)(param_2 + 6);
  }
  fVar17 = 0.0;
  FUN_710260fdd0(0,lVar8,1);
  if (*(long *)(param_2 + 6) == 0) goto LAB_7102719478;
  lVar8 = *(long *)(*(long *)(param_2 + 6) + 0xd8);
  uVar11 = extraout_x1;
  if (lVar8 != 0) {
    lVar8 = *(long *)(lVar8 + 8);
    plVar9 = *(long **)(lVar8 + 0x10);
    iVar2 = *(int *)(lVar8 + 0xac);
    if (iVar2 == 1) {
      plVar10 = (long *)(**(code **)(*plVar9 + 0x38))(plVar9,1);
      plVar9 = (long *)0x0;
      if (plVar10 != (long *)0x0) {
LAB_7102719330:
        plVar9 = (long *)(**(code **)(*plVar10 + 0x40))(plVar10,0);
      }
    }
    else {
      if (iVar2 != 0) goto LAB_7102719350;
      plVar10 = (long *)(**(code **)(*plVar9 + 0x38))(plVar9,0);
      if (plVar10 != (long *)0x0) goto LAB_7102719330;
      plVar9 = (long *)0x0;
    }
    fVar17 = (float)(**(code **)(*plVar9 + 0x88))();
    uVar11 = extraout_x1_00;
  }
LAB_7102719350:
  lVar8 = *(long *)(param_2 + 6);
  if (lVar8 == 0) goto LAB_7102719478;
  if (*(long *)(lVar8 + 0xd8) != 0) {
    *(float *)(*(long *)(lVar8 + 0xd8) + 0x24) = fVar17 / param_1;
    lVar8 = *(long *)(param_2 + 6);
    if (lVar8 == 0) goto LAB_7102719478;
  }
  fVar17 = 0.0;
  if (*(long *)(lVar8 + 0xd8) != 0) {
    lVar8 = *(long *)(*(long *)(lVar8 + 0xd8) + 8);
    plVar9 = *(long **)(lVar8 + 0x10);
    iVar2 = *(int *)(lVar8 + 0xac);
    if (iVar2 == 1) {
      plVar10 = (long *)(**(code **)(*plVar9 + 0x38))(plVar9,1);
      plVar9 = (long *)0x0;
      if (plVar10 != (long *)0x0) {
LAB_71027193c0:
        plVar9 = (long *)(**(code **)(*plVar10 + 0x40))(plVar10,0);
      }
    }
    else {
      if (iVar2 != 0) goto LAB_71027193dc;
      plVar10 = (long *)(**(code **)(*plVar9 + 0x38))(plVar9,0);
      if (plVar10 != (long *)0x0) goto LAB_71027193c0;
      plVar9 = (long *)0x0;
    }
    fVar17 = (float)(**(code **)(*plVar9 + 0x88))();
    uVar11 = extraout_x1_01;
  }
LAB_71027193dc:
  lVar8 = *(long *)(param_2 + 6);
  if (lVar8 != 0) {
    if ((*(char *)(lVar8 + 0xe0) != '\0') && (*(long *)(lVar8 + 200) != 0)) {
      *(float *)(*(long *)(lVar8 + 200) + 8) = fVar17 / param_1;
      lVar8 = *(long *)(param_2 + 6);
      if (lVar8 == 0) goto LAB_7102719478;
    }
    if ((*(char *)(lVar8 + 0xe0) != '\0') && (*(long *)(lVar8 + 200) != 0)) {
      *(undefined2 *)(*(long *)(lVar8 + 200) + 0x30) = 0;
    }
    if (*(long *)(lVar8 + 0xd8) != 0) {
      *(undefined1 *)(*(long *)(lVar8 + 0xd8) + 0x21) = 0;
    }
    if (*(char *)(lVar8 + 0xe0) != '\0') {
      *(undefined1 *)(*(long *)(lVar8 + 0xb0) + 0x10) = 1;
    }
    lVar8 = *(long *)(param_2 + 6);
    if (lVar8 != 0) {
      if ((*(char *)(lVar8 + 0xe0) != '\0') && (*(long *)(lVar8 + 200) != 0)) {
        *(undefined2 *)(*(long *)(lVar8 + 200) + 0x32) = 0;
      }
      if (*(long *)(lVar8 + 0xd8) != 0) {
        *(undefined1 *)(*(long *)(lVar8 + 0xd8) + 0x22) = 0;
      }
      lVar8 = *(long *)(param_2 + 6);
      if (lVar8 != 0) {
        *(undefined1 *)(lVar8 + 0x110) = 1;
        FUN_71025e9d50((long *)(lVar8 + 0x108),uVar11,pppplVar12,param_5,param_6,param_7,param_8,
                       param_9);
      }
    }
  }
LAB_7102719478:
  auVar21._8_8_ = 0;
  auVar21._0_8_ = *param_4;
  auVar21 = FUN_71004b06e0(_DAT_7104468ca0,auVar21);
  *(long *)(param_2 + 0x12) = auVar21._8_8_;
  *(long *)(param_2 + 0x10) = auVar21._0_8_;
  uVar11 = param_3[1];
  ppplVar7 = (long ***)(param_2 + 8);
  *(undefined8 *)(param_2 + 0x14) = *param_3;
  *(undefined8 *)(param_2 + 0x16) = uVar11;
  lVar8 = *(long *)(param_2 + 0xc);
  if (lVar8 != 0) {
    if (*(char *)(lVar8 + 0x35) != '\0') {
      uVar3 = *(uint *)(lVar8 + 0x3c);
      lVar8 = *lib::Singleton<lib::EffectManager>::instance_;
      std::mutex::lock();
      if (((0 < (int)uVar3) && (lVar8 = lVar8 + (ulong)(uVar3 >> 0x18) * 0x300, lVar8 != 0)) &&
         (*(uint *)(lVar8 + 4) == uVar3)) {
        param_5 = (byte ****)0x0;
        FUN_71035707d0(lVar8,0,(long ****)0x0,0,param_6,param_7,param_8,param_9);
      }
      std::mutex::unlock();
    }
    plStack_98 = (long *)0x0;
    local_90 = 0;
    local_a0 = (long **)0x0;
    lVar8 = *(long *)(param_2 + 0xc);
    if (lVar8 != 0) {
      lVar1 = *(long *)(param_2 + 8);
      plVar9 = *(long **)(param_2 + 10);
      *plVar9 = lVar1;
      *(long **)(lVar1 + 8) = plVar9;
      *(long *)(lVar8 + 0x10) = *(long *)(lVar8 + 0x10) + -1;
      param_2[10] = 0;
      param_2[0xb] = 0;
      param_2[0xc] = 0;
      param_2[0xd] = 0;
      *ppplVar7 = (long **)0x0;
    }
  }
  pppplVar12 = (long ****)0x1bb6e842dd;
  if (*param_2 != 0) {
    pppplVar12 = (long ****)0x1a67e36c58;
  }
  FUN_7102627a90(&local_a0,*(ulong **)(**(long **)(param_2 + 2) + 800),pppplVar12,param_5,param_6,
                 param_7,param_8,param_9);
  if ((ppplVar7 != &local_a0) && (lVar8 = *(long *)(param_2 + 0xc), lVar8 != local_90)) {
    if (local_90 == 0) {
      if (lVar8 != 0) {
        lVar1 = *(long *)(param_2 + 8);
        plVar9 = *(long **)(param_2 + 10);
        *plVar9 = lVar1;
        *(long **)(lVar1 + 8) = plVar9;
        *(long *)(lVar8 + 0x10) = *(long *)(lVar8 + 0x10) + -1;
        param_2[10] = 0;
        param_2[0xb] = 0;
        param_2[0xc] = 0;
        param_2[0xd] = 0;
        *ppplVar7 = (long **)0x0;
      }
    }
    else {
      if (lVar8 != 0) {
        pplVar15 = *ppplVar7;
        plVar9 = *(long **)(param_2 + 10);
        *plVar9 = (long)pplVar15;
        pplVar15[1] = plVar9;
        *(long *)(lVar8 + 0x10) = *(long *)(lVar8 + 0x10) + -1;
        param_2[10] = 0;
        param_2[0xb] = 0;
        param_2[0xc] = 0;
        param_2[0xd] = 0;
        *ppplVar7 = (long **)0x0;
      }
      puVar16 = *(undefined8 **)(local_90 + 0x20);
      *(long *)(param_2 + 8) = local_90 + 0x18;
      *(undefined8 **)(param_2 + 10) = puVar16;
      *(long ****)(local_90 + 0x20) = ppplVar7;
      *puVar16 = ppplVar7;
      *(long *)(local_90 + 0x10) = *(long *)(local_90 + 0x10) + 1;
      *(long *)(param_2 + 0xc) = local_90;
    }
  }
  if (local_90 != 0) {
    *plStack_98 = (long)local_a0;
    local_a0[1] = plStack_98;
    *(long *)(local_90 + 0x10) = *(long *)(local_90 + 0x10) + -1;
    plStack_98 = (long *)0x0;
    local_90 = 0;
    local_a0 = (long **)0x0;
  }
  auVar6._8_8_ = 0;
  auVar6._0_8_ = *param_4;
  auVar21 = FUN_71004b06e0(_DAT_710446a360,auVar6);
  fVar19 = auVar21._0_4_;
  fVar25 = fVar19 + fVar19;
  fVar24 = auVar21._12_4_ + auVar21._12_4_;
  fVar20 = auVar21._4_4_;
  fVar22 = auVar21._8_4_;
  fVar23 = fVar24 * fVar20 - fVar25 * fVar22;
  fVar17 = (float)NEON_fminnm(fVar23 * fVar23,0x3f800000);
  fVar17 = 1.0 - fVar17;
  if (0.0 <= fVar17) {
    __x = SQRT(fVar17);
    if (NAN(__x)) {
      __x = sqrtf(fVar17);
    }
  }
  else {
    __x = 0.0;
  }
  fVar17 = atan2f(fVar23,__x);
  fVar18 = 1.0 - fVar19 * fVar25;
  if ((0.9999 < fVar23) || (fVar23 < -0.9999)) {
    fVar19 = atan2f(fVar19 * fVar24 - fVar22 * (fVar20 + fVar20),fVar18 + fVar22 * fVar22 * -2.0);
    fVar20 = 0.0;
    lVar8 = *(long *)(param_2 + 0xc);
  }
  else {
    fVar23 = fVar20 * (fVar20 + fVar20);
    fVar19 = atan2f((fVar22 * (fVar20 + fVar20) + fVar19 * fVar24) / __x,(fVar18 - fVar23) / __x);
    fVar20 = atan2f((fVar20 * fVar25 + fVar22 * fVar24) / __x,
                    ((1.0 - fVar23) - fVar22 * (fVar22 + fVar22)) / __x);
    lVar8 = *(long *)(param_2 + 0xc);
  }
  if (lVar8 != 0) {
    auVar4._4_4_ = fVar17;
    auVar4._0_4_ = fVar19;
    auVar4._8_4_ = fVar20;
    auVar4._12_4_ = 0;
    auVar5._4_4_ = fVar17;
    auVar5._0_4_ = fVar19;
    auVar5._8_4_ = fVar20;
    auVar5._12_4_ = 0;
    auVar21 = NEON_ext(auVar4,auVar5,8,1);
    *(ulong *)(lVar8 + 0x68) = (ulong)auVar21._0_4_;
    *(ulong *)(lVar8 + 0x60) = CONCAT44(fVar17,fVar19);
    if (*(char *)(lVar8 + 0x35) == '\0') {
      *(ulong *)(lVar8 + 0x48) = *(ulong *)(lVar8 + 0x48) | 2;
    }
    else {
      uVar3 = *(uint *)(lVar8 + 0x3c);
      if (0 < (int)uVar3) {
        lVar8 = *lib::Singleton<lib::EffectManager>::instance_ + (ulong)(uVar3 >> 0x18) * 0x300;
        if ((lVar8 != 0) && (*(uint *)(lVar8 + 4) == uVar3)) {
          lVar8 = *lib::Singleton<lib::EffectManager>::instance_ + (ulong)(uVar3 >> 0x18) * 0x300;
          *(undefined1 *)(lVar8 + 0x2da) = 1;
          *(ulong *)(lVar8 + 0x118) = (ulong)auVar21._0_4_;
          *(ulong *)(lVar8 + 0x110) = CONCAT44(fVar17,fVar19);
        }
      }
    }
  }
  uVar11 = param_3[1];
  pfVar14 = (float *)(param_2 + 0x18);
  *(undefined8 *)pfVar14 = *param_3;
  *(undefined8 *)(param_2 + 0x1a) = uVar11;
  lVar8 = (*(long **)(param_2 + 2))[2];
  if (*param_2 == 0) {
    fVar17 = *(float *)(lVar8 + 0x8c);
  }
  else {
    fVar17 = *(float *)(lVar8 + 0x90);
  }
  ppplVar7 = param_4[1];
  uVar11 = *(undefined8 *)(param_2 + 0x1a);
  fVar19 = (float)*(undefined8 *)pfVar14 + SUB84(*param_4,0) * fVar17;
  fVar20 = (float)((ulong)*(undefined8 *)pfVar14 >> 0x20) +
           (float)((ulong)*param_4 >> 0x20) * fVar17;
  param_2[0x1a] = (int)((float)uVar11 + SUB84(ppplVar7,0) * fVar17);
  param_2[0x1b] = (int)((float)((ulong)uVar11 >> 0x20) + (float)((ulong)ppplVar7 >> 0x20) * fVar17);
  *pfVar14 = fVar19;
  param_2[0x19] = (int)fVar20;
  local_a0 = (long **)CONCAT44(fVar20 + (float)((ulong)*(undefined8 *)(param_2 + 0x1c) >> 0x20),
                               fVar19 + (float)*(undefined8 *)(param_2 + 0x1c));
  plStack_98 = (long *)0x0;
  plVar9 = *(long **)(**(long **)(**(long **)(param_2 + 2) + 0x338) + 8);
  if (plVar9 != (long *)0x0) {
    if ((uint)param_2[0xe] < 0x19) {
      plVar10 = (long *)plVar9[(long)param_2[0xe] * 10 + 0xd];
      if (((*plVar10 != 0) && ((int)plVar10[1] != -1)) &&
         ((int)plVar10[1] == *(int *)(*plVar10 + 0x20))) {
        FUN_7103736cf0(plVar10,(undefined1 (*) [12])&local_a0);
        plVar9 = *(long **)(**(long **)(**(long **)(param_2 + 2) + 0x338) + 8);
        if (plVar9 == (long *)0x0) {
          return;
        }
      }
    }
    uVar13 = 0xc;
    if (*param_2 != 0) {
      uVar13 = 0xd;
    }
    (**(code **)(*plVar9 + 0x58))(plVar9,uVar13,param_2[0xe]);
  }
                    /* WARNING: Read-only address (ram,0x007104468ca0) is written */
                    /* WARNING: Read-only address (ram,0x00710446a360) is written */
  return;
}

