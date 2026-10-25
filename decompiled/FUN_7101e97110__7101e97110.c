// addr:      7101e97110
// offset:    0x1e97110
// name:      FUN_7101e97110
// mangled:   
// signature: undefined __cdecl FUN_7101e97110(long * param_1, undefined8 param_2, undefined8 param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_7101e97110(long *param_1,undefined8 param_2,undefined8 param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint uVar5;
  void *pvVar6;
  long ****pppplVar7;
  long ****pppplVar8;
  long ****pppplVar9;
  long ****pppplVar10;
  long ****pppplVar11;
  uint uVar12;
  undefined8 uVar13;
  long lVar14;
  ulong uVar15;
  long ***ppplVar16;
  undefined8 *puVar17;
  void *pvVar18;
  size_t __n;
  long ****pppplVar19;
  void *pvVar20;
  long lVar21;
  ulong uVar22;
  long ***local_60;
  undefined4 local_54;
  
  uVar5 = DAT_71052391cc;
  uVar4 = DAT_71052391c8;
  uVar3 = DAT_71052391c4;
  pppplVar19 = &local_60;
  pppplVar8 = &local_60;
  pppplVar9 = &local_60;
  pppplVar10 = &local_60;
  pppplVar11 = &local_60;
  if (*(char *)((long)param_1 + 9) == '\0') {
    uVar12 = DAT_71052391c0 ^ DAT_71052391c0 << 0xb;
    uVar1 = uVar12 ^ uVar12 >> 8 ^ DAT_71052391cc;
    uVar12 = (uVar1 ^ DAT_71052391cc >> 0x13 ^ 0xffffffff) & 1;
    DAT_71052391cc = uVar1 ^ DAT_71052391cc >> 0x13;
  }
  else {
    uVar12 = DAT_71052391c0 ^ DAT_71052391c0 << 0xb;
    DAT_71052391cc = uVar12 ^ uVar12 >> 8 ^ DAT_71052391cc ^ DAT_71052391cc >> 0x13;
    if (*(char *)((long)param_1 + 9) == '\x01') {
      uVar12 = (DAT_71052391cc & 1) << 1 ^ 2;
    }
    else {
      uVar12 = 1;
      if ((DAT_71052391cc & 1) == 0) {
        uVar12 = 2;
      }
    }
  }
  DAT_71052391c8 = uVar5;
  DAT_71052391c4 = uVar4;
  DAT_71052391c0 = uVar3;
  *(char *)((long)param_1 + 10) = (char)uVar12;
  FUN_7103778430(*param_1,"enemy_type_%02d",(ulong)uVar12,param_4,param_5,param_6,param_7,param_8);
  pppplVar7 = (long ****)(ulong)*(byte *)((long)param_1 + 10);
  FUN_7103778430(*param_1,"anime_enemy_def_%02d",pppplVar7,param_4,param_5,param_6,param_7,param_8);
  *(undefined8 *)(*param_1 + 0x30) = *(undefined8 *)(*param_1 + 0x28);
  if (*(char *)((long)param_1 + 10) == '\0') {
    lVar21 = *param_1;
    puVar17 = *(undefined8 **)(lVar21 + 0x30);
    if (puVar17 < *(undefined8 **)(lVar21 + 0x38)) {
      uVar13 = 0x169f6ef3eb;
      goto LAB_7101e975d8;
    }
    pvVar18 = *(void **)(lVar21 + 0x28);
    __n = (long)puVar17 - (long)pvVar18;
    uVar22 = ((long)__n >> 4) + 1;
    if (uVar22 >> 0x3c != 0) goto LAB_7101e9779c;
    lVar14 = (long)*(undefined8 **)(lVar21 + 0x38) - (long)pvVar18;
    if ((ulong)(lVar14 >> 4) < 0x7ffffffffffffff) {
      uVar15 = lVar14 >> 3;
      if (uVar22 <= uVar15) {
        uVar22 = uVar15;
      }
      if (uVar22 != 0) {
        if (uVar22 >> 0x3c != 0) goto LAB_7101e97634;
        goto LAB_7101e9736c;
      }
LAB_7101e973cc:
      pvVar6 = (void *)0x0;
    }
    else {
      uVar22 = 0xfffffffffffffff;
LAB_7101e9736c:
      ppplVar16 = (long ***)(uVar22 * 0x10);
      if (ppplVar16 == (long ***)0x0) {
        ppplVar16 = (long ***)0x1;
      }
      pvVar6 = (void *)FUN_710392e290(0x10,ppplVar16,pppplVar7,param_4,param_5,param_6,param_7,
                                      param_8);
      if (pvVar6 == (void *)0x0) {
        if (DAT_7105332f00 != (long *)0x0) {
          local_54 = 0;
          local_60 = ppplVar16;
          uVar15 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_54);
          if (((uVar15 & 1) != 0) &&
             (pvVar6 = (void *)FUN_710392e290(0x10,ppplVar16,pppplVar19,param_4,param_5,param_6,
                                              param_7,param_8), pvVar6 != (void *)0x0))
          goto LAB_7101e973d0;
        }
        goto LAB_7101e973cc;
      }
    }
