// addr:      71026a9a60
// offset:    0x26a9a60
// name:      FUN_71026a9a60
// mangled:   
// signature: undefined __cdecl FUN_71026a9a60(long * param_1, undefined8 param_2, undefined * * param_3, undefined1[16] * param_4, undefined1[16] * param_5, undefined1[16] * param_6, long * * * * * * param_7, long * * * param_8)


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_71026a9a60(long *param_1,undefined8 param_2,undefined **param_3,undefined1 (*param_4) [16],
                   undefined1 (*param_5) [16],undefined1 (*param_6) [16],long ******param_7,
                   long ***param_8)

{
  byte bVar1;
  byte bVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  unkuint9 Var5;
  int iVar6;
  undefined8 *puVar7;
  ulong uVar8;
  long *plVar9;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 extraout_x1_02;
  undefined8 uVar10;
  long ****pppplVar11;
  long *********ppppppppplVar12;
  ulong uVar13;
  long lVar14;
  ulong uVar15;
  uint uVar16;
  uint uVar17;
  long *plVar18;
  long *plVar19;
  ulong uVar20;
  long *plVar21;
  long *plVar22;
  long lVar23;
  long lVar24;
  float fVar25;
  undefined1 uVar26;
  undefined1 uVar27;
  undefined1 uVar28;
  undefined1 uVar29;
  undefined1 uVar30;
  undefined1 uVar31;
  undefined1 uVar32;
  undefined1 uVar33;
  undefined1 uVar34;
  undefined1 uVar35;
  undefined1 uVar36;
  undefined1 uVar37;
  undefined1 uVar38;
  undefined1 uVar39;
  undefined1 uVar40;
  undefined1 uVar41;
  undefined1 uVar42;
  undefined1 uVar43;
  undefined1 uVar44;
  undefined1 uVar45;
  undefined1 uVar46;
  undefined1 uVar47;
  undefined1 uVar48;
  undefined1 uVar49;
  undefined1 uVar50;
  undefined1 uVar51;
  undefined1 uVar52;
  undefined1 uVar53;
  undefined1 uVar54;
  undefined1 uVar55;
  undefined1 uVar56;
  undefined1 uVar57;
  undefined1 auVar58 [16];
  undefined4 local_4c;
  undefined8 local_48;
  
  FUN_71025e5bd0(param_1,param_2,(long *********)param_3,param_4,param_5,param_6,param_7,param_8);
  bVar1 = *(byte *)((long)param_1 + 0x9d);
  bVar2 = *(byte *)((long)param_1 + 0x9f);
  *(uint *)((long)param_1 + 0x88c) = (uint)bVar1;
  *(uint *)(param_1 + 0x112) = (uint)*(byte *)((long)param_1 + 0x9e);
  *(uint *)((long)param_1 + 0x894) = (uint)bVar2;
  uVar16 = (uint)bVar1;
  if (bVar1 - 4 < 0x13) {
    if (7 < uVar16) {
      if (uVar16 < 0x10) {
        uVar13 = 1;
      }
      else if (uVar16 < 0x13) {
        uVar13 = 2;
      }
      else {
        uVar13 = 3;
      }
      goto LAB_71026a9aa8;
    }
    uVar13 = 0;
    *(undefined1 *)((long)param_1 + 0x889) = 0;
    if (bVar2 == 6) goto LAB_71026a9ab4;
LAB_71026a9b10:
    iVar6 = (int)uVar13;
    uVar26 = (undefined1)(0x404030303020100 >> (uVar13 << 3));
  }
  else {
    uVar13 = 6;
LAB_71026a9aa8:
    *(char *)((long)param_1 + 0x889) = (char)uVar13;
    if (bVar2 != 6) goto LAB_71026a9b10;
LAB_71026a9ab4:
    if (uVar16 != 0x13) {
      if (uVar16 - 0x14 < 5) {
        uVar17 = 5;
        if (0x16 < uVar16) {
          uVar17 = 7;
        }
        uVar13 = (ulong)uVar17;
        *(char *)((long)param_1 + 0x889) = (char)uVar17;
      }
      goto LAB_71026a9b10;
    }
    if (*(byte *)((long)param_1 + 0x9e) < 0x1e) goto LAB_71026a9b10;
    iVar6 = 4;
    *(undefined1 *)((long)param_1 + 0x889) = 4;
    uVar26 = 3;
  }
  *(undefined1 *)(param_1 + 0x111) = uVar26;
  if (((char)param_1[0x113] == '\0') && ((iVar6 - 4U & 0xff) < 4)) {
    uVar26 = (undefined1)(0x1020100 >> (ulong)((iVar6 - 4U & 3) << 3));
  }
  else {
    uVar26 = 2;
  }
  *(undefined1 *)((long)param_1 + 0x88a) = uVar26;
  plVar9 = *(long **)(param_1[0x62] + 0xd0);
  plVar18 = *(long **)(param_1[0x62] + 0xd8);
  uVar10 = extraout_x1;
  if (plVar9 != plVar18) {
    iVar6 = (int)plVar9[1];
    while (iVar6 - 2U < 3) {
      if (plVar18 == plVar9 + 2) goto LAB_71026a9c2c;
      iVar6 = (int)plVar9[3];
      plVar9 = plVar9 + 2;
    }
  }
  while (plVar9 != plVar18) {
    lVar24 = *plVar9;
    if (lVar24 != 0) {
      *(undefined1 *)(lVar24 + 0x110) = 0;
      FUN_71025e9d50((long *)(lVar24 + 0x108),uVar10,(long ****)param_3,(byte ****)param_4,
                     (long ****)param_5,param_6,param_7,param_8);
      *(byte *)(lVar24 + 0x118) = *(byte *)(lVar24 + 0x118) | 1;
      if (*(long *)(lVar24 + 0xd8) != 0) {
        *(undefined1 *)(*(long *)(lVar24 + 0xd8) + 0x21) = 1;
      }
      uVar10 = extraout_x1_00;
      if ((*(char *)(lVar24 + 0xe0) != '\0') && (*(long *)(lVar24 + 200) != 0)) {
        *(undefined2 *)(*(long *)(lVar24 + 200) + 0x30) = 0x101;
      }
    }
    do {
      plVar9 = plVar9 + 2;
      if (plVar9 == plVar18) goto LAB_71026a9c2c;
    } while ((int)plVar9[1] - 2U < 3);
  }
LAB_71026a9c2c:
  fVar25 = *(float *)((long)param_1 + 0x73c);
  uVar26 = SUB41(fVar25,0);
  uVar27 = (undefined1)((uint)fVar25 >> 8);
  uVar28 = (undefined1)((uint)fVar25 >> 0x10);
  uVar29 = (undefined1)((uint)fVar25 >> 0x18);
  param_1[0x115] = 0;
  param_1[0x114] = (ulong)(uint)fVar25;
  uVar46 = 0;
  uVar47 = 0;
  uVar48 = 0;
  uVar49 = 0;
  uVar50 = 0;
  uVar51 = 0;
  uVar52 = 0;
  uVar53 = 0;
  uVar54 = 0;
  uVar55 = 0;
  uVar56 = 0;
  uVar57 = 0;
  uVar38 = 0;
  uVar39 = 0;
  uVar40 = 0;
  uVar41 = 0;
  uVar42 = 0;
  uVar43 = 0;
  uVar44 = 0x80;
  uVar45 = 0x3f;
  uVar30 = 0;
  uVar31 = 0;
  uVar32 = 0;
  uVar33 = 0;
  uVar34 = 0;
  uVar35 = 0;
  uVar36 = 0;
  uVar37 = 0;
  *(bool *)(param_1 + 0x11c) = 1.0 < fVar25;
  param_1[0x11b] = 0x3f80000000000000;
  param_1[0x11a] = 0;
  param_1[0x117] = 0;
  param_1[0x116] = (ulong)(uint)fVar25 << 0x20;
  param_1[0x119] = (ulong)(uint)fVar25;
  param_1[0x118] = 0;
  FUN_71026aad50((long)param_1,(byte *)"floating_plate_set",(long ****)param_3,(byte ****)param_4,
                 (long ****)param_5,param_6,param_7,param_8);
  FUN_71026aad50((long)param_1,(byte *)"stc_bg_set",(long ****)param_3,(byte ****)param_4,
                 (long ****)param_5,param_6,param_7,param_8);
  FUN_71026aad50((long)param_1,(byte *)"main_ring_set",(long ****)param_3,(byte ****)param_4,
                 (long ****)param_5,param_6,param_7,param_8);
  iVar6 = *(int *)(&UNK_7104551494 + (ulong)*(byte *)(param_1 + 0x111) * 4);
  FUN_71026aad50((long)param_1,
                 (byte *)**(undefined8 **)((ulong)*(byte *)(param_1 + 0x111) * 8 + 0x71050ccf48),
                 (long ****)param_3,(byte ****)param_4,(long ****)param_5,param_6,param_7,param_8);
  lVar24 = 1;
  do {
    FUN_71026aad50((long)param_1,
                   *(byte **)(*(long *)((ulong)*(byte *)(param_1 + 0x111) * 8 + 0x71050ccf48) +
                             lVar24 * 8),(long ****)param_3,(byte ****)param_4,(long ****)param_5,
                   param_6,param_7,param_8);
    lVar24 = lVar24 + 1;
  } while (lVar24 < iVar6);
  puVar7 = (undefined8 *)
           FUN_710392e290(0x10,0x80,(long ****)param_3,(byte ****)param_4,(long ****)param_5,param_6
                          ,param_7,param_8);
  uVar10 = extraout_x1_01;
  if (puVar7 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_4c = 0;
      local_48 = (long ***)&DAT_00000080;
      param_3 = (undefined **)&local_48;
      auVar58 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_4c);
      uVar10 = auVar58._8_8_;
      if (((auVar58._0_8_ & 1) != 0) &&
         (puVar7 = (undefined8 *)
                   FUN_710392e290(0x10,0x80,(long ****)param_3,(byte ****)param_4,(long ****)param_5
                                  ,param_6,param_7,param_8), uVar10 = extraout_x1_02,
         puVar7 != (undefined8 *)0x0)) goto LAB_71026a9d60;
    }
    puVar7 = (undefined8 *)0x0;
  }
