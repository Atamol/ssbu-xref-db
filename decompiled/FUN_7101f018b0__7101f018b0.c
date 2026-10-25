// addr:      7101f018b0
// offset:    0x1f018b0
// name:      FUN_7101f018b0
// mangled:   
// signature: undefined __cdecl FUN_7101f018b0(undefined1[16] param_1, undefined4 param_2, float param_3, uint * param_4, long * param_5, int param_6, byte * * * * param_7, long * * * * param_8, undefined8 param_9, undefined8 param_10, undefined8 param_11)


void FUN_7101f018b0(undefined1 param_1 [16],undefined4 param_2,float param_3,uint *param_4,
                   long *param_5,int param_6,byte ****param_7,long ****param_8,undefined8 param_9,
                   undefined8 param_10,undefined8 param_11)

{
  long ***ppplVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  uint uVar4;
  uint uVar5;
  ushort uVar6;
  char cVar7;
  bool bVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  ulong uVar12;
  void *pvVar13;
  long *plVar14;
  ushort *puVar15;
  ulong uVar16;
  ulong uVar17;
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
  undefined8 uVar18;
  undefined8 extraout_x1_09;
  byte *pbVar19;
  char *pcVar20;
  undefined **ppuVar21;
  undefined *puVar22;
  ulong uVar23;
  long ****pppplVar24;
  byte bVar25;
  long lVar26;
  uint uVar27;
  long lVar28;
  undefined8 *puVar29;
  void *pvVar30;
  byte ****ppppbVar31;
  uint *puVar32;
  int *piVar33;
  ulong uVar34;
  long ****pppplVar35;
  long *plVar36;
  undefined4 uVar37;
  undefined4 extraout_s0;
  undefined4 extraout_var;
  undefined8 extraout_var_00;
  undefined1 auVar38 [16];
  undefined **local_10c8;
  ulong local_10c0;
  undefined **local_10b8;
  long *local_10b0;
  undefined **local_10a8;
  ulong local_10a0;
  undefined **local_1098;
  ulong local_1090;
  undefined **local_1088;
  ulong local_1080;
  long ***local_1078;
  long *local_1070;
  undefined8 local_1068;
  undefined8 uStack_1060;
  undefined8 local_1058;
  undefined8 uStack_1050;
  undefined8 local_1048;
  undefined8 uStack_1040;
  int local_68;
  int local_64;
  
  lVar26 = *(long *)**(undefined8 **)(param_4 + 2);
  puVar32 = param_4 + 0x82;
  if (puVar32 != (uint *)(lVar26 + 8)) {
    **(undefined8 **)(param_4 + 0x84) = **(undefined8 **)(lVar26 + 0x10);
    *(undefined8 *)(*(long *)(param_4 + 0x84) + 8) = *(undefined8 *)(*(long *)(lVar26 + 0x10) + 8);
    lVar28 = *(long *)(lVar26 + 0x10);
    lVar26 = *(long *)(param_4 + 0x84);
    if (lVar26 != lVar28) {
      **(undefined8 **)(lVar26 + 0x18) = **(undefined8 **)(lVar28 + 0x18);
      *(undefined8 *)(*(long *)(lVar26 + 0x18) + 8) = *(undefined8 *)(*(long *)(lVar28 + 0x18) + 8);
      *(undefined8 *)(*(long *)(lVar26 + 0x18) + 0x10) =
           *(undefined8 *)(*(long *)(lVar28 + 0x18) + 0x10);
      *(undefined8 *)(*(long *)(lVar26 + 0x18) + 0x18) =
           *(undefined8 *)(*(long *)(lVar28 + 0x18) + 0x18);
    }
  }
  *(byte *)((long)param_4 + 0x2b9) = (byte)param_7 & 1;
  uVar9 = *param_4;
  local_64 = param_6;
  if (1 < uVar9) goto LAB_7101f031dc;
  uVar4 = *(uint *)(*DAT_7105328e18 + (ulong)uVar9 * 0x1b8 + 0x1d8);
  if (uVar4 == 0xffffffff && uVar9 == 0) {
    if (((DAT_71053144d8 & 1) == 0) &&
       (iVar11 = __cxa_guard_acquire(param_1._0_4_,&DAT_71053144d8), iVar11 != 0)) {
      FUN_7101764000();
      FUN_71000001c0();
      __cxa_guard_release(&DAT_71053144d8);
    }
    uVar4 = (uint)DAT_7105307b68;
    if (1 < *param_4) goto LAB_7101f031dc;
    *(uint *)(*DAT_7105328e18 + (ulong)*param_4 * 0x1b8 + 0x1d8) = (uint)DAT_7105307b68;
  }
  piVar33 = *(int **)(param_4 + 0xaa);
  ppuVar21 = (undefined **)(ulong)(*piVar33 + 1);
  FUN_7103776640(&local_1078,*(long *)**(undefined8 **)(piVar33 + 4) + 8,
                 (byte ****)"set_part_%dp_subwindow",ppuVar21,param_7,param_8,param_9,param_10,
                 param_11);
  plVar14 = local_1070;
  pppplVar35 = (long ****)(piVar33 + 0x3e);
  if (pppplVar35 != &local_1078) {
    local_1070 = (long *)0x0;
    uVar34 = *(ulong *)(piVar33 + 0x40);
    *(long **)(piVar33 + 0x40) = plVar14;
    if (uVar34 != 0) {
      uVar12 = *(ulong *)(uVar34 + 0x18);
      *(undefined ***)(uVar34 + 0x10) = &PTR_FUN_710523d9a8;
      *(undefined8 *)(uVar34 + 0x18) = 0;
      if (uVar12 != 0) {
        FUN_710392eb40(uVar12);
      }
      FUN_710392eb40(uVar34);
    }
  }
  plVar14 = local_1070;
  local_1078 = (long ***)&PTR_FUN_710523d988;
  local_1070 = (long *)0x0;
  if (plVar14 != (long *)0x0) {
    uVar34 = plVar14[3];
    plVar14[2] = (long)&PTR_FUN_710523d9a8;
    plVar14[3] = 0;
    if (uVar34 != 0) {
      FUN_710392eb40(uVar34);
    }
    FUN_710392eb40((ulong)plVar14);
  }
  if (*piVar33 == 0) {
    pcVar20 = "subwindow_r";
  }
  else {
    pcVar20 = "subwindow_b_sorting";
  }
  FUN_7103778300(0x3f800000,*(long *)(piVar33 + 0x40),(long)pcVar20);
  FUN_7103776640(&local_1078,(long)pppplVar35,(byte ****)"set_lct_controller_entry",ppuVar21,param_7
                 ,param_8,param_9,param_10,param_11);
  plVar14 = local_1070;
  pppplVar24 = (long ****)(piVar33 + 0x42);
  if (pppplVar24 != &local_1078) {
    local_1070 = (long *)0x0;
    uVar34 = *(ulong *)(piVar33 + 0x44);
    *(long **)(piVar33 + 0x44) = plVar14;
    if (uVar34 != 0) {
      uVar12 = *(ulong *)(uVar34 + 0x18);
      *(undefined ***)(uVar34 + 0x10) = &PTR_FUN_710523d9a8;
      *(undefined8 *)(uVar34 + 0x18) = 0;
      if (uVar12 != 0) {
        FUN_710392eb40(uVar12);
      }
      FUN_710392eb40(uVar34);
    }
  }
  plVar14 = local_1070;
  local_1078 = (long ***)&PTR_FUN_710523d988;
  local_1070 = (long *)0x0;
  if (plVar14 != (long *)0x0) {
    uVar34 = plVar14[3];
    plVar14[2] = (long)&PTR_FUN_710523d9a8;
    plVar14[3] = 0;
    if (uVar34 != 0) {
      FUN_710392eb40(uVar34);
    }
    FUN_710392eb40((ulong)plVar14);
  }
  FUN_7103776640(&local_1078,(long)pppplVar35,(byte ****)"set_lct_controller",ppuVar21,param_7,
                 param_8,param_9,param_10,param_11);
  plVar14 = local_1070;
  if ((long ****)(piVar33 + 0x46) != &local_1078) {
    local_1070 = (long *)0x0;
    uVar34 = *(ulong *)(piVar33 + 0x48);
    *(long **)(piVar33 + 0x48) = plVar14;
    if (uVar34 != 0) {
      uVar12 = *(ulong *)(uVar34 + 0x18);
      *(undefined ***)(uVar34 + 0x10) = &PTR_FUN_710523d9a8;
      *(undefined8 *)(uVar34 + 0x18) = 0;
      if (uVar12 != 0) {
        FUN_710392eb40(uVar12);
      }
      FUN_710392eb40(uVar34);
    }
  }
  plVar14 = local_1070;
  local_1078 = (long ***)&PTR_FUN_710523d988;
  local_1070 = (long *)0x0;
  if (plVar14 != (long *)0x0) {
    uVar34 = plVar14[3];
    plVar14[2] = (long)&PTR_FUN_710523d9a8;
    plVar14[3] = 0;
    if (uVar34 != 0) {
      FUN_710392eb40(uVar34);
    }
    FUN_710392eb40((ulong)plVar14);
  }
  FUN_71037780e0(&local_1078,(long)pppplVar24,(long ****)"btn_anim",ppuVar21,param_7,param_8,param_9
                 ,param_10,param_11);
  plVar14 = local_1070;
  if ((long ****)(piVar33 + 0x4a) != &local_1078) {
    local_1070 = (long *)0x0;
    uVar34 = *(ulong *)(piVar33 + 0x4c);
    *(long **)(piVar33 + 0x4c) = plVar14;
    if (uVar34 != 0) {
      FUN_710392eb40(uVar34);
    }
  }
  plVar14 = local_1070;
  local_1078 = (long ***)&PTR_FUN_710523d9e8;
  local_1070 = (long *)0x0;
  if (plVar14 != (long *)0x0) {
    FUN_710392eb40((ulong)plVar14);
  }
  FUN_710377aee0(0x3f800000,(long)(piVar33 + 0x4a));
  piVar33[0x4e] = 0;
  FUN_7103778300(0x3f800000,*(long *)(piVar33 + 0x44),0x71042c56a7);
  FUN_7103776910(&local_1078,(long)pppplVar24,(long ****)"set_txt_btn",ppuVar21,param_7,param_8,
                 param_9,param_10,param_11);
  FUN_710377a120((long)&local_1078,"mel_chara_select_help_press_any_btn",ppuVar21,param_7,param_8,
                 param_9,param_10,param_11);
  plVar14 = local_1070;
  local_1078 = (long ***)&PTR_FUN_710523d9a8;
  local_1070 = (long *)0x0;
  if (plVar14 != (long *)0x0) {
    FUN_710392eb40((ulong)plVar14);
  }
  FUN_71003a4ca0((uint *)&local_1078,"cmn_%dp",(ulong)(*piVar33 + 1),ppuVar21,param_7,param_8,
                 param_9,param_10,param_11);
  FUN_7103776910(&local_1088,(long)pppplVar35,(long ****)"set_txt_player",ppuVar21,param_7,param_8,
                 param_9,param_10,param_11);
  FUN_710377a120((long)&local_1088,(char *)&local_1070,ppuVar21,param_7,param_8,param_9,param_10,
                 param_11);
  uVar34 = local_1080;
  local_1088 = &PTR_FUN_710523d9a8;
  local_1080 = 0;
  uVar18 = extraout_x1;
  if (uVar34 != 0) {
    FUN_710392eb40(uVar34);
    uVar18 = extraout_x1_00;
  }
  piVar33[0x3c] = uVar4;
  if (uVar4 != 0xffffffff) {
    if (9 < uVar4) goto LAB_7101f031dc;
    lVar26 = *(long *)(*(long *)(piVar33 + 2) + 8);
    lVar28 = (long)(int)uVar4;
    *(undefined4 *)(lVar26 + lVar28 * 4) = 2;
    if (*(char *)(DAT_71053398b0 + 8) == '\0') {
      puVar29 = &DAT_7105339830;
LAB_7101f01d18:
      uVar9 = *(int *)(puVar29[2] + 0x9c) - 1;
      if (uVar9 < 7) {
        uVar37 = *(undefined4 *)(&DAT_7104753de0 + (long)(int)uVar9 * 4);
      }
      else {
        uVar37 = 0;
      }
    }
    else {
      puVar29 = (undefined8 *)(&DAT_7105339860)[lVar28];
      if (puVar29 != (undefined8 *)0x0) goto LAB_7101f01d18;
      uVar37 = 0;
    }
    *(undefined4 *)(lVar26 + lVar28 * 4 + 0x28) = uVar37;
    *(undefined1 *)(lVar26 + lVar28 + 0x50) = 1;
  }
  pvVar30 = *(void **)(param_4 + 0x92);
  if ((ulong)(*(long *)(param_4 + 0x96) - (long)pvVar30 >> 2) < 5) {
    pppplVar35 = (long ****)(*(long *)(param_4 + 0x94) - (long)pvVar30);
    lVar26 = (long)pppplVar35 >> 2;
    pvVar13 = (void *)FUN_710392e290(0x10,0x14,(long ****)ppuVar21,param_7,param_8,param_9,param_10,
                                     param_11);
    uVar18 = extraout_x1_01;
    if (pvVar13 == (void *)0x0) {
      if (DAT_7105332f00 != (long *)0x0) {
        local_1088 = (undefined **)((ulong)local_1088 & 0xffffffff00000000);
        local_1078 = (long ***)&DAT_00000014;
        ppuVar21 = (undefined **)&local_1078;
        auVar38 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_1088);
        uVar18 = auVar38._8_8_;
        if (((auVar38._0_8_ & 1) != 0) &&
           (pvVar13 = (void *)FUN_710392e290(0x10,0x14,(long ****)ppuVar21,param_7,param_8,param_9,
                                             param_10,param_11), uVar18 = extraout_x1_02,
           pvVar13 != (void *)0x0)) goto LAB_7101f01dd4;
      }
      pvVar13 = (void *)0x0;
    }
LAB_7101f01dd4:
    if (0 < (long)pppplVar35) {
      memcpy(pvVar13,pvVar30,(size_t)pppplVar35);
      uVar18 = extraout_x1_03;
      ppuVar21 = (undefined **)pppplVar35;
    }
    *(void **)(param_4 + 0x92) = pvVar13;
    *(void **)(param_4 + 0x94) = (void *)((long)pvVar13 + lVar26 * 4);
    *(long *)(param_4 + 0x96) = (long)pvVar13 + 0x14;
    if (pvVar30 != (void *)0x0) {
      FUN_710392eb40((ulong)pvVar30);
      uVar18 = extraout_x1_04;
    }
  }
  pvVar30 = *(void **)(param_4 + 0x98);
  if ((ulong)(*(long *)(param_4 + 0x9c) - (long)pvVar30 >> 2) < 5) {
    pppplVar35 = (long ****)(*(long *)(param_4 + 0x9a) - (long)pvVar30);
    lVar26 = (long)pppplVar35 >> 2;
    pvVar13 = (void *)FUN_710392e290(0x10,0x14,(long ****)ppuVar21,param_7,param_8,param_9,param_10,
                                     param_11);
    uVar18 = extraout_x1_05;
    if (pvVar13 == (void *)0x0) {
      if (DAT_7105332f00 != (long *)0x0) {
        local_1088 = (undefined **)((ulong)local_1088 & 0xffffffff00000000);
        local_1078 = (long ***)&DAT_00000014;
        ppuVar21 = (undefined **)&local_1078;
        auVar38 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_1088);
        uVar18 = auVar38._8_8_;
        if (((auVar38._0_8_ & 1) != 0) &&
           (pvVar13 = (void *)FUN_710392e290(0x10,0x14,(long ****)ppuVar21,param_7,param_8,param_9,
                                             param_10,param_11), uVar18 = extraout_x1_06,
           pvVar13 != (void *)0x0)) goto LAB_7101f01e8c;
      }
      pvVar13 = (void *)0x0;
    }
