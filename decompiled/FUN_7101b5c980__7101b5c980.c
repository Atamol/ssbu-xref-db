// addr:      7101b5c980
// offset:    0x1b5c980
// name:      FUN_7101b5c980
// mangled:   
// signature: undefined __cdecl FUN_7101b5c980(long * param_1, uint param_2, undefined8 param_3, ulong param_4, long * * * * param_5, ulong param_6, undefined8 param_7, byte * * * * param_8, uint param_9)


void FUN_7101b5c980(long *param_1,uint param_2,undefined8 param_3,ulong param_4,long ****param_5,
                   ulong param_6,undefined8 param_7,byte ****param_8,uint param_9)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  uint uVar5;
  ushort *puVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  byte *pbVar10;
  undefined8 uVar11;
  long *********ppppppppplVar12;
  long ****pppplVar13;
  int iVar14;
  byte ****ppppbVar15;
  long ****pppplVar16;
  undefined8 uVar17;
  byte ****ppppbVar18;
  undefined4 uVar19;
  undefined8 *puVar20;
  long *plVar21;
  long lVar22;
  float fVar23;
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  ulong uVar27;
  long *local_1178;
  long *local_1170;
  long *local_1168;
  undefined **local_1128;
  ulong local_1120;
  undefined **local_1118;
  ulong local_1110;
  undefined **local_1108;
  ulong local_1100;
  undefined **local_10f8;
  ulong local_10f0;
  undefined **local_10e8;
  ulong local_10e0;
  uint local_10d8 [2];
  char local_10d0 [64];
  undefined8 local_1090;
  undefined8 uStack_1088;
  int local_88 [6];
  
  if (3 < param_2) {
    return;
  }
  if ((int)param_3 < 0) {
    return;
  }
  lVar1 = (long)(int)param_3 + 4;
  if (7 < (uint)lVar1) {
    return;
  }
  iVar14 = (int)param_4;
  pppplVar16 = param_5;
  uVar17 = param_7;
  ppppbVar18 = param_8;
  uVar7 = param_6;
  if (iVar14 == -1) {
    local_10d0[0] = '\0';
    local_10d8[0] = 0;
    local_10d8[1] = 0;
  }
  else {
    FUN_71003a4ca0(local_10d8,"cmn_%dp",param_4 & 0xffffffff,param_3,param_4,param_5,param_6,param_7
                   ,param_8);
  }
  lVar22 = (long)(int)param_2;
  FUN_710377a120((long)(param_1 + (long)(int)param_2 * 0xc + 0xee),local_10d0,param_3,param_4,
                 pppplVar16,uVar7,uVar17,ppppbVar18);
  uVar11 = 1;
  ppppbVar15 = param_8;
  FUN_710377a280((long)(param_1 + (long)(int)param_2 * 0xc + 0xee + 2),
                 (byte *)"mel_homerun_player_name",1);
  FUN_710377a120((long)(param_1 + lVar1 * 0xc + 0xee),local_10d0,uVar11,ppppbVar15,pppplVar16,uVar7,
                 uVar17,ppppbVar18);
  FUN_710377a280((long)(param_1 + lVar1 * 0xc + 0xee + 2),(byte *)"mel_homerun_player_name",1);
  uVar5 = (uint)param_7;
  if (uVar5 == 0xffffffff) {
    param_8 = (byte ****)0x1;
    ppppppppplVar12 = (long *********)(param_6 & 0xffffffff);
    plVar21 = FUN_710323f330(*(long **)(*param_1 + 0x78),(ulong)param_5,(ulong)ppppppppplVar12,1,
                             pppplVar16,uVar7,uVar17,ppppbVar18);
    lVar2 = lVar22 * 0xc + 0xf2;
    FUN_7103778b80(param_1[lVar22 * 0xc + 0xf3],(long)plVar21,ppppppppplVar12,param_8,pppplVar16,
                   uVar7,uVar17,ppppbVar18);
    lVar3 = lVar22 * 0xc + 0xf4;
    FUN_7103778b80(param_1[lVar22 * 0xc + 0xf5],(long)plVar21,ppppppppplVar12,param_8,pppplVar16,
                   uVar7,uVar17,ppppbVar18);
    lVar4 = lVar1 * 0xc + 0xf2;
    FUN_7103778b80(param_1[lVar1 * 0xc + 0xf3],(long)plVar21,ppppppppplVar12,param_8,pppplVar16,
                   uVar7,uVar17,ppppbVar18);
    lVar8 = lVar1 * 0xc + 0xf4;
    FUN_7103778b80(param_1[lVar1 * 0xc + 0xf5],(long)plVar21,ppppppppplVar12,param_8,pppplVar16,
                   uVar7,uVar17,ppppbVar18);
    lVar9 = 10;
  }
  else {
    if (((*(long **)(param_1[lVar22 * 0xc + 0xf7] + 8) != (long *)0x0) && (DAT_710593bc38 != 0)) &&
       (uVar5 < 0x20)) {
      if (0x1f < (ulong)(long)(int)uVar5) goto LAB_7101b5cfa4;
      lVar8 = *(long *)(*(long *)(DAT_710593bc38 + 8) + (long)(int)uVar5 * 8);
      if (lVar8 != 0) {
        FUN_710379e9c0(*(long **)(param_1[lVar22 * 0xc + 0xf7] + 8),lVar8,0);
      }
    }
    if (((*(long **)(param_1[lVar22 * 0xc + 0xf9] + 8) != (long *)0x0) && (DAT_710593bc38 != 0)) &&
       (uVar5 < 0x20)) {
      if (0x1f < (ulong)(long)(int)uVar5) goto LAB_7101b5cfa4;
      lVar8 = *(long *)(*(long *)(DAT_710593bc38 + 8) + (long)(int)uVar5 * 8);
      if (lVar8 != 0) {
        FUN_710379e9c0(*(long **)(param_1[lVar22 * 0xc + 0xf9] + 8),lVar8,0);
      }
    }
    if (((*(long **)(param_1[lVar1 * 0xc + 0xf7] + 8) != (long *)0x0) && (DAT_710593bc38 != 0)) &&
       (uVar5 < 0x20)) {
      if (0x1f < (ulong)(long)(int)uVar5) goto LAB_7101b5cfa4;
      lVar8 = *(long *)(*(long *)(DAT_710593bc38 + 8) + (long)(int)uVar5 * 8);
      if (lVar8 != 0) {
        FUN_710379e9c0(*(long **)(param_1[lVar1 * 0xc + 0xf7] + 8),lVar8,0);
      }
    }
    lVar8 = lVar1 * 0xc + 0xf8;
    lVar2 = lVar22 * 0xc + 0xf6;
    lVar3 = lVar22 * 0xc + 0xf8;
    lVar4 = lVar1 * 0xc + 0xf6;
    if (((*(long **)(param_1[lVar1 * 0xc + 0xf9] + 8) != (long *)0x0) && (DAT_710593bc38 != 0)) &&
       (uVar5 < 0x20)) {
      if (0x1f < (ulong)(long)(int)uVar5) {
LAB_7101b5cfa4:
                    /* WARNING: Subroutine does not return */
        abort();
      }
      lVar9 = *(long *)(*(long *)(DAT_710593bc38 + 8) + (long)(int)uVar5 * 8);
      if (lVar9 != 0) {
        FUN_710379e9c0(*(long **)(param_1[lVar1 * 0xc + 0xf9] + 8),lVar9,0);
      }
    }
    lVar9 = 0xb;
  }
  local_1168 = param_1 + lVar8;
  local_1170 = param_1 + lVar4;
  local_1178 = param_1 + lVar3;
  FUN_710377b140((long)(param_1 + lVar22 * 0x1a + lVar9 * 2 + 0x1e));
  FUN_710377b140((long)(param_1 + lVar1 * 0x1a + lVar9 * 2 + 0x1e));
  lVar8 = *(long *)(DAT_710532f730 + 8);
  uVar5 = FUN_7103280ec0(*(long *)(lVar8 + 0x2a8),(ulong)param_5,param_6 & 0xffffffff,param_8,
                         pppplVar16,uVar7,uVar17,ppppbVar18);
  uVar27 = 0;
  lVar8 = *(long *)(*(long *)(lVar8 + 0x2a8) + 8);
  auVar24 = FUN_710326ad60(ZEXT816(0),lVar8,uVar5,0x120ae7cf4f);
  auVar25._8_8_ = 0;
  auVar25._0_8_ = uVar27;
  auVar25 = FUN_710326ad60(auVar25 << 0x40,lVar8,uVar5,0x127de0ffd9);
  pppplVar13 = (long ****)0xf95a1c649;
  auVar26 = FUN_710326ad60(ZEXT816(0x3f800000),lVar8,uVar5,0xf95a1c649);
  FUN_7103778ab0(&local_10e8,param_1 + lVar2,pppplVar13,param_8,pppplVar16,uVar7,uVar17,ppppbVar18);
  uVar11 = CONCAT44(auVar25._0_4_,auVar24._0_4_);
  uStack_1088 = 0;
  fVar23 = auVar26._0_4_;
  local_1090 = uVar11;
  FUN_7103779770(fVar23,local_10e0,&local_1090);
  uVar27 = local_10e0;
  local_10e8 = &PTR_FUN_710523d9a8;
  local_10e0 = 0;
  if (uVar27 != 0) {
    FUN_710392eb40(uVar27);
  }
  FUN_7103778ab0(&local_10f8,local_1178,pppplVar13,param_8,pppplVar16,uVar7,uVar17,ppppbVar18);
  uStack_1088 = 0;
  local_1090 = uVar11;
  FUN_7103779770(fVar23,local_10f0,&local_1090);
  uVar27 = local_10f0;
  local_10f8 = &PTR_FUN_710523d9a8;
  local_10f0 = 0;
  if (uVar27 != 0) {
    FUN_710392eb40(uVar27);
  }
  FUN_7103778ab0(&local_1108,local_1170,pppplVar13,param_8,pppplVar16,uVar7,uVar17,ppppbVar18);
  uStack_1088 = 0;
  local_1090 = uVar11;
  FUN_7103779770(fVar23,local_1100,&local_1090);
  uVar27 = local_1100;
  local_1108 = &PTR_FUN_710523d9a8;
  local_1100 = 0;
  if (uVar27 != 0) {
    FUN_710392eb40(uVar27);
  }
  FUN_7103778ab0(&local_1118,local_1168,pppplVar13,param_8,pppplVar16,uVar7,uVar17,ppppbVar18);
  uStack_1088 = 0;
  local_1090 = uVar11;
  FUN_7103779770(fVar23,local_1110,&local_1090);
  uVar27 = local_1110;
  local_1118 = &PTR_FUN_710523d9a8;
  local_1110 = 0;
  if (uVar27 != 0) {
    FUN_710392eb40(uVar27);
  }
  if (iVar14 == 2) {
    FUN_710377b140((long)(param_1 + lVar22 * 0x1a + 0x20));
    plVar21 = param_1 + lVar1 * 0x1a + 0x20;
  }
  else if (iVar14 == 3) {
    FUN_710377b140((long)(param_1 + lVar22 * 0x1a + 0x22));
    plVar21 = param_1 + lVar1 * 0x1a + 0x22;
  }
  else if (iVar14 == 4) {
    FUN_710377b140((long)(param_1 + lVar22 * 0x1a + 0x24));
    plVar21 = param_1 + lVar1 * 0x1a + 0x24;
  }
  else {
    FUN_710377b140((long)(param_1 + lVar22 * 0x1a + 0x1e));
    plVar21 = param_1 + lVar1 * 0x1a + 0x1e;
  }
  FUN_710377b140((long)plVar21);
  FUN_7103778ab0(&local_1128,param_1 + 0x14e,pppplVar13,param_8,pppplVar16,uVar7,uVar17,ppppbVar18);
  if (param_9 != 0xffffffff) {
    puVar20 = &DAT_7105339830;
    if ((param_9 < 10) && (*(char *)(DAT_71053398b0 + 8) != '\0')) {
      puVar20 = (undefined8 *)(&DAT_7105339860)[(int)param_9];
      uVar19 = 0;
      if (puVar20 == (undefined8 *)0x0) goto LAB_7101b5cef0;
    }
    uVar5 = *(int *)(puVar20[2] + 0x9c) - 1;
    if (uVar5 < 7) {
      uVar19 = *(undefined4 *)(&DAT_7104753de0 + (long)(int)uVar5 * 4);
      goto LAB_7101b5cef0;
    }
  }
  uVar19 = 0;
LAB_7101b5cef0:
  plVar21 = *(long **)(local_1120 + 0x10);
  uVar7 = local_1120;
  if (plVar21 != (long *)0x0) {
    pbVar10 = (byte *)plVar21[0x1c];
    *(undefined4 *)((long)plVar21 + 0x25c) = uVar19;
    if (((pbVar10 != (byte *)0x0) && (*pbVar10 != 0x23)) && (*pbVar10 != 0x40)) {
      puVar6 = (ushort *)FUN_71037a4450((long *)*DAT_710593bc60,pbVar10);
      local_88[0] = *(int *)((long)plVar21 + 0x25c);
      memset(&local_1090,0,0x1000);
      uVar5 = FUN_71037ae170((long)&local_1090,puVar6,local_88);
      FUN_71037a2270(plVar21,(ushort *)&local_1090,uVar5,0);
      uVar7 = local_1120;
    }
  }
  local_1128 = &PTR_FUN_710523d9a8;
  local_1120 = 0;
  if (uVar7 != 0) {
    FUN_710392eb40(uVar7);
  }
  return;
}

