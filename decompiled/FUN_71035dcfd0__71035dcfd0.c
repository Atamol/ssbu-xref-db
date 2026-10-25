// addr:      71035dcfd0
// offset:    0x35dcfd0
// name:      FUN_71035dcfd0
// mangled:   
// signature: undefined __cdecl FUN_71035dcfd0(long * param_1, undefined8 param_2, long * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 * param_6, undefined8 * param_7, undefined8 * param_8)


void FUN_71035dcfd0(long *param_1,undefined8 param_2,long ****param_3,byte ****param_4,
                   long ****param_5,undefined8 *param_6,undefined8 *param_7,undefined8 *param_8)

{
  uint uVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  undefined4 uVar6;
  ulong uVar7;
  undefined8 *puVar8;
  long *plVar9;
  ulong uVar10;
  undefined8 *puVar11;
  long *****ppppplVar12;
  undefined8 *puVar13;
  long lVar14;
  ulong uVar15;
  void *pvVar16;
  undefined4 *puVar17;
  undefined8 *puVar18;
  long lVar19;
  undefined8 *puVar20;
  ulong uVar21;
  undefined8 uVar22;
  undefined8 *puVar23;
  undefined8 *puVar24;
  undefined8 uVar25;
  ulong uVar26;
  undefined8 uVar27;
  undefined8 *puVar28;
  undefined8 *puVar29;
  void *__dest;
  long ****pppplVar30;
  undefined8 *puVar31;
  long *plVar32;
  void *pvVar33;
  undefined8 *puVar34;
  long lVar35;
  void *__src;
  undefined8 *puVar36;
  undefined8 *puVar37;
  undefined8 *puVar38;
  undefined4 *puVar39;
  undefined8 *puVar40;
  undefined1 auStack_148 [8];
  long local_140;
  long *local_138;
  long local_130;
  void *local_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  ulong local_f0;
  undefined8 local_e8;
  void *local_e0;
  long ****local_d8;
  long *local_d0;
  undefined4 local_c8;
  undefined8 local_c0;
  undefined1 local_b8;
  undefined1 local_77;
  int local_70;
  undefined4 uStack_6c;
  
  uVar7 = (**(code **)(*param_1 + 0x4b8))();
  if ((uVar7 & 1) == 0) {
    return;
  }
  puVar8 = (undefined8 *)FUN_710392e290(0x10,0x78,param_3,param_4,param_5,param_6,param_7,param_8);
  if (puVar8 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_128 = (void *)((ulong)local_128 & 0xffffffff00000000);
      local_d8 = (long ****)&DAT_00000078;
      ppppplVar12 = &local_d8;
      uVar7 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_128);
      if (((uVar7 & 1) != 0) &&
         (puVar8 = (undefined8 *)
                   FUN_710392e290(0x10,0x78,(long ****)ppppplVar12,param_4,param_5,param_6,param_7,
                                  param_8), puVar8 != (undefined8 *)0x0)) goto LAB_71035dd060;
    }
    puVar8 = (undefined8 *)0x0;
  }
