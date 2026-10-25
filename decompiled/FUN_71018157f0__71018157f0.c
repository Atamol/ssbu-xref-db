// addr:      71018157f0
// offset:    0x18157f0
// name:      FUN_71018157f0
// mangled:   
// signature: undefined __cdecl FUN_71018157f0(long param_1, undefined8 param_2, long * * * * * * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_71018157f0(long param_1,undefined8 param_2,long *********param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  char cVar1;
  bool bVar2;
  uint uVar3;
  undefined4 uVar4;
  long *plVar5;
  ulong uVar6;
  undefined8 *puVar7;
  long lVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined1 *puVar11;
  ulong uVar12;
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
  undefined8 extraout_x1_09;
  undefined8 extraout_x1_10;
  long *********ppppppppplVar13;
  long ****pppplVar14;
  byte ****ppppbVar15;
  undefined8 uVar16;
  long ****pppplVar17;
  code *pcVar18;
  long *plVar19;
  long *plVar20;
  undefined1 auVar21 [16];
  undefined **local_1b0;
  ulong local_1a8;
  long ********local_1a0;
  undefined2 local_198;
  undefined4 local_196;
  undefined2 local_192;
  undefined4 local_190;
  undefined2 local_18c;
  undefined1 local_18a;
  undefined1 *local_188;
  undefined4 local_180;
  long alStack_170 [4];
  long *local_150;
  long alStack_140 [4];
  long *local_120;
  long alStack_110 [4];
  long *local_f0;
  long alStack_e0 [4];
  long *local_c0;
  long alStack_b0 [4];
  long *local_90;
  undefined4 local_80;
  
  plVar5 = (long *)FUN_710392e290(0x10,0xe0,(long ****)param_3,param_4,param_5,param_6,param_7,
                                  param_8);
  if (plVar5 == (long *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_1b0 = (undefined **)((ulong)local_1b0 & 0xffffffff00000000);
      local_1a0 = (long ********)&DAT_000000e0;
      param_3 = &local_1a0;
      uVar6 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_1b0);
      if (((uVar6 & 1) != 0) &&
         (plVar5 = (long *)FUN_710392e290(0x10,0xe0,(long ****)param_3,param_4,param_5,param_6,
                                          param_7,param_8), plVar5 != (long *)0x0))
      goto LAB_7101815870;
    }
    plVar5 = (long *)0x0;
  }
LAB_7101815870:
  *plVar5 = (long)plVar5;
  plVar5[4] = 0;
  plVar5[1] = 0;
  plVar5[2] = 0;
  plVar5[3] = 0;
  *(undefined4 *)(plVar5 + 0x18) = 0xffffffff;
  *(undefined1 *)((long)plVar5 + 0xc4) = 0;
  plVar5[5] = 0;
  plVar5[0x16] = 0;
  plVar5[0x17] = 0xffffffff;
  plVar5[0x14] = 0;
  plVar5[0x15] = 0;
  plVar5[0x12] = 0;
  plVar5[0x13] = 0;
  plVar5[0x10] = 0;
  plVar5[0x11] = 0;
  plVar5[0xe] = 0;
  plVar5[0xf] = 0;
  plVar5[0xc] = 0;
  plVar5[0xd] = 0;
  plVar5[10] = 0;
  plVar5[0xb] = 0;
  plVar5[8] = 0;
  plVar5[9] = 0;
  plVar5[6] = 0;
  plVar5[7] = 0;
  puVar7 = (undefined8 *)
           FUN_710392e290(0x10,0x80,(long ****)param_3,param_4,param_5,param_6,param_7,param_8);
  if (puVar7 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_1b0 = (undefined **)((ulong)local_1b0 & 0xffffffff00000000);
      local_1a0 = (long ********)&DAT_00000080;
      param_3 = &local_1a0;
      uVar6 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_1b0);
      if (((uVar6 & 1) != 0) &&
         (puVar7 = (undefined8 *)
                   FUN_710392e290(0x10,0x80,(long ****)param_3,param_4,param_5,param_6,param_7,
                                  param_8), puVar7 != (undefined8 *)0x0)) goto LAB_710181590c;
    }
    puVar7 = (undefined8 *)0x0;
  }
