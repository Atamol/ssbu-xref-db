// addr:      7101f2c160
// offset:    0x1f2c160
// name:      FUN_7101f2c160
// mangled:   
// signature: undefined __cdecl FUN_7101f2c160(long param_1, int param_2, long * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_7101f2c160(long param_1,int param_2,long ****param_3,byte ****param_4,long ****param_5,
                   undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  char *pcVar1;
  char cVar2;
  bool bVar3;
  int *piVar4;
  int iVar5;
  uint uVar6;
  long *plVar7;
  long *plVar8;
  undefined8 *puVar9;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 uVar10;
  undefined8 extraout_x1_02;
  undefined8 extraout_x1_03;
  long ****pppplVar11;
  long ****pppplVar12;
  long lVar13;
  ulong uVar14;
  undefined4 *puVar15;
  undefined8 *puVar16;
  long **pplVar17;
  long lVar18;
  ulong uVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  long ***ppplVar23;
  long *********ppppppppplVar24;
  long lVar25;
  long ****pppplVar26;
  ulong *puVar27;
  ulong uVar28;
  undefined1 auVar29 [16];
  long local_2f0;
  long lStack_2e8;
  int *local_2e0;
  long local_2d8;
  long local_2d0;
  long ****local_2c8;
  long local_2c0;
  undefined **local_2b8;
  ulong local_2b0;
  undefined **local_2a8;
  ulong local_2a0;
  undefined **local_298;
  ulong local_290;
  ulong local_288;
  ulong uStack_280;
  long ***local_278;
  ulong local_270;
  undefined8 uStack_268;
  undefined8 local_260;
  undefined8 uStack_258;
  undefined8 local_250;
  undefined8 uStack_248;
  undefined8 local_240;
  undefined8 uStack_238;
  undefined8 local_230;
  undefined6 uStack_228;
  undefined2 local_222;
  undefined6 uStack_220;
  undefined8 local_218;
  undefined8 local_210;
  undefined8 uStack_208;
  undefined8 local_200;
  undefined8 uStack_1f8;
  undefined8 local_1f0;
  undefined8 uStack_1e8;
  undefined8 local_1e0;
  undefined8 uStack_1d8;
  undefined8 local_1d0;
  undefined8 uStack_1c8;
  undefined8 local_1c0;
  undefined8 uStack_1b8;
  undefined8 local_1b0;
  undefined8 uStack_1a8;
  undefined8 local_1a0;
  undefined8 uStack_198;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined6 uStack_130;
  undefined2 local_12a;
  undefined6 uStack_128;
  undefined4 local_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  
  ppplVar23 = param_3[1];
  pppplVar11 = param_3;
  if ((ppplVar23[1] == (long **)0x0) ||
     (plVar7 = (long *)FUN_71037964b0((long)ppplVar23[1],0x710432a87b), plVar7 == (long *)0x0)) {
LAB_7101f2c1c0:
    FUN_7103778300(0x3f800000,(long)ppplVar23,0x710432a87b);
    FUN_7103778300(0x3f800000,(long)param_3[1],0x71043beebf);
    uVar10 = extraout_x1;
  }
  else {
    auVar29 = (**(code **)(*plVar7 + 0x130))();
    uVar10 = auVar29._8_8_;
    if ((auVar29._0_8_ & 1) == 0) {
      ppplVar23 = param_3[1];
      goto LAB_7101f2c1c0;
    }
  }
  if (param_2 == -1) {
    iVar5 = *(int *)(param_1 + 0xd8);
LAB_7101f2c254:
    local_288 = 0;
    uStack_280 = 0;
    local_298 = (undefined **)0x0;
    local_290 = 0;
  }
  else {
    iVar5 = *(int *)(param_1 + 0xd8);
    plVar7 = (long *)(param_1 + 0xf8);
    if (iVar5 != 1) {
      plVar7 = (long *)(param_1 + 0x17140);
    }
    if ((ulong)(plVar7[1] - *plVar7 >> 7) <= (ulong)(long)param_2) goto LAB_7101f2c254;
    puVar27 = (ulong *)(*plVar7 + (long)param_2 * 0x80);
    local_298 = (undefined **)*puVar27;
    local_290 = puVar27[1];
    local_288 = puVar27[2];
    uStack_280 = puVar27[3];
  }
  local_2e0 = (int *)(param_1 + 0xd8);
  local_2f0 = param_1 + 0x2e160;
  lStack_2e8 = param_1 + 0x17110;
  lVar13 = param_1 + 0x17110;
  if (iVar5 != 1) {
    lVar13 = param_1 + 0x2e160;
  }
  uVar28 = *(ulong *)(lVar13 + 0x20);
  puVar27 = *(ulong **)(lVar13 + 8);
  plVar7 = (long *)((long)puVar27 + (uVar28 >> 7 & 0x1fffffffffffff8));
  if (*(ulong **)(lVar13 + 0x10) == puVar27) {
    ppppppppplVar24 = (long *********)0x0;
  }
  else {
    ppppppppplVar24 = (long *********)(*plVar7 + (uVar28 & 0x3ff) * 4);
  }
  lVar21 = *(long *)(lVar13 + 0x28);
  local_2d0 = param_1 + 0x110;
  local_2d8 = param_1 + 0x17160;
  lVar22 = local_2d0;
  if (iVar5 != 1) {
    lVar22 = local_2d8;
  }
  plVar8 = plVar7;
  local_2c0 = param_1;
  local_2c8 = param_3;
  if (*(ulong **)(lVar13 + 0x10) == puVar27) {
    while (ppppppppplVar24 != (long *********)0x0) {
      uVar6 = *(uint *)ppppppppplVar24;
      if (0x7f < uVar6) goto LAB_7101f2ce68;
      lVar25 = (long)(int)uVar6;
      pppplVar11 = (long ****)&SUB_00000020;
      iVar5 = memcmp((void *)(lVar22 + lVar25 * 0x2e0 + 8),&local_298,0x20);
      if (iVar5 == 0) goto LAB_7101f2c5e0;
      ppppppppplVar24 = (long *********)((long)ppppppppplVar24 + 4);
      uVar10 = extraout_x1_01;
      if ((long)ppppppppplVar24 - *plVar8 == 0x1000) {
        plVar8 = plVar8 + 1;
        ppppppppplVar24 = (long *********)*plVar8;
      }
    }
  }
  else {
    uVar14 = uVar28 + lVar21;
    lVar18 = *(long *)((long)puVar27 + (uVar14 >> 7 & 0x1fffffffffffff8));
    while ((long *********)(lVar18 + (uVar14 & 0x3ff) * 4) != ppppppppplVar24) {
      uVar6 = *(uint *)ppppppppplVar24;
      if (0x7f < uVar6) goto LAB_7101f2ce68;
      lVar25 = (long)(int)uVar6;
      pppplVar11 = (long ****)&SUB_00000020;
      iVar5 = memcmp((void *)(lVar22 + lVar25 * 0x2e0 + 8),&local_298,0x20);
      if (iVar5 == 0) goto LAB_7101f2c5e0;
      ppppppppplVar24 = (long *********)((long)ppppppppplVar24 + 4);
      uVar10 = extraout_x1_00;
      if ((long)ppppppppplVar24 - *plVar8 == 0x1000) {
        plVar8 = plVar8 + 1;
        ppppppppplVar24 = (long *********)*plVar8;
      }
    }
  }
  pppplVar26 = local_2c8;
  lVar18 = local_2d0;
  piVar4 = local_2e0;
  uVar6 = *(uint *)(*plVar7 + (uVar28 & 0x3ff) * 4);
  uVar28 = uVar28 + 1;
  *(ulong *)(lVar13 + 0x20) = uVar28;
  *(long *)(lVar13 + 0x28) = lVar21 + -1;
  if (0x7ff < uVar28) {
    if (*puVar27 != 0) {
      FUN_710392eb40(*puVar27);
      puVar27 = *(ulong **)(lVar13 + 8);
      uVar28 = *(ulong *)(lVar13 + 0x20);
      uVar10 = extraout_x1_02;
    }
    *(ulong **)(lVar13 + 8) = puVar27 + 1;
    *(ulong *)(lVar13 + 0x20) = uVar28 - 0x400;
  }
  plVar7 = &lStack_2e8;
  if (*piVar4 != 1) {
    plVar7 = &local_2f0;
  }
  puVar27 = (ulong *)*plVar7;
  uVar14 = puVar27[1];
  uVar28 = 0;
  if (puVar27[2] - uVar14 != 0) {
    uVar28 = (puVar27[2] - uVar14) * 0x80 - 1;
  }
  uVar19 = puVar27[5] + puVar27[4];
  if (uVar28 == uVar19) {
    FUN_7101432380(puVar27,uVar10,pppplVar11,param_4,param_5,param_6,param_7,param_8);
    uVar14 = puVar27[1];
    uVar19 = puVar27[4] + puVar27[5];
  }
  lVar13 = local_2c0;
  lVar21 = local_2d8;
  *(uint *)(*(long *)(uVar14 + (uVar19 >> 7 & 0x1fffffffffffff8)) + (uVar19 & 0x3ff) * 4) = uVar6;
  puVar27[5] = puVar27[5] + 1;
  if (0x7f < uVar6) {
LAB_7101f2ce68:
                    /* WARNING: Subroutine does not return */
    abort();
  }
  lVar25 = (long)(int)uVar6;
  lVar22 = lVar18;
  if (*piVar4 != 1) {
    lVar22 = local_2d8;
  }
  puVar15 = (undefined4 *)(lVar22 + lVar25 * 0x2e0);
  *puVar15 = 1;
  *(ulong *)(puVar15 + 6) = local_288;
  *(ulong *)(puVar15 + 8) = uStack_280;
  *(undefined ***)(puVar15 + 2) = local_298;
  *(ulong *)(puVar15 + 4) = local_290;
  *(undefined8 *)(puVar15 + 10) = 0;
  *(undefined8 *)(puVar15 + 0xc) = 0;
  puVar15[0xe] = *piVar4;
  *(undefined1 *)(puVar15 + 0x2d) = 1;
  puVar16 = *(undefined8 **)(puVar15 + 0x32);
  plVar7 = (long *)puVar16[1];
  *puVar16 = 0;
  puVar16[1] = 0;
  if (plVar7 != (long *)0x0) {
    plVar8 = plVar7 + 1;
    do {
      lVar20 = *plVar8;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar3) {
        *plVar8 = lVar20 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar20 == 0) {
      (**(code **)(*plVar7 + 0x10))(plVar7);
      std::__shared_weak_count::__release_weak();
    }
  }
  lVar22 = lVar22 + lVar25 * 0x2e0;
  *(undefined8 *)(lVar22 + 0xd0) = 0;
