// addr:      7101d03110
// offset:    0x1d03110
// name:      FUN_7101d03110
// mangled:   
// signature: undefined __cdecl FUN_7101d03110(undefined1[16] param_1, undefined4 param_2, float param_3, undefined8 * param_4, long * param_5, long * * * * param_6, byte * * * * param_7, long * * * * param_8, ulong param_9, undefined8 param_10, undefined8 param_11, byte param_12)


/* WARNING (jumptable): Heritage AFTER dead removal. Revisit: 0xfffffffffffffef8 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_7101d03110(undefined1 param_1 [16],undefined4 param_2,float param_3,undefined8 *param_4,
                   long *param_5,long ****param_6,byte ****param_7,long ****param_8,ulong param_9,
                   undefined8 param_10,undefined8 param_11,byte param_12)

{
  undefined8 *puVar1;
  long ********pppppppplVar2;
  long lVar3;
  undefined8 *puVar4;
  long *plVar5;
  char cVar6;
  undefined2 uVar7;
  bool bVar8;
  int iVar9;
  undefined8 *puVar10;
  ulong uVar11;
  ulong uVar12;
  long *plVar13;
  ulong uVar14;
  long ********pppppppplVar15;
  ulong uVar16;
  long ********pppppppplVar17;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 extraout_x1_02;
  undefined8 extraout_x1_03;
  undefined8 extraout_x1_04;
  char *pcVar18;
  undefined8 uVar19;
  undefined **ppuVar20;
  long ****pppplVar21;
  byte ****ppppbVar22;
  long ****pppplVar23;
  uint uVar24;
  uint *puVar25;
  long lVar26;
  long *******ppppppplVar27;
  long ******pppppplVar28;
  int *piVar29;
  byte *pbVar30;
  ulong uVar31;
  code *pcVar32;
  undefined *puVar33;
  uint uVar34;
  undefined8 uVar35;
  long lVar36;
  undefined8 *puVar37;
  undefined8 *puVar38;
  long *plVar39;
  long ********pppppppplVar40;
  long lVar41;
  long *********ppppppppplVar42;
  undefined8 *puVar43;
  undefined8 *puVar44;
  ulong uVar45;
  long ********pppppppplVar46;
  undefined8 *puVar47;
  long ********pppppppplVar48;
  long *plVar49;
  uint uVar50;
  ulong uVar51;
  undefined4 uVar52;
  undefined4 extraout_s0;
  undefined4 extraout_s0_00;
  undefined4 extraout_s0_01;
  undefined4 uVar53;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  undefined4 extraout_var_01;
  undefined8 extraout_var_02;
  undefined8 extraout_var_03;
  undefined8 extraout_var_04;
  undefined1 auVar54 [16];
  undefined **local_170;
  long ****local_168;
  undefined ***local_150;
  undefined **local_140;
  ulong local_138;
  long ********local_130;
  long ********local_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined4 local_110;
  undefined4 uStack_10c;
  undefined2 local_108;
  ulong local_f8;
  long ***local_f0;
  ulong local_e8;
  undefined **local_e0;
  long ********local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  long ********local_c0;
  long ********local_b8;
  long *local_b0;
  long ********local_88;
  long *local_80;
  undefined4 local_64;
  
  uVar24 = (uint)param_11;
  *param_4 = &PTR_FUN_71050ae8d8;
  param_4[1] = 0;
  uVar52 = (undefined4)param_10;
  param_4[0xc] = 0;
  param_4[0xd] = 0x1ffffffff;
  uVar53 = (undefined4)param_9;
  *(undefined1 *)(param_4 + 0xb) = 0;
  *(undefined1 *)(param_4 + 0xe) = 1;
  param_4[0x11] = param_7;
  param_4[2] = 0;
  param_4[3] = 0;
  param_4[9] = 0;
  param_4[10] = 0;
  param_4[0xf] = param_5;
  param_4[0x10] = param_6;
  pppplVar23 = param_8;
  puVar10 = (undefined8 *)FUN_710392e290(0x10,8,param_6,param_7,param_8,param_9,param_10,param_11);
  uVar19 = extraout_x1;
  if (puVar10 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_130 = (long ********)((ulong)local_130 & 0xffffffff00000000);
      local_d0 = (undefined **)&DAT_00000008;
      param_6 = (long ****)&local_d0;
      auVar54 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_130);
      uVar19 = auVar54._8_8_;
      if (((auVar54._0_8_ & 1) != 0) &&
         (puVar10 = (undefined8 *)
                    FUN_710392e290(0x10,8,param_6,param_7,pppplVar23,param_9,param_10,param_11),
         uVar19 = extraout_x1_00, puVar10 != (undefined8 *)0x0)) goto LAB_7101d031d8;
    }
    puVar10 = (undefined8 *)0x0;
  }
LAB_7101d031d8:
  FUN_7103773200(puVar10,uVar19,param_6,param_7,pppplVar23,param_9,param_10,param_11);
  param_4[0x12] = puVar10;
  puVar10 = (undefined8 *)
            FUN_710392e290(0x10,8,param_6,param_7,pppplVar23,param_9,param_10,param_11);
  uVar19 = extraout_x1_01;
  if (puVar10 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_130 = (long ********)((ulong)local_130 & 0xffffffff00000000);
      local_d0 = (undefined **)&DAT_00000008;
      param_6 = (long ****)&local_d0;
      auVar54 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_130);
      uVar19 = auVar54._8_8_;
      if (((auVar54._0_8_ & 1) != 0) &&
         (puVar10 = (undefined8 *)
                    FUN_710392e290(0x10,8,param_6,param_7,pppplVar23,param_9,param_10,param_11),
         uVar19 = extraout_x1_02, puVar10 != (undefined8 *)0x0)) goto LAB_7101d03240;
    }
    puVar10 = (undefined8 *)0x0;
  }
LAB_7101d03240:
  FUN_7103773200(puVar10,uVar19,param_6,param_7,pppplVar23,param_9,param_10,param_11);
  param_4[0x13] = puVar10;
  puVar10 = (undefined8 *)
            FUN_710392e290(0x10,8,param_6,param_7,pppplVar23,param_9,param_10,param_11);
  uVar19 = extraout_x1_03;
  if (puVar10 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_130 = (long ********)((ulong)local_130 & 0xffffffff00000000);
      local_d0 = (undefined **)&DAT_00000008;
      param_6 = (long ****)&local_d0;
      auVar54 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_130);
      uVar19 = auVar54._8_8_;
      if (((auVar54._0_8_ & 1) != 0) &&
         (puVar10 = (undefined8 *)
                    FUN_710392e290(0x10,8,param_6,param_7,pppplVar23,param_9,param_10,param_11),
         uVar19 = extraout_x1_04, puVar10 != (undefined8 *)0x0)) goto LAB_7101d032a8;
    }
    puVar10 = (undefined8 *)0x0;
  }
LAB_7101d032a8:
  FUN_7103773200(puVar10,uVar19,param_6,param_7,pppplVar23,param_9,param_10,param_11);
  pppppppplVar40 = (long ********)(param_4 + 0x1e);
  *pppppppplVar40 = (long *******)0x0;
  param_4[0x14] = puVar10;
  param_4[0x15] = 0;
  pppppppplVar46 = (long ********)(param_4 + 0x18);
  *pppppppplVar46 = (long *******)0x0;
  pppppppplVar48 = (long ********)(param_4 + 0x1b);
  *pppppppplVar48 = (long *******)0x0;
  param_4[0x28] = param_4 + 0x28;
  param_4[0x29] = param_4 + 0x28;
  *(undefined2 *)(param_4 + 0x2b) = 1;
  param_4[0x25] = 0;
  param_4[0x26] = 0;
  *(undefined4 *)(param_4 + 0x27) = uVar53;
  *(undefined4 *)((long)param_4 + 0x13c) = uVar52;
  param_4[0x2a] = 0;
  param_4[0x2c] = &PTR_FUN_710523d9a8;
  param_4[0x23] = 0;
  param_4[0x24] = 0;
  param_4[0x21] = 0;
  param_4[0x22] = 0;
  param_4[0x1f] = 0;
  param_4[0x20] = 0;
  param_4[0x1c] = 0;
  param_4[0x1d] = 0;
  param_4[0x19] = 0;
  param_4[0x1a] = 0;
  param_4[0x16] = 0;
  param_4[0x17] = 0;
  puVar10 = (undefined8 *)
            FUN_710392e290(0x10,0x20,param_6,param_7,pppplVar23,param_9,param_10,param_11);
  if (puVar10 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_130 = (long ********)((ulong)local_130 & 0xffffffff00000000);
      local_d0 = (undefined **)&SUB_00000020;
      param_6 = (long ****)&local_d0;
      uVar11 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_130);
      if (((uVar11 & 1) != 0) &&
         (puVar10 = (undefined8 *)
                    FUN_710392e290(0x10,0x20,param_6,param_7,pppplVar23,param_9,param_10,param_11),
         puVar10 != (undefined8 *)0x0)) goto LAB_7101d0336c;
    }
    puVar10 = (undefined8 *)0x0;
  }
LAB_7101d0336c:
  puVar10[2] = 0;
  puVar10[3] = 0;
  *puVar10 = 0;
  puVar10[1] = 0;
  param_4[0x2d] = puVar10;
  param_4[0x2e] = &PTR_FUN_710523d9a8;
  puVar10 = (undefined8 *)
            FUN_710392e290(0x10,0x20,param_6,param_7,pppplVar23,param_9,param_10,param_11);
  if (puVar10 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_130 = (long ********)((ulong)local_130 & 0xffffffff00000000);
      local_d0 = (undefined **)&SUB_00000020;
      param_6 = (long ****)&local_d0;
      uVar11 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_130);
      if (((uVar11 & 1) != 0) &&
         (puVar10 = (undefined8 *)
                    FUN_710392e290(0x10,0x20,param_6,param_7,pppplVar23,param_9,param_10,param_11),
         puVar10 != (undefined8 *)0x0)) goto LAB_7101d033d8;
    }
    puVar10 = (undefined8 *)0x0;
  }
LAB_7101d033d8:
  puVar10[2] = 0;
  puVar10[3] = 0;
  *puVar10 = 0;
  puVar10[1] = 0;
  param_4[0x2f] = puVar10;
  param_4[0x30] = &PTR_FUN_710523d9a8;
  puVar10 = (undefined8 *)
            FUN_710392e290(0x10,0x20,param_6,param_7,pppplVar23,param_9,param_10,param_11);
  if (puVar10 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_130 = (long ********)((ulong)local_130 & 0xffffffff00000000);
      local_d0 = (undefined **)&SUB_00000020;
      pppplVar21 = (long ****)&local_d0;
      uVar11 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_130);
      if (((uVar11 & 1) != 0) &&
         (puVar10 = (undefined8 *)
                    FUN_710392e290(0x10,0x20,pppplVar21,param_7,pppplVar23,param_9,param_10,param_11
                                  ), puVar10 != (undefined8 *)0x0)) goto LAB_7101d03440;
    }
    puVar10 = (undefined8 *)0x0;
  }
LAB_7101d03440:
  puVar10[2] = 0;
  puVar10[3] = 0;
  *puVar10 = 0;
  puVar10[1] = 0;
  param_4[0x37] = FUN_7101d04e50;
  param_4[0x38] = 0;
  param_4[0x42] = 0;
  param_4[0x44] = 0;
  param_4[0x46] = 0;
  param_4[0x48] = 0;
  param_4[0x4a] = 0;
  *(undefined4 *)((long)param_4 + 0x2a4) = 0;
  param_4[0x39] = FUN_7101d04e60;
  param_4[0x3a] = 0;
  param_4[0x3b] = FUN_7101d052d0;
  param_4[0x3c] = 0;
  param_4[0x3f] = FUN_7101d05a90;
  param_4[0x40] = 0;
  param_4[0x41] = FUN_7101d06650;
  param_4[0x43] = FUN_7101d06be0;
  param_4[0x45] = FUN_7101d06fe0;
  param_4[0x47] = FUN_7101d07270;
  param_4[0x49] = FUN_7101d076a0;
  param_4[0x3d] = FUN_7101d05660;
  param_4[0x3e] = 0;
  param_4[0x31] = puVar10;
  param_4[0x32] = param_4;
  param_4[0x35] = 0;
  param_4[0x36] = 0;
  param_4[0x33] = 0;
  param_4[0x34] = 0;
  *(undefined8 *)((long)param_4 + 0x29c) = 0;
  *(undefined8 *)((long)param_4 + 0x294) = 0;
  *(undefined8 *)((long)param_4 + 0x28c) = 0;
  *(undefined8 *)((long)param_4 + 0x284) = 0;
  *(undefined8 *)((long)param_4 + 0x27c) = 0;
  *(undefined8 *)((long)param_4 + 0x274) = 0;
  *(undefined8 *)((long)param_4 + 0x26c) = 0;
  *(undefined8 *)((long)param_4 + 0x25c) = 0;
  *(undefined8 *)((long)param_4 + 0x264) = 0;
  *(undefined4 *)(param_4 + 0x55) = 0xffffffff;
  *(undefined4 *)((long)param_4 + 0x2ac) = 0;
  *(undefined4 *)(param_4 + 0x56) = 0xffffffff;
  *(undefined1 *)((long)param_4 + 0x2b4) = 0;
  *(undefined4 *)(param_4 + 0x4b) = 0;
  FUN_7101d076b0(param_4 + 0x32);
  puVar25 = *(uint **)(DAT_7105329740 + 8);
  if (*(long *)(puVar25 + 0x22) == *(long *)(puVar25 + 0x20)) goto LAB_7101d04e34;
  uVar50 = *puVar25;
  if (*(uint *)(*(long *)(puVar25 + 0x20) + 0x814) < 2) {
    if (6 < uVar50) goto LAB_7101d04e40;
    puVar33 = &DAT_7104545528;
  }
  else {
    if (6 < uVar50) goto LAB_7101d04e40;
    puVar33 = &DAT_71045454f0;
  }
  local_f8 = *(ulong *)(puVar33 + (long)(int)uVar50 * 8);
  puVar10 = param_4 + 0x13;
  FUN_71032cbf30(param_4 + 0x12,*param_5,&local_f8,(byte ****)0x1,pppplVar23,param_9,param_10,
                 param_11);
  FUN_71032cbf30(puVar10,*param_5,&local_f8,(byte ****)0x1,pppplVar23,param_9,param_10,param_11);
  lVar26 = *(long *)(*(long *)(DAT_7105329740 + 8) + 0x80);
  if (*(long *)(*(long *)(DAT_7105329740 + 8) + 0x88) == lVar26) goto LAB_7101d04e34;
  ppppbVar22 = (byte ****)0x1;
  local_d0 = (undefined **)(long ********)0x4f3c72ccda;
  if (*(uint *)(lVar26 + 0x814) < 2) {
    local_d0 = (undefined **)(long ********)0x4a7ee45c24;
  }
  puVar1 = param_4 + 0x14;
  FUN_71032cbf30(puVar1,*param_5,&local_d0,(byte ****)0x1,pppplVar23,param_9,param_10,param_11);
  FUN_71037760f0(**(long **)param_4[0x12],0);
  memset(*(void **)(**(long **)param_4[0x12] + 0x600),0,0x198);
  FUN_71037760f0(**(long **)param_4[0x13],0);
  uVar19 = 0x198;
  memset(*(void **)(**(long **)param_4[0x13] + 0x600),0,0x198);
  FUN_7103776910(&local_d0,*(long *)param_4[0x12] + 8,(long ****)"set_camera_entry",uVar19,
                 ppppbVar22,pppplVar23,param_9,param_10,param_11);
  pppppppplVar2 = local_c8;
  if (param_4 + 0x2c != &local_d0) {
    local_c8 = (long ********)0x0;
    uVar11 = param_4[0x2d];
    param_4[0x2d] = pppppppplVar2;
    if (uVar11 != 0) {
      FUN_710392eb40(uVar11);
    }
  }
  pppppppplVar2 = local_c8;
  local_d0 = &PTR_FUN_710523d9a8;
  local_c8 = (long ********)0x0;
  if (pppppppplVar2 != (long ********)0x0) {
    FUN_710392eb40((ulong)pppppppplVar2);
  }
  FUN_7103776910(&local_d0,*(long *)param_4[0x12] + 8,(long ****)"set_pos_starter_00",uVar19,
                 ppppbVar22,pppplVar23,param_9,param_10,param_11);
  uVar11 = (ulong)local_c8;
  if (param_4 + 0x2e != &local_d0) {
    local_c8 = (long ********)0x0;
    uVar12 = param_4[0x2f];
    param_4[0x2f] = uVar11;
    if (uVar12 != 0) {
      FUN_710392eb40(uVar12);
    }
  }
  uVar11 = (ulong)local_c8;
  local_d0 = &PTR_FUN_710523d9a8;
  local_c8 = (long ********)0x0;
  if (uVar11 != 0) {
    FUN_710392eb40(uVar11);
  }
  FUN_7103776910(&local_d0,*(long *)param_4[0x12] + 8,(long ****)"set_pos_starter_01",uVar19,
                 ppppbVar22,pppplVar23,param_9,param_10,param_11);
  uVar11 = (ulong)local_c8;
  if (param_4 + 0x30 != &local_d0) {
    local_c8 = (long ********)0x0;
    uVar12 = param_4[0x31];
    param_4[0x31] = uVar11;
    if (uVar12 != 0) {
      FUN_710392eb40(uVar12);
    }
  }
  uVar11 = (ulong)local_c8;
  pppppppplVar2 = (long ********)(param_4 + 0x21);
  plVar39 = param_4 + 0x24;
  local_d0 = &PTR_FUN_710523d9a8;
  local_c8 = (long ********)0x0;
  if (uVar11 != 0) {
    FUN_710392eb40(uVar11);
  }
  uVar11 = 0;
  do {
    lVar26 = *(long *)(*(long *)(DAT_7105329740 + 8) + 0x80);
    uVar12 = (*(long *)(*(long *)(DAT_7105329740 + 8) + 0x88) - lVar26 >> 5) * 0xfc0fc0fc0fc0fc1;
    if (uVar11 < (uVar12 & 0xffffffff)) {
      if (uVar12 < uVar11 || uVar12 - uVar11 == 0) goto LAB_7101d04e34;
      FUN_7103776910(&local_d0,*(long *)*puVar10 + 8,(long ****)"set_pos_panel_%02d",
                     uVar11 & 0xffffffff,ppppbVar22,pppplVar23,param_9,param_10,param_11);
      pppppppplVar15 = local_c8;
      ppppppplVar27 = *local_c8;
      if (ppppppplVar27 == (long *******)0x0) {
        uVar52 = (undefined4)_ConstantZero;
        uVar53 = (undefined4)((ulong)_ConstantZero >> 0x20);
        uVar19 = uRam0000007107459008;
      }
      else {
        uVar52 = *(undefined4 *)(ppppppplVar27 + 6);
        uVar53 = *(undefined4 *)((long)ppppppplVar27 + 0x34);
        uVar19 = 0;
      }
      local_d0 = &PTR_FUN_710523d9a8;
      local_c8 = (long ********)0x0;
      if (pppppppplVar15 != (long ********)0x0) {
        FUN_710392eb40((ulong)pppppppplVar15);
      }
      ppuVar20 = (undefined **)(uVar11 & 0xffffffff);
      FUN_7103776640(&local_e0,*(long *)*puVar1 + 8,(byte ****)"set_panel_%02d",ppuVar20,ppppbVar22,
                     pppplVar23,param_9,param_10,param_11);
      lVar41 = lVar26 + uVar11 * 0x820;
      if (*(char *)(lVar41 + 0x810) != '\0') {
        if ((local_d8[1] != (long *******)0x0) &&
           (pppppplVar28 = local_d8[1][3], pppppplVar28 != (long ******)0x0)) {
          *(byte *)(pppppplVar28 + 0xb) = *(byte *)(pppppplVar28 + 0xb) & 0xfe;
        }
        FUN_7103776640(&local_d0,*(long *)*puVar1 + 8,(byte ****)"set_panel_my",ppuVar20,ppppbVar22,
                       pppplVar23,param_9,param_10,param_11);
        pppppppplVar17 = local_c8;
        pppppppplVar15 = local_d8;
        local_c8 = (long ********)0x0;
        local_d8 = pppppppplVar17;
        if (pppppppplVar15 != (long ********)0x0) {
          ppppppplVar27 = pppppppplVar15[3];
          pppppppplVar15[2] = (long *******)&PTR_FUN_710523d9a8;
          pppppppplVar15[3] = (long *******)0x0;
          if (ppppppplVar27 != (long *******)0x0) {
            FUN_710392eb40((ulong)ppppppplVar27);
          }
          FUN_710392eb40((ulong)pppppppplVar15);
        }
        local_d0 = &PTR_FUN_710523d988;
        local_c8 = (long ********)0x0;
      }
      FUN_7103776390(&local_140,&local_e0,(long ****)ppuVar20,ppppbVar22,pppplVar23,param_9,param_10
                     ,param_11);
      piVar29 = *(int **)(DAT_7105329740 + 8);
      if (*(long *)(piVar29 + 0x22) == *(long *)(piVar29 + 0x20)) goto LAB_7101d04e34;
      puVar33 = &DAT_7104470da0;
      if (*(uint *)(*(long *)(piVar29 + 0x20) + 0x814) < 2) {
        puVar33 = &DAT_7104470800;
      }
      uVar50 = *(uint *)(puVar33 + (long)*piVar29 * 4);
      FUN_7103776390(&local_130,&local_140,(long ****)ppuVar20,ppppbVar22,pppplVar23,param_9,
                     param_10,param_11);
      cVar6 = *(char *)(lVar26 + uVar11 * 0x820 + 0x811);
      uStack_10c = 2;
      local_110 = CONCAT31(local_110._1_3_,cVar6);
      local_108 = (ushort)*(byte *)(lVar41 + 0x810) << 8;
      if (cVar6 == '\0') {
        pcVar18 = "side_r";
      }
      else {
        pcVar18 = "side_l";
      }
      local_120 = CONCAT44(uVar53,uVar52);
      uStack_118 = uVar19;
      FUN_7103778300(0x3f800000,(long)local_128,(long)pcVar18);
      switch(uVar50) {
      case 0:
        pcVar18 = "size_h4";
        break;
      case 1:
      case 4:
        pcVar18 = "size_h3";
        break;
      case 2:
      case 5:
        pcVar18 = "size_h2";
        break;
      case 3:
      case 6:
        pcVar18 = "size_h1";
        break;
      default:
        goto switchD_7101d03a70_default;
      }
      FUN_7103778300(0x3f800000,(long)local_128,(long)pcVar18);
switchD_7101d03a70_default:
      lVar41 = lVar26 + uVar11 * 0x820;
      puVar25 = (uint *)(lVar41 + 0x814);
      if (*(int *)(lVar41 + 0x814) != 0) {
        ppppppppplVar42 = (long *********)(lVar26 + uVar11 * 0x820);
        uVar34 = 0;
        do {
          FUN_7102398db0((uint *)&local_d0,(long)ppppppppplVar42,uVar34);
          FUN_7103776910(&local_88,(long)&local_130,(long ****)"set_txt_name_%02d",(ulong)uVar34,
                         ppppbVar22,pppplVar23,param_9,param_10,param_11);
          plVar13 = local_80;
          if (*(long **)((long)local_80 + 0x10) != (long *)0x0) {
            ppppbVar22 = (byte ****)0x1;
            FUN_71037a2270(*(long **)((long)local_80 + 0x10),(ushort *)&local_c8,0xffffffff,1);
          }
          local_88 = (long ********)&PTR_FUN_710523d9a8;
          local_80 = (long *)0x0;
          if (plVar13 != (long *)0x0) {
            FUN_710392eb40((ulong)plVar13);
          }
          ppuVar20 = (undefined **)(ulong)uVar34;
          FUN_7103776910(&local_88,(long)&local_130,(long ****)"set_txt_name_replay_%02d",ppuVar20,
                         ppppbVar22,pppplVar23,param_9,param_10,param_11);
          plVar13 = local_80;
          if (*(long **)((long)local_80 + 0x10) != (long *)0x0) {
            ppppbVar22 = (byte ****)0x1;
            ppuVar20 = (undefined **)&DAT_ffffffff;
            FUN_71037a2270(*(long **)((long)local_80 + 0x10),(ushort *)&local_c8,0xffffffff,1);
          }
          local_88 = (long ********)&PTR_FUN_710523d9a8;
          local_80 = (long *)0x0;
          if (plVar13 != (long *)0x0) {
            FUN_710392eb40((ulong)plVar13);
          }
          uVar34 = uVar34 + 1;
        } while (uVar34 < *puVar25);
        uVar34 = 3;
        if ((uVar50 | 4) == 4) {
          uVar34 = 4;
        }
        if (*puVar25 != 0) {
          uVar50 = 0;
          do {
            pppplVar21 = (long ****)(ulong)uVar50;
            FUN_7103776910(&local_d0,(long)&local_130,(long ****)"set_rep_fighter_%02d",pppplVar21,
                           ppppbVar22,pppplVar23,param_9,param_10,param_11);
            local_88 = (long ********)&PTR_FUN_710523d9a8;
            plVar13 = (long *)FUN_710392e290(0x10,0x20,pppplVar21,ppppbVar22,pppplVar23,param_9,
                                             param_10,param_11);
            uVar52 = extraout_s0;
            uVar53 = extraout_var;
            uVar19 = extraout_var_02;
            if (plVar13 == (long *)0x0) {
              if (DAT_7105332f00 != (long *)0x0) {
                local_64 = 0;
                local_f0 = (long ***)&SUB_00000020;
                pppplVar21 = &local_f0;
                uVar12 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_64);
                uVar52 = extraout_s0_00;
                uVar53 = extraout_var_00;
                uVar19 = extraout_var_03;
                if (((uVar12 & 1) != 0) &&
                   (plVar13 = (long *)FUN_710392e290(0x10,0x20,pppplVar21,ppppbVar22,pppplVar23,
                                                     param_9,param_10,param_11),
                   uVar52 = extraout_s0_01, uVar53 = extraout_var_01, uVar19 = extraout_var_04,
                   plVar13 != (long *)0x0)) goto LAB_7101d03c18;
              }
              plVar13 = (long *)0x0;
            }
LAB_7101d03c18:
            pppppppplVar15 = local_c8;
            plVar13[2] = 0;
            plVar13[3] = 0;
            pppplVar23 = (long ****)0x1;
            *plVar13 = 0;
            plVar13[1] = 0;
            ppppbVar22 = (byte ****)(ulong)uVar50;
            *plVar13 = (long)*local_c8;
            plVar13[1] = (long)local_c8[1];
            plVar13[2] = (long)local_c8[2];
            param_9 = (ulong)uVar34;
            plVar13[3] = (long)local_c8[3];
            auVar54._4_4_ = uVar53;
            auVar54._0_4_ = uVar52;
            ppuVar20 = (undefined **)ppppppppplVar42;
            auVar54._8_8_ = uVar19;
            local_80 = plVar13;
            FUN_710239d920(auVar54,param_2,param_3,&local_88,param_5,(long)ppppppppplVar42,
                           ppppbVar22,(long ****)0x1,param_9,param_10,param_11);
            plVar13 = local_80;
            local_88 = (long ********)&PTR_FUN_710523d9a8;
            local_80 = (long *)0x0;
            if (plVar13 != (long *)0x0) {
              FUN_710392eb40((ulong)plVar13);
            }
            local_d0 = &PTR_FUN_710523d9a8;
            local_c8 = (long ********)0x0;
            if (pppppppplVar15 != (long ********)0x0) {
              FUN_710392eb40((ulong)pppppppplVar15);
            }
            uVar50 = uVar50 + 1;
          } while (uVar50 < *puVar25);
        }
      }
      if (*puVar25 == 1) {
        if (*(int *)(lVar26 + uVar11 * 0x820 + 0x30) == 2) {
          pcVar18 = "player_fp";
LAB_7101d03d08:
          FUN_7103778300(0x3f800000,(long)local_128,(long)pcVar18);
        }
      }
      else if (*(int *)(lVar26 + uVar11 * 0x820 + 0x1f8) == 2) {
        pcVar18 = "player_num_fp";
        goto LAB_7101d03d08;
      }
      if (local_108._1_1_ != '\0') {
        if (*(int *)(lVar26 + uVar11 * 0x820 + 0x30) == 2) {
          FUN_7103776910(&local_88,(long)&local_130,(long ****)"set_txt_player_id",ppuVar20,
                         ppppbVar22,pppplVar23,param_9,param_10,param_11);
          uVar34 = 99;
          uVar50 = 0x811c9dc5;
          local_c8 = (long ********)CONCAT17(local_c8._7_1_,0x70665f6e6d63);
          pbVar30 = (byte *)((long)&local_c8 + 1);
          do {
            uVar50 = uVar50 * 0x89 ^ uVar34;
            uVar34 = (uint)*pbVar30;
            pbVar30 = pbVar30 + 1;
          } while (uVar34 != 0);
          local_d0 = (undefined **)CONCAT44(6,uVar50);
        }
        else {
          FUN_7103776910(&local_88,(long)&local_130,(long ****)"set_txt_player_id",ppuVar20,
                         ppppbVar22,pppplVar23,param_9,param_10,param_11);
          FUN_71003a4ca0((uint *)&local_d0,"cmn_%dp",1,ppuVar20,ppppbVar22,pppplVar23,param_9,
                         param_10,param_11);
        }
        FUN_710377a120((long)&local_88,(char *)&local_c8,ppuVar20,ppppbVar22,pppplVar23,param_9,
                       param_10,param_11);
        plVar13 = local_80;
        local_88 = (long ********)&PTR_FUN_710523d9a8;
        local_80 = (long *)0x0;
        if (plVar13 != (long *)0x0) {
          FUN_710392eb40((ulong)plVar13);
        }
        if (1 < *puVar25) {
          FUN_7103776910(&local_88,(long)&local_130,(long ****)"set_txt_fp_id",ppuVar20,ppppbVar22,
                         pppplVar23,param_9,param_10,param_11);
          uVar34 = 99;
          uVar50 = 0x811c9dc5;
          local_c8 = (long ********)CONCAT17(local_c8._7_1_,0x70665f6e6d63);
          pbVar30 = (byte *)((long)&local_c8 + 1);
          do {
            uVar50 = uVar50 * 0x89 ^ uVar34;
            uVar34 = (uint)*pbVar30;
            pbVar30 = pbVar30 + 1;
          } while (uVar34 != 0);
          local_d0 = (undefined **)CONCAT44(6,uVar50);
          FUN_710377a120((long)&local_88,(char *)&local_c8,ppuVar20,ppppbVar22,pppplVar23,param_9,
                         param_10,param_11);
          plVar13 = local_80;
          local_88 = (long ********)&PTR_FUN_710523d9a8;
          local_80 = (long *)0x0;
          if (plVar13 != (long *)0x0) {
            FUN_710392eb40((ulong)plVar13);
          }
        }
      }
      FUN_7103778300(0x3f800000,(long)local_128,0x71043cf67d);
      uStack_10c = 2;
      FUN_7103778300(0x3f800000,(long)local_128,0x710432a22d);
      uVar12 = local_138;
      local_140 = &PTR_FUN_710523d988;
      local_138 = 0;
      if (uVar12 != 0) {
        uVar14 = *(ulong *)(uVar12 + 0x18);
        *(undefined ***)(uVar12 + 0x10) = &PTR_FUN_710523d9a8;
        *(undefined8 *)(uVar12 + 0x18) = 0;
        if (uVar14 != 0) {
          FUN_710392eb40(uVar14);
        }
        FUN_710392eb40(uVar12);
      }
      puVar4 = (undefined8 *)param_4[0x16];
      if (puVar4 == (undefined8 *)param_4[0x17]) {
        lVar41 = param_4[0x15];
        lVar26 = (long)puVar4 - lVar41 >> 4;
        uVar14 = 0x555555555555555;
        uVar12 = lVar26 * -0x5555555555555555 + 1;
        if (0x555555555555555 < uVar12) {
                    /* WARNING: Subroutine does not return */
          std::__vector_base_common<true>::__throw_length_error();
        }
        lVar41 = (long)param_4[0x17] - lVar41 >> 4;
        if ((ulong)(lVar41 * -0x5555555555555555) < 0x2aaaaaaaaaaaaaa) {
          uVar51 = lVar41 * 0x5555555555555556;
          uVar14 = uVar12;
          if (uVar12 <= uVar51) {
            uVar14 = uVar51;
          }
          if (uVar14 != 0) goto LAB_7101d03f74;
LAB_7101d03fd0:
          lVar41 = 0;
        }
        else {
LAB_7101d03f74:
          pppppppplVar15 = (long ********)(uVar14 * 0x30);
          if (pppppppplVar15 == (long ********)0x0) {
            pppppppplVar15 = (long ********)0x1;
          }
          lVar41 = FUN_710392e290(0x10,pppppppplVar15,(long ****)ppuVar20,ppppbVar22,pppplVar23,
                                  param_9,param_10,param_11);
          if (lVar41 == 0) {
            if (DAT_7105332f00 != (long *)0x0) {
              local_88 = (long ********)((ulong)local_88 & 0xffffffff00000000);
              ppuVar20 = (undefined **)&local_d0;
              local_d0 = (undefined **)pppppppplVar15;
              uVar12 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_88);
              if (((uVar12 & 1) != 0) &&
                 (lVar41 = FUN_710392e290(0x10,pppppppplVar15,(long ****)ppuVar20,ppppbVar22,
                                          pppplVar23,param_9,param_10,param_11), lVar41 != 0))
              goto LAB_7101d03fd4;
            }
            goto LAB_7101d03fd0;
          }
        }
