// addr:      7101bd3320
// offset:    0x1bd3320
// name:      FUN_7101bd3320
// mangled:   
// signature: undefined __cdecl FUN_7101bd3320(long * * * * * * * * param_1, int param_2, undefined8 param_3, undefined8 param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_7101bd3320(long ********param_1,int param_2,undefined8 param_3,undefined8 param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long ********pppppppplVar1;
  char cVar2;
  long *plVar3;
  long ********pppppppplVar4;
  uint uVar5;
  undefined8 extraout_x1;
  long ****pppplVar6;
  undefined8 uVar7;
  byte ****ppppbVar8;
  undefined8 uVar9;
  long ********pppppppplVar10;
  long ***ppplVar11;
  code *pcVar12;
  long lVar13;
  uint uVar14;
  char *pcVar15;
  byte *pbVar16;
  long *******ppppppplVar17;
  uint uVar18;
  ulong uVar19;
  byte bVar20;
  long ****pppplVar21;
  long ****pppplVar22;
  long *******ppppppplVar23;
  ulong uVar24;
  undefined **local_2270;
  long *local_2268;
  undefined8 local_2260;
  undefined8 local_2258;
  undefined8 local_2250;
  undefined2 local_2248;
  undefined6 local_2246;
  undefined2 uStack_2240;
  undefined4 local_223e;
  undefined1 local_223a;
  undefined1 uStack_2239;
  undefined8 local_2210;
  undefined1 local_2208;
  undefined1 uStack_2207;
  undefined1 uStack_2206;
  undefined1 uStack_2205;
  undefined2 uStack_2204;
  undefined2 uStack_2202;
  undefined4 uStack_2200;
  undefined1 uStack_21fc;
  undefined1 uStack_21fb;
  undefined1 uStack_21fa;
  undefined1 uStack_21f9;
  undefined2 uStack_21f8;
  undefined1 uStack_21f6;
  undefined1 uStack_21f5;
  byte local_21f4 [6];
  undefined2 uStack_21ee;
  long alStack_21e0 [4];
  long *local_21c0;
  undefined1 local_21b4 [8];
  byte local_21ac [28];
  long *local_2190;
  long alStack_2180 [2];
  undefined8 local_216c;
  byte local_2164 [4];
  long *local_2160;
  long alStack_2150 [4];
  long *local_2130;
  undefined1 auStack_2124 [4];
  long alStack_2120 [4];
  long *local_2100;
  undefined4 local_20f0;
  undefined1 uStack_1124;
  undefined4 local_1120;
  undefined1 uStack_111c;
  undefined8 local_1118;
  undefined1 uStack_1110;
  undefined4 local_10d0;
  undefined5 uStack_10cc;
  undefined3 uStack_10c7;
  undefined5 uStack_10c4;
  undefined1 auStack_1080 [4112];
  
  local_2210 = (undefined **)((ulong)local_2210 & 0xffffffff00000000);
  uStack_2207 = 1;
  uStack_2204 = 0;
  uStack_2202 = 0;
  uStack_2200 = 1;
  uVar5 = 0x811c9dc5;
  local_21f4[0] = 0;
  uStack_21fc = 0;
  uStack_21fb = 0;
  uStack_21fa = 0;
  uStack_21f9 = 0;
  uStack_21f8 = 0;
  uStack_21f6 = 0;
  uStack_21f5 = 0;
  local_21ac[0] = 0;
  local_21b4 = (undefined1  [8])0x0;
  local_2164[0] = 0;
  local_216c = 0;
  memset(auStack_2124,0,0x1000);
  uStack_1124 = 1;
  uStack_111c = 1;
  uStack_1110 = 0;
  local_1118 = 0;
  local_10d0 = 0x20;
  memset(auStack_1080,0,0x1000);
  uStack_10c4 = 0;
  uStack_10cc = 0;
  uStack_10c7 = 0;
  local_2210 = (undefined **)CONCAT44(5,(int)local_2210);
  local_2208 = 1;
  local_1120 = 0;
  local_2248 = (ushort)local_2248._1_1_ << 8;
  local_2250 = 0x6c61636f6c5f7265;
  pcVar15 = (char *)((long)&local_2258 + 1);
  do {
    cVar2 = *pcVar15;
    pcVar15 = pcVar15 + 1;
  } while (cVar2 != '\0');
  uVar19 = 0;
  bVar20 = 0x6d;
  do {
    local_21ac[uVar19] = bVar20;
    if (0x3e < (int)uVar19 + 1U) {
      uVar19 = (ulong)((int)uVar19 + 1);
      break;
    }
    bVar20 = *(byte *)((long)&local_2258 + uVar19 + 1);
    uVar19 = uVar19 + 1;
  } while (bVar20 != 0);
  local_21ac[uVar19 & 0xffffffff] = 0;
  uVar18 = (uint)local_21ac[0];
  local_21b4._4_4_ = (int)uVar19;
  local_21b4._0_4_ = uVar5;
  if (local_21ac[0] != 0) {
    pbVar16 = local_21ac;
    do {
      pbVar16 = pbVar16 + 1;
      local_21b4._0_4_ = local_21b4._0_4_ * 0x89 ^ uVar18;
      uVar18 = (uint)*pbVar16;
    } while (uVar18 != 0);
  }
  local_2250 = 0x6c61636f6c5f7265;
  local_2248 = 0x635f;
  local_223a = 0;
  local_2246 = 0x696e756d6d6f;
  uStack_2240 = 0x6163;
  local_223e = 0x6e6f6974;
  pcVar15 = (char *)((long)&local_2258 + 1);
  do {
    cVar2 = *pcVar15;
    pcVar15 = pcVar15 + 1;
  } while (cVar2 != '\0');
  uVar19 = 0;
  bVar20 = 0x6d;
  do {
    local_21f4[uVar19] = bVar20;
    if (0x3e < (int)uVar19 + 1U) {
      uVar19 = (ulong)((int)uVar19 + 1);
      break;
    }
    bVar20 = *(byte *)((long)&local_2258 + uVar19 + 1);
    uVar19 = uVar19 + 1;
  } while (bVar20 != 0);
  local_21f4[uVar19 & 0xffffffff] = 0;
  uVar14 = (uint)local_21f4[0];
  uStack_21f8 = (undefined2)uVar19;
  uStack_21f6 = (undefined1)(uVar19 >> 0x10);
  uStack_21f5 = (undefined1)(uVar19 >> 0x18);
  uVar18 = uVar5;
  if (local_21f4[0] != 0) {
    pbVar16 = local_21f4;
    do {
      pbVar16 = pbVar16 + 1;
      uVar18 = uVar18 * 0x89 ^ uVar14;
      uVar14 = (uint)*pbVar16;
    } while (uVar14 != 0);
  }
  uStack_21fc = (undefined1)uVar18;
  uStack_21fb = (undefined1)(uVar18 >> 8);
  uStack_21fa = (undefined1)(uVar18 >> 0x10);
  uStack_21f9 = (undefined1)(uVar18 >> 0x18);
  local_2258 = (long ********)0x61636f6c5f756e6d;
  local_2250 = 0x656c7469745f6c;
  uVar14 = 0x6d;
  pbVar16 = (byte *)((long)&local_2258 + 1);
  uVar18 = uVar5;
  do {
    uVar18 = uVar18 * 0x89 ^ uVar14;
    uVar14 = (uint)*pbVar16;
    pbVar16 = pbVar16 + 1;
  } while (uVar14 != 0);
  uVar19 = 0;
  local_2260 = (undefined **)CONCAT44(0xf,uVar18);
  bVar20 = 0x6d;
  do {
    local_2164[uVar19] = bVar20;
    if (0x3e < (int)uVar19 + 1U) {
      uVar19 = (ulong)((int)uVar19 + 1);
      break;
    }
    bVar20 = *(byte *)((long)&local_2258 + uVar19 + 1);
    uVar19 = uVar19 + 1;
  } while (bVar20 != 0);
  local_2164[uVar19 & 0xffffffff] = 0;
  uVar18 = (uint)local_2164[0];
  local_216c = CONCAT44((int)uVar19,(undefined4)local_216c);
  if (local_2164[0] != 0) {
    pbVar16 = local_2164;
    do {
      pbVar16 = pbVar16 + 1;
      uVar5 = uVar5 * 0x89 ^ uVar18;
      uVar18 = (uint)*pbVar16;
    } while (uVar18 != 0);
  }
  local_216c = CONCAT44((int)uVar19,uVar5);
  pppplVar6 = (long ****)(ulong)(param_2 == -1);
  ppppbVar8 = (byte ****)0x1;
  FUN_7101af8570((long)param_1[0x2d],(int *)&local_2210,(ulong)pppplVar6,1,param_5,param_6,param_7,
                 param_8);
  FUN_7101af2070((long *)param_1[0x2e][0x10],5,pppplVar6,ppppbVar8,param_5,param_6,param_7,param_8);
  FUN_71032e5a30(*(long *)(DAT_710532f7c8 + 8),extraout_x1,pppplVar6,ppppbVar8,param_5,param_6,
                 param_7,param_8);
  if (param_1[3] == param_1[2]) goto LAB_7101bd4394;
  pppplVar21 = ***param_1[2];
  pppplVar22 = pppplVar21 + 1;
  ppplVar11 = *pppplVar21;
  *(undefined4 *)(ppplVar11[0xc0] + 2) = 0x20;
  *(undefined4 *)((long)ppplVar11[0xc0] + 0x14) = 0x40;
  *(undefined4 *)(ppplVar11[0xc0] + 3) = 0x10;
  FUN_7103776910(&local_2210,(long)pppplVar22,(long ****)"set_text_dev_count",pppplVar6,ppppbVar8,
                 param_5,param_6,param_7,param_8);
  plVar3 = (long *)CONCAT26(uStack_2202,
                            CONCAT24(uStack_2204,
                                     CONCAT13(uStack_2205,
                                              CONCAT12(uStack_2206,CONCAT11(uStack_2207,local_2208))
                                             )));
  if (*plVar3 != 0) {
    FUN_710377a280((long)&local_2210,(byte *)"mnu_local_display_rm_n",1);
  }
  local_2210 = &PTR_FUN_710523d9a8;
  local_2208 = 0;
  uStack_2207 = 0;
  uStack_2206 = 0;
  uStack_2205 = 0;
  uStack_2204 = 0;
  uStack_2202 = 0;
  if (plVar3 != (long *)0x0) {
    FUN_710392eb40((ulong)plVar3);
  }
  uStack_2200 = 0x3f800000;
  uStack_21fc = 1;
  uStack_21fb = 1;
  uStack_21fa = 1;
  uStack_21f9 = 0;
  local_2210 = (undefined **)0x0;
  local_2208 = 0;
  uStack_2207 = 0;
  uStack_2206 = 0x80;
  uStack_2205 = 0x41;
  uStack_2204 = 0;
  uStack_2202 = 0x4248;
  uStack_21f8 = 0;
  uStack_21f6 = 1;
  local_21c0 = (long *)0x0;
  local_2190 = (long *)0x0;
  local_2160 = (long *)0x0;
  local_2130 = (long *)0x0;
  local_2100 = (long *)0x0;
  local_21f4[5] = 0;
  local_21f4[3] = 0;
  local_21f4[4] = 0;
  uStack_21f5 = 0;
  local_21f4[0] = 0;
  local_21f4[1] = 0;
  local_21f4[2] = 0;
  FUN_710337e790((long)&local_2210);
  uStack_21fa = 1;
  local_2210 = (undefined **)((ulong)local_2210 & 0xffffffff);
  uStack_21fc = 0;
  local_21f4[2] = 1;
  local_21f4[3] = 1;
  local_2260 = (undefined **)&DAT_71050ac1d8;
  uStack_2240 = SUB82(&local_2260,0);
  local_223e = (undefined4)((ulong)&local_2260 >> 0x10);
  local_223a = (undefined1)((ulong)&local_2260 >> 0x30);
  uStack_2239 = (undefined1)((ulong)&local_2260 >> 0x38);
  local_2258 = param_1;
  FUN_71003cb050(&local_2260,alStack_21e0);
  plVar3 = (long *)CONCAT17(uStack_2239,CONCAT16(local_223a,CONCAT42(local_223e,uStack_2240)));
  if (&local_2260 == plVar3) {
    pcVar12 = *(code **)(*plVar3 + 0x20);
LAB_7101bd37f4:
    (*pcVar12)();
  }
  else if (plVar3 != (long *)0x0) {
    pcVar12 = *(code **)(*plVar3 + 0x28);
    goto LAB_7101bd37f4;
  }
  pppppppplVar10 = param_1 + 10;
  FUN_7103781a20((long *)(param_1 + 0x2f),pppplVar22,(byte ****)"scroll",(byte ****)&local_2210,
                 (long ****)pppppppplVar10,param_6,param_7,param_8);
  if (alStack_2120 == local_2100) {
    pcVar12 = *(code **)(*local_2100 + 0x20);
LAB_7101bd3840:
    (*pcVar12)();
  }
  else if (local_2100 != (long *)0x0) {
    pcVar12 = *(code **)(*local_2100 + 0x28);
    goto LAB_7101bd3840;
  }
  if (alStack_2150 == local_2130) {
    pcVar12 = *(code **)(*local_2130 + 0x20);
LAB_7101bd3870:
    (*pcVar12)();
  }
  else if (local_2130 != (long *)0x0) {
    pcVar12 = *(code **)(*local_2130 + 0x28);
    goto LAB_7101bd3870;
  }
  if (alStack_2180 == local_2160) {
    pcVar12 = *(code **)(*local_2160 + 0x20);
LAB_7101bd38a0:
    (*pcVar12)();
  }
  else if (local_2160 != (long *)0x0) {
    pcVar12 = *(code **)(*local_2160 + 0x28);
    goto LAB_7101bd38a0;
  }
  if ((long *)(local_21b4 + 4) == local_2190) {
    pcVar12 = *(code **)(*local_2190 + 0x20);
LAB_7101bd38d0:
    (*pcVar12)();
  }
  else if (local_2190 != (long *)0x0) {
    pcVar12 = *(code **)(*local_2190 + 0x28);
    goto LAB_7101bd38d0;
  }
  if (alStack_21e0 == local_21c0) {
    pcVar12 = *(code **)(*local_21c0 + 0x20);
LAB_7101bd3900:
    (*pcVar12)();
  }
  else if (local_21c0 != (long *)0x0) {
    pcVar12 = *(code **)(*local_21c0 + 0x28);
    goto LAB_7101bd3900;
  }
  uStack_2200 = 1;
  uStack_21fc = 1;
  uStack_21fb = 0;
  uStack_21fa = 1;
  local_2210 = (undefined **)0x0;
  uStack_2206 = 0;
  uStack_2205 = 0;
  uStack_2204 = 0;
  uStack_2202 = 0;
  uStack_21f8 = 0;
  uStack_21f6 = 0;
  uStack_21f5 = 0;
  local_21f4[0] = 0;
  local_21f4[1] = 0;
  local_21f4[2] = 0;
  local_21f4[3] = 0;
  local_21f4[4] = 0;
  local_21f4[5] = 0;
  uStack_21ee = 0;
  local_21c0 = (long *)0x0;
  local_2190 = (long *)0x0;
  local_2160 = (long *)0x0;
  local_2130 = (long *)0x0;
  local_2100 = (long *)0x0;
  local_20f0 = 0;
  local_2208 = 1;
  uStack_2207 = 1;
  local_2260 = &PTR_FUN_71050ac220;
  uStack_2240 = SUB82(&local_2260,0);
  local_223e = (undefined4)((ulong)&local_2260 >> 0x10);
  local_223a = (undefined1)((ulong)&local_2260 >> 0x30);
  uStack_2239 = (undefined1)((ulong)&local_2260 >> 0x38);
  FUN_7101989a30(&local_2260,alStack_2150);
  plVar3 = (long *)CONCAT17(uStack_2239,CONCAT16(local_223a,CONCAT42(local_223e,uStack_2240)));
  if (&local_2260 == plVar3) {
    pcVar12 = *(code **)(*plVar3 + 0x20);
LAB_7101bd398c:
    (*pcVar12)();
  }
  else if (plVar3 != (long *)0x0) {
    pcVar12 = *(code **)(*plVar3 + 0x28);
    goto LAB_7101bd398c;
  }
  uStack_2240 = SUB82(&local_2260,0);
  local_223e = (undefined4)((ulong)&local_2260 >> 0x10);
  local_223a = (undefined1)((ulong)&local_2260 >> 0x30);
  uStack_2239 = (undefined1)((ulong)&local_2260 >> 0x38);
  local_2260 = &PTR_FUN_71050ac268;
  local_2258 = param_1;
  FUN_7101989a30(&local_2260,(long *)(local_21b4 + 4));
  plVar3 = (long *)CONCAT17(uStack_2239,CONCAT16(local_223a,CONCAT42(local_223e,uStack_2240)));
  if (&local_2260 == plVar3) {
    pcVar12 = *(code **)(*plVar3 + 0x20);
LAB_7101bd39d8:
    (*pcVar12)();
  }
  else if (plVar3 != (long *)0x0) {
    pcVar12 = *(code **)(*plVar3 + 0x28);
    goto LAB_7101bd39d8;
  }
  pppppppplVar1 = param_1 + 0x30;
  ppppbVar8 = (byte ****)&local_2210;
  FUN_7103770b30((long *)pppppppplVar1,pppplVar22,(long ****)"selector_0",ppppbVar8,
                 (long ****)pppppppplVar10,param_6,param_7,param_8);
  ppppppplVar23 = param_1[0x30];
  uVar19 = (long)ppppppplVar23[0x31] - (long)ppppppplVar23[0x30];
  if (0 < (int)(uVar19 >> 3)) {
    uVar19 = uVar19 >> 3 & 0xffffffff;
    FUN_710376e070((long *)ppppppplVar23,0,(long ****)*ppppppplVar23[0x30],ppppbVar8,
                   (long ****)pppppppplVar10,param_6,param_7,param_8);
    if (uVar19 != 1) {
      uVar24 = 1;
      do {
        FUN_710376e070((long *)ppppppplVar23,(int)uVar24,(long ****)ppppppplVar23[0x30][uVar24],
                       ppppbVar8,(long ****)pppppppplVar10,param_6,param_7,param_8);
        uVar24 = uVar24 + 1;
      } while (uVar19 != uVar24);
    }
  }
  ppppppplVar23 = *pppppppplVar1;
  if (ppppppplVar23 != (long *******)0x0) {
    if (0 < (int)((ulong)((long)ppppppplVar23[0x31] - (long)ppppppplVar23[0x30]) >> 3)) {
      uVar5 = 0;
      do {
        FUN_7103771d60(&local_2260,(long)ppppppplVar23,(long ****)(ulong)uVar5,ppppbVar8,
                       (long ****)pppppppplVar10,param_6,param_7,param_8);
        pppppppplVar4 = local_2258;
        ppppppplVar23 = *local_2258;
        if (ppppppplVar23 == (long *******)0x0) {
          local_2260 = &PTR_FUN_710523d9c8;
          local_2258 = (long ********)0x0;
          if (pppppppplVar4 != (long ********)0x0) goto LAB_7101bd3b2c;
        }
        else {
          (*(code *)(*ppppppplVar23)[0x3f])(ppppppplVar23,0);
          uVar19 = (*(code *)(*ppppppplVar23)[0x40])(ppppppplVar23);
          if ((uVar19 & 1) == 0) {
            uVar18 = 1;
          }
          else {
            uVar18 = (*(code *)(*ppppppplVar23)[0x42])(ppppppplVar23);
            uVar18 = uVar18 ^ 1;
          }
          pppplVar6 = (long ****)0x0;
          (*(code *)(*ppppppplVar23)[0x71])(ppppppplVar23,uVar18 & 1);
          FUN_710377ad90(&local_2270,(long)*pppppppplVar4,pppplVar6,ppppbVar8,
                         (long ****)pppppppplVar10,param_6,param_7,param_8);
          plVar3 = local_2268;
          lVar13 = *local_2268;
          if (lVar13 != 0) {
            *(byte *)(lVar13 + 0x58) = *(byte *)(lVar13 + 0x58) & 0xfe;
          }
          local_2270 = &PTR_FUN_710523d9a8;
          local_2268 = (long *)0x0;
          if (plVar3 != (long *)0x0) {
            FUN_710392eb40((ulong)plVar3);
          }
LAB_7101bd3b2c:
          local_2258 = (long ********)0x0;
          local_2260 = &PTR_FUN_710523d9c8;
          FUN_710392eb40((ulong)pppppppplVar4);
        }
        ppppppplVar23 = *pppppppplVar1;
        uVar5 = uVar5 + 1;
      } while ((int)uVar5 <
               (int)((ulong)((long)ppppppplVar23[0x31] - (long)ppppppplVar23[0x30]) >> 3));
    }
    FUN_710376b960((long)ppppppplVar23);
  }
  if (alStack_2120 == local_2100) {
    pcVar12 = *(code **)(*local_2100 + 0x20);
LAB_7101bd3b84:
    (*pcVar12)();
  }
  else if (local_2100 != (long *)0x0) {
    pcVar12 = *(code **)(*local_2100 + 0x28);
    goto LAB_7101bd3b84;
  }
  if (alStack_2150 == local_2130) {
    pcVar12 = *(code **)(*local_2130 + 0x20);
LAB_7101bd3bb4:
    (*pcVar12)();
  }
  else if (local_2130 != (long *)0x0) {
    pcVar12 = *(code **)(*local_2130 + 0x28);
    goto LAB_7101bd3bb4;
  }
  if (alStack_2180 == local_2160) {
    pcVar12 = *(code **)(*local_2160 + 0x20);
LAB_7101bd3be4:
    (*pcVar12)();
  }
  else if (local_2160 != (long *)0x0) {
    pcVar12 = *(code **)(*local_2160 + 0x28);
    goto LAB_7101bd3be4;
  }
  if ((long *)(local_21b4 + 4) == local_2190) {
    pcVar12 = *(code **)(*local_2190 + 0x20);
LAB_7101bd3c14:
    (*pcVar12)();
  }
  else if (local_2190 != (long *)0x0) {
    pcVar12 = *(code **)(*local_2190 + 0x28);
    goto LAB_7101bd3c14;
  }
  if (alStack_21e0 == local_21c0) {
    pcVar12 = *(code **)(*local_21c0 + 0x20);
LAB_7101bd3c44:
    (*pcVar12)();
  }
  else if (local_21c0 != (long *)0x0) {
    pcVar12 = *(code **)(*local_21c0 + 0x28);
    goto LAB_7101bd3c44;
  }
  pppppppplVar1 = param_1 + 0x31;
  uStack_21fc = 1;
  uStack_21fb = 0;
  uStack_2200 = 1;
  uStack_21fa = 1;
  ppppbVar8 = (byte ****)&local_2210;
  local_2210 = (undefined **)0x0;
  uStack_2206 = 0;
  uStack_2205 = 0;
  uStack_2204 = 0;
  uStack_2202 = 0;
  uStack_21f8 = 0;
  uStack_21f6 = 0;
  uStack_21f5 = 0;
  local_21f4[0] = 0;
  local_21f4[1] = 0;
  local_21f4[2] = 0;
  local_21f4[3] = 0;
  local_21f4[4] = 0;
  local_21f4[5] = 0;
  uStack_21ee = 0;
  local_21c0 = (long *)0x0;
  local_2190 = (long *)0x0;
  local_2160 = (long *)0x0;
  local_2130 = (long *)0x0;
  local_2100 = (long *)0x0;
  local_20f0 = 0;
  local_2208 = 0;
  uStack_2207 = 1;
  FUN_7103770b30((long *)pppppppplVar1,pppplVar22,(long ****)"selector_1",ppppbVar8,
                 (long ****)pppppppplVar10,param_6,param_7,param_8);
  ppppppplVar23 = param_1[0x31];
  uVar19 = (long)ppppppplVar23[0x31] - (long)ppppppplVar23[0x30];
  if (0 < (int)(uVar19 >> 3)) {
    uVar19 = uVar19 >> 3 & 0xffffffff;
    FUN_710376e070((long *)ppppppplVar23,0,(long ****)*ppppppplVar23[0x30],ppppbVar8,
                   (long ****)pppppppplVar10,param_6,param_7,param_8);
    if (uVar19 != 1) {
      uVar24 = 1;
      do {
        FUN_710376e070((long *)ppppppplVar23,(int)uVar24,(long ****)ppppppplVar23[0x30][uVar24],
                       ppppbVar8,(long ****)pppppppplVar10,param_6,param_7,param_8);
        uVar24 = uVar24 + 1;
      } while (uVar19 != uVar24);
    }
  }
  ppppppplVar23 = *pppppppplVar1;
  if (ppppppplVar23 != (long *******)0x0) {
    if (0 < (int)((ulong)((long)ppppppplVar23[0x31] - (long)ppppppplVar23[0x30]) >> 3)) {
      uVar5 = 0;
      do {
        FUN_7103771d60(&local_2260,(long)ppppppplVar23,(long ****)(ulong)uVar5,ppppbVar8,
                       (long ****)pppppppplVar10,param_6,param_7,param_8);
        pppppppplVar4 = local_2258;
        ppppppplVar23 = *local_2258;
        if (ppppppplVar23 == (long *******)0x0) {
          local_2260 = &PTR_FUN_710523d9c8;
          local_2258 = (long ********)0x0;
          if (pppppppplVar4 != (long ********)0x0) goto LAB_7101bd3e34;
        }
        else {
          (*(code *)(*ppppppplVar23)[0x3f])(ppppppplVar23,0);
          uVar19 = (*(code *)(*ppppppplVar23)[0x40])(ppppppplVar23);
          if ((uVar19 & 1) == 0) {
            uVar18 = 1;
          }
          else {
            uVar18 = (*(code *)(*ppppppplVar23)[0x42])(ppppppplVar23);
            uVar18 = uVar18 ^ 1;
          }
          pppplVar6 = (long ****)0x0;
          (*(code *)(*ppppppplVar23)[0x71])(ppppppplVar23,uVar18 & 1);
          ppppppplVar23 = *pppppppplVar4;
          if (ppppppplVar23 == (long *******)0x0) {
            ppppppplVar23 = (long *******)0x0;
          }
          else {
            (*(code *)(*ppppppplVar23)[0x41])(ppppppplVar23,0);
            uVar19 = (*(code *)(*ppppppplVar23)[0x40])(ppppppplVar23);
            if ((uVar19 & 1) == 0) {
              uVar18 = 1;
            }
            else {
              uVar18 = (*(code *)(*ppppppplVar23)[0x42])(ppppppplVar23);
              uVar18 = uVar18 ^ 1;
            }
            pppplVar6 = (long ****)0x0;
            (*(code *)(*ppppppplVar23)[0x71])(ppppppplVar23,uVar18 & 1);
            ppppppplVar23 = *pppppppplVar4;
          }
          FUN_710377ad90(&local_2270,(long)ppppppplVar23,pppplVar6,ppppbVar8,
                         (long ****)pppppppplVar10,param_6,param_7,param_8);
          plVar3 = local_2268;
          local_2270 = &PTR_FUN_710523d9a8;
          local_2268 = (long *)0x0;
          if (plVar3 != (long *)0x0) {
            FUN_710392eb40((ulong)plVar3);
          }
LAB_7101bd3e34:
          local_2258 = (long ********)0x0;
          local_2260 = &PTR_FUN_710523d9c8;
          FUN_710392eb40((ulong)pppppppplVar4);
        }
        ppppppplVar23 = *pppppppplVar1;
        uVar5 = uVar5 + 1;
      } while ((int)uVar5 <
               (int)((ulong)((long)ppppppplVar23[0x31] - (long)ppppppplVar23[0x30]) >> 3));
    }
    FUN_710376b960((long)ppppppplVar23);
    (*(code *)(**pppppppplVar1)[0xe])(*pppppppplVar1,0);
  }
  if (alStack_2120 == local_2100) {
    pcVar12 = *(code **)(*local_2100 + 0x20);
LAB_7101bd3ea0:
    (*pcVar12)();
  }
  else if (local_2100 != (long *)0x0) {
    pcVar12 = *(code **)(*local_2100 + 0x28);
    goto LAB_7101bd3ea0;
  }
  if (alStack_2150 == local_2130) {
    pcVar12 = *(code **)(*local_2130 + 0x20);
LAB_7101bd3ed0:
    (*pcVar12)();
  }
  else if (local_2130 != (long *)0x0) {
    pcVar12 = *(code **)(*local_2130 + 0x28);
    goto LAB_7101bd3ed0;
  }
  if (alStack_2180 == local_2160) {
    pcVar12 = *(code **)(*local_2160 + 0x20);
LAB_7101bd3f00:
    (*pcVar12)();
  }
  else if (local_2160 != (long *)0x0) {
    pcVar12 = *(code **)(*local_2160 + 0x28);
    goto LAB_7101bd3f00;
  }
  if ((long *)(local_21b4 + 4) == local_2190) {
    pcVar12 = *(code **)(*local_2190 + 0x20);
LAB_7101bd3f30:
    (*pcVar12)();
  }
  else if (local_2190 != (long *)0x0) {
    pcVar12 = *(code **)(*local_2190 + 0x28);
    goto LAB_7101bd3f30;
  }
  if (alStack_21e0 == local_21c0) {
    pcVar12 = *(code **)(*local_21c0 + 0x20);
LAB_7101bd3f60:
    (*pcVar12)();
  }
  else if (local_21c0 != (long *)0x0) {
    pcVar12 = *(code **)(*local_21c0 + 0x28);
    goto LAB_7101bd3f60;
  }
  uStack_21f8 = 0;
  uStack_21f6 = 0;
  uStack_21f5 = 0;
  local_21f4[0] = 0;
  local_21f4[1] = 0;
  local_21f4[2] = 0xf0;
  local_21f4[3] = 0x41;
  ppppbVar8 = (byte ****)&local_2210;
  local_2210 = (undefined **)0x0;
  local_2208 = 1;
  uStack_2207 = 1;
  uStack_2205 = 0;
  uStack_2204 = 0;
  uStack_2202 = 0;
  uStack_2200 = 1;
  uStack_21fc = 1;
  uStack_21fb = 0;
  uStack_21fa = 1;
  local_21f4[4] = 0;
  local_21f4[5] = 0;
  uStack_21ee = 0;
  local_21c0 = (long *)0x0;
  local_2190 = (long *)0x0;
  local_2160 = (long *)0x0;
  local_2130 = (long *)0x0;
  local_2100 = (long *)0x0;
  local_20f0 = 0;
  uStack_2206 = 1;
  FUN_7103770b30((long *)(param_1 + 0x32),pppplVar22,(long ****)"selector_2",ppppbVar8,
                 (long ****)pppppppplVar10,param_6,param_7,param_8);
  FUN_71037717d0(param_1 + 0x32,0,"set_parts_room_info",ppppbVar8,(long ****)pppppppplVar10,param_6,
                 param_7,param_8);
  uVar7 = 6;
  uVar9 = 0;
  FUN_7103771930((long)param_1[0x32],0,(long ****)0x6,(byte ****)0x0,(long ****)pppppppplVar10,
                 param_6,param_7,param_8);
  FUN_710376b960((long)param_1[0x32]);
  (*(code *)(*param_1[0x32])[0xc])(param_1[0x32],0);
  if (alStack_2120 == local_2100) {
    pcVar12 = *(code **)(*local_2100 + 0x20);
LAB_7101bd4038:
    (*pcVar12)();
  }
  else if (local_2100 != (long *)0x0) {
    pcVar12 = *(code **)(*local_2100 + 0x28);
    goto LAB_7101bd4038;
  }
  if (alStack_2150 == local_2130) {
    pcVar12 = *(code **)(*local_2130 + 0x20);
LAB_7101bd4068:
    (*pcVar12)();
  }
  else if (local_2130 != (long *)0x0) {
    pcVar12 = *(code **)(*local_2130 + 0x28);
    goto LAB_7101bd4068;
  }
  if (alStack_2180 == local_2160) {
    pcVar12 = *(code **)(*local_2160 + 0x20);
LAB_7101bd4098:
    (*pcVar12)();
  }
  else if (local_2160 != (long *)0x0) {
    pcVar12 = *(code **)(*local_2160 + 0x28);
    goto LAB_7101bd4098;
  }
  if ((long *)(local_21b4 + 4) == local_2190) {
    pcVar12 = *(code **)(*local_2190 + 0x20);
LAB_7101bd40c8:
    (*pcVar12)();
  }
  else if (local_2190 != (long *)0x0) {
    pcVar12 = *(code **)(*local_2190 + 0x28);
    goto LAB_7101bd40c8;
  }
  if (alStack_21e0 == local_21c0) {
    pcVar12 = *(code **)(*local_21c0 + 0x20);
LAB_7101bd40f8:
    (*pcVar12)();
  }
  else if (local_21c0 != (long *)0x0) {
    pcVar12 = *(code **)(*local_21c0 + 0x28);
    goto LAB_7101bd40f8;
  }
  FUN_7103776640(&local_2210,(long)pppplVar22,(byte ****)"set_parts_profileicon_00",uVar7,uVar9,
                 (long ****)pppppppplVar10,param_6,param_7,param_8);
  uVar19 = CONCAT26(uStack_2202,
                    CONCAT24(uStack_2204,
                             CONCAT13(uStack_2205,
                                      CONCAT12(uStack_2206,CONCAT11(uStack_2207,local_2208)))));
  if (*(long *)(uVar19 + 8) != 0) {
    FUN_7103776910(&local_2260,(long)&local_2210,(long ****)"set_icn_profile_bg",uVar7,uVar9,
                   (long ****)pppppppplVar10,param_6,param_7,param_8);
    pppppppplVar1 = local_2258;
    uVar5 = FUN_7103779cc0((long)local_2258);
    *(uint *)(param_1 + 0x39) = uVar5;
    local_2260 = &PTR_FUN_710523d9a8;
    local_2258 = (long ********)0x0;
    if (pppppppplVar1 != (long ********)0x0) {
      FUN_710392eb40((ulong)pppppppplVar1);
    }
  }
  local_2210 = &PTR_FUN_710523d988;
  local_2208 = 0;
  uStack_2207 = 0;
  uStack_2206 = 0;
  uStack_2205 = 0;
  uStack_2204 = 0;
  uStack_2202 = 0;
  if (uVar19 != 0) {
    uVar24 = *(ulong *)(uVar19 + 0x18);
    *(undefined ***)(uVar19 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar19 + 0x18) = 0;
    if (uVar24 != 0) {
      FUN_710392eb40(uVar24);
    }
    FUN_710392eb40(uVar19);
  }
  pppplVar6 = (long ****)(ulong)*(ushort *)(param_1 + 0x36);
  uVar7 = 0;
  FUN_7101bd43a0(param_1,(long *)(param_1 + 0x33),pppplVar6,(byte ****)0x0,(long ****)pppppppplVar10
                 ,param_6,param_7,param_8);
  FUN_7103776640(&local_2260,(long)pppplVar22,(byte ****)"set_parts_load",pppplVar6,uVar7,
                 (long ****)pppppppplVar10,param_6,param_7,param_8);
  pppppppplVar1 = local_2258;
  FUN_7103778300(0x3f800000,(long)local_2258,0x710441139d);
  FUN_7103778300(0x3f800000,(long)pppppppplVar1,0x710429257e);
  *(undefined4 *)((long)param_1 + 0x1b4) = 1;
  *(undefined4 *)((long)param_1 + 0x1c4) = 0;
  (*(code *)(*param_1)[2])(param_1);
  ppppppplVar23 = param_1[2];
  ppppppplVar17 = param_1[3];
  if (ppppppplVar17 == ppppppplVar23) goto LAB_7101bd4394;
  if ((***ppppppplVar23)[2][1] != (long **)0x0) {
    FUN_71037780e0(&local_2210,(long)(***ppppppplVar23 + 1),(long ****)"dev_wave_loop",pppplVar6,
                   uVar7,(long ****)pppppppplVar10,param_6,param_7,param_8);
    plVar3 = (long *)CONCAT26(uStack_2202,
                              CONCAT24(uStack_2204,
                                       CONCAT13(uStack_2205,
                                                CONCAT12(uStack_2206,
                                                         CONCAT11(uStack_2207,local_2208)))));
    if (*plVar3 == 0) {
      local_2210 = &PTR_FUN_710523d9e8;
      local_2208 = 0;
      uStack_2207 = 0;
      uStack_2206 = 0;
      uStack_2205 = 0;
      uStack_2204 = 0;
      uStack_2202 = 0;
      if (plVar3 != (long *)0x0) goto LAB_7101bd4264;
    }
    else {
      if (plVar3[1] != 0) {
        FUN_710377aee0(0x3f800000,(long)&local_2210);
      }
LAB_7101bd4264:
      uStack_2202 = 0;
      uStack_2204 = 0;
      uStack_2205 = 0;
      uStack_2206 = 0;
      uStack_2207 = 0;
      local_2208 = 0;
      local_2210 = &PTR_FUN_710523d9e8;
      FUN_710392eb40((ulong)plVar3);
    }
    ppppppplVar23 = param_1[2];
    ppppppplVar17 = param_1[3];
  }
  if (ppppppplVar17 == ppppppplVar23) {
LAB_7101bd4394:
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_out_of_range();
  }
  if ((***ppppppplVar23)[2][1] != (long **)0x0) {
    FUN_71037780e0(&local_2210,(long)(***ppppppplVar23 + 1),(long ****)"dev_count_0",pppplVar6,uVar7
                   ,(long ****)pppppppplVar10,param_6,param_7,param_8);
    plVar3 = (long *)CONCAT26(uStack_2202,
                              CONCAT24(uStack_2204,
                                       CONCAT13(uStack_2205,
                                                CONCAT12(uStack_2206,
                                                         CONCAT11(uStack_2207,local_2208)))));
    if (*plVar3 == 0) {
      local_2210 = &PTR_FUN_710523d9e8;
      local_2208 = 0;
      uStack_2207 = 0;
      uStack_2206 = 0;
      uStack_2205 = 0;
      uStack_2204 = 0;
      uStack_2202 = 0;
      if (plVar3 == (long *)0x0) goto LAB_7101bd42f0;
    }
    else if (plVar3[1] != 0) {
      FUN_710377aee0(0x3f800000,(long)&local_2210);
    }
    uStack_2202 = 0;
    uStack_2204 = 0;
    uStack_2205 = 0;
    uStack_2206 = 0;
    uStack_2207 = 0;
    local_2208 = 0;
    local_2210 = &PTR_FUN_710523d9e8;
    FUN_710392eb40((ulong)plVar3);
  }
LAB_7101bd42f0:
  if (param_2 == -1) {
    FUN_7103778300(0x3f800000,(long)pppplVar21[2],0x7104421055);
  }
  else {
    *(int *)(param_1 + 0x2c) = param_2;
    if (0x12 < *(uint *)((long)param_1 + 0x124)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(undefined4 *)((long)param_1 + (long)(int)*(uint *)((long)param_1 + 0x124) * 4 + 0xd8) = 3;
    FUN_7103778760((long)pppplVar21[2],0x7104421055);
  }
  if (pppppppplVar1 != (long ********)0x0) {
    local_2258 = (long ********)0x0;
    local_2260 = &PTR_FUN_710523d988;
    ppppppplVar23 = pppppppplVar1[3];
    pppppppplVar1[2] = (long *******)&PTR_FUN_710523d9a8;
    pppppppplVar1[3] = (long *******)0x0;
    if (ppppppplVar23 != (long *******)0x0) {
      FUN_710392eb40((ulong)ppppppplVar23);
    }
    FUN_710392eb40((ulong)pppppppplVar1);
  }
  return;
}

