// addr:      7101d6e660
// offset:    0x1d6e660
// name:      FUN_7101d6e660
// mangled:   
// signature: undefined __cdecl FUN_7101d6e660(undefined8 * param_1)


/* WARNING: Type propagation algorithm not settling */

void FUN_7101d6e660(undefined8 *param_1)

{
  uint *puVar1;
  int iVar2;
  long ***ppplVar3;
  byte bVar4;
  char cVar5;
  ulong uVar6;
  long ***ppplVar7;
  int iVar8;
  bool bVar9;
  int iVar10;
  ulong uVar11;
  ulong *puVar12;
  long ***ppplVar13;
  ulong *puVar14;
  ulong *puVar15;
  undefined8 *puVar16;
  long *plVar17;
  ulong uVar18;
  ulong uVar19;
  undefined8 uVar20;
  long ****pppplVar21;
  byte ****ppppbVar22;
  undefined1 **ppuVar23;
  long ****in_x4;
  undefined8 in_x5;
  undefined8 in_x6;
  undefined8 in_x7;
  uint uVar24;
  uint uVar25;
  char *pcVar26;
  undefined1 *puVar27;
  ushort uVar28;
  uint uVar29;
  char *pcVar30;
  ulong uVar31;
  long **pplVar32;
  ulong uVar33;
  byte *pbVar34;
  int iVar35;
  long lVar36;
  ulong uVar37;
  ulong uVar38;
  long lVar39;
  long **__src;
  undefined8 *puVar40;
  long lVar41;
  uint uVar42;
  long ***ppplVar43;
  undefined1 auVar44 [16];
  long ***local_3c8;
  long ***local_3c0;
  undefined8 uStack_3b8;
  undefined1 local_3b0;
  undefined7 uStack_3af;
  undefined8 local_3a8;
  undefined1 local_3a0;
  char local_38b;
  undefined1 *apuStack_380 [4];
  undefined8 local_360;
  undefined1 local_358;
  ulong local_318;
  undefined8 uStack_310;
  undefined8 local_308;
  undefined8 uStack_300;
  undefined8 local_2f8;
  undefined8 uStack_2f0;
  undefined8 local_2e8;
  undefined8 uStack_2e0;
  ulong *local_2d8;
  undefined4 local_2d0;
  undefined4 local_2c8;
  ulong local_278;
  undefined8 local_270;
  undefined8 local_268;
  undefined8 uStack_260;
  undefined8 local_258;
  undefined8 uStack_250;
  undefined8 local_248;
  undefined8 uStack_240;
  ulong *local_238;
  uint local_230;
  uint local_228;
  undefined4 local_224;
  byte local_220 [64];
  uint auStack_1e0 [2];
  byte abStack_1d8 [64];
  uint auStack_198 [2];
  byte local_190 [64];
  uint local_150;
  undefined4 local_14c;
  byte local_148 [64];
  uint local_108 [2];
  byte local_100 [64];
  undefined **local_c0;
  undefined8 local_b8;
  ulong local_78;
  undefined8 local_70;
  undefined8 local_68;
  long ***local_60;
  undefined4 local_54;
  
  uVar42 = *(uint *)(param_1 + 0x52);
  iVar35 = *(int *)((long)param_1 + 0x2ac);
  uVar18 = (ulong)iVar35;
  uVar24 = *(uint *)(param_1 + 0x56);
  ppppbVar22 = (byte ****)(ulong)uVar24;
  iVar10 = 0;
  plVar17 = (long *)*param_1;
  switch(uVar42) {
  case 0:
  case 4:
    uVar11 = (plVar17[1] - *plVar17 >> 4) * -0x5555555555555555;
    if (uVar18 <= uVar11 && uVar11 - uVar18 != 0) {
      lVar39 = *plVar17 + uVar18 * 0x30;
      iVar10 = (int)((ulong)(*(long *)(lVar39 + 0x10) - *(long *)(lVar39 + 8)) >> 3) * -0x55555555;
      goto switchD_7101d6e6b0_caseD_3;
    }
    iVar10 = 0;
    break;
  case 1:
    uVar11 = (plVar17[4] - plVar17[3] >> 3) * 0x2e8ba2e8ba2e8ba3;
    if (uVar18 <= uVar11 && uVar11 - uVar18 != 0) {
      lVar39 = plVar17[3] + uVar18 * 0x58;
      iVar10 = (int)((ulong)(*(long *)(lVar39 + 0x40) - *(long *)(lVar39 + 0x38)) >> 3) *
               -0x55555555;
      goto joined_r0x007101d6e798;
    }
    if (0x7fffffff < uVar24) goto LAB_7101d6e79c;
    goto LAB_7101d6e7e8;
  case 2:
    uVar11 = (plVar17[7] - plVar17[6] >> 3) * -0x70a3d70a3d70a3d7;
    if (uVar11 < uVar18 || uVar11 - uVar18 == 0) {
      iVar10 = 0;
    }
    else {
      lVar39 = plVar17[6] + uVar18 * 200;
      iVar10 = (int)((ulong)(*(long *)(lVar39 + 0xb0) - *(long *)(lVar39 + 0xa8)) >> 4);
    }
    lVar39 = *(long *)param_1[0x38];
    goto joined_r0x007101d6e928;
  default:
switchD_7101d6e6b0_caseD_3:
  }
  if (1 < uVar42) {
    if (uVar42 == 2) {
      lVar39 = *(long *)param_1[0x38];
joined_r0x007101d6e928:
      if ((iVar10 <= (int)uVar24) ||
         ((*(int *)(param_1 + 0x54) == 0 && (*(int *)((long)param_1 + 0x29c) == 0)))) {
        lVar39 = *(long *)(lVar39 + 0x10);
        pcVar30 = "voi_source_off";
        if (*(char *)((long)param_1 + 0x35d) != '\0') {
          FUN_7103778300(0x3f800000,lVar39,0x71043adb23);
          *(undefined1 *)((long)param_1 + 0x35d) = 0;
          return;
        }
        goto LAB_7101d6e950;
      }
      auVar44 = FUN_7101d884a0(plVar17 + 6,iVar35,uVar24);
      lVar41 = *(long *)(DAT_710532f730 + 8);
      FUN_7103318150(&local_3c8,*(long **)(DAT_710532f8d8 + 8),auVar44._0_8_);
      lVar41 = *(long *)(lVar41 + 0x288);
      uVar18 = *(ulong *)(lVar41 + 0x50);
      if (uVar18 != 0) {
        uVar19 = CONCAT71(uStack_3af,local_3b0);
        uVar33 = uVar18 - 1;
        uVar11 = uVar33 & uVar18;
        uVar31 = uVar19 & 0xffffffffff;
        if (uVar11 == 0) {
          uVar37 = uVar33 & uVar31;
        }
        else {
          uVar37 = uVar31;
          if (uVar18 <= uVar31) {
            uVar37 = 0;
            if (uVar18 != 0) {
              uVar37 = uVar31 / uVar18;
            }
            uVar37 = uVar31 - uVar37 * uVar18;
          }
        }
        lVar36 = *(long *)(lVar41 + 0x48);
        plVar17 = *(long **)(lVar36 + uVar37 * 8);
        if ((plVar17 != (long *)0x0) && (plVar17 = (long *)*plVar17, plVar17 != (long *)0x0)) {
          uVar42 = 0xffffffff;
          if (uVar11 == 0) {
            do {
              uVar38 = plVar17[1];
              if (uVar31 != uVar38 && (uVar38 & uVar33) != uVar37) break;
              if ((uVar31 == uVar38) && (((plVar17[2] ^ uVar19) & 0xffffffffff) == 0))
              goto LAB_7101d6f390;
              plVar17 = (long *)*plVar17;
            } while (plVar17 != (long *)0x0);
          }
          else {
            do {
              uVar38 = plVar17[1];
              if (uVar31 == uVar38) {
                if (((plVar17[2] ^ uVar19) & 0xffffffffff) == 0) goto LAB_7101d6f390;
              }
              else {
                if (uVar18 <= uVar38) {
                  uVar6 = 0;
                  if (uVar18 != 0) {
                    uVar6 = uVar38 / uVar18;
                  }
                  uVar38 = uVar38 - uVar6 * uVar18;
                }
                if (uVar38 != uVar37) break;
              }
              plVar17 = (long *)*plVar17;
            } while (plVar17 != (long *)0x0);
          }
          goto LAB_7101d6edc8;
        }
      }
      uVar42 = 0xffffffff;
      goto LAB_7101d6edc8;
    }
    if (uVar42 != 4) {
      return;
    }
  }
joined_r0x007101d6e798:
  if ((int)uVar24 < iVar10) {
LAB_7101d6e79c:
    if ((*(int *)(param_1 + 0x54) != 0) || (*(int *)((long)param_1 + 0x29c) != 0)) {
      if (uVar42 == 4) {
LAB_7101d6e7c8:
        FUN_7101d88390(&local_78,plVar17,iVar35,uVar24);
      }
      else if (uVar42 == 1) {
        FUN_7101d88410(&local_78,plVar17 + 3,iVar35,uVar24);
      }
      else {
        if (uVar42 == 0) goto LAB_7101d6e7c8;
        local_70 = 0;
        local_78 = 0xd9ffff0000000000;
        local_68 = 0;
      }
      uVar11 = local_78;
      lVar39 = *(long *)(DAT_710532f730 + 8);
      uVar19 = local_78;
      FUN_71032570e0((uint *)&local_c0,*(long *)(lVar39 + 0x278),local_78);
      local_150 = 0;
      for (uVar18 = 0; *(byte *)((long)&local_b8 + uVar18) != 0; uVar18 = uVar18 + 2) {
        local_148[uVar18] = *(byte *)((long)&local_b8 + uVar18);
        if (0x3e < (int)uVar18 + 1U) {
          uVar18 = (ulong)((int)uVar18 + 1);
          break;
        }
        bVar4 = *(byte *)((long)&local_b8 + uVar18 + 1);
        if (bVar4 == 0) {
          uVar18 = uVar18 + 1;
          break;
        }
        local_148[uVar18 + 1] = bVar4;
      }
      uVar42 = 0x811c9dc5;
      local_148[uVar18 & 0xffffffff] = 0;
      local_14c = (int)uVar18;
      uVar24 = (uint)local_148[0];
      local_150 = uVar42;
      if (local_148[0] != 0) {
        pbVar34 = local_148;
        do {
          pbVar34 = pbVar34 + 1;
          local_150 = local_150 * 0x89 ^ uVar24;
          uVar24 = (uint)*pbVar34;
        } while (uVar24 != 0);
      }
      FUN_71003a4ca0(local_108,"bgm_title_%s",local_148,uVar19,ppppbVar22,in_x4,in_x5,in_x6,in_x7);
      uVar11 = FUN_710325dd40(*(long *)(lVar39 + 0x278),uVar11);
      FUN_710327c2f0(auStack_198,lVar39 + 0x2b0,uVar11,ppppbVar22,in_x4,in_x5,in_x6,in_x7);
      local_228 = 0;
      for (uVar18 = 0; *(byte *)((long)&local_b8 + uVar18) != 0; uVar18 = uVar18 + 2) {
        local_220[uVar18] = *(byte *)((long)&local_b8 + uVar18);
        if (0x3e < (int)uVar18 + 1U) {
          uVar18 = (ulong)((int)uVar18 + 1);
          break;
        }
        bVar4 = *(byte *)((long)&local_b8 + uVar18 + 1);
        if (bVar4 == 0) {
          uVar18 = uVar18 + 1;
          break;
        }
        local_220[uVar18 + 1] = bVar4;
      }
      local_220[uVar18 & 0xffffffff] = 0;
      local_224 = (int)uVar18;
      uVar24 = (uint)local_220[0];
      local_228 = uVar42;
      if (local_220[0] != 0) {
        pbVar34 = local_220;
        do {
          pbVar34 = pbVar34 + 1;
          local_228 = local_228 * 0x89 ^ uVar24;
          uVar24 = (uint)*pbVar34;
        } while (uVar24 != 0);
      }
      FUN_71003a4ca0(auStack_1e0,"bgm_author_%s",local_220,uVar11,ppppbVar22,in_x4,in_x5,in_x6,in_x7
                    );
      FUN_7103776910(&local_3c8,(long)(param_1 + 0x43),(long ****)"set_txt_main",uVar11,ppppbVar22,
                     in_x4,in_x5,in_x6,in_x7);
      uVar20 = 0;
      FUN_710377a750((long)&local_3c8,local_100,0,ppppbVar22,in_x4,in_x5,in_x6,in_x7);
      ppplVar3 = local_3c0;
      local_3c8 = (long ***)&PTR_FUN_710523d9a8;
      local_3c0 = (long ***)0x0;
      if (ppplVar3 != (long ***)0x0) {
        FUN_710392eb40((ulong)ppplVar3);
      }
      FUN_7103776910(&local_3c8,(long)(param_1 + 0x45),(long ****)"set_txt_main",uVar20,ppppbVar22,
                     in_x4,in_x5,in_x6,in_x7);
      pppplVar21 = (long ****)0x0;
      FUN_710377a750((long)&local_3c8,local_190,0,ppppbVar22,in_x4,in_x5,in_x6,in_x7);
      ppplVar3 = local_3c0;
      local_3c8 = (long ***)&PTR_FUN_710523d9a8;
      local_3c0 = (long ***)0x0;
      if (ppplVar3 != (long ***)0x0) {
        FUN_710392eb40((ulong)ppplVar3);
      }
      local_238 = &local_278;
      local_248 = 0;
      uStack_240 = 0;
      local_258 = 0;
      uStack_250 = 0;
      local_230 = 0;
      local_268 = 0;
      uStack_260 = 0;
      local_278 = 0;
      local_270 = 0;
      bVar9 = FUN_71037a4570((long *)*DAT_710593bc60,abStack_1d8);
      if (bVar9) {
        local_3c8 = (long ***)0x0;
        local_3c0 = (long ***)0x0;
        uStack_3b8 = 0;
        FUN_71037a7e90((ulong *)&local_3c8,abStack_1d8,pppplVar21,ppppbVar22,in_x4,in_x5,in_x6,in_x7
                      );
        if (local_3c0 == local_3c8) {
                    /* WARNING: Subroutine does not return */
          std::__vector_base_common<true>::__throw_out_of_range();
        }
        __src = local_3c8[8];
        uVar24 = *(uint *)(local_3c8 + 9);
        uVar18 = (ulong)uVar24;
        if ((&local_278 != local_238) && (local_238 != (ulong *)0x0)) {
          FUN_710392eb40((ulong)local_238);
        }
        local_278 = local_278 & 0xffffffffffff0000;
        local_230 = 0;
        local_238 = &local_278;
        if (__src != (long **)0x0) {
          puVar12 = &local_278;
          if ((int)uVar24 < 0) {
            uVar28 = *(ushort *)__src;
            if (uVar28 != 0) {
              uVar24 = 0;
              uVar18 = 0;
              pplVar32 = __src;
              do {
                if ((uVar28 | 1) == 0xf) {
                  if (uVar28 == 0xe) {
                    iVar10 = (*(ushort *)((long)pplVar32 + 6) >> 1) + 4;
                  }
                  else {
                    iVar10 = 3;
                    if (uVar28 != 0xf) {
                      iVar10 = 0;
                    }
                  }
                }
                else {
                  iVar10 = 1;
                }
                uVar24 = iVar10 + uVar24;
                pplVar32 = (long **)((long)__src + (ulong)uVar24 * 2);
                uVar18 = (ulong)(uint)(iVar10 + (int)uVar18);
                uVar28 = *(ushort *)pplVar32;
              } while (uVar28 != 0);
              goto LAB_7101d6eca4;
            }
            uVar18 = 0;
            local_230 = 0;
          }
          else {
LAB_7101d6eca4:
            local_230 = (uint)uVar18;
            if (0x1f < (int)local_230) {
              uVar11 = (ulong)(int)(local_230 + 1);
              ppplVar3 = (long ***)(uVar11 * 2);
              if (CARRY8(uVar11,uVar11)) {
                ppplVar3 = (long ***)0xffffffffffffffff;
              }
              if (ppplVar3 == (long ***)0x0) {
                ppplVar3 = (long ***)0x1;
              }
              puVar12 = (ulong *)FUN_710392e290(0x10,ppplVar3,pppplVar21,ppppbVar22,in_x4,in_x5,
                                                in_x6,in_x7);
              if (puVar12 == (ulong *)0x0) {
                if (DAT_7105332f00 != (long *)0x0) {
                  local_54 = 0;
                  pppplVar21 = &local_60;
                  local_60 = ppplVar3;
                  uVar11 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_54);
                  if (((uVar11 & 1) != 0) &&
                     (puVar12 = (ulong *)FUN_710392e290(0x10,ppplVar3,pppplVar21,ppppbVar22,in_x4,
                                                        in_x5,in_x6,in_x7), puVar12 != (ulong *)0x0)
                     ) goto LAB_7101d6ef14;
                }
                puVar12 = (ulong *)0x0;
              }
            }
          }
LAB_7101d6ef14:
          local_238 = puVar12;
          pppplVar21 = (long ****)(-(uVar18 >> 0x1f) & 0xfffffffe00000000 | uVar18 << 1);
          memcpy(local_238,__src,(size_t)pppplVar21);
          *(short *)((long)local_238 + (long)(int)local_230 * 2) = 0;
        }
        FUN_710377a960(*(long *)(param_1[0x4c] + 0x10),(ushort *)local_238,pppplVar21,ppppbVar22,
                       in_x4,in_x5,in_x6,in_x7);
        ppplVar7 = local_3c8;
        ppplVar3 = local_3c0;
        if (local_3c8 != (long ***)0x0) {
          while (ppplVar3 != ppplVar7) {
            ppplVar13 = (long ***)ppplVar3[-2];
            ppplVar43 = ppplVar3 + -10;
            if (ppplVar43 != ppplVar13 && ppplVar13 != (long ***)0x0) {
              FUN_710392eb40((ulong)ppplVar13);
            }
            *(undefined2 *)(ppplVar3 + -10) = 0;
            ppplVar3[-2] = (long **)ppplVar43;
            *(undefined4 *)(ppplVar3 + -1) = 0;
            ppplVar3 = ppplVar43;
          }
          local_3c0 = ppplVar7;
          if (local_3c8 != (long ***)0x0) {
            FUN_710392eb40((ulong)local_3c8);
          }
        }
      }
      FUN_7101d6f820(param_1,0,pppplVar21,ppppbVar22,in_x4,in_x5,in_x6,in_x7);
      pppplVar21 = (long ****)&DAT_00000108;
      memset(&local_3c8,0,0x108);
      local_3c0 = (long ***)0xd9ffff0000000000;
      uStack_3b8 = 0;
      local_3b0 = 0;
      local_3a0 = 0;
      local_3a8 = 0;
      local_358 = 0;
      local_360 = 0;
      local_2d0 = 0;
      local_2c8 = 0;
      local_2e8 = 0;
      uStack_2e0 = 0;
      local_2f8 = 0;
      uStack_2f0 = 0;
      local_308 = 0;
      uStack_300 = 0;
      local_318 = 0;
      uStack_310 = 0;
      *(undefined1 *)(param_1 + 0x6f) = 0;
      param_1[0x6e] = 0;
      param_1[0x6d] = 0xd9ffff0000000000;
      param_1[0x6c] = local_3c8;
      if ((long ****)(param_1 + 0x6c) != &local_3c8) {
        *(undefined1 *)(param_1 + 0x71) = 0;
        *(undefined4 *)((long)param_1 + 900) = 0;
        *(undefined4 *)(param_1 + 0x70) = 0x811c9dc5;
        *(undefined1 *)(param_1 + 0x7a) = 0;
        *(undefined4 *)((long)param_1 + 0x3cc) = 0;
        *(undefined4 *)(param_1 + 0x79) = 0x811c9dc5;
      }
      puVar12 = param_1 + 0x82;
      if (puVar12 != &local_318) {
        puVar14 = (ulong *)param_1[0x8a];
        if ((puVar12 == puVar14) || (puVar14 == (ulong *)0x0)) {
          *(undefined2 *)(param_1 + 0x82) = 0;
          param_1[0x8a] = puVar12;
          *(undefined4 *)(param_1 + 0x8b) = 0;
LAB_7101d6f088:
          param_1[0x84] = local_308;
          param_1[0x85] = uStack_300;
          *puVar12 = local_318;
          param_1[0x83] = uStack_310;
          param_1[0x88] = local_2e8;
          param_1[0x89] = uStack_2e0;
          param_1[0x86] = local_2f8;
          param_1[0x87] = uStack_2f0;
        }
        else {
          local_2d8 = &local_318;
          FUN_710392eb40((ulong)puVar14);
          param_1[0x8a] = puVar12;
          *(undefined4 *)(param_1 + 0x8b) = 0;
          *(undefined2 *)(param_1 + 0x82) = 0;
          if (local_2d8 == &local_318) goto LAB_7101d6f088;
          param_1[0x8a] = local_2d8;
        }
        *(undefined4 *)(param_1 + 0x8b) = local_2d0;
        local_318 = local_318 & 0xffffffffffff0000;
      }
      uVar24 = local_230;
      puVar14 = local_238;
      local_2d0 = 0;
      *(undefined4 *)(param_1 + 0x8c) = local_2c8;
      *(undefined1 *)(param_1 + 0x6f) = (undefined1)local_68;
      param_1[0x6d] = local_78;
      param_1[0x6e] = local_70;
      if ((uint *)(param_1 + 0x70) != local_108) {
        for (uVar18 = 0; local_100[uVar18] != 0; uVar18 = uVar18 + 2) {
          *(byte *)((long)param_1 + uVar18 + 0x388) = local_100[uVar18];
          if (0x3e < (int)uVar18 + 1U) {
            uVar18 = (ulong)((int)uVar18 + 1);
            break;
          }
          if (local_100[uVar18 + 1] == 0) {
            uVar18 = uVar18 + 1;
            break;
          }
          *(byte *)((long)param_1 + uVar18 + 0x389) = local_100[uVar18 + 1];
        }
        *(undefined1 *)((long)param_1 + (uVar18 & 0xffffffff) + 0x388) = 0;
        *(int *)((long)param_1 + 900) = (int)uVar18;
        uVar25 = (uint)*(byte *)(param_1 + 0x71);
        uVar29 = uVar42;
        if (*(byte *)(param_1 + 0x71) != 0) {
          pbVar34 = (byte *)((long)param_1 + 0x389);
          do {
            uVar29 = uVar29 * 0x89 ^ uVar25;
            uVar25 = (uint)*pbVar34;
            pbVar34 = pbVar34 + 1;
          } while (uVar25 != 0);
        }
        *(uint *)(param_1 + 0x70) = uVar29;
      }
      if ((uint *)(param_1 + 0x79) != auStack_198) {
        for (uVar18 = 0; local_190[uVar18] != 0; uVar18 = uVar18 + 2) {
          *(byte *)((long)param_1 + uVar18 + 0x3d0) = local_190[uVar18];
          if (0x3e < (int)uVar18 + 1U) {
            uVar18 = (ulong)((int)uVar18 + 1);
            break;
          }
          if (local_190[uVar18 + 1] == 0) {
            uVar18 = uVar18 + 1;
            break;
          }
          *(byte *)((long)param_1 + uVar18 + 0x3d1) = local_190[uVar18 + 1];
        }
        *(undefined1 *)((long)param_1 + (uVar18 & 0xffffffff) + 0x3d0) = 0;
        uVar29 = (uint)*(byte *)(param_1 + 0x7a);
        *(int *)((long)param_1 + 0x3cc) = (int)uVar18;
        if (*(byte *)(param_1 + 0x7a) != 0) {
          pbVar34 = (byte *)((long)param_1 + 0x3d1);
          do {
            uVar42 = uVar42 * 0x89 ^ uVar29;
            uVar29 = (uint)*pbVar34;
            pbVar34 = pbVar34 + 1;
          } while (uVar29 != 0);
        }
        *(uint *)(param_1 + 0x79) = uVar42;
      }
      puVar15 = (ulong *)param_1[0x8a];
      uVar18 = (ulong)local_230;
      local_2d8 = &local_318;
      if ((puVar12 != puVar15) && (puVar15 != (ulong *)0x0)) {
        FUN_710392eb40((ulong)puVar15);
      }
      *(undefined2 *)(param_1 + 0x82) = 0;
      param_1[0x8a] = puVar12;
      *(undefined4 *)(param_1 + 0x8b) = 0;
      if (puVar14 != (ulong *)0x0) {
        if ((int)uVar24 < 0) {
          uVar28 = (ushort)*puVar14;
          if (uVar28 != 0) {
            uVar42 = 0;
            uVar18 = 0;
            puVar15 = puVar14;
            do {
              if ((uVar28 | 1) == 0xf) {
                if (uVar28 == 0xe) {
                  iVar10 = (*(ushort *)((long)puVar15 + 6) >> 1) + 4;
                }
                else {
                  iVar10 = 3;
                  if (uVar28 != 0xf) {
                    iVar10 = 0;
                  }
                }
              }
              else {
                iVar10 = 1;
              }
              uVar42 = iVar10 + uVar42;
              puVar15 = (ulong *)((long)puVar14 + (ulong)uVar42 * 2);
              uVar18 = (ulong)(uint)(iVar10 + (int)uVar18);
              uVar28 = (ushort)*puVar15;
            } while (uVar28 != 0);
            goto LAB_7101d6f290;
          }
          uVar18 = 0;
          *(undefined4 *)(param_1 + 0x8b) = 0;
        }
        else {
LAB_7101d6f290:
          iVar10 = (int)uVar18;
          *(int *)(param_1 + 0x8b) = iVar10;
          if (0x1f < iVar10) {
            uVar11 = (ulong)(iVar10 + 1);
            ppplVar3 = (long ***)(uVar11 * 2);
            if (CARRY8(uVar11,uVar11)) {
              ppplVar3 = (long ***)0xffffffffffffffff;
            }
            if (ppplVar3 == (long ***)0x0) {
              ppplVar3 = (long ***)0x1;
            }
            puVar12 = (ulong *)FUN_710392e290(0x10,ppplVar3,pppplVar21,ppppbVar22,in_x4,in_x5,in_x6,
                                              in_x7);
            if (puVar12 == (ulong *)0x0) {
              if (DAT_7105332f00 != (long *)0x0) {
                local_60 = (long ***)((ulong)local_60 & 0xffffffff00000000);
                pppplVar21 = &local_3c8;
                local_3c8 = ppplVar3;
                uVar11 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_60);
                if (((uVar11 & 1) != 0) &&
                   (puVar12 = (ulong *)FUN_710392e290(0x10,ppplVar3,pppplVar21,ppppbVar22,in_x4,
                                                      in_x5,in_x6,in_x7), puVar12 != (ulong *)0x0))
                goto LAB_7101d6f30c;
              }
              puVar12 = (ulong *)0x0;
            }
LAB_7101d6f30c:
            param_1[0x8a] = puVar12;
          }
        }
        memcpy(puVar12,puVar14,-(uVar18 >> 0x1f) & 0xfffffffe00000000 | uVar18 << 1);
        *(undefined2 *)(param_1[0x8a] + (long)*(int *)(param_1 + 0x8b) * 2) = 0;
      }
      *(undefined4 *)(param_1 + 0x8c) = 3;
      *(undefined1 *)(param_1 + 0x6c) = 1;
      puVar12 = local_238;
      if (&local_278 == local_238) {
        return;
      }
      goto joined_r0x007101d6f76c;
    }
  }
