// addr:      71036a5250
// offset:    0x36a5250
// name:      FUN_71036a5250
// mangled:   
// signature: undefined __cdecl FUN_71036a5250(long param_1, long param_2, undefined * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_71036a5250(long param_1,long param_2,undefined **param_3,byte ****param_4,long ****param_5,
                   undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  ulong *puVar1;
  undefined4 *puVar2;
  int iVar3;
  ulong *puVar4;
  ulong *puVar5;
  char *__s1;
  void *pvVar6;
  ulong uVar7;
  size_t __n;
  ulong *puVar8;
  long ****pppplVar9;
  long lVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  undefined1 *puVar13;
  ulong uVar14;
  byte *pbVar15;
  long lVar16;
  long ***ppplVar17;
  ulong uVar18;
  ulong *puVar19;
  undefined1 *puVar20;
  ulong *puVar21;
  int *piVar22;
  ulong *puVar23;
  undefined4 *puVar24;
  int *piVar25;
  int *piVar26;
  ulong *puVar27;
  ulong uVar28;
  ulong uVar29;
  ulong uVar30;
  long ***ppplVar31;
  long lVar32;
  long lVar33;
  ulong uVar34;
  undefined4 *puVar35;
  void *pvVar36;
  long ****pppplVar37;
  undefined4 uVar38;
  undefined4 uVar39;
  long ***local_88;
  undefined4 local_7c [3];
  
  if ((*(long **)(param_2 + 0x10) == (long *)0x0) ||
     (**(long **)(param_2 + 0x10) != *(long *)(param_2 + 0x18))) {
    *(undefined8 *)(param_1 + 0x20) = 0;
LAB_71036a52b4:
    uVar12 = 0;
    *(undefined8 *)(param_1 + 0x28) = 0;
  }
  else {
    lVar10 = *(long *)(param_2 + 8);
    *(long *)(param_1 + 0x20) = lVar10;
    if (lVar10 == 0) goto LAB_71036a52b4;
    puVar11 = *(undefined8 **)(lVar10 + 8);
    *(undefined8 **)(param_1 + 0x28) = puVar11;
    uVar12 = *puVar11;
  }
  *(undefined8 *)(param_1 + 0x30) = uVar12;
  *(undefined8 *)(param_1 + 0x80) = *(undefined8 *)(param_1 + 0x78);
  *(undefined1 *)(param_1 + 0x70) = 0;
  puVar13 = *(undefined1 **)(param_1 + 0x38);
  puVar20 = *(undefined1 **)(param_1 + 0x40);
  if (puVar13 != puVar20) {
    do {
      *puVar13 = 0;
      puVar13[0x10] = 0;
      puVar13[0x20] = 0;
      puVar13[0x30] = 0;
      puVar13[0x40] = 0;
      puVar13[0x50] = 0;
      puVar13[0x60] = 0;
      puVar13[0x70] = 0;
      puVar13[0x80] = 0;
      puVar13[0x90] = 0;
      puVar13[0xa0] = 0;
      puVar13[0xb0] = 0;
      puVar13[0xc0] = 0;
      puVar13[0xd0] = 0;
      puVar13[0xe0] = 0;
      puVar13[0xf0] = 0;
      puVar13[0x100] = 0;
      puVar13[0x110] = 0;
      puVar13[0x120] = 0;
      puVar13[0x130] = 0;
      puVar13[0x140] = 0;
      puVar13[0x150] = 0;
      puVar13[0x160] = 0;
      puVar13 = puVar13 + 0x1a8;
    } while (puVar13 != puVar20);
    puVar13 = *(undefined1 **)(param_1 + 0x38);
    puVar20 = *(undefined1 **)(param_1 + 0x40);
  }
  if (puVar20 != puVar13) {
    uVar14 = 1;
    uVar28 = 0;
    do {
      uVar30 = uVar14;
      *(undefined2 *)(puVar13 + uVar28 * 0x1a8 + 0x188) = 0;
      *(undefined8 *)(puVar13 + uVar28 * 0x1a8 + 0x198) =
           *(undefined8 *)(puVar13 + uVar28 * 0x1a8 + 400);
      puVar13 = *(undefined1 **)(param_1 + 0x38);
      uVar29 = (*(long *)(param_1 + 0x40) - (long)puVar13 >> 3) * 0x21cfb2b78c13521d;
      uVar14 = (ulong)((int)uVar30 + 1);
      uVar28 = uVar30;
    } while (uVar30 <= uVar29 && uVar29 - uVar30 != 0);
  }
  if (*(long **)(param_2 + 0x10) == (long *)0x0) {
    return;
  }
  if (**(long **)(param_2 + 0x10) != *(long *)(param_2 + 0x18)) {
    return;
  }
  puVar4 = (ulong *)FUN_71038e0c50(*(long *)(param_2 + 8),4);
  if (puVar4 == (ulong *)0x0) {
    return;
  }
  puVar5 = (ulong *)FUN_71038e1ce0(*(long *)(param_2 + 8));
  if (puVar5 == (ulong *)0x0) goto LAB_71036a56f8;
  uVar14 = *puVar5;
  if ((uVar14 & 1) == 0) {
    piVar26 = (int *)((long)puVar5 + uVar14);
    lVar10 = puVar5[1] * 0x18;
    piVar22 = piVar26 + puVar5[1] * 6;
    if (lVar10 != 0) {
      uVar28 = (lVar10 >> 3) * -0x5555555555555555;
      piVar25 = piVar26;
      do {
        uVar30 = uVar28;
        if ((long)uVar28 < 0) {
          uVar30 = uVar28 + 1;
        }
        uVar30 = (long)uVar30 >> 1;
        piVar26 = piVar25 + uVar30 * 6 + 6;
        uVar28 = uVar28 + ~uVar30;
        if (3 < piVar25[uVar30 * 6]) {
          piVar26 = piVar25;
          uVar28 = uVar30;
        }
        piVar25 = piVar26;
      } while (uVar28 != 0);
    }
    if ((piVar26 != piVar22) && (*piVar26 < 5)) {
      piVar22 = piVar26;
    }
    if ((uVar14 & 1) == 0) goto LAB_71036a5454;
LAB_71036a54c4:
    if (piVar22 == (int *)(uVar14 - 0x18 | 1)) goto LAB_71036a56f8;
  }
  else {
    puVar21 = (ulong *)(uVar14 & 0xfffffffffffffffe);
    puVar27 = (ulong *)*puVar21;
    puVar23 = puVar21;
    if (puVar27 != (ulong *)0x0) {
      do {
        lVar10 = 0x10;
        if (3 < (int)puVar27[-3]) {
          lVar10 = 8;
          puVar23 = puVar27;
        }
        puVar27 = *(ulong **)((long)puVar27 + lVar10);
      } while (puVar27 != (ulong *)0x0);
      if ((puVar23 != puVar21) && ((int)puVar23[-3] < 5)) {
        puVar21 = puVar23;
      }
    }
    piVar22 = (int *)((ulong)(puVar21 + -3) | 1);
    if ((uVar14 & 1) != 0) goto LAB_71036a54c4;
LAB_71036a5454:
    if (piVar22 == (int *)((long)puVar5 + puVar5[1] * 0x18 + uVar14)) goto LAB_71036a56f8;
  }
  *(undefined1 *)(param_1 + 0x70) = 1;
  pvVar36 = *(void **)(param_1 + 0x78);
  uVar28 = (ulong)piVar22 & 0xfffffffffffffffe;
  uVar14 = *(ulong *)(uVar28 + 0x10);
  if ((ulong)(*(long *)(param_1 + 0x88) - (long)pvVar36 >> 3) < uVar14) {
    if (uVar14 >> 0x3d != 0) {
LAB_71036a7db8:
                    /* WARNING: Subroutine does not return */
      abort();
    }
    pppplVar37 = (long ****)(*(long *)(param_1 + 0x80) - (long)pvVar36);
    ppplVar17 = (long ***)(uVar14 * 8);
    if (ppplVar17 == (long ***)0x0) {
      ppplVar17 = (long ***)0x1;
    }
    lVar10 = (long)pppplVar37 >> 3;
    pvVar6 = (void *)FUN_710392e290(0x10,ppplVar17,(long ****)param_3,param_4,param_5,param_6,
                                    param_7,param_8);
    if (pvVar6 == (void *)0x0) {
      if (DAT_7105332f00 != (long *)0x0) {
        local_7c[0] = 0;
        param_3 = (undefined **)&local_88;
        local_88 = ppplVar17;
        uVar30 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,local_7c);
        if (((uVar30 & 1) != 0) &&
           (pvVar6 = (void *)FUN_710392e290(0x10,ppplVar17,(long ****)param_3,param_4,param_5,
                                            param_6,param_7,param_8), pvVar6 != (void *)0x0))
        goto LAB_71036a5574;
      }
      pvVar6 = (void *)0x0;
    }
LAB_71036a5574:
    if (0 < (long)pppplVar37) {
      memcpy(pvVar6,pvVar36,(size_t)pppplVar37);
      param_3 = (undefined **)pppplVar37;
    }
    *(void **)(param_1 + 0x78) = pvVar6;
    *(void **)(param_1 + 0x80) = (void *)((long)pvVar6 + lVar10 * 8);
    *(void **)(param_1 + 0x88) = (void *)((long)pvVar6 + uVar14 * 8);
    if (pvVar36 != (void *)0x0) {
      FUN_710392eb40((ulong)pvVar36);
    }
  }
  uVar14 = *(ulong *)(uVar28 + 8);
  puVar35 = (undefined4 *)(uVar28 + 8 + uVar14);
  if ((uVar14 & 1) != 0) {
    puVar35 = (undefined4 *)(uVar14 & 0xfffffffffffffffe);
  }
  if (*(long *)(uVar28 + 0x10) != 0) {
    puVar2 = puVar35 + *(long *)(uVar28 + 0x10) * 2;
    do {
      uVar38 = NEON_ucvtf(puVar35[1]);
      puVar24 = *(undefined4 **)(param_1 + 0x80);
      uVar39 = NEON_ucvtf(*puVar35);
      if (puVar24 < *(undefined4 **)(param_1 + 0x88)) {
        *puVar24 = uVar39;
        puVar24[1] = uVar38;
        *(long *)(param_1 + 0x80) = *(long *)(param_1 + 0x80) + 8;
      }
      else {
        pvVar36 = *(void **)(param_1 + 0x78);
        pppplVar37 = (long ****)((long)puVar24 - (long)pvVar36);
        uVar14 = ((long)pppplVar37 >> 3) + 1;
        if (uVar14 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
          std::__vector_base_common<true>::__throw_length_error();
        }
        lVar10 = (long)*(undefined4 **)(param_1 + 0x88) - (long)pvVar36;
        if ((ulong)(lVar10 >> 3) < 0xfffffffffffffff) {
          uVar28 = lVar10 >> 2;
          if (uVar14 <= uVar28) {
            uVar14 = uVar28;
          }
          if (uVar14 != 0) {
            if (uVar14 >> 0x3d == 0) goto LAB_71036a5644;
            goto LAB_71036a7db8;
          }
LAB_71036a56a4:
          pvVar6 = (void *)0x0;
        }
        else {
          uVar14 = 0x1fffffffffffffff;
LAB_71036a5644:
          ppplVar17 = (long ***)(uVar14 * 8);
          if (ppplVar17 == (long ***)0x0) {
            ppplVar17 = (long ***)0x1;
          }
          pvVar6 = (void *)FUN_710392e290(0x10,ppplVar17,(long ****)param_3,param_4,param_5,param_6,
                                          param_7,param_8);
          if (pvVar6 == (void *)0x0) {
            if (DAT_7105332f00 != (long *)0x0) {
              local_7c[0] = 0;
              param_3 = (undefined **)&local_88;
              local_88 = ppplVar17;
              uVar28 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,local_7c);
              if (((uVar28 & 1) != 0) &&
                 (pvVar6 = (void *)FUN_710392e290(0x10,ppplVar17,(long ****)param_3,param_4,param_5,
                                                  param_6,param_7,param_8), pvVar6 != (void *)0x0))
              goto LAB_71036a56a8;
            }
            goto LAB_71036a56a4;
          }
        }
LAB_71036a56a8:
        puVar24 = (undefined4 *)((long)pvVar6 + ((long)pppplVar37 >> 3) * 8);
        *puVar24 = uVar39;
        puVar24[1] = uVar38;
        if (0 < (long)pppplVar37) {
          memcpy(pvVar6,pvVar36,(size_t)pppplVar37);
          param_3 = (undefined **)pppplVar37;
        }
        *(void **)(param_1 + 0x78) = pvVar6;
        *(undefined4 **)(param_1 + 0x80) = puVar24 + 2;
        *(void **)(param_1 + 0x88) = (void *)((long)pvVar6 + uVar14 * 8);
        if (pvVar36 != (void *)0x0) {
          FUN_710392eb40((ulong)pvVar36);
        }
      }
      puVar35 = puVar35 + 2;
    } while (puVar35 != puVar2);
  }