LAB_7101d03fd4:
        puVar37 = (undefined8 *)(lVar41 + lVar26 * 0x10);
        FUN_7103776390(puVar37,&local_130,(long ****)ppuVar20,ppppbVar22,pppplVar23,param_9,param_10
                       ,param_11);
        *(short *)(puVar37 + 5) = local_108;
        puVar37[3] = uStack_118;
        puVar37[4] = CONCAT44(uStack_10c,local_110);
        puVar37[2] = local_120;
        puVar44 = (undefined8 *)param_4[0x15];
        puVar4 = puVar37 + 6;
        puVar38 = puVar37;
        puVar43 = (undefined8 *)param_4[0x16];
        puVar47 = puVar44;
        if ((undefined8 *)param_4[0x16] != puVar44) {
          do {
            puVar47 = puVar43 + -6;
            puVar37 = puVar38 + -6;
            FUN_7103776390(puVar37,puVar47,(long ****)ppuVar20,ppppbVar22,pppplVar23,param_9,
                           param_10,param_11);
            uVar7 = *(undefined2 *)(puVar43 + -1);
            puVar38[-3] = puVar43[-3];
            uVar19 = puVar43[-4];
            uVar35 = puVar43[-2];
            *(undefined2 *)(puVar38 + -1) = uVar7;
            puVar38[-2] = uVar35;
            puVar38[-4] = uVar19;
            puVar38 = puVar37;
            puVar43 = puVar47;
          } while (puVar44 != puVar47);
          puVar44 = (undefined8 *)param_4[0x15];
          puVar47 = (undefined8 *)param_4[0x16];
        }
        param_4[0x15] = puVar37;
        param_4[0x16] = puVar4;
        param_4[0x17] = lVar41 + uVar14 * 0x30;
        while (puVar47 != puVar44) {
          puVar47[-6] = &PTR_FUN_710523d988;
          uVar12 = puVar47[-5];
          puVar47[-5] = 0;
          if (uVar12 != 0) {
            uVar14 = *(ulong *)(uVar12 + 0x18);
            *(undefined ***)(uVar12 + 0x10) = &PTR_FUN_710523d9a8;
            *(undefined8 *)(uVar12 + 0x18) = 0;
            if (uVar14 != 0) {
              FUN_710392eb40(uVar14);
            }
            FUN_710392eb40(uVar12);
          }
          puVar47 = puVar47 + -6;
        }
        if (puVar44 != (undefined8 *)0x0) {
          FUN_710392eb40((ulong)puVar44);
        }
      }
      else {
        FUN_7103776390(puVar4,&local_130,(long ****)ppuVar20,ppppbVar22,pppplVar23,param_9,param_10,
                       param_11);
        *(short *)(puVar4 + 5) = local_108;
        puVar4[3] = uStack_118;
        puVar4[4] = CONCAT44(uStack_10c,local_110);
        puVar4[2] = local_120;
        param_4[0x16] = param_4[0x16] + 0x30;
      }
      pppppppplVar15 = local_128;
      local_130 = (long ********)&PTR_FUN_710523d988;
      local_128 = (long ********)0x0;
      if (pppppppplVar15 != (long ********)0x0) {
        uVar12 = *(ulong *)((long)pppppppplVar15 + 0x18);
        *(undefined ***)((long)pppppppplVar15 + 0x10) = &PTR_FUN_710523d9a8;
        *(undefined8 *)((long)pppppppplVar15 + 0x18) = 0;
        if (uVar12 != 0) {
          FUN_710392eb40(uVar12);
        }
        FUN_710392eb40((ulong)pppppppplVar15);
      }
      pppppppplVar15 = local_d8;
      local_e0 = &PTR_FUN_710523d988;
      local_d8 = (long ********)0x0;
    }
    else {
      ppuVar20 = (undefined **)(uVar11 & 0xffffffff);
      FUN_7103776640(&local_d0,*(long *)*puVar1 + 8,(byte ****)"set_panel_%02d",ppuVar20,ppppbVar22,
                     pppplVar23,param_9,param_10,param_11);
      pppppppplVar15 = local_c8;
      if ((local_c8[1] != (long *******)0x0) &&
         (pppppplVar28 = local_c8[1][3], pppppplVar28 != (long ******)0x0)) {
        *(byte *)(pppppplVar28 + 0xb) = *(byte *)(pppppplVar28 + 0xb) & 0xfe;
      }
      local_d0 = &PTR_FUN_710523d988;
      local_c8 = (long ********)0x0;
    }
    if (pppppppplVar15 != (long ********)0x0) {
      ppppppplVar27 = pppppppplVar15[3];
      pppppppplVar15[2] = (long *******)&PTR_FUN_710523d9a8;
      pppppppplVar15[3] = (long *******)0x0;
      if (ppppppplVar27 != (long *******)0x0) {
        FUN_710392eb40((ulong)ppppppplVar27);
      }
      FUN_710392eb40((ulong)pppppppplVar15);
    }
    uVar11 = uVar11 + 1;
  } while (uVar11 != 0x40);
  lVar26 = param_4[0x18];
  if ((ulong)((param_4[0x1a] - lVar26 >> 5) * 0x4ec4ec4ec4ec4ec5) < 0x10) {
    lVar41 = param_4[0x19];
    local_b0 = param_4 + 0x1a;
    pppppppplVar15 =
         (long ********)
         FUN_710392e290(0x10,0x1a00,(long ****)ppuVar20,ppppbVar22,pppplVar23,param_9,param_10,
                        param_11);
    if (pppppppplVar15 == (long ********)0x0) {
      if (DAT_7105332f00 != (long *)0x0) {
        local_88 = (long ********)((ulong)local_88 & 0xffffffff00000000);
        local_130 = (long ********)0x1a00;
        ppuVar20 = (undefined **)&local_130;
        uVar11 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_88);
        if (((uVar11 & 1) != 0) &&
           (pppppppplVar15 =
                 (long ********)
                 FUN_710392e290(0x10,0x1a00,(long ****)ppuVar20,ppppbVar22,pppplVar23,param_9,
                                param_10,param_11), pppppppplVar15 != (long ********)0x0))
        goto LAB_7101d041f4;
      }
      pppppppplVar15 = (long ********)0x0;
    }
