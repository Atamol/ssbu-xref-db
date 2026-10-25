// addr:      710374f910
// offset:    0x374f910
// name:      FUN_710374f910
// mangled:   
// signature: undefined __cdecl FUN_710374f910(undefined8 * param_1, undefined8 param_2, undefined * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, long * * * * param_7, allocator * param_8)


/* WARNING: Removing unreachable block (ram,0x007103751acc) */
/* WARNING: Removing unreachable block (ram,0x0071037504d4) */
/* WARNING: Removing unreachable block (ram,0x007103751c3c) */
/* WARNING: Removing unreachable block (ram,0x007103751c9c) */
/* WARNING: Removing unreachable block (ram,0x007103751c4c) */
/* WARNING: Removing unreachable block (ram,0x007103751cb4) */
/* WARNING: Removing unreachable block (ram,0x007103751ce0) */
/* WARNING: Removing unreachable block (ram,0x007103751cd0) */
/* WARNING: Removing unreachable block (ram,0x007103751cd4) */
/* WARNING: Removing unreachable block (ram,0x007103751ce8) */
/* WARNING: Removing unreachable block (ram,0x007103751cf4) */
/* WARNING: Removing unreachable block (ram,0x007103751d18) */
/* WARNING: Removing unreachable block (ram,0x007103751d04) */
/* WARNING: Removing unreachable block (ram,0x007103751d30) */
/* WARNING: Removing unreachable block (ram,0x007103751d5c) */
/* WARNING: Removing unreachable block (ram,0x007103751d4c) */
/* WARNING: Removing unreachable block (ram,0x007103751d50) */
/* WARNING: Removing unreachable block (ram,0x007103751d64) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_710374f910(undefined8 *param_1,undefined8 param_2,undefined **param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,long ****param_7,allocator *param_8)

{
  long ***ppplVar1;
  undefined8 uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  char cVar8;
  char cVar9;
  undefined1 uVar10;
  ushort uVar11;
  ushort uVar12;
  char cVar13;
  undefined1 auVar14 [16];
  bool bVar15;
  int iVar16;
  ulong uVar18;
  undefined4 uVar17;
  size_t sVar19;
  undefined8 *puVar20;
  undefined4 *puVar21;
  recursive_mutex *prVar22;
  undefined8 *puVar23;
  undefined8 *puVar24;
  undefined8 *puVar25;
  void *pvVar26;
  long lVar27;
  long *plVar28;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 extraout_x1_02;
  undefined **ppuVar29;
  byte ****ppppbVar30;
  char *pcVar31;
  byte *pbVar32;
  byte bVar33;
  uint uVar34;
  undefined *puVar35;
  long ***ppplVar36;
  long *plVar37;
  undefined1 *puVar38;
  code *pcVar39;
  long ***ppplVar40;
  uint *puVar41;
  byte *pbVar42;
  long lVar43;
  ulong uVar44;
  ulong uVar45;
  long lVar46;
  ulong uVar47;
  long lVar48;
  uint uVar49;
  ulong uVar50;
  undefined8 uVar51;
  uint *puVar52;
  uint *puVar53;
  uint *puVar54;
  uint *puVar55;
  long ***ppplVar56;
  long *plVar57;
  undefined8 uVar58;
  uint *puVar59;
  long lVar60;
  void *pvVar61;
  byte *pbVar62;
  long ****pppplVar63;
  byte ***pppbVar64;
  byte *pbVar65;
  long ***ppplVar66;
  long ****pppplVar67;
  long lVar68;
  ulong *puVar69;
  char *pcVar70;
  long ***unaff_x25;
  uint *puVar71;
  long *plVar72;
  long *plVar73;
  long *plVar74;
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  void *local_4a0;
  undefined8 uStack_498;
  ulong local_490;
  undefined1 local_488 [8];
  void **local_480;
  long ***local_478;
  ulong local_470;
  undefined8 uStack_468;
  ulong local_460;
  ulong local_458;
  undefined8 local_450;
  ulong local_448;
  undefined1 local_440;
  char local_43f;
  undefined2 local_43e;
  undefined8 local_430;
  long ****local_428;
  void *local_420;
  undefined8 *puStack_418;
  long *local_410;
  ushort local_330;
  undefined2 local_22e;
  char cStack_221;
  undefined8 local_220;
  undefined8 *local_218;
  long *local_200;
  ushort local_120;
  long *local_f0;
  undefined4 local_e0;
  undefined4 uStack_dc;
  long *local_c0;
  long ****local_b0 [2];
  char *local_a0;
  string local_98;
  undefined1 auStack_97 [7];
  long *****local_90;
  long ****local_88;
  long ***local_78;
  undefined4 local_6c [3];
  
  uStack_498 = 0;
  local_490 = 0;
  local_4a0 = (void *)0x74736f6808;
  local_488 = (undefined1  [8])0x6d6f7206;
  uStack_468 = 0;
  local_470 = 0x6576617308;
  local_460 = 0;
  local_458 = 0x636d647308;
  local_480 = (void **)0x0;
  local_478 = (long ***)0x0;
  local_450 = 0;
  local_448 = 0;
  cVar8 = *(char *)(param_1 + 0xf);
  cVar9 = *(char *)(param_1 + 0x13);
  local_43f = cVar9 != '\0' || cVar8 != '\0';
  local_440 = 0;
  local_43e = 0;
  if (DAT_710593d288 == (long ****)0x0) {
    do {
      if (DAT_710593d280 != 0) {
        ClearExclusiveLocal();
        goto LAB_710374faa4;
      }
      cVar13 = '\x01';
      bVar15 = (bool)ExclusiveMonitorPass(0x710593d280,0x10);
      if (bVar15) {
        DAT_710593d280 = 1;
        cVar13 = ExclusiveMonitorsStatus();
      }
    } while (cVar13 != '\0');
    iVar16 = FUN_710392e1f0(&local_220,0x10,(long ****)0x8148,param_4,param_5,param_6,param_7,
                            param_8);
    if ((iVar16 == 0xc) && (DAT_710593d2b0 != (long *)0x0)) {
      local_430 = (long ****)0x8148;
      uVar18 = (**(code **)(*DAT_710593d2b0 + 0x30))(DAT_710593d2b0,&local_430);
      if ((uVar18 & 1) != 0) {
        FUN_710392e1f0(&local_220,0x10,(long ****)0x8148,param_4,param_5,param_6,param_7,param_8);
      }
    }
    param_3 = local_220;
    nu::VirtualAllocHook(0x8148,0x10,local_220);
    pppplVar63 = (long ****)local_220;
    FUN_71037c65a0(local_220);
    *pppplVar63 = (long ***)&PTR_FUN_7105241cb8;
    pppplVar63[0x1027] = (long ***)0x0;
    pppplVar63[0x1026] = (long ***)0x0;
    pppplVar63[0x1028] = (long ***)0x0;
    DAT_710593d288 = pppplVar63;
  }
LAB_710374faa4:
  std::mutex::lock();
  ppplVar40 = (long ***)(local_488 + 1);
  if (((ulong)local_488 & 1) != 0) {
    ppplVar40 = local_478;
  }
  std::string::operator=((string *)&DAT_710593d268,(string *)&local_4a0);
  std::string::operator=((string *)&DAT_710593d250,(string *)&local_470);
  if (local_43f != '\0') {
    local_b0[0] = (long ****)0x0;
    iVar16 = nn::fs::QueryMountRomCacheSize((ulong *)local_b0);
    pppplVar63 = local_b0[0];
    if (iVar16 == 0) {
      iVar16 = FUN_710392e1f0(&local_220,0x10,local_b0[0],param_4,param_5,param_6,param_7,param_8);
      if ((iVar16 == 0xc) && (DAT_710593d2b0 != (long *)0x0)) {
        local_430 = pppplVar63;
        uVar18 = (**(code **)(*DAT_710593d2b0 + 0x30))(DAT_710593d2b0,&local_430);
        if ((uVar18 & 1) != 0) {
          FUN_710392e1f0(&local_220,0x10,pppplVar63,param_4,param_5,param_6,param_7,param_8);
        }
      }
      nu::VirtualAllocHook((ulong)pppplVar63,0x10,local_220);
      param_3 = (undefined **)local_b0[0];
      iVar16 = nn::fs::MountRom((char *)ppplVar40,local_220,(ulong)local_b0[0]);
      ppplVar66 = DAT_710593d028;
      if (iVar16 == 0) {
        uVar18 = (((ulong)ppplVar40 & 0x1fffffff) * 8 + 8 ^ (ulong)ppplVar40 >> 0x20) *
                 -0x622015f714c7d297;
        uVar18 = (uVar18 ^ (ulong)ppplVar40 >> 0x20 ^ uVar18 >> 0x2f) * -0x622015f714c7d297;
        ppplVar56 = (long ***)((uVar18 ^ uVar18 >> 0x2f) * -0x622015f714c7d297);
        if (DAT_710593d028 == (long ***)0x0) {
LAB_710374fc74:
          iVar16 = FUN_710392e1f0(&local_220,0x10,(long ****)&SUB_00000020,param_4,param_5,param_6,
                                  param_7,param_8);
          if ((iVar16 == 0xc) && (DAT_710593d2b0 != (long *)0x0)) {
            local_430 = (long ****)&SUB_00000020;
            uVar18 = (**(code **)(*DAT_710593d2b0 + 0x30))(DAT_710593d2b0,&local_430);
            if ((uVar18 & 1) != 0) {
              FUN_710392e1f0(&local_220,0x10,(long ****)&SUB_00000020,param_4,param_5,param_6,
                             param_7,param_8);
            }
          }
          pppplVar67 = (long ****)local_220;
          nu::VirtualAllocHook(0x20,0x10,local_220);
          pppplVar63 = (long ****)local_220;
          local_220[2] = (undefined *)ppplVar40;
          local_220[3] = (undefined *)0x0;
          *local_220 = (undefined *)0x0;
          local_220[1] = (undefined *)ppplVar56;
          if ((ppplVar66 == (long ***)0x0) ||
             (DAT_710593d040 * (float)ppplVar66 < (float)(DAT_710593d038 + 1))) {
            if (ppplVar66 < (long ***)0x3) {
              uVar18 = 1;
            }
            else {
              uVar18 = (ulong)(((ulong)((long)ppplVar66 - 1U) & (ulong)ppplVar66) != 0);
            }
            uVar18 = uVar18 | (long)ppplVar66 << 1;
            uVar45 = (ulong)((float)(DAT_710593d038 + 1) / DAT_710593d040);
            if (uVar45 <= uVar18) {
              uVar45 = uVar18;
            }
            auVar76._8_8_ = extraout_x1;
            auVar76._0_8_ = uVar45;
            if (uVar45 - 1 == 0) {
              auVar76._0_8_ = 2;
            }
            else if ((uVar45 - 1 & uVar45) != 0) {
              auVar76 = std::__next_prime(uVar45);
            }
            ppplVar66 = DAT_710593d028;
            uVar58 = auVar76._8_8_;
            ppplVar36 = auVar76._0_8_;
            if (DAT_710593d028 < ppplVar36) {
              FUN_71037c62b0((ulong)ppplVar36,uVar58,pppplVar67,param_4,param_5,param_6,param_7,
                             param_8);
            }
            else if (ppplVar36 < DAT_710593d028) {
              uVar18 = (ulong)((float)DAT_710593d038 / DAT_710593d040);
              auVar75._8_8_ = uVar58;
              auVar75._0_8_ = uVar18;
              if (DAT_710593d028 < (long ***)0x3 ||
                  ((ulong)((long)DAT_710593d028 - 1U) & (ulong)DAT_710593d028) != 0) {
                auVar75 = std::__next_prime(uVar18);
              }
              else {
                auVar14._8_8_ = uVar58;
                auVar14._0_8_ = 1L << (-LZCOUNT(uVar18 - 1) & 0x3fU);
                if (1 < uVar18) {
                  auVar75 = auVar14;
                }
              }
              ppplVar1 = auVar75._0_8_;
              if (auVar75._0_8_ <= ppplVar36) {
                ppplVar1 = ppplVar36;
              }
              if (ppplVar1 < ppplVar66) {
                FUN_71037c62b0((ulong)ppplVar1,auVar75._8_8_,pppplVar67,param_4,param_5,param_6,
                               param_7,param_8);
              }
            }
            ppplVar66 = DAT_710593d028;
            if (((long)DAT_710593d028 - 1U & (ulong)DAT_710593d028) == 0) {
              unaff_x25 = (long ***)((ulong)((long)DAT_710593d028 - 1U) & (ulong)ppplVar56);
            }
            else {
              unaff_x25 = ppplVar56;
              if (DAT_710593d028 <= ppplVar56) {
                uVar18 = 0;
                if (DAT_710593d028 != (long ***)0x0) {
                  uVar18 = (ulong)ppplVar56 / (ulong)DAT_710593d028;
                }
                unaff_x25 = (long ***)((long)ppplVar56 - uVar18 * (long)DAT_710593d028);
              }
            }
          }
          puVar20 = *(undefined8 **)(DAT_710593d020 + (long)unaff_x25 * 8);
          if (puVar20 == (undefined8 *)0x0) {
            *pppplVar63 = (long ***)DAT_710593d030;
            DAT_710593d030 = pppplVar63;
            *(long ******)(DAT_710593d020 + (long)unaff_x25 * 8) = &DAT_710593d030;
            if (*pppplVar63 != (long ***)0x0) {
              ppplVar56 = (long ***)(*pppplVar63)[1];
              if (((ulong)((long)ppplVar66 + -1) & (ulong)ppplVar66) == 0) {
                ppplVar56 = (long ***)((ulong)ppplVar56 & (ulong)((long)ppplVar66 + -1));
              }
              else if (ppplVar66 <= ppplVar56) {
                uVar18 = 0;
                if (ppplVar66 != (long ***)0x0) {
                  uVar18 = (ulong)ppplVar56 / (ulong)ppplVar66;
                }
                ppplVar56 = (long ***)((long)ppplVar56 - uVar18 * (long)ppplVar66);
              }
              puVar20 = (undefined8 *)(DAT_710593d020 + (long)ppplVar56 * 8);
              goto LAB_710374fe90;
            }
          }
          else {
            *pppplVar63 = (long ***)*puVar20;
LAB_710374fe90:
            *puVar20 = pppplVar63;
          }
          DAT_710593d038 = DAT_710593d038 + 1;
        }
        else {
          puVar35 = (undefined *)((long)DAT_710593d028 - 1);
          if (((ulong)puVar35 & (ulong)DAT_710593d028) == 0) {
            unaff_x25 = (long ***)((ulong)ppplVar56 & (ulong)puVar35);
          }
          else {
            unaff_x25 = ppplVar56;
            if (DAT_710593d028 <= ppplVar56) {
              uVar18 = 0;
              if (DAT_710593d028 != (long ***)0x0) {
                uVar18 = (ulong)ppplVar56 / (ulong)DAT_710593d028;
              }
              unaff_x25 = (long ***)((long)ppplVar56 - uVar18 * (long)DAT_710593d028);
            }
          }
          pppplVar63 = *(long *****)(DAT_710593d020 + (long)unaff_x25 * 8);
          if (pppplVar63 == (long ****)0x0) goto LAB_710374fc74;
          if (((ulong)puVar35 & (ulong)DAT_710593d028) == 0) {
            do {
              pppplVar63 = (long ****)*pppplVar63;
              if ((pppplVar63 == (long ****)0x0) ||
                 (pppplVar63[1] != ppplVar56 &&
                  (long ***)((ulong)pppplVar63[1] & (ulong)puVar35) != unaff_x25))
              goto LAB_710374fc74;
            } while (pppplVar63[2] != ppplVar40);
          }
          else {
            do {
              pppplVar63 = (long ****)*pppplVar63;
              if (pppplVar63 == (long ****)0x0) goto LAB_710374fc74;
              ppplVar36 = pppplVar63[1];
              if (ppplVar36 != ppplVar56) {
                if (DAT_710593d028 <= ppplVar36) {
                  uVar18 = 0;
                  if (DAT_710593d028 != (long ***)0x0) {
                    uVar18 = (ulong)ppplVar36 / (ulong)DAT_710593d028;
                  }
                  ppplVar36 = (long ***)((long)ppplVar36 - uVar18 * (long)DAT_710593d028);
                }
                if (ppplVar36 != unaff_x25) goto LAB_710374fc74;
              }
            } while (pppplVar63[2] != ppplVar40);
          }
        }
        pppplVar63[3] = (long ***)&DAT_7104867c2e;
        local_22e = 0;
        local_430 = (long ****)((ulong)local_430 & 0xffffffffffffff00);
        sVar19 = strlen((char *)ppplVar40);
        FUN_71037c4b00((long)&local_430,(undefined1 *)ppplVar40,sVar19);
        FUN_71037c4be0((long)&local_430,":/");
        param_3 = (undefined **)0x201;
        memcpy(&DAT_710593d048,&local_430,0x201);
        DAT_710593d24a = local_22e;
      }
    }
  }
  std::mutex::unlock();
  plVar57 = (long *)param_1[0x10];
  if (plVar57 != param_1 + 0x11) {
    do {
      std::string::string((string *)local_b0,(string *)(plVar57 + 4));
      std::string::string(&local_98,(string *)(plVar57 + 7));
      pcVar31 = (char *)((ulong)local_b0 | 1);
      if (((ulong)local_b0[0] & 1) != 0) {
        pcVar31 = local_a0;
      }
      ppuVar29 = (undefined **)auStack_97;
      if (((byte)local_98 & 1) != 0) {
        ppuVar29 = (undefined **)local_88;
      }
      local_220 = (undefined **)((ulong)local_220 & 0xffffffffffffff00);
      sVar19 = strlen(pcVar31);
      local_120 = 0;
      if (sVar19 == 0) {
        puVar20 = &local_220;
      }
      else {
        if (sVar19 == 1) {
          uVar18 = 0;
LAB_7103750060:
          local_120 = (short)uVar18 + 1;
          *(char *)((long)&local_220 + uVar18) = *pcVar31;
          uVar18 = (ulong)local_120;
        }
        else {
          uVar18 = 0;
          lVar43 = (sVar19 & 1) - sVar19;
          do {
            local_120 = (short)uVar18 + 1;
            *(char *)((long)&local_220 + uVar18) = *pcVar31;
            uVar18 = (ulong)local_120;
            pcVar70 = pcVar31 + 1;
            pcVar31 = pcVar31 + 2;
            local_120 = local_120 + 1;
            lVar43 = lVar43 + 2;
            *(char *)((long)&local_220 + uVar18) = *pcVar70;
            uVar18 = (ulong)local_120;
          } while (lVar43 != 0);
          if ((sVar19 & 1) != 0) goto LAB_7103750060;
        }
        puVar20 = (undefined8 *)((long)&local_220 + uVar18);
      }
      *(undefined1 *)puVar20 = 0;
      uVar18 = (ulong)local_120;
      if (uVar18 != 0) {
        lVar43 = 0;
        do {
          if (-lVar43 == uVar18) goto LAB_710375019c;
          lVar27 = lVar43 + uVar18;
          lVar43 = lVar43 + -1;
        } while (*(char *)((long)&local_220 + lVar27 + -1) != ':');
        if (lVar43 != 0) {
          uVar45 = (long)&local_220 + lVar43 + uVar18;
          uVar44 = uVar45 - (long)&local_220;
          if (uVar44 != 0xffffffffffffffff) {
            uVar50 = uVar18;
            if (uVar44 <= uVar18) {
              uVar50 = uVar44;
            }
            local_430 = (long ****)((ulong)local_430 & 0xffffffffffffff00);
            local_330 = 0;
            if (uVar50 == 0) {
              puVar20 = &local_430;
            }
            else {
              puVar20 = &local_220;
              pcVar31 = (char *)(~uVar45 + (long)puVar20);
              if (pcVar31 <= (char *)~uVar18) {
                pcVar31 = (char *)~uVar18;
              }
              if (pcVar31 == (char *)0xfffffffffffffffe) {
                uVar34 = 0;
              }
              else {
                pcVar31 = &cStack_221 + -uVar45;
                if (pcVar31 <= (char *)~uVar18) {
                  pcVar31 = (char *)~uVar18;
                }
                uVar18 = 0;
                puVar20 = &local_220;
                pcVar31 = pcVar31 + (uVar50 & 1) + 1;
                do {
                  local_330 = (short)uVar18 + 1;
                  *(undefined1 *)((long)&local_430 + uVar18) = *(undefined1 *)puVar20;
                  uVar18 = (ulong)local_330;
                  puVar38 = (undefined1 *)((long)puVar20 + 1);
                  puVar20 = (undefined8 *)((long)puVar20 + 2);
                  local_330 = local_330 + 1;
                  pcVar31 = pcVar31 + 2;
                  *(undefined1 *)((long)&local_430 + uVar18) = *puVar38;
                  uVar18 = (ulong)local_330;
                  uVar34 = (uint)local_330;
                } while (pcVar31 != (char *)0x0);
              }
              if ((uVar50 & 1) != 0) {
                local_330 = (short)uVar34 + 1;
                *(undefined1 *)((long)&local_430 + (ulong)uVar34) = *(undefined1 *)puVar20;
                uVar34 = (uint)local_330;
              }
              puVar20 = (undefined8 *)((long)&local_430 + (ulong)(ushort)uVar34);
            }
            param_3 = (undefined **)&DAT_00000100;
            *(undefined1 *)puVar20 = 0;
            memcpy(&local_220,&local_430,0x100);
            uVar18 = (ulong)local_330;
            local_120 = local_330;
          }
        }
      }
LAB_710375019c:
      uVar34 = (uint)uVar18;
      if (3 < uVar34) {
        uVar18 = 4;
      }
      if (((uVar18 == 0) ||
          (((byte)local_220 == 0x68 &&
           ((uVar18 == 1 ||
            ((local_220._1_1_ == 'o' &&
             ((uVar18 == 2 ||
              ((local_220._2_1_ == 's' && ((uVar18 == 3 || (local_220._3_1_ == 't')))))))))))))) &&
         (uVar34 == 4)) {
LAB_710375040c:
        ppuVar29 = param_3;
        if (((byte)local_98 & 1) == 0) goto LAB_71037505a4;
LAB_7103750414:
        if (local_88 == (long ****)0x0) goto LAB_71037505a4;
        FUN_710392eb40((ulong)local_88);
        if (((ulong)local_b0[0] & 1) != 0) goto LAB_7103750428;
LAB_71037505ac:
        plVar37 = (long *)plVar57[1];
        param_3 = ppuVar29;
      }
      else {
        if (DAT_710593d288 == (long ****)0x0) {
          do {
            if (DAT_710593d280 != 0) {
              ClearExclusiveLocal();
              goto LAB_71037502d0;
            }
            cVar13 = '\x01';
            bVar15 = (bool)ExclusiveMonitorPass(0x710593d280,0x10);
            if (bVar15) {
              DAT_710593d280 = 1;
              cVar13 = ExclusiveMonitorsStatus();
            }
          } while (cVar13 != '\0');
          iVar16 = FUN_710392e1f0(&local_e0,0x10,(long ****)0x8148,param_4,param_5,param_6,param_7,
                                  param_8);
          if ((iVar16 == 0xc) && (DAT_710593d2b0 != (long *)0x0)) {
            local_430 = (long ****)0x8148;
            uVar18 = (**(code **)(*DAT_710593d2b0 + 0x30))(DAT_710593d2b0,&local_430);
            if ((uVar18 & 1) != 0) {
              FUN_710392e1f0(&local_e0,0x10,(long ****)0x8148,param_4,param_5,param_6,param_7,
                             param_8);
            }
          }
          nu::VirtualAllocHook(0x8148,0x10,(void *)CONCAT44(uStack_dc,local_e0));
          pppplVar63 = (long ****)CONCAT44(uStack_dc,local_e0);
          FUN_71037c65a0(pppplVar63);
          *pppplVar63 = (long ***)&PTR_FUN_7105241cb8;
          pppplVar63[0x1028] = (long ***)0x0;
          pppplVar63[0x1027] = (long ***)0x0;
          pppplVar63[0x1026] = (long ***)0x0;
          DAT_710593d288 = pppplVar63;
        }
LAB_71037502d0:
        (*(code *)(*DAT_710593d288)[2])(&local_430,DAT_710593d288,&local_220);
        param_3 = ppuVar29;
        if ((int)local_430 < 0) goto LAB_710375040c;
        if (((DAT_7105332ed8 & 1) == 0) &&
           (iVar16 = __cxa_guard_acquire(&DAT_7105332ed8), iVar16 != 0)) {
          DAT_7105332ec8 = (long *)0x0;
          DAT_7105332ed0 = 0;
          ppuVar29 = &PTR_LOOP_7104f17000;
          DAT_7105332ec0 = &DAT_7105332ec8;
          FUN_71000001c0();
          __cxa_guard_release(&DAT_7105332ed8);
        }
        plVar37 = (long *)&DAT_7105332ec8;
        plVar28 = plVar37;
        if (DAT_7105332ec8 != (long *)0x0) {
          uVar18 = (ulong)local_120;
          uVar45 = ~uVar18;
          plVar72 = DAT_7105332ec8;
LAB_7103750324:
          do {
            plVar37 = plVar72;
            uVar50 = (ulong)*(ushort *)((long)plVar37 + 0x11a);
            pbVar32 = (byte *)((long)plVar37 + 0x1a);
            uVar44 = uVar50;
            if (uVar18 <= uVar50) {
              uVar44 = uVar18;
            }
            uVar34 = (uint)local_120;
            uVar49 = (uint)*(ushort *)((long)plVar37 + 0x11a);
            if (uVar44 != 0) {
              uVar47 = uVar45;
              if (uVar45 < ~uVar50) {
                uVar47 = ~uVar50;
              }
              pbVar62 = (byte *)&local_220;
              lVar43 = uVar47 + 1;
              pbVar65 = pbVar32;
              do {
                iVar16 = (uint)*pbVar62 - (uint)*pbVar65;
                if (iVar16 != 0) {
                  iVar3 = uVar34 - uVar49;
                  if (iVar16 != 0) {
                    iVar3 = iVar16;
                  }
                  if (iVar3 < 0) goto LAB_71037503d4;
                  goto LAB_710375037c;
                }
                if (*pbVar62 == 0) break;
                pbVar62 = pbVar62 + 1;
                pbVar65 = pbVar65 + 1;
                lVar43 = lVar43 + 1;
              } while (lVar43 != 0);
            }
            if (-1 < (int)(uVar34 - uVar49)) {
LAB_710375037c:
              if (uVar44 != 0) {
                uVar44 = uVar45;
                if (uVar45 < ~uVar50) {
                  uVar44 = ~uVar50;
                }
                pbVar62 = (byte *)&local_220;
                lVar43 = uVar44 + 1;
                do {
                  iVar16 = (uint)*pbVar32 - (uint)*pbVar62;
                  if (iVar16 != 0) {
                    iVar3 = uVar49 - uVar34;
                    if (iVar16 != 0) {
                      iVar3 = iVar16;
                    }
                    goto joined_r0x0071037503f4;
                  }
                  if (*pbVar32 == 0) break;
                  pbVar32 = pbVar32 + 1;
                  pbVar62 = pbVar62 + 1;
                  lVar43 = lVar43 + 1;
                } while (lVar43 != 0);
              }
              iVar3 = uVar49 - uVar34;
joined_r0x0071037503f4:
              if (iVar3 < 0) {
                plVar28 = plVar37 + 1;
                plVar72 = (long *)*plVar28;
                if ((long *)*plVar28 != (long *)0x0) goto LAB_7103750324;
              }
              lVar43 = *plVar28;
              goto joined_r0x0071037504e0;
            }
LAB_71037503d4:
            plVar72 = (long *)*plVar37;
            plVar28 = plVar37;
          } while ((long *)*plVar37 != (long *)0x0);
          lVar43 = *plVar37;
joined_r0x0071037504e0:
          param_3 = ppuVar29;
          if (lVar43 != 0) goto LAB_710375040c;
        }
        plVar72 = (long *)FUN_710392e290(0x10,0x120,(long ****)ppuVar29,param_4,param_5,param_6,
                                         param_7,param_8);
        if (plVar72 == (long *)0x0) {
          if (DAT_7105332f00 != (long *)0x0) {
            local_e0 = 0;
            local_430 = (long ****)&DAT_00000120;
            ppuVar29 = (undefined **)&local_430;
            uVar18 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_e0);
            if (((uVar18 & 1) != 0) &&
               (plVar72 = (long *)FUN_710392e290(0x10,0x120,(long ****)ppuVar29,param_4,param_5,
                                                 param_6,param_7,param_8), plVar72 != (long *)0x0))
            goto LAB_71037504a8;
          }
          plVar72 = (long *)0x0;
        }
LAB_71037504a8:
        puVar38 = (undefined1 *)((long)plVar72 + 0x1a);
        *puVar38 = 0;
        uVar18 = (ulong)local_120;
        *(undefined2 *)((long)plVar72 + 0x11a) = 0;
        if (uVar18 != 0) {
          if (local_120 == 1) {
            uVar45 = 0;
            puVar20 = &local_220;
LAB_7103750534:
            uVar10 = *(undefined1 *)puVar20;
            *(short *)((long)plVar72 + 0x11a) = (short)uVar45 + 1;
            *(undefined1 *)((long)plVar72 + uVar45 + 0x1a) = uVar10;
            uVar45 = (ulong)*(ushort *)((long)plVar72 + 0x11a);
          }
          else {
            uVar45 = 0;
            puVar20 = &local_220;
            lVar43 = (uVar18 & 1) - uVar18;
            do {
              uVar10 = *(undefined1 *)puVar20;
              *(short *)((long)plVar72 + 0x11a) = (short)uVar45 + 1;
              lVar43 = lVar43 + 2;
              *(undefined1 *)((long)plVar72 + uVar45 + 0x1a) = uVar10;
              uVar11 = *(ushort *)((long)plVar72 + 0x11a);
              uVar10 = *(undefined1 *)((long)puVar20 + 1);
              puVar20 = (undefined8 *)((long)puVar20 + 2);
              *(ushort *)((long)plVar72 + 0x11a) = uVar11 + 1;
              *(undefined1 *)((long)plVar72 + (ulong)uVar11 + 0x1a) = uVar10;
              uVar45 = (ulong)*(ushort *)((long)plVar72 + 0x11a);
            } while (lVar43 != 0);
            if ((local_120 & 1) != 0) goto LAB_7103750534;
          }
          puVar38 = (undefined1 *)((long)plVar72 + uVar45 + 0x1a);
        }
        *puVar38 = 0;
        plVar72[2] = (long)plVar37;
        *plVar72 = 0;
        plVar72[1] = 0;
        *plVar28 = (long)plVar72;
        if ((undefined8 *)*DAT_7105332ec0 != (undefined8 *)0x0) {
          plVar72 = (long *)*plVar28;
          DAT_7105332ec0 = (undefined8 *)*DAT_7105332ec0;
        }
        std::__tree_balance_after_insert<std::__tree_node_base<void*>*>(DAT_7105332ec8,plVar72);
        DAT_7105332ed0 = DAT_7105332ed0 + 1;
        if (((byte)local_98 & 1) != 0) goto LAB_7103750414;
LAB_71037505a4:
        if (((ulong)local_b0[0] & 1) == 0) goto LAB_71037505ac;
LAB_7103750428:
        if (local_a0 == (char *)0x0) goto LAB_71037505ac;
        FUN_710392eb40((ulong)local_a0);
        plVar37 = (long *)plVar57[1];
        param_3 = ppuVar29;
      }
      if (plVar37 == (long *)0x0) {
        plVar37 = plVar57 + 2;
        bVar15 = *(long **)*plVar37 != plVar57;
        plVar57 = (long *)*plVar37;
        if (bVar15) {
          do {
            lVar43 = *plVar37;
            plVar37 = (long *)(lVar43 + 0x10);
            plVar57 = (long *)*plVar37;
          } while (*(long *)*plVar37 != lVar43);
        }
      }
      else {
        do {
          plVar57 = plVar37;
          plVar37 = (long *)*plVar57;
        } while (plVar37 != (long *)0x0);
      }
    } while (plVar57 != param_1 + 0x11);
  }
  if (cVar9 != '\0' || cVar8 != '\0') {
    if (((DAT_7105332ed8 & 1) == 0) && (iVar16 = __cxa_guard_acquire(&DAT_7105332ed8), iVar16 != 0))
    {
      DAT_7105332ec8 = (long *)0x0;
      DAT_7105332ed0 = 0;
      param_3 = &PTR_LOOP_7104f17000;
      DAT_7105332ec0 = &DAT_7105332ec8;
      FUN_71000001c0();
      __cxa_guard_release(&DAT_7105332ed8);
    }
    local_430 = (long ****)CONCAT44(local_430._4_4_,0x6d6f72);
    local_330 = 3;
    FUN_710353b7b0((byte *)&local_430,(undefined1 *)&local_430,(long ****)param_3,param_4,param_5,
                   param_6,param_7,param_8);
  }
  if (((DAT_7105332ed8 & 1) == 0) && (iVar16 = __cxa_guard_acquire(&DAT_7105332ed8), iVar16 != 0)) {
    DAT_7105332ec8 = (long *)0x0;
    DAT_7105332ed0 = 0;
    param_3 = &PTR_LOOP_7104f17000;
    DAT_7105332ec0 = &DAT_7105332ec8;
    FUN_71000001c0();
    __cxa_guard_release(&DAT_7105332ed8);
  }
  local_330 = 4;
  local_430 = (long ****)CONCAT35(local_430._5_3_,0x65766173);
  FUN_710353b7b0((byte *)&local_430,(undefined1 *)&local_430,(long ****)param_3,param_4,param_5,
                 param_6,param_7,param_8);
  if (((DAT_7105332ed8 & 1) == 0) && (iVar16 = __cxa_guard_acquire(&DAT_7105332ed8), iVar16 != 0)) {
    DAT_7105332ec8 = (long *)0x0;
    DAT_7105332ed0 = 0;
    param_3 = &PTR_LOOP_7104f17000;
    DAT_7105332ec0 = &DAT_7105332ec8;
    FUN_71000001c0();
    __cxa_guard_release(&DAT_7105332ed8);
  }
  local_330 = 5;
  local_430 = (long ****)CONCAT26(local_430._6_2_,0x6568636163);
  FUN_710353b7b0((byte *)&local_430,(undefined1 *)&local_430,(long ****)param_3,param_4,param_5,
                 param_6,param_7,param_8);
  if ((char)local_43e != '\0') {
    if (((DAT_7105332ed8 & 1) == 0) && (iVar16 = __cxa_guard_acquire(&DAT_7105332ed8), iVar16 != 0))
    {
      DAT_7105332ec8 = (long *)0x0;
      DAT_7105332ed0 = 0;
      param_3 = &PTR_LOOP_7104f17000;
      DAT_7105332ec0 = &DAT_7105332ec8;
      FUN_71000001c0();
      __cxa_guard_release(&DAT_7105332ed8);
    }
    local_330 = 4;
    local_430 = (long ****)CONCAT35(local_430._5_3_,0x636d6473);
    FUN_710353b7b0((byte *)&local_430,(undefined1 *)&local_430,(long ****)param_3,param_4,param_5,
                   param_6,param_7,param_8);
  }
  if (((local_458 & 1) != 0) && (local_448 != 0)) {
    FUN_710392eb40(local_448);
  }
  if (((local_470 & 1) != 0) && (local_460 != 0)) {
    FUN_710392eb40(local_460);
  }
  if ((((ulong)local_488 & 1) != 0) && (local_478 != (long ***)0x0)) {
    FUN_710392eb40((ulong)local_478);
  }
  if ((((ulong)local_4a0 & 1) != 0) && (local_490 != 0)) {
    FUN_710392eb40(local_490);
  }
  puVar20 = (undefined8 *)
            FUN_710392e290(0x10,0x40,(long ****)param_3,param_4,param_5,param_6,param_7,param_8);
  if (puVar20 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_220 = (undefined **)((ulong)local_220 & 0xffffffff00000000);
      local_430 = (long ****)&DAT_00000040;
      param_3 = (undefined **)&local_430;
      uVar18 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_220);
      if (((uVar18 & 1) != 0) &&
         (puVar20 = (undefined8 *)
                    FUN_710392e290(0x10,0x40,(long ****)param_3,param_4,param_5,param_6,param_7,
                                   param_8), puVar20 != (undefined8 *)0x0)) goto LAB_7103750774;
    }
    puVar20 = (undefined8 *)0x0;
  }
LAB_7103750774:
  puVar20[2] = &DAT_710523d150;
  puVar20[6] = puVar20 + 2;
  *puVar20 = &DAT_710593b4d0;
  puVar20[1] = DAT_710593b4d8;
  *DAT_710593b4d8 = puVar20;
  DAT_710593b4e0 = DAT_710593b4e0 + 1;
  DAT_710593b4d8 = puVar20;
  while (DAT_71052b6e70 == (undefined8 *)0x0) {
    do {
      if (DAT_71052b6e78 != 0) {
        ClearExclusiveLocal();
        if (((DAT_71052b6e80 & 1) == 0) &&
           (iVar16 = __cxa_guard_acquire(&DAT_71052b6e80), iVar16 != 0)) {
          DAT_71052b6748 = 0;
          DAT_71052b6750 = 0x40000000;
          DAT_71052b6758 = 0x10;
          DAT_71052b6770 = 0;
          param_3 = &PTR_LOOP_7104f17000;
          DAT_71052b6740 = 0;
          DAT_71052b6760 = 0;
          _DAT_71052b6768 = 1;
          DAT_71052b6738 = &PTR_FUN_7105241e98;
          DAT_71052b6778 = 0;
          DAT_71052b6780 = 0;
          FUN_71000001c0();
          __cxa_guard_release(&DAT_71052b6e80);
        }
        DAT_71052b6e70 = &DAT_71052b6738;
        goto LAB_7103750800;
      }
      cVar8 = '\x01';
      bVar15 = (bool)ExclusiveMonitorPass(0x71052b6e78,0x10);
      if (bVar15) {
        DAT_71052b6e78 = 1;
        cVar8 = ExclusiveMonitorsStatus();
      }
    } while (cVar8 != '\0');
    nn::os::YieldThread();
  }
LAB_7103750800:
  puVar20 = DAT_71052b6e70;
  std::mutex::lock();
  uVar58 = *param_1;
  uVar2 = param_1[1];
  uVar51 = param_1[3];
  puVar20[3] = param_1[2];
  puVar20[4] = uVar51;
  puVar20[1] = uVar58;
  puVar20[2] = uVar2;
  std::mutex::unlock();
  lVar43 = nu::ModuleInitializer<nu::GraphicsModule,nu::GraphicsModuleDesc>::Instance();
  std::mutex::lock();
  *(undefined8 *)(lVar43 + 8) = param_1[4];
  uVar51 = param_1[7];
  uVar58 = param_1[5];
  uVar2 = param_1[6];
  *(undefined2 *)(lVar43 + 0x28) = *(undefined2 *)(param_1 + 8);
  *(undefined8 *)(lVar43 + 0x10) = uVar58;
  *(undefined8 *)(lVar43 + 0x18) = uVar2;
  *(undefined8 *)(lVar43 + 0x20) = uVar51;
  std::mutex::unlock();
  while (DAT_71052b6ed0 == (undefined8 *)0x0) {
    do {
      if (DAT_71052b6ed8 != 0) {
        ClearExclusiveLocal();
        if (((DAT_71052b6ee0 & 1) == 0) &&
           (iVar16 = __cxa_guard_acquire(&DAT_71052b6ee0), iVar16 != 0)) {
          DAT_71052b6cb8 = &PTR_FUN_7105290ea8;
          DAT_71052b6c60 = &PTR_FUN_7105291c98;
          DAT_71052b6d10 = &PTR_FUN_71052318d0;
          DAT_71052b6d18 = 0;
          DAT_71052b6d70 = &PTR_FUN_71052318d0;
          DAT_71052b6d78 = 0;
          param_3 = &PTR_LOOP_7104f17000;
          DAT_71052b6c8c = 0;
          DAT_71052b6c84 = 0;
          DAT_71052b6c7c = 0;
          DAT_71052b6c74 = 0;
          DAT_71052b6c6c = 0x100000000;
          DAT_71052b6cb0 = 0x3f800000;
          DAT_71052b6ce0 = 0x3f800000;
          DAT_71052b6d08 = 0x3f800000;
          DAT_71052b6db0 = 0;
          DAT_71052b6db8 = &PTR_FUN_7105291ba8;
          DAT_71052b6de0 = 0x3f800000;
          DAT_71052b6ca0 = 0;
          DAT_71052b6ca8 = 0;
          DAT_71052b6c90 = 0;
          DAT_71052b6c98 = 0;
          DAT_71052b6cd0 = 0;
          DAT_71052b6cd8 = 0;
          DAT_71052b6cc0 = 0;
          DAT_71052b6cc8 = 0;
          DAT_71052b6cf8 = 0;
          DAT_71052b6d00 = 0;
          DAT_71052b6ce8 = 0;
          DAT_71052b6cf0 = 0;
          DAT_71052b6d20 = 0;
          DAT_71052b6d28 = 0;
          DAT_71052b6d40 = 0;
          DAT_71052b6d48 = 0;
          DAT_71052b6d30 = &PTR_FUN_71052302c0;
          DAT_71052b6d38 = 0;
          DAT_71052b6d60 = 0;
          DAT_71052b6d68 = 0;
          DAT_71052b6d50 = &DAT_7105231730;
          DAT_71052b6d58 = 0;
          DAT_71052b6d80 = 0;
          DAT_71052b6d88 = 0;
          DAT_71052b6da0 = 0;
          DAT_71052b6da8 = 0;
          DAT_71052b6d90 = &PTR_FUN_71052302c0;
          DAT_71052b6d98 = 0;
          DAT_71052b6dd0 = 0;
          DAT_71052b6dd8 = 0;
          DAT_71052b6dc0 = 0;
          DAT_71052b6dc8 = 0;
          DAT_71052b6df8 = 0;
          DAT_71052b6e00 = 0;
          DAT_71052b6df0 = 0;
          _DAT_71052b6de8 = 1;
          FUN_71000001c0();
          __cxa_guard_release(&DAT_71052b6ee0);
        }
        DAT_71052b6ed0 = &DAT_71052b6c60;
        goto LAB_71037508b8;
      }
      cVar8 = '\x01';
      bVar15 = (bool)ExclusiveMonitorPass(0x71052b6ed8,0x10);
      if (bVar15) {
        DAT_71052b6ed8 = 1;
        cVar8 = ExclusiveMonitorsStatus();
      }
    } while (cVar8 != '\0');
    nn::os::YieldThread();
  }
LAB_71037508b8:
  std::mutex::lock();
  std::mutex::unlock();
  lVar43 = FUN_71002c53c0();
  std::mutex::lock();
  *(undefined4 *)(lVar43 + 8) = *(undefined4 *)((long)param_1 + 0x4c);
  std::mutex::unlock();
  while (DAT_71052b6ea0 == (long *)0x0) {
    do {
      if (DAT_71052b6ea8 != 0) {
        ClearExclusiveLocal();
        FUN_71002c4f60();
        DAT_71052b6ea0 = &DAT_71052b69f8;
        goto LAB_7103750940;
      }
      cVar8 = '\x01';
      bVar15 = (bool)ExclusiveMonitorPass(0x71052b6ea8,0x10);
      if (bVar15) {
        DAT_71052b6ea8 = 1;
        cVar8 = ExclusiveMonitorsStatus();
      }
    } while (cVar8 != '\0');
    nn::os::YieldThread();
  }
LAB_7103750940:
  plVar57 = DAT_71052b6ea0;
  std::mutex::lock();
  if (plVar57 + 1 != param_1 + 10) {
    param_3 = (undefined **)param_1[0xb];
    pvVar61 = (void *)param_1[0xc];
    if ((*(byte *)(param_1 + 10) & 1) == 0) {
      pvVar61 = (void *)((long)param_1 + 0x51);
      param_3 = (undefined **)(ulong)(*(byte *)(param_1 + 10) >> 1);
    }
    FUN_71002c51f0((ulong *)(plVar57 + 1),pvVar61,(ulong)param_3,param_4,param_5,param_6,param_7,
                   param_8);
  }
  std::mutex::unlock();
  while (DAT_71052b6ee8 == (long *)0x0) {
    do {
      if (DAT_71052b6ef0 != 0) {
        ClearExclusiveLocal();
        if (((DAT_71052b6ef8 & 1) == 0) &&
           (iVar16 = __cxa_guard_acquire(&DAT_71052b6ef8), iVar16 != 0)) {
          param_3 = &PTR_LOOP_7104f17000;
          DAT_71052b6e34 = 0;
          DAT_71052b6e2c = 0;
          DAT_71052b6e24 = 0;
          DAT_71052b6e1c = 0;
          DAT_71052b6e14 = 0x100000000;
          DAT_71052b6e08 = &PTR_FUN_7105292260;
          FUN_71000001c0();
          __cxa_guard_release(&DAT_71052b6ef8);
        }
        DAT_71052b6ee8 = (long *)&DAT_71052b6e08;
        goto LAB_71037509d4;
      }
      cVar8 = '\x01';
      bVar15 = (bool)ExclusiveMonitorPass(0x71052b6ef0,0x10);
      if (bVar15) {
        DAT_71052b6ef0 = 1;
        cVar8 = ExclusiveMonitorsStatus();
      }
    } while (cVar8 != '\0');
    nn::os::YieldThread();
  }
LAB_71037509d4:
  std::mutex::lock();
  std::mutex::unlock();
  while (DAT_71052b6f00 == (long *)0x0) {
    do {
      if (DAT_71052b6f08 != 0) {
        ClearExclusiveLocal();
        if (((DAT_71052b6f10 & 1) == 0) &&
           (iVar16 = __cxa_guard_acquire(&DAT_71052b6f10), iVar16 != 0)) {
          DAT_71052b6e48 = 0;
          DAT_71052b6e38 = &PTR_FUN_7105293ad8;
          DAT_71052b6e40 = 4;
          param_3 = &PTR_LOOP_7104f17000;
          DAT_71052b6e60 = 0;
          DAT_71052b6e68 = 0;
          DAT_71052b6e58 = 0;
          _DAT_71052b6e50 = 1;
          FUN_71000001c0();
          __cxa_guard_release(&DAT_71052b6f10);
        }
        DAT_71052b6f00 = (long *)&DAT_71052b6e38;
        goto LAB_7103750a40;
      }
      cVar8 = '\x01';
      bVar15 = (bool)ExclusiveMonitorPass(0x71052b6f08,0x10);
      if (bVar15) {
        DAT_71052b6f08 = 1;
        cVar8 = ExclusiveMonitorsStatus();
      }
    } while (cVar8 != '\0');
    nn::os::YieldThread();
  }
LAB_7103750a40:
  plVar57 = DAT_71052b6f00;
  std::mutex::lock();
  plVar57[1] = param_1[0xe];
  std::mutex::unlock();
  FUN_71037cb4a0((undefined4 *)&local_430);
  plVar57 = (long *)nu::ModuleInitializer<nu::GraphicsModule,nu::GraphicsModuleDesc>::Instance();
  std::mutex::lock();
  iVar16 = (int)plVar57[6];
  if (iVar16 == 0) {
    (**(code **)(*plVar57 + 0x10))(plVar57);
    (**(code **)*plVar57)(&local_430,plVar57,plVar57 + 1);
    (**(code **)(*plVar57 + 0x20))(plVar57);
    iVar16 = (int)plVar57[6];
  }
  *(int *)(plVar57 + 6) = iVar16 + 1;
  std::mutex::unlock();
  FUN_71038cd4f0((undefined4 *)&local_430);
  plVar57 = (long *)FUN_71002c53c0();
  std::mutex::lock();
  iVar16 = *(int *)((long)plVar57 + 0xc);
  if (iVar16 == 0) {
    (**(code **)(*plVar57 + 0x10))(plVar57);
    (**(code **)*plVar57)(&local_430,plVar57,plVar57 + 1);
    (**(code **)(*plVar57 + 0x20))(plVar57);
    iVar16 = *(int *)((long)plVar57 + 0xc);
  }
  *(int *)((long)plVar57 + 0xc) = iVar16 + 1;
  std::mutex::unlock();
  while (DAT_71052b6ea0 == (long *)0x0) {
    do {
      if (DAT_71052b6ea8 != 0) {
        ClearExclusiveLocal();
        FUN_71002c4f60();
        DAT_71052b6ea0 = &DAT_71052b69f8;
        goto LAB_7103750b84;
      }
      cVar8 = '\x01';
      bVar15 = (bool)ExclusiveMonitorPass(0x71052b6ea8,0x10);
      if (bVar15) {
        DAT_71052b6ea8 = 1;
        cVar8 = ExclusiveMonitorsStatus();
      }
    } while (cVar8 != '\0');
    nn::os::YieldThread();
  }
LAB_7103750b84:
  plVar57 = DAT_71052b6ea0;
  std::mutex::lock();
  iVar16 = (int)plVar57[4];
  if (iVar16 == 0) {
    (**(code **)(*plVar57 + 0x10))(plVar57);
    (**(code **)*plVar57)(&local_430,plVar57,plVar57 + 1);
    (**(code **)(*plVar57 + 0x20))(plVar57);
    iVar16 = (int)plVar57[4];
  }
  *(int *)(plVar57 + 4) = iVar16 + 1;
  std::mutex::unlock();
  while (DAT_71052b6ee8 == (long *)0x0) {
    do {
      if (DAT_71052b6ef0 != 0) {
        ClearExclusiveLocal();
        if (((DAT_71052b6ef8 & 1) == 0) &&
           (iVar16 = __cxa_guard_acquire(&DAT_71052b6ef8), iVar16 != 0)) {
          param_3 = &PTR_LOOP_7104f17000;
          DAT_71052b6e34 = 0;
          DAT_71052b6e2c = 0;
          DAT_71052b6e24 = 0;
          DAT_71052b6e1c = 0;
          DAT_71052b6e14 = 0x100000000;
          DAT_71052b6e08 = &PTR_FUN_7105292260;
          FUN_71000001c0();
          __cxa_guard_release(&DAT_71052b6ef8);
        }
        DAT_71052b6ee8 = (long *)&DAT_71052b6e08;
        goto LAB_7103750c38;
      }
      cVar8 = '\x01';
      bVar15 = (bool)ExclusiveMonitorPass(0x71052b6ef0,0x10);
      if (bVar15) {
        DAT_71052b6ef0 = 1;
        cVar8 = ExclusiveMonitorsStatus();
      }
    } while (cVar8 != '\0');
    nn::os::YieldThread();
  }
LAB_7103750c38:
  plVar57 = DAT_71052b6ee8;
  std::mutex::lock();
  iVar16 = *(int *)((long)plVar57 + 0xc);
  if (iVar16 == 0) {
    (**(code **)(*plVar57 + 0x10))(plVar57);
    (**(code **)*plVar57)(&local_430,plVar57,plVar57 + 1);
    (**(code **)(*plVar57 + 0x20))(plVar57);
    iVar16 = *(int *)((long)plVar57 + 0xc);
  }
  *(int *)((long)plVar57 + 0xc) = iVar16 + 1;
  std::mutex::unlock();
  while (DAT_71052b6f00 == (long *)0x0) {
    do {
      if (DAT_71052b6f08 != 0) {
        ClearExclusiveLocal();
        if (((DAT_71052b6f10 & 1) == 0) &&
           (iVar16 = __cxa_guard_acquire(&DAT_71052b6f10), iVar16 != 0)) {
          DAT_71052b6e48 = 0;
          DAT_71052b6e38 = &PTR_FUN_7105293ad8;
          DAT_71052b6e40 = 4;
          param_3 = &PTR_LOOP_7104f17000;
          DAT_71052b6e60 = 0;
          DAT_71052b6e68 = 0;
          DAT_71052b6e58 = 0;
          _DAT_71052b6e50 = 1;
          FUN_71000001c0();
          __cxa_guard_release(&DAT_71052b6f10);
        }
        DAT_71052b6f00 = (long *)&DAT_71052b6e38;
        goto LAB_7103750cec;
      }
      cVar8 = '\x01';
      bVar15 = (bool)ExclusiveMonitorPass(0x71052b6f08,0x10);
      if (bVar15) {
        DAT_71052b6f08 = 1;
        cVar8 = ExclusiveMonitorsStatus();
      }
    } while (cVar8 != '\0');
    nn::os::YieldThread();
  }
LAB_7103750cec:
  plVar57 = DAT_71052b6f00;
  std::mutex::lock();
  iVar16 = (int)plVar57[2];
  if (iVar16 == 0) {
    (**(code **)(*plVar57 + 0x10))(plVar57);
    (**(code **)*plVar57)(&local_430,plVar57,plVar57 + 1);
    (**(code **)(*plVar57 + 0x20))(plVar57);
    iVar16 = (int)plVar57[2];
  }
  *(int *)(plVar57 + 2) = iVar16 + 1;
  std::mutex::unlock();
  puVar20 = (undefined8 *)
            FUN_710392e290(0x10,0x40,(long ****)param_3,param_4,param_5,param_6,param_7,param_8);
  if (puVar20 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_220 = (undefined **)((ulong)local_220 & 0xffffffff00000000);
      local_430 = (long ****)&DAT_00000040;
      param_3 = (undefined **)&local_430;
      uVar18 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_220);
      if (((uVar18 & 1) != 0) &&
         (puVar20 = (undefined8 *)
                    FUN_710392e290(0x10,0x40,(long ****)param_3,param_4,param_5,param_6,param_7,
                                   param_8), puVar20 != (undefined8 *)0x0)) goto LAB_7103750da0;
    }
    puVar20 = (undefined8 *)0x0;
  }
LAB_7103750da0:
  puVar20[2] = &DAT_710523d198;
  puVar20[6] = puVar20 + 2;
  *puVar20 = &DAT_710593b4d0;
  puVar20[1] = DAT_710593b4d8;
  *DAT_710593b4d8 = puVar20;
  DAT_710593b4e0 = DAT_710593b4e0 + 1;
  DAT_710522fbe8 = param_1[0x81];
  DAT_710522fbe0 = (undefined4)param_1[0x80];
  DAT_710593b4d8 = puVar20;
  puVar21 = (undefined4 *)
            FUN_710392e290(0x10,0x60,(long ****)param_3,param_4,param_5,param_6,param_7,param_8);
  if (puVar21 == (undefined4 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_220 = (undefined **)((ulong)local_220 & 0xffffffff00000000);
      local_430 = (long ****)&DAT_00000060;
      pppplVar63 = (long ****)&local_430;
      uVar18 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_220);
      if (((uVar18 & 1) != 0) &&
         (puVar21 = (undefined4 *)
                    FUN_710392e290(0x10,0x60,pppplVar63,param_4,param_5,param_6,param_7,param_8),
         puVar21 != (undefined4 *)0x0)) goto LAB_7103750e40;
    }
    puVar21 = (undefined4 *)0x0;
  }
LAB_7103750e40:
  pppplVar63 = (long ****)(param_1 + 0x7d);
  FUN_7103549bd0(puVar21,0,pppplVar63,param_4,param_5,param_6,param_7,param_8);
  DAT_7105333f58 = puVar21;
  puVar21 = (undefined4 *)
            FUN_710392e290(0x10,0x60,pppplVar63,param_4,param_5,param_6,param_7,param_8);
  if (puVar21 == (undefined4 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_220 = (undefined **)((ulong)local_220 & 0xffffffff00000000);
      local_430 = (long ****)&DAT_00000060;
      pppplVar63 = (long ****)&local_430;
      uVar18 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_220);
      if (((uVar18 & 1) != 0) &&
         (puVar21 = (undefined4 *)
                    FUN_710392e290(0x10,0x60,pppplVar63,param_4,param_5,param_6,param_7,param_8),
         puVar21 != (undefined4 *)0x0)) goto LAB_7103750eb4;
    }
    puVar21 = (undefined4 *)0x0;
  }
LAB_7103750eb4:
  pppplVar63 = (long ****)((long)param_1 + 0x3f4);
  FUN_7103549bd0(puVar21,1,pppplVar63,param_4,param_5,param_6,param_7,param_8);
  DAT_7105333f60 = puVar21;
  puVar20 = (undefined8 *)
            FUN_710392e290(0x10,0x40,pppplVar63,param_4,param_5,param_6,param_7,param_8);
  if (puVar20 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_220 = (undefined **)((ulong)local_220 & 0xffffffff00000000);
      local_430 = (long ****)&DAT_00000040;
      pppplVar63 = (long ****)&local_430;
      uVar18 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_220);
      if (((uVar18 & 1) != 0) &&
         (puVar20 = (undefined8 *)
                    FUN_710392e290(0x10,0x40,pppplVar63,param_4,param_5,param_6,param_7,param_8),
         puVar20 != (undefined8 *)0x0)) goto LAB_7103750f20;
    }
    puVar20 = (undefined8 *)0x0;
  }
LAB_7103750f20:
  puVar20[2] = &DAT_710523d1e0;
  puVar20[6] = puVar20 + 2;
  *puVar20 = &DAT_710593b4d0;
  puVar20[1] = DAT_710593b4d8;
  *DAT_710593b4d8 = puVar20;
  DAT_710593b4e0 = DAT_710593b4e0 + 1;
  DAT_710593b4d8 = puVar20;
  puVar20 = (undefined8 *)
            FUN_710392e290(0x10,0x250,pppplVar63,param_4,param_5,param_6,param_7,param_8);
  if (puVar20 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_220 = (undefined **)((ulong)local_220 & 0xffffffff00000000);
      local_430 = (long ****)0x250;
      pppplVar63 = (long ****)&local_430;
      uVar18 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_220);
      if (((uVar18 & 1) != 0) &&
         (puVar20 = (undefined8 *)
                    FUN_710392e290(0x10,0x250,pppplVar63,param_4,param_5,param_6,param_7,param_8),
         puVar20 != (undefined8 *)0x0)) goto LAB_7103750fa8;
    }
    puVar20 = (undefined8 *)0x0;
  }
LAB_7103750fa8:
  prVar22 = (recursive_mutex *)
            FUN_710392e290(0x10,0x20,pppplVar63,param_4,param_5,param_6,param_7,param_8);
  if (prVar22 == (recursive_mutex *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_220 = (undefined **)((ulong)local_220 & 0xffffffff00000000);
      local_430 = (long ****)&SUB_00000020;
      pppplVar63 = (long ****)&local_430;
      uVar18 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_220);
      if (((uVar18 & 1) != 0) &&
         (prVar22 = (recursive_mutex *)
                    FUN_710392e290(0x10,0x20,pppplVar63,param_4,param_5,param_6,param_7,param_8),
         prVar22 != (recursive_mutex *)0x0)) goto LAB_7103751004;
    }
    prVar22 = (recursive_mutex *)0x0;
  }
LAB_7103751004:
  std::recursive_mutex::recursive_mutex(prVar22);
  *puVar20 = prVar22;
  puVar23 = (undefined8 *)FUN_710392e290(0x10,8,pppplVar63,param_4,param_5,param_6,param_7,param_8);
  if (puVar23 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_220 = (undefined **)((ulong)local_220 & 0xffffffff00000000);
      local_430 = (long ****)&DAT_00000008;
      pppplVar63 = (long ****)&local_430;
      uVar18 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_220);
      if (((uVar18 & 1) != 0) &&
         (puVar23 = (undefined8 *)
                    FUN_710392e290(0x10,8,pppplVar63,param_4,param_5,param_6,param_7,param_8),
         puVar23 != (undefined8 *)0x0)) goto LAB_710375106c;
    }
    puVar23 = (undefined8 *)0x0;
  }
LAB_710375106c:
  FUN_710353c6e0(puVar23,0,pppplVar63,param_4,param_5,param_6,param_7,param_8);
  puVar20[1] = puVar23;
  puVar23 = (undefined8 *)FUN_710392e290(0x10,8,pppplVar63,param_4,param_5,param_6,param_7,param_8);
  if (puVar23 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_220 = (undefined **)((ulong)local_220 & 0xffffffff00000000);
      local_430 = (long ****)&DAT_00000008;
      pppplVar63 = (long ****)&local_430;
      uVar18 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_220);
      if (((uVar18 & 1) != 0) &&
         (puVar23 = (undefined8 *)
                    FUN_710392e290(0x10,8,pppplVar63,param_4,param_5,param_6,param_7,param_8),
         puVar23 != (undefined8 *)0x0)) goto LAB_71037510d8;
    }
    puVar23 = (undefined8 *)0x0;
  }
LAB_71037510d8:
  FUN_710353c6e0(puVar23,0,pppplVar63,param_4,param_5,param_6,param_7,param_8);
  puVar20[2] = puVar23;
  puVar23 = (undefined8 *)FUN_710392e290(0x10,8,pppplVar63,param_4,param_5,param_6,param_7,param_8);
  if (puVar23 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_220 = (undefined **)((ulong)local_220 & 0xffffffff00000000);
      local_430 = (long ****)&DAT_00000008;
      pppplVar63 = (long ****)&local_430;
      uVar18 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_220);
      if (((uVar18 & 1) != 0) &&
         (puVar23 = (undefined8 *)
                    FUN_710392e290(0x10,8,pppplVar63,param_4,param_5,param_6,param_7,param_8),
         puVar23 != (undefined8 *)0x0)) goto LAB_7103751144;
    }
    puVar23 = (undefined8 *)0x0;
  }
LAB_7103751144:
  FUN_710353c6e0(puVar23,0,pppplVar63,param_4,param_5,param_6,param_7,param_8);
  puVar20[3] = puVar23;
  puVar23 = (undefined8 *)FUN_710392e290(0x10,8,pppplVar63,param_4,param_5,param_6,param_7,param_8);
  if (puVar23 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_220 = (undefined **)((ulong)local_220 & 0xffffffff00000000);
      local_430 = (long ****)&DAT_00000008;
      pppplVar63 = (long ****)&local_430;
      uVar18 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_220);
      if (((uVar18 & 1) != 0) &&
         (puVar23 = (undefined8 *)
                    FUN_710392e290(0x10,8,pppplVar63,param_4,param_5,param_6,param_7,param_8),
         puVar23 != (undefined8 *)0x0)) goto LAB_71037511b0;
    }
    puVar23 = (undefined8 *)0x0;
  }
LAB_71037511b0:
  FUN_710353c6e0(puVar23,0,pppplVar63,param_4,param_5,param_6,param_7,param_8);
  puVar20[4] = puVar23;
  puVar23 = (undefined8 *)FUN_710392e290(0x10,8,pppplVar63,param_4,param_5,param_6,param_7,param_8);
  if (puVar23 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_220 = (undefined **)((ulong)local_220 & 0xffffffff00000000);
      local_430 = (long ****)&DAT_00000008;
      pppplVar63 = (long ****)&local_430;
      uVar18 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_220);
      if (((uVar18 & 1) != 0) &&
         (puVar23 = (undefined8 *)
                    FUN_710392e290(0x10,8,pppplVar63,param_4,param_5,param_6,param_7,param_8),
         puVar23 != (undefined8 *)0x0)) goto LAB_710375121c;
    }
    puVar23 = (undefined8 *)0x0;
  }
LAB_710375121c:
  pppplVar63 = (long ****)0x2;
  FUN_7103546d60(puVar23,2,(long ****)0x2,param_4,param_5,param_6,param_7,param_8);
  puVar20[5] = puVar23;
  puVar23 = (undefined8 *)FUN_710392e290(0x10,8,pppplVar63,param_4,param_5,param_6,param_7,param_8);
  if (puVar23 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_220 = (undefined **)((ulong)local_220 & 0xffffffff00000000);
      local_430 = (long ****)&DAT_00000008;
      pppplVar63 = (long ****)&local_430;
      uVar18 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_220);
      if (((uVar18 & 1) != 0) &&
         (puVar23 = (undefined8 *)
                    FUN_710392e290(0x10,8,pppplVar63,param_4,param_5,param_6,param_7,param_8),
         puVar23 != (undefined8 *)0x0)) goto LAB_710375128c;
    }
    puVar23 = (undefined8 *)0x0;
  }
LAB_710375128c:
  pppplVar63 = (long ****)0x1;
  FUN_7103546d60(puVar23,1,(long ****)0x1,param_4,param_5,param_6,param_7,param_8);
  puVar20[6] = puVar23;
  puVar23 = (undefined8 *)FUN_710392e290(0x10,8,pppplVar63,param_4,param_5,param_6,param_7,param_8);
  if (puVar23 == (undefined8 *)0x0) {
    local_220 = (undefined **)((ulong)local_220 & 0xffffffff00000000);
    local_430 = (long ****)&DAT_00000008;
    pppplVar63 = (long ****)&local_430;
    (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_220);
    puVar23 = (undefined8 *)
              FUN_710392e290(0x10,8,pppplVar63,param_4,param_5,param_6,param_7,param_8);
  }
  *puVar23 = 0;
  puVar20[7] = puVar23;
  puVar23 = (undefined8 *)FUN_710392e290(0x10,8,pppplVar63,param_4,param_5,param_6,param_7,param_8);
  if (puVar23 == (undefined8 *)0x0) {
    local_220 = (undefined **)((ulong)local_220 & 0xffffffff00000000);
    local_430 = (long ****)&DAT_00000008;
    pppplVar63 = (long ****)&local_430;
    (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_220);
    puVar23 = (undefined8 *)
              FUN_710392e290(0x10,8,pppplVar63,param_4,param_5,param_6,param_7,param_8);
  }
  *puVar23 = 0;
  puVar20[8] = puVar23;
  puVar23 = (undefined8 *)FUN_710392e290(0x10,8,pppplVar63,param_4,param_5,param_6,param_7,param_8);
  if (puVar23 == (undefined8 *)0x0) {
    local_220 = (undefined **)((ulong)local_220 & 0xffffffff00000000);
    local_430 = (long ****)&DAT_00000008;
    pppplVar63 = (long ****)&local_430;
    (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_220);
    puVar23 = (undefined8 *)
              FUN_710392e290(0x10,8,pppplVar63,param_4,param_5,param_6,param_7,param_8);
  }
  *puVar23 = 0;
  puVar20[9] = puVar23;
  puVar23 = (undefined8 *)
            FUN_710392e290(0x10,0x90,pppplVar63,param_4,param_5,param_6,param_7,param_8);
  if (puVar23 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_220 = (undefined **)((ulong)local_220 & 0xffffffff00000000);
      local_430 = (long ****)&DAT_00000090;
      pppplVar63 = (long ****)&local_430;
      uVar18 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_220);
      if (((uVar18 & 1) != 0) &&
         (puVar23 = (undefined8 *)
                    FUN_710392e290(0x10,0x90,pppplVar63,param_4,param_5,param_6,param_7,param_8),
         puVar23 != (undefined8 *)0x0)) goto LAB_71037513d8;
    }
    puVar23 = (undefined8 *)0x0;
  }
LAB_71037513d8:
  *puVar23 = 0;
  *(undefined4 *)(puVar23 + 1) = 0;
  puVar23[2] = 0;
  puVar23[3] = 0;
  puVar23[4] = 0;
  puVar23[6] = &PTR_FUN_710522fb60;
  puVar23[7] = FUN_7103546520;
  puVar23[10] = puVar23 + 6;
  puVar23[0xc] = &PTR_FUN_710522fba8;
  puVar23[0xd] = FUN_71035465a0;
  puVar23[0x10] = puVar23 + 0xc;
  puVar20[0xc] = puVar20 + 0xc;
  puVar20[0xd] = puVar20 + 0xc;
  puVar20[10] = puVar23;
  puVar20[0xb] = 0;
  puVar20[0xe] = 0;
  puVar20[0xf] = puVar20 + 0xf;
  puVar20[0x10] = puVar20 + 0xf;
  puVar20[0x11] = 0;
  puVar20[0x12] = puVar20 + 0x12;
  puVar20[0x13] = puVar20 + 0x12;
  puVar20[0x14] = 0;
  puVar20[0x15] = puVar20 + 0x15;
  puVar20[0x16] = puVar20 + 0x15;
  puVar20[0x17] = 0;
  puVar20[0x18] = puVar20 + 0x18;
  puVar20[0x19] = puVar20 + 0x18;
  puVar23 = (undefined8 *)
            FUN_710392e290(0x10,0x88,pppplVar63,param_4,param_5,param_6,param_7,param_8);
  if (puVar23 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_220 = (undefined **)((ulong)local_220 & 0xffffffff00000000);
      local_430 = (long ****)&DAT_00000088;
      pppplVar63 = (long ****)&local_430;
      uVar18 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_220);
      if (((uVar18 & 1) != 0) &&
         (puVar23 = (undefined8 *)
                    FUN_710392e290(0x10,0x88,pppplVar63,param_4,param_5,param_6,param_7,param_8),
         puVar23 != (undefined8 *)0x0)) goto LAB_71037514b8;
    }
    puVar23 = (undefined8 *)0x0;
  }
LAB_71037514b8:
  uVar58 = param_1[0x7b];
  prVar22 = (recursive_mutex *)
            FUN_710392e290(0x10,0x20,pppplVar63,param_4,param_5,param_6,param_7,param_8);
  if (prVar22 == (recursive_mutex *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_220 = (undefined **)((ulong)local_220 & 0xffffffff00000000);
      local_430 = (long ****)&SUB_00000020;
      pppplVar63 = (long ****)&local_430;
      uVar18 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_220);
      if (((uVar18 & 1) != 0) &&
         (prVar22 = (recursive_mutex *)
                    FUN_710392e290(0x10,0x20,pppplVar63,param_4,param_5,param_6,param_7,param_8),
         prVar22 != (recursive_mutex *)0x0)) goto LAB_7103751518;
    }
    prVar22 = (recursive_mutex *)0x0;
  }
LAB_7103751518:
  std::recursive_mutex::recursive_mutex(prVar22);
  *puVar23 = prVar22;
  puVar23[0xb] = 0;
  puVar23[0xc] = 0;
  puVar23[9] = 0;
  puVar23[10] = 0;
  puVar23[7] = 0;
  puVar23[8] = 0;
  puVar23[5] = 0;
  puVar23[6] = 0;
  puVar23[3] = 0;
  puVar23[4] = 0;
  puVar23[1] = 0;
  puVar23[2] = 0;
  *(undefined1 *)(puVar23 + 0xd) = 0;
  puVar24 = (undefined8 *)
            FUN_710392e290(0x10,0x70,pppplVar63,param_4,param_5,param_6,param_7,param_8);
  if (puVar24 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_220 = (undefined **)((ulong)local_220 & 0xffffffff00000000);
      local_430 = (long ****)&DAT_00000070;
      pppplVar63 = (long ****)&local_430;
      uVar18 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_220);
      if (((uVar18 & 1) != 0) &&
         (puVar24 = (undefined8 *)
                    FUN_710392e290(0x10,0x70,pppplVar63,param_4,param_5,param_6,param_7,param_8),
         puVar24 != (undefined8 *)0x0)) goto LAB_7103751594;
    }
    puVar24 = (undefined8 *)0x0;
  }
LAB_7103751594:
  puVar24[2] = 0;
  puVar24[3] = 0;
  *(undefined2 *)(puVar24 + 2) = 1;
  *(undefined4 *)(puVar24 + 10) = 0x3f800000;
  *(undefined1 *)((long)puVar24 + 0x12) = 0;
  puVar24[0xd] = 0;
  puVar24[4] = 0;
  puVar24[5] = 0;
  *puVar24 = 0;
  puVar24[1] = 0;
  puVar24[8] = 0;
  puVar24[9] = 0;
  puVar24[6] = 0;
  puVar24[7] = 0;
  puVar24[0xb] = puVar24 + 0xb;
  puVar24[0xc] = puVar24 + 0xb;
  puVar23[0xe] = puVar24;
  puVar24 = (undefined8 *)
            FUN_710392e290(0x10,0x18,pppplVar63,param_4,param_5,param_6,param_7,param_8);
  if (puVar24 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_220 = (undefined **)((ulong)local_220 & 0xffffffff00000000);
      local_430 = (long ****)&SUB_00000018;
      pppplVar63 = (long ****)&local_430;
      uVar18 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_220);
      if (((uVar18 & 1) != 0) &&
         (puVar24 = (undefined8 *)
                    FUN_710392e290(0x10,0x18,pppplVar63,param_4,param_5,param_6,param_7,param_8),
         puVar24 != (undefined8 *)0x0)) goto LAB_7103751628;
    }
    puVar24 = (undefined8 *)0x0;
  }
LAB_7103751628:
  puVar25 = (undefined8 *)
            FUN_710392e290(0x10,0x140,pppplVar63,param_4,param_5,param_6,param_7,param_8);
  if (puVar25 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_220 = (undefined **)((ulong)local_220 & 0xffffffff00000000);
      local_430 = (long ****)&DAT_00000140;
      pppplVar63 = (long ****)&local_430;
      uVar18 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_220);
      if (((uVar18 & 1) != 0) &&
         (puVar25 = (undefined8 *)
                    FUN_710392e290(0x10,0x140,pppplVar63,param_4,param_5,param_6,param_7,param_8),
         puVar25 != (undefined8 *)0x0)) goto LAB_7103751684;
    }
    puVar25 = (undefined8 *)0x0;
  }
LAB_7103751684:
  puVar25[0x20] = 0;
  puVar25[0x21] = 0;
  puVar25[0x1e] = 0;
  puVar25[0x1f] = 0;
  puVar25[7] = 0;
  *(undefined4 *)(puVar25 + 0x22) = 0xffff;
  puVar25[0x1c] = 0;
  puVar25[0x1d] = 0;
  puVar25[0x1a] = 0;
  puVar25[0x1b] = 0;
  puVar25[0x18] = 0;
  puVar25[0x19] = 0;
  puVar25[0x16] = 0;
  puVar25[0x17] = 0;
  puVar25[0x14] = 0;
  puVar25[0x15] = 0;
  puVar25[0x12] = 0;
  puVar25[0x13] = 0;
  puVar25[0x10] = 0;
  puVar25[0x11] = 0;
  puVar25[0xe] = 0;
  puVar25[0xf] = 0;
  puVar25[0xc] = 0;
  puVar25[0xd] = 0;
  puVar25[10] = 0;
  puVar25[0xb] = 0;
  puVar25[8] = 0;
  puVar25[9] = 0;
  if (DAT_7105332f20 != (undefined8 *)0x0) {
    local_430 = (long ****)
                (CONCAT44(local_430._4_4_,
                          *(undefined4 *)
                           (*(long *)(**(long **)((long)DAT_7105332f20 + 0x78) + 0x40) + 0x3c)) &
                0xffffffff00ffffff);
    uVar17 = FUN_71035434e0((int *)&local_430);
    *(undefined4 *)(puVar25 + 0x22) = uVar17;
  }
  *(undefined4 *)((long)puVar25 + 0x114) = 0xffffffff;
  puVar25[0x23] = 0;
  puVar25[0x26] = 0;
  puVar25[0x27] = 0;
  *puVar25 = 0;
  puVar25[0x24] = 0;
  puVar25[0x25] = puVar25 + 0x26;
  puVar25[5] = 0;
  puVar25[6] = 0;
  puVar25[3] = 0;
  puVar25[4] = 0;
  puVar25[1] = 0;
  puVar25[2] = 0;
  *puVar24 = puVar25;
  puVar25 = (undefined8 *)
            FUN_710392e290(0x10,0x38,pppplVar63,param_4,param_5,param_6,param_7,param_8);
  if (puVar25 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_220 = (undefined **)((ulong)local_220 & 0xffffffff00000000);
      local_430 = (long ****)&DAT_00000038;
      pppplVar63 = (long ****)&local_430;
      uVar18 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_220);
      if (((uVar18 & 1) != 0) &&
         (puVar25 = (undefined8 *)
                    FUN_710392e290(0x10,0x38,pppplVar63,param_4,param_5,param_6,param_7,param_8),
         puVar25 != (undefined8 *)0x0)) goto LAB_7103751774;
    }
    puVar25 = (undefined8 *)0x0;
  }
LAB_7103751774:
  puVar25[5] = 0;
  puVar25[6] = 0;
  puVar25[3] = 0;
  puVar25[4] = 0;
  *puVar25 = 0;
  puVar25[1] = 0;
  puVar25[2] = 0;
  puVar24[1] = puVar25;
  puVar25 = (undefined8 *)
            FUN_710392e290(0x10,0x28,pppplVar63,param_4,param_5,param_6,param_7,param_8);
  if (puVar25 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_220 = (undefined **)((ulong)local_220 & 0xffffffff00000000);
      local_430 = (long ****)&DAT_00000028;
      pppplVar63 = (long ****)&local_430;
      uVar18 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_220);
      if (((uVar18 & 1) != 0) &&
         (puVar25 = (undefined8 *)
                    FUN_710392e290(0x10,0x28,pppplVar63,param_4,param_5,param_6,param_7,param_8),
         puVar25 != (undefined8 *)0x0)) goto LAB_71037517dc;
    }
    puVar25 = (undefined8 *)0x0;
  }
LAB_71037517dc:
  puVar25[3] = 0;
  puVar25[4] = 0;
  puVar25[1] = 0;
  puVar25[2] = 0;
  *puVar25 = 0;
  puVar24[2] = puVar25;
  puVar23[0xf] = puVar24;
  *(undefined4 *)(puVar23 + 0x10) = 0xffff;
  if (DAT_7105332f20 != (undefined8 *)0x0) {
    local_430 = (long ****)
                (CONCAT44(local_430._4_4_,
                          *(undefined4 *)
                           (*(long *)(**(long **)((long)DAT_7105332f20 + 0x78) + 0x40) + 0x3c)) &
                0xffffffff00ffffff);
    uVar17 = FUN_71035434e0((int *)&local_430);
    *(undefined4 *)(puVar23 + 0x10) = uVar17;
  }
  pvVar61 = (void *)puVar23[5];
  DAT_7105332f20 = puVar23;
  if ((ulong)(puVar23[7] - (long)pvVar61 >> 2) < 0x800) {
    pppplVar67 = (long ****)(puVar23[6] - (long)pvVar61);
    lVar43 = (long)pppplVar67 >> 2;
    pvVar26 = (void *)FUN_710392e290(0x10,0x2000,pppplVar63,param_4,param_5,param_6,param_7,param_8)
    ;
    if (pvVar26 == (void *)0x0) {
      if (DAT_7105332f00 != (long *)0x0) {
        local_220 = (undefined **)((ulong)local_220 & 0xffffffff00000000);
        local_430 = (long ****)0x2000;
        pppplVar63 = (long ****)&local_430;
        uVar18 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_220);
        if (((uVar18 & 1) != 0) &&
           (pvVar26 = (void *)FUN_710392e290(0x10,0x2000,pppplVar63,param_4,param_5,param_6,param_7,
                                             param_8), pvVar26 != (void *)0x0)) goto LAB_71037518a8;
      }
      pvVar26 = (void *)0x0;
    }
LAB_71037518a8:
    if (0 < (long)pppplVar67) {
      memcpy(pvVar26,pvVar61,(size_t)pppplVar67);
      pppplVar63 = pppplVar67;
    }
    puVar23[5] = pvVar26;
    puVar23[6] = (void *)((long)pvVar26 + lVar43 * 4);
    puVar23[7] = (long)pvVar26 + 0x2000;
    if (pvVar61 != (void *)0x0) {
      FUN_710392eb40((ulong)pvVar61);
    }
  }
  pvVar61 = (void *)puVar23[10];
  if ((ulong)(puVar23[0xc] - (long)pvVar61 >> 2) < 0x200) {
    pppplVar67 = (long ****)(puVar23[0xb] - (long)pvVar61);
    lVar43 = (long)pppplVar67 >> 2;
    pvVar26 = (void *)FUN_710392e290(0x10,0x800,pppplVar63,param_4,param_5,param_6,param_7,param_8);
    if (pvVar26 == (void *)0x0) {
      if (DAT_7105332f00 != (long *)0x0) {
        local_220 = (undefined **)((ulong)local_220 & 0xffffffff00000000);
        local_430 = (long ****)0x800;
        pppplVar63 = (long ****)&local_430;
        uVar18 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_220);
        if (((uVar18 & 1) != 0) &&
           (pvVar26 = (void *)FUN_710392e290(0x10,0x800,pppplVar63,param_4,param_5,param_6,param_7,
                                             param_8), pvVar26 != (void *)0x0)) goto LAB_7103751960;
      }
      pvVar26 = (void *)0x0;
    }
LAB_7103751960:
    if (0 < (long)pppplVar67) {
      memcpy(pvVar26,pvVar61,(size_t)pppplVar67);
      pppplVar63 = pppplVar67;
    }
    puVar23[10] = pvVar26;
    puVar23[0xb] = (void *)((long)pvVar26 + lVar43 * 4);
    puVar23[0xc] = (long)pvVar26 + 0x800;
    if (pvVar61 != (void *)0x0) {
      FUN_710392eb40((ulong)pvVar61);
    }
  }
  puVar24 = (undefined8 *)puVar23[0xe];
  *puVar24 = uVar58;
  FUN_7103542470(puVar24 + 6,(long)(8192.0 / *(float *)(puVar24 + 10)),pppplVar63,param_4,param_5,
                 param_6,param_7,param_8);
  local_220 = &PTR_FUN_710522fa68;
  local_200 = &local_220;
  local_218 = puVar24;
  FUN_71037c9380((long)&local_430,&local_220);
  if (&local_430 == local_410) {
    pcVar39 = *(code **)(*local_410 + 0x20);
LAB_7103751a08:
    (*pcVar39)();
  }
  else if (local_410 != (long *)0x0) {
    pcVar39 = *(code **)(*local_410 + 0x28);
    goto LAB_7103751a08;
  }
  if (&local_220 == local_200) {
    pcVar39 = *(code **)(*local_200 + 0x20);
LAB_7103751a34:
    (*pcVar39)();
  }
  else if (local_200 != (long *)0x0) {
    pcVar39 = *(code **)(*local_200 + 0x28);
    goto LAB_7103751a34;
  }
  local_220 = &PTR_FUN_710522fab0;
  local_218 = puVar24;
  local_200 = &local_220;
  FUN_710353bee0(&local_220);
  if (&local_220 == local_200) {
    pcVar39 = *(code **)(*local_200 + 0x20);
LAB_7103751a7c:
    (*pcVar39)();
  }
  else if (local_200 != (long *)0x0) {
    pcVar39 = *(code **)(*local_200 + 0x28);
    goto LAB_7103751a7c;
  }
  pcVar70 = (char *)(puVar20 + 0x1d);
  *pcVar70 = '\0';
  puVar20[0x1a] = puVar23;
  puVar20[0x1b] = 0xffffffffffffffff;
  *(undefined4 *)(puVar20 + 0x1c) = 0;
  *(undefined1 *)((long)puVar20 + 0xe4) = 0;
  *(undefined1 *)((long)puVar20 + 0xe5) = 0;
  *(undefined1 *)((long)puVar20 + 0xe6) = 0;
  *(undefined1 *)((long)puVar20 + 0xe7) = 0;
  uVar11 = *(ushort *)((long)param_1 + 0x19a);
  uVar18 = (ulong)uVar11;
  *(undefined2 *)(puVar20 + 0x3d) = 0;
  pcVar31 = pcVar70;
  if (uVar18 != 0) {
    puVar38 = (undefined1 *)((long)param_1 + 0x9a);
    if (uVar11 == 1) {
      uVar45 = 0;
LAB_7103751b18:
      uVar10 = *puVar38;
      *(short *)(puVar20 + 0x3d) = (short)uVar45 + 1;
      *(undefined1 *)((long)puVar20 + uVar45 + 0xe8) = uVar10;
      uVar45 = (ulong)*(ushort *)(puVar20 + 0x3d);
    }
    else {
      uVar45 = 0;
      lVar43 = (uVar18 & 1) - uVar18;
      do {
        uVar10 = *puVar38;
        *(short *)(puVar20 + 0x3d) = (short)uVar45 + 1;
        lVar43 = lVar43 + 2;
        *(undefined1 *)((long)puVar20 + uVar45 + 0xe8) = uVar10;
        uVar12 = *(ushort *)(puVar20 + 0x3d);
        uVar10 = puVar38[1];
        puVar38 = puVar38 + 2;
        *(ushort *)(puVar20 + 0x3d) = uVar12 + 1;
        *(undefined1 *)((long)puVar20 + (ulong)uVar12 + 0xe8) = uVar10;
        uVar45 = (ulong)*(ushort *)(puVar20 + 0x3d);
      } while (lVar43 != 0);
      if ((uVar11 & 1) != 0) goto LAB_7103751b18;
    }
    pcVar31 = (char *)((long)puVar20 + uVar45 + 0xe8);
  }
  *pcVar31 = '\0';
  puVar20[0x3e] = 0;
  *(undefined4 *)(puVar20 + 0x3f) = *(undefined4 *)(param_1 + 0x76);
  *(undefined4 *)(puVar20 + 0x42) = 0;
  puVar20[0x46] = 0;
  puVar20[0x45] = 0;
  puVar20[0x44] = 0;
  puVar20[0x43] = 0;
  puVar20[0x47] = &SUB_ffffff00ffffff;
  puVar20[0x48] = &SUB_ffffff00ffffff;
  *(undefined1 *)(puVar20 + 0x49) = 0;
  puVar23 = (undefined8 *)FUN_710392e290(0x10,8,pppplVar63,param_4,param_5,param_6,param_7,param_8);
  uVar58 = extraout_x1_00;
  if (puVar23 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_220 = (undefined **)((ulong)local_220 & 0xffffffff00000000);
      local_430 = (long ****)&DAT_00000008;
      pppplVar63 = (long ****)&local_430;
      auVar76 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_220);
      uVar58 = auVar76._8_8_;
      if (((auVar76._0_8_ & 1) != 0) &&
         (puVar23 = (undefined8 *)
                    FUN_710392e290(0x10,8,pppplVar63,param_4,param_5,param_6,param_7,param_8),
         uVar58 = extraout_x1_01, puVar23 != (undefined8 *)0x0)) goto LAB_7103751bc8;
    }
    puVar23 = (undefined8 *)0x0;
  }
LAB_7103751bc8:
  FUN_710353b3a0(puVar23,uVar58,pppplVar63,param_4,param_5,param_6,param_7,param_8);
  iVar16 = *(int *)(puVar20 + 0x3f);
  puVar20[0x3e] = puVar23;
  if (iVar16 == 0) {
    iVar16 = 0x400000;
    *(undefined4 *)(puVar20 + 0x3f) = 0x400000;
  }
  uVar34 = iVar16 << 1;
  if (uVar34 == 0) {
    uVar34 = 1;
  }
  pppbVar64 = (byte ***)(ulong)uVar34;
  lVar43 = FUN_710392e290(4,pppbVar64,pppplVar63,param_4,param_5,param_6,param_7,param_8);
  if ((lVar43 == 0) && (lVar43 = 0, DAT_7105332f00 != (long *)0x0)) {
    local_220 = (undefined **)((ulong)local_220 & 0xffffffff00000000);
    pppplVar63 = (long ****)&local_430;
    local_430 = (long ****)pppbVar64;
    uVar18 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_220);
    if ((uVar18 & 1) == 0) {
      lVar43 = 0;
    }
    else {
      lVar43 = FUN_710392e290(4,pppbVar64,pppplVar63,param_4,param_5,param_6,param_7,param_8);
    }
  }
  puVar20[0x40] = lVar43;
  puVar20[0x41] = lVar43 + (ulong)*(uint *)(puVar20 + 0x3f);
  puVar24 = (undefined8 *)puVar20[10];
  *puVar24 = 0x20;
  *(undefined4 *)(puVar24 + 1) = 0x1000;
  local_90 = (long *****)0x0;
  local_c0 = (long *)0x0;
  local_f0 = (long *)0x0;
  local_480 = (void **)0x0;
  puVar23 = (undefined8 *)
            FUN_710392e290(0x10,0x60,pppplVar63,param_4,param_5,param_6,param_7,param_8);
  if (puVar23 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_220 = (undefined **)((ulong)local_220 & 0xffffffff00000000);
      local_430 = (long ****)&DAT_00000060;
      pppplVar63 = (long ****)&local_430;
      uVar18 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_220);
      if (((uVar18 & 1) != 0) &&
         (puVar23 = (undefined8 *)
                    FUN_710392e290(0x10,0x60,pppplVar63,param_4,param_5,param_6,param_7,param_8),
         puVar23 != (undefined8 *)0x0)) goto LAB_7103751dc4;
    }
    puVar23 = (undefined8 *)0x0;
  }
LAB_7103751dc4:
  puVar23[10] = 0;
  *(undefined4 *)(puVar23 + 4) = 0;
  puVar23[2] = 0;
  puVar23[3] = 0;
  *puVar23 = 0;
  puVar23[1] = 0;
  plVar57 = (long *)puVar24[10];
  if (plVar57 == (long *)0x0) {
    local_410 = (long *)0x0;
    plVar57 = (long *)puVar24[0x10];
joined_r0x007103751e28:
    if (plVar57 == (long *)0x0) goto LAB_7103751e2c;
LAB_7103751e00:
    if (puVar24 + 0xc == plVar57) {
      local_200 = &local_220;
      (**(code **)(*plVar57 + 0x18))(plVar57,&local_220);
    }
    else {
      local_200 = (long *)(**(code **)(*plVar57 + 0x10))();
    }
  }
  else {
    if (puVar24 + 6 == plVar57) {
      local_410 = &local_430;
      (**(code **)(*plVar57 + 0x18))(plVar57,&local_430);
      plVar57 = (long *)puVar24[0x10];
      goto joined_r0x007103751e28;
    }
    local_410 = (long *)(**(code **)(*plVar57 + 0x10))();
    plVar57 = (long *)puVar24[0x10];
    if (plVar57 != (long *)0x0) goto LAB_7103751e00;
LAB_7103751e2c:
    local_200 = (long *)0x0;
  }
  pppplVar67 = (long ****)&DAT_00001000;
  ppppbVar30 = (byte ****)&local_430;
  pppplVar63 = (long ****)&local_220;
  FUN_71035471f0(puVar23,0x20,0x1000,(long)ppppbVar30,(long *)pppplVar63);
  if (&local_220 == local_200) {
    pcVar39 = *(code **)(*local_200 + 0x20);
LAB_7103751eb0:
    (*pcVar39)();
  }
  else if (local_200 != (long *)0x0) {
    pcVar39 = *(code **)(*local_200 + 0x28);
    goto LAB_7103751eb0;
  }
  if (&local_430 == local_410) {
    pcVar39 = *(code **)(*local_410 + 0x20);
LAB_7103751edc:
    (*pcVar39)();
  }
  else if (local_410 != (long *)0x0) {
    pcVar39 = *(code **)(*local_410 + 0x28);
    goto LAB_7103751edc;
  }
  puVar25 = (undefined8 *)puVar24[3];
  if (puVar25 == (undefined8 *)puVar24[4]) {
    pvVar61 = (void *)puVar24[2];
    sVar19 = (long)puVar25 - (long)pvVar61;
    uVar18 = ((long)sVar19 >> 3) + 1;
    if (uVar18 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    lVar43 = (long)puVar24[4] - (long)pvVar61;
    if ((ulong)(lVar43 >> 3) < 0xfffffffffffffff) {
      uVar45 = lVar43 >> 2;
      if (uVar18 <= uVar45) {
        uVar18 = uVar45;
      }
      if (uVar18 != 0) {
        if (uVar18 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
          abort();
        }
        goto LAB_7103751f50;
      }
LAB_7103751fb0:
      pvVar26 = (void *)0x0;
    }
    else {
      uVar18 = 0x1fffffffffffffff;
LAB_7103751f50:
      ppplVar40 = (long ***)(uVar18 * 8);
      if (ppplVar40 == (long ***)0x0) {
        ppplVar40 = (long ***)0x1;
      }
      pvVar26 = (void *)FUN_710392e290(0x10,ppplVar40,pppplVar67,ppppbVar30,pppplVar63,param_6,
                                       param_7,param_8);
      if (pvVar26 == (void *)0x0) {
        if (DAT_7105332f00 != (long *)0x0) {
          local_6c[0] = 0;
          pppplVar67 = &local_78;
          local_78 = ppplVar40;
          uVar45 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,local_6c);
          if (((uVar45 & 1) != 0) &&
             (pvVar26 = (void *)FUN_710392e290(0x10,ppplVar40,pppplVar67,ppppbVar30,pppplVar63,
                                               param_6,param_7,param_8), pvVar26 != (void *)0x0))
          goto LAB_7103751fb4;
        }
        goto LAB_7103751fb0;
      }
    }
LAB_7103751fb4:
    puVar25 = (undefined8 *)((long)pvVar26 + ((long)sVar19 >> 3) * 8);
    *puVar25 = puVar23;
    if (0 < (long)sVar19) {
      memcpy(pvVar26,pvVar61,sVar19);
    }
    puVar24[2] = pvVar26;
    puVar24[3] = puVar25 + 1;
    puVar24[4] = (void *)((long)pvVar26 + uVar18 * 8);
    if (pvVar61 != (void *)0x0) {
      FUN_710392eb40((ulong)pvVar61);
    }
  }
  else {
    *puVar25 = puVar23;
    puVar24[3] = puVar24[3] + 8;
  }
  if (local_b0 == local_90) {
    ppplVar40 = (*local_90)[4];
LAB_7103752020:
    (*(code *)ppplVar40)();
  }
  else if (local_90 != (long *****)0x0) {
    ppplVar40 = (*local_90)[5];
    goto LAB_7103752020;
  }
  if (&local_4a0 == local_480) {
    pcVar39 = *(code **)((long)*local_480 + 0x20);
LAB_710375204c:
    (*pcVar39)();
  }
  else if (local_480 != (void **)0x0) {
    pcVar39 = *(code **)((long)*local_480 + 0x28);
    goto LAB_710375204c;
  }
  if (local_f0 != (long *)0x0) {
    (**(code **)(*local_f0 + 0x28))();
  }
  if (local_c0 != (long *)0x0) {
    (**(code **)(*local_c0 + 0x28))();
  }
  local_430 = (long ****)&DAT_710522faf8;
  local_428 = (long ****)FUN_7103543550;
  local_420 = (void *)0x0;
  puStack_418 = puVar20;
  local_410 = &local_430;
  FUN_710353d5b0((undefined8 *)puVar20[7],&local_430,
                 (long ****)(ulong)*(uint *)((long)param_1 + 0x3b4),
                 (byte ****)(ulong)*(uint *)(param_1 + 0x77),(long ****)"ResUpdateThread",0x40000,
                 param_7,param_8);
  if (&local_430 == local_410) {
    pcVar39 = *(code **)(*local_410 + 0x20);
LAB_71037520dc:
    (*pcVar39)();
  }
  else if (local_410 != (long *)0x0) {
    pcVar39 = *(code **)(*local_410 + 0x28);
    goto LAB_71037520dc;
  }
  local_430 = (long ****)&DAT_710522faf8;
  local_428 = (long ****)FUN_7103543640;
  local_420 = (void *)0x0;
  puStack_418 = puVar20;
  local_410 = &local_430;
  FUN_710353d5b0((undefined8 *)puVar20[8],&local_430,
                 (long ****)(ulong)*(uint *)((long)param_1 + 0x3bc),
                 (byte ****)(ulong)*(uint *)(param_1 + 0x78),(long ****)"ResLoadingThread",0x40000,
                 param_7,param_8);
  if (&local_430 == local_410) {
    pcVar39 = *(code **)(*local_410 + 0x20);
LAB_710375213c:
    (*pcVar39)();
  }
  else if (local_410 != (long *)0x0) {
    pcVar39 = *(code **)(*local_410 + 0x28);
    goto LAB_710375213c;
  }
  local_430 = (long ****)&DAT_710522faf8;
  local_428 = (long ****)FUN_7103544a70;
  local_420 = (void *)0x0;
  pcVar31 = "ResInflateThread";
  pppplVar63 = (long ****)(ulong)*(uint *)((long)param_1 + 0x3c4);
  ppppbVar30 = (byte ****)(ulong)*(uint *)(param_1 + 0x79);
  pbVar32 = (byte *)0x40000;
  puStack_418 = puVar20;
  local_410 = &local_430;
  FUN_710353d5b0((undefined8 *)puVar20[9],&local_430,pppplVar63,ppppbVar30,
                 (long ****)"ResInflateThread",0x40000,param_7,param_8);
  if (&local_430 == local_410) {
    pcVar39 = *(code **)(*local_410 + 0x20);
LAB_710375219c:
    (*pcVar39)();
  }
  else if (local_410 != (long *)0x0) {
    pcVar39 = *(code **)(*local_410 + 0x28);
    goto LAB_710375219c;
  }
  DAT_7105332f28 = puVar20;
  if ((*(short *)(puVar20 + 0x3d) != 0) &&
     (bVar15 = FUN_710353b4e0((long *)puVar20[0x3e],pcVar70), bVar15)) {
    lVar43 = puVar20[0x1a];
    plVar37 = *(long **)(lVar43 + 0x78);
    plVar57 = (long *)*plVar37;
    FUN_710353b3a0(&local_220,extraout_x1_02,pppplVar63,ppppbVar30,(long ****)pcVar31,pbVar32,
                   param_7,param_8);
    bVar15 = FUN_710353b4e0(&local_220,pcVar70);
    if (!bVar15) {
LAB_710375242c:
      bVar15 = false;
      goto LAB_7103752430;
    }
    if (plVar57[7] != 0) {
      FUN_710392eb40(plVar57[7]);
      plVar57[7] = 0;
    }
    if (plVar57[0x23] != 0) {
      FUN_710392eb40(plVar57[0x23]);
      plVar57[0x23] = 0;
    }
    if (plVar57[0x24] != 0) {
      FUN_710392eb40(plVar57[0x24]);
      plVar57[0x24] = 0;
    }
    pppplVar67 = (long ****)local_220;
    if (*(char *)((long)local_220 + 0x22c) != '\0') {
      pppplVar63 = (long ****)&DAT_00000038;
      lVar27 = FUN_71037c6ef0((long)local_220,plVar57,0x38);
      if ((lVar27 == 0x38) && (*plVar57 == -0x5432106789abcdf0)) {
        uVar18 = FUN_7103541a70(&local_220,plVar57[4],pppplVar63,ppppbVar30,(long ****)pcVar31,
                                pbVar32,(ulong)param_7,param_8);
        plVar57[7] = uVar18;
        if (uVar18 != 0) {
          if (plVar57[5] != 0) {
            uVar18 = FUN_7103541a70(&local_220,plVar57[5],pppplVar63,ppppbVar30,(long ****)pcVar31,
                                    pbVar32,(ulong)param_7,param_8);
            plVar57[0x23] = uVar18;
            if (uVar18 == 0) goto LAB_710375242c;
          }
          if (plVar57[6] != 0) {
            uVar18 = FUN_7103541a70(&local_220,plVar57[6],pppplVar63,ppppbVar30,(long ****)pcVar31,
                                    pbVar32,(ulong)param_7,param_8);
            plVar57[0x24] = uVar18;
            if (uVar18 == 0) goto LAB_710375242c;
          }
          if (*(char *)((long)pppplVar67 + 0x22c) != '\0') {
            (*(code *)(*pppplVar67)[6])(&local_430,pppplVar67);
            *(undefined1 *)((long)pppplVar67 + 0x22c) = 0;
          }
          lVar27 = plVar57[7];
          plVar57[8] = lVar27;
          plVar57[9] = lVar27 + 0x58;
          puVar41 = (uint *)(lVar27 + 0x58 + (ulong)*(byte *)(lVar27 + 0x38) * 0xc);
          puVar59 = puVar41 + 4;
          plVar57[0x16] = (long)puVar41;
          plVar57[0x17] = (long)puVar59;
          puVar59 = puVar59 + (ulong)*puVar41 * 3;
          plVar57[0x18] = (long)puVar59;
          puVar59 = puVar59 + (ulong)puVar41[1] * 2;
          plVar57[0x19] = (long)puVar59;
          puVar59 = puVar59 + (ulong)puVar41[1] * 3;
          plVar57[0x1a] = (long)puVar59;
          uVar34 = puVar41[2];
          plVar57[0x1b] = (long)(puVar59 + uVar34);
          puVar59 = puVar59 + uVar34 + (ulong)puVar41[3] * 4;
          plVar57[10] = (long)puVar59;
          puVar59 = puVar59 + (ulong)puVar59[1] * 2 + 2;
          plVar57[0xb] = (long)puVar59;
          puVar59 = puVar59 + (ulong)*(uint *)(lVar27 + 4) * 2;
          plVar57[0xc] = (long)puVar59;
          puVar59 = puVar59 + (ulong)*(uint *)(lVar27 + 4) * 8;
          plVar57[0xd] = (long)puVar59;
          puVar59 = puVar59 + (ulong)*(uint *)(lVar27 + 8) * 2;
          plVar57[0xe] = (long)puVar59;
          uVar34 = *(uint *)(lVar27 + 0xc);
          plVar57[0xf] = (long)(puVar59 + (ulong)uVar34 * 2);
          puVar54 = puVar59 + (ulong)uVar34 * 2 + (ulong)*(uint *)(lVar27 + 0xc) * 0xd;
          plVar57[0x10] = (long)puVar54;
          iVar16 = *(int *)(lVar27 + 0x10);
          iVar3 = *(int *)(lVar27 + 0x24);
          iVar4 = *(int *)(lVar27 + 0x40);
          plVar57[0x11] = (long)(puVar54 + (ulong)(uint)(iVar3 + iVar16 + iVar4) * 7);
          puVar41 = puVar54 + (ulong)(uint)(iVar3 + iVar16 + iVar4) * 7 +
                    (ulong)*(uint *)(lVar27 + 0x14) * 2;
          plVar57[0x12] = (long)puVar41;
          puVar59 = puVar41 + (ulong)(uint)(*(int *)(lVar27 + 0x28) + *(int *)(lVar27 + 0x18) +
                                           *(int *)(lVar27 + 0x4c)) * 4;
          plVar57[0x13] = (long)puVar59;
          puVar52 = puVar59 + (ulong)(uint)(*(int *)(lVar27 + 0x28) + *(int *)(lVar27 + 0x1c) +
                                           *(int *)(lVar27 + 0x50)) * 3;
          plVar57[0x14] = (long)puVar52;
          iVar16 = *(int *)(lVar27 + 0x20);
          iVar3 = *(int *)(lVar27 + 0x28);
          iVar4 = *(int *)(lVar27 + 0x54);
          plVar57[0x15] = (long)(puVar52 + (ulong)(uint)(iVar3 + iVar16 + iVar4) * 4);
          if (*(int *)(lVar27 + 0x44) != 0) {
            puVar55 = puVar52 + (ulong)(uint)(iVar3 + iVar16 + iVar4) * 4 +
                      (ulong)*(uint *)(lVar27 + 0x2c) * 2;
            puVar53 = puVar55 + 2;
            plVar57[0x1c] = (long)puVar55;
            plVar57[0x1d] = (long)puVar53;
            lVar68 = plVar57[8];
            puVar55 = puVar55 + 1;
            if (*puVar55 != 0) {
              puVar54 = puVar53 + (ulong)*puVar55 * 8;
              lVar60 = 0;
              uVar18 = 1;
              do {
                uVar34 = *(uint *)(lVar68 + 0x1c);
                uVar49 = *(uint *)(lVar68 + 0x20);
                uVar5 = *(uint *)(lVar68 + 0x18);
                uVar45 = (ulong)*(uint *)(lVar68 + 0x28);
                puVar71 = puVar54 + (ulong)*(uint *)((long)puVar53 + lVar60 + 4) * 5;
                uVar6 = *(uint *)((long)puVar53 + lVar60 + 0x10);
                uVar7 = *puVar71;
                puVar20 = (undefined8 *)plVar57[0x20];
                if (puVar20 < (undefined8 *)plVar57[0x21]) {
                  *puVar20 = puVar54;
                  puVar20[1] = puVar71;
                  puVar20[2] = puVar71 + (ulong)uVar7 * 2 + 2;
                  puVar20[3] = puVar41 + (ulong)uVar5 * 4 + uVar45 * 4;
                  puVar20[4] = puVar59 + (ulong)uVar34 * 3 + uVar45 * 3;
                  puVar20[5] = puVar52 + (ulong)uVar49 * 4 + uVar45 * 4;
                  plVar57[0x20] = plVar57[0x20] + 0x30;
                }
                else {
                  pvVar61 = (void *)plVar57[0x1f];
                  pppplVar67 = (long ****)((long)puVar20 - (long)pvVar61);
                  uVar50 = 0x555555555555555;
                  uVar44 = ((long)pppplVar67 >> 4) * -0x5555555555555555 + 1;
                  if (0x555555555555555 < uVar44) {
                    /* WARNING: Subroutine does not return */
                    std::__vector_base_common<true>::__throw_length_error();
                  }
                  lVar46 = plVar57[0x21] - (long)pvVar61 >> 4;
                  if ((ulong)(lVar46 * -0x5555555555555555) < 0x2aaaaaaaaaaaaaa) {
                    uVar47 = lVar46 * 0x5555555555555556;
                    uVar50 = uVar44;
                    if (uVar44 <= uVar47) {
                      uVar50 = uVar47;
                    }
                    if (uVar50 != 0) goto LAB_7103752558;
                    lVar46 = 0;
                  }
                  else {
LAB_7103752558:
                    pppbVar64 = (byte ***)(uVar50 * 0x30);
                    if (pppbVar64 == (byte ***)0x0) {
                      pppbVar64 = (byte ***)0x1;
                    }
                    lVar46 = FUN_710392e290(0x10,pppbVar64,pppplVar63,ppppbVar30,(long ****)pcVar31,
                                            pbVar32,param_7,param_8);
                    if (lVar46 == 0) {
                      if (DAT_7105332f00 != (long *)0x0) {
                        local_4a0 = (void *)((ulong)local_4a0 & 0xffffffff00000000);
                        pppplVar63 = (long ****)&local_430;
                        local_430 = (long ****)pppbVar64;
                        uVar44 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_4a0);
                        if (((uVar44 & 1) != 0) &&
                           (lVar46 = FUN_710392e290(0x10,pppbVar64,pppplVar63,ppppbVar30,
                                                    (long ****)pcVar31,pbVar32,param_7,param_8),
                           lVar46 != 0)) goto LAB_71037525c0;
                      }
                      lVar46 = 0;
                    }
                  }
