// addr:      7101c8f600
// offset:    0x1c8f600
// name:      FUN_7101c8f600
// mangled:   
// signature: undefined __cdecl FUN_7101c8f600(long param_1, long param_2, undefined1 * param_3, byte * * * * param_4, long * * * * param_5, ulong param_6, undefined8 param_7, undefined8 param_8)


void FUN_7101c8f600(long param_1,long param_2,undefined1 *param_3,byte ****param_4,long ****param_5,
                   ulong param_6,undefined8 param_7,undefined8 param_8)

{
  char *pcVar1;
  char cVar2;
  byte bVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined1 *puVar6;
  bool bVar7;
  undefined *puVar8;
  undefined8 uVar9;
  uint uVar10;
  ulong uVar11;
  uint uVar12;
  uint uVar13;
  ulong uVar14;
  byte *pbVar15;
  char cVar16;
  byte bVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  long *plVar21;
  undefined8 *puVar22;
  undefined **local_288;
  undefined8 *local_280;
  undefined **local_278;
  undefined8 *local_270;
  undefined **local_268;
  ulong local_260;
  undefined **local_258;
  ulong local_250;
  byte *local_248;
  byte *local_240;
  byte *local_238;
  char *local_230;
  undefined8 *local_228;
  char local_220 [4];
  byte local_21c [4];
  undefined8 local_218;
  byte local_210 [64];
  undefined8 local_1d0;
  byte local_1c8 [64];
  byte local_188 [4];
  byte local_184 [4];
  undefined8 local_180;
  undefined8 local_178;
  undefined8 local_170;
  undefined2 local_168;
  undefined8 local_166;
  undefined2 local_15e;
  undefined1 local_15c;
  undefined8 local_138;
  undefined8 local_130;
  undefined8 local_128;
  undefined2 local_120;
  undefined8 local_11e;
  undefined2 local_116;
  undefined1 local_114;
  undefined8 local_f0;
  undefined8 local_e8;
  uint local_a8;
  undefined4 local_a4;
  byte local_a0 [64];
  
  uVar10 = (uint)param_5;
  uVar19 = (uint)param_4;
  uVar13 = (uint)param_3;
  bVar17 = (byte)param_3;
  bVar3 = (byte)param_4;
  local_210[0] = 0;
  local_218 = 0;
  local_1c8[0] = 0;
  local_1d0 = 0;
  local_21c[0] = 0;
  local_220[0] = '\0';
  uVar11 = param_6;
  local_188[0] = bVar3;
  local_184[0] = bVar17;
  if (uVar10 == 3) {
    bVar7 = FUN_7101704ba0(*(long *)(DAT_71052c4c58 + 8) + 0xa0);
    if (bVar7) {
      cVar16 = '\a';
    }
    else {
      FUN_7101797350(0);
      cVar16 = '\x06';
    }
    cVar2 = *(char *)(param_1 + 0x138);
    local_21c[0] = 1;
    if ('\0' < (char)bVar17) {
      uVar13 = 1;
    }
    uVar13 = uVar13 & ((int)(char)uVar13 >> 7 ^ 0xffffffffU);
    if ('\0' < (char)bVar3) {
      uVar19 = 1;
    }
    uVar19 = uVar19 & ((int)(char)uVar19 >> 7 ^ 0xffffffffU);
    param_3 = (undefined1 *)(ulong)uVar19;
    local_184[0] = (byte)uVar13;
    local_188[0] = (byte)uVar19;
    if (1 < (uVar13 & 0xff)) goto LAB_7101c91400;
    local_220[0] = (&DAT_7104545280)[(ulong)uVar13 & 0xff] == '\x01';
    FUN_7101c91730((uint *)&local_f0,local_184[0],local_188[0]);
    uVar14 = 0;
    while( true ) {
      if (*(byte *)((long)&local_e8 + uVar14) == 0) break;
      local_210[uVar14] = *(byte *)((long)&local_e8 + uVar14);
      if (0x3e < (int)uVar14 + 1U) {
        uVar14 = (ulong)((int)uVar14 + 1);
        break;
      }
      bVar17 = *(byte *)((long)&local_e8 + uVar14 + 1);
      if (bVar17 == 0) {
        uVar14 = uVar14 + 1;
        break;
      }
      local_210[uVar14 + 1] = bVar17;
      uVar14 = uVar14 + 2;
    }
    uVar19 = 0x811c9dc5;
    local_210[uVar14 & 0xffffffff] = 0;
    uVar12 = (uint)local_210[0];
    uVar13 = uVar19;
    if (local_210[0] != 0) {
      pbVar15 = local_210;
      do {
        pbVar15 = pbVar15 + 1;
        uVar13 = uVar13 * 0x89 ^ uVar12;
        uVar12 = (uint)*pbVar15;
      } while (uVar12 != 0);
    }
    local_218 = CONCAT44((int)uVar14,uVar13);
    for (uVar14 = 0; local_a0[uVar14] != 0; uVar14 = uVar14 + 2) {
      local_1c8[uVar14] = local_a0[uVar14];
      if (0x3e < (int)uVar14 + 1U) {
        uVar14 = (ulong)((int)uVar14 + 1);
        break;
      }
      if (local_a0[uVar14 + 1] == 0) {
        uVar14 = uVar14 + 1;
        break;
      }
      local_1c8[uVar14 + 1] = local_a0[uVar14 + 1];
    }
    local_1c8[uVar14 & 0xffffffff] = 0;
    local_1d0 = CONCAT44((int)uVar14,(undefined4)local_1d0);
    uVar13 = (uint)local_1c8[0];
    if (local_1c8[0] != 0) {
      pbVar15 = local_1c8;
      do {
        pbVar15 = pbVar15 + 1;
        uVar19 = uVar19 * 0x89 ^ uVar13;
        uVar13 = (uint)*pbVar15;
      } while (uVar13 != 0);
    }
    local_1d0 = CONCAT44((int)uVar14,uVar19);
    if (cVar2 != cVar16) goto LAB_7101c90e8c;
    FUN_7103778760(*(long *)(param_2 + 8),0x710433a225);
    FUN_7103778760(*(long *)(param_2 + 8),0x71043bedce);
    bVar7 = false;
    goto LAB_7101c90ea8;
  }
  switch((ulong)param_5 & 0xffffffff) {
  case 0:
    local_248 = local_184;
    local_240 = local_188;
    local_238 = local_21c;
    local_230 = local_220;
    local_228 = &local_218;
    bVar7 = FUN_7101704ba0(*(long *)(DAT_71052c4c58 + 8) + 0xa0);
    if (bVar7) {
      puVar8 = &DAT_7104545260;
    }
    else {
      uVar14 = FUN_7101797350(0);
      if ((uVar14 & 1) == 0) {
        local_21c[0] = 6;
        uVar13 = (uint)(char)local_184[0];
        if ('\x05' < (char)local_184[0]) {
          uVar13 = 6;
        }
        uVar13 = uVar13 & ((int)uVar13 >> 7 ^ 0xffffffffU);
        param_3 = (undefined1 *)(ulong)uVar13;
        uVar19 = (uint)(char)local_188[0];
        if ('\x05' < (char)local_188[0]) {
          uVar19 = 6;
        }
        uVar19 = uVar19 & ((int)uVar19 >> 7 ^ 0xffffffffU);
        param_4 = (byte ****)(ulong)uVar19;
        local_184[0] = (byte)uVar13;
        local_188[0] = (byte)uVar19;
        if (6 < (uVar13 & 0xff)) goto LAB_7101c91400;
        local_220[0] = (&DAT_7104545270)[(ulong)param_3 & 0xff] == '\0';
        FUN_7101c8dd70((uint *)&local_f0,0x7104545270,local_184[0],local_188[0]);
        uVar14 = 0;
        while( true ) {
          if (*(byte *)((long)&local_e8 + uVar14) == 0) break;
          local_210[uVar14] = *(byte *)((long)&local_e8 + uVar14);
          if (0x3e < (int)uVar14 + 1U) {
            uVar14 = (ulong)((int)uVar14 + 1);
            break;
          }
          bVar17 = *(byte *)((long)&local_e8 + uVar14 + 1);
          if (bVar17 == 0) {
            uVar14 = uVar14 + 1;
            break;
          }
          local_210[uVar14 + 1] = bVar17;
          uVar14 = uVar14 + 2;
        }
        uVar19 = 0x811c9dc5;
        uVar12 = 0x811c9dc5;
        local_210[uVar14 & 0xffffffff] = 0;
        uVar20 = (uint)local_210[0];
        uVar13 = uVar19;
        if (local_210[0] != 0) {
          pbVar15 = local_210;
          do {
            pbVar15 = pbVar15 + 1;
            uVar13 = uVar13 * 0x89 ^ uVar20;
            uVar20 = (uint)*pbVar15;
          } while (uVar20 != 0);
        }
        local_218 = CONCAT44((int)uVar14,uVar13);
        for (uVar14 = 0; local_a0[uVar14] != 0; uVar14 = uVar14 + 2) {
          local_1c8[uVar14] = local_a0[uVar14];
          if (0x3e < (int)uVar14 + 1U) {
            uVar14 = (ulong)((int)uVar14 + 1);
            break;
          }
          if (local_a0[uVar14 + 1] == 0) {
            uVar14 = uVar14 + 1;
            break;
          }
          local_1c8[uVar14 + 1] = local_a0[uVar14 + 1];
        }
        local_1c8[uVar14 & 0xffffffff] = 0;
        local_1d0._4_4_ = (int)uVar14;
        uVar13 = (uint)local_1c8[0];
        if (local_1c8[0] != 0) {
          pbVar15 = local_1c8;
          uVar12 = uVar19;
          do {
            pbVar15 = pbVar15 + 1;
            uVar12 = uVar12 * 0x89 ^ uVar13;
            uVar13 = (uint)*pbVar15;
          } while (uVar13 != 0);
        }
        break;
      }
      puVar8 = &DAT_7104545268;
    }
    FUN_7101c91410(&local_248,(long)puVar8);
    goto LAB_7101c90e8c;
  case 1:
    if ('\x03' < (char)bVar17) {
      uVar13 = 4;
    }
    uVar13 = uVar13 & ((int)(char)uVar13 >> 7 ^ 0xffffffffU);
    local_21c[0] = 4;
    if ('\x03' < (char)bVar3) {
      uVar19 = 4;
    }
    local_184[0] = (byte)uVar13;
    uVar19 = uVar19 & ((int)(char)uVar19 >> 7 ^ 0xffffffffU);
    local_188[0] = (byte)uVar19;
    if (4 < (uVar13 & 0xff)) goto LAB_7101c91400;
    local_220[0] = (&DAT_7104545277)[(ulong)uVar13 & 0xff] == '\0';
    uVar18 = 0x811c9dc5;
    uVar12 = 0x811c9dc5;
    uVar20 = uVar18;
    switch((&DAT_7104545277)[(ulong)uVar13 & 0xff]) {
    case 0:
      uVar13 = 0x6d;
      local_138 = (undefined **)0x1800000000;
      local_130 = &DAT_696c6e6f5f756e6d;
      local_128 = 0x5f6d6f6f725f656e;
      local_120 = 0x6f66;
      local_11e = CONCAT17(local_11e._7_1_,0x6c6c615f6d72);
      pbVar15 = (byte *)((long)&local_130 + 1);
      do {
        uVar20 = uVar20 * 0x89 ^ uVar13;
        uVar13 = (uint)*pbVar15;
        pbVar15 = pbVar15 + 1;
      } while (uVar13 != 0);
      break;
    default:
      local_138 = (undefined **)0x1900000000;
      local_130 = &DAT_696c6e6f5f756e6d;
      local_128 = 0x5f6d6f6f725f656e;
      local_120 = 0x6f66;
      local_11e = 0x72756f665f6d72;
      uVar13 = 0x6d;
      pbVar15 = (byte *)((long)&local_130 + 1);
      do {
        uVar20 = uVar20 * 0x89 ^ uVar13;
        uVar13 = (uint)*pbVar15;
        pbVar15 = pbVar15 + 1;
      } while (uVar13 != 0);
      break;
    case 2:
      local_138 = (undefined **)0x1a00000000;
      local_130 = &DAT_696c6e6f5f756e6d;
      local_128 = 0x5f6d6f6f725f656e;
      local_120 = 0x6f66;
      local_11e = 0x65657268745f6d72;
      uVar13 = 0x6d;
      local_116 = (ushort)local_116._1_1_ << 8;
      pbVar15 = (byte *)((long)&local_130 + 1);
      do {
        uVar20 = uVar20 * 0x89 ^ uVar13;
        uVar13 = (uint)*pbVar15;
        pbVar15 = pbVar15 + 1;
      } while (uVar13 != 0);
      break;
    case 3:
      uVar13 = 0x6d;
      local_138 = (undefined **)0x1c00000000;
      local_130 = &DAT_696c6e6f5f756e6d;
      local_128 = 0x5f6d6f6f725f656e;
      local_120 = 0x6f66;
      local_11e = 0x6f5f656e6f5f6d72;
      local_116 = 0x656e;
      local_114 = 0;
      pbVar15 = (byte *)((long)&local_130 + 1);
      do {
        uVar20 = uVar20 * 0x89 ^ uVar13;
        uVar13 = (uint)*pbVar15;
        pbVar15 = pbVar15 + 1;
      } while (uVar13 != 0);
      break;
    case 4:
      local_138 = (undefined **)0x1900000000;
      local_130 = &DAT_696c6e6f5f756e6d;
      local_128 = 0x5f6d6f6f725f656e;
      local_120 = 0x6f66;
      local_11e = 0x6d6165745f6d72;
      uVar13 = 0x6d;
      pbVar15 = (byte *)((long)&local_130 + 1);
      do {
        uVar20 = uVar20 * 0x89 ^ uVar13;
        uVar13 = (uint)*pbVar15;
        pbVar15 = pbVar15 + 1;
      } while (uVar13 != 0);
    }
    local_120 = 0x6f66;
    local_128 = 0x5f6d6f6f725f656e;
    local_130 = &DAT_696c6e6f5f756e6d;
    local_138 = (undefined **)CONCAT44(local_138._4_4_,uVar20);
    if (4 < (uVar19 & 0xff)) goto LAB_7101c91400;
    uVar13 = uVar18;
    switch((&DAT_7104545277)[(ulong)uVar19 & 0xff]) {
    case 0:
      local_180 = (undefined **)0x1800000000;
      local_178 = &DAT_696c6e6f5f756e6d;
      local_170 = 0x5f6d6f6f725f656e;
      local_168 = 0x6f66;
      uVar19 = 0x6d;
      local_166 = CONCAT17(local_166._7_1_,0x6c6c615f6d72);
      pbVar15 = (byte *)((long)&local_178 + 1);
      do {
        uVar13 = uVar13 * 0x89 ^ uVar19;
        uVar19 = (uint)*pbVar15;
        pbVar15 = pbVar15 + 1;
      } while (uVar19 != 0);
      break;
    default:
      local_180 = (undefined **)0x1900000000;
      local_178 = &DAT_696c6e6f5f756e6d;
      local_170 = 0x5f6d6f6f725f656e;
      local_168 = 0x6f66;
      local_166 = 0x72756f665f6d72;
      uVar19 = 0x6d;
      pbVar15 = (byte *)((long)&local_178 + 1);
      do {
        uVar13 = uVar13 * 0x89 ^ uVar19;
        uVar19 = (uint)*pbVar15;
        pbVar15 = pbVar15 + 1;
      } while (uVar19 != 0);
      goto LAB_7101c90b60;
    case 2:
      local_180 = (undefined **)0x1a00000000;
      local_178 = &DAT_696c6e6f5f756e6d;
      local_170 = 0x5f6d6f6f725f656e;
      local_168 = 0x6f66;
      local_166 = 0x65657268745f6d72;
      uVar19 = 0x6d;
      local_15e = (ushort)local_15e._1_1_ << 8;
      pbVar15 = (byte *)((long)&local_178 + 1);
      do {
        uVar13 = uVar13 * 0x89 ^ uVar19;
        uVar19 = (uint)*pbVar15;
        pbVar15 = pbVar15 + 1;
      } while (uVar19 != 0);
      break;
    case 3:
      local_180 = (undefined **)0x1c00000000;
      local_178 = &DAT_696c6e6f5f756e6d;
      local_170 = 0x5f6d6f6f725f656e;
      local_168 = 0x6f66;
      local_166 = 0x6f5f656e6f5f6d72;
      local_15e = 0x656e;
      uVar19 = 0x6d;
      local_15c = 0;
      pbVar15 = (byte *)((long)&local_178 + 1);
      do {
        uVar13 = uVar13 * 0x89 ^ uVar19;
        uVar19 = (uint)*pbVar15;
        pbVar15 = pbVar15 + 1;
      } while (uVar19 != 0);
      break;
    case 4:
      local_180 = (undefined **)0x1900000000;
      local_178 = &DAT_696c6e6f5f756e6d;
      local_170 = 0x5f6d6f6f725f656e;
      local_168 = 0x6f66;
      local_166 = 0x6d6165745f6d72;
      uVar19 = 0x6d;
      pbVar15 = (byte *)((long)&local_178 + 1);
      do {
        uVar13 = uVar13 * 0x89 ^ uVar19;
        uVar19 = (uint)*pbVar15;
        pbVar15 = pbVar15 + 1;
      } while (uVar19 != 0);
LAB_7101c90b60:
      local_180 = (undefined **)CONCAT44(0x19,uVar13);
      goto LAB_7101c90b64;
    }
    local_180 = (undefined **)CONCAT44(local_180._4_4_,uVar13);
LAB_7101c90b64:
    local_168 = 0x6f66;
    local_170 = 0x5f6d6f6f725f656e;
    local_178 = &DAT_696c6e6f5f756e6d;
    uVar14 = 0;
    cVar16 = 'm';
    do {
      *(char *)((long)&local_e8 + uVar14) = cVar16;
      if (0x3e < (int)uVar14 + 1U) {
        uVar14 = (ulong)((int)uVar14 + 1);
        break;
      }
      cVar16 = *(char *)((long)&local_130 + uVar14 + 1);
      if (cVar16 == '\0') {
        uVar14 = uVar14 + 1;
        break;
      }
      *(char *)((long)&local_e8 + uVar14 + 1) = cVar16;
      cVar16 = *(char *)((long)&local_130 + uVar14 + 2);
      uVar14 = uVar14 + 2;
    } while (cVar16 != '\0');
    *(undefined1 *)((long)&local_e8 + (uVar14 & 0xffffffff)) = 0;
    local_f0 = (undefined **)(uVar14 << 0x20);
    uVar19 = (uint)(byte)local_e8;
    uVar13 = uVar18;
    if (uVar19 != 0) {
      pbVar15 = (byte *)((long)&local_e8 + 1);
      do {
        uVar13 = uVar13 * 0x89 ^ uVar19;
        uVar19 = (uint)*pbVar15;
        pbVar15 = pbVar15 + 1;
      } while (uVar19 != 0);
    }
    local_f0 = (undefined **)CONCAT44((int)uVar14,uVar13);
    uVar14 = 0;
    bVar17 = 0x6d;
    local_a8 = 0;
    do {
      local_a0[uVar14] = bVar17;
      if (0x3e < (int)uVar14 + 1U) {
        uVar14 = (ulong)((int)uVar14 + 1);
        break;
      }
      bVar17 = *(byte *)((long)&local_178 + uVar14 + 1);
      if (bVar17 == 0) {
        uVar14 = uVar14 + 1;
        break;
      }
      local_a0[uVar14 + 1] = bVar17;
      bVar17 = *(byte *)((long)&local_178 + uVar14 + 2);
      uVar14 = uVar14 + 2;
    } while (bVar17 != 0);
    local_a0[uVar14 & 0xffffffff] = 0;
    local_a4 = (int)uVar14;
    uVar13 = (uint)local_a0[0];
    local_a8 = uVar18;
    if (uVar13 != 0) {
      pbVar15 = local_a0;
      do {
        pbVar15 = pbVar15 + 1;
        local_a8 = local_a8 * 0x89 ^ uVar13;
        uVar13 = (uint)*pbVar15;
      } while (uVar13 != 0);
    }
    if ((byte)local_e8 == 0) {
      uVar14 = 0;
    }
    else {
      uVar14 = 0;
      bVar17 = (byte)local_e8;
      do {
        local_210[uVar14] = bVar17;
        if (0x3e < (int)uVar14 + 1U) {
          uVar14 = (ulong)((int)uVar14 + 1);
          break;
        }
        bVar17 = *(byte *)((long)&local_e8 + uVar14 + 1);
        uVar14 = uVar14 + 1;
      } while (bVar17 != 0);
    }
    local_210[uVar14 & 0xffffffff] = 0;
    uVar19 = (uint)local_210[0];
    uVar13 = uVar18;
    if (local_210[0] != 0) {
      pbVar15 = local_210;
      do {
        pbVar15 = pbVar15 + 1;
        uVar13 = uVar13 * 0x89 ^ uVar19;
        uVar19 = (uint)*pbVar15;
      } while (uVar19 != 0);
    }
    local_218 = CONCAT44((int)uVar14,uVar13);
    if (local_a0[0] == 0) {
      uVar14 = 0;
    }
    else {
      uVar14 = 0;
      do {
        local_1c8[uVar14] = local_a0[0];
        if (0x3e < (int)uVar14 + 1U) {
          uVar14 = (ulong)((int)uVar14 + 1);
          break;
        }
        local_a0[0] = local_a0[uVar14 + 1];
        uVar14 = uVar14 + 1;
      } while (local_a0[0] != 0);
    }
    local_1c8[uVar14 & 0xffffffff] = 0;
    uVar13 = (uint)local_1c8[0];
    local_1d0._4_4_ = (int)uVar14;
    if (local_1c8[0] != 0) {
      pbVar15 = local_1c8;
      uVar12 = uVar18;
      do {
        pbVar15 = pbVar15 + 1;
        uVar12 = uVar12 * 0x89 ^ uVar13;
        uVar13 = (uint)*pbVar15;
      } while (uVar13 != 0);
    }
    break;
  case 2:
    if ('\x02' < (char)bVar17) {
      uVar13 = 3;
    }
    uVar13 = uVar13 & ((int)(char)uVar13 >> 7 ^ 0xffffffffU);
    local_21c[0] = 3;
    if ('\x02' < (char)bVar3) {
      uVar19 = 3;
    }
    local_184[0] = (byte)uVar13;
    uVar19 = uVar19 & ((int)(char)uVar19 >> 7 ^ 0xffffffffU);
    local_188[0] = (byte)uVar19;
    if (3 < (uVar13 & 0xff)) goto LAB_7101c91400;
    cVar16 = (&DAT_710454527c)[(ulong)uVar13 & 0xff];
    local_220[0] = cVar16 == '\0';
    uVar20 = 0x811c9dc5;
    uVar12 = 0x811c9dc5;
    uVar13 = uVar20;
    if (cVar16 == '\x03') {
      uVar18 = 0x6d;
      local_138 = (undefined **)0x1c00000000;
      local_130 = &DAT_696c6e6f5f756e6d;
      local_128 = 0x5f6d6f6f725f656e;
      local_120 = 0x7572;
      local_11e = 0x696d6174735f656c;
      local_116 = 0x616e;
      local_114 = 0;
      pbVar15 = (byte *)((long)&local_130 + 1);
      do {
        uVar13 = uVar13 * 0x89 ^ uVar18;
        uVar18 = (uint)*pbVar15;
        pbVar15 = pbVar15 + 1;
      } while (uVar18 != 0);
    }
    else if (cVar16 == '\x02') {
      local_138 = (undefined **)0x1a00000000;
      local_130 = &DAT_696c6e6f5f756e6d;
      local_128 = 0x5f6d6f6f725f656e;
      local_120 = 0x7572;
      local_11e = 0x6b636f74735f656c;
      uVar18 = 0x6d;
      local_116 = (ushort)local_116._1_1_ << 8;
      pbVar15 = (byte *)((long)&local_130 + 1);
      do {
        uVar13 = uVar13 * 0x89 ^ uVar18;
        uVar18 = (uint)*pbVar15;
        pbVar15 = pbVar15 + 1;
      } while (uVar18 != 0);
    }
    else if (cVar16 == '\0') {
      uVar18 = 0x6d;
      local_138 = (undefined **)0x1800000000;
      local_130 = &DAT_696c6e6f5f756e6d;
      local_128 = 0x5f6d6f6f725f656e;
      local_120 = 0x7572;
      local_11e = CONCAT17(local_11e._7_1_,0x6c6c615f656c);
      pbVar15 = (byte *)((long)&local_130 + 1);
      do {
        uVar13 = uVar13 * 0x89 ^ uVar18;
        uVar18 = (uint)*pbVar15;
        pbVar15 = pbVar15 + 1;
      } while (uVar18 != 0);
    }
    else {
      local_138 = (undefined **)0x1900000000;
      local_130 = &DAT_696c6e6f5f756e6d;
      local_128 = 0x5f6d6f6f725f656e;
      local_120 = 0x7572;
      local_11e = 0x656d69745f656c;
      uVar18 = 0x6d;
      pbVar15 = (byte *)((long)&local_130 + 1);
      do {
        uVar13 = uVar13 * 0x89 ^ uVar18;
        uVar18 = (uint)*pbVar15;
        pbVar15 = pbVar15 + 1;
      } while (uVar18 != 0);
    }
    local_120 = 0x7572;
    local_128 = 0x5f6d6f6f725f656e;
    local_130 = &DAT_696c6e6f5f756e6d;
    local_138 = (undefined **)CONCAT44(local_138._4_4_,uVar13);
    if (3 < (uVar19 & 0xff)) goto LAB_7101c91400;
    cVar16 = (&DAT_710454527c)[(ulong)uVar19 & 0xff];
    uVar13 = uVar20;
    if (cVar16 == '\x03') {
      local_180 = (undefined **)0x1c00000000;
      local_178 = &DAT_696c6e6f5f756e6d;
      local_170 = 0x5f6d6f6f725f656e;
      local_168 = 0x7572;
      local_166 = 0x696d6174735f656c;
      local_15e = 0x616e;
      uVar19 = 0x6d;
      local_15c = 0;
      pbVar15 = (byte *)((long)&local_178 + 1);
      do {
        uVar13 = uVar13 * 0x89 ^ uVar19;
        uVar19 = (uint)*pbVar15;
        pbVar15 = pbVar15 + 1;
      } while (uVar19 != 0);
LAB_7101c90424:
      local_180 = (undefined **)CONCAT44(local_180._4_4_,uVar13);
    }
    else {
      if (cVar16 == '\x02') {
        local_180 = (undefined **)0x1a00000000;
        local_178 = &DAT_696c6e6f5f756e6d;
        local_170 = 0x5f6d6f6f725f656e;
        local_168 = 0x7572;
        local_166 = 0x6b636f74735f656c;
        uVar19 = 0x6d;
        local_15e = (ushort)local_15e._1_1_ << 8;
        pbVar15 = (byte *)((long)&local_178 + 1);
        do {
          uVar13 = uVar13 * 0x89 ^ uVar19;
          uVar19 = (uint)*pbVar15;
          pbVar15 = pbVar15 + 1;
        } while (uVar19 != 0);
        goto LAB_7101c90424;
      }
      if (cVar16 == '\0') {
        local_180 = (undefined **)0x1800000000;
        local_178 = &DAT_696c6e6f5f756e6d;
        local_170 = 0x5f6d6f6f725f656e;
        local_168 = 0x7572;
        uVar19 = 0x6d;
        local_166 = CONCAT17(local_166._7_1_,0x6c6c615f656c);
        pbVar15 = (byte *)((long)&local_178 + 1);
        do {
          uVar13 = uVar13 * 0x89 ^ uVar19;
          uVar19 = (uint)*pbVar15;
          pbVar15 = pbVar15 + 1;
        } while (uVar19 != 0);
        goto LAB_7101c90424;
      }
      local_180 = (undefined **)0x1900000000;
      local_178 = &DAT_696c6e6f5f756e6d;
      local_170 = 0x5f6d6f6f725f656e;
      local_168 = 0x7572;
      local_166 = 0x656d69745f656c;
      uVar19 = 0x6d;
      pbVar15 = (byte *)((long)&local_178 + 1);
      do {
        uVar13 = uVar13 * 0x89 ^ uVar19;
        uVar19 = (uint)*pbVar15;
        pbVar15 = pbVar15 + 1;
      } while (uVar19 != 0);
      local_180 = (undefined **)CONCAT44(0x19,uVar13);
    }
    local_168 = 0x7572;
    local_170 = 0x5f6d6f6f725f656e;
    local_178 = &DAT_696c6e6f5f756e6d;
    uVar14 = 0;
    cVar16 = 'm';
    do {
      *(char *)((long)&local_e8 + uVar14) = cVar16;
      if (0x3e < (int)uVar14 + 1U) {
        uVar14 = (ulong)((int)uVar14 + 1);
        break;
      }
      cVar16 = *(char *)((long)&local_130 + uVar14 + 1);
      if (cVar16 == '\0') {
        uVar14 = uVar14 + 1;
        break;
      }
      *(char *)((long)&local_e8 + uVar14 + 1) = cVar16;
      cVar16 = *(char *)((long)&local_130 + uVar14 + 2);
      uVar14 = uVar14 + 2;
    } while (cVar16 != '\0');
    *(undefined1 *)((long)&local_e8 + (uVar14 & 0xffffffff)) = 0;
    local_f0 = (undefined **)(uVar14 << 0x20);
    uVar19 = (uint)(byte)local_e8;
    uVar13 = uVar20;
    if (uVar19 != 0) {
      pbVar15 = (byte *)((long)&local_e8 + 1);
      do {
        uVar13 = uVar13 * 0x89 ^ uVar19;
        uVar19 = (uint)*pbVar15;
        pbVar15 = pbVar15 + 1;
      } while (uVar19 != 0);
    }
    local_f0 = (undefined **)CONCAT44((int)uVar14,uVar13);
    uVar14 = 0;
    bVar17 = 0x6d;
    local_a8 = 0;
    do {
      local_a0[uVar14] = bVar17;
      if (0x3e < (int)uVar14 + 1U) {
        uVar14 = (ulong)((int)uVar14 + 1);
        break;
      }
      bVar17 = *(byte *)((long)&local_178 + uVar14 + 1);
      if (bVar17 == 0) {
        uVar14 = uVar14 + 1;
        break;
      }
      local_a0[uVar14 + 1] = bVar17;
      bVar17 = *(byte *)((long)&local_178 + uVar14 + 2);
      uVar14 = uVar14 + 2;
    } while (bVar17 != 0);
    local_a0[uVar14 & 0xffffffff] = 0;
    local_a4 = (int)uVar14;
    uVar13 = (uint)local_a0[0];
    local_a8 = uVar20;
    if (uVar13 != 0) {
      pbVar15 = local_a0;
      do {
        pbVar15 = pbVar15 + 1;
        local_a8 = local_a8 * 0x89 ^ uVar13;
        uVar13 = (uint)*pbVar15;
      } while (uVar13 != 0);
    }
    if ((byte)local_e8 == 0) {
      uVar14 = 0;
    }
    else {
      uVar14 = 0;
      bVar17 = (byte)local_e8;
      do {
        local_210[uVar14] = bVar17;
        if (0x3e < (int)uVar14 + 1U) {
          uVar14 = (ulong)((int)uVar14 + 1);
          break;
        }
        bVar17 = *(byte *)((long)&local_e8 + uVar14 + 1);
        uVar14 = uVar14 + 1;
      } while (bVar17 != 0);
    }
    local_210[uVar14 & 0xffffffff] = 0;
    uVar19 = (uint)local_210[0];
    uVar13 = uVar20;
    if (local_210[0] != 0) {
      pbVar15 = local_210;
      do {
        pbVar15 = pbVar15 + 1;
        uVar13 = uVar13 * 0x89 ^ uVar19;
        uVar19 = (uint)*pbVar15;
      } while (uVar19 != 0);
    }
    local_218 = CONCAT44((int)uVar14,uVar13);
    if (local_a0[0] == 0) {
      uVar14 = 0;
    }
    else {
      uVar14 = 0;
      do {
        local_1c8[uVar14] = local_a0[0];
        if (0x3e < (int)uVar14 + 1U) {
          uVar14 = (ulong)((int)uVar14 + 1);
          break;
        }
        local_a0[0] = local_a0[uVar14 + 1];
        uVar14 = uVar14 + 1;
      } while (local_a0[0] != 0);
    }
    local_1c8[uVar14 & 0xffffffff] = 0;
    uVar13 = (uint)local_1c8[0];
    local_1d0._4_4_ = (int)uVar14;
    if (local_1c8[0] != 0) {
      pbVar15 = local_1c8;
      uVar12 = uVar20;
      do {
        pbVar15 = pbVar15 + 1;
        uVar12 = uVar12 * 0x89 ^ uVar13;
        uVar13 = (uint)*pbVar15;
      } while (uVar13 != 0);
    }
    break;
  default:
    if ((param_6 & 1) != 0) {
      FUN_7101c83c40((long *)(param_1 + 0x100),0,param_3,param_4,param_5,param_6,param_7,param_8);
    }
    FUN_7103778760(*(long *)(param_2 + 8),0x71043196af);
    return;
  case 4:
    local_21c[0] = 1;
    if ('\0' < (char)bVar17) {
      uVar13 = 1;
    }
    uVar13 = uVar13 & ((int)(char)uVar13 >> 7 ^ 0xffffffffU);
    if ('\0' < (char)bVar3) {
      uVar19 = 1;
    }
    uVar19 = uVar19 & ((int)(char)uVar19 >> 7 ^ 0xffffffffU);
    param_3 = (undefined1 *)(ulong)uVar19;
    local_184[0] = (byte)uVar13;
    local_188[0] = (byte)uVar19;
    if (1 < (uVar13 & 0xff)) goto LAB_7101c91400;
    local_220[0] = (&DAT_7104545280)[(ulong)uVar13 & 0xff] == '\x01';
    FUN_7101c919f0((uint *)&local_f0,local_184[0],local_188[0]);
    uVar14 = 0;
    while( true ) {
      if (*(byte *)((long)&local_e8 + uVar14) == 0) break;
      local_210[uVar14] = *(byte *)((long)&local_e8 + uVar14);
      if (0x3e < (int)uVar14 + 1U) {
        uVar14 = (ulong)((int)uVar14 + 1);
        break;
      }
      bVar17 = *(byte *)((long)&local_e8 + uVar14 + 1);
      if (bVar17 == 0) {
        uVar14 = uVar14 + 1;
        break;
      }
      local_210[uVar14 + 1] = bVar17;
      uVar14 = uVar14 + 2;
    }
    uVar12 = 0x811c9dc5;
    local_210[uVar14 & 0xffffffff] = 0;
    uVar19 = (uint)local_210[0];
    uVar13 = uVar12;
    if (local_210[0] != 0) {
      pbVar15 = local_210;
      do {
        pbVar15 = pbVar15 + 1;
        uVar13 = uVar13 * 0x89 ^ uVar19;
        uVar19 = (uint)*pbVar15;
      } while (uVar19 != 0);
    }
    local_218 = CONCAT44((int)uVar14,uVar13);
    for (uVar14 = 0; local_a0[uVar14] != 0; uVar14 = uVar14 + 2) {
      local_1c8[uVar14] = local_a0[uVar14];
      if (0x3e < (int)uVar14 + 1U) {
        uVar14 = (ulong)((int)uVar14 + 1);
        break;
      }
      if (local_a0[uVar14 + 1] == 0) {
        uVar14 = uVar14 + 1;
        break;
      }
      local_1c8[uVar14 + 1] = local_a0[uVar14 + 1];
    }
    local_1c8[uVar14 & 0xffffffff] = 0;
    local_1d0._4_4_ = (int)uVar14;
    uVar13 = (uint)local_1c8[0];
    if (local_1c8[0] != 0) {
      pbVar15 = local_1c8;
      do {
        pbVar15 = pbVar15 + 1;
        uVar12 = uVar12 * 0x89 ^ uVar13;
        uVar13 = (uint)*pbVar15;
      } while (uVar13 != 0);
    }
    break;
  case 5:
    local_21c[0] = 1;
    if ('\0' < (char)bVar17) {
      uVar13 = 1;
    }
    uVar13 = uVar13 & ((int)(char)uVar13 >> 7 ^ 0xffffffffU);
    if ('\0' < (char)bVar3) {
      uVar19 = 1;
    }
    uVar19 = uVar19 & ((int)(char)uVar19 >> 7 ^ 0xffffffffU);
    local_184[0] = (byte)uVar13;
    local_188[0] = (byte)uVar19;
    if (1 < (uVar13 & 0xff)) goto LAB_7101c91400;
    local_220[0] = (&DAT_7104545280)[(ulong)uVar13 & 0xff] == '\x01';
    uVar14 = 0;
    pcVar1 = "mnu_online_room_passwordroom_off";
    if ((&DAT_7104545280)[(ulong)uVar13 & 0xff] != '\x02') {
      pcVar1 = "mnu_online_room_passwordroom_on";
    }
    while( true ) {
      cVar16 = pcVar1[uVar14];
      if (cVar16 == '\0') break;
      *(char *)((long)&local_130 + uVar14) = cVar16;
      if (0x3e < (int)uVar14 + 1U) {
        uVar14 = (ulong)((int)uVar14 + 1);
        break;
      }
      cVar16 = (pcVar1 + uVar14)[1];
      if (cVar16 == '\0') {
        uVar14 = uVar14 + 1;
        break;
      }
      *(char *)((long)&local_130 + uVar14 + 1) = cVar16;
      uVar14 = uVar14 + 2;
    }
    uVar12 = 0x811c9dc5;
    *(undefined1 *)((long)&local_130 + (uVar14 & 0xffffffff)) = 0;
    local_138 = (undefined **)(uVar14 << 0x20);
    bVar17 = (byte)local_130;
    uVar20 = (uint)(byte)local_130;
    uVar13 = uVar12;
    if (uVar20 != 0) {
      pbVar15 = (byte *)((long)&local_130 + 1);
      do {
        uVar13 = uVar13 * 0x89 ^ uVar20;
        uVar20 = (uint)*pbVar15;
        pbVar15 = pbVar15 + 1;
      } while (uVar20 != 0);
    }
    local_138 = (undefined **)CONCAT44((int)uVar14,uVar13);
    if (1 < (uVar19 & 0xff)) goto LAB_7101c91400;
    uVar14 = 0;
    pcVar1 = "mnu_online_room_passwordroom_off";
    if ((&DAT_7104545280)[(ulong)uVar19 & 0xff] != '\x02') {
      pcVar1 = "mnu_online_room_passwordroom_on";
    }
    while( true ) {
      cVar16 = pcVar1[uVar14];
      if (cVar16 == '\0') break;
      *(char *)((long)&local_178 + uVar14) = cVar16;
      if (0x3e < (int)uVar14 + 1U) {
        uVar14 = (ulong)((int)uVar14 + 1);
        break;
      }
      cVar16 = (pcVar1 + uVar14)[1];
      if (cVar16 == '\0') {
        uVar14 = uVar14 + 1;
        break;
      }
      *(char *)((long)&local_178 + uVar14 + 1) = cVar16;
      uVar14 = uVar14 + 2;
    }
    *(undefined1 *)((long)&local_178 + (uVar14 & 0xffffffff)) = 0;
    local_180 = (undefined **)(uVar14 << 0x20);
    uVar19 = (uint)(byte)local_178;
    uVar13 = uVar12;
    if (uVar19 != 0) {
      pbVar15 = (byte *)((long)&local_178 + 1);
      do {
        uVar13 = uVar13 * 0x89 ^ uVar19;
        uVar19 = (uint)*pbVar15;
        pbVar15 = pbVar15 + 1;
      } while (uVar19 != 0);
    }
    local_180 = (undefined **)CONCAT44((int)uVar14,uVar13);
    uVar14 = 0;
    local_f0 = (undefined **)((ulong)local_f0._4_4_ << 0x20);
    while (bVar17 != 0) {
      *(byte *)((long)&local_e8 + uVar14) = bVar17;
      if (0x3e < (int)uVar14 + 1U) {
        uVar14 = (ulong)((int)uVar14 + 1);
        break;
      }
      cVar16 = *(char *)((long)&local_130 + uVar14 + 1);
      if (cVar16 == '\0') {
        uVar14 = uVar14 + 1;
        break;
      }
      *(char *)((long)&local_e8 + uVar14 + 1) = cVar16;
      lVar4 = uVar14 + 2;
      uVar14 = uVar14 + 2;
      bVar17 = *(byte *)((long)&local_130 + lVar4);
    }
    *(undefined1 *)((long)&local_e8 + (uVar14 & 0xffffffff)) = 0;
    local_f0 = (undefined **)(uVar14 << 0x20);
    uVar19 = (uint)(byte)local_e8;
    uVar13 = uVar12;
    if (uVar19 != 0) {
      pbVar15 = (byte *)((long)&local_e8 + 1);
      do {
        uVar13 = uVar13 * 0x89 ^ uVar19;
        uVar19 = (uint)*pbVar15;
        pbVar15 = pbVar15 + 1;
      } while (uVar19 != 0);
    }
    local_f0 = (undefined **)CONCAT44((int)uVar14,uVar13);
    uVar14 = 0;
    local_a8 = 0;
    bVar17 = (byte)local_178;
    while (bVar17 != 0) {
      local_a0[uVar14] = bVar17;
      if (0x3e < (int)uVar14 + 1U) {
        uVar14 = (ulong)((int)uVar14 + 1);
        break;
      }
      bVar17 = *(byte *)((long)&local_178 + uVar14 + 1);
      if (bVar17 == 0) {
        uVar14 = uVar14 + 1;
        break;
      }
      local_a0[uVar14 + 1] = bVar17;
      lVar4 = uVar14 + 2;
      uVar14 = uVar14 + 2;
      bVar17 = *(byte *)((long)&local_178 + lVar4);
    }
    local_a0[uVar14 & 0xffffffff] = 0;
    local_a4 = (int)uVar14;
    uVar13 = (uint)local_a0[0];
    local_a8 = uVar12;
    if (uVar13 != 0) {
      pbVar15 = local_a0;
      do {
        pbVar15 = pbVar15 + 1;
        local_a8 = local_a8 * 0x89 ^ uVar13;
        uVar13 = (uint)*pbVar15;
      } while (uVar13 != 0);
    }
    if ((byte)local_e8 == 0) {
      uVar14 = 0;
    }
    else {
      uVar14 = 0;
      bVar17 = (byte)local_e8;
      do {
        local_210[uVar14] = bVar17;
        if (0x3e < (int)uVar14 + 1U) {
          uVar14 = (ulong)((int)uVar14 + 1);
          break;
        }
        bVar17 = *(byte *)((long)&local_e8 + uVar14 + 1);
        uVar14 = uVar14 + 1;
      } while (bVar17 != 0);
    }
    local_210[uVar14 & 0xffffffff] = 0;
    uVar19 = (uint)local_210[0];
    uVar13 = uVar12;
    if (local_210[0] != 0) {
      pbVar15 = local_210;
      do {
        pbVar15 = pbVar15 + 1;
        uVar13 = uVar13 * 0x89 ^ uVar19;
        uVar19 = (uint)*pbVar15;
      } while (uVar19 != 0);
    }
    local_218 = CONCAT44((int)uVar14,uVar13);
    if (local_a0[0] == 0) {
      uVar14 = 0;
    }
    else {
      uVar14 = 0;
      do {
        local_1c8[uVar14] = local_a0[0];
        if (0x3e < (int)uVar14 + 1U) {
          uVar14 = (ulong)((int)uVar14 + 1);
          break;
        }
        local_a0[0] = local_a0[uVar14 + 1];
        uVar14 = uVar14 + 1;
      } while (local_a0[0] != 0);
    }
    local_1c8[uVar14 & 0xffffffff] = 0;
    uVar13 = (uint)local_1c8[0];
    local_1d0._4_4_ = (int)uVar14;
    if (local_1c8[0] != 0) {
      pbVar15 = local_1c8;
      do {
        pbVar15 = pbVar15 + 1;
        uVar12 = uVar12 * 0x89 ^ uVar13;
        uVar13 = (uint)*pbVar15;
      } while (uVar13 != 0);
    }
  }
  local_1d0 = CONCAT44(local_1d0._4_4_,uVar12);
LAB_7101c90e8c:
  FUN_7103778760(*(long *)(param_2 + 8),0x71043196af);
  bVar7 = true;
LAB_7101c90ea8:
  pcVar1 = "color_r";
  if (local_220[0] != '\0') {
    pcVar1 = "color_g";
  }
  FUN_7103778300(0x3f800000,*(long *)(param_2 + 8),(long)pcVar1);
  FUN_7103776910(&local_f0,param_2,(long ****)"set_txt_filter_00",param_3,param_4,param_5,uVar11,
                 param_7,param_8);
  FUN_7103776910(&local_138,param_2,(long ****)"set_txt_filter_00_old",param_3,param_4,param_5,
                 uVar11,param_7,param_8);
  FUN_7103776910(&local_180,param_2,(long ****)"set_txt_filter_01",param_3,param_4,param_5,uVar11,
                 param_7,param_8);
  FUN_7103776910(&local_258,param_2,(long ****)"set_txt_filter_01_old",param_3,param_4,param_5,
                 uVar11,param_7,param_8);
  FUN_7103776910(&local_268,param_2,(long ****)"set_txt_filter",param_3,param_4,param_5,uVar11,
                 param_7,param_8);
  FUN_710377a120((long)&local_f0,(char *)local_210,param_3,param_4,param_5,uVar11,param_7,param_8);
  FUN_710377a120((long)&local_180,(char *)local_210,param_3,param_4,param_5,uVar11,param_7,param_8);
  if (local_184[0] != local_188[0]) {
    FUN_710377a120((long)&local_138,(char *)local_1c8,param_3,param_4,param_5,uVar11,param_7,param_8
                  );
    FUN_710377a120((long)&local_258,(char *)local_1c8,param_3,param_4,param_5,uVar11,param_7,param_8
                  );
    param_3 = &DAT_7104401d83;
    if ((char)local_184[0] <= (char)local_188[0]) {
      param_3 = &DAT_710438b71d;
    }
    FUN_7103778430(param_2,"txt_move_%s",param_3,param_4,param_5,uVar11,param_7,param_8);
  }
  FUN_710377a120((long)&local_268,(char *)local_210,param_3,param_4,param_5,uVar11,param_7,param_8);
  if ((param_6 & 1) != 0) {
    FUN_7103771d60(&local_278,*(long *)(param_1 + 0x120),(long ****)0x0,param_4,param_5,uVar11,
                   param_7,param_8);
    uVar9 = 1;
    FUN_7103771d60(&local_288,*(long *)(param_1 + 0x120),(long ****)0x1,param_4,param_5,uVar11,
                   param_7,param_8);
    puVar5 = local_280;
    if (local_184[0] == 0) {
      plVar21 = (long *)*local_280;
      if (plVar21 != (long *)0x0) {
        uVar13 = 1;
        (**(code **)(*plVar21 + 0x208))(plVar21,1);
        uVar14 = (**(code **)(*plVar21 + 0x200))(plVar21);
        if ((uVar14 & 1) != 0) {
          uVar13 = (**(code **)(*plVar21 + 0x210))(plVar21);
          uVar13 = uVar13 ^ 1;
        }
        uVar9 = 0;
        (**(code **)(*plVar21 + 0x388))(plVar21,uVar13 & 1);
      }
      plVar21 = (long *)*local_270;
      puVar22 = local_270;
      if (plVar21 != (long *)0x0) {
        (**(code **)(*plVar21 + 0x208))(plVar21,0);
        uVar14 = (**(code **)(*plVar21 + 0x200))(plVar21);
        if ((uVar14 & 1) == 0) {
          uVar13 = 1;
        }
        else {
          uVar13 = (**(code **)(*plVar21 + 0x210))(plVar21);
          uVar13 = uVar13 ^ 1;
        }
        uVar9 = 0;
        (**(code **)(*plVar21 + 0x388))(plVar21,uVar13 & 1);
      }
    }
    else {
      plVar21 = (long *)*local_280;
      if (local_184[0] == local_21c[0]) {
        if (plVar21 != (long *)0x0) {
          (**(code **)(*plVar21 + 0x208))(plVar21,0);
          uVar14 = (**(code **)(*plVar21 + 0x200))(plVar21);
          if ((uVar14 & 1) == 0) {
            uVar13 = 1;
          }
          else {
            uVar13 = (**(code **)(*plVar21 + 0x210))(plVar21);
            uVar13 = uVar13 ^ 1;
          }
          uVar9 = 0;
          (**(code **)(*plVar21 + 0x388))(plVar21,uVar13 & 1);
        }
      }
      else if (plVar21 != (long *)0x0) {
        uVar13 = 1;
        (**(code **)(*plVar21 + 0x208))(plVar21,1);
        uVar14 = (**(code **)(*plVar21 + 0x200))(plVar21);
        if ((uVar14 & 1) != 0) {
          uVar13 = (**(code **)(*plVar21 + 0x210))(plVar21);
          uVar13 = uVar13 ^ 1;
        }
        uVar9 = 0;
        (**(code **)(*plVar21 + 0x388))(plVar21,uVar13 & 1);
      }
      plVar21 = (long *)*local_270;
      puVar22 = local_270;
      if (plVar21 != (long *)0x0) {
        uVar13 = 1;
        (**(code **)(*plVar21 + 0x208))(plVar21,1);
        uVar14 = (**(code **)(*plVar21 + 0x200))(plVar21);
        if ((uVar14 & 1) != 0) {
          uVar13 = (**(code **)(*plVar21 + 0x210))(plVar21);
          uVar13 = uVar13 ^ 1;
        }
        uVar9 = 0;
        (**(code **)(*plVar21 + 0x388))(plVar21,uVar13 & 1);
      }
    }
    FUN_7101c83c40((long *)(param_1 + 0x120),1,uVar9,param_4,param_5,uVar11,param_7,param_8);
    if ((uVar10 == 3) && (!bVar7)) {
      plVar21 = (long *)*local_280;
      if (plVar21 != (long *)0x0) {
        (**(code **)(*plVar21 + 0x208))(plVar21,0);
        uVar14 = (**(code **)(*plVar21 + 0x200))(plVar21);
        if ((uVar14 & 1) == 0) {
          uVar13 = 1;
        }
        else {
          uVar13 = (**(code **)(*plVar21 + 0x210))(plVar21);
          uVar13 = uVar13 ^ 1;
        }
        uVar9 = 0;
        (**(code **)(*plVar21 + 0x388))(plVar21,uVar13 & 1);
      }
      plVar21 = (long *)*puVar22;
      if (plVar21 != (long *)0x0) {
        (**(code **)(*plVar21 + 0x208))(plVar21,0);
        uVar14 = (**(code **)(*plVar21 + 0x200))(plVar21);
        if ((uVar14 & 1) == 0) {
          uVar13 = 1;
        }
        else {
          uVar13 = (**(code **)(*plVar21 + 0x210))(plVar21);
          uVar13 = uVar13 ^ 1;
        }
        uVar9 = 0;
        (**(code **)(*plVar21 + 0x388))(plVar21,uVar13 & 1);
      }
      FUN_7101c83c40((long *)(param_1 + 0x120),0,uVar9,param_4,param_5,uVar11,param_7,param_8);
    }
    bVar7 = FUN_7101704ba0(*(long *)(DAT_71052c4c58 + 8) + 0xa0);
    if (bVar7) {
      if (*(char *)(param_1 + 0x138) != '\0') goto LAB_7101c91340;
LAB_7101c91300:
      if ((((*(char *)(param_1 + 0x139) != '\0') || (*(char *)(param_1 + 0x13a) != '\0')) ||
          (*(char *)(param_1 + 0x13b) != '\0')) || (*(char *)(param_1 + 0x13c) != '\0'))
      goto LAB_7101c91340;
      bVar7 = *(char *)(param_1 + 0x13d) != '\0';
    }
    else {
      FUN_7101797350(0);
      if (*(char *)(param_1 + 0x138) == '\0') goto LAB_7101c91300;
LAB_7101c91340:
      bVar7 = true;
    }
    FUN_7101c83c40((long *)(param_1 + 0x130),bVar7,uVar9,param_4,param_5,uVar11,param_7,param_8);
    local_288 = &PTR_FUN_710523d9c8;
    local_280 = (undefined8 *)0x0;
    if (puVar5 != (undefined8 *)0x0) {
      FUN_710392eb40((ulong)puVar5);
    }
    local_278 = &PTR_FUN_710523d9c8;
    local_270 = (undefined8 *)0x0;
    if (puVar22 != (undefined8 *)0x0) {
      FUN_710392eb40((ulong)puVar22);
    }
  }
  uVar11 = local_260;
  if (uVar10 < 6) {
    *(byte *)(param_1 + (int)uVar10 + 0x138) = local_184[0];
    local_268 = &PTR_FUN_710523d9a8;
    local_260 = 0;
    if (uVar11 != 0) {
      FUN_710392eb40(uVar11);
    }
    uVar11 = local_250;
    local_258 = &PTR_FUN_710523d9a8;
    local_250 = 0;
    if (uVar11 != 0) {
      FUN_710392eb40(uVar11);
    }
    puVar6 = local_178;
    local_180 = &PTR_FUN_710523d9a8;
    local_178 = (undefined1 *)0x0;
    if (puVar6 != (undefined1 *)0x0) {
      FUN_710392eb40((ulong)puVar6);
    }
    puVar6 = local_130;
    local_138 = &PTR_FUN_710523d9a8;
    local_130 = (undefined1 *)0x0;
    if (puVar6 != (undefined1 *)0x0) {
      FUN_710392eb40((ulong)puVar6);
    }
    uVar11 = local_e8;
    local_f0 = &PTR_FUN_710523d9a8;
    local_e8 = 0;
    if (uVar11 != 0) {
      FUN_710392eb40(uVar11);
    }
    return;
  }
LAB_7101c91400:
                    /* WARNING: Subroutine does not return */
  abort();
}

