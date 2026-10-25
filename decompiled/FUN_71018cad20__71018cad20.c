// addr:      71018cad20
// offset:    0x18cad20
// name:      FUN_71018cad20
// mangled:   
// signature: undefined __cdecl FUN_71018cad20(long param_1)


void FUN_71018cad20(long param_1)

{
  long *plVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  undefined4 *puVar5;
  void *pvVar6;
  undefined8 *puVar7;
  ulong uVar8;
  long ****pppplVar9;
  byte ****ppppbVar10;
  long ****in_x4;
  undefined8 in_x5;
  undefined8 in_x6;
  undefined8 in_x7;
  undefined4 uVar11;
  undefined4 *puVar12;
  ulong uVar13;
  long ***ppplVar14;
  uint uVar15;
  undefined4 uVar16;
  long lVar17;
  undefined8 *puVar18;
  undefined4 *puVar19;
  void *pvVar20;
  long ****pppplVar21;
  size_t __n;
  long lVar22;
  long *plVar23;
  ulong local_2258;
  ulong local_2250;
  undefined8 uStack_2248;
  undefined8 local_2240;
  undefined8 uStack_2238;
  undefined8 local_2230;
  undefined2 local_2228;
  undefined1 local_2226;
  undefined8 local_21f8;
  undefined2 local_21f0;
  undefined8 local_21ec;
  undefined8 local_21e4;
  undefined1 local_21dc;
  undefined8 local_219c;
  undefined1 local_2194;
  undefined8 local_2154;
  undefined1 local_214c;
  undefined1 auStack_210c [4096];
  undefined1 uStack_110c;
  undefined4 local_1108;
  undefined1 uStack_1104;
  undefined8 local_1100;
  undefined1 uStack_10f8;
  undefined4 local_10b8;
  undefined5 uStack_10b4;
  undefined3 uStack_10af;
  undefined5 uStack_10ac;
  undefined1 auStack_1068 [4104];
  
  if (((DAT_71053144d8 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_71053144d8), iVar4 != 0)) {
    FUN_7101764000();
    FUN_71000001c0();
    __cxa_guard_release(&DAT_71053144d8);
  }
  uVar2 = DAT_71053050f0;
  local_21f0 = 0x100;
  local_21f8 = 0;
  local_21ec = 0x100000000;
  local_21dc = 0;
  local_21e4 = 0;
  local_2194 = 0;
  local_219c = 0;
  local_214c = 0;
  local_2154 = 0;
  memset(auStack_210c,0,0x1000);
  uStack_110c = 1;
  local_1108 = 0;
  uStack_1104 = 1;
  uStack_10f8 = 0;
  local_1100 = 0;
  local_10b8 = 0x20;
  memset(auStack_1068,0,0x1000);
  uStack_10ac = 0;
  uStack_10b4 = 0;
  uStack_10af = 0;
  FUN_7101af73b0((long)&local_21f8,uVar2);
  local_21f0 = CONCAT11(local_21f0._1_1_,1);
  local_2226 = 0;
  local_2230 = 0x7469745f676e616c;
  uStack_2238 = 0x5f74706f5f756e6d;
  uVar3 = 0x811c9dc5;
  uVar15 = 0x6d;
  lVar17 = 9;
  local_2228 = 0x656c;
  do {
    uVar3 = uVar3 * 0x89 ^ uVar15;
    uVar15 = (uint)*(byte *)((long)&local_2240 + lVar17);
    lVar17 = lVar17 + 1;
  } while (uVar15 != 0);
  local_2240 = (long ***)CONCAT44(0x12,uVar3);
  local_2250 = 0;
  uStack_2248 = 0;
  local_2258 = 0;
  FUN_7101af7560((long)&local_21f8,(uint *)&local_2240,(long *)&local_2258);
  if (local_2258 != 0) {
    local_2250 = local_2258;
    FUN_710392eb40(local_2258);
  }
  pppplVar9 = (long ****)0x1;
  if (*(char *)(*(long *)(DAT_710532f7c8 + 8) + 0x69) == '\0') {
    ppppbVar10 = (byte ****)0x1;
  }
  else {
    ppppbVar10 = (byte ****)0x2;
  }
  FUN_7101af8570(*(long *)(param_1 + 0xf8),(int *)&local_21f8,1,ppppbVar10,in_x4,in_x5,in_x6,in_x7);
  uVar3 = (uVar2 & 0x7f000000) + 0xfe000000;
  if (uVar3 >> 0x18 < 7) {
    uVar8 = (ulong)*(uint *)(&DAT_7104544710 + (long)(char)(uVar3 >> 0x18) * 4);
  }
  else {
    uVar8 = 0xffffffff;
  }
  FUN_7101af2070(*(long **)(*(long *)(param_1 + 0x100) + 0x80),uVar8,pppplVar9,ppppbVar10,in_x4,
                 in_x5,in_x6,in_x7);
  uVar3 = FUN_7103741ad0();
  if (uVar3 < 0xe) {
    uVar11 = *(undefined4 *)(&DAT_7104742e40 + (long)(int)uVar3 * 4);
  }
  else {
    uVar11 = 1;
  }
  *(undefined4 *)(param_1 + 0x10c) = uVar11;
  if (DAT_710523d00c < 0xe) {
    uVar16 = *(undefined4 *)(&UNK_7104742e80 + (long)(int)DAT_710523d00c * 4);
  }
  else {
    uVar16 = 1;
  }
  *(undefined4 *)(param_1 + 0x110) = uVar16;
  *(undefined4 *)(param_1 + 0x108) = 0;
  lVar22 = *(long *)(*(long *)(param_1 + 0xf0) + 0x80);
  *(undefined1 *)(*(long *)(param_1 + 0xf0) + 0x70) = 0;
  *(undefined4 *)(lVar22 + 0x50) = uVar11;
  *(undefined4 *)(lVar22 + 0x54) = uVar16;
  puVar18 = (undefined8 *)(lVar22 + 0x58);
  puVar19 = (undefined4 *)*puVar18;
  *(undefined4 **)(lVar22 + 0x60) = puVar19;
  plVar23 = (long *)(lVar22 + 0x68);
  plVar1 = (long *)(lVar22 + 0x60);
  lVar17 = *plVar23 - (long)puVar19;
  if ((undefined4 *)*plVar23 < puVar19 || lVar17 == 0) {
    if ((ulong)(lVar17 >> 2) < 0x1fffffffffffffff) {
      uVar8 = lVar17 >> 1;
      if (lVar17 == 0) {
        uVar8 = 1;
      }
      if (uVar8 >> 0x3e != 0) goto LAB_71018cbc84;
    }
    else {
      uVar8 = 0x3fffffffffffffff;
    }
    ppplVar14 = (long ***)(uVar8 * 4);
    if (ppplVar14 == (long ***)0x0) {
      ppplVar14 = (long ***)0x1;
    }
    puVar5 = (undefined4 *)
             FUN_710392e290(0x10,ppplVar14,pppplVar9,ppppbVar10,in_x4,in_x5,in_x6,in_x7);
    if (puVar5 == (undefined4 *)0x0) {
      if (DAT_7105332f00 != (long *)0x0) {
        local_2258 = local_2258 & 0xffffffff00000000;
        pppplVar9 = (long ****)&local_2240;
        local_2240 = ppplVar14;
        uVar13 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_2258);
        if (((uVar13 & 1) != 0) &&
           (puVar5 = (undefined4 *)
                     FUN_710392e290(0x10,ppplVar14,pppplVar9,ppppbVar10,in_x4,in_x5,in_x6,in_x7),
           puVar5 != (undefined4 *)0x0)) goto LAB_71018cb020;
      }
      puVar5 = (undefined4 *)0x0;
    }
LAB_71018cb020:
    puVar12 = puVar5 + 1;
    *puVar5 = 0;
    *puVar18 = puVar5;
    *plVar1 = (long)puVar12;
    *plVar23 = (long)(puVar5 + uVar8);
    if (puVar19 != (undefined4 *)0x0) {
      FUN_710392eb40((ulong)puVar19);
      puVar12 = (undefined4 *)*plVar1;
    }
  }
  else {
    *puVar19 = 0;
    puVar12 = (undefined4 *)(*plVar1 + 4);
    *plVar1 = (long)puVar12;
  }
  if (puVar12 < (undefined4 *)*plVar23) {
    *puVar12 = 1;
    puVar19 = (undefined4 *)(*plVar1 + 4);
    *plVar1 = (long)puVar19;
  }
  else {
    pvVar20 = (void *)*puVar18;
    pppplVar21 = (long ****)((long)puVar12 - (long)pvVar20);
    uVar8 = ((long)pppplVar21 >> 2) + 1;
    if (uVar8 >> 0x3e != 0) goto LAB_71018cbc7c;
    lVar17 = *plVar23 - (long)pvVar20;
    if ((ulong)(lVar17 >> 2) < 0x1fffffffffffffff) {
      uVar13 = lVar17 >> 1;
      if (uVar8 <= uVar13) {
        uVar8 = uVar13;
      }
      if (uVar8 != 0) {
        if (uVar8 >> 0x3e != 0) goto LAB_71018cbc84;
        goto LAB_71018cb0b8;
      }
LAB_71018cb118:
      pvVar6 = (void *)0x0;
    }
    else {
      uVar8 = 0x3fffffffffffffff;
LAB_71018cb0b8:
      ppplVar14 = (long ***)(uVar8 * 4);
      if (ppplVar14 == (long ***)0x0) {
        ppplVar14 = (long ***)0x1;
      }
      pvVar6 = (void *)FUN_710392e290(0x10,ppplVar14,pppplVar9,ppppbVar10,in_x4,in_x5,in_x6,in_x7);
      if (pvVar6 == (void *)0x0) {
        if (DAT_7105332f00 != (long *)0x0) {
          local_2258 = local_2258 & 0xffffffff00000000;
          pppplVar9 = (long ****)&local_2240;
          local_2240 = ppplVar14;
          uVar13 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_2258);
          if (((uVar13 & 1) != 0) &&
             (pvVar6 = (void *)FUN_710392e290(0x10,ppplVar14,pppplVar9,ppppbVar10,in_x4,in_x5,in_x6,
                                              in_x7), pvVar6 != (void *)0x0)) goto LAB_71018cb11c;
        }
        goto LAB_71018cb118;
      }
    }