LAB_71036a56f8:
  uVar14 = *puVar4;
  if ((uVar14 & 1) == 0) {
    uVar28 = (long)puVar4 + uVar14;
    uVar14 = uVar28 + puVar4[1] * 0x18;
  }
  else {
    uVar28 = *(long *)((uVar14 & 0xfffffffffffffffe) + 8) - 0x18U | 1;
    uVar14 = uVar14 - 0x18 | 1;
  }
  if (uVar28 != uVar14) {
    puVar4 = puVar5 + 2;
    lVar10 = *(long *)(param_1 + 0x40);
    lVar33 = lVar10;
    lVar16 = *(long *)(param_1 + 0x38);
    do {
      while (puVar23 = (ulong *)(uVar28 & 0xfffffffffffffffe), lVar32 = lVar16, lVar33 != lVar16) {
        uVar30 = 0;
        puVar21 = puVar23 + 1;
        lVar16 = lVar10;
        do {
          lVar10 = lVar32 + uVar30 * 0x1a8;
          if ((*(byte *)(lVar10 + 0x170) & 1) == 0) {
            __s1 = (char *)(lVar10 + 0x171);
            uVar29 = *puVar23;
            if ((uVar29 & 1) != 0) goto LAB_71036a57d8;
LAB_71036a5804:
            iVar3 = strcmp(__s1,(char *)((long)puVar23 + uVar29));
          }
          else {
            __s1 = *(char **)(lVar32 + uVar30 * 0x1a8 + 0x180);
            uVar29 = *puVar23;
            if ((uVar29 & 1) == 0) goto LAB_71036a5804;
LAB_71036a57d8:
            pbVar15 = (byte *)(uVar29 & 0xfffffffffffffffe);
            if ((*pbVar15 & 1) == 0) {
              iVar3 = strcmp(__s1,(char *)(pbVar15 + 1));
            }
            else {
              iVar3 = strcmp(__s1,*(char **)(pbVar15 + 0x10));
            }
          }
          if (iVar3 == 0) {
            lVar16 = lVar32 + uVar30 * 0x1a8;
            *(undefined1 *)(lVar16 + 0x188) = 1;
            puVar11 = (undefined8 *)(lVar16 + 400);
            uVar29 = 0;
            puVar27 = (ulong *)(lVar16 + 0x1a0);
            puVar1 = (ulong *)(lVar16 + 0x198);
            do {
              lVar33 = *(long *)(param_1 + 0x50);
              if (((DAT_7105339d78 & 1) == 0) &&
                 (iVar3 = __cxa_guard_acquire(&DAT_7105339d78), iVar3 != 0)) {
                DAT_7105339928 = 0xffffffffff224278;
                puVar8 = (ulong *)FUN_710392e290(0x10,0x18,(long ****)param_3,param_4,param_5,
                                                 param_6,param_7,param_8);
                if (puVar8 == (ulong *)0x0) {
                  if (DAT_7105332f00 != (long *)0x0) {
                    local_7c[0] = 0;
                    local_88 = (long ***)&SUB_00000018;
                    param_3 = (undefined **)&local_88;
                    uVar18 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,local_7c);
                    if (((uVar18 & 1) != 0) &&
                       (puVar8 = (ulong *)FUN_710392e290(0x10,0x18,(long ****)param_3,param_4,
                                                         param_5,param_6,param_7,param_8),
                       puVar8 != (ulong *)0x0)) goto LAB_71036a5ba0;
                  }
                  puVar8 = (ulong *)0x0;
                }
LAB_71036a5ba0:
                *puVar8 = 0;
                puVar8[1] = 0;
                puVar8[2] = 0;
                pppplVar37 = (long ****)strlen("");
                if ((long ****)0xffffffffffffffef < pppplVar37) goto LAB_71036a7dbc;
                if (pppplVar37 < (long ****)0x17) {
                  pvVar36 = (void *)((long)puVar8 + 1);
                  *(char *)puVar8 = (char)((int)pppplVar37 << 1);
                  if (pppplVar37 != (long ****)0x0) goto LAB_71036a5c70;
                }
                else {
                  ppplVar31 = (long ***)((ulong)(pppplVar37 + 2) & 0xfffffffffffffff0);
                  ppplVar17 = ppplVar31;
                  if (((ulong)(pppplVar37 + 2) & 0xfffffffffffffff0) == 0) {
                    ppplVar17 = (long ***)0x1;
                  }
                  pvVar36 = (void *)FUN_710392e290(0x10,ppplVar17,(long ****)param_3,param_4,param_5
                                                   ,param_6,param_7,param_8);
                  if (pvVar36 == (void *)0x0) {
                    if (DAT_7105332f00 != (long *)0x0) {
                      local_7c[0] = 0;
                      pppplVar9 = &local_88;
                      local_88 = ppplVar17;
                      uVar18 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,local_7c);
                      if (((uVar18 & 1) != 0) &&
                         (pvVar36 = (void *)FUN_710392e290(0x10,ppplVar17,pppplVar9,param_4,param_5,
                                                           param_6,param_7,param_8),
                         pvVar36 != (void *)0x0)) goto LAB_71036a5c58;
                    }
                    pvVar36 = (void *)0x0;
                  }
LAB_71036a5c58:
                  *puVar8 = (ulong)ppplVar31 | 1;
                  puVar8[1] = (ulong)pppplVar37;
                  puVar8[2] = (ulong)pvVar36;
LAB_71036a5c70:
                  param_3 = (undefined **)pppplVar37;
                  memcpy(pvVar36,&DAT_710455dba0,(size_t)pppplVar37);
                }
                *(undefined1 *)((long)pvVar36 + (long)pppplVar37) = 0;
                DAT_7105339928 = (ulong)puVar8 | 1;
                std::string::assign((char *)puVar8);
                DAT_7105339930 = 0xffffffffff224270;
                puVar8 = (ulong *)FUN_710392e290(0x10,0x18,(long ****)param_3,param_4,param_5,
                                                 param_6,param_7,param_8);
                if (puVar8 == (ulong *)0x0) {
                  if (DAT_7105332f00 != (long *)0x0) {
                    local_7c[0] = 0;
                    local_88 = (long ***)&SUB_00000018;
                    param_3 = (undefined **)&local_88;
                    uVar18 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,local_7c);
                    if (((uVar18 & 1) != 0) &&
                       (puVar8 = (ulong *)FUN_710392e290(0x10,0x18,(long ****)param_3,param_4,
                                                         param_5,param_6,param_7,param_8),
                       puVar8 != (ulong *)0x0)) goto LAB_71036a5d10;
                  }
                  puVar8 = (ulong *)0x0;
                }
LAB_71036a5d10:
                puVar8[1] = 0;
                puVar8[2] = 0;
                *puVar8 = 0;
                pppplVar37 = (long ****)strlen("");
                if ((long ****)0xffffffffffffffef < pppplVar37) goto LAB_71036a7dbc;
                if (pppplVar37 < (long ****)0x17) {
                  pvVar36 = (void *)((long)puVar8 + 1);
                  *(char *)puVar8 = (char)((int)pppplVar37 << 1);
                  if (pppplVar37 != (long ****)0x0) goto LAB_71036a5dd8;
                }
                else {
                  ppplVar31 = (long ***)((ulong)(pppplVar37 + 2) & 0xfffffffffffffff0);
                  ppplVar17 = ppplVar31;
                  if (((ulong)(pppplVar37 + 2) & 0xfffffffffffffff0) == 0) {
                    ppplVar17 = (long ***)0x1;
                  }
                  pvVar36 = (void *)FUN_710392e290(0x10,ppplVar17,(long ****)param_3,param_4,param_5
                                                   ,param_6,param_7,param_8);
                  if (pvVar36 == (void *)0x0) {
                    if (DAT_7105332f00 != (long *)0x0) {
                      local_7c[0] = 0;
                      pppplVar9 = &local_88;
                      local_88 = ppplVar17;
                      uVar18 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,local_7c);
                      if (((uVar18 & 1) != 0) &&
                         (pvVar36 = (void *)FUN_710392e290(0x10,ppplVar17,pppplVar9,param_4,param_5,
                                                           param_6,param_7,param_8),
                         pvVar36 != (void *)0x0)) goto LAB_71036a5dc0;
                    }
                    pvVar36 = (void *)0x0;
                  }
LAB_71036a5dc0:
                  *puVar8 = (ulong)ppplVar31 | 1;
                  puVar8[1] = (ulong)pppplVar37;
                  puVar8[2] = (ulong)pvVar36;
LAB_71036a5dd8:
                  param_3 = (undefined **)pppplVar37;
                  memcpy(pvVar36,&DAT_710455dba0,(size_t)pppplVar37);
                }
                *(undefined1 *)((long)pvVar36 + (long)pppplVar37) = 0;
                DAT_7105339930 = (ulong)puVar8 | 1;
                std::string::assign((char *)puVar8);
                DAT_7105339938 = 0xffffffffff224268;
                puVar8 = (ulong *)FUN_710392e290(0x10,0x18,(long ****)param_3,param_4,param_5,
                                                 param_6,param_7,param_8);
                if (puVar8 == (ulong *)0x0) {
                  if (DAT_7105332f00 != (long *)0x0) {
                    local_7c[0] = 0;
                    local_88 = (long ***)&SUB_00000018;
                    param_3 = (undefined **)&local_88;
                    uVar18 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,local_7c);
                    if (((uVar18 & 1) != 0) &&
                       (puVar8 = (ulong *)FUN_710392e290(0x10,0x18,(long ****)param_3,param_4,
                                                         param_5,param_6,param_7,param_8),
                       puVar8 != (ulong *)0x0)) goto LAB_71036a5e78;
                  }
                  puVar8 = (ulong *)0x0;
                }
LAB_71036a5e78:
                puVar8[1] = 0;
                puVar8[2] = 0;
                *puVar8 = 0;
                pppplVar37 = (long ****)strlen("");
                if ((long ****)0xffffffffffffffef < pppplVar37) goto LAB_71036a7dbc;
                if (pppplVar37 < (long ****)0x17) {
                  pvVar36 = (void *)((long)puVar8 + 1);
                  *(char *)puVar8 = (char)((int)pppplVar37 << 1);
                  if (pppplVar37 != (long ****)0x0) goto LAB_71036a5f40;
                }
                else {
                  ppplVar31 = (long ***)((ulong)(pppplVar37 + 2) & 0xfffffffffffffff0);
                  ppplVar17 = ppplVar31;
                  if (((ulong)(pppplVar37 + 2) & 0xfffffffffffffff0) == 0) {
                    ppplVar17 = (long ***)0x1;
                  }
                  pvVar36 = (void *)FUN_710392e290(0x10,ppplVar17,(long ****)param_3,param_4,param_5
                                                   ,param_6,param_7,param_8);
                  if (pvVar36 == (void *)0x0) {
                    if (DAT_7105332f00 != (long *)0x0) {
                      local_7c[0] = 0;
                      pppplVar9 = &local_88;
                      local_88 = ppplVar17;
                      uVar18 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,local_7c);
                      if (((uVar18 & 1) != 0) &&
                         (pvVar36 = (void *)FUN_710392e290(0x10,ppplVar17,pppplVar9,param_4,param_5,
                                                           param_6,param_7,param_8),
                         pvVar36 != (void *)0x0)) goto LAB_71036a5f28;
                    }
                    pvVar36 = (void *)0x0;
                  }
LAB_71036a5f28:
                  *puVar8 = (ulong)ppplVar31 | 1;
                  puVar8[1] = (ulong)pppplVar37;
                  puVar8[2] = (ulong)pvVar36;
LAB_71036a5f40:
                  param_3 = (undefined **)pppplVar37;
                  memcpy(pvVar36,&DAT_710455dba0,(size_t)pppplVar37);
                }
                *(undefined1 *)((long)pvVar36 + (long)pppplVar37) = 0;
                DAT_7105339938 = (ulong)puVar8 | 1;
                std::string::assign((char *)puVar8);
                DAT_7105339940 = 0xffffffffff224260;
                puVar8 = (ulong *)FUN_710392e290(0x10,0x18,(long ****)param_3,param_4,param_5,
                                                 param_6,param_7,param_8);
                if (puVar8 == (ulong *)0x0) {
                  if (DAT_7105332f00 != (long *)0x0) {
                    local_7c[0] = 0;
                    local_88 = (long ***)&SUB_00000018;
                    param_3 = (undefined **)&local_88;
                    uVar18 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,local_7c);
                    if (((uVar18 & 1) != 0) &&
                       (puVar8 = (ulong *)FUN_710392e290(0x10,0x18,(long ****)param_3,param_4,
                                                         param_5,param_6,param_7,param_8),
                       puVar8 != (ulong *)0x0)) goto LAB_71036a5fe0;
                  }
                  puVar8 = (ulong *)0x0;
                }