LAB_710181590c:
  *puVar7 = &PTR_FUN_7105181b40;
  puVar7[2] = 0;
  puVar7[1] = puVar7 + 2;
  puVar7[5] = 0;
  puVar7[3] = 0;
  puVar7[4] = puVar7 + 5;
  puVar7[8] = 0;
  puVar7[6] = 0;
  puVar7[7] = puVar7 + 8;
  puVar7[0xb] = 0;
  puVar7[9] = 0;
  puVar7[10] = puVar7 + 0xb;
  *(undefined4 *)(puVar7 + 0xd) = 2;
  puVar7[0xc] = 0;
  *(undefined4 *)(puVar7 + 0xf) = 0;
  puVar7[0xe] = 0;
  plVar5[0x19] = (long)puVar7;
  *(undefined4 *)(plVar5 + 0x1a) = 0;
  plVar5[0x1b] = 0;
  plVar5[5] = (long)FUN_7101814be0;
  plVar5[6] = 0;
  plVar5[9] = (long)FUN_7101814fd0;
  plVar5[10] = 0;
  plVar5[0xb] = (long)FUN_7101815110;
  plVar5[0xc] = 0;
  plVar5[7] = (long)FUN_7101814e10;
  plVar5[8] = 0;
  plVar5[1] = 0;
  plVar5[2] = 0;
  *(undefined8 *)((long)plVar5 + 0xac) = 0;
  *(undefined8 *)((long)plVar5 + 0xa4) = 0;
  *(undefined8 *)((long)plVar5 + 0x9c) = 0;
  *(undefined8 *)((long)plVar5 + 0x94) = 0;
  *(undefined8 *)((long)plVar5 + 0x8c) = 0;
  *(undefined8 *)((long)plVar5 + 0x84) = 0;
  *(undefined8 *)((long)plVar5 + 0x7c) = 0;
  *(undefined8 *)((long)plVar5 + 0x74) = 0;
  *(undefined8 *)((long)plVar5 + 0x6c) = 0;
  *(undefined8 *)((long)plVar5 + 0xb4) = 0xffffffff00000000;
  *(undefined8 *)((long)plVar5 + 0xbc) = 0xffffffff00000000;
  *(undefined1 *)((long)plVar5 + 0xc4) = 0;
  *(undefined4 *)(plVar5 + 0xd) = 0;
  FUN_7101816190(plVar5);
  uVar6 = *(ulong *)(param_1 + 0x58);
  *(long **)(param_1 + 0x58) = plVar5;
  if (uVar6 != 0) {
    lVar8 = *(long *)(uVar6 + 0xd8);
    *(undefined8 *)(uVar6 + 0xd8) = 0;
    uVar16 = extraout_x1;
    if (lVar8 != 0) {
      FUN_71032cad20(lVar8);
      uVar16 = extraout_x1_00;
    }
    FUN_710323b9e0(*(long *)(uVar6 + 200),uVar16,param_3,param_4,param_5,param_6,param_7,param_8);
    plVar5 = *(long **)(uVar6 + 200);
    *(undefined8 *)(uVar6 + 200) = 0;
    if (plVar5 != (long *)0x0) {
      (**(code **)(*plVar5 + 8))();
    }
    FUN_710392eb40(uVar6);
    plVar5 = *(long **)(param_1 + 0x58);
  }
  plVar20 = plVar5 + 0x19;
  lVar8 = *plVar20;
  ppppppppplVar13 = (long *********)(long)*(int *)(lVar8 + 0x70);
  ppppbVar15 = (byte ****)(ulong)*(uint *)(lVar8 + 0x68);
  pppplVar17 = (long ****)0x0;
  FUN_710323beb0(lVar8,(ulong *)&DAT_7104543a60,(long)ppppppppplVar13,(ulong)ppppbVar15,
                 (long ****)0x0,param_6,param_7,param_8);
  lVar8 = *plVar20;
  uVar6 = FUN_710323cb80(lVar8,extraout_x1_01,ppppppppplVar13,ppppbVar15,pppplVar17,param_6,param_7,
                         param_8);
  while ((uVar6 & 1) == 0) {
    nn::os::SleepThread(1000000);
    uVar6 = FUN_710323cb80(lVar8,extraout_x1_02,ppppppppplVar13,ppppbVar15,pppplVar17,param_6,
                           param_7,param_8);
  }
  puVar7 = (undefined8 *)
           FUN_710392e290(0x10,0x88,(long ****)ppppppppplVar13,ppppbVar15,pppplVar17,param_6,param_7
                          ,param_8);
  if (puVar7 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_1b0 = (undefined **)((ulong)local_1b0 & 0xffffffff00000000);
      local_1a0 = (long ********)&DAT_00000088;
      ppppppppplVar13 = &local_1a0;
      uVar6 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_1b0);
      if (((uVar6 & 1) != 0) &&
         (puVar7 = (undefined8 *)
                   FUN_710392e290(0x10,0x88,(long ****)ppppppppplVar13,ppppbVar15,pppplVar17,param_6
                                  ,param_7,param_8), puVar7 != (undefined8 *)0x0))
      goto LAB_7101815acc;
    }
    puVar7 = (undefined8 *)0x0;
  }