LAB_71018cb11c:
    puVar5 = (undefined4 *)((long)pvVar6 + ((long)pppplVar21 >> 2) * 4);
    puVar19 = puVar5 + 1;
    *puVar5 = 1;
    if (0 < (long)pppplVar21) {
      memcpy(pvVar6,pvVar20,(size_t)pppplVar21);
      pppplVar9 = pppplVar21;
    }
    *puVar18 = pvVar6;
    *plVar1 = (long)puVar19;
    *plVar23 = (long)((long)pvVar6 + uVar8 * 4);
    if (pvVar20 != (void *)0x0) {
      FUN_710392eb40((ulong)pvVar20);
      puVar19 = (undefined4 *)*plVar1;
    }
  }
  if (puVar19 < (undefined4 *)*plVar23) {
    *puVar19 = 2;
    puVar19 = (undefined4 *)(*plVar1 + 4);
    *plVar1 = (long)puVar19;
  }
  else {
    pvVar20 = (void *)*puVar18;
    pppplVar21 = (long ****)((long)puVar19 - (long)pvVar20);
    uVar8 = ((long)pppplVar21 >> 2) + 1;
    if (uVar8 >> 0x3e != 0) goto LAB_71018cbc7c;
    lVar17 = *plVar23 - (long)pvVar20;
    if ((ulong)(lVar17 >> 2) < 0x1fffffffffffffff) {
      uVar13 = lVar17 >> 1;
      if (uVar8 <= uVar13) {
        uVar8 = uVar13;
      }
      if (uVar8 != 0) {
        if (uVar8 >> 0x3e != 0) goto LAB_71018cbc84;
        goto LAB_71018cb1d0;
      }
LAB_71018cb230:
      pvVar6 = (void *)0x0;
    }
    else {
      uVar8 = 0x3fffffffffffffff;
LAB_71018cb1d0:
      ppplVar14 = (long ***)(uVar8 * 4);
      if (ppplVar14 == (long ***)0x0) {
        ppplVar14 = (long ***)0x1;
      }
      pvVar6 = (void *)FUN_710392e290(0x10,ppplVar14,pppplVar9,ppppbVar10,in_x4,in_x5,in_x6,in_x7);
      if (pvVar6 == (void *)0x0) {
        if (DAT_7105332f00 != (long *)0x0) {
          local_2258 = local_2258 & 0xffffffff00000000;
          pppplVar9 = (long ****)&local_2240;
          local_2240 = ppplVar14;
          uVar13 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_2258);
          if (((uVar13 & 1) != 0) &&
             (pvVar6 = (void *)FUN_710392e290(0x10,ppplVar14,pppplVar9,ppppbVar10,in_x4,in_x5,in_x6,
                                              in_x7), pvVar6 != (void *)0x0)) goto LAB_71018cb234;
        }
        goto LAB_71018cb230;
      }
    }