LAB_71037525c0:
                  lVar48 = SUB168(SEXT816((long)pppplVar67) * SEXT816(-0x2aaaaaaaaaaaaaab),8);
                  puVar20 = (undefined8 *)(lVar46 + ((long)pppplVar67 >> 4) * 0x10);
                  puVar20[2] = puVar71 + (ulong)uVar7 * 2 + 2;
                  puVar20[3] = puVar41 + (ulong)uVar5 * 4 + uVar45 * 4;
                  *puVar20 = puVar54;
                  puVar20[1] = puVar71;
                  puVar20[4] = puVar59 + (ulong)uVar34 * 3 + uVar45 * 3;
                  puVar20[5] = puVar52 + (ulong)uVar49 * 4 + uVar45 * 4;
                  if (0 < (long)pppplVar67) {
                    memcpy(puVar20 + ((lVar48 >> 3) - (lVar48 >> 0x3f)) * 6,pvVar61,
                           (size_t)pppplVar67);
                    pppplVar63 = pppplVar67;
                  }
                  plVar57[0x1f] = (long)(puVar20 + ((lVar48 >> 3) - (lVar48 >> 0x3f)) * 6);
                  plVar57[0x20] = (long)(puVar20 + 6);
                  plVar57[0x21] = lVar46 + uVar50 * 0x30;
                  if (pvVar61 != (void *)0x0) {
                    FUN_710392eb40((ulong)pvVar61);
                  }
                }
                puVar55 = (uint *)(plVar57[0x1c] + 4);
                if (*puVar55 <= uVar18) goto LAB_7103752ec8;
                puVar53 = (uint *)plVar57[0x1d];
                puVar41 = (uint *)plVar57[0x12];
                puVar59 = (uint *)plVar57[0x13];
                puVar52 = (uint *)plVar57[0x14];
                puVar54 = (uint *)((long)puVar71 + (ulong)uVar6);
                uVar18 = uVar18 + 1;
                lVar60 = lVar60 + 0x20;
              } while( true );
            }
            goto LAB_7103752ed4;
          }
          goto LAB_7103752ef4;
        }
      }
      goto LAB_710375242c;
    }
    bVar15 = false;
    cVar8 = *(char *)((long)local_220 + 0x22c);
    goto joined_r0x007103752438;
  }
