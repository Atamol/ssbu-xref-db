// addr:      7101e21d30
// offset:    0x1e21d30
// name:      FUN_7101e21d30
// mangled:   
// signature: undefined __cdecl FUN_7101e21d30(long param_1, int param_2, undefined * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7101e21d30(long param_1,int param_2,undefined **param_3,byte ****param_4,long ****param_5,
                   undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long *plVar1;
  long *****ppppplVar2;
  undefined4 *puVar3;
  long ****pppplVar4;
  undefined1 uVar5;
  ushort uVar6;
  ushort uVar7;
  short sVar8;
  short *psVar9;
  ulong uVar10;
  ulong uVar11;
  long ****pppplVar12;
  int iVar13;
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
  undefined8 uVar14;
  char *pcVar15;
  byte ****ppppbVar16;
  long ****pppplVar17;
  undefined4 uVar18;
  undefined2 *puVar19;
  code *pcVar20;
  long ***ppplVar21;
  byte ***pppbVar22;
  undefined2 *puVar23;
  long lVar24;
  long lVar25;
  undefined8 *puVar26;
  uint uVar27;
  int iVar28;
  byte *pbVar29;
  long lVar30;
  long lVar31;
  ulong uVar32;
  undefined8 *puVar33;
  ushort uVar34;
  uint uVar35;
  ulong uVar36;
  ushort *puVar37;
  byte bVar38;
  char cVar39;
  short *psVar40;
  byte *pbVar41;
  uint uVar42;
  int iVar43;
  long lVar44;
  long ****pppplVar45;
  long ****pppplVar46;
  long *plVar47;
  long lVar48;
  ushort *puVar49;
  undefined1 auVar50 [16];
  long local_23f8;
  long local_23f0;
  long local_23e8;
  long local_23e0;
  undefined **local_23a0;
  ulong local_2398;
  undefined **local_2390;
  ulong local_2388;
  undefined8 local_2370;
  undefined8 local_2368;
  undefined8 local_2360;
  undefined2 local_2358;
  undefined8 local_2356;
  long alStack_2340 [4];
  long *local_2320;
  long alStack_2310 [4];
  long *local_22f0;
  long alStack_22e0 [4];
  long *local_22c0;
  long alStack_22b0 [4];
  long *local_2290;
  long alStack_2280 [4];
  long *local_2260;
  long ****local_2250;
  long ****local_2248;
  long ****local_2240;
  long ****local_2238;
  long ****local_2230;
  long ****local_2228;
  undefined8 local_2220;
  undefined1 local_2218;
  byte bStack_2217;
  undefined2 uStack_2216;
  undefined2 uStack_2214;
  undefined2 uStack_2212;
  undefined4 local_2210;
  undefined2 uStack_220c;
  undefined1 uStack_220a;
  undefined1 uStack_2209;
  undefined2 local_2208;
  undefined2 uStack_2206;
  undefined4 uStack_2204;
  undefined2 uStack_2200;
  undefined2 uStack_21fe;
  undefined2 uStack_21fc;
  ushort local_21fa;
  undefined1 local_21f8;
  long alStack_21f0 [4];
  long *local_21d0;
  undefined1 local_21c4 [8];
  byte local_21bc [28];
  long *local_21a0;
  long alStack_2190 [2];
  undefined8 local_217c;
  byte local_2174 [4];
  long *local_2170;
  long alStack_2160 [4];
  long *local_2140;
  undefined1 auStack_2134 [4];
  long alStack_2130 [4];
  long *local_2110;
  undefined4 local_2100;
  undefined1 uStack_1134;
  undefined4 local_1130;
  undefined1 local_112c;
  undefined8 local_1128;
  undefined1 uStack_1120;
  undefined4 local_10e0;
  undefined4 local_10dc;
  undefined4 local_10d8;
  undefined4 local_10d4;
  undefined1 uStack_10d0;
  undefined1 auStack_1090 [4096];
  undefined **local_90;
  ulong local_88;
  
  uVar18 = *(undefined4 *)(param_1 + 0xbd0);
  *(int *)(param_1 + 0xbd0) = param_2;
  *(undefined4 *)(param_1 + 0xbd4) = uVar18;
  if (*(char *)(param_1 + 0xf04) != '\0') {
    *(undefined1 *)(param_1 + 0xf04) = 0;
    return;
  }
  (**(code **)(**(long **)(param_1 + 0xb38) + 0x60))(*(long **)(param_1 + 0xb38),param_2 == 3);
  switch(*(undefined4 *)(param_1 + 0xbd0)) {
  case 2:
    (**(code **)(**(long **)(param_1 + 0x528) + 0x70))(*(long **)(param_1 + 0x528),1);
    (**(code **)(**(long **)(param_1 + 0x528) + 0x60))(*(long **)(param_1 + 0x528),1);
    FUN_7103776640(&local_2220,param_1 + 0xba0,(byte ****)"set_parts_btn_recommend",param_3,param_4,
                   param_5,param_6,param_7,param_8);
    uVar36 = CONCAT26(uStack_2212,
                      CONCAT24(uStack_2214,CONCAT22(uStack_2216,CONCAT11(bStack_2217,local_2218))));
    if ((*(long *)(uVar36 + 8) != 0) &&
       (lVar24 = *(long *)(*(long *)(uVar36 + 8) + 0x18), lVar24 != 0)) {
      *(byte *)(lVar24 + 0x58) = *(byte *)(lVar24 + 0x58) | 1;
    }
    local_2220 = &PTR_FUN_710523d988;
    local_2218 = 0;
    bStack_2217 = 0;
    uStack_2216 = 0;
    uStack_2214 = 0;
    uStack_2212 = 0;
    if (uVar36 != 0) {
      uVar11 = *(ulong *)(uVar36 + 0x18);
      *(undefined ***)(uVar36 + 0x10) = &PTR_FUN_710523d9a8;
      *(undefined8 *)(uVar36 + 0x18) = 0;
      if (uVar11 != 0) {
        FUN_710392eb40(uVar11);
      }
      FUN_710392eb40(uVar36);
    }
    lVar44 = *(long *)(*(long *)(DAT_710532f840 + 8) + 0xb8);
    lVar24 = *(long *)(lVar44 + 0x80);
    uVar42 = 0x811c9dc5;
    if (((*(char *)(lVar24 + 0x2250) == '\0') ||
        (((*(char *)(lVar24 + 0x2251) == '\0' && (*(char *)(lVar24 + 0x2252) == '\0')) &&
         (*(char *)(lVar24 + 0x2253) == '\0')))) &&
       ((*(char *)(lVar24 + 0x2257) == '\0' ||
        ((*(char *)(lVar24 + 0x2258) == '\0' && (*(char *)(lVar24 + 0x2259) == '\0')))))) {
      local_2220 = (undefined **)((ulong)local_2220 & 0xffffffff00000000);
      bStack_2217 = 1;
      uStack_2214 = 0;
      uStack_2212 = 0;
      local_2210 = 1;
      uStack_2204 = uStack_2204 & 0xffffff00;
      uStack_220c = 0;
      uStack_220a = 0;
      uStack_2209 = 0;
      local_2208 = 0;
      uStack_2206 = 0;
      local_21bc[0] = 0;
      local_21c4 = (undefined1  [8])0x0;
      local_2174[0] = 0;
      local_217c = 0;
      memset(auStack_2134,0,0x1000);
      uStack_1134 = 1;
      local_1130 = 0;
      local_112c = 1;
      uStack_1120 = 0;
      local_1128 = 0;
      local_10e0 = 0x20;
      memset(auStack_1090,0,0x1000);
      uVar36 = local_2356;
      local_2220 = (undefined **)CONCAT44(2,(uint)local_2220);
      local_2218 = 1;
      local_2360 = 0x69726970735f7265;
      local_2358 = 0x7374;
      local_2356 = local_2356 & 0xffffffffffffff00;
      pcVar15 = (char *)((long)&local_2368 + 1);
      do {
        cVar39 = *pcVar15;
        pcVar15 = pcVar15 + 1;
      } while (cVar39 != '\0');
      uVar11 = 0;
      bVar38 = 0x6d;
      do {
        local_21bc[uVar11] = bVar38;
        if (0x3e < (int)uVar11 + 1U) {
          uVar11 = (ulong)((int)uVar11 + 1);
          break;
        }
        bVar38 = *(byte *)((long)&local_2368 + uVar11 + 1);
        if (bVar38 == 0) {
          uVar11 = uVar11 + 1;
          break;
        }
        local_21bc[uVar11 + 1] = bVar38;
        bVar38 = *(byte *)((long)&local_2368 + uVar11 + 2);
        uVar11 = uVar11 + 2;
      } while (bVar38 != 0);
      local_21bc[uVar11 & 0xffffffff] = 0;
      local_21c4._4_4_ = (int)uVar11;
      uVar27 = (uint)local_21bc[0];
      local_21c4._0_4_ = uVar42;
      if (local_21bc[0] != 0) {
        pbVar41 = local_21bc;
        do {
          pbVar41 = pbVar41 + 1;
          local_21c4._0_4_ = local_21c4._0_4_ * 0x89 ^ uVar27;
          uVar27 = (uint)*pbVar41;
        } while (uVar27 != 0);
      }
      local_2360 = 0x757465735f737469;
      local_2358 = 0x5f70;
      local_2356._6_2_ = SUB82(uVar36,6);
      local_2356 = CONCAT26(local_2356._6_2_,0x656c746974);
      pcVar15 = (char *)((long)&local_2368 + 1);
      do {
        cVar39 = *pcVar15;
        pcVar15 = pcVar15 + 1;
      } while (cVar39 != '\0');
      uVar36 = 0;
      cVar39 = 'm';
      do {
        *(char *)((long)&uStack_2204 + uVar36) = cVar39;
        if (0x3e < (int)uVar36 + 1U) {
          uVar36 = (ulong)((int)uVar36 + 1);
          break;
        }
        cVar39 = *(char *)((long)&local_2368 + uVar36 + 1);
        if (cVar39 == '\0') {
          uVar36 = uVar36 + 1;
          break;
        }
        *(char *)((long)&uStack_2204 + uVar36 + 1) = cVar39;
        cVar39 = *(char *)((long)&local_2368 + uVar36 + 2);
        uVar36 = uVar36 + 2;
      } while (cVar39 != '\0');
      *(undefined1 *)((long)&uStack_2204 + (uVar36 & 0xffffffff)) = 0;
      local_2208 = (undefined2)uVar36;
      uStack_2206 = (undefined2)(uVar36 >> 0x10);
      uVar35 = uStack_2204 & 0xff;
      uVar27 = uVar42;
      if ((char)uStack_2204 != '\0') {
        pbVar41 = (byte *)((long)&uStack_2204 + 1);
        do {
          uVar27 = uVar27 * 0x89 ^ uVar35;
          uVar35 = (uint)*pbVar41;
          pbVar41 = pbVar41 + 1;
        } while (uVar35 != 0);
      }
      local_2368 = 0x646165685f756e6d;
      local_2360 = 0x69726970735f7265;
      local_2358 = 0x7374;
      uVar35 = 0x6d;
      uStack_220c = (undefined2)uVar27;
      uStack_220a = (undefined1)(uVar27 >> 0x10);
      uStack_2209 = (undefined1)(uVar27 >> 0x18);
      local_2356 = 0x6c6c616365725f;
      pbVar41 = (byte *)((long)&local_2368 + 1);
      uVar27 = uVar42;
      do {
        uVar27 = uVar27 * 0x89 ^ uVar35;
        uVar35 = (uint)*pbVar41;
        pbVar41 = pbVar41 + 1;
      } while (uVar35 != 0);
      uVar36 = 0;
      local_2370 = (undefined **)CONCAT44(0x19,uVar27);
      bVar38 = 0x6d;
      do {
        local_2174[uVar36] = bVar38;
        if (0x3e < (int)uVar36 + 1U) {
          uVar36 = (ulong)((int)uVar36 + 1);
          break;
        }
        bVar38 = *(byte *)((long)&local_2368 + uVar36 + 1);
        if (bVar38 == 0) {
          uVar36 = uVar36 + 1;
          break;
        }
        local_2174[uVar36 + 1] = bVar38;
        bVar38 = *(byte *)((long)&local_2368 + uVar36 + 2);
        uVar36 = uVar36 + 2;
      } while (bVar38 != 0);
      local_2174[uVar36 & 0xffffffff] = 0;
      local_217c = CONCAT44((int)uVar36,(undefined4)local_217c);
      uVar35 = (uint)local_2174[0];
      uVar27 = uVar42;
      if (local_2174[0] != 0) {
        pbVar41 = local_2174;
        do {
          pbVar41 = pbVar41 + 1;
          uVar27 = uVar27 * 0x89 ^ uVar35;
          uVar35 = (uint)*pbVar41;
        } while (uVar35 != 0);
      }
      local_1130 = 7;
      param_3 = (undefined **)0x1;
      param_4 = (byte ****)0x1;
      local_217c = CONCAT44((int)uVar36,uVar27);
      local_10dc = 1;
      uStack_10d0 = 0;
      local_10d4 = 0;
      local_10d8 = 0x811c9dc5;
      local_112c = 1;
      FUN_7101af8570(lVar44,(int *)&local_2220,1,1,param_5,param_6,param_7,param_8);
      lVar24 = *(long *)(lVar44 + 0x80);
      if (*(int *)(lVar24 + 0xc4) != 2) {
        *(undefined4 *)(lVar24 + 0xc4) = 2;
        FUN_7101af5f00(lVar24,2,param_3,param_4,param_5,param_6,param_7,param_8);
      }
    }
    if (0 < *(int *)(param_1 + 0xc04)) {
      uVar27 = 0;
      do {
        uVar36 = FUN_7101e1f1b0(param_1,uVar27,param_3,param_4,param_5,param_6,param_7,param_8);
        if ((uVar36 & 1) == 0) {
          lVar24 = *(long *)(lVar44 + 0x80);
          param_3 = (undefined **)&DAT_00001000;
          *(undefined1 *)(lVar24 + 0x1210) = 0;
          *(undefined8 *)(lVar24 + 0x1208) = 0;
          memset((void *)(lVar24 + 0x1250),0,0x1000);
          local_2218 = 0;
          local_2220 = (undefined **)0x0;
          goto LAB_7101e2377c;
        }
        uVar27 = uVar27 + 1;
      } while ((int)uVar27 < *(int *)(param_1 + 0xc04));
    }
    local_2220 = (undefined **)0x2000000000;
    local_2218 = 0x6d;
    bStack_2217 = 0x6e;
    uStack_2216 = 0x5f75;
    uStack_2214 = 0x7073;
    uStack_2212 = 0x7269;
    local_2208 = 0x6c6c;
    local_2210 = 0x5f737469;
    uStack_220c = 0x6572;
    uStack_220a = 99;
    uStack_2209 = 0x61;
    uStack_2206 = 0x685f;
    uStack_2204 = 0x5f706c65;
    uStack_2200 = 0x6570;
    uStack_21fe = 0x6564;
    uStack_21fc = 0x7473;
    local_21fa = 0x6c61;
    uVar27 = 0x6d;
    lVar24 = 9;
    local_21f8 = 0;
    do {
      uVar42 = uVar42 * 0x89 ^ uVar27;
      uVar27 = (uint)*(byte *)((long)&local_2220 + lVar24);
      lVar24 = lVar24 + 1;
    } while (uVar27 != 0);
LAB_7101e2377c:
    local_2220 = (undefined **)CONCAT44(local_2220._4_4_,uVar42);
    FUN_7101af53d0(*(long *)(lVar44 + 0x80),(uint *)&local_2220,param_3,param_4,param_5,param_6,
                   param_7,param_8);
    *(undefined2 *)(param_1 + 0xbec) = 0;
    break;
  case 3:
    if (*(int *)(param_1 + 0xbf4) < *(int *)(param_1 + 0xc04)) {
      if (*(int *)(param_1 + 0xbf4) < 0) {
        *(undefined4 *)(param_1 + 0xbf4) = 0;
        goto LAB_7101e23170;
      }
    }
    else {
      *(int *)(param_1 + 0xbf4) = *(int *)(param_1 + 0xc04) + -1;
LAB_7101e23170:
      *(undefined4 *)(param_1 + 0xdb8) = 0;
      FUN_7101e24380(param_1,0,0,param_4,param_5,param_6,param_7,param_8);
    }
    local_2220 = (undefined **)0x0;
    local_2218 = 1;
    bStack_2217 = 1;
    uStack_2216 = 0;
    uStack_2214 = 0;
    local_2210 = 1;
    uStack_220c = 1;
    uStack_220a = 1;
    uStack_2212 = 0;
    local_2208 = 0;
    uStack_2206 = 0;
    uStack_2204 = 0x41f00000;
    uStack_2200 = 0;
    uStack_21fe = 0;
    local_21d0 = (long *)0x0;
    local_21a0 = (long *)0x0;
    local_2170 = (long *)0x0;
    local_2140 = (long *)0x0;
    local_2110 = (long *)0x0;
    local_2100 = 0;
    FUN_710337df20((long)&local_2220);
    puVar26 = (undefined8 *)(param_1 + 0xba0);
    FUN_7103770b30((long *)(param_1 + 0x530),puVar26,(long ****)"selector_2",(byte ****)&local_2220,
                   param_5,param_6,param_7,param_8);
    FUN_710337df20((long)&local_2220);
    pcVar15 = "selector_3";
    ppppbVar16 = (byte ****)&local_2220;
    FUN_7103770b30((long *)(param_1 + 0x568),puVar26,(long ****)"selector_3",ppppbVar16,param_5,
                   param_6,param_7,param_8);
    local_2230 = (long ****)0x0;
    local_2228 = (long ****)0x0;
    local_2240 = (long ****)0x0;
    local_2238 = (long ****)0x0;
    local_2250 = (long ****)0x0;
    local_2248 = (long ****)0x0;
    iVar13 = *(int *)(*(long *)(param_1 + 0x178) + 0x2a4);
    if ((iVar13 < 0) ||
       ((ulong)(*(long *)(param_1 + 400) - *(long *)(param_1 + 0x188) >> 3) <= (ulong)(long)iVar13))
    {
LAB_7101e23270:
      lVar24 = 0;
    }
    else {
      uVar7 = *(ushort *)(*(long *)(*(long *)(param_1 + 0x188) + (long)iVar13 * 8) + 8);
      if ((long)(short)uVar7 == -1) goto LAB_7101e23270;
      if (1999 < uVar7) goto LAB_7101e24360;
      lVar24 = *(long *)(param_1 + 0x1020) + (long)(short)uVar7 * 0x60;
    }
    if (3 < *(uint *)(param_1 + 0xbf4)) {
LAB_7101e24360:
                    /* WARNING: Subroutine does not return */
      abort();
    }
    lVar24 = lVar24 + (long)(int)*(uint *)(param_1 + 0xbf4) * 4;
    uVar36 = (ulong)*(byte *)(lVar24 + 0x4b);
    cVar39 = '\x06';
    uVar14 = extraout_x1;
    switch(uVar36) {
    case 0:
      cVar39 = '\x03';
      break;
    case 1:
      cVar39 = '\x04';
      break;
    case 2:
      cVar39 = '\x05';
      break;
    case 3:
      break;
    default:
switchD_7101e232a4_caseD_4:
      cVar39 = '\x02';
      break;
    case 5:
      psVar40 = (short *)(lVar24 + 0x4c);
      sVar8 = *psVar40;
      if ((long)sVar8 == -1) goto switchD_7101e232a4_caseD_4;
      lVar48 = *(long *)(*(long *)(DAT_710532f730 + 8) + 0x1d8);
      lVar24 = lVar48 + (long)sVar8 * 2;
      lVar44 = *(long *)(lVar48 + 0x20);
      uVar36 = (*(long *)(lVar48 + 0x28) - lVar44 >> 6) * -0x3333333333333333;
      uVar7 = *(ushort *)(lVar24 + 0x60);
      if (((uint)uVar7 < (uint)uVar36) &&
         (*(char *)(lVar44 + (ulong)uVar7 * 0x140 + 0x5e) == '\x01')) {
        cVar39 = '\x02';
        lVar24 = 4;
      }
      else {
        uVar11 = (ulong)*(ushort *)(lVar24 + 0x60);
        puVar19 = (undefined2 *)(lVar44 + uVar11 * 0x140);
        if (uVar36 < uVar11 || uVar36 - uVar11 == 0) {
          puVar19 = &DAT_7105182b08;
        }
        cVar39 = *(char *)(puVar19 + 0x36);
        if (cVar39 == '\x01') {
          lVar24 = 0;
          cVar39 = '\x03';
        }
        else if (cVar39 == '\x02') {
          cVar39 = '\x05';
          lVar24 = 2;
        }
        else if (cVar39 == '\x03') {
          cVar39 = '\x04';
          lVar24 = 1;
        }
        else {
          cVar39 = '\x06';
          lVar24 = 3;
        }
      }
      lVar24 = param_1 + lVar24 * 0x18;
      if (*(short **)(lVar24 + 0xe78) != *(short **)(lVar24 + 0xe80)) {
        psVar9 = *(short **)(lVar24 + 0xe78);
        do {
          pppplVar17 = local_2238;
          if (sVar8 == *psVar9) {
            if (local_2230 == local_2228) {
              pppplVar45 = (long ****)((long)local_2230 - (long)local_2238);
              uVar36 = ((long)pppplVar45 >> 2) + 1;
              if (uVar36 >> 0x3e != 0) {
                    /* WARNING: Subroutine does not return */
                std::__vector_base_common<true>::__throw_length_error();
              }
              if ((ulong)((long)local_2228 - (long)local_2238 >> 2) < 0x1fffffffffffffff) {
                uVar11 = (long)local_2228 - (long)local_2238 >> 1;
                if (uVar36 <= uVar11) {
                  uVar36 = uVar11;
                }
                if (uVar36 != 0) {
                  if (uVar36 >> 0x3e == 0) goto LAB_7101e240cc;
                  goto LAB_7101e24360;
                }
LAB_7101e2412c:
                pppplVar12 = (long ****)0x0;
              }
              else {
                uVar36 = 0x3fffffffffffffff;
LAB_7101e240cc:
                pppbVar22 = (byte ***)(uVar36 * 4);
                if (pppbVar22 == (byte ***)0x0) {
                  pppbVar22 = (byte ***)0x1;
                }
                pppplVar12 = (long ****)
                             FUN_710392e290(0x10,pppbVar22,(long ****)pcVar15,ppppbVar16,param_5,
                                            param_6,param_7,param_8);
                uVar14 = extraout_x1_03;
                if (pppplVar12 == (long ****)0x0) {
                  if (DAT_7105332f00 != (long *)0x0) {
                    local_2390 = (undefined **)((ulong)local_2390 & 0xffffffff00000000);
                    pcVar15 = (char *)&local_2370;
                    local_2370 = (undefined **)pppbVar22;
                    auVar50 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_2390);
                    uVar14 = auVar50._8_8_;
                    if (((auVar50._0_8_ & 1) != 0) &&
                       (pppplVar12 = (long ****)
                                     FUN_710392e290(0x10,pppbVar22,(long ****)pcVar15,ppppbVar16,
                                                    param_5,param_6,param_7,param_8),
                       uVar14 = extraout_x1_04, pppplVar12 != (long ****)0x0)) goto LAB_7101e24130;
                  }
                  goto LAB_7101e2412c;
                }
              }
LAB_7101e24130:
              puVar3 = (undefined4 *)((long)pppplVar12 + ((long)pppplVar45 >> 2) * 4);
              pppplVar4 = (long ****)((long)pppplVar12 + uVar36 * 4);
              pppplVar46 = (long ****)(puVar3 + 1);
              *puVar3 = *(undefined4 *)psVar9;
              if (0 < (long)pppplVar45) {
                memcpy(pppplVar12,pppplVar17,(size_t)pppplVar45);
                uVar14 = extraout_x1_05;
                pcVar15 = (char *)pppplVar45;
              }
              local_2238 = pppplVar12;
              local_2230 = pppplVar46;
              local_2228 = pppplVar4;
              if (pppplVar17 != (long ****)0x0) {
                FUN_710392eb40((ulong)pppplVar17);
                uVar14 = extraout_x1_06;
              }
            }
            else {
              *(undefined4 *)local_2230 = *(undefined4 *)psVar9;
              local_2230 = (long ****)((long)local_2230 + 4);
            }
          }
          if (psVar9 + 2 == *(short **)(lVar24 + 0xe80)) break;
          sVar8 = *psVar40;
          psVar9 = psVar9 + 2;
        } while( true );
      }
      if (*(char *)(param_1 + 0xe70) == cVar39) {
        lVar24 = 0;
      }
      else if (*(char *)(param_1 + 0xe71) == cVar39) {
        lVar24 = 1;
      }
      else if (*(char *)(param_1 + 0xe72) == cVar39) {
        lVar24 = 2;
      }
      else if (*(char *)(param_1 + 0xe73) == cVar39) {
        lVar24 = 3;
      }
      else {
        lVar24 = 4;
        if (*(char *)(param_1 + 0xe74) != cVar39) {
          lVar24 = 5;
        }
      }
      lVar24 = param_1 + lVar24 * 0x18;
      plVar47 = *(long **)(lVar24 + 0xdf8);
      if (plVar47 != *(long **)(lVar24 + 0xe00)) {
        do {
          pppplVar17 = local_2250;
          ppplVar21 = (long ***)*plVar47;
          if (*psVar40 == *(short *)(ppplVar21 + 1)) {
            if (local_2248 == local_2240) {
              pppplVar45 = (long ****)((long)local_2248 - (long)local_2250);
              uVar36 = ((long)pppplVar45 >> 3) + 1;
              if (uVar36 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
                std::__vector_base_common<true>::__throw_length_error();
              }
              if ((ulong)((long)local_2240 - (long)local_2250 >> 3) < 0xfffffffffffffff) {
                uVar11 = (long)local_2240 - (long)local_2250 >> 2;
                if (uVar36 <= uVar11) {
                  uVar36 = uVar11;
                }
                if (uVar36 != 0) {
                  if (uVar36 >> 0x3d == 0) goto LAB_7101e24288;
                  goto LAB_7101e24360;
                }
                pppplVar12 = (long ****)0x0;
              }
              else {
                uVar36 = 0x1fffffffffffffff;
LAB_7101e24288:
                pppbVar22 = (byte ***)(uVar36 * 8);
                if (pppbVar22 == (byte ***)0x0) {
                  pppbVar22 = (byte ***)0x1;
                }
                pppplVar12 = (long ****)
                             FUN_710392e290(0x10,pppbVar22,(long ****)pcVar15,ppppbVar16,param_5,
                                            param_6,param_7,param_8);
                uVar14 = extraout_x1_07;
                if (pppplVar12 == (long ****)0x0) {
                  if (DAT_7105332f00 != (long *)0x0) {
                    local_2390 = (undefined **)((ulong)local_2390 & 0xffffffff00000000);
                    pcVar15 = (char *)&local_2370;
                    local_2370 = (undefined **)pppbVar22;
                    auVar50 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_2390);
                    uVar14 = auVar50._8_8_;
                    if (((auVar50._0_8_ & 1) != 0) &&
                       (pppplVar12 = (long ****)
                                     FUN_710392e290(0x10,pppbVar22,(long ****)pcVar15,ppppbVar16,
                                                    param_5,param_6,param_7,param_8),
                       uVar14 = extraout_x1_08, pppplVar12 != (long ****)0x0)) goto LAB_7101e242ec;
                  }
                  pppplVar12 = (long ****)0x0;
                }
LAB_7101e242ec:
                ppplVar21 = (long ***)*plVar47;
              }
              pppplVar4 = pppplVar12 + ((long)pppplVar45 >> 3);
              *pppplVar4 = ppplVar21;
              if (0 < (long)pppplVar45) {
                memcpy(pppplVar12,pppplVar17,(size_t)pppplVar45);
                uVar14 = extraout_x1_09;
                pcVar15 = (char *)pppplVar45;
              }
              local_2250 = pppplVar12;
              local_2248 = pppplVar4 + 1;
              local_2240 = pppplVar12 + uVar36;
              if (pppplVar17 != (long ****)0x0) {
                FUN_710392eb40((ulong)pppplVar17);
                uVar14 = extraout_x1_10;
              }
            }
            else {
              *local_2248 = ppplVar21;
              local_2248 = local_2248 + 1;
            }
          }
          plVar47 = plVar47 + 1;
        } while (plVar47 != *(long **)(lVar24 + 0xe00));
      }
      *(undefined1 *)(param_1 + 0xf03) = 0;
      goto LAB_7101e237d4;
    }
    ppppplVar2 = (long *****)(param_1 + uVar36 * 0x18 + 0xe78);
    if (&local_2238 != ppppplVar2) {
      pcVar15 = *(char **)(param_1 + uVar36 * 0x18 + 0xe80);
      FUN_7101ddb3c0(&local_2238,*ppppplVar2,(long ****)pcVar15,ppppbVar16,param_5,param_6,param_7,
                     param_8);
      uVar14 = extraout_x1_00;
    }
    if (*(char *)(param_1 + 0xe70) == cVar39) {
      lVar24 = 0;
    }
    else if (*(char *)(param_1 + 0xe71) == cVar39) {
      lVar24 = 1;
    }
    else if (*(char *)(param_1 + 0xe72) == cVar39) {
      lVar24 = 2;
    }
    else if (*(char *)(param_1 + 0xe73) == cVar39) {
      lVar24 = 3;
    }
    else {
      lVar24 = 4;
      if (*(char *)(param_1 + 0xe74) != cVar39) {
        lVar24 = 5;
      }
    }
    ppppplVar2 = (long *****)(param_1 + lVar24 * 0x18 + 0xdf8);
    if (&local_2250 != ppppplVar2) {
      pcVar15 = *(char **)(param_1 + lVar24 * 0x18 + 0xe00);
      FUN_7101958040(&local_2250,*ppppplVar2,(long ****)pcVar15,ppppbVar16,param_5,param_6,param_7,
                     param_8);
      uVar14 = extraout_x1_01;
    }
