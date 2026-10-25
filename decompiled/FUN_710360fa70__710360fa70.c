// addr:      710360fa70
// offset:    0x360fa70
// name:      FUN_710360fa70
// mangled:   
// signature: undefined4 __cdecl FUN_710360fa70(ulong param_1, undefined8 param_2, long * * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined * * param_7, byte * param_8)


/* WARNING: Removing unreachable block (ram,0x007103610c4c) */
/* WARNING: Removing unreachable block (ram,0x00710360fd60) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4
FUN_710360fa70(ulong param_1,undefined8 param_2,long *****param_3,byte ****param_4,long ****param_5,
              undefined8 param_6,undefined **param_7,byte *param_8)

{
  void *pvVar1;
  long *****ppppplVar2;
  uint uVar3;
  char cVar4;
  uint5 uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  void *pvVar9;
  long *****ppppplVar10;
  ulong uVar11;
  long *plVar12;
  ulong *puVar13;
  long *plVar14;
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
  undefined8 extraout_x1_11;
  undefined8 extraout_x1_12;
  undefined8 extraout_x1_13;
  undefined8 extraout_x1_14;
  undefined8 extraout_x1_15;
  undefined8 extraout_x1_16;
  undefined8 extraout_x1_17;
  undefined8 extraout_x1_18;
  undefined8 extraout_x1_19;
  undefined8 extraout_x1_20;
  undefined8 extraout_x1_21;
  undefined8 extraout_x1_22;
  undefined8 extraout_x1_23;
  undefined8 extraout_x1_24;
  undefined8 extraout_x1_25;
  undefined8 extraout_x1_26;
  undefined8 extraout_x1_27;
  undefined8 extraout_x1_28;
  undefined8 extraout_x1_29;
  uint uVar15;
  ulong uVar16;
  long ****pppplVar17;
  long ****pppplVar18;
  char *pcVar19;
  ulong *puVar20;
  undefined8 *puVar21;
  undefined8 uVar22;
  long lVar23;
  long ****pppplVar24;
  byte bVar25;
  long lVar26;
  ulong extraout_x14;
  ulong extraout_x14_00;
  ulong uVar27;
  long lVar28;
  ulong uVar29;
  long lVar30;
  void *pvVar31;
  uint *puVar32;
  undefined8 *puVar33;
  long lVar34;
  long lVar35;
  long *plVar36;
  char *__s;
  long ****pppplVar37;
  long ****pppplVar38;
  long *****ppppplVar39;
  ulong uVar40;
  undefined4 uVar41;
  undefined4 local_158;
  uint local_154;
  long ****local_148;
  long *****local_140;
  long ****pppplStack_138;
  long ****local_130;
  long *****local_128;
  long ****local_120;
  undefined8 uStack_118;
  long ****local_110;
  long *****local_108;
  long ****local_100;
  long ****local_f8;
  undefined1 local_f0;
  undefined2 uStack_ef;
  undefined1 uStack_ed;
  uint uStack_ec;
  long ****local_e8;
  long ***local_e0;
  ulong local_d8;
  ulong local_d0;
  long *local_c8;
  long local_c0;
  float local_b8;
  ulong local_b0;
  ulong local_a8;
  long *local_a0;
  ulong local_98;
  float local_90;
  long ****local_88;
  long ****local_80 [2];
  
  local_a0 = (long *)0x0;
  local_98 = 0;
  local_b0 = 0;
  local_a8 = 0;
  local_90 = 1.0;
  FUN_71036124d0(&local_b0,0x100,(long ****)param_3,param_4,param_5,param_6,param_7,param_8);
  plVar14 = local_a0;
  if (local_98 != 0) {
    while (plVar14 != (long *)0x0) {
      plVar36 = (long *)*plVar14;
      if ((*(byte *)(plVar14 + 5) & 1) != 0) {
        pvVar31 = (void *)plVar14[7];
        nu::VirtualFreeHook(pvVar31);
        FUN_710392eb40((ulong)pvVar31);
      }
      if ((*(byte *)(plVar14 + 2) & 1) != 0) {
        pvVar31 = (void *)plVar14[4];
        nu::VirtualFreeHook(pvVar31);
        FUN_710392eb40((ulong)pvVar31);
      }
      FUN_710392eb40((ulong)plVar14);
      plVar14 = plVar36;
    }
    local_a0 = (long *)0x0;
    if (local_a8 != 0) {
      uVar16 = local_a8 & 3;
      if (local_a8 - 1 < 3) {
        lVar23 = 0;
      }
      else {
        lVar23 = 0;
        do {
          lVar35 = lVar23 * 8;
          lVar23 = lVar23 + 4;
          *(undefined8 *)(local_b0 + lVar35) = 0;
          *(undefined8 *)(local_b0 + lVar35 + 8) = 0;
          *(undefined8 *)(local_b0 + lVar35 + 0x10) = 0;
          *(undefined8 *)(local_b0 + lVar35 + 0x18) = 0;
        } while (local_a8 - uVar16 != lVar23);
      }
      if (uVar16 != 0) {
        lVar23 = lVar23 << 3;
        lVar35 = -uVar16;
        do {
          *(undefined8 *)(local_b0 + lVar23) = 0;
          lVar23 = lVar23 + 8;
          lVar35 = lVar35 + 1;
        } while (lVar35 != 0);
      }
    }
    local_98 = 0;
  }
  local_b8 = 1.0;
  local_c8 = (long *)0x0;
  local_c0 = 0;
  local_d8 = 0;
  local_d0 = 0;
  FUN_71035f16a0(&local_d8,0x100,(long ****)param_3,param_4,param_5,param_6,param_7,param_8);
  uVar22 = extraout_x1;
  plVar14 = local_c8;
  if (local_c0 != 0) {
    while (plVar14 != (long *)0x0) {
      plVar36 = (long *)*plVar14;
      if ((*(byte *)(plVar14 + 2) & 1) != 0) {
        pvVar31 = (void *)plVar14[4];
        nu::VirtualFreeHook(pvVar31);
        FUN_710392eb40((ulong)pvVar31);
      }
      FUN_710392eb40((ulong)plVar14);
      uVar22 = extraout_x1_00;
      plVar14 = plVar36;
    }
    local_c8 = (long *)0x0;
    if (local_d0 != 0) {
      uVar16 = local_d0 & 3;
      if (local_d0 - 1 < 3) {
        lVar23 = 0;
      }
      else {
        lVar23 = 0;
        do {
          lVar35 = lVar23 * 8;
          lVar23 = lVar23 + 4;
          *(undefined8 *)(local_d8 + lVar35) = 0;
          *(undefined8 *)(local_d8 + lVar35 + 8) = 0;
          *(undefined8 *)(local_d8 + lVar35 + 0x10) = 0;
          *(undefined8 *)(local_d8 + lVar35 + 0x18) = 0;
        } while (local_d0 - uVar16 != lVar23);
      }
      if (uVar16 != 0) {
        lVar23 = lVar23 << 3;
        lVar35 = -uVar16;
        do {
          *(undefined8 *)(local_d8 + lVar23) = 0;
          lVar23 = lVar23 + 8;
          lVar35 = lVar35 + 1;
        } while (lVar35 != 0);
      }
    }
    local_c0 = 0;
  }
  lVar35 = DAT_7105337ce8;
  lVar23 = DAT_7105334020;
  puVar32 = (uint *)0x7105233f00;
  pppplVar17 = (long ****)((ulong)&local_130 | 1);
  pppplVar18 = (long ****)((ulong)&local_110 | 1);
  pppplVar24 = (long ****)((ulong)&local_f8 | 1);
  plVar14 = (long *)(param_1 + 0x10);
  local_154 = 0;
  uVar15 = 3;
  local_158 = 1;
  do {
    if (3 < uVar15) goto LAB_7103611ac8;
    pcVar19 = *(char **)(puVar32 + 2);
    pppplVar37 = *(long *****)(puVar32 + 4);
    __s = *(char **)(puVar32 + 6);
    iVar8 = (int)*(uint5 *)(puVar32 + 8);
    uVar6 = puVar32[9];
    uVar5 = *(uint5 *)(puVar32 + 8);
    uVar3 = puVar32[10];
    switch(uVar15) {
    case 0:
      local_108 = (long *****)0x0;
      local_100 = (long ****)0x0;
      local_110 = (long ****)0x0;
      ppppplVar10 = (long *****)strlen((char *)pppplVar37);
      if ((long *****)0xffffffffffffffef < ppppplVar10) goto LAB_71036120d0;
      if (ppppplVar10 < (long *****)0x17) {
        local_110 = (long ****)CONCAT71(local_110._1_7_,(char)((int)ppppplVar10 << 1));
        pppplVar38 = pppplVar18;
        if (ppppplVar10 != (long *****)0x0) goto LAB_7103610cd0;
      }
      else {
        pppplVar38 = (long ****)((ulong)(ppppplVar10 + 2) & 0xfffffffffffffff0);
        iVar7 = FUN_710392e1f0(&local_130,0x10,pppplVar38,param_4,param_5,param_6,param_7,param_8);
        if ((iVar7 == 0xc) && (DAT_710593d2b0 != (long *)0x0)) {
          local_f8._0_1_ = (byte)pppplVar38;
          local_f8._1_7_ = (undefined7)((ulong)pppplVar38 >> 8);
          uVar16 = (**(code **)(*DAT_710593d2b0 + 0x30))(DAT_710593d2b0,&local_f8);
          if ((uVar16 & 1) != 0) {
            FUN_710392e1f0(&local_130,0x10,pppplVar38,param_4,param_5,param_6,param_7,param_8);
          }
        }
        nu::VirtualAllocHook((ulong)pppplVar38,0x10,local_130);
        local_110 = (long ****)((ulong)pppplVar38 | 1);
        local_100 = local_130;
        pppplVar38 = local_130;
        local_108 = ppppplVar10;
LAB_7103610cd0:
        param_3 = ppppplVar10;
        memcpy(pppplVar38,pppplVar37,(size_t)ppppplVar10);
      }
      *(byte *)((long)pppplVar38 + (long)ppppplVar10) = 0;
      local_f8._0_1_ = (byte)pppplVar37;
      local_f8._1_7_ = (undefined7)((ulong)pppplVar37 >> 8);
      local_f0 = (undefined1)iVar8;
      uStack_ef = (undefined2)((uint)iVar8 >> 8);
      uStack_ed = (undefined1)((uint)iVar8 >> 0x18);
      uStack_ec = local_154;
      FUN_7103550820(param_1,(long ****)&local_f8,param_3,param_4,param_5,param_6,param_7,param_8);
      if (__s != (char *)0x0) {
        pppplVar37 = pppplVar18;
        ppppplVar10 = (long *****)((ulong)local_110 >> 1 & 0x7f);
        if (((ulong)local_110 & 1) != 0) {
          pppplVar37 = local_100;
          ppppplVar10 = local_108;
        }
        uVar11 = FUN_7102677830((ulong *)pppplVar37,(ulong)ppppplVar10);
        uVar16 = local_a8;
        uVar29 = param_1;
        if (local_a8 != 0) {
          uVar40 = local_a8 - 1;
          if ((uVar40 & local_a8) == 0) {
            uVar29 = uVar40 & uVar11;
          }
          else {
            uVar29 = uVar11;
            if (local_a8 <= uVar11) {
              uVar29 = 0;
              if (local_a8 != 0) {
                uVar29 = uVar11 / local_a8;
              }
              uVar29 = uVar11 - uVar29 * local_a8;
            }
          }
          plVar36 = *(long **)(local_b0 + uVar29 * 8);
          if ((plVar36 != (long *)0x0) && (plVar36 = (long *)*plVar36, plVar36 != (long *)0x0)) {
            if ((uVar40 & local_a8) == 0) {
              if (ppppplVar10 == (long *****)0x0) {
                do {
                  if (plVar36[1] != uVar11 && (plVar36[1] & uVar40) != uVar29) break;
                  uVar27 = (ulong)(*(byte *)(plVar36 + 2) >> 1);
                  if ((*(byte *)(plVar36 + 2) & 1) != 0) {
                    uVar27 = plVar36[3];
                  }
                  if (uVar27 == 0) goto LAB_71036119dc;
                  plVar36 = (long *)*plVar36;
                } while (plVar36 != (long *)0x0);
              }
              else {
                do {
                  if (plVar36[1] != uVar11 && (plVar36[1] & uVar40) != uVar29) break;
                  bVar25 = *(byte *)(plVar36 + 2);
                  ppppplVar39 = (long *****)(ulong)(bVar25 >> 1);
                  if ((bVar25 & 1) != 0) {
                    ppppplVar39 = (long *****)plVar36[3];
                  }
                  if (ppppplVar39 == ppppplVar10) {
                    if ((bVar25 & 1) == 0) {
                      pcVar19 = (char *)((long)plVar36 + 0x11);
                      lVar34 = -(long)(ulong)(bVar25 >> 1);
                      pppplVar38 = pppplVar37;
                      while (*pcVar19 == *(char *)pppplVar38) {
                        pcVar19 = pcVar19 + 1;
                        pppplVar38 = (long ****)((long)pppplVar38 + 1);
                        lVar34 = lVar34 + 1;
                        if (lVar34 == 0) goto LAB_71036119dc;
                      }
                    }
                    else {
                      param_3 = ppppplVar10;
                      iVar8 = memcmp((void *)plVar36[4],pppplVar37,(size_t)ppppplVar10);
                      if (iVar8 == 0) goto LAB_71036119dc;
                    }
                  }
                  plVar36 = (long *)*plVar36;
                } while (plVar36 != (long *)0x0);
              }
            }
            else if (ppppplVar10 == (long *****)0x0) {
              do {
                uVar40 = plVar36[1];
                if (uVar40 != uVar11) {
                  if (local_a8 <= uVar40) {
                    uVar27 = 0;
                    if (local_a8 != 0) {
                      uVar27 = uVar40 / local_a8;
                    }
                    uVar40 = uVar40 - uVar27 * local_a8;
                  }
                  if (uVar40 != uVar29) break;
                }
                uVar40 = (ulong)(*(byte *)(plVar36 + 2) >> 1);
                if ((*(byte *)(plVar36 + 2) & 1) != 0) {
                  uVar40 = plVar36[3];
                }
                if (uVar40 == 0) goto LAB_71036119dc;
                plVar36 = (long *)*plVar36;
              } while (plVar36 != (long *)0x0);
            }
            else {
              do {
                uVar40 = plVar36[1];
                if (uVar40 != uVar11) {
                  if (uVar16 <= uVar40) {
                    uVar27 = 0;
                    if (uVar16 != 0) {
                      uVar27 = uVar40 / uVar16;
                    }
                    uVar40 = uVar40 - uVar27 * uVar16;
                  }
                  if (uVar40 != uVar29) break;
                }
                bVar25 = *(byte *)(plVar36 + 2);
                ppppplVar39 = (long *****)(ulong)(bVar25 >> 1);
                if ((bVar25 & 1) != 0) {
                  ppppplVar39 = (long *****)plVar36[3];
                }
                if (ppppplVar39 == ppppplVar10) {
                  if ((bVar25 & 1) == 0) {
                    pcVar19 = (char *)((long)plVar36 + 0x11);
                    lVar34 = -(long)(ulong)(bVar25 >> 1);
                    pppplVar38 = pppplVar37;
                    while (*pcVar19 == *(char *)pppplVar38) {
                      pcVar19 = pcVar19 + 1;
                      pppplVar38 = (long ****)((long)pppplVar38 + 1);
                      lVar34 = lVar34 + 1;
                      if (lVar34 == 0) goto LAB_71036119dc;
                    }
                  }
                  else {
                    param_3 = ppppplVar10;
                    iVar8 = memcmp((void *)plVar36[4],pppplVar37,(size_t)ppppplVar10);
                    if (iVar8 == 0) goto LAB_71036119dc;
                  }
                }
                plVar36 = (long *)*plVar36;
              } while (plVar36 != (long *)0x0);
            }
          }
        }
        plVar36 = (long *)FUN_710392e290(0x10,0x40,(long ****)param_3,param_4,param_5,param_6,
                                         param_7,param_8);
        if (plVar36 == (long *)0x0) {
          if (DAT_7105332f00 != (long *)0x0) {
            local_130 = (long ****)((ulong)local_130 & 0xffffffff00000000);
            local_f8._0_1_ = 0x40;
            local_f8._1_7_ = 0;
            param_3 = &local_f8;
            uVar40 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_130);
            if (((uVar40 & 1) != 0) &&
               (plVar36 = (long *)FUN_710392e290(0x10,0x40,(long ****)param_3,param_4,param_5,
                                                 param_6,param_7,param_8), plVar36 != (long *)0x0))
            goto LAB_71036115cc;
          }
          plVar36 = (long *)0x0;
        }
LAB_71036115cc:
        pppplVar37 = local_100;
        ppppplVar10 = local_108;
        plVar36[2] = 0;
        plVar36[3] = 0;
        plVar36[4] = 0;
        if (((ulong)local_110 & 1) == 0) {
          plVar36[3] = (long)local_108;
          plVar36[4] = (long)local_100;
          plVar36[2] = (long)local_110;
        }
        else {
          if ((long *****)0xffffffffffffffef < local_108) goto LAB_71036120d0;
          if (local_108 < (long *****)0x17) {
            pppplVar38 = (long ****)((long)plVar36 + 0x11);
            *(char *)(plVar36 + 2) = (char)((int)local_108 << 1);
            if (local_108 != (long *****)0x0) goto LAB_71036116a0;
          }
          else {
            pppplVar38 = (long ****)((ulong)(local_108 + 2) & 0xfffffffffffffff0);
            iVar8 = FUN_710392e1f0(&local_130,0x10,pppplVar38,param_4,param_5,param_6,param_7,
                                   param_8);
            if ((iVar8 == 0xc) && (DAT_710593d2b0 != (long *)0x0)) {
              local_f8._0_1_ = (byte)pppplVar38;
              local_f8._1_7_ = (undefined7)((ulong)pppplVar38 >> 8);
              uVar40 = (**(code **)(*DAT_710593d2b0 + 0x30))(DAT_710593d2b0,&local_f8);
              if ((uVar40 & 1) != 0) {
                FUN_710392e1f0(&local_130,0x10,pppplVar38,param_4,param_5,param_6,param_7,param_8);
              }
            }
            nu::VirtualAllocHook((ulong)pppplVar38,0x10,local_130);
            plVar36[2] = (ulong)pppplVar38 | 1;
            plVar36[3] = (long)ppppplVar10;
            plVar36[4] = (long)local_130;
            pppplVar38 = local_130;
LAB_71036116a0:
            param_3 = ppppplVar10;
            memcpy(pppplVar38,pppplVar37,(size_t)ppppplVar10);
          }
          *(byte *)((long)pppplVar38 + (long)ppppplVar10) = 0;
        }
        plVar36[5] = 0;
        plVar36[6] = 0;
        plVar36[7] = 0;
        ppppplVar10 = (long *****)strlen(__s);
        if ((long *****)0xffffffffffffffef < ppppplVar10) {
                    /* WARNING: Subroutine does not return */
          std::__basic_string_common<true>::__throw_length_error();
        }
        if (ppppplVar10 < (long *****)0x17) {
          pppplVar37 = (long ****)((long)plVar36 + 0x29);
          *(char *)(plVar36 + 5) = (char)((int)ppppplVar10 << 1);
          if (ppppplVar10 != (long *****)0x0) goto LAB_7103611770;
        }
        else {
          pppplVar37 = (long ****)((ulong)(ppppplVar10 + 2) & 0xfffffffffffffff0);
          iVar8 = FUN_710392e1f0(&local_130,0x10,pppplVar37,param_4,param_5,param_6,param_7,param_8)
          ;
          if ((iVar8 == 0xc) && (DAT_710593d2b0 != (long *)0x0)) {
            local_f8._0_1_ = (byte)pppplVar37;
            local_f8._1_7_ = (undefined7)((ulong)pppplVar37 >> 8);
            uVar40 = (**(code **)(*DAT_710593d2b0 + 0x30))(DAT_710593d2b0,&local_f8);
            if ((uVar40 & 1) != 0) {
              FUN_710392e1f0(&local_130,0x10,pppplVar37,param_4,param_5,param_6,param_7,param_8);
            }
          }
          nu::VirtualAllocHook((ulong)pppplVar37,0x10,local_130);
          plVar36[5] = (ulong)pppplVar37 | 1;
          plVar36[6] = (long)ppppplVar10;
          plVar36[7] = (long)local_130;
          pppplVar37 = local_130;
LAB_7103611770:
          param_3 = ppppplVar10;
          memcpy(pppplVar37,__s,(size_t)ppppplVar10);
        }
        *(byte *)((long)pppplVar37 + (long)ppppplVar10) = 0;
        *plVar36 = 0;
        plVar36[1] = uVar11;
        if ((uVar16 == 0) || (local_90 * (float)uVar16 < (float)(local_98 + 1))) {
          if (uVar16 < 3) {
            uVar29 = 1;
          }
          else {
            uVar29 = (ulong)((uVar16 - 1 & uVar16) != 0);
          }
          uVar29 = uVar29 | uVar16 << 1;
          uVar16 = (ulong)((float)(local_98 + 1) / local_90);
          if (uVar16 <= uVar29) {
            uVar16 = uVar29;
          }
          if (uVar16 - 1 == 0) {
            uVar16 = 2;
          }
          else if ((uVar16 - 1 & uVar16) != 0) {
            uVar16 = std::__next_prime(uVar16);
          }
          uVar29 = local_a8;
          if (local_a8 < uVar16) {
LAB_7103611818:
            FUN_71036124d0(&local_b0,uVar16,(long ****)param_3,param_4,param_5,param_6,param_7,
                           param_8);
          }
          else if (uVar16 < local_a8) {
            uVar40 = (ulong)((float)local_98 / local_90);
            if (local_a8 < 3 || (local_a8 - 1 & local_a8) != 0) {
              uVar40 = std::__next_prime(uVar40);
            }
            else if (1 < uVar40) {
              uVar40 = 1L << (-LZCOUNT(uVar40 - 1) & 0x3fU);
            }
            if (uVar40 <= uVar16) {
              uVar40 = uVar16;
            }
            uVar16 = uVar40;
            if (uVar40 < uVar29) goto LAB_7103611818;
          }
          uVar16 = local_a8;
          if ((local_a8 - 1 & local_a8) == 0) {
            uVar29 = local_a8 - 1 & uVar11;
          }
          else {
            uVar29 = uVar11;
            if (local_a8 <= uVar11) {
              uVar29 = 0;
              if (local_a8 != 0) {
                uVar29 = uVar11 / local_a8;
              }
              uVar29 = uVar11 - uVar29 * local_a8;
            }
          }
        }
        plVar12 = *(long **)(local_b0 + uVar29 * 8);
        if (plVar12 == (long *)0x0) {
          *plVar36 = (long)local_a0;
          *(long ***)(local_b0 + uVar29 * 8) = &local_a0;
          local_a0 = plVar36;
          if (*plVar36 != 0) {
            uVar29 = *(ulong *)(*plVar36 + 8);
            if ((uVar16 - 1 & uVar16) == 0) {
              uVar29 = uVar29 & uVar16 - 1;
            }
            else if (uVar16 <= uVar29) {
              uVar11 = 0;
              if (uVar16 != 0) {
                uVar11 = uVar29 / uVar16;
              }
              uVar29 = uVar29 - uVar11 * uVar16;
            }
            plVar12 = (long *)(local_b0 + uVar29 * 8);
            goto LAB_71036119cc;
          }
        }
        else {
          *plVar36 = *plVar12;
LAB_71036119cc:
          *plVar12 = (long)plVar36;
        }
        local_98 = local_98 + 1;
      }
