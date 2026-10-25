// addr:      7101b5b3f0
// offset:    0x1b5b3f0
// name:      FUN_7101b5b3f0
// mangled:   
// signature: undefined __cdecl FUN_7101b5b3f0(undefined8 * param_1, undefined8 param_2, long * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_7101b5b3f0(undefined8 *param_1,undefined8 param_2,long ****param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long *plVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  long *plVar5;
  undefined8 *puVar6;
  long *plVar7;
  undefined *puVar8;
  undefined8 uVar9;
  long lVar10;
  long *plVar11;
  long *plVar12;
  undefined1 *puVar13;
  long *plVar14;
  undefined1 *puVar15;
  uint uVar16;
  undefined1 auStack_9b8 [16];
  undefined1 auStack_9a8 [16];
  undefined1 auStack_998 [16];
  undefined1 auStack_988 [16];
  undefined1 auStack_978 [16];
  undefined1 auStack_968 [304];
  undefined1 auStack_838 [16];
  undefined1 auStack_828 [16];
  undefined1 auStack_818 [16];
  undefined1 auStack_808 [16];
  undefined1 auStack_7f8 [16];
  undefined1 auStack_7e8 [656];
  undefined1 auStack_558 [16];
  undefined1 auStack_548 [112];
  undefined1 auStack_4d8 [16];
  undefined1 auStack_4c8 [16];
  undefined1 auStack_4b8 [16];
  undefined1 auStack_4a8 [640];
  undefined1 auStack_228 [16];
  undefined1 auStack_218 [16];
  undefined1 auStack_208 [16];
  undefined1 auStack_1f8 [16];
  undefined1 auStack_1e8 [16];
  undefined1 auStack_1d8 [16];
  undefined1 auStack_1c8 [16];
  undefined1 auStack_1b8 [16];
  undefined1 auStack_1a8 [16];
  undefined1 auStack_198 [16];
  undefined1 auStack_188 [16];
  undefined1 *local_178;
  undefined1 *local_170;
  undefined1 *local_168;
  undefined1 *local_160;
  undefined1 *local_158;
  undefined1 *local_150;
  undefined1 *local_148;
  undefined1 *local_140;
  undefined1 *local_138;
  undefined1 *local_130;
  undefined1 *local_128;
  undefined1 *local_120;
  undefined1 *local_118;
  undefined1 *local_110;
  undefined1 *local_108;
  undefined1 *local_100;
  undefined1 *local_f8;
  undefined1 *local_f0;
  undefined1 *local_e8;
  undefined1 *local_e0;
  undefined1 *local_d8;
  undefined1 *local_d0;
  undefined1 *local_c8;
  undefined1 *local_c0;
  undefined1 *local_b8;
  undefined1 *local_b0;
  undefined1 *local_a8;
  undefined1 *local_a0;
  undefined1 *local_98;
  undefined1 *local_90;
  undefined **local_88;
  ulong local_80;
  long ***local_78;
  undefined8 *local_70;
  
  *param_1 = &PTR_FUN_71050ab160;
  param_1[1] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0x1ffffffff;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined1 *)(param_1 + 0xb) = 0;
  param_1[0xf] = param_2;
  *(undefined1 *)(param_1 + 0xe) = 1;
  param_1[9] = 0;
  param_1[10] = 0;
  plVar1 = (long *)FUN_710392e290(0x10,0xb68,param_3,param_4,param_5,param_6,param_7,param_8);
  if (plVar1 == (long *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_88 = (undefined **)((ulong)local_88 & 0xffffffff00000000);
      local_78 = (long ***)0xb68;
      param_3 = &local_78;
      uVar2 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_88);
      if (((uVar2 & 1) != 0) &&
         (plVar1 = (long *)FUN_710392e290(0x10,0xb68,param_3,param_4,param_5,param_6,param_7,param_8
                                         ), plVar1 != (long *)0x0)) goto LAB_7101b5b49c;
    }
    plVar1 = (long *)0x0;
  }