LAB_7101e973d0:
    puVar17 = (undefined8 *)((long)pvVar6 + ((long)__n >> 4) * 0x10);
    pvVar20 = (void *)((long)pvVar6 + uVar22 * 0x10);
    uVar13 = 0x169f6ef3eb;
    goto LAB_7101e97734;
  }
  lVar21 = *param_1;
  puVar17 = *(undefined8 **)(lVar21 + 0x30);
  puVar2 = *(undefined8 **)(lVar21 + 0x38);
  if (*(char *)((long)param_1 + 10) != '\x01') {
    if (puVar17 < puVar2) {
      *puVar17 = 0x41a00000;
      puVar17[1] = 0x182405bb1d;
      *(long *)(lVar21 + 0x30) = *(long *)(lVar21 + 0x30) + 0x10;
    }
    else {
      pvVar18 = *(void **)(lVar21 + 0x28);
      pppplVar19 = (long ****)((long)puVar17 - (long)pvVar18);
      uVar22 = ((long)pppplVar19 >> 4) + 1;
      if (uVar22 >> 0x3c != 0) goto LAB_7101e9779c;
      if ((ulong)((long)puVar2 - (long)pvVar18 >> 4) < 0x7ffffffffffffff) {
        uVar15 = (long)puVar2 - (long)pvVar18 >> 3;
        if (uVar22 <= uVar15) {
          uVar22 = uVar15;
        }
        if (uVar22 != 0) {
          if (uVar22 >> 0x3c != 0) goto LAB_7101e97634;
          goto LAB_7101e9750c;
        }
LAB_7101e9756c:
        pvVar6 = (void *)0x0;
      }
      else {
        uVar22 = 0xfffffffffffffff;
LAB_7101e9750c:
        ppplVar16 = (long ***)(uVar22 * 0x10);
        if (ppplVar16 == (long ***)0x0) {
          ppplVar16 = (long ***)0x1;
        }
        pvVar6 = (void *)FUN_710392e290(0x10,ppplVar16,pppplVar7,param_4,param_5,param_6,param_7,
                                        param_8);
        if (pvVar6 == (void *)0x0) {
          if (DAT_7105332f00 != (long *)0x0) {
            local_54 = 0;
            local_60 = ppplVar16;
            uVar15 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_54);
            pppplVar7 = pppplVar9;
            if (((uVar15 & 1) != 0) &&
               (pvVar6 = (void *)FUN_710392e290(0x10,ppplVar16,pppplVar9,param_4,param_5,param_6,
                                                param_7,param_8), pppplVar7 = pppplVar9,
               pvVar6 != (void *)0x0)) goto LAB_7101e97570;
          }
          goto LAB_7101e9756c;
        }
      }
LAB_7101e97570:
      puVar17 = (undefined8 *)((long)pvVar6 + ((long)pppplVar19 >> 4) * 0x10);
      *puVar17 = 0x41a00000;
      puVar17[1] = 0x182405bb1d;
      if (0 < (long)pppplVar19) {
        memcpy(pvVar6,pvVar18,(size_t)pppplVar19);
        pppplVar7 = pppplVar19;
      }
      *(void **)(lVar21 + 0x28) = pvVar6;
      *(undefined8 **)(lVar21 + 0x30) = puVar17 + 2;
      *(void **)(lVar21 + 0x38) = (void *)((long)pvVar6 + uVar22 * 0x10);
      if (pvVar18 != (void *)0x0) {
        FUN_710392eb40((ulong)pvVar18);
      }
    }
    lVar21 = *param_1;
    puVar17 = *(undefined8 **)(lVar21 + 0x30);
    if (puVar17 < *(undefined8 **)(lVar21 + 0x38)) {
      uVar13 = 0x18306b5369;
      goto LAB_7101e975d8;
    }
    pvVar18 = *(void **)(lVar21 + 0x28);
    __n = (long)puVar17 - (long)pvVar18;
    uVar22 = ((long)__n >> 4) + 1;
    if (uVar22 >> 0x3c != 0) goto LAB_7101e9779c;
    lVar14 = (long)*(undefined8 **)(lVar21 + 0x38) - (long)pvVar18;
    if ((ulong)(lVar14 >> 4) < 0x7ffffffffffffff) {
      uVar15 = lVar14 >> 3;
      if (uVar22 <= uVar15) {
        uVar22 = uVar15;
      }
      if (uVar22 != 0) {
        if (uVar22 >> 0x3c != 0) goto LAB_7101e97634;
        goto LAB_7101e976bc;
      }
LAB_7101e9771c:
      pvVar6 = (void *)0x0;
    }
    else {
      uVar22 = 0xfffffffffffffff;
LAB_7101e976bc:
      ppplVar16 = (long ***)(uVar22 * 0x10);
      if (ppplVar16 == (long ***)0x0) {
        ppplVar16 = (long ***)0x1;
      }
      pvVar6 = (void *)FUN_710392e290(0x10,ppplVar16,pppplVar7,param_4,param_5,param_6,param_7,
                                      param_8);
      if (pvVar6 == (void *)0x0) {
        if (DAT_7105332f00 != (long *)0x0) {
          local_54 = 0;
          local_60 = ppplVar16;
          uVar15 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_54);
          if (((uVar15 & 1) != 0) &&
             (pvVar6 = (void *)FUN_710392e290(0x10,ppplVar16,pppplVar11,param_4,param_5,param_6,
                                              param_7,param_8), pvVar6 != (void *)0x0))
          goto LAB_7101e97720;
        }
        goto LAB_7101e9771c;
      }
    }