LAB_71036119dc:
      plVar36 = FUN_7103550630(plVar14,(byte *)&local_110);
      uVar22 = extraout_x1_27;
      if (plVar36 == (long *)0x0) {
        local_158 = 0;
      }
      else if (((((long *)plVar36[7] == (long *)0x0) || (*(long *)plVar36[7] != plVar36[8])) ||
               (lVar34 = plVar36[6], lVar34 == 0)) ||
              ((plVar36 = *(long **)(lVar34 + 8), plVar36 == (long *)0x0 || (*plVar36 != *plVar36)))
              ) {
        local_158 = 0;
      }
      else {
        uVar15 = (uint)*(byte *)((long)puVar32 + 0x25) << 0x10 |
                 (uint)*(byte *)((long)puVar32 + 0x26) << 8 | (uint)*(byte *)((long)puVar32 + 0x27);
        if (uVar15 == 0x10101) {
          puVar21 = FUN_710361a140(*(long *)(lVar35 + 0x10),0x10101,(long ****)param_3,param_4,
                                   param_5,param_6,param_7,param_8);
          uVar22 = extraout_x1_01;
          if (puVar21 != (undefined8 *)0x0) {
            lVar30 = puVar21[10];
            plVar36 = FUN_71036120f0(local_b0,local_a8,(byte *)&local_110);
            uVar29 = local_d0;
            uVar16 = local_d8;
            ppppplVar10 = (long *****)(plVar36 + 5);
            param_3 = ppppplVar10;
            plVar12 = FUN_71036122e0(local_d8,local_d0,(byte *)ppppplVar10);
            uVar22 = extraout_x1_02;
            if (plVar12 == (long *)0x0) {
              bVar25 = *(byte *)(plVar36 + 5);
              ppppplVar39 = (long *****)(ulong)(bVar25 >> 1);
              if ((bVar25 & 1) != 0) {
                ppppplVar39 = (long *****)plVar36[6];
              }
              if (ppppplVar39 != (long *****)0x0) {
                puVar13 = (ulong *)plVar36[7];
                if ((bVar25 & 1) == 0) {
                  puVar13 = (ulong *)((long)plVar36 + 0x29);
                }
                uVar40 = FUN_7102677830(puVar13,(ulong)ppppplVar39);
                uVar11 = extraout_x14;
                if (uVar29 != 0) {
                  uVar27 = uVar29 - 1;
                  if ((uVar27 & uVar29) == 0) {
                    uVar11 = uVar27 & uVar40;
LAB_7103610090:
                    plVar12 = *(long **)(uVar16 + uVar11 * 8);
                  }
                  else {
                    uVar11 = uVar40;
                    if (uVar40 < uVar29) goto LAB_7103610090;
                    uVar11 = 0;
                    if (uVar29 != 0) {
                      uVar11 = uVar40 / uVar29;
                    }
                    uVar11 = uVar40 - uVar11 * uVar29;
                    plVar12 = *(long **)(uVar16 + uVar11 * 8);
                  }
                  if ((plVar12 != (long *)0x0) &&
                     (plVar12 = (long *)*plVar12, plVar12 != (long *)0x0)) {
                    if ((uVar27 & uVar29) == 0) {
                      do {
                        if (plVar12[1] != uVar40 && (plVar12[1] & uVar27) != uVar11) break;
                        bVar25 = *(byte *)(plVar12 + 2);
                        ppppplVar2 = (long *****)(ulong)(bVar25 >> 1);
                        if ((bVar25 & 1) != 0) {
                          ppppplVar2 = (long *****)plVar12[3];
                        }
                        if (ppppplVar2 == ppppplVar39) {
                          if ((bVar25 & 1) == 0) {
                            pcVar19 = (char *)((long)plVar12 + 0x11);
                            lVar28 = -(long)(ulong)(bVar25 >> 1);
                            puVar20 = puVar13;
                            while (*pcVar19 == (char)*puVar20) {
                              pcVar19 = pcVar19 + 1;
                              puVar20 = (ulong *)((long)puVar20 + 1);
                              lVar28 = lVar28 + 1;
                              if (lVar28 == 0) goto LAB_7103610784;
                            }
                          }
                          else {
                            param_3 = ppppplVar39;
                            iVar8 = memcmp((void *)plVar12[4],puVar13,(size_t)ppppplVar39);
                            if (iVar8 == 0) goto LAB_7103610784;
                          }
                        }
                        plVar12 = (long *)*plVar12;
                      } while (plVar12 != (long *)0x0);
                    }
                    else {
                      do {
                        uVar16 = plVar12[1];
                        if (uVar16 != uVar40) {
                          if (uVar29 <= uVar16) {
                            uVar27 = 0;
                            if (uVar29 != 0) {
                              uVar27 = uVar16 / uVar29;
                            }
                            uVar16 = uVar16 - uVar27 * uVar29;
                          }
                          if (uVar16 != uVar11) break;
                        }
                        bVar25 = *(byte *)(plVar12 + 2);
                        ppppplVar2 = (long *****)(ulong)(bVar25 >> 1);
                        if ((bVar25 & 1) != 0) {
                          ppppplVar2 = (long *****)plVar12[3];
                        }
                        if (ppppplVar2 == ppppplVar39) {
                          if ((bVar25 & 1) == 0) {
                            pcVar19 = (char *)((long)plVar12 + 0x11);
                            lVar28 = -(long)(ulong)(bVar25 >> 1);
                            puVar20 = puVar13;
                            while (*pcVar19 == (char)*puVar20) {
                              pcVar19 = pcVar19 + 1;
                              puVar20 = (ulong *)((long)puVar20 + 1);
                              lVar28 = lVar28 + 1;
                              if (lVar28 == 0) goto LAB_7103610784;
                            }
                          }
                          else {
                            param_3 = ppppplVar39;
                            iVar8 = memcmp((void *)plVar12[4],puVar13,(size_t)ppppplVar39);
                            if (iVar8 == 0) goto LAB_7103610784;
                          }
                        }
                        plVar12 = (long *)*plVar12;
                      } while (plVar12 != (long *)0x0);
                    }
                  }
                }
                plVar12 = (long *)FUN_710392e290(0x10,0x30,(long ****)param_3,param_4,param_5,
                                                 param_6,param_7,param_8);
                if (plVar12 == (long *)0x0) {
                  if (DAT_7105332f00 != (long *)0x0) {
                    local_130 = (long ****)((ulong)local_130 & 0xffffffff00000000);
                    local_f8._0_1_ = 0x30;
                    local_f8._1_7_ = 0;
                    param_3 = &local_f8;
                    uVar16 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_130);
                    if (((uVar16 & 1) != 0) &&
                       (plVar12 = (long *)FUN_710392e290(0x10,0x30,(long ****)param_3,param_4,
                                                         param_5,param_6,param_7,param_8),
                       plVar12 != (long *)0x0)) goto LAB_7103610580;
                  }
                  plVar12 = (long *)0x0;
                }
LAB_7103610580:
                plVar12[2] = 0;
                plVar12[3] = 0;
                plVar12[4] = 0;
                if (((ulong)*ppppplVar10 & 1) == 0) {
                  pppplVar37 = *ppppplVar10;
                  lVar28 = plVar36[7];
                  plVar12[3] = plVar36[6];
                  plVar12[4] = lVar28;
                  plVar12[2] = (long)pppplVar37;
                }
                else {
                  ppppplVar39 = (long *****)plVar36[6];
                  if ((long *****)0xffffffffffffffef < ppppplVar39) goto LAB_71036120d0;
                  pvVar31 = (void *)plVar36[7];
                  if (ppppplVar39 < (long *****)0x17) {
                    pppplVar37 = (long ****)((long)plVar12 + 0x11);
                    *(char *)(plVar12 + 2) = (char)((int)ppppplVar39 << 1);
                    if (ppppplVar39 != (long *****)0x0) goto LAB_7103610660;
                  }
                  else {
                    pppplVar37 = (long ****)((ulong)(ppppplVar39 + 2) & 0xfffffffffffffff0);
                    iVar8 = FUN_710392e1f0(&local_130,0x10,pppplVar37,param_4,param_5,param_6,
                                           param_7,param_8);
                    if ((iVar8 == 0xc) && (DAT_710593d2b0 != (long *)0x0)) {
                      local_f8._0_1_ = (byte)pppplVar37;
                      local_f8._1_7_ = (undefined7)((ulong)pppplVar37 >> 8);
                      uVar16 = (**(code **)(*DAT_710593d2b0 + 0x30))(DAT_710593d2b0,&local_f8);
                      if ((uVar16 & 1) != 0) {
                        FUN_710392e1f0(&local_130,0x10,pppplVar37,param_4,param_5,param_6,param_7,
                                       param_8);
                      }
                    }
                    nu::VirtualAllocHook((ulong)pppplVar37,0x10,local_130);
                    plVar12[2] = (ulong)pppplVar37 | 1;
                    plVar12[3] = (long)ppppplVar39;
                    plVar12[4] = (long)local_130;
                    pppplVar37 = local_130;
LAB_7103610660:
                    param_3 = ppppplVar39;
                    memcpy(pppplVar37,pvVar31,(size_t)ppppplVar39);
                  }
                  *(undefined1 *)((long)pppplVar37 + (long)ppppplVar39) = 0;
                }
                *(undefined1 *)(plVar12 + 5) = 1;
                *plVar12 = 0;
                plVar12[1] = uVar40;
                if ((uVar29 == 0) || (local_b8 * (float)uVar29 < (float)(local_c0 + 1))) {
                  if (uVar29 < 3) {
                    uVar16 = 1;
                  }
                  else {
                    uVar16 = (ulong)((uVar29 - 1 & uVar29) != 0);
                  }
                  uVar11 = (ulong)((float)(local_c0 + 1) / local_b8);
                  uVar16 = uVar16 | uVar29 << 1;
                  if (uVar11 <= uVar16) {
                    uVar11 = uVar16;
                  }
                  FUN_71035f15b0(&local_d8,uVar11,(long ****)param_3,param_4,param_5,param_6,param_7
                                 ,param_8);
                  uVar29 = local_d0;
                  if ((local_d0 - 1 & local_d0) == 0) {
                    uVar11 = local_d0 - 1 & uVar40;
                  }
                  else {
                    uVar11 = uVar40;
                    if (local_d0 <= uVar40) {
                      uVar16 = 0;
                      if (local_d0 != 0) {
                        uVar16 = uVar40 / local_d0;
                      }
                      uVar11 = uVar40 - uVar16 * local_d0;
                    }
                  }
                }
                plVar36 = *(long **)(local_d8 + uVar11 * 8);
                if (plVar36 == (long *)0x0) {
                  *plVar12 = (long)local_c8;
                  *(long ***)(local_d8 + uVar11 * 8) = &local_c8;
                  local_c8 = plVar12;
                  if (*plVar12 != 0) {
                    uVar16 = *(ulong *)(*plVar12 + 8);
                    if ((uVar29 - 1 & uVar29) == 0) {
                      uVar16 = uVar16 & uVar29 - 1;
                    }
                    else if (uVar29 <= uVar16) {
                      uVar11 = 0;
                      if (uVar29 != 0) {
                        uVar11 = uVar16 / uVar29;
                      }
                      uVar16 = uVar16 - uVar11 * uVar29;
                    }
                    plVar36 = (long *)(local_d8 + uVar16 * 8);
                    goto LAB_7103610774;
                  }
                }
                else {
                  *plVar12 = *plVar36;
LAB_7103610774:
                  *plVar36 = (long)plVar12;
                }
                local_c0 = local_c0 + 1;
LAB_7103610784:
                local_e8 = (long ****)0x0;
                local_e0 = (long ***)0x0;
                uStack_ec = 0;
                uStack_ed = 0;
                uStack_ef = 0;
                local_f0 = 0;
                local_f8._0_1_ = 0;
                local_f8._1_7_ = 0x710522fe;
                FUN_7103553740(param_1,(byte *)ppppplVar10,(long)&local_f8);
                param_3 = (long *****)0xa;
                param_4 = (byte ****)0x0;
                FUN_71035585c0(CONCAT44(uStack_ec,CONCAT13(uStack_ed,CONCAT21(uStack_ef,local_f0))),
                               lVar30 + 0x28,(long ****)0xa,(byte ****)0x0,param_5,param_6,param_7,
                               param_8);
                if ((*(byte *)(lVar34 + 0x90) & 1) == 0) {
                  pvVar31 = (void *)(lVar34 + 0x91);
                  uVar16 = (ulong)(*(byte *)(lVar34 + 0x90) >> 1);
                }
                else {
                  uVar16 = *(ulong *)(lVar34 + 0x98);
                  pvVar31 = *(void **)(lVar34 + 0xa0);
                }
                uVar22 = extraout_x1_05;
                if (9 < (long)uVar16) {
                  pvVar1 = (void *)((long)pvVar31 + uVar16);
                  pvVar9 = pvVar31;
                  do {
                    param_3 = (long *****)(uVar16 - 9);
                    if ((param_3 == (long *****)0x0) ||
                       (pvVar9 = memchr(pvVar9,0x4e,(size_t)param_3), uVar22 = extraout_x1_06,
                       pvVar9 == (void *)0x0)) break;
                    param_3 = (long *****)0xa;
                    iVar8 = memcmp(pvVar9,"NODE_LOUPE",10);
                    uVar22 = extraout_x1_07;
                    if (iVar8 == 0) {
                      if ((pvVar9 != pvVar1) && (uVar41 = 0, (long)pvVar9 - (long)pvVar31 != -1))
                      goto LAB_7103610854;
                      break;
                    }
                    pvVar9 = (void *)((long)pvVar9 + 1);
                    uVar16 = (long)pvVar1 - (long)pvVar9;
                  } while (9 < (long)uVar16);
                }
                uVar41 = 0x3f800000;
LAB_7103610854:
                *puVar21 = 0x400000003f000000;
                *(undefined4 *)(puVar21 + 1) = 0;
                *(undefined4 *)((long)puVar21 + 0xc) = uVar41;
              }
            }
          }
        }
        else {
          if (uVar15 != 0) goto LAB_7103610870;
          lVar30 = *(long *)(lVar35 + 0x10);
          local_e8 = (long ****)0x0;
          local_e0 = (long ***)0x0;
          uStack_ec = 0;
          uStack_ed = 0;
          uStack_ef = 0;
          local_f0 = 0;
          local_f8._0_1_ = 0x60;
          local_f8._1_7_ = 0x710522ff;
          if ((*(byte *)(lVar34 + 0x90) & 1) == 0) {
            pvVar31 = (void *)(lVar34 + 0x91);
            uVar16 = (ulong)(*(byte *)(lVar34 + 0x90) >> 1);
          }
          else {
            uVar16 = *(ulong *)(lVar34 + 0x98);
            pvVar31 = *(void **)(lVar34 + 0xa0);
          }
          if (9 < (long)uVar16) {
            pvVar1 = (void *)((long)pvVar31 + uVar16);
            pvVar9 = pvVar31;
            do {
              if ((uVar16 - 9 == 0) ||
                 (pvVar9 = memchr(pvVar9,0x4e,uVar16 - 9), pvVar9 == (void *)0x0)) break;
              pppplVar37 = (long ****)0xa;
              iVar8 = memcmp(pvVar9,"NODE_LOUPE",10);
              if (iVar8 == 0) {
                if ((pvVar9 != pvVar1) && ((long)pvVar9 - (long)pvVar31 != -1)) {
                  puVar21 = FUN_710361a140(lVar30,0,pppplVar37,param_4,param_5,param_6,param_7,
                                           param_8);
                  lVar30 = puVar21[10];
                  if ((*(long **)(lVar30 + 0x38) == (long *)0x0) ||
                     (**(long **)(lVar30 + 0x38) != *(long *)(lVar30 + 0x40))) {
                    local_f0 = 0;
                    uStack_ef = 0;
                    uStack_ed = 0;
                    uStack_ec = 0;
LAB_710361006c:
                    local_e0 = (long ***)0x0;
                    local_e8 = (long ****)0x0;
                  }
                  else {
                    lVar30 = *(long *)(lVar30 + 0x30);
                    local_f0 = (undefined1)lVar30;
                    uStack_ef = (undefined2)((ulong)lVar30 >> 8);
                    uStack_ed = (undefined1)((ulong)lVar30 >> 0x18);
                    uStack_ec = (uint)((ulong)lVar30 >> 0x20);
                    if (lVar30 == 0) goto LAB_710361006c;
                    local_e8 = *(long *****)(lVar30 + 8);
                    local_e0 = *local_e8;
                  }
                  *puVar21 = &DAT_3f8000003f800000;
                  puVar21[1] = 0;
                  goto LAB_710360ff18;
                }
                break;
              }
              pvVar9 = (void *)((long)pvVar9 + 1);
              uVar16 = (long)pvVar1 - (long)pvVar9;
            } while (9 < (long)uVar16);
          }
          if ((*(long **)(lVar30 + 0x50) == (long *)0x0) ||
             (**(long **)(lVar30 + 0x50) != *(long *)(lVar30 + 0x58))) {
            local_f0 = 0;
            uStack_ef = 0;
            uStack_ed = 0;
            uStack_ec = 0;
LAB_710360ff04:
            local_e0 = (long ***)0x0;
            local_e8 = (long ****)0x0;
          }
          else {
            lVar30 = *(long *)(lVar30 + 0x48);
            local_f0 = (undefined1)lVar30;
            uStack_ef = (undefined2)((ulong)lVar30 >> 8);
            uStack_ed = (undefined1)((ulong)lVar30 >> 0x18);
            uStack_ec = (uint)((ulong)lVar30 >> 0x20);
            if (lVar30 == 0) goto LAB_710360ff04;
            local_e8 = *(long *****)(lVar30 + 8);
            local_e0 = *local_e8;
          }
LAB_710360ff18:
          plVar36 = FUN_71036120f0(local_b0,local_a8,(byte *)&local_110);
          uVar29 = local_d0;
          uVar16 = local_d8;
          ppppplVar10 = (long *****)(plVar36 + 5);
          param_3 = ppppplVar10;
          plVar12 = FUN_71036122e0(local_d8,local_d0,(byte *)ppppplVar10);
          uVar22 = extraout_x1_03;
          if (plVar12 == (long *)0x0) {
            bVar25 = *(byte *)(plVar36 + 5);
            ppppplVar39 = (long *****)(ulong)(bVar25 >> 1);
            if ((bVar25 & 1) != 0) {
              ppppplVar39 = (long *****)plVar36[6];
            }
            if (ppppplVar39 != (long *****)0x0) {
              puVar13 = (ulong *)plVar36[7];
              if ((bVar25 & 1) == 0) {
                puVar13 = (ulong *)((long)plVar36 + 0x29);
              }
              uVar40 = FUN_7102677830(puVar13,(ulong)ppppplVar39);
              uVar11 = extraout_x14_00;
              if (uVar29 != 0) {
                uVar27 = uVar29 - 1;
                if ((uVar27 & uVar29) == 0) {
                  uVar11 = uVar27 & uVar40;
LAB_710360ffac:
                  plVar12 = *(long **)(uVar16 + uVar11 * 8);
                }
                else {
                  uVar11 = uVar40;
                  if (uVar40 < uVar29) goto LAB_710360ffac;
                  uVar11 = 0;
                  if (uVar29 != 0) {
                    uVar11 = uVar40 / uVar29;
                  }
                  uVar11 = uVar40 - uVar11 * uVar29;
                  plVar12 = *(long **)(uVar16 + uVar11 * 8);
                }
                if ((plVar12 != (long *)0x0) && (plVar12 = (long *)*plVar12, plVar12 != (long *)0x0)
                   ) {
                  if ((uVar27 & uVar29) == 0) {
                    do {
                      if (plVar12[1] != uVar40 && (plVar12[1] & uVar27) != uVar11) break;
                      bVar25 = *(byte *)(plVar12 + 2);
                      ppppplVar2 = (long *****)(ulong)(bVar25 >> 1);
                      if ((bVar25 & 1) != 0) {
                        ppppplVar2 = (long *****)plVar12[3];
                      }
                      if (ppppplVar2 == ppppplVar39) {
                        if ((bVar25 & 1) == 0) {
                          pcVar19 = (char *)((long)plVar12 + 0x11);
                          lVar30 = -(long)(ulong)(bVar25 >> 1);
                          puVar20 = puVar13;
                          while (*pcVar19 == (char)*puVar20) {
                            pcVar19 = pcVar19 + 1;
                            puVar20 = (ulong *)((long)puVar20 + 1);
                            lVar30 = lVar30 + 1;
                            if (lVar30 == 0) goto LAB_710361044c;
                          }
                        }
                        else {
                          param_3 = ppppplVar39;
                          iVar8 = memcmp((void *)plVar12[4],puVar13,(size_t)ppppplVar39);
                          if (iVar8 == 0) goto LAB_710361044c;
                        }
                      }
                      plVar12 = (long *)*plVar12;
                    } while (plVar12 != (long *)0x0);
                  }
                  else {
                    do {
                      uVar16 = plVar12[1];
                      if (uVar16 != uVar40) {
                        if (uVar29 <= uVar16) {
                          uVar27 = 0;
                          if (uVar29 != 0) {
                            uVar27 = uVar16 / uVar29;
                          }
                          uVar16 = uVar16 - uVar27 * uVar29;
                        }
                        if (uVar16 != uVar11) break;
                      }
                      bVar25 = *(byte *)(plVar12 + 2);
                      ppppplVar2 = (long *****)(ulong)(bVar25 >> 1);
                      if ((bVar25 & 1) != 0) {
                        ppppplVar2 = (long *****)plVar12[3];
                      }
                      if (ppppplVar2 == ppppplVar39) {
                        if ((bVar25 & 1) == 0) {
                          pcVar19 = (char *)((long)plVar12 + 0x11);
                          lVar30 = -(long)(ulong)(bVar25 >> 1);
                          puVar20 = puVar13;
                          while (*pcVar19 == (char)*puVar20) {
                            pcVar19 = pcVar19 + 1;
                            puVar20 = (ulong *)((long)puVar20 + 1);
                            lVar30 = lVar30 + 1;
                            if (lVar30 == 0) goto LAB_710361044c;
                          }
                        }
                        else {
                          param_3 = ppppplVar39;
                          iVar8 = memcmp((void *)plVar12[4],puVar13,(size_t)ppppplVar39);
                          if (iVar8 == 0) goto LAB_710361044c;
                        }
                      }
                      plVar12 = (long *)*plVar12;
                    } while (plVar12 != (long *)0x0);
                  }
                }
              }
              plVar12 = (long *)FUN_710392e290(0x10,0x30,(long ****)param_3,param_4,param_5,param_6,
                                               param_7,param_8);
              if (plVar12 == (long *)0x0) {
                if (DAT_7105332f00 != (long *)0x0) {
                  local_148 = (long ****)((ulong)local_148 & 0xffffffff00000000);
                  local_130 = (long ****)&DAT_00000030;
                  param_3 = &local_130;
                  uVar16 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_148);
                  if (((uVar16 & 1) != 0) &&
                     (plVar12 = (long *)FUN_710392e290(0x10,0x30,(long ****)param_3,param_4,param_5,
                                                       param_6,param_7,param_8),
                     plVar12 != (long *)0x0)) goto LAB_710361024c;
                }
                plVar12 = (long *)0x0;
              }
LAB_710361024c:
              plVar12[2] = 0;
              plVar12[3] = 0;
              plVar12[4] = 0;
              if (((ulong)*ppppplVar10 & 1) == 0) {
                pppplVar37 = *ppppplVar10;
                lVar30 = plVar36[7];
                plVar12[3] = plVar36[6];
                plVar12[4] = lVar30;
                plVar12[2] = (long)pppplVar37;
              }
              else {
                ppppplVar39 = (long *****)plVar36[6];
                if ((long *****)0xffffffffffffffef < ppppplVar39) {
LAB_71036120d0:
                    /* WARNING: Subroutine does not return */
                  std::__basic_string_common<true>::__throw_length_error();
                }
                pvVar31 = (void *)plVar36[7];
                if (ppppplVar39 < (long *****)0x17) {
                  pppplVar37 = (long ****)((long)plVar12 + 0x11);
                  *(char *)(plVar12 + 2) = (char)((int)ppppplVar39 << 1);
                  if (ppppplVar39 != (long *****)0x0) goto LAB_710361032c;
                }
                else {
                  pppplVar37 = (long ****)((ulong)(ppppplVar39 + 2) & 0xfffffffffffffff0);
                  iVar8 = FUN_710392e1f0(&local_148,0x10,pppplVar37,param_4,param_5,param_6,param_7,
                                         param_8);
                  if (((iVar8 == 0xc) && (DAT_710593d2b0 != (long *)0x0)) &&
                     (local_130 = pppplVar37,
                     uVar16 = (**(code **)(*DAT_710593d2b0 + 0x30))(DAT_710593d2b0,&local_130),
                     (uVar16 & 1) != 0)) {
                    FUN_710392e1f0(&local_148,0x10,pppplVar37,param_4,param_5,param_6,param_7,
                                   param_8);
                  }
                  nu::VirtualAllocHook((ulong)pppplVar37,0x10,local_148);
                  plVar12[2] = (ulong)pppplVar37 | 1;
                  plVar12[3] = (long)ppppplVar39;
                  plVar12[4] = (long)local_148;
                  pppplVar37 = local_148;
LAB_710361032c:
                  param_3 = ppppplVar39;
                  memcpy(pppplVar37,pvVar31,(size_t)ppppplVar39);
                }
                *(undefined1 *)((long)pppplVar37 + (long)ppppplVar39) = 0;
              }
              *(undefined1 *)(plVar12 + 5) = 0;
              *plVar12 = 0;
              plVar12[1] = uVar40;
              if ((uVar29 == 0) || (local_b8 * (float)uVar29 < (float)(local_c0 + 1))) {
                if (uVar29 < 3) {
                  uVar16 = 1;
                }
                else {
                  uVar16 = (ulong)((uVar29 - 1 & uVar29) != 0);
                }
                uVar11 = (ulong)((float)(local_c0 + 1) / local_b8);
                uVar16 = uVar16 | uVar29 << 1;
                if (uVar11 <= uVar16) {
                  uVar11 = uVar16;
                }
                FUN_71035f15b0(&local_d8,uVar11,(long ****)param_3,param_4,param_5,param_6,param_7,
                               param_8);
                uVar29 = local_d0;
                if ((local_d0 - 1 & local_d0) == 0) {
                  uVar11 = local_d0 - 1 & uVar40;
                }
                else {
                  uVar11 = uVar40;
                  if (local_d0 <= uVar40) {
                    uVar16 = 0;
                    if (local_d0 != 0) {
                      uVar16 = uVar40 / local_d0;
                    }
                    uVar11 = uVar40 - uVar16 * local_d0;
                  }
                }
              }
              plVar36 = *(long **)(local_d8 + uVar11 * 8);
              if (plVar36 == (long *)0x0) {
                *plVar12 = (long)local_c8;
                *(long ***)(local_d8 + uVar11 * 8) = &local_c8;
                local_c8 = plVar12;
                if (*plVar12 != 0) {
                  uVar16 = *(ulong *)(*plVar12 + 8);
                  if ((uVar29 - 1 & uVar29) == 0) {
                    uVar16 = uVar16 & uVar29 - 1;
                  }
                  else if (uVar29 <= uVar16) {
                    uVar11 = 0;
                    if (uVar29 != 0) {
                      uVar11 = uVar16 / uVar29;
                    }
                    uVar16 = uVar16 - uVar11 * uVar29;
                  }
                  plVar36 = (long *)(local_d8 + uVar16 * 8);
                  goto LAB_710361043c;
                }
              }
              else {
                *plVar12 = *plVar36;
LAB_710361043c:
                *plVar36 = (long)plVar12;
              }
              local_c0 = local_c0 + 1;
LAB_710361044c:
              local_128 = (long *****)0x0;
              local_120 = (long ****)0x0;
              uStack_118 = 0;
              local_130 = (long ****)&PTR_FUN_710522fe00;
              FUN_7103553740(param_1,(byte *)ppppplVar10,(long)&local_130);
              param_3 = (long *****)0xa;
              param_4 = (byte ****)0x0;
              FUN_71035585c0((long)local_128,(long)&local_f8,(long ****)0xa,(byte ****)0x0,param_5,
                             param_6,param_7,param_8);
              uVar22 = extraout_x1_04;
            }
          }
        }
