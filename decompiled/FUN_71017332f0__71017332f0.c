// addr:      71017332f0
// offset:    0x17332f0
// name:      FUN_71017332f0
// mangled:   
// signature: undefined8 __cdecl FUN_71017332f0(undefined8 * param_1, long param_2)


/* WARNING: Type propagation algorithm not settling */

undefined8 FUN_71017332f0(undefined8 *param_1,long param_2)

{
  bool bVar1;
  int iVar2;
  ushort uVar3;
  undefined8 *puVar4;
  uint uVar5;
  long ******pppppplVar6;
  ulong uVar7;
  long ******pppppplVar8;
  long *******ppppppplVar9;
  undefined8 **ppuVar10;
  code *pcVar11;
  undefined8 **ppuVar12;
  undefined8 *puVar13;
  long lVar14;
  long *plVar15;
  undefined8 *puVar16;
  long *plVar17;
  long ******pppppplVar18;
  long *plVar19;
  long *******ppppppplVar20;
  undefined8 **ppuVar21;
  long *******ppppppplVar22;
  int local_10c;
  long *******local_108;
  long *******local_100;
  long local_f8;
  undefined **local_f0;
  code *local_e8;
  undefined8 **local_e0;
  undefined8 *local_d8;
  undefined ***local_d0;
  undefined1 local_c8;
  undefined8 local_c0;
  undefined8 *local_b0;
  undefined8 *local_a8;
  undefined8 *puStack_a0;
  undefined **local_98;
  undefined1 local_90;
  undefined8 *local_88;
  undefined8 *local_80;
  undefined8 uStack_78;
  
  plVar17 = *(long **)(param_2 + 0x10);
  if (*plVar17 == 0) {
    return 2;
  }
  lVar14 = param_1[4];
  local_90 = 0;
  local_88 = (undefined8 *)0x0;
  local_80 = (undefined8 *)0x0;
  uStack_78 = 0;
  local_98 = &PTR_FUN_710509d838;
  local_b0 = (undefined8 *)0x0;
  local_a8 = (undefined8 *)0x0;
  puStack_a0 = (undefined8 *)0x0;
  if ((*(ulong *)(lVar14 + 0x1908) & 0x7ffffffffffffff) != 0) {
    puVar16 = (undefined8 *)(lVar14 + 8);
    do {
      local_e8 = (code *)((ulong)local_e8 & 0xffffffffffffff00);
      local_c8 = 0;
      local_f0 = &PTR_FUN_710509d858;
      local_d8 = (undefined8 *)0x0;
      local_d0 = (undefined ***)0x0;
      local_c0 = 0;
      local_100 = (long *******)0x0;
      local_f8 = 0;
      iVar2 = *(int *)(puVar16 + 1);
      local_108 = (long *******)&local_100;
      local_e0 = &local_d8;
      pppppplVar6 = (long ******)FUN_71001b1820(0x58);
      pppppplVar18 = pppppplVar6 + 4;
      *pppppplVar18 = (long *****)&PTR_FUN_710509cc08;
      *(undefined1 *)(pppppplVar6 + 5) = 0;
      pppppplVar6[7] = (long *****)(pppppplVar6 + 5);
      pppppplVar6[8] = (long *****)0x10;
      FUN_71001b47e0((long)pppppplVar18,"action_type",-1);
      FUN_71001b78f0((long *)(pppppplVar6 + 9),iVar2);
      ppppppplVar20 = (long *******)&local_100;
      ppppppplVar22 = (long *******)&local_100;
      ppppppplVar9 = local_100;
      while (ppppppplVar9 != (long *******)0x0) {
        while( true ) {
          ppppppplVar22 = ppppppplVar9;
          uVar5 = FUN_71001b4e80((long)pppppplVar18,(long)(ppppppplVar22 + 4));
          if ((uVar5 & 1) == 0) break;
          ppppppplVar20 = ppppppplVar22;
          ppppppplVar9 = (long *******)*ppppppplVar22;
          if ((long *******)*ppppppplVar22 == (long *******)0x0) {
            pppppplVar8 = *ppppppplVar22;
            goto joined_r0x007101733464;
          }
        }
        uVar5 = FUN_71001b4e80((long)(ppppppplVar22 + 4),(long)pppppplVar18);
        if ((uVar5 & 1) == 0) break;
        ppppppplVar20 = ppppppplVar22 + 1;
        ppppppplVar9 = (long *******)*ppppppplVar20;
      }
      pppppplVar8 = *ppppppplVar20;
joined_r0x007101733464:
      if (pppppplVar8 == (long ******)0x0) {
        *pppppplVar6 = (long *****)0x0;
        pppppplVar6[1] = (long *****)0x0;
        pppppplVar6[2] = (long *****)ppppppplVar22;
        *ppppppplVar20 = pppppplVar6;
        if ((long *******)*local_108 != (long *******)0x0) {
          pppppplVar6 = *ppppppplVar20;
          local_108 = (long *******)*local_108;
        }
        std::__tree_balance_after_insert<std::__tree_node_base<void*>*>
                  ((long *)local_100,(long *)pppppplVar6);
        local_f8 = local_f8 + 1;
      }
      else if (pppppplVar6 != (long ******)0x0) {
        FUN_71001b78a0((long *)(pppppplVar6 + 9));
        pppppplVar6[4] = (long *****)&PTR_FUN_710509cc08;
        FUN_71001b4910((long)pppppplVar18);
        FUN_71001b1870((long)pppppplVar6);
      }
      uVar5 = *(uint *)(puVar16 + 1);
      if (uVar5 == 6) {
        pppppplVar6 = (long ******)FUN_71001b1820(0x58);
        pppppplVar18 = pppppplVar6 + 4;
        *pppppplVar18 = (long *****)&PTR_FUN_710509cc08;
        *(undefined1 *)(pppppplVar6 + 5) = 0;
        pppppplVar6[7] = (long *****)(pppppplVar6 + 5);
        pppppplVar6[8] = (long *****)0x10;
        FUN_71001b47e0((long)pppppplVar18,"play_time",-1);
        FUN_71001b7910((ulong *)(pppppplVar6 + 9),*(uint *)((long)puVar16 + 0x1c));
        ppppppplVar20 = (long *******)&local_100;
        ppppppplVar22 = (long *******)&local_100;
        ppppppplVar9 = local_100;
        while (ppppppplVar9 != (long *******)0x0) {
          while( true ) {
            ppppppplVar22 = ppppppplVar9;
            uVar5 = FUN_71001b4e80((long)pppppplVar18,(long)(ppppppplVar22 + 4));
            if ((uVar5 & 1) == 0) break;
            ppppppplVar20 = ppppppplVar22;
            ppppppplVar9 = (long *******)*ppppppplVar22;
            if ((long *******)*ppppppplVar22 == (long *******)0x0) {
              pppppplVar8 = *ppppppplVar22;
              goto joined_r0x0071017335a0;
            }
          }
          uVar5 = FUN_71001b4e80((long)(ppppppplVar22 + 4),(long)pppppplVar18);
          if ((uVar5 & 1) == 0) break;
          ppppppplVar20 = ppppppplVar22 + 1;
          ppppppplVar9 = (long *******)*ppppppplVar20;
        }
        pppppplVar8 = *ppppppplVar20;
joined_r0x0071017335a0:
        if (pppppplVar8 == (long ******)0x0) {
          *pppppplVar6 = (long *****)0x0;
          pppppplVar6[1] = (long *****)0x0;
          pppppplVar6[2] = (long *****)ppppppplVar22;
          *ppppppplVar20 = pppppplVar6;
          if ((long *******)*local_108 != (long *******)0x0) {
            pppppplVar6 = *ppppppplVar20;
            local_108 = (long *******)*local_108;
          }
          std::__tree_balance_after_insert<std::__tree_node_base<void*>*>
                    ((long *)local_100,(long *)pppppplVar6);
          local_f8 = local_f8 + 1;
        }
        else if (pppppplVar6 != (long ******)0x0) {
          FUN_71001b78a0((long *)(pppppplVar6 + 9));
          pppppplVar6[4] = (long *****)&PTR_FUN_710509cc08;
          FUN_71001b4910((long)pppppplVar18);
          FUN_71001b1870((long)pppppplVar6);
        }
        uVar5 = *(uint *)(puVar16 + 1);
      }
      if (uVar5 < 7) {
        local_10c = *(int *)((long)puVar16 + 0xc);
        FUN_7101718040((long *)&local_108,"list_page_type",&local_10c);
        local_10c = *(int *)(puVar16 + 2);
        FUN_7101718040((long *)&local_108,"thumbnail_size",&local_10c);
        if ((*(int *)((long)puVar16 + 0xc) == 7) || (*(int *)((long)puVar16 + 0xc) == 0)) {
          uVar3 = *(ushort *)((long)puVar16 + 0x14);
          pppppplVar6 = (long ******)FUN_71001b1820(0x58);
          pppppplVar18 = pppppplVar6 + 4;
          *pppppplVar18 = (long *****)&PTR_FUN_710509cc08;
          *(undefined1 *)(pppppplVar6 + 5) = 0;
          pppppplVar6[7] = (long *****)(pppppplVar6 + 5);
          pppppplVar6[8] = (long *****)0x10;
          FUN_71001b47e0((long)pppppplVar18,"alg",-1);
          FUN_71001b7910((ulong *)(pppppplVar6 + 9),(uint)uVar3);
          ppppppplVar20 = (long *******)&local_100;
          ppppppplVar22 = (long *******)&local_100;
          ppppppplVar9 = local_100;
          while (ppppppplVar9 != (long *******)0x0) {
            while( true ) {
              ppppppplVar22 = ppppppplVar9;
              uVar5 = FUN_71001b4e80((long)pppppplVar18,(long)(ppppppplVar22 + 4));
              if ((uVar5 & 1) == 0) break;
              ppppppplVar20 = ppppppplVar22;
              ppppppplVar9 = (long *******)*ppppppplVar22;
              if ((long *******)*ppppppplVar22 == (long *******)0x0) {
                pppppplVar8 = *ppppppplVar22;
                goto joined_r0x007101733748;
              }
            }
            uVar5 = FUN_71001b4e80((long)(ppppppplVar22 + 4),(long)pppppplVar18);
            if ((uVar5 & 1) == 0) break;
            ppppppplVar20 = ppppppplVar22 + 1;
            ppppppplVar9 = (long *******)*ppppppplVar20;
          }
          pppppplVar8 = *ppppppplVar20;
joined_r0x007101733748:
          if (pppppplVar8 == (long ******)0x0) {
            *pppppplVar6 = (long *****)0x0;
            pppppplVar6[1] = (long *****)0x0;
            pppppplVar6[2] = (long *****)ppppppplVar22;
            *ppppppplVar20 = pppppplVar6;
            if ((long *******)*local_108 != (long *******)0x0) {
              pppppplVar6 = *ppppppplVar20;
              local_108 = (long *******)*local_108;
            }
            std::__tree_balance_after_insert<std::__tree_node_base<void*>*>
                      ((long *)local_100,(long *)pppppplVar6);
            local_f8 = local_f8 + 1;
          }
          else if (pppppplVar6 != (long ******)0x0) {
            FUN_71001b78a0((long *)(pppppplVar6 + 9));
            pppppplVar6[4] = (long *****)&PTR_FUN_710509cc08;
            FUN_71001b4910((long)pppppplVar18);
            FUN_71001b1870((long)pppppplVar6);
          }
        }
      }
      else if (uVar5 == 0xb) {
        FUN_710170ecb0((long *)&local_108,"play_count",(uint *)(puVar16 + 3));
      }
      local_c0 = *puVar16;
      FUN_710170dcd0((long *)&local_e0,(long *)local_108,(long *)&local_100);
      puVar4 = local_a8;
      if (local_a8 == puStack_a0) {
        FUN_7101718280((long *)&local_b0,(long)&local_f0);
      }
      else {
        *local_a8 = &PTR_FUN_710509d878;
        plVar15 = local_a8 + 3;
        *plVar15 = 0;
        *(undefined1 *)(local_a8 + 1) = local_e8._0_1_;
        local_a8[4] = 0;
        local_a8[2] = plVar15;
        if (local_e0 != &local_d8) {
          plVar19 = local_a8 + 2;
          ppuVar21 = local_e0;
          do {
            while( true ) {
              FUN_71017181b0(plVar19,plVar15,(long)(ppuVar21 + 4),(long)(ppuVar21 + 4));
              ppuVar10 = (undefined8 **)ppuVar21[1];
              if ((undefined8 **)ppuVar21[1] == (undefined8 **)0x0) break;
              do {
                ppuVar21 = ppuVar10;
                ppuVar10 = (undefined8 **)*ppuVar21;
              } while ((undefined8 **)*ppuVar21 != (undefined8 **)0x0);
LAB_710173386c:
              if (ppuVar21 == &local_d8) goto LAB_7101733884;
            }
            ppuVar10 = ppuVar21 + 2;
            ppuVar12 = (undefined8 **)*ppuVar10;
            if ((undefined8 **)*ppuVar12 != ppuVar21) {
              do {
                puVar13 = *ppuVar10;
                ppuVar10 = (undefined8 **)(puVar13 + 2);
                ppuVar21 = (undefined8 **)*ppuVar10;
              } while (*ppuVar21 != puVar13);
              goto LAB_710173386c;
            }
            ppuVar21 = ppuVar12;
          } while (ppuVar12 != &local_d8);
        }
LAB_7101733884:
        *puVar4 = &PTR_FUN_710509d898;
        *(undefined1 *)(puVar4 + 5) = local_c8;
        puVar4[6] = local_c0;
        *puVar4 = &PTR_FUN_710509d858;
        local_a8 = local_a8 + 7;
      }
      FUN_710170df50(&local_108,local_100);
      local_f0 = &PTR_FUN_710509d878;
      FUN_710170df50(&local_e0,local_d8);
      puVar16 = puVar16 + 4;
    } while (puVar16 != (undefined8 *)(lVar14 + 8) + *(long *)(lVar14 + 0x1908) * 4);
  }
  FUN_7101717cb0((long *)&local_88,(long)local_b0,(long)local_a8);
  FUN_71001d1590(plVar17 + 1);
  uVar7 = (**(code **)(*(long *)*plVar17 + 0x378))((long *)*plVar17,plVar17 + 1,&local_98);
  bVar1 = (uVar7 & 1) == 0;
  if (bVar1) {
    local_108 = (long *******)plVar17[0xc];
    local_100 = (long *******)plVar17[0xd];
    local_f8 = plVar17[0xe];
    FUN_710170cea0(&local_f0,(uint *)&local_108,1);
    plVar17[0x1a] = (long)local_e8;
    plVar17[0x1b] = (long)local_e0;
    plVar17[0x19] = (long)local_f0;
  }
  puVar4 = local_b0;
  puVar16 = local_a8;
  if (local_b0 != (undefined8 *)0x0) {
    while (puVar16 != puVar4) {
      puVar16 = puVar16 + -7;
      (**(code **)*puVar16)(puVar16);
    }
    local_a8 = puVar4;
    FUN_71001b1870((long)local_b0);
  }
  puVar4 = local_88;
  local_98 = &PTR_FUN_710509d8b8;
  puVar16 = local_80;
  if (local_88 != (undefined8 *)0x0) {
    while (puVar16 != puVar4) {
      puVar16 = puVar16 + -7;
      (**(code **)*puVar16)(puVar16);
    }
    local_80 = puVar4;
    FUN_71001b1870((long)local_88);
  }
  if (!bVar1) {
    local_f0 = &PTR_FUN_710509e1f0;
    local_e8 = FUN_7101734ec0;
    local_e0 = (undefined8 **)0x0;
    local_d8 = param_1;
    local_d0 = &local_f0;
    FUN_71017303e0((long *)&local_f0,param_1 + 0x12);
    if (&local_f0 == local_d0) {
      pcVar11 = (code *)(*local_d0)[4];
    }
    else {
      if (local_d0 == (undefined ***)0x0) {
        return 0;
      }
      pcVar11 = (code *)(*local_d0)[5];
    }
    (*pcVar11)();
    return 0;
  }
  return 2;
}

