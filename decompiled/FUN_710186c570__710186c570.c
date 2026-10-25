// addr:      710186c570
// offset:    0x186c570
// name:      FUN_710186c570
// mangled:   
// signature: undefined __cdecl FUN_710186c570(long param_1, undefined4 * param_2, undefined * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_710186c570(long param_1,undefined4 *param_2,undefined **param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long ****pppplVar1;
  char *pcVar2;
  int *piVar3;
  undefined4 *puVar4;
  long **pplVar5;
  long **pplVar6;
  undefined4 uVar7;
  undefined1 uVar8;
  char cVar9;
  byte bVar10;
  short sVar11;
  undefined2 uVar12;
  ushort uVar13;
  byte ***pppbVar14;
  undefined2 uVar15;
  undefined1 uVar16;
  undefined1 uVar17;
  undefined1 uVar18;
  undefined1 uVar19;
  undefined1 uVar20;
  undefined1 uVar21;
  undefined1 uVar22;
  undefined2 uVar23;
  undefined2 uVar24;
  bool bVar25;
  bool bVar26;
  int iVar27;
  int iVar28;
  long lVar29;
  long *plVar30;
  long ***ppplVar31;
  ulong uVar32;
  long *********ppppppppplVar33;
  undefined **ppuVar34;
  uint *puVar35;
  long ****pppplVar36;
  byte ****ppppbVar37;
  byte ****ppppbVar38;
  long ****pppplVar39;
  byte ****ppppbVar40;
  uint uVar41;
  uint uVar42;
  long lVar43;
  undefined8 *puVar44;
  long ***ppplVar45;
  byte *pbVar46;
  ulong uVar47;
  code *pcVar48;
  undefined8 uVar49;
  undefined8 uVar50;
  short *psVar51;
  ushort *puVar52;
  uint uVar53;
  uint uVar54;
  long *plVar55;
  long ****pppplVar56;
  long lVar57;
  long ***ppplVar58;
  undefined8 *puVar59;
  long ****pppplVar60;
  size_t __n;
  long **pplVar61;
  long lVar62;
  ulong local_27d0;
  ulong local_27c8;
  long local_27c0;
  undefined8 local_27b8;
  undefined8 local_27b0;
  byte local_27a8 [80];
  char local_2758;
  undefined4 uStack_2757;
  undefined1 uStack_2753;
  undefined2 uStack_2752;
  char local_2750;
  undefined8 local_2748;
  undefined4 local_2740;
  uint uStack_273c;
  undefined4 local_2738;
  undefined4 uStack_2734;
  undefined2 local_2730;
  undefined2 uStack_272e;
  undefined2 uStack_272c;
  undefined8 local_26f4;
  ushort local_26ec [512];
  uint local_22ec;
  undefined4 uStack_22e8;
  undefined4 local_22e4;
  ulong local_22e0;
  ushort local_22d8 [24];
  char local_22a8;
  undefined1 uStack_22a7;
  undefined1 uStack_22a6;
  undefined1 uStack_22a5;
  undefined2 uStack_22a4;
  undefined2 uStack_22a2;
  undefined6 local_22a0;
  undefined2 uStack_229a;
  undefined6 local_2298;
  undefined2 uStack_2292;
  undefined1 local_2290;
  undefined8 local_228c;
  undefined4 local_2284;
  uint auStack_2280 [4];
  undefined8 local_2270;
  undefined2 local_2268;
  undefined1 uStack_2266;
  undefined1 uStack_2265;
  undefined1 uStack_2264;
  undefined1 uStack_2263;
  undefined2 uStack_2262;
  undefined4 local_2260;
  byte abStack_225c [4];
  undefined1 *local_2258;
  undefined4 local_2250;
  long alStack_2240 [4];
  undefined4 local_2220;
  uint uStack_221c;
  undefined4 local_2218;
  ushort local_2214 [2];
  undefined8 local_2210;
  long *local_21f0;
  long alStack_21e0 [4];
  long *local_21c0;
  long alStack_21b0 [4];
  long *local_2190;
  long alStack_2180 [4];
  long *local_2160;
  undefined4 local_2150;
  uint local_1e14;
  undefined4 uStack_1e10;
  undefined4 uStack_1e0c;
  ulong local_1e08;
  ushort local_1e00 [24];
  char local_1dd0;
  char cStack_1dcf;
  undefined1 uStack_1dce;
  undefined1 uStack_1dcd;
  ushort uStack_1dcc;
  byte bStack_1dca;
  byte bStack_1dc9;
  char cStack_1dc8;
  undefined2 uStack_1dc7;
  char cStack_1dc5;
  undefined2 uStack_1dc4;
  undefined2 uStack_1dc2;
  char cStack_1dc0;
  undefined2 uStack_1dbf;
  char cStack_1dbd;
  undefined2 uStack_1dbc;
  undefined2 local_1dba;
  undefined1 local_1db8;
  undefined8 local_1db4;
  undefined4 local_1dac;
  uint auStack_1da8 [1842];
  byte ***local_e0;
  long ***local_d8;
  long ***ppplStack_d0;
  uint local_c8 [14];
  long ***local_90;
  undefined4 local_84 [5];
  
  ppuVar34 = param_3;
  ppppbVar37 = param_4;
  if (((DAT_71053144d8 & 1) == 0) && (iVar27 = __cxa_guard_acquire(&DAT_71053144d8), iVar27 != 0)) {
    FUN_7101764000();
    ppuVar34 = &PTR_LOOP_7104f17000;
    FUN_71000001c0();
    __cxa_guard_release(&DAT_71053144d8);
  }
  switch(*param_2) {
  case 1:
    local_2270._0_4_ = 0;
    local_2270._4_4_ = 0x15;
    local_2260 = 0x6c65735f;
    abStack_225c[0] = 0x65;
    abStack_225c[1] = 99;
    abStack_225c[2] = 0x74;
    abStack_225c[3] = 0x5f;
    local_2270._0_4_ = 0x811c9dc5;
    local_2268 = 0x656d;
    uStack_2266 = 0x6c;
    uStack_2265 = 0x5f;
    uStack_2264 = 0x72;
    uStack_2263 = 0x75;
    uStack_2262 = 0x656c;
    uVar54 = 0x6d;
    local_2258 = (undefined1 *)CONCAT26(local_2258._6_2_,0x656c746974);
    lVar43 = 9;
    do {
      local_2270._0_4_ = (uint)local_2270 * 0x89 ^ uVar54;
      uVar54 = (uint)*(byte *)((long)&local_2270 + lVar43);
      lVar43 = lVar43 + 1;
    } while (uVar54 != 0);
    FUN_7101af90b0(*(long *)(*(long *)(param_1 + 400) + 0x80),(uint *)&local_2270,ppuVar34,
                   ppppbVar37,param_5,param_6,param_7,param_8);
    lVar43 = *(long *)(*(long *)(param_1 + 400) + 0x80);
    FUN_710376b960(*(long *)(lVar43 + 0x2268));
    (**(code **)(**(long **)(lVar43 + 0x2268) + 0x70))(*(long **)(lVar43 + 0x2268),0);
    if (*(int *)(lVar43 + 0x11b0) == 0) {
      if (*(char *)(lVar43 + 0x2258) != '\0') goto LAB_710186c9c4;
    }
    else {
      *(undefined4 *)(lVar43 + 0x11b0) = 0;
LAB_710186c9c4:
      if (*(char *)(lVar43 + 0x225a) == -1) {
        *(char *)(lVar43 + 0x225a) = '\0';
      }
      if (*(int *)(lVar43 + 0xa8) == 1) {
        *(undefined4 *)(lVar43 + 0xa0) = 0;
        *(undefined8 *)(lVar43 + 8) = 0;
        *(undefined8 *)(lVar43 + 0x10) = 0;
        *(undefined1 *)(lVar43 + 0xb4) = 0;
        *(undefined8 *)(lVar43 + 0x58) = 0x200000001;
        *(undefined8 *)(lVar43 + 0xac) = 0xffffffff00000000;
        *(undefined8 *)(lVar43 + 0xa4) = 0xffffffff00000001;
        *(undefined8 *)(lVar43 + 0x90) = 0;
        *(undefined8 *)(lVar43 + 0x98) = 0;
        *(undefined8 *)(lVar43 + 0x80) = 0;
        *(undefined8 *)(lVar43 + 0x88) = 0;
        *(undefined8 *)(lVar43 + 0x70) = 0;
        *(undefined8 *)(lVar43 + 0x78) = 0;
        *(undefined8 *)(lVar43 + 0x60) = 0;
        *(undefined8 *)(lVar43 + 0x68) = 0;
      }
    }
    lVar43 = *(long *)(*(long *)(param_1 + 400) + 0x80);
    if (*(int *)(lVar43 + 0x1204) == 0) {
      if (*(char *)(lVar43 + 0x2259) != '\0') goto LAB_710186ca44;
    }
    else {
      *(undefined4 *)(lVar43 + 0x1204) = 0;
LAB_710186ca44:
      if ((*(char *)(lVar43 + 0x2257) != '\0') && (*(char *)(lVar43 + 0x2259) != '\0')) {
        *(char *)(lVar43 + 0x2259) = '\0';
        FUN_71037780e0(&local_2270,**(long **)(lVar43 + 0xb8) + 8,(long ****)"footer_help_out",
                       ppuVar34,ppppbVar37,param_5,param_6,param_7,param_8);
        FUN_710377aee0(0x3f800000,(long)&local_2270);
        uVar32 = CONCAT26(uStack_2262,
                          CONCAT15(uStack_2263,
                                   CONCAT14(uStack_2264,
                                            CONCAT13(uStack_2265,CONCAT12(uStack_2266,local_2268))))
                         );
        local_2270._0_4_ = 0x523d9e8;
        local_2270._4_4_ = 0x71;
        local_2268 = 0;
        uStack_2266 = 0;
        uStack_2265 = 0;
        uStack_2264 = 0;
        uStack_2263 = 0;
        uStack_2262 = 0;
        if (uVar32 != 0) {
          FUN_710392eb40(uVar32);
        }
      }
    }
    uVar54 = DAT_71053050f0;
    plVar55 = (long *)(param_1 + 0x1c0);
    bVar26 = DAT_71053050f0 == 0x6010000;
    *(undefined8 *)(param_1 + 0x1c8) = *(undefined8 *)(param_1 + 0x1c0);
    lVar43 = DAT_710532f730;
    if (bVar26) {
      uVar54 = 0;
      do {
        if ((uVar54 & 0xff) == 1) {
          puVar44 = (undefined8 *)(*DAT_7105314510 + 0x28);
        }
        else if ((uVar54 & 0xff) == 2) {
          puVar44 = (undefined8 *)(*DAT_7105314510 + 0x38);
        }
        else {
          puVar44 = (undefined8 *)(*DAT_7105314510 + 0x18);
        }
        puVar44 = (undefined8 *)*puVar44;
        lVar43 = 0;
        do {
          local_2270._0_4_ = 0xffffffff;
          local_2270._4_4_ = 0xffffffff;
          uStack_221c = 0;
          local_2218 = 0;
          local_2214[0] = 0;
          local_1e14 = local_1e14 & 0xffffff00;
          local_2260 = 0;
          abStack_225c[0] = 0;
          local_2268 = 0;
          uStack_2266 = 0;
          uStack_2265 = 0;
          uStack_2264 = 0;
          uStack_2263 = 0;
          uStack_2262 = 0;
          uStack_1dcc = 0x3c;
          uStack_1e10 = 0xffffffff;
          uStack_1e0c = 0xffffffff;
          local_1e08 = 0;
          local_1e00[0] = 0;
          local_1dd0 = '\0';
          cStack_1dcf = '\0';
          uStack_1dce = 0;
          bStack_1dca = 3;
          bStack_1dc9 = 5;
          cStack_1dc8 = '\0';
          uStack_1dc7 = 0x200;
          cStack_1dc5 = '\0';
          uStack_1dc4 = 0;
          uStack_1dc2 = 10;
          cStack_1dc0 = '\0';
          uStack_1dbf = 0x101;
          cStack_1dbd = '\0';
          uStack_1dbc = 0x103;
          local_1dba = 0x100;
          local_1db8 = 2;
          auStack_1da8[3] = 0xffffffff;
          local_1db4 = 0xffffffffffffffff;
          local_1dac = 0xffffffff;
          auStack_1da8[0] = 0xffffffff;
          auStack_1da8[1] = 0xffffffff;
          auStack_1da8[2] = 0xffffffff;
          if (DAT_710532f730 != 0) {
            lVar57 = *(long *)(DAT_710532f730 + 8);
            lVar29 = *(long *)(lVar57 + 0x178);
            uVar32 = FUN_71032b23e0(*(long *)(lVar29 + 8),0xd56784f97);
            uVar47 = FUN_71032b1e40(lVar29,uVar32);
            if (-1 < (int)uVar47) {
              uVar32 = FUN_71032b1e40(*(long *)(lVar57 + 0x178),uVar32);
              uVar47 = uVar32 >> 5 & 0x7ffffff;
              auStack_1da8[uVar47] =
                   auStack_1da8[uVar47] & (1 << (ulong)((uint)uVar32 & 0x1f) ^ 0xffffffffU);
            }
          }
          ppuVar34 = (undefined **)&local_2270;
          uVar32 = FUN_71017dcc40(puVar44,(uint)lVar43,(uint *)ppuVar34);
          if ((uVar32 & 1) != 0) {
            puVar59 = *(undefined8 **)(param_1 + 0x1c8);
            if (puVar59 == *(undefined8 **)(param_1 + 0x1d0)) {
              FUN_710186f2c0(plVar55,&local_2270,(long ****)ppuVar34,ppppbVar37,param_5,param_6,
                             param_7,param_8);
            }
            else {
              uVar42 = 0x811c9dc5;
              *puVar59 = CONCAT44(local_2270._4_4_,(uint)local_2270);
              *(uint *)(puVar59 + 1) = CONCAT13(uStack_2265,CONCAT12(uStack_2266,local_2268));
              *(undefined4 *)((long)puVar59 + 0xc) = 0;
              uVar32 = 0;
              do {
                uVar47 = uVar32;
                if (abStack_225c[uVar32] == 0) break;
                *(byte *)((long)puVar59 + uVar32 + 0x14) = abStack_225c[uVar32];
                if (abStack_225c[uVar32 + 1] == 0) {
                  uVar47 = uVar32 + 1;
                  break;
                }
                *(byte *)((long)puVar59 + uVar32 + 0x15) = abStack_225c[uVar32 + 1];
                if (abStack_225c[uVar32 + 2] == 0) {
                  uVar47 = uVar32 + 2;
                  break;
                }
                uVar47 = uVar32 + 3;
                *(byte *)((long)puVar59 + uVar32 + 0x16) = abStack_225c[uVar32 + 2];
                uVar32 = uVar47;
              } while ((uint)uVar47 < 0x3f);
              *(undefined1 *)((long)puVar59 + (uVar47 & 0xffffffff) + 0x14) = 0;
              *(int *)(puVar59 + 2) = (int)uVar47;
              uVar41 = (uint)*(byte *)((long)puVar59 + 0x14);
              uVar53 = uVar42;
              if (*(byte *)((long)puVar59 + 0x14) != 0) {
                pbVar46 = (byte *)((long)puVar59 + 0x15);
                do {
                  uVar53 = uVar53 * 0x89 ^ uVar41;
                  uVar41 = (uint)*pbVar46;
                  pbVar46 = pbVar46 + 1;
                } while (uVar41 != 0);
              }
              *(uint *)((long)puVar59 + 0xc) = uVar53;
              *(undefined4 *)((long)puVar59 + 0x54) = 0;
              psVar51 = (short *)((long)puVar59 + 0x62);
              for (uVar32 = 0; local_2214[uVar32] != 0; uVar32 = uVar32 + 4) {
                psVar51[-3] = local_2214[uVar32];
                if (local_2214[uVar32 + 1] == 0) {
                  uVar32 = uVar32 | 1;
                  break;
                }
                psVar51[-2] = local_2214[uVar32 + 1];
                sVar11 = *(short *)((long)&local_2210 + (uVar32 - 1) * 2 + 2);
                if (sVar11 == 0) {
                  uVar32 = uVar32 | 2;
                  break;
                }
                psVar51[-1] = sVar11;
                if (0x1fe < (int)uVar32 + 3U) {
                  uVar32 = (ulong)((int)uVar32 + 3);
                  break;
                }
                sVar11 = *(short *)((long)&local_2210 + uVar32 * 2 + 2);
                if (sVar11 == 0) {
                  uVar32 = uVar32 | 3;
                  break;
                }
                *psVar51 = sVar11;
                psVar51 = psVar51 + 4;
              }
              *(undefined2 *)((long)puVar59 + (uVar32 & 0xffffffff) * 2 + 0x5c) = 0;
              *(int *)(puVar59 + 0xb) = (int)uVar32;
              uVar53 = (uint)*(ushort *)((long)puVar59 + 0x5c);
              if (*(ushort *)((long)puVar59 + 0x5c) != 0) {
                puVar52 = (ushort *)((long)puVar59 + 0x5e);
                do {
                  uVar42 = uVar42 * 0x89 ^ uVar53;
                  uVar53 = (uint)*puVar52;
                  puVar52 = puVar52 + 1;
                } while (uVar53 != 0);
              }
              *(uint *)((long)puVar59 + 0x54) = uVar42;
              *(undefined4 *)((long)puVar59 + 0x464) = uStack_1e0c;
              *(ulong *)((long)puVar59 + 0x45c) = CONCAT44(uStack_1e10,local_1e14);
              *(undefined4 *)(puVar59 + 0x8d) = 0;
              FUN_7101696040((uint *)(puVar59 + 0x8d),local_1e00);
              puVar59[0x96] =
                   CONCAT26(local_1dba,
                            CONCAT24(uStack_1dbc,
                                     CONCAT13(cStack_1dbd,CONCAT21(uStack_1dbf,cStack_1dc0))));
              puVar59[0x95] =
                   CONCAT26(uStack_1dc2,
                            CONCAT24(uStack_1dc4,
                                     CONCAT13(cStack_1dc5,CONCAT21(uStack_1dc7,cStack_1dc8))));
              puVar59[0x94] =
                   CONCAT17(bStack_1dc9,
                            CONCAT16(bStack_1dca,
                                     CONCAT24(uStack_1dcc,
                                              CONCAT13(uStack_1dcd,
                                                       CONCAT12(uStack_1dce,
                                                                CONCAT11(cStack_1dcf,local_1dd0)))))
                           );
              *(undefined1 *)(puVar59 + 0x97) = local_1db8;
              *(undefined8 *)((long)puVar59 + 0x4bc) = local_1db4;
              *(undefined4 *)((long)puVar59 + 0x4c4) = local_1dac;
              puVar59[0x9a] = CONCAT44(auStack_1da8[3],auStack_1da8[2]);
              puVar59[0x99] = CONCAT44(auStack_1da8[1],auStack_1da8[0]);
              *(long *)(param_1 + 0x1c8) = *(long *)(param_1 + 0x1c8) + 0x4d8;
            }
          }
          lVar43 = lVar43 + 1;
        } while (lVar43 != 0x1e);
        uVar54 = uVar54 + 1;
      } while (uVar54 != 3);
      bVar26 = false;
    }
    else {
      lVar29 = *(long *)(DAT_710532f730 + 8);
      local_2270._0_4_ = 0xffffffff;
      local_2270._4_4_ = 0xffffffff;
      uStack_221c = 0;
      local_2218 = 0;
      local_2214[0] = 0;
      local_1e14 = local_1e14 & 0xffffff00;
      local_2260 = 0;
      abStack_225c[0] = 0;
      local_2268 = 0;
      uStack_2266 = 0;
      uStack_2265 = 0;
      uStack_2264 = 0;
      uStack_2263 = 0;
      uStack_2262 = 0;
      local_1e08 = 0;
      local_1e00[0] = 0;
      local_1dd0 = 0;
      cStack_1dcf = 0;
      uStack_1dce = 0;
      uStack_1e10 = 0xffffffff;
      uStack_1e0c = 0xffffffff;
      uStack_1dcc = 0x3c;
      bStack_1dca = 3;
      bStack_1dc9 = 5;
      cStack_1dc8 = 0;
      uStack_1dc7 = 0x200;
      cStack_1dc5 = 0;
      uStack_1dc4 = 0;
      uStack_1dc2 = 10;
      cStack_1dc0 = 0;
      uStack_1dbf = 0x101;
      cStack_1dbd = 0;
      uStack_1dbc = 0x103;
      local_1dba = 0x100;
      local_1db8 = 2;
      auStack_1da8[1] = 0xffffffff;
      auStack_1da8[2] = 0xffffffff;
      local_1dac = 0xffffffff;
      auStack_1da8[0] = 0xffffffff;
      local_1db4 = 0xffffffffffffffff;
      auStack_1da8[3] = 0xffffffff;
      if (DAT_710532f730 != 0) {
        lVar62 = *(long *)(DAT_710532f730 + 8);
        lVar57 = *(long *)(lVar62 + 0x178);
        uVar32 = FUN_71032b23e0(*(long *)(lVar57 + 8),0xd56784f97);
        uVar47 = FUN_71032b1e40(lVar57,uVar32);
        if (-1 < (int)uVar47) {
          uVar32 = FUN_71032b1e40(*(long *)(lVar62 + 0x178),uVar32);
          uVar47 = uVar32 >> 5 & 0x7ffffff;
          auStack_1da8[uVar47] =
               auStack_1da8[uVar47] & (1 << (ulong)((uint)uVar32 & 0x1f) ^ 0xffffffffU);
        }
      }
      local_2748._0_4_ = 0xffffffff;
      local_2748._4_4_ = 0xffffffff;
      local_26f4 = 0;
      local_26ec[0] = 0;
      local_22ec = local_22ec & 0xffffff00;
      local_2738 = 0;
      uStack_2734 = uStack_2734 & 0xffffff00;
      local_2740 = 0;
      uStack_273c = 0;
      uStack_22e8 = 0xffffffff;
      local_22e4 = 0xffffffff;
      local_22e0 = 0;
      local_22d8[0] = 0;
      local_22a8 = 0;
      uStack_22a7 = 0;
      uStack_22a6 = 0;
      uStack_22a4 = 0x3c;
      uStack_22a2 = 0x503;
      local_22a0 = 0x20000;
      uStack_229a = 10;
      local_2298 = 0x10300010100;
      uStack_2292 = 0x100;
      local_2290 = 2;
      auStack_2280[1] = 0xffffffff;
      auStack_2280[2] = 0xffffffff;
      local_2284 = 0xffffffff;
      auStack_2280[0] = 0xffffffff;
      local_228c = 0xffffffffffffffff;
      auStack_2280[3] = 0xffffffff;
      if (lVar43 != 0) {
        lVar43 = *(long *)(lVar43 + 8);
        lVar57 = *(long *)(lVar43 + 0x178);
        uVar32 = FUN_71032b23e0(*(long *)(lVar57 + 8),0xd56784f97);
        uVar47 = FUN_71032b1e40(lVar57,uVar32);
        if (-1 < (int)uVar47) {
          uVar32 = FUN_71032b1e40(*(long *)(lVar43 + 0x178),uVar32);
          uVar47 = uVar32 >> 5 & 0x7ffffff;
          auStack_2280[uVar47] =
               auStack_2280[uVar47] & (1 << (ulong)((uint)uVar32 & 0x1f) ^ 0xffffffffU);
        }
      }
      uVar42 = 0x811c9dc5;
      local_2270._0_4_ = (uint)local_2748;
      local_2270._4_4_ = local_2748._4_4_;
      local_2268 = (undefined2)local_2740;
      uStack_2266 = (undefined1)(local_2740 >> 0x10);
      uStack_2265 = (undefined1)(local_2740 >> 0x18);
      for (uVar32 = 0; *(byte *)((long)&uStack_2734 + uVar32) != 0; uVar32 = uVar32 + 2) {
        abStack_225c[uVar32] = *(byte *)((long)&uStack_2734 + uVar32);
        if (0x3e < (int)uVar32 + 1U) {
          uVar32 = (ulong)((int)uVar32 + 1);
          break;
        }
        bVar10 = *(byte *)((long)&uStack_2734 + uVar32 + 1);
        if (bVar10 == 0) {
          uVar32 = uVar32 + 1;
          break;
        }
        abStack_225c[uVar32 + 1] = bVar10;
      }
      abStack_225c[uVar32 & 0xffffffff] = 0;
      local_2260 = (int)uVar32;
      uVar41 = (uint)abStack_225c[0];
      uVar53 = uVar42;
      if (abStack_225c[0] != 0) {
        pbVar46 = abStack_225c;
        do {
          pbVar46 = pbVar46 + 1;
          uVar53 = uVar53 * 0x89 ^ uVar41;
          uVar41 = (uint)*pbVar46;
        } while (uVar41 != 0);
      }
      uStack_2264 = (undefined1)uVar53;
      uStack_2263 = (undefined1)(uVar53 >> 8);
      uStack_2262 = (undefined2)(uVar53 >> 0x10);
      puVar52 = local_2214 + 1;
      for (uVar32 = 0; local_26ec[uVar32] != 0; uVar32 = uVar32 + 2) {
        puVar52[-1] = local_26ec[uVar32];
        if (0x1fe < (int)uVar32 + 1U) {
          uVar32 = (ulong)((int)uVar32 + 1);
          break;
        }
        if (local_26ec[uVar32 + 1] == 0) {
          uVar32 = uVar32 + 1;
          break;
        }
        *puVar52 = local_26ec[uVar32 + 1];
        puVar52 = puVar52 + 2;
      }
      local_2214[uVar32 & 0xffffffff] = 0;
      local_2218 = (int)uVar32;
      uVar53 = (uint)local_2214[0];
      if (local_2214[0] != 0) {
        puVar52 = local_2214;
        do {
          puVar52 = puVar52 + 1;
          uVar42 = uVar42 * 0x89 ^ uVar53;
          uVar53 = (uint)*puVar52;
        } while (uVar53 != 0);
      }
      uStack_1e0c = local_22e4;
      local_1e14 = local_22ec;
      uStack_1e10 = uStack_22e8;
      uStack_221c = uVar42;
      FUN_7101696040((uint *)&local_1e08,local_22d8);
      local_1dd0 = local_22a8;
      cStack_1dcf = uStack_22a7;
      uStack_1dce = uStack_22a6;
      uStack_1dcc = uStack_22a4;
      bStack_1dca = (byte)uStack_22a2;
      bStack_1dc9 = (byte)((ushort)uStack_22a2 >> 8);
      cStack_1dc8 = (char)local_22a0;
      uStack_1dc7 = (undefined2)((uint6)local_22a0 >> 8);
      cStack_1dc5 = (char)((uint6)local_22a0 >> 0x18);
      uStack_1dc4 = (undefined2)((uint6)local_22a0 >> 0x20);
      uStack_1dc2 = uStack_229a;
      cStack_1dc0 = (char)local_2298;
      uStack_1dbf = (undefined2)((uint6)local_2298 >> 8);
      cStack_1dbd = (char)((uint6)local_2298 >> 0x18);
      uStack_1dbc = (undefined2)((uint6)local_2298 >> 0x20);
      local_1dba = uStack_2292;
      local_1db8 = local_2290;
      local_1dac = local_2284;
      local_1db4 = local_228c;
      auStack_1da8[0] = auStack_2280[0];
      auStack_1da8[1] = auStack_2280[1];
      auStack_1da8[2] = auStack_2280[2];
      auStack_1da8[3] = auStack_2280[3];
      if (((DAT_71053144d8 & 1) == 0) &&
         (iVar27 = __cxa_guard_acquire(&DAT_71053144d8), iVar27 != 0)) {
        FUN_7101764000();
        FUN_71000001c0();
        __cxa_guard_release(&DAT_71053144d8);
      }
      uVar42 = DAT_71053050f0 & 0x7f000000;
      bVar26 = DAT_71053050f4 != '\0';
      if ((int)uVar54 < 0x2030300) {
        if (uVar54 == 0x2020000) {
          pppplVar56 = (long ****)0x1;
          ppppbVar37 = (byte ****)0x1;
        }
        else if (uVar54 == 0x2030200) {
          ppppbVar37 = (byte ****)0x1;
          pppplVar56 = (long ****)&DAT_00000004;
        }
        else {
LAB_710186d8c0:
          pppplVar56 = (long ****)0x0;
          ppppbVar37 = (byte ****)0x0;
        }
      }
      else if (uVar54 == 0x2030300) {
        ppppbVar37 = (byte ****)0x0;
        pppplVar56 = (long ****)0x3;
      }
      else {
        if (uVar54 != 0x2040000) goto LAB_710186d8c0;
        ppppbVar37 = (byte ****)0x0;
        pppplVar56 = (long ****)0x2;
      }
      FUN_7103298680((uint *)&local_27b8,*(long *)(lVar29 + 0x1a8),(uint)pppplVar56,(char)ppppbVar37
                    );
      if (bVar26 || uVar42 == 0x7000000) {
        local_2758 = '\0';
        uStack_2753 = 1;
      }
      uVar42 = 0x811c9dc5;
      local_2268 = (undefined2)((ulong)local_27b8 >> 0x20);
      uStack_2266 = (undefined1)((ulong)local_27b8 >> 0x30);
      uStack_2265 = (undefined1)((ulong)local_27b8 >> 0x38);
      local_2270._4_4_ = (uint)local_27b8;
      for (uVar32 = 0; local_27a8[uVar32] != 0; uVar32 = uVar32 + 2) {
        abStack_225c[uVar32] = local_27a8[uVar32];
        if (0x3e < (int)uVar32 + 1U) {
          uVar32 = (ulong)((int)uVar32 + 1);
          break;
        }
        if (local_27a8[uVar32 + 1] == 0) {
          uVar32 = uVar32 + 1;
          break;
        }
        abStack_225c[uVar32 + 1] = local_27a8[uVar32 + 1];
      }
      abStack_225c[uVar32 & 0xffffffff] = 0;
      local_2260 = (int)uVar32;
      uVar41 = (uint)abStack_225c[0];
      uVar53 = uVar42;
      if (abStack_225c[0] != 0) {
        pbVar46 = abStack_225c;
        do {
          pbVar46 = pbVar46 + 1;
          uVar53 = uVar53 * 0x89 ^ uVar41;
          uVar41 = (uint)*pbVar46;
        } while (uVar41 != 0);
      }
      uStack_2264 = (undefined1)uVar53;
      uStack_2263 = (undefined1)(uVar53 >> 8);
      uStack_2262 = (undefined2)(uVar53 >> 0x10);
      local_1dd0 = (char)local_27a8._64_8_;
      cStack_1dcf = SUB81(local_27a8._64_8_,1);
      uStack_1dce = SUB81(local_27a8._64_8_,2);
      uStack_1dcd = SUB81(local_27a8._64_8_,3);
      uStack_1dcc = SUB82(local_27a8._64_8_,4);
      bStack_1dca = SUB81(local_27a8._64_8_,6);
      bStack_1dc9 = SUB81(local_27a8._64_8_,7);
      cStack_1dc8 = (char)local_27a8._72_8_;
      uStack_1dc7 = SUB82(local_27a8._72_8_,1);
      cStack_1dc5 = SUB81(local_27a8._72_8_,3);
      uStack_1dc4 = SUB82(local_27a8._72_8_,4);
      uStack_1dc2 = SUB82(local_27a8._72_8_,6);
      cStack_1dc0 = local_2758;
      uStack_1dbf = (undefined2)uStack_2757;
      cStack_1dbd = (char)((uint)uStack_2757 >> 0x10);
      uStack_1dbc = (undefined2)(CONCAT15(uStack_2753,CONCAT41(uStack_2757,local_2758)) >> 0x20);
      local_1dba = uStack_2752;
      if (local_2750 == '\0') {
        local_1dac = 0;
        local_1db4 = 0;
      }
      else {
        local_1dac = 0xffffffff;
        local_1db4 = 0xffffffffffffffff;
      }
      if (uVar54 == 0x7010200) {
        if (cStack_1dcf != '\0') {
          if (7 < bStack_1dca) {
            bStack_1dca = 7;
          }
          if ((cStack_1dcf == '\x02') && (8 < bStack_1dc9)) {
            bStack_1dc9 = 8;
          }
        }
        if (599 < uStack_1dcc - 1) {
          uStack_1dcc = 600;
        }
        if (cStack_1dc5 == '\x01') {
          cStack_1dc5 = '\0';
        }
        if (local_2758 != '\0') {
          cStack_1dc0 = '\0';
        }
        if (cStack_1dbd != '\0') {
          cStack_1dbd = '\0';
        }
        if (cStack_1dc8 != '\0') {
          cStack_1dc8 = '\0';
        }
      }
      puVar44 = *(undefined8 **)(param_1 + 0x1c8);
      if (puVar44 == *(undefined8 **)(param_1 + 0x1d0)) {
        FUN_710186f2c0(plVar55,&local_2270,pppplVar56,ppppbVar37,param_5,param_6,param_7,param_8);
      }
      else {
        *puVar44 = CONCAT44((uint)local_27b8,(uint)local_2270);
        *(int *)(puVar44 + 1) = (int)((ulong)local_27b8 >> 0x20);
        *(undefined4 *)((long)puVar44 + 0xc) = 0;
        for (uVar32 = 0; abStack_225c[uVar32] != 0; uVar32 = uVar32 + 2) {
          *(byte *)((long)puVar44 + uVar32 + 0x14) = abStack_225c[uVar32];
          if (0x3e < (int)uVar32 + 1U) {
            uVar32 = (ulong)((int)uVar32 + 1);
            break;
          }
          if (abStack_225c[uVar32 + 1] == 0) {
            uVar32 = uVar32 + 1;
            break;
          }
          *(byte *)((long)puVar44 + uVar32 + 0x15) = abStack_225c[uVar32 + 1];
        }
        *(undefined1 *)((long)puVar44 + (uVar32 & 0xffffffff) + 0x14) = 0;
        *(int *)(puVar44 + 2) = (int)uVar32;
        uVar53 = (uint)*(byte *)((long)puVar44 + 0x14);
        uVar54 = uVar42;
        if (*(byte *)((long)puVar44 + 0x14) != 0) {
          pbVar46 = (byte *)((long)puVar44 + 0x15);
          do {
            uVar54 = uVar54 * 0x89 ^ uVar53;
            uVar53 = (uint)*pbVar46;
            pbVar46 = pbVar46 + 1;
          } while (uVar53 != 0);
        }
        *(uint *)((long)puVar44 + 0xc) = uVar54;
        *(undefined4 *)((long)puVar44 + 0x54) = 0;
        for (uVar32 = 0; local_2214[uVar32] != 0; uVar32 = uVar32 + 2) {
          *(ushort *)((long)puVar44 + uVar32 * 2 + 0x5c) = local_2214[uVar32];
          if (0x1fe < (int)uVar32 + 1U) {
            uVar32 = (ulong)((int)uVar32 + 1);
            break;
          }
          if (local_2214[uVar32 + 1] == 0) {
            uVar32 = uVar32 + 1;
            break;
          }
          *(ushort *)((long)puVar44 + uVar32 * 2 + 0x5e) = local_2214[uVar32 + 1];
        }
        *(undefined2 *)((long)puVar44 + (uVar32 & 0xffffffff) * 2 + 0x5c) = 0;
        *(int *)(puVar44 + 0xb) = (int)uVar32;
        uVar54 = (uint)*(ushort *)((long)puVar44 + 0x5c);
        if (*(ushort *)((long)puVar44 + 0x5c) != 0) {
          puVar52 = (ushort *)((long)puVar44 + 0x5e);
          do {
            uVar42 = uVar42 * 0x89 ^ uVar54;
            uVar54 = (uint)*puVar52;
            puVar52 = puVar52 + 1;
          } while (uVar54 != 0);
        }
        *(uint *)((long)puVar44 + 0x54) = uVar42;
        *(undefined4 *)((long)puVar44 + 0x464) = uStack_1e0c;
        *(ulong *)((long)puVar44 + 0x45c) = CONCAT44(uStack_1e10,local_1e14);
        *(undefined4 *)(puVar44 + 0x8d) = 0;
        FUN_7101696040((uint *)(puVar44 + 0x8d),local_1e00);
        puVar44[0x96] =
             CONCAT26(local_1dba,
                      CONCAT24(uStack_1dbc,CONCAT13(cStack_1dbd,CONCAT21(uStack_1dbf,cStack_1dc0))))
        ;
        puVar44[0x95] =
             CONCAT26(uStack_1dc2,
                      CONCAT24(uStack_1dc4,CONCAT13(cStack_1dc5,CONCAT21(uStack_1dc7,cStack_1dc8))))
        ;
        puVar44[0x94] =
             CONCAT17(bStack_1dc9,
                      CONCAT16(bStack_1dca,
                               CONCAT24(uStack_1dcc,
                                        CONCAT13(uStack_1dcd,
                                                 CONCAT12(uStack_1dce,
                                                          CONCAT11(cStack_1dcf,local_1dd0))))));
        *(undefined1 *)(puVar44 + 0x97) = local_1db8;
        *(undefined4 *)((long)puVar44 + 0x4c4) = local_1dac;
        *(undefined8 *)((long)puVar44 + 0x4bc) = local_1db4;
        puVar44[0x9a] = CONCAT44(auStack_1da8[3],auStack_1da8[2]);
        puVar44[0x99] = CONCAT44(auStack_1da8[1],auStack_1da8[0]);
        *(long *)(param_1 + 0x1c8) = *(long *)(param_1 + 0x1c8) + 0x4d8;
      }
      if (local_1dd0 == '\x01') {
        puVar44 = (undefined8 *)(*DAT_7105314510 + 0x28);
      }
      else if (local_1dd0 == '\x02') {
        puVar44 = (undefined8 *)(*DAT_7105314510 + 0x38);
      }
      else {
        puVar44 = (undefined8 *)(*DAT_7105314510 + 0x18);
      }
      puVar44 = (undefined8 *)*puVar44;
      uVar49 = FUN_71017dc700(*(char **)*puVar44);
      lVar43 = 0;
      do {
        local_2748._0_4_ = 0xffffffff;
        local_2748._4_4_ = -1;
        local_26f4 = 0;
        local_26ec[0] = 0;
        local_22ec = local_22ec & 0xffffff00;
        local_2738 = 0;
        uStack_2734 = uStack_2734 & 0xffffff00;
        local_2740 = 0;
        uStack_273c = 0;
        uStack_22a4 = 0x3c;
        uStack_22e8 = 0xffffffff;
        local_22e4 = 0xffffffff;
        local_22e0 = 0;
        local_22d8[0] = 0;
        local_22a8 = '\0';
        uStack_22a7 = 0;
        uStack_22a6 = 0;
        uStack_22a2 = 0x503;
        local_22a0 = 0x20000;
        uStack_229a = 10;
        local_2298 = 0x10300010100;
        uStack_2292 = 0x100;
        local_2290 = 2;
        auStack_2280[3] = 0xffffffff;
        local_228c = 0xffffffffffffffff;
        local_2284 = 0xffffffff;
        auStack_2280[0] = 0xffffffff;
        auStack_2280[1] = 0xffffffff;
        auStack_2280[2] = 0xffffffff;
        if (DAT_710532f730 != 0) {
          lVar57 = *(long *)(DAT_710532f730 + 8);
          lVar29 = *(long *)(lVar57 + 0x178);
          uVar32 = FUN_71032b23e0(*(long *)(lVar29 + 8),0xd56784f97);
          uVar47 = FUN_71032b1e40(lVar29,uVar32);
          if (-1 < (int)uVar47) {
            uVar32 = FUN_71032b1e40(*(long *)(lVar57 + 0x178),uVar32);
            uVar47 = uVar32 >> 5 & 0x7ffffff;
            auStack_2280[uVar47] =
                 auStack_2280[uVar47] & (1 << (ulong)((uint)uVar32 & 0x1f) ^ 0xffffffffU);
          }
        }
        ppuVar34 = (undefined **)&local_2748;
        uVar32 = FUN_71017dcc40(puVar44,(uint)lVar43,(uint *)ppuVar34);
        if (((uVar32 & 1) != 0) && (local_22a8 == local_1dd0)) {
          puVar59 = *(undefined8 **)(param_1 + 0x1c8);
          if (puVar59 == *(undefined8 **)(param_1 + 0x1d0)) {
            FUN_710186f2c0(plVar55,&local_2748,(long ****)ppuVar34,ppppbVar37,param_5,param_6,
                           param_7,param_8);
          }
          else {
            uVar54 = 0x811c9dc5;
            *puVar59 = CONCAT44(local_2748._4_4_,(uint)local_2748);
            *(uint *)(puVar59 + 1) = local_2740;
            *(undefined4 *)((long)puVar59 + 0xc) = 0;
            uVar32 = 0;
            do {
              uVar47 = uVar32;
              if (*(char *)((long)&uStack_2734 + uVar32) == '\0') break;
              *(char *)((long)puVar59 + uVar32 + 0x14) = *(char *)((long)&uStack_2734 + uVar32);
              cVar9 = *(char *)((long)&uStack_2734 + uVar32 + 1);
              if (cVar9 == '\0') {
                uVar47 = uVar32 + 1;
                break;
              }
              *(char *)((long)puVar59 + uVar32 + 0x15) = cVar9;
              cVar9 = *(char *)((long)&uStack_2734 + uVar32 + 2);
              if (cVar9 == '\0') {
                uVar47 = uVar32 + 2;
                break;
              }
              uVar47 = uVar32 + 3;
              *(char *)((long)puVar59 + uVar32 + 0x16) = cVar9;
              uVar32 = uVar47;
            } while ((uint)uVar47 < 0x3f);
            *(undefined1 *)((long)puVar59 + (uVar47 & 0xffffffff) + 0x14) = 0;
            *(int *)(puVar59 + 2) = (int)uVar47;
            uVar53 = (uint)*(byte *)((long)puVar59 + 0x14);
            uVar42 = uVar54;
            if (*(byte *)((long)puVar59 + 0x14) != 0) {
              pbVar46 = (byte *)((long)puVar59 + 0x15);
              do {
                uVar42 = uVar42 * 0x89 ^ uVar53;
                uVar53 = (uint)*pbVar46;
                pbVar46 = pbVar46 + 1;
              } while (uVar53 != 0);
            }
            *(uint *)((long)puVar59 + 0xc) = uVar42;
            *(undefined4 *)((long)puVar59 + 0x54) = 0;
            puVar52 = (ushort *)((long)puVar59 + 0x62);
            for (uVar32 = 0; local_26ec[uVar32] != 0; uVar32 = uVar32 + 4) {
              puVar52[-3] = local_26ec[uVar32];
              if (local_26ec[uVar32 + 1] == 0) {
                uVar32 = uVar32 | 1;
                break;
              }
              puVar52[-2] = local_26ec[uVar32 + 1];
              if (local_26ec[uVar32 + 2] == 0) {
                uVar32 = uVar32 | 2;
                break;
              }
              puVar52[-1] = local_26ec[uVar32 + 2];
              if (0x1fe < (int)uVar32 + 3U) {
                uVar32 = (ulong)((int)uVar32 + 3);
                break;
              }
              if (local_26ec[uVar32 + 3] == 0) {
                uVar32 = uVar32 | 3;
                break;
              }
              *puVar52 = local_26ec[uVar32 + 3];
              puVar52 = puVar52 + 4;
            }
            *(undefined2 *)((long)puVar59 + (uVar32 & 0xffffffff) * 2 + 0x5c) = 0;
            *(int *)(puVar59 + 0xb) = (int)uVar32;
            uVar42 = (uint)*(ushort *)((long)puVar59 + 0x5c);
            if (*(ushort *)((long)puVar59 + 0x5c) != 0) {
              puVar52 = (ushort *)((long)puVar59 + 0x5e);
              do {
                uVar54 = uVar54 * 0x89 ^ uVar42;
                uVar42 = (uint)*puVar52;
                puVar52 = puVar52 + 1;
              } while (uVar42 != 0);
            }
            *(uint *)((long)puVar59 + 0x54) = uVar54;
            *(undefined4 *)((long)puVar59 + 0x464) = local_22e4;
            *(ulong *)((long)puVar59 + 0x45c) = CONCAT44(uStack_22e8,local_22ec);
            *(undefined4 *)(puVar59 + 0x8d) = 0;
            FUN_7101696040((uint *)(puVar59 + 0x8d),local_22d8);
            puVar59[0x96] = CONCAT26(uStack_2292,local_2298);
            puVar59[0x95] = CONCAT26(uStack_229a,local_22a0);
            puVar59[0x94] =
                 CONCAT26(uStack_22a2,
                          CONCAT24(uStack_22a4,
                                   CONCAT13(uStack_22a5,
                                            CONCAT12(uStack_22a6,CONCAT11(uStack_22a7,local_22a8))))
                         );
            *(undefined1 *)(puVar59 + 0x97) = local_2290;
            *(undefined8 *)((long)puVar59 + 0x4bc) = local_228c;
            *(undefined4 *)((long)puVar59 + 0x4c4) = local_2284;
            puVar59[0x9a] = CONCAT44(auStack_2280[3],auStack_2280[2]);
            puVar59[0x99] = CONCAT44(auStack_2280[1],auStack_2280[0]);
            *(long *)(param_1 + 0x1c8) = *(long *)(param_1 + 0x1c8) + 0x4d8;
          }
        }
        lVar43 = lVar43 + 1;
      } while (lVar43 != 0x1e);
      bVar26 = (int)uVar49 != -1;
    }
    if (((DAT_71053144d8 & 1) == 0) && (iVar27 = __cxa_guard_acquire(&DAT_71053144d8), iVar27 != 0))
    {
      FUN_7101764000();
      ppuVar34 = &PTR_LOOP_7104f17000;
      FUN_71000001c0();
      __cxa_guard_release(&DAT_71053144d8);
    }
    uVar54 = DAT_71053050f0;
    lVar29 = *(long *)(param_1 + 0x1c8);
    for (lVar43 = *(long *)(param_1 + 0x1c0); lVar43 != lVar29; lVar43 = lVar43 + 0x4d8) {
      FUN_71017ab440(lVar43);
      bVar25 = bVar26;
      if (*(int *)(lVar43 + 8) != 0) {
        if (uVar54 == 0x2030300) {
          if (((*(char *)(lVar43 + 0x4a1) != '\0') && (*(short *)(lVar43 + 0x4a4) != 0)) &&
             (*(char *)(lVar43 + 0x4a8) == '\0')) {
            cVar9 = *(char *)(lVar43 + 0x4a9);
joined_r0x00710186e054:
            if (cVar9 == '\0') goto LAB_710186e060;
          }
        }
        else {
          if (uVar54 != 0x2030200) {
LAB_710186e060:
            bVar25 = true;
            goto LAB_710186e064;
          }
          if (((*(char *)(lVar43 + 0x4a1) == '\x01') && (*(char *)(lVar43 + 0x4a9) == '\0')) &&
             (*(char *)(lVar43 + 0x4ab) == '\0')) {
            cVar9 = *(char *)(lVar43 + 0x4b0);
            goto joined_r0x00710186e054;
          }
        }
        bVar25 = false;
      }
LAB_710186e064:
      *(bool *)(lVar43 + 0x45c) = bVar25;
    }
    uVar54 = 0x811c9dc5;
    uStack_2264 = 0;
    uStack_2263 = 0;
    uStack_2262 = 0;
    local_2268 = (undefined2)DAT_7105305100._4_4_;
    uStack_2266 = (undefined1)((uint)DAT_7105305100._4_4_ >> 0x10);
    uStack_2265 = (undefined1)((uint)DAT_7105305100._4_4_ >> 0x18);
    local_2270._0_4_ = (uint)_DAT_71053050fc;
    local_2270._4_4_ = (uint)((ulong)_DAT_71053050fc >> 0x20);
    for (uVar32 = 0; (&DAT_7105305110)[uVar32] != 0; uVar32 = uVar32 + 2) {
      abStack_225c[uVar32] = (&DAT_7105305110)[uVar32];
      if (0x3e < (int)uVar32 + 1U) {
        uVar32 = (ulong)((int)uVar32 + 1);
        break;
      }
      if ((&DAT_7105305111)[uVar32] == 0) {
        uVar32 = uVar32 + 1;
        break;
      }
      abStack_225c[uVar32 + 1] = (&DAT_7105305111)[uVar32];
    }
    abStack_225c[uVar32 & 0xffffffff] = 0;
    local_2260 = (int)uVar32;
    uVar53 = (uint)abStack_225c[0];
    uVar42 = uVar54;
    if (abStack_225c[0] != 0) {
      pbVar46 = abStack_225c;
      do {
        pbVar46 = pbVar46 + 1;
        uVar42 = uVar42 * 0x89 ^ uVar53;
        uVar53 = (uint)*pbVar46;
      } while (uVar53 != 0);
    }
    uStack_2264 = (undefined1)uVar42;
    uStack_2263 = (undefined1)(uVar42 >> 8);
    uStack_2262 = (undefined2)(uVar42 >> 0x10);
    uStack_221c = 0;
    for (uVar32 = 0; (&DAT_7105305158)[uVar32] != 0; uVar32 = uVar32 + 2) {
      local_2214[uVar32] = (&DAT_7105305158)[uVar32];
      if (0x1fe < (int)uVar32 + 1U) {
        uVar32 = (ulong)((int)uVar32 + 1);
        break;
      }
      if ((&DAT_710530515a)[uVar32] == 0) {
        uVar32 = uVar32 + 1;
        break;
      }
      local_2214[uVar32 + 1] = (&DAT_710530515a)[uVar32];
    }
    local_2214[uVar32 & 0xffffffff] = 0;
    uVar42 = (uint)local_2214[0];
    local_2218 = (int)uVar32;
    if (local_2214[0] != 0) {
      puVar52 = local_2214;
      do {
        puVar52 = puVar52 + 1;
        uVar54 = uVar54 * 0x89 ^ uVar42;
        uVar42 = (uint)*puVar52;
      } while (uVar42 != 0);
    }
    local_1e14 = (uint)DAT_7105305558;
    uStack_1e10 = (undefined4)((ulong)DAT_7105305558 >> 0x20);
    local_1e08 = local_1e08 & 0xffffffff00000000;
    uStack_221c = uVar54;
    uStack_1e0c = DAT_7105305560;
    FUN_7101696040((uint *)&local_1e08,&DAT_710530556c);
    cStack_1dc0 = (char)DAT_71053055ac;
    uStack_1dbf = (undefined2)((ulong)DAT_71053055ac >> 8);
    cStack_1dbd = (char)((ulong)DAT_71053055ac >> 0x18);
    uStack_1dbc = (undefined2)((ulong)DAT_71053055ac >> 0x20);
    local_1dba = (undefined2)((ulong)DAT_71053055ac >> 0x30);
    cStack_1dc8 = (char)DAT_71053055a4;
    uStack_1dc7 = (undefined2)((ulong)DAT_71053055a4 >> 8);
    cStack_1dc5 = (char)((ulong)DAT_71053055a4 >> 0x18);
    uStack_1dc4 = (undefined2)((ulong)DAT_71053055a4 >> 0x20);
    uStack_1dc2 = (undefined2)((ulong)DAT_71053055a4 >> 0x30);
    local_1dd0 = (char)DAT_710530559c;
    cStack_1dcf = (char)((ulong)DAT_710530559c >> 8);
    uStack_1dce = (undefined1)((ulong)DAT_710530559c >> 0x10);
    uStack_1dcd = (undefined1)((ulong)DAT_710530559c >> 0x18);
    uStack_1dcc = (ushort)((ulong)DAT_710530559c >> 0x20);
    bStack_1dca = (byte)((ulong)DAT_710530559c >> 0x30);
    bStack_1dc9 = (byte)((ulong)DAT_710530559c >> 0x38);
    local_1db8 = DAT_71053055b4;
    local_1db4 = DAT_71053055b8;
    local_1dac = DAT_71053055c0;
    auStack_1da8[2] = (uint)DAT_71053055cc;
    auStack_1da8[3] = (uint)((ulong)DAT_71053055cc >> 0x20);
    auStack_1da8[0] = (uint)DAT_71053055c4;
    auStack_1da8[1] = (uint)((ulong)DAT_71053055c4 >> 0x20);
    if (((uint)local_2270 == 0xffffffff) && (local_2270._4_4_ == -1)) {
LAB_710186e4f8:
      uVar54 = 0xffffffff;
      *(undefined4 *)(param_1 + 0x1d8) = 0xffffffff;
    }
    else {
      puVar35 = (uint *)(param_1 + 0x1d8);
      *puVar35 = 0;
      puVar44 = *(undefined8 **)(param_1 + 0x1c0);
      puVar59 = *(undefined8 **)(param_1 + 0x1c8);
      if (puVar44 == puVar59) {
        uVar54 = 0;
      }
      else {
        do {
          uVar54 = 0x811c9dc5;
          local_2740 = *(uint *)(puVar44 + 1);
          local_2748._0_4_ = (uint)*puVar44;
          local_2748._4_4_ = (int)((ulong)*puVar44 >> 0x20);
          uVar32 = 0;
          do {
            cVar9 = *(char *)((long)puVar44 + uVar32 + 0x14);
            uVar47 = uVar32;
            if (cVar9 == '\0') break;
            *(char *)((long)&uStack_2734 + uVar32) = cVar9;
            cVar9 = *(char *)((long)puVar44 + uVar32 + 0x15);
            if (cVar9 == '\0') {
              uVar47 = uVar32 + 1;
              break;
            }
            *(char *)((long)&uStack_2734 + uVar32 + 1) = cVar9;
            cVar9 = *(char *)((long)puVar44 + uVar32 + 0x16);
            if (cVar9 == '\0') {
              uVar47 = uVar32 + 2;
              break;
            }
            uVar47 = uVar32 + 3;
            *(char *)((long)&uStack_2734 + uVar32 + 2) = cVar9;
            uVar32 = uVar47;
          } while ((uint)uVar47 < 0x3f);
          *(undefined1 *)((long)&uStack_2734 + (uVar47 & 0xffffffff)) = 0;
          local_2738 = (undefined4)uVar47;
          uVar42 = uStack_2734 & 0xff;
          pbVar46 = (byte *)((long)&uStack_2734 + 1);
          uStack_273c = uVar54;
          if ((char)uStack_2734 != '\0') {
            do {
              uStack_273c = uStack_273c * 0x89 ^ uVar42;
              uVar42 = (uint)*pbVar46;
              pbVar46 = pbVar46 + 1;
            } while (uVar42 != 0);
          }
          uVar32 = 0;
          puVar52 = local_26ec + 3;
          while (uVar13 = *(ushort *)((long)puVar44 + uVar32 * 2 + 0x5c), uVar13 != 0) {
            puVar52[-3] = uVar13;
            uVar13 = *(ushort *)((long)puVar44 + uVar32 * 2 + 0x5e);
            if (uVar13 == 0) {
              uVar32 = uVar32 | 1;
              break;
            }
            puVar52[-2] = uVar13;
            uVar13 = *(ushort *)((long)puVar44 + uVar32 * 2 + 0x60);
            if (uVar13 == 0) {
              uVar32 = uVar32 | 2;
              break;
            }
            puVar52[-1] = uVar13;
            if (0x1fe < (int)uVar32 + 3U) {
              uVar32 = (ulong)((int)uVar32 + 3);
              break;
            }
            uVar13 = *(ushort *)((long)puVar44 + uVar32 * 2 + 0x62);
            if (uVar13 == 0) {
              uVar32 = uVar32 | 3;
              break;
            }
            uVar32 = uVar32 + 4;
            *puVar52 = uVar13;
            puVar52 = puVar52 + 4;
          }
          local_26ec[uVar32 & 0xffffffff] = 0;
          uVar42 = (uint)local_26ec[0];
          puVar52 = local_26ec;
          if (local_26ec[0] != 0) {
            do {
              uVar54 = uVar54 * 0x89 ^ uVar42;
              uVar42 = (uint)puVar52[1];
              puVar52 = puVar52 + 1;
            } while (uVar42 != 0);
          }
          local_26f4 = CONCAT44((int)uVar32,uVar54);
          local_22e4 = *(undefined4 *)((long)puVar44 + 0x464);
          local_22ec = (uint)*(undefined8 *)((long)puVar44 + 0x45c);
          uStack_22e8 = (undefined4)((ulong)*(undefined8 *)((long)puVar44 + 0x45c) >> 0x20);
          local_22e0 = local_22e0 & 0xffffffff00000000;
          FUN_7101696040((uint *)&local_22e0,(ushort *)(puVar44 + 0x8e));
          uVar49 = puVar44[0x94];
          local_22a0 = (undefined6)puVar44[0x95];
          uStack_229a = (undefined2)((ulong)puVar44[0x95] >> 0x30);
          local_2298 = (undefined6)puVar44[0x96];
          uStack_2292 = (undefined2)((ulong)puVar44[0x96] >> 0x30);
          local_22a8 = (char)uVar49;
          uStack_22a7 = (undefined1)((ulong)uVar49 >> 8);
          uStack_22a6 = (undefined1)((ulong)uVar49 >> 0x10);
          uStack_22a5 = (undefined1)((ulong)uVar49 >> 0x18);
          uStack_22a4 = (undefined2)((ulong)uVar49 >> 0x20);
          uStack_22a2 = (undefined2)((ulong)uVar49 >> 0x30);
          local_2290 = *(undefined1 *)(puVar44 + 0x97);
          local_228c = *(undefined8 *)((long)puVar44 + 0x4bc);
          local_2284 = *(undefined4 *)((long)puVar44 + 0x4c4);
          auStack_2280[0] = (uint)puVar44[0x99];
          auStack_2280[1] = (uint)((ulong)puVar44[0x99] >> 0x20);
          auStack_2280[2] = (uint)puVar44[0x9a];
          auStack_2280[3] = (uint)((ulong)puVar44[0x9a] >> 0x20);
          if (((((uint)local_2270 == (uint)local_2748) && (local_2270._4_4_ == local_2748._4_4_)) &&
              (CONCAT13(uStack_2265,CONCAT12(uStack_2266,local_2268)) == local_2740)) &&
             (local_1dd0 == local_22a8)) {
            uVar54 = *puVar35;
            break;
          }
          puVar44 = puVar44 + 0x9b;
          uVar54 = *puVar35 + 1;
          *puVar35 = uVar54;
        } while (puVar44 != puVar59);
      }
      uVar47 = (*(long *)(param_1 + 0x1c8) - *(long *)(param_1 + 0x1c0) >> 3) * 0x2fe592fe592fe593;
      uVar32 = (ulong)(int)uVar54;
      if ((uVar47 < uVar32 || uVar47 - uVar32 == 0) ||
         ((*(int *)(param_1 + 0xba0) == 0 &&
          (*(int *)(*(long *)(param_1 + 0x1c0) + uVar32 * 0x4d8 + 8) == 0)))) goto LAB_710186e4f8;
    }
    if (*(int *)param_3 == 0) {
      uVar42 = 0;
    }
    else {
      uVar42 = (uint)(*(int *)(param_1 + 0x178) != 8);
    }
    lVar43 = *(long *)(param_1 + 0x1a0);
    local_27c8 = 0;
    local_27c0 = 0;
    local_27d0 = 0;
    puVar44 = *(undefined8 **)(param_1 + 0x1c0);
    puVar59 = *(undefined8 **)(param_1 + 0x1c8);
    pppbVar14 = (byte ***)((long)puVar59 - (long)puVar44);
    if (pppbVar14 != (byte ***)0x0) {
      if (0x34da034da034da < (ulong)(((long)pppbVar14 >> 3) * 0x2fe592fe592fe593)) {
                    /* WARNING: Subroutine does not return */
        std::__vector_base_common<true>::__throw_length_error();
      }
      uVar32 = FUN_710392e290(0x10,pppbVar14,(long ****)ppuVar34,ppppbVar37,param_5,param_6,param_7,
                              param_8);
      if (uVar32 == 0) {
        if (DAT_7105332f00 != (long *)0x0) {
          local_2748._0_4_ = 0;
          pppplVar56 = (long ****)&local_2270;
          local_2270 = pppbVar14;
          uVar32 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_2748);
          if ((uVar32 & 1) != 0) {
            uVar32 = FUN_710392e290(0x10,pppbVar14,pppplVar56,ppppbVar37,param_5,param_6,param_7,
                                    param_8);
            if (uVar32 != 0) goto LAB_710186e5c0;
          }
        }
        uVar32 = 0;
      }
LAB_710186e5c0:
      local_27c0 = uVar32 + ((long)pppbVar14 >> 3) * 8;
      local_27d0 = uVar32;
      local_27c8 = uVar32;
      FUN_710186f090((long)&local_27d0,puVar44,puVar59);
      uVar54 = *(uint *)(param_1 + 0x1d8);
    }
    uVar53 = DAT_71053050f8;
    if ((DAT_71053144d8 & 1) == 0) {
      iVar27 = __cxa_guard_acquire(&DAT_71053144d8);
      if (iVar27 != 0) {
        FUN_7101764000();
        FUN_71000001c0();
        __cxa_guard_release(&DAT_71053144d8);
      }
    }
    FUN_7101c29030(lVar43,&local_27d0,(long ****)(ulong)uVar53,(byte ****)(ulong)uVar54,
                   (long ****)(ulong)((uint)param_4 & 1),(ulong)(DAT_71053050f0 == 0x6010000),
                   (ulong)uVar42,param_8);
    if (local_27d0 != 0) {
      local_27c8 = local_27d0;
      FUN_710392eb40(local_27d0);
    }
    break;
  case 2:
    iVar27 = *(int *)param_3;
    uVar42 = 0x811c9dc5;
    uVar54 = (uint)param_4 ^ 1;
    local_2270._0_4_ = 0;
    local_2270._4_4_ = 0x13;
    local_2268 = 0x656d;
    uStack_2266 = 0x6c;
    uStack_2265 = 0x5f;
    uStack_2264 = 0x72;
    uStack_2263 = 0x75;
    uStack_2262 = 0x656c;
    local_2260 = 0x6964655f;
    abStack_225c[0] = 0x74;
    abStack_225c[1] = 0x5f;
    abStack_225c[2] = 0x74;
    abStack_225c[3] = 0x69;
    local_2258 = (undefined1 *)CONCAT44(local_2258._4_4_,0x656c74);
    uVar53 = 0x6d;
    lVar43 = 9;
    local_2270._0_4_ = uVar42;
    do {
      local_2270._0_4_ = (uint)local_2270 * 0x89 ^ uVar53;
      uVar53 = (uint)*(byte *)((long)&local_2270 + lVar43);
      lVar43 = lVar43 + 1;
    } while (uVar53 != 0);
    FUN_7101af90b0(*(long *)(*(long *)(param_1 + 400) + 0x80),(uint *)&local_2270,ppuVar34,
                   ppppbVar37,param_5,param_6,param_7,param_8);
    if ((*(int *)(param_1 + 0xbb0) == 1) ||
       ((*(int *)(param_1 + 0x1e4) != 0 &&
        ((*(int *)(param_1 + 0x1e4) != 3 || (*(int *)(param_1 + 0x1dc) == -1)))))) {
      lVar29 = *(long *)(*(long *)(param_1 + 400) + 0x80);
      local_2270._0_4_ = 0;
      local_2270._4_4_ = 0xd;
      local_2268 = 0x6e6d;
      uStack_2266 = 0x75;
      uStack_2265 = 0x5f;
      uStack_2264 = 0x66;
      uStack_2263 = 0x6f;
      uStack_2262 = 0x746f;
      local_2260 = 0x6f5f7265;
      abStack_225c[0] = 0x6b;
      abStack_225c[1] = 0;
      uVar53 = 0x6d;
      lVar43 = 9;
      local_2270._0_4_ = uVar42;
      do {
        local_2270._0_4_ = (uint)local_2270 * 0x89 ^ uVar53;
        uVar53 = (uint)*(byte *)((long)&local_2270 + lVar43);
        lVar43 = lVar43 + 1;
      } while (uVar53 != 0);
      iVar28 = 5;
    }
    else {
      lVar29 = *(long *)(*(long *)(param_1 + 400) + 0x80);
      local_2270._0_4_ = 0;
      local_2270._4_4_ = 0xf;
      local_2268 = 0x6e6d;
      uStack_2266 = 0x75;
      uStack_2265 = 0x5f;
      uStack_2264 = 0x66;
      uStack_2263 = 0x6f;
      uStack_2262 = 0x746f;
      local_2260 = 0x735f7265;
      abStack_225c[0] = 0x61;
      abStack_225c[1] = 0x76;
      abStack_225c[2] = 0x65;
      abStack_225c[3] = 0;
      uVar53 = 0x6d;
      lVar43 = 9;
      local_2270._0_4_ = uVar42;
      do {
        local_2270._0_4_ = (uint)local_2270 * 0x89 ^ uVar53;
        uVar53 = (uint)*(byte *)((long)&local_2270 + lVar43);
        lVar43 = lVar43 + 1;
      } while (uVar53 != 0);
      iVar28 = 10;
    }
    uStack_2262 = 0x746f;
    uStack_2263 = 0x6f;
    uStack_2264 = 0x66;
    uStack_2265 = 0x5f;
    uStack_2266 = 0x75;
    local_2268 = 0x6e6d;
    puVar35 = (uint *)&local_2270;
    FUN_7101af6200(lVar29,iVar28,puVar35);
    lVar43 = *(long *)(*(long *)(param_1 + 400) + 0x80);
    if (*(int *)(lVar43 + 0x1204) == 1) {
      if (*(char *)(lVar43 + 0x2259) != '\x01') goto LAB_710186c960;
    }
    else {
      *(undefined4 *)(lVar43 + 0x1204) = 1;
LAB_710186c960:
      if ((*(char *)(lVar43 + 0x2257) != '\0') && (*(char *)(lVar43 + 0x2259) != '\x01')) {
        *(char *)(lVar43 + 0x2259) = '\x01';
        FUN_71037780e0(&local_2270,**(long **)(lVar43 + 0xb8) + 8,(long ****)"footer_help_in",
                       puVar35,ppppbVar37,param_5,param_6,param_7,param_8);
        if ((iVar27 != 0) == 0 && (uVar54 & 1) == 0) {
          FUN_710377b140((long)&local_2270);
        }
        else {
          FUN_710377aee0(0x3f800000,(long)&local_2270);
        }
        uVar32 = CONCAT26(uStack_2262,
                          CONCAT15(uStack_2263,
                                   CONCAT14(uStack_2264,
                                            CONCAT13(uStack_2265,CONCAT12(uStack_2266,local_2268))))
                         );
        local_2270._0_4_ = 0x523d9e8;
        local_2270._4_4_ = 0x71;
        local_2268 = 0;
        uStack_2266 = 0;
        uStack_2265 = 0;
        uStack_2264 = 0;
        uStack_2263 = 0;
        uStack_2262 = 0;
        if (uVar32 != 0) {
          FUN_710392eb40(uVar32);
        }
      }
      FUN_7101af4610(lVar43);
      lVar43 = *(long *)(*(long *)(param_1 + 400) + 0x80);
    }
    if (*(char *)(lVar43 + 200) == '\x01') {
      if (*(char *)(lVar43 + 0x2253) != '\x01') goto LAB_710186d300;
    }
    else {
      *(undefined1 *)(lVar43 + 200) = 1;
LAB_710186d300:
      if (*(char *)(lVar43 + 0x2250) != '\0') {
        FUN_7101af4c80(lVar43,1,(ulong)*(byte *)(lVar43 + 0x227c),ppppbVar37,param_5,param_6,param_7
                       ,param_8);
        if (*(char *)(lVar43 + 200) == '\0') {
          bVar26 = false;
        }
        else {
          bVar26 = *(char *)(lVar43 + 0xc9) != '\0';
        }
        lVar29 = *(long *)(*(long *)(lVar43 + 0x2260) + 0x1b8);
        if (lVar29 != 0) {
          lVar43 = *(long *)(lVar43 + 0x2260) + 0x1b8;
          lVar57 = lVar43;
          do {
            bVar25 = *(int *)(lVar29 + 0x20) < 0;
            if (!bVar25) {
              lVar57 = lVar29;
            }
            lVar29 = *(long *)(lVar29 + (ulong)bVar25 * 8);
          } while (lVar29 != 0);
          if (((lVar57 != lVar43) && (*(int *)(lVar57 + 0x20) < 1)) &&
             (plVar55 = *(long **)(lVar57 + 0x28), plVar55 != (long *)0x0)) {
            (**(code **)(*plVar55 + 0x1f8))(plVar55,bVar26);
            (**(code **)(*plVar55 + 0x388))(plVar55,bVar26 ^ 1,0);
          }
        }
      }
    }
    lVar43 = *(long *)(param_1 + 400);
    FUN_7101af5880(&local_2270,(undefined8 *)(*(long *)(lVar43 + 0x80) + 0xc0));
    FUN_7101af8570(lVar43,(int *)&local_2270,(ulong)((uint)(iVar27 != 0) | uVar54 & 1),1,param_5,
                   param_6,param_7,param_8);
    uVar50 = ram0x0071053055dc;
    uVar49 = _DAT_71053055d4;
    bVar26 = *(int *)(param_1 + 0xbb0) == 1;
    if (!bVar26) {
      *(undefined4 *)(param_1 + 0xb9c) = ram0x0071053055e4;
      *(undefined8 *)(param_1 + 0xb94) = uVar50;
      *(undefined8 *)(param_1 + 0xb8c) = uVar49;
    }
    lVar43 = *(long *)(param_1 + 0x1a8);
    pppplVar56 = *(long *****)(lVar43 + 0x80);
    iVar27 = *(int *)param_3;
    if (*(int *)(pppplVar56 + 0x28) != 9) {
      *(bool *)((long)pppplVar56 + 0x732) = bVar26;
      uVar49 = *(undefined8 *)(param_1 + 0x1dc);
      *(undefined4 *)((long)pppplVar56 + 0x164) = *(undefined4 *)(param_1 + 0x1e4);
      *(undefined8 *)((long)pppplVar56 + 0x15c) = uVar49;
      if ((undefined8 *)((long)pppplVar56 + 0x15c) == (undefined8 *)(param_1 + 0x1dc)) {
        ppplVar45 = *(long ****)(param_1 + 0x638);
        *(undefined4 *)(pppplVar56 + 0xb8) = *(undefined4 *)(param_1 + 0x640);
        pppplVar56[0xb7] = ppplVar45;
      }
      else {
        uVar32 = 0;
        while( true ) {
          pcVar2 = (char *)(param_1 + 0x1f0 + uVar32);
          cVar9 = *pcVar2;
          if (cVar9 == '\0') break;
          *(char *)((long)pppplVar56 + uVar32 + 0x170) = cVar9;
          if (0x3e < (int)uVar32 + 1U) {
            uVar32 = (ulong)((int)uVar32 + 1);
            break;
          }
          cVar9 = pcVar2[1];
          if (cVar9 == '\0') {
            uVar32 = uVar32 + 1;
            break;
          }
          *(char *)((long)pppplVar56 + uVar32 + 0x171) = cVar9;
          uVar32 = uVar32 + 2;
        }
        *(undefined1 *)((long)pppplVar56 + (uVar32 & 0xffffffff) + 0x170) = 0;
        *(int *)((long)pppplVar56 + 0x16c) = (int)uVar32;
        uVar53 = (uint)*(byte *)(pppplVar56 + 0x2e);
        uVar54 = uVar42;
        if (*(byte *)(pppplVar56 + 0x2e) != 0) {
          pbVar46 = (byte *)((long)pppplVar56 + 0x171);
          do {
            uVar54 = uVar54 * 0x89 ^ uVar53;
            uVar53 = (uint)*pbVar46;
            pbVar46 = pbVar46 + 1;
          } while (uVar53 != 0);
        }
        *(uint *)(pppplVar56 + 0x2d) = uVar54;
        uVar32 = 0;
        while( true ) {
          psVar51 = (short *)(param_1 + 0x238 + uVar32 * 2);
          sVar11 = *psVar51;
          if (sVar11 == 0) break;
          *(short *)((long)pppplVar56 + uVar32 * 2 + 0x1b8) = sVar11;
          if (0x1fe < (int)uVar32 + 1U) {
            uVar32 = (ulong)((int)uVar32 + 1);
            break;
          }
          sVar11 = psVar51[1];
          if (sVar11 == 0) {
            uVar32 = uVar32 + 1;
            break;
          }
          *(short *)((long)pppplVar56 + uVar32 * 2 + 0x1ba) = sVar11;
          uVar32 = uVar32 + 2;
        }
        *(undefined2 *)((long)pppplVar56 + (uVar32 & 0xffffffff) * 2 + 0x1b8) = 0;
        *(int *)((long)pppplVar56 + 0x1b4) = (int)uVar32;
        uVar53 = (uint)*(ushort *)(pppplVar56 + 0x37);
        uVar54 = uVar42;
        if (*(ushort *)(pppplVar56 + 0x37) != 0) {
          puVar52 = (ushort *)((long)pppplVar56 + 0x1ba);
          do {
            uVar54 = uVar54 * 0x89 ^ uVar53;
            uVar53 = (uint)*puVar52;
            puVar52 = puVar52 + 1;
          } while (uVar53 != 0);
        }
        *(uint *)(pppplVar56 + 0x36) = uVar54;
        ppplVar45 = *(long ****)(param_1 + 0x638);
        *(undefined4 *)(pppplVar56 + 0xb8) = *(undefined4 *)(param_1 + 0x640);
        pppplVar56[0xb7] = ppplVar45;
        FUN_7101696040((uint *)((long)pppplVar56 + 0x5c4),(ushort *)(param_1 + 0x64c));
      }
      uVar50 = *(undefined8 *)(param_1 + 0x68c);
      uVar49 = *(undefined8 *)(param_1 + 0x684);
      *(undefined8 *)((long)pppplVar56 + 0x5fc) = *(undefined8 *)(param_1 + 0x67c);
      *(undefined8 *)((long)pppplVar56 + 0x60c) = uVar50;
      *(undefined8 *)((long)pppplVar56 + 0x604) = uVar49;
      *(undefined1 *)((long)pppplVar56 + 0x614) = *(undefined1 *)(param_1 + 0x694);
      ppplVar45 = *(long ****)(param_1 + 0x698);
      *(undefined4 *)(pppplVar56 + 0xc4) = *(undefined4 *)(param_1 + 0x6a0);
      pppplVar56[0xc3] = ppplVar45;
      uVar49 = *(undefined8 *)(param_1 + 0x6a4);
      *(undefined8 *)((long)pppplVar56 + 0x62c) = *(undefined8 *)(param_1 + 0x6ac);
      *(undefined8 *)((long)pppplVar56 + 0x624) = uVar49;
      uVar12 = *(undefined2 *)(param_1 + 0xb94);
      uVar8 = *(undefined1 *)(param_1 + 0xb96);
      *(undefined8 *)((long)pppplVar56 + 0x634) = *(undefined8 *)(param_1 + 0xb8c);
      *(undefined1 *)((long)pppplVar56 + 0x63e) = uVar8;
      *(undefined2 *)((long)pppplVar56 + 0x63c) = uVar12;
      pppplVar56[0xde][0x39] = pppplVar56[0xde][0x38];
      pppplVar56[0xcd] = *(long ****)((long)pppplVar56 + 0x60c);
      pppplVar56[0xcc] = *(long ****)((long)pppplVar56 + 0x604);
      *(undefined4 *)((long)pppplVar56 + 0x67c) = *(undefined4 *)(pppplVar56 + 0xc4);
      pppplVar56[0xcb] = *(long ****)((long)pppplVar56 + 0x5fc);
      *(undefined1 *)(pppplVar56 + 0xce) = *(undefined1 *)((long)pppplVar56 + 0x614);
      *(long ****)((long)pppplVar56 + 0x674) = pppplVar56[0xc3];
      pppplVar56[0xd0] = *(long ****)((long)pppplVar56 + 0x624);
      pppplVar56[0xd1] = *(long ****)((long)pppplVar56 + 0x62c);
      *(undefined1 *)((long)pppplVar56 + 0x69a) = *(undefined1 *)((long)pppplVar56 + 0x63e);
      *(undefined2 *)(pppplVar56 + 0xd3) = *(undefined2 *)((long)pppplVar56 + 0x63c);
      pppplVar56[0xd2] = *(long ****)((long)pppplVar56 + 0x634);
      ppppbVar37 = (byte ****)(pppplVar56 + 0xcb);
      pppplVar39 = pppplVar56 + 0xd0;
      ppppbVar40 = (byte ****)(pppplVar56 + 0xd2);
      if (((DAT_71053144d8 & 1) == 0) &&
         (iVar28 = __cxa_guard_acquire(&DAT_71053144d8), iVar28 != 0)) {
        FUN_7101764000();
        FUN_71000001c0();
        __cxa_guard_release(&DAT_71053144d8);
      }
      bVar26 = DAT_71053050f4 == '\0' && (DAT_71053050f0 & 0x7f000000) != 0x7000000;
      pppplVar36 = (long ****)(ulong)bVar26;
      *(bool *)(pppplVar56 + 0x2b) = bVar26;
      ppppbVar38 = ppppbVar37;
      FUN_7101c04250((undefined4 *)&local_2270,0,bVar26,(undefined1 *)ppppbVar37,pppplVar39,
                     (long)ppppbVar40);
      FUN_7101c046c0(&local_2748,(int *)&local_2270,(undefined **)pppplVar36,ppppbVar38,pppplVar39,
                     ppppbVar40,param_7,param_8);
      ppplVar45 = pppplVar56[200];
      if (ppplVar45 != (long ***)0x0) {
        pppplVar56[0xc9] = ppplVar45;
        FUN_710392eb40((ulong)ppplVar45);
        pppplVar56[0xc9] = (long ***)0x0;
        pppplVar56[0xca] = (long ***)0x0;
        pppplVar56[200] = (long ***)0x0;
      }
      pppplVar56[200] = (long ***)CONCAT44(local_2748._4_4_,(uint)local_2748);
      pppplVar56[0xc9] = (long ***)CONCAT44(uStack_273c,local_2740);
      pppplVar56[0xca] = (long ***)CONCAT44(uStack_2734,local_2738);
      ppplVar45 = pppplVar56[0xd5];
      pplVar61 = *ppplVar45;
      *(undefined4 *)((*pplVar61)[0xc0] + 0x10) = 0x20;
      *(undefined4 *)((**ppplVar45)[0xc0] + 0x14) = 0x40;
      *(undefined4 *)((**ppplVar45)[0xc0] + 0x18) = 0x800008;
      *(undefined4 *)((**ppplVar45)[0xc0] + 0x1c) = 0x200002;
      *(undefined4 *)((**ppplVar45)[0xc0] + 0x20) = 0x100001;
      *(undefined4 *)((**ppplVar45)[0xc0] + 0x24) = 0x400004;
      FUN_7103778760((long)pplVar61[2],0x7104443681);
      FUN_7101c0f740(pppplVar56,0x1f,pppplVar36,ppppbVar38,pppplVar39,ppppbVar40,param_7,param_8);
      local_2740 = local_2740 & 0xffffff00;
      local_2748._0_4_ = 0;
      local_2748._4_4_ = 0;
      if (*(char *)(param_1 + 0x67c) == '\x01') {
        local_2740 = 0x656c7572;
        uStack_273c = 0x6f63695f;
        local_2738 = 0x6f635f6e;
        uStack_2734 = 0x65706d;
        local_2748._4_4_ = 0xf;
        uVar54 = 0x72;
        pbVar46 = (byte *)((long)&local_2740 + 1);
        local_2748._0_4_ = uVar42;
        do {
          local_2748._0_4_ = (uint)local_2748 * 0x89 ^ uVar54;
          uVar54 = (uint)*pbVar46;
          pbVar46 = pbVar46 + 1;
        } while (uVar54 != 0);
      }
      else if (DAT_71053050f0 == 0x2030200) {
        local_2740 = 0x656c7572;
        uStack_273c = 0x6f63695f;
        local_2738 = 0x75735f6e;
        uStack_2734 = 0x73726570;
        local_2730 = 0x6475;
        uStack_272e = 0x6564;
        uStack_272c = 0x6e;
        uVar54 = 0x72;
        local_2748._4_4_ = 0x15;
        pbVar46 = (byte *)((long)&local_2740 + 1);
        local_2748._0_4_ = uVar42;
        do {
          local_2748._0_4_ = (uint)local_2748 * 0x89 ^ uVar54;
          uVar54 = (uint)*pbVar46;
          pbVar46 = pbVar46 + 1;
        } while (uVar54 != 0);
      }
      else {
        if (DAT_71053050f0 != 0x2030300) goto LAB_710186e7b8;
        local_2740 = 0x656c7572;
        uStack_273c = 0x6f63695f;
        local_2738 = 0x6c615f6e;
        uStack_2734 = 0x7461626c;
        local_2730 = 0x6c74;
        uStack_272e = 0x65;
        local_2748._4_4_ = 0x13;
        uVar54 = 0x72;
        pbVar46 = (byte *)((long)&local_2740 + 1);
        local_2748._0_4_ = uVar42;
        do {
          local_2748._0_4_ = (uint)local_2748 * 0x89 ^ uVar54;
          uVar54 = (uint)*pbVar46;
          pbVar46 = pbVar46 + 1;
        } while (uVar54 != 0);
      }
      uStack_273c = 0x6f63695f;
      local_2740 = 0x656c7572;
      FUN_7103778300(0x3f800000,(long)pplVar61[2],(long)&local_2740);
      ppplVar45 = pppplVar56[0xd7];
      local_2260 = 0;
      abStack_225c[0] = 0;
      abStack_225c[1] = 0;
      abStack_225c[2] = 0;
      abStack_225c[3] = 0;
      local_2268 = 0;
      uStack_2266 = 0;
      uStack_2265 = 0;
      uStack_2264 = 0;
      uStack_2263 = 0;
      uStack_2262 = 0;
      local_2270._0_4_ = 0;
      local_2270._4_4_ = 0;
      FUN_71019bb740(&local_2270,(long)ppplVar45[0x2e] - (long)ppplVar45[0x2d] >> 3,pppplVar36,
                     ppppbVar38,pppplVar39,ppppbVar40,param_7,param_8);
      pplVar6 = ppplVar45[0x2e];
      for (pplVar5 = ppplVar45[0x2d]; pplVar5 != pplVar6; pplVar5 = pplVar5 + 1) {
        puVar44 = (undefined8 *)
                  CONCAT26(uStack_2262,
                           CONCAT15(uStack_2263,
                                    CONCAT14(uStack_2264,
                                             CONCAT13(uStack_2265,CONCAT12(uStack_2266,local_2268)))
                                   ));
        if (puVar44 ==
            (undefined8 *)
            CONCAT17(abStack_225c[3],
                     CONCAT16(abStack_225c[2],
                              CONCAT15(abStack_225c[1],CONCAT14(abStack_225c[0],local_2260))))) {
          FUN_71019bb8f0(&local_2270,*pplVar5 + 1,pppplVar36,ppppbVar38,pppplVar39,ppppbVar40,
                         param_7,param_8);
        }
        else {
          FUN_7103776390(puVar44,*pplVar5 + 1,pppplVar36,ppppbVar38,pppplVar39,ppppbVar40,param_7,
                         param_8);
          lVar29 = CONCAT26(uStack_2262,
                            CONCAT15(uStack_2263,
                                     CONCAT14(uStack_2264,
                                              CONCAT13(uStack_2265,CONCAT12(uStack_2266,local_2268))
                                             ))) + 0x10;
          local_2268 = (undefined2)lVar29;
          uStack_2266 = (undefined1)((ulong)lVar29 >> 0x10);
          uStack_2265 = (undefined1)((ulong)lVar29 >> 0x18);
          uStack_2264 = (undefined1)((ulong)lVar29 >> 0x20);
          uStack_2263 = (undefined1)((ulong)lVar29 >> 0x28);
          uStack_2262 = (undefined2)((ulong)lVar29 >> 0x30);
        }
      }
      puVar44 = (undefined8 *)CONCAT44(local_2270._4_4_,(uint)local_2270);
      puVar59 = (undefined8 *)
                CONCAT26(uStack_2262,
                         CONCAT15(uStack_2263,
                                  CONCAT14(uStack_2264,
                                           CONCAT13(uStack_2265,CONCAT12(uStack_2266,local_2268)))))
      ;
      if (puVar44 != puVar59) {
        do {
          FUN_7103778300(0x3f800000,puVar44[1],(long)&local_2740);
          FUN_7103778760(puVar44[1],0x710440150a);
          puVar44 = puVar44 + 2;
        } while (puVar59 != puVar44);
        puVar44 = (undefined8 *)CONCAT44(local_2270._4_4_,(uint)local_2270);
      }
      uVar23 = uStack_2262;
      uVar21 = uStack_2263;
      uVar19 = uStack_2264;
      uVar17 = uStack_2265;
      uVar8 = uStack_2266;
      uVar12 = local_2268;
      if (puVar44 != (undefined8 *)0x0) {
        puVar59 = (undefined8 *)
                  CONCAT26(uStack_2262,
                           CONCAT15(uStack_2263,
                                    CONCAT14(uStack_2264,
                                             CONCAT13(uStack_2265,CONCAT12(uStack_2266,local_2268)))
                                   ));
        uStack_2266 = (undefined1)((ulong)puVar44 >> 0x10);
        uVar16 = uStack_2266;
        uStack_2265 = (undefined1)((ulong)puVar44 >> 0x18);
        uVar18 = uStack_2265;
        uStack_2264 = (undefined1)((ulong)puVar44 >> 0x20);
        uVar20 = uStack_2264;
        uStack_2263 = (undefined1)((ulong)puVar44 >> 0x28);
        uVar22 = uStack_2263;
        local_2268 = SUB82(puVar44,0);
        uVar15 = local_2268;
        uStack_2262 = (undefined2)((ulong)puVar44 >> 0x30);
        uVar24 = uStack_2262;
        local_2268 = uVar12;
        uStack_2266 = uVar8;
        uStack_2265 = uVar17;
        uStack_2264 = uVar19;
        uStack_2263 = uVar21;
        uStack_2262 = uVar23;
        if (puVar59 != puVar44) {
          do {
            puVar59 = puVar59 + -2;
            (**(code **)*puVar59)(puVar59);
          } while (puVar44 != puVar59);
          puVar44 = (undefined8 *)CONCAT44(local_2270._4_4_,(uint)local_2270);
        }
        if (puVar44 != (undefined8 *)0x0) {
          local_2268 = uVar15;
          uStack_2266 = uVar16;
          uStack_2265 = uVar18;
          uStack_2264 = uVar20;
          uStack_2263 = uVar22;
          uStack_2262 = uVar24;
          FUN_710392eb40((ulong)puVar44);
        }
      }
LAB_710186e7b8:
      local_2268 = 0x101;
      pppplVar36 = pppplVar56 + 0xd9;
      local_2270._0_4_ = 0;
      local_2270._4_4_ = 0;
      uStack_2265 = 0;
      uStack_2264 = 0;
      uStack_2263 = 0;
      ppppbVar38 = (byte ****)&local_2270;
      uStack_2262 = 0;
      local_2260 = 1;
      abStack_225c[0] = 1;
      abStack_225c[1] = 0;
      abStack_225c[2] = 1;
      local_2258 = &DAT_41f0000000000000;
      local_2250 = 0;
      local_2220 = 0;
      uStack_221c = 0;
      local_21f0 = (long *)0x0;
      local_21c0 = (long *)0x0;
      local_2190 = (long *)0x0;
      local_2160 = (long *)0x0;
      local_2150 = 0;
      uStack_2266 = 1;
      FUN_7103770b30((long *)pppplVar36,pplVar61 + 1,(long ****)"selector_1",ppppbVar38,pppplVar39,
                     ppppbVar40,param_7,param_8);
      FUN_71037717d0(pppplVar36,0,"set_parts_csr_l",ppppbVar38,pppplVar39,ppppbVar40,param_7,param_8
                    );
      uVar49 = 1;
      FUN_7103771930((long)pppplVar56[0xd9],0,(long ****)0x6,(byte ****)0x1,pppplVar39,ppppbVar40,
                     param_7,param_8);
      FUN_71037717d0(pppplVar36,1,"set_parts_csr_r",uVar49,pppplVar39,ppppbVar40,param_7,param_8);
      ppppbVar38 = (byte ****)0x1;
      FUN_7103771930((long)pppplVar56[0xd9],1,(long ****)&DAT_00000007,(byte ****)0x1,pppplVar39,
                     ppppbVar40,param_7,param_8);
      FUN_7103771d60(&local_27b8,(long)pppplVar56[0xd9],(long ****)0x0,ppppbVar38,pppplVar39,
                     ppppbVar40,param_7,param_8);
      plVar55 = local_27b0;
      local_27b0 = (long *)*local_27b0;
      if (local_27b0 != (long *)0x0) {
        (**(code **)(*local_27b0 + 0x268))(local_27b0,1,1);
      }
      local_27b8 = &PTR_FUN_710523d9c8;
      local_27b0 = (long *)0x0;
      if (plVar55 != (long *)0x0) {
        FUN_710392eb40((ulong)plVar55);
      }
      ppppppppplVar33 = (long *********)0x1;
      FUN_7103771d60(&local_27b8,(long)*pppplVar36,(long ****)0x1,ppppbVar38,pppplVar39,ppppbVar40,
                     param_7,param_8);
      plVar55 = local_27b0;
      plVar30 = (long *)*local_27b0;
      if (plVar30 != (long *)0x0) {
        ppppppppplVar33 = (long *********)0x1;
        (**(code **)(*plVar30 + 0x268))(plVar30,1);
      }
      local_27b8 = &PTR_FUN_710523d9c8;
      local_27b0 = (long *)0x0;
      if (plVar55 != (long *)0x0) {
        FUN_710392eb40((ulong)plVar55);
      }
      (*(code *)(*pppplVar56[0xd9])[0xe])(pppplVar56[0xd9],0);
      FUN_7101c12220((long)pppplVar56,*(char *)((long)pppplVar56 + 0x659),ppppppppplVar33,ppppbVar38
                     ,pppplVar39,ppppbVar40,param_7,param_8);
      local_c8[0] = 0;
      FUN_7101696040(local_c8,(ushort *)((long)pppplVar56 + 0x5cc));
      for (uVar32 = 0; bVar10 = *(byte *)((long)pppplVar56 + uVar32 + 0x170), bVar10 != 0;
          uVar32 = uVar32 + 2) {
        local_27a8[uVar32 - 8] = bVar10;
        if (0x3e < (int)uVar32 + 1U) {
          uVar32 = (ulong)((int)uVar32 + 1);
          break;
        }
        bVar10 = *(byte *)((long)pppplVar56 + uVar32 + 0x171);
        if (bVar10 == 0) {
          uVar32 = uVar32 + 1;
          break;
        }
        local_27a8[uVar32 - 7] = bVar10;
      }
      local_27a8[(uVar32 & 0xffffffff) - 8] = 0;
      uVar54 = (uint)(byte)local_27b0;
      if ((byte)local_27b0 != 0) {
        pbVar46 = (byte *)((long)&local_27b0 + 1);
        do {
          uVar42 = uVar42 * 0x89 ^ uVar54;
          uVar54 = (uint)*pbVar46;
          pbVar46 = pbVar46 + 1;
        } while (uVar54 != 0);
      }
      local_27b8 = (undefined **)CONCAT44((int)uVar32,uVar42);
      local_e0 = *ppppbVar37;
      local_d8 = pppplVar56[0xcc];
      ppplStack_d0 = pppplVar56[0xcd];
      pppplVar36 = (long ****)&local_27b8;
      ppppbVar37 = &local_e0;
      FUN_7101c12580((long)pppplVar56,(long)local_c8,(long)pppplVar36,(char *)ppppbVar37,pppplVar39,
                     ppppbVar40,param_7,param_8);
      FUN_7103778630(0,(long)(*pppplVar56[0xd5])[2],0x7104421055);
      FUN_7103778630(0,(long)(*pppplVar56[0xd6])[2],0x7104421055);
      ppplVar45 = pppplVar56[0xe3];
      pppplVar1 = pppplVar56 + 0xe3;
      uVar54 = 1;
      pppplVar56[0xe4] = ppplVar45;
      do {
        while( true ) {
          iVar28 = uVar54 * 0x3c;
          if (ppplVar45 < pppplVar56[0xe5]) break;
          ppplVar58 = *pppplVar1;
          pppplVar60 = (long ****)((long)ppplVar45 - (long)ppplVar58);
          uVar32 = ((long)pppplVar60 >> 2) + 1;
          if (uVar32 >> 0x3e != 0) goto LAB_710186f078;
          lVar29 = (long)pppplVar56[0xe5] - (long)ppplVar58;
          if ((ulong)(lVar29 >> 2) < 0x1fffffffffffffff) {
            uVar47 = lVar29 >> 1;
            if (uVar32 <= uVar47) {
              uVar32 = uVar47;
            }
            if (uVar32 != 0) {
              if (uVar32 >> 0x3e == 0) goto LAB_710186eaac;
              goto LAB_710186f080;
            }
LAB_710186eb0c:
            ppplVar31 = (long ***)0x0;
          }
          else {
            uVar32 = 0x3fffffffffffffff;
LAB_710186eaac:
            ppplVar45 = (long ***)(uVar32 * 4);
            if (ppplVar45 == (long ***)0x0) {
              ppplVar45 = (long ***)0x1;
            }
            ppplVar31 = (long ***)
                        FUN_710392e290(0x10,ppplVar45,pppplVar36,ppppbVar37,pppplVar39,ppppbVar40,
                                       param_7,param_8);
            if (ppplVar31 == (long ***)0x0) {
              if (DAT_7105332f00 != (long *)0x0) {
                local_84[0] = 0;
                pppplVar36 = &local_90;
                local_90 = ppplVar45;
                uVar47 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,local_84);
                if (((uVar47 & 1) != 0) &&
                   (ppplVar31 = (long ***)
                                FUN_710392e290(0x10,ppplVar45,pppplVar36,ppppbVar37,pppplVar39,
                                               ppppbVar40,param_7,param_8),
                   ppplVar31 != (long ***)0x0)) goto LAB_710186eb10;
              }
              goto LAB_710186eb0c;
            }
          }
LAB_710186eb10:
          piVar3 = (int *)((long)ppplVar31 + ((long)pppplVar60 >> 2) * 4);
          *piVar3 = iVar28;
          if (0 < (long)pppplVar60) {
            memcpy(ppplVar31,ppplVar58,(size_t)pppplVar60);
            pppplVar36 = pppplVar60;
          }
          pppplVar56[0xe3] = ppplVar31;
          pppplVar56[0xe4] = (long ***)(piVar3 + 1);
          pppplVar56[0xe5] = (long ***)((long)ppplVar31 + uVar32 * 4);
          if (ppplVar58 != (long ***)0x0) {
            FUN_710392eb40((ulong)ppplVar58);
          }
          if (2 < uVar54) goto LAB_710186ea50;
LAB_710186eb54:
          ppplVar45 = pppplVar56[0xe4];
          if (ppplVar45 < pppplVar56[0xe5]) {
            *(int *)ppplVar45 = iVar28 + 0x1e;
            ppplVar45 = (long ***)((long)pppplVar56[0xe4] + 4);
            pppplVar56[0xe4] = ppplVar45;
            uVar54 = uVar54 + 1;
          }
          else {
            ppplVar58 = *pppplVar1;
            pppplVar60 = (long ****)((long)ppplVar45 - (long)ppplVar58);
            uVar32 = ((long)pppplVar60 >> 2) + 1;
            if (uVar32 >> 0x3e != 0) goto LAB_710186f078;
            lVar29 = (long)pppplVar56[0xe5] - (long)ppplVar58;
            if ((ulong)(lVar29 >> 2) < 0x1fffffffffffffff) {
              uVar47 = lVar29 >> 1;
              if (uVar32 <= uVar47) {
                uVar32 = uVar47;
              }
              if (uVar32 != 0) {
                if (uVar32 >> 0x3e == 0) goto LAB_710186ebcc;
                goto LAB_710186f080;
              }
LAB_710186ec2c:
              ppplVar31 = (long ***)0x0;
            }
            else {
              uVar32 = 0x3fffffffffffffff;
LAB_710186ebcc:
              ppplVar45 = (long ***)(uVar32 * 4);
              if (ppplVar45 == (long ***)0x0) {
                ppplVar45 = (long ***)0x1;
              }
              ppplVar31 = (long ***)
                          FUN_710392e290(0x10,ppplVar45,pppplVar36,ppppbVar37,pppplVar39,ppppbVar40,
                                         param_7,param_8);
              if (ppplVar31 == (long ***)0x0) {
                if (DAT_7105332f00 != (long *)0x0) {
                  local_84[0] = 0;
                  pppplVar36 = &local_90;
                  local_90 = ppplVar45;
                  uVar47 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,local_84);
                  if (((uVar47 & 1) != 0) &&
                     (ppplVar31 = (long ***)
                                  FUN_710392e290(0x10,ppplVar45,pppplVar36,ppppbVar37,pppplVar39,
                                                 ppppbVar40,param_7,param_8),
                     ppplVar31 != (long ***)0x0)) goto LAB_710186ec30;
                }
                goto LAB_710186ec2c;
              }
            }
LAB_710186ec30:
            piVar3 = (int *)((long)ppplVar31 + ((long)pppplVar60 >> 2) * 4);
            *piVar3 = iVar28 + 0x1e;
            if (0 < (long)pppplVar60) {
              memcpy(ppplVar31,ppplVar58,(size_t)pppplVar60);
              pppplVar36 = pppplVar60;
            }
            pppplVar56[0xe3] = ppplVar31;
            pppplVar56[0xe4] = (long ***)(piVar3 + 1);
            pppplVar56[0xe5] = (long ***)((long)ppplVar31 + uVar32 * 4);
            if (ppplVar58 != (long ***)0x0) {
              FUN_710392eb40((ulong)ppplVar58);
            }
            ppplVar45 = pppplVar56[0xe4];
            uVar54 = uVar54 + 1;
          }
        }
        *(int *)ppplVar45 = iVar28;
        pppplVar56[0xe4] = (long ***)((long)pppplVar56[0xe4] + 4);
        if (uVar54 < 3) goto LAB_710186eb54;