LAB_7101d041f4:
    local_c8 = pppppppplVar15 + (lVar41 - lVar26 >> 5) * 4;
    local_b8 = pppppppplVar15 + 0x340;
    local_d0 = (undefined **)pppppppplVar15;
    local_c0 = local_c8;
    FUN_7101d08fe0((long *)pppppppplVar46,&local_d0);
    pppppppplVar15 = local_c8;
    pppppppplVar17 = local_c0;
    if (local_c0 != local_c8) {
      do {
        pppppppplVar17 = pppppppplVar17 + -0x34;
        FUN_7101d0d900((long)pppppppplVar17);
      } while (pppppppplVar15 != pppppppplVar17);
      local_c0 = pppppppplVar15;
    }
    if ((long ********)local_d0 != (long ********)0x0) {
      FUN_710392eb40((ulong)local_d0);
    }
  }
  lVar26 = param_4[0x1b];
  if ((ulong)((param_4[0x1d] - lVar26 >> 5) * 0x4ec4ec4ec4ec4ec5) < 8) {
    lVar41 = param_4[0x1c];
    local_b0 = param_4 + 0x1d;
    pppppppplVar15 =
         (long ********)
         FUN_710392e290(0x10,0xd00,(long ****)ppuVar20,ppppbVar22,pppplVar23,param_9,param_10,
                        param_11);
    if (pppppppplVar15 == (long ********)0x0) {
      if (DAT_7105332f00 != (long *)0x0) {
        local_88 = (long ********)((ulong)local_88 & 0xffffffff00000000);
        local_130 = (long ********)0xd00;
        ppuVar20 = (undefined **)&local_130;
        uVar11 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_88);
        if (((uVar11 & 1) != 0) &&
           (pppppppplVar15 =
                 (long ********)
                 FUN_710392e290(0x10,0xd00,(long ****)ppuVar20,ppppbVar22,pppplVar23,param_9,
                                param_10,param_11), pppppppplVar15 != (long ********)0x0))
        goto LAB_7101d042e4;
      }
      pppppppplVar15 = (long ********)0x0;
    }