LAB_71037528fc:
  puVar20 = (undefined8 *)
            FUN_710392e290(0x10,0x40,pppplVar63,ppppbVar30,(long ****)pcVar31,pbVar32,param_7,
                           param_8);
  if (puVar20 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_220 = (undefined **)((ulong)local_220 & 0xffffffff00000000);
      local_430 = (long ****)&DAT_00000040;
      pppplVar63 = (long ****)&local_430;
      uVar18 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_220);
      if (((uVar18 & 1) != 0) &&
         (puVar20 = (undefined8 *)
                    FUN_710392e290(0x10,0x40,pppplVar63,ppppbVar30,(long ****)pcVar31,pbVar32,
                                   param_7,param_8), puVar20 != (undefined8 *)0x0))
      goto LAB_7103752950;
    }
    puVar20 = (undefined8 *)0x0;
  }
LAB_7103752950:
  puVar20[2] = &DAT_710523d228;
  puVar20[6] = puVar20 + 2;
  *puVar20 = &DAT_710593b4d0;
  puVar20[1] = DAT_710593b4d8;
  *DAT_710593b4d8 = puVar20;
  DAT_710593b4e0 = DAT_710593b4e0 + 1;
  DAT_710593b4d8 = puVar20;
  plVar57 = DAT_710593b4e8;
  if (DAT_710593b4e8 == (long *)0x0) {
    plVar57 = (long *)FUN_710392e290(0x10,0x198,pppplVar63,ppppbVar30,(long ****)pcVar31,pbVar32,
                                     param_7,param_8);
    if (plVar57 == (long *)0x0) {
      if (DAT_7105332f00 != (long *)0x0) {
        local_220 = (undefined **)((ulong)local_220 & 0xffffffff00000000);
        local_430 = (long ****)&DAT_00000198;
        pppplVar63 = (long ****)&local_430;
        uVar18 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_220);
        if (((uVar18 & 1) != 0) &&
           (plVar57 = (long *)FUN_710392e290(0x10,0x198,pppplVar63,ppppbVar30,(long ****)pcVar31,
                                             pbVar32,param_7,param_8), plVar57 != (long *)0x0))
        goto LAB_71037529e4;
      }
      plVar57 = (long *)0x0;
    }
