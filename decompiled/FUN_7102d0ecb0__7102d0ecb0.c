// addr:      7102d0ecb0
// offset:    0x2d0ecb0
// name:      FUN_7102d0ecb0
// mangled:   
// signature: undefined __cdecl FUN_7102d0ecb0(long * param_1, long param_2, long * * * * * * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, long * * * param_7, long * * * param_8)


void FUN_7102d0ecb0(long *param_1,long param_2,long *********param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,long ***param_7,long ***param_8)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  long *plVar5;
  long ******pppppplVar6;
  void *pvVar7;
  undefined8 *puVar8;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 uVar9;
  long extraout_x1_01;
  long *extraout_x1_02;
  long *extraout_x1_03;
  long *extraout_x1_04;
  long *extraout_x1_05;
  long *extraout_x1_06;
  long extraout_x1_07;
  long *extraout_x1_08;
  long *extraout_x1_09;
  long *extraout_x1_10;
  long *extraout_x1_11;
  long *extraout_x1_12;
  long extraout_x1_13;
  long *********ppppppppplVar10;
  long lVar11;
  ulong uVar12;
  long ********pppppppplVar13;
  void *pvVar14;
  long ****pppplVar15;
  long *********ppppppppplVar16;
  ulong uVar17;
  undefined1 auVar18 [16];
  long ********local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  long ********local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  
  *(undefined4 *)(param_1 + 3) = 0;
  ppppppppplVar10 = param_3;
  plVar5 = (long *)FUN_710392e290(0x10,0x18,(long ****)param_3,param_4,param_5,param_6,param_7,
                                  param_8);
  uVar9 = extraout_x1;
  if (plVar5 == (long *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_e0 = (long ********)((ulong)local_e0 & 0xffffffff00000000);
      local_a0 = (long ********)&SUB_00000018;
      ppppppppplVar10 = &local_a0;
      auVar18 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_e0);
      uVar9 = auVar18._8_8_;
      if (((auVar18._0_8_ & 1) != 0) &&
         (plVar5 = (long *)FUN_710392e290(0x10,0x18,(long ****)ppppppppplVar10,param_4,param_5,
                                          param_6,param_7,param_8), uVar9 = extraout_x1_00,
         plVar5 != (long *)0x0)) goto LAB_7102d0ed34;
    }
    plVar5 = (long *)0x0;
  }