LAB_71026a9d60:
  Var5 = _DAT_710446a360;
  *(undefined1 *)(puVar7 + 0xd) = 0;
  puVar7[5] = 0;
  puVar7[4] = 0x3f800000;
  puVar7[7] = 0;
  puVar7[6] = 0x3f80000000000000;
  puVar7[0xc] = 0;
  puVar7[9] = 0x3f800000;
  puVar7[8] = 0;
  *puVar7 = &PTR_FUN_71050cda20;
  puVar7[1] = param_1;
  puVar7[0xb] = 0x3f80000000000000;
  puVar7[10] = 0;
  puVar7[2] = 0;
  puVar7[3] = 0;
  puVar7[0xe] = 0;
  puVar7[0xf] = 0;
  param_1[0x10d] = (long)puVar7;
  auVar58._9_7_ = 0;
  auVar58._0_9_ = Var5;
  auVar3[1] = uVar31;
  auVar3[0] = uVar30;
  auVar3[2] = uVar32;
  auVar3[3] = uVar33;
  auVar3[4] = uVar34;
  auVar3[5] = uVar35;
  auVar3[6] = uVar36;
  auVar3[7] = uVar37;
  auVar3[8] = uVar38;
  auVar3[9] = uVar39;
  auVar3[10] = uVar40;
  auVar3[0xb] = uVar41;
  auVar3[0xc] = uVar42;
  auVar3[0xd] = uVar43;
  auVar3[0xe] = uVar44;
  auVar3[0xf] = uVar45;
  auVar4[1] = uVar47;
  auVar4[0] = uVar46;
  auVar4[2] = uVar48;
  auVar4[3] = uVar49;
  auVar4[4] = uVar26;
  auVar4[5] = uVar27;
  auVar4[6] = uVar28;
  auVar4[7] = uVar29;
  auVar4[8] = uVar50;
  auVar4[9] = uVar51;
  auVar4[10] = uVar52;
  auVar4[0xb] = uVar53;
  auVar4[0xc] = uVar54;
  auVar4[0xd] = uVar55;
  auVar4[0xe] = uVar56;
  auVar4[0xf] = uVar57;
  FUN_71026aef60(ZEXT816(0x3f80000000000000) << 0x40,auVar58,auVar3,auVar4,(long)puVar7,uVar10,
                 (long ****)param_3,(byte ****)param_4,(long ****)param_5,param_6,param_7,param_8);
  if (*(char *)(*lib::Singleton<app::StageManager>::instance_ + 0x188) == '\0') {
    if (((DAT_71053144d8 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_71053144d8), iVar6 != 0)) {
      FUN_7101764000();
      param_3 = &PTR_LOOP_7104f17000;
      FUN_71000001c0();
      __cxa_guard_release(&DAT_71053144d8);
    }
    if ((DAT_71052c51b0 - 0xd < 0x19) &&
       ((0x1001fefU >> (ulong)(DAT_71052c51b0 - 0xd & 0x1f) & 1) != 0)) goto LAB_71026a9dc0;
  }
  else {
LAB_71026a9dc0:
    lVar23 = param_1[0x10d];
    bVar1 = *(byte *)((long)param_1 + 0x9d);
    bVar2 = *(byte *)((long)param_1 + 0x9e);
    *(undefined1 *)(lVar23 + 0x68) = 1;
    lVar24 = nn::os::GetSystemTick();
    uVar8 = nn::os::ConvertToTimeSpan(lVar24 - DAT_71074470e8);
    uVar13 = ((long)uVar8 >> 0x20) * 0xe353f7cf + ((uVar8 & 0xffffffff) * 0xe353f7cf >> 0x20);
    *(ulong *)(lVar23 + 0x70) =
         (ulong)((((long)(((long)uVar8 >> 0x20) * 0x20c49ba5 + ((long)uVar13 >> 0x20) +
                         ((uVar8 & 0xffffffff) * 0x20c49ba5 + (uVar13 & 0xffffffff) >> 0x20)) >> 7)
                 - ((long)uVar8 >> 0x3f)) * 1000) / 1000000000;
    *(uint *)(lVar23 + 0x78) = (uint)bVar1;
    *(uint *)(lVar23 + 0x7c) = (uint)bVar2;
  }
  plVar9 = (long *)FUN_710392e290(0x10,0x38,(long ****)param_3,(byte ****)param_4,(long ****)param_5
                                  ,param_6,param_7,param_8);
  if (plVar9 == (long *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_4c = 0;
      local_48 = (long ***)&DAT_00000038;
      param_3 = (undefined **)&local_48;
      uVar13 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_4c);
      if (((uVar13 & 1) != 0) &&
         (plVar9 = (long *)FUN_710392e290(0x10,0x38,(long ****)param_3,(byte ****)param_4,
                                          (long ****)param_5,param_6,param_7,param_8),
         plVar9 != (long *)0x0)) goto LAB_71026a9ee8;
    }
    plVar9 = (long *)0x0;
  }