LAB_71035dd060:
  *puVar8 = &PTR_FUN_7105233338;
  puVar8[1] = 0xffffffff00000000;
  *(undefined4 *)(puVar8 + 2) = 0;
  puVar8[5] = 0;
  puVar8[6] = 0;
  puVar8[3] = &PTR_FUN_7105233358;
  puVar8[4] = 0;
  puVar8[0xd] = 0;
  puVar8[0xe] = 0;
  puVar8[0xb] = 0;
  puVar8[0xc] = 0;
  puVar8[9] = 0;
  puVar8[10] = 0;
  puVar8[7] = 0;
  puVar8[8] = 0;
  plVar9 = (long *)param_1[0x103];
  param_1[0x103] = (long)puVar8;
  if (plVar9 != (long *)0x0) {
    (**(code **)(*plVar9 + 8))();
    puVar8 = (undefined8 *)param_1[0x103];
  }
  puVar17 = (undefined4 *)puVar8[7];
  puVar39 = (undefined4 *)puVar8[8];
  lVar19 = (long)puVar39 - (long)puVar17 >> 2;
  uVar7 = lVar19 * 0xf83e0f83e0f83e1;
  if (uVar7 < 1000) {
    if ((ulong)((puVar8[9] - (long)puVar39 >> 2) * 0xf83e0f83e0f83e1) <
        lVar19 * -0xf83e0f83e0f83e1 + 1000U) {
      lVar14 = puVar8[9] - (long)puVar17 >> 2;
      if ((ulong)(lVar14 * 0xf83e0f83e0f83e1) < 0xf83e0f83e0f83e) {
        uVar15 = lVar14 * 0x1f07c1f07c1f07c2;
        if (uVar15 < 0x3e9) {
          uVar15 = 1000;
        }
        if (uVar15 != 0) goto LAB_71035dd1d8;
        pvVar16 = (void *)0x0;
      }
      else {
        uVar15 = 0x1f07c1f07c1f07c;
LAB_71035dd1d8:
        pppplVar30 = (long ****)(uVar15 * 0x84);
        iVar5 = FUN_710392e1f0(&local_128,0x10,pppplVar30,param_4,param_5,param_6,param_7,param_8);
        if (((iVar5 == 0xc) && (DAT_710593d2b0 != (long *)0x0)) &&
           (local_d8 = pppplVar30,
           uVar10 = (**(code **)(*DAT_710593d2b0 + 0x30))(DAT_710593d2b0,&local_d8),
           (uVar10 & 1) != 0)) {
          FUN_710392e1f0(&local_128,0x10,pppplVar30,param_4,param_5,param_6,param_7,param_8);
        }
        nu::VirtualAllocHook((ulong)pppplVar30,0x10,local_128);
        pvVar16 = local_128;
      }
      __dest = (void *)((long)pvVar16 + lVar19 * 4);
      lVar14 = uVar7 - 1000;
      lVar19 = (long)__dest + 0x40;
      do {
        *(undefined4 *)(lVar19 + 0x3c) = 0x3f800000;
        *(undefined4 *)(lVar19 + 0x40) = 0;
        *(undefined4 *)(lVar19 + -0x40) = 0x3f800000;
        lVar14 = lVar14 + 1;
        *(undefined8 *)(lVar19 + -0x34) = 0;
        *(undefined8 *)(lVar19 + -0x3c) = 0;
        *(undefined4 *)(lVar19 + -0x2c) = 0x3f800000;
        *(undefined4 *)(lVar19 + -0x18) = 0x3f800000;
        *(undefined8 *)(lVar19 + -0xc) = 0;
        *(undefined8 *)(lVar19 + -0x14) = 0;
        *(undefined1 **)(lVar19 + -4) = &DAT_3f8000003f800000;
        *(undefined8 *)(lVar19 + 0xc) = 0;
        *(undefined8 *)(lVar19 + 4) = 0;
        *(undefined4 *)(lVar19 + 0x14) = 0x3f800000;
        *(undefined4 *)(lVar19 + 0x28) = 0x3f800000;
        *(undefined8 *)(lVar19 + 0x34) = 0;
        *(undefined8 *)(lVar19 + 0x2c) = 0;
        *(undefined8 *)(lVar19 + -0x28) = 0;
        *(undefined8 *)(lVar19 + -0x20) = 0;
        *(undefined8 *)(lVar19 + 0x18) = 0;
        *(undefined8 *)(lVar19 + 0x20) = 0;
        lVar19 = lVar19 + 0x84;
      } while (lVar14 != 0);
      pvVar33 = (void *)puVar8[7];
      __src = (void *)puVar8[8];
      puVar39 = (undefined4 *)((long)pvVar16 + 0x203a0);
      if (__src != pvVar33) {
        do {
          __dest = (void *)((long)__dest + -0x84);
          __src = (void *)((long)__src + -0x84);
          memcpy(__dest,__src,0x84);
        } while (pvVar33 != __src);
        pvVar33 = (void *)puVar8[7];
      }
      puVar8[7] = __dest;
      puVar8[8] = puVar39;
      puVar8[9] = (void *)((long)pvVar16 + uVar15 * 0x84);
      if (pvVar33 != (void *)0x0) {
        nu::VirtualFreeHook(pvVar33);
        FUN_710392eb40((ulong)pvVar33);
        puVar39 = (undefined4 *)puVar8[8];
      }
    }
    else {
      lVar19 = uVar7 - 1000;
      do {
        puVar39[0x1f] = 0x3f800000;
        puVar39[0x20] = 0;
        *puVar39 = 0x3f800000;
        lVar19 = lVar19 + 1;
        *(undefined8 *)(puVar39 + 3) = 0;
        *(undefined8 *)(puVar39 + 1) = 0;
        puVar39[5] = 0x3f800000;
        puVar39[10] = 0x3f800000;
        *(undefined8 *)(puVar39 + 0xd) = 0;
        *(undefined8 *)(puVar39 + 0xb) = 0;
        *(undefined1 **)(puVar39 + 0xf) = &DAT_3f8000003f800000;
        *(undefined8 *)(puVar39 + 0x13) = 0;
        *(undefined8 *)(puVar39 + 0x11) = 0;
        puVar39[0x15] = 0x3f800000;
        puVar39[0x1a] = 0x3f800000;
        *(undefined8 *)(puVar39 + 0x1d) = 0;
        *(undefined8 *)(puVar39 + 0x1b) = 0;
        *(undefined8 *)(puVar39 + 6) = 0;
        *(undefined8 *)(puVar39 + 8) = 0;
        *(undefined8 *)(puVar39 + 0x16) = 0;
        *(undefined8 *)(puVar39 + 0x18) = 0;
        puVar39 = (undefined4 *)(puVar8[8] + 0x84);
        puVar8[8] = puVar39;
      } while (lVar19 != 0);
    }
    puVar17 = (undefined4 *)puVar8[7];
  }
  else if ((long)puVar39 - (long)puVar17 != 0x203a0) {
    puVar39 = puVar17 + 33000;
    puVar8[8] = puVar39;
  }
  if (0 < (long)puVar39 - (long)puVar17) {
    lVar19 = (ulong)((long)puVar39 - (long)puVar17) / 0x84 + 1;
    do {
      lVar19 = lVar19 + -1;
      *puVar17 = 0x3f800000;
      *(undefined8 *)(puVar17 + 3) = 0;
      *(undefined8 *)(puVar17 + 1) = 0;
      puVar17[5] = 0x3f800000;
      puVar17[10] = 0x3f800000;
      *(undefined8 *)(puVar17 + 0xd) = 0;
      *(undefined8 *)(puVar17 + 0xb) = 0;
      *(undefined1 **)(puVar17 + 0xf) = &DAT_3f8000003f800000;
      *(undefined8 *)(puVar17 + 0x13) = 0;
      *(undefined8 *)(puVar17 + 0x11) = 0;
      puVar17[0x15] = 0x3f800000;
      puVar17[0x1a] = 0x3f800000;
      *(undefined8 *)(puVar17 + 0x1d) = 0;
      *(undefined8 *)(puVar17 + 0x1b) = 0;
      puVar17[0x1f] = 0x3f800000;
      *(undefined1 *)(puVar17 + 0x20) = 0;
      *(undefined8 *)(puVar17 + 6) = 0;
      *(undefined8 *)(puVar17 + 8) = 0;
      *(undefined8 *)(puVar17 + 0x16) = 0;
      *(undefined8 *)(puVar17 + 0x18) = 0;
      puVar17 = puVar17 + 0x21;
    } while (1 < lVar19);
  }
  puVar17 = (undefined4 *)puVar8[10];
  puVar39 = (undefined4 *)puVar8[0xb];
  uVar7 = (long)puVar39 - (long)puVar17 >> 7;
  if (uVar7 < 1000) {
    if ((ulong)(puVar8[0xc] - (long)puVar39 >> 7) < 1000 - uVar7) {
      lVar19 = puVar8[0xc] - (long)puVar17;
      if ((ulong)(lVar19 >> 7) < 0xffffffffffffff) {
        uVar15 = lVar19 >> 6;
        if (uVar15 < 0x3e9) {
          uVar15 = 1000;
        }
        if (uVar15 != 0) goto LAB_71035dd48c;
        pvVar16 = (void *)0x0;
      }
      else {
        uVar15 = 0x1ffffffffffffff;
LAB_71035dd48c:
        pppplVar30 = (long ****)(uVar15 << 7);
        iVar5 = FUN_710392e1f0(&local_128,0x10,pppplVar30,param_4,param_5,param_6,param_7,param_8);
        if (((iVar5 == 0xc) && (DAT_710593d2b0 != (long *)0x0)) &&
           (local_d8 = pppplVar30,
           uVar10 = (**(code **)(*DAT_710593d2b0 + 0x30))(DAT_710593d2b0,&local_d8),
           (uVar10 & 1) != 0)) {
          FUN_710392e1f0(&local_128,0x10,pppplVar30,param_4,param_5,param_6,param_7,param_8);
        }
        nu::VirtualAllocHook((ulong)pppplVar30,0x10,local_128);
        pvVar16 = local_128;
      }
      puVar20 = (undefined8 *)((long)pvVar16 + uVar7 * 0x80);
      lVar19 = uVar7 - 1000;
      puVar18 = puVar20;
      do {
        *(undefined4 *)puVar18 = 0x3f800000;
        *(undefined8 *)((long)puVar18 + 0xc) = 0;
        lVar19 = lVar19 + 1;
        *(undefined8 *)((long)puVar18 + 4) = 0;
        *(undefined4 *)((long)puVar18 + 0x14) = 0x3f800000;
        *(undefined4 *)(puVar18 + 5) = 0x3f800000;
        *(undefined8 *)((long)puVar18 + 0x34) = 0;
        *(undefined8 *)((long)puVar18 + 0x2c) = 0;
        *(undefined1 **)((long)puVar18 + 0x3c) = &DAT_3f8000003f800000;
        *(undefined8 *)((long)puVar18 + 0x4c) = 0;
        *(undefined8 *)((long)puVar18 + 0x44) = 0;
        *(undefined4 *)((long)puVar18 + 0x54) = 0x3f800000;
        *(undefined4 *)(puVar18 + 0xd) = 0x3f800000;
        *(undefined8 *)((long)puVar18 + 0x74) = 0;
        *(undefined8 *)((long)puVar18 + 0x6c) = 0;
        *(undefined4 *)((long)puVar18 + 0x7c) = 0x3f800000;
        puVar18[3] = 0;
        puVar18[4] = 0;
        puVar18[0xb] = 0;
        puVar18[0xc] = 0;
        puVar18 = puVar18 + 0x10;
      } while (lVar19 != 0);
      puVar31 = (undefined8 *)puVar8[10];
      puVar18 = (undefined8 *)puVar8[0xb];
      puVar39 = (undefined4 *)((long)pvVar16 + 0x1f400);
      if (puVar18 != puVar31) {
        puVar24 = puVar18 + -0x10;
        uVar21 = (long)puVar24 - (long)puVar31;
        uVar26 = uVar21 >> 7;
        uVar1 = (int)uVar26 + 1;
        uVar10 = (ulong)uVar1 & 7;
        if ((uVar1 & 7) != 0) {
          lVar19 = -uVar10;
          do {
            uVar22 = *puVar24;
            uVar25 = puVar24[1];
            lVar19 = lVar19 + 1;
            uVar27 = puVar24[3];
            puVar20[-0xe] = puVar24[2];
            puVar20[-0xd] = uVar27;
            puVar20[-0x10] = uVar22;
            puVar20[-0xf] = uVar25;
            uVar22 = puVar24[4];
            uVar25 = puVar24[5];
            uVar27 = puVar24[7];
            puVar20[-10] = puVar24[6];
            puVar20[-9] = uVar27;
            puVar20[-0xc] = uVar22;
            puVar20[-0xb] = uVar25;
            uVar22 = puVar24[8];
            uVar25 = puVar24[9];
            uVar27 = puVar24[0xb];
            puVar20[-6] = puVar24[10];
            puVar20[-5] = uVar27;
            puVar20[-8] = uVar22;
            puVar20[-7] = uVar25;
            uVar22 = puVar24[0xc];
            uVar25 = puVar24[0xd];
            puVar11 = puVar24 + 0xe;
            param_4 = (byte ****)puVar24[0xf];
            puVar24 = puVar24 + -0x10;
            puVar20[-2] = *puVar11;
            puVar20[-1] = param_4;
            puVar20[-4] = uVar22;
            puVar20[-3] = uVar25;
            puVar20 = puVar20 + -0x10;
          } while (lVar19 != 0);
          puVar20 = (undefined8 *)((long)pvVar16 + (uVar7 - uVar10) * 0x80);
          puVar18 = puVar18 + uVar10 * -0x10;
        }
        if (0x37f < uVar21) {
          do {
            uVar22 = puVar18[-0x10];
            uVar27 = puVar18[-0xf];
            uVar25 = puVar18[-0xe];
            puVar20[-0xd] = puVar18[-0xd];
            puVar20[-0xe] = uVar25;
            puVar20[-0xf] = uVar27;
            puVar20[-0x10] = uVar22;
            uVar22 = puVar18[-0xc];
            uVar27 = puVar18[-0xb];
            uVar25 = puVar18[-10];
            puVar20[-9] = puVar18[-9];
            puVar20[-10] = uVar25;
            puVar20[-0xb] = uVar27;
            puVar20[-0xc] = uVar22;
            uVar22 = puVar18[-8];
            uVar27 = puVar18[-7];
            uVar25 = puVar18[-6];
            puVar20[-5] = puVar18[-5];
            puVar20[-6] = uVar25;
            puVar20[-7] = uVar27;
            puVar20[-8] = uVar22;
            uVar22 = puVar18[-4];
            uVar27 = puVar18[-3];
            uVar25 = puVar18[-2];
            puVar20[-1] = puVar18[-1];
            puVar20[-2] = uVar25;
            puVar20[-3] = uVar27;
            puVar20[-4] = uVar22;
            uVar22 = puVar18[-0x20];
            uVar27 = puVar18[-0x1f];
            puVar13 = puVar18 + -0x7f;
            uVar25 = puVar18[-0x1e];
            puVar20[-0x1d] = puVar18[-0x1d];
            puVar20[-0x1e] = uVar25;
            puVar20[-0x1f] = uVar27;
            puVar20[-0x20] = uVar22;
            uVar22 = puVar18[-0x1c];
            uVar27 = puVar18[-0x1b];
            param_5 = (long ****)(puVar18 + -0x7e);
            uVar25 = puVar18[-0x1a];
            puVar20[-0x19] = puVar18[-0x19];
            puVar20[-0x1a] = uVar25;
            puVar20[-0x1b] = uVar27;
            puVar20[-0x1c] = uVar22;
            uVar22 = puVar18[-0x18];
            uVar27 = puVar18[-0x17];
            param_6 = puVar18 + -0x7d;
            uVar25 = puVar18[-0x16];
            puVar20[-0x15] = puVar18[-0x15];
            puVar20[-0x16] = uVar25;
            puVar20[-0x17] = uVar27;
            puVar20[-0x18] = uVar22;
            uVar22 = puVar18[-0x14];
            uVar27 = puVar18[-0x13];
            param_7 = puVar18 + -0x7c;
            uVar25 = puVar18[-0x12];
            puVar20[-0x11] = puVar18[-0x11];
            puVar20[-0x12] = uVar25;
            puVar20[-0x13] = uVar27;
            puVar20[-0x14] = uVar22;
            uVar22 = puVar18[-0x30];
            uVar25 = puVar18[-0x2f];
            uVar27 = puVar18[-0x2e];
            puVar20[-0x2d] = puVar18[-0x2d];
            puVar20[-0x2e] = uVar27;
            puVar20[-0x2f] = uVar25;
            puVar20[-0x30] = uVar22;
            uVar22 = puVar18[-0x2c];
            uVar25 = puVar18[-0x2b];
            uVar27 = puVar18[-0x2a];
            puVar20[-0x29] = puVar18[-0x29];
            puVar20[-0x2a] = uVar27;
            puVar20[-0x2b] = uVar25;
            puVar20[-0x2c] = uVar22;
            uVar22 = puVar18[-0x28];
            uVar25 = puVar18[-0x27];
            uVar27 = puVar18[-0x26];
            puVar20[-0x25] = puVar18[-0x25];
            puVar20[-0x26] = uVar27;
            puVar20[-0x27] = uVar25;
            puVar20[-0x28] = uVar22;
            uVar22 = puVar18[-0x24];
            uVar25 = puVar18[-0x23];
            uVar27 = puVar18[-0x22];
            puVar20[-0x21] = puVar18[-0x21];
            puVar20[-0x22] = uVar27;
            puVar20[-0x23] = uVar25;
            puVar20[-0x24] = uVar22;
            uVar22 = puVar18[-0x40];
            uVar25 = puVar18[-0x3f];
            uVar27 = puVar18[-0x3e];
            puVar20[-0x3d] = puVar18[-0x3d];
            puVar20[-0x3e] = uVar27;
            puVar20[-0x3f] = uVar25;
            puVar20[-0x40] = uVar22;
            uVar22 = puVar18[-0x3c];
            uVar25 = puVar18[-0x3b];
            uVar27 = puVar18[-0x3a];
            puVar20[-0x39] = puVar18[-0x39];
            puVar20[-0x3a] = uVar27;
            puVar20[-0x3b] = uVar25;
            puVar20[-0x3c] = uVar22;
            uVar22 = puVar18[-0x38];
            uVar25 = puVar18[-0x37];
            uVar27 = puVar18[-0x36];
            puVar20[-0x35] = puVar18[-0x35];
            puVar20[-0x36] = uVar27;
            puVar20[-0x37] = uVar25;
            puVar20[-0x38] = uVar22;
            uVar22 = puVar18[-0x34];
            uVar25 = puVar18[-0x33];
            uVar27 = puVar18[-0x32];
            puVar20[-0x31] = puVar18[-0x31];
            puVar20[-0x32] = uVar27;
            puVar20[-0x33] = uVar25;
            puVar20[-0x34] = uVar22;
            uVar22 = puVar18[-0x50];
            uVar25 = puVar18[-0x4f];
            uVar27 = puVar18[-0x4d];
            param_8 = puVar18 + -0x77;
            puVar20[-0x4e] = puVar18[-0x4e];
            puVar20[-0x4d] = uVar27;
            puVar20[-0x50] = uVar22;
            puVar20[-0x4f] = uVar25;
            uVar22 = puVar18[-0x4c];
            uVar25 = puVar18[-0x4b];
            uVar27 = puVar18[-0x49];
            puVar20[-0x4a] = puVar18[-0x4a];
            puVar20[-0x49] = uVar27;
            puVar20[-0x4c] = uVar22;
            puVar20[-0x4b] = uVar25;
            uVar22 = puVar18[-0x48];
            uVar25 = puVar18[-0x47];
            uVar27 = puVar18[-0x45];
            puVar20[-0x46] = puVar18[-0x46];
            puVar20[-0x45] = uVar27;
            puVar20[-0x48] = uVar22;
            puVar20[-0x47] = uVar25;
            uVar22 = puVar18[-0x44];
            uVar25 = puVar18[-0x43];
            uVar27 = puVar18[-0x41];
            puVar20[-0x42] = puVar18[-0x42];
            puVar20[-0x41] = uVar27;
            puVar20[-0x44] = uVar22;
            puVar20[-0x43] = uVar25;
            uVar22 = puVar18[-0x60];
            uVar25 = puVar18[-0x5f];
            uVar27 = puVar18[-0x5d];
            puVar20[-0x5e] = puVar18[-0x5e];
            puVar20[-0x5d] = uVar27;
            puVar20[-0x60] = uVar22;
            puVar20[-0x5f] = uVar25;
            uVar22 = puVar18[-0x5c];
            uVar25 = puVar18[-0x5b];
            uVar27 = puVar18[-0x59];
            puVar20[-0x5a] = puVar18[-0x5a];
            puVar20[-0x59] = uVar27;
            puVar20[-0x5c] = uVar22;
            puVar20[-0x5b] = uVar25;
            uVar22 = puVar18[-0x58];
            uVar25 = puVar18[-0x57];
            uVar27 = puVar18[-0x55];
            puVar20[-0x56] = puVar18[-0x56];
            puVar20[-0x55] = uVar27;
            puVar20[-0x58] = uVar22;
            puVar20[-0x57] = uVar25;
            uVar22 = puVar18[-0x54];
            uVar25 = puVar18[-0x53];
            uVar27 = puVar18[-0x51];
            puVar20[-0x52] = puVar18[-0x52];
            puVar20[-0x51] = uVar27;
            puVar20[-0x54] = uVar22;
            puVar20[-0x53] = uVar25;
            uVar22 = puVar18[-0x70];
            uVar25 = puVar18[-0x6f];
            uVar27 = puVar18[-0x6d];
            puVar20[-0x6e] = puVar18[-0x6e];
            puVar20[-0x6d] = uVar27;
            puVar20[-0x70] = uVar22;
            puVar20[-0x6f] = uVar25;
            uVar22 = puVar18[-0x6c];
            uVar25 = puVar18[-0x6b];
            uVar27 = puVar18[-0x69];
            puVar20[-0x6a] = puVar18[-0x6a];
            puVar20[-0x69] = uVar27;
            puVar20[-0x6c] = uVar22;
            puVar20[-0x6b] = uVar25;
            uVar22 = puVar18[-0x67];
            uVar27 = puVar18[-0x68];
            uVar25 = puVar18[-0x65];
            puVar20[-0x66] = puVar18[-0x66];
            puVar20[-0x65] = uVar25;
            puVar23 = puVar18 + -0x7b;
            puVar20[-0x68] = uVar27;
            puVar20[-0x67] = uVar22;
            uVar25 = puVar18[-100];
            uVar27 = puVar18[-99];
            uVar22 = puVar18[-0x61];
            puVar28 = puVar18 + -0x7a;
            puVar29 = puVar18 + -0x79;
            puVar24 = puVar18 + -0x78;
            puVar34 = puVar18 + -0x76;
            puVar36 = puVar18 + -0x75;
            puVar37 = puVar18 + -0x74;
            puVar38 = puVar18 + -0x73;
            puVar40 = puVar18 + -0x72;
            puVar20[-0x62] = puVar18[-0x62];
            puVar20[-0x61] = uVar22;
            puVar11 = puVar18 + -0x71;
            puVar20[-100] = uVar25;
            puVar20[-99] = uVar27;
            puVar18 = puVar18 + -0x80;
            uVar22 = *puVar18;
            uVar25 = *puVar13;
            param_4 = (byte ****)*param_6;
            puVar20[-0x7e] = *param_5;
            puVar20[-0x7d] = param_4;
            puVar20[-0x80] = uVar22;
            puVar20[-0x7f] = uVar25;
            uVar25 = *param_7;
            uVar22 = *puVar23;
            uVar27 = *puVar29;
            puVar20[-0x7a] = *puVar28;
            puVar20[-0x79] = uVar27;
            puVar20[-0x7c] = uVar25;
            puVar20[-0x7b] = uVar22;
            uVar22 = *puVar24;
            uVar25 = *param_8;
            uVar27 = *puVar36;
            puVar20[-0x76] = *puVar34;
            puVar20[-0x75] = uVar27;
            puVar20[-0x78] = uVar22;
            puVar20[-0x77] = uVar25;
            uVar22 = *puVar37;
            uVar25 = *puVar38;
            uVar27 = *puVar11;
            puVar20[-0x72] = *puVar40;
            puVar20[-0x71] = uVar27;
            puVar20[-0x74] = uVar22;
            puVar20[-0x73] = uVar25;
            puVar20 = puVar20 + -0x80;
          } while (puVar31 != puVar18);
        }
        puVar31 = (undefined8 *)puVar8[10];
        puVar20 = (undefined8 *)((long)pvVar16 + (uVar7 + ~uVar26) * 0x80);
      }
      puVar8[10] = puVar20;
      puVar8[0xb] = puVar39;
      puVar8[0xc] = (void *)((long)pvVar16 + uVar15 * 0x80);
      if (puVar31 != (undefined8 *)0x0) {
        nu::VirtualFreeHook(puVar31);
        FUN_710392eb40((ulong)puVar31);
        puVar39 = (undefined4 *)puVar8[0xb];
      }
    }
    else {
      lVar19 = uVar7 - 1000;
      do {
        *puVar39 = 0x3f800000;
        *(undefined8 *)(puVar39 + 3) = 0;
        lVar19 = lVar19 + 1;
        *(undefined8 *)(puVar39 + 1) = 0;
        puVar39[5] = 0x3f800000;
        puVar39[10] = 0x3f800000;
        *(undefined8 *)(puVar39 + 0xd) = 0;
        *(undefined8 *)(puVar39 + 0xb) = 0;
        *(undefined1 **)(puVar39 + 0xf) = &DAT_3f8000003f800000;
        *(undefined8 *)(puVar39 + 0x13) = 0;
        *(undefined8 *)(puVar39 + 0x11) = 0;
        puVar39[0x15] = 0x3f800000;
        puVar39[0x1a] = 0x3f800000;
        *(undefined8 *)(puVar39 + 0x1d) = 0;
        *(undefined8 *)(puVar39 + 0x1b) = 0;
        puVar39[0x1f] = 0x3f800000;
        *(undefined8 *)(puVar39 + 6) = 0;
        *(undefined8 *)(puVar39 + 8) = 0;
        *(undefined8 *)(puVar39 + 0x16) = 0;
        *(undefined8 *)(puVar39 + 0x18) = 0;
        puVar39 = (undefined4 *)(puVar8[0xb] + 0x80);
        puVar8[0xb] = puVar39;
      } while (lVar19 != 0);
    }
    puVar17 = (undefined4 *)puVar8[10];
  }
  else if ((long)puVar39 - (long)puVar17 != 0x1f400) {
    puVar39 = puVar17 + 32000;
    puVar8[0xb] = puVar39;
  }
  if (0 < (long)puVar39 - (long)puVar17) {
    lVar19 = ((ulong)((long)puVar39 - (long)puVar17) >> 7) + 1;
    do {
      lVar19 = lVar19 + -1;
      *puVar17 = 0x3f800000;
      *(undefined8 *)(puVar17 + 3) = 0;
      *(undefined8 *)(puVar17 + 1) = 0;
      puVar17[5] = 0x3f800000;
      puVar17[10] = 0x3f800000;
      *(undefined8 *)(puVar17 + 0xd) = 0;
      *(undefined8 *)(puVar17 + 0xb) = 0;
      *(undefined1 **)(puVar17 + 0xf) = &DAT_3f8000003f800000;
      *(undefined8 *)(puVar17 + 0x13) = 0;
      *(undefined8 *)(puVar17 + 0x11) = 0;
      puVar17[0x15] = 0x3f800000;
      puVar17[0x1a] = 0x3f800000;
      *(undefined8 *)(puVar17 + 0x1d) = 0;
      *(undefined8 *)(puVar17 + 0x1b) = 0;
      puVar17[0x1f] = 0x3f800000;
      *(undefined8 *)(puVar17 + 6) = 0;
      *(undefined8 *)(puVar17 + 8) = 0;
      *(undefined8 *)(puVar17 + 0x16) = 0;
      *(undefined8 *)(puVar17 + 0x18) = 0;
      puVar17 = puVar17 + 0x20;
    } while (1 < lVar19);
  }
  *(undefined4 *)(puVar8 + 2) = 0x1f400;
  local_77 = 0;
  local_b8 = 0;
  local_d8 = (long ****)0x0;
  local_d0 = (long *)(ulong)*(uint *)(puVar8 + 2);
  local_c0 = 0x80;
  local_c8 = 2;
  iVar5 = FUN_710392e1f0(&local_70,0x10,(long ****)0xf20,param_4,param_5,param_6,param_7,param_8);
  if ((iVar5 == 0xc) && (DAT_710593d2b0 != (long *)0x0)) {
    local_128 = (void *)0xf20;
    uVar7 = (**(code **)(*DAT_710593d2b0 + 0x30))(DAT_710593d2b0,&local_128);
    if ((uVar7 & 1) != 0) {
      FUN_710392e1f0(&local_70,0x10,(long ****)0xf20,param_4,param_5,param_6,param_7,param_8);
    }
  }
  ppppplVar12 = (long *****)CONCAT44(uStack_6c,local_70);
  nu::VirtualAllocHook(0xf20,0x10,ppppplVar12);
  plVar9 = (long *)CONCAT44(uStack_6c,local_70);
  FUN_71037c3a70(plVar9);
  *(undefined4 *)(plVar9 + 2) = 1;
  *(undefined1 *)((long)plVar9 + 0x14) = 0;
  plVar9[0x1e3] = 0;
  *plVar9 = (long)&PTR_thunk_FUN_71037d6960_71052435b8;
  if (plVar9 == (long *)0x0) {
    puVar18 = (undefined8 *)0x0;
    uVar22 = 0;
  }
  else {
    puVar18 = (undefined8 *)plVar9[1];
    uVar22 = *puVar18;
  }
  plVar32 = (long *)puVar8[4];
  plVar2 = (long *)puVar8[5];
  puVar8[4] = plVar9;
  puVar8[5] = puVar18;
  lVar19 = puVar8[6];
  puVar8[6] = uVar22;
  if (((plVar2 != (long *)0x0) && (plVar32 != (long *)0x0)) && (*plVar2 == lVar19)) {
    (**(code **)(*plVar32 + 8))();
    plVar9 = (long *)puVar8[4];
  }
  (**(code **)(*plVar9 + 0x10))(&local_70,plVar9,&local_d8);
  if (-1 < local_70) {
    ppppplVar12 = (long *****)&DAT_0000000e;
    local_128 = (void *)CONCAT44(local_128._4_4_,0x131);
    local_120 = 0;
    local_e8 = 0;
    local_e0 = (void *)0x0;
    local_f8 = 0;
    local_f0 = 0;
    local_108 = 0;
    uStack_100 = 0;
    local_118 = 1000;
    uStack_110 = 0;
    FUN_71002c51f0(&local_f0,"NUD_DefaultSRV",0xe,param_4,param_5,param_6,param_7,param_8);
    uVar6 = (**(code **)(*(long *)puVar8[4] + 0x98))((long *)puVar8[4],&local_128);
    pvVar16 = local_e0;
    *(undefined4 *)((long)puVar8 + 0xc) = uVar6;
    if ((local_f0 & 1) != 0) {
      nu::VirtualFreeHook(local_e0);
      FUN_710392eb40((ulong)pvVar16);
    }
  }
  puVar8 = &DAT_7105337370;
  if (*(long *)(**(long **)param_1[0x90] + 0xf8) != 0) {
    puVar8 = (undefined8 *)(**(long **)param_1[0x90] + 0x78);
  }
  if (((long *)puVar8[2] != (long *)0x0) && (*(long *)puVar8[2] == puVar8[3])) {
    lVar14 = *(long *)(*(long *)(puVar8[1] + 0x28) + 0xd0);
    for (lVar19 = *(long *)(*(long *)(puVar8[1] + 0x28) + 200); lVar19 != lVar14;
        lVar19 = lVar19 + 0x20) {
      plVar9 = *(long **)(param_1[0x103] + 0x20);
      lVar35 = *(long *)(lVar19 + 8);
      (**(code **)(*plVar9 + 0x28))(auStack_148,plVar9,*(undefined4 *)(param_1[0x103] + 0xc));
      lVar35 = *(long *)(lVar35 + 0x388);
      if (lVar35 != 0) {
        if ((local_138 == (long *)0x0) || (*local_138 != local_130)) {
          *(undefined8 *)(lVar35 + 8) = 0;
LAB_71035ddddc:
          uVar22 = 0;
          *(undefined8 *)(lVar35 + 0x10) = 0;
        }
        else {
          *(long *)(lVar35 + 8) = local_140;
          if (local_140 == 0) goto LAB_71035ddddc;
          puVar8 = *(undefined8 **)(local_140 + 8);
          *(undefined8 **)(lVar35 + 0x10) = puVar8;
          uVar22 = *puVar8;
        }
        *(undefined8 *)(lVar35 + 0x18) = uVar22;
      }
      lVar35 = *(long *)(*(long *)(lVar19 + 8) + 0x388);
      if (lVar35 != 0) {
        *(undefined4 *)(lVar35 + 0x20) = 0;
      }
    }
  }
  if (param_1[0x88] == 0) {
    return;
  }
  if (*(char *)(param_1[0x88] + 0x38) != '\x19') {
    return;
  }
  lVar19 = param_1[0x103];
  plVar9 = (long *)FUN_710392e290(0x10,0x60,(long ****)ppppplVar12,param_4,param_5,param_6,param_7,
                                  param_8);
  if (plVar9 == (long *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_128 = (void *)((ulong)local_128 & 0xffffffff00000000);
      local_d8 = (long ****)&DAT_00000060;
      ppppplVar12 = &local_d8;
      uVar7 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_128);
      if (((uVar7 & 1) != 0) &&
         (plVar9 = (long *)FUN_710392e290(0x10,0x60,(long ****)ppppplVar12,param_4,param_5,param_6,
                                          param_7,param_8), plVar9 != (long *)0x0))
      goto LAB_71035dde78;
    }
    plVar9 = (long *)0x0;
  }