LAB_7102d0ed34:
  param_1[2] = (long)(plVar5 + 3);
  *plVar5 = (long)param_3;
  *param_1 = (long)plVar5;
  param_1[1] = (long)(plVar5 + 1);
  if (param_3 != (long *********)0x0) {
    *(undefined1 *)(param_3 + 0x22) = 0;
    FUN_71025e9d50((long *)(param_3 + 0x21),uVar9,(long ****)ppppppppplVar10,param_4,param_5,param_6
                   ,param_7,param_8);
    plVar5 = (long *)*param_1;
  }
  lVar11 = *plVar5;
  if (lVar11 != 0) {
    if ((*(char *)(lVar11 + 0xe0) != '\0') && (*(long *)(lVar11 + 200) != 0)) {
      *(undefined2 *)(*(long *)(lVar11 + 200) + 0x30) = 0x101;
    }
    if (*(long *)(lVar11 + 0xd8) != 0) {
      *(undefined1 *)(*(long *)(lVar11 + 0xd8) + 0x21) = 1;
    }
    if (*(char *)(lVar11 + 0xe0) != '\0') {
      *(undefined1 *)(*(long *)(lVar11 + 0xb0) + 0x10) = 0;
    }
  }
  if (param_3 == (long *********)0x0) {
    local_a8 = 0x3f80000000000000;
    local_b0 = 0;
    uStack_b8 = 0x3f800000;
    local_c0 = 0;
    bVar1 = true;
    uStack_d8 = 0;
    local_e0 = (long ********)&DAT_3f800000;
    local_c8 = 0;
    local_d0 = 0x3f80000000000000;
  }
  else {
    if (param_3[0x1b] == (long ********)0x0) {
      uVar2 = 0xffffffff;
    }
    else {
      pppppplVar6 = param_3[0x1b][1][1];
      uVar2 = (*(code *)(*pppppplVar6)[3])(pppppplVar6,"tripNumber_001_O_OBJ_O_HIR");
    }
    bVar1 = param_3 == (long *********)0x0;
    if ((param_3[0x1b] == (long ********)0x0) ||
       (uVar3 = (*(code *)(*param_3[0x1b][1][1])[2])(), uVar3 <= uVar2)) {
      puVar8 = (undefined8 *)(*(code *)(*param_3[0x12])[0x2b])();
    }
    else {
      (*(code *)(*param_3[0x1b][1][9])[7])(param_3[0x1b][1][9],0);
      puVar8 = (undefined8 *)(extraout_x1_01 + (ulong)uVar2 * 0x40);
    }
    uStack_b8 = puVar8[5];
    local_c0 = puVar8[4];
    uStack_d8 = puVar8[1];
    local_e0 = (long ********)*puVar8;
    local_c8 = puVar8[3];
    local_d0 = puVar8[2];
    local_a8 = puVar8[7];
    local_b0 = puVar8[6];
  }
  lVar11 = *(long *)*param_1;
  if (lVar11 != 0) {
    (**(code **)(**(long **)(lVar11 + 0x90) + 0x148))(*(long **)(lVar11 + 0x90),&local_e0);
    lVar11 = *(long *)(lVar11 + 0xd8);
    if (lVar11 != 0) {
      local_88 = local_c8;
      local_90 = local_d0;
      local_98 = uStack_d8;
      local_a0 = local_e0;
      local_68 = local_a8;
      local_70 = local_b0;
      local_78 = uStack_b8;
      local_80 = local_c0;
      if (*(char *)(*(long *)(lVar11 + 8) + 0xa8) != '\0') {
        plVar5 = *(long **)(*(long *)(lVar11 + 8) + 0x48);
        (**(code **)(*plVar5 + 0x20))(plVar5,&local_a0);
      }
      *(undefined1 *)(lVar11 + 0x20) = 1;
    }
  }
  lVar11 = *(long *)(param_2 + 0x310);
  if (param_3 == (long *********)0x0) {
    if ((DAT_710532aa30 & 1) == 0) {
      iVar4 = __cxa_guard_acquire(&DAT_710532aa30);
      ppppppppplVar16 = (long *********)&DAT_710532aa38;
      if (iVar4 != 0) {
        DAT_710532aa38 = 0xffffff;
        __cxa_guard_release(&DAT_710532aa30);
      }
    }
    else {
      ppppppppplVar16 = (long *********)&DAT_710532aa38;
    }
  }
  else {
    ppppppppplVar16 = param_3 + 0xc;
  }
  plVar5 = *(long **)(lVar11 + 0xd0);
  if (plVar5 != *(long **)(lVar11 + 0xd8)) {
    do {
      if ((*(uint *)(plVar5 + 1) < 2) && (*(int *)(*plVar5 + 0x60) == *(int *)ppppppppplVar16)) {
        pppplVar15 = FUN_710262fb80(lVar11,plVar5,ppppppppplVar10,param_4,param_5,param_6,param_7,
                                    param_8);
        plVar5 = extraout_x1_02;
        goto LAB_7102d0ef88;
      }
      plVar5 = plVar5 + 2;
    } while (*(long **)(lVar11 + 0xd8) != plVar5);
  }
  pppplVar15 = (long ****)0x0;
LAB_7102d0ef88:
  puVar8 = (undefined8 *)param_1[1];
  if (puVar8 < (undefined8 *)param_1[2]) {
    *puVar8 = pppplVar15;
    param_1[1] = param_1[1] + 8;
  }
  else {
    pvVar14 = (void *)*param_1;
    ppppppppplVar16 = (long *********)((long)puVar8 - (long)pvVar14);
    uVar17 = ((long)ppppppppplVar16 >> 3) + 1;
    if (uVar17 >> 0x3d != 0) goto LAB_7102d0f64c;
    lVar11 = param_1[2] - (long)pvVar14;
    if ((ulong)(lVar11 >> 3) < 0xfffffffffffffff) {
      uVar12 = lVar11 >> 2;
      if (uVar17 <= uVar12) {
        uVar17 = uVar12;
      }
      if (uVar17 != 0) {
        if (uVar17 >> 0x3d != 0) goto LAB_7102d0f340;
        goto LAB_7102d0effc;
      }
LAB_7102d0f05c:
      pvVar7 = (void *)0x0;
    }
    else {
      uVar17 = 0x1fffffffffffffff;
LAB_7102d0effc:
      pppppppplVar13 = (long ********)(uVar17 * 8);
      if (pppppppplVar13 == (long ********)0x0) {
        pppppppplVar13 = (long ********)0x1;
      }
      pvVar7 = (void *)FUN_710392e290(0x10,pppppppplVar13,(long ****)ppppppppplVar10,param_4,param_5
                                      ,param_6,param_7,param_8);
      plVar5 = extraout_x1_03;
      if (pvVar7 == (void *)0x0) {
        if (DAT_7105332f00 != (long *)0x0) {
          local_e0 = (long ********)((ulong)local_e0 & 0xffffffff00000000);
          ppppppppplVar10 = &local_a0;
          local_a0 = pppppppplVar13;
          auVar18 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_e0);
          plVar5 = auVar18._8_8_;
          if (((auVar18._0_8_ & 1) != 0) &&
             (pvVar7 = (void *)FUN_710392e290(0x10,pppppppplVar13,(long ****)ppppppppplVar10,param_4
                                              ,param_5,param_6,param_7,param_8),
             plVar5 = extraout_x1_04, pvVar7 != (void *)0x0)) goto LAB_7102d0f060;
        }
        goto LAB_7102d0f05c;
      }
    }
