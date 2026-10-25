// addr:      71032f3360
// offset:    0x32f3360
// name:      FUN_71032f3360
// mangled:   
// signature: undefined __cdecl FUN_71032f3360(long * param_1, undefined8 param_2, long * * * * * * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_71032f3360(long *param_1,undefined8 param_2,long *********param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  char cVar1;
  bool bVar2;
  undefined4 uVar3;
  int *piVar4;
  ulong uVar5;
  undefined8 *puVar6;
  int *piVar7;
  undefined8 *puVar8;
  ulong uVar9;
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
  undefined *puVar10;
  char *pcVar11;
  undefined8 uVar12;
  long *********ppppppppplVar13;
  long lVar14;
  code *pcVar15;
  long lVar16;
  long *plVar17;
  uint uVar18;
  undefined1 auVar19 [16];
  long ********local_1e0;
  ulong local_1d8;
  undefined4 local_1d0;
  undefined2 local_1cc;
  undefined1 local_1ca;
  undefined1 *local_1c8;
  undefined4 local_1c0;
  long alStack_1b0 [4];
  long *local_190;
  long alStack_180 [4];
  long *local_160;
  long alStack_150 [4];
  long *local_130;
  long alStack_120 [4];
  long *local_100;
  long alStack_f0 [4];
  long *local_d0;
  undefined4 local_c0;
  undefined **local_b0;
  int *local_a8;
  undefined ***local_90;
  
  if (*(char *)(param_1[1] + 0x140) != '\0') {
    return;
  }
  lVar16 = *(long *)(param_1[1] + 0x108);
  uVar5 = FUN_710323cb80(lVar16,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  while ((uVar5 & 1) == 0) {
    nn::os::SleepThread(1000000);
    uVar5 = FUN_710323cb80(lVar16,extraout_x1,param_3,param_4,param_5,param_6,param_7,param_8);
  }
  lVar16 = param_1[1];
  puVar6 = (undefined8 *)
           FUN_710392e290(0x10,0x88,(long ****)param_3,param_4,param_5,param_6,param_7,param_8);
  if (puVar6 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_b0 = (undefined **)((ulong)local_b0 & 0xffffffff00000000);
      local_1e0 = (long ********)&DAT_00000088;
      param_3 = &local_1e0;
      uVar5 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_b0);
      if (((uVar5 & 1) != 0) &&
         (puVar6 = (undefined8 *)
                   FUN_710392e290(0x10,0x88,(long ****)param_3,param_4,param_5,param_6,param_7,
                                  param_8), puVar6 != (undefined8 *)0x0)) goto LAB_71032f3448;
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_71032f3448:
  *puVar6 = &PTR_FUN_71050b3ca8;
  puVar6[1] = 0;
  puVar6[0xc] = 0;
  puVar6[0xd] = 0x1ffffffff;
  puVar6[2] = 0;
  puVar6[3] = 0;
  *(undefined1 *)(puVar6 + 0xb) = 0;
  puVar6[0xf] = (long *)(lVar16 + 0x108);
  *(undefined1 *)(puVar6 + 0xe) = 1;
  puVar6[9] = 0;
  puVar6[10] = 0;
  piVar7 = (int *)FUN_710392e290(0x10,0x150,(long ****)param_3,param_4,param_5,param_6,param_7,
                                 param_8);
  if (piVar7 == (int *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_b0 = (undefined **)((ulong)local_b0 & 0xffffffff00000000);
      local_1e0 = (long ********)&DAT_00000150;
      param_3 = &local_1e0;
      uVar5 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_b0);
      if (((uVar5 & 1) != 0) &&
         (piVar7 = (int *)FUN_710392e290(0x10,0x150,(long ****)param_3,param_4,param_5,param_6,
                                         param_7,param_8), piVar7 != (int *)0x0))
      goto LAB_71032f34d0;
    }
    piVar7 = (int *)0x0;
  }