LAB_71026a9ee8:
  plVar18 = param_1 + 0xee;
  *(undefined2 *)(plVar9 + 4) = 0x20;
  *plVar9 = (long)&PTR_FUN_71050cdf20;
  plVar9[1] = (long)param_1;
  *(undefined1 *)((long)plVar9 + 0x22) = 0;
  plVar9[2] = 0;
  plVar9[3] = (long)plVar18;
  *(undefined4 *)((long)plVar9 + 0x24) = 0;
  *(undefined2 *)(plVar9 + 5) = 0;
  *(undefined1 *)((long)plVar9 + 0x2a) = 1;
  *(undefined8 *)((long)plVar9 + 0x2c) = 0;
  *(undefined4 *)((long)plVar9 + 0x34) = 0;
  FUN_71026b5be0(plVar9,(uint)*(byte *)(param_1 + 0x111),(long ****)param_3,(byte ****)param_4,
                 (long ****)param_5,param_6,param_7,param_8);
  param_1[0x10e] = (long)plVar9;
  plVar9 = (long *)FUN_710392e290(0x10,0x38,(long ****)param_3,(byte ****)param_4,(long ****)param_5
                                  ,param_6,param_7,param_8);
  if (plVar9 == (long *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_4c = 0;
      local_48 = (long ***)&DAT_00000038;
      param_3 = (undefined **)&local_48;
      uVar13 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_4c);
      if (((uVar13 & 1) != 0) &&
         (plVar9 = (long *)FUN_710392e290(0x10,0x38,(long ****)param_3,(byte ****)param_4,
                                          (long ****)param_5,param_6,param_7,param_8),
         plVar9 != (long *)0x0)) goto LAB_71026a9f8c;
    }
    plVar9 = (long *)0x0;
  }