LAB_7101f01e8c:
    if (0 < (long)pppplVar35) {
      memcpy(pvVar13,pvVar30,(size_t)pppplVar35);
      uVar18 = extraout_x1_07;
      ppuVar21 = (undefined **)pppplVar35;
    }
    *(void **)(param_4 + 0x98) = pvVar13;
    *(void **)(param_4 + 0x9a) = (void *)((long)pvVar13 + lVar26 * 4);
    *(long *)(param_4 + 0x9c) = (long)pvVar13 + 0x14;
    if (pvVar30 != (void *)0x0) {
      FUN_710392eb40((ulong)pvVar30);
      uVar18 = extraout_x1_08;
    }
  }
  FUN_7101f00780((long *)(param_4 + 0x86),uVar18,(long ****)ppuVar21,param_7,param_8,param_9,
                 param_10,param_11);
  FUN_7101f00780((long *)(param_4 + 0x8c),extraout_x1_09,(long ****)ppuVar21,param_7,param_8,param_9
                 ,param_10,param_11);
  if (((DAT_71053144d8 & 1) == 0) && (iVar11 = __cxa_guard_acquire(&DAT_71053144d8), iVar11 != 0)) {
    FUN_7101764000();
    ppuVar21 = &PTR_LOOP_7104f17000;
    FUN_71000001c0();
    __cxa_guard_release(&DAT_71053144d8);
  }
  uVar5 = *param_4;
  uVar27 = 3;
  uVar9 = 0;
  if (DAT_710530d560 != 0) {
    uVar27 = 5;
  }
  uVar34 = (ulong)uVar27;
  do {
    lVar26 = *(long *)(param_4 + 0x88);
    lVar28 = *(long *)(param_4 + 0x86);
    ppppbVar31 = *(byte *****)(param_4 + 2);
    plVar14 = (long *)FUN_710392e290(0x10,0x20,(long ****)ppuVar21,param_7,param_8,param_9,param_10,
                                     param_11);
    if (plVar14 == (long *)0x0) {
      if (DAT_7105332f00 != (long *)0x0) {
        local_1088 = (undefined **)((ulong)local_1088 & 0xffffffff00000000);
        local_1078 = (long ***)&SUB_00000020;
        pppplVar35 = &local_1078;
        uVar12 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_1088);
        if (((uVar12 & 1) != 0) &&
           (plVar14 = (long *)FUN_710392e290(0x10,0x20,pppplVar35,param_7,param_8,param_9,param_10,
                                             param_11), plVar14 != (long *)0x0))
        goto LAB_7101f01f84;
      }
      plVar14 = (long *)0x0;
    }