LAB_71032f34d0:
  piVar7[4] = 0;
  piVar7[5] = 0;
  piVar7[6] = 0;
  piVar7[7] = 0;
  piVar7[0] = 1;
  piVar7[1] = 3;
  *(int **)(piVar7 + 2) = piVar7;
  piVar7[8] = 0;
  piVar7[9] = 0;
  piVar7[10] = 0;
  piVar7[0xb] = 0;
  piVar7[0x32] = -1;
  *(undefined1 *)(piVar7 + 0x33) = 0;
  piVar7[0xc] = 0;
  piVar7[0xd] = 0;
  piVar7[0x2e] = 0;
  piVar7[0x2f] = 0;
  piVar7[0x30] = -1;
  piVar7[0x31] = 0;
  piVar7[0x2a] = 0;
  piVar7[0x2b] = 0;
  piVar7[0x2c] = 0;
  piVar7[0x2d] = 0;
  piVar7[0x26] = 0;
  piVar7[0x27] = 0;
  piVar7[0x28] = 0;
  piVar7[0x29] = 0;
  piVar7[0x22] = 0;
  piVar7[0x23] = 0;
  piVar7[0x24] = 0;
  piVar7[0x25] = 0;
  piVar7[0x1e] = 0;
  piVar7[0x1f] = 0;
  piVar7[0x20] = 0;
  piVar7[0x21] = 0;
  piVar7[0x1a] = 0;
  piVar7[0x1b] = 0;
  piVar7[0x1c] = 0;
  piVar7[0x1d] = 0;
  piVar7[0x16] = 0;
  piVar7[0x17] = 0;
  piVar7[0x18] = 0;
  piVar7[0x19] = 0;
  piVar7[0x12] = 0;
  piVar7[0x13] = 0;
  piVar7[0x14] = 0;
  piVar7[0x15] = 0;
  piVar7[0xe] = 0;
  piVar7[0xf] = 0;
  piVar7[0x10] = 0;
  piVar7[0x11] = 0;
  puVar8 = (undefined8 *)
           FUN_710392e290(0x10,8,(long ****)param_3,param_4,param_5,param_6,param_7,param_8);
  uVar12 = extraout_x1_00;
  if (puVar8 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_b0 = (undefined **)((ulong)local_b0 & 0xffffffff00000000);
      local_1e0 = (long ********)&DAT_00000008;
      param_3 = &local_1e0;
      auVar19 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_b0);
      uVar12 = auVar19._8_8_;
      if (((auVar19._0_8_ & 1) != 0) &&
         (puVar8 = (undefined8 *)
                   FUN_710392e290(0x10,8,(long ****)param_3,param_4,param_5,param_6,param_7,param_8)
         , uVar12 = extraout_x1_01, puVar8 != (undefined8 *)0x0)) goto LAB_71032f3574;
    }
    puVar8 = (undefined8 *)0x0;
  }
LAB_71032f3574:
  FUN_7103773200(puVar8,uVar12,(long ****)param_3,param_4,param_5,param_6,param_7,param_8);
  *(undefined ***)(piVar7 + 0x38) = &PTR_FUN_710523d9a8;
  *(undefined8 **)(piVar7 + 0x34) = puVar8;
  plVar17 = (long *)(piVar7 + 0x36);
  *plVar17 = 0;
  puVar8 = (undefined8 *)
           FUN_710392e290(0x10,0x20,(long ****)param_3,param_4,param_5,param_6,param_7,param_8);
  if (puVar8 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_b0 = (undefined **)((ulong)local_b0 & 0xffffffff00000000);
      local_1e0 = (long ********)&SUB_00000020;
      param_3 = &local_1e0;
      uVar5 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_b0);
      if (((uVar5 & 1) != 0) &&
         (puVar8 = (undefined8 *)
                   FUN_710392e290(0x10,0x20,(long ****)param_3,param_4,param_5,param_6,param_7,
                                  param_8), puVar8 != (undefined8 *)0x0)) goto LAB_71032f35ec;
    }
    puVar8 = (undefined8 *)0x0;
  }
LAB_71032f35ec:
  puVar8[2] = 0;
  puVar8[3] = 0;
  *puVar8 = 0;
  puVar8[1] = 0;
  *(undefined ***)(piVar7 + 0x3c) = &PTR_FUN_710523d9a8;
  *(undefined8 **)(piVar7 + 0x3a) = puVar8;
  puVar8 = (undefined8 *)
           FUN_710392e290(0x10,0x20,(long ****)param_3,param_4,param_5,param_6,param_7,param_8);
  if (puVar8 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_b0 = (undefined **)((ulong)local_b0 & 0xffffffff00000000);
      local_1e0 = (long ********)&SUB_00000020;
      param_3 = &local_1e0;
      uVar5 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_b0);
      if (((uVar5 & 1) != 0) &&
         (puVar8 = (undefined8 *)
                   FUN_710392e290(0x10,0x20,(long ****)param_3,param_4,param_5,param_6,param_7,
                                  param_8), puVar8 != (undefined8 *)0x0)) goto LAB_71032f3654;
    }
    puVar8 = (undefined8 *)0x0;
  }