LAB_71018cb234:
    puVar5 = (undefined4 *)((long)pvVar6 + ((long)pppplVar21 >> 2) * 4);
    puVar19 = puVar5 + 1;
    *puVar5 = 2;
    if (0 < (long)pppplVar21) {
      memcpy(pvVar6,pvVar20,(size_t)pppplVar21);
      pppplVar9 = pppplVar21;
    }
    *puVar18 = pvVar6;
    *plVar1 = (long)puVar19;
    *plVar23 = (long)((long)pvVar6 + uVar8 * 4);
    if (pvVar20 != (void *)0x0) {
      FUN_710392eb40((ulong)pvVar20);
      puVar19 = (undefined4 *)*plVar1;
    }
  }
  if (puVar19 < (undefined4 *)*plVar23) {
    *puVar19 = 3;
    puVar19 = (undefined4 *)(*plVar1 + 4);
    *plVar1 = (long)puVar19;
  }
  else {
    pvVar20 = (void *)*puVar18;
    pppplVar21 = (long ****)((long)puVar19 - (long)pvVar20);
    uVar8 = ((long)pppplVar21 >> 2) + 1;
    if (uVar8 >> 0x3e != 0) goto LAB_71018cbc7c;
    lVar17 = *plVar23 - (long)pvVar20;
    if ((ulong)(lVar17 >> 2) < 0x1fffffffffffffff) {
      uVar13 = lVar17 >> 1;
      if (uVar8 <= uVar13) {
        uVar8 = uVar13;
      }
      if (uVar8 != 0) {
        if (uVar8 >> 0x3e != 0) goto LAB_71018cbc84;
        goto LAB_71018cb2e8;
      }
LAB_71018cb348:
      pvVar6 = (void *)0x0;
    }
    else {
      uVar8 = 0x3fffffffffffffff;
LAB_71018cb2e8:
      ppplVar14 = (long ***)(uVar8 * 4);
      if (ppplVar14 == (long ***)0x0) {
        ppplVar14 = (long ***)0x1;
      }
      pvVar6 = (void *)FUN_710392e290(0x10,ppplVar14,pppplVar9,ppppbVar10,in_x4,in_x5,in_x6,in_x7);
      if (pvVar6 == (void *)0x0) {
        if (DAT_7105332f00 != (long *)0x0) {
          local_2258 = local_2258 & 0xffffffff00000000;
          pppplVar9 = (long ****)&local_2240;
          local_2240 = ppplVar14;
          uVar13 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_2258);
          if (((uVar13 & 1) != 0) &&
             (pvVar6 = (void *)FUN_710392e290(0x10,ppplVar14,pppplVar9,ppppbVar10,in_x4,in_x5,in_x6,
                                              in_x7), pvVar6 != (void *)0x0)) goto LAB_71018cb34c;
        }
        goto LAB_71018cb348;
      }
    }