LAB_71037529e4:
    plVar57[0x2e] = 0;
    plVar57[4] = 0;
    plVar57[5] = 0;
    *plVar57 = 0;
    plVar57[1] = 0;
    plVar57[2] = 0;
    plVar57[3] = (long)&PTR_FUN_7105230c18;
    plVar57[8] = 0;
    plVar57[9] = 0;
    plVar57[6] = 0;
    plVar57[7] = (long)&PTR_FUN_7105230c18;
    plVar57[0xc] = 0;
    plVar57[0xd] = 0;
    plVar57[10] = 0;
    plVar57[0xb] = (long)&PTR_FUN_7105230c18;
    plVar57[0x10] = 0;
    plVar57[0x11] = 0;
    plVar57[0xe] = 0;
    plVar57[0xf] = (long)&PTR_FUN_7105230c18;
    plVar57[0x14] = 0;
    plVar57[0x15] = 0;
    plVar57[0x12] = 0;
    plVar57[0x13] = (long)&PTR_FUN_7105230c18;
    plVar57[0x18] = 0;
    plVar57[0x19] = 0;
    plVar57[0x16] = 0;
    plVar57[0x17] = (long)&PTR_FUN_7105230c18;
    plVar57[0x1c] = 0;
    plVar57[0x1d] = 0;
    plVar57[0x1a] = 0;
    plVar57[0x1b] = (long)&PTR_FUN_7105230c18;
    plVar57[0x20] = 0;
    plVar57[0x21] = 0;
    plVar57[0x1e] = 0;
    plVar57[0x1f] = (long)&PTR_FUN_7105230c18;
    plVar57[0x24] = 0;
    plVar57[0x25] = 0;
    plVar57[0x22] = 0;
    plVar57[0x23] = (long)&PTR_FUN_7105230c18;
    plVar57[0x28] = 0;
    plVar57[0x29] = 0;
    plVar57[0x26] = 0;
    plVar57[0x27] = (long)&PTR_FUN_7105230c18;
    plVar57[0x2c] = 0;
    plVar57[0x2d] = 0;
    plVar57[0x2a] = 0;
    plVar57[0x2b] = (long)&PTR_FUN_7105230c18;
    plVar57[0x31] = 0;
    plVar57[0x32] = 0;
    plVar57[0x2f] = (long)&PTR_FUN_7105230c18;
    plVar57[0x30] = 0;
    FUN_71037cd610(plVar57,0x7104742f00,(undefined ***)pppplVar63,ppppbVar30,(long ****)pcVar31,
                   pbVar32,param_7,param_8);
    nu::ModuleInitializer<nu::GraphicsModule,nu::GraphicsModuleDesc>::Instance();
    lVar27 = nu::ModuleInitializer<nu::GraphicsModule,nu::GraphicsModuleDesc>::Instance();
    lVar43 = 0;
    ppuVar29 = &PTR_s_phxSystemDebugDrawConstantVS_710523d2a8;
    do {
      pcVar70 = *ppuVar29;
      local_420 = (void *)0x0;
      local_430 = (long ****)0x0;
      local_428 = (long ****)0x0;
      pppplVar67 = (long ****)strlen(pcVar70);
      if ((long ****)0xffffffffffffffef < pppplVar67) {
                    /* WARNING: Subroutine does not return */
        std::__basic_string_common<true>::__throw_length_error();
      }
      if (pppplVar67 < (long ****)0x17) {
        local_430 = (long ****)CONCAT71(local_430._1_7_,(char)((int)pppplVar67 << 1));
        pvVar61 = (void *)((ulong)&local_430 | 1);
        if (pppplVar67 != (long ****)0x0) goto LAB_7103752b44;
      }
      else {
        pppplVar63 = (long ****)((ulong)(pppplVar67 + 2) & 0xfffffffffffffff0);
        iVar16 = FUN_710392e1f0(&local_4a0,0x10,pppplVar63,ppppbVar30,(long ****)pcVar31,pbVar32,
                                param_7,param_8);
        if (((iVar16 == 0xc) && (DAT_710593d2b0 != (long *)0x0)) &&
           (local_220 = (undefined **)pppplVar63,
           uVar18 = (**(code **)(*DAT_710593d2b0 + 0x30))(DAT_710593d2b0,&local_220),
           (uVar18 & 1) != 0)) {
          FUN_710392e1f0(&local_4a0,0x10,pppplVar63,ppppbVar30,(long ****)pcVar31,pbVar32,param_7,
                         param_8);
        }
        nu::VirtualAllocHook((ulong)pppplVar63,0x10,local_4a0);
        local_430 = (long ****)((ulong)pppplVar63 | 1);
        local_420 = local_4a0;
        pvVar61 = local_4a0;
        local_428 = pppplVar67;
LAB_7103752b44:
        pppplVar63 = pppplVar67;
        memcpy(pvVar61,pcVar70,(size_t)pppplVar67);
      }
      *(undefined1 *)((long)pvVar61 + (long)pppplVar67) = 0;
      std::mutex::lock();
      plVar37 = FUN_71037e57d0((long *)(lVar27 + 0x60),(byte *)&local_430);
      if ((((long *)plVar37[7] == (long *)0x0) || (*(long *)plVar37[7] != plVar37[8])) ||
         (lVar68 = plVar37[6], lVar68 == 0)) {
        std::mutex::unlock();
LAB_7103752bcc:
        plVar37 = (long *)0x0;
        lVar68 = 0;
        *(undefined8 *)((long)plVar57 + lVar43 + 0x20) = 0;
        *(undefined8 *)((long)plVar57 + lVar43 + 0x28) = 0;
      }
      else {
        plVar37 = *(long **)(lVar68 + 8);
        lVar60 = *plVar37;
        std::mutex::unlock();
        if ((plVar37 == (long *)0x0) || (*plVar37 != lVar60)) goto LAB_7103752bcc;
        *(long *)((long)plVar57 + lVar43 + 0x20) = lVar68;
        plVar37 = *(long **)(lVar68 + 8);
        *(long **)((long)plVar57 + lVar43 + 0x28) = plVar37;
        lVar68 = *plVar37;
      }
      pvVar61 = local_420;
      *(long *)((long)plVar57 + lVar43 + 0x30) = lVar68;
      if (((ulong)local_430 & 1) != 0) {
        nu::VirtualFreeHook(local_420);
        FUN_710392eb40((ulong)pvVar61);
        plVar37 = *(long **)((long)plVar57 + lVar43 + 0x28);
      }
      plVar28 = DAT_710593b4e8;
      if ((plVar37 == (long *)0x0) || (*plVar37 != *(long *)((long)plVar57 + lVar43 + 0x30))) {
        FUN_7103754ab0(plVar57);
        pbVar62 = (byte *)*plVar57;
        plVar28 = plVar57;
        plVar37 = DAT_710593b4e8;
        if (pbVar62 != (byte *)0x0) {
          pbVar42 = (byte *)plVar57[1];
          pbVar65 = pbVar62;
          if (pbVar42 != pbVar62) {
            do {
              pbVar65 = pbVar42 + -0x18;
              if ((*pbVar65 & 1) != 0) {
                pvVar61 = *(void **)(pbVar42 + -8);
                nu::VirtualFreeHook(pvVar61);
                FUN_710392eb40((ulong)pvVar61);
              }
              pbVar42 = pbVar65;
            } while (pbVar62 != pbVar65);
            pbVar65 = (byte *)*plVar57;
          }
          plVar57[1] = (long)pbVar62;
          nu::VirtualFreeHook(pbVar65);
          FUN_710392eb40((ulong)pbVar65);
          plVar37 = DAT_710593b4e8;
        }
        goto LAB_7103752e0c;
      }
      lVar43 = lVar43 + 0x20;
      ppuVar29 = ppuVar29 + 1;
    } while (lVar43 != 0x180);
    if (DAT_710593b4e8 != (long *)0x0) {
      pbVar62 = (byte *)*DAT_710593b4e8;
      plVar37 = plVar57;
      if (pbVar62 != (byte *)0x0) {
        pbVar42 = (byte *)DAT_710593b4e8[1];
        pbVar65 = pbVar62;
        DAT_710593b4e8 = plVar57;
        if (pbVar42 != pbVar62) {
          do {
            pbVar65 = pbVar42 + -0x18;
            if ((*pbVar65 & 1) != 0) {
              pvVar61 = *(void **)(pbVar42 + -8);
              nu::VirtualFreeHook(pvVar61);
              FUN_710392eb40((ulong)pvVar61);
            }
            pbVar42 = pbVar65;
          } while (pbVar62 != pbVar65);
          pbVar65 = (byte *)*plVar28;
        }
        plVar28[1] = (long)pbVar62;
        nu::VirtualFreeHook(pbVar65);
        FUN_710392eb40((ulong)pbVar65);
        plVar37 = DAT_710593b4e8;
      }
LAB_7103752e0c:
      DAT_710593b4e8 = plVar37;
      FUN_710392eb40((ulong)plVar28);
      plVar57 = DAT_710593b4e8;
    }
  }
  DAT_710593b4e8 = plVar57;
  puVar20 = (undefined8 *)
            FUN_710392e290(0x10,0x40,pppplVar63,ppppbVar30,(long ****)pcVar31,pbVar32,param_7,
                           param_8);
  if (puVar20 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_220 = (undefined **)((ulong)local_220 & 0xffffffff00000000);
      local_430 = (long ****)&DAT_00000040;
      pppplVar63 = (long ****)&local_430;
      uVar18 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_220);
      if (((uVar18 & 1) != 0) &&
         (puVar20 = (undefined8 *)
                    FUN_710392e290(0x10,0x40,pppplVar63,ppppbVar30,(long ****)pcVar31,pbVar32,
                                   param_7,param_8), puVar20 != (undefined8 *)0x0))
      goto LAB_7103752e64;
    }
    puVar20 = (undefined8 *)0x0;
  }