LAB_7103610870:
        if ((uVar3 & 1) != 0) {
          local_f8._0_1_ = (byte)__s;
          local_f8._1_7_ = (undefined7)((ulong)__s >> 8);
          local_f0 = 0;
          uStack_ef = 0;
          uStack_ed = 0;
          local_e8 = (long ****)((ulong)local_e8 & 0xffffffff00000000);
          uStack_ec = (uint)(byte)uVar6;
          FUN_7103557140(lVar34,&local_f8,param_3,param_4,param_5,param_6,param_7,param_8);
          uVar22 = extraout_x1_08;
        }
        if ((uVar3 >> 1 & 1) != 0) {
          *(undefined1 *)(lVar34 + 0x10) = 0;
          lVar30 = **(long **)(lVar34 + 0x48);
          lVar34 = (*(long **)(lVar34 + 0x48))[1];
          if (lVar30 != lVar34) {
            uVar29 = (lVar34 + -0x40) - lVar30;
            uVar15 = ((uint)(uVar29 >> 6) & 0x3ffffff) + 1;
            uVar16 = (ulong)uVar15 & 3;
            if ((uVar15 & 3) != 0) {
              lVar28 = -uVar16;
              plVar36 = (long *)(lVar30 + 0x28);
              do {
                lVar28 = lVar28 + 1;
                *(undefined1 *)(*plVar36 + 0x14) = 0;
                plVar36 = plVar36 + 8;
              } while (lVar28 != 0);
              lVar30 = lVar30 + uVar16 * 0x40;
            }
            if (0xbf < uVar29) {
              uVar16 = (lVar34 + -0x100) - lVar30;
              if (((uint)uVar16 >> 8 & 1) == 0) {
                *(undefined1 *)(*(long *)(lVar30 + 0x28) + 0x14) = 0;
                *(undefined1 *)(*(long *)(lVar30 + 0x68) + 0x14) = 0;
                *(undefined1 *)(*(long *)(lVar30 + 0xa8) + 0x14) = 0;
                plVar36 = (long *)(lVar30 + 0xe8);
                lVar30 = lVar30 + 0x100;
                *(undefined1 *)(*plVar36 + 0x14) = 0;
              }
              if (0xff < uVar16) {
                do {
                  *(undefined1 *)(*(long *)(lVar30 + 0x28) + 0x14) = 0;
                  *(undefined1 *)(*(long *)(lVar30 + 0x68) + 0x14) = 0;
                  *(undefined1 *)(*(long *)(lVar30 + 0xa8) + 0x14) = 0;
                  *(undefined1 *)(*(long *)(lVar30 + 0xe8) + 0x14) = 0;
                  *(undefined1 *)(*(long *)(lVar30 + 0x128) + 0x14) = 0;
                  *(undefined1 *)(*(long *)(lVar30 + 0x168) + 0x14) = 0;
                  *(undefined1 *)(*(long *)(lVar30 + 0x1a8) + 0x14) = 0;
                  plVar36 = (long *)(lVar30 + 0x1e8);
                  lVar30 = lVar30 + 0x200;
                  *(undefined1 *)(*plVar36 + 0x14) = 0;
                } while (lVar34 != lVar30);
              }
            }
          }
        }
      }
      local_154 = local_154 + 1;
      pppplVar37 = local_100;
      pppplVar38 = local_110;
      break;
    case 1:
      if (pcVar19 == (char *)0x0) {
        local_158 = 0;
        goto LAB_7103611ac8;
      }
      local_f0 = 0;
      uStack_ef = 0;
      uStack_ed = 0;
      uStack_ec = 0;
      local_e8 = (long ****)0x0;
      local_f8._0_1_ = 0;
      local_f8._1_7_ = 0;
      ppppplVar10 = (long *****)strlen(pcVar19);
      if ((long *****)0xffffffffffffffef < ppppplVar10) goto LAB_71036120c4;
      if (ppppplVar10 < (long *****)0x17) {
        local_f8._0_1_ = (byte)((int)ppppplVar10 << 1);
        pppplVar38 = pppplVar24;
        if (ppppplVar10 != (long *****)0x0) goto LAB_7103610f18;
      }
      else {
        pppplVar38 = (long ****)((ulong)(ppppplVar10 + 2) & 0xfffffffffffffff0);
        iVar8 = FUN_710392e1f0(&local_110,0x10,pppplVar38,param_4,param_5,param_6,param_7,param_8);
        if (((iVar8 == 0xc) && (DAT_710593d2b0 != (long *)0x0)) &&
           (local_130 = pppplVar38,
           uVar16 = (**(code **)(*DAT_710593d2b0 + 0x30))(DAT_710593d2b0,&local_130),
           (uVar16 & 1) != 0)) {
          FUN_710392e1f0(&local_110,0x10,pppplVar38,param_4,param_5,param_6,param_7,param_8);
        }
        nu::VirtualAllocHook((ulong)pppplVar38,0x10,local_110);
        local_f8._0_1_ = (byte)pppplVar38 | 1;
        local_f8._1_7_ = (undefined7)((ulong)pppplVar38 >> 8);
        local_f0 = SUB81(ppppplVar10,0);
        uStack_ef = (undefined2)((ulong)ppppplVar10 >> 8);
        uStack_ed = (undefined1)((ulong)ppppplVar10 >> 0x18);
        uStack_ec = (uint)((ulong)ppppplVar10 >> 0x20);
        local_e8 = local_110;
        pppplVar38 = local_110;
LAB_7103610f18:
        param_3 = ppppplVar10;
        memcpy(pppplVar38,pcVar19,(size_t)ppppplVar10);
      }
      *(byte *)((long)pppplVar38 + (long)ppppplVar10) = 0;
      local_128 = (long *****)0x0;
      local_120 = (long ****)0x0;
      local_130 = (long ****)0x0;
      ppppplVar10 = (long *****)strlen((char *)pppplVar37);
      if ((long *****)0xffffffffffffffef < ppppplVar10) goto LAB_71036120bc;
      if (ppppplVar10 < (long *****)0x17) {
        local_130 = (long ****)CONCAT71(local_130._1_7_,(char)((int)ppppplVar10 << 1));
        pppplVar38 = pppplVar17;
        if (ppppplVar10 != (long *****)0x0) goto LAB_71036110bc;
      }
      else {
        pppplVar38 = (long ****)((ulong)(ppppplVar10 + 2) & 0xfffffffffffffff0);
        iVar8 = FUN_710392e1f0(&local_148,0x10,pppplVar38,param_4,param_5,param_6,param_7,param_8);
        if (((iVar8 == 0xc) && (DAT_710593d2b0 != (long *)0x0)) &&
           (local_110 = pppplVar38,
           uVar16 = (**(code **)(*DAT_710593d2b0 + 0x30))(DAT_710593d2b0,&local_110),
           (uVar16 & 1) != 0)) {
          FUN_710392e1f0(&local_148,0x10,pppplVar38,param_4,param_5,param_6,param_7,param_8);
        }
        nu::VirtualAllocHook((ulong)pppplVar38,0x10,local_148);
        local_130 = (long ****)((ulong)pppplVar38 | 1);
        local_120 = local_148;
        pppplVar38 = local_148;
        local_128 = ppppplVar10;
LAB_71036110bc:
        param_3 = ppppplVar10;
        memcpy(pppplVar38,pppplVar37,(size_t)ppppplVar10);
      }
      *(byte *)((long)pppplVar38 + (long)ppppplVar10) = 0;
      plVar36 = FUN_7103550630(plVar14,(byte *)&local_f8);
      uVar22 = extraout_x1_13;
      if (plVar36 != (long *)0x0) {
        if ((long *)plVar36[7] == (long *)0x0) {
          lVar34 = 0;
        }
        else {
          lVar34 = plVar36[6];
          if (*(long *)plVar36[7] != plVar36[8]) {
            lVar34 = 0;
          }
        }
        local_108 = (long *****)(ulong)uVar5;
        local_100 = (long ****)((ulong)local_100 & 0xffffffff00000000);
        local_110 = pppplVar37;
        FUN_7103557140(lVar34,&local_110,param_3,param_4,param_5,param_6,param_7,param_8);
        plVar36 = FUN_7103556f50(*(long **)(lVar34 + 0x40),(byte *)&local_130);
        uVar22 = extraout_x1_14;
        if (plVar36 != (long *)0x0) {
          if (((long *)plVar36[7] == (long *)0x0) || (*(long *)plVar36[7] != plVar36[8])) {
            lVar34 = 0;
          }
          else {
            lVar34 = plVar36[6];
          }
          local_108 = (long *****)0x0;
          local_100 = (long ****)0x0;
          local_110 = (long ****)0x0;
          if (__s == (char *)0x0) {
            param_3 = &local_f8;
            plVar36 = FUN_71036120f0(local_b0,local_a8,(byte *)param_3);
            uVar22 = extraout_x1_16;
            if (&local_110 != (long *****)(plVar36 + 5)) {
              param_3 = (long *****)plVar36[6];
              pvVar31 = (void *)plVar36[7];
              if ((*(byte *)(plVar36 + 5) & 1) == 0) {
                pvVar31 = (void *)((long)plVar36 + 0x29);
                param_3 = (long *****)(ulong)(*(byte *)(plVar36 + 5) >> 1);
              }
              FUN_71002c51f0((ulong *)&local_110,pvVar31,(ulong)param_3,param_4,param_5,param_6,
                             param_7,param_8);
              uVar22 = extraout_x1_17;
            }
          }
          else {
            local_140 = (long *****)0x0;
            pppplStack_138 = (long ****)0x0;
            local_148 = (long ****)0x0;
            ppppplVar10 = (long *****)strlen(__s);
            if ((long *****)0xffffffffffffffef < ppppplVar10) {
                    /* WARNING: Subroutine does not return */
              std::__basic_string_common<true>::__throw_length_error();
            }
            if (ppppplVar10 < (long *****)0x17) {
              local_148 = (long ****)CONCAT71(local_148._1_7_,(char)((int)ppppplVar10 << 1));
              uVar22 = extraout_x1_15;
              pppplVar37 = (long ****)((ulong)&local_148 | 1);
              if (ppppplVar10 != (long *****)0x0) goto LAB_7103611398;
            }
            else {
              pppplVar37 = (long ****)((ulong)(ppppplVar10 + 2) & 0xfffffffffffffff0);
              iVar8 = FUN_710392e1f0(&local_88,0x10,pppplVar37,param_4,param_5,param_6,param_7,
                                     param_8);
              if (((iVar8 == 0xc) && (DAT_710593d2b0 != (long *)0x0)) &&
                 (local_80[0] = pppplVar37,
                 uVar16 = (**(code **)(*DAT_710593d2b0 + 0x30))(DAT_710593d2b0,local_80),
                 (uVar16 & 1) != 0)) {
                FUN_710392e1f0(&local_88,0x10,pppplVar37,param_4,param_5,param_6,param_7,param_8);
              }
              nu::VirtualAllocHook((ulong)pppplVar37,0x10,local_88);
              local_148 = (long ****)((ulong)pppplVar37 | 1);
              pppplStack_138 = local_88;
              pppplVar37 = local_88;
              local_140 = ppppplVar10;
LAB_7103611398:
              param_3 = ppppplVar10;
              memcpy(pppplVar37,__s,(size_t)ppppplVar10);
              uVar22 = extraout_x1_18;
            }
            pppplVar38 = local_100;
            *(byte *)((long)pppplVar37 + (long)ppppplVar10) = 0;
            if (((ulong)local_110 & 1) != 0) {
              *(undefined1 *)local_100 = 0;
              local_108 = (long *****)0x0;
              if (((ulong)local_110 & 1) != 0) {
                nu::VirtualFreeHook(local_100);
                FUN_710392eb40((ulong)pppplVar38);
                uVar22 = extraout_x1_19;
              }
            }
            local_108 = local_140;
            local_100 = pppplStack_138;
            local_110 = local_148;
          }
          ppppplVar10 = (long *****)(lVar34 + 0x80);
          if (ppppplVar10 != &local_110) {
            param_3 = (long *****)((ulong)local_110 >> 1 & 0x7f);
            pppplVar37 = pppplVar18;
            if (((ulong)local_110 & 1) != 0) {
              pppplVar37 = local_100;
              param_3 = local_108;
            }
            FUN_71002c51f0((ulong *)ppppplVar10,pppplVar37,(ulong)param_3,param_4,param_5,param_6,
                           param_7,param_8);
            uVar22 = extraout_x1_20;
          }
          *(undefined8 *)(lVar34 + 0x20) = 0;
          if (DAT_7105334390 != 0) {
            param_3 = (long *****)(lVar34 + 0x40);
            uVar16 = FUN_7103553740(DAT_7105334390,(byte *)ppppplVar10,(long)param_3);
            uVar22 = extraout_x1_21;
            if ((uVar16 & 1) != 0) {
              *(undefined8 *)(lVar34 + 0x20) = *(undefined8 *)(*(long *)(lVar34 + 0x48) + 0x170);
            }
          }
          pppplVar37 = local_100;
          if ((uVar3 >> 1 & 1) != 0) {
            *(undefined1 *)(lVar34 + 0x14) = 0;
          }
          goto joined_r0x0071036118cc;
        }
      }
      local_158 = 0;
      pppplVar38 = local_120;
