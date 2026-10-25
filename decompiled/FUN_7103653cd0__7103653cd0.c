// addr:      7103653cd0
// offset:    0x3653cd0
// name:      FUN_7103653cd0
// mangled:   
// signature: undefined __cdecl FUN_7103653cd0(long param_1, undefined8 param_2, ulong * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_7103653cd0(long param_1,undefined8 param_2,ulong *param_3,byte ****param_4,long ****param_5
                   ,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined4 uVar5;
  ulong uVar6;
  byte bVar7;
  byte bVar8;
  void *pvVar9;
  bool bVar10;
  int iVar11;
  ulong *puVar12;
  ulong *__n;
  undefined8 uVar13;
  long lVar14;
  undefined8 *puVar15;
  undefined8 uVar16;
  char *pcVar17;
  long lVar18;
  long lVar19;
  ulong uVar20;
  long lVar21;
  long *plVar22;
  size_t *psVar23;
  void *pvVar24;
  long *plVar25;
  long ****pppplVar26;
  long lVar27;
  char *pcVar28;
  long local_188;
  ulong local_170;
  ulong local_138;
  ulong local_130;
  ulong *local_128;
  char *local_120;
  ulong local_110;
  ulong local_108;
  void *local_100;
  ulong local_f8;
  ulong local_f0;
  void *local_e8;
  ulong local_e0;
  ulong local_d8;
  void *local_d0;
  ulong local_c8;
  ulong *local_c0;
  char *local_b8;
  undefined4 local_b0;
  undefined2 local_ac;
  undefined1 local_aa;
  byte local_a8;
  undefined4 local_a7;
  undefined2 local_a3;
  undefined1 local_a1;
  size_t local_a0;
  ulong local_98;
  ulong local_90;
  undefined8 uStack_88;
  ulong local_80;
  char *local_78;
  long ****local_70 [2];
  
  local_aa = 0;
  local_a8 = 0xc;
  local_ac = 0;
  local_a0 = 0;
  local_98 = 0;
  local_a3 = 0x5241;
  local_a7 = 0x454c435f;
  local_a1 = 0;
  local_80 = 0;
  local_b0 = 0;
  uStack_88 = 0;
  local_90 = 0x574152445f0a;
  plVar22 = *(long **)(*(long *)(*(long *)(DAT_7105335480 + 0x68) + 0x18) + 0x128);
  if (plVar22 != (long *)0x0) {
    pcVar17 = (char *)((ulong)&local_c8 | 1);
    do {
      lVar18 = plVar22[5];
      local_170 = 0;
      local_188 = param_1;
      do {
        uVar1 = (int)local_170 + 2;
        lVar2 = param_1 + local_170 * 0x20;
        lVar3 = param_1 + local_170 * 8;
        lVar27 = 0;
        lVar21 = 0;
        bVar8 = 0;
        local_138 = 1;
        psVar23 = &local_a0;
        do {
          local_f0 = 0;
          local_f8 = 0x22;
          builtin_strncpy((char *)((ulong)&local_f8 | 1),"MELEE_RESULT_RANK",0x11);
          local_e8 = (void *)0x0;
          std::to_string(uVar1);
          pvVar24 = (void *)((ulong)&local_110 | 1);
          if ((local_110 & 1) != 0) {
            pvVar24 = local_100;
          }
          puVar12 = (ulong *)std::string::append((char *)&local_f8,(ulong)pvVar24);
          local_e0 = *puVar12;
          local_d8 = puVar12[1];
          local_d0 = (void *)puVar12[2];
          puVar12[1] = 0;
          puVar12[2] = 0;
          *puVar12 = 0;
          param_3 = (ulong *)(ulong)(byte)((byte)psVar23[-1] >> 1);
          uVar6 = (long)psVar23 - 7;
          if (((byte)psVar23[-1] & 1) != 0) {
            param_3 = (ulong *)*psVar23;
            uVar6 = psVar23[1];
          }
          puVar12 = (ulong *)std::string::append((char *)&local_e0,uVar6);
          uVar6 = *puVar12;
          local_128 = (ulong *)puVar12[1];
          local_120 = (char *)puVar12[2];
          puVar12[1] = 0;
          puVar12[2] = 0;
          *puVar12 = 0;
          local_c0 = (ulong *)0x0;
          local_b8 = (char *)0x0;
          local_c8 = 0;
          local_130 = uVar6;
          if ((uVar6 & 1) == 0) {
            puVar12 = (ulong *)(uVar6 >> 1 & 0x7f);
            pvVar24 = (void *)((ulong)&local_130 | 1);
          }
          else {
            puVar12 = local_128;
            pvVar24 = local_120;
            if ((ulong *)0xffffffffffffffef < local_128) {
                    /* WARNING: Subroutine does not return */
              std::__basic_string_common<true>::__throw_length_error();
            }
          }
          if (puVar12 < (ulong *)0x17) {
            local_c8 = (ulong)(byte)((int)puVar12 << 1);
            pcVar28 = pcVar17;
            if (puVar12 != (ulong *)0x0) goto LAB_7103653fc0;
            *pcVar17 = '\0';
          }
          else {
            pppplVar26 = (long ****)((ulong)(puVar12 + 2) & 0xfffffffffffffff0);
            iVar11 = FUN_710392e1f0(&local_78,0x10,pppplVar26,param_4,param_5,param_6,param_7,
                                    param_8);
            if (((iVar11 == 0xc) && (DAT_710593d2b0 != (long *)0x0)) &&
               (local_70[0] = pppplVar26,
               uVar20 = (**(code **)(*DAT_710593d2b0 + 0x30))(DAT_710593d2b0,local_70),
               (uVar20 & 1) != 0)) {
              FUN_710392e1f0(&local_78,0x10,pppplVar26,param_4,param_5,param_6,param_7,param_8);
            }
            nu::VirtualAllocHook((ulong)pppplVar26,0x10,local_78);
            local_c8 = (ulong)pppplVar26 | 1;
            local_b8 = local_78;
            pcVar28 = local_78;
            local_c0 = puVar12;
LAB_7103653fc0:
            param_3 = puVar12;
            memcpy(pcVar28,pvVar24,(size_t)puVar12);
            pcVar28[(long)puVar12] = '\0';
          }
          if (((uVar6 & 1) != 0) && (local_120 != (void *)0x0)) {
            FUN_710392eb40((ulong)local_120);
          }
          if (((local_e0 & 1) != 0) && (local_d0 != (void *)0x0)) {
            FUN_710392eb40((ulong)local_d0);
          }
          if (((local_110 & 1) != 0) && (local_100 != (void *)0x0)) {
            FUN_710392eb40((ulong)local_100);
          }
          if (((local_f8 & 1) != 0) && (local_e8 != (void *)0x0)) {
            FUN_710392eb40((ulong)local_e8);
          }
          pcVar28 = pcVar17;
          if ((local_c8 & 1) != 0) {
            pcVar28 = local_b8;
          }
          __n = (ulong *)strlen(pcVar28);
          bVar7 = *(byte *)(lVar18 + 0x40);
          puVar12 = (ulong *)(ulong)(bVar7 >> 1);
          if ((bVar7 & 1) != 0) {
            puVar12 = *(ulong **)(lVar18 + 0x48);
          }
          if (__n == puVar12) {
            if (__n != (ulong *)0x0) {
              if (__n == (ulong *)0xffffffffffffffff) {
                    /* WARNING: Subroutine does not return */
                FUN_71039c6e60(lVar18 + 0x40);
              }
              pvVar24 = (void *)(lVar18 + 0x41);
              if ((bVar7 & 1) != 0) {
                pvVar24 = *(void **)(lVar18 + 0x50);
              }
              iVar11 = memcmp(pvVar24,pcVar28,(size_t)__n);
              param_3 = __n;
              if (iVar11 != 0) goto LAB_7103654088;
            }
            if ((((long *)plVar22[6] == (long *)0x0) || (*(long *)plVar22[6] != plVar22[7])) ||
               (lVar14 = plVar22[5], lVar14 == 0)) {
              lVar19 = param_1 + local_170 * 0x40 + lVar21 * 0x20 + 0x68;
LAB_7103654108:
              lVar14 = 0;
              plVar25 = (long *)(local_188 + lVar27 + 0x70);
              *plVar25 = 0;
              uVar13 = 0;
              *(undefined8 *)(local_188 + lVar27 + 0x78) = 0;
            }
            else {
              lVar4 = local_188 + lVar27;
              lVar19 = lVar4 + 0x68;
              if (*(long *)(lVar14 + 8) == 0) goto LAB_7103654108;
              *(long *)(lVar4 + 0x70) = lVar14;
              plVar25 = (long *)(param_1 + local_170 * 0x40 + lVar21 * 0x20 + 0x70);
              puVar15 = *(undefined8 **)(lVar14 + 8);
              *(undefined8 **)(lVar4 + 0x78) = puVar15;
              uVar13 = *puVar15;
            }
            *(undefined8 *)(lVar19 + 0x18) = uVar13;
            *(undefined1 *)(lVar14 + 0xf0) = 0;
            param_3 = __n;
            if (*(char *)((long)&local_b0 + local_170) == '\0') {
              lVar14 = *plVar25;
              FUN_7103652f40(&local_110,uVar1,__n,param_4,param_5,param_6,param_7,param_8);
              FUN_7103558bd0(&local_110,"MeleeResultRank",0xf,param_4,param_5,param_6,param_7,
                             param_8);
              local_f0 = local_108;
              local_e8 = local_100;
              local_100 = (void *)0x0;
              local_f8 = local_110;
              local_110 = 0;
              local_108 = 0;
              FUN_710355b6b0(&local_f8,"_Viewport",9,param_4,param_5,param_6,param_7,param_8);
              local_d0 = local_e8;
              local_d8 = local_f0;
              local_f0 = 0;
              local_e8 = (void *)0x0;
              param_3 = &local_e0;
              local_e0 = local_f8;
              local_f8 = 0;
              FUN_7103856830(&local_130,lVar14,(byte *)param_3);
              pvVar9 = local_d0;
              puVar12 = local_128;
              pvVar24 = local_e8;
              if ((local_e0 & 1) != 0) {
                nu::VirtualFreeHook(local_d0);
                FUN_710392eb40((ulong)pvVar9);
                pvVar24 = local_e8;
              }
              pvVar9 = local_100;
              local_e8 = pvVar24;
              if ((local_f8 & 1) != 0) {
                nu::VirtualFreeHook(pvVar24);
                FUN_710392eb40((ulong)pvVar24);
                pvVar9 = local_100;
              }
              local_100 = pvVar9;
              if ((local_110 & 1) != 0) {
                nu::VirtualFreeHook(pvVar9);
                FUN_710392eb40((ulong)pvVar9);
              }
              uVar5 = *(undefined4 *)((long)puVar12 + 0xac);
              *(int *)(lVar3 + 0x2c) = (int)puVar12[0x15];
              *(undefined4 *)(lVar3 + 0x30) = uVar5;
              *(undefined1 *)((long)&local_b0 + local_170) = 1;
            }
            if (lVar27 == 0) {
              local_e0 = 0x18;
              local_d0 = (void *)0x0;
              builtin_strncpy((char *)((ulong)&local_e0 | 1),"DiffuseClear",0xc);
              param_3 = &local_e0;
              local_d8 = 0;
              FUN_7103856830(&local_130,*plVar25,(byte *)param_3);
              if ((local_128 == (ulong *)0x0) || (local_128[1] == 0)) {
                uVar13 = 0;
                *(ulong *)(lVar2 + 0x230) = 0;
                *(undefined8 *)(lVar2 + 0x238) = 0;
              }
              else {
                *(ulong *)(lVar2 + 0x230) = (ulong)local_128;
                puVar15 = (undefined8 *)local_128[1];
                *(undefined8 **)(lVar2 + 0x238) = puVar15;
                uVar13 = *puVar15;
              }
              *(undefined8 *)(lVar2 + 0x240) = uVar13;
            }
            bVar7 = 0;
            bVar8 = 1;
            pcVar28 = local_b8;
          }
          else {
LAB_7103654088:
            bVar7 = 1;
            pcVar28 = local_b8;
          }
          local_b8 = pcVar28;
          if ((local_c8 & 1) != 0) {
            nu::VirtualFreeHook(pcVar28);
            FUN_710392eb40((ulong)pcVar28);
          }
          bVar10 = local_138 < 2;
          local_138 = local_138 + 1;
          lVar21 = lVar21 + 1;
          lVar27 = lVar27 + 0x20;
          psVar23 = psVar23 + 3;
        } while ((bool)(bVar7 & bVar10));
        local_170 = local_170 + 1;
      } while ((local_170 < 7) && (local_188 = local_188 + 0x40, (bool)(bVar8 ^ 1)));
      plVar22 = (long *)*plVar22;
    } while (plVar22 != (long *)0x0);
  }
  lVar18 = DAT_71053375a8;
  FUN_7103652f40(&local_c8,1,param_3,param_4,param_5,param_6,param_7,param_8);
  uVar13 = 10;
  FUN_7103558bd0(&local_c8,"NODE_MAIN_",10,param_4,param_5,param_6,param_7,param_8);
  local_120 = local_b8;
  local_128 = local_c0;
  local_130 = local_c8;
  local_c0 = (ulong *)0x0;
  local_b8 = (void *)0x0;
  local_c8 = 0;
  plVar22 = FUN_7103550630((long *)(lVar18 + 0x10),(byte *)&local_130);
  pcVar17 = local_120;
  if (plVar22 != (long *)0x0) {
    if (((long *)plVar22[7] == (long *)0x0) || (*(long *)plVar22[7] != plVar22[8])) {
      *(undefined8 *)(param_1 + 0x310) = 0;
LAB_7103654410:
      uVar16 = 0;
      *(undefined8 *)(param_1 + 0x318) = 0;
    }
    else {
      lVar18 = plVar22[6];
      *(long *)(param_1 + 0x310) = lVar18;
      if (lVar18 == 0) goto LAB_7103654410;
      puVar15 = *(undefined8 **)(lVar18 + 8);
      *(undefined8 **)(param_1 + 0x318) = puVar15;
      uVar16 = *puVar15;
    }
    *(undefined8 *)(param_1 + 800) = uVar16;
  }
  if ((local_130 & 1) != 0) {
    nu::VirtualFreeHook(local_120);
    FUN_710392eb40((ulong)pcVar17);
    pcVar17 = local_b8;
    if ((local_c8 & 1) != 0) {
      nu::VirtualFreeHook(local_b8);
      FUN_710392eb40((ulong)pcVar17);
    }
  }
  plVar22 = *(long **)(*(long *)(param_1 + 0x310) + 0x48);
  *(undefined1 *)(*(long *)(param_1 + 0x310) + 0x10) = 0;
  lVar18 = *plVar22;
  lVar21 = plVar22[1];
  if (lVar18 != lVar21) {
    uVar20 = (lVar21 + -0x40) - lVar18;
    uVar1 = ((uint)(uVar20 >> 6) & 0x3ffffff) + 1;
    uVar6 = (ulong)uVar1 & 3;
    if ((uVar1 & 3) != 0) {
      lVar27 = -uVar6;
      plVar22 = (long *)(lVar18 + 0x28);
      do {
        lVar27 = lVar27 + 1;
        *(undefined1 *)(*plVar22 + 0x14) = 0;
        plVar22 = plVar22 + 8;
      } while (lVar27 != 0);
      lVar18 = lVar18 + uVar6 * 0x40;
    }
    if (0xbf < uVar20) {
      do {
        *(undefined1 *)(*(long *)(lVar18 + 0x28) + 0x14) = 0;
        *(undefined1 *)(*(long *)(lVar18 + 0x68) + 0x14) = 0;
        *(undefined1 *)(*(long *)(lVar18 + 0xa8) + 0x14) = 0;
        plVar22 = (long *)(lVar18 + 0xe8);
        lVar18 = lVar18 + 0x100;
        *(undefined1 *)(*plVar22 + 0x14) = 0;
      } while (lVar21 != lVar18);
    }
  }
  lVar18 = DAT_71053375a8;
  FUN_7103652f40(&local_c8,2,uVar13,param_4,param_5,param_6,param_7,param_8);
  uVar13 = 10;
  FUN_7103558bd0(&local_c8,"NODE_MAIN_",10,param_4,param_5,param_6,param_7,param_8);
  local_120 = local_b8;
  local_128 = local_c0;
  local_130 = local_c8;
  local_c0 = (ulong *)0x0;
  local_b8 = (void *)0x0;
  local_c8 = 0;
  plVar22 = FUN_7103550630((long *)(lVar18 + 0x10),(byte *)&local_130);
  pcVar17 = local_120;
  if (plVar22 != (long *)0x0) {
    if (((long *)plVar22[7] == (long *)0x0) || (*(long *)plVar22[7] != plVar22[8])) {
      *(undefined8 *)(param_1 + 0x330) = 0;
LAB_7103654568:
      uVar16 = 0;
      *(undefined8 *)(param_1 + 0x338) = 0;
    }
    else {
      lVar18 = plVar22[6];
      *(long *)(param_1 + 0x330) = lVar18;
      if (lVar18 == 0) goto LAB_7103654568;
      puVar15 = *(undefined8 **)(lVar18 + 8);
      *(undefined8 **)(param_1 + 0x338) = puVar15;
      uVar16 = *puVar15;
    }
    *(undefined8 *)(param_1 + 0x340) = uVar16;
  }
  if ((local_130 & 1) != 0) {
    nu::VirtualFreeHook(local_120);
    FUN_710392eb40((ulong)pcVar17);
    pcVar17 = local_b8;
    if ((local_c8 & 1) != 0) {
      nu::VirtualFreeHook(local_b8);
      FUN_710392eb40((ulong)pcVar17);
    }
  }
  plVar22 = *(long **)(*(long *)(param_1 + 0x330) + 0x48);
  *(undefined1 *)(*(long *)(param_1 + 0x330) + 0x10) = 0;
  lVar18 = *plVar22;
  lVar21 = plVar22[1];
  if (lVar18 != lVar21) {
    uVar20 = (lVar21 + -0x40) - lVar18;
    uVar1 = ((uint)(uVar20 >> 6) & 0x3ffffff) + 1;
    uVar6 = (ulong)uVar1 & 3;
    if ((uVar1 & 3) != 0) {
      lVar27 = -uVar6;
      plVar22 = (long *)(lVar18 + 0x28);
      do {
        lVar27 = lVar27 + 1;
        *(undefined1 *)(*plVar22 + 0x14) = 0;
        plVar22 = plVar22 + 8;
      } while (lVar27 != 0);
      lVar18 = lVar18 + uVar6 * 0x40;
    }
    if (0xbf < uVar20) {
      do {
        *(undefined1 *)(*(long *)(lVar18 + 0x28) + 0x14) = 0;
        *(undefined1 *)(*(long *)(lVar18 + 0x68) + 0x14) = 0;
        *(undefined1 *)(*(long *)(lVar18 + 0xa8) + 0x14) = 0;
        plVar22 = (long *)(lVar18 + 0xe8);
        lVar18 = lVar18 + 0x100;
        *(undefined1 *)(*plVar22 + 0x14) = 0;
      } while (lVar21 != lVar18);
    }
  }
  lVar18 = DAT_71053375a8;
  FUN_7103652f40(&local_c8,3,uVar13,param_4,param_5,param_6,param_7,param_8);
  uVar13 = 10;
  FUN_7103558bd0(&local_c8,"NODE_MAIN_",10,param_4,param_5,param_6,param_7,param_8);
  local_120 = local_b8;
  local_128 = local_c0;
  local_130 = local_c8;
  local_c0 = (ulong *)0x0;
  local_b8 = (void *)0x0;
  local_c8 = 0;
  plVar22 = FUN_7103550630((long *)(lVar18 + 0x10),(byte *)&local_130);
  pcVar17 = local_120;
  if (plVar22 != (long *)0x0) {
    if (((long *)plVar22[7] == (long *)0x0) || (*(long *)plVar22[7] != plVar22[8])) {
      *(undefined8 *)(param_1 + 0x350) = 0;
LAB_71036546c0:
      uVar16 = 0;
      *(undefined8 *)(param_1 + 0x358) = 0;
    }
    else {
      lVar18 = plVar22[6];
      *(long *)(param_1 + 0x350) = lVar18;
      if (lVar18 == 0) goto LAB_71036546c0;
      puVar15 = *(undefined8 **)(lVar18 + 8);
      *(undefined8 **)(param_1 + 0x358) = puVar15;
      uVar16 = *puVar15;
    }
    *(undefined8 *)(param_1 + 0x360) = uVar16;
  }
  if ((local_130 & 1) != 0) {
    nu::VirtualFreeHook(local_120);
    FUN_710392eb40((ulong)pcVar17);
    pcVar17 = local_b8;
    if ((local_c8 & 1) != 0) {
      nu::VirtualFreeHook(local_b8);
      FUN_710392eb40((ulong)pcVar17);
    }
  }
  plVar22 = *(long **)(*(long *)(param_1 + 0x350) + 0x48);
  *(undefined1 *)(*(long *)(param_1 + 0x350) + 0x10) = 0;
  lVar18 = *plVar22;
  lVar21 = plVar22[1];
  if (lVar18 != lVar21) {
    uVar20 = (lVar21 + -0x40) - lVar18;
    uVar1 = ((uint)(uVar20 >> 6) & 0x3ffffff) + 1;
    uVar6 = (ulong)uVar1 & 3;
    if ((uVar1 & 3) != 0) {
      lVar27 = -uVar6;
      plVar22 = (long *)(lVar18 + 0x28);
      do {
        lVar27 = lVar27 + 1;
        *(undefined1 *)(*plVar22 + 0x14) = 0;
        plVar22 = plVar22 + 8;
      } while (lVar27 != 0);
      lVar18 = lVar18 + uVar6 * 0x40;
    }
    if (0xbf < uVar20) {
      do {
        *(undefined1 *)(*(long *)(lVar18 + 0x28) + 0x14) = 0;
        *(undefined1 *)(*(long *)(lVar18 + 0x68) + 0x14) = 0;
        *(undefined1 *)(*(long *)(lVar18 + 0xa8) + 0x14) = 0;
        plVar22 = (long *)(lVar18 + 0xe8);
        lVar18 = lVar18 + 0x100;
        *(undefined1 *)(*plVar22 + 0x14) = 0;
      } while (lVar21 != lVar18);
    }
  }
  lVar18 = DAT_71053375a8;
  FUN_7103652f40(&local_c8,4,uVar13,param_4,param_5,param_6,param_7,param_8);
  uVar13 = 10;
  FUN_7103558bd0(&local_c8,"NODE_MAIN_",10,param_4,param_5,param_6,param_7,param_8);
  local_120 = local_b8;
  local_128 = local_c0;
  local_130 = local_c8;
  local_c0 = (ulong *)0x0;
  local_b8 = (void *)0x0;
  local_c8 = 0;
  plVar22 = FUN_7103550630((long *)(lVar18 + 0x10),(byte *)&local_130);
  pcVar17 = local_120;
  if (plVar22 != (long *)0x0) {
    if (((long *)plVar22[7] == (long *)0x0) || (*(long *)plVar22[7] != plVar22[8])) {
      *(undefined8 *)(param_1 + 0x370) = 0;
LAB_7103654818:
      uVar16 = 0;
      *(undefined8 *)(param_1 + 0x378) = 0;
    }
    else {
      lVar18 = plVar22[6];
      *(long *)(param_1 + 0x370) = lVar18;
      if (lVar18 == 0) goto LAB_7103654818;
      puVar15 = *(undefined8 **)(lVar18 + 8);
      *(undefined8 **)(param_1 + 0x378) = puVar15;
      uVar16 = *puVar15;
    }
    *(undefined8 *)(param_1 + 0x380) = uVar16;
  }
  if ((local_130 & 1) != 0) {
    nu::VirtualFreeHook(local_120);
    FUN_710392eb40((ulong)pcVar17);
    pcVar17 = local_b8;
    if ((local_c8 & 1) != 0) {
      nu::VirtualFreeHook(local_b8);
      FUN_710392eb40((ulong)pcVar17);
    }
  }
  plVar22 = *(long **)(*(long *)(param_1 + 0x370) + 0x48);
  *(undefined1 *)(*(long *)(param_1 + 0x370) + 0x10) = 0;
  lVar18 = *plVar22;
  lVar21 = plVar22[1];
  if (lVar18 != lVar21) {
    uVar20 = (lVar21 + -0x40) - lVar18;
    uVar1 = ((uint)(uVar20 >> 6) & 0x3ffffff) + 1;
    uVar6 = (ulong)uVar1 & 3;
    if ((uVar1 & 3) != 0) {
      lVar27 = -uVar6;
      plVar22 = (long *)(lVar18 + 0x28);
      do {
        lVar27 = lVar27 + 1;
        *(undefined1 *)(*plVar22 + 0x14) = 0;
        plVar22 = plVar22 + 8;
      } while (lVar27 != 0);
      lVar18 = lVar18 + uVar6 * 0x40;
    }
    if (0xbf < uVar20) {
      do {
        *(undefined1 *)(*(long *)(lVar18 + 0x28) + 0x14) = 0;
        *(undefined1 *)(*(long *)(lVar18 + 0x68) + 0x14) = 0;
        *(undefined1 *)(*(long *)(lVar18 + 0xa8) + 0x14) = 0;
        plVar22 = (long *)(lVar18 + 0xe8);
        lVar18 = lVar18 + 0x100;
        *(undefined1 *)(*plVar22 + 0x14) = 0;
      } while (lVar21 != lVar18);
    }
  }
  lVar18 = DAT_71053375a8;
  FUN_7103652f40(&local_c8,5,uVar13,param_4,param_5,param_6,param_7,param_8);
  uVar13 = 10;
  FUN_7103558bd0(&local_c8,"NODE_MAIN_",10,param_4,param_5,param_6,param_7,param_8);
  local_120 = local_b8;
  local_128 = local_c0;
  local_130 = local_c8;
  local_c0 = (ulong *)0x0;
  local_b8 = (void *)0x0;
  local_c8 = 0;
  plVar22 = FUN_7103550630((long *)(lVar18 + 0x10),(byte *)&local_130);
  pcVar17 = local_120;
  if (plVar22 != (long *)0x0) {
    if (((long *)plVar22[7] == (long *)0x0) || (*(long *)plVar22[7] != plVar22[8])) {
      *(undefined8 *)(param_1 + 0x390) = 0;
LAB_7103654970:
      uVar16 = 0;
      *(undefined8 *)(param_1 + 0x398) = 0;
    }
    else {
      lVar18 = plVar22[6];
      *(long *)(param_1 + 0x390) = lVar18;
      if (lVar18 == 0) goto LAB_7103654970;
      puVar15 = *(undefined8 **)(lVar18 + 8);
      *(undefined8 **)(param_1 + 0x398) = puVar15;
      uVar16 = *puVar15;
    }
    *(undefined8 *)(param_1 + 0x3a0) = uVar16;
  }
  if ((local_130 & 1) != 0) {
    nu::VirtualFreeHook(local_120);
    FUN_710392eb40((ulong)pcVar17);
    pcVar17 = local_b8;
    if ((local_c8 & 1) != 0) {
      nu::VirtualFreeHook(local_b8);
      FUN_710392eb40((ulong)pcVar17);
    }
  }
  plVar22 = *(long **)(*(long *)(param_1 + 0x390) + 0x48);
  *(undefined1 *)(*(long *)(param_1 + 0x390) + 0x10) = 0;
  lVar18 = *plVar22;
  lVar21 = plVar22[1];
  if (lVar18 != lVar21) {
    uVar20 = (lVar21 + -0x40) - lVar18;
    uVar1 = ((uint)(uVar20 >> 6) & 0x3ffffff) + 1;
    uVar6 = (ulong)uVar1 & 3;
    if ((uVar1 & 3) != 0) {
      lVar27 = -uVar6;
      plVar22 = (long *)(lVar18 + 0x28);
      do {
        lVar27 = lVar27 + 1;
        *(undefined1 *)(*plVar22 + 0x14) = 0;
        plVar22 = plVar22 + 8;
      } while (lVar27 != 0);
      lVar18 = lVar18 + uVar6 * 0x40;
    }
    if (0xbf < uVar20) {
      do {
        *(undefined1 *)(*(long *)(lVar18 + 0x28) + 0x14) = 0;
        *(undefined1 *)(*(long *)(lVar18 + 0x68) + 0x14) = 0;
        *(undefined1 *)(*(long *)(lVar18 + 0xa8) + 0x14) = 0;
        plVar22 = (long *)(lVar18 + 0xe8);
        lVar18 = lVar18 + 0x100;
        *(undefined1 *)(*plVar22 + 0x14) = 0;
      } while (lVar21 != lVar18);
    }
  }
  lVar18 = DAT_71053375a8;
  FUN_7103652f40(&local_c8,6,uVar13,param_4,param_5,param_6,param_7,param_8);
  uVar13 = 10;
  FUN_7103558bd0(&local_c8,"NODE_MAIN_",10,param_4,param_5,param_6,param_7,param_8);
  local_120 = local_b8;
  local_128 = local_c0;
  local_130 = local_c8;
  local_c0 = (ulong *)0x0;
  local_b8 = (void *)0x0;
  local_c8 = 0;
  plVar22 = FUN_7103550630((long *)(lVar18 + 0x10),(byte *)&local_130);
  pcVar17 = local_120;
  if (plVar22 != (long *)0x0) {
    if (((long *)plVar22[7] == (long *)0x0) || (*(long *)plVar22[7] != plVar22[8])) {
      *(undefined8 *)(param_1 + 0x3b0) = 0;
LAB_7103654ac8:
      uVar16 = 0;
      *(undefined8 *)(param_1 + 0x3b8) = 0;
    }
    else {
      lVar18 = plVar22[6];
      *(long *)(param_1 + 0x3b0) = lVar18;
      if (lVar18 == 0) goto LAB_7103654ac8;
      puVar15 = *(undefined8 **)(lVar18 + 8);
      *(undefined8 **)(param_1 + 0x3b8) = puVar15;
      uVar16 = *puVar15;
    }
    *(undefined8 *)(param_1 + 0x3c0) = uVar16;
  }
  if ((local_130 & 1) != 0) {
    nu::VirtualFreeHook(local_120);
    FUN_710392eb40((ulong)pcVar17);
    pcVar17 = local_b8;
    if ((local_c8 & 1) != 0) {
      nu::VirtualFreeHook(local_b8);
      FUN_710392eb40((ulong)pcVar17);
    }
  }
  plVar22 = *(long **)(*(long *)(param_1 + 0x3b0) + 0x48);
  *(undefined1 *)(*(long *)(param_1 + 0x3b0) + 0x10) = 0;
  lVar18 = *plVar22;
  lVar21 = plVar22[1];
  if (lVar18 != lVar21) {
    uVar20 = (lVar21 + -0x40) - lVar18;
    uVar1 = ((uint)(uVar20 >> 6) & 0x3ffffff) + 1;
    uVar6 = (ulong)uVar1 & 3;
    if ((uVar1 & 3) != 0) {
      lVar27 = -uVar6;
      plVar22 = (long *)(lVar18 + 0x28);
      do {
        lVar27 = lVar27 + 1;
        *(undefined1 *)(*plVar22 + 0x14) = 0;
        plVar22 = plVar22 + 8;
      } while (lVar27 != 0);
      lVar18 = lVar18 + uVar6 * 0x40;
    }
    if (0xbf < uVar20) {
      do {
        *(undefined1 *)(*(long *)(lVar18 + 0x28) + 0x14) = 0;
        *(undefined1 *)(*(long *)(lVar18 + 0x68) + 0x14) = 0;
        *(undefined1 *)(*(long *)(lVar18 + 0xa8) + 0x14) = 0;
        plVar22 = (long *)(lVar18 + 0xe8);
        lVar18 = lVar18 + 0x100;
        *(undefined1 *)(*plVar22 + 0x14) = 0;
      } while (lVar21 != lVar18);
    }
  }
  lVar18 = DAT_71053375a8;
  FUN_7103652f40(&local_c8,7,uVar13,param_4,param_5,param_6,param_7,param_8);
  FUN_7103558bd0(&local_c8,"NODE_MAIN_",10,param_4,param_5,param_6,param_7,param_8);
  local_120 = local_b8;
  local_128 = local_c0;
  local_130 = local_c8;
  local_c0 = (ulong *)0x0;
  local_b8 = (void *)0x0;
  local_c8 = 0;
  plVar22 = FUN_7103550630((long *)(lVar18 + 0x10),(byte *)&local_130);
  pcVar17 = local_120;
  if (plVar22 == (long *)0x0) goto LAB_7103654c2c;
  if (((long *)plVar22[7] == (long *)0x0) || (*(long *)plVar22[7] != plVar22[8])) {
    *(undefined8 *)(param_1 + 0x3d0) = 0;
LAB_7103654c20:
    uVar13 = 0;
    *(undefined8 *)(param_1 + 0x3d8) = 0;
  }
  else {
    lVar18 = plVar22[6];
    *(long *)(param_1 + 0x3d0) = lVar18;
    if (lVar18 == 0) goto LAB_7103654c20;
    puVar15 = *(undefined8 **)(lVar18 + 8);
    *(undefined8 **)(param_1 + 0x3d8) = puVar15;
    uVar13 = *puVar15;
  }
  *(undefined8 *)(param_1 + 0x3e0) = uVar13;
