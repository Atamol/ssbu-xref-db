// addr:      71014b0760
// offset:    0x14b0760
// name:      FUN_71014b0760
// mangled:   
// signature: undefined __cdecl FUN_71014b0760(undefined8 param_1, undefined8 param_2, long * * * * param_3, byte * * * * param_4, long * * * * param_5, ulong param_6, long * * * param_7, long * * * param_8)


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_71014b0760(undefined8 param_1,undefined8 param_2,long ****param_3,byte ****param_4,
                   long ****param_5,ulong param_6,long ***param_7,long ***param_8)

{
  undefined4 *puVar1;
  byte bVar2;
  char cVar3;
  char cVar4;
  uint uVar5;
  int iVar6;
  undefined1 auVar7 [16];
  long *plVar8;
  bool bVar9;
  uint uVar10;
  int iVar11;
  long ****pppplVar12;
  long *plVar13;
  ulong *puVar14;
  void *pvVar15;
  ulong uVar16;
  undefined **ppuVar17;
  byte ****ppppbVar18;
  long ****pppplVar19;
  undefined2 uVar20;
  int iVar21;
  undefined8 *puVar22;
  ulong uVar23;
  long ***ppplVar24;
  undefined2 uVar25;
  long lVar26;
  byte bVar27;
  long lVar28;
  char *pcVar29;
  void *pvVar30;
  long lVar31;
  long lVar32;
  undefined4 uVar33;
  undefined4 *puVar34;
  ulong uVar35;
  uint uVar36;
  undefined1 auVar37 [16];
  undefined8 local_c0;
  ulong uStack_b8;
  long ***ppplStack_b0;
  ulong uStack_a8;
  undefined8 local_a0;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined8 local_90;
  undefined4 local_88;
  undefined8 local_84;
  undefined8 local_7c;
  undefined4 local_64;
  
  puVar22 = DAT_7105329f50;
  plVar8 = DAT_71052c36c0;
  FUN_7103737a20(0,0);
  FUN_71037415c0(0);
  pcVar29 = (char *)*puVar22;
  FUN_71037415c0(0);
  if (*pcVar29 != '\0') {
    *pcVar29 = '\0';
  }
  lVar31 = DAT_7105335e90;
  if (*(char *)(DAT_7105337ce8 + 0x58d) == '\0') {
    *(undefined4 *)(*(long *)(DAT_7105335e90 + 8) + 0x1158) = 0;
    *(undefined1 *)(**(long **)(*(long *)(lVar31 + 8) + 0x20b8) + 0x321) = 1;
  }
  FUN_7103313da0(*(undefined8 **)(DAT_710532f8d0 + 8),0,param_3,param_4,param_5,param_6,param_7,
                 param_8);
  local_c0 = _ConstantZero;
  auVar7._8_8_ = _DAT_7107521008;
  auVar7._0_8_ = _ConstantZero;
  auVar37._8_8_ = _DAT_7107521008;
  auVar37._0_8_ = _ConstantZero;
  auVar37 = NEON_ext(auVar37,auVar7,8,1);
  uStack_b8 = (ulong)auVar37._0_4_;
  lVar31 = *(long *)(**(long **)(*plVar8 + 0x28) + 0x28);
  local_7c = 0x3f80000000000000;
  local_84 = 0;
  uStack_94 = *(undefined4 *)(*lib::Singleton<app::ItemParamAccessor>::instance_ + 0x46a2c);
  local_a0 = 0x50000000000001aa;
  local_98 = 0xffffffff;
  local_90 = 0x1450000000;
  ppppbVar18 = (byte ****)0x0;
  pppplVar19 = (long ****)0x0;
  local_88 = 0xffffffff;
  ppplStack_b0 = local_c0;
  uStack_a8 = uStack_b8;
  pppplVar12 = FUN_71015db0b0(lib::Singleton<app::ItemManager>::instance_,&local_c0,1,(byte ****)0x0
                              ,(long ****)0x0,param_6,param_7,param_8);
  puVar22 = *(undefined8 **)(lVar31 + 0x10);
  puVar22[1] = pppplVar12;
  *(long *****)(*(long *)*puVar22 + 0xe0) = pppplVar12;
  ppuVar17 = (undefined **)0x20000008;
  (*(code *)(*pppplVar12[0x1d])[0x26])(pppplVar12[0x1d],0);
  FUN_71014c0bb0((long *)pppplVar12);
  puVar22 = (undefined8 *)**(undefined8 **)(*plVar8 + 0x18);
  plVar13 = (long *)(**(code **)(*(long *)*puVar22 + 0x20))();
  puVar14 = FUN_71014c3330(*(ulong **)(*(long *)(*plVar13 + 8) + 0x10),0x4d114b4f6,
                           (long ****)ppuVar17,ppppbVar18,pppplVar19,param_6,param_7,param_8);
  (**(code **)(*(long *)*puVar14 + 0x28))();
  *(undefined1 *)((long)puVar22 + 0x154) = 0;
  puVar22 = (undefined8 *)**(undefined8 **)(*plVar8 + 0x18);
  plVar13 = (long *)(**(code **)(*(long *)*puVar22 + 0x10))();
  lVar26 = *plVar13;
  lVar31 = *(long *)(lVar26 + 0x268);
  if ((lVar31 == *(long *)(lVar26 + 0x270)) ||
     ((ulong)(*(long *)(lVar26 + 0x270) - lVar31 >> 2) <= (ulong)*(uint *)(lVar26 + 0x280))) {
    uVar10 = 0;
  }
  else {
    uVar10 = *(uint *)(lVar31 + (ulong)*(uint *)(lVar26 + 0x280) * 4);
  }
  plVar13 = (long *)(**(code **)(*(long *)*puVar22 + 0x10))();
  if ((uint)((ulong)(*(long *)(*plVar13 + 0x270) - *(long *)(*plVar13 + 0x268)) >> 2) < 2) {
    iVar11 = *(int *)(*lib::Singleton<app::FighterManager>::instance_ + 0xa0);
  }
  else {
    iVar11 = 4;
  }
  plVar13 = (long *)(**(code **)(*(long *)*puVar22 + 0x10))();
  if (0 < iVar11) {
    if ((uint)((ulong)(*(long *)(*plVar13 + 0x270) - *(long *)(*plVar13 + 0x268)) >> 2) < 2) {
      lVar31 = *lib::Singleton<app::FighterManager>::instance_;
      iVar21 = 0;
      do {
        iVar6 = iVar21;
        if (*(long *)(lVar31 + 0x20) == 0) {
LAB_71014b0a20:
          if (*(long *)(lVar31 + 0x28) != 0) {
            if (iVar6 == 0) {
              uVar10 = 1;
              goto LAB_71014b0adc;
            }
            iVar6 = iVar6 + -1;
          }
          if (*(long *)(lVar31 + 0x30) != 0) {
            if (iVar6 == 0) {
              uVar10 = 2;
              goto LAB_71014b0adc;
            }
            iVar6 = iVar6 + -1;
          }
          if (*(long *)(lVar31 + 0x38) != 0) {
            if (iVar6 == 0) {
              uVar10 = 3;
              goto LAB_71014b0adc;
            }
            iVar6 = iVar6 + -1;
          }
          if (*(long *)(lVar31 + 0x40) != 0) {
            if (iVar6 == 0) {
              uVar10 = 4;
              goto LAB_71014b0adc;
            }
            iVar6 = iVar6 + -1;
          }
          if (*(long *)(lVar31 + 0x48) != 0) {
            if (iVar6 == 0) {
              uVar10 = 5;
              goto LAB_71014b0adc;
            }
            iVar6 = iVar6 + -1;
          }
          if (*(long *)(lVar31 + 0x50) != 0) {
            if (iVar6 == 0) {
              uVar10 = 6;
              goto LAB_71014b0adc;
            }
            iVar6 = iVar6 + -1;
          }
          uVar10 = 7;
          if (iVar6 == 0 && *(long *)(lVar31 + 0x58) != 0) goto LAB_71014b0adc;
        }
        else {
          if (iVar21 != 0) {
            iVar6 = iVar21 + -1;
            goto LAB_71014b0a20;
          }
          uVar10 = 0;
LAB_71014b0adc:
          if ((*(long *)(lVar31 + ((long)((ulong)uVar10 << 0x20) >> 0x1d) + 0x20) != 0) &&
             (7 < uVar10)) goto LAB_71014b179c;
        }
        iVar21 = iVar21 + 1;
      } while (iVar11 != iVar21);
    }
    else {
      iVar21 = 0;
      do {
        lVar31 = *lib::Singleton<app::FighterManager>::instance_;
        iVar6 = iVar21;
        if (*(long *)(lVar31 + 0x20) == 0) {
LAB_71014b0c64:
          if (*(long *)(lVar31 + 0x28) != 0) {
            if (iVar6 == 0) {
              uVar36 = 1;
              goto LAB_71014b0d18;
            }
            iVar6 = iVar6 + -1;
          }
          if (*(long *)(lVar31 + 0x30) != 0) {
            if (iVar6 == 0) {
              uVar36 = 2;
              goto LAB_71014b0d18;
            }
            iVar6 = iVar6 + -1;
          }
          if (*(long *)(lVar31 + 0x38) != 0) {
            if (iVar6 == 0) {
              uVar36 = 3;
              goto LAB_71014b0d18;
            }
            iVar6 = iVar6 + -1;
          }
          if (*(long *)(lVar31 + 0x40) != 0) {
            if (iVar6 == 0) {
              uVar36 = 4;
              goto LAB_71014b0d18;
            }
            iVar6 = iVar6 + -1;
          }
          if (*(long *)(lVar31 + 0x48) != 0) {
            if (iVar6 == 0) {
              uVar36 = 5;
              goto LAB_71014b0d18;
            }
            iVar6 = iVar6 + -1;
          }
          if (*(long *)(lVar31 + 0x50) != 0) {
            if (iVar6 == 0) {
              uVar36 = 6;
              goto LAB_71014b0d18;
            }
            iVar6 = iVar6 + -1;
          }
          uVar36 = 7;
          if (*(long *)(lVar31 + 0x58) == 0 || iVar6 != 0) {
            uVar36 = 0xffffffff;
          }
          if (uVar36 == 7) goto LAB_71014b0d18;
        }
        else {
          if (iVar21 != 0) {
            iVar6 = iVar21 + -1;
            goto LAB_71014b0c64;
          }
          uVar36 = 0;
LAB_71014b0d18:
          lVar31 = *(long *)(lVar31 + ((long)((ulong)uVar36 << 0x20) >> 0x1d) + 0x20);
          if (lVar31 != 0) {
            if (7 < uVar36) goto LAB_71014b179c;
            if (*(char *)(lVar31 + 0x34) == '\0') {
              FUN_7100659060(lVar31,uVar10 == uVar36);
              if ((uVar10 == uVar36) == (*(char *)(lVar31 + 0x5920) == '\x06')) {
LAB_71014b0b54:
                lVar26 = *(long *)(lVar31 + 0x60);
              }
              else {
                if (uVar10 == uVar36) {
                  FUN_7100656ee0(lVar31,0,ppuVar17,ppppbVar18,pppplVar19,param_6,param_7,param_8);
                  goto LAB_71014b0b54;
                }
                FUN_7100653490(lVar31,0);
                lVar26 = *(long *)(lVar31 + 0x60);
              }
              if (lVar26 != 0) {
                iVar6 = *(int *)(lVar26 + (long)*(int *)(lVar31 + 0xe0) * 0x260 + 0xc);
                if (iVar6 == -1) {
                  plVar13 = (long *)(**(long **)(DAT_71052c3420 + 8) + 0xc50);
                }
                else {
                  plVar13 = *(long **)(**(long **)(DAT_71052c3420 + 8) + (long)iVar6 * 8 + 0xc68);
                }
                if ((((DAT_71052c3420 != 0) && (plVar13[1] != 0)) &&
                    (uVar35 = (**(code **)(*plVar13 + 0x10))(plVar13), (uVar35 & 1) != 0)) &&
                   (((DAT_710532f8b0 == 0 || (*(int *)(*(long *)(DAT_710532f8b0 + 8) + 0x138) == 0))
                    || (*(char *)(*(long *)(DAT_710532f8b0 + 8) + 0x2b8) != '\v')))) {
                  uVar5 = *(uint *)((long)plVar13 + 0x14);
                  if (uVar5 != 0xffffffff && *(char *)(*(long *)plVar13[1] + 0x70) != '\0') {
                    if (7 < uVar5) goto LAB_71014b179c;
                    lVar26 = *(long *)(*(long *)plVar13[1] + 0xb0);
                    lVar31 = lVar26 + (long)(int)uVar5 * 0x2d0;
                    *(bool *)(lVar31 + 0x13b) = *(char *)(lVar26 + 99) != '\0' && uVar10 == uVar36;
                    *(undefined1 *)(lVar31 + 0x138) = 1;
                  }
                }
              }
            }
          }
        }
        iVar21 = iVar21 + 1;
      } while (iVar11 != iVar21);
    }
  }
  if (((DAT_71053144d8 & 1) == 0) && (iVar11 = __cxa_guard_acquire(&DAT_71053144d8), iVar11 != 0)) {
    FUN_7101764000();
    ppuVar17 = &PTR_LOOP_7104f17000;
    FUN_71000001c0();
    __cxa_guard_release(&DAT_71053144d8);
  }
  if ((DAT_71052c5258 == '\0') || (DAT_71052c51b0 != '\t')) {
    if ((DAT_71052c51b0 == '\t') && (DAT_71052c5259 != '\0')) {
      puVar34 = (undefined4 *)puVar22[0x33];
      if (puVar34 == (undefined4 *)puVar22[0x34]) {
        pvVar30 = (void *)puVar22[0x32];
        pppplVar12 = (long ****)((long)puVar34 - (long)pvVar30);
        uVar35 = ((long)pppplVar12 >> 2) + 1;
        if (uVar35 >> 0x3e != 0) goto LAB_71014b17a4;
        lVar31 = (long)puVar22[0x34] - (long)pvVar30;
        if ((ulong)(lVar31 >> 2) < 0x1fffffffffffffff) {
          uVar23 = lVar31 >> 1;
          if (uVar35 <= uVar23) {
            uVar35 = uVar23;
          }
          if (uVar35 != 0) {
            if (uVar35 >> 0x3e != 0) goto LAB_71014b179c;
            goto LAB_71014b1034;
          }
LAB_71014b1094:
          pvVar15 = (void *)0x0;
        }
        else {
          uVar35 = 0x3fffffffffffffff;
LAB_71014b1034:
          ppplVar24 = (long ***)(uVar35 * 4);
          if (ppplVar24 == (long ***)0x0) {
            ppplVar24 = (long ***)0x1;
          }
          pvVar15 = (void *)FUN_710392e290(0x10,ppplVar24,(long ****)ppuVar17,ppppbVar18,pppplVar19,
                                           param_6,param_7,param_8);
          if (pvVar15 == (void *)0x0) {
            if (DAT_7105332f00 != (long *)0x0) {
              local_64 = 0;
              ppuVar17 = (undefined **)&local_c0;
              local_c0 = ppplVar24;
              uVar23 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_64);
              if (((uVar23 & 1) != 0) &&
                 (pvVar15 = (void *)FUN_710392e290(0x10,ppplVar24,(long ****)ppuVar17,ppppbVar18,
                                                   pppplVar19,param_6,param_7,param_8),
                 pvVar15 != (void *)0x0)) goto LAB_71014b1098;
            }
            goto LAB_71014b1094;
          }
        }
LAB_71014b1098:
        puVar1 = (undefined4 *)((long)pvVar15 + ((long)pppplVar12 >> 2) * 4);
        puVar34 = puVar1 + 1;
        *puVar1 = 0;
        if (0 < (long)pppplVar12) {
          memcpy(pvVar15,pvVar30,(size_t)pppplVar12);
          ppuVar17 = (undefined **)pppplVar12;
        }
        puVar22[0x32] = pvVar15;
        puVar22[0x33] = puVar34;
        puVar22[0x34] = (void *)((long)pvVar15 + uVar35 * 4);
        if (pvVar30 != (void *)0x0) {
          FUN_710392eb40((ulong)pvVar30);
          puVar34 = (undefined4 *)puVar22[0x33];
        }
      }
      else {
        *puVar34 = 0;
        puVar34 = (undefined4 *)(puVar22[0x33] + 4);
        puVar22[0x33] = puVar34;
      }
      if (puVar34 != (undefined4 *)puVar22[0x34]) {
        *puVar34 = 1;
        goto LAB_71014b10e8;
      }
      pvVar30 = (void *)puVar22[0x32];
      pppplVar12 = (long ****)((long)puVar34 - (long)pvVar30);
      uVar23 = (long)pppplVar12 >> 2;
      uVar35 = uVar23 + 1;
      if (uVar35 >> 0x3e != 0) {
LAB_71014b17a4:
                    /* WARNING: Subroutine does not return */
        std::__vector_base_common<true>::__throw_length_error();
      }
      if (uVar23 < 0x1fffffffffffffff) {
        if (uVar35 <= (ulong)((long)pppplVar12 >> 1)) {
          uVar35 = (long)pppplVar12 >> 1;
        }
        if (uVar35 != 0) {
          if (uVar35 >> 0x3e != 0) goto LAB_71014b179c;
          goto LAB_71014b113c;
        }
LAB_71014b119c:
        pvVar15 = (void *)0x0;
      }
      else {
        uVar35 = 0x3fffffffffffffff;
LAB_71014b113c:
        ppplVar24 = (long ***)(uVar35 * 4);
        if (ppplVar24 == (long ***)0x0) {
          ppplVar24 = (long ***)0x1;
        }
        pvVar15 = (void *)FUN_710392e290(0x10,ppplVar24,(long ****)ppuVar17,ppppbVar18,pppplVar19,
                                         param_6,param_7,param_8);
        if (pvVar15 == (void *)0x0) {
          if (DAT_7105332f00 != (long *)0x0) {
            local_64 = 0;
            ppuVar17 = (undefined **)&local_c0;
            local_c0 = ppplVar24;
            uVar16 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_64);
            if (((uVar16 & 1) != 0) &&
               (pvVar15 = (void *)FUN_710392e290(0x10,ppplVar24,(long ****)ppuVar17,ppppbVar18,
                                                 pppplVar19,param_6,param_7,param_8),
               pvVar15 != (void *)0x0)) goto LAB_71014b11a0;
          }
          goto LAB_71014b119c;
        }
      }
LAB_71014b11a0:
      puVar34 = (undefined4 *)((long)pvVar15 + uVar23 * 4);
      *puVar34 = 1;
      if (0 < (long)pppplVar12) {
        memcpy(pvVar15,pvVar30,(size_t)pppplVar12);
        ppuVar17 = (undefined **)pppplVar12;
      }
      puVar22[0x32] = pvVar15;
      puVar22[0x33] = puVar34 + 1;
      puVar22[0x34] = (void *)((long)pvVar15 + uVar35 * 4);
    }
    else {
      plVar13 = (long *)(**(code **)(*(long *)*puVar22 + 0x10))();
      lVar26 = *plVar13;
      lVar31 = *(long *)(lVar26 + 0x268);
      if ((lVar31 == *(long *)(lVar26 + 0x270)) ||
         ((ulong)(*(long *)(lVar26 + 0x270) - lVar31 >> 2) <= (ulong)*(uint *)(lVar26 + 0x280))) {
        uVar33 = 0;
      }
      else {
        uVar33 = *(undefined4 *)(lVar31 + (ulong)*(uint *)(lVar26 + 0x280) * 4);
      }
      puVar34 = (undefined4 *)puVar22[0x33];
      if (puVar34 != (undefined4 *)puVar22[0x34]) {
        *puVar34 = uVar33;
        goto LAB_71014b10e8;
      }
      pvVar30 = (void *)puVar22[0x32];
      pppplVar12 = (long ****)((long)puVar34 - (long)pvVar30);
      uVar35 = ((long)pppplVar12 >> 2) + 1;
      if (uVar35 >> 0x3e != 0) goto LAB_71014b17a0;
      lVar31 = (long)puVar22[0x34] - (long)pvVar30;
      if ((ulong)(lVar31 >> 2) < 0x1fffffffffffffff) {
        uVar23 = lVar31 >> 1;
        if (uVar35 <= uVar23) {
          uVar35 = uVar23;
        }
        if (uVar35 != 0) {
          if (uVar35 >> 0x3e != 0) goto LAB_71014b179c;
          goto LAB_71014b0f94;
        }
LAB_71014b0ff4:
        pvVar15 = (void *)0x0;
      }
      else {
        uVar35 = 0x3fffffffffffffff;
LAB_71014b0f94:
        ppplVar24 = (long ***)(uVar35 * 4);
        if (ppplVar24 == (long ***)0x0) {
          ppplVar24 = (long ***)0x1;
        }
        pvVar15 = (void *)FUN_710392e290(0x10,ppplVar24,(long ****)ppuVar17,ppppbVar18,pppplVar19,
                                         param_6,param_7,param_8);
        if (pvVar15 == (void *)0x0) {
          if (DAT_7105332f00 != (long *)0x0) {
            local_64 = 0;
            ppuVar17 = (undefined **)&local_c0;
            local_c0 = ppplVar24;
            uVar23 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_64);
            if (((uVar23 & 1) != 0) &&
               (pvVar15 = (void *)FUN_710392e290(0x10,ppplVar24,(long ****)ppuVar17,ppppbVar18,
                                                 pppplVar19,param_6,param_7,param_8),
               pvVar15 != (void *)0x0)) goto LAB_71014b0ff8;
          }
          goto LAB_71014b0ff4;
        }
      }