LAB_7102d0f060:
    puVar8 = (undefined8 *)((long)pvVar7 + ((long)ppppppppplVar16 >> 3) * 8);
    *puVar8 = pppplVar15;
    if (0 < (long)ppppppppplVar16) {
      memcpy(pvVar7,pvVar14,(size_t)ppppppppplVar16);
      plVar5 = extraout_x1_05;
      ppppppppplVar10 = ppppppppplVar16;
    }
    *param_1 = (long)pvVar7;
    param_1[1] = (long)(puVar8 + 1);
    param_1[2] = (long)((long)pvVar7 + uVar17 * 8);
    if (pvVar14 != (void *)0x0) {
      FUN_710392eb40((ulong)pvVar14);
      plVar5 = extraout_x1_06;
    }
  }
  lVar11 = *(long *)(*param_1 + 8);
  if (lVar11 != 0) {
    *(undefined1 *)(lVar11 + 0x110) = 0;
    FUN_71025e9d50((long *)(lVar11 + 0x108),plVar5,(long ****)ppppppppplVar10,param_4,param_5,
                   param_6,param_7,param_8);
    lVar11 = *(long *)(*param_1 + 8);
    if (lVar11 != 0) {
      if ((*(char *)(lVar11 + 0xe0) != '\0') && (*(long *)(lVar11 + 200) != 0)) {
        *(undefined2 *)(*(long *)(lVar11 + 200) + 0x30) = 0x101;
      }
      if (*(long *)(lVar11 + 0xd8) != 0) {
        *(undefined1 *)(*(long *)(lVar11 + 0xd8) + 0x21) = 1;
      }
      if (*(char *)(lVar11 + 0xe0) != '\0') {
        *(undefined1 *)(*(long *)(lVar11 + 0xb0) + 0x10) = 0;
      }
    }
  }
  if ((param_3 == (long *********)0x0) || (param_3[0x1b] == (long ********)0x0)) {
    uVar2 = 0xffffffff;
    if (bVar1) goto LAB_7102d0f190;
LAB_7102d0f13c:
    if ((param_3[0x1b] == (long ********)0x0) ||
       (uVar3 = (*(code *)(*param_3[0x1b][1][1])[2])(), uVar3 <= uVar2)) {
      puVar8 = (undefined8 *)(*(code *)(*param_3[0x12])[0x2b])();
    }
    else {
      (*(code *)(*param_3[0x1b][1][9])[7])(param_3[0x1b][1][9],0);
      puVar8 = (undefined8 *)(extraout_x1_07 + (ulong)uVar2 * 0x40);
    }
    uStack_b8 = puVar8[5];
    local_c0 = puVar8[4];
    uStack_d8 = puVar8[1];
    local_e0 = (long ********)*puVar8;
    local_c8 = puVar8[3];
    local_d0 = puVar8[2];
    local_a8 = puVar8[7];
    local_b0 = puVar8[6];
  }
  else {
    pppppplVar6 = param_3[0x1b][1][1];
    uVar2 = (*(code *)(*pppppplVar6)[3])(pppppplVar6,"tripNumber_010_O_OBJ_O_HIR");
    if (!bVar1) goto LAB_7102d0f13c;
LAB_7102d0f190:
    local_a8 = 0x3f80000000000000;
    local_b0 = 0;
    uStack_b8 = 0x3f800000;
    local_c0 = 0;
    uStack_d8 = 0;
    local_e0 = (long ********)&DAT_3f800000;
    local_c8 = 0;
    local_d0 = 0x3f80000000000000;
  }
  lVar11 = *(long *)(*param_1 + 8);
  if (lVar11 != 0) {
    (**(code **)(**(long **)(lVar11 + 0x90) + 0x148))(*(long **)(lVar11 + 0x90),&local_e0);
    lVar11 = *(long *)(lVar11 + 0xd8);
    if (lVar11 != 0) {
      local_88 = local_c8;
      local_90 = local_d0;
      local_98 = uStack_d8;
      local_a0 = local_e0;
      local_68 = local_a8;
      local_70 = local_b0;
      local_78 = uStack_b8;
      local_80 = local_c0;
      if (*(char *)(*(long *)(lVar11 + 8) + 0xa8) != '\0') {
        plVar5 = *(long **)(*(long *)(lVar11 + 8) + 0x48);
        (**(code **)(*plVar5 + 0x20))(plVar5,&local_a0);
      }
      *(undefined1 *)(lVar11 + 0x20) = 1;
    }
  }
  lVar11 = *(long *)(param_2 + 0x310);
  if (param_3 == (long *********)0x0) {
    if ((DAT_710532aa30 & 1) == 0) {
      iVar4 = __cxa_guard_acquire(&DAT_710532aa30);
      ppppppppplVar16 = (long *********)&DAT_710532aa38;
      if (iVar4 != 0) {
        DAT_710532aa38 = 0xffffff;
        __cxa_guard_release(&DAT_710532aa30);
      }
    }
    else {
      ppppppppplVar16 = (long *********)&DAT_710532aa38;
    }
  }
  else {
    ppppppppplVar16 = param_3 + 0xc;
  }
  plVar5 = *(long **)(lVar11 + 0xd0);
  if (plVar5 != *(long **)(lVar11 + 0xd8)) {
    do {
      if ((*(uint *)(plVar5 + 1) < 2) && (*(int *)(*plVar5 + 0x60) == *(int *)ppppppppplVar16)) {
        pppplVar15 = FUN_710262fb80(lVar11,plVar5,ppppppppplVar10,param_4,param_5,param_6,param_7,
                                    param_8);
        plVar5 = extraout_x1_08;
        goto LAB_7102d0f2dc;
      }
      plVar5 = plVar5 + 2;
    } while (*(long **)(lVar11 + 0xd8) != plVar5);
  }
  pppplVar15 = (long ****)0x0;