LAB_7101b5b49c:
  FUN_7101b56170(plVar1,param_1,param_3,param_4,param_5,param_6,param_7,param_8);
  param_1[0x10] = plVar1;
  plVar7 = plVar1 + 1;
  puVar8 = &DAT_7104544af0;
  uVar9 = 0;
  FUN_71032cbf30(plVar7,**(long **)(*plVar1 + 0x78),(ulong *)&DAT_7104544af0,(byte ****)0x0,param_5,
                 param_6,param_7,param_8);
  FUN_71037780e0(&local_78,*(long *)plVar1[1] + 8,(long ****)"in_player_03",puVar8,uVar9,param_5,
                 param_6,param_7,param_8);
  puVar6 = local_70;
  if (&local_78 != (long ****)(plVar1 + 4)) {
    local_70 = (undefined8 *)0x0;
    uVar2 = plVar1[5];
    plVar1[5] = (long)puVar6;
    if (uVar2 != 0) {
      FUN_710392eb40(uVar2);
    }
  }
  puVar6 = local_70;
  local_78 = (long ***)&PTR_FUN_710523d9e8;
  local_70 = (undefined8 *)0x0;
  if (puVar6 != (undefined8 *)0x0) {
    FUN_710392eb40((ulong)puVar6);
  }
  FUN_71037780e0(&local_78,*(long *)plVar1[1] + 8,(long ****)"in_player_02",puVar8,uVar9,param_5,
                 param_6,param_7,param_8);
  puVar6 = local_70;
  if (&local_78 != (long ****)(plVar1 + 6)) {
    local_70 = (undefined8 *)0x0;
    uVar2 = plVar1[7];
    plVar1[7] = (long)puVar6;
    if (uVar2 != 0) {
      FUN_710392eb40(uVar2);
    }
  }
  puVar6 = local_70;
  local_78 = (long ***)&PTR_FUN_710523d9e8;
  local_70 = (undefined8 *)0x0;
  if (puVar6 != (undefined8 *)0x0) {
    FUN_710392eb40((ulong)puVar6);
  }
  FUN_71037780e0(&local_78,*(long *)plVar1[1] + 8,(long ****)"in_player_01",puVar8,uVar9,param_5,
                 param_6,param_7,param_8);
  puVar6 = local_70;
  if (&local_78 != (long ****)(plVar1 + 8)) {
    local_70 = (undefined8 *)0x0;
    uVar2 = plVar1[9];
    plVar1[9] = (long)puVar6;
    if (uVar2 != 0) {
      FUN_710392eb40(uVar2);
    }
  }
  puVar6 = local_70;
  local_78 = (long ***)&PTR_FUN_710523d9e8;
  local_70 = (undefined8 *)0x0;
  if (puVar6 != (undefined8 *)0x0) {
    FUN_710392eb40((ulong)puVar6);
  }
  FUN_71037780e0(&local_78,*(long *)plVar1[1] + 8,(long ****)&DAT_710428ff7d,puVar8,uVar9,param_5,
                 param_6,param_7,param_8);
  puVar6 = local_70;
  if (&local_78 != (long ****)(plVar1 + 10)) {
    local_70 = (undefined8 *)0x0;
    uVar2 = plVar1[0xb];
    plVar1[0xb] = (long)puVar6;
    if (uVar2 != 0) {
      FUN_710392eb40(uVar2);
    }
  }
  puVar6 = local_70;
  local_78 = (long ***)&PTR_FUN_710523d9e8;
  local_70 = (undefined8 *)0x0;
  if (puVar6 != (undefined8 *)0x0) {
    FUN_710392eb40((ulong)puVar6);
  }
  FUN_71037780e0(&local_78,*(long *)plVar1[1] + 8,(long ****)"next_in",puVar8,uVar9,param_5,param_6,
                 param_7,param_8);
  puVar6 = local_70;
  if (&local_78 != (long ****)(plVar1 + 0xc)) {
    local_70 = (undefined8 *)0x0;
    uVar2 = plVar1[0xd];
    plVar1[0xd] = (long)puVar6;
    if (uVar2 != 0) {
      FUN_710392eb40(uVar2);
    }
  }
  puVar6 = local_70;
  local_78 = (long ***)&PTR_FUN_710523d9e8;
  local_70 = (undefined8 *)0x0;
  if (puVar6 != (undefined8 *)0x0) {
    FUN_710392eb40((ulong)puVar6);
  }
  FUN_71037780e0(&local_78,*(long *)plVar1[1] + 8,(long ****)"view_num_player_03",puVar8,uVar9,
                 param_5,param_6,param_7,param_8);
  puVar6 = local_70;
  if (&local_78 != (long ****)(plVar1 + 0xe)) {
    local_70 = (undefined8 *)0x0;
    uVar2 = plVar1[0xf];
    plVar1[0xf] = (long)puVar6;
    if (uVar2 != 0) {
      FUN_710392eb40(uVar2);
    }
  }
  puVar6 = local_70;
  local_78 = (long ***)&PTR_FUN_710523d9e8;
  local_70 = (undefined8 *)0x0;
  if (puVar6 != (undefined8 *)0x0) {
    FUN_710392eb40((ulong)puVar6);
  }
  FUN_71037780e0(&local_78,*(long *)plVar1[1] + 8,(long ****)"view_num_player_02",puVar8,uVar9,
                 param_5,param_6,param_7,param_8);
  puVar6 = local_70;
  if (&local_78 != (long ****)(plVar1 + 0x10)) {
    local_70 = (undefined8 *)0x0;
    uVar2 = plVar1[0x11];
    plVar1[0x11] = (long)puVar6;
    if (uVar2 != 0) {
      FUN_710392eb40(uVar2);
    }
  }
  puVar6 = local_70;
  local_78 = (long ***)&PTR_FUN_710523d9e8;
  local_70 = (undefined8 *)0x0;
  if (puVar6 != (undefined8 *)0x0) {
    FUN_710392eb40((ulong)puVar6);
  }
  FUN_71037780e0(&local_78,*(long *)plVar1[1] + 8,(long ****)"view_num_player_01",puVar8,uVar9,
                 param_5,param_6,param_7,param_8);
  puVar6 = local_70;
  if (&local_78 != (long ****)(plVar1 + 0x12)) {
    local_70 = (undefined8 *)0x0;
    uVar2 = plVar1[0x13];
    plVar1[0x13] = (long)puVar6;
    if (uVar2 != 0) {
      FUN_710392eb40(uVar2);
    }
  }
  puVar6 = local_70;
  local_78 = (long ***)&PTR_FUN_710523d9e8;
  local_70 = (undefined8 *)0x0;
  if (puVar6 != (undefined8 *)0x0) {
    FUN_710392eb40((ulong)puVar6);
  }
  FUN_71037780e0(&local_78,*(long *)plVar1[1] + 8,(long ****)"anime_to_numplay_03",puVar8,uVar9,
                 param_5,param_6,param_7,param_8);
  puVar6 = local_70;
  if (&local_78 != (long ****)(plVar1 + 0x14)) {
    local_70 = (undefined8 *)0x0;
    uVar2 = plVar1[0x15];
    plVar1[0x15] = (long)puVar6;
    if (uVar2 != 0) {
      FUN_710392eb40(uVar2);
    }
  }
  puVar6 = local_70;
  local_78 = (long ***)&PTR_FUN_710523d9e8;
  local_70 = (undefined8 *)0x0;
  if (puVar6 != (undefined8 *)0x0) {
    FUN_710392eb40((ulong)puVar6);
  }
  FUN_71037780e0(&local_78,*(long *)plVar1[1] + 8,(long ****)"anime_to_numplay_02",puVar8,uVar9,
                 param_5,param_6,param_7,param_8);
  puVar6 = local_70;
  if (&local_78 != (long ****)(plVar1 + 0x16)) {
    local_70 = (undefined8 *)0x0;
    uVar2 = plVar1[0x17];
    plVar1[0x17] = (long)puVar6;
    if (uVar2 != 0) {
      FUN_710392eb40(uVar2);
    }
  }
  puVar6 = local_70;
  local_78 = (long ***)&PTR_FUN_710523d9e8;
  local_70 = (undefined8 *)0x0;
  if (puVar6 != (undefined8 *)0x0) {
    FUN_710392eb40((ulong)puVar6);
  }
  FUN_71037780e0(&local_78,*(long *)plVar1[1] + 8,(long ****)"anime_to_numplay_01",puVar8,uVar9,
                 param_5,param_6,param_7,param_8);
  puVar6 = local_70;
  if (&local_78 != (long ****)(plVar1 + 0x18)) {
    local_70 = (undefined8 *)0x0;
    uVar2 = plVar1[0x19];
    plVar1[0x19] = (long)puVar6;
    if (uVar2 != 0) {
      FUN_710392eb40(uVar2);
    }
  }
  puVar6 = local_70;
  local_78 = (long ***)&PTR_FUN_710523d9e8;
  local_70 = (undefined8 *)0x0;
  if (puVar6 != (undefined8 *)0x0) {
    FUN_710392eb40((ulong)puVar6);
  }
  FUN_71037780e0(&local_78,*(long *)plVar1[1] + 8,(long ****)"result_all_in",puVar8,uVar9,param_5,
                 param_6,param_7,param_8);
  puVar6 = local_70;
  if (&local_78 != (long ****)(plVar1 + 0x1a)) {
    local_70 = (undefined8 *)0x0;
    uVar2 = plVar1[0x1b];
    plVar1[0x1b] = (long)puVar6;
    if (uVar2 != 0) {
      FUN_710392eb40(uVar2);
    }
  }
  puVar6 = local_70;
  local_78 = (long ***)&PTR_FUN_710523d9e8;
  local_70 = (undefined8 *)0x0;
  if (puVar6 != (undefined8 *)0x0) {
    FUN_710392eb40((ulong)puVar6);
  }
  FUN_71037780e0(&local_78,*(long *)plVar1[1] + 8,(long ****)"result_all_off",puVar8,uVar9,param_5,
                 param_6,param_7,param_8);
  puVar6 = local_70;
  if (&local_78 != (long ****)(plVar1 + 0x1c)) {
    local_70 = (undefined8 *)0x0;
    uVar2 = plVar1[0x1d];
    plVar1[0x1d] = (long)puVar6;
    if (uVar2 != 0) {
      FUN_710392eb40(uVar2);
    }
  }
  puVar6 = local_70;
  local_78 = (long ***)&PTR_FUN_710523d9e8;
  local_70 = (undefined8 *)0x0;
  if (puVar6 != (undefined8 *)0x0) {
    FUN_710392eb40((ulong)puVar6);
  }
  lVar10 = -(long)plVar1;
  local_90 = auStack_9b8 + lVar10;
  local_98 = auStack_9a8 + lVar10;
  local_a0 = auStack_998 + lVar10;
  local_a8 = auStack_988 + lVar10;
  local_b0 = auStack_978 + lVar10;
  local_b8 = auStack_968 + lVar10;
  local_c0 = auStack_558 + lVar10;
  local_c8 = auStack_548 + lVar10;
  local_d0 = auStack_4d8 + lVar10;
  local_d8 = auStack_4c8 + lVar10;
  local_e0 = auStack_4b8 + lVar10;
  local_e8 = auStack_4a8 + lVar10;
  local_f0 = auStack_838 + lVar10;
  local_f8 = auStack_828 + lVar10;
  local_100 = auStack_818 + lVar10;
  local_108 = auStack_808 + lVar10;
  local_110 = auStack_7f8 + lVar10;
  local_118 = auStack_7e8 + lVar10;
  local_120 = auStack_228 + lVar10;
  local_128 = auStack_218 + lVar10;
  local_130 = auStack_208 + lVar10;
  local_138 = auStack_1f8 + lVar10;
  local_140 = auStack_1e8 + lVar10;
  local_148 = auStack_1d8 + lVar10;
  local_150 = auStack_1c8 + lVar10;
  local_158 = auStack_1b8 + lVar10;
  local_160 = auStack_1a8 + lVar10;
  local_168 = auStack_198 + lVar10;
  local_170 = auStack_188 + lVar10;
  puVar13 = (undefined1 *)0x0;
  puVar15 = (undefined1 *)0x0;
  uVar16 = 10;
  local_178 = (undefined1 *)((long)&local_178 + lVar10);
  do {
    uVar2 = (ulong)(uVar16 - 10);
    FUN_7103776640(&local_88,*(long *)*plVar7 + 8,(byte ****)"set_p_%02d",uVar2,uVar9,param_5,
                   param_6,param_7,param_8);
    FUN_71037780e0(&local_78,(long)&local_88,(long ****)"view_p_00",uVar2,uVar9,param_5,param_6,
                   param_7,param_8);
    puVar6 = local_70;
    if ((undefined1 *)((long)&local_168 + lVar10) != puVar13) {
      local_70 = (undefined8 *)0x0;
      uVar3 = *(ulong *)((long)plVar1 + (long)(puVar13 + 0xf8));
      *(undefined8 **)((long)plVar1 + (long)(puVar13 + 0xf8)) = puVar6;
      if (uVar3 != 0) {
        FUN_710392eb40(uVar3);
      }
    }
    puVar6 = local_70;
    local_78 = (long ***)&PTR_FUN_710523d9e8;
    local_70 = (undefined8 *)0x0;
    if (puVar6 != (undefined8 *)0x0) {
      FUN_710392eb40((ulong)puVar6);
    }
    FUN_71037780e0(&local_78,(long)&local_88,(long ****)"view_p_01",uVar2,uVar9,param_5,param_6,
                   param_7,param_8);
    puVar6 = local_70;
    if (local_178 != puVar13) {
      local_70 = (undefined8 *)0x0;
      uVar3 = *(ulong *)((long)plVar1 + (long)(puVar13 + 0x108));
      *(undefined8 **)((long)plVar1 + (long)(puVar13 + 0x108)) = puVar6;
      if (uVar3 != 0) {
        FUN_710392eb40(uVar3);
      }
    }
    puVar6 = local_70;
    local_78 = (long ***)&PTR_FUN_710523d9e8;
    local_70 = (undefined8 *)0x0;
    if (puVar6 != (undefined8 *)0x0) {
      FUN_710392eb40((ulong)puVar6);
    }
    FUN_71037780e0(&local_78,(long)&local_88,(long ****)"view_p_02",uVar2,uVar9,param_5,param_6,
                   param_7,param_8);
    puVar6 = local_70;
    if (local_170 != puVar13) {
      local_70 = (undefined8 *)0x0;
      uVar3 = *(ulong *)((long)plVar1 + (long)(puVar13 + 0x118));
      *(undefined8 **)((long)plVar1 + (long)(puVar13 + 0x118)) = puVar6;
      if (uVar3 != 0) {
        FUN_710392eb40(uVar3);
      }
    }
    puVar6 = local_70;
    local_78 = (long ***)&PTR_FUN_710523d9e8;
    local_70 = (undefined8 *)0x0;
    if (puVar6 != (undefined8 *)0x0) {
      FUN_710392eb40((ulong)puVar6);
    }
    FUN_71037780e0(&local_78,(long)&local_88,(long ****)"view_p_03",uVar2,uVar9,param_5,param_6,
                   param_7,param_8);
    puVar6 = local_70;
    if (local_168 != puVar13) {
      local_70 = (undefined8 *)0x0;
      uVar3 = *(ulong *)((long)plVar1 + (long)(puVar13 + 0x128));
      *(undefined8 **)((long)plVar1 + (long)(puVar13 + 0x128)) = puVar6;
      if (uVar3 != 0) {
        FUN_710392eb40(uVar3);
      }
    }
    puVar6 = local_70;
    local_78 = (long ***)&PTR_FUN_710523d9e8;
    local_70 = (undefined8 *)0x0;
    if (puVar6 != (undefined8 *)0x0) {
      FUN_710392eb40((ulong)puVar6);
    }
    FUN_71037780e0(&local_78,(long)&local_88,(long ****)"anime_to_numplay",uVar2,uVar9,param_5,
                   param_6,param_7,param_8);
    puVar6 = local_70;
    if (local_160 != puVar13) {
      local_70 = (undefined8 *)0x0;
      uVar3 = *(ulong *)((long)plVar1 + (long)(puVar13 + 0x138));
      *(undefined8 **)((long)plVar1 + (long)(puVar13 + 0x138)) = puVar6;
      if (uVar3 != 0) {
        FUN_710392eb40(uVar3);
      }
    }
    puVar6 = local_70;
    local_78 = (long ***)&PTR_FUN_710523d9e8;
    local_70 = (undefined8 *)0x0;
    if (puVar6 != (undefined8 *)0x0) {
      FUN_710392eb40((ulong)puVar6);
    }
    FUN_71037780e0(&local_78,(long)&local_88,(long ****)"turn_lamp_00",uVar2,uVar9,param_5,param_6,
                   param_7,param_8);
    puVar6 = local_70;
    if (local_158 != puVar13) {
      local_70 = (undefined8 *)0x0;
      uVar3 = *(ulong *)((long)plVar1 + (long)(puVar13 + 0x148));
      *(undefined8 **)((long)plVar1 + (long)(puVar13 + 0x148)) = puVar6;
      if (uVar3 != 0) {
        FUN_710392eb40(uVar3);
      }
    }
    puVar6 = local_70;
    local_78 = (long ***)&PTR_FUN_710523d9e8;
    local_70 = (undefined8 *)0x0;
    if (puVar6 != (undefined8 *)0x0) {
      FUN_710392eb40((ulong)puVar6);
    }
    FUN_71037780e0(&local_78,(long)&local_88,(long ****)"turn_lamp_01",uVar2,uVar9,param_5,param_6,
                   param_7,param_8);
    puVar6 = local_70;
    if (local_150 != puVar13) {
      local_70 = (undefined8 *)0x0;
      uVar3 = *(ulong *)((long)plVar1 + (long)(puVar13 + 0x158));
      *(undefined8 **)((long)plVar1 + (long)(puVar13 + 0x158)) = puVar6;
      if (uVar3 != 0) {
        FUN_710392eb40(uVar3);
      }
    }
    puVar6 = local_70;
    local_78 = (long ***)&PTR_FUN_710523d9e8;
    local_70 = (undefined8 *)0x0;
    if (puVar6 != (undefined8 *)0x0) {
      FUN_710392eb40((ulong)puVar6);
    }
    FUN_71037780e0(&local_78,(long)&local_88,(long ****)"turn_lamp_02",uVar2,uVar9,param_5,param_6,
                   param_7,param_8);
    puVar6 = local_70;
    if (local_148 != puVar13) {
      local_70 = (undefined8 *)0x0;
      uVar3 = *(ulong *)((long)plVar1 + (long)(puVar13 + 0x168));
      *(undefined8 **)((long)plVar1 + (long)(puVar13 + 0x168)) = puVar6;
      if (uVar3 != 0) {
        FUN_710392eb40(uVar3);
      }
    }
    puVar6 = local_70;
    local_78 = (long ***)&PTR_FUN_710523d9e8;
    local_70 = (undefined8 *)0x0;
    if (puVar6 != (undefined8 *)0x0) {
      FUN_710392eb40((ulong)puVar6);
    }
    FUN_71037780e0(&local_78,(long)&local_88,(long ****)"turn_lamp_03",uVar2,uVar9,param_5,param_6,
                   param_7,param_8);
    puVar6 = local_70;
    if (local_140 != puVar13) {
      local_70 = (undefined8 *)0x0;
      uVar3 = *(ulong *)((long)plVar1 + (long)(puVar13 + 0x178));
      *(undefined8 **)((long)plVar1 + (long)(puVar13 + 0x178)) = puVar6;
      if (uVar3 != 0) {
        FUN_710392eb40(uVar3);
      }
    }
    puVar6 = local_70;
    local_78 = (long ***)&PTR_FUN_710523d9e8;
    local_70 = (undefined8 *)0x0;
    if (puVar6 != (undefined8 *)0x0) {
      FUN_710392eb40((ulong)puVar6);
    }
    FUN_71037780e0(&local_78,(long)&local_88,(long ****)"turn_lamp_04",uVar2,uVar9,param_5,param_6,
                   param_7,param_8);
    puVar6 = local_70;
    if (local_138 != puVar13) {
      local_70 = (undefined8 *)0x0;
      uVar3 = *(ulong *)((long)plVar1 + (long)(puVar13 + 0x188));
      *(undefined8 **)((long)plVar1 + (long)(puVar13 + 0x188)) = puVar6;
      if (uVar3 != 0) {
        FUN_710392eb40(uVar3);
      }
    }
    puVar6 = local_70;
    local_78 = (long ***)&PTR_FUN_710523d9e8;
    local_70 = (undefined8 *)0x0;
    if (puVar6 != (undefined8 *)0x0) {
      FUN_710392eb40((ulong)puVar6);
    }
    FUN_71037780e0(&local_78,(long)&local_88,(long ****)"pic_chara",uVar2,uVar9,param_5,param_6,
                   param_7,param_8);
    puVar6 = local_70;
    if (local_130 != puVar13) {
      local_70 = (undefined8 *)0x0;
      uVar3 = *(ulong *)((long)plVar1 + (long)(puVar13 + 0x198));
      *(undefined8 **)((long)plVar1 + (long)(puVar13 + 0x198)) = puVar6;
      if (uVar3 != 0) {
        FUN_710392eb40(uVar3);
      }
    }
    puVar6 = local_70;
    local_78 = (long ***)&PTR_FUN_710523d9e8;
    local_70 = (undefined8 *)0x0;
    if (puVar6 != (undefined8 *)0x0) {
      FUN_710392eb40((ulong)puVar6);
    }
    FUN_71037780e0(&local_78,(long)&local_88,(long ****)"pic_mii",uVar2,uVar9,param_5,param_6,
                   param_7,param_8);
    puVar6 = local_70;
    if (local_128 != puVar13) {
      local_70 = (undefined8 *)0x0;
      uVar3 = *(ulong *)((long)plVar1 + (long)(puVar13 + 0x1a8));
      *(undefined8 **)((long)plVar1 + (long)(puVar13 + 0x1a8)) = puVar6;
      if (uVar3 != 0) {
        FUN_710392eb40(uVar3);
      }
    }
    puVar6 = local_70;
    local_78 = (long ***)&PTR_FUN_710523d9e8;
    local_70 = (undefined8 *)0x0;
    if (puVar6 != (undefined8 *)0x0) {
      FUN_710392eb40((ulong)puVar6);
    }
    FUN_71037780e0(&local_78,(long)&local_88,(long ****)"lamp_anim",uVar2,uVar9,param_5,param_6,
                   param_7,param_8);
    puVar6 = local_70;
    if (local_120 != puVar13) {
      local_70 = (undefined8 *)0x0;
      uVar3 = *(ulong *)((long)plVar1 + (long)(puVar13 + 0x1b8));
      *(undefined8 **)((long)plVar1 + (long)(puVar13 + 0x1b8)) = puVar6;
      if (uVar3 != 0) {
        FUN_710392eb40(uVar3);
      }
    }
    puVar6 = local_70;
    local_78 = (long ***)&PTR_FUN_710523d9e8;
    local_70 = (undefined8 *)0x0;
    if (puVar6 != (undefined8 *)0x0) {
      FUN_710392eb40((ulong)puVar6);
    }
    FUN_7103776910(&local_78,(long)&local_88,(long ****)"set_txt_player_num",uVar2,uVar9,param_5,
                   param_6,param_7,param_8);
    puVar6 = local_70;
    if (local_118 != puVar15) {
      local_70 = (undefined8 *)0x0;
      uVar3 = *(ulong *)((long)plVar1 + (long)(puVar15 + 0x778));
      *(undefined8 **)((long)plVar1 + (long)(puVar15 + 0x778)) = puVar6;
      if (uVar3 != 0) {
        FUN_710392eb40(uVar3);
      }
    }
    puVar6 = local_70;
    local_78 = (long ***)&PTR_FUN_710523d9a8;
    local_70 = (undefined8 *)0x0;
    if (puVar6 != (undefined8 *)0x0) {
      FUN_710392eb40((ulong)puVar6);
    }
    FUN_7103776910(&local_78,(long)&local_88,(long ****)"set_txt_player_name",uVar2,uVar9,param_5,
                   param_6,param_7,param_8);
    puVar6 = local_70;
    if (local_110 != puVar15) {
      local_70 = (undefined8 *)0x0;
      uVar3 = *(ulong *)((long)plVar1 + (long)(puVar15 + 0x788));
      *(undefined8 **)((long)plVar1 + (long)(puVar15 + 0x788)) = puVar6;
      if (uVar3 != 0) {
        FUN_710392eb40(uVar3);
      }
    }
    puVar6 = local_70;
    local_78 = (long ***)&PTR_FUN_710523d9a8;
    local_70 = (undefined8 *)0x0;
    if (puVar6 != (undefined8 *)0x0) {
      FUN_710392eb40((ulong)puVar6);
    }
    FUN_7103776910(&local_78,(long)&local_88,(long ****)"set_rep_chara1",uVar2,uVar9,param_5,param_6
                   ,param_7,param_8);
    puVar6 = local_70;
    if (local_108 != puVar15) {
      local_70 = (undefined8 *)0x0;
      uVar3 = *(ulong *)((long)plVar1 + (long)(puVar15 + 0x798));
      *(undefined8 **)((long)plVar1 + (long)(puVar15 + 0x798)) = puVar6;
      if (uVar3 != 0) {
        FUN_710392eb40(uVar3);
      }
    }
    puVar6 = local_70;
    local_78 = (long ***)&PTR_FUN_710523d9a8;
    local_70 = (undefined8 *)0x0;
    if (puVar6 != (undefined8 *)0x0) {
      FUN_710392eb40((ulong)puVar6);
    }
    FUN_7103776910(&local_78,(long)&local_88,(long ****)"set_rep_chara1_sdw",uVar2,uVar9,param_5,
                   param_6,param_7,param_8);
    puVar6 = local_70;
    if (local_100 != puVar15) {
      local_70 = (undefined8 *)0x0;
      uVar3 = *(ulong *)((long)plVar1 + (long)(puVar15 + 0x7a8));
      *(undefined8 **)((long)plVar1 + (long)(puVar15 + 0x7a8)) = puVar6;
      if (uVar3 != 0) {
        FUN_710392eb40(uVar3);
      }
    }
    puVar6 = local_70;
    local_78 = (long ***)&PTR_FUN_710523d9a8;
    local_70 = (undefined8 *)0x0;
    if (puVar6 != (undefined8 *)0x0) {
      FUN_710392eb40((ulong)puVar6);
    }
    FUN_7103776910(&local_78,(long)&local_88,(long ****)"set_rep_chara1_mii",uVar2,uVar9,param_5,
                   param_6,param_7,param_8);
    puVar6 = local_70;
    if (local_f8 != puVar15) {
      local_70 = (undefined8 *)0x0;
      uVar3 = *(ulong *)((long)plVar1 + (long)(puVar15 + 0x7b8));
      *(undefined8 **)((long)plVar1 + (long)(puVar15 + 0x7b8)) = puVar6;
      if (uVar3 != 0) {
        FUN_710392eb40(uVar3);
      }
    }
    puVar6 = local_70;
    local_78 = (long ***)&PTR_FUN_710523d9a8;
    local_70 = (undefined8 *)0x0;
    if (puVar6 != (undefined8 *)0x0) {
      FUN_710392eb40((ulong)puVar6);
    }
    FUN_7103776910(&local_78,(long)&local_88,(long ****)"set_rep_chara1_mii_sdw",uVar2,uVar9,param_5
                   ,param_6,param_7,param_8);
    puVar6 = local_70;
    if (local_f0 != puVar15) {
      local_70 = (undefined8 *)0x0;
      uVar2 = *(ulong *)((long)plVar1 + (long)(puVar15 + 0x7c8));
      *(undefined8 **)((long)plVar1 + (long)(puVar15 + 0x7c8)) = puVar6;
      if (uVar2 != 0) {
        FUN_710392eb40(uVar2);
      }
    }
    puVar6 = local_70;
    local_78 = (long ***)&PTR_FUN_710523d9a8;
    local_70 = (undefined8 *)0x0;
    if (puVar6 != (undefined8 *)0x0) {
      FUN_710392eb40((ulong)puVar6);
    }
    uVar3 = (ulong)uVar16;
    FUN_7103776640(&local_78,*(long *)*plVar7 + 8,(byte ****)"set_p_%02d",uVar3,uVar9,param_5,
                   param_6,param_7,param_8);
    puVar6 = local_70;
    uVar2 = local_80;
    local_70 = (undefined8 *)0x0;
    local_80 = (ulong)puVar6;
    if (uVar2 != 0) {
      uVar4 = *(ulong *)(uVar2 + 0x18);
      *(undefined ***)(uVar2 + 0x10) = &PTR_FUN_710523d9a8;
      *(undefined8 *)(uVar2 + 0x18) = 0;
      if (uVar4 != 0) {
        FUN_710392eb40(uVar4);
      }
      FUN_710392eb40(uVar2);
    }
    local_78 = (long ***)&PTR_FUN_710523d988;
    local_70 = (undefined8 *)0x0;
    FUN_71037780e0(&local_78,(long)&local_88,(long ****)"view_p_00",uVar3,uVar9,param_5,param_6,
                   param_7,param_8);
    puVar6 = local_70;
    if (local_e8 != puVar13) {
      local_70 = (undefined8 *)0x0;
      uVar2 = *(ulong *)((long)plVar1 + (long)(puVar13 + 0x438));
      *(undefined8 **)((long)plVar1 + (long)(puVar13 + 0x438)) = puVar6;
      if (uVar2 != 0) {
        FUN_710392eb40(uVar2);
      }
    }
    puVar6 = local_70;
    local_78 = (long ***)&PTR_FUN_710523d9e8;
    local_70 = (undefined8 *)0x0;
    if (puVar6 != (undefined8 *)0x0) {
      FUN_710392eb40((ulong)puVar6);
    }
    FUN_71037780e0(&local_78,(long)&local_88,(long ****)"view_p_01",uVar3,uVar9,param_5,param_6,
                   param_7,param_8);
    puVar6 = local_70;
    if (local_e0 != puVar13) {
      local_70 = (undefined8 *)0x0;
      uVar2 = *(ulong *)((long)plVar1 + (long)(puVar13 + 0x448));
      *(undefined8 **)((long)plVar1 + (long)(puVar13 + 0x448)) = puVar6;
      if (uVar2 != 0) {
        FUN_710392eb40(uVar2);
      }
    }
    puVar6 = local_70;
    local_78 = (long ***)&PTR_FUN_710523d9e8;
    local_70 = (undefined8 *)0x0;
    if (puVar6 != (undefined8 *)0x0) {
      FUN_710392eb40((ulong)puVar6);
    }
    FUN_71037780e0(&local_78,(long)&local_88,(long ****)"view_p_02",uVar3,uVar9,param_5,param_6,
                   param_7,param_8);
    puVar6 = local_70;
    if (local_d8 != puVar13) {
      local_70 = (undefined8 *)0x0;
      uVar2 = *(ulong *)((long)plVar1 + (long)(puVar13 + 0x458));
      *(undefined8 **)((long)plVar1 + (long)(puVar13 + 0x458)) = puVar6;
      if (uVar2 != 0) {
        FUN_710392eb40(uVar2);
      }
    }
    puVar6 = local_70;
    local_78 = (long ***)&PTR_FUN_710523d9e8;
    local_70 = (undefined8 *)0x0;
    if (puVar6 != (undefined8 *)0x0) {
      FUN_710392eb40((ulong)puVar6);
    }
    FUN_71037780e0(&local_78,(long)&local_88,(long ****)"view_p_03",uVar3,uVar9,param_5,param_6,
                   param_7,param_8);
    puVar6 = local_70;
    if (local_d0 != puVar13) {
      local_70 = (undefined8 *)0x0;
      uVar2 = *(ulong *)((long)plVar1 + (long)(puVar13 + 0x468));
      *(undefined8 **)((long)plVar1 + (long)(puVar13 + 0x468)) = puVar6;
      if (uVar2 != 0) {
        FUN_710392eb40(uVar2);
      }
    }
    puVar6 = local_70;
    local_78 = (long ***)&PTR_FUN_710523d9e8;
    local_70 = (undefined8 *)0x0;
    if (puVar6 != (undefined8 *)0x0) {
      FUN_710392eb40((ulong)puVar6);
    }
    FUN_71037780e0(&local_78,(long)&local_88,(long ****)"pic_chara",uVar3,uVar9,param_5,param_6,
                   param_7,param_8);
    puVar6 = local_70;
    if (local_c8 != puVar13) {
      local_70 = (undefined8 *)0x0;
      uVar2 = *(ulong *)((long)plVar1 + (long)(puVar13 + 0x4d8));
      *(undefined8 **)((long)plVar1 + (long)(puVar13 + 0x4d8)) = puVar6;
      if (uVar2 != 0) {
        FUN_710392eb40(uVar2);
      }
    }
    puVar6 = local_70;
    local_78 = (long ***)&PTR_FUN_710523d9e8;
    local_70 = (undefined8 *)0x0;
    if (puVar6 != (undefined8 *)0x0) {
      FUN_710392eb40((ulong)puVar6);
    }
    FUN_71037780e0(&local_78,(long)&local_88,(long ****)"pic_mii",uVar3,uVar9,param_5,param_6,
                   param_7,param_8);
    puVar6 = local_70;
    if (local_c0 != puVar13) {
      local_70 = (undefined8 *)0x0;
      uVar2 = *(ulong *)((long)plVar1 + (long)(puVar13 + 0x4e8));
      *(undefined8 **)((long)plVar1 + (long)(puVar13 + 0x4e8)) = puVar6;
      if (uVar2 != 0) {
        FUN_710392eb40(uVar2);
      }
    }
    puVar6 = local_70;
    local_78 = (long ***)&PTR_FUN_710523d9e8;
    local_70 = (undefined8 *)0x0;
    if (puVar6 != (undefined8 *)0x0) {
      FUN_710392eb40((ulong)puVar6);
    }
    FUN_7103776910(&local_78,(long)&local_88,(long ****)"set_txt_player_num",uVar3,uVar9,param_5,
                   param_6,param_7,param_8);
    puVar6 = local_70;
    if (local_b8 != puVar15) {
      local_70 = (undefined8 *)0x0;
      uVar2 = *(ulong *)((long)plVar1 + (long)(puVar15 + 0x8f8));
      *(undefined8 **)((long)plVar1 + (long)(puVar15 + 0x8f8)) = puVar6;
      if (uVar2 != 0) {
        FUN_710392eb40(uVar2);
      }
    }
    puVar6 = local_70;
    local_78 = (long ***)&PTR_FUN_710523d9a8;
    local_70 = (undefined8 *)0x0;
    if (puVar6 != (undefined8 *)0x0) {
      FUN_710392eb40((ulong)puVar6);
    }
    FUN_7103776910(&local_78,(long)&local_88,(long ****)"set_txt_player_name",uVar3,uVar9,param_5,
                   param_6,param_7,param_8);
    puVar6 = local_70;
    if (local_b0 != puVar15) {
      local_70 = (undefined8 *)0x0;
      uVar2 = *(ulong *)((long)plVar1 + (long)(puVar15 + 0x908));
      *(undefined8 **)((long)plVar1 + (long)(puVar15 + 0x908)) = puVar6;
      if (uVar2 != 0) {
        FUN_710392eb40(uVar2);
      }
    }
    puVar6 = local_70;
    local_78 = (long ***)&PTR_FUN_710523d9a8;
    local_70 = (undefined8 *)0x0;
    if (puVar6 != (undefined8 *)0x0) {
      FUN_710392eb40((ulong)puVar6);
    }
    FUN_7103776910(&local_78,(long)&local_88,(long ****)"set_rep_chara1",uVar3,uVar9,param_5,param_6
                   ,param_7,param_8);
    puVar6 = local_70;
    if (local_a8 != puVar15) {
      local_70 = (undefined8 *)0x0;
      uVar2 = *(ulong *)((long)plVar1 + (long)(puVar15 + 0x918));
      *(undefined8 **)((long)plVar1 + (long)(puVar15 + 0x918)) = puVar6;
      if (uVar2 != 0) {
        FUN_710392eb40(uVar2);
      }
    }
    puVar6 = local_70;
    local_78 = (long ***)&PTR_FUN_710523d9a8;
    local_70 = (undefined8 *)0x0;
    if (puVar6 != (undefined8 *)0x0) {
      FUN_710392eb40((ulong)puVar6);
    }
    FUN_7103776910(&local_78,(long)&local_88,(long ****)"set_rep_chara1_sdw",uVar3,uVar9,param_5,
                   param_6,param_7,param_8);
    puVar6 = local_70;
    if (local_a0 != puVar15) {
      local_70 = (undefined8 *)0x0;
      uVar2 = *(ulong *)((long)plVar1 + (long)(puVar15 + 0x928));
      *(undefined8 **)((long)plVar1 + (long)(puVar15 + 0x928)) = puVar6;
      if (uVar2 != 0) {
        FUN_710392eb40(uVar2);
      }
    }
    puVar6 = local_70;
    local_78 = (long ***)&PTR_FUN_710523d9a8;
    local_70 = (undefined8 *)0x0;
    if (puVar6 != (undefined8 *)0x0) {
      FUN_710392eb40((ulong)puVar6);
    }
    FUN_7103776910(&local_78,(long)&local_88,(long ****)"set_rep_chara1_mii",uVar3,uVar9,param_5,
                   param_6,param_7,param_8);
    puVar6 = local_70;
    if (local_98 != puVar15) {
      local_70 = (undefined8 *)0x0;
      uVar2 = *(ulong *)((long)plVar1 + (long)(puVar15 + 0x938));
      *(undefined8 **)((long)plVar1 + (long)(puVar15 + 0x938)) = puVar6;
      if (uVar2 != 0) {
        FUN_710392eb40(uVar2);
      }
    }
    puVar6 = local_70;
    local_78 = (long ***)&PTR_FUN_710523d9a8;
    local_70 = (undefined8 *)0x0;
    if (puVar6 != (undefined8 *)0x0) {
      FUN_710392eb40((ulong)puVar6);
    }
    FUN_7103776910(&local_78,(long)&local_88,(long ****)"set_rep_chara1_mii_sdw",uVar3,uVar9,param_5
                   ,param_6,param_7,param_8);
    puVar6 = local_70;
    if (local_90 != puVar15) {
      local_70 = (undefined8 *)0x0;
      uVar2 = *(ulong *)((long)plVar1 + (long)(puVar15 + 0x948));
      *(undefined8 **)((long)plVar1 + (long)(puVar15 + 0x948)) = puVar6;
      if (uVar2 != 0) {
        FUN_710392eb40(uVar2);
      }
    }
    puVar6 = local_70;
    local_78 = (long ***)&PTR_FUN_710523d9a8;
    local_70 = (undefined8 *)0x0;
    if (puVar6 != (undefined8 *)0x0) {
      FUN_710392eb40((ulong)puVar6);
    }
    uVar2 = local_80;
    local_88 = &PTR_FUN_710523d988;
    local_80 = 0;
    if (uVar2 != 0) {
      uVar4 = *(ulong *)(uVar2 + 0x18);
      *(undefined ***)(uVar2 + 0x10) = &PTR_FUN_710523d9a8;
      *(undefined8 *)(uVar2 + 0x18) = 0;
      if (uVar4 != 0) {
        FUN_710392eb40(uVar4);
      }
      FUN_710392eb40(uVar2);
    }
    puVar13 = puVar13 + 0xd0;
    puVar15 = puVar15 + 0x60;
    uVar16 = uVar16 + 1;
  } while (puVar13 != (undefined1 *)0x340);
  FUN_7103776640(&local_88,*(long *)plVar1[1] + 8,(byte ****)"set_key_help",uVar3,uVar9,param_5,
                 param_6,param_7,param_8);
  FUN_7103776910(&local_78,(long)&local_88,(long ****)"set_txt_icon",uVar3,uVar9,param_5,param_6,
                 param_7,param_8);
  puVar6 = local_70;
  if (&local_78 != (long ****)(plVar1 + 0x14e)) {
    local_70 = (undefined8 *)0x0;
    uVar2 = plVar1[0x14f];
    plVar1[0x14f] = (long)puVar6;
    if (uVar2 != 0) {
      FUN_710392eb40(uVar2);
    }
  }
  puVar6 = local_70;
  local_78 = (long ***)&PTR_FUN_710523d9a8;
  local_70 = (undefined8 *)0x0;
  if (puVar6 != (undefined8 *)0x0) {
    FUN_710392eb40((ulong)puVar6);
  }
  uVar2 = local_80;
  local_88 = &PTR_FUN_710523d988;
  local_80 = 0;
  if (uVar2 != 0) {
    uVar4 = *(ulong *)(uVar2 + 0x18);
    *(undefined ***)(uVar2 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar2 + 0x18) = 0;
    if (uVar4 != 0) {
      FUN_710392eb40(uVar4);
    }
    FUN_710392eb40(uVar2);
  }
  FUN_7103776910(&local_78,*(long *)*plVar7 + 8,(long ****)"set_fxui_confetti_1s",uVar3,uVar9,
                 param_5,param_6,param_7,param_8);
  puVar6 = local_70;
  if ((long *)*local_70 != (long *)0x0) {
    plVar5 = FUN_710377aae0((long *)*local_70);
    if (plVar5 != (long *)0x0) {
      *(undefined4 *)(plVar5 + 0x24) = 0x2000000;
    }
    plVar5 = FUN_710377aae0((long *)*local_70);
    if (plVar5 != (long *)0x0) {
      *(undefined1 *)((long)plVar5 + 0x13f) = 1;
    }
    if (&local_78 != (long ****)(plVar1 + 0x150)) {
      *(undefined8 *)plVar1[0x151] = *local_70;
      *(undefined8 *)(plVar1[0x151] + 8) = local_70[1];
      *(undefined8 *)(plVar1[0x151] + 0x10) = local_70[2];
      *(undefined8 *)(plVar1[0x151] + 0x18) = local_70[3];
    }
    plVar5 = plVar1 + 0x151;
    FUN_710377aa20(*(long **)*plVar5,0);
    FUN_710377abf0(*(long **)*plVar5,0);
    lVar10 = *(long *)*plVar5;
    puVar6 = local_70;
    if (lVar10 != 0) {
      *(byte *)(lVar10 + 0x58) = *(byte *)(lVar10 + 0x58) & 0xfe;
    }
  }
  local_78 = (long ***)&PTR_FUN_710523d9a8;
  local_70 = (undefined8 *)0x0;
  if (puVar6 != (undefined8 *)0x0) {
    FUN_710392eb40((ulong)puVar6);
  }
  FUN_7103776910(&local_78,*(long *)*plVar7 + 8,(long ****)"set_fxui_confetti",uVar3,uVar9,param_5,
                 param_6,param_7,param_8);
  puVar6 = local_70;
  if ((long *)*local_70 != (long *)0x0) {
    plVar7 = FUN_710377aae0((long *)*local_70);
    if (plVar7 != (long *)0x0) {
      *(undefined4 *)(plVar7 + 0x24) = 0x2000000;
    }
    plVar7 = FUN_710377aae0((long *)*puVar6);
    if (plVar7 != (long *)0x0) {
      *(undefined1 *)((long)plVar7 + 0x13f) = 1;
    }
    if (&local_78 != (long ****)(plVar1 + 0x152)) {
      *(undefined8 *)plVar1[0x153] = *puVar6;
      *(undefined8 *)(plVar1[0x153] + 8) = local_70[1];
      *(undefined8 *)(plVar1[0x153] + 0x10) = local_70[2];
      *(undefined8 *)(plVar1[0x153] + 0x18) = local_70[3];
    }
    plVar7 = plVar1 + 0x153;
    FUN_710377aa20(*(long **)*plVar7,0);
    FUN_710377abf0(*(long **)*plVar7,0);
    lVar10 = *(long *)*plVar7;
    puVar6 = local_70;
    if (lVar10 != 0) {
      *(byte *)(lVar10 + 0x58) = *(byte *)(lVar10 + 0x58) & 0xfe;
    }
  }
  local_78 = (long ***)&PTR_FUN_710523d9a8;
  local_70 = (undefined8 *)0x0;
  if (puVar6 != (undefined8 *)0x0) {
    FUN_710392eb40((ulong)puVar6);
  }
  plVar7 = (long *)plVar1[5];
  plVar5 = (long *)plVar7[1];
  if (plVar5 != (long *)0x0) {
    if ((char)plVar7[2] != '\0') {
      plVar14 = *(long **)(*plVar7 + 0x80);
      plVar7 = (long *)(*plVar7 + 0x88);
      if (plVar14 != plVar7) {
        do {
          while( true ) {
            uVar2 = (**(code **)(*(long *)plVar14[0xd] + 0x148))();
            if (((uVar2 & 1) != 0) &&
               (uVar2 = (**(code **)(*plVar5 + 0x120))(plVar5,plVar14[0xd]), (uVar2 & 1) != 0)) {
              (**(code **)(*(long *)plVar14[0xd] + 0x178))();
              (**(code **)(*(long *)plVar14[0xd] + 0x140))((long *)plVar14[0xd],0);
            }
            plVar11 = (long *)plVar14[1];
            if ((long *)plVar14[1] == (long *)0x0) break;
            do {
              plVar14 = plVar11;
              plVar11 = (long *)*plVar14;
            } while ((long *)*plVar14 != (long *)0x0);
LAB_7101b5c74c:
            if (plVar14 == plVar7) goto LAB_7101b5c764;
          }
          plVar11 = plVar14 + 2;
          plVar12 = (long *)*plVar11;
          if ((long *)*plVar12 != plVar14) {
            do {
              lVar10 = *plVar11;
              plVar11 = (long *)(lVar10 + 0x10);
              plVar14 = (long *)*plVar11;
            } while (*plVar14 != lVar10);
            goto LAB_7101b5c74c;
          }
          plVar14 = plVar12;
        } while (plVar12 != plVar7);
LAB_7101b5c764:
        plVar5 = *(long **)(plVar1[5] + 8);
      }
    }
    (**(code **)(*plVar5 + 0x188))(plVar5);
  }
  return;
}