LAB_71026a9f8c:
  *(undefined2 *)(plVar9 + 4) = 0x20;
  *plVar9 = (long)&PTR_FUN_71050cdf70;
  plVar9[1] = (long)param_1;
  plVar9[2] = 0;
  plVar9[3] = (long)plVar18;
  *(undefined1 *)((long)plVar9 + 0x22) = 0;
  *(undefined4 *)((long)plVar9 + 0x24) = 0;
  *(undefined2 *)(plVar9 + 5) = 0;
  *(undefined1 *)((long)plVar9 + 0x2a) = 1;
  *(undefined8 *)((long)plVar9 + 0x2c) = 0;
  *(undefined4 *)((long)plVar9 + 0x34) = 0;
  FUN_71026b5d70(plVar9,(uint)*(byte *)(param_1 + 0x111),(long ****)param_3,(byte ****)param_4,
                 (long ****)param_5,param_6,param_7,param_8);
  param_1[0x10f] = (long)plVar9;
  plVar9 = (long *)FUN_710392e290(0x10,0x60,(long ****)param_3,(byte ****)param_4,(long ****)param_5
                                  ,param_6,param_7,param_8);
  if (plVar9 == (long *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_4c = 0;
      local_48 = (long ***)&DAT_00000060;
      param_3 = (undefined **)&local_48;
      uVar13 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_4c);
      if (((uVar13 & 1) != 0) &&
         (plVar9 = (long *)FUN_710392e290(0x10,0x60,(long ****)param_3,(byte ****)param_4,
                                          (long ****)param_5,param_6,param_7,param_8),
         plVar9 != (long *)0x0)) goto LAB_71026aa024;
    }
    plVar9 = (long *)0x0;
  }