LAB_7103654c2c:
  if ((local_130 & 1) != 0) {
    nu::VirtualFreeHook(local_120);
    FUN_710392eb40((ulong)pcVar17);
    pcVar17 = local_b8;
    if ((local_c8 & 1) != 0) {
      nu::VirtualFreeHook(local_b8);
      FUN_710392eb40((ulong)pcVar17);
    }
  }
  plVar22 = *(long **)(*(long *)(param_1 + 0x3d0) + 0x48);
  *(undefined1 *)(*(long *)(param_1 + 0x3d0) + 0x10) = 0;
  lVar18 = *plVar22;
  lVar21 = plVar22[1];
  if (lVar18 != lVar21) {
    uVar20 = (lVar21 + -0x40) - lVar18;
    uVar1 = ((uint)(uVar20 >> 6) & 0x3ffffff) + 1;
    uVar6 = (ulong)uVar1 & 3;
    if ((uVar1 & 3) != 0) {
      lVar27 = -uVar6;
      plVar22 = (long *)(lVar18 + 0x28);
      do {
        lVar27 = lVar27 + 1;
        *(undefined1 *)(*plVar22 + 0x14) = 0;
        plVar22 = plVar22 + 8;
      } while (lVar27 != 0);
      lVar18 = lVar18 + uVar6 * 0x40;
    }
    if (0xbf < uVar20) {
      do {
        *(undefined1 *)(*(long *)(lVar18 + 0x28) + 0x14) = 0;
        *(undefined1 *)(*(long *)(lVar18 + 0x68) + 0x14) = 0;
        *(undefined1 *)(*(long *)(lVar18 + 0xa8) + 0x14) = 0;
        plVar22 = (long *)(lVar18 + 0xe8);
        lVar18 = lVar18 + 0x100;
        *(undefined1 *)(*plVar22 + 0x14) = 0;
      } while (lVar21 != lVar18);
    }
  }
  if (((local_90 & 1) != 0) && (local_80 != 0)) {
    FUN_710392eb40(local_80);
  }
  if (((local_a8 & 1) != 0) && (local_98 != 0)) {
    FUN_710392eb40(local_98);
  }
  return;
}