LAB_7101d6e7e8:
  lVar39 = *(long *)param_1[0x38];
  pcVar30 = "list_source_off";
  if (uVar42 != 1) {
    pcVar30 = "ser_source_off";
  }
  if (*(char *)((long)param_1 + 0x35d) == '\0') {
    FUN_7103778760(*(long *)(lVar39 + 0x10),(long)pcVar30);
  }
  else {
    FUN_7103778300(0x3f800000,*(long *)(lVar39 + 0x10),(long)pcVar30);
    *(undefined1 *)((long)param_1 + 0x35d) = 0;
  }
  FUN_7103778300(0x3f800000,*(long *)(lVar39 + 0x10),0x710435bb35);
  FUN_7103778300(0x3f800000,*(long *)(lVar39 + 0x10),0x7104291f57);
  if (*(int *)(param_1 + 0x52) != 1) {
    return;
  }
  lVar39 = *(long *)(lVar39 + 0x10);
  pcVar30 = "playlist_icon_00";
  if (*(char *)((long)param_1 + 0x35c) == '\0') {
    FUN_7103778300(0x3f800000,lVar39,0x710434a6e9);
    *(undefined1 *)((long)param_1 + 0x35c) = 1;
    return;
  }
LAB_7101d6e950:
  FUN_7103778760(lVar39,(long)pcVar30);
  return;