joined_r0x0071036118d4:
      local_120 = pppplVar38;
      pppplVar37 = local_e8;
      if (((ulong)local_130 & 1) != 0) {
        nu::VirtualFreeHook(pppplVar38);
        FUN_710392eb40((ulong)pppplVar38);
        uVar22 = extraout_x1_23;
        pppplVar37 = local_e8;
      }
      goto joined_r0x007103610da4;
    case 2:
      local_f0 = 0;
      uStack_ef = 0;
      uStack_ed = 0;
      uStack_ec = 0;
      local_e8 = (long ****)0x0;
      local_f8._0_1_ = 0;
      local_f8._1_7_ = 0;
      ppppplVar10 = (long *****)strlen(__s);
      if ((long *****)0xffffffffffffffef < ppppplVar10) {
LAB_71036120c4:
                    /* WARNING: Subroutine does not return */
        std::__basic_string_common<true>::__throw_length_error();
      }
      if (ppppplVar10 < (long *****)0x17) {
        local_f8._0_1_ = (byte)((int)ppppplVar10 << 1);
        pppplVar38 = pppplVar24;
        if (ppppplVar10 != (long *****)0x0) goto LAB_7103610b24;
      }
      else {
        pppplVar38 = (long ****)((ulong)(ppppplVar10 + 2) & 0xfffffffffffffff0);
        iVar8 = FUN_710392e1f0(&local_110,0x10,pppplVar38,param_4,param_5,param_6,param_7,param_8);
        if (((iVar8 == 0xc) && (DAT_710593d2b0 != (long *)0x0)) &&
           (local_130 = pppplVar38,
           uVar16 = (**(code **)(*DAT_710593d2b0 + 0x30))(DAT_710593d2b0,&local_130),
           (uVar16 & 1) != 0)) {
          FUN_710392e1f0(&local_110,0x10,pppplVar38,param_4,param_5,param_6,param_7,param_8);
        }
        nu::VirtualAllocHook((ulong)pppplVar38,0x10,local_110);
        local_f8._0_1_ = (byte)pppplVar38 | 1;
        local_f8._1_7_ = (undefined7)((ulong)pppplVar38 >> 8);
        local_f0 = SUB81(ppppplVar10,0);
        uStack_ef = (undefined2)((ulong)ppppplVar10 >> 8);
        uStack_ed = (undefined1)((ulong)ppppplVar10 >> 0x18);
        uStack_ec = (uint)((ulong)ppppplVar10 >> 0x20);
        local_e8 = local_110;
        pppplVar38 = local_110;
LAB_7103610b24:
        param_3 = ppppplVar10;
        memcpy(pppplVar38,__s,(size_t)ppppplVar10);
      }
      *(byte *)((long)pppplVar38 + (long)ppppplVar10) = 0;
      plVar36 = FUN_7103550630(plVar14,(byte *)&local_f8);
      if (plVar36 != (long *)0x0) {
        if (((long *)plVar36[7] == (long *)0x0) || (*(long *)plVar36[7] != plVar36[8])) {
          lVar34 = 0;
        }
        else {
          lVar34 = plVar36[6];
        }
        local_128 = (long *****)0x0;
        local_120 = (long ****)0x0;
        local_130 = (long ****)0x0;
        ppppplVar10 = (long *****)strlen(pcVar19);
        if ((long *****)0xffffffffffffffef < ppppplVar10) {
LAB_71036120bc:
                    /* WARNING: Subroutine does not return */
          std::__basic_string_common<true>::__throw_length_error();
        }
        if (ppppplVar10 < (long *****)0x17) {
          local_130 = (long ****)CONCAT71(local_130._1_7_,(char)((int)ppppplVar10 << 1));
          pppplVar38 = pppplVar17;
          if (ppppplVar10 != (long *****)0x0) goto LAB_7103610e4c;
        }
        else {
          pppplVar38 = (long ****)((ulong)(ppppplVar10 + 2) & 0xfffffffffffffff0);
          iVar8 = FUN_710392e1f0(&local_148,0x10,pppplVar38,param_4,param_5,param_6,param_7,param_8)
          ;
          if (((iVar8 == 0xc) && (DAT_710593d2b0 != (long *)0x0)) &&
             (local_110 = pppplVar38,
             uVar16 = (**(code **)(*DAT_710593d2b0 + 0x30))(DAT_710593d2b0,&local_110),
             (uVar16 & 1) != 0)) {
            FUN_710392e1f0(&local_148,0x10,pppplVar38,param_4,param_5,param_6,param_7,param_8);
          }
          nu::VirtualAllocHook((ulong)pppplVar38,0x10,local_148);
          local_130 = (long ****)((ulong)pppplVar38 | 1);
          local_120 = local_148;
          pppplVar38 = local_148;
          local_128 = ppppplVar10;
LAB_7103610e4c:
          param_3 = ppppplVar10;
          memcpy(pppplVar38,pcVar19,(size_t)ppppplVar10);
        }
        *(byte *)((long)pppplVar38 + (long)ppppplVar10) = 0;
        local_108 = (long *****)0x0;
        local_100 = (long ****)0x0;
        local_110 = (long ****)0x0;
        ppppplVar10 = (long *****)strlen((char *)pppplVar37);
        if ((long *****)0xffffffffffffffef < ppppplVar10) goto LAB_71036120d0;
        if (ppppplVar10 < (long *****)0x17) {
          local_110 = (long ****)CONCAT71(local_110._1_7_,(char)((int)ppppplVar10 << 1));
          pppplVar38 = pppplVar18;
          if (ppppplVar10 != (long *****)0x0) goto LAB_7103610fec;
        }
        else {
          pppplVar38 = (long ****)((ulong)(ppppplVar10 + 2) & 0xfffffffffffffff0);
          iVar8 = FUN_710392e1f0(local_80,0x10,pppplVar38,param_4,param_5,param_6,param_7,param_8);
          if (((iVar8 == 0xc) && (DAT_710593d2b0 != (long *)0x0)) &&
             (local_148 = pppplVar38,
             uVar16 = (**(code **)(*DAT_710593d2b0 + 0x30))(DAT_710593d2b0,&local_148),
             (uVar16 & 1) != 0)) {
            FUN_710392e1f0(local_80,0x10,pppplVar38,param_4,param_5,param_6,param_7,param_8);
          }
          nu::VirtualAllocHook((ulong)pppplVar38,0x10,local_80[0]);
          local_110 = (long ****)((ulong)pppplVar38 | 1);
          local_100 = local_80[0];
          pppplVar38 = local_80[0];
          local_108 = ppppplVar10;
LAB_7103610fec:
          param_3 = ppppplVar10;
          memcpy(pppplVar38,pppplVar37,(size_t)ppppplVar10);
        }
        *(byte *)((long)pppplVar38 + (long)ppppplVar10) = 0;
        plVar36 = FUN_7103556f50(*(long **)(lVar34 + 0x40),(byte *)&local_110);
        uVar22 = extraout_x1_12;
        pppplVar37 = local_100;
        if (plVar36 != (long *)0x0) {
          if (((long *)plVar36[7] == (long *)0x0) || (*(long *)plVar36[7] != plVar36[8])) {
            plVar36 = (long *)0x0;
            uVar16 = 0;
            lVar34 = 0;
          }
          else {
            uVar16 = plVar36[6];
            if (uVar16 == 0) {
              plVar36 = (long *)0x0;
              lVar34 = 0;
            }
            else {
              plVar36 = *(long **)(uVar16 + 8);
              lVar34 = *plVar36;
            }
          }
          plVar12 = FUN_7103550630(plVar14,(byte *)&local_130);
          uVar22 = extraout_x1_24;
          pppplVar37 = local_100;
          if (plVar12 != (long *)0x0) {
            lVar30 = plVar12[6];
            plVar12 = FUN_7103556f50(*(long **)(lVar30 + 0x40),(byte *)(uVar16 + 0x98));
            uVar22 = extraout_x1_25;
            pppplVar37 = local_100;
            if (plVar12 == (long *)0x0) {
              FUN_7103556b30(uVar16,lVar30,(long ****)param_3,param_4,param_5,param_6,param_7,
                             param_8);
              puVar13 = FUN_71035577e0(*(ulong **)(lVar30 + 0x40),(ulong *)(uVar16 + 0x98),param_3,
                                       param_4,param_5,param_6,param_7,param_8);
              if ((plVar36 == (long *)0x0) || (*plVar36 != lVar34)) {
                puVar13[1] = 0;
LAB_71036118b4:
                uVar16 = 0;
                puVar13[2] = 0;
              }
              else {
                puVar13[1] = uVar16;
                if (uVar16 == 0) goto LAB_71036118b4;
                puVar20 = *(ulong **)(uVar16 + 8);
                puVar13[2] = (ulong)puVar20;
                uVar16 = *puVar20;
              }
              puVar13[3] = uVar16;
              uVar22 = extraout_x1_26;
              pppplVar37 = local_100;
            }
          }
        }
joined_r0x0071036118cc:
        pppplVar38 = local_120;
        local_100 = pppplVar37;
        if (((ulong)local_110 & 1) != 0) {
          nu::VirtualFreeHook(pppplVar37);
          FUN_710392eb40((ulong)pppplVar37);
          uVar22 = extraout_x1_22;
          pppplVar38 = local_120;
        }
        goto joined_r0x0071036118d4;
      }
      local_158 = 0;
      uVar22 = extraout_x1_09;
      pppplVar37 = local_e8;
