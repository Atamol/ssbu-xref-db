// addr:      7101a8b9b0
// offset:    0x1a8b9b0
// name:      FUN_7101a8b9b0
// mangled:   
// signature: undefined __cdecl FUN_7101a8b9b0(long param_1, undefined8 param_2, byte * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


/* WARNING: Removing unreachable block (ram,0x007101a8d5fc) */
/* WARNING: Removing unreachable block (ram,0x007101a8d678) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7101a8b9b0(long param_1,undefined8 param_2,byte ****param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  uint *puVar1;
  byte ****ppppbVar2;
  byte **ppbVar3;
  int iVar4;
  long *plVar5;
  ulong *puVar6;
  byte ****ppppbVar7;
  byte ***pppbVar8;
  byte ***pppbVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  uint uVar12;
  char cVar13;
  bool bVar14;
  int iVar15;
  byte bVar16;
  bool bVar17;
  int iVar18;
  undefined8 *puVar19;
  ulong uVar20;
  undefined8 uVar21;
  void *pvVar22;
  long *plVar23;
  byte **ppbVar24;
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
  size_t sVar25;
  byte ****ppppbVar26;
  long ****pppplVar27;
  long ****pppplVar28;
  long *********ppppppppplVar29;
  undefined1 uVar30;
  undefined4 uVar31;
  long lVar32;
  long lVar33;
  undefined8 *puVar34;
  byte ****ppppbVar35;
  int *piVar36;
  byte **ppbVar37;
  int *piVar38;
  int *piVar39;
  byte ***pppbVar40;
  short *psVar41;
  byte *pbVar42;
  int iVar43;
  byte **ppbVar44;
  byte *pbVar45;
  int *piVar46;
  ulong uVar47;
  uint uVar48;
  char *pcVar49;
  undefined8 *puVar50;
  byte ****ppppbVar51;
  char *pcVar52;
  int iVar53;
  int iVar54;
  long lVar55;
  undefined8 *puVar56;
  long *plVar57;
  byte ****__src;
  void *pvVar58;
  undefined8 *__dest;
  byte **ppbVar59;
  size_t __n;
  uint *puVar60;
  int *piVar61;
  uint *puVar62;
  float fVar63;
  float fVar64;
  float fVar65;
  float fVar66;
  byte *pbVar67;
  float fVar68;
  float fVar69;
  float fVar70;
  float fVar71;
  float fVar72;
  undefined1 auVar73 [16];
  long *local_260;
  long *local_250;
  undefined4 local_240 [2];
  undefined **local_238;
  long local_230;
  undefined8 local_228;
  undefined1 local_220;
  undefined8 local_218;
  undefined8 uStack_210;
  undefined8 local_208;
  undefined4 local_200 [4];
  long local_1f0;
  int local_1e8;
  undefined4 local_1c0 [2];
  undefined **local_1b8;
  long local_1b0;
  undefined8 local_1a8;
  undefined1 local_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  byte ***local_180 [4];
  undefined8 local_160;
  undefined **local_158;
  long local_150;
  undefined8 local_148;
  undefined1 local_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined4 local_120 [4];
  long local_110;
  int local_108;
  byte ***local_e0;
  byte ***local_d8;
  byte ***local_d0;
  byte ***local_c8;
  undefined1 local_c0 [8];
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  long ***local_a0 [2];
  undefined4 local_84;
  
  lVar55 = DAT_710532f820;
  lVar33 = DAT_7105329f38;
  pbVar45 = (byte *)(param_1 + 0x391c);
  if (*(int *)(param_1 + 0x10c) != 0) {
    switch(*(undefined4 *)(param_1 + 0x3824)) {
    case 0:
      iVar18 = *(int *)(*(long *)(param_1 + 0x3920) + 0xe8);
      if (iVar18 != 6 && iVar18 != 0) {
        return;
      }
      lVar32 = *(long *)(param_1 + 0x3850);
      if (lVar32 != *(long *)(param_1 + 0x3848)) {
        *(undefined1 *)(param_1 + 0x3890) = 1;
        uVar48 = *(uint *)(lVar32 + -8);
        if (uVar48 == *(uint *)(param_1 + 0x377c)) {
          FUN_7101a91d70(param_1,*(uint *)(lVar32 + -4),param_3,param_4,param_5,param_6,param_7,
                         param_8);
          FUN_7101a910c0(param_1,*(uint *)(*(long *)(param_1 + 0x3850) + -4),
                         (ulong)(*(char *)(param_1 + 0x3928) == '\0'),0,param_5,param_6,param_7,
                         param_8);
          goto LAB_7101a8cb14;
        }
        if (*(char *)(param_1 + 0x3928) == '\0') {
          FUN_7101a91970(param_1,uVar48,param_3,param_4,param_5,param_6,param_7,param_8);
          if (7 < *(uint *)(param_1 + 0x377c)) goto LAB_7101a8e058;
          lVar33 = *(long *)(param_1 + (long)(int)*(uint *)(param_1 + 0x377c) * 8 + 0x3780);
          lVar55 = *(long *)(lVar33 + 0x1b8);
          if (lVar55 != 0) {
            iVar18 = *(int *)(lVar33 + 0x254);
            lVar32 = lVar33 + 0x1b8;
            do {
              if (iVar18 <= *(int *)(lVar55 + 0x20)) {
                lVar32 = lVar55;
              }
              lVar55 = *(long *)(lVar55 + (ulong)(*(int *)(lVar55 + 0x20) < iVar18) * 8);
            } while (lVar55 != 0);
            if (((lVar32 != lVar33 + 0x1b8) && (*(int *)(lVar32 + 0x20) <= iVar18)) &&
               (plVar57 = *(long **)(lVar32 + 0x28), plVar57 != (long *)0x0)) {
              (**(code **)(*plVar57 + 0x218))(plVar57,0);
              (**(code **)(*plVar57 + 0x410))(plVar57);
              (**(code **)(*plVar57 + 0x3f0))(plVar57,0);
              iVar18 = (**(code **)(*plVar57 + 0x140))(plVar57);
              if ((iVar18 != 6) && (iVar18 = (**(code **)(*plVar57 + 0x140))(plVar57), iVar18 != 1))
              {
                (**(code **)(*plVar57 + 0x400))(plVar57);
              }
              uVar20 = (**(code **)(*plVar57 + 0x158))(plVar57);
              if ((uVar20 & 1) == 0) {
                (**(code **)(*plVar57 + 0x370))(plVar57);
              }
            }
          }
          goto LAB_7101a8dd00;
        }
        if (uVar48 < 8) {
          do {
            if (0x1d < *(uint *)(lVar32 + -4)) break;
            *(undefined4 *)
             (param_1 + (long)(int)uVar48 * 0x6c8 + (long)(int)*(uint *)(lVar32 + -4) * 0x38 + 0x138
             ) = 3;
            pppplVar28 = (long ****)(*(long *)(param_1 + 0x3850) + -8);
            FUN_7101a915d0((ulong *)(param_1 + 0x3860),*(long *****)(param_1 + 0x3860),pppplVar28,
                           param_4,param_5,param_6,param_7,param_8);
            *(long *)(param_1 + 0x3850) = *(long *)(param_1 + 0x3850) + -8;
            FUN_7101a90280(param_1,extraout_x1_06,pppplVar28,param_4,param_5,param_6,param_7,param_8
                          );
            *(int *)(param_1 + 0x3914) = *(int *)(param_1 + 0x3914) + 10;
            lVar32 = *(long *)(param_1 + 0x3850);
            if (lVar32 == *(long *)(param_1 + 0x3848)) {
              return;
            }
            uVar48 = *(uint *)(lVar32 + -8);
          } while (uVar48 < 8);
        }
        goto LAB_7101a8e058;
      }
      if (*(long *)(param_1 + 0x3868) != *(long *)(param_1 + 0x3860)) {
LAB_7101a8cb14:
        *(undefined4 *)(param_1 + 0x3824) = 3;
        return;
      }
      if (0 < *(int *)(param_1 + 0x3914)) {
        if ((*(char *)(param_1 + 0x3912) != '\0') && (*(char *)(param_1 + 0x3913) == '\0')) {
          lVar55 = *(long *)(DAT_710532f8d0 + 8);
          std::recursive_mutex::lock();
          plVar57 = &DAT_7104465568;
          if (*(char *)(*(long *)(lVar33 + 0x28) + 0x58) != '\0') {
            plVar57 = (long *)(*(long *)(lVar33 + 0x28) + 0x68);
          }
          lVar32 = *plVar57;
          std::recursive_mutex::unlock();
          lVar33 = *(long *)(lVar55 + 0x18);
          if ((lVar33 != lVar32) || (lVar33 == 0)) {
            FUN_71033145d0(DAT_710532f8d0,0xd9ffff23cace5d73,1,param_4,param_5,param_6,param_7,
                           param_8);
          }
        }
        if ((((*(char *)(*(long *)(DAT_710532f8d0 + 8) + 0x191) == '\0') &&
             (uVar20 = FUN_7103313f20(*(long *)(DAT_710532f8d0 + 8),0x1959d64bc9,
                                      (long ****)&DAT_00000004,param_4,param_5,param_6,param_7,
                                      param_8), (uVar20 & 1) != 0)) &&
            (FUN_71024076d0(local_120,0x1959d64bc9), local_110 != 0)) &&
           ((DAT_7106dd53a8 == '\x01' && (local_108 == DAT_7106dd53ac)))) {
          piVar36 = (int *)(local_110 + 0x38);
          do {
            cVar13 = '\x01';
            bVar17 = (bool)ExclusiveMonitorPass(piVar36,0x10);
            if (bVar17) {
              *piVar36 = *piVar36 + -1;
              cVar13 = ExclusiveMonitorsStatus();
            }
          } while (cVar13 != '\0');
        }
        *(undefined4 *)(param_1 + 0x3824) = 4;
        return;
      }
      if (*(long *)(param_1 + 0x3880) != *(long *)(param_1 + 0x3878)) {
        uVar48 = *(uint *)(*(long *)(param_1 + 0x3880) + -4);
        if (uVar48 == *(uint *)(param_1 + 0x377c)) {
          if (uVar48 < 8) {
            *(undefined1 *)(param_1 + (long)(int)uVar48 * 0x6c8 + 0x7c8) = 1;
            FUN_7103776640(local_180,**(long **)(param_1 + 0x120) + 8,(byte ****)"set_parts_clear",
                           param_3,param_4,param_5,param_6,param_7,param_8);
            lVar33 = *(long *)(*(long *)(**(long **)(param_1 + 0x120) + 0x10) + 8);
            if (((lVar33 == 0) ||
                (plVar57 = (long *)FUN_71037964b0(lVar33,0x71042a2a1f), plVar57 == (long *)0x0)) ||
               (uVar20 = (**(code **)(*plVar57 + 0x130))(), pppbVar40 = local_180[1],
               (uVar20 & 1) == 0)) {
              if ((*(char *)(*(long *)(DAT_710532f8d0 + 8) + 0x191) == '\0') &&
                 (uVar20 = FUN_7103313f20(*(long *)(DAT_710532f8d0 + 8),0x1cb1ad440c,
                                          (long ****)&DAT_00000004,param_4,param_5,param_6,param_7,
                                          param_8), (uVar20 & 1) != 0)) {
                FUN_71024076d0((undefined4 *)&local_e0,0x1cb1ad440c);
                if (((local_d0 != (byte ***)0x0) && (DAT_7106dd53a8 == '\x01')) &&
                   ((int)local_c8 == DAT_7106dd53ac)) {
                  local_d0 = local_d0 + 7;
                  do {
                    cVar13 = '\x01';
                    bVar17 = (bool)ExclusiveMonitorPass(local_d0,0x10);
                    if (bVar17) {
                      *(int *)local_d0 = *(int *)local_d0 + -1;
                      cVar13 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar13 != '\0');
                }
              }
              else {
                local_c8 = (byte ***)0x87650000000000;
                local_b8 = 0xffffffffffffffff;
                uStack_b0 = 0;
                local_e0 = (byte ***)((ulong)local_e0 & 0xffffffff00000000);
                local_a8 = 0;
              }
              local_d8 = (byte ***)&PTR_FUN_7104f73d50;
              local_d0 = (byte ***)0x0;
              local_c0[0] = 0;
              FUN_7103778300(0x3f800000,*(long *)(**(long **)(param_1 + 0x120) + 0x10),0x71042a2a1f)
              ;
              FUN_7103778300(0x3f800000,(long)local_180[1],0x710438b28f);
              *(undefined4 *)(param_1 + 0x3918) = 0;
              pppbVar40 = local_180[1];
            }
            local_180[0] = (byte ***)&PTR_FUN_710523d988;
            local_180[1] = (byte ***)0x0;
            if (pppbVar40 != (byte ***)0x0) {
              ppbVar24 = pppbVar40[3];
              pppbVar40[2] = &PTR_FUN_710523d9a8;
              pppbVar40[3] = (byte **)0x0;
              if (ppbVar24 != (byte **)0x0) {
                FUN_710392eb40((ulong)ppbVar24);
              }
              FUN_710392eb40((ulong)pppbVar40);
            }
            *(undefined4 *)(param_1 + 0x3824) = 5;
            return;
          }
          goto LAB_7101a8e058;
        }
LAB_7101a8dcf8:
        FUN_7101a91970(param_1,uVar48,param_3,param_4,param_5,param_6,param_7,param_8);
LAB_7101a8dd00:
        *(undefined4 *)(param_1 + 0x3824) = 2;
        return;
      }
      if (*(long *)(param_1 + 0x38a0) != *(long *)(param_1 + 0x3898)) {
        psVar41 = (short *)(*(long *)(*DAT_7105329f98 + 0x30) + 0x88d68);
        lVar33 = 8000;
        while (((psVar41[-0x50] == -1 && (psVar41[-0x28] == -1)) &&
               ((*psVar41 == -1 && (psVar41[0x28] == -1))))) {
          lVar33 = lVar33 + -0x140;
          psVar41 = psVar41 + 0xa0;
          if (lVar33 == 0) {
            uVar30 = 0;
LAB_7101a8d79c:
            *(undefined1 *)(param_1 + 0x391d) = uVar30;
            *(undefined4 *)(param_1 + 0x3824) = 6;
            return;
          }
        }
        uVar30 = 1;
        goto LAB_7101a8d79c;
      }
      if (*pbVar45 == 0) {
        bVar17 = FUN_7103291150(*(long *)(*(long *)(DAT_710532f730 + 8) + 0x1c8),0x58ffff1c90c15fa4)
        ;
        if (bVar17) {
          FUN_71032edf70(*(uint **)(lVar55 + 0x10),0x58ffff1c90c15fa4);
          FUN_71032f1bb0(*(long *)(lVar55 + 8),*(uint **)(lVar55 + 0x10),param_3,param_4,param_5,
                         param_6,param_7,param_8);
        }
        else {
          *(undefined4 *)(*(long *)(lVar55 + 8) + 0x118) = 0;
        }
        *pbVar45 = 1;
        return;
      }
      lVar33 = *(long *)(DAT_710532f820 + 8);
      uVar21 = FUN_7101eefe30(*(long *)(*(long *)(lVar33 + 0x110) + 0x80));
      if ((*(int *)(lVar33 + 0xf8) != 0 || (((uint)uVar21 ^ 0xffffffff) & 1) != 0) ||
          *(char *)(lVar33 + 0x142) != '\0') {
        return;
      }
      if (*(char *)(param_1 + 0x391d) != '\0') {
        *(undefined1 *)(param_1 + 0x391d) = 0;
        *(undefined1 *)(param_1 + 0x391e) = 1;
        return;
      }
      if (*(char *)(param_1 + 0x3779) != '\0') {
        *(undefined1 *)(param_1 + 0x3890) = 0;
        if (*(uint *)(param_1 + 0x104) < 0x13) {
          *(undefined4 *)(param_1 + (long)(int)*(uint *)(param_1 + 0x104) * 4 + 0xb8) = 5;
          return;
        }
        goto LAB_7101a8e058;
      }
      uVar48 = *(uint *)(param_1 + 0x3938);
      if (uVar48 != *(uint *)(param_1 + 0x377c)) goto LAB_7101a8dcf8;
      if (*(char *)(param_1 + 0x391e) != '\0') {
        return;
      }
      if (7 < uVar48) goto LAB_7101a8e058;
      pppplVar28 = (long ****)(ulong)*(uint *)(param_1 + 0x393c);
      FUN_7103771d60(local_180,*(long *)(param_1 + (long)(int)uVar48 * 8 + 0x3780),pppplVar28,
                     param_4,param_5,param_6,param_7,param_8);
      pppbVar40 = local_180[1];
      FUN_710377ad90(&local_e0,(long)*local_180[1],pppplVar28,param_4,param_5,param_6,param_7,
                     param_8);
      pppbVar8 = local_d8;
      ppbVar24 = *local_d8;
      if (ppbVar24 == (byte **)0x0) {
        fVar63 = 0.0;
        fVar64 = 0.0;
        fVar68 = (float)((ulong)_ConstantZero >> 0x20);
        pbVar45 = _ConstantZero;
      }
      else {
        fVar68 = *(float *)(ppbVar24 + 6);
        fVar63 = ABS(*(float *)(ppbVar24 + 10) * *(float *)(ppbVar24 + 9));
        pbVar67 = ppbVar24[6];
        fVar64 = ABS(*(float *)((long)ppbVar24 + 0x54) * *(float *)((long)ppbVar24 + 0x4c));
        bVar16 = *(byte *)((long)ppbVar24 + 0x5b) & 3;
        if (bVar16 == 2) {
          fVar68 = fVar68 - fVar63 * 0.5;
LAB_7101a8dd2c:
          pbVar67 = (byte *)CONCAT44((int)((ulong)pbVar67 >> 0x20),fVar68);
        }
        else if (bVar16 == 1) {
          fVar68 = fVar68 + fVar63 * 0.5;
          goto LAB_7101a8dd2c;
        }
        bVar16 = *(byte *)((long)ppbVar24 + 0x5b) >> 2 & 3;
        fVar68 = (float)((ulong)pbVar67 >> 0x20);
        if (bVar16 == 2) {
          fVar68 = fVar64 * 0.5 + fVar68;
LAB_7101a8dd5c:
          pbVar67 = (byte *)CONCAT44(fVar68,(int)pbVar67);
        }
        else if (bVar16 == 1) {
          fVar68 = fVar68 - fVar64 * 0.5;
          goto LAB_7101a8dd5c;
        }
        pbVar42 = ppbVar24[3];
        if (pbVar42 == (byte *)0x0) {
          fVar68 = (float)((ulong)pbVar67 >> 0x20);
          pbVar45 = pbVar67;
        }
        else {
          do {
            fVar70 = SUB84(pbVar67,0) + *(float *)(pbVar42 + 0x30);
            pbVar45 = (byte *)(ulong)(uint)fVar70;
            fVar68 = (float)((ulong)pbVar67 >> 0x20) + *(float *)(pbVar42 + 0x34);
            pbVar67 = (byte *)CONCAT44(fVar68,fVar70);
            pbVar42 = *(byte **)(pbVar42 + 0x18);
          } while (pbVar42 != (byte *)0x0);
        }
      }
      fVar70 = SUB84(pbVar45,0) + 960.0;
      fVar71 = fVar70 - fVar63 * 0.5;
      fVar72 = (540.0 - fVar68) - fVar64 * 0.5;
      local_e0 = (byte ***)&PTR_FUN_710523d9a8;
      local_d8 = (byte ***)0x0;
      if (pppbVar8 != (byte ***)0x0) {
        FUN_710392eb40((ulong)pppbVar8);
      }
      local_180[0] = (byte ***)&PTR_FUN_710523d9c8;
      local_180[1] = (byte ***)0x0;
      if (pppbVar40 != (byte ***)0x0) {
        FUN_710392eb40((ulong)pppbVar40);
      }
      lVar33 = *(long *)(param_1 + 0x128);
      fVar66 = *(float *)(lVar33 + 0x90);
      fVar69 = *(float *)(lVar33 + 0x94);
      fVar65 = fVar71 + ((fVar70 + fVar63 * 0.5) - fVar71) * 0.5 + -960.0;
      fVar70 = *(float *)(lVar33 + 0x98);
      fVar71 = *(float *)(lVar33 + 0x9c);
      fVar63 = fVar66;
      if (fVar66 <= fVar65) {
        fVar63 = fVar65;
      }
      fVar68 = 540.0 - (fVar72 + (((540.0 - fVar68) + fVar64 * 0.5) - fVar72) * 0.5);
      fVar64 = fVar69;
      if (fVar63 <= fVar69) {
        fVar64 = fVar63;
      }
      fVar63 = fVar70;
      if (fVar70 <= fVar68) {
        fVar63 = fVar68;
      }
      fVar68 = fVar71;
      if (fVar63 <= fVar71) {
        fVar68 = fVar63;
      }
      *(undefined8 *)(lVar33 + 0x78) = 0;
      *(ulong *)(lVar33 + 0x70) = CONCAT44(fVar68,fVar64);
      *(undefined8 *)(lVar33 + 0x60) = *(undefined8 *)(lVar33 + 0x70);
      *(undefined8 *)(lVar33 + 0x68) = *(undefined8 *)(lVar33 + 0x78);
      fVar63 = (float)*(undefined8 *)(lVar33 + 0x60);
      fVar64 = (float)((ulong)*(undefined8 *)(lVar33 + 0x60) >> 0x20);
      if (fVar66 <= fVar63) {
        fVar66 = fVar63;
      }
      if (fVar66 <= fVar69) {
        fVar69 = fVar66;
      }
      if (fVar70 <= fVar64) {
        fVar70 = fVar64;
      }
      if (fVar70 <= fVar71) {
        fVar71 = fVar70;
      }
      *(undefined8 *)(lVar33 + 0x68) = 0;
      *(ulong *)(lVar33 + 0x60) = CONCAT44(fVar71,fVar69);
      lVar33 = *(long *)(lVar33 + 0x38);
      if (lVar33 != 0) {
        *(float *)(lVar33 + 0x30) = fVar69;
        *(float *)(lVar33 + 0x34) = fVar71;
        *(byte *)(lVar33 + 0x58) = *(byte *)(lVar33 + 0x58) | 0x10;
      }
      *(undefined1 *)(param_1 + 0x3890) = 0;
      FUN_71037760f0(*(long *)**(undefined8 **)(param_1 + 0x120),1);
      lVar33 = *(long *)(DAT_710532f730 + 8);
      uVar48 = *(uint *)(param_1 + 0x393c);
      FUN_7103776910(&local_e0,**(long **)(param_1 + 0x120) + 8,(long ****)"set_rep_fighter_art",
                     pppplVar28,param_4,param_5,param_6,param_7,param_8);
      ppppppppplVar29 = (long *********)(ulong)uVar48;
      plVar57 = *(long **)(param_1 + 0x118);
      uVar20 = FUN_7103267660(*(long *)(lVar33 + 0x348),*(uint *)(param_1 + 0x377c),uVar48);
      plVar57 = FUN_7103240a70(plVar57,uVar20,(long ****)ppppppppplVar29,param_4,param_5,param_6,
                               param_7,param_8);
      pppbVar40 = local_d8;
      FUN_7103778b80((long)local_d8,(long)plVar57,ppppppppplVar29,param_4,param_5,param_6,param_7,
                     param_8);
      local_e0 = (byte ***)&PTR_FUN_710523d9a8;
      local_d8 = (byte ***)0x0;
      if (pppbVar40 != (byte ***)0x0) {
        FUN_710392eb40((ulong)pppbVar40);
      }
      FUN_7103778300(0x3f800000,*(long *)(**(long **)(param_1 + 0x120) + 0x10),0x710437c077);
      if ((*(char *)(*(long *)(DAT_710532f8d0 + 8) + 0x191) == '\0') &&
         (uVar20 = FUN_7103313f20(*(long *)(DAT_710532f8d0 + 8),0x19b197f89a,
                                  (long ****)&DAT_00000004,param_4,param_5,param_6,param_7,param_8),
         (uVar20 & 1) != 0)) {
        FUN_71024076d0((undefined4 *)&local_160,0x19b197f89a);
        if (((local_150 != 0) && (DAT_7106dd53a8 == '\x01')) && ((int)local_148 == DAT_7106dd53ac))
        {
          piVar36 = (int *)(local_150 + 0x38);
          do {
            cVar13 = '\x01';
            bVar17 = (bool)ExclusiveMonitorPass(piVar36,0x10);
            if (bVar17) {
              *piVar36 = *piVar36 + -1;
              cVar13 = ExclusiveMonitorsStatus();
            }
          } while (cVar13 != '\0');
        }
      }
      else {
        local_148 = 0x87650000000000;
        local_138 = 0xffffffffffffffff;
        uStack_130 = 0;
        local_160._0_4_ = 0;
        local_128 = 0;
      }
      local_158 = &PTR_FUN_7104f73d50;
      local_150 = 0;
      local_140 = 0;
      if (*(uint *)(param_1 + 0x104) < 0x13) {
        *(undefined4 *)(param_1 + (long)(int)*(uint *)(param_1 + 0x104) * 4 + 0xb8) = 4;
        return;
      }
      goto LAB_7101a8e058;
    case 1:
      if (((*(int *)(*(long *)(param_1 + 0x3920) + 0xe8) != 0) &&
          (*(int *)(*(long *)(param_1 + 0x3920) + 0xf8) != 0)) &&
         (FUN_7101a91d70(param_1,*(uint *)(*(long *)(param_1 + 0x3868) + -4),param_3,param_4,param_5
                         ,param_6,param_7,param_8), *(char *)(param_1 + 0x3779) != '\0')) {
        FUN_7103776640(&local_e0,**(long **)(param_1 + 0x120) + 8,(byte ****)"set_parts_cur_hammer",
                       param_3,param_4,param_5,param_6,param_7,param_8);
        FUN_71037780e0(local_180,(long)&local_e0,(long ****)"hammer_start",param_3,param_4,param_5,
                       param_6,param_7,param_8);
        pppbVar40 = local_180[1];
        ppbVar24 = local_180[1][1];
        if (ppbVar24 == (byte **)0x0) {
          local_180[0] = (byte ***)&PTR_FUN_710523d9e8;
          local_180[1] = (byte ***)0x0;
          if (pppbVar40 != (byte ***)0x0) goto LAB_7101a8d194;
        }
        else {
          if (*(char *)(local_180[1] + 2) != '\0') {
            ppbVar59 = (byte **)(*local_180[1])[0x10];
            ppbVar3 = *local_180[1] + 0x11;
            if (ppbVar59 != ppbVar3) {
              do {
                while( true ) {
                  uVar20 = (**(code **)(*(long *)ppbVar59[0xd] + 0x148))();
                  if (((uVar20 & 1) != 0) &&
                     (uVar20 = (**(code **)(*ppbVar24 + 0x120))(ppbVar24,ppbVar59[0xd]),
                     (uVar20 & 1) != 0)) {
                    (**(code **)(*(long *)ppbVar59[0xd] + 0x178))();
                    (**(code **)(*(long *)ppbVar59[0xd] + 0x140))(ppbVar59[0xd],0);
                  }
                  ppbVar37 = (byte **)ppbVar59[1];
                  if ((byte **)ppbVar59[1] == (byte **)0x0) break;
                  do {
                    ppbVar59 = ppbVar37;
                    ppbVar37 = (byte **)*ppbVar59;
                  } while ((byte **)*ppbVar59 != (byte **)0x0);
LAB_7101a8c4b4:
                  if (ppbVar59 == ppbVar3) goto LAB_7101a8c4cc;
                }
                ppbVar37 = ppbVar59 + 2;
                ppbVar44 = (byte **)*ppbVar37;
                if ((byte **)*ppbVar44 != ppbVar59) {
                  do {
                    pbVar45 = *ppbVar37;
                    ppbVar37 = (byte **)(pbVar45 + 0x10);
                    ppbVar59 = (byte **)*ppbVar37;
                  } while (*ppbVar59 != pbVar45);
                  goto LAB_7101a8c4b4;
                }
                ppbVar59 = ppbVar44;
              } while (ppbVar44 != ppbVar3);
LAB_7101a8c4cc:
              ppbVar24 = local_180[1][1];
            }
          }
          (**(code **)(*ppbVar24 + 0x188))(ppbVar24);
LAB_7101a8d194:
          local_180[1] = (byte ***)0x0;
          local_180[0] = (byte ***)&PTR_FUN_710523d9e8;
          FUN_710392eb40((ulong)pppbVar40);
        }
        pppbVar40 = local_d8;
        local_e0 = (byte ***)&PTR_FUN_710523d988;
        local_d8 = (byte ***)0x0;
        if (pppbVar40 != (byte ***)0x0) {
          ppbVar24 = pppbVar40[3];
          pppbVar40[2] = &PTR_FUN_710523d9a8;
          pppbVar40[3] = (byte **)0x0;
          if (ppbVar24 != (byte **)0x0) {
            FUN_710392eb40((ulong)ppbVar24);
          }
          FUN_710392eb40((ulong)pppbVar40);
        }
      }
      if (*(int *)(*(long *)(param_1 + 0x3920) + 0xe8) != 6) {
        return;
      }
      uVar48 = *(uint *)(*(long *)(param_1 + 0x3868) + -8);
      if ((uVar48 < 8) && (uVar12 = *(uint *)(*(long *)(param_1 + 0x3868) + -4), uVar12 < 0x1e)) {
        *(undefined1 *)(param_1 + (long)(int)uVar48 * 0x6c8 + (long)(int)uVar12 * 0x38 + 0x140) = 1;
        *(undefined8 *)(param_1 + 0x3868) = *(undefined8 *)(param_1 + 0x3860);
        *(undefined8 *)(param_1 + 0x38b8) = *(undefined8 *)(param_1 + 0x38b0);
        break;
      }
      goto LAB_7101a8e058;
    case 2:
      FUN_71037780e0(&local_e0,**(long **)(param_1 + 0x120) + 8,(long ****)"fighter_panel_r",param_3
                     ,param_4,param_5,param_6,param_7,param_8);
      pppbVar40 = local_d8;
      if (local_d8[1] == (byte **)0x0) {
        uVar20 = 1;
      }
      else {
        uVar20 = (**(code **)(*local_d8[1] + 0x138))();
        uVar20 = uVar20 & 0xffffffff;
      }
      local_e0 = (byte ***)&PTR_FUN_710523d9e8;
      local_d8 = (byte ***)0x0;
      if (pppbVar40 != (byte ***)0x0) {
        FUN_710392eb40((ulong)pppbVar40);
      }
      if ((uVar20 & 1) == 0) {
        return;
      }
      FUN_7101a8fdf0(param_1,0,param_3,param_4,param_5,param_6,param_7,param_8);
      break;
    case 3:
      lVar33 = *(long *)**(long **)(param_1 + 0x120);
      if (*(long *)(param_1 + 0x3850) != *(long *)(param_1 + 0x3848)) {
        ppppbVar35 = (byte ****)(ulong)*(uint *)(*(long *)(param_1 + 0x3850) + -4);
        uVar20 = (ulong)*(uint *)(param_1 + 0x377c);
        FUN_7103776640(&local_e0,(long)((long *)**(long **)(param_1 + 0x120) + 1),
                       (byte ****)"set_parts_in_%d%02d",uVar20,ppppbVar35,param_5,param_6,param_7,
                       param_8);
        FUN_71037780e0(local_180,(long)&local_e0,(long ****)&DAT_71043fffcb,uVar20,ppppbVar35,
                       param_5,param_6,param_7,param_8);
        pppbVar40 = local_180[1];
        if (local_180[1][1] == (byte **)0x0) {
          uVar47 = 1;
          uVar21 = extraout_x1_02;
        }
        else {
          auVar73 = (**(code **)(*local_180[1][1] + 0x138))();
          uVar21 = auVar73._8_8_;
          uVar47 = auVar73._0_8_ & 0xffffffff;
        }
        local_180[0] = (byte ***)&PTR_FUN_710523d9e8;
        local_180[1] = (byte ***)0x0;
        if (pppbVar40 != (byte ***)0x0) {
          FUN_710392eb40((ulong)pppbVar40);
          uVar21 = extraout_x1_04;
        }
        pppbVar40 = local_d8;
        local_e0 = (byte ***)&PTR_FUN_710523d988;
        local_d8 = (byte ***)0x0;
        if (pppbVar40 != (byte ***)0x0) {
          ppbVar24 = pppbVar40[3];
          pppbVar40[2] = &PTR_FUN_710523d9a8;
          pppbVar40[3] = (byte **)0x0;
          if (ppbVar24 != (byte **)0x0) {
            FUN_710392eb40((ulong)ppbVar24);
          }
          FUN_710392eb40((ulong)pppbVar40);
          uVar21 = extraout_x1_05;
        }
        if ((uVar47 & 1) == 0) {
          lVar33 = *(long *)(lVar33 + 0x600);
          if (*(char *)(lVar33 + 0x4aa) == '\0') {
            return;
          }
          if ((*(byte *)(lVar33 + 0x1a8) >> 1 & 1) == 0) {
            return;
          }
          if (*(char *)(param_1 + 0x3928) != '\0') {
            return;
          }
          *(undefined1 *)(param_1 + 0x3928) = 1;
          FUN_71037760f0(*(long *)**(undefined8 **)(param_1 + 0x120),0);
          return;
        }
        FUN_7101a90280(param_1,uVar21,uVar20,ppppbVar35,param_5,param_6,param_7,param_8);
        FUN_7101a915d0((ulong *)(param_1 + 0x3860),*(long *****)(param_1 + 0x3860),
                       (long ****)(*(long *)(param_1 + 0x3850) + -8),ppppbVar35,param_5,param_6,
                       param_7,param_8);
        *(long *)(param_1 + 0x3850) = *(long *)(param_1 + 0x3850) + -8;
        *(int *)(param_1 + 0x3914) = *(int *)(param_1 + 0x3914) + 10;
        break;
      }
      FUN_71037760f0(lVar33,0);
      if ((*(char *)(param_1 + 0x3912) == '\0') || (*(char *)(param_1 + 0x3913) != '\0')) {
        uVar21 = **(undefined8 **)(DAT_710532f8d0 + 8);
        lVar33 = *(long *)(param_1 + 0x3920);
        if ((*(long *)(lVar33 + 0x100) != *(long *)(lVar33 + 0x108)) ||
           (*(long *)(lVar33 + 0x118) != *(long *)(lVar33 + 0x120))) goto LAB_7101a8d154;
      }
      else {
        lVar33 = *(long *)(param_1 + 0x3920);
        if ((*(long *)(lVar33 + 0x100) != *(long *)(lVar33 + 0x108)) ||
           (*(long *)(lVar33 + 0x118) != *(long *)(lVar33 + 0x120))) {
          uVar21 = 0xd9ffff23cace5d73;
LAB_7101a8d154:
          *(undefined8 *)(lVar33 + 0x130) = uVar21;
          uVar48 = *(uint *)(lVar33 + 0xe4);
          uVar31 = 1;
          *(undefined1 *)(lVar33 + 0x138) = 1;
          *(undefined1 *)(lVar33 + 0x14c) = 0;
          if (uVar48 < 0x13) goto LAB_7101a8d170;
          goto LAB_7101a8e058;
        }
      }
      uVar48 = *(uint *)(lVar33 + 0xe4);
      if (uVar48 < 0x13) {
        uVar31 = 6;
LAB_7101a8d170:
        *(undefined4 *)(lVar33 + (long)(int)uVar48 * 4 + 0x98) = uVar31;
        *(undefined4 *)(param_1 + 0x3824) = 1;
        return;
      }
      goto LAB_7101a8e058;
    case 4:
      iVar18 = *(int *)(param_1 + 0x3914) + -1;
      if (*(int *)(param_1 + 0x3914) < 1) break;
      if (*(char *)(param_1 + 0x3928) != '\0') {
        *(undefined4 *)(param_1 + 0x3914) = 0;
        *(float *)(param_1 + 0x3840) = (float)*(int *)(param_1 + 0x392c);
        FUN_7101a936a0((float)*(int *)(param_1 + 0x392c),param_1,param_2,param_3,param_4,param_5,
                       param_6,param_7,param_8);
        if (*(int *)(param_1 + 0x3930) <= *(int *)(param_1 + 0x3834)) {
          return;
        }
        iVar18 = *(int *)(param_1 + 0x3930) + -1;
        *(int *)(param_1 + 0x3930) = iVar18;
        *(int *)(param_1 + 0x3834) = iVar18;
        uVar21 = extraout_x1;
        if (*(char *)(*(long *)(DAT_710532f8d0 + 8) + 0x191) == '\0') {
          param_3 = (byte ****)&DAT_00000004;
          uVar20 = FUN_7103313f20(*(long *)(DAT_710532f8d0 + 8),0x1d62427317,
                                  (long ****)&DAT_00000004,param_4,param_5,param_6,param_7,param_8);
          uVar21 = extraout_x1_00;
          if ((uVar20 & 1) != 0) {
            FUN_71024076d0(local_240,0x1d62427317);
            uVar21 = extraout_x1_01;
            if (((local_230 != 0) && (DAT_7106dd53a8 == '\x01')) &&
               ((int)local_228 == DAT_7106dd53ac)) {
              piVar36 = (int *)(local_230 + 0x38);
              do {
                cVar13 = '\x01';
                bVar17 = (bool)ExclusiveMonitorPass(piVar36,0x10);
                if (bVar17) {
                  *piVar36 = *piVar36 + -1;
                  cVar13 = ExclusiveMonitorsStatus();
                }
              } while (cVar13 != '\0');
            }
            goto LAB_7101a8d114;
          }
        }
        local_228 = 0x87650000000000;
        local_218 = 0xffffffffffffffff;
        uStack_210 = 0;
        local_240[0] = 0;
        local_208 = 0;
LAB_7101a8d114:
        local_238 = &PTR_FUN_7104f73d50;
        local_230 = 0;
        local_220 = 0;
        FUN_7101a93880(param_1,uVar21,param_3,param_4,param_5,param_6,param_7,param_8);
        return;
      }
      *(int *)(param_1 + 0x3914) = iVar18;
      FUN_7101a936a0((float)(((iVar18 / 10) * 10 - iVar18) + 10) / 10.0 +
                     *(float *)(param_1 + 0x3840),param_1,param_2,param_3,param_4,param_5,param_6,
                     param_7,param_8);
      iVar18 = *(int *)(param_1 + 0x3914);
      if (iVar18 % 10 != 0) {
        return;
      }
      fVar63 = *(float *)(param_1 + 0x3840) + 1.0;
      pcVar52 = *(char **)(param_1 + 0x38e8);
      *(float *)(param_1 + 0x3840) = fVar63;
      if ((*pcVar52 == '\f') && (iVar43 = *(int *)(pcVar52 + 1) + -1, 0 < *(int *)(pcVar52 + 1))) {
        iVar53 = 0;
        pcVar49 = "";
        do {
          iVar54 = iVar43 + iVar53;
          if (iVar54 < 0) {
            iVar54 = iVar54 + 1;
          }
          iVar54 = iVar54 >> 1;
          puVar60 = (uint *)(*(long *)(*(long *)(param_1 + 0x38e0) + 0x28) +
                             (long)*(int *)(pcVar52 + 5) + (long)iVar54 * 8);
          uVar20 = *(ulong *)(*(long *)(*(long *)(param_1 + 0x38e0) + 0x20) + (ulong)*puVar60 * 8);
          if (uVar20 == 0xe58b04e24) {
            uVar20 = (ulong)(int)puVar60[1];
            pcVar49 = "";
            if ((uVar20 & 0x80000000) == 0) {
              pcVar49 = pcVar52 + uVar20;
            }
            break;
          }
          iVar4 = iVar54 + -1;
          if (uVar20 < 0xe58b04e25) {
            iVar53 = iVar54 + 1;
            iVar4 = iVar43;
          }
          iVar43 = iVar4;
        } while (iVar53 <= iVar43);
      }
      else {
        pcVar49 = "";
      }
      switch(*pcVar49) {
      case '\x01':
      case '\x03':
        uVar48 = (uint)(byte)pcVar49[1];
        break;
      case '\x02':
        uVar48 = (uint)pcVar49[1];
        break;
      case '\x04':
        uVar48 = (uint)*(short *)(pcVar49 + 1);
        break;
      case '\x05':
        uVar48 = (uint)*(ushort *)(pcVar49 + 1);
        break;
      case '\x06':
      case '\a':
        uVar48 = *(uint *)(pcVar49 + 1);
        break;
      default:
        uVar48 = 0;
      }
      if (fVar63 < (float)(int)uVar48) goto LAB_7101a8db2c;
      if ((*pcVar52 == '\f') && (iVar18 = *(int *)(pcVar52 + 1) + -1, 0 < *(int *)(pcVar52 + 1))) {
        iVar43 = 0;
        pcVar49 = "";
        do {
          iVar53 = iVar18 + iVar43;
          if (iVar53 < 0) {
            iVar53 = iVar53 + 1;
          }
          iVar53 = iVar53 >> 1;
          puVar60 = (uint *)(*(long *)(*(long *)(param_1 + 0x38e0) + 0x28) +
                             (long)*(int *)(pcVar52 + 5) + (long)iVar53 * 8);
          uVar20 = *(ulong *)(*(long *)(*(long *)(param_1 + 0x38e0) + 0x20) + (ulong)*puVar60 * 8);
          if (uVar20 == 0xe58b04e24) {
            uVar20 = (ulong)(int)puVar60[1];
            pcVar49 = "";
            if ((uVar20 & 0x80000000) == 0) {
              pcVar49 = pcVar52 + uVar20;
            }
            break;
          }
          iVar54 = iVar53 + -1;
          if (uVar20 < 0xe58b04e25) {
            iVar43 = iVar53 + 1;
            iVar54 = iVar18;
          }
          iVar18 = iVar54;
        } while (iVar43 <= iVar18);
      }
      else {
        pcVar49 = "";
      }
      switch(*pcVar49) {
      case '\x01':
      case '\x03':
        uVar48 = (uint)(byte)pcVar49[1];
        break;
      case '\x02':
        uVar48 = (uint)pcVar49[1];
        break;
      case '\x04':
        uVar48 = (uint)*(short *)(pcVar49 + 1);
        break;
      case '\x05':
        uVar48 = (uint)*(ushort *)(pcVar49 + 1);
        break;
      case '\x06':
      case '\a':
        uVar48 = *(uint *)(pcVar49 + 1);
        break;
      default:
        uVar48 = 0;
      }
      *(float *)(param_1 + 0x3840) = fVar63 - (float)(int)uVar48;
      FUN_7101a936a0(fVar63 - (float)(int)uVar48,param_1,extraout_x1_03,param_3,param_4,param_5,
                     param_6,param_7,param_8);
      uVar21 = extraout_x1_07;
      if (*(char *)(*(long *)(DAT_710532f8d0 + 8) + 0x191) == '\0') {
        param_3 = (byte ****)&DAT_00000004;
        uVar20 = FUN_7103313f20(*(long *)(DAT_710532f8d0 + 8),0x1d62427317,(long ****)&DAT_00000004,
                                param_4,param_5,param_6,param_7,param_8);
        uVar21 = extraout_x1_08;
        if ((uVar20 & 1) == 0) goto LAB_7101a8daec;
        FUN_71024076d0(local_1c0,0x1d62427317);
        uVar21 = extraout_x1_09;
        if (((local_1b0 != 0) && (DAT_7106dd53a8 == '\x01')) && ((int)local_1a8 == DAT_7106dd53ac))
        {
          piVar36 = (int *)(local_1b0 + 0x38);
          do {
            cVar13 = '\x01';
            bVar17 = (bool)ExclusiveMonitorPass(piVar36,0x10);
            if (bVar17) {
              *piVar36 = *piVar36 + -1;
              cVar13 = ExclusiveMonitorsStatus();
            }
          } while (cVar13 != '\0');
        }
      }
      else {
LAB_7101a8daec:
        local_1a8 = 0x87650000000000;
        local_198 = 0xffffffffffffffff;
        uStack_190 = 0;
        local_1c0[0] = 0;
        local_188 = 0;
      }
      local_1b8 = &PTR_FUN_7104f73d50;
      local_1b0 = 0;
      local_1a0 = 0;
      FUN_7101a93880(param_1,uVar21,param_3,param_4,param_5,param_6,param_7,param_8);
      iVar18 = *(int *)(param_1 + 0x3914);
LAB_7101a8db2c:
      if (iVar18 < 1) {
        return;
      }
      if (*(char *)(*(long *)(DAT_710532f8d0 + 8) + 0x191) != '\0') {
        return;
      }
      uVar20 = FUN_7103313f20(*(long *)(DAT_710532f8d0 + 8),0x1959d64bc9,(long ****)&DAT_00000004,
                              param_4,param_5,param_6,param_7,param_8);
      if ((uVar20 & 1) == 0) {
        return;
      }
      FUN_71024076d0(local_200,0x1959d64bc9);
      if (local_1f0 == 0) {
        return;
      }
      if (DAT_7106dd53a8 != '\x01') {
        return;
      }
      if (local_1e8 != DAT_7106dd53ac) {
        return;
      }
      piVar36 = (int *)(local_1f0 + 0x38);
      do {
        cVar13 = '\x01';
        bVar17 = (bool)ExclusiveMonitorPass(piVar36,0x10);
        if (bVar17) {
          *piVar36 = *piVar36 + -1;
          cVar13 = ExclusiveMonitorsStatus();
        }
      } while (cVar13 != '\0');
      return;
    case 5:
      FUN_71037780e0(&local_e0,**(long **)(param_1 + 0x120) + 8,(long ****)"complete_on_ani",param_3
                     ,param_4,param_5,param_6,param_7,param_8);
      pppbVar40 = local_d8;
      if (local_d8[1] == (byte **)0x0) {
        uVar20 = 1;
      }
      else {
        uVar20 = (**(code **)(*local_d8[1] + 0x138))();
        uVar20 = uVar20 & 0xffffffff;
      }
      local_e0 = (byte ***)&PTR_FUN_710523d9e8;
      local_d8 = (byte ***)0x0;
      if (pppbVar40 != (byte ***)0x0) {
        FUN_710392eb40((ulong)pppbVar40);
      }
      if ((uVar20 & 1) == 0) {
        return;
      }
      iVar18 = *(int *)(param_1 + 0x3918);
      if (iVar18 < 0x1e) goto LAB_7101a8d580;
      uVar48 = *(uint *)(*(long *)(param_1 + 0x3880) + -4);
      if (7 < uVar48) goto LAB_7101a8e058;
      lVar33 = param_1 + (long)(int)uVar48 * 0x6c8;
      local_d0 = *(byte ****)(lVar33 + 0x7e0);
      local_c8 = *(byte ****)(lVar33 + 0x7e8);
      local_e0 = *(byte ****)(lVar33 + 2000);
      local_d8 = *(byte ****)(lVar33 + 0x7d8);
      iVar43 = *(int *)(*(long *)(param_1 + 0x3920) + 0xe8);
      if ((iVar43 != 6) && (iVar43 != 0)) goto LAB_7101a8d580;
      local_180[3] = *(byte ****)(lVar33 + 0x7e8);
      local_180[2] = *(byte ****)(lVar33 + 0x7e0);
      local_180[1] = *(byte ****)(lVar33 + 0x7d8);
      local_180[0] = *(byte ****)(lVar33 + 2000);
      pvVar58 = *(void **)(param_1 + 0x38d8);
      pvVar22 = *(void **)(param_1 + 0x38c8);
      if (pvVar58 == pvVar22) {
        if (pvVar58 != (void *)0x0) {
          *(void **)(param_1 + 0x38d0) = pvVar58;
          FUN_710392eb40((ulong)pvVar58);
          *(undefined8 *)(param_1 + 0x38d0) = 0;
          *(undefined8 *)(param_1 + 0x38d8) = 0;
          *(long ****)(param_1 + 0x38c8) = (long ***)0x0;
        }
        puVar50 = (undefined8 *)
                  FUN_710392e290(0x10,0x20,(long ****)param_3,param_4,param_5,param_6,param_7,
                                 param_8);
        if (puVar50 == (undefined8 *)0x0) {
          if (DAT_7105332f00 != (long *)0x0) {
            local_84 = 0;
            local_a0[0] = (long ***)&SUB_00000020;
            pppplVar28 = local_a0;
            uVar20 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_84);
            if (((uVar20 & 1) != 0) &&
               (puVar50 = (undefined8 *)
                          FUN_710392e290(0x10,0x20,pppplVar28,param_4,param_5,param_6,param_7,
                                         param_8), puVar50 != (undefined8 *)0x0))
            goto LAB_7101a8ca9c;
          }
          puVar50 = (undefined8 *)0x0;
        }
LAB_7101a8ca9c:
        *(undefined8 **)(param_1 + 0x38d0) = puVar50;
        *(undefined8 **)(param_1 + 0x38c8) = puVar50;
        *(undefined8 **)(param_1 + 0x38d8) = puVar50 + 4;
        *puVar50 = local_180[0];
        puVar50[1] = local_180[1];
        puVar50[2] = local_180[2];
        puVar50[3] = local_180[3];
        puVar50 = puVar50 + 4;
LAB_7101a8d2d0:
        *(undefined8 **)(param_1 + 0x38d0) = puVar50;
      }
      else {
        lVar33 = *(long *)(param_1 + 0x38d0) - (long)pvVar22;
        puVar50 = (undefined8 *)((long)local_180 + lVar33);
        puVar34 = puVar50;
        if (lVar33 != 0) {
          puVar34 = &local_160;
        }
        sVar25 = (long)puVar34 - (long)local_180;
        if (sVar25 != 0) {
          memmove(pvVar22,local_180,sVar25);
        }
        if (lVar33 != 0) {
          puVar50 = (undefined8 *)((long)pvVar22 + ((long)sVar25 >> 5) * 0x20);
          goto LAB_7101a8d2d0;
        }
        if (puVar34 != &local_160) {
          puVar34 = *(undefined8 **)(param_1 + 0x38d0);
          lVar33 = -1;
          do {
            uVar21 = *puVar50;
            uVar10 = puVar50[1];
            lVar33 = lVar33 + 1;
            puVar56 = puVar50 + 2;
            uVar11 = puVar50[3];
            puVar50 = puVar50 + 4;
            puVar34[2] = *puVar56;
            puVar34[3] = uVar11;
            *puVar34 = uVar21;
            puVar34[1] = uVar10;
            puVar34 = (undefined8 *)(*(long *)(param_1 + 0x38d0) + 0x20);
            *(undefined8 **)(param_1 + 0x38d0) = puVar34;
          } while (lVar33 != 0);
        }
      }
      local_180[1] = (byte ***)0x0;
      local_180[2] = (byte ***)0x0;
      local_180[0] = (byte ***)0x0;
      FUN_7103382ea0(*(long *)(param_1 + 0x3920),1,(long ****)(param_1 + 0x38c8),local_180,param_5,
                     param_6,param_7,param_8);
      if (local_180[0] != (byte ***)0x0) {
        local_180[1] = local_180[0];
        FUN_710392eb40((ulong)local_180[0]);
      }
      if ((*(char *)(param_1 + 0x3912) == '\0') || (*(char *)(param_1 + 0x3913) != '\0')) {
        uVar21 = **(undefined8 **)(DAT_710532f8d0 + 8);
        lVar33 = *(long *)(param_1 + 0x3920);
        if ((*(long *)(lVar33 + 0x100) != *(long *)(lVar33 + 0x108)) ||
           (*(long *)(lVar33 + 0x118) != *(long *)(lVar33 + 0x120))) goto LAB_7101a8d544;
LAB_7101a8d6fc:
        uVar48 = *(uint *)(lVar33 + 0xe4);
        if (0x12 < uVar48) {
LAB_7101a8e058:
                    /* WARNING: Subroutine does not return */
          abort();
        }
        uVar31 = 6;
      }
      else {
        lVar33 = *(long *)(param_1 + 0x3920);
        if ((*(long *)(lVar33 + 0x100) == *(long *)(lVar33 + 0x108)) &&
           (*(long *)(lVar33 + 0x118) == *(long *)(lVar33 + 0x120))) goto LAB_7101a8d6fc;
        uVar21 = 0xd9ffff23cace5d73;
LAB_7101a8d544:
        uVar48 = *(uint *)(lVar33 + 0xe4);
        uVar31 = 1;
        *(undefined1 *)(lVar33 + 0x138) = 1;
        *(undefined1 *)(lVar33 + 0x14c) = 0;
        *(undefined8 *)(lVar33 + 0x130) = uVar21;
        if (0x12 < uVar48) goto LAB_7101a8e058;
      }
      *(undefined4 *)(lVar33 + (long)(int)uVar48 * 4 + 0x98) = uVar31;
      iVar18 = 0;
      *(undefined4 *)(param_1 + 0x3918) = 0;
      *(undefined4 *)(param_1 + 0x3824) = 0;
      *(long *)(param_1 + 0x3880) = *(long *)(param_1 + 0x3880) + -4;