LAB_7101d6f390:
  if (uVar11 == 0) {
    plVar17 = *(long **)(lVar36 + (uVar33 & uVar31) * 8);
    do {
      do {
        plVar17 = (long *)*plVar17;
      } while (uVar31 != plVar17[1]);
    } while (((plVar17[2] ^ uVar19) & 0xffffffffff) != 0);
  }
  else {
    uVar11 = uVar31;
    if (uVar18 <= uVar31) {
      uVar11 = 0;
      if (uVar18 != 0) {
        uVar11 = uVar31 / uVar18;
      }
      uVar11 = uVar31 - uVar11 * uVar18;
    }
    plVar17 = *(long **)(lVar36 + uVar11 * 8);
    do {
      do {
        plVar17 = (long *)*plVar17;
      } while (uVar31 != plVar17[1]);
    } while (((plVar17[2] ^ uVar19) & 0xffffffffff) != 0);
  }
  uVar42 = *(uint *)((long)plVar17 + 0x18);
LAB_7101d6edc8:
  lVar36 = *(long *)(lVar41 + 8);
  pcVar30 = *(char **)(lVar36 + 0x20);
  if ((*pcVar30 == '\f') && (iVar10 = *(int *)(pcVar30 + 1) + -1, 0 < *(int *)(pcVar30 + 1))) {
    uVar18 = *(ulong *)(lVar41 + 0x18) & 0xffffffffff;
    iVar35 = 0;
    pbVar34 = &DAT_7104742dbb;
    do {
      iVar2 = iVar10 + iVar35;
      if (iVar2 < 0) {
        iVar2 = iVar2 + 1;
      }
      iVar2 = iVar2 >> 1;
      puVar1 = (uint *)(*(long *)(*(long *)(lVar36 + 0x18) + 0x28) + (long)*(int *)(pcVar30 + 5) +
                       (long)iVar2 * 8);
      uVar11 = *(ulong *)(*(long *)(*(long *)(lVar36 + 0x18) + 0x20) + (ulong)*puVar1 * 8);
      if (uVar11 == uVar18) {
        uVar24 = puVar1[1];
        if ((int)uVar24 < 0) goto LAB_7101d6ee5c;
        pbVar34 = (byte *)(pcVar30 + (int)uVar24);
        break;
      }
      iVar8 = iVar2 + -1;
      if (uVar11 <= uVar18) {
        iVar35 = iVar2 + 1;
        iVar8 = iVar10;
      }
      iVar10 = iVar8;
    } while (iVar35 <= iVar10);
  }
  else {
LAB_7101d6ee5c:
    pbVar34 = &DAT_7104742dbb;
  }
  if ((*pbVar34 - 0xb < 2) && (uVar42 < *(uint *)(pbVar34 + 1))) {
    if ((*pcVar30 == '\f') && (iVar10 = *(int *)(pcVar30 + 1) + -1, 0 < *(int *)(pcVar30 + 1))) {
      lVar36 = *(long *)(lVar36 + 0x18);
      iVar35 = 0;
      uVar18 = *(ulong *)(lVar41 + 0x18) & 0xffffffffff;
      pcVar26 = "";
      do {
        iVar2 = iVar10 + iVar35;
        if (iVar2 < 0) {
          iVar2 = iVar2 + 1;
        }
        iVar2 = iVar2 >> 1;
        puVar1 = (uint *)(*(long *)(lVar36 + 0x28) + (long)*(int *)(pcVar30 + 5) + (long)iVar2 * 8);
        uVar11 = *(ulong *)(*(long *)(lVar36 + 0x20) + (ulong)*puVar1 * 8);
        if (uVar11 == uVar18) {
          uVar24 = puVar1[1];
          if ((int)uVar24 < 0) goto LAB_7101d6f3e0;
          pcVar26 = pcVar30 + (int)uVar24;
          goto LAB_7101d6f3ec;
        }
        iVar8 = iVar2 + -1;
        if (uVar11 <= uVar18) {
          iVar35 = iVar2 + 1;
          iVar8 = iVar10;
        }
        iVar10 = iVar8;
      } while (iVar35 <= iVar10);
      lVar36 = 0;
    }
    else {
LAB_7101d6f3e0:
      lVar36 = 0;
      pcVar26 = "";
    }
LAB_7101d6f3ec:
    pcVar30 = "";
    lVar41 = 0;
    if ((-1 < (int)uVar42) && (*pcVar26 == '\v')) {
      if ((int)uVar42 < *(int *)(pcVar26 + 1)) {
        pcVar30 = pcVar26 + *(int *)(pcVar26 + (long)(int)uVar42 * 4 + 5);
        lVar41 = lVar36;
      }
      else {
        lVar41 = 0;
        pcVar30 = "";
      }
    }
    if ((*pcVar30 == '\f') && (iVar10 = *(int *)(pcVar30 + 1) + -1, 0 < *(int *)(pcVar30 + 1))) {
      iVar35 = 0;
      pcVar26 = "";
      do {
        iVar2 = iVar10 + iVar35;
        if (iVar2 < 0) {
          iVar2 = iVar2 + 1;
        }
        iVar2 = iVar2 >> 1;
        puVar1 = (uint *)(*(long *)(lVar41 + 0x28) + (long)*(int *)(pcVar30 + 5) + (long)iVar2 * 8);
        uVar18 = *(ulong *)(*(long *)(lVar41 + 0x20) + (ulong)*puVar1 * 8);
        if (uVar18 == 0xac08102ad) {
          uVar42 = puVar1[1];
          if ((int)uVar42 < 0) goto LAB_7101d6f4c4;
          pcVar26 = pcVar30 + (int)uVar42;
          goto LAB_7101d6f4d0;
        }
        iVar8 = iVar2 + -1;
        if (uVar18 < 0xac08102ae) {
          iVar35 = iVar2 + 1;
          iVar8 = iVar10;
        }
        iVar10 = iVar8;
      } while (iVar35 <= iVar10);
      lVar41 = 0;
    }
    else {
LAB_7101d6f4c4:
      lVar41 = 0;
      pcVar26 = "";
    }
LAB_7101d6f4d0:
    if (*pcVar26 == '\n') {
      puVar27 = (undefined1 *)(*(long *)(lVar41 + 0x28) + (long)*(int *)(pcVar26 + 1));
      if (puVar27 != (undefined1 *)0x0) goto LAB_7101d6f508;
      uVar18 = 0;
    }
    else {
      puVar27 = &DAT_7104867c2e;
LAB_7101d6f508:
      uVar18 = 0;
      while( true ) {
        cVar5 = puVar27[uVar18];
        if (cVar5 == '\0') break;
        *(char *)((long)&local_270 + uVar18) = cVar5;
        if (0x3e < (int)uVar18 + 1U) {
          uVar18 = (ulong)((int)uVar18 + 1);
          break;
        }
        cVar5 = (puVar27 + uVar18)[1];
        if (cVar5 == '\0') {
          uVar18 = uVar18 + 1;
          break;
        }
        *(char *)((long)&local_270 + uVar18 + 1) = cVar5;
        uVar18 = uVar18 + 2;
      }
    }
    *(undefined1 *)((long)&local_270 + (uVar18 & 0xffffffff)) = 0;
    uVar24 = (uint)(byte)local_270;
    uVar42 = 0x811c9dc5;
    if ((byte)local_270 != 0) {
      pbVar34 = (byte *)((long)&local_270 + 1);
      do {
        uVar42 = uVar42 * 0x89 ^ uVar24;
        uVar24 = (uint)*pbVar34;
        pbVar34 = pbVar34 + 1;
      } while (uVar24 != 0);
    }
    local_278 = CONCAT44((int)uVar18,uVar42);
  }
  else {
    local_270 = local_270 & 0xffffffffffffff00;
    local_278 = 0;
  }
  if (local_38b == '\0') {
    uVar20 = 1;
    ppuVar23 = (undefined1 **)(auVar44._8_8_ & 0xffffffff);
    FUN_7101d85d30((long)(param_1 + 0x43),(byte *)"mnu_sound_test_voice_nam",1,ppuVar23,in_x4,in_x5,
                   in_x6,in_x7);
  }
  else {
    ppuVar23 = apuStack_380;
    uVar20 = 2;
    in_x4 = (long ****)(auVar44._8_8_ & 0xffffffff);
    FUN_7101d85d30((long)(param_1 + 0x43),(byte *)"mnu_sound_test_voice_chara_voice_nam",2,ppuVar23,
                   in_x4,in_x5,in_x6,in_x7);
  }
  if (*(long *)(param_1[0x44] + 8) != 0) {
    puVar40 = *(undefined8 **)(*(long *)(param_1[0x44] + 8) + 0x78);
    if (((DAT_710593ba40 & 1) == 0) && (iVar10 = __cxa_guard_acquire(&DAT_710593ba40), iVar10 != 0))
    {
      if (((DAT_710593ba48 & 1) == 0) &&
         (iVar10 = __cxa_guard_acquire(&DAT_710593ba48), iVar10 != 0)) {
        DAT_710593ba50 = 0;
        __cxa_guard_release(&DAT_710593ba48);
      }
      DAT_710593ba58 = &DAT_710593ba50;
      __cxa_guard_release(&DAT_710593ba40);
    }
    if (puVar40 != (undefined8 *)0x0) {
      for (puVar16 = (undefined8 *)(**(code **)*puVar40)(puVar40); puVar16 != (undefined8 *)0x0;
          puVar16 = (undefined8 *)*puVar16) {
        if ((undefined8 **)puVar16 == &DAT_710593ba58) {
          lVar41 = puVar40[3];
          *(undefined4 *)(puVar40 + 0xb) = *(undefined4 *)((long)puVar40 + 0x54);
          if (lVar41 != 0) {
            *(undefined4 *)(lVar41 + 0x30) = *(undefined4 *)((long)puVar40 + 0x54);
            *(byte *)(lVar41 + 0x58) = *(byte *)(lVar41 + 0x58) | 0x10;
          }
          lVar41 = puVar40[4];
          if (lVar41 != 0) {
            *(undefined4 *)(lVar41 + 0x30) = *(undefined4 *)(puVar40 + 0xb);
            *(byte *)(lVar41 + 0x58) = *(byte *)(lVar41 + 0x58) | 0x10;
          }
          if ((long *)puVar40[5] != (long *)0x0) {
            (**(code **)(*(long *)puVar40[5] + 0x180))(0);
          }
          plVar17 = (long *)puVar40[6];
          if (plVar17 != (long *)0x0) {
            if (*(char *)((long)puVar40 + 99) == '\0') {
              (**(code **)(*plVar17 + 0x180))(0);
            }
            else {
              (**(code **)(*plVar17 + 400))();
            }
          }
          *(undefined2 *)((long)puVar40 + 100) = 0;
          break;
        }
      }
    }
  }
  *(undefined4 *)(param_1 + 0x8d) = 0;
  FUN_7103776910(&local_c0,lVar39 + 8,(long ****)"set_txt_sound_sou_04",uVar20,ppuVar23,in_x4,in_x5,
                 in_x6,in_x7);
  if ((DAT_710523d00c == 0) &&
     (bVar9 = FUN_71037a4570((long *)*DAT_710593bc60,(byte *)&local_270), bVar9)) {
    FUN_710377a280((long)&local_c0,(byte *)"mnu_sound_test_voice_actor_nam",1);
    cVar5 = *(char *)((long)param_1 + 0x35d);
  }
  else {
    if ((long *)local_b8[2] != (long *)0x0) {
      local_108[0] = 0;
      FUN_71037a2270((long *)local_b8[2],(ushort *)local_108,0,0);
    }
    cVar5 = *(char *)((long)param_1 + 0x35d);
  }
  if (cVar5 == '\0') {
    FUN_7103778300(0x3f800000,*(long *)(lVar39 + 0x10),0x71043f0cdf);
    *(undefined1 *)((long)param_1 + 0x35d) = 1;
  }
  puVar12 = local_b8;
  local_c0 = &PTR_FUN_710523d9a8;
  local_b8 = (ulong *)0x0;
joined_r0x007101d6f76c:
  if (puVar12 != (ulong *)0x0) {
    FUN_710392eb40((ulong)puVar12);
  }
  return;
}