LAB_7101d042e4:
    local_c8 = pppppppplVar15 + (lVar41 - lVar26 >> 5) * 4;
    local_b8 = pppppppplVar15 + 0x1a0;
    local_d0 = (undefined **)pppppppplVar15;
    local_c0 = local_c8;
    FUN_7101d08fe0((long *)pppppppplVar48,&local_d0);
    pppppppplVar15 = local_c8;
    pppppppplVar17 = local_c0;
    if (local_c0 != local_c8) {
      do {
        pppppppplVar17 = pppppppplVar17 + -0x34;
        FUN_7101d0d900((long)pppppppplVar17);
      } while (pppppppplVar15 != pppppppplVar17);
      local_c0 = pppppppplVar15;
    }
    if ((long ********)local_d0 != (long ********)0x0) {
      FUN_710392eb40((ulong)local_d0);
    }
  }
  lVar26 = param_4[0x1e];
  if ((ulong)((param_4[0x20] - lVar26 >> 5) * 0x4ec4ec4ec4ec4ec5) < 4) {
    lVar41 = param_4[0x1f];
    local_b0 = param_4 + 0x20;
    pppppppplVar15 =
         (long ********)
         FUN_710392e290(0x10,0x680,(long ****)ppuVar20,ppppbVar22,pppplVar23,param_9,param_10,
                        param_11);
    if (pppppppplVar15 == (long ********)0x0) {
      if (DAT_7105332f00 != (long *)0x0) {
        local_88 = (long ********)((ulong)local_88 & 0xffffffff00000000);
        local_130 = (long ********)0x680;
        ppuVar20 = (undefined **)&local_130;
        uVar11 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_88);
        if (((uVar11 & 1) != 0) &&
           (pppppppplVar15 =
                 (long ********)
                 FUN_710392e290(0x10,0x680,(long ****)ppuVar20,ppppbVar22,pppplVar23,param_9,
                                param_10,param_11), pppppppplVar15 != (long ********)0x0))
        goto LAB_7101d043d0;
      }
      pppppppplVar15 = (long ********)0x0;
    }