LAB_71036a5fe0:
                puVar8[1] = 0;
                puVar8[2] = 0;
                *puVar8 = 0;
                pppplVar37 = (long ****)strlen("");
                if ((long ****)0xffffffffffffffef < pppplVar37) goto LAB_71036a7dbc;
                if (pppplVar37 < (long ****)0x17) {
                  pvVar36 = (void *)((long)puVar8 + 1);
                  *(char *)puVar8 = (char)((int)pppplVar37 << 1);
                  if (pppplVar37 != (long ****)0x0) goto LAB_71036a60a8;
                }
                else {
                  ppplVar31 = (long ***)((ulong)(pppplVar37 + 2) & 0xfffffffffffffff0);
                  ppplVar17 = ppplVar31;
                  if (((ulong)(pppplVar37 + 2) & 0xfffffffffffffff0) == 0) {
                    ppplVar17 = (long ***)0x1;
                  }
                  pvVar36 = (void *)FUN_710392e290(0x10,ppplVar17,(long ****)param_3,param_4,param_5
                                                   ,param_6,param_7,param_8);
                  if (pvVar36 == (void *)0x0) {
                    if (DAT_7105332f00 != (long *)0x0) {
                      local_7c[0] = 0;
                      pppplVar9 = &local_88;
                      local_88 = ppplVar17;
                      uVar18 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,local_7c);
                      if (((uVar18 & 1) != 0) &&
                         (pvVar36 = (void *)FUN_710392e290(0x10,ppplVar17,pppplVar9,param_4,param_5,
                                                           param_6,param_7,param_8),
                         pvVar36 != (void *)0x0)) goto LAB_71036a6090;
                    }
                    pvVar36 = (void *)0x0;
                  }
LAB_71036a6090:
                  *puVar8 = (ulong)ppplVar31 | 1;
                  puVar8[1] = (ulong)pppplVar37;
                  puVar8[2] = (ulong)pvVar36;
LAB_71036a60a8:
                  param_3 = (undefined **)pppplVar37;
                  memcpy(pvVar36,&DAT_710455dba0,(size_t)pppplVar37);
                }
                *(undefined1 *)((long)pvVar36 + (long)pppplVar37) = 0;
                DAT_7105339940 = (ulong)puVar8 | 1;
                std::string::assign((char *)puVar8);
                DAT_7105339948 = 0xffffffffff224258;
                puVar8 = (ulong *)FUN_710392e290(0x10,0x18,(long ****)param_3,param_4,param_5,
                                                 param_6,param_7,param_8);
                if (puVar8 == (ulong *)0x0) {
                  if (DAT_7105332f00 != (long *)0x0) {
                    local_7c[0] = 0;
                    local_88 = (long ***)&SUB_00000018;
                    param_3 = (undefined **)&local_88;
                    uVar18 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,local_7c);
                    if (((uVar18 & 1) != 0) &&
                       (puVar8 = (ulong *)FUN_710392e290(0x10,0x18,(long ****)param_3,param_4,
                                                         param_5,param_6,param_7,param_8),
                       puVar8 != (ulong *)0x0)) goto LAB_71036a6148;
                  }
                  puVar8 = (ulong *)0x0;
                }
LAB_71036a6148:
                puVar8[1] = 0;
                puVar8[2] = 0;
                *puVar8 = 0;
                pppplVar37 = (long ****)strlen("");
                if ((long ****)0xffffffffffffffef < pppplVar37) goto LAB_71036a7dbc;
                if (pppplVar37 < (long ****)0x17) {
                  pvVar36 = (void *)((long)puVar8 + 1);
                  *(char *)puVar8 = (char)((int)pppplVar37 << 1);
                  if (pppplVar37 != (long ****)0x0) goto LAB_71036a6210;
                }
                else {
                  ppplVar31 = (long ***)((ulong)(pppplVar37 + 2) & 0xfffffffffffffff0);
                  ppplVar17 = ppplVar31;
                  if (((ulong)(pppplVar37 + 2) & 0xfffffffffffffff0) == 0) {
                    ppplVar17 = (long ***)0x1;
                  }
                  pvVar36 = (void *)FUN_710392e290(0x10,ppplVar17,(long ****)param_3,param_4,param_5
                                                   ,param_6,param_7,param_8);
                  if (pvVar36 == (void *)0x0) {
                    if (DAT_7105332f00 != (long *)0x0) {
                      local_7c[0] = 0;
                      pppplVar9 = &local_88;
                      local_88 = ppplVar17;
                      uVar18 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,local_7c);
                      if (((uVar18 & 1) != 0) &&
                         (pvVar36 = (void *)FUN_710392e290(0x10,ppplVar17,pppplVar9,param_4,param_5,
                                                           param_6,param_7,param_8),
                         pvVar36 != (void *)0x0)) goto LAB_71036a61f8;
                    }
                    pvVar36 = (void *)0x0;
                  }
LAB_71036a61f8:
                  *puVar8 = (ulong)ppplVar31 | 1;
                  puVar8[1] = (ulong)pppplVar37;
                  puVar8[2] = (ulong)pvVar36;
LAB_71036a6210:
                  param_3 = (undefined **)pppplVar37;
                  memcpy(pvVar36,&DAT_710455dba0,(size_t)pppplVar37);
                }
                *(undefined1 *)((long)pvVar36 + (long)pppplVar37) = 0;
                DAT_7105339948 = (ulong)puVar8 | 1;
                std::string::assign((char *)puVar8);
                DAT_7105339950 = 0xffffffffff224250;
                puVar8 = (ulong *)FUN_710392e290(0x10,0x18,(long ****)param_3,param_4,param_5,
                                                 param_6,param_7,param_8);
                if (puVar8 == (ulong *)0x0) {
                  if (DAT_7105332f00 != (long *)0x0) {
                    local_7c[0] = 0;
                    local_88 = (long ***)&SUB_00000018;
                    param_3 = (undefined **)&local_88;
                    uVar18 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,local_7c);
                    if (((uVar18 & 1) != 0) &&
                       (puVar8 = (ulong *)FUN_710392e290(0x10,0x18,(long ****)param_3,param_4,
                                                         param_5,param_6,param_7,param_8),
                       puVar8 != (ulong *)0x0)) goto LAB_71036a62b0;
                  }
                  puVar8 = (ulong *)0x0;
                }
LAB_71036a62b0:
                puVar8[1] = 0;
                puVar8[2] = 0;
                *puVar8 = 0;
                pppplVar37 = (long ****)strlen("");
                if ((long ****)0xffffffffffffffef < pppplVar37) goto LAB_71036a7dbc;
                if (pppplVar37 < (long ****)0x17) {
                  pvVar36 = (void *)((long)puVar8 + 1);
                  *(char *)puVar8 = (char)((int)pppplVar37 << 1);
                  if (pppplVar37 != (long ****)0x0) goto LAB_71036a6378;
                }
                else {
                  ppplVar31 = (long ***)((ulong)(pppplVar37 + 2) & 0xfffffffffffffff0);
                  ppplVar17 = ppplVar31;
                  if (((ulong)(pppplVar37 + 2) & 0xfffffffffffffff0) == 0) {
                    ppplVar17 = (long ***)0x1;
                  }
                  pvVar36 = (void *)FUN_710392e290(0x10,ppplVar17,(long ****)param_3,param_4,param_5
                                                   ,param_6,param_7,param_8);
                  if (pvVar36 == (void *)0x0) {
                    if (DAT_7105332f00 != (long *)0x0) {
                      local_7c[0] = 0;
                      pppplVar9 = &local_88;
                      local_88 = ppplVar17;
                      uVar18 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,local_7c);
                      if (((uVar18 & 1) != 0) &&
                         (pvVar36 = (void *)FUN_710392e290(0x10,ppplVar17,pppplVar9,param_4,param_5,
                                                           param_6,param_7,param_8),
                         pvVar36 != (void *)0x0)) goto LAB_71036a6360;
                    }
                    pvVar36 = (void *)0x0;
                  }
LAB_71036a6360:
                  *puVar8 = (ulong)ppplVar31 | 1;
                  puVar8[1] = (ulong)pppplVar37;
                  puVar8[2] = (ulong)pvVar36;
LAB_71036a6378:
                  param_3 = (undefined **)pppplVar37;
                  memcpy(pvVar36,&DAT_710455dba0,(size_t)pppplVar37);
                }
                *(undefined1 *)((long)pvVar36 + (long)pppplVar37) = 0;
                DAT_7105339950 = (ulong)puVar8 | 1;
                std::string::assign((char *)puVar8);
                DAT_7105339958 = 0xffffffffff224248;
                puVar8 = (ulong *)FUN_710392e290(0x10,0x18,(long ****)param_3,param_4,param_5,
                                                 param_6,param_7,param_8);
                if (puVar8 == (ulong *)0x0) {
                  if (DAT_7105332f00 != (long *)0x0) {
                    local_7c[0] = 0;
                    local_88 = (long ***)&SUB_00000018;
                    param_3 = (undefined **)&local_88;
                    uVar18 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,local_7c);
                    if (((uVar18 & 1) != 0) &&
                       (puVar8 = (ulong *)FUN_710392e290(0x10,0x18,(long ****)param_3,param_4,
                                                         param_5,param_6,param_7,param_8),
                       puVar8 != (ulong *)0x0)) goto LAB_71036a6418;
                  }
                  puVar8 = (ulong *)0x0;
                }
LAB_71036a6418:
                puVar8[1] = 0;
                puVar8[2] = 0;
                *puVar8 = 0;
                pppplVar37 = (long ****)strlen("");
                if ((long ****)0xffffffffffffffef < pppplVar37) goto LAB_71036a7dbc;
                if (pppplVar37 < (long ****)0x17) {
                  pvVar36 = (void *)((long)puVar8 + 1);
                  *(char *)puVar8 = (char)((int)pppplVar37 << 1);
                  if (pppplVar37 != (long ****)0x0) goto LAB_71036a64e0;
                }
                else {
                  ppplVar31 = (long ***)((ulong)(pppplVar37 + 2) & 0xfffffffffffffff0);
                  ppplVar17 = ppplVar31;
                  if (((ulong)(pppplVar37 + 2) & 0xfffffffffffffff0) == 0) {
                    ppplVar17 = (long ***)0x1;
                  }
                  pvVar36 = (void *)FUN_710392e290(0x10,ppplVar17,(long ****)param_3,param_4,param_5
                                                   ,param_6,param_7,param_8);
                  if (pvVar36 == (void *)0x0) {
                    if (DAT_7105332f00 != (long *)0x0) {
                      local_7c[0] = 0;
                      pppplVar9 = &local_88;
                      local_88 = ppplVar17;
                      uVar18 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,local_7c);
                      if (((uVar18 & 1) != 0) &&
                         (pvVar36 = (void *)FUN_710392e290(0x10,ppplVar17,pppplVar9,param_4,param_5,
                                                           param_6,param_7,param_8),
                         pvVar36 != (void *)0x0)) goto LAB_71036a64c8;
                    }
                    pvVar36 = (void *)0x0;
                  }