LAB_71026aa024:
  lVar14 = param_1[0x67];
  *plVar9 = (long)&PTR_FUN_71050cdfc0;
  plVar9[1] = (long)param_1;
  plVar9[2] = 0;
  plVar9[3] = (long)plVar18;
  *(undefined2 *)(plVar9 + 4) = 0x20;
  *(undefined1 *)((long)plVar9 + 0x22) = 0;
  *(undefined4 *)((long)plVar9 + 0x24) = 0;
  *(undefined2 *)(plVar9 + 5) = 0;
  *(undefined1 *)((long)plVar9 + 0x2a) = 1;
  *(undefined8 *)((long)plVar9 + 0x2c) = 0;
  *(undefined8 *)((long)plVar9 + 0x34) = 0;
  lVar23 = _DAT_7107521008;
  lVar24 = _ConstantZero;
  plVar9[10] = lVar14;
  *(undefined4 *)(plVar9 + 0xb) = 0xffffffff;
  *(undefined1 *)((long)plVar9 + 0x5c) = 0;
  plVar9[9] = lVar23;
  plVar9[8] = lVar24;
  FUN_71026b6120(plVar9,(uint)*(byte *)(param_1 + 0x111),(long ****)param_3,(byte ****)param_4,
                 (long ****)param_5,param_6,param_7,param_8);
  if (*(byte *)((long)param_1 + 0x88a) < 2) {
    *(undefined1 *)((long)plVar9 + 0x29) = 1;
  }
  param_1[0x110] = (long)plVar9;
  plVar9 = (long *)FUN_710392e290(0x10,0x10,(long ****)param_3,(byte ****)param_4,(long ****)param_5
                                  ,param_6,param_7,param_8);
  if (plVar9 == (long *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_4c = 0;
      local_48 = (long ***)&DAT_00000010;
      pppplVar11 = (long ****)&local_48;
      uVar13 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_4c);
      if (((uVar13 & 1) != 0) &&
         (plVar9 = (long *)FUN_710392e290(0x10,0x10,pppplVar11,(byte ****)param_4,(long ****)param_5
                                          ,param_6,param_7,param_8), plVar9 != (long *)0x0))
      goto LAB_71026aa0f8;
    }
    plVar9 = (long *)0x0;
  }
LAB_71026aa0f8:
  pppplVar11 = (long ****)(ulong)*(byte *)(param_1 + 0x111);
  FUN_71026ab040(plVar9,(long)param_1,pppplVar11,(byte ****)param_4,(long ****)param_5,param_6,
                 param_7,param_8);
  for (plVar18 = *(long **)(param_1[0x62] + 0xd0); plVar18 != *(long **)(param_1[0x62] + 0xd8);
      plVar18 = plVar18 + 2) {
    if ((*(uint *)(plVar18 + 1) < 2) &&
       (lVar24 = *plVar18, *(long *)(lVar24 + 0x68) == 0x12bf759851)) {
      if (lVar24 != 0) {
        FUN_71026ab650((long *)plVar9[1],lVar24,pppplVar11,(byte ****)param_4,(long ****)param_5,
                       param_6,param_7,param_8);
      }
      break;
    }
  }
  (**(code **)(*plVar9 + 8))(plVar9);
  if ((*(char *)((long)param_1 + 0x88a) == '\x01') &&
     (plVar9 = *(long **)(*(long *)param_1[0x67] + 8), plVar9 != (long *)0x0)) {
    pppplVar11 = (long ****)&DAT_ffffffff;
    (**(code **)(*plVar9 + 0x58))(plVar9,9);
  }
  plVar9 = (long *)FUN_710392e290(0x10,0x10,pppplVar11,(byte ****)param_4,(long ****)param_5,param_6
                                  ,param_7,param_8);
  if (plVar9 == (long *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_4c = 0;
      local_48 = (long ***)&DAT_00000010;
      pppplVar11 = (long ****)&local_48;
      uVar13 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_4c);
      if (((uVar13 & 1) != 0) &&
         (plVar9 = (long *)FUN_710392e290(0x10,0x10,pppplVar11,(byte ****)param_4,(long ****)param_5
                                          ,param_6,param_7,param_8), plVar9 != (long *)0x0))
      goto LAB_71026aa208;
    }
    plVar9 = (long *)0x0;
  }