LAB_7103752e64:
  puVar20[2] = &DAT_710523d270;
  puVar20[6] = puVar20 + 2;
  *puVar20 = &DAT_710593b4d0;
  puVar20[1] = DAT_710593b4d8;
  *DAT_710593b4d8 = puVar20;
  DAT_710593b4d8 = puVar20;
  DAT_710593b4e0 = DAT_710593b4e0 + 1;
  return;
LAB_7103752ec8:
  lVar68 = plVar57[8];
  puVar54 = (uint *)plVar57[0x10];
LAB_7103752ed4:
  plVar57[0x1e] =
       (long)(puVar54 + (ulong)(uint)(*(int *)(lVar68 + 0x24) + *(int *)(lVar68 + 0x10)) * 7);
  *(uint *)((long)plVar57 + 0x114) = *puVar55;
LAB_7103752ef4:
  plVar28 = plVar57 + 0x26;
  FUN_71004b06a0((undefined8 *)plVar57[0x26]);
  plVar57[0x26] = 0;
  plVar57[0x27] = 0;
  plVar57[0x25] = (long)plVar28;
  bVar33 = *(byte *)(lVar27 + 0x38);
  if (bVar33 != 0) {
    plVar72 = (long *)0x0;
    uVar18 = 0;
    do {
      uVar34 = *(uint *)(plVar57[9] + uVar18 * 0xc);
      plVar74 = plVar28;
      plVar73 = plVar28;
      while (plVar72 != (long *)0x0) {
        while (plVar73 = plVar72, uVar34 < *(uint *)((long)plVar73 + 0x1c)) {
          plVar72 = (long *)*plVar73;
          plVar74 = plVar73;
          if ((long *)*plVar73 == (long *)0x0) {
            lVar68 = *plVar73;
            goto joined_r0x007103753034;
          }
        }
        if (uVar34 <= *(uint *)((long)plVar73 + 0x1c)) break;
        plVar74 = plVar73 + 1;
        plVar72 = (long *)*plVar74;
      }
      lVar68 = *plVar74;
joined_r0x007103753034:
      if (lVar68 == 0) {
        plVar72 = (long *)FUN_710392e290(0x10,0x28,pppplVar63,ppppbVar30,(long ****)pcVar31,pbVar32,
                                         param_7,param_8);
        if (plVar72 == (long *)0x0) {
          if (DAT_7105332f00 != (long *)0x0) {
            local_4a0 = (void *)((ulong)local_4a0 & 0xffffffff00000000);
            local_430 = (long ****)&DAT_00000028;
            pppplVar63 = (long ****)&local_430;
            uVar45 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_4a0);
            if (((uVar45 & 1) != 0) &&
               (plVar72 = (long *)FUN_710392e290(0x10,0x28,pppplVar63,ppppbVar30,(long ****)pcVar31,
                                                 pbVar32,param_7,param_8), plVar72 != (long *)0x0))
            goto LAB_7103752fe8;
          }
          plVar72 = (long *)0x0;
        }
LAB_7103752fe8:
        *(uint *)((long)plVar72 + 0x1c) = uVar34;
        *(int *)(plVar72 + 4) = (int)uVar18;
        *plVar72 = 0;
        plVar72[1] = 0;
        plVar72[2] = (long)plVar73;
        *plVar74 = (long)plVar72;
        if (*(long *)plVar57[0x25] != 0) {
          plVar57[0x25] = *(long *)plVar57[0x25];
          plVar72 = (long *)*plVar74;
        }
        std::__tree_balance_after_insert<std::__tree_node_base<void*>*>
                  ((long *)plVar57[0x26],plVar72);
        plVar57[0x27] = plVar57[0x27] + 1;
        bVar33 = *(byte *)(lVar27 + 0x38);
      }
      uVar18 = uVar18 + 1;
      if (bVar33 <= uVar18) break;
      plVar72 = (long *)*plVar28;
    } while( true );
  }
  bVar15 = true;