LAB_7101815acc:
  *puVar7 = &PTR_FUN_71050a7f50;
  puVar7[1] = 0;
  puVar7[0xc] = 0;
  puVar7[0xd] = 0x1ffffffff;
  puVar7[2] = 0;
  puVar7[3] = 0;
  *(undefined1 *)(puVar7 + 0xb) = 0;
  puVar7[0xf] = plVar20;
  *(undefined1 *)(puVar7 + 0xe) = 1;
  puVar7[9] = 0;
  puVar7[10] = 0;
  puVar9 = (undefined8 *)
           FUN_710392e290(0x10,0x100,(long ****)ppppppppplVar13,ppppbVar15,pppplVar17,param_6,
                          param_7,param_8);
  if (puVar9 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_1b0 = (undefined **)((ulong)local_1b0 & 0xffffffff00000000);
      local_1a0 = (long ********)&DAT_00000100;
      ppppppppplVar13 = &local_1a0;
      uVar6 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_1b0);
      if (((uVar6 & 1) != 0) &&
         (puVar9 = (undefined8 *)
                   FUN_710392e290(0x10,0x100,(long ****)ppppppppplVar13,ppppbVar15,pppplVar17,
                                  param_6,param_7,param_8), puVar9 != (undefined8 *)0x0))
      goto LAB_7101815b54;
    }
    puVar9 = (undefined8 *)0x0;
  }
LAB_7101815b54:
  puVar9[7] = 0;
  *puVar9 = &DAT_c1ffff0000000000;
  puVar9[1] = &DAT_c1ffff0000000000;
  puVar9[2] = &DAT_c1ffff0000000000;
  puVar9[3] = puVar9;
  puVar9[4] = 0;
  puVar9[5] = 0;
  puVar9[6] = 0;
  *(undefined4 *)(puVar9 + 0x1b) = 0xffffffff;
  *(undefined1 *)((long)puVar9 + 0xdc) = 0;
  puVar9[8] = 0;
  puVar9[0x19] = 0;
  puVar9[0x1a] = 0xffffffff;
  puVar9[0x17] = 0;
  puVar9[0x18] = 0;
  puVar9[0x15] = 0;
  puVar9[0x16] = 0;
  puVar9[0x13] = 0;
  puVar9[0x14] = 0;
  puVar9[0x11] = 0;
  puVar9[0x12] = 0;
  puVar9[0xf] = 0;
  puVar9[0x10] = 0;
  puVar9[0xd] = 0;
  puVar9[0xe] = 0;
  puVar9[0xb] = 0;
  puVar9[0xc] = 0;
  puVar9[9] = 0;
  puVar9[10] = 0;
  puVar10 = (undefined8 *)
            FUN_710392e290(0x10,8,(long ****)ppppppppplVar13,ppppbVar15,pppplVar17,param_6,param_7,
                           param_8);
  uVar16 = extraout_x1_03;
  if (puVar10 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_1b0 = (undefined **)((ulong)local_1b0 & 0xffffffff00000000);
      local_1a0 = (long ********)&DAT_00000008;
      ppppppppplVar13 = &local_1a0;
      auVar21 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_1b0);
      uVar16 = auVar21._8_8_;
      if (((auVar21._0_8_ & 1) != 0) &&
         (puVar10 = (undefined8 *)
                    FUN_710392e290(0x10,8,(long ****)ppppppppplVar13,ppppbVar15,pppplVar17,param_6,
                                   param_7,param_8), uVar16 = extraout_x1_04,
         puVar10 != (undefined8 *)0x0)) goto LAB_7101815c08;
    }
    puVar10 = (undefined8 *)0x0;
  }