joined_r0x007103610da4:
      local_e8 = pppplVar37;
      if (((byte)local_f8 & 1) != 0) goto LAB_7103610db0;
      goto LAB_7103611ac8;
    case 3:
      local_128 = (long *****)0x0;
      local_120 = (long ****)0x0;
      local_130 = (long ****)0x0;
      ppppplVar10 = (long *****)strlen(__s);
      if ((long *****)0xffffffffffffffef < ppppplVar10) goto LAB_71036120bc;
      if (ppppplVar10 < (long *****)0x17) {
        local_130 = (long ****)CONCAT71(local_130._1_7_,(char)((int)ppppplVar10 << 1));
        pppplVar37 = pppplVar17;
        if (ppppplVar10 != (long *****)0x0) goto LAB_7103610bf0;
      }
      else {
        pppplVar37 = (long ****)((ulong)(ppppplVar10 + 2) & 0xfffffffffffffff0);
        iVar8 = FUN_710392e1f0(&local_110,0x10,pppplVar37,param_4,param_5,param_6,param_7,param_8);
        if ((iVar8 == 0xc) && (DAT_710593d2b0 != (long *)0x0)) {
          local_f8._0_1_ = (byte)pppplVar37;
          local_f8._1_7_ = (undefined7)((ulong)pppplVar37 >> 8);
          uVar16 = (**(code **)(*DAT_710593d2b0 + 0x30))(DAT_710593d2b0,&local_f8);
          if ((uVar16 & 1) != 0) {
            FUN_710392e1f0(&local_110,0x10,pppplVar37,param_4,param_5,param_6,param_7,param_8);
          }
        }
        nu::VirtualAllocHook((ulong)pppplVar37,0x10,local_110);
        local_130 = (long ****)((ulong)pppplVar37 | 1);
        local_120 = local_110;
        pppplVar37 = local_110;
        local_128 = ppppplVar10;
LAB_7103610bf0:
        memcpy(pppplVar37,__s,(size_t)ppppplVar10);
      }
      param_3 = &local_130;
      *(byte *)((long)pppplVar37 + (long)ppppplVar10) = 0;
      FUN_7103864d90(&local_f8,lVar23,(byte *)param_3);
      uVar22 = extraout_x1_10;
      pppplVar37 = local_120;
      pppplVar38 = local_130;
      if ((local_e8 != (long ****)0x0) && (*local_e8 == local_e0)) {
        lVar34 = CONCAT44(uStack_ec,CONCAT13(uStack_ed,CONCAT21(uStack_ef,local_f0)));
        if ((uVar3 >> 1 & 1) == 0) {
          *(undefined1 *)(lVar34 + 0xf0) = 1;
        }
        else {
          *(undefined1 *)(lVar34 + 0xf0) = 0;
        }
      }
    }
    if (((ulong)pppplVar38 & 1) != 0) {
LAB_7103610db0:
      nu::VirtualFreeHook(pppplVar37);
      FUN_710392eb40((ulong)pppplVar37);
      uVar22 = extraout_x1_11;
    }