LAB_71026aa208:
  bVar1 = *(byte *)(param_1 + 0x111);
  uVar13 = (ulong)bVar1;
  lVar24 = param_1[0x11c];
  *plVar9 = (long)&PTR_FUN_71050cd048;
  puVar7 = (undefined8 *)
           FUN_710392e290(0x10,0x10,pppplVar11,(byte ****)param_4,(long ****)param_5,param_6,param_7
                          ,param_8);
  if (puVar7 == (undefined8 *)0x0) {
    local_4c = 0;
    local_48 = (long ***)&DAT_00000010;
    pppplVar11 = (long ****)&local_48;
    (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_4c);
    puVar7 = (undefined8 *)
             FUN_710392e290(0x10,0x10,pppplVar11,(byte ****)param_4,(long ****)param_5,param_6,
                            param_7,param_8);
  }
  *puVar7 = param_1;
  *(uint *)(puVar7 + 1) = (uint)bVar1;
  if (*(uint *)(param_1 + 1) < 0x16c) {
    uVar16 = (uint)bVar1;
    if ((&DAT_710454a7f0)[(long)(int)*(uint *)(param_1 + 1) * 0x12] == 2) {
      if (DAT_710532ac30 != 0) {
        uVar8 = DAT_710532ac30 - 1;
        if ((uVar8 & DAT_710532ac30) == 0) {
          uVar15 = uVar8 & uVar13;
        }
        else {
          uVar15 = uVar13;
          if (DAT_710532ac30 <= uVar13) {
            uVar15 = 0;
            if (DAT_710532ac30 != 0) {
              uVar15 = uVar13 / DAT_710532ac30;
            }
            uVar15 = uVar13 - uVar15 * DAT_710532ac30;
          }
        }
        plVar18 = *(long **)(DAT_710532ac28 + uVar15 * 8);
        if ((plVar18 != (long *)0x0) && (plVar18 = (long *)*plVar18, plVar18 != (long *)0x0)) {
          if ((uVar8 & DAT_710532ac30) == 0) {
            do {
              uVar20 = plVar18[1];
              if (uVar20 != uVar13 && (uVar20 & uVar8) != uVar15) break;
              if ((uVar20 == uVar13) && (*(uint *)(plVar18 + 2) == (uint)bVar1))
              goto LAB_71026aa508;
              plVar18 = (long *)*plVar18;
            } while (plVar18 != (long *)0x0);
          }
          else {
            do {
              uVar8 = plVar18[1];
              if (uVar8 == uVar13) {
                if (*(uint *)(plVar18 + 2) == uVar16) goto LAB_71026aa508;
              }
              else {
                if (DAT_710532ac30 <= uVar8) {
                  uVar20 = 0;
                  if (DAT_710532ac30 != 0) {
                    uVar20 = uVar8 / DAT_710532ac30;
                  }
                  uVar8 = uVar8 - uVar20 * DAT_710532ac30;
                }
                if (uVar8 != uVar15) break;
              }
              plVar18 = (long *)*plVar18;
            } while (plVar18 != (long *)0x0);
          }
        }
      }
    }
    else if ((&DAT_710454a7f0)[(long)(int)*(uint *)(param_1 + 1) * 0x12] == 1) {
      if ((char)lVar24 == '\0') {
        if (DAT_710532ac58 != 0) {
          uVar8 = DAT_710532ac58 - 1;
          if ((uVar8 & DAT_710532ac58) == 0) {
            uVar15 = uVar8 & uVar13;
          }
          else {
            uVar15 = uVar13;
            if (DAT_710532ac58 <= uVar13) {
              uVar15 = 0;
              if (DAT_710532ac58 != 0) {
                uVar15 = uVar13 / DAT_710532ac58;
              }
              uVar15 = uVar13 - uVar15 * DAT_710532ac58;
            }
          }
          plVar18 = *(long **)(DAT_710532ac50 + uVar15 * 8);
          if ((plVar18 != (long *)0x0) && (plVar18 = (long *)*plVar18, plVar18 != (long *)0x0)) {
            if ((uVar8 & DAT_710532ac58) == 0) {
              do {
                uVar20 = plVar18[1];
                if (uVar20 != uVar13 && (uVar20 & uVar8) != uVar15) break;
                if ((uVar20 == uVar13) && (*(uint *)(plVar18 + 2) == uVar16)) goto LAB_71026aa5ac;
                plVar18 = (long *)*plVar18;
              } while (plVar18 != (long *)0x0);
            }
            else {
              do {
                uVar8 = plVar18[1];
                if (uVar8 == uVar13) {
                  if (*(uint *)(plVar18 + 2) == uVar16) goto LAB_71026aa5ac;
                }
                else {
                  if (DAT_710532ac58 <= uVar8) {
                    uVar20 = 0;
                    if (DAT_710532ac58 != 0) {
                      uVar20 = uVar8 / DAT_710532ac58;
                    }
                    uVar8 = uVar8 - uVar20 * DAT_710532ac58;
                  }
                  if (uVar8 != uVar15) break;
                }
                plVar18 = (long *)*plVar18;
              } while (plVar18 != (long *)0x0);
            }
          }
        }
      }
      else if (DAT_710532ac80 != 0) {
        uVar8 = DAT_710532ac80 - 1;
        if ((uVar8 & DAT_710532ac80) == 0) {
          uVar15 = uVar8 & uVar13;
        }
        else {
          uVar15 = uVar13;
          if (DAT_710532ac80 <= uVar13) {
            uVar15 = 0;
            if (DAT_710532ac80 != 0) {
              uVar15 = uVar13 / DAT_710532ac80;
            }
            uVar15 = uVar13 - uVar15 * DAT_710532ac80;
          }
        }
        plVar18 = *(long **)(DAT_710532ac78 + uVar15 * 8);
        if ((plVar18 != (long *)0x0) && (plVar18 = (long *)*plVar18, plVar18 != (long *)0x0)) {
          if ((uVar8 & DAT_710532ac80) == 0) {
            do {
              uVar20 = plVar18[1];
              if (uVar20 != uVar13 && (uVar20 & uVar8) != uVar15) break;
              if ((uVar20 == uVar13) && (*(uint *)(plVar18 + 2) == uVar16)) goto LAB_71026aa51c;
              plVar18 = (long *)*plVar18;
            } while (plVar18 != (long *)0x0);
          }
          else {
            do {
              uVar8 = plVar18[1];
              if (uVar8 == uVar13) {
                if (*(uint *)(plVar18 + 2) == uVar16) goto LAB_71026aa51c;
              }
              else {
                if (DAT_710532ac80 <= uVar8) {
                  uVar20 = 0;
                  if (DAT_710532ac80 != 0) {
                    uVar20 = uVar8 / DAT_710532ac80;
                  }
                  uVar8 = uVar8 - uVar20 * DAT_710532ac80;
                }
                if (uVar8 != uVar15) break;
              }
              plVar18 = (long *)*plVar18;
            } while (plVar18 != (long *)0x0);
          }
        }
      }
    }
  }
  goto LAB_71026aa88c;
