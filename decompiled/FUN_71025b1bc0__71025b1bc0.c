// addr:      71025b1bc0
// offset:    0x25b1bc0
// name:      FUN_71025b1bc0
// mangled:   
// signature: undefined __cdecl FUN_71025b1bc0(long param_1, long param_2, long * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_71025b1bc0(long param_1,long param_2,long ****param_3,byte ****param_4,long ****param_5,
                   undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 uVar1;
  byte bVar2;
  char cVar3;
  byte bVar4;
  int iVar5;
  uint *puVar6;
  uint *puVar7;
  undefined4 uVar8;
  int iVar9;
  char *pcVar10;
  long ****pppplVar11;
  uint uVar12;
  long lVar13;
  ulong uVar14;
  uint *puVar15;
  uint uVar16;
  uint uVar17;
  ulong uVar18;
  byte *pbVar19;
  ulong uVar20;
  uint uVar21;
  long lVar22;
  long lVar23;
  uint *puVar24;
  char *pcVar25;
  uint auStack_1b0 [2];
  char local_1a8 [64];
  undefined8 local_168;
  undefined8 local_160;
  undefined2 local_158;
  undefined6 uStack_156;
  undefined2 local_150;
  undefined8 local_14e;
  undefined4 local_146;
  undefined2 local_142;
  undefined8 local_140;
  undefined8 local_138;
  undefined2 local_130;
  undefined8 local_120;
  undefined8 local_118;
  undefined8 local_110;
  undefined2 local_108;
  undefined4 local_106;
  undefined1 local_102;
  char local_d8;
  byte bStack_d7;
  undefined6 uStack_d6;
  undefined8 local_d0;
  uint *local_c8;
  uint *local_c0;
  uint *puStack_b8;
  uint auStack_b0 [2];
  undefined1 auStack_a8 [72];
  
  local_c0 = (uint *)0x0;
  puStack_b8 = (uint *)0x0;
  local_c8 = (uint *)0x0;
  lVar13 = *(long *)(param_2 + 0x50);
  uVar18 = *(long *)(param_2 + 0x58) - lVar13 >> 5;
  uVar16 = (uint)uVar18;
  pppplVar11 = param_3;
  if (uVar16 != 0) {
    uVar21 = 0;
    do {
      if (uVar18 <= uVar21) {
                    /* WARNING: Subroutine does not return */
        std::__vector_base_common<true>::__throw_out_of_range();
      }
      if (*(char *)(lVar13 + (ulong)uVar21 * 0x20) == '\f') {
        iVar9 = 8;
        goto LAB_71025b1c64;
      }
      uVar21 = uVar21 + 1;
    } while (uVar21 < uVar16);
  }
  uVar16 = *(byte *)(param_2 + 0x32) - 1;
  if (uVar16 < 9) {
    iVar9 = (uVar16 & 0xff) + 1;
LAB_71025b1c64:
    local_160 = local_160 & 0xffffffffffffff00;
    local_168 = 0;
    local_118 = local_118 & 0xffffffffffffff00;
    local_120 = 0;
    local_d8 = '\0';
    bStack_d7 = 0;
    local_d0 = 0x71ffff0000000000;
    switch(iVar9) {
    case 1:
      local_160 = 0x726970735f756e6d;
      local_158 = 0x7469;
      uStack_156 = 0x6c6168635f73;
      local_150 = 0x656c;
      local_14e = 0x6472616f6265676e;
      local_146 = 0x6d69675f;
      local_142 = 0x696d;
      local_140 = 0x6f73696f705f6b63;
      local_138 = 0x726f6f6c665f6e;
      local_168._0_4_ = 0;
      local_168._4_4_ = 0x2f;
      uVar21 = 0x6d;
      uVar16 = 0x811c9dc5;
      pbVar19 = (byte *)((long)&local_160 + 1);
      do {
        uVar16 = uVar16 * 0x89 ^ uVar21;
        uVar21 = (uint)*pbVar19;
        pbVar19 = pbVar19 + 1;
      } while (uVar21 != 0);
      break;
    case 2:
      local_160 = 0x726970735f756e6d;
      local_158 = 0x7469;
      uStack_156 = 0x6c6168635f73;
      local_150 = 0x656c;
      local_14e = 0x6472616f6265676e;
      local_146 = 0x6d69675f;
      local_142 = 0x696d;
      local_140 = 0x67616d61645f6b63;
      local_138 = 0x726f6f6c665f65;
      local_168._0_4_ = 0;
      local_168._4_4_ = 0x2f;
      uVar21 = 0x6d;
      uVar16 = 0x811c9dc5;
      pbVar19 = (byte *)((long)&local_160 + 1);
      do {
        uVar16 = uVar16 * 0x89 ^ uVar21;
        uVar21 = (uint)*pbVar19;
        pbVar19 = pbVar19 + 1;
      } while (uVar21 != 0);
      break;
    case 3:
      local_160 = 0x726970735f756e6d;
      local_158 = 0x7469;
      uStack_156 = 0x6c6168635f73;
      local_150 = 0x656c;
      local_14e = 0x6472616f6265676e;
      local_146 = 0x6d69675f;
      local_142 = 0x696d;
      local_168._0_4_ = 0;
      local_168._4_4_ = 0x31;
      uVar21 = 0x6d;
      local_140 = 0x7463656c655f6b63;
      local_138 = 0x6f6f6c665f636972;
      local_130 = 0x72;
      uVar16 = 0x811c9dc5;
      pbVar19 = (byte *)((long)&local_160 + 1);
      do {
        uVar16 = uVar16 * 0x89 ^ uVar21;
        uVar21 = (uint)*pbVar19;
        pbVar19 = pbVar19 + 1;
      } while (uVar21 != 0);
      break;
    case 4:
      local_160 = 0x726970735f756e6d;
      local_138 = (ulong)local_138._7_1_ << 0x38;
      local_158 = 0x7469;
      uStack_156 = 0x6c6168635f73;
      local_150 = 0x656c;
      local_14e = 0x6472616f6265676e;
      local_146 = 0x6d69675f;
      local_142 = 0x696d;
      local_140 = 0x7065656c735f6b63;
      local_138 = CONCAT26(local_138._6_2_,0x726f6f6c665f);
      uVar21 = 0x6d;
      local_168._0_4_ = 0;
      local_168._4_4_ = 0x2e;
      uVar16 = 0x811c9dc5;
      pbVar19 = (byte *)((long)&local_160 + 1);
      do {
        uVar16 = uVar16 * 0x89 ^ uVar21;
        uVar21 = (uint)*pbVar19;
        pbVar19 = pbVar19 + 1;
      } while (uVar21 != 0);
      break;
    case 5:
      local_160 = 0x726970735f756e6d;
      uVar18 = (ulong)local_138 >> 0x20;
      local_158 = 0x7469;
      uStack_156 = 0x6c6168635f73;
      local_150 = 0x656c;
      local_14e = 0x6472616f6265676e;
      local_146 = 0x6d69675f;
      local_142 = 0x696d;
      local_140 = 0x665f6563695f6b63;
      local_138 = CONCAT44((uint)uVar18 & 0xffffff00,0x726f6f6c);
      local_168._0_4_ = 0;
      local_168._4_4_ = 0x2c;
      uVar21 = 0x6d;
      uVar16 = 0x811c9dc5;
      pbVar19 = (byte *)((long)&local_160 + 1);
      do {
        uVar16 = uVar16 * 0x89 ^ uVar21;
        uVar21 = (uint)*pbVar19;
        pbVar19 = pbVar19 + 1;
      } while (uVar21 != 0);
      break;
    case 6:
      local_160 = 0x726970735f756e6d;
      local_158 = 0x7469;
      uStack_156 = 0x6c6168635f73;
      local_150 = 0x656c;
      local_14e = 0x6472616f6265676e;
      local_146 = 0x6d69675f;
      local_142 = 0x696d;
      local_140 = 0x6b636974735f6b63;
      local_138 = 0x726f6f6c665f79;
      local_168._0_4_ = 0;
      local_168._4_4_ = 0x2f;
      uVar21 = 0x6d;
      uVar16 = 0x811c9dc5;
      pbVar19 = (byte *)((long)&local_160 + 1);
      do {
        uVar16 = uVar16 * 0x89 ^ uVar21;
        uVar21 = (uint)*pbVar19;
        pbVar19 = pbVar19 + 1;
      } while (uVar21 != 0);
      break;
    case 7:
      local_160 = 0x726970735f756e6d;
      local_138 = (ulong)local_138._7_1_ << 0x38;
      local_158 = 0x7469;
      uStack_156 = 0x6c6168635f73;
      local_150 = 0x656c;
      local_14e = 0x6472616f6265676e;
      local_146 = 0x6d69675f;
      local_142 = 0x696d;
      local_140 = 0x6f73696f705f6b63;
      local_138 = CONCAT26(local_138._6_2_,0x7473696d5f6e);
      uVar21 = 0x6d;
      local_168._0_4_ = 0;
      local_168._4_4_ = 0x2e;
      uVar16 = 0x811c9dc5;
      pbVar19 = (byte *)((long)&local_160 + 1);
      do {
        uVar16 = uVar16 * 0x89 ^ uVar21;
        uVar21 = (uint)*pbVar19;
        pbVar19 = pbVar19 + 1;
      } while (uVar21 != 0);
      break;
    case 8:
      local_160 = 0x726970735f756e6d;
      local_158 = 0x7469;
      uStack_156 = 0x6c6168635f73;
      local_150 = 0x656c;
      local_14e = 0x6472616f6265676e;
      local_146 = 0x6d69675f;
      local_142 = 0x696d;
      local_168._0_4_ = 0;
      local_168._4_4_ = 0x27;
      uVar21 = 0x6d;
      local_140 = 0x646e69775f6b63;
      uVar16 = 0x811c9dc5;
      pbVar19 = (byte *)((long)&local_160 + 1);
      do {
        uVar16 = uVar16 * 0x89 ^ uVar21;
        uVar21 = (uint)*pbVar19;
        pbVar19 = pbVar19 + 1;
      } while (uVar21 != 0);
      break;
    case 9:
      local_160 = 0x726970735f756e6d;
      local_158 = 0x7469;
      uStack_156 = 0x6c6168635f73;
      local_150 = 0x656c;
      local_14e = 0x6472616f6265676e;
      local_146 = 0x6d69675f;
      local_142 = 0x696d;
      local_168._0_4_ = 0;
      local_168._4_4_ = 0x27;
      uVar21 = 0x6d;
      local_140 = 0x7473696d5f6b63;
      uVar16 = 0x811c9dc5;
      pbVar19 = (byte *)((long)&local_160 + 1);
      do {
        uVar16 = uVar16 * 0x89 ^ uVar21;
        uVar21 = (uint)*pbVar19;
        pbVar19 = pbVar19 + 1;
      } while (uVar21 != 0);
      break;
    default:
      goto switchD_71025b1ca0_default;
    }
    local_142 = 0x696d;
    local_146 = 0x6d69675f;
    local_14e = 0x6472616f6265676e;
    local_150 = 0x656c;
    uStack_156 = 0x6c6168635f73;
    local_158 = 0x7469;
    local_160 = 0x726970735f756e6d;
    local_168 = CONCAT44(local_168._4_4_,uVar16);
    local_d8 = '\x01';
    local_d0 = FUN_71025b2eb0(iVar9);
    if (param_3 != (long ****)0x0) {
      uVar8 = FUN_71025cfbc0(iVar9,(ushort *)param_3,pppplVar11,param_4,param_5,param_6,param_7,
                             param_8);
      bStack_d7 = (byte)uVar8 & 1;
    }
    if (local_c0 == puStack_b8) {
      FUN_71025b2ee0((ulong *)&local_c8,(long)&local_168,pppplVar11,param_4,param_5,param_6,param_7,
                     param_8);
    }
    else {
      *local_c0 = 0;
      uVar16 = 0x811c9dc5;
      for (uVar18 = 0; *(char *)((long)&local_160 + uVar18) != '\0'; uVar18 = uVar18 + 2) {
        *(char *)((long)local_c0 + uVar18 + 8) = *(char *)((long)&local_160 + uVar18);
        if (0x3e < (int)uVar18 + 1U) {
          uVar18 = (ulong)((int)uVar18 + 1);
          break;
        }
        cVar3 = *(char *)((long)&local_160 + uVar18 + 1);
        if (cVar3 == '\0') {
          uVar18 = uVar18 + 1;
          break;
        }
        *(char *)((long)local_c0 + uVar18 + 9) = cVar3;
      }
      *(undefined1 *)((long)local_c0 + (uVar18 & 0xffffffff) + 8) = 0;
      local_c0[1] = (uint)uVar18;
      uVar12 = (uint)(byte)local_c0[2];
      uVar21 = uVar16;
      if ((byte)local_c0[2] != 0) {
        pbVar19 = (byte *)((long)local_c0 + 9);
        do {
          uVar21 = uVar21 * 0x89 ^ uVar12;
          uVar12 = (uint)*pbVar19;
          pbVar19 = pbVar19 + 1;
        } while (uVar12 != 0);
      }
      *local_c0 = uVar21;
      local_c0[0x12] = 0;
      for (uVar18 = 0; *(char *)((long)&local_118 + uVar18) != '\0'; uVar18 = uVar18 + 2) {
        *(char *)((long)local_c0 + uVar18 + 0x50) = *(char *)((long)&local_118 + uVar18);
        if (0x3e < (int)uVar18 + 1U) {
          uVar18 = (ulong)((int)uVar18 + 1);
          break;
        }
        cVar3 = *(char *)((long)&local_118 + uVar18 + 1);
        if (cVar3 == '\0') {
          uVar18 = uVar18 + 1;
          break;
        }
        *(char *)((long)local_c0 + uVar18 + 0x51) = cVar3;
      }
      *(undefined1 *)((long)local_c0 + (uVar18 & 0xffffffff) + 0x50) = 0;
      local_c0[0x13] = (uint)uVar18;
      uVar21 = (uint)(byte)local_c0[0x14];
      if ((byte)local_c0[0x14] != 0) {
        pbVar19 = (byte *)((long)local_c0 + 0x51);
        do {
          uVar16 = uVar16 * 0x89 ^ uVar21;
          uVar21 = (uint)*pbVar19;
          pbVar19 = pbVar19 + 1;
        } while (uVar21 != 0);
      }
      local_c0[0x12] = uVar16;
      *(ulong *)(local_c0 + 0x24) = CONCAT62(uStack_d6,CONCAT11(bStack_d7,local_d8));
      *(undefined8 *)(local_c0 + 0x26) = local_d0;
      local_c0 = local_c0 + 0x28;
    }
  }