LAB_7103611ac8:
    puVar32 = puVar32 + 0xc;
    uVar15 = *puVar32;
  } while (uVar15 != 4);
  puVar21 = *(undefined8 **)(param_1 + 0x68);
  puVar33 = *(undefined8 **)(param_1 + 0x70);
  while (puVar33 != puVar21) {
    puVar33 = puVar33 + -4;
    (**(code **)*puVar33)(puVar33);
    uVar22 = extraout_x1_28;
  }
  *(undefined8 **)(param_1 + 0x70) = puVar21;
  FUN_7103551e00(param_1,uVar22,param_3,param_4,param_5,param_6,param_7,param_8);
  FUN_7103552b70(param_1,extraout_x1_29,param_3,(undefined **)param_4,param_5,param_6,param_7,
                 param_8);
  if (((DAT_71053375a0 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_71053375a0), iVar8 != 0)) {
    DAT_7105337538._2_6_ = 0;
    DAT_7105337550._2_6_ = 0;
    DAT_7105337530._1_7_ = 0x5f47425f305f4e;
    DAT_7105337538._0_1_ = 0x4e;
    _DAT_7105337529 = 0x414d5f45444f4e;
    DAT_7105337530._0_1_ = 0x49;
    _DAT_7105337549 = 0x5f47425f305f4e;
    DAT_7105337550._0_1_ = 0x4d;
    DAT_7105337528 = 0x20;
    DAT_7105337540 = 0x20;
    DAT_7105337541._0_7_ = 0x414d5f45444f4e;
    DAT_7105337541._7_1_ = 0x49;
    DAT_7105337538._1_1_ = 0;
    DAT_7105337550._1_1_ = 0;
    DAT_7105337558 = 0x20;
    DAT_7105337559._0_7_ = 0x414d5f45444f4e;
    DAT_7105337559._7_1_ = 0x49;
    DAT_7105337580._4_4_ = 0;
    DAT_7105337580._1_2_ = 0x4d5f;
    _DAT_7105337579 = 0x425f34585f444e;
    DAT_7105337580._0_1_ = 0x47;
    DAT_7105337580._3_1_ = 0;
    uRam000000710533756a = 0;
    DAT_7105337561._0_7_ = 0x5f47425f305f4e;
    DAT_7105337561._7_1_ = 0x46;
    DAT_7105337570 = 0x24;
    DAT_7105337588 = 0x24;
    DAT_7105337569 = 0;
    DAT_7105337571._0_7_ = 0x4c425f45444f4e;
    DAT_7105337571._7_1_ = 0x45;
    DAT_7105337598._4_4_ = 0;
    DAT_7105337598._1_2_ = 0x465f;
    _DAT_7105337591 = 0x425f34585f444e;
    DAT_7105337598._0_1_ = 0x47;
    DAT_7105337589._0_7_ = 0x4c425f45444f4e;
    DAT_7105337589._7_1_ = 0x45;
    DAT_7105337598._3_1_ = 0;
    FUN_71000001c0();
    __cxa_guard_release(&DAT_71053375a0);
  }
  plVar36 = FUN_7103550630(plVar14,&DAT_7105337528);
  if (((plVar36 == (long *)0x0) || ((long *)plVar36[7] == (long *)0x0)) ||
     (*(long *)plVar36[7] != plVar36[8])) {
    lVar23 = 0;
  }
  else {
    lVar23 = plVar36[6];
  }
  plVar36 = FUN_7103550630(plVar14,&DAT_7105337540);
  if (((plVar36 == (long *)0x0) || ((long *)plVar36[7] == (long *)0x0)) ||
     (*(long *)plVar36[7] != plVar36[8])) {
    lVar35 = 0;
  }
  else {
    lVar35 = plVar36[6];
  }
  plVar36 = FUN_7103550630(plVar14,&DAT_7105337558);
  if (((plVar36 == (long *)0x0) || ((long *)plVar36[7] == (long *)0x0)) ||
     (*(long *)plVar36[7] != plVar36[8])) {
    lVar34 = 0;
  }
  else {
    lVar34 = plVar36[6];
  }
  plVar36 = FUN_7103550630(plVar14,&DAT_7105337570);
  if (((plVar36 == (long *)0x0) || ((long *)plVar36[7] == (long *)0x0)) ||
     (*(long *)plVar36[7] != plVar36[8])) {
    lVar30 = 0;
  }
  else {
    lVar30 = plVar36[6];
  }
  plVar14 = FUN_7103550630(plVar14,&DAT_7105337588);
  if (((plVar14 == (long *)0x0) || ((long *)plVar14[7] == (long *)0x0)) ||
     (*(long *)plVar14[7] != plVar14[8])) {
    lVar28 = 0;
  }
  else {
    lVar28 = plVar14[6];
  }
  uStack_ec = 0;
  local_f8._0_1_ = 0x14;
  local_f8._1_7_ = 0x61704f3a3a756e;
  local_f0 = 0x71;
  local_e8 = (long ****)0x0;
  uStack_ed = 0;
  uStack_ef = 0x6575;
  plVar14 = FUN_7103556f50(*(long **)(lVar23 + 0x40),(byte *)&local_f8);
  if (plVar14 != (long *)0x0) {
    if (((long *)plVar14[7] == (long *)0x0) || (*(long *)plVar14[7] != plVar14[8])) {
      *(undefined8 *)(param_1 + 0x178) = 0;
LAB_7103611cb4:
      uVar22 = 0;
      *(undefined8 *)(param_1 + 0x180) = 0;
    }
    else {
      lVar23 = plVar14[6];
      *(long *)(param_1 + 0x178) = lVar23;
      if (lVar23 == 0) goto LAB_7103611cb4;
      puVar21 = *(undefined8 **)(lVar23 + 8);
      *(undefined8 **)(param_1 + 0x180) = puVar21;
      uVar22 = *puVar21;
    }
    *(undefined8 *)(param_1 + 0x188) = uVar22;
  }
  plVar14 = FUN_7103556f50(*(long **)(lVar35 + 0x40),(byte *)&local_f8);
  if (plVar14 != (long *)0x0) {
    if (((long *)plVar14[7] == (long *)0x0) || (*(long *)plVar14[7] != plVar14[8])) {
      *(undefined8 *)(param_1 + 0x198) = 0;
LAB_7103611d10:
      uVar22 = 0;
      *(undefined8 *)(param_1 + 0x1a0) = 0;
    }
    else {
      lVar23 = plVar14[6];
      *(long *)(param_1 + 0x198) = lVar23;
      if (lVar23 == 0) goto LAB_7103611d10;
      puVar21 = *(undefined8 **)(lVar23 + 8);
      *(undefined8 **)(param_1 + 0x1a0) = puVar21;
      uVar22 = *puVar21;
    }
    *(undefined8 *)(param_1 + 0x1a8) = uVar22;
  }
  plVar14 = FUN_7103556f50(*(long **)(lVar34 + 0x40),(byte *)&local_f8);
  if (plVar14 != (long *)0x0) {
    if (((long *)plVar14[7] == (long *)0x0) || (*(long *)plVar14[7] != plVar14[8])) {
      *(undefined8 *)(param_1 + 0x1b8) = 0;
LAB_7103611d6c:
      uVar22 = 0;
      *(undefined8 *)(param_1 + 0x1c0) = 0;
    }
    else {
      lVar23 = plVar14[6];
      *(long *)(param_1 + 0x1b8) = lVar23;
      if (lVar23 == 0) goto LAB_7103611d6c;
      puVar21 = *(undefined8 **)(lVar23 + 8);
      *(undefined8 **)(param_1 + 0x1c0) = puVar21;
      uVar22 = *puVar21;
    }
    *(undefined8 *)(param_1 + 0x1c8) = uVar22;
  }
  plVar14 = FUN_7103556f50(*(long **)(lVar30 + 0x40),(byte *)&local_f8);
  if (plVar14 != (long *)0x0) {
    if (((long *)plVar14[7] == (long *)0x0) || (*(long *)plVar14[7] != plVar14[8])) {
      *(undefined8 *)(param_1 + 0x1d8) = 0;
LAB_7103611dc4:
      uVar22 = 0;
      *(undefined8 *)(param_1 + 0x1e0) = 0;
    }
    else {
      lVar23 = plVar14[6];
      *(long *)(param_1 + 0x1d8) = lVar23;
      if (lVar23 == 0) goto LAB_7103611dc4;
      puVar21 = *(undefined8 **)(lVar23 + 8);
      *(undefined8 **)(param_1 + 0x1e0) = puVar21;
      uVar22 = *puVar21;
    }
    *(undefined8 *)(param_1 + 0x1e8) = uVar22;
  }
  plVar14 = FUN_7103556f50(*(long **)(lVar28 + 0x40),(byte *)&local_f8);
  if (plVar14 == (long *)0x0) goto LAB_7103611e24;
  if (((long *)plVar14[7] == (long *)0x0) || (*(long *)plVar14[7] != plVar14[8])) {
    *(undefined8 *)(param_1 + 0x1f8) = 0;
LAB_7103611e18:
    uVar22 = 0;
    *(undefined8 *)(param_1 + 0x200) = 0;
  }
  else {
    lVar23 = plVar14[6];
    *(long *)(param_1 + 0x1f8) = lVar23;
    if (lVar23 == 0) goto LAB_7103611e18;
    puVar21 = *(undefined8 **)(lVar23 + 8);
    *(undefined8 **)(param_1 + 0x200) = puVar21;
    uVar22 = *puVar21;
  }
  *(undefined8 *)(param_1 + 0x208) = uVar22;