LAB_7101f2c510:
  uStack_220 = 0;
  local_230 = 0;
  uStack_228 = 0;
  local_222 = 0;
  local_240 = 0;
  uStack_238 = 0;
  local_278 = (long ***)0x0;
  local_218 = 0;
  local_250 = 0;
  uStack_248 = 0;
  local_260 = 0;
  uStack_258 = 0;
  local_270 = 0;
  uStack_268 = 0;
  local_160 = 0;
  uStack_158 = 0;
  local_170 = 0;
  uStack_168 = 0;
  local_180 = 0;
  uStack_178 = 0;
  local_190 = 0;
  uStack_188 = 0;
  local_1a0 = 0;
  uStack_198 = 0;
  local_1b0 = 0;
  uStack_1a8 = 0;
  local_1c0 = 0;
  uStack_1b8 = 0;
  local_1d0 = 0;
  uStack_1c8 = 0;
  local_1e0 = 0;
  uStack_1d8 = 0;
  local_1f0 = 0;
  uStack_1e8 = 0;
  local_200 = 0;
  uStack_1f8 = 0;
  local_210 = 0;
  uStack_208 = 0;
  FUN_71004f5770(&local_210);
  ppppppppplVar24 = (long *********)&DAT_00000200;
  local_120 = 0;
  uStack_128 = 0;
  local_138 = 0;
  uStack_130 = 0;
  local_12a = 0;
  local_150 = 0;
  local_80 = 0;
  local_88 = 0;
  local_90 = 0;
  local_98 = 0;
  local_a0 = 0;
  local_a8 = 0;
  local_b0 = 0;
  local_b8 = 0;
  local_c0 = 0;
  local_c8 = 0;
  local_d0 = 0;
  local_d8 = 0;
  local_e0 = 0;
  local_e8 = 0;
  local_f0 = 0;
  local_f8 = 0;
  local_148 = 0;
  uStack_140 = 0;
  local_108 = 0;
  uStack_100 = 0;
  local_118 = 0;
  uStack_110 = 0;
  memcpy((void *)(lVar22 + 0xd8),&local_278,0x200);
  *(undefined4 *)(lVar22 + 0x2d8) = 0;
  goto LAB_7101f2c6a0;