LAB_71036a64c8:
                  *puVar8 = (ulong)ppplVar31 | 1;
                  puVar8[1] = (ulong)pppplVar37;
                  puVar8[2] = (ulong)pvVar36;
LAB_71036a64e0:
                  param_3 = (undefined **)pppplVar37;
                  memcpy(pvVar36,&DAT_710455dba0,(size_t)pppplVar37);
                }
                *(undefined1 *)((long)pvVar36 + (long)pppplVar37) = 0;
                DAT_7105339958 = (ulong)puVar8 | 1;
                std::string::assign((char *)puVar8);
                DAT_7105339960 = 0xffffffffff224240;
                puVar8 = (ulong *)FUN_710392e290(0x10,0x18,(long ****)param_3,param_4,param_5,
                                                 param_6,param_7,param_8);
                if (puVar8 == (ulong *)0x0) {
                  if (DAT_7105332f00 != (long *)0x0) {
                    local_7c[0] = 0;
                    local_88 = (long ***)&SUB_00000018;
                    param_3 = (undefined **)&local_88;
                    uVar18 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,local_7c);
                    if (((uVar18 & 1) != 0) &&
                       (puVar8 = (ulong *)FUN_710392e290(0x10,0x18,(long ****)param_3,param_4,
                                                         param_5,param_6,param_7,param_8),
                       puVar8 != (ulong *)0x0)) goto LAB_71036a6580;
                  }
                  puVar8 = (ulong *)0x0;
                }
LAB_71036a6580:
                puVar8[1] = 0;
                puVar8[2] = 0;
                *puVar8 = 0;
                pppplVar37 = (long ****)strlen("");
                if ((long ****)0xffffffffffffffef < pppplVar37) goto LAB_71036a7dbc;
                if (pppplVar37 < (long ****)0x17) {
                  pvVar36 = (void *)((long)puVar8 + 1);
                  *(char *)puVar8 = (char)((int)pppplVar37 << 1);
                  if (pppplVar37 != (long ****)0x0) goto LAB_71036a6648;
                }
                else {
                  ppplVar31 = (long ***)((ulong)(pppplVar37 + 2) & 0xfffffffffffffff0);
                  ppplVar17 = ppplVar31;
                  if (((ulong)(pppplVar37 + 2) & 0xfffffffffffffff0) == 0) {
                    ppplVar17 = (long ***)0x1;
                  }
                  pvVar36 = (void *)FUN_710392e290(0x10,ppplVar17,(long ****)param_3,param_4,param_5
                                                   ,param_6,param_7,param_8);
                  if (pvVar36 == (void *)0x0) {
                    if (DAT_7105332f00 != (long *)0x0) {
                      local_7c[0] = 0;
                      pppplVar9 = &local_88;
                      local_88 = ppplVar17;
                      uVar18 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,local_7c);
                      if (((uVar18 & 1) != 0) &&
                         (pvVar36 = (void *)FUN_710392e290(0x10,ppplVar17,pppplVar9,param_4,param_5,
                                                           param_6,param_7,param_8),
                         pvVar36 != (void *)0x0)) goto LAB_71036a6630;
                    }
                    pvVar36 = (void *)0x0;
                  }
LAB_71036a6630:
                  *puVar8 = (ulong)ppplVar31 | 1;
                  puVar8[1] = (ulong)pppplVar37;
                  puVar8[2] = (ulong)pvVar36;
LAB_71036a6648:
                  param_3 = (undefined **)pppplVar37;
                  memcpy(pvVar36,&DAT_710455dba0,(size_t)pppplVar37);
                }
                *(undefined1 *)((long)pvVar36 + (long)pppplVar37) = 0;
                DAT_7105339960 = (ulong)puVar8 | 1;
                std::string::assign((char *)puVar8);
                DAT_7105339968 = 0xffffffffff224238;
                puVar8 = (ulong *)FUN_710392e290(0x10,0x18,(long ****)param_3,param_4,param_5,
                                                 param_6,param_7,param_8);
                if (puVar8 == (ulong *)0x0) {
                  if (DAT_7105332f00 != (long *)0x0) {
                    local_7c[0] = 0;
                    local_88 = (long ***)&SUB_00000018;
                    param_3 = (undefined **)&local_88;
                    uVar18 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,local_7c);
                    if (((uVar18 & 1) != 0) &&
                       (puVar8 = (ulong *)FUN_710392e290(0x10,0x18,(long ****)param_3,param_4,
                                                         param_5,param_6,param_7,param_8),
                       puVar8 != (ulong *)0x0)) goto LAB_71036a66e8;
                  }
                  puVar8 = (ulong *)0x0;
                }
LAB_71036a66e8:
                puVar8[1] = 0;
                puVar8[2] = 0;
                *puVar8 = 0;
                pppplVar37 = (long ****)strlen("");
                if ((long ****)0xffffffffffffffef < pppplVar37) goto LAB_71036a7dbc;
                if (pppplVar37 < (long ****)0x17) {
                  pvVar36 = (void *)((long)puVar8 + 1);
                  *(char *)puVar8 = (char)((int)pppplVar37 << 1);
                  if (pppplVar37 != (long ****)0x0) goto LAB_71036a67b0;
                }
                else {
                  ppplVar31 = (long ***)((ulong)(pppplVar37 + 2) & 0xfffffffffffffff0);
                  ppplVar17 = ppplVar31;
                  if (((ulong)(pppplVar37 + 2) & 0xfffffffffffffff0) == 0) {
                    ppplVar17 = (long ***)0x1;
                  }
                  pvVar36 = (void *)FUN_710392e290(0x10,ppplVar17,(long ****)param_3,param_4,param_5
                                                   ,param_6,param_7,param_8);
                  if (pvVar36 == (void *)0x0) {
                    if (DAT_7105332f00 != (long *)0x0) {
                      local_7c[0] = 0;
                      pppplVar9 = &local_88;
                      local_88 = ppplVar17;
                      uVar18 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,local_7c);
                      if (((uVar18 & 1) != 0) &&
                         (pvVar36 = (void *)FUN_710392e290(0x10,ppplVar17,pppplVar9,param_4,param_5,
                                                           param_6,param_7,param_8),
                         pvVar36 != (void *)0x0)) goto LAB_71036a6798;
                    }
                    pvVar36 = (void *)0x0;
                  }
LAB_71036a6798:
                  *puVar8 = (ulong)ppplVar31 | 1;
                  puVar8[1] = (ulong)pppplVar37;
                  puVar8[2] = (ulong)pvVar36;
LAB_71036a67b0:
                  param_3 = (undefined **)pppplVar37;
                  memcpy(pvVar36,&DAT_710455dba0,(size_t)pppplVar37);
                }
                *(undefined1 *)((long)pvVar36 + (long)pppplVar37) = 0;
                DAT_7105339968 = (ulong)puVar8 | 1;
                std::string::assign((char *)puVar8);
                DAT_7105339970 = 0xffffffffff224230;
                puVar8 = (ulong *)FUN_710392e290(0x10,0x18,(long ****)param_3,param_4,param_5,
                                                 param_6,param_7,param_8);
                if (puVar8 == (ulong *)0x0) {
                  if (DAT_7105332f00 != (long *)0x0) {
                    local_7c[0] = 0;
                    local_88 = (long ***)&SUB_00000018;
                    param_3 = (undefined **)&local_88;
                    uVar18 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,local_7c);
                    if (((uVar18 & 1) != 0) &&
                       (puVar8 = (ulong *)FUN_710392e290(0x10,0x18,(long ****)param_3,param_4,
                                                         param_5,param_6,param_7,param_8),
                       puVar8 != (ulong *)0x0)) goto LAB_71036a6850;
                  }
                  puVar8 = (ulong *)0x0;
                }
LAB_71036a6850:
                puVar8[1] = 0;
                puVar8[2] = 0;
                *puVar8 = 0;
                pppplVar37 = (long ****)strlen("");
                if ((long ****)0xffffffffffffffef < pppplVar37) goto LAB_71036a7dbc;
                if (pppplVar37 < (long ****)0x17) {
                  pvVar36 = (void *)((long)puVar8 + 1);
                  *(char *)puVar8 = (char)((int)pppplVar37 << 1);
                  if (pppplVar37 != (long ****)0x0) goto LAB_71036a6918;
                }
                else {
                  ppplVar31 = (long ***)((ulong)(pppplVar37 + 2) & 0xfffffffffffffff0);
                  ppplVar17 = ppplVar31;
                  if (((ulong)(pppplVar37 + 2) & 0xfffffffffffffff0) == 0) {
                    ppplVar17 = (long ***)0x1;
                  }
                  pvVar36 = (void *)FUN_710392e290(0x10,ppplVar17,(long ****)param_3,param_4,param_5
                                                   ,param_6,param_7,param_8);
                  if (pvVar36 == (void *)0x0) {
                    if (DAT_7105332f00 != (long *)0x0) {
                      local_7c[0] = 0;
                      pppplVar9 = &local_88;
                      local_88 = ppplVar17;
                      uVar18 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,local_7c);
                      if (((uVar18 & 1) != 0) &&
                         (pvVar36 = (void *)FUN_710392e290(0x10,ppplVar17,pppplVar9,param_4,param_5,
                                                           param_6,param_7,param_8),
                         pvVar36 != (void *)0x0)) goto LAB_71036a6900;
                    }
                    pvVar36 = (void *)0x0;
                  }
LAB_71036a6900:
                  *puVar8 = (ulong)ppplVar31 | 1;
                  puVar8[1] = (ulong)pppplVar37;
                  puVar8[2] = (ulong)pvVar36;
LAB_71036a6918:
                  param_3 = (undefined **)pppplVar37;
                  memcpy(pvVar36,&DAT_710455dba0,(size_t)pppplVar37);
                }
                *(undefined1 *)((long)pvVar36 + (long)pppplVar37) = 0;
                DAT_7105339970 = (ulong)puVar8 | 1;
                std::string::assign((char *)puVar8);
                DAT_7105339978 = 0xffffffffff224228;
                puVar8 = (ulong *)FUN_710392e290(0x10,0x18,(long ****)param_3,param_4,param_5,
                                                 param_6,param_7,param_8);
                if (puVar8 == (ulong *)0x0) {
                  if (DAT_7105332f00 != (long *)0x0) {
                    local_7c[0] = 0;
                    local_88 = (long ***)&SUB_00000018;
                    param_3 = (undefined **)&local_88;
                    uVar18 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,local_7c);
                    if (((uVar18 & 1) != 0) &&
                       (puVar8 = (ulong *)FUN_710392e290(0x10,0x18,(long ****)param_3,param_4,
                                                         param_5,param_6,param_7,param_8),
                       puVar8 != (ulong *)0x0)) goto LAB_71036a69b8;
                  }
                  puVar8 = (ulong *)0x0;
                }
LAB_71036a69b8:
                puVar8[1] = 0;
                puVar8[2] = 0;
                *puVar8 = 0;
                pppplVar37 = (long ****)strlen("");
                if ((long ****)0xffffffffffffffef < pppplVar37) goto LAB_71036a7dbc;
                if (pppplVar37 < (long ****)0x17) {
                  pvVar36 = (void *)((long)puVar8 + 1);
                  *(char *)puVar8 = (char)((int)pppplVar37 << 1);
                  if (pppplVar37 != (long ****)0x0) goto LAB_71036a6a80;
                }
                else {
                  ppplVar31 = (long ***)((ulong)(pppplVar37 + 2) & 0xfffffffffffffff0);
                  ppplVar17 = ppplVar31;
                  if (((ulong)(pppplVar37 + 2) & 0xfffffffffffffff0) == 0) {
                    ppplVar17 = (long ***)0x1;
                  }
                  pvVar36 = (void *)FUN_710392e290(0x10,ppplVar17,(long ****)param_3,param_4,param_5
                                                   ,param_6,param_7,param_8);
                  if (pvVar36 == (void *)0x0) {
                    if (DAT_7105332f00 != (long *)0x0) {
                      local_7c[0] = 0;
                      pppplVar9 = &local_88;
                      local_88 = ppplVar17;
                      uVar18 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,local_7c);
                      if (((uVar18 & 1) != 0) &&
                         (pvVar36 = (void *)FUN_710392e290(0x10,ppplVar17,pppplVar9,param_4,param_5,
                                                           param_6,param_7,param_8),
                         pvVar36 != (void *)0x0)) goto LAB_71036a6a68;
                    }
                    pvVar36 = (void *)0x0;
                  }
