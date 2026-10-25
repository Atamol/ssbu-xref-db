// addr:      7101831c30
// offset:    0x1831c30
// name:      FUN_7101831c30
// mangled:   
// signature: undefined __cdecl FUN_7101831c30(long param_1, undefined8 param_2, undefined8 param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


/* WARNING: Type propagation algorithm not settling */

void FUN_7101831c30(long param_1,undefined8 param_2,undefined8 param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  int *piVar1;
  ushort uVar2;
  short sVar3;
  short sVar4;
  int iVar5;
  int iVar6;
  long *plVar7;
  undefined8 *puVar8;
  char *pcVar9;
  char cVar10;
  long lVar11;
  long lVar12;
  uint uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  long lVar16;
  uint uVar17;
  uint uVar18;
  ulong uVar19;
  uint uVar20;
  long lVar21;
  undefined8 uVar22;
  ushort *puVar23;
  long lVar24;
  long lVar25;
  ulong uVar26;
  long lVar27;
  undefined8 *puVar28;
  undefined1 local_880 [4];
  undefined8 local_87c;
  ushort local_874 [4];
  short local_86c;
  short local_86a;
  short local_868;
  short local_866;
  short local_864;
  short local_862;
  short local_860;
  undefined4 local_85c;
  undefined8 auStack_858 [52];
  undefined1 local_6b8;
  undefined8 local_6b4;
  undefined2 local_6ac;
  undefined4 local_694;
  undefined8 auStack_690 [52];
  undefined8 local_4f0;
  undefined8 local_4e8;
  undefined8 local_4e0;
  undefined2 local_4d8;
  undefined8 local_4d4;
  undefined2 local_4cc;
  undefined8 local_4c8;
  undefined2 local_4c0;
  undefined4 local_490;
  undefined1 uStack_48c;
  undefined4 local_488;
  undefined1 local_484;
  undefined1 *local_480;
  undefined1 *local_478;
  undefined2 local_470;
  undefined8 auStack_468 [52];
  undefined1 local_2c8;
  undefined8 local_2c0;
  undefined1 local_2b8;
  undefined8 local_2b0;
  undefined8 local_2a8;
  undefined8 local_2a0;
  undefined2 local_298;
  undefined8 local_294;
  undefined2 local_28c;
  undefined8 local_288;
  undefined2 local_280;
  undefined4 local_250;
  undefined1 local_24c;
  undefined4 local_248;
  undefined1 local_244;
  undefined1 *local_240;
  undefined1 *local_238;
  undefined2 local_230;
  undefined8 auStack_228 [52];
  undefined1 local_88;
  undefined8 local_80;
  undefined1 local_78;
  undefined4 local_70;
  
  if ((*(int *)(param_1 + 0xbc) == 0) && (*(int *)(param_1 + 0xd8) == 0x10)) {
    *(uint *)(*(long *)(DAT_710532f868 + 8) + 0xa8) =
         *(uint *)(*(long *)(DAT_710532f868 + 8) + 0xa8) | 1;
  }
  FUN_71019e6bb0();
  if (((DAT_71053144d8 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_71053144d8), iVar5 != 0)) {
    FUN_7101764000();
    FUN_71000001c0();
    __cxa_guard_release(&DAT_71053144d8);
    cVar10 = *(char *)(param_1 + 0x128);
    lVar11 = DAT_7105329060;
  }
  else {
    cVar10 = *(char *)(param_1 + 0x128);
    lVar11 = DAT_7105329060;
  }
  DAT_7105329060 = lVar11;
  if (cVar10 != '\0') {
    lVar11 = *(long *)(*(long *)(param_1 + 0xf8) + 0x80);
    piVar1 = (int *)(lVar11 + 0x124);
    if (DAT_710530d560 == *piVar1) {
      if (DAT_710530d564 != '\0') goto LAB_7101831d44;
      cVar10 = *(char *)(lVar11 + 0x12d);
    }
    else {
      DAT_710530d564 = '\0';
      lVar11 = *(long *)(*(long *)(param_1 + 0xf8) + 0x80);
      cVar10 = *(char *)(lVar11 + 0x12d);
      DAT_710530d560 = *piVar1;
    }
    if (cVar10 != '\0') {
      DAT_710530d564 = '\x01';
      lVar11 = *(long *)(*(long *)(DAT_71052c4c58 + 8) + 0x88);
      if (*(char *)(lVar11 + 0x26a62) == '\0') {
        *(ulong *)(lVar11 + 0x26a90) = *(ulong *)(lVar11 + 0x26a90) | 1;
      }
      *(undefined1 *)(*(long *)(*(long *)(param_1 + 0xf8) + 0x80) + 0x12d) = 0;
      lVar11 = *(long *)(*(long *)(param_1 + 0xf8) + 0x80);
    }
LAB_7101831d44:
    lVar25 = *(long *)(lVar11 + 0x198);
    if (lVar25 == *(long *)(lVar11 + 0x1a0)) {
      iVar5 = 0;
    }
    else {
      iVar5 = 0;
      do {
        lVar21 = *(long *)(*(long *)(*(long *)(lVar25 + 8) + 0x10) + 8);
        if (*(int *)(lVar21 + 0x484) == 0) {
          uVar13 = (uint)(*(int *)(lVar21 + 0x488) != -1);
        }
        else {
          uVar13 = 1;
        }
        lVar25 = lVar25 + 0x10;
        iVar5 = iVar5 + uVar13;
      } while (*(long *)(lVar11 + 0x1a0) != lVar25);
    }
    puVar8 = (undefined8 *)&DAT_710530a9f0;
    puVar28 = (undefined8 *)&DAT_710530b2b0;
    uVar13 = 3;
    if (DAT_710530d560 != 0) {
      uVar13 = 5;
    }
    lVar25 = 0;
    uVar26 = 0;
    while (*(long *)(lVar11 + 0x1b8) != *(long *)(lVar11 + 0x1b0)) {
      lVar21 = *(long *)(*(long *)(lVar11 + 0x1b0) + 8);
      lVar11 = *(long *)(lVar21 + 0x250);
      uVar19 = (*(long *)(lVar21 + 600) - lVar11 >> 3) * 0x7efdfbf7efdfbf7f;
      if (uVar19 < uVar26 || uVar19 - uVar26 == 0) goto LAB_7101832f90;
      lVar11 = lVar11 + lVar25;
      if (*(char *)(lVar11 + 0x3f4) != '\0') {
        if (4 < uVar26) goto LAB_7101832fdc;
        FUN_71016b6a10(puVar8,(undefined8 *)(lVar11 + 8));
        lVar11 = *(long *)(*(long *)(DAT_71052c4c58 + 8) + 0x88);
        if (*(char *)(lVar11 + 0x26a62) == '\0') {
          *(ulong *)(lVar11 + 0x26a90) = *(ulong *)(lVar11 + 0x26a90) | 0x1000L << (uVar26 & 0x3f);
        }
        lVar21 = *(long *)(*(long *)(param_1 + 0xf8) + 0x80);
        lVar11 = *(long *)(lVar21 + 0x1b0);
        if (*(long *)(lVar21 + 0x1b8) == lVar11) break;
        lVar21 = *(long *)(lVar11 + 8);
        lVar11 = *(long *)(lVar21 + 0x250);
        uVar19 = (*(long *)(lVar21 + 600) - lVar11 >> 3) * 0x7efdfbf7efdfbf7f;
        if (uVar19 < uVar26 || uVar19 - uVar26 == 0) goto LAB_7101832f90;
        lVar11 = lVar11 + lVar25;
        uVar14 = *(undefined8 *)(lVar11 + 0x1a8);
        uVar15 = *(undefined8 *)(lVar11 + 0x1b0);
        uVar22 = *(undefined8 *)(lVar11 + 0x1b8);
        *(undefined2 *)(puVar28 + 3) = *(undefined2 *)(lVar11 + 0x1c0);
        puVar28[1] = uVar15;
        puVar28[2] = uVar22;
        *puVar28 = uVar14;
        uVar14 = *(undefined8 *)(lVar11 + 0x1c4);
        *(undefined2 *)((long)puVar28 + 0x24) = *(undefined2 *)(lVar11 + 0x1cc);
        *(undefined8 *)((long)puVar28 + 0x1c) = uVar14;
        if (puVar28 != (undefined8 *)(lVar11 + 0x1a8)) {
          FUN_7101696040((uint *)(puVar28 + 5),(ushort *)(lVar11 + 0x1d8));
        }
        uVar14 = *(undefined8 *)(lVar11 + 0x208);
        *(undefined8 *)((long)puVar28 + 0x65) = *(undefined8 *)(lVar11 + 0x20d);
        puVar28[0xc] = uVar14;
        uVar14 = *(undefined8 *)(lVar11 + 0x218);
        uVar15 = *(undefined8 *)(lVar11 + 0x220);
        *(undefined2 *)(puVar28 + 0x10) = *(undefined2 *)(lVar11 + 0x228);
        puVar28[0xe] = uVar14;
        puVar28[0xf] = uVar15;
        FUN_71016b6a10(puVar28 + 0x11,(undefined8 *)(lVar11 + 0x230));
        uVar14 = *(undefined8 *)(lVar11 + 0x3d0);
        uVar15 = *(undefined8 *)(lVar11 + 0x3d8);
        *(undefined1 *)(puVar28 + 0x47) = *(undefined1 *)(lVar11 + 0x3e0);
        puVar28[0x46] = uVar15;
        puVar28[0x45] = uVar14;
        lVar21 = *(long *)(*(long *)(param_1 + 0xf8) + 0x80);
        lVar11 = *(long *)(lVar21 + 0x1b0);
        if (*(long *)(lVar21 + 0x1b8) == lVar11) break;
        lVar11 = *(long *)(lVar11 + 8);
        lVar21 = *(long *)(lVar11 + 0x250);
        uVar19 = (*(long *)(lVar11 + 600) - lVar21 >> 3) * 0x7efdfbf7efdfbf7f;
        if (uVar19 < uVar26 || uVar19 - uVar26 == 0) goto LAB_7101832f90;
        *(undefined1 *)(lVar21 + lVar25 + 0x3f4) = 0;
      }
      if ((ulong)uVar13 * 0x3f8 + -0x3f8 == lVar25) {
        if (*(int *)(*DAT_7105328e18 + 0x1d8) != DAT_710530b2b0) {
          *(int *)(*DAT_7105328e18 + 0x1d8) = DAT_710530b2b0;
        }
        puVar8 = (undefined8 *)&DAT_710530be18;
        lVar11 = 0;
        uVar26 = 0;
        puVar28 = (undefined8 *)&DAT_710530c6d8;
        goto LAB_7101831fdc;
      }
      uVar26 = uVar26 + 1;
      lVar25 = lVar25 + 0x3f8;
      puVar8 = puVar8 + 0x39;
      puVar28 = puVar28 + 0x48;
      lVar11 = *(long *)(*(long *)(param_1 + 0xf8) + 0x80);
    }
LAB_7101832f94:
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_out_of_range();
  }
  if (*(char *)(param_1 + 0x129) == '\0') {
    iVar5 = *(int *)(*(long *)(*(long *)(param_1 + 0xe8) + 0x80) + 0x160);
    if ((DAT_7105308768 != iVar5) &&
       (lVar11 = *(long *)(*(long *)(DAT_71052c4c58 + 8) + 0x88), DAT_7105308768 = iVar5,
       *(char *)(lVar11 + 0x26a62) == '\0')) {
      *(ulong *)(lVar11 + 0x26a90) = *(ulong *)(lVar11 + 0x26a90) | 1;
    }
    cVar10 = *(char *)(*(long *)(*(long *)(param_1 + 0xe8) + 0x80) + 0x169);
    if (((DAT_710530a9c0 != cVar10) && ((DAT_710530a9c0 != '\0') != (cVar10 != '\0'))) &&
       (lVar11 = *(long *)(*(long *)(DAT_71052c4c58 + 8) + 0x88), DAT_710530a9c0 = cVar10,
       *(char *)(lVar11 + 0x26a62) == '\0')) {
      *(ulong *)(lVar11 + 0x26a90) = *(ulong *)(lVar11 + 0x26a90) | 1;
    }
    iVar5 = *(int *)(*(long *)(*(long *)(param_1 + 0xe8) + 0x80) + 0x164);
    if (DAT_710530d7d0 != iVar5) {
      lVar11 = *(long *)(*(long *)(DAT_71052c4c58 + 8) + 0x88);
      DAT_710530d7d0 = iVar5;
      if (*(char *)(lVar11 + 0x26a62) == '\0') {
        *(ulong *)(lVar11 + 0x26a90) = *(ulong *)(lVar11 + 0x26a90) | 1;
      }
      if (((DAT_71053144d8 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_71053144d8), iVar5 != 0))
      {
        FUN_7101764000();
        FUN_71000001c0();
        __cxa_guard_release(&DAT_71053144d8);
      }
      if (((DAT_71053144d8 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_71053144d8), iVar5 != 0))
      {
        FUN_7101764000();
        FUN_71000001c0();
        __cxa_guard_release(&DAT_71053144d8);
      }
      if ((DAT_71053050f0 & 0x7fff0000) == 0x4020000) {
        if (DAT_710530d7d0 == 2) {
          DAT_71053050f0 = 0x4020300;
        }
        else if (DAT_710530d7d0 == 1) {
          DAT_71053050f0 = 0x4020200;
        }
        else if (DAT_710530d7d0 == 0) {
          DAT_71053050f0 = 0x4020100;
        }
      }
    }
    if ((*(char *)(param_1 + 0x12d) != '\0') &&
       (cVar10 = *(char *)(*(long *)(*(long *)(param_1 + 0xe8) + 0x80) + 0x16a),
       *(char *)(param_1 + 0x12e) != cVar10)) {
      *(char *)(param_1 + 0x12e) = cVar10;
      if (((DAT_71053144d8 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_71053144d8), iVar5 != 0))
      {
        FUN_7101764000();
        FUN_71000001c0();
        __cxa_guard_release(&DAT_71053144d8);
      }
      if (((DAT_71053050f0 != 0x7010600) &&
          (DAT_71053050f0 = 0x7010101, *(char *)(param_1 + 0x12d) != '\0')) &&
         (*(char *)(param_1 + 0x12e) != '\0')) {
        DAT_71053050f0 = 0x7010400;
      }
    }
    lVar25 = *(long *)(*(long *)(param_1 + 0xe8) + 0x80);
    lVar11 = *(long *)(lVar25 + 0x238);
    if (lVar11 == *(long *)(lVar25 + 0x240)) {
      iVar5 = 0;
    }
    else {
      iVar5 = 0;
      do {
        lVar21 = *(long *)(*(long *)(*(long *)(lVar11 + 8) + 0x10) + 8);
        if (*(int *)(lVar21 + 0x484) == 0) {
          uVar13 = (uint)(*(int *)(lVar21 + 0x488) != -1);
        }
        else {
          uVar13 = 1;
        }
        lVar11 = lVar11 + 0x10;
        iVar5 = iVar5 + uVar13;
      } while (*(long *)(lVar25 + 0x240) != lVar11);
    }
    uVar26 = (ulong)DAT_7105308760._4_4_;
    if (0 < (int)DAT_7105308760._4_4_) {
      lVar27 = 0x43618;
      lVar11 = 0x44430;
      lVar21 = 0x44458;
      lVar16 = 0x444b8;
      lVar24 = 8;
      for (uVar19 = 0; uVar19 < (ulong)(*(long *)(lVar25 + 600) - *(long *)(lVar25 + 0x250) >> 4);
          uVar19 = uVar19 + 1) {
        lVar25 = *(long *)(*(long *)(lVar25 + 0x250) + lVar24);
        if (*(char *)(lVar25 + 0x6ba) != '\0') {
          FUN_710179e640((uint)uVar19,(undefined1 *)(lVar25 + 0x1c4));
          if (7 < uVar19) goto LAB_7101832fdc;
          FUN_71016b6a10((undefined8 *)((long)&DAT_71052c5180 + lVar27),
                         (undefined8 *)(lVar25 + 0x1f0));
          lVar12 = *(long *)(*(long *)(DAT_71052c4c58 + 8) + 0x88);
          if (*(char *)(lVar12 + 0x26a62) == '\0') {
            *(ulong *)(lVar12 + 0x26a90) = *(ulong *)(lVar12 + 0x26a90) | 0x10L << (uVar19 & 0x3f);
          }
          uVar14 = *(undefined8 *)(lVar25 + 0x390);
          uVar15 = *(undefined8 *)(lVar25 + 0x398);
          uVar22 = *(undefined8 *)(lVar25 + 0x3a0);
          *(undefined2 *)((long)&DAT_71052c5194 + lVar11 + 4) = *(undefined2 *)(lVar25 + 0x3a8);
          *(undefined8 *)((long)&DAT_71052c5188 + lVar11) = uVar15;
          *(undefined8 *)((long)&DAT_71052c5190 + lVar11) = uVar22;
          *(undefined8 *)((long)&DAT_71052c5180 + lVar11) = uVar14;
          uVar14 = *(undefined8 *)(lVar25 + 0x3ac);
          *(undefined2 *)((long)&DAT_71052c51a4 + lVar11) = *(undefined2 *)(lVar25 + 0x3b4);
          *(undefined8 *)((long)&DAT_71052c519c + lVar11) = uVar14;
          if ((undefined8 *)((long)&DAT_71052c5180 + lVar11) != (undefined8 *)(lVar25 + 0x390)) {
            FUN_7101696040((uint *)((long)&DAT_71052c5180 + lVar21),(ushort *)(lVar25 + 0x3c0));
          }
          uVar14 = *(undefined8 *)(lVar25 + 0x3f0);
          *(undefined8 *)((long)&DAT_71052c51e0 + lVar11 + 5) = *(undefined8 *)(lVar25 + 0x3f5);
          *(undefined8 *)((long)&DAT_71052c51e0 + lVar11) = uVar14;
          uVar14 = *(undefined8 *)(lVar25 + 0x400);
          uVar15 = *(undefined8 *)(lVar25 + 0x408);
          *(undefined2 *)((long)&DAT_71052c5200 + lVar11) = *(undefined2 *)(lVar25 + 0x410);
          *(undefined8 *)((long)&DAT_71052c51f0 + lVar11) = uVar14;
          *(undefined8 *)((long)&DAT_71052c51f8 + lVar11) = uVar15;
          puVar8 = FUN_71016b6a10((undefined8 *)((long)&DAT_71052c5180 + lVar16),
                                  (undefined8 *)(lVar25 + 0x418));
          uVar14 = *(undefined8 *)(lVar25 + 0x5b8);
          uVar15 = *(undefined8 *)(lVar25 + 0x5c0);
          *(undefined1 *)((long)&DAT_71052c53b8 + lVar11) = *(undefined1 *)(lVar25 + 0x5c8);
          *(undefined8 *)((long)&DAT_71052c53b0 + lVar11) = uVar15;
          *(undefined8 *)((long)&DAT_71052c53a8 + lVar11) = uVar14;
          FUN_71016b6a10(puVar8,(undefined8 *)(lVar25 + 0x1f0));
          lVar25 = *(long *)(*(long *)(param_1 + 0xe8) + 0x80);
          lVar12 = *(long *)(lVar25 + 0x250);
          if ((ulong)(*(long *)(lVar25 + 600) - lVar12 >> 4) <= uVar19) break;
          *(undefined1 *)(*(long *)(lVar12 + lVar24) + 0x6ba) = 0;
        }
        if (uVar26 - 1 == uVar19) goto LAB_7101832c4c;
        lVar25 = *(long *)(*(long *)(param_1 + 0xe8) + 0x80);
        lVar24 = lVar24 + 0x10;
        lVar27 = lVar27 + 0x1c8;
        lVar16 = lVar16 + 0x240;
        lVar21 = lVar21 + 0x240;
        lVar11 = lVar11 + 0x240;
      }
LAB_7101832f90:
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_out_of_range();
    }
  }
  else {
    uVar13 = *(uint *)(*(long *)(lVar11 + 8) + 0x198);
    if (0 < (int)uVar13) {
      uVar26 = 0;
      do {
        lVar25 = *(long *)(*(long *)(*(long *)(param_1 + 0x100) + 0x80) + 0x250);
        if ((long)uVar26 < (long)*(int *)(lVar25 + 0xc)) {
          uVar19 = (*(long *)(lVar25 + 0xb0) - *(long *)(lVar25 + 0xa8) >> 4) * -0x1041041041041041;
          if (uVar19 < uVar26 || uVar19 - uVar26 == 0) goto LAB_7101832f90;
          if (*(char *)(*(long *)(lVar25 + 0xa8) + uVar26 * 0x3f0 + 0x3ec) != '\0') {
            local_880[0] = 0xff;
            local_87c = 0;
            local_874[0] = 0;
            local_85c = 1;
            FUN_71017abd00(auStack_858);
            local_6b8 = 0xff;
            local_6b4 = 0;
            local_6ac = 0;
            local_694 = 1;
            FUN_71017abd00(auStack_690);
            local_4f0 = 0xffffffff;
            local_4e8 = 0;
            local_4e0 = 0xffffffffffffffff;
            local_4d8 = 0;
            local_4d4 = 0xffffffffffffffff;
            local_4cc = 0xffff;
            local_4c8 = 0;
            local_4c0 = 0;
            local_490 = 0xffffffff;
            uStack_48c = 0;
            local_488 = 0;
            local_484 = 0;
            local_480 = &DAT_3f8000003f800000;
            local_478 = &DAT_3f8000003f800000;
            local_470 = 0;
            FUN_71017abd00(auStack_468);
            local_2c0 = 0xb95d0753f;
            local_2c8 = 0;
            local_2b8 = 0xff;
            local_2b0 = 0xffffffff;
            local_2a8 = 0;
            local_2a0 = 0xffffffffffffffff;
            local_298 = 0;
            local_294 = 0xffffffffffffffff;
            local_28c = 0xffff;
            local_288 = 0;
            local_280 = 0;
            local_250 = 0xffffffff;
            local_24c = 0;
            local_248 = 0;
            local_244 = 0;
            local_240 = &DAT_3f8000003f800000;
            local_238 = &DAT_3f8000003f800000;
            local_230 = 0;
            FUN_71017abd00(auStack_228);
            local_88 = 0;
            local_80 = 0xb95d0753f;
            local_78 = 0xff;
            local_70 = 1;
            lVar16 = *(long *)(param_1 + 0x100);
            lVar21 = *(long *)(*(long *)(lVar16 + 0x80) + 0x250);
            local_880[0] = *(undefined1 *)(lVar21 + 0x80);
            lVar25 = lVar21;
            if (local_880 != (undefined1 *)(lVar21 + 0x80)) {
              uVar2 = *(ushort *)(lVar21 + 0x8c);
              if (uVar2 == 0) {
                uVar17 = 0;
              }
              else {
                sVar3 = *(short *)(lVar21 + 0x8e);
                local_874[0] = uVar2;
                if (sVar3 == 0) {
                  uVar17 = 1;
                }
                else {
                  sVar4 = *(short *)(lVar21 + 0x90);
                  local_874[1] = sVar3;
                  if (sVar4 == 0) {
                    uVar17 = 2;
                  }
                  else {
                    sVar3 = *(short *)(lVar21 + 0x92);
                    local_874[2] = sVar4;
                    if (sVar3 == 0) {
                      uVar17 = 3;
                    }
                    else {
                      sVar4 = *(short *)(lVar21 + 0x94);
                      local_874[3] = sVar3;
                      if (sVar4 == 0) {
                        uVar17 = 4;
                      }
                      else {
                        sVar3 = *(short *)(lVar21 + 0x96);
                        local_86c = sVar4;
                        if (sVar3 == 0) {
                          uVar17 = 5;
                        }
                        else {
                          sVar4 = *(short *)(lVar21 + 0x98);
                          local_86a = sVar3;
                          if (sVar4 == 0) {
                            uVar17 = 6;
                          }
                          else {
                            sVar3 = *(short *)(lVar21 + 0x9a);
                            local_868 = sVar4;
                            if (sVar3 == 0) {
                              uVar17 = 7;
                            }
                            else {
                              sVar4 = *(short *)(lVar21 + 0x9c);
                              local_866 = sVar3;
                              if (sVar4 == 0) {
                                uVar17 = 8;
                              }
                              else {
                                sVar3 = *(short *)(lVar21 + 0x9e);
                                local_864 = sVar4;
                                if (sVar3 == 0) {
                                  uVar17 = 9;
                                }
                                else {
                                  local_862 = sVar3;
                                  if (*(short *)(lVar21 + 0xa0) == 0) {
                                    uVar17 = 10;
                                  }
                                  else {
                                    uVar17 = 0xb;
                                    local_860 = *(short *)(lVar21 + 0xa0);
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
              local_874[uVar17] = 0;
              uVar18 = (uint)local_874[0];
              uVar20 = 0x811c9dc5;
              if (local_874[0] != 0) {
                uVar20 = 0x811c9dc5;
                puVar23 = local_874;
                do {
                  puVar23 = puVar23 + 1;
                  uVar20 = uVar20 * 0x89 ^ uVar18;
                  uVar18 = (uint)*puVar23;
                } while (uVar18 != 0);
              }
              local_87c = CONCAT44(uVar17,uVar20);
              lVar25 = *(long *)(*(long *)(lVar16 + 0x80) + 0x250);
            }
            local_85c = *(undefined4 *)(lVar21 + 0xa4);
            if ((long)uVar26 < (long)*(int *)(lVar25 + 0xc)) {
              uVar19 = (*(long *)(lVar25 + 0xb0) - *(long *)(lVar25 + 0xa8) >> 4) *
                       -0x1041041041041041;
              if (uVar19 < uVar26 || uVar19 - uVar26 == 0) goto LAB_7101832f90;
              puVar8 = (undefined8 *)(*(long *)(lVar25 + 0xa8) + uVar26 * 0x3f0 + 8);
            }
            else {
              puVar8 = (undefined8 *)&DAT_7105324af0;
              if ((DAT_7105324ed0 & 1) == 0) {
                iVar5 = __cxa_guard_acquire(&DAT_7105324ed0);
                if (iVar5 == 0) {
                  puVar8 = (undefined8 *)&DAT_7105324af0;
                }
                else {
                  FUN_71017abd00((undefined8 *)&DAT_7105324af0);
                  __cxa_guard_release(&DAT_7105324ed0);
                  puVar8 = (undefined8 *)&DAT_7105324af0;
                }
              }
            }
            FUN_71016b6a10(auStack_858,puVar8);
            lVar25 = *(long *)(*(long *)(*(long *)(param_1 + 0x100) + 0x80) + 0x250);
            if ((long)uVar26 < (long)*(int *)(lVar25 + 0xc)) {
              uVar19 = (*(long *)(lVar25 + 0xb0) - *(long *)(lVar25 + 0xa8) >> 4) *
                       -0x1041041041041041;
              if (uVar19 < uVar26 || uVar19 - uVar26 == 0) goto LAB_7101832f90;
              lVar25 = *(long *)(lVar25 + 0xa8) + uVar26 * 0x3f0;
              local_4e0 = *(undefined8 *)(lVar25 + 0x1b8);
              local_4f0 = *(undefined8 *)(lVar25 + 0x1a8);
              local_4e8 = *(undefined8 *)(lVar25 + 0x1b0);
              local_4d8 = *(undefined2 *)(lVar25 + 0x1c0);
              local_4d4 = *(undefined8 *)(lVar25 + 0x1c4);
              local_4cc = *(undefined2 *)(lVar25 + 0x1cc);
              puVar8 = (undefined8 *)(lVar25 + 0x1a8);
              puVar28 = &local_4f0;
              if (&local_4f0 != puVar8) goto LAB_7101832b74;
            }
            else {
              if (((DAT_7105324ed8 & 1) == 0) &&
                 (iVar5 = __cxa_guard_acquire(&DAT_7105324ed8), iVar5 != 0)) {
                DAT_7105324c90 = 0xffffffff;
                DAT_7105324c98 = 0;
                DAT_7105324cf0 = 0xffffffff;
                DAT_7105324ca0 = 0xffffffffffffffff;
                DAT_7105324ca8 = 0;
                DAT_7105324cb4 = 0xffff;
                DAT_7105324cac = 0xffffffffffffffff;
                DAT_7105324cb8 = 0;
                DAT_7105324cc0 = 0;
                DAT_7105324cf4 = 0;
                DAT_7105324cf8 = 0;
                DAT_7105324cfc = 0;
                DAT_7105324d10 = 0;
                DAT_7105324d00 = &DAT_3f8000003f800000;
                DAT_7105324d08 = &DAT_3f8000003f800000;
                FUN_71017abd00((undefined8 *)&DAT_7105324d18);
                DAT_7105324eb8 = 0;
                DAT_7105324ec0 = 0xb95d0753f;
                DAT_7105324ec8 = 0xff;
                __cxa_guard_release(&DAT_7105324ed8);
              }
              puVar8 = &DAT_7105324c90;
              local_4e8 = DAT_7105324c98;
              local_4e0 = DAT_7105324ca0;
              local_4f0 = DAT_7105324c90;
              local_4d8 = DAT_7105324ca8;
              local_4cc = DAT_7105324cb4;
              local_4d4 = DAT_7105324cac;
LAB_7101832b74:
              FUN_7101696040((uint *)&local_4c8,(ushort *)(puVar8 + 6));
              puVar28 = puVar8;
            }
            local_480 = (undefined1 *)puVar28[0xe];
            local_478 = (undefined1 *)puVar28[0xf];
            local_470 = *(undefined2 *)(puVar28 + 0x10);
            FUN_71016b6a10(auStack_468,puVar28 + 0x11);
            local_2c0 = puVar28[0x46];
            local_2b8 = *(undefined1 *)(puVar28 + 0x47);
            local_2c8 = (undefined1)puVar28[0x45];
            local_70 = 1;
            FUN_7102355b10(*(uint **)(lVar11 + 8),local_880,(long ****)(uVar26 & 0xffffffff),param_4
                           ,param_5,param_6,param_7,param_8);
            lVar25 = *(long *)(*(long *)(*(long *)(param_1 + 0x100) + 0x80) + 0x250);
            if ((long)uVar26 < (long)*(int *)(lVar25 + 0xc)) {
              uVar19 = (*(long *)(lVar25 + 0xb0) - *(long *)(lVar25 + 0xa8) >> 4) *
                       -0x1041041041041041;
              if (uVar19 < uVar26 || uVar19 - uVar26 == 0) goto LAB_7101832f90;
              *(undefined1 *)(*(long *)(lVar25 + 0xa8) + uVar26 * 0x3f0 + 0x3ec) = 0;
            }
          }
        }
        uVar26 = uVar26 + 1;
      } while (uVar26 != uVar13);
    }
    iVar5 = 0;
  }
  goto LAB_7101832c4c;
  while( true ) {
    lVar21 = *(long *)(lVar25 + 0x18);
    lVar25 = *(long *)(lVar21 + 0x250);
    uVar19 = (*(long *)(lVar21 + 600) - lVar25 >> 3) * 0x7efdfbf7efdfbf7f;
    if (uVar19 < uVar26 || uVar19 - uVar26 == 0) goto LAB_7101832f90;
    lVar25 = lVar25 + lVar11;
    if (*(char *)(lVar25 + 0x3f4) != '\0') {
      if (4 < uVar26) goto LAB_7101832fdc;
      FUN_71016b6a10(puVar8,(undefined8 *)(lVar25 + 8));
      lVar25 = *(long *)(*(long *)(DAT_71052c4c58 + 8) + 0x88);
      if (*(char *)(lVar25 + 0x26a62) == '\0') {
        *(ulong *)(lVar25 + 0x26a90) = *(ulong *)(lVar25 + 0x26a90) | 0x20000L << (uVar26 & 0x3f);
      }
      lVar21 = *(long *)(*(long *)(param_1 + 0xf8) + 0x80);
      lVar25 = *(long *)(lVar21 + 0x1b0);
      if ((ulong)(*(long *)(lVar21 + 0x1b8) - lVar25 >> 4) < 2) goto LAB_7101832f94;
      lVar21 = *(long *)(lVar25 + 0x18);
      lVar25 = *(long *)(lVar21 + 0x250);
      uVar19 = (*(long *)(lVar21 + 600) - lVar25 >> 3) * 0x7efdfbf7efdfbf7f;
      if (uVar19 < uVar26 || uVar19 - uVar26 == 0) goto LAB_7101832f90;
      lVar25 = lVar25 + lVar11;
      uVar14 = *(undefined8 *)(lVar25 + 0x1a8);
      uVar15 = *(undefined8 *)(lVar25 + 0x1b0);
      uVar22 = *(undefined8 *)(lVar25 + 0x1b8);
      *(undefined2 *)(puVar28 + 3) = *(undefined2 *)(lVar25 + 0x1c0);
      puVar28[1] = uVar15;
      puVar28[2] = uVar22;
      *puVar28 = uVar14;
      uVar14 = *(undefined8 *)(lVar25 + 0x1c4);
      *(undefined2 *)((long)puVar28 + 0x24) = *(undefined2 *)(lVar25 + 0x1cc);
      *(undefined8 *)((long)puVar28 + 0x1c) = uVar14;
      if (puVar28 != (undefined8 *)(lVar25 + 0x1a8)) {
        FUN_7101696040((uint *)(puVar28 + 5),(ushort *)(lVar25 + 0x1d8));
      }
      uVar14 = *(undefined8 *)(lVar25 + 0x208);
      *(undefined8 *)((long)puVar28 + 0x65) = *(undefined8 *)(lVar25 + 0x20d);
      puVar28[0xc] = uVar14;
      uVar14 = *(undefined8 *)(lVar25 + 0x218);
      uVar15 = *(undefined8 *)(lVar25 + 0x220);
      *(undefined2 *)(puVar28 + 0x10) = *(undefined2 *)(lVar25 + 0x228);
      puVar28[0xe] = uVar14;
      puVar28[0xf] = uVar15;
      FUN_71016b6a10(puVar28 + 0x11,(undefined8 *)(lVar25 + 0x230));
      uVar14 = *(undefined8 *)(lVar25 + 0x3d0);
      uVar15 = *(undefined8 *)(lVar25 + 0x3d8);
      *(undefined1 *)(puVar28 + 0x47) = *(undefined1 *)(lVar25 + 0x3e0);
      puVar28[0x46] = uVar15;
      puVar28[0x45] = uVar14;
      lVar21 = *(long *)(*(long *)(param_1 + 0xf8) + 0x80);
      lVar25 = *(long *)(lVar21 + 0x1b0);
      if ((ulong)(*(long *)(lVar21 + 0x1b8) - lVar25 >> 4) < 2) goto LAB_7101832f94;
      lVar25 = *(long *)(lVar25 + 0x18);
      lVar21 = *(long *)(lVar25 + 0x250);
      uVar19 = (*(long *)(lVar25 + 600) - lVar21 >> 3) * 0x7efdfbf7efdfbf7f;
      if (uVar19 < uVar26 || uVar19 - uVar26 == 0) goto LAB_7101832f90;
      *(undefined1 *)(lVar21 + lVar11 + 0x3f4) = 0;
    }
    lVar11 = lVar11 + 0x3f8;
    uVar26 = uVar26 + 1;
    puVar8 = puVar8 + 0x39;
    puVar28 = puVar28 + 0x48;
    if ((ulong)uVar13 * 0x3f8 - lVar11 == 0) break;
LAB_7101831fdc:
    lVar21 = *(long *)(*(long *)(param_1 + 0xf8) + 0x80);
    lVar25 = *(long *)(lVar21 + 0x1b0);
    if ((ulong)(*(long *)(lVar21 + 0x1b8) - lVar25 >> 4) < 2) goto LAB_7101832f94;
  }
  if (*(int *)(*DAT_7105328e18 + 0x390) != DAT_710530c6d8) {
    *(int *)(*DAT_7105328e18 + 0x390) = DAT_710530c6d8;
  }
LAB_7101832c4c:
  plVar7 = *(long **)(*(long *)(DAT_710532f7d0 + 8) + 0x18);
  if ((plVar7 != (long *)0x0) && (uVar26 = (**(code **)(*plVar7 + 0x48))(), (uVar26 & 1) != 0)) {
    if (((DAT_71053144d8 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_71053144d8), iVar6 != 0)) {
      FUN_7101764000();
      FUN_71000001c0();
      __cxa_guard_release(&DAT_71053144d8);
    }
    iVar6 = 1;
    if (DAT_7105306978._2_1_ == '\x02') {
      iVar6 = 2;
    }
    if (((iVar6 < iVar5) &&
        (plVar7 = *(long **)(*(long *)(DAT_710532f7d0 + 8) + 0x18), plVar7 != (long *)0x0)) &&
       (uVar26 = (**(code **)(*plVar7 + 0x48))(plVar7), (uVar26 & 1) != 0)) {
      (**(code **)(*plVar7 + 0x30))(plVar7);
    }
  }
  if (((*(int *)(param_1 + 0xd8) == 5) && (DAT_710530e1ec == '\0')) && (DAT_710530e1e8 == 0)) {
    uVar13 = 2;
    if (DAT_7105308968 == 3) {
      uVar13 = 1;
    }
    uVar17 = (uint)(DAT_7105308968 != 3);
    if (DAT_71053087a0 != 3) {
      uVar17 = uVar13;
    }
    if (DAT_7105308b30 != 3) {
      uVar17 = uVar17 + 1;
    }
    if (DAT_7105308cf8 != 3) {
      uVar17 = uVar17 + 1;
    }
    if (DAT_7105308ec0 != 3) {
      uVar17 = uVar17 + 1;
    }
    if (DAT_7105309088 != 3) {
      uVar17 = uVar17 + 1;
    }
    if (DAT_7105309250 != 3) {
      uVar17 = uVar17 + 1;
    }
    if (DAT_7105309418 != 3) {
      uVar17 = uVar17 + 1;
    }
    if (DAT_710530d7e8 != uVar17) {
      if (7 < uVar17) {
        uVar17 = 8;
      }
      if (uVar17 < 2) {
        uVar17 = 1;
      }
      DAT_710530d7e4 = 0;
      if (uVar17 != 0) {
        DAT_710530d7e4 = DAT_710530d7dc / (int)uVar17;
      }
      DAT_710530d7e8 = uVar17;
      if (DAT_710530d7e0 <= DAT_710530d7e4) {
        DAT_710530d7e4 = DAT_710530d7e0;
      }
    }
  }
  if (*(char *)(param_1 + 0x128) == '\0') {
    if (*(char *)(param_1 + 0x129) != '\0') {
      lVar11 = *(long *)(*(long *)(param_1 + 0x100) + 0x80);
      if (*(int *)(lVar11 + 0xd8) != 0) {
        return;
      }
      if (*(int *)(lVar11 + 0xf0) == 0) {
        return;
      }
      goto LAB_7101832e90;
    }
    iVar5 = *(int *)(*(long *)(*(long *)(param_1 + 0xe8) + 0x80) + 0x138);
  }
  else {
    lVar11 = *(long *)(*(long *)(param_1 + 0xf8) + 0x80);
    uVar13 = *(int *)(lVar11 + 0x108) - 6;
    if (uVar13 < 3) {
      if (*(char *)(lVar11 + 0x31c) != *(char *)(param_1 + 0x131)) {
LAB_7101832dd4:
        if (uVar13 < 3) {
          cVar10 = *(char *)(lVar11 + 0x31c);
        }
        else {
          cVar10 = '\0';
        }
        *(char *)(param_1 + 0x131) = cVar10;
        if (*(long *)*DAT_7105328e18 != 0) {
          if (cVar10 == '\0') {
            pcVar9 = "ready_out";
          }
          else {
            pcVar9 = "ready_in";
          }
          FUN_7103778300(0x3f800000,
                         *(long *)(*(long *)**(undefined8 **)(*(long *)*DAT_7105328e18 + 0x80) +
                                  0x10),(long)pcVar9);
        }
      }
    }
    else if (*(char *)(param_1 + 0x131) != '\0') goto LAB_7101832dd4;
    iVar5 = *(int *)(*(long *)(*(long *)(param_1 + 0xf8) + 0x80) + 0x108);
  }
  if (iVar5 != 1) {
    return;
  }
LAB_7101832e90:
  if (*(uint *)(param_1 + 0xb4) < 0x13) {
    *(undefined4 *)(param_1 + (long)(int)*(uint *)(param_1 + 0xb4) * 4 + 0x68) = 3;
    return;
  }
LAB_7101832fdc:
                    /* WARNING: Subroutine does not return */
  abort();
}