LAB_71026aa508:
  if ((*(byte *)(plVar18 + 3) & 1) == 0) {
    ppppppppplVar12 = (long *********)((long)plVar18 + 0x19);
  }
  else {
    ppppppppplVar12 = (long *********)plVar18[5];
  }
  lVar24 = param_1[99];
  FUN_7102653da0(&local_48,lVar24 + 0x80,(byte *)ppppppppplVar12);
  if ((int)local_48 == -1) goto LAB_71026aa728;
  lVar23 = *(long *)(*lib::Singleton<app::StageManager>::instance_ + 0x1d0);
  uVar13 = *(ulong *)(lVar24 + 8);
  plVar18 = (long *)(lVar23 + 0x58);
  plVar19 = plVar18;
  if ((long *)*plVar18 != (long *)0x0) {
    plVar21 = (long *)*plVar18;
    plVar19 = (long *)(lVar23 + 0x58);
    do {
      while (plVar22 = plVar21, uVar13 < (ulong)plVar22[4]) {
        plVar21 = (long *)*plVar22;
        plVar19 = plVar22;
        if ((long *)*plVar22 == (long *)0x0) goto LAB_71026aa640;
      }
      if (uVar13 <= (ulong)plVar22[4]) break;
      plVar19 = plVar22 + 1;
      plVar21 = (long *)*plVar19;
    } while ((long *)*plVar19 != (long *)0x0);
  }
LAB_71026aa640:
  *(int *)(*(long *)(*plVar19 + 0x28) + 0x2d0) = (int)local_48;
  if ((*(ulong *)(lVar23 + 0x20) == uVar13) && (*(int *)(lVar23 + 0x38) < 3)) {
    if ((long *)*plVar18 != (long *)0x0) {
      plVar19 = (long *)(lVar23 + 0x58);
      plVar21 = (long *)*plVar18;
      do {
        while ((ulong)plVar21[4] <= uVar13) {
          plVar18 = plVar19;
          if (uVar13 <= (ulong)plVar21[4]) goto LAB_71026aa80c;
          plVar19 = plVar21 + 1;
          plVar21 = (long *)*plVar19;
          plVar18 = plVar19;
          if (plVar21 == (long *)0x0) goto LAB_71026aa80c;
        }
        plVar22 = (long *)*plVar21;
        plVar18 = plVar21;
        plVar19 = plVar21;
        plVar21 = plVar22;
      } while (plVar22 != (long *)0x0);
    }
    goto LAB_71026aa80c;
  }
  goto LAB_71026aa82c;