LAB_7101f01f84:
    plVar14[1] = 0;
    plVar14[2] = 0;
    pppplVar24 = (long ****)((ulong)(lVar26 - lVar28) >> 4);
    *plVar14 = (long)&PTR_FUN_71050b3da0;
    ppplVar1 = (long ***)(plVar14 + 3);
    pppplVar35 = (long ****)0x0;
    FUN_7101ef97d0((ulong *)ppplVar1,*param_4,(long ****)0x0,ppppbVar31,pppplVar24,param_9,param_10,
                   param_11);
    puVar29 = *(undefined8 **)(param_4 + 0x88);
    if (puVar29 < *(undefined8 **)(param_4 + 0x8a)) {
      *puVar29 = ppplVar1;
      puVar29[1] = plVar14;
      local_1078 = (long ***)0x0;
      local_1070 = (long *)0x0;
      *(long *)(param_4 + 0x88) = *(long *)(param_4 + 0x88) + 0x10;
    }
    else {
      local_1078 = ppplVar1;
      local_1070 = plVar14;
      FUN_7101f00930((long *)(param_4 + 0x86),&local_1078,pppplVar35,ppppbVar31,pppplVar24,param_9,
                     param_10,param_11);
      if (local_1070 != (long *)0x0) {
        plVar14 = local_1070 + 1;
        do {
          lVar26 = *plVar14;
          cVar7 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(plVar14,0x10);
          if (bVar8) {
            *plVar14 = lVar26 + -1;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
        if (lVar26 == 0) {
          (**(code **)(*local_1070 + 0x10))(local_1070);
          std::__shared_weak_count::__release_weak();
        }
      }
    }
    lVar26 = *(long *)(param_4 + 0x8e);
    lVar28 = *(long *)(param_4 + 0x8c);
    param_7 = *(byte *****)(param_4 + 2);
    plVar14 = (long *)FUN_710392e290(0x10,0x20,pppplVar35,ppppbVar31,pppplVar24,param_9,param_10,
                                     param_11);
    if (plVar14 == (long *)0x0) {
      if (DAT_7105332f00 != (long *)0x0) {
        local_1088 = (undefined **)((ulong)local_1088 & 0xffffffff00000000);
        local_1078 = (long ***)&SUB_00000020;
        pppplVar35 = &local_1078;
        uVar12 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_1088);
        if (((uVar12 & 1) != 0) &&
           (plVar14 = (long *)FUN_710392e290(0x10,0x20,pppplVar35,ppppbVar31,pppplVar24,param_9,
                                             param_10,param_11), plVar14 != (long *)0x0))
        goto LAB_7101f02080;
      }
      plVar14 = (long *)0x0;
    }
LAB_7101f02080:
    plVar14[1] = 0;
    plVar14[2] = 0;
    param_8 = (long ****)((ulong)(lVar26 - lVar28) >> 4);
    *plVar14 = (long)&PTR_FUN_71050b3da0;
    ppplVar1 = (long ***)(plVar14 + 3);
    ppuVar21 = (undefined **)0x1;
    FUN_7101ef97d0((ulong *)ppplVar1,*param_4,(long ****)0x1,param_7,param_8,param_9,param_10,
                   param_11);
    puVar29 = *(undefined8 **)(param_4 + 0x8e);
    if (puVar29 < *(undefined8 **)(param_4 + 0x90)) {
      *puVar29 = ppplVar1;
      puVar29[1] = plVar14;
      local_1078 = (long ***)0x0;
      local_1070 = (long *)0x0;
      *(long *)(param_4 + 0x8e) = *(long *)(param_4 + 0x8e) + 0x10;
    }
    else {
      local_1078 = ppplVar1;
      local_1070 = plVar14;
      FUN_7101f00930((long *)(param_4 + 0x8c),&local_1078,(long ****)ppuVar21,param_7,param_8,
                     param_9,param_10,param_11);
      if (local_1070 != (long *)0x0) {
        plVar14 = local_1070 + 1;
        do {
          lVar26 = *plVar14;
          cVar7 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(plVar14,0x10);
          if (bVar8) {
            *plVar14 = lVar26 + -1;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
        if (lVar26 == 0) {
          (**(code **)(*local_1070 + 0x10))(local_1070);
          std::__shared_weak_count::__release_weak();
        }
      }
    }
    uVar9 = uVar9 + 1;
  } while (uVar9 != uVar27);
  puVar2 = &DAT_710530a9c8;
  if (uVar5 != 0) {
    puVar2 = &DAT_710530bdf0;
  }
  if (*param_4 < 2) {
    puVar22 = (&PTR_DAT_71050b3e88)[*param_4];
    uVar23 = (ulong)uVar27;
    pppplVar35 = (long ****)0x0;
    FUN_7103776640(&local_1088,(long)puVar32,(byte ****)"set_part_entry_%s%d_%02d",puVar22,uVar23,
                   (long ****)0x0,param_9,param_10,param_11);
    lVar26 = 0;
    uVar12 = 0;
    do {
      FUN_7103778300(0x3f800000,local_1080,*(long *)((long)&PTR_s_entry_up_71050b3d48 + lVar26));
      if (uVar4 == 0xffffffff) {
LAB_7101f0221c:
        uVar37 = 0;
      }
      else {
        if (uVar4 < 10) {
          puVar29 = &DAT_7105339830;
          if ((*(char *)(DAT_71053398b0 + 8) != '\0') &&
             (puVar29 = (undefined8 *)(&DAT_7105339860)[(int)uVar4], puVar29 == (undefined8 *)0x0))
          goto LAB_7101f0221c;
        }
        else {
          puVar29 = &DAT_7105339830;
        }
        uVar9 = *(int *)(puVar29[2] + 0x9c) - 1;
        if (6 < uVar9) goto LAB_7101f0221c;
        uVar37 = *(undefined4 *)(&DAT_7104753de0 + (long)(int)uVar9 * 4);
      }
      FUN_7103776910(&local_1098,(long)&local_1088,(long ****)"txt_btn_0",puVar22,uVar23,pppplVar35,
                     param_9,param_10,param_11);
      uVar17 = local_1090;
      plVar14 = *(long **)(local_1090 + 0x10);
      if (plVar14 != (long *)0x0) {
        pbVar19 = (byte *)plVar14[0x1c];
        *(undefined4 *)((long)plVar14 + 0x25c) = uVar37;
        if (((pbVar19 != (byte *)0x0) && (*pbVar19 != 0x23)) && (*pbVar19 != 0x40)) {
          puVar15 = (ushort *)FUN_71037a4450((long *)*DAT_710593bc60,pbVar19);
          local_10a8 = (undefined **)
                       CONCAT44(local_10a8._4_4_,*(undefined4 *)((long)plVar14 + 0x25c));
          memset(&local_1078,0,0x1000);
          uVar9 = FUN_71037ae170((long)&local_1078,puVar15,(int *)&local_10a8);
          puVar22 = (undefined *)(ulong)uVar9;
          uVar23 = 0;
          FUN_71037a2270(plVar14,(ushort *)&local_1078,uVar9,0);
        }
      }
      local_1098 = &PTR_FUN_710523d9a8;
      local_1090 = 0;
      if (uVar17 != 0) {
        FUN_710392eb40(uVar17);
      }
      FUN_7103776910(&local_1098,(long)&local_1088,(long ****)"txt_btn_1",puVar22,uVar23,pppplVar35,
                     param_9,param_10,param_11);
      uVar23 = local_1090;
      plVar14 = *(long **)(local_1090 + 0x10);
      if (plVar14 != (long *)0x0) {
        pbVar19 = (byte *)plVar14[0x1c];
        *(undefined4 *)((long)plVar14 + 0x25c) = uVar37;
        if (((pbVar19 != (byte *)0x0) && (*pbVar19 != 0x23)) && (*pbVar19 != 0x40)) {
          puVar15 = (ushort *)FUN_71037a4450((long *)*DAT_710593bc60,pbVar19);
          local_10a8 = (undefined **)
                       CONCAT44(local_10a8._4_4_,*(undefined4 *)((long)plVar14 + 0x25c));
          memset(&local_1078,0,0x1000);
          uVar9 = FUN_71037ae170((long)&local_1078,puVar15,(int *)&local_10a8);
          FUN_71037a2270(plVar14,(ushort *)&local_1078,uVar9,0);
        }
      }
      local_1098 = &PTR_FUN_710523d9a8;
      local_1090 = 0;
      if (uVar23 != 0) {
        FUN_710392eb40(uVar23);
      }
      if (1 < *param_4) break;
      puVar22 = (&PTR_DAT_71050b3e88)[*param_4];
      pppplVar35 = (long ****)(uVar12 & 0xffffffff);
      uVar23 = uVar34;
      FUN_7103776640(&local_1098,(long)puVar32,(byte ****)"set_part_%s%d_%02d",puVar22,uVar34,
                     pppplVar35,param_9,param_10,param_11);
      FUN_7103776910(&local_10a8,(long)&local_1098,(long ****)"txt_press_btn",puVar22,uVar23,
                     pppplVar35,param_9,param_10,param_11);
      uVar23 = local_10a0;
      plVar14 = *(long **)(local_10a0 + 0x10);
      if (plVar14 != (long *)0x0) {
        pbVar19 = (byte *)plVar14[0x1c];
        *(undefined4 *)((long)plVar14 + 0x25c) = uVar37;
        if (((pbVar19 != (byte *)0x0) && (*pbVar19 != 0x23)) && (*pbVar19 != 0x40)) {
          puVar15 = (ushort *)FUN_71037a4450((long *)*DAT_710593bc60,pbVar19);
          local_10b8 = (undefined **)
                       CONCAT44(local_10b8._4_4_,*(undefined4 *)((long)plVar14 + 0x25c));
          memset(&local_1078,0,0x1000);
          uVar9 = FUN_71037ae170((long)&local_1078,puVar15,(int *)&local_10b8);
          FUN_71037a2270(plVar14,(ushort *)&local_1078,uVar9,0);
        }
      }
      local_10a8 = &PTR_FUN_710523d9a8;
      local_10a0 = 0;
      if (uVar23 != 0) {
        FUN_710392eb40(uVar23);
      }
      if (1 < *param_4) break;
      puVar22 = (&PTR_DAT_71050b3e88)[*param_4];
      uVar23 = (ulong)uVar27;
      pppplVar35 = (long ****)(uVar12 & 0xffffffff);
      FUN_7103776640(&local_10a8,(long)puVar32,(byte ****)"set_part_%s%d_entry_%02d",puVar22,uVar23,
                     pppplVar35,param_9,param_10,param_11);
      FUN_7103776910(&local_10b8,(long)&local_10a8,(long ****)"txt_press_btn",puVar22,uVar23,
                     pppplVar35,param_9,param_10,param_11);
      plVar14 = local_10b0;
      plVar36 = (long *)local_10b0[2];
      if (plVar36 != (long *)0x0) {
        pbVar19 = (byte *)plVar36[0x1c];
        *(undefined4 *)((long)plVar36 + 0x25c) = uVar37;
        if (((pbVar19 != (byte *)0x0) && (*pbVar19 != 0x23)) && (*pbVar19 != 0x40)) {
          puVar15 = (ushort *)FUN_71037a4450((long *)*DAT_710593bc60,pbVar19);
          local_10c8 = (undefined **)
                       CONCAT44(local_10c8._4_4_,*(undefined4 *)((long)plVar36 + 0x25c));
          memset(&local_1078,0,0x1000);
          uVar9 = FUN_71037ae170((long)&local_1078,puVar15,(int *)&local_10c8);
          puVar22 = (undefined *)(ulong)uVar9;
          uVar23 = 0;
          FUN_71037a2270(plVar36,(ushort *)&local_1078,uVar9,0);
        }
      }
      local_10b8 = &PTR_FUN_710523d9a8;
      local_10b0 = (long *)0x0;
      if (plVar14 != (long *)0x0) {
        FUN_710392eb40((ulong)plVar14);
      }
      uVar9 = *param_4;
      if (uVar9 == 0) {
        FUN_7103776640(&local_10c8,(long)puVar32,(byte ****)"set_part_result_help_l",puVar22,uVar23,
                       pppplVar35,param_9,param_10,param_11);
        FUN_7103776910(&local_10b8,(long)&local_10c8,(long ****)"set_txt_icon",puVar22,uVar23,
                       pppplVar35,param_9,param_10,param_11);
        plVar14 = local_10b0;
        plVar36 = (long *)local_10b0[2];
        if (plVar36 != (long *)0x0) {
          pbVar19 = (byte *)plVar36[0x1c];
          *(undefined4 *)((long)plVar36 + 0x25c) = uVar37;
          if (((pbVar19 != (byte *)0x0) && (*pbVar19 != 0x23)) && (*pbVar19 != 0x40)) {
            puVar15 = (ushort *)FUN_71037a4450((long *)*DAT_710593bc60,pbVar19);
            local_68 = *(int *)((long)plVar36 + 0x25c);
            memset(&local_1078,0,0x1000);
            uVar9 = FUN_71037ae170((long)&local_1078,puVar15,&local_68);
            puVar22 = (undefined *)(ulong)uVar9;
            uVar23 = 0;
            FUN_71037a2270(plVar36,(ushort *)&local_1078,uVar9,0);
          }
        }
        local_10b8 = &PTR_FUN_710523d9a8;
        local_10b0 = (long *)0x0;
        if (plVar14 != (long *)0x0) {
          FUN_710392eb40((ulong)plVar14);
        }
        uVar17 = local_10c0;
        local_10c8 = &PTR_FUN_710523d988;
        local_10c0 = 0;
        if (uVar17 != 0) {
          uVar16 = *(ulong *)(uVar17 + 0x18);
          *(undefined ***)(uVar17 + 0x10) = &PTR_FUN_710523d9a8;
          *(undefined8 *)(uVar17 + 0x18) = 0;
          if (uVar16 != 0) {
            FUN_710392eb40(uVar16);
          }
          FUN_710392eb40(uVar17);
        }
        FUN_7103776640(&local_10c8,(long)puVar32,(byte ****)"set_part_result_help_c",puVar22,uVar23,
                       pppplVar35,param_9,param_10,param_11);
        FUN_7103776910(&local_10b8,(long)&local_10c8,(long ****)"set_txt_icon",puVar22,uVar23,
                       pppplVar35,param_9,param_10,param_11);
        plVar14 = local_10b0;
        plVar36 = *(long **)((long)local_10b0 + 0x10);
        if (plVar36 != (long *)0x0) {
          pbVar19 = (byte *)plVar36[0x1c];
          *(undefined4 *)((long)plVar36 + 0x25c) = uVar37;
          if (((pbVar19 != (byte *)0x0) && (*pbVar19 != 0x23)) && (*pbVar19 != 0x40)) {
            puVar15 = (ushort *)FUN_71037a4450((long *)*DAT_710593bc60,pbVar19);
            local_68 = *(int *)((long)plVar36 + 0x25c);
            memset(&local_1078,0,0x1000);
            uVar9 = FUN_71037ae170((long)&local_1078,puVar15,&local_68);
            puVar22 = (undefined *)(ulong)uVar9;
            uVar23 = 0;
            FUN_71037a2270(plVar36,(ushort *)&local_1078,uVar9,0);
          }
        }
        local_10b8 = &PTR_FUN_710523d9a8;
        local_10b0 = (long *)0x0;
        if (plVar14 != (long *)0x0) {
          FUN_710392eb40((ulong)plVar14);
        }
        uVar17 = local_10c0;
        local_10c8 = &PTR_FUN_710523d988;
        local_10c0 = 0;
        if (uVar17 != 0) {
          uVar16 = *(ulong *)(uVar17 + 0x18);
          *(undefined ***)(uVar17 + 0x10) = &PTR_FUN_710523d9a8;
          *(undefined8 *)(uVar17 + 0x18) = 0;
          if (uVar16 != 0) {
            FUN_710392eb40(uVar16);
          }
          FUN_710392eb40(uVar17);
        }
        FUN_7103776640(&local_10c8,(long)puVar32,(byte ****)"set_part_result_help_r",puVar22,uVar23,
                       pppplVar35,param_9,param_10,param_11);
        FUN_7103776910(&local_10b8,(long)&local_10c8,(long ****)"set_txt_icon",puVar22,uVar23,
                       pppplVar35,param_9,param_10,param_11);
        plVar14 = local_10b0;
        plVar36 = *(long **)((long)local_10b0 + 0x10);
        if (plVar36 != (long *)0x0) {
          pbVar19 = (byte *)plVar36[0x1c];
          *(undefined4 *)((long)plVar36 + 0x25c) = uVar37;
          if (((pbVar19 != (byte *)0x0) && (*pbVar19 != 0x23)) && (*pbVar19 != 0x40)) {
            puVar15 = (ushort *)FUN_71037a4450((long *)*DAT_710593bc60,pbVar19);
            local_68 = *(int *)((long)plVar36 + 0x25c);
            memset(&local_1078,0,0x1000);
            uVar9 = FUN_71037ae170((long)&local_1078,puVar15,&local_68);
            FUN_71037a2270(plVar36,(ushort *)&local_1078,uVar9,0);
          }
        }
        local_10b8 = &PTR_FUN_710523d9a8;
        local_10b0 = (long *)0x0;
        if (plVar14 != (long *)0x0) {
          FUN_710392eb40((ulong)plVar14);
        }
        uVar23 = local_10c0;
        local_10c8 = &PTR_FUN_710523d988;
        local_10c0 = 0;
        if (uVar23 != 0) {
          uVar17 = *(ulong *)(uVar23 + 0x18);
          *(undefined ***)(uVar23 + 0x10) = &PTR_FUN_710523d9a8;
          *(undefined8 *)(uVar23 + 0x18) = 0;
          if (uVar17 != 0) {
            FUN_710392eb40(uVar17);
          }
          FUN_710392eb40(uVar23);
        }
        uVar9 = *param_4;
      }
      if (1 < uVar9) break;
      FUN_7103776910(&local_10b8,(long)puVar32,(long ****)"set_%s%d_status_txt_%d",
                     (&PTR_DAT_71050b3e88)[uVar9],(ulong)uVar27,(long ****)(uVar12 & 0xffffffff),
                     param_9,param_10,param_11);
      iVar11 = (int)uVar12;
      if ((*local_10b0 != 0) && (plVar14 = (long *)local_10b0[2], plVar14 != (long *)0x0)) {
        param_9 = 0;
        local_1048 = 0;
        uStack_1040 = 0;
        local_1058 = 0;
        uStack_1050 = 0;
        local_1068 = 0;
        uStack_1060 = 0;
        local_1078 = (long ***)0x0;
        local_1070 = (long *)0x0;
        uVar9 = FUN_71037ad940((long)&local_1078,0x20,0,iVar11 + 1,0,0);
        FUN_71037a2270(plVar14,(ushort *)&local_1078,uVar9,0);
      }
      pcVar20 = "color_cp";
      if (*(int *)(*(long *)(param_4 + 0xaa) + 0xf0) != -1) {
        pcVar20 = "color_p";
      }
      if (((DAT_71053144d8 & 1) == 0) && (iVar10 = __cxa_guard_acquire(), iVar10 != 0)) {
        FUN_7101764000();
        FUN_71000001c0();
        __cxa_guard_release(&DAT_71053144d8);
      }
      if (1 < *param_4) break;
      uVar9 = 3;
      if (DAT_710530d560 != 0) {
        uVar9 = 5;
      }
      ppppbVar31 = (byte ****)(ulong)uVar9;
      puVar22 = (&PTR_DAT_71050b3e88)[*param_4];
      pppplVar35 = (long ****)(uVar12 & 0xffffffff);
      FUN_7103776640(&local_1078,(long)puVar32,(byte ****)"set_part_entry_%s%d_%02d",puVar22,
                     ppppbVar31,pppplVar35,param_9,param_10,param_11);
      plVar14 = local_1070;
      FUN_7103778300(0x3f800000,(long)local_1070,(long)pcVar20);
      local_1078 = (long ***)&PTR_FUN_710523d988;
      local_1070 = (long *)0x0;
      if (plVar14 != (long *)0x0) {
        uVar23 = plVar14[3];
        plVar14[2] = (long)&PTR_FUN_710523d9a8;
        plVar14[3] = 0;
        if (uVar23 != 0) {
          FUN_710392eb40(uVar23);
        }
        FUN_710392eb40((ulong)plVar14);
      }
      if ((ulong)(*(long *)(param_4 + 0x88) - *(long *)(param_4 + 0x86) >> 4) <= uVar12) {
LAB_7101f031e0:
                    /* WARNING: Subroutine does not return */
        std::__vector_base_common<true>::__throw_out_of_range();
      }
      FUN_7101ef9b40((uint *)**(undefined8 **)(*(long *)(param_4 + 0x86) + lVar26),local_64);
      if ((ulong)(*(long *)(param_4 + 0x88) - *(long *)(param_4 + 0x86) >> 4) <= uVar12)
      goto LAB_7101f031e0;
      auVar38._4_4_ = extraout_var;
      auVar38._0_4_ = extraout_s0;
      auVar38._8_8_ = extraout_var_00;
      FUN_7101ef9f70(auVar38,param_2,param_3,
                     (uint *)**(undefined8 **)(*(long *)(param_4 + 0x86) + lVar26),param_5,puVar22,
                     ppppbVar31,pppplVar35,param_9,param_10,param_11);
      if ((ulong)(*(long *)(param_4 + 0x8e) - *(long *)(param_4 + 0x8c) >> 4) <= uVar12) {
LAB_7101f031e8:
                    /* WARNING: Subroutine does not return */
        std::__vector_base_common<true>::__throw_out_of_range();
      }
      FUN_7101ef9b40((uint *)**(undefined8 **)(*(long *)(param_4 + 0x8c) + lVar26),local_64);
      plVar14 = local_10b0;
      if ((ulong)(*(long *)(param_4 + 0x8e) - *(long *)(param_4 + 0x8c) >> 4) <= uVar12)
      goto LAB_7101f031e8;
      lVar28 = **(long **)(*(long *)(param_4 + 0x8c) + lVar26);
      *(undefined8 *)(lVar28 + 0x1b0) = 0x100000000;
      *(undefined8 *)(lVar28 + 0x1b8) = 0;
      *(undefined8 *)(lVar28 + 0x1f0) = 0;
      *(undefined8 *)(lVar28 + 0x1f8) = 0x100000000;
      *(undefined8 *)(lVar28 + 0x20) = 0;
      *(undefined8 *)(lVar28 + 0x28) = 0;
      *(undefined8 *)(lVar28 + 0x200) = 0xffffffff;
      *(undefined8 *)(lVar28 + 0x1e0) = 0;
      *(undefined8 *)(lVar28 + 0x1e8) = 0;
      *(undefined4 *)(lVar28 + 0x208) = 0xffffffff;
      *(undefined8 *)(lVar28 + 0x1d0) = 0;
      *(undefined8 *)(lVar28 + 0x1d8) = 0;
      *(undefined1 *)(lVar28 + 0x20c) = 0;
      *(undefined8 *)(lVar28 + 0x1c0) = 0;
      *(undefined8 *)(lVar28 + 0x1c8) = 0;
      local_10b8 = &PTR_FUN_710523d9a8;
      local_10b0 = (long *)0x0;
      if (plVar14 != (long *)0x0) {
        FUN_710392eb40((ulong)plVar14);
      }
      uVar23 = local_10a0;
      local_10a8 = &PTR_FUN_710523d988;
      local_10a0 = 0;
      if (uVar23 != 0) {
        uVar17 = *(ulong *)(uVar23 + 0x18);
        *(undefined ***)(uVar23 + 0x10) = &PTR_FUN_710523d9a8;
        *(undefined8 *)(uVar23 + 0x18) = 0;
        if (uVar17 != 0) {
          FUN_710392eb40(uVar17);
        }
        FUN_710392eb40(uVar23);
      }
      uVar23 = local_1090;
      local_1098 = &PTR_FUN_710523d988;
      local_1090 = 0;
      if (uVar23 != 0) {
        uVar17 = *(ulong *)(uVar23 + 0x18);
        *(undefined ***)(uVar23 + 0x10) = &PTR_FUN_710523d9a8;
        *(undefined8 *)(uVar23 + 0x18) = 0;
        if (uVar17 != 0) {
          FUN_710392eb40(uVar17);
        }
        FUN_710392eb40(uVar23);
      }
      uVar23 = local_1080;
      local_1088 = &PTR_FUN_710523d988;
      local_1080 = 0;
      if (uVar23 != 0) {
        uVar17 = *(ulong *)(uVar23 + 0x18);
        *(undefined ***)(uVar23 + 0x10) = &PTR_FUN_710523d9a8;
        *(undefined8 *)(uVar23 + 0x18) = 0;
        if (uVar17 != 0) {
          FUN_710392eb40(uVar17);
        }
        FUN_710392eb40(uVar23);
      }
      uVar12 = uVar12 + 1;
      if (uVar34 <= uVar12) {
        puVar32 = *(uint **)(param_4 + 0xa8);
        if (1 < *puVar32) break;
        ppuVar21 = (undefined **)(&PTR_DAT_71050b3e88)[*puVar32];
        FUN_7103776640(&local_1078,*(long *)**(undefined8 **)(puVar32 + 2) + 8,
                       (byte ****)"set_part_%s_help",ppuVar21,ppppbVar31,pppplVar35,param_9,param_10
                       ,param_11);
        plVar14 = local_1070;
        if ((long ****)(puVar32 + 0x46) != &local_1078) {
          local_1070 = (long *)0x0;
          uVar34 = *(ulong *)(puVar32 + 0x48);
          *(long **)(puVar32 + 0x48) = plVar14;
          if (uVar34 != 0) {
            uVar12 = *(ulong *)(uVar34 + 0x18);
            *(undefined ***)(uVar34 + 0x10) = &PTR_FUN_710523d9a8;
            *(undefined8 *)(uVar34 + 0x18) = 0;
            if (uVar12 != 0) {
              FUN_710392eb40(uVar12);
            }
            FUN_710392eb40(uVar34);
          }
        }
        plVar14 = local_1070;
        local_1078 = (long ***)&PTR_FUN_710523d988;
        local_1070 = (long *)0x0;
        if (plVar14 != (long *)0x0) {
          uVar34 = plVar14[3];
          plVar14[2] = (long)&PTR_FUN_710523d9a8;
          plVar14[3] = 0;
          if (uVar34 != 0) {
            FUN_710392eb40(uVar34);
          }
          FUN_710392eb40((ulong)plVar14);
        }
        if (local_64 == 1) {
          pcVar20 = "set_5";
        }
        else {
          pcVar20 = "set_3";
        }
        FUN_7103778300(0x3f800000,*(long *)(puVar32 + 0x48),(long)pcVar20);
        FUN_7103778300(0x3f800000,*(long *)(puVar32 + 0x48),0x7104443f4b);
        FUN_7101ef8550((long)puVar32,uVar4,ppuVar21,ppppbVar31,pppplVar35,param_9,param_10,param_11)
        ;
        if (*(int *)(*(long *)(param_4 + 0xaa) + 0xf0) == -1) {
          lVar26 = *(long *)(*(long *)(*(long *)(param_4 + 0xa8) + 0x120) + 8);
          if ((lVar26 != 0) && (lVar26 = *(long *)(lVar26 + 0x18), lVar26 != 0)) {
            bVar25 = *(byte *)(lVar26 + 0x58) & 0xfe;
            goto LAB_7101f02f74;
          }
        }
        else {
          if (((DAT_71053144d8 & 1) == 0) &&
             (iVar11 = __cxa_guard_acquire(&DAT_71053144d8), iVar11 != 0)) {
            FUN_7101764000();
            ppuVar21 = &PTR_LOOP_7104f17000;
            FUN_71000001c0();
            __cxa_guard_release(&DAT_71053144d8);
          }
          puVar3 = &DAT_710530a9c8;
          if (*param_4 != 0) {
            puVar3 = &DAT_710530bdf0;
          }
          if (((DAT_71053144d8 & 1) == 0) &&
             (iVar11 = __cxa_guard_acquire(&DAT_71053144d8), iVar11 != 0)) {
            FUN_7101764000();
            ppuVar21 = &PTR_LOOP_7104f17000;
            FUN_71000001c0();
            __cxa_guard_release(&DAT_71053144d8);
          }
          if ((DAT_710530a975 == '\x02') || (*(short *)(puVar3 + 0x4a) != 0)) {
            if (((DAT_71053144d8 & 1) == 0) &&
               (iVar11 = __cxa_guard_acquire(&DAT_71053144d8), iVar11 != 0)) {
              FUN_7101764000();
              ppuVar21 = &PTR_LOOP_7104f17000;
              FUN_71000001c0();
              __cxa_guard_release(&DAT_71053144d8);
            }
            if (DAT_710530a975 == '\x02') {
              uVar6 = *(ushort *)(puVar2 + 0x4e);
              lVar26 = *(long *)(param_4 + 0xa8);
              uVar9 = FUN_71033115f0((float)(long)(ulong)uVar6,
                                     *(float **)(*(long *)(DAT_710532f8c0 + 8) + 0xe0),
                                     *(float **)(*(long *)(DAT_710532f8c0 + 8) + 0xe8));
              local_1088 = (undefined **)CONCAT44(local_1088._4_4_,uVar9);
              FUN_7103776910(&local_1078,lVar26 + 0x118,(long ****)"set_txt_hp",ppuVar21,ppppbVar31,
                             pppplVar35,param_9,param_10,param_11);
              pcVar20 = "mel_chara_select_hp";
              ppppbVar31 = (byte ****)(ulong)uVar6;
            }
            else {
              uVar6 = *(ushort *)(puVar2 + 0x4a);
              lVar26 = *(long *)(param_4 + 0xa8);
              uVar9 = FUN_71033114a0((float)(long)(ulong)uVar6,
                                     *(float **)(*(long *)(DAT_710532f8c0 + 8) + 200),
                                     *(float **)(*(long *)(DAT_710532f8c0 + 8) + 0xd0));
              local_1088 = (undefined **)CONCAT44(local_1088._4_4_,uVar9);
              FUN_7103776910(&local_1078,lVar26 + 0x118,(long ****)"set_txt_hp",ppuVar21,ppppbVar31,
                             pppplVar35,param_9,param_10,param_11);
              pcVar20 = "mel_chara_select_hc_percent";
              ppppbVar31 = (byte ****)(ulong)uVar6;
            }
            ppuVar21 = (undefined **)0x1;
            FUN_710377a280((long)&local_1078,(byte *)pcVar20,1);
            plVar14 = local_1070;
            FUN_710377a5b0(local_1070[2],(char *)&local_1088);
            local_1078 = (long ***)&PTR_FUN_710523d9a8;
            local_1070 = (long *)0x0;
            if (plVar14 != (long *)0x0) {
              FUN_710392eb40((ulong)plVar14);
            }
            lVar26 = *(long *)(param_4 + 0xa8);
            iVar11 = *(int *)(lVar26 + 0x130);
            if (iVar11 != 1) {
              *(undefined4 *)(lVar26 + 0x104) = 0;
              *(undefined8 *)(lVar26 + 0x18) = 0;
              *(undefined8 *)(lVar26 + 0x20) = 0;
              *(undefined8 *)(lVar26 + 0xfc) = 0;
              *(undefined8 *)(lVar26 + 0xf4) = 0;
              *(undefined8 *)(lVar26 + 0xec) = 0;
              *(undefined8 *)(lVar26 + 0xe4) = 0;
              *(undefined8 *)(lVar26 + 0xdc) = 0;
              *(undefined8 *)(lVar26 + 0xd4) = 0;
              *(undefined8 *)(lVar26 + 0xcc) = 0;
              *(undefined8 *)(lVar26 + 0xc4) = 0;
              *(undefined8 *)(lVar26 + 0xbc) = 0;
              *(undefined8 *)(lVar26 + 0x108) = 0xffffffff;
              *(undefined4 *)(lVar26 + 0x110) = 0xffffffff;
              *(undefined1 *)(lVar26 + 0x114) = 0;
              *(undefined4 *)(lVar26 + 0xb8) = 0;
              if (iVar11 == 3) {
                *(undefined4 *)(lVar26 + 0x104) = 1;
                uVar37 = 7;
LAB_7101f02e4c:
                *(undefined4 *)(lVar26 + 0xbc) = uVar37;
              }
              else if (iVar11 == 2) {
                *(undefined8 *)(lVar26 + 0xbc) = 0x500000002;
                *(undefined4 *)(lVar26 + 0x104) = 2;
              }
              else if (iVar11 == 0) {
                *(undefined4 *)(lVar26 + 0x104) = 1;
                uVar37 = 2;
                goto LAB_7101f02e4c;
              }
              if (1 < *(uint *)(lVar26 + 0x134)) break;
              *(undefined4 *)(lVar26 + (long)(int)*(uint *)(lVar26 + 0x134) * 4 + 0x128) = 1;
              *(undefined4 *)(lVar26 + 0x130) = 1;
            }
          }
          else {
            lVar26 = *(long *)(param_4 + 0xa8);
            iVar11 = *(int *)(lVar26 + 0x130);
            if (iVar11 != 0) {
              *(undefined4 *)(lVar26 + 0x100) = 0;
              *(undefined8 *)(lVar26 + 0x18) = 0;
              *(undefined8 *)(lVar26 + 0x20) = 0;
              *(undefined8 *)(lVar26 + 0xf0) = 0;
              *(undefined8 *)(lVar26 + 0xf8) = 0;
              *(undefined8 *)(lVar26 + 0xe0) = 0;
              *(undefined8 *)(lVar26 + 0xe8) = 0;
              *(undefined8 *)(lVar26 + 0xd0) = 0;
              *(undefined8 *)(lVar26 + 0xd8) = 0;
              *(undefined8 *)(lVar26 + 0xc0) = 0;
              *(undefined8 *)(lVar26 + 200) = 0;
              *(undefined8 *)(lVar26 + 0x10c) = 0xffffffff00000000;
              *(undefined8 *)(lVar26 + 0xb8) = 0x100000000;
              *(undefined1 *)(lVar26 + 0x114) = 0;
              *(undefined8 *)(lVar26 + 0x104) = 0xffffffff00000001;
              if (iVar11 == 3) {
                *(undefined8 *)(lVar26 + 0xc0) = 0x700000005;
                *(undefined4 *)(lVar26 + 0x104) = 3;
              }
              else if (iVar11 == 2) {
                *(undefined4 *)(lVar26 + 0x104) = 2;
                *(undefined4 *)(lVar26 + 0xc0) = 5;
              }
              else if (iVar11 == 1) {
                *(undefined4 *)(lVar26 + 0x104) = 2;
                *(undefined4 *)(lVar26 + 0xc0) = 3;
              }
              if (1 < *(uint *)(lVar26 + 0x134)) break;
              *(undefined4 *)(lVar26 + (long)(int)*(uint *)(lVar26 + 0x134) * 4 + 0x128) = 0;
              *(undefined4 *)(lVar26 + 0x130) = 0;
            }
          }
          lVar26 = **(long **)**(undefined8 **)(param_4 + 2);
          if (param_4[1] == 0) {
            lVar26 = lVar26 + 0x5f8;
          }
          else {
            uVar34 = (long)(int)param_4[1] - 1;
            if ((ulong)(*(long *)(lVar26 + 0x610) - *(long *)(lVar26 + 0x608) >> 4) <= uVar34) {
                    /* WARNING: Subroutine does not return */
              std::__vector_base_common<true>::__throw_out_of_range();
            }
            lVar26 = *(long *)(lVar26 + 0x608) + uVar34 * 0x10;
          }
          lVar28 = *(long *)(lVar26 + 8);
          *(undefined4 *)(lVar28 + 0x484) = 0;
          *(uint *)(lVar28 + 0x488) = uVar4;
          if (*(uint *)(lVar28 + 0x48c) != uVar4) {
            *(uint *)(lVar28 + 0x48c) = uVar4;
          }
          *(undefined4 *)(*(long *)(lVar26 + 8) + 0x10) = 0x20;
          *(undefined4 *)(*(long *)(lVar26 + 8) + 0x18) = 0x100001;
          *(undefined4 *)(*(long *)(lVar26 + 8) + 0x1c) = 0x800008;
          *(undefined4 *)(*(long *)(lVar26 + 8) + 0x20) = 0x400004;
          *(undefined4 *)(*(long *)(lVar26 + 8) + 0x24) = 0x200002;
          *(undefined4 *)(*(long *)(lVar26 + 8) + 0x28) = 0x20;
          *(undefined4 *)(*(long *)(lVar26 + 8) + 0x2c) = 0x40;
          *(undefined4 *)(*(long *)(lVar26 + 8) + 0x30) = 0x10;
          *(undefined4 *)(*(long *)(lVar26 + 8) + 0x34) = 0x10;
          lVar26 = *(long *)(*(long *)(*(long *)(param_4 + 0xa8) + 0x120) + 8);
          if ((lVar26 != 0) && (lVar26 = *(long *)(lVar26 + 0x18), lVar26 != 0)) {
            bVar25 = *(byte *)(lVar26 + 0x58) | 1;
LAB_7101f02f74:
            *(byte *)(lVar26 + 0x58) = bVar25;
          }
        }
        puVar29 = (undefined8 *)
                  FUN_710392e290(0x10,0x210,(long ****)ppuVar21,ppppbVar31,pppplVar35,param_9,
                                 param_10,param_11);
        if (puVar29 == (undefined8 *)0x0) {
          if (DAT_7105332f00 != (long *)0x0) {
            local_1088 = (undefined **)((ulong)local_1088 & 0xffffffff00000000);
            local_1078 = (long ***)&DAT_00000210;
            pppplVar24 = &local_1078;
            uVar34 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_1088);
            if (((uVar34 & 1) != 0) &&
               (puVar29 = (undefined8 *)
                          FUN_710392e290(0x10,0x210,pppplVar24,ppppbVar31,pppplVar35,param_9,
                                         param_10,param_11), puVar29 != (undefined8 *)0x0))
            goto LAB_7101f02fd4;
          }
          puVar29 = (undefined8 *)0x0;
        }
LAB_7101f02fd4:
        *puVar29 = param_4;
        puVar29[1] = param_5;
        *(undefined4 *)((long)puVar29 + 500) = 0;
        puVar29[2] = puVar29;
        puVar29[5] = 0;
        puVar29[6] = 0;
        puVar29[0x3f] = 0xffffffff;
        *(undefined4 *)(puVar29 + 0x40) = 0xffffffff;
        *(undefined1 *)((long)puVar29 + 0x204) = 0;
        puVar29[3] = 0;
        puVar29[4] = 0;
        memset(puVar29 + 0xf,0,0x17c);
        puVar29[7] = FUN_7101f00b50;
        puVar29[8] = 0;
        puVar29[0x41] = 0;
        puVar29[9] = FUN_7101f00b60;
        puVar29[10] = 0;
        puVar29[0xb] = FUN_7101f00cb0;
        puVar29[0xc] = 0;
        *(undefined4 *)(puVar29 + 0x35) = 0;
        puVar29[0xd] = FUN_7101f00e10;
        puVar29[0xe] = 0;
        uVar34 = *(ulong *)(param_4 + 0xac);
        *(undefined8 **)(param_4 + 0xac) = puVar29;
        if (uVar34 != 0) {
          FUN_710392eb40(uVar34);
        }
        return;
      }
      if (1 < *param_4) break;
      pppplVar35 = (long ****)(ulong)(iVar11 + 1);
      puVar22 = (&PTR_DAT_71050b3e88)[*param_4];
      uVar23 = (ulong)uVar27;
      FUN_7103776640(&local_1088,(long)puVar32,(byte ****)"set_part_entry_%s%d_%02d",puVar22,uVar23,
                     pppplVar35,param_9,param_10,param_11);
      lVar26 = lVar26 + 0x10;
    } while (uVar12 < 5);
  }
LAB_7101f031dc:
                    /* WARNING: Subroutine does not return */
  abort();
}