LAB_7101d043d0:
    local_c8 = pppppppplVar15 + (lVar41 - lVar26 >> 5) * 4;
    local_b8 = pppppppplVar15 + 0xd0;
    local_d0 = (undefined **)pppppppplVar15;
    local_c0 = local_c8;
    FUN_7101d08fe0((long *)pppppppplVar40,&local_d0);
    pppppppplVar15 = local_c8;
    pppppppplVar17 = local_c0;
    if (local_c0 != local_c8) {
      do {
        pppppppplVar17 = pppppppplVar17 + -0x34;
        FUN_7101d0d900((long)pppppppplVar17);
      } while (pppppppplVar15 != pppppppplVar17);
      local_c0 = pppppppplVar15;
    }
    if ((long ********)local_d0 != (long ********)0x0) {
      FUN_710392eb40((ulong)local_d0);
    }
  }
  lVar26 = param_4[0x21];
  if ((ulong)((param_4[0x23] - lVar26 >> 5) * 0x4ec4ec4ec4ec4ec5) < 2) {
    lVar41 = param_4[0x22];
    local_b0 = param_4 + 0x23;
    pppppppplVar15 =
         (long ********)
         FUN_710392e290(0x10,0x340,(long ****)ppuVar20,ppppbVar22,pppplVar23,param_9,param_10,
                        param_11);
    if (pppppppplVar15 == (long ********)0x0) {
      if (DAT_7105332f00 != (long *)0x0) {
        local_88 = (long ********)((ulong)local_88 & 0xffffffff00000000);
        local_130 = (long ********)&DAT_00000340;
        ppuVar20 = (undefined **)&local_130;
        uVar11 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_88);
        if (((uVar11 & 1) != 0) &&
           (pppppppplVar15 =
                 (long ********)
                 FUN_710392e290(0x10,0x340,(long ****)ppuVar20,ppppbVar22,pppplVar23,param_9,
                                param_10,param_11), pppppppplVar15 != (long ********)0x0))
        goto LAB_7101d044cc;
      }
      pppppppplVar15 = (long ********)0x0;
    }
