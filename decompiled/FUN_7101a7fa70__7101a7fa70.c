// addr:      7101a7fa70
// offset:    0x1a7fa70
// name:      FUN_7101a7fa70
// mangled:   
// signature: undefined __cdecl FUN_7101a7fa70(undefined8 param_1, int param_2, char * param_3, ulong param_4, long * * * * param_5, ulong param_6, undefined8 param_7, undefined8 param_8)


/* WARNING: Type propagation algorithm not settling */

void FUN_7101a7fa70(undefined8 param_1,int param_2,char *param_3,ulong param_4,long ****param_5,
                   ulong param_6,undefined8 param_7,undefined8 param_8)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  ulong uVar4;
  long *plVar5;
  undefined8 *puVar6;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 uVar7;
  byte *pbVar8;
  char *pcVar9;
  ulong uVar10;
  uint uVar11;
  uint uVar12;
  ulong uVar13;
  long *plVar14;
  byte *pbVar15;
  long lVar16;
  uint uVar17;
  uint uVar18;
  undefined ***pppuVar19;
  undefined8 *puVar20;
  long lVar21;
  long *plVar22;
  undefined **local_460;
  ulong local_458;
  uint local_450;
  undefined4 local_44c;
  byte local_448 [64];
  uint local_408;
  undefined4 local_404;
  byte local_400 [64];
  uint local_3c0;
  undefined4 local_3bc;
  byte local_3b8 [64];
  uint local_378;
  undefined4 local_374;
  byte local_370 [64];
  uint local_330;
  undefined4 local_32c;
  byte local_328 [64];
  uint local_2e8;
  undefined4 local_2e4;
  byte local_2e0 [64];
  uint local_2a0;
  undefined4 local_29c;
  byte local_298 [64];
  uint local_258;
  undefined4 local_254;
  byte local_250 [64];
  uint local_210;
  undefined4 local_20c;
  byte local_208 [64];
  ulong local_1c8;
  undefined8 local_1c0;
  undefined8 local_1b8;
  undefined2 local_1b0;
  undefined2 uStack_1ae;
  undefined1 uStack_1ac;
  undefined1 uStack_1ab;
  undefined1 uStack_1aa;
  undefined1 uStack_1a9;
  undefined1 uStack_1a8;
  undefined1 uStack_1a7;
  undefined2 local_1a6;
  undefined8 local_180;
  byte local_178 [64];
  undefined **local_138;
  uint local_130;
  uint uStack_12c;
  undefined4 local_128;
  byte local_124 [68];
  undefined8 local_e0;
  ulong local_d8;
  undefined8 local_d0;
  undefined **local_c8;
  ulong local_c0;
  undefined **local_b8;
  ulong local_b0;
  undefined **local_a8;
  ulong local_a0;
  undefined **local_98;
  ulong local_90;
  undefined **local_88;
  ulong local_80;
  
  pcVar9 = param_3;
  uVar10 = param_4;
  FUN_7103776910(&local_88,(long)param_3,(long ****)"set_txt_mongon",param_3,param_4,param_5,param_6
                 ,param_7,param_8);
  FUN_7103776910(&local_98,(long)param_3,(long ****)"set_txt_category",pcVar9,uVar10,param_5,param_6
                 ,param_7,param_8);
  FUN_7103776910(&local_a8,(long)param_3,(long ****)"set_txt_main",pcVar9,uVar10,param_5,param_6,
                 param_7,param_8);
  FUN_7103776640(&local_138,(long)param_3,(byte ****)"set_parts_text_scroll",pcVar9,uVar10,param_5,
                 param_6,param_7,param_8);
  FUN_7103776910(&local_b8,(long)&local_138,(long ****)"set_txt_mask",pcVar9,uVar10,param_5,param_6,
                 param_7,param_8);
  uVar13 = CONCAT44(uStack_12c,local_130);
  local_138 = &PTR_FUN_710523d988;
  local_130 = 0;
  uStack_12c = 0;
  if (uVar13 != 0) {
    uVar4 = *(ulong *)(uVar13 + 0x18);
    *(undefined ***)(uVar13 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar13 + 0x18) = 0;
    if (uVar4 != 0) {
      FUN_710392eb40(uVar4);
    }
    FUN_710392eb40(uVar13);
  }
  FUN_7103776640(&local_138,(long)param_3,(byte ****)"set_parts_text_scroll",pcVar9,uVar10,param_5,
                 param_6,param_7,param_8);
  FUN_7103776910(&local_c8,(long)&local_138,(long ****)"set_txt_main",pcVar9,uVar10,param_5,param_6,
                 param_7,param_8);
  uVar13 = CONCAT44(uStack_12c,local_130);
  local_138 = &PTR_FUN_710523d988;
  local_130 = 0;
  uStack_12c = 0;
  uVar7 = extraout_x1;
  if (uVar13 != 0) {
    uVar4 = *(ulong *)(uVar13 + 0x18);
    *(undefined ***)(uVar13 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar13 + 0x18) = 0;
    if (uVar4 != 0) {
      FUN_710392eb40(uVar4);
    }
    FUN_710392eb40(uVar13);
    uVar7 = extraout_x1_00;
  }
  local_130 = 0xffffffff;
  local_138 = (undefined **)0x0;
  local_124[0] = 0;
  uStack_12c = 0;
  local_128 = 0;
  local_e0 = 0;
  local_d8 = CONCAT44(local_d8._4_4_,2);
  local_d0 = 0;
  if (0x70 < param_2) goto LAB_7101a81298;
  lVar16 = *(long *)(*(long *)(DAT_7105328748 + 8) + 0x4d8);
  pppuVar19 = (undefined ***)(lVar16 + (long)param_2 * 0x70);
  local_138 = *pppuVar19;
  local_130 = *(uint *)(pppuVar19 + 1);
  uVar12 = 0x811c9dc5;
  if (pppuVar19 != &local_138) {
    uVar13 = 0;
    while( true ) {
      pbVar8 = (byte *)(lVar16 + (long)param_2 * 0x70 + 0x14 + uVar13);
      bVar1 = *pbVar8;
      if (bVar1 == 0) break;
      local_124[uVar13] = bVar1;
      if (0x3e < (int)uVar13 + 1U) {
        uVar13 = (ulong)((int)uVar13 + 1);
        break;
      }
      bVar1 = pbVar8[1];
      if (bVar1 == 0) {
        uVar13 = uVar13 + 1;
        break;
      }
      local_124[uVar13 + 1] = bVar1;
      uVar13 = uVar13 + 2;
    }
    local_124[uVar13 & 0xffffffff] = 0;
    local_128 = (int)uVar13;
    uVar17 = (uint)local_124[0];
    uStack_12c = uVar12;
    if (local_124[0] != 0) {
      pbVar8 = local_124;
      do {
        pbVar8 = pbVar8 + 1;
        uStack_12c = uStack_12c * 0x89 ^ uVar17;
        uVar17 = (uint)*pbVar8;
      } while (uVar17 != 0);
    }
  }
  lVar16 = lVar16 + (long)param_2 * 0x70;
  local_d8 = *(ulong *)(lVar16 + 0x60);
  uVar13 = local_d8;
  local_d0 = *(undefined8 *)(lVar16 + 0x68);
  local_e0 = *(undefined8 *)(lVar16 + 0x58);
  local_d8._0_4_ = (uint)*(ulong *)(lVar16 + 0x60);
  local_d8 = uVar13;
  if ((uint)local_d8 == 0) {
    if (*(long **)(local_80 + 0x10) != (long *)0x0) {
      local_180 = local_180 & 0xffffffff00000000;
      FUN_71037a2270(*(long **)(local_80 + 0x10),(ushort *)&local_180,0,0);
    }
    if (*(long **)(local_90 + 0x10) != (long *)0x0) {
      local_180 = local_180 & 0xffffffff00000000;
      FUN_71037a2270(*(long **)(local_90 + 0x10),(ushort *)&local_180,0,0);
    }
    if (*(long **)(local_a0 + 0x10) != (long *)0x0) {
      local_180 = local_180 & 0xffffffff00000000;
      FUN_71037a2270(*(long **)(local_a0 + 0x10),(ushort *)&local_180,0,0);
    }
    if (*(long **)(local_b0 + 0x10) != (long *)0x0) {
      local_180 = local_180 & 0xffffffff00000000;
      FUN_71037a2270(*(long **)(local_b0 + 0x10),(ushort *)&local_180,0,0);
    }
    if (*(long **)(local_c0 + 0x10) != (long *)0x0) {
      local_180 = local_180 & 0xffffffff00000000;
      FUN_71037a2270(*(long **)(local_c0 + 0x10),(ushort *)&local_180,0,0);
    }
    lVar16 = **(long **)(param_4 + 8);
    if (lVar16 != 0) {
      *(byte *)(lVar16 + 0x58) = *(byte *)(lVar16 + 0x58) & 0xfe;
    }
    goto LAB_7101a81298;
  }
  lVar16 = **(long **)(param_4 + 8);
  if (lVar16 != 0) {
    *(byte *)(lVar16 + 0x58) = *(byte *)(lVar16 + 0x58) | 1;
  }
  if ((uint)local_d8 < 2) {
    if ((uint)local_d8 == 1) {
      uVar17 = uVar12;
      switch((ulong)local_138 & 0xffffffff) {
      case 0:
        local_1c0 = 0x6f6365725f756e6d;
        local_1b8 = 0x746e756f635f6472;
        local_1c8 = 0x1700000000;
        local_1b0 = 0x635f;
        uStack_1ae = 0x6d6f;
        uStack_1ac = 0x6d;
        uStack_1ab = 0x6f;
        uStack_1aa = 0x6e;
        uStack_1a9 = 0;
        uVar11 = 0x6d;
        pbVar8 = (byte *)((long)&local_1c0 + 1);
        do {
          uVar17 = uVar17 * 0x89 ^ uVar11;
          uVar11 = (uint)*pbVar8;
          pbVar8 = pbVar8 + 1;
        } while (uVar11 != 0);
        break;
      case 1:
        local_1c0 = 0x6f6365725f756e6d;
        local_1b8 = 0x746e756f635f6472;
        local_1c8 = 0x1600000000;
        local_1b0 = 27999;
        uStack_1ae = 0x6c65;
        uStack_1ac = 0x65;
        uStack_1ab = 0x65;
        uVar11 = 0x6d;
        uStack_1aa = 0;
        pbVar8 = (byte *)((long)&local_1c0 + 1);
        do {
          uVar17 = uVar17 * 0x89 ^ uVar11;
          uVar11 = (uint)*pbVar8;
          pbVar8 = pbVar8 + 1;
        } while (uVar11 != 0);
        break;
      case 2:
        local_1c0 = 0x6f6365725f756e6d;
        local_1b8 = 0x746e756f635f6472;
        local_1c8 = 0x1800000000;
        local_1b0 = 0x735f;
        uStack_1ae = 0x6970;
        uStack_1ac = 0x72;
        uStack_1ab = 0x69;
        uStack_1a8 = 0;
        uStack_1aa = 0x74;
        uStack_1a9 = 0x73;
        uVar11 = 0x6d;
        pbVar8 = (byte *)((long)&local_1c0 + 1);
        do {
          uVar17 = uVar17 * 0x89 ^ uVar11;
          uVar11 = (uint)*pbVar8;
          pbVar8 = pbVar8 + 1;
        } while (uVar11 != 0);
        break;
      case 3:
        local_1c0 = 0x6f6365725f756e6d;
        local_1b8 = 0x746e756f635f6472;
        local_1c8 = 0x1600000000;
        local_1b0 = 0x6f5f;
        uStack_1ae = 0x6874;
        uStack_1ac = 0x65;
        uStack_1ab = 0x72;
        uVar11 = 0x6d;
        uStack_1aa = 0;
        pbVar8 = (byte *)((long)&local_1c0 + 1);
        do {
          uVar17 = uVar17 * 0x89 ^ uVar11;
          uVar11 = (uint)*pbVar8;
          pbVar8 = pbVar8 + 1;
        } while (uVar11 != 0);
        break;
      case 4:
        local_1c0 = 0x6f6365725f756e6d;
        local_1b8 = 0x746e756f635f6472;
        local_1b0 = 0x635f;
        local_1c8 = 0x1b00000000;
        uStack_1ae = 0x6c6f;
        uStack_1ac = 0x6c;
        uStack_1ab = 0x65;
        uStack_1aa = 99;
        uStack_1a9 = 0x74;
        uStack_1a8 = 0x69;
        uStack_1a7 = 0x6f;
        local_1a6 = 0x6e;
        uVar11 = 0x6d;
        pbVar8 = (byte *)((long)&local_1c0 + 1);
        do {
          uVar17 = uVar17 * 0x89 ^ uVar11;
          uVar11 = (uint)*pbVar8;
          pbVar8 = pbVar8 + 1;
        } while (uVar11 != 0);
        break;
      case 5:
        local_1c0 = 0x6f6365725f756e6d;
        local_1b8 = 0x746e756f635f6472;
        local_1c8 = 0x1700000000;
        local_1b0 = 0x6f5f;
        uStack_1ae = 0x6c6e;
        uStack_1ac = 0x69;
        uStack_1ab = 0x6e;
        uStack_1aa = 0x65;
        uStack_1a9 = 0;
        uVar11 = 0x6d;
        pbVar8 = (byte *)((long)&local_1c0 + 1);
        do {
          uVar17 = uVar17 * 0x89 ^ uVar11;
          uVar11 = (uint)*pbVar8;
          pbVar8 = pbVar8 + 1;
        } while (uVar11 != 0);
        break;
      case 6:
        local_1c0 = 0x6f6365725f756e6d;
        local_1b8 = 0x746e756f635f6472;
        local_1c8 = 0x1800000000;
        local_1b0 = 0x665f;
        uStack_1ae = 0x6769;
        uStack_1ac = 0x68;
        uStack_1ab = 0x74;
        uStack_1a8 = 0;
        uStack_1aa = 0x65;
        uStack_1a9 = 0x72;
        uVar11 = 0x6d;
        pbVar8 = (byte *)((long)&local_1c0 + 1);
        do {
          uVar17 = uVar17 * 0x89 ^ uVar11;
          uVar11 = (uint)*pbVar8;
          pbVar8 = pbVar8 + 1;
        } while (uVar11 != 0);
        break;
      case 7:
        local_1c0 = 0x6f6365725f756e6d;
        local_1c8 = 0x1400000000;
        uStack_1ac = 0;
        local_1b8 = 0x746e756f635f6472;
        local_1b0 = 0x655f;
        uStack_1ae = 0x6374;
        uVar11 = 0x6d;
        pbVar8 = (byte *)((long)&local_1c0 + 1);
        do {
          uVar17 = uVar17 * 0x89 ^ uVar11;
          uVar11 = (uint)*pbVar8;
          pbVar8 = pbVar8 + 1;
        } while (uVar11 != 0);
        break;
      default:
        goto switchD_7101a7fd08_default;
      }
      local_1b8 = 0x746e756f635f6472;
      local_1c0 = 0x6f6365725f756e6d;
      local_1c8 = CONCAT44(local_1c8._4_4_,uVar17);
    }
    else {
switchD_7101a7fd08_default:
      local_1c0 = local_1c0 & 0xffffffffffffff00;
      local_1c8 = 0;
    }
  }
  else {
    uVar10 = (ulong)local_130;
    pcVar9 = "mnu_record_count_index_%02d";
    FUN_710176bcc0((uint *)&local_1c8,uVar7,"mnu_record_count_index_%02d",uVar10,param_5,param_6,
                   param_7,param_8);
  }
  local_180 = 0;
  for (uVar13 = 0; *(byte *)((long)&local_1c0 + uVar13) != 0; uVar13 = uVar13 + 2) {
    local_178[uVar13] = *(byte *)((long)&local_1c0 + uVar13);
    if (0x3e < (int)uVar13 + 1U) {
      uVar13 = (ulong)((int)uVar13 + 1);
      break;
    }
    bVar1 = *(byte *)((long)&local_1c0 + uVar13 + 1);
    if (bVar1 == 0) {
      uVar13 = uVar13 + 1;
      break;
    }
    local_178[uVar13 + 1] = bVar1;
  }
  local_178[uVar13 & 0xffffffff] = 0;
  local_180 = uVar13 << 0x20;
  uVar11 = (uint)local_178[0];
  uVar17 = uVar12;
  if (local_178[0] != 0) {
    pbVar8 = local_178;
    do {
      pbVar8 = pbVar8 + 1;
      uVar17 = uVar17 * 0x89 ^ uVar11;
      uVar11 = (uint)*pbVar8;
    } while (uVar11 != 0);
  }
  local_180 = CONCAT44((int)uVar13,uVar17);
  lVar21 = *(long *)(param_3 + 8);
  lVar16 = *(long *)(lVar21 + 8);
  if ((uint)local_d8 == 1) {
    if ((lVar16 != 0) &&
       (plVar5 = (long *)FUN_71037964b0(lVar16,0x71043f15a8), plVar5 != (long *)0x0)) {
      (**(code **)(*plVar5 + 0x140))(plVar5,1);
      lVar16 = *(long *)(lVar21 + 8);
      if (lVar16 != 0) {
        plVar22 = *(long **)(lVar16 + 0x80);
        while (plVar22 != (long *)(lVar16 + 0x88)) {
          uVar13 = (**(code **)(*(long *)plVar22[0xd] + 0x148))();
          if (((uVar13 & 1) != 0) &&
             (uVar13 = (**(code **)(*plVar5 + 0x120))(plVar5,plVar22[0xd]), (uVar13 & 1) != 0)) {
            (**(code **)(*(long *)plVar22[0xd] + 0x178))();
            (**(code **)(*(long *)plVar22[0xd] + 0x140))((long *)plVar22[0xd],0);
          }
          plVar14 = (long *)plVar22[1];
          if ((long *)plVar22[1] == (long *)0x0) {
            plVar14 = plVar22 + 2;
            bVar2 = *(long **)*plVar14 != plVar22;
            plVar22 = (long *)*plVar14;
            if (bVar2) {
              do {
                lVar21 = *plVar14;
                plVar14 = (long *)(lVar21 + 0x10);
                plVar22 = (long *)*plVar14;
              } while (*plVar22 != lVar21);
            }
          }
          else {
            do {
              plVar22 = plVar14;
              plVar14 = (long *)*plVar22;
            } while ((long *)*plVar22 != (long *)0x0);
          }
        }
      }
      (**(code **)(*plVar5 + 0x178))(plVar5);
    }
    if (*(long **)(local_80 + 0x10) != (long *)0x0) {
      pcVar9 = (char *)0x0;
      uVar10 = 0;
      local_1c8 = local_1c8 & 0xffffffff00000000;
      FUN_71037a2270(*(long **)(local_80 + 0x10),(ushort *)&local_1c8,0,0);
    }
    FUN_710377a120((long)&local_98,(char *)local_178,pcVar9,uVar10,param_5,param_6,param_7,param_8);
  }
  else {
    if ((lVar16 != 0) &&
       (plVar5 = (long *)FUN_71037964b0(lVar16,0x7104339c4d), plVar5 != (long *)0x0)) {
      (**(code **)(*plVar5 + 0x140))(plVar5,1);
      lVar16 = *(long *)(lVar21 + 8);
      if (lVar16 != 0) {
        plVar22 = *(long **)(lVar16 + 0x80);
        while (plVar22 != (long *)(lVar16 + 0x88)) {
          uVar13 = (**(code **)(*(long *)plVar22[0xd] + 0x148))();
          if (((uVar13 & 1) != 0) &&
             (uVar13 = (**(code **)(*plVar5 + 0x120))(plVar5,plVar22[0xd]), (uVar13 & 1) != 0)) {
            (**(code **)(*(long *)plVar22[0xd] + 0x178))();
            (**(code **)(*(long *)plVar22[0xd] + 0x140))((long *)plVar22[0xd],0);
          }
          plVar14 = (long *)plVar22[1];
          if ((long *)plVar22[1] == (long *)0x0) {
            plVar14 = plVar22 + 2;
            bVar2 = *(long **)*plVar14 != plVar22;
            plVar22 = (long *)*plVar14;
            if (bVar2) {
              do {
                lVar21 = *plVar14;
                plVar14 = (long *)(lVar21 + 0x10);
                plVar22 = (long *)*plVar14;
              } while (*plVar22 != lVar21);
            }
          }
          else {
            do {
              plVar22 = plVar14;
              plVar14 = (long *)*plVar22;
            } while ((long *)*plVar22 != (long *)0x0);
          }
        }
      }
      (**(code **)(*plVar5 + 0x178))(plVar5);
    }
    FUN_710377a120((long)&local_88,(char *)local_178,pcVar9,uVar10,param_5,param_6,param_7,param_8);
    if (*(long **)(local_90 + 0x10) != (long *)0x0) {
      pcVar9 = (char *)0x0;
      uVar10 = 0;
      local_1c8 = local_1c8 & 0xffffffff00000000;
      FUN_71037a2270(*(long **)(local_90 + 0x10),(ushort *)&local_1c8,0,0);
    }
  }
  iVar3 = (uint)local_e0;
  switch(local_d8 & 0xffffffff) {
  case 0:
  case 1:
    if (*(long **)(local_a0 + 0x10) != (long *)0x0) {
      pcVar9 = (char *)0x0;
      uVar10 = 0;
      local_1c8 = local_1c8 & 0xffffffff00000000;
      FUN_71037a2270(*(long **)(local_a0 + 0x10),(ushort *)&local_1c8,0,0);
    }
    if (*(long **)(local_b0 + 0x10) != (long *)0x0) {
      pcVar9 = (char *)0x0;
      uVar10 = 0;
      local_1c8 = local_1c8 & 0xffffffff00000000;
      FUN_71037a2270(*(long **)(local_b0 + 0x10),(ushort *)&local_1c8,0,0);
    }
    if (*(long **)(local_c0 + 0x10) != (long *)0x0) {
      pcVar9 = (char *)0x0;
      uVar10 = 0;
      local_1c8 = local_1c8 & 0xffffffff00000000;
      FUN_71037a2270(*(long **)(local_c0 + 0x10),(ushort *)&local_1c8,0,0);
    }
    break;
  case 2:
    FUN_710377a280((long)&local_a8,(byte *)"mnu_record_count_n",1);
    FUN_710377a280((long)&local_b8,(byte *)"mnu_record_count_n",1);
    uVar12 = (uint)local_e0;
    if (0x3b9ac9fe < (uint)local_e0) {
      uVar12 = 999999999;
    }
    uVar17 = 0;
    if (-1 < (int)(uint)local_e0) {
      uVar17 = uVar12;
    }
    uVar10 = (ulong)uVar17;
    pcVar9 = (char *)0x1;
    FUN_710377a280((long)&local_c8,(byte *)"mnu_record_count_n",1);
    break;
  case 3:
    local_210 = 0;
    for (uVar13 = 0; local_124[uVar13] != 0; uVar13 = uVar13 + 2) {
      local_208[uVar13] = local_124[uVar13];
      if (0x3e < (int)uVar13 + 1U) {
        uVar13 = (ulong)((int)uVar13 + 1);
        break;
      }
      if (local_124[uVar13 + 1] == 0) {
        uVar13 = uVar13 + 1;
        break;
      }
      local_208[uVar13 + 1] = local_124[uVar13 + 1];
    }
    local_208[uVar13 & 0xffffffff] = 0;
    local_20c = (int)uVar13;
    uVar17 = (uint)local_208[0];
    local_210 = uVar12;
    if (local_208[0] != 0) {
      pbVar8 = local_208;
      do {
        pbVar8 = pbVar8 + 1;
        local_210 = local_210 * 0x89 ^ uVar17;
        uVar17 = (uint)*pbVar8;
      } while (uVar17 != 0);
    }
    FUN_710377a280((long)&local_a8,local_208,1);
    local_258 = 0;
    for (uVar13 = 0; local_124[uVar13] != 0; uVar13 = uVar13 + 2) {
      local_250[uVar13] = local_124[uVar13];
      if (0x3e < (int)uVar13 + 1U) {
        uVar13 = (ulong)((int)uVar13 + 1);
        break;
      }
      if (local_124[uVar13 + 1] == 0) {
        uVar13 = uVar13 + 1;
        break;
      }
      local_250[uVar13 + 1] = local_124[uVar13 + 1];
    }
    local_250[uVar13 & 0xffffffff] = 0;
    local_254 = (int)uVar13;
    uVar17 = (uint)local_250[0];
    local_258 = uVar12;
    if (local_250[0] != 0) {
      pbVar8 = local_250;
      do {
        pbVar8 = pbVar8 + 1;
        local_258 = local_258 * 0x89 ^ uVar17;
        uVar17 = (uint)*pbVar8;
      } while (uVar17 != 0);
    }
    FUN_710377a280((long)&local_b8,local_250,1);
    uVar17 = (uint)local_e0;
    local_2a0 = 0;
    for (uVar13 = 0; local_124[uVar13] != 0; uVar13 = uVar13 + 2) {
      local_298[uVar13] = local_124[uVar13];
      if (0x3e < (int)uVar13 + 1U) {
        uVar13 = (ulong)((int)uVar13 + 1);
        break;
      }
      if (local_124[uVar13 + 1] == 0) {
        uVar13 = uVar13 + 1;
        break;
      }
      local_298[uVar13 + 1] = local_124[uVar13 + 1];
    }
    local_298[uVar13 & 0xffffffff] = 0;
    uVar11 = (uint)local_298[0];
    local_29c = (int)uVar13;
    if (local_298[0] != 0) {
      pbVar8 = local_298;
      do {
        pbVar8 = pbVar8 + 1;
        uVar12 = uVar12 * 0x89 ^ uVar11;
        uVar11 = (uint)*pbVar8;
      } while (uVar11 != 0);
    }
    uVar11 = uVar17;
    if (0x3b9ac9fe < uVar17) {
      uVar11 = 999999999;
    }
    uVar18 = 0;
    if (-1 < (int)uVar17) {
      uVar18 = uVar11;
    }
    uVar10 = (ulong)uVar18;
    pcVar9 = (char *)0x1;
    local_2a0 = uVar12;
    FUN_710377a280((long)&local_c8,local_298,1);
    break;
  case 4:
    FUN_710377a280((long)&local_a8,(byte *)"mnu_record_count_homerun",2);
    FUN_710377a280((long)&local_b8,(byte *)"mnu_record_count_homerun",2);
    uVar12 = (uint)local_e0;
    if (0x3b9ac9fe < (uint)local_e0) {
      uVar12 = 999999999;
    }
    uVar17 = 0;
    if (-1 < (int)(uint)local_e0) {
      uVar17 = uVar12;
    }
    uVar10 = (ulong)uVar17 / 1000;
    param_5 = (long ****)(ulong)(uVar17 % 1000);
    pcVar9 = (char *)0x2;
    FUN_710377a280((long)&local_c8,(byte *)"mnu_record_count_homerun",2);
    break;
  case 5:
    local_2e8 = 0;
    for (uVar13 = 0; local_124[uVar13] != 0; uVar13 = uVar13 + 2) {
      local_2e0[uVar13] = local_124[uVar13];
      if (0x3e < (int)uVar13 + 1U) {
        uVar13 = (ulong)((int)uVar13 + 1);
        break;
      }
      if (local_124[uVar13 + 1] == 0) {
        uVar13 = uVar13 + 1;
        break;
      }
      local_2e0[uVar13 + 1] = local_124[uVar13 + 1];
    }
    local_2e0[uVar13 & 0xffffffff] = 0;
    local_2e4 = (int)uVar13;
    uVar17 = (uint)local_2e0[0];
    local_2e8 = uVar12;
    if (local_2e0[0] != 0) {
      pbVar8 = local_2e0;
      do {
        pbVar8 = pbVar8 + 1;
        local_2e8 = local_2e8 * 0x89 ^ uVar17;
        uVar17 = (uint)*pbVar8;
      } while (uVar17 != 0);
    }
    if (iVar3 == 0) {
      FUN_710377a120((long)&local_a8,(char *)local_2e0,pcVar9,uVar10,param_5,param_6,param_7,param_8
                    );
    }
    else {
      uVar17 = iVar3 / 10;
      param_5 = (long ****)(ulong)(uint)(iVar3 % 10);
      if (0x62 < uVar17) {
        uVar17 = 99;
      }
      uVar11 = 0;
      if (-10 < iVar3) {
        uVar11 = uVar17;
      }
      uVar10 = (ulong)uVar11;
      pcVar9 = (char *)0x2;
      FUN_710377a280((long)&local_a8,(byte *)"mnu_record_count_decimal_n",2);
    }
    iVar3 = (uint)local_e0;
    local_330 = 0;
    for (uVar13 = 0; local_124[uVar13] != 0; uVar13 = uVar13 + 2) {
      local_328[uVar13] = local_124[uVar13];
      if (0x3e < (int)uVar13 + 1U) {
        uVar13 = (ulong)((int)uVar13 + 1);
        break;
      }
      if (local_124[uVar13 + 1] == 0) {
        uVar13 = uVar13 + 1;
        break;
      }
      local_328[uVar13 + 1] = local_124[uVar13 + 1];
    }
    local_328[uVar13 & 0xffffffff] = 0;
    local_32c = (int)uVar13;
    uVar17 = (uint)local_328[0];
    local_330 = uVar12;
    if (local_328[0] != 0) {
      pbVar8 = local_328;
      do {
        pbVar8 = pbVar8 + 1;
        local_330 = local_330 * 0x89 ^ uVar17;
        uVar17 = (uint)*pbVar8;
      } while (uVar17 != 0);
    }
    if (iVar3 == 0) {
      FUN_710377a120((long)&local_b8,(char *)local_328,pcVar9,uVar10,param_5,param_6,param_7,param_8
                    );
    }
    else {
      uVar17 = iVar3 / 10;
      param_5 = (long ****)(ulong)(uint)(iVar3 % 10);
      if (0x62 < uVar17) {
        uVar17 = 99;
      }
      uVar11 = 0;
      if (-10 < iVar3) {
        uVar11 = uVar17;
      }
      uVar10 = (ulong)uVar11;
      pcVar9 = (char *)0x2;
      FUN_710377a280((long)&local_b8,(byte *)"mnu_record_count_decimal_n",2);
    }
    iVar3 = (uint)local_e0;
    local_378 = 0;
    for (uVar13 = 0; local_124[uVar13] != 0; uVar13 = uVar13 + 2) {
      local_370[uVar13] = local_124[uVar13];
      if (0x3e < (int)uVar13 + 1U) {
        uVar13 = (ulong)((int)uVar13 + 1);
        break;
      }
      if (local_124[uVar13 + 1] == 0) {
        uVar13 = uVar13 + 1;
        break;
      }
      local_370[uVar13 + 1] = local_124[uVar13 + 1];
    }
    pbVar8 = local_370;
    pbVar8[uVar13 & 0xffffffff] = 0;
    uVar17 = (uint)local_370[0];
    local_374 = (int)uVar13;
    if (local_370[0] != 0) {
      pbVar15 = local_370;
      do {
        pbVar15 = pbVar15 + 1;
        uVar12 = uVar12 * 0x89 ^ uVar17;
        uVar17 = (uint)*pbVar15;
      } while (uVar17 != 0);
    }
    local_378 = uVar12;
    if (iVar3 == 0) goto LAB_7101a80fc4;
    uVar12 = iVar3 / 10;
    param_5 = (long ****)(ulong)(uint)(iVar3 % 10);
    if (0x62 < uVar12) {
      uVar12 = 99;
    }
    uVar17 = 0;
    if (-10 < iVar3) {
      uVar17 = uVar12;
    }
    uVar10 = (ulong)uVar17;
    pcVar9 = (char *)0x2;
    FUN_710377a280((long)&local_c8,(byte *)"mnu_record_count_decimal_n",2);
    break;
  case 6:
    FUN_710377a280((long)&local_a8,(byte *)"mnu_record_count_time",1);
    FUN_710377a280((long)&local_b8,(byte *)"mnu_record_count_time",1);
    if ((int)(uint)local_e0 < 0) {
      uVar13 = 0;
    }
    else {
      uVar12 = (uint)local_e0;
      if (0x157529fe < (uint)local_e0) {
        uVar12 = 359999999;
      }
      uVar13 = (ulong)uVar12 / 0x3c;
    }
    lVar16 = (long)((int)uVar13 + (int)(uVar13 / 0x3c) * -0x3c);
    if (0x3e6 < lVar16) {
      lVar16 = 999;
    }
    uVar10 = (uVar13 / 0x3c) * 1000000 + lVar16 * 1000;
    pcVar9 = (char *)0x1;
    FUN_710377a280((long)&local_c8,(byte *)"mnu_record_count_time",1);
    break;
  case 7:
    FUN_710377a280((long)&local_a8,(byte *)"mnu_record_count_kumite_time",3);
    FUN_710377a280((long)&local_b8,(byte *)"mnu_record_count_kumite_time",3);
    uVar12 = (uint)local_e0 / 0x34bc0;
    if ((uint)local_e0 < 0x34bc0) {
      uVar12 = 0;
    }
    uVar11 = (uint)local_e0 + uVar12 * -0x34bc0;
    uVar17 = 0;
    if (0xe0f < uVar11) {
      uVar17 = uVar11 / 0xe10;
    }
    uVar11 = uVar11 + uVar17 * -0xe10;
    uVar18 = 0;
    if (0x3b < uVar11) {
      uVar18 = uVar11 / 0x3c;
    }
    bVar2 = uVar12 != 0;
    if (bVar2) {
      uVar17 = 0x3b;
    }
    uVar10 = (ulong)uVar17;
    uVar12 = (uint)(((float)(uVar11 + uVar18 * -0x3c) * 100.0) / 60.0);
    if (bVar2) {
      uVar18 = 0x3b;
    }
    param_5 = (long ****)(ulong)uVar18;
    if (bVar2) {
      uVar12 = 99;
    }
    param_6 = (ulong)uVar12;
    pcVar9 = (char *)0x3;
    FUN_710377a280((long)&local_c8,(byte *)"mnu_record_count_kumite_time",3);
    break;
  case 8:
    local_3c0 = 0;
    for (uVar13 = 0; local_124[uVar13] != 0; uVar13 = uVar13 + 2) {
      local_3b8[uVar13] = local_124[uVar13];
      if (0x3e < (int)uVar13 + 1U) {
        uVar13 = (ulong)((int)uVar13 + 1);
        break;
      }
      if (local_124[uVar13 + 1] == 0) {
        uVar13 = uVar13 + 1;
        break;
      }
      local_3b8[uVar13 + 1] = local_124[uVar13 + 1];
    }
    local_3b8[uVar13 & 0xffffffff] = 0;
    local_3bc = (int)uVar13;
    uVar17 = (uint)local_3b8[0];
    local_3c0 = uVar12;
    if (local_3b8[0] != 0) {
      pbVar8 = local_3b8;
      do {
        pbVar8 = pbVar8 + 1;
        local_3c0 = local_3c0 * 0x89 ^ uVar17;
        uVar17 = (uint)*pbVar8;
      } while (uVar17 != 0);
    }
    FUN_710377a120((long)&local_a8,(char *)local_3b8,pcVar9,uVar10,param_5,param_6,param_7,param_8);
    local_408 = 0;
    for (uVar13 = 0; local_124[uVar13] != 0; uVar13 = uVar13 + 2) {
      local_400[uVar13] = local_124[uVar13];
      if (0x3e < (int)uVar13 + 1U) {
        uVar13 = (ulong)((int)uVar13 + 1);
        break;
      }
      if (local_124[uVar13 + 1] == 0) {
        uVar13 = uVar13 + 1;
        break;
      }
      local_400[uVar13 + 1] = local_124[uVar13 + 1];
    }
    local_400[uVar13 & 0xffffffff] = 0;
    local_404 = (int)uVar13;
    uVar17 = (uint)local_400[0];
    local_408 = uVar12;
    if (local_400[0] != 0) {
      pbVar8 = local_400;
      do {
        pbVar8 = pbVar8 + 1;
        local_408 = local_408 * 0x89 ^ uVar17;
        uVar17 = (uint)*pbVar8;
      } while (uVar17 != 0);
    }
    FUN_710377a120((long)&local_b8,(char *)local_400,pcVar9,uVar10,param_5,param_6,param_7,param_8);
    for (uVar13 = 0; local_124[uVar13] != 0; uVar13 = uVar13 + 2) {
      local_448[uVar13] = local_124[uVar13];
      if (0x3e < (int)uVar13 + 1U) {
        uVar13 = (ulong)((int)uVar13 + 1);
        break;
      }
      if (local_124[uVar13 + 1] == 0) {
        uVar13 = uVar13 + 1;
        break;
      }
      local_448[uVar13 + 1] = local_124[uVar13 + 1];
    }
    pbVar8 = local_448;
    pbVar8[uVar13 & 0xffffffff] = 0;
    uVar17 = (uint)local_448[0];
    local_44c = (undefined4)uVar13;
    local_450 = uVar12;
    if (local_448[0] != 0) {
      pbVar15 = local_448;
      do {
        pbVar15 = pbVar15 + 1;
        uVar12 = uVar12 * 0x89 ^ uVar17;
        uVar17 = (uint)*pbVar15;
        local_450 = uVar12;
      } while (uVar17 != 0);
    }
LAB_7101a80fc4:
    FUN_710377a120((long)&local_c8,(char *)pbVar8,pcVar9,uVar10,param_5,param_6,param_7,param_8);
  }
  FUN_71003a4ca0((uint *)&local_1c8,"category%02d",(ulong)local_138 & 0xffffffff,pcVar9,uVar10,
                 param_5,param_6,param_7,param_8);
  lVar21 = *(long *)(param_3 + 8);
  lVar16 = *(long *)(lVar21 + 8);
  if ((lVar16 != 0) &&
     (plVar5 = (long *)FUN_71037964b0(lVar16,(long)&local_1c0), plVar5 != (long *)0x0)) {
    (**(code **)(*plVar5 + 0x140))(plVar5,1);
    lVar16 = *(long *)(lVar21 + 8);
    if (lVar16 != 0) {
      plVar22 = *(long **)(lVar16 + 0x80);
      while (plVar22 != (long *)(lVar16 + 0x88)) {
        uVar13 = (**(code **)(*(long *)plVar22[0xd] + 0x148))();
        if (((uVar13 & 1) != 0) &&
           (uVar13 = (**(code **)(*plVar5 + 0x120))(plVar5,plVar22[0xd]), (uVar13 & 1) != 0)) {
          (**(code **)(*(long *)plVar22[0xd] + 0x178))();
          (**(code **)(*(long *)plVar22[0xd] + 0x140))((long *)plVar22[0xd],0);
        }
        plVar14 = (long *)plVar22[1];
        if ((long *)plVar22[1] == (long *)0x0) {
          plVar14 = plVar22 + 2;
          bVar2 = *(long **)*plVar14 != plVar22;
          plVar22 = (long *)*plVar14;
          if (bVar2) {
            do {
              lVar21 = *plVar14;
              plVar14 = (long *)(lVar21 + 0x10);
              plVar22 = (long *)*plVar14;
            } while (*plVar22 != lVar21);
          }
        }
        else {
          do {
            plVar22 = plVar14;
            plVar14 = (long *)*plVar22;
          } while ((long *)*plVar22 != (long *)0x0);
        }
      }
    }
    (**(code **)(*plVar5 + 0x178))(plVar5);
  }
  if ((uint)local_d8 == 8) {
    FUN_7103778300(0x3f800000,*(long *)(param_3 + 8),0x710424ef2b);
    FUN_7103776640(&local_460,(long)param_3,(byte ****)"set_parts_text_scroll",pcVar9,uVar10,param_5
                   ,param_6,param_7,param_8);
    uVar13 = local_458;
    if (*(long *)(local_458 + 8) != 0) {
      puVar20 = *(undefined8 **)(*(long *)(local_458 + 8) + 0x78);
      if (((DAT_710593ba40 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_710593ba40), iVar3 != 0))
      {
        if (((DAT_710593ba48 & 1) == 0) &&
           (iVar3 = __cxa_guard_acquire(&DAT_710593ba48), iVar3 != 0)) {
          DAT_710593ba50 = 0;
          __cxa_guard_release(&DAT_710593ba48);
        }
        DAT_710593ba58 = &DAT_710593ba50;
        __cxa_guard_release(&DAT_710593ba40);
      }
      uVar13 = local_458;
      if (puVar20 != (undefined8 *)0x0) {
        for (puVar6 = (undefined8 *)(**(code **)*puVar20)(puVar20); uVar13 = local_458,
            puVar6 != (undefined8 *)0x0; puVar6 = (undefined8 *)*puVar6) {
          if ((undefined8 **)puVar6 == &DAT_710593ba58) {
            *(undefined1 *)(puVar20 + 0xc) = 1;
            break;
          }
        }
      }
    }
  }
  else {
    FUN_7103778300(0x3f800000,*(long *)(param_3 + 8),0x71043cee92);
    FUN_7103776640(&local_460,(long)param_3,(byte ****)"set_parts_text_scroll",pcVar9,uVar10,param_5
                   ,param_6,param_7,param_8);
    uVar13 = local_458;
    if (*(long *)(local_458 + 8) != 0) {
      puVar20 = *(undefined8 **)(*(long *)(local_458 + 8) + 0x78);
      if (((DAT_710593ba40 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_710593ba40), iVar3 != 0))
      {
        if (((DAT_710593ba48 & 1) == 0) &&
           (iVar3 = __cxa_guard_acquire(&DAT_710593ba48), iVar3 != 0)) {
          DAT_710593ba50 = 0;
          __cxa_guard_release(&DAT_710593ba48);
        }
        DAT_710593ba58 = &DAT_710593ba50;
        __cxa_guard_release(&DAT_710593ba40);
      }
      uVar13 = local_458;
      if (puVar20 != (undefined8 *)0x0) {
        for (puVar6 = (undefined8 *)(**(code **)*puVar20)(puVar20); uVar13 = local_458,
            puVar6 != (undefined8 *)0x0; puVar6 = (undefined8 *)*puVar6) {
          if ((undefined8 **)puVar6 == &DAT_710593ba58) {
            lVar16 = puVar20[3];
            *(undefined4 *)(puVar20 + 0xb) = *(undefined4 *)((long)puVar20 + 0x54);
            if (lVar16 != 0) {
              *(undefined4 *)(lVar16 + 0x30) = *(undefined4 *)((long)puVar20 + 0x54);
              *(byte *)(lVar16 + 0x58) = *(byte *)(lVar16 + 0x58) | 0x10;
            }
            lVar16 = puVar20[4];
            if (lVar16 != 0) {
              *(undefined4 *)(lVar16 + 0x30) = *(undefined4 *)(puVar20 + 0xb);
              *(byte *)(lVar16 + 0x58) = *(byte *)(lVar16 + 0x58) | 0x10;
            }
            if ((long *)puVar20[5] != (long *)0x0) {
              (**(code **)(*(long *)puVar20[5] + 0x180))(0);
            }
            plVar5 = (long *)puVar20[6];
            if (plVar5 != (long *)0x0) {
              if (*(char *)((long)puVar20 + 99) == '\0') {
                (**(code **)(*plVar5 + 0x180))(0);
              }
              else {
                (**(code **)(*plVar5 + 400))();
              }
            }
            *(undefined2 *)((long)puVar20 + 100) = 0;
            uVar13 = local_458;
            break;
          }
        }
      }
    }
  }
  local_460 = &PTR_FUN_710523d988;
  local_458 = 0;
  if (uVar13 != 0) {
    uVar10 = *(ulong *)(uVar13 + 0x18);
    *(undefined ***)(uVar13 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar13 + 0x18) = 0;
    if (uVar10 != 0) {
      FUN_710392eb40(uVar10);
    }
    FUN_710392eb40(uVar13);
  }
LAB_7101a81298:
  uVar13 = local_c0;
  local_c8 = &PTR_FUN_710523d9a8;
  local_c0 = 0;
  if (uVar13 != 0) {
    FUN_710392eb40(uVar13);
  }
  uVar13 = local_b0;
  local_b8 = &PTR_FUN_710523d9a8;
  local_b0 = 0;
  if (uVar13 != 0) {
    FUN_710392eb40(uVar13);
  }
  uVar13 = local_a0;
  local_a8 = &PTR_FUN_710523d9a8;
  local_a0 = 0;
  if (uVar13 != 0) {
    FUN_710392eb40(uVar13);
  }
  uVar13 = local_90;
  local_98 = &PTR_FUN_710523d9a8;
  local_90 = 0;
  if (uVar13 != 0) {
    FUN_710392eb40(uVar13);
  }
  uVar13 = local_80;
  local_88 = &PTR_FUN_710523d9a8;
  local_80 = 0;
  if (uVar13 != 0) {
    FUN_710392eb40(uVar13);
  }
  return;
}