LAB_71036a6a68:
                  *puVar8 = (ulong)ppplVar31 | 1;
                  puVar8[1] = (ulong)pppplVar37;
                  puVar8[2] = (ulong)pvVar36;
LAB_71036a6a80:
                  param_3 = (undefined **)pppplVar37;
                  memcpy(pvVar36,&DAT_710455dba0,(size_t)pppplVar37);
                }
                *(undefined1 *)((long)pvVar36 + (long)pppplVar37) = 0;
                DAT_7105339978 = (ulong)puVar8 | 1;
                std::string::assign((char *)puVar8);
                DAT_7105339980 = 0xffffffffff224220;
                puVar8 = (ulong *)FUN_710392e290(0x10,0x18,(long ****)param_3,param_4,param_5,
                                                 param_6,param_7,param_8);
                if (puVar8 == (ulong *)0x0) {
                  if (DAT_7105332f00 != (long *)0x0) {
                    local_7c[0] = 0;
                    local_88 = (long ***)&SUB_00000018;
                    param_3 = (undefined **)&local_88;
                    uVar18 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,local_7c);
                    if (((uVar18 & 1) != 0) &&
                       (puVar8 = (ulong *)FUN_710392e290(0x10,0x18,(long ****)param_3,param_4,
                                                         param_5,param_6,param_7,param_8),
                       puVar8 != (ulong *)0x0)) goto LAB_71036a6b20;
                  }
                  puVar8 = (ulong *)0x0;
                }
LAB_71036a6b20:
                puVar8[1] = 0;
                puVar8[2] = 0;
                *puVar8 = 0;
                pppplVar37 = (long ****)strlen("");
                if ((long ****)0xffffffffffffffef < pppplVar37) goto LAB_71036a7dbc;
                if (pppplVar37 < (long ****)0x17) {
                  pvVar36 = (void *)((long)puVar8 + 1);
                  *(char *)puVar8 = (char)((int)pppplVar37 << 1);
                  if (pppplVar37 != (long ****)0x0) goto LAB_71036a6be8;
                }
                else {
                  ppplVar31 = (long ***)((ulong)(pppplVar37 + 2) & 0xfffffffffffffff0);
                  ppplVar17 = ppplVar31;
                  if (((ulong)(pppplVar37 + 2) & 0xfffffffffffffff0) == 0) {
                    ppplVar17 = (long ***)0x1;
                  }
                  pvVar36 = (void *)FUN_710392e290(0x10,ppplVar17,(long ****)param_3,param_4,param_5
                                                   ,param_6,param_7,param_8);
                  if (pvVar36 == (void *)0x0) {
                    if (DAT_7105332f00 != (long *)0x0) {
                      local_7c[0] = 0;
                      pppplVar9 = &local_88;
                      local_88 = ppplVar17;
                      uVar18 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,local_7c);
                      if (((uVar18 & 1) != 0) &&
                         (pvVar36 = (void *)FUN_710392e290(0x10,ppplVar17,pppplVar9,param_4,param_5,
                                                           param_6,param_7,param_8),
                         pvVar36 != (void *)0x0)) goto LAB_71036a6bd0;
                    }
                    pvVar36 = (void *)0x0;
                  }
LAB_71036a6bd0:
                  *puVar8 = (ulong)ppplVar31 | 1;
                  puVar8[1] = (ulong)pppplVar37;
                  puVar8[2] = (ulong)pvVar36;
LAB_71036a6be8:
                  param_3 = (undefined **)pppplVar37;
                  memcpy(pvVar36,&DAT_710455dba0,(size_t)pppplVar37);
                }
                *(undefined1 *)((long)pvVar36 + (long)pppplVar37) = 0;
                DAT_7105339980 = (ulong)puVar8 | 1;
                std::string::assign((char *)puVar8);
                DAT_7105339988 = 0xffffffffff224218;
                puVar8 = (ulong *)FUN_710392e290(0x10,0x18,(long ****)param_3,param_4,param_5,
                                                 param_6,param_7,param_8);
                if (puVar8 == (ulong *)0x0) {
                  if (DAT_7105332f00 != (long *)0x0) {
                    local_7c[0] = 0;
                    local_88 = (long ***)&SUB_00000018;
                    param_3 = (undefined **)&local_88;
                    uVar18 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,local_7c);
                    if (((uVar18 & 1) != 0) &&
                       (puVar8 = (ulong *)FUN_710392e290(0x10,0x18,(long ****)param_3,param_4,
                                                         param_5,param_6,param_7,param_8),
                       puVar8 != (ulong *)0x0)) goto LAB_71036a6c88;
                  }
                  puVar8 = (ulong *)0x0;
                }
LAB_71036a6c88:
                puVar8[1] = 0;
                puVar8[2] = 0;
                *puVar8 = 0;
                pppplVar37 = (long ****)strlen("");
                if ((long ****)0xffffffffffffffef < pppplVar37) goto LAB_71036a7dbc;
                if (pppplVar37 < (long ****)0x17) {
                  pvVar36 = (void *)((long)puVar8 + 1);
                  *(char *)puVar8 = (char)((int)pppplVar37 << 1);
                  if (pppplVar37 != (long ****)0x0) goto LAB_71036a6d50;
                }
                else {
                  ppplVar31 = (long ***)((ulong)(pppplVar37 + 2) & 0xfffffffffffffff0);
                  ppplVar17 = ppplVar31;
                  if (((ulong)(pppplVar37 + 2) & 0xfffffffffffffff0) == 0) {
                    ppplVar17 = (long ***)0x1;
                  }
                  pvVar36 = (void *)FUN_710392e290(0x10,ppplVar17,(long ****)param_3,param_4,param_5
                                                   ,param_6,param_7,param_8);
                  if (pvVar36 == (void *)0x0) {
                    if (DAT_7105332f00 != (long *)0x0) {
                      local_7c[0] = 0;
                      pppplVar9 = &local_88;
                      local_88 = ppplVar17;
                      uVar18 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,local_7c);
                      if (((uVar18 & 1) != 0) &&
                         (pvVar36 = (void *)FUN_710392e290(0x10,ppplVar17,pppplVar9,param_4,param_5,
                                                           param_6,param_7,param_8),
                         pvVar36 != (void *)0x0)) goto LAB_71036a6d38;
                    }
                    pvVar36 = (void *)0x0;
                  }
LAB_71036a6d38:
                  *puVar8 = (ulong)ppplVar31 | 1;
                  puVar8[1] = (ulong)pppplVar37;
                  puVar8[2] = (ulong)pvVar36;
LAB_71036a6d50:
                  param_3 = (undefined **)pppplVar37;
                  memcpy(pvVar36,&DAT_710455dba0,(size_t)pppplVar37);
                }
                *(undefined1 *)((long)pvVar36 + (long)pppplVar37) = 0;
                DAT_7105339988 = (ulong)puVar8 | 1;
                std::string::assign((char *)puVar8);
                DAT_7105339990 = 0xffffffffff224210;
                puVar8 = (ulong *)FUN_710392e290(0x10,0x18,(long ****)param_3,param_4,param_5,
                                                 param_6,param_7,param_8);
                if (puVar8 == (ulong *)0x0) {
                  if (DAT_7105332f00 != (long *)0x0) {
                    local_7c[0] = 0;
                    local_88 = (long ***)&SUB_00000018;
                    param_3 = (undefined **)&local_88;
                    uVar18 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,local_7c);
                    if (((uVar18 & 1) != 0) &&
                       (puVar8 = (ulong *)FUN_710392e290(0x10,0x18,(long ****)param_3,param_4,
                                                         param_5,param_6,param_7,param_8),
                       puVar8 != (ulong *)0x0)) goto LAB_71036a6df0;
                  }
                  puVar8 = (ulong *)0x0;
                }
LAB_71036a6df0:
                puVar8[1] = 0;
                puVar8[2] = 0;
                *puVar8 = 0;
                pppplVar37 = (long ****)strlen("");
                if ((long ****)0xffffffffffffffef < pppplVar37) goto LAB_71036a7dbc;
                if (pppplVar37 < (long ****)0x17) {
                  pvVar36 = (void *)((long)puVar8 + 1);
                  *(char *)puVar8 = (char)((int)pppplVar37 << 1);
                  if (pppplVar37 != (long ****)0x0) goto LAB_71036a6eb8;
                }
                else {
                  ppplVar31 = (long ***)((ulong)(pppplVar37 + 2) & 0xfffffffffffffff0);
                  ppplVar17 = ppplVar31;
                  if (((ulong)(pppplVar37 + 2) & 0xfffffffffffffff0) == 0) {
                    ppplVar17 = (long ***)0x1;
                  }
                  pvVar36 = (void *)FUN_710392e290(0x10,ppplVar17,(long ****)param_3,param_4,param_5
                                                   ,param_6,param_7,param_8);
                  if (pvVar36 == (void *)0x0) {
                    if (DAT_7105332f00 != (long *)0x0) {
                      local_7c[0] = 0;
                      pppplVar9 = &local_88;
                      local_88 = ppplVar17;
                      uVar18 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,local_7c);
                      if (((uVar18 & 1) != 0) &&
                         (pvVar36 = (void *)FUN_710392e290(0x10,ppplVar17,pppplVar9,param_4,param_5,
                                                           param_6,param_7,param_8),
                         pvVar36 != (void *)0x0)) goto LAB_71036a6ea0;
                    }
                    pvVar36 = (void *)0x0;
                  }
LAB_71036a6ea0:
                  *puVar8 = (ulong)ppplVar31 | 1;
                  puVar8[1] = (ulong)pppplVar37;
                  puVar8[2] = (ulong)pvVar36;
LAB_71036a6eb8:
                  param_3 = (undefined **)pppplVar37;
                  memcpy(pvVar36,&DAT_710455dba0,(size_t)pppplVar37);
                }
                *(undefined1 *)((long)pvVar36 + (long)pppplVar37) = 0;
                DAT_7105339990 = (ulong)puVar8 | 1;
                std::string::assign((char *)puVar8);
                DAT_7105339998 = 0xffffffffff224208;
                puVar8 = (ulong *)FUN_710392e290(0x10,0x18,(long ****)param_3,param_4,param_5,
                                                 param_6,param_7,param_8);
                if (puVar8 == (ulong *)0x0) {
                  if (DAT_7105332f00 != (long *)0x0) {
                    local_7c[0] = 0;
                    local_88 = (long ***)&SUB_00000018;
                    param_3 = (undefined **)&local_88;
                    uVar18 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,local_7c);
                    if (((uVar18 & 1) != 0) &&
                       (puVar8 = (ulong *)FUN_710392e290(0x10,0x18,(long ****)param_3,param_4,
                                                         param_5,param_6,param_7,param_8),
                       puVar8 != (ulong *)0x0)) goto LAB_71036a6f58;
                  }
                  puVar8 = (ulong *)0x0;
                }
LAB_71036a6f58:
                puVar8[1] = 0;
                puVar8[2] = 0;
                *puVar8 = 0;
                pppplVar37 = (long ****)strlen("");
                if ((long ****)0xffffffffffffffef < pppplVar37) goto LAB_71036a7dbc;
                if (pppplVar37 < (long ****)0x17) {
                  pvVar36 = (void *)((long)puVar8 + 1);
                  *(char *)puVar8 = (char)((int)pppplVar37 << 1);
                  if (pppplVar37 != (long ****)0x0) goto LAB_71036a7020;
                }
                else {
                  ppplVar31 = (long ***)((ulong)(pppplVar37 + 2) & 0xfffffffffffffff0);
                  ppplVar17 = ppplVar31;
                  if (((ulong)(pppplVar37 + 2) & 0xfffffffffffffff0) == 0) {
                    ppplVar17 = (long ***)0x1;
                  }
                  pvVar36 = (void *)FUN_710392e290(0x10,ppplVar17,(long ****)param_3,param_4,param_5
                                                   ,param_6,param_7,param_8);
                  if (pvVar36 == (void *)0x0) {
                    if (DAT_7105332f00 != (long *)0x0) {
                      local_7c[0] = 0;
                      pppplVar9 = &local_88;
                      local_88 = ppplVar17;
                      uVar18 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,local_7c);
                      if (((uVar18 & 1) != 0) &&
                         (pvVar36 = (void *)FUN_710392e290(0x10,ppplVar17,pppplVar9,param_4,param_5,
                                                           param_6,param_7,param_8),
                         pvVar36 != (void *)0x0)) goto LAB_71036a7008;
                    }
                    pvVar36 = (void *)0x0;
                  }
