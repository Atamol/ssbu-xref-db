// addr:      7101733aa0
// offset:    0x1733aa0
// name:      FUN_7101733aa0
// mangled:   
// signature: undefined8 __cdecl FUN_7101733aa0(long param_1, long param_2)


/* WARNING: Type propagation algorithm not settling */

undefined8 FUN_7101733aa0(long param_1,long param_2)

{
  uint uVar1;
  long ******pppppplVar2;
  ulong uVar3;
  long *******ppppppplVar4;
  long ******pppppplVar5;
  undefined8 **ppuVar6;
  code *pcVar7;
  long *plVar8;
  undefined8 **ppuVar9;
  undefined8 *puVar10;
  long *plVar11;
  undefined8 *puVar12;
  long *plVar13;
  long lVar14;
  long *******ppppppplVar15;
  undefined1 *puVar16;
  long *******ppppppplVar17;
  undefined8 **ppuVar18;
  long ******pppppplVar19;
  long *******local_170;
  long *******local_168;
  long local_160;
  undefined **local_158;
  undefined1 local_150;
  undefined7 uStack_14f;
  undefined8 **local_148;
  undefined8 *local_140;
  undefined8 local_138;
  undefined2 local_130;
  undefined1 uStack_12e;
  undefined8 *local_128;
  undefined8 *local_120;
  undefined8 *local_118;
  undefined **local_110;
  code *local_108;
  long local_100;
  long local_f8;
  undefined ***local_f0;
  long lStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  long local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  long lStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  long local_a0;
  undefined8 local_98;
  undefined8 local_90;
  long lStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  
  plVar8 = *(long **)(param_2 + 0x10);
  if (*plVar8 == 0) {
    return 2;
  }
  lVar14 = *(long *)(param_1 + 0x20);
  local_108 = (code *)((ulong)local_108 & 0xffffffffffffff00);
  uStack_78 = 0;
  local_90 = 0;
  lStack_88 = 0;
  local_a0 = 0;
  local_98 = 0;
  uStack_a8 = 0;
  local_b0 = 0;
  local_c0 = 0;
  lStack_b8 = 0;
  local_d0 = 0;
  local_c8 = 0;
  uStack_d8 = 0;
  local_e0 = 0;
  local_f0 = (undefined ***)0x0;
  lStack_e8 = 0;
  local_100 = 0;
  local_f8 = 0;
  local_118 = (undefined8 *)0x0;
  local_110 = &PTR_FUN_710509d8d8;
  local_80 = 0;
  local_128 = (undefined8 *)0x0;
  local_120 = (undefined8 *)0x0;
  if ((*(ulong *)(lVar14 + 0x1e8) & 0xfffffffffffffff) != 0) {
    puVar16 = (undefined1 *)(lVar14 + 8);
    do {
      local_150 = 0;
      local_130 = 0xff00;
      local_158 = &PTR_FUN_710509d8f8;
      local_140 = (undefined8 *)0x0;
      local_138 = 0;
      local_168 = (long *******)0x0;
      local_160 = 0;
      local_170 = (long *******)&local_168;
      local_148 = &local_140;
      FUN_710170ecb0((long *)&local_170,"play_count",(uint *)(puVar16 + 4));
      if (*(int *)(puVar16 + 0xc) != 0) {
        FUN_7101716980((long *)&local_170,"smash_power",(uint *)(puVar16 + 8));
        pppppplVar2 = (long ******)FUN_71001b1820(0x58);
        pppppplVar19 = pppppplVar2 + 4;
        *pppppplVar19 = (long *****)&PTR_FUN_710509cc08;
        *(undefined1 *)(pppppplVar2 + 5) = 0;
        pppppplVar2[7] = (long *****)(pppppplVar2 + 5);
        pppppplVar2[8] = (long *****)0x10;
        FUN_71001b47e0((long)pppppplVar19,"rating",-1);
        FUN_71001b7910((ulong *)(pppppplVar2 + 9),*(uint *)(puVar16 + 0xc));
        ppppppplVar17 = (long *******)&local_168;
        ppppppplVar15 = (long *******)&local_168;
        ppppppplVar4 = local_168;
        while (ppppppplVar4 != (long *******)0x0) {
          while( true ) {
            ppppppplVar15 = ppppppplVar4;
            uVar1 = FUN_71001b4e80((long)pppppplVar19,(long)(ppppppplVar15 + 4));
            if ((uVar1 & 1) == 0) break;
            ppppppplVar4 = (long *******)*ppppppplVar15;
            ppppppplVar17 = ppppppplVar15;
            if ((long *******)*ppppppplVar15 == (long *******)0x0) {
              pppppplVar5 = *ppppppplVar15;
              goto joined_r0x007101733c70;
            }
          }
          uVar1 = FUN_71001b4e80((long)(ppppppplVar15 + 4),(long)pppppplVar19);
          if ((uVar1 & 1) == 0) break;
          ppppppplVar17 = ppppppplVar15 + 1;
          ppppppplVar4 = (long *******)*ppppppplVar17;
        }
        pppppplVar5 = *ppppppplVar17;
joined_r0x007101733c70:
        if (pppppplVar5 == (long ******)0x0) {
          *pppppplVar2 = (long *****)0x0;
          pppppplVar2[1] = (long *****)0x0;
          pppppplVar2[2] = (long *****)ppppppplVar15;
          *ppppppplVar17 = pppppplVar2;
          if ((long *******)*local_170 != (long *******)0x0) {
            pppppplVar2 = *ppppppplVar17;
            local_170 = (long *******)*local_170;
          }
          std::__tree_balance_after_insert<std::__tree_node_base<void*>*>
                    ((long *)local_168,(long *)pppppplVar2);
          local_160 = local_160 + 1;
        }
        else if (pppppplVar2 != (long ******)0x0) {
          FUN_71001b78a0((long *)(pppppplVar2 + 9));
          pppppplVar2[4] = (long *****)&PTR_FUN_710509cc08;
          FUN_71001b4910((long)pppppplVar19);
          FUN_71001b1870((long)pppppplVar2);
        }
      }
      local_130 = CONCAT11(*puVar16,(undefined1)local_130);
      FUN_710170dcd0((long *)&local_148,(long *)local_170,(long *)&local_168);
      puVar12 = local_120;
      if (local_120 == local_118) {
        FUN_7101718db0((long *)&local_128,(long)&local_158);
      }
      else {
        *local_120 = &PTR_FUN_710509d878;
        plVar11 = local_120 + 3;
        *plVar11 = 0;
        *(undefined1 *)(local_120 + 1) = local_150;
        local_120[4] = 0;
        local_120[2] = plVar11;
        if (local_148 != &local_140) {
          plVar13 = local_120 + 2;
          ppuVar18 = local_148;
          do {
            while( true ) {
              FUN_71017181b0(plVar13,plVar11,(long)(ppuVar18 + 4),(long)(ppuVar18 + 4));
              ppuVar6 = (undefined8 **)ppuVar18[1];
              if ((undefined8 **)ppuVar18[1] == (undefined8 **)0x0) break;
              do {
                ppuVar18 = ppuVar6;
                ppuVar6 = (undefined8 **)*ppuVar18;
              } while ((undefined8 **)*ppuVar18 != (undefined8 **)0x0);
LAB_7101733da4:
              if (ppuVar18 == &local_140) goto LAB_7101733dbc;
            }
            ppuVar6 = ppuVar18 + 2;
            ppuVar9 = (undefined8 **)*ppuVar6;
            if ((undefined8 **)*ppuVar9 != ppuVar18) {
              do {
                puVar10 = *ppuVar6;
                ppuVar6 = (undefined8 **)(puVar10 + 2);
                ppuVar18 = (undefined8 **)*ppuVar6;
              } while (*ppuVar18 != puVar10);
              goto LAB_7101733da4;
            }
            ppuVar18 = ppuVar9;
          } while (ppuVar9 != &local_140);
        }
LAB_7101733dbc:
        *puVar12 = &PTR_FUN_710509d918;
        *(undefined1 *)(puVar12 + 5) = (undefined1)local_130;
        *(undefined1 *)((long)puVar12 + 0x29) = local_130._1_1_;
        *puVar12 = &PTR_FUN_710509d8f8;
        local_120 = local_120 + 6;
      }
      FUN_710170df50(&local_170,local_168);
      local_158 = &PTR_FUN_710509d878;
      FUN_710170df50(&local_148,local_140);
      puVar16 = puVar16 + 0x10;
    } while (puVar16 != (undefined1 *)(lVar14 + 8) + *(long *)(lVar14 + 0x1e8) * 0x10);
  }
  FUN_7101718a30(&local_100,(long)local_128,(long)local_120);
  puVar10 = local_128;
  puVar12 = local_120;
  if (local_128 != (undefined8 *)0x0) {
    while (puVar12 != puVar10) {
      puVar12 = puVar12 + -6;
      (**(code **)*puVar12)(puVar12);
    }
    local_120 = puVar10;
    FUN_71001b1870((long)local_128);
  }
  local_120 = (undefined8 *)0x0;
  local_118 = (undefined8 *)0x0;
  local_128 = (undefined8 *)0x0;
  if ((*(ulong *)(lVar14 + 0x2e0) & 0x1fffffffffffffff) != 0) {
    puVar16 = (undefined1 *)(lVar14 + 0x1f0);
    do {
      local_130 = 0xff00;
      local_150 = 0;
      local_158 = &PTR_FUN_710509d938;
      local_140 = (undefined8 *)0x0;
      local_138 = 0;
      uStack_12e = 0xff;
      local_168 = (long *******)0x0;
      local_160 = 0;
      local_170 = (long *******)&local_168;
      local_148 = &local_140;
      FUN_710170ecb0((long *)&local_170,"play_count",(uint *)(puVar16 + 4));
      local_130 = CONCAT11(*puVar16,(undefined1)local_130);
      uStack_12e = puVar16[1];
      FUN_710170dcd0((long *)&local_148,(long *)local_170,(long *)&local_168);
      puVar12 = local_120;
      if (local_120 == local_118) {
        FUN_7101719440((long *)&local_128,(long)&local_158);
      }
      else {
        *local_120 = &PTR_FUN_710509d878;
        plVar11 = local_120 + 3;
        *plVar11 = 0;
        *(undefined1 *)(local_120 + 1) = local_150;
        local_120[4] = 0;
        local_120[2] = plVar11;
        if (local_148 != &local_140) {
          plVar13 = local_120 + 2;
          ppuVar18 = local_148;
          do {
            while( true ) {
              FUN_71017181b0(plVar13,plVar11,(long)(ppuVar18 + 4),(long)(ppuVar18 + 4));
              ppuVar6 = (undefined8 **)ppuVar18[1];
              if ((undefined8 **)ppuVar18[1] == (undefined8 **)0x0) break;
              do {
                ppuVar18 = ppuVar6;
                ppuVar6 = (undefined8 **)*ppuVar18;
              } while ((undefined8 **)*ppuVar18 != (undefined8 **)0x0);
LAB_7101733fcc:
              if (ppuVar18 == &local_140) goto LAB_7101733fe4;
            }
            ppuVar6 = ppuVar18 + 2;
            ppuVar9 = (undefined8 **)*ppuVar6;
            if ((undefined8 **)*ppuVar9 != ppuVar18) {
              do {
                puVar10 = *ppuVar6;
                ppuVar6 = (undefined8 **)(puVar10 + 2);
                ppuVar18 = (undefined8 **)*ppuVar6;
              } while (*ppuVar18 != puVar10);
              goto LAB_7101733fcc;
            }
            ppuVar18 = ppuVar9;
          } while (ppuVar9 != &local_140);
        }
LAB_7101733fe4:
        *puVar12 = &PTR_FUN_710509d958;
        *(undefined1 *)(puVar12 + 5) = (undefined1)local_130;
        *(undefined1 *)((long)puVar12 + 0x29) = local_130._1_1_;
        *(undefined1 *)((long)puVar12 + 0x2a) = uStack_12e;
        *puVar12 = &PTR_FUN_710509d938;
        local_120 = local_120 + 6;
      }
      FUN_710170df50(&local_170,local_168);
      local_158 = &PTR_FUN_710509d878;
      FUN_710170df50(&local_148,local_140);
      puVar16 = puVar16 + 8;
    } while (puVar16 != (undefined1 *)(lVar14 + 0x1f0) + *(long *)(lVar14 + 0x2e0) * 8);
  }
  FUN_71017190b0(&lStack_e8,(long)local_128,(long)local_120);
  puVar10 = local_128;
  puVar12 = local_120;
  if (local_128 != (undefined8 *)0x0) {
    while (puVar12 != puVar10) {
      puVar12 = puVar12 + -6;
      (**(code **)*puVar12)(puVar12);
    }
    local_120 = puVar10;
    FUN_71001b1870((long)local_128);
  }
  local_120 = (undefined8 *)0x0;
  local_118 = (undefined8 *)0x0;
  local_128 = (undefined8 *)0x0;
  if ((*(ulong *)(lVar14 + 0x3d8) & 0x1fffffffffffffff) != 0) {
    puVar16 = (undefined1 *)(lVar14 + 0x2e8);
    do {
      local_150 = 0;
      local_130 = 0xff00;
      local_158 = &PTR_FUN_710509d978;
      local_140 = (undefined8 *)0x0;
      local_138 = 0;
      local_168 = (long *******)0x0;
      local_160 = 0;
      local_170 = (long *******)&local_168;
      local_148 = &local_140;
      FUN_710170ecb0((long *)&local_170,"play_count",(uint *)(puVar16 + 4));
      local_130 = CONCAT11(*puVar16,(undefined1)local_130);
      FUN_710170dcd0((long *)&local_148,(long *)local_170,(long *)&local_168);
      puVar12 = local_120;
      if (local_120 == local_118) {
        FUN_7101719ad0((long *)&local_128,(long)&local_158);
      }
      else {
        *local_120 = &PTR_FUN_710509d878;
        plVar11 = local_120 + 3;
        *plVar11 = 0;
        *(undefined1 *)(local_120 + 1) = local_150;
        local_120[4] = 0;
        local_120[2] = plVar11;
        if (local_148 != &local_140) {
          plVar13 = local_120 + 2;
          ppuVar18 = local_148;
          do {
            while( true ) {
              FUN_71017181b0(plVar13,plVar11,(long)(ppuVar18 + 4),(long)(ppuVar18 + 4));
              ppuVar6 = (undefined8 **)ppuVar18[1];
              if ((undefined8 **)ppuVar18[1] == (undefined8 **)0x0) break;
              do {
                ppuVar18 = ppuVar6;
                ppuVar6 = (undefined8 **)*ppuVar18;
              } while ((undefined8 **)*ppuVar18 != (undefined8 **)0x0);
LAB_71017341e0:
              if (ppuVar18 == &local_140) goto LAB_71017341f8;
            }
            ppuVar6 = ppuVar18 + 2;
            ppuVar9 = (undefined8 **)*ppuVar6;
            if ((undefined8 **)*ppuVar9 != ppuVar18) {
              do {
                puVar10 = *ppuVar6;
                ppuVar6 = (undefined8 **)(puVar10 + 2);
                ppuVar18 = (undefined8 **)*ppuVar6;
              } while (*ppuVar18 != puVar10);
              goto LAB_71017341e0;
            }
            ppuVar18 = ppuVar9;
          } while (ppuVar9 != &local_140);
        }
LAB_71017341f8:
        *puVar12 = &PTR_FUN_710509d998;
        *(undefined1 *)(puVar12 + 5) = (undefined1)local_130;
        *(undefined1 *)((long)puVar12 + 0x29) = local_130._1_1_;
        *puVar12 = &PTR_FUN_710509d978;
        local_120 = local_120 + 6;
      }
      FUN_710170df50(&local_170,local_168);
      local_158 = &PTR_FUN_710509d878;
      FUN_710170df50(&local_148,local_140);
      puVar16 = puVar16 + 8;
    } while (puVar16 != (undefined1 *)(lVar14 + 0x2e8) + *(long *)(lVar14 + 0x3d8) * 8);
  }
  FUN_7101719750(&local_d0,(long)local_128,(long)local_120);
  puVar10 = local_128;
  puVar12 = local_120;
  if (local_128 != (undefined8 *)0x0) {
    while (puVar12 != puVar10) {
      puVar12 = puVar12 + -6;
      (**(code **)*puVar12)(puVar12);
    }
    local_120 = puVar10;
    FUN_71001b1870((long)local_128);
  }
  local_120 = (undefined8 *)0x0;
  local_118 = (undefined8 *)0x0;
  local_128 = (undefined8 *)0x0;
  if ((*(ulong *)(lVar14 + 0x4d0) & 0x1fffffffffffffff) != 0) {
    puVar16 = (undefined1 *)(lVar14 + 0x3e0);
    do {
      local_150 = 0;
      local_130 = 0xff00;
      local_158 = &PTR_FUN_710509d9b8;
      local_140 = (undefined8 *)0x0;
      local_138 = 0;
      local_168 = (long *******)0x0;
      local_160 = 0;
      local_170 = (long *******)&local_168;
      local_148 = &local_140;
      FUN_710170ecb0((long *)&local_170,"play_count",(uint *)(puVar16 + 4));
      local_130 = CONCAT11(*puVar16,(undefined1)local_130);
      FUN_710170dcd0((long *)&local_148,(long *)local_170,(long *)&local_168);
      puVar12 = local_120;
      if (local_120 == local_118) {
        FUN_710171a150((long *)&local_128,(long)&local_158);
      }
      else {
        *local_120 = &PTR_FUN_710509d878;
        plVar11 = local_120 + 3;
        *plVar11 = 0;
        *(undefined1 *)(local_120 + 1) = local_150;
        local_120[4] = 0;
        local_120[2] = plVar11;
        if (local_148 != &local_140) {
          plVar13 = local_120 + 2;
          ppuVar18 = local_148;
          do {
            while( true ) {
              FUN_71017181b0(plVar13,plVar11,(long)(ppuVar18 + 4),(long)(ppuVar18 + 4));
              ppuVar6 = (undefined8 **)ppuVar18[1];
              if ((undefined8 **)ppuVar18[1] == (undefined8 **)0x0) break;
              do {
                ppuVar18 = ppuVar6;
                ppuVar6 = (undefined8 **)*ppuVar18;
              } while ((undefined8 **)*ppuVar18 != (undefined8 **)0x0);
LAB_71017343ec:
              if (ppuVar18 == &local_140) goto LAB_7101734404;
            }
            ppuVar6 = ppuVar18 + 2;
            ppuVar9 = (undefined8 **)*ppuVar6;
            if ((undefined8 **)*ppuVar9 != ppuVar18) {
              do {
                puVar10 = *ppuVar6;
                ppuVar6 = (undefined8 **)(puVar10 + 2);
                ppuVar18 = (undefined8 **)*ppuVar6;
              } while (*ppuVar18 != puVar10);
              goto LAB_71017343ec;
            }
            ppuVar18 = ppuVar9;
          } while (ppuVar9 != &local_140);
        }
LAB_7101734404:
        *puVar12 = &PTR_FUN_710509d9d8;
        *(undefined1 *)(puVar12 + 5) = (undefined1)local_130;
        *(undefined1 *)((long)puVar12 + 0x29) = local_130._1_1_;
        *puVar12 = &PTR_FUN_710509d9b8;
        local_120 = local_120 + 6;
      }
      FUN_710170df50(&local_170,local_168);
      local_158 = &PTR_FUN_710509d878;
      FUN_710170df50(&local_148,local_140);
      puVar16 = puVar16 + 8;
    } while (puVar16 != (undefined1 *)(lVar14 + 0x3e0) + *(long *)(lVar14 + 0x4d0) * 8);
  }
  FUN_7101719dd0(&local_a0,(long)local_128,(long)local_120);
  puVar10 = local_128;
  puVar12 = local_120;
  if (local_128 != (undefined8 *)0x0) {
    while (puVar12 != puVar10) {
      puVar12 = puVar12 + -6;
      (**(code **)*puVar12)(puVar12);
    }
    local_120 = puVar10;
    FUN_71001b1870((long)local_128);
  }
  local_120 = (undefined8 *)0x0;
  local_118 = (undefined8 *)0x0;
  local_128 = (undefined8 *)0x0;
  if ((*(ulong *)(lVar14 + 0x5c8) & 0x1fffffffffffffff) != 0) {
    puVar16 = (undefined1 *)(lVar14 + 0x4d8);
    do {
      local_150 = 0;
      local_130 = 0xff00;
      local_158 = &PTR_FUN_710509d9f8;
      local_140 = (undefined8 *)0x0;
      local_138 = 0;
      local_168 = (long *******)0x0;
      local_160 = 0;
      local_170 = (long *******)&local_168;
      local_148 = &local_140;
      FUN_710170ecb0((long *)&local_170,"play_count",(uint *)(puVar16 + 4));
      local_130 = CONCAT11(*puVar16,(undefined1)local_130);
      FUN_710170dcd0((long *)&local_148,(long *)local_170,(long *)&local_168);
      puVar12 = local_120;
      if (local_120 == local_118) {
        FUN_710171a7d0((long *)&local_128,(long)&local_158);
      }
      else {
        *local_120 = &PTR_FUN_710509d878;
        plVar11 = local_120 + 3;
        *plVar11 = 0;
        *(undefined1 *)(local_120 + 1) = local_150;
        local_120[4] = 0;
        local_120[2] = plVar11;
        if (local_148 != &local_140) {
          plVar13 = local_120 + 2;
          ppuVar18 = local_148;
          do {
            while( true ) {
              FUN_71017181b0(plVar13,plVar11,(long)(ppuVar18 + 4),(long)(ppuVar18 + 4));
              ppuVar6 = (undefined8 **)ppuVar18[1];
              if ((undefined8 **)ppuVar18[1] == (undefined8 **)0x0) break;
              do {
                ppuVar18 = ppuVar6;
                ppuVar6 = (undefined8 **)*ppuVar18;
              } while ((undefined8 **)*ppuVar18 != (undefined8 **)0x0);
LAB_71017345f8:
              if (ppuVar18 == &local_140) goto LAB_7101734610;
            }
            ppuVar6 = ppuVar18 + 2;
            ppuVar9 = (undefined8 **)*ppuVar6;
            if ((undefined8 **)*ppuVar9 != ppuVar18) {
              do {
                puVar10 = *ppuVar6;
                ppuVar6 = (undefined8 **)(puVar10 + 2);
                ppuVar18 = (undefined8 **)*ppuVar6;
              } while (*ppuVar18 != puVar10);
              goto LAB_71017345f8;
            }
            ppuVar18 = ppuVar9;
          } while (ppuVar9 != &local_140);
        }
LAB_7101734610:
        *puVar12 = &PTR_FUN_710509da18;
        *(undefined1 *)(puVar12 + 5) = (undefined1)local_130;
        *(undefined1 *)((long)puVar12 + 0x29) = local_130._1_1_;
        *puVar12 = &PTR_FUN_710509d9f8;
        local_120 = local_120 + 6;
      }
      FUN_710170df50(&local_170,local_168);
      local_158 = &PTR_FUN_710509d878;
      FUN_710170df50(&local_148,local_140);
      puVar16 = puVar16 + 8;
    } while (puVar16 != (undefined1 *)(lVar14 + 0x4d8) + *(long *)(lVar14 + 0x5c8) * 8);
  }
  FUN_710171a450(&lStack_b8,(long)local_128,(long)local_120);
  puVar10 = local_128;
  puVar12 = local_120;
  if (local_128 != (undefined8 *)0x0) {
    while (puVar12 != puVar10) {
      puVar12 = puVar12 + -6;
      (**(code **)*puVar12)(puVar12);
    }
    local_120 = puVar10;
    FUN_71001b1870((long)local_128);
  }
  local_120 = (undefined8 *)0x0;
  local_118 = (undefined8 *)0x0;
  local_128 = (undefined8 *)0x0;
  if ((*(ulong *)(lVar14 + 0x6c0) & 0x1fffffffffffffff) != 0) {
    puVar16 = (undefined1 *)(lVar14 + 0x5d0);
    do {
      local_150 = 0;
      local_130 = 0xff00;
      local_158 = &PTR_FUN_710509da38;
      local_140 = (undefined8 *)0x0;
      local_138 = 0;
      local_168 = (long *******)0x0;
      local_160 = 0;
      local_170 = (long *******)&local_168;
      local_148 = &local_140;
      FUN_710170ecb0((long *)&local_170,"play_count",(uint *)(puVar16 + 4));
      local_130 = CONCAT11(*puVar16,(undefined1)local_130);
      FUN_710170dcd0((long *)&local_148,(long *)local_170,(long *)&local_168);
      puVar12 = local_120;
      if (local_120 == local_118) {
        FUN_710171ae50((long *)&local_128,(long)&local_158);
      }
      else {
        *local_120 = &PTR_FUN_710509d878;
        plVar11 = local_120 + 3;
        *plVar11 = 0;
        *(undefined1 *)(local_120 + 1) = local_150;
        local_120[4] = 0;
        local_120[2] = plVar11;
        if (local_148 != &local_140) {
          plVar13 = local_120 + 2;
          ppuVar18 = local_148;
          do {
            while( true ) {
              FUN_71017181b0(plVar13,plVar11,(long)(ppuVar18 + 4),(long)(ppuVar18 + 4));
              ppuVar6 = (undefined8 **)ppuVar18[1];
              if ((undefined8 **)ppuVar18[1] == (undefined8 **)0x0) break;
              do {
                ppuVar18 = ppuVar6;
                ppuVar6 = (undefined8 **)*ppuVar18;
              } while ((undefined8 **)*ppuVar18 != (undefined8 **)0x0);
LAB_7101734804:
              if (ppuVar18 == &local_140) goto LAB_710173481c;
            }
            ppuVar6 = ppuVar18 + 2;
            ppuVar9 = (undefined8 **)*ppuVar6;
            if ((undefined8 **)*ppuVar9 != ppuVar18) {
              do {
                puVar10 = *ppuVar6;
                ppuVar6 = (undefined8 **)(puVar10 + 2);
                ppuVar18 = (undefined8 **)*ppuVar6;
              } while (*ppuVar18 != puVar10);
              goto LAB_7101734804;
            }
            ppuVar18 = ppuVar9;
          } while (ppuVar9 != &local_140);
        }
LAB_710173481c:
        *puVar12 = &PTR_FUN_710509da58;
        *(undefined1 *)(puVar12 + 5) = (undefined1)local_130;
        *(undefined1 *)((long)puVar12 + 0x29) = local_130._1_1_;
        *puVar12 = &PTR_FUN_710509da38;
        local_120 = local_120 + 6;
      }
      FUN_710170df50(&local_170,local_168);
      local_158 = &PTR_FUN_710509d878;
      FUN_710170df50(&local_148,local_140);
      puVar16 = puVar16 + 8;
    } while (puVar16 != (undefined1 *)(lVar14 + 0x5d0) + *(long *)(lVar14 + 0x6c0) * 8);
  }
  FUN_710171aad0(&lStack_88,(long)local_128,(long)local_120);
  puVar10 = local_128;
  puVar12 = local_120;
  if (local_128 != (undefined8 *)0x0) {
    while (puVar12 != puVar10) {
      puVar12 = puVar12 + -6;
      (**(code **)*puVar12)(puVar12);
    }
    local_120 = puVar10;
    FUN_71001b1870((long)local_128);
  }
  FUN_71001d1590(plVar8 + 1);
  uVar3 = (**(code **)(*(long *)*plVar8 + 0x380))((long *)*plVar8,plVar8 + 1,&local_110);
  if ((uVar3 & 1) != 0) {
    FUN_710171b150(&local_110);
    local_110 = &PTR_FUN_710509e1f0;
    local_108 = FUN_7101734ec0;
    local_100 = 0;
    local_f8 = param_1;
    local_f0 = &local_110;
    FUN_71017303e0((long *)&local_110,(long *)(param_1 + 0x90));
    if (&local_110 == local_f0) {
      pcVar7 = (code *)(*local_f0)[4];
    }
    else {
      if (local_f0 == (undefined ***)0x0) {
        return 0;
      }
      pcVar7 = (code *)(*local_f0)[5];
    }
    (*pcVar7)();
    return 0;
  }
  local_128 = (undefined8 *)plVar8[0xc];
  local_120 = (undefined8 *)plVar8[0xd];
  local_118 = (undefined8 *)plVar8[0xe];
  FUN_710170cea0(&local_158,(uint *)&local_128,1);
  plVar8[0x1a] = CONCAT71(uStack_14f,local_150);
  plVar8[0x1b] = (long)local_148;
  plVar8[0x19] = (long)local_158;
  FUN_710171b150(&local_110);
  return 2;
}

