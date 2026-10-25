// addr:      7101c020a0
// offset:    0x1c020a0
// name:      FUN_7101c020a0
// mangled:   
// signature: undefined __cdecl FUN_7101c020a0(undefined1[16] param_1, undefined8 param_2, undefined8 param_3, int * param_4, int param_5)


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7101c020a0(undefined1 param_1 [16],undefined8 param_2,undefined8 param_3,int *param_4,
                   int param_5)

{
  int iVar1;
  short *psVar2;
  byte ****ppppbVar3;
  int *piVar4;
  byte bVar5;
  undefined1 auVar6 [16];
  bool bVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  int *piVar11;
  long lVar12;
  ulong uVar13;
  byte ***pppbVar14;
  ushort *puVar15;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  uint *extraout_x1_02;
  uint *puVar16;
  uint *extraout_x1_03;
  uint *extraout_x1_04;
  uint *extraout_x1_05;
  undefined8 extraout_x1_06;
  undefined8 uVar17;
  undefined **ppuVar18;
  long ****pppplVar19;
  byte ****ppppbVar20;
  long ****pppplVar21;
  long ****in_x5;
  long ***in_x6;
  long ***in_x7;
  int *piVar22;
  long ****pppplVar23;
  uint uVar24;
  int iVar25;
  uint uVar26;
  ushort *puVar27;
  long *plVar28;
  long ****pppplVar29;
  int *piVar30;
  undefined2 *puVar31;
  byte *pbVar32;
  int *piVar33;
  char *pcVar34;
  byte *pbVar35;
  undefined8 uVar36;
  char cVar37;
  ulong uVar38;
  long *********ppppppppplVar39;
  long lVar40;
  long ****pppplVar41;
  long *plVar42;
  int iVar43;
  long *plVar44;
  undefined4 extraout_s0;
  undefined4 extraout_s0_00;
  undefined4 extraout_s0_01;
  undefined4 extraout_s0_02;
  undefined4 extraout_s0_03;
  undefined4 extraout_s0_04;
  undefined4 extraout_s0_05;
  undefined4 extraout_s0_06;
  undefined4 uVar45;
  undefined4 extraout_s0_07;
  undefined4 extraout_s0_08;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  undefined4 extraout_var_01;
  undefined4 extraout_var_02;
  undefined4 extraout_var_03;
  undefined4 extraout_var_04;
  undefined4 extraout_var_05;
  undefined4 extraout_var_06;
  undefined4 uVar46;
  undefined4 extraout_var_07;
  undefined4 extraout_var_08;
  undefined8 extraout_var_09;
  undefined8 extraout_var_10;
  undefined8 extraout_var_11;
  undefined8 extraout_var_12;
  undefined8 extraout_var_13;
  undefined8 extraout_var_14;
  undefined8 extraout_var_15;
  undefined8 extraout_var_16;
  undefined8 extraout_var_17;
  undefined8 extraout_var_18;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  long ***local_98;
  ulong local_90;
  byte ***local_88;
  long *local_80;
  uint local_68 [2];
  
  param_4[0x2f3] = param_5;
  iVar10 = DAT_710530d7e8;
  uVar17 = _DAT_710530d7e0;
  if (DAT_710530e1ec == '\0' && DAT_710530e1e8 == 0) {
    return;
  }
  piVar33 = param_4 + 0x22;
  *(undefined8 *)piVar33 = _DAT_710530d7d8;
  param_4[0x26] = iVar10;
  *(undefined8 *)(param_4 + 0x24) = uVar17;
  if (piVar33 != (int *)&DAT_710530d7d8) {
    piVar22 = param_4 + 0x2d;
    puVar27 = (ushort *)((long)param_4 + 0xb2);
    puVar31 = &DAT_710530d800;
    lVar12 = 0;
    do {
      uVar17 = *(undefined8 *)(&DAT_710530d7ec + lVar12 * 0x26);
      uVar38 = 0;
      param_4[lVar12 * 0x26 + 0x29] = (&DAT_710530d7f4)[lVar12 * 0x26];
      *(undefined8 *)(param_4 + lVar12 * 0x26 + 0x27) = uVar17;
      piVar11 = piVar22;
      do {
        psVar2 = puVar31 + uVar38;
        if (*psVar2 == 0) break;
        *(short *)(piVar11 + -1) = *psVar2;
        if (psVar2[1] == 0) {
          uVar38 = uVar38 + 1;
          break;
        }
        *(short *)((long)piVar11 + -2) = psVar2[1];
        if (psVar2[2] == 0) {
          uVar38 = uVar38 + 2;
          break;
        }
        uVar38 = uVar38 + 3;
        *(short *)piVar11 = psVar2[2];
        piVar11 = (int *)((long)piVar11 + 6);
      } while ((uint)uVar38 < 0x3f);
      *(undefined2 *)((long)param_4 + (uVar38 & 0xffffffff) * 2 + lVar12 * 0x98 + 0xb0) = 0;
      param_4[lVar12 * 0x26 + 0x2b] = (int)uVar38;
      uVar8 = (uint)*(ushort *)(param_4 + lVar12 * 0x26 + 0x2c);
      puVar15 = puVar27;
      uVar26 = 0x811c9dc5;
      if (*(ushort *)(param_4 + lVar12 * 0x26 + 0x2c) != 0) {
        do {
          uVar26 = uVar26 * 0x89 ^ uVar8;
          uVar8 = (uint)*puVar15;
          puVar15 = puVar15 + 1;
        } while (uVar8 != 0);
      }
      lVar40 = lVar12 + 1;
      param_4[lVar12 * 0x26 + 0x2a] = uVar26;
      puVar31 = puVar31 + 0x4c;
      piVar22 = piVar22 + 0x26;
      puVar27 = puVar27 + 0x4c;
      param_4[lVar12 * 0x26 + 0x4c] = (&DAT_710530d880)[lVar12 * 0x26];
      lVar12 = lVar40;
    } while (lVar40 != 8);
  }
  memcpy(param_4 + 0x157,&DAT_710530dcac,0x5f4);
  iVar10 = param_4[0x296];
  pppplVar41 = (long ****)(param_4 + 0x27);
  pppplVar21 = pppplVar41;
  if (param_4[0x28] == iVar10) {
LAB_7101c022dc:
    iVar10 = *(int *)pppplVar21;
  }
  else {
    if (param_4[0x4e] == iVar10) {
      pppplVar21 = (long ****)(param_4 + 0x4d);
      goto LAB_7101c022dc;
    }
    if (param_4[0x74] == iVar10) {
      pppplVar21 = (long ****)(param_4 + 0x73);
      goto LAB_7101c022dc;
    }
    if (param_4[0x9a] == iVar10) {
      pppplVar21 = (long ****)(param_4 + 0x99);
      goto LAB_7101c022dc;
    }
    if (param_4[0xc0] == iVar10) {
      pppplVar21 = (long ****)(param_4 + 0xbf);
      goto LAB_7101c022dc;
    }
    if (param_4[0xe6] == iVar10) {
      pppplVar21 = (long ****)(param_4 + 0xe5);
      goto LAB_7101c022dc;
    }
    if (param_4[0x10c] == iVar10) {
      pppplVar21 = (long ****)(param_4 + 0x10b);
      goto LAB_7101c022dc;
    }
    if (param_4[0x132] == iVar10) {
      pppplVar21 = (long ****)(param_4 + 0x131);
      goto LAB_7101c022dc;
    }
    iVar10 = 0;
  }
  pppplVar21 = pppplVar41;
  if (*(int *)pppplVar41 == iVar10) {
LAB_7101c02378:
    iVar10 = *(int *)((long)pppplVar21 + 4);
    if (iVar10 == -1) goto LAB_7101c023a8;
    piVar22 = param_4 + 0x286;
    if (param_4[0x286] != iVar10) {
      if (param_4[0x288] == iVar10) {
        piVar22 = param_4 + 0x288;
      }
      else if (param_4[0x28a] == iVar10) {
        piVar22 = param_4 + 0x28a;
      }
      else if (param_4[0x28c] == iVar10) {
        piVar22 = param_4 + 0x28c;
      }
      else if (param_4[0x28e] == iVar10) {
        piVar22 = param_4 + 0x28e;
      }
      else if (param_4[0x290] == iVar10) {
        piVar22 = param_4 + 0x290;
      }
      else if (param_4[0x292] == iVar10) {
        piVar22 = param_4 + 0x292;
      }
      else {
        piVar22 = param_4 + 0x294;
        if (param_4[0x294] != iVar10) {
          piVar22 = param_4 + 0x286;
        }
      }
    }
    iVar10 = piVar22[1];
  }
  else {
    if (param_4[0x4d] == iVar10) {
      pppplVar21 = (long ****)(param_4 + 0x4d);
      goto LAB_7101c02378;
    }
    if (param_4[0x73] == iVar10) {
      pppplVar21 = (long ****)(param_4 + 0x73);
      goto LAB_7101c02378;
    }
    if (param_4[0x99] == iVar10) {
      pppplVar21 = (long ****)(param_4 + 0x99);
      goto LAB_7101c02378;
    }
    if (param_4[0xbf] == iVar10) {
      pppplVar21 = (long ****)(param_4 + 0xbf);
      goto LAB_7101c02378;
    }
    if (param_4[0xe5] == iVar10) {
      pppplVar21 = (long ****)(param_4 + 0xe5);
      goto LAB_7101c02378;
    }
    if (param_4[0x10b] == iVar10) {
      pppplVar21 = (long ****)(param_4 + 0x10b);
      goto LAB_7101c02378;
    }
    if (param_4[0x131] == iVar10) {
      pppplVar21 = (long ****)(param_4 + 0x131);
      goto LAB_7101c02378;
    }
LAB_7101c023a8:
    iVar10 = 0;
  }
  param_4[0x2d6] = iVar10;
  lVar12 = **(long **)(param_4 + 0x1e);
  pppplVar21 = (long ****)0x0;
  FUN_710323beb0(lVar12,(ulong *)&DAT_7104545058,(long)*(int *)(lVar12 + 0x70),
                 (ulong)*(uint *)(lVar12 + 0x68),(long ****)0x0,in_x5,in_x6,in_x7);
  lVar12 = **(long **)(param_4 + 0x1e);
  ppuVar18 = (undefined **)(long)*(int *)(lVar12 + 0x70);
  ppppbVar20 = (byte ****)(ulong)*(uint *)(lVar12 + 0x68);
  FUN_710323c1c0(lVar12,&DAT_7104545060,(long *********)ppuVar18,ppppbVar20,pppplVar21,in_x5,in_x6,
                 in_x7);
  uVar17 = extraout_x1;
  if (param_4[0x2f3] == 0) {
    lVar12 = **(long **)(param_4 + 0x1e);
    ppuVar18 = (undefined **)(long)*(int *)(lVar12 + 0x70);
    ppppbVar20 = (byte ****)(ulong)*(uint *)(lVar12 + 0x68);
    pppplVar21 = (long ****)0x1;
    FUN_710323beb0(lVar12,(ulong *)&DAT_7104545068,(long)ppuVar18,(ulong)ppppbVar20,(long ****)0x1,
                   in_x5,in_x6,in_x7);
    uVar17 = extraout_x1_00;
  }
  lVar12 = **(long **)(param_4 + 0x1e);
  uVar38 = FUN_710323cb80(lVar12,uVar17,(long *********)ppuVar18,ppppbVar20,pppplVar21,in_x5,in_x6,
                          in_x7);
  while ((uVar38 & 1) == 0) {
    nn::os::SleepThread(1000000);
    uVar38 = FUN_710323cb80(lVar12,extraout_x1_01,(long *********)ppuVar18,ppppbVar20,pppplVar21,
                            in_x5,in_x6,in_x7);
  }
  if (param_4[0x2f3] == 0) {
    lVar12 = **(long **)(param_4 + 0x1e);
    if (((DAT_710532f4d0 & 1) == 0) && (iVar10 = __cxa_guard_acquire(&DAT_710532f4d0), iVar10 != 0))
    {
      DAT_710532f4a0 = 0xffffff;
      ppuVar18 = &PTR_LOOP_7104f17000;
      FUN_71000001c0();
      __cxa_guard_release(&DAT_710532f4d0);
    }
    plVar42 = (long *)(lVar12 + 0x10);
    plVar28 = (long *)*plVar42;
    plVar44 = plVar42;
    if (plVar28 == (long *)0x0) {
LAB_7101c02530:
      puVar16 = &DAT_710532f4a0;
    }
    else {
      do {
        bVar7 = (plVar28[4] & 0xfffffffff8U) < 0x30be001538;
        if (!bVar7) {
          plVar44 = plVar28;
        }
        plVar28 = (long *)plVar28[bVar7];
      } while (plVar28 != (long *)0x0);
      if ((plVar44 == plVar42) || (0x30be001538 < (plVar44[4] & 0xffffffffffU)))
      goto LAB_7101c02530;
      puVar16 = (uint *)(plVar44 + 5);
    }
    uVar26 = *puVar16;
    local_68[0] = uVar26;
    if (uVar26 == 0xffffff) {
      FUN_7103720c30((long)(param_4 + 0x12),local_68,(long *********)ppuVar18,ppppbVar20,pppplVar21,
                     in_x5,in_x6,in_x7);
    }
    else {
      FUN_7103540a00(DAT_7105332f20,uVar26);
      FUN_7103720c30((long)(param_4 + 0x12),local_68,(long *********)ppuVar18,ppppbVar20,pppplVar21,
                     in_x5,in_x6,in_x7);
      FUN_7103540b10(DAT_7105332f20,uVar26,(long *********)ppuVar18,ppppbVar20,pppplVar21,in_x5,
                     in_x6,in_x7);
      local_68[0] = 0xffffff;
    }
  }
  piVar22 = param_4 + 0x20;
  ppppbVar20 = (byte ****)0x1;
  FUN_71032cbf30((undefined8 *)piVar22,**(long **)(param_4 + 0x1e),(ulong *)&DAT_7104545058,
                 (byte ****)0x1,pppplVar21,in_x5,in_x6,in_x7);
  FUN_7103778300(0x3f800000,*(long *)(**(long **)(param_4 + 0x20) + 0x10),0x710438d31d);
  ppppbVar3 = (byte ****)"set_parts_player_%02d";
  if (param_4[0x2f3] != 0) {
    ppppbVar3 = (byte ****)"set_parts_player_1%1d";
  }
  FUN_7103776640(&local_e0,**(long **)(param_4 + 0x20) + 8,ppppbVar3,0,ppppbVar20,pppplVar21,in_x5,
                 in_x6,in_x7);
  FUN_7103778300(0x3f800000,(long)local_d8,0x71043cd335);
  uVar38 = (ulong)local_d8;
  param_4[0x2de] = -1;
  param_4[0x2e6] = -1;
  local_e0 = &PTR_FUN_710523d988;
  local_d8 = (long *)0x0;
  if (uVar38 != 0) {
    uVar13 = *(ulong *)(uVar38 + 0x18);
    *(undefined ***)(uVar38 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar38 + 0x18) = 0;
    if (uVar13 != 0) {
      FUN_710392eb40(uVar13);
    }
    FUN_710392eb40(uVar38);
  }
  ppppbVar3 = (byte ****)"set_parts_player_%02d";
  if (param_4[0x2f3] != 0) {
    ppppbVar3 = (byte ****)"set_parts_player_1%1d";
  }
  FUN_7103776640(&local_e0,**(long **)(param_4 + 0x20) + 8,ppppbVar3,1,ppppbVar20,pppplVar21,in_x5,
                 in_x6,in_x7);
  FUN_7103778300(0x3f800000,(long)local_d8,0x71043cd335);
  uVar38 = (ulong)local_d8;
  param_4[0x2df] = -1;
  param_4[0x2e7] = -1;
  local_e0 = &PTR_FUN_710523d988;
  local_d8 = (long *)0x0;
  if (uVar38 != 0) {
    uVar13 = *(ulong *)(uVar38 + 0x18);
    *(undefined ***)(uVar38 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar38 + 0x18) = 0;
    if (uVar13 != 0) {
      FUN_710392eb40(uVar13);
    }
    FUN_710392eb40(uVar38);
  }
  ppppbVar3 = (byte ****)"set_parts_player_%02d";
  if (param_4[0x2f3] != 0) {
    ppppbVar3 = (byte ****)"set_parts_player_1%1d";
  }
  FUN_7103776640(&local_e0,**(long **)(param_4 + 0x20) + 8,ppppbVar3,2,ppppbVar20,pppplVar21,in_x5,
                 in_x6,in_x7);
  FUN_7103778300(0x3f800000,(long)local_d8,0x71043cd335);
  uVar38 = (ulong)local_d8;
  param_4[0x2e0] = -1;
  param_4[0x2e8] = -1;
  local_e0 = &PTR_FUN_710523d988;
  local_d8 = (long *)0x0;
  if (uVar38 != 0) {
    uVar13 = *(ulong *)(uVar38 + 0x18);
    *(undefined ***)(uVar38 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar38 + 0x18) = 0;
    if (uVar13 != 0) {
      FUN_710392eb40(uVar13);
    }
    FUN_710392eb40(uVar38);
  }
  ppppbVar3 = (byte ****)"set_parts_player_%02d";
  if (param_4[0x2f3] != 0) {
    ppppbVar3 = (byte ****)"set_parts_player_1%1d";
  }
  FUN_7103776640(&local_e0,**(long **)(param_4 + 0x20) + 8,ppppbVar3,3,ppppbVar20,pppplVar21,in_x5,
                 in_x6,in_x7);
  FUN_7103778300(0x3f800000,(long)local_d8,0x71043cd335);
  uVar38 = (ulong)local_d8;
  param_4[0x2e1] = -1;
  param_4[0x2e9] = -1;
  local_e0 = &PTR_FUN_710523d988;
  local_d8 = (long *)0x0;
  if (uVar38 != 0) {
    uVar13 = *(ulong *)(uVar38 + 0x18);
    *(undefined ***)(uVar38 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar38 + 0x18) = 0;
    if (uVar13 != 0) {
      FUN_710392eb40(uVar13);
    }
    FUN_710392eb40(uVar38);
  }
  ppppbVar3 = (byte ****)"set_parts_player_%02d";
  if (param_4[0x2f3] != 0) {
    ppppbVar3 = (byte ****)"set_parts_player_1%1d";
  }
  FUN_7103776640(&local_e0,**(long **)(param_4 + 0x20) + 8,ppppbVar3,4,ppppbVar20,pppplVar21,in_x5,
                 in_x6,in_x7);
  uVar38 = (ulong)local_d8;
  FUN_7103778300(0x3f800000,(long)local_d8,0x71043cd335);
  param_4[0x2e2] = -1;
  param_4[0x2ea] = -1;
  local_e0 = &PTR_FUN_710523d988;
  local_d8 = (long *)0x0;
  if (uVar38 != 0) {
    uVar13 = *(ulong *)(uVar38 + 0x18);
    *(undefined ***)(uVar38 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar38 + 0x18) = 0;
    if (uVar13 != 0) {
      FUN_710392eb40(uVar13);
    }
    FUN_710392eb40(uVar38);
  }
  ppppbVar3 = (byte ****)"set_parts_player_%02d";
  if (param_4[0x2f3] != 0) {
    ppppbVar3 = (byte ****)"set_parts_player_1%1d";
  }
  FUN_7103776640(&local_e0,**(long **)(param_4 + 0x20) + 8,ppppbVar3,5,ppppbVar20,pppplVar21,in_x5,
                 in_x6,in_x7);
  uVar38 = (ulong)local_d8;
  FUN_7103778300(0x3f800000,(long)local_d8,0x71043cd335);
  param_4[0x2e3] = -1;
  param_4[0x2eb] = -1;
  local_e0 = &PTR_FUN_710523d988;
  local_d8 = (long *)0x0;
  if (uVar38 != 0) {
    uVar13 = *(ulong *)(uVar38 + 0x18);
    *(undefined ***)(uVar38 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar38 + 0x18) = 0;
    if (uVar13 != 0) {
      FUN_710392eb40(uVar13);
    }
    FUN_710392eb40(uVar38);
  }
  ppppbVar3 = (byte ****)"set_parts_player_%02d";
  if (param_4[0x2f3] != 0) {
    ppppbVar3 = (byte ****)"set_parts_player_1%1d";
  }
  FUN_7103776640(&local_e0,**(long **)(param_4 + 0x20) + 8,ppppbVar3,6,ppppbVar20,pppplVar21,in_x5,
                 in_x6,in_x7);
  uVar38 = (ulong)local_d8;
  FUN_7103778300(0x3f800000,(long)local_d8,0x71043cd335);
  param_4[0x2e4] = -1;
  param_4[0x2ec] = -1;
  local_e0 = &PTR_FUN_710523d988;
  local_d8 = (long *)0x0;
  if (uVar38 != 0) {
    uVar13 = *(ulong *)(uVar38 + 0x18);
    *(undefined ***)(uVar38 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar38 + 0x18) = 0;
    if (uVar13 != 0) {
      FUN_710392eb40(uVar13);
    }
    FUN_710392eb40(uVar38);
  }
  ppppbVar3 = (byte ****)"set_parts_player_%02d";
  if (param_4[0x2f3] != 0) {
    ppppbVar3 = (byte ****)"set_parts_player_1%1d";
  }
  ppuVar18 = (undefined **)&DAT_00000007;
  FUN_7103776640(&local_e0,**(long **)(param_4 + 0x20) + 8,ppppbVar3,7,ppppbVar20,pppplVar21,in_x5,
                 in_x6,in_x7);
  FUN_7103778300(0x3f800000,(long)local_d8,0x71043cd335);
  uVar38 = (ulong)local_d8;
  param_4[0x2e5] = -1;
  param_4[0x2ed] = -1;
  local_e0 = &PTR_FUN_710523d988;
  local_d8 = (long *)0x0;
  if (uVar38 != 0) {
    uVar13 = *(ulong *)(uVar38 + 0x18);
    *(undefined ***)(uVar38 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar38 + 0x18) = 0;
    if (uVar13 != 0) {
      FUN_710392eb40(uVar13);
    }
    FUN_710392eb40(uVar38);
  }
  uVar26 = param_4[0x26];
  iVar10 = param_4[0x2f3];
  if (iVar10 == 0) {
    param_4[0x2f1] = uVar26;
  }
  if (0 < (int)uVar26) {
    piVar11 = param_4 + 0x286;
    uVar38 = 0;
    while( true ) {
      piVar4 = param_4 + uVar38 * 0x26 + 0x27;
      if (7 < uVar38) {
        piVar4 = &DAT_710509ec08;
      }
      if ((iVar10 == 1) &&
         ((((((iVar10 = *piVar4, pppplVar29 = pppplVar41, *(int *)pppplVar41 == iVar10 ||
              (pppplVar29 = (long ****)(param_4 + 0x4d), param_4[0x4d] == iVar10)) ||
             (pppplVar29 = (long ****)(param_4 + 0x73), param_4[0x73] == iVar10)) ||
            ((pppplVar29 = (long ****)(param_4 + 0x99), param_4[0x99] == iVar10 ||
             (pppplVar29 = (long ****)(param_4 + 0xbf), param_4[0xbf] == iVar10)))) ||
           ((pppplVar29 = (long ****)(param_4 + 0xe5), param_4[0xe5] == iVar10 ||
            ((pppplVar29 = (long ****)(param_4 + 0x10b), param_4[0x10b] == iVar10 ||
             (pppplVar29 = (long ****)(param_4 + 0x131), param_4[0x131] == iVar10)))))) &&
          (iVar10 = *(int *)((long)pppplVar29 + 4), iVar10 != -1)))) {
        piVar30 = piVar11;
        if ((((*piVar11 != iVar10) && (piVar30 = param_4 + 0x288, param_4[0x288] != iVar10)) &&
            (piVar30 = param_4 + 0x28a, param_4[0x28a] != iVar10)) &&
           (((piVar30 = param_4 + 0x28c, param_4[0x28c] != iVar10 &&
             (piVar30 = param_4 + 0x28e, param_4[0x28e] != iVar10)) &&
            ((piVar30 = param_4 + 0x290, param_4[0x290] != iVar10 &&
             ((piVar30 = param_4 + 0x292, param_4[0x292] != iVar10 &&
              (piVar30 = param_4 + 0x294, param_4[0x294] != iVar10)))))))) {
          piVar30 = piVar11;
        }
        uVar8 = piVar30[1];
      }
      else {
        uVar8 = 0;
      }
      iVar10 = uVar26 + ~(uint)uVar38;
      param_4[uVar38 + 0x2de] = iVar10;
      uVar9 = piVar4[2];
      ppppppppplVar39 = (long *********)(long)iVar10;
      ppppbVar3 = (byte ****)"set_parts_player_%02d";
      if (param_4[0x2f3] != 0) {
        ppppbVar3 = (byte ****)"set_parts_player_1%1d";
      }
      ppuVar18 = (undefined **)ppppppppplVar39;
      FUN_7103776640(&local_88,**(long **)(param_4 + 0x20) + 8,ppppbVar3,ppppppppplVar39,ppppbVar20,
                     pppplVar21,in_x5,in_x6,in_x7);
      if (uVar9 == 0xffffffff) {
        FUN_7103776910(&local_98,(long)&local_88,(long ****)"set_txt_player",ppuVar18,ppppbVar20,
                       pppplVar21,in_x5,in_x6,in_x7);
        uVar24 = 99;
        uVar9 = 0x811c9dc5;
        local_d8 = (long *)CONCAT17(local_d8._7_1_,0x70635f6e6d63);
        pbVar32 = (byte *)((long)&local_d8 + 1);
        do {
          uVar9 = uVar9 * 0x89 ^ uVar24;
          uVar24 = (uint)*pbVar32;
          pbVar32 = pbVar32 + 1;
        } while (uVar24 != 0);
        local_e0 = (undefined **)CONCAT44(6,uVar9);
        FUN_710377a120((long)&local_98,(char *)&local_d8,ppuVar18,ppppbVar20,pppplVar21,in_x5,in_x6,
                       in_x7);
        uVar13 = local_90;
        local_98 = (long ***)&PTR_FUN_710523d9a8;
        local_90 = 0;
        if (uVar13 != 0) {
          FUN_710392eb40(uVar13);
        }
        FUN_7103778430((long)&local_88,"player_color_cp",ppuVar18,ppppbVar20,pppplVar21,in_x5,in_x6,
                       in_x7);
      }
      else {
        FUN_7103776910(&local_98,(long)&local_88,(long ****)"set_txt_player",ppuVar18,ppppbVar20,
                       pppplVar21,in_x5,in_x6,in_x7);
        FUN_71003a4ca0((uint *)&local_e0,"cmn_%dp",(ulong)uVar9,ppuVar18,ppppbVar20,pppplVar21,in_x5
                       ,in_x6,in_x7);
        FUN_710377a120((long)&local_98,(char *)&local_d8,ppuVar18,ppppbVar20,pppplVar21,in_x5,in_x6,
                       in_x7);
        uVar13 = local_90;
        local_98 = (long ***)&PTR_FUN_710523d9a8;
        local_90 = 0;
        if (uVar13 != 0) {
          FUN_710392eb40(uVar13);
        }
        ppuVar18 = (undefined **)(ulong)uVar9;
        FUN_7103778430((long)&local_88,"player_color_%dp",ppuVar18,ppppbVar20,pppplVar21,in_x5,in_x6
                       ,in_x7);
      }
      plVar44 = local_80;
      FUN_7103778300(0x3f800000,(long)local_80,0x710437c4c6);
      FUN_7103778300(0x3f800000,(long)plVar44,0x710440148b);
      if (param_4[0x2f3] == 0) {
        FUN_7103778300(0x3f800000,(long)plVar44,0x710429257e);
      }
      FUN_7103776910(&local_98,(long)&local_88,(long ****)"set_txt_num",ppuVar18,ppppbVar20,
                     pppplVar21,in_x5,in_x6,in_x7);
      uVar13 = local_90;
      plVar28 = *(long **)(local_90 + 0x10);
      if (plVar28 != (long *)0x0) {
        pppplVar21 = (long ****)0x0;
        in_x5 = (long ****)0x0;
        local_b0 = 0;
        uStack_a8 = 0;
        local_c0 = 0;
        uStack_b8 = 0;
        local_d0 = 0;
        uStack_c8 = 0;
        local_e0 = (undefined **)0x0;
        local_d8 = (long *)0x0;
        uVar9 = FUN_71037ad940((long)&local_e0,0x20,0,uVar8,0,0);
        ppuVar18 = (undefined **)(ulong)uVar9;
        ppppbVar20 = (byte ****)0x0;
        FUN_71037a2270(plVar28,(ushort *)&local_e0,uVar9,0);
      }
      local_98 = (long ***)&PTR_FUN_710523d9a8;
      local_90 = 0;
      if (uVar13 != 0) {
        FUN_710392eb40(uVar13);
      }
      param_4[(long)((long)ppppppppplVar39 + 0x2e6)] = uVar8;
      local_88 = (byte ***)&PTR_FUN_710523d988;
      local_80 = (long *)0x0;
      if (plVar44 != (long *)0x0) {
        uVar13 = plVar44[3];
        plVar44[2] = (long)&PTR_FUN_710523d9a8;
        plVar44[3] = 0;
        if (uVar13 != 0) {
          FUN_710392eb40(uVar13);
        }
        FUN_710392eb40((ulong)plVar44);
      }
      uVar38 = uVar38 + 1;
      if (uVar38 == uVar26) break;
      iVar10 = param_4[0x2f3];
    }
  }
  lVar12 = DAT_710532f8b8;
  lVar40 = **(long **)(param_4 + 0x1e);
  if (((DAT_710532f4d8 & 1) == 0) && (iVar10 = __cxa_guard_acquire(&DAT_710532f4d8), iVar10 != 0)) {
    DAT_710532f4a4 = 0xffffff;
    ppuVar18 = &PTR_LOOP_7104f17000;
    FUN_71000001c0();
    __cxa_guard_release(&DAT_710532f4d8);
  }
  plVar42 = (long *)(lVar40 + 0x28);
  plVar28 = (long *)*plVar42;
  plVar44 = plVar42;
  if (plVar28 == (long *)0x0) {
LAB_7101c02ebc:
    ppppppppplVar39 = (long *********)&DAT_710532f4a4;
  }
  else {
    do {
      bVar7 = (plVar28[4] & 0xffffffffffU) < 0xf4415c599;
      if (!bVar7) {
        plVar44 = plVar28;
      }
      plVar28 = (long *)plVar28[bVar7];
    } while (plVar28 != (long *)0x0);
    if ((plVar44 == plVar42) || (0xf4415c599 < (plVar44[4] & 0xfffffffffeU))) goto LAB_7101c02ebc;
    ppppppppplVar39 = (long *********)(plVar44 + 5);
  }
  if (*(int *)ppppppppplVar39 != 0xffffff) {
    ppuVar18 = (undefined **)0x1;
    iVar10 = FUN_710330a8f0(*(long **)(lVar12 + 8),&DAT_7104545060,(long ****)0x1,ppppbVar20,
                            pppplVar21,in_x5,in_x6,in_x7);
    if (iVar10 != 0) {
      FUN_7103563a20(*lib::Singleton<lib::EffectManager>::instance_,iVar10,ppppppppplVar39,
                     ppppbVar20,pppplVar21,(ulong)in_x5,in_x6,in_x7);
      ppuVar18 = (undefined **)ppppppppplVar39;
    }
  }
  if (param_4[0x2f3] == 1) {
    FUN_7103776390(&local_88,(undefined8 *)(**(long **)(param_4 + 0x20) + 8),(long ****)ppuVar18,
                   ppppbVar20,pppplVar21,in_x5,in_x6,in_x7);
    FUN_7103778300(0x3f800000,(long)local_80,0x71042b4310);
    FUN_7103778430(**(long **)(param_4 + 0x20) + 8,"player_color_%dp",1,ppppbVar20,pppplVar21,in_x5,
                   in_x6,in_x7);
    if (0 < param_4[6]) {
      lVar12 = 0;
      do {
        FUN_7103776640(&local_e0,**(long **)piVar22 + 8,(byte ****)"set_parts_ico_%02d",lVar12,
                       ppppbVar20,pppplVar21,in_x5,in_x6,in_x7);
        uVar38 = (ulong)local_d8;
        FUN_7103778300(0x3f800000,(long)local_d8,0x71043cd335);
        local_e0 = &PTR_FUN_710523d988;
        local_d8 = (long *)0x0;
        if (uVar38 != 0) {
          uVar13 = *(ulong *)(uVar38 + 0x18);
          *(undefined ***)(uVar38 + 0x10) = &PTR_FUN_710523d9a8;
          *(undefined8 *)(uVar38 + 0x18) = 0;
          if (uVar13 != 0) {
            FUN_710392eb40(uVar13);
          }
          FUN_710392eb40(uVar38);
        }
        lVar12 = lVar12 + 1;
      } while (lVar12 < param_4[6]);
    }
    param_4[0x2f2] = 0;
    param_4[0x2f0] = 0;
    *(undefined1 *)(param_4 + 0x2f7) = 0;
    *(bool *)((long)param_4 + 0xbdf) = param_4[0x2f3] != 1;
    FUN_7103778430((long)&local_88,"draw_%1dp",(ulong)(uint)param_4[0x26],ppppbVar20,pppplVar21,
                   in_x5,in_x6,in_x7);
    plVar44 = local_80;
    local_88 = (byte ***)&PTR_FUN_710523d988;
    local_80 = (long *)0x0;
    if (plVar44 != (long *)0x0) {
      uVar38 = plVar44[3];
      plVar44[2] = (long)&PTR_FUN_710523d9a8;
      plVar44[3] = 0;
      if (uVar38 != 0) {
        FUN_710392eb40(uVar38);
      }
      FUN_710392eb40((ulong)plVar44);
    }
    goto LAB_7101c04160;
  }
  FUN_7103778300(0x3f800000,*(long *)(**(long **)(param_4 + 0x20) + 0x10),0x7104291bc1);
  iVar10 = param_4[0x296];
  if (iVar10 == -1) goto LAB_7101c04160;
  pppplVar29 = (long ****)(param_4 + 0x4d);
  pppplVar21 = pppplVar41;
  if ((param_4[0x28] == iVar10) || (pppplVar21 = pppplVar29, param_4[0x4e] == iVar10)) {
LAB_7101c0312c:
    iVar25 = *(int *)pppplVar21;
  }
  else {
    if (param_4[0x74] == iVar10) {
      pppplVar21 = (long ****)(param_4 + 0x73);
      goto LAB_7101c0312c;
    }
    if (param_4[0x9a] == iVar10) {
      pppplVar21 = (long ****)(param_4 + 0x99);
      goto LAB_7101c0312c;
    }
    if (param_4[0xc0] == iVar10) {
      pppplVar21 = (long ****)(param_4 + 0xbf);
      goto LAB_7101c0312c;
    }
    if (param_4[0xe6] == iVar10) {
      pppplVar21 = (long ****)(param_4 + 0xe5);
      goto LAB_7101c0312c;
    }
    if (param_4[0x10c] == iVar10) {
      pppplVar21 = (long ****)(param_4 + 0x10b);
      goto LAB_7101c0312c;
    }
    if (param_4[0x132] == iVar10) {
      pppplVar21 = (long ****)(param_4 + 0x131);
      goto LAB_7101c0312c;
    }
    iVar25 = 0;
  }
  pppplVar19 = pppplVar41;
  if ((*(int *)pppplVar41 != iVar25) && (pppplVar19 = pppplVar29, param_4[0x4d] != iVar25)) {
    if (param_4[0x73] == iVar25) {
      pppplVar19 = (long ****)(param_4 + 0x73);
    }
    else if (param_4[0x99] == iVar25) {
      pppplVar19 = (long ****)(param_4 + 0x99);
    }
    else if (param_4[0xbf] == iVar25) {
      pppplVar19 = (long ****)(param_4 + 0xbf);
    }
    else if (param_4[0xe5] == iVar25) {
      pppplVar19 = (long ****)(param_4 + 0xe5);
    }
    else if (param_4[0x10b] == iVar25) {
      pppplVar19 = (long ****)(param_4 + 0x10b);
    }
    else {
      pppplVar19 = (long ****)(param_4 + 0x131);
      if (param_4[0x131] != iVar25) {
        pppplVar19 = (long ****)&DAT_710509ec08;
      }
    }
  }
  pcVar34 = *(char **)(param_4 + 0x14);
  uVar26 = param_4[0xe];
  if ((*pcVar34 == '\f') && (uVar8 = *(int *)(pcVar34 + 1) - 1, 0 < *(int *)(pcVar34 + 1))) {
    lVar40 = *(long *)(param_4 + 0x12);
    iVar25 = 0;
    do {
      iVar1 = uVar8 + iVar25;
      if (iVar1 < 0) {
        iVar1 = iVar1 + 1;
      }
      iVar1 = iVar1 >> 1;
      puVar16 = (uint *)(*(long *)(lVar40 + 0x28) + (long)*(int *)(pcVar34 + 5) + (long)iVar1 * 8);
      ppuVar18 = *(undefined ***)(*(long *)(lVar40 + 0x20) + (ulong)*puVar16 * 8);
      if ((long *********)ppuVar18 == (long *********)0x24cd976d8f) {
        pbVar32 = &DAT_7104742dbb;
        lVar12 = 0;
        if (((long)(int)puVar16[1] & 0x80000000U) == 0) {
          pbVar32 = (byte *)(pcVar34 + (int)puVar16[1]);
          lVar12 = lVar40;
        }
        goto LAB_7101c03264;
      }
      puVar16 = (uint *)(ulong)(iVar1 - 1U);
      uVar9 = iVar1 - 1U;
      if (ppuVar18 < (long *********)0x24cd976d90) {
        iVar25 = iVar1 + 1;
        uVar9 = uVar8;
      }
      uVar8 = uVar9;
    } while (iVar25 <= (int)uVar8);
    pbVar32 = &DAT_7104742dbb;
    lVar12 = 0;
  }
  else {
    puVar16 = extraout_x1_02;
    pbVar32 = &DAT_7104742dbb;
    lVar12 = 0;
  }
LAB_7101c03264:
  if (DAT_710523d00c < 0xe) {
    pbVar35 = (&PTR_s_jp_ja_710523d010)[(int)DAT_710523d00c];
    uVar8 = (uint)*pbVar35;
    if (*pbVar35 != 0) goto LAB_7101c03288;
    uVar13 = 0;
    uVar38 = 0;
  }
  else {
    pbVar35 = &DAT_71043ffe6b;
    uVar8 = 0x75;
LAB_7101c03288:
    uVar38 = 0;
    uVar9 = 0xffffffff;
    do {
      pbVar35 = pbVar35 + 1;
      puVar16 = (uint *)(ulong)(uVar8 + 0x20);
      uVar24 = uVar8 + 0x20;
      if (0x19 < uVar8 - 0x41) {
        uVar24 = uVar8;
      }
      uVar9 = (&DAT_7104754084)[(uVar24 ^ uVar9) & 0xff] ^ uVar9 >> 8;
      uVar8 = (uint)*pbVar35;
      uVar38 = uVar38 + 0x100000000;
    } while (uVar8 != 0);
    uVar13 = (ulong)~uVar9;
    uVar38 = uVar38 & 0xff00000000;
  }
  uVar38 = uVar38 | uVar13;
  iVar25 = -1;
  if (uVar38 < 0x564d6226c) {
    if (uVar38 < 0x5215dea32) {
      if (uVar38 == 0x508e8cd29) {
        iVar25 = 0xb;
      }
      else if (uVar38 == 0x5138b5d59) {
        iVar25 = 8;
      }
      else if (uVar38 == 0x51e71e5be) {
        iVar25 = 4;
      }
    }
    else if (uVar38 < 0x54fa653c8) {
      if (uVar38 == 0x5215dea32) {
        iVar25 = 5;
      }
      else if (uVar38 == 0x538fc4139) {
        iVar25 = 3;
      }
    }
    else if (uVar38 == 0x54fa653c8) {
      iVar25 = 9;
    }
    else if (uVar38 == 0x55bfa2de0) {
      iVar25 = 1;
    }
  }
  else if (uVar38 < 0x590b80d77) {
    if (uVar38 == 0x564d6226c) {
      iVar25 = 2;
    }
    else if (uVar38 == 0x56900e17f) {
      iVar25 = 0xc;
    }
    else if (uVar38 == 0x57d778967) {
      iVar25 = 6;
    }
  }
  else if (uVar38 < 0x5bcd88303) {
    if (uVar38 == 0x590b80d77) {
      iVar25 = 7;
    }
    else if (uVar38 == 0x59197a8c4) {
      iVar25 = 10;
    }
  }
  else if (uVar38 == 0x5d5127e7e) {
    iVar25 = 0xd;
  }
  else if (uVar38 == 0x5bcd88303) {
    iVar25 = 0;
  }
  if (*pbVar32 - 0xb < 2) {
    if (*(int *)(pbVar32 + 1) <= iVar25) goto LAB_7101c03520;
LAB_7101c035a8:
    pbVar35 = &DAT_7104742dbb;
    lVar40 = 0;
    if ((-1 < iVar25) && (*pbVar32 == 0xb)) {
      if (iVar25 < *(int *)(pbVar32 + 1)) {
        pbVar35 = pbVar32 + *(int *)(pbVar32 + (long)iVar25 * 4 + 5);
        lVar40 = lVar12;
      }
      else {
        lVar40 = 0;
        pbVar35 = &DAT_7104742dbb;
      }
    }
    bVar5 = *pbVar35;
    if ((bVar5 == 0xc) && (uVar26 = *(int *)(pbVar35 + 1) - 1, 0 < *(int *)(pbVar35 + 1))) {
      iVar25 = 0;
      pbVar32 = &DAT_7104742dbb;
      do {
        iVar1 = uVar26 + iVar25;
        if (iVar1 < 0) {
          iVar1 = iVar1 + 1;
        }
        iVar1 = iVar1 >> 1;
        puVar16 = (uint *)(*(long *)(lVar40 + 0x28) + (long)*(int *)(pbVar35 + 5) + (long)iVar1 * 8)
        ;
        ppuVar18 = *(undefined ***)(*(long *)(lVar40 + 0x20) + (ulong)*puVar16 * 8);
        if ((long *********)ppuVar18 == (long *********)0x14c5e2aa8c) {
          if ((int)puVar16[1] < 0) goto LAB_7101c036e0;
          pbVar32 = pbVar35 + (int)puVar16[1];
          lVar12 = lVar40;
          goto LAB_7101c036ec;
        }
        puVar16 = (uint *)(ulong)(iVar1 - 1U);
        uVar8 = iVar1 - 1U;
        if (ppuVar18 < (long *********)0x14c5e2aa8d) {
          iVar25 = iVar1 + 1;
          uVar8 = uVar26;
        }
        uVar26 = uVar8;
      } while (iVar25 <= (int)uVar26);
      lVar12 = 0;
    }
    else {
LAB_7101c036e0:
      lVar12 = 0;
      pbVar32 = &DAT_7104742dbb;
    }
LAB_7101c036ec:
    if (*pbVar32 == 9) {
      uVar17 = *(undefined8 *)(*(long *)(lVar12 + 0x20) + (long)*(int *)(pbVar32 + 1) * 8);
      if (bVar5 != 0xc) goto LAB_7101c037a4;
LAB_7101c0371c:
      uVar26 = *(int *)(pbVar35 + 1) - 1;
      if (*(int *)(pbVar35 + 1) < 1) goto LAB_7101c037a4;
      iVar25 = 0;
      pbVar32 = &DAT_7104742dbb;
      do {
        iVar1 = uVar26 + iVar25;
        if (iVar1 < 0) {
          iVar1 = iVar1 + 1;
        }
        uVar8 = iVar1 >> 1;
        puVar16 = (uint *)(ulong)uVar8;
        ppuVar18 = (undefined **)
                   (*(long *)(lVar40 + 0x28) + (long)*(int *)(pbVar35 + 5) + (long)(int)uVar8 * 8);
        ppppbVar20 = *(byte *****)(*(long *)(lVar40 + 0x20) + (ulong)*(uint *)ppuVar18 * 8);
        if (ppppbVar20 == (byte ****)0x15349ccd10) {
          if ((int)*(uint *)((long)ppuVar18 + 4) < 0) goto LAB_7101c037a4;
          pbVar32 = pbVar35 + (int)*(uint *)((long)ppuVar18 + 4);
          lVar12 = lVar40;
          goto LAB_7101c037b0;
        }
        ppuVar18 = (undefined **)(ulong)(uVar8 - 1);
        uVar9 = uVar8 - 1;
        if (ppppbVar20 < (byte ****)0x15349ccd11) {
          iVar25 = uVar8 + 1;
          uVar9 = uVar26;
        }
        uVar26 = uVar9;
      } while (iVar25 <= (int)uVar26);
      lVar12 = 0;
    }
    else {
      uVar17 = 0;
      if (bVar5 == 0xc) goto LAB_7101c0371c;
LAB_7101c037a4:
      pbVar32 = &DAT_7104742dbb;
      lVar12 = 0;
    }
LAB_7101c037b0:
    if (*pbVar32 == 9) {
      uVar36 = *(undefined8 *)(*(long *)(lVar12 + 0x20) + (long)*(int *)(pbVar32 + 1) * 8);
      if (bVar5 != 0xc) goto LAB_7101c03860;
LAB_7101c037e0:
      uVar26 = *(int *)(pbVar35 + 1) - 1;
      if (*(int *)(pbVar35 + 1) < 1) goto LAB_7101c03860;
      iVar25 = 0;
      pbVar32 = &DAT_7104742dbb;
      do {
        iVar1 = uVar26 + iVar25;
        if (iVar1 < 0) {
          iVar1 = iVar1 + 1;
        }
        iVar1 = iVar1 >> 1;
        puVar16 = (uint *)(*(long *)(lVar40 + 0x28) + (long)*(int *)(pbVar35 + 5) + (long)iVar1 * 8)
        ;
        ppuVar18 = *(undefined ***)(*(long *)(lVar40 + 0x20) + (ulong)*puVar16 * 8);
        if ((long *********)ppuVar18 == (long *********)0x11a1090eb4) {
          if ((int)puVar16[1] < 0) goto LAB_7101c03860;
          pbVar32 = pbVar35 + (int)puVar16[1];
          break;
        }
        puVar16 = (uint *)(ulong)(iVar1 - 1U);
        uVar8 = iVar1 - 1U;
        if (ppuVar18 < (long *********)0x11a1090eb5) {
          iVar25 = iVar1 + 1;
          uVar8 = uVar26;
        }
        uVar26 = uVar8;
      } while (iVar25 <= (int)uVar26);
    }
    else {
      uVar36 = 0;
      if (bVar5 == 0xc) goto LAB_7101c037e0;
LAB_7101c03860:
      pbVar32 = &DAT_7104742dbb;
    }
    switch(*pbVar32) {
    case 1:
    case 3:
      uVar26 = (uint)pbVar32[1];
      break;
    case 2:
      uVar26 = (uint)(char)pbVar32[1];
      break;
    case 4:
      uVar26 = (uint)*(short *)(pbVar32 + 1);
      break;
    case 5:
      uVar26 = (uint)*(ushort *)(pbVar32 + 1);
      break;
    case 6:
    case 7:
      uVar26 = *(uint *)(pbVar32 + 1);
      break;
    default:
      uVar26 = 0;
    }
  }
  else {
    if (iVar25 < 0) goto LAB_7101c035a8;
LAB_7101c03520:
    uVar17 = 0x2abe5d9303;
    uVar36 = 0x27d68a9fb9;
  }
  param_4[0x2dc] = uVar26;
  *(undefined8 *)(param_4 + 0x2d8) = uVar17;
  *(undefined8 *)(param_4 + 0x2da) = uVar36;
  if (param_4[0x26] < 1) {
    cVar37 = '\x01';
  }
  else {
    uVar38 = 0;
    piVar11 = param_4 + 0x27;
    cVar37 = '\x01';
    do {
      piVar4 = piVar11;
      if (7 < uVar38) {
        piVar4 = &DAT_710509ec08;
      }
      if ((piVar4[0x25] == *(int *)((long)pppplVar19 + 0x94)) && (piVar4[1] < iVar10)) {
        cVar37 = cVar37 + '\x01';
      }
      uVar38 = uVar38 + 1;
      piVar11 = piVar11 + 0x26;
    } while ((long)param_4[0x26] != uVar38);
  }
  lVar12 = *(long *)(DAT_710532f730 + 8);
  pppplVar21 = pppplVar41;
  if ((param_4[0x28] == iVar10) || (pppplVar21 = pppplVar29, param_4[0x4e] == iVar10)) {
LAB_7101c03908:
    iVar10 = *(int *)pppplVar21;
  }
  else {
    if (param_4[0x74] == iVar10) {
      pppplVar21 = (long ****)(param_4 + 0x73);
      goto LAB_7101c03908;
    }
    if (param_4[0x9a] == iVar10) {
      pppplVar21 = (long ****)(param_4 + 0x99);
      goto LAB_7101c03908;
    }
    if (param_4[0xc0] == iVar10) {
      pppplVar21 = (long ****)(param_4 + 0xbf);
      goto LAB_7101c03908;
    }
    if (param_4[0xe6] == iVar10) {
      pppplVar21 = (long ****)(param_4 + 0xe5);
      goto LAB_7101c03908;
    }
    if (param_4[0x10c] == iVar10) {
      pppplVar21 = (long ****)(param_4 + 0x10b);
      goto LAB_7101c03908;
    }
    if (param_4[0x132] == iVar10) {
      pppplVar21 = (long ****)(param_4 + 0x131);
      goto LAB_7101c03908;
    }
    iVar10 = 0;
  }
  uVar26 = param_4[0x2d6];
  pppplVar21 = pppplVar29;
  in_x5 = pppplVar19;
  if (0 < (int)uVar26) {
    uVar8 = 0;
    do {
      local_88 = (byte ***)&DAT_c1ffff0000000000;
      iVar25 = *param_4;
      ppppbVar20 = &local_88;
      pppplVar21 = &local_98;
      ppuVar18 = (undefined **)(ulong)uVar8;
      local_98 = (long ***)((ulong)local_98 & 0xffffffffffffff00);
      uVar38 = FUN_710179b7e0((long)piVar33,iVar10,uVar8,ppppbVar20,(undefined1 *)pppplVar21);
      pppbVar14 = local_88;
      puVar16 = extraout_x1_03;
      if ((uVar38 & 1) != 0) {
        lVar40 = *(long *)(*(long *)(DAT_710532f730 + 8) + 0x168);
        uVar9 = FUN_71032632a0(lVar40,(ulong)local_88);
        if ((uVar9 & 1) != 0) {
          pppbVar14 = (byte ***)FUN_71032631a0(lVar40,0x11b1ccb807);
        }
        if (param_4[0x2d6] + ~param_4[5] < (int)uVar8) {
          iVar25 = param_4[1];
        }
        uVar38 = (ulong)local_98 & 0xff;
        plVar44 = *(long **)(param_4 + 0x1e);
        local_88 = pppbVar14;
        local_e0 = (undefined **)FUN_7103238a70((ulong)pppbVar14,uVar38,iVar25);
        if (((ulong)local_e0 & 0xffffffffff) != 0) {
          lVar40 = *plVar44;
          ppppbVar20 = (byte ****)(ulong)*(uint *)(lVar40 + 0x68);
          FUN_710323c4e0(lVar40,&local_e0,(long *********)(long)*(int *)(lVar40 + 0x70),ppppbVar20,
                         pppplVar21,in_x5,in_x6,in_x7);
        }
        ppuVar18 = (undefined **)(ulong)(uint)param_4[2];
        plVar44 = *(long **)(param_4 + 0x1e);
        local_e0 = (undefined **)FUN_7103238a70((ulong)pppbVar14,uVar38,param_4[2]);
        if (((ulong)local_e0 & 0xffffffffff) != 0) {
          lVar40 = *plVar44;
          ppuVar18 = (undefined **)(long)*(int *)(lVar40 + 0x70);
          ppppbVar20 = (byte ****)(ulong)*(uint *)(lVar40 + 0x68);
          FUN_710323c4e0(lVar40,&local_e0,(long *********)ppuVar18,ppppbVar20,pppplVar21,in_x5,in_x6
                         ,in_x7);
        }
        plVar44 = *(long **)(param_4 + 0x1e);
        uVar38 = FUN_7103263f80(*(long *)(lVar12 + 0x168),(ulong)pppbVar14);
        local_e0 = (undefined **)FUN_7103238d60(uVar38,param_4[3]);
        puVar16 = extraout_x1_04;
        if (((ulong)local_e0 & 0xffffffffff) != 0) {
          lVar40 = *plVar44;
          ppuVar18 = (undefined **)(long)*(int *)(lVar40 + 0x70);
          ppppbVar20 = (byte ****)(ulong)*(uint *)(lVar40 + 0x68);
          FUN_710323c4e0(lVar40,&local_e0,(long *********)ppuVar18,ppppbVar20,pppplVar21,in_x5,in_x6
                         ,in_x7);
          puVar16 = extraout_x1_05;
        }
      }
      uVar8 = uVar8 + 1;
    } while (uVar26 != uVar8);
  }
  lVar12 = **(long **)(param_4 + 0x1e);
  uVar38 = FUN_710323cb80(lVar12,puVar16,(long *********)ppuVar18,ppppbVar20,pppplVar21,in_x5,in_x6,
                          in_x7);
  while ((uVar38 & 1) == 0) {
    nn::os::SleepThread(1000000);
    uVar38 = FUN_710323cb80(lVar12,extraout_x1_06,(long *********)ppuVar18,ppppbVar20,pppplVar21,
                            in_x5,in_x6,in_x7);
  }
  if (*(int *)((long)pppplVar19 + 0x94) == 0) {
    ppuVar18 = (undefined **)(ulong)*(uint *)(pppplVar19 + 1);
    FUN_7103778430(**(long **)piVar22 + 8,"player_color_%dp",ppuVar18,ppppbVar20,pppplVar21,in_x5,
                   in_x6,in_x7);
  }
  else {
    FUN_7103778430(**(long **)piVar22 + 8,"player_color_cp",ppuVar18,ppppbVar20,pppplVar21,in_x5,
                   in_x6,in_x7);
  }
  if (*(int *)((long)pppplVar19 + 0x94) == 3) {
    pcVar34 = (char *)0x0;
    iVar10 = *(int *)(pppplVar19 + 2);
joined_r0x007101c03b20:
    if (iVar10 != 0) goto LAB_7101c03bcc;
LAB_7101c03c48:
    FUN_7103776910(&local_e0,**(long **)piVar22 + 8,(long ****)"set_txt_fighter_name",ppuVar18,
                   ppppbVar20,pppplVar21,in_x5,in_x6,in_x7);
    ppppbVar20 = (byte ****)(ulong)(uint)(int)cVar37;
    pppplVar19 = (long ****)0x1;
    FUN_710377a280((long)&local_e0,(byte *)pcVar34,1);
    uVar45 = extraout_s0_00;
    uVar46 = extraout_var_00;
    uVar17 = extraout_var_10;
  }
  else {
    if (*(int *)((long)pppplVar19 + 0x94) != 0) {
      FUN_7103776910(&local_88,**(long **)piVar22 + 8,(long ****)"set_txt_winner_player",ppuVar18,
                     ppppbVar20,pppplVar21,in_x5,in_x6,in_x7);
      uVar8 = 99;
      uVar26 = 0x811c9dc5;
      local_d8 = (long *)CONCAT17(local_d8._7_1_,0x70635f6e6d63);
      pbVar32 = (byte *)((long)&local_d8 + 1);
      do {
        uVar26 = uVar26 * 0x89 ^ uVar8;
        uVar8 = (uint)*pbVar32;
        pbVar32 = pbVar32 + 1;
      } while (uVar8 != 0);
      local_e0 = (undefined **)CONCAT44(6,uVar26);
      FUN_710377a120((long)&local_88,(char *)&local_d8,ppuVar18,ppppbVar20,pppplVar21,in_x5,in_x6,
                     in_x7);
      plVar44 = local_80;
      local_88 = (byte ***)&PTR_FUN_710523d9a8;
      local_80 = (long *)0x0;
      if (plVar44 != (long *)0x0) {
        FUN_710392eb40((ulong)plVar44);
      }
      pcVar34 = "mel_sp_allbattle_computer_n";
      iVar10 = *(int *)(pppplVar19 + 2);
      goto joined_r0x007101c03b20;
    }
    FUN_7103776910(&local_88,**(long **)piVar22 + 8,(long ****)"set_txt_winner_player",ppuVar18,
                   ppppbVar20,pppplVar21,in_x5,in_x6,in_x7);
    if (*(uint *)(pppplVar19 + 1) == 0xffffffff) {
      local_d8 = (long *)((ulong)local_d8 & 0xffffffffffffff00);
      local_e0 = (undefined **)0x0;
    }
    else {
      FUN_71003a4ca0((uint *)&local_e0,"cmn_%dp",(ulong)*(uint *)(pppplVar19 + 1),ppuVar18,
                     ppppbVar20,pppplVar21,in_x5,in_x6,in_x7);
    }
    FUN_710377a120((long)&local_88,(char *)&local_d8,ppuVar18,ppppbVar20,pppplVar21,in_x5,in_x6,
                   in_x7);
    plVar44 = local_80;
    local_88 = (byte ***)&PTR_FUN_710523d9a8;
    local_80 = (long *)0x0;
    if (plVar44 != (long *)0x0) {
      FUN_710392eb40((ulong)plVar44);
    }
    pcVar34 = "mel_sp_allbattle_player_n";
    if (*(int *)(pppplVar19 + 2) == 0) goto LAB_7101c03c48;
LAB_7101c03bcc:
    FUN_7103776910(&local_e0,**(long **)piVar22 + 8,(long ****)"set_txt_fighter_name",ppuVar18,
                   ppppbVar20,pppplVar21,in_x5,in_x6,in_x7);
    ppppbVar20 = (byte ****)((long)pppplVar19 + 0x14);
    pppplVar19 = (long ****)0x1;
    FUN_710377a280((long)&local_e0,(byte *)"mel_sp_allbattle_nam",1);
    uVar45 = extraout_s0;
    uVar46 = extraout_var;
    uVar17 = extraout_var_09;
  }
  uVar38 = (ulong)local_d8;
  local_e0 = &PTR_FUN_710523d9a8;
  local_d8 = (long *)0x0;
  if (uVar38 != 0) {
    FUN_710392eb40(uVar38);
    uVar45 = extraout_s0_01;
    uVar46 = extraout_var_01;
    uVar17 = extraout_var_11;
  }
  iVar10 = param_4[0x296];
  pppplVar23 = pppplVar41;
  if ((param_4[0x28] == iVar10) || (pppplVar23 = pppplVar29, param_4[0x4e] == iVar10)) {
LAB_7101c03d34:
    iVar10 = *(int *)pppplVar23;
  }
  else {
    if (param_4[0x74] == iVar10) {
      pppplVar23 = (long ****)(param_4 + 0x73);
      goto LAB_7101c03d34;
    }
    if (param_4[0x9a] == iVar10) {
      pppplVar23 = (long ****)(param_4 + 0x99);
      goto LAB_7101c03d34;
    }
    if (param_4[0xc0] == iVar10) {
      pppplVar23 = (long ****)(param_4 + 0xbf);
      goto LAB_7101c03d34;
    }
    if (param_4[0xe6] == iVar10) {
      pppplVar23 = (long ****)(param_4 + 0xe5);
      goto LAB_7101c03d34;
    }
    if (param_4[0x10c] == iVar10) {
      pppplVar23 = (long ****)(param_4 + 0x10b);
      goto LAB_7101c03d34;
    }
    if (param_4[0x132] == iVar10) {
      pppplVar23 = (long ****)(param_4 + 0x131);
      goto LAB_7101c03d34;
    }
    iVar10 = 0;
  }
  if ((*(int *)pppplVar41 != iVar10) && (pppplVar41 = pppplVar29, param_4[0x4d] != iVar10)) {
    if (param_4[0x73] == iVar10) {
      pppplVar41 = (long ****)(param_4 + 0x73);
    }
    else if (param_4[0x99] == iVar10) {
      pppplVar41 = (long ****)(param_4 + 0x99);
    }
    else if (param_4[0xbf] == iVar10) {
      pppplVar41 = (long ****)(param_4 + 0xbf);
    }
    else if (param_4[0xe5] == iVar10) {
      pppplVar41 = (long ****)(param_4 + 0xe5);
    }
    else if (param_4[0x10b] == iVar10) {
      pppplVar41 = (long ****)(param_4 + 0x10b);
    }
    else {
      pppplVar41 = (long ****)(param_4 + 0x131);
      if (param_4[0x131] != iVar10) {
        pppplVar41 = (long ****)&DAT_710509ec08;
      }
    }
  }
  iVar10 = param_4[4];
  if (0 < iVar10) {
    iVar1 = param_4[0x2d6];
    iVar25 = 0;
    iVar43 = -1;
    do {
      uVar26 = iVar10 + iVar43;
      FUN_7103776910(&local_e0,**(long **)piVar22 + 8,(long ****)"set_panel_eff_%02d",(ulong)uVar26,
                     ppppbVar20,pppplVar21,in_x5,in_x6,in_x7);
      plVar44 = local_d8;
      lVar12 = *local_d8;
      if (lVar12 != 0) {
        *(byte *)(lVar12 + 0x58) = *(byte *)(lVar12 + 0x58) & 0xfe;
      }
      local_e0 = &PTR_FUN_710523d9a8;
      local_d8 = (long *)0x0;
      if (plVar44 != (long *)0x0) {
        FUN_710392eb40((ulong)plVar44);
      }
      pppplVar19 = (long ****)(ulong)uVar26;
      FUN_7103776910(&local_e0,**(long **)piVar22 + 8,(long ****)"set_parts_panel_%02d",pppplVar19,
                     ppppbVar20,pppplVar21,in_x5,in_x6,in_x7);
      plVar44 = local_d8;
      lVar12 = *local_d8;
      if (lVar12 != 0) {
        *(byte *)(lVar12 + 0x58) = *(byte *)(lVar12 + 0x58) & 0xfe;
      }
      local_e0 = &PTR_FUN_710523d9a8;
      local_d8 = (long *)0x0;
      uVar45 = extraout_s0_02;
      uVar46 = extraout_var_02;
      uVar17 = extraout_var_12;
      if (plVar44 != (long *)0x0) {
        FUN_710392eb40((ulong)plVar44);
        uVar45 = extraout_s0_03;
        uVar46 = extraout_var_03;
        uVar17 = extraout_var_13;
      }
      if (iVar25 < iVar1) {
        if (*(int *)((long)pppplVar41 + 0x94) == 0) {
          FUN_7103776640(&local_e0,**(long **)piVar22 + 8,(byte ****)"set_parts_panel_%02d",
                         (ulong)uVar26,ppppbVar20,pppplVar21,in_x5,in_x6,in_x7);
          FUN_7103778430((long)&local_e0,"player_color_%dp",(ulong)*(uint *)(pppplVar41 + 1),
                         ppppbVar20,pppplVar21,in_x5,in_x6,in_x7);
        }
        else {
          uVar38 = (ulong)uVar26;
          FUN_7103776640(&local_e0,**(long **)piVar22 + 8,(byte ****)"set_parts_panel_%02d",uVar38,
                         ppppbVar20,pppplVar21,in_x5,in_x6,in_x7);
          FUN_7103778430((long)&local_e0,"player_color_cp",uVar38,ppppbVar20,pppplVar21,in_x5,in_x6,
                         in_x7);
        }
        plVar44 = local_d8;
        local_e0 = &PTR_FUN_710523d988;
        local_d8 = (long *)0x0;
        if (plVar44 != (long *)0x0) {
          uVar38 = plVar44[3];
          plVar44[2] = (long)&PTR_FUN_710523d9a8;
          plVar44[3] = 0;
          if (uVar38 != 0) {
            FUN_710392eb40(uVar38);
          }
          FUN_710392eb40((ulong)plVar44);
        }
        pppplVar19 = (long ****)(ulong)uVar26;
        FUN_7103776640(&local_e0,**(long **)piVar22 + 8,(byte ****)"set_parts_panel_%02d",pppplVar19
                       ,ppppbVar20,pppplVar21,in_x5,in_x6,in_x7);
        FUN_7103776910(&local_88,(long)&local_e0,(long ****)"set_rep_b_00",pppplVar19,ppppbVar20,
                       pppplVar21,in_x5,in_x6,in_x7);
        plVar44 = local_80;
        lVar12 = *local_80;
        if (lVar12 != 0) {
          *(byte *)(lVar12 + 0x58) = *(byte *)(lVar12 + 0x58) & 0xfe;
        }
        local_88 = (byte ***)&PTR_FUN_710523d9a8;
        local_80 = (long *)0x0;
        if (plVar44 != (long *)0x0) {
          FUN_710392eb40((ulong)plVar44);
        }
        FUN_7103776910(&local_88,(long)&local_e0,(long ****)"set_rep_b_01",pppplVar19,ppppbVar20,
                       pppplVar21,in_x5,in_x6,in_x7);
        plVar44 = local_80;
        lVar12 = *local_80;
        if (lVar12 != 0) {
          *(byte *)(lVar12 + 0x58) = *(byte *)(lVar12 + 0x58) & 0xfe;
        }
        local_88 = (byte ***)&PTR_FUN_710523d9a8;
        local_80 = (long *)0x0;
        uVar45 = extraout_s0_04;
        uVar46 = extraout_var_04;
        uVar17 = extraout_var_14;
        if (plVar44 != (long *)0x0) {
          FUN_710392eb40((ulong)plVar44);
          uVar45 = extraout_s0_05;
          uVar46 = extraout_var_05;
          uVar17 = extraout_var_15;
        }
        uVar38 = (ulong)local_d8;
        local_e0 = &PTR_FUN_710523d988;
        local_d8 = (long *)0x0;
        if (uVar38 != 0) {
          uVar13 = *(ulong *)(uVar38 + 0x18);
          *(undefined ***)(uVar38 + 0x10) = &PTR_FUN_710523d9a8;
          *(undefined8 *)(uVar38 + 0x18) = 0;
          if (uVar13 != 0) {
            FUN_710392eb40(uVar13);
          }
          FUN_710392eb40(uVar38);
          uVar45 = extraout_s0_06;
          uVar46 = extraout_var_06;
          uVar17 = extraout_var_16;
        }
      }
      iVar10 = param_4[4];
      iVar25 = iVar25 + 1;
      iVar43 = iVar43 + -1;
    } while (iVar25 < iVar10);
  }
  if (0 < param_4[6]) {
    pppplVar41 = (long ****)0x0;
    do {
      pppplVar19 = pppplVar41;
      FUN_7103776640(&local_e0,**(long **)piVar22 + 8,(byte ****)"set_parts_ico_%02d",pppplVar41,
                     ppppbVar20,pppplVar21,in_x5,in_x6,in_x7);
      plVar44 = local_d8;
      FUN_7103778300(0x3f800000,(long)local_d8,0x71043cd335);
      local_e0 = &PTR_FUN_710523d988;
      local_d8 = (long *)0x0;
      uVar45 = extraout_s0_07;
      uVar46 = extraout_var_07;
      uVar17 = extraout_var_17;
      if (plVar44 != (long *)0x0) {
        uVar38 = plVar44[3];
        plVar44[2] = (long)&PTR_FUN_710523d9a8;
        plVar44[3] = 0;
        if (uVar38 != 0) {
          FUN_710392eb40(uVar38);
        }
        FUN_710392eb40((ulong)plVar44);
        uVar45 = extraout_s0_08;
        uVar46 = extraout_var_08;
        uVar17 = extraout_var_18;
      }
      pppplVar41 = (long ****)((long)pppplVar41 + 1);
    } while ((long)pppplVar41 < (long)param_4[6]);
  }
  param_4[0x2f2] = 0;
  param_4[0x2f0] = 0;
  *(undefined1 *)(param_4 + 0x2f7) = 0;
  *(bool *)((long)param_4 + 0xbdf) = param_4[0x2f3] != 1;
  auVar6._4_4_ = uVar46;
  auVar6._0_4_ = uVar45;
  auVar6._8_8_ = uVar17;
  FUN_7101bfed30(auVar6,param_2,param_3,(long)param_4,0);
  param_4[0x2d5] = 0;
  FUN_7103776390(&local_e0,(undefined8 *)(**(long **)(param_4 + 0x20) + 8),pppplVar19,ppppbVar20,
                 pppplVar21,in_x5,in_x6,in_x7);
  FUN_7103776910(&local_88,(long)&local_e0,(long ****)"set_fxui_confetti",pppplVar19,ppppbVar20,
                 pppplVar21,in_x5,in_x6,in_x7);
  plVar44 = local_80;
  plVar28 = FUN_710377aae0((long *)*local_80);
  if (plVar28 != (long *)0x0) {
    *(undefined4 *)(plVar28 + 0x24) = 0x2000000;
  }
  local_88 = (byte ***)&PTR_FUN_710523d9a8;
  local_80 = (long *)0x0;
  if (plVar44 != (long *)0x0) {
    FUN_710392eb40((ulong)plVar44);
  }
  plVar44 = local_d8;
  local_e0 = &PTR_FUN_710523d988;
  local_d8 = (long *)0x0;
  if (plVar44 != (long *)0x0) {
    uVar38 = plVar44[3];
    plVar44[2] = (long)&PTR_FUN_710523d9a8;
    plVar44[3] = 0;
    if (uVar38 != 0) {
      FUN_710392eb40(uVar38);
    }
    FUN_710392eb40((ulong)plVar44);
  }
  FUN_7101bff110((long)param_4,*(ulong *)(param_4 + 0x2d8),pppplVar19,ppppbVar20,pppplVar21,in_x5,
                 in_x6,in_x7);
  param_4[0x2d7] = param_4[0xd];
LAB_7101c04160:
  FUN_71033145d0(DAT_710532f8d0,0xd9ffff190cdf8dca,1,ppppbVar20,pppplVar21,in_x5,in_x6,in_x7);
  return;
}