LAB_71032f3654:
  puVar8[2] = 0;
  puVar8[3] = 0;
  *puVar8 = 0;
  puVar8[1] = 0;
  *(undefined8 **)(piVar7 + 0x3e) = puVar8;
  *(undefined ***)(piVar7 + 0x40) = &PTR_FUN_710523d9a8;
  puVar8 = (undefined8 *)
           FUN_710392e290(0x10,0x20,(long ****)param_3,param_4,param_5,param_6,param_7,param_8);
  if (puVar8 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_b0 = (undefined **)((ulong)local_b0 & 0xffffffff00000000);
      local_1e0 = (long ********)&SUB_00000020;
      ppppppppplVar13 = &local_1e0;
      uVar5 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_b0);
      if (((uVar5 & 1) != 0) &&
         (puVar8 = (undefined8 *)
                   FUN_710392e290(0x10,0x20,(long ****)ppppppppplVar13,param_4,param_5,param_6,
                                  param_7,param_8), puVar8 != (undefined8 *)0x0))
      goto LAB_71032f36b4;
    }
    puVar8 = (undefined8 *)0x0;
  }
LAB_71032f36b4:
  puVar8[2] = 0;
  puVar8[3] = 0;
  *puVar8 = 0;
  puVar8[1] = 0;
  *(undefined8 **)(piVar7 + 0x42) = puVar8;
  piVar7[0x44] = 1;
  piVar7[0x45] = 0x52000;
  piVar7[0x4e] = 3;
  piVar7[0x4f] = 0;
  piVar7[0x50] = -1;
  piVar7[0x51] = 0;
  piVar7[0x52] = 0x1010001;
  *(undefined2 *)(piVar7 + 0x53) = 1;
  *(code **)(piVar7 + 0xc) = FUN_7101eeec50;
  piVar7[0xe] = 0;
  piVar7[0xf] = 0;
  *(code **)(piVar7 + 0x10) = FUN_7101eeec60;
  piVar7[0x12] = 0;
  piVar7[0x13] = 0;
  *(code **)(piVar7 + 0x14) = FUN_7101eeee30;
  piVar7[0x16] = 0;
  piVar7[0x17] = 0;
  piVar7[0x4a] = 0;
  piVar7[0x4b] = 0;
  piVar7[0x4c] = 0;
  piVar7[0x4d] = 0;
  piVar7[0x46] = 0;
  piVar7[0x47] = 0;
  piVar7[0x48] = 0;
  piVar7[0x49] = 0;
  *(code **)(piVar7 + 0x18) = FUN_7101eeeec0;
  piVar7[0x1a] = 0;
  piVar7[0x1b] = 0;
  if (0x12 < (uint)piVar7[0x2f]) goto LAB_71032f3c5c;
  piVar7[(long)piVar7[0x2f] + 0x1c] = 0;
  puVar6[0x10] = piVar7;
  piVar7[0x4d] = 0;
  *(undefined4 *)(*DAT_710593ba90 + 0x3ac) = 1;
  puVar10 = &DAT_7104545db8;
  uVar12 = 1;
  FUN_71032cbf30((undefined8 *)(piVar7 + 0x34),*(long *)(lVar16 + 0x108),(ulong *)&DAT_7104545db8,
                 (byte ****)0x1,param_5,param_6,param_7,param_8);
  *(undefined4 *)(*(long *)**(undefined8 **)(piVar7 + 0x34) + 0x650) = 0;
  lVar14 = *(long *)**(undefined8 **)(piVar7 + 0x34);
  *(undefined4 *)(*(long *)(lVar14 + 0x600) + 0x10) = 0x20;
  *(undefined4 *)(*(long *)(lVar14 + 0x600) + 0x14) = 0x40;
  lVar14 = **(long **)(piVar7 + 0x34);
  puVar8 = (undefined8 *)(lVar14 + 8);
  FUN_7103776910(&local_1e0,(long)puVar8,(long ****)"set_rep_img_00",puVar10,uVar12,param_5,param_6,
                 param_7,param_8);
  uVar5 = local_1d8;
  if (&local_1e0 != (long *********)(piVar7 + 0x38)) {
    local_1d8 = 0;
    uVar9 = *(ulong *)(piVar7 + 0x3a);
    *(ulong *)(piVar7 + 0x3a) = uVar5;
    if (uVar9 != 0) {
      FUN_710392eb40(uVar9);
    }
  }
  uVar5 = local_1d8;
  local_1e0 = (long ********)&PTR_FUN_710523d9a8;
  local_1d8 = 0;
  if (uVar5 != 0) {
    FUN_710392eb40(uVar5);
  }
  FUN_7103776910(&local_1e0,(long)puVar8,(long ****)"set_rep_img_01",puVar10,uVar12,param_5,param_6,
                 param_7,param_8);
  uVar5 = local_1d8;
  if (&local_1e0 != (long *********)(piVar7 + 0x3c)) {
    local_1d8 = 0;
    uVar9 = *(ulong *)(piVar7 + 0x3e);
    *(ulong *)(piVar7 + 0x3e) = uVar5;
    if (uVar9 != 0) {
      FUN_710392eb40(uVar9);
    }
  }
  uVar5 = local_1d8;
  local_1e0 = (long ********)&PTR_FUN_710523d9a8;
  local_1d8 = 0;
  if (uVar5 != 0) {
    FUN_710392eb40(uVar5);
  }
  FUN_7103776910(&local_1e0,(long)puVar8,(long ****)"set_rep_mini_00",puVar10,uVar12,param_5,param_6
                 ,param_7,param_8);
  uVar5 = local_1d8;
  if (&local_1e0 != (long *********)(piVar7 + 0x40)) {
    local_1d8 = 0;
    uVar9 = *(ulong *)(piVar7 + 0x42);
    *(ulong *)(piVar7 + 0x42) = uVar5;
    if (uVar9 != 0) {
      FUN_710392eb40(uVar9);
    }
  }
  uVar5 = local_1d8;
  local_1e0 = (long ********)&PTR_FUN_710523d9a8;
  local_1d8 = 0;
  if (uVar5 != 0) {
    FUN_710392eb40(uVar5);
  }
  local_1d0 = 1;
  local_1cc = 1;
  local_1ca = 1;
  local_1c8 = &DAT_41f0000000000000;
  local_1e0 = (long ********)0x0;
  local_1d8 = 0x101;
  local_1c0 = 0;
  local_190 = (long *)0x0;
  local_160 = (long *)0x0;
  local_130 = (long *)0x0;
  local_100 = (long *)0x0;
  local_d0 = (long *)0x0;
  local_c0 = 0;
  local_b0 = &PTR_FUN_71050b3bd0;
  local_a8 = piVar7;
  local_90 = &local_b0;
  FUN_7101989a30((long *)&local_b0,alStack_180);
  if (&local_b0 == local_90) {
    pcVar15 = (code *)(*local_90)[4];
LAB_71032f3918:
    (*pcVar15)();
  }
  else if (local_90 != (undefined ***)0x0) {
    pcVar15 = (code *)(*local_90)[5];
    goto LAB_71032f3918;
  }
  local_b0 = &PTR_FUN_71050b3c18;
  local_a8 = piVar7;
  local_90 = &local_b0;
  FUN_7101989a30((long *)&local_b0,alStack_150);
  if (&local_b0 == local_90) {
    pcVar15 = (code *)(*local_90)[4];
LAB_71032f3964:
    (*pcVar15)();
  }
  else if (local_90 != (undefined ***)0x0) {
    pcVar15 = (code *)(*local_90)[5];
    goto LAB_71032f3964;
  }
  local_b0 = &PTR_FUN_71050b3c60;
  local_90 = &local_b0;
  FUN_7101989a30((long *)&local_b0,alStack_120);
  if (&local_b0 == local_90) {
    pcVar15 = (code *)(*local_90)[4];
LAB_71032f39b8:
    (*pcVar15)();
  }
  else if (local_90 != (undefined ***)0x0) {
    pcVar15 = (code *)(*local_90)[5];
    goto LAB_71032f39b8;
  }
  pcVar11 = "selector";
  ppppppppplVar13 = &local_1e0;
  FUN_7103770b30(plVar17,puVar8,(long ****)"selector",(byte ****)ppppppppplVar13,param_5,param_6,
                 param_7,param_8);
  if (0 < piVar7[1]) {
    uVar18 = 0;
    do {
      ppppppppplVar13 = (long *********)(ulong)uVar18;
      FUN_71037717d0(plVar17,uVar18 + *piVar7,"set_parts_btn_0%d",ppppppppplVar13,param_5,param_6,
                     param_7,param_8);
      pcVar11 = (char *)(ulong)uVar18;
      FUN_7103776640(&local_b0,**(long **)(piVar7 + 0x34) + 8,(byte ****)"set_parts_btn_%02d",
                     pcVar11,ppppppppplVar13,param_5,param_6,param_7,param_8);
      piVar4 = local_a8;
      FUN_7103778300(0x3f800000,(long)local_a8,0x71042812e6);
      local_b0 = &PTR_FUN_710523d988;
      local_a8 = (int *)0x0;
      if (piVar4 != (int *)0x0) {
        uVar5 = *(ulong *)(piVar4 + 6);
        *(undefined ***)(piVar4 + 4) = &PTR_FUN_710523d9a8;
        piVar4[6] = 0;
        piVar4[7] = 0;
        if (uVar5 != 0) {
          FUN_710392eb40(uVar5);
        }
        FUN_710392eb40((ulong)piVar4);
      }
      uVar18 = uVar18 + 1;
    } while ((int)uVar18 < piVar7[1]);
  }
  FUN_7103778300(0x3f800000,*(long *)(lVar14 + 0x10),0x7104413138);
  if (alStack_f0 == local_d0) {
    (**(code **)(*local_d0 + 0x20))();
    uVar12 = extraout_x1_04;
  }
  else {
    uVar12 = extraout_x1_02;
    if (local_d0 != (long *)0x0) {
      (**(code **)(*local_d0 + 0x28))();
      uVar12 = extraout_x1_03;
    }
  }
  if (alStack_120 == local_100) {
    pcVar15 = *(code **)(*local_100 + 0x20);
LAB_71032f3b08:
    (*pcVar15)();
    uVar12 = extraout_x1_05;
  }
  else if (local_100 != (long *)0x0) {
    pcVar15 = *(code **)(*local_100 + 0x28);
    goto LAB_71032f3b08;
  }
  if (alStack_150 == local_130) {
    pcVar15 = *(code **)(*local_130 + 0x20);
LAB_71032f3b38:
    (*pcVar15)();
    uVar12 = extraout_x1_06;
  }
  else if (local_130 != (long *)0x0) {
    pcVar15 = *(code **)(*local_130 + 0x28);
    goto LAB_71032f3b38;
  }
  if (alStack_180 == local_160) {
    pcVar15 = *(code **)(*local_160 + 0x20);
LAB_71032f3b68:
    (*pcVar15)();
    uVar12 = extraout_x1_07;
  }
  else if (local_160 != (long *)0x0) {
    pcVar15 = *(code **)(*local_160 + 0x28);
    goto LAB_71032f3b68;
  }
  if (alStack_1b0 == local_190) {
    pcVar15 = *(code **)(*local_190 + 0x20);
LAB_71032f3b98:
    (*pcVar15)();
    uVar12 = extraout_x1_08;
  }
  else if (local_190 != (long *)0x0) {
    pcVar15 = *(code **)(*local_190 + 0x28);
    goto LAB_71032f3b98;
  }
  *(undefined1 *)(puVar6 + 0xe) = 0;
  puVar6[2] = &DAT_7105333600;
  uVar3 = DAT_7105333664;
  *(undefined4 *)(puVar6 + 0xd) = DAT_7105333660;
  *(undefined4 *)((long)puVar6 + 0x6c) = uVar3;
  do {
    uVar18 = DAT_7105333650;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(0x7105333650,0x10);
    if (bVar2) {
      DAT_7105333650 = 1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0' || (uVar18 & 1) != 0);
  puVar6[9] = DAT_7105333648;
  DAT_7105333650 = 0;
  DAT_7105333648 = puVar6;
  FUN_71032caea0((long)puVar6,uVar12,(long ****)pcVar11,(byte ****)ppppppppplVar13,param_5,param_6,
                 param_7,param_8);
  lVar14 = *(long *)(lVar16 + 0x110);
  *(undefined8 **)(lVar16 + 0x110) = puVar6;
  uVar12 = extraout_x1_09;
  if (lVar14 != 0) {
    FUN_71032cad20(lVar14);
    uVar12 = extraout_x1_10;
  }
  FUN_710323b9e0(*(long *)(lVar16 + 0x108),uVar12,(long *********)pcVar11,(byte ****)ppppppppplVar13
                 ,param_5,param_6,param_7,param_8);
  if (*(uint *)(lVar16 + 0xf4) < 0x13) {
    *(undefined4 *)(lVar16 + (long)(int)*(uint *)(lVar16 + 0xf4) * 4 + 0xa8) = 0;
    *(undefined1 *)(lVar16 + 0x140) = 1;
                    /* WARNING: Could not recover jumptable at 0x0071032f3c58. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x10))(param_1);
    return;
  }
LAB_71032f3c5c:
                    /* WARNING: Subroutine does not return */
  abort();
}