LAB_7102d0f2dc:
  puVar8 = (undefined8 *)param_1[1];
  if (puVar8 < (undefined8 *)param_1[2]) {
    *puVar8 = pppplVar15;
    param_1[1] = param_1[1] + 8;
    goto LAB_7102d0f3f4;
  }
  pvVar14 = (void *)*param_1;
  ppppppppplVar16 = (long *********)((long)puVar8 - (long)pvVar14);
  uVar17 = ((long)ppppppppplVar16 >> 3) + 1;
  if (uVar17 >> 0x3d != 0) {
LAB_7102d0f64c:
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_length_error();
  }
  lVar11 = param_1[2] - (long)pvVar14;
  if ((ulong)(lVar11 >> 3) < 0xfffffffffffffff) {
    uVar12 = lVar11 >> 2;
    if (uVar17 <= uVar12) {
      uVar17 = uVar12;
    }
    if (uVar17 != 0) {
      if (uVar17 >> 0x3d != 0) {
LAB_7102d0f340:
                    /* WARNING: Subroutine does not return */
        abort();
      }
      goto LAB_7102d0f348;
    }
LAB_7102d0f3a8:
    pvVar7 = (void *)0x0;
  }
  else {
    uVar17 = 0x1fffffffffffffff;
LAB_7102d0f348:
    pppppppplVar13 = (long ********)(uVar17 * 8);
    if (pppppppplVar13 == (long ********)0x0) {
      pppppppplVar13 = (long ********)0x1;
    }
    pvVar7 = (void *)FUN_710392e290(0x10,pppppppplVar13,(long ****)ppppppppplVar10,param_4,param_5,
                                    param_6,param_7,param_8);
    plVar5 = extraout_x1_09;
    if (pvVar7 == (void *)0x0) {
      if (DAT_7105332f00 != (long *)0x0) {
        local_e0 = (long ********)((ulong)local_e0 & 0xffffffff00000000);
        ppppppppplVar10 = &local_a0;
        local_a0 = pppppppplVar13;
        auVar18 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_e0);
        plVar5 = auVar18._8_8_;
        if (((auVar18._0_8_ & 1) != 0) &&
           (pvVar7 = (void *)FUN_710392e290(0x10,pppppppplVar13,(long ****)ppppppppplVar10,param_4,
                                            param_5,param_6,param_7,param_8),
           plVar5 = extraout_x1_10, pvVar7 != (void *)0x0)) goto LAB_7102d0f3ac;
      }
      goto LAB_7102d0f3a8;
    }
  }
