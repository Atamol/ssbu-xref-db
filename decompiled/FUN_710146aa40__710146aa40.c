// addr:      710146aa40
// offset:    0x146aa40
// name:      FUN_710146aa40
// mangled:   
// signature: undefined __cdecl FUN_710146aa40(long param_1)


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_710146aa40(long param_1)

{
  uint *puVar1;
  int iVar2;
  byte bVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  ulong uVar7;
  uint *puVar8;
  char *pcVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  byte *pbVar13;
  int iVar15;
  uint uVar16;
  ulong uVar17;
  void *__dest;
  uint local_1b0 [4];
  undefined1 *local_1a0;
  undefined1 *puStack_198;
  undefined1 *local_190;
  undefined1 *puStack_188;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined8 local_170;
  undefined8 uStack_168;
  uint local_160 [4];
  undefined1 *local_150;
  undefined1 *puStack_148;
  undefined1 *local_140;
  undefined1 *puStack_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  uint local_110 [4];
  undefined1 *local_100;
  undefined1 *puStack_f8;
  undefined1 *local_f0;
  undefined1 *puStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  long local_b8;
  char *pcStack_b0;
  long local_a8;
  char *pcStack_a0;
  long local_98;
  char *pcStack_90;
  uint local_88 [2];
  byte local_80 [64];
  byte *pbVar14;
  
  puVar1 = DAT_7105334948;
  __dest = *(void **)(param_1 + 0x10);
  uVar5 = *(uint *)((long)__dest + 0x140);
  if (uVar5 == 0) goto LAB_710146ace0;
  if (uVar5 >> 0x19 < 5) {
    uVar16 = uVar5 >> 0x18;
    uVar7 = (ulong)uVar16;
    puVar8 = DAT_7105334948 + uVar7 * 0x6c;
    if (puVar8 != (uint *)0x0 && *puVar8 == uVar5) {
      DAT_7105334948[uVar7 * 0x6c + 1] = 3;
      if (puVar1[uVar7 * 0x6c + 3] < 2) {
        puVar8 = puVar1 + uVar7 * 0x6c;
        *(undefined8 *)(puVar8 + 0x2a) = *(undefined8 *)(puVar1 + 0x45a);
        uVar10 = *(undefined8 *)(puVar1 + 0x45e);
        *(undefined8 *)(puVar8 + 0x32) = *(undefined8 *)(puVar1 + 0x462);
        *(undefined8 *)(puVar8 + 0x2e) = uVar10;
        uVar10 = *(undefined8 *)(puVar1 + 0x466);
        *(undefined8 *)(puVar8 + 0x3a) = *(undefined8 *)(puVar1 + 0x46a);
        *(undefined8 *)(puVar8 + 0x36) = uVar10;
        uVar10 = *(undefined8 *)(puVar1 + 0x46e);
        uVar5 = puVar1[0x474];
        *(undefined8 *)(puVar8 + 0x42) = *(undefined8 *)(puVar1 + 0x472);
        *(undefined8 *)(puVar8 + 0x3e) = uVar10;
        uVar10 = *(undefined8 *)(puVar1 + 0x458);
        *(undefined8 *)(puVar8 + 0x2c) = *(undefined8 *)(puVar1 + 0x45c);
        *(undefined8 *)(puVar8 + 0x28) = uVar10;
        uVar10 = *(undefined8 *)(puVar1 + 0x460);
        *(undefined8 *)(puVar8 + 0x34) = *(undefined8 *)(puVar1 + 0x464);
        *(undefined8 *)(puVar8 + 0x30) = uVar10;
        uVar10 = *(undefined8 *)(puVar1 + 0x468);
        *(undefined8 *)(puVar8 + 0x3c) = *(undefined8 *)(puVar1 + 0x46c);
        *(undefined8 *)(puVar8 + 0x38) = uVar10;
        uVar10 = *(undefined8 *)(puVar1 + 0x470);
      }
      else if (puVar1[uVar7 * 0x6c + 3] == 3) {
        if (uVar16 != puVar1[0x4d1]) {
LAB_710146acd8:
          *puVar8 = 0;
          goto LAB_710146acdc;
        }
        puVar8 = puVar1 + uVar7 * 0x6c;
        *(undefined8 *)(puVar8 + 0x2a) = *(undefined8 *)(puVar1 + 0x43a);
        uVar10 = *(undefined8 *)(puVar1 + 0x43e);
        *(undefined8 *)(puVar8 + 0x32) = *(undefined8 *)(puVar1 + 0x442);
        *(undefined8 *)(puVar8 + 0x2e) = uVar10;
        uVar10 = *(undefined8 *)(puVar1 + 0x446);
        *(undefined8 *)(puVar8 + 0x3a) = *(undefined8 *)(puVar1 + 0x44a);
        *(undefined8 *)(puVar8 + 0x36) = uVar10;
        uVar10 = *(undefined8 *)(puVar1 + 0x44e);
        uVar5 = puVar1[0x454];
        *(undefined8 *)(puVar8 + 0x42) = *(undefined8 *)(puVar1 + 0x452);
        *(undefined8 *)(puVar8 + 0x3e) = uVar10;
        uVar10 = *(undefined8 *)(puVar1 + 0x438);
        *(undefined8 *)(puVar8 + 0x2c) = *(undefined8 *)(puVar1 + 0x43c);
        *(undefined8 *)(puVar8 + 0x28) = uVar10;
        uVar10 = *(undefined8 *)(puVar1 + 0x440);
        *(undefined8 *)(puVar8 + 0x34) = *(undefined8 *)(puVar1 + 0x444);
        *(undefined8 *)(puVar8 + 0x30) = uVar10;
        uVar10 = *(undefined8 *)(puVar1 + 0x448);
        *(undefined8 *)(puVar8 + 0x3c) = *(undefined8 *)(puVar1 + 0x44c);
        *(undefined8 *)(puVar8 + 0x38) = uVar10;
        uVar10 = *(undefined8 *)(puVar1 + 0x450);
      }
      else {
        if (uVar16 != puVar1[0x4d3]) goto LAB_710146acd8;
        puVar8 = puVar1 + uVar7 * 0x6c;
        *(undefined8 *)(puVar8 + 0x2a) = *(undefined8 *)(puVar1 + 0x49a);
        uVar10 = *(undefined8 *)(puVar1 + 0x49e);
        *(undefined8 *)(puVar8 + 0x32) = *(undefined8 *)(puVar1 + 0x4a2);
        *(undefined8 *)(puVar8 + 0x2e) = uVar10;
        uVar10 = *(undefined8 *)(puVar1 + 0x4a6);
        *(undefined8 *)(puVar8 + 0x3a) = *(undefined8 *)(puVar1 + 0x4aa);
        *(undefined8 *)(puVar8 + 0x36) = uVar10;
        uVar10 = *(undefined8 *)(puVar1 + 0x4ae);
        uVar5 = puVar1[0x4b4];
        *(undefined8 *)(puVar8 + 0x42) = *(undefined8 *)(puVar1 + 0x4b2);
        *(undefined8 *)(puVar8 + 0x3e) = uVar10;
        uVar10 = *(undefined8 *)(puVar1 + 0x498);
        *(undefined8 *)(puVar8 + 0x2c) = *(undefined8 *)(puVar1 + 0x49c);
        *(undefined8 *)(puVar8 + 0x28) = uVar10;
        uVar10 = *(undefined8 *)(puVar1 + 0x4a0);
        *(undefined8 *)(puVar8 + 0x34) = *(undefined8 *)(puVar1 + 0x4a4);
        *(undefined8 *)(puVar8 + 0x30) = uVar10;
        uVar10 = *(undefined8 *)(puVar1 + 0x4a8);
        *(undefined8 *)(puVar8 + 0x3c) = *(undefined8 *)(puVar1 + 0x4ac);
        *(undefined8 *)(puVar8 + 0x38) = uVar10;
        uVar10 = *(undefined8 *)(puVar1 + 0x4b0);
      }
      puVar8[0x44] = uVar5;
      *(undefined8 *)(puVar8 + 0x40) = uVar10;
      *(undefined8 *)(puVar8 + 0x4a) = DAT_71052301b8;
      uVar10 = DAT_71052301c8;
      *(undefined8 *)(puVar8 + 0x52) = DAT_71052301d8;
      *(undefined8 *)(puVar8 + 0x4e) = uVar10;
      uVar10 = DAT_71052301e8;
      *(undefined8 *)(puVar8 + 0x5a) = _DAT_71052301f8;
      *(undefined8 *)(puVar8 + 0x56) = uVar10;
      uVar5 = DAT_7105230220;
      uVar10 = DAT_7105230208;
      *(undefined8 *)(puVar8 + 0x62) = DAT_7105230218;
      *(undefined8 *)(puVar8 + 0x5e) = uVar10;
      uVar10 = DAT_71052301b0;
      *(undefined8 *)(puVar8 + 0x4c) = DAT_71052301c0;
      *(undefined8 *)(puVar8 + 0x48) = uVar10;
      uVar10 = DAT_71052301d0;
      *(undefined8 *)(puVar8 + 0x54) = DAT_71052301e0;
      *(undefined8 *)(puVar8 + 0x50) = uVar10;
      uVar10 = DAT_71052301f0;
      *(undefined8 *)(puVar8 + 0x5c) = DAT_7105230200;
      *(undefined8 *)(puVar8 + 0x58) = uVar10;
      uVar10 = DAT_7105230210;
      puVar8[100] = uVar5;
      *(undefined8 *)(puVar8 + 0x60) = uVar10;
      (puVar1 + uVar7 * 0x6c + 4)[0] = 0;
      (puVar1 + uVar7 * 0x6c + 4)[1] = 0;
    }
  }
LAB_710146acdc:
  *(undefined4 *)((long)__dest + 0x140) = 0;
LAB_710146ace0:
  lVar12 = DAT_71052c3600;
  local_88[0] = 0;
  local_88[1] = 0;
  local_170 = 0;
  uStack_168 = 0;
  local_180 = 0;
  uStack_178 = 0;
  local_80[0] = 0;
  local_1b0[0] = 0;
  local_1b0[1] = 0;
  local_1a0 = &DAT_3f8000003f800000;
  puStack_198 = &DAT_3f8000003f800000;
  local_190 = &DAT_3f8000003f800000;
  puStack_188 = &DAT_3f8000003f800000;
  if (((DAT_7105333fc0 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_7105333fc0), iVar6 != 0)) {
    DAT_7105333f70 = 0;
    DAT_7105333f78 = 0;
    __cxa_guard_release(&DAT_7105333fc0);
  }
  local_1a0 = (undefined1 *)DAT_7105333f70;
  puStack_198 = (undefined1 *)DAT_7105333f78;
  if (((DAT_7105333fe0 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_7105333fe0), iVar6 != 0)) {
    DAT_7105333fb0 = &DAT_3f8000003f800000;
    DAT_7105333fb8 = &DAT_3f8000003f800000;
    __cxa_guard_release(&DAT_7105333fe0);
  }
  local_170 = 0;
  local_120 = 0;
  uStack_118 = 0;
  local_160[0] = 0;
  local_160[1] = 0;
  local_130 = 0;
  uStack_128 = 0;
  local_150 = &DAT_3f8000003f800000;
  puStack_148 = &DAT_3f8000003f800000;
  local_190 = DAT_7105333fb0;
  puStack_188 = DAT_7105333fb8;
  local_180 = 0x3f8000003f000000;
  uStack_178 = 0x3f800000;
  local_140 = &DAT_3f8000003f800000;
  puStack_138 = &DAT_3f8000003f800000;
  if (((DAT_7105333fc0 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_7105333fc0), iVar6 != 0)) {
    DAT_7105333f70 = 0;
    DAT_7105333f78 = 0;
    __cxa_guard_release(&DAT_7105333fc0);
  }
  local_150 = (undefined1 *)DAT_7105333f70;
  puStack_148 = (undefined1 *)DAT_7105333f78;
  if (((DAT_7105333fe0 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_7105333fe0), iVar6 != 0)) {
    DAT_7105333fb0 = &DAT_3f8000003f800000;
    DAT_7105333fb8 = &DAT_3f8000003f800000;
    __cxa_guard_release(&DAT_7105333fe0);
  }
  local_120 = 0;
  local_d0 = 0;
  uStack_c8 = 0;
  local_110[0] = 0;
  local_110[1] = 0;
  local_e0 = 0;
  uStack_d8 = 0;
  local_140 = DAT_7105333fb0;
  puStack_138 = DAT_7105333fb8;
  local_130 = 0x3f8000003f000000;
  uStack_128 = 0x3f800000;
  local_100 = &DAT_3f8000003f800000;
  puStack_f8 = &DAT_3f8000003f800000;
  local_f0 = &DAT_3f8000003f800000;
  puStack_e8 = &DAT_3f8000003f800000;
  if (((DAT_7105333fc0 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_7105333fc0), iVar6 != 0)) {
    DAT_7105333f70 = 0;
    DAT_7105333f78 = 0;
    __cxa_guard_release(&DAT_7105333fc0);
  }
  local_100 = (undefined1 *)DAT_7105333f70;
  puStack_f8 = (undefined1 *)DAT_7105333f78;
  if (((DAT_7105333fe0 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_7105333fe0), iVar6 != 0)) {
    DAT_7105333fb0 = &DAT_3f8000003f800000;
    DAT_7105333fb8 = &DAT_3f8000003f800000;
    __cxa_guard_release(&DAT_7105333fe0);
  }
  local_f0 = DAT_7105333fb0;
  puStack_e8 = DAT_7105333fb8;
  local_e0 = 0x3f8000003f000000;
  uStack_d8 = 0x3f800000;
  local_d0 = 0;
  FUN_710062dc20(local_88,"edge_start_screen%s");
  if (local_88[1] == 0) {
    uVar7 = 0;
  }
  else {
    uVar5 = 0xffffffff;
    pbVar14 = local_80;
    do {
      pbVar13 = pbVar14 + 1;
      bVar3 = *pbVar14;
      uVar16 = bVar3 + 0x20;
      if (0x19 < bVar3 - 0x41) {
        uVar16 = (uint)bVar3;
      }
      uVar5 = (&DAT_7104754084)[(uVar16 ^ uVar5) & 0xff] ^ uVar5 >> 8;
      pbVar14 = pbVar13;
    } while (pbVar13 < local_80 + local_88[1]);
    uVar7 = (ulong)~uVar5;
  }
  pcVar9 = *(char **)(*(long *)(lVar12 + 8) + 0x10);
  if ((*pcVar9 == '\f') && (iVar6 = *(int *)(pcVar9 + 1) + -1, 0 < *(int *)(pcVar9 + 1))) {
    uVar7 = uVar7 | ((long)(int)local_88[1] & 0xffU) << 0x20;
    lVar11 = *(long *)(*(long *)(lVar12 + 8) + 8);
    iVar15 = 0;
    do {
      iVar2 = iVar6 + iVar15;
      if (iVar2 < 0) {
        iVar2 = iVar2 + 1;
      }
      iVar2 = iVar2 >> 1;
      puVar1 = (uint *)(*(long *)(lVar11 + 0x28) + (long)*(int *)(pcVar9 + 5) + (long)iVar2 * 8);
      uVar17 = *(ulong *)(*(long *)(lVar11 + 0x20) + (ulong)*puVar1 * 8);
      if (uVar17 == uVar7) {
        uVar7 = (ulong)(int)puVar1[1];
        pcStack_90 = "";
        local_98 = 0;
        if ((uVar7 & 0x80000000) == 0) {
          pcStack_90 = pcVar9 + uVar7;
          local_98 = lVar11;
        }
        goto LAB_710146af2c;
      }
      iVar4 = iVar2 + -1;
      if (uVar17 <= uVar7) {
        iVar15 = iVar2 + 1;
        iVar4 = iVar6;
      }
      iVar6 = iVar4;
    } while (iVar15 <= iVar6);
    pcStack_90 = "";
    local_98 = 0;
  }
  else {
    pcStack_90 = "";
    local_98 = 0;
  }
LAB_710146af2c:
  FUN_710149ff90(local_1b0,&local_98);
  FUN_710062dc20(local_88,"edge_kime_screen%s");
  if (local_88[1] == 0) {
    uVar7 = 0;
  }
  else {
    uVar5 = 0xffffffff;
    pbVar14 = local_80;
    do {
      pbVar13 = pbVar14 + 1;
      bVar3 = *pbVar14;
      uVar16 = bVar3 + 0x20;
      if (0x19 < bVar3 - 0x41) {
        uVar16 = (uint)bVar3;
      }
      uVar5 = (&DAT_7104754084)[(uVar16 ^ uVar5) & 0xff] ^ uVar5 >> 8;
      pbVar14 = pbVar13;
    } while (pbVar13 < local_80 + local_88[1]);
    uVar7 = (ulong)~uVar5;
  }
  pcVar9 = *(char **)(*(long *)(lVar12 + 8) + 0x10);
  if ((*pcVar9 == '\f') && (iVar6 = *(int *)(pcVar9 + 1) + -1, 0 < *(int *)(pcVar9 + 1))) {
    uVar7 = uVar7 | ((long)(int)local_88[1] & 0xffU) << 0x20;
    lVar11 = *(long *)(*(long *)(lVar12 + 8) + 8);
    iVar15 = 0;
    do {
      iVar2 = iVar6 + iVar15;
      if (iVar2 < 0) {
        iVar2 = iVar2 + 1;
      }
      iVar2 = iVar2 >> 1;
      puVar1 = (uint *)(*(long *)(lVar11 + 0x28) + (long)*(int *)(pcVar9 + 5) + (long)iVar2 * 8);
      uVar17 = *(ulong *)(*(long *)(lVar11 + 0x20) + (ulong)*puVar1 * 8);
      if (uVar17 == uVar7) {
        uVar7 = (ulong)(int)puVar1[1];
        pcStack_a0 = "";
        local_a8 = 0;
        if ((uVar7 & 0x80000000) == 0) {
          pcStack_a0 = pcVar9 + uVar7;
          local_a8 = lVar11;
        }
        goto LAB_710146b03c;
      }
      iVar4 = iVar2 + -1;
      if (uVar17 <= uVar7) {
        iVar15 = iVar2 + 1;
        iVar4 = iVar6;
      }
      iVar6 = iVar4;
    } while (iVar15 <= iVar6);
    pcStack_a0 = "";
    local_a8 = 0;
  }
  else {
    pcStack_a0 = "";
    local_a8 = 0;
  }
LAB_710146b03c:
  FUN_710149ff90(local_160,&local_a8);
  FUN_710062dc20(local_88,"edge_end_screen%s");
  if (local_88[1] == 0) {
    uVar7 = 0;
  }
  else {
    uVar5 = 0xffffffff;
    pbVar14 = local_80;
    do {
      pbVar13 = pbVar14 + 1;
      bVar3 = *pbVar14;
      uVar16 = bVar3 + 0x20;
      if (0x19 < bVar3 - 0x41) {
        uVar16 = (uint)bVar3;
      }
      uVar5 = (&DAT_7104754084)[(uVar16 ^ uVar5) & 0xff] ^ uVar5 >> 8;
      pbVar14 = pbVar13;
    } while (pbVar13 < local_80 + local_88[1]);
    uVar7 = (ulong)~uVar5;
  }
  pcVar9 = *(char **)(*(long *)(lVar12 + 8) + 0x10);
  if ((*pcVar9 == '\f') && (iVar6 = *(int *)(pcVar9 + 1) + -1, 0 < *(int *)(pcVar9 + 1))) {
    uVar7 = uVar7 | ((long)(int)local_88[1] & 0xffU) << 0x20;
    lVar12 = *(long *)(*(long *)(lVar12 + 8) + 8);
    iVar15 = 0;
    do {
      iVar2 = iVar6 + iVar15;
      if (iVar2 < 0) {
        iVar2 = iVar2 + 1;
      }
      iVar2 = iVar2 >> 1;
      puVar1 = (uint *)(*(long *)(lVar12 + 0x28) + (long)*(int *)(pcVar9 + 5) + (long)iVar2 * 8);
      uVar17 = *(ulong *)(*(long *)(lVar12 + 0x20) + (ulong)*puVar1 * 8);
      if (uVar17 == uVar7) {
        uVar7 = (ulong)(int)puVar1[1];
        pcStack_b0 = "";
        local_b8 = 0;
        if ((uVar7 & 0x80000000) == 0) {
          pcStack_b0 = pcVar9 + uVar7;
          local_b8 = lVar12;
        }
        goto LAB_710146b14c;
      }
      iVar4 = iVar2 + -1;
      if (uVar17 <= uVar7) {
        iVar15 = iVar2 + 1;
        iVar4 = iVar6;
      }
      iVar6 = iVar4;
    } while (iVar15 <= iVar6);
    pcStack_b0 = "";
    local_b8 = 0;
  }
  else {
    pcStack_b0 = "";
    local_b8 = 0;
  }
LAB_710146b14c:
  FUN_710149ff90(local_110,&local_b8);
  memcpy(__dest,local_1b0,0xf0);
  *(undefined8 *)((long)__dest + 0x144) = 1;
  uVar5 = FUN_7103566b20(0.0,*(undefined4 *)((long)__dest + 0x120),
                         *(undefined4 *)((long)__dest + 0x124),*(undefined4 *)((long)__dest + 0x128)
                         ,*(undefined4 *)((long)__dest + 300),*(undefined4 *)((long)__dest + 0x130),
                         DAT_7105334948,3,0xff,(float *)((long)__dest + 0x100),
                         (undefined8 *)((long)__dest + 0x110),*(uint *)((long)__dest + 0x134),0);
  *(uint *)((long)__dest + 0x140) = uVar5;
  return;
}