LAB_7103611e24:
  *(undefined1 *)(param_1 + 0x168) = 0;
  if (*(long *)(param_1 + 0x178) != 0) {
    *(undefined4 *)(*(long *)(param_1 + 0x178) + 0x18) = 0;
  }
  if (*(long *)(param_1 + 0x198) != 0) {
    *(undefined4 *)(*(long *)(param_1 + 0x198) + 0x18) = 0;
  }
  if (*(long *)(param_1 + 0x1b8) != 0) {
    *(undefined4 *)(*(long *)(param_1 + 0x1b8) + 0x18) = 0;
  }
  if (*(long *)(param_1 + 0x1d8) != 0) {
    *(undefined4 *)(*(long *)(param_1 + 0x1d8) + 0x18) = 0;
  }
  if (*(long *)(param_1 + 0x1f8) != 0) {
    *(undefined4 *)(*(long *)(param_1 + 0x1f8) + 0x18) = 0;
  }
  lVar35 = *(long *)(param_1 + 0x70);
  for (lVar23 = *(long *)(param_1 + 0x68); uVar16 = local_d8, plVar14 = local_c8, lVar23 != lVar35;
      lVar23 = lVar23 + 0x20) {
    lVar28 = *(long *)(lVar23 + 8);
    lVar34 = *(long *)(lVar28 + 0x30);
    lVar30 = *(long *)(lVar28 + 0x38);
    if (lVar30 != lVar34) {
      if (lVar34 == lVar30) {
        bVar25 = 0;
      }
      else {
        bVar25 = 0;
        do {
          lVar26 = lVar34 + 0x40;
          cVar4 = *(char *)(*(long *)(lVar34 + 8) + 0x14);
          bVar25 = bVar25 | cVar4 != '\0';
          lVar34 = lVar26;
        } while (cVar4 == '\0' && lVar30 != lVar26);
      }
      *(byte *)(*(long *)(lVar28 + 0x18) + 0xf0) = bVar25;
    }
  }
  while (plVar14 != (long *)0x0) {
    plVar36 = (long *)*plVar14;
    local_d8 = uVar16;
    if ((*(byte *)(plVar14 + 2) & 1) != 0) {
      pvVar31 = (void *)plVar14[4];
      nu::VirtualFreeHook(pvVar31);
      FUN_710392eb40((ulong)pvVar31);
    }
    FUN_710392eb40((ulong)plVar14);
    uVar16 = local_d8;
    plVar14 = plVar36;
  }
  local_d8 = 0;
  uVar29 = local_b0;
  plVar14 = local_a0;
  if (uVar16 != 0) {
    FUN_710392eb40(uVar16);
    uVar29 = local_b0;
    plVar14 = local_a0;
  }
  while (plVar14 != (long *)0x0) {
    plVar36 = (long *)*plVar14;
    local_b0 = uVar29;
    if ((*(byte *)(plVar14 + 5) & 1) != 0) {
      pvVar31 = (void *)plVar14[7];
      nu::VirtualFreeHook(pvVar31);
      FUN_710392eb40((ulong)pvVar31);
    }
    if ((*(byte *)(plVar14 + 2) & 1) != 0) {
      pvVar31 = (void *)plVar14[4];
      nu::VirtualFreeHook(pvVar31);
      FUN_710392eb40((ulong)pvVar31);
    }
    FUN_710392eb40((ulong)plVar14);
    uVar29 = local_b0;
    plVar14 = plVar36;
  }
  local_b0 = 0;
  if (uVar29 != 0) {
    FUN_710392eb40(uVar29);
  }
  return local_158;
}