switchD_71025b1ca0_default:
  uVar16 = 0x811c9dc5;
  if ((*(ulong *)(param_2 + 0x40) & 0xffffffffff) == 0x47f9000cf) goto LAB_71025b2940;
  lVar13 = *(long *)(*DAT_7105329fa0 + 0x6a8);
  lVar22 = *(long *)(*DAT_7105329fa0 + 0x6b0) - lVar13;
  if (lVar22 == 0) goto LAB_71025b2940;
  uVar18 = 0;
  uVar21 = 1;
  iVar9 = -1;
  do {
    lVar23 = uVar18 * 0x40;
    iVar5 = uVar21 - 1;
    uVar18 = (ulong)uVar21;
    uVar21 = uVar21 + 1;
    if (((*(ulong *)(lVar13 + lVar23) ^ *(ulong *)(param_2 + 0x40)) & 0xffffffffff) != 0) {
      iVar5 = iVar9;
    }
    iVar9 = iVar5;
  } while (uVar18 < (ulong)(lVar22 >> 6));
  if ((iVar5 == -1) || (lVar13 = lVar13 + (long)iVar5 * 0x40, *(char *)(lVar13 + 8) == '\0'))
  goto LAB_71025b2940;
  local_158 = 0x7469;
  uStack_156 = 0x6c6168635f73;
  local_150 = 0x656c;
  local_14e = 0x6472616f6265676e;
  local_118 = local_118 & 0xffffffffffffff00;
  local_120 = 0;
  local_146 = 0x6574695f;
  local_142 = 0x5f6d;
  local_d0 = 0x71ffff0000000000;
  uVar21 = 0x6d;
  lVar22 = 9;
  local_168 = 0x2600000000;
  local_d8 = '\0';
  bStack_d7 = 0;
  local_160 = 0x726970735f756e6d;
  local_140 = CONCAT17(local_140._7_1_,0x676e69786966);
  do {
    uVar16 = uVar16 * 0x89 ^ uVar21;
    uVar21 = (uint)*(byte *)((long)&local_168 + lVar22);
    lVar22 = lVar22 + 1;
  } while (uVar21 != 0);
  local_168 = CONCAT44(0x26,uVar16);
  bVar2 = *(byte *)(lVar13 + 0x10);
  if ((bVar2 & 1) == 0) {
    if (bVar2 >> 1 != 0) goto LAB_71025b2600;
LAB_71025b268c:
    if ((int)((ulong)(*(long *)(lVar13 + 0x30) - (long)*(undefined8 **)(lVar13 + 0x28)) >> 3) < 1)
    goto LAB_71025b27e8;
    pppplVar11 = (long ****)**(undefined8 **)(lVar13 + 0x28);
    FUN_710327fc30(auStack_b0,*(long *)(*(long *)(DAT_710532f730 + 8) + 0x268),(ulong)pppplVar11);
    FUN_71003a4ca0(auStack_1b0,"nam_item_%s",auStack_a8,pppplVar11,param_4,param_5,param_6,param_7,
                   param_8);
    for (uVar18 = 0; local_1a8[uVar18] != '\0'; uVar18 = uVar18 + 2) {
      *(char *)((long)&local_118 + uVar18) = local_1a8[uVar18];
      if (0x3e < (int)uVar18 + 1U) {
        uVar18 = (ulong)((int)uVar18 + 1);
        break;
      }
      if (local_1a8[uVar18 + 1] == '\0') {
        uVar18 = uVar18 + 1;
        break;
      }
      *(char *)((long)&local_118 + uVar18 + 1) = local_1a8[uVar18 + 1];
    }
    *(undefined1 *)((long)&local_118 + (uVar18 & 0xffffffff)) = 0;
    local_120 = CONCAT44((int)uVar18,(undefined4)local_120);
    uVar21 = (uint)(byte)local_118;
    uVar16 = 0x811c9dc5;
    if ((byte)local_118 != 0) {
      uVar16 = 0x811c9dc5;
      pbVar19 = (byte *)((long)&local_118 + 1);
      do {
        uVar16 = uVar16 * 0x89 ^ uVar21;
        uVar21 = (uint)*pbVar19;
        pbVar19 = pbVar19 + 1;
      } while (uVar21 != 0);
    }
LAB_71025b27e4:
    local_120 = CONCAT44(local_120._4_4_,uVar16);
  }
  else {
    if (*(long *)(lVar13 + 0x18) == 0) goto LAB_71025b268c;
LAB_71025b2600:
    local_102 = 0;
    local_118 = 0x726970735f6d616e;
    local_108 = 0x6b5f;
    local_110 = 0x656c75725f737469;
    local_106 = 0x5f646e69;
    uVar21 = 0x6e;
    local_120 = 0x1600000000;
    uVar16 = 0x811c9dc5;
    pbVar19 = (byte *)((long)&local_118 + 1);
    do {
      uVar16 = uVar16 * 0x89 ^ uVar21;
      uVar21 = (uint)*pbVar19;
      pbVar19 = pbVar19 + 1;
    } while (uVar21 != 0);
    local_120 = CONCAT44(0x16,uVar16);
    if ((*(byte *)(lVar13 + 0x10) & 1) == 0) {
      lVar13 = lVar13 + 0x11;
LAB_71025b2728:
      lVar22 = 0;
      do {
        pcVar10 = (char *)(lVar13 + lVar22);
        if (*pcVar10 == '\0') break;
        lVar23 = (long)local_120._4_4_;
        lVar22 = lVar22 + 1;
        local_120 = CONCAT44(local_120._4_4_ + 1,(undefined4)local_120);
        *(char *)((long)&local_118 + lVar23) = *pcVar10;
      } while ((int)lVar22 + 0x15U < 0x3e);
      *(undefined1 *)((long)&local_118 + (long)local_120._4_4_) = 0;
      uVar21 = (uint)(byte)local_118;
      uVar16 = 0x811c9dc5;
      if ((byte)local_118 != 0) {
        uVar16 = 0x811c9dc5;
        pbVar19 = (byte *)((long)&local_118 + 1);
        do {
          uVar16 = uVar16 * 0x89 ^ uVar21;
          uVar21 = (uint)*pbVar19;
          pbVar19 = pbVar19 + 1;
        } while (uVar21 != 0);
      }
      goto LAB_71025b27e4;
    }
    lVar13 = *(long *)(lVar13 + 0x20);
    if (lVar13 != 0) goto LAB_71025b2728;
  }