LAB_71026aa51c:
  if ((*(byte *)(plVar18 + 3) & 1) == 0) {
    ppppppppplVar12 = (long *********)((long)plVar18 + 0x19);
  }
  else {
    ppppppppplVar12 = (long *********)plVar18[5];
  }
  lVar24 = param_1[99];
  FUN_7102653da0(&local_48,lVar24 + 0x80,(byte *)ppppppppplVar12);
  if ((int)local_48 != -1) {
    lVar23 = *(long *)(*lib::Singleton<app::StageManager>::instance_ + 0x1d0);
    uVar13 = *(ulong *)(lVar24 + 8);
    plVar19 = (long *)(lVar23 + 0x58);
    plVar18 = plVar19;
    if ((long *)*plVar19 != (long *)0x0) {
      plVar21 = (long *)*plVar19;
      plVar18 = (long *)(lVar23 + 0x58);
      do {
        while (plVar22 = plVar21, uVar13 < (ulong)plVar22[4]) {
          plVar21 = (long *)*plVar22;
          plVar18 = plVar22;
          if ((long *)*plVar22 == (long *)0x0) goto LAB_71026aa734;
        }
        if (uVar13 <= (ulong)plVar22[4]) break;
        plVar18 = plVar22 + 1;
        plVar21 = (long *)*plVar18;
      } while ((long *)*plVar18 != (long *)0x0);
    }
LAB_71026aa734:
    *(int *)(*(long *)(*plVar18 + 0x28) + 0x2d0) = (int)local_48;
    if ((*(ulong *)(lVar23 + 0x20) == uVar13) && (*(int *)(lVar23 + 0x38) < 3)) {
      plVar18 = plVar19;
      if ((long *)*plVar19 != (long *)0x0) {
        plVar18 = (long *)(lVar23 + 0x58);
        plVar19 = (long *)*plVar19;
        do {
          while ((ulong)plVar19[4] <= uVar13) {
            if (uVar13 <= (ulong)plVar19[4]) goto LAB_71026aa80c;
            plVar18 = plVar19 + 1;
            plVar19 = (long *)*plVar18;
            if (plVar19 == (long *)0x0) goto LAB_71026aa80c;
          }
          plVar21 = (long *)*plVar19;
          plVar18 = plVar19;
          plVar19 = plVar21;
        } while (plVar21 != (long *)0x0);
      }
LAB_71026aa80c:
      plVar19 = *(long **)(*(long *)(*plVar18 + 0x28) + 0x300);
      if (plVar19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      (**(code **)(*plVar19 + 0x30))(plVar19,*(long *)(*plVar18 + 0x28) + 0x2d0);
    }
    goto LAB_71026aa82c;
  }
LAB_71026aa728:
  uVar16 = local_48._4_4_;
  goto LAB_71026aa86c;
LAB_71026aa5ac:
  if ((*(byte *)(plVar18 + 3) & 1) == 0) {
    ppppppppplVar12 = (long *********)((long)plVar18 + 0x19);
  }
  else {
    ppppppppplVar12 = (long *********)plVar18[5];
  }
  lVar24 = param_1[99];
  FUN_7102653da0(&local_48,lVar24 + 0x80,(byte *)ppppppppplVar12);
  if ((int)local_48 == -1) goto LAB_71026aa728;
  lVar23 = *(long *)(*lib::Singleton<app::StageManager>::instance_ + 0x1d0);
  uVar13 = *(ulong *)(lVar24 + 8);
  plVar18 = (long *)(lVar23 + 0x58);
  plVar19 = plVar18;
  if ((long *)*plVar18 != (long *)0x0) {
    plVar21 = (long *)*plVar18;
    plVar19 = (long *)(lVar23 + 0x58);
    do {
      while (plVar22 = plVar21, uVar13 < (ulong)plVar22[4]) {
        plVar21 = (long *)*plVar22;
        plVar19 = plVar22;
        if ((long *)*plVar22 == (long *)0x0) goto LAB_71026aa7a4;
      }
      if (uVar13 <= (ulong)plVar22[4]) break;
      plVar19 = plVar22 + 1;
      plVar21 = (long *)*plVar19;
    } while ((long *)*plVar19 != (long *)0x0);
  }
LAB_71026aa7a4:
  *(int *)(*(long *)(*plVar19 + 0x28) + 0x2d0) = (int)local_48;
  if ((*(ulong *)(lVar23 + 0x20) == uVar13) && (*(int *)(lVar23 + 0x38) < 3)) {
    if ((long *)*plVar18 != (long *)0x0) {
      plVar19 = (long *)(lVar23 + 0x58);
      plVar21 = (long *)*plVar18;
      do {
        while ((ulong)plVar21[4] <= uVar13) {
          plVar18 = plVar19;
          if (uVar13 <= (ulong)plVar21[4]) goto LAB_71026aa80c;
          plVar19 = plVar21 + 1;
          plVar21 = (long *)*plVar19;
          plVar18 = plVar19;
          if (plVar21 == (long *)0x0) goto LAB_71026aa80c;
        }
        plVar22 = (long *)*plVar21;
        plVar18 = plVar21;
        plVar19 = plVar21;
        plVar21 = plVar22;
      } while (plVar22 != (long *)0x0);
    }
    goto LAB_71026aa80c;
  }
LAB_71026aa82c:
  uVar16 = local_48._4_4_;
  uVar17 = *(uint *)(lVar24 + 0x38);
  *(uint *)(lVar24 + 0x38) = local_48._4_4_;
  if (local_48._4_4_ != 0xffffff) {
    FUN_7103540a00(DAT_7105332f20,local_48._4_4_);
  }
  if (uVar17 != 0xffffff) {
    FUN_7103540b10(DAT_7105332f20,uVar17,ppppppppplVar12,(byte ****)param_4,(long ****)param_5,
                   param_6,param_7,param_8);
  }
LAB_71026aa86c:
  if (uVar16 != 0xffffff) {
    FUN_7103540b10(DAT_7105332f20,uVar16,ppppppppplVar12,(byte ****)param_4,(long ****)param_5,
                   param_6,param_7,param_8);
    local_48 = (long ***)CONCAT44(0xffffff,(int)local_48);
  }
LAB_71026aa88c:
  plVar9[1] = (long)puVar7;
                    /* WARNING: Could not recover jumptable at 0x0071026aa8b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar9 + 8))(plVar9);
  return;
}