LAB_71014b0ff8:
      puVar34 = (undefined4 *)((long)pvVar15 + ((long)pppplVar12 >> 2) * 4);
      *puVar34 = uVar33;
      if (0 < (long)pppplVar12) {
        memcpy(pvVar15,pvVar30,(size_t)pppplVar12);
        ppuVar17 = (undefined **)pppplVar12;
      }
      puVar22[0x32] = pvVar15;
      puVar22[0x33] = puVar34 + 1;
      puVar22[0x34] = (void *)((long)pvVar15 + uVar35 * 4);
    }
    if (pvVar30 == (void *)0x0) goto LAB_71014b11dc;
LAB_71014b11d8:
    FUN_710392eb40((ulong)pvVar30);
  }
  else {
    puVar34 = (undefined4 *)puVar22[0x33];
    if (puVar34 == (undefined4 *)puVar22[0x34]) {
      pvVar30 = (void *)puVar22[0x32];
      pppplVar12 = (long ****)((long)puVar34 - (long)pvVar30);
      uVar35 = ((long)pppplVar12 >> 2) + 1;
      if (uVar35 >> 0x3e != 0) {
LAB_71014b17a0:
                    /* WARNING: Subroutine does not return */
        std::__vector_base_common<true>::__throw_length_error();
      }
      lVar31 = (long)puVar22[0x34] - (long)pvVar30;
      if ((ulong)(lVar31 >> 2) < 0x1fffffffffffffff) {
        uVar23 = lVar31 >> 1;
        if (uVar35 <= uVar23) {
          uVar35 = uVar23;
        }
        if (uVar35 != 0) {
          if (uVar35 >> 0x3e != 0) goto LAB_71014b179c;
          goto LAB_71014b0ef8;
        }
LAB_71014b0f58:
        pvVar15 = (void *)0x0;
      }
      else {
        uVar35 = 0x3fffffffffffffff;
LAB_71014b0ef8:
        ppplVar24 = (long ***)(uVar35 * 4);
        if (ppplVar24 == (long ***)0x0) {
          ppplVar24 = (long ***)0x1;
        }
        pvVar15 = (void *)FUN_710392e290(0x10,ppplVar24,(long ****)ppuVar17,ppppbVar18,pppplVar19,
                                         param_6,param_7,param_8);
        if (pvVar15 == (void *)0x0) {
          if (DAT_7105332f00 != (long *)0x0) {
            local_64 = 0;
            ppuVar17 = (undefined **)&local_c0;
            local_c0 = ppplVar24;
            uVar23 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_64);
            if (((uVar23 & 1) != 0) &&
               (pvVar15 = (void *)FUN_710392e290(0x10,ppplVar24,(long ****)ppuVar17,ppppbVar18,
                                                 pppplVar19,param_6,param_7,param_8),
               pvVar15 != (void *)0x0)) goto LAB_71014b0f5c;
          }
          goto LAB_71014b0f58;
        }
      }
LAB_71014b0f5c:
      puVar34 = (undefined4 *)((long)pvVar15 + ((long)pppplVar12 >> 2) * 4);
      *puVar34 = 0;
      if (0 < (long)pppplVar12) {
        memcpy(pvVar15,pvVar30,(size_t)pppplVar12);
        ppuVar17 = (undefined **)pppplVar12;
      }
      puVar22[0x32] = pvVar15;
      puVar22[0x33] = puVar34 + 1;
      puVar22[0x34] = (void *)((long)pvVar15 + uVar35 * 4);
      if (pvVar30 != (void *)0x0) goto LAB_71014b11d8;
    }
    else {
      *puVar34 = 0;
LAB_71014b10e8:
      puVar22[0x33] = puVar22[0x33] + 4;
    }
  }