LAB_71025b27e8:
  if (local_c0 == puStack_b8) {
    FUN_71025b2ee0((ulong *)&local_c8,(long)&local_168,pppplVar11,param_4,param_5,param_6,param_7,
                   param_8);
  }
  else {
    *local_c0 = 0;
    for (uVar18 = 0; *(char *)((long)&local_160 + uVar18) != '\0'; uVar18 = uVar18 + 2) {
      *(char *)((long)local_c0 + uVar18 + 8) = *(char *)((long)&local_160 + uVar18);
      if (0x3e < (int)uVar18 + 1U) {
        uVar18 = (ulong)((int)uVar18 + 1);
        break;
      }
      cVar3 = *(char *)((long)&local_160 + uVar18 + 1);
      if (cVar3 == '\0') {
        uVar18 = uVar18 + 1;
        break;
      }
      *(char *)((long)local_c0 + uVar18 + 9) = cVar3;
    }
    *(undefined1 *)((long)local_c0 + (uVar18 & 0xffffffff) + 8) = 0;
    local_c0[1] = (uint)uVar18;
    uVar21 = (uint)(byte)local_c0[2];
    uVar16 = 0x811c9dc5;
    if ((byte)local_c0[2] != 0) {
      uVar16 = 0x811c9dc5;
      pbVar19 = (byte *)((long)local_c0 + 9);
      do {
        uVar16 = uVar16 * 0x89 ^ uVar21;
        uVar21 = (uint)*pbVar19;
        pbVar19 = pbVar19 + 1;
      } while (uVar21 != 0);
    }
    *local_c0 = uVar16;
    local_c0[0x12] = 0;
    for (uVar18 = 0; *(char *)((long)&local_118 + uVar18) != '\0'; uVar18 = uVar18 + 2) {
      *(char *)((long)local_c0 + uVar18 + 0x50) = *(char *)((long)&local_118 + uVar18);
      if (0x3e < (int)uVar18 + 1U) {
        uVar18 = (ulong)((int)uVar18 + 1);
        break;
      }
      cVar3 = *(char *)((long)&local_118 + uVar18 + 1);
      if (cVar3 == '\0') {
        uVar18 = uVar18 + 1;
        break;
      }
      *(char *)((long)local_c0 + uVar18 + 0x51) = cVar3;
    }
    *(undefined1 *)((long)local_c0 + (uVar18 & 0xffffffff) + 0x50) = 0;
    local_c0[0x13] = (uint)uVar18;
    uVar21 = (uint)(byte)local_c0[0x14];
    uVar16 = 0x811c9dc5;
    if ((byte)local_c0[0x14] != 0) {
      uVar16 = 0x811c9dc5;
      pbVar19 = (byte *)((long)local_c0 + 0x51);
      do {
        uVar16 = uVar16 * 0x89 ^ uVar21;
        uVar21 = (uint)*pbVar19;
        pbVar19 = pbVar19 + 1;
      } while (uVar21 != 0);
    }
    local_c0[0x12] = uVar16;
    *(ulong *)(local_c0 + 0x24) = CONCAT62(uStack_d6,CONCAT11(bStack_d7,local_d8));
    *(undefined8 *)(local_c0 + 0x26) = local_d0;
    local_c0 = local_c0 + 0x28;
  }