LAB_71018cb34c:
    puVar5 = (undefined4 *)((long)pvVar6 + ((long)pppplVar21 >> 2) * 4);
    puVar19 = puVar5 + 1;
    *puVar5 = 3;
    if (0 < (long)pppplVar21) {
      memcpy(pvVar6,pvVar20,(size_t)pppplVar21);
      pppplVar9 = pppplVar21;
    }
    *puVar18 = pvVar6;
    *plVar1 = (long)puVar19;
    *plVar23 = (long)((long)pvVar6 + uVar8 * 4);
    if (pvVar20 != (void *)0x0) {
      FUN_710392eb40((ulong)pvVar20);
      puVar19 = (undefined4 *)*plVar1;
    }
  }
  if (puVar19 < (undefined4 *)*plVar23) {
    *puVar19 = 4;
    puVar19 = (undefined4 *)(*plVar1 + 4);
    *plVar1 = (long)puVar19;
  }
  else {
    pvVar20 = (void *)*puVar18;
    pppplVar21 = (long ****)((long)puVar19 - (long)pvVar20);
    uVar8 = ((long)pppplVar21 >> 2) + 1;
    if (uVar8 >> 0x3e != 0) goto LAB_71018cbc7c;
    lVar17 = *plVar23 - (long)pvVar20;
    if ((ulong)(lVar17 >> 2) < 0x1fffffffffffffff) {
      uVar13 = lVar17 >> 1;
      if (uVar8 <= uVar13) {
        uVar8 = uVar13;
      }
      if (uVar8 != 0) {
        if (uVar8 >> 0x3e != 0) goto LAB_71018cbc84;
        goto LAB_71018cb400;
      }
LAB_71018cb460:
      pvVar6 = (void *)0x0;
    }
    else {
      uVar8 = 0x3fffffffffffffff;
LAB_71018cb400:
      ppplVar14 = (long ***)(uVar8 * 4);
      if (ppplVar14 == (long ***)0x0) {
        ppplVar14 = (long ***)0x1;
      }
      pvVar6 = (void *)FUN_710392e290(0x10,ppplVar14,pppplVar9,ppppbVar10,in_x4,in_x5,in_x6,in_x7);
      if (pvVar6 == (void *)0x0) {
        if (DAT_7105332f00 != (long *)0x0) {
          local_2258 = local_2258 & 0xffffffff00000000;
          pppplVar9 = (long ****)&local_2240;
          local_2240 = ppplVar14;
          uVar13 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_2258);
          if (((uVar13 & 1) != 0) &&
             (pvVar6 = (void *)FUN_710392e290(0x10,ppplVar14,pppplVar9,ppppbVar10,in_x4,in_x5,in_x6,
                                              in_x7), pvVar6 != (void *)0x0)) goto LAB_71018cb464;
        }
        goto LAB_71018cb460;
      }
    }