LAB_7101a8d580:
      *(int *)(param_1 + 0x3918) = iVar18 + 1;
      return;
    case 6:
      *(undefined8 *)(param_1 + 0x38a0) = *(undefined8 *)(param_1 + 0x3898);
      break;
    default:
      return;
    }
    *(undefined4 *)(param_1 + 0x3824) = 0;
    return;
  }
  *(undefined4 *)(param_1 + 0x3824) = 0;
  (**(code **)(**(long **)(param_1 + 0x128) + 0x60))(*(long **)(param_1 + 0x128),0);
  lVar33 = *(long *)(*(long *)(param_1 + 0x128) + 0x38);
  if (lVar33 != 0) {
    *(byte *)(lVar33 + 0x58) = *(byte *)(lVar33 + 0x58) & 0xfe;
  }
  *(undefined8 *)(param_1 + 0x3868) = *(undefined8 *)(param_1 + 0x3860);
  *(undefined4 *)(param_1 + 0x3914) = 0;
  *(undefined8 *)(param_1 + 0x3880) = *(undefined8 *)(param_1 + 0x3878);
  *pbVar45 = 1;
  *(undefined2 *)(param_1 + 0x391d) = 0;
  *(undefined1 *)(param_1 + 0x3928) = 0;
  puVar60 = *(uint **)(param_1 + 0x3848);
  *(uint *)(param_1 + 0x3938) = *puVar60;
  puVar62 = *(uint **)(param_1 + 0x3850);
  *(uint *)(param_1 + 0x393c) = puVar60[1];
  if (puVar62 == puVar60) {
    return;
  }
  puVar50 = (undefined8 *)(param_1 + 0x3898);
  if (puVar60 != puVar62) {
    plVar57 = (long *)(param_1 + 0x38a0);
    plVar5 = (long *)(param_1 + 0x38b8);
    do {
      if ((7 < *puVar60) || (0x1d < puVar60[1])) goto LAB_7101a8e058;
      lVar33 = param_1 + (long)(int)*puVar60 * 0x6c8 + (long)(int)puVar60[1] * 0x38;
      local_e0 = *(byte ****)(lVar33 + 0x148);
      local_d8 = *(byte ****)(lVar33 + 0x150);
      local_c8 = *(byte ****)(lVar33 + 0x160);
      local_d0 = *(byte ****)(lVar33 + 0x158);
      puVar34 = *(undefined8 **)(param_1 + 0x38a0);
      if (puVar34 == *(undefined8 **)(param_1 + 0x38a8)) {
        pvVar58 = (void *)*puVar50;
        ppppbVar35 = (byte ****)((long)puVar34 - (long)pvVar58);
        uVar20 = ((long)ppppbVar35 >> 5) + 1;
        if (uVar20 >> 0x3b != 0) goto LAB_7101a8e05c;
        lVar33 = (long)*(undefined8 **)(param_1 + 0x38a8) - (long)pvVar58;
        if ((ulong)(lVar33 >> 5) < 0x3ffffffffffffff) {
          uVar47 = lVar33 >> 4;
          if (uVar20 <= uVar47) {
            uVar20 = uVar47;
          }
          if (uVar20 != 0) {
            if (uVar20 >> 0x3b == 0) goto LAB_7101a8bcf4;
            goto LAB_7101a8e058;
          }
LAB_7101a8bd54:
          pvVar22 = (void *)0x0;
        }
        else {
          uVar20 = 0x7ffffffffffffff;
LAB_7101a8bcf4:
          pppbVar40 = (byte ***)(uVar20 * 0x20);
          if (pppbVar40 == (byte ***)0x0) {
            pppbVar40 = (byte ***)0x1;
          }
          pvVar22 = (void *)FUN_710392e290(0x10,pppbVar40,(long ****)param_3,param_4,param_5,param_6
                                           ,param_7,param_8);
          if (pvVar22 == (void *)0x0) {
            if (DAT_7105332f00 != (long *)0x0) {
              local_a0[0] = (long ***)((ulong)local_a0[0] & 0xffffffff00000000);
              param_3 = local_180;
              local_180[0] = pppbVar40;
              uVar47 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,local_a0);
              if (((uVar47 & 1) != 0) &&
                 (pvVar22 = (void *)FUN_710392e290(0x10,pppbVar40,(long ****)param_3,param_4,param_5
                                                   ,param_6,param_7,param_8), pvVar22 != (void *)0x0
                 )) goto LAB_7101a8bd58;
            }
            goto LAB_7101a8bd54;
          }
        }
LAB_7101a8bd58:
        puVar34 = (undefined8 *)((long)pvVar22 + ((long)ppppbVar35 >> 5) * 0x20);
        puVar34[2] = local_d0;
        puVar34[3] = local_c8;
        *puVar34 = local_e0;
        puVar34[1] = local_d8;
        if (0 < (long)ppppbVar35) {
          memcpy(pvVar22,pvVar58,(size_t)ppppbVar35);
          param_3 = ppppbVar35;
        }
        *puVar50 = pvVar22;
        *plVar57 = (long)(puVar34 + 4);
        *(void **)(param_1 + 0x38a8) = (void *)((long)pvVar22 + uVar20 * 0x20);
        if (pvVar58 != (void *)0x0) {
          FUN_710392eb40((ulong)pvVar58);
        }
      }
      else {
        puVar34[2] = *(byte ****)(lVar33 + 0x158);
        puVar34[3] = local_c8;
        *puVar34 = local_e0;
        puVar34[1] = local_d8;
        *plVar57 = *plVar57 + 0x20;
      }
      ppppbVar35 = *(byte *****)(param_1 + 0x38b8);
      __src = *(byte *****)(param_1 + 0x38b0);
      if (ppppbVar35 < *(byte *****)(param_1 + 0x38c0)) {
        if (ppppbVar35 == __src) {
          __src[2] = local_d0;
          __src[3] = local_c8;
          *__src = local_e0;
          __src[1] = local_d8;
          *plVar5 = *plVar5 + 0x20;
        }
        else {
          sVar25 = (long)ppppbVar35 - (long)(__src + 4);
          ppppbVar26 = ppppbVar35 + -4;
          lVar33 = (long)sVar25 >> 5;
          if (ppppbVar26 < ppppbVar35) {
            uVar20 = (long)ppppbVar35 + ~(ulong)__src + lVar33 * -0x20;
            uVar48 = ((uint)(uVar20 >> 5) & 0x7ffffff) + 1;
            uVar47 = (ulong)uVar48 & 3;
            ppppbVar51 = ppppbVar35;
            if ((uVar48 & 3) != 0) {
              lVar55 = -uVar47;
              do {
                pppbVar40 = *ppppbVar26;
                pppbVar8 = ppppbVar26[1];
                lVar55 = lVar55 + 1;
                ppppbVar2 = ppppbVar26 + 2;
                pppbVar9 = ppppbVar26[3];
                ppppbVar26 = ppppbVar26 + 4;
                ppppbVar51[2] = *ppppbVar2;
                ppppbVar51[3] = pppbVar9;
                *ppppbVar51 = pppbVar40;
                ppppbVar51[1] = pppbVar8;
                ppppbVar51 = (byte ****)(*plVar5 + 0x20);
                *plVar5 = (long)ppppbVar51;
              } while (lVar55 != 0);
              ppppbVar26 = __src + (lVar33 + uVar47) * 4;
            }
            if (0x5f < uVar20) {
              ppppbVar2 = ppppbVar26 + 0x10;
              ppppbVar7 = ppppbVar35;
              if (ppppbVar35 <= ppppbVar2) {
                ppppbVar7 = ppppbVar2;
              }
              uVar20 = (long)ppppbVar7 + (-1 - (long)ppppbVar26);
              if (((uint)uVar20 >> 7 & 1) == 0) {
                pppbVar40 = *ppppbVar26;
                pppbVar8 = ppppbVar26[1];
                pppbVar9 = ppppbVar26[3];
                ppppbVar51[2] = ppppbVar26[2];
                ppppbVar51[3] = pppbVar9;
                *ppppbVar51 = pppbVar40;
                ppppbVar51[1] = pppbVar8;
                lVar55 = *plVar5;
                *plVar5 = lVar55 + 0x20;
                pppbVar40 = ppppbVar26[4];
                pppbVar8 = ppppbVar26[5];
                pppbVar9 = ppppbVar26[7];
                *(byte ****)(lVar55 + 0x30) = ppppbVar26[6];
                *(byte ****)(lVar55 + 0x38) = pppbVar9;
                *(byte ****)(lVar55 + 0x20) = pppbVar40;
                *(byte ****)(lVar55 + 0x28) = pppbVar8;
                lVar55 = *plVar5;
                *plVar5 = lVar55 + 0x20;
                pppbVar40 = ppppbVar26[8];
                pppbVar8 = ppppbVar26[9];
                pppbVar9 = ppppbVar26[0xb];
                *(byte ****)(lVar55 + 0x30) = ppppbVar26[10];
                *(byte ****)(lVar55 + 0x38) = pppbVar9;
                *(byte ****)(lVar55 + 0x20) = pppbVar40;
                *(byte ****)(lVar55 + 0x28) = pppbVar8;
                lVar55 = *plVar5;
                *plVar5 = lVar55 + 0x20;
                pppbVar40 = ppppbVar26[0xc];
                pppbVar8 = ppppbVar26[0xd];
                pppbVar9 = ppppbVar26[0xf];
                *(byte ****)(lVar55 + 0x30) = ppppbVar26[0xe];
                *(byte ****)(lVar55 + 0x38) = pppbVar9;
                *(byte ****)(lVar55 + 0x20) = pppbVar40;
                *(byte ****)(lVar55 + 0x28) = pppbVar8;
                ppppbVar51 = (byte ****)(*plVar5 + 0x20);
                *plVar5 = (long)ppppbVar51;
                ppppbVar26 = ppppbVar2;
              }
              if (0x7f < uVar20) {
                do {
                  pppbVar40 = *ppppbVar26;
                  pppbVar8 = ppppbVar26[1];
                  pppbVar9 = ppppbVar26[3];
                  ppppbVar51[2] = ppppbVar26[2];
                  ppppbVar51[3] = pppbVar9;
                  *ppppbVar51 = pppbVar40;
                  ppppbVar51[1] = pppbVar8;
                  lVar55 = *plVar5;
                  *plVar5 = lVar55 + 0x20;
                  pppbVar40 = ppppbVar26[4];
                  pppbVar8 = ppppbVar26[5];
                  pppbVar9 = ppppbVar26[7];
                  *(byte ****)(lVar55 + 0x30) = ppppbVar26[6];
                  *(byte ****)(lVar55 + 0x38) = pppbVar9;
                  *(byte ****)(lVar55 + 0x20) = pppbVar40;
                  *(byte ****)(lVar55 + 0x28) = pppbVar8;
                  lVar55 = *plVar5;
                  *plVar5 = lVar55 + 0x20;
                  pppbVar40 = ppppbVar26[8];
                  pppbVar8 = ppppbVar26[9];
                  pppbVar9 = ppppbVar26[0xb];
                  *(byte ****)(lVar55 + 0x30) = ppppbVar26[10];
                  *(byte ****)(lVar55 + 0x38) = pppbVar9;
                  *(byte ****)(lVar55 + 0x20) = pppbVar40;
                  *(byte ****)(lVar55 + 0x28) = pppbVar8;
                  lVar55 = *plVar5;
                  *plVar5 = lVar55 + 0x20;
                  pppbVar40 = ppppbVar26[0xc];
                  pppbVar8 = ppppbVar26[0xd];
                  pppbVar9 = ppppbVar26[0xf];
                  *(byte ****)(lVar55 + 0x30) = ppppbVar26[0xe];
                  *(byte ****)(lVar55 + 0x38) = pppbVar9;
                  *(byte ****)(lVar55 + 0x20) = pppbVar40;
                  *(byte ****)(lVar55 + 0x28) = pppbVar8;
                  lVar55 = *plVar5;
                  *plVar5 = lVar55 + 0x20;
                  pppbVar40 = ppppbVar26[0x10];
                  pppbVar8 = ppppbVar26[0x11];
                  pppbVar9 = ppppbVar26[0x13];
                  *(byte ****)(lVar55 + 0x30) = ppppbVar26[0x12];
                  *(byte ****)(lVar55 + 0x38) = pppbVar9;
                  *(byte ****)(lVar55 + 0x20) = pppbVar40;
                  *(byte ****)(lVar55 + 0x28) = pppbVar8;
                  lVar55 = *plVar5;
                  *plVar5 = lVar55 + 0x20;
                  pppbVar40 = ppppbVar26[0x14];
                  pppbVar8 = ppppbVar26[0x15];
                  pppbVar9 = ppppbVar26[0x17];
                  *(byte ****)(lVar55 + 0x30) = ppppbVar26[0x16];
                  *(byte ****)(lVar55 + 0x38) = pppbVar9;
                  *(byte ****)(lVar55 + 0x20) = pppbVar40;
                  *(byte ****)(lVar55 + 0x28) = pppbVar8;
                  lVar55 = *plVar5;
                  *plVar5 = lVar55 + 0x20;
                  pppbVar40 = ppppbVar26[0x18];
                  pppbVar8 = ppppbVar26[0x19];
                  pppbVar9 = ppppbVar26[0x1b];
                  *(byte ****)(lVar55 + 0x30) = ppppbVar26[0x1a];
                  *(byte ****)(lVar55 + 0x38) = pppbVar9;
                  *(byte ****)(lVar55 + 0x20) = pppbVar40;
                  *(byte ****)(lVar55 + 0x28) = pppbVar8;
                  lVar55 = *plVar5;
                  *plVar5 = lVar55 + 0x20;
                  pppbVar40 = ppppbVar26[0x1c];
                  pppbVar8 = ppppbVar26[0x1d];
                  ppppbVar51 = ppppbVar26 + 0x1e;
                  pppbVar9 = ppppbVar26[0x1f];
                  ppppbVar26 = ppppbVar26 + 0x20;
                  *(byte ****)(lVar55 + 0x30) = *ppppbVar51;
                  *(byte ****)(lVar55 + 0x38) = pppbVar9;
                  *(byte ****)(lVar55 + 0x20) = pppbVar40;
                  *(byte ****)(lVar55 + 0x28) = pppbVar8;
                  ppppbVar51 = (byte ****)(*plVar5 + 0x20);
                  *plVar5 = (long)ppppbVar51;
                } while (ppppbVar26 < ppppbVar35);
              }
            }
          }
          if (sVar25 != 0) {
            memmove(ppppbVar35 + lVar33 * -4,__src,sVar25);
          }
          ppppbVar35 = &local_e0;
          if ((__src <= &local_e0) &&
             (ppppbVar35 = (byte ****)local_c0, (byte ****)*plVar5 <= &local_e0)) {
            ppppbVar35 = &local_e0;
          }
          pppbVar40 = *ppppbVar35;
          pppbVar8 = ppppbVar35[1];
          pppbVar9 = ppppbVar35[3];
          __src[2] = ppppbVar35[2];
          __src[3] = pppbVar9;
          *__src = pppbVar40;
          __src[1] = pppbVar8;
        }
      }
      else {
        uVar20 = ((long)ppppbVar35 - (long)__src >> 5) + 1;
        if (uVar20 >> 0x3b != 0) {
                    /* WARNING: Subroutine does not return */
          std::__vector_base_common<true>::__throw_length_error();
        }
        lVar33 = (long)*(byte *****)(param_1 + 0x38c0) - (long)__src;
        ppppbVar35 = __src;
        if ((ulong)(lVar33 >> 5) < 0x3ffffffffffffff) {
          uVar47 = lVar33 >> 4;
          if (uVar20 <= uVar47) {
            uVar20 = uVar47;
          }
          if (uVar20 != 0) {
            if (uVar20 >> 0x3b == 0) goto LAB_7101a8be94;
            goto LAB_7101a8e058;
          }
          puVar34 = (undefined8 *)0x0;
LAB_7101a8bf3c:
          puVar19 = (undefined8 *)
                    FUN_710392e290(0x10,0x20,(long ****)param_3,param_4,param_5,param_6,param_7,
                                   param_8);
          if (puVar19 == (undefined8 *)0x0) {
            if (DAT_7105332f00 != (long *)0x0) {
              local_a0[0] = (long ***)((ulong)local_a0[0] & 0xffffffff00000000);
              local_180[0] = (byte ***)&SUB_00000020;
              ppppbVar26 = local_180;
              uVar20 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,local_a0);
              if (((uVar20 & 1) != 0) &&
                 (puVar19 = (undefined8 *)
                            FUN_710392e290(0x10,0x20,(long ****)ppppbVar26,param_4,param_5,param_6,
                                           param_7,param_8), puVar19 != (undefined8 *)0x0))
              goto LAB_7101a8bf98;
            }
            puVar19 = (undefined8 *)0x0;
          }
LAB_7101a8bf98:
          puVar56 = puVar19 + 4;
          __dest = puVar56;
          if (puVar34 != (undefined8 *)0x0) {
            if (puVar34 != (undefined8 *)0x0) {
              FUN_710392eb40((ulong)puVar34);
            }
            ppppbVar35 = *(byte *****)(param_1 + 0x38b0);
          }
        }
        else {
          uVar20 = 0x7ffffffffffffff;
LAB_7101a8be94:
          pppbVar40 = (byte ***)(uVar20 * 0x20);
          if (pppbVar40 == (byte ***)0x0) {
            pppbVar40 = (byte ***)0x1;
          }
          puVar34 = (undefined8 *)
                    FUN_710392e290(0x10,pppbVar40,(long ****)param_3,param_4,param_5,param_6,param_7
                                   ,param_8);
          if (puVar34 == (undefined8 *)0x0) {
            if (DAT_7105332f00 != (long *)0x0) {
              local_a0[0] = (long ***)((ulong)local_a0[0] & 0xffffffff00000000);
              param_3 = local_180;
              local_180[0] = pppbVar40;
              uVar47 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,local_a0);
              if (((uVar47 & 1) != 0) &&
                 (puVar34 = (undefined8 *)
                            FUN_710392e290(0x10,pppbVar40,(long ****)param_3,param_4,param_5,param_6
                                           ,param_7,param_8), puVar34 != (undefined8 *)0x0))
              goto LAB_7101a8bef8;
            }
            puVar34 = (undefined8 *)0x0;
          }
LAB_7101a8bef8:
          if (uVar20 == 0) goto LAB_7101a8bf3c;
          puVar56 = puVar34 + uVar20 * 4;
          __dest = puVar34 + 4;
          puVar19 = puVar34;
        }
        sVar25 = (long)__src - (long)ppppbVar35;
        puVar19[2] = local_d0;
        puVar19[3] = local_c8;
        *puVar19 = local_e0;
        puVar19[1] = local_d8;
        if (0 < (long)sVar25) {
          memcpy((void *)((long)puVar19 - sVar25),ppppbVar35,sVar25);
        }
        __n = *plVar5 - (long)__src;
        if (0 < (long)__n) {
          memcpy(__dest,__src,__n);
          __dest = (undefined8 *)((long)__dest + __n);
        }
        uVar20 = *(ulong *)(param_1 + 0x38b0);
        *(void **)(param_1 + 0x38b0) = (void *)((long)puVar19 - sVar25);
        *(undefined8 **)(param_1 + 0x38b8) = __dest;
        *(undefined8 **)(param_1 + 0x38c0) = puVar56;
        if (uVar20 != 0) {
          FUN_710392eb40(uVar20);
        }
      }
      param_3 = (byte ****)(ulong)puVar60[1];
      uVar20 = FUN_7103267660(*(long *)(*(long *)(DAT_710532f730 + 8) + 0x348),*puVar60,puVar60[1]);
      uVar21 = FUN_7103268810(uVar20);
      uVar48 = (int)uVar21 * 3 + 1;
      if (uVar48 < 0x1e0) {
        lVar33 = (ulong)(uVar48 >> 5) * 4;
        *(uint *)(*(long *)**(undefined8 **)(*DAT_7105314510 + 0x248) + lVar33) =
             *(uint *)(*(long *)**(undefined8 **)(*DAT_7105314510 + 0x248) + lVar33) |
             1 << (ulong)(uVar48 & 0x1f);
      }
      uVar48 = *puVar60;
      if (7 < uVar48) goto LAB_7101a8e058;
      puVar1 = puVar60 + 1;
      puVar60 = puVar60 + 2;
      *(uint *)(param_1 + (long)(int)uVar48 * 0x6c8 + 0x7f8) = *puVar1;
    } while (puVar60 != puVar62);
  }
  local_250 = (long *)(param_1 + 0x38a0);
  local_260 = (long *)(param_1 + 0x38a8);
  puVar6 = (ulong *)(param_1 + 0x3878);
  bVar17 = false;
  piVar36 = (int *)(param_1 + 0x138);
  do {
    lVar33 = DAT_710532f730;
    pppplVar28 = (long ****)(piVar36 + 0x1a5);
    bVar14 = true;
    piVar61 = piVar36;
    do {
      pppplVar27 = (long ****)(ulong)(uint)piVar61[3];
      uVar20 = FUN_7103267660(*(long *)(*(long *)(lVar33 + 8) + 0x348),*(uint *)pppplVar28,
                              piVar61[3]);
      if (((uVar20 & 0xff00000000000000) == 0x6200000000000000 && (uVar20 & 0xffffffffff) != 0) &&
         (bVar14 = (bool)(bVar14 & (char)piVar36[0x1a4] == '\0'), *piVar61 != 3)) {
        piVar38 = *(int **)(param_1 + 0x3848);
        piVar46 = *(int **)(param_1 + 0x3850);
        piVar39 = piVar38;
        if (piVar38 != piVar46) {
          do {
            if ((*piVar38 == *(int *)pppplVar28) && (piVar39 = piVar38, piVar38[1] == piVar61[3]))
            break;
            piVar38 = piVar38 + 2;
            piVar39 = piVar46;
          } while (piVar46 != piVar38);
        }
        bVar14 = (bool)(bVar14 & piVar39 != piVar46);
      }
      piVar61 = piVar61 + 0xe;
    } while (piVar61 != piVar36 + 0x1a4);
    if (bVar14) {
      uVar48 = *(uint *)pppplVar28;
      if (uVar48 == 6) {
        bVar17 = true;
        uVar31 = 6;
      }
      else {
        if (7 < uVar48) goto LAB_7101a8e058;
        lVar33 = param_1 + (long)(int)uVar48 * 0x6c8;
        local_e0 = *(byte ****)(lVar33 + 2000);
        local_d8 = *(byte ****)(lVar33 + 0x7d8);
        local_d0 = *(byte ****)(lVar33 + 0x7e0);
        local_c8 = *(byte ****)(lVar33 + 0x7e8);
        puVar34 = *(undefined8 **)(param_1 + 0x38a0);
        if (puVar34 == *(undefined8 **)(param_1 + 0x38a8)) {
          pvVar58 = (void *)*puVar50;
          sVar25 = (long)puVar34 - (long)pvVar58;
          uVar20 = ((long)sVar25 >> 5) + 1;
          if (uVar20 >> 0x3b != 0) goto LAB_7101a8e05c;
          lVar33 = (long)*(undefined8 **)(param_1 + 0x38a8) - (long)pvVar58;
          if ((ulong)(lVar33 >> 5) < 0x3ffffffffffffff) {
            uVar47 = lVar33 >> 4;
            if (uVar20 <= uVar47) {
              uVar20 = uVar47;
            }
            if (uVar20 != 0) {
              if (uVar20 >> 0x3b == 0) goto LAB_7101a8c76c;
              goto LAB_7101a8e058;
            }
            pvVar22 = (void *)0x0;
          }
          else {
            uVar20 = 0x7ffffffffffffff;
LAB_7101a8c76c:
            pppbVar40 = (byte ***)(uVar20 * 0x20);
            if (pppbVar40 == (byte ***)0x0) {
              pppbVar40 = (byte ***)0x1;
            }
            pvVar22 = (void *)FUN_710392e290(0x10,pppbVar40,pppplVar27,param_4,param_5,param_6,
                                             param_7,param_8);
            if (pvVar22 == (void *)0x0) {
              if (DAT_7105332f00 != (long *)0x0) {
                local_a0[0] = (long ***)((ulong)local_a0[0] & 0xffffffff00000000);
                ppppbVar35 = local_180;
                local_180[0] = pppbVar40;
                uVar47 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,local_a0);
                if (((uVar47 & 1) != 0) &&
                   (pvVar22 = (void *)FUN_710392e290(0x10,pppbVar40,(long ****)ppppbVar35,param_4,
                                                     param_5,param_6,param_7,param_8),
                   pvVar22 != (void *)0x0)) goto LAB_7101a8c7d4;
              }
              pvVar22 = (void *)0x0;
            }
          }
LAB_7101a8c7d4:
          puVar34 = (undefined8 *)((long)pvVar22 + ((long)sVar25 >> 5) * 0x20);
          puVar34[2] = local_d0;
          puVar34[3] = local_c8;
          *puVar34 = local_e0;
          puVar34[1] = local_d8;
          if (0 < (long)sVar25) {
            memcpy(pvVar22,pvVar58,sVar25);
          }
          *puVar50 = pvVar22;
          *local_250 = (long)(puVar34 + 4);
          *local_260 = (long)((long)pvVar22 + uVar20 * 0x20);
          if (pvVar58 != (void *)0x0) {
            FUN_710392eb40((ulong)pvVar58);
          }
        }
        else {
          puVar34[2] = local_d0;
          puVar34[3] = local_c8;
          *puVar34 = local_e0;
          puVar34[1] = local_d8;
          *local_250 = *local_250 + 0x20;
        }
        pppplVar27 = pppplVar28;
        FUN_71019bfdd0(puVar6,(long ****)*puVar6,pppplVar28,param_4,param_5,param_6,param_7,param_8)
        ;
        uVar31 = *(undefined4 *)pppplVar28;
      }
      iVar18 = piVar36[0x1b0];
      *(undefined4 *)(param_1 + 0x3938) = uVar31;
      *(int *)(param_1 + 0x393c) = iVar18;
      FUN_710176b770(0x84);
    }
    piVar36 = piVar36 + 0x1b2;
  } while (piVar36 != (int *)(param_1 + 0x3778));
  if (bVar17) {
    local_84 = 6;
    local_e0 = *(byte ****)(param_1 + 0x3080);
    local_d8 = *(byte ****)(param_1 + 0x3088);
    local_d0 = *(byte ****)(param_1 + 0x3090);
    local_c8 = *(byte ****)(param_1 + 0x3098);
    puVar34 = *(undefined8 **)(param_1 + 0x38a0);
    if (puVar34 == *(undefined8 **)(param_1 + 0x38a8)) {
      pvVar58 = (void *)*puVar50;
      sVar25 = (long)puVar34 - (long)pvVar58;
      uVar20 = ((long)sVar25 >> 5) + 1;
      if (uVar20 >> 0x3b != 0) {
LAB_7101a8e05c:
                    /* WARNING: Subroutine does not return */
        std::__vector_base_common<true>::__throw_length_error();
      }
      lVar33 = (long)*(undefined8 **)(param_1 + 0x38a8) - (long)pvVar58;
      if ((ulong)(lVar33 >> 5) < 0x3ffffffffffffff) {
        uVar47 = lVar33 >> 4;
        if (uVar20 <= uVar47) {
          uVar20 = uVar47;
        }
        if (uVar20 != 0) {
          if (uVar20 >> 0x3b != 0) goto LAB_7101a8e058;
          goto LAB_7101a8cc1c;
        }
LAB_7101a8cc7c:
        pvVar22 = (void *)0x0;
      }
      else {
        uVar20 = 0x7ffffffffffffff;
LAB_7101a8cc1c:
        pppbVar40 = (byte ***)(uVar20 * 0x20);
        if (pppbVar40 == (byte ***)0x0) {
          pppbVar40 = (byte ***)0x1;
        }
        pvVar22 = (void *)FUN_710392e290(0x10,pppbVar40,pppplVar27,param_4,param_5,param_6,param_7,
                                         param_8);
        if (pvVar22 == (void *)0x0) {
          if (DAT_7105332f00 != (long *)0x0) {
            local_a0[0] = (long ***)((ulong)local_a0[0] & 0xffffffff00000000);
            ppppbVar35 = local_180;
            local_180[0] = pppbVar40;
            uVar47 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,local_a0);
            if (((uVar47 & 1) != 0) &&
               (pvVar22 = (void *)FUN_710392e290(0x10,pppbVar40,(long ****)ppppbVar35,param_4,
                                                 param_5,param_6,param_7,param_8),
               pvVar22 != (void *)0x0)) goto LAB_7101a8cc80;
          }
          goto LAB_7101a8cc7c;
        }
      }
LAB_7101a8cc80:
      puVar34 = (undefined8 *)((long)pvVar22 + ((long)sVar25 >> 5) * 0x20);
      puVar34[2] = local_d0;
      puVar34[3] = local_c8;
      *puVar34 = local_e0;
      puVar34[1] = local_d8;
      if (0 < (long)sVar25) {
        memcpy(pvVar22,pvVar58,sVar25);
      }
      *puVar50 = pvVar22;
      *local_250 = (long)(puVar34 + 4);
      *local_260 = (long)((long)pvVar22 + uVar20 * 0x20);
      if (pvVar58 != (void *)0x0) {
        FUN_710392eb40((ulong)pvVar58);
      }
    }
    else {
      puVar34[2] = local_d0;
      puVar34[3] = local_c8;
      *puVar34 = local_e0;
      puVar34[1] = local_d8;
      *local_250 = *local_250 + 0x20;
    }
    pppplVar27 = (long ****)&local_84;
    FUN_71019bfdd0(puVar6,*(long *****)(param_1 + 0x3878),pppplVar27,param_4,param_5,param_6,param_7
                   ,param_8);
    *(undefined4 *)(param_1 + 0x3938) = 6;
    *(undefined4 *)(param_1 + 0x393c) = *(undefined4 *)(param_1 + 0x30a8);
  }
  iVar43 = (int)*(float *)(param_1 + 0x3840);
  pcVar52 = *(char **)(param_1 + 0x38e8);
  iVar18 = *(int *)(param_1 + 0x3834);
  if ((*pcVar52 == '\f') && (iVar53 = *(int *)(pcVar52 + 1) + -1, 0 < *(int *)(pcVar52 + 1))) {
    iVar54 = 0;
    pcVar49 = "";
    do {
      iVar4 = iVar53 + iVar54;
      if (iVar4 < 0) {
        iVar4 = iVar4 + 1;
      }
      iVar4 = iVar4 >> 1;
      puVar60 = (uint *)(*(long *)(*(long *)(param_1 + 0x38e0) + 0x28) + (long)*(int *)(pcVar52 + 5)
                        + (long)iVar4 * 8);
      uVar20 = *(ulong *)(*(long *)(*(long *)(param_1 + 0x38e0) + 0x20) + (ulong)*puVar60 * 8);
      if (uVar20 == 0xe58b04e24) {
        uVar48 = puVar60[1];
        if ((int)uVar48 < 0) goto LAB_7101a8cd98;
        pcVar49 = pcVar52 + (int)uVar48;
        break;
      }
      iVar15 = iVar4 + -1;
      if (uVar20 < 0xe58b04e25) {
        iVar54 = iVar4 + 1;
        iVar15 = iVar53;
      }
      iVar53 = iVar15;
    } while (iVar54 <= iVar53);
  }
  else {
LAB_7101a8cd98:
    pcVar49 = "";
  }
  switch(*pcVar49) {
  case '\x01':
  case '\x03':
    uVar48 = (uint)(byte)pcVar49[1];
    if (pcVar49[1] == 0) goto switchD_7101a8cdc0_default;
    goto LAB_7101a8cdd0;
  case '\x02':
    uVar48 = (uint)pcVar49[1];
    break;
  case '\x04':
    uVar48 = (uint)*(short *)(pcVar49 + 1);
    break;
  case '\x05':
    uVar48 = (uint)*(ushort *)(pcVar49 + 1);
    if (*(ushort *)(pcVar49 + 1) != 0) goto LAB_7101a8cdd0;
    goto switchD_7101a8cdc0_default;
  case '\x06':
  case '\a':
    uVar48 = *(uint *)(pcVar49 + 1);
    break;
  default:
    goto switchD_7101a8cdc0_default;
  }
  if (0 < (int)uVar48) {
LAB_7101a8cdd0:
    iVar43 = (int)(*(float *)(param_1 + 0x3840) +
                  (float)(ulong)(*(long *)(param_1 + 0x3850) - *(long *)(param_1 + 0x3848) >> 3));
    iVar53 = 0;
    if (uVar48 != 0) {
      iVar53 = iVar43 / (int)uVar48;
    }
    iVar43 = iVar43 - iVar53 * uVar48;
    iVar18 = iVar53 + iVar18;
  }