LAB_7103752430:
  cVar8 = *(char *)((long)local_220 + 0x22c);
  pppplVar67 = (long ****)local_220;
joined_r0x007103752438:
  local_220 = (undefined **)pppplVar67;
  if (cVar8 == '\0') {
    if (pppplVar67 != (long ****)0x0) goto LAB_7103752668;
  }
  else {
    (*(code *)(*pppplVar67)[6])(&local_430,pppplVar67);
    *(undefined1 *)((long)pppplVar67 + 0x22c) = 0;
LAB_7103752668:
    (*(code *)(*pppplVar67)[1])(pppplVar67);
  }
  if (bVar15) {
    lVar27 = *plVar37;
    puVar59 = *(uint **)(lVar27 + 0x118);
    if (puVar59 != (uint *)0x0) {
      puVar69 = (ulong *)plVar37[1];
      uVar34 = *puVar59;
      pppplVar67 = (long ****)(ulong)uVar34;
      if (*puVar69 != 0) {
        FUN_710392eb40(*puVar69);
      }
      if (uVar34 == 0) {
        uVar34 = 1;
      }
      pppbVar64 = (byte ***)(ulong)uVar34;
      pvVar61 = (void *)FUN_710392e290(4,pppbVar64,pppplVar63,ppppbVar30,(long ****)pcVar31,pbVar32,
                                       param_7,param_8);
      if (pvVar61 == (void *)0x0) {
        if (DAT_7105332f00 != (long *)0x0) {
          local_220 = (undefined **)((ulong)local_220 & 0xffffffff00000000);
          pppplVar63 = (long ****)&local_430;
          local_430 = (long ****)pppbVar64;
          uVar18 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_220);
          if ((uVar18 & 1) != 0) {
            pvVar61 = (void *)FUN_710392e290(4,pppbVar64,pppplVar63,ppppbVar30,(long ****)pcVar31,
                                             pbVar32,param_7,param_8);
            goto LAB_71037526fc;
          }
        }
        pvVar61 = (void *)0x0;
      }
LAB_71037526fc:
      *puVar69 = (ulong)pvVar61;
      memcpy(pvVar61,puVar59,(size_t)pppplVar67);
      puVar69[1] = (long)pvVar61 + 8;
      puVar69[2] = (long)pvVar61 + 0x14U;
      uVar18 = (long)pvVar61 + 0x14U + (ulong)*(uint *)((long)pvVar61 + 8) * 8;
      puVar69[3] = uVar18;
      uVar18 = uVar18 + (ulong)*(uint *)((long)pvVar61 + 8) * 0x20;
      puVar69[4] = uVar18;
      uVar18 = uVar18 + (ulong)*(uint *)((long)pvVar61 + 0x10) * 8;
      if (*(int *)((long)pvVar61 + 0xc) != 0) {
        puVar69[5] = uVar18;
        uVar18 = uVar18 + (ulong)*(uint *)((long)pvVar61 + 0xc) * 4;
      }
      puVar69[6] = uVar18;
      lVar27 = *plVar37;
      pppplVar63 = pppplVar67;
    }
    puVar59 = *(uint **)(lVar27 + 0x120);
    if (puVar59 != (uint *)0x0) {
      puVar69 = (ulong *)plVar37[2];
      pppplVar67 = pppplVar63;
      if (*puVar69 != 0) {
        FUN_710392eb40(*puVar69);
        pppplVar67 = pppplVar63;
      }
      uVar34 = *puVar59;
      pppplVar63 = (long ****)(ulong)uVar34;
      if (uVar34 == 0) {
        uVar34 = 1;
      }
      pppbVar64 = (byte ***)(ulong)uVar34;
      pvVar61 = (void *)FUN_710392e290(8,pppbVar64,pppplVar67,ppppbVar30,(long ****)pcVar31,pbVar32,
                                       param_7,param_8);
      if (pvVar61 == (void *)0x0) {
        if (DAT_7105332f00 != (long *)0x0) {
          local_220 = (undefined **)((ulong)local_220 & 0xffffffff00000000);
          pppplVar67 = (long ****)&local_430;
          local_430 = (long ****)pppbVar64;
          uVar18 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_220);
          if ((uVar18 & 1) != 0) {
            pvVar61 = (void *)FUN_710392e290(8,pppbVar64,pppplVar67,ppppbVar30,(long ****)pcVar31,
                                             pbVar32,param_7,param_8);
            goto LAB_71037527d0;
          }
        }
        pvVar61 = (void *)0x0;
      }