LAB_7101e97720:
    puVar17 = (undefined8 *)((long)pvVar6 + ((long)__n >> 4) * 0x10);
    pvVar20 = (void *)((long)pvVar6 + uVar22 * 0x10);
    uVar13 = 0x18306b5369;
    goto LAB_7101e97734;
  }
  if (puVar17 < puVar2) {
    *puVar17 = 0x42d60000;
    puVar17[1] = 0x1aedcb8833;
    *(long *)(lVar21 + 0x30) = *(long *)(lVar21 + 0x30) + 0x10;
  }
  else {
    pvVar18 = *(void **)(lVar21 + 0x28);
    pppplVar19 = (long ****)((long)puVar17 - (long)pvVar18);
    uVar22 = ((long)pppplVar19 >> 4) + 1;
    if (uVar22 >> 0x3c != 0) goto LAB_7101e9779c;
    if ((ulong)((long)puVar2 - (long)pvVar18 >> 4) < 0x7ffffffffffffff) {
      uVar15 = (long)puVar2 - (long)pvVar18 >> 3;
      if (uVar22 <= uVar15) {
        uVar22 = uVar15;
      }
      if (uVar22 != 0) {
        if (uVar22 >> 0x3c != 0) goto LAB_7101e97634;
        goto LAB_7101e973ec;
      }
LAB_7101e9744c:
      pvVar6 = (void *)0x0;
    }
    else {
      uVar22 = 0xfffffffffffffff;
LAB_7101e973ec:
      ppplVar16 = (long ***)(uVar22 * 0x10);
      if (ppplVar16 == (long ***)0x0) {
        ppplVar16 = (long ***)0x1;
      }
      pvVar6 = (void *)FUN_710392e290(0x10,ppplVar16,pppplVar7,param_4,param_5,param_6,param_7,
                                      param_8);
      if (pvVar6 == (void *)0x0) {
        if (DAT_7105332f00 != (long *)0x0) {
          local_54 = 0;
          local_60 = ppplVar16;
          uVar15 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_54);
          pppplVar7 = pppplVar8;
          if (((uVar15 & 1) != 0) &&
             (pvVar6 = (void *)FUN_710392e290(0x10,ppplVar16,pppplVar8,param_4,param_5,param_6,
                                              param_7,param_8), pppplVar7 = pppplVar8,
             pvVar6 != (void *)0x0)) goto LAB_7101e97450;
        }
        goto LAB_7101e9744c;
      }
    }