LAB_71018cb464:
    puVar5 = (undefined4 *)((long)pvVar6 + ((long)pppplVar21 >> 2) * 4);
    puVar19 = puVar5 + 1;
    *puVar5 = 4;
    if (0 < (long)pppplVar21) {
      memcpy(pvVar6,pvVar20,(size_t)pppplVar21);
      pppplVar9 = pppplVar21;
    }
    *puVar18 = pvVar6;
    *plVar1 = (long)puVar19;
    *plVar23 = (long)((long)pvVar6 + uVar8 * 4);
    if (pvVar20 != (void *)0x0) {
      FUN_710392eb40((ulong)pvVar20);
      puVar19 = (undefined4 *)*plVar1;
    }
  }
  if (puVar19 < (undefined4 *)*plVar23) {
    *puVar19 = 5;
    puVar19 = (undefined4 *)(*plVar1 + 4);
    *plVar1 = (long)puVar19;
  }
  else {
    pvVar20 = (void *)*puVar18;
    pppplVar21 = (long ****)((long)puVar19 - (long)pvVar20);
    uVar8 = ((long)pppplVar21 >> 2) + 1;
    if (uVar8 >> 0x3e != 0) goto LAB_71018cbc7c;
    lVar17 = *plVar23 - (long)pvVar20;
    if ((ulong)(lVar17 >> 2) < 0x1fffffffffffffff) {
      uVar13 = lVar17 >> 1;
      if (uVar8 <= uVar13) {
        uVar8 = uVar13;
      }
      if (uVar8 != 0) {
        if (uVar8 >> 0x3e != 0) goto LAB_71018cbc84;
        goto LAB_71018cb518;
      }
LAB_71018cb578:
      pvVar6 = (void *)0x0;
    }
    else {
      uVar8 = 0x3fffffffffffffff;
LAB_71018cb518:
      ppplVar14 = (long ***)(uVar8 * 4);
      if (ppplVar14 == (long ***)0x0) {
        ppplVar14 = (long ***)0x1;
      }
      pvVar6 = (void *)FUN_710392e290(0x10,ppplVar14,pppplVar9,ppppbVar10,in_x4,in_x5,in_x6,in_x7);
      if (pvVar6 == (void *)0x0) {
        if (DAT_7105332f00 != (long *)0x0) {
          local_2258 = local_2258 & 0xffffffff00000000;
          pppplVar9 = (long ****)&local_2240;
          local_2240 = ppplVar14;
          uVar13 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_2258);
          if (((uVar13 & 1) != 0) &&
             (pvVar6 = (void *)FUN_710392e290(0x10,ppplVar14,pppplVar9,ppppbVar10,in_x4,in_x5,in_x6,
                                              in_x7), pvVar6 != (void *)0x0)) goto LAB_71018cb57c;
        }
        goto LAB_71018cb578;
      }
    }
LAB_71018cb57c:
    puVar5 = (undefined4 *)((long)pvVar6 + ((long)pppplVar21 >> 2) * 4);
    puVar19 = puVar5 + 1;
    *puVar5 = 5;
    if (0 < (long)pppplVar21) {
      memcpy(pvVar6,pvVar20,(size_t)pppplVar21);
      pppplVar9 = pppplVar21;
    }
    *puVar18 = pvVar6;
    *plVar1 = (long)puVar19;
    *plVar23 = (long)((long)pvVar6 + uVar8 * 4);
    if (pvVar20 != (void *)0x0) {
      FUN_710392eb40((ulong)pvVar20);
      puVar19 = (undefined4 *)*plVar1;
    }
  }
  if (puVar19 < (undefined4 *)*plVar23) {
    *puVar19 = 6;
    puVar19 = (undefined4 *)(*plVar1 + 4);
    *plVar1 = (long)puVar19;
  }
  else {
    pvVar20 = (void *)*puVar18;
    pppplVar21 = (long ****)((long)puVar19 - (long)pvVar20);
    uVar8 = ((long)pppplVar21 >> 2) + 1;
    if (uVar8 >> 0x3e != 0) goto LAB_71018cbc7c;
    lVar17 = *plVar23 - (long)pvVar20;
    if ((ulong)(lVar17 >> 2) < 0x1fffffffffffffff) {
      uVar13 = lVar17 >> 1;
      if (uVar8 <= uVar13) {
        uVar8 = uVar13;
      }
      if (uVar8 != 0) {
        if (uVar8 >> 0x3e != 0) goto LAB_71018cbc84;
        goto LAB_71018cb630;
      }
LAB_71018cb690:
      pvVar6 = (void *)0x0;
    }
    else {
      uVar8 = 0x3fffffffffffffff;
LAB_71018cb630:
      ppplVar14 = (long ***)(uVar8 * 4);
      if (ppplVar14 == (long ***)0x0) {
        ppplVar14 = (long ***)0x1;
      }
      pvVar6 = (void *)FUN_710392e290(0x10,ppplVar14,pppplVar9,ppppbVar10,in_x4,in_x5,in_x6,in_x7);
      if (pvVar6 == (void *)0x0) {
        if (DAT_7105332f00 != (long *)0x0) {
          local_2258 = local_2258 & 0xffffffff00000000;
          pppplVar9 = (long ****)&local_2240;
          local_2240 = ppplVar14;
          uVar13 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_2258);
          if (((uVar13 & 1) != 0) &&
             (pvVar6 = (void *)FUN_710392e290(0x10,ppplVar14,pppplVar9,ppppbVar10,in_x4,in_x5,in_x6,
                                              in_x7), pvVar6 != (void *)0x0)) goto LAB_71018cb694;
        }
        goto LAB_71018cb690;
      }
    }