LAB_71036a7008:
                  *puVar8 = (ulong)ppplVar31 | 1;
                  puVar8[1] = (ulong)pppplVar37;
                  puVar8[2] = (ulong)pvVar36;
LAB_71036a7020:
                  param_3 = (undefined **)pppplVar37;
                  memcpy(pvVar36,&DAT_710455dba0,(size_t)pppplVar37);
                }
                *(undefined1 *)((long)pvVar36 + (long)pppplVar37) = 0;
                DAT_7105339998 = (ulong)puVar8 | 1;
                std::string::assign((char *)puVar8);
                DAT_71053399a0 = 0xffffffffff224200;
                puVar8 = (ulong *)FUN_710392e290(0x10,0x18,(long ****)param_3,param_4,param_5,
                                                 param_6,param_7,param_8);
                if (puVar8 == (ulong *)0x0) {
                  if (DAT_7105332f00 != (long *)0x0) {
                    local_7c[0] = 0;
                    local_88 = (long ***)&SUB_00000018;
                    param_3 = (undefined **)&local_88;
                    uVar18 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,local_7c);
                    if (((uVar18 & 1) != 0) &&
                       (puVar8 = (ulong *)FUN_710392e290(0x10,0x18,(long ****)param_3,param_4,
                                                         param_5,param_6,param_7,param_8),
                       puVar8 != (ulong *)0x0)) goto LAB_71036a70c0;
                  }
                  puVar8 = (ulong *)0x0;
                }
LAB_71036a70c0:
                puVar8[1] = 0;
                puVar8[2] = 0;
                *puVar8 = 0;
                pppplVar37 = (long ****)strlen("");
                if ((long ****)0xffffffffffffffef < pppplVar37) goto LAB_71036a7dbc;
                if (pppplVar37 < (long ****)0x17) {
                  pvVar36 = (void *)((long)puVar8 + 1);
                  *(char *)puVar8 = (char)((int)pppplVar37 << 1);
                  if (pppplVar37 != (long ****)0x0) goto LAB_71036a7188;
                }
                else {
                  ppplVar31 = (long ***)((ulong)(pppplVar37 + 2) & 0xfffffffffffffff0);
                  ppplVar17 = ppplVar31;
                  if (((ulong)(pppplVar37 + 2) & 0xfffffffffffffff0) == 0) {
                    ppplVar17 = (long ***)0x1;
                  }
                  pvVar36 = (void *)FUN_710392e290(0x10,ppplVar17,(long ****)param_3,param_4,param_5
                                                   ,param_6,param_7,param_8);
                  if (pvVar36 == (void *)0x0) {
                    if (DAT_7105332f00 != (long *)0x0) {
                      local_7c[0] = 0;
                      pppplVar9 = &local_88;
                      local_88 = ppplVar17;
                      uVar18 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,local_7c);
                      if (((uVar18 & 1) != 0) &&
                         (pvVar36 = (void *)FUN_710392e290(0x10,ppplVar17,pppplVar9,param_4,param_5,
                                                           param_6,param_7,param_8),
                         pvVar36 != (void *)0x0)) goto LAB_71036a7170;
                    }
                    pvVar36 = (void *)0x0;
                  }
LAB_71036a7170:
                  *puVar8 = (ulong)ppplVar31 | 1;
                  puVar8[1] = (ulong)pppplVar37;
                  puVar8[2] = (ulong)pvVar36;
LAB_71036a7188:
                  param_3 = (undefined **)pppplVar37;
                  memcpy(pvVar36,&DAT_710455dba0,(size_t)pppplVar37);
                }
                *(undefined1 *)((long)pvVar36 + (long)pppplVar37) = 0;
                DAT_71053399a0 = (ulong)puVar8 | 1;
                std::string::assign((char *)puVar8);
                DAT_71053399a8 = 0xffffffffff2241f8;
                puVar8 = (ulong *)FUN_710392e290(0x10,0x18,(long ****)param_3,param_4,param_5,
                                                 param_6,param_7,param_8);
                if (puVar8 == (ulong *)0x0) {
                  if (DAT_7105332f00 != (long *)0x0) {
                    local_7c[0] = 0;
                    local_88 = (long ***)&SUB_00000018;
                    param_3 = (undefined **)&local_88;
                    uVar18 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,local_7c);
                    if (((uVar18 & 1) != 0) &&
                       (puVar8 = (ulong *)FUN_710392e290(0x10,0x18,(long ****)param_3,param_4,
                                                         param_5,param_6,param_7,param_8),
                       puVar8 != (ulong *)0x0)) goto LAB_71036a7228;
                  }
                  puVar8 = (ulong *)0x0;
                }
LAB_71036a7228:
                puVar8[1] = 0;
                puVar8[2] = 0;
                *puVar8 = 0;
                pppplVar37 = (long ****)strlen("");
                if ((long ****)0xffffffffffffffef < pppplVar37) goto LAB_71036a7dbc;
                if (pppplVar37 < (long ****)0x17) {
                  pvVar36 = (void *)((long)puVar8 + 1);
                  *(char *)puVar8 = (char)((int)pppplVar37 << 1);
                  if (pppplVar37 != (long ****)0x0) goto LAB_71036a72f0;
                }
                else {
                  ppplVar31 = (long ***)((ulong)(pppplVar37 + 2) & 0xfffffffffffffff0);
                  ppplVar17 = ppplVar31;
                  if (((ulong)(pppplVar37 + 2) & 0xfffffffffffffff0) == 0) {
                    ppplVar17 = (long ***)0x1;
                  }
                  pvVar36 = (void *)FUN_710392e290(0x10,ppplVar17,(long ****)param_3,param_4,param_5
                                                   ,param_6,param_7,param_8);
                  if (pvVar36 == (void *)0x0) {
                    if (DAT_7105332f00 != (long *)0x0) {
                      local_7c[0] = 0;
                      pppplVar9 = &local_88;
                      local_88 = ppplVar17;
                      uVar18 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,local_7c);
                      if (((uVar18 & 1) != 0) &&
                         (pvVar36 = (void *)FUN_710392e290(0x10,ppplVar17,pppplVar9,param_4,param_5,
                                                           param_6,param_7,param_8),
                         pvVar36 != (void *)0x0)) goto LAB_71036a72d8;
                    }
                    pvVar36 = (void *)0x0;
                  }
LAB_71036a72d8:
                  *puVar8 = (ulong)ppplVar31 | 1;
                  puVar8[1] = (ulong)pppplVar37;
                  puVar8[2] = (ulong)pvVar36;
LAB_71036a72f0:
                  param_3 = (undefined **)pppplVar37;
                  memcpy(pvVar36,&DAT_710455dba0,(size_t)pppplVar37);
                }
                *(undefined1 *)((long)pvVar36 + (long)pppplVar37) = 0;
                DAT_71053399a8 = (ulong)puVar8 | 1;
                std::string::assign((char *)puVar8);
                DAT_71053399b0 = 0xffffffffff2241f0;
                puVar8 = (ulong *)FUN_710392e290(0x10,0x18,(long ****)param_3,param_4,param_5,
                                                 param_6,param_7,param_8);
                if (puVar8 == (ulong *)0x0) {
                  if (DAT_7105332f00 != (long *)0x0) {
                    local_7c[0] = 0;
                    local_88 = (long ***)&SUB_00000018;
                    param_3 = (undefined **)&local_88;
                    uVar18 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,local_7c);
                    if (((uVar18 & 1) != 0) &&
                       (puVar8 = (ulong *)FUN_710392e290(0x10,0x18,(long ****)param_3,param_4,
                                                         param_5,param_6,param_7,param_8),
                       puVar8 != (ulong *)0x0)) goto LAB_71036a7390;
                  }
                  puVar8 = (ulong *)0x0;
                }
LAB_71036a7390:
                puVar8[1] = 0;
                puVar8[2] = 0;
                *puVar8 = 0;
                pppplVar37 = (long ****)strlen("");
                if ((long ****)0xffffffffffffffef < pppplVar37) goto LAB_71036a7dbc;
                if (pppplVar37 < (long ****)0x17) {
                  pvVar36 = (void *)((long)puVar8 + 1);
                  *(char *)puVar8 = (char)((int)pppplVar37 << 1);
                  if (pppplVar37 != (long ****)0x0) goto LAB_71036a7458;
                }
                else {
                  ppplVar31 = (long ***)((ulong)(pppplVar37 + 2) & 0xfffffffffffffff0);
                  ppplVar17 = ppplVar31;
                  if (((ulong)(pppplVar37 + 2) & 0xfffffffffffffff0) == 0) {
                    ppplVar17 = (long ***)0x1;
                  }
                  pvVar36 = (void *)FUN_710392e290(0x10,ppplVar17,(long ****)param_3,param_4,param_5
                                                   ,param_6,param_7,param_8);
                  if (pvVar36 == (void *)0x0) {
                    if (DAT_7105332f00 != (long *)0x0) {
                      local_7c[0] = 0;
                      pppplVar9 = &local_88;
                      local_88 = ppplVar17;
                      uVar18 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,local_7c);
                      if (((uVar18 & 1) != 0) &&
                         (pvVar36 = (void *)FUN_710392e290(0x10,ppplVar17,pppplVar9,param_4,param_5,
                                                           param_6,param_7,param_8),
                         pvVar36 != (void *)0x0)) goto LAB_71036a7440;
                    }
                    pvVar36 = (void *)0x0;
                  }
LAB_71036a7440:
                  *puVar8 = (ulong)ppplVar31 | 1;
                  puVar8[1] = (ulong)pppplVar37;
                  puVar8[2] = (ulong)pvVar36;
LAB_71036a7458:
                  param_3 = (undefined **)pppplVar37;
                  memcpy(pvVar36,&DAT_710455dba0,(size_t)pppplVar37);
                }
                *(undefined1 *)((long)pvVar36 + (long)pppplVar37) = 0;
                DAT_71053399b0 = (ulong)puVar8 | 1;
                std::string::assign((char *)puVar8);
                DAT_71053399b8 = 0xffffffffff2241e8;
                puVar8 = (ulong *)FUN_710392e290(0x10,0x18,(long ****)param_3,param_4,param_5,
                                                 param_6,param_7,param_8);
                if (puVar8 == (ulong *)0x0) {
                  if (DAT_7105332f00 != (long *)0x0) {
                    local_7c[0] = 0;
                    local_88 = (long ***)&SUB_00000018;
                    param_3 = (undefined **)&local_88;
                    uVar18 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,local_7c);
                    if (((uVar18 & 1) != 0) &&
                       (puVar8 = (ulong *)FUN_710392e290(0x10,0x18,(long ****)param_3,param_4,
                                                         param_5,param_6,param_7,param_8),
                       puVar8 != (ulong *)0x0)) goto LAB_71036a74f8;
                  }
                  puVar8 = (ulong *)0x0;
                }