LAB_71014b11dc:
  if ((uint)((ulong)(*(long *)(**(long **)(*plVar8 + 8) + 0x270) -
                    *(long *)(**(long **)(*plVar8 + 8) + 0x268)) >> 2) < 2) {
    if (((DAT_71053144d8 & 1) == 0) && (iVar11 = __cxa_guard_acquire(&DAT_71053144d8), iVar11 != 0))
    {
      FUN_7101764000();
      ppuVar17 = &PTR_LOOP_7104f17000;
      FUN_71000001c0();
      __cxa_guard_release(&DAT_71053144d8);
    }
    bVar27 = 2;
    if (DAT_71052c599a != '\0') {
      bVar27 = 1;
    }
    bVar2 = DAT_71052c599a == '\0';
    if (DAT_71052c573a == '\0') {
      bVar2 = bVar27;
    }
    if (DAT_71052c5bfa == '\0') {
      bVar2 = bVar2 + 1;
    }
    if (DAT_71052c5e5a == '\0') {
      bVar2 = bVar2 + 1;
    }
    if (DAT_71052c60ba == '\0') {
      bVar2 = bVar2 + 1;
    }
    if (DAT_71052c631a == '\0') {
      bVar2 = bVar2 + 1;
    }
    if (DAT_71052c657a == '\0') {
      bVar2 = bVar2 + 1;
    }
    if (DAT_71052c67da == '\0') {
      bVar2 = bVar2 + 1;
    }
    if (1 < bVar2) {
      pcVar29 = &DAT_71052c573a;
      lVar31 = 8;
      do {
        if (*pcVar29 == '\0') {
          cVar3 = pcVar29[0x57];
          cVar4 = pcVar29[0x1b0];
          uVar10 = FUN_71017a7d70(0x71052c5730,(uint *)(pcVar29 + 2),ppuVar17,ppppbVar18,pppplVar19,
                                  param_6,param_7,param_8);
          uVar20 = 10;
          if (cVar4 == '\0') {
            uVar20 = *(undefined2 *)
                      (&DAT_7104469b00 + ((long)(((ulong)uVar10 << 0x20) + -0x100000000) >> 0x1f));
            if (cVar3 != '\0') goto LAB_71014b12e8;
LAB_71014b1314:
            uVar25 = 0;
          }
          else {
            if (cVar3 == '\0') goto LAB_71014b1314;
LAB_71014b12e8:
            uVar10 = *(uint *)(pcVar29 + 0x1a);
            if (2 < (int)uVar10) {
              uVar10 = 3;
            }
            uVar25 = *(undefined2 *)
                      (&DAT_7104465280 + (ulong)(uVar10 & ((int)uVar10 >> 0x1f ^ 0xffffffffU)) * 2);
          }
          local_c0._0_5_ = CONCAT14(cVar3 != '\0',CONCAT22(uVar25,uVar20));
          if (*(int *)(pcVar29 + 2) == -1) {
            lVar26 = **(long **)(DAT_71052c3420 + 8) + 0xc50;
          }
          else {
            lVar26 = *(long *)(**(long **)(DAT_71052c3420 + 8) + (long)*(int *)(pcVar29 + 2) * 8 +
                              0xc68);
          }
          ppuVar17 = (undefined **)(ulong)(byte)pcVar29[0x1b3];
          FUN_710138b2d0(lVar26,(uint *)&local_c0,(uint)(byte)pcVar29[0x1b3]);
        }
        lVar31 = lVar31 + -1;
        pcVar29 = pcVar29 + 0x260;
      } while (lVar31 != 0);
    }
  }
  lVar26 = **(long **)(*plVar8 + 8);
  lVar31 = *(long *)(lVar26 + 0x268);
  if ((lVar31 == *(long *)(lVar26 + 0x270)) ||
     ((ulong)(*(long *)(lVar26 + 0x270) - lVar31 >> 2) <= (ulong)*(uint *)(lVar26 + 0x280))) {
    lVar31 = 0;
  }
  else {
    lVar31 = (long)*(int *)(lVar31 + (ulong)*(uint *)(lVar26 + 0x280) * 4);
  }
  if (((DAT_71053144d8 & 1) == 0) && (iVar11 = __cxa_guard_acquire(&DAT_71053144d8), iVar11 != 0)) {
    FUN_7101764000();
    FUN_71000001c0();
    __cxa_guard_release(&DAT_71053144d8);
  }
  uVar10 = (&DAT_71052c574c)[lVar31 * 0x98];
  lVar32 = **(long **)(DAT_71052c3420 + 8);
  lVar31 = *(long *)(**(long **)(lVar32 + 0xc40) + 0x9a0);
  *(undefined4 *)(lVar31 + 0x14) = 0;
  lVar26 = *(long *)(*(long *)(lVar31 + 8) + 0x80);
  FUN_710377a280(lVar26 + 0x180,(byte *)"mel_homerun_distance_n",1);
  FUN_710377a280(lVar26 + 400,(byte *)"mel_homerun_distance_decimal_n",1);
  *(undefined4 *)(lVar31 + 0x10) = *(undefined4 *)(lVar31 + 0x14);
  FUN_710377aee0(0x3f800000,
                 *(long *)(*(long *)(*(long *)(**(long **)(lVar32 + 0xc40) + 0x9a0) + 8) + 0x80) +
                 0x40);
  lVar26 = **(long **)(*plVar8 + 8);
  lVar31 = *(long *)(lVar26 + 0x268);
  if ((lVar31 == *(long *)(lVar26 + 0x270)) ||
     ((ulong)(*(long *)(lVar26 + 0x270) - lVar31 >> 2) <= (ulong)*(uint *)(lVar26 + 0x280))) {
    iVar11 = 0;
  }
  else {
    iVar11 = *(int *)(lVar31 + (ulong)*(uint *)(lVar26 + 0x280) * 4);
  }
  FUN_71013a92e0(*(long **)(**(long **)(lVar32 + 0xc40) + 0x9a0),iVar11,uVar10);
  FUN_710377a280(*(long *)(*(long *)(*(long *)(**(long **)(lVar32 + 0xc40) + 0x9a0) + 8) + 0x80) +
                 0x1a0,(byte *)"mel_homerun_world_pw_n",1);
  if (((DAT_71053144d8 & 1) == 0) && (iVar11 = __cxa_guard_acquire(&DAT_71053144d8), iVar11 != 0)) {
    FUN_7101764000();
    FUN_71000001c0();
    __cxa_guard_release(&DAT_71053144d8);
  }
  if (DAT_71052c51b6 == '\0') {
    lVar31 = 0x2120;
    if (DAT_71052c5259 == '\0' || DAT_71052c51b0 != '\t') {
      lVar31 = 0x1dd0;
    }
    bVar9 = *(int *)(*(long *)(**(long **)(*DAT_7105314510 + 0x68) + 8) + lVar31 + 0x20) != 0;
  }
  else {
    bVar9 = false;
  }
  lVar31 = *(long *)(**(long **)(lVar32 + 0xc40) + 0x9a0);
  lVar26 = *(long *)(*(long *)(lVar31 + 8) + 0x80);
  lVar28 = **(long **)(lVar26 + 0x1c8);
  if (lVar28 != 0) {
    *(byte *)(lVar28 + 0x58) = *(byte *)(lVar28 + 0x58) & 0xfe | bVar9;
  }
  lVar28 = **(long **)(lVar26 + 0x1d8);
  if (lVar28 != 0) {
    *(byte *)(lVar28 + 0x58) = *(byte *)(lVar28 + 0x58) & 0xfe | bVar9;
  }
  lVar28 = **(long **)(lVar26 + 0x1e8);
  if (lVar28 != 0) {
    *(byte *)(lVar28 + 0x58) = *(byte *)(lVar28 + 0x58) & 0xfe | bVar9;
  }
  lVar26 = **(long **)(lVar26 + 0x1b8);
  if (lVar26 != 0) {
    *(byte *)(lVar26 + 0x58) = *(byte *)(lVar26 + 0x58) & 0xfe | bVar9;
  }
  lVar31 = **(long **)(*(long *)(*(long *)(lVar31 + 8) + 0x80) + 0x1f8);
  if (lVar31 != 0) {
    *(byte *)(lVar31 + 0x58) = *(byte *)(lVar31 + 0x58) & 0xfe | bVar9;
  }
  lVar31 = *(long *)(*(long *)(*(long *)(**(long **)(lVar32 + 0xc40) + 0x9a0) + 8) + 0x80);
  if (*(uint *)(lVar31 + 0x3e4) < 0x13) {
    *(undefined4 *)(lVar31 + (long)(int)*(uint *)(lVar31 + 0x3e4) * 4 + 0x398) = 0;
    FUN_710377aee0(0x3f800000,lVar31 + 0x100);
    FUN_710377aee0(0x3f800000,
                   *(long *)(*(long *)(*(long *)(**(long **)(lVar32 + 0xc40) + 0x9a0) + 8) + 0x80) +
                   0x20);
    FUN_710377aee0(0x3f800000,
                   *(long *)(*(long *)(*(long *)(**(long **)(lVar32 + 0xc40) + 0x9a0) + 8) + 0x80) +
                   0x60);
    FUN_71013a9650(*(long *)(**(long **)(lVar32 + 0xc40) + 0x9a0));
    FUN_71013a97b0(*(long *)(**(long **)(lVar32 + 0xc40) + 0x9a0));
    return;
  }
LAB_71014b179c:
                    /* WARNING: Subroutine does not return */
  abort();
}