LAB_710186ea50:
        uVar54 = uVar54 + 1;
        if (99 < uVar54) goto LAB_710186ec78;
        ppplVar45 = pppplVar56[0xe4];
      } while( true );
    }
    goto LAB_710186ee98;
  case 3:
    if (*(int *)(param_1 + 0xbb0) == 1) {
      ppppppppplVar33 = (long *********)0x0;
    }
    else {
      ppppppppplVar33 = (long *********)(ulong)(1 < *(int *)(param_1 + 0x1e4) - 1U);
    }
    uVar8 = *(undefined1 *)(param_1 + 0x694);
    uVar49 = *(undefined8 *)(param_1 + 0x698);
    uVar7 = *(undefined4 *)(param_1 + 0x6a0);
    uStack_2264 = (undefined1)uVar7;
    uStack_2263 = (undefined1)((uint)uVar7 >> 8);
    uStack_2262 = (undefined2)((uint)uVar7 >> 0x10);
    local_2270._4_4_ = (uint)uVar49;
    local_2268 = (undefined2)((ulong)uVar49 >> 0x20);
    uStack_2266 = (undefined1)((ulong)uVar49 >> 0x30);
    uStack_2265 = (undefined1)((ulong)uVar49 >> 0x38);
    if (*(long *)(param_1 + 0x1a8) != 0) {
      lVar43 = *(long *)(*(long *)(param_1 + 0x1a8) + 0x80);
      uVar8 = *(undefined1 *)(lVar43 + 0x670);
      uVar49 = *(undefined8 *)(lVar43 + 0x674);
      *(undefined4 *)((undefined8 *)((ulong)&local_2270 | 4) + 1) = *(undefined4 *)(lVar43 + 0x67c);
      *(undefined8 *)((ulong)&local_2270 | 4) = uVar49;
    }
    local_2270._0_4_ = CONCAT31(local_2270._1_3_,uVar8);
    FUN_7101c18760(*(long *)(param_1 + 0x1b0),(undefined1 *)&local_2270,ppppppppplVar33,ppppbVar37,
                   param_5,param_6,param_7,param_8);
    break;
  case 4:
    if (*(int *)(param_1 + 0xbb0) == 1) {
      ppuVar34 = (undefined **)0x0;
    }
    else {
      ppuVar34 = (undefined **)(ulong)(1 < *(int *)(param_1 + 0x1e4) - 1U);
    }
    uVar49 = *(undefined8 *)(param_1 + 0x6ac);
    local_2268 = (undefined2)uVar49;
    uStack_2266 = (undefined1)((ulong)uVar49 >> 0x10);
    uStack_2265 = (undefined1)((ulong)uVar49 >> 0x18);
    uStack_2264 = (undefined1)((ulong)uVar49 >> 0x20);
    uStack_2263 = (undefined1)((ulong)uVar49 >> 0x28);
    uStack_2262 = (undefined2)((ulong)uVar49 >> 0x30);
    local_2270._0_4_ = (uint)*(undefined8 *)(param_1 + 0x6a4);
    local_2270._4_4_ = (uint)((ulong)*(undefined8 *)(param_1 + 0x6a4) >> 0x20);
    if (*(long *)(param_1 + 0x1a8) != 0) {
      lVar43 = *(long *)(*(long *)(param_1 + 0x1a8) + 0x80);
      uVar50 = *(undefined8 *)(lVar43 + 0x680);
      uVar49 = *(undefined8 *)(lVar43 + 0x688);
      local_2268 = (undefined2)uVar49;
      uStack_2266 = (undefined1)((ulong)uVar49 >> 0x10);
      uStack_2265 = (undefined1)((ulong)uVar49 >> 0x18);
      uStack_2264 = (undefined1)((ulong)uVar49 >> 0x20);
      uStack_2263 = (undefined1)((ulong)uVar49 >> 0x28);
      uStack_2262 = (undefined2)((ulong)uVar49 >> 0x30);
      local_2270._0_4_ = (uint)uVar50;
      local_2270._4_4_ = (uint)((ulong)uVar50 >> 0x20);
    }
    FUN_7101c2a840(*(long *)(param_1 + 0x1b8),&local_2270,ppuVar34,ppppbVar37,param_5,param_6,
                   param_7,param_8);
  }
  return;