LAB_71036a74f8:
                puVar8[1] = 0;
                puVar8[2] = 0;
                *puVar8 = 0;
                pppplVar37 = (long ****)strlen("");
                if ((long ****)0xffffffffffffffef < pppplVar37) goto LAB_71036a7dbc;
                if (pppplVar37 < (long ****)0x17) {
                  pvVar36 = (void *)((long)puVar8 + 1);
                  *(char *)puVar8 = (char)((int)pppplVar37 << 1);
                  if (pppplVar37 != (long ****)0x0) goto LAB_71036a75c0;
                }
                else {
                  ppplVar31 = (long ***)((ulong)(pppplVar37 + 2) & 0xfffffffffffffff0);
                  ppplVar17 = ppplVar31;
                  if (((ulong)(pppplVar37 + 2) & 0xfffffffffffffff0) == 0) {
                    ppplVar17 = (long ***)0x1;
                  }
                  pvVar36 = (void *)FUN_710392e290(0x10,ppplVar17,(long ****)param_3,param_4,param_5
                                                   ,param_6,param_7,param_8);
                  if (pvVar36 == (void *)0x0) {
                    if (DAT_7105332f00 != (long *)0x0) {
                      local_7c[0] = 0;
                      pppplVar9 = &local_88;
                      local_88 = ppplVar17;
                      uVar18 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,local_7c);
                      if (((uVar18 & 1) != 0) &&
                         (pvVar36 = (void *)FUN_710392e290(0x10,ppplVar17,pppplVar9,param_4,param_5,
                                                           param_6,param_7,param_8),
                         pvVar36 != (void *)0x0)) goto LAB_71036a75a8;
                    }
                    pvVar36 = (void *)0x0;
                  }
LAB_71036a75a8:
                  *puVar8 = (ulong)ppplVar31 | 1;
                  puVar8[1] = (ulong)pppplVar37;
                  puVar8[2] = (ulong)pvVar36;
LAB_71036a75c0:
                  param_3 = (undefined **)pppplVar37;
                  memcpy(pvVar36,&DAT_710455dba0,(size_t)pppplVar37);
                }
                *(undefined1 *)((long)pvVar36 + (long)pppplVar37) = 0;
                DAT_71053399b8 = (ulong)puVar8 | 1;
                std::string::assign((char *)puVar8);
                DAT_71053399c0 = 0xffffffffff2241e0;
                puVar8 = (ulong *)FUN_710392e290(0x10,0x18,(long ****)param_3,param_4,param_5,
                                                 param_6,param_7,param_8);
                if (puVar8 == (ulong *)0x0) {
                  if (DAT_7105332f00 != (long *)0x0) {
                    local_7c[0] = 0;
                    local_88 = (long ***)&SUB_00000018;
                    param_3 = (undefined **)&local_88;
                    uVar18 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,local_7c);
                    if (((uVar18 & 1) != 0) &&
                       (puVar8 = (ulong *)FUN_710392e290(0x10,0x18,(long ****)param_3,param_4,
                                                         param_5,param_6,param_7,param_8),
                       puVar8 != (ulong *)0x0)) goto LAB_71036a7660;
                  }
                  puVar8 = (ulong *)0x0;
                }
LAB_71036a7660:
                puVar8[1] = 0;
                puVar8[2] = 0;
                *puVar8 = 0;
                pppplVar37 = (long ****)strlen("");
                if ((long ****)0xffffffffffffffef < pppplVar37) goto LAB_71036a7dbc;
                if (pppplVar37 < (long ****)0x17) {
                  pvVar36 = (void *)((long)puVar8 + 1);
                  *(char *)puVar8 = (char)((int)pppplVar37 << 1);
                  if (pppplVar37 != (long ****)0x0) goto LAB_71036a7728;
                }
                else {
                  ppplVar31 = (long ***)((ulong)(pppplVar37 + 2) & 0xfffffffffffffff0);
                  ppplVar17 = ppplVar31;
                  if (((ulong)(pppplVar37 + 2) & 0xfffffffffffffff0) == 0) {
                    ppplVar17 = (long ***)0x1;
                  }
                  pvVar36 = (void *)FUN_710392e290(0x10,ppplVar17,(long ****)param_3,param_4,param_5
                                                   ,param_6,param_7,param_8);
                  if (pvVar36 == (void *)0x0) {
                    if (DAT_7105332f00 != (long *)0x0) {
                      local_7c[0] = 0;
                      pppplVar9 = &local_88;
                      local_88 = ppplVar17;
                      uVar18 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,local_7c);
                      if (((uVar18 & 1) != 0) &&
                         (pvVar36 = (void *)FUN_710392e290(0x10,ppplVar17,pppplVar9,param_4,param_5,
                                                           param_6,param_7,param_8),
                         pvVar36 != (void *)0x0)) goto LAB_71036a7710;
                    }
                    pvVar36 = (void *)0x0;
                  }
LAB_71036a7710:
                  *puVar8 = (ulong)ppplVar31 | 1;
                  puVar8[1] = (ulong)pppplVar37;
                  puVar8[2] = (ulong)pvVar36;
LAB_71036a7728:
                  param_3 = (undefined **)pppplVar37;
                  memcpy(pvVar36,&DAT_710455dba0,(size_t)pppplVar37);
                }
                *(undefined1 *)((long)pvVar36 + (long)pppplVar37) = 0;
                DAT_71053399c0 = (ulong)puVar8 | 1;
                std::string::assign((char *)puVar8);
                DAT_71053399c8 = 0xffffffffff2241d8;
                puVar8 = (ulong *)FUN_710392e290(0x10,0x18,(long ****)param_3,param_4,param_5,
                                                 param_6,param_7,param_8);
                if (puVar8 == (ulong *)0x0) {
                  if (DAT_7105332f00 != (long *)0x0) {
                    local_7c[0] = 0;
                    local_88 = (long ***)&SUB_00000018;
                    param_3 = (undefined **)&local_88;
                    uVar18 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,local_7c);
                    if (((uVar18 & 1) != 0) &&
                       (puVar8 = (ulong *)FUN_710392e290(0x10,0x18,(long ****)param_3,param_4,
                                                         param_5,param_6,param_7,param_8),
                       puVar8 != (ulong *)0x0)) goto LAB_71036a77c8;
                  }
                  puVar8 = (ulong *)0x0;
                }
LAB_71036a77c8:
                puVar8[1] = 0;
                puVar8[2] = 0;
                *puVar8 = 0;
                pppplVar37 = (long ****)strlen("");
                if ((long ****)0xffffffffffffffef < pppplVar37) goto LAB_71036a7dbc;
                if (pppplVar37 < (long ****)0x17) {
                  pvVar36 = (void *)((long)puVar8 + 1);
                  *(char *)puVar8 = (char)((int)pppplVar37 << 1);
                  if (pppplVar37 != (long ****)0x0) goto LAB_71036a7890;
                }
                else {
                  ppplVar31 = (long ***)((ulong)(pppplVar37 + 2) & 0xfffffffffffffff0);
                  ppplVar17 = ppplVar31;
                  if (((ulong)(pppplVar37 + 2) & 0xfffffffffffffff0) == 0) {
                    ppplVar17 = (long ***)0x1;
                  }
                  pvVar36 = (void *)FUN_710392e290(0x10,ppplVar17,(long ****)param_3,param_4,param_5
                                                   ,param_6,param_7,param_8);
                  if (pvVar36 == (void *)0x0) {
                    if (DAT_7105332f00 != (long *)0x0) {
                      local_7c[0] = 0;
                      pppplVar9 = &local_88;
                      local_88 = ppplVar17;
                      uVar18 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,local_7c);
                      if (((uVar18 & 1) != 0) &&
                         (pvVar36 = (void *)FUN_710392e290(0x10,ppplVar17,pppplVar9,param_4,param_5,
                                                           param_6,param_7,param_8),
                         pvVar36 != (void *)0x0)) goto LAB_71036a7878;
                    }
                    pvVar36 = (void *)0x0;
                  }
LAB_71036a7878:
                  *puVar8 = (ulong)ppplVar31 | 1;
                  puVar8[1] = (ulong)pppplVar37;
                  puVar8[2] = (ulong)pvVar36;
LAB_71036a7890:
                  param_3 = (undefined **)pppplVar37;
                  memcpy(pvVar36,&DAT_710455dba0,(size_t)pppplVar37);
                }
                *(undefined1 *)((long)pvVar36 + (long)pppplVar37) = 0;
                DAT_71053399c8 = (ulong)puVar8 | 1;
                std::string::assign((char *)puVar8);
                DAT_71053399d0 = 0xffffffffff2241d0;
                puVar8 = (ulong *)FUN_710392e290(0x10,0x18,(long ****)param_3,param_4,param_5,
                                                 param_6,param_7,param_8);
                if (puVar8 == (ulong *)0x0) {
                  if (DAT_7105332f00 != (long *)0x0) {
                    local_7c[0] = 0;
                    local_88 = (long ***)&SUB_00000018;
                    param_3 = (undefined **)&local_88;
                    uVar18 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,local_7c);
                    if (((uVar18 & 1) != 0) &&
                       (puVar8 = (ulong *)FUN_710392e290(0x10,0x18,(long ****)param_3,param_4,
                                                         param_5,param_6,param_7,param_8),
                       puVar8 != (ulong *)0x0)) goto LAB_71036a7930;
                  }
                  puVar8 = (ulong *)0x0;
                }
LAB_71036a7930:
                puVar8[1] = 0;
                puVar8[2] = 0;
                *puVar8 = 0;
                pppplVar37 = (long ****)strlen("");
                if ((long ****)0xffffffffffffffef < pppplVar37) goto LAB_71036a7dbc;
                if (pppplVar37 < (long ****)0x17) {
                  pvVar36 = (void *)((long)puVar8 + 1);
                  *(char *)puVar8 = (char)((int)pppplVar37 << 1);
                  if (pppplVar37 != (long ****)0x0) goto LAB_71036a79f8;
                }
                else {
                  ppplVar31 = (long ***)((ulong)(pppplVar37 + 2) & 0xfffffffffffffff0);
                  ppplVar17 = ppplVar31;
                  if (((ulong)(pppplVar37 + 2) & 0xfffffffffffffff0) == 0) {
                    ppplVar17 = (long ***)0x1;
                  }
                  pvVar36 = (void *)FUN_710392e290(0x10,ppplVar17,(long ****)param_3,param_4,param_5
                                                   ,param_6,param_7,param_8);
                  if (pvVar36 == (void *)0x0) {
                    if (DAT_7105332f00 != (long *)0x0) {
                      local_7c[0] = 0;
                      pppplVar9 = &local_88;
                      local_88 = ppplVar17;
                      uVar18 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,local_7c);
                      if (((uVar18 & 1) != 0) &&
                         (pvVar36 = (void *)FUN_710392e290(0x10,ppplVar17,pppplVar9,param_4,param_5,
                                                           param_6,param_7,param_8),
                         pvVar36 != (void *)0x0)) goto LAB_71036a79e0;
                    }
                    pvVar36 = (void *)0x0;
                  }
LAB_71036a79e0:
                  *puVar8 = (ulong)ppplVar31 | 1;
                  puVar8[1] = (ulong)pppplVar37;
                  puVar8[2] = (ulong)pvVar36;
LAB_71036a79f8:
                  param_3 = (undefined **)pppplVar37;
                  memcpy(pvVar36,&DAT_710455dba0,(size_t)pppplVar37);
                }
                *(undefined1 *)((long)pvVar36 + (long)pppplVar37) = 0;
                DAT_71053399d0 = (ulong)puVar8 | 1;
                std::string::assign((char *)puVar8);
                DAT_71053399d8 = 0xffffffffff2241c8;
                puVar8 = (ulong *)FUN_710392e290(0x10,0x18,(long ****)param_3,param_4,param_5,
                                                 param_6,param_7,param_8);
                if (puVar8 == (ulong *)0x0) {
                  if (DAT_7105332f00 != (long *)0x0) {
                    local_7c[0] = 0;
                    local_88 = (long ***)&SUB_00000018;
                    param_3 = (undefined **)&local_88;
                    uVar18 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,local_7c);
                    if (((uVar18 & 1) != 0) &&
                       (puVar8 = (ulong *)FUN_710392e290(0x10,0x18,(long ****)param_3,param_4,
                                                         param_5,param_6,param_7,param_8),
                       puVar8 != (ulong *)0x0)) goto LAB_71036a7a98;
                  }
                  puVar8 = (ulong *)0x0;
                }