LAB_7101d044cc:
    local_c8 = pppppppplVar15 + (lVar41 - lVar26 >> 5) * 4;
    local_b8 = pppppppplVar15 + 0x68;
    local_d0 = (undefined **)pppppppplVar15;
    local_c0 = local_c8;
    FUN_7101d08fe0((long *)pppppppplVar2,&local_d0);
    pppppppplVar15 = local_c8;
    pppppppplVar17 = local_c0;
    if (local_c0 != local_c8) {
      do {
        pppppppplVar17 = pppppppplVar17 + -0x34;
        FUN_7101d0d900((long)pppppppplVar17);
      } while (pppppppplVar15 != pppppppplVar17);
      local_c0 = pppppppplVar15;
    }
    if ((long ********)local_d0 != (long ********)0x0) {
      FUN_710392eb40((ulong)local_d0);
    }
  }
  lVar26 = param_4[0x26];
  if (lVar26 == param_4[0x24]) {
    lVar41 = param_4[0x25];
    local_b0 = param_4 + 0x26;
    pppppppplVar15 =
         (long ********)
         FUN_710392e290(0x10,0x1a0,(long ****)ppuVar20,ppppbVar22,pppplVar23,param_9,param_10,
                        param_11);
    if (pppppppplVar15 == (long ********)0x0) {
      if (DAT_7105332f00 != (long *)0x0) {
        local_88 = (long ********)((ulong)local_88 & 0xffffffff00000000);
        local_130 = (long ********)&DAT_000001a0;
        ppuVar20 = (undefined **)&local_130;
        uVar11 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_88);
        if (((uVar11 & 1) != 0) &&
           (pppppppplVar15 =
                 (long ********)
                 FUN_710392e290(0x10,0x1a0,(long ****)ppuVar20,ppppbVar22,pppplVar23,param_9,
                                param_10,param_11), pppppppplVar15 != (long ********)0x0))
        goto LAB_7101d045ac;
      }
      pppppppplVar15 = (long ********)0x0;
    }