LAB_71018cb694:
    puVar5 = (undefined4 *)((long)pvVar6 + ((long)pppplVar21 >> 2) * 4);
    puVar19 = puVar5 + 1;
    *puVar5 = 6;
    if (0 < (long)pppplVar21) {
      memcpy(pvVar6,pvVar20,(size_t)pppplVar21);
      pppplVar9 = pppplVar21;
    }
    *puVar18 = pvVar6;
    *plVar1 = (long)puVar19;
    *plVar23 = (long)((long)pvVar6 + uVar8 * 4);
    if (pvVar20 != (void *)0x0) {
      FUN_710392eb40((ulong)pvVar20);
      puVar19 = (undefined4 *)*plVar1;
    }
  }
  if (puVar19 < (undefined4 *)*plVar23) {
    *puVar19 = 7;
    puVar19 = (undefined4 *)(*plVar1 + 4);
    *plVar1 = (long)puVar19;
  }
  else {
    pvVar20 = (void *)*puVar18;
    pppplVar21 = (long ****)((long)puVar19 - (long)pvVar20);
    uVar8 = ((long)pppplVar21 >> 2) + 1;
    if (uVar8 >> 0x3e != 0) goto LAB_71018cbc7c;
    lVar17 = *plVar23 - (long)pvVar20;
    if ((ulong)(lVar17 >> 2) < 0x1fffffffffffffff) {
      uVar13 = lVar17 >> 1;
      if (uVar8 <= uVar13) {
        uVar8 = uVar13;
      }
      if (uVar8 != 0) {
        if (uVar8 >> 0x3e != 0) goto LAB_71018cbc84;
        goto LAB_71018cb748;
      }
LAB_71018cb7a8:
      pvVar6 = (void *)0x0;
    }
    else {
      uVar8 = 0x3fffffffffffffff;
LAB_71018cb748:
      ppplVar14 = (long ***)(uVar8 * 4);
      if (ppplVar14 == (long ***)0x0) {
        ppplVar14 = (long ***)0x1;
      }
      pvVar6 = (void *)FUN_710392e290(0x10,ppplVar14,pppplVar9,ppppbVar10,in_x4,in_x5,in_x6,in_x7);
      if (pvVar6 == (void *)0x0) {
        if (DAT_7105332f00 != (long *)0x0) {
          local_2258 = local_2258 & 0xffffffff00000000;
          pppplVar9 = (long ****)&local_2240;
          local_2240 = ppplVar14;
          uVar13 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_2258);
          if (((uVar13 & 1) != 0) &&
             (pvVar6 = (void *)FUN_710392e290(0x10,ppplVar14,pppplVar9,ppppbVar10,in_x4,in_x5,in_x6,
                                              in_x7), pvVar6 != (void *)0x0)) goto LAB_71018cb7ac;
        }
        goto LAB_71018cb7a8;
      }
    }