LAB_71036a7a98:
                puVar8[1] = 0;
                puVar8[2] = 0;
                *puVar8 = 0;
                __n = strlen("");
                if (0xffffffffffffffef < __n) {
LAB_71036a7dbc:
                    /* WARNING: Subroutine does not return */
                  std::__basic_string_common<true>::__throw_length_error();
                }
                if (__n < 0x17) {
                  pvVar36 = (void *)((long)puVar8 + 1);
                  *(char *)puVar8 = (char)((int)__n << 1);
                  if (__n != 0) goto LAB_71036a7b50;
                }
                else {
                  ppplVar31 = (long ***)(__n + 0x10 & 0xfffffffffffffff0);
                  ppplVar17 = ppplVar31;
                  if ((__n + 0x10 & 0xfffffffffffffff0) == 0) {
                    ppplVar17 = (long ***)0x1;
                  }
                  pvVar36 = (void *)FUN_710392e290(0x10,ppplVar17,(long ****)param_3,param_4,param_5
                                                   ,param_6,param_7,param_8);
                  if (pvVar36 == (void *)0x0) {
                    if (DAT_7105332f00 != (long *)0x0) {
                      local_7c[0] = 0;
                      pppplVar37 = &local_88;
                      local_88 = ppplVar17;
                      uVar18 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,local_7c);
                      if (((uVar18 & 1) != 0) &&
                         (pvVar36 = (void *)FUN_710392e290(0x10,ppplVar17,pppplVar37,param_4,param_5
                                                           ,param_6,param_7,param_8),
                         pvVar36 != (void *)0x0)) goto LAB_71036a7b40;
                    }
                    pvVar36 = (void *)0x0;
                  }
LAB_71036a7b40:
                  puVar8[1] = __n;
                  puVar8[2] = (ulong)pvVar36;
                  *puVar8 = (ulong)ppplVar31 | 1;
LAB_71036a7b50:
                  memcpy(pvVar36,&DAT_710455dba0,__n);
                }
                *(undefined1 *)((long)pvVar36 + __n) = 0;
                DAT_71053399d8 = (ulong)puVar8 | 1;
                std::string::assign((char *)puVar8);
                param_3 = &PTR_LOOP_7104f17000;
                FUN_71000001c0();
                __cxa_guard_release(&DAT_7105339d78);
              }
              puVar8 = FUN_710366f350(puVar21,&DAT_7105339928 + uVar29);
              uVar18 = *puVar21;
              if ((uVar18 & 1) == 0) {
                puVar19 = (ulong *)((long)puVar21 + puVar23[2] * 0x20 + uVar18);
              }
              else {
                puVar19 = (ulong *)(uVar18 - 0x20 | 1);
              }
              if (puVar8 != puVar19) {
                piVar22 = (int *)(lVar33 + (ulong)(uint)((int)uVar30 * 0x17 + (int)uVar29) * 0x80);
                param_3 = (undefined **)(((ulong)puVar8 & 0xfffffffffffffffe) + 8);
                puVar13 = (undefined1 *)(lVar32 + uVar30 * 0x1a8 + uVar29 * 0x10);
                *(undefined ***)(puVar13 + 8) = param_3;
                *puVar13 = 1;
                FUN_71038e6840(piVar22,param_1 + 0x18,(int *)param_3,param_4,param_5,param_6,param_7
                               ,param_8);
                if (*(long *)(piVar22 + 0xc) == 0) {
                  *(undefined1 *)(lVar16 + 0x188) = 0;
                }
                else if ((puVar5 != (ulong *)0x0) &&
                        (*(long *)(param_1 + 0x78) == *(long *)(param_1 + 0x80))) {
                  lVar33 = lVar10 + 0x171;
                  if ((*(byte *)(lVar10 + 0x170) & 1) != 0) {
                    lVar33 = *(long *)(lVar16 + 0x180);
                  }
                  FUN_710366f1b0((ulong *)&local_88,lVar33,(long ****)param_3,param_4,param_5,
                                 param_6,param_7,param_8);
                  puVar8 = FUN_7103679ff0(puVar4,(ulong *)&local_88);
                  if ((((ulong)local_88 & 1) != 0) &&
                     (pbVar15 = (byte *)((ulong)local_88 & 0xfffffffffffffffe),
                     pbVar15 != (byte *)0x0)) {
                    if (((*pbVar15 & 1) != 0) && (*(ulong *)(pbVar15 + 0x10) != 0)) {
                      FUN_710392eb40(*(ulong *)(pbVar15 + 0x10));
                    }
                    FUN_710392eb40((ulong)pbVar15);
                  }
                  uVar18 = *puVar4;
                  if ((uVar18 & 1) == 0) {
                    puVar19 = (ulong *)((long)puVar4 + puVar5[3] * 0x18 + uVar18);
                  }
                  else {
                    puVar19 = (ulong *)(uVar18 - 0x18 | 1);
                  }
                  if (puVar8 != puVar19) {
                    uVar34 = (ulong)puVar8 & 0xfffffffffffffffe;
                    pvVar36 = (void *)*puVar11;
                    uVar18 = *(ulong *)(uVar34 + 0x10);
                    if ((ulong)((long)(*puVar27 - (long)pvVar36) >> 3) < uVar18) {
                      if (uVar18 >> 0x3d != 0) goto LAB_71036a7db8;
                      pppplVar37 = (long ****)(*puVar1 - (long)pvVar36);
                      ppplVar17 = (long ***)(uVar18 * 8);
                      if (ppplVar17 == (long ***)0x0) {
                        ppplVar17 = (long ***)0x1;
                      }
                      lVar33 = (long)pppplVar37 >> 3;
                      pvVar6 = (void *)FUN_710392e290(0x10,ppplVar17,(long ****)param_3,param_4,
                                                      param_5,param_6,param_7,param_8);
                      if (pvVar6 == (void *)0x0) {
                        if (DAT_7105332f00 != (long *)0x0) {
                          local_7c[0] = 0;
                          param_3 = (undefined **)&local_88;
                          local_88 = ppplVar17;
                          uVar7 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,local_7c);
                          if (((uVar7 & 1) != 0) &&
                             (pvVar6 = (void *)FUN_710392e290(0x10,ppplVar17,(long ****)param_3,
                                                              param_4,param_5,param_6,param_7,
                                                              param_8), pvVar6 != (void *)0x0))
                          goto LAB_71036a5930;
                        }
                        pvVar6 = (void *)0x0;
                      }
LAB_71036a5930:
                      if (0 < (long)pppplVar37) {
                        memcpy(pvVar6,pvVar36,(size_t)pppplVar37);
                        param_3 = (undefined **)pppplVar37;
                      }
                      *puVar11 = pvVar6;
                      *puVar1 = (ulong)((long)pvVar6 + lVar33 * 8);
                      *puVar27 = (ulong)((long)pvVar6 + uVar18 * 8);
                      if (pvVar36 != (void *)0x0) {
                        FUN_710392eb40((ulong)pvVar36);
                      }
                    }
                    uVar18 = *(ulong *)(uVar34 + 8);
                    puVar35 = (undefined4 *)(uVar34 + 8 + uVar18);
                    if ((uVar18 & 1) != 0) {
                      puVar35 = (undefined4 *)(uVar18 & 0xfffffffffffffffe);
                    }
                    if (*(long *)(uVar34 + 0x10) != 0) {
                      puVar2 = puVar35 + *(long *)(uVar34 + 0x10) * 2;
                      do {
                        puVar24 = (undefined4 *)*puVar1;
                        uVar38 = NEON_ucvtf(puVar35[1]);
                        uVar39 = NEON_ucvtf(*puVar35);
                        if (puVar24 < (undefined4 *)*puVar27) {
                          *puVar24 = uVar39;
                          puVar24[1] = uVar38;
                          *puVar1 = *puVar1 + 8;
                        }
                        else {
                          pvVar36 = (void *)*puVar11;
                          pppplVar37 = (long ****)((long)puVar24 - (long)pvVar36);
                          uVar18 = ((long)pppplVar37 >> 3) + 1;
                          if (uVar18 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
                            std::__vector_base_common<true>::__throw_length_error();
                          }
                          lVar33 = (long)*puVar27 - (long)pvVar36;
                          if ((ulong)(lVar33 >> 3) < 0xfffffffffffffff) {
                            uVar34 = lVar33 >> 2;
                            if (uVar18 <= uVar34) {
                              uVar18 = uVar34;
                            }
                            if (uVar18 != 0) {
                              if (uVar18 >> 0x3d == 0) goto LAB_71036a5a3c;
                              goto LAB_71036a7db8;
                            }
                            pvVar6 = (void *)0x0;
                          }
                          else {
                            uVar18 = 0x1fffffffffffffff;
LAB_71036a5a3c:
                            ppplVar17 = (long ***)(uVar18 * 8);
                            if (ppplVar17 == (long ***)0x0) {
                              ppplVar17 = (long ***)0x1;
                            }
                            pvVar6 = (void *)FUN_710392e290(0x10,ppplVar17,(long ****)param_3,
                                                            param_4,param_5,param_6,param_7,param_8)
                            ;
                            if (pvVar6 == (void *)0x0) {
                              if (DAT_7105332f00 != (long *)0x0) {
                                local_7c[0] = 0;
                                param_3 = (undefined **)&local_88;
                                local_88 = ppplVar17;
                                uVar34 = (**(code **)(*DAT_7105332f00 + 0x30))
                                                   (DAT_7105332f00,local_7c);
                                if (((uVar34 & 1) != 0) &&
                                   (pvVar6 = (void *)FUN_710392e290(0x10,ppplVar17,
                                                                    (long ****)param_3,param_4,
                                                                    param_5,param_6,param_7,param_8)
                                   , pvVar6 != (void *)0x0)) goto LAB_71036a5aa4;
                              }
                              pvVar6 = (void *)0x0;
                            }
                          }
LAB_71036a5aa4:
                          puVar24 = (undefined4 *)((long)pvVar6 + ((long)pppplVar37 >> 3) * 8);
                          *puVar24 = uVar39;
                          puVar24[1] = uVar38;
                          if (0 < (long)pppplVar37) {
                            memcpy(pvVar6,pvVar36,(size_t)pppplVar37);
                            param_3 = (undefined **)pppplVar37;
                          }
                          *puVar11 = pvVar6;
                          *puVar1 = (ulong)(puVar24 + 2);
                          *puVar27 = (ulong)((long)pvVar6 + uVar18 * 8);
                          if (pvVar36 != (void *)0x0) {
                            FUN_710392eb40((ulong)pvVar36);
                          }
                        }
                        puVar35 = puVar35 + 2;
                      } while (puVar35 != puVar2);
                    }
                    if (*(char *)(param_1 + 0x70) == '\0') {
                      *(undefined1 *)(param_1 + 0x70) = 1;
                    }
                  }
                }
              }
              uVar29 = uVar29 + 1;
            } while (uVar29 < 0x17);
            lVar32 = *(long *)(param_1 + 0x38);
            lVar16 = *(long *)(param_1 + 0x40);
          }
          uVar29 = (lVar16 - lVar32 >> 3) * 0x21cfb2b78c13521d;
          uVar30 = (ulong)((int)uVar30 + 1);
        } while (uVar30 <= uVar29 && uVar29 - uVar30 != 0);
        lVar10 = lVar16;
        if ((uVar28 & 1) == 0) goto LAB_71036a7d24;
LAB_71036a7d38:
        puVar21 = (ulong *)puVar23[5];
        if ((ulong *)puVar23[5] == (ulong *)0x0) {
          puVar23 = puVar23 + 3;
          do {
            puVar27 = puVar23;
            puVar23 = (ulong *)*puVar27;
          } while (puVar27 == (ulong *)puVar23[2]);
          if ((ulong *)puVar27[2] != puVar23) {
            puVar27 = puVar23;
          }
        }
        else {
          do {
            puVar27 = puVar21;
            puVar21 = (ulong *)puVar27[1];
          } while ((ulong *)puVar27[1] != (ulong *)0x0);
        }
        uVar28 = (ulong)(puVar27 + -3) | 1;
        lVar33 = lVar16;
        lVar16 = lVar32;
        if (uVar28 == uVar14) {
          return;
        }
      }
      if ((uVar28 & 1) != 0) goto LAB_71036a7d38;
LAB_71036a7d24:
      uVar28 = uVar28 + 0x18;
      lVar33 = lVar16;
      lVar16 = lVar32;
    } while (uVar28 != uVar14);
  }
  return;
}