LAB_7101e237d4:
    *(undefined4 *)(param_1 + 0xb7c) = 0;
    *(undefined4 *)(param_1 + 0xb84) = 0;
    FUN_7101e2b890(param_1,uVar14,pcVar15,ppppbVar16,param_5,param_6,param_7,param_8);
    local_2370 = (undefined **)0x0;
    local_2368 = 0x4248000041800000;
    local_2360 = 0x101013f800000;
    local_2358 = 0;
    local_2320 = (long *)0x0;
    local_22f0 = (long *)0x0;
    local_22c0 = (long *)0x0;
    local_2290 = (long *)0x0;
    local_2260 = (long *)0x0;
    local_2356 = 1;
    if (local_2230 == local_2238) {
      *(undefined1 *)(param_1 + 0xbec) = 1;
    }
    else {
      if ((ulong)(*(long *)(param_1 + 0xb68) - *(long *)(param_1 + 0xb60)) <=
          (ulong)*(uint *)(param_1 + 0xb7c)) {
                    /* WARNING: Subroutine does not return */
        std::__vector_base_common<true>::__throw_out_of_range();
      }
      uVar5 = *(undefined1 *)(*(long *)(param_1 + 0xb60) + (ulong)*(uint *)(param_1 + 0xb7c));
      ppppplVar2 = (long *****)(param_1 + 0x548);
      if (ppppplVar2 != &local_2238) {
        FUN_7101ddb3c0(ppppplVar2,local_2238,local_2230,ppppbVar16,param_5,param_6,param_7,param_8);
      }
      param_5 = (long ****)(param_1 + 0x540);
      *(undefined1 *)(param_1 + 0x560) = uVar5;
      FUN_7102528ea0(ppppplVar2,uVar5);
      *(undefined1 *)(param_1 + 0x560) = uVar5;
      *(undefined1 *)(param_1 + 0xbec) = 0;
      FUN_710337e790((long)&local_2370);
      local_2360 = CONCAT44(1,(undefined4)local_2360);
      ppppbVar16 = (byte ****)&local_2370;
      local_2356._0_6_ = CONCAT42(0x101,(undefined2)local_2356);
      local_2370 = (undefined **)
                   CONCAT44((int)((ulong)((long)local_2230 - (long)local_2238) >> 2),
                            (undefined4)local_2370);
      FUN_7103781a20((long *)(param_1 + 0x538),puVar26,(byte ****)"scroll_0",ppppbVar16,param_5,
                     param_6,param_7,param_8);
    }
    FUN_7103778300(0x3f800000,*(long *)(param_1 + 0xba8),0x7104401a6f);
    FUN_7103776640(&local_2390,(long)puVar26,(byte ****)"set_parts_list_%02d",
                   (ulong)*(uint *)(param_1 + 0xbf4),ppppbVar16,param_5,param_6,param_7,param_8);
    uVar36 = local_2388;
    FUN_7103778300(0x3f800000,local_2388,0x7104401a6f);
    pppplVar17 = (long ****)(long)*(int *)(param_1 + 0xbf4);
    if (0 < *(int *)(param_1 + (long)pppplVar17 * 4 + 0xc08)) {
      uVar11 = 0;
      do {
        FUN_7103776640(&local_90,(long)&local_2390,(byte ****)"set_parts_base_%02d",
                       uVar11 & 0xffffffff,ppppbVar16,pppplVar17,param_6,param_7,param_8);
        uVar10 = local_88;
        if (uVar11 == *(uint *)(param_1 + 0xbf8)) {
          FUN_7103778300(0x3f800000,local_88,0x710438d054);
          pcVar15 = "cursor_pre_add";
LAB_7101e23a04:
          FUN_7103778300(0x3f800000,uVar10,(long)pcVar15);
        }
        else {
          lVar24 = param_1 + (long)*(int *)(param_1 + 0xbf4) * 0x40 + uVar11 * 2;
          pcVar15 = "in_tab_menu";
          if ((*(short *)(lVar24 + 0xf18) != -1) || (*(short *)(lVar24 + 0xf2a) != -1))
          goto LAB_7101e23a04;
        }
        local_88 = 0;
        local_90 = &PTR_FUN_710523d988;
        if (uVar10 != 0) {
          local_88 = 0;
          local_90 = &PTR_FUN_710523d988;
          uVar32 = *(ulong *)(uVar10 + 0x18);
          *(undefined ***)(uVar10 + 0x10) = &PTR_FUN_710523d9a8;
          *(undefined8 *)(uVar10 + 0x18) = 0;
          if (uVar32 != 0) {
            FUN_710392eb40(uVar32);
          }
          FUN_710392eb40(uVar10);
        }
        pppplVar17 = (long ****)(long)*(int *)(param_1 + 0xbf4);
        uVar11 = uVar11 + 1;
      } while ((long)uVar11 < (long)*(int *)(param_1 + (long)pppplVar17 * 4 + 0xc08));
    }
    local_2390 = &PTR_FUN_710523d988;
    local_2388 = 0;
    if (uVar36 != 0) {
      uVar11 = *(ulong *)(uVar36 + 0x18);
      *(undefined ***)(uVar36 + 0x10) = &PTR_FUN_710523d9a8;
      *(undefined8 *)(uVar36 + 0x18) = 0;
      if (uVar11 != 0) {
        FUN_710392eb40(uVar11);
      }
      FUN_710392eb40(uVar36);
      pppplVar17 = (long ****)(ulong)*(uint *)(param_1 + 0xbf4);
    }
    uVar42 = *(int *)(param_1 + 0xc04) - 2;
    uVar36 = (ulong)uVar42;
    pcVar15 = "anim_edit_view_list_%02d_%02d";
    snprintf((char *)&local_2390,0x20,"anim_edit_view_list_%02d_%02d",uVar42,(int)pppplVar17);
    FUN_7103778300(0x3f800000,*(long *)(param_1 + 0xba8),(long)&local_2390);
    FUN_7103776640(&local_23a0,(long)puVar26,(byte ****)"set_btn_tab_00",pcVar15,uVar36,pppplVar17,
                   param_6,param_7,param_8);
    FUN_7103776910(&local_90,(long)&local_23a0,(long ****)"set_txt_num",pcVar15,uVar36,pppplVar17,
                   param_6,param_7,param_8);
    lVar24 = (long)local_2230 - (long)local_2238 >> 2;
    uVar14 = 1;
    FUN_710377a280((long)&local_90,(byte *)"mnu_spirits_select_switch_pedestal_n",1);
    uVar36 = local_88;
    local_90 = &PTR_FUN_710523d9a8;
    local_88 = 0;
    if (uVar36 != 0) {
      FUN_710392eb40(uVar36);
    }
    uVar36 = local_2398;
    local_23a0 = &PTR_FUN_710523d988;
    local_2398 = 0;
    if (uVar36 != 0) {
      uVar11 = *(ulong *)(uVar36 + 0x18);
      *(undefined ***)(uVar36 + 0x10) = &PTR_FUN_710523d9a8;
      *(undefined8 *)(uVar36 + 0x18) = 0;
      if (uVar11 != 0) {
        FUN_710392eb40(uVar11);
      }
      FUN_710392eb40(uVar36);
    }
    FUN_7103776640(&local_23a0,(long)puVar26,(byte ****)"set_btn_tab_01",uVar14,lVar24,pppplVar17,
                   param_6,param_7,param_8);
    FUN_7103776910(&local_90,(long)&local_23a0,(long ****)"set_txt_num",uVar14,lVar24,pppplVar17,
                   param_6,param_7,param_8);
    ppppbVar16 = (byte ****)((long)local_2248 - (long)local_2250 >> 3);
    uVar14 = 1;
    FUN_710377a280((long)&local_90,(byte *)"mnu_spirits_select_switch_spirit_n",1);
    uVar36 = local_88;
    local_90 = &PTR_FUN_710523d9a8;
    local_88 = 0;
    if (uVar36 != 0) {
      FUN_710392eb40(uVar36);
    }
    uVar36 = local_2398;
    local_23a0 = &PTR_FUN_710523d988;
    local_2398 = 0;
    if (uVar36 != 0) {
      uVar11 = *(ulong *)(uVar36 + 0x18);
      *(undefined ***)(uVar36 + 0x10) = &PTR_FUN_710523d9a8;
      *(undefined8 *)(uVar36 + 0x18) = 0;
      if (uVar11 != 0) {
        FUN_710392eb40(uVar11);
      }
      FUN_710392eb40(uVar36);
    }
    (**(code **)(**(long **)(param_1 + 0x528) + 0x70))(*(long **)(param_1 + 0x528),0);
    (**(code **)(**(long **)(param_1 + 0x528) + 0x60))(*(long **)(param_1 + 0x528),0);
    FUN_7101e26450(param_1,extraout_x1_02,uVar14,ppppbVar16,pppplVar17,param_6,param_7,param_8);
    if (local_2248 == local_2250) {
      *(undefined8 *)(param_1 + 0x768) = *(undefined8 *)(param_1 + 0x760);
      *(undefined1 *)(param_1 + 0xbed) = 1;
      pcVar15 = (char *)local_2248;
LAB_7101e23cd0:
      iVar13 = 1;
    }
    else {
      uVar18 = 6;
      if (cVar39 == '\x02') {
        uVar18 = 7;
      }
      *(undefined4 *)(param_1 + 0x82c) = uVar18;
      pppplVar45 = (long ****)(param_1 + 0x580);
      if ((long *****)(param_1 + 0x760) != &local_2250) {
        FUN_7101958040((long *****)(param_1 + 0x760),local_2250,local_2248,ppppbVar16,pppplVar17,
                       param_6,param_7,param_8);
      }
      *(undefined8 *)(param_1 + 0x778) = *(undefined8 *)(param_1 + 0x768);
      FUN_7101dfe6f0((long)pppplVar45,4);
      *(undefined4 *)(param_1 + 0x824) = 0xffffffff;
      *(undefined1 *)(param_1 + 0x820) = 0;
      memset((void *)(param_1 + 0x830),0,0x2fc);
      FUN_710337e790((long)&local_2370);
      local_2360 = CONCAT44(1,(undefined4)local_2360);
      pcVar15 = "scroll_1";
      ppppbVar16 = (byte ****)&local_2370;
      local_2356._0_6_ = CONCAT42(0x101,(undefined2)local_2356);
      local_2370 = (undefined **)
                   CONCAT44((int)((ulong)((long)local_2248 - (long)local_2250) >> 3),
                            (undefined4)local_2370);
      pppplVar17 = pppplVar45;
      FUN_7103781a20((long *)(param_1 + 0x570),puVar26,(byte ****)"scroll_1",ppppbVar16,pppplVar45,
                     param_6,param_7,param_8);
      FUN_7101e02dc0((long)pppplVar45,0,pcVar15,ppppbVar16,pppplVar17,param_6,param_7,param_8);
      if ((*(char *)(param_1 + 0xbed) != '\0') || (*(char *)(param_1 + 0xbec) == '\0'))
      goto LAB_7101e23cd0;
      iVar13 = 2;
    }
    FUN_7101e25080(param_1,iVar13,(long ****)pcVar15,ppppbVar16,pppplVar17,param_6,param_7,param_8);
    if (*(int *)(param_1 + 0xbd8) != 0) {
      *(undefined4 *)(param_1 + 0xbd8) = 0;
    }
    *(undefined4 *)(param_1 + 0xbd8) = 1;
    iVar13 = *(int *)(param_1 + 0xbdc);
    if (iVar13 == 1) {
      cVar39 = *(char *)(param_1 + 0xbec);
joined_r0x007101e23d14:
      if (cVar39 == '\0') goto LAB_7101e23d18;
    }
    else {
      if (iVar13 == 2) {
        cVar39 = *(char *)(param_1 + 0xbed);
        goto joined_r0x007101e23d14;
      }
LAB_7101e23d18:
      plVar47 = (long *)(param_1 + 0x530);
      if (iVar13 != 1) {
        plVar47 = (long *)(param_1 + 0x568);
      }
      puVar33 = (undefined8 *)(param_1 + 0x538);
      if (iVar13 != 1) {
        puVar33 = (undefined8 *)(param_1 + 0x570);
      }
      (**(code **)(*(long *)*plVar47 + 0x70))((long *)*plVar47,0);
      (**(code **)(*(long *)*plVar47 + 0x60))((long *)*plVar47,1);
      (**(code **)(*(long *)*puVar33 + 0x70))((long *)*puVar33,1);
      pcVar15 = (char *)0x0;
      FUN_7103771a80(plVar47,0x68,0);
    }
    FUN_7103776640(&local_90,(long)puVar26,(byte ****)"set_parts_btn_recommend",pcVar15,ppppbVar16,
                   pppplVar17,param_6,param_7,param_8);
    uVar36 = local_88;
    if ((*(long *)(local_88 + 8) != 0) &&
       (lVar24 = *(long *)(*(long *)(local_88 + 8) + 0x18), lVar24 != 0)) {
      *(byte *)(lVar24 + 0x58) = *(byte *)(lVar24 + 0x58) & 0xfe;
    }
    local_90 = &PTR_FUN_710523d988;
    local_88 = 0;
    if (uVar36 != 0) {
      uVar11 = *(ulong *)(uVar36 + 0x18);
      *(undefined ***)(uVar36 + 0x10) = &PTR_FUN_710523d9a8;
      *(undefined8 *)(uVar36 + 0x18) = 0;
      if (uVar11 != 0) {
        FUN_710392eb40(uVar11);
      }
      FUN_710392eb40(uVar36);
    }
    *(undefined4 *)(param_1 + 0xb30) = 0xffffffff;
    *(undefined4 *)(param_1 + 0xd2c) = 0;
    if (alStack_2280 == local_2260) {
      pcVar20 = *(code **)(*local_2260 + 0x20);
LAB_7101e23e04:
      (*pcVar20)();
    }
    else if (local_2260 != (long *)0x0) {
      pcVar20 = *(code **)(*local_2260 + 0x28);
      goto LAB_7101e23e04;
    }
    if (alStack_22b0 == local_2290) {
      pcVar20 = *(code **)(*local_2290 + 0x20);
LAB_7101e23e34:
      (*pcVar20)();
    }
    else if (local_2290 != (long *)0x0) {
      pcVar20 = *(code **)(*local_2290 + 0x28);
      goto LAB_7101e23e34;
    }
    if (alStack_22e0 == local_22c0) {
      pcVar20 = *(code **)(*local_22c0 + 0x20);
LAB_7101e23e64:
      (*pcVar20)();
    }
    else if (local_22c0 != (long *)0x0) {
      pcVar20 = *(code **)(*local_22c0 + 0x28);
      goto LAB_7101e23e64;
    }
    if (alStack_2310 == local_22f0) {
      pcVar20 = *(code **)(*local_22f0 + 0x20);
LAB_7101e23e94:
      (*pcVar20)();
    }
    else if (local_22f0 != (long *)0x0) {
      pcVar20 = *(code **)(*local_22f0 + 0x28);
      goto LAB_7101e23e94;
    }
    if (alStack_2340 == local_2320) {
      pcVar20 = *(code **)(*local_2320 + 0x20);
LAB_7101e23ec4:
      (*pcVar20)();
    }
    else if (local_2320 != (long *)0x0) {
      pcVar20 = *(code **)(*local_2320 + 0x28);
      goto LAB_7101e23ec4;
    }
    if (local_2250 != (long ****)0x0) {
      local_2248 = local_2250;
      FUN_710392eb40((ulong)local_2250);
    }
    if (local_2238 != (long ****)0x0) {
      local_2230 = local_2238;
      FUN_710392eb40((ulong)local_2238);
    }
    if (alStack_2130 == local_2110) {
      pcVar20 = *(code **)(*local_2110 + 0x20);
LAB_7101e23f14:
      (*pcVar20)();
    }
    else if (local_2110 != (long *)0x0) {
      pcVar20 = *(code **)(*local_2110 + 0x28);
      goto LAB_7101e23f14;
    }
    if (alStack_2160 == local_2140) {
      pcVar20 = *(code **)(*local_2140 + 0x20);
LAB_7101e23f44:
      (*pcVar20)();
    }
    else if (local_2140 != (long *)0x0) {
      pcVar20 = *(code **)(*local_2140 + 0x28);
      goto LAB_7101e23f44;
    }
    if (alStack_2190 == local_2170) {
      pcVar20 = *(code **)(*local_2170 + 0x20);
LAB_7101e23f74:
      (*pcVar20)();
    }
    else if (local_2170 != (long *)0x0) {
      pcVar20 = *(code **)(*local_2170 + 0x28);
      goto LAB_7101e23f74;
    }
    if ((long *)(local_21c4 + 4) == local_21a0) {
      pcVar20 = *(code **)(*local_21a0 + 0x20);
LAB_7101e23fa4:
      (*pcVar20)();
    }
    else if (local_21a0 != (long *)0x0) {
      pcVar20 = *(code **)(*local_21a0 + 0x28);
      goto LAB_7101e23fa4;
    }
    if (alStack_21f0 == local_21d0) {
      (**(code **)(*local_21d0 + 0x20))();
    }
    else if (local_21d0 != (long *)0x0) {
      (**(code **)(*local_21d0 + 0x28))();
    }
    break;
  case 4:
    *(undefined2 *)(param_1 + 0xbec) = 0;
    local_2218 = 0x6d;
    bStack_2217 = 0x6e;
    uStack_2216 = 0x5f75;
    uStack_2214 = 0x7073;
    uStack_2212 = 0x7269;
    local_2210 = 0x5f737469;
    uStack_220c = 0x6572;
    uStack_220a = 99;
    uStack_2209 = 0x61;
    local_2220 = (undefined **)0x2000000000;
    local_2208 = 0x6c6c;
    uVar42 = 0x811c9dc5;
    uVar27 = 0x6d;
    uStack_2206 = 0x685f;
    uStack_2204 = 0x5f706c65;
    uStack_2200 = 0x6573;
    uStack_21fe = 0x656c;
    uStack_21fc = 0x7463;
    local_21fa = 0x6465;
    lVar24 = 9;
    local_21f8 = 0;
    do {
      uVar42 = uVar42 * 0x89 ^ uVar27;
      uVar27 = (uint)*(byte *)((long)&local_2220 + lVar24);
      lVar24 = lVar24 + 1;
    } while (uVar27 != 0);
    local_2220 = (undefined **)CONCAT44(0x20,uVar42);
    FUN_7101af53d0(*(long *)(*(long *)(*(long *)(DAT_710532f840 + 8) + 0xb8) + 0x80),
                   (uint *)&local_2220,param_3,param_4,param_5,param_6,param_7,param_8);
    (**(code **)(**(long **)(param_1 + 0x528) + 0x70))(*(long **)(param_1 + 0x528),1);
    uVar14 = 1;
    FUN_7103771a80((long *)(param_1 + 0x528),4,1);
    FUN_7103776640(&local_2220,param_1 + 0xba0,(byte ****)"btn_01_cursor",uVar14,param_4,param_5,
                   param_6,param_7,param_8);
    uVar36 = CONCAT26(uStack_2212,
                      CONCAT24(uStack_2214,CONCAT22(uStack_2216,CONCAT11(bStack_2217,local_2218))));
    if ((*(long *)(uVar36 + 8) != 0) &&
       (lVar24 = *(long *)(*(long *)(uVar36 + 8) + 0x18), lVar24 != 0)) {
      *(byte *)(lVar24 + 0x58) = *(byte *)(lVar24 + 0x58) | 1;
    }
    local_2220 = &PTR_FUN_710523d988;
    local_2218 = 0;
    bStack_2217 = 0;
    uStack_2216 = 0;
    uStack_2214 = 0;
    uStack_2212 = 0;
    if (uVar36 != 0) {
      uVar11 = *(ulong *)(uVar36 + 0x18);
      *(undefined ***)(uVar36 + 0x10) = &PTR_FUN_710523d9a8;
      *(undefined8 *)(uVar36 + 0x18) = 0;
      if (uVar11 != 0) {
        FUN_710392eb40(uVar11);
      }
      FUN_710392eb40(uVar36);
    }
    break;
  case 5:
    if (*(int *)(param_1 + 0xdb8) != 1) {
      *(undefined4 *)(param_1 + 0xdb8) = 1;
      (**(code **)(**(long **)(param_1 + 0x528) + 0x70))(*(long **)(param_1 + 0x528),1);
      uVar14 = 1;
      FUN_7103771a80((long *)(param_1 + 0x528),4,1);
      FUN_7103776640(&local_2220,param_1 + 0xba0,(byte ****)"btn_01_cursor",uVar14,param_4,param_5,
                     param_6,param_7,param_8);
      uVar36 = CONCAT26(uStack_2212,
                        CONCAT24(uStack_2214,CONCAT22(uStack_2216,CONCAT11(bStack_2217,local_2218)))
                       );
      if ((*(long *)(uVar36 + 8) != 0) &&
         (lVar24 = *(long *)(*(long *)(uVar36 + 8) + 0x18), lVar24 != 0)) {
        *(byte *)(lVar24 + 0x58) = *(byte *)(lVar24 + 0x58) | 1;
      }
      local_2220 = &PTR_FUN_710523d988;
      local_2218 = 0;
      bStack_2217 = 0;
      uStack_2216 = 0;
      uStack_2214 = 0;
      uStack_2212 = 0;
      if (uVar36 != 0) {
        uVar11 = *(ulong *)(uVar36 + 0x18);
        *(undefined ***)(uVar36 + 0x10) = &PTR_FUN_710523d9a8;
        *(undefined8 *)(uVar36 + 0x18) = 0;
        if (uVar11 != 0) {
          FUN_710392eb40(uVar11);
        }
        FUN_710392eb40(uVar36);
      }
      *(undefined4 *)(param_1 + 0xbfc) = *(undefined4 *)(param_1 + 0xbf4);
      *(undefined4 *)(param_1 + 0xbf4) = *(undefined4 *)(param_1 + 0xc04);
      FUN_7101e24380(param_1,1,1,param_4,param_5,param_6,param_7,param_8);
    }
    *(undefined1 *)(param_1 + 0xf06) = 0;
    *(undefined8 *)(param_1 + 0xc18) = 0;
    *(undefined4 *)(param_1 + 0xc20) = 0;
    plVar47 = DAT_7105329f98;
    lVar24 = *DAT_7105329f98;
    iVar13 = *(int *)(*(long *)(param_1 + 0x178) + 0x2a4);
    if ((iVar13 < 0) ||
       ((ulong)(*(long *)(param_1 + 400) - *(long *)(param_1 + 0x188) >> 3) <= (ulong)(long)iVar13))
    {
LAB_7101e22538:
      local_23f8 = 0;
    }
    else {
      uVar7 = *(ushort *)(*(long *)(*(long *)(param_1 + 0x188) + (long)iVar13 * 8) + 8);
      if ((long)(short)uVar7 == -1) goto LAB_7101e22538;
      if (1999 < uVar7) goto LAB_7101e24360;
      local_23f8 = *(long *)(param_1 + 0x1020) + (long)(short)uVar7 * 0x60;
    }
    *(undefined8 *)(param_1 + 0xe80) = *(undefined8 *)(param_1 + 0xe78);
    *(undefined8 *)(param_1 + 0xe98) = *(undefined8 *)(param_1 + 0xe90);
    *(undefined8 *)(param_1 + 0xeb0) = *(undefined8 *)(param_1 + 0xea8);
    *(undefined8 *)(param_1 + 0xec8) = *(undefined8 *)(param_1 + 0xec0);
    *(undefined8 *)(param_1 + 0xee0) = *(undefined8 *)(param_1 + 0xed8);
    *(undefined1 *)(param_1 + 0xef0) = 0;
    lVar44 = *plVar47;
    FUN_7102528c30(*(byte **)(lVar44 + 0x30),(undefined8 *)(param_1 + 0xe78),(long ****)0x0,param_4,
                   param_5,param_6,param_7,param_8);
    FUN_7102528c30(*(byte **)(lVar44 + 0x30),(undefined8 *)(param_1 + 0xe90),(long ****)0x1,param_4,
                   param_5,param_6,param_7,param_8);
    FUN_7102528c30(*(byte **)(lVar44 + 0x30),(undefined8 *)(param_1 + 0xea8),(long ****)0x2,param_4,
                   param_5,param_6,param_7,param_8);
    FUN_7102528c30(*(byte **)(lVar44 + 0x30),(undefined8 *)(param_1 + 0xec0),(long ****)0x3,param_4,
                   param_5,param_6,param_7,param_8);
    FUN_7102528c30(*(byte **)(lVar44 + 0x30),(undefined8 *)(param_1 + 0xed8),
                   (long ****)&DAT_00000004,param_4,param_5,param_6,param_7,param_8);
    *(undefined1 *)(param_1 + 0xef0) = 1;
    lVar44 = *DAT_7105329f98;
    FUN_7102527570(*(long *)(lVar44 + 0x30),(long *)(param_1 + 0xdf8),
                   (long ****)(ulong)*(byte *)(param_1 + 0xe70),param_4,param_5,param_6,param_7,
                   param_8);
    FUN_7102527570(*(long *)(lVar44 + 0x30),(long *)(param_1 + 0xe10),
                   (long ****)(ulong)*(byte *)(param_1 + 0xe71),param_4,param_5,param_6,param_7,
                   param_8);
    FUN_7102527570(*(long *)(lVar44 + 0x30),(long *)(param_1 + 0xe28),
                   (long ****)(ulong)*(byte *)(param_1 + 0xe72),param_4,param_5,param_6,param_7,
                   param_8);
    FUN_7102527570(*(long *)(lVar44 + 0x30),(long *)(param_1 + 0xe40),
                   (long ****)(ulong)*(byte *)(param_1 + 0xe73),param_4,param_5,param_6,param_7,
                   param_8);
    FUN_7102527570(*(long *)(lVar44 + 0x30),(undefined8 *)(param_1 + 0xe58),
                   (long ****)(ulong)*(byte *)(param_1 + 0xe74),param_4,param_5,param_6,param_7,
                   param_8);
    *(undefined1 *)(param_1 + 0xe75) = 1;
    *(undefined8 *)(param_1 + 0xf18) = 0xffffffffffffffff;
    *(undefined8 *)(param_1 + 0xf20) = 0x1010101ffffffff;
    *(undefined2 *)(param_1 + 0xf28) = 0x101;
    *(undefined4 *)(param_1 + 0xf32) = 0xffffffff;
    *(undefined8 *)(param_1 + 0xf2a) = 0xffffffffffffffff;
    *(undefined8 *)(param_1 + 0xf48) = 0;
    *(undefined8 *)(param_1 + 0xf40) = 0;
    *(undefined8 *)(param_1 + 0xf38) = 0;
    *(undefined8 *)(param_1 + 0xf58) = 0xffffffffffffffff;
    *(undefined8 *)(param_1 + 0xf60) = 0x1010101ffffffff;
    *(undefined2 *)(param_1 + 0xf68) = 0x101;
    *(undefined4 *)(param_1 + 0xf72) = 0xffffffff;
    *(undefined8 *)(param_1 + 0xf6a) = 0xffffffffffffffff;
    *(undefined8 *)(param_1 + 0xf88) = 0;
    *(undefined8 *)(param_1 + 0xf80) = 0;
    *(undefined8 *)(param_1 + 0xf78) = 0;
    *(undefined4 *)(param_1 + 4000) = 0xffffffff;
    *(undefined8 *)(param_1 + 0xf98) = 0xffffffffffffffff;
    *(undefined2 *)(param_1 + 0xfa8) = 0x101;
    *(undefined4 *)(param_1 + 0xfa4) = 0x1010101;
    *(undefined4 *)(param_1 + 0xfb2) = 0xffffffff;
    *(undefined8 *)(param_1 + 0xfaa) = 0xffffffffffffffff;
    *(undefined4 *)(param_1 + 0xfe4) = 0x1010101;
    *(undefined8 *)(param_1 + 0xfc8) = 0;
    *(undefined8 *)(param_1 + 0xfc0) = 0;
    *(undefined8 *)(param_1 + 0xfb8) = 0;
    *(undefined4 *)(param_1 + 0xfe0) = 0xffffffff;
    *(undefined8 *)(param_1 + 0xfd8) = 0xffffffffffffffff;
    *(undefined2 *)(param_1 + 0xfe8) = 0x101;
    *(undefined8 *)(param_1 + 0xfea) = 0xffffffffffffffff;
    *(undefined4 *)(param_1 + 0xff2) = 0xffffffff;
    *(undefined8 *)(param_1 + 0x1008) = 0;
    *(undefined8 *)(param_1 + 0x1000) = 0;
    *(undefined8 *)(param_1 + 0xff8) = 0;
    *(undefined1 *)(param_1 + 0x1018) = 0;
    if (0 < *(int *)(param_1 + 0xc04)) {
      local_23e0 = param_1 + 0xc44;
      local_23e8 = param_1 + 0xc24;
      uVar36 = 0;
      local_23f0 = param_1 + 0xc30;
      lVar44 = param_1;
LAB_7101e22cf0:
      lVar48 = param_1 + uVar36 * 0x40;
      *(undefined8 *)(lVar48 + 0xc2c) = 0x1010101ffffffff;
      *(undefined8 *)(lVar48 + 0xc24) = 0xffffffffffffffff;
      *(undefined2 *)(lVar48 + 0xc34) = 0x101;
      *(undefined4 *)(lVar48 + 0xc3e) = 0xffffffff;
      *(undefined8 *)(lVar48 + 0xc36) = 0xffffffffffffffff;
      *(undefined8 *)(lVar48 + 0xc54) = 0;
      *(undefined8 *)(lVar48 + 0xc4c) = 0;
      *(undefined8 *)(lVar48 + 0xc44) = 0;
      *(undefined4 *)(lVar48 + 0xc60) = 0;
      uVar42 = DAT_71052391c0;
      if (uVar36 < 4) {
        lVar31 = local_23f8 + uVar36 * 4;
        puVar49 = (ushort *)(lVar31 + 0x4c);
        uVar7 = *puVar49;
        pbVar41 = (byte *)(lVar31 + 0x4a);
        iVar13 = (int)uVar36;
        if (uVar7 == 0xffff) {
          pbVar29 = (byte *)(lVar31 + 0x4b);
          ppppbVar16 = (byte ****)(ulong)*pbVar29;
          bVar38 = *pbVar41;
          uVar11 = (ulong)bVar38;
          DAT_71052391c0 = DAT_71052391c4;
          uVar42 = uVar42 ^ uVar42 << 0xb;
          DAT_71052391c4 = DAT_71052391c8;
          DAT_71052391c8 = DAT_71052391cc;
          DAT_71052391cc = uVar42 ^ uVar42 >> 8 ^ DAT_71052391cc ^ DAT_71052391cc >> 0x13;
          uVar42 = DAT_71052391cc & 3;
          plVar47 = (long *)(param_1 + (long)ppppbVar16 * 0x18 + 0xe78);
          if (uVar42 == 1) {
            FUN_7101e2d640((short *)*plVar47,*(short **)(param_1 + (long)ppppbVar16 * 0x18 + 0xe80))
            ;
          }
          else if (uVar42 == 2) {
            FUN_7101e2de00((uint *)*plVar47,*(uint **)(param_1 + (long)ppppbVar16 * 0x18 + 0xe80));
          }
          else if (uVar42 == 3) {
            FUN_7101e2e610((uint *)*plVar47,*(uint **)(param_1 + (long)ppppbVar16 * 0x18 + 0xe80));
          }
          else {
            FUN_7101e2ce80((short *)*plVar47,*(short **)(param_1 + (long)ppppbVar16 * 0x18 + 0xe80))
            ;
          }
          if (bVar38 != 0) {
            plVar1 = (long *)(param_1 + (long)ppppbVar16 * 0x18 + 0xe80);
            iVar28 = 0;
            do {
              uVar42 = DAT_71052391c0;
              uVar27 = (uint)uVar11;
              if (*plVar1 == *plVar47) {
                uVar42 = 0x2060504 >> (ulong)((*pbVar29 - 1 & 3) << 3);
                if (3 < *pbVar29 - 1) {
                  uVar42 = 3;
                }
                uVar11 = uVar11 & 0xff;
                if ((uint)*(byte *)(param_1 + 0xe70) == (uVar42 & 0xff)) {
                  lVar48 = 0;
                  plVar47 = (long *)(param_1 + 0xdf8);
                }
                else if ((uint)*(byte *)(param_1 + 0xe71) == (uVar42 & 0xff)) {
                  lVar48 = 1;
                  plVar47 = (long *)(param_1 + 0xe10);
                }
                else if ((uint)*(byte *)(param_1 + 0xe72) == (uVar42 & 0xff)) {
                  lVar48 = 2;
                  plVar47 = (long *)(param_1 + 0xe28);
                }
                else if ((uint)*(byte *)(param_1 + 0xe73) == (uVar42 & 0xff)) {
                  lVar48 = 3;
                  plVar47 = (long *)(param_1 + 0xe40);
                }
                else {
                  lVar48 = 4;
                  if ((uint)*(byte *)(param_1 + 0xe74) != (uVar42 & 0xff)) {
                    lVar48 = 5;
                  }
                  plVar47 = (long *)(param_1 + lVar48 * 0x18 + 0xdf8);
                }
                DAT_7105325db8 = 0;
                DAT_71050b1690 = 0xffffffff;
                DAT_7105325db4 = (uVar42 & 0xff) == 2;
                _DAT_71050b1688 = 0xffffffffffffffff;
                bVar38 = *pbVar41;
                uVar10 = (ulong)bVar38;
                puVar19 = (undefined2 *)(local_23e8 + uVar10 * 2 + uVar11 * -2);
                lVar31 = 0;
                puVar26 = (undefined8 *)(param_1 + lVar48 * 0x18 + 0xe00);
                goto LAB_7101e22bc0;
              }
              DAT_71052391c0 = DAT_71052391c4;
              uVar42 = uVar42 ^ uVar42 << 0xb;
              uVar42 = uVar42 ^ uVar42 >> 8 ^ DAT_71052391cc ^ DAT_71052391cc >> 0x13;
              DAT_71052391c4 = DAT_71052391c8;
              DAT_71052391c8 = DAT_71052391cc;
              DAT_7105325db0 = uVar42 % 10;
              local_2220 = (undefined **)FUN_7101e2ee20;
              DAT_71052391cc = uVar42;
              FUN_7101e2ef20(0x7101e2ee20,(uint *)*plVar47,(uint *)*plVar1,&local_2220);
              puVar23 = (undefined2 *)*plVar1;
              puVar19 = (undefined2 *)*plVar47;
              if ((uVar11 & 0xff) <= (ulong)((long)puVar23 - (long)puVar19 >> 2)) {
                if (puVar23 == puVar19) goto LAB_7101e24350;
                lVar48 = (long)iVar28;
                goto LAB_7101e22a10;
              }
              iVar43 = (int)((ulong)((long)puVar23 - (long)puVar19) >> 2);
              if (0 < iVar43) {
                if (puVar23 == puVar19) goto LAB_7101e24350;
                lVar48 = (long)iVar28;
                while( true ) {
                  *(undefined2 *)(lVar44 + lVar48 * 2 + 0xc24) = *puVar19;
                  *(undefined1 *)(lVar44 + lVar48 + 0xc30) = 1;
                  *(undefined4 *)(lVar44 + lVar48 * 4 + 0xc44) = 1;
                  if ((ushort *)*plVar1 == (ushort *)*plVar47) goto LAB_7101e24350;
                  FUN_7101e2c440(param_1,iVar13,(int)lVar48,ppppbVar16,
                                 (long ****)(ulong)*(ushort *)*plVar47,param_6,param_7,param_8);
                  uVar42 = DAT_71052391c0;
                  DAT_71052391c0 = DAT_71052391c4;
                  uVar42 = uVar42 ^ uVar42 << 0xb;
                  uVar42 = uVar42 ^ uVar42 >> 8 ^ DAT_71052391cc ^ DAT_71052391cc >> 0x13;
                  DAT_71052391c4 = DAT_71052391c8;
                  DAT_71052391c8 = DAT_71052391cc;
                  DAT_7105325db0 = uVar42 % 10;
                  local_2220 = (undefined **)FUN_7101e2ee20;
                  DAT_71052391cc = uVar42;
                  FUN_7101e2ef20(0x7101e2ee20,(uint *)*plVar47,(uint *)*plVar1,&local_2220);
                  lVar48 = lVar48 + 1;
                  if (iVar28 + iVar43 <= lVar48) break;
                  puVar19 = (undefined2 *)*plVar47;
                  if ((undefined2 *)*plVar1 == puVar19) goto LAB_7101e24350;
                }
              }
              uVar11 = (ulong)(uVar27 - iVar43);
              iVar28 = iVar28 + iVar43;
            } while ((uVar27 - iVar43 & 0xff) != 0);
          }
        }
        else if (*pbVar41 != 0) {
          uVar11 = 0;
          do {
            lVar31 = DAT_710532f730;
            if ((uVar7 != 0xffff) && ((short)uVar7 < 2000)) {
              lVar30 = *(long *)(*(long *)(DAT_710532f730 + 8) + 0x1d8);
              lVar25 = (long)(short)uVar7;
              if (((uint)*(ushort *)(lVar30 + (long)(short)uVar7 * 2 + 0x60) <
                   (uint)((int)((ulong)(*(long *)(lVar30 + 0x28) - *(long *)(lVar30 + 0x20)) >> 6) *
                         -0x33333333)) &&
                 (*(char *)(*(long *)(lVar24 + 0x30) + lVar25 * 0x24) != '\0')) {
                lVar25 = lVar48 + 0xc24;
                *(ushort *)(lVar25 + uVar11 * 2) = uVar7;
                *(undefined1 *)(lVar25 + uVar11 + 0xc) = 1;
                *(undefined4 *)(lVar25 + uVar11 * 4 + 0x20) = 1;
                uVar7 = *puVar49;
                uVar10 = 0;
                iVar28 = (int)(short)uVar7;
                if ((iVar28 != -1) && ((short)uVar7 < 2000)) {
                  lVar31 = *(long *)(*(long *)(lVar31 + 8) + 0x1d8);
                  uVar7 = *(ushort *)(lVar31 + (long)iVar28 * 2 + 0x60);
                  uVar10 = (ulong)uVar7;
                  uVar32 = (*(long *)(lVar31 + 0x28) - *(long *)(lVar31 + 0x20) >> 6) *
                           -0x3333333333333333;
                  if ((uint)uVar7 < (uint)uVar32) {
                    puVar19 = (undefined2 *)(*(long *)(lVar31 + 0x20) + uVar10 * 0x140);
                    if (uVar32 < uVar10 || uVar32 - uVar10 == 0) {
                      puVar19 = &DAT_7105182b08;
                    }
                    if (*(char *)(puVar19 + 0x2f) == '\0') {
                      if (2 < *(byte *)(puVar19 + 0x36) - 1) goto LAB_7101e22f80;
                      uVar10 = (ulong)(0x20301 >> (ulong)((*(byte *)(puVar19 + 0x36) - 1 & 3) << 3))
                               & 0xffffff;
                    }
                    else {
                      uVar10 = 4;
                    }
                  }
                  else {
LAB_7101e22f80:
                    uVar10 = 0;
                  }
                }
                FUN_7101e2c440(param_1,iVar13,(int)uVar11,
                               (byte ****)(ulong)(byte)(&DAT_7104549040)[uVar10 & 0xff],
                               (long ****)((long)iVar28 & 0xffff),param_6,param_7,param_8);
              }
              else {
                uVar34 = *(ushort *)(lVar30 + lVar25 * 2 + 0x60);
                uVar32 = (ulong)uVar34;
                uVar10 = (*(long *)(lVar30 + 0x28) - *(long *)(lVar30 + 0x20) >> 6) *
                         -0x3333333333333333;
                if (((uint)uVar34 < (uint)uVar10) &&
                   (*(short *)(*(long *)(lVar24 + 0x30) + lVar25 * 0x24 + 0x20) != 0)) {
                  puVar19 = (undefined2 *)(*(long *)(lVar30 + 0x20) + uVar32 * 0x140);
                  if (uVar10 < uVar32 || uVar10 - uVar32 == 0) {
                    puVar19 = &DAT_7105182b08;
                  }
                  if (*(char *)(puVar19 + 0x2f) == '\0') {
                    if (*(byte *)(puVar19 + 0x36) < 4) {
                      uVar42 = 0x4050306 >> (ulong)((*(byte *)(puVar19 + 0x36) & 3) << 3);
                    }
                    else {
                      uVar42 = 3;
                    }
                  }
                  else {
                    uVar42 = 2;
                  }
                  if ((uint)*(byte *)(param_1 + 0xe70) == (uVar42 & 0xff)) {
                    lVar25 = 0;
                  }
                  else if ((uint)*(byte *)(param_1 + 0xe71) == (uVar42 & 0xff)) {
                    lVar25 = 1;
                  }
                  else if ((uint)*(byte *)(param_1 + 0xe72) == (uVar42 & 0xff)) {
                    lVar25 = 2;
                  }
                  else if ((uint)*(byte *)(param_1 + 0xe73) == (uVar42 & 0xff)) {
                    lVar25 = 3;
                  }
                  else {
                    lVar25 = 4;
                    if ((uint)*(byte *)(param_1 + 0xe74) != (uVar42 & 0xff)) {
                      lVar25 = 5;
                    }
                  }
                  lVar25 = param_1 + lVar25 * 0x18;
                  puVar26 = *(undefined8 **)(lVar25 + 0xdf8);
                  puVar33 = *(undefined8 **)(lVar25 + 0xe00);
                  pppplVar17 = (long ****)0xffff;
                  if (puVar26 != puVar33) {
                    uVar34 = 1000;
                    uVar42 = 0xffffffff;
                    do {
                      puVar37 = (ushort *)*puVar26;
                      if (uVar7 == puVar37[4]) {
                        uVar6 = puVar37[8];
                        if (uVar6 < uVar34) {
                          pppplVar17 = (long ****)(ulong)*puVar37;
                          uVar42 = *(uint *)(puVar37 + 6);
                          uVar34 = uVar6;
                        }
                        else if ((uVar6 == uVar34) && (*(uint *)(puVar37 + 6) < uVar42)) {
                          pppplVar17 = (long ****)(ulong)*puVar37;
                          uVar42 = *(uint *)(puVar37 + 6);
                        }
                      }
                      puVar26 = puVar26 + 1;
                    } while (puVar33 != puVar26);
                  }
                  lVar25 = lVar48 + 0xc24;
                  puVar37 = (ushort *)(lVar25 + uVar11 * 2);
                  *puVar37 = uVar7;
                  *(undefined1 *)(lVar25 + uVar11 + 0xc) = 0;
                  puVar37[9] = (ushort)pppplVar17;
                  *(undefined4 *)(lVar25 + uVar11 * 4 + 0x20) = 1;
                  lVar31 = *(long *)(*(long *)(lVar31 + 8) + 0x1d8);
                  if ((long)(short)*puVar49 == -1) {
                    uVar10 = 0xffffffff;
                  }
                  else {
                    uVar10 = (ulong)*(ushort *)(lVar31 + (long)(short)*puVar49 * 2 + 0x60);
                  }
                  uVar32 = (*(long *)(lVar31 + 0x28) - *(long *)(lVar31 + 0x20) >> 6) *
                           -0x3333333333333333;
                  puVar19 = (undefined2 *)(*(long *)(lVar31 + 0x20) + uVar10 * 0x140);
                  if (uVar32 < uVar10 || uVar32 - uVar10 == 0) {
                    puVar19 = &DAT_7105182b08;
                  }
                  if (*(char *)(puVar19 + 0x2f) == '\0') {
                    if (*(byte *)(puVar19 + 0x36) < 4) {
                      ppppbVar16 = (byte ****)
                                   (ulong)(0x1020003 >>
                                          (ulong)((*(byte *)(puVar19 + 0x36) & 3) << 3));
                    }
                    else {
                      ppppbVar16 = (byte ****)0x0;
                    }
                  }
                  else {
                    ppppbVar16 = (byte ****)&DAT_00000004;
                  }
                  FUN_7101e2c920(param_1,iVar13,(long ****)(uVar11 & 0xffffffff),ppppbVar16,
                                 pppplVar17,param_6,param_7,param_8);
                }
              }
            }
            uVar11 = uVar11 + 1;
            if (*pbVar41 <= uVar11) break;
            uVar7 = *puVar49;
          } while( true );
        }
        goto LAB_7101e23110;
      }
      goto LAB_7101e24360;
    }