LAB_710186ec78:
  ppplVar45 = pppplVar56[0xe4];
  if (ppplVar45 == pppplVar56[0xe5]) {
    ppplVar58 = *pppplVar1;
    __n = (long)ppplVar45 - (long)ppplVar58;
    uVar32 = ((long)__n >> 2) + 1;
    if (uVar32 >> 0x3e != 0) {
LAB_710186f078:
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    lVar29 = (long)pppplVar56[0xe5] - (long)ppplVar58;
    if ((ulong)(lVar29 >> 2) < 0x1fffffffffffffff) {
      uVar47 = lVar29 >> 1;
      if (uVar32 <= uVar47) {
        uVar32 = uVar47;
      }
      if (uVar32 != 0) {
        if (uVar32 >> 0x3e != 0) goto LAB_710186f080;
        goto LAB_710186ecf8;
      }
LAB_710186ed58:
      ppplVar31 = (long ***)0x0;
    }
    else {
      uVar32 = 0x3fffffffffffffff;
LAB_710186ecf8:
      ppplVar45 = (long ***)(uVar32 * 4);
      if (ppplVar45 == (long ***)0x0) {
        ppplVar45 = (long ***)0x1;
      }
      ppplVar31 = (long ***)
                  FUN_710392e290(0x10,ppplVar45,pppplVar36,ppppbVar37,pppplVar39,ppppbVar40,param_7,
                                 param_8);
      if (ppplVar31 == (long ***)0x0) {
        if (DAT_7105332f00 != (long *)0x0) {
          local_84[0] = 0;
          pppplVar36 = &local_90;
          local_90 = ppplVar45;
          uVar47 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,local_84);
          if (((uVar47 & 1) != 0) &&
             (ppplVar31 = (long ***)
                          FUN_710392e290(0x10,ppplVar45,pppplVar36,ppppbVar37,pppplVar39,ppppbVar40,
                                         param_7,param_8), ppplVar31 != (long ***)0x0))
          goto LAB_710186ed5c;
        }
        goto LAB_710186ed58;
      }
    }
LAB_710186ed5c:
    puVar4 = (undefined4 *)((long)ppplVar31 + ((long)__n >> 2) * 4);
    *puVar4 = 0;
    if (0 < (long)__n) {
      memcpy(ppplVar31,ppplVar58,__n);
    }
    pppplVar56[0xe3] = ppplVar31;
    pppplVar56[0xe4] = (long ***)(puVar4 + 1);
    pppplVar56[0xe5] = (long ***)((long)ppplVar31 + uVar32 * 4);
    if (ppplVar58 != (long ***)0x0) {
      FUN_710392eb40((ulong)ppplVar58);
    }
  }
  else {
    *(undefined4 *)ppplVar45 = 0;
    pppplVar56[0xe4] = (long ***)((long)pppplVar56[0xe4] + 4);
  }
  if (alStack_2180 == local_2160) {
    pcVar48 = *(code **)(*local_2160 + 0x20);
LAB_710186edc8:
    (*pcVar48)();
  }
  else if (local_2160 != (long *)0x0) {
    pcVar48 = *(code **)(*local_2160 + 0x28);
    goto LAB_710186edc8;
  }
  if (alStack_21b0 == local_2190) {
    pcVar48 = *(code **)(*local_2190 + 0x20);
LAB_710186edf8:
    (*pcVar48)();
  }
  else if (local_2190 != (long *)0x0) {
    pcVar48 = *(code **)(*local_2190 + 0x28);
    goto LAB_710186edf8;
  }
  if (alStack_21e0 == local_21c0) {
    pcVar48 = *(code **)(*local_21c0 + 0x20);
LAB_710186ee28:
    (*pcVar48)();
  }
  else if (local_21c0 != (long *)0x0) {
    pcVar48 = *(code **)(*local_21c0 + 0x28);
    goto LAB_710186ee28;
  }
  if (&local_2210 == local_21f0) {
    pcVar48 = *(code **)(*local_21f0 + 0x20);
LAB_710186ee58:
    (*pcVar48)();
  }
  else if (local_21f0 != (long *)0x0) {
    pcVar48 = *(code **)(*local_21f0 + 0x28);
    goto LAB_710186ee58;
  }
  plVar55 = (long *)CONCAT44(uStack_221c,local_2220);
  if (alStack_2240 == plVar55) {
    pcVar48 = *(code **)(*plVar55 + 0x20);
LAB_710186ee88:
    (*pcVar48)();
  }
  else if (plVar55 != (long *)0x0) {
    pcVar48 = *(code **)(*plVar55 + 0x28);
    goto LAB_710186ee88;
  }
  pppplVar56 = *(long *****)(lVar43 + 0x80);
LAB_710186ee98:
  *(bool *)((long)pppplVar56 + 0x731) = iVar27 != 0;
  *(byte *)(pppplVar56 + 0xe6) = (byte)param_4 & 1;
  if (*(uint *)((long)pppplVar56 + 0x13c) < 0x13) {
    *(undefined4 *)((long)pppplVar56 + (long)(int)*(uint *)((long)pppplVar56 + 0x13c) * 4 + 0xf0) =
         1;
    *(undefined1 *)(lVar43 + 0x70) = 0;
    plVar55 = *(long **)(*(long *)(DAT_710532f7d0 + 8) + 0x18);
    if (plVar55 == (long *)0x0) {
      return;
    }
    uVar32 = (**(code **)(*plVar55 + 0x48))(plVar55);
    if ((uVar32 & 1) == 0) {
      return;
    }
    (**(code **)(*plVar55 + 0x38))(plVar55,1,2);
    return;
  }
LAB_710186f080:
                    /* WARNING: Subroutine does not return */
  abort();
}