LAB_7101f2c5e0:
  FUN_7101ae45a0(lVar13,plVar8,ppppppppplVar24);
  lVar13 = local_2c0;
  piVar4 = local_2e0;
  plVar7 = &lStack_2e8;
  if (*local_2e0 != 1) {
    plVar7 = &local_2f0;
  }
  puVar27 = (ulong *)*plVar7;
  uVar14 = puVar27[1];
  uVar28 = 0;
  if (puVar27[2] - uVar14 != 0) {
    uVar28 = (puVar27[2] - uVar14) * 0x80 - 1;
  }
  uVar19 = puVar27[5] + puVar27[4];
  if (uVar28 == uVar19) {
    FUN_7101432380(puVar27,extraout_x1_03,(long ****)ppppppppplVar24,param_4,param_5,param_6,param_7
                   ,param_8);
    uVar14 = puVar27[1];
    uVar19 = puVar27[4] + puVar27[5];
  }
  pppplVar26 = local_2c8;
  lVar18 = local_2d0;
  lVar21 = local_2d8;
  *(uint *)(*(long *)(uVar14 + (uVar19 >> 7 & 0x1fffffffffffff8)) + (uVar19 & 0x3ff) * 4) = uVar6;
  puVar27[5] = puVar27[5] + 1;
  if (((*(int *)(lVar22 + lVar25 * 0x2e0) == 0) && (**(long **)(lVar22 + lVar25 * 0x2e0 + 200) == 0)
      ) && (*(int *)(lVar22 + lVar25 * 0x2e0 + 0x2d8) != 1)) {
    lVar22 = local_2d0;
    if (*piVar4 != 1) {
      lVar22 = local_2d8;
    }
    puVar15 = (undefined4 *)(lVar22 + lVar25 * 0x2e0);
    *puVar15 = 1;
    *(ulong *)(puVar15 + 6) = local_288;
    *(ulong *)(puVar15 + 8) = uStack_280;
    *(undefined ***)(puVar15 + 2) = local_298;
    *(ulong *)(puVar15 + 4) = local_290;
    *(undefined8 *)(puVar15 + 10) = 0;
    *(undefined8 *)(puVar15 + 0xc) = 0;
    puVar15[0xe] = *piVar4;
    *(undefined1 *)(puVar15 + 0x2d) = 1;
    puVar16 = *(undefined8 **)(puVar15 + 0x32);
    plVar7 = (long *)puVar16[1];
    *puVar16 = 0;
    puVar16[1] = 0;
    if (plVar7 != (long *)0x0) {
      plVar8 = plVar7 + 1;
      do {
        lVar20 = *plVar8;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
        if (bVar3) {
          *plVar8 = lVar20 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar20 == 0) {
        (**(code **)(*plVar7 + 0x10))(plVar7);
        std::__shared_weak_count::__release_weak();
      }
    }
    lVar22 = lVar22 + lVar25 * 0x2e0;
    *(undefined8 *)(lVar22 + 0xd0) = 0;
    goto LAB_7101f2c510;
  }
LAB_7101f2c6a0:
  if (*(int *)(lVar13 + 0xd8) != 1) {
    lVar18 = lVar21;
  }
  if (*(int *)(lVar18 + lVar25 * 0x2e0) == 0) {
    lVar22 = lVar18 + lVar25 * 0x2e0;
    puVar16 = (undefined8 *)(lVar22 + 200);
    if ((*(long *)*puVar16 == 0) && (*(int *)(lVar18 + lVar25 * 0x2e0 + 0x2d8) != 1))
    goto LAB_7101f2c6bc;
    FUN_71037780e0(&local_278,(long)pppplVar26,(long ****)"turn_off",ppppppppplVar24,param_4,param_5
                   ,param_6,param_7,param_8);
    uVar28 = local_270;
    if (*(long **)(local_270 + 8) == (long *)0x0) {
      uVar14 = 0;
    }
    else {
      uVar14 = (**(code **)(**(long **)(local_270 + 8) + 0x148))();
      uVar14 = uVar14 & 0xffffffff;
    }
    local_278 = (long ***)&PTR_FUN_710523d9e8;
    local_270 = 0;
    if (uVar28 != 0) {
      FUN_710392eb40(uVar28);
    }
    if ((uVar14 & 1) == 0) {
      FUN_7103778300(0x3f800000,(long)pppplVar26[1],0x7104433949);
      FUN_71037780e0(&local_278,(long)pppplVar26,(long ****)"turn_on",ppppppppplVar24,param_4,
                     param_5,param_6,param_7,param_8);
      uVar28 = local_270;
      plVar7 = *(long **)(local_270 + 8);
      if (plVar7 != (long *)0x0) {
        (**(code **)(*plVar7 + 0x140))(plVar7,0);
      }
      local_278 = (long ***)&PTR_FUN_710523d9e8;
      local_270 = 0;
      if (uVar28 != 0) {
        FUN_710392eb40(uVar28);
      }
    }
    if (*(long *)*puVar16 == 0) {
      FUN_7103776910(&local_278,(long)pppplVar26,(long ****)"set_rep_thumbnail",ppppppppplVar24,
                     param_4,param_5,param_6,param_7,param_8);
      uVar28 = local_270;
      FUN_7103779650(local_270);
    }
    else {
      FUN_7103776910(&local_278,(long)pppplVar26,(long ****)"set_rep_thumbnail",ppppppppplVar24,
                     param_4,param_5,param_6,param_7,param_8);
      FUN_7103779480((long)&local_278,lVar22 + 0xc0,ppppppppplVar24,param_4,param_5,param_6,param_7,
                     param_8);
      uVar28 = local_270;
    }
    local_270 = 0;
    local_278 = (long ***)&PTR_FUN_710523d9a8;
    if (uVar28 != 0) {
      local_270 = 0;
      local_278 = (long ***)&PTR_FUN_710523d9a8;
      FUN_710392eb40(uVar28);
    }
    FUN_7103778300(0x3f800000,(long)pppplVar26[1],0x71043f112c);
    plVar7 = (long *)(lVar13 + 0xf8);
    if (*(int *)(lVar13 + 0xd8) != 1) {
      plVar7 = (long *)(lVar13 + 0x17140);
    }
    if ((ulong)(plVar7[1] - *plVar7 >> 7) <= (ulong)(long)param_2) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_out_of_range();
    }
    lVar13 = *plVar7 + (long)param_2 * 0x80;
    pppplVar11 = (long ****)
                 ((long)*(short *)(lVar13 + 0x20) * 1000000 + (long)*(char *)(lVar13 + 0x22) * 1000
                 + (long)*(char *)(lVar13 + 0x23));
    FUN_7103776910(&local_278,(long)pppplVar26,(long ****)"set_txt_date",ppppppppplVar24,param_4,
                   param_5,param_6,param_7,param_8);
    pppplVar12 = pppplVar11;
    FUN_710377a310((long)&local_278,1);
    uVar28 = local_270;
    local_278 = (long ***)&PTR_FUN_710523d9a8;
    local_270 = 0;
    if (uVar28 != 0) {
      FUN_710392eb40(uVar28);
    }
    FUN_7103776910(&local_278,(long)pppplVar26,(long ****)"set_txt_date_bk",pppplVar12,param_4,
                   param_5,param_6,param_7,param_8);
    FUN_710377a310((long)&local_278,1);
    uVar28 = local_270;
    local_278 = (long ***)&PTR_FUN_710523d9a8;
    local_270 = 0;
    if (uVar28 != 0) {
      FUN_710392eb40(uVar28);
    }
    pcVar1 = "edit_off";
    if (*(int *)(lVar18 + lVar25 * 0x2e0 + 0x2d8) != 0) {
      pcVar1 = "edit_on";
    }
    FUN_7103778300(0x3f800000,(long)pppplVar26[1],(long)pcVar1);
    if (*(int *)(local_2c0 + 0xd8) == 1) {
      FUN_7103776640(&local_278,(long)pppplVar26,(byte ****)"set_parts_text_scroll",pppplVar11,
                     param_4,param_5,param_6,param_7,param_8);
      FUN_7103776910(&local_298,(long)&local_278,(long ****)"set_txt_main",pppplVar11,param_4,
                     param_5,param_6,param_7,param_8);
      FUN_7103776910(&local_2a8,(long)&local_278,(long ****)"set_txt_mask",pppplVar11,param_4,
                     param_5,param_6,param_7,param_8);
      if (*(long *)(local_270 + 8) != 0) {
        puVar16 = *(undefined8 **)(*(long *)(local_270 + 8) + 0x78);
        if (((DAT_710593ba40 & 1) == 0) &&
           (iVar5 = __cxa_guard_acquire(&DAT_710593ba40), iVar5 != 0)) {
          if (((DAT_710593ba48 & 1) == 0) &&
             (iVar5 = __cxa_guard_acquire(&DAT_710593ba48), iVar5 != 0)) {
            DAT_710593ba50 = 0;
            __cxa_guard_release(&DAT_710593ba48);
          }
          DAT_710593ba58 = &DAT_710593ba50;
          __cxa_guard_release(&DAT_710593ba40);
          pppplVar26 = local_2c8;
        }
        if (puVar16 != (undefined8 *)0x0) {
          for (puVar9 = (undefined8 *)(**(code **)*puVar16)(puVar16); puVar9 != (undefined8 *)0x0;
              puVar9 = (undefined8 *)*puVar9) {
            if ((undefined8 **)puVar9 == &DAT_710593ba58) {
              *(undefined1 *)(puVar16 + 0xc) = 1;
              break;
            }
          }
        }
      }
      lVar18 = lVar18 + lVar25 * 0x2e0;
      lVar13 = lVar18 + 0xe4;
      FUN_710377a310((long)&local_298,1);
      FUN_710377a310((long)&local_2a8,1);
      FUN_7103776910(&local_2b8,(long)pppplVar26,(long ****)"set_txt_time",lVar13,param_4,param_5,
                     param_6,param_7,param_8);
      uVar6 = *(uint *)(lVar18 + 0x138);
      uVar28 = (ulong)uVar6 / 0x3c;
      if (0x3e6 < uVar6 / 0x3c) {
        uVar28 = 999;
      }
      uVar14 = (ulong)(int)(uVar6 % 0x3c);
      if (0x3e6 < uVar14) {
        uVar14 = 999;
      }
      pppplVar11 = (long ****)(uVar14 + uVar28 * 1000);
      FUN_710377a310((long)&local_2b8,1);
      uVar28 = local_2b0;
      local_2b8 = &PTR_FUN_710523d9a8;
      local_2b0 = 0;
      if (uVar28 != 0) {
        FUN_710392eb40(uVar28);
      }
      uVar28 = local_2a0;
      local_2a8 = &PTR_FUN_710523d9a8;
      local_2a0 = 0;
      if (uVar28 != 0) {
        FUN_710392eb40(uVar28);
      }
      uVar28 = local_290;
      local_298 = &PTR_FUN_710523d9a8;
      local_290 = 0;
      if (uVar28 != 0) {
        FUN_710392eb40(uVar28);
      }
      uVar28 = local_270;
      local_278 = (long ***)&PTR_FUN_710523d988;
      local_270 = 0;
      if (uVar28 != 0) {
        uVar14 = *(ulong *)(uVar28 + 0x18);
        *(undefined ***)(uVar28 + 0x10) = &PTR_FUN_710523d9a8;
        *(undefined8 *)(uVar28 + 0x18) = 0;
        if (uVar14 != 0) {
          FUN_710392eb40(uVar14);
        }
        FUN_710392eb40(uVar28);
      }
    }
    plVar7 = (long *)FUN_710392e290(0x10,8,pppplVar11,param_4,param_5,param_6,param_7,param_8);
    if (plVar7 == (long *)0x0) {
      if (DAT_7105332f00 != (long *)0x0) {
        local_298 = (undefined **)((ulong)local_298 & 0xffffffff00000000);
        local_278 = (long ***)&DAT_00000008;
        pppplVar11 = &local_278;
        uVar28 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_298);
        if (((uVar28 & 1) != 0) &&
           (plVar7 = (long *)FUN_710392e290(0x10,8,pppplVar11,param_4,param_5,param_6,param_7,
                                            param_8), plVar7 != (long *)0x0)) goto LAB_7101f2cd68;
      }
      plVar7 = (long *)0x0;
    }