LAB_71018cb7ac:
    puVar5 = (undefined4 *)((long)pvVar6 + ((long)pppplVar21 >> 2) * 4);
    puVar19 = puVar5 + 1;
    *puVar5 = 7;
    if (0 < (long)pppplVar21) {
      memcpy(pvVar6,pvVar20,(size_t)pppplVar21);
      pppplVar9 = pppplVar21;
    }
    *puVar18 = pvVar6;
    *plVar1 = (long)puVar19;
    *plVar23 = (long)((long)pvVar6 + uVar8 * 4);
    if (pvVar20 != (void *)0x0) {
      FUN_710392eb40((ulong)pvVar20);
      puVar19 = (undefined4 *)*plVar1;
    }
  }
  if (puVar19 < (undefined4 *)*plVar23) {
    *puVar19 = 8;
    puVar19 = (undefined4 *)(*plVar1 + 4);
    *plVar1 = (long)puVar19;
  }
  else {
    pvVar20 = (void *)*puVar18;
    pppplVar21 = (long ****)((long)puVar19 - (long)pvVar20);
    uVar8 = ((long)pppplVar21 >> 2) + 1;
    if (uVar8 >> 0x3e != 0) goto LAB_71018cbc7c;
    lVar17 = *plVar23 - (long)pvVar20;
    if ((ulong)(lVar17 >> 2) < 0x1fffffffffffffff) {
      uVar13 = lVar17 >> 1;
      if (uVar8 <= uVar13) {
        uVar8 = uVar13;
      }
      if (uVar8 != 0) {
        if (uVar8 >> 0x3e != 0) goto LAB_71018cbc84;
        goto LAB_71018cb860;
      }
LAB_71018cb8c0:
      pvVar6 = (void *)0x0;
    }
    else {
      uVar8 = 0x3fffffffffffffff;
LAB_71018cb860:
      ppplVar14 = (long ***)(uVar8 * 4);
      if (ppplVar14 == (long ***)0x0) {
        ppplVar14 = (long ***)0x1;
      }
      pvVar6 = (void *)FUN_710392e290(0x10,ppplVar14,pppplVar9,ppppbVar10,in_x4,in_x5,in_x6,in_x7);
      if (pvVar6 == (void *)0x0) {
        if (DAT_7105332f00 != (long *)0x0) {
          local_2258 = local_2258 & 0xffffffff00000000;
          pppplVar9 = (long ****)&local_2240;
          local_2240 = ppplVar14;
          uVar13 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_2258);
          if (((uVar13 & 1) != 0) &&
             (pvVar6 = (void *)FUN_710392e290(0x10,ppplVar14,pppplVar9,ppppbVar10,in_x4,in_x5,in_x6,
                                              in_x7), pvVar6 != (void *)0x0)) goto LAB_71018cb8c4;
        }
        goto LAB_71018cb8c0;
      }
    }
LAB_71018cb8c4:
    puVar5 = (undefined4 *)((long)pvVar6 + ((long)pppplVar21 >> 2) * 4);
    puVar19 = puVar5 + 1;
    *puVar5 = 8;
    if (0 < (long)pppplVar21) {
      memcpy(pvVar6,pvVar20,(size_t)pppplVar21);
      pppplVar9 = pppplVar21;
    }
    *puVar18 = pvVar6;
    *plVar1 = (long)puVar19;
    *plVar23 = (long)((long)pvVar6 + uVar8 * 4);
    if (pvVar20 != (void *)0x0) {
      FUN_710392eb40((ulong)pvVar20);
      puVar19 = (undefined4 *)*plVar1;
    }
  }
  if (puVar19 < (undefined4 *)*plVar23) {
    *puVar19 = 9;
    puVar19 = (undefined4 *)(*plVar1 + 4);
    *plVar1 = (long)puVar19;
  }
  else {
    pvVar20 = (void *)*puVar18;
    pppplVar21 = (long ****)((long)puVar19 - (long)pvVar20);
    uVar8 = ((long)pppplVar21 >> 2) + 1;
    if (uVar8 >> 0x3e != 0) goto LAB_71018cbc7c;
    lVar17 = *plVar23 - (long)pvVar20;
    if ((ulong)(lVar17 >> 2) < 0x1fffffffffffffff) {
      uVar13 = lVar17 >> 1;
      if (uVar8 <= uVar13) {
        uVar8 = uVar13;
      }
      if (uVar8 != 0) {
        if (uVar8 >> 0x3e != 0) goto LAB_71018cbc84;
        goto LAB_71018cb978;
      }
LAB_71018cb9d8:
      pvVar6 = (void *)0x0;
    }
    else {
      uVar8 = 0x3fffffffffffffff;
LAB_71018cb978:
      ppplVar14 = (long ***)(uVar8 * 4);
      if (ppplVar14 == (long ***)0x0) {
        ppplVar14 = (long ***)0x1;
      }
      pvVar6 = (void *)FUN_710392e290(0x10,ppplVar14,pppplVar9,ppppbVar10,in_x4,in_x5,in_x6,in_x7);
      if (pvVar6 == (void *)0x0) {
        if (DAT_7105332f00 != (long *)0x0) {
          local_2258 = local_2258 & 0xffffffff00000000;
          pppplVar9 = (long ****)&local_2240;
          local_2240 = ppplVar14;
          uVar13 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_2258);
          if (((uVar13 & 1) != 0) &&
             (pvVar6 = (void *)FUN_710392e290(0x10,ppplVar14,pppplVar9,ppppbVar10,in_x4,in_x5,in_x6,
                                              in_x7), pvVar6 != (void *)0x0)) goto LAB_71018cb9dc;
        }
        goto LAB_71018cb9d8;
      }
    }