LAB_7102d0f3ac:
  puVar8 = (undefined8 *)((long)pvVar7 + ((long)ppppppppplVar16 >> 3) * 8);
  *puVar8 = pppplVar15;
  if (0 < (long)ppppppppplVar16) {
    memcpy(pvVar7,pvVar14,(size_t)ppppppppplVar16);
    plVar5 = extraout_x1_11;
    ppppppppplVar10 = ppppppppplVar16;
  }
  *param_1 = (long)pvVar7;
  param_1[1] = (long)(puVar8 + 1);
  param_1[2] = (long)((long)pvVar7 + uVar17 * 8);
  if (pvVar14 != (void *)0x0) {
    FUN_710392eb40((ulong)pvVar14);
    plVar5 = extraout_x1_12;
  }
LAB_7102d0f3f4:
  lVar11 = *(long *)(*param_1 + 0x10);
  if (lVar11 != 0) {
    *(undefined1 *)(lVar11 + 0x110) = 0;
    FUN_71025e9d50((long *)(lVar11 + 0x108),plVar5,(long ****)ppppppppplVar10,param_4,param_5,
                   param_6,param_7,param_8);
    lVar11 = *(long *)(*param_1 + 0x10);
    if (lVar11 != 0) {
      if ((*(char *)(lVar11 + 0xe0) != '\0') && (*(long *)(lVar11 + 200) != 0)) {
        *(undefined2 *)(*(long *)(lVar11 + 200) + 0x30) = 0x101;
      }
      if (*(long *)(lVar11 + 0xd8) != 0) {
        *(undefined1 *)(*(long *)(lVar11 + 0xd8) + 0x21) = 1;
      }
      if (*(char *)(lVar11 + 0xe0) != '\0') {
        *(undefined1 *)(*(long *)(lVar11 + 0xb0) + 0x10) = 0;
      }
    }
  }
  if ((param_3 == (long *********)0x0) || (param_3[0x1b] == (long ********)0x0)) {
    uVar2 = 0xffffffff;
  }
  else {
    pppppplVar6 = param_3[0x1b][1][1];
    uVar2 = (*(code *)(*pppppplVar6)[3])(pppppplVar6,"tripNumber_100_O_OBJ_O_HIR");
  }
  if (bVar1) {
    local_a8 = 0x3f80000000000000;
    local_b0 = 0;
    uStack_b8 = 0x3f800000;
    local_c0 = 0;
    uStack_d8 = 0;
    local_e0 = (long ********)&DAT_3f800000;
    local_c8 = 0;
    local_d0 = 0x3f80000000000000;
  }
  else {
    if ((param_3[0x1b] == (long ********)0x0) ||
       (uVar3 = (*(code *)(*param_3[0x1b][1][1])[2])(), uVar3 <= uVar2)) {
      puVar8 = (undefined8 *)(*(code *)(*param_3[0x12])[0x2b])();
    }
    else {
      (*(code *)(*param_3[0x1b][1][9])[7])(param_3[0x1b][1][9],0);
      puVar8 = (undefined8 *)(extraout_x1_13 + (ulong)uVar2 * 0x40);
    }
    uStack_b8 = puVar8[5];
    local_c0 = puVar8[4];
    uStack_d8 = puVar8[1];
    local_e0 = (long ********)*puVar8;
    local_c8 = puVar8[3];
    local_d0 = puVar8[2];
    local_a8 = puVar8[7];
    local_b0 = puVar8[6];
  }
  lVar11 = *(long *)(*param_1 + 0x10);
  if (lVar11 != 0) {
    (**(code **)(**(long **)(lVar11 + 0x90) + 0x148))(*(long **)(lVar11 + 0x90),&local_e0);
    lVar11 = *(long *)(lVar11 + 0xd8);
    if (lVar11 != 0) {
      local_88 = local_c8;
      local_90 = local_d0;
      local_98 = uStack_d8;
      local_a0 = local_e0;
      local_68 = local_a8;
      local_70 = local_b0;
      local_78 = uStack_b8;
      local_80 = local_c0;
      if (*(char *)(*(long *)(lVar11 + 8) + 0xa8) != '\0') {
        plVar5 = *(long **)(*(long *)(lVar11 + 8) + 0x48);
        (**(code **)(*plVar5 + 0x20))(plVar5,&local_a0);
      }
      *(undefined1 *)(lVar11 + 0x20) = 1;
    }
  }
  return;
}