LAB_71025b2940:
  lVar13 = *(long *)(param_2 + 0x50);
  if (*(long *)(param_2 + 0x58) != lVar13) {
    uVar18 = 0;
    do {
      uVar16 = 0x811c9dc5;
      cVar3 = *(char *)(lVar13 + uVar18 * 0x20);
      if ((cVar3 != '\f') &&
         (pcVar10 = FUN_71025b32d0(cVar3,*(ulong *)(lVar13 + uVar18 * 0x20 + 8)),
         pcVar10 != (char *)0x0)) {
        local_160 = local_160 & 0xffffffffffffff00;
        local_118 = local_118 & 0xffffffffffffff00;
        local_120 = 0;
        local_d8 = '\0';
        bStack_d7 = 0;
        local_d0 = 0x71ffff0000000000;
        uVar20 = 0;
        do {
          pcVar25 = pcVar10 + uVar20;
          uVar14 = uVar20;
          if (*pcVar25 == '\0') break;
          *(char *)((long)&local_160 + uVar20) = *pcVar25;
          if (pcVar25[1] == '\0') {
            uVar14 = uVar20 + 1;
            break;
          }
          *(char *)((long)&local_160 + uVar20 + 1) = pcVar25[1];
          if (pcVar25[2] == '\0') {
            uVar14 = uVar20 + 2;
            break;
          }
          uVar14 = uVar20 + 3;
          *(char *)((long)&local_160 + uVar20 + 2) = pcVar25[2];
          uVar20 = uVar14;
        } while ((uint)uVar14 < 0x3f);
        *(undefined1 *)((long)&local_160 + (uVar14 & 0xffffffff)) = 0;
        local_168 = uVar14 << 0x20;
        bVar4 = (byte)local_160;
        pbVar19 = (byte *)((long)&local_160 + 1);
        bVar2 = (byte)local_160;
        while (bVar2 != 0) {
          uVar16 = uVar16 * 0x89 ^ (uint)bVar2;
          bVar2 = *pbVar19;
          pbVar19 = pbVar19 + 1;
        }
        local_168 = CONCAT44((int)uVar14,uVar16);
        bVar2 = *(byte *)(*(long *)(param_2 + 0x50) + uVar18 * 0x20);
        cVar3 = local_d8;
        if (bVar2 < 0x1e && (1 << (ulong)(bVar2 & 0x1f) & 0x30100000U) != 0) {
          local_d8 = '\x01';
          local_d0 = FUN_71025b3940(bVar2);
          cVar3 = '\x01';
        }
        if ((param_3 != (long ****)0x0) && (cVar3 != '\0')) {
          uVar8 = FUN_71025d0920(bVar2,(ushort *)param_3,pppplVar11,param_4,param_5,param_6,param_7,
                                 param_8);
          bStack_d7 = (byte)uVar8 & 1;
        }
        if (local_c0 == puStack_b8) {
          FUN_71025b2ee0((ulong *)&local_c8,(long)&local_168,pppplVar11,param_4,param_5,param_6,
                         param_7,param_8);
        }
        else {
          uVar20 = 0;
          uVar16 = 0x811c9dc5;
          *local_c0 = 0;
          while (bVar4 != 0) {
            *(byte *)((long)local_c0 + uVar20 + 8) = bVar4;
            bVar2 = ((byte *)((long)&local_160 + 1))[uVar20];
            if (bVar2 == 0) {
              uVar20 = uVar20 + 1;
              break;
            }
            *(byte *)((long)local_c0 + uVar20 + 9) = bVar2;
            cVar3 = *(char *)((long)&local_160 + uVar20 + 2);
            if (cVar3 == '\0') {
              uVar20 = uVar20 + 2;
              break;
            }
            *(char *)((long)local_c0 + uVar20 + 10) = cVar3;
            if (0x3e < (int)uVar20 + 3U) {
              uVar20 = (ulong)((int)uVar20 + 3);
              break;
            }
            lVar13 = uVar20 + 3;
            uVar20 = uVar20 + 3;
            bVar4 = *(byte *)((long)&local_160 + lVar13);
          }
          *(undefined1 *)((long)local_c0 + (uVar20 & 0xffffffff) + 8) = 0;
          local_c0[1] = (uint)uVar20;
          uVar12 = (uint)(byte)local_c0[2];
          uVar21 = uVar16;
          if ((byte)local_c0[2] != 0) {
            pbVar19 = (byte *)((long)local_c0 + 9);
            do {
              uVar21 = uVar21 * 0x89 ^ uVar12;
              uVar12 = (uint)*pbVar19;
              pbVar19 = pbVar19 + 1;
            } while (uVar12 != 0);
          }
          *local_c0 = uVar21;
          local_c0[0x12] = 0;
          uVar20 = 0;
          do {
            uVar14 = uVar20;
            if (*(char *)((long)&local_118 + uVar20) == '\0') break;
            *(char *)((long)local_c0 + uVar20 + 0x50) = *(char *)((long)&local_118 + uVar20);
            cVar3 = *(char *)((long)&local_118 + uVar20 + 1);
            if (cVar3 == '\0') {
              uVar14 = uVar20 + 1;
              break;
            }
            *(char *)((long)local_c0 + uVar20 + 0x51) = cVar3;
            cVar3 = *(char *)((long)&local_118 + uVar20 + 2);
            if (cVar3 == '\0') {
              uVar14 = uVar20 + 2;
              break;
            }
            uVar14 = uVar20 + 3;
            *(char *)((long)local_c0 + uVar20 + 0x52) = cVar3;
            uVar20 = uVar14;
          } while ((uint)uVar14 < 0x3f);
          *(undefined1 *)((long)local_c0 + (uVar14 & 0xffffffff) + 0x50) = 0;
          local_c0[0x13] = (uint)uVar14;
          uVar21 = (uint)(byte)local_c0[0x14];
          if ((byte)local_c0[0x14] != 0) {
            pbVar19 = (byte *)((long)local_c0 + 0x51);
            do {
              uVar16 = uVar16 * 0x89 ^ uVar21;
              uVar21 = (uint)*pbVar19;
              pbVar19 = pbVar19 + 1;
            } while (uVar21 != 0);
          }
          local_c0[0x12] = uVar16;
          *(ulong *)(local_c0 + 0x24) = CONCAT62(uStack_d6,CONCAT11(bStack_d7,local_d8));
          *(undefined8 *)(local_c0 + 0x26) = local_d0;
          local_c0 = local_c0 + 0x28;
        }
      }
      lVar13 = *(long *)(param_2 + 0x50);
      uVar18 = uVar18 + 1;
    } while (uVar18 < (ulong)(*(long *)(param_2 + 0x58) - lVar13 >> 5));
  }
  puVar7 = local_c0;
  puVar6 = local_c8;
  if (local_c8 != local_c0) {
    pcVar10 = (char *)(param_1 + 8);
    uVar16 = 0;
    puVar24 = local_c8;
    do {
      if (uVar16 != 0) {
        uVar21 = *puVar24;
        uVar18 = 0;
        pcVar25 = pcVar10;
        do {
          if (2 < uVar18) goto LAB_71025b2e9c;
          if ((uVar21 == *(uint *)(pcVar25 + -8)) &&
             (iVar9 = strcmp((char *)(puVar24 + 2),pcVar25), iVar9 == 0)) goto LAB_71025b2e58;
          uVar18 = uVar18 + 1;
          pcVar25 = pcVar25 + 0xa0;
        } while (uVar18 < uVar16);
        if (2 < uVar16) {
LAB_71025b2e9c:
                    /* WARNING: Subroutine does not return */
          abort();
        }
      }
      uVar21 = 0x811c9dc5;
      uVar18 = (ulong)uVar16;
      puVar15 = (uint *)(param_1 + uVar18 * 0xa0);
      if (puVar15 != puVar24) {
        uVar20 = 0;
        do {
          cVar3 = *(char *)((long)puVar24 + uVar20 + 8);
          if (cVar3 == '\0') break;
          pcVar10[uVar20 + uVar18 * 0xa0] = cVar3;
          cVar3 = *(char *)((long)puVar24 + uVar20 + 9);
          if (cVar3 == '\0') {
            uVar20 = uVar20 + 1;
            break;
          }
          lVar13 = uVar20 + uVar18 * 0xa0;
          pcVar10[lVar13 + 1] = cVar3;
          cVar3 = *(char *)((long)puVar24 + uVar20 + 10);
          if (cVar3 == '\0') {
            uVar20 = uVar20 + 2;
            break;
          }
          uVar20 = uVar20 + 3;
          pcVar10[lVar13 + 2] = cVar3;
        } while ((uint)uVar20 < 0x3f);
        lVar13 = param_1 + uVar18 * 0xa0;
        *(undefined1 *)(lVar13 + 8 + (uVar20 & 0xffffffff)) = 0;
        *(int *)(lVar13 + 4) = (int)uVar20;
        uVar17 = (uint)*(byte *)(lVar13 + 8);
        uVar12 = uVar21;
        if (*(byte *)(lVar13 + 8) != 0) {
          pbVar19 = (byte *)(param_1 + 9 + uVar18 * 0xa0);
          do {
            uVar12 = uVar12 * 0x89 ^ uVar17;
            uVar17 = (uint)*pbVar19;
            pbVar19 = pbVar19 + 1;
          } while (uVar17 != 0);
        }
        *puVar15 = uVar12;
        lVar13 = param_1 + 0x50 + uVar18 * 0xa0;
        uVar20 = 0;
        do {
          cVar3 = *(char *)((long)puVar24 + uVar20 + 0x50);
          if (cVar3 == '\0') break;
          *(char *)(lVar13 + uVar20) = cVar3;
          cVar3 = *(char *)((long)puVar24 + uVar20 + 0x51);
          if (cVar3 == '\0') {
            uVar20 = uVar20 + 1;
            break;
          }
          lVar22 = lVar13 + uVar20;
          *(char *)(lVar22 + 1) = cVar3;
          cVar3 = *(char *)((long)puVar24 + uVar20 + 0x52);
          if (cVar3 == '\0') {
            uVar20 = uVar20 + 2;
            break;
          }
          uVar20 = uVar20 + 3;
          *(char *)(lVar22 + 2) = cVar3;
        } while ((uint)uVar20 < 0x3f);
        lVar13 = param_1 + uVar18 * 0xa0;
        *(undefined1 *)(lVar13 + 0x50 + (uVar20 & 0xffffffff)) = 0;
        *(int *)(lVar13 + 0x4c) = (int)uVar20;
        uVar12 = (uint)*(byte *)(lVar13 + 0x50);
        if (*(byte *)(lVar13 + 0x50) != 0) {
          pbVar19 = (byte *)(param_1 + 0x51 + uVar18 * 0xa0);
          do {
            uVar21 = uVar21 * 0x89 ^ uVar12;
            uVar12 = (uint)*pbVar19;
            pbVar19 = pbVar19 + 1;
          } while (uVar12 != 0);
        }
        *(uint *)(param_1 + uVar18 * 0xa0 + 0x48) = uVar21;
      }
      lVar13 = param_1 + uVar18 * 0xa0;
      uVar1 = *(undefined8 *)(puVar24 + 0x26);
      uVar16 = uVar16 + 1;
      *(undefined8 *)(lVar13 + 0x90) = *(undefined8 *)(puVar24 + 0x24);
      *(undefined8 *)(lVar13 + 0x98) = uVar1;
      if (uVar16 == 3) break;
LAB_71025b2e58:
      puVar24 = puVar24 + 0x28;
    } while (puVar24 != puVar7);
  }
  if (puVar6 != (uint *)0x0) {
    local_c0 = puVar6;
    FUN_710392eb40((ulong)puVar6);
  }
  return;
}