LAB_7101d045ac:
    local_c8 = pppppppplVar15 + (lVar41 - lVar26 >> 5) * 4;
    local_b8 = pppppppplVar15 + 0x34;
    local_d0 = (undefined **)pppppppplVar15;
    local_c0 = local_c8;
    FUN_7101d08fe0(plVar39,&local_d0);
    pppppppplVar15 = local_c8;
    pppppppplVar17 = local_c0;
    if (local_c0 != local_c8) {
      do {
        pppppppplVar17 = pppppppplVar17 + -0x34;
        FUN_7101d0d900((long)pppppppplVar17);
      } while (pppppppplVar15 != pppppppplVar17);
      local_c0 = pppppppplVar15;
    }
    if ((long ********)local_d0 != (long ********)0x0) {
      FUN_710392eb40((ulong)local_d0);
    }
  }
  plVar13 = (long *)(DAT_7105329740 + 8);
  if (*(int *)(*plVar13 + 4) != 0) {
    uVar11 = 0;
LAB_7101d04674:
    local_d0 = (undefined **)pppppppplVar46;
    local_c8 = pppppppplVar48;
    local_c0 = pppppppplVar40;
    local_b8 = pppppppplVar2;
    local_b0 = plVar39;
    if (uVar11 < 5) {
      plVar49 = (long *)(&local_d0)[uVar11];
    }
    else if ((DAT_7105325d40 & 1) == 0) {
      iVar9 = __cxa_guard_acquire(&DAT_7105325d40);
      plVar49 = &DAT_7105325d28;
      if (iVar9 != 0) {
        ppuVar20 = &PTR_LOOP_7104f17000;
        DAT_7105325d28 = 0;
        DAT_7105325d30 = 0;
        DAT_7105325d38 = 0;
        FUN_71000001c0();
        __cxa_guard_release(&DAT_7105325d40);
      }
    }
    else {
      plVar49 = &DAT_7105325d28;
    }
    plVar13 = (long *)(DAT_7105329740 + 8);
    uVar50 = *(uint *)(*plVar13 + 4);
    uVar12 = (ulong)uVar50;
    if (uVar11 < uVar12) {
      lVar41 = *plVar13 + uVar11 * 0x18;
      lVar26 = *(long *)(lVar41 + 8);
      lVar41 = *(long *)(lVar41 + 0x10);
      uVar14 = lVar41 - lVar26;
      if (0 < (int)(uVar14 >> 4)) {
        uVar12 = 0;
        uVar51 = (ulong)(uVar50 - 1);
        do {
          if ((ulong)(lVar41 - lVar26 >> 4) <= uVar12) {
                    /* WARNING: Subroutine does not return */
            std::__vector_base_common<true>::__throw_out_of_range();
          }
          plVar13 = (long *)(lVar26 + uVar12 * 0x10);
          lVar26 = *plVar13;
          plVar13 = (long *)plVar13[1];
          if (plVar13 != (long *)0x0) {
            plVar5 = plVar13 + 1;
            do {
              cVar6 = '\x01';
              bVar8 = (bool)ExclusiveMonitorPass(plVar5,0x10);
              if (bVar8) {
                *plVar5 = *plVar5 + 1;
                cVar6 = ExclusiveMonitorsStatus();
              }
            } while (cVar6 != '\0');
          }
          FUN_7103776640(&local_e0,*(long *)param_4[0x12] + 8,(byte ****)"set_match_%d_%02d",
                         uVar11 & 0xffffffff,uVar12 & 0xffffffff,pppplVar23,param_9,param_10,
                         param_11);
          pppplVar21 = (long ****)(uVar11 & 0xffffffff);
          ppppbVar22 = (byte ****)(uVar12 & 0xffffffff);
          FUN_7103776640(&local_f0,*(long *)*puVar10 + 8,(byte ****)"set_match_%d_%02d",pppplVar21,
                         ppppbVar22,pppplVar23,param_9,param_10,param_11);
          pppppppplVar15 = local_d8;
          uVar16 = local_e8;
          bVar8 = *(int *)(lVar26 + 4) != 0;
          lVar41 = 0x40;
          if (bVar8) {
            lVar41 = 0x18;
          }
          lVar36 = 0x38;
          if (bVar8) {
            lVar36 = 0x10;
          }
          lVar3 = 2;
          if (bVar8) {
            lVar3 = 4;
          }
          uVar45 = *(long *)(lVar26 + lVar41) - *(long *)(lVar26 + lVar36) >> lVar3;
          plVar5 = (long *)plVar49[1];
          if (plVar5 < (long *)plVar49[2]) {
            local_d8 = (long ********)0x0;
            local_d0 = &PTR_FUN_710523d988;
            local_c8 = pppppppplVar15;
            param_9 = (ulong)(uVar11 == uVar51);
            ppuVar20 = (undefined **)&local_130;
            ppppbVar22 = (byte ****)(uVar11 & 0xffffffff);
            pppplVar23 = (long ****)(uVar45 & 0xffffffff);
            local_e8 = 0;
            local_130 = (long ********)&PTR_FUN_710523d988;
            local_128 = (long ********)uVar16;
            FUN_7101d0bdc0(plVar5,&local_d0,(long ****)ppuVar20,ppppbVar22,pppplVar23,param_9,
                           param_10,param_11);
            pppppppplVar15 = local_128;
            local_130 = (long ********)&PTR_FUN_710523d988;
            local_128 = (long ********)0x0;
            if (pppppppplVar15 != (long ********)0x0) {
              uVar16 = *(ulong *)((long)pppppppplVar15 + 0x18);
              *(undefined ***)((long)pppppppplVar15 + 0x10) = &PTR_FUN_710523d9a8;
              *(undefined8 *)((long)pppppppplVar15 + 0x18) = 0;
              if (uVar16 != 0) {
                FUN_710392eb40(uVar16);
              }
              FUN_710392eb40((ulong)pppppppplVar15);
            }
            pppppppplVar15 = local_c8;
            local_d0 = &PTR_FUN_710523d988;
            local_c8 = (long ********)0x0;
            if (pppppppplVar15 != (long ********)0x0) {
              ppppppplVar27 = pppppppplVar15[3];
              pppppppplVar15[2] = (long *******)&PTR_FUN_710523d9a8;
              pppppppplVar15[3] = (long *******)0x0;
              if (ppppppplVar27 != (long *******)0x0) {
                FUN_710392eb40((ulong)ppppppplVar27);
              }
              FUN_710392eb40((ulong)pppppppplVar15);
            }
            plVar49[1] = plVar49[1] + 0x1a0;
          }
          else {
            lVar26 = (long)plVar5 - *plVar49 >> 5;
            uVar16 = lVar26 * 0x4ec4ec4ec4ec4ec5 + 1;
            if (0x9d89d89d89d89d < uVar16) {
                    /* WARNING: Subroutine does not return */
              std::__vector_base_common<true>::__throw_length_error();
            }
            lVar41 = plVar49[2] - *plVar49 >> 5;
            local_b0 = plVar49 + 2;
            if ((ulong)(lVar41 * 0x4ec4ec4ec4ec4ec5) < 0x4ec4ec4ec4ec4e) {
              uVar31 = lVar41 * -0x6276276276276276;
              if (uVar16 <= uVar31) {
                uVar16 = uVar31;
              }
              if (uVar16 != 0) goto LAB_7101d04900;
LAB_7101d0495c:
              pppppppplVar17 = (long ********)0x0;
            }
            else {
              uVar16 = 0x9d89d89d89d89d;
LAB_7101d04900:
              local_b8 = (long ********)0x0;
              pppppppplVar15 = (long ********)(uVar16 * 0x1a0);
              if (pppppppplVar15 == (long ********)0x0) {
                pppppppplVar15 = (long ********)0x1;
              }
              pppppppplVar17 =
                   (long ********)
                   FUN_710392e290(0x10,pppppppplVar15,pppplVar21,ppppbVar22,pppplVar23,param_9,
                                  param_10,param_11);
              if (pppppppplVar17 == (long ********)0x0) {
                if (DAT_7105332f00 != (long *)0x0) {
                  local_88 = (long ********)((ulong)local_88 & 0xffffffff00000000);
                  ppppppppplVar42 = &local_130;
                  local_130 = pppppppplVar15;
                  uVar31 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_88);
                  if (((uVar31 & 1) != 0) &&
                     (pppppppplVar17 =
                           (long ********)
                           FUN_710392e290(0x10,pppppppplVar15,(long ****)ppppppppplVar42,ppppbVar22,
                                          pppplVar23,param_9,param_10,param_11),
                     pppppppplVar17 != (long ********)0x0)) goto LAB_7101d04960;
                }
                goto LAB_7101d0495c;
              }
            }
LAB_7101d04960:
            local_128 = local_d8;
            local_80 = (long *)local_e8;
            pppppppplVar15 = pppppppplVar17 + lVar26 * 4;
            local_130 = (long ********)&PTR_FUN_710523d988;
            local_b8 = pppppppplVar17 + uVar16 * 0x34;
            local_d8 = (long ********)0x0;
            param_9 = (ulong)(uVar11 == uVar51);
            ppuVar20 = (undefined **)&local_88;
            ppppbVar22 = (byte ****)(uVar11 & 0xffffffff);
            pppplVar23 = (long ****)(uVar45 & 0xffffffff);
            local_e8 = 0;
            local_88 = (long ********)&PTR_FUN_710523d988;
            local_d0 = (undefined **)pppppppplVar17;
            local_c8 = pppppppplVar15;
            FUN_7101d0bdc0((long *)pppppppplVar15,&local_130,(long ****)ppuVar20,ppppbVar22,
                           pppplVar23,param_9,param_10,param_11);
            plVar5 = local_80;
            local_88 = (long ********)&PTR_FUN_710523d988;
            local_80 = (long *)0x0;
            if (plVar5 != (long *)0x0) {
              uVar16 = *(ulong *)((long)plVar5 + 0x18);
              *(undefined ***)((long)plVar5 + 0x10) = &PTR_FUN_710523d9a8;
              *(undefined8 *)((long)plVar5 + 0x18) = 0;
              if (uVar16 != 0) {
                FUN_710392eb40(uVar16);
              }
              FUN_710392eb40((ulong)plVar5);
            }
            pppppppplVar17 = local_128;
            local_130 = (long ********)&PTR_FUN_710523d988;
            local_128 = (long ********)0x0;
            if (pppppppplVar17 != (long ********)0x0) {
              ppppppplVar27 = pppppppplVar17[3];
              pppppppplVar17[2] = (long *******)&PTR_FUN_710523d9a8;
              pppppppplVar17[3] = (long *******)0x0;
              if (ppppppplVar27 != (long *******)0x0) {
                FUN_710392eb40((ulong)ppppppplVar27);
              }
              FUN_710392eb40((ulong)pppppppplVar17);
            }
            local_c0 = pppppppplVar15 + 0x34;
            FUN_7101d08fe0(plVar49,&local_d0);
            pppppppplVar15 = local_c8;
            pppppppplVar17 = local_c0;
            if (local_c0 != local_c8) {
              do {
                pppppppplVar17 = pppppppplVar17 + -0x34;
                FUN_7101d0d900((long)pppppppplVar17);
              } while (pppppppplVar15 != pppppppplVar17);
              local_c0 = pppppppplVar15;
            }
            if ((long ********)local_d0 != (long ********)0x0) {
              FUN_710392eb40((ulong)local_d0);
            }
          }
          local_f0 = (long ***)&PTR_FUN_710523d988;
          local_e8 = 0;
          local_e0 = &PTR_FUN_710523d988;
          local_d8 = (long ********)0x0;
          if (plVar13 != (long *)0x0) {
            plVar5 = plVar13 + 1;
            do {
              lVar26 = *plVar5;
              cVar6 = '\x01';
              bVar8 = (bool)ExclusiveMonitorPass(plVar5,0x10);
              if (bVar8) {
                *plVar5 = lVar26 + -1;
                cVar6 = ExclusiveMonitorsStatus();
              }
            } while (cVar6 != '\0');
            if (lVar26 == 0) {
              (**(code **)(*plVar13 + 0x10))(plVar13);
              std::__shared_weak_count::__release_weak();
            }
          }
          plVar13 = (long *)(DAT_7105329740 + 8);
          uVar12 = uVar12 + 1;
          if (uVar12 == (uVar14 >> 4 & 0xffffffff)) goto code_r0x007101d04ab4;
          lVar41 = *plVar13 + uVar11 * 0x18;
          lVar26 = *(long *)(lVar41 + 8);
          lVar41 = *(long *)(lVar41 + 0x10);
        } while( true );
      }
    }
    goto LAB_7101d04ac8;
  }