LAB_71018cb9dc:
    puVar5 = (undefined4 *)((long)pvVar6 + ((long)pppplVar21 >> 2) * 4);
    puVar19 = puVar5 + 1;
    *puVar5 = 9;
    if (0 < (long)pppplVar21) {
      memcpy(pvVar6,pvVar20,(size_t)pppplVar21);
      pppplVar9 = pppplVar21;
    }
    *puVar18 = pvVar6;
    *plVar1 = (long)puVar19;
    *plVar23 = (long)((long)pvVar6 + uVar8 * 4);
    if (pvVar20 != (void *)0x0) {
      FUN_710392eb40((ulong)pvVar20);
      puVar19 = (undefined4 *)*plVar1;
    }
  }
  if (puVar19 < (undefined4 *)*plVar23) {
    *puVar19 = 10;
    *plVar1 = *plVar1 + 4;
    puVar18 = *(undefined8 **)(lVar22 + 0x40);
  }
  else {
    pvVar20 = (void *)*puVar18;
    __n = (long)puVar19 - (long)pvVar20;
    uVar8 = ((long)__n >> 2) + 1;
    if (uVar8 >> 0x3e != 0) {
LAB_71018cbc7c:
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    lVar17 = *plVar23 - (long)pvVar20;
    if ((ulong)(lVar17 >> 2) < 0x1fffffffffffffff) {
      uVar13 = lVar17 >> 1;
      if (uVar8 <= uVar13) {
        uVar8 = uVar13;
      }
      if (uVar8 != 0) {
        if (uVar8 >> 0x3e != 0) goto LAB_71018cbc84;
        goto LAB_71018cba98;
      }
LAB_71018cbaf8:
      pvVar6 = (void *)0x0;
    }
    else {
      uVar8 = 0x3fffffffffffffff;
LAB_71018cba98:
      ppplVar14 = (long ***)(uVar8 * 4);
      if (ppplVar14 == (long ***)0x0) {
        ppplVar14 = (long ***)0x1;
      }
      pvVar6 = (void *)FUN_710392e290(0x10,ppplVar14,pppplVar9,ppppbVar10,in_x4,in_x5,in_x6,in_x7);
      if (pvVar6 == (void *)0x0) {
        if (DAT_7105332f00 != (long *)0x0) {
          local_2258 = local_2258 & 0xffffffff00000000;
          pppplVar9 = (long ****)&local_2240;
          local_2240 = ppplVar14;
          uVar13 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_2258);
          if (((uVar13 & 1) != 0) &&
             (pvVar6 = (void *)FUN_710392e290(0x10,ppplVar14,pppplVar9,ppppbVar10,in_x4,in_x5,in_x6,
                                              in_x7), pvVar6 != (void *)0x0)) goto LAB_71018cbafc;
        }
        goto LAB_71018cbaf8;
      }
    }
LAB_71018cbafc:
    puVar19 = (undefined4 *)((long)pvVar6 + ((long)__n >> 2) * 4);
    *puVar19 = 10;
    if (0 < (long)__n) {
      memcpy(pvVar6,pvVar20,__n);
    }
    *puVar18 = pvVar6;
    *plVar1 = (long)(puVar19 + 1);
    *plVar23 = (long)((long)pvVar6 + uVar8 * 4);
    if (pvVar20 != (void *)0x0) {
      FUN_710392eb40((ulong)pvVar20);
    }
    puVar18 = *(undefined8 **)(lVar22 + 0x40);
  }
  if (puVar18 != (undefined8 *)0x0) {
    puVar7 = (undefined8 *)0x0;
    if ((long *)*puVar18 != (long *)0x0) {
      FUN_7103375650((long *)*puVar18,"current_language",&DAT_71042b2a84);
      puVar7 = (undefined8 *)0x0;
      if ((long *)**(undefined8 **)(lVar22 + 0x40) != (long *)0x0) {
        FUN_7103375650((long *)**(undefined8 **)(lVar22 + 0x40),"LANGUAGE_NUM",&DAT_71042b2a84);
        puVar7 = (undefined8 *)**(undefined8 **)(lVar22 + 0x40);
      }
    }
    FUN_7103376980(puVar7);
  }
  lVar17 = DAT_710532f8d0;
  FUN_7103313c50(*(ulong **)(DAT_710532f8d0 + 8));
  lVar22 = *(long *)(lVar17 + 8);
  if (*(char *)(lVar22 + 0x22) != '\0') {
    FUN_71023eea60(0x3f800000,DAT_7105329f38,2,0);
    *(undefined1 *)(lVar22 + 0x22) = 0;
    lVar22 = *(long *)(lVar17 + 8);
  }
  if (*(char *)(lVar22 + 0x23) != '\0') {
    *(undefined1 *)(lVar22 + 0x23) = 0;
    FUN_71023eea60(0x3f800000,DAT_7105329f38,2,0);
  }
  if (*(uint *)(param_1 + 0xd4) < 0x13) {
    *(undefined4 *)(param_1 + (long)(int)*(uint *)(param_1 + 0xd4) * 4 + 0x88) = 1;
    return;
  }
LAB_71018cbc84:
                    /* WARNING: Subroutine does not return */
  abort();
}