switchD_7101a8cdc0_default:
  puVar50 = *(undefined8 **)(*DAT_7105314510 + 0x248);
  *(char *)(*(long *)*puVar50 + 0x2a5) = (char)iVar43;
  *(char *)(*(long *)*puVar50 + 0x2a4) = (char)iVar18;
  *(int *)(param_1 + 0x392c) = iVar43;
  *(int *)(param_1 + 0x3930) = iVar18;
  bVar16 = FUN_7101782fa0(*(ulong **)(param_1 + 0x3898),*(ulong **)(param_1 + 0x38a0),
                          (ulong)pppplVar27,param_4,param_5,param_6,param_7,param_8);
  *pbVar45 = bVar16 & 1;
  plVar57 = (long *)(*DAT_7105314508 + 0x5b4dd8);
  plVar5 = (long *)(*DAT_7105314508 + 0x5b4de8);
  if (*plVar5 != 0) {
    *(byte *)(*plVar57 + 0x10) = *(byte *)(*plVar57 + 0x10) & 1;
    goto LAB_7101a8cef8;
  }
  plVar23 = (long *)FUN_710392e290(0x10,0x18,pppplVar27,param_4,param_5,param_6,param_7,param_8);
  if (plVar23 == (long *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_180[0] = (byte ***)((ulong)local_180[0] & 0xffffffff00000000);
      local_e0 = (byte ***)&SUB_00000018;
      ppppbVar35 = &local_e0;
      uVar20 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,local_180);
      if (((uVar20 & 1) != 0) &&
         (plVar23 = (long *)FUN_710392e290(0x10,0x18,(long ****)ppppbVar35,param_4,param_5,param_6,
                                           param_7,param_8), plVar23 != (long *)0x0))
      goto LAB_7101a8ced4;
    }
    plVar23 = (long *)0x0;
  }
LAB_7101a8ced4:
  *(undefined1 *)(plVar23 + 2) = 0;
  plVar23[1] = (long)plVar57;
  lVar33 = *plVar57;
  *plVar23 = lVar33;
  *(long **)(lVar33 + 8) = plVar23;
  *plVar57 = (long)plVar23;
  *plVar5 = *plVar5 + 1;
LAB_7101a8cef8:
  local_d8 = (byte ***)0x0;
  local_d0 = (byte ***)0x0;
  local_e0 = (byte ***)0x0;
  FUN_7103382ea0(*(long *)(param_1 + 0x3920),1,(long ****)(param_1 + 0x38b0),&local_e0,param_5,
                 param_6,param_7,param_8);
  if (local_e0 != (byte ***)0x0) {
    local_d8 = local_e0;
    FUN_710392eb40((ulong)local_e0);
  }
  FUN_71037760f0(*(long *)**(undefined8 **)(param_1 + 0x120),1);
  return;
}