LAB_7101d04ad4:
  local_b0 = plVar39;
  local_d0 = (undefined **)pppppppplVar46;
  local_c8 = pppppppplVar48;
  uVar50 = *(int *)(*plVar13 + 4) - 1;
  local_c0 = pppppppplVar40;
  local_b8 = pppppppplVar2;
  if (uVar50 < 5) {
    plVar39 = (long *)(&local_d0)[(int)uVar50];
  }
  else if ((DAT_7105325d40 & 1) == 0) {
    iVar9 = __cxa_guard_acquire(&DAT_7105325d40);
    plVar39 = &DAT_7105325d28;
    if (iVar9 != 0) {
      ppuVar20 = &PTR_LOOP_7104f17000;
      DAT_7105325d28 = 0;
      DAT_7105325d30 = 0;
      DAT_7105325d38 = 0;
      FUN_71000001c0();
      __cxa_guard_release(&DAT_7105325d40);
    }
  }
  else {
    plVar39 = &DAT_7105325d28;
  }
  lVar26 = *plVar39;
  if (plVar39[1] == lVar26) {
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_out_of_range();
  }
  plVar39 = (long *)(lVar26 + 0x150);
  *(byte *)(lVar26 + 0x10d) = param_12 & 1;
  local_170 = &PTR_FUN_71050ae910;
  local_150 = &local_170;
  local_168 = param_8;
  local_b0 = &local_d0;
  FUN_7101d08e60((long)&local_170,&local_d0);
  plVar13 = local_b0;
  if (plVar39 != &local_d0) {
    if (local_b0 == &local_d0) {
      if (*(long **)(lVar26 + 0x170) == plVar39) {
        (*(code *)local_d0[3])(local_b0,&local_130);
        (**(code **)(*local_b0 + 0x20))();
        local_b0 = (long *)0x0;
        (**(code **)(**(long **)(lVar26 + 0x170) + 0x18))(*(long **)(lVar26 + 0x170),&local_d0);
        (**(code **)(**(long **)(lVar26 + 0x170) + 0x20))();
        *(undefined8 *)(lVar26 + 0x170) = 0;
        local_b0 = &local_d0;
        (*(code *)local_130[3])(&local_130,plVar39);
        (*(code *)local_130[4])(&local_130);
        *(long **)(lVar26 + 0x170) = plVar39;
      }
      else {
        (*(code *)local_d0[3])(local_b0,plVar39);
        (**(code **)(*local_b0 + 0x20))();
        local_b0 = *(long **)(lVar26 + 0x170);
        *(long **)(lVar26 + 0x170) = plVar39;
      }
    }
    else {
      plVar49 = *(long **)(lVar26 + 0x170);
      if (plVar39 == plVar49) {
        (**(code **)(*plVar49 + 0x18))(plVar49,&local_d0);
        (**(code **)(**(long **)(lVar26 + 0x170) + 0x20))();
        *(long **)(lVar26 + 0x170) = local_b0;
        local_b0 = &local_d0;
      }
      else {
        local_b0 = plVar49;
        *(long **)(lVar26 + 0x170) = plVar13;
      }
    }
  }
  if (&local_d0 == local_b0) {
    pcVar32 = *(code **)(*local_b0 + 0x20);
LAB_7101d04cb4:
    (*pcVar32)();
  }
  else if (local_b0 != (long *)0x0) {
    pcVar32 = *(code **)(*local_b0 + 0x28);
    goto LAB_7101d04cb4;
  }
  if (&local_170 == local_150) {
    pcVar32 = (code *)(*local_150)[4];
LAB_7101d04ce0:
    (*pcVar32)();
  }
  else if (local_150 != (undefined ***)0x0) {
    pcVar32 = (code *)(*local_150)[5];
    goto LAB_7101d04ce0;
  }
  FUN_7101d07780((long)param_4,uVar24,ppuVar20,ppppbVar22,pppplVar23,param_9,param_10,param_11);
  puVar25 = *(uint **)(DAT_7105329740 + 8);
  if (*(long *)(puVar25 + 0x22) != *(long *)(puVar25 + 0x20)) {
    uVar24 = *puVar25;
    if (*(uint *)(*(long *)(puVar25 + 0x20) + 0x814) < 2) {
      if (6 < uVar24) goto LAB_7101d04e40;
      puVar33 = &DAT_7104545528;
    }
    else {
      if (6 < uVar24) {
LAB_7101d04e40:
                    /* WARNING: Subroutine does not return */
        abort();
      }
      puVar33 = &DAT_71045454f0;
    }
    local_d0 = *(undefined ***)(puVar33 + (long)(int)uVar24 * 8);
    FUN_710323eba0((undefined8 *)(*param_5 + 8),&local_d0,(long *********)ppuVar20,ppppbVar22,
                   pppplVar23,param_9,param_10,param_11);
    lVar26 = *(long *)(*(long *)(DAT_7105329740 + 8) + 0x80);
    if (*(long *)(*(long *)(DAT_7105329740 + 8) + 0x88) != lVar26) {
      local_d0 = (undefined **)(long ********)0x4f3c72ccda;
      if (*(uint *)(lVar26 + 0x814) < 2) {
        local_d0 = (undefined **)(long ********)0x4a7ee45c24;
      }
      FUN_710323eba0((undefined8 *)(*param_5 + 8),&local_d0,(long *********)ppuVar20,ppppbVar22,
                     pppplVar23,param_9,param_10,param_11);
      return;
    }
  }
LAB_7101d04e34:
                    /* WARNING: Subroutine does not return */
  std::__vector_base_common<true>::__throw_out_of_range();
code_r0x007101d04ab4:
  uVar12 = (ulong)*(uint *)(*plVar13 + 4);
LAB_7101d04ac8:
  uVar11 = uVar11 + 1;
  if (uVar12 <= uVar11) goto LAB_7101d04ad4;
  goto LAB_7101d04674;
}