LAB_71035dde78:
  plVar32 = plVar9 + 1;
  *plVar32 = 0;
  *plVar9 = (long)&DAT_71052383d0;
  plVar9[2] = 0;
  plVar9[4] = 0;
  plVar9[10] = 0;
  plVar9[0xb] = 0;
  plVar9[5] = 0;
  plVar9[8] = 0;
  plVar9[9] = 0;
  plVar9[6] = 0;
  plVar9[7] = 0;
  if (plVar9 != (long *)0x0) {
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar32,0x10);
      if (bVar4) {
        *plVar32 = *plVar32 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  plVar32 = *(long **)(lVar19 + 0x70);
  *(long **)(lVar19 + 0x68) = plVar9 + 4;
  *(long **)(lVar19 + 0x70) = plVar9;
  if (plVar32 != (long *)0x0) {
    plVar2 = plVar32 + 1;
    do {
      lVar19 = *plVar2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *plVar2 = lVar19 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar19 == 0) {
      (**(code **)(*plVar32 + 0x10))(plVar32);
      std::__shared_weak_count::__release_weak();
    }
  }
  if (plVar9 != (long *)0x0) {
    plVar32 = plVar9 + 1;
    do {
      lVar19 = *plVar32;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar32,0x10);
      if (bVar4) {
        *plVar32 = lVar19 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar19 == 0) {
      (**(code **)(*plVar9 + 0x10))(plVar9);
      std::__shared_weak_count::__release_weak();
    }
  }
  lVar19 = DAT_7105338e40;
  local_d8 = *(long *****)(param_1[0x103] + 0x68);
  plVar9 = *(long **)(param_1[0x103] + 0x70);
  local_d0 = plVar9;
  if (plVar9 == (long *)0x0) {
    FUN_7103636bd0(DAT_7105338e40,(long *)&local_d8,(long ****)ppppplVar12,param_4,param_5,param_6,
                   param_7,param_8);
  }
  else {
    plVar32 = plVar9 + 1;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar32,0x10);
      if (bVar4) {
        *plVar32 = *plVar32 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    FUN_7103636bd0(lVar19,(long *)&local_d8,(long ****)ppppplVar12,param_4,param_5,param_6,param_7,
                   param_8);
    plVar32 = plVar9 + 1;
    do {
      lVar19 = *plVar32;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar32,0x10);
      if (bVar4) {
        *plVar32 = lVar19 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar19 == 0) {
      (**(code **)(*plVar9 + 0x10))(plVar9);
      std::__shared_weak_count::__release_weak();
    }
  }
  return;
}