LAB_71037527d0:
      *puVar69 = (ulong)pvVar61;
      memcpy(pvVar61,puVar59,(size_t)pppplVar63);
      puVar69[1] = (ulong)pvVar61;
      puVar69[2] = (long)pvVar61 + 0x10U;
      puVar69[3] = (long)pvVar61 + 0x10U + (ulong)*(uint *)((long)pvVar61 + 0x10) * 8 + 8;
      puVar69[4] = (long)pvVar61 + *(long *)((long)pvVar61 + 8);
      lVar27 = *plVar37;
    }
    if (lVar27 != 0) {
      lVar68 = *(long *)(lVar27 + 0x40);
      uVar34 = *(int *)(lVar68 + 0x24) +
               *(int *)(lVar68 + 0x24) + *(int *)(lVar68 + 0x10) + *(int *)(lVar68 + 0x40);
      *(uint *)(lVar43 + 0x48) = uVar34;
      pppbVar64 = (byte ***)((ulong)uVar34 * 0x48);
      if (uVar34 == 0) {
        pppbVar64 = (byte ***)0x1;
      }
      pvVar61 = (void *)FUN_710392e290(4,pppbVar64,pppplVar63,ppppbVar30,(long ****)pcVar31,pbVar32,
                                       param_7,param_8);
      if ((pvVar61 == (void *)0x0) && (pvVar61 = (void *)0x0, DAT_7105332f00 != (long *)0x0)) {
        local_220 = (undefined **)((ulong)local_220 & 0xffffffff00000000);
        pppplVar63 = (long ****)&local_430;
        local_430 = (long ****)pppbVar64;
        uVar18 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_220);
        if ((uVar18 & 1) == 0) {
          pvVar61 = (void *)0x0;
        }
        else {
          pvVar61 = (void *)FUN_710392e290(4,pppbVar64,pppplVar63,ppppbVar30,(long ****)pcVar31,
                                           pbVar32,param_7,param_8);
        }
      }
      pppplVar63 = (long ****)((ulong)*(uint *)(lVar43 + 0x48) * 0x48);
      *(void **)(lVar43 + 0x40) = pvVar61;
      memset(pvVar61,0,(size_t)pppplVar63);
      uVar34 = *(uint *)(*(long *)(lVar27 + 0x40) + 4);
      pppbVar64 = (byte ***)((ulong)uVar34 << 3);
      if (uVar34 == 0) {
        pppbVar64 = (byte ***)0x1;
      }
      *(uint *)(lVar43 + 0x18) = uVar34;
      pvVar61 = (void *)FUN_710392e290(4,pppbVar64,pppplVar63,ppppbVar30,(long ****)pcVar31,pbVar32,
                                       param_7,param_8);
      if ((pvVar61 == (void *)0x0) && (pvVar61 = (void *)0x0, DAT_7105332f00 != (long *)0x0)) {
        local_220 = (undefined **)((ulong)local_220 & 0xffffffff00000000);
        pppplVar63 = (long ****)&local_430;
        local_430 = (long ****)pppbVar64;
        uVar18 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_220);
        if ((uVar18 & 1) == 0) {
          pvVar61 = (void *)0x0;
        }
        else {
          pvVar61 = (void *)FUN_710392e290(4,pppbVar64,pppplVar63,ppppbVar30,(long ****)pcVar31,
                                           pbVar32,param_7,param_8);
        }
      }
      pppplVar63 = (long ****)((ulong)*(uint *)(lVar43 + 0x18) << 3);
      *(void **)(lVar43 + 8) = pvVar61;
      memset(pvVar61,0,(size_t)pppplVar63);
      uVar34 = *(uint *)(*(long *)(lVar27 + 0x40) + 8);
      pppbVar64 = (byte ***)((ulong)uVar34 * 0x18);
      if (uVar34 == 0) {
        pppbVar64 = (byte ***)0x1;
      }
      *(uint *)(lVar43 + 0x1c) = uVar34;
      pvVar61 = (void *)FUN_710392e290(4,pppbVar64,pppplVar63,ppppbVar30,(long ****)pcVar31,pbVar32,
                                       param_7,param_8);
      if ((pvVar61 == (void *)0x0) && (pvVar61 = (void *)0x0, DAT_7105332f00 != (long *)0x0)) {
        local_220 = (undefined **)((ulong)local_220 & 0xffffffff00000000);
        pppplVar63 = (long ****)&local_430;
        local_430 = (long ****)pppbVar64;
        uVar18 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_220);
        if ((uVar18 & 1) == 0) {
          pvVar61 = (void *)0x0;
        }
        else {
          pvVar61 = (void *)FUN_710392e290(4,pppbVar64,pppplVar63,ppppbVar30,(long ****)pcVar31,
                                           pbVar32,param_7,param_8);
        }
      }
      pppplVar63 = (long ****)((ulong)*(uint *)(lVar43 + 0x1c) * 0x18);
      *(void **)(lVar43 + 0x10) = pvVar61;
      memset(pvVar61,0,(size_t)pppplVar63);
      *(uint *)(lVar43 + 0x80) =
           *(uint *)(*(long *)(**(long **)(lVar43 + 0x78) + 0x40) + 0x3c) & 0xffffff;
    }
  }
  goto LAB_71037528fc;
}

