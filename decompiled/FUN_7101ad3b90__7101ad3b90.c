// addr:      7101ad3b90
// offset:    0x1ad3b90
// name:      FUN_7101ad3b90
// mangled:   
// signature: undefined __cdecl FUN_7101ad3b90(long param_1, ulong * param_2, undefined8 param_3, byte * * * * param_4, long * * * * param_5, byte * * * * param_6, undefined8 param_7, undefined8 param_8)


void FUN_7101ad3b90(long param_1,ulong *param_2,undefined8 param_3,byte ****param_4,long ****param_5
                   ,byte ****param_6,undefined8 param_7,undefined8 param_8)

{
  bool bVar1;
  long lVar2;
  undefined2 *puVar3;
  undefined2 *puVar4;
  ushort uVar5;
  ushort uVar6;
  undefined4 uVar7;
  undefined **ppuVar8;
  bool bVar9;
  int iVar10;
  long lVar11;
  long *plVar12;
  undefined8 uVar13;
  undefined1 *puVar14;
  undefined8 *puVar15;
  long *plVar16;
  ulong uVar17;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  char *pcVar18;
  long *********ppppppppplVar19;
  byte ****ppppbVar20;
  uint uVar21;
  ulong uVar22;
  undefined *puVar23;
  byte *pbVar24;
  uint uVar25;
  ulong uVar26;
  char cVar27;
  long lVar28;
  undefined **ppuVar29;
  byte ****ppppbVar30;
  undefined8 *puVar31;
  byte bVar32;
  uint uVar33;
  long lVar34;
  long ***local_340;
  ulong local_338;
  byte ***local_330;
  ulong local_328;
  long ********local_320;
  ulong local_318;
  undefined **local_310;
  long *local_308;
  long ********local_300;
  ulong local_2f8;
  undefined **local_2f0;
  ulong local_2e8;
  undefined **local_2e0;
  uint local_2d8;
  undefined4 uStack_2d4;
  undefined4 uStack_2d0;
  undefined8 local_2c8;
  undefined4 local_2c0;
  undefined8 local_298;
  undefined8 local_290;
  undefined8 uStack_288;
  undefined2 local_280;
  undefined2 uStack_27e;
  undefined2 uStack_27c;
  undefined2 local_27a;
  undefined8 local_250;
  undefined8 local_248;
  undefined8 local_240;
  undefined2 local_238;
  undefined2 uStack_236;
  undefined1 uStack_234;
  undefined1 uStack_233;
  undefined2 local_232;
  undefined1 local_230;
  undefined8 local_208;
  undefined8 local_200;
  undefined8 local_1f8;
  undefined4 local_1f0;
  undefined1 local_1ec;
  undefined8 local_1c0;
  undefined1 local_1b8 [64];
  undefined **local_178;
  ulong local_170;
  undefined8 local_168;
  undefined8 local_160;
  undefined8 local_158;
  undefined4 local_150;
  long ********local_120;
  ulong local_118;
  uint local_110 [2];
  char acStack_108 [4];
  char local_104 [72];
  char local_bc [76];
  
  uVar22 = param_2[1];
  *(ulong *)(param_1 + 0x118) = *param_2;
  *(ulong *)(param_1 + 0x120) = uVar22;
  uVar26 = param_2[4];
  uVar22 = param_2[3];
  uVar17 = param_2[5];
  *(ulong *)(param_1 + 0x128) = param_2[2];
  *(char *)(param_1 + 0x140) = (char)uVar17;
  *(ulong *)(param_1 + 0x130) = uVar22;
  *(ulong *)(param_1 + 0x138) = uVar26;
  uVar7 = (undefined4)param_3;
  uVar33 = 0x811c9dc5;
  FUN_710338bbe0((undefined8 *)local_110,param_1 + 0x118,param_3,param_4,param_5,param_6,param_7,
                 param_8);
  *(undefined1 *)(param_1 + 0x148) = (undefined1)local_110[0];
  if ((uint *)(param_1 + 0x148) != local_110) {
    for (uVar22 = 0; local_104[uVar22] != '\0'; uVar22 = uVar22 + 2) {
      *(char *)(param_1 + uVar22 + 0x154) = local_104[uVar22];
      if (0x3e < (int)uVar22 + 1U) {
        uVar22 = (ulong)((int)uVar22 + 1);
        break;
      }
      if (local_104[uVar22 + 1] == '\0') {
        uVar22 = uVar22 + 1;
        break;
      }
      *(char *)(param_1 + uVar22 + 0x155) = local_104[uVar22 + 1];
    }
    *(undefined1 *)(param_1 + 0x154 + (uVar22 & 0xffffffff)) = 0;
    *(int *)(param_1 + 0x150) = (int)uVar22;
    uVar21 = (uint)*(byte *)(param_1 + 0x154);
    uVar25 = uVar33;
    if (*(byte *)(param_1 + 0x154) != 0) {
      pbVar24 = (byte *)(param_1 + 0x155);
      do {
        uVar25 = uVar25 * 0x89 ^ uVar21;
        uVar21 = (uint)*pbVar24;
        pbVar24 = pbVar24 + 1;
      } while (uVar21 != 0);
    }
    *(uint *)(param_1 + 0x14c) = uVar25;
    for (uVar22 = 0; local_bc[uVar22] != '\0'; uVar22 = uVar22 + 2) {
      *(char *)(param_1 + uVar22 + 0x19c) = local_bc[uVar22];
      if (0x3e < (int)uVar22 + 1U) {
        uVar22 = (ulong)((int)uVar22 + 1);
        break;
      }
      if (local_bc[uVar22 + 1] == '\0') {
        uVar22 = uVar22 + 1;
        break;
      }
      *(char *)(param_1 + uVar22 + 0x19d) = local_bc[uVar22 + 1];
    }
    *(undefined1 *)(param_1 + 0x19c + (uVar22 & 0xffffffff)) = 0;
    *(int *)(param_1 + 0x198) = (int)uVar22;
    uVar21 = (uint)*(byte *)(param_1 + 0x19c);
    uVar25 = uVar33;
    if (*(byte *)(param_1 + 0x19c) != 0) {
      pbVar24 = (byte *)(param_1 + 0x19d);
      do {
        uVar25 = uVar25 * 0x89 ^ uVar21;
        uVar21 = (uint)*pbVar24;
        pbVar24 = pbVar24 + 1;
      } while (uVar21 != 0);
    }
    *(uint *)(param_1 + 0x194) = uVar25;
  }
  *(undefined4 *)(param_1 + 0x1dc) = uVar7;
  lVar2 = param_1 + 0x100;
  FUN_7103778300(0x3f800000,*(long *)(param_1 + 0x108),0x7104308ac3);
  FUN_7103778760(*(long *)(param_1 + 0x108),0x710428ff7d);
  if (*(char *)(param_1 + 0x120) == '\x05') {
    uVar22 = FUN_710327d930(*(long *)(*(long *)(*(long *)(DAT_710532f730 + 8) + 0x318) + 8),
                            *(ulong *)(param_1 + 0x128));
  }
  else {
    uVar22 = 0x2dffff0000000000;
  }
  iVar10 = FUN_710338b490(uVar22);
  lVar11 = *(long *)(param_1 + 0x238);
  *(bool *)(param_1 + 0x253) = iVar10 == 1;
  uVar25 = **(uint **)**(undefined8 **)(*DAT_7105314510 + 0x1b8);
  ppppbVar20 = (byte ****)(ulong)uVar25;
  uVar13 = extraout_x1;
  if (*(uint *)(lVar11 + 0x94) != uVar25) {
    param_3 = 1;
    *(uint *)(lVar11 + 0x94) = uVar25;
    FUN_710377a280(lVar11,(byte *)(lVar11 + 0x18),1);
    uVar13 = extraout_x1_00;
  }
  FUN_7101ad36e0(param_1,uVar13,param_3,ppppbVar20,param_5,param_6,param_7,param_8);
  FUN_7103776640(&local_120,lVar2,(byte ****)"set_parts_item",param_3,ppppbVar20,param_5,param_6,
                 param_7,param_8);
  ppppppppplVar19 = &local_120;
  FUN_710338fff0(*(long **)(param_1 + 0xf8),param_2,ppppppppplVar19,ppppbVar20,param_5,param_6,
                 param_7,param_8);
  *(undefined1 *)(param_1 + 0x254) = 1;
  FUN_710338d030(local_110,param_2);
  local_168 = 0x1300000000;
  local_160 = 0x646f6f675f6d616e;
  local_158 = 0x6f67657461635f73;
  local_150 = 0x5f7972;
  uVar25 = 0x6e;
  pbVar24 = (byte *)((long)&local_160 + 1);
  local_168._0_4_ = uVar33;
  do {
    local_168._0_4_ = (uint)local_168 * 0x89 ^ uVar25;
    uVar25 = (uint)*pbVar24;
    pbVar24 = pbVar24 + 1;
  } while (uVar25 != 0);
  local_168._4_4_ = 0x13;
  lVar11 = 8;
  do {
    pcVar18 = (char *)((long)local_110 + lVar11);
    if (*pcVar18 == '\0') break;
    lVar28 = (long)local_168._4_4_;
    lVar11 = lVar11 + 1;
    local_168._4_4_ = local_168._4_4_ + 1;
    *(char *)((long)&local_160 + lVar28) = *pcVar18;
  } while ((int)lVar11 + 10U < 0x3e);
  *(undefined1 *)((long)&local_160 + (long)local_168._4_4_) = 0;
  uVar21 = (uint)(byte)local_160;
  uVar25 = uVar33;
  if ((byte)local_160 != 0) {
    pbVar24 = (byte *)((long)&local_160 + 1);
    do {
      uVar25 = uVar25 * 0x89 ^ uVar21;
      uVar21 = (uint)*pbVar24;
      pbVar24 = pbVar24 + 1;
    } while (uVar21 != 0);
  }
  local_168 = CONCAT44(local_168._4_4_,uVar25);
  FUN_7103776910(&local_178,lVar2,(long ****)"set_txt_category",ppppppppplVar19,ppppbVar20,param_5,
                 param_6,param_7,param_8);
  FUN_710377a120((long)&local_178,(char *)&local_160,ppppppppplVar19,ppppbVar20,param_5,param_6,
                 param_7,param_8);
  local_1b8[0] = 0;
  local_1c0 = 0;
  local_1f8 = 0x7465675f7975625f;
  uVar21 = 0x6d;
  local_208 = 0x1400000000;
  local_200 = 0x706f68735f756e6d;
  local_1f0 = 0x6e74625f;
  local_1ec = 0;
  pbVar24 = (byte *)((long)&local_200 + 1);
  uVar25 = uVar33;
  do {
    uVar25 = uVar25 * 0x89 ^ uVar21;
    uVar21 = (uint)*pbVar24;
    pbVar24 = pbVar24 + 1;
  } while (uVar21 != 0);
  local_208 = CONCAT44(0x14,uVar25);
  FUN_7103776910(&local_250,lVar2,(long ****)"have_counter",ppppppppplVar19,ppppbVar20,param_5,
                 param_6,param_7,param_8);
  plVar16 = (long *)local_248;
  lVar11 = (long)*local_248;
  if (lVar11 != 0) {
    *(byte *)(lVar11 + 0x58) = *(byte *)(lVar11 + 0x58) | 1;
  }
  local_250 = &PTR_FUN_710523d9a8;
  local_248 = (undefined **)0x0;
  if (plVar16 != (long *)0x0) {
    FUN_710392eb40((ulong)plVar16);
  }
  switch((char)param_2[1]) {
  case '\0':
    FUN_710062dc20((uint *)&local_1c0,"category_mii_hat");
    bVar1 = true;
    break;
  case '\x01':
    FUN_710062dc20((uint *)&local_1c0,"category_mii_body");
    lVar11 = *(long *)(DAT_710532f730 + 8);
    FUN_7103284fe0(&local_250,lVar11 + 0x240,(long ****)param_2[2],ppppbVar20,param_5,param_6,
                   param_7,param_8);
    ppuVar8 = local_248;
    if (local_250 == local_248) {
      bVar1 = false;
    }
    else {
      bVar1 = false;
      ppuVar29 = local_250;
      do {
        uVar22 = FUN_7103282890(*(long *)(lVar11 + 0x248),(ulong)*ppuVar29);
        uVar22 = uVar22 & 0xffffffffff;
        if (uVar22 < 0xb46978f7e) {
          if ((uVar22 == 0x79be30ece) || (uVar22 != 0xa36984b32)) {
LAB_7101ad40f4:
            bVar1 = true;
          }
          else {
            bVar1 = true;
          }
        }
        else if ((uVar22 != 0xb46978f7e) && (uVar22 != 0xd47a2b829)) goto LAB_7101ad40f4;
        ppuVar29 = ppuVar29 + 1;
      } while (ppuVar8 != ppuVar29);
    }
    if (local_250 != (undefined **)0x0) {
      local_248 = local_250;
      FUN_710392eb40((ulong)local_250);
    }
    break;
  default:
    goto switchD_7101ad3fd4_caseD_2;
  case '\x03':
    FUN_710062dc20((uint *)&local_1c0,"category_music");
    uVar22 = FUN_7101780950((long)param_2);
    if (uVar22 >> 0x38 == 0x2d) {
      bVar32 = 0;
      if ((uVar22 & 0xffffffffff) == 0) goto LAB_7101ad4390;
      if ((uVar22 & 0xffffffffff) != 0xe89ae81c5) {
        plVar16 = FUN_710323f600(*(long **)(param_1 + 0xf8),uVar22,(long ****)&DAT_00000011,
                                 ppppbVar20,param_5,param_6,param_7,param_8);
        ppppppppplVar19 = (long *********)&DAT_00000012;
        plVar12 = FUN_710323f600(*(long **)(param_1 + 0xf8),uVar22,(long ****)&DAT_00000012,
                                 ppppbVar20,param_5,param_6,param_7,param_8);
        FUN_7103776910(&local_250,lVar2,(long ****)"set_rep_series",ppppppppplVar19,ppppbVar20,
                       param_5,param_6,param_7,param_8);
        ppuVar8 = local_248;
        FUN_7103778b80((long)local_248,(long)plVar12,ppppppppplVar19,ppppbVar20,param_5,param_6,
                       param_7,param_8);
        local_250 = &PTR_FUN_710523d9a8;
        local_248 = (undefined **)0x0;
        if (ppuVar8 != (undefined **)0x0) {
          FUN_710392eb40((ulong)ppuVar8);
        }
        FUN_7103776910(&local_250,lVar2,(long ****)"set_rep_series_sdw",ppppppppplVar19,ppppbVar20,
                       param_5,param_6,param_7,param_8);
        uVar22 = (ulong)local_248;
        FUN_7103778b80((long)local_248,(long)plVar12,ppppppppplVar19,ppppbVar20,param_5,param_6,
                       param_7,param_8);
        local_250 = &PTR_FUN_710523d9a8;
        local_248 = (undefined **)0x0;
        if (uVar22 != 0) {
          FUN_710392eb40(uVar22);
        }
        FUN_7103776640(&local_298,lVar2,(byte ****)"set_parts_music",ppppppppplVar19,ppppbVar20,
                       param_5,param_6,param_7,param_8);
        FUN_7103776910(&local_250,(long)&local_298,(long ****)"set_txt_icon",ppppppppplVar19,
                       ppppbVar20,param_5,param_6,param_7,param_8);
        uVar22 = (ulong)local_248;
        FUN_7103778b80((long)local_248,(long)plVar16,ppppppppplVar19,ppppbVar20,param_5,param_6,
                       param_7,param_8);
        local_250 = &PTR_FUN_710523d9a8;
        local_248 = (undefined **)0x0;
        if (uVar22 != 0) {
          FUN_710392eb40(uVar22);
        }
        uVar22 = local_290;
        local_298 = &PTR_FUN_710523d988;
        local_290 = 0;
        if (uVar22 != 0) {
          uVar17 = *(ulong *)(uVar22 + 0x18);
          *(undefined ***)(uVar22 + 0x10) = &PTR_FUN_710523d9a8;
          *(undefined8 *)(uVar22 + 0x18) = 0;
          if (uVar17 != 0) {
            FUN_710392eb40(uVar17);
          }
          FUN_710392eb40(uVar22);
        }
        bVar32 = 1;
      }
    }
    else {
LAB_7101ad4390:
      bVar32 = 0;
    }
    FUN_7103776910(&local_250,lVar2,(long ****)"set_rep_series",ppppppppplVar19,ppppbVar20,param_5,
                   param_6,param_7,param_8);
    ppuVar8 = local_248;
    puVar23 = *local_248;
    if (puVar23 != (undefined *)0x0) {
      puVar23[0x58] = puVar23[0x58] & 0xfe | bVar32;
    }
    local_250 = &PTR_FUN_710523d9a8;
    local_248 = (undefined **)0x0;
    if (ppuVar8 != (undefined **)0x0) {
      FUN_710392eb40((ulong)ppuVar8);
    }
    FUN_7103776910(&local_250,lVar2,(long ****)"set_rep_series_sdw",ppppppppplVar19,ppppbVar20,
                   param_5,param_6,param_7,param_8);
    plVar16 = (long *)local_248;
    lVar11 = (long)*local_248;
    if (lVar11 != 0) {
      *(byte *)(lVar11 + 0x58) = *(byte *)(lVar11 + 0x58) & 0xfe | bVar32;
    }
    local_250 = &PTR_FUN_710523d9a8;
    local_248 = (undefined **)0x0;
    if (plVar16 != (long *)0x0) {
      FUN_710392eb40((ulong)plVar16);
    }
    FUN_7103776640(&local_298,lVar2,(byte ****)"set_parts_music",ppppppppplVar19,ppppbVar20,param_5,
                   param_6,param_7,param_8);
    FUN_7103776910(&local_250,(long)&local_298,(long ****)"set_txt_icon",ppppppppplVar19,ppppbVar20,
                   param_5,param_6,param_7,param_8);
    plVar16 = (long *)local_248;
    lVar11 = (long)*local_248;
    if (lVar11 != 0) {
      *(byte *)(lVar11 + 0x58) = *(byte *)(lVar11 + 0x58) & 0xfe | bVar32;
    }
    local_250 = &PTR_FUN_710523d9a8;
    local_248 = (undefined **)0x0;
    if (plVar16 != (long *)0x0) {
      FUN_710392eb40((ulong)plVar16);
    }
    uVar22 = local_290;
    local_298 = &PTR_FUN_710523d988;
    local_290 = 0;
    if (uVar22 != 0) {
      uVar17 = *(ulong *)(uVar22 + 0x18);
      *(undefined ***)(uVar22 + 0x10) = &PTR_FUN_710523d9a8;
      *(undefined8 *)(uVar22 + 0x18) = 0;
      if (uVar17 != 0) {
        FUN_710392eb40(uVar17);
      }
      FUN_710392eb40(uVar22);
    }
    lVar11 = *(long *)(DAT_710532f730 + 8);
    if ((char)param_2[1] == '\x03') {
      lVar28 = *(long *)(lVar11 + 0x278);
      uVar22 = FUN_71032575c0(lVar28,param_2[2]);
    }
    else {
      lVar28 = *(long *)(lVar11 + 0x278);
      uVar22 = 0xd9ffff0000000000;
    }
    uVar17 = FUN_710325dd40(lVar28,uVar22);
    lVar28 = *(long *)(DAT_710532f730 + 8);
    FUN_7103776640(&local_2e0,lVar2,(byte ****)"set_parts_music",ppppppppplVar19,ppppbVar20,param_5,
                   param_6,param_7,param_8);
    FUN_7103776910(&local_298,(long)&local_2e0,(long ****)"set_txt_help",ppppppppplVar19,ppppbVar20,
                   param_5,param_6,param_7,param_8);
    FUN_710327c2f0((uint *)&local_250,lVar28 + 0x2b0,uVar17,ppppbVar20,param_5,param_6,param_7,
                   param_8);
    FUN_710377a120((long)&local_298,(char *)&local_248,uVar17,ppppbVar20,param_5,param_6,param_7,
                   param_8);
    uVar17 = local_290;
    local_298 = &PTR_FUN_710523d9a8;
    local_290 = 0;
    if (uVar17 != 0) {
      FUN_710392eb40(uVar17);
    }
    uVar17 = CONCAT44(uStack_2d4,local_2d8);
    local_2e0 = &PTR_FUN_710523d988;
    local_2d8 = 0;
    uStack_2d4 = 0;
    if (uVar17 != 0) {
      uVar26 = *(ulong *)(uVar17 + 0x18);
      *(undefined ***)(uVar17 + 0x10) = &PTR_FUN_710523d9a8;
      *(undefined8 *)(uVar17 + 0x18) = 0;
      if (uVar26 != 0) {
        FUN_710392eb40(uVar26);
      }
      FUN_710392eb40(uVar17);
    }
    uVar13 = FUN_710325d9e0(*(long *)(lVar11 + 0x278),uVar22);
    local_248 = (undefined **)((ulong)local_248 & 0xffffffffffffff00);
    local_250 = (undefined **)0x0;
    if ((int)uVar13 == 2) {
      pcVar18 = "music_arrange";
    }
    else if ((int)uVar13 == 3) {
      pcVar18 = "music_newarrange";
    }
    else {
      pcVar18 = "music_noarrange";
    }
    FUN_710062dc20((uint *)&local_250,pcVar18);
    FUN_7103778300(0x3f800000,*(long *)(param_1 + 0x108),(long)&local_248);
    ppppppppplVar19 = (long *********)0x1;
    FUN_71033145d0(DAT_710532f8d0,uVar22,1,ppppbVar20,param_5,param_6,param_7,param_8);
    goto switchD_7101ad3fd4_caseD_2;
  case '\x04':
    FUN_710062dc20((uint *)&local_1c0,"category_spirit");
    lVar34 = *(long *)(DAT_710532f730 + 8);
    lVar28 = *(long *)(lVar34 + 0x1d8);
    uVar25 = FUN_71032a7800(lVar28,*(ulong *)(param_1 + 0x128));
    lVar11 = *(long *)(lVar28 + 0x20);
    uVar22 = (*(long *)(lVar28 + 0x28) - lVar11 >> 6) * -0x3333333333333333;
    if (uVar25 < (uint)uVar22) {
      ppppbVar30 = (byte ****)0xffff;
      uVar6 = *(ushort *)(lVar11 + (ulong)uVar25 * 0x140);
      if ((byte ****)(ulong)uVar6 == (byte ****)0xffff) {
        uVar17 = 0xffffffff;
      }
      else {
        uVar17 = (ulong)*(ushort *)(lVar28 + (long)(short)uVar6 * 2 + 0x60);
        ppppbVar30 = (byte ****)(ulong)uVar6;
      }
    }
    else {
      uVar17 = 0xffffffff;
      ppppbVar30 = (byte ****)0xffff;
    }
    puVar4 = (undefined2 *)(lVar11 + uVar17 * 0x140);
    if (uVar22 < uVar17 || uVar22 - uVar17 == 0) {
      puVar4 = &DAT_7105182b08;
    }
    FUN_7103776640(&local_2f0,lVar2,(byte ****)"set_parts_param_00",ppppppppplVar19,ppppbVar20,
                   param_5,param_6,param_7,param_8);
    FUN_7103776640(&local_300,lVar2,(byte ****)"set_parts_param_01",ppppppppplVar19,ppppbVar20,
                   param_5,param_6,param_7,param_8);
    uVar22 = *(ulong *)(puVar4 + 0x30);
    if ((uVar22 >> 0x38 == 0x2d) &&
       ((uVar22 & 0xffffffffff) != 0 && (uVar22 & 0xffffffffff) != 0xe89ae81c5)) {
      ppppppppplVar19 = (long *********)&DAT_00000012;
      plVar16 = FUN_710323f600(*(long **)(param_1 + 0xf8),uVar22,(long ****)&DAT_00000012,ppppbVar20
                               ,param_5,param_6,param_7,param_8);
      FUN_7103776910(&local_250,lVar2,(long ****)"set_rep_series",ppppppppplVar19,ppppbVar20,param_5
                     ,param_6,param_7,param_8);
      ppuVar8 = local_248;
      FUN_7103778b80((long)local_248,(long)plVar16,ppppppppplVar19,ppppbVar20,param_5,param_6,
                     param_7,param_8);
      local_250 = &PTR_FUN_710523d9a8;
      local_248 = (undefined **)0x0;
      if (ppuVar8 != (undefined **)0x0) {
        FUN_710392eb40((ulong)ppuVar8);
      }
      FUN_7103776910(&local_250,lVar2,(long ****)"set_rep_series_sdw",ppppppppplVar19,ppppbVar20,
                     param_5,param_6,param_7,param_8);
      uVar22 = (ulong)local_248;
      FUN_7103778b80((long)local_248,(long)plVar16,ppppppppplVar19,ppppbVar20,param_5,param_6,
                     param_7,param_8);
      local_250 = &PTR_FUN_710523d9a8;
      local_248 = (undefined **)0x0;
      if (uVar22 != 0) {
        FUN_710392eb40(uVar22);
      }
      FUN_7103776910(&local_250,(long)&local_300,(long ****)"set_rep_series",ppppppppplVar19,
                     ppppbVar20,param_5,param_6,param_7,param_8);
      uVar22 = (ulong)local_248;
      FUN_7103778b80((long)local_248,(long)plVar16,ppppppppplVar19,ppppbVar20,param_5,param_6,
                     param_7,param_8);
      local_250 = &PTR_FUN_710523d9a8;
      local_248 = (undefined **)0x0;
      if (uVar22 != 0) {
        FUN_710392eb40(uVar22);
      }
      bVar32 = 1;
    }
    else {
      bVar32 = 0;
    }
    FUN_7103776910(&local_250,lVar2,(long ****)"set_rep_series",ppppppppplVar19,ppppbVar20,param_5,
                   param_6,param_7,param_8);
    ppuVar8 = local_248;
    puVar23 = *local_248;
    if (puVar23 != (undefined *)0x0) {
      puVar23[0x58] = puVar23[0x58] & 0xfe | bVar32;
    }
    local_250 = &PTR_FUN_710523d9a8;
    local_248 = (undefined **)0x0;
    if (ppuVar8 != (undefined **)0x0) {
      FUN_710392eb40((ulong)ppuVar8);
    }
    FUN_7103776910(&local_250,lVar2,(long ****)"set_rep_series_sdw",ppppppppplVar19,ppppbVar20,
                   param_5,param_6,param_7,param_8);
    plVar16 = (long *)local_248;
    lVar11 = (long)*local_248;
    if (lVar11 != 0) {
      *(byte *)(lVar11 + 0x58) = *(byte *)(lVar11 + 0x58) & 0xfe | bVar32;
    }
    local_250 = &PTR_FUN_710523d9a8;
    local_248 = (undefined **)0x0;
    if (plVar16 != (long *)0x0) {
      FUN_710392eb40((ulong)plVar16);
    }
    FUN_7103776910(&local_250,(long)&local_300,(long ****)"set_rep_series",ppppppppplVar19,
                   ppppbVar20,param_5,param_6,param_7,param_8);
    plVar16 = (long *)local_248;
    lVar11 = (long)*local_248;
    if (lVar11 != 0) {
      *(byte *)(lVar11 + 0x58) = *(byte *)(lVar11 + 0x58) & 0xfe | bVar32;
    }
    local_250 = &PTR_FUN_710523d9a8;
    local_248 = (undefined **)0x0;
    if (plVar16 != (long *)0x0) {
      FUN_710392eb40((ulong)plVar16);
    }
    FUN_7103776910(&local_250,(long)&local_300,(long ****)"circle_series",ppppppppplVar19,ppppbVar20
                   ,param_5,param_6,param_7,param_8);
    plVar16 = (long *)local_248;
    lVar11 = (long)*local_248;
    if (lVar11 != 0) {
      *(byte *)(lVar11 + 0x58) = *(byte *)(lVar11 + 0x58) & 0xfe | bVar32;
    }
    local_250 = &PTR_FUN_710523d9a8;
    local_248 = (undefined **)0x0;
    if (plVar16 != (long *)0x0) {
      FUN_710392eb40((ulong)plVar16);
    }
    cVar27 = *(char *)(puVar4 + 0x2f);
    if (cVar27 == '\x03') {
      FUN_7103778300(0x3f800000,*(long *)(param_1 + 0x108),0x710438cd2e);
      FUN_7103776910(&local_250,lVar2,(long ****)"set_txt_fighter",ppppppppplVar19,ppppbVar20,
                     param_5,param_6,param_7,param_8);
      FUN_710377a120((long)&local_250,(char *)(param_1 + 0x19c),ppppppppplVar19,ppppbVar20,param_5,
                     param_6,param_7,param_8);
      ppuVar8 = local_248;
      local_250 = &PTR_FUN_710523d9a8;
      local_248 = (undefined **)0x0;
      if (ppuVar8 != (undefined **)0x0) {
        FUN_710392eb40((ulong)ppuVar8);
      }
      FUN_7103776910(&local_250,lVar2,(long ****)"have_counter",ppppppppplVar19,ppppbVar20,param_5,
                     param_6,param_7,param_8);
      plVar16 = (long *)local_248;
      lVar11 = (long)*local_248;
      if (lVar11 != 0) {
        *(byte *)(lVar11 + 0x58) = *(byte *)(lVar11 + 0x58) & 0xfe;
      }
      local_250 = &PTR_FUN_710523d9a8;
      local_248 = (undefined **)0x0;
      if (plVar16 != (long *)0x0) goto LAB_7101ad5494;
    }
    else {
      if (cVar27 == '\x01') {
        FUN_7103778300(0x3f800000,*(long *)(param_1 + 0x108),0x710432a69e);
        lVar11 = *(long *)(DAT_710532f730 + 8);
        FUN_71032a0c90((uint *)&local_250,lVar11 + 0x210,puVar4[0x35],ppppbVar20,param_5,param_6,
                       param_7,param_8);
        ppppppppplVar19 = (long *********)(ulong)(ushort)puVar4[0x35];
        FUN_71032a0e30((uint *)&local_298,lVar11 + 0x210,puVar4[0x35],ppppbVar20,param_5,param_6,
                       param_7,param_8);
        FUN_7103776640(&local_310,lVar2,(byte ****)"set_parts_skill",ppppppppplVar19,ppppbVar20,
                       param_5,param_6,param_7,param_8);
        FUN_7103776910(&local_2e0,(long)&local_310,(long ****)"set_txt_help",ppppppppplVar19,
                       ppppbVar20,param_5,param_6,param_7,param_8);
        FUN_710377a120((long)&local_2e0,(char *)&local_248,ppppppppplVar19,ppppbVar20,param_5,
                       param_6,param_7,param_8);
        uVar22 = CONCAT44(uStack_2d4,local_2d8);
        local_2e0 = &PTR_FUN_710523d9a8;
        local_2d8 = 0;
        uStack_2d4 = 0;
        if (uVar22 != 0) {
          FUN_710392eb40(uVar22);
        }
        plVar16 = local_308;
        local_310 = &PTR_FUN_710523d988;
        local_308 = (long *)0x0;
        if (plVar16 != (long *)0x0) {
          uVar22 = plVar16[3];
          plVar16[2] = (long)&PTR_FUN_710523d9a8;
          plVar16[3] = 0;
          if (uVar22 != 0) {
            FUN_710392eb40(uVar22);
          }
          FUN_710392eb40((ulong)plVar16);
        }
        FUN_7103776640(&local_310,lVar2,(byte ****)"set_parts_text_scroll",ppppppppplVar19,
                       ppppbVar20,param_5,param_6,param_7,param_8);
        FUN_7103776910(&local_2e0,(long)&local_310,(long ****)"set_txt_mask",ppppppppplVar19,
                       ppppbVar20,param_5,param_6,param_7,param_8);
        FUN_710377a120((long)&local_2e0,(char *)&local_290,ppppppppplVar19,ppppbVar20,param_5,
                       param_6,param_7,param_8);
        uVar22 = CONCAT44(uStack_2d4,local_2d8);
        local_2e0 = &PTR_FUN_710523d9a8;
        local_2d8 = 0;
        uStack_2d4 = 0;
        if (uVar22 != 0) {
          FUN_710392eb40(uVar22);
        }
        FUN_7103776910(&local_2e0,(long)&local_310,(long ****)"set_txt_main",ppppppppplVar19,
                       ppppbVar20,param_5,param_6,param_7,param_8);
        FUN_710377a120((long)&local_2e0,(char *)&local_290,ppppppppplVar19,ppppbVar20,param_5,
                       param_6,param_7,param_8);
        uVar22 = CONCAT44(uStack_2d4,local_2d8);
        local_2e0 = &PTR_FUN_710523d9a8;
        local_2d8 = 0;
        uStack_2d4 = 0;
        if (uVar22 != 0) {
          FUN_710392eb40(uVar22);
        }
        if (local_308[1] != 0) {
          puVar31 = *(undefined8 **)(local_308[1] + 0x78);
          if (((DAT_710593ba40 & 1) == 0) &&
             (iVar10 = __cxa_guard_acquire(&DAT_710593ba40), iVar10 != 0)) {
            if (((DAT_710593ba48 & 1) == 0) &&
               (iVar10 = __cxa_guard_acquire(&DAT_710593ba48), iVar10 != 0)) {
              DAT_710593ba50 = 0;
              __cxa_guard_release(&DAT_710593ba48);
            }
            DAT_710593ba58 = &DAT_710593ba50;
            __cxa_guard_release(&DAT_710593ba40);
          }
          if (puVar31 != (undefined8 *)0x0) {
            for (puVar15 = (undefined8 *)(**(code **)*puVar31)(puVar31);
                puVar15 != (undefined8 *)0x0; puVar15 = (undefined8 *)*puVar15) {
              if ((undefined8 **)puVar15 == &DAT_710593ba58) {
                *(undefined1 *)(puVar31 + 0xc) = 1;
                break;
              }
            }
          }
        }
        plVar16 = local_308;
        FUN_7103778950(local_308[1]);
        if (plVar16[1] != 0) {
          puVar31 = *(undefined8 **)(plVar16[1] + 0x78);
          if (((DAT_710593ba40 & 1) == 0) &&
             (iVar10 = __cxa_guard_acquire(&DAT_710593ba40), iVar10 != 0)) {
            if (((DAT_710593ba48 & 1) == 0) &&
               (iVar10 = __cxa_guard_acquire(&DAT_710593ba48), iVar10 != 0)) {
              DAT_710593ba50 = 0;
              __cxa_guard_release(&DAT_710593ba48);
            }
            DAT_710593ba58 = &DAT_710593ba50;
            __cxa_guard_release(&DAT_710593ba40);
          }
          if (puVar31 != (undefined8 *)0x0) {
            for (puVar15 = (undefined8 *)(**(code **)*puVar31)(puVar31);
                puVar15 != (undefined8 *)0x0; puVar15 = (undefined8 *)*puVar15) {
              if ((undefined8 **)puVar15 == &DAT_710593ba58) {
                lVar28 = puVar31[3];
                *(undefined4 *)(puVar31 + 0xb) = *(undefined4 *)((long)puVar31 + 0x54);
                if (lVar28 != 0) {
                  *(undefined4 *)(lVar28 + 0x30) = *(undefined4 *)((long)puVar31 + 0x54);
                  *(byte *)(lVar28 + 0x58) = *(byte *)(lVar28 + 0x58) | 0x10;
                }
                lVar28 = puVar31[4];
                if (lVar28 != 0) {
                  *(undefined4 *)(lVar28 + 0x30) = *(undefined4 *)(puVar31 + 0xb);
                  *(byte *)(lVar28 + 0x58) = *(byte *)(lVar28 + 0x58) | 0x10;
                }
                if ((long *)puVar31[5] != (long *)0x0) {
                  (**(code **)(*(long *)puVar31[5] + 0x180))(0);
                }
                plVar16 = (long *)puVar31[6];
                if (plVar16 != (long *)0x0) {
                  if (*(char *)((long)puVar31 + 99) == '\0') {
                    (**(code **)(*plVar16 + 0x180))(0);
                  }
                  else {
                    (**(code **)(*plVar16 + 400))();
                  }
                }
                *(undefined2 *)((long)puVar31 + 100) = 0;
                break;
              }
            }
          }
        }
        *(undefined4 *)(param_1 + 0x240) = 0x5a;
        uVar22 = FUN_71032a1630(*(long *)(lVar11 + 0x218),puVar4[0x35]);
        plVar16 = FUN_710323f760(*(long **)(param_1 + 0xf8),uVar22,(long ****)ppppppppplVar19,
                                 ppppbVar20,param_5,param_6,param_7,param_8);
        FUN_7103776640(&local_320,lVar2,(byte ****)"set_parts_skill",ppppppppplVar19,ppppbVar20,
                       param_5,param_6,param_7,param_8);
        FUN_7103776910(&local_2e0,(long)&local_320,(long ****)"set_pic_icon",ppppppppplVar19,
                       ppppbVar20,param_5,param_6,param_7,param_8);
        uVar22 = CONCAT44(uStack_2d4,local_2d8);
        FUN_7103778b80(uVar22,(long)plVar16,ppppppppplVar19,ppppbVar20,param_5,param_6,param_7,
                       param_8);
        local_2e0 = &PTR_FUN_710523d9a8;
        local_2d8 = 0;
        uStack_2d4 = 0;
        if (uVar22 != 0) {
          FUN_710392eb40(uVar22);
        }
        uVar22 = local_318;
        local_320 = (long ********)&PTR_FUN_710523d988;
        local_318 = 0;
        if (uVar22 != 0) {
          uVar17 = *(ulong *)(uVar22 + 0x18);
          *(undefined ***)(uVar22 + 0x10) = &PTR_FUN_710523d9a8;
          *(undefined8 *)(uVar22 + 0x18) = 0;
          if (uVar17 != 0) {
            FUN_710392eb40(uVar17);
          }
          FUN_710392eb40(uVar22);
        }
        local_2d8 = local_2d8 & 0xffffff00;
        local_2e0 = (undefined **)0x0;
        uVar22 = FUN_71032a0fd0(*(long *)(lVar11 + 0x218),puVar4[0x35]);
        ppppppppplVar19 = (long *********)(ulong)((uint)uVar22 & 0xff);
        FUN_710062dc20((uint *)&local_2e0,"slot_count%d");
        FUN_7103778300(0x3f800000,*(long *)(param_1 + 0x108),(long)&local_2d8);
      }
      else {
        if (cVar27 != '\0') goto LAB_7101ad5498;
        FUN_7103776640(&local_310,lVar2,(byte ****)"set_parts_power",ppppppppplVar19,ppppbVar20,
                       param_5,param_6,param_7,param_8);
        FUN_7103776640(&local_320,lVar2,(byte ****)"set_parts_pre_super",ppppppppplVar19,ppppbVar20,
                       param_5,param_6,param_7,param_8);
        FUN_7103776640(&local_330,lVar2,(byte ****)"set_parts_super",ppppppppplVar19,ppppbVar20,
                       param_5,param_6,param_7,param_8);
        FUN_7103776640(&local_340,lVar2,(byte ****)"set_parts_icon_super",ppppppppplVar19,ppppbVar20
                       ,param_5,param_6,param_7,param_8);
        uVar22 = local_328;
        cVar27 = *(char *)(puVar4 + 0x2f);
        if ((*(long *)(local_328 + 8) != 0) &&
           (lVar11 = *(long *)(*(long *)(local_328 + 8) + 0x18), lVar11 != 0)) {
          *(byte *)(lVar11 + 0x58) = *(byte *)(lVar11 + 0x58) & 0xfe | cVar27 == '\x01';
        }
        uVar6 = (ushort)ppppbVar30;
        if (cVar27 == '\x01') {
          lVar11 = *(long *)(param_1 + 0x108);
          pcVar18 = "spirit_none";
        }
        else if (puVar4[0x48] == 0) {
          if (((int)ppppbVar30 != 0xffff) && ((short)uVar6 < 2000)) {
            lVar11 = *(long *)(lVar34 + 0x1d8);
            uVar5 = *(ushort *)(lVar11 + (((long)ppppbVar30 << 0x30) >> 0x2f) + 0x60);
            uVar25 = (int)((ulong)(*(long *)(lVar11 + 0x28) - *(long *)(lVar11 + 0x20)) >> 6) *
                     -0x33333333;
            if ((uVar5 < uVar25) &&
               ((uVar5 = *(ushort *)(lVar11 + (ulong)uVar5 * 2 + 0x1000), uVar5 < uVar25 &&
                (*(short *)(*(long *)(lVar11 + 0x20) + (ulong)uVar5 * 0x140) != -1)))) {
              lVar11 = *(long *)(param_1 + 0x108);
              pcVar18 = "spirit_pre_super";
              goto LAB_7101ad4e60;
            }
          }
          lVar11 = *(long *)(param_1 + 0x108);
          pcVar18 = "spirit_normal";
        }
        else {
          lVar11 = *(long *)(param_1 + 0x108);
          pcVar18 = "spirit_super";
        }
LAB_7101ad4e60:
        FUN_7103778300(0x3f800000,lVar11,(long)pcVar18);
        bVar9 = (int)ppppbVar30 == 0xffff;
        bVar1 = 1999 < (short)uVar6;
        if ((bVar9 || bVar1) ||
           (lVar11 = *(long *)(lVar34 + 0x1d8),
           (uint)((int)((ulong)(*(long *)(lVar11 + 0x28) - *(long *)(lVar11 + 0x20)) >> 6) *
                 -0x33333333) <=
           (uint)*(ushort *)(lVar11 + (((long)ppppbVar30 << 0x30) >> 0x2f) + 0x60))) {
          FUN_71025c7300((long)&local_2f0,(long)&local_300,ppppppppplVar19,ppppbVar20,param_5,
                         param_6,param_7,param_8);
        }
        else {
          ppppppppplVar19 = &local_300;
          param_5 = (long ****)0xffff;
          ppppbVar20 = ppppbVar30;
          FUN_71025c7b60(*(long **)(param_1 + 0xf8),(long)&local_2f0,(long)ppppppppplVar19,
                         ppppbVar30,0xffff,param_6,param_7,param_8);
        }
        FUN_71025c8c30((long)&local_310,uVar6,ppppppppplVar19,ppppbVar20,param_5,param_6,param_7,
                       param_8);
        ppppbVar20 = &local_330;
        param_5 = &local_340;
        param_6 = ppppbVar30;
        FUN_71025c8e40(*(long **)(param_1 + 0xf8),lVar2,&local_320,ppppbVar20,param_5,
                       (long)ppppbVar30,param_7,param_8);
        uVar17 = 1;
        local_2e0 = (undefined **)0x1;
        local_2d8 = local_2d8 & 0xffffff00;
        uStack_2d4 = 0;
        uStack_2d0 = 0;
        local_2c8 = 0x52ffff0000000000;
        local_2c0 = 0;
        if (!bVar9 && !bVar1) {
          lVar11 = *(long *)(*(long *)(DAT_710532f730 + 8) + 0x1d8);
          uVar5 = *(ushort *)(lVar11 + (((long)ppppbVar30 << 0x30) >> 0x2f) + 0x60);
          uVar17 = (*(long *)(lVar11 + 0x28) - *(long *)(lVar11 + 0x20) >> 6) * -0x3333333333333333;
          if ((uint)uVar5 < (uint)uVar17) {
            uVar26 = 0xffffffff;
            if (ppppbVar30 != (byte ****)0xffff) {
              uVar26 = (ulong)uVar5;
            }
            puVar3 = (undefined2 *)(*(long *)(lVar11 + 0x20) + uVar26 * 0x140);
            if (uVar17 < uVar26 || uVar17 - uVar26 == 0) {
              puVar3 = &DAT_7105182b08;
            }
            uVar25 = FUN_71025c9ac0(*(float *)(puVar3 + 0x3a),0,*(uint *)(puVar3 + 0x38));
            uVar17 = (ulong)uVar25;
          }
          else {
            uVar17 = 1;
          }
        }
        FUN_71025ca840((int *)&local_2e0,uVar6,(int)uVar17);
        uVar25 = FUN_71025cb8d0((long)&local_2e0);
        uVar26 = (ulong)uVar25;
        FUN_7103776910(&local_250,lVar2,(long ****)"set_txt_pow_num",uVar17,ppppbVar20,param_5,
                       param_6,param_7,param_8);
        FUN_710377a310((long)&local_250,1);
        ppuVar8 = local_248;
        local_250 = &PTR_FUN_710523d9a8;
        local_248 = (undefined **)0x0;
        if (ppuVar8 != (undefined **)0x0) {
          FUN_710392eb40((ulong)ppuVar8);
        }
        FUN_7103776910(&local_250,lVar2,(long ****)"set_txt_pow_num_sdw",uVar26,ppppbVar20,param_5,
                       param_6,param_7,param_8);
        FUN_710377a310((long)&local_250,1);
        uVar17 = (ulong)local_248;
        local_250 = &PTR_FUN_710523d9a8;
        local_248 = (undefined **)0x0;
        if (uVar17 != 0) {
          FUN_710392eb40(uVar17);
        }
        FUN_7103778300(0x3f800000,local_2f8,0x710432a5ee);
        local_248 = (undefined **)((ulong)local_248 & 0xffffffffffffff00);
        local_250 = (undefined **)0x0;
        ppppppppplVar19 = (long *********)(ulong)*(byte *)((long)puVar4 + 0x69);
        FUN_710062dc20((uint *)&local_250,"slot_count%d");
        FUN_7103778300(0x3f800000,*(long *)(param_1 + 0x108),(long)&local_248);
        if (bVar9 || bVar1) {
LAB_7101ad51c8:
          uStack_288 = 0x5f72656b63617474;
          local_280 = 0x6f6e;
          uStack_27e = 0x6e;
          local_298._4_4_ = 0x13;
          uVar25 = 0x73;
          pbVar24 = (byte *)((long)&local_290 + 1);
          do {
            uVar33 = uVar33 * 0x89 ^ uVar25;
            uVar25 = (uint)*pbVar24;
            pbVar24 = pbVar24 + 1;
          } while (uVar25 != 0);
        }
        else {
          lVar11 = *(long *)(*(long *)(DAT_710532f730 + 8) + 0x1d8);
          uVar6 = *(ushort *)(lVar11 + (((long)ppppbVar30 << 0x30) >> 0x2f) + 0x60);
          uVar17 = (*(long *)(lVar11 + 0x28) - *(long *)(lVar11 + 0x20) >> 6) * -0x3333333333333333;
          if ((uint)uVar17 <= (uint)uVar6) goto LAB_7101ad51c8;
          uVar26 = 0xffffffff;
          if (ppppbVar30 != (byte ****)0xffff) {
            uVar26 = (ulong)uVar6;
          }
          puVar4 = (undefined2 *)(*(long *)(lVar11 + 0x20) + uVar26 * 0x140);
          if (uVar17 < uVar26 || uVar17 - uVar26 == 0) {
            puVar4 = &DAT_7105182b08;
          }
          if ((*(char *)(puVar4 + 0x2f) != '\0') || (2 < *(byte *)(puVar4 + 0x36) - 1))
          goto LAB_7101ad51c8;
          uVar25 = 0x20301U >> (ulong)((*(byte *)(puVar4 + 0x36) - 1 & 3) << 3) & 0xff;
          if (uVar25 == 1) {
            uStack_288 = 0x5f72656b63617474;
            local_280 = 0x666f;
            uStack_27e = 0x6566;
            uStack_27c = 0x736e;
            local_27a = 0x65;
            local_298._4_4_ = 0x17;
            uVar25 = 0x73;
            pbVar24 = (byte *)((long)&local_290 + 1);
            do {
              uVar33 = uVar33 * 0x89 ^ uVar25;
              uVar25 = (uint)*pbVar24;
              pbVar24 = pbVar24 + 1;
            } while (uVar25 != 0);
          }
          else if (uVar25 == 2) {
            uStack_288 = 0x5f72656b63617474;
            local_280 = 0x6564;
            uStack_27e = 0x6566;
            uStack_27c = 0x736e;
            local_27a = 0x65;
            local_298._4_4_ = 0x17;
            uVar25 = 0x73;
            pbVar24 = (byte *)((long)&local_290 + 1);
            do {
              uVar33 = uVar33 * 0x89 ^ uVar25;
              uVar25 = (uint)*pbVar24;
              pbVar24 = pbVar24 + 1;
            } while (uVar25 != 0);
          }
          else {
            if (uVar25 != 3) goto LAB_7101ad51c8;
            uStack_288 = 0x5f72656b63617474;
            local_280 = 0x6874;
            uStack_27e = 0x6f72;
            uStack_27c = 0x77;
            local_298._4_4_ = 0x15;
            uVar25 = 0x73;
            pbVar24 = (byte *)((long)&local_290 + 1);
            do {
              uVar33 = uVar33 * 0x89 ^ uVar25;
              uVar25 = (uint)*pbVar24;
              pbVar24 = pbVar24 + 1;
            } while (uVar25 != 0);
          }
        }
        uStack_288 = 0x5f72656b63617474;
        local_290 = 0x615f746972697073;
        local_298 = (undefined **)CONCAT44(local_298._4_4_,uVar33);
        FUN_7103778300(0x3f800000,*(long *)(param_1 + 0x108),(long)&local_290);
        uVar17 = local_338;
        local_340 = (long ***)&PTR_FUN_710523d988;
        local_338 = 0;
        if (uVar17 != 0) {
          uVar26 = *(ulong *)(uVar17 + 0x18);
          *(undefined ***)(uVar17 + 0x10) = &PTR_FUN_710523d9a8;
          *(undefined8 *)(uVar17 + 0x18) = 0;
          if (uVar26 != 0) {
            FUN_710392eb40(uVar26);
          }
          FUN_710392eb40(uVar17);
        }
        local_330 = (byte ***)&PTR_FUN_710523d988;
        local_328 = 0;
        if (uVar22 != 0) {
          uVar17 = *(ulong *)(uVar22 + 0x18);
          *(undefined ***)(uVar22 + 0x10) = &PTR_FUN_710523d9a8;
          *(undefined8 *)(uVar22 + 0x18) = 0;
          if (uVar17 != 0) {
            FUN_710392eb40(uVar17);
          }
          FUN_710392eb40(uVar22);
        }
        uVar22 = local_318;
        local_320 = (long ********)&PTR_FUN_710523d988;
        local_318 = 0;
        if (uVar22 != 0) {
          uVar17 = *(ulong *)(uVar22 + 0x18);
          *(undefined ***)(uVar22 + 0x10) = &PTR_FUN_710523d9a8;
          *(undefined8 *)(uVar22 + 0x18) = 0;
          if (uVar17 != 0) {
            FUN_710392eb40(uVar17);
          }
          FUN_710392eb40(uVar22);
        }
      }
      plVar16 = local_308;
      local_310 = &PTR_FUN_710523d988;
      local_308 = (long *)0x0;
      if (plVar16 != (long *)0x0) {
        uVar22 = plVar16[3];
        plVar16[2] = (long)&PTR_FUN_710523d9a8;
        plVar16[3] = 0;
        if (uVar22 != 0) {
          FUN_710392eb40(uVar22);
        }
LAB_7101ad5494:
        FUN_710392eb40((ulong)plVar16);
      }
    }
LAB_7101ad5498:
    uVar22 = local_2f8;
    local_300 = (long ********)&PTR_FUN_710523d988;
    local_2f8 = 0;
    if (uVar22 != 0) {
      uVar17 = *(ulong *)(uVar22 + 0x18);
      *(undefined ***)(uVar22 + 0x10) = &PTR_FUN_710523d9a8;
      *(undefined8 *)(uVar22 + 0x18) = 0;
      if (uVar17 != 0) {
        FUN_710392eb40(uVar17);
      }
      FUN_710392eb40(uVar22);
    }
    uVar22 = local_2e8;
    local_2f0 = &PTR_FUN_710523d988;
    local_2e8 = 0;
    if (uVar22 == 0) goto switchD_7101ad3fd4_caseD_2;
    uVar17 = *(ulong *)(uVar22 + 0x18);
    *(undefined ***)(uVar22 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar22 + 0x18) = 0;
    if (uVar17 != 0) {
      FUN_710392eb40(uVar17);
    }
    goto LAB_7101ad54e8;
  case '\x05':
    if (*(char *)(param_1 + 0x253) == '\0') {
      uVar21 = 0x6d;
      local_250 = (undefined **)0x1400000000;
      local_248 = (undefined **)0x706f68735f756e6d;
      local_240 = 0x7465675f7975625f;
      local_238 = 0x625f;
      uStack_236 = 0x6e74;
      uStack_234 = 0;
      pbVar24 = (byte *)((long)&local_248 + 1);
      uVar25 = uVar33;
      do {
        uVar25 = uVar25 * 0x89 ^ uVar21;
        uVar21 = (uint)*pbVar24;
        pbVar24 = pbVar24 + 1;
      } while (uVar21 != 0);
      local_250 = (undefined **)CONCAT44(0x14,uVar25);
      uVar22 = 0;
      cVar27 = 'm';
      do {
        *(char *)((long)&local_200 + uVar22) = cVar27;
        if (0x3e < (int)uVar22 + 1U) {
          uVar22 = (ulong)((int)uVar22 + 1);
          break;
        }
        cVar27 = *(char *)((long)&local_248 + uVar22 + 1);
        uVar22 = uVar22 + 1;
      } while (cVar27 != '\0');
      *(undefined1 *)((long)&local_200 + (uVar22 & 0xffffffff)) = 0;
      uVar25 = (uint)(byte)local_200;
      local_208._4_4_ = (int)uVar22;
      if ((byte)local_200 != 0) {
        pbVar24 = (byte *)((long)&local_200 + 1);
        do {
          uVar33 = uVar33 * 0x89 ^ uVar25;
          uVar25 = (uint)*pbVar24;
          pbVar24 = pbVar24 + 1;
        } while (uVar25 != 0);
      }
    }
    else {
      local_238 = 0x6f5f;
      local_250 = (undefined **)0x1800000000;
      local_248 = (undefined **)0x706f68735f756e6d;
      local_240 = 0x7465675f7975625f;
      uStack_236 = 0x656e;
      uStack_234 = 0x5f;
      uStack_233 = 0x62;
      local_232 = 0x6e74;
      uVar21 = 0x6d;
      local_230 = 0;
      pbVar24 = (byte *)((long)&local_248 + 1);
      uVar25 = uVar33;
      do {
        uVar25 = uVar25 * 0x89 ^ uVar21;
        uVar21 = (uint)*pbVar24;
        pbVar24 = pbVar24 + 1;
      } while (uVar21 != 0);
      local_250 = (undefined **)CONCAT44(0x18,uVar25);
      uVar22 = 0;
      cVar27 = 'm';
      do {
        *(char *)((long)&local_200 + uVar22) = cVar27;
        if (0x3e < (int)uVar22 + 1U) {
          uVar22 = (ulong)((int)uVar22 + 1);
          break;
        }
        cVar27 = *(char *)((long)&local_248 + uVar22 + 1);
        uVar22 = uVar22 + 1;
      } while (cVar27 != '\0');
      *(undefined1 *)((long)&local_200 + (uVar22 & 0xffffffff)) = 0;
      uVar25 = (uint)(byte)local_200;
      local_208._4_4_ = (int)uVar22;
      if ((byte)local_200 != 0) {
        pbVar24 = (byte *)((long)&local_200 + 1);
        do {
          uVar33 = uVar33 * 0x89 ^ uVar25;
          uVar25 = (uint)*pbVar24;
          pbVar24 = pbVar24 + 1;
        } while (uVar25 != 0);
      }
    }
    local_240 = 0x7465675f7975625f;
    local_248 = (undefined **)0x706f68735f756e6d;
    local_208 = CONCAT44(local_208._4_4_,uVar33);
    uVar22 = *(ulong *)(param_1 + 0x118);
    puVar14 = FUN_71032817a0(*(long *)(*(long *)(*(long *)(DAT_710532f730 + 8) + 0x2f8) + 8),
                             0x181c99f843);
    if ((((uVar22 & 0xff00000000000000) == 0xc100000000000000) && ((uVar22 & 0xffffffffff) != 0)) &&
       (((ulong)puVar14 & 0xff00000000000000) == 0xc100000000000000 &&
        ((ulong)puVar14 & 0xffffffffff) != 0)) {
      if ((((ulong)puVar14 ^ uVar22) & 0xffffffffff) == 0) goto LAB_7101ad4860;
LAB_7101ad4810:
      uVar22 = FUN_7103390e60(param_1 + 0x118);
      if ((uVar22 & 1) == 0) {
        pcVar18 = "category_item";
      }
      else {
        pcVar18 = "category_energy";
      }
    }
    else {
      if ((((ulong)puVar14 & 0xffffffffff) != 0 &&
          ((ulong)puVar14 & 0xff00000000000000) == 0xc100000000000000) !=
          ((uVar22 & 0xff00000000000000) == 0xc100000000000000 && (uVar22 & 0xffffffffff) != 0))
      goto LAB_7101ad4810;
LAB_7101ad4860:
      pcVar18 = "category_ticket";
    }
    FUN_710062dc20((uint *)&local_1c0,pcVar18);
    FUN_7103776910(&local_250,lVar2,(long ****)"set_txt_other_caption",ppppppppplVar19,ppppbVar20,
                   param_5,param_6,param_7,param_8);
    FUN_710377a120((long)&local_250,(char *)(param_1 + 0x19c),ppppppppplVar19,ppppbVar20,param_5,
                   param_6,param_7,param_8);
    uVar22 = (ulong)local_248;
    local_250 = &PTR_FUN_710523d9a8;
    local_248 = (undefined **)0x0;
    if (uVar22 == 0) goto switchD_7101ad3fd4_caseD_2;
LAB_7101ad54e8:
    FUN_710392eb40(uVar22);
    goto switchD_7101ad3fd4_caseD_2;
  }
  local_248 = (undefined **)((ulong)local_248 & 0xffffffffffffff00);
  local_250 = (undefined **)0x0;
  FUN_710062dc20((uint *)&local_250,"%s");
  FUN_7103778300(0x3f800000,*(long *)(param_1 + 0x108),(long)&local_248);
  local_290 = local_290 & 0xffffffffffffff00;
  local_298 = (undefined **)0x0;
  FUN_710062dc20((uint *)&local_298,"%s");
  FUN_7103778300(0x3f800000,*(long *)(param_1 + 0x108),(long)&local_290);
  local_2d8 = local_2d8 & 0xffffff00;
  ppppppppplVar19 = (long *********)"miitype_gun_equip_on";
  if (!bVar1) {
    ppppppppplVar19 = (long *********)"miitype_gun_equip_off";
  }
  local_2e0 = (undefined **)0x0;
  FUN_710062dc20((uint *)&local_2e0,"%s");
  FUN_7103778300(0x3f800000,*(long *)(param_1 + 0x108),(long)&local_2d8);
switchD_7101ad3fd4_caseD_2:
  FUN_7103778300(0x3f800000,*(long *)(param_1 + 0x108),(long)local_1b8);
  FUN_7103776640(&local_298,lVar2,(byte ****)"set_parts_btn_00",ppppppppplVar19,ppppbVar20,param_5,
                 param_6,param_7,param_8);
  FUN_7103776910(&local_250,(long)&local_298,(long ****)"set_txt_btn",ppppppppplVar19,ppppbVar20,
                 param_5,param_6,param_7,param_8);
  FUN_710377a120((long)&local_250,(char *)&local_200,ppppppppplVar19,ppppbVar20,param_5,param_6,
                 param_7,param_8);
  ppuVar8 = local_248;
  local_250 = &PTR_FUN_710523d9a8;
  local_248 = (undefined **)0x0;
  if (ppuVar8 != (undefined **)0x0) {
    FUN_710392eb40((ulong)ppuVar8);
  }
  uVar22 = local_290;
  local_298 = &PTR_FUN_710523d988;
  local_290 = 0;
  if (uVar22 != 0) {
    uVar17 = *(ulong *)(uVar22 + 0x18);
    *(undefined ***)(uVar22 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar22 + 0x18) = 0;
    if (uVar17 != 0) {
      FUN_710392eb40(uVar17);
    }
    FUN_710392eb40(uVar22);
  }
  FUN_7103776910(&local_250,lVar2,(long ****)"set_txt_name",ppppppppplVar19,ppppbVar20,param_5,
                 param_6,param_7,param_8);
  FUN_710377a120((long)&local_250,(char *)(param_1 + 0x154),ppppppppplVar19,ppppbVar20,param_5,
                 param_6,param_7,param_8);
  FUN_7103776640(&local_2e0,lVar2,(byte ****)"explain",ppppppppplVar19,ppppbVar20,param_5,param_6,
                 param_7,param_8);
  FUN_7103776910(&local_298,(long)&local_2e0,(long ****)"set_txt_00",ppppppppplVar19,ppppbVar20,
                 param_5,param_6,param_7,param_8);
  uVar22 = CONCAT44(uStack_2d4,local_2d8);
  local_2e0 = &PTR_FUN_710523d988;
  local_2d8 = 0;
  uStack_2d4 = 0;
  if (uVar22 != 0) {
    uVar17 = *(ulong *)(uVar22 + 0x18);
    *(undefined ***)(uVar22 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar22 + 0x18) = 0;
    if (uVar17 != 0) {
      FUN_710392eb40(uVar17);
    }
    FUN_710392eb40(uVar22);
  }
  FUN_710377a120((long)&local_298,(char *)(param_1 + 0x19c),ppppppppplVar19,ppppbVar20,param_5,
                 param_6,param_7,param_8);
  uVar22 = local_290;
  if ((*(long *)(param_1 + 0x110) != 0) && (1 < *(int *)(param_1 + 0xe8) - 1U)) {
    if (0x12 < *(uint *)(param_1 + 0xe4)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(undefined4 *)(param_1 + (long)(int)*(uint *)(param_1 + 0xe4) * 4 + 0x98) = 1;
  }
  local_298 = &PTR_FUN_710523d9a8;
  local_290 = 0;
  if (uVar22 != 0) {
    FUN_710392eb40(uVar22);
  }
  uVar22 = (ulong)local_248;
  local_250 = &PTR_FUN_710523d9a8;
  local_248 = (undefined **)0x0;
  if (uVar22 != 0) {
    FUN_710392eb40(uVar22);
  }
  uVar22 = local_170;
  local_178 = &PTR_FUN_710523d9a8;
  local_170 = 0;
  if (uVar22 != 0) {
    FUN_710392eb40(uVar22);
  }
  uVar22 = local_118;
  local_120 = (long ********)&PTR_FUN_710523d988;
  local_118 = 0;
  if (uVar22 != 0) {
    uVar17 = *(ulong *)(uVar22 + 0x18);
    *(undefined ***)(uVar22 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar22 + 0x18) = 0;
    if (uVar17 != 0) {
      FUN_710392eb40(uVar17);
    }
    FUN_710392eb40(uVar22);
  }
  return;
}