LAB_7101e97450:
    puVar17 = (undefined8 *)((long)pvVar6 + ((long)pppplVar19 >> 4) * 0x10);
    *puVar17 = 0x42d60000;
    puVar17[1] = 0x1aedcb8833;
    if (0 < (long)pppplVar19) {
      memcpy(pvVar6,pvVar18,(size_t)pppplVar19);
      pppplVar7 = pppplVar19;
    }
    *(void **)(lVar21 + 0x28) = pvVar6;
    *(undefined8 **)(lVar21 + 0x30) = puVar17 + 2;
    *(void **)(lVar21 + 0x38) = (void *)((long)pvVar6 + uVar22 * 0x10);
    if (pvVar18 != (void *)0x0) {
      FUN_710392eb40((ulong)pvVar18);
    }
  }
  lVar21 = *param_1;
  puVar17 = *(undefined8 **)(lVar21 + 0x30);
  if (puVar17 < *(undefined8 **)(lVar21 + 0x38)) {
    uVar13 = 0x1d89a08a73;
LAB_7101e975d8:
    *puVar17 = 0;
    puVar17[1] = uVar13;
    *(long *)(lVar21 + 0x30) = *(long *)(lVar21 + 0x30) + 0x10;
    return;
  }
  pvVar18 = *(void **)(lVar21 + 0x28);
  __n = (long)puVar17 - (long)pvVar18;
  uVar22 = ((long)__n >> 4) + 1;
  if (uVar22 >> 0x3c != 0) {
LAB_7101e9779c:
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_length_error();
  }
  lVar14 = (long)*(undefined8 **)(lVar21 + 0x38) - (long)pvVar18;
  if ((ulong)(lVar14 >> 4) < 0x7ffffffffffffff) {
    uVar15 = lVar14 >> 3;
    if (uVar22 <= uVar15) {
      uVar22 = uVar15;
    }
    if (uVar22 != 0) {
      if (uVar22 >> 0x3c != 0) {
LAB_7101e97634:
                    /* WARNING: Subroutine does not return */
        abort();
      }
      goto LAB_7101e9763c;
    }
LAB_7101e9769c:
    pvVar6 = (void *)0x0;
  }
  else {
    uVar22 = 0xfffffffffffffff;
LAB_7101e9763c:
    ppplVar16 = (long ***)(uVar22 * 0x10);
    if (ppplVar16 == (long ***)0x0) {
      ppplVar16 = (long ***)0x1;
    }
    pvVar6 = (void *)FUN_710392e290(0x10,ppplVar16,pppplVar7,param_4,param_5,param_6,param_7,param_8
                                   );
    if (pvVar6 == (void *)0x0) {
      if (DAT_7105332f00 != (long *)0x0) {
        local_54 = 0;
        local_60 = ppplVar16;
        uVar15 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_54);
        if (((uVar15 & 1) != 0) &&
           (pvVar6 = (void *)FUN_710392e290(0x10,ppplVar16,pppplVar10,param_4,param_5,param_6,
                                            param_7,param_8), pvVar6 != (void *)0x0))
        goto LAB_7101e976a0;
      }
      goto LAB_7101e9769c;
    }
  }
LAB_7101e976a0:
  puVar17 = (undefined8 *)((long)pvVar6 + ((long)__n >> 4) * 0x10);
  pvVar20 = (void *)((long)pvVar6 + uVar22 * 0x10);
  uVar13 = 0x1d89a08a73;
LAB_7101e97734:
  *puVar17 = 0;
  puVar17[1] = uVar13;
  if (0 < (long)__n) {
    memcpy(pvVar6,pvVar18,__n);
  }
  *(void **)(lVar21 + 0x28) = pvVar6;
  *(undefined8 **)(lVar21 + 0x30) = puVar17 + 2;
  *(void **)(lVar21 + 0x38) = pvVar20;
  if (pvVar18 == (void *)0x0) {
    return;
  }
  FUN_710392eb40((ulong)pvVar18);
  return;
}