LAB_7101f2cd68:
    *plVar7 = 0;
    pplVar17 = pppplVar26[1][1];
    if ((pplVar17 != (long **)0x0) && (pplVar17[0xc] != (long *)0x0)) {
      plVar8 = (long *)FUN_7103796f20((long)pplVar17[0xc],(long)(pplVar17[3] + 0x16));
      *plVar7 = (long)plVar8;
      if (plVar8 != (long *)0x0) {
        uVar6 = 1;
        (**(code **)(*plVar8 + 0x208))(plVar8,1);
        uVar28 = (**(code **)(*plVar8 + 0x200))(plVar8);
        if ((uVar28 & 1) != 0) {
          uVar6 = (**(code **)(*plVar8 + 0x210))(plVar8);
          uVar6 = uVar6 ^ 1;
        }
        (**(code **)(*plVar8 + 0x388))(plVar8,uVar6 & 1,0);
      }
      goto LAB_7101f2cdf4;
    }
  }
  else {
LAB_7101f2c6bc:
    FUN_71037780e0(&local_278,(long)pppplVar26,(long ****)"turn_on",ppppppppplVar24,param_4,param_5,
                   param_6,param_7,param_8);
    uVar28 = local_270;
    if (*(long **)(local_270 + 8) == (long *)0x0) {
      uVar14 = 0;
    }
    else {
      uVar14 = (**(code **)(**(long **)(local_270 + 8) + 0x148))();
      uVar14 = uVar14 & 0xffffffff;
    }
    local_278 = (long ***)&PTR_FUN_710523d9e8;
    local_270 = 0;
    if (uVar28 != 0) {
      FUN_710392eb40(uVar28);
    }
    if ((uVar14 & 1) == 0) {
      FUN_7103778300(0x3f800000,(long)pppplVar26[1],0x71043beebf);
      FUN_71037780e0(&local_278,(long)pppplVar26,(long ****)"turn_off",ppppppppplVar24,param_4,
                     param_5,param_6,param_7,param_8);
      uVar28 = local_270;
      plVar7 = *(long **)(local_270 + 8);
      if (plVar7 != (long *)0x0) {
        (**(code **)(*plVar7 + 0x140))(plVar7,0);
      }
      local_278 = (long ***)&PTR_FUN_710523d9e8;
      local_270 = 0;
      if (uVar28 != 0) {
        FUN_710392eb40(uVar28);
      }
    }
    FUN_7103776910(&local_278,(long)pppplVar26,(long ****)"set_rep_thumbnail",ppppppppplVar24,
                   param_4,param_5,param_6,param_7,param_8);
    uVar28 = local_270;
    FUN_7103779650(local_270);
    local_278 = (long ***)&PTR_FUN_710523d9a8;
    local_270 = 0;
    if (uVar28 != 0) {
      FUN_710392eb40(uVar28);
    }
    plVar7 = (long *)FUN_710392e290(0x10,8,(long ****)ppppppppplVar24,param_4,param_5,param_6,
                                    param_7,param_8);
    if (plVar7 == (long *)0x0) {
      if (DAT_7105332f00 != (long *)0x0) {
        local_298 = (undefined **)((ulong)local_298 & 0xffffffff00000000);
        local_278 = (long ***)&DAT_00000008;
        pppplVar11 = &local_278;
        uVar28 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_298);
        if (((uVar28 & 1) != 0) &&
           (plVar7 = (long *)FUN_710392e290(0x10,8,pppplVar11,param_4,param_5,param_6,param_7,
                                            param_8), plVar7 != (long *)0x0)) goto LAB_7101f2c854;
      }
      plVar7 = (long *)0x0;
    }
LAB_7101f2c854:
    *plVar7 = 0;
    pplVar17 = pppplVar26[1][1];
    if ((pplVar17 != (long **)0x0) && (pplVar17[0xc] != (long *)0x0)) {
      plVar8 = (long *)FUN_7103796f20((long)pplVar17[0xc],(long)(pplVar17[3] + 0x16));
      *plVar7 = (long)plVar8;
      if (plVar8 != (long *)0x0) {
        (**(code **)(*plVar8 + 0x208))(plVar8,0);
        uVar28 = (**(code **)(*plVar8 + 0x200))(plVar8);
        if ((uVar28 & 1) == 0) {
          uVar6 = 1;
        }
        else {
          uVar6 = (**(code **)(*plVar8 + 0x210))(plVar8);
          uVar6 = uVar6 ^ 1;
        }
        (**(code **)(*plVar8 + 0x388))(plVar8,uVar6 & 1,0);
      }
      goto LAB_7101f2cdf4;
    }
  }
  *plVar7 = 0;
LAB_7101f2cdf4:
  FUN_710392eb40((ulong)plVar7);
  return;
}