LAB_7101e2314c:
    iVar13 = *(int *)(param_1 + (long)*(int *)(param_1 + 0xc18) * 4 + 0xc08);
    *(undefined1 *)(param_1 + 0xf0c) = 0;
    *(int *)(param_1 + 0xc1c) = iVar13 + -1;
    break;
  case 6:
    local_2220 = (undefined **)0x1e00000000;
    local_2218 = 0x6d;
    bStack_2217 = 0x6e;
    uStack_2216 = 0x5f75;
    uStack_2214 = 0x7073;
    uStack_2212 = 0x7269;
    local_2208 = 0x6c6c;
    local_2210 = 0x5f737469;
    uStack_220c = 0x6572;
    uStack_220a = 99;
    uStack_2209 = 0x61;
    uStack_2206 = 0x685f;
    uStack_2204 = 0x5f706c65;
    uStack_2200 = 0x6572;
    uVar42 = 0x811c9dc5;
    uVar27 = 0x6d;
    uStack_21fe = 0x6163;
    uStack_21fc = 0x6c6c;
    lVar24 = 9;
    local_21fa = local_21fa & 0xff00;
    do {
      uVar42 = uVar42 * 0x89 ^ uVar27;
      uVar27 = (uint)*(byte *)((long)&local_2220 + lVar24);
      lVar24 = lVar24 + 1;
    } while (uVar27 != 0);
    local_2220 = (undefined **)CONCAT44(0x1e,uVar42);
    FUN_7101af53d0(*(long *)(*(long *)(*(long *)(DAT_710532f840 + 8) + 0xb8) + 0x80),
                   (uint *)&local_2220,param_3,param_4,param_5,param_6,param_7,param_8);
    break;
  case 7:
    FUN_7103778300(0x3f800000,*(long *)(param_1 + 0xba8),0x71043f0e27);
    FUN_7103778300(0x3f800000,*(long *)(param_1 + 0xba8),0x710438d054);
    param_3 = (undefined **)(ulong)*(uint *)(param_1 + 0xbf4);
    FUN_7103776640(&local_2220,param_1 + 0xba0,(byte ****)"set_parts_list_%02d",param_3,param_4,
                   param_5,param_6,param_7,param_8);
    uVar36 = CONCAT26(uStack_2212,
                      CONCAT24(uStack_2214,CONCAT22(uStack_2216,CONCAT11(bStack_2217,local_2218))));
    FUN_7103778300(0x3f800000,uVar36,0x710438d054);
    if (0 < *(int *)(param_1 + (long)*(int *)(param_1 + 0xbf4) * 4 + 0xc08)) {
      uVar42 = 0;
      do {
        param_3 = (undefined **)(ulong)uVar42;
        FUN_7103776640(&local_2370,(long)&local_2220,(byte ****)"set_parts_base_%02d",param_3,
                       param_4,param_5,param_6,param_7,param_8);
        uVar11 = local_2368;
        if (uVar42 == *(uint *)(param_1 + 0xbf8)) {
          FUN_7103778300(0x3f800000,local_2368,0x71043add49);
        }
        FUN_7103778300(0x3f800000,uVar11,0x710438d054);
        local_2370 = &PTR_FUN_710523d988;
        local_2368 = 0;
        if (uVar11 != 0) {
          uVar10 = *(ulong *)(uVar11 + 0x18);
          *(undefined ***)(uVar11 + 0x10) = &PTR_FUN_710523d9a8;
          *(undefined8 *)(uVar11 + 0x18) = 0;
          if (uVar10 != 0) {
            FUN_710392eb40(uVar10);
          }
          FUN_710392eb40(uVar11);
        }
        uVar42 = uVar42 + 1;
      } while ((int)uVar42 < *(int *)(param_1 + (long)*(int *)(param_1 + 0xbf4) * 4 + 0xc08));
    }
    local_2220 = &PTR_FUN_710523d988;
    local_2218 = 0;
    bStack_2217 = 0;
    uStack_2216 = 0;
    uStack_2214 = 0;
    uStack_2212 = 0;
    if (uVar36 != 0) {
      uVar11 = *(ulong *)(uVar36 + 0x18);
      *(undefined ***)(uVar36 + 0x10) = &PTR_FUN_710523d9a8;
      *(undefined8 *)(uVar36 + 0x18) = 0;
      if (uVar11 != 0) {
        FUN_710392eb40(uVar11);
      }
      FUN_710392eb40(uVar36);
    }
    *(undefined1 *)(param_1 + 0xd24) = 1;
    *(undefined4 *)(param_1 + 0xd28) = 0x40a00000;
    goto LAB_7101e22510;
  case 8:
LAB_7101e22510:
    FUN_7101e2b610(param_1,5,param_3,param_4,param_5,param_6,param_7,param_8);
    return;
  }
  return;
  while( true ) {
    *puVar19 = *(undefined2 *)(*(long *)*plVar47 + 8);
    *(undefined1 *)(((local_23f0 + uVar10) - uVar11) + lVar31) = 0;
    if ((undefined8 *)*puVar26 == (undefined8 *)*plVar47) goto LAB_7101e24358;
    puVar19[9] = **(undefined2 **)*plVar47;
    *(undefined4 *)(local_23e0 + (ulong)(uint)bVar38 * 4 + uVar11 * -4 + lVar31 * 4) = 1;
    if ((long *)*puVar26 == (long *)*plVar47) goto LAB_7101e24358;
    (&DAT_71050b1688)[DAT_7105325db8] = *(undefined2 *)(*(long *)*plVar47 + 8);
    DAT_7105325db8 = DAT_7105325db8 + 1;
    if ((undefined8 *)*puVar26 == (undefined8 *)*plVar47) goto LAB_7101e24358;
    FUN_7101e2c920(param_1,iVar13,(long ****)(ulong)(((uint)bVar38 - (uVar27 & 0xff)) + (int)lVar31)
                   ,(byte ****)(ulong)*pbVar29,(long ****)(ulong)**(ushort **)*plVar47,param_6,
                   param_7,param_8);
    lVar31 = lVar31 + 1;
    puVar19 = puVar19 + 1;
    if ((long)(ulong)*pbVar41 <= (long)((uVar10 - uVar11) + lVar31)) break;
LAB_7101e22bc0:
    uVar42 = DAT_71052391c0;
    DAT_71052391c0 = DAT_71052391c4;
    uVar42 = uVar42 ^ uVar42 << 0xb;
    uVar42 = uVar42 ^ uVar42 >> 8 ^ DAT_71052391cc ^ DAT_71052391cc >> 0x13;
    DAT_71052391c4 = DAT_71052391c8;
    DAT_71052391c8 = DAT_71052391cc;
    DAT_7105325db0 = uVar42 % 10;
    local_2220 = (undefined **)FUN_7101e2fa20;
    DAT_71052391cc = uVar42;
    FUN_7101e2fd60((undefined8 *)*plVar47,(undefined8 *)*puVar26,&local_2220);
    if ((long *)*puVar26 == (long *)*plVar47) {
LAB_7101e24358:
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_out_of_range();
    }
  }