LAB_7101815c08:
  FUN_7103773200(puVar10,uVar16,(long ****)ppppppppplVar13,ppppbVar15,pppplVar17,param_6,param_7,
                 param_8);
  puVar9[0x1c] = puVar10;
  *(undefined2 *)(puVar9 + 0x1f) = 0;
  plVar19 = puVar9 + 0x1d;
  *plVar19 = 0;
  puVar9[0x1e] = 0;
  lVar8 = *(long *)(DAT_710532f730 + 8);
  puVar11 = FUN_71032631a0(*(long *)(lVar8 + 0x168),0x13fdfdfb2b);
  *puVar9 = puVar11;
  puVar11 = FUN_71032631a0(*(long *)(lVar8 + 0x168),0x15d7061f77);
  puVar9[1] = puVar11;
  puVar11 = FUN_71032631a0(*(long *)(lVar8 + 0x168),0x1257ab1d87);
  puVar9[2] = puVar11;
  puVar9[8] = FUN_71019de970;
  puVar9[9] = 0;
  puVar9[0xc] = FUN_71019deb30;
  puVar9[0xd] = 0;
  puVar9[0xe] = FUN_71019dec30;
  puVar9[0xf] = 0;
  puVar9[10] = FUN_71019de980;
  puVar9[0xb] = 0;
  puVar9[4] = 0;
  puVar9[5] = 0;
  *(undefined8 *)((long)puVar9 + 0xc4) = 0;
  *(undefined8 *)((long)puVar9 + 0xbc) = 0;
  *(undefined8 *)((long)puVar9 + 0xb4) = 0;
  *(undefined8 *)((long)puVar9 + 0xac) = 0;
  *(undefined8 *)((long)puVar9 + 0xa4) = 0;
  *(undefined8 *)((long)puVar9 + 0x9c) = 0;
  *(undefined8 *)((long)puVar9 + 0x94) = 0;
  *(undefined8 *)((long)puVar9 + 0x8c) = 0;
  *(undefined8 *)((long)puVar9 + 0x84) = 0;
  *(undefined8 *)((long)puVar9 + 0xcc) = 0xffffffff00000000;
  *(undefined8 *)((long)puVar9 + 0xd4) = 0xffffffff00000000;
  *(undefined1 *)((long)puVar9 + 0xdc) = 0;
  *(undefined4 *)(puVar9 + 0x10) = 0;
  FUN_71019ded40(puVar9 + 3);
  puVar7[0x10] = puVar9;
  FUN_71032cbf30(puVar9 + 0x1c,*plVar20,(ulong *)&DAT_7104543a60,(byte ****)0x1,pppplVar17,param_6,
                 param_7,param_8);
  lVar8 = *(long *)puVar9[0x1c];
  puVar9 = (undefined8 *)(lVar8 + 8);
  FUN_7103778760(*(long *)(lVar8 + 0x10),0x710428ff7d);
  local_198 = 0x101;
  local_1a0 = (long ********)0x0;
  local_192 = 0;
  local_196 = 0;
  local_190 = 1;
  local_18c = 1;
  local_18a = 1;
  local_188 = &DAT_41f0000000000000;
  local_180 = 0;
  local_150 = (long *)0x0;
  local_120 = (long *)0x0;
  local_f0 = (long *)0x0;
  local_c0 = (long *)0x0;
  local_90 = (long *)0x0;
  local_80 = 0;
  FUN_710337df20((long)&local_1a0);
  FUN_7103770b30(plVar19,puVar9,(long ****)"selector_0",(byte ****)&local_1a0,pppplVar17,param_6,
                 param_7,param_8);
  uVar16 = 0;
  FUN_71037717d0(plVar19,0,"btn_type_0%d",0,pppplVar17,param_6,param_7,param_8);
  FUN_7103776640(&local_1b0,(long)puVar9,(byte ****)"btn_type_0%d",0,uVar16,pppplVar17,param_6,
                 param_7,param_8);
  FUN_7103778430((long)&local_1b0,"type_0%d",0,uVar16,pppplVar17,param_6,param_7,param_8);
  uVar6 = local_1a8;
  local_1b0 = &PTR_FUN_710523d988;
  local_1a8 = 0;
  if (uVar6 != 0) {
    uVar12 = *(ulong *)(uVar6 + 0x18);
    *(undefined ***)(uVar6 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar6 + 0x18) = 0;
    if (uVar12 != 0) {
      FUN_710392eb40(uVar12);
    }
    FUN_710392eb40(uVar6);
  }
  uVar16 = 1;
  FUN_71037717d0(plVar19,1,"btn_type_0%d",1,pppplVar17,param_6,param_7,param_8);
  FUN_7103776640(&local_1b0,(long)puVar9,(byte ****)"btn_type_0%d",1,uVar16,pppplVar17,param_6,
                 param_7,param_8);
  FUN_7103778430((long)&local_1b0,"type_0%d",1,uVar16,pppplVar17,param_6,param_7,param_8);
  uVar6 = local_1a8;
  local_1b0 = &PTR_FUN_710523d988;
  local_1a8 = 0;
  if (uVar6 != 0) {
    uVar12 = *(ulong *)(uVar6 + 0x18);
    *(undefined ***)(uVar6 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar6 + 0x18) = 0;
    if (uVar12 != 0) {
      FUN_710392eb40(uVar12);
    }
    FUN_710392eb40(uVar6);
  }
  ppppbVar15 = (byte ****)0x2;
  FUN_71037717d0(plVar19,2,"btn_type_0%d",2,pppplVar17,param_6,param_7,param_8);
  FUN_7103776640(&local_1b0,(long)puVar9,(byte ****)"btn_type_0%d",2,ppppbVar15,pppplVar17,param_6,
                 param_7,param_8);
  pppplVar14 = (long ****)0x2;
  FUN_7103778430((long)&local_1b0,"type_0%d",2,ppppbVar15,pppplVar17,param_6,param_7,param_8);
  uVar6 = local_1a8;
  local_1b0 = &PTR_FUN_710523d988;
  local_1a8 = 0;
  if (uVar6 != 0) {
    uVar12 = *(ulong *)(uVar6 + 0x18);
    *(undefined ***)(uVar6 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar6 + 0x18) = 0;
    if (uVar12 != 0) {
      FUN_710392eb40(uVar12);
    }
    FUN_710392eb40(uVar6);
  }
  FUN_7103778300(0x3f800000,*(long *)(lVar8 + 0x10),0x71042a3672);
  (**(code **)(*(long *)*plVar19 + 0x60))((long *)*plVar19,0);
  (**(code **)(*(long *)*plVar19 + 0x70))((long *)*plVar19,0);
  if (alStack_b0 == local_90) {
    pcVar18 = *(code **)(*local_90 + 0x20);
LAB_7101815f4c:
    (*pcVar18)();
    uVar16 = extraout_x1_06;
  }
  else {
    uVar16 = extraout_x1_05;
    if (local_90 != (long *)0x0) {
      pcVar18 = *(code **)(*local_90 + 0x28);
      goto LAB_7101815f4c;
    }
  }
  if (alStack_e0 == local_c0) {
    pcVar18 = *(code **)(*local_c0 + 0x20);
LAB_7101815f7c:
    (*pcVar18)();
    uVar16 = extraout_x1_07;
  }
  else if (local_c0 != (long *)0x0) {
    pcVar18 = *(code **)(*local_c0 + 0x28);
    goto LAB_7101815f7c;
  }
  if (alStack_110 == local_f0) {
    pcVar18 = *(code **)(*local_f0 + 0x20);
LAB_7101815fac:
    (*pcVar18)();
    uVar16 = extraout_x1_08;
  }
  else if (local_f0 != (long *)0x0) {
    pcVar18 = *(code **)(*local_f0 + 0x28);
    goto LAB_7101815fac;
  }
  if (alStack_140 == local_120) {
    pcVar18 = *(code **)(*local_120 + 0x20);
LAB_7101815fdc:
    (*pcVar18)();
    uVar16 = extraout_x1_09;
  }
  else if (local_120 != (long *)0x0) {
    pcVar18 = *(code **)(*local_120 + 0x28);
    goto LAB_7101815fdc;
  }
  if (alStack_170 == local_150) {
    pcVar18 = *(code **)(*local_150 + 0x20);
  }
  else {
    if (local_150 == (long *)0x0) goto LAB_7101816010;
    pcVar18 = *(code **)(*local_150 + 0x28);
  }
  (*pcVar18)();
  uVar16 = extraout_x1_10;
LAB_7101816010:
  *(undefined1 *)(puVar7 + 0xe) = 1;
  puVar7[2] = &DAT_7105333600;
  uVar4 = DAT_7105333664;
  *(undefined4 *)(puVar7 + 0xd) = DAT_7105333660;
  *(undefined4 *)((long)puVar7 + 0x6c) = uVar4;
  do {
    uVar3 = DAT_7105333650;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(0x7105333650,0x10);
    if (bVar2) {
      DAT_7105333650 = 1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0' || (uVar3 & 1) != 0);
  puVar7[9] = DAT_7105333648;
  DAT_7105333650 = 0;
  DAT_7105333648 = puVar7;
  FUN_71032caea0((long)puVar7,uVar16,pppplVar14,ppppbVar15,pppplVar17,param_6,param_7,param_8);
  lVar8 = plVar5[0x1b];
  plVar5[0x1b] = (long)puVar7;
  if (lVar8 != 0) {
    FUN_71032cad20(lVar8);
    puVar7 = (undefined8 *)plVar5[0x1b];
  }
  *(undefined1 *)(puVar7 + 0xe) = 1;
  return;
}