LAB_7101e23110:
  local_23e0 = local_23e0 + 0x40;
  local_23f0 = local_23f0 + 0x40;
  uVar36 = uVar36 + 1;
  lVar44 = lVar44 + 0x40;
  local_23e8 = local_23e8 + 0x40;
  if ((long)*(int *)(param_1 + 0xc04) <= (long)uVar36) goto LAB_7101e2314c;
  goto LAB_7101e22cf0;
LAB_7101e22a10:
  *(undefined2 *)(lVar44 + lVar48 * 2 + 0xc24) = *puVar19;
  *(undefined1 *)(lVar44 + lVar48 + 0xc30) = 1;
  *(undefined4 *)(lVar44 + lVar48 * 4 + 0xc44) = 1;
  if ((ushort *)*plVar1 == (ushort *)*plVar47) goto LAB_7101e24350;
  FUN_7101e2c440(param_1,iVar13,(int)lVar48,ppppbVar16,(long ****)(ulong)*(ushort *)*plVar47,param_6
                 ,param_7,param_8);
  uVar42 = DAT_71052391c0;
  DAT_71052391c0 = DAT_71052391c4;
  uVar42 = uVar42 ^ uVar42 << 0xb;
  uVar42 = uVar42 ^ uVar42 >> 8 ^ DAT_71052391cc ^ DAT_71052391cc >> 0x13;
  DAT_71052391c4 = DAT_71052391c8;
  DAT_71052391c8 = DAT_71052391cc;
  DAT_7105325db0 = uVar42 % 10;
  local_2220 = (undefined **)FUN_7101e2ee20;
  DAT_71052391cc = uVar42;
  FUN_7101e2ef20(0x7101e2ee20,(uint *)*plVar47,(uint *)*plVar1,&local_2220);
  lVar48 = lVar48 + 1;
  if ((int)(iVar28 + (uVar27 & 0xff)) <= lVar48) goto LAB_7101e23110;
  puVar19 = (undefined2 *)*plVar47;
  if ((undefined2 *)*plVar1 == puVar19) {
LAB_7101e24350:
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_out_of_range();
  }
  goto LAB_7101e22a10;
}

